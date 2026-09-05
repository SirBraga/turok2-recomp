#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_00450EF0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00450EF0: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x00450EF4: lw          $v0, -0x5334($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X5334);
    // 0x00450EF8: jr          $ra
    // 0x00450EFC: nop

    return;
    // 0x00450EFC: nop

;}
RECOMP_FUNC void func_00271D84(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00271D84: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00271D88: sll         $a1, $a1, 16
    ctx->r5 = S32(ctx->r5 << 16);
    // 0x00271D8C: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x00271D90: lw          $a0, 0x2B4C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X2B4C);
    // 0x00271D94: jal         0x002017D4
    // 0x00271D98: sra         $a1, $a1, 16
    ctx->r5 = S32(SIGNED(ctx->r5) >> 16);
    func_002017D4(rdram, ctx);
        goto after_0;
    // 0x00271D98: sra         $a1, $a1, 16
    ctx->r5 = S32(SIGNED(ctx->r5) >> 16);
    after_0:
    // 0x00271D9C: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x00271DA0: jal         0x002017D4
    // 0x00271DA4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_002017D4(rdram, ctx);
        goto after_1;
    // 0x00271DA4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_1:
    // 0x00271DA8: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x00271DAC: jr          $ra
    // 0x00271DB0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00271DB0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0024B5A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0024B5A0: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x0024B5A4: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x0024B5A8: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x0024B5AC: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x0024B5B0: addu        $s4, $a1, $zero
    ctx->r20 = ADD32(ctx->r5, 0);
    // 0x0024B5B4: sw          $ra, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r31;
    // 0x0024B5B8: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x0024B5BC: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x0024B5C0: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x0024B5C4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x0024B5C8: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
    // 0x0024B5CC: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x0024B5D0: sltiu       $v0, $v0, 0x2
    ctx->r2 = ctx->r2 < 0X2 ? 1 : 0;
    // 0x0024B5D4: beq         $v0, $zero, L_0024B620
    if (ctx->r2 == 0) {
        // 0x0024B5D8: addu        $s3, $zero, $zero
        ctx->r19 = ADD32(0, 0);
            goto L_0024B620;
    }
    // 0x0024B5D8: addu        $s3, $zero, $zero
    ctx->r19 = ADD32(0, 0);
    // 0x0024B5DC: lw          $v0, 0x18($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X18);
    // 0x0024B5E0: slt         $v0, $s3, $v0
    ctx->r2 = SIGNED(ctx->r19) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x0024B5E4: beq         $v0, $zero, L_0024B620
    if (ctx->r2 == 0) {
        // 0x0024B5E8: addu        $s1, $s3, $zero
        ctx->r17 = ADD32(ctx->r19, 0);
            goto L_0024B620;
    }
    // 0x0024B5E8: addu        $s1, $s3, $zero
    ctx->r17 = ADD32(ctx->r19, 0);
    // 0x0024B5EC: addiu       $s5, $zero, 0x1
    ctx->r21 = ADD32(0, 0X1);
    // 0x0024B5F0: addu        $s0, $s2, $zero
    ctx->r16 = ADD32(ctx->r18, 0);
L_0024B5F4:
    // 0x0024B5F4: lw          $a1, 0x1C($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X1C);
    // 0x0024B5F8: jal         0x0024E700
    // 0x0024B5FC: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    func_0024E700(rdram, ctx);
        goto after_0;
    // 0x0024B5FC: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    after_0:
    // 0x0024B600: beql        $v0, $zero, L_0024B60C
    if (ctx->r2 == 0) {
        // 0x0024B604: sw          $zero, 0x24($s0)
        MEM_W(0X24, ctx->r16) = 0;
            goto L_0024B60C;
    }
    goto skip_0;
    // 0x0024B604: sw          $zero, 0x24($s0)
    MEM_W(0X24, ctx->r16) = 0;
    skip_0:
    // 0x0024B608: sw          $s5, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r21;
L_0024B60C:
    // 0x0024B60C: lw          $v0, 0x18($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X18);
    // 0x0024B610: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x0024B614: slt         $v0, $s1, $v0
    ctx->r2 = SIGNED(ctx->r17) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x0024B618: bne         $v0, $zero, L_0024B5F4
    if (ctx->r2 != 0) {
        // 0x0024B61C: addiu       $s0, $s0, 0x18
        ctx->r16 = ADD32(ctx->r16, 0X18);
            goto L_0024B5F4;
    }
    // 0x0024B61C: addiu       $s0, $s0, 0x18
    ctx->r16 = ADD32(ctx->r16, 0X18);
L_0024B620:
    // 0x0024B620: jal         0x002548FC
    // 0x0024B624: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    func_002548FC(rdram, ctx);
        goto after_1;
    // 0x0024B624: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    after_1:
    // 0x0024B628: beq         $v0, $zero, L_0024B638
    if (ctx->r2 == 0) {
        // 0x0024B62C: nop
    
            goto L_0024B638;
    }
    // 0x0024B62C: nop

    // 0x0024B630: j           L_0024B658
    // 0x0024B634: addu        $s3, $zero, $zero
    ctx->r19 = ADD32(0, 0);
        goto L_0024B658;
    // 0x0024B634: addu        $s3, $zero, $zero
    ctx->r19 = ADD32(0, 0);
L_0024B638:
    // 0x0024B638: lw          $v1, 0xA68($s4)
    ctx->r3 = MEM_W(ctx->r20, 0XA68);
    // 0x0024B63C: andi        $v0, $v1, 0x4000
    ctx->r2 = ctx->r3 & 0X4000;
    // 0x0024B640: beq         $v0, $zero, L_0024B650
    if (ctx->r2 == 0) {
        // 0x0024B644: andi        $v0, $v1, 0x8000
        ctx->r2 = ctx->r3 & 0X8000;
            goto L_0024B650;
    }
    // 0x0024B644: andi        $v0, $v1, 0x8000
    ctx->r2 = ctx->r3 & 0X8000;
    // 0x0024B648: j           L_0024B658
    // 0x0024B64C: addiu       $s3, $zero, 0x1
    ctx->r19 = ADD32(0, 0X1);
        goto L_0024B658;
    // 0x0024B64C: addiu       $s3, $zero, 0x1
    ctx->r19 = ADD32(0, 0X1);
L_0024B650:
    // 0x0024B650: bnel        $v0, $zero, L_0024B658
    if (ctx->r2 != 0) {
        // 0x0024B654: addiu       $s3, $zero, -0x1
        ctx->r19 = ADD32(0, -0X1);
            goto L_0024B658;
    }
    goto skip_1;
    // 0x0024B654: addiu       $s3, $zero, -0x1
    ctx->r19 = ADD32(0, -0X1);
    skip_1:
L_0024B658:
    // 0x0024B658: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
    // 0x0024B65C: bne         $v0, $zero, L_0024B66C
    if (ctx->r2 != 0) {
        // 0x0024B660: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_0024B66C;
    }
    // 0x0024B660: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x0024B664: bne         $s3, $zero, L_0024B6B4
    if (ctx->r19 != 0) {
        // 0x0024B668: nop
    
            goto L_0024B6B4;
    }
    // 0x0024B668: nop

L_0024B66C:
    // 0x0024B66C: jal         0x00254F88
    // 0x0024B670: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    func_00254F88(rdram, ctx);
        goto after_2;
    // 0x0024B670: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    after_2:
    // 0x0024B674: beq         $v0, $zero, L_0024B688
    if (ctx->r2 == 0) {
        // 0x0024B678: nop
    
            goto L_0024B688;
    }
    // 0x0024B678: nop

    // 0x0024B67C: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
    // 0x0024B680: bne         $v0, $zero, L_0024B6B4
    if (ctx->r2 != 0) {
        // 0x0024B684: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_0024B6B4;
    }
    // 0x0024B684: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
L_0024B688:
    // 0x0024B688: lw          $v1, 0x37C($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X37C);
    // 0x0024B68C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x0024B690: beq         $v1, $v0, L_0024B6BC
    if (ctx->r3 == ctx->r2) {
        // 0x0024B694: sll         $v0, $v1, 1
        ctx->r2 = S32(ctx->r3 << 1);
            goto L_0024B6BC;
    }
    // 0x0024B694: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x0024B698: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x0024B69C: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x0024B6A0: addu        $v0, $s2, $v0
    ctx->r2 = ADD32(ctx->r18, ctx->r2);
    // 0x0024B6A4: lh          $v1, 0xB14($s4)
    ctx->r3 = MEM_H(ctx->r20, 0XB14);
    // 0x0024B6A8: lw          $v0, 0x1C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1C);
    // 0x0024B6AC: beq         $v0, $v1, L_0024B6BC
    if (ctx->r2 == ctx->r3) {
        // 0x0024B6B0: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_0024B6BC;
    }
    // 0x0024B6B0: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
L_0024B6B4:
    // 0x0024B6B4: jal         0x0024C47C
    // 0x0024B6B8: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    func_0024C47C(rdram, ctx);
        goto after_3;
    // 0x0024B6B8: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    after_3:
L_0024B6BC:
    // 0x0024B6BC: beq         $s3, $zero, L_0024B748
    if (ctx->r19 == 0) {
        // 0x0024B6C0: nop
    
            goto L_0024B748;
    }
    // 0x0024B6C0: nop

    // 0x0024B6C4: lw          $a0, 0x18($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X18);
    // 0x0024B6C8: addiu       $a1, $a0, -0x1
    ctx->r5 = ADD32(ctx->r4, -0X1);
L_0024B6CC:
    // 0x0024B6CC: lw          $v0, 0x37C($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X37C);
    // 0x0024B6D0: addu        $v1, $v0, $s3
    ctx->r3 = ADD32(ctx->r2, ctx->r19);
    // 0x0024B6D4: slt         $v0, $v1, $a0
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x0024B6D8: bne         $v0, $zero, L_0024B6E8
    if (ctx->r2 != 0) {
        // 0x0024B6DC: sw          $v1, 0x37C($s2)
        MEM_W(0X37C, ctx->r18) = ctx->r3;
            goto L_0024B6E8;
    }
    // 0x0024B6DC: sw          $v1, 0x37C($s2)
    MEM_W(0X37C, ctx->r18) = ctx->r3;
    // 0x0024B6E0: j           L_0024B6F0
    // 0x0024B6E4: sw          $zero, 0x37C($s2)
    MEM_W(0X37C, ctx->r18) = 0;
        goto L_0024B6F0;
    // 0x0024B6E4: sw          $zero, 0x37C($s2)
    MEM_W(0X37C, ctx->r18) = 0;
L_0024B6E8:
    // 0x0024B6E8: bltzl       $v1, L_0024B6F0
    if (SIGNED(ctx->r3) < 0) {
        // 0x0024B6EC: sw          $a1, 0x37C($s2)
        MEM_W(0X37C, ctx->r18) = ctx->r5;
            goto L_0024B6F0;
    }
    goto skip_2;
    // 0x0024B6EC: sw          $a1, 0x37C($s2)
    MEM_W(0X37C, ctx->r18) = ctx->r5;
    skip_2:
L_0024B6F0:
    // 0x0024B6F0: lw          $v0, 0x37C($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X37C);
    // 0x0024B6F4: sll         $v1, $v0, 1
    ctx->r3 = S32(ctx->r2 << 1);
    // 0x0024B6F8: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x0024B6FC: sll         $v1, $v1, 3
    ctx->r3 = S32(ctx->r3 << 3);
    // 0x0024B700: addu        $v1, $s2, $v1
    ctx->r3 = ADD32(ctx->r18, ctx->r3);
    // 0x0024B704: lw          $v0, 0x24($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X24);
    // 0x0024B708: beq         $v0, $zero, L_0024B6CC
    if (ctx->r2 == 0) {
        // 0x0024B70C: nop
    
            goto L_0024B6CC;
    }
    // 0x0024B70C: nop

    // 0x0024B710: lhu         $v0, 0x1E($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X1E);
    // 0x0024B714: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0024B718: lwc1        $f0, 0x6C3C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6C3C);
    // 0x0024B71C: sh          $v0, 0xB14($s4)
    MEM_H(0XB14, ctx->r20) = ctx->r2;
    // 0x0024B720: lw          $v1, 0x0($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X0);
    // 0x0024B724: negu        $v0, $s3
    ctx->r2 = SUB32(0, ctx->r19);
    // 0x0024B728: sw          $v0, 0x10($s2)
    MEM_W(0X10, ctx->r18) = ctx->r2;
    // 0x0024B72C: beq         $v1, $zero, L_0024B740
    if (ctx->r3 == 0) {
        // 0x0024B730: swc1        $f0, 0x4($s2)
        MEM_W(0X4, ctx->r18) = ctx->f0.u32l;
            goto L_0024B740;
    }
    // 0x0024B730: swc1        $f0, 0x4($s2)
    MEM_W(0X4, ctx->r18) = ctx->f0.u32l;
    // 0x0024B734: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x0024B738: bne         $v1, $v0, L_0024B748
    if (ctx->r3 != ctx->r2) {
        // 0x0024B73C: nop
    
            goto L_0024B748;
    }
    // 0x0024B73C: nop

L_0024B740:
    // 0x0024B740: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0024B744: sw          $v0, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r2;
L_0024B748:
    // 0x0024B748: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
    // 0x0024B74C: beq         $v0, $zero, L_0024B868
    if (ctx->r2 == 0) {
        // 0x0024B750: nop
    
            goto L_0024B868;
    }
    // 0x0024B750: nop

    // 0x0024B754: lw          $v1, 0x37C($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X37C);
    // 0x0024B758: lwc1        $f0, 0xC($s2)
    ctx->f0.u32l = MEM_W(ctx->r18, 0XC);
    // 0x0024B75C: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x0024B760: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x0024B764: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x0024B768: addu        $v0, $s2, $v0
    ctx->r2 = ADD32(ctx->r18, ctx->r2);
    // 0x0024B76C: lwc1        $f1, 0x28($v0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r2, 0X28);
    // 0x0024B770: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    // 0x0024B774: swc1        $f1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    // 0x0024B778: lw          $s0, 0x10($s2)
    ctx->r16 = MEM_W(ctx->r18, 0X10);
    // 0x0024B77C: jal         0x00210EF0
    // 0x0024B780: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    func_00210EF0(rdram, ctx);
        goto after_4;
    // 0x0024B780: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    after_4:
    // 0x0024B784: jal         0x00210EF0
    // 0x0024B788: addiu       $a0, $sp, 0x14
    ctx->r4 = ADD32(ctx->r29, 0X14);
    func_00210EF0(rdram, ctx);
        goto after_5;
    // 0x0024B788: addiu       $a0, $sp, 0x14
    ctx->r4 = ADD32(ctx->r29, 0X14);
    after_5:
    // 0x0024B78C: blez        $s0, L_0024B7BC
    if (SIGNED(ctx->r16) <= 0) {
        // 0x0024B790: nop
    
            goto L_0024B7BC;
    }
    // 0x0024B790: nop

    // 0x0024B794: lwc1        $f1, 0x14($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X14);
    // 0x0024B798: lwc1        $f0, 0x10($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X10);
    // 0x0024B79C: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x0024B7A0: nop

    // 0x0024B7A4: bc1fl       L_0024B7F0
    if (!c1cs) {
        // 0x0024B7A8: sub.s       $f2, $f1, $f0
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f1.fl - ctx->f0.fl;
            goto L_0024B7F0;
    }
    goto skip_3;
    // 0x0024B7A8: sub.s       $f2, $f1, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f1.fl - ctx->f0.fl;
    skip_3:
    // 0x0024B7AC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0024B7B0: lwc1        $f0, 0x6C40($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6C40);
    // 0x0024B7B4: j           L_0024B7E0
    // 0x0024B7B8: add.s       $f0, $f1, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f1.fl + ctx->f0.fl;
        goto L_0024B7E0;
    // 0x0024B7B8: add.s       $f0, $f1, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f1.fl + ctx->f0.fl;
L_0024B7BC:
    // 0x0024B7BC: lwc1        $f1, 0x14($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X14);
    // 0x0024B7C0: lwc1        $f0, 0x10($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X10);
    // 0x0024B7C4: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x0024B7C8: nop

    // 0x0024B7CC: bc1fl       L_0024B7F0
    if (!c1cs) {
        // 0x0024B7D0: sub.s       $f2, $f1, $f0
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f1.fl - ctx->f0.fl;
            goto L_0024B7F0;
    }
    goto skip_4;
    // 0x0024B7D0: sub.s       $f2, $f1, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f1.fl - ctx->f0.fl;
    skip_4:
    // 0x0024B7D4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0024B7D8: lwc1        $f0, 0x6C44($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6C44);
    // 0x0024B7DC: sub.s       $f0, $f1, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f1.fl - ctx->f0.fl;
L_0024B7E0:
    // 0x0024B7E0: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    // 0x0024B7E4: lwc1        $f1, 0x14($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X14);
    // 0x0024B7E8: lwc1        $f0, 0x10($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X10);
    // 0x0024B7EC: sub.s       $f2, $f1, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f1.fl - ctx->f0.fl;
L_0024B7F0:
    // 0x0024B7F0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0024B7F4: lwc1        $f0, 0x6C48($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6C48);
    // 0x0024B7F8: mul.s       $f0, $f2, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x0024B7FC: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0024B800: lwc1        $f1, 0x6D28($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X6D28);
    // 0x0024B804: mul.s       $f3, $f0, $f1
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f3.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0024B808: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x0024B80C: c.lt.s      $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f3.fl < ctx->f0.fl;
    // 0x0024B810: nop

    // 0x0024B814: bc1f        L_0024B820
    if (!c1cs) {
        // 0x0024B818: mov.s       $f1, $f3
        CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 3);
    ctx->f1.fl = ctx->f3.fl;
            goto L_0024B820;
    }
    // 0x0024B818: mov.s       $f1, $f3
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 3);
    ctx->f1.fl = ctx->f3.fl;
    // 0x0024B81C: neg.s       $f1, $f3
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f3.fl); 
    ctx->f1.fl = -ctx->f3.fl;
L_0024B820:
    // 0x0024B820: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x0024B824: nop

    // 0x0024B828: bc1f        L_0024B84C
    if (!c1cs) {
        // 0x0024B82C: nop
    
            goto L_0024B84C;
    }
    // 0x0024B82C: nop

    // 0x0024B830: neg.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = -ctx->f2.fl;
    // 0x0024B834: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x0024B838: nop

    // 0x0024B83C: bc1tl       L_0024B85C
    if (c1cs) {
        // 0x0024B840: mov.s       $f3, $f2
        CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 2);
    ctx->f3.fl = ctx->f2.fl;
            goto L_0024B85C;
    }
    goto skip_5;
    // 0x0024B840: mov.s       $f3, $f2
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 2);
    ctx->f3.fl = ctx->f2.fl;
    skip_5:
    // 0x0024B844: j           L_0024B85C
    // 0x0024B848: nop

        goto L_0024B85C;
    // 0x0024B848: nop

L_0024B84C:
    // 0x0024B84C: c.lt.s      $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f2.fl < ctx->f1.fl;
    // 0x0024B850: nop

    // 0x0024B854: bc1tl       L_0024B85C
    if (c1cs) {
        // 0x0024B858: mov.s       $f3, $f2
        CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 2);
    ctx->f3.fl = ctx->f2.fl;
            goto L_0024B85C;
    }
    goto skip_6;
    // 0x0024B858: mov.s       $f3, $f2
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 2);
    ctx->f3.fl = ctx->f2.fl;
    skip_6:
L_0024B85C:
    // 0x0024B85C: lwc1        $f0, 0xC($s2)
    ctx->f0.u32l = MEM_W(ctx->r18, 0XC);
    // 0x0024B860: add.s       $f0, $f0, $f3
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f3.fl;
    // 0x0024B864: swc1        $f0, 0xC($s2)
    MEM_W(0XC, ctx->r18) = ctx->f0.u32l;
L_0024B868:
    // 0x0024B868: lw          $ra, 0x30($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X30);
    // 0x0024B86C: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x0024B870: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x0024B874: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x0024B878: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x0024B87C: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x0024B880: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x0024B884: jr          $ra
    // 0x0024B888: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x0024B888: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_00232FBC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00232FBC: lhu         $v1, 0x2($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X2);
    // 0x00232FC0: addiu       $v0, $zero, 0xD
    ctx->r2 = ADD32(0, 0XD);
    // 0x00232FC4: beq         $v1, $v0, L_00232FF0
    if (ctx->r3 == ctx->r2) {
        // 0x00232FC8: slti        $v0, $v1, 0xE
        ctx->r2 = SIGNED(ctx->r3) < 0XE ? 1 : 0;
            goto L_00232FF0;
    }
    // 0x00232FC8: slti        $v0, $v1, 0xE
    ctx->r2 = SIGNED(ctx->r3) < 0XE ? 1 : 0;
    // 0x00232FCC: beq         $v0, $zero, L_00232FE4
    if (ctx->r2 == 0) {
        // 0x00232FD0: addiu       $v0, $zero, 0x8
        ctx->r2 = ADD32(0, 0X8);
            goto L_00232FE4;
    }
    // 0x00232FD0: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x00232FD4: beq         $v1, $v0, L_00232FF0
    if (ctx->r3 == ctx->r2) {
        // 0x00232FD8: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_00232FF0;
    }
    // 0x00232FD8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x00232FDC: j           L_00232FF8
    // 0x00232FE0: nop

    func_00232FF8(rdram, ctx);
    return;
    // 0x00232FE0: nop

L_00232FE4:
    // 0x00232FE4: addiu       $v0, $zero, 0x12
    ctx->r2 = ADD32(0, 0X12);
    // 0x00232FE8: bne         $v1, $v0, L_00232FF8
    if (ctx->r3 != ctx->r2) {
            // 0x00232FEC: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    func_00232FF8(rdram, ctx);
    return;
    }
    // 0x00232FEC: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_00232FF0:
    // 0x00232FF0: jr          $ra
    // 0x00232FF4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x00232FF4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
;}
RECOMP_FUNC void func_0021E9A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0021E9A4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x0021E9A8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0021E9AC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x0021E9B0: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x0021E9B4: addu        $s1, $a2, $zero
    ctx->r17 = ADD32(ctx->r6, 0);
    // 0x0021E9B8: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x0021E9BC: jal         0x00219F74
    // 0x0021E9C0: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    func_00219F74(rdram, ctx);
        goto after_0;
    // 0x0021E9C0: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    after_0:
    // 0x0021E9C4: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x0021E9C8: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x0021E9CC: bne         $a1, $v0, L_0021E9DC
    if (ctx->r5 != ctx->r2) {
        // 0x0021E9D0: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_0021E9DC;
    }
    // 0x0021E9D0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0021E9D4: j           L_0021E9E4
    // 0x0021E9D8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
        goto L_0021E9E4;
    // 0x0021E9D8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_0021E9DC:
    // 0x0021E9DC: jal         0x0021E9F8
    // 0x0021E9E0: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    func_0021E9F8(rdram, ctx);
        goto after_1;
    // 0x0021E9E0: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    after_1:
L_0021E9E4:
    // 0x0021E9E4: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x0021E9E8: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x0021E9EC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0021E9F0: jr          $ra
    // 0x0021E9F4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x0021E9F4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_0027403C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0027403C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x00274040: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x00274044: addu        $s3, $a0, $zero
    ctx->r19 = ADD32(ctx->r4, 0);
    // 0x00274048: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x0027404C: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    // 0x00274050: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00274054: addiu       $s1, $s3, 0x4
    ctx->r17 = ADD32(ctx->r19, 0X4);
    // 0x00274058: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0027405C: addu        $s0, $s2, $zero
    ctx->r16 = ADD32(ctx->r18, 0);
    // 0x00274060: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x00274064: addiu       $s4, $zero, -0x1
    ctx->r20 = ADD32(0, -0X1);
    // 0x00274068: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
L_0027406C:
    // 0x0027406C: lw          $v0, 0x8($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X8);
    // 0x00274070: beql        $v0, $s4, L_00274098
    if (ctx->r2 == ctx->r20) {
        // 0x00274074: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_00274098;
    }
    goto skip_0;
    // 0x00274074: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    skip_0:
    // 0x00274078: lw          $v0, 0x0($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X0);
    // 0x0027407C: lh          $v0, 0x102($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X102);
    // 0x00274080: beql        $v0, $s0, L_00274098
    if (ctx->r2 == ctx->r16) {
        // 0x00274084: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_00274098;
    }
    goto skip_1;
    // 0x00274084: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    skip_1:
    // 0x00274088: jal         0x0027314C
    // 0x0027408C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_0027314C(rdram, ctx);
        goto after_0;
    // 0x0027408C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_0:
    // 0x00274090: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x00274094: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_00274098:
    // 0x00274098: slti        $v0, $s0, 0x10
    ctx->r2 = SIGNED(ctx->r16) < 0X10 ? 1 : 0;
    // 0x0027409C: bne         $v0, $zero, L_0027406C
    if (ctx->r2 != 0) {
        // 0x002740A0: addiu       $s1, $s1, 0xCC
        ctx->r17 = ADD32(ctx->r17, 0XCC);
            goto L_0027406C;
    }
    // 0x002740A0: addiu       $s1, $s1, 0xCC
    ctx->r17 = ADD32(ctx->r17, 0XCC);
    // 0x002740A4: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x002740A8: lw          $v0, 0x2A60($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2A60);
    // 0x002740AC: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x002740B0: sw          $s2, 0x2A5C($at)
    MEM_W(0X2A5C, ctx->r1) = ctx->r18;
    // 0x002740B4: slt         $v0, $v0, $s2
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r18) ? 1 : 0;
    // 0x002740B8: beq         $v0, $zero, L_002740C8
    if (ctx->r2 == 0) {
        // 0x002740BC: nop
    
            goto L_002740C8;
    }
    // 0x002740BC: nop

    // 0x002740C0: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x002740C4: sw          $s2, 0x2A60($at)
    MEM_W(0X2A60, ctx->r1) = ctx->r18;
L_002740C8:
    // 0x002740C8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x002740CC: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x002740D0: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x002740D4: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x002740D8: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x002740DC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x002740E0: jr          $ra
    // 0x002740E4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x002740E4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_0025E46C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0025E46C: addu        $a1, $a1, $a2
    ctx->r5 = ADD32(ctx->r5, ctx->r6);
    // 0x0025E470: lb          $v0, 0x130($a1)
    ctx->r2 = MEM_B(ctx->r5, 0X130);
    // 0x0025E474: jr          $ra
    // 0x0025E478: nop

    return;
    // 0x0025E478: nop

;}
RECOMP_FUNC void func_0021F3A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0021F3A4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x0021F3A8: addu        $v0, $a0, $zero
    ctx->r2 = ADD32(ctx->r4, 0);
    // 0x0021F3AC: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0021F3B0: lui         $v1, 0x21
    ctx->r3 = S32(0X21 << 16);
    // 0x0021F3B4: addiu       $v1, $v1, -0x4B30
    ctx->r3 = ADD32(ctx->r3, -0X4B30);
    // 0x0021F3B8: sw          $v1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r3;
    // 0x0021F3BC: lui         $v1, 0x800A
    ctx->r3 = S32(0X800A << 16);
    // 0x0021F3C0: addiu       $v1, $v1, 0x5CE0
    ctx->r3 = ADD32(ctx->r3, 0X5CE0);
    // 0x0021F3C4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x0021F3C8: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x0021F3CC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x0021F3D0: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    // 0x0021F3D4: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x0021F3D8: lw          $a1, 0xAC($v0)
    ctx->r5 = MEM_W(ctx->r2, 0XAC);
    // 0x0021F3DC: lw          $a2, 0xB4($v0)
    ctx->r6 = MEM_W(ctx->r2, 0XB4);
    // 0x0021F3E0: jal         0x0020367C
    // 0x0021F3E4: addu        $a3, $a0, $zero
    ctx->r7 = ADD32(ctx->r4, 0);
    func_0020367C(rdram, ctx);
        goto after_0;
    // 0x0021F3E4: addu        $a3, $a0, $zero
    ctx->r7 = ADD32(ctx->r4, 0);
    after_0:
    // 0x0021F3E8: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x0021F3EC: beq         $s0, $zero, L_0021F408
    if (ctx->r16 == 0) {
        // 0x0021F3F0: nop
    
            goto L_0021F408;
    }
    // 0x0021F3F0: nop

    // 0x0021F3F4: jal         0x0020BEE8
    // 0x0021F3F8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    entry_0020BEE8(rdram, ctx);
        goto after_1;
    // 0x0021F3F8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x0021F3FC: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0021F400: jal         0x002051F4
    // 0x0021F404: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_002051F4(rdram, ctx);
        goto after_2;
    // 0x0021F404: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_2:
L_0021F408:
    // 0x0021F408: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x0021F40C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x0021F410: jr          $ra
    // 0x0021F414: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x0021F414: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_0040BEA8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0040BEA8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0040BEAC: lui         $a1, 0x4461
    ctx->r5 = S32(0X4461 << 16);
    // 0x0040BEB0: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x0040BEB4: addiu       $a0, $a0, -0x6790
    ctx->r4 = ADD32(ctx->r4, -0X6790);
    // 0x0040BEB8: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x0040BEBC: jal         0x002535E4
    // 0x0040BEC0: nop

    func_002535E4(rdram, ctx);
        goto after_0;
    // 0x0040BEC0: nop

    after_0:
    // 0x0040BEC4: addiu       $a0, $zero, 0xE6
    ctx->r4 = ADD32(0, 0XE6);
    // 0x0040BEC8: lui         $a1, 0x41
    ctx->r5 = S32(0X41 << 16);
    // 0x0040BECC: addiu       $a1, $a1, -0x3824
    ctx->r5 = ADD32(ctx->r5, -0X3824);
    // 0x0040BED0: jal         0x00283FF8
    // 0x0040BED4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_00283FF8(rdram, ctx);
        goto after_1;
    // 0x0040BED4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_1:
    // 0x0040BED8: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x0040BEDC: jr          $ra
    // 0x0040BEE0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0040BEE0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0026D200(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0026D200: swc1        $f12, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->f12.u32l;
    // 0x0026D204: lhu         $v0, 0x0($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X0);
    // 0x0026D208: jr          $ra
    // 0x0026D20C: nop

    return;
    // 0x0026D20C: nop

;}
RECOMP_FUNC void func_0040ABB4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0040ABB4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x0040ABB8: lui         $a2, 0x8013
    ctx->r6 = S32(0X8013 << 16);
    // 0x0040ABBC: addiu       $a2, $a2, -0x490
    ctx->r6 = ADD32(ctx->r6, -0X490);
    // 0x0040ABC0: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x0040ABC4: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x0040ABC8: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x0040ABCC: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x0040ABD0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0040ABD4: lw          $v0, 0x4($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X4);
    // 0x0040ABD8: blez        $v0, L_0040AC14
    if (SIGNED(ctx->r2) <= 0) {
        // 0x0040ABDC: addu        $v1, $zero, $zero
        ctx->r3 = ADD32(0, 0);
            goto L_0040AC14;
    }
    // 0x0040ABDC: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
    // 0x0040ABE0: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0040ABE4: lwc1        $f0, 0x878($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X878);
    // 0x0040ABE8: addu        $a0, $a2, $zero
    ctx->r4 = ADD32(ctx->r6, 0);
L_0040ABEC:
    // 0x0040ABEC: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x0040ABF0: swc1        $f0, 0x254($v0)
    MEM_W(0X254, ctx->r2) = ctx->f0.u32l;
    // 0x0040ABF4: sw          $zero, 0x250($v0)
    MEM_W(0X250, ctx->r2) = 0;
    // 0x0040ABF8: lw          $v0, 0x4($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X4);
    // 0x0040ABFC: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x0040AC00: slt         $v0, $v1, $v0
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x0040AC04: bne         $v0, $zero, L_0040ABEC
    if (ctx->r2 != 0) {
        // 0x0040AC08: addiu       $a0, $a0, 0x4
        ctx->r4 = ADD32(ctx->r4, 0X4);
            goto L_0040ABEC;
    }
    // 0x0040AC08: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x0040AC0C: lui         $a2, 0x8013
    ctx->r6 = S32(0X8013 << 16);
    // 0x0040AC10: addiu       $a2, $a2, -0x490
    ctx->r6 = ADD32(ctx->r6, -0X490);
L_0040AC14:
    // 0x0040AC14: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x0040AC18: sw          $v0, 0x688($a2)
    MEM_W(0X688, ctx->r6) = ctx->r2;
    // 0x0040AC1C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x0040AC20: sw          $v0, 0x65C($a2)
    MEM_W(0X65C, ctx->r6) = ctx->r2;
    // 0x0040AC24: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x0040AC28: lw          $v1, 0x1CC($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X1CC);
    // 0x0040AC2C: addiu       $v0, $zero, 0x600
    ctx->r2 = ADD32(0, 0X600);
    // 0x0040AC30: sw          $v0, 0x68C($a2)
    MEM_W(0X68C, ctx->r6) = ctx->r2;
    // 0x0040AC34: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0040AC38: sw          $zero, 0x1EC($at)
    MEM_W(0X1EC, ctx->r1) = 0;
    // 0x0040AC3C: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x0040AC40: lui         $at, 0x43
    ctx->r1 = S32(0X43 << 16);
    // 0x0040AC44: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x0040AC48: lw          $v0, 0x1DE4($at)
    ctx->r2 = MEM_W(ctx->r1, 0X1DE4);
    // 0x0040AC4C: sw          $v0, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->r2;
    // 0x0040AC50: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x0040AC54: lw          $v0, 0x1CC($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1CC);
    // 0x0040AC58: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x0040AC5C: lui         $at, 0x43
    ctx->r1 = S32(0X43 << 16);
    // 0x0040AC60: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x0040AC64: lw          $v1, 0x1DFC($at)
    ctx->r3 = MEM_W(ctx->r1, 0X1DFC);
    // 0x0040AC68: lui         $a0, 0x1
    ctx->r4 = S32(0X1 << 16);
    // 0x0040AC6C: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0040AC70: sw          $v1, 0x1D4($at)
    MEM_W(0X1D4, ctx->r1) = ctx->r3;
    // 0x0040AC74: lui         $at, 0x43
    ctx->r1 = S32(0X43 << 16);
    // 0x0040AC78: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x0040AC7C: lw          $a3, 0x1DF0($at)
    ctx->r7 = MEM_W(ctx->r1, 0X1DF0);
    // 0x0040AC80: ori         $a0, $a0, 0xF400
    ctx->r4 = ctx->r4 | 0XF400;
    // 0x0040AC84: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0040AC88: sw          $zero, 0x1900($at)
    MEM_W(0X1900, ctx->r1) = 0;
    // 0x0040AC8C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0040AC90: sw          $zero, 0x1904($at)
    MEM_W(0X1904, ctx->r1) = 0;
    // 0x0040AC94: sw          $a0, 0x560($a2)
    MEM_W(0X560, ctx->r6) = ctx->r4;
    // 0x0040AC98: sw          $a0, 0x678($a2)
    MEM_W(0X678, ctx->r6) = ctx->r4;
    // 0x0040AC9C: sw          $a0, 0x674($a2)
    MEM_W(0X674, ctx->r6) = ctx->r4;
    // 0x0040ACA0: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0040ACA4: sw          $a3, 0x1D0($at)
    MEM_W(0X1D0, ctx->r1) = ctx->r7;
    // 0x0040ACA8: lb          $v1, 0x34($a1)
    ctx->r3 = MEM_B(ctx->r5, 0X34);
    // 0x0040ACAC: addiu       $v0, $zero, 0x13
    ctx->r2 = ADD32(0, 0X13);
    // 0x0040ACB0: beq         $v1, $v0, L_0040ACF8
    if (ctx->r3 == ctx->r2) {
        // 0x0040ACB4: addu        $s2, $a3, $zero
        ctx->r18 = ADD32(ctx->r7, 0);
            goto L_0040ACF8;
    }
    // 0x0040ACB4: addu        $s2, $a3, $zero
    ctx->r18 = ADD32(ctx->r7, 0);
    // 0x0040ACB8: addu        $s3, $a2, $zero
    ctx->r19 = ADD32(ctx->r6, 0);
    // 0x0040ACBC: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x0040ACC0: addiu       $s1, $zero, 0x18
    ctx->r17 = ADD32(0, 0X18);
L_0040ACC4:
    // 0x0040ACC4: srav        $v0, $s2, $s0
    ctx->r2 = S32(SIGNED(ctx->r18) >> (ctx->r16 & 31));
    // 0x0040ACC8: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x0040ACCC: beql        $v0, $zero, L_0040ACEC
    if (ctx->r2 == 0) {
        // 0x0040ACD0: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_0040ACEC;
    }
    goto skip_0;
    // 0x0040ACD0: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    skip_0:
    // 0x0040ACD4: addu        $a0, $s3, $s1
    ctx->r4 = ADD32(ctx->r19, ctx->r17);
    // 0x0040ACD8: lui         $a1, 0x43
    ctx->r5 = S32(0X43 << 16);
    // 0x0040ACDC: addiu       $a1, $a1, 0x1E08
    ctx->r5 = ADD32(ctx->r5, 0X1E08);
    // 0x0040ACE0: jal         0x00236314
    // 0x0040ACE4: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    func_00236314(rdram, ctx);
        goto after_0;
    // 0x0040ACE4: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    after_0:
    // 0x0040ACE8: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_0040ACEC:
    // 0x0040ACEC: slti        $v0, $s0, 0xF
    ctx->r2 = SIGNED(ctx->r16) < 0XF ? 1 : 0;
    // 0x0040ACF0: bne         $v0, $zero, L_0040ACC4
    if (ctx->r2 != 0) {
        // 0x0040ACF4: addiu       $s1, $s1, 0x68
        ctx->r17 = ADD32(ctx->r17, 0X68);
            goto L_0040ACC4;
    }
    // 0x0040ACF4: addiu       $s1, $s1, 0x68
    ctx->r17 = ADD32(ctx->r17, 0X68);
L_0040ACF8:
    // 0x0040ACF8: addiu       $a0, $zero, 0xDC
    ctx->r4 = ADD32(0, 0XDC);
    // 0x0040ACFC: lui         $a1, 0x41
    ctx->r5 = S32(0X41 << 16);
    // 0x0040AD00: addiu       $a1, $a1, -0x384C
    ctx->r5 = ADD32(ctx->r5, -0X384C);
    // 0x0040AD04: jal         0x00283FF8
    // 0x0040AD08: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_00283FF8(rdram, ctx);
        goto after_1;
    // 0x0040AD08: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_1:
    // 0x0040AD0C: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x0040AD10: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x0040AD14: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x0040AD18: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x0040AD1C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0040AD20: jr          $ra
    // 0x0040AD24: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x0040AD24: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_0044FF8C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
;}
RECOMP_FUNC void func_002946CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002946CC: beq         $v0, $zero, L_00294724
    if (ctx->r2 == 0) {
        // 0x002946D0: addiu       $sp, $sp, -0x40
        ctx->r29 = ADD32(ctx->r29, -0X40);
            goto L_00294724;
    }
    // 0x002946D0: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x002946D4: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x002946D8: addu        $s4, $a0, $zero
    ctx->r20 = ADD32(ctx->r4, 0);
    // 0x002946DC: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x002946E0: addu        $s6, $a1, $zero
    ctx->r22 = ADD32(ctx->r5, 0);
    // 0x002946E4: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x002946E8: sw          $ra, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r31;
    // 0x002946EC: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x002946F0: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x002946F4: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x002946F8: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x002946FC: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x00294700: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x00294704: lw          $s5, 0x14($s6)
    ctx->r21 = MEM_W(ctx->r22, 0X14);
    // 0x00294708: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x0029470C: sw          $zero, 0x0($s4)
    MEM_W(0X0, ctx->r20) = 0;
    // 0x00294710: lw          $v0, 0x4($s6)
    ctx->r2 = MEM_W(ctx->r22, 0X4);
    // 0x00294714: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x00294718: sw          $zero, 0x20($s4)
    MEM_W(0X20, ctx->r20) = 0;
    // 0x0029471C: sw          $zero, 0x1C($s4)
    MEM_W(0X1C, ctx->r20) = 0;
    // 0x00294720: sw          $v0, 0x3C($s4)
    MEM_W(0X3C, ctx->r20) = ctx->r2;
L_00294724:
    // 0x00294724: lw          $v1, 0x18($s6)
    ctx->r3 = MEM_W(ctx->r22, 0X18);
    // 0x00294728: addiu       $v0, $zero, 0xA0
    ctx->r2 = ADD32(0, 0XA0);
    // 0x0029472C: sw          $v0, 0x48($s4)
    MEM_W(0X48, ctx->r20) = ctx->r2;
    // 0x00294730: sw          $v1, 0x44($s4)
    MEM_W(0X44, ctx->r20) = ctx->r3;
    // 0x00294734: lw          $v0, 0x10($s6)
    ctx->r2 = MEM_W(ctx->r22, 0X10);
    // 0x00294738: addu        $a2, $s5, $zero
    ctx->r6 = ADD32(ctx->r21, 0);
    // 0x0029473C: sw          $v0, 0x24($s4)
    MEM_W(0X24, ctx->r20) = ctx->r2;
    // 0x00294740: addiu       $v0, $zero, 0x1C
    ctx->r2 = ADD32(0, 0X1C);
    // 0x00294744: jal         0x002912A0
    // 0x00294748: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    func_002912A0(rdram, ctx);
        goto after_0;
    // 0x00294748: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    after_0:
    // 0x0029474C: addu        $s7, $v0, $zero
    ctx->r23 = ADD32(ctx->r2, 0);
    // 0x00294750: jal         0x002954F8
    // 0x00294754: addu        $a0, $s7, $zero
    ctx->r4 = ADD32(ctx->r23, 0);
    func_002954F8(rdram, ctx);
        goto after_1;
    // 0x00294754: addu        $a0, $s7, $zero
    ctx->r4 = ADD32(ctx->r23, 0);
    after_1:
    // 0x00294758: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0029475C: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x00294760: addu        $a2, $s5, $zero
    ctx->r6 = ADD32(ctx->r21, 0);
    // 0x00294764: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x00294768: addiu       $v0, $zero, 0x4C
    ctx->r2 = ADD32(0, 0X4C);
    // 0x0029476C: sw          $s7, 0x38($s4)
    MEM_W(0X38, ctx->r20) = ctx->r23;
    // 0x00294770: jal         0x002912A0
    // 0x00294774: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    func_002912A0(rdram, ctx);
        goto after_2;
    // 0x00294774: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    after_2:
    // 0x00294778: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0029477C: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x00294780: sw          $v0, 0x34($s4)
    MEM_W(0X34, ctx->r20) = ctx->r2;
    // 0x00294784: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00294788: addiu       $s0, $zero, 0x4
    ctx->r16 = ADD32(0, 0X4);
    // 0x0029478C: sw          $v0, 0x40($s4)
    MEM_W(0X40, ctx->r20) = ctx->r2;
    // 0x00294790: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00294794: lw          $a3, 0x4($s6)
    ctx->r7 = MEM_W(ctx->r22, 0X4);
    // 0x00294798: jal         0x002912A0
    // 0x0029479C: addu        $a2, $s5, $zero
    ctx->r6 = ADD32(ctx->r21, 0);
    func_002912A0(rdram, ctx);
        goto after_3;
    // 0x0029479C: addu        $a2, $s5, $zero
    ctx->r6 = ADD32(ctx->r21, 0);
    after_3:
    // 0x002947A0: lw          $a0, 0x34($s4)
    ctx->r4 = MEM_W(ctx->r20, 0X34);
    // 0x002947A4: lw          $a2, 0x4($s6)
    ctx->r6 = MEM_W(ctx->r22, 0X4);
    // 0x002947A8: jal         0x00295410
    // 0x002947AC: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    func_00295410(rdram, ctx);
        goto after_4;
    // 0x002947AC: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    after_4:
    // 0x002947B0: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x002947B4: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x002947B8: addu        $a2, $s5, $zero
    ctx->r6 = ADD32(ctx->r21, 0);
    // 0x002947BC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x002947C0: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x002947C4: jal         0x002912A0
    // 0x002947C8: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    func_002912A0(rdram, ctx);
        goto after_5;
    // 0x002947C8: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    after_5:
    // 0x002947CC: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x002947D0: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x002947D4: sw          $v0, 0x30($s4)
    MEM_W(0X30, ctx->r20) = ctx->r2;
    // 0x002947D8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x002947DC: lw          $a3, 0x4($s6)
    ctx->r7 = MEM_W(ctx->r22, 0X4);
    // 0x002947E0: jal         0x002912A0
    // 0x002947E4: addu        $a2, $s5, $zero
    ctx->r6 = ADD32(ctx->r21, 0);
    func_002912A0(rdram, ctx);
        goto after_6;
    // 0x002947E4: addu        $a2, $s5, $zero
    ctx->r6 = ADD32(ctx->r21, 0);
    after_6:
    // 0x002947E8: lw          $a0, 0x30($s4)
    ctx->r4 = MEM_W(ctx->r20, 0X30);
    // 0x002947EC: lw          $a2, 0x4($s6)
    ctx->r6 = MEM_W(ctx->r22, 0X4);
    // 0x002947F0: jal         0x002953B4
    // 0x002947F4: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    func_002953B4(rdram, ctx);
        goto after_7;
    // 0x002947F4: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    after_7:
    // 0x002947F8: lbu         $v0, 0x1C($s6)
    ctx->r2 = MEM_BU(ctx->r22, 0X1C);
    // 0x002947FC: beq         $v0, $zero, L_0029481C
    if (ctx->r2 == 0) {
        // 0x00294800: addu        $a0, $s4, $zero
        ctx->r4 = ADD32(ctx->r20, 0);
            goto L_0029481C;
    }
    // 0x00294800: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    // 0x00294804: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x00294808: addu        $a2, $s6, $zero
    ctx->r6 = ADD32(ctx->r22, 0);
    // 0x0029480C: jal         0x00297420
    // 0x00294810: addu        $a3, $s5, $zero
    ctx->r7 = ADD32(ctx->r21, 0);
    func_00297420(rdram, ctx);
        goto after_8;
    // 0x00294810: addu        $a3, $s5, $zero
    ctx->r7 = ADD32(ctx->r21, 0);
    after_8:
    // 0x00294814: j           L_00294830
    // 0x00294818: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
        goto L_00294830;
    // 0x00294818: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
L_0029481C:
    // 0x0029481C: lw          $a0, 0x30($s4)
    ctx->r4 = MEM_W(ctx->r20, 0X30);
    // 0x00294820: lw          $a2, 0x34($s4)
    ctx->r6 = MEM_W(ctx->r20, 0X34);
    // 0x00294824: jal         0x002964A0
    // 0x00294828: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_002964A0(rdram, ctx);
        goto after_9;
    // 0x00294828: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_9:
    // 0x0029482C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
L_00294830:
    // 0x00294830: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x00294834: addu        $a2, $s5, $zero
    ctx->r6 = ADD32(ctx->r21, 0);
    // 0x00294838: addiu       $v0, $zero, 0xDC
    ctx->r2 = ADD32(0, 0XDC);
    // 0x0029483C: sw          $zero, 0x4($s4)
    MEM_W(0X4, ctx->r20) = 0;
    // 0x00294840: sw          $zero, 0x8($s4)
    MEM_W(0X8, ctx->r20) = 0;
    // 0x00294844: sw          $zero, 0x14($s4)
    MEM_W(0X14, ctx->r20) = 0;
    // 0x00294848: sw          $zero, 0x18($s4)
    MEM_W(0X18, ctx->r20) = 0;
    // 0x0029484C: sw          $zero, 0xC($s4)
    MEM_W(0XC, ctx->r20) = 0;
    // 0x00294850: sw          $zero, 0x10($s4)
    MEM_W(0X10, ctx->r20) = 0;
    // 0x00294854: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x00294858: lw          $a3, 0x4($s6)
    ctx->r7 = MEM_W(ctx->r22, 0X4);
    // 0x0029485C: jal         0x002912A0
    // 0x00294860: addu        $s3, $a0, $zero
    ctx->r19 = ADD32(ctx->r4, 0);
    func_002912A0(rdram, ctx);
        goto after_10;
    // 0x00294860: addu        $s3, $a0, $zero
    ctx->r19 = ADD32(ctx->r4, 0);
    after_10:
    // 0x00294864: lw          $v1, 0x4($s6)
    ctx->r3 = MEM_W(ctx->r22, 0X4);
    // 0x00294868: blez        $v1, L_00294914
    if (SIGNED(ctx->r3) <= 0) {
        // 0x0029486C: addu        $a0, $s7, $zero
        ctx->r4 = ADD32(ctx->r23, 0);
            goto L_00294914;
    }
    // 0x0029486C: addu        $a0, $s7, $zero
    ctx->r4 = ADD32(ctx->r23, 0);
    // 0x00294870: addu        $s2, $v0, $zero
    ctx->r18 = ADD32(ctx->r2, 0);
L_00294874:
    // 0x00294874: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x00294878: jal         0x002933E0
    // 0x0029487C: addiu       $a1, $s4, 0x4
    ctx->r5 = ADD32(ctx->r20, 0X4);
    func_002933E0(rdram, ctx);
        goto after_11;
    // 0x0029487C: addiu       $a1, $s4, 0x4
    ctx->r5 = ADD32(ctx->r20, 0X4);
    after_11:
    // 0x00294880: addiu       $s0, $s2, 0x10
    ctx->r16 = ADD32(ctx->r18, 0X10);
    // 0x00294884: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00294888: addu        $a2, $s5, $zero
    ctx->r6 = ADD32(ctx->r21, 0);
    // 0x0029488C: sw          $zero, 0x8($s2)
    MEM_W(0X8, ctx->r18) = 0;
    // 0x00294890: lw          $a1, 0x24($s4)
    ctx->r5 = MEM_W(ctx->r20, 0X24);
    // 0x00294894: jal         0x00295304
    // 0x00294898: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    func_00295304(rdram, ctx);
        goto after_12;
    // 0x00294898: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    after_12:
    // 0x0029489C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x002948A0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x002948A4: jal         0x0029FB64
    // 0x002948A8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_0029FB64(rdram, ctx);
        goto after_13;
    // 0x002948A8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_13:
    // 0x002948AC: addiu       $s1, $s2, 0x58
    ctx->r17 = ADD32(ctx->r18, 0X58);
    // 0x002948B0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x002948B4: jal         0x0029546C
    // 0x002948B8: addu        $a1, $s5, $zero
    ctx->r5 = ADD32(ctx->r21, 0);
    func_0029546C(rdram, ctx);
        goto after_14;
    // 0x002948B8: addu        $a1, $s5, $zero
    ctx->r5 = ADD32(ctx->r21, 0);
    after_14:
    // 0x002948BC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x002948C0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x002948C4: jal         0x00296690
    // 0x002948C8: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    func_00296690(rdram, ctx);
        goto after_15;
    // 0x002948C8: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    after_15:
    // 0x002948CC: addiu       $s0, $s2, 0x8C
    ctx->r16 = ADD32(ctx->r18, 0X8C);
    // 0x002948D0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x002948D4: jal         0x0029553C
    // 0x002948D8: addu        $a1, $s5, $zero
    ctx->r5 = ADD32(ctx->r21, 0);
    func_0029553C(rdram, ctx);
        goto after_16;
    // 0x002948D8: addu        $a1, $s5, $zero
    ctx->r5 = ADD32(ctx->r21, 0);
    after_16:
    // 0x002948DC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x002948E0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x002948E4: jal         0x00296118
    // 0x002948E8: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    func_00296118(rdram, ctx);
        goto after_17;
    // 0x002948E8: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    after_17:
    // 0x002948EC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x002948F0: lw          $a0, 0x34($s4)
    ctx->r4 = MEM_W(ctx->r20, 0X34);
    // 0x002948F4: jal         0x00294E3C
    // 0x002948F8: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    func_00294E3C(rdram, ctx);
        goto after_18;
    // 0x002948F8: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    after_18:
    // 0x002948FC: sw          $s0, 0xC($s2)
    MEM_W(0XC, ctx->r18) = ctx->r16;
    // 0x00294900: lw          $v0, 0x4($s6)
    ctx->r2 = MEM_W(ctx->r22, 0X4);
    // 0x00294904: slt         $v0, $s3, $v0
    ctx->r2 = SIGNED(ctx->r19) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x00294908: bne         $v0, $zero, L_00294874
    if (ctx->r2 != 0) {
        // 0x0029490C: addiu       $s2, $s2, 0xDC
        ctx->r18 = ADD32(ctx->r18, 0XDC);
            goto L_00294874;
    }
    // 0x0029490C: addiu       $s2, $s2, 0xDC
    ctx->r18 = ADD32(ctx->r18, 0XDC);
    // 0x00294910: addu        $a0, $s7, $zero
    ctx->r4 = ADD32(ctx->r23, 0);
L_00294914:
    // 0x00294914: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x00294918: lw          $a2, 0x30($s4)
    ctx->r6 = MEM_W(ctx->r20, 0X30);
    // 0x0029491C: jal         0x002973E0
    // 0x00294920: addu        $s3, $zero, $zero
    ctx->r19 = ADD32(0, 0);
    func_002973E0(rdram, ctx);
        goto after_19;
    // 0x00294920: addu        $s3, $zero, $zero
    ctx->r19 = ADD32(0, 0);
    after_19:
    // 0x00294924: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x00294928: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    // 0x0029492C: addiu       $v0, $zero, 0x1C
    ctx->r2 = ADD32(0, 0X1C);
    // 0x00294930: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x00294934: lw          $a3, 0x8($s6)
    ctx->r7 = MEM_W(ctx->r22, 0X8);
    // 0x00294938: jal         0x002912A0
    // 0x0029493C: addu        $a2, $s5, $zero
    ctx->r6 = ADD32(ctx->r21, 0);
    func_002912A0(rdram, ctx);
        goto after_20;
    // 0x0029493C: addu        $a2, $s5, $zero
    ctx->r6 = ADD32(ctx->r21, 0);
    after_20:
    // 0x00294940: sw          $zero, 0x2C($s4)
    MEM_W(0X2C, ctx->r20) = 0;
    // 0x00294944: lw          $v1, 0x8($s6)
    ctx->r3 = MEM_W(ctx->r22, 0X8);
    // 0x00294948: blezl       $v1, L_00294978
    if (SIGNED(ctx->r3) <= 0) {
        // 0x0029494C: sw          $s5, 0x28($s4)
        MEM_W(0X28, ctx->r20) = ctx->r21;
            goto L_00294978;
    }
    goto skip_0;
    // 0x0029494C: sw          $s5, 0x28($s4)
    MEM_W(0X28, ctx->r20) = ctx->r21;
    skip_0:
    // 0x00294950: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
L_00294954:
    // 0x00294954: lw          $v0, 0x2C($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X2C);
    // 0x00294958: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x0029495C: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x00294960: sw          $v1, 0x2C($s4)
    MEM_W(0X2C, ctx->r20) = ctx->r3;
    // 0x00294964: lw          $v0, 0x8($s6)
    ctx->r2 = MEM_W(ctx->r22, 0X8);
    // 0x00294968: slt         $v0, $s3, $v0
    ctx->r2 = SIGNED(ctx->r19) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x0029496C: bne         $v0, $zero, L_00294954
    if (ctx->r2 != 0) {
        // 0x00294970: addiu       $v1, $v1, 0x1C
        ctx->r3 = ADD32(ctx->r3, 0X1C);
            goto L_00294954;
    }
    // 0x00294970: addiu       $v1, $v1, 0x1C
    ctx->r3 = ADD32(ctx->r3, 0X1C);
    // 0x00294974: sw          $s5, 0x28($s4)
    MEM_W(0X28, ctx->r20) = ctx->r21;
L_00294978:
    // 0x00294978: lw          $ra, 0x38($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X38);
    // 0x0029497C: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x00294980: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x00294984: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x00294988: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x0029498C: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x00294990: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x00294994: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x00294998: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x0029499C: jr          $ra
    // 0x002949A0: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x002949A0: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_0041321C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041321C: addu        $v0, $a1, $zero
    ctx->r2 = ADD32(ctx->r5, 0);
    // 0x00413220: jr          $ra
    // 0x00413224: nop

    return;
    // 0x00413224: nop

;}
RECOMP_FUNC void func_0042E29C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0042E29C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0042E2A0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0042E2A4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x0042E2A8: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x0042E2AC: lw          $v1, -0x6788($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X6788);
    // 0x0042E2B0: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x0042E2B4: addiu       $a0, $a0, -0x5528
    ctx->r4 = ADD32(ctx->r4, -0X5528);
    // 0x0042E2B8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x0042E2BC: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x0042E2C0: slti        $v1, $v1, 0x2
    ctx->r3 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x0042E2C4: xori        $v1, $v1, 0x1
    ctx->r3 = ctx->r3 ^ 0X1;
    // 0x0042E2C8: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x0042E2CC: beq         $v0, $zero, L_0042E2E0
    if (ctx->r2 == 0) {
        // 0x0042E2D0: sll         $a2, $v1, 1
        ctx->r6 = S32(ctx->r3 << 1);
            goto L_0042E2E0;
    }
    // 0x0042E2D0: sll         $a2, $v1, 1
    ctx->r6 = S32(ctx->r3 << 1);
    // 0x0042E2D4: lbu         $v0, 0x19($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X19);
    // 0x0042E2D8: beq         $v0, $zero, L_0042E2EC
    if (ctx->r2 == 0) {
        // 0x0042E2DC: nop
    
            goto L_0042E2EC;
    }
    // 0x0042E2DC: nop

L_0042E2E0:
    // 0x0042E2E0: lhu         $v0, 0x52A($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X52A);
    // 0x0042E2E4: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x0042E2E8: sh          $v0, 0x52A($s0)
    MEM_H(0X52A, ctx->r16) = ctx->r2;
L_0042E2EC:
    // 0x0042E2EC: lh          $v0, 0x52A($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X52A);
    // 0x0042E2F0: bgtz        $v0, L_0042E334
    if (SIGNED(ctx->r2) > 0) {
        // 0x0042E2F4: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_0042E334;
    }
    // 0x0042E2F4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0042E2F8: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x0042E2FC: lbu         $v0, -0x550F($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X550F);
    // 0x0042E300: beq         $v0, $zero, L_0042E324
    if (ctx->r2 == 0) {
        // 0x0042E304: addu        $a1, $a0, $zero
        ctx->r5 = ADD32(ctx->r4, 0);
            goto L_0042E324;
    }
    // 0x0042E304: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x0042E308: lb          $v0, 0xE2($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XE2);
    // 0x0042E30C: bne         $v0, $zero, L_0042E324
    if (ctx->r2 != 0) {
        // 0x0042E310: nop
    
            goto L_0042E324;
    }
    // 0x0042E310: nop

    // 0x0042E314: lw          $v0, 0x518($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X518);
    // 0x0042E318: lbu         $v0, 0x3E($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X3E);
    // 0x0042E31C: beq         $v0, $zero, L_0042E420
    if (ctx->r2 == 0) {
        // 0x0042E320: nop
    
            goto L_0042E420;
    }
    // 0x0042E320: nop

L_0042E324:
    // 0x0042E324: jal         0x0024E5F0
    // 0x0042E328: addiu       $a2, $zero, 0xF
    ctx->r6 = ADD32(0, 0XF);
    func_0024E5F0(rdram, ctx);
        goto after_0;
    // 0x0042E328: addiu       $a2, $zero, 0xF
    ctx->r6 = ADD32(0, 0XF);
    after_0:
    // 0x0042E32C: j           L_0042E420
    // 0x0042E330: nop

        goto L_0042E420;
    // 0x0042E330: nop

L_0042E334:
    // 0x0042E334: lw          $a1, 0x92C($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X92C);
    // 0x0042E338: jal         0x00248BA8
    // 0x0042E33C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_00248BA8(rdram, ctx);
        goto after_1;
    // 0x0042E33C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_1:
    // 0x0042E340: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x0042E344: lbu         $v0, -0x550F($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X550F);
    // 0x0042E348: bne         $v0, $zero, L_0042E36C
    if (ctx->r2 != 0) {
        // 0x0042E34C: nop
    
            goto L_0042E36C;
    }
    // 0x0042E34C: nop

    // 0x0042E350: lw          $a0, 0xA50($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XA50);
    // 0x0042E354: jal         0x00285BD0
    // 0x0042E358: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_00285BD0(rdram, ctx);
        goto after_2;
    // 0x0042E358: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_2:
    // 0x0042E35C: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x0042E360: lbu         $v0, -0x550F($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X550F);
    // 0x0042E364: beq         $v0, $zero, L_0042E37C
    if (ctx->r2 == 0) {
        // 0x0042E368: addiu       $v0, $zero, 0x6400
        ctx->r2 = ADD32(0, 0X6400);
            goto L_0042E37C;
    }
    // 0x0042E368: addiu       $v0, $zero, 0x6400
    ctx->r2 = ADD32(0, 0X6400);
L_0042E36C:
    // 0x0042E36C: jal         0x002540E4
    // 0x0042E370: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_002540E4(rdram, ctx);
        goto after_3;
    // 0x0042E370: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x0042E374: j           L_0042E384
    // 0x0042E378: nop

        goto L_0042E384;
    // 0x0042E378: nop

L_0042E37C:
    // 0x0042E37C: sw          $v0, 0x524($s0)
    MEM_W(0X524, ctx->r16) = ctx->r2;
    // 0x0042E380: sw          $v0, 0x144($s0)
    MEM_W(0X144, ctx->r16) = ctx->r2;
L_0042E384:
    // 0x0042E384: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0042E388: lwc1        $f0, 0x6AC8($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6AC8);
    // 0x0042E38C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0042E390: jal         0x00248340
    // 0x0042E394: swc1        $f0, 0xA28($s0)
    MEM_W(0XA28, ctx->r16) = ctx->f0.u32l;
    func_00248340(rdram, ctx);
        goto after_4;
    // 0x0042E394: swc1        $f0, 0xA28($s0)
    MEM_W(0XA28, ctx->r16) = ctx->f0.u32l;
    after_4:
    // 0x0042E398: sw          $zero, 0x1298($s0)
    MEM_W(0X1298, ctx->r16) = 0;
    // 0x0042E39C: sw          $zero, 0x12A8($s0)
    MEM_W(0X12A8, ctx->r16) = 0;
    // 0x0042E3A0: sw          $zero, 0x12AC($s0)
    MEM_W(0X12AC, ctx->r16) = 0;
    // 0x0042E3A4: sw          $zero, 0x12B0($s0)
    MEM_W(0X12B0, ctx->r16) = 0;
    // 0x0042E3A8: sw          $zero, 0x12A4($s0)
    MEM_W(0X12A4, ctx->r16) = 0;
    // 0x0042E3AC: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x0042E3B0: lw          $v1, -0x5378($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X5378);
    // 0x0042E3B4: addiu       $v0, $zero, 0xD
    ctx->r2 = ADD32(0, 0XD);
    // 0x0042E3B8: bne         $v1, $v0, L_0042E408
    if (ctx->r3 != ctx->r2) {
        // 0x0042E3BC: nop
    
            goto L_0042E408;
    }
    // 0x0042E3BC: nop

    // 0x0042E3C0: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x0042E3C4: lbu         $v0, -0x550F($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X550F);
    // 0x0042E3C8: bne         $v0, $zero, L_0042E418
    if (ctx->r2 != 0) {
        // 0x0042E3CC: nop
    
            goto L_0042E418;
    }
    // 0x0042E3CC: nop

    // 0x0042E3D0: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0042E3D4: lw          $v0, 0x6D20($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X6D20);
    // 0x0042E3D8: sltiu       $v0, $v0, 0xB
    ctx->r2 = ctx->r2 < 0XB ? 1 : 0;
    // 0x0042E3DC: bne         $v0, $zero, L_0042E408
    if (ctx->r2 != 0) {
        // 0x0042E3E0: nop
    
            goto L_0042E408;
    }
    // 0x0042E3E0: nop

    // 0x0042E3E4: lh          $v1, 0x52A($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X52A);
    // 0x0042E3E8: slti        $v0, $v1, 0xB
    ctx->r2 = SIGNED(ctx->r3) < 0XB ? 1 : 0;
    // 0x0042E3EC: beq         $v0, $zero, L_0042E408
    if (ctx->r2 == 0) {
        // 0x0042E3F0: sll         $v0, $v1, 1
        ctx->r2 = S32(ctx->r3 << 1);
            goto L_0042E408;
    }
    // 0x0042E3F0: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x0042E3F4: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0042E3F8: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x0042E3FC: lh          $a0, -0x1D4C($at)
    ctx->r4 = MEM_H(ctx->r1, -0X1D4C);
    // 0x0042E400: jal         0x0027580C
    // 0x0042E404: nop

    func_0027580C(rdram, ctx);
        goto after_5;
    // 0x0042E404: nop

    after_5:
L_0042E408:
    // 0x0042E408: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x0042E40C: lbu         $v0, -0x550F($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X550F);
    // 0x0042E410: beq         $v0, $zero, L_0042E420
    if (ctx->r2 == 0) {
        // 0x0042E414: nop
    
            goto L_0042E420;
    }
    // 0x0042E414: nop

L_0042E418:
    // 0x0042E418: jal         0x00248A8C
    // 0x0042E41C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00248A8C(rdram, ctx);
        goto after_6;
    // 0x0042E41C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_6:
L_0042E420:
    // 0x0042E420: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x0042E424: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0042E428: jr          $ra
    // 0x0042E42C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0042E42C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0028B2AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0028B2AC: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x0028B2B0: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x0028B2B4: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x0028B2B8: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x0028B2BC: addiu       $s3, $zero, -0x1
    ctx->r19 = ADD32(0, -0X1);
    // 0x0028B2C0: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x0028B2C4: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
    // 0x0028B2C8: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x0028B2CC: addiu       $s0, $zero, 0x2
    ctx->r16 = ADD32(0, 0X2);
    // 0x0028B2D0: sw          $ra, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r31;
    // 0x0028B2D4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x0028B2D8: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x0028B2DC: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x0028B2E0: addiu       $a0, $s1, 0x78
    ctx->r4 = ADD32(ctx->r17, 0X78);
L_0028B2E4:
    // 0x0028B2E4: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x0028B2E8: jal         0x0029B6F0
    // 0x0028B2EC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    osRecvMesg_recomp(rdram, ctx);
        goto after_0;
    // 0x0028B2EC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x0028B2F0: beq         $v0, $s3, L_0028B35C
    if (ctx->r2 == ctx->r19) {
        // 0x0028B2F4: nop
    
            goto L_0028B35C;
    }
    // 0x0028B2F4: nop

    // 0x0028B2F8: lw          $v1, 0x10($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X10);
    // 0x0028B2FC: lw          $v0, 0x10($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X10);
    // 0x0028B300: bne         $v0, $s2, L_0028B348
    if (ctx->r2 != ctx->r18) {
        // 0x0028B304: nop
    
            goto L_0028B348;
    }
    // 0x0028B304: nop

    // 0x0028B308: lw          $v0, 0x8($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X8);
    // 0x0028B30C: andi        $v0, $v0, 0x20
    ctx->r2 = ctx->r2 & 0X20;
    // 0x0028B310: beq         $v0, $zero, L_0028B348
    if (ctx->r2 == 0) {
        // 0x0028B314: nop
    
            goto L_0028B348;
    }
    // 0x0028B314: nop

    // 0x0028B318: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0028B31C: lw          $v0, 0x6E54($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X6E54);
    // 0x0028B320: bne         $v0, $zero, L_0028B348
    if (ctx->r2 != 0) {
        // 0x0028B324: nop
    
            goto L_0028B348;
    }
    // 0x0028B324: nop

    // 0x0028B328: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x0028B32C: lw          $a1, 0x6E88($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X6E88);
    // 0x0028B330: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x0028B334: addiu       $a0, $a0, 0x6D68
    ctx->r4 = ADD32(ctx->r4, 0X6D68);
    // 0x0028B338: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0028B33C: sw          $s0, 0x6E54($at)
    MEM_W(0X6E54, ctx->r1) = ctx->r16;
    // 0x0028B340: jal         0x0029B9B0
    // 0x0028B344: nop

    func_0029B9B0(rdram, ctx);
        goto after_1;
    // 0x0028B344: nop

    after_1:
L_0028B348:
    // 0x0028B348: lw          $a1, 0x10($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X10);
    // 0x0028B34C: jal         0x0028AFF0
    // 0x0028B350: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_0028AFF0(rdram, ctx);
        goto after_2;
    // 0x0028B350: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_2:
    // 0x0028B354: j           L_0028B2E4
    // 0x0028B358: addiu       $a0, $s1, 0x78
    ctx->r4 = ADD32(ctx->r17, 0X78);
        goto L_0028B2E4;
    // 0x0028B358: addiu       $a0, $s1, 0x78
    ctx->r4 = ADD32(ctx->r17, 0X78);
L_0028B35C:
    // 0x0028B35C: lw          $v0, 0x300($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X300);
    // 0x0028B360: beq         $v0, $zero, L_0028B384
    if (ctx->r2 == 0) {
        // 0x0028B364: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_0028B384;
    }
    // 0x0028B364: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0028B368: lw          $v0, 0x2F4($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X2F4);
    // 0x0028B36C: beq         $v0, $zero, L_0028B388
    if (ctx->r2 == 0) {
        // 0x0028B370: addiu       $a1, $sp, 0x14
        ctx->r5 = ADD32(ctx->r29, 0X14);
            goto L_0028B388;
    }
    // 0x0028B370: addiu       $a1, $sp, 0x14
    ctx->r5 = ADD32(ctx->r29, 0X14);
    // 0x0028B374: jal         0x0028B274
    // 0x0028B378: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_0028B274(rdram, ctx);
        goto after_3;
    // 0x0028B378: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_3:
    // 0x0028B37C: j           L_0028B3C4
    // 0x0028B380: nop

        goto L_0028B3C4;
    // 0x0028B380: nop

L_0028B384:
    // 0x0028B384: addiu       $a1, $sp, 0x14
    ctx->r5 = ADD32(ctx->r29, 0X14);
L_0028B388:
    // 0x0028B388: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    // 0x0028B38C: lw          $s0, 0x2F4($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X2F4);
    // 0x0028B390: lw          $v0, 0x2F8($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X2F8);
    // 0x0028B394: sltiu       $s0, $s0, 0x1
    ctx->r16 = ctx->r16 < 0X1 ? 1 : 0;
    // 0x0028B398: sll         $s0, $s0, 1
    ctx->r16 = S32(ctx->r16 << 1);
    // 0x0028B39C: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x0028B3A0: or          $s0, $s0, $v0
    ctx->r16 = ctx->r16 | ctx->r2;
    // 0x0028B3A4: jal         0x0028ABE0
    // 0x0028B3A8: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    func_0028ABE0(rdram, ctx);
        goto after_4;
    // 0x0028B3A8: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    after_4:
    // 0x0028B3AC: beq         $v0, $s0, L_0028B3C4
    if (ctx->r2 == ctx->r16) {
        // 0x0028B3B0: nop
    
            goto L_0028B3C4;
    }
    // 0x0028B3B0: nop

    // 0x0028B3B4: lw          $a1, 0x14($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X14);
    // 0x0028B3B8: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x0028B3BC: jal         0x0028B0FC
    // 0x0028B3C0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_0028B0FC(rdram, ctx);
        goto after_5;
    // 0x0028B3C0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_5:
L_0028B3C4:
    // 0x0028B3C4: lw          $ra, 0x30($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X30);
    // 0x0028B3C8: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x0028B3CC: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x0028B3D0: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x0028B3D4: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x0028B3D8: jr          $ra
    // 0x0028B3DC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x0028B3DC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_0020FB90(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0020FB90: lwc1        $f0, 0x0($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X0);
    // 0x0020FB94: lwc1        $f1, 0x0($a1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r5, 0X0);
    // 0x0020FB98: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0020FB9C: lwc1        $f3, 0x4($a0)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r4, 0X4);
    // 0x0020FBA0: lwc1        $f1, 0x4($a1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r5, 0X4);
    // 0x0020FBA4: mul.s       $f3, $f3, $f1
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f3.fl = MUL_S(ctx->f3.fl, ctx->f1.fl);
    // 0x0020FBA8: lwc1        $f2, 0x8($a1)
    ctx->f2.u32l = MEM_W(ctx->r5, 0X8);
    // 0x0020FBAC: lwc1        $f1, 0x8($a0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r4, 0X8);
    // 0x0020FBB0: mul.s       $f1, $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f2.fl);
    // 0x0020FBB4: add.s       $f0, $f0, $f3
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f3.fl;
    // 0x0020FBB8: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x0020FBBC: swc1        $f0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f0.u32l;
    // 0x0020FBC0: lwc1        $f0, 0x10($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X10);
    // 0x0020FBC4: lwc1        $f1, 0x0($a1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r5, 0X0);
    // 0x0020FBC8: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0020FBCC: lwc1        $f3, 0x14($a0)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r4, 0X14);
    // 0x0020FBD0: lwc1        $f1, 0x4($a1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r5, 0X4);
    // 0x0020FBD4: mul.s       $f3, $f3, $f1
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f3.fl = MUL_S(ctx->f3.fl, ctx->f1.fl);
    // 0x0020FBD8: lwc1        $f2, 0x8($a1)
    ctx->f2.u32l = MEM_W(ctx->r5, 0X8);
    // 0x0020FBDC: lwc1        $f1, 0x18($a0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r4, 0X18);
    // 0x0020FBE0: mul.s       $f1, $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f2.fl);
    // 0x0020FBE4: add.s       $f0, $f0, $f3
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f3.fl;
    // 0x0020FBE8: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x0020FBEC: swc1        $f0, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->f0.u32l;
    // 0x0020FBF0: lwc1        $f0, 0x20($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X20);
    // 0x0020FBF4: lwc1        $f1, 0x0($a1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r5, 0X0);
    // 0x0020FBF8: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0020FBFC: lwc1        $f3, 0x24($a0)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r4, 0X24);
    // 0x0020FC00: lwc1        $f1, 0x4($a1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r5, 0X4);
    // 0x0020FC04: mul.s       $f3, $f3, $f1
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f3.fl = MUL_S(ctx->f3.fl, ctx->f1.fl);
    // 0x0020FC08: lwc1        $f2, 0x8($a1)
    ctx->f2.u32l = MEM_W(ctx->r5, 0X8);
    // 0x0020FC0C: lwc1        $f1, 0x28($a0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r4, 0X28);
    // 0x0020FC10: mul.s       $f1, $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f2.fl);
    // 0x0020FC14: add.s       $f0, $f0, $f3
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f3.fl;
    // 0x0020FC18: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x0020FC1C: jr          $ra
    // 0x0020FC20: swc1        $f0, 0x8($a2)
    MEM_W(0X8, ctx->r6) = ctx->f0.u32l;
    return;
    // 0x0020FC20: swc1        $f0, 0x8($a2)
    MEM_W(0X8, ctx->r6) = ctx->f0.u32l;
;}
RECOMP_FUNC void func_00259944(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00259944: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x00259948: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0025994C: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x00259950: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x00259954: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00259958: sdc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X20, ctx->r29);
    // 0x0025995C: lwc1        $f1, 0x110($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X110);
    // 0x00259960: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00259964: lwc1        $f0, 0x6D28($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6D28);
    // 0x00259968: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x0025996C: lwc1        $f0, 0x10C($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X10C);
    // 0x00259970: lw          $s1, 0x1A8($a0)
    ctx->r17 = MEM_W(ctx->r4, 0X1A8);
    // 0x00259974: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x00259978: lb          $v1, 0x34($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X34);
    // 0x0025997C: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x00259980: bne         $v1, $v0, L_002599A8
    if (ctx->r3 != ctx->r2) {
        // 0x00259984: swc1        $f0, 0x10C($s0)
        MEM_W(0X10C, ctx->r16) = ctx->f0.u32l;
            goto L_002599A8;
    }
    // 0x00259984: swc1        $f0, 0x10C($s0)
    MEM_W(0X10C, ctx->r16) = ctx->f0.u32l;
    // 0x00259988: lui         $a2, 0x3CCC
    ctx->r6 = S32(0X3CCC << 16);
    // 0x0025998C: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x00259990: lui         $a1, 0x3EF1
    ctx->r5 = S32(0X3EF1 << 16);
    // 0x00259994: ori         $a1, $a1, 0x463B
    ctx->r5 = ctx->r5 | 0X463B;
    // 0x00259998: jal         0x002117DC
    // 0x0025999C: addiu       $a0, $s0, 0x110
    ctx->r4 = ADD32(ctx->r16, 0X110);
    func_002117DC(rdram, ctx);
        goto after_0;
    // 0x0025999C: addiu       $a0, $s0, 0x110
    ctx->r4 = ADD32(ctx->r16, 0X110);
    after_0:
    // 0x002599A0: j           L_002599C8
    // 0x002599A4: nop

        goto L_002599C8;
    // 0x002599A4: nop

L_002599A8:
    // 0x002599A8: lwc1        $f12, 0x110($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X110);
    // 0x002599AC: lui         $a2, 0x3C03
    ctx->r6 = S32(0X3C03 << 16);
    // 0x002599B0: ori         $a2, $a2, 0x126F
    ctx->r6 = ctx->r6 | 0X126F;
    // 0x002599B4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002599B8: lwc1        $f14, 0x732C($at)
    ctx->f14.u32l = MEM_W(ctx->r1, 0X732C);
    // 0x002599BC: jal         0x00211774
    // 0x002599C0: nop

    func_00211774(rdram, ctx);
        goto after_1;
    // 0x002599C0: nop

    after_1:
    // 0x002599C4: swc1        $f0, 0x110($s0)
    MEM_W(0X110, ctx->r16) = ctx->f0.u32l;
L_002599C8:
    // 0x002599C8: lwc1        $f0, 0x10C($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X10C);
    // 0x002599CC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002599D0: lwc1        $f12, 0x7330($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X7330);
    // 0x002599D4: mul.s       $f12, $f0, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = MUL_S(ctx->f0.fl, ctx->f12.fl);
    // 0x002599D8: lwc1        $f1, 0x120($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X120);
    // 0x002599DC: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x002599E0: lwc1        $f0, 0x6D28($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6D28);
    // 0x002599E4: lwc1        $f20, 0x110($s0)
    ctx->f20.u32l = MEM_W(ctx->r16, 0X110);
    // 0x002599E8: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x002599EC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002599F0: lwc1        $f0, 0x7334($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X7334);
    // 0x002599F4: mul.s       $f20, $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = MUL_S(ctx->f20.fl, ctx->f0.fl);
    // 0x002599F8: jal         0x002982F0
    // 0x002599FC: swc1        $f1, 0x120($s0)
    MEM_W(0X120, ctx->r16) = ctx->f_odd[(1 - 1) * 2];
    func_002982F0(rdram, ctx);
        goto after_2;
    // 0x002599FC: swc1        $f1, 0x120($s0)
    MEM_W(0X120, ctx->r16) = ctx->f_odd[(1 - 1) * 2];
    after_2:
    // 0x00259A00: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00259A04: lwc1        $f2, 0x7338($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X7338);
    // 0x00259A08: mul.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f2.fl);
    // 0x00259A0C: nop

    // 0x00259A10: mul.s       $f1, $f20, $f20
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f1.fl = MUL_S(ctx->f20.fl, ctx->f20.fl);
    // 0x00259A14: add.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f2.fl;
    // 0x00259A18: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x00259A1C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00259A20: lwc1        $f0, 0x733C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X733C);
    // 0x00259A24: mul.s       $f20, $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = MUL_S(ctx->f20.fl, ctx->f0.fl);
    // 0x00259A28: add.s       $f1, $f1, $f20
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f20.fl;
    // 0x00259A2C: lw          $v0, 0xA50($s1)
    ctx->r2 = MEM_W(ctx->r17, 0XA50);
    // 0x00259A30: swc1        $f1, 0x168($v0)
    MEM_W(0X168, ctx->r2) = ctx->f_odd[(1 - 1) * 2];
    // 0x00259A34: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x00259A38: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00259A3C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00259A40: ldc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X20);
    // 0x00259A44: jr          $ra
    // 0x00259A48: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x00259A48: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_00290ACC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00290ACC: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x00290AD0: sw          $s5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r21;
    // 0x00290AD4: addu        $s5, $a0, $zero
    ctx->r21 = ADD32(ctx->r4, 0);
    // 0x00290AD8: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x00290ADC: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    // 0x00290AE0: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x00290AE4: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x00290AE8: sw          $s6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r22;
    // 0x00290AEC: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x00290AF0: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x00290AF4: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x00290AF8: lbu         $v1, 0x8($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X8);
    // 0x00290AFC: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x00290B00: bne         $v1, $v0, L_00290C38
    if (ctx->r3 != ctx->r2) {
        // 0x00290B04: addu        $s3, $s2, $zero
        ctx->r19 = ADD32(ctx->r18, 0);
            goto L_00290C38;
    }
    // 0x00290B04: addu        $s3, $s2, $zero
    ctx->r19 = ADD32(ctx->r18, 0);
    // 0x00290B08: lbu         $v1, 0x9($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X9);
    // 0x00290B0C: addiu       $v0, $zero, 0x51
    ctx->r2 = ADD32(0, 0X51);
    // 0x00290B10: bne         $v1, $v0, L_00290C38
    if (ctx->r3 != ctx->r2) {
        // 0x00290B14: nop
    
            goto L_00290C38;
    }
    // 0x00290B14: nop

    // 0x00290B18: lbu         $v0, 0xB($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0XB);
    // 0x00290B1C: lbu         $v1, 0xC($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0XC);
    // 0x00290B20: lbu         $a1, 0xD($a1)
    ctx->r5 = MEM_BU(ctx->r5, 0XD);
    // 0x00290B24: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x00290B28: sll         $v1, $v1, 8
    ctx->r3 = S32(ctx->r3 << 8);
    // 0x00290B2C: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x00290B30: or          $v0, $v0, $a1
    ctx->r2 = ctx->r2 | ctx->r5;
    // 0x00290B34: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x00290B38: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00290B3C: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x00290B40: lw          $s4, 0x24($s5)
    ctx->r20 = MEM_W(ctx->r21, 0X24);
    // 0x00290B44: jal         0x00290D5C
    // 0x00290B48: nop

    func_00290D5C(rdram, ctx);
        goto after_0;
    // 0x00290B48: nop

    after_0:
    // 0x00290B4C: lw          $s0, 0x50($s5)
    ctx->r16 = MEM_W(ctx->r21, 0X50);
    // 0x00290B50: beql        $s0, $zero, L_00290BD0
    if (ctx->r16 == 0) {
        // 0x00290B54: addu        $s0, $s3, $zero
        ctx->r16 = ADD32(ctx->r19, 0);
            goto L_00290BD0;
    }
    goto skip_0;
    // 0x00290B54: addu        $s0, $s3, $zero
    ctx->r16 = ADD32(ctx->r19, 0);
    skip_0:
    // 0x00290B58: addiu       $s6, $zero, 0x15
    ctx->r22 = ADD32(0, 0X15);
L_00290B5C:
    // 0x00290B5C: lw          $s1, 0x0($s0)
    ctx->r17 = MEM_W(ctx->r16, 0X0);
    // 0x00290B60: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
    // 0x00290B64: lh          $v1, 0xC($s0)
    ctx->r3 = MEM_H(ctx->r16, 0XC);
    // 0x00290B68: bne         $v1, $s6, L_00290BC0
    if (ctx->r3 != ctx->r22) {
        // 0x00290B6C: addu        $s2, $s2, $v0
        ctx->r18 = ADD32(ctx->r18, ctx->r2);
            goto L_00290BC0;
    }
    // 0x00290B6C: addu        $s2, $s2, $v0
    ctx->r18 = ADD32(ctx->r18, ctx->r2);
    // 0x00290B70: jal         0x002933B0
    // 0x00290B74: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_002933B0(rdram, ctx);
        goto after_1;
    // 0x00290B74: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x00290B78: beq         $s3, $zero, L_00290B90
    if (ctx->r19 == 0) {
        // 0x00290B7C: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_00290B90;
    }
    // 0x00290B7C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00290B80: jal         0x002933E0
    // 0x00290B84: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    func_002933E0(rdram, ctx);
        goto after_2;
    // 0x00290B84: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    after_2:
    // 0x00290B88: j           L_00290BA0
    // 0x00290B8C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
        goto L_00290BA0;
    // 0x00290B8C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
L_00290B90:
    // 0x00290B90: addu        $s3, $s0, $zero
    ctx->r19 = ADD32(ctx->r16, 0);
    // 0x00290B94: sw          $zero, 0x0($s0)
    MEM_W(0X0, ctx->r16) = 0;
    // 0x00290B98: sw          $zero, 0x4($s0)
    MEM_W(0X4, ctx->r16) = 0;
    // 0x00290B9C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
L_00290BA0:
    // 0x00290BA0: beql        $s1, $zero, L_00290BC0
    if (ctx->r17 == 0) {
        // 0x00290BA4: sw          $a0, 0x8($s0)
        MEM_W(0X8, ctx->r16) = ctx->r4;
            goto L_00290BC0;
    }
    goto skip_1;
    // 0x00290BA4: sw          $a0, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r4;
    skip_1:
    // 0x00290BA8: lw          $v1, 0x8($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X8);
    // 0x00290BAC: lw          $v0, 0x8($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X8);
    // 0x00290BB0: subu        $s2, $a0, $v1
    ctx->r18 = SUB32(ctx->r4, ctx->r3);
    // 0x00290BB4: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x00290BB8: sw          $v0, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->r2;
    // 0x00290BBC: sw          $a0, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r4;
L_00290BC0:
    // 0x00290BC0: addu        $s0, $s1, $zero
    ctx->r16 = ADD32(ctx->r17, 0);
    // 0x00290BC4: bne         $s0, $zero, L_00290B5C
    if (ctx->r16 != 0) {
        // 0x00290BC8: nop
    
            goto L_00290B5C;
    }
    // 0x00290BC8: nop

    // 0x00290BCC: addu        $s0, $s3, $zero
    ctx->r16 = ADD32(ctx->r19, 0);
L_00290BD0:
    // 0x00290BD0: beq         $s0, $zero, L_00290C38
    if (ctx->r16 == 0) {
        // 0x00290BD4: nop
    
            goto L_00290C38;
    }
    // 0x00290BD4: nop

L_00290BD8:
    // 0x00290BD8: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
    // 0x00290BDC: div         $zero, $v0, $s4
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r20))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r20)));
    // 0x00290BE0: bne         $s4, $zero, L_00290BEC
    if (ctx->r20 != 0) {
        // 0x00290BE4: nop
    
            goto L_00290BEC;
    }
    // 0x00290BE4: nop

    // 0x00290BE8: break       7
    do_break(2690024);
L_00290BEC:
    // 0x00290BEC: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x00290BF0: bne         $s4, $at, L_00290C04
    if (ctx->r20 != ctx->r1) {
        // 0x00290BF4: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_00290C04;
    }
    // 0x00290BF4: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x00290BF8: bne         $v0, $at, L_00290C04
    if (ctx->r2 != ctx->r1) {
        // 0x00290BFC: nop
    
            goto L_00290C04;
    }
    // 0x00290BFC: nop

    // 0x00290C00: break       6
    do_break(2690048);
L_00290C04:
    // 0x00290C04: mflo        $v0
    ctx->r2 = lo;
    // 0x00290C08: lw          $v1, 0x24($s5)
    ctx->r3 = MEM_W(ctx->r21, 0X24);
    // 0x00290C0C: nop

    // 0x00290C10: mult        $v0, $v1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x00290C14: addiu       $a0, $s5, 0x48
    ctx->r4 = ADD32(ctx->r21, 0X48);
    // 0x00290C18: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x00290C1C: lw          $s1, 0x0($s0)
    ctx->r17 = MEM_W(ctx->r16, 0X0);
    // 0x00290C20: mflo        $v0
    ctx->r2 = lo;
    // 0x00290C24: jal         0x00290CCC
    // 0x00290C28: sw          $v0, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->r2;
    func_00290CCC(rdram, ctx);
        goto after_3;
    // 0x00290C28: sw          $v0, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->r2;
    after_3:
    // 0x00290C2C: addu        $s0, $s1, $zero
    ctx->r16 = ADD32(ctx->r17, 0);
    // 0x00290C30: bne         $s0, $zero, L_00290BD8
    if (ctx->r16 != 0) {
        // 0x00290C34: nop
    
            goto L_00290BD8;
    }
    // 0x00290C34: nop

L_00290C38:
    // 0x00290C38: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x00290C3C: lw          $s6, 0x38($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X38);
    // 0x00290C40: lw          $s5, 0x34($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X34);
    // 0x00290C44: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x00290C48: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x00290C4C: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x00290C50: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x00290C54: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x00290C58: jr          $ra
    // 0x00290C5C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x00290C5C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_00225F6C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00225F6C: lw          $t0, 0xE4($a0)
    ctx->r8 = MEM_W(ctx->r4, 0XE4);
    // 0x00225F70: lw          $t3, 0xE8($a0)
    ctx->r11 = MEM_W(ctx->r4, 0XE8);
    // 0x00225F74: lw          $t2, 0x10($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X10);
    // 0x00225F78: lw          $t4, 0x14($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X14);
    // 0x00225F7C: lw          $v1, 0xE0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0XE0);
    // 0x00225F80: slt         $v0, $t0, $t3
    ctx->r2 = SIGNED(ctx->r8) < SIGNED(ctx->r11) ? 1 : 0;
    // 0x00225F84: beq         $v0, $zero, L_00226014
    if (ctx->r2 == 0) {
        // 0x00225F88: addu        $t1, $zero, $zero
        ctx->r9 = ADD32(0, 0);
            goto L_00226014;
    }
    // 0x00225F88: addu        $t1, $zero, $zero
    ctx->r9 = ADD32(0, 0);
    // 0x00225F8C: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x00225F90: sll         $v0, $t0, 2
    ctx->r2 = S32(ctx->r8 << 2);
    // 0x00225F94: addu        $v0, $v0, $t0
    ctx->r2 = ADD32(ctx->r2, ctx->r8);
    // 0x00225F98: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x00225F9C: addu        $v0, $v0, $t0
    ctx->r2 = ADD32(ctx->r2, ctx->r8);
    // 0x00225FA0: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x00225FA4: addu        $v1, $v0, $v1
    ctx->r3 = ADD32(ctx->r2, ctx->r3);
L_00225FA8:
    // 0x00225FA8: slt         $v0, $t1, $t4
    ctx->r2 = SIGNED(ctx->r9) < SIGNED(ctx->r12) ? 1 : 0;
    // 0x00225FAC: beq         $v0, $zero, L_0022601C
    if (ctx->r2 == 0) {
            // 0x00225FB0: addu        $v0, $t1, $zero
    ctx->r2 = ADD32(ctx->r9, 0);
    func_0022601C(rdram, ctx);
    return;
    }
    // 0x00225FB0: addu        $v0, $t1, $zero
    ctx->r2 = ADD32(ctx->r9, 0);
    // 0x00225FB4: beq         $a1, $a0, L_00225FC8
    if (ctx->r5 == ctx->r4) {
        // 0x00225FB8: nop
    
            goto L_00225FC8;
    }
    // 0x00225FB8: nop

    // 0x00225FBC: lhu         $v0, 0xB8($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0XB8);
    // 0x00225FC0: bnel        $v0, $a1, L_00226008
    if (ctx->r2 != ctx->r5) {
        // 0x00225FC4: addiu       $t0, $t0, 0x1
        ctx->r8 = ADD32(ctx->r8, 0X1);
            goto L_00226008;
    }
    goto skip_0;
    // 0x00225FC4: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    skip_0:
L_00225FC8:
    // 0x00225FC8: beq         $a2, $a0, L_00225FE0
    if (ctx->r6 == ctx->r4) {
        // 0x00225FCC: nop
    
            goto L_00225FE0;
    }
    // 0x00225FCC: nop

    // 0x00225FD0: lw          $v0, 0x14($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X14);
    // 0x00225FD4: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x00225FD8: bnel        $v0, $a2, L_00226008
    if (ctx->r2 != ctx->r6) {
        // 0x00225FDC: addiu       $t0, $t0, 0x1
        ctx->r8 = ADD32(ctx->r8, 0X1);
            goto L_00226008;
    }
    goto skip_1;
    // 0x00225FDC: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    skip_1:
L_00225FE0:
    // 0x00225FE0: beql        $a3, $a0, L_00225FFC
    if (ctx->r7 == ctx->r4) {
        // 0x00225FE4: sw          $v1, 0x0($t2)
        MEM_W(0X0, ctx->r10) = ctx->r3;
            goto L_00225FFC;
    }
    goto skip_2;
    // 0x00225FE4: sw          $v1, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r3;
    skip_2:
    // 0x00225FE8: lw          $v0, 0x14($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X14);
    // 0x00225FEC: lh          $v0, 0xC($v0)
    ctx->r2 = MEM_H(ctx->r2, 0XC);
    // 0x00225FF0: bnel        $v0, $a3, L_00226008
    if (ctx->r2 != ctx->r7) {
        // 0x00225FF4: addiu       $t0, $t0, 0x1
        ctx->r8 = ADD32(ctx->r8, 0X1);
            goto L_00226008;
    }
    goto skip_3;
    // 0x00225FF4: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    skip_3:
    // 0x00225FF8: sw          $v1, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r3;
L_00225FFC:
    // 0x00225FFC: addiu       $t2, $t2, 0x4
    ctx->r10 = ADD32(ctx->r10, 0X4);
    // 0x00226000: addiu       $t1, $t1, 0x1
    ctx->r9 = ADD32(ctx->r9, 0X1);
    // 0x00226004: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
L_00226008:
    // 0x00226008: slt         $v0, $t0, $t3
    ctx->r2 = SIGNED(ctx->r8) < SIGNED(ctx->r11) ? 1 : 0;
    // 0x0022600C: bne         $v0, $zero, L_00225FA8
    if (ctx->r2 != 0) {
        // 0x00226010: addiu       $v1, $v1, 0x288
        ctx->r3 = ADD32(ctx->r3, 0X288);
            goto L_00225FA8;
    }
    // 0x00226010: addiu       $v1, $v1, 0x288
    ctx->r3 = ADD32(ctx->r3, 0X288);
L_00226014:
    // 0x00226014: jr          $ra
    // 0x00226018: addu        $v0, $t1, $zero
    ctx->r2 = ADD32(ctx->r9, 0);
    return;
    // 0x00226018: addu        $v0, $t1, $zero
    ctx->r2 = ADD32(ctx->r9, 0);
;}
RECOMP_FUNC void func_00455CF8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00455CF8: lw          $a0, 0xC($a0)
    ctx->r4 = MEM_W(ctx->r4, 0XC);
    // 0x00455CFC: lw          $v0, 0x120($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X120);
    // 0x00455D00: ori         $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 | 0XFFFF;
    // 0x00455D04: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x00455D08: jr          $ra
    // 0x00455D0C: sw          $v0, 0x120($a0)
    MEM_W(0X120, ctx->r4) = ctx->r2;
    return;
    // 0x00455D0C: sw          $v0, 0x120($a0)
    MEM_W(0X120, ctx->r4) = ctx->r2;
;}
RECOMP_FUNC void func_0028CED4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0028CED4: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x0028CED8: lw          $v1, 0x2030($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X2030);
    // 0x0028CEDC: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x0028CEE0: lw          $v0, 0x2034($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2034);
    // 0x0028CEE4: mult        $v1, $v0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x0028CEE8: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x0028CEEC: lw          $a1, -0xE80($a1)
    ctx->r5 = MEM_W(ctx->r5, -0XE80);
    // 0x0028CEF0: mflo        $a2
    ctx->r6 = lo;
    // 0x0028CEF4: blez        $a2, L_0028CF30
    if (SIGNED(ctx->r6) <= 0) {
        // 0x0028CEF8: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_0028CF30;
    }
    // 0x0028CEF8: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
L_0028CEFC:
    // 0x0028CEFC: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0028CF00: lhu         $v0, 0x7498($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X7498);
    // 0x0028CF04: sh          $v0, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r2;
    // 0x0028CF08: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x0028CF0C: lw          $v1, 0x2030($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X2030);
    // 0x0028CF10: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x0028CF14: lw          $v0, 0x2034($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2034);
    // 0x0028CF18: mult        $v1, $v0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x0028CF1C: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x0028CF20: mflo        $a2
    ctx->r6 = lo;
    // 0x0028CF24: slt         $v0, $a0, $a2
    ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r6) ? 1 : 0;
    // 0x0028CF28: bne         $v0, $zero, L_0028CEFC
    if (ctx->r2 != 0) {
        // 0x0028CF2C: addiu       $a1, $a1, 0x2
        ctx->r5 = ADD32(ctx->r5, 0X2);
            goto L_0028CEFC;
    }
    // 0x0028CF2C: addiu       $a1, $a1, 0x2
    ctx->r5 = ADD32(ctx->r5, 0X2);
L_0028CF30:
    // 0x0028CF30: jr          $ra
    // 0x0028CF34: nop

    return;
    // 0x0028CF34: nop

;}
RECOMP_FUNC void func_00266AB4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00266AB4: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x00266AB8: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x00266ABC: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x00266AC0: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x00266AC4: addu        $s1, $a2, $zero
    ctx->r17 = ADD32(ctx->r6, 0);
    // 0x00266AC8: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x00266ACC: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x00266AD0: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x00266AD4: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x00266AD8: lw          $v0, 0xC($s1)
    ctx->r2 = MEM_W(ctx->r17, 0XC);
    // 0x00266ADC: addu        $s4, $a1, $zero
    ctx->r20 = ADD32(ctx->r5, 0);
    // 0x00266AE0: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
    // 0x00266AE4: jal         0x002017D4
    // 0x00266AE8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_002017D4(rdram, ctx);
        goto after_0;
    // 0x00266AE8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_0:
    // 0x00266AEC: lw          $s3, 0x0($v0)
    ctx->r19 = MEM_W(ctx->r2, 0X0);
    // 0x00266AF0: blez        $s3, L_00266B5C
    if (SIGNED(ctx->r19) <= 0) {
        // 0x00266AF4: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_00266B5C;
    }
    // 0x00266AF4: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x00266AF8: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
L_00266AFC:
    // 0x00266AFC: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    // 0x00266B00: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    // 0x00266B04: sw          $s0, 0x18($s1)
    MEM_W(0X18, ctx->r17) = ctx->r16;
    // 0x00266B08: jal         0x0021DC84
    // 0x00266B0C: sw          $s0, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->r16;
    func_0021DC84(rdram, ctx);
        goto after_1;
    // 0x00266B0C: sw          $s0, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->r16;
    after_1:
    // 0x00266B10: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x00266B14: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x00266B18: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x00266B1C: lb          $v0, 0x151($s2)
    ctx->r2 = MEM_B(ctx->r18, 0X151);
    // 0x00266B20: addu        $s0, $s0, $a2
    ctx->r16 = ADD32(ctx->r16, ctx->r6);
    // 0x00266B24: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x00266B28: lw          $a0, 0xC($s1)
    ctx->r4 = MEM_W(ctx->r17, 0XC);
    // 0x00266B2C: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00266B30: lw          $v0, 0x6D1C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X6D1C);
    // 0x00266B34: lw          $a1, 0x98($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X98);
    // 0x00266B38: sllv        $a3, $v0, $a2
    ctx->r7 = S32(ctx->r2 << (ctx->r6 & 31));
    // 0x00266B3C: addu        $a3, $a3, $v0
    ctx->r7 = ADD32(ctx->r7, ctx->r2);
    // 0x00266B40: sll         $a3, $a3, 3
    ctx->r7 = S32(ctx->r7 << 3);
    // 0x00266B44: addiu       $a3, $a3, 0x110
    ctx->r7 = ADD32(ctx->r7, 0X110);
    // 0x00266B48: jal         0x0020A33C
    // 0x00266B4C: addu        $a3, $s2, $a3
    ctx->r7 = ADD32(ctx->r18, ctx->r7);
    func_0020A33C(rdram, ctx);
        goto after_2;
    // 0x00266B4C: addu        $a3, $s2, $a3
    ctx->r7 = ADD32(ctx->r18, ctx->r7);
    after_2:
    // 0x00266B50: slt         $v0, $s0, $s3
    ctx->r2 = SIGNED(ctx->r16) < SIGNED(ctx->r19) ? 1 : 0;
    // 0x00266B54: bne         $v0, $zero, L_00266AFC
    if (ctx->r2 != 0) {
        // 0x00266B58: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_00266AFC;
    }
    // 0x00266B58: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
L_00266B5C:
    // 0x00266B5C: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x00266B60: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x00266B64: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x00266B68: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x00266B6C: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x00266B70: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x00266B74: jr          $ra
    // 0x00266B78: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x00266B78: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_0040A6F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0040A6F0: addiu       $sp, $sp, -0xE8
    ctx->r29 = ADD32(ctx->r29, -0XE8);
    // 0x0040A6F4: sw          $s2, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = ctx->r18;
    // 0x0040A6F8: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x0040A6FC: sw          $s3, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->r19;
    // 0x0040A700: addu        $s3, $a1, $zero
    ctx->r19 = ADD32(ctx->r5, 0);
    // 0x0040A704: sw          $s0, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->r16;
    // 0x0040A708: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x0040A70C: addiu       $a1, $s2, 0x140
    ctx->r5 = ADD32(ctx->r18, 0X140);
    // 0x0040A710: addiu       $a2, $sp, 0x38
    ctx->r6 = ADD32(ctx->r29, 0X38);
    // 0x0040A714: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x0040A718: sw          $ra, 0xD8($sp)
    MEM_W(0XD8, ctx->r29) = ctx->r31;
    // 0x0040A71C: sw          $s1, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->r17;
    // 0x0040A720: sdc1        $f20, 0xE0($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0XE0, ctx->r29);
    // 0x0040A724: sw          $zero, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = 0;
    // 0x0040A728: jal         0x00246108
    // 0x0040A72C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_00246108(rdram, ctx);
        goto after_0;
    // 0x0040A72C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_0:
    // 0x0040A730: lui         $s1, 0x8013
    ctx->r17 = S32(0X8013 << 16);
    // 0x0040A734: addiu       $s1, $s1, -0x490
    ctx->r17 = ADD32(ctx->r17, -0X490);
    // 0x0040A738: lw          $a0, 0x80($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X80);
    // 0x0040A73C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0040A740: lwc1        $f20, 0x850($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X850);
    // 0x0040A744: beq         $a0, $zero, L_0040A764
    if (ctx->r4 == 0) {
        // 0x0040A748: lui         $v1, 0x30
        ctx->r3 = S32(0X30 << 16);
            goto L_0040A764;
    }
    // 0x0040A748: lui         $v1, 0x30
    ctx->r3 = S32(0X30 << 16);
    // 0x0040A74C: lw          $v0, 0xD4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XD4);
    // 0x0040A750: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x0040A754: beql        $v0, $zero, L_0040A768
    if (ctx->r2 == 0) {
        // 0x0040A758: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_0040A768;
    }
    goto skip_0;
    // 0x0040A758: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    skip_0:
    // 0x0040A75C: lwc1        $f20, 0xBC($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0XBC);
    // 0x0040A760: sw          $a0, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->r4;
L_0040A764:
    // 0x0040A764: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
L_0040A768:
    // 0x0040A768: lw          $v0, 0xC($s3)
    ctx->r2 = MEM_W(ctx->r19, 0XC);
    // 0x0040A76C: mov.s       $f2, $f20
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    ctx->f2.fl = ctx->f20.fl;
    // 0x0040A770: andi        $v1, $v0, 0x2
    ctx->r3 = ctx->r2 & 0X2;
    // 0x0040A774: beq         $v1, $zero, L_0040A780
    if (ctx->r3 == 0) {
        // 0x0040A778: andi        $v0, $v0, 0x20
        ctx->r2 = ctx->r2 & 0X20;
            goto L_0040A780;
    }
    // 0x0040A778: andi        $v0, $v0, 0x20
    ctx->r2 = ctx->r2 & 0X20;
    // 0x0040A77C: sltu        $a0, $a0, $v0
    ctx->r4 = ctx->r4 < ctx->r2 ? 1 : 0;
L_0040A780:
    // 0x0040A780: lw          $v0, 0x674($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X674);
    // 0x0040A784: beq         $v0, $zero, L_0040A7A4
    if (ctx->r2 == 0) {
        // 0x0040A788: nop
    
            goto L_0040A7A4;
    }
    // 0x0040A788: nop

    // 0x0040A78C: lwc1        $f1, 0x678($s1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r17, 0X678);
    // 0x0040A790: cvt.s.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.fl = CVT_S_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x0040A794: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x0040A798: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x0040A79C: j           L_0040A7AC
    // 0x0040A7A0: div.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = DIV_S(ctx->f1.fl, ctx->f0.fl);
    func_0040A7AC(rdram, ctx);
    return;
    // 0x0040A7A0: div.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = DIV_S(ctx->f1.fl, ctx->f0.fl);
L_0040A7A4:
    // 0x0040A7A4: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0040A7A8: lwc1        $f1, 0x854($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X854);
    // turok2: reconnected split function: a stray ELF symbol at 0x0040A7AC ended
    // this function early, leaving it without its epilogue. On the
    // hardware execution simply continues into the next instruction.
    func_0040A7AC(rdram, ctx);
;}
RECOMP_FUNC void func_002763D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002763D4: addu        $v0, $a0, $zero
    ctx->r2 = ADD32(ctx->r4, 0);
    // 0x002763D8: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
    // 0x002763DC: lw          $v1, 0x4($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X4);
    // 0x002763E0: sw          $v1, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r3;
    // 0x002763E4: lw          $a0, 0x4($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X4);
    // 0x002763E8: lw          $v1, 0x0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X0);
    // 0x002763EC: jr          $ra
    // 0x002763F0: sw          $v1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r3;
    return;
    // 0x002763F0: sw          $v1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r3;
;}
RECOMP_FUNC void func_004406B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_0040778C:
    // 0x004406B0: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x004406B4: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x004406B8: addu        $s2, $a1, $zero
    ctx->r18 = ADD32(ctx->r5, 0);
    // 0x004406BC: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x004406C0: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x004406C4: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x004406C8: lb          $v0, 0xC7($s2)
    ctx->r2 = MEM_B(ctx->r18, 0XC7);
    // 0x004406CC: beq         $v0, $zero, L_00440794
    if (ctx->r2 == 0) {
        // 0x004406D0: addu        $s1, $a0, $zero
        ctx->r17 = ADD32(ctx->r4, 0);
            goto L_00440794;
    }
    // 0x004406D0: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x004406D4: lwc1        $f1, 0x8($s1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r17, 0X8);
    // 0x004406D8: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x004406DC: lwc1        $f0, 0x538($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X538);
    // 0x004406E0: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x004406E4: nop

    // 0x004406E8: bc1f        L_00440794
    if (!c1cs) {
        // 0x004406EC: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_00440794;
    }
    // 0x004406EC: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x004406F0: lui         $s0, 0x8013
    ctx->r16 = S32(0X8013 << 16);
    // 0x004406F4: addiu       $s0, $s0, -0x5FC
    ctx->r16 = ADD32(ctx->r16, -0X5FC);
    // 0x004406F8: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x004406FC: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x00440700: sb          $zero, -0x32($s0)
    MEM_B(-0X32, ctx->r16) = 0;
    // 0x00440704: sw          $v0, -0x28($s0)
    MEM_W(-0X28, ctx->r16) = ctx->r2;
    // 0x00440708: lwc1        $f0, 0x4($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X4);
    // 0x0044070C: mul.s       $f1, $f0, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x00440710: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x00440714: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    // 0x00440718: lwc1        $f0, 0xC($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0XC);
    // 0x0044071C: mul.s       $f12, $f0, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x00440720: add.s       $f12, $f1, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = ctx->f1.fl + ctx->f12.fl;
    // 0x00440724: jal         0x00298470
    // 0x00440728: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    func_00298470(rdram, ctx);
        goto after_0;
    // 0x00440728: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    after_0:
    // 0x0044072C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00440730: lwc1        $f1, 0x53C($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X53C);
    // 0x00440734: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x00440738: nop

    // 0x0044073C: bc1f        L_0044076C
    if (!c1cs) {
        // 0x00440740: addiu       $a1, $zero, -0x301
        ctx->r5 = ADD32(0, -0X301);
            goto L_0044076C;
    }
    // 0x00440740: addiu       $a1, $zero, -0x301
    ctx->r5 = ADD32(0, -0X301);
    // 0x00440744: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x00440748: addiu       $a0, $a0, 0x1C40
    ctx->r4 = ADD32(ctx->r4, 0X1C40);
    // 0x0044074C: lui         $a2, 0x800F
    ctx->r6 = S32(0X800F << 16);
    // 0x00440750: addiu       $a2, $a2, 0x1F50
    ctx->r6 = ADD32(ctx->r6, 0X1F50);
    // 0x00440754: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x00440758: lw          $v1, 0x0($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X0);
    // 0x0044075C: and         $v0, $v0, $a1
    ctx->r2 = ctx->r2 & ctx->r5;
    // 0x00440760: and         $v1, $v1, $a1
    ctx->r3 = ctx->r3 & ctx->r5;
    // 0x00440764: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
    // 0x00440768: sw          $v1, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r3;
L_0044076C:
    // 0x0044076C: lbu         $v0, -0x33($s0)
    ctx->r2 = MEM_BU(ctx->r16, -0X33);
    // 0x00440770: bne         $v0, $zero, L_00440784
    if (ctx->r2 != 0) {
        // 0x00440774: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_00440784;
    }
    // 0x00440774: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x00440778: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x0044077C: j           L_0040778C
    // 0x00440780: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
    entry_0040778C(rdram, ctx);
    return;
    // 0x00440780: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
L_00440784:
    // 0x00440784: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x00440788: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x0044078C: jal         0x00243414
    // 0x00440790: nop

    func_00243414(rdram, ctx);
        goto after_1;
    // 0x00440790: nop

    after_1:
L_00440794:
    // 0x00440794: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x00440798: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x0044079C: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x004407A0: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x004407A4: jr          $ra
    // 0x004407A8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x004407A8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_00268030(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00268030: lw          $v0, 0x48($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X48);
    // 0x00268034: jr          $ra
    // 0x00268038: andi        $v0, $v0, 0x1000
    ctx->r2 = ctx->r2 & 0X1000;
    return;
    // 0x00268038: andi        $v0, $v0, 0x1000
    ctx->r2 = ctx->r2 & 0X1000;
;}
RECOMP_FUNC void func_00268158(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00268158: jr          $ra
    // 0x0026815C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x0026815C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void func_004463A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_0040D3F0:
    // 0x004463A8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x004463AC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x004463B0: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x004463B4: lw          $v0, 0x2C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X2C);
    // 0x004463B8: blez        $v0, L_004463F0
    if (SIGNED(ctx->r2) <= 0) {
        // 0x004463BC: addu        $v1, $zero, $zero
        ctx->r3 = ADD32(0, 0);
            goto L_004463F0;
    }
    // 0x004463BC: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
    // 0x004463C0: addu        $a3, $v0, $zero
    ctx->r7 = ADD32(ctx->r2, 0);
    // 0x004463C4: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
L_004463C8:
    // 0x004463C8: lw          $v0, 0x30($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X30);
    // 0x004463CC: lw          $v0, 0xD4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0XD4);
    // 0x004463D0: andi        $v0, $v0, 0x100
    ctx->r2 = ctx->r2 & 0X100;
    // 0x004463D4: beql        $v0, $zero, L_004463E4
    if (ctx->r2 == 0) {
        // 0x004463D8: addiu       $v1, $v1, 0x1
        ctx->r3 = ADD32(ctx->r3, 0X1);
            goto L_004463E4;
    }
    goto skip_0;
    // 0x004463D8: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    skip_0:
    // 0x004463DC: j           L_0040D3F0
    // 0x004463E0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    entry_0040D3F0(rdram, ctx);
    return;
    // 0x004463E0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
L_004463E4:
    // 0x004463E4: slt         $v0, $v1, $a3
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r7) ? 1 : 0;
    // 0x004463E8: bne         $v0, $zero, L_004463C8
    if (ctx->r2 != 0) {
        // 0x004463EC: addiu       $a1, $a1, 0x4
        ctx->r5 = ADD32(ctx->r5, 0X4);
            goto L_004463C8;
    }
    // 0x004463EC: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
L_004463F0:
    // 0x004463F0: beq         $a2, $zero, L_004464BC
    if (ctx->r6 == 0) {
        // 0x004463F4: nop
    
            goto L_004464BC;
    }
    // 0x004463F4: nop

    // 0x004463F8: lw          $v0, 0x4F8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X4F8);
    // 0x004463FC: addiu       $v1, $v0, 0xC
    ctx->r3 = ADD32(ctx->r2, 0XC);
    // 0x00446400: sw          $v1, 0x4F8($a0)
    MEM_W(0X4F8, ctx->r4) = ctx->r3;
    // 0x00446404: lw          $a2, 0xC($v0)
    ctx->r6 = MEM_W(ctx->r2, 0XC);
    // 0x00446408: lw          $v0, 0x4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X4);
    // 0x0044640C: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
    // 0x00446410: sw          $zero, 0x518($a0)
    MEM_W(0X518, ctx->r4) = 0;
    // 0x00446414: sw          $zero, 0x530($a0)
    MEM_W(0X530, ctx->r4) = 0;
    // 0x00446418: blez        $v0, L_00446440
    if (SIGNED(ctx->r2) <= 0) {
        // 0x0044641C: sw          $zero, 0x548($a0)
        MEM_W(0X548, ctx->r4) = 0;
            goto L_00446440;
    }
    // 0x0044641C: sw          $zero, 0x548($a0)
    MEM_W(0X548, ctx->r4) = 0;
    // 0x00446420: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
L_00446424:
    // 0x00446424: lw          $v0, 0x8($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X8);
    // 0x00446428: sw          $zero, 0x24C($v0)
    MEM_W(0X24C, ctx->r2) = 0;
    // 0x0044642C: lw          $v0, 0x4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X4);
    // 0x00446430: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x00446434: slt         $v0, $v1, $v0
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x00446438: bne         $v0, $zero, L_00446424
    if (ctx->r2 != 0) {
        // 0x0044643C: addiu       $a1, $a1, 0x4
        ctx->r5 = ADD32(ctx->r5, 0X4);
            goto L_00446424;
    }
    // 0x0044643C: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
L_00446440:
    // 0x00446440: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x00446444: blez        $v0, L_0044646C
    if (SIGNED(ctx->r2) <= 0) {
        // 0x00446448: addu        $v1, $zero, $zero
        ctx->r3 = ADD32(0, 0);
            goto L_0044646C;
    }
    // 0x00446448: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
    // 0x0044644C: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
L_00446450:
    // 0x00446450: lw          $v0, 0x1C($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X1C);
    // 0x00446454: sw          $zero, 0x24C($v0)
    MEM_W(0X24C, ctx->r2) = 0;
    // 0x00446458: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x0044645C: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x00446460: slt         $v0, $v1, $v0
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x00446464: bne         $v0, $zero, L_00446450
    if (ctx->r2 != 0) {
        // 0x00446468: addiu       $a1, $a1, 0x4
        ctx->r5 = ADD32(ctx->r5, 0X4);
            goto L_00446450;
    }
    // 0x00446468: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
L_0044646C:
    // 0x0044646C: lw          $v0, 0x2C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X2C);
    // 0x00446470: blez        $v0, L_00446498
    if (SIGNED(ctx->r2) <= 0) {
        // 0x00446474: addu        $v1, $zero, $zero
        ctx->r3 = ADD32(0, 0);
            goto L_00446498;
    }
    // 0x00446474: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
    // 0x00446478: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
L_0044647C:
    // 0x0044647C: lw          $v0, 0x30($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X30);
    // 0x00446480: sw          $zero, 0x24C($v0)
    MEM_W(0X24C, ctx->r2) = 0;
    // 0x00446484: lw          $v0, 0x2C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X2C);
    // 0x00446488: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x0044648C: slt         $v0, $v1, $v0
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x00446490: bne         $v0, $zero, L_0044647C
    if (ctx->r2 != 0) {
        // 0x00446494: addiu       $a1, $a1, 0x4
        ctx->r5 = ADD32(ctx->r5, 0X4);
            goto L_0044647C;
    }
    // 0x00446494: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
L_00446498:
    // 0x00446498: sll         $v0, $a2, 3
    ctx->r2 = S32(ctx->r6 << 3);
    // 0x0044649C: sw          $a2, 0x4FC($a0)
    MEM_W(0X4FC, ctx->r4) = ctx->r6;
    // 0x004464A0: lui         $at, 0x43
    ctx->r1 = S32(0X43 << 16);
    // 0x004464A4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x004464A8: lw          $v0, 0x232C($at)
    ctx->r2 = MEM_W(ctx->r1, 0X232C);
    // 0x004464AC: beq         $v0, $zero, L_004464BC
    if (ctx->r2 == 0) {
        // 0x004464B0: nop
    
            goto L_004464BC;
    }
    // 0x004464B0: nop

    // 0x004464B4: jalr        $v0
    // 0x004464B8: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x004464B8: nop

    after_0:
L_004464BC:
    // 0x004464BC: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x004464C0: jr          $ra
    // 0x004464C4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x004464C4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0022629C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0022629C: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x002262A0: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x002262A4: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x002262A8: sw          $s4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r20;
    // 0x002262AC: addu        $s4, $a1, $zero
    ctx->r20 = ADD32(ctx->r5, 0);
    // 0x002262B0: sw          $s5, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r21;
    // 0x002262B4: addu        $s5, $a2, $zero
    ctx->r21 = ADD32(ctx->r6, 0);
    // 0x002262B8: sw          $s3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r19;
    // 0x002262BC: addu        $s3, $a3, $zero
    ctx->r19 = ADD32(ctx->r7, 0);
    // 0x002262C0: sw          $ra, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r31;
    // 0x002262C4: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x002262C8: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x002262CC: lw          $a0, 0x38($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X38);
    // 0x002262D0: lw          $a1, 0xC($s1)
    ctx->r5 = MEM_W(ctx->r17, 0XC);
    // 0x002262D4: jal         0x00201848
    // 0x002262D8: addu        $a2, $s4, $zero
    ctx->r6 = ADD32(ctx->r20, 0);
    func_00201848(rdram, ctx);
        goto after_0;
    // 0x002262D8: addu        $a2, $s4, $zero
    ctx->r6 = ADD32(ctx->r20, 0);
    after_0:
    // 0x002262DC: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x002262E0: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x002262E4: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x002262E8: lui         $a3, 0x800A
    ctx->r7 = S32(0X800A << 16);
    // 0x002262EC: addiu       $a3, $a3, 0x5EC0
    ctx->r7 = ADD32(ctx->r7, 0X5EC0);
    // 0x002262F0: jal         0x00205B94
    // 0x002262F4: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    func_00205B94(rdram, ctx);
        goto after_1;
    // 0x002262F4: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    after_1:
    // 0x002262F8: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x002262FC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x00226300: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    // 0x00226304: lui         $v1, 0x800A
    ctx->r3 = S32(0X800A << 16);
    // 0x00226308: addiu       $v1, $v1, 0x5FD0
    ctx->r3 = ADD32(ctx->r3, 0X5FD0);
    // 0x0022630C: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x00226310: addu        $s2, $v0, $zero
    ctx->r18 = ADD32(ctx->r2, 0);
    // 0x00226314: sw          $s1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r17;
    // 0x00226318: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x0022631C: jal         0x00205D0C
    // 0x00226320: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    func_00205D0C(rdram, ctx);
        goto after_2;
    // 0x00226320: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    after_2:
    // 0x00226324: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x00226328: lw          $a2, 0x4($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X4);
    // 0x0022632C: slt         $v0, $s3, $a2
    ctx->r2 = SIGNED(ctx->r19) < SIGNED(ctx->r6) ? 1 : 0;
    // 0x00226330: bnel        $v0, $zero, L_00226338
    if (ctx->r2 != 0) {
        // 0x00226334: addu        $a2, $s3, $zero
        ctx->r6 = ADD32(ctx->r19, 0);
            goto L_00226338;
    }
    goto skip_0;
    // 0x00226334: addu        $a2, $s3, $zero
    ctx->r6 = ADD32(ctx->r19, 0);
    skip_0:
L_00226338:
    // 0x00226338: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x0022633C: jal         0x0029E460
    // 0x00226340: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    func_0029E460(rdram, ctx);
        goto after_3;
    // 0x00226340: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    after_3:
    // 0x00226344: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x00226348: jal         0x002052D8
    // 0x0022634C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_002052D8(rdram, ctx);
        goto after_4;
    // 0x0022634C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_4:
    // 0x00226350: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x00226354: addu        $at, $s1, $at
    ctx->r1 = ADD32(ctx->r17, ctx->r1);
    // 0x00226358: lw          $v0, -0x7058($at)
    ctx->r2 = MEM_W(ctx->r1, -0X7058);
    // 0x0022635C: beq         $v0, $s4, L_0022636C
    if (ctx->r2 == ctx->r20) {
        // 0x00226360: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_0022636C;
    }
    // 0x00226360: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x00226364: jal         0x002052D8
    // 0x00226368: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    func_002052D8(rdram, ctx);
        goto after_5;
    // 0x00226368: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    after_5:
L_0022636C:
    // 0x0022636C: lw          $ra, 0x40($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X40);
    // 0x00226370: lw          $s5, 0x3C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X3C);
    // 0x00226374: lw          $s4, 0x38($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X38);
    // 0x00226378: lw          $s3, 0x34($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X34);
    // 0x0022637C: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x00226380: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x00226384: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x00226388: jr          $ra
    // 0x0022638C: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x0022638C: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_004469B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_0040DA7C:
    // 0x004469B8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x004469BC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x004469C0: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x004469C4: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x004469C8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x004469CC: lw          $a1, 0x4($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X4);
    // 0x004469D0: beq         $a1, $zero, L_00446A7C
    if (ctx->r5 == 0) {
        // 0x004469D4: addu        $s1, $a0, $zero
        ctx->r17 = ADD32(ctx->r4, 0);
            goto L_00446A7C;
    }
    // 0x004469D4: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x004469D8: lb          $v1, 0x34($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X34);
    // 0x004469DC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x004469E0: beq         $v1, $v0, L_00446A7C
    if (ctx->r3 == ctx->r2) {
        // 0x004469E4: addiu       $v0, $zero, 0x9
        ctx->r2 = ADD32(0, 0X9);
            goto L_00446A7C;
    }
    // 0x004469E4: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
    // 0x004469E8: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x004469EC: addiu       $a0, $a0, 0x200
    ctx->r4 = ADD32(ctx->r4, 0X200);
    // 0x004469F0: lw          $v1, 0x4FC($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X4FC);
    // 0x004469F4: beq         $v1, $v0, L_00446A18
    if (ctx->r3 == ctx->r2) {
        // 0x004469F8: nop
    
            goto L_00446A18;
    }
    // 0x004469F8: nop

    // 0x004469FC: sb          $zero, 0xC7($s0)
    MEM_B(0XC7, ctx->r16) = 0;
    // 0x00446A00: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x00446A04: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x00446A08: jal         0x00243414
    // 0x00446A0C: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    func_00243414(rdram, ctx);
        goto after_0;
    // 0x00446A0C: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    after_0:
    // 0x00446A10: j           L_0040DA7C
    // 0x00446A14: nop

    entry_0040DA7C(rdram, ctx);
    return;
    // 0x00446A14: nop

L_00446A18:
    // 0x00446A18: lw          $v0, 0x4($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X4);
    // 0x00446A1C: subu        $v0, $a1, $v0
    ctx->r2 = SUB32(ctx->r5, ctx->r2);
    // 0x00446A20: bltzl       $v0, L_00446A28
    if (SIGNED(ctx->r2) < 0) {
        // 0x00446A24: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_00446A28;
    }
    goto skip_0;
    // 0x00446A24: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    skip_0:
L_00446A28:
    // 0x00446A28: lwc1        $f1, 0x118($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X118);
    // 0x00446A2C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x00446A30: c.eq.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl == ctx->f0.fl;
    // 0x00446A34: nop

    // 0x00446A38: bc1f        L_00446A5C
    if (!c1cs) {
        // 0x00446A3C: sw          $v0, 0x4($s0)
        MEM_W(0X4, ctx->r16) = ctx->r2;
            goto L_00446A5C;
    }
    // 0x00446A3C: sw          $v0, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r2;
    // 0x00446A40: addiu       $a0, $a0, 0x3C
    ctx->r4 = ADD32(ctx->r4, 0X3C);
    // 0x00446A44: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00446A48: lwc1        $f0, 0x8FC($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X8FC);
    // 0x00446A4C: lui         $a1, 0x43
    ctx->r5 = S32(0X43 << 16);
    // 0x00446A50: addiu       $a1, $a1, 0x2384
    ctx->r5 = ADD32(ctx->r5, 0X2384);
    // 0x00446A54: jal         0x00236314
    // 0x00446A58: swc1        $f0, 0x118($s0)
    MEM_W(0X118, ctx->r16) = ctx->f0.u32l;
    func_00236314(rdram, ctx);
        goto after_1;
    // 0x00446A58: swc1        $f0, 0x118($s0)
    MEM_W(0X118, ctx->r16) = ctx->f0.u32l;
    after_1:
L_00446A5C:
    // 0x00446A5C: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // 0x00446A60: bne         $v0, $zero, L_00446A7C
    if (ctx->r2 != 0) {
        // 0x00446A64: addu        $a1, $s0, $zero
        ctx->r5 = ADD32(ctx->r16, 0);
            goto L_00446A7C;
    }
    // 0x00446A64: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x00446A68: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x00446A6C: jal         0x00243414
    // 0x00446A70: addiu       $a2, $zero, 0x9
    ctx->r6 = ADD32(0, 0X9);
    func_00243414(rdram, ctx);
        goto after_2;
    // 0x00446A70: addiu       $a2, $zero, 0x9
    ctx->r6 = ADD32(0, 0X9);
    after_2:
    // 0x00446A74: jal         0x00206068
    // 0x00446A78: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    func_00206068(rdram, ctx);
        goto after_3;
    // 0x00446A78: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    after_3:
L_00446A7C:
    // 0x00446A7C: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x00446A80: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00446A84: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00446A88: jr          $ra
    // 0x00446A8C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00446A8C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_0027B614(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0027B614: addiu       $sp, $sp, -0x90
    ctx->r29 = ADD32(ctx->r29, -0X90);
    // 0x0027B618: sdc1        $f29, 0x88($sp)
    CHECK_FR(ctx, 29);
    SD(ctx->f29.u64, 0X88, ctx->r29);
    // 0x0027B61C: mtc1        $a1, $f29
    ctx->f_odd[(29 - 1) * 2] = ctx->r5;
    // 0x0027B620: sdc1        $f23, 0x58($sp)
    CHECK_FR(ctx, 23);
    SD(ctx->f23.u64, 0X58, ctx->r29);
    // 0x0027B624: mtc1        $a2, $f23
    ctx->f_odd[(23 - 1) * 2] = ctx->r6;
    // 0x0027B628: sdc1        $f28, 0x80($sp)
    CHECK_FR(ctx, 28);
    SD(ctx->f28.u64, 0X80, ctx->r29);
    // 0x0027B62C: mtc1        $a3, $f28
    ctx->f28.u32l = ctx->r7;
    // 0x0027B630: sw          $s5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r21;
    // 0x0027B634: addu        $s5, $a0, $zero
    ctx->r21 = ADD32(ctx->r4, 0);
    // 0x0027B638: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x0027B63C: addiu       $s2, $s5, 0x8
    ctx->r18 = ADD32(ctx->r21, 0X8);
    // 0x0027B640: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x0027B644: addu        $s4, $zero, $zero
    ctx->r20 = ADD32(0, 0);
    // 0x0027B648: sw          $ra, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r31;
    // 0x0027B64C: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x0027B650: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x0027B654: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x0027B658: sdc1        $f27, 0x78($sp)
    CHECK_FR(ctx, 27);
    SD(ctx->f27.u64, 0X78, ctx->r29);
    // 0x0027B65C: sdc1        $f26, 0x70($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X70, ctx->r29);
    // 0x0027B660: sdc1        $f25, 0x68($sp)
    CHECK_FR(ctx, 25);
    SD(ctx->f25.u64, 0X68, ctx->r29);
    // 0x0027B664: sdc1        $f24, 0x60($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X60, ctx->r29);
    // 0x0027B668: sdc1        $f22, 0x50($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X50, ctx->r29);
    // 0x0027B66C: sdc1        $f21, 0x48($sp)
    CHECK_FR(ctx, 21);
    SD(ctx->f21.u64, 0X48, ctx->r29);
    // 0x0027B670: sdc1        $f20, 0x40($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X40, ctx->r29);
    // 0x0027B674: lhu         $v0, 0x2($s5)
    ctx->r2 = MEM_HU(ctx->r21, 0X2);
    // 0x0027B678: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0027B67C: lwc1        $f3, -0x7BD0($at)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r1, -0X7BD0);
    // 0x0027B680: mtc1        $v0, $f22
    ctx->f22.u32l = ctx->r2;
    // 0x0027B684: cvt.s.w     $f22, $f22
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    ctx->f22.fl = CVT_S_W(ctx->f22.u32l);
    // 0x0027B688: mov.s       $f0, $f22
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    ctx->f0.fl = ctx->f22.fl;
    // 0x0027B68C: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x0027B690: lwc1        $f27, 0xA0($sp)
    ctx->f_odd[(27 - 1) * 2] = MEM_W(ctx->r29, 0XA0);
    // 0x0027B694: c.eq.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl == ctx->f2.fl;
    // 0x0027B698: nop

    // 0x0027B69C: bc1t        L_0027B794
    if (c1cs) {
        // 0x0027B6A0: sub.s       $f22, $f22, $f3
        CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f22.fl = ctx->f22.fl - ctx->f3.fl;
            goto L_0027B794;
    }
    // 0x0027B6A0: sub.s       $f22, $f22, $f3
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f22.fl = ctx->f22.fl - ctx->f3.fl;
    // 0x0027B6A4: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0027B6A8: ldc1        $f24, -0x7BC8($at)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r1, -0X7BC8);
L_0027B6AC:
    // 0x0027B6AC: lhu         $v0, 0x0($s5)
    ctx->r2 = MEM_HU(ctx->r21, 0X0);
    // 0x0027B6B0: mtc1        $v0, $f20
    ctx->f20.u32l = ctx->r2;
    // 0x0027B6B4: cvt.s.w     $f20, $f20
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    ctx->f20.fl = CVT_S_W(ctx->f20.u32l);
    // 0x0027B6B8: mov.s       $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    ctx->f0.fl = ctx->f20.fl;
    // 0x0027B6BC: sub.s       $f20, $f20, $f3
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f20.fl = ctx->f20.fl - ctx->f3.fl;
    // 0x0027B6C0: c.eq.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl == ctx->f2.fl;
    // 0x0027B6C4: nop

    // 0x0027B6C8: bc1t        L_0027B758
    if (c1cs) {
        // 0x0027B6CC: mov.s       $f21, $f29
        CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 29);
    ctx->f21.fl = ctx->f29.fl;
            goto L_0027B758;
    }
    // 0x0027B6CC: mov.s       $f21, $f29
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 29);
    ctx->f21.fl = ctx->f29.fl;
    // 0x0027B6D0: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0027B6D4: lwc1        $f26, -0x7BC0($at)
    ctx->f26.u32l = MEM_W(ctx->r1, -0X7BC0);
    // 0x0027B6D8: mtc1        $zero, $f25
    ctx->f_odd[(25 - 1) * 2] = 0;
L_0027B6DC:
    // 0x0027B6DC: addiu       $a0, $s2, 0x8
    ctx->r4 = ADD32(ctx->r18, 0X8);
    // 0x0027B6E0: lw          $s4, 0x4($s2)
    ctx->r20 = MEM_W(ctx->r18, 0X4);
    // 0x0027B6E4: lw          $s0, 0x0($s2)
    ctx->r16 = MEM_W(ctx->r18, 0X0);
    // 0x0027B6E8: mfc1        $a2, $f21
    ctx->r6 = (int32_t)ctx->f_odd[(21 - 1) * 2];
    // 0x0027B6EC: mfc1        $a3, $f23
    ctx->r7 = (int32_t)ctx->f_odd[(23 - 1) * 2];
    // 0x0027B6F0: mult        $s0, $s4
    result = S64(S32(ctx->r16)) * S64(S32(ctx->r20)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x0027B6F4: swc1        $f28, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f28.u32l;
    // 0x0027B6F8: swc1        $f27, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f_odd[(27 - 1) * 2];
    // 0x0027B6FC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0027B700: sw          $s4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r20;
    // 0x0027B704: mflo        $s3
    ctx->r19 = lo;
    // 0x0027B708: sll         $s1, $s3, 1
    ctx->r17 = S32(ctx->r19 << 1);
    // 0x0027B70C: addiu       $a1, $s1, 0x8
    ctx->r5 = ADD32(ctx->r17, 0X8);
    // 0x0027B710: jal         0x00279528
    // 0x0027B714: addu        $a1, $s2, $a1
    ctx->r5 = ADD32(ctx->r18, ctx->r5);
    func_00279528(rdram, ctx);
        goto after_0;
    // 0x0027B714: addu        $a1, $s2, $a1
    ctx->r5 = ADD32(ctx->r18, ctx->r5);
    after_0:
    // 0x0027B718: mtc1        $s0, $f0
    ctx->f0.u32l = ctx->r16;
    // 0x0027B71C: cvt.d.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.d = CVT_D_W(ctx->f0.u32l);
    // 0x0027B720: bltzl       $s0, L_0027B728
    if (SIGNED(ctx->r16) < 0) {
        // 0x0027B724: add.d       $f0, $f0, $f24
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f24.d); 
    ctx->f0.d = ctx->f0.d + ctx->f24.d;
            goto L_0027B728;
    }
    goto skip_0;
    // 0x0027B724: add.d       $f0, $f0, $f24
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f24.d); 
    ctx->f0.d = ctx->f0.d + ctx->f24.d;
    skip_0:
L_0027B728:
    // 0x0027B728: cvt.s.d     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.d); 
    ctx->f0.fl = CVT_S_D(ctx->f0.d);
    // 0x0027B72C: mul.s       $f0, $f0, $f28
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f28.fl);
    // 0x0027B730: mov.s       $f1, $f20
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 20);
    ctx->f1.fl = ctx->f20.fl;
    // 0x0027B734: srl         $v0, $s3, 1
    ctx->r2 = S32(U32(ctx->r19) >> 1);
    // 0x0027B738: addu        $v0, $s1, $v0
    ctx->r2 = ADD32(ctx->r17, ctx->r2);
    // 0x0027B73C: sub.s       $f20, $f20, $f26
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f20.fl = ctx->f20.fl - ctx->f26.fl;
    // 0x0027B740: addu        $s2, $s2, $v0
    ctx->r18 = ADD32(ctx->r18, ctx->r2);
    // 0x0027B744: addiu       $s2, $s2, 0x8
    ctx->r18 = ADD32(ctx->r18, 0X8);
    // 0x0027B748: c.eq.s      $f1, $f25
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 25);
    c1cs = ctx->f1.fl == ctx->f25.fl;
    // 0x0027B74C: nop

    // 0x0027B750: bc1f        L_0027B6DC
    if (!c1cs) {
        // 0x0027B754: add.s       $f21, $f21, $f0
        CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f21.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f21.fl = ctx->f21.fl + ctx->f0.fl;
            goto L_0027B6DC;
    }
    // 0x0027B754: add.s       $f21, $f21, $f0
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f21.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f21.fl = ctx->f21.fl + ctx->f0.fl;
L_0027B758:
    // 0x0027B758: mtc1        $s4, $f0
    ctx->f0.u32l = ctx->r20;
    // 0x0027B75C: cvt.d.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.d = CVT_D_W(ctx->f0.u32l);
    // 0x0027B760: bltzl       $s4, L_0027B768
    if (SIGNED(ctx->r20) < 0) {
        // 0x0027B764: add.d       $f0, $f0, $f24
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f24.d); 
    ctx->f0.d = ctx->f0.d + ctx->f24.d;
            goto L_0027B768;
    }
    goto skip_1;
    // 0x0027B764: add.d       $f0, $f0, $f24
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f24.d); 
    ctx->f0.d = ctx->f0.d + ctx->f24.d;
    skip_1:
L_0027B768:
    // 0x0027B768: cvt.s.d     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.d); 
    ctx->f0.fl = CVT_S_D(ctx->f0.d);
    // 0x0027B76C: mul.s       $f0, $f0, $f27
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 27);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f27.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f27.fl);
    // 0x0027B770: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0027B774: lwc1        $f3, -0x7BBC($at)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r1, -0X7BBC);
    // 0x0027B778: mov.s       $f1, $f22
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 22);
    ctx->f1.fl = ctx->f22.fl;
    // 0x0027B77C: sub.s       $f22, $f22, $f3
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f22.fl = ctx->f22.fl - ctx->f3.fl;
    // 0x0027B780: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x0027B784: c.eq.s      $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f1.fl == ctx->f2.fl;
    // 0x0027B788: nop

    // 0x0027B78C: bc1f        L_0027B6AC
    if (!c1cs) {
        // 0x0027B790: add.s       $f23, $f23, $f0
        CHECK_FR(ctx, 23);
    CHECK_FR(ctx, 23);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f23.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f23.fl = ctx->f23.fl + ctx->f0.fl;
            goto L_0027B6AC;
    }
    // 0x0027B790: add.s       $f23, $f23, $f0
    CHECK_FR(ctx, 23);
    CHECK_FR(ctx, 23);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f23.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f23.fl = ctx->f23.fl + ctx->f0.fl;
L_0027B794:
    // 0x0027B794: lw          $ra, 0x38($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X38);
    // 0x0027B798: lw          $s5, 0x34($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X34);
    // 0x0027B79C: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x0027B7A0: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x0027B7A4: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x0027B7A8: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x0027B7AC: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x0027B7B0: ldc1        $f29, 0x88($sp)
    CHECK_FR(ctx, 29);
    ctx->f29.u64 = LD(ctx->r29, 0X88);
    // 0x0027B7B4: ldc1        $f28, 0x80($sp)
    CHECK_FR(ctx, 28);
    ctx->f28.u64 = LD(ctx->r29, 0X80);
    // 0x0027B7B8: ldc1        $f27, 0x78($sp)
    CHECK_FR(ctx, 27);
    ctx->f27.u64 = LD(ctx->r29, 0X78);
    // 0x0027B7BC: ldc1        $f26, 0x70($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X70);
    // 0x0027B7C0: ldc1        $f25, 0x68($sp)
    CHECK_FR(ctx, 25);
    ctx->f25.u64 = LD(ctx->r29, 0X68);
    // 0x0027B7C4: ldc1        $f24, 0x60($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X60);
    // 0x0027B7C8: ldc1        $f23, 0x58($sp)
    CHECK_FR(ctx, 23);
    ctx->f23.u64 = LD(ctx->r29, 0X58);
    // 0x0027B7CC: ldc1        $f22, 0x50($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X50);
    // 0x0027B7D0: ldc1        $f21, 0x48($sp)
    CHECK_FR(ctx, 21);
    ctx->f21.u64 = LD(ctx->r29, 0X48);
    // 0x0027B7D4: ldc1        $f20, 0x40($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X40);
    // 0x0027B7D8: jr          $ra
    // 0x0027B7DC: addiu       $sp, $sp, 0x90
    ctx->r29 = ADD32(ctx->r29, 0X90);
    return;
    // 0x0027B7DC: addiu       $sp, $sp, 0x90
    ctx->r29 = ADD32(ctx->r29, 0X90);
;}
RECOMP_FUNC void func_002132B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002132B8: addiu       $sp, $sp, -0x338
    ctx->r29 = ADD32(ctx->r29, -0X338);
    // 0x002132BC: sw          $s2, 0x318($sp)
    MEM_W(0X318, ctx->r29) = ctx->r18;
    // 0x002132C0: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x002132C4: sw          $fp, 0x330($sp)
    MEM_W(0X330, ctx->r29) = ctx->r30;
    // 0x002132C8: addu        $fp, $a1, $zero
    ctx->r30 = ADD32(ctx->r5, 0);
    // 0x002132CC: sw          $s7, 0x32C($sp)
    MEM_W(0X32C, ctx->r29) = ctx->r23;
    // 0x002132D0: addu        $s7, $a2, $zero
    ctx->r23 = ADD32(ctx->r6, 0);
    // 0x002132D4: sw          $s0, 0x310($sp)
    MEM_W(0X310, ctx->r29) = ctx->r16;
    // 0x002132D8: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x002132DC: sw          $s3, 0x31C($sp)
    MEM_W(0X31C, ctx->r29) = ctx->r19;
    // 0x002132E0: addu        $s3, $s0, $zero
    ctx->r19 = ADD32(ctx->r16, 0);
    // 0x002132E4: sw          $s1, 0x314($sp)
    MEM_W(0X314, ctx->r29) = ctx->r17;
    // 0x002132E8: addu        $s1, $s0, $zero
    ctx->r17 = ADD32(ctx->r16, 0);
    // 0x002132EC: lui         $a2, 0x800F
    ctx->r6 = S32(0X800F << 16);
    // 0x002132F0: addiu       $a2, $a2, 0x7078
    ctx->r6 = ADD32(ctx->r6, 0X7078);
    // 0x002132F4: sw          $ra, 0x334($sp)
    MEM_W(0X334, ctx->r29) = ctx->r31;
    // 0x002132F8: sw          $s6, 0x328($sp)
    MEM_W(0X328, ctx->r29) = ctx->r22;
    // 0x002132FC: sw          $s5, 0x324($sp)
    MEM_W(0X324, ctx->r29) = ctx->r21;
    // 0x00213300: sw          $s4, 0x320($sp)
    MEM_W(0X320, ctx->r29) = ctx->r20;
    // 0x00213304: lw          $v0, 0x14A8($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X14A8);
    // 0x00213308: blez        $v0, L_002133A0
    if (SIGNED(ctx->r2) <= 0) {
        // 0x0021330C: addu        $s4, $s0, $zero
        ctx->r20 = ADD32(ctx->r16, 0);
            goto L_002133A0;
    }
    // 0x0021330C: addu        $s4, $s0, $zero
    ctx->r20 = ADD32(ctx->r16, 0);
    // 0x00213310: addiu       $a1, $zero, 0x14AC
    ctx->r5 = ADD32(0, 0X14AC);
    // 0x00213314: addiu       $a0, $sp, 0x110
    ctx->r4 = ADD32(ctx->r29, 0X110);
L_00213318:
    // 0x00213318: addu        $v0, $a2, $a1
    ctx->r2 = ADD32(ctx->r6, ctx->r5);
    // 0x0021331C: lw          $v1, 0x4($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X4);
    // 0x00213320: lwc1        $f0, 0x0($s2)
    ctx->f0.u32l = MEM_W(ctx->r18, 0X0);
    // 0x00213324: lwc1        $f1, 0x8($v1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r3, 0X8);
    // 0x00213328: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x0021332C: nop

    // 0x00213330: bc1f        L_0021338C
    if (!c1cs) {
        // 0x00213334: nop
    
            goto L_0021338C;
    }
    // 0x00213334: nop

    // 0x00213338: lwc1        $f1, 0x0($v1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r3, 0X0);
    // 0x0021333C: lwc1        $f0, 0xC($s2)
    ctx->f0.u32l = MEM_W(ctx->r18, 0XC);
    // 0x00213340: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x00213344: nop

    // 0x00213348: bc1f        L_0021338C
    if (!c1cs) {
        // 0x0021334C: nop
    
            goto L_0021338C;
    }
    // 0x0021334C: nop

    // 0x00213350: lwc1        $f1, 0xC($v1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r3, 0XC);
    // 0x00213354: lwc1        $f0, 0x8($s2)
    ctx->f0.u32l = MEM_W(ctx->r18, 0X8);
    // 0x00213358: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x0021335C: nop

    // 0x00213360: bc1f        L_0021338C
    if (!c1cs) {
        // 0x00213364: nop
    
            goto L_0021338C;
    }
    // 0x00213364: nop

    // 0x00213368: lwc1        $f1, 0x4($v1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r3, 0X4);
    // 0x0021336C: lwc1        $f0, 0x14($s2)
    ctx->f0.u32l = MEM_W(ctx->r18, 0X14);
    // 0x00213370: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x00213374: nop

    // 0x00213378: bc1f        L_0021338C
    if (!c1cs) {
        // 0x0021337C: nop
    
            goto L_0021338C;
    }
    // 0x0021337C: nop

    // 0x00213380: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
    // 0x00213384: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x00213388: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
L_0021338C:
    // 0x0021338C: lw          $v0, 0x14A8($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X14A8);
    // 0x00213390: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x00213394: slt         $v0, $s1, $v0
    ctx->r2 = SIGNED(ctx->r17) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x00213398: bne         $v0, $zero, L_00213318
    if (ctx->r2 != 0) {
        // 0x0021339C: addiu       $a1, $a1, 0x8
        ctx->r5 = ADD32(ctx->r5, 0X8);
            goto L_00213318;
    }
    // 0x0021339C: addiu       $a1, $a1, 0x8
    ctx->r5 = ADD32(ctx->r5, 0X8);
L_002133A0:
    // 0x002133A0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x002133A4: bne         $s3, $v0, L_002134B0
    if (ctx->r19 != ctx->r2) {
        // 0x002133A8: slti        $v0, $s3, 0x2
        ctx->r2 = SIGNED(ctx->r19) < 0X2 ? 1 : 0;
            goto L_002134B0;
    }
    // 0x002133A8: slti        $v0, $s3, 0x2
    ctx->r2 = SIGNED(ctx->r19) < 0X2 ? 1 : 0;
    // 0x002133AC: lw          $v0, 0x110($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X110);
    // 0x002133B0: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x002133B4: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
    // 0x002133B8: jal         0x002017D4
    // 0x002133BC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_002017D4(rdram, ctx);
        goto after_0;
    // 0x002133BC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_0:
    // 0x002133C0: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x002133C4: lw          $t0, 0x4($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X4);
    // 0x002133C8: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x002133CC: addiu       $t0, $t0, -0x1
    ctx->r8 = ADD32(ctx->r8, -0X1);
    // 0x002133D0: beq         $t0, $v0, L_0021364C
    if (ctx->r8 == ctx->r2) {
        // 0x002133D4: addiu       $t1, $v1, 0x8
        ctx->r9 = ADD32(ctx->r3, 0X8);
            goto L_0021364C;
    }
    // 0x002133D4: addiu       $t1, $v1, 0x8
    ctx->r9 = ADD32(ctx->r3, 0X8);
    // 0x002133D8: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    // 0x002133DC: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x002133E0: addiu       $v1, $v1, 0xC2
    ctx->r3 = ADD32(ctx->r3, 0XC2);
    // 0x002133E4: sll         $v0, $s0, 2
    ctx->r2 = S32(ctx->r16 << 2);
    // 0x002133E8: addu        $a1, $v0, $fp
    ctx->r5 = ADD32(ctx->r2, ctx->r30);
L_002133EC:
    // 0x002133EC: lwc1        $f1, 0xC($s2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r18, 0XC);
    // 0x002133F0: lwc1        $f0, -0x1A($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, -0X1A);
    // 0x002133F4: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x002133F8: nop

    // 0x002133FC: bc1fl       L_0021349C
    if (!c1cs) {
        // 0x00213400: addiu       $v1, $v1, 0xC0
        ctx->r3 = ADD32(ctx->r3, 0XC0);
            goto L_0021349C;
    }
    goto skip_0;
    // 0x00213400: addiu       $v1, $v1, 0xC0
    ctx->r3 = ADD32(ctx->r3, 0XC0);
    skip_0:
    // 0x00213404: lwc1        $f1, 0x0($s2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r18, 0X0);
    // 0x00213408: lwc1        $f0, -0xE($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, -0XE);
    // 0x0021340C: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x00213410: nop

    // 0x00213414: bc1fl       L_0021349C
    if (!c1cs) {
        // 0x00213418: addiu       $v1, $v1, 0xC0
        ctx->r3 = ADD32(ctx->r3, 0XC0);
            goto L_0021349C;
    }
    goto skip_1;
    // 0x00213418: addiu       $v1, $v1, 0xC0
    ctx->r3 = ADD32(ctx->r3, 0XC0);
    skip_1:
    // 0x0021341C: lwc1        $f1, 0x14($s2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r18, 0X14);
    // 0x00213420: lwc1        $f0, -0x12($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, -0X12);
    // 0x00213424: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x00213428: nop

    // 0x0021342C: bc1fl       L_0021349C
    if (!c1cs) {
        // 0x00213430: addiu       $v1, $v1, 0xC0
        ctx->r3 = ADD32(ctx->r3, 0XC0);
            goto L_0021349C;
    }
    goto skip_2;
    // 0x00213430: addiu       $v1, $v1, 0xC0
    ctx->r3 = ADD32(ctx->r3, 0XC0);
    skip_2:
    // 0x00213434: lwc1        $f1, 0x8($s2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r18, 0X8);
    // 0x00213438: lwc1        $f0, -0x6($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, -0X6);
    // 0x0021343C: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x00213440: nop

    // 0x00213444: bc1fl       L_0021349C
    if (!c1cs) {
        // 0x00213448: addiu       $v1, $v1, 0xC0
        ctx->r3 = ADD32(ctx->r3, 0XC0);
            goto L_0021349C;
    }
    goto skip_3;
    // 0x00213448: addiu       $v1, $v1, 0xC0
    ctx->r3 = ADD32(ctx->r3, 0XC0);
    skip_3:
    // 0x0021344C: lwc1        $f1, 0x10($s2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r18, 0X10);
    // 0x00213450: lwc1        $f0, -0x16($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, -0X16);
    // 0x00213454: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x00213458: nop

    // 0x0021345C: bc1fl       L_0021349C
    if (!c1cs) {
        // 0x00213460: addiu       $v1, $v1, 0xC0
        ctx->r3 = ADD32(ctx->r3, 0XC0);
            goto L_0021349C;
    }
    goto skip_4;
    // 0x00213460: addiu       $v1, $v1, 0xC0
    ctx->r3 = ADD32(ctx->r3, 0XC0);
    skip_4:
    // 0x00213464: lwc1        $f1, 0x4($s2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r18, 0X4);
    // 0x00213468: lwc1        $f0, -0xA($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, -0XA);
    // 0x0021346C: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x00213470: nop

    // 0x00213474: bc1fl       L_0021349C
    if (!c1cs) {
        // 0x00213478: addiu       $v1, $v1, 0xC0
        ctx->r3 = ADD32(ctx->r3, 0XC0);
            goto L_0021349C;
    }
    goto skip_5;
    // 0x00213478: addiu       $v1, $v1, 0xC0
    ctx->r3 = ADD32(ctx->r3, 0XC0);
    skip_5:
    // 0x0021347C: sw          $t1, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r9;
    // 0x00213480: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
    // 0x00213484: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x00213488: beq         $v0, $zero, L_00213494
    if (ctx->r2 == 0) {
        // 0x0021348C: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_00213494;
    }
    // 0x0021348C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x00213490: addiu       $s4, $zero, 0x1
    ctx->r20 = ADD32(0, 0X1);
L_00213494:
    // 0x00213494: beq         $s0, $a2, L_0021364C
    if (ctx->r16 == ctx->r6) {
        // 0x00213498: addiu       $v1, $v1, 0xC0
        ctx->r3 = ADD32(ctx->r3, 0XC0);
            goto L_0021364C;
    }
    // 0x00213498: addiu       $v1, $v1, 0xC0
    ctx->r3 = ADD32(ctx->r3, 0XC0);
L_0021349C:
    // 0x0021349C: addiu       $t0, $t0, -0x1
    ctx->r8 = ADD32(ctx->r8, -0X1);
    // 0x002134A0: bne         $t0, $a0, L_002133EC
    if (ctx->r8 != ctx->r4) {
        // 0x002134A4: addiu       $t1, $t1, 0xC0
        ctx->r9 = ADD32(ctx->r9, 0XC0);
            goto L_002133EC;
    }
    // 0x002134A4: addiu       $t1, $t1, 0xC0
    ctx->r9 = ADD32(ctx->r9, 0XC0);
    // 0x002134A8: j           L_00213650
    // 0x002134AC: sw          $s0, 0x0($s7)
    MEM_W(0X0, ctx->r23) = ctx->r16;
        goto L_00213650;
    // 0x002134AC: sw          $s0, 0x0($s7)
    MEM_W(0X0, ctx->r23) = ctx->r16;
L_002134B0:
    // 0x002134B0: bnel        $v0, $zero, L_00213650
    if (ctx->r2 != 0) {
        // 0x002134B4: sw          $s0, 0x0($s7)
        MEM_W(0X0, ctx->r23) = ctx->r16;
            goto L_00213650;
    }
    goto skip_6;
    // 0x002134B4: sw          $s0, 0x0($s7)
    MEM_W(0X0, ctx->r23) = ctx->r16;
    skip_6:
    // 0x002134B8: blez        $s3, L_0021364C
    if (SIGNED(ctx->r19) <= 0) {
        // 0x002134BC: addu        $s1, $zero, $zero
        ctx->r17 = ADD32(0, 0);
            goto L_0021364C;
    }
    // 0x002134BC: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x002134C0: addiu       $s6, $zero, -0x1
    ctx->r22 = ADD32(0, -0X1);
    // 0x002134C4: addiu       $s5, $sp, 0x10
    ctx->r21 = ADD32(ctx->r29, 0X10);
    // 0x002134C8: sll         $v0, $s1, 2
    ctx->r2 = S32(ctx->r17 << 2);
L_002134CC:
    // 0x002134CC: addu        $v0, $sp, $v0
    ctx->r2 = ADD32(ctx->r29, ctx->r2);
    // 0x002134D0: lw          $v0, 0x110($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X110);
    // 0x002134D4: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x002134D8: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
    // 0x002134DC: jal         0x002017D4
    // 0x002134E0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_002017D4(rdram, ctx);
        goto after_1;
    // 0x002134E0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_1:
    // 0x002134E4: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x002134E8: lw          $t0, 0x4($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X4);
    // 0x002134EC: addiu       $t0, $t0, -0x1
    ctx->r8 = ADD32(ctx->r8, -0X1);
    // 0x002134F0: beq         $t0, $s6, L_0021363C
    if (ctx->r8 == ctx->r22) {
        // 0x002134F4: addiu       $t1, $v1, 0x8
        ctx->r9 = ADD32(ctx->r3, 0X8);
            goto L_0021363C;
    }
    // 0x002134F4: addiu       $t1, $v1, 0x8
    ctx->r9 = ADD32(ctx->r3, 0X8);
    // 0x002134F8: addiu       $a3, $v1, 0xC2
    ctx->r7 = ADD32(ctx->r3, 0XC2);
    // 0x002134FC: sll         $v0, $s0, 2
    ctx->r2 = S32(ctx->r16 << 2);
    // 0x00213500: addu        $t3, $v0, $s5
    ctx->r11 = ADD32(ctx->r2, ctx->r21);
    // 0x00213504: addu        $t2, $v0, $fp
    ctx->r10 = ADD32(ctx->r2, ctx->r30);
L_00213508:
    // 0x00213508: lwc1        $f1, 0xC($s2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r18, 0XC);
    // 0x0021350C: lwc1        $f0, -0x1A($a3)
    ctx->f0.u32l = MEM_W(ctx->r7, -0X1A);
    // 0x00213510: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x00213514: nop

    // 0x00213518: bc1fl       L_00213630
    if (!c1cs) {
        // 0x0021351C: addiu       $a3, $a3, 0xC0
        ctx->r7 = ADD32(ctx->r7, 0XC0);
            goto L_00213630;
    }
    goto skip_7;
    // 0x0021351C: addiu       $a3, $a3, 0xC0
    ctx->r7 = ADD32(ctx->r7, 0XC0);
    skip_7:
    // 0x00213520: lwc1        $f1, 0x0($s2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r18, 0X0);
    // 0x00213524: lwc1        $f0, -0xE($a3)
    ctx->f0.u32l = MEM_W(ctx->r7, -0XE);
    // 0x00213528: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x0021352C: nop

    // 0x00213530: bc1fl       L_00213630
    if (!c1cs) {
        // 0x00213534: addiu       $a3, $a3, 0xC0
        ctx->r7 = ADD32(ctx->r7, 0XC0);
            goto L_00213630;
    }
    goto skip_8;
    // 0x00213534: addiu       $a3, $a3, 0xC0
    ctx->r7 = ADD32(ctx->r7, 0XC0);
    skip_8:
    // 0x00213538: lwc1        $f1, 0x14($s2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r18, 0X14);
    // 0x0021353C: lwc1        $f0, -0x12($a3)
    ctx->f0.u32l = MEM_W(ctx->r7, -0X12);
    // 0x00213540: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x00213544: nop

    // 0x00213548: bc1fl       L_00213630
    if (!c1cs) {
        // 0x0021354C: addiu       $a3, $a3, 0xC0
        ctx->r7 = ADD32(ctx->r7, 0XC0);
            goto L_00213630;
    }
    goto skip_9;
    // 0x0021354C: addiu       $a3, $a3, 0xC0
    ctx->r7 = ADD32(ctx->r7, 0XC0);
    skip_9:
    // 0x00213550: lwc1        $f1, 0x8($s2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r18, 0X8);
    // 0x00213554: lwc1        $f0, -0x6($a3)
    ctx->f0.u32l = MEM_W(ctx->r7, -0X6);
    // 0x00213558: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x0021355C: nop

    // 0x00213560: bc1fl       L_00213630
    if (!c1cs) {
        // 0x00213564: addiu       $a3, $a3, 0xC0
        ctx->r7 = ADD32(ctx->r7, 0XC0);
            goto L_00213630;
    }
    goto skip_10;
    // 0x00213564: addiu       $a3, $a3, 0xC0
    ctx->r7 = ADD32(ctx->r7, 0XC0);
    skip_10:
    // 0x00213568: lwc1        $f1, 0x10($s2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r18, 0X10);
    // 0x0021356C: lwc1        $f0, -0x16($a3)
    ctx->f0.u32l = MEM_W(ctx->r7, -0X16);
    // 0x00213570: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x00213574: nop

    // 0x00213578: bc1fl       L_00213630
    if (!c1cs) {
        // 0x0021357C: addiu       $a3, $a3, 0xC0
        ctx->r7 = ADD32(ctx->r7, 0XC0);
            goto L_00213630;
    }
    goto skip_11;
    // 0x0021357C: addiu       $a3, $a3, 0xC0
    ctx->r7 = ADD32(ctx->r7, 0XC0);
    skip_11:
    // 0x00213580: lwc1        $f1, 0x4($s2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r18, 0X4);
    // 0x00213584: lwc1        $f0, -0xA($a3)
    ctx->f0.u32l = MEM_W(ctx->r7, -0XA);
    // 0x00213588: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x0021358C: nop

    // 0x00213590: bc1f        L_0021362C
    if (!c1cs) {
        // 0x00213594: addu        $a1, $zero, $zero
        ctx->r5 = ADD32(0, 0);
            goto L_0021362C;
    }
    // 0x00213594: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x00213598: addu        $v1, $a1, $zero
    ctx->r3 = ADD32(ctx->r5, 0);
    // 0x0021359C: addiu       $a0, $t1, 0x60
    ctx->r4 = ADD32(ctx->r9, 0X60);
L_002135A0:
    // 0x002135A0: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x002135A4: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x002135A8: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    // 0x002135AC: slti        $v0, $v1, 0x10
    ctx->r2 = SIGNED(ctx->r3) < 0X10 ? 1 : 0;
    // 0x002135B0: bne         $v0, $zero, L_002135A0
    if (ctx->r2 != 0) {
        // 0x002135B4: addiu       $a0, $a0, 0x4
        ctx->r4 = ADD32(ctx->r4, 0X4);
            goto L_002135A0;
    }
    // 0x002135B4: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x002135B8: beq         $s1, $zero, L_002135E8
    if (ctx->r17 == 0) {
        // 0x002135BC: addu        $a2, $zero, $zero
        ctx->r6 = ADD32(0, 0);
            goto L_002135E8;
    }
    // 0x002135BC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x002135C0: slt         $v0, $a2, $s0
    ctx->r2 = SIGNED(ctx->r6) < SIGNED(ctx->r16) ? 1 : 0;
    // 0x002135C4: beq         $v0, $zero, L_002135E8
    if (ctx->r2 == 0) {
        // 0x002135C8: addu        $v1, $a2, $zero
        ctx->r3 = ADD32(ctx->r6, 0);
            goto L_002135E8;
    }
    // 0x002135C8: addu        $v1, $a2, $zero
    ctx->r3 = ADD32(ctx->r6, 0);
    // 0x002135CC: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
L_002135D0:
    // 0x002135D0: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x002135D4: beq         $v0, $a1, L_00213624
    if (ctx->r2 == ctx->r5) {
        // 0x002135D8: addiu       $v1, $v1, 0x1
        ctx->r3 = ADD32(ctx->r3, 0X1);
            goto L_00213624;
    }
    // 0x002135D8: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x002135DC: slt         $v0, $v1, $s0
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r16) ? 1 : 0;
    // 0x002135E0: bne         $v0, $zero, L_002135D0
    if (ctx->r2 != 0) {
        // 0x002135E4: addiu       $a0, $a0, 0x4
        ctx->r4 = ADD32(ctx->r4, 0X4);
            goto L_002135D0;
    }
    // 0x002135E4: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
L_002135E8:
    // 0x002135E8: bnel        $a2, $zero, L_00213630
    if (ctx->r6 != 0) {
        // 0x002135EC: addiu       $a3, $a3, 0xC0
        ctx->r7 = ADD32(ctx->r7, 0XC0);
            goto L_00213630;
    }
    goto skip_12;
    // 0x002135EC: addiu       $a3, $a3, 0xC0
    ctx->r7 = ADD32(ctx->r7, 0XC0);
    skip_12:
    // 0x002135F0: sw          $t1, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r9;
    // 0x002135F4: sw          $a1, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r5;
    // 0x002135F8: addiu       $t3, $t3, 0x4
    ctx->r11 = ADD32(ctx->r11, 0X4);
    // 0x002135FC: addiu       $t2, $t2, 0x4
    ctx->r10 = ADD32(ctx->r10, 0X4);
    // 0x00213600: lbu         $v0, 0x0($a3)
    ctx->r2 = MEM_BU(ctx->r7, 0X0);
    // 0x00213604: beq         $v0, $zero, L_00213610
    if (ctx->r2 == 0) {
        // 0x00213608: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_00213610;
    }
    // 0x00213608: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x0021360C: addiu       $s4, $zero, 0x1
    ctx->r20 = ADD32(0, 0X1);
L_00213610:
    // 0x00213610: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x00213614: bnel        $s0, $v0, L_00213630
    if (ctx->r16 != ctx->r2) {
        // 0x00213618: addiu       $a3, $a3, 0xC0
        ctx->r7 = ADD32(ctx->r7, 0XC0);
            goto L_00213630;
    }
    goto skip_13;
    // 0x00213618: addiu       $a3, $a3, 0xC0
    ctx->r7 = ADD32(ctx->r7, 0XC0);
    skip_13:
    // 0x0021361C: j           L_00213650
    // 0x00213620: sw          $s0, 0x0($s7)
    MEM_W(0X0, ctx->r23) = ctx->r16;
        goto L_00213650;
    // 0x00213620: sw          $s0, 0x0($s7)
    MEM_W(0X0, ctx->r23) = ctx->r16;
L_00213624:
    // 0x00213624: j           L_002135E8
    // 0x00213628: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
        goto L_002135E8;
    // 0x00213628: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
L_0021362C:
    // 0x0021362C: addiu       $a3, $a3, 0xC0
    ctx->r7 = ADD32(ctx->r7, 0XC0);
L_00213630:
    // 0x00213630: addiu       $t0, $t0, -0x1
    ctx->r8 = ADD32(ctx->r8, -0X1);
    // 0x00213634: bne         $t0, $s6, L_00213508
    if (ctx->r8 != ctx->r22) {
        // 0x00213638: addiu       $t1, $t1, 0xC0
        ctx->r9 = ADD32(ctx->r9, 0XC0);
            goto L_00213508;
    }
    // 0x00213638: addiu       $t1, $t1, 0xC0
    ctx->r9 = ADD32(ctx->r9, 0XC0);
L_0021363C:
    // 0x0021363C: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x00213640: slt         $v0, $s1, $s3
    ctx->r2 = SIGNED(ctx->r17) < SIGNED(ctx->r19) ? 1 : 0;
    // 0x00213644: bne         $v0, $zero, L_002134CC
    if (ctx->r2 != 0) {
        // 0x00213648: sll         $v0, $s1, 2
        ctx->r2 = S32(ctx->r17 << 2);
            goto L_002134CC;
    }
    // 0x00213648: sll         $v0, $s1, 2
    ctx->r2 = S32(ctx->r17 << 2);
L_0021364C:
    // 0x0021364C: sw          $s0, 0x0($s7)
    MEM_W(0X0, ctx->r23) = ctx->r16;
L_00213650:
    // 0x00213650: addu        $v0, $s4, $zero
    ctx->r2 = ADD32(ctx->r20, 0);
    // 0x00213654: lw          $ra, 0x334($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X334);
    // 0x00213658: lw          $fp, 0x330($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X330);
    // 0x0021365C: lw          $s7, 0x32C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X32C);
    // 0x00213660: lw          $s6, 0x328($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X328);
    // 0x00213664: lw          $s5, 0x324($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X324);
    // 0x00213668: lw          $s4, 0x320($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X320);
    // 0x0021366C: lw          $s3, 0x31C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X31C);
    // 0x00213670: lw          $s2, 0x318($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X318);
    // 0x00213674: lw          $s1, 0x314($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X314);
    // 0x00213678: lw          $s0, 0x310($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X310);
    // 0x0021367C: jr          $ra
    // 0x00213680: addiu       $sp, $sp, 0x338
    ctx->r29 = ADD32(ctx->r29, 0X338);
    return;
    // 0x00213680: addiu       $sp, $sp, 0x338
    ctx->r29 = ADD32(ctx->r29, 0X338);
;}
RECOMP_FUNC void func_00442784(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_004098D0:
    // 0x00442784: addiu       $sp, $sp, -0xA0
    ctx->r29 = ADD32(ctx->r29, -0XA0);
    // 0x00442788: sw          $s2, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r18;
    // 0x0044278C: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x00442790: sw          $s3, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r19;
    // 0x00442794: addu        $s3, $zero, $zero
    ctx->r19 = ADD32(0, 0);
    // 0x00442798: sw          $s7, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r23;
    // 0x0044279C: addu        $s7, $s3, $zero
    ctx->r23 = ADD32(ctx->r19, 0);
    // 0x004427A0: sw          $s4, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r20;
    // 0x004427A4: addu        $s4, $s3, $zero
    ctx->r20 = ADD32(ctx->r19, 0);
    // 0x004427A8: sw          $s6, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r22;
    // 0x004427AC: addu        $s6, $s3, $zero
    ctx->r22 = ADD32(ctx->r19, 0);
    // 0x004427B0: sw          $s5, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r21;
    // 0x004427B4: addu        $s5, $s3, $zero
    ctx->r21 = ADD32(ctx->r19, 0);
    // 0x004427B8: sw          $s1, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r17;
    // 0x004427BC: addu        $s1, $s3, $zero
    ctx->r17 = ADD32(ctx->r19, 0);
    // 0x004427C0: sw          $s0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r16;
    // 0x004427C4: addiu       $s0, $zero, 0x18
    ctx->r16 = ADD32(0, 0X18);
    // 0x004427C8: sw          $ra, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r31;
    // 0x004427CC: sdc1        $f21, 0x98($sp)
    CHECK_FR(ctx, 21);
    SD(ctx->f21.u64, 0X98, ctx->r29);
    // 0x004427D0: sdc1        $f20, 0x90($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X90, ctx->r29);
L_004427D4:
    // 0x004427D4: addu        $a0, $s2, $s0
    ctx->r4 = ADD32(ctx->r18, ctx->r16);
    // 0x004427D8: jal         0x00235510
    // 0x004427DC: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    func_00235510(rdram, ctx);
        goto after_0;
    // 0x004427DC: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    after_0:
    // 0x004427E0: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x004427E4: slti        $v0, $s1, 0xF
    ctx->r2 = SIGNED(ctx->r17) < 0XF ? 1 : 0;
    // 0x004427E8: bne         $v0, $zero, L_004427D4
    if (ctx->r2 != 0) {
        // 0x004427EC: addiu       $s0, $s0, 0x68
        ctx->r16 = ADD32(ctx->r16, 0X68);
            goto L_004427D4;
    }
    // 0x004427EC: addiu       $s0, $s0, 0x68
    ctx->r16 = ADD32(ctx->r16, 0X68);
    // 0x004427F0: jal         0x00284188
    // 0x004427F4: nop

    func_00284188(rdram, ctx);
        goto after_1;
    // 0x004427F4: nop

    after_1:
    // 0x004427F8: bne         $v0, $zero, L_00442A30
    if (ctx->r2 != 0) {
        // 0x004427FC: nop
    
            goto L_00442A30;
    }
    // 0x004427FC: nop

    // 0x00442800: lw          $v0, 0x680($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X680);
    // 0x00442804: lw          $v1, 0x684($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X684);
    // 0x00442808: lw          $a0, 0x65C($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X65C);
    // 0x0044280C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x00442810: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x00442814: sw          $v0, 0x680($s2)
    MEM_W(0X680, ctx->r18) = ctx->r2;
    // 0x00442818: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0044281C: beq         $a0, $v0, L_00442850
    if (ctx->r4 == ctx->r2) {
        // 0x00442820: sw          $v1, 0x684($s2)
        MEM_W(0X684, ctx->r18) = ctx->r3;
            goto L_00442850;
    }
    // 0x00442820: sw          $v1, 0x684($s2)
    MEM_W(0X684, ctx->r18) = ctx->r3;
    // 0x00442824: slti        $v0, $a0, 0x2
    ctx->r2 = SIGNED(ctx->r4) < 0X2 ? 1 : 0;
    // 0x00442828: beq         $v0, $zero, L_00442840
    if (ctx->r2 == 0) {
        // 0x0044282C: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_00442840;
    }
    // 0x0044282C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x00442830: beq         $a0, $zero, L_004428B8
    if (ctx->r4 == 0) {
        // 0x00442834: nop
    
            goto L_004428B8;
    }
    // 0x00442834: nop

    // 0x00442838: j           L_004098D0
    // 0x0044283C: nop

    entry_004098D0(rdram, ctx);
    return;
    // 0x0044283C: nop

L_00442840:
    // 0x00442840: beq         $a0, $v0, L_00442884
    if (ctx->r4 == ctx->r2) {
        // 0x00442844: nop
    
            goto L_00442884;
    }
    // 0x00442844: nop

    // 0x00442848: j           L_004098D0
    // 0x0044284C: nop

    entry_004098D0(rdram, ctx);
    return;
    // 0x0044284C: nop

L_00442850:
    // 0x00442850: lw          $v0, 0x680($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X680);
    // 0x00442854: slti        $v0, $v0, 0x4C
    ctx->r2 = SIGNED(ctx->r2) < 0X4C ? 1 : 0;
    // 0x00442858: bne         $v0, $zero, L_00442868
    if (ctx->r2 != 0) {
        // 0x0044285C: slti        $v0, $v1, 0x20E
        ctx->r2 = SIGNED(ctx->r3) < 0X20E ? 1 : 0;
            goto L_00442868;
    }
    // 0x0044285C: slti        $v0, $v1, 0x20E
    ctx->r2 = SIGNED(ctx->r3) < 0X20E ? 1 : 0;
    // 0x00442860: addiu       $s3, $zero, 0x1
    ctx->r19 = ADD32(0, 0X1);
    // 0x00442864: addiu       $s4, $zero, 0x258
    ctx->r20 = ADD32(0, 0X258);
L_00442868:
    // 0x00442868: bne         $v0, $zero, L_004428D0
    if (ctx->r2 != 0) {
        // 0x0044286C: nop
    
            goto L_004428D0;
    }
    // 0x0044286C: nop

    // 0x00442870: addiu       $s7, $zero, 0x1
    ctx->r23 = ADD32(0, 0X1);
    // 0x00442874: lui         $s5, 0x43
    ctx->r21 = S32(0X43 << 16);
    // 0x00442878: addiu       $s5, $s5, 0x1CE4
    ctx->r21 = ADD32(ctx->r21, 0X1CE4);
    // 0x0044287C: j           L_004098D0
    // 0x00442880: addiu       $s6, $zero, 0x14A
    ctx->r22 = ADD32(0, 0X14A);
    entry_004098D0(rdram, ctx);
    return;
    // 0x00442880: addiu       $s6, $zero, 0x14A
    ctx->r22 = ADD32(0, 0X14A);
L_00442884:
    // 0x00442884: lw          $v0, 0x680($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X680);
    // 0x00442888: slti        $v0, $v0, 0x97
    ctx->r2 = SIGNED(ctx->r2) < 0X97 ? 1 : 0;
    // 0x0044288C: bne         $v0, $zero, L_0044289C
    if (ctx->r2 != 0) {
        // 0x00442890: slti        $v0, $v1, 0x20E
        ctx->r2 = SIGNED(ctx->r3) < 0X20E ? 1 : 0;
            goto L_0044289C;
    }
    // 0x00442890: slti        $v0, $v1, 0x20E
    ctx->r2 = SIGNED(ctx->r3) < 0X20E ? 1 : 0;
    // 0x00442894: addiu       $s3, $zero, 0x1
    ctx->r19 = ADD32(0, 0X1);
    // 0x00442898: addiu       $s4, $zero, 0x1C2
    ctx->r20 = ADD32(0, 0X1C2);
L_0044289C:
    // 0x0044289C: bne         $v0, $zero, L_004428D0
    if (ctx->r2 != 0) {
        // 0x004428A0: nop
    
            goto L_004428D0;
    }
    // 0x004428A0: nop

    // 0x004428A4: addiu       $s7, $zero, 0x1
    ctx->r23 = ADD32(0, 0X1);
    // 0x004428A8: lui         $s5, 0x43
    ctx->r21 = S32(0X43 << 16);
    // 0x004428AC: addiu       $s5, $s5, 0x1CF0
    ctx->r21 = ADD32(ctx->r21, 0X1CF0);
    // 0x004428B0: j           L_004098D0
    // 0x004428B4: addiu       $s6, $zero, 0x14A
    ctx->r22 = ADD32(0, 0X14A);
    entry_004098D0(rdram, ctx);
    return;
    // 0x004428B4: addiu       $s6, $zero, 0x14A
    ctx->r22 = ADD32(0, 0X14A);
L_004428B8:
    // 0x004428B8: lw          $v0, 0x680($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X680);
    // 0x004428BC: slti        $v0, $v0, 0x97
    ctx->r2 = SIGNED(ctx->r2) < 0X97 ? 1 : 0;
    // 0x004428C0: bne         $v0, $zero, L_004428D0
    if (ctx->r2 != 0) {
        // 0x004428C4: nop
    
            goto L_004428D0;
    }
    // 0x004428C4: nop

    // 0x004428C8: addiu       $s3, $zero, 0x1
    ctx->r19 = ADD32(0, 0X1);
    // 0x004428CC: addiu       $s4, $zero, 0x1C2
    ctx->r20 = ADD32(0, 0X1C2);
L_004428D0:
    // 0x004428D0: jal         0x00284188
    // 0x004428D4: nop

    func_00284188(rdram, ctx);
        goto after_2;
    // 0x004428D4: nop

    after_2:
    // 0x004428D8: bne         $v0, $zero, L_00442A30
    if (ctx->r2 != 0) {
        // 0x004428DC: nop
    
            goto L_00442A30;
    }
    // 0x004428DC: nop

    // 0x004428E0: beq         $s3, $zero, L_00442A14
    if (ctx->r19 == 0) {
        // 0x004428E4: nop
    
            goto L_00442A14;
    }
    // 0x004428E4: nop

    // 0x004428E8: lui         $a0, 0x43
    ctx->r4 = S32(0X43 << 16);
    // 0x004428EC: addiu       $a0, $a0, 0x1CB4
    ctx->r4 = ADD32(ctx->r4, 0X1CB4);
    // 0x004428F0: jal         0x0026D518
    // 0x004428F4: sw          $zero, 0x680($s2)
    MEM_W(0X680, ctx->r18) = 0;
    func_0026D518(rdram, ctx);
        goto after_3;
    // 0x004428F4: sw          $zero, 0x680($s2)
    MEM_W(0X680, ctx->r18) = 0;
    after_3:
    // 0x004428F8: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x004428FC: lwc1        $f12, 0x1F8($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X1F8);
    // 0x00442900: cvt.s.w     $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    ctx->f12.fl = CVT_S_W(ctx->f12.u32l);
    // 0x00442904: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x00442908: lwc1        $f14, 0x1FC($at)
    ctx->f14.u32l = MEM_W(ctx->r1, 0X1FC);
    // 0x0044290C: cvt.s.w     $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    ctx->f14.fl = CVT_S_W(ctx->f14.u32l);
    // 0x00442910: sll         $s0, $v0, 16
    ctx->r16 = S32(ctx->r2 << 16);
    // 0x00442914: jal         0x002119FC
    // 0x00442918: sra         $s0, $s0, 16
    ctx->r16 = S32(SIGNED(ctx->r16) >> 16);
    func_002119FC(rdram, ctx);
        goto after_4;
    // 0x00442918: sra         $s0, $s0, 16
    ctx->r16 = S32(SIGNED(ctx->r16) >> 16);
    after_4:
    // 0x0044291C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00442920: lwc1        $f12, 0x5EC($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X5EC);
    // 0x00442924: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00442928: lwc1        $f14, 0x5F0($at)
    ctx->f14.u32l = MEM_W(ctx->r1, 0X5F0);
    // 0x0044292C: jal         0x002119FC
    // 0x00442930: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    func_002119FC(rdram, ctx);
        goto after_5;
    // 0x00442930: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    after_5:
    // 0x00442934: mov.s       $f21, $f0
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 0);
    ctx->f21.fl = ctx->f0.fl;
    // 0x00442938: jal         0x002982F0
    // 0x0044293C: mov.s       $f12, $f21
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 21);
    ctx->f12.fl = ctx->f21.fl;
    func_002982F0(rdram, ctx);
        goto after_6;
    // 0x0044293C: mov.s       $f12, $f21
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 21);
    ctx->f12.fl = ctx->f21.fl;
    after_6:
    // 0x00442940: mul.s       $f0, $f20, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f20.fl, ctx->f0.fl);
    // 0x00442944: mov.s       $f12, $f21
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 21);
    ctx->f12.fl = ctx->f21.fl;
    // 0x00442948: jal         0x002974C0
    // 0x0044294C: swc1        $f0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f0.u32l;
    func_002974C0(rdram, ctx);
        goto after_7;
    // 0x0044294C: swc1        $f0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f0.u32l;
    after_7:
    // 0x00442950: mul.s       $f20, $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = MUL_S(ctx->f20.fl, ctx->f0.fl);
    // 0x00442954: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x00442958: addiu       $a0, $a0, 0x7078
    ctx->r4 = ADD32(ctx->r4, 0X7078);
    // 0x0044295C: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x00442960: swc1        $f20, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f20.u32l;
    // 0x00442964: lw          $t0, 0x30($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X30);
    // 0x00442968: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x0044296C: lw          $t2, 0x38($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X38);
    // 0x00442970: sw          $t0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r8;
    // 0x00442974: sw          $t1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r9;
    // 0x00442978: sw          $t2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r10;
    // 0x0044297C: jal         0x00220A1C
    // 0x00442980: addiu       $a1, $sp, 0x48
    ctx->r5 = ADD32(ctx->r29, 0X48);
    func_00220A1C(rdram, ctx);
        goto after_8;
    // 0x00442980: addiu       $a1, $sp, 0x48
    ctx->r5 = ADD32(ctx->r29, 0X48);
    after_8:
    // 0x00442984: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x00442988: addiu       $a0, $a0, 0x7590
    ctx->r4 = ADD32(ctx->r4, 0X7590);
    // 0x0044298C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x00442990: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00442994: lwc1        $f0, 0x5F4($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X5F4);
    // 0x00442998: addiu       $v1, $sp, 0x58
    ctx->r3 = ADD32(ctx->r29, 0X58);
    // 0x0044299C: sw          $zero, 0x58($sp)
    MEM_W(0X58, ctx->r29) = 0;
    // 0x004429A0: swc1        $f0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->f0.u32l;
    // 0x004429A4: mtc1        $s4, $f0
    ctx->f0.u32l = ctx->r20;
    // 0x004429A8: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x004429AC: sw          $zero, 0x60($sp)
    MEM_W(0X60, ctx->r29) = 0;
    // 0x004429B0: lw          $t0, 0x48($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X48);
    // 0x004429B4: lw          $t1, 0x4C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X4C);
    // 0x004429B8: lw          $t2, 0x50($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X50);
    // 0x004429BC: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x004429C0: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    // 0x004429C4: sw          $t2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r10;
    // 0x004429C8: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x004429CC: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x004429D0: lw          $t0, 0x5C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X5C);
    // 0x004429D4: lw          $t1, 0x60($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X60);
    // 0x004429D8: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x004429DC: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x004429E0: lw          $a3, 0x58($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X58);
    // 0x004429E4: jal         0x00227240
    // 0x004429E8: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    func_00227240(rdram, ctx);
        goto after_9;
    // 0x004429E8: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    after_9:
    // 0x004429EC: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x004429F0: beq         $a0, $zero, L_00442A14
    if (ctx->r4 == 0) {
        // 0x004429F4: nop
    
            goto L_00442A14;
    }
    // 0x004429F4: nop

    // 0x004429F8: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x004429FC: lw          $v0, 0x50($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X50);
    // 0x00442A00: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x00442A04: lw          $a2, 0x48($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X48);
    // 0x00442A08: lw          $a3, 0x4C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X4C);
    // 0x00442A0C: jal         0x00246690
    // 0x00442A10: addiu       $a1, $zero, 0x11D
    ctx->r5 = ADD32(0, 0X11D);
    func_00246690(rdram, ctx);
        goto after_10;
    // 0x00442A10: addiu       $a1, $zero, 0x11D
    ctx->r5 = ADD32(0, 0X11D);
    after_10:
L_00442A14:
    // 0x00442A14: beq         $s5, $zero, L_00442A30
    if (ctx->r21 == 0) {
        // 0x00442A18: nop
    
            goto L_00442A30;
    }
    // 0x00442A18: nop

    // 0x00442A1C: beq         $s7, $zero, L_00442A30
    if (ctx->r23 == 0) {
        // 0x00442A20: addu        $a0, $s6, $zero
        ctx->r4 = ADD32(ctx->r22, 0);
            goto L_00442A30;
    }
    // 0x00442A20: addu        $a0, $s6, $zero
    ctx->r4 = ADD32(ctx->r22, 0);
    // 0x00442A24: sw          $zero, 0x684($s2)
    MEM_W(0X684, ctx->r18) = 0;
    // 0x00442A28: jal         0x00409500
    // 0x00442A2C: addu        $a1, $s5, $zero
    ctx->r5 = ADD32(ctx->r21, 0);
    func_00409500(rdram, ctx);
        goto after_11;
    // 0x00442A2C: addu        $a1, $s5, $zero
    ctx->r5 = ADD32(ctx->r21, 0);
    after_11:
L_00442A30:
    // 0x00442A30: lw          $ra, 0x88($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X88);
    // 0x00442A34: lw          $s7, 0x84($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X84);
    // 0x00442A38: lw          $s6, 0x80($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X80);
    // 0x00442A3C: lw          $s5, 0x7C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X7C);
    // 0x00442A40: lw          $s4, 0x78($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X78);
    // 0x00442A44: lw          $s3, 0x74($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X74);
    // 0x00442A48: lw          $s2, 0x70($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X70);
    // 0x00442A4C: lw          $s1, 0x6C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X6C);
    // 0x00442A50: lw          $s0, 0x68($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X68);
    // 0x00442A54: ldc1        $f21, 0x98($sp)
    CHECK_FR(ctx, 21);
    ctx->f21.u64 = LD(ctx->r29, 0X98);
    // 0x00442A58: ldc1        $f20, 0x90($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X90);
    // 0x00442A5C: jr          $ra
    // 0x00442A60: addiu       $sp, $sp, 0xA0
    ctx->r29 = ADD32(ctx->r29, 0XA0);
    return;
    // 0x00442A60: addiu       $sp, $sp, 0xA0
    ctx->r29 = ADD32(ctx->r29, 0XA0);
;}
RECOMP_FUNC void func_00232B84(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00232B84: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00232B88: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x00232B8C: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x00232B90: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x00232B94: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00232B98: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00232B9C: lui         $at, 0x1
    ctx->r1 = S32(0X1 << 16);
    // 0x00232BA0: addu        $at, $s2, $at
    ctx->r1 = ADD32(ctx->r18, ctx->r1);
    // 0x00232BA4: lw          $v0, -0x1400($at)
    ctx->r2 = MEM_W(ctx->r1, -0X1400);
    // 0x00232BA8: bne         $v0, $zero, L_00232BEC
    if (ctx->r2 != 0) {
        // 0x00232BAC: addu        $s0, $a1, $zero
        ctx->r16 = ADD32(ctx->r5, 0);
            goto L_00232BEC;
    }
    // 0x00232BAC: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x00232BB0: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x00232BB4: andi        $v1, $s0, 0xFF
    ctx->r3 = ctx->r16 & 0XFF;
    // 0x00232BB8: slt         $v0, $v1, $a0
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x00232BBC: bne         $v0, $zero, L_00232BEC
    if (ctx->r2 != 0) {
        // 0x00232BC0: nop
    
            goto L_00232BEC;
    }
    // 0x00232BC0: nop

    // 0x00232BC4: ori         $a3, $zero, 0xEC28
    ctx->r7 = 0 | 0XEC28;
    // 0x00232BC8: addu        $a2, $v1, $zero
    ctx->r6 = ADD32(ctx->r3, 0);
    // 0x00232BCC: addu        $v1, $s2, $zero
    ctx->r3 = ADD32(ctx->r18, 0);
L_00232BD0:
    // 0x00232BD0: addu        $v0, $v1, $a3
    ctx->r2 = ADD32(ctx->r3, ctx->r7);
    // 0x00232BD4: lw          $a1, 0x4($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X4);
    // 0x00232BD8: bne         $a1, $zero, L_00232C50
    if (ctx->r5 != 0) {
        // 0x00232BDC: addiu       $a0, $a0, 0x1
        ctx->r4 = ADD32(ctx->r4, 0X1);
            goto L_00232C50;
    }
    // 0x00232BDC: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x00232BE0: slt         $v0, $a2, $a0
    ctx->r2 = SIGNED(ctx->r6) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x00232BE4: beq         $v0, $zero, L_00232BD0
    if (ctx->r2 == 0) {
        // 0x00232BE8: addiu       $v1, $v1, 0x14
        ctx->r3 = ADD32(ctx->r3, 0X14);
            goto L_00232BD0;
    }
    // 0x00232BE8: addiu       $v1, $v1, 0x14
    ctx->r3 = ADD32(ctx->r3, 0X14);
L_00232BEC:
    // 0x00232BEC: lui         $at, 0x1
    ctx->r1 = S32(0X1 << 16);
    // 0x00232BF0: addu        $at, $s2, $at
    ctx->r1 = ADD32(ctx->r18, ctx->r1);
    // 0x00232BF4: lw          $s1, -0x1400($at)
    ctx->r17 = MEM_W(ctx->r1, -0X1400);
    // 0x00232BF8: beq         $s1, $zero, L_00232C60
    if (ctx->r17 == 0) {
        // 0x00232BFC: ori         $a0, $zero, 0xEC00
        ctx->r4 = 0 | 0XEC00;
            goto L_00232C60;
    }
    // 0x00232BFC: ori         $a0, $zero, 0xEC00
    ctx->r4 = 0 | 0XEC00;
    // 0x00232C00: addu        $a0, $s2, $a0
    ctx->r4 = ADD32(ctx->r18, ctx->r4);
    // 0x00232C04: jal         0x00200738
    // 0x00232C08: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_00200738(rdram, ctx);
        goto after_0;
    // 0x00232C08: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_0:
    // 0x00232C0C: andi        $v0, $s0, 0xFF
    ctx->r2 = ctx->r16 & 0XFF;
    // 0x00232C10: sll         $s0, $v0, 2
    ctx->r16 = S32(ctx->r2 << 2);
    // 0x00232C14: addu        $s0, $s0, $v0
    ctx->r16 = ADD32(ctx->r16, ctx->r2);
    // 0x00232C18: sll         $s0, $s0, 2
    ctx->r16 = S32(ctx->r16 << 2);
    // 0x00232C1C: ori         $v0, $zero, 0xEC28
    ctx->r2 = 0 | 0XEC28;
    // 0x00232C20: addu        $s0, $s0, $v0
    ctx->r16 = ADD32(ctx->r16, ctx->r2);
    // 0x00232C24: addu        $s0, $s2, $s0
    ctx->r16 = ADD32(ctx->r18, ctx->r16);
    // 0x00232C28: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00232C2C: jal         0x00200518
    // 0x00232C30: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_00200518(rdram, ctx);
        goto after_1;
    // 0x00232C30: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_1:
    // 0x00232C34: addu        $v0, $s1, $zero
    ctx->r2 = ADD32(ctx->r17, 0);
    // 0x00232C38: addiu       $v1, $zero, 0x100
    ctx->r3 = ADD32(0, 0X100);
    // 0x00232C3C: sw          $s0, 0x1C0($v0)
    MEM_W(0X1C0, ctx->r2) = ctx->r16;
    // 0x00232C40: sw          $zero, 0x1D0($v0)
    MEM_W(0X1D0, ctx->r2) = 0;
    // 0x00232C44: sw          $zero, 0x1CC($v0)
    MEM_W(0X1CC, ctx->r2) = 0;
    // 0x00232C48: j           L_00232C64
    // 0x00232C4C: sw          $v1, 0x40($v0)
    MEM_W(0X40, ctx->r2) = ctx->r3;
        goto L_00232C64;
    // 0x00232C4C: sw          $v1, 0x40($v0)
    MEM_W(0X40, ctx->r2) = ctx->r3;
L_00232C50:
    // 0x00232C50: jal         0x0022F1C8
    // 0x00232C54: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_0022F1C8(rdram, ctx);
        goto after_2;
    // 0x00232C54: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_2:
    // 0x00232C58: j           L_00232BEC
    // 0x00232C5C: nop

        goto L_00232BEC;
    // 0x00232C5C: nop

L_00232C60:
    // 0x00232C60: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_00232C64:
    // 0x00232C64: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x00232C68: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x00232C6C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00232C70: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00232C74: jr          $ra
    // 0x00232C78: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00232C78: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_00446DB4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00446DB4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00446DB8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00446DBC: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x00446DC0: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x00446DC4: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00446DC8: lw          $v1, 0x4($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X4);
    // 0x00446DCC: beq         $v1, $zero, L_00446E54
    if (ctx->r3 == 0) {
        // 0x00446DD0: addu        $s1, $a0, $zero
        ctx->r17 = ADD32(ctx->r4, 0);
            goto L_00446E54;
    }
    // 0x00446DD0: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x00446DD4: lw          $v0, 0x4($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X4);
    // 0x00446DD8: subu        $v0, $v1, $v0
    ctx->r2 = SUB32(ctx->r3, ctx->r2);
    // 0x00446DDC: bltzl       $v0, L_00446DE4
    if (SIGNED(ctx->r2) < 0) {
        // 0x00446DE0: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_00446DE4;
    }
    goto skip_0;
    // 0x00446DE0: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    skip_0:
L_00446DE4:
    // 0x00446DE4: lwc1        $f1, 0x118($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X118);
    // 0x00446DE8: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x00446DEC: c.eq.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl == ctx->f0.fl;
    // 0x00446DF0: nop

    // 0x00446DF4: bc1f        L_00446E3C
    if (!c1cs) {
        // 0x00446DF8: sw          $v0, 0x4($s0)
        MEM_W(0X4, ctx->r16) = ctx->r2;
            goto L_00446E3C;
    }
    // 0x00446DF8: sw          $v0, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r2;
    // 0x00446DFC: lui         $a1, 0x43
    ctx->r5 = S32(0X43 << 16);
    // 0x00446E00: addiu       $a1, $a1, 0x2384
    ctx->r5 = ADD32(ctx->r5, 0X2384);
    // 0x00446E04: lw          $v0, 0x114($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X114);
    // 0x00446E08: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00446E0C: lwc1        $f0, 0x908($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X908);
    // 0x00446E10: sll         $a0, $v0, 1
    ctx->r4 = S32(ctx->r2 << 1);
    // 0x00446E14: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x00446E18: sll         $a0, $a0, 3
    ctx->r4 = S32(ctx->r4 << 3);
    // 0x00446E1C: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x00446E20: sll         $a0, $a0, 2
    ctx->r4 = S32(ctx->r4 << 2);
    // 0x00446E24: addiu       $a0, $a0, 0x3C
    ctx->r4 = ADD32(ctx->r4, 0X3C);
    // 0x00446E28: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x00446E2C: addiu       $v0, $v0, 0x200
    ctx->r2 = ADD32(ctx->r2, 0X200);
    // 0x00446E30: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x00446E34: jal         0x00236314
    // 0x00446E38: swc1        $f0, 0x118($s0)
    MEM_W(0X118, ctx->r16) = ctx->f0.u32l;
    func_00236314(rdram, ctx);
        goto after_0;
    // 0x00446E38: swc1        $f0, 0x118($s0)
    MEM_W(0X118, ctx->r16) = ctx->f0.u32l;
    after_0:
L_00446E3C:
    // 0x00446E3C: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // 0x00446E40: bne         $v0, $zero, L_00446E54
    if (ctx->r2 != 0) {
        // 0x00446E44: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_00446E54;
    }
    // 0x00446E44: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x00446E48: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x00446E4C: jal         0x00243414
    // 0x00446E50: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    func_00243414(rdram, ctx);
        goto after_1;
    // 0x00446E50: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    after_1:
L_00446E54:
    // 0x00446E54: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x00446E58: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00446E5C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00446E60: jr          $ra
    // 0x00446E64: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00446E64: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_0023F3E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0023F3E4: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x0023F3E8: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x0023F3EC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x0023F3F0: addu        $a3, $a1, $zero
    ctx->r7 = ADD32(ctx->r5, 0);
    // 0x0023F3F4: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x0023F3F8: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x0023F3FC: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x0023F400: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x0023F404: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x0023F408: lw          $v0, 0x10($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X10);
    // 0x0023F40C: lw          $a0, 0x524($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X524);
    // 0x0023F410: sll         $v1, $v0, 8
    ctx->r3 = S32(ctx->r2 << 8);
    // 0x0023F414: slt         $v0, $a0, $v1
    ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x0023F418: beq         $v0, $zero, L_0023F474
    if (ctx->r2 == 0) {
        // 0x0023F41C: addu        $s2, $zero, $zero
        ctx->r18 = ADD32(0, 0);
            goto L_0023F474;
    }
    // 0x0023F41C: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    // 0x0023F420: lw          $v0, 0xC($a3)
    ctx->r2 = MEM_W(ctx->r7, 0XC);
    // 0x0023F424: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x0023F428: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x0023F42C: sw          $a0, 0x524($s0)
    MEM_W(0X524, ctx->r16) = ctx->r4;
    // 0x0023F430: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x0023F434: lbu         $v0, -0x550F($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X550F);
    // 0x0023F438: beq         $v0, $zero, L_0023F468
    if (ctx->r2 == 0) {
        // 0x0023F43C: slt         $v0, $v1, $a0
        ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r4) ? 1 : 0;
            goto L_0023F468;
    }
    // 0x0023F43C: slt         $v0, $v1, $a0
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x0023F440: lw          $v0, 0x14($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X14);
    // 0x0023F444: lw          $v0, 0x18($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X18);
    // 0x0023F448: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x0023F44C: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x0023F450: sltu        $v0, $a0, $v1
    ctx->r2 = ctx->r4 < ctx->r3 ? 1 : 0;
    // 0x0023F454: bnel        $v0, $zero, L_0023F45C
    if (ctx->r2 != 0) {
        // 0x0023F458: addu        $v1, $a0, $zero
        ctx->r3 = ADD32(ctx->r4, 0);
            goto L_0023F45C;
    }
    goto skip_0;
    // 0x0023F458: addu        $v1, $a0, $zero
    ctx->r3 = ADD32(ctx->r4, 0);
    skip_0:
L_0023F45C:
    // 0x0023F45C: sw          $v1, 0x524($s0)
    MEM_W(0X524, ctx->r16) = ctx->r3;
    // 0x0023F460: j           L_0023F470
    // 0x0023F464: sw          $v1, 0x144($s0)
    MEM_W(0X144, ctx->r16) = ctx->r3;
        goto L_0023F470;
    // 0x0023F464: sw          $v1, 0x144($s0)
    MEM_W(0X144, ctx->r16) = ctx->r3;
L_0023F468:
    // 0x0023F468: bnel        $v0, $zero, L_0023F470
    if (ctx->r2 != 0) {
        // 0x0023F46C: sw          $v1, 0x524($s0)
        MEM_W(0X524, ctx->r16) = ctx->r3;
            goto L_0023F470;
    }
    goto skip_1;
    // 0x0023F46C: sw          $v1, 0x524($s0)
    MEM_W(0X524, ctx->r16) = ctx->r3;
    skip_1:
L_0023F470:
    // 0x0023F470: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
L_0023F474:
    // 0x0023F474: beq         $s2, $zero, L_0023F500
    if (ctx->r18 == 0) {
        // 0x0023F478: addiu       $a1, $zero, 0x80
        ctx->r5 = ADD32(0, 0X80);
            goto L_0023F500;
    }
    // 0x0023F478: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    // 0x0023F47C: addiu       $a2, $zero, 0x32
    ctx->r6 = ADD32(0, 0X32);
    // 0x0023F480: lh          $s3, 0x6($a3)
    ctx->r19 = MEM_H(ctx->r7, 0X6);
    // 0x0023F484: lh          $s4, 0x8($a3)
    ctx->r20 = MEM_H(ctx->r7, 0X8);
    // 0x0023F488: lw          $s1, 0x0($a3)
    ctx->r17 = MEM_W(ctx->r7, 0X0);
    // 0x0023F48C: addiu       $v0, $zero, 0x4B
    ctx->r2 = ADD32(0, 0X4B);
    // 0x0023F490: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x0023F494: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x0023F498: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x0023F49C: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x0023F4A0: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x0023F4A4: lw          $a0, 0x51C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X51C);
    // 0x0023F4A8: jal         0x00281060
    // 0x0023F4AC: addu        $a3, $a2, $zero
    ctx->r7 = ADD32(ctx->r6, 0);
    func_00281060(rdram, ctx);
        goto after_0;
    // 0x0023F4AC: addu        $a3, $a2, $zero
    ctx->r7 = ADD32(ctx->r6, 0);
    after_0:
    // 0x0023F4B0: beq         $s1, $zero, L_0023F4CC
    if (ctx->r17 == 0) {
        // 0x0023F4B4: nop
    
            goto L_0023F4CC;
    }
    // 0x0023F4B4: nop

    // 0x0023F4B8: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x0023F4BC: addiu       $a0, $a0, -0x6750
    ctx->r4 = ADD32(ctx->r4, -0X6750);
    // 0x0023F4C0: lw          $a1, 0x51C($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X51C);
    // 0x0023F4C4: jal         0x0027FC2C
    // 0x0023F4C8: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    func_0027FC2C(rdram, ctx);
        goto after_1;
    // 0x0023F4C8: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    after_1:
L_0023F4CC:
    // 0x0023F4CC: beq         $s3, $zero, L_0023F4F0
    if (ctx->r19 == 0) {
        // 0x0023F4D0: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_0023F4F0;
    }
    // 0x0023F4D0: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x0023F4D4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x0023F4D8: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x0023F4DC: lw          $a1, 0x4($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X4);
    // 0x0023F4E0: lw          $a2, 0x8($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X8);
    // 0x0023F4E4: lw          $a3, 0xC($s0)
    ctx->r7 = MEM_W(ctx->r16, 0XC);
    // 0x0023F4E8: jal         0x00275544
    // 0x0023F4EC: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    func_00275544(rdram, ctx);
        goto after_2;
    // 0x0023F4EC: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    after_2:
L_0023F4F0:
    // 0x0023F4F0: beq         $s4, $zero, L_0023F504
    if (ctx->r20 == 0) {
        // 0x0023F4F4: addu        $v0, $s2, $zero
        ctx->r2 = ADD32(ctx->r18, 0);
            goto L_0023F504;
    }
    // 0x0023F4F4: addu        $v0, $s2, $zero
    ctx->r2 = ADD32(ctx->r18, 0);
    // 0x0023F4F8: jal         0x0027580C
    // 0x0023F4FC: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    func_0027580C(rdram, ctx);
        goto after_3;
    // 0x0023F4FC: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    after_3:
L_0023F500:
    // 0x0023F500: addu        $v0, $s2, $zero
    ctx->r2 = ADD32(ctx->r18, 0);
L_0023F504:
    // 0x0023F504: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x0023F508: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x0023F50C: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x0023F510: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x0023F514: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x0023F518: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x0023F51C: jr          $ra
    // 0x0023F520: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x0023F520: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_002700D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002700D0: lui         $v0, 0x800F
    ctx->r2 = S32(0X800F << 16);
    // 0x002700D4: lw          $v0, 0x2040($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2040);
    // 0x002700D8: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x002700DC: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x002700E0: lui         $s1, 0x800F
    ctx->r17 = S32(0X800F << 16);
    // 0x002700E4: lw          $s1, 0x2794($s1)
    ctx->r17 = MEM_W(ctx->r17, 0X2794);
    // 0x002700E8: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x002700EC: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x002700F0: sw          $ra, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r31;
    // 0x002700F4: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x002700F8: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x002700FC: addu        $s2, $a0, $v0
    ctx->r18 = ADD32(ctx->r4, ctx->r2);
    // 0x00270100: beq         $s1, $zero, L_00270130
    if (ctx->r17 == 0) {
        // 0x00270104: addu        $a0, $s2, $a1
        ctx->r4 = ADD32(ctx->r18, ctx->r5);
            goto L_00270130;
    }
    // 0x00270104: addu        $a0, $s2, $a1
    ctx->r4 = ADD32(ctx->r18, ctx->r5);
L_00270108:
    // 0x00270108: lw          $v0, 0x8($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X8);
    // 0x0027010C: addiu       $v1, $v0, 0x300
    ctx->r3 = ADD32(ctx->r2, 0X300);
    // 0x00270110: sltu        $v0, $s2, $v0
    ctx->r2 = ctx->r18 < ctx->r2 ? 1 : 0;
    // 0x00270114: bne         $v0, $zero, L_00270130
    if (ctx->r2 != 0) {
        // 0x00270118: slt         $v0, $v1, $a0
        ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r4) ? 1 : 0;
            goto L_00270130;
    }
    // 0x00270118: slt         $v0, $v1, $a0
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x0027011C: beq         $v0, $zero, L_00270184
    if (ctx->r2 == 0) {
        // 0x00270120: addu        $s0, $s1, $zero
        ctx->r16 = ADD32(ctx->r17, 0);
            goto L_00270184;
    }
    // 0x00270120: addu        $s0, $s1, $zero
    ctx->r16 = ADD32(ctx->r17, 0);
    // 0x00270124: lw          $s1, 0x0($s1)
    ctx->r17 = MEM_W(ctx->r17, 0X0);
    // 0x00270128: bne         $s1, $zero, L_00270108
    if (ctx->r17 != 0) {
        // 0x0027012C: nop
    
            goto L_00270108;
    }
    // 0x0027012C: nop

L_00270130:
    // 0x00270130: lui         $s3, 0x800F
    ctx->r19 = S32(0X800F << 16);
    // 0x00270134: addiu       $s3, $s3, 0x2798
    ctx->r19 = ADD32(ctx->r19, 0X2798);
    // 0x00270138: lw          $s1, 0x0($s3)
    ctx->r17 = MEM_W(ctx->r19, 0X0);
    // 0x0027013C: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x00270140: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x00270144: jal         0x002933B0
    // 0x00270148: sw          $v0, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r2;
    func_002933B0(rdram, ctx);
        goto after_0;
    // 0x00270148: sw          $v0, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r2;
    after_0:
    // 0x0027014C: beq         $s0, $zero, L_00270164
    if (ctx->r16 == 0) {
        // 0x00270150: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_00270164;
    }
    // 0x00270150: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x00270154: jal         0x002933E0
    // 0x00270158: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_002933E0(rdram, ctx);
        goto after_1;
    // 0x00270158: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_1:
    // 0x0027015C: j           L_002701BC
    // 0x00270160: andi        $s0, $s2, 0x1
    ctx->r16 = ctx->r18 & 0X1;
        goto L_002701BC;
    // 0x00270160: andi        $s0, $s2, 0x1
    ctx->r16 = ctx->r18 & 0X1;
L_00270164:
    // 0x00270164: lw          $a1, -0x4($s3)
    ctx->r5 = MEM_W(ctx->r19, -0X4);
    // 0x00270168: beq         $a1, $zero, L_002701AC
    if (ctx->r5 == 0) {
        // 0x0027016C: addu        $s0, $a1, $zero
        ctx->r16 = ADD32(ctx->r5, 0);
            goto L_002701AC;
    }
    // 0x0027016C: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x00270170: sw          $s1, -0x4($s3)
    MEM_W(-0X4, ctx->r19) = ctx->r17;
    // 0x00270174: sw          $s0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r16;
    // 0x00270178: sw          $zero, 0x4($s1)
    MEM_W(0X4, ctx->r17) = 0;
    // 0x0027017C: j           L_002701B8
    // 0x00270180: sw          $s1, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r17;
        goto L_002701B8;
    // 0x00270180: sw          $s1, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r17;
L_00270184:
    // 0x00270184: lw          $a0, 0x10($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X10);
    // 0x00270188: lw          $v0, 0x8($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X8);
    // 0x0027018C: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x00270190: lw          $v1, 0x2660($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X2660);
    // 0x00270194: addu        $a0, $a0, $s2
    ctx->r4 = ADD32(ctx->r4, ctx->r18);
    // 0x00270198: subu        $a0, $a0, $v0
    ctx->r4 = SUB32(ctx->r4, ctx->r2);
    // 0x0027019C: jal         0x0029BF80
    // 0x002701A0: sw          $v1, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->r3;
    func_0029BF80(rdram, ctx);
        goto after_2;
    // 0x002701A0: sw          $v1, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->r3;
    after_2:
    // 0x002701A4: j           L_00270224
    // 0x002701A8: nop

        goto L_00270224;
    // 0x002701A8: nop

L_002701AC:
    // 0x002701AC: sw          $s1, -0x4($s3)
    MEM_W(-0X4, ctx->r19) = ctx->r17;
    // 0x002701B0: sw          $zero, 0x0($s1)
    MEM_W(0X0, ctx->r17) = 0;
    // 0x002701B4: sw          $zero, 0x4($s1)
    MEM_W(0X4, ctx->r17) = 0;
L_002701B8:
    // 0x002701B8: andi        $s0, $s2, 0x1
    ctx->r16 = ctx->r18 & 0X1;
L_002701BC:
    // 0x002701BC: subu        $s2, $s2, $s0
    ctx->r18 = SUB32(ctx->r18, ctx->r16);
    // 0x002701C0: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x002701C4: addiu       $a0, $a0, 0x1CD8
    ctx->r4 = ADD32(ctx->r4, 0X1CD8);
    // 0x002701C8: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x002701CC: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x002701D0: lw          $v1, 0x2660($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X2660);
    // 0x002701D4: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x002701D8: lw          $v0, 0x2664($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2664);
    // 0x002701DC: addiu       $a2, $zero, 0x300
    ctx->r6 = ADD32(0, 0X300);
    // 0x002701E0: sw          $a1, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->r5;
    // 0x002701E4: sw          $v1, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->r3;
    // 0x002701E8: lw          $s1, 0x10($s1)
    ctx->r17 = MEM_W(ctx->r17, 0X10);
    // 0x002701EC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x002701F0: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x002701F4: sw          $v0, 0x2664($at)
    MEM_W(0X2664, ctx->r1) = ctx->r2;
    // 0x002701F8: lui         $v0, 0x800F
    ctx->r2 = S32(0X800F << 16);
    // 0x002701FC: addiu       $v0, $v0, 0x2778
    ctx->r2 = ADD32(ctx->r2, 0X2778);
    // 0x00270200: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x00270204: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00270208: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x0027020C: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x00270210: jal         0x00201E94
    // 0x00270214: addu        $a3, $s1, $zero
    ctx->r7 = ADD32(ctx->r17, 0);
    func_00201E94(rdram, ctx);
        goto after_3;
    // 0x00270214: addu        $a3, $s1, $zero
    ctx->r7 = ADD32(ctx->r17, 0);
    after_3:
    // 0x00270218: jal         0x0029BF80
    // 0x0027021C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_0029BF80(rdram, ctx);
        goto after_4;
    // 0x0027021C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_4:
    // 0x00270220: addu        $v0, $v0, $s0
    ctx->r2 = ADD32(ctx->r2, ctx->r16);
L_00270224:
    // 0x00270224: lw          $ra, 0x30($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X30);
    // 0x00270228: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x0027022C: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x00270230: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x00270234: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x00270238: jr          $ra
    // 0x0027023C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x0027023C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_0021285C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0021285C: addiu       $sp, $sp, -0x118
    ctx->r29 = ADD32(ctx->r29, -0X118);
    // 0x00212860: sw          $a0, 0x118($sp)
    MEM_W(0X118, ctx->r29) = ctx->r4;
    // 0x00212864: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    // 0x00212868: sw          $a1, 0x11C($sp)
    MEM_W(0X11C, ctx->r29) = ctx->r5;
    // 0x0021286C: sw          $a3, 0x124($sp)
    MEM_W(0X124, ctx->r29) = ctx->r7;
    // 0x00212870: addu        $a1, $a3, $zero
    ctx->r5 = ADD32(ctx->r7, 0);
    // 0x00212874: sw          $ra, 0x104($sp)
    MEM_W(0X104, ctx->r29) = ctx->r31;
    // 0x00212878: sw          $fp, 0x100($sp)
    MEM_W(0X100, ctx->r29) = ctx->r30;
    // 0x0021287C: sw          $s7, 0xFC($sp)
    MEM_W(0XFC, ctx->r29) = ctx->r23;
    // 0x00212880: sw          $s6, 0xF8($sp)
    MEM_W(0XF8, ctx->r29) = ctx->r22;
    // 0x00212884: sw          $s5, 0xF4($sp)
    MEM_W(0XF4, ctx->r29) = ctx->r21;
    // 0x00212888: sw          $s4, 0xF0($sp)
    MEM_W(0XF0, ctx->r29) = ctx->r20;
    // 0x0021288C: sw          $s3, 0xEC($sp)
    MEM_W(0XEC, ctx->r29) = ctx->r19;
    // 0x00212890: sw          $s2, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->r18;
    // 0x00212894: sw          $s1, 0xE4($sp)
    MEM_W(0XE4, ctx->r29) = ctx->r17;
    // 0x00212898: sw          $s0, 0xE0($sp)
    MEM_W(0XE0, ctx->r29) = ctx->r16;
    // 0x0021289C: sdc1        $f21, 0x110($sp)
    CHECK_FR(ctx, 21);
    SD(ctx->f21.u64, 0X110, ctx->r29);
    // 0x002128A0: sdc1        $f20, 0x108($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X108, ctx->r29);
    // 0x002128A4: jal         0x0020D908
    // 0x002128A8: sw          $a2, 0x120($sp)
    MEM_W(0X120, ctx->r29) = ctx->r6;
    func_0020D908(rdram, ctx);
        goto after_0;
    // 0x002128A8: sw          $a2, 0x120($sp)
    MEM_W(0X120, ctx->r29) = ctx->r6;
    after_0:
    // 0x002128AC: lw          $t0, 0x120($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X120);
    // 0x002128B0: lw          $v0, 0x0($t0)
    ctx->r2 = MEM_W(ctx->r8, 0X0);
    // 0x002128B4: addu        $fp, $zero, $zero
    ctx->r30 = ADD32(0, 0);
    // 0x002128B8: blez        $v0, L_00212D6C
    if (SIGNED(ctx->r2) <= 0) {
        // 0x002128BC: sw          $zero, 0xCC($sp)
        MEM_W(0XCC, ctx->r29) = 0;
            goto L_00212D6C;
    }
    // 0x002128BC: sw          $zero, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = 0;
    // 0x002128C0: addiu       $t1, $sp, 0xB8
    ctx->r9 = ADD32(ctx->r29, 0XB8);
    // 0x002128C4: addiu       $t2, $sp, 0xC8
    ctx->r10 = ADD32(ctx->r29, 0XC8);
    // 0x002128C8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002128CC: lwc1        $f21, 0x576C($at)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r1, 0X576C);
    // 0x002128D0: addiu       $t3, $sp, 0x68
    ctx->r11 = ADD32(ctx->r29, 0X68);
    // 0x002128D4: sw          $t1, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->r9;
    // 0x002128D8: sw          $t2, 0xD8($sp)
    MEM_W(0XD8, ctx->r29) = ctx->r10;
    // 0x002128DC: sw          $t3, 0xDC($sp)
    MEM_W(0XDC, ctx->r29) = ctx->r11;
L_002128E0:
    // 0x002128E0: lw          $a0, 0x120($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X120);
    // 0x002128E4: lw          $a1, 0xCC($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XCC);
    // 0x002128E8: jal         0x002017D4
    // 0x002128EC: addu        $s7, $zero, $zero
    ctx->r23 = ADD32(0, 0);
    func_002017D4(rdram, ctx);
        goto after_1;
    // 0x002128EC: addu        $s7, $zero, $zero
    ctx->r23 = ADD32(0, 0);
    after_1:
    // 0x002128F0: sw          $v0, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = ctx->r2;
    // 0x002128F4: lw          $t0, 0xD0($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XD0);
    // 0x002128F8: lw          $v0, 0x4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4);
    // 0x002128FC: blez        $v0, L_00212D50
    if (SIGNED(ctx->r2) <= 0) {
        // 0x00212900: addiu       $v1, $t0, 0x8
        ctx->r3 = ADD32(ctx->r8, 0X8);
            goto L_00212D50;
    }
    // 0x00212900: addiu       $v1, $t0, 0x8
    ctx->r3 = ADD32(ctx->r8, 0X8);
    // 0x00212904: addu        $s1, $v1, $zero
    ctx->r17 = ADD32(ctx->r3, 0);
    // 0x00212908: sll         $v0, $fp, 1
    ctx->r2 = S32(ctx->r30 << 1);
    // 0x0021290C: addu        $v0, $v0, $fp
    ctx->r2 = ADD32(ctx->r2, ctx->r30);
    // 0x00212910: lw          $t1, 0x128($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X128);
    // 0x00212914: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x00212918: addu        $s6, $v0, $t1
    ctx->r22 = ADD32(ctx->r2, ctx->r9);
L_0021291C:
    // 0x0021291C: addu        $s5, $zero, $zero
    ctx->r21 = ADD32(0, 0);
    // 0x00212920: lhu         $a1, 0x6($s1)
    ctx->r5 = MEM_HU(ctx->r17, 0X6);
    // 0x00212924: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x00212928: andi        $v0, $a1, 0x80
    ctx->r2 = ctx->r5 & 0X80;
    // 0x0021292C: bne         $v0, $zero, L_00212D38
    if (ctx->r2 != 0) {
        // 0x00212930: addu        $s3, $s5, $zero
        ctx->r19 = ADD32(ctx->r21, 0);
            goto L_00212D38;
    }
    // 0x00212930: addu        $s3, $s5, $zero
    ctx->r19 = ADD32(ctx->r21, 0);
    // 0x00212934: lw          $t2, 0x12C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X12C);
    // 0x00212938: beq         $t2, $zero, L_00212954
    if (ctx->r10 == 0) {
        // 0x0021293C: addiu       $a0, $sp, 0x28
        ctx->r4 = ADD32(ctx->r29, 0X28);
            goto L_00212954;
    }
    // 0x0021293C: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    // 0x00212940: srl         $a1, $a1, 8
    ctx->r5 = S32(U32(ctx->r5) >> 8);
    // 0x00212944: lw          $t3, 0x124($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X124);
    // 0x00212948: sll         $a1, $a1, 6
    ctx->r5 = S32(ctx->r5 << 6);
    // 0x0021294C: jal         0x0020D908
    // 0x00212950: addu        $a1, $t3, $a1
    ctx->r5 = ADD32(ctx->r11, ctx->r5);
    func_0020D908(rdram, ctx);
        goto after_2;
    // 0x00212950: addu        $a1, $t3, $a1
    ctx->r5 = ADD32(ctx->r11, ctx->r5);
    after_2:
L_00212954:
    // 0x00212954: lh          $v0, 0x0($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X0);
    // 0x00212958: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    // 0x0021295C: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x00212960: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00212964: swc1        $f0, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->f0.u32l;
    // 0x00212968: lh          $v0, 0x2($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X2);
    // 0x0021296C: addiu       $a1, $sp, 0x78
    ctx->r5 = ADD32(ctx->r29, 0X78);
    // 0x00212970: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x00212974: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00212978: swc1        $f0, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->f0.u32l;
    // 0x0021297C: lh          $v0, 0x4($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X4);
    // 0x00212980: addiu       $a2, $sp, 0x98
    ctx->r6 = ADD32(ctx->r29, 0X98);
    // 0x00212984: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x00212988: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x0021298C: jal         0x0020F85C
    // 0x00212990: swc1        $f0, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->f0.u32l;
    func_0020F85C(rdram, ctx);
        goto after_3;
    // 0x00212990: swc1        $f0, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->f0.u32l;
    after_3:
    // 0x00212994: lb          $v0, 0xC($s1)
    ctx->r2 = MEM_B(ctx->r17, 0XC);
    // 0x00212998: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    // 0x0021299C: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x002129A0: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x002129A4: swc1        $f0, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->f0.u32l;
    // 0x002129A8: lb          $v0, 0xD($s1)
    ctx->r2 = MEM_B(ctx->r17, 0XD);
    // 0x002129AC: addiu       $a1, $sp, 0x88
    ctx->r5 = ADD32(ctx->r29, 0X88);
    // 0x002129B0: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x002129B4: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x002129B8: swc1        $f0, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->f0.u32l;
    // 0x002129BC: lb          $v0, 0xE($s1)
    ctx->r2 = MEM_B(ctx->r17, 0XE);
    // 0x002129C0: addiu       $a2, $sp, 0xA8
    ctx->r6 = ADD32(ctx->r29, 0XA8);
    // 0x002129C4: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x002129C8: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x002129CC: jal         0x0020FAFC
    // 0x002129D0: swc1        $f0, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->f0.u32l;
    func_0020FAFC(rdram, ctx);
        goto after_4;
    // 0x002129D0: swc1        $f0, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->f0.u32l;
    after_4:
    // 0x002129D4: lw          $t0, 0x11C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X11C);
    // 0x002129D8: addu        $s4, $zero, $zero
    ctx->r20 = ADD32(0, 0);
    // 0x002129DC: swc1        $f20, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f20.u32l;
    // 0x002129E0: swc1        $f20, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f20.u32l;
    // 0x002129E4: slt         $v0, $s5, $t0
    ctx->r2 = SIGNED(ctx->r21) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x002129E8: beq         $v0, $zero, L_00212B0C
    if (ctx->r2 == 0) {
        // 0x002129EC: swc1        $f20, 0x70($sp)
        MEM_W(0X70, ctx->r29) = ctx->f20.u32l;
            goto L_00212B0C;
    }
    // 0x002129EC: swc1        $f20, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f20.u32l;
    // 0x002129F0: lw          $s2, 0x118($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X118);
L_002129F4:
    // 0x002129F4: lw          $s0, 0x0($s2)
    ctx->r16 = MEM_W(ctx->r18, 0X0);
    // 0x002129F8: lwc1        $f3, 0x98($sp)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r29, 0X98);
    // 0x002129FC: sw          $zero, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = 0;
    // 0x00212A00: sw          $zero, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = 0;
    // 0x00212A04: sw          $zero, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = 0;
    // 0x00212A08: lwc1        $f0, 0xAC($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0XAC);
    // 0x00212A0C: c.lt.s      $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f3.fl < ctx->f0.fl;
    // 0x00212A10: nop

    // 0x00212A14: bc1f        L_00212AF8
    if (!c1cs) {
        // 0x00212A18: nop
    
            goto L_00212AF8;
    }
    // 0x00212A18: nop

    // 0x00212A1C: lwc1        $f0, 0xB0($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0XB0);
    // 0x00212A20: lwc1        $f2, 0x9C($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X9C);
    // 0x00212A24: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x00212A28: nop

    // 0x00212A2C: bc1f        L_00212AF8
    if (!c1cs) {
        // 0x00212A30: nop
    
            goto L_00212AF8;
    }
    // 0x00212A30: nop

    // 0x00212A34: lwc1        $f0, 0xB4($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0XB4);
    // 0x00212A38: lwc1        $f1, 0xA0($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0XA0);
    // 0x00212A3C: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x00212A40: nop

    // 0x00212A44: bc1f        L_00212AF8
    if (!c1cs) {
        // 0x00212A48: nop
    
            goto L_00212AF8;
    }
    // 0x00212A48: nop

    // 0x00212A4C: lwc1        $f0, 0xA0($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0XA0);
    // 0x00212A50: c.le.s      $f0, $f3
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    c1cs = ctx->f0.fl <= ctx->f3.fl;
    // 0x00212A54: nop

    // 0x00212A58: bc1f        L_00212AF8
    if (!c1cs) {
        // 0x00212A5C: nop
    
            goto L_00212AF8;
    }
    // 0x00212A5C: nop

    // 0x00212A60: lwc1        $f0, 0xA4($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0XA4);
    // 0x00212A64: c.le.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl <= ctx->f2.fl;
    // 0x00212A68: nop

    // 0x00212A6C: bc1f        L_00212AF8
    if (!c1cs) {
        // 0x00212A70: nop
    
            goto L_00212AF8;
    }
    // 0x00212A70: nop

    // 0x00212A74: lwc1        $f0, 0xA8($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0XA8);
    // 0x00212A78: c.le.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl <= ctx->f1.fl;
    // 0x00212A7C: nop

    // 0x00212A80: bc1f        L_00212AF8
    if (!c1cs) {
        // 0x00212A84: addiu       $v0, $s0, 0x20
        ctx->r2 = ADD32(ctx->r16, 0X20);
            goto L_00212AF8;
    }
    // 0x00212A84: addiu       $v0, $s0, 0x20
    ctx->r2 = ADD32(ctx->r16, 0X20);
    // 0x00212A88: lw          $t1, 0xA8($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XA8);
    // 0x00212A8C: lw          $t2, 0xAC($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XAC);
    // 0x00212A90: lw          $t3, 0xB0($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XB0);
    // 0x00212A94: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x00212A98: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    // 0x00212A9C: sw          $t3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r11;
    // 0x00212AA0: lw          $t1, 0xD4($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XD4);
    // 0x00212AA4: lw          $t2, 0xD8($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XD8);
    // 0x00212AA8: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x00212AAC: sw          $t1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r9;
    // 0x00212AB0: sw          $t2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r10;
    // 0x00212AB4: lw          $a1, 0x98($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X98);
    // 0x00212AB8: lw          $a2, 0x9C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X9C);
    // 0x00212ABC: lw          $a3, 0xA0($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XA0);
    // 0x00212AC0: jal         0x00212680
    // 0x00212AC4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00212680(rdram, ctx);
        goto after_5;
    // 0x00212AC4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_5:
    // 0x00212AC8: beq         $v0, $zero, L_00212AF8
    if (ctx->r2 == 0) {
        // 0x00212ACC: nop
    
            goto L_00212AF8;
    }
    // 0x00212ACC: nop

    // 0x00212AD0: lbu         $v0, 0xBA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XBA);
    // 0x00212AD4: beq         $v0, $zero, L_00212AE8
    if (ctx->r2 == 0) {
        // 0x00212AD8: nop
    
            goto L_00212AE8;
    }
    // 0x00212AD8: nop

    // 0x00212ADC: addu        $s5, $v0, $zero
    ctx->r21 = ADD32(ctx->r2, 0);
    // 0x00212AE0: lbu         $s3, 0xBC($s0)
    ctx->r19 = MEM_BU(ctx->r16, 0XBC);
    // 0x00212AE4: lwc1        $f20, 0xC8($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0XC8);
L_00212AE8:
    // 0x00212AE8: lw          $a0, 0xDC($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XDC);
    // 0x00212AEC: lw          $a2, 0xD4($sp)
    ctx->r6 = MEM_W(ctx->r29, 0XD4);
    // 0x00212AF0: jal         0x0020EEF8
    // 0x00212AF4: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    func_0020EEF8(rdram, ctx);
        goto after_6;
    // 0x00212AF4: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    after_6:
L_00212AF8:
    // 0x00212AF8: lw          $t3, 0x11C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X11C);
    // 0x00212AFC: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
    // 0x00212B00: slt         $v0, $s4, $t3
    ctx->r2 = SIGNED(ctx->r20) < SIGNED(ctx->r11) ? 1 : 0;
    // 0x00212B04: bne         $v0, $zero, L_002129F4
    if (ctx->r2 != 0) {
        // 0x00212B08: addiu       $s2, $s2, 0x4
        ctx->r18 = ADD32(ctx->r18, 0X4);
            goto L_002129F4;
    }
    // 0x00212B08: addiu       $s2, $s2, 0x4
    ctx->r18 = ADD32(ctx->r18, 0X4);
L_00212B0C:
    // 0x00212B0C: beq         $s5, $zero, L_00212D00
    if (ctx->r21 == 0) {
        // 0x00212B10: nop
    
            goto L_00212D00;
    }
    // 0x00212B10: nop

    // 0x00212B14: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00212B18: lwc1        $f0, 0x5770($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X5770);
    // 0x00212B1C: c.lt.s      $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f20.fl < ctx->f0.fl;
    // 0x00212B20: nop

    // 0x00212B24: bc1f        L_00212B30
    if (!c1cs) {
        // 0x00212B28: addu        $a1, $zero, $zero
        ctx->r5 = ADD32(0, 0);
            goto L_00212B30;
    }
    // 0x00212B28: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x00212B2C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
L_00212B30:
    // 0x00212B30: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00212B34: lwc1        $f0, 0x5774($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X5774);
    // 0x00212B38: c.lt.s      $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f20.fl < ctx->f0.fl;
    // 0x00212B3C: nop

    // 0x00212B40: bc1tl       L_00212B48
    if (c1cs) {
        // 0x00212B44: addiu       $a1, $zero, 0x2
        ctx->r5 = ADD32(0, 0X2);
            goto L_00212B48;
    }
    goto skip_0;
    // 0x00212B44: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    skip_0:
L_00212B48:
    // 0x00212B48: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00212B4C: bne         $s5, $v0, L_00212BA0
    if (ctx->r21 != ctx->r2) {
        // 0x00212B50: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_00212BA0;
    }
    // 0x00212B50: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x00212B54: lui         $v0, 0x9249
    ctx->r2 = S32(0X9249 << 16);
    // 0x00212B58: ori         $v0, $v0, 0x2493
    ctx->r2 = ctx->r2 | 0X2493;
    // 0x00212B5C: mult        $s3, $v0
    result = S64(S32(ctx->r19)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x00212B60: lhu         $a0, 0x6($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X6);
    // 0x00212B64: sra         $v0, $s3, 31
    ctx->r2 = S32(SIGNED(ctx->r19) >> 31);
    // 0x00212B68: andi        $a0, $a0, 0xFF8F
    ctx->r4 = ctx->r4 & 0XFF8F;
    // 0x00212B6C: mfhi        $t0
    ctx->r8 = hi;
    // 0x00212B70: addu        $v1, $t0, $s3
    ctx->r3 = ADD32(ctx->r8, ctx->r19);
    // 0x00212B74: sra         $v1, $v1, 2
    ctx->r3 = S32(SIGNED(ctx->r3) >> 2);
    // 0x00212B78: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x00212B7C: sll         $v0, $v1, 3
    ctx->r2 = S32(ctx->r3 << 3);
    // 0x00212B80: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x00212B84: subu        $v0, $s3, $v0
    ctx->r2 = SUB32(ctx->r19, ctx->r2);
    // 0x00212B88: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x00212B8C: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x00212B90: andi        $v0, $v0, 0x70
    ctx->r2 = ctx->r2 & 0X70;
    // 0x00212B94: or          $a0, $a0, $v0
    ctx->r4 = ctx->r4 | ctx->r2;
    // 0x00212B98: sh          $a0, 0x6($s1)
    MEM_H(0X6, ctx->r17) = ctx->r4;
    // 0x00212B9C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_00212BA0:
    // 0x00212BA0: bne         $s5, $v0, L_00212CD4
    if (ctx->r21 != ctx->r2) {
        // 0x00212BA4: sll         $v0, $a1, 2
        ctx->r2 = S32(ctx->r5 << 2);
            goto L_00212CD4;
    }
    // 0x00212BA4: sll         $v0, $a1, 2
    ctx->r2 = S32(ctx->r5 << 2);
    // 0x00212BA8: lwc1        $f0, 0x98($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X98);
    // 0x00212BAC: c.le.s      $f21, $f0
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f21.fl <= ctx->f0.fl;
    // 0x00212BB0: nop

    // 0x00212BB4: bc1t        L_00212BCC
    if (c1cs) {
        // 0x00212BB8: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_00212BCC;
    }
    // 0x00212BB8: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x00212BBC: trunc.w.s   $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x00212BC0: mfc1        $v1, $f4
    ctx->r3 = (int32_t)ctx->f4.u32l;
    // 0x00212BC4: j           L_00212BE0
    // 0x00212BC8: nop

        goto L_00212BE0;
    // 0x00212BC8: nop

L_00212BCC:
    // 0x00212BCC: sub.s       $f0, $f0, $f21
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f21.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f21.fl;
    // 0x00212BD0: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x00212BD4: trunc.w.s   $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x00212BD8: mfc1        $v1, $f4
    ctx->r3 = (int32_t)ctx->f4.u32l;
    // 0x00212BDC: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
L_00212BE0:
    // 0x00212BE0: lui         $v0, 0xCCCC
    ctx->r2 = S32(0XCCCC << 16);
    // 0x00212BE4: ori         $v0, $v0, 0xCCCD
    ctx->r2 = ctx->r2 | 0XCCCD;
    // 0x00212BE8: multu       $v1, $v0
    result = U64(U32(ctx->r3)) * U64(U32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x00212BEC: lwc1        $f0, 0x9C($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X9C);
    // 0x00212BF0: c.le.s      $f21, $f0
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f21.fl <= ctx->f0.fl;
    // 0x00212BF4: mfhi        $t0
    ctx->r8 = hi;
    // 0x00212BF8: srl         $v0, $t0, 3
    ctx->r2 = S32(U32(ctx->r8) >> 3);
    // 0x00212BFC: bc1t        L_00212C14
    if (c1cs) {
        // 0x00212C00: addu        $a0, $a0, $v0
        ctx->r4 = ADD32(ctx->r4, ctx->r2);
            goto L_00212C14;
    }
    // 0x00212C00: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x00212C04: trunc.w.s   $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x00212C08: mfc1        $v1, $f4
    ctx->r3 = (int32_t)ctx->f4.u32l;
    // 0x00212C0C: j           L_00212C28
    // 0x00212C10: nop

        goto L_00212C28;
    // 0x00212C10: nop

L_00212C14:
    // 0x00212C14: sub.s       $f0, $f0, $f21
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f21.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f21.fl;
    // 0x00212C18: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x00212C1C: trunc.w.s   $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x00212C20: mfc1        $v1, $f4
    ctx->r3 = (int32_t)ctx->f4.u32l;
    // 0x00212C24: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
L_00212C28:
    // 0x00212C28: lui         $v0, 0xCCCC
    ctx->r2 = S32(0XCCCC << 16);
    // 0x00212C2C: ori         $v0, $v0, 0xCCCD
    ctx->r2 = ctx->r2 | 0XCCCD;
    // 0x00212C30: multu       $v1, $v0
    result = U64(U32(ctx->r3)) * U64(U32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x00212C34: lwc1        $f0, 0xA0($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0XA0);
    // 0x00212C38: c.le.s      $f21, $f0
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f21.fl <= ctx->f0.fl;
    // 0x00212C3C: mfhi        $t0
    ctx->r8 = hi;
    // 0x00212C40: srl         $v0, $t0, 3
    ctx->r2 = S32(U32(ctx->r8) >> 3);
    // 0x00212C44: bc1t        L_00212C5C
    if (c1cs) {
        // 0x00212C48: addu        $a0, $a0, $v0
        ctx->r4 = ADD32(ctx->r4, ctx->r2);
            goto L_00212C5C;
    }
    // 0x00212C48: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x00212C4C: trunc.w.s   $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x00212C50: mfc1        $v1, $f4
    ctx->r3 = (int32_t)ctx->f4.u32l;
    // 0x00212C54: j           L_00212C70
    // 0x00212C58: nop

        goto L_00212C70;
    // 0x00212C58: nop

L_00212C5C:
    // 0x00212C5C: sub.s       $f0, $f0, $f21
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f21.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f21.fl;
    // 0x00212C60: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x00212C64: trunc.w.s   $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x00212C68: mfc1        $v1, $f4
    ctx->r3 = (int32_t)ctx->f4.u32l;
    // 0x00212C6C: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
L_00212C70:
    // 0x00212C70: lui         $v0, 0xCCCC
    ctx->r2 = S32(0XCCCC << 16);
    // 0x00212C74: ori         $v0, $v0, 0xCCCD
    ctx->r2 = ctx->r2 | 0XCCCD;
    // 0x00212C78: multu       $v1, $v0
    result = U64(U32(ctx->r3)) * U64(U32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x00212C7C: lui         $v1, 0x2492
    ctx->r3 = S32(0X2492 << 16);
    // 0x00212C80: ori         $v1, $v1, 0x4925
    ctx->r3 = ctx->r3 | 0X4925;
    // 0x00212C84: mfhi        $t4
    ctx->r12 = hi;
    // 0x00212C88: srl         $v0, $t4, 3
    ctx->r2 = S32(U32(ctx->r12) >> 3);
    // 0x00212C8C: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x00212C90: multu       $a0, $v1
    result = U64(U32(ctx->r4)) * U64(U32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x00212C94: mfhi        $v1
    ctx->r3 = hi;
    // 0x00212C98: subu        $v0, $a0, $v1
    ctx->r2 = SUB32(ctx->r4, ctx->r3);
    // 0x00212C9C: srl         $v0, $v0, 1
    ctx->r2 = S32(U32(ctx->r2) >> 1);
    // 0x00212CA0: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x00212CA4: srl         $v1, $v1, 2
    ctx->r3 = S32(U32(ctx->r3) >> 2);
    // 0x00212CA8: sll         $v0, $v1, 3
    ctx->r2 = S32(ctx->r3 << 3);
    // 0x00212CAC: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x00212CB0: subu        $v0, $a0, $v0
    ctx->r2 = SUB32(ctx->r4, ctx->r2);
    // 0x00212CB4: addiu       $a0, $v0, 0x1
    ctx->r4 = ADD32(ctx->r2, 0X1);
    // 0x00212CB8: sll         $v0, $a0, 4
    ctx->r2 = S32(ctx->r4 << 4);
    // 0x00212CBC: lhu         $v1, 0x6($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X6);
    // 0x00212CC0: andi        $v0, $v0, 0x70
    ctx->r2 = ctx->r2 & 0X70;
    // 0x00212CC4: andi        $v1, $v1, 0xFF8F
    ctx->r3 = ctx->r3 & 0XFF8F;
    // 0x00212CC8: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x00212CCC: sh          $v1, 0x6($s1)
    MEM_H(0X6, ctx->r17) = ctx->r3;
    // 0x00212CD0: sll         $v0, $a1, 2
    ctx->r2 = S32(ctx->r5 << 2);
L_00212CD4:
    // 0x00212CD4: lhu         $v1, 0x6($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X6);
    // 0x00212CD8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00212CDC: lwc1        $f0, 0x5778($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X5778);
    // 0x00212CE0: andi        $v1, $v1, 0xFFF3
    ctx->r3 = ctx->r3 & 0XFFF3;
    // 0x00212CE4: or          $v0, $v1, $v0
    ctx->r2 = ctx->r3 | ctx->r2;
    // 0x00212CE8: c.lt.s      $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f20.fl < ctx->f0.fl;
    // 0x00212CEC: nop

    // 0x00212CF0: bc1f        L_00212D00
    if (!c1cs) {
        // 0x00212CF4: sh          $v0, 0x6($s1)
        MEM_H(0X6, ctx->r17) = ctx->r2;
            goto L_00212D00;
    }
    // 0x00212CF4: sh          $v0, 0x6($s1)
    MEM_H(0X6, ctx->r17) = ctx->r2;
    // 0x00212CF8: andi        $v0, $v0, 0xFF83
    ctx->r2 = ctx->r2 & 0XFF83;
    // 0x00212CFC: sh          $v0, 0x6($s1)
    MEM_H(0X6, ctx->r17) = ctx->r2;
L_00212D00:
    // 0x00212D00: lwc1        $f0, 0x0($s6)
    ctx->f0.u32l = MEM_W(ctx->r22, 0X0);
    // 0x00212D04: lwc1        $f1, 0x68($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X68);
    // 0x00212D08: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x00212D0C: swc1        $f0, 0x0($s6)
    MEM_W(0X0, ctx->r22) = ctx->f0.u32l;
    // 0x00212D10: lwc1        $f0, 0x4($s6)
    ctx->f0.u32l = MEM_W(ctx->r22, 0X4);
    // 0x00212D14: lwc1        $f1, 0x6C($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X6C);
    // 0x00212D18: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x00212D1C: lwc1        $f1, 0x8($s6)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r22, 0X8);
    // 0x00212D20: swc1        $f0, 0x4($s6)
    MEM_W(0X4, ctx->r22) = ctx->f0.u32l;
    // 0x00212D24: lwc1        $f0, 0x70($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X70);
    // 0x00212D28: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x00212D2C: addiu       $fp, $fp, 0x1
    ctx->r30 = ADD32(ctx->r30, 0X1);
    // 0x00212D30: swc1        $f1, 0x8($s6)
    MEM_W(0X8, ctx->r22) = ctx->f_odd[(1 - 1) * 2];
    // 0x00212D34: addiu       $s6, $s6, 0xC
    ctx->r22 = ADD32(ctx->r22, 0XC);
L_00212D38:
    // 0x00212D38: lw          $t0, 0xD0($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XD0);
    // 0x00212D3C: lw          $v0, 0x4($t0)
    ctx->r2 = MEM_W(ctx->r8, 0X4);
    // 0x00212D40: addiu       $s7, $s7, 0x1
    ctx->r23 = ADD32(ctx->r23, 0X1);
    // 0x00212D44: slt         $v0, $s7, $v0
    ctx->r2 = SIGNED(ctx->r23) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x00212D48: bne         $v0, $zero, L_0021291C
    if (ctx->r2 != 0) {
        // 0x00212D4C: addiu       $s1, $s1, 0x10
        ctx->r17 = ADD32(ctx->r17, 0X10);
            goto L_0021291C;
    }
    // 0x00212D4C: addiu       $s1, $s1, 0x10
    ctx->r17 = ADD32(ctx->r17, 0X10);
L_00212D50:
    // 0x00212D50: lw          $t1, 0x120($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X120);
    // 0x00212D54: lw          $t2, 0xCC($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XCC);
    // 0x00212D58: lw          $v0, 0x0($t1)
    ctx->r2 = MEM_W(ctx->r9, 0X0);
    // 0x00212D5C: addiu       $t2, $t2, 0x1
    ctx->r10 = ADD32(ctx->r10, 0X1);
    // 0x00212D60: slt         $v0, $t2, $v0
    ctx->r2 = SIGNED(ctx->r10) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x00212D64: bne         $v0, $zero, L_002128E0
    if (ctx->r2 != 0) {
        // 0x00212D68: sw          $t2, 0xCC($sp)
        MEM_W(0XCC, ctx->r29) = ctx->r10;
            goto L_002128E0;
    }
    // 0x00212D68: sw          $t2, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->r10;
L_00212D6C:
    // 0x00212D6C: lw          $ra, 0x104($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X104);
    // 0x00212D70: lw          $fp, 0x100($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X100);
    // 0x00212D74: lw          $s7, 0xFC($sp)
    ctx->r23 = MEM_W(ctx->r29, 0XFC);
    // 0x00212D78: lw          $s6, 0xF8($sp)
    ctx->r22 = MEM_W(ctx->r29, 0XF8);
    // 0x00212D7C: lw          $s5, 0xF4($sp)
    ctx->r21 = MEM_W(ctx->r29, 0XF4);
    // 0x00212D80: lw          $s4, 0xF0($sp)
    ctx->r20 = MEM_W(ctx->r29, 0XF0);
    // 0x00212D84: lw          $s3, 0xEC($sp)
    ctx->r19 = MEM_W(ctx->r29, 0XEC);
    // 0x00212D88: lw          $s2, 0xE8($sp)
    ctx->r18 = MEM_W(ctx->r29, 0XE8);
    // 0x00212D8C: lw          $s1, 0xE4($sp)
    ctx->r17 = MEM_W(ctx->r29, 0XE4);
    // 0x00212D90: lw          $s0, 0xE0($sp)
    ctx->r16 = MEM_W(ctx->r29, 0XE0);
    // 0x00212D94: ldc1        $f21, 0x110($sp)
    CHECK_FR(ctx, 21);
    ctx->f21.u64 = LD(ctx->r29, 0X110);
    // 0x00212D98: ldc1        $f20, 0x108($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X108);
    // 0x00212D9C: jr          $ra
    // 0x00212DA0: addiu       $sp, $sp, 0x118
    ctx->r29 = ADD32(ctx->r29, 0X118);
    return;
    // 0x00212DA0: addiu       $sp, $sp, 0x118
    ctx->r29 = ADD32(ctx->r29, 0X118);
;}
RECOMP_FUNC void func_0022AFB4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0022AFB4: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x0022AFB8: sw          $s4, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r20;
    // 0x0022AFBC: addu        $s4, $a0, $zero
    ctx->r20 = ADD32(ctx->r4, 0);
    // 0x0022AFC0: sw          $ra, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r31;
    // 0x0022AFC4: sw          $s5, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r21;
    // 0x0022AFC8: sw          $s3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r19;
    // 0x0022AFCC: sw          $s2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r18;
    // 0x0022AFD0: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x0022AFD4: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x0022AFD8: sdc1        $f21, 0x58($sp)
    CHECK_FR(ctx, 21);
    SD(ctx->f21.u64, 0X58, ctx->r29);
    // 0x0022AFDC: sdc1        $f20, 0x50($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X50, ctx->r29);
    // 0x0022AFE0: lwc1        $f1, 0x11C($s4)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r20, 0X11C);
    // 0x0022AFE4: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x0022AFE8: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x0022AFEC: nop

    // 0x0022AFF0: bc1t        L_0022BA5C
    if (c1cs) {
        // 0x0022AFF4: nop
    
            goto L_0022BA5C;
    }
    // 0x0022AFF4: nop

    // 0x0022AFF8: lwc1        $f1, 0x134($s4)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r20, 0X134);
    // 0x0022AFFC: lwc1        $f0, 0x130($s4)
    ctx->f0.u32l = MEM_W(ctx->r20, 0X130);
    // 0x0022B000: mul.s       $f2, $f0, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f2.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0022B004: lwc1        $f0, 0x12C($s4)
    ctx->f0.u32l = MEM_W(ctx->r20, 0X12C);
    // 0x0022B008: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0022B00C: c.le.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl <= ctx->f2.fl;
    // 0x0022B010: nop

    // 0x0022B014: bc1fl       L_0022B01C
    if (!c1cs) {
        // 0x0022B018: mov.s       $f2, $f0
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
            goto L_0022B01C;
    }
    goto skip_0;
    // 0x0022B018: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    skip_0:
L_0022B01C:
    // 0x0022B01C: c.le.s      $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f2.fl <= ctx->f1.fl;
    // 0x0022B020: nop

    // 0x0022B024: bc1fl       L_0022B02C
    if (!c1cs) {
        // 0x0022B028: mov.s       $f1, $f2
        CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    ctx->f1.fl = ctx->f2.fl;
            goto L_0022B02C;
    }
    goto skip_1;
    // 0x0022B028: mov.s       $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    ctx->f1.fl = ctx->f2.fl;
    skip_1:
L_0022B02C:
    // 0x0022B02C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0022B030: lwc1        $f0, 0x61E0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X61E0);
    // 0x0022B034: mul.s       $f2, $f1, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x0022B038: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0022B03C: lwc1        $f0, 0x61E4($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X61E4);
    // 0x0022B040: mul.s       $f1, $f2, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x0022B044: lwc1        $f0, 0x4($s4)
    ctx->f0.u32l = MEM_W(ctx->r20, 0X4);
    // 0x0022B048: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x0022B04C: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    // 0x0022B050: lwc1        $f0, 0x4($s4)
    ctx->f0.u32l = MEM_W(ctx->r20, 0X4);
    // 0x0022B054: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x0022B058: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x0022B05C: lwc1        $f0, 0x8($s4)
    ctx->f0.u32l = MEM_W(ctx->r20, 0X8);
    // 0x0022B060: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x0022B064: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x0022B068: lwc1        $f0, 0x8($s4)
    ctx->f0.u32l = MEM_W(ctx->r20, 0X8);
    // 0x0022B06C: add.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f2.fl;
    // 0x0022B070: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x0022B074: lwc1        $f0, 0xC($s4)
    ctx->f0.u32l = MEM_W(ctx->r20, 0XC);
    // 0x0022B078: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x0022B07C: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    // 0x0022B080: lwc1        $f0, 0xC($s4)
    ctx->f0.u32l = MEM_W(ctx->r20, 0XC);
    // 0x0022B084: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x0022B088: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x0022B08C: lw          $v0, 0x40($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X40);
    // 0x0022B090: lui         $v1, 0x2
    ctx->r3 = S32(0X2 << 16);
    // 0x0022B094: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x0022B098: beq         $v0, $zero, L_0022B108
    if (ctx->r2 == 0) {
        // 0x0022B09C: nop
    
            goto L_0022B108;
    }
    // 0x0022B09C: nop

    // 0x0022B0A0: lwc1        $f2, 0x124($s4)
    ctx->f2.u32l = MEM_W(ctx->r20, 0X124);
    // 0x0022B0A4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0022B0A8: lwc1        $f0, 0x61E8($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X61E8);
    // 0x0022B0AC: mul.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x0022B0B0: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0022B0B4: lwc1        $f1, 0x6D28($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X6D28);
    // 0x0022B0B8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0022B0BC: lwc1        $f0, 0x61EC($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X61EC);
    // 0x0022B0C0: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x0022B0C4: lb          $v0, 0x1AD($s4)
    ctx->r2 = MEM_B(ctx->r20, 0X1AD);
    // 0x0022B0C8: sw          $zero, 0x11C($s4)
    MEM_W(0X11C, ctx->r20) = 0;
    // 0x0022B0CC: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x0022B0D0: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x0022B0D4: sub.s       $f1, $f0, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x0022B0D8: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x0022B0DC: trunc.w.s   $f6, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    ctx->f6.u32l = TRUNC_W_S(ctx->f2.fl);
    // 0x0022B0E0: mfc1        $v0, $f6
    ctx->r2 = (int32_t)ctx->f6.u32l;
    // 0x0022B0E4: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x0022B0E8: nop

    // 0x0022B0EC: bc1f        L_0022B0FC
    if (!c1cs) {
        // 0x0022B0F0: sh          $v0, 0x128($s4)
        MEM_H(0X128, ctx->r20) = ctx->r2;
            goto L_0022B0FC;
    }
    // 0x0022B0F0: sh          $v0, 0x128($s4)
    MEM_H(0X128, ctx->r20) = ctx->r2;
    // 0x0022B0F4: j           L_0022B104
    // 0x0022B0F8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
        goto L_0022B104;
    // 0x0022B0F8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_0022B0FC:
    // 0x0022B0FC: trunc.w.s   $f6, $f1
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 1);
    ctx->f6.u32l = TRUNC_W_S(ctx->f1.fl);
    // 0x0022B100: mfc1        $v0, $f6
    ctx->r2 = (int32_t)ctx->f6.u32l;
L_0022B104:
    // 0x0022B104: sb          $v0, 0x1AD($s4)
    MEM_B(0X1AD, ctx->r20) = ctx->r2;
L_0022B108:
    // 0x0022B108: lw          $v0, 0x40($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X40);
    // 0x0022B10C: lui         $v1, 0x1
    ctx->r3 = S32(0X1 << 16);
    // 0x0022B110: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x0022B114: beq         $v0, $zero, L_0022B3AC
    if (ctx->r2 == 0) {
        // 0x0022B118: addiu       $v0, $zero, 0x4F
        ctx->r2 = ADD32(0, 0X4F);
            goto L_0022B3AC;
    }
    // 0x0022B118: addiu       $v0, $zero, 0x4F
    ctx->r2 = ADD32(0, 0X4F);
    // 0x0022B11C: lhu         $v1, 0x2($s4)
    ctx->r3 = MEM_HU(ctx->r20, 0X2);
    // 0x0022B120: lw          $s1, 0x114($s4)
    ctx->r17 = MEM_W(ctx->r20, 0X114);
    // 0x0022B124: beq         $v1, $v0, L_0022B164
    if (ctx->r3 == ctx->r2) {
        // 0x0022B128: slti        $v0, $v1, 0x50
        ctx->r2 = SIGNED(ctx->r3) < 0X50 ? 1 : 0;
            goto L_0022B164;
    }
    // 0x0022B128: slti        $v0, $v1, 0x50
    ctx->r2 = SIGNED(ctx->r3) < 0X50 ? 1 : 0;
    // 0x0022B12C: beq         $v0, $zero, L_0022B144
    if (ctx->r2 == 0) {
        // 0x0022B130: addiu       $v0, $zero, 0xB
        ctx->r2 = ADD32(0, 0XB);
            goto L_0022B144;
    }
    // 0x0022B130: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
    // 0x0022B134: beq         $v1, $v0, L_0022B164
    if (ctx->r3 == ctx->r2) {
        // 0x0022B138: addiu       $v0, $zero, 0x2D
        ctx->r2 = ADD32(0, 0X2D);
            goto L_0022B164;
    }
    // 0x0022B138: addiu       $v0, $zero, 0x2D
    ctx->r2 = ADD32(0, 0X2D);
    // 0x0022B13C: beq         $v1, $v0, L_0022B170
    if (ctx->r3 == ctx->r2) {
        // 0x0022B140: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_0022B170;
    }
    // 0x0022B140: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
L_0022B144:
    // 0x0022B144: lwc1        $f0, 0x124($s4)
    ctx->f0.u32l = MEM_W(ctx->r20, 0X124);
    // 0x0022B148: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0022B14C: lwc1        $f1, 0x61F0($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X61F0);
    // 0x0022B150: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0022B154: sw          $zero, 0x11C($s4)
    MEM_W(0X11C, ctx->r20) = 0;
    // 0x0022B158: trunc.w.s   $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    ctx->f6.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x0022B15C: mfc1        $v0, $f6
    ctx->r2 = (int32_t)ctx->f6.u32l;
    // 0x0022B160: sh          $v0, 0x128($s4)
    MEM_H(0X128, ctx->r20) = ctx->r2;
L_0022B164:
    // 0x0022B164: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0022B168: lhu         $v1, 0x2($s4)
    ctx->r3 = MEM_HU(ctx->r20, 0X2);
    // 0x0022B16C: addiu       $v0, $zero, 0x2D
    ctx->r2 = ADD32(0, 0X2D);
L_0022B170:
    // 0x0022B170: beq         $v1, $v0, L_0022B2B4
    if (ctx->r3 == ctx->r2) {
        // 0x0022B174: addu        $s0, $a0, $zero
        ctx->r16 = ADD32(ctx->r4, 0);
            goto L_0022B2B4;
    }
    // 0x0022B174: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x0022B178: slti        $v0, $v1, 0x2E
    ctx->r2 = SIGNED(ctx->r3) < 0X2E ? 1 : 0;
    // 0x0022B17C: beq         $v0, $zero, L_0022B1C0
    if (ctx->r2 == 0) {
        // 0x0022B180: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_0022B1C0;
    }
    // 0x0022B180: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x0022B184: beq         $v1, $v0, L_0022B288
    if (ctx->r3 == ctx->r2) {
        // 0x0022B188: slti        $v0, $v1, 0x5
        ctx->r2 = SIGNED(ctx->r3) < 0X5 ? 1 : 0;
            goto L_0022B288;
    }
    // 0x0022B188: slti        $v0, $v1, 0x5
    ctx->r2 = SIGNED(ctx->r3) < 0X5 ? 1 : 0;
    // 0x0022B18C: beq         $v0, $zero, L_0022B1A4
    if (ctx->r2 == 0) {
        // 0x0022B190: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_0022B1A4;
    }
    // 0x0022B190: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x0022B194: beq         $v1, $v0, L_0022B20C
    if (ctx->r3 == ctx->r2) {
        // 0x0022B198: nop
    
            goto L_0022B20C;
    }
    // 0x0022B198: nop

    // 0x0022B19C: j           L_0022B2C4
    // 0x0022B1A0: nop

        goto L_0022B2C4;
    // 0x0022B1A0: nop

L_0022B1A4:
    // 0x0022B1A4: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
    // 0x0022B1A8: beq         $v1, $v0, L_0022B278
    if (ctx->r3 == ctx->r2) {
        // 0x0022B1AC: addiu       $v0, $zero, 0xF
        ctx->r2 = ADD32(0, 0XF);
            goto L_0022B278;
    }
    // 0x0022B1AC: addiu       $v0, $zero, 0xF
    ctx->r2 = ADD32(0, 0XF);
    // 0x0022B1B0: beq         $v1, $v0, L_0022B20C
    if (ctx->r3 == ctx->r2) {
        // 0x0022B1B4: nop
    
            goto L_0022B20C;
    }
    // 0x0022B1B4: nop

    // 0x0022B1B8: j           L_0022B2C4
    // 0x0022B1BC: nop

        goto L_0022B2C4;
    // 0x0022B1BC: nop

L_0022B1C0:
    // 0x0022B1C0: addiu       $v0, $zero, 0x126
    ctx->r2 = ADD32(0, 0X126);
    // 0x0022B1C4: beq         $v1, $v0, L_0022B20C
    if (ctx->r3 == ctx->r2) {
        // 0x0022B1C8: slti        $v0, $v1, 0x127
        ctx->r2 = SIGNED(ctx->r3) < 0X127 ? 1 : 0;
            goto L_0022B20C;
    }
    // 0x0022B1C8: slti        $v0, $v1, 0x127
    ctx->r2 = SIGNED(ctx->r3) < 0X127 ? 1 : 0;
    // 0x0022B1CC: beq         $v0, $zero, L_0022B1EC
    if (ctx->r2 == 0) {
        // 0x0022B1D0: addiu       $v0, $zero, 0x4F
        ctx->r2 = ADD32(0, 0X4F);
            goto L_0022B1EC;
    }
    // 0x0022B1D0: addiu       $v0, $zero, 0x4F
    ctx->r2 = ADD32(0, 0X4F);
    // 0x0022B1D4: beq         $v1, $v0, L_0022B2B4
    if (ctx->r3 == ctx->r2) {
        // 0x0022B1D8: addiu       $v0, $zero, 0x56
        ctx->r2 = ADD32(0, 0X56);
            goto L_0022B2B4;
    }
    // 0x0022B1D8: addiu       $v0, $zero, 0x56
    ctx->r2 = ADD32(0, 0X56);
    // 0x0022B1DC: beq         $v1, $v0, L_0022B20C
    if (ctx->r3 == ctx->r2) {
        // 0x0022B1E0: nop
    
            goto L_0022B20C;
    }
    // 0x0022B1E0: nop

    // 0x0022B1E4: j           L_0022B2C4
    // 0x0022B1E8: nop

        goto L_0022B2C4;
    // 0x0022B1E8: nop

L_0022B1EC:
    // 0x0022B1EC: addiu       $v0, $zero, 0x12A
    ctx->r2 = ADD32(0, 0X12A);
    // 0x0022B1F0: beq         $v1, $v0, L_0022B200
    if (ctx->r3 == ctx->r2) {
        // 0x0022B1F4: addiu       $v0, $zero, 0x132
        ctx->r2 = ADD32(0, 0X132);
            goto L_0022B200;
    }
    // 0x0022B1F4: addiu       $v0, $zero, 0x132
    ctx->r2 = ADD32(0, 0X132);
    // 0x0022B1F8: bne         $v1, $v0, L_0022B2C4
    if (ctx->r3 != ctx->r2) {
        // 0x0022B1FC: nop
    
            goto L_0022B2C4;
    }
    // 0x0022B1FC: nop

L_0022B200:
    // 0x0022B200: lw          $v0, 0x144($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X144);
    // 0x0022B204: j           L_0022B2A4
    // 0x0022B208: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
        goto L_0022B2A4;
    // 0x0022B208: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
L_0022B20C:
    // 0x0022B20C: lw          $v0, 0x40($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X40);
    // 0x0022B210: lui         $v1, 0x400
    ctx->r3 = S32(0X400 << 16);
    // 0x0022B214: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x0022B218: bne         $v0, $zero, L_0022B270
    if (ctx->r2 != 0) {
        // 0x0022B21C: addiu       $a0, $zero, 0x1
        ctx->r4 = ADD32(0, 0X1);
            goto L_0022B270;
    }
    // 0x0022B21C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x0022B220: lw          $v1, 0xD4($s1)
    ctx->r3 = MEM_W(ctx->r17, 0XD4);
    // 0x0022B224: andi        $v0, $v1, 0x100
    ctx->r2 = ctx->r3 & 0X100;
    // 0x0022B228: bne         $v0, $zero, L_0022B238
    if (ctx->r2 != 0) {
        // 0x0022B22C: lui         $v0, 0x30
        ctx->r2 = S32(0X30 << 16);
            goto L_0022B238;
    }
    // 0x0022B22C: lui         $v0, 0x30
    ctx->r2 = S32(0X30 << 16);
    // 0x0022B230: j           L_0022B2C4
    // 0x0022B234: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
        goto L_0022B2C4;
    // 0x0022B234: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
L_0022B238:
    // 0x0022B238: and         $v0, $v1, $v0
    ctx->r2 = ctx->r3 & ctx->r2;
    // 0x0022B23C: beq         $v0, $zero, L_0022B268
    if (ctx->r2 == 0) {
        // 0x0022B240: nop
    
            goto L_0022B268;
    }
    // 0x0022B240: nop

    // 0x0022B244: mtc1        $zero, $f1
    ctx->f_odd[(1 - 1) * 2] = 0;
    // 0x0022B248: lwc1        $f0, 0x144($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X144);
    // 0x0022B24C: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x0022B250: c.le.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl <= ctx->f1.fl;
    // 0x0022B254: nop

    // 0x0022B258: bc1t        L_0022B270
    if (c1cs) {
        // 0x0022B25C: addiu       $a0, $zero, 0x1
        ctx->r4 = ADD32(0, 0X1);
            goto L_0022B270;
    }
    // 0x0022B25C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x0022B260: j           L_0022B270
    // 0x0022B264: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
        goto L_0022B270;
    // 0x0022B264: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
L_0022B268:
    // 0x0022B268: lw          $v0, 0x140($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X140);
    // 0x0022B26C: andi        $a0, $v0, 0x20
    ctx->r4 = ctx->r2 & 0X20;
L_0022B270:
    // 0x0022B270: j           L_0022B2C4
    // 0x0022B274: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
        goto L_0022B2C4;
    // 0x0022B274: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
L_0022B278:
    // 0x0022B278: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0022B27C: lb          $v1, 0x174($s1)
    ctx->r3 = MEM_B(ctx->r17, 0X174);
    // 0x0022B280: j           L_0022B294
    // 0x0022B284: addiu       $v0, $zero, 0x21
    ctx->r2 = ADD32(0, 0X21);
        goto L_0022B294;
    // 0x0022B284: addiu       $v0, $zero, 0x21
    ctx->r2 = ADD32(0, 0X21);
L_0022B288:
    // 0x0022B288: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0022B28C: lb          $v1, 0x174($s1)
    ctx->r3 = MEM_B(ctx->r17, 0X174);
    // 0x0022B290: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
L_0022B294:
    // 0x0022B294: bnel        $v1, $v0, L_0022B2C4
    if (ctx->r3 != ctx->r2) {
        // 0x0022B298: addiu       $s0, $zero, 0x1
        ctx->r16 = ADD32(0, 0X1);
            goto L_0022B2C4;
    }
    goto skip_2;
    // 0x0022B298: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
    skip_2:
    // 0x0022B29C: lw          $v0, 0xD4($s1)
    ctx->r2 = MEM_W(ctx->r17, 0XD4);
    // 0x0022B2A0: andi        $v0, $v0, 0x100
    ctx->r2 = ctx->r2 & 0X100;
L_0022B2A4:
    // 0x0022B2A4: bne         $v0, $zero, L_0022B2C4
    if (ctx->r2 != 0) {
        // 0x0022B2A8: nop
    
            goto L_0022B2C4;
    }
    // 0x0022B2A8: nop

    // 0x0022B2AC: j           L_0022B2C4
    // 0x0022B2B0: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
        goto L_0022B2C4;
    // 0x0022B2B0: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
L_0022B2B4:
    // 0x0022B2B4: lw          $v0, 0xD4($s1)
    ctx->r2 = MEM_W(ctx->r17, 0XD4);
    // 0x0022B2B8: srl         $s0, $v0, 8
    ctx->r16 = S32(U32(ctx->r2) >> 8);
    // 0x0022B2BC: xori        $s0, $s0, 0x1
    ctx->r16 = ctx->r16 ^ 0X1;
    // 0x0022B2C0: andi        $s0, $s0, 0x1
    ctx->r16 = ctx->r16 & 0X1;
L_0022B2C4:
    // 0x0022B2C4: bne         $a0, $zero, L_0022B2D4
    if (ctx->r4 != 0) {
        // 0x0022B2C8: lui         $a0, 0xFFFC
        ctx->r4 = S32(0XFFFC << 16);
            goto L_0022B2D4;
    }
    // 0x0022B2C8: lui         $a0, 0xFFFC
    ctx->r4 = S32(0XFFFC << 16);
    // 0x0022B2CC: beq         $s0, $zero, L_0022B3AC
    if (ctx->r16 == 0) {
        // 0x0022B2D0: nop
    
            goto L_0022B3AC;
    }
    // 0x0022B2D0: nop

L_0022B2D4:
    // 0x0022B2D4: ori         $a0, $a0, 0xFFFF
    ctx->r4 = ctx->r4 | 0XFFFF;
    // 0x0022B2D8: lw          $v0, 0x40($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X40);
    // 0x0022B2DC: addiu       $v1, $zero, -0x7
    ctx->r3 = ADD32(0, -0X7);
    // 0x0022B2E0: sb          $v1, 0x1AC($s4)
    MEM_B(0X1AC, ctx->r20) = ctx->r3;
    // 0x0022B2E4: lui         $v1, 0x4
    ctx->r3 = S32(0X4 << 16);
    // 0x0022B2E8: sw          $zero, 0x11C($s4)
    MEM_W(0X11C, ctx->r20) = 0;
    // 0x0022B2EC: and         $v0, $v0, $a0
    ctx->r2 = ctx->r2 & ctx->r4;
    // 0x0022B2F0: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x0022B2F4: jal         0x002113A4
    // 0x0022B2F8: sw          $v0, 0x40($s4)
    MEM_W(0X40, ctx->r20) = ctx->r2;
    func_002113A4(rdram, ctx);
        goto after_0;
    // 0x0022B2F8: sw          $v0, 0x40($s4)
    MEM_W(0X40, ctx->r20) = ctx->r2;
    after_0:
    // 0x0022B2FC: lui         $v1, 0xB60B
    ctx->r3 = S32(0XB60B << 16);
    // 0x0022B300: ori         $v1, $v1, 0x60B7
    ctx->r3 = ctx->r3 | 0X60B7;
    // 0x0022B304: mult        $v0, $v1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x0022B308: sra         $a0, $v0, 31
    ctx->r4 = S32(SIGNED(ctx->r2) >> 31);
    // 0x0022B30C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0022B310: lwc1        $f1, 0x61F4($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X61F4);
    // 0x0022B314: mfhi        $t0
    ctx->r8 = hi;
    // 0x0022B318: addu        $v1, $t0, $v0
    ctx->r3 = ADD32(ctx->r8, ctx->r2);
    // 0x0022B31C: sra         $v1, $v1, 8
    ctx->r3 = S32(SIGNED(ctx->r3) >> 8);
    // 0x0022B320: subu        $v1, $v1, $a0
    ctx->r3 = SUB32(ctx->r3, ctx->r4);
    // 0x0022B324: sll         $a0, $v1, 1
    ctx->r4 = S32(ctx->r3 << 1);
    // 0x0022B328: addu        $a0, $a0, $v1
    ctx->r4 = ADD32(ctx->r4, ctx->r3);
    // 0x0022B32C: sll         $v1, $a0, 4
    ctx->r3 = S32(ctx->r4 << 4);
    // 0x0022B330: subu        $v1, $v1, $a0
    ctx->r3 = SUB32(ctx->r3, ctx->r4);
    // 0x0022B334: sll         $v1, $v1, 3
    ctx->r3 = S32(ctx->r3 << 3);
    // 0x0022B338: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x0022B33C: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x0022B340: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x0022B344: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0022B348: sw          $zero, 0x1C($s4)
    MEM_W(0X1C, ctx->r20) = 0;
    // 0x0022B34C: lw          $v0, 0x40($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X40);
    // 0x0022B350: lui         $v1, 0x400
    ctx->r3 = S32(0X400 << 16);
    // 0x0022B354: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x0022B358: beq         $v0, $zero, L_0022B37C
    if (ctx->r2 == 0) {
        // 0x0022B35C: swc1        $f0, 0x164($s4)
        MEM_W(0X164, ctx->r20) = ctx->f0.u32l;
            goto L_0022B37C;
    }
    // 0x0022B35C: swc1        $f0, 0x164($s4)
    MEM_W(0X164, ctx->r20) = ctx->f0.u32l;
    // 0x0022B360: lwc1        $f0, 0x150($s4)
    ctx->f0.u32l = MEM_W(ctx->r20, 0X150);
    // 0x0022B364: lwc1        $f1, 0x158($s4)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r20, 0X158);
    // 0x0022B368: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x0022B36C: neg.s       $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = -ctx->f1.fl;
    // 0x0022B370: swc1        $f0, 0x18($s4)
    MEM_W(0X18, ctx->r20) = ctx->f0.u32l;
    // 0x0022B374: j           L_0022B384
    // 0x0022B378: swc1        $f1, 0x20($s4)
    MEM_W(0X20, ctx->r20) = ctx->f_odd[(1 - 1) * 2];
        goto L_0022B384;
    // 0x0022B378: swc1        $f1, 0x20($s4)
    MEM_W(0X20, ctx->r20) = ctx->f_odd[(1 - 1) * 2];
L_0022B37C:
    // 0x0022B37C: sw          $zero, 0x18($s4)
    MEM_W(0X18, ctx->r20) = 0;
    // 0x0022B380: sw          $zero, 0x20($s4)
    MEM_W(0X20, ctx->r20) = 0;
L_0022B384:
    // 0x0022B384: lui         $a0, 0xFEFF
    ctx->r4 = S32(0XFEFF << 16);
    // 0x0022B388: ori         $a0, $a0, 0xFFFF
    ctx->r4 = ctx->r4 | 0XFFFF;
    // 0x0022B38C: lw          $v0, 0x190($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X190);
    // 0x0022B390: lw          $v1, 0x10($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X10);
    // 0x0022B394: and         $v0, $v0, $a0
    ctx->r2 = ctx->r2 & ctx->r4;
    // 0x0022B398: sw          $v1, 0x10($s4)
    MEM_W(0X10, ctx->r20) = ctx->r3;
    // 0x0022B39C: beq         $s0, $zero, L_0022B3AC
    if (ctx->r16 == 0) {
        // 0x0022B3A0: sw          $v0, 0x190($s4)
        MEM_W(0X190, ctx->r20) = ctx->r2;
            goto L_0022B3AC;
    }
    // 0x0022B3A0: sw          $v0, 0x190($s4)
    MEM_W(0X190, ctx->r20) = ctx->r2;
    // 0x0022B3A4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0022B3A8: sh          $v0, 0x128($s4)
    MEM_H(0X128, ctx->r20) = ctx->r2;
L_0022B3AC:
    // 0x0022B3AC: lw          $v0, 0x40($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X40);
    // 0x0022B3B0: lui         $v1, 0x4
    ctx->r3 = S32(0X4 << 16);
    // 0x0022B3B4: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x0022B3B8: beq         $v0, $zero, L_0022B3F4
    if (ctx->r2 == 0) {
        // 0x0022B3BC: addiu       $v0, $s4, 0x190
        ctx->r2 = ADD32(ctx->r20, 0X190);
            goto L_0022B3F4;
    }
    // 0x0022B3BC: addiu       $v0, $s4, 0x190
    ctx->r2 = ADD32(ctx->r20, 0X190);
    // 0x0022B3C0: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x0022B3C4: lw          $a1, 0x4($s4)
    ctx->r5 = MEM_W(ctx->r20, 0X4);
    // 0x0022B3C8: lw          $a2, 0x8($s4)
    ctx->r6 = MEM_W(ctx->r20, 0X8);
    // 0x0022B3CC: lw          $a3, 0xC($s4)
    ctx->r7 = MEM_W(ctx->r20, 0XC);
    // 0x0022B3D0: jal         0x00239F00
    // 0x0022B3D4: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    func_00239F00(rdram, ctx);
        goto after_1;
    // 0x0022B3D4: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    after_1:
    // 0x0022B3D8: beq         $v0, $zero, L_0022B3F4
    if (ctx->r2 == 0) {
        // 0x0022B3DC: nop
    
            goto L_0022B3F4;
    }
    // 0x0022B3DC: nop

    // 0x0022B3E0: lui         $v0, 0x800F
    ctx->r2 = S32(0X800F << 16);
    // 0x0022B3E4: lw          $v0, 0x1D94($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1D94);
    // 0x0022B3E8: beq         $v0, $zero, L_0022B3F4
    if (ctx->r2 == 0) {
        // 0x0022B3EC: addiu       $v0, $zero, -0x3
        ctx->r2 = ADD32(0, -0X3);
            goto L_0022B3F4;
    }
    // 0x0022B3EC: addiu       $v0, $zero, -0x3
    ctx->r2 = ADD32(0, -0X3);
    // 0x0022B3F0: sb          $v0, 0x1AC($s4)
    MEM_B(0X1AC, ctx->r20) = ctx->r2;
L_0022B3F4:
    // 0x0022B3F4: lw          $v0, 0x40($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X40);
    // 0x0022B3F8: lui         $v1, 0x6
    ctx->r3 = S32(0X6 << 16);
    // 0x0022B3FC: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x0022B400: beq         $v0, $zero, L_0022B524
    if (ctx->r2 == 0) {
        // 0x0022B404: nop
    
            goto L_0022B524;
    }
    // 0x0022B404: nop

    // 0x0022B408: lui         $s3, 0x8012
    ctx->r19 = S32(0X8012 << 16);
    // 0x0022B40C: lw          $s3, -0x6770($s3)
    ctx->r19 = MEM_W(ctx->r19, -0X6770);
    // 0x0022B410: beq         $s3, $zero, L_0022B524
    if (ctx->r19 == 0) {
        // 0x0022B414: nop
    
            goto L_0022B524;
    }
    // 0x0022B414: nop

    // 0x0022B418: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0022B41C: lwc1        $f21, 0x61F8($at)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r1, 0X61F8);
L_0022B420:
    // 0x0022B420: lw          $v0, 0x524($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X524);
    // 0x0022B424: beq         $v0, $zero, L_0022B518
    if (ctx->r2 == 0) {
        // 0x0022B428: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_0022B518;
    }
    // 0x0022B428: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x0022B42C: lh          $v1, 0xA08($s3)
    ctx->r3 = MEM_H(ctx->r19, 0XA08);
    // 0x0022B430: beq         $v1, $v0, L_0022B518
    if (ctx->r3 == ctx->r2) {
        // 0x0022B434: nop
    
            goto L_0022B518;
    }
    // 0x0022B434: nop

    // 0x0022B438: lwc1        $f1, 0x8($s3)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r19, 0X8);
    // 0x0022B43C: lwc1        $f0, 0x54($s3)
    ctx->f0.u32l = MEM_W(ctx->r19, 0X54);
    // 0x0022B440: add.s       $f20, $f1, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x0022B444: sub.s       $f1, $f20, $f21
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f21.fl); 
    ctx->f1.fl = ctx->f20.fl - ctx->f21.fl;
    // 0x0022B448: lwc1        $f0, 0x8($s4)
    ctx->f0.u32l = MEM_W(ctx->r20, 0X8);
    // 0x0022B44C: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x0022B450: nop

    // 0x0022B454: bc1f        L_0022B518
    if (!c1cs) {
        // 0x0022B458: nop
    
            goto L_0022B518;
    }
    // 0x0022B458: nop

    // 0x0022B45C: jal         0x002671B4
    // 0x0022B460: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    func_002671B4(rdram, ctx);
        goto after_2;
    // 0x0022B460: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    after_2:
    // 0x0022B464: add.s       $f0, $f20, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f20.fl + ctx->f0.fl;
    // 0x0022B468: add.s       $f0, $f0, $f21
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f21.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f21.fl;
    // 0x0022B46C: lwc1        $f1, 0x8($s4)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r20, 0X8);
    // 0x0022B470: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x0022B474: nop

    // 0x0022B478: bc1f        L_0022B518
    if (!c1cs) {
        // 0x0022B47C: nop
    
            goto L_0022B518;
    }
    // 0x0022B47C: nop

    // 0x0022B480: lwc1        $f1, 0x4($s3)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r19, 0X4);
    // 0x0022B484: lwc1        $f0, 0x4($s4)
    ctx->f0.u32l = MEM_W(ctx->r20, 0X4);
    // 0x0022B488: sub.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl - ctx->f0.fl;
    // 0x0022B48C: mul.s       $f1, $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f1.fl);
    // 0x0022B490: lwc1        $f12, 0xC($s3)
    ctx->f12.u32l = MEM_W(ctx->r19, 0XC);
    // 0x0022B494: lwc1        $f0, 0xC($s4)
    ctx->f0.u32l = MEM_W(ctx->r20, 0XC);
    // 0x0022B498: sub.s       $f12, $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = ctx->f12.fl - ctx->f0.fl;
    // 0x0022B49C: mul.s       $f12, $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x0022B4A0: jal         0x00298470
    // 0x0022B4A4: add.s       $f12, $f1, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = ctx->f1.fl + ctx->f12.fl;
    func_00298470(rdram, ctx);
        goto after_3;
    // 0x0022B4A4: add.s       $f12, $f1, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = ctx->f1.fl + ctx->f12.fl;
    after_3:
    // 0x0022B4A8: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x0022B4AC: jal         0x002672C8
    // 0x0022B4B0: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    func_002672C8(rdram, ctx);
        goto after_4;
    // 0x0022B4B0: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    after_4:
    // 0x0022B4B4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0022B4B8: lwc1        $f1, 0x61FC($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X61FC);
    // 0x0022B4BC: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x0022B4C0: c.lt.s      $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f20.fl < ctx->f0.fl;
    // 0x0022B4C4: nop

    // 0x0022B4C8: bc1f        L_0022B518
    if (!c1cs) {
        // 0x0022B4CC: nop
    
            goto L_0022B518;
    }
    // 0x0022B4CC: nop

    // 0x0022B4D0: lui         $s1, 0x800B
    ctx->r17 = S32(0X800B << 16);
    // 0x0022B4D4: addiu       $s1, $s1, -0x31E8
    ctx->r17 = ADD32(ctx->r17, -0X31E8);
    // 0x0022B4D8: addiu       $s2, $zero, 0x3
    ctx->r18 = ADD32(0, 0X3);
    // 0x0022B4DC: addiu       $s5, $zero, -0x1
    ctx->r21 = ADD32(0, -0X1);
    // 0x0022B4E0: addiu       $s0, $s1, 0x10
    ctx->r16 = ADD32(ctx->r17, 0X10);
L_0022B4E4:
    // 0x0022B4E4: lh          $v1, -0xC($s0)
    ctx->r3 = MEM_H(ctx->r16, -0XC);
    // 0x0022B4E8: lhu         $v0, 0x2($s4)
    ctx->r2 = MEM_HU(ctx->r20, 0X2);
    // 0x0022B4EC: bnel        $v1, $v0, L_0022B50C
    if (ctx->r3 != ctx->r2) {
        // 0x0022B4F0: addiu       $s0, $s0, 0x14
        ctx->r16 = ADD32(ctx->r16, 0X14);
            goto L_0022B50C;
    }
    goto skip_3;
    // 0x0022B4F0: addiu       $s0, $s0, 0x14
    ctx->r16 = ADD32(ctx->r16, 0X14);
    skip_3:
    // 0x0022B4F4: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x0022B4F8: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x0022B4FC: jalr        $v0
    // 0x0022B500: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_5;
    // 0x0022B500: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_5:
    // 0x0022B504: bne         $v0, $zero, L_0022BA28
    if (ctx->r2 != 0) {
        // 0x0022B508: addiu       $s0, $s0, 0x14
        ctx->r16 = ADD32(ctx->r16, 0X14);
            goto L_0022BA28;
    }
    // 0x0022B508: addiu       $s0, $s0, 0x14
    ctx->r16 = ADD32(ctx->r16, 0X14);
L_0022B50C:
    // 0x0022B50C: addiu       $s2, $s2, -0x1
    ctx->r18 = ADD32(ctx->r18, -0X1);
    // 0x0022B510: bne         $s2, $s5, L_0022B4E4
    if (ctx->r18 != ctx->r21) {
        // 0x0022B514: addiu       $s1, $s1, 0x14
        ctx->r17 = ADD32(ctx->r17, 0X14);
            goto L_0022B4E4;
    }
    // 0x0022B514: addiu       $s1, $s1, 0x14
    ctx->r17 = ADD32(ctx->r17, 0X14);
L_0022B518:
    // 0x0022B518: lw          $s3, 0x1320($s3)
    ctx->r19 = MEM_W(ctx->r19, 0X1320);
    // 0x0022B51C: bne         $s3, $zero, L_0022B420
    if (ctx->r19 != 0) {
        // 0x0022B520: nop
    
            goto L_0022B420;
    }
    // 0x0022B520: nop

L_0022B524:
    // 0x0022B524: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0022B528: lwc1        $f5, 0x6D28($at)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r1, 0X6D28);
    // 0x0022B52C: lw          $t1, 0x4($s4)
    ctx->r9 = MEM_W(ctx->r20, 0X4);
    // 0x0022B530: lw          $t2, 0x8($s4)
    ctx->r10 = MEM_W(ctx->r20, 0X8);
    // 0x0022B534: lw          $t3, 0xC($s4)
    ctx->r11 = MEM_W(ctx->r20, 0XC);
        turok2_patch_lastpos_hold(rdram, ctx);

    // 0x0022B538: sw          $t1, 0x144($s4)
    MEM_W(0X144, ctx->r20) = ctx->r9;
    // 0x0022B53C: sw          $t2, 0x148($s4)
    MEM_W(0X148, ctx->r20) = ctx->r10;
    // 0x0022B540: sw          $t3, 0x14C($s4)
    MEM_W(0X14C, ctx->r20) = ctx->r11;
    // 0x0022B544: lwc1        $f2, 0x124($s4)
    ctx->f2.u32l = MEM_W(ctx->r20, 0X124);
    // 0x0022B548: mul.s       $f2, $f5, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f5.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = MUL_S(ctx->f5.fl, ctx->f2.fl);
    // 0x0022B54C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0022B550: lwc1        $f0, 0x6D30($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6D30);
    // 0x0022B554: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0022B558: lwc1        $f1, 0x6200($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X6200);
    // 0x0022B55C: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0022B560: nop

    // 0x0022B564: mul.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x0022B568: lwc1        $f0, 0x120($s4)
    ctx->f0.u32l = MEM_W(ctx->r20, 0X120);
    // 0x0022B56C: add.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f2.fl;
    // 0x0022B570: lw          $v0, 0xF8($s4)
    ctx->r2 = MEM_W(ctx->r20, 0XF8);
    // 0x0022B574: swc1        $f0, 0x120($s4)
    MEM_W(0X120, ctx->r20) = ctx->f0.u32l;
    // 0x0022B578: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x0022B57C: andi        $v0, $v0, 0x1000
    ctx->r2 = ctx->r2 & 0X1000;
    // 0x0022B580: beq         $v0, $zero, L_0022B634
    if (ctx->r2 == 0) {
        // 0x0022B584: nop
    
            goto L_0022B634;
    }
    // 0x0022B584: nop

    // 0x0022B588: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0022B58C: lwc1        $f3, 0x6204($at)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r1, 0X6204);
    // 0x0022B590: mul.s       $f3, $f5, $f3
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f5.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f3.fl = MUL_S(ctx->f5.fl, ctx->f3.fl);
    // 0x0022B594: lwc1        $f1, 0x138($s4)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r20, 0X138);
    // 0x0022B598: mul.s       $f1, $f3, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = MUL_S(ctx->f3.fl, ctx->f1.fl);
    // 0x0022B59C: lwc1        $f0, 0x13C($s4)
    ctx->f0.u32l = MEM_W(ctx->r20, 0X13C);
    // 0x0022B5A0: mul.s       $f3, $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f3.fl = MUL_S(ctx->f3.fl, ctx->f0.fl);
    // 0x0022B5A4: lwc1        $f0, 0x12C($s4)
    ctx->f0.u32l = MEM_W(ctx->r20, 0X12C);
    // 0x0022B5A8: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x0022B5AC: lwc1        $f1, 0x140($s4)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r20, 0X140);
    // 0x0022B5B0: mul.s       $f1, $f5, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f5.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = MUL_S(ctx->f5.fl, ctx->f1.fl);
    // 0x0022B5B4: lwc1        $f2, 0x130($s4)
    ctx->f2.u32l = MEM_W(ctx->r20, 0X130);
    // 0x0022B5B8: add.s       $f2, $f2, $f3
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f3.fl;
    // 0x0022B5BC: swc1        $f0, 0x12C($s4)
    MEM_W(0X12C, ctx->r20) = ctx->f0.u32l;
    // 0x0022B5C0: lwc1        $f0, 0x134($s4)
    ctx->f0.u32l = MEM_W(ctx->r20, 0X134);
    // 0x0022B5C4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0022B5C8: lwc1        $f4, 0x6208($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X6208);
    // 0x0022B5CC: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x0022B5D0: lwc1        $f1, 0x12C($s4)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r20, 0X12C);
    // 0x0022B5D4: mov.s       $f3, $f4
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 4);
    ctx->f3.fl = ctx->f4.fl;
    // 0x0022B5D8: swc1        $f2, 0x130($s4)
    MEM_W(0X130, ctx->r20) = ctx->f2.u32l;
    // 0x0022B5DC: c.lt.s      $f4, $f1
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f4.fl < ctx->f1.fl;
    // 0x0022B5E0: nop

    // 0x0022B5E4: bc1t        L_0022B5F0
    if (c1cs) {
        // 0x0022B5E8: swc1        $f0, 0x134($s4)
        MEM_W(0X134, ctx->r20) = ctx->f0.u32l;
            goto L_0022B5F0;
    }
    // 0x0022B5E8: swc1        $f0, 0x134($s4)
    MEM_W(0X134, ctx->r20) = ctx->f0.u32l;
    // 0x0022B5EC: mov.s       $f3, $f1
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 1);
    ctx->f3.fl = ctx->f1.fl;
L_0022B5F0:
    // 0x0022B5F0: lwc1        $f1, 0x130($s4)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r20, 0X130);
    // 0x0022B5F4: mov.s       $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    ctx->f0.fl = ctx->f4.fl;
    // 0x0022B5F8: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x0022B5FC: nop

    // 0x0022B600: bc1t        L_0022B60C
    if (c1cs) {
        // 0x0022B604: swc1        $f3, 0x12C($s4)
        MEM_W(0X12C, ctx->r20) = ctx->f_odd[(3 - 1) * 2];
            goto L_0022B60C;
    }
    // 0x0022B604: swc1        $f3, 0x12C($s4)
    MEM_W(0X12C, ctx->r20) = ctx->f_odd[(3 - 1) * 2];
    // 0x0022B608: mov.s       $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    ctx->f0.fl = ctx->f1.fl;
L_0022B60C:
    // 0x0022B60C: swc1        $f0, 0x130($s4)
    MEM_W(0X130, ctx->r20) = ctx->f0.u32l;
    // 0x0022B610: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0022B614: lwc1        $f0, 0x620C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X620C);
    // 0x0022B618: lwc1        $f1, 0x134($s4)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r20, 0X134);
    // 0x0022B61C: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x0022B620: nop

    // 0x0022B624: bc1fl       L_0022B62C
    if (!c1cs) {
        // 0x0022B628: mov.s       $f0, $f1
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    ctx->f0.fl = ctx->f1.fl;
            goto L_0022B62C;
    }
    goto skip_4;
    // 0x0022B628: mov.s       $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    ctx->f0.fl = ctx->f1.fl;
    skip_4:
L_0022B62C:
    // 0x0022B62C: j           L_0022B730
    // 0x0022B630: swc1        $f0, 0x134($s4)
    MEM_W(0X134, ctx->r20) = ctx->f0.u32l;
        goto L_0022B730;
    // 0x0022B630: swc1        $f0, 0x134($s4)
    MEM_W(0X134, ctx->r20) = ctx->f0.u32l;
L_0022B634:
    // 0x0022B634: lwc1        $f2, 0x12C($s4)
    ctx->f2.u32l = MEM_W(ctx->r20, 0X12C);
    // 0x0022B638: lwc1        $f0, 0x138($s4)
    ctx->f0.u32l = MEM_W(ctx->r20, 0X138);
    // 0x0022B63C: mul.s       $f0, $f2, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x0022B640: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0022B644: lwc1        $f4, 0x6210($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X6210);
    // 0x0022B648: c.lt.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl < ctx->f0.fl;
    // 0x0022B64C: nop

    // 0x0022B650: bc1tl       L_0022B658
    if (c1cs) {
        // 0x0022B654: mov.s       $f0, $f4
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    ctx->f0.fl = ctx->f4.fl;
            goto L_0022B658;
    }
    goto skip_5;
    // 0x0022B654: mov.s       $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    ctx->f0.fl = ctx->f4.fl;
    skip_5:
L_0022B658:
    // 0x0022B658: lwc1        $f3, 0x130($s4)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r20, 0X130);
    // 0x0022B65C: sub.s       $f1, $f0, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f1.fl = ctx->f0.fl - ctx->f2.fl;
    // 0x0022B660: lwc1        $f0, 0x13C($s4)
    ctx->f0.u32l = MEM_W(ctx->r20, 0X13C);
    // 0x0022B664: mul.s       $f0, $f3, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f3.fl, ctx->f0.fl);
    // 0x0022B668: nop

    // 0x0022B66C: mul.s       $f1, $f1, $f5
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 5);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f5.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f5.fl);
    // 0x0022B670: add.s       $f1, $f2, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = ctx->f2.fl + ctx->f1.fl;
    // 0x0022B674: c.lt.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl < ctx->f0.fl;
    // 0x0022B678: nop

    // 0x0022B67C: bc1f        L_0022B688
    if (!c1cs) {
        // 0x0022B680: swc1        $f1, 0x12C($s4)
        MEM_W(0X12C, ctx->r20) = ctx->f_odd[(1 - 1) * 2];
            goto L_0022B688;
    }
    // 0x0022B680: swc1        $f1, 0x12C($s4)
    MEM_W(0X12C, ctx->r20) = ctx->f_odd[(1 - 1) * 2];
    // 0x0022B684: mov.s       $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    ctx->f0.fl = ctx->f4.fl;
L_0022B688:
    // 0x0022B688: lwc1        $f2, 0x134($s4)
    ctx->f2.u32l = MEM_W(ctx->r20, 0X134);
    // 0x0022B68C: sub.s       $f1, $f0, $f3
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f1.fl = ctx->f0.fl - ctx->f3.fl;
    // 0x0022B690: lwc1        $f0, 0x140($s4)
    ctx->f0.u32l = MEM_W(ctx->r20, 0X140);
    // 0x0022B694: mul.s       $f0, $f2, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x0022B698: nop

    // 0x0022B69C: mul.s       $f1, $f1, $f5
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 5);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f5.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f5.fl);
    // 0x0022B6A0: add.s       $f1, $f3, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = ctx->f3.fl + ctx->f1.fl;
    // 0x0022B6A4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0022B6A8: lwc1        $f3, 0x6214($at)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r1, 0X6214);
    // 0x0022B6AC: c.lt.s      $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f3.fl < ctx->f0.fl;
    // 0x0022B6B0: nop

    // 0x0022B6B4: bc1f        L_0022B6C0
    if (!c1cs) {
        // 0x0022B6B8: swc1        $f1, 0x130($s4)
        MEM_W(0X130, ctx->r20) = ctx->f_odd[(1 - 1) * 2];
            goto L_0022B6C0;
    }
    // 0x0022B6B8: swc1        $f1, 0x130($s4)
    MEM_W(0X130, ctx->r20) = ctx->f_odd[(1 - 1) * 2];
    // 0x0022B6BC: mov.s       $f0, $f3
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    ctx->f0.fl = ctx->f3.fl;
L_0022B6C0:
    // 0x0022B6C0: sub.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f2.fl;
    // 0x0022B6C4: mul.s       $f0, $f0, $f5
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 5);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f5.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f5.fl);
    // 0x0022B6C8: lwc1        $f1, 0x12C($s4)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r20, 0X12C);
    // 0x0022B6CC: add.s       $f3, $f2, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f3.fl = ctx->f2.fl + ctx->f0.fl;
    // 0x0022B6D0: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x0022B6D4: c.lt.s      $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f1.fl < ctx->f2.fl;
    // 0x0022B6D8: nop

    // 0x0022B6DC: bc1t        L_0022B708
    if (c1cs) {
        // 0x0022B6E0: swc1        $f3, 0x134($s4)
        MEM_W(0X134, ctx->r20) = ctx->f_odd[(3 - 1) * 2];
            goto L_0022B708;
    }
    // 0x0022B6E0: swc1        $f3, 0x134($s4)
    MEM_W(0X134, ctx->r20) = ctx->f_odd[(3 - 1) * 2];
    // 0x0022B6E4: lwc1        $f0, 0x130($s4)
    ctx->f0.u32l = MEM_W(ctx->r20, 0X130);
    // 0x0022B6E8: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x0022B6EC: nop

    // 0x0022B6F0: bc1t        L_0022B708
    if (c1cs) {
        // 0x0022B6F4: nop
    
            goto L_0022B708;
    }
    // 0x0022B6F4: nop

    // 0x0022B6F8: c.lt.s      $f3, $f2
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f3.fl < ctx->f2.fl;
    // 0x0022B6FC: nop

    // 0x0022B700: bc1f        L_0022B730
    if (!c1cs) {
        // 0x0022B704: nop
    
            goto L_0022B730;
    }
    // 0x0022B704: nop

L_0022B708:
    // 0x0022B708: jal         0x002324E8
    // 0x0022B70C: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    func_002324E8(rdram, ctx);
        goto after_6;
    // 0x0022B70C: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    after_6:
    // 0x0022B710: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x0022B714: addiu       $a0, $a0, -0x76D8
    ctx->r4 = ADD32(ctx->r4, -0X76D8);
    // 0x0022B718: jal         0x0022F1C8
    // 0x0022B71C: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    func_0022F1C8(rdram, ctx);
        goto after_7;
    // 0x0022B71C: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    after_7:
    // 0x0022B720: jal         0x00232B40
    // 0x0022B724: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    func_00232B40(rdram, ctx);
        goto after_8;
    // 0x0022B724: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    after_8:
    // 0x0022B728: j           L_0022BA5C
    // 0x0022B72C: nop

        goto L_0022BA5C;
    // 0x0022B72C: nop

L_0022B730:
    // 0x0022B730: lwc1        $f1, 0x168($s4)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r20, 0X168);
    // 0x0022B734: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0022B738: lwc1        $f0, 0x6D28($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6D28);
    // 0x0022B73C: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x0022B740: lwc1        $f2, 0x16C($s4)
    ctx->f2.u32l = MEM_W(ctx->r20, 0X16C);
    // 0x0022B744: mul.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x0022B748: lwc1        $f4, 0x170($s4)
    ctx->f4.u32l = MEM_W(ctx->r20, 0X170);
    // 0x0022B74C: mul.s       $f4, $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x0022B750: lwc1        $f3, 0x15C($s4)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r20, 0X15C);
    // 0x0022B754: add.s       $f3, $f3, $f1
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f3.fl = ctx->f3.fl + ctx->f1.fl;
    // 0x0022B758: lwc1        $f0, 0x164($s4)
    ctx->f0.u32l = MEM_W(ctx->r20, 0X164);
    // 0x0022B75C: add.s       $f0, $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f4.fl;
    // 0x0022B760: lwc1        $f1, 0x160($s4)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r20, 0X160);
    // 0x0022B764: lui         $v0, 0x800F
    ctx->r2 = S32(0X800F << 16);
    // 0x0022B768: lw          $v0, 0x1ADC($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1ADC);
    // 0x0022B76C: add.s       $f1, $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f2.fl;
    // 0x0022B770: swc1        $f3, 0x15C($s4)
    MEM_W(0X15C, ctx->r20) = ctx->f_odd[(3 - 1) * 2];
    // 0x0022B774: swc1        $f0, 0x164($s4)
    MEM_W(0X164, ctx->r20) = ctx->f0.u32l;
    // 0x0022B778: swc1        $f1, 0x160($s4)
    MEM_W(0X160, ctx->r20) = ctx->f_odd[(1 - 1) * 2];
    // 0x0022B77C: lw          $t1, 0x18($s4)
    ctx->r9 = MEM_W(ctx->r20, 0X18);
    // 0x0022B780: lw          $t2, 0x1C($s4)
    ctx->r10 = MEM_W(ctx->r20, 0X1C);
    // 0x0022B784: lw          $t3, 0x20($s4)
    ctx->r11 = MEM_W(ctx->r20, 0X20);
    // 0x0022B788: sw          $t1, 0xD8($v0)
    MEM_W(0XD8, ctx->r2) = ctx->r9;
    // 0x0022B78C: sw          $t2, 0xDC($v0)
    MEM_W(0XDC, ctx->r2) = ctx->r10;
    // 0x0022B790: sw          $t3, 0xE0($v0)
    MEM_W(0XE0, ctx->r2) = ctx->r11;
    // 0x0022B794: jal         0x002323E0
    // 0x0022B798: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    func_002323E0(rdram, ctx);
        goto after_9;
    // 0x0022B798: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    after_9:
    // 0x0022B79C: jal         0x0022A4C8
    // 0x0022B7A0: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    func_0022A4C8(rdram, ctx);
        goto after_10;
    // 0x0022B7A0: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    after_10:
    // 0x0022B7A4: lwc1        $f2, 0x198($s4)
    ctx->f2.u32l = MEM_W(ctx->r20, 0X198);
    // 0x0022B7A8: mtc1        $zero, $f1
    ctx->f_odd[(1 - 1) * 2] = 0;
    // 0x0022B7AC: c.eq.s      $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f2.fl == ctx->f1.fl;
    // 0x0022B7B0: nop

    // 0x0022B7B4: bc1t        L_0022B7E0
    if (c1cs) {
        // 0x0022B7B8: nop
    
            goto L_0022B7E0;
    }
    // 0x0022B7B8: nop

    // 0x0022B7BC: lwc1        $f0, 0x8($s4)
    ctx->f0.u32l = MEM_W(ctx->r20, 0X8);
    // 0x0022B7C0: c.eq.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl == ctx->f1.fl;
    // 0x0022B7C4: nop

    // 0x0022B7C8: bc1f        L_0022B818
    if (!c1cs) {
        // 0x0022B7CC: lui         $v1, 0x7
        ctx->r3 = S32(0X7 << 16);
            goto L_0022B818;
    }
    // 0x0022B7CC: lui         $v1, 0x7
    ctx->r3 = S32(0X7 << 16);
    // 0x0022B7D0: c.lt.s      $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f2.fl < ctx->f1.fl;
    // 0x0022B7D4: nop

    // 0x0022B7D8: bc1f        L_0022B818
    if (!c1cs) {
        // 0x0022B7DC: nop
    
            goto L_0022B818;
    }
    // 0x0022B7DC: nop

L_0022B7E0:
    // 0x0022B7E0: lwc1        $f1, 0x18($s4)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r20, 0X18);
    // 0x0022B7E4: mul.s       $f1, $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f1.fl);
    // 0x0022B7E8: lwc1        $f2, 0x1C($s4)
    ctx->f2.u32l = MEM_W(ctx->r20, 0X1C);
    // 0x0022B7EC: mul.s       $f2, $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x0022B7F0: lwc1        $f0, 0x20($s4)
    ctx->f0.u32l = MEM_W(ctx->r20, 0X20);
    // 0x0022B7F4: mul.s       $f0, $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x0022B7F8: add.s       $f1, $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f2.fl;
    // 0x0022B7FC: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x0022B800: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0022B804: lwc1        $f0, 0x6218($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6218);
    // 0x0022B808: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x0022B80C: nop

    // 0x0022B810: bc1t        L_0022BA5C
    if (c1cs) {
        // 0x0022B814: lui         $v1, 0x7
        ctx->r3 = S32(0X7 << 16);
            goto L_0022BA5C;
    }
    // 0x0022B814: lui         $v1, 0x7
    ctx->r3 = S32(0X7 << 16);
L_0022B818:
    // 0x0022B818: lw          $v0, 0x40($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X40);
    // 0x0022B81C: ori         $v1, $v1, 0x2000
    ctx->r3 = ctx->r3 | 0X2000;
    // 0x0022B820: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x0022B824: bne         $v0, $zero, L_0022BA40
    if (ctx->r2 != 0) {
        // 0x0022B828: addiu       $v0, $s4, 0x190
        ctx->r2 = ADD32(ctx->r20, 0X190);
            goto L_0022BA40;
    }
    // 0x0022B828: addiu       $v0, $s4, 0x190
    ctx->r2 = ADD32(ctx->r20, 0X190);
    // 0x0022B82C: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x0022B830: lw          $a1, 0x4($s4)
    ctx->r5 = MEM_W(ctx->r20, 0X4);
    // 0x0022B834: lw          $a2, 0x8($s4)
    ctx->r6 = MEM_W(ctx->r20, 0X8);
    // 0x0022B838: lw          $a3, 0xC($s4)
    ctx->r7 = MEM_W(ctx->r20, 0XC);
    // 0x0022B83C: jal         0x00239F00
    // 0x0022B840: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    func_00239F00(rdram, ctx);
        goto after_11;
    // 0x0022B840: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    after_11:
    // 0x0022B844: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x0022B848: lhu         $v1, 0x2($s4)
    ctx->r3 = MEM_HU(ctx->r20, 0X2);
    // 0x0022B84C: addiu       $v0, $zero, 0x68
    ctx->r2 = ADD32(0, 0X68);
    // 0x0022B850: bne         $v1, $v0, L_0022B868
    if (ctx->r3 != ctx->r2) {
        // 0x0022B854: nop
    
            goto L_0022B868;
    }
    // 0x0022B854: nop

    // 0x0022B858: lui         $v0, 0x800F
    ctx->r2 = S32(0X800F << 16);
    // 0x0022B85C: lw          $v0, 0x1CE0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1CE0);
    // 0x0022B860: bnel        $v0, $zero, L_0022B868
    if (ctx->r2 != 0) {
        // 0x0022B864: sw          $v0, 0x114($s4)
        MEM_W(0X114, ctx->r20) = ctx->r2;
            goto L_0022B868;
    }
    goto skip_6;
    // 0x0022B864: sw          $v0, 0x114($s4)
    MEM_W(0X114, ctx->r20) = ctx->r2;
    skip_6:
L_0022B868:
    // 0x0022B868: beq         $a0, $zero, L_0022B90C
    if (ctx->r4 == 0) {
        // 0x0022B86C: nop
    
            goto L_0022B90C;
    }
    // 0x0022B86C: nop

    // 0x0022B870: lui         $a2, 0x800F
    ctx->r6 = S32(0X800F << 16);
    // 0x0022B874: addiu       $a2, $a2, 0x1CE0
    ctx->r6 = ADD32(ctx->r6, 0X1CE0);
    // 0x0022B878: lw          $v0, 0x0($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X0);
    // 0x0022B87C: beq         $v0, $zero, L_0022B890
    if (ctx->r2 == 0) {
        // 0x0022B880: addiu       $a0, $s4, 0x150
        ctx->r4 = ADD32(ctx->r20, 0X150);
            goto L_0022B890;
    }
    // 0x0022B880: addiu       $a0, $s4, 0x150
    ctx->r4 = ADD32(ctx->r20, 0X150);
    // 0x0022B884: addiu       $a1, $s4, 0x4
    ctx->r5 = ADD32(ctx->r20, 0X4);
    // 0x0022B888: j           L_0022B8FC
    // 0x0022B88C: addiu       $a2, $a2, 0x8
    ctx->r6 = ADD32(ctx->r6, 0X8);
        goto L_0022B8FC;
    // 0x0022B88C: addiu       $a2, $a2, 0x8
    ctx->r6 = ADD32(ctx->r6, 0X8);
L_0022B890:
    // 0x0022B890: lw          $v0, 0x88($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X88);
    // 0x0022B894: beq         $v0, $zero, L_0022B8A4
    if (ctx->r2 == 0) {
        // 0x0022B898: addiu       $a1, $s4, 0x4
        ctx->r5 = ADD32(ctx->r20, 0X4);
            goto L_0022B8A4;
    }
    // 0x0022B898: addiu       $a1, $s4, 0x4
    ctx->r5 = ADD32(ctx->r20, 0X4);
    // 0x0022B89C: j           L_0022B8FC
    // 0x0022B8A0: addiu       $a2, $a2, 0x90
    ctx->r6 = ADD32(ctx->r6, 0X90);
        goto L_0022B8FC;
    // 0x0022B8A0: addiu       $a2, $a2, 0x90
    ctx->r6 = ADD32(ctx->r6, 0X90);
L_0022B8A4:
    // 0x0022B8A4: lw          $v0, 0x9C($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X9C);
    // 0x0022B8A8: beq         $v0, $zero, L_0022B8BC
    if (ctx->r2 == 0) {
        // 0x0022B8AC: addiu       $a0, $s4, 0x150
        ctx->r4 = ADD32(ctx->r20, 0X150);
            goto L_0022B8BC;
    }
    // 0x0022B8AC: addiu       $a0, $s4, 0x150
    ctx->r4 = ADD32(ctx->r20, 0X150);
    // 0x0022B8B0: addiu       $a1, $s4, 0x4
    ctx->r5 = ADD32(ctx->r20, 0X4);
    // 0x0022B8B4: j           L_0022B8FC
    // 0x0022B8B8: addiu       $a2, $a2, 0xA0
    ctx->r6 = ADD32(ctx->r6, 0XA0);
        goto L_0022B8FC;
    // 0x0022B8B8: addiu       $a2, $a2, 0xA0
    ctx->r6 = ADD32(ctx->r6, 0XA0);
L_0022B8BC:
    // 0x0022B8BC: lw          $v0, 0xB4($a2)
    ctx->r2 = MEM_W(ctx->r6, 0XB4);
    // 0x0022B8C0: beq         $v0, $zero, L_0022B8E8
    if (ctx->r2 == 0) {
        // 0x0022B8C4: addiu       $a1, $s4, 0x4
        ctx->r5 = ADD32(ctx->r20, 0X4);
            goto L_0022B8E8;
    }
    // 0x0022B8C4: addiu       $a1, $s4, 0x4
    ctx->r5 = ADD32(ctx->r20, 0X4);
    // 0x0022B8C8: jal         0x0020EF2C
    // 0x0022B8CC: addiu       $a2, $a2, 0xB8
    ctx->r6 = ADD32(ctx->r6, 0XB8);
    func_0020EF2C(rdram, ctx);
        goto after_12;
    // 0x0022B8CC: addiu       $a2, $a2, 0xB8
    ctx->r6 = ADD32(ctx->r6, 0XB8);
    after_12:
    // 0x0022B8D0: lb          $v1, 0x1AC($s4)
    ctx->r3 = MEM_B(ctx->r20, 0X1AC);
    // 0x0022B8D4: addiu       $v0, $zero, -0x7
    ctx->r2 = ADD32(0, -0X7);
    // 0x0022B8D8: bne         $v1, $v0, L_0022B904
    if (ctx->r3 != ctx->r2) {
        // 0x0022B8DC: addiu       $v0, $zero, -0x3
        ctx->r2 = ADD32(0, -0X3);
            goto L_0022B904;
    }
    // 0x0022B8DC: addiu       $v0, $zero, -0x3
    ctx->r2 = ADD32(0, -0X3);
    // 0x0022B8E0: j           L_0022B904
    // 0x0022B8E4: sb          $v0, 0x1AC($s4)
    MEM_B(0X1AC, ctx->r20) = ctx->r2;
        goto L_0022B904;
    // 0x0022B8E4: sb          $v0, 0x1AC($s4)
    MEM_B(0X1AC, ctx->r20) = ctx->r2;
L_0022B8E8:
    // 0x0022B8E8: lw          $v0, 0xC4($a2)
    ctx->r2 = MEM_W(ctx->r6, 0XC4);
    // 0x0022B8EC: beq         $v0, $zero, L_0022B904
    if (ctx->r2 == 0) {
        // 0x0022B8F0: addiu       $a0, $s4, 0x150
        ctx->r4 = ADD32(ctx->r20, 0X150);
            goto L_0022B904;
    }
    // 0x0022B8F0: addiu       $a0, $s4, 0x150
    ctx->r4 = ADD32(ctx->r20, 0X150);
    // 0x0022B8F4: addiu       $a1, $s4, 0x4
    ctx->r5 = ADD32(ctx->r20, 0X4);
    // 0x0022B8F8: addiu       $a2, $a2, 0xC8
    ctx->r6 = ADD32(ctx->r6, 0XC8);
L_0022B8FC:
    // 0x0022B8FC: jal         0x0020EF2C
    // 0x0022B900: nop

    func_0020EF2C(rdram, ctx);
        goto after_13;
    // 0x0022B900: nop

    after_13:
L_0022B904:
    // 0x0022B904: jal         0x0020F040
    // 0x0022B908: addiu       $a0, $s4, 0x150
    ctx->r4 = ADD32(ctx->r20, 0X150);
    func_0020F040(rdram, ctx);
        goto after_14;
    // 0x0022B908: addiu       $a0, $s4, 0x150
    ctx->r4 = ADD32(ctx->r20, 0X150);
    after_14:
L_0022B90C:
    // 0x0022B90C: jal         0x0022AAE0
    // 0x0022B910: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    func_0022AAE0(rdram, ctx);
        goto after_15;
    // 0x0022B910: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    after_15:
    // 0x0022B914: lui         $s0, 0x800F
    ctx->r16 = S32(0X800F << 16);
    // 0x0022B918: addiu       $s0, $s0, 0x1DA4
    ctx->r16 = ADD32(ctx->r16, 0X1DA4);
    // 0x0022B91C: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x0022B920: beq         $v0, $zero, L_0022B930
    if (ctx->r2 == 0) {
        // 0x0022B924: nop
    
            goto L_0022B930;
    }
    // 0x0022B924: nop

    // 0x0022B928: jal         0x0022BD10
    // 0x0022B92C: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    func_0022BD10(rdram, ctx);
        goto after_16;
    // 0x0022B92C: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    after_16:
L_0022B930:
    // 0x0022B930: lw          $v0, 0x40($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X40);
    // 0x0022B934: andi        $v0, $v0, 0x100
    ctx->r2 = ctx->r2 & 0X100;
    // 0x0022B938: beq         $v0, $zero, L_0022BA40
    if (ctx->r2 == 0) {
        // 0x0022B93C: nop
    
            goto L_0022BA40;
    }
    // 0x0022B93C: nop

    // 0x0022B940: lw          $v0, -0x28($s0)
    ctx->r2 = MEM_W(ctx->r16, -0X28);
    // 0x0022B944: beq         $v0, $zero, L_0022B980
    if (ctx->r2 == 0) {
        // 0x0022B948: lui         $v1, 0x1000
        ctx->r3 = S32(0X1000 << 16);
            goto L_0022B980;
    }
    // 0x0022B948: lui         $v1, 0x1000
    ctx->r3 = S32(0X1000 << 16);
    // 0x0022B94C: lw          $v0, 0xF8($s4)
    ctx->r2 = MEM_W(ctx->r20, 0XF8);
    // 0x0022B950: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x0022B954: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x0022B958: bne         $v0, $zero, L_0022B968
    if (ctx->r2 != 0) {
        // 0x0022B95C: nop
    
            goto L_0022B968;
    }
    // 0x0022B95C: nop

    // 0x0022B960: jal         0x0022BA88
    // 0x0022B964: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    func_0022BA88(rdram, ctx);
        goto after_17;
    // 0x0022B964: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    after_17:
L_0022B968:
    // 0x0022B968: lw          $v0, 0xF8($s4)
    ctx->r2 = MEM_W(ctx->r20, 0XF8);
    // 0x0022B96C: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x0022B970: andi        $v0, $v0, 0x800
    ctx->r2 = ctx->r2 & 0X800;
    // 0x0022B974: beq         $v0, $zero, L_0022B980
    if (ctx->r2 == 0) {
        // 0x0022B978: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_0022B980;
    }
    // 0x0022B978: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0022B97C: sb          $v0, 0x195($s4)
    MEM_B(0X195, ctx->r20) = ctx->r2;
L_0022B980:
    // 0x0022B980: lw          $v0, 0x40($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X40);
    // 0x0022B984: andi        $v0, $v0, 0x100
    ctx->r2 = ctx->r2 & 0X100;
    // 0x0022B988: beq         $v0, $zero, L_0022BA40
    if (ctx->r2 == 0) {
        // 0x0022B98C: nop
    
            goto L_0022BA40;
    }
    // 0x0022B98C: nop

    // 0x0022B990: lui         $v0, 0x800F
    ctx->r2 = S32(0X800F << 16);
    // 0x0022B994: lw          $v0, 0x1CE0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1CE0);
    // 0x0022B998: beq         $v0, $zero, L_0022B9DC
    if (ctx->r2 == 0) {
        // 0x0022B99C: lui         $v1, 0x100
        ctx->r3 = S32(0X100 << 16);
            goto L_0022B9DC;
    }
    // 0x0022B99C: lui         $v1, 0x100
    ctx->r3 = S32(0X100 << 16);
    // 0x0022B9A0: lw          $v0, 0x190($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X190);
    // 0x0022B9A4: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x0022B9A8: beq         $v0, $zero, L_0022B9D4
    if (ctx->r2 == 0) {
        // 0x0022B9AC: nop
    
            goto L_0022B9D4;
    }
    // 0x0022B9AC: nop

    // 0x0022B9B0: lui         $v0, 0x800F
    ctx->r2 = S32(0X800F << 16);
    // 0x0022B9B4: lw          $v0, 0x1CE0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1CE0);
    // 0x0022B9B8: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x0022B9BC: bne         $v0, $zero, L_0022B9D4
    if (ctx->r2 != 0) {
        // 0x0022B9C0: nop
    
            goto L_0022B9D4;
    }
    // 0x0022B9C0: nop

    // 0x0022B9C4: jal         0x0022CA90
    // 0x0022B9C8: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    func_0022CA90(rdram, ctx);
        goto after_18;
    // 0x0022B9C8: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    after_18:
    // 0x0022B9CC: j           L_0022B9DC
    // 0x0022B9D0: nop

        goto L_0022B9DC;
    // 0x0022B9D0: nop

L_0022B9D4:
    // 0x0022B9D4: jal         0x0022C488
    // 0x0022B9D8: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    func_0022C488(rdram, ctx);
        goto after_19;
    // 0x0022B9D8: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    after_19:
L_0022B9DC:
    // 0x0022B9DC: lw          $v0, 0x40($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X40);
    // 0x0022B9E0: andi        $v0, $v0, 0x100
    ctx->r2 = ctx->r2 & 0X100;
    // 0x0022B9E4: beq         $v0, $zero, L_0022BA40
    if (ctx->r2 == 0) {
        // 0x0022B9E8: nop
    
            goto L_0022BA40;
    }
    // 0x0022B9E8: nop

    // 0x0022B9EC: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x0022B9F0: lw          $a0, 0x1D90($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1D90);
    // 0x0022B9F4: beq         $a0, $zero, L_0022BA40
    if (ctx->r4 == 0) {
        // 0x0022B9F8: lui         $v1, 0x2000
        ctx->r3 = S32(0X2000 << 16);
            goto L_0022BA40;
    }
    // 0x0022B9F8: lui         $v1, 0x2000
    ctx->r3 = S32(0X2000 << 16);
    // 0x0022B9FC: lw          $v0, 0xF8($s4)
    ctx->r2 = MEM_W(ctx->r20, 0XF8);
    // 0x0022BA00: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x0022BA04: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x0022BA08: bne         $v0, $zero, L_0022BA40
    if (ctx->r2 != 0) {
        // 0x0022BA0C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_0022BA40;
    }
    // 0x0022BA0C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0022BA10: bne         $a0, $v0, L_0022BA38
    if (ctx->r4 != ctx->r2) {
        // 0x0022BA14: nop
    
            goto L_0022BA38;
    }
    // 0x0022BA14: nop

    // 0x0022BA18: jal         0x0022BFA0
    // 0x0022BA1C: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    func_0022BFA0(rdram, ctx);
        goto after_20;
    // 0x0022BA1C: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    after_20:
    // 0x0022BA20: j           L_0022BA40
    // 0x0022BA24: nop

        goto L_0022BA40;
    // 0x0022BA24: nop

L_0022BA28:
    // 0x0022BA28: lw          $v0, 0x40($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X40);
    // 0x0022BA2C: ori         $v0, $v0, 0x1000
    ctx->r2 = ctx->r2 | 0X1000;
    // 0x0022BA30: j           L_0022BA5C
    // 0x0022BA34: sw          $v0, 0x40($s4)
    MEM_W(0X40, ctx->r20) = ctx->r2;
        goto L_0022BA5C;
    // 0x0022BA34: sw          $v0, 0x40($s4)
    MEM_W(0X40, ctx->r20) = ctx->r2;
L_0022BA38:
    // 0x0022BA38: jal         0x0022C228
    // 0x0022BA3C: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    func_0022C228(rdram, ctx);
        goto after_21;
    // 0x0022BA3C: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    after_21:
L_0022BA40:
    // 0x0022BA40: lw          $v0, 0x40($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X40);
    // 0x0022BA44: addiu       $v1, $zero, 0x100
    ctx->r3 = ADD32(0, 0X100);
    // 0x0022BA48: andi        $v0, $v0, 0x8100
    ctx->r2 = ctx->r2 & 0X8100;
    // 0x0022BA4C: bne         $v0, $v1, L_0022BA5C
    if (ctx->r2 != ctx->r3) {
        // 0x0022BA50: nop
    
            goto L_0022BA5C;
    }
    // 0x0022BA50: nop

    // 0x0022BA54: jal         0x00232934
    // 0x0022BA58: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    func_00232934(rdram, ctx);
        goto after_22;
    // 0x0022BA58: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    after_22:
L_0022BA5C:
    // 0x0022BA5C: lw          $ra, 0x48($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X48);
    // 0x0022BA60: lw          $s5, 0x44($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X44);
    // 0x0022BA64: lw          $s4, 0x40($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X40);
    // 0x0022BA68: lw          $s3, 0x3C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X3C);
    // 0x0022BA6C: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x0022BA70: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x0022BA74: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x0022BA78: ldc1        $f21, 0x58($sp)
    CHECK_FR(ctx, 21);
    ctx->f21.u64 = LD(ctx->r29, 0X58);
    // 0x0022BA7C: ldc1        $f20, 0x50($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X50);
    // 0x0022BA80: jr          $ra
    // 0x0022BA84: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    return;
    // 0x0022BA84: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
;}
RECOMP_FUNC void func_004498CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_00410A3C:
    // 0x004498CC: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x004498D0: sdc1        $f20, 0x50($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X50, ctx->r29);
    // 0x004498D4: mtc1        $a1, $f20
    ctx->f20.u32l = ctx->r5;
    // 0x004498D8: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x004498DC: lw          $v0, 0x1BB0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1BB0);
    // 0x004498E0: sw          $s2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r18;
    // 0x004498E4: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x004498E8: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x004498EC: sw          $s1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r17;
    // 0x004498F0: sw          $s0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r16;
    // 0x004498F4: lw          $a0, 0x4($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X4);
    // 0x004498F8: jal         0x002017D4
    // 0x004498FC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_002017D4(rdram, ctx);
        goto after_0;
    // 0x004498FC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x00449900: lw          $a0, 0x4($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X4);
    // 0x00449904: bne         $a0, $zero, L_0044991C
    if (ctx->r4 != 0) {
        // 0x00449908: addiu       $v1, $v0, 0x8
        ctx->r3 = ADD32(ctx->r2, 0X8);
            goto L_0044991C;
    }
    // 0x00449908: addiu       $v1, $v0, 0x8
    ctx->r3 = ADD32(ctx->r2, 0X8);
    // 0x0044990C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x00449910: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x00449914: j           L_00410A3C
    // 0x00449918: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    entry_00410A3C(rdram, ctx);
    return;
    // 0x00449918: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
L_0044991C:
    // 0x0044991C: lwc1        $f1, 0x10($v1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r3, 0X10);
    // 0x00449920: c.le.s      $f20, $f1
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f20.fl <= ctx->f1.fl;
    // 0x00449924: nop

    // 0x00449928: bc1fl       L_0044994C
    if (!c1cs) {
        // 0x0044992C: sll         $v0, $a0, 2
        ctx->r2 = S32(ctx->r4 << 2);
            goto L_0044994C;
    }
    goto skip_0;
    // 0x0044992C: sll         $v0, $a0, 2
    ctx->r2 = S32(ctx->r4 << 2);
    skip_0:
    // 0x00449930: lwc1        $f0, 0x8($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X8);
    // 0x00449934: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    // 0x00449938: lwc1        $f0, 0x4($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X4);
    // 0x0044993C: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    // 0x00449940: lwc1        $f0, 0x8($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X8);
    // 0x00449944: j           L_00410A3C
    // 0x00449948: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    entry_00410A3C(rdram, ctx);
    return;
    // 0x00449948: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
L_0044994C:
    // 0x0044994C: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x00449950: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x00449954: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x00449958: addiu       $a0, $v0, -0x14
    ctx->r4 = ADD32(ctx->r2, -0X14);
    // 0x0044995C: lwc1        $f0, 0x10($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X10);
    // 0x00449960: c.le.s      $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f0.fl <= ctx->f20.fl;
    // 0x00449964: nop

    // 0x00449968: bc1f        L_0044998C
    if (!c1cs) {
        // 0x0044996C: nop
    
            goto L_0044998C;
    }
    // 0x0044996C: nop

    // 0x00449970: lwc1        $f0, -0x14($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, -0X14);
    // 0x00449974: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    // 0x00449978: lwc1        $f0, 0x4($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X4);
    // 0x0044997C: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    // 0x00449980: lwc1        $f0, 0x8($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X8);
    // 0x00449984: j           L_00410A3C
    // 0x00449988: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    entry_00410A3C(rdram, ctx);
    return;
    // 0x00449988: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
L_0044998C:
    // 0x0044998C: c.lt.s      $f1, $f20
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f1.fl < ctx->f20.fl;
    // 0x00449990: nop

    // 0x00449994: bc1f        L_004499B4
    if (!c1cs) {
        // 0x00449998: nop
    
            goto L_004499B4;
    }
    // 0x00449998: nop

    // 0x0044999C: addiu       $v1, $v1, 0x14
    ctx->r3 = ADD32(ctx->r3, 0X14);
L_004499A0:
    // 0x004499A0: lwc1        $f0, 0x10($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X10);
    // 0x004499A4: c.lt.s      $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f0.fl < ctx->f20.fl;
    // 0x004499A8: nop

    // 0x004499AC: bc1tl       L_004499A0
    if (c1cs) {
        // 0x004499B0: addiu       $v1, $v1, 0x14
        ctx->r3 = ADD32(ctx->r3, 0X14);
            goto L_004499A0;
    }
    goto skip_1;
    // 0x004499B0: addiu       $v1, $v1, 0x14
    ctx->r3 = ADD32(ctx->r3, 0X14);
    skip_1:
L_004499B4:
    // 0x004499B4: lwc1        $f0, -0x14($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, -0X14);
    // 0x004499B8: lwc1        $f2, -0x4($v1)
    ctx->f2.u32l = MEM_W(ctx->r3, -0X4);
    // 0x004499BC: lwc1        $f1, 0x10($v1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r3, 0X10);
    // 0x004499C0: addiu       $s1, $sp, 0x20
    ctx->r17 = ADD32(ctx->r29, 0X20);
    // 0x004499C4: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    // 0x004499C8: lwc1        $f0, -0x10($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, -0X10);
    // 0x004499CC: sub.s       $f20, $f20, $f2
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f20.fl = ctx->f20.fl - ctx->f2.fl;
    // 0x004499D0: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x004499D4: lwc1        $f0, -0xC($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, -0XC);
    // 0x004499D8: sub.s       $f1, $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f1.fl = ctx->f1.fl - ctx->f2.fl;
    // 0x004499DC: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x004499E0: lwc1        $f0, 0x0($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X0);
    // 0x004499E4: div.s       $f20, $f20, $f1
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f20.fl = DIV_S(ctx->f20.fl, ctx->f1.fl);
    // 0x004499E8: swc1        $f0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f0.u32l;
    // 0x004499EC: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x004499F0: lwc1        $f0, 0x988($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X988);
    // 0x004499F4: lwc1        $f1, 0x4($v1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r3, 0X4);
    // 0x004499F8: sub.s       $f0, $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f20.fl;
    // 0x004499FC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x00449A00: swc1        $f1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    // 0x00449A04: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x00449A08: lwc1        $f0, 0x8($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X8);
    // 0x00449A0C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x00449A10: jal         0x0020EF60
    // 0x00449A14: swc1        $f0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f0.u32l;
    func_0020EF60(rdram, ctx);
        goto after_1;
    // 0x00449A14: swc1        $f0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f0.u32l;
    after_1:
    // 0x00449A18: addiu       $s0, $sp, 0x30
    ctx->r16 = ADD32(ctx->r29, 0X30);
    // 0x00449A1C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00449A20: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x00449A24: jal         0x0020EF60
    // 0x00449A28: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_0020EF60(rdram, ctx);
        goto after_2;
    // 0x00449A28: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_2:
    // 0x00449A2C: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x00449A30: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x00449A34: jal         0x0020EEF8
    // 0x00449A38: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    func_0020EEF8(rdram, ctx);
        goto after_3;
    // 0x00449A38: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    after_3:
    // 0x00449A3C: lw          $a3, 0x10($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X10);
    // 0x00449A40: lw          $t0, 0x14($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X14);
    // 0x00449A44: lw          $t1, 0x18($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X18);
    // 0x00449A48: sw          $a3, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r7;
    // 0x00449A4C: sw          $t0, 0x4($s2)
    MEM_W(0X4, ctx->r18) = ctx->r8;
    // 0x00449A50: sw          $t1, 0x8($s2)
    MEM_W(0X8, ctx->r18) = ctx->r9;
    // 0x00449A54: addu        $v0, $s2, $zero
    ctx->r2 = ADD32(ctx->r18, 0);
    // 0x00449A58: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x00449A5C: lw          $s2, 0x48($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X48);
    // 0x00449A60: lw          $s1, 0x44($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X44);
    // 0x00449A64: lw          $s0, 0x40($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X40);
    // 0x00449A68: ldc1        $f20, 0x50($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X50);
    // 0x00449A6C: jr          $ra
    // 0x00449A70: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    return;
    // 0x00449A70: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void func_0045B65C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0045B65C: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x0045B660: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0045B664: sw          $v0, 0x9C0($at)
    MEM_W(0X9C0, ctx->r1) = ctx->r2;
    // 0x0045B668: jr          $ra
    // 0x0045B66C: nop

    return;
    // 0x0045B66C: nop

;}
RECOMP_FUNC void func_00417DD4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00417DD4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00417DD8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00417DDC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x00417DE0: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00417DE4: addiu       $v0, $v0, 0x42D8
    ctx->r2 = ADD32(ctx->r2, 0X42D8);
    // 0x00417DE8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x00417DEC: jal         0x004160F0
    // 0x00417DF0: sw          $v0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r2;
    func_004160F0(rdram, ctx);
        goto after_0;
    // 0x00417DF0: sw          $v0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r2;
    after_0:
    // 0x00417DF4: addiu       $v0, $v0, -0x4
    ctx->r2 = ADD32(ctx->r2, -0X4);
    // 0x00417DF8: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x00417DFC: addiu       $a1, $a1, 0xE70
    ctx->r5 = ADD32(ctx->r5, 0XE70);
    // 0x00417E00: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x00417E04: lui         $a2, 0x8012
    ctx->r6 = S32(0X8012 << 16);
    // 0x00417E08: lw          $a2, -0x5324($a2)
    ctx->r6 = MEM_W(ctx->r6, -0X5324);
    // 0x00417E0C: jal         0x0029E3E0
    // 0x00417E10: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    func_0029E3E0(rdram, ctx);
        goto after_1;
    // 0x00417E10: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    after_1:
    // 0x00417E14: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x00417E18: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00417E1C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x00417E20: jr          $ra
    // 0x00417E24: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00417E24: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00263A20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00263A20: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x00263A24: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x00263A28: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x00263A2C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00263A30: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x00263A34: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x00263A38: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x00263A3C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00263A40: sdc1        $f21, 0x30($sp)
    CHECK_FR(ctx, 21);
    SD(ctx->f21.u64, 0X30, ctx->r29);
    // 0x00263A44: sdc1        $f20, 0x28($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X28, ctx->r29);
    // 0x00263A48: lw          $v0, 0x14($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X14);
    // 0x00263A4C: lb          $s3, 0x37($s0)
    ctx->r19 = MEM_B(ctx->r16, 0X37);
    // 0x00263A50: addiu       $s1, $v0, 0x14
    ctx->r17 = ADD32(ctx->r2, 0X14);
    // 0x00263A54: sltiu       $v0, $s3, 0x5
    ctx->r2 = ctx->r19 < 0X5 ? 1 : 0;
    // 0x00263A58: beq         $v0, $zero, L_00263DA4
    if (ctx->r2 == 0) {
        // 0x00263A5C: sll         $v0, $s3, 2
        ctx->r2 = S32(ctx->r19 << 2);
            goto L_00263DA4;
    }
    // 0x00263A5C: sll         $v0, $s3, 2
    ctx->r2 = S32(ctx->r19 << 2);
    // 0x00263A60: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00263A64: addu        $at, $at, $v0
    gpr jr_addend_00263A6C = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x00263A68: lw          $v0, 0x7BE0($at)
    ctx->r2 = ADD32(ctx->r1, 0X7BE0);
    // 0x00263A6C: jr          $v0
    // 0x00263A70: nop

    switch (jr_addend_00263A6C >> 2) {
        case 0: goto L_00263A74; break;
        case 1: goto L_00263BDC; break;
        case 2: goto L_00263CA0; break;
        case 3: goto L_00263B3C; break;
        case 4: goto L_00263D18; break;
        default: switch_error(__func__, 0x00263A6C, 0x800A7BE0);
    }
    // 0x00263A70: nop

L_00263A74:
    // 0x00263A74: lw          $v1, 0x24($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X24);
    // 0x00263A78: lui         $v0, 0xC0
    ctx->r2 = S32(0XC0 << 16);
    // 0x00263A7C: and         $v0, $v1, $v0
    ctx->r2 = ctx->r3 & ctx->r2;
    // 0x00263A80: beq         $v0, $zero, L_00263DA4
    if (ctx->r2 == 0) {
        // 0x00263A84: lui         $v0, 0x400
        ctx->r2 = S32(0X400 << 16);
            goto L_00263DA4;
    }
    // 0x00263A84: lui         $v0, 0x400
    ctx->r2 = S32(0X400 << 16);
    // 0x00263A88: and         $v0, $v1, $v0
    ctx->r2 = ctx->r3 & ctx->r2;
    // 0x00263A8C: beq         $v0, $zero, L_00263AB8
    if (ctx->r2 == 0) {
        // 0x00263A90: lui         $v1, 0x2
        ctx->r3 = S32(0X2 << 16);
            goto L_00263AB8;
    }
    // 0x00263A90: lui         $v1, 0x2
    ctx->r3 = S32(0X2 << 16);
    // 0x00263A94: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x00263A98: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x00263A9C: beql        $v0, $zero, L_00263DA4
    if (ctx->r2 == 0) {
        // 0x00263AA0: sw          $zero, 0x10C($s0)
        MEM_W(0X10C, ctx->r16) = 0;
            goto L_00263DA4;
    }
    goto skip_0;
    // 0x00263AA0: sw          $zero, 0x10C($s0)
    MEM_W(0X10C, ctx->r16) = 0;
    skip_0:
    // 0x00263AA4: lwc1        $f0, 0x10C($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X10C);
    // 0x00263AA8: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00263AAC: lwc1        $f1, 0x6D28($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X6D28);
    // 0x00263AB0: j           L_00263AEC
    // 0x00263AB4: add.s       $f0, $f1, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f1.fl + ctx->f0.fl;
        goto L_00263AEC;
    // 0x00263AB4: add.s       $f0, $f1, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f1.fl + ctx->f0.fl;
L_00263AB8:
    // 0x00263AB8: lwc1        $f1, 0x10C($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X10C);
    // 0x00263ABC: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x00263AC0: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x00263AC4: nop

    // 0x00263AC8: bc1t        L_00263AE0
    if (c1cs) {
        // 0x00263ACC: lui         $v1, 0x1
        ctx->r3 = S32(0X1 << 16);
            goto L_00263AE0;
    }
    // 0x00263ACC: lui         $v1, 0x1
    ctx->r3 = S32(0X1 << 16);
    // 0x00263AD0: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x00263AD4: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x00263AD8: beq         $v0, $zero, L_00263AF4
    if (ctx->r2 == 0) {
        // 0x00263ADC: nop
    
            goto L_00263AF4;
    }
    // 0x00263ADC: nop

L_00263AE0:
    // 0x00263AE0: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00263AE4: lwc1        $f0, 0x6D28($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6D28);
    // 0x00263AE8: add.s       $f0, $f1, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f1.fl + ctx->f0.fl;
L_00263AEC:
    // 0x00263AEC: swc1        $f0, 0x10C($s0)
    MEM_W(0X10C, ctx->r16) = ctx->f0.u32l;
    // 0x00263AF0: lwc1        $f1, 0x10C($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X10C);
L_00263AF4:
    // 0x00263AF4: lwc1        $f0, 0x54($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X54);
    // 0x00263AF8: c.le.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl <= ctx->f1.fl;
    // 0x00263AFC: nop

    // 0x00263B00: bc1f        L_00263DA4
    if (!c1cs) {
        // 0x00263B04: lui         $v0, 0x100
        ctx->r2 = S32(0X100 << 16);
            goto L_00263DA4;
    }
    // 0x00263B04: lui         $v0, 0x100
    ctx->r2 = S32(0X100 << 16);
    // 0x00263B08: sw          $zero, 0x44($s0)
    MEM_W(0X44, ctx->r16) = 0;
    // 0x00263B0C: lw          $v1, 0x24($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X24);
    // 0x00263B10: and         $v0, $v1, $v0
    ctx->r2 = ctx->r3 & ctx->r2;
    // 0x00263B14: beq         $v0, $zero, L_00263B24
    if (ctx->r2 == 0) {
        // 0x00263B18: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_00263B24;
    }
    // 0x00263B18: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x00263B1C: j           L_00263DA4
    // 0x00263B20: sb          $v0, 0x37($s0)
    MEM_B(0X37, ctx->r16) = ctx->r2;
        goto L_00263DA4;
    // 0x00263B20: sb          $v0, 0x37($s0)
    MEM_B(0X37, ctx->r16) = ctx->r2;
L_00263B24:
    // 0x00263B24: lui         $v0, 0x40
    ctx->r2 = S32(0X40 << 16);
    // 0x00263B28: and         $v0, $v1, $v0
    ctx->r2 = ctx->r3 & ctx->r2;
    // 0x00263B2C: bne         $v0, $zero, L_00263BBC
    if (ctx->r2 != 0) {
        // 0x00263B30: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_00263BBC;
    }
    // 0x00263B30: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00263B34: j           L_00263BC8
    // 0x00263B38: lui         $v0, 0x80
    ctx->r2 = S32(0X80 << 16);
        goto L_00263BC8;
    // 0x00263B38: lui         $v0, 0x80
    ctx->r2 = S32(0X80 << 16);
L_00263B3C:
    // 0x00263B3C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00263B40: lwc1        $f20, 0x7BF4($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X7BF4);
    // 0x00263B44: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00263B48: lwc1        $f21, 0x7BF8($at)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r1, 0X7BF8);
    // 0x00263B4C: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    // 0x00263B50: jal         0x002119FC
    // 0x00263B54: mov.s       $f14, $f21
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 21);
    ctx->f14.fl = ctx->f21.fl;
    func_002119FC(rdram, ctx);
        goto after_0;
    // 0x00263B54: mov.s       $f14, $f21
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 21);
    ctx->f14.fl = ctx->f21.fl;
    after_0:
    // 0x00263B58: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    // 0x00263B5C: mov.s       $f14, $f21
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 21);
    ctx->f14.fl = ctx->f21.fl;
    // 0x00263B60: jal         0x002119FC
    // 0x00263B64: swc1        $f0, 0x110($s0)
    MEM_W(0X110, ctx->r16) = ctx->f0.u32l;
    func_002119FC(rdram, ctx);
        goto after_1;
    // 0x00263B64: swc1        $f0, 0x110($s0)
    MEM_W(0X110, ctx->r16) = ctx->f0.u32l;
    after_1:
    // 0x00263B68: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    // 0x00263B6C: mov.s       $f14, $f21
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 21);
    ctx->f14.fl = ctx->f21.fl;
    // 0x00263B70: jal         0x002119FC
    // 0x00263B74: swc1        $f0, 0x114($s0)
    MEM_W(0X114, ctx->r16) = ctx->f0.u32l;
    func_002119FC(rdram, ctx);
        goto after_2;
    // 0x00263B74: swc1        $f0, 0x114($s0)
    MEM_W(0X114, ctx->r16) = ctx->f0.u32l;
    after_2:
    // 0x00263B78: lwc1        $f2, 0x44($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X44);
    // 0x00263B7C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00263B80: lwc1        $f1, 0x6D28($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X6D28);
    // 0x00263B84: add.s       $f2, $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f1.fl;
    // 0x00263B88: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00263B8C: lwc1        $f1, 0x7BFC($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X7BFC);
    // 0x00263B90: swc1        $f0, 0x118($s0)
    MEM_W(0X118, ctx->r16) = ctx->f0.u32l;
    // 0x00263B94: c.lt.s      $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f1.fl < ctx->f2.fl;
    // 0x00263B98: nop

    // 0x00263B9C: bc1f        L_00263DA4
    if (!c1cs) {
        // 0x00263BA0: swc1        $f2, 0x44($s0)
        MEM_W(0X44, ctx->r16) = ctx->f2.u32l;
            goto L_00263DA4;
    }
    // 0x00263BA0: swc1        $f2, 0x44($s0)
    MEM_W(0X44, ctx->r16) = ctx->f2.u32l;
    // 0x00263BA4: sw          $zero, 0x44($s0)
    MEM_W(0X44, ctx->r16) = 0;
    // 0x00263BA8: lw          $v1, 0x24($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X24);
    // 0x00263BAC: lui         $v0, 0x40
    ctx->r2 = S32(0X40 << 16);
    // 0x00263BB0: and         $v0, $v1, $v0
    ctx->r2 = ctx->r3 & ctx->r2;
    // 0x00263BB4: beq         $v0, $zero, L_00263BC4
    if (ctx->r2 == 0) {
        // 0x00263BB8: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_00263BC4;
    }
    // 0x00263BB8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_00263BBC:
    // 0x00263BBC: j           L_00263DA4
    // 0x00263BC0: sb          $v0, 0x37($s0)
    MEM_B(0X37, ctx->r16) = ctx->r2;
        goto L_00263DA4;
    // 0x00263BC0: sb          $v0, 0x37($s0)
    MEM_B(0X37, ctx->r16) = ctx->r2;
L_00263BC4:
    // 0x00263BC4: lui         $v0, 0x80
    ctx->r2 = S32(0X80 << 16);
L_00263BC8:
    // 0x00263BC8: and         $v0, $v1, $v0
    ctx->r2 = ctx->r3 & ctx->r2;
    // 0x00263BCC: beq         $v0, $zero, L_00263DA4
    if (ctx->r2 == 0) {
        // 0x00263BD0: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_00263DA4;
    }
    // 0x00263BD0: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x00263BD4: j           L_00263DA4
    // 0x00263BD8: sb          $v0, 0x37($s0)
    MEM_B(0X37, ctx->r16) = ctx->r2;
        goto L_00263DA4;
    // 0x00263BD8: sb          $v0, 0x37($s0)
    MEM_B(0X37, ctx->r16) = ctx->r2;
L_00263BDC:
    // 0x00263BDC: lwc1        $f1, 0x44($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X44);
    // 0x00263BE0: lwc1        $f0, 0x5C($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X5C);
    // 0x00263BE4: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x00263BE8: nop

    // 0x00263BEC: bc1f        L_00263C08
    if (!c1cs) {
        // 0x00263BF0: lui         $v1, 0x200
        ctx->r3 = S32(0X200 << 16);
            goto L_00263C08;
    }
    // 0x00263BF0: lui         $v1, 0x200
    ctx->r3 = S32(0X200 << 16);
    // 0x00263BF4: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00263BF8: lwc1        $f0, 0x6D28($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6D28);
    // 0x00263BFC: add.s       $f0, $f1, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x00263C00: j           L_00263C80
    // 0x00263C04: swc1        $f0, 0x44($s0)
    MEM_W(0X44, ctx->r16) = ctx->f0.u32l;
        goto L_00263C80;
    // 0x00263C04: swc1        $f0, 0x44($s0)
    MEM_W(0X44, ctx->r16) = ctx->f0.u32l;
L_00263C08:
    // 0x00263C08: lw          $v0, 0x24($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X24);
    // 0x00263C0C: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x00263C10: beq         $v0, $zero, L_00263C28
    if (ctx->r2 == 0) {
        // 0x00263C14: addiu       $v1, $zero, -0x2001
        ctx->r3 = ADD32(0, -0X2001);
            goto L_00263C28;
    }
    // 0x00263C14: addiu       $v1, $zero, -0x2001
    ctx->r3 = ADD32(0, -0X2001);
    // 0x00263C18: lw          $v0, 0xD4($s2)
    ctx->r2 = MEM_W(ctx->r18, 0XD4);
    // 0x00263C1C: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x00263C20: j           L_00263C80
    // 0x00263C24: sw          $v0, 0xD4($s2)
    MEM_W(0XD4, ctx->r18) = ctx->r2;
        goto L_00263C80;
    // 0x00263C24: sw          $v0, 0xD4($s2)
    MEM_W(0XD4, ctx->r18) = ctx->r2;
L_00263C28:
    // 0x00263C28: swc1        $f0, 0x44($s0)
    MEM_W(0X44, ctx->r16) = ctx->f0.u32l;
    // 0x00263C2C: lw          $v0, 0x24($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X24);
    // 0x00263C30: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x00263C34: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x00263C38: beq         $v0, $zero, L_00263C50
    if (ctx->r2 == 0) {
        // 0x00263C3C: lui         $v1, 0x2
        ctx->r3 = S32(0X2 << 16);
            goto L_00263C50;
    }
    // 0x00263C3C: lui         $v1, 0x2
    ctx->r3 = S32(0X2 << 16);
    // 0x00263C40: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x00263C44: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x00263C48: beq         $v0, $zero, L_00263C74
    if (ctx->r2 == 0) {
        // 0x00263C4C: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_00263C74;
    }
    // 0x00263C4C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
L_00263C50:
    // 0x00263C50: lw          $v0, 0x24($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X24);
    // 0x00263C54: lui         $v1, 0x1000
    ctx->r3 = S32(0X1000 << 16);
    // 0x00263C58: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x00263C5C: beq         $v0, $zero, L_00263C74
    if (ctx->r2 == 0) {
        // 0x00263C60: addiu       $a0, $zero, 0x1
        ctx->r4 = ADD32(0, 0X1);
            goto L_00263C74;
    }
    // 0x00263C60: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x00263C64: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x00263C68: lui         $v1, 0x2
    ctx->r3 = S32(0X2 << 16);
    // 0x00263C6C: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x00263C70: sltu        $a0, $v0, $a0
    ctx->r4 = ctx->r2 < ctx->r4 ? 1 : 0;
L_00263C74:
    // 0x00263C74: beq         $a0, $zero, L_00263C80
    if (ctx->r4 == 0) {
        // 0x00263C78: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_00263C80;
    }
    // 0x00263C78: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x00263C7C: sb          $v0, 0x37($s0)
    MEM_B(0X37, ctx->r16) = ctx->r2;
L_00263C80:
    // 0x00263C80: lwc1        $f1, 0x5C($s1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r17, 0X5C);
    // 0x00263C84: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x00263C88: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x00263C8C: nop

    // 0x00263C90: bc1f        L_00263D08
    if (!c1cs) {
        // 0x00263C94: nop
    
            goto L_00263D08;
    }
    // 0x00263C94: nop

    // 0x00263C98: j           L_00263CE8
    // 0x00263C9C: nop

        goto L_00263CE8;
    // 0x00263C9C: nop

L_00263CA0:
    // 0x00263CA0: lwc1        $f1, 0x44($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X44);
    // 0x00263CA4: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x00263CA8: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x00263CAC: nop

    // 0x00263CB0: bc1fl       L_00263CCC
    if (!c1cs) {
        // 0x00263CB4: sb          $zero, 0x37($s0)
        MEM_B(0X37, ctx->r16) = 0;
            goto L_00263CCC;
    }
    goto skip_1;
    // 0x00263CB4: sb          $zero, 0x37($s0)
    MEM_B(0X37, ctx->r16) = 0;
    skip_1:
    // 0x00263CB8: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00263CBC: lwc1        $f0, 0x6D28($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6D28);
    // 0x00263CC0: sub.s       $f0, $f1, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f1.fl - ctx->f0.fl;
    // 0x00263CC4: j           L_00263CD0
    // 0x00263CC8: swc1        $f0, 0x44($s0)
    MEM_W(0X44, ctx->r16) = ctx->f0.u32l;
        goto L_00263CD0;
    // 0x00263CC8: swc1        $f0, 0x44($s0)
    MEM_W(0X44, ctx->r16) = ctx->f0.u32l;
L_00263CCC:
    // 0x00263CCC: swc1        $f0, 0x10C($s0)
    MEM_W(0X10C, ctx->r16) = ctx->f0.u32l;
L_00263CD0:
    // 0x00263CD0: lwc1        $f1, 0x5C($s1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r17, 0X5C);
    // 0x00263CD4: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x00263CD8: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x00263CDC: nop

    // 0x00263CE0: bc1f        L_00263D08
    if (!c1cs) {
        // 0x00263CE4: nop
    
            goto L_00263D08;
    }
    // 0x00263CE4: nop

L_00263CE8:
    // 0x00263CE8: lwc1        $f12, 0x44($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X44);
    // 0x00263CEC: jal         0x00266F50
    // 0x00263CF0: div.s       $f12, $f12, $f1
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f12.fl = DIV_S(ctx->f12.fl, ctx->f1.fl);
    func_00266F50(rdram, ctx);
        goto after_3;
    // 0x00263CF0: div.s       $f12, $f12, $f1
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f12.fl = DIV_S(ctx->f12.fl, ctx->f1.fl);
    after_3:
    // 0x00263CF4: lwc1        $f1, 0x58($s1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r17, 0X58);
    // 0x00263CF8: neg.s       $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = -ctx->f1.fl;
    // 0x00263CFC: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x00263D00: j           L_00263DA4
    // 0x00263D04: swc1        $f1, 0x114($s0)
    MEM_W(0X114, ctx->r16) = ctx->f_odd[(1 - 1) * 2];
        goto L_00263DA4;
    // 0x00263D04: swc1        $f1, 0x114($s0)
    MEM_W(0X114, ctx->r16) = ctx->f_odd[(1 - 1) * 2];
L_00263D08:
    // 0x00263D08: lwc1        $f0, 0x58($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X58);
    // 0x00263D0C: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x00263D10: j           L_00263DA4
    // 0x00263D14: swc1        $f0, 0x114($s0)
    MEM_W(0X114, ctx->r16) = ctx->f0.u32l;
        goto L_00263DA4;
    // 0x00263D14: swc1        $f0, 0x114($s0)
    MEM_W(0X114, ctx->r16) = ctx->f0.u32l;
L_00263D18:
    // 0x00263D18: lwc1        $f1, 0x44($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X44);
    // 0x00263D1C: lwc1        $f0, 0x5C($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X5C);
    // 0x00263D20: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x00263D24: nop

    // 0x00263D28: bc1f        L_00263D40
    if (!c1cs) {
        // 0x00263D2C: nop
    
            goto L_00263D40;
    }
    // 0x00263D2C: nop

    // 0x00263D30: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00263D34: lwc1        $f0, 0x6D28($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6D28);
    // 0x00263D38: add.s       $f0, $f1, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x00263D3C: swc1        $f0, 0x44($s0)
    MEM_W(0X44, ctx->r16) = ctx->f0.u32l;
L_00263D40:
    // 0x00263D40: lwc1        $f1, 0x5C($s1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r17, 0X5C);
    // 0x00263D44: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x00263D48: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x00263D4C: nop

    // 0x00263D50: bc1f        L_00263D78
    if (!c1cs) {
        // 0x00263D54: nop
    
            goto L_00263D78;
    }
    // 0x00263D54: nop

    // 0x00263D58: lwc1        $f12, 0x44($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X44);
    // 0x00263D5C: jal         0x00266F50
    // 0x00263D60: div.s       $f12, $f12, $f1
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f12.fl = DIV_S(ctx->f12.fl, ctx->f1.fl);
    func_00266F50(rdram, ctx);
        goto after_4;
    // 0x00263D60: div.s       $f12, $f12, $f1
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f12.fl = DIV_S(ctx->f12.fl, ctx->f1.fl);
    after_4:
    // 0x00263D64: lwc1        $f1, 0x58($s1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r17, 0X58);
    // 0x00263D68: neg.s       $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = -ctx->f1.fl;
    // 0x00263D6C: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x00263D70: j           L_00263D84
    // 0x00263D74: swc1        $f1, 0x114($s0)
    MEM_W(0X114, ctx->r16) = ctx->f_odd[(1 - 1) * 2];
        goto L_00263D84;
    // 0x00263D74: swc1        $f1, 0x114($s0)
    MEM_W(0X114, ctx->r16) = ctx->f_odd[(1 - 1) * 2];
L_00263D78:
    // 0x00263D78: lwc1        $f0, 0x58($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X58);
    // 0x00263D7C: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x00263D80: swc1        $f0, 0x114($s0)
    MEM_W(0X114, ctx->r16) = ctx->f0.u32l;
L_00263D84:
    // 0x00263D84: lw          $v0, 0x24($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X24);
    // 0x00263D88: lui         $v1, 0x200
    ctx->r3 = S32(0X200 << 16);
    // 0x00263D8C: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x00263D90: beq         $v0, $zero, L_00263DA4
    if (ctx->r2 == 0) {
        // 0x00263D94: addiu       $v1, $zero, -0x2001
        ctx->r3 = ADD32(0, -0X2001);
            goto L_00263DA4;
    }
    // 0x00263D94: addiu       $v1, $zero, -0x2001
    ctx->r3 = ADD32(0, -0X2001);
    // 0x00263D98: lw          $v0, 0xD4($s2)
    ctx->r2 = MEM_W(ctx->r18, 0XD4);
    // 0x00263D9C: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x00263DA0: sw          $v0, 0xD4($s2)
    MEM_W(0XD4, ctx->r18) = ctx->r2;
L_00263DA4:
    // 0x00263DA4: lb          $v0, 0x37($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X37);
    // 0x00263DA8: beq         $s3, $v0, L_00263DB4
    if (ctx->r19 == ctx->r2) {
        // 0x00263DAC: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_00263DB4;
    }
    // 0x00263DAC: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x00263DB0: sb          $v0, 0x35($s0)
    MEM_B(0X35, ctx->r16) = ctx->r2;
L_00263DB4:
    // 0x00263DB4: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x00263DB8: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x00263DBC: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x00263DC0: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00263DC4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00263DC8: ldc1        $f21, 0x30($sp)
    CHECK_FR(ctx, 21);
    ctx->f21.u64 = LD(ctx->r29, 0X30);
    // 0x00263DCC: ldc1        $f20, 0x28($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X28);
    // 0x00263DD0: jr          $ra
    // 0x00263DD4: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x00263DD4: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_00426C74(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00426C74: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x00426C78: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x00426C7C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00426C80: jr          $ra
    // 0x00426C84: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00426C84: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0025EFF8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0025EFF8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0025EFFC: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x0025F000: lw          $v0, 0x14($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X14);
    // 0x0025F004: lhu         $v1, 0xB8($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0XB8);
    // 0x0025F008: addiu       $a2, $v0, 0x14
    ctx->r6 = ADD32(ctx->r2, 0X14);
    // 0x0025F00C: addiu       $v0, $zero, 0x1F9
    ctx->r2 = ADD32(0, 0X1F9);
    // 0x0025F010: beq         $v1, $v0, L_0025F020
    if (ctx->r3 == ctx->r2) {
        // 0x0025F014: addiu       $v0, $zero, 0x385
        ctx->r2 = ADD32(0, 0X385);
            goto L_0025F020;
    }
    // 0x0025F014: addiu       $v0, $zero, 0x385
    ctx->r2 = ADD32(0, 0X385);
    // 0x0025F018: bne         $v1, $v0, L_0025F058
    if (ctx->r3 != ctx->r2) {
        // 0x0025F01C: nop
    
            goto L_0025F058;
    }
    // 0x0025F01C: nop

L_0025F020:
    // 0x0025F020: lw          $v0, 0x8($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X8);
    // 0x0025F024: addiu       $v1, $v0, -0x2B16
    ctx->r3 = ADD32(ctx->r2, -0X2B16);
    // 0x0025F028: sltiu       $v0, $v1, 0x29
    ctx->r2 = ctx->r3 < 0X29 ? 1 : 0;
    // 0x0025F02C: beq         $v0, $zero, L_0025F048
    if (ctx->r2 == 0) {
        // 0x0025F030: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_0025F048;
    }
    // 0x0025F030: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x0025F034: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0025F038: addu        $at, $at, $v0
    gpr jr_addend_0025F040 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x0025F03C: lw          $v0, 0x7820($at)
    ctx->r2 = ADD32(ctx->r1, 0X7820);
    // 0x0025F040: jr          $v0
    // 0x0025F044: nop

    switch (jr_addend_0025F040 >> 2) {
        case 0: goto L_0025F058; break;
        case 1: goto L_0025F048; break;
        case 2: goto L_0025F048; break;
        case 3: goto L_0025F048; break;
        case 4: goto L_0025F048; break;
        case 5: goto L_0025F048; break;
        case 6: goto L_0025F048; break;
        case 7: goto L_0025F048; break;
        case 8: goto L_0025F048; break;
        case 9: goto L_0025F048; break;
        case 10: goto L_0025F058; break;
        case 11: goto L_0025F048; break;
        case 12: goto L_0025F048; break;
        case 13: goto L_0025F048; break;
        case 14: goto L_0025F048; break;
        case 15: goto L_0025F048; break;
        case 16: goto L_0025F048; break;
        case 17: goto L_0025F048; break;
        case 18: goto L_0025F048; break;
        case 19: goto L_0025F048; break;
        case 20: goto L_0025F058; break;
        case 21: goto L_0025F048; break;
        case 22: goto L_0025F048; break;
        case 23: goto L_0025F048; break;
        case 24: goto L_0025F048; break;
        case 25: goto L_0025F048; break;
        case 26: goto L_0025F048; break;
        case 27: goto L_0025F048; break;
        case 28: goto L_0025F048; break;
        case 29: goto L_0025F048; break;
        case 30: goto L_0025F058; break;
        case 31: goto L_0025F048; break;
        case 32: goto L_0025F048; break;
        case 33: goto L_0025F048; break;
        case 34: goto L_0025F048; break;
        case 35: goto L_0025F048; break;
        case 36: goto L_0025F048; break;
        case 37: goto L_0025F048; break;
        case 38: goto L_0025F048; break;
        case 39: goto L_0025F048; break;
        case 40: goto L_0025F058; break;
        default: switch_error(__func__, 0x0025F040, 0x800A7820);
    }
    // 0x0025F044: nop

L_0025F048:
    // 0x0025F048: jal         0x00259E60
    // 0x0025F04C: nop

    func_00259E60(rdram, ctx);
        goto after_0;
    // 0x0025F04C: nop

    after_0:
    // 0x0025F050: j           L_0025F05C
    // 0x0025F054: nop

        goto L_0025F05C;
    // 0x0025F054: nop

L_0025F058:
    // 0x0025F058: lw          $v0, 0x8($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X8);
L_0025F05C:
    // 0x0025F05C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x0025F060: jr          $ra
    // 0x0025F064: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0025F064: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00268A5C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00268A5C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00268A60: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x00268A64: lw          $a1, 0x10($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X10);
    // 0x00268A68: beq         $a1, $zero, L_00268AA4
    if (ctx->r5 == 0) {
        // 0x00268A6C: nop
    
            goto L_00268AA4;
    }
    // 0x00268A6C: nop

    // 0x00268A70: lhu         $v0, 0x2($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X2);
    // 0x00268A74: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x00268A78: beq         $v0, $zero, L_00268AA4
    if (ctx->r2 == 0) {
        // 0x00268A7C: nop
    
            goto L_00268AA4;
    }
    // 0x00268A7C: nop

    // 0x00268A80: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x00268A84: addiu       $a0, $a0, 0x7078
    ctx->r4 = ADD32(ctx->r4, 0X7078);
    // 0x00268A88: jal         0x0022425C
    // 0x00268A8C: nop

    func_0022425C(rdram, ctx);
        goto after_0;
    // 0x00268A8C: nop

    after_0:
    // 0x00268A90: beq         $v0, $zero, L_00268AA4
    if (ctx->r2 == 0) {
        // 0x00268A94: nop
    
            goto L_00268AA4;
    }
    // 0x00268A94: nop

    // 0x00268A98: lwc1        $f0, 0x20($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X20);
    // 0x00268A9C: j           L_00268AA8
    // 0x00268AA0: nop

        goto L_00268AA8;
    // 0x00268AA0: nop

L_00268AA4:
    // 0x00268AA4: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
L_00268AA8:
    // 0x00268AA8: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x00268AAC: jr          $ra
    // 0x00268AB0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00268AB0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00255F04(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00255F04: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00255F08: lui         $v1, 0xFF7F
    ctx->r3 = S32(0XFF7F << 16);
    // 0x00255F0C: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x00255F10: lwc1        $f0, 0xBFC($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0XBFC);
    // 0x00255F14: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00255F18: lwc1        $f1, 0x6D28($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X6D28);
    // 0x00255F1C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00255F20: sw          $v0, 0xC04($a0)
    MEM_W(0XC04, ctx->r4) = ctx->r2;
    // 0x00255F24: lw          $v0, 0xD4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XD4);
    // 0x00255F28: ori         $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 | 0XFFFF;
    // 0x00255F2C: sw          $zero, 0x18($a0)
    MEM_W(0X18, ctx->r4) = 0;
    // 0x00255F30: sw          $zero, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = 0;
    // 0x00255F34: sw          $zero, 0x20($a0)
    MEM_W(0X20, ctx->r4) = 0;
    // 0x00255F38: sw          $zero, 0x1298($a0)
    MEM_W(0X1298, ctx->r4) = 0;
    // 0x00255F3C: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x00255F40: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00255F44: lwc1        $f1, 0x71C0($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X71C0);
    // 0x00255F48: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x00255F4C: sw          $v0, 0xD4($a0)
    MEM_W(0XD4, ctx->r4) = ctx->r2;
    // 0x00255F50: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x00255F54: nop

    // 0x00255F58: bc1t        L_00255F80
    if (c1cs) {
        // 0x00255F5C: swc1        $f0, 0xBFC($a0)
        MEM_W(0XBFC, ctx->r4) = ctx->f0.u32l;
            goto L_00255F80;
    }
    // 0x00255F5C: swc1        $f0, 0xBFC($a0)
    MEM_W(0XBFC, ctx->r4) = ctx->f0.u32l;
    // 0x00255F60: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x00255F64: addiu       $v1, $v1, -0x5350
    ctx->r3 = ADD32(ctx->r3, -0X5350);
    // 0x00255F68: lw          $v0, 0x28($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X28);
    // 0x00255F6C: beq         $v0, $zero, L_00255FB8
    if (ctx->r2 == 0) {
        // 0x00255F70: nop
    
            goto L_00255FB8;
    }
    // 0x00255F70: nop

    // 0x00255F74: lw          $v0, 0x1C($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X1C);
    // 0x00255F78: beq         $v0, $zero, L_00255FB8
    if (ctx->r2 == 0) {
        // 0x00255F7C: nop
    
            goto L_00255FB8;
    }
    // 0x00255F7C: nop

L_00255F80:
    // 0x00255F80: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x00255F84: addiu       $v1, $v1, -0x5350
    ctx->r3 = ADD32(ctx->r3, -0X5350);
    // 0x00255F88: lw          $v0, 0x28($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X28);
    // 0x00255F8C: beq         $v0, $zero, L_00255FAC
    if (ctx->r2 == 0) {
        // 0x00255F90: addu        $a1, $a0, $zero
        ctx->r5 = ADD32(ctx->r4, 0);
            goto L_00255FAC;
    }
    // 0x00255F90: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x00255F94: lw          $v0, 0x1C($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X1C);
    // 0x00255F98: bne         $v0, $zero, L_00255FB0
    if (ctx->r2 != 0) {
        // 0x00255F9C: addiu       $a2, $zero, 0x10
        ctx->r6 = ADD32(0, 0X10);
            goto L_00255FB0;
    }
    // 0x00255F9C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x00255FA0: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x00255FA4: j           L_00255FB0
    // 0x00255FA8: addiu       $a2, $zero, 0x11
    ctx->r6 = ADD32(0, 0X11);
        goto L_00255FB0;
    // 0x00255FA8: addiu       $a2, $zero, 0x11
    ctx->r6 = ADD32(0, 0X11);
L_00255FAC:
    // 0x00255FAC: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
L_00255FB0:
    // 0x00255FB0: jal         0x0024E5F0
    // 0x00255FB4: nop

    func_0024E5F0(rdram, ctx);
        goto after_0;
    // 0x00255FB4: nop

    after_0:
L_00255FB8:
    // 0x00255FB8: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x00255FBC: jr          $ra
    // 0x00255FC0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00255FC0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0040C84C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0040C84C: addu        $v0, $v1, $s1
    ctx->r2 = ADD32(ctx->r3, ctx->r17);
;}
RECOMP_FUNC void func_002188B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002188B8: addiu       $sp, $sp, -0x138
    ctx->r29 = ADD32(ctx->r29, -0X138);
    // 0x002188BC: sw          $s5, 0x124($sp)
    MEM_W(0X124, ctx->r29) = ctx->r21;
    // 0x002188C0: addu        $s5, $a0, $zero
    ctx->r21 = ADD32(ctx->r4, 0);
    // 0x002188C4: sw          $s7, 0x12C($sp)
    MEM_W(0X12C, ctx->r29) = ctx->r23;
    // 0x002188C8: addu        $s7, $a1, $zero
    ctx->r23 = ADD32(ctx->r5, 0);
    // 0x002188CC: sw          $ra, 0x130($sp)
    MEM_W(0X130, ctx->r29) = ctx->r31;
    // 0x002188D0: sw          $s6, 0x128($sp)
    MEM_W(0X128, ctx->r29) = ctx->r22;
    // 0x002188D4: sw          $s4, 0x120($sp)
    MEM_W(0X120, ctx->r29) = ctx->r20;
    // 0x002188D8: sw          $s3, 0x11C($sp)
    MEM_W(0X11C, ctx->r29) = ctx->r19;
    // 0x002188DC: sw          $s2, 0x118($sp)
    MEM_W(0X118, ctx->r29) = ctx->r18;
    // 0x002188E0: sw          $s1, 0x114($sp)
    MEM_W(0X114, ctx->r29) = ctx->r17;
    // 0x002188E4: sw          $s0, 0x110($sp)
    MEM_W(0X110, ctx->r29) = ctx->r16;
    // 0x002188E8: lw          $v0, 0x0($s5)
    ctx->r2 = MEM_W(ctx->r21, 0X0);
    // 0x002188EC: lw          $v1, 0x24($s5)
    ctx->r3 = MEM_W(ctx->r21, 0X24);
    // 0x002188F0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x002188F4: sltu        $a0, $s7, $v1
    ctx->r4 = ctx->r23 < ctx->r3 ? 1 : 0;
    // 0x002188F8: bne         $a0, $zero, L_00218914
    if (ctx->r4 != 0) {
        // 0x002188FC: addiu       $s6, $v0, 0x6
        ctx->r22 = ADD32(ctx->r2, 0X6);
            goto L_00218914;
    }
    // 0x002188FC: addiu       $s6, $v0, 0x6
    ctx->r22 = ADD32(ctx->r2, 0X6);
    // 0x00218900: lw          $v0, 0x20($s5)
    ctx->r2 = MEM_W(ctx->r21, 0X20);
    // 0x00218904: addu        $v0, $v1, $v0
    ctx->r2 = ADD32(ctx->r3, ctx->r2);
    // 0x00218908: sltu        $v0, $s7, $v0
    ctx->r2 = ctx->r23 < ctx->r2 ? 1 : 0;
    // 0x0021890C: bne         $v0, $zero, L_002189C0
    if (ctx->r2 != 0) {
        // 0x00218910: nop
    
            goto L_002189C0;
    }
    // 0x00218910: nop

L_00218914:
    // 0x00218914: lw          $s2, 0x28($s5)
    ctx->r18 = MEM_W(ctx->r21, 0X28);
    // 0x00218918: addu        $s4, $v1, $zero
    ctx->r20 = ADD32(ctx->r3, 0);
    // 0x0021891C: mult        $s2, $s6
    result = S64(S32(ctx->r18)) * S64(S32(ctx->r22)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x00218920: lw          $v0, 0x20($s5)
    ctx->r2 = MEM_W(ctx->r21, 0X20);
    // 0x00218924: lw          $s1, 0xC($s5)
    ctx->r17 = MEM_W(ctx->r21, 0XC);
    // 0x00218928: addu        $s0, $s4, $v0
    ctx->r16 = ADD32(ctx->r20, ctx->r2);
    // 0x0021892C: addu        $v0, $s1, $zero
    ctx->r2 = ADD32(ctx->r17, 0);
    // 0x00218930: mflo        $a2
    ctx->r6 = lo;
    // 0x00218934: beq         $a0, $zero, L_00218958
    if (ctx->r4 == 0) {
        // 0x00218938: addu        $s1, $s1, $a2
        ctx->r17 = ADD32(ctx->r17, ctx->r6);
            goto L_00218958;
    }
    // 0x00218938: addu        $s1, $s1, $a2
    ctx->r17 = ADD32(ctx->r17, ctx->r6);
    // 0x0021893C: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x00218940: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    // 0x00218944: addu        $s4, $s2, $zero
    ctx->r20 = ADD32(ctx->r18, 0);
    // 0x00218948: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0021894C: jal         0x00217B64
    // 0x00218950: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    func_00217B64(rdram, ctx);
        goto after_0;
    // 0x00218950: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    after_0:
    // 0x00218954: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
L_00218958:
    // 0x00218958: addiu       $v1, $sp, 0x10
    ctx->r3 = ADD32(ctx->r29, 0X10);
    // 0x0021895C: sll         $v0, $s2, 2
    ctx->r2 = S32(ctx->r18 << 2);
    // 0x00218960: addu        $s3, $v0, $v1
    ctx->r19 = ADD32(ctx->r2, ctx->r3);
L_00218964:
    // 0x00218964: sltu        $v0, $s7, $s4
    ctx->r2 = ctx->r23 < ctx->r20 ? 1 : 0;
    // 0x00218968: bne         $v0, $zero, L_0021899C
    if (ctx->r2 != 0) {
        // 0x0021896C: addu        $s1, $s1, $s6
        ctx->r17 = ADD32(ctx->r17, ctx->r22);
            goto L_0021899C;
    }
    // 0x0021896C: addu        $s1, $s1, $s6
    ctx->r17 = ADD32(ctx->r17, ctx->r22);
    // 0x00218970: sltu        $v0, $s7, $s0
    ctx->r2 = ctx->r23 < ctx->r16 ? 1 : 0;
    // 0x00218974: beq         $v0, $zero, L_002189A0
    if (ctx->r2 == 0) {
        // 0x00218978: addiu       $s3, $s3, 0x4
        ctx->r19 = ADD32(ctx->r19, 0X4);
            goto L_002189A0;
    }
    // 0x00218978: addiu       $s3, $s3, 0x4
    ctx->r19 = ADD32(ctx->r19, 0X4);
    // 0x0021897C: lw          $v0, 0x28($s5)
    ctx->r2 = MEM_W(ctx->r21, 0X28);
    // 0x00218980: beq         $s2, $v0, L_002189C0
    if (ctx->r18 == ctx->r2) {
        // 0x00218984: addu        $a0, $s5, $zero
        ctx->r4 = ADD32(ctx->r21, 0);
            goto L_002189C0;
    }
    // 0x00218984: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    // 0x00218988: sw          $s4, 0x24($a0)
    MEM_W(0X24, ctx->r4) = ctx->r20;
    // 0x0021898C: jal         0x00217214
    // 0x00218990: sw          $s2, 0x28($a0)
    MEM_W(0X28, ctx->r4) = ctx->r18;
    func_00217214(rdram, ctx);
        goto after_1;
    // 0x00218990: sw          $s2, 0x28($a0)
    MEM_W(0X28, ctx->r4) = ctx->r18;
    after_1:
    // 0x00218994: j           L_002189C0
    // 0x00218998: nop

        goto L_002189C0;
    // 0x00218998: nop

L_0021899C:
    // 0x0021899C: addiu       $s3, $s3, 0x4
    ctx->r19 = ADD32(ctx->r19, 0X4);
L_002189A0:
    // 0x002189A0: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x002189A4: addu        $s4, $s0, $zero
    ctx->r20 = ADD32(ctx->r16, 0);
    // 0x002189A8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x002189AC: jal         0x00217B64
    // 0x002189B0: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    func_00217B64(rdram, ctx);
        goto after_2;
    // 0x002189B0: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    after_2:
    // 0x002189B4: sw          $v0, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r2;
    // 0x002189B8: j           L_00218964
    // 0x002189BC: addu        $s0, $s0, $v0
    ctx->r16 = ADD32(ctx->r16, ctx->r2);
        goto L_00218964;
    // 0x002189BC: addu        $s0, $s0, $v0
    ctx->r16 = ADD32(ctx->r16, ctx->r2);
L_002189C0:
    // 0x002189C0: lw          $ra, 0x130($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X130);
    // 0x002189C4: lw          $s7, 0x12C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X12C);
    // 0x002189C8: lw          $s6, 0x128($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X128);
    // 0x002189CC: lw          $s5, 0x124($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X124);
    // 0x002189D0: lw          $s4, 0x120($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X120);
    // 0x002189D4: lw          $s3, 0x11C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X11C);
    // 0x002189D8: lw          $s2, 0x118($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X118);
    // 0x002189DC: lw          $s1, 0x114($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X114);
    // 0x002189E0: lw          $s0, 0x110($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X110);
    // 0x002189E4: jr          $ra
    // 0x002189E8: addiu       $sp, $sp, 0x138
    ctx->r29 = ADD32(ctx->r29, 0X138);
    return;
    // 0x002189E8: addiu       $sp, $sp, 0x138
    ctx->r29 = ADD32(ctx->r29, 0X138);
;}
