#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_0023E820(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0023E820: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x0023E824: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x0023E828: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x0023E82C: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x0023E830: addu        $s3, $a1, $zero
    ctx->r19 = ADD32(ctx->r5, 0);
    // 0x0023E834: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x0023E838: addu        $s1, $a2, $zero
    ctx->r17 = ADD32(ctx->r6, 0);
    // 0x0023E83C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x0023E840: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x0023E844: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x0023E848: addu        $s4, $s0, $zero
    ctx->r20 = ADD32(ctx->r16, 0);
    // 0x0023E84C: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x0023E850: addiu       $a1, $a1, -0x2E50
    ctx->r5 = ADD32(ctx->r5, -0X2E50);
    // 0x0023E854: addiu       $v1, $zero, 0x1E
    ctx->r3 = ADD32(0, 0X1E);
    // 0x0023E858: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x0023E85C: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
L_0023E860:
    // 0x0023E860: lh          $v0, 0x4($a1)
    ctx->r2 = MEM_H(ctx->r5, 0X4);
    // 0x0023E864: beq         $v0, $s1, L_0023E87C
    if (ctx->r2 == ctx->r17) {
        // 0x0023E868: nop
    
            goto L_0023E87C;
    }
    // 0x0023E868: nop

    // 0x0023E86C: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x0023E870: bne         $v1, $a0, L_0023E860
    if (ctx->r3 != ctx->r4) {
        // 0x0023E874: addiu       $a1, $a1, 0x18
        ctx->r5 = ADD32(ctx->r5, 0X18);
            goto L_0023E860;
    }
    // 0x0023E874: addiu       $a1, $a1, 0x18
    ctx->r5 = ADD32(ctx->r5, 0X18);
    // 0x0023E878: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
L_0023E87C:
    // 0x0023E87C: beq         $a1, $zero, L_0023E894
    if (ctx->r5 == 0) {
        // 0x0023E880: nop
    
            goto L_0023E894;
    }
    // 0x0023E880: nop

    // 0x0023E884: lw          $v0, 0x14($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X14);
    // 0x0023E888: jalr        $v0
    // 0x0023E88C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x0023E88C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_0:
    // 0x0023E890: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
L_0023E894:
    // 0x0023E894: bne         $s0, $zero, L_0023ECD8
    if (ctx->r16 != 0) {
        // 0x0023E898: addu        $v0, $s0, $zero
        ctx->r2 = ADD32(ctx->r16, 0);
            goto L_0023ECD8;
    }
    // 0x0023E898: addu        $v0, $s0, $zero
    ctx->r2 = ADD32(ctx->r16, 0);
    // 0x0023E89C: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x0023E8A0: addiu       $a1, $a1, -0x2B68
    ctx->r5 = ADD32(ctx->r5, -0X2B68);
    // 0x0023E8A4: addiu       $v1, $zero, 0x23
    ctx->r3 = ADD32(0, 0X23);
    // 0x0023E8A8: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
L_0023E8AC:
    // 0x0023E8AC: lh          $v0, 0x4($a1)
    ctx->r2 = MEM_H(ctx->r5, 0X4);
    // 0x0023E8B0: beq         $v0, $s1, L_0023E8C8
    if (ctx->r2 == ctx->r17) {
        // 0x0023E8B4: nop
    
            goto L_0023E8C8;
    }
    // 0x0023E8B4: nop

    // 0x0023E8B8: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x0023E8BC: bne         $v1, $a0, L_0023E8AC
    if (ctx->r3 != ctx->r4) {
        // 0x0023E8C0: addiu       $a1, $a1, 0x14
        ctx->r5 = ADD32(ctx->r5, 0X14);
            goto L_0023E8AC;
    }
    // 0x0023E8C0: addiu       $a1, $a1, 0x14
    ctx->r5 = ADD32(ctx->r5, 0X14);
    // 0x0023E8C4: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
L_0023E8C8:
    // 0x0023E8C8: beq         $a1, $zero, L_0023E8E0
    if (ctx->r5 == 0) {
        // 0x0023E8CC: nop
    
            goto L_0023E8E0;
    }
    // 0x0023E8CC: nop

    // 0x0023E8D0: lw          $v0, 0x10($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X10);
    // 0x0023E8D4: jalr        $v0
    // 0x0023E8D8: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_1;
    // 0x0023E8D8: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_1:
    // 0x0023E8DC: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
L_0023E8E0:
    // 0x0023E8E0: bne         $s0, $zero, L_0023ECD8
    if (ctx->r16 != 0) {
        // 0x0023E8E4: addu        $v0, $s0, $zero
        ctx->r2 = ADD32(ctx->r16, 0);
            goto L_0023ECD8;
    }
    // 0x0023E8E4: addu        $v0, $s0, $zero
    ctx->r2 = ADD32(ctx->r16, 0);
    // 0x0023E8E8: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x0023E8EC: addiu       $a1, $a1, -0x2898
    ctx->r5 = ADD32(ctx->r5, -0X2898);
    // 0x0023E8F0: addiu       $v1, $zero, 0x6
    ctx->r3 = ADD32(0, 0X6);
    // 0x0023E8F4: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
L_0023E8F8:
    // 0x0023E8F8: lh          $v0, 0x4($a1)
    ctx->r2 = MEM_H(ctx->r5, 0X4);
    // 0x0023E8FC: beq         $v0, $s1, L_0023E914
    if (ctx->r2 == ctx->r17) {
        // 0x0023E900: nop
    
            goto L_0023E914;
    }
    // 0x0023E900: nop

    // 0x0023E904: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x0023E908: bne         $v1, $a0, L_0023E8F8
    if (ctx->r3 != ctx->r4) {
        // 0x0023E90C: addiu       $a1, $a1, 0x18
        ctx->r5 = ADD32(ctx->r5, 0X18);
            goto L_0023E8F8;
    }
    // 0x0023E90C: addiu       $a1, $a1, 0x18
    ctx->r5 = ADD32(ctx->r5, 0X18);
    // 0x0023E910: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
L_0023E914:
    // 0x0023E914: beq         $a1, $zero, L_0023E92C
    if (ctx->r5 == 0) {
        // 0x0023E918: nop
    
            goto L_0023E92C;
    }
    // 0x0023E918: nop

    // 0x0023E91C: lw          $v0, 0x14($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X14);
    // 0x0023E920: jalr        $v0
    // 0x0023E924: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_2;
    // 0x0023E924: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_2:
    // 0x0023E928: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
L_0023E92C:
    // 0x0023E92C: bne         $s0, $zero, L_0023ECD8
    if (ctx->r16 != 0) {
        // 0x0023E930: addu        $v0, $s0, $zero
        ctx->r2 = ADD32(ctx->r16, 0);
            goto L_0023ECD8;
    }
    // 0x0023E930: addu        $v0, $s0, $zero
    ctx->r2 = ADD32(ctx->r16, 0);
    // 0x0023E934: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x0023E938: addiu       $a1, $a1, -0x27F0
    ctx->r5 = ADD32(ctx->r5, -0X27F0);
    // 0x0023E93C: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x0023E940: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
L_0023E944:
    // 0x0023E944: lh          $v0, 0x4($a1)
    ctx->r2 = MEM_H(ctx->r5, 0X4);
    // 0x0023E948: beq         $v0, $s1, L_0023E960
    if (ctx->r2 == ctx->r17) {
        // 0x0023E94C: nop
    
            goto L_0023E960;
    }
    // 0x0023E94C: nop

    // 0x0023E950: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x0023E954: bne         $v1, $a0, L_0023E944
    if (ctx->r3 != ctx->r4) {
        // 0x0023E958: addiu       $a1, $a1, 0x14
        ctx->r5 = ADD32(ctx->r5, 0X14);
            goto L_0023E944;
    }
    // 0x0023E958: addiu       $a1, $a1, 0x14
    ctx->r5 = ADD32(ctx->r5, 0X14);
    // 0x0023E95C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
L_0023E960:
    // 0x0023E960: beq         $a1, $zero, L_0023E978
    if (ctx->r5 == 0) {
        // 0x0023E964: nop
    
            goto L_0023E978;
    }
    // 0x0023E964: nop

    // 0x0023E968: lw          $v0, 0x10($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X10);
    // 0x0023E96C: jalr        $v0
    // 0x0023E970: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_3;
    // 0x0023E970: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_3:
    // 0x0023E974: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
L_0023E978:
    // 0x0023E978: bne         $s0, $zero, L_0023ECD8
    if (ctx->r16 != 0) {
        // 0x0023E97C: addu        $v0, $s0, $zero
        ctx->r2 = ADD32(ctx->r16, 0);
            goto L_0023ECD8;
    }
    // 0x0023E97C: addu        $v0, $s0, $zero
    ctx->r2 = ADD32(ctx->r16, 0);
    // 0x0023E980: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x0023E984: addiu       $a1, $a1, -0x27C8
    ctx->r5 = ADD32(ctx->r5, -0X27C8);
    // 0x0023E988: addiu       $v1, $zero, 0xE
    ctx->r3 = ADD32(0, 0XE);
    // 0x0023E98C: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
L_0023E990:
    // 0x0023E990: lh          $v0, 0x4($a1)
    ctx->r2 = MEM_H(ctx->r5, 0X4);
    // 0x0023E994: beq         $v0, $s1, L_0023E9AC
    if (ctx->r2 == ctx->r17) {
        // 0x0023E998: nop
    
            goto L_0023E9AC;
    }
    // 0x0023E998: nop

    // 0x0023E99C: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x0023E9A0: bne         $v1, $a0, L_0023E990
    if (ctx->r3 != ctx->r4) {
        // 0x0023E9A4: addiu       $a1, $a1, 0x10
        ctx->r5 = ADD32(ctx->r5, 0X10);
            goto L_0023E990;
    }
    // 0x0023E9A4: addiu       $a1, $a1, 0x10
    ctx->r5 = ADD32(ctx->r5, 0X10);
    // 0x0023E9A8: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
L_0023E9AC:
    // 0x0023E9AC: beq         $a1, $zero, L_0023E9C4
    if (ctx->r5 == 0) {
        // 0x0023E9B0: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_0023E9C4;
    }
    // 0x0023E9B0: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x0023E9B4: lw          $v0, 0xC($a1)
    ctx->r2 = MEM_W(ctx->r5, 0XC);
    // 0x0023E9B8: jalr        $v0
    // 0x0023E9BC: addu        $a2, $s3, $zero
    ctx->r6 = ADD32(ctx->r19, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_4;
    // 0x0023E9BC: addu        $a2, $s3, $zero
    ctx->r6 = ADD32(ctx->r19, 0);
    after_4:
    // 0x0023E9C0: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
L_0023E9C4:
    // 0x0023E9C4: bne         $s0, $zero, L_0023ECD8
    if (ctx->r16 != 0) {
        // 0x0023E9C8: addu        $v0, $s0, $zero
        ctx->r2 = ADD32(ctx->r16, 0);
            goto L_0023ECD8;
    }
    // 0x0023E9C8: addu        $v0, $s0, $zero
    ctx->r2 = ADD32(ctx->r16, 0);
    // 0x0023E9CC: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x0023E9D0: jal         0x002536B4
    // 0x0023E9D4: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_002536B4(rdram, ctx);
        goto after_5;
    // 0x0023E9D4: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_5:
    // 0x0023E9D8: beq         $v0, $zero, L_0023ECD4
    if (ctx->r2 == 0) {
        // 0x0023E9DC: addiu       $s3, $zero, 0x1388
        ctx->r19 = ADD32(0, 0X1388);
            goto L_0023ECD4;
    }
    // 0x0023E9DC: addiu       $s3, $zero, 0x1388
    ctx->r19 = ADD32(0, 0X1388);
    // 0x0023E9E0: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x0023E9E4: jal         0x00248644
    // 0x0023E9E8: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_00248644(rdram, ctx);
        goto after_6;
    // 0x0023E9E8: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_6:
    // 0x0023E9EC: addiu       $v0, $s1, -0xFA0
    ctx->r2 = ADD32(ctx->r17, -0XFA0);
    // 0x0023E9F0: sltiu       $v0, $v0, 0x20
    ctx->r2 = ctx->r2 < 0X20 ? 1 : 0;
    // 0x0023E9F4: beq         $v0, $zero, L_0023EA70
    if (ctx->r2 == 0) {
        // 0x0023E9F8: addiu       $v0, $zero, 0xFB9
        ctx->r2 = ADD32(0, 0XFB9);
            goto L_0023EA70;
    }
    // 0x0023E9F8: addiu       $v0, $zero, 0xFB9
    ctx->r2 = ADD32(0, 0XFB9);
    // 0x0023E9FC: beq         $s1, $v0, L_0023EA40
    if (ctx->r17 == ctx->r2) {
        // 0x0023EA00: slti        $v0, $s1, 0xFBA
        ctx->r2 = SIGNED(ctx->r17) < 0XFBA ? 1 : 0;
            goto L_0023EA40;
    }
    // 0x0023EA00: slti        $v0, $s1, 0xFBA
    ctx->r2 = SIGNED(ctx->r17) < 0XFBA ? 1 : 0;
    // 0x0023EA04: beq         $v0, $zero, L_0023EA1C
    if (ctx->r2 == 0) {
        // 0x0023EA08: addiu       $v0, $zero, 0xFB4
        ctx->r2 = ADD32(0, 0XFB4);
            goto L_0023EA1C;
    }
    // 0x0023EA08: addiu       $v0, $zero, 0xFB4
    ctx->r2 = ADD32(0, 0XFB4);
    // 0x0023EA0C: beq         $s1, $v0, L_0023EA30
    if (ctx->r17 == ctx->r2) {
        // 0x0023EA10: nop
    
            goto L_0023EA30;
    }
    // 0x0023EA10: nop

    // 0x0023EA14: j           L_0023EA60
    // 0x0023EA18: nop

        goto L_0023EA60;
    // 0x0023EA18: nop

L_0023EA1C:
    // 0x0023EA1C: addiu       $v0, $zero, 0xFBE
    ctx->r2 = ADD32(0, 0XFBE);
    // 0x0023EA20: beq         $s1, $v0, L_0023EA50
    if (ctx->r17 == ctx->r2) {
        // 0x0023EA24: nop
    
            goto L_0023EA50;
    }
    // 0x0023EA24: nop

    // 0x0023EA28: j           L_0023EA60
    // 0x0023EA2C: nop

        goto L_0023EA60;
    // 0x0023EA2C: nop

L_0023EA30:
    // 0x0023EA30: lui         $s0, 0x800B
    ctx->r16 = S32(0X800B << 16);
    // 0x0023EA34: addiu       $s0, $s0, 0x37DC
    ctx->r16 = ADD32(ctx->r16, 0X37DC);
    // 0x0023EA38: j           L_0023EC58
    // 0x0023EA3C: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
        goto L_0023EC58;
    // 0x0023EA3C: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
L_0023EA40:
    // 0x0023EA40: lui         $s0, 0x800B
    ctx->r16 = S32(0X800B << 16);
    // 0x0023EA44: addiu       $s0, $s0, 0x383C
    ctx->r16 = ADD32(ctx->r16, 0X383C);
    // 0x0023EA48: j           L_0023EC58
    // 0x0023EA4C: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
        goto L_0023EC58;
    // 0x0023EA4C: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
L_0023EA50:
    // 0x0023EA50: lui         $s0, 0x800B
    ctx->r16 = S32(0X800B << 16);
    // 0x0023EA54: addiu       $s0, $s0, 0x3830
    ctx->r16 = ADD32(ctx->r16, 0X3830);
    // 0x0023EA58: j           L_0023EC58
    // 0x0023EA5C: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
        goto L_0023EC58;
    // 0x0023EA5C: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
L_0023EA60:
    // 0x0023EA60: lui         $s0, 0x800B
    ctx->r16 = S32(0X800B << 16);
    // 0x0023EA64: addiu       $s0, $s0, 0x37D8
    ctx->r16 = ADD32(ctx->r16, 0X37D8);
    // 0x0023EA68: j           L_0023EC58
    // 0x0023EA6C: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
        goto L_0023EC58;
    // 0x0023EA6C: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
L_0023EA70:
    // 0x0023EA70: addiu       $v0, $s1, -0x1004
    ctx->r2 = ADD32(ctx->r17, -0X1004);
    // 0x0023EA74: sltiu       $v0, $v0, 0x20
    ctx->r2 = ctx->r2 < 0X20 ? 1 : 0;
    // 0x0023EA78: beq         $v0, $zero, L_0023EA90
    if (ctx->r2 == 0) {
        // 0x0023EA7C: addiu       $a1, $zero, 0x80
        ctx->r5 = ADD32(0, 0X80);
            goto L_0023EA90;
    }
    // 0x0023EA7C: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    // 0x0023EA80: lui         $s0, 0x800B
    ctx->r16 = S32(0X800B << 16);
    // 0x0023EA84: addiu       $s0, $s0, 0x37BC
    ctx->r16 = ADD32(ctx->r16, 0X37BC);
    // 0x0023EA88: j           L_0023EC5C
    // 0x0023EA8C: addiu       $a2, $zero, 0x32
    ctx->r6 = ADD32(0, 0X32);
        goto L_0023EC5C;
    // 0x0023EA8C: addiu       $a2, $zero, 0x32
    ctx->r6 = ADD32(0, 0X32);
L_0023EA90:
    // 0x0023EA90: addiu       $v0, $s1, -0x1068
    ctx->r2 = ADD32(ctx->r17, -0X1068);
    // 0x0023EA94: sltiu       $v0, $v0, 0x20
    ctx->r2 = ctx->r2 < 0X20 ? 1 : 0;
    // 0x0023EA98: beq         $v0, $zero, L_0023EB1C
    if (ctx->r2 == 0) {
        // 0x0023EA9C: addiu       $v0, $zero, 0x1085
        ctx->r2 = ADD32(0, 0X1085);
            goto L_0023EB1C;
    }
    // 0x0023EA9C: addiu       $v0, $zero, 0x1085
    ctx->r2 = ADD32(0, 0X1085);
    // 0x0023EAA0: beq         $s1, $v0, L_0023EADC
    if (ctx->r17 == ctx->r2) {
        // 0x0023EAA4: slti        $v0, $s1, 0x1086
        ctx->r2 = SIGNED(ctx->r17) < 0X1086 ? 1 : 0;
            goto L_0023EADC;
    }
    // 0x0023EAA4: slti        $v0, $s1, 0x1086
    ctx->r2 = SIGNED(ctx->r17) < 0X1086 ? 1 : 0;
    // 0x0023EAA8: beq         $v0, $zero, L_0023EAC0
    if (ctx->r2 == 0) {
        // 0x0023EAAC: addiu       $v0, $zero, 0x1084
        ctx->r2 = ADD32(0, 0X1084);
            goto L_0023EAC0;
    }
    // 0x0023EAAC: addiu       $v0, $zero, 0x1084
    ctx->r2 = ADD32(0, 0X1084);
    // 0x0023EAB0: beq         $s1, $v0, L_0023EC54
    if (ctx->r17 == ctx->r2) {
        // 0x0023EAB4: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_0023EC54;
    }
    // 0x0023EAB4: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x0023EAB8: j           L_0023EB0C
    // 0x0023EABC: nop

        goto L_0023EB0C;
    // 0x0023EABC: nop

L_0023EAC0:
    // 0x0023EAC0: addiu       $v0, $zero, 0x1086
    ctx->r2 = ADD32(0, 0X1086);
    // 0x0023EAC4: beq         $s1, $v0, L_0023EAEC
    if (ctx->r17 == ctx->r2) {
        // 0x0023EAC8: addiu       $v0, $zero, 0x1087
        ctx->r2 = ADD32(0, 0X1087);
            goto L_0023EAEC;
    }
    // 0x0023EAC8: addiu       $v0, $zero, 0x1087
    ctx->r2 = ADD32(0, 0X1087);
    // 0x0023EACC: beq         $s1, $v0, L_0023EAFC
    if (ctx->r17 == ctx->r2) {
        // 0x0023EAD0: nop
    
            goto L_0023EAFC;
    }
    // 0x0023EAD0: nop

    // 0x0023EAD4: j           L_0023EB0C
    // 0x0023EAD8: nop

        goto L_0023EB0C;
    // 0x0023EAD8: nop

L_0023EADC:
    // 0x0023EADC: lui         $s0, 0x800B
    ctx->r16 = S32(0X800B << 16);
    // 0x0023EAE0: addiu       $s0, $s0, 0x3810
    ctx->r16 = ADD32(ctx->r16, 0X3810);
    // 0x0023EAE4: j           L_0023EC58
    // 0x0023EAE8: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
        goto L_0023EC58;
    // 0x0023EAE8: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
L_0023EAEC:
    // 0x0023EAEC: lui         $s0, 0x800B
    ctx->r16 = S32(0X800B << 16);
    // 0x0023EAF0: addiu       $s0, $s0, 0x3820
    ctx->r16 = ADD32(ctx->r16, 0X3820);
    // 0x0023EAF4: j           L_0023EC58
    // 0x0023EAF8: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
        goto L_0023EC58;
    // 0x0023EAF8: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
L_0023EAFC:
    // 0x0023EAFC: lui         $s0, 0x800B
    ctx->r16 = S32(0X800B << 16);
    // 0x0023EB00: addiu       $s0, $s0, 0x3800
    ctx->r16 = ADD32(ctx->r16, 0X3800);
    // 0x0023EB04: j           L_0023EC54
    // 0x0023EB08: addiu       $s4, $zero, 0x17D
    ctx->r20 = ADD32(0, 0X17D);
        goto L_0023EC54;
    // 0x0023EB08: addiu       $s4, $zero, 0x17D
    ctx->r20 = ADD32(0, 0X17D);
L_0023EB0C:
    // 0x0023EB0C: lui         $s0, 0x800B
    ctx->r16 = S32(0X800B << 16);
    // 0x0023EB10: addiu       $s0, $s0, 0x37CC
    ctx->r16 = ADD32(ctx->r16, 0X37CC);
    // 0x0023EB14: j           L_0023EC58
    // 0x0023EB18: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
        goto L_0023EC58;
    // 0x0023EB18: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
L_0023EB1C:
    // 0x0023EB1C: addiu       $v1, $s1, -0x10CC
    ctx->r3 = ADD32(ctx->r17, -0X10CC);
    // 0x0023EB20: sltiu       $v0, $v1, 0x33
    ctx->r2 = ctx->r3 < 0X33 ? 1 : 0;
    // 0x0023EB24: beq         $v0, $zero, L_0023EBC8
    if (ctx->r2 == 0) {
        // 0x0023EB28: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_0023EBC8;
    }
    // 0x0023EB28: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x0023EB2C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0023EB30: addu        $at, $at, $v0
    gpr jr_addend_0023EB38 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x0023EB34: lw          $v0, 0x66E0($at)
    ctx->r2 = ADD32(ctx->r1, 0X66E0);
    // 0x0023EB38: jr          $v0
    // 0x0023EB3C: nop

    switch (jr_addend_0023EB38 >> 2) {
        case 0: goto L_0023EB40; break;
        case 1: goto L_0023EC50; break;
        case 2: goto L_0023EC50; break;
        case 3: goto L_0023EC50; break;
        case 4: goto L_0023EC50; break;
        case 5: goto L_0023EC50; break;
        case 6: goto L_0023EC50; break;
        case 7: goto L_0023EC50; break;
        case 8: goto L_0023EC50; break;
        case 9: goto L_0023EC50; break;
        case 10: goto L_0023EB50; break;
        case 11: goto L_0023EC50; break;
        case 12: goto L_0023EC50; break;
        case 13: goto L_0023EC50; break;
        case 14: goto L_0023EC50; break;
        case 15: goto L_0023EC50; break;
        case 16: goto L_0023EC50; break;
        case 17: goto L_0023EC50; break;
        case 18: goto L_0023EC50; break;
        case 19: goto L_0023EC50; break;
        case 20: goto L_0023EB60; break;
        case 21: goto L_0023EC50; break;
        case 22: goto L_0023EC50; break;
        case 23: goto L_0023EC50; break;
        case 24: goto L_0023EC50; break;
        case 25: goto L_0023EC50; break;
        case 26: goto L_0023EC50; break;
        case 27: goto L_0023EC50; break;
        case 28: goto L_0023EC50; break;
        case 29: goto L_0023EC50; break;
        case 30: goto L_0023EB70; break;
        case 31: goto L_0023EC50; break;
        case 32: goto L_0023EC50; break;
        case 33: goto L_0023EC50; break;
        case 34: goto L_0023EC50; break;
        case 35: goto L_0023EC50; break;
        case 36: goto L_0023EC50; break;
        case 37: goto L_0023EC50; break;
        case 38: goto L_0023EC50; break;
        case 39: goto L_0023EC50; break;
        case 40: goto L_0023EB80; break;
        case 41: goto L_0023EC50; break;
        case 42: goto L_0023EC50; break;
        case 43: goto L_0023EC50; break;
        case 44: goto L_0023EC50; break;
        case 45: goto L_0023EC50; break;
        case 46: goto L_0023EC50; break;
        case 47: goto L_0023EC50; break;
        case 48: goto L_0023EC50; break;
        case 49: goto L_0023EC50; break;
        case 50: goto L_0023EB90; break;
        default: switch_error(__func__, 0x0023EB38, 0x800A66E0);
    }
    // 0x0023EB3C: nop

L_0023EB40:
    // 0x0023EB40: lui         $s0, 0x800B
    ctx->r16 = S32(0X800B << 16);
    // 0x0023EB44: addiu       $s0, $s0, 0x384C
    ctx->r16 = ADD32(ctx->r16, 0X384C);
    // 0x0023EB48: j           L_0023EC58
    // 0x0023EB4C: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
        goto L_0023EC58;
    // 0x0023EB4C: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
L_0023EB50:
    // 0x0023EB50: lui         $s0, 0x800B
    ctx->r16 = S32(0X800B << 16);
    // 0x0023EB54: addiu       $s0, $s0, 0x3858
    ctx->r16 = ADD32(ctx->r16, 0X3858);
    // 0x0023EB58: j           L_0023EC58
    // 0x0023EB5C: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
        goto L_0023EC58;
    // 0x0023EB5C: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
L_0023EB60:
    // 0x0023EB60: lui         $s0, 0x800B
    ctx->r16 = S32(0X800B << 16);
    // 0x0023EB64: addiu       $s0, $s0, 0x3864
    ctx->r16 = ADD32(ctx->r16, 0X3864);
    // 0x0023EB68: j           L_0023EC58
    // 0x0023EB6C: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
        goto L_0023EC58;
    // 0x0023EB6C: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
L_0023EB70:
    // 0x0023EB70: lui         $s0, 0x800B
    ctx->r16 = S32(0X800B << 16);
    // 0x0023EB74: addiu       $s0, $s0, 0x3870
    ctx->r16 = ADD32(ctx->r16, 0X3870);
    // 0x0023EB78: j           L_0023EC58
    // 0x0023EB7C: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
        goto L_0023EC58;
    // 0x0023EB7C: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
L_0023EB80:
    // 0x0023EB80: lui         $s0, 0x800B
    ctx->r16 = S32(0X800B << 16);
    // 0x0023EB84: addiu       $s0, $s0, 0x387C
    ctx->r16 = ADD32(ctx->r16, 0X387C);
    // 0x0023EB88: j           L_0023EC58
    // 0x0023EB8C: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
        goto L_0023EC58;
    // 0x0023EB8C: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
L_0023EB90:
    // 0x0023EB90: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x0023EB94: lw          $a0, 0x48($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X48);
    // 0x0023EB98: lui         $s0, 0x800B
    ctx->r16 = S32(0X800B << 16);
    // 0x0023EB9C: addiu       $s0, $s0, 0x3888
    ctx->r16 = ADD32(ctx->r16, 0X3888);
    // 0x0023EBA0: jal         0x0026EFB8
    // 0x0023EBA4: nop

    func_0026EFB8(rdram, ctx);
        goto after_7;
    // 0x0023EBA4: nop

    after_7:
    // 0x0023EBA8: addiu       $v1, $v0, -0x1
    ctx->r3 = ADD32(ctx->r2, -0X1);
    // 0x0023EBAC: sltiu       $v0, $v1, 0x6
    ctx->r2 = ctx->r3 < 0X6 ? 1 : 0;
    // 0x0023EBB0: beq         $v0, $zero, L_0023EC54
    if (ctx->r2 == 0) {
        // 0x0023EBB4: addu        $v1, $s2, $v1
        ctx->r3 = ADD32(ctx->r18, ctx->r3);
            goto L_0023EC54;
    }
    // 0x0023EBB4: addu        $v1, $s2, $v1
    ctx->r3 = ADD32(ctx->r18, ctx->r3);
    // 0x0023EBB8: lbu         $v0, 0xA02($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0XA02);
    // 0x0023EBBC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x0023EBC0: j           L_0023EC54
    // 0x0023EBC4: sb          $v0, 0xA02($v1)
    MEM_B(0XA02, ctx->r3) = ctx->r2;
        goto L_0023EC54;
    // 0x0023EBC4: sb          $v0, 0xA02($v1)
    MEM_B(0XA02, ctx->r3) = ctx->r2;
L_0023EBC8:
    // 0x0023EBC8: addiu       $a1, $s1, -0x1108
    ctx->r5 = ADD32(ctx->r17, -0X1108);
    // 0x0023EBCC: sltiu       $v0, $a1, 0x6
    ctx->r2 = ctx->r5 < 0X6 ? 1 : 0;
    // 0x0023EBD0: beq         $v0, $zero, L_0023EC50
    if (ctx->r2 == 0) {
        // 0x0023EBD4: sll         $v0, $a1, 2
        ctx->r2 = S32(ctx->r5 << 2);
            goto L_0023EC50;
    }
    // 0x0023EBD4: sll         $v0, $a1, 2
    ctx->r2 = S32(ctx->r5 << 2);
    // 0x0023EBD8: addiu       $s3, $zero, 0x13A9
    ctx->r19 = ADD32(0, 0X13A9);
    // 0x0023EBDC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0023EBE0: addu        $at, $at, $v0
    gpr jr_addend_0023EBE8 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x0023EBE4: lw          $v0, 0x67B0($at)
    ctx->r2 = ADD32(ctx->r1, 0X67B0);
    // 0x0023EBE8: jr          $v0
    // 0x0023EBEC: addiu       $s4, $zero, 0x180
    ctx->r20 = ADD32(0, 0X180);
    switch (jr_addend_0023EBE8 >> 2) {
        case 0: goto L_0023EBF0; break;
        case 1: goto L_0023EC00; break;
        case 2: goto L_0023EC10; break;
        case 3: goto L_0023EC20; break;
        case 4: goto L_0023EC30; break;
        case 5: goto L_0023EC40; break;
        default: switch_error(__func__, 0x0023EBE8, 0x800A67B0);
    }
    // 0x0023EBEC: addiu       $s4, $zero, 0x180
    ctx->r20 = ADD32(0, 0X180);
L_0023EBF0:
    // 0x0023EBF0: lui         $s0, 0x800B
    ctx->r16 = S32(0X800B << 16);
    // 0x0023EBF4: addiu       $s0, $s0, 0x3894
    ctx->r16 = ADD32(ctx->r16, 0X3894);
    // 0x0023EBF8: j           L_0023EC58
    // 0x0023EBFC: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
        goto L_0023EC58;
    // 0x0023EBFC: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
L_0023EC00:
    // 0x0023EC00: lui         $s0, 0x800B
    ctx->r16 = S32(0X800B << 16);
    // 0x0023EC04: addiu       $s0, $s0, 0x38A4
    ctx->r16 = ADD32(ctx->r16, 0X38A4);
    // 0x0023EC08: j           L_0023EC58
    // 0x0023EC0C: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
        goto L_0023EC58;
    // 0x0023EC0C: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
L_0023EC10:
    // 0x0023EC10: lui         $s0, 0x800B
    ctx->r16 = S32(0X800B << 16);
    // 0x0023EC14: addiu       $s0, $s0, 0x38B4
    ctx->r16 = ADD32(ctx->r16, 0X38B4);
    // 0x0023EC18: j           L_0023EC58
    // 0x0023EC1C: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
        goto L_0023EC58;
    // 0x0023EC1C: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
L_0023EC20:
    // 0x0023EC20: lui         $s0, 0x800B
    ctx->r16 = S32(0X800B << 16);
    // 0x0023EC24: addiu       $s0, $s0, 0x38C4
    ctx->r16 = ADD32(ctx->r16, 0X38C4);
    // 0x0023EC28: j           L_0023EC58
    // 0x0023EC2C: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
        goto L_0023EC58;
    // 0x0023EC2C: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
L_0023EC30:
    // 0x0023EC30: lui         $s0, 0x800B
    ctx->r16 = S32(0X800B << 16);
    // 0x0023EC34: addiu       $s0, $s0, 0x38D4
    ctx->r16 = ADD32(ctx->r16, 0X38D4);
    // 0x0023EC38: j           L_0023EC58
    // 0x0023EC3C: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
        goto L_0023EC58;
    // 0x0023EC3C: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
L_0023EC40:
    // 0x0023EC40: lui         $s0, 0x800B
    ctx->r16 = S32(0X800B << 16);
    // 0x0023EC44: addiu       $s0, $s0, 0x38E4
    ctx->r16 = ADD32(ctx->r16, 0X38E4);
    // 0x0023EC48: j           L_0023EC58
    // 0x0023EC4C: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
        goto L_0023EC58;
    // 0x0023EC4C: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
L_0023EC50:
    // 0x0023EC50: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
L_0023EC54:
    // 0x0023EC54: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
L_0023EC58:
    // 0x0023EC58: addiu       $a2, $zero, 0x32
    ctx->r6 = ADD32(0, 0X32);
L_0023EC5C:
    // 0x0023EC5C: addiu       $v0, $zero, 0x4B
    ctx->r2 = ADD32(0, 0X4B);
    // 0x0023EC60: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x0023EC64: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x0023EC68: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x0023EC6C: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x0023EC70: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x0023EC74: lw          $a0, 0x51C($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X51C);
    // 0x0023EC78: jal         0x00281060
    // 0x0023EC7C: addu        $a3, $a2, $zero
    ctx->r7 = ADD32(ctx->r6, 0);
    func_00281060(rdram, ctx);
        goto after_8;
    // 0x0023EC7C: addu        $a3, $a2, $zero
    ctx->r7 = ADD32(ctx->r6, 0);
    after_8:
    // 0x0023EC80: beq         $s0, $zero, L_0023EC9C
    if (ctx->r16 == 0) {
        // 0x0023EC84: nop
    
            goto L_0023EC9C;
    }
    // 0x0023EC84: nop

    // 0x0023EC88: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x0023EC8C: addiu       $a0, $a0, -0x6750
    ctx->r4 = ADD32(ctx->r4, -0X6750);
    // 0x0023EC90: lw          $a1, 0x51C($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X51C);
    // 0x0023EC94: jal         0x0027FC2C
    // 0x0023EC98: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    func_0027FC2C(rdram, ctx);
        goto after_9;
    // 0x0023EC98: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    after_9:
L_0023EC9C:
    // 0x0023EC9C: beq         $s3, $zero, L_0023ECC0
    if (ctx->r19 == 0) {
        // 0x0023ECA0: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_0023ECC0;
    }
    // 0x0023ECA0: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x0023ECA4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x0023ECA8: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x0023ECAC: lw          $a1, 0x4($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X4);
    // 0x0023ECB0: lw          $a2, 0x8($s2)
    ctx->r6 = MEM_W(ctx->r18, 0X8);
    // 0x0023ECB4: lw          $a3, 0xC($s2)
    ctx->r7 = MEM_W(ctx->r18, 0XC);
    // 0x0023ECB8: jal         0x00275544
    // 0x0023ECBC: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    func_00275544(rdram, ctx);
        goto after_10;
    // 0x0023ECBC: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    after_10:
L_0023ECC0:
    // 0x0023ECC0: beq         $s4, $zero, L_0023ECD4
    if (ctx->r20 == 0) {
        // 0x0023ECC4: addiu       $s0, $zero, 0x1
        ctx->r16 = ADD32(0, 0X1);
            goto L_0023ECD4;
    }
    // 0x0023ECC4: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
    // 0x0023ECC8: jal         0x0027580C
    // 0x0023ECCC: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    func_0027580C(rdram, ctx);
        goto after_11;
    // 0x0023ECCC: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    after_11:
    // 0x0023ECD0: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
L_0023ECD4:
    // 0x0023ECD4: addu        $v0, $s0, $zero
    ctx->r2 = ADD32(ctx->r16, 0);
L_0023ECD8:
    // 0x0023ECD8: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x0023ECDC: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x0023ECE0: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x0023ECE4: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x0023ECE8: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x0023ECEC: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x0023ECF0: jr          $ra
    // 0x0023ECF4: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x0023ECF4: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_0041BBB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041BBB0: sb          $zero, 0x2B($a0)
    MEM_B(0X2B, ctx->r4) = 0;
    // 0x0041BBB4: sb          $s0, 0x2D($a0)
    MEM_B(0X2D, ctx->r4) = ctx->r16;
    // 0x0041BBB8: sb          $zero, 0x2E($a0)
    MEM_B(0X2E, ctx->r4) = 0;
    // 0x0041BBBC: sb          $zero, 0x2F($a0)
    MEM_B(0X2F, ctx->r4) = 0;
    // 0x0041BBC0: sb          $zero, 0x30($a0)
    MEM_B(0X30, ctx->r4) = 0;
    // 0x0041BBC4: sb          $s0, 0x31($a0)
    MEM_B(0X31, ctx->r4) = ctx->r16;
    // 0x0041BBC8: jal         0x0041BC50
    // 0x0041BBCC: sb          $zero, 0x32($a0)
    MEM_B(0X32, ctx->r4) = 0;
    func_0041BC50(rdram, ctx);
        goto after_0;
    // 0x0041BBCC: sb          $zero, 0x32($a0)
    MEM_B(0X32, ctx->r4) = 0;
    after_0:
    // 0x0041BBD0: lui         $v0, 0x400
    ctx->r2 = S32(0X400 << 16);
    // 0x0041BBD4: sb          $s0, 0x68($s1)
    MEM_B(0X68, ctx->r17) = ctx->r16;
    // 0x0041BBD8: sb          $zero, 0x19($s1)
    MEM_B(0X19, ctx->r17) = 0;
    // 0x0041BBDC: sb          $s0, 0x1A($s1)
    MEM_B(0X1A, ctx->r17) = ctx->r16;
    // 0x0041BBE0: sw          $v0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r2;
    // 0x0041BBE4: sw          $v0, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->r2;
    // 0x0041BBE8: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x0041BBEC: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x0041BBF0: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x0041BBF4: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x0041BBF8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0041BBFC: jr          $ra
    // 0x0041BC00: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x0041BC00: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_0025A970(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0025A970: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0025A974: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x0025A978: lw          $v0, 0x14($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X14);
    // 0x0025A97C: lhu         $a3, 0x8E($v0)
    ctx->r7 = MEM_HU(ctx->r2, 0X8E);
    // 0x0025A980: lui         $a2, 0x800B
    ctx->r6 = S32(0X800B << 16);
    // 0x0025A984: addiu       $a2, $a2, 0x270
    ctx->r6 = ADD32(ctx->r6, 0X270);
    // 0x0025A988: jal         0x00245A98
    // 0x0025A98C: nop

    func_00245A98(rdram, ctx);
        goto after_0;
    // 0x0025A98C: nop

    after_0:
    // 0x0025A990: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x0025A994: jr          $ra
    // 0x0025A998: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0025A998: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00232F38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00232F38: lhu         $v1, 0x2($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X2);
    // 0x00232F3C: addiu       $v0, $zero, 0x11
    ctx->r2 = ADD32(0, 0X11);
    // 0x00232F40: beq         $v1, $v0, L_00232FAC
    if (ctx->r3 == ctx->r2) {
        // 0x00232F44: slti        $v0, $v1, 0x12
        ctx->r2 = SIGNED(ctx->r3) < 0X12 ? 1 : 0;
            goto L_00232FAC;
    }
    // 0x00232F44: slti        $v0, $v1, 0x12
    ctx->r2 = SIGNED(ctx->r3) < 0X12 ? 1 : 0;
    // 0x00232F48: beq         $v0, $zero, L_00232F74
    if (ctx->r2 == 0) {
        // 0x00232F4C: slti        $v0, $v1, 0x5
        ctx->r2 = SIGNED(ctx->r3) < 0X5 ? 1 : 0;
            goto L_00232F74;
    }
    // 0x00232F4C: slti        $v0, $v1, 0x5
    ctx->r2 = SIGNED(ctx->r3) < 0X5 ? 1 : 0;
    // 0x00232F50: bne         $v0, $zero, L_00232FB4
    if (ctx->r2 != 0) {
            // 0x00232F54: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    func_00232FB4(rdram, ctx);
    return;
    }
    // 0x00232F54: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x00232F58: slti        $v0, $v1, 0x8
    ctx->r2 = SIGNED(ctx->r3) < 0X8 ? 1 : 0;
    // 0x00232F5C: bne         $v0, $zero, L_00232FAC
    if (ctx->r2 != 0) {
        // 0x00232F60: addiu       $v0, $zero, 0x9
        ctx->r2 = ADD32(0, 0X9);
            goto L_00232FAC;
    }
    // 0x00232F60: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
    // 0x00232F64: beq         $v1, $v0, L_00232FAC
    if (ctx->r3 == ctx->r2) {
        // 0x00232F68: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_00232FAC;
    }
    // 0x00232F68: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x00232F6C: j           L_00232FB4
    // 0x00232F70: nop

    func_00232FB4(rdram, ctx);
    return;
    // 0x00232F70: nop

L_00232F74:
    // 0x00232F74: addiu       $v0, $zero, 0x1A
    ctx->r2 = ADD32(0, 0X1A);
    // 0x00232F78: beq         $v1, $v0, L_00232FAC
    if (ctx->r3 == ctx->r2) {
        // 0x00232F7C: slti        $v0, $v1, 0x1B
        ctx->r2 = SIGNED(ctx->r3) < 0X1B ? 1 : 0;
            goto L_00232FAC;
    }
    // 0x00232F7C: slti        $v0, $v1, 0x1B
    ctx->r2 = SIGNED(ctx->r3) < 0X1B ? 1 : 0;
    // 0x00232F80: beq         $v0, $zero, L_00232F98
    if (ctx->r2 == 0) {
        // 0x00232F84: addiu       $v0, $zero, 0x13
        ctx->r2 = ADD32(0, 0X13);
            goto L_00232F98;
    }
    // 0x00232F84: addiu       $v0, $zero, 0x13
    ctx->r2 = ADD32(0, 0X13);
    // 0x00232F88: beq         $v1, $v0, L_00232FAC
    if (ctx->r3 == ctx->r2) {
        // 0x00232F8C: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_00232FAC;
    }
    // 0x00232F8C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x00232F90: j           L_00232FB4
    // 0x00232F94: nop

    func_00232FB4(rdram, ctx);
    return;
    // 0x00232F94: nop

L_00232F98:
    // 0x00232F98: addiu       $v0, $zero, 0x101
    ctx->r2 = ADD32(0, 0X101);
    // 0x00232F9C: beq         $v1, $v0, L_00232FAC
    if (ctx->r3 == ctx->r2) {
        // 0x00232FA0: addiu       $v0, $zero, 0x110
        ctx->r2 = ADD32(0, 0X110);
            goto L_00232FAC;
    }
    // 0x00232FA0: addiu       $v0, $zero, 0x110
    ctx->r2 = ADD32(0, 0X110);
    // 0x00232FA4: bne         $v1, $v0, L_00232FB4
    if (ctx->r3 != ctx->r2) {
            // 0x00232FA8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    func_00232FB4(rdram, ctx);
    return;
    }
    // 0x00232FA8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_00232FAC:
    // 0x00232FAC: jr          $ra
    // 0x00232FB0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x00232FB0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
;}
RECOMP_FUNC void func_00429FA0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00429FA0: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x00429FA4: sw          $s3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r19;
    // 0x00429FA8: addu        $s3, $a0, $zero
    ctx->r19 = ADD32(ctx->r4, 0);
    // 0x00429FAC: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    // 0x00429FB0: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x00429FB4: sw          $ra, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r31;
    // 0x00429FB8: sw          $s5, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r21;
    // 0x00429FBC: sw          $s4, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r20;
    // 0x00429FC0: sw          $s2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r18;
    // 0x00429FC4: jal         0x00226390
    // 0x00429FC8: sw          $s1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r17;
    func_00226390(rdram, ctx);
        goto after_0;
    // 0x00429FC8: sw          $s1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r17;
    after_0:
    // 0x00429FCC: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x00429FD0: jal         0x0042C4F4
    // 0x00429FD4: sw          $zero, 0x0($s3)
    MEM_W(0X0, ctx->r19) = 0;
    func_0042C4F4(rdram, ctx);
        goto after_1;
    // 0x00429FD4: sw          $zero, 0x0($s3)
    MEM_W(0X0, ctx->r19) = 0;
    after_1:
    // 0x00429FD8: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x00429FDC: addiu       $a0, $a0, -0x6790
    ctx->r4 = ADD32(ctx->r4, -0X6790);
    // 0x00429FE0: addiu       $s2, $zero, -0x1
    ctx->r18 = ADD32(0, -0X1);
    // 0x00429FE4: sw          $zero, 0x4($s3)
    MEM_W(0X4, ctx->r19) = 0;
    // 0x00429FE8: sw          $zero, 0x8($s3)
    MEM_W(0X8, ctx->r19) = 0;
    // 0x00429FEC: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x00429FF0: addu        $at, $s3, $at
    ctx->r1 = ADD32(ctx->r19, ctx->r1);
    // 0x00429FF4: sw          $s2, -0x7058($at)
    MEM_W(-0X7058, ctx->r1) = ctx->r18;
    // 0x00429FF8: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x00429FFC: addu        $at, $s3, $at
    ctx->r1 = ADD32(ctx->r19, ctx->r1);
    // 0x0042A000: sw          $zero, -0x7148($at)
    MEM_W(-0X7148, ctx->r1) = 0;
    // 0x0042A004: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x0042A008: addu        $at, $s3, $at
    ctx->r1 = ADD32(ctx->r19, ctx->r1);
    // 0x0042A00C: sw          $zero, -0x715C($at)
    MEM_W(-0X715C, ctx->r1) = 0;
    // 0x0042A010: jal         0x0042E894
    // 0x0042A014: addiu       $s4, $zero, 0x1
    ctx->r20 = ADD32(0, 0X1);
    func_0042E894(rdram, ctx);
        goto after_2;
    // 0x0042A014: addiu       $s4, $zero, 0x1
    ctx->r20 = ADD32(0, 0X1);
    after_2:
    // 0x0042A018: lui         $v0, 0x1
    ctx->r2 = S32(0X1 << 16);
    // 0x0042A01C: ori         $v0, $v0, 0x8EA8
    ctx->r2 = ctx->r2 | 0X8EA8;
    // 0x0042A020: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x0042A024: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0042A028: lwc1        $f1, 0x5EA0($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X5EA0);
    // 0x0042A02C: addu        $v0, $s3, $v0
    ctx->r2 = ADD32(ctx->r19, ctx->r2);
    // 0x0042A030: swc1        $f0, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f0.u32l;
    // 0x0042A034: swc1        $f0, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f0.u32l;
    // 0x0042A038: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x0042A03C: addu        $at, $s3, $at
    ctx->r1 = ADD32(ctx->r19, ctx->r1);
    // 0x0042A040: swc1        $f0, -0x7158($at)
    MEM_W(-0X7158, ctx->r1) = ctx->f0.u32l;
    // 0x0042A044: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x0042A048: addu        $at, $s3, $at
    ctx->r1 = ADD32(ctx->r19, ctx->r1);
    // 0x0042A04C: swc1        $f1, -0x714C($at)
    MEM_W(-0X714C, ctx->r1) = ctx->f_odd[(1 - 1) * 2];
    // 0x0042A050: jal         0x002053A8
    // 0x0042A054: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_002053A8(rdram, ctx);
        goto after_3;
    // 0x0042A054: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_3:
    // 0x0042A058: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0042A05C: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x0042A060: lui         $a3, 0x800A
    ctx->r7 = S32(0X800A << 16);
    // 0x0042A064: addiu       $a3, $a3, 0x5D8C
    ctx->r7 = ADD32(ctx->r7, 0X5D8C);
    // 0x0042A068: jal         0x00205B94
    // 0x0042A06C: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    func_00205B94(rdram, ctx);
        goto after_4;
    // 0x0042A06C: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    after_4:
    // 0x0042A070: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x0042A074: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x0042A078: jal         0x00201848
    // 0x0042A07C: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    func_00201848(rdram, ctx);
        goto after_5;
    // 0x0042A07C: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    after_5:
    // 0x0042A080: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0042A084: addiu       $a1, $s3, 0x38
    ctx->r5 = ADD32(ctx->r19, 0X38);
    // 0x0042A088: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    // 0x0042A08C: lui         $a3, 0x800A
    ctx->r7 = S32(0X800A << 16);
    // 0x0042A090: addiu       $a3, $a3, 0x5D9C
    ctx->r7 = ADD32(ctx->r7, 0X5D9C);
    // 0x0042A094: jal         0x00205B94
    // 0x0042A098: sw          $a2, 0xC($s3)
    MEM_W(0XC, ctx->r19) = ctx->r6;
    func_00205B94(rdram, ctx);
        goto after_6;
    // 0x0042A098: sw          $a2, 0xC($s3)
    MEM_W(0XC, ctx->r19) = ctx->r6;
    after_6:
    // 0x0042A09C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x0042A0A0: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x0042A0A4: jal         0x00201848
    // 0x0042A0A8: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    func_00201848(rdram, ctx);
        goto after_7;
    // 0x0042A0A8: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_7:
    // 0x0042A0AC: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0042A0B0: addiu       $a1, $s3, 0x3C
    ctx->r5 = ADD32(ctx->r19, 0X3C);
    // 0x0042A0B4: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    // 0x0042A0B8: lui         $a3, 0x800A
    ctx->r7 = S32(0X800A << 16);
    // 0x0042A0BC: addiu       $a3, $a3, 0x5DAC
    ctx->r7 = ADD32(ctx->r7, 0X5DAC);
    // 0x0042A0C0: jal         0x00205B94
    // 0x0042A0C4: sw          $a2, 0x10($s3)
    MEM_W(0X10, ctx->r19) = ctx->r6;
    func_00205B94(rdram, ctx);
        goto after_8;
    // 0x0042A0C4: sw          $a2, 0x10($s3)
    MEM_W(0X10, ctx->r19) = ctx->r6;
    after_8:
    // 0x0042A0C8: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0042A0CC: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x0042A0D0: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    // 0x0042A0D4: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x0042A0D8: lui         $s1, 0x800A
    ctx->r17 = S32(0X800A << 16);
    // 0x0042A0DC: addiu       $s1, $s1, 0x5DC0
    ctx->r17 = ADD32(ctx->r17, 0X5DC0);
    // 0x0042A0E0: sw          $s3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r19;
    // 0x0042A0E4: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x0042A0E8: jal         0x00205D0C
    // 0x0042A0EC: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    func_00205D0C(rdram, ctx);
        goto after_9;
    // 0x0042A0EC: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    after_9:
    // 0x0042A0F0: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x0042A0F4: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x0042A0F8: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x0042A0FC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x0042A100: jal         0x00201848
    // 0x0042A104: sw          $v0, 0x74($s3)
    MEM_W(0X74, ctx->r19) = ctx->r2;
    func_00201848(rdram, ctx);
        goto after_10;
    // 0x0042A104: sw          $v0, 0x74($s3)
    MEM_W(0X74, ctx->r19) = ctx->r2;
    after_10:
    // 0x0042A108: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0042A10C: addiu       $a1, $s3, 0x40
    ctx->r5 = ADD32(ctx->r19, 0X40);
    // 0x0042A110: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    // 0x0042A114: lui         $a3, 0x800A
    ctx->r7 = S32(0X800A << 16);
    // 0x0042A118: addiu       $a3, $a3, 0x5DD0
    ctx->r7 = ADD32(ctx->r7, 0X5DD0);
    // 0x0042A11C: jal         0x00205B94
    // 0x0042A120: sw          $a2, 0x14($s3)
    MEM_W(0X14, ctx->r19) = ctx->r6;
    func_00205B94(rdram, ctx);
        goto after_11;
    // 0x0042A120: sw          $a2, 0x14($s3)
    MEM_W(0X14, ctx->r19) = ctx->r6;
    after_11:
    // 0x0042A124: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0042A128: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x0042A12C: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    // 0x0042A130: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x0042A134: lui         $v0, 0x43
    ctx->r2 = S32(0X43 << 16);
    // 0x0042A138: addiu       $v0, $v0, -0x341C
    ctx->r2 = ADD32(ctx->r2, -0X341C);
    // 0x0042A13C: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x0042A140: lui         $v0, 0x800A
    ctx->r2 = S32(0X800A << 16);
    // 0x0042A144: addiu       $v0, $v0, 0x5DE0
    ctx->r2 = ADD32(ctx->r2, 0X5DE0);
    // 0x0042A148: sw          $s3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r19;
    // 0x0042A14C: jal         0x00205D0C
    // 0x0042A150: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    func_00205D0C(rdram, ctx);
        goto after_12;
    // 0x0042A150: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_12:
    // 0x0042A154: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0042A158: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x0042A15C: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x0042A160: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x0042A164: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    // 0x0042A168: sw          $v0, 0x64($s3)
    MEM_W(0X64, ctx->r19) = ctx->r2;
    // 0x0042A16C: lui         $v0, 0x43
    ctx->r2 = S32(0X43 << 16);
    // 0x0042A170: addiu       $v0, $v0, -0x354C
    ctx->r2 = ADD32(ctx->r2, -0X354C);
    // 0x0042A174: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x0042A178: lui         $v0, 0x800A
    ctx->r2 = S32(0X800A << 16);
    // 0x0042A17C: addiu       $v0, $v0, 0x5DF0
    ctx->r2 = ADD32(ctx->r2, 0X5DF0);
    // 0x0042A180: sw          $s3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r19;
    // 0x0042A184: jal         0x00205D0C
    // 0x0042A188: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    func_00205D0C(rdram, ctx);
        goto after_13;
    // 0x0042A188: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_13:
    // 0x0042A18C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0042A190: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    // 0x0042A194: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x0042A198: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    // 0x0042A19C: sw          $v0, 0x94($s3)
    MEM_W(0X94, ctx->r19) = ctx->r2;
    // 0x0042A1A0: sw          $s3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r19;
    // 0x0042A1A4: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x0042A1A8: jal         0x00205D0C
    // 0x0042A1AC: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    func_00205D0C(rdram, ctx);
        goto after_14;
    // 0x0042A1AC: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    after_14:
    // 0x0042A1B0: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x0042A1B4: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x0042A1B8: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x0042A1BC: addiu       $a2, $zero, 0x9
    ctx->r6 = ADD32(0, 0X9);
    // 0x0042A1C0: jal         0x00201848
    // 0x0042A1C4: sw          $v0, 0x78($s3)
    MEM_W(0X78, ctx->r19) = ctx->r2;
    func_00201848(rdram, ctx);
        goto after_15;
    // 0x0042A1C4: sw          $v0, 0x78($s3)
    MEM_W(0X78, ctx->r19) = ctx->r2;
    after_15:
    // 0x0042A1C8: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0042A1CC: addiu       $a1, $s3, 0x44
    ctx->r5 = ADD32(ctx->r19, 0X44);
    // 0x0042A1D0: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    // 0x0042A1D4: lui         $a3, 0x800A
    ctx->r7 = S32(0X800A << 16);
    // 0x0042A1D8: addiu       $a3, $a3, 0x5E04
    ctx->r7 = ADD32(ctx->r7, 0X5E04);
    // 0x0042A1DC: jal         0x00205B94
    // 0x0042A1E0: sw          $a2, 0x18($s3)
    MEM_W(0X18, ctx->r19) = ctx->r6;
    func_00205B94(rdram, ctx);
        goto after_16;
    // 0x0042A1E0: sw          $a2, 0x18($s3)
    MEM_W(0X18, ctx->r19) = ctx->r6;
    after_16:
    // 0x0042A1E4: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0042A1E8: addiu       $a2, $zero, 0xB
    ctx->r6 = ADD32(0, 0XB);
    // 0x0042A1EC: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    // 0x0042A1F0: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x0042A1F4: lui         $v0, 0x800A
    ctx->r2 = S32(0X800A << 16);
    // 0x0042A1F8: addiu       $v0, $v0, 0x5E14
    ctx->r2 = ADD32(ctx->r2, 0X5E14);
    // 0x0042A1FC: sw          $s3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r19;
    // 0x0042A200: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x0042A204: jal         0x00205D0C
    // 0x0042A208: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    func_00205D0C(rdram, ctx);
        goto after_17;
    // 0x0042A208: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_17:
    // 0x0042A20C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0042A210: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    // 0x0042A214: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x0042A218: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x0042A21C: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    // 0x0042A220: sw          $v0, 0x5C($s3)
    MEM_W(0X5C, ctx->r19) = ctx->r2;
    // 0x0042A224: lui         $v0, 0x800A
    ctx->r2 = S32(0X800A << 16);
    // 0x0042A228: addiu       $v0, $v0, 0x5E28
    ctx->r2 = ADD32(ctx->r2, 0X5E28);
    // 0x0042A22C: sw          $s3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r19;
    // 0x0042A230: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x0042A234: jal         0x00205D0C
    // 0x0042A238: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    func_00205D0C(rdram, ctx);
        goto after_18;
    // 0x0042A238: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_18:
    // 0x0042A23C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x0042A240: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    // 0x0042A244: addiu       $a3, $s3, 0x30
    ctx->r7 = ADD32(ctx->r19, 0X30);
    // 0x0042A248: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x0042A24C: lw          $v1, 0x0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X0);
    // 0x0042A250: lui         $v0, 0x800F
    ctx->r2 = S32(0X800F << 16);
    // 0x0042A254: addiu       $v0, $v0, -0x4540
    ctx->r2 = ADD32(ctx->r2, -0X4540);
    // 0x0042A258: sw          $v0, 0x6C($s3)
    MEM_W(0X6C, ctx->r19) = ctx->r2;
    // 0x0042A25C: jal         0x0020185C
    // 0x0042A260: sw          $v1, 0x80($s3)
    MEM_W(0X80, ctx->r19) = ctx->r3;
    func_0020185C(rdram, ctx);
        goto after_19;
    // 0x0042A260: sw          $v1, 0x80($s3)
    MEM_W(0X80, ctx->r19) = ctx->r3;
    after_19:
    // 0x0042A264: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x0042A268: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
    // 0x0042A26C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x0042A270: addiu       $a3, $s3, 0x34
    ctx->r7 = ADD32(ctx->r19, 0X34);
    // 0x0042A274: sw          $v0, 0x28($s3)
    MEM_W(0X28, ctx->r19) = ctx->r2;
    // 0x0042A278: lui         $v0, 0x800E
    ctx->r2 = S32(0X800E << 16);
    // 0x0042A27C: addiu       $v0, $v0, 0x6AC0
    ctx->r2 = ADD32(ctx->r2, 0X6AC0);
    // 0x0042A280: jal         0x0020185C
    // 0x0042A284: sw          $v0, 0x70($s3)
    MEM_W(0X70, ctx->r19) = ctx->r2;
    func_0020185C(rdram, ctx);
        goto after_20;
    // 0x0042A284: sw          $v0, 0x70($s3)
    MEM_W(0X70, ctx->r19) = ctx->r2;
    after_20:
    // 0x0042A288: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0042A28C: addiu       $a2, $zero, 0xD
    ctx->r6 = ADD32(0, 0XD);
    // 0x0042A290: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    // 0x0042A294: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x0042A298: lui         $s1, 0x20
    ctx->r17 = S32(0X20 << 16);
    // 0x0042A29C: addiu       $s1, $s1, 0xAE0
    ctx->r17 = ADD32(ctx->r17, 0XAE0);
    // 0x0042A2A0: sw          $v0, 0x2C($s3)
    MEM_W(0X2C, ctx->r19) = ctx->r2;
    // 0x0042A2A4: lui         $v0, 0x800A
    ctx->r2 = S32(0X800A << 16);
    // 0x0042A2A8: addiu       $v0, $v0, 0x5E38
    ctx->r2 = ADD32(ctx->r2, 0X5E38);
    // 0x0042A2AC: sw          $s3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r19;
    // 0x0042A2B0: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x0042A2B4: jal         0x00205D0C
    // 0x0042A2B8: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    func_00205D0C(rdram, ctx);
        goto after_21;
    // 0x0042A2B8: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_21:
    // 0x0042A2BC: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0042A2C0: addiu       $a2, $zero, 0xE
    ctx->r6 = ADD32(0, 0XE);
    // 0x0042A2C4: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x0042A2C8: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x0042A2CC: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    // 0x0042A2D0: sw          $v0, 0x84($s3)
    MEM_W(0X84, ctx->r19) = ctx->r2;
    // 0x0042A2D4: lui         $v0, 0x800A
    ctx->r2 = S32(0X800A << 16);
    // 0x0042A2D8: addiu       $v0, $v0, 0x5E40
    ctx->r2 = ADD32(ctx->r2, 0X5E40);
    // 0x0042A2DC: sw          $s3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r19;
    // 0x0042A2E0: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x0042A2E4: jal         0x00205D0C
    // 0x0042A2E8: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    func_00205D0C(rdram, ctx);
        goto after_22;
    // 0x0042A2E8: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_22:
    // 0x0042A2EC: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0042A2F0: addiu       $a2, $zero, 0xF
    ctx->r6 = ADD32(0, 0XF);
    // 0x0042A2F4: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x0042A2F8: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x0042A2FC: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    // 0x0042A300: sw          $v0, 0x8C($s3)
    MEM_W(0X8C, ctx->r19) = ctx->r2;
    // 0x0042A304: lui         $v0, 0x800A
    ctx->r2 = S32(0X800A << 16);
    // 0x0042A308: addiu       $v0, $v0, 0x5E48
    ctx->r2 = ADD32(ctx->r2, 0X5E48);
    // 0x0042A30C: sw          $s3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r19;
    // 0x0042A310: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x0042A314: jal         0x00205D0C
    // 0x0042A318: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    func_00205D0C(rdram, ctx);
        goto after_23;
    // 0x0042A318: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_23:
    // 0x0042A31C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0042A320: addiu       $a2, $zero, 0x11
    ctx->r6 = ADD32(0, 0X11);
    // 0x0042A324: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x0042A328: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x0042A32C: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    // 0x0042A330: sw          $v0, 0x88($s3)
    MEM_W(0X88, ctx->r19) = ctx->r2;
    // 0x0042A334: lui         $v0, 0x800A
    ctx->r2 = S32(0X800A << 16);
    // 0x0042A338: addiu       $v0, $v0, 0x5E58
    ctx->r2 = ADD32(ctx->r2, 0X5E58);
    // 0x0042A33C: sw          $s3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r19;
    // 0x0042A340: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x0042A344: jal         0x00205D0C
    // 0x0042A348: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    func_00205D0C(rdram, ctx);
        goto after_24;
    // 0x0042A348: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_24:
    // 0x0042A34C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x0042A350: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x0042A354: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x0042A358: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x0042A35C: jal         0x00201848
    // 0x0042A360: sw          $v0, 0x7C($s3)
    MEM_W(0X7C, ctx->r19) = ctx->r2;
    func_00201848(rdram, ctx);
        goto after_25;
    // 0x0042A360: sw          $v0, 0x7C($s3)
    MEM_W(0X7C, ctx->r19) = ctx->r2;
    after_25:
    // 0x0042A364: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0042A368: addiu       $a1, $s3, 0x48
    ctx->r5 = ADD32(ctx->r19, 0X48);
    // 0x0042A36C: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    // 0x0042A370: lui         $a3, 0x800A
    ctx->r7 = S32(0X800A << 16);
    // 0x0042A374: addiu       $a3, $a3, 0x5E68
    ctx->r7 = ADD32(ctx->r7, 0X5E68);
    // 0x0042A378: jal         0x00205B94
    // 0x0042A37C: sw          $a2, 0x1C($s3)
    MEM_W(0X1C, ctx->r19) = ctx->r6;
    func_00205B94(rdram, ctx);
        goto after_26;
    // 0x0042A37C: sw          $a2, 0x1C($s3)
    MEM_W(0X1C, ctx->r19) = ctx->r6;
    after_26:
    // 0x0042A380: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x0042A384: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x0042A388: jal         0x00201848
    // 0x0042A38C: addiu       $a2, $zero, 0x12
    ctx->r6 = ADD32(0, 0X12);
    func_00201848(rdram, ctx);
        goto after_27;
    // 0x0042A38C: addiu       $a2, $zero, 0x12
    ctx->r6 = ADD32(0, 0X12);
    after_27:
    // 0x0042A390: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0042A394: addiu       $a1, $s3, 0x60
    ctx->r5 = ADD32(ctx->r19, 0X60);
    // 0x0042A398: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    // 0x0042A39C: lui         $a3, 0x800A
    ctx->r7 = S32(0X800A << 16);
    // 0x0042A3A0: addiu       $a3, $a3, 0x5E7C
    ctx->r7 = ADD32(ctx->r7, 0X5E7C);
    // 0x0042A3A4: jal         0x00205B94
    // 0x0042A3A8: sw          $a2, 0x24($s3)
    MEM_W(0X24, ctx->r19) = ctx->r6;
    func_00205B94(rdram, ctx);
        goto after_28;
    // 0x0042A3A8: sw          $a2, 0x24($s3)
    MEM_W(0X24, ctx->r19) = ctx->r6;
    after_28:
    // 0x0042A3AC: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0042A3B0: addiu       $a2, $zero, 0x13
    ctx->r6 = ADD32(0, 0X13);
    // 0x0042A3B4: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    // 0x0042A3B8: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x0042A3BC: lui         $v0, 0x800A
    ctx->r2 = S32(0X800A << 16);
    // 0x0042A3C0: addiu       $v0, $v0, 0x5E8C
    ctx->r2 = ADD32(ctx->r2, 0X5E8C);
    // 0x0042A3C4: sw          $s3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r19;
    // 0x0042A3C8: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x0042A3CC: jal         0x00205D0C
    // 0x0042A3D0: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    func_00205D0C(rdram, ctx);
        goto after_29;
    // 0x0042A3D0: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_29:
    // 0x0042A3D4: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x0042A3D8: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x0042A3DC: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x0042A3E0: jal         0x0042C3BC
    // 0x0042A3E4: sw          $v0, 0x90($s3)
    MEM_W(0X90, ctx->r19) = ctx->r2;
    func_0042C3BC(rdram, ctx);
        goto after_30;
    // 0x0042A3E4: sw          $v0, 0x90($s3)
    MEM_W(0X90, ctx->r19) = ctx->r2;
    after_30:
    // 0x0042A3E8: lui         $v0, 0x1
    ctx->r2 = S32(0X1 << 16);
    // 0x0042A3EC: ori         $v0, $v0, 0x8FEC
    ctx->r2 = ctx->r2 | 0X8FEC;
    // 0x0042A3F0: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x0042A3F4: addiu       $a1, $zero, 0xDAC
    ctx->r5 = ADD32(0, 0XDAC);
    // 0x0042A3F8: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0042A3FC: sw          $s4, 0x6D54($at)
    MEM_W(0X6D54, ctx->r1) = ctx->r20;
    // 0x0042A400: jal         0x00224180
    // 0x0042A404: addu        $s5, $s3, $v0
    ctx->r21 = ADD32(ctx->r19, ctx->r2);
    func_00224180(rdram, ctx);
        goto after_31;
    // 0x0042A404: addu        $s5, $s3, $v0
    ctx->r21 = ADD32(ctx->r19, ctx->r2);
    after_31:
    // 0x0042A408: bne         $v0, $s2, L_0042A418
    if (ctx->r2 != ctx->r18) {
        // 0x0042A40C: addu        $a0, $s3, $zero
        ctx->r4 = ADD32(ctx->r19, 0);
            goto L_0042A418;
    }
    // 0x0042A40C: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x0042A410: j           L_0042A52C
    // 0x0042A414: sw          $zero, 0x8($s5)
    MEM_W(0X8, ctx->r21) = 0;
        goto L_0042A52C;
    // 0x0042A414: sw          $zero, 0x8($s5)
    MEM_W(0X8, ctx->r21) = 0;
L_0042A418:
    // 0x0042A418: jal         0x00224F84
    // 0x0042A41C: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    func_00224F84(rdram, ctx);
        goto after_32;
    // 0x0042A41C: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    after_32:
    // 0x0042A420: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0042A424: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x0042A428: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x0042A42C: addiu       $a2, $zero, 0x18
    ctx->r6 = ADD32(0, 0X18);
    // 0x0042A430: addu        $a3, $a0, $zero
    ctx->r7 = ADD32(ctx->r4, 0);
    // 0x0042A434: lui         $v0, 0x800A
    ctx->r2 = S32(0X800A << 16);
    // 0x0042A438: addiu       $v0, $v0, 0x5D70
    ctx->r2 = ADD32(ctx->r2, 0X5D70);
    // 0x0042A43C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x0042A440: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x0042A444: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x0042A448: jal         0x0020367C
    // 0x0042A44C: sw          $s4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r20;
    func_0020367C(rdram, ctx);
        goto after_33;
    // 0x0042A44C: sw          $s4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r20;
    after_33:
    // 0x0042A450: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x0042A454: beq         $s1, $zero, L_0042A52C
    if (ctx->r17 == 0) {
        // 0x0042A458: addu        $a1, $s0, $zero
        ctx->r5 = ADD32(ctx->r16, 0);
            goto L_0042A52C;
    }
    // 0x0042A458: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x0042A45C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x0042A460: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x0042A464: jal         0x0020185C
    // 0x0042A468: addiu       $a3, $sp, 0x24
    ctx->r7 = ADD32(ctx->r29, 0X24);
    func_0020185C(rdram, ctx);
        goto after_34;
    // 0x0042A468: addiu       $a3, $sp, 0x24
    ctx->r7 = ADD32(ctx->r29, 0X24);
    after_34:
    // 0x0042A46C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0042A470: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x0042A474: addu        $a3, $a0, $zero
    ctx->r7 = ADD32(ctx->r4, 0);
    // 0x0042A478: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    // 0x0042A47C: lui         $v0, 0x21
    ctx->r2 = S32(0X21 << 16);
    // 0x0042A480: addiu       $v0, $v0, -0x4B70
    ctx->r2 = ADD32(ctx->r2, -0X4B70);
    // 0x0042A484: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x0042A488: lui         $v0, 0x800A
    ctx->r2 = S32(0X800A << 16);
    // 0x0042A48C: addiu       $v0, $v0, 0x5D80
    ctx->r2 = ADD32(ctx->r2, 0X5D80);
    // 0x0042A490: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x0042A494: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x0042A498: jal         0x0020367C
    // 0x0042A49C: sw          $s4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r20;
    func_0020367C(rdram, ctx);
        goto after_35;
    // 0x0042A49C: sw          $s4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r20;
    after_35:
    // 0x0042A4A0: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x0042A4A4: beq         $s0, $zero, L_0042A524
    if (ctx->r16 == 0) {
        // 0x0042A4A8: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_0042A524;
    }
    // 0x0042A4A8: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0042A4AC: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x0042A4B0: jal         0x002017D4
    // 0x0042A4B4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_002017D4(rdram, ctx);
        goto after_36;
    // 0x0042A4B4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_36:
    // 0x0042A4B8: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x0042A4BC: jal         0x002017D4
    // 0x0042A4C0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_002017D4(rdram, ctx);
        goto after_37;
    // 0x0042A4C0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_37:
    // 0x0042A4C4: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x0042A4C8: jal         0x002017D4
    // 0x0042A4CC: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_002017D4(rdram, ctx);
        goto after_38;
    // 0x0042A4CC: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_38:
    // 0x0042A4D0: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x0042A4D4: jal         0x002017D4
    // 0x0042A4D8: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_002017D4(rdram, ctx);
        goto after_39;
    // 0x0042A4D8: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_39:
    // 0x0042A4DC: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0042A4E0: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x0042A4E4: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x0042A4E8: lw          $t1, 0x4($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X4);
    // 0x0042A4EC: lw          $t2, 0x8($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X8);
    // 0x0042A4F0: lw          $t3, 0xC($v0)
    ctx->r11 = MEM_W(ctx->r2, 0XC);
    // 0x0042A4F4: sw          $t0, 0x0($s5)
    MEM_W(0X0, ctx->r21) = ctx->r8;
    // 0x0042A4F8: sw          $t1, 0x4($s5)
    MEM_W(0X4, ctx->r21) = ctx->r9;
    // 0x0042A4FC: sw          $t2, 0x8($s5)
    MEM_W(0X8, ctx->r21) = ctx->r10;
    // 0x0042A500: sw          $t3, 0xC($s5)
    MEM_W(0XC, ctx->r21) = ctx->r11;
    // 0x0042A504: lw          $t0, 0x10($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X10);
    // 0x0042A508: lw          $t1, 0x14($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X14);
    // 0x0042A50C: lw          $t2, 0x18($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X18);
    // 0x0042A510: sw          $t0, 0x10($s5)
    MEM_W(0X10, ctx->r21) = ctx->r8;
    // 0x0042A514: sw          $t1, 0x14($s5)
    MEM_W(0X14, ctx->r21) = ctx->r9;
    // 0x0042A518: jal         0x002052D8
    // 0x0042A51C: sw          $t2, 0x18($s5)
    MEM_W(0X18, ctx->r21) = ctx->r10;
    func_002052D8(rdram, ctx);
        goto after_40;
    // 0x0042A51C: sw          $t2, 0x18($s5)
    MEM_W(0X18, ctx->r21) = ctx->r10;
    after_40:
    // 0x0042A520: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
L_0042A524:
    // 0x0042A524: jal         0x002052D8
    // 0x0042A528: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_002052D8(rdram, ctx);
        goto after_41;
    // 0x0042A528: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_41:
L_0042A52C:
    // 0x0042A52C: lui         $v0, 0x1
    ctx->r2 = S32(0X1 << 16);
    // 0x0042A530: ori         $v0, $v0, 0x9008
    ctx->r2 = ctx->r2 | 0X9008;
    // 0x0042A534: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x0042A538: addiu       $a1, $zero, 0xDAD
    ctx->r5 = ADD32(0, 0XDAD);
    // 0x0042A53C: jal         0x00224180
    // 0x0042A540: addu        $s4, $s3, $v0
    ctx->r20 = ADD32(ctx->r19, ctx->r2);
    func_00224180(rdram, ctx);
        goto after_42;
    // 0x0042A540: addu        $s4, $s3, $v0
    ctx->r20 = ADD32(ctx->r19, ctx->r2);
    after_42:
    // 0x0042A544: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x0042A548: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x0042A54C: bne         $a1, $v0, L_0042A55C
    if (ctx->r5 != ctx->r2) {
        // 0x0042A550: nop
    
            goto L_0042A55C;
    }
    // 0x0042A550: nop

    // 0x0042A554: j           L_0042A674
    // 0x0042A558: sw          $zero, 0x8($s4)
    MEM_W(0X8, ctx->r20) = 0;
        goto L_0042A674;
    // 0x0042A558: sw          $zero, 0x8($s4)
    MEM_W(0X8, ctx->r20) = 0;
L_0042A55C:
    // 0x0042A55C: jal         0x00224F84
    // 0x0042A560: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    func_00224F84(rdram, ctx);
        goto after_43;
    // 0x0042A560: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    after_43:
    // 0x0042A564: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0042A568: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x0042A56C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x0042A570: addiu       $a2, $zero, 0x18
    ctx->r6 = ADD32(0, 0X18);
    // 0x0042A574: addu        $a3, $a0, $zero
    ctx->r7 = ADD32(ctx->r4, 0);
    // 0x0042A578: lui         $v0, 0x800A
    ctx->r2 = S32(0X800A << 16);
    // 0x0042A57C: addiu       $v0, $v0, 0x5D70
    ctx->r2 = ADD32(ctx->r2, 0X5D70);
    // 0x0042A580: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
    // 0x0042A584: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x0042A588: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x0042A58C: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x0042A590: jal         0x0020367C
    // 0x0042A594: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    func_0020367C(rdram, ctx);
        goto after_44;
    // 0x0042A594: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    after_44:
    // 0x0042A598: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x0042A59C: beq         $s1, $zero, L_0042A674
    if (ctx->r17 == 0) {
        // 0x0042A5A0: addu        $a1, $s0, $zero
        ctx->r5 = ADD32(ctx->r16, 0);
            goto L_0042A674;
    }
    // 0x0042A5A0: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x0042A5A4: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    // 0x0042A5A8: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x0042A5AC: jal         0x0020185C
    // 0x0042A5B0: addiu       $a3, $sp, 0x28
    ctx->r7 = ADD32(ctx->r29, 0X28);
    func_0020185C(rdram, ctx);
        goto after_45;
    // 0x0042A5B0: addiu       $a3, $sp, 0x28
    ctx->r7 = ADD32(ctx->r29, 0X28);
    after_45:
    // 0x0042A5B4: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0042A5B8: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x0042A5BC: addu        $a3, $a0, $zero
    ctx->r7 = ADD32(ctx->r4, 0);
    // 0x0042A5C0: lw          $a2, 0x28($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X28);
    // 0x0042A5C4: lui         $v0, 0x21
    ctx->r2 = S32(0X21 << 16);
    // 0x0042A5C8: addiu       $v0, $v0, -0x4B70
    ctx->r2 = ADD32(ctx->r2, -0X4B70);
    // 0x0042A5CC: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x0042A5D0: lui         $v0, 0x800A
    ctx->r2 = S32(0X800A << 16);
    // 0x0042A5D4: addiu       $v0, $v0, 0x5D80
    ctx->r2 = ADD32(ctx->r2, 0X5D80);
    // 0x0042A5D8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x0042A5DC: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x0042A5E0: jal         0x0020367C
    // 0x0042A5E4: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    func_0020367C(rdram, ctx);
        goto after_46;
    // 0x0042A5E4: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    after_46:
    // 0x0042A5E8: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x0042A5EC: beq         $s0, $zero, L_0042A66C
    if (ctx->r16 == 0) {
        // 0x0042A5F0: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_0042A66C;
    }
    // 0x0042A5F0: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0042A5F4: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x0042A5F8: jal         0x002017D4
    // 0x0042A5FC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_002017D4(rdram, ctx);
        goto after_47;
    // 0x0042A5FC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_47:
    // 0x0042A600: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x0042A604: jal         0x002017D4
    // 0x0042A608: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_002017D4(rdram, ctx);
        goto after_48;
    // 0x0042A608: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_48:
    // 0x0042A60C: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x0042A610: jal         0x002017D4
    // 0x0042A614: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_002017D4(rdram, ctx);
        goto after_49;
    // 0x0042A614: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_49:
    // 0x0042A618: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x0042A61C: jal         0x002017D4
    // 0x0042A620: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_002017D4(rdram, ctx);
        goto after_50;
    // 0x0042A620: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_50:
    // 0x0042A624: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0042A628: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x0042A62C: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x0042A630: lw          $t1, 0x4($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X4);
    // 0x0042A634: lw          $t2, 0x8($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X8);
    // 0x0042A638: lw          $t3, 0xC($v0)
    ctx->r11 = MEM_W(ctx->r2, 0XC);
    // 0x0042A63C: sw          $t0, 0x0($s4)
    MEM_W(0X0, ctx->r20) = ctx->r8;
    // 0x0042A640: sw          $t1, 0x4($s4)
    MEM_W(0X4, ctx->r20) = ctx->r9;
    // 0x0042A644: sw          $t2, 0x8($s4)
    MEM_W(0X8, ctx->r20) = ctx->r10;
    // 0x0042A648: sw          $t3, 0xC($s4)
    MEM_W(0XC, ctx->r20) = ctx->r11;
    // 0x0042A64C: lw          $t0, 0x10($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X10);
    // 0x0042A650: lw          $t1, 0x14($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X14);
    // 0x0042A654: lw          $t2, 0x18($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X18);
    // 0x0042A658: sw          $t0, 0x10($s4)
    MEM_W(0X10, ctx->r20) = ctx->r8;
    // 0x0042A65C: sw          $t1, 0x14($s4)
    MEM_W(0X14, ctx->r20) = ctx->r9;
    // 0x0042A660: jal         0x002052D8
    // 0x0042A664: sw          $t2, 0x18($s4)
    MEM_W(0X18, ctx->r20) = ctx->r10;
    func_002052D8(rdram, ctx);
        goto after_51;
    // 0x0042A664: sw          $t2, 0x18($s4)
    MEM_W(0X18, ctx->r20) = ctx->r10;
    after_51:
    // 0x0042A668: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
L_0042A66C:
    // 0x0042A66C: jal         0x002052D8
    // 0x0042A670: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_002052D8(rdram, ctx);
        goto after_52;
    // 0x0042A670: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_52:
L_0042A674:
    // 0x0042A674: lui         $v0, 0x1
    ctx->r2 = S32(0X1 << 16);
    // 0x0042A678: ori         $v0, $v0, 0x9024
    ctx->r2 = ctx->r2 | 0X9024;
    // 0x0042A67C: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x0042A680: addiu       $a1, $zero, 0xDAE
    ctx->r5 = ADD32(0, 0XDAE);
    // 0x0042A684: jal         0x00224180
    // 0x0042A688: addu        $s4, $s3, $v0
    ctx->r20 = ADD32(ctx->r19, ctx->r2);
    func_00224180(rdram, ctx);
        goto after_53;
    // 0x0042A688: addu        $s4, $s3, $v0
    ctx->r20 = ADD32(ctx->r19, ctx->r2);
    after_53:
    // 0x0042A68C: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x0042A690: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x0042A694: bne         $a1, $v0, L_0042A6A4
    if (ctx->r5 != ctx->r2) {
        // 0x0042A698: nop
    
            goto L_0042A6A4;
    }
    // 0x0042A698: nop

    // 0x0042A69C: j           L_0042A7BC
    // 0x0042A6A0: sw          $zero, 0x8($s4)
    MEM_W(0X8, ctx->r20) = 0;
        goto L_0042A7BC;
    // 0x0042A6A0: sw          $zero, 0x8($s4)
    MEM_W(0X8, ctx->r20) = 0;
L_0042A6A4:
    // 0x0042A6A4: jal         0x00224F84
    // 0x0042A6A8: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    func_00224F84(rdram, ctx);
        goto after_54;
    // 0x0042A6A8: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    after_54:
    // 0x0042A6AC: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0042A6B0: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x0042A6B4: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x0042A6B8: addiu       $a2, $zero, 0x18
    ctx->r6 = ADD32(0, 0X18);
    // 0x0042A6BC: addu        $a3, $a0, $zero
    ctx->r7 = ADD32(ctx->r4, 0);
    // 0x0042A6C0: lui         $v0, 0x800A
    ctx->r2 = S32(0X800A << 16);
    // 0x0042A6C4: addiu       $v0, $v0, 0x5D70
    ctx->r2 = ADD32(ctx->r2, 0X5D70);
    // 0x0042A6C8: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
    // 0x0042A6CC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x0042A6D0: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x0042A6D4: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x0042A6D8: jal         0x0020367C
    // 0x0042A6DC: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    func_0020367C(rdram, ctx);
        goto after_55;
    // 0x0042A6DC: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    after_55:
    // 0x0042A6E0: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x0042A6E4: beq         $s1, $zero, L_0042A7BC
    if (ctx->r17 == 0) {
        // 0x0042A6E8: addu        $a1, $s0, $zero
        ctx->r5 = ADD32(ctx->r16, 0);
            goto L_0042A7BC;
    }
    // 0x0042A6E8: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x0042A6EC: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    // 0x0042A6F0: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x0042A6F4: jal         0x0020185C
    // 0x0042A6F8: addiu       $a3, $sp, 0x2C
    ctx->r7 = ADD32(ctx->r29, 0X2C);
    func_0020185C(rdram, ctx);
        goto after_56;
    // 0x0042A6F8: addiu       $a3, $sp, 0x2C
    ctx->r7 = ADD32(ctx->r29, 0X2C);
    after_56:
    // 0x0042A6FC: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0042A700: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x0042A704: addu        $a3, $a0, $zero
    ctx->r7 = ADD32(ctx->r4, 0);
    // 0x0042A708: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    // 0x0042A70C: lui         $v0, 0x21
    ctx->r2 = S32(0X21 << 16);
    // 0x0042A710: addiu       $v0, $v0, -0x4B70
    ctx->r2 = ADD32(ctx->r2, -0X4B70);
    // 0x0042A714: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x0042A718: lui         $v0, 0x800A
    ctx->r2 = S32(0X800A << 16);
    // 0x0042A71C: addiu       $v0, $v0, 0x5D80
    ctx->r2 = ADD32(ctx->r2, 0X5D80);
    // 0x0042A720: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x0042A724: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x0042A728: jal         0x0020367C
    // 0x0042A72C: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    func_0020367C(rdram, ctx);
        goto after_57;
    // 0x0042A72C: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    after_57:
    // 0x0042A730: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x0042A734: beq         $s0, $zero, L_0042A7B4
    if (ctx->r16 == 0) {
        // 0x0042A738: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_0042A7B4;
    }
    // 0x0042A738: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0042A73C: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x0042A740: jal         0x002017D4
    // 0x0042A744: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_002017D4(rdram, ctx);
        goto after_58;
    // 0x0042A744: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_58:
    // 0x0042A748: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x0042A74C: jal         0x002017D4
    // 0x0042A750: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_002017D4(rdram, ctx);
        goto after_59;
    // 0x0042A750: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_59:
    // 0x0042A754: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x0042A758: jal         0x002017D4
    // 0x0042A75C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_002017D4(rdram, ctx);
        goto after_60;
    // 0x0042A75C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_60:
    // 0x0042A760: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x0042A764: jal         0x002017D4
    // 0x0042A768: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_002017D4(rdram, ctx);
        goto after_61;
    // 0x0042A768: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_61:
    // 0x0042A76C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0042A770: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x0042A774: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x0042A778: lw          $t1, 0x4($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X4);
    // 0x0042A77C: lw          $t2, 0x8($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X8);
    // 0x0042A780: lw          $t3, 0xC($v0)
    ctx->r11 = MEM_W(ctx->r2, 0XC);
    // 0x0042A784: sw          $t0, 0x0($s4)
    MEM_W(0X0, ctx->r20) = ctx->r8;
    // 0x0042A788: sw          $t1, 0x4($s4)
    MEM_W(0X4, ctx->r20) = ctx->r9;
    // 0x0042A78C: sw          $t2, 0x8($s4)
    MEM_W(0X8, ctx->r20) = ctx->r10;
    // 0x0042A790: sw          $t3, 0xC($s4)
    MEM_W(0XC, ctx->r20) = ctx->r11;
    // 0x0042A794: lw          $t0, 0x10($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X10);
    // 0x0042A798: lw          $t1, 0x14($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X14);
    // 0x0042A79C: lw          $t2, 0x18($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X18);
    // 0x0042A7A0: sw          $t0, 0x10($s4)
    MEM_W(0X10, ctx->r20) = ctx->r8;
    // 0x0042A7A4: sw          $t1, 0x14($s4)
    MEM_W(0X14, ctx->r20) = ctx->r9;
    // 0x0042A7A8: jal         0x002052D8
    // 0x0042A7AC: sw          $t2, 0x18($s4)
    MEM_W(0X18, ctx->r20) = ctx->r10;
    func_002052D8(rdram, ctx);
        goto after_62;
    // 0x0042A7AC: sw          $t2, 0x18($s4)
    MEM_W(0X18, ctx->r20) = ctx->r10;
    after_62:
    // 0x0042A7B0: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
L_0042A7B4:
    // 0x0042A7B4: jal         0x002052D8
    // 0x0042A7B8: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_002052D8(rdram, ctx);
        goto after_63;
    // 0x0042A7B8: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_63:
L_0042A7BC:
    // 0x0042A7BC: lui         $v0, 0x1
    ctx->r2 = S32(0X1 << 16);
    // 0x0042A7C0: ori         $v0, $v0, 0x9040
    ctx->r2 = ctx->r2 | 0X9040;
    // 0x0042A7C4: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x0042A7C8: addiu       $a1, $zero, 0xDAF
    ctx->r5 = ADD32(0, 0XDAF);
    // 0x0042A7CC: jal         0x00224180
    // 0x0042A7D0: addu        $s4, $s3, $v0
    ctx->r20 = ADD32(ctx->r19, ctx->r2);
    func_00224180(rdram, ctx);
        goto after_64;
    // 0x0042A7D0: addu        $s4, $s3, $v0
    ctx->r20 = ADD32(ctx->r19, ctx->r2);
    after_64:
    // 0x0042A7D4: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x0042A7D8: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x0042A7DC: bne         $a1, $v0, L_0042A7EC
    if (ctx->r5 != ctx->r2) {
        // 0x0042A7E0: nop
    
            goto L_0042A7EC;
    }
    // 0x0042A7E0: nop

    // 0x0042A7E4: j           L_0042A904
    // 0x0042A7E8: sw          $zero, 0x8($s4)
    MEM_W(0X8, ctx->r20) = 0;
        goto L_0042A904;
    // 0x0042A7E8: sw          $zero, 0x8($s4)
    MEM_W(0X8, ctx->r20) = 0;
L_0042A7EC:
    // 0x0042A7EC: jal         0x00224F84
    // 0x0042A7F0: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    func_00224F84(rdram, ctx);
        goto after_65;
    // 0x0042A7F0: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    after_65:
    // 0x0042A7F4: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0042A7F8: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x0042A7FC: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x0042A800: addiu       $a2, $zero, 0x18
    ctx->r6 = ADD32(0, 0X18);
    // 0x0042A804: addu        $a3, $a0, $zero
    ctx->r7 = ADD32(ctx->r4, 0);
    // 0x0042A808: lui         $v0, 0x800A
    ctx->r2 = S32(0X800A << 16);
    // 0x0042A80C: addiu       $v0, $v0, 0x5D70
    ctx->r2 = ADD32(ctx->r2, 0X5D70);
    // 0x0042A810: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
    // 0x0042A814: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x0042A818: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x0042A81C: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x0042A820: jal         0x0020367C
    // 0x0042A824: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    func_0020367C(rdram, ctx);
        goto after_66;
    // 0x0042A824: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    after_66:
    // 0x0042A828: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x0042A82C: beq         $s1, $zero, L_0042A904
    if (ctx->r17 == 0) {
        // 0x0042A830: addu        $a1, $s0, $zero
        ctx->r5 = ADD32(ctx->r16, 0);
            goto L_0042A904;
    }
    // 0x0042A830: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x0042A834: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    // 0x0042A838: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x0042A83C: jal         0x0020185C
    // 0x0042A840: addiu       $a3, $sp, 0x30
    ctx->r7 = ADD32(ctx->r29, 0X30);
    func_0020185C(rdram, ctx);
        goto after_67;
    // 0x0042A840: addiu       $a3, $sp, 0x30
    ctx->r7 = ADD32(ctx->r29, 0X30);
    after_67:
    // 0x0042A844: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0042A848: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x0042A84C: addu        $a3, $a0, $zero
    ctx->r7 = ADD32(ctx->r4, 0);
    // 0x0042A850: lw          $a2, 0x30($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X30);
    // 0x0042A854: lui         $v0, 0x21
    ctx->r2 = S32(0X21 << 16);
    // 0x0042A858: addiu       $v0, $v0, -0x4B70
    ctx->r2 = ADD32(ctx->r2, -0X4B70);
    // 0x0042A85C: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x0042A860: lui         $v0, 0x800A
    ctx->r2 = S32(0X800A << 16);
    // 0x0042A864: addiu       $v0, $v0, 0x5D80
    ctx->r2 = ADD32(ctx->r2, 0X5D80);
    // 0x0042A868: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x0042A86C: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x0042A870: jal         0x0020367C
    // 0x0042A874: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    func_0020367C(rdram, ctx);
        goto after_68;
    // 0x0042A874: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    after_68:
    // 0x0042A878: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x0042A87C: beq         $s0, $zero, L_0042A8FC
    if (ctx->r16 == 0) {
        // 0x0042A880: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_0042A8FC;
    }
    // 0x0042A880: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0042A884: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x0042A888: jal         0x002017D4
    // 0x0042A88C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_002017D4(rdram, ctx);
        goto after_69;
    // 0x0042A88C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_69:
    // 0x0042A890: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x0042A894: jal         0x002017D4
    // 0x0042A898: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_002017D4(rdram, ctx);
        goto after_70;
    // 0x0042A898: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_70:
    // 0x0042A89C: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x0042A8A0: jal         0x002017D4
    // 0x0042A8A4: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_002017D4(rdram, ctx);
        goto after_71;
    // 0x0042A8A4: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_71:
    // 0x0042A8A8: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x0042A8AC: jal         0x002017D4
    // 0x0042A8B0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_002017D4(rdram, ctx);
        goto after_72;
    // 0x0042A8B0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_72:
    // 0x0042A8B4: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0042A8B8: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x0042A8BC: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x0042A8C0: lw          $t1, 0x4($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X4);
    // 0x0042A8C4: lw          $t2, 0x8($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X8);
    // 0x0042A8C8: lw          $t3, 0xC($v0)
    ctx->r11 = MEM_W(ctx->r2, 0XC);
    // 0x0042A8CC: sw          $t0, 0x0($s4)
    MEM_W(0X0, ctx->r20) = ctx->r8;
    // 0x0042A8D0: sw          $t1, 0x4($s4)
    MEM_W(0X4, ctx->r20) = ctx->r9;
    // 0x0042A8D4: sw          $t2, 0x8($s4)
    MEM_W(0X8, ctx->r20) = ctx->r10;
    // 0x0042A8D8: sw          $t3, 0xC($s4)
    MEM_W(0XC, ctx->r20) = ctx->r11;
    // 0x0042A8DC: lw          $t0, 0x10($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X10);
    // 0x0042A8E0: lw          $t1, 0x14($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X14);
    // 0x0042A8E4: lw          $t2, 0x18($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X18);
    // 0x0042A8E8: sw          $t0, 0x10($s4)
    MEM_W(0X10, ctx->r20) = ctx->r8;
    // 0x0042A8EC: sw          $t1, 0x14($s4)
    MEM_W(0X14, ctx->r20) = ctx->r9;
    // 0x0042A8F0: jal         0x002052D8
    // 0x0042A8F4: sw          $t2, 0x18($s4)
    MEM_W(0X18, ctx->r20) = ctx->r10;
    func_002052D8(rdram, ctx);
        goto after_73;
    // 0x0042A8F4: sw          $t2, 0x18($s4)
    MEM_W(0X18, ctx->r20) = ctx->r10;
    after_73:
    // 0x0042A8F8: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
L_0042A8FC:
    // 0x0042A8FC: jal         0x002052D8
    // 0x0042A900: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_002052D8(rdram, ctx);
        goto after_74;
    // 0x0042A900: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_74:
L_0042A904:
    // 0x0042A904: lui         $v0, 0x1
    ctx->r2 = S32(0X1 << 16);
    // 0x0042A908: ori         $v0, $v0, 0x905C
    ctx->r2 = ctx->r2 | 0X905C;
    // 0x0042A90C: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x0042A910: addiu       $a1, $zero, 0xDB0
    ctx->r5 = ADD32(0, 0XDB0);
    // 0x0042A914: jal         0x00224180
    // 0x0042A918: addu        $s4, $s3, $v0
    ctx->r20 = ADD32(ctx->r19, ctx->r2);
    func_00224180(rdram, ctx);
        goto after_75;
    // 0x0042A918: addu        $s4, $s3, $v0
    ctx->r20 = ADD32(ctx->r19, ctx->r2);
    after_75:
    // 0x0042A91C: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x0042A920: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x0042A924: bne         $a1, $v0, L_0042A934
    if (ctx->r5 != ctx->r2) {
        // 0x0042A928: nop
    
            goto L_0042A934;
    }
    // 0x0042A928: nop

    // 0x0042A92C: j           L_0042AA4C
    // 0x0042A930: sw          $zero, 0x8($s4)
    MEM_W(0X8, ctx->r20) = 0;
        goto L_0042AA4C;
    // 0x0042A930: sw          $zero, 0x8($s4)
    MEM_W(0X8, ctx->r20) = 0;
L_0042A934:
    // 0x0042A934: jal         0x00224F84
    // 0x0042A938: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    func_00224F84(rdram, ctx);
        goto after_76;
    // 0x0042A938: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    after_76:
    // 0x0042A93C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0042A940: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x0042A944: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x0042A948: addiu       $a2, $zero, 0x18
    ctx->r6 = ADD32(0, 0X18);
    // 0x0042A94C: addu        $a3, $a0, $zero
    ctx->r7 = ADD32(ctx->r4, 0);
    // 0x0042A950: lui         $v0, 0x800A
    ctx->r2 = S32(0X800A << 16);
    // 0x0042A954: addiu       $v0, $v0, 0x5D70
    ctx->r2 = ADD32(ctx->r2, 0X5D70);
    // 0x0042A958: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
    // 0x0042A95C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x0042A960: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x0042A964: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x0042A968: jal         0x0020367C
    // 0x0042A96C: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    func_0020367C(rdram, ctx);
        goto after_77;
    // 0x0042A96C: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    after_77:
    // 0x0042A970: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x0042A974: beq         $s1, $zero, L_0042AA4C
    if (ctx->r17 == 0) {
        // 0x0042A978: addu        $a1, $s0, $zero
        ctx->r5 = ADD32(ctx->r16, 0);
            goto L_0042AA4C;
    }
    // 0x0042A978: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x0042A97C: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    // 0x0042A980: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x0042A984: jal         0x0020185C
    // 0x0042A988: addiu       $a3, $sp, 0x34
    ctx->r7 = ADD32(ctx->r29, 0X34);
    func_0020185C(rdram, ctx);
        goto after_78;
    // 0x0042A988: addiu       $a3, $sp, 0x34
    ctx->r7 = ADD32(ctx->r29, 0X34);
    after_78:
    // 0x0042A98C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0042A990: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x0042A994: addu        $a3, $a0, $zero
    ctx->r7 = ADD32(ctx->r4, 0);
    // 0x0042A998: lw          $a2, 0x34($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X34);
    // 0x0042A99C: lui         $v0, 0x21
    ctx->r2 = S32(0X21 << 16);
    // 0x0042A9A0: addiu       $v0, $v0, -0x4B70
    ctx->r2 = ADD32(ctx->r2, -0X4B70);
    // 0x0042A9A4: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x0042A9A8: lui         $v0, 0x800A
    ctx->r2 = S32(0X800A << 16);
    // 0x0042A9AC: addiu       $v0, $v0, 0x5D80
    ctx->r2 = ADD32(ctx->r2, 0X5D80);
    // 0x0042A9B0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x0042A9B4: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x0042A9B8: jal         0x0020367C
    // 0x0042A9BC: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    func_0020367C(rdram, ctx);
        goto after_79;
    // 0x0042A9BC: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    after_79:
    // 0x0042A9C0: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x0042A9C4: beq         $s0, $zero, L_0042AA44
    if (ctx->r16 == 0) {
        // 0x0042A9C8: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_0042AA44;
    }
    // 0x0042A9C8: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0042A9CC: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x0042A9D0: jal         0x002017D4
    // 0x0042A9D4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_002017D4(rdram, ctx);
        goto after_80;
    // 0x0042A9D4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_80:
    // 0x0042A9D8: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x0042A9DC: jal         0x002017D4
    // 0x0042A9E0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_002017D4(rdram, ctx);
        goto after_81;
    // 0x0042A9E0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_81:
    // 0x0042A9E4: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x0042A9E8: jal         0x002017D4
    // 0x0042A9EC: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_002017D4(rdram, ctx);
        goto after_82;
    // 0x0042A9EC: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_82:
    // 0x0042A9F0: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x0042A9F4: jal         0x002017D4
    // 0x0042A9F8: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_002017D4(rdram, ctx);
        goto after_83;
    // 0x0042A9F8: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_83:
    // 0x0042A9FC: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0042AA00: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x0042AA04: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x0042AA08: lw          $t1, 0x4($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X4);
    // 0x0042AA0C: lw          $t2, 0x8($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X8);
    // 0x0042AA10: lw          $t3, 0xC($v0)
    ctx->r11 = MEM_W(ctx->r2, 0XC);
    // 0x0042AA14: sw          $t0, 0x0($s4)
    MEM_W(0X0, ctx->r20) = ctx->r8;
    // 0x0042AA18: sw          $t1, 0x4($s4)
    MEM_W(0X4, ctx->r20) = ctx->r9;
    // 0x0042AA1C: sw          $t2, 0x8($s4)
    MEM_W(0X8, ctx->r20) = ctx->r10;
    // 0x0042AA20: sw          $t3, 0xC($s4)
    MEM_W(0XC, ctx->r20) = ctx->r11;
    // 0x0042AA24: lw          $t0, 0x10($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X10);
    // 0x0042AA28: lw          $t1, 0x14($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X14);
    // 0x0042AA2C: lw          $t2, 0x18($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X18);
    // 0x0042AA30: sw          $t0, 0x10($s4)
    MEM_W(0X10, ctx->r20) = ctx->r8;
    // 0x0042AA34: sw          $t1, 0x14($s4)
    MEM_W(0X14, ctx->r20) = ctx->r9;
    // 0x0042AA38: jal         0x002052D8
    // 0x0042AA3C: sw          $t2, 0x18($s4)
    MEM_W(0X18, ctx->r20) = ctx->r10;
    func_002052D8(rdram, ctx);
        goto after_84;
    // 0x0042AA3C: sw          $t2, 0x18($s4)
    MEM_W(0X18, ctx->r20) = ctx->r10;
    after_84:
    // 0x0042AA40: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
L_0042AA44:
    // 0x0042AA44: jal         0x002052D8
    // 0x0042AA48: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_002052D8(rdram, ctx);
        goto after_85;
    // 0x0042AA48: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_85:
L_0042AA4C:
    // 0x0042AA4C: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x0042AA50: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x0042AA54: jal         0x0042AC0C
    // 0x0042AA58: addu        $a2, $a1, $zero
    ctx->r6 = ADD32(ctx->r5, 0);
    func_0042AC0C(rdram, ctx);
        goto after_86;
    // 0x0042AA58: addu        $a2, $a1, $zero
    ctx->r6 = ADD32(ctx->r5, 0);
    after_86:
    // 0x0042AA5C: lw          $ra, 0x50($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X50);
    // 0x0042AA60: lw          $s5, 0x4C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X4C);
    // 0x0042AA64: lw          $s4, 0x48($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X48);
    // 0x0042AA68: lw          $s3, 0x44($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X44);
    // 0x0042AA6C: lw          $s2, 0x40($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X40);
    // 0x0042AA70: lw          $s1, 0x3C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X3C);
    // 0x0042AA74: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x0042AA78: jr          $ra
    // 0x0042AA7C: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    return;
    // 0x0042AA7C: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void func_00289C0C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00289C0C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00289C10: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00289C14: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x00289C18: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x00289C1C: addiu       $v0, $v0, -0x5528
    ctx->r2 = ADD32(ctx->r2, -0X5528);
    // 0x00289C20: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x00289C24: sb          $zero, 0x19($v0)
    MEM_B(0X19, ctx->r2) = 0;
    // 0x00289C28: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00289C2C: lwc1        $f0, 0x2034($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X2034);
    // 0x00289C30: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00289C34: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00289C38: sw          $zero, 0x6D70($at)
    MEM_W(0X6D70, ctx->r1) = 0;
    // 0x00289C3C: lui         $at, 0x800F
    ctx->r1 = S32(0X800F << 16);
    // 0x00289C40: sw          $zero, 0x6CA0($at)
    MEM_W(0X6CA0, ctx->r1) = 0;
    // 0x00289C44: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x00289C48: swc1        $f0, -0xEE0($at)
    MEM_W(-0XEE0, ctx->r1) = ctx->f0.u32l;
    // 0x00289C4C: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x00289C50: sw          $zero, -0x5300($at)
    MEM_W(-0X5300, ctx->r1) = 0;
    // 0x00289C54: jal         0x002532A8
    // 0x00289C58: addiu       $a0, $v0, -0x1268
    ctx->r4 = ADD32(ctx->r2, -0X1268);
    func_002532A8(rdram, ctx);
        goto after_0;
    // 0x00289C58: addiu       $a0, $v0, -0x1268
    ctx->r4 = ADD32(ctx->r2, -0X1268);
    after_0:
    // 0x00289C5C: beq         $v0, $zero, L_00289C80
    if (ctx->r2 == 0) {
        // 0x00289C60: nop
    
            goto L_00289C80;
    }
    // 0x00289C60: nop

    // 0x00289C64: lw          $v0, 0x9F0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X9F0);
    // 0x00289C68: beq         $v0, $zero, L_00289C80
    if (ctx->r2 == 0) {
        // 0x00289C6C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_00289C80;
    }
    // 0x00289C6C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00289C70: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00289C74: sw          $v0, 0x6D74($at)
    MEM_W(0X6D74, ctx->r1) = ctx->r2;
    // 0x00289C78: j           L_00289C88
    // 0x00289C7C: nop

        goto L_00289C88;
    // 0x00289C7C: nop

L_00289C80:
    // 0x00289C80: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00289C84: sw          $zero, 0x6D74($at)
    MEM_W(0X6D74, ctx->r1) = 0;
L_00289C88:
    // 0x00289C88: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00289C8C: lw          $v0, 0x6D74($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X6D74);
    // 0x00289C90: beq         $v0, $zero, L_00289CBC
    if (ctx->r2 == 0) {
        // 0x00289C94: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_00289CBC;
    }
    // 0x00289C94: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00289C98: jal         0x00412438
    // 0x00289C9C: addiu       $a0, $zero, 0x82
    ctx->r4 = ADD32(0, 0X82);
    func_00412438(rdram, ctx);
        goto after_1;
    // 0x00289C9C: addiu       $a0, $zero, 0x82
    ctx->r4 = ADD32(0, 0X82);
    after_1:
    // 0x00289CA0: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x00289CA4: addiu       $a0, $a0, 0x7078
    ctx->r4 = ADD32(ctx->r4, 0X7078);
    // 0x00289CA8: nor         $a1, $zero, $v0
    ctx->r5 = ~(0 | ctx->r2);
    // 0x00289CAC: jal         0x0042C700
    // 0x00289CB0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_0042C700(rdram, ctx);
        goto after_2;
    // 0x00289CB0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_2:
    // 0x00289CB4: j           L_00289CC4
    // 0x00289CB8: nop

        goto L_00289CC4;
    // 0x00289CB8: nop

L_00289CBC:
    // 0x00289CBC: jal         0x00288DD0
    // 0x00289CC0: addiu       $a1, $zero, 0x82
    ctx->r5 = ADD32(0, 0X82);
    func_00288DD0(rdram, ctx);
        goto after_3;
    // 0x00289CC0: addiu       $a1, $zero, 0x82
    ctx->r5 = ADD32(0, 0X82);
    after_3:
L_00289CC4:
    // 0x00289CC4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x00289CC8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00289CCC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00289CD0: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00289CD4: sw          $v0, 0x6D70($at)
    MEM_W(0X6D70, ctx->r1) = ctx->r2;
    // 0x00289CD8: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00289CDC: sw          $zero, 0x6D74($at)
    MEM_W(0X6D74, ctx->r1) = 0;
    // 0x00289CE0: jr          $ra
    // 0x00289CE4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00289CE4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00210284(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00210284: mtc1        $a1, $f3
    ctx->f_odd[(3 - 1) * 2] = ctx->r5;
    // 0x00210288: lwc1        $f1, 0x0($a0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r4, 0X0);
    // 0x0021028C: mul.s       $f1, $f3, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = MUL_S(ctx->f3.fl, ctx->f1.fl);
    // 0x00210290: mtc1        $a2, $f8
    ctx->f8.u32l = ctx->r6;
    // 0x00210294: lwc1        $f7, 0x10($a0)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r4, 0X10);
    // 0x00210298: mul.s       $f7, $f8, $f7
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 7);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f7.fl); 
    ctx->f7.fl = MUL_S(ctx->f8.fl, ctx->f7.fl);
    // 0x0021029C: mtc1        $a3, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r7;
    // 0x002102A0: lwc1        $f6, 0x20($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X20);
    // 0x002102A4: mul.s       $f6, $f9, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 9);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f9.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f6.fl = MUL_S(ctx->f9.fl, ctx->f6.fl);
    // 0x002102A8: lwc1        $f2, 0x4($a0)
    ctx->f2.u32l = MEM_W(ctx->r4, 0X4);
    // 0x002102AC: mul.s       $f2, $f3, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = MUL_S(ctx->f3.fl, ctx->f2.fl);
    // 0x002102B0: lwc1        $f4, 0x14($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X14);
    // 0x002102B4: mul.s       $f4, $f8, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f4.fl = MUL_S(ctx->f8.fl, ctx->f4.fl);
    // 0x002102B8: lwc1        $f5, 0x24($a0)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r4, 0X24);
    // 0x002102BC: mul.s       $f5, $f9, $f5
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 9);
    CHECK_FR(ctx, 5);
    NAN_CHECK(ctx->f9.fl); NAN_CHECK(ctx->f5.fl); 
    ctx->f5.fl = MUL_S(ctx->f9.fl, ctx->f5.fl);
    // 0x002102C0: lwc1        $f0, 0x8($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X8);
    // 0x002102C4: mul.s       $f3, $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f3.fl = MUL_S(ctx->f3.fl, ctx->f0.fl);
    // 0x002102C8: lwc1        $f0, 0x18($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X18);
    // 0x002102CC: mul.s       $f8, $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x002102D0: lwc1        $f0, 0x28($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X28);
    // 0x002102D4: mul.s       $f9, $f9, $f0
    CHECK_FR(ctx, 9);
    CHECK_FR(ctx, 9);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f9.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f9.fl = MUL_S(ctx->f9.fl, ctx->f0.fl);
    // 0x002102D8: add.s       $f1, $f1, $f7
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 7);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f7.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f7.fl;
    // 0x002102DC: add.s       $f2, $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f4.fl;
    // 0x002102E0: add.s       $f3, $f3, $f8
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f3.fl = ctx->f3.fl + ctx->f8.fl;
    // 0x002102E4: add.s       $f1, $f1, $f6
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f6.fl;
    // 0x002102E8: add.s       $f2, $f2, $f5
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 5);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f5.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f5.fl;
    // 0x002102EC: add.s       $f3, $f3, $f9
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 9);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f9.fl); 
    ctx->f3.fl = ctx->f3.fl + ctx->f9.fl;
    // 0x002102F0: lwc1        $f4, 0x30($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X30);
    // 0x002102F4: add.s       $f4, $f4, $f1
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f4.fl = ctx->f4.fl + ctx->f1.fl;
    // 0x002102F8: lwc1        $f1, 0x34($a0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r4, 0X34);
    // 0x002102FC: add.s       $f1, $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f2.fl;
    // 0x00210300: lwc1        $f0, 0x38($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X38);
    // 0x00210304: add.s       $f0, $f0, $f3
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f3.fl;
    // 0x00210308: swc1        $f4, 0x30($a0)
    MEM_W(0X30, ctx->r4) = ctx->f4.u32l;
    // 0x0021030C: swc1        $f1, 0x34($a0)
    MEM_W(0X34, ctx->r4) = ctx->f_odd[(1 - 1) * 2];
    // 0x00210310: jr          $ra
    // 0x00210314: swc1        $f0, 0x38($a0)
    MEM_W(0X38, ctx->r4) = ctx->f0.u32l;
    return;
    // 0x00210314: swc1        $f0, 0x38($a0)
    MEM_W(0X38, ctx->r4) = ctx->f0.u32l;
;}
RECOMP_FUNC void func_0020FCC4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0020FCC4: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x0020FCC8: sdc1        $f23, 0x30($sp)
    CHECK_FR(ctx, 23);
    SD(ctx->f23.u64, 0X30, ctx->r29);
    // 0x0020FCCC: mtc1        $a1, $f23
    ctx->f_odd[(23 - 1) * 2] = ctx->r5;
    // 0x0020FCD0: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x0020FCD4: mtc1        $a2, $f20
    ctx->f20.u32l = ctx->r6;
    // 0x0020FCD8: sdc1        $f21, 0x20($sp)
    CHECK_FR(ctx, 21);
    SD(ctx->f21.u64, 0X20, ctx->r29);
    // 0x0020FCDC: mtc1        $a3, $f21
    ctx->f_odd[(21 - 1) * 2] = ctx->r7;
    // 0x0020FCE0: sdc1        $f22, 0x28($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X28, ctx->r29);
    // 0x0020FCE4: lwc1        $f22, 0x48($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X48);
    // 0x0020FCE8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0020FCEC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x0020FCF0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x0020FCF4: jal         0x002982F0
    // 0x0020FCF8: mov.s       $f12, $f23
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 23);
    ctx->f12.fl = ctx->f23.fl;
    func_002982F0(rdram, ctx);
        goto after_0;
    // 0x0020FCF8: mov.s       $f12, $f23
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 23);
    ctx->f12.fl = ctx->f23.fl;
    after_0:
    // 0x0020FCFC: mov.s       $f12, $f23
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 23);
    ctx->f12.fl = ctx->f23.fl;
    // 0x0020FD00: jal         0x002974C0
    // 0x0020FD04: mov.s       $f23, $f0
    CHECK_FR(ctx, 23);
    CHECK_FR(ctx, 0);
    ctx->f23.fl = ctx->f0.fl;
    func_002974C0(rdram, ctx);
        goto after_1;
    // 0x0020FD04: mov.s       $f23, $f0
    CHECK_FR(ctx, 23);
    CHECK_FR(ctx, 0);
    ctx->f23.fl = ctx->f0.fl;
    after_1:
    // 0x0020FD08: mul.s       $f7, $f20, $f21
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f21.fl); 
    ctx->f7.fl = MUL_S(ctx->f20.fl, ctx->f21.fl);
    // 0x0020FD0C: nop

    // 0x0020FD10: mul.s       $f3, $f21, $f22
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f21.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f3.fl = MUL_S(ctx->f21.fl, ctx->f22.fl);
    // 0x0020FD14: nop

    // 0x0020FD18: mul.s       $f5, $f22, $f20
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f5.fl = MUL_S(ctx->f22.fl, ctx->f20.fl);
    // 0x0020FD1C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0020FD20: lwc1        $f6, 0x55FC($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X55FC);
    // 0x0020FD24: sub.s       $f10, $f6, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f0.fl;
    // 0x0020FD28: mul.s       $f7, $f7, $f10
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f7.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f7.fl = MUL_S(ctx->f7.fl, ctx->f10.fl);
    // 0x0020FD2C: nop

    // 0x0020FD30: mul.s       $f3, $f3, $f10
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f3.fl = MUL_S(ctx->f3.fl, ctx->f10.fl);
    // 0x0020FD34: nop

    // 0x0020FD38: mul.s       $f5, $f5, $f10
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f5.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f5.fl = MUL_S(ctx->f5.fl, ctx->f10.fl);
    // 0x0020FD3C: nop

    // 0x0020FD40: mul.s       $f10, $f20, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f10.fl = MUL_S(ctx->f20.fl, ctx->f20.fl);
    // 0x0020FD44: nop

    // 0x0020FD48: mul.s       $f20, $f20, $f23
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 23);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f23.fl); 
    ctx->f20.fl = MUL_S(ctx->f20.fl, ctx->f23.fl);
    // 0x0020FD4C: sub.s       $f4, $f6, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f6.fl - ctx->f10.fl;
    // 0x0020FD50: mul.s       $f4, $f0, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x0020FD54: add.s       $f4, $f10, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x0020FD58: mul.s       $f10, $f21, $f21
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f21.fl); NAN_CHECK(ctx->f21.fl); 
    ctx->f10.fl = MUL_S(ctx->f21.fl, ctx->f21.fl);
    // 0x0020FD5C: nop

    // 0x0020FD60: mul.s       $f21, $f21, $f23
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 23);
    NAN_CHECK(ctx->f21.fl); NAN_CHECK(ctx->f23.fl); 
    ctx->f21.fl = MUL_S(ctx->f21.fl, ctx->f23.fl);
    // 0x0020FD64: sub.s       $f2, $f6, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f2.fl = ctx->f6.fl - ctx->f10.fl;
    // 0x0020FD68: mul.s       $f2, $f0, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = MUL_S(ctx->f0.fl, ctx->f2.fl);
    // 0x0020FD6C: add.s       $f2, $f10, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = ctx->f10.fl + ctx->f2.fl;
    // 0x0020FD70: mul.s       $f10, $f22, $f22
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f10.fl = MUL_S(ctx->f22.fl, ctx->f22.fl);
    // 0x0020FD74: sub.s       $f1, $f6, $f10
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f1.fl = ctx->f6.fl - ctx->f10.fl;
    // 0x0020FD78: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0020FD7C: sub.s       $f9, $f3, $f20
    CHECK_FR(ctx, 9);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f9.fl = ctx->f3.fl - ctx->f20.fl;
    // 0x0020FD80: add.s       $f3, $f3, $f20
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f3.fl = ctx->f3.fl + ctx->f20.fl;
    // 0x0020FD84: add.s       $f8, $f5, $f21
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f5.fl); NAN_CHECK(ctx->f21.fl); 
    ctx->f8.fl = ctx->f5.fl + ctx->f21.fl;
    // 0x0020FD88: swc1        $f6, 0x3C($s0)
    MEM_W(0X3C, ctx->r16) = ctx->f6.u32l;
    // 0x0020FD8C: swc1        $f9, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f_odd[(9 - 1) * 2];
    // 0x0020FD90: sub.s       $f5, $f5, $f21
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f5.fl); NAN_CHECK(ctx->f21.fl); 
    ctx->f5.fl = ctx->f5.fl - ctx->f21.fl;
    // 0x0020FD94: swc1        $f3, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->f_odd[(3 - 1) * 2];
    // 0x0020FD98: mtc1        $zero, $f1
    ctx->f_odd[(1 - 1) * 2] = 0;
    // 0x0020FD9C: mul.s       $f22, $f22, $f23
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 23);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f23.fl); 
    ctx->f22.fl = MUL_S(ctx->f22.fl, ctx->f23.fl);
    // 0x0020FDA0: swc1        $f1, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->f_odd[(1 - 1) * 2];
    // 0x0020FDA4: swc1        $f1, 0x34($s0)
    MEM_W(0X34, ctx->r16) = ctx->f_odd[(1 - 1) * 2];
    // 0x0020FDA8: swc1        $f1, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->f_odd[(1 - 1) * 2];
    // 0x0020FDAC: swc1        $f1, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->f_odd[(1 - 1) * 2];
    // 0x0020FDB0: swc1        $f1, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f_odd[(1 - 1) * 2];
    // 0x0020FDB4: swc1        $f1, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f_odd[(1 - 1) * 2];
    // 0x0020FDB8: sub.s       $f1, $f7, $f22
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f7.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f1.fl = ctx->f7.fl - ctx->f22.fl;
    // 0x0020FDBC: swc1        $f4, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f4.u32l;
    // 0x0020FDC0: swc1        $f8, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f8.u32l;
    // 0x0020FDC4: add.s       $f7, $f7, $f22
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f7.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f7.fl = ctx->f7.fl + ctx->f22.fl;
    // 0x0020FDC8: swc1        $f5, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f_odd[(5 - 1) * 2];
    // 0x0020FDCC: swc1        $f2, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->f2.u32l;
    // 0x0020FDD0: add.s       $f0, $f10, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f10.fl + ctx->f0.fl;
    // 0x0020FDD4: swc1        $f1, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->f_odd[(1 - 1) * 2];
    // 0x0020FDD8: swc1        $f7, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f_odd[(7 - 1) * 2];
    // 0x0020FDDC: swc1        $f0, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->f0.u32l;
    // 0x0020FDE0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x0020FDE4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0020FDE8: ldc1        $f23, 0x30($sp)
    CHECK_FR(ctx, 23);
    ctx->f23.u64 = LD(ctx->r29, 0X30);
    // 0x0020FDEC: ldc1        $f22, 0x28($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X28);
    // 0x0020FDF0: ldc1        $f21, 0x20($sp)
    CHECK_FR(ctx, 21);
    ctx->f21.u64 = LD(ctx->r29, 0X20);
    // 0x0020FDF4: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x0020FDF8: jr          $ra
    // 0x0020FDFC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x0020FDFC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_0026B858(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0026B858: addiu       $sp, $sp, -0x80
    ctx->r29 = ADD32(ctx->r29, -0X80);
    // 0x0026B85C: sw          $s0, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r16;
    // 0x0026B860: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x0026B864: sw          $s1, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r17;
    // 0x0026B868: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x0026B86C: sw          $ra, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r31;
    // 0x0026B870: lw          $a1, 0x4($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X4);
    // 0x0026B874: lw          $a2, 0x8($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X8);
    // 0x0026B878: jal         0x0020EEF8
    // 0x0026B87C: addiu       $a0, $sp, 0x40
    ctx->r4 = ADD32(ctx->r29, 0X40);
    func_0020EEF8(rdram, ctx);
        goto after_0;
    // 0x0026B87C: addiu       $a0, $sp, 0x40
    ctx->r4 = ADD32(ctx->r29, 0X40);
    after_0:
    // 0x0026B880: addiu       $a0, $sp, 0x40
    ctx->r4 = ADD32(ctx->r29, 0X40);
    // 0x0026B884: lui         $a2, 0x3F00
    ctx->r6 = S32(0X3F00 << 16);
    // 0x0026B888: jal         0x0020EF60
    // 0x0026B88C: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    func_0020EF60(rdram, ctx);
        goto after_1;
    // 0x0026B88C: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    after_1:
    // 0x0026B890: lw          $a1, 0x8($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X8);
    // 0x0026B894: lw          $a2, 0xC($s0)
    ctx->r6 = MEM_W(ctx->r16, 0XC);
    // 0x0026B898: jal         0x0020EEF8
    // 0x0026B89C: addiu       $a0, $sp, 0x50
    ctx->r4 = ADD32(ctx->r29, 0X50);
    func_0020EEF8(rdram, ctx);
        goto after_2;
    // 0x0026B89C: addiu       $a0, $sp, 0x50
    ctx->r4 = ADD32(ctx->r29, 0X50);
    after_2:
    // 0x0026B8A0: addiu       $a0, $sp, 0x50
    ctx->r4 = ADD32(ctx->r29, 0X50);
    // 0x0026B8A4: lui         $a2, 0x3F00
    ctx->r6 = S32(0X3F00 << 16);
    // 0x0026B8A8: jal         0x0020EF60
    // 0x0026B8AC: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    func_0020EF60(rdram, ctx);
        goto after_3;
    // 0x0026B8AC: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    after_3:
    // 0x0026B8B0: lw          $a1, 0xC($s0)
    ctx->r5 = MEM_W(ctx->r16, 0XC);
    // 0x0026B8B4: lw          $a2, 0x4($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X4);
    // 0x0026B8B8: jal         0x0020EEF8
    // 0x0026B8BC: addiu       $a0, $sp, 0x60
    ctx->r4 = ADD32(ctx->r29, 0X60);
    func_0020EEF8(rdram, ctx);
        goto after_4;
    // 0x0026B8BC: addiu       $a0, $sp, 0x60
    ctx->r4 = ADD32(ctx->r29, 0X60);
    after_4:
    // 0x0026B8C0: addiu       $a0, $sp, 0x60
    ctx->r4 = ADD32(ctx->r29, 0X60);
    // 0x0026B8C4: lui         $a2, 0x3F00
    ctx->r6 = S32(0X3F00 << 16);
    // 0x0026B8C8: jal         0x0020EF60
    // 0x0026B8CC: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    func_0020EF60(rdram, ctx);
        goto after_5;
    // 0x0026B8CC: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    after_5:
    // 0x0026B8D0: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    // 0x0026B8D4: addiu       $a1, $sp, 0x40
    ctx->r5 = ADD32(ctx->r29, 0X40);
    // 0x0026B8D8: jal         0x0020EEF8
    // 0x0026B8DC: addiu       $a2, $sp, 0x50
    ctx->r6 = ADD32(ctx->r29, 0X50);
    func_0020EEF8(rdram, ctx);
        goto after_6;
    // 0x0026B8DC: addiu       $a2, $sp, 0x50
    ctx->r6 = ADD32(ctx->r29, 0X50);
    after_6:
    // 0x0026B8E0: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    // 0x0026B8E4: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x0026B8E8: jal         0x0020EEF8
    // 0x0026B8EC: addiu       $a2, $sp, 0x60
    ctx->r6 = ADD32(ctx->r29, 0X60);
    func_0020EEF8(rdram, ctx);
        goto after_7;
    // 0x0026B8EC: addiu       $a2, $sp, 0x60
    ctx->r6 = ADD32(ctx->r29, 0X60);
    after_7:
    // 0x0026B8F0: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    // 0x0026B8F4: lui         $a2, 0x3EAA
    ctx->r6 = S32(0X3EAA << 16);
    // 0x0026B8F8: ori         $a2, $a2, 0xAAAB
    ctx->r6 = ctx->r6 | 0XAAAB;
    // 0x0026B8FC: jal         0x0020EF60
    // 0x0026B900: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    func_0020EF60(rdram, ctx);
        goto after_8;
    // 0x0026B900: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    after_8:
    // 0x0026B904: lw          $a1, 0x4($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X4);
    // 0x0026B908: lw          $a2, 0x8($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X8);
    // 0x0026B90C: jal         0x0020EEF8
    // 0x0026B910: addiu       $a0, $sp, 0x40
    ctx->r4 = ADD32(ctx->r29, 0X40);
    func_0020EEF8(rdram, ctx);
        goto after_9;
    // 0x0026B910: addiu       $a0, $sp, 0x40
    ctx->r4 = ADD32(ctx->r29, 0X40);
    after_9:
    // 0x0026B914: addiu       $a0, $sp, 0x40
    ctx->r4 = ADD32(ctx->r29, 0X40);
    // 0x0026B918: lui         $a2, 0x3F00
    ctx->r6 = S32(0X3F00 << 16);
    // 0x0026B91C: jal         0x0020EF60
    // 0x0026B920: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    func_0020EF60(rdram, ctx);
        goto after_10;
    // 0x0026B920: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    after_10:
    // 0x0026B924: lw          $a1, 0x8($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X8);
    // 0x0026B928: lw          $a2, 0xC($s1)
    ctx->r6 = MEM_W(ctx->r17, 0XC);
    // 0x0026B92C: jal         0x0020EEF8
    // 0x0026B930: addiu       $a0, $sp, 0x50
    ctx->r4 = ADD32(ctx->r29, 0X50);
    func_0020EEF8(rdram, ctx);
        goto after_11;
    // 0x0026B930: addiu       $a0, $sp, 0x50
    ctx->r4 = ADD32(ctx->r29, 0X50);
    after_11:
    // 0x0026B934: addiu       $a0, $sp, 0x50
    ctx->r4 = ADD32(ctx->r29, 0X50);
    // 0x0026B938: lui         $a2, 0x3F00
    ctx->r6 = S32(0X3F00 << 16);
    // 0x0026B93C: jal         0x0020EF60
    // 0x0026B940: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    func_0020EF60(rdram, ctx);
        goto after_12;
    // 0x0026B940: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    after_12:
    // 0x0026B944: lw          $a1, 0xC($s1)
    ctx->r5 = MEM_W(ctx->r17, 0XC);
    // 0x0026B948: lw          $a2, 0x4($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X4);
    // 0x0026B94C: jal         0x0020EEF8
    // 0x0026B950: addiu       $a0, $sp, 0x60
    ctx->r4 = ADD32(ctx->r29, 0X60);
    func_0020EEF8(rdram, ctx);
        goto after_13;
    // 0x0026B950: addiu       $a0, $sp, 0x60
    ctx->r4 = ADD32(ctx->r29, 0X60);
    after_13:
    // 0x0026B954: addiu       $a0, $sp, 0x60
    ctx->r4 = ADD32(ctx->r29, 0X60);
    // 0x0026B958: lui         $a2, 0x3F00
    ctx->r6 = S32(0X3F00 << 16);
    // 0x0026B95C: jal         0x0020EF60
    // 0x0026B960: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    func_0020EF60(rdram, ctx);
        goto after_14;
    // 0x0026B960: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    after_14:
    // 0x0026B964: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    // 0x0026B968: addiu       $a1, $sp, 0x40
    ctx->r5 = ADD32(ctx->r29, 0X40);
    // 0x0026B96C: jal         0x0020EEF8
    // 0x0026B970: addiu       $a2, $sp, 0x50
    ctx->r6 = ADD32(ctx->r29, 0X50);
    func_0020EEF8(rdram, ctx);
        goto after_15;
    // 0x0026B970: addiu       $a2, $sp, 0x50
    ctx->r6 = ADD32(ctx->r29, 0X50);
    after_15:
    // 0x0026B974: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    // 0x0026B978: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x0026B97C: jal         0x0020EEF8
    // 0x0026B980: addiu       $a2, $sp, 0x60
    ctx->r6 = ADD32(ctx->r29, 0X60);
    func_0020EEF8(rdram, ctx);
        goto after_16;
    // 0x0026B980: addiu       $a2, $sp, 0x60
    ctx->r6 = ADD32(ctx->r29, 0X60);
    after_16:
    // 0x0026B984: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    // 0x0026B988: lui         $a2, 0x3EAA
    ctx->r6 = S32(0X3EAA << 16);
    // 0x0026B98C: ori         $a2, $a2, 0xAAAB
    ctx->r6 = ctx->r6 | 0XAAAB;
    // 0x0026B990: jal         0x0020EF60
    // 0x0026B994: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    func_0020EF60(rdram, ctx);
        goto after_17;
    // 0x0026B994: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    after_17:
    // 0x0026B998: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x0026B99C: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x0026B9A0: jal         0x0020EF2C
    // 0x0026B9A4: addiu       $a2, $sp, 0x30
    ctx->r6 = ADD32(ctx->r29, 0X30);
    func_0020EF2C(rdram, ctx);
        goto after_18;
    // 0x0026B9A4: addiu       $a2, $sp, 0x30
    ctx->r6 = ADD32(ctx->r29, 0X30);
    after_18:
    // 0x0026B9A8: lwc1        $f1, 0x10($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x0026B9AC: mul.s       $f1, $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f1.fl);
    // 0x0026B9B0: lwc1        $f0, 0x14($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X14);
    // 0x0026B9B4: mul.s       $f0, $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x0026B9B8: lwc1        $f12, 0x18($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X18);
    // 0x0026B9BC: mul.s       $f12, $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x0026B9C0: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x0026B9C4: jal         0x00298470
    // 0x0026B9C8: add.s       $f12, $f1, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = ctx->f1.fl + ctx->f12.fl;
    func_00298470(rdram, ctx);
        goto after_19;
    // 0x0026B9C8: add.s       $f12, $f1, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = ctx->f1.fl + ctx->f12.fl;
    after_19:
    // 0x0026B9CC: lw          $ra, 0x78($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X78);
    // 0x0026B9D0: lw          $s1, 0x74($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X74);
    // 0x0026B9D4: lw          $s0, 0x70($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X70);
    // 0x0026B9D8: jr          $ra
    // 0x0026B9DC: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
    return;
    // 0x0026B9DC: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
;}
RECOMP_FUNC void func_00421E34(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00421E34: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x00421E38: sw          $zero, 0x9B8($at)
    MEM_W(0X9B8, ctx->r1) = 0;
    // 0x00421E3C: jr          $ra
    // 0x00421E40: nop

    return;
    // 0x00421E40: nop

;}
RECOMP_FUNC void func_00429D84(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00429D84: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x00429D88: blez        $a1, L_00429DAC
    if (SIGNED(ctx->r5) <= 0) {
        // 0x00429D8C: addu        $v1, $a2, $zero
        ctx->r3 = ADD32(ctx->r6, 0);
            goto L_00429DAC;
    }
    // 0x00429D8C: addu        $v1, $a2, $zero
    ctx->r3 = ADD32(ctx->r6, 0);
L_00429D90:
    // 0x00429D90: lbu         $v0, 0x0($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X0);
    // 0x00429D94: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x00429D98: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x00429D9C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x00429DA0: slt         $v0, $a2, $a1
    ctx->r2 = SIGNED(ctx->r6) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x00429DA4: bne         $v0, $zero, L_00429D90
    if (ctx->r2 != 0) {
        // 0x00429DA8: andi        $v1, $v1, 0xFFFF
        ctx->r3 = ctx->r3 & 0XFFFF;
            goto L_00429D90;
    }
    // 0x00429DA8: andi        $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 & 0XFFFF;
L_00429DAC:
    // 0x00429DAC: jr          $ra
    // 0x00429DB0: andi        $v0, $v1, 0xFFFF
    ctx->r2 = ctx->r3 & 0XFFFF;
    return;
    // 0x00429DB0: andi        $v0, $v1, 0xFFFF
    ctx->r2 = ctx->r3 & 0XFFFF;
;}
RECOMP_FUNC void func_002484F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002484F8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x002484FC: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00248500: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x00248504: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x00248508: addu        $s2, $a1, $zero
    ctx->r18 = ADD32(ctx->r5, 0);
    // 0x0024850C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00248510: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x00248514: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x00248518: jal         0x0026EFB8
    // 0x0024851C: addu        $a0, $a2, $zero
    ctx->r4 = ADD32(ctx->r6, 0);
    func_0026EFB8(rdram, ctx);
        goto after_0;
    // 0x0024851C: addu        $a0, $a2, $zero
    ctx->r4 = ADD32(ctx->r6, 0);
    after_0:
    // 0x00248520: addiu       $v1, $v0, -0x1
    ctx->r3 = ADD32(ctx->r2, -0X1);
    // 0x00248524: sltiu       $v0, $v1, 0x6
    ctx->r2 = ctx->r3 < 0X6 ? 1 : 0;
    // 0x00248528: beq         $v0, $zero, L_0024862C
    if (ctx->r2 == 0) {
        // 0x0024852C: addu        $v0, $s0, $zero
        ctx->r2 = ADD32(ctx->r16, 0);
            goto L_0024862C;
    }
    // 0x0024852C: addu        $v0, $s0, $zero
    ctx->r2 = ADD32(ctx->r16, 0);
    // 0x00248530: beq         $s2, $zero, L_0024854C
    if (ctx->r18 == 0) {
        // 0x00248534: addu        $t4, $v1, $zero
        ctx->r12 = ADD32(ctx->r3, 0);
            goto L_0024854C;
    }
    // 0x00248534: addu        $t4, $v1, $zero
    ctx->r12 = ADD32(ctx->r3, 0);
    // 0x00248538: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0024853C: beq         $s2, $v0, L_00248600
    if (ctx->r18 == ctx->r2) {
        // 0x00248540: addu        $v0, $s0, $zero
        ctx->r2 = ADD32(ctx->r16, 0);
            goto L_00248600;
    }
    // 0x00248540: addu        $v0, $s0, $zero
    ctx->r2 = ADD32(ctx->r16, 0);
    // 0x00248544: j           L_0024862C
    // 0x00248548: nop

        goto L_0024862C;
    // 0x00248548: nop

L_0024854C:
    // 0x0024854C: addu        $t3, $zero, $zero
    ctx->r11 = ADD32(0, 0);
    // 0x00248550: addu        $t2, $t3, $zero
    ctx->r10 = ADD32(ctx->r11, 0);
    // 0x00248554: sll         $v0, $t2, 2
    ctx->r2 = S32(ctx->r10 << 2);
L_00248558:
    // 0x00248558: addu        $v1, $s1, $t2
    ctx->r3 = ADD32(ctx->r17, ctx->r10);
    // 0x0024855C: lb          $v1, 0x972($v1)
    ctx->r3 = MEM_B(ctx->r3, 0X972);
    // 0x00248560: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00248564: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x00248568: lw          $v0, -0x9E8($at)
    ctx->r2 = MEM_W(ctx->r1, -0X9E8);
    // 0x0024856C: beql        $v1, $zero, L_002485D8
    if (ctx->r3 == 0) {
        // 0x00248570: addiu       $t2, $t2, 0x1
        ctx->r10 = ADD32(ctx->r10, 0X1);
            goto L_002485D8;
    }
    goto skip_0;
    // 0x00248570: addiu       $t2, $t2, 0x1
    ctx->r10 = ADD32(ctx->r10, 0X1);
    skip_0:
    // 0x00248574: addu        $t1, $zero, $zero
    ctx->r9 = ADD32(0, 0);
    // 0x00248578: addu        $t0, $v0, $zero
    ctx->r8 = ADD32(ctx->r2, 0);
L_0024857C:
    // 0x0024857C: lw          $v1, 0x20($t0)
    ctx->r3 = MEM_W(ctx->r8, 0X20);
    // 0x00248580: beql        $v1, $zero, L_002485D8
    if (ctx->r3 == 0) {
        // 0x00248584: addiu       $t2, $t2, 0x1
        ctx->r10 = ADD32(ctx->r10, 0X1);
            goto L_002485D8;
    }
    goto skip_1;
    // 0x00248584: addiu       $t2, $t2, 0x1
    ctx->r10 = ADD32(ctx->r10, 0X1);
    skip_1:
    // 0x00248588: lh          $v0, 0x0($v1)
    ctx->r2 = MEM_H(ctx->r3, 0X0);
    // 0x0024858C: lh          $a1, 0x2($v1)
    ctx->r5 = MEM_H(ctx->r3, 0X2);
    // 0x00248590: lhu         $v1, 0x2($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0X2);
    // 0x00248594: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x00248598: addiu       $v0, $v0, 0x934
    ctx->r2 = ADD32(ctx->r2, 0X934);
    // 0x0024859C: addu        $a3, $s1, $v0
    ctx->r7 = ADD32(ctx->r17, ctx->r2);
    // 0x002485A0: lh          $a2, 0x0($a3)
    ctx->r6 = MEM_H(ctx->r7, 0X0);
    // 0x002485A4: lhu         $a0, 0x0($a3)
    ctx->r4 = MEM_HU(ctx->r7, 0X0);
    // 0x002485A8: slt         $v0, $a2, $a1
    ctx->r2 = SIGNED(ctx->r6) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x002485AC: bnel        $v0, $zero, L_002485B4
    if (ctx->r2 != 0) {
        // 0x002485B0: addiu       $t3, $zero, 0x1
        ctx->r11 = ADD32(0, 0X1);
            goto L_002485B4;
    }
    goto skip_2;
    // 0x002485B0: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    skip_2:
L_002485B4:
    // 0x002485B4: slt         $v0, $a1, $a2
    ctx->r2 = SIGNED(ctx->r5) < SIGNED(ctx->r6) ? 1 : 0;
    // 0x002485B8: bnel        $v0, $zero, L_002485C0
    if (ctx->r2 != 0) {
        // 0x002485BC: addu        $v1, $a0, $zero
        ctx->r3 = ADD32(ctx->r4, 0);
            goto L_002485C0;
    }
    goto skip_3;
    // 0x002485BC: addu        $v1, $a0, $zero
    ctx->r3 = ADD32(ctx->r4, 0);
    skip_3:
L_002485C0:
    // 0x002485C0: sh          $v1, 0x0($a3)
    MEM_H(0X0, ctx->r7) = ctx->r3;
    // 0x002485C4: addiu       $t1, $t1, 0x1
    ctx->r9 = ADD32(ctx->r9, 0X1);
    // 0x002485C8: slti        $v0, $t1, 0x3
    ctx->r2 = SIGNED(ctx->r9) < 0X3 ? 1 : 0;
    // 0x002485CC: bne         $v0, $zero, L_0024857C
    if (ctx->r2 != 0) {
        // 0x002485D0: addiu       $t0, $t0, 0x4
        ctx->r8 = ADD32(ctx->r8, 0X4);
            goto L_0024857C;
    }
    // 0x002485D0: addiu       $t0, $t0, 0x4
    ctx->r8 = ADD32(ctx->r8, 0X4);
    // 0x002485D4: addiu       $t2, $t2, 0x1
    ctx->r10 = ADD32(ctx->r10, 0X1);
L_002485D8:
    // 0x002485D8: slti        $v0, $t2, 0x23
    ctx->r2 = SIGNED(ctx->r10) < 0X23 ? 1 : 0;
    // 0x002485DC: bne         $v0, $zero, L_00248558
    if (ctx->r2 != 0) {
        // 0x002485E0: sll         $v0, $t2, 2
        ctx->r2 = S32(ctx->r10 << 2);
            goto L_00248558;
    }
    // 0x002485E0: sll         $v0, $t2, 2
    ctx->r2 = S32(ctx->r10 << 2);
    // 0x002485E4: addu        $s0, $t3, $zero
    ctx->r16 = ADD32(ctx->r11, 0);
    // 0x002485E8: beq         $s0, $zero, L_00248628
    if (ctx->r16 == 0) {
        // 0x002485EC: sll         $v0, $t4, 2
        ctx->r2 = S32(ctx->r12 << 2);
            goto L_00248628;
    }
    // 0x002485EC: sll         $v0, $t4, 2
    ctx->r2 = S32(ctx->r12 << 2);
    // 0x002485F0: addu        $v0, $s1, $v0
    ctx->r2 = ADD32(ctx->r17, ctx->r2);
    // 0x002485F4: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x002485F8: j           L_00248628
    // 0x002485FC: sw          $v1, 0x9A0($v0)
    MEM_W(0X9A0, ctx->r2) = ctx->r3;
        goto L_00248628;
    // 0x002485FC: sw          $v1, 0x9A0($v0)
    MEM_W(0X9A0, ctx->r2) = ctx->r3;
L_00248600:
    // 0x00248600: lw          $v0, 0x524($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X524);
    // 0x00248604: slti        $v0, $v0, 0x6400
    ctx->r2 = SIGNED(ctx->r2) < 0X6400 ? 1 : 0;
    // 0x00248608: beq         $v0, $zero, L_00248618
    if (ctx->r2 == 0) {
        // 0x0024860C: addiu       $v0, $zero, 0x6400
        ctx->r2 = ADD32(0, 0X6400);
            goto L_00248618;
    }
    // 0x0024860C: addiu       $v0, $zero, 0x6400
    ctx->r2 = ADD32(0, 0X6400);
    // 0x00248610: sw          $v0, 0x524($s1)
    MEM_W(0X524, ctx->r17) = ctx->r2;
    // 0x00248614: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
L_00248618:
    // 0x00248618: beq         $s0, $zero, L_00248628
    if (ctx->r16 == 0) {
        // 0x0024861C: sll         $v0, $t4, 2
        ctx->r2 = S32(ctx->r12 << 2);
            goto L_00248628;
    }
    // 0x0024861C: sll         $v0, $t4, 2
    ctx->r2 = S32(ctx->r12 << 2);
    // 0x00248620: addu        $v0, $s1, $v0
    ctx->r2 = ADD32(ctx->r17, ctx->r2);
    // 0x00248624: sw          $s2, 0x9B8($v0)
    MEM_W(0X9B8, ctx->r2) = ctx->r18;
L_00248628:
    // 0x00248628: addu        $v0, $s0, $zero
    ctx->r2 = ADD32(ctx->r16, 0);
L_0024862C:
    // 0x0024862C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x00248630: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x00248634: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00248638: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0024863C: jr          $ra
    // 0x00248640: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00248640: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_0021D39C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0021D39C: addiu       $sp, $sp, -0x98
    ctx->r29 = ADD32(ctx->r29, -0X98);
    // 0x0021D3A0: sw          $s0, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r16;
    // 0x0021D3A4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x0021D3A8: sw          $s2, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r18;
    // 0x0021D3AC: sw          $ra, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r31;
    // 0x0021D3B0: sw          $s6, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r22;
    // 0x0021D3B4: sw          $s5, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r21;
    // 0x0021D3B8: sw          $s4, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r20;
    // 0x0021D3BC: sw          $s3, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r19;
    // 0x0021D3C0: sw          $s1, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r17;
    // 0x0021D3C4: lw          $v1, 0xD4($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XD4);
    // 0x0021D3C8: lui         $v0, 0x4
    ctx->r2 = S32(0X4 << 16);
    // 0x0021D3CC: and         $v0, $v1, $v0
    ctx->r2 = ctx->r3 & ctx->r2;
    // 0x0021D3D0: beq         $v0, $zero, L_0021D794
    if (ctx->r2 == 0) {
        // 0x0021D3D4: addu        $s2, $a1, $zero
        ctx->r18 = ADD32(ctx->r5, 0);
            goto L_0021D794;
    }
    // 0x0021D3D4: addu        $s2, $a1, $zero
    ctx->r18 = ADD32(ctx->r5, 0);
    // 0x0021D3D8: lw          $v0, 0x234($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X234);
    // 0x0021D3DC: beq         $v0, $zero, L_0021D794
    if (ctx->r2 == 0) {
        // 0x0021D3E0: andi        $v0, $v1, 0x2000
        ctx->r2 = ctx->r3 & 0X2000;
            goto L_0021D794;
    }
    // 0x0021D3E0: andi        $v0, $v1, 0x2000
    ctx->r2 = ctx->r3 & 0X2000;
    // 0x0021D3E4: bne         $v0, $zero, L_0021D3FC
    if (ctx->r2 != 0) {
        // 0x0021D3E8: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_0021D3FC;
    }
    // 0x0021D3E8: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0021D3EC: addiu       $v0, $zero, -0x201
    ctx->r2 = ADD32(0, -0X201);
    // 0x0021D3F0: and         $v0, $v1, $v0
    ctx->r2 = ctx->r3 & ctx->r2;
    // 0x0021D3F4: j           L_0021D794
    // 0x0021D3F8: sw          $v0, 0xD4($s0)
    MEM_W(0XD4, ctx->r16) = ctx->r2;
        goto L_0021D794;
    // 0x0021D3F8: sw          $v0, 0xD4($s0)
    MEM_W(0XD4, ctx->r16) = ctx->r2;
L_0021D3FC:
    // 0x0021D3FC: lui         $v0, 0x800A
    ctx->r2 = S32(0X800A << 16);
    // 0x0021D400: addiu       $v0, $v0, 0x5AC4
    ctx->r2 = ADD32(ctx->r2, 0X5AC4);
    // 0x0021D404: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x0021D408: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0021D40C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x0021D410: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x0021D414: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x0021D418: lw          $a1, 0xA4($s0)
    ctx->r5 = MEM_W(ctx->r16, 0XA4);
    // 0x0021D41C: lw          $a2, 0xB0($s0)
    ctx->r6 = MEM_W(ctx->r16, 0XB0);
    // 0x0021D420: jal         0x0020367C
    // 0x0021D424: addu        $a3, $a0, $zero
    ctx->r7 = ADD32(ctx->r4, 0);
    func_0020367C(rdram, ctx);
        goto after_0;
    // 0x0021D424: addu        $a3, $a0, $zero
    ctx->r7 = ADD32(ctx->r4, 0);
    after_0:
    // 0x0021D428: addu        $s4, $v0, $zero
    ctx->r20 = ADD32(ctx->r2, 0);
    // 0x0021D42C: beq         $s4, $zero, L_0021D794
    if (ctx->r20 == 0) {
        // 0x0021D430: nop
    
            goto L_0021D794;
    }
    // 0x0021D430: nop

    // 0x0021D434: lw          $a0, 0x0($s4)
    ctx->r4 = MEM_W(ctx->r20, 0X0);
    // 0x0021D438: jal         0x002017D4
    // 0x0021D43C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_002017D4(rdram, ctx);
        goto after_1;
    // 0x0021D43C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_1:
    // 0x0021D440: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x0021D444: lw          $v1, -0x535C($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X535C);
    // 0x0021D448: beq         $v1, $zero, L_0021D470
    if (ctx->r3 == 0) {
        // 0x0021D44C: addu        $s6, $v0, $zero
        ctx->r22 = ADD32(ctx->r2, 0);
            goto L_0021D470;
    }
    // 0x0021D44C: addu        $s6, $v0, $zero
    ctx->r22 = ADD32(ctx->r2, 0);
    // 0x0021D450: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0021D454: lw          $v0, 0x244($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X244);
    // 0x0021D458: jalr        $v0
    // 0x0021D45C: addiu       $a1, $s0, 0x140
    ctx->r5 = ADD32(ctx->r16, 0X140);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_2;
    // 0x0021D45C: addiu       $a1, $s0, 0x140
    ctx->r5 = ADD32(ctx->r16, 0X140);
    after_2:
    // 0x0021D460: addiu       $a0, $s0, 0x58
    ctx->r4 = ADD32(ctx->r16, 0X58);
    // 0x0021D464: addu        $a1, $s6, $zero
    ctx->r5 = ADD32(ctx->r22, 0);
    // 0x0021D468: jal         0x0020C0D0
    // 0x0021D46C: addiu       $a2, $s0, 0xBC
    ctx->r6 = ADD32(ctx->r16, 0XBC);
    func_0020C0D0(rdram, ctx);
        goto after_3;
    // 0x0021D46C: addiu       $a2, $s0, 0xBC
    ctx->r6 = ADD32(ctx->r16, 0XBC);
    after_3:
L_0021D470:
    // 0x0021D470: lw          $v0, 0xD4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XD4);
    // 0x0021D474: lui         $v1, 0x30
    ctx->r3 = S32(0X30 << 16);
    // 0x0021D478: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x0021D47C: bne         $v0, $zero, L_0021D65C
    if (ctx->r2 != 0) {
        // 0x0021D480: addiu       $s5, $zero, 0x1
        ctx->r21 = ADD32(0, 0X1);
            goto L_0021D65C;
    }
    // 0x0021D480: addiu       $s5, $zero, 0x1
    ctx->r21 = ADD32(0, 0X1);
    // 0x0021D484: addu        $s5, $zero, $zero
    ctx->r21 = ADD32(0, 0);
    // 0x0021D488: lw          $v1, 0x10($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X10);
    // 0x0021D48C: beq         $v1, $zero, L_0021D4A8
    if (ctx->r3 == 0) {
        // 0x0021D490: addu        $s3, $s5, $zero
        ctx->r19 = ADD32(ctx->r21, 0);
            goto L_0021D4A8;
    }
    // 0x0021D490: addu        $s3, $s5, $zero
    ctx->r19 = ADD32(ctx->r21, 0);
    // 0x0021D494: lw          $v0, 0x64($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X64);
    // 0x0021D498: lw          $v1, 0x1C($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X1C);
    // 0x0021D49C: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x0021D4A0: beq         $v0, $zero, L_0021D660
    if (ctx->r2 == 0) {
        // 0x0021D4A4: nop
    
            goto L_0021D660;
    }
    // 0x0021D4A4: nop

L_0021D4A8:
    // 0x0021D4A8: lwc1        $f1, 0x344($s2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r18, 0X344);
    // 0x0021D4AC: lwc1        $f0, 0xBC($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0XBC);
    // 0x0021D4B0: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x0021D4B4: nop

    // 0x0021D4B8: bc1f        L_0021D558
    if (!c1cs) {
        // 0x0021D4BC: nop
    
            goto L_0021D558;
    }
    // 0x0021D4BC: nop

    // 0x0021D4C0: lwc1        $f1, 0x338($s2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r18, 0X338);
    // 0x0021D4C4: lwc1        $f0, 0xC8($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0XC8);
    // 0x0021D4C8: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x0021D4CC: nop

    // 0x0021D4D0: bc1f        L_0021D558
    if (!c1cs) {
        // 0x0021D4D4: nop
    
            goto L_0021D558;
    }
    // 0x0021D4D4: nop

    // 0x0021D4D8: lwc1        $f1, 0x34C($s2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r18, 0X34C);
    // 0x0021D4DC: lwc1        $f0, 0xC4($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0XC4);
    // 0x0021D4E0: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x0021D4E4: nop

    // 0x0021D4E8: bc1f        L_0021D558
    if (!c1cs) {
        // 0x0021D4EC: nop
    
            goto L_0021D558;
    }
    // 0x0021D4EC: nop

    // 0x0021D4F0: lwc1        $f1, 0x340($s2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r18, 0X340);
    // 0x0021D4F4: lwc1        $f0, 0xD0($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0XD0);
    // 0x0021D4F8: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x0021D4FC: nop

    // 0x0021D500: bc1f        L_0021D558
    if (!c1cs) {
        // 0x0021D504: nop
    
            goto L_0021D558;
    }
    // 0x0021D504: nop

    // 0x0021D508: lwc1        $f1, 0x348($s2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r18, 0X348);
    // 0x0021D50C: lwc1        $f0, 0xC0($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0XC0);
    // 0x0021D510: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x0021D514: nop

    // 0x0021D518: bc1f        L_0021D558
    if (!c1cs) {
        // 0x0021D51C: nop
    
            goto L_0021D558;
    }
    // 0x0021D51C: nop

    // 0x0021D520: lwc1        $f1, 0x33C($s2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r18, 0X33C);
    // 0x0021D524: lwc1        $f0, 0xCC($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0XCC);
    // 0x0021D528: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x0021D52C: nop

    // 0x0021D530: bc1f        L_0021D558
    if (!c1cs) {
        // 0x0021D534: addiu       $a0, $s2, 0x2D8
        ctx->r4 = ADD32(ctx->r18, 0X2D8);
            goto L_0021D558;
    }
    // 0x0021D534: addiu       $a0, $s2, 0x2D8
    ctx->r4 = ADD32(ctx->r18, 0X2D8);
    // 0x0021D538: jal         0x0026F60C
    // 0x0021D53C: addiu       $a1, $s0, 0xBC
    ctx->r5 = ADD32(ctx->r16, 0XBC);
    func_0026F60C(rdram, ctx);
        goto after_4;
    // 0x0021D53C: addiu       $a1, $s0, 0xBC
    ctx->r5 = ADD32(ctx->r16, 0XBC);
    after_4:
    // 0x0021D540: beq         $v0, $zero, L_0021D558
    if (ctx->r2 == 0) {
        // 0x0021D544: nop
    
            goto L_0021D558;
    }
    // 0x0021D544: nop

    // 0x0021D548: lw          $v0, 0x10($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X10);
    // 0x0021D54C: beq         $v0, $zero, L_0021D558
    if (ctx->r2 == 0) {
        // 0x0021D550: addiu       $s5, $zero, 0x1
        ctx->r21 = ADD32(0, 0X1);
            goto L_0021D558;
    }
    // 0x0021D550: addiu       $s5, $zero, 0x1
    ctx->r21 = ADD32(0, 0X1);
    // 0x0021D554: addu        $s3, $s5, $zero
    ctx->r19 = ADD32(ctx->r21, 0);
L_0021D558:
    // 0x0021D558: bne         $s3, $zero, L_0021D660
    if (ctx->r19 != 0) {
        // 0x0021D55C: nop
    
            goto L_0021D660;
    }
    // 0x0021D55C: nop

    // 0x0021D560: lw          $v0, 0x10($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X10);
    // 0x0021D564: beq         $v0, $zero, L_0021D660
    if (ctx->r2 == 0) {
        // 0x0021D568: lui         $v1, 0x1000
        ctx->r3 = S32(0X1000 << 16);
            goto L_0021D660;
    }
    // 0x0021D568: lui         $v1, 0x1000
    ctx->r3 = S32(0X1000 << 16);
    // 0x0021D56C: lw          $v0, 0xD4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XD4);
    // 0x0021D570: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x0021D574: beq         $v0, $zero, L_0021D660
    if (ctx->r2 == 0) {
        // 0x0021D578: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_0021D660;
    }
    // 0x0021D578: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0021D57C: jal         0x0026872C
    // 0x0021D580: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_0026872C(rdram, ctx);
        goto after_5;
    // 0x0021D580: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_5:
    // 0x0021D584: lwc1        $f3, 0xBC($s0)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r16, 0XBC);
    // 0x0021D588: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0021D58C: lwc1        $f2, 0x5C08($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X5C08);
    // 0x0021D590: sub.s       $f3, $f3, $f2
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f3.fl = ctx->f3.fl - ctx->f2.fl;
    // 0x0021D594: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0021D598: lwc1        $f4, 0x5C0C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X5C0C);
    // 0x0021D59C: sub.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f0.fl - ctx->f4.fl;
    // 0x0021D5A0: swc1        $f3, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f_odd[(3 - 1) * 2];
    // 0x0021D5A4: swc1        $f6, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f6.u32l;
    // 0x0021D5A8: lwc1        $f1, 0xC4($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0XC4);
    // 0x0021D5AC: sub.s       $f5, $f1, $f2
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f5.fl = ctx->f1.fl - ctx->f2.fl;
    // 0x0021D5B0: swc1        $f5, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f_odd[(5 - 1) * 2];
    // 0x0021D5B4: lwc1        $f1, 0xC8($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0XC8);
    // 0x0021D5B8: add.s       $f1, $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f2.fl;
    // 0x0021D5BC: add.s       $f4, $f0, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f4.fl = ctx->f0.fl + ctx->f4.fl;
    // 0x0021D5C0: swc1        $f1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    // 0x0021D5C4: lwc1        $f0, 0xD0($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0XD0);
    // 0x0021D5C8: add.s       $f2, $f0, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = ctx->f0.fl + ctx->f2.fl;
    // 0x0021D5CC: swc1        $f4, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f4.u32l;
    // 0x0021D5D0: swc1        $f2, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f2.u32l;
    // 0x0021D5D4: lwc1        $f0, 0x344($s2)
    ctx->f0.u32l = MEM_W(ctx->r18, 0X344);
    // 0x0021D5D8: c.lt.s      $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f3.fl < ctx->f0.fl;
    // 0x0021D5DC: nop

    // 0x0021D5E0: bc1f        L_0021D660
    if (!c1cs) {
        // 0x0021D5E4: nop
    
            goto L_0021D660;
    }
    // 0x0021D5E4: nop

    // 0x0021D5E8: lwc1        $f0, 0x338($s2)
    ctx->f0.u32l = MEM_W(ctx->r18, 0X338);
    // 0x0021D5EC: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x0021D5F0: nop

    // 0x0021D5F4: bc1f        L_0021D660
    if (!c1cs) {
        // 0x0021D5F8: nop
    
            goto L_0021D660;
    }
    // 0x0021D5F8: nop

    // 0x0021D5FC: lwc1        $f0, 0x34C($s2)
    ctx->f0.u32l = MEM_W(ctx->r18, 0X34C);
    // 0x0021D600: c.lt.s      $f5, $f0
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f5.fl < ctx->f0.fl;
    // 0x0021D604: nop

    // 0x0021D608: bc1f        L_0021D660
    if (!c1cs) {
        // 0x0021D60C: nop
    
            goto L_0021D660;
    }
    // 0x0021D60C: nop

    // 0x0021D610: lwc1        $f0, 0x340($s2)
    ctx->f0.u32l = MEM_W(ctx->r18, 0X340);
    // 0x0021D614: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x0021D618: nop

    // 0x0021D61C: bc1f        L_0021D660
    if (!c1cs) {
        // 0x0021D620: nop
    
            goto L_0021D660;
    }
    // 0x0021D620: nop

    // 0x0021D624: lwc1        $f0, 0x348($s2)
    ctx->f0.u32l = MEM_W(ctx->r18, 0X348);
    // 0x0021D628: c.lt.s      $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.fl < ctx->f0.fl;
    // 0x0021D62C: nop

    // 0x0021D630: bc1f        L_0021D660
    if (!c1cs) {
        // 0x0021D634: nop
    
            goto L_0021D660;
    }
    // 0x0021D634: nop

    // 0x0021D638: lwc1        $f0, 0x33C($s2)
    ctx->f0.u32l = MEM_W(ctx->r18, 0X33C);
    // 0x0021D63C: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x0021D640: nop

    // 0x0021D644: bc1f        L_0021D660
    if (!c1cs) {
        // 0x0021D648: addiu       $a0, $s2, 0x2D8
        ctx->r4 = ADD32(ctx->r18, 0X2D8);
            goto L_0021D660;
    }
    // 0x0021D648: addiu       $a0, $s2, 0x2D8
    ctx->r4 = ADD32(ctx->r18, 0X2D8);
    // 0x0021D64C: jal         0x0026F60C
    // 0x0021D650: addiu       $a1, $sp, 0x30
    ctx->r5 = ADD32(ctx->r29, 0X30);
    func_0026F60C(rdram, ctx);
        goto after_6;
    // 0x0021D650: addiu       $a1, $sp, 0x30
    ctx->r5 = ADD32(ctx->r29, 0X30);
    after_6:
    // 0x0021D654: beq         $v0, $zero, L_0021D660
    if (ctx->r2 == 0) {
        // 0x0021D658: nop
    
            goto L_0021D660;
    }
    // 0x0021D658: nop

L_0021D65C:
    // 0x0021D65C: addiu       $s3, $zero, 0x1
    ctx->r19 = ADD32(0, 0X1);
L_0021D660:
    // 0x0021D660: bne         $s5, $zero, L_0021D670
    if (ctx->r21 != 0) {
        // 0x0021D664: nop
    
            goto L_0021D670;
    }
    // 0x0021D664: nop

    // 0x0021D668: beq         $s3, $zero, L_0021D78C
    if (ctx->r19 == 0) {
        // 0x0021D66C: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_0021D78C;
    }
    // 0x0021D66C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
L_0021D670:
    // 0x0021D670: jal         0x0021F358
    // 0x0021D674: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_0021F358(rdram, ctx);
        goto after_7;
    // 0x0021D674: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_7:
    // 0x0021D678: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x0021D67C: beq         $s1, $zero, L_0021D78C
    if (ctx->r17 == 0) {
        // 0x0021D680: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_0021D78C;
    }
    // 0x0021D680: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0021D684: lw          $v0, 0xD4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XD4);
    // 0x0021D688: andi        $v0, $v0, 0x200
    ctx->r2 = ctx->r2 & 0X200;
    // 0x0021D68C: bne         $v0, $zero, L_0021D738
    if (ctx->r2 != 0) {
        // 0x0021D690: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_0021D738;
    }
    // 0x0021D690: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0021D694: lw          $a1, 0x0($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X0);
    // 0x0021D698: jal         0x0021CDAC
    // 0x0021D69C: addu        $a2, $s6, $zero
    ctx->r6 = ADD32(ctx->r22, 0);
    func_0021CDAC(rdram, ctx);
        goto after_8;
    // 0x0021D69C: addu        $a2, $s6, $zero
    ctx->r6 = ADD32(ctx->r22, 0);
    after_8:
    // 0x0021D6A0: beq         $v0, $zero, L_0021D780
    if (ctx->r2 == 0) {
        // 0x0021D6A4: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_0021D780;
    }
    // 0x0021D6A4: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0021D6A8: lw          $v0, 0xD4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XD4);
    // 0x0021D6AC: andi        $v0, $v0, 0x8
    ctx->r2 = ctx->r2 & 0X8;
    // 0x0021D6B0: bne         $v0, $zero, L_0021D728
    if (ctx->r2 != 0) {
        // 0x0021D6B4: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_0021D728;
    }
    // 0x0021D6B4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0021D6B8: lw          $t0, 0x4($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X4);
    // 0x0021D6BC: lw          $t1, 0x8($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X8);
    // 0x0021D6C0: lw          $t2, 0xC($s0)
    ctx->r10 = MEM_W(ctx->r16, 0XC);
    // 0x0021D6C4: sw          $t0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r8;
    // 0x0021D6C8: sw          $t1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r9;
    // 0x0021D6CC: sw          $t2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r10;
    // 0x0021D6D0: lwc1        $f0, 0x4C($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x0021D6D4: lwc1        $f1, 0x54($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X54);
    // 0x0021D6D8: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x0021D6DC: jal         0x002671B4
    // 0x0021D6E0: swc1        $f0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f0.u32l;
    func_002671B4(rdram, ctx);
        goto after_9;
    // 0x0021D6E0: swc1        $f0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f0.u32l;
    after_9:
    // 0x0021D6E4: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x0021D6E8: addiu       $a0, $a0, 0x7078
    ctx->r4 = ADD32(ctx->r4, 0X7078);
    // 0x0021D6EC: addiu       $a1, $sp, 0x48
    ctx->r5 = ADD32(ctx->r29, 0X48);
    // 0x0021D6F0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0021D6F4: lwc1        $f1, 0x5C10($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X5C10);
    // 0x0021D6F8: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0021D6FC: lw          $v0, 0x6D1C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X6D1C);
    // 0x0021D700: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0021D704: sll         $a2, $v0, 1
    ctx->r6 = S32(ctx->r2 << 1);
    // 0x0021D708: addu        $a2, $a2, $v0
    ctx->r6 = ADD32(ctx->r6, ctx->r2);
    // 0x0021D70C: lwc1        $f1, 0x4C($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X4C);
    // 0x0021D710: sll         $a2, $a2, 3
    ctx->r6 = S32(ctx->r6 << 3);
    // 0x0021D714: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x0021D718: addiu       $a2, $a2, 0x110
    ctx->r6 = ADD32(ctx->r6, 0X110);
    // 0x0021D71C: addu        $a2, $s0, $a2
    ctx->r6 = ADD32(ctx->r16, ctx->r6);
    // 0x0021D720: jal         0x002254C0
    // 0x0021D724: swc1        $f1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    func_002254C0(rdram, ctx);
        goto after_10;
    // 0x0021D724: swc1        $f1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    after_10:
L_0021D728:
    // 0x0021D728: lw          $v0, 0xD4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XD4);
    // 0x0021D72C: ori         $v0, $v0, 0x200
    ctx->r2 = ctx->r2 | 0X200;
    // 0x0021D730: sw          $v0, 0xD4($s0)
    MEM_W(0XD4, ctx->r16) = ctx->r2;
    // 0x0021D734: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_0021D738:
    // 0x0021D738: addiu       $a1, $a0, 0x140
    ctx->r5 = ADD32(ctx->r4, 0X140);
    // 0x0021D73C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x0021D740: addiu       $v0, $sp, 0x20
    ctx->r2 = ADD32(ctx->r29, 0X20);
    // 0x0021D744: sw          $s5, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r21;
    // 0x0021D748: sw          $s3, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r19;
    // 0x0021D74C: sw          $s2, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r18;
    // 0x0021D750: sw          $s1, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r17;
    // 0x0021D754: sw          $v0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r2;
    // 0x0021D758: sw          $zero, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = 0;
    // 0x0021D75C: sw          $zero, 0x70($sp)
    MEM_W(0X70, ctx->r29) = 0;
    // 0x0021D760: sw          $zero, 0x74($sp)
    MEM_W(0X74, ctx->r29) = 0;
    // 0x0021D764: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x0021D768: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x0021D76C: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    // 0x0021D770: lw          $v0, 0x234($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X234);
    // 0x0021D774: jalr        $v0
    // 0x0021D778: addiu       $a2, $sp, 0x58
    ctx->r6 = ADD32(ctx->r29, 0X58);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_11;
    // 0x0021D778: addiu       $a2, $sp, 0x58
    ctx->r6 = ADD32(ctx->r29, 0X58);
    after_11:
    // 0x0021D77C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
L_0021D780:
    // 0x0021D780: jal         0x002051F4
    // 0x0021D784: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_002051F4(rdram, ctx);
        goto after_12;
    // 0x0021D784: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_12:
    // 0x0021D788: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
L_0021D78C:
    // 0x0021D78C: jal         0x002051F4
    // 0x0021D790: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    func_002051F4(rdram, ctx);
        goto after_13;
    // 0x0021D790: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    after_13:
L_0021D794:
    // 0x0021D794: lw          $ra, 0x94($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X94);
    // 0x0021D798: lw          $s6, 0x90($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X90);
    // 0x0021D79C: lw          $s5, 0x8C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X8C);
    // 0x0021D7A0: lw          $s4, 0x88($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X88);
    // 0x0021D7A4: lw          $s3, 0x84($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X84);
    // 0x0021D7A8: lw          $s2, 0x80($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X80);
    // 0x0021D7AC: lw          $s1, 0x7C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X7C);
    // 0x0021D7B0: lw          $s0, 0x78($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X78);
    // 0x0021D7B4: jr          $ra
    // 0x0021D7B8: addiu       $sp, $sp, 0x98
    ctx->r29 = ADD32(ctx->r29, 0X98);
    return;
    // 0x0021D7B8: addiu       $sp, $sp, 0x98
    ctx->r29 = ADD32(ctx->r29, 0X98);
;}
RECOMP_FUNC void func_00237EE4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00237EE4: sll         $v1, $a2, 3
    ctx->r3 = S32(ctx->r6 << 3);
    // 0x00237EE8: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00237EEC: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x00237EF0: lw          $v0, -0x2F80($at)
    ctx->r2 = MEM_W(ctx->r1, -0X2F80);
    // 0x00237EF4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x00237EF8: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x00237EFC: beq         $v0, $zero, L_00237F3C
    if (ctx->r2 == 0) {
        // 0x00237F00: sw          $a3, 0x34($sp)
        MEM_W(0X34, ctx->r29) = ctx->r7;
            goto L_00237F3C;
    }
    // 0x00237F00: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    // 0x00237F04: lw          $t0, 0x40($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X40);
    // 0x00237F08: lw          $t1, 0x44($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X44);
    // 0x00237F0C: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x00237F10: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    // 0x00237F14: lw          $t0, 0x38($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X38);
    // 0x00237F18: lw          $t1, 0x3C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X3C);
    // 0x00237F1C: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x00237F20: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x00237F24: lw          $a3, 0x34($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X34);
    // 0x00237F28: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00237F2C: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x00237F30: lw          $v0, -0x2F80($at)
    ctx->r2 = MEM_W(ctx->r1, -0X2F80);
    turok2_patch_fix_jalr(rdram, ctx);
    // 0x00237F34: jalr        $v0
    // 0x00237F38: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
    turok2_patch_jalr_done(rdram, ctx);
        goto after_0;
    // 0x00237F38: nop

    after_0:
L_00237F3C:
    // 0x00237F3C: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x00237F40: jr          $ra
    // 0x00237F44: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x00237F44: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_00267F5C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00267F5C: jr          $ra
    // 0x00267F60: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x00267F60: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void func_0028EB54(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0028EB54: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x0028EB58: sw          $s6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r22;
    // 0x0028EB5C: addu        $s6, $a0, $zero
    ctx->r22 = ADD32(ctx->r4, 0);
    // 0x0028EB60: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0028EB64: lui         $s0, 0x8012
    ctx->r16 = S32(0X8012 << 16);
    // 0x0028EB68: addiu       $s0, $s0, 0x1378
    ctx->r16 = ADD32(ctx->r16, 0X1378);
    // 0x0028EB6C: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x0028EB70: sw          $s5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r21;
    // 0x0028EB74: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x0028EB78: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x0028EB7C: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x0028EB80: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x0028EB84: lw          $v0, 0x4($s6)
    ctx->r2 = MEM_W(ctx->r22, 0X4);
    // 0x0028EB88: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
    // 0x0028EB8C: beq         $s0, $zero, L_0028EBB0
    if (ctx->r16 == 0) {
        // 0x0028EB90: srl         $a0, $v0, 12
        ctx->r4 = S32(U32(ctx->r2) >> 12);
            goto L_0028EBB0;
    }
    // 0x0028EB90: srl         $a0, $v0, 12
    ctx->r4 = S32(U32(ctx->r2) >> 12);
L_0028EB94:
    // 0x0028EB94: lhu         $v0, 0x4($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X4);
    // 0x0028EB98: beq         $v0, $a0, L_0028EBB0
    if (ctx->r2 == ctx->r4) {
        // 0x0028EB9C: nop
    
            goto L_0028EBB0;
    }
    // 0x0028EB9C: nop

    // 0x0028EBA0: addu        $v1, $s0, $zero
    ctx->r3 = ADD32(ctx->r16, 0);
    // 0x0028EBA4: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
    // 0x0028EBA8: bne         $s0, $zero, L_0028EB94
    if (ctx->r16 != 0) {
        // 0x0028EBAC: nop
    
            goto L_0028EB94;
    }
    // 0x0028EBAC: nop

L_0028EBB0:
    // 0x0028EBB0: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x0028EBB4: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x0028EBB8: lhu         $v0, 0x6($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X6);
    // 0x0028EBBC: lw          $s1, 0x10($s0)
    ctx->r17 = MEM_W(ctx->r16, 0X10);
    // 0x0028EBC0: beq         $v0, $zero, L_0028EC1C
    if (ctx->r2 == 0) {
        // 0x0028EBC4: addu        $s2, $zero, $zero
        ctx->r18 = ADD32(0, 0);
            goto L_0028EC1C;
    }
    // 0x0028EBC4: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    // 0x0028EBC8: addiu       $s5, $zero, 0xFF
    ctx->r21 = ADD32(0, 0XFF);
    // 0x0028EBCC: lui         $s4, 0x8012
    ctx->r20 = S32(0X8012 << 16);
    // 0x0028EBD0: addiu       $s4, $s4, 0xFC0
    ctx->r20 = ADD32(ctx->r20, 0XFC0);
    // 0x0028EBD4: ori         $s3, $zero, 0xFFFF
    ctx->r19 = 0 | 0XFFFF;
L_0028EBD8:
    // 0x0028EBD8: lbu         $v0, 0x0($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X0);
    // 0x0028EBDC: beq         $v0, $s5, L_0028EC08
    if (ctx->r2 == ctx->r21) {
        // 0x0028EBE0: nop
    
            goto L_0028EC08;
    }
    // 0x0028EBE0: nop

    // 0x0028EBE4: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x0028EBE8: sll         $a0, $a0, 4
    ctx->r4 = S32(ctx->r4 << 4);
    // 0x0028EBEC: jal         0x0028DEFC
    // 0x0028EBF0: addu        $a0, $a0, $s4
    ctx->r4 = ADD32(ctx->r4, ctx->r20);
    func_0028DEFC(rdram, ctx);
        goto after_0;
    // 0x0028EBF0: addu        $a0, $a0, $s4
    ctx->r4 = ADD32(ctx->r4, ctx->r20);
    after_0:
    // 0x0028EBF4: lbu         $v0, 0x0($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X0);
    // 0x0028EBF8: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x0028EBFC: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x0028EC00: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x0028EC04: sh          $s3, 0xFC8($at)
    MEM_H(0XFC8, ctx->r1) = ctx->r19;
L_0028EC08:
    // 0x0028EC08: lhu         $v0, 0x6($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X6);
    // 0x0028EC0C: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x0028EC10: slt         $v0, $s2, $v0
    ctx->r2 = SIGNED(ctx->r18) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x0028EC14: bne         $v0, $zero, L_0028EBD8
    if (ctx->r2 != 0) {
        // 0x0028EC18: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_0028EBD8;
    }
    // 0x0028EC18: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_0028EC1C:
    // 0x0028EC1C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x0028EC20: lw          $a0, 0x8($s6)
    ctx->r4 = MEM_W(ctx->r22, 0X8);
    // 0x0028EC24: jal         0x0029B820
    // 0x0028EC28: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osSendMesg_recomp(rdram, ctx);
        goto after_1;
    // 0x0028EC28: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_1:
    // 0x0028EC2C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x0028EC30: lw          $s6, 0x28($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X28);
    // 0x0028EC34: lw          $s5, 0x24($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X24);
    // 0x0028EC38: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x0028EC3C: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x0028EC40: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x0028EC44: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x0028EC48: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0028EC4C: jr          $ra
    // 0x0028EC50: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x0028EC50: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_002859DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002859DC: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x002859E0: addu        $v1, $a0, $zero
    ctx->r3 = ADD32(ctx->r4, 0);
    // 0x002859E4: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
L_002859E8:
    // 0x002859E8: lui         $at, 0x800F
    ctx->r1 = S32(0X800F << 16);
    // 0x002859EC: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x002859F0: lbu         $v0, 0x677B($at)
    ctx->r2 = MEM_BU(ctx->r1, 0X677B);
    // 0x002859F4: srl         $v0, $v0, 3
    ctx->r2 = S32(U32(ctx->r2) >> 3);
    // 0x002859F8: xori        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 ^ 0X1;
    // 0x002859FC: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x00285A00: bnel        $v0, $zero, L_00285A08
    if (ctx->r2 != 0) {
        // 0x00285A04: addiu       $a0, $a0, 0x1
        ctx->r4 = ADD32(ctx->r4, 0X1);
            goto L_00285A08;
    }
    goto skip_0;
    // 0x00285A04: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    skip_0:
L_00285A08:
    // 0x00285A08: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x00285A0C: slti        $v0, $v1, 0x4
    ctx->r2 = SIGNED(ctx->r3) < 0X4 ? 1 : 0;
    // 0x00285A10: bne         $v0, $zero, L_002859E8
    if (ctx->r2 != 0) {
        // 0x00285A14: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_002859E8;
    }
    // 0x00285A14: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x00285A18: jr          $ra
    // 0x00285A1C: addu        $v0, $a0, $zero
    ctx->r2 = ADD32(ctx->r4, 0);
    return;
    // 0x00285A1C: addu        $v0, $a0, $zero
    ctx->r2 = ADD32(ctx->r4, 0);
;}
RECOMP_FUNC void func_002A1350(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002A1350: lui         $v0, 0xA460
    ctx->r2 = S32(0XA460 << 16);
    // 0x002A1354: ori         $v0, $v0, 0x10
    ctx->r2 = ctx->r2 | 0X10;
    // 0x002A1358: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x002A135C: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
    // 0x002A1360: beq         $v0, $zero, L_002A137C
    if (ctx->r2 == 0) {
        // 0x002A1364: lui         $v1, 0xA460
        ctx->r3 = S32(0XA460 << 16);
            goto L_002A137C;
    }
    // 0x002A1364: lui         $v1, 0xA460
    ctx->r3 = S32(0XA460 << 16);
    // 0x002A1368: ori         $v1, $v1, 0x10
    ctx->r3 = ctx->r3 | 0X10;
L_002A136C:
    // 0x002A136C: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x002A1370: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
    // 0x002A1374: bne         $v0, $zero, L_002A136C
    if (ctx->r2 != 0) {
        // 0x002A1378: nop
    
            goto L_002A136C;
    }
    // 0x002A1378: nop

L_002A137C:
    // 0x002A137C: jr          $ra
    // 0x002A1380: sw          $a1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r5;
    return;
    // 0x002A1380: sw          $a1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r5;
;}
RECOMP_FUNC void func_0041A028(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041A028: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0041A02C: lui         $v1, 0x2
    ctx->r3 = S32(0X2 << 16);
    // 0x0041A030: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x0041A034: lw          $v0, 0x20($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X20);
    // 0x0041A038: ori         $v1, $v1, 0x202
    ctx->r3 = ctx->r3 | 0X202;
    // 0x0041A03C: lw          $v0, 0xB0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0XB0);
    // 0x0041A040: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x0041A044: lw          $a0, 0x1F78($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1F78);
    // 0x0041A048: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x0041A04C: beq         $v0, $zero, L_0041A070
    if (ctx->r2 == 0) {
        // 0x0041A050: nop
    
            goto L_0041A070;
    }
    // 0x0041A050: nop

    // 0x0041A054: addiu       $a0, $a0, -0x1
    ctx->r4 = ADD32(ctx->r4, -0X1);
    // 0x0041A058: bgez        $a0, L_0041A068
    if (SIGNED(ctx->r4) >= 0) {
        // 0x0041A05C: addiu       $v0, $zero, 0xE
        ctx->r2 = ADD32(0, 0XE);
            goto L_0041A068;
    }
    // 0x0041A05C: addiu       $v0, $zero, 0xE
    ctx->r2 = ADD32(0, 0XE);
    // 0x0041A060: j           L_0041A070
    // 0x0041A064: addiu       $a0, $zero, 0x16
    ctx->r4 = ADD32(0, 0X16);
        goto L_0041A070;
    // 0x0041A064: addiu       $a0, $zero, 0x16
    ctx->r4 = ADD32(0, 0X16);
L_0041A068:
    // 0x0041A068: beql        $a0, $v0, L_0041A070
    if (ctx->r4 == ctx->r2) {
        // 0x0041A06C: addiu       $a0, $zero, 0xB
        ctx->r4 = ADD32(0, 0XB);
            goto L_0041A070;
    }
    goto skip_0;
    // 0x0041A06C: addiu       $a0, $zero, 0xB
    ctx->r4 = ADD32(0, 0XB);
    skip_0:
L_0041A070:
    // 0x0041A070: lw          $v0, 0x20($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X20);
    // 0x0041A074: lui         $v1, 0x4
    ctx->r3 = S32(0X4 << 16);
    // 0x0041A078: lw          $v0, 0xB0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0XB0);
    // 0x0041A07C: ori         $v1, $v1, 0xD101
    ctx->r3 = ctx->r3 | 0XD101;
    // 0x0041A080: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x0041A084: beq         $v0, $zero, L_0041A0AC
    if (ctx->r2 == 0) {
        // 0x0041A088: nop
    
            goto L_0041A0AC;
    }
    // 0x0041A088: nop

    // 0x0041A08C: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x0041A090: slti        $v0, $a0, 0x17
    ctx->r2 = SIGNED(ctx->r4) < 0X17 ? 1 : 0;
    // 0x0041A094: bne         $v0, $zero, L_0041A0A4
    if (ctx->r2 != 0) {
        // 0x0041A098: addiu       $v0, $zero, 0xC
        ctx->r2 = ADD32(0, 0XC);
            goto L_0041A0A4;
    }
    // 0x0041A098: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
    // 0x0041A09C: j           L_0041A0AC
    // 0x0041A0A0: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
        goto L_0041A0AC;
    // 0x0041A0A0: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
L_0041A0A4:
    // 0x0041A0A4: beql        $a0, $v0, L_0041A0AC
    if (ctx->r4 == ctx->r2) {
        // 0x0041A0A8: addiu       $a0, $zero, 0xF
        ctx->r4 = ADD32(0, 0XF);
            goto L_0041A0AC;
    }
    goto skip_1;
    // 0x0041A0A8: addiu       $a0, $zero, 0xF
    ctx->r4 = ADD32(0, 0XF);
    skip_1:
L_0041A0AC:
    // 0x0041A0AC: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0041A0B0: sw          $a0, 0x1F78($at)
    MEM_W(0X1F78, ctx->r1) = ctx->r4;
    // 0x0041A0B4: jal         0x002759C4
    // 0x0041A0B8: nop

    func_002759C4(rdram, ctx);
        goto after_0;
    // 0x0041A0B8: nop

    after_0:
    // 0x0041A0BC: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x0041A0C0: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x0041A0C4: jr          $ra
    // 0x0041A0C8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0041A0C8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00277024(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00277024: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00277028: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x0027702C: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x00277030: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x00277034: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00277038: lw          $v0, 0x8($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X8);
    // 0x0027703C: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
    // 0x00277040: beq         $v0, $v1, L_00277074
    if (ctx->r2 == ctx->r3) {
        // 0x00277044: nop
    
            goto L_00277074;
    }
    // 0x00277044: nop

    // 0x00277048: beq         $v0, $zero, L_00277074
    if (ctx->r2 == 0) {
        // 0x0027704C: nop
    
            goto L_00277074;
    }
    // 0x0027704C: nop

    // 0x00277050: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x00277054: jal         0x002718F4
    // 0x00277058: sw          $v1, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->r3;
    func_002718F4(rdram, ctx);
        goto after_0;
    // 0x00277058: sw          $v1, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->r3;
    after_0:
    // 0x0027705C: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x00277060: lh          $a1, 0x1E($s1)
    ctx->r5 = MEM_H(ctx->r17, 0X1E);
    // 0x00277064: jal         0x00293E60
    // 0x00277068: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00293E60(rdram, ctx);
        goto after_1;
    // 0x00277068: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x0027706C: jal         0x00293EC0
    // 0x00277070: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00293EC0(rdram, ctx);
        goto after_2;
    // 0x00277070: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
L_00277074:
    // 0x00277074: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x00277078: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x0027707C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00277080: jr          $ra
    // 0x00277084: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00277084: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_00410724(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00410724: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x00410728: sdc1        $f22, 0x38($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X38, ctx->r29);
    // 0x0041072C: mtc1        $a1, $f22
    ctx->f22.u32l = ctx->r5;
    // 0x00410730: sdc1        $f20, 0x28($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X28, ctx->r29);
    // 0x00410734: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x00410738: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x0041073C: addu        $s4, $a0, $zero
    ctx->r20 = ADD32(ctx->r4, 0);
    // 0x00410740: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x00410744: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    // 0x00410748: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x0041074C: addu        $s3, $s2, $zero
    ctx->r19 = ADD32(ctx->r18, 0);
    // 0x00410750: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00410754: addu        $s1, $s2, $zero
    ctx->r17 = ADD32(ctx->r18, 0);
    // 0x00410758: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0041075C: addu        $s0, $s2, $zero
    ctx->r16 = ADD32(ctx->r18, 0);
    // 0x00410760: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x00410764: sdc1        $f21, 0x30($sp)
    CHECK_FR(ctx, 21);
    SD(ctx->f21.u64, 0X30, ctx->r29);
    // 0x00410768: mov.s       $f21, $f20
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 20);
    ctx->f21.fl = ctx->f20.fl;
L_0041076C:
    // 0x0041076C: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x00410770: lw          $v0, 0x1BB0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1BB0);
    // 0x00410774: lw          $a0, 0x4($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X4);
    // 0x00410778: jal         0x002017D4
    // 0x0041077C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_002017D4(rdram, ctx);
        goto after_0;
    // 0x0041077C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_0:
    // 0x00410780: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x00410784: slt         $v0, $s0, $v0
    ctx->r2 = SIGNED(ctx->r16) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x00410788: beq         $v0, $zero, L_0041084C
    if (ctx->r2 == 0) {
        // 0x0041078C: nop
    
            goto L_0041084C;
    }
    // 0x0041078C: nop

    // 0x00410790: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x00410794: lw          $v0, 0x1BB0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1BB0);
    // 0x00410798: addu        $s1, $s0, $zero
    ctx->r17 = ADD32(ctx->r16, 0);
    // 0x0041079C: lw          $a0, 0x4($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X4);
    // 0x004107A0: jal         0x002017D4
    // 0x004107A4: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_002017D4(rdram, ctx);
        goto after_1;
    // 0x004107A4: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_1:
    // 0x004107A8: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x004107AC: jal         0x002017D4
    // 0x004107B0: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_002017D4(rdram, ctx);
        goto after_2;
    // 0x004107B0: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_2:
    // 0x004107B4: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x004107B8: jal         0x002017D4
    // 0x004107BC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_002017D4(rdram, ctx);
        goto after_3;
    // 0x004107BC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_3:
    // 0x004107C0: lw          $s2, 0x4($v0)
    ctx->r18 = MEM_W(ctx->r2, 0X4);
    // 0x004107C4: addiu       $s3, $v0, 0x8
    ctx->r19 = ADD32(ctx->r2, 0X8);
    // 0x004107C8: sll         $v0, $s2, 3
    ctx->r2 = S32(ctx->r18 << 3);
    // 0x004107CC: addu        $v0, $v0, $s2
    ctx->r2 = ADD32(ctx->r2, ctx->r18);
    // 0x004107D0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x004107D4: addu        $v0, $v0, $s3
    ctx->r2 = ADD32(ctx->r2, ctx->r19);
    // 0x004107D8: lwc1        $f0, -0x8($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, -0X8);
    // 0x004107DC: mov.s       $f20, $f21
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 21);
    ctx->f20.fl = ctx->f21.fl;
    // 0x004107E0: bne         $s1, $zero, L_004107F8
    if (ctx->r17 != 0) {
        // 0x004107E4: add.s       $f21, $f20, $f0
        CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f21.fl = ctx->f20.fl + ctx->f0.fl;
            goto L_004107F8;
    }
    // 0x004107E4: add.s       $f21, $f20, $f0
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f21.fl = ctx->f20.fl + ctx->f0.fl;
    // 0x004107E8: c.le.s      $f22, $f20
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f22.fl <= ctx->f20.fl;
    // 0x004107EC: nop

    // 0x004107F0: bc1t        L_0041084C
    if (c1cs) {
        // 0x004107F4: nop
    
            goto L_0041084C;
    }
    // 0x004107F4: nop

L_004107F8:
    // 0x004107F8: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x004107FC: lw          $v0, 0x1BB0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1BB0);
    // 0x00410800: lw          $a0, 0x4($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X4);
    // 0x00410804: jal         0x002017D4
    // 0x00410808: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_002017D4(rdram, ctx);
        goto after_4;
    // 0x00410808: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_4:
    // 0x0041080C: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x00410810: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x00410814: bne         $s1, $v0, L_0041082C
    if (ctx->r17 != ctx->r2) {
        // 0x00410818: nop
    
            goto L_0041082C;
    }
    // 0x00410818: nop

    // 0x0041081C: c.lt.s      $f21, $f22
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f21.fl < ctx->f22.fl;
    // 0x00410820: nop

    // 0x00410824: bc1t        L_0041084C
    if (c1cs) {
        // 0x00410828: nop
    
            goto L_0041084C;
    }
    // 0x00410828: nop

L_0041082C:
    // 0x0041082C: c.le.s      $f20, $f22
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f20.fl <= ctx->f22.fl;
    // 0x00410830: nop

    // 0x00410834: bc1f        L_0041076C
    if (!c1cs) {
        // 0x00410838: addiu       $s0, $s1, 0x1
        ctx->r16 = ADD32(ctx->r17, 0X1);
            goto L_0041076C;
    }
    // 0x00410838: addiu       $s0, $s1, 0x1
    ctx->r16 = ADD32(ctx->r17, 0X1);
    // 0x0041083C: c.le.s      $f22, $f21
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 21);
    c1cs = ctx->f22.fl <= ctx->f21.fl;
    // 0x00410840: nop

    // 0x00410844: bc1f        L_0041076C
    if (!c1cs) {
        // 0x00410848: nop
    
            goto L_0041076C;
    }
    // 0x00410848: nop

L_0041084C:
    // 0x0041084C: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x00410850: lw          $v0, 0x1BB0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1BB0);
    // 0x00410854: lw          $a0, 0x4($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X4);
    // 0x00410858: jal         0x002017D4
    // 0x0041085C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_002017D4(rdram, ctx);
        goto after_5;
    // 0x0041085C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_5:
    // 0x00410860: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x00410864: jal         0x002017D4
    // 0x00410868: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_002017D4(rdram, ctx);
        goto after_6;
    // 0x00410868: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_6:
    // 0x0041086C: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x00410870: jal         0x002017D4
    // 0x00410874: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_002017D4(rdram, ctx);
        goto after_7;
    // 0x00410874: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_7:
    // 0x00410878: lw          $v0, 0x4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4);
    // 0x0041087C: bnel        $v0, $zero, L_00410884
    if (ctx->r2 != 0) {
        // 0x00410880: mov.s       $f22, $f20
        CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 20);
    ctx->f22.fl = ctx->f20.fl;
            goto L_00410884;
    }
    goto skip_0;
    // 0x00410880: mov.s       $f22, $f20
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 20);
    ctx->f22.fl = ctx->f20.fl;
    skip_0:
L_00410884:
    // 0x00410884: sub.s       $f22, $f22, $f20
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f22.fl = ctx->f22.fl - ctx->f20.fl;
    // 0x00410888: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    // 0x0041088C: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    // 0x00410890: mfc1        $a3, $f22
    ctx->r7 = (int32_t)ctx->f22.u32l;
    // 0x00410894: jal         0x004101B8
    // 0x00410898: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    func_004101B8(rdram, ctx);
        goto after_8;
    // 0x00410898: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    after_8:
    // 0x0041089C: addu        $v0, $s4, $zero
    ctx->r2 = ADD32(ctx->r20, 0);
    // 0x004108A0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x004108A4: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x004108A8: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x004108AC: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x004108B0: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x004108B4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x004108B8: ldc1        $f22, 0x38($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X38);
    // 0x004108BC: ldc1        $f21, 0x30($sp)
    CHECK_FR(ctx, 21);
    ctx->f21.u64 = LD(ctx->r29, 0X30);
    // 0x004108C0: ldc1        $f20, 0x28($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X28);
    // 0x004108C4: jr          $ra
    // 0x004108C8: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x004108C8: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_0045FEE4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_0045FEE4:
    // 0x0045FEE4: lbu         $v0, 0x0($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X0);
    // 0x0045FEE8: bne         $v1, $v0, L_0045FF0C
    if (ctx->r3 != ctx->r2) {
        // 0x0045FEEC: addiu       $a2, $a2, -0x1
        ctx->r6 = ADD32(ctx->r6, -0X1);
            goto L_0045FF0C;
    }
    // 0x0045FEEC: addiu       $a2, $a2, -0x1
    ctx->r6 = ADD32(ctx->r6, -0X1);
    // 0x0045FEF0: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x0045FEF4: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x0045FEF8: beq         $a2, $zero, L_0045FF0C
    if (ctx->r6 == 0) {
        // 0x0045FEFC: nop
    
            goto L_0045FF0C;
    }
    // 0x0045FEFC: nop

    // 0x0045FF00: lbu         $v1, 0x0($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X0);
    // 0x0045FF04: bne         $v1, $zero, L_0045FEE4
    if (ctx->r3 != 0) {
        // 0x0045FF08: nop
    
            goto L_0045FEE4;
    }
    // 0x0045FF08: nop

L_0045FF0C:
    // 0x0045FF0C: lbu         $v1, 0x0($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X0);
    // 0x0045FF10: lbu         $v0, 0x0($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X0);
    // 0x0045FF14: jr          $ra
    // 0x0045FF18: subu        $v0, $v1, $v0
    ctx->r2 = SUB32(ctx->r3, ctx->r2);
    return;
    // 0x0045FF18: subu        $v0, $v1, $v0
    ctx->r2 = SUB32(ctx->r3, ctx->r2);
;}
RECOMP_FUNC void func_0025A0C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0025A0C8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0025A0CC: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x0025A0D0: lw          $v0, 0x14($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X14);
    // 0x0025A0D4: lhu         $a3, 0x98($v0)
    ctx->r7 = MEM_HU(ctx->r2, 0X98);
    // 0x0025A0D8: lui         $a2, 0x800B
    ctx->r6 = S32(0X800B << 16);
    // 0x0025A0DC: addiu       $a2, $a2, -0x5E0
    ctx->r6 = ADD32(ctx->r6, -0X5E0);
    // 0x0025A0E0: jal         0x00245A98
    // 0x0025A0E4: nop

    func_00245A98(rdram, ctx);
        goto after_0;
    // 0x0025A0E4: nop

    after_0:
    // 0x0025A0E8: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x0025A0EC: jr          $ra
    // 0x0025A0F0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0025A0F0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00217BC4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00217BC4: addu        $t0, $a0, $zero
    ctx->r8 = ADD32(ctx->r4, 0);
    // 0x00217BC8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00217BCC: sllv        $v0, $v0, $a1
    ctx->r2 = S32(ctx->r2 << (ctx->r5 & 31));
    // 0x00217BD0: addiu       $a1, $v0, -0x1
    ctx->r5 = ADD32(ctx->r2, -0X1);
    // 0x00217BD4: addu        $v1, $a1, $zero
    ctx->r3 = ADD32(ctx->r5, 0);
    // 0x00217BD8: andi        $v0, $t0, 0x1F
    ctx->r2 = ctx->r8 & 0X1F;
    // 0x00217BDC: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x00217BE0: bne         $v0, $zero, L_00217BF8
    if (ctx->r2 != 0) {
        // 0x00217BE4: and         $a2, $a2, $a1
        ctx->r6 = ctx->r6 & ctx->r5;
            goto L_00217BF8;
    }
    // 0x00217BE4: and         $a2, $a2, $a1
    ctx->r6 = ctx->r6 & ctx->r5;
    // 0x00217BE8: addu        $a3, $a2, $zero
    ctx->r7 = ADD32(ctx->r6, 0);
    // 0x00217BEC: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x00217BF0: j           L_00217C10
    // 0x00217BF4: addu        $a2, $a1, $zero
    ctx->r6 = ADD32(ctx->r5, 0);
        goto L_00217C10;
    // 0x00217BF4: addu        $a2, $a1, $zero
    ctx->r6 = ADD32(ctx->r5, 0);
L_00217BF8:
    // 0x00217BF8: sllv        $v1, $a1, $a0
    ctx->r3 = S32(ctx->r5 << (ctx->r4 & 31));
    // 0x00217BFC: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x00217C00: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
    // 0x00217C04: srlv        $a1, $a1, $v0
    ctx->r5 = S32(U32(ctx->r5) >> (ctx->r2 & 31));
    // 0x00217C08: sllv        $a3, $a2, $a0
    ctx->r7 = S32(ctx->r6 << (ctx->r4 & 31));
    // 0x00217C0C: srlv        $a2, $a2, $v0
    ctx->r6 = S32(U32(ctx->r6) >> (ctx->r2 & 31));
L_00217C10:
    // 0x00217C10: lui         $v0, 0xFFF
    ctx->r2 = S32(0XFFF << 16);
    // 0x00217C14: ori         $v0, $v0, 0xFFE0
    ctx->r2 = ctx->r2 | 0XFFE0;
    // 0x00217C18: lui         $a0, 0xF000
    ctx->r4 = S32(0XF000 << 16);
    // 0x00217C1C: and         $a0, $t0, $a0
    ctx->r4 = ctx->r8 & ctx->r4;
    // 0x00217C20: and         $v0, $t0, $v0
    ctx->r2 = ctx->r8 & ctx->r2;
    // 0x00217C24: srl         $v0, $v0, 3
    ctx->r2 = S32(U32(ctx->r2) >> 3);
    // 0x00217C28: or          $a0, $a0, $v0
    ctx->r4 = ctx->r4 | ctx->r2;
    // 0x00217C2C: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x00217C30: nor         $v1, $zero, $v1
    ctx->r3 = ~(0 | ctx->r3);
    // 0x00217C34: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x00217C38: or          $v0, $v0, $a3
    ctx->r2 = ctx->r2 | ctx->r7;
    // 0x00217C3C: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
    // 0x00217C40: lw          $v0, 0x4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X4);
    // 0x00217C44: nor         $v1, $zero, $a1
    ctx->r3 = ~(0 | ctx->r5);
    // 0x00217C48: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x00217C4C: or          $v0, $v0, $a2
    ctx->r2 = ctx->r2 | ctx->r6;
    // 0x00217C50: jr          $ra
    // 0x00217C54: sw          $v0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r2;
    return;
    // 0x00217C54: sw          $v0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r2;
;}
RECOMP_FUNC void func_0026E9EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0026E9EC: jr          $ra
    // 0x0026E9F0: sw          $a1, 0x38($a0)
    MEM_W(0X38, ctx->r4) = ctx->r5;
    return;
    // 0x0026E9F0: sw          $a1, 0x38($a0)
    MEM_W(0X38, ctx->r4) = ctx->r5;
;}
RECOMP_FUNC void func_00281FF8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00281FF8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00281FFC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00282000: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x00282004: addu        $v0, $a1, $zero
    ctx->r2 = ADD32(ctx->r5, 0);
    // 0x00282008: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0028200C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00282010: sll         $s1, $v0, 6
    ctx->r17 = S32(ctx->r2 << 6);
    // 0x00282014: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x00282018: addiu       $a2, $zero, 0x23
    ctx->r6 = ADD32(0, 0X23);
    // 0x0028201C: lui         $a3, 0x800B
    ctx->r7 = S32(0X800B << 16);
    // 0x00282020: addiu       $a3, $a3, -0x65F8
    ctx->r7 = ADD32(ctx->r7, -0X65F8);
    // 0x00282024: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x00282028: jal         0x00204EDC
    // 0x0028202C: sw          $v0, 0xF08($s0)
    MEM_W(0XF08, ctx->r16) = ctx->r2;
    func_00204EDC(rdram, ctx);
        goto after_0;
    // 0x0028202C: sw          $v0, 0xF08($s0)
    MEM_W(0XF08, ctx->r16) = ctx->r2;
    after_0:
    // 0x00282030: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x00282034: sw          $v0, 0xF00($s0)
    MEM_W(0XF00, ctx->r16) = ctx->r2;
    // 0x00282038: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
    // 0x0028203C: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    // 0x00282040: jal         0x00266C5C
    // 0x00282044: sw          $a0, 0xF04($s0)
    MEM_W(0XF04, ctx->r16) = ctx->r4;
    func_00266C5C(rdram, ctx);
        goto after_1;
    // 0x00282044: sw          $a0, 0xF04($s0)
    MEM_W(0XF04, ctx->r16) = ctx->r4;
    after_1:
    // 0x00282048: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x0028204C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00282050: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00282054: jr          $ra
    // 0x00282058: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00282058: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_00215884(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00215884: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x00215888: sw          $s0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r16;
    // 0x0021588C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x00215890: sw          $ra, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r31;
    // 0x00215894: lw          $v0, 0x14($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X14);
    // 0x00215898: lw          $v1, 0x0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X0);
    // 0x0021589C: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x002158A0: bne         $v1, $v0, L_002158C0
    if (ctx->r3 != ctx->r2) {
        // 0x002158A4: nop
    
            goto L_002158C0;
    }
    // 0x002158A4: nop

    // 0x002158A8: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x002158AC: addiu       $a0, $a0, -0xE0
    ctx->r4 = ADD32(ctx->r4, -0XE0);
    // 0x002158B0: jal         0x00211114
    // 0x002158B4: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    func_00211114(rdram, ctx);
        goto after_0;
    // 0x002158B4: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    after_0:
    // 0x002158B8: j           L_002158CC
    // 0x002158BC: nop

        goto L_002158CC;
    // 0x002158BC: nop

L_002158C0:
    // 0x002158C0: lw          $a1, 0x144($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X144);
    // 0x002158C4: jal         0x002105A4
    // 0x002158C8: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    func_002105A4(rdram, ctx);
        goto after_1;
    // 0x002158C8: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    after_1:
L_002158CC:
    // 0x002158CC: lw          $a1, 0x164($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X164);
    // 0x002158D0: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x002158D4: addu        $a2, $a1, $zero
    ctx->r6 = ADD32(ctx->r5, 0);
    // 0x002158D8: jal         0x0021034C
    // 0x002158DC: addu        $a3, $a1, $zero
    ctx->r7 = ADD32(ctx->r5, 0);
    func_0021034C(rdram, ctx);
        goto after_2;
    // 0x002158DC: addu        $a3, $a1, $zero
    ctx->r7 = ADD32(ctx->r5, 0);
    after_2:
    // 0x002158E0: lui         $a1, 0x469C
    ctx->r5 = S32(0X469C << 16);
    // 0x002158E4: ori         $a1, $a1, 0x4000
    ctx->r5 = ctx->r5 | 0X4000;
    // 0x002158E8: jal         0x0020F510
    // 0x002158EC: addiu       $a0, $s0, 0x4
    ctx->r4 = ADD32(ctx->r16, 0X4);
    func_0020F510(rdram, ctx);
        goto after_3;
    // 0x002158EC: addiu       $a0, $s0, 0x4
    ctx->r4 = ADD32(ctx->r16, 0X4);
    after_3:
    // 0x002158F0: lwc1        $f1, 0x8($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X8);
    // 0x002158F4: lwc1        $f0, 0x168($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X168);
    // 0x002158F8: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x002158FC: lw          $a1, 0x4($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X4);
    // 0x00215900: lw          $a3, 0xC($s0)
    ctx->r7 = MEM_W(ctx->r16, 0XC);
    // 0x00215904: mfc1        $a2, $f1
    ctx->r6 = (int32_t)ctx->f_odd[(1 - 1) * 2];
    // 0x00215908: jal         0x00210318
    // 0x0021590C: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    func_00210318(rdram, ctx);
        goto after_4;
    // 0x0021590C: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    after_4:
    // 0x00215910: jal         0x00210C3C
    // 0x00215914: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    func_00210C3C(rdram, ctx);
        goto after_5;
    // 0x00215914: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    after_5:
    // 0x00215918: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x0021591C: lw          $a1, 0x6D1C($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X6D1C);
    // 0x00215920: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x00215924: sll         $a1, $a1, 6
    ctx->r5 = S32(ctx->r5 << 6);
    // 0x00215928: addiu       $a1, $a1, 0x38
    ctx->r5 = ADD32(ctx->r5, 0X38);
    // 0x0021592C: jal         0x0020D274
    // 0x00215930: addu        $a1, $s0, $a1
    ctx->r5 = ADD32(ctx->r16, ctx->r5);
    func_0020D274(rdram, ctx);
        goto after_6;
    // 0x00215930: addu        $a1, $s0, $a1
    ctx->r5 = ADD32(ctx->r16, ctx->r5);
    after_6:
    // 0x00215934: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
    // 0x00215938: lw          $s0, 0x50($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X50);
    // 0x0021593C: jr          $ra
    // 0x00215940: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    return;
    // 0x00215940: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void func_004436F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_0040A7AC:
    // 0x004436F0: addiu       $sp, $sp, -0xE8
    ctx->r29 = ADD32(ctx->r29, -0XE8);
L_0040A8A0:
    // 0x004436F4: sw          $s2, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = ctx->r18;
L_0040A8A4:
    // 0x004436F8: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x004436FC: sw          $s3, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->r19;
    // 0x00443700: addu        $s3, $a1, $zero
    ctx->r19 = ADD32(ctx->r5, 0);
    // 0x00443704: sw          $s0, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->r16;
    // 0x00443708: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x0044370C: addiu       $a1, $s2, 0x140
    ctx->r5 = ADD32(ctx->r18, 0X140);
    // 0x00443710: addiu       $a2, $sp, 0x38
    ctx->r6 = ADD32(ctx->r29, 0X38);
    // 0x00443714: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x00443718: sw          $ra, 0xD8($sp)
    MEM_W(0XD8, ctx->r29) = ctx->r31;
    // 0x0044371C: sw          $s1, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->r17;
    // 0x00443720: sdc1        $f20, 0xE0($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0XE0, ctx->r29);
    // 0x00443724: sw          $zero, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = 0;
    // 0x00443728: jal         0x00246108
    // 0x0044372C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_00246108(rdram, ctx);
        goto after_0;
    // 0x0044372C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_0:
    // 0x00443730: lui         $s1, 0x8013
    ctx->r17 = S32(0X8013 << 16);
    // 0x00443734: addiu       $s1, $s1, -0x490
    ctx->r17 = ADD32(ctx->r17, -0X490);
    // 0x00443738: lw          $a0, 0x80($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X80);
    // 0x0044373C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00443740: lwc1        $f20, 0x850($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X850);
    // 0x00443744: beq         $a0, $zero, L_00443764
    if (ctx->r4 == 0) {
        // 0x00443748: lui         $v1, 0x30
        ctx->r3 = S32(0X30 << 16);
            goto L_00443764;
    }
    // 0x00443748: lui         $v1, 0x30
    ctx->r3 = S32(0X30 << 16);
    // 0x0044374C: lw          $v0, 0xD4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XD4);
    // 0x00443750: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x00443754: beql        $v0, $zero, L_00443768
    if (ctx->r2 == 0) {
        // 0x00443758: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_00443768;
    }
    goto skip_0;
    // 0x00443758: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    skip_0:
    // 0x0044375C: lwc1        $f20, 0xBC($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0XBC);
    // 0x00443760: sw          $a0, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->r4;
L_00443764:
    // 0x00443764: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
L_00443768:
    // 0x00443768: lw          $v0, 0xC($s3)
    ctx->r2 = MEM_W(ctx->r19, 0XC);
    // 0x0044376C: mov.s       $f2, $f20
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    ctx->f2.fl = ctx->f20.fl;
    // 0x00443770: andi        $v1, $v0, 0x2
    ctx->r3 = ctx->r2 & 0X2;
    // 0x00443774: beq         $v1, $zero, L_00443780
    if (ctx->r3 == 0) {
        // 0x00443778: andi        $v0, $v0, 0x20
        ctx->r2 = ctx->r2 & 0X20;
            goto L_00443780;
    }
    // 0x00443778: andi        $v0, $v0, 0x20
    ctx->r2 = ctx->r2 & 0X20;
    // 0x0044377C: sltu        $a0, $a0, $v0
    ctx->r4 = ctx->r4 < ctx->r2 ? 1 : 0;
L_00443780:
    // 0x00443780: lw          $v0, 0x674($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X674);
    // 0x00443784: beq         $v0, $zero, L_004437A4
    if (ctx->r2 == 0) {
        // 0x00443788: nop
    
            goto L_004437A4;
    }
    // 0x00443788: nop

    // 0x0044378C: lwc1        $f1, 0x678($s1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r17, 0X678);
    // 0x00443790: cvt.s.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.fl = CVT_S_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x00443794: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x00443798: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x0044379C: j           L_0040A7AC
    // 0x004437A0: div.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = DIV_S(ctx->f1.fl, ctx->f0.fl);
    func_0040A7AC(rdram, ctx);
    return;
    // 0x004437A0: div.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = DIV_S(ctx->f1.fl, ctx->f0.fl);
L_004437A4:
    // 0x004437A4: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x004437A8: lwc1        $f1, 0x854($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X854);
    // 0x004437AC: lw          $v0, 0xC0($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XC0);
    // 0x004437B0: beq         $v0, $zero, L_004438DC
    if (ctx->r2 == 0) {
        // 0x004437B4: nop
    
            goto L_004438DC;
    }
    // 0x004437B4: nop

    // 0x004437B8: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x004437BC: lwc1        $f0, 0x858($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X858);
    // 0x004437C0: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x004437C4: nop

    // 0x004437C8: bc1f        L_00443808
    if (!c1cs) {
        // 0x004437CC: addiu       $v1, $sp, 0x18
        ctx->r3 = ADD32(ctx->r29, 0X18);
            goto L_00443808;
    }
    // 0x004437CC: addiu       $v1, $sp, 0x18
    ctx->r3 = ADD32(ctx->r29, 0X18);
    // 0x004437D0: sll         $a0, $s0, 2
    ctx->r4 = S32(ctx->r16 << 2);
    // 0x004437D4: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x004437D8: sll         $a2, $s0, 2
    ctx->r6 = S32(ctx->r16 << 2);
    // 0x004437DC: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x004437E0: addu        $a0, $v1, $a0
    ctx->r4 = ADD32(ctx->r3, ctx->r4);
    // 0x004437E4: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x004437E8: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x004437EC: addu        $v1, $v1, $a2
    ctx->r3 = ADD32(ctx->r3, ctx->r6);
    // 0x004437F0: sh          $v0, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r2;
    // 0x004437F4: addiu       $v0, $zero, 0xD
    ctx->r2 = ADD32(0, 0XD);
    // 0x004437F8: sh          $a1, 0x2($a0)
    MEM_H(0X2, ctx->r4) = ctx->r5;
    // 0x004437FC: sh          $v0, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r2;
    // 0x00443800: j           L_0040A8A4
    // 0x00443804: sh          $a1, 0x2($v1)
    MEM_H(0X2, ctx->r3) = ctx->r5;
    func_0040A8A4(rdram, ctx);
    return;
    // 0x00443804: sh          $a1, 0x2($v1)
    MEM_H(0X2, ctx->r3) = ctx->r5;
L_00443808:
    // 0x00443808: beq         $a0, $zero, L_00443834
    if (ctx->r4 == 0) {
        // 0x0044380C: addiu       $a0, $zero, 0xF
        ctx->r4 = ADD32(0, 0XF);
            goto L_00443834;
    }
    // 0x0044380C: addiu       $a0, $zero, 0xF
    ctx->r4 = ADD32(0, 0XF);
    // 0x00443810: lw          $v0, 0x66C($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X66C);
    // 0x00443814: beq         $v0, $a0, L_00443834
    if (ctx->r2 == ctx->r4) {
        // 0x00443818: sll         $v0, $s0, 2
        ctx->r2 = S32(ctx->r16 << 2);
            goto L_00443834;
    }
    // 0x00443818: sll         $v0, $s0, 2
    ctx->r2 = S32(ctx->r16 << 2);
    // 0x0044381C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x00443820: addiu       $v1, $sp, 0x18
    ctx->r3 = ADD32(ctx->r29, 0X18);
    // 0x00443824: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x00443828: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x0044382C: sh          $a0, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r4;
    // 0x00443830: sh          $v0, 0x2($v1)
    MEM_H(0X2, ctx->r3) = ctx->r2;
L_00443834:
    // 0x00443834: sll         $v1, $s0, 2
    ctx->r3 = S32(ctx->r16 << 2);
    // 0x00443838: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x0044383C: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    // 0x00443840: addu        $v1, $a0, $v1
    ctx->r3 = ADD32(ctx->r4, ctx->r3);
    // 0x00443844: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x00443848: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x0044384C: sh          $v0, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r2;
    // 0x00443850: sll         $v0, $s0, 2
    ctx->r2 = S32(ctx->r16 << 2);
    // 0x00443854: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x00443858: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0044385C: lwc1        $f0, 0x85C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X85C);
    // 0x00443860: addiu       $v0, $zero, 0x12
    ctx->r2 = ADD32(0, 0X12);
    // 0x00443864: sh          $a1, 0x2($v1)
    MEM_H(0X2, ctx->r3) = ctx->r5;
    // 0x00443868: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x0044386C: nop

    // 0x00443870: bc1f        L_00443898
    if (!c1cs) {
        // 0x00443874: sh          $v0, 0x0($a0)
        MEM_H(0X0, ctx->r4) = ctx->r2;
            goto L_00443898;
    }
    // 0x00443874: sh          $v0, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r2;
    // 0x00443878: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0044387C: lwc1        $f0, 0x860($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X860);
    // 0x00443880: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x00443884: nop

    // 0x00443888: bc1t        L_0044389C
    if (c1cs) {
        // 0x0044388C: addiu       $v0, $zero, 0xA
        ctx->r2 = ADD32(0, 0XA);
            goto L_0044389C;
    }
    // 0x0044388C: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x00443890: j           L_0040A8A0
    // 0x00443894: sh          $a1, 0x2($a0)
    MEM_H(0X2, ctx->r4) = ctx->r5;
    func_0040A8A0(rdram, ctx);
    return;
    // 0x00443894: sh          $a1, 0x2($a0)
    MEM_H(0X2, ctx->r4) = ctx->r5;
L_00443898:
    // 0x00443898: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_0044389C:
    // 0x0044389C: sh          $v0, 0x2($a0)
    MEM_H(0X2, ctx->r4) = ctx->r2;
    // 0x004438A0: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x004438A4: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    // 0x004438A8: sll         $v0, $s0, 2
    ctx->r2 = S32(ctx->r16 << 2);
    // 0x004438AC: addu        $v1, $a0, $v0
    ctx->r3 = ADD32(ctx->r4, ctx->r2);
    // 0x004438B0: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x004438B4: jal         0x0026D518
    // 0x004438B8: sh          $v0, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r2;
    func_0026D518(rdram, ctx);
        goto after_1;
    // 0x004438B8: sh          $v0, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r2;
    after_1:
    // 0x004438BC: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x004438C0: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x004438C4: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x004438C8: sw          $v0, 0x66C($s1)
    MEM_W(0X66C, ctx->r17) = ctx->r2;
    // 0x004438CC: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    // 0x004438D0: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    // 0x004438D4: jal         0x00243414
    // 0x004438D8: sw          $zero, 0x67C($s1)
    MEM_W(0X67C, ctx->r17) = 0;
    func_00243414(rdram, ctx);
        goto after_2;
    // 0x004438D8: sw          $zero, 0x67C($s1)
    MEM_W(0X67C, ctx->r17) = 0;
    after_2:
L_004438DC:
    // 0x004438DC: lw          $ra, 0xD8($sp)
    ctx->r31 = MEM_W(ctx->r29, 0XD8);
    // 0x004438E0: lw          $s3, 0xD4($sp)
    ctx->r19 = MEM_W(ctx->r29, 0XD4);
    // 0x004438E4: lw          $s2, 0xD0($sp)
    ctx->r18 = MEM_W(ctx->r29, 0XD0);
    // 0x004438E8: lw          $s1, 0xCC($sp)
    ctx->r17 = MEM_W(ctx->r29, 0XCC);
    // 0x004438EC: lw          $s0, 0xC8($sp)
    ctx->r16 = MEM_W(ctx->r29, 0XC8);
    // 0x004438F0: ldc1        $f20, 0xE0($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0XE0);
    // 0x004438F4: jr          $ra
    // 0x004438F8: addiu       $sp, $sp, 0xE8
    ctx->r29 = ADD32(ctx->r29, 0XE8);
    return;
    // 0x004438F8: addiu       $sp, $sp, 0xE8
    ctx->r29 = ADD32(ctx->r29, 0XE8);
;}
RECOMP_FUNC void func_00418FD0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00418FD0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00418FD4: addiu       $v0, $zero, 0x63
    ctx->r2 = ADD32(0, 0X63);
    // 0x00418FD8: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x00418FDC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00418FE0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x00418FE4: lui         $s0, 0x8012
    ctx->r16 = S32(0X8012 << 16);
    // 0x00418FE8: addiu       $s0, $s0, -0x5528
    ctx->r16 = ADD32(ctx->r16, -0X5528);
    // 0x00418FEC: addu        $a0, $a1, $zero
    ctx->r4 = ADD32(ctx->r5, 0);
    // 0x00418FF0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x00418FF4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x00418FF8: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x00418FFC: lb          $v0, 0x2B($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X2B);
    // 0x00419000: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x00419004: jal         0x0041648C
    // 0x00419008: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    func_0041648C(rdram, ctx);
        goto after_0;
    // 0x00419008: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    after_0:
    // 0x0041900C: sb          $v0, 0x2B($s0)
    MEM_B(0X2B, ctx->r16) = ctx->r2;
    // 0x00419010: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x00419014: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x00419018: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x0041901C: jr          $ra
    // 0x00419020: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00419020: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_00211384(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00211384: lui         $v0, 0xE3F6
    ctx->r2 = S32(0XE3F6 << 16);
    // 0x00211388: ori         $v0, $v0, 0x35E3
    ctx->r2 = ctx->r2 | 0X35E3;
    // 0x0021138C: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x00211390: sw          $v0, -0x287C($at)
    MEM_W(-0X287C, ctx->r1) = ctx->r2;
    // 0x00211394: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x00211398: sw          $v0, -0x2878($at)
    MEM_W(-0X2878, ctx->r1) = ctx->r2;
    // 0x0021139C: jr          $ra
    // 0x002113A0: nop

    return;
    // 0x002113A0: nop

;}
RECOMP_FUNC void func_00449A74(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_00410B5C:
    // 0x00449A74: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x00449A78: lw          $v0, 0x1BB0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1BB0);
    // 0x00449A7C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00449A80: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x00449A84: mov.s       $f20, $f12
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 12);
    ctx->f20.fl = ctx->f12.fl;
    // 0x00449A88: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x00449A8C: lw          $a0, 0x4($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X4);
    // 0x00449A90: jal         0x002017D4
    // 0x00449A94: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_002017D4(rdram, ctx);
        goto after_0;
    // 0x00449A94: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x00449A98: lw          $a0, 0x4($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X4);
    // 0x00449A9C: bne         $a0, $zero, L_00449AB0
    if (ctx->r4 != 0) {
        // 0x00449AA0: addiu       $v1, $v0, 0x8
        ctx->r3 = ADD32(ctx->r2, 0X8);
            goto L_00449AB0;
    }
    // 0x00449AA0: addiu       $v1, $v0, 0x8
    ctx->r3 = ADD32(ctx->r2, 0X8);
    // 0x00449AA4: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x00449AA8: j           L_00410B5C
    // 0x00449AAC: nop

    func_00410B5C(rdram, ctx);
    return;
    // 0x00449AAC: nop

L_00449AB0:
    // 0x00449AB0: lwc1        $f1, 0x10($v1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r3, 0X10);
    // 0x00449AB4: c.le.s      $f20, $f1
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f20.fl <= ctx->f1.fl;
    // 0x00449AB8: nop

    // 0x00449ABC: bc1f        L_00449AD0
    if (!c1cs) {
        // 0x00449AC0: sll         $v0, $a0, 2
        ctx->r2 = S32(ctx->r4 << 2);
            goto L_00449AD0;
    }
    // 0x00449AC0: sll         $v0, $a0, 2
    ctx->r2 = S32(ctx->r4 << 2);
    // 0x00449AC4: lwc1        $f2, 0xC($v1)
    ctx->f2.u32l = MEM_W(ctx->r3, 0XC);
    // 0x00449AC8: j           L_00410B5C
    // 0x00449ACC: nop

    func_00410B5C(rdram, ctx);
    return;
    // 0x00449ACC: nop

L_00449AD0:
    // 0x00449AD0: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x00449AD4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x00449AD8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x00449ADC: addiu       $v0, $v0, -0x14
    ctx->r2 = ADD32(ctx->r2, -0X14);
    // 0x00449AE0: lwc1        $f0, 0x10($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X10);
    // 0x00449AE4: c.le.s      $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f0.fl <= ctx->f20.fl;
    // 0x00449AE8: nop

    // 0x00449AEC: bc1f        L_00449B00
    if (!c1cs) {
        // 0x00449AF0: nop
    
            goto L_00449B00;
    }
    // 0x00449AF0: nop

    // 0x00449AF4: lwc1        $f2, 0xC($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0XC);
    // 0x00449AF8: j           L_00410B5C
    // 0x00449AFC: nop

    func_00410B5C(rdram, ctx);
    return;
    // 0x00449AFC: nop

L_00449B00:
    // 0x00449B00: c.lt.s      $f1, $f20
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f1.fl < ctx->f20.fl;
    // 0x00449B04: nop

    // 0x00449B08: bc1f        L_00449B28
    if (!c1cs) {
        // 0x00449B0C: nop
    
            goto L_00449B28;
    }
    // 0x00449B0C: nop

    // 0x00449B10: addiu       $v1, $v1, 0x14
    ctx->r3 = ADD32(ctx->r3, 0X14);
L_00449B14:
    // 0x00449B14: lwc1        $f0, 0x10($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X10);
    // 0x00449B18: c.lt.s      $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f0.fl < ctx->f20.fl;
    // 0x00449B1C: nop

    // 0x00449B20: bc1tl       L_00449B14
    if (c1cs) {
        // 0x00449B24: addiu       $v1, $v1, 0x14
        ctx->r3 = ADD32(ctx->r3, 0X14);
            goto L_00449B14;
    }
    goto skip_0;
    // 0x00449B24: addiu       $v1, $v1, 0x14
    ctx->r3 = ADD32(ctx->r3, 0X14);
    skip_0:
L_00449B28:
    // 0x00449B28: lwc1        $f1, -0x4($v1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r3, -0X4);
    // 0x00449B2C: sub.s       $f3, $f20, $f1
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f3.fl = ctx->f20.fl - ctx->f1.fl;
    // 0x00449B30: lwc1        $f0, 0x10($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X10);
    // 0x00449B34: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x00449B38: div.s       $f3, $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f3.fl = DIV_S(ctx->f3.fl, ctx->f0.fl);
    // 0x00449B3C: lwc1        $f0, 0xC($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0XC);
    // 0x00449B40: mul.s       $f0, $f0, $f3
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f3.fl);
    // 0x00449B44: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00449B48: lwc1        $f1, 0x98C($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X98C);
    // 0x00449B4C: sub.s       $f1, $f1, $f3
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f1.fl = ctx->f1.fl - ctx->f3.fl;
    // 0x00449B50: lwc1        $f2, -0x8($v1)
    ctx->f2.u32l = MEM_W(ctx->r3, -0X8);
    // 0x00449B54: mul.s       $f2, $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f1.fl);
    // 0x00449B58: add.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f0.fl;
    // 0x00449B5C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00449B60: lwc1        $f1, 0x1BC8($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X1BC8);
    // 0x00449B64: add.s       $f0, $f1, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f1.fl + ctx->f1.fl;
    // 0x00449B68: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00449B6C: lwc1        $f3, 0x990($at)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r1, 0X990);
    // 0x00449B70: add.s       $f0, $f0, $f3
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f3.fl;
    // 0x00449B74: mul.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x00449B78: sub.s       $f2, $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f2.fl = ctx->f2.fl - ctx->f1.fl;
    // 0x00449B7C: c.lt.s      $f3, $f2
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f3.fl < ctx->f2.fl;
    // 0x00449B80: nop

    // 0x00449B84: bc1tl       L_00449B8C
    if (c1cs) {
        // 0x00449B88: mov.s       $f2, $f3
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 3);
    ctx->f2.fl = ctx->f3.fl;
            goto L_00449B8C;
    }
    goto skip_1;
    // 0x00449B88: mov.s       $f2, $f3
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 3);
    ctx->f2.fl = ctx->f3.fl;
    skip_1:
L_00449B8C:
    // 0x00449B8C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x00449B90: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x00449B94: nop

    // 0x00449B98: bc1tl       L_00449BA0
    if (c1cs) {
        // 0x00449B9C: mov.s       $f2, $f0
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
            goto L_00449BA0;
    }
    goto skip_2;
    // 0x00449B9C: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    skip_2:
L_00449BA0:
    // 0x00449BA0: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x00449BA4: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x00449BA8: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
    // 0x00449BAC: jr          $ra
    // 0x00449BB0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00449BB0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_00454FF0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00454FF0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00454FF4: addu        $a0, $a1, $zero
    ctx->r4 = ADD32(ctx->r5, 0);
    // 0x00454FF8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x00454FFC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x00455000: lw          $v0, 0x1C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X1C);
    // 0x00455004: lui         $s0, 0x8012
    ctx->r16 = S32(0X8012 << 16);
    // 0x00455008: addiu       $s0, $s0, -0x54E8
    ctx->r16 = ADD32(ctx->r16, -0X54E8);
    // 0x0045500C: beql        $v0, $zero, L_00455024
    if (ctx->r2 == 0) {
        // 0x00455010: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_00455024;
    }
    goto skip_0;
    // 0x00455010: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    skip_0:
    // 0x00455014: lw          $v0, 0x518($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X518);
    // 0x00455018: bnel        $v0, $zero, L_00455020
    if (ctx->r2 != 0) {
        // 0x0045501C: addu        $s0, $v0, $zero
        ctx->r16 = ADD32(ctx->r2, 0);
            goto L_00455020;
    }
    goto skip_1;
    // 0x0045501C: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    skip_1:
L_00455020:
    // 0x00455020: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_00455024:
    // 0x00455024: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    // 0x00455028: lbu         $a1, 0x2D($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X2D);
    // 0x0045502C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x00455030: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x00455034: jal         0x0041648C
    // 0x00455038: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    func_0041648C(rdram, ctx);
        goto after_0;
    // 0x00455038: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    after_0:
    // 0x0045503C: sb          $v0, 0x2D($s0)
    MEM_B(0X2D, ctx->r16) = ctx->r2;
    // 0x00455040: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x00455044: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x00455048: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x0045504C: jr          $ra
    // 0x00455050: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00455050: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_00202338(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00202338: jr          $ra
    // 0x0020233C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x0020233C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void func_00447648(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00447648: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0044764C: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x00447650: lw          $v0, 0x50C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X50C);
    // 0x00447654: bne         $v0, $zero, L_00447720
    if (ctx->r2 != 0) {
        // 0x00447658: nop
    
            goto L_00447720;
    }
    // 0x00447658: nop

    // 0x0044765C: lw          $v0, 0x4F8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X4F8);
    // 0x00447660: addiu       $v1, $v0, 0xC
    ctx->r3 = ADD32(ctx->r2, 0XC);
    // 0x00447664: sw          $v1, 0x4F8($a0)
    MEM_W(0X4F8, ctx->r4) = ctx->r3;
    // 0x00447668: lw          $a2, 0xC($v0)
    ctx->r6 = MEM_W(ctx->r2, 0XC);
    // 0x0044766C: lw          $v0, 0x4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X4);
    // 0x00447670: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
    // 0x00447674: sw          $zero, 0x518($a0)
    MEM_W(0X518, ctx->r4) = 0;
    // 0x00447678: sw          $zero, 0x530($a0)
    MEM_W(0X530, ctx->r4) = 0;
    // 0x0044767C: blez        $v0, L_004476A4
    if (SIGNED(ctx->r2) <= 0) {
        // 0x00447680: sw          $zero, 0x548($a0)
        MEM_W(0X548, ctx->r4) = 0;
            goto L_004476A4;
    }
    // 0x00447680: sw          $zero, 0x548($a0)
    MEM_W(0X548, ctx->r4) = 0;
    // 0x00447684: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
L_00447688:
    // 0x00447688: lw          $v0, 0x8($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X8);
    // 0x0044768C: sw          $zero, 0x24C($v0)
    MEM_W(0X24C, ctx->r2) = 0;
    // 0x00447690: lw          $v0, 0x4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X4);
    // 0x00447694: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x00447698: slt         $v0, $v1, $v0
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x0044769C: bne         $v0, $zero, L_00447688
    if (ctx->r2 != 0) {
        // 0x004476A0: addiu       $a1, $a1, 0x4
        ctx->r5 = ADD32(ctx->r5, 0X4);
            goto L_00447688;
    }
    // 0x004476A0: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
L_004476A4:
    // 0x004476A4: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x004476A8: blez        $v0, L_004476D0
    if (SIGNED(ctx->r2) <= 0) {
        // 0x004476AC: addu        $v1, $zero, $zero
        ctx->r3 = ADD32(0, 0);
            goto L_004476D0;
    }
    // 0x004476AC: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
    // 0x004476B0: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
L_004476B4:
    // 0x004476B4: lw          $v0, 0x1C($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X1C);
    // 0x004476B8: sw          $zero, 0x24C($v0)
    MEM_W(0X24C, ctx->r2) = 0;
    // 0x004476BC: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x004476C0: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x004476C4: slt         $v0, $v1, $v0
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x004476C8: bne         $v0, $zero, L_004476B4
    if (ctx->r2 != 0) {
        // 0x004476CC: addiu       $a1, $a1, 0x4
        ctx->r5 = ADD32(ctx->r5, 0X4);
            goto L_004476B4;
    }
    // 0x004476CC: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
L_004476D0:
    // 0x004476D0: lw          $v0, 0x2C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X2C);
    // 0x004476D4: blez        $v0, L_004476FC
    if (SIGNED(ctx->r2) <= 0) {
        // 0x004476D8: addu        $v1, $zero, $zero
        ctx->r3 = ADD32(0, 0);
            goto L_004476FC;
    }
    // 0x004476D8: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
    // 0x004476DC: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
L_004476E0:
    // 0x004476E0: lw          $v0, 0x30($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X30);
    // 0x004476E4: sw          $zero, 0x24C($v0)
    MEM_W(0X24C, ctx->r2) = 0;
    // 0x004476E8: lw          $v0, 0x2C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X2C);
    // 0x004476EC: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x004476F0: slt         $v0, $v1, $v0
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x004476F4: bne         $v0, $zero, L_004476E0
    if (ctx->r2 != 0) {
        // 0x004476F8: addiu       $a1, $a1, 0x4
        ctx->r5 = ADD32(ctx->r5, 0X4);
            goto L_004476E0;
    }
    // 0x004476F8: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
L_004476FC:
    // 0x004476FC: sll         $v0, $a2, 3
    ctx->r2 = S32(ctx->r6 << 3);
    // 0x00447700: sw          $a2, 0x4FC($a0)
    MEM_W(0X4FC, ctx->r4) = ctx->r6;
    // 0x00447704: lui         $at, 0x43
    ctx->r1 = S32(0X43 << 16);
    // 0x00447708: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x0044770C: lw          $v0, 0x232C($at)
    ctx->r2 = MEM_W(ctx->r1, 0X232C);
    // 0x00447710: beq         $v0, $zero, L_00447720
    if (ctx->r2 == 0) {
        // 0x00447714: nop
    
            goto L_00447720;
    }
    // 0x00447714: nop

    // 0x00447718: jalr        $v0
    // 0x0044771C: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x0044771C: nop

    after_0:
L_00447720:
    // 0x00447720: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x00447724: jr          $ra
    // 0x00447728: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00447728: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00462CA4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00462CA4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x00462CA8: blez        $a1, L_00462CCC
    if (SIGNED(ctx->r5) <= 0) {
        // 0x00462CAC: addu        $v1, $a2, $zero
        ctx->r3 = ADD32(ctx->r6, 0);
            goto L_00462CCC;
    }
    // 0x00462CAC: addu        $v1, $a2, $zero
    ctx->r3 = ADD32(ctx->r6, 0);
L_00462CB0:
    // 0x00462CB0: lbu         $v0, 0x0($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X0);
    // 0x00462CB4: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x00462CB8: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x00462CBC: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x00462CC0: slt         $v0, $a2, $a1
    ctx->r2 = SIGNED(ctx->r6) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x00462CC4: bne         $v0, $zero, L_00462CB0
    if (ctx->r2 != 0) {
        // 0x00462CC8: andi        $v1, $v1, 0xFFFF
        ctx->r3 = ctx->r3 & 0XFFFF;
            goto L_00462CB0;
    }
    // 0x00462CC8: andi        $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 & 0XFFFF;
L_00462CCC:
    // 0x00462CCC: jr          $ra
    // 0x00462CD0: andi        $v0, $v1, 0xFFFF
    ctx->r2 = ctx->r3 & 0XFFFF;
    return;
    // 0x00462CD0: andi        $v0, $v1, 0xFFFF
    ctx->r2 = ctx->r3 & 0XFFFF;
;}
RECOMP_FUNC void func_00293574(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00293574: jr          $ra
    // 0x00293578: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00293578: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00257124(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00257124: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00257128: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x0025712C: lw          $v1, 0x4($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X4);
    // 0x00257130: lw          $a2, 0x8($a0)
    ctx->r6 = MEM_W(ctx->r4, 0X8);
    // 0x00257134: lw          $a3, 0xC($a0)
    ctx->r7 = MEM_W(ctx->r4, 0XC);
    // 0x00257138: sw          $v0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r2;
    // 0x0025713C: sw          $v1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r3;
    // 0x00257140: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x00257144: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    // 0x00257148: lw          $v0, 0x10($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X10);
    // 0x0025714C: lw          $v1, 0x14($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X14);
    // 0x00257150: lw          $a2, 0x18($a0)
    ctx->r6 = MEM_W(ctx->r4, 0X18);
    // 0x00257154: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x00257158: sw          $v1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r3;
    // 0x0025715C: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    // 0x00257160: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x00257164: lw          $v1, 0x4($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X4);
    // 0x00257168: lw          $a2, 0x8($a1)
    ctx->r6 = MEM_W(ctx->r5, 0X8);
    // 0x0025716C: lw          $a3, 0xC($a1)
    ctx->r7 = MEM_W(ctx->r5, 0XC);
    // 0x00257170: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
    // 0x00257174: sw          $v1, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r3;
    // 0x00257178: sw          $a2, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r6;
    // 0x0025717C: sw          $a3, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->r7;
    // 0x00257180: lw          $v0, 0x10($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X10);
    // 0x00257184: lw          $v1, 0x14($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X14);
    // 0x00257188: lw          $a2, 0x18($a1)
    ctx->r6 = MEM_W(ctx->r5, 0X18);
    // 0x0025718C: sw          $v0, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->r2;
    // 0x00257190: sw          $v1, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r3;
    // 0x00257194: sw          $a2, 0x18($a0)
    MEM_W(0X18, ctx->r4) = ctx->r6;
    // 0x00257198: lw          $v0, 0x0($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X0);
    // 0x0025719C: lw          $v1, 0x4($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X4);
    // 0x002571A0: lw          $a2, 0x8($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X8);
    // 0x002571A4: lw          $a3, 0xC($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XC);
    // 0x002571A8: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
    // 0x002571AC: sw          $v1, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r3;
    // 0x002571B0: sw          $a2, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->r6;
    // 0x002571B4: sw          $a3, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->r7;
    // 0x002571B8: lw          $v0, 0x10($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X10);
    // 0x002571BC: lw          $v1, 0x14($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X14);
    // 0x002571C0: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x002571C4: sw          $v0, 0x10($a1)
    MEM_W(0X10, ctx->r5) = ctx->r2;
    // 0x002571C8: sw          $v1, 0x14($a1)
    MEM_W(0X14, ctx->r5) = ctx->r3;
    // 0x002571CC: sw          $a2, 0x18($a1)
    MEM_W(0X18, ctx->r5) = ctx->r6;
    // 0x002571D0: jr          $ra
    // 0x002571D4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x002571D4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_0020EAA0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0020EAA0: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x0020EAA4: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x0020EAA8: sdc1        $f22, 0x28($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X28, ctx->r29);
    // 0x0020EAAC: sdc1        $f21, 0x20($sp)
    CHECK_FR(ctx, 21);
    SD(ctx->f21.u64, 0X20, ctx->r29);
    // 0x0020EAB0: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x0020EAB4: lwc1        $f21, 0x0($a0)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r4, 0X0);
    // 0x0020EAB8: mul.s       $f1, $f21, $f21
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f21.fl); NAN_CHECK(ctx->f21.fl); 
    ctx->f1.fl = MUL_S(ctx->f21.fl, ctx->f21.fl);
    // 0x0020EABC: lwc1        $f20, 0x8($a0)
    ctx->f20.u32l = MEM_W(ctx->r4, 0X8);
    // 0x0020EAC0: mul.s       $f0, $f20, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f0.fl = MUL_S(ctx->f20.fl, ctx->f20.fl);
    // 0x0020EAC4: add.s       $f12, $f1, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x0020EAC8: mtc1        $zero, $f22
    ctx->f22.u32l = 0;
    // 0x0020EACC: c.eq.s      $f12, $f22
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f12.fl == ctx->f22.fl;
    // 0x0020EAD0: nop

    // 0x0020EAD4: bc1t        L_0020EC34
    if (c1cs) {
        // 0x0020EAD8: mov.s       $f0, $f22
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    ctx->f0.fl = ctx->f22.fl;
            goto L_0020EC34;
    }
    // 0x0020EAD8: mov.s       $f0, $f22
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    ctx->f0.fl = ctx->f22.fl;
    // 0x0020EADC: jal         0x00298470
    // 0x0020EAE0: nop

    func_00298470(rdram, ctx);
        goto after_0;
    // 0x0020EAE0: nop

    after_0:
    // 0x0020EAE4: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    // 0x0020EAE8: c.eq.s      $f12, $f22
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f12.fl == ctx->f22.fl;
    // 0x0020EAEC: nop

    // 0x0020EAF0: bc1t        L_0020EC34
    if (c1cs) {
        // 0x0020EAF4: mov.s       $f0, $f22
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    ctx->f0.fl = ctx->f22.fl;
            goto L_0020EC34;
    }
    // 0x0020EAF4: mov.s       $f0, $f22
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    ctx->f0.fl = ctx->f22.fl;
    // 0x0020EAF8: c.lt.s      $f21, $f22
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f21.fl < ctx->f22.fl;
    // 0x0020EAFC: nop

    // 0x0020EB00: bc1f        L_0020EB0C
    if (!c1cs) {
        // 0x0020EB04: mov.s       $f2, $f21
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 21);
    ctx->f2.fl = ctx->f21.fl;
            goto L_0020EB0C;
    }
    // 0x0020EB04: mov.s       $f2, $f21
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 21);
    ctx->f2.fl = ctx->f21.fl;
    // 0x0020EB08: neg.s       $f2, $f21
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f21.fl); 
    ctx->f2.fl = -ctx->f21.fl;
L_0020EB0C:
    // 0x0020EB0C: c.lt.s      $f20, $f22
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f20.fl < ctx->f22.fl;
    // 0x0020EB10: nop

    // 0x0020EB14: bc1f        L_0020EB38
    if (!c1cs) {
        // 0x0020EB18: nop
    
            goto L_0020EB38;
    }
    // 0x0020EB18: nop

    // 0x0020EB1C: neg.s       $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); 
    ctx->f0.fl = -ctx->f20.fl;
    // 0x0020EB20: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x0020EB24: nop

    // 0x0020EB28: bc1f        L_0020EBC4
    if (!c1cs) {
        // 0x0020EB2C: nop
    
            goto L_0020EBC4;
    }
    // 0x0020EB2C: nop

    // 0x0020EB30: j           L_0020EB48
    // 0x0020EB34: nop

        goto L_0020EB48;
    // 0x0020EB34: nop

L_0020EB38:
    // 0x0020EB38: c.lt.s      $f2, $f20
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f2.fl < ctx->f20.fl;
    // 0x0020EB3C: nop

    // 0x0020EB40: bc1f        L_0020EBC4
    if (!c1cs) {
        // 0x0020EB44: nop
    
            goto L_0020EBC4;
    }
    // 0x0020EB44: nop

L_0020EB48:
    // 0x0020EB48: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0020EB4C: lwc1        $f0, 0x555C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X555C);
    // 0x0020EB50: div.s       $f21, $f21, $f12
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f21.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f21.fl = DIV_S(ctx->f21.fl, ctx->f12.fl);
    // 0x0020EB54: c.lt.s      $f0, $f21
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 21);
    c1cs = ctx->f0.fl < ctx->f21.fl;
    // 0x0020EB58: nop

    // 0x0020EB5C: bc1t        L_0020EB80
    if (c1cs) {
        // 0x0020EB60: mov.s       $f12, $f21
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 21);
    ctx->f12.fl = ctx->f21.fl;
            goto L_0020EB80;
    }
    // 0x0020EB60: mov.s       $f12, $f21
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 21);
    ctx->f12.fl = ctx->f21.fl;
    // 0x0020EB64: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0020EB68: lwc1        $f12, 0x5560($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X5560);
    // 0x0020EB6C: c.lt.s      $f21, $f12
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f21.fl < ctx->f12.fl;
    // 0x0020EB70: nop

    // 0x0020EB74: bc1t        L_0020EB90
    if (c1cs) {
        // 0x0020EB78: nop
    
            goto L_0020EB90;
    }
    // 0x0020EB78: nop

    // 0x0020EB7C: mov.s       $f12, $f21
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 21);
    ctx->f12.fl = ctx->f21.fl;
L_0020EB80:
    // 0x0020EB80: c.lt.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl < ctx->f12.fl;
    // 0x0020EB84: nop

    // 0x0020EB88: bc1tl       L_0020EB90
    if (c1cs) {
        // 0x0020EB8C: mov.s       $f12, $f0
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
            goto L_0020EB90;
    }
    goto skip_0;
    // 0x0020EB8C: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    skip_0:
L_0020EB90:
    // 0x0020EB90: jal         0x0021153C
    // 0x0020EB94: nop

    func_0021153C(rdram, ctx);
        goto after_1;
    // 0x0020EB94: nop

    after_1:
    // 0x0020EB98: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    // 0x0020EB9C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x0020EBA0: c.lt.s      $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f20.fl < ctx->f0.fl;
    // 0x0020EBA4: nop

    // 0x0020EBA8: bc1f        L_0020EBB4
    if (!c1cs) {
        // 0x0020EBAC: neg.s       $f1, $f2
        CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f1.fl = -ctx->f2.fl;
            goto L_0020EBB4;
    }
    // 0x0020EBAC: neg.s       $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f1.fl = -ctx->f2.fl;
    // 0x0020EBB0: mov.s       $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    ctx->f1.fl = ctx->f2.fl;
L_0020EBB4:
    // 0x0020EBB4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0020EBB8: lwc1        $f0, 0x5564($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X5564);
    // 0x0020EBBC: j           L_0020EC30
    // 0x0020EBC0: sub.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl - ctx->f0.fl;
        goto L_0020EC30;
    // 0x0020EBC0: sub.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl - ctx->f0.fl;
L_0020EBC4:
    // 0x0020EBC4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0020EBC8: lwc1        $f1, 0x5568($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X5568);
    // 0x0020EBCC: div.s       $f20, $f20, $f12
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f20.fl = DIV_S(ctx->f20.fl, ctx->f12.fl);
    // 0x0020EBD0: c.lt.s      $f1, $f20
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f1.fl < ctx->f20.fl;
    // 0x0020EBD4: nop

    // 0x0020EBD8: bc1t        L_0020EBFC
    if (c1cs) {
        // 0x0020EBDC: mov.s       $f0, $f20
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    ctx->f0.fl = ctx->f20.fl;
            goto L_0020EBFC;
    }
    // 0x0020EBDC: mov.s       $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    ctx->f0.fl = ctx->f20.fl;
    // 0x0020EBE0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0020EBE4: lwc1        $f0, 0x556C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X556C);
    // 0x0020EBE8: c.lt.s      $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f20.fl < ctx->f0.fl;
    // 0x0020EBEC: nop

    // 0x0020EBF0: bc1t        L_0020EC0C
    if (c1cs) {
        // 0x0020EBF4: nop
    
            goto L_0020EC0C;
    }
    // 0x0020EBF4: nop

    // 0x0020EBF8: mov.s       $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    ctx->f0.fl = ctx->f20.fl;
L_0020EBFC:
    // 0x0020EBFC: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x0020EC00: nop

    // 0x0020EC04: bc1tl       L_0020EC0C
    if (c1cs) {
        // 0x0020EC08: mov.s       $f0, $f1
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    ctx->f0.fl = ctx->f1.fl;
            goto L_0020EC0C;
    }
    goto skip_1;
    // 0x0020EC08: mov.s       $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    ctx->f0.fl = ctx->f1.fl;
    skip_1:
L_0020EC0C:
    // 0x0020EC0C: jal         0x0021153C
    // 0x0020EC10: neg.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = -ctx->f0.fl;
    func_0021153C(rdram, ctx);
        goto after_2;
    // 0x0020EC10: neg.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = -ctx->f0.fl;
    after_2:
    // 0x0020EC14: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    // 0x0020EC18: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x0020EC1C: c.lt.s      $f21, $f0
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f21.fl < ctx->f0.fl;
    // 0x0020EC20: nop

    // 0x0020EC24: bc1f        L_0020EC30
    if (!c1cs) {
        // 0x0020EC28: neg.s       $f1, $f2
        CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f1.fl = -ctx->f2.fl;
            goto L_0020EC30;
    }
    // 0x0020EC28: neg.s       $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f1.fl = -ctx->f2.fl;
    // 0x0020EC2C: mov.s       $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    ctx->f1.fl = ctx->f2.fl;
L_0020EC30:
    // 0x0020EC30: mov.s       $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    ctx->f0.fl = ctx->f1.fl;
L_0020EC34:
    // 0x0020EC34: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x0020EC38: ldc1        $f22, 0x28($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X28);
    // 0x0020EC3C: ldc1        $f21, 0x20($sp)
    CHECK_FR(ctx, 21);
    ctx->f21.u64 = LD(ctx->r29, 0X20);
    // 0x0020EC40: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x0020EC44: jr          $ra
    // 0x0020EC48: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x0020EC48: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_00462668(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_004297B4:
    // 0x00462668: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x0046266C: sw          $s3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r19;
    // 0x00462670: addu        $s3, $a0, $zero
    ctx->r19 = ADD32(ctx->r4, 0);
    // 0x00462674: sw          $ra, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r31;
    // 0x00462678: sw          $s5, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r21;
    // 0x0046267C: sw          $s4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r20;
    // 0x00462680: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x00462684: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x00462688: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x0046268C: lbu         $v0, 0x65($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0X65);
    // 0x00462690: beq         $v0, $zero, L_004626A8
    if (ctx->r2 == 0) {
        // 0x00462694: addu        $s4, $a1, $zero
        ctx->r20 = ADD32(ctx->r5, 0);
            goto L_004626A8;
    }
    // 0x00462694: addu        $s4, $a1, $zero
    ctx->r20 = ADD32(ctx->r5, 0);
    // 0x00462698: jal         0x00429DE4
    // 0x0046269C: sb          $zero, 0x65($s3)
    MEM_B(0X65, ctx->r19) = 0;
    entry_00429DE4(rdram, ctx);
        goto after_0;
    // 0x0046269C: sb          $zero, 0x65($s3)
    MEM_B(0X65, ctx->r19) = 0;
    after_0:
    // 0x004626A0: bne         $v0, $zero, L_004627B4
    if (ctx->r2 != 0) {
        // 0x004626A4: nop
    
            goto L_004627B4;
    }
    // 0x004626A4: nop

L_004626A8:
    // 0x004626A8: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
    // 0x004626AC: addiu       $s0, $sp, 0x1A
    ctx->r16 = ADD32(ctx->r29, 0X1A);
    // 0x004626B0: addu        $v0, $s2, $zero
    ctx->r2 = ADD32(ctx->r18, 0);
    // 0x004626B4: sh          $v0, 0x18($sp)
    MEM_H(0X18, ctx->r29) = ctx->r2;
    // 0x004626B8: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x004626BC: sh          $v0, 0x1A($sp)
    MEM_H(0X1A, ctx->r29) = ctx->r2;
    // 0x004626C0: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x004626C4: sh          $v0, 0x1C($sp)
    MEM_H(0X1C, ctx->r29) = ctx->r2;
    // 0x004626C8: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x004626CC: sh          $v0, 0x1E($sp)
    MEM_H(0X1E, ctx->r29) = ctx->r2;
L_004626D0:
    // 0x004626D0: lw          $a0, 0x4($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X4);
    // 0x004626D4: lw          $a1, 0x8($s3)
    ctx->r5 = MEM_W(ctx->r19, 0X8);
    // 0x004626D8: lhu         $a2, 0x0($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0X0);
    // 0x004626DC: jal         0x00299680
    // 0x004626E0: addu        $a3, $s4, $zero
    ctx->r7 = ADD32(ctx->r20, 0);
    func_00299680(rdram, ctx);
        goto after_1;
    // 0x004626E0: addu        $a3, $s4, $zero
    ctx->r7 = ADD32(ctx->r20, 0);
    after_1:
    // 0x004626E4: bne         $v0, $zero, L_004627B4
    if (ctx->r2 != 0) {
        // 0x004626E8: addiu       $a2, $sp, 0x20
        ctx->r6 = ADD32(ctx->r29, 0X20);
            goto L_004627B4;
    }
    // 0x004626E8: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    // 0x004626EC: addiu       $a1, $sp, 0x22
    ctx->r5 = ADD32(ctx->r29, 0X22);
    // 0x004626F0: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x004626F4: sh          $zero, 0x22($sp)
    MEM_H(0X22, ctx->r29) = 0;
    // 0x004626F8: sh          $zero, 0x20($sp)
    MEM_H(0X20, ctx->r29) = 0;
    // 0x004626FC: addu        $v0, $s4, $a0
    ctx->r2 = ADD32(ctx->r20, ctx->r4);
L_00462700:
    // 0x00462700: lhu         $v1, 0x0($v0)
    ctx->r3 = MEM_HU(ctx->r2, 0X0);
    // 0x00462704: lhu         $v0, 0x0($a2)
    ctx->r2 = MEM_HU(ctx->r6, 0X0);
    // 0x00462708: addiu       $a0, $a0, 0x2
    ctx->r4 = ADD32(ctx->r4, 0X2);
    // 0x0046270C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x00462710: sh          $v0, 0x0($a2)
    MEM_H(0X0, ctx->r6) = ctx->r2;
    // 0x00462714: lhu         $v0, 0x0($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X0);
    // 0x00462718: nor         $v1, $zero, $v1
    ctx->r3 = ~(0 | ctx->r3);
    // 0x0046271C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x00462720: sh          $v0, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r2;
    // 0x00462724: sltiu       $v0, $a0, 0x1C
    ctx->r2 = ctx->r4 < 0X1C ? 1 : 0;
    // 0x00462728: bne         $v0, $zero, L_00462700
    if (ctx->r2 != 0) {
        // 0x0046272C: addu        $v0, $s4, $a0
        ctx->r2 = ADD32(ctx->r20, ctx->r4);
            goto L_00462700;
    }
    // 0x0046272C: addu        $v0, $s4, $a0
    ctx->r2 = ADD32(ctx->r20, ctx->r4);
    // 0x00462730: lhu         $v1, 0x1C($s4)
    ctx->r3 = MEM_HU(ctx->r20, 0X1C);
    // 0x00462734: lhu         $v0, 0x20($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X20);
    // 0x00462738: bnel        $v1, $v0, L_00462754
    if (ctx->r3 != ctx->r2) {
        // 0x0046273C: addiu       $s2, $s2, 0x1
        ctx->r18 = ADD32(ctx->r18, 0X1);
            goto L_00462754;
    }
    goto skip_0;
    // 0x0046273C: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    skip_0:
    // 0x00462740: lhu         $v1, 0x1E($s4)
    ctx->r3 = MEM_HU(ctx->r20, 0X1E);
    // 0x00462744: lhu         $v0, 0x22($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X22);
    // 0x00462748: beq         $v1, $v0, L_00462764
    if (ctx->r3 == ctx->r2) {
        // 0x0046274C: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_00462764;
    }
    // 0x0046274C: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x00462750: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
L_00462754:
    // 0x00462754: slti        $v0, $s2, 0x4
    ctx->r2 = SIGNED(ctx->r18) < 0X4 ? 1 : 0;
    // 0x00462758: bne         $v0, $zero, L_004626D0
    if (ctx->r2 != 0) {
        // 0x0046275C: addiu       $s0, $s0, 0x2
        ctx->r16 = ADD32(ctx->r16, 0X2);
            goto L_004626D0;
    }
    // 0x0046275C: addiu       $s0, $s0, 0x2
    ctx->r16 = ADD32(ctx->r16, 0X2);
    // 0x00462760: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
L_00462764:
    // 0x00462764: bne         $s2, $v0, L_00462774
    if (ctx->r18 != ctx->r2) {
        // 0x00462768: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_00462774;
    }
    // 0x00462768: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x0046276C: j           L_004297B4
    // 0x00462770: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    entry_004297B4(rdram, ctx);
    return;
    // 0x00462770: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
L_00462774:
    // 0x00462774: addiu       $s5, $zero, 0x1
    ctx->r21 = ADD32(0, 0X1);
    // 0x00462778: addiu       $s1, $sp, 0x18
    ctx->r17 = ADD32(ctx->r29, 0X18);
L_0046277C:
    // 0x0046277C: beql        $s0, $s2, L_004627A4
    if (ctx->r16 == ctx->r18) {
        // 0x00462780: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_004627A4;
    }
    goto skip_1;
    // 0x00462780: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    skip_1:
    // 0x00462784: lhu         $a2, 0x0($s1)
    ctx->r6 = MEM_HU(ctx->r17, 0X0);
    // 0x00462788: sw          $s5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r21;
    // 0x0046278C: lw          $a0, 0x4($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X4);
    // 0x00462790: lw          $a1, 0x8($s3)
    ctx->r5 = MEM_W(ctx->r19, 0X8);
    // 0x00462794: jal         0x00299A40
    // 0x00462798: addu        $a3, $s4, $zero
    ctx->r7 = ADD32(ctx->r20, 0);
    func_00299A40(rdram, ctx);
        goto after_2;
    // 0x00462798: addu        $a3, $s4, $zero
    ctx->r7 = ADD32(ctx->r20, 0);
    after_2:
    // 0x0046279C: bne         $v0, $zero, L_004627B4
    if (ctx->r2 != 0) {
        // 0x004627A0: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_004627B4;
    }
    // 0x004627A0: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_004627A4:
    // 0x004627A4: slti        $v0, $s0, 0x4
    ctx->r2 = SIGNED(ctx->r16) < 0X4 ? 1 : 0;
    // 0x004627A8: bne         $v0, $zero, L_0046277C
    if (ctx->r2 != 0) {
        // 0x004627AC: addiu       $s1, $s1, 0x2
        ctx->r17 = ADD32(ctx->r17, 0X2);
            goto L_0046277C;
    }
    // 0x004627AC: addiu       $s1, $s1, 0x2
    ctx->r17 = ADD32(ctx->r17, 0X2);
    // 0x004627B0: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_004627B4:
    // 0x004627B4: lw          $ra, 0x40($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X40);
    // 0x004627B8: lw          $s5, 0x3C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X3C);
    // 0x004627BC: lw          $s4, 0x38($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X38);
    // 0x004627C0: lw          $s3, 0x34($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X34);
    // 0x004627C4: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x004627C8: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x004627CC: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x004627D0: jr          $ra
    // 0x004627D4: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x004627D4: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_0040ED8C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0040ED8C: jr          $ra
    // 0x0040ED90: sw          $zero, 0x0($a0)
    MEM_W(0X0, ctx->r4) = 0;
    return;
    // 0x0040ED90: sw          $zero, 0x0($a0)
    MEM_W(0X0, ctx->r4) = 0;
;}
RECOMP_FUNC void func_00422B08(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00422B08: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x00422B0C: lw          $v1, 0x9C0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X9C0);
    // 0x00422B10: sltiu       $v0, $v1, 0x10
    ctx->r2 = ctx->r3 < 0X10 ? 1 : 0;
    // 0x00422B14: beq         $v0, $zero, L_00422B30
    if (ctx->r2 == 0) {
        // 0x00422B18: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_00422B30;
    }
    // 0x00422B18: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x00422B1C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00422B20: addu        $at, $at, $v0
    gpr jr_addend_00422B28 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x00422B24: lw          $v0, 0x1570($at)
    ctx->r2 = ADD32(ctx->r1, 0X1570);
    // 0x00422B28: jr          $v0
    // 0x00422B2C: nop

    switch (jr_addend_00422B28 >> 2) {
        case 0: goto L_00422B30; break;
        case 1: goto L_00422B40; break;
        case 2: goto L_00422B50; break;
        case 3: goto L_00422B60; break;
        case 4: goto L_00422B70; break;
        case 5: goto L_00422B80; break;
        case 6: goto L_00422B90; break;
        case 7: goto L_00422BA0; break;
        case 8: goto L_00422BB0; break;
        case 9: goto L_00422BC0; break;
        case 10: goto L_00422BD0; break;
        case 11: goto L_00422BE0; break;
        case 12: goto L_00422BF0; break;
        case 13: goto L_00422C00; break;
        case 14: goto L_00422C10; break;
        case 15: goto L_00422C20; break;
        default: switch_error(__func__, 0x00422B28, 0x800C1570);
    }
    // 0x00422B2C: nop

L_00422B30:
    // 0x00422B30: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00422B34: addiu       $v0, $v0, 0x4BE8
    ctx->r2 = ADD32(ctx->r2, 0X4BE8);
    // 0x00422B38: j           L_00422C2C
    // 0x00422B3C: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_00422C2C;
    // 0x00422B3C: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_00422B40:
    // 0x00422B40: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00422B44: addiu       $v0, $v0, 0x4C18
    ctx->r2 = ADD32(ctx->r2, 0X4C18);
    // 0x00422B48: j           L_00422C2C
    // 0x00422B4C: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_00422C2C;
    // 0x00422B4C: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_00422B50:
    // 0x00422B50: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00422B54: addiu       $v0, $v0, 0x4C78
    ctx->r2 = ADD32(ctx->r2, 0X4C78);
    // 0x00422B58: j           L_00422C2C
    // 0x00422B5C: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_00422C2C;
    // 0x00422B5C: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_00422B60:
    // 0x00422B60: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00422B64: addiu       $v0, $v0, 0x4D4C
    ctx->r2 = ADD32(ctx->r2, 0X4D4C);
    // 0x00422B68: j           L_00422C2C
    // 0x00422B6C: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_00422C2C;
    // 0x00422B6C: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_00422B70:
    // 0x00422B70: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00422B74: addiu       $v0, $v0, 0x4CE4
    ctx->r2 = ADD32(ctx->r2, 0X4CE4);
    // 0x00422B78: j           L_00422C2C
    // 0x00422B7C: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_00422C2C;
    // 0x00422B7C: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_00422B80:
    // 0x00422B80: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00422B84: addiu       $v0, $v0, 0x4DB0
    ctx->r2 = ADD32(ctx->r2, 0X4DB0);
    // 0x00422B88: j           L_00422C2C
    // 0x00422B8C: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_00422C2C;
    // 0x00422B8C: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_00422B90:
    // 0x00422B90: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00422B94: addiu       $v0, $v0, 0x4E14
    ctx->r2 = ADD32(ctx->r2, 0X4E14);
    // 0x00422B98: j           L_00422C2C
    // 0x00422B9C: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_00422C2C;
    // 0x00422B9C: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_00422BA0:
    // 0x00422BA0: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00422BA4: addiu       $v0, $v0, 0x4E58
    ctx->r2 = ADD32(ctx->r2, 0X4E58);
    // 0x00422BA8: j           L_00422C2C
    // 0x00422BAC: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_00422C2C;
    // 0x00422BAC: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_00422BB0:
    // 0x00422BB0: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00422BB4: addiu       $v0, $v0, 0x4E78
    ctx->r2 = ADD32(ctx->r2, 0X4E78);
    // 0x00422BB8: j           L_00422C2C
    // 0x00422BBC: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_00422C2C;
    // 0x00422BBC: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_00422BC0:
    // 0x00422BC0: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00422BC4: addiu       $v0, $v0, 0x4EBC
    ctx->r2 = ADD32(ctx->r2, 0X4EBC);
    // 0x00422BC8: j           L_00422C2C
    // 0x00422BCC: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_00422C2C;
    // 0x00422BCC: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_00422BD0:
    // 0x00422BD0: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00422BD4: addiu       $v0, $v0, 0x4F10
    ctx->r2 = ADD32(ctx->r2, 0X4F10);
    // 0x00422BD8: j           L_00422C2C
    // 0x00422BDC: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_00422C2C;
    // 0x00422BDC: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_00422BE0:
    // 0x00422BE0: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00422BE4: addiu       $v0, $v0, 0x4F48
    ctx->r2 = ADD32(ctx->r2, 0X4F48);
    // 0x00422BE8: j           L_00422C2C
    // 0x00422BEC: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_00422C2C;
    // 0x00422BEC: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_00422BF0:
    // 0x00422BF0: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00422BF4: addiu       $v0, $v0, 0x4F84
    ctx->r2 = ADD32(ctx->r2, 0X4F84);
    // 0x00422BF8: j           L_00422C2C
    // 0x00422BFC: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_00422C2C;
    // 0x00422BFC: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_00422C00:
    // 0x00422C00: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00422C04: addiu       $v0, $v0, 0x4FBC
    ctx->r2 = ADD32(ctx->r2, 0X4FBC);
    // 0x00422C08: j           L_00422C2C
    // 0x00422C0C: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_00422C2C;
    // 0x00422C0C: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_00422C10:
    // 0x00422C10: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00422C14: addiu       $v0, $v0, 0x4FF8
    ctx->r2 = ADD32(ctx->r2, 0X4FF8);
    // 0x00422C18: j           L_00422C2C
    // 0x00422C1C: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_00422C2C;
    // 0x00422C1C: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_00422C20:
    // 0x00422C20: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00422C24: addiu       $v0, $v0, 0x503C
    ctx->r2 = ADD32(ctx->r2, 0X503C);
    // 0x00422C28: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_00422C2C:
    // 0x00422C2C: jr          $ra
    // 0x00422C30: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x00422C30: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void func_0027B40C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0027B40C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x0027B410: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x0027B414: addiu       $a0, $a0, 0x7078
    ctx->r4 = ADD32(ctx->r4, 0X7078);
    // 0x0027B418: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x0027B41C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x0027B420: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x0027B424: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x0027B428: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x0027B42C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0027B430: sw          $zero, 0x2AC0($at)
    MEM_W(0X2AC0, ctx->r1) = 0;
    // 0x0027B434: jal         0x00224DF4
    // 0x0027B438: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_00224DF4(rdram, ctx);
        goto after_0;
    // 0x0027B438: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_0:
    // 0x0027B43C: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x0027B440: beq         $s1, $zero, L_0027B4D8
    if (ctx->r17 == 0) {
        // 0x0027B444: addiu       $v0, $zero, 0x2A
        ctx->r2 = ADD32(0, 0X2A);
            goto L_0027B4D8;
    }
    // 0x0027B444: addiu       $v0, $zero, 0x2A
    ctx->r2 = ADD32(0, 0X2A);
    // 0x0027B448: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x0027B44C: lh          $v1, 0x0($a0)
    ctx->r3 = MEM_H(ctx->r4, 0X0);
    // 0x0027B450: div         $zero, $v0, $v1
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r3))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r3)));
    // 0x0027B454: bne         $v1, $zero, L_0027B460
    if (ctx->r3 != 0) {
        // 0x0027B458: nop
    
            goto L_0027B460;
    }
    // 0x0027B458: nop

    // 0x0027B45C: break       7
    do_break(2602076);
L_0027B460:
    // 0x0027B460: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x0027B464: bne         $v1, $at, L_0027B478
    if (ctx->r3 != ctx->r1) {
        // 0x0027B468: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_0027B478;
    }
    // 0x0027B468: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x0027B46C: bne         $v0, $at, L_0027B478
    if (ctx->r2 != ctx->r1) {
        // 0x0027B470: nop
    
            goto L_0027B478;
    }
    // 0x0027B470: nop

    // 0x0027B474: break       6
    do_break(2602100);
L_0027B478:
    // 0x0027B478: mfhi        $v1
    ctx->r3 = hi;
    // 0x0027B47C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x0027B480: addiu       $v0, $a0, 0x8
    ctx->r2 = ADD32(ctx->r4, 0X8);
    // 0x0027B484: sll         $v1, $v1, 3
    ctx->r3 = S32(ctx->r3 << 3);
    // 0x0027B488: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x0027B48C: lbu         $v0, 0x4($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X4);
    // 0x0027B490: lw          $v1, 0x0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X0);
    // 0x0027B494: sb          $v0, 0x14($sp)
    MEM_B(0X14, ctx->r29) = ctx->r2;
    // 0x0027B498: addu        $v0, $a0, $v1
    ctx->r2 = ADD32(ctx->r4, ctx->r3);
    // 0x0027B49C: beq         $v0, $zero, L_0027B4AC
    if (ctx->r2 == 0) {
        // 0x0027B4A0: sw          $v0, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r2;
            goto L_0027B4AC;
    }
    // 0x0027B4A0: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x0027B4A4: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
    // 0x0027B4A8: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
L_0027B4AC:
    // 0x0027B4AC: lui         $s0, 0x800F
    ctx->r16 = S32(0X800F << 16);
    // 0x0027B4B0: addiu       $s0, $s0, 0x5618
    ctx->r16 = ADD32(ctx->r16, 0X5618);
    // 0x0027B4B4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0027B4B8: lw          $a1, 0x10($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X10);
    // 0x0027B4BC: jal         0x0029E460
    // 0x0027B4C0: addiu       $a2, $zero, 0x90
    ctx->r6 = ADD32(0, 0X90);
    func_0029E460(rdram, ctx);
        goto after_1;
    // 0x0027B4C0: addiu       $a2, $zero, 0x90
    ctx->r6 = ADD32(0, 0X90);
    after_1:
    // 0x0027B4C4: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0027B4C8: jal         0x002051F4
    // 0x0027B4CC: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_002051F4(rdram, ctx);
        goto after_2;
    // 0x0027B4CC: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_2:
    // 0x0027B4D0: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0027B4D4: sw          $s0, 0x2AC0($at)
    MEM_W(0X2AC0, ctx->r1) = ctx->r16;
L_0027B4D8:
    // 0x0027B4D8: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x0027B4DC: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x0027B4E0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x0027B4E4: jr          $ra
    // 0x0027B4E8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x0027B4E8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_0026F080(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0026F080: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x0026F084: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x0026F088: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x0026F08C: sw          $s2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r18;
    // 0x0026F090: addu        $s2, $a1, $zero
    ctx->r18 = ADD32(ctx->r5, 0);
    // 0x0026F094: sw          $s3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r19;
    // 0x0026F098: addu        $s3, $a2, $zero
    ctx->r19 = ADD32(ctx->r6, 0);
    // 0x0026F09C: sw          $s4, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r20;
    // 0x0026F0A0: addu        $s4, $a3, $zero
    ctx->r20 = ADD32(ctx->r7, 0);
    // 0x0026F0A4: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x0026F0A8: sw          $s6, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r22;
    // 0x0026F0AC: lw          $s6, 0x60($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X60);
    // 0x0026F0B0: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    // 0x0026F0B4: sw          $s5, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r21;
    // 0x0026F0B8: lw          $s5, 0x64($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X64);
    // 0x0026F0BC: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x0026F0C0: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x0026F0C4: jal         0x0020EF2C
    // 0x0026F0C8: addiu       $s1, $s0, 0x20
    ctx->r17 = ADD32(ctx->r16, 0X20);
    func_0020EF2C(rdram, ctx);
        goto after_0;
    // 0x0026F0C8: addiu       $s1, $s0, 0x20
    ctx->r17 = ADD32(ctx->r16, 0X20);
    after_0:
    // 0x0026F0CC: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    // 0x0026F0D0: addu        $a2, $s4, $zero
    ctx->r6 = ADD32(ctx->r20, 0);
    // 0x0026F0D4: jal         0x0020EF2C
    // 0x0026F0D8: addu        $a1, $s5, $zero
    ctx->r5 = ADD32(ctx->r21, 0);
    func_0020EF2C(rdram, ctx);
        goto after_1;
    // 0x0026F0D8: addu        $a1, $s5, $zero
    ctx->r5 = ADD32(ctx->r21, 0);
    after_1:
    // 0x0026F0DC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0026F0E0: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x0026F0E4: jal         0x0020EFDC
    // 0x0026F0E8: addiu       $a2, $sp, 0x10
    ctx->r6 = ADD32(ctx->r29, 0X10);
    func_0020EFDC(rdram, ctx);
        goto after_2;
    // 0x0026F0E8: addiu       $a2, $sp, 0x10
    ctx->r6 = ADD32(ctx->r29, 0X10);
    after_2:
    // 0x0026F0EC: jal         0x0020F040
    // 0x0026F0F0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_0020F040(rdram, ctx);
        goto after_3;
    // 0x0026F0F0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_3:
    // 0x0026F0F4: lwc1        $f1, 0x20($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X20);
    // 0x0026F0F8: lwc1        $f0, 0x0($s3)
    ctx->f0.u32l = MEM_W(ctx->r19, 0X0);
    // 0x0026F0FC: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x0026F100: lwc1        $f3, 0x4($s1)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r17, 0X4);
    // 0x0026F104: lwc1        $f0, 0x4($s3)
    ctx->f0.u32l = MEM_W(ctx->r19, 0X4);
    // 0x0026F108: mul.s       $f3, $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f3.fl = MUL_S(ctx->f3.fl, ctx->f0.fl);
    // 0x0026F10C: lwc1        $f2, 0x8($s1)
    ctx->f2.u32l = MEM_W(ctx->r17, 0X8);
    // 0x0026F110: lwc1        $f0, 0x8($s3)
    ctx->f0.u32l = MEM_W(ctx->r19, 0X8);
    // 0x0026F114: mul.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x0026F118: add.s       $f1, $f1, $f3
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f3.fl;
    // 0x0026F11C: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x0026F120: add.s       $f1, $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f2.fl;
    // 0x0026F124: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    // 0x0026F128: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    // 0x0026F12C: jal         0x0020EF2C
    // 0x0026F130: swc1        $f1, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->f_odd[(1 - 1) * 2];
    func_0020EF2C(rdram, ctx);
        goto after_4;
    // 0x0026F130: swc1        $f1, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->f_odd[(1 - 1) * 2];
    after_4:
    // 0x0026F134: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    // 0x0026F138: addu        $a1, $s6, $zero
    ctx->r5 = ADD32(ctx->r22, 0);
    // 0x0026F13C: jal         0x0020EF2C
    // 0x0026F140: addu        $a2, $s3, $zero
    ctx->r6 = ADD32(ctx->r19, 0);
    func_0020EF2C(rdram, ctx);
        goto after_5;
    // 0x0026F140: addu        $a2, $s3, $zero
    ctx->r6 = ADD32(ctx->r19, 0);
    after_5:
    // 0x0026F144: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0026F148: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x0026F14C: jal         0x0020EFDC
    // 0x0026F150: addiu       $a2, $sp, 0x10
    ctx->r6 = ADD32(ctx->r29, 0X10);
    func_0020EFDC(rdram, ctx);
        goto after_6;
    // 0x0026F150: addiu       $a2, $sp, 0x10
    ctx->r6 = ADD32(ctx->r29, 0X10);
    after_6:
    // 0x0026F154: jal         0x0020F040
    // 0x0026F158: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_0020F040(rdram, ctx);
        goto after_7;
    // 0x0026F158: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_7:
    // 0x0026F15C: lwc1        $f1, 0x0($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X0);
    // 0x0026F160: lwc1        $f0, 0x0($s2)
    ctx->f0.u32l = MEM_W(ctx->r18, 0X0);
    // 0x0026F164: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x0026F168: lwc1        $f3, 0x4($s0)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r16, 0X4);
    // 0x0026F16C: lwc1        $f0, 0x4($s2)
    ctx->f0.u32l = MEM_W(ctx->r18, 0X4);
    // 0x0026F170: mul.s       $f3, $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f3.fl = MUL_S(ctx->f3.fl, ctx->f0.fl);
    // 0x0026F174: lwc1        $f2, 0x8($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X8);
    // 0x0026F178: lwc1        $f0, 0x8($s2)
    ctx->f0.u32l = MEM_W(ctx->r18, 0X8);
    // 0x0026F17C: mul.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x0026F180: add.s       $f1, $f1, $f3
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f3.fl;
    // 0x0026F184: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x0026F188: addu        $a1, $s5, $zero
    ctx->r5 = ADD32(ctx->r21, 0);
    // 0x0026F18C: add.s       $f1, $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f2.fl;
    // 0x0026F190: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    // 0x0026F194: addiu       $s1, $s0, 0x10
    ctx->r17 = ADD32(ctx->r16, 0X10);
    // 0x0026F198: jal         0x0020EF2C
    // 0x0026F19C: swc1        $f1, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f_odd[(1 - 1) * 2];
    func_0020EF2C(rdram, ctx);
        goto after_8;
    // 0x0026F19C: swc1        $f1, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f_odd[(1 - 1) * 2];
    after_8:
    // 0x0026F1A0: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    // 0x0026F1A4: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    // 0x0026F1A8: jal         0x0020EF2C
    // 0x0026F1AC: addu        $a2, $s5, $zero
    ctx->r6 = ADD32(ctx->r21, 0);
    func_0020EF2C(rdram, ctx);
        goto after_9;
    // 0x0026F1AC: addu        $a2, $s5, $zero
    ctx->r6 = ADD32(ctx->r21, 0);
    after_9:
    // 0x0026F1B0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0026F1B4: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x0026F1B8: jal         0x0020EFDC
    // 0x0026F1BC: addiu       $a2, $sp, 0x10
    ctx->r6 = ADD32(ctx->r29, 0X10);
    func_0020EFDC(rdram, ctx);
        goto after_10;
    // 0x0026F1BC: addiu       $a2, $sp, 0x10
    ctx->r6 = ADD32(ctx->r29, 0X10);
    after_10:
    // 0x0026F1C0: jal         0x0020F040
    // 0x0026F1C4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_0020F040(rdram, ctx);
        goto after_11;
    // 0x0026F1C4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_11:
    // 0x0026F1C8: lwc1        $f1, 0x10($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X10);
    // 0x0026F1CC: lwc1        $f0, 0x0($s2)
    ctx->f0.u32l = MEM_W(ctx->r18, 0X0);
    // 0x0026F1D0: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x0026F1D4: lwc1        $f3, 0x4($s1)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r17, 0X4);
    // 0x0026F1D8: lwc1        $f0, 0x4($s2)
    ctx->f0.u32l = MEM_W(ctx->r18, 0X4);
    // 0x0026F1DC: mul.s       $f3, $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f3.fl = MUL_S(ctx->f3.fl, ctx->f0.fl);
    // 0x0026F1E0: lwc1        $f2, 0x8($s1)
    ctx->f2.u32l = MEM_W(ctx->r17, 0X8);
    // 0x0026F1E4: lwc1        $f0, 0x8($s2)
    ctx->f0.u32l = MEM_W(ctx->r18, 0X8);
    // 0x0026F1E8: mul.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x0026F1EC: add.s       $f1, $f1, $f3
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f3.fl;
    // 0x0026F1F0: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x0026F1F4: add.s       $f1, $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f2.fl;
    // 0x0026F1F8: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    // 0x0026F1FC: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    // 0x0026F200: swc1        $f1, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->f_odd[(1 - 1) * 2];
    // 0x0026F204: jal         0x0020EF2C
    // 0x0026F208: addiu       $s1, $s0, 0x40
    ctx->r17 = ADD32(ctx->r16, 0X40);
    func_0020EF2C(rdram, ctx);
        goto after_12;
    // 0x0026F208: addiu       $s1, $s0, 0x40
    ctx->r17 = ADD32(ctx->r16, 0X40);
    after_12:
    // 0x0026F20C: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    // 0x0026F210: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    // 0x0026F214: jal         0x0020EF2C
    // 0x0026F218: addu        $a2, $s4, $zero
    ctx->r6 = ADD32(ctx->r20, 0);
    func_0020EF2C(rdram, ctx);
        goto after_13;
    // 0x0026F218: addu        $a2, $s4, $zero
    ctx->r6 = ADD32(ctx->r20, 0);
    after_13:
    // 0x0026F21C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0026F220: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x0026F224: jal         0x0020EFDC
    // 0x0026F228: addiu       $a2, $sp, 0x10
    ctx->r6 = ADD32(ctx->r29, 0X10);
    func_0020EFDC(rdram, ctx);
        goto after_14;
    // 0x0026F228: addiu       $a2, $sp, 0x10
    ctx->r6 = ADD32(ctx->r29, 0X10);
    after_14:
    // 0x0026F22C: jal         0x0020F040
    // 0x0026F230: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_0020F040(rdram, ctx);
        goto after_15;
    // 0x0026F230: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_15:
    // 0x0026F234: lwc1        $f1, 0x40($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X40);
    // 0x0026F238: lwc1        $f0, 0x0($s2)
    ctx->f0.u32l = MEM_W(ctx->r18, 0X0);
    // 0x0026F23C: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x0026F240: lwc1        $f3, 0x4($s1)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r17, 0X4);
    // 0x0026F244: lwc1        $f0, 0x4($s2)
    ctx->f0.u32l = MEM_W(ctx->r18, 0X4);
    // 0x0026F248: mul.s       $f3, $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f3.fl = MUL_S(ctx->f3.fl, ctx->f0.fl);
    // 0x0026F24C: lwc1        $f2, 0x8($s1)
    ctx->f2.u32l = MEM_W(ctx->r17, 0X8);
    // 0x0026F250: lwc1        $f0, 0x8($s2)
    ctx->f0.u32l = MEM_W(ctx->r18, 0X8);
    // 0x0026F254: mul.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x0026F258: add.s       $f1, $f1, $f3
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f3.fl;
    // 0x0026F25C: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x0026F260: add.s       $f1, $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f2.fl;
    // 0x0026F264: addu        $a1, $s6, $zero
    ctx->r5 = ADD32(ctx->r22, 0);
    // 0x0026F268: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    // 0x0026F26C: swc1        $f1, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->f_odd[(1 - 1) * 2];
    // 0x0026F270: jal         0x0020EF2C
    // 0x0026F274: addiu       $s1, $s0, 0x30
    ctx->r17 = ADD32(ctx->r16, 0X30);
    func_0020EF2C(rdram, ctx);
        goto after_16;
    // 0x0026F274: addiu       $s1, $s0, 0x30
    ctx->r17 = ADD32(ctx->r16, 0X30);
    after_16:
    // 0x0026F278: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    // 0x0026F27C: addu        $a1, $s5, $zero
    ctx->r5 = ADD32(ctx->r21, 0);
    // 0x0026F280: jal         0x0020EF2C
    // 0x0026F284: addu        $a2, $s6, $zero
    ctx->r6 = ADD32(ctx->r22, 0);
    func_0020EF2C(rdram, ctx);
        goto after_17;
    // 0x0026F284: addu        $a2, $s6, $zero
    ctx->r6 = ADD32(ctx->r22, 0);
    after_17:
    // 0x0026F288: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0026F28C: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x0026F290: jal         0x0020EFDC
    // 0x0026F294: addiu       $a2, $sp, 0x10
    ctx->r6 = ADD32(ctx->r29, 0X10);
    func_0020EFDC(rdram, ctx);
        goto after_18;
    // 0x0026F294: addiu       $a2, $sp, 0x10
    ctx->r6 = ADD32(ctx->r29, 0X10);
    after_18:
    // 0x0026F298: jal         0x0020F040
    // 0x0026F29C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_0020F040(rdram, ctx);
        goto after_19;
    // 0x0026F29C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_19:
    // 0x0026F2A0: lwc1        $f0, 0x30($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X30);
    // 0x0026F2A4: lwc1        $f1, 0x0($s2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r18, 0X0);
    // 0x0026F2A8: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0026F2AC: lwc1        $f3, 0x4($s1)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r17, 0X4);
    // 0x0026F2B0: lwc1        $f1, 0x4($s2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r18, 0X4);
    // 0x0026F2B4: mul.s       $f3, $f3, $f1
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f3.fl = MUL_S(ctx->f3.fl, ctx->f1.fl);
    // 0x0026F2B8: lwc1        $f2, 0x8($s2)
    ctx->f2.u32l = MEM_W(ctx->r18, 0X8);
    // 0x0026F2BC: lwc1        $f1, 0x8($s1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r17, 0X8);
    // 0x0026F2C0: mul.s       $f1, $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f2.fl);
    // 0x0026F2C4: add.s       $f0, $f0, $f3
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f3.fl;
    // 0x0026F2C8: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x0026F2CC: swc1        $f0, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->f0.u32l;
    // 0x0026F2D0: lwc1        $f0, 0x20($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X20);
    // 0x0026F2D4: lwc1        $f3, 0x28($s0)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r16, 0X28);
    // 0x0026F2D8: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x0026F2DC: swc1        $f0, 0x50($s0)
    MEM_W(0X50, ctx->r16) = ctx->f0.u32l;
    // 0x0026F2E0: lwc1        $f0, 0x24($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X24);
    // 0x0026F2E4: neg.s       $f3, $f3
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f3.fl); 
    ctx->f3.fl = -ctx->f3.fl;
    // 0x0026F2E8: swc1        $f3, 0x58($s0)
    MEM_W(0X58, ctx->r16) = ctx->f_odd[(3 - 1) * 2];
    // 0x0026F2EC: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x0026F2F0: swc1        $f0, 0x54($s0)
    MEM_W(0X54, ctx->r16) = ctx->f0.u32l;
    // 0x0026F2F4: lwc1        $f0, 0x50($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X50);
    // 0x0026F2F8: lwc1        $f1, 0x0($s2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r18, 0X0);
    // 0x0026F2FC: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0026F300: lwc1        $f2, 0x54($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X54);
    // 0x0026F304: lwc1        $f1, 0x4($s2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r18, 0X4);
    // 0x0026F308: mul.s       $f2, $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f1.fl);
    // 0x0026F30C: lwc1        $f1, 0x8($s2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r18, 0X8);
    // 0x0026F310: mul.s       $f3, $f3, $f1
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f3.fl = MUL_S(ctx->f3.fl, ctx->f1.fl);
    // 0x0026F314: add.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f2.fl;
    // 0x0026F318: add.s       $f0, $f0, $f3
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f3.fl;
    // 0x0026F31C: swc1        $f0, 0x5C($s0)
    MEM_W(0X5C, ctx->r16) = ctx->f0.u32l;
    // 0x0026F320: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x0026F324: lw          $s6, 0x48($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X48);
    // 0x0026F328: lw          $s5, 0x44($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X44);
    // 0x0026F32C: lw          $s4, 0x40($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X40);
    // 0x0026F330: lw          $s3, 0x3C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X3C);
    // 0x0026F334: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x0026F338: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x0026F33C: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x0026F340: jr          $ra
    // 0x0026F344: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x0026F344: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_00418F48(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00418F48: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00418F4C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00418F50: lui         $s1, 0x8012
    ctx->r17 = S32(0X8012 << 16);
    // 0x00418F54: addiu       $s1, $s1, -0x5528
    ctx->r17 = ADD32(ctx->r17, -0X5528);
    // 0x00418F58: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x00418F5C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00418F60: lb          $v0, 0x2A($s1)
    ctx->r2 = MEM_B(ctx->r17, 0X2A);
    // 0x00418F64: beq         $v0, $zero, L_00418F98
    if (ctx->r2 == 0) {
        // 0x00418F68: addu        $s0, $a0, $zero
        ctx->r16 = ADD32(ctx->r4, 0);
            goto L_00418F98;
    }
    // 0x00418F68: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x00418F6C: jal         0x004160F0
    // 0x00418F70: nop

    func_004160F0(rdram, ctx);
        goto after_0;
    // 0x00418F70: nop

    after_0:
    // 0x00418F74: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x00418F78: addiu       $a1, $a1, 0xE84
    ctx->r5 = ADD32(ctx->r5, 0XE84);
    // 0x00418F7C: addiu       $v0, $v0, -0x4
    ctx->r2 = ADD32(ctx->r2, -0X4);
    // 0x00418F80: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x00418F84: lb          $a2, 0x2A($s1)
    ctx->r6 = MEM_B(ctx->r17, 0X2A);
    // 0x00418F88: jal         0x0029E3E0
    // 0x00418F8C: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    func_0029E3E0(rdram, ctx);
        goto after_1;
    // 0x00418F8C: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    after_1:
    // 0x00418F90: j           L_00418FB8
    // 0x00418F94: nop

        goto L_00418FB8;
    // 0x00418F94: nop

L_00418F98:
    // 0x00418F98: jal         0x004160F0
    // 0x00418F9C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_004160F0(rdram, ctx);
        goto after_2;
    // 0x00418F9C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x00418FA0: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x00418FA4: addiu       $a1, $a1, 0xE8C
    ctx->r5 = ADD32(ctx->r5, 0XE8C);
    // 0x00418FA8: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x00418FAC: addiu       $v0, $v0, -0x4
    ctx->r2 = ADD32(ctx->r2, -0X4);
    // 0x00418FB0: jal         0x0029E3E0
    // 0x00418FB4: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    func_0029E3E0(rdram, ctx);
        goto after_3;
    // 0x00418FB4: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    after_3:
L_00418FB8:
    // 0x00418FB8: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x00418FBC: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00418FC0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00418FC4: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x00418FC8: jr          $ra
    // 0x00418FCC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00418FCC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_00401B70(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00401B70: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00401B74: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00401B78: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x00401B7C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x00401B80: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    // 0x00401B84: jal         0x00400000
    // 0x00401B88: nop

    func_00400000(rdram, ctx);
        goto after_0;
    // 0x00401B88: nop

    after_0:
    // 0x00401B8C: lw          $s0, 0xC($s0)
    ctx->r16 = MEM_W(ctx->r16, 0XC);
    // 0x00401B90: beq         $s0, $zero, L_00401C0C
    if (ctx->r16 == 0) {
        // 0x00401B94: nop
    
            goto L_00401C0C;
    }
    // 0x00401B94: nop

    // 0x00401B98: lhu         $v0, 0x2($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X2);
    // 0x00401B9C: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    // 0x00401BA0: andi        $v0, $v0, 0x7FFF
    ctx->r2 = ctx->r2 & 0X7FFF;
    // 0x00401BA4: beq         $a0, $zero, L_00401BC4
    if (ctx->r4 == 0) {
        // 0x00401BA8: sh          $v0, 0x2($s0)
        MEM_H(0X2, ctx->r16) = ctx->r2;
            goto L_00401BC4;
    }
    // 0x00401BA8: sh          $v0, 0x2($s0)
    MEM_H(0X2, ctx->r16) = ctx->r2;
    // 0x00401BAC: lhu         $v0, 0x2($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X2);
    // 0x00401BB0: andi        $v0, $v0, 0x8000
    ctx->r2 = ctx->r2 & 0X8000;
    // 0x00401BB4: beq         $v0, $zero, L_00401BC4
    if (ctx->r2 == 0) {
        // 0x00401BB8: nop
    
            goto L_00401BC4;
    }
    // 0x00401BB8: nop

    // 0x00401BBC: jal         0x00401CE8
    // 0x00401BC0: nop

    func_00401CE8(rdram, ctx);
        goto after_1;
    // 0x00401BC0: nop

    after_1:
L_00401BC4:
    // 0x00401BC4: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x00401BC8: beq         $a0, $zero, L_00401BE8
    if (ctx->r4 == 0) {
        // 0x00401BCC: nop
    
            goto L_00401BE8;
    }
    // 0x00401BCC: nop

    // 0x00401BD0: lhu         $v0, 0x2($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X2);
    // 0x00401BD4: andi        $v0, $v0, 0x8000
    ctx->r2 = ctx->r2 & 0X8000;
    // 0x00401BD8: beq         $v0, $zero, L_00401BE8
    if (ctx->r2 == 0) {
        // 0x00401BDC: nop
    
            goto L_00401BE8;
    }
    // 0x00401BDC: nop

    // 0x00401BE0: jal         0x00401CE8
    // 0x00401BE4: nop

    func_00401CE8(rdram, ctx);
        goto after_2;
    // 0x00401BE4: nop

    after_2:
L_00401BE8:
    // 0x00401BE8: lw          $a0, 0x18($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X18);
    // 0x00401BEC: beq         $a0, $zero, L_00401C0C
    if (ctx->r4 == 0) {
        // 0x00401BF0: nop
    
            goto L_00401C0C;
    }
    // 0x00401BF0: nop

    // 0x00401BF4: lhu         $v0, 0x2($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X2);
    // 0x00401BF8: andi        $v0, $v0, 0x8000
    ctx->r2 = ctx->r2 & 0X8000;
    // 0x00401BFC: beq         $v0, $zero, L_00401C0C
    if (ctx->r2 == 0) {
        // 0x00401C00: nop
    
            goto L_00401C0C;
    }
    // 0x00401C00: nop

    // 0x00401C04: jal         0x00401CE8
    // 0x00401C08: nop

    func_00401CE8(rdram, ctx);
        goto after_3;
    // 0x00401C08: nop

    after_3:
L_00401C0C:
    // 0x00401C0C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x00401C10: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00401C14: jr          $ra
    // 0x00401C18: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00401C18: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0025D474(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0025D474: addiu       $sp, $sp, -0x108
    ctx->r29 = ADD32(ctx->r29, -0X108);
    // 0x0025D478: sw          $s2, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->r18;
    // 0x0025D47C: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x0025D480: sw          $s1, 0xE4($sp)
    MEM_W(0XE4, ctx->r29) = ctx->r17;
    // 0x0025D484: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x0025D488: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    // 0x0025D48C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x0025D490: lui         $v1, 0x2
    ctx->r3 = S32(0X2 << 16);
    // 0x0025D494: sw          $ra, 0xF8($sp)
    MEM_W(0XF8, ctx->r29) = ctx->r31;
    // 0x0025D498: sw          $s5, 0xF4($sp)
    MEM_W(0XF4, ctx->r29) = ctx->r21;
    // 0x0025D49C: sw          $s4, 0xF0($sp)
    MEM_W(0XF0, ctx->r29) = ctx->r20;
    // 0x0025D4A0: sw          $s3, 0xEC($sp)
    MEM_W(0XEC, ctx->r29) = ctx->r19;
    // 0x0025D4A4: sw          $s0, 0xE0($sp)
    MEM_W(0XE0, ctx->r29) = ctx->r16;
    // 0x0025D4A8: sdc1        $f20, 0x100($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X100, ctx->r29);
    // 0x0025D4AC: lw          $v0, 0xD4($s2)
    ctx->r2 = MEM_W(ctx->r18, 0XD4);
    // 0x0025D4B0: addu        $s0, $a3, $zero
    ctx->r16 = ADD32(ctx->r7, 0);
    // 0x0025D4B4: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x0025D4B8: lui         $v1, 0x2000
    ctx->r3 = S32(0X2000 << 16);
    // 0x0025D4BC: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x0025D4C0: sw          $v0, 0xD4($s2)
    MEM_W(0XD4, ctx->r18) = ctx->r2;
    // 0x0025D4C4: jal         0x00246108
    // 0x0025D4C8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    func_00246108(rdram, ctx);
        goto after_0;
    // 0x0025D4C8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_0:
    // 0x0025D4CC: lw          $v0, 0x5C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X5C);
    // 0x0025D4D0: bne         $v0, $s0, L_0025D4F0
    if (ctx->r2 != ctx->r16) {
        // 0x0025D4D4: addiu       $s4, $zero, 0x4
        ctx->r20 = ADD32(0, 0X4);
            goto L_0025D4F0;
    }
    // 0x0025D4D4: addiu       $s4, $zero, 0x4
    ctx->r20 = ADD32(0, 0X4);
    // 0x0025D4D8: lw          $v0, 0x14($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X14);
    // 0x0025D4DC: lhu         $v0, 0x9A($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X9A);
    // 0x0025D4E0: beq         $v0, $zero, L_0025D4F0
    if (ctx->r2 == 0) {
        // 0x0025D4E4: addu        $s5, $zero, $zero
        ctx->r21 = ADD32(0, 0);
            goto L_0025D4F0;
    }
    // 0x0025D4E4: addu        $s5, $zero, $zero
    ctx->r21 = ADD32(0, 0);
    // 0x0025D4E8: j           L_0025D4F4
    // 0x0025D4EC: addiu       $s4, $zero, 0x6
    ctx->r20 = ADD32(0, 0X6);
        goto L_0025D4F4;
    // 0x0025D4EC: addiu       $s4, $zero, 0x6
    ctx->r20 = ADD32(0, 0X6);
L_0025D4F0:
    // 0x0025D4F0: addu        $s5, $zero, $zero
    ctx->r21 = ADD32(0, 0);
L_0025D4F4:
    // 0x0025D4F4: lb          $v0, 0x37($s1)
    ctx->r2 = MEM_B(ctx->r17, 0X37);
    // 0x0025D4F8: bne         $v0, $zero, L_0025D504
    if (ctx->r2 != 0) {
        // 0x0025D4FC: addiu       $s3, $zero, 0x4
        ctx->r19 = ADD32(0, 0X4);
            goto L_0025D504;
    }
    // 0x0025D4FC: addiu       $s3, $zero, 0x4
    ctx->r19 = ADD32(0, 0X4);
    // 0x0025D500: addiu       $s3, $zero, 0x3
    ctx->r19 = ADD32(0, 0X3);
L_0025D504:
    // 0x0025D504: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x0025D508: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x0025D50C: jal         0x0024599C
    // 0x0025D510: addiu       $a2, $sp, 0xA0
    ctx->r6 = ADD32(ctx->r29, 0XA0);
    func_0024599C(rdram, ctx);
        goto after_1;
    // 0x0025D510: addiu       $a2, $sp, 0xA0
    ctx->r6 = ADD32(ctx->r29, 0XA0);
    after_1:
    // 0x0025D514: lb          $s0, 0x133($s1)
    ctx->r16 = MEM_B(ctx->r17, 0X133);
    // 0x0025D518: addiu       $v0, $s0, -0x1
    ctx->r2 = ADD32(ctx->r16, -0X1);
    // 0x0025D51C: sltiu       $v0, $v0, 0x2
    ctx->r2 = ctx->r2 < 0X2 ? 1 : 0;
    // 0x0025D520: beq         $v0, $zero, L_0025D678
    if (ctx->r2 == 0) {
        // 0x0025D524: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_0025D678;
    }
    // 0x0025D524: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0025D528: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0025D52C: lwc1        $f20, 0x763C($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X763C);
    // 0x0025D530: bne         $s0, $v0, L_0025D540
    if (ctx->r16 != ctx->r2) {
        // 0x0025D534: nop
    
            goto L_0025D540;
    }
    // 0x0025D534: nop

    // 0x0025D538: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0025D53C: lwc1        $f20, 0x7640($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X7640);
L_0025D540:
    // 0x0025D540: lwc1        $f1, 0x80($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X80);
    // 0x0025D544: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0025D548: lwc1        $f0, 0x7644($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X7644);
    // 0x0025D54C: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x0025D550: nop

    // 0x0025D554: bc1f        L_0025D590
    if (!c1cs) {
        // 0x0025D558: nop
    
            goto L_0025D590;
    }
    // 0x0025D558: nop

    // 0x0025D55C: lbu         $v0, 0x36($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X36);
    // 0x0025D560: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0025D564: lwc1        $f0, 0x7648($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X7648);
    // 0x0025D568: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x0025D56C: sltiu       $v0, $v0, 0x2
    ctx->r2 = ctx->r2 < 0X2 ? 1 : 0;
    // 0x0025D570: beq         $v0, $zero, L_0025D580
    if (ctx->r2 == 0) {
        // 0x0025D574: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_0025D580;
    }
    // 0x0025D574: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x0025D578: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0025D57C: lwc1        $f0, 0x764C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X764C);
L_0025D580:
    // 0x0025D580: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x0025D584: lw          $a3, 0x64($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X64);
    // 0x0025D588: jal         0x00245BAC
    // 0x0025D58C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_00245BAC(rdram, ctx);
        goto after_2;
    // 0x0025D58C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_2:
L_0025D590:
    // 0x0025D590: lw          $v1, 0x5C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X5C);
    // 0x0025D594: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x0025D598: bne         $v1, $v0, L_0025D5AC
    if (ctx->r3 != ctx->r2) {
        // 0x0025D59C: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_0025D5AC;
    }
    // 0x0025D59C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x0025D5A0: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x0025D5A4: j           L_0025D5B4
    // 0x0025D5A8: addu        $a2, $s3, $zero
    ctx->r6 = ADD32(ctx->r19, 0);
        goto L_0025D5B4;
    // 0x0025D5A8: addu        $a2, $s3, $zero
    ctx->r6 = ADD32(ctx->r19, 0);
L_0025D5AC:
    // 0x0025D5AC: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x0025D5B0: addu        $a2, $s4, $zero
    ctx->r6 = ADD32(ctx->r20, 0);
L_0025D5B4:
    // 0x0025D5B4: jal         0x00243414
    // 0x0025D5B8: nop

    func_00243414(rdram, ctx);
        goto after_3;
    // 0x0025D5B8: nop

    after_3:
    // 0x0025D5BC: lwc1        $f1, 0xB8($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0XB8);
    // 0x0025D5C0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0025D5C4: lwc1        $f0, 0x7650($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X7650);
    // 0x0025D5C8: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x0025D5CC: lwc1        $f12, 0x1C($s2)
    ctx->f12.u32l = MEM_W(ctx->r18, 0X1C);
    // 0x0025D5D0: lwc1        $f14, 0x78($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X78);
    // 0x0025D5D4: mfc1        $a2, $f1
    ctx->r6 = (int32_t)ctx->f_odd[(1 - 1) * 2];
    // 0x0025D5D8: jal         0x0021160C
    // 0x0025D5DC: nop

    func_0021160C(rdram, ctx);
        goto after_4;
    // 0x0025D5DC: nop

    after_4:
    // 0x0025D5E0: c.lt.s      $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f20.fl < ctx->f0.fl;
    // 0x0025D5E4: nop

    // 0x0025D5E8: bc1f        L_0025D5F8
    if (!c1cs) {
        // 0x0025D5EC: swc1        $f0, 0x1C($s2)
        MEM_W(0X1C, ctx->r18) = ctx->f0.u32l;
            goto L_0025D5F8;
    }
    // 0x0025D5EC: swc1        $f0, 0x1C($s2)
    MEM_W(0X1C, ctx->r18) = ctx->f0.u32l;
    // 0x0025D5F0: j           L_0025D60C
    // 0x0025D5F4: swc1        $f20, 0x1C($s2)
    MEM_W(0X1C, ctx->r18) = ctx->f20.u32l;
        goto L_0025D60C;
    // 0x0025D5F4: swc1        $f20, 0x1C($s2)
    MEM_W(0X1C, ctx->r18) = ctx->f20.u32l;
L_0025D5F8:
    // 0x0025D5F8: neg.s       $f1, $f20
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); 
    ctx->f1.fl = -ctx->f20.fl;
    // 0x0025D5FC: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x0025D600: nop

    // 0x0025D604: bc1tl       L_0025D60C
    if (c1cs) {
        // 0x0025D608: swc1        $f1, 0x1C($s2)
        MEM_W(0X1C, ctx->r18) = ctx->f_odd[(1 - 1) * 2];
            goto L_0025D60C;
    }
    goto skip_0;
    // 0x0025D608: swc1        $f1, 0x1C($s2)
    MEM_W(0X1C, ctx->r18) = ctx->f_odd[(1 - 1) * 2];
    skip_0:
L_0025D60C:
    // 0x0025D60C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x0025D610: bne         $s0, $v0, L_0025D734
    if (ctx->r16 != ctx->r2) {
        // 0x0025D614: nop
    
            goto L_0025D734;
    }
    // 0x0025D614: nop

    // 0x0025D618: lwc1        $f0, 0x1C($s2)
    ctx->f0.u32l = MEM_W(ctx->r18, 0X1C);
    // 0x0025D61C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0025D620: lwc1        $f1, 0x7654($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X7654);
    // 0x0025D624: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x0025D628: mul.s       $f14, $f0, $f1
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f14.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0025D62C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0025D630: lwc1        $f0, 0x7658($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X7658);
    // 0x0025D634: c.lt.s      $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f0.fl < ctx->f14.fl;
    // 0x0025D638: nop

    // 0x0025D63C: bc1tl       L_0025D65C
    if (c1cs) {
        // 0x0025D640: mov.s       $f14, $f0
        CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    ctx->f14.fl = ctx->f0.fl;
            goto L_0025D65C;
    }
    goto skip_1;
    // 0x0025D640: mov.s       $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    ctx->f14.fl = ctx->f0.fl;
    skip_1:
    // 0x0025D644: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0025D648: lwc1        $f0, 0x765C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X765C);
    // 0x0025D64C: c.lt.s      $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f14.fl < ctx->f0.fl;
    // 0x0025D650: nop

    // 0x0025D654: bc1tl       L_0025D65C
    if (c1cs) {
        // 0x0025D658: mov.s       $f14, $f0
        CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    ctx->f14.fl = ctx->f0.fl;
            goto L_0025D65C;
    }
    goto skip_2;
    // 0x0025D658: mov.s       $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    ctx->f14.fl = ctx->f0.fl;
    skip_2:
L_0025D65C:
    // 0x0025D65C: lwc1        $f12, 0x10C($s1)
    ctx->f12.u32l = MEM_W(ctx->r17, 0X10C);
    // 0x0025D660: lui         $a2, 0x3D8E
    ctx->r6 = S32(0X3D8E << 16);
    // 0x0025D664: ori         $a2, $a2, 0xFA36
    ctx->r6 = ctx->r6 | 0XFA36;
    // 0x0025D668: jal         0x00211774
    // 0x0025D66C: nop

    func_00211774(rdram, ctx);
        goto after_5;
    // 0x0025D66C: nop

    after_5:
    // 0x0025D670: j           L_0025D734
    // 0x0025D674: swc1        $f0, 0x10C($s1)
    MEM_W(0X10C, ctx->r17) = ctx->f0.u32l;
        goto L_0025D734;
    // 0x0025D674: swc1        $f0, 0x10C($s1)
    MEM_W(0X10C, ctx->r17) = ctx->f0.u32l;
L_0025D678:
    // 0x0025D678: lw          $v0, 0x3C($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X3C);
    // 0x0025D67C: andi        $v0, $v0, 0x400
    ctx->r2 = ctx->r2 & 0X400;
    // 0x0025D680: bne         $v0, $zero, L_0025D700
    if (ctx->r2 != 0) {
        // 0x0025D684: nop
    
            goto L_0025D700;
    }
    // 0x0025D684: nop

    // 0x0025D688: lbu         $v0, 0x36($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X36);
    // 0x0025D68C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0025D690: lwc1        $f2, 0x7660($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X7660);
    // 0x0025D694: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x0025D698: sltiu       $v0, $v0, 0x2
    ctx->r2 = ctx->r2 < 0X2 ? 1 : 0;
    // 0x0025D69C: beq         $v0, $zero, L_0025D6AC
    if (ctx->r2 == 0) {
        // 0x0025D6A0: nop
    
            goto L_0025D6AC;
    }
    // 0x0025D6A0: nop

    // 0x0025D6A4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0025D6A8: lwc1        $f2, 0x7664($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X7664);
L_0025D6AC:
    // 0x0025D6AC: lwc1        $f1, 0x80($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X80);
    // 0x0025D6B0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0025D6B4: lwc1        $f0, 0x7668($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X7668);
    // 0x0025D6B8: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x0025D6BC: nop

    // 0x0025D6C0: bc1f        L_0025D6D4
    if (!c1cs) {
        // 0x0025D6C4: nop
    
            goto L_0025D6D4;
    }
    // 0x0025D6C4: nop

    // 0x0025D6C8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0025D6CC: lwc1        $f0, 0x766C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X766C);
    // 0x0025D6D0: mul.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
L_0025D6D4:
    // 0x0025D6D4: lb          $v1, 0x34($s1)
    ctx->r3 = MEM_B(ctx->r17, 0X34);
    // 0x0025D6D8: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x0025D6DC: bne         $v1, $v0, L_0025D6F0
    if (ctx->r3 != ctx->r2) {
        // 0x0025D6E0: nop
    
            goto L_0025D6F0;
    }
    // 0x0025D6E0: nop

    // 0x0025D6E4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0025D6E8: lwc1        $f0, 0x7670($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X7670);
    // 0x0025D6EC: mul.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
L_0025D6F0:
    // 0x0025D6F0: mfc1        $a2, $f2
    ctx->r6 = (int32_t)ctx->f2.u32l;
    // 0x0025D6F4: lw          $a3, 0x64($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X64);
    // 0x0025D6F8: j           L_0025D72C
    // 0x0025D6FC: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
        goto L_0025D72C;
    // 0x0025D6FC: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
L_0025D700:
    // 0x0025D700: lbu         $v0, 0x36($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X36);
    // 0x0025D704: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0025D708: lwc1        $f0, 0x7674($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X7674);
    // 0x0025D70C: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x0025D710: sltiu       $v0, $v0, 0x2
    ctx->r2 = ctx->r2 < 0X2 ? 1 : 0;
    // 0x0025D714: beq         $v0, $zero, L_0025D724
    if (ctx->r2 == 0) {
        // 0x0025D718: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_0025D724;
    }
    // 0x0025D718: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x0025D71C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0025D720: lwc1        $f0, 0x7678($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X7678);
L_0025D724:
    // 0x0025D724: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x0025D728: lw          $a3, 0x20($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X20);
L_0025D72C:
    // 0x0025D72C: jal         0x00245BAC
    // 0x0025D730: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_00245BAC(rdram, ctx);
        goto after_6;
    // 0x0025D730: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_6:
L_0025D734:
    // 0x0025D734: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x0025D738: beq         $v0, $zero, L_0025D7D0
    if (ctx->r2 == 0) {
        // 0x0025D73C: addiu       $v0, $zero, 0x259
        ctx->r2 = ADD32(0, 0X259);
            goto L_0025D7D0;
    }
    // 0x0025D73C: addiu       $v0, $zero, 0x259
    ctx->r2 = ADD32(0, 0X259);
    // 0x0025D740: lhu         $v1, 0xB8($s2)
    ctx->r3 = MEM_HU(ctx->r18, 0XB8);
    // 0x0025D744: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0025D748: lwc1        $f2, 0x767C($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X767C);
    // 0x0025D74C: bne         $v1, $v0, L_0025D75C
    if (ctx->r3 != ctx->r2) {
        // 0x0025D750: nop
    
            goto L_0025D75C;
    }
    // 0x0025D750: nop

    // 0x0025D754: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0025D758: lwc1        $f2, 0x7680($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X7680);
L_0025D75C:
    // 0x0025D75C: lwc1        $f1, 0x20($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x0025D760: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x0025D764: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x0025D768: nop

    // 0x0025D76C: bc1f        L_0025D790
    if (!c1cs) {
        // 0x0025D770: nop
    
            goto L_0025D790;
    }
    // 0x0025D770: nop

    // 0x0025D774: neg.s       $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = -ctx->f1.fl;
    // 0x0025D778: c.le.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl <= ctx->f2.fl;
    // 0x0025D77C: nop

    // 0x0025D780: bc1t        L_0025D7A0
    if (c1cs) {
        // 0x0025D784: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_0025D7A0;
    }
    // 0x0025D784: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x0025D788: j           L_0025D7D0
    // 0x0025D78C: nop

        goto L_0025D7D0;
    // 0x0025D78C: nop

L_0025D790:
    // 0x0025D790: c.le.s      $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f1.fl <= ctx->f2.fl;
    // 0x0025D794: nop

    // 0x0025D798: bc1f        L_0025D7D0
    if (!c1cs) {
        // 0x0025D79C: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_0025D7D0;
    }
    // 0x0025D79C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
L_0025D7A0:
    // 0x0025D7A0: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x0025D7A4: jal         0x0025D030
    // 0x0025D7A8: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    func_0025D030(rdram, ctx);
        goto after_7;
    // 0x0025D7A8: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    after_7:
    // 0x0025D7AC: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    // 0x0025D7B0: beq         $a2, $zero, L_0025D7D0
    if (ctx->r6 == 0) {
        // 0x0025D7B4: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_0025D7D0;
    }
    // 0x0025D7B4: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x0025D7B8: sb          $v0, 0x35($s1)
    MEM_B(0X35, ctx->r17) = ctx->r2;
    // 0x0025D7BC: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x0025D7C0: jal         0x00243414
    // 0x0025D7C4: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_00243414(rdram, ctx);
        goto after_8;
    // 0x0025D7C4: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_8:
    // 0x0025D7C8: j           L_0025D9BC
    // 0x0025D7CC: nop

        goto L_0025D9BC;
    // 0x0025D7CC: nop

L_0025D7D0:
    // 0x0025D7D0: lw          $v1, 0x5C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X5C);
    // 0x0025D7D4: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x0025D7D8: beq         $v1, $v0, L_0025D7F8
    if (ctx->r3 == ctx->r2) {
        // 0x0025D7DC: addiu       $v0, $zero, 0x7
        ctx->r2 = ADD32(0, 0X7);
            goto L_0025D7F8;
    }
    // 0x0025D7DC: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x0025D7E0: bne         $v1, $v0, L_0025D81C
    if (ctx->r3 != ctx->r2) {
        // 0x0025D7E4: nop
    
            goto L_0025D81C;
    }
    // 0x0025D7E4: nop

    // 0x0025D7E8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0025D7EC: lwc1        $f1, 0x7684($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X7684);
    // 0x0025D7F0: j           L_0025D824
    // 0x0025D7F4: nop

        goto L_0025D824;
    // 0x0025D7F4: nop

L_0025D7F8:
    // 0x0025D7F8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0025D7FC: lwc1        $f1, 0x7688($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X7688);
    // 0x0025D800: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x0025D804: bne         $s3, $v0, L_0025D824
    if (ctx->r19 != ctx->r2) {
        // 0x0025D808: nop
    
            goto L_0025D824;
    }
    // 0x0025D808: nop

    // 0x0025D80C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0025D810: lwc1        $f1, 0x768C($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X768C);
    // 0x0025D814: j           L_0025D824
    // 0x0025D818: nop

        goto L_0025D824;
    // 0x0025D818: nop

L_0025D81C:
    // 0x0025D81C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0025D820: lwc1        $f1, 0x7690($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X7690);
L_0025D824:
    // 0x0025D824: lw          $v0, 0x3C($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X3C);
    // 0x0025D828: andi        $v0, $v0, 0x400
    ctx->r2 = ctx->r2 & 0X400;
    // 0x0025D82C: bnel        $v0, $zero, L_0025D834
    if (ctx->r2 != 0) {
        // 0x0025D830: add.s       $f1, $f1, $f1
        CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f1.fl;
            goto L_0025D834;
    }
    goto skip_3;
    // 0x0025D830: add.s       $f1, $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f1.fl;
    skip_3:
L_0025D834:
    // 0x0025D834: lb          $v1, 0x34($s1)
    ctx->r3 = MEM_B(ctx->r17, 0X34);
    // 0x0025D838: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x0025D83C: bne         $v1, $v0, L_0025D850
    if (ctx->r3 != ctx->r2) {
        // 0x0025D840: nop
    
            goto L_0025D850;
    }
    // 0x0025D840: nop

    // 0x0025D844: lb          $v0, 0xC7($s1)
    ctx->r2 = MEM_B(ctx->r17, 0XC7);
    // 0x0025D848: beq         $v0, $zero, L_0025D9A4
    if (ctx->r2 == 0) {
        // 0x0025D84C: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_0025D9A4;
    }
    // 0x0025D84C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
L_0025D850:
    // 0x0025D850: lwc1        $f0, 0x80($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X80);
    // 0x0025D854: c.le.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl <= ctx->f1.fl;
    // 0x0025D858: nop

    // 0x0025D85C: bc1f        L_0025D910
    if (!c1cs) {
        // 0x0025D860: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_0025D910;
    }
    // 0x0025D860: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x0025D864: lw          $v1, 0x5C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X5C);
    // 0x0025D868: beq         $v1, $v0, L_0025D880
    if (ctx->r3 == ctx->r2) {
        // 0x0025D86C: addiu       $v0, $zero, 0x7
        ctx->r2 = ADD32(0, 0X7);
            goto L_0025D880;
    }
    // 0x0025D86C: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x0025D870: beq         $v1, $v0, L_0025D8B8
    if (ctx->r3 == ctx->r2) {
        // 0x0025D874: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_0025D8B8;
    }
    // 0x0025D874: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x0025D878: j           L_0025D908
    // 0x0025D87C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
        goto L_0025D908;
    // 0x0025D87C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
L_0025D880:
    // 0x0025D880: addiu       $s0, $s1, 0x94
    ctx->r16 = ADD32(ctx->r17, 0X94);
    // 0x0025D884: jal         0x0028479C
    // 0x0025D888: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_0028479C(rdram, ctx);
        goto after_9;
    // 0x0025D888: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_9:
    // 0x0025D88C: lhu         $v0, 0x14($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X14);
    // 0x0025D890: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x0025D894: beq         $v0, $zero, L_0025D8A8
    if (ctx->r2 == 0) {
        // 0x0025D898: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_0025D8A8;
    }
    // 0x0025D898: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x0025D89C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x0025D8A0: j           L_0025D998
    // 0x0025D8A4: addiu       $a2, $zero, 0xB
    ctx->r6 = ADD32(0, 0XB);
        goto L_0025D998;
    // 0x0025D8A4: addiu       $a2, $zero, 0xB
    ctx->r6 = ADD32(0, 0XB);
L_0025D8A8:
    // 0x0025D8A8: jal         0x00284660
    // 0x0025D8AC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00284660(rdram, ctx);
        goto after_10;
    // 0x0025D8AC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_10:
    // 0x0025D8B0: j           L_0025D9A4
    // 0x0025D8B4: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
        goto L_0025D9A4;
    // 0x0025D8B4: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
L_0025D8B8:
    // 0x0025D8B8: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x0025D8BC: jal         0x00243414
    // 0x0025D8C0: addiu       $a2, $zero, 0xD
    ctx->r6 = ADD32(0, 0XD);
    func_00243414(rdram, ctx);
        goto after_11;
    // 0x0025D8C0: addiu       $a2, $zero, 0xD
    ctx->r6 = ADD32(0, 0XD);
    after_11:
    // 0x0025D8C4: lw          $v0, 0xD4($s2)
    ctx->r2 = MEM_W(ctx->r18, 0XD4);
    // 0x0025D8C8: andi        $v0, $v0, 0x400
    ctx->r2 = ctx->r2 & 0X400;
    // 0x0025D8CC: beq         $v0, $zero, L_0025D9A4
    if (ctx->r2 == 0) {
        // 0x0025D8D0: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_0025D9A4;
    }
    // 0x0025D8D0: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x0025D8D4: lwc1        $f1, 0x74($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X74);
    // 0x0025D8D8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0025D8DC: lwc1        $f2, 0x7694($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X7694);
    // 0x0025D8E0: mul.s       $f1, $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f2.fl);
    // 0x0025D8E4: lwc1        $f0, 0x54($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X54);
    // 0x0025D8E8: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x0025D8EC: swc1        $f0, 0x54($s1)
    MEM_W(0X54, ctx->r17) = ctx->f0.u32l;
    // 0x0025D8F0: lwc1        $f1, 0x7C($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X7C);
    // 0x0025D8F4: mul.s       $f1, $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f2.fl);
    // 0x0025D8F8: lwc1        $f0, 0x5C($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X5C);
    // 0x0025D8FC: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x0025D900: j           L_0025D9A4
    // 0x0025D904: swc1        $f0, 0x5C($s1)
    MEM_W(0X5C, ctx->r17) = ctx->f0.u32l;
        goto L_0025D9A4;
    // 0x0025D904: swc1        $f0, 0x5C($s1)
    MEM_W(0X5C, ctx->r17) = ctx->f0.u32l;
L_0025D908:
    // 0x0025D908: j           L_0025D998
    // 0x0025D90C: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
        goto L_0025D998;
    // 0x0025D90C: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
L_0025D910:
    // 0x0025D910: lw          $v1, 0x5C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X5C);
    // 0x0025D914: bne         $v1, $v0, L_0025D928
    if (ctx->r3 != ctx->r2) {
        // 0x0025D918: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_0025D928;
    }
    // 0x0025D918: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x0025D91C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x0025D920: j           L_0025D998
    // 0x0025D924: addu        $a2, $s3, $zero
    ctx->r6 = ADD32(ctx->r19, 0);
        goto L_0025D998;
    // 0x0025D924: addu        $a2, $s3, $zero
    ctx->r6 = ADD32(ctx->r19, 0);
L_0025D928:
    // 0x0025D928: beq         $s5, $zero, L_0025D994
    if (ctx->r21 == 0) {
        // 0x0025D92C: addu        $a1, $s1, $zero
        ctx->r5 = ADD32(ctx->r17, 0);
            goto L_0025D994;
    }
    // 0x0025D92C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x0025D930: lwc1        $f2, 0x64($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X64);
    // 0x0025D934: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x0025D938: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x0025D93C: nop

    // 0x0025D940: bc1f        L_0025D96C
    if (!c1cs) {
        // 0x0025D944: nop
    
            goto L_0025D96C;
    }
    // 0x0025D944: nop

    // 0x0025D948: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0025D94C: lwc1        $f1, 0x7698($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X7698);
    // 0x0025D950: neg.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = -ctx->f2.fl;
    // 0x0025D954: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x0025D958: nop

    // 0x0025D95C: bc1t        L_0025D988
    if (c1cs) {
        // 0x0025D960: nop
    
            goto L_0025D988;
    }
    // 0x0025D960: nop

    // 0x0025D964: j           L_0025D994
    // 0x0025D968: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
        goto L_0025D994;
    // 0x0025D968: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
L_0025D96C:
    // 0x0025D96C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0025D970: lwc1        $f0, 0x769C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X769C);
    // 0x0025D974: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x0025D978: nop

    // 0x0025D97C: bc1f        L_0025D990
    if (!c1cs) {
        // 0x0025D980: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_0025D990;
    }
    // 0x0025D980: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x0025D984: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
L_0025D988:
    // 0x0025D988: j           L_0025D998
    // 0x0025D98C: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
        goto L_0025D998;
    // 0x0025D98C: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
L_0025D990:
    // 0x0025D990: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
L_0025D994:
    // 0x0025D994: addu        $a2, $s4, $zero
    ctx->r6 = ADD32(ctx->r20, 0);
L_0025D998:
    // 0x0025D998: jal         0x00243414
    // 0x0025D99C: nop

    func_00243414(rdram, ctx);
        goto after_12;
    // 0x0025D99C: nop

    after_12:
    // 0x0025D9A0: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
L_0025D9A4:
    // 0x0025D9A4: jal         0x0025D308
    // 0x0025D9A8: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_0025D308(rdram, ctx);
        goto after_13;
    // 0x0025D9A8: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_13:
    // 0x0025D9AC: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x0025D9B0: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x0025D9B4: jal         0x0025C1B0
    // 0x0025D9B8: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    func_0025C1B0(rdram, ctx);
        goto after_14;
    // 0x0025D9B8: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    after_14:
L_0025D9BC:
    // 0x0025D9BC: lw          $ra, 0xF8($sp)
    ctx->r31 = MEM_W(ctx->r29, 0XF8);
    // 0x0025D9C0: lw          $s5, 0xF4($sp)
    ctx->r21 = MEM_W(ctx->r29, 0XF4);
    // 0x0025D9C4: lw          $s4, 0xF0($sp)
    ctx->r20 = MEM_W(ctx->r29, 0XF0);
    // 0x0025D9C8: lw          $s3, 0xEC($sp)
    ctx->r19 = MEM_W(ctx->r29, 0XEC);
    // 0x0025D9CC: lw          $s2, 0xE8($sp)
    ctx->r18 = MEM_W(ctx->r29, 0XE8);
    // 0x0025D9D0: lw          $s1, 0xE4($sp)
    ctx->r17 = MEM_W(ctx->r29, 0XE4);
    // 0x0025D9D4: lw          $s0, 0xE0($sp)
    ctx->r16 = MEM_W(ctx->r29, 0XE0);
    // 0x0025D9D8: ldc1        $f20, 0x100($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X100);
    // 0x0025D9DC: jr          $ra
    // 0x0025D9E0: addiu       $sp, $sp, 0x108
    ctx->r29 = ADD32(ctx->r29, 0X108);
    return;
    // 0x0025D9E0: addiu       $sp, $sp, 0x108
    ctx->r29 = ADD32(ctx->r29, 0X108);
;}
RECOMP_FUNC void func_0045593C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0045593C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00455940: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x00455944: lw          $a0, 0x1C($a1)
    ctx->r4 = MEM_W(ctx->r5, 0X1C);
    // 0x00455948: jal         0x0042E06C
    // 0x0045594C: nop

    func_0042E06C(rdram, ctx);
        goto after_0;
    // 0x0045594C: nop

    after_0:
    // 0x00455950: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x00455954: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00455958: jr          $ra
    // 0x0045595C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0045595C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0027C1E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0027C1E8: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x0027C1EC: lw          $v1, -0x6770($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X6770);
    // 0x0027C1F0: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x0027C1F4: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x0027C1F8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x0027C1FC: beq         $v1, $zero, L_0027C21C
    if (ctx->r3 == 0) {
        // 0x0027C200: sw          $ra, 0x2C($sp)
        MEM_W(0X2C, ctx->r29) = ctx->r31;
            goto L_0027C21C;
    }
    // 0x0027C200: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
L_0027C204:
    // 0x0027C204: lw          $v0, 0x51C($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X51C);
    // 0x0027C208: beq         $v0, $s0, L_0027C220
    if (ctx->r2 == ctx->r16) {
        // 0x0027C20C: nop
    
            goto L_0027C220;
    }
    // 0x0027C20C: nop

    // 0x0027C210: lw          $v1, 0x1320($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X1320);
    // 0x0027C214: bne         $v1, $zero, L_0027C204
    if (ctx->r3 != 0) {
        // 0x0027C218: nop
    
            goto L_0027C204;
    }
    // 0x0027C218: nop

L_0027C21C:
    // 0x0027C21C: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
L_0027C220:
    // 0x0027C220: beq         $v1, $zero, L_0027C4D4
    if (ctx->r3 == 0) {
        // 0x0027C224: nop
    
            goto L_0027C4D4;
    }
    // 0x0027C224: nop

    // 0x0027C228: lw          $v1, 0x140($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X140);
    // 0x0027C22C: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0027C230: lw          $v0, 0x6CBC($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X6CBC);
    // 0x0027C234: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x0027C238: lw          $a0, 0x6CB8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X6CB8);
    // 0x0027C23C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0027C240: sw          $v1, 0x6CB8($at)
    MEM_W(0X6CB8, ctx->r1) = ctx->r3;
    // 0x0027C244: andi        $v1, $v1, 0x880
    ctx->r3 = ctx->r3 & 0X880;
    // 0x0027C248: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0027C24C: sw          $v0, 0x6CC0($at)
    MEM_W(0X6CC0, ctx->r1) = ctx->r2;
    // 0x0027C250: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0027C254: sw          $a0, 0x6CBC($at)
    MEM_W(0X6CBC, ctx->r1) = ctx->r4;
    // 0x0027C258: bne         $v1, $zero, L_0027C270
    if (ctx->r3 != 0) {
        // 0x0027C25C: nop
    
            goto L_0027C270;
    }
    // 0x0027C25C: nop

    // 0x0027C260: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0027C264: lw          $v0, -0x1CC0($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X1CC0);
    // 0x0027C268: beq         $v0, $zero, L_0027C35C
    if (ctx->r2 == 0) {
        // 0x0027C26C: nop
    
            goto L_0027C35C;
    }
    // 0x0027C26C: nop

L_0027C270:
    // 0x0027C270: lbu         $v0, 0x508($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X508);
    // 0x0027C274: andi        $v0, $v0, 0xE0
    ctx->r2 = ctx->r2 & 0XE0;
    // 0x0027C278: sb          $v0, 0x18($sp)
    MEM_B(0X18, ctx->r29) = ctx->r2;
    // 0x0027C27C: lbu         $v0, 0x509($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X509);
    // 0x0027C280: andi        $v0, $v0, 0xE0
    ctx->r2 = ctx->r2 & 0XE0;
    // 0x0027C284: sb          $v0, 0x19($sp)
    MEM_B(0X19, ctx->r29) = ctx->r2;
    // 0x0027C288: lbu         $v0, 0x50A($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X50A);
    // 0x0027C28C: andi        $v0, $v0, 0xE0
    ctx->r2 = ctx->r2 & 0XE0;
    // 0x0027C290: sb          $v0, 0x1A($sp)
    MEM_B(0X1A, ctx->r29) = ctx->r2;
    // 0x0027C294: lbu         $v0, 0x50B($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X50B);
    // 0x0027C298: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x0027C29C: lw          $v1, -0x1CC0($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X1CC0);
    // 0x0027C2A0: andi        $v0, $v0, 0xE0
    ctx->r2 = ctx->r2 & 0XE0;
    // 0x0027C2A4: beq         $v1, $zero, L_0027C2D8
    if (ctx->r3 == 0) {
        // 0x0027C2A8: sb          $v0, 0x1B($sp)
        MEM_B(0X1B, ctx->r29) = ctx->r2;
            goto L_0027C2D8;
    }
    // 0x0027C2A8: sb          $v0, 0x1B($sp)
    MEM_B(0X1B, ctx->r29) = ctx->r2;
    // 0x0027C2AC: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0027C2B0: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    // 0x0027C2B4: addu        $v1, $a1, $a0
    ctx->r3 = ADD32(ctx->r5, ctx->r4);
L_0027C2B8:
    // 0x0027C2B8: lui         $at, 0x800F
    ctx->r1 = S32(0X800F << 16);
    // 0x0027C2BC: addu        $at, $at, $a0
    ctx->r1 = ADD32(ctx->r1, ctx->r4);
    // 0x0027C2C0: lbu         $v0, 0x1FE4($at)
    ctx->r2 = MEM_BU(ctx->r1, 0X1FE4);
    // 0x0027C2C4: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x0027C2C8: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x0027C2CC: slti        $v0, $a0, 0x4
    ctx->r2 = SIGNED(ctx->r4) < 0X4 ? 1 : 0;
    // 0x0027C2D0: bne         $v0, $zero, L_0027C2B8
    if (ctx->r2 != 0) {
        // 0x0027C2D4: addu        $v1, $a1, $a0
        ctx->r3 = ADD32(ctx->r5, ctx->r4);
            goto L_0027C2B8;
    }
    // 0x0027C2D4: addu        $v1, $a1, $a0
    ctx->r3 = ADD32(ctx->r5, ctx->r4);
L_0027C2D8:
    // 0x0027C2D8: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x0027C2DC: lw          $v0, -0x5528($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X5528);
    // 0x0027C2E0: andi        $v0, $v0, 0x4000
    ctx->r2 = ctx->r2 & 0X4000;
    // 0x0027C2E4: beq         $v0, $zero, L_0027C310
    if (ctx->r2 == 0) {
        // 0x0027C2E8: nop
    
            goto L_0027C310;
    }
    // 0x0027C2E8: nop

    // 0x0027C2EC: lbu         $v0, 0x18($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0X18);
    // 0x0027C2F0: lbu         $v1, 0x1A($sp)
    ctx->r3 = MEM_BU(ctx->r29, 0X1A);
    // 0x0027C2F4: srl         $v0, $v0, 3
    ctx->r2 = S32(U32(ctx->r2) >> 3);
    // 0x0027C2F8: sb          $v0, 0x18($sp)
    MEM_B(0X18, ctx->r29) = ctx->r2;
    // 0x0027C2FC: lbu         $v0, 0x19($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0X19);
    // 0x0027C300: srl         $v1, $v1, 3
    ctx->r3 = S32(U32(ctx->r3) >> 3);
    // 0x0027C304: sb          $v1, 0x1A($sp)
    MEM_B(0X1A, ctx->r29) = ctx->r3;
    // 0x0027C308: srl         $v0, $v0, 3
    ctx->r2 = S32(U32(ctx->r2) >> 3);
    // 0x0027C30C: sb          $v0, 0x19($sp)
    MEM_B(0X19, ctx->r29) = ctx->r2;
L_0027C310:
    // 0x0027C310: lwc1        $f2, 0x290($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X290);
    // 0x0027C314: lwc1        $f0, 0x288($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X288);
    // 0x0027C318: add.s       $f0, $f2, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f2.fl + ctx->f0.fl;
    // 0x0027C31C: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x0027C320: addiu       $a0, $a0, 0x6CB0
    ctx->r4 = ADD32(ctx->r4, 0X6CB0);
    // 0x0027C324: lwc1        $f3, 0x294($s0)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r16, 0X294);
    // 0x0027C328: trunc.w.s   $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x0027C32C: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x0027C330: lwc1        $f0, 0x294($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X294);
    // 0x0027C334: lwc1        $f1, 0x28C($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X28C);
    // 0x0027C338: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x0027C33C: trunc.w.s   $f4, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    ctx->f4.u32l = TRUNC_W_S(ctx->f2.fl);
    // 0x0027C340: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x0027C344: trunc.w.s   $f4, $f3
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 3);
    ctx->f4.u32l = TRUNC_W_S(ctx->f3.fl);
    // 0x0027C348: mfc1        $a3, $f4
    ctx->r7 = (int32_t)ctx->f4.u32l;
    // 0x0027C34C: trunc.w.s   $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x0027C350: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    // 0x0027C354: jal         0x002883E0
    // 0x0027C358: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    func_002883E0(rdram, ctx);
        goto after_0;
    // 0x0027C358: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    after_0:
L_0027C35C:
    // 0x0027C35C: jal         0x0027C074
    // 0x0027C360: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_0027C074(rdram, ctx);
        goto after_1;
    // 0x0027C360: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x0027C364: lw          $v0, 0x52C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X52C);
    // 0x0027C368: beq         $v0, $zero, L_0027C3BC
    if (ctx->r2 == 0) {
        // 0x0027C36C: nop
    
            goto L_0027C3BC;
    }
    // 0x0027C36C: nop

    // 0x0027C370: lwc1        $f2, 0x290($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X290);
    // 0x0027C374: lwc1        $f0, 0x288($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X288);
    // 0x0027C378: add.s       $f0, $f2, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f2.fl + ctx->f0.fl;
    // 0x0027C37C: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x0027C380: addiu       $a0, $a0, 0x6CB0
    ctx->r4 = ADD32(ctx->r4, 0X6CB0);
    // 0x0027C384: lwc1        $f3, 0x294($s0)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r16, 0X294);
    // 0x0027C388: trunc.w.s   $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x0027C38C: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x0027C390: lwc1        $f0, 0x294($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X294);
    // 0x0027C394: lwc1        $f1, 0x28C($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X28C);
    // 0x0027C398: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x0027C39C: trunc.w.s   $f4, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    ctx->f4.u32l = TRUNC_W_S(ctx->f2.fl);
    // 0x0027C3A0: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x0027C3A4: trunc.w.s   $f4, $f3
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 3);
    ctx->f4.u32l = TRUNC_W_S(ctx->f3.fl);
    // 0x0027C3A8: mfc1        $a3, $f4
    ctx->r7 = (int32_t)ctx->f4.u32l;
    // 0x0027C3AC: trunc.w.s   $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x0027C3B0: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    // 0x0027C3B4: jal         0x002883E0
    // 0x0027C3B8: addiu       $a1, $s0, 0x536
    ctx->r5 = ADD32(ctx->r16, 0X536);
    func_002883E0(rdram, ctx);
        goto after_2;
    // 0x0027C3B8: addiu       $a1, $s0, 0x536
    ctx->r5 = ADD32(ctx->r16, 0X536);
    after_2:
L_0027C3BC:
    // 0x0027C3BC: lbu         $v1, 0x530($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X530);
    // 0x0027C3C0: lbu         $v0, 0x531($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X531);
    // 0x0027C3C4: sltu        $v0, $v0, $v1
    ctx->r2 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x0027C3C8: beq         $v0, $zero, L_0027C430
    if (ctx->r2 == 0) {
        // 0x0027C3CC: addiu       $a0, $sp, 0x20
        ctx->r4 = ADD32(ctx->r29, 0X20);
            goto L_0027C430;
    }
    // 0x0027C3CC: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    // 0x0027C3D0: lbu         $v0, 0x531($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X531);
    // 0x0027C3D4: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0027C3D8: lwc1        $f1, 0x6D28($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X6D28);
    // 0x0027C3DC: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x0027C3E0: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x0027C3E4: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0027C3E8: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0027C3EC: lwc1        $f1, -0x67FC($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, -0X67FC);
    // 0x0027C3F0: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x0027C3F4: nop

    // 0x0027C3F8: bc1tl       L_0027C410
    if (c1cs) {
        // 0x0027C3FC: sub.s       $f0, $f0, $f1
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
            goto L_0027C410;
    }
    goto skip_0;
    // 0x0027C3FC: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    skip_0:
    // 0x0027C400: trunc.w.s   $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x0027C404: mfc1        $v1, $f4
    ctx->r3 = (int32_t)ctx->f4.u32l;
    // 0x0027C408: j           L_0027C420
    // 0x0027C40C: nop

        goto L_0027C420;
    // 0x0027C40C: nop

L_0027C410:
    // 0x0027C410: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x0027C414: trunc.w.s   $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x0027C418: mfc1        $v1, $f4
    ctx->r3 = (int32_t)ctx->f4.u32l;
    // 0x0027C41C: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
L_0027C420:
    // 0x0027C420: lbu         $v0, 0x530($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X530);
    // 0x0027C424: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x0027C428: j           L_0027C434
    // 0x0027C42C: sb          $v0, 0x530($s0)
    MEM_B(0X530, ctx->r16) = ctx->r2;
        goto L_0027C434;
    // 0x0027C42C: sb          $v0, 0x530($s0)
    MEM_B(0X530, ctx->r16) = ctx->r2;
L_0027C430:
    // 0x0027C430: sb          $zero, 0x530($s0)
    MEM_B(0X530, ctx->r16) = 0;
L_0027C434:
    // 0x0027C434: lbu         $v0, 0x530($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X530);
    // 0x0027C438: beq         $v0, $zero, L_0027C4A0
    if (ctx->r2 == 0) {
        // 0x0027C43C: addiu       $v0, $zero, 0xFF
        ctx->r2 = ADD32(0, 0XFF);
            goto L_0027C4A0;
    }
    // 0x0027C43C: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x0027C440: sb          $v0, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r2;
    // 0x0027C444: sb          $zero, 0x21($sp)
    MEM_B(0X21, ctx->r29) = 0;
    // 0x0027C448: sb          $zero, 0x22($sp)
    MEM_B(0X22, ctx->r29) = 0;
    // 0x0027C44C: lbu         $v0, 0x530($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X530);
    // 0x0027C450: sb          $v0, 0x23($sp)
    MEM_B(0X23, ctx->r29) = ctx->r2;
    // 0x0027C454: lwc1        $f2, 0x290($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X290);
    // 0x0027C458: lwc1        $f0, 0x288($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X288);
    // 0x0027C45C: add.s       $f0, $f2, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f2.fl + ctx->f0.fl;
    // 0x0027C460: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x0027C464: addiu       $a0, $a0, 0x6CB0
    ctx->r4 = ADD32(ctx->r4, 0X6CB0);
    // 0x0027C468: lwc1        $f3, 0x294($s0)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r16, 0X294);
    // 0x0027C46C: trunc.w.s   $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x0027C470: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x0027C474: lwc1        $f0, 0x294($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X294);
    // 0x0027C478: lwc1        $f1, 0x28C($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X28C);
    // 0x0027C47C: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x0027C480: trunc.w.s   $f4, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    ctx->f4.u32l = TRUNC_W_S(ctx->f2.fl);
    // 0x0027C484: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x0027C488: trunc.w.s   $f4, $f3
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 3);
    ctx->f4.u32l = TRUNC_W_S(ctx->f3.fl);
    // 0x0027C48C: mfc1        $a3, $f4
    ctx->r7 = (int32_t)ctx->f4.u32l;
    // 0x0027C490: trunc.w.s   $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x0027C494: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    // 0x0027C498: jal         0x002883E0
    // 0x0027C49C: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    func_002883E0(rdram, ctx);
        goto after_3;
    // 0x0027C49C: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    after_3:
L_0027C4A0:
    // 0x0027C4A0: jal         0x00284188
    // 0x0027C4A4: nop

    func_00284188(rdram, ctx);
        goto after_4;
    // 0x0027C4A4: nop

    after_4:
    // 0x0027C4A8: bne         $v0, $zero, L_0027C4CC
    if (ctx->r2 != 0) {
        // 0x0027C4AC: addiu       $v0, $zero, 0xD
        ctx->r2 = ADD32(0, 0XD);
            goto L_0027C4CC;
    }
    // 0x0027C4AC: addiu       $v0, $zero, 0xD
    ctx->r2 = ADD32(0, 0XD);
    // 0x0027C4B0: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x0027C4B4: addiu       $a0, $a0, -0x5378
    ctx->r4 = ADD32(ctx->r4, -0X5378);
    // 0x0027C4B8: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x0027C4BC: bne         $v1, $v0, L_0027C4CC
    if (ctx->r3 != ctx->r2) {
        // 0x0027C4C0: addiu       $a0, $a0, -0x1418
        ctx->r4 = ADD32(ctx->r4, -0X1418);
            goto L_0027C4CC;
    }
    // 0x0027C4C0: addiu       $a0, $a0, -0x1418
    ctx->r4 = ADD32(ctx->r4, -0X1418);
    // 0x0027C4C4: jal         0x0025322C
    // 0x0027C4C8: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_0025322C(rdram, ctx);
        goto after_5;
    // 0x0027C4C8: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_5:
L_0027C4CC:
    // 0x0027C4CC: jal         0x00284284
    // 0x0027C4D0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00284284(rdram, ctx);
        goto after_6;
    // 0x0027C4D0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_6:
L_0027C4D4:
    // 0x0027C4D4: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x0027C4D8: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x0027C4DC: jr          $ra
    // 0x0027C4E0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x0027C4E0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_002851C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002851C0: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x002851C4: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x002851C8: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x002851CC: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x002851D0: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x002851D4: sdc1        $f20, 0x30($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X30, ctx->r29);
    // 0x002851D8: lw          $v0, 0xC8($s1)
    ctx->r2 = MEM_W(ctx->r17, 0XC8);
    // 0x002851DC: beq         $v0, $zero, L_002852EC
    if (ctx->r2 == 0) {
        // 0x002851E0: nop
    
            goto L_002852EC;
    }
    // 0x002851E0: nop

    // 0x002851E4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x002851E8: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x002851EC: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x002851F0: lw          $v0, 0xCC($s1)
    ctx->r2 = MEM_W(ctx->r17, 0XCC);
    // 0x002851F4: beql        $v0, $zero, L_00285234
    if (ctx->r2 == 0) {
        // 0x002851F8: sw          $zero, 0xD0($s1)
        MEM_W(0XD0, ctx->r17) = 0;
            goto L_00285234;
    }
    goto skip_0;
    // 0x002851F8: sw          $zero, 0xD0($s1)
    MEM_W(0XD0, ctx->r17) = 0;
    skip_0:
    // 0x002851FC: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x00285200: addiu       $v1, $v1, -0x535C
    ctx->r3 = ADD32(ctx->r3, -0X535C);
    // 0x00285204: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x00285208: bnel        $v0, $zero, L_00285234
    if (ctx->r2 != 0) {
        // 0x0028520C: sw          $zero, 0xD0($s1)
        MEM_W(0XD0, ctx->r17) = 0;
            goto L_00285234;
    }
    goto skip_1;
    // 0x0028520C: sw          $zero, 0xD0($s1)
    MEM_W(0XD0, ctx->r17) = 0;
    skip_1:
    // 0x00285210: lui         $v0, 0x8011
    ctx->r2 = S32(0X8011 << 16);
    // 0x00285214: lw          $v0, 0x28($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X28);
    // 0x00285218: bnel        $v0, $zero, L_00285234
    if (ctx->r2 != 0) {
        // 0x0028521C: sw          $zero, 0xD0($s1)
        MEM_W(0XD0, ctx->r17) = 0;
            goto L_00285234;
    }
    goto skip_2;
    // 0x0028521C: sw          $zero, 0xD0($s1)
    MEM_W(0XD0, ctx->r17) = 0;
    skip_2:
    // 0x00285220: lw          $v1, -0x18($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X18);
    // 0x00285224: addiu       $v0, $zero, 0xD
    ctx->r2 = ADD32(0, 0XD);
    // 0x00285228: beq         $v1, $v0, L_00285244
    if (ctx->r3 == ctx->r2) {
        // 0x0028522C: addiu       $s0, $s1, 0x140
        ctx->r16 = ADD32(ctx->r17, 0X140);
            goto L_00285244;
    }
    // 0x0028522C: addiu       $s0, $s1, 0x140
    ctx->r16 = ADD32(ctx->r17, 0X140);
    // 0x00285230: sw          $zero, 0xD0($s1)
    MEM_W(0XD0, ctx->r17) = 0;
L_00285234:
    // 0x00285234: jal         0x0026EDA8
    // 0x00285238: addiu       $a0, $s1, 0x140
    ctx->r4 = ADD32(ctx->r17, 0X140);
    func_0026EDA8(rdram, ctx);
        goto after_0;
    // 0x00285238: addiu       $a0, $s1, 0x140
    ctx->r4 = ADD32(ctx->r17, 0X140);
    after_0:
    // 0x0028523C: j           L_00285288
    // 0x00285240: nop

        goto L_00285288;
    // 0x00285240: nop

L_00285244:
    // 0x00285244: jal         0x0026ECF0
    // 0x00285248: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_0026ECF0(rdram, ctx);
        goto after_1;
    // 0x00285248: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x0028524C: lw          $a1, 0x8($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X8);
    // 0x00285250: lw          $a2, 0xC($s1)
    ctx->r6 = MEM_W(ctx->r17, 0XC);
    // 0x00285254: lw          $a3, 0x10($s1)
    ctx->r7 = MEM_W(ctx->r17, 0X10);
    // 0x00285258: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x0028525C: addiu       $a0, $a0, 0x5A50
    ctx->r4 = ADD32(ctx->r4, 0X5A50);
    // 0x00285260: jal         0x0026E760
    // 0x00285264: nop

    func_0026E760(rdram, ctx);
        goto after_2;
    // 0x00285264: nop

    after_2:
    // 0x00285268: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0028526C: lw          $a1, 0x10($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X10);
    // 0x00285270: lw          $a2, 0x14($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X14);
    // 0x00285274: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x00285278: jal         0x0026E760
    // 0x0028527C: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    func_0026E760(rdram, ctx);
        goto after_3;
    // 0x0028527C: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    after_3:
    // 0x00285280: add.s       $f20, $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = ctx->f20.fl + ctx->f0.fl;
    // 0x00285284: swc1        $f20, 0xD0($s1)
    MEM_W(0XD0, ctx->r17) = ctx->f20.u32l;
L_00285288:
    // 0x00285288: lw          $v0, 0xC8($s1)
    ctx->r2 = MEM_W(ctx->r17, 0XC8);
    // 0x0028528C: beq         $v0, $zero, L_002852EC
    if (ctx->r2 == 0) {
        // 0x00285290: nop
    
            goto L_002852EC;
    }
    // 0x00285290: nop

    // 0x00285294: lwc1        $f1, 0xD0($s1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r17, 0XD0);
    // 0x00285298: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x0028529C: c.eq.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl == ctx->f0.fl;
    // 0x002852A0: nop

    // 0x002852A4: bc1t        L_002852E4
    if (c1cs) {
        // 0x002852A8: nop
    
            goto L_002852E4;
    }
    // 0x002852A8: nop

    // 0x002852AC: lwc1        $f0, 0xD4($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0XD4);
    // 0x002852B0: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x002852B4: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x002852B8: lwc1        $f1, -0x6308($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, -0X6308);
    // 0x002852BC: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x002852C0: nop

    // 0x002852C4: bc1f        L_002852E4
    if (!c1cs) {
        // 0x002852C8: swc1        $f0, 0xD4($s1)
        MEM_W(0XD4, ctx->r17) = ctx->f0.u32l;
            goto L_002852E4;
    }
    // 0x002852C8: swc1        $f0, 0xD4($s1)
    MEM_W(0XD4, ctx->r17) = ctx->f0.u32l;
    // 0x002852CC: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x002852D0: addiu       $a0, $s1, 0xD8
    ctx->r4 = ADD32(ctx->r17, 0XD8);
    // 0x002852D4: jal         0x00298FD4
    // 0x002852D8: swc1        $f0, 0xD4($s1)
    MEM_W(0XD4, ctx->r17) = ctx->f0.u32l;
    func_00298FD4(rdram, ctx);
        goto after_4;
    // 0x002852D8: swc1        $f0, 0xD4($s1)
    MEM_W(0XD4, ctx->r17) = ctx->f0.u32l;
    after_4:
    // 0x002852DC: j           L_002852EC
    // 0x002852E0: nop

        goto L_002852EC;
    // 0x002852E0: nop

L_002852E4:
    // 0x002852E4: jal         0x00298E10
    // 0x002852E8: addiu       $a0, $s1, 0xD8
    ctx->r4 = ADD32(ctx->r17, 0XD8);
    func_00298E10(rdram, ctx);
        goto after_5;
    // 0x002852E8: addiu       $a0, $s1, 0xD8
    ctx->r4 = ADD32(ctx->r17, 0XD8);
    after_5:
L_002852EC:
    // 0x002852EC: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x002852F0: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x002852F4: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x002852F8: ldc1        $f20, 0x30($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X30);
    // 0x002852FC: jr          $ra
    // 0x00285300: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x00285300: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_00260920(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00260920: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x00260924: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x00260928: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0026092C: lwc1        $f20, 0x79C8($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X79C8);
    // 0x00260930: sdc1        $f21, 0x20($sp)
    CHECK_FR(ctx, 21);
    SD(ctx->f21.u64, 0X20, ctx->r29);
    // 0x00260934: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00260938: lwc1        $f21, 0x79CC($at)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r1, 0X79CC);
    // 0x0026093C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00260940: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x00260944: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x00260948: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    // 0x0026094C: jal         0x002119FC
    // 0x00260950: mov.s       $f14, $f21
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 21);
    ctx->f14.fl = ctx->f21.fl;
    func_002119FC(rdram, ctx);
        goto after_0;
    // 0x00260950: mov.s       $f14, $f21
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 21);
    ctx->f14.fl = ctx->f21.fl;
    after_0:
    // 0x00260954: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    // 0x00260958: mov.s       $f14, $f21
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 21);
    ctx->f14.fl = ctx->f21.fl;
    // 0x0026095C: jal         0x002119FC
    // 0x00260960: swc1        $f0, 0x6C($s0)
    MEM_W(0X6C, ctx->r16) = ctx->f0.u32l;
    func_002119FC(rdram, ctx);
        goto after_1;
    // 0x00260960: swc1        $f0, 0x6C($s0)
    MEM_W(0X6C, ctx->r16) = ctx->f0.u32l;
    after_1:
    // 0x00260964: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    // 0x00260968: mov.s       $f14, $f21
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 21);
    ctx->f14.fl = ctx->f21.fl;
    // 0x0026096C: jal         0x002119FC
    // 0x00260970: swc1        $f0, 0x70($s0)
    MEM_W(0X70, ctx->r16) = ctx->f0.u32l;
    func_002119FC(rdram, ctx);
        goto after_2;
    // 0x00260970: swc1        $f0, 0x70($s0)
    MEM_W(0X70, ctx->r16) = ctx->f0.u32l;
    after_2:
    // 0x00260974: swc1        $f0, 0x74($s0)
    MEM_W(0X74, ctx->r16) = ctx->f0.u32l;
    // 0x00260978: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x0026097C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00260980: ldc1        $f21, 0x20($sp)
    CHECK_FR(ctx, 21);
    ctx->f21.u64 = LD(ctx->r29, 0X20);
    // 0x00260984: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x00260988: jr          $ra
    // 0x0026098C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x0026098C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
