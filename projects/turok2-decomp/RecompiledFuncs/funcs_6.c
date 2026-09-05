#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_00267FD0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00267FD0: lw          $a1, 0x14($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X14);
    // 0x00267FD4: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x00267FD8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00267FDC: bne         $v1, $v0, L_0026800C
    if (ctx->r3 != ctx->r2) {
            // 0x00267FE0: nop

    func_0026800C(rdram, ctx);
    return;
    }
    // 0x00267FE0: nop

    // 0x00267FE4: lw          $v0, 0x144($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X144);
    // 0x00267FE8: blez        $v0, L_00268000
    if (SIGNED(ctx->r2) <= 0) {
        // 0x00267FEC: addu        $v1, $zero, $zero
        ctx->r3 = ADD32(0, 0);
            goto L_00268000;
    }
    // 0x00267FEC: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
    // 0x00267FF0: lw          $v0, 0x48($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X48);
    // 0x00267FF4: andi        $v0, $v0, 0x800
    ctx->r2 = ctx->r2 & 0X800;
    // 0x00267FF8: beq         $v0, $zero, L_00268004
    if (ctx->r2 == 0) {
        // 0x00267FFC: nop
    
            goto L_00268004;
    }
    // 0x00267FFC: nop

L_00268000:
    // 0x00268000: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_00268004:
    // 0x00268004: jr          $ra
    // 0x00268008: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
    return;
    // 0x00268008: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
;}
RECOMP_FUNC void func_002449E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002449E0: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x002449E4: sw          $s3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r19;
    // 0x002449E8: addu        $s3, $a0, $zero
    ctx->r19 = ADD32(ctx->r4, 0);
    // 0x002449EC: sw          $s2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r18;
    // 0x002449F0: addu        $s2, $a1, $zero
    ctx->r18 = ADD32(ctx->r5, 0);
    // 0x002449F4: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x002449F8: sw          $s4, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r20;
    // 0x002449FC: sw          $s1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r17;
    // 0x00244A00: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    // 0x00244A04: lb          $v1, 0xCA($s2)
    ctx->r3 = MEM_B(ctx->r18, 0XCA);
    // 0x00244A08: lui         $v0, 0x800F
    ctx->r2 = S32(0X800F << 16);
    // 0x00244A0C: lw          $v0, 0x7F78($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X7F78);
    // 0x00244A10: bne         $v1, $v0, L_00244A4C
    if (ctx->r3 != ctx->r2) {
        // 0x00244A14: addu        $s4, $a3, $zero
        ctx->r20 = ADD32(ctx->r7, 0);
            goto L_00244A4C;
    }
    // 0x00244A14: addu        $s4, $a3, $zero
    ctx->r20 = ADD32(ctx->r7, 0);
    // 0x00244A18: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
    // 0x00244A1C: lui         $v1, 0x4000
    ctx->r3 = S32(0X4000 << 16);
    // 0x00244A20: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x00244A24: beq         $v0, $zero, L_00244A38
    if (ctx->r2 == 0) {
        // 0x00244A28: addu        $a0, $s3, $zero
        ctx->r4 = ADD32(ctx->r19, 0);
            goto L_00244A38;
    }
    // 0x00244A28: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x00244A2C: lw          $v0, 0x78($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X78);
    // 0x00244A30: beq         $v0, $zero, L_00244A4C
    if (ctx->r2 == 0) {
        // 0x00244A34: nop
    
            goto L_00244A4C;
    }
    // 0x00244A34: nop

L_00244A38:
    // 0x00244A38: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x00244A3C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x00244A40: jal         0x00243C90
    // 0x00244A44: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_00243C90(rdram, ctx);
        goto after_0;
    // 0x00244A44: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_0:
    // 0x00244A48: sw          $v0, 0x80($s2)
    MEM_W(0X80, ctx->r18) = ctx->r2;
L_00244A4C:
    // 0x00244A4C: lw          $v0, 0x14($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X14);
    // 0x00244A50: lw          $v1, 0x0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X0);
    // 0x00244A54: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00244A58: bne         $v1, $v0, L_00244B90
    if (ctx->r3 != ctx->r2) {
        // 0x00244A5C: addiu       $v0, $zero, 0xB
        ctx->r2 = ADD32(0, 0XB);
            goto L_00244B90;
    }
    // 0x00244A5C: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
    // 0x00244A60: lb          $v1, 0x34($s2)
    ctx->r3 = MEM_B(ctx->r18, 0X34);
    // 0x00244A64: bne         $v1, $v0, L_00244B90
    if (ctx->r3 != ctx->r2) {
        // 0x00244A68: nop
    
            goto L_00244B90;
    }
    // 0x00244A68: nop

    // 0x00244A6C: lw          $v0, 0x4($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X4);
    // 0x00244A70: lw          $a0, 0x88($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X88);
    // 0x00244A74: bne         $v0, $zero, L_00244A84
    if (ctx->r2 != 0) {
        // 0x00244A78: nop
    
            goto L_00244A84;
    }
    // 0x00244A78: nop

    // 0x00244A7C: j           L_00244B78
    // 0x00244A80: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
        goto L_00244B78;
    // 0x00244A80: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
L_00244A84:
    // 0x00244A84: bne         $a0, $zero, L_00244AA0
    if (ctx->r4 != 0) {
        // 0x00244A88: nop
    
            goto L_00244AA0;
    }
    // 0x00244A88: nop

    // 0x00244A8C: lb          $v0, 0x94($s2)
    ctx->r2 = MEM_B(ctx->r18, 0X94);
    // 0x00244A90: beq         $v0, $zero, L_00244B78
    if (ctx->r2 == 0) {
        // 0x00244A94: addiu       $a0, $zero, 0x3
        ctx->r4 = ADD32(0, 0X3);
            goto L_00244B78;
    }
    // 0x00244A94: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    // 0x00244A98: j           L_00244B78
    // 0x00244A9C: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
        goto L_00244B78;
    // 0x00244A9C: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
L_00244AA0:
    // 0x00244AA0: lw          $v0, 0x68($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X68);
    // 0x00244AA4: bne         $a0, $v0, L_00244AB4
    if (ctx->r4 != ctx->r2) {
        // 0x00244AA8: nop
    
            goto L_00244AB4;
    }
    // 0x00244AA8: nop

    // 0x00244AAC: j           L_00244B78
    // 0x00244AB0: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
        goto L_00244B78;
    // 0x00244AB0: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
L_00244AB4:
    // 0x00244AB4: lw          $v0, 0x14($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X14);
    // 0x00244AB8: lw          $v1, 0x0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X0);
    // 0x00244ABC: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x00244AC0: bnel        $v1, $v0, L_00244AD0
    if (ctx->r3 != ctx->r2) {
        // 0x00244AC4: addiu       $v0, $zero, 0x64F
        ctx->r2 = ADD32(0, 0X64F);
            goto L_00244AD0;
    }
    goto skip_0;
    // 0x00244AC4: addiu       $v0, $zero, 0x64F
    ctx->r2 = ADD32(0, 0X64F);
    skip_0:
    // 0x00244AC8: j           L_00244B78
    // 0x00244ACC: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
        goto L_00244B78;
    // 0x00244ACC: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
L_00244AD0:
    // 0x00244AD0: lhu         $v1, 0xB8($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0XB8);
    // 0x00244AD4: bne         $v1, $v0, L_00244AE4
    if (ctx->r3 != ctx->r2) {
        // 0x00244AD8: nop
    
            goto L_00244AE4;
    }
    // 0x00244AD8: nop

    // 0x00244ADC: j           L_00244B78
    // 0x00244AE0: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
        goto L_00244B78;
    // 0x00244AE0: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
L_00244AE4:
    // 0x00244AE4: lui         $v0, 0x8011
    ctx->r2 = S32(0X8011 << 16);
    // 0x00244AE8: lw          $v0, 0x1C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1C);
    // 0x00244AEC: bnel        $v0, $zero, L_00244B78
    if (ctx->r2 != 0) {
        // 0x00244AF0: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_00244B78;
    }
    goto skip_1;
    // 0x00244AF0: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    skip_1:
    // 0x00244AF4: lw          $v0, 0xD4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XD4);
    // 0x00244AF8: lui         $v1, 0x30
    ctx->r3 = S32(0X30 << 16);
    // 0x00244AFC: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x00244B00: beq         $v0, $zero, L_00244B58
    if (ctx->r2 == 0) {
        // 0x00244B04: nop
    
            goto L_00244B58;
    }
    // 0x00244B04: nop

    // 0x00244B08: lw          $a0, 0x1A8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1A8);
    // 0x00244B0C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x00244B10: lwc1        $f1, 0xAAC($a0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r4, 0XAAC);
    // 0x00244B14: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x00244B18: nop

    // 0x00244B1C: bc1f        L_00244B40
    if (!c1cs) {
        // 0x00244B20: addiu       $v0, $zero, 0xCA
        ctx->r2 = ADD32(0, 0XCA);
            goto L_00244B40;
    }
    // 0x00244B20: addiu       $v0, $zero, 0xCA
    ctx->r2 = ADD32(0, 0XCA);
    // 0x00244B24: lhu         $v1, 0xB8($s3)
    ctx->r3 = MEM_HU(ctx->r19, 0XB8);
    // 0x00244B28: bnel        $v1, $v0, L_00244B78
    if (ctx->r3 != ctx->r2) {
        // 0x00244B2C: addiu       $a0, $zero, 0x1
        ctx->r4 = ADD32(0, 0X1);
            goto L_00244B78;
    }
    goto skip_2;
    // 0x00244B2C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    skip_2:
    // 0x00244B30: lh          $v1, 0x996($a0)
    ctx->r3 = MEM_H(ctx->r4, 0X996);
    // 0x00244B34: addiu       $v0, $zero, 0x14
    ctx->r2 = ADD32(0, 0X14);
    // 0x00244B38: bnel        $v1, $v0, L_00244B78
    if (ctx->r3 != ctx->r2) {
        // 0x00244B3C: addiu       $a0, $zero, 0x1
        ctx->r4 = ADD32(0, 0X1);
            goto L_00244B78;
    }
    goto skip_3;
    // 0x00244B3C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    skip_3:
L_00244B40:
    // 0x00244B40: lw          $v0, 0xB38($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XB38);
    // 0x00244B44: bne         $v0, $s3, L_00244B58
    if (ctx->r2 != ctx->r19) {
        // 0x00244B48: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_00244B58;
    }
    // 0x00244B48: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x00244B4C: lw          $v1, 0xB2C($a0)
    ctx->r3 = MEM_W(ctx->r4, 0XB2C);
    // 0x00244B50: beq         $v1, $v0, L_00244B78
    if (ctx->r3 == ctx->r2) {
        // 0x00244B54: addiu       $a0, $zero, 0x1
        ctx->r4 = ADD32(0, 0X1);
            goto L_00244B78;
    }
    // 0x00244B54: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
L_00244B58:
    // 0x00244B58: lw          $v0, 0x27C($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X27C);
    // 0x00244B5C: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x00244B60: beq         $v0, $zero, L_00244B74
    if (ctx->r2 == 0) {
        // 0x00244B64: addiu       $v0, $zero, 0xCA
        ctx->r2 = ADD32(0, 0XCA);
            goto L_00244B74;
    }
    // 0x00244B64: addiu       $v0, $zero, 0xCA
    ctx->r2 = ADD32(0, 0XCA);
    // 0x00244B68: lhu         $v1, 0xB8($s3)
    ctx->r3 = MEM_HU(ctx->r19, 0XB8);
    // 0x00244B6C: bne         $v1, $v0, L_00244B78
    if (ctx->r3 != ctx->r2) {
        // 0x00244B70: addiu       $a0, $zero, 0x1
        ctx->r4 = ADD32(0, 0X1);
            goto L_00244B78;
    }
    // 0x00244B70: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
L_00244B74:
    // 0x00244B74: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
L_00244B78:
    // 0x00244B78: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x00244B7C: bne         $a0, $v0, L_00244B90
    if (ctx->r4 != ctx->r2) {
        // 0x00244B80: addiu       $s0, $zero, 0x4
        ctx->r16 = ADD32(0, 0X4);
            goto L_00244B90;
    }
    // 0x00244B80: addiu       $s0, $zero, 0x4
    ctx->r16 = ADD32(0, 0X4);
    // 0x00244B84: lw          $s1, 0x88($s2)
    ctx->r17 = MEM_W(ctx->r18, 0X88);
    // 0x00244B88: j           L_00244C84
    // 0x00244B8C: nop

        goto L_00244C84;
    // 0x00244B8C: nop

L_00244B90:
    // 0x00244B90: lw          $v0, 0x4($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X4);
    // 0x00244B94: lw          $s1, 0x80($s2)
    ctx->r17 = MEM_W(ctx->r18, 0X80);
    // 0x00244B98: beq         $v0, $zero, L_00244C84
    if (ctx->r2 == 0) {
        // 0x00244B9C: addiu       $s0, $zero, 0x6
        ctx->r16 = ADD32(0, 0X6);
            goto L_00244C84;
    }
    // 0x00244B9C: addiu       $s0, $zero, 0x6
    ctx->r16 = ADD32(0, 0X6);
    // 0x00244BA0: bne         $s1, $zero, L_00244BBC
    if (ctx->r17 != 0) {
        // 0x00244BA4: nop
    
            goto L_00244BBC;
    }
    // 0x00244BA4: nop

    // 0x00244BA8: lb          $v0, 0x94($s2)
    ctx->r2 = MEM_B(ctx->r18, 0X94);
    // 0x00244BAC: beq         $v0, $zero, L_00244C84
    if (ctx->r2 == 0) {
        // 0x00244BB0: addiu       $s0, $zero, 0x3
        ctx->r16 = ADD32(0, 0X3);
            goto L_00244C84;
    }
    // 0x00244BB0: addiu       $s0, $zero, 0x3
    ctx->r16 = ADD32(0, 0X3);
    // 0x00244BB4: j           L_00244C84
    // 0x00244BB8: addiu       $s0, $zero, 0x4
    ctx->r16 = ADD32(0, 0X4);
        goto L_00244C84;
    // 0x00244BB8: addiu       $s0, $zero, 0x4
    ctx->r16 = ADD32(0, 0X4);
L_00244BBC:
    // 0x00244BBC: lw          $v0, 0x68($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X68);
    // 0x00244BC0: beq         $s1, $v0, L_00244C84
    if (ctx->r17 == ctx->r2) {
        // 0x00244BC4: addiu       $s0, $zero, 0x2
        ctx->r16 = ADD32(0, 0X2);
            goto L_00244C84;
    }
    // 0x00244BC4: addiu       $s0, $zero, 0x2
    ctx->r16 = ADD32(0, 0X2);
    // 0x00244BC8: lw          $v0, 0x14($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X14);
    // 0x00244BCC: lw          $v1, 0x0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X0);
    // 0x00244BD0: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x00244BD4: bnel        $v1, $v0, L_00244BE4
    if (ctx->r3 != ctx->r2) {
        // 0x00244BD8: addiu       $v0, $zero, 0x64F
        ctx->r2 = ADD32(0, 0X64F);
            goto L_00244BE4;
    }
    goto skip_4;
    // 0x00244BD8: addiu       $v0, $zero, 0x64F
    ctx->r2 = ADD32(0, 0X64F);
    skip_4:
    // 0x00244BDC: j           L_00244C84
    // 0x00244BE0: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
        goto L_00244C84;
    // 0x00244BE0: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
L_00244BE4:
    // 0x00244BE4: lhu         $v1, 0xB8($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0XB8);
    // 0x00244BE8: beq         $v1, $v0, L_00244C84
    if (ctx->r3 == ctx->r2) {
        // 0x00244BEC: addiu       $s0, $zero, 0x7
        ctx->r16 = ADD32(0, 0X7);
            goto L_00244C84;
    }
    // 0x00244BEC: addiu       $s0, $zero, 0x7
    ctx->r16 = ADD32(0, 0X7);
    // 0x00244BF0: lui         $v0, 0x8011
    ctx->r2 = S32(0X8011 << 16);
    // 0x00244BF4: lw          $v0, 0x1C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1C);
    // 0x00244BF8: bne         $v0, $zero, L_00244C84
    if (ctx->r2 != 0) {
        // 0x00244BFC: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_00244C84;
    }
    // 0x00244BFC: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x00244C00: lw          $v0, 0xD4($s1)
    ctx->r2 = MEM_W(ctx->r17, 0XD4);
    // 0x00244C04: lui         $v1, 0x30
    ctx->r3 = S32(0X30 << 16);
    // 0x00244C08: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x00244C0C: beq         $v0, $zero, L_00244C64
    if (ctx->r2 == 0) {
        // 0x00244C10: nop
    
            goto L_00244C64;
    }
    // 0x00244C10: nop

    // 0x00244C14: lw          $a0, 0x1A8($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X1A8);
    // 0x00244C18: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x00244C1C: lwc1        $f1, 0xAAC($a0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r4, 0XAAC);
    // 0x00244C20: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x00244C24: nop

    // 0x00244C28: bc1f        L_00244C4C
    if (!c1cs) {
        // 0x00244C2C: addiu       $v0, $zero, 0xCA
        ctx->r2 = ADD32(0, 0XCA);
            goto L_00244C4C;
    }
    // 0x00244C2C: addiu       $v0, $zero, 0xCA
    ctx->r2 = ADD32(0, 0XCA);
    // 0x00244C30: lhu         $v1, 0xB8($s3)
    ctx->r3 = MEM_HU(ctx->r19, 0XB8);
    // 0x00244C34: bne         $v1, $v0, L_00244C84
    if (ctx->r3 != ctx->r2) {
        // 0x00244C38: addiu       $s0, $zero, 0x1
        ctx->r16 = ADD32(0, 0X1);
            goto L_00244C84;
    }
    // 0x00244C38: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
    // 0x00244C3C: lh          $v1, 0x996($a0)
    ctx->r3 = MEM_H(ctx->r4, 0X996);
    // 0x00244C40: addiu       $v0, $zero, 0x14
    ctx->r2 = ADD32(0, 0X14);
    // 0x00244C44: bne         $v1, $v0, L_00244C84
    if (ctx->r3 != ctx->r2) {
        // 0x00244C48: nop
    
            goto L_00244C84;
    }
    // 0x00244C48: nop

L_00244C4C:
    // 0x00244C4C: lw          $v0, 0xB38($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XB38);
    // 0x00244C50: bne         $v0, $s3, L_00244C64
    if (ctx->r2 != ctx->r19) {
        // 0x00244C54: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_00244C64;
    }
    // 0x00244C54: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x00244C58: lw          $v1, 0xB2C($a0)
    ctx->r3 = MEM_W(ctx->r4, 0XB2C);
    // 0x00244C5C: beq         $v1, $v0, L_00244C84
    if (ctx->r3 == ctx->r2) {
        // 0x00244C60: addiu       $s0, $zero, 0x1
        ctx->r16 = ADD32(0, 0X1);
            goto L_00244C84;
    }
    // 0x00244C60: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
L_00244C64:
    // 0x00244C64: lw          $v0, 0x27C($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X27C);
    // 0x00244C68: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x00244C6C: beq         $v0, $zero, L_00244C80
    if (ctx->r2 == 0) {
        // 0x00244C70: addiu       $v0, $zero, 0xCA
        ctx->r2 = ADD32(0, 0XCA);
            goto L_00244C80;
    }
    // 0x00244C70: addiu       $v0, $zero, 0xCA
    ctx->r2 = ADD32(0, 0XCA);
    // 0x00244C74: lhu         $v1, 0xB8($s3)
    ctx->r3 = MEM_HU(ctx->r19, 0XB8);
    // 0x00244C78: bne         $v1, $v0, L_00244C84
    if (ctx->r3 != ctx->r2) {
        // 0x00244C7C: addiu       $s0, $zero, 0x1
        ctx->r16 = ADD32(0, 0X1);
            goto L_00244C84;
    }
    // 0x00244C7C: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
L_00244C80:
    // 0x00244C80: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
L_00244C84:
    // 0x00244C84: beq         $s1, $zero, L_00244CAC
    if (ctx->r17 == 0) {
        // 0x00244C88: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_00244CAC;
    }
    // 0x00244C88: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x00244C8C: lw          $t0, 0x4($s1)
    ctx->r8 = MEM_W(ctx->r17, 0X4);
    // 0x00244C90: lw          $t1, 0x8($s1)
    ctx->r9 = MEM_W(ctx->r17, 0X8);
    // 0x00244C94: lw          $t2, 0xC($s1)
    ctx->r10 = MEM_W(ctx->r17, 0XC);
    // 0x00244C98: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x00244C9C: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x00244CA0: sw          $t2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r10;
    // 0x00244CA4: j           L_00244D20
    // 0x00244CA8: nop

        goto L_00244D20;
    // 0x00244CA8: nop

L_00244CAC:
    // 0x00244CAC: beq         $s0, $v0, L_00244CE0
    if (ctx->r16 == ctx->r2) {
        // 0x00244CB0: slti        $v0, $s0, 0x5
        ctx->r2 = SIGNED(ctx->r16) < 0X5 ? 1 : 0;
            goto L_00244CE0;
    }
    // 0x00244CB0: slti        $v0, $s0, 0x5
    ctx->r2 = SIGNED(ctx->r16) < 0X5 ? 1 : 0;
    // 0x00244CB4: beq         $v0, $zero, L_00244CCC
    if (ctx->r2 == 0) {
        // 0x00244CB8: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_00244CCC;
    }
    // 0x00244CB8: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x00244CBC: beq         $s0, $v0, L_00244D3C
    if (ctx->r16 == ctx->r2) {
        // 0x00244CC0: nop
    
            goto L_00244D3C;
    }
    // 0x00244CC0: nop

    // 0x00244CC4: j           L_00244D84
    // 0x00244CC8: nop

        goto L_00244D84;
    // 0x00244CC8: nop

L_00244CCC:
    // 0x00244CCC: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x00244CD0: beq         $s0, $v0, L_00244D68
    if (ctx->r16 == ctx->r2) {
        // 0x00244CD4: nop
    
            goto L_00244D68;
    }
    // 0x00244CD4: nop

    // 0x00244CD8: j           L_00244D84
    // 0x00244CDC: nop

        goto L_00244D84;
    // 0x00244CDC: nop

L_00244CE0:
    // 0x00244CE0: jal         0x0028479C
    // 0x00244CE4: addiu       $a0, $s2, 0x94
    ctx->r4 = ADD32(ctx->r18, 0X94);
    func_0028479C(rdram, ctx);
        goto after_1;
    // 0x00244CE4: addiu       $a0, $s2, 0x94
    ctx->r4 = ADD32(ctx->r18, 0X94);
    after_1:
    // 0x00244CE8: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x00244CEC: lw          $t0, 0x0($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X0);
    // 0x00244CF0: lw          $t1, 0x4($v1)
    ctx->r9 = MEM_W(ctx->r3, 0X4);
    // 0x00244CF4: lw          $t2, 0x8($v1)
    ctx->r10 = MEM_W(ctx->r3, 0X8);
    // 0x00244CF8: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x00244CFC: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x00244D00: sw          $t2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r10;
    // 0x00244D04: lhu         $v0, 0x14($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X14);
    // 0x00244D08: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x00244D0C: beq         $v0, $zero, L_00244D20
    if (ctx->r2 == 0) {
        // 0x00244D10: nop
    
            goto L_00244D20;
    }
    // 0x00244D10: nop

    // 0x00244D14: lwc1        $f0, 0x10($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X10);
    // 0x00244D18: j           L_00244D58
    // 0x00244D1C: nop

        goto L_00244D58;
    // 0x00244D1C: nop

L_00244D20:
    // 0x00244D20: lw          $a1, 0x10($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X10);
    // 0x00244D24: lw          $a2, 0x14($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X14);
    // 0x00244D28: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x00244D2C: jal         0x00246310
    // 0x00244D30: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    func_00246310(rdram, ctx);
        goto after_2;
    // 0x00244D30: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    after_2:
    // 0x00244D34: j           L_00244D84
    // 0x00244D38: swc1        $f0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f0.u32l;
        goto L_00244D84;
    // 0x00244D38: swc1        $f0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f0.u32l;
L_00244D3C:
    // 0x00244D3C: lw          $t0, 0xAC($s2)
    ctx->r8 = MEM_W(ctx->r18, 0XAC);
    // 0x00244D40: lw          $t1, 0xB0($s2)
    ctx->r9 = MEM_W(ctx->r18, 0XB0);
    // 0x00244D44: lw          $t2, 0xB4($s2)
    ctx->r10 = MEM_W(ctx->r18, 0XB4);
    // 0x00244D48: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x00244D4C: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x00244D50: sw          $t2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r10;
    // 0x00244D54: lwc1        $f0, 0x98($s2)
    ctx->f0.u32l = MEM_W(ctx->r18, 0X98);
L_00244D58:
    // 0x00244D58: lwc1        $f1, 0x50($s3)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r19, 0X50);
    // 0x00244D5C: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x00244D60: j           L_00244D84
    // 0x00244D64: swc1        $f0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f0.u32l;
        goto L_00244D84;
    // 0x00244D64: swc1        $f0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f0.u32l;
L_00244D68:
    // 0x00244D68: lw          $t0, 0x4($s3)
    ctx->r8 = MEM_W(ctx->r19, 0X4);
    // 0x00244D6C: lw          $t1, 0x8($s3)
    ctx->r9 = MEM_W(ctx->r19, 0X8);
    // 0x00244D70: lw          $t2, 0xC($s3)
    ctx->r10 = MEM_W(ctx->r19, 0XC);
    // 0x00244D74: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x00244D78: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x00244D7C: sw          $t2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r10;
    // 0x00244D80: sw          $zero, 0x30($sp)
    MEM_W(0X30, ctx->r29) = 0;
L_00244D84:
    // 0x00244D84: jal         0x00210EF0
    // 0x00244D88: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    func_00210EF0(rdram, ctx);
        goto after_3;
    // 0x00244D88: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    after_3:
    // 0x00244D8C: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    // 0x00244D90: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x00244D94: jal         0x0020EF2C
    // 0x00244D98: addiu       $a2, $s3, 0x4
    ctx->r6 = ADD32(ctx->r19, 0X4);
    func_0020EF2C(rdram, ctx);
        goto after_4;
    // 0x00244D98: addiu       $a2, $s3, 0x4
    ctx->r6 = ADD32(ctx->r19, 0X4);
    after_4:
    // 0x00244D9C: lwc1        $f0, 0x30($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X30);
    // 0x00244DA0: sw          $s0, 0x0($s4)
    MEM_W(0X0, ctx->r20) = ctx->r16;
    // 0x00244DA4: sw          $s1, 0x4($s4)
    MEM_W(0X4, ctx->r20) = ctx->r17;
    // 0x00244DA8: swc1        $f0, 0x8($s4)
    MEM_W(0X8, ctx->r20) = ctx->f0.u32l;
    // 0x00244DAC: lw          $t0, 0x10($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X10);
    // 0x00244DB0: lw          $t1, 0x14($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X14);
    // 0x00244DB4: lw          $t2, 0x18($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X18);
    // 0x00244DB8: sw          $t0, 0xC($s4)
    MEM_W(0XC, ctx->r20) = ctx->r8;
    // 0x00244DBC: sw          $t1, 0x10($s4)
    MEM_W(0X10, ctx->r20) = ctx->r9;
    // 0x00244DC0: sw          $t2, 0x14($s4)
    MEM_W(0X14, ctx->r20) = ctx->r10;
    // 0x00244DC4: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x00244DC8: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x00244DCC: lw          $t2, 0x28($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X28);
    // 0x00244DD0: sw          $t0, 0x18($s4)
    MEM_W(0X18, ctx->r20) = ctx->r8;
    // 0x00244DD4: sw          $t1, 0x1C($s4)
    MEM_W(0X1C, ctx->r20) = ctx->r9;
    // 0x00244DD8: sw          $t2, 0x20($s4)
    MEM_W(0X20, ctx->r20) = ctx->r10;
    // 0x00244DDC: lwc1        $f1, 0x20($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x00244DE0: mul.s       $f1, $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f1.fl);
    // 0x00244DE4: lwc1        $f0, 0x24($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X24);
    // 0x00244DE8: mul.s       $f0, $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x00244DEC: lwc1        $f12, 0x28($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X28);
    // 0x00244DF0: mul.s       $f12, $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x00244DF4: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x00244DF8: jal         0x00298470
    // 0x00244DFC: add.s       $f12, $f1, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = ctx->f1.fl + ctx->f12.fl;
    func_00298470(rdram, ctx);
        goto after_5;
    // 0x00244DFC: add.s       $f12, $f1, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = ctx->f1.fl + ctx->f12.fl;
    after_5:
    // 0x00244E00: swc1        $f0, 0x24($s4)
    MEM_W(0X24, ctx->r20) = ctx->f0.u32l;
    // 0x00244E04: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x00244E08: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x00244E0C: lw          $t0, 0x10($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X10);
    // 0x00244E10: lw          $t1, 0x14($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X14);
    // 0x00244E14: lw          $t2, 0x18($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X18);
    // 0x00244E18: sw          $t0, 0x28($s4)
    MEM_W(0X28, ctx->r20) = ctx->r8;
    // 0x00244E1C: sw          $t1, 0x2C($s4)
    MEM_W(0X2C, ctx->r20) = ctx->r9;
    // 0x00244E20: sw          $t2, 0x30($s4)
    MEM_W(0X30, ctx->r20) = ctx->r10;
    // 0x00244E24: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x00244E28: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x00244E2C: lw          $t2, 0x28($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X28);
    // 0x00244E30: sw          $t0, 0x34($s4)
    MEM_W(0X34, ctx->r20) = ctx->r8;
    // 0x00244E34: sw          $t1, 0x38($s4)
    MEM_W(0X38, ctx->r20) = ctx->r9;
    // 0x00244E38: sw          $t2, 0x3C($s4)
    MEM_W(0X3C, ctx->r20) = ctx->r10;
    // 0x00244E3C: lwc1        $f1, 0x20($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x00244E40: mul.s       $f1, $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f1.fl);
    // 0x00244E44: lwc1        $f0, 0x24($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X24);
    // 0x00244E48: mul.s       $f0, $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x00244E4C: lwc1        $f12, 0x28($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X28);
    // 0x00244E50: mul.s       $f12, $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x00244E54: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x00244E58: jal         0x00298470
    // 0x00244E5C: add.s       $f12, $f1, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = ctx->f1.fl + ctx->f12.fl;
    func_00298470(rdram, ctx);
        goto after_6;
    // 0x00244E5C: add.s       $f12, $f1, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = ctx->f1.fl + ctx->f12.fl;
    after_6:
    // 0x00244E60: swc1        $f0, 0x40($s4)
    MEM_W(0X40, ctx->r20) = ctx->f0.u32l;
    // 0x00244E64: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x00244E68: lw          $s4, 0x48($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X48);
    // 0x00244E6C: lw          $s3, 0x44($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X44);
    // 0x00244E70: lw          $s2, 0x40($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X40);
    // 0x00244E74: lw          $s1, 0x3C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X3C);
    // 0x00244E78: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x00244E7C: jr          $ra
    // 0x00244E80: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x00244E80: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_00254704(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00254704: lwc1        $f1, 0xA30($a0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r4, 0XA30);
    // 0x00254708: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x0025470C: c.lt.s      $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f2.fl < ctx->f1.fl;
    // 0x00254710: nop

    // 0x00254714: bc1f        L_0025473C
    if (!c1cs) {
        // 0x00254718: nop
    
            goto L_0025473C;
    }
    // 0x00254718: nop

    // 0x0025471C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00254720: lwc1        $f0, 0x6D28($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6D28);
    // 0x00254724: sub.s       $f0, $f1, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f1.fl - ctx->f0.fl;
    // 0x00254728: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x0025472C: nop

    // 0x00254730: bc1f        L_0025473C
    if (!c1cs) {
        // 0x00254734: swc1        $f0, 0xA30($a0)
        MEM_W(0XA30, ctx->r4) = ctx->f0.u32l;
            goto L_0025473C;
    }
    // 0x00254734: swc1        $f0, 0xA30($a0)
    MEM_W(0XA30, ctx->r4) = ctx->f0.u32l;
    // 0x00254738: swc1        $f2, 0xA30($a0)
    MEM_W(0XA30, ctx->r4) = ctx->f2.u32l;
L_0025473C:
    // 0x0025473C: jr          $ra
    // 0x00254740: nop

    return;
    // 0x00254740: nop

;}
RECOMP_FUNC void func_00417F9C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00417F9C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00417FA0: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x00417FA4: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00417FA8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00417FAC: lw          $v0, 0x1C($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X1C);
    // 0x00417FB0: lw          $v0, 0x518($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X518);
    // 0x00417FB4: lbu         $s1, 0x32($v0)
    ctx->r17 = MEM_BU(ctx->r2, 0X32);
    // 0x00417FB8: bne         $s1, $zero, L_00417FD0
    if (ctx->r17 != 0) {
        // 0x00417FBC: addu        $s0, $a0, $zero
        ctx->r16 = ADD32(ctx->r4, 0);
            goto L_00417FD0;
    }
    // 0x00417FBC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x00417FC0: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00417FC4: addiu       $v0, $v0, 0x41F0
    ctx->r2 = ADD32(ctx->r2, 0X41F0);
    // 0x00417FC8: j           L_00418078
    // 0x00417FCC: sw          $v0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r2;
        goto L_00418078;
    // 0x00417FCC: sw          $v0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r2;
L_00417FD0:
    // 0x00417FD0: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x00417FD4: bne         $s1, $v0, L_00417FEC
    if (ctx->r17 != ctx->r2) {
        // 0x00417FD8: nop
    
            goto L_00417FEC;
    }
    // 0x00417FD8: nop

    // 0x00417FDC: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00417FE0: addiu       $v0, $v0, 0x4200
    ctx->r2 = ADD32(ctx->r2, 0X4200);
    // 0x00417FE4: j           L_00418078
    // 0x00417FE8: sw          $v0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r2;
        goto L_00418078;
    // 0x00417FE8: sw          $v0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r2;
L_00417FEC:
    // 0x00417FEC: lw          $v0, 0x20($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X20);
    // 0x00417FF0: lb          $v1, 0x4($v0)
    ctx->r3 = MEM_B(ctx->r2, 0X4);
    // 0x00417FF4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00417FF8: beq         $v1, $v0, L_00418028
    if (ctx->r3 == ctx->r2) {
        // 0x00417FFC: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_00418028;
    }
    // 0x00417FFC: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x00418000: bne         $v0, $zero, L_00418018
    if (ctx->r2 != 0) {
        // 0x00418004: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_00418018;
    }
    // 0x00418004: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x00418008: beq         $v1, $v0, L_00418038
    if (ctx->r3 == ctx->r2) {
        // 0x0041800C: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_00418038;
    }
    // 0x0041800C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x00418010: beq         $v1, $v0, L_00418048
    if (ctx->r3 == ctx->r2) {
        // 0x00418014: nop
    
            goto L_00418048;
    }
    // 0x00418014: nop

L_00418018:
    // 0x00418018: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0041801C: addiu       $v0, $v0, 0x41B0
    ctx->r2 = ADD32(ctx->r2, 0X41B0);
    // 0x00418020: j           L_00418054
    // 0x00418024: sw          $v0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r2;
        goto L_00418054;
    // 0x00418024: sw          $v0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r2;
L_00418028:
    // 0x00418028: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0041802C: addiu       $v0, $v0, 0x41C0
    ctx->r2 = ADD32(ctx->r2, 0X41C0);
    // 0x00418030: j           L_00418054
    // 0x00418034: sw          $v0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r2;
        goto L_00418054;
    // 0x00418034: sw          $v0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r2;
L_00418038:
    // 0x00418038: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0041803C: addiu       $v0, $v0, 0x41D0
    ctx->r2 = ADD32(ctx->r2, 0X41D0);
    // 0x00418040: j           L_00418054
    // 0x00418044: sw          $v0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r2;
        goto L_00418054;
    // 0x00418044: sw          $v0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r2;
L_00418048:
    // 0x00418048: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0041804C: addiu       $v0, $v0, 0x41E0
    ctx->r2 = ADD32(ctx->r2, 0X41E0);
    // 0x00418050: sw          $v0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r2;
L_00418054:
    // 0x00418054: jal         0x004160F0
    // 0x00418058: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_004160F0(rdram, ctx);
        goto after_0;
    // 0x00418058: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x0041805C: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x00418060: addiu       $v0, $v0, -0x2
    ctx->r2 = ADD32(ctx->r2, -0X2);
    // 0x00418064: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x00418068: addiu       $a1, $a1, 0xE7C
    ctx->r5 = ADD32(ctx->r5, 0XE7C);
    // 0x0041806C: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    // 0x00418070: jal         0x0029E3E0
    // 0x00418074: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    func_0029E3E0(rdram, ctx);
        goto after_1;
    // 0x00418074: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    after_1:
L_00418078:
    // 0x00418078: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x0041807C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00418080: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00418084: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x00418088: jr          $ra
    // 0x0041808C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x0041808C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_00284390(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00284390: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x00284394: lw          $v1, 0x1BB0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X1BB0);
    // 0x00284398: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0028439C: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x002843A0: lw          $v0, 0x38($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X38);
    // 0x002843A4: beq         $v0, $zero, L_002843C0
    if (ctx->r2 == 0) {
        // 0x002843A8: nop
    
            goto L_002843C0;
    }
    // 0x002843A8: nop

    // 0x002843AC: lwc1        $f12, 0x1C($v1)
    ctx->f12.u32l = MEM_W(ctx->r3, 0X1C);
    // 0x002843B0: jal         0x00410BB4
    // 0x002843B4: nop

    func_00410BB4(rdram, ctx);
        goto after_0;
    // 0x002843B4: nop

    after_0:
    // 0x002843B8: j           L_002843C8
    // 0x002843BC: nop

        goto L_002843C8;
    // 0x002843BC: nop

L_002843C0:
    // 0x002843C0: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x002843C4: lwc1        $f0, -0x632C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X632C);
L_002843C8:
    // 0x002843C8: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x002843CC: jr          $ra
    // 0x002843D0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x002843D0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00226024(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00226024: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x00226028: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x0022602C: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x00226030: addu        $at, $a0, $at
    ctx->r1 = ADD32(ctx->r4, ctx->r1);
    // 0x00226034: lw          $v0, -0x7050($at)
    ctx->r2 = MEM_W(ctx->r1, -0X7050);
    // 0x00226038: beq         $v0, $zero, L_00226128
    if (ctx->r2 == 0) {
        // 0x0022603C: nop
    
            goto L_00226128;
    }
    // 0x0022603C: nop

    // 0x00226040: bltz        $v0, L_00226128
    if (SIGNED(ctx->r2) < 0) {
        // 0x00226044: slti        $v0, $v0, 0x3
        ctx->r2 = SIGNED(ctx->r2) < 0X3 ? 1 : 0;
            goto L_00226128;
    }
    // 0x00226044: slti        $v0, $v0, 0x3
    ctx->r2 = SIGNED(ctx->r2) < 0X3 ? 1 : 0;
    // 0x00226048: beq         $v0, $zero, L_00226128
    if (ctx->r2 == 0) {
        // 0x0022604C: nop
    
            goto L_00226128;
    }
    // 0x0022604C: nop

    // 0x00226050: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x00226054: addiu       $v1, $v1, -0x3218
    ctx->r3 = ADD32(ctx->r3, -0X3218);
    // 0x00226058: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x0022605C: addu        $at, $a0, $at
    ctx->r1 = ADD32(ctx->r4, ctx->r1);
    // 0x00226060: lw          $v0, -0x7054($at)
    ctx->r2 = MEM_W(ctx->r1, -0X7054);
    // 0x00226064: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x00226068: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x0022606C: addu        $v1, $v0, $v1
    ctx->r3 = ADD32(ctx->r2, ctx->r3);
    // 0x00226070: lwc1        $f1, 0x0($v1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r3, 0X0);
    // 0x00226074: c.eq.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl == ctx->f0.fl;
    // 0x00226078: nop

    // 0x0022607C: bc1t        L_00226128
    if (c1cs) {
        // 0x00226080: nop
    
            goto L_00226128;
    }
    // 0x00226080: nop

    // 0x00226084: lbu         $v0, 0x4($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X4);
    // 0x00226088: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0022608C: lwc1        $f0, 0x6004($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6004);
    // 0x00226090: sb          $v0, 0x18($sp)
    MEM_B(0X18, ctx->r29) = ctx->r2;
    // 0x00226094: lbu         $v0, 0x5($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X5);
    // 0x00226098: sb          $v0, 0x19($sp)
    MEM_B(0X19, ctx->r29) = ctx->r2;
    // 0x0022609C: lbu         $v0, 0x6($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X6);
    // 0x002260A0: sb          $v0, 0x1A($sp)
    MEM_B(0X1A, ctx->r29) = ctx->r2;
    // 0x002260A4: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x002260A8: addu        $at, $a0, $at
    ctx->r1 = ADD32(ctx->r4, ctx->r1);
    // 0x002260AC: lwc1        $f1, -0x704C($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, -0X704C);
    // 0x002260B0: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x002260B4: lwc1        $f0, 0x0($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X0);
    // 0x002260B8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002260BC: lwc1        $f2, 0x6008($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X6008);
    // 0x002260C0: div.s       $f0, $f1, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = DIV_S(ctx->f1.fl, ctx->f0.fl);
    // 0x002260C4: c.le.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl <= ctx->f0.fl;
    // 0x002260C8: nop

    // 0x002260CC: bc1tl       L_002260E4
    if (c1cs) {
        // 0x002260D0: sub.s       $f0, $f0, $f2
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f2.fl;
            goto L_002260E4;
    }
    goto skip_0;
    // 0x002260D0: sub.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f2.fl;
    skip_0:
    // 0x002260D4: trunc.w.s   $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(3 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x002260D8: mfc1        $a0, $f3
    ctx->r4 = (int32_t)ctx->f_odd[(3 - 1) * 2];
    // 0x002260DC: j           L_002260F8
    // 0x002260E0: sb          $a0, 0x1B($sp)
    MEM_B(0X1B, ctx->r29) = ctx->r4;
        goto L_002260F8;
    // 0x002260E0: sb          $a0, 0x1B($sp)
    MEM_B(0X1B, ctx->r29) = ctx->r4;
L_002260E4:
    // 0x002260E4: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x002260E8: trunc.w.s   $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(3 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x002260EC: mfc1        $a0, $f3
    ctx->r4 = (int32_t)ctx->f_odd[(3 - 1) * 2];
    // 0x002260F0: or          $a0, $a0, $v0
    ctx->r4 = ctx->r4 | ctx->r2;
    // 0x002260F4: sb          $a0, 0x1B($sp)
    MEM_B(0X1B, ctx->r29) = ctx->r4;
L_002260F8:
    // 0x002260F8: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x002260FC: addiu       $a0, $a0, 0x6CB0
    ctx->r4 = ADD32(ctx->r4, 0X6CB0);
    // 0x00226100: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    // 0x00226104: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x00226108: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x0022610C: lw          $v0, 0x2030($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2030);
    // 0x00226110: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x00226114: lw          $v1, 0x2034($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X2034);
    // 0x00226118: addu        $a3, $a2, $zero
    ctx->r7 = ADD32(ctx->r6, 0);
    // 0x0022611C: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x00226120: jal         0x002883E0
    // 0x00226124: sw          $v1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r3;
    func_002883E0(rdram, ctx);
        goto after_0;
    // 0x00226124: sw          $v1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r3;
    after_0:
L_00226128:
    // 0x00226128: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x0022612C: jr          $ra
    // 0x00226130: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x00226130: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_0020EE14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0020EE14: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0020EE18: lwc1        $f0, 0x55B0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X55B0);
    // 0x0020EE1C: c.lt.s      $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f14.fl < ctx->f0.fl;
    // 0x0020EE20: nop

    // 0x0020EE24: bc1f        L_0020EE48
    if (!c1cs) {
        // 0x0020EE28: nop
    
            goto L_0020EE48;
    }
    // 0x0020EE28: nop

    // 0x0020EE2C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0020EE30: lwc1        $f1, 0x55B4($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X55B4);
    // 0x0020EE34: add.s       $f14, $f14, $f1
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f14.fl = ctx->f14.fl + ctx->f1.fl;
L_0020EE38:
    // 0x0020EE38: c.lt.s      $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f14.fl < ctx->f0.fl;
    // 0x0020EE3C: nop

    // 0x0020EE40: bc1tl       L_0020EE38
    if (c1cs) {
        // 0x0020EE44: add.s       $f14, $f14, $f1
        CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f14.fl = ctx->f14.fl + ctx->f1.fl;
            goto L_0020EE38;
    }
    goto skip_0;
    // 0x0020EE44: add.s       $f14, $f14, $f1
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f14.fl = ctx->f14.fl + ctx->f1.fl;
    skip_0:
L_0020EE48:
    // 0x0020EE48: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0020EE4C: lwc1        $f0, 0x55B8($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X55B8);
    // 0x0020EE50: c.lt.s      $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f0.fl < ctx->f14.fl;
    // 0x0020EE54: nop

    // 0x0020EE58: bc1fl       L_0020EE80
    if (!c1cs) {
        // 0x0020EE5C: sub.s       $f0, $f12, $f14
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f14.fl;
            goto L_0020EE80;
    }
    goto skip_1;
    // 0x0020EE5C: sub.s       $f0, $f12, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f14.fl;
    skip_1:
    // 0x0020EE60: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0020EE64: lwc1        $f1, 0x55BC($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X55BC);
    // 0x0020EE68: sub.s       $f14, $f14, $f1
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f14.fl = ctx->f14.fl - ctx->f1.fl;
L_0020EE6C:
    // 0x0020EE6C: c.lt.s      $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f0.fl < ctx->f14.fl;
    // 0x0020EE70: nop

    // 0x0020EE74: bc1tl       L_0020EE6C
    if (c1cs) {
        // 0x0020EE78: sub.s       $f14, $f14, $f1
        CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f14.fl = ctx->f14.fl - ctx->f1.fl;
            goto L_0020EE6C;
    }
    goto skip_2;
    // 0x0020EE78: sub.s       $f14, $f14, $f1
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f14.fl = ctx->f14.fl - ctx->f1.fl;
    skip_2:
    // 0x0020EE7C: sub.s       $f0, $f12, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f14.fl;
L_0020EE80:
    // 0x0020EE80: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0020EE84: lwc1        $f1, 0x55C0($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X55C0);
    // 0x0020EE88: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x0020EE8C: nop

    // 0x0020EE90: bc1f        L_0020EEB4
    if (!c1cs) {
        // 0x0020EE94: nop
    
            goto L_0020EEB4;
    }
    // 0x0020EE94: nop

    // 0x0020EE98: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0020EE9C: lwc1        $f2, 0x55C4($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X55C4);
    // 0x0020EEA0: add.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f2.fl;
L_0020EEA4:
    // 0x0020EEA4: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x0020EEA8: nop

    // 0x0020EEAC: bc1tl       L_0020EEA4
    if (c1cs) {
        // 0x0020EEB0: add.s       $f0, $f0, $f2
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f2.fl;
            goto L_0020EEA4;
    }
    goto skip_3;
    // 0x0020EEB0: add.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f2.fl;
    skip_3:
L_0020EEB4:
    // 0x0020EEB4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0020EEB8: lwc1        $f1, 0x55C8($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X55C8);
    // 0x0020EEBC: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x0020EEC0: nop

    // 0x0020EEC4: bc1f        L_0020EEE8
    if (!c1cs) {
        // 0x0020EEC8: nop
    
            goto L_0020EEE8;
    }
    // 0x0020EEC8: nop

    // 0x0020EECC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0020EED0: lwc1        $f2, 0x55CC($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X55CC);
    // 0x0020EED4: sub.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f2.fl;
L_0020EED8:
    // 0x0020EED8: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x0020EEDC: nop

    // 0x0020EEE0: bc1tl       L_0020EED8
    if (c1cs) {
        // 0x0020EEE4: sub.s       $f0, $f0, $f2
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f2.fl;
            goto L_0020EED8;
    }
    goto skip_4;
    // 0x0020EEE4: sub.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f2.fl;
    skip_4:
L_0020EEE8:
    // 0x0020EEE8: jr          $ra
    // 0x0020EEEC: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    return;
    // 0x0020EEEC: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
;}
RECOMP_FUNC void func_00460008(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00460008: bne         $a0, $zero, L_00460018
    if (ctx->r4 != 0) {
            // 0x0046000C: addu        $v1, $a0, $zero
    ctx->r3 = ADD32(ctx->r4, 0);
    func_00460018(rdram, ctx);
    return;
    }
    // 0x0046000C: addu        $v1, $a0, $zero
    ctx->r3 = ADD32(ctx->r4, 0);
    // 0x00460010: jr          $ra
    // 0x00460014: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x00460014: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void func_00267800(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00267800: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x00267804: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x00267808: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x0026780C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x00267810: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x00267814: sdc1        $f20, 0x30($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X30, ctx->r29);
    // 0x00267818: lbu         $v0, 0x0($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X0);
    // 0x0026781C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x00267820: bne         $v0, $a1, L_0026782C
    if (ctx->r2 != ctx->r5) {
        // 0x00267824: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_0026782C;
    }
    // 0x00267824: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x00267828: lw          $s0, 0x30($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X30);
L_0026782C:
    // 0x0026782C: beq         $s0, $zero, L_00267928
    if (ctx->r16 == 0) {
        // 0x00267830: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_00267928;
    }
    // 0x00267830: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x00267834: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x00267838: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x0026783C: bne         $v1, $v0, L_0026792C
    if (ctx->r3 != ctx->r2) {
        // 0x00267840: addu        $v0, $s0, $zero
        ctx->r2 = ADD32(ctx->r16, 0);
            goto L_0026792C;
    }
    // 0x00267840: addu        $v0, $s0, $zero
    ctx->r2 = ADD32(ctx->r16, 0);
    // 0x00267844: lwc1        $f0, 0x4($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X4);
    // 0x00267848: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x0026784C: lwc1        $f1, 0xC($s1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r17, 0XC);
    // 0x00267850: bne         $v0, $a1, L_002678B8
    if (ctx->r2 != ctx->r5) {
        // 0x00267854: nop
    
            goto L_002678B8;
    }
    // 0x00267854: nop

    // 0x00267858: lhu         $v0, 0x18($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X18);
    // 0x0026785C: beq         $v0, $zero, L_0026787C
    if (ctx->r2 == 0) {
        // 0x00267860: nop
    
            goto L_0026787C;
    }
    // 0x00267860: nop

    // 0x00267864: bltz        $v0, L_002678B8
    if (SIGNED(ctx->r2) < 0) {
        // 0x00267868: slti        $v0, $v0, 0x3
        ctx->r2 = SIGNED(ctx->r2) < 0X3 ? 1 : 0;
            goto L_002678B8;
    }
    // 0x00267868: slti        $v0, $v0, 0x3
    ctx->r2 = SIGNED(ctx->r2) < 0X3 ? 1 : 0;
    // 0x0026786C: beq         $v0, $zero, L_002678B8
    if (ctx->r2 == 0) {
        // 0x00267870: nop
    
            goto L_002678B8;
    }
    // 0x00267870: nop

    // 0x00267874: j           L_002678A0
    // 0x00267878: nop

        goto L_002678A0;
    // 0x00267878: nop

L_0026787C:
    // 0x0026787C: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    // 0x00267880: beq         $a0, $zero, L_002678B8
    if (ctx->r4 == 0) {
        // 0x00267884: nop
    
            goto L_002678B8;
    }
    // 0x00267884: nop

    // 0x00267888: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x0026788C: mfc1        $a2, $f1
    ctx->r6 = (int32_t)ctx->f_odd[(1 - 1) * 2];
    // 0x00267890: jal         0x0026BE60
    // 0x00267894: nop

    func_0026BE60(rdram, ctx);
        goto after_0;
    // 0x00267894: nop

    after_0:
    // 0x00267898: j           L_002678BC
    // 0x0026789C: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
        goto L_002678BC;
    // 0x0026789C: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
L_002678A0:
    // 0x002678A0: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x002678A4: mfc1        $a2, $f1
    ctx->r6 = (int32_t)ctx->f_odd[(1 - 1) * 2];
    // 0x002678A8: jal         0x002425A4
    // 0x002678AC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_002425A4(rdram, ctx);
        goto after_1;
    // 0x002678AC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x002678B0: j           L_002678BC
    // 0x002678B4: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
        goto L_002678BC;
    // 0x002678B4: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
L_002678B8:
    // 0x002678B8: lwc1        $f20, 0x8($s0)
    ctx->f20.u32l = MEM_W(ctx->r16, 0X8);
L_002678BC:
    // 0x002678BC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x002678C0: jal         0x00268798
    // 0x002678C4: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    func_00268798(rdram, ctx);
        goto after_2;
    // 0x002678C4: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    after_2:
    // 0x002678C8: lwc1        $f0, 0x8($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X8);
    // 0x002678CC: sub.s       $f0, $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f20.fl;
    // 0x002678D0: lwc1        $f1, 0x14($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X14);
    // 0x002678D4: add.s       $f2, $f0, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f2.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x002678D8: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x002678DC: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x002678E0: nop

    // 0x002678E4: bc1f        L_00267910
    if (!c1cs) {
        // 0x002678E8: nop
    
            goto L_00267910;
    }
    // 0x002678E8: nop

    // 0x002678EC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002678F0: lwc1        $f1, 0x7DF8($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X7DF8);
    // 0x002678F4: neg.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = -ctx->f2.fl;
    // 0x002678F8: c.le.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl <= ctx->f1.fl;
    // 0x002678FC: nop

    // 0x00267900: bc1t        L_0026792C
    if (c1cs) {
        // 0x00267904: addu        $v0, $s0, $zero
        ctx->r2 = ADD32(ctx->r16, 0);
            goto L_0026792C;
    }
    // 0x00267904: addu        $v0, $s0, $zero
    ctx->r2 = ADD32(ctx->r16, 0);
    // 0x00267908: j           L_0026792C
    // 0x0026790C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
        goto L_0026792C;
    // 0x0026790C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_00267910:
    // 0x00267910: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00267914: lwc1        $f0, 0x7DFC($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X7DFC);
    // 0x00267918: c.le.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl <= ctx->f0.fl;
    // 0x0026791C: nop

    // 0x00267920: bc1t        L_0026792C
    if (c1cs) {
        // 0x00267924: addu        $v0, $s0, $zero
        ctx->r2 = ADD32(ctx->r16, 0);
            goto L_0026792C;
    }
    // 0x00267924: addu        $v0, $s0, $zero
    ctx->r2 = ADD32(ctx->r16, 0);
L_00267928:
    // 0x00267928: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_0026792C:
    // 0x0026792C: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x00267930: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x00267934: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x00267938: ldc1        $f20, 0x30($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X30);
    // 0x0026793C: jr          $ra
    // 0x00267940: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x00267940: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_0040B59C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0040B59C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0040B5A0: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x0040B5A4: lw          $v0, 0x30($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X30);
    // 0x0040B5A8: lw          $v1, 0xC($v0)
    ctx->r3 = MEM_W(ctx->r2, 0XC);
    // 0x0040B5AC: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x0040B5B0: sb          $v0, 0x4($v1)
    MEM_B(0X4, ctx->r3) = ctx->r2;
    // 0x0040B5B4: lb          $v0, 0xC7($a1)
    ctx->r2 = MEM_B(ctx->r5, 0XC7);
    // 0x0040B5B8: beq         $v0, $zero, L_0040B5C8
    if (ctx->r2 == 0) {
        // 0x0040B5BC: nop
    
            goto L_0040B5C8;
    }
    // 0x0040B5BC: nop

    // 0x0040B5C0: jal         0x00243414
    // 0x0040B5C4: addiu       $a2, $zero, 0xB
    ctx->r6 = ADD32(0, 0XB);
    func_00243414(rdram, ctx);
        goto after_0;
    // 0x0040B5C4: addiu       $a2, $zero, 0xB
    ctx->r6 = ADD32(0, 0XB);
    after_0:
L_0040B5C8:
    // 0x0040B5C8: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x0040B5CC: jr          $ra
    // 0x0040B5D0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0040B5D0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0040AD60(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0040AD60: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x0040AD64: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x0040AD68: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x0040AD6C: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x0040AD70: addu        $s2, $a1, $zero
    ctx->r18 = ADD32(ctx->r5, 0);
    // 0x0040AD74: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x0040AD78: addiu       $a0, $a0, 0x7078
    ctx->r4 = ADD32(ctx->r4, 0X7078);
    // 0x0040AD7C: addiu       $a1, $zero, 0x44E
    ctx->r5 = ADD32(0, 0X44E);
    // 0x0040AD80: addiu       $a2, $zero, 0x9
    ctx->r6 = ADD32(0, 0X9);
    // 0x0040AD84: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x0040AD88: lui         $s0, 0x8013
    ctx->r16 = S32(0X8013 << 16);
    // 0x0040AD8C: addiu       $s0, $s0, -0x490
    ctx->r16 = ADD32(ctx->r16, -0X490);
    // 0x0040AD90: addiu       $v0, $s0, 0x8
    ctx->r2 = ADD32(ctx->r16, 0X8);
    // 0x0040AD94: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x0040AD98: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x0040AD9C: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x0040ADA0: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x0040ADA4: jal         0x00225F6C
    // 0x0040ADA8: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    func_00225F6C(rdram, ctx);
        goto after_0;
    // 0x0040ADA8: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    after_0:
    // 0x0040ADAC: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
    // 0x0040ADB0: blez        $v0, L_0040ADEC
    if (SIGNED(ctx->r2) <= 0) {
        // 0x0040ADB4: sw          $v0, 0x4($s0)
        MEM_W(0X4, ctx->r16) = ctx->r2;
            goto L_0040ADEC;
    }
    // 0x0040ADB4: sw          $v0, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r2;
    // 0x0040ADB8: lui         $a2, 0x41
    ctx->r6 = S32(0X41 << 16);
    // 0x0040ADBC: addiu       $a2, $a2, -0x411C
    ctx->r6 = ADD32(ctx->r6, -0X411C);
    // 0x0040ADC0: lui         $a1, 0x41
    ctx->r5 = S32(0X41 << 16);
    // 0x0040ADC4: addiu       $a1, $a1, -0x5DA4
    ctx->r5 = ADD32(ctx->r5, -0X5DA4);
    // 0x0040ADC8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_0040ADCC:
    // 0x0040ADCC: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x0040ADD0: sw          $a2, 0x234($v0)
    MEM_W(0X234, ctx->r2) = ctx->r6;
    // 0x0040ADD4: sw          $a1, 0x248($v0)
    MEM_W(0X248, ctx->r2) = ctx->r5;
    // 0x0040ADD8: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // 0x0040ADDC: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x0040ADE0: slt         $v0, $v1, $v0
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x0040ADE4: bne         $v0, $zero, L_0040ADCC
    if (ctx->r2 != 0) {
        // 0x0040ADE8: addiu       $a0, $a0, 0x4
        ctx->r4 = ADD32(ctx->r4, 0X4);
            goto L_0040ADCC;
    }
    // 0x0040ADE8: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
L_0040ADEC:
    // 0x0040ADEC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0040ADF0: jal         0x0040AE24
    // 0x0040ADF4: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    func_0040AE24(rdram, ctx);
        goto after_1;
    // 0x0040ADF4: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    after_1:
    // 0x0040ADF8: addiu       $a0, $zero, 0xC8
    ctx->r4 = ADD32(0, 0XC8);
    // 0x0040ADFC: lui         $a1, 0x41
    ctx->r5 = S32(0X41 << 16);
    // 0x0040AE00: addiu       $a1, $a1, -0x39A4
    ctx->r5 = ADD32(ctx->r5, -0X39A4);
    // 0x0040AE04: jal         0x00283FF8
    // 0x0040AE08: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_00283FF8(rdram, ctx);
        goto after_2;
    // 0x0040AE08: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_2:
    // 0x0040AE0C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x0040AE10: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x0040AE14: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x0040AE18: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x0040AE1C: jr          $ra
    // 0x0040AE20: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x0040AE20: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_0041B734(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041B734: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x0041B738: lw          $v0, -0x5524($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X5524);
    // 0x0041B73C: andi        $v0, $v0, 0x400
    ctx->r2 = ctx->r2 & 0X400;
    // 0x0041B740: beq         $v0, $zero, L_0041B754
    if (ctx->r2 == 0) {
        // 0x0041B744: lui         $v1, 0x100
        ctx->r3 = S32(0X100 << 16);
            goto L_0041B754;
    }
    // 0x0041B744: lui         $v1, 0x100
    ctx->r3 = S32(0X100 << 16);
    // 0x0041B748: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x0041B74C: j           L_0041B764
    // 0x0041B750: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
        goto L_0041B764;
    // 0x0041B750: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
L_0041B754:
    // 0x0041B754: lui         $v1, 0xFEFF
    ctx->r3 = S32(0XFEFF << 16);
    // 0x0041B758: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x0041B75C: ori         $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 | 0XFFFF;
    // 0x0041B760: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
L_0041B764:
    // 0x0041B764: sw          $v0, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r2;
    // 0x0041B768: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x0041B76C: lw          $v0, -0x5528($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X5528);
    // 0x0041B770: andi        $v0, $v0, 0x400
    ctx->r2 = ctx->r2 & 0X400;
    // 0x0041B774: beq         $v0, $zero, L_0041B78C
    if (ctx->r2 == 0) {
        // 0x0041B778: nop
    
            goto L_0041B78C;
    }
    // 0x0041B778: nop

    // 0x0041B77C: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0041B780: addiu       $v0, $v0, 0x59DC
    ctx->r2 = ADD32(ctx->r2, 0X59DC);
    // 0x0041B784: j           L_0041B798
    // 0x0041B788: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_0041B798;
    // 0x0041B788: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_0041B78C:
    // 0x0041B78C: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0041B790: addiu       $v0, $v0, 0x59F8
    ctx->r2 = ADD32(ctx->r2, 0X59F8);
    // 0x0041B794: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_0041B798:
    // 0x0041B798: jr          $ra
    // 0x0041B79C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x0041B79C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void func_0044BFF8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0044BFF8: mtc1        $a2, $f3
    ctx->f_odd[(3 - 1) * 2] = ctx->r6;
    // 0x0044BFFC: mul.s       $f2, $f3, $f3
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f2.fl = MUL_S(ctx->f3.fl, ctx->f3.fl);
    // 0x0044C000: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0044C004: lwc1        $f1, 0xAE0($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0XAE0);
    // 0x0044C008: sub.s       $f1, $f1, $f3
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f1.fl = ctx->f1.fl - ctx->f3.fl;
    // 0x0044C00C: mul.s       $f0, $f1, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f1.fl, ctx->f1.fl);
    // 0x0044C010: nop

    // 0x0044C014: mul.s       $f2, $f2, $f3
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f3.fl);
    // 0x0044C018: nop

    // 0x0044C01C: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0044C020: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x0044C024: mul.s       $f12, $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = MUL_S(ctx->f12.fl, ctx->f0.fl);
    // 0x0044C028: sub.s       $f2, $f2, $f3
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f2.fl = ctx->f2.fl - ctx->f3.fl;
    // 0x0044C02C: mul.s       $f0, $f14, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = MUL_S(ctx->f14.fl, ctx->f2.fl);
    // 0x0044C030: jr          $ra
    // 0x0044C034: add.s       $f0, $f12, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f12.fl + ctx->f0.fl;
    return;
    // 0x0044C034: add.s       $f0, $f12, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f12.fl + ctx->f0.fl;
;}
RECOMP_FUNC void func_0045BDF8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0045BDF8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0045BDFC: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x0045BE00: jal         0x00284174
    // 0x0045BE04: nop

    func_00284174(rdram, ctx);
        goto after_0;
    // 0x0045BE04: nop

    after_0:
    // 0x0045BE08: beql        $v0, $zero, L_0045BE28
    if (ctx->r2 == 0) {
        // 0x0045BE0C: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_0045BE28;
    }
    goto skip_0;
    // 0x0045BE0C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    skip_0:
    // 0x0045BE10: jal         0x00284240
    // 0x0045BE14: nop

    func_00284240(rdram, ctx);
        goto after_1;
    // 0x0045BE14: nop

    after_1:
    // 0x0045BE18: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x0045BE1C: beq         $v1, $zero, L_0045BE28
    if (ctx->r3 == 0) {
        // 0x0045BE20: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_0045BE28;
    }
    // 0x0045BE20: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0045BE24: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_0045BE28:
    // 0x0045BE28: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x0045BE2C: jr          $ra
    // 0x0045BE30: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0045BE30: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00455420(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00455420: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00455424: addu        $a0, $a1, $zero
    ctx->r4 = ADD32(ctx->r5, 0);
    // 0x00455428: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x0045542C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x00455430: lw          $v0, 0x1C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X1C);
    // 0x00455434: lui         $s0, 0x8012
    ctx->r16 = S32(0X8012 << 16);
    // 0x00455438: addiu       $s0, $s0, -0x54E8
    ctx->r16 = ADD32(ctx->r16, -0X54E8);
    // 0x0045543C: beql        $v0, $zero, L_00455454
    if (ctx->r2 == 0) {
        // 0x00455440: addiu       $v0, $zero, 0xF8
        ctx->r2 = ADD32(0, 0XF8);
            goto L_00455454;
    }
    goto skip_0;
    // 0x00455440: addiu       $v0, $zero, 0xF8
    ctx->r2 = ADD32(0, 0XF8);
    skip_0:
    // 0x00455444: lw          $v0, 0x518($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X518);
    // 0x00455448: bnel        $v0, $zero, L_00455450
    if (ctx->r2 != 0) {
        // 0x0045544C: addu        $s0, $v0, $zero
        ctx->r16 = ADD32(ctx->r2, 0);
            goto L_00455450;
    }
    goto skip_1;
    // 0x0045544C: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    skip_1:
L_00455450:
    // 0x00455450: addiu       $v0, $zero, 0xF8
    ctx->r2 = ADD32(0, 0XF8);
L_00455454:
    // 0x00455454: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x00455458: lbu         $a1, 0x29($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X29);
    // 0x0045545C: addu        $a3, $a2, $zero
    ctx->r7 = ADD32(ctx->r6, 0);
    // 0x00455460: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x00455464: jal         0x0041648C
    // 0x00455468: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    func_0041648C(rdram, ctx);
        goto after_0;
    // 0x00455468: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    after_0:
    // 0x0045546C: sb          $v0, 0x29($s0)
    MEM_B(0X29, ctx->r16) = ctx->r2;
    // 0x00455470: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x00455474: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x00455478: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x0045547C: jr          $ra
    // 0x00455480: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00455480: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_0045B0CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0045B0CC: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0045B0D0: sw          $zero, 0x960($at)
    MEM_W(0X960, ctx->r1) = 0;
    // 0x0045B0D4: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0045B0D8: sw          $zero, 0x9A8($at)
    MEM_W(0X9A8, ctx->r1) = 0;
    // 0x0045B0DC: jr          $ra
    // 0x0045B0E0: nop

    return;
    // 0x0045B0E0: nop

;}
RECOMP_FUNC void func_0045CC90(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_00423CBC:
    // 0x0045CC90: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0045CC94: addiu       $v0, $v0, 0x5310
    ctx->r2 = ADD32(ctx->r2, 0X5310);
    // 0x0045CC98: j           L_00423CBC
    // 0x0045CC9C: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    func_00423CBC(rdram, ctx);
    return;
    // 0x0045CC9C: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    // turok2: reconnected split function: a stray ELF symbol at 0x0045CCA0 ended
    // this function early, leaving it without its epilogue. On the
    // hardware execution simply continues into the next instruction.
    func_0045CCA0(rdram, ctx);
;}
RECOMP_FUNC void func_0020FE00(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0020FE00: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x0020FE04: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x0020FE08: mtc1        $a1, $f20
    ctx->f20.u32l = ctx->r5;
    // 0x0020FE0C: sdc1        $f21, 0x20($sp)
    CHECK_FR(ctx, 21);
    SD(ctx->f21.u64, 0X20, ctx->r29);
    // 0x0020FE10: mtc1        $a2, $f21
    ctx->f_odd[(21 - 1) * 2] = ctx->r6;
    // 0x0020FE14: sdc1        $f25, 0x40($sp)
    CHECK_FR(ctx, 25);
    SD(ctx->f25.u64, 0X40, ctx->r29);
    // 0x0020FE18: mtc1        $a3, $f25
    ctx->f_odd[(25 - 1) * 2] = ctx->r7;
    // 0x0020FE1C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0020FE20: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x0020FE24: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x0020FE28: sdc1        $f24, 0x38($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X38, ctx->r29);
    // 0x0020FE2C: sdc1        $f23, 0x30($sp)
    CHECK_FR(ctx, 23);
    SD(ctx->f23.u64, 0X30, ctx->r29);
    // 0x0020FE30: sdc1        $f22, 0x28($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X28, ctx->r29);
    // 0x0020FE34: jal         0x002982F0
    // 0x0020FE38: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    func_002982F0(rdram, ctx);
        goto after_0;
    // 0x0020FE38: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    after_0:
    // 0x0020FE3C: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    // 0x0020FE40: jal         0x002974C0
    // 0x0020FE44: mov.s       $f24, $f0
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 0);
    ctx->f24.fl = ctx->f0.fl;
    func_002974C0(rdram, ctx);
        goto after_1;
    // 0x0020FE44: mov.s       $f24, $f0
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 0);
    ctx->f24.fl = ctx->f0.fl;
    after_1:
    // 0x0020FE48: mov.s       $f12, $f21
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 21);
    ctx->f12.fl = ctx->f21.fl;
    // 0x0020FE4C: jal         0x002982F0
    // 0x0020FE50: mov.s       $f23, $f0
    CHECK_FR(ctx, 23);
    CHECK_FR(ctx, 0);
    ctx->f23.fl = ctx->f0.fl;
    func_002982F0(rdram, ctx);
        goto after_2;
    // 0x0020FE50: mov.s       $f23, $f0
    CHECK_FR(ctx, 23);
    CHECK_FR(ctx, 0);
    ctx->f23.fl = ctx->f0.fl;
    after_2:
    // 0x0020FE54: mov.s       $f12, $f21
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 21);
    ctx->f12.fl = ctx->f21.fl;
    // 0x0020FE58: jal         0x002974C0
    // 0x0020FE5C: mov.s       $f21, $f0
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 0);
    ctx->f21.fl = ctx->f0.fl;
    func_002974C0(rdram, ctx);
        goto after_3;
    // 0x0020FE5C: mov.s       $f21, $f0
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 0);
    ctx->f21.fl = ctx->f0.fl;
    after_3:
    // 0x0020FE60: mov.s       $f12, $f25
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 25);
    ctx->f12.fl = ctx->f25.fl;
    // 0x0020FE64: jal         0x002982F0
    // 0x0020FE68: mov.s       $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    ctx->f22.fl = ctx->f0.fl;
    func_002982F0(rdram, ctx);
        goto after_4;
    // 0x0020FE68: mov.s       $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    ctx->f22.fl = ctx->f0.fl;
    after_4:
    // 0x0020FE6C: mov.s       $f12, $f25
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 25);
    ctx->f12.fl = ctx->f25.fl;
    // 0x0020FE70: jal         0x002974C0
    // 0x0020FE74: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    func_002974C0(rdram, ctx);
        goto after_5;
    // 0x0020FE74: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    after_5:
    // 0x0020FE78: mul.s       $f10, $f22, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f22.fl, ctx->f0.fl);
    // 0x0020FE7C: nop

    // 0x0020FE80: mul.s       $f3, $f24, $f21
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f21.fl); 
    ctx->f3.fl = MUL_S(ctx->f24.fl, ctx->f21.fl);
    // 0x0020FE84: nop

    // 0x0020FE88: mul.s       $f11, $f22, $f20
    CHECK_FR(ctx, 11);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f11.fl = MUL_S(ctx->f22.fl, ctx->f20.fl);
    // 0x0020FE8C: nop

    // 0x0020FE90: mul.s       $f6, $f23, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 23);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f23.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f6.fl = MUL_S(ctx->f23.fl, ctx->f20.fl);
    // 0x0020FE94: nop

    // 0x0020FE98: mul.s       $f8, $f23, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 23);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f23.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f23.fl, ctx->f0.fl);
    // 0x0020FE9C: nop

    // 0x0020FEA0: mul.s       $f2, $f23, $f21
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 23);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f23.fl); NAN_CHECK(ctx->f21.fl); 
    ctx->f2.fl = MUL_S(ctx->f23.fl, ctx->f21.fl);
    // 0x0020FEA4: nop

    // 0x0020FEA8: mul.s       $f9, $f24, $f22
    CHECK_FR(ctx, 9);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f9.fl = MUL_S(ctx->f24.fl, ctx->f22.fl);
    // 0x0020FEAC: nop

    // 0x0020FEB0: mul.s       $f7, $f24, $f20
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f7.fl = MUL_S(ctx->f24.fl, ctx->f20.fl);
    // 0x0020FEB4: nop

    // 0x0020FEB8: mul.s       $f24, $f24, $f0
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f24.fl = MUL_S(ctx->f24.fl, ctx->f0.fl);
    // 0x0020FEBC: nop

    // 0x0020FEC0: mul.s       $f23, $f23, $f22
    CHECK_FR(ctx, 23);
    CHECK_FR(ctx, 23);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f23.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f23.fl = MUL_S(ctx->f23.fl, ctx->f22.fl);
    // 0x0020FEC4: nop

    // 0x0020FEC8: mul.s       $f5, $f3, $f0
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f5.fl = MUL_S(ctx->f3.fl, ctx->f0.fl);
    // 0x0020FECC: nop

    // 0x0020FED0: mul.s       $f3, $f3, $f20
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f3.fl = MUL_S(ctx->f3.fl, ctx->f20.fl);
    // 0x0020FED4: nop

    // 0x0020FED8: mul.s       $f4, $f2, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x0020FEDC: mtc1        $zero, $f1
    ctx->f_odd[(1 - 1) * 2] = 0;
    // 0x0020FEE0: neg.s       $f21, $f21
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f21.fl); 
    ctx->f21.fl = -ctx->f21.fl;
    // 0x0020FEE4: swc1        $f21, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f_odd[(21 - 1) * 2];
    // 0x0020FEE8: swc1        $f1, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->f_odd[(1 - 1) * 2];
    // 0x0020FEEC: swc1        $f1, 0x34($s0)
    MEM_W(0X34, ctx->r16) = ctx->f_odd[(1 - 1) * 2];
    // 0x0020FEF0: mul.s       $f2, $f2, $f20
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f20.fl);
    // 0x0020FEF4: swc1        $f1, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->f_odd[(1 - 1) * 2];
    // 0x0020FEF8: swc1        $f1, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->f_odd[(1 - 1) * 2];
    // 0x0020FEFC: swc1        $f1, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f_odd[(1 - 1) * 2];
    // 0x0020FF00: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0020FF04: lwc1        $f0, 0x5600($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X5600);
    // 0x0020FF08: sub.s       $f5, $f5, $f6
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f5.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f5.fl = ctx->f5.fl - ctx->f6.fl;
    // 0x0020FF0C: swc1        $f1, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f_odd[(1 - 1) * 2];
    // 0x0020FF10: swc1        $f10, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f10.u32l;
    // 0x0020FF14: add.s       $f3, $f3, $f8
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f3.fl = ctx->f3.fl + ctx->f8.fl;
    // 0x0020FF18: swc1        $f11, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f_odd[(11 - 1) * 2];
    // 0x0020FF1C: swc1        $f9, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->f_odd[(9 - 1) * 2];
    // 0x0020FF20: add.s       $f4, $f4, $f7
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 7);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f7.fl); 
    ctx->f4.fl = ctx->f4.fl + ctx->f7.fl;
    // 0x0020FF24: swc1        $f23, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->f_odd[(23 - 1) * 2];
    // 0x0020FF28: swc1        $f0, 0x3C($s0)
    MEM_W(0X3C, ctx->r16) = ctx->f0.u32l;
    // 0x0020FF2C: sub.s       $f2, $f2, $f24
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f2.fl = ctx->f2.fl - ctx->f24.fl;
    // 0x0020FF30: swc1        $f5, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->f_odd[(5 - 1) * 2];
    // 0x0020FF34: swc1        $f3, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->f_odd[(3 - 1) * 2];
    // 0x0020FF38: swc1        $f4, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f4.u32l;
    // 0x0020FF3C: swc1        $f2, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f2.u32l;
    // 0x0020FF40: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x0020FF44: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0020FF48: ldc1        $f25, 0x40($sp)
    CHECK_FR(ctx, 25);
    ctx->f25.u64 = LD(ctx->r29, 0X40);
    // 0x0020FF4C: ldc1        $f24, 0x38($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X38);
    // 0x0020FF50: ldc1        $f23, 0x30($sp)
    CHECK_FR(ctx, 23);
    ctx->f23.u64 = LD(ctx->r29, 0X30);
    // 0x0020FF54: ldc1        $f22, 0x28($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X28);
    // 0x0020FF58: ldc1        $f21, 0x20($sp)
    CHECK_FR(ctx, 21);
    ctx->f21.u64 = LD(ctx->r29, 0X20);
    // 0x0020FF5C: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x0020FF60: jr          $ra
    // 0x0020FF64: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x0020FF64: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_00289688(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00289688: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x0028968C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x00289690: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x00289694: jal         0x0042F514
    // 0x00289698: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    func_0042F514(rdram, ctx);
        goto after_0;
    // 0x00289698: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    after_0:
    // 0x0028969C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x002896A0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x002896A4: jal         0x002888BC
    // 0x002896A8: addu        $a2, $a1, $zero
    ctx->r6 = ADD32(ctx->r5, 0);
    func_002888BC(rdram, ctx);
        goto after_1;
    // 0x002896A8: addu        $a2, $a1, $zero
    ctx->r6 = ADD32(ctx->r5, 0);
    after_1:
    // 0x002896AC: jal         0x002759C4
    // 0x002896B0: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    func_002759C4(rdram, ctx);
        goto after_2;
    // 0x002896B0: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    after_2:
    // 0x002896B4: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x002896B8: addiu       $a0, $a0, 0x7078
    ctx->r4 = ADD32(ctx->r4, 0X7078);
    // 0x002896BC: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x002896C0: jal         0x0042AC0C
    // 0x002896C4: addu        $a2, $a1, $zero
    ctx->r6 = ADD32(ctx->r5, 0);
    func_0042AC0C(rdram, ctx);
        goto after_3;
    // 0x002896C4: addu        $a2, $a1, $zero
    ctx->r6 = ADD32(ctx->r5, 0);
    after_3:
    // 0x002896C8: lui         $a0, 0x2
    ctx->r4 = S32(0X2 << 16);
    // 0x002896CC: ori         $a0, $a0, 0x317C
    ctx->r4 = ctx->r4 | 0X317C;
    // 0x002896D0: addu        $a0, $s0, $a0
    ctx->r4 = ADD32(ctx->r16, ctx->r4);
    // 0x002896D4: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x002896D8: addiu       $a1, $a1, -0x6D50
    ctx->r5 = ADD32(ctx->r5, -0X6D50);
    // 0x002896DC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x002896E0: lui         $a3, 0x800F
    ctx->r7 = S32(0X800F << 16);
    // 0x002896E4: addiu       $a3, $a3, 0x5C78
    ctx->r7 = ADD32(ctx->r7, 0X5C78);
    // 0x002896E8: jal         0x00416644
    // 0x002896EC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_00416644(rdram, ctx);
        goto after_4;
    // 0x002896EC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_4:
    // 0x002896F0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x002896F4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x002896F8: jr          $ra
    // 0x002896FC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x002896FC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_002847E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002847E0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x002847E4: lui         $v1, 0x800F
    ctx->r3 = S32(0X800F << 16);
    // 0x002847E8: lbu         $v1, 0x6750($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X6750);
    // 0x002847EC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x002847F0: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x002847F4: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x002847F8: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x002847FC: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00284800: beq         $v1, $v0, L_00284B10
    if (ctx->r3 == ctx->r2) {
        // 0x00284804: sw          $s0, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r16;
            goto L_00284B10;
    }
    // 0x00284804: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00284808: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x0028480C: beql        $v0, $zero, L_00284824
    if (ctx->r2 == 0) {
        // 0x00284810: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_00284824;
    }
    goto skip_0;
    // 0x00284810: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x00284814: beq         $v1, $zero, L_0028483C
    if (ctx->r3 == 0) {
        // 0x00284818: nop
    
            goto L_0028483C;
    }
    // 0x00284818: nop

    // 0x0028481C: j           L_00284B78
    // 0x00284820: nop

        goto L_00284B78;
    // 0x00284820: nop

L_00284824:
    // 0x00284824: beq         $v1, $v0, L_00284B78
    if (ctx->r3 == ctx->r2) {
        // 0x00284828: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_00284B78;
    }
    // 0x00284828: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x0028482C: beq         $v1, $v0, L_00284B60
    if (ctx->r3 == ctx->r2) {
        // 0x00284830: nop
    
            goto L_00284B60;
    }
    // 0x00284830: nop

    // 0x00284834: j           L_00284B78
    // 0x00284838: nop

        goto L_00284B78;
    // 0x00284838: nop

L_0028483C:
    // 0x0028483C: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x00284840: addiu       $a0, $a0, 0x6798
    ctx->r4 = ADD32(ctx->r4, 0X6798);
    // 0x00284844: lui         $a1, 0x800F
    ctx->r5 = S32(0X800F << 16);
    // 0x00284848: addiu       $a1, $a1, 0x6770
    ctx->r5 = ADD32(ctx->r5, 0X6770);
    // 0x0028484C: jal         0x0029B6F0
    // 0x00284850: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osRecvMesg_recomp(rdram, ctx);
        goto after_0;
    // 0x00284850: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_0:
    // 0x00284854: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x00284858: addiu       $a0, $a0, 0x5C60
    ctx->r4 = ADD32(ctx->r4, 0X5C60);
    // 0x0028485C: jal         0x002987B4
    // 0x00284860: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    osContGetReadData_recomp(rdram, ctx);
        goto after_1;
    // 0x00284860: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    after_1:
    // 0x00284864: lui         $v0, 0x800F
    ctx->r2 = S32(0X800F << 16);
    // 0x00284868: addiu       $v0, $v0, 0x5C7C
    ctx->r2 = ADD32(ctx->r2, 0X5C7C);
    // 0x0028486C: addiu       $s1, $v0, -0x4
    ctx->r17 = ADD32(ctx->r2, -0X4);
    // 0x00284870: addu        $s3, $s2, $zero
    ctx->r19 = ADD32(ctx->r18, 0);
    // 0x00284874: addu        $s0, $s2, $zero
    ctx->r16 = ADD32(ctx->r18, 0);
    // 0x00284878: addiu       $v1, $zero, -0x1
    ctx->r3 = ADD32(0, -0X1);
    // 0x0028487C: sb          $v1, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r3;
    // 0x00284880: sw          $zero, -0x4($v0)
    MEM_W(-0X4, ctx->r2) = 0;
    // 0x00284884: sb          $zero, 0xC0($v0)
    MEM_B(0XC0, ctx->r2) = 0;
    // 0x00284888: sb          $zero, 0xC1($v0)
    MEM_B(0XC1, ctx->r2) = 0;
    // 0x0028488C: sb          $zero, 0xC2($v0)
    MEM_B(0XC2, ctx->r2) = 0;
    // 0x00284890: sb          $zero, 0xC3($v0)
    MEM_B(0XC3, ctx->r2) = 0;
    // 0x00284894: sw          $zero, 0xAC($v0)
    MEM_W(0XAC, ctx->r2) = 0;
    // 0x00284898: sw          $zero, 0xA8($v0)
    MEM_W(0XA8, ctx->r2) = 0;
    // 0x0028489C: sw          $zero, 0xB0($v0)
    MEM_W(0XB0, ctx->r2) = 0;
    // 0x002848A0: sw          $zero, 0xB4($v0)
    MEM_W(0XB4, ctx->r2) = 0;
    // 0x002848A4: sw          $zero, 0xB8($v0)
    MEM_W(0XB8, ctx->r2) = 0;
    // 0x002848A8: sw          $zero, 0xBC($v0)
    MEM_W(0XBC, ctx->r2) = 0;
    // 0x002848AC: sw          $zero, 0x14($v0)
    MEM_W(0X14, ctx->r2) = 0;
    // 0x002848B0: sw          $zero, 0x10($v0)
    MEM_W(0X10, ctx->r2) = 0;
    // 0x002848B4: sw          $zero, 0x18($v0)
    MEM_W(0X18, ctx->r2) = 0;
    // 0x002848B8: sw          $zero, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = 0;
    // 0x002848BC: sw          $zero, 0x20($v0)
    MEM_W(0X20, ctx->r2) = 0;
    // 0x002848C0: sw          $zero, 0x24($v0)
    MEM_W(0X24, ctx->r2) = 0;
L_002848C4:
    // 0x002848C4: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x002848C8: addiu       $a0, $a0, 0x5EC0
    ctx->r4 = ADD32(ctx->r4, 0X5EC0);
    // 0x002848CC: lui         $at, 0x800F
    ctx->r1 = S32(0X800F << 16);
    // 0x002848D0: addu        $at, $at, $s3
    ctx->r1 = ADD32(ctx->r1, ctx->r19);
    // 0x002848D4: lb          $a1, 0x5C62($at)
    ctx->r5 = MEM_B(ctx->r1, 0X5C62);
    // 0x002848D8: lui         $at, 0x800F
    ctx->r1 = S32(0X800F << 16);
    // 0x002848DC: addu        $at, $at, $s3
    ctx->r1 = ADD32(ctx->r1, ctx->r19);
    // 0x002848E0: lb          $a2, 0x5C63($at)
    ctx->r6 = MEM_B(ctx->r1, 0X5C63);
    // 0x002848E4: lui         $at, 0x800F
    ctx->r1 = S32(0X800F << 16);
    // 0x002848E8: addu        $at, $at, $s3
    ctx->r1 = ADD32(ctx->r1, ctx->r19);
    // 0x002848EC: lhu         $a3, 0x5C60($at)
    ctx->r7 = MEM_HU(ctx->r1, 0X5C60);
    // 0x002848F0: jal         0x00284EB8
    // 0x002848F4: addu        $a0, $s0, $a0
    ctx->r4 = ADD32(ctx->r16, ctx->r4);
    func_00284EB8(rdram, ctx);
        goto after_2;
    // 0x002848F4: addu        $a0, $s0, $a0
    ctx->r4 = ADD32(ctx->r16, ctx->r4);
    after_2:
    // 0x002848F8: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x002848FC: lui         $at, 0x800F
    ctx->r1 = S32(0X800F << 16);
    // 0x00284900: addu        $at, $at, $s0
    ctx->r1 = ADD32(ctx->r1, ctx->r16);
    // 0x00284904: lw          $v1, 0x5EC0($at)
    ctx->r3 = MEM_W(ctx->r1, 0X5EC0);
    // 0x00284908: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x0028490C: sw          $v0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r2;
    // 0x00284910: lbu         $v0, 0xC4($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XC4);
    // 0x00284914: lui         $at, 0x800F
    ctx->r1 = S32(0X800F << 16);
    // 0x00284918: addu        $at, $at, $s0
    ctx->r1 = ADD32(ctx->r1, ctx->r16);
    // 0x0028491C: lbu         $v1, 0x5F84($at)
    ctx->r3 = MEM_BU(ctx->r1, 0X5F84);
    // 0x00284920: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x00284924: sb          $v0, 0xC4($s1)
    MEM_B(0XC4, ctx->r17) = ctx->r2;
    // 0x00284928: lbu         $v0, 0xC5($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XC5);
    // 0x0028492C: lui         $at, 0x800F
    ctx->r1 = S32(0X800F << 16);
    // 0x00284930: addu        $at, $at, $s0
    ctx->r1 = ADD32(ctx->r1, ctx->r16);
    // 0x00284934: lbu         $v1, 0x5F85($at)
    ctx->r3 = MEM_BU(ctx->r1, 0X5F85);
    // 0x00284938: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x0028493C: sb          $v0, 0xC5($s1)
    MEM_B(0XC5, ctx->r17) = ctx->r2;
    // 0x00284940: lbu         $v0, 0xC6($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XC6);
    // 0x00284944: lui         $at, 0x800F
    ctx->r1 = S32(0X800F << 16);
    // 0x00284948: addu        $at, $at, $s0
    ctx->r1 = ADD32(ctx->r1, ctx->r16);
    // 0x0028494C: lbu         $v1, 0x5F86($at)
    ctx->r3 = MEM_BU(ctx->r1, 0X5F86);
    // 0x00284950: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x00284954: sb          $v0, 0xC6($s1)
    MEM_B(0XC6, ctx->r17) = ctx->r2;
    // 0x00284958: lbu         $v0, 0xC7($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XC7);
    // 0x0028495C: lui         $at, 0x800F
    ctx->r1 = S32(0X800F << 16);
    // 0x00284960: addu        $at, $at, $s0
    ctx->r1 = ADD32(ctx->r1, ctx->r16);
    // 0x00284964: lbu         $v1, 0x5F87($at)
    ctx->r3 = MEM_BU(ctx->r1, 0X5F87);
    // 0x00284968: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x0028496C: sb          $v0, 0xC7($s1)
    MEM_B(0XC7, ctx->r17) = ctx->r2;
    // 0x00284970: lw          $v0, 0xB0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0XB0);
    // 0x00284974: lui         $at, 0x800F
    ctx->r1 = S32(0X800F << 16);
    // 0x00284978: addu        $at, $at, $s0
    ctx->r1 = ADD32(ctx->r1, ctx->r16);
    // 0x0028497C: lw          $v1, 0x5F70($at)
    ctx->r3 = MEM_W(ctx->r1, 0X5F70);
    // 0x00284980: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x00284984: sw          $v0, 0xB0($s1)
    MEM_W(0XB0, ctx->r17) = ctx->r2;
    // 0x00284988: lw          $v0, 0xB4($s1)
    ctx->r2 = MEM_W(ctx->r17, 0XB4);
    // 0x0028498C: lui         $at, 0x800F
    ctx->r1 = S32(0X800F << 16);
    // 0x00284990: addu        $at, $at, $s0
    ctx->r1 = ADD32(ctx->r1, ctx->r16);
    // 0x00284994: lw          $v1, 0x5F74($at)
    ctx->r3 = MEM_W(ctx->r1, 0X5F74);
    // 0x00284998: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x0028499C: sw          $v0, 0xB4($s1)
    MEM_W(0XB4, ctx->r17) = ctx->r2;
    // 0x002849A0: lw          $v0, 0xB8($s1)
    ctx->r2 = MEM_W(ctx->r17, 0XB8);
    // 0x002849A4: lui         $at, 0x800F
    ctx->r1 = S32(0X800F << 16);
    // 0x002849A8: addu        $at, $at, $s0
    ctx->r1 = ADD32(ctx->r1, ctx->r16);
    // 0x002849AC: lw          $v1, 0x5F78($at)
    ctx->r3 = MEM_W(ctx->r1, 0X5F78);
    // 0x002849B0: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x002849B4: sw          $v0, 0xB8($s1)
    MEM_W(0XB8, ctx->r17) = ctx->r2;
    // 0x002849B8: lw          $v0, 0xBC($s1)
    ctx->r2 = MEM_W(ctx->r17, 0XBC);
    // 0x002849BC: lui         $at, 0x800F
    ctx->r1 = S32(0X800F << 16);
    // 0x002849C0: addu        $at, $at, $s0
    ctx->r1 = ADD32(ctx->r1, ctx->r16);
    // 0x002849C4: lw          $v1, 0x5F7C($at)
    ctx->r3 = MEM_W(ctx->r1, 0X5F7C);
    // 0x002849C8: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x002849CC: sw          $v0, 0xBC($s1)
    MEM_W(0XBC, ctx->r17) = ctx->r2;
    // 0x002849D0: lw          $v0, 0xC0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0XC0);
    // 0x002849D4: lui         $at, 0x800F
    ctx->r1 = S32(0X800F << 16);
    // 0x002849D8: addu        $at, $at, $s0
    ctx->r1 = ADD32(ctx->r1, ctx->r16);
    // 0x002849DC: lw          $v1, 0x5F80($at)
    ctx->r3 = MEM_W(ctx->r1, 0X5F80);
    // 0x002849E0: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x002849E4: sw          $v0, 0xC0($s1)
    MEM_W(0XC0, ctx->r17) = ctx->r2;
    // 0x002849E8: lw          $v0, 0x18($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X18);
    // 0x002849EC: lui         $at, 0x800F
    ctx->r1 = S32(0X800F << 16);
    // 0x002849F0: addu        $at, $at, $s0
    ctx->r1 = ADD32(ctx->r1, ctx->r16);
    // 0x002849F4: lw          $v1, 0x5ED8($at)
    ctx->r3 = MEM_W(ctx->r1, 0X5ED8);
    // 0x002849F8: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x002849FC: sw          $v0, 0x18($s1)
    MEM_W(0X18, ctx->r17) = ctx->r2;
    // 0x00284A00: lw          $v0, 0x14($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X14);
    // 0x00284A04: lui         $at, 0x800F
    ctx->r1 = S32(0X800F << 16);
    // 0x00284A08: addu        $at, $at, $s0
    ctx->r1 = ADD32(ctx->r1, ctx->r16);
    // 0x00284A0C: lw          $v1, 0x5ED4($at)
    ctx->r3 = MEM_W(ctx->r1, 0X5ED4);
    // 0x00284A10: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x00284A14: sw          $v0, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r2;
    // 0x00284A18: lw          $v0, 0x1C($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X1C);
    // 0x00284A1C: lui         $at, 0x800F
    ctx->r1 = S32(0X800F << 16);
    // 0x00284A20: addu        $at, $at, $s0
    ctx->r1 = ADD32(ctx->r1, ctx->r16);
    // 0x00284A24: lw          $v1, 0x5EDC($at)
    ctx->r3 = MEM_W(ctx->r1, 0X5EDC);
    // 0x00284A28: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x00284A2C: sw          $v0, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->r2;
    // 0x00284A30: lw          $v0, 0x20($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X20);
    // 0x00284A34: lui         $at, 0x800F
    ctx->r1 = S32(0X800F << 16);
    // 0x00284A38: addu        $at, $at, $s0
    ctx->r1 = ADD32(ctx->r1, ctx->r16);
    // 0x00284A3C: lw          $v1, 0x5EE0($at)
    ctx->r3 = MEM_W(ctx->r1, 0X5EE0);
    // 0x00284A40: addiu       $s3, $s3, 0x6
    ctx->r19 = ADD32(ctx->r19, 0X6);
    // 0x00284A44: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x00284A48: sw          $v0, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->r2;
    // 0x00284A4C: lw          $v0, 0x24($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X24);
    // 0x00284A50: lui         $at, 0x800F
    ctx->r1 = S32(0X800F << 16);
    // 0x00284A54: addu        $at, $at, $s0
    ctx->r1 = ADD32(ctx->r1, ctx->r16);
    // 0x00284A58: lw          $v1, 0x5EE4($at)
    ctx->r3 = MEM_W(ctx->r1, 0X5EE4);
    // 0x00284A5C: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x00284A60: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x00284A64: sw          $v0, 0x24($s1)
    MEM_W(0X24, ctx->r17) = ctx->r2;
    // 0x00284A68: lw          $v0, 0x28($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X28);
    // 0x00284A6C: lui         $at, 0x800F
    ctx->r1 = S32(0X800F << 16);
    // 0x00284A70: addu        $at, $at, $s0
    ctx->r1 = ADD32(ctx->r1, ctx->r16);
    // 0x00284A74: lw          $v1, 0x5EE8($at)
    ctx->r3 = MEM_W(ctx->r1, 0X5EE8);
    // 0x00284A78: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x00284A7C: sw          $v0, 0x28($s1)
    MEM_W(0X28, ctx->r17) = ctx->r2;
    // 0x00284A80: slti        $v0, $s2, 0x4
    ctx->r2 = SIGNED(ctx->r18) < 0X4 ? 1 : 0;
    // 0x00284A84: bne         $v0, $zero, L_002848C4
    if (ctx->r2 != 0) {
        // 0x00284A88: addiu       $s0, $s0, 0x224
        ctx->r16 = ADD32(ctx->r16, 0X224);
            goto L_002848C4;
    }
    // 0x00284A88: addiu       $s0, $s0, 0x224
    ctx->r16 = ADD32(ctx->r16, 0X224);
    // 0x00284A8C: lui         $v1, 0x800F
    ctx->r3 = S32(0X800F << 16);
    // 0x00284A90: addiu       $v1, $v1, 0x5D3C
    ctx->r3 = ADD32(ctx->r3, 0X5D3C);
    // 0x00284A94: lb          $v0, 0x0($v1)
    ctx->r2 = MEM_B(ctx->r3, 0X0);
    // 0x00284A98: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00284A9C: lwc1        $f3, -0x6320($at)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r1, -0X6320);
    // 0x00284AA0: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x00284AA4: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00284AA8: mul.s       $f0, $f0, $f3
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f3.fl);
    // 0x00284AAC: lb          $v0, 0x1($v1)
    ctx->r2 = MEM_B(ctx->r3, 0X1);
    // 0x00284AB0: mtc1        $v0, $f2
    ctx->f2.u32l = ctx->r2;
    // 0x00284AB4: cvt.s.w     $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    ctx->f2.fl = CVT_S_W(ctx->f2.u32l);
    // 0x00284AB8: mul.s       $f2, $f2, $f3
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f3.fl);
    // 0x00284ABC: lb          $v0, 0x2($v1)
    ctx->r2 = MEM_B(ctx->r3, 0X2);
    // 0x00284AC0: mtc1        $v0, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r2;
    // 0x00284AC4: cvt.s.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.fl = CVT_S_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x00284AC8: mul.s       $f1, $f1, $f3
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f3.fl);
    // 0x00284ACC: lb          $a0, 0x3($v1)
    ctx->r4 = MEM_B(ctx->r3, 0X3);
    // 0x00284AD0: trunc.w.s   $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x00284AD4: mfc1        $v0, $f4
    ctx->r2 = (int32_t)ctx->f4.u32l;
    // 0x00284AD8: mtc1        $a0, $f0
    ctx->f0.u32l = ctx->r4;
    // 0x00284ADC: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00284AE0: mul.s       $f0, $f0, $f3
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f3.fl);
    // 0x00284AE4: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x00284AE8: trunc.w.s   $f4, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    ctx->f4.u32l = TRUNC_W_S(ctx->f2.fl);
    // 0x00284AEC: mfc1        $v0, $f4
    ctx->r2 = (int32_t)ctx->f4.u32l;
    // 0x00284AF0: sb          $v0, 0x1($v1)
    MEM_B(0X1, ctx->r3) = ctx->r2;
    // 0x00284AF4: trunc.w.s   $f4, $f1
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 1);
    ctx->f4.u32l = TRUNC_W_S(ctx->f1.fl);
    // 0x00284AF8: mfc1        $v0, $f4
    ctx->r2 = (int32_t)ctx->f4.u32l;
    // 0x00284AFC: sb          $v0, 0x2($v1)
    MEM_B(0X2, ctx->r3) = ctx->r2;
    // 0x00284B00: trunc.w.s   $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x00284B04: mfc1        $v0, $f4
    ctx->r2 = (int32_t)ctx->f4.u32l;
    // 0x00284B08: j           L_00284B78
    // 0x00284B0C: sb          $v0, 0x3($v1)
    MEM_B(0X3, ctx->r3) = ctx->r2;
        goto L_00284B78;
    // 0x00284B0C: sb          $v0, 0x3($v1)
    MEM_B(0X3, ctx->r3) = ctx->r2;
L_00284B10:
    // 0x00284B10: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x00284B14: addiu       $a0, $a0, 0x6798
    ctx->r4 = ADD32(ctx->r4, 0X6798);
    // 0x00284B18: lui         $a1, 0x800F
    ctx->r5 = S32(0X800F << 16);
    // 0x00284B1C: addiu       $a1, $a1, 0x6770
    ctx->r5 = ADD32(ctx->r5, 0X6770);
    // 0x00284B20: jal         0x0029B6F0
    // 0x00284B24: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osRecvMesg_recomp(rdram, ctx);
        goto after_3;
    // 0x00284B24: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_3:
    // 0x00284B28: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x00284B2C: addiu       $a0, $a0, 0x6778
    ctx->r4 = ADD32(ctx->r4, 0X6778);
    // 0x00284B30: jal         0x002986F8
    // 0x00284B34: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    osContGetQuery_recomp(rdram, ctx);
        goto after_4;
    // 0x00284B34: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    after_4:
    // 0x00284B38: lui         $s0, 0x800F
    ctx->r16 = S32(0X800F << 16);
    // 0x00284B3C: addiu       $s0, $s0, 0x5EC0
    ctx->r16 = ADD32(ctx->r16, 0X5EC0);
L_00284B40:
    // 0x00284B40: jal         0x00284DAC
    // 0x00284B44: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00284DAC(rdram, ctx);
        goto after_5;
    // 0x00284B44: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_5:
    // 0x00284B48: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x00284B4C: slti        $v0, $s2, 0x4
    ctx->r2 = SIGNED(ctx->r18) < 0X4 ? 1 : 0;
    // 0x00284B50: bne         $v0, $zero, L_00284B40
    if (ctx->r2 != 0) {
        // 0x00284B54: addiu       $s0, $s0, 0x224
        ctx->r16 = ADD32(ctx->r16, 0X224);
            goto L_00284B40;
    }
    // 0x00284B54: addiu       $s0, $s0, 0x224
    ctx->r16 = ADD32(ctx->r16, 0X224);
    // 0x00284B58: j           L_00284B78
    // 0x00284B5C: nop

        goto L_00284B78;
    // 0x00284B5C: nop

L_00284B60:
    // 0x00284B60: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x00284B64: addiu       $a0, $a0, 0x6798
    ctx->r4 = ADD32(ctx->r4, 0X6798);
    // 0x00284B68: lui         $a1, 0x800F
    ctx->r5 = S32(0X800F << 16);
    // 0x00284B6C: addiu       $a1, $a1, 0x6778
    ctx->r5 = ADD32(ctx->r5, 0X6778);
    // 0x00284B70: jal         0x00298900
    // 0x00284B74: nop

    func_00298900(rdram, ctx);
        goto after_6;
    // 0x00284B74: nop

    after_6:
L_00284B78:
    // 0x00284B78: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x00284B7C: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x00284B80: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x00284B84: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00284B88: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00284B8C: jr          $ra
    // 0x00284B90: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x00284B90: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_0025A280(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0025A280: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0025A284: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x0025A288: lw          $v0, 0x14($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X14);
    // 0x0025A28C: lhu         $a3, 0x9A($v0)
    ctx->r7 = MEM_HU(ctx->r2, 0X9A);
    // 0x0025A290: lui         $a2, 0x800B
    ctx->r6 = S32(0X800B << 16);
    // 0x0025A294: addiu       $a2, $a2, -0x2F8
    ctx->r6 = ADD32(ctx->r6, -0X2F8);
    // 0x0025A298: jal         0x00245A98
    // 0x0025A29C: nop

    func_00245A98(rdram, ctx);
        goto after_0;
    // 0x0025A29C: nop

    after_0:
    // 0x0025A2A0: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x0025A2A4: jr          $ra
    // 0x0025A2A8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0025A2A8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0042CFC0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0042CFC0: sw          $zero, 0x3608($s4)
    MEM_W(0X3608, ctx->r20) = 0;
    // 0x0042CFC4: sw          $zero, 0x3604($s4)
    MEM_W(0X3604, ctx->r20) = 0;
L_0042CFC8:
    // 0x0042CFC8: addu        $v1, $s4, $a2
    ctx->r3 = ADD32(ctx->r20, ctx->r6);
    // 0x0042CFCC: addiu       $a2, $a2, 0x1B0
    ctx->r6 = ADD32(ctx->r6, 0X1B0);
    // 0x0042CFD0: addu        $v0, $s4, $a1
    ctx->r2 = ADD32(ctx->r20, ctx->r5);
    // 0x0042CFD4: addiu       $a1, $a1, 0x1B0
    ctx->r5 = ADD32(ctx->r5, 0X1B0);
    // 0x0042CFD8: sw          $v0, 0x1AC($a0)
    MEM_W(0X1AC, ctx->r4) = ctx->r2;
    // 0x0042CFDC: sw          $v1, 0x1A8($a0)
    MEM_W(0X1A8, ctx->r4) = ctx->r3;
    // 0x0042CFE0: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x0042CFE4: slti        $v0, $s3, 0x1F
    ctx->r2 = SIGNED(ctx->r19) < 0X1F ? 1 : 0;
    // 0x0042CFE8: bne         $v0, $zero, L_0042CFC8
    if (ctx->r2 != 0) {
        // 0x0042CFEC: addiu       $a0, $a0, 0x1B0
        ctx->r4 = ADD32(ctx->r4, 0X1B0);
            goto L_0042CFC8;
    }
    // 0x0042CFEC: addiu       $a0, $a0, 0x1B0
    ctx->r4 = ADD32(ctx->r4, 0X1B0);
    // 0x0042CFF0: lui         $s1, 0x800F
    ctx->r17 = S32(0X800F << 16);
    // 0x0042CFF4: addiu       $s1, $s1, 0x1360
    ctx->r17 = ADD32(ctx->r17, 0X1360);
    // 0x0042CFF8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0042CFFC: sw          $zero, 0x1A8($s4)
    MEM_W(0X1A8, ctx->r20) = 0;
    // 0x0042D000: jal         0x0027BD10
    // 0x0042D004: sw          $zero, 0x35FC($s4)
    MEM_W(0X35FC, ctx->r20) = 0;
    func_0027BD10(rdram, ctx);
        goto after_0;
    // 0x0042D004: sw          $zero, 0x35FC($s4)
    MEM_W(0X35FC, ctx->r20) = 0;
    after_0:
    // 0x0042D008: lui         $s0, 0x800F
    ctx->r16 = S32(0X800F << 16);
    // 0x0042D00C: addiu       $s0, $s0, 0x12C0
    ctx->r16 = ADD32(ctx->r16, 0X12C0);
    // 0x0042D010: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0042D014: addu        $s3, $zero, $zero
    ctx->r19 = ADD32(0, 0);
    // 0x0042D018: addiu       $s2, $zero, 0x8
    ctx->r18 = ADD32(0, 0X8);
    // 0x0042D01C: lw          $v1, 0x4($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X4);
    // 0x0042D020: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0042D024: sw          $s2, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r18;
    // 0x0042D028: sw          $v0, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r2;
    // 0x0042D02C: sb          $zero, 0x12($s1)
    MEM_B(0X12, ctx->r17) = 0;
    // 0x0042D030: ori         $v1, $v1, 0x4
    ctx->r3 = ctx->r3 | 0X4;
    // 0x0042D034: jal         0x0027BD10
    // 0x0042D038: sw          $v1, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->r3;
    func_0027BD10(rdram, ctx);
        goto after_1;
    // 0x0042D038: sw          $v1, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->r3;
    after_1:
    // 0x0042D03C: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // turok2: reconnected split function: a stray ELF symbol at 0x0042D040 ended
    // this function early, leaving it without its epilogue. On the
    // hardware execution simply continues into the next instruction.
    func_0042D040(rdram, ctx);
;}
RECOMP_FUNC void func_0029E230(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
;}
RECOMP_FUNC void func_002778A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002778A8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x002778AC: sw          $s2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r18;
    // 0x002778B0: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x002778B4: lw          $v0, 0x34($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X34);
    // 0x002778B8: lbu         $t1, 0x3B($sp)
    ctx->r9 = MEM_BU(ctx->r29, 0X3B);
    // 0x002778BC: lbu         $t2, 0x3F($sp)
    ctx->r10 = MEM_BU(ctx->r29, 0X3F);
    // 0x002778C0: lbu         $t3, 0x43($sp)
    ctx->r11 = MEM_BU(ctx->r29, 0X43);
    // 0x002778C4: sw          $s6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r22;
    // 0x002778C8: lbu         $s6, 0x47($sp)
    ctx->r22 = MEM_BU(ctx->r29, 0X47);
    // 0x002778CC: addu        $t8, $a0, $zero
    ctx->r24 = ADD32(ctx->r4, 0);
    // 0x002778D0: sw          $s5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r21;
    // 0x002778D4: sw          $s4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r20;
    // 0x002778D8: sw          $s3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r19;
    // 0x002778DC: sw          $s1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r17;
    // 0x002778E0: beq         $v0, $zero, L_002778F0
    if (ctx->r2 == 0) {
        // 0x002778E4: sw          $s0, 0x0($sp)
        MEM_W(0X0, ctx->r29) = ctx->r16;
            goto L_002778F0;
    }
    // 0x002778E4: sw          $s0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r16;
    // 0x002778E8: j           L_002778F4
    // 0x002778EC: srl         $s1, $t1, 1
    ctx->r17 = S32(U32(ctx->r9) >> 1);
        goto L_002778F4;
    // 0x002778EC: srl         $s1, $t1, 1
    ctx->r17 = S32(U32(ctx->r9) >> 1);
L_002778F0:
    // 0x002778F0: sll         $s1, $t1, 1
    ctx->r17 = S32(ctx->r9 << 1);
L_002778F4:
    // 0x002778F4: bne         $v0, $zero, L_00277900
    if (ctx->r2 != 0) {
        // 0x002778F8: srl         $s0, $t2, 1
        ctx->r16 = S32(U32(ctx->r10) >> 1);
            goto L_00277900;
    }
    // 0x002778F8: srl         $s0, $t2, 1
    ctx->r16 = S32(U32(ctx->r10) >> 1);
    // 0x002778FC: sll         $s0, $t2, 1
    ctx->r16 = S32(ctx->r10 << 1);
L_00277900:
    // 0x00277900: bne         $v0, $zero, L_0027790C
    if (ctx->r2 != 0) {
        // 0x00277904: srl         $t9, $t3, 1
        ctx->r25 = S32(U32(ctx->r11) >> 1);
            goto L_0027790C;
    }
    // 0x00277904: srl         $t9, $t3, 1
    ctx->r25 = S32(U32(ctx->r11) >> 1);
    // 0x00277908: sll         $t9, $t3, 1
    ctx->r25 = S32(ctx->r11 << 1);
L_0027790C:
    // 0x0027790C: bne         $v0, $zero, L_00277918
    if (ctx->r2 != 0) {
        // 0x00277910: sll         $s5, $t1, 1
        ctx->r21 = S32(ctx->r9 << 1);
            goto L_00277918;
    }
    // 0x00277910: sll         $s5, $t1, 1
    ctx->r21 = S32(ctx->r9 << 1);
    // 0x00277914: srl         $s5, $t1, 1
    ctx->r21 = S32(U32(ctx->r9) >> 1);
L_00277918:
    // 0x00277918: bne         $v0, $zero, L_00277924
    if (ctx->r2 != 0) {
        // 0x0027791C: sll         $s4, $t2, 1
        ctx->r20 = S32(ctx->r10 << 1);
            goto L_00277924;
    }
    // 0x0027791C: sll         $s4, $t2, 1
    ctx->r20 = S32(ctx->r10 << 1);
    // 0x00277920: srl         $s4, $t2, 1
    ctx->r20 = S32(U32(ctx->r10) >> 1);
L_00277924:
    // 0x00277924: bne         $v0, $zero, L_00277930
    if (ctx->r2 != 0) {
        // 0x00277928: sll         $s3, $t3, 1
        ctx->r19 = S32(ctx->r11 << 1);
            goto L_00277930;
    }
    // 0x00277928: sll         $s3, $t3, 1
    ctx->r19 = S32(ctx->r11 << 1);
    // 0x0027792C: srl         $s3, $t3, 1
    ctx->r19 = S32(U32(ctx->r11) >> 1);
L_00277930:
    // 0x00277930: lui         $a0, 0xFA00
    ctx->r4 = S32(0XFA00 << 16);
    // 0x00277934: ori         $a0, $a0, 0xFFFF
    ctx->r4 = ctx->r4 | 0XFFFF;
    // 0x00277938: lui         $v0, 0xE700
    ctx->r2 = S32(0XE700 << 16);
    // 0x0027793C: lui         $t0, 0x800E
    ctx->r8 = S32(0X800E << 16);
    // 0x00277940: lw          $t0, -0x71DC($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X71DC);
    // 0x00277944: andi        $t7, $s6, 0xFF
    ctx->r15 = ctx->r22 & 0XFF;
    // 0x00277948: addu        $v1, $t0, $zero
    ctx->r3 = ADD32(ctx->r8, 0);
    // 0x0027794C: addiu       $t0, $t0, 0x8
    ctx->r8 = ADD32(ctx->r8, 0X8);
    // 0x00277950: addiu       $t5, $t0, 0x8
    ctx->r13 = ADD32(ctx->r8, 0X8);
    // 0x00277954: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x00277958: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x0027795C: sll         $v1, $t1, 24
    ctx->r3 = S32(ctx->r9 << 24);
    // 0x00277960: andi        $v0, $t2, 0xFF
    ctx->r2 = ctx->r10 & 0XFF;
    // 0x00277964: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x00277968: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x0027796C: andi        $v0, $t3, 0xFF
    ctx->r2 = ctx->r11 & 0XFF;
    // 0x00277970: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x00277974: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x00277978: or          $v1, $v1, $t7
    ctx->r3 = ctx->r3 | ctx->r15;
    // 0x0027797C: addiu       $t3, $t0, 0x10
    ctx->r11 = ADD32(ctx->r8, 0X10);
    // 0x00277980: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x00277984: sw          $t0, -0x71DC($at)
    MEM_W(-0X71DC, ctx->r1) = ctx->r8;
    // 0x00277988: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x0027798C: sw          $t5, -0x71DC($at)
    MEM_W(-0X71DC, ctx->r1) = ctx->r13;
    // 0x00277990: sw          $a0, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r4;
    // 0x00277994: sw          $v1, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r3;
    // 0x00277998: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x0027799C: sw          $t3, -0x71DC($at)
    MEM_W(-0X71DC, ctx->r1) = ctx->r11;
    // 0x002779A0: bgez        $a2, L_002779AC
    if (SIGNED(ctx->r6) >= 0) {
        // 0x002779A4: addu        $t4, $a2, $zero
        ctx->r12 = ADD32(ctx->r6, 0);
            goto L_002779AC;
    }
    // 0x002779A4: addu        $t4, $a2, $zero
    ctx->r12 = ADD32(ctx->r6, 0);
    // 0x002779A8: addu        $t4, $zero, $zero
    ctx->r12 = ADD32(0, 0);
L_002779AC:
    // 0x002779AC: addu        $v1, $a3, $zero
    ctx->r3 = ADD32(ctx->r7, 0);
    // 0x002779B0: andi        $v0, $t4, 0x3FF
    ctx->r2 = ctx->r12 & 0X3FF;
    // 0x002779B4: bgez        $a3, L_002779C0
    if (SIGNED(ctx->r7) >= 0) {
        // 0x002779B8: sll         $a0, $v0, 14
        ctx->r4 = S32(ctx->r2 << 14);
            goto L_002779C0;
    }
    // 0x002779B8: sll         $a0, $v0, 14
    ctx->r4 = S32(ctx->r2 << 14);
    // 0x002779BC: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
L_002779C0:
    // 0x002779C0: andi        $v0, $v1, 0x3FF
    ctx->r2 = ctx->r3 & 0X3FF;
    // 0x002779C4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x002779C8: lui         $v1, 0xF600
    ctx->r3 = S32(0XF600 << 16);
    // 0x002779CC: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x002779D0: or          $v0, $a0, $v0
    ctx->r2 = ctx->r4 | ctx->r2;
    // 0x002779D4: sw          $v0, 0x8($t0)
    MEM_W(0X8, ctx->r8) = ctx->r2;
    // 0x002779D8: bgez        $t8, L_002779E4
    if (SIGNED(ctx->r24) >= 0) {
        // 0x002779DC: addu        $v0, $t8, $zero
        ctx->r2 = ADD32(ctx->r24, 0);
            goto L_002779E4;
    }
    // 0x002779DC: addu        $v0, $t8, $zero
    ctx->r2 = ADD32(ctx->r24, 0);
    // 0x002779E0: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_002779E4:
    // 0x002779E4: addu        $a0, $a1, $zero
    ctx->r4 = ADD32(ctx->r5, 0);
    // 0x002779E8: andi        $v0, $v0, 0x3FF
    ctx->r2 = ctx->r2 & 0X3FF;
    // 0x002779EC: bgez        $a1, L_002779F8
    if (SIGNED(ctx->r5) >= 0) {
        // 0x002779F0: sll         $t1, $v0, 14
        ctx->r9 = S32(ctx->r2 << 14);
            goto L_002779F8;
    }
    // 0x002779F0: sll         $t1, $v0, 14
    ctx->r9 = S32(ctx->r2 << 14);
    // 0x002779F4: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
L_002779F8:
    // 0x002779F8: lui         $v1, 0xFA00
    ctx->r3 = S32(0XFA00 << 16);
    // 0x002779FC: ori         $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 | 0XFFFF;
    // 0x00277A00: addu        $t2, $a2, $zero
    ctx->r10 = ADD32(ctx->r6, 0);
    // 0x00277A04: andi        $v0, $a0, 0x3FF
    ctx->r2 = ctx->r4 & 0X3FF;
    // 0x00277A08: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x00277A0C: or          $v0, $t1, $v0
    ctx->r2 = ctx->r9 | ctx->r2;
    // 0x00277A10: addiu       $a0, $t0, 0x18
    ctx->r4 = ADD32(ctx->r8, 0X18);
    // 0x00277A14: sw          $v0, 0x4($t5)
    MEM_W(0X4, ctx->r13) = ctx->r2;
    // 0x00277A18: lui         $v0, 0xE700
    ctx->r2 = S32(0XE700 << 16);
    // 0x00277A1C: addiu       $t6, $t0, 0x20
    ctx->r14 = ADD32(ctx->r8, 0X20);
    // 0x00277A20: sw          $v0, 0x10($t0)
    MEM_W(0X10, ctx->r8) = ctx->r2;
    // 0x00277A24: sw          $zero, 0x4($t3)
    MEM_W(0X4, ctx->r11) = 0;
    // 0x00277A28: sw          $v1, 0x18($t0)
    MEM_W(0X18, ctx->r8) = ctx->r3;
    // 0x00277A2C: sll         $v1, $s1, 24
    ctx->r3 = S32(ctx->r17 << 24);
    // 0x00277A30: andi        $v0, $s0, 0xFF
    ctx->r2 = ctx->r16 & 0XFF;
    // 0x00277A34: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x00277A38: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x00277A3C: andi        $v0, $t9, 0xFF
    ctx->r2 = ctx->r25 & 0XFF;
    // 0x00277A40: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x00277A44: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x00277A48: or          $t4, $v1, $t7
    ctx->r12 = ctx->r3 | ctx->r15;
    // 0x00277A4C: addiu       $t3, $t0, 0x28
    ctx->r11 = ADD32(ctx->r8, 0X28);
    // 0x00277A50: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x00277A54: sw          $a0, -0x71DC($at)
    MEM_W(-0X71DC, ctx->r1) = ctx->r4;
    // 0x00277A58: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x00277A5C: sw          $t6, -0x71DC($at)
    MEM_W(-0X71DC, ctx->r1) = ctx->r14;
    // 0x00277A60: sw          $t4, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r12;
    // 0x00277A64: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x00277A68: sw          $t3, -0x71DC($at)
    MEM_W(-0X71DC, ctx->r1) = ctx->r11;
    // 0x00277A6C: bgez        $a2, L_00277A78
    if (SIGNED(ctx->r6) >= 0) {
        // 0x00277A70: addu        $v0, $a1, $s2
        ctx->r2 = ADD32(ctx->r5, ctx->r18);
            goto L_00277A78;
    }
    // 0x00277A70: addu        $v0, $a1, $s2
    ctx->r2 = ADD32(ctx->r5, ctx->r18);
    // 0x00277A74: addu        $t2, $zero, $zero
    ctx->r10 = ADD32(0, 0);
L_00277A78:
    // 0x00277A78: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x00277A7C: andi        $v0, $t2, 0x3FF
    ctx->r2 = ctx->r10 & 0X3FF;
    // 0x00277A80: bgez        $v1, L_00277A8C
    if (SIGNED(ctx->r3) >= 0) {
        // 0x00277A84: sll         $a0, $v0, 14
        ctx->r4 = S32(ctx->r2 << 14);
            goto L_00277A8C;
    }
    // 0x00277A84: sll         $a0, $v0, 14
    ctx->r4 = S32(ctx->r2 << 14);
    // 0x00277A88: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
L_00277A8C:
    // 0x00277A8C: andi        $v0, $v1, 0x3FF
    ctx->r2 = ctx->r3 & 0X3FF;
    // 0x00277A90: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x00277A94: lui         $v1, 0xF600
    ctx->r3 = S32(0XF600 << 16);
    // 0x00277A98: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x00277A9C: or          $v0, $a0, $v0
    ctx->r2 = ctx->r4 | ctx->r2;
    // 0x00277AA0: sw          $v0, 0x20($t0)
    MEM_W(0X20, ctx->r8) = ctx->r2;
    // 0x00277AA4: bgez        $t8, L_00277AB0
    if (SIGNED(ctx->r24) >= 0) {
        // 0x00277AA8: addu        $v0, $t8, $zero
        ctx->r2 = ADD32(ctx->r24, 0);
            goto L_00277AB0;
    }
    // 0x00277AA8: addu        $v0, $t8, $zero
    ctx->r2 = ADD32(ctx->r24, 0);
    // 0x00277AAC: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_00277AB0:
    // 0x00277AB0: addu        $v1, $a1, $zero
    ctx->r3 = ADD32(ctx->r5, 0);
    // 0x00277AB4: andi        $v0, $v0, 0x3FF
    ctx->r2 = ctx->r2 & 0X3FF;
    // 0x00277AB8: bgez        $a1, L_00277AC4
    if (SIGNED(ctx->r5) >= 0) {
        // 0x00277ABC: sll         $a0, $v0, 14
        ctx->r4 = S32(ctx->r2 << 14);
            goto L_00277AC4;
    }
    // 0x00277ABC: sll         $a0, $v0, 14
    ctx->r4 = S32(ctx->r2 << 14);
    // 0x00277AC0: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
L_00277AC4:
    // 0x00277AC4: lui         $t5, 0xFA00
    ctx->r13 = S32(0XFA00 << 16);
    // 0x00277AC8: ori         $t5, $t5, 0xFFFF
    ctx->r13 = ctx->r13 | 0XFFFF;
    // 0x00277ACC: addu        $t1, $a2, $zero
    ctx->r9 = ADD32(ctx->r6, 0);
    // 0x00277AD0: andi        $v0, $v1, 0x3FF
    ctx->r2 = ctx->r3 & 0X3FF;
    // 0x00277AD4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x00277AD8: or          $v0, $a0, $v0
    ctx->r2 = ctx->r4 | ctx->r2;
    // 0x00277ADC: sw          $v0, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r2;
    // 0x00277AE0: addiu       $v0, $t0, 0x30
    ctx->r2 = ADD32(ctx->r8, 0X30);
    // 0x00277AE4: lui         $t7, 0xE700
    ctx->r15 = S32(0XE700 << 16);
    // 0x00277AE8: sw          $t7, 0x28($t0)
    MEM_W(0X28, ctx->r8) = ctx->r15;
    // 0x00277AEC: sw          $zero, 0x4($t3)
    MEM_W(0X4, ctx->r11) = 0;
    // 0x00277AF0: addiu       $t3, $t0, 0x38
    ctx->r11 = ADD32(ctx->r8, 0X38);
    // 0x00277AF4: sw          $t5, 0x30($t0)
    MEM_W(0X30, ctx->r8) = ctx->r13;
    // 0x00277AF8: sw          $t4, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r12;
    // 0x00277AFC: addiu       $t4, $t0, 0x40
    ctx->r12 = ADD32(ctx->r8, 0X40);
    // 0x00277B00: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x00277B04: sw          $v0, -0x71DC($at)
    MEM_W(-0X71DC, ctx->r1) = ctx->r2;
    // 0x00277B08: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x00277B0C: sw          $t3, -0x71DC($at)
    MEM_W(-0X71DC, ctx->r1) = ctx->r11;
    // 0x00277B10: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x00277B14: sw          $t4, -0x71DC($at)
    MEM_W(-0X71DC, ctx->r1) = ctx->r12;
    // 0x00277B18: bgez        $a2, L_00277B24
    if (SIGNED(ctx->r6) >= 0) {
        // 0x00277B1C: subu        $t2, $a2, $s2
        ctx->r10 = SUB32(ctx->r6, ctx->r18);
            goto L_00277B24;
    }
    // 0x00277B1C: subu        $t2, $a2, $s2
    ctx->r10 = SUB32(ctx->r6, ctx->r18);
    // 0x00277B20: addu        $t1, $zero, $zero
    ctx->r9 = ADD32(0, 0);
L_00277B24:
    // 0x00277B24: addu        $v1, $a3, $zero
    ctx->r3 = ADD32(ctx->r7, 0);
    // 0x00277B28: andi        $v0, $t1, 0x3FF
    ctx->r2 = ctx->r9 & 0X3FF;
    // 0x00277B2C: bgez        $a3, L_00277B38
    if (SIGNED(ctx->r7) >= 0) {
        // 0x00277B30: sll         $a0, $v0, 14
        ctx->r4 = S32(ctx->r2 << 14);
            goto L_00277B38;
    }
    // 0x00277B30: sll         $a0, $v0, 14
    ctx->r4 = S32(ctx->r2 << 14);
    // 0x00277B34: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
L_00277B38:
    // 0x00277B38: andi        $v0, $v1, 0x3FF
    ctx->r2 = ctx->r3 & 0X3FF;
    // 0x00277B3C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x00277B40: lui         $t6, 0xF600
    ctx->r14 = S32(0XF600 << 16);
    // 0x00277B44: or          $v0, $v0, $t6
    ctx->r2 = ctx->r2 | ctx->r14;
    // 0x00277B48: or          $v0, $a0, $v0
    ctx->r2 = ctx->r4 | ctx->r2;
    // 0x00277B4C: sw          $v0, 0x38($t0)
    MEM_W(0X38, ctx->r8) = ctx->r2;
    // 0x00277B50: addu        $v0, $t2, $zero
    ctx->r2 = ADD32(ctx->r10, 0);
    // 0x00277B54: bltzl       $v0, L_00277B5C
    if (SIGNED(ctx->r2) < 0) {
        // 0x00277B58: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_00277B5C;
    }
    goto skip_0;
    // 0x00277B58: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    skip_0:
L_00277B5C:
    // 0x00277B5C: addu        $v1, $a1, $zero
    ctx->r3 = ADD32(ctx->r5, 0);
    // 0x00277B60: andi        $v0, $v0, 0x3FF
    ctx->r2 = ctx->r2 & 0X3FF;
    // 0x00277B64: bgez        $a1, L_00277B70
    if (SIGNED(ctx->r5) >= 0) {
        // 0x00277B68: sll         $a0, $v0, 14
        ctx->r4 = S32(ctx->r2 << 14);
            goto L_00277B70;
    }
    // 0x00277B68: sll         $a0, $v0, 14
    ctx->r4 = S32(ctx->r2 << 14);
    // 0x00277B6C: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
L_00277B70:
    // 0x00277B70: andi        $v0, $v1, 0x3FF
    ctx->r2 = ctx->r3 & 0X3FF;
    // 0x00277B74: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x00277B78: or          $v0, $a0, $v0
    ctx->r2 = ctx->r4 | ctx->r2;
    // 0x00277B7C: addiu       $a0, $t0, 0x48
    ctx->r4 = ADD32(ctx->r8, 0X48);
    // 0x00277B80: sw          $v0, 0x4($t3)
    MEM_W(0X4, ctx->r11) = ctx->r2;
    // 0x00277B84: addiu       $t3, $t0, 0x50
    ctx->r11 = ADD32(ctx->r8, 0X50);
    // 0x00277B88: sll         $v1, $s5, 24
    ctx->r3 = S32(ctx->r21 << 24);
    // 0x00277B8C: andi        $v0, $s4, 0xFF
    ctx->r2 = ctx->r20 & 0XFF;
    // 0x00277B90: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x00277B94: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x00277B98: andi        $v0, $s3, 0xFF
    ctx->r2 = ctx->r19 & 0XFF;
    // 0x00277B9C: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x00277BA0: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x00277BA4: andi        $v0, $s6, 0xFF
    ctx->r2 = ctx->r22 & 0XFF;
    // 0x00277BA8: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x00277BAC: addiu       $t2, $t0, 0x58
    ctx->r10 = ADD32(ctx->r8, 0X58);
    // 0x00277BB0: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x00277BB4: sw          $a0, -0x71DC($at)
    MEM_W(-0X71DC, ctx->r1) = ctx->r4;
    // 0x00277BB8: sw          $t7, 0x40($t0)
    MEM_W(0X40, ctx->r8) = ctx->r15;
    // 0x00277BBC: sw          $zero, 0x4($t4)
    MEM_W(0X4, ctx->r12) = 0;
    // 0x00277BC0: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x00277BC4: sw          $t3, -0x71DC($at)
    MEM_W(-0X71DC, ctx->r1) = ctx->r11;
    // 0x00277BC8: sw          $t5, 0x48($t0)
    MEM_W(0X48, ctx->r8) = ctx->r13;
    // 0x00277BCC: sw          $v1, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r3;
    // 0x00277BD0: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x00277BD4: sw          $t2, -0x71DC($at)
    MEM_W(-0X71DC, ctx->r1) = ctx->r10;
    // 0x00277BD8: bgez        $a2, L_00277BE4
    if (SIGNED(ctx->r6) >= 0) {
        // 0x00277BDC: subu        $t1, $a3, $s2
        ctx->r9 = SUB32(ctx->r7, ctx->r18);
            goto L_00277BE4;
    }
    // 0x00277BDC: subu        $t1, $a3, $s2
    ctx->r9 = SUB32(ctx->r7, ctx->r18);
    // 0x00277BE0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
L_00277BE4:
    // 0x00277BE4: addu        $a0, $a3, $zero
    ctx->r4 = ADD32(ctx->r7, 0);
    // 0x00277BE8: andi        $v0, $a2, 0x3FF
    ctx->r2 = ctx->r6 & 0X3FF;
    // 0x00277BEC: bgez        $a3, L_00277BF8
    if (SIGNED(ctx->r7) >= 0) {
        // 0x00277BF0: sll         $a2, $v0, 14
        ctx->r6 = S32(ctx->r2 << 14);
            goto L_00277BF8;
    }
    // 0x00277BF0: sll         $a2, $v0, 14
    ctx->r6 = S32(ctx->r2 << 14);
    // 0x00277BF4: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
L_00277BF8:
    // 0x00277BF8: andi        $v0, $a0, 0x3FF
    ctx->r2 = ctx->r4 & 0X3FF;
    // 0x00277BFC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x00277C00: or          $v0, $v0, $t6
    ctx->r2 = ctx->r2 | ctx->r14;
    // 0x00277C04: or          $v0, $a2, $v0
    ctx->r2 = ctx->r6 | ctx->r2;
    // 0x00277C08: sw          $v0, 0x50($t0)
    MEM_W(0X50, ctx->r8) = ctx->r2;
    // 0x00277C0C: bgez        $t8, L_00277C18
    if (SIGNED(ctx->r24) >= 0) {
        // 0x00277C10: addu        $v0, $t8, $zero
        ctx->r2 = ADD32(ctx->r24, 0);
            goto L_00277C18;
    }
    // 0x00277C10: addu        $v0, $t8, $zero
    ctx->r2 = ADD32(ctx->r24, 0);
    // 0x00277C14: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_00277C18:
    // 0x00277C18: addu        $a0, $t1, $zero
    ctx->r4 = ADD32(ctx->r9, 0);
    // 0x00277C1C: andi        $v0, $v0, 0x3FF
    ctx->r2 = ctx->r2 & 0X3FF;
    // 0x00277C20: bgez        $a0, L_00277C2C
    if (SIGNED(ctx->r4) >= 0) {
        // 0x00277C24: sll         $t1, $v0, 14
        ctx->r9 = S32(ctx->r2 << 14);
            goto L_00277C2C;
    }
    // 0x00277C24: sll         $t1, $v0, 14
    ctx->r9 = S32(ctx->r2 << 14);
    // 0x00277C28: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
L_00277C2C:
    // 0x00277C2C: addu        $a2, $t8, $s2
    ctx->r6 = ADD32(ctx->r24, ctx->r18);
    // 0x00277C30: andi        $v0, $a0, 0x3FF
    ctx->r2 = ctx->r4 & 0X3FF;
    // 0x00277C34: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x00277C38: or          $v0, $t1, $v0
    ctx->r2 = ctx->r9 | ctx->r2;
    // 0x00277C3C: sw          $v0, 0x4($t3)
    MEM_W(0X4, ctx->r11) = ctx->r2;
    // 0x00277C40: addiu       $v0, $t0, 0x60
    ctx->r2 = ADD32(ctx->r8, 0X60);
    // 0x00277C44: addiu       $t1, $t0, 0x68
    ctx->r9 = ADD32(ctx->r8, 0X68);
    // 0x00277C48: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x00277C4C: sw          $v0, -0x71DC($at)
    MEM_W(-0X71DC, ctx->r1) = ctx->r2;
    // 0x00277C50: sw          $t7, 0x58($t0)
    MEM_W(0X58, ctx->r8) = ctx->r15;
    // 0x00277C54: sw          $zero, 0x4($t2)
    MEM_W(0X4, ctx->r10) = 0;
    // 0x00277C58: sw          $t5, 0x60($t0)
    MEM_W(0X60, ctx->r8) = ctx->r13;
    // 0x00277C5C: sw          $v1, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r3;
    // 0x00277C60: addiu       $v0, $t0, 0x70
    ctx->r2 = ADD32(ctx->r8, 0X70);
    // 0x00277C64: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x00277C68: sw          $t1, -0x71DC($at)
    MEM_W(-0X71DC, ctx->r1) = ctx->r9;
    // 0x00277C6C: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x00277C70: sw          $v0, -0x71DC($at)
    MEM_W(-0X71DC, ctx->r1) = ctx->r2;
    // 0x00277C74: bltzl       $a2, L_00277C7C
    if (SIGNED(ctx->r6) < 0) {
        // 0x00277C78: addu        $a2, $zero, $zero
        ctx->r6 = ADD32(0, 0);
            goto L_00277C7C;
    }
    goto skip_1;
    // 0x00277C78: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    skip_1:
L_00277C7C:
    // 0x00277C7C: andi        $v0, $a2, 0x3FF
    ctx->r2 = ctx->r6 & 0X3FF;
    // 0x00277C80: bgez        $a3, L_00277C8C
    if (SIGNED(ctx->r7) >= 0) {
        // 0x00277C84: sll         $v1, $v0, 14
        ctx->r3 = S32(ctx->r2 << 14);
            goto L_00277C8C;
    }
    // 0x00277C84: sll         $v1, $v0, 14
    ctx->r3 = S32(ctx->r2 << 14);
    // 0x00277C88: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
L_00277C8C:
    // 0x00277C8C: andi        $v0, $a3, 0x3FF
    ctx->r2 = ctx->r7 & 0X3FF;
    // 0x00277C90: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x00277C94: or          $v0, $v0, $t6
    ctx->r2 = ctx->r2 | ctx->r14;
    // 0x00277C98: or          $v0, $v1, $v0
    ctx->r2 = ctx->r3 | ctx->r2;
    // 0x00277C9C: addu        $a0, $t8, $zero
    ctx->r4 = ADD32(ctx->r24, 0);
    // 0x00277CA0: bgez        $a0, L_00277CAC
    if (SIGNED(ctx->r4) >= 0) {
        // 0x00277CA4: sw          $v0, 0x68($t0)
        MEM_W(0X68, ctx->r8) = ctx->r2;
            goto L_00277CAC;
    }
    // 0x00277CA4: sw          $v0, 0x68($t0)
    MEM_W(0X68, ctx->r8) = ctx->r2;
    // 0x00277CA8: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
L_00277CAC:
    // 0x00277CAC: andi        $v0, $a0, 0x3FF
    ctx->r2 = ctx->r4 & 0X3FF;
    // 0x00277CB0: bgez        $a1, L_00277CBC
    if (SIGNED(ctx->r5) >= 0) {
        // 0x00277CB4: sll         $v1, $v0, 14
        ctx->r3 = S32(ctx->r2 << 14);
            goto L_00277CBC;
    }
    // 0x00277CB4: sll         $v1, $v0, 14
    ctx->r3 = S32(ctx->r2 << 14);
    // 0x00277CB8: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
L_00277CBC:
    // 0x00277CBC: andi        $v0, $a1, 0x3FF
    ctx->r2 = ctx->r5 & 0X3FF;
    // 0x00277CC0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x00277CC4: or          $v0, $v1, $v0
    ctx->r2 = ctx->r3 | ctx->r2;
    // 0x00277CC8: sw          $v0, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r2;
    // 0x00277CCC: lw          $s6, 0x18($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X18);
    // 0x00277CD0: lw          $s5, 0x14($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X14);
    // 0x00277CD4: lw          $s4, 0x10($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X10);
    // 0x00277CD8: lw          $s3, 0xC($sp)
    ctx->r19 = MEM_W(ctx->r29, 0XC);
    // 0x00277CDC: lw          $s2, 0x8($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X8);
    // 0x00277CE0: lw          $s1, 0x4($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X4);
    // 0x00277CE4: lw          $s0, 0x0($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X0);
    // 0x00277CE8: jr          $ra
    // 0x00277CEC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00277CEC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_0029A380(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0029A380: lui         $v0, 0xA404
    ctx->r2 = S32(0XA404 << 16);
    // 0x0029A384: ori         $v0, $v0, 0x10
    ctx->r2 = ctx->r2 | 0X10;
    // 0x0029A388: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x0029A38C: andi        $v0, $v0, 0x1C
    ctx->r2 = ctx->r2 & 0X1C;
    // 0x0029A390: jr          $ra
    // 0x0029A394: sltu        $v0, $zero, $v0
    ctx->r2 = 0 < ctx->r2 ? 1 : 0;
    return;
    // 0x0029A394: sltu        $v0, $zero, $v0
    ctx->r2 = 0 < ctx->r2 ? 1 : 0;
;}
RECOMP_FUNC void func_0041BC04(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041BC04: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0041BC08: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x0041BC0C: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x0041BC10: sb          $v0, 0x29($a0)
    MEM_B(0X29, ctx->r4) = ctx->r2;
    // 0x0041BC14: sb          $v0, 0x2A($a0)
    MEM_B(0X2A, ctx->r4) = ctx->r2;
    // 0x0041BC18: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0041BC1C: sb          $zero, 0x28($a0)
    MEM_B(0X28, ctx->r4) = 0;
    // 0x0041BC20: sb          $zero, 0x2C($a0)
    MEM_B(0X2C, ctx->r4) = 0;
    // 0x0041BC24: sb          $zero, 0x2B($a0)
    MEM_B(0X2B, ctx->r4) = 0;
    // 0x0041BC28: sb          $v0, 0x2D($a0)
    MEM_B(0X2D, ctx->r4) = ctx->r2;
    // 0x0041BC2C: sb          $zero, 0x2E($a0)
    MEM_B(0X2E, ctx->r4) = 0;
    // 0x0041BC30: sb          $a1, 0x2F($a0)
    MEM_B(0X2F, ctx->r4) = ctx->r5;
    // 0x0041BC34: sb          $zero, 0x30($a0)
    MEM_B(0X30, ctx->r4) = 0;
    // 0x0041BC38: sb          $v0, 0x31($a0)
    MEM_B(0X31, ctx->r4) = ctx->r2;
    // 0x0041BC3C: jal         0x0041BC50
    // 0x0041BC40: sb          $zero, 0x32($a0)
    MEM_B(0X32, ctx->r4) = 0;
    func_0041BC50(rdram, ctx);
        goto after_0;
    // 0x0041BC40: sb          $zero, 0x32($a0)
    MEM_B(0X32, ctx->r4) = 0;
    after_0:
    // 0x0041BC44: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x0041BC48: jr          $ra
    // 0x0041BC4C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0041BC4C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00440800(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00440800: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00440804: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x00440808: lb          $v0, 0xC7($a1)
    ctx->r2 = MEM_B(ctx->r5, 0XC7);
    // 0x0044080C: beq         $v0, $zero, L_00440830
    if (ctx->r2 == 0) {
        // 0x00440810: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_00440830;
    }
    // 0x00440810: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x00440814: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00440818: lwc1        $f0, 0x544($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X544);
    // 0x0044081C: swc1        $f0, 0x1FC($a0)
    MEM_W(0X1FC, ctx->r4) = ctx->f0.u32l;
    // 0x00440820: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x00440824: sw          $v0, -0x5FC($at)
    MEM_W(-0X5FC, ctx->r1) = ctx->r2;
    // 0x00440828: jal         0x00243414
    // 0x0044082C: addiu       $a2, $zero, 0x13
    ctx->r6 = ADD32(0, 0X13);
    func_00243414(rdram, ctx);
        goto after_0;
    // 0x0044082C: addiu       $a2, $zero, 0x13
    ctx->r6 = ADD32(0, 0X13);
    after_0:
L_00440830:
    // 0x00440830: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x00440834: jr          $ra
    // 0x00440838: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00440838: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0040DB90(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0040DB90: jr          $ra
    // 0x0040DB94: nop

    return;
    // 0x0040DB94: nop

;}
RECOMP_FUNC void func_0043FF10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0043FF10: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x0043FF14: bne         $a0, $v0, L_0043FF78
    if (ctx->r4 != ctx->r2) {
        // 0x0043FF18: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_0043FF78;
    }
    // 0x0043FF18: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0043FF1C: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x0043FF20: addiu       $a1, $a1, -0x9F8
    ctx->r5 = ADD32(ctx->r5, -0X9F8);
    // 0x0043FF24: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x0043FF28: bne         $v1, $v0, L_0043FF3C
    if (ctx->r3 != ctx->r2) {
        // 0x0043FF2C: nop
    
            goto L_0043FF3C;
    }
    // 0x0043FF2C: nop

    // 0x0043FF30: lui         $v0, 0x43
    ctx->r2 = S32(0X43 << 16);
    // 0x0043FF34: addiu       $v0, $v0, 0xFB4
    ctx->r2 = ADD32(ctx->r2, 0XFB4);
    // 0x0043FF38: sw          $v0, 0x3F4($a1)
    MEM_W(0X3F4, ctx->r5) = ctx->r2;
L_0043FF3C:
    // 0x0043FF3C: bne         $v1, $a0, L_0043FF54
    if (ctx->r3 != ctx->r4) {
        // 0x0043FF40: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_0043FF54;
    }
    // 0x0043FF40: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x0043FF44: lui         $v0, 0x43
    ctx->r2 = S32(0X43 << 16);
    // 0x0043FF48: addiu       $v0, $v0, 0x10B8
    ctx->r2 = ADD32(ctx->r2, 0X10B8);
    // 0x0043FF4C: sw          $v0, 0x3F4($a1)
    MEM_W(0X3F4, ctx->r5) = ctx->r2;
    // 0x0043FF50: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
L_0043FF54:
    // 0x0043FF54: bne         $v1, $v0, L_0043FF6C
    if (ctx->r3 != ctx->r2) {
        // 0x0043FF58: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_0043FF6C;
    }
    // 0x0043FF58: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x0043FF5C: lui         $v0, 0x43
    ctx->r2 = S32(0X43 << 16);
    // 0x0043FF60: addiu       $v0, $v0, 0x1220
    ctx->r2 = ADD32(ctx->r2, 0X1220);
    // 0x0043FF64: sw          $v0, 0x3F4($a1)
    MEM_W(0X3F4, ctx->r5) = ctx->r2;
    // 0x0043FF68: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_0043FF6C:
    // 0x0043FF6C: sw          $v0, 0x3F8($a1)
    MEM_W(0X3F8, ctx->r5) = ctx->r2;
    // 0x0043FF70: sw          $v0, 0x3FC($a1)
    MEM_W(0X3FC, ctx->r5) = ctx->r2;
    // 0x0043FF74: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_0043FF78:
    // 0x0043FF78: bne         $a0, $v0, L_0043FFDC
    if (ctx->r4 != ctx->r2) {
        // 0x0043FF7C: nop
    
            goto L_0043FFDC;
    }
    // 0x0043FF7C: nop

    // 0x0043FF80: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x0043FF84: addiu       $a1, $a1, -0x9F8
    ctx->r5 = ADD32(ctx->r5, -0X9F8);
    // 0x0043FF88: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x0043FF8C: bne         $v1, $a0, L_0043FFA4
    if (ctx->r3 != ctx->r4) {
        // 0x0043FF90: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_0043FFA4;
    }
    // 0x0043FF90: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x0043FF94: lui         $v0, 0x43
    ctx->r2 = S32(0X43 << 16);
    // 0x0043FF98: addiu       $v0, $v0, 0xF28
    ctx->r2 = ADD32(ctx->r2, 0XF28);
    // 0x0043FF9C: sw          $v0, 0x3F4($a1)
    MEM_W(0X3F4, ctx->r5) = ctx->r2;
    // 0x0043FFA0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_0043FFA4:
    // 0x0043FFA4: bne         $v1, $v0, L_0043FFBC
    if (ctx->r3 != ctx->r2) {
        // 0x0043FFA8: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_0043FFBC;
    }
    // 0x0043FFA8: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x0043FFAC: lui         $v0, 0x43
    ctx->r2 = S32(0X43 << 16);
    // 0x0043FFB0: addiu       $v0, $v0, 0x1004
    ctx->r2 = ADD32(ctx->r2, 0X1004);
    // 0x0043FFB4: sw          $v0, 0x3F4($a1)
    MEM_W(0X3F4, ctx->r5) = ctx->r2;
    // 0x0043FFB8: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
L_0043FFBC:
    // 0x0043FFBC: bne         $v1, $v0, L_0043FFD4
    if (ctx->r3 != ctx->r2) {
        // 0x0043FFC0: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_0043FFD4;
    }
    // 0x0043FFC0: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x0043FFC4: lui         $v0, 0x43
    ctx->r2 = S32(0X43 << 16);
    // 0x0043FFC8: addiu       $v0, $v0, 0x1158
    ctx->r2 = ADD32(ctx->r2, 0X1158);
    // 0x0043FFCC: sw          $v0, 0x3F4($a1)
    MEM_W(0X3F4, ctx->r5) = ctx->r2;
    // 0x0043FFD0: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_0043FFD4:
    // 0x0043FFD4: sw          $v0, 0x3F8($a1)
    MEM_W(0X3F8, ctx->r5) = ctx->r2;
    // 0x0043FFD8: sw          $v0, 0x3FC($a1)
    MEM_W(0X3FC, ctx->r5) = ctx->r2;
L_0043FFDC:
    // 0x0043FFDC: jr          $ra
    // 0x0043FFE0: nop

    return;
    // 0x0043FFE0: nop

;}
RECOMP_FUNC void func_00444310(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00444310: lw          $v0, 0x27C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X27C);
    // 0x00444314: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x00444318: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x0044431C: jr          $ra
    // 0x00444320: sw          $v0, 0x27C($a0)
    MEM_W(0X27C, ctx->r4) = ctx->r2;
    return;
    // 0x00444320: sw          $v0, 0x27C($a0)
    MEM_W(0X27C, ctx->r4) = ctx->r2;
;}
RECOMP_FUNC void func_002115D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002115D4: jr          $ra
    // 0x002115D8: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
    return;
    // 0x002115D8: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
;}
RECOMP_FUNC void func_002718BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002718BC: jr          $ra
    // 0x002718C0: sw          $a1, 0x2BAC($a0)
    MEM_W(0X2BAC, ctx->r4) = ctx->r5;
    return;
    // 0x002718C0: sw          $a1, 0x2BAC($a0)
    MEM_W(0X2BAC, ctx->r4) = ctx->r5;
;}
RECOMP_FUNC void func_00447430(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00447430: lb          $v0, 0xC7($a1)
    ctx->r2 = MEM_B(ctx->r5, 0XC7);
    // 0x00447434: beq         $v0, $zero, L_00447448
    if (ctx->r2 == 0) {
        // 0x00447438: addiu       $v1, $zero, -0x101
        ctx->r3 = ADD32(0, -0X101);
            goto L_00447448;
    }
    // 0x00447438: addiu       $v1, $zero, -0x101
    ctx->r3 = ADD32(0, -0X101);
    // 0x0044743C: lw          $v0, 0xD4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XD4);
    // 0x00447440: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x00447444: sw          $v0, 0xD4($a0)
    MEM_W(0XD4, ctx->r4) = ctx->r2;
L_00447448:
    // 0x00447448: jr          $ra
    // 0x0044744C: nop

    return;
    // 0x0044744C: nop

;}
RECOMP_FUNC void func_004237FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004237FC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x00423800: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x00423804: sw          $zero, 0x940($at)
    MEM_W(0X940, ctx->r1) = 0;
    // 0x00423808: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x0042380C: lw          $a1, 0x24($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X24);
    // 0x00423810: lw          $a2, 0x1C($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X1C);
    // 0x00423814: lw          $a3, 0x20($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X20);
    // 0x00423818: j           L_00423864
    // 0x0042381C: nop

        goto L_00423864;
    // 0x0042381C: nop

    // 0x00423820: lw          $v1, 0x24($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X24);
    // 0x00423824: lui         $v0, 0x44
    ctx->r2 = S32(0X44 << 16);
    // 0x00423828: addiu       $v0, $v0, -0x410C
    ctx->r2 = ADD32(ctx->r2, -0X410C);
    // 0x0042382C: beq         $v1, $v0, L_00423844
    if (ctx->r3 == ctx->r2) {
        // 0x00423830: nop
    
            goto L_00423844;
    }
    // 0x00423830: nop

    // 0x00423834: lui         $v0, 0x44
    ctx->r2 = S32(0X44 << 16);
    // 0x00423838: addiu       $v0, $v0, -0x4130
    ctx->r2 = ADD32(ctx->r2, -0X4130);
    // 0x0042383C: bnel        $v1, $v0, L_00423850
    if (ctx->r3 != ctx->r2) {
        // 0x00423840: sw          $zero, 0x10($sp)
        MEM_W(0X10, ctx->r29) = 0;
            goto L_00423850;
    }
    goto skip_0;
    // 0x00423840: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    skip_0:
L_00423844:
    // 0x00423844: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x00423848: sw          $zero, 0x940($at)
    MEM_W(0X940, ctx->r1) = 0;
    // 0x0042384C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
L_00423850:
    // 0x00423850: lw          $a1, 0x24($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X24);
    // 0x00423854: lw          $a2, 0x1C($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X1C);
    // 0x00423858: lw          $a3, 0x20($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X20);
    // 0x0042385C: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x00423860: addiu       $a0, $a0, -0x61D4
    ctx->r4 = ADD32(ctx->r4, -0X61D4);
L_00423864:
    // 0x00423864: jal         0x00416644
    // 0x00423868: nop

    func_00416644(rdram, ctx);
        goto after_0;
    // 0x00423868: nop

    after_0:
    // 0x0042386C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00423870: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x00423874: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x00423878: jr          $ra
    // 0x0042387C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x0042387C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_0044FDA4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0044FDA4: lh          $a0, 0x0($a0)
    ctx->r4 = MEM_H(ctx->r4, 0X0);
    // 0x0044FDA8: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
    // 0x0044FDAC: beq         $a0, $v1, L_0044FDB8
    if (ctx->r4 == ctx->r3) {
        // 0x0044FDB0: addiu       $v0, $zero, 0x330
        ctx->r2 = ADD32(0, 0X330);
            goto L_0044FDB8;
    }
    // 0x0044FDB0: addiu       $v0, $zero, 0x330
    ctx->r2 = ADD32(0, 0X330);
    // 0x0044FDB4: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_0044FDB8:
    // 0x0044FDB8: jr          $ra
    // 0x0044FDBC: nop

    return;
    // 0x0044FDBC: nop

;}
RECOMP_FUNC void func_00261E44(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00261E44: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00261E48: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00261E4C: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x00261E50: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x00261E54: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00261E58: lwc1        $f12, 0xBC($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0XBC);
    // 0x00261E5C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00261E60: lwc1        $f14, 0x7B40($at)
    ctx->f14.u32l = MEM_W(ctx->r1, 0X7B40);
    // 0x00261E64: lui         $a2, 0x3E4C
    ctx->r6 = S32(0X3E4C << 16);
    // 0x00261E68: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x00261E6C: jal         0x00211774
    // 0x00261E70: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    func_00211774(rdram, ctx);
        goto after_0;
    // 0x00261E70: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    after_0:
    // 0x00261E74: swc1        $f0, 0xBC($s0)
    MEM_W(0XBC, ctx->r16) = ctx->f0.u32l;
    // 0x00261E78: lwc1        $f12, 0x1C($s1)
    ctx->f12.u32l = MEM_W(ctx->r17, 0X1C);
    // 0x00261E7C: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x00261E80: lui         $a2, 0x3F83
    ctx->r6 = S32(0X3F83 << 16);
    // 0x00261E84: ori         $a2, $a2, 0x126F
    ctx->r6 = ctx->r6 | 0X126F;
    // 0x00261E88: jal         0x00211774
    // 0x00261E8C: nop

    func_00211774(rdram, ctx);
        goto after_1;
    // 0x00261E8C: nop

    after_1:
    // 0x00261E90: swc1        $f0, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->f0.u32l;
    // 0x00261E94: lwc1        $f1, 0x40($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X40);
    // 0x00261E98: lwc1        $f0, 0x64($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X64);
    // 0x00261E9C: c.le.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl <= ctx->f1.fl;
    // 0x00261EA0: nop

    // 0x00261EA4: bc1f        L_00261EB8
    if (!c1cs) {
        // 0x00261EA8: addiu       $a2, $zero, 0x6
        ctx->r6 = ADD32(0, 0X6);
            goto L_00261EB8;
    }
    // 0x00261EA8: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    // 0x00261EAC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x00261EB0: jal         0x00243414
    // 0x00261EB4: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_00243414(rdram, ctx);
        goto after_2;
    // 0x00261EB4: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_2:
L_00261EB8:
    // 0x00261EB8: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x00261EBC: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00261EC0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00261EC4: jr          $ra
    // 0x00261EC8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00261EC8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_004302A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004302A0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x004302A4: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    // 0x004302A8: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x004302AC: addiu       $v0, $v0, -0x52B8
    ctx->r2 = ADD32(ctx->r2, -0X52B8);
    // 0x004302B0: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x004302B4: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x004302B8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x004302BC: addiu       $v1, $zero, 0x400
    ctx->r3 = ADD32(0, 0X400);
    // 0x004302C0: sh          $a0, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r4;
    // 0x004302C4: sh          $v0, 0x4($a1)
    MEM_H(0X4, ctx->r5) = ctx->r2;
    // 0x004302C8: sh          $zero, 0x8($a1)
    MEM_H(0X8, ctx->r5) = 0;
    // turok2: reconnected split function: a stray ELF symbol at 0x004302CC ended
    // this function early, leaving it without its epilogue. On the
    // hardware execution simply continues into the next instruction.
    func_004302CC(rdram, ctx);
;}
RECOMP_FUNC void func_00443D60(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00443D60: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x00443D64: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x00443D68: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x00443D6C: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x00443D70: addu        $s2, $a1, $zero
    ctx->r18 = ADD32(ctx->r5, 0);
    // 0x00443D74: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x00443D78: addiu       $a0, $a0, 0x7078
    ctx->r4 = ADD32(ctx->r4, 0X7078);
    // 0x00443D7C: addiu       $a1, $zero, 0x44E
    ctx->r5 = ADD32(0, 0X44E);
    // 0x00443D80: addiu       $a2, $zero, 0x9
    ctx->r6 = ADD32(0, 0X9);
    // 0x00443D84: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x00443D88: lui         $s0, 0x8013
    ctx->r16 = S32(0X8013 << 16);
    // 0x00443D8C: addiu       $s0, $s0, -0x490
    ctx->r16 = ADD32(ctx->r16, -0X490);
    // 0x00443D90: addiu       $v0, $s0, 0x8
    ctx->r2 = ADD32(ctx->r16, 0X8);
    // 0x00443D94: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x00443D98: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x00443D9C: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x00443DA0: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x00443DA4: jal         0x00225F6C
    // 0x00443DA8: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    func_00225F6C(rdram, ctx);
        goto after_0;
    // 0x00443DA8: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    after_0:
    // 0x00443DAC: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
    // 0x00443DB0: blez        $v0, L_00443DEC
    if (SIGNED(ctx->r2) <= 0) {
        // 0x00443DB4: sw          $v0, 0x4($s0)
        MEM_W(0X4, ctx->r16) = ctx->r2;
            goto L_00443DEC;
    }
    // 0x00443DB4: sw          $v0, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r2;
    // 0x00443DB8: lui         $a2, 0x41
    ctx->r6 = S32(0X41 << 16);
    // 0x00443DBC: addiu       $a2, $a2, -0x411C
    ctx->r6 = ADD32(ctx->r6, -0X411C);
    // 0x00443DC0: lui         $a1, 0x41
    ctx->r5 = S32(0X41 << 16);
    // 0x00443DC4: addiu       $a1, $a1, -0x5DA4
    ctx->r5 = ADD32(ctx->r5, -0X5DA4);
    // 0x00443DC8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_00443DCC:
    // 0x00443DCC: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x00443DD0: sw          $a2, 0x234($v0)
    MEM_W(0X234, ctx->r2) = ctx->r6;
    // 0x00443DD4: sw          $a1, 0x248($v0)
    MEM_W(0X248, ctx->r2) = ctx->r5;
    // 0x00443DD8: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // 0x00443DDC: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x00443DE0: slt         $v0, $v1, $v0
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x00443DE4: bne         $v0, $zero, L_00443DCC
    if (ctx->r2 != 0) {
        // 0x00443DE8: addiu       $a0, $a0, 0x4
        ctx->r4 = ADD32(ctx->r4, 0X4);
            goto L_00443DCC;
    }
    // 0x00443DE8: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
L_00443DEC:
    // 0x00443DEC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x00443DF0: jal         0x0040AE24
    // 0x00443DF4: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    func_0040AE24(rdram, ctx);
        goto after_1;
    // 0x00443DF4: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    after_1:
    // 0x00443DF8: addiu       $a0, $zero, 0xC8
    ctx->r4 = ADD32(0, 0XC8);
    // 0x00443DFC: lui         $a1, 0x41
    ctx->r5 = S32(0X41 << 16);
    // 0x00443E00: addiu       $a1, $a1, -0x39A4
    ctx->r5 = ADD32(ctx->r5, -0X39A4);
    // 0x00443E04: jal         0x00283FF8
    // 0x00443E08: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_00283FF8(rdram, ctx);
        goto after_2;
    // 0x00443E08: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_2:
    // 0x00443E0C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x00443E10: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x00443E14: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x00443E18: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x00443E1C: jr          $ra
    // 0x00443E20: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x00443E20: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_0045977C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
;}
RECOMP_FUNC void func_0044F454(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0044F454: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0044F458: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x0044F45C: jal         0x00415FB8
    // 0x0044F460: addu        $a0, $a2, $zero
    ctx->r4 = ADD32(ctx->r6, 0);
    func_00415FB8(rdram, ctx);
        goto after_0;
    // 0x0044F460: addu        $a0, $a2, $zero
    ctx->r4 = ADD32(ctx->r6, 0);
    after_0:
    // 0x0044F464: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x0044F468: sltu        $v0, $zero, $v0
    ctx->r2 = 0 < ctx->r2 ? 1 : 0;
    // 0x0044F46C: jr          $ra
    // 0x0044F470: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0044F470: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0044F894(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_004169A0:
    // 0x0044F894: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x0044F898: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x0044F89C: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x0044F8A0: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x0044F8A4: addu        $s2, $a2, $zero
    ctx->r18 = ADD32(ctx->r6, 0);
    // 0x0044F8A8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x0044F8AC: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x0044F8B0: sw          $s6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r22;
    // 0x0044F8B4: sw          $s5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r21;
    // 0x0044F8B8: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x0044F8BC: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x0044F8C0: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x0044F8C4: lh          $v1, 0x4($s2)
    ctx->r3 = MEM_H(ctx->r18, 0X4);
    // 0x0044F8C8: lw          $s3, 0x14($a1)
    ctx->r19 = MEM_W(ctx->r5, 0X14);
    // 0x0044F8CC: lw          $s4, 0x1C($a1)
    ctx->r20 = MEM_W(ctx->r5, 0X1C);
    // 0x0044F8D0: lw          $s5, 0x20($a1)
    ctx->r21 = MEM_W(ctx->r5, 0X20);
    // 0x0044F8D4: lw          $s6, 0x24($a1)
    ctx->r22 = MEM_W(ctx->r5, 0X24);
    // 0x0044F8D8: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x0044F8DC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x0044F8E0: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x0044F8E4: blez        $v1, L_0044F91C
    if (SIGNED(ctx->r3) <= 0) {
        // 0x0044F8E8: addiu       $a3, $v0, 0x1D8
        ctx->r7 = ADD32(ctx->r2, 0X1D8);
            goto L_0044F91C;
    }
    // 0x0044F8E8: addiu       $a3, $v0, 0x1D8
    ctx->r7 = ADD32(ctx->r2, 0X1D8);
    // 0x0044F8EC: addiu       $t0, $zero, 0x3
    ctx->r8 = ADD32(0, 0X3);
    // 0x0044F8F0: addu        $a1, $v1, $zero
    ctx->r5 = ADD32(ctx->r3, 0);
    // 0x0044F8F4: lw          $a0, 0x0($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X0);
L_0044F8F8:
    // 0x0044F8F8: lh          $v0, 0x0($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X0);
    // 0x0044F8FC: bne         $v0, $t0, L_0044F908
    if (ctx->r2 != ctx->r8) {
        // 0x0044F900: addu        $v1, $zero, $zero
        ctx->r3 = ADD32(0, 0);
            goto L_0044F908;
    }
    // 0x0044F900: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
    // 0x0044F904: addiu       $v1, $zero, 0x330
    ctx->r3 = ADD32(0, 0X330);
L_0044F908:
    // 0x0044F908: addu        $a3, $a3, $v1
    ctx->r7 = ADD32(ctx->r7, ctx->r3);
    // 0x0044F90C: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x0044F910: slt         $v0, $a2, $a1
    ctx->r2 = SIGNED(ctx->r6) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x0044F914: bne         $v0, $zero, L_0044F8F8
    if (ctx->r2 != 0) {
        // 0x0044F918: addiu       $a0, $a0, 0x24
        ctx->r4 = ADD32(ctx->r4, 0X24);
            goto L_0044F8F8;
    }
    // 0x0044F918: addiu       $a0, $a0, 0x24
    ctx->r4 = ADD32(ctx->r4, 0X24);
L_0044F91C:
    // 0x0044F91C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0044F920: addu        $a1, $a3, $zero
    ctx->r5 = ADD32(ctx->r7, 0);
    // 0x0044F924: lui         $a3, 0x800C
    ctx->r7 = S32(0X800C << 16);
    // 0x0044F928: addiu       $a3, $a3, 0xC54
    ctx->r7 = ADD32(ctx->r7, 0XC54);
    // 0x0044F92C: jal         0x00204EDC
    // 0x0044F930: addiu       $a2, $zero, 0x3B
    ctx->r6 = ADD32(0, 0X3B);
    func_00204EDC(rdram, ctx);
        goto after_0;
    // 0x0044F930: addiu       $a2, $zero, 0x3B
    ctx->r6 = ADD32(0, 0X3B);
    after_0:
    // 0x0044F934: beql        $v0, $zero, L_0044F9A0
    if (ctx->r2 == 0) {
        // 0x0044F938: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_0044F9A0;
    }
    goto skip_0;
    // 0x0044F938: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    skip_0:
    // 0x0044F93C: lw          $s0, 0x0($v0)
    ctx->r16 = MEM_W(ctx->r2, 0X0);
    // 0x0044F940: bne         $s0, $zero, L_0044F950
    if (ctx->r16 != 0) {
        // 0x0044F944: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_0044F950;
    }
    // 0x0044F944: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0044F948: j           L_004169A0
    // 0x0044F94C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    func_004169A0(rdram, ctx);
    return;
    // 0x0044F94C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_0044F950:
    // 0x0044F950: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x0044F954: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    // 0x0044F958: addu        $a3, $s3, $zero
    ctx->r7 = ADD32(ctx->r19, 0);
    // 0x0044F95C: sw          $s4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r20;
    // 0x0044F960: sw          $s5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r21;
    // 0x0044F964: sw          $s6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r22;
    // 0x0044F968: jal         0x00414EA8
    // 0x0044F96C: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    func_00414EA8(rdram, ctx);
        goto after_1;
    // 0x0044F96C: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    after_1:
    // 0x0044F970: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0044F974: jal         0x00200518
    // 0x0044F978: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_00200518(rdram, ctx);
        goto after_2;
    // 0x0044F978: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_2:
    // 0x0044F97C: lhu         $v0, 0x14($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X14);
    // 0x0044F980: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x0044F984: sh          $v0, 0x14($s1)
    MEM_H(0X14, ctx->r17) = ctx->r2;
    // 0x0044F988: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x0044F98C: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x0044F990: slti        $v0, $v0, 0x4
    ctx->r2 = SIGNED(ctx->r2) < 0X4 ? 1 : 0;
    // 0x0044F994: beql        $v0, $zero, L_0044F99C
    if (ctx->r2 == 0) {
        // 0x0044F998: sh          $zero, 0x14($s1)
        MEM_H(0X14, ctx->r17) = 0;
            goto L_0044F99C;
    }
    goto skip_1;
    // 0x0044F998: sh          $zero, 0x14($s1)
    MEM_H(0X14, ctx->r17) = 0;
    skip_1:
L_0044F99C:
    // 0x0044F99C: addu        $v0, $s0, $zero
    ctx->r2 = ADD32(ctx->r16, 0);
L_0044F9A0:
    // 0x0044F9A0: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x0044F9A4: lw          $s6, 0x38($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X38);
    // 0x0044F9A8: lw          $s5, 0x34($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X34);
    // 0x0044F9AC: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x0044F9B0: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x0044F9B4: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x0044F9B8: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x0044F9BC: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x0044F9C0: jr          $ra
    // 0x0044F9C4: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x0044F9C4: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_00276838(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00276838: lb          $v0, 0x4($a0)
    ctx->r2 = MEM_B(ctx->r4, 0X4);
    // 0x0027683C: jr          $ra
    // 0x00276840: nop

    return;
    // 0x00276840: nop

;}
RECOMP_FUNC void func_00289590(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00289590: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00289594: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x00289598: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0028959C: sw          $zero, -0x4760($at)
    MEM_W(-0X4760, ctx->r1) = 0;
    // 0x002895A0: jal         0x00288F60
    // 0x002895A4: nop

    func_00288F60(rdram, ctx);
        goto after_0;
    // 0x002895A4: nop

    after_0:
    // 0x002895A8: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x002895AC: jr          $ra
    // 0x002895B0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x002895B0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0045121C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_004182E8:
    // 0x0045121C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x00451220: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x00451224: addu        $s4, $a0, $zero
    ctx->r20 = ADD32(ctx->r4, 0);
    // 0x00451228: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x0045122C: addu        $s2, $a1, $zero
    ctx->r18 = ADD32(ctx->r5, 0);
    // 0x00451230: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x00451234: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x00451238: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x0045123C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x00451240: lw          $s0, 0x1C($s2)
    ctx->r16 = MEM_W(ctx->r18, 0X1C);
    // 0x00451244: lw          $a0, 0x20($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X20);
    // 0x00451248: lw          $s1, 0x518($s0)
    ctx->r17 = MEM_W(ctx->r16, 0X518);
    // 0x0045124C: jal         0x002855E8
    // 0x00451250: addu        $s3, $a2, $zero
    ctx->r19 = ADD32(ctx->r6, 0);
    func_002855E8(rdram, ctx);
        goto after_0;
    // 0x00451250: addu        $s3, $a2, $zero
    ctx->r19 = ADD32(ctx->r6, 0);
    after_0:
    // 0x00451254: bne         $v0, $zero, L_004512A8
    if (ctx->r2 != 0) {
        // 0x00451258: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_004512A8;
    }
    // 0x00451258: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x0045125C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x00451260: lb          $a1, 0x30($s1)
    ctx->r5 = MEM_B(ctx->r17, 0X30);
    // 0x00451264: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x00451268: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x0045126C: addu        $v0, $a2, $zero
    ctx->r2 = ADD32(ctx->r6, 0);
    // 0x00451270: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x00451274: jal         0x00416558
    // 0x00451278: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    func_00416558(rdram, ctx);
        goto after_1;
    // 0x00451278: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    after_1:
    // 0x0045127C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00451280: sll         $a1, $v0, 24
    ctx->r5 = S32(ctx->r2 << 24);
    // 0x00451284: sra         $a1, $a1, 24
    ctx->r5 = S32(SIGNED(ctx->r5) >> 24);
    // 0x00451288: jal         0x0042E350
    // 0x0045128C: sb          $v0, 0x30($s1)
    MEM_B(0X30, ctx->r17) = ctx->r2;
    func_0042E350(rdram, ctx);
        goto after_2;
    // 0x0045128C: sb          $v0, 0x30($s1)
    MEM_B(0X30, ctx->r17) = ctx->r2;
    after_2:
    // 0x00451290: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    // 0x00451294: lb          $a2, 0x30($s1)
    ctx->r6 = MEM_B(ctx->r17, 0X30);
    // 0x00451298: jal         0x00416214
    // 0x0045129C: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    func_00416214(rdram, ctx);
        goto after_3;
    // 0x0045129C: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    after_3:
    // 0x004512A0: j           L_004182E8
    // 0x004512A4: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    func_004182E8(rdram, ctx);
    return;
    // 0x004512A4: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_004512A8:
    // 0x004512A8: lb          $a1, 0x30($s1)
    ctx->r5 = MEM_B(ctx->r17, 0X30);
    // 0x004512AC: jal         0x0042E350
    // 0x004512B0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_0042E350(rdram, ctx);
        goto after_4;
    // 0x004512B0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
    // 0x004512B4: lw          $v0, 0x520($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X520);
    // 0x004512B8: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x004512BC: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x004512C0: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x004512C4: lh          $a0, 0x1E7A($at)
    ctx->r4 = MEM_H(ctx->r1, 0X1E7A);
    // 0x004512C8: jal         0x00275624
    // 0x004512CC: nop

    func_00275624(rdram, ctx);
        goto after_5;
    // 0x004512CC: nop

    after_5:
    // 0x004512D0: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x004512D4: lui         $a2, 0x44
    ctx->r6 = S32(0X44 << 16);
    // 0x004512D8: addiu       $a2, $a2, -0x7998
    ctx->r6 = ADD32(ctx->r6, -0X7998);
    // 0x004512DC: jal         0x00416894
    // 0x004512E0: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    func_00416894(rdram, ctx);
        goto after_6;
    // 0x004512E0: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    after_6:
    // 0x004512E4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x004512E8: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x004512EC: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x004512F0: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x004512F4: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x004512F8: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x004512FC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x00451300: jr          $ra
    // 0x00451304: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x00451304: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_0026C148(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0026C148: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x0026C14C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0026C150: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x0026C154: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x0026C158: addu        $s2, $a1, $zero
    ctx->r18 = ADD32(ctx->r5, 0);
    // 0x0026C15C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x0026C160: addu        $s1, $a2, $zero
    ctx->r17 = ADD32(ctx->r6, 0);
    // 0x0026C164: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x0026C168: addu        $s3, $a3, $zero
    ctx->r19 = ADD32(ctx->r7, 0);
    // 0x0026C16C: beq         $s0, $zero, L_0026C184
    if (ctx->r16 == 0) {
        // 0x0026C170: sw          $ra, 0x20($sp)
        MEM_W(0X20, ctx->r29) = ctx->r31;
            goto L_0026C184;
    }
    // 0x0026C170: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x0026C174: lhu         $v0, 0x2($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X2);
    // 0x0026C178: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x0026C17C: bne         $v0, $zero, L_0026C18C
    if (ctx->r2 != 0) {
        // 0x0026C180: nop
    
            goto L_0026C18C;
    }
    // 0x0026C180: nop

L_0026C184:
    // 0x0026C184: j           L_0026C224
    // 0x0026C188: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
        goto L_0026C224;
    // 0x0026C188: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_0026C18C:
    // 0x0026C18C: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0026C190: lw          $v0, 0x2610($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2610);
    // 0x0026C194: beq         $s0, $v0, L_0026C1BC
    if (ctx->r16 == ctx->r2) {
        // 0x0026C198: nop
    
            goto L_0026C1BC;
    }
    // 0x0026C198: nop

    // 0x0026C19C: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x0026C1A0: addiu       $a0, $a0, 0x7078
    ctx->r4 = ADD32(ctx->r4, 0X7078);
    // 0x0026C1A4: jal         0x0022425C
    // 0x0026C1A8: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_0022425C(rdram, ctx);
        goto after_0;
    // 0x0026C1A8: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_0:
    // 0x0026C1AC: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0026C1B0: sw          $v0, 0x2614($at)
    MEM_W(0X2614, ctx->r1) = ctx->r2;
    // 0x0026C1B4: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0026C1B8: sw          $s0, 0x2610($at)
    MEM_W(0X2610, ctx->r1) = ctx->r16;
L_0026C1BC:
    // 0x0026C1BC: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0026C1C0: lw          $v0, 0x2614($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2614);
    // 0x0026C1C4: beql        $v0, $zero, L_0026C224
    if (ctx->r2 == 0) {
        // 0x0026C1C8: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_0026C224;
    }
    goto skip_0;
    // 0x0026C1C8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    skip_0:
    // 0x0026C1CC: lwc1        $f0, 0x4($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X4);
    // 0x0026C1D0: lwc1        $f1, 0x4($s2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r18, 0X4);
    // 0x0026C1D4: sub.s       $f2, $f0, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f2.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x0026C1D8: mtc1        $zero, $f3
    ctx->f_odd[(3 - 1) * 2] = 0;
    // 0x0026C1DC: c.eq.s      $f2, $f3
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 3);
    c1cs = ctx->f2.fl == ctx->f3.fl;
    // 0x0026C1E0: nop

    // 0x0026C1E4: bc1tl       L_0026C224
    if (c1cs) {
        // 0x0026C1E8: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_0026C224;
    }
    goto skip_1;
    // 0x0026C1E8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    skip_1:
    // 0x0026C1EC: lwc1        $f0, 0x20($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X20);
    // 0x0026C1F0: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x0026C1F4: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x0026C1F8: div.s       $f1, $f0, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f1.fl = DIV_S(ctx->f0.fl, ctx->f2.fl);
    // 0x0026C1FC: c.lt.s      $f3, $f1
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f3.fl < ctx->f1.fl;
    // 0x0026C200: nop

    // 0x0026C204: bc1f        L_0026C224
    if (!c1cs) {
        // 0x0026C208: swc1        $f1, 0x0($s3)
        MEM_W(0X0, ctx->r19) = ctx->f_odd[(1 - 1) * 2];
            goto L_0026C224;
    }
    // 0x0026C208: swc1        $f1, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->f_odd[(1 - 1) * 2];
    // 0x0026C20C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0026C210: lwc1        $f0, -0x7FFC($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X7FFC);
    // 0x0026C214: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x0026C218: nop

    // 0x0026C21C: bc1tl       L_0026C224
    if (c1cs) {
        // 0x0026C220: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_0026C224;
    }
    goto skip_2;
    // 0x0026C220: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    skip_2:
L_0026C224:
    // 0x0026C224: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x0026C228: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x0026C22C: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x0026C230: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x0026C234: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0026C238: jr          $ra
    // 0x0026C23C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x0026C23C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_0020F040(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0020F040: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0020F044: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0020F048: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x0020F04C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x0020F050: lwc1        $f1, 0x0($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X0);
    // 0x0020F054: mul.s       $f1, $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f1.fl);
    // 0x0020F058: lwc1        $f0, 0x4($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X4);
    // 0x0020F05C: mul.s       $f0, $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x0020F060: lwc1        $f12, 0x8($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X8);
    // 0x0020F064: mul.s       $f12, $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x0020F068: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x0020F06C: jal         0x00298470
    // 0x0020F070: add.s       $f12, $f1, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = ctx->f1.fl + ctx->f12.fl;
    func_00298470(rdram, ctx);
        goto after_0;
    // 0x0020F070: add.s       $f12, $f1, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = ctx->f1.fl + ctx->f12.fl;
    after_0:
    // 0x0020F074: mtc1        $zero, $f1
    ctx->f_odd[(1 - 1) * 2] = 0;
    // 0x0020F078: c.eq.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl == ctx->f1.fl;
    // 0x0020F07C: nop

    // 0x0020F080: bc1t        L_0020F0B8
    if (c1cs) {
        // 0x0020F084: nop
    
            goto L_0020F0B8;
    }
    // 0x0020F084: nop

    // 0x0020F088: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0020F08C: lwc1        $f1, 0x55D0($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X55D0);
    // 0x0020F090: lwc1        $f3, 0x0($s0)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r16, 0X0);
    // 0x0020F094: div.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = DIV_S(ctx->f1.fl, ctx->f0.fl);
    // 0x0020F098: mul.s       $f3, $f3, $f1
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f3.fl = MUL_S(ctx->f3.fl, ctx->f1.fl);
    // 0x0020F09C: lwc1        $f2, 0x4($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X4);
    // 0x0020F0A0: mul.s       $f2, $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f1.fl);
    // 0x0020F0A4: lwc1        $f0, 0x8($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X8);
    // 0x0020F0A8: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0020F0AC: swc1        $f3, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f_odd[(3 - 1) * 2];
    // 0x0020F0B0: swc1        $f2, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f2.u32l;
    // 0x0020F0B4: swc1        $f0, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f0.u32l;
L_0020F0B8:
    // 0x0020F0B8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x0020F0BC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0020F0C0: jr          $ra
    // 0x0020F0C4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0020F0C4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_002451AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002451AC: addiu       $sp, $sp, -0xD8
    ctx->r29 = ADD32(ctx->r29, -0XD8);
    // 0x002451B0: sdc1        $f25, 0xD0($sp)
    CHECK_FR(ctx, 25);
    SD(ctx->f25.u64, 0XD0, ctx->r29);
    // 0x002451B4: mtc1        $a3, $f25
    ctx->f_odd[(25 - 1) * 2] = ctx->r7;
    // 0x002451B8: sw          $s1, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->r17;
    // 0x002451BC: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x002451C0: sw          $s2, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r18;
    // 0x002451C4: addu        $s2, $a2, $zero
    ctx->r18 = ADD32(ctx->r6, 0);
    // 0x002451C8: sw          $ra, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r31;
    // 0x002451CC: sw          $s0, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->r16;
    // 0x002451D0: sdc1        $f24, 0xC8($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0XC8, ctx->r29);
    // 0x002451D4: sdc1        $f23, 0xC0($sp)
    CHECK_FR(ctx, 23);
    SD(ctx->f23.u64, 0XC0, ctx->r29);
    // 0x002451D8: sdc1        $f22, 0xB8($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0XB8, ctx->r29);
    // 0x002451DC: sdc1        $f21, 0xB0($sp)
    CHECK_FR(ctx, 21);
    SD(ctx->f21.u64, 0XB0, ctx->r29);
    // 0x002451E0: sdc1        $f20, 0xA8($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0XA8, ctx->r29);
    // 0x002451E4: beq         $s2, $zero, L_002456F4
    if (ctx->r18 == 0) {
        // 0x002451E8: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_002456F4;
    }
    // 0x002451E8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x002451EC: lw          $v0, 0xD4($s2)
    ctx->r2 = MEM_W(ctx->r18, 0XD4);
    // 0x002451F0: lui         $v1, 0x30
    ctx->r3 = S32(0X30 << 16);
    // 0x002451F4: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x002451F8: beq         $v0, $zero, L_00245230
    if (ctx->r2 == 0) {
        // 0x002451FC: nop
    
            goto L_00245230;
    }
    // 0x002451FC: nop

    // 0x00245200: lw          $s0, 0x1A8($s2)
    ctx->r16 = MEM_W(ctx->r18, 0X1A8);
    // 0x00245204: lh          $a1, 0x996($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X996);
    // 0x00245208: jal         0x0024E700
    // 0x0024520C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_0024E700(rdram, ctx);
        goto after_0;
    // 0x0024520C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x00245210: blez        $v0, L_002456F4
    if (SIGNED(ctx->r2) <= 0) {
        // 0x00245214: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_002456F4;
    }
    // 0x00245214: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x00245218: lw          $v0, 0xA64($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XA64);
    // 0x0024521C: andi        $v0, $v0, 0x2000
    ctx->r2 = ctx->r2 & 0X2000;
    // 0x00245220: bne         $v0, $zero, L_0024527C
    if (ctx->r2 != 0) {
        // 0x00245224: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_0024527C;
    }
    // 0x00245224: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x00245228: j           L_002456F4
    // 0x0024522C: nop

        goto L_002456F4;
    // 0x0024522C: nop

L_00245230:
    // 0x00245230: lw          $v0, 0x14($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X14);
    // 0x00245234: lw          $v1, 0x0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X0);
    // 0x00245238: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0024523C: beq         $v1, $v0, L_00245254
    if (ctx->r3 == ctx->r2) {
        // 0x00245240: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_00245254;
    }
    // 0x00245240: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x00245244: beq         $v1, $v0, L_0024526C
    if (ctx->r3 == ctx->r2) {
        // 0x00245248: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_0024526C;
    }
    // 0x00245248: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x0024524C: j           L_002456F4
    // 0x00245250: nop

        goto L_002456F4;
    // 0x00245250: nop

L_00245254:
    // 0x00245254: lh          $v0, 0x204($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X204);
    // 0x00245258: slti        $v0, $v0, 0x10CC
    ctx->r2 = SIGNED(ctx->r2) < 0X10CC ? 1 : 0;
    // 0x0024525C: beq         $v0, $zero, L_0024527C
    if (ctx->r2 == 0) {
        // 0x00245260: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_0024527C;
    }
    // 0x00245260: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x00245264: j           L_002456F4
    // 0x00245268: nop

        goto L_002456F4;
    // 0x00245268: nop

L_0024526C:
    // 0x0024526C: lb          $v1, 0x174($s2)
    ctx->r3 = MEM_B(ctx->r18, 0X174);
    // 0x00245270: addiu       $v0, $zero, 0x3F
    ctx->r2 = ADD32(0, 0X3F);
    // 0x00245274: bne         $v1, $v0, L_002456F4
    if (ctx->r3 != ctx->r2) {
        // 0x00245278: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_002456F4;
    }
    // 0x00245278: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_0024527C:
    // 0x0024527C: lwc1        $f1, 0x8($s1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r17, 0X8);
    // 0x00245280: lwc1        $f0, 0x54($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X54);
    // 0x00245284: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x00245288: jal         0x002671B4
    // 0x0024528C: add.s       $f20, $f1, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = ctx->f1.fl + ctx->f0.fl;
    func_002671B4(rdram, ctx);
        goto after_1;
    // 0x0024528C: add.s       $f20, $f1, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = ctx->f1.fl + ctx->f0.fl;
    after_1:
    // 0x00245290: lwc1        $f1, 0x4($s2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r18, 0X4);
    // 0x00245294: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x00245298: swc1        $f1, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    // 0x0024529C: jal         0x002671B4
    // 0x002452A0: add.s       $f21, $f20, $f0
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f21.fl = ctx->f20.fl + ctx->f0.fl;
    func_002671B4(rdram, ctx);
        goto after_2;
    // 0x002452A0: add.s       $f21, $f20, $f0
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f21.fl = ctx->f20.fl + ctx->f0.fl;
    after_2:
    // 0x002452A4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002452A8: lwc1        $f1, 0x6940($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X6940);
    // 0x002452AC: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x002452B0: lwc1        $f2, 0x54($s2)
    ctx->f2.u32l = MEM_W(ctx->r18, 0X54);
    // 0x002452B4: lwc1        $f1, 0x8($s2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r18, 0X8);
    // 0x002452B8: add.s       $f1, $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f2.fl;
    // 0x002452BC: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x002452C0: swc1        $f1, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    // 0x002452C4: lwc1        $f0, 0xC($s2)
    ctx->f0.u32l = MEM_W(ctx->r18, 0XC);
    // 0x002452C8: swc1        $f0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f0.u32l;
    // 0x002452CC: lwc1        $f0, 0x4($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X4);
    // 0x002452D0: swc1        $f0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f0.u32l;
    // 0x002452D4: lwc1        $f0, 0xC($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0XC);
    // 0x002452D8: c.lt.s      $f21, $f1
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f21.fl < ctx->f1.fl;
    // 0x002452DC: nop

    // 0x002452E0: bc1f        L_002452F0
    if (!c1cs) {
        // 0x002452E4: swc1        $f0, 0x50($sp)
        MEM_W(0X50, ctx->r29) = ctx->f0.u32l;
            goto L_002452F0;
    }
    // 0x002452E4: swc1        $f0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f0.u32l;
    // 0x002452E8: j           L_00245304
    // 0x002452EC: swc1        $f21, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
        goto L_00245304;
    // 0x002452EC: swc1        $f21, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
L_002452F0:
    // 0x002452F0: c.lt.s      $f1, $f20
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f1.fl < ctx->f20.fl;
    // 0x002452F4: nop

    // 0x002452F8: bc1fl       L_00245304
    if (!c1cs) {
        // 0x002452FC: swc1        $f1, 0x4C($sp)
        MEM_W(0X4C, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
            goto L_00245304;
    }
    goto skip_0;
    // 0x002452FC: swc1        $f1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    skip_0:
    // 0x00245300: swc1        $f20, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f20.u32l;
L_00245304:
    // 0x00245304: lw          $t0, 0x58($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X58);
    // 0x00245308: lw          $t1, 0x5C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X5C);
    // 0x0024530C: lw          $t2, 0x60($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X60);
    // 0x00245310: sw          $t0, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r8;
    // 0x00245314: sw          $t1, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r9;
    // 0x00245318: sw          $t2, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r10;
    // 0x0024531C: lwc1        $f1, 0x6C($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X6C);
    // 0x00245320: lwc1        $f0, 0x4($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X4);
    // 0x00245324: sub.s       $f22, $f1, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f22.fl = ctx->f1.fl - ctx->f0.fl;
    // 0x00245328: mul.s       $f2, $f22, $f22
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f2.fl = MUL_S(ctx->f22.fl, ctx->f22.fl);
    // 0x0024532C: lwc1        $f1, 0x74($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X74);
    // 0x00245330: lwc1        $f0, 0xC($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0XC);
    // 0x00245334: sub.s       $f21, $f1, $f0
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f21.fl = ctx->f1.fl - ctx->f0.fl;
    // 0x00245338: mul.s       $f12, $f21, $f21
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f21.fl); NAN_CHECK(ctx->f21.fl); 
    ctx->f12.fl = MUL_S(ctx->f21.fl, ctx->f21.fl);
    // 0x0024533C: jal         0x00298470
    // 0x00245340: add.s       $f12, $f2, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = ctx->f2.fl + ctx->f12.fl;
    func_00298470(rdram, ctx);
        goto after_3;
    // 0x00245340: add.s       $f12, $f2, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = ctx->f2.fl + ctx->f12.fl;
    after_3:
    // 0x00245344: mtc1        $zero, $f1
    ctx->f_odd[(1 - 1) * 2] = 0;
    // 0x00245348: mov.s       $f23, $f0
    CHECK_FR(ctx, 23);
    CHECK_FR(ctx, 0);
    ctx->f23.fl = ctx->f0.fl;
    // 0x0024534C: c.eq.s      $f23, $f1
    CHECK_FR(ctx, 23);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f23.fl == ctx->f1.fl;
    // 0x00245350: nop

    // 0x00245354: bc1t        L_002453F8
    if (c1cs) {
        // 0x00245358: mov.s       $f0, $f1
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    ctx->f0.fl = ctx->f1.fl;
            goto L_002453F8;
    }
    // 0x00245358: mov.s       $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    ctx->f0.fl = ctx->f1.fl;
    // 0x0024535C: lwc1        $f12, 0x50($s1)
    ctx->f12.u32l = MEM_W(ctx->r17, 0X50);
    // 0x00245360: jal         0x002982F0
    // 0x00245364: nop

    func_002982F0(rdram, ctx);
        goto after_4;
    // 0x00245364: nop

    after_4:
    // 0x00245368: lwc1        $f12, 0x50($s1)
    ctx->f12.u32l = MEM_W(ctx->r17, 0X50);
    // 0x0024536C: jal         0x002974C0
    // 0x00245370: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    func_002974C0(rdram, ctx);
        goto after_5;
    // 0x00245370: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    after_5:
    // 0x00245374: neg.s       $f1, $f20
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); 
    ctx->f1.fl = -ctx->f20.fl;
    // 0x00245378: mul.s       $f1, $f22, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = MUL_S(ctx->f22.fl, ctx->f1.fl);
    // 0x0024537C: neg.s       $f24, $f0
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f24.fl = -ctx->f0.fl;
    // 0x00245380: mul.s       $f0, $f21, $f24
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f21.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f0.fl = MUL_S(ctx->f21.fl, ctx->f24.fl);
    // 0x00245384: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x00245388: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0024538C: lwc1        $f2, 0x6944($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X6944);
    // 0x00245390: div.s       $f12, $f1, $f23
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 23);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f23.fl); 
    ctx->f12.fl = DIV_S(ctx->f1.fl, ctx->f23.fl);
    // 0x00245394: c.lt.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl < ctx->f12.fl;
    // 0x00245398: nop

    // 0x0024539C: bc1tl       L_002453CC
    if (c1cs) {
        // 0x002453A0: mov.s       $f12, $f2
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    ctx->f12.fl = ctx->f2.fl;
            goto L_002453CC;
    }
    goto skip_1;
    // 0x002453A0: mov.s       $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    ctx->f12.fl = ctx->f2.fl;
    skip_1:
    // 0x002453A4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002453A8: lwc1        $f0, 0x6948($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6948);
    // 0x002453AC: c.lt.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
    // 0x002453B0: nop

    // 0x002453B4: bc1tl       L_002453CC
    if (c1cs) {
        // 0x002453B8: mov.s       $f12, $f0
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
            goto L_002453CC;
    }
    goto skip_2;
    // 0x002453B8: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    skip_2:
    // 0x002453BC: c.lt.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl < ctx->f12.fl;
    // 0x002453C0: nop

    // 0x002453C4: bc1tl       L_002453CC
    if (c1cs) {
        // 0x002453C8: mov.s       $f12, $f2
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    ctx->f12.fl = ctx->f2.fl;
            goto L_002453CC;
    }
    goto skip_3;
    // 0x002453C8: mov.s       $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    ctx->f12.fl = ctx->f2.fl;
    skip_3:
L_002453CC:
    // 0x002453CC: jal         0x0021153C
    // 0x002453D0: nop

    func_0021153C(rdram, ctx);
        goto after_6;
    // 0x002453D0: nop

    after_6:
    // 0x002453D4: mul.s       $f1, $f22, $f24
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f1.fl = MUL_S(ctx->f22.fl, ctx->f24.fl);
    // 0x002453D8: nop

    // 0x002453DC: mul.s       $f2, $f21, $f20
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f21.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f2.fl = MUL_S(ctx->f21.fl, ctx->f20.fl);
    // 0x002453E0: add.s       $f1, $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f2.fl;
    // 0x002453E4: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x002453E8: c.lt.s      $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f2.fl < ctx->f1.fl;
    // 0x002453EC: nop

    // 0x002453F0: bc1fl       L_002453F8
    if (!c1cs) {
        // 0x002453F4: neg.s       $f0, $f0
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
            goto L_002453F8;
    }
    goto skip_4;
    // 0x002453F4: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    skip_4:
L_002453F8:
    // 0x002453F8: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x002453FC: c.lt.s      $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f0.fl < ctx->f20.fl;
    // 0x00245400: nop

    // 0x00245404: bc1f        L_00245504
    if (!c1cs) {
        // 0x00245408: nop
    
            goto L_00245504;
    }
    // 0x00245408: nop

    // 0x0024540C: lw          $t0, 0x58($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X58);
    // 0x00245410: lw          $t1, 0x5C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X5C);
    // 0x00245414: lw          $t2, 0x60($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X60);
    // 0x00245418: sw          $t0, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r8;
    // 0x0024541C: sw          $t1, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r9;
    // 0x00245420: sw          $t2, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r10;
    // 0x00245424: lwc1        $f1, 0x7C($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X7C);
    // 0x00245428: lwc1        $f0, 0x4($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X4);
    // 0x0024542C: sub.s       $f22, $f1, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f22.fl = ctx->f1.fl - ctx->f0.fl;
    // 0x00245430: mul.s       $f2, $f22, $f22
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f2.fl = MUL_S(ctx->f22.fl, ctx->f22.fl);
    // 0x00245434: lwc1        $f1, 0x84($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X84);
    // 0x00245438: lwc1        $f0, 0xC($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0XC);
    // 0x0024543C: sub.s       $f21, $f1, $f0
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f21.fl = ctx->f1.fl - ctx->f0.fl;
    // 0x00245440: mul.s       $f12, $f21, $f21
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f21.fl); NAN_CHECK(ctx->f21.fl); 
    ctx->f12.fl = MUL_S(ctx->f21.fl, ctx->f21.fl);
    // 0x00245444: jal         0x00298470
    // 0x00245448: add.s       $f12, $f2, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = ctx->f2.fl + ctx->f12.fl;
    func_00298470(rdram, ctx);
        goto after_7;
    // 0x00245448: add.s       $f12, $f2, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = ctx->f2.fl + ctx->f12.fl;
    after_7:
    // 0x0024544C: mov.s       $f23, $f0
    CHECK_FR(ctx, 23);
    CHECK_FR(ctx, 0);
    ctx->f23.fl = ctx->f0.fl;
    // 0x00245450: c.eq.s      $f23, $f20
    CHECK_FR(ctx, 23);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f23.fl == ctx->f20.fl;
    // 0x00245454: nop

    // 0x00245458: bc1t        L_002454FC
    if (c1cs) {
        // 0x0024545C: mov.s       $f0, $f20
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    ctx->f0.fl = ctx->f20.fl;
            goto L_002454FC;
    }
    // 0x0024545C: mov.s       $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    ctx->f0.fl = ctx->f20.fl;
    // 0x00245460: lwc1        $f12, 0x50($s1)
    ctx->f12.u32l = MEM_W(ctx->r17, 0X50);
    // 0x00245464: jal         0x002982F0
    // 0x00245468: nop

    func_002982F0(rdram, ctx);
        goto after_8;
    // 0x00245468: nop

    after_8:
    // 0x0024546C: lwc1        $f12, 0x50($s1)
    ctx->f12.u32l = MEM_W(ctx->r17, 0X50);
    // 0x00245470: jal         0x002974C0
    // 0x00245474: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    func_002974C0(rdram, ctx);
        goto after_9;
    // 0x00245474: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    after_9:
    // 0x00245478: neg.s       $f1, $f20
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); 
    ctx->f1.fl = -ctx->f20.fl;
    // 0x0024547C: mul.s       $f1, $f22, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = MUL_S(ctx->f22.fl, ctx->f1.fl);
    // 0x00245480: neg.s       $f24, $f0
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f24.fl = -ctx->f0.fl;
    // 0x00245484: mul.s       $f0, $f21, $f24
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f21.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f0.fl = MUL_S(ctx->f21.fl, ctx->f24.fl);
    // 0x00245488: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x0024548C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00245490: lwc1        $f2, 0x694C($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X694C);
    // 0x00245494: div.s       $f12, $f1, $f23
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 23);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f23.fl); 
    ctx->f12.fl = DIV_S(ctx->f1.fl, ctx->f23.fl);
    // 0x00245498: c.lt.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl < ctx->f12.fl;
    // 0x0024549C: nop

    // 0x002454A0: bc1tl       L_002454D0
    if (c1cs) {
        // 0x002454A4: mov.s       $f12, $f2
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    ctx->f12.fl = ctx->f2.fl;
            goto L_002454D0;
    }
    goto skip_5;
    // 0x002454A4: mov.s       $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    ctx->f12.fl = ctx->f2.fl;
    skip_5:
    // 0x002454A8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002454AC: lwc1        $f0, 0x6950($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6950);
    // 0x002454B0: c.lt.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
    // 0x002454B4: nop

    // 0x002454B8: bc1tl       L_002454D0
    if (c1cs) {
        // 0x002454BC: mov.s       $f12, $f0
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
            goto L_002454D0;
    }
    goto skip_6;
    // 0x002454BC: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    skip_6:
    // 0x002454C0: c.lt.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl < ctx->f12.fl;
    // 0x002454C4: nop

    // 0x002454C8: bc1tl       L_002454D0
    if (c1cs) {
        // 0x002454CC: mov.s       $f12, $f2
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    ctx->f12.fl = ctx->f2.fl;
            goto L_002454D0;
    }
    goto skip_7;
    // 0x002454CC: mov.s       $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    ctx->f12.fl = ctx->f2.fl;
    skip_7:
L_002454D0:
    // 0x002454D0: jal         0x0021153C
    // 0x002454D4: nop

    func_0021153C(rdram, ctx);
        goto after_10;
    // 0x002454D4: nop

    after_10:
    // 0x002454D8: mul.s       $f1, $f22, $f24
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f1.fl = MUL_S(ctx->f22.fl, ctx->f24.fl);
    // 0x002454DC: nop

    // 0x002454E0: mul.s       $f2, $f21, $f20
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f21.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f2.fl = MUL_S(ctx->f21.fl, ctx->f20.fl);
    // 0x002454E4: add.s       $f1, $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f2.fl;
    // 0x002454E8: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x002454EC: c.lt.s      $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f2.fl < ctx->f1.fl;
    // 0x002454F0: nop

    // 0x002454F4: bc1fl       L_002454FC
    if (!c1cs) {
        // 0x002454F8: neg.s       $f0, $f0
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
            goto L_002454FC;
    }
    goto skip_8;
    // 0x002454F8: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    skip_8:
L_002454FC:
    // 0x002454FC: j           L_002455F8
    // 0x00245500: neg.s       $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = -ctx->f0.fl;
        goto L_002455F8;
    // 0x00245500: neg.s       $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = -ctx->f0.fl;
L_00245504:
    // 0x00245504: lw          $t0, 0x58($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X58);
    // 0x00245508: lw          $t1, 0x5C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X5C);
    // 0x0024550C: lw          $t2, 0x60($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X60);
    // 0x00245510: sw          $t0, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r8;
    // 0x00245514: sw          $t1, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r9;
    // 0x00245518: sw          $t2, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r10;
    // 0x0024551C: lwc1        $f1, 0x8C($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X8C);
    // 0x00245520: lwc1        $f0, 0x4($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X4);
    // 0x00245524: sub.s       $f22, $f1, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f22.fl = ctx->f1.fl - ctx->f0.fl;
    // 0x00245528: mul.s       $f2, $f22, $f22
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f2.fl = MUL_S(ctx->f22.fl, ctx->f22.fl);
    // 0x0024552C: lwc1        $f1, 0x94($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X94);
    // 0x00245530: lwc1        $f0, 0xC($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0XC);
    // 0x00245534: sub.s       $f21, $f1, $f0
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f21.fl = ctx->f1.fl - ctx->f0.fl;
    // 0x00245538: mul.s       $f12, $f21, $f21
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f21.fl); NAN_CHECK(ctx->f21.fl); 
    ctx->f12.fl = MUL_S(ctx->f21.fl, ctx->f21.fl);
    // 0x0024553C: jal         0x00298470
    // 0x00245540: add.s       $f12, $f2, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = ctx->f2.fl + ctx->f12.fl;
    func_00298470(rdram, ctx);
        goto after_11;
    // 0x00245540: add.s       $f12, $f2, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = ctx->f2.fl + ctx->f12.fl;
    after_11:
    // 0x00245544: mov.s       $f23, $f0
    CHECK_FR(ctx, 23);
    CHECK_FR(ctx, 0);
    ctx->f23.fl = ctx->f0.fl;
    // 0x00245548: c.eq.s      $f23, $f20
    CHECK_FR(ctx, 23);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f23.fl == ctx->f20.fl;
    // 0x0024554C: nop

    // 0x00245550: bc1t        L_002455F8
    if (c1cs) {
        // 0x00245554: mov.s       $f1, $f20
        CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 20);
    ctx->f1.fl = ctx->f20.fl;
            goto L_002455F8;
    }
    // 0x00245554: mov.s       $f1, $f20
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 20);
    ctx->f1.fl = ctx->f20.fl;
    // 0x00245558: lwc1        $f12, 0x50($s1)
    ctx->f12.u32l = MEM_W(ctx->r17, 0X50);
    // 0x0024555C: jal         0x002982F0
    // 0x00245560: nop

    func_002982F0(rdram, ctx);
        goto after_12;
    // 0x00245560: nop

    after_12:
    // 0x00245564: lwc1        $f12, 0x50($s1)
    ctx->f12.u32l = MEM_W(ctx->r17, 0X50);
    // 0x00245568: jal         0x002974C0
    // 0x0024556C: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    func_002974C0(rdram, ctx);
        goto after_13;
    // 0x0024556C: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    after_13:
    // 0x00245570: neg.s       $f1, $f20
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); 
    ctx->f1.fl = -ctx->f20.fl;
    // 0x00245574: mul.s       $f1, $f22, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = MUL_S(ctx->f22.fl, ctx->f1.fl);
    // 0x00245578: neg.s       $f24, $f0
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f24.fl = -ctx->f0.fl;
    // 0x0024557C: mul.s       $f0, $f21, $f24
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f21.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f0.fl = MUL_S(ctx->f21.fl, ctx->f24.fl);
    // 0x00245580: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x00245584: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00245588: lwc1        $f2, 0x6954($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X6954);
    // 0x0024558C: div.s       $f12, $f1, $f23
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 23);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f23.fl); 
    ctx->f12.fl = DIV_S(ctx->f1.fl, ctx->f23.fl);
    // 0x00245590: c.lt.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl < ctx->f12.fl;
    // 0x00245594: nop

    // 0x00245598: bc1tl       L_002455C8
    if (c1cs) {
        // 0x0024559C: mov.s       $f12, $f2
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    ctx->f12.fl = ctx->f2.fl;
            goto L_002455C8;
    }
    goto skip_9;
    // 0x0024559C: mov.s       $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    ctx->f12.fl = ctx->f2.fl;
    skip_9:
    // 0x002455A0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002455A4: lwc1        $f0, 0x6958($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6958);
    // 0x002455A8: c.lt.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
    // 0x002455AC: nop

    // 0x002455B0: bc1tl       L_002455C8
    if (c1cs) {
        // 0x002455B4: mov.s       $f12, $f0
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
            goto L_002455C8;
    }
    goto skip_10;
    // 0x002455B4: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    skip_10:
    // 0x002455B8: c.lt.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl < ctx->f12.fl;
    // 0x002455BC: nop

    // 0x002455C0: bc1tl       L_002455C8
    if (c1cs) {
        // 0x002455C4: mov.s       $f12, $f2
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    ctx->f12.fl = ctx->f2.fl;
            goto L_002455C8;
    }
    goto skip_11;
    // 0x002455C4: mov.s       $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    ctx->f12.fl = ctx->f2.fl;
    skip_11:
L_002455C8:
    // 0x002455C8: jal         0x0021153C
    // 0x002455CC: nop

    func_0021153C(rdram, ctx);
        goto after_14;
    // 0x002455CC: nop

    after_14:
    // 0x002455D0: mul.s       $f1, $f22, $f24
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f1.fl = MUL_S(ctx->f22.fl, ctx->f24.fl);
    // 0x002455D4: nop

    // 0x002455D8: mul.s       $f2, $f21, $f20
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f21.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f2.fl = MUL_S(ctx->f21.fl, ctx->f20.fl);
    // 0x002455DC: add.s       $f1, $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f2.fl;
    // 0x002455E0: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x002455E4: c.lt.s      $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f2.fl < ctx->f1.fl;
    // 0x002455E8: nop

    // 0x002455EC: bc1fl       L_002455F4
    if (!c1cs) {
        // 0x002455F0: neg.s       $f0, $f0
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
            goto L_002455F4;
    }
    goto skip_12;
    // 0x002455F0: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    skip_12:
L_002455F4:
    // 0x002455F4: mov.s       $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    ctx->f1.fl = ctx->f0.fl;
L_002455F8:
    // 0x002455F8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002455FC: lwc1        $f0, 0x695C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X695C);
    // 0x00245600: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x00245604: nop

    // 0x00245608: bc1f        L_0024562C
    if (!c1cs) {
        // 0x0024560C: addiu       $a0, $sp, 0x18
        ctx->r4 = ADD32(ctx->r29, 0X18);
            goto L_0024562C;
    }
    // 0x0024560C: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    // 0x00245610: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00245614: lwc1        $f0, 0x6960($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6960);
    // 0x00245618: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x0024561C: nop

    // 0x00245620: bc1t        L_002456F4
    if (c1cs) {
        // 0x00245624: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_002456F4;
    }
    // 0x00245624: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x00245628: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
L_0024562C:
    // 0x0024562C: addiu       $a1, $sp, 0x48
    ctx->r5 = ADD32(ctx->r29, 0X48);
    // 0x00245630: jal         0x0020EF2C
    // 0x00245634: addiu       $a2, $sp, 0x58
    ctx->r6 = ADD32(ctx->r29, 0X58);
    func_0020EF2C(rdram, ctx);
        goto after_15;
    // 0x00245634: addiu       $a2, $sp, 0x58
    ctx->r6 = ADD32(ctx->r29, 0X58);
    after_15:
    // 0x00245638: jal         0x0020F040
    // 0x0024563C: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    func_0020F040(rdram, ctx);
        goto after_16;
    // 0x0024563C: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    after_16:
    // 0x00245640: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00245644: lwc1        $f0, 0x6964($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6964);
    // 0x00245648: swc1        $f0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f0.u32l;
    // 0x0024564C: lw          $v0, 0x40($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X40);
    // 0x00245650: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    // 0x00245654: sw          $zero, 0x38($sp)
    MEM_W(0X38, ctx->r29) = 0;
    // 0x00245658: sw          $zero, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = 0;
    // 0x0024565C: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x00245660: lw          $a2, 0x38($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X38);
    // 0x00245664: lw          $a3, 0x3C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X3C);
    // 0x00245668: jal         0x0021F00C
    // 0x0024566C: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    func_0021F00C(rdram, ctx);
        goto after_17;
    // 0x0024566C: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    after_17:
    // 0x00245670: lwc1        $f2, 0x18($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X18);
    // 0x00245674: lwc1        $f0, 0x28($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X28);
    // 0x00245678: mul.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x0024567C: lwc1        $f1, 0x1C($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X1C);
    // 0x00245680: lwc1        $f0, 0x2C($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x00245684: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x00245688: lwc1        $f12, 0x20($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X20);
    // 0x0024568C: lwc1        $f0, 0x30($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X30);
    // 0x00245690: mul.s       $f12, $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = MUL_S(ctx->f12.fl, ctx->f0.fl);
    // 0x00245694: add.s       $f2, $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f1.fl;
    // 0x00245698: jal         0x0021153C
    // 0x0024569C: add.s       $f12, $f2, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = ctx->f2.fl + ctx->f12.fl;
    func_0021153C(rdram, ctx);
        goto after_18;
    // 0x0024569C: add.s       $f12, $f2, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = ctx->f2.fl + ctx->f12.fl;
    after_18:
    // 0x002456A0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002456A4: lwc1        $f1, 0x6968($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X6968);
    // 0x002456A8: mul.s       $f1, $f25, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 25);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f25.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = MUL_S(ctx->f25.fl, ctx->f1.fl);
    // 0x002456AC: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x002456B0: nop

    // 0x002456B4: bc1f        L_002456F4
    if (!c1cs) {
        // 0x002456B8: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_002456F4;
    }
    // 0x002456B8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x002456BC: lwc1        $f0, 0x30($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X30);
    // 0x002456C0: lwc1        $f2, 0x18($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X18);
    // 0x002456C4: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x002456C8: mul.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x002456CC: lwc1        $f1, 0x28($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X28);
    // 0x002456D0: lwc1        $f0, 0x20($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X20);
    // 0x002456D4: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x002456D8: add.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f0.fl;
    // 0x002456DC: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x002456E0: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x002456E4: nop

    // 0x002456E8: bc1t        L_002456F4
    if (c1cs) {
        // 0x002456EC: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_002456F4;
    }
    // 0x002456EC: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x002456F0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_002456F4:
    // 0x002456F4: lw          $ra, 0xA4($sp)
    ctx->r31 = MEM_W(ctx->r29, 0XA4);
    // 0x002456F8: lw          $s2, 0xA0($sp)
    ctx->r18 = MEM_W(ctx->r29, 0XA0);
    // 0x002456FC: lw          $s1, 0x9C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X9C);
    // 0x00245700: lw          $s0, 0x98($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X98);
    // 0x00245704: ldc1        $f25, 0xD0($sp)
    CHECK_FR(ctx, 25);
    ctx->f25.u64 = LD(ctx->r29, 0XD0);
    // 0x00245708: ldc1        $f24, 0xC8($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0XC8);
    // 0x0024570C: ldc1        $f23, 0xC0($sp)
    CHECK_FR(ctx, 23);
    ctx->f23.u64 = LD(ctx->r29, 0XC0);
    // 0x00245710: ldc1        $f22, 0xB8($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0XB8);
    // 0x00245714: ldc1        $f21, 0xB0($sp)
    CHECK_FR(ctx, 21);
    ctx->f21.u64 = LD(ctx->r29, 0XB0);
    // 0x00245718: ldc1        $f20, 0xA8($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0XA8);
    // 0x0024571C: jr          $ra
    // 0x00245720: addiu       $sp, $sp, 0xD8
    ctx->r29 = ADD32(ctx->r29, 0XD8);
    return;
    // 0x00245720: addiu       $sp, $sp, 0xD8
    ctx->r29 = ADD32(ctx->r29, 0XD8);
;}
RECOMP_FUNC void func_00220408(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00220408: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x0022040C: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x00220410: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00220414: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00220418: lw          $v0, 0xD4($a1)
    ctx->r2 = MEM_W(ctx->r5, 0XD4);
    // 0x0022041C: lui         $v1, 0x8
    ctx->r3 = S32(0X8 << 16);
    // 0x00220420: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x00220424: bne         $v0, $zero, L_00220484
    if (ctx->r2 != 0) {
        // 0x00220428: addu        $a2, $a0, $zero
        ctx->r6 = ADD32(ctx->r4, 0);
            goto L_00220484;
    }
    // 0x00220428: addu        $a2, $a0, $zero
    ctx->r6 = ADD32(ctx->r4, 0);
    // 0x0022042C: lw          $a0, 0xE0($a2)
    ctx->r4 = MEM_W(ctx->r6, 0XE0);
    // 0x00220430: sltu        $v0, $a1, $a0
    ctx->r2 = ctx->r5 < ctx->r4 ? 1 : 0;
    // 0x00220434: bne         $v0, $zero, L_00220488
    if (ctx->r2 != 0) {
        // 0x00220438: addiu       $s1, $zero, -0x1
        ctx->r17 = ADD32(0, -0X1);
            goto L_00220488;
    }
    // 0x00220438: addiu       $s1, $zero, -0x1
    ctx->r17 = ADD32(0, -0X1);
    // 0x0022043C: lw          $v1, 0xE8($a2)
    ctx->r3 = MEM_W(ctx->r6, 0XE8);
    // 0x00220440: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x00220444: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x00220448: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x0022044C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x00220450: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x00220454: addiu       $v0, $v0, -0x288
    ctx->r2 = ADD32(ctx->r2, -0X288);
    // 0x00220458: addu        $v0, $a0, $v0
    ctx->r2 = ADD32(ctx->r4, ctx->r2);
    // 0x0022045C: sltu        $v0, $v0, $a1
    ctx->r2 = ctx->r2 < ctx->r5 ? 1 : 0;
    // 0x00220460: bne         $v0, $zero, L_0022048C
    if (ctx->r2 != 0) {
        // 0x00220464: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_0022048C;
    }
    // 0x00220464: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x00220468: subu        $v1, $a1, $a0
    ctx->r3 = SUB32(ctx->r5, ctx->r4);
    // 0x0022046C: lui         $v0, 0xCA45
    ctx->r2 = S32(0XCA45 << 16);
    // 0x00220470: ori         $v0, $v0, 0x87E7
    ctx->r2 = ctx->r2 | 0X87E7;
    // 0x00220474: multu       $v1, $v0
    result = U64(U32(ctx->r3)) * U64(U32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x00220478: mfhi        $a3
    ctx->r7 = hi;
    // 0x0022047C: j           L_00220488
    // 0x00220480: srl         $s1, $a3, 9
    ctx->r17 = S32(U32(ctx->r7) >> 9);
        goto L_00220488;
    // 0x00220480: srl         $s1, $a3, 9
    ctx->r17 = S32(U32(ctx->r7) >> 9);
L_00220484:
    // 0x00220484: addiu       $s1, $zero, -0x1
    ctx->r17 = ADD32(0, -0X1);
L_00220488:
    // 0x00220488: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_0022048C:
    // 0x0022048C: beq         $s1, $v0, L_0022051C
    if (ctx->r17 == ctx->r2) {
        // 0x00220490: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_0022051C;
    }
    // 0x00220490: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x00220494: lw          $a0, 0x6C($a2)
    ctx->r4 = MEM_W(ctx->r6, 0X6C);
    // 0x00220498: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x0022049C: addu        $at, $a2, $at
    ctx->r1 = ADD32(ctx->r6, ctx->r1);
    // 0x002204A0: lw          $s0, -0x7058($at)
    ctx->r16 = MEM_W(ctx->r1, -0X7058);
    // 0x002204A4: jal         0x002017D4
    // 0x002204A8: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_002017D4(rdram, ctx);
        goto after_0;
    // 0x002204A8: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_0:
    // 0x002204AC: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x002204B0: jal         0x002017D4
    // 0x002204B4: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_002017D4(rdram, ctx);
        goto after_1;
    // 0x002204B4: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_1:
    // 0x002204B8: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x002204BC: jal         0x002017D4
    // 0x002204C0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_002017D4(rdram, ctx);
        goto after_2;
    // 0x002204C0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_2:
    // 0x002204C4: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x002204C8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x002204CC: jal         0x002017D4
    // 0x002204D0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_002017D4(rdram, ctx);
        goto after_3;
    // 0x002204D0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_3:
    // 0x002204D4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x002204D8: jal         0x00201818
    // 0x002204DC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_00201818(rdram, ctx);
        goto after_4;
    // 0x002204DC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_4:
    // 0x002204E0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x002204E4: jal         0x002017D4
    // 0x002204E8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_002017D4(rdram, ctx);
        goto after_5;
    // 0x002204E8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_5:
    // 0x002204EC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x002204F0: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x002204F4: andi        $v1, $a0, 0x7
    ctx->r3 = ctx->r4 & 0X7;
    // 0x002204F8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x002204FC: bgez        $a0, L_00220508
    if (SIGNED(ctx->r4) >= 0) {
        // 0x00220500: sllv        $v1, $v0, $v1
        ctx->r3 = S32(ctx->r2 << (ctx->r3 & 31));
            goto L_00220508;
    }
    // 0x00220500: sllv        $v1, $v0, $v1
    ctx->r3 = S32(ctx->r2 << (ctx->r3 & 31));
    // 0x00220504: addiu       $a0, $a0, 0x7
    ctx->r4 = ADD32(ctx->r4, 0X7);
L_00220508:
    // 0x00220508: sra         $v0, $a0, 3
    ctx->r2 = S32(SIGNED(ctx->r4) >> 3);
    // 0x0022050C: addu        $v0, $a1, $v0
    ctx->r2 = ADD32(ctx->r5, ctx->r2);
    // 0x00220510: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x00220514: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x00220518: sltu        $v0, $zero, $v0
    ctx->r2 = 0 < ctx->r2 ? 1 : 0;
L_0022051C:
    // 0x0022051C: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x00220520: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00220524: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00220528: jr          $ra
    // 0x0022052C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x0022052C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_00281E44(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00281E44: jr          $ra
    // 0x00281E48: nop

    return;
    // 0x00281E48: nop

;}
RECOMP_FUNC void func_0045A254(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0045A254: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x0045A258: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x0045A25C: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x0045A260: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x0045A264: addu        $s2, $a1, $zero
    ctx->r18 = ADD32(ctx->r5, 0);
    // 0x0045A268: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x0045A26C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0045A270: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x0045A274: beq         $v0, $zero, L_0045A290
    if (ctx->r2 == 0) {
        // 0x0045A278: addu        $s0, $a2, $zero
        ctx->r16 = ADD32(ctx->r6, 0);
            goto L_0045A290;
    }
    // 0x0045A278: addu        $s0, $a2, $zero
    ctx->r16 = ADD32(ctx->r6, 0);
    // 0x0045A27C: jal         0x002053A8
    // 0x0045A280: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_002053A8(rdram, ctx);
        goto after_0;
    // 0x0045A280: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_0:
    // 0x0045A284: lw          $a1, 0x0($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X0);
    // 0x0045A288: jal         0x002052D8
    // 0x0045A28C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_002052D8(rdram, ctx);
        goto after_1;
    // 0x0045A28C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_1:
L_0045A290:
    // 0x0045A290: bne         $s0, $zero, L_0045A2A4
    if (ctx->r16 != 0) {
        // 0x0045A294: sll         $s0, $s0, 8
        ctx->r16 = S32(ctx->r16 << 8);
            goto L_0045A2A4;
    }
    // 0x0045A294: sll         $s0, $s0, 8
    ctx->r16 = S32(ctx->r16 << 8);
    // 0x0045A298: lui         $v0, 0x800F
    ctx->r2 = S32(0X800F << 16);
    // 0x0045A29C: lw          $v0, 0x70A8($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X70A8);
    // 0x0045A2A0: addiu       $s0, $v0, 0x688
    ctx->r16 = ADD32(ctx->r2, 0X688);
L_0045A2A4:
    // 0x0045A2A4: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0045A2A8: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x0045A2AC: lui         $a3, 0x800C
    ctx->r7 = S32(0X800C << 16);
    // 0x0045A2B0: addiu       $a3, $a3, 0x13F0
    ctx->r7 = ADD32(ctx->r7, 0X13F0);
    // 0x0045A2B4: jal         0x00204EDC
    // 0x0045A2B8: addiu       $a2, $zero, 0x33
    ctx->r6 = ADD32(0, 0X33);
    func_00204EDC(rdram, ctx);
        goto after_2;
    // 0x0045A2B8: addiu       $a2, $zero, 0x33
    ctx->r6 = ADD32(0, 0X33);
    after_2:
    // 0x0045A2BC: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x0045A2C0: sw          $v0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r2;
    // 0x0045A2C4: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
    // 0x0045A2C8: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    // 0x0045A2CC: jal         0x00266C5C
    // 0x0045A2D0: sw          $a0, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r4;
    func_00266C5C(rdram, ctx);
        goto after_3;
    // 0x0045A2D0: sw          $a0, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r4;
    after_3:
    // 0x0045A2D4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x0045A2D8: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x0045A2DC: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x0045A2E0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0045A2E4: jr          $ra
    // 0x0045A2E8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x0045A2E8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
