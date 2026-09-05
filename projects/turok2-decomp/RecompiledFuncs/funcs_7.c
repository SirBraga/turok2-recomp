#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_00259E58(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00259E58: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x00259E5C: addiu       $v0, $zero, 0x90
    ctx->r2 = ADD32(0, 0X90);
;}
RECOMP_FUNC void func_0020A568(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0020A568: lui         $v1, 0x800E
    ctx->r3 = S32(0X800E << 16);
    // 0x0020A56C: lw          $v1, -0x71CC($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X71CC);
    // 0x0020A570: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x0020A574: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x0020A578: sw          $fp, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r30;
    // 0x0020A57C: sw          $s7, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r23;
    // 0x0020A580: sw          $s6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r22;
    // 0x0020A584: sw          $s5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r21;
    // 0x0020A588: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x0020A58C: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x0020A590: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x0020A594: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x0020A598: beq         $v1, $zero, L_0020A964
    if (ctx->r3 == 0) {
        // 0x0020A59C: sw          $s0, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r16;
            goto L_0020A964;
    }
    // 0x0020A59C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0020A5A0: lui         $v0, 0x800E
    ctx->r2 = S32(0X800E << 16);
    // 0x0020A5A4: lw          $v0, -0x71D8($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X71D8);
    // 0x0020A5A8: lw          $s0, 0x0($v0)
    ctx->r16 = MEM_W(ctx->r2, 0X0);
    // 0x0020A5AC: blez        $v1, L_0020A5F4
    if (SIGNED(ctx->r3) <= 0) {
        // 0x0020A5B0: addu        $s2, $zero, $zero
        ctx->r18 = ADD32(0, 0);
            goto L_0020A5F4;
    }
    // 0x0020A5B0: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    // 0x0020A5B4: lui         $s3, 0x800E
    ctx->r19 = S32(0X800E << 16);
    // 0x0020A5B8: addiu       $s3, $s3, -0x2A88
    ctx->r19 = ADD32(ctx->r19, -0X2A88);
    // 0x0020A5BC: sll         $v0, $s2, 4
    ctx->r2 = S32(ctx->r18 << 4);
L_0020A5C0:
    // 0x0020A5C0: addu        $s1, $v0, $s3
    ctx->r17 = ADD32(ctx->r2, ctx->r19);
    // 0x0020A5C4: lw          $v0, 0x8($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X8);
    // 0x0020A5C8: bne         $v0, $zero, L_0020A5DC
    if (ctx->r2 != 0) {
        // 0x0020A5CC: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_0020A5DC;
    }
    // 0x0020A5CC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0020A5D0: jal         0x002017D4
    // 0x0020A5D4: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_002017D4(rdram, ctx);
        goto after_0;
    // 0x0020A5D4: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_0:
    // 0x0020A5D8: sw          $v0, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->r2;
L_0020A5DC:
    // 0x0020A5DC: lui         $v0, 0x800E
    ctx->r2 = S32(0X800E << 16);
    // 0x0020A5E0: lw          $v0, -0x71CC($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X71CC);
    // 0x0020A5E4: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x0020A5E8: slt         $v0, $s2, $v0
    ctx->r2 = SIGNED(ctx->r18) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x0020A5EC: bne         $v0, $zero, L_0020A5C0
    if (ctx->r2 != 0) {
        // 0x0020A5F0: sll         $v0, $s2, 4
        ctx->r2 = S32(ctx->r18 << 4);
            goto L_0020A5C0;
    }
    // 0x0020A5F0: sll         $v0, $s2, 4
    ctx->r2 = S32(ctx->r18 << 4);
L_0020A5F4:
    // 0x0020A5F4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0020A5F8: jal         0x002017D4
    // 0x0020A5FC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_002017D4(rdram, ctx);
        goto after_1;
    // 0x0020A5FC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_1:
    // 0x0020A600: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x0020A604: lw          $a1, -0x71EC($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X71EC);
    // 0x0020A608: jal         0x002017D4
    // 0x0020A60C: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    func_002017D4(rdram, ctx);
        goto after_2;
    // 0x0020A60C: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    after_2:
    // 0x0020A610: addu        $s6, $v0, $zero
    ctx->r22 = ADD32(ctx->r2, 0);
    // 0x0020A614: lw          $s5, 0x0($s6)
    ctx->r21 = MEM_W(ctx->r22, 0X0);
    // 0x0020A618: blez        $s5, L_0020A95C
    if (SIGNED(ctx->r21) <= 0) {
        // 0x0020A61C: addu        $s4, $zero, $zero
        ctx->r20 = ADD32(0, 0);
            goto L_0020A95C;
    }
    // 0x0020A61C: addu        $s4, $zero, $zero
    ctx->r20 = ADD32(0, 0);
    // 0x0020A620: lui         $fp, 0x800E
    ctx->r30 = S32(0X800E << 16);
    // 0x0020A624: addiu       $fp, $fp, -0x71D4
    ctx->r30 = ADD32(ctx->r30, -0X71D4);
    // 0x0020A628: lui         $s7, 0x800E
    ctx->r23 = S32(0X800E << 16);
    // 0x0020A62C: addiu       $s7, $s7, -0x71E0
    ctx->r23 = ADD32(ctx->r23, -0X71E0);
    // 0x0020A630: addu        $a0, $s6, $zero
    ctx->r4 = ADD32(ctx->r22, 0);
L_0020A634:
    // 0x0020A634: jal         0x002017D4
    // 0x0020A638: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    func_002017D4(rdram, ctx);
        goto after_3;
    // 0x0020A638: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    after_3:
    // 0x0020A63C: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x0020A640: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0020A644: jal         0x002017D4
    // 0x0020A648: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_002017D4(rdram, ctx);
        goto after_4;
    // 0x0020A648: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_4:
    // 0x0020A64C: addu        $s3, $v0, $zero
    ctx->r19 = ADD32(ctx->r2, 0);
    // 0x0020A650: lw          $v0, 0x4($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X4);
    // 0x0020A654: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x0020A658: lbu         $a0, -0x71ED($a0)
    ctx->r4 = MEM_BU(ctx->r4, -0X71ED);
    // 0x0020A65C: lw          $v1, 0x0($s3)
    ctx->r3 = MEM_W(ctx->r19, 0X0);
    // 0x0020A660: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x0020A664: andi        $v1, $v1, 0x700
    ctx->r3 = ctx->r3 & 0X700;
    // 0x0020A668: beq         $v1, $zero, L_0020A6BC
    if (ctx->r3 == 0) {
        // 0x0020A66C: or          $a2, $v0, $a0
        ctx->r6 = ctx->r2 | ctx->r4;
            goto L_0020A6BC;
    }
    // 0x0020A66C: or          $a2, $v0, $a0
    ctx->r6 = ctx->r2 | ctx->r4;
    // 0x0020A670: lui         $v1, 0x800E
    ctx->r3 = S32(0X800E << 16);
    // 0x0020A674: lw          $v1, -0x71D0($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X71D0);
    // 0x0020A678: beq         $v1, $zero, L_0020A6AC
    if (ctx->r3 == 0) {
        // 0x0020A67C: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_0020A6AC;
    }
    // 0x0020A67C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
L_0020A680:
    // 0x0020A680: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x0020A684: beq         $v0, $a2, L_0020A6FC
    if (ctx->r2 == ctx->r6) {
        // 0x0020A688: sltu        $v0, $a2, $v0
        ctx->r2 = ctx->r6 < ctx->r2 ? 1 : 0;
            goto L_0020A6FC;
    }
    // 0x0020A688: sltu        $v0, $a2, $v0
    ctx->r2 = ctx->r6 < ctx->r2 ? 1 : 0;
    // 0x0020A68C: beq         $v0, $zero, L_0020A6A0
    if (ctx->r2 == 0) {
        // 0x0020A690: addu        $a0, $v1, $zero
        ctx->r4 = ADD32(ctx->r3, 0);
            goto L_0020A6A0;
    }
    // 0x0020A690: addu        $a0, $v1, $zero
    ctx->r4 = ADD32(ctx->r3, 0);
    // 0x0020A694: lw          $v1, 0x18($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X18);
    // 0x0020A698: j           L_0020A6A4
    // 0x0020A69C: nop

        goto L_0020A6A4;
    // 0x0020A69C: nop

L_0020A6A0:
    // 0x0020A6A0: lw          $v1, 0x1C($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X1C);
L_0020A6A4:
    // 0x0020A6A4: bne         $v1, $zero, L_0020A680
    if (ctx->r3 != 0) {
        // 0x0020A6A8: nop
    
            goto L_0020A680;
    }
    // 0x0020A6A8: nop

L_0020A6AC:
    // 0x0020A6AC: j           L_0020A700
    // 0x0020A6B0: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
        goto L_0020A700;
    // 0x0020A6B0: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
L_0020A6B4:
    // 0x0020A6B4: j           L_0020A700
    // 0x0020A6B8: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
        goto L_0020A700;
    // 0x0020A6B8: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
L_0020A6BC:
    // 0x0020A6BC: lui         $v0, 0x800E
    ctx->r2 = S32(0X800E << 16);
    // 0x0020A6C0: lw          $v0, -0x71E8($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X71E8);
    // 0x0020A6C4: beq         $v0, $zero, L_0020A6FC
    if (ctx->r2 == 0) {
        // 0x0020A6C8: addu        $v1, $zero, $zero
        ctx->r3 = ADD32(0, 0);
            goto L_0020A6FC;
    }
    // 0x0020A6C8: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
L_0020A6CC:
    // 0x0020A6CC: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
    // 0x0020A6D0: beq         $a0, $a2, L_0020A6B4
    if (ctx->r4 == ctx->r6) {
        // 0x0020A6D4: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_0020A6B4;
    }
    // 0x0020A6D4: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x0020A6D8: sltu        $v0, $a2, $a0
    ctx->r2 = ctx->r6 < ctx->r4 ? 1 : 0;
    // 0x0020A6DC: beq         $v0, $zero, L_0020A6F0
    if (ctx->r2 == 0) {
        // 0x0020A6E0: nop
    
            goto L_0020A6F0;
    }
    // 0x0020A6E0: nop

    // 0x0020A6E4: lw          $v0, 0x18($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X18);
    // 0x0020A6E8: j           L_0020A6F4
    // 0x0020A6EC: nop

        goto L_0020A6F4;
    // 0x0020A6EC: nop

L_0020A6F0:
    // 0x0020A6F0: lw          $v0, 0x1C($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X1C);
L_0020A6F4:
    // 0x0020A6F4: bne         $v0, $zero, L_0020A6CC
    if (ctx->r2 != 0) {
        // 0x0020A6F8: nop
    
            goto L_0020A6CC;
    }
    // 0x0020A6F8: nop

L_0020A6FC:
    // 0x0020A6FC: addu        $a1, $v1, $zero
    ctx->r5 = ADD32(ctx->r3, 0);
L_0020A700:
    // 0x0020A700: beq         $a1, $zero, L_0020A714
    if (ctx->r5 == 0) {
        // 0x0020A704: nop
    
            goto L_0020A714;
    }
    // 0x0020A704: nop

    // 0x0020A708: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x0020A70C: beq         $v0, $a2, L_0020A880
    if (ctx->r2 == ctx->r6) {
        // 0x0020A710: addu        $s0, $a1, $zero
        ctx->r16 = ADD32(ctx->r5, 0);
            goto L_0020A880;
    }
    // 0x0020A710: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
L_0020A714:
    // 0x0020A714: lui         $v1, 0x800E
    ctx->r3 = S32(0X800E << 16);
    // 0x0020A718: lw          $v1, -0x71D4($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X71D4);
    // 0x0020A71C: addiu       $v0, $zero, 0x64
    ctx->r2 = ADD32(0, 0X64);
    // 0x0020A720: beq         $v1, $v0, L_0020A95C
    if (ctx->r3 == ctx->r2) {
        // 0x0020A724: nop
    
            goto L_0020A95C;
    }
    // 0x0020A724: nop

    // 0x0020A728: lw          $a0, 0x0($fp)
    ctx->r4 = MEM_W(ctx->r30, 0X0);
    // 0x0020A72C: lui         $v0, 0x800E
    ctx->r2 = S32(0X800E << 16);
    // 0x0020A730: addiu       $v0, $v0, -0x3B10
    ctx->r2 = ADD32(ctx->r2, -0X3B10);
    // 0x0020A734: sll         $v1, $a0, 5
    ctx->r3 = S32(ctx->r4 << 5);
    // 0x0020A738: addu        $s0, $v1, $v0
    ctx->r16 = ADD32(ctx->r3, ctx->r2);
    // 0x0020A73C: sw          $a2, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r6;
    // 0x0020A740: sw          $s3, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r19;
    // 0x0020A744: sw          $zero, 0xC($s0)
    MEM_W(0XC, ctx->r16) = 0;
    // 0x0020A748: sw          $zero, 0x8($s0)
    MEM_W(0X8, ctx->r16) = 0;
    // 0x0020A74C: lw          $v0, 0x0($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X0);
    // 0x0020A750: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x0020A754: andi        $v0, $v0, 0x700
    ctx->r2 = ctx->r2 & 0X700;
    // 0x0020A758: beq         $v0, $zero, L_0020A7D8
    if (ctx->r2 == 0) {
        // 0x0020A75C: sw          $a0, 0x0($fp)
        MEM_W(0X0, ctx->r30) = ctx->r4;
            goto L_0020A7D8;
    }
    // 0x0020A75C: sw          $a0, 0x0($fp)
    MEM_W(0X0, ctx->r30) = ctx->r4;
    // 0x0020A760: beq         $a1, $zero, L_0020A7C0
    if (ctx->r5 == 0) {
        // 0x0020A764: nop
    
            goto L_0020A7C0;
    }
    // 0x0020A764: nop

    // 0x0020A768: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x0020A76C: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x0020A770: sltu        $v0, $v0, $v1
    ctx->r2 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x0020A774: beql        $v0, $zero, L_0020A838
    if (ctx->r2 == 0) {
        // 0x0020A778: sw          $s0, 0x1C($a1)
        MEM_W(0X1C, ctx->r5) = ctx->r16;
            goto L_0020A838;
    }
    goto skip_0;
    // 0x0020A778: sw          $s0, 0x1C($a1)
    MEM_W(0X1C, ctx->r5) = ctx->r16;
    skip_0:
    // 0x0020A77C: sw          $s0, 0x18($a1)
    MEM_W(0X18, ctx->r5) = ctx->r16;
    // 0x0020A780: sw          $zero, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = 0;
    // 0x0020A784: sw          $zero, 0x18($s0)
    MEM_W(0X18, ctx->r16) = 0;
    // 0x0020A788: sw          $a1, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r5;
    // 0x0020A78C: lw          $v0, 0x10($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X10);
    // 0x0020A790: sw          $v0, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r2;
    // 0x0020A794: lw          $v0, 0x10($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X10);
    // 0x0020A798: bnel        $v0, $zero, L_0020A7A0
    if (ctx->r2 != 0) {
        // 0x0020A79C: sw          $s0, 0x14($v0)
        MEM_W(0X14, ctx->r2) = ctx->r16;
            goto L_0020A7A0;
    }
    goto skip_1;
    // 0x0020A79C: sw          $s0, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->r16;
    skip_1:
L_0020A7A0:
    // 0x0020A7A0: lui         $v0, 0x800E
    ctx->r2 = S32(0X800E << 16);
    // 0x0020A7A4: lw          $v0, -0x71C8($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X71C8);
    // 0x0020A7A8: bne         $v0, $a1, L_0020A880
    if (ctx->r2 != ctx->r5) {
        // 0x0020A7AC: sw          $s0, 0x10($a1)
        MEM_W(0X10, ctx->r5) = ctx->r16;
            goto L_0020A880;
    }
    // 0x0020A7AC: sw          $s0, 0x10($a1)
    MEM_W(0X10, ctx->r5) = ctx->r16;
    // 0x0020A7B0: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x0020A7B4: sw          $s0, -0x71C8($at)
    MEM_W(-0X71C8, ctx->r1) = ctx->r16;
    // 0x0020A7B8: j           L_0020A884
    // 0x0020A7BC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
        goto L_0020A884;
    // 0x0020A7BC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
L_0020A7C0:
    // 0x0020A7C0: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x0020A7C4: sw          $s0, -0x71D0($at)
    MEM_W(-0X71D0, ctx->r1) = ctx->r16;
    // 0x0020A7C8: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x0020A7CC: sw          $s0, -0x71C8($at)
    MEM_W(-0X71C8, ctx->r1) = ctx->r16;
    // 0x0020A7D0: j           L_0020A874
    // 0x0020A7D4: sw          $zero, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = 0;
        goto L_0020A874;
    // 0x0020A7D4: sw          $zero, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = 0;
L_0020A7D8:
    // 0x0020A7D8: beq         $a1, $zero, L_0020A860
    if (ctx->r5 == 0) {
        // 0x0020A7DC: nop
    
            goto L_0020A860;
    }
    // 0x0020A7DC: nop

    // 0x0020A7E0: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x0020A7E4: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x0020A7E8: sltu        $v0, $v0, $v1
    ctx->r2 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x0020A7EC: beql        $v0, $zero, L_0020A838
    if (ctx->r2 == 0) {
        // 0x0020A7F0: sw          $s0, 0x1C($a1)
        MEM_W(0X1C, ctx->r5) = ctx->r16;
            goto L_0020A838;
    }
    goto skip_2;
    // 0x0020A7F0: sw          $s0, 0x1C($a1)
    MEM_W(0X1C, ctx->r5) = ctx->r16;
    skip_2:
    // 0x0020A7F4: sw          $s0, 0x18($a1)
    MEM_W(0X18, ctx->r5) = ctx->r16;
    // 0x0020A7F8: sw          $zero, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = 0;
    // 0x0020A7FC: sw          $zero, 0x18($s0)
    MEM_W(0X18, ctx->r16) = 0;
    // 0x0020A800: sw          $a1, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r5;
    // 0x0020A804: lw          $v0, 0x10($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X10);
    // 0x0020A808: sw          $v0, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r2;
    // 0x0020A80C: lw          $v0, 0x10($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X10);
    // 0x0020A810: bnel        $v0, $zero, L_0020A818
    if (ctx->r2 != 0) {
        // 0x0020A814: sw          $s0, 0x14($v0)
        MEM_W(0X14, ctx->r2) = ctx->r16;
            goto L_0020A818;
    }
    goto skip_3;
    // 0x0020A814: sw          $s0, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->r16;
    skip_3:
L_0020A818:
    // 0x0020A818: lui         $v0, 0x800E
    ctx->r2 = S32(0X800E << 16);
    // 0x0020A81C: lw          $v0, -0x71E4($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X71E4);
    // 0x0020A820: bne         $v0, $a1, L_0020A880
    if (ctx->r2 != ctx->r5) {
        // 0x0020A824: sw          $s0, 0x10($a1)
        MEM_W(0X10, ctx->r5) = ctx->r16;
            goto L_0020A880;
    }
    // 0x0020A824: sw          $s0, 0x10($a1)
    MEM_W(0X10, ctx->r5) = ctx->r16;
    // 0x0020A828: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x0020A82C: sw          $s0, -0x71E4($at)
    MEM_W(-0X71E4, ctx->r1) = ctx->r16;
    // 0x0020A830: j           L_0020A884
    // 0x0020A834: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
        goto L_0020A884;
    // 0x0020A834: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
L_0020A838:
    // 0x0020A838: sw          $zero, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = 0;
    // 0x0020A83C: sw          $zero, 0x18($s0)
    MEM_W(0X18, ctx->r16) = 0;
    // 0x0020A840: lw          $v0, 0x14($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X14);
    // 0x0020A844: sw          $v0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r2;
    // 0x0020A848: lw          $v0, 0x14($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X14);
    // 0x0020A84C: bnel        $v0, $zero, L_0020A854
    if (ctx->r2 != 0) {
        // 0x0020A850: sw          $s0, 0x10($v0)
        MEM_W(0X10, ctx->r2) = ctx->r16;
            goto L_0020A854;
    }
    goto skip_4;
    // 0x0020A850: sw          $s0, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r16;
    skip_4:
L_0020A854:
    // 0x0020A854: sw          $a1, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r5;
    // 0x0020A858: j           L_0020A880
    // 0x0020A85C: sw          $s0, 0x14($a1)
    MEM_W(0X14, ctx->r5) = ctx->r16;
        goto L_0020A880;
    // 0x0020A85C: sw          $s0, 0x14($a1)
    MEM_W(0X14, ctx->r5) = ctx->r16;
L_0020A860:
    // 0x0020A860: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x0020A864: sw          $s0, -0x71E8($at)
    MEM_W(-0X71E8, ctx->r1) = ctx->r16;
    // 0x0020A868: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x0020A86C: sw          $s0, -0x71E4($at)
    MEM_W(-0X71E4, ctx->r1) = ctx->r16;
    // 0x0020A870: sw          $zero, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = 0;
L_0020A874:
    // 0x0020A874: sw          $zero, 0x18($s0)
    MEM_W(0X18, ctx->r16) = 0;
    // 0x0020A878: sw          $zero, 0x14($s0)
    MEM_W(0X14, ctx->r16) = 0;
    // 0x0020A87C: sw          $zero, 0x10($s0)
    MEM_W(0X10, ctx->r16) = 0;
L_0020A880:
    // 0x0020A880: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
L_0020A884:
    // 0x0020A884: jal         0x002017D4
    // 0x0020A888: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_002017D4(rdram, ctx);
        goto after_5;
    // 0x0020A888: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_5:
    // 0x0020A88C: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    // 0x0020A890: lui         $v1, 0x800E
    ctx->r3 = S32(0X800E << 16);
    // 0x0020A894: lw          $v1, -0x71CC($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X71CC);
    // 0x0020A898: blez        $v1, L_0020A94C
    if (SIGNED(ctx->r3) <= 0) {
        // 0x0020A89C: addu        $a2, $v0, $zero
        ctx->r6 = ADD32(ctx->r2, 0);
            goto L_0020A94C;
    }
    // 0x0020A89C: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    // 0x0020A8A0: lui         $a3, 0x800E
    ctx->r7 = S32(0X800E << 16);
    // 0x0020A8A4: addiu       $a3, $a3, -0x71C0
    ctx->r7 = ADD32(ctx->r7, -0X71C0);
    // 0x0020A8A8: addu        $a1, $v1, $zero
    ctx->r5 = ADD32(ctx->r3, 0);
    // 0x0020A8AC: sll         $v0, $s2, 4
    ctx->r2 = S32(ctx->r18 << 4);
L_0020A8B0:
    // 0x0020A8B0: lui         $v1, 0x800E
    ctx->r3 = S32(0X800E << 16);
    // 0x0020A8B4: lw          $v1, -0x71E0($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X71E0);
    // 0x0020A8B8: lui         $t0, 0x800E
    ctx->r8 = S32(0X800E << 16);
    // 0x0020A8BC: addiu       $t0, $t0, -0x2A88
    ctx->r8 = ADD32(ctx->r8, -0X2A88);
    // 0x0020A8C0: addu        $s1, $v0, $t0
    ctx->r17 = ADD32(ctx->r2, ctx->r8);
    // 0x0020A8C4: addiu       $t0, $zero, 0x1F4
    ctx->r8 = ADD32(0, 0X1F4);
    // 0x0020A8C8: beql        $v1, $t0, L_0020A940
    if (ctx->r3 == ctx->r8) {
        // 0x0020A8CC: addiu       $s2, $s2, 0x1
        ctx->r18 = ADD32(ctx->r18, 0X1);
            goto L_0020A940;
    }
    goto skip_5;
    // 0x0020A8CC: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    skip_5:
    // 0x0020A8D0: lw          $v1, 0x0($s7)
    ctx->r3 = MEM_W(ctx->r23, 0X0);
    // 0x0020A8D4: sll         $v0, $v1, 3
    ctx->r2 = S32(ctx->r3 << 3);
    // 0x0020A8D8: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x0020A8DC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x0020A8E0: addu        $a0, $v0, $a3
    ctx->r4 = ADD32(ctx->r2, ctx->r7);
    // 0x0020A8E4: sw          $a2, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r6;
    // 0x0020A8E8: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x0020A8EC: sw          $v0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r2;
    // 0x0020A8F0: lw          $v0, 0x4($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X4);
    // 0x0020A8F4: sw          $v0, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r2;
    // 0x0020A8F8: lw          $v0, 0x8($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X8);
    // 0x0020A8FC: sw          $v0, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->r2;
    // 0x0020A900: lhu         $v0, 0x18($s3)
    ctx->r2 = MEM_HU(ctx->r19, 0X18);
    // 0x0020A904: sh          $v0, 0x10($a0)
    MEM_H(0X10, ctx->r4) = ctx->r2;
    // 0x0020A908: lhu         $v0, 0x1A($s3)
    ctx->r2 = MEM_HU(ctx->r19, 0X1A);
    // 0x0020A90C: sh          $v0, 0x12($a0)
    MEM_H(0X12, ctx->r4) = ctx->r2;
    // 0x0020A910: lw          $v0, 0xC($s1)
    ctx->r2 = MEM_W(ctx->r17, 0XC);
    // 0x0020A914: sw          $zero, 0x18($a0)
    MEM_W(0X18, ctx->r4) = 0;
    // 0x0020A918: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    // 0x0020A91C: lw          $v0, 0xC($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC);
    // 0x0020A920: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x0020A924: beq         $v0, $zero, L_0020A934
    if (ctx->r2 == 0) {
        // 0x0020A928: sw          $v1, 0x0($s7)
        MEM_W(0X0, ctx->r23) = ctx->r3;
            goto L_0020A934;
    }
    // 0x0020A928: sw          $v1, 0x0($s7)
    MEM_W(0X0, ctx->r23) = ctx->r3;
    // 0x0020A92C: j           L_0020A938
    // 0x0020A930: sw          $a0, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->r4;
        goto L_0020A938;
    // 0x0020A930: sw          $a0, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->r4;
L_0020A934:
    // 0x0020A934: sw          $a0, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r4;
L_0020A938:
    // 0x0020A938: sw          $a0, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r4;
    // 0x0020A93C: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
L_0020A940:
    // 0x0020A940: slt         $v0, $s2, $a1
    ctx->r2 = SIGNED(ctx->r18) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x0020A944: bne         $v0, $zero, L_0020A8B0
    if (ctx->r2 != 0) {
        // 0x0020A948: sll         $v0, $s2, 4
        ctx->r2 = S32(ctx->r18 << 4);
            goto L_0020A8B0;
    }
    // 0x0020A948: sll         $v0, $s2, 4
    ctx->r2 = S32(ctx->r18 << 4);
L_0020A94C:
    // 0x0020A94C: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
    // 0x0020A950: slt         $v0, $s4, $s5
    ctx->r2 = SIGNED(ctx->r20) < SIGNED(ctx->r21) ? 1 : 0;
    // 0x0020A954: bne         $v0, $zero, L_0020A634
    if (ctx->r2 != 0) {
        // 0x0020A958: addu        $a0, $s6, $zero
        ctx->r4 = ADD32(ctx->r22, 0);
            goto L_0020A634;
    }
    // 0x0020A958: addu        $a0, $s6, $zero
    ctx->r4 = ADD32(ctx->r22, 0);
L_0020A95C:
    // 0x0020A95C: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x0020A960: sw          $zero, -0x71CC($at)
    MEM_W(-0X71CC, ctx->r1) = 0;
L_0020A964:
    // 0x0020A964: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x0020A968: lw          $fp, 0x30($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X30);
    // 0x0020A96C: lw          $s7, 0x2C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X2C);
    // 0x0020A970: lw          $s6, 0x28($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X28);
    // 0x0020A974: lw          $s5, 0x24($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X24);
    // 0x0020A978: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x0020A97C: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x0020A980: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x0020A984: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x0020A988: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0020A98C: jr          $ra
    // 0x0020A990: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x0020A990: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_00450418(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00450418: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x0045041C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00450420: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x00450424: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x00450428: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x0045042C: lw          $v0, 0x14($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X14);
    // 0x00450430: lw          $v0, 0xC($v0)
    ctx->r2 = MEM_W(ctx->r2, 0XC);
    // 0x00450434: beq         $v0, $zero, L_00450448
    if (ctx->r2 == 0) {
        // 0x00450438: addu        $s1, $a0, $zero
        ctx->r17 = ADD32(ctx->r4, 0);
            goto L_00450448;
    }
    // 0x00450438: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x0045043C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00450440: jalr        $v0
    // 0x00450444: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x00450444: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_0:
L_00450448:
    // 0x00450448: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0045044C: lw          $v0, 0x20($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X20);
    // 0x00450450: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x00450454: sw          $zero, 0xB0($v0)
    MEM_W(0XB0, ctx->r2) = 0;
    // 0x00450458: sw          $zero, 0xB4($v0)
    MEM_W(0XB4, ctx->r2) = 0;
    // 0x0045045C: jal         0x00200738
    // 0x00450460: sw          $zero, 0xBC($v0)
    MEM_W(0XBC, ctx->r2) = 0;
    func_00200738(rdram, ctx);
        goto after_1;
    // 0x00450460: sw          $zero, 0xBC($v0)
    MEM_W(0XBC, ctx->r2) = 0;
    after_1:
    // 0x00450464: lw          $a1, 0x8($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X8);
    // 0x00450468: jal         0x002052D8
    // 0x0045046C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_002052D8(rdram, ctx);
        goto after_2;
    // 0x0045046C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_2:
    // 0x00450470: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x00450474: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00450478: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0045047C: jr          $ra
    // 0x00450480: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00450480: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_00256B34(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00256B34: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x00256B38: sll         $a1, $a1, 2
    ctx->r5 = S32(ctx->r5 << 2);
    // 0x00256B3C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00256B40: addu        $at, $at, $a1
    ctx->r1 = ADD32(ctx->r1, ctx->r5);
    // 0x00256B44: lw          $v1, -0x9E8($at)
    ctx->r3 = MEM_W(ctx->r1, -0X9E8);
L_00256B48:
    // 0x00256B48: lw          $v0, 0x20($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X20);
    // 0x00256B4C: beq         $v0, $zero, L_00256B68
    if (ctx->r2 == 0) {
        // 0x00256B50: nop
    
            goto L_00256B68;
    }
    // 0x00256B50: nop

    // 0x00256B54: lh          $v0, 0x4($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X4);
    // 0x00256B58: bne         $v0, $a2, L_00256B70
    if (ctx->r2 != ctx->r6) {
        // 0x00256B5C: addiu       $a0, $a0, 0x1
        ctx->r4 = ADD32(ctx->r4, 0X1);
            goto L_00256B70;
    }
    // 0x00256B5C: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x00256B60: jr          $ra
    // 0x00256B64: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x00256B64: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_00256B68:
    // 0x00256B68: jr          $ra
    // 0x00256B6C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x00256B6C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_00256B70:
    // 0x00256B70: slti        $v0, $a0, 0x3
    ctx->r2 = SIGNED(ctx->r4) < 0X3 ? 1 : 0;
    // 0x00256B74: bne         $v0, $zero, L_00256B48
    if (ctx->r2 != 0) {
        // 0x00256B78: addiu       $v1, $v1, 0x4
        ctx->r3 = ADD32(ctx->r3, 0X4);
            goto L_00256B48;
    }
    // 0x00256B78: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x00256B7C: jr          $ra
    // 0x00256B80: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x00256B80: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void func_00440D6C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00440D6C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00440D70: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x00440D74: jal         0x00284204
    // 0x00440D78: nop

    func_00284204(rdram, ctx);
        goto after_0;
    // 0x00440D78: nop

    after_0:
    // 0x00440D7C: beq         $v0, $zero, L_00440DB4
    if (ctx->r2 == 0) {
        // 0x00440D80: nop
    
            goto L_00440DB4;
    }
    // 0x00440D80: nop

    // 0x00440D84: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x00440D88: addiu       $a0, $a0, -0x6790
    ctx->r4 = ADD32(ctx->r4, -0X6790);
    // 0x00440D8C: jal         0x002532A8
    // 0x00440D90: nop

    func_002532A8(rdram, ctx);
        goto after_1;
    // 0x00440D90: nop

    after_1:
    // 0x00440D94: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x00440D98: beq         $a0, $zero, L_00440DB4
    if (ctx->r4 == 0) {
        // 0x00440D9C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_00440DB4;
    }
    // 0x00440D9C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00440DA0: sw          $v0, 0x9F0($a0)
    MEM_W(0X9F0, ctx->r4) = ctx->r2;
    // 0x00440DA4: addiu       $a1, $zero, 0x1F40
    ctx->r5 = ADD32(0, 0X1F40);
    // 0x00440DA8: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x00440DAC: jal         0x00248BA8
    // 0x00440DB0: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_00248BA8(rdram, ctx);
        goto after_2;
    // 0x00440DB0: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_2:
L_00440DB4:
    // 0x00440DB4: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x00440DB8: jr          $ra
    // 0x00440DBC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00440DBC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00264618(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00264618: lw          $v0, 0x14($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X14);
    // 0x0026461C: lw          $v0, 0x38($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X38);
    // 0x00264620: andi        $v0, $v0, 0x80
    ctx->r2 = ctx->r2 & 0X80;
    // 0x00264624: bne         $v0, $zero, L_0026463C
    if (ctx->r2 != 0) {
        // 0x00264628: lui         $v1, 0xEFFF
        ctx->r3 = S32(0XEFFF << 16);
            goto L_0026463C;
    }
    // 0x00264628: lui         $v1, 0xEFFF
    ctx->r3 = S32(0XEFFF << 16);
    // 0x0026462C: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x00264630: ori         $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 | 0XFFFF;
    // 0x00264634: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x00264638: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
L_0026463C:
    // 0x0026463C: jr          $ra
    // 0x00264640: nop

    return;
    // 0x00264640: nop

;}
RECOMP_FUNC void func_002288F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002288F8: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x002288FC: sw          $zero, -0x3200($at)
    MEM_W(-0X3200, ctx->r1) = 0;
    // 0x00228900: jr          $ra
    // 0x00228904: nop

    return;
    // 0x00228904: nop

;}
RECOMP_FUNC void func_0025F4B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0025F4B4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0025F4B8: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x0025F4BC: lb          $v0, 0xC7($a1)
    ctx->r2 = MEM_B(ctx->r5, 0XC7);
    // 0x0025F4C0: beq         $v0, $zero, L_0025F4D0
    if (ctx->r2 == 0) {
        // 0x0025F4C4: nop
    
            goto L_0025F4D0;
    }
    // 0x0025F4C4: nop

    // 0x0025F4C8: jal         0x00243414
    // 0x0025F4CC: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    func_00243414(rdram, ctx);
        goto after_0;
    // 0x0025F4CC: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    after_0:
L_0025F4D0:
    // 0x0025F4D0: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x0025F4D4: jr          $ra
    // 0x0025F4D8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0025F4D8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00443BB4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00443BB4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x00443BB8: lui         $a2, 0x8013
    ctx->r6 = S32(0X8013 << 16);
    // 0x00443BBC: addiu       $a2, $a2, -0x490
    ctx->r6 = ADD32(ctx->r6, -0X490);
    // 0x00443BC0: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x00443BC4: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x00443BC8: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x00443BCC: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00443BD0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00443BD4: lw          $v0, 0x4($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X4);
    // 0x00443BD8: blez        $v0, L_00443C14
    if (SIGNED(ctx->r2) <= 0) {
        // 0x00443BDC: addu        $v1, $zero, $zero
        ctx->r3 = ADD32(0, 0);
            goto L_00443C14;
    }
    // 0x00443BDC: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
    // 0x00443BE0: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00443BE4: lwc1        $f0, 0x878($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X878);
    // 0x00443BE8: addu        $a0, $a2, $zero
    ctx->r4 = ADD32(ctx->r6, 0);
L_00443BEC:
    // 0x00443BEC: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x00443BF0: swc1        $f0, 0x254($v0)
    MEM_W(0X254, ctx->r2) = ctx->f0.u32l;
    // 0x00443BF4: sw          $zero, 0x250($v0)
    MEM_W(0X250, ctx->r2) = 0;
    // 0x00443BF8: lw          $v0, 0x4($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X4);
    // 0x00443BFC: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x00443C00: slt         $v0, $v1, $v0
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x00443C04: bne         $v0, $zero, L_00443BEC
    if (ctx->r2 != 0) {
        // 0x00443C08: addiu       $a0, $a0, 0x4
        ctx->r4 = ADD32(ctx->r4, 0X4);
            goto L_00443BEC;
    }
    // 0x00443C08: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x00443C0C: lui         $a2, 0x8013
    ctx->r6 = S32(0X8013 << 16);
    // 0x00443C10: addiu       $a2, $a2, -0x490
    ctx->r6 = ADD32(ctx->r6, -0X490);
L_00443C14:
    // 0x00443C14: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x00443C18: sw          $v0, 0x688($a2)
    MEM_W(0X688, ctx->r6) = ctx->r2;
    // 0x00443C1C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x00443C20: sw          $v0, 0x65C($a2)
    MEM_W(0X65C, ctx->r6) = ctx->r2;
    // 0x00443C24: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x00443C28: lw          $v1, 0x1CC($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X1CC);
    // 0x00443C2C: addiu       $v0, $zero, 0x600
    ctx->r2 = ADD32(0, 0X600);
    // 0x00443C30: sw          $v0, 0x68C($a2)
    MEM_W(0X68C, ctx->r6) = ctx->r2;
    // 0x00443C34: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x00443C38: sw          $zero, 0x1EC($at)
    MEM_W(0X1EC, ctx->r1) = 0;
    // 0x00443C3C: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x00443C40: lui         $at, 0x43
    ctx->r1 = S32(0X43 << 16);
    // 0x00443C44: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x00443C48: lw          $v0, 0x1D04($at)
    ctx->r2 = MEM_W(ctx->r1, 0X1D04);
    // 0x00443C4C: sw          $v0, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->r2;
    // 0x00443C50: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x00443C54: lw          $v0, 0x1CC($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1CC);
    // 0x00443C58: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x00443C5C: lui         $at, 0x43
    ctx->r1 = S32(0X43 << 16);
    // 0x00443C60: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x00443C64: lw          $v1, 0x1D1C($at)
    ctx->r3 = MEM_W(ctx->r1, 0X1D1C);
    // 0x00443C68: lui         $a0, 0x1
    ctx->r4 = S32(0X1 << 16);
    // 0x00443C6C: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x00443C70: sw          $v1, 0x1D4($at)
    MEM_W(0X1D4, ctx->r1) = ctx->r3;
    // 0x00443C74: lui         $at, 0x43
    ctx->r1 = S32(0X43 << 16);
    // 0x00443C78: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x00443C7C: lw          $a3, 0x1D10($at)
    ctx->r7 = MEM_W(ctx->r1, 0X1D10);
    // 0x00443C80: ori         $a0, $a0, 0xF400
    ctx->r4 = ctx->r4 | 0XF400;
    // 0x00443C84: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00443C88: sw          $zero, 0x1900($at)
    MEM_W(0X1900, ctx->r1) = 0;
    // 0x00443C8C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00443C90: sw          $zero, 0x1904($at)
    MEM_W(0X1904, ctx->r1) = 0;
    // 0x00443C94: sw          $a0, 0x560($a2)
    MEM_W(0X560, ctx->r6) = ctx->r4;
    // 0x00443C98: sw          $a0, 0x678($a2)
    MEM_W(0X678, ctx->r6) = ctx->r4;
    // 0x00443C9C: sw          $a0, 0x674($a2)
    MEM_W(0X674, ctx->r6) = ctx->r4;
    // 0x00443CA0: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x00443CA4: sw          $a3, 0x1D0($at)
    MEM_W(0X1D0, ctx->r1) = ctx->r7;
    // 0x00443CA8: lb          $v1, 0x34($a1)
    ctx->r3 = MEM_B(ctx->r5, 0X34);
    // 0x00443CAC: addiu       $v0, $zero, 0x13
    ctx->r2 = ADD32(0, 0X13);
    // 0x00443CB0: beq         $v1, $v0, L_00443CF8
    if (ctx->r3 == ctx->r2) {
        // 0x00443CB4: addu        $s2, $a3, $zero
        ctx->r18 = ADD32(ctx->r7, 0);
            goto L_00443CF8;
    }
    // 0x00443CB4: addu        $s2, $a3, $zero
    ctx->r18 = ADD32(ctx->r7, 0);
    // 0x00443CB8: addu        $s3, $a2, $zero
    ctx->r19 = ADD32(ctx->r6, 0);
    // 0x00443CBC: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x00443CC0: addiu       $s1, $zero, 0x18
    ctx->r17 = ADD32(0, 0X18);
L_00443CC4:
    // 0x00443CC4: srav        $v0, $s2, $s0
    ctx->r2 = S32(SIGNED(ctx->r18) >> (ctx->r16 & 31));
    // 0x00443CC8: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x00443CCC: beql        $v0, $zero, L_00443CEC
    if (ctx->r2 == 0) {
        // 0x00443CD0: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_00443CEC;
    }
    goto skip_0;
    // 0x00443CD0: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    skip_0:
    // 0x00443CD4: addu        $a0, $s3, $s1
    ctx->r4 = ADD32(ctx->r19, ctx->r17);
    // 0x00443CD8: lui         $a1, 0x43
    ctx->r5 = S32(0X43 << 16);
    // 0x00443CDC: addiu       $a1, $a1, 0x1D28
    ctx->r5 = ADD32(ctx->r5, 0X1D28);
    // 0x00443CE0: jal         0x00236314
    // 0x00443CE4: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    func_00236314(rdram, ctx);
        goto after_0;
    // 0x00443CE4: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    after_0:
    // 0x00443CE8: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_00443CEC:
    // 0x00443CEC: slti        $v0, $s0, 0xF
    ctx->r2 = SIGNED(ctx->r16) < 0XF ? 1 : 0;
    // 0x00443CF0: bne         $v0, $zero, L_00443CC4
    if (ctx->r2 != 0) {
        // 0x00443CF4: addiu       $s1, $s1, 0x68
        ctx->r17 = ADD32(ctx->r17, 0X68);
            goto L_00443CC4;
    }
    // 0x00443CF4: addiu       $s1, $s1, 0x68
    ctx->r17 = ADD32(ctx->r17, 0X68);
L_00443CF8:
    // 0x00443CF8: addiu       $a0, $zero, 0xDC
    ctx->r4 = ADD32(0, 0XDC);
    // 0x00443CFC: lui         $a1, 0x41
    ctx->r5 = S32(0X41 << 16);
    // 0x00443D00: addiu       $a1, $a1, -0x384C
    ctx->r5 = ADD32(ctx->r5, -0X384C);
    // 0x00443D04: jal         0x00283FF8
    // 0x00443D08: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_00283FF8(rdram, ctx);
        goto after_1;
    // 0x00443D08: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_1:
    // 0x00443D0C: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x00443D10: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x00443D14: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x00443D18: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00443D1C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00443D20: jr          $ra
    // 0x00443D24: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x00443D24: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_002254C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002254C0: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x002254C4: sw          $s2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r18;
    // 0x002254C8: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x002254CC: sw          $s3, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r19;
    // 0x002254D0: addu        $s3, $a1, $zero
    ctx->r19 = ADD32(ctx->r5, 0);
    // 0x002254D4: sw          $s4, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r20;
    // 0x002254D8: addu        $s4, $a2, $zero
    ctx->r20 = ADD32(ctx->r6, 0);
    // 0x002254DC: sw          $ra, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r31;
    // 0x002254E0: sw          $s1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r17;
    // 0x002254E4: sw          $s0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r16;
    // 0x002254E8: lw          $v0, 0x14A8($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X14A8);
    // 0x002254EC: blez        $v0, L_00225524
    if (SIGNED(ctx->r2) <= 0) {
        // 0x002254F0: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_00225524;
    }
    // 0x002254F0: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x002254F4: addu        $s1, $s2, $zero
    ctx->r17 = ADD32(ctx->r18, 0);
L_002254F8:
    // 0x002254F8: lw          $v0, 0x14AC($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X14AC);
    // 0x002254FC: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
    // 0x00225500: jal         0x002017D4
    // 0x00225504: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_002017D4(rdram, ctx);
        goto after_0;
    // 0x00225504: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_0:
    // 0x00225508: lw          $v0, 0x4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4);
    // 0x0022550C: bne         $v0, $zero, L_00225580
    if (ctx->r2 != 0) {
        // 0x00225510: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_00225580;
    }
    // 0x00225510: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x00225514: lw          $v0, 0x14A8($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X14A8);
    // 0x00225518: slt         $v0, $s0, $v0
    ctx->r2 = SIGNED(ctx->r16) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x0022551C: bne         $v0, $zero, L_002254F8
    if (ctx->r2 != 0) {
        // 0x00225520: addiu       $s1, $s1, 0x8
        ctx->r17 = ADD32(ctx->r17, 0X8);
            goto L_002254F8;
    }
    // 0x00225520: addiu       $s1, $s1, 0x8
    ctx->r17 = ADD32(ctx->r17, 0X8);
L_00225524:
    // 0x00225524: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_00225528:
    // 0x00225528: beq         $v0, $zero, L_00225540
    if (ctx->r2 == 0) {
        // 0x0022552C: nop
    
            goto L_00225540;
    }
    // 0x0022552C: nop

    // 0x00225530: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00225534: lw          $v0, -0x3520($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X3520);
    // 0x00225538: bne         $v0, $zero, L_00225588
    if (ctx->r2 != 0) {
        // 0x0022553C: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_00225588;
    }
    // 0x0022553C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
L_00225540:
    // 0x00225540: lui         $t2, 0x800B
    ctx->r10 = S32(0X800B << 16);
    // 0x00225544: addiu       $t2, $t2, -0x4F30
    ctx->r10 = ADD32(ctx->r10, -0X4F30);
    // 0x00225548: lw          $v1, 0x0($t2)
    ctx->r3 = MEM_W(ctx->r10, 0X0);
    // 0x0022554C: lw          $t0, 0x4($t2)
    ctx->r8 = MEM_W(ctx->r10, 0X4);
    // 0x00225550: lw          $t1, 0x8($t2)
    ctx->r9 = MEM_W(ctx->r10, 0X8);
    // 0x00225554: sw          $v1, 0x0($s4)
    MEM_W(0X0, ctx->r20) = ctx->r3;
    // 0x00225558: sw          $t0, 0x4($s4)
    MEM_W(0X4, ctx->r20) = ctx->r8;
    // 0x0022555C: sw          $t1, 0x8($s4)
    MEM_W(0X8, ctx->r20) = ctx->r9;
    // 0x00225560: lw          $v1, 0xC($t2)
    ctx->r3 = MEM_W(ctx->r10, 0XC);
    // 0x00225564: lw          $t0, 0x10($t2)
    ctx->r8 = MEM_W(ctx->r10, 0X10);
    // 0x00225568: lw          $t1, 0x14($t2)
    ctx->r9 = MEM_W(ctx->r10, 0X14);
    // 0x0022556C: sw          $v1, 0xC($s4)
    MEM_W(0XC, ctx->r20) = ctx->r3;
    // 0x00225570: sw          $t0, 0x10($s4)
    MEM_W(0X10, ctx->r20) = ctx->r8;
    // 0x00225574: sw          $t1, 0x14($s4)
    MEM_W(0X14, ctx->r20) = ctx->r9;
    // 0x00225578: j           L_002255AC
    // 0x0022557C: nop

        goto L_002255AC;
    // 0x0022557C: nop

L_00225580:
    // 0x00225580: j           L_00225528
    // 0x00225584: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_00225528;
    // 0x00225584: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_00225588:
    // 0x00225588: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    // 0x0022558C: addiu       $a2, $sp, 0x10
    ctx->r6 = ADD32(ctx->r29, 0X10);
    // 0x00225590: jal         0x002228E4
    // 0x00225594: addiu       $a3, $sp, 0x38
    ctx->r7 = ADD32(ctx->r29, 0X38);
    func_002228E4(rdram, ctx);
        goto after_1;
    // 0x00225594: addiu       $a3, $sp, 0x38
    ctx->r7 = ADD32(ctx->r29, 0X38);
    after_1:
    // 0x00225598: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x0022559C: lw          $a1, 0x38($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X38);
    // 0x002255A0: addu        $a2, $s3, $zero
    ctx->r6 = ADD32(ctx->r19, 0);
    // 0x002255A4: jal         0x00222A9C
    // 0x002255A8: addu        $a3, $s4, $zero
    ctx->r7 = ADD32(ctx->r20, 0);
    func_00222A9C(rdram, ctx);
        goto after_2;
    // 0x002255A8: addu        $a3, $s4, $zero
    ctx->r7 = ADD32(ctx->r20, 0);
    after_2:
L_002255AC:
    // 0x002255AC: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
    // 0x002255B0: lw          $s4, 0x50($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X50);
    // 0x002255B4: lw          $s3, 0x4C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X4C);
    // 0x002255B8: lw          $s2, 0x48($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X48);
    // 0x002255BC: lw          $s1, 0x44($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X44);
    // 0x002255C0: lw          $s0, 0x40($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X40);
    // 0x002255C4: jr          $ra
    // 0x002255C8: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    return;
    // 0x002255C8: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void func_00403264(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00403264: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00403268: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x0040326C: lb          $v0, 0xC7($a1)
    ctx->r2 = MEM_B(ctx->r5, 0XC7);
    // 0x00403270: beq         $v0, $zero, L_00403280
    if (ctx->r2 == 0) {
        // 0x00403274: nop
    
            goto L_00403280;
    }
    // 0x00403274: nop

    // 0x00403278: jal         0x00243414
    // 0x0040327C: addiu       $a2, $zero, 0xF
    ctx->r6 = ADD32(0, 0XF);
    func_00243414(rdram, ctx);
        goto after_0;
    // 0x0040327C: addiu       $a2, $zero, 0xF
    ctx->r6 = ADD32(0, 0XF);
    after_0:
L_00403280:
    // 0x00403280: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x00403284: jr          $ra
    // 0x00403288: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00403288: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0041A5C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041A5C4: lw          $a0, 0xC($a0)
    ctx->r4 = MEM_W(ctx->r4, 0XC);
    // 0x0041A5C8: lw          $v0, 0x2D8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X2D8);
    // 0x0041A5CC: ori         $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 | 0XFFFF;
    // 0x0041A5D0: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x0041A5D4: jr          $ra
    // 0x0041A5D8: sw          $v0, 0x2D8($a0)
    MEM_W(0X2D8, ctx->r4) = ctx->r2;
    return;
    // 0x0041A5D8: sw          $v0, 0x2D8($a0)
    MEM_W(0X2D8, ctx->r4) = ctx->r2;
;}
RECOMP_FUNC void func_002364A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002364A4: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x002364A8: sw          $s2, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r18;
    // 0x002364AC: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x002364B0: sw          $s0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r16;
    // 0x002364B4: lw          $s0, 0x8C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X8C);
    // 0x002364B8: addiu       $a0, $sp, 0x50
    ctx->r4 = ADD32(ctx->r29, 0X50);
    // 0x002364BC: sw          $a1, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r5;
    // 0x002364C0: addiu       $a1, $sp, 0x80
    ctx->r5 = ADD32(ctx->r29, 0X80);
    // 0x002364C4: sw          $ra, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r31;
    // 0x002364C8: sw          $s1, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r17;
    // 0x002364CC: sw          $a2, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r6;
    // 0x002364D0: jal         0x0020E810
    // 0x002364D4: sw          $a3, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r7;
    func_0020E810(rdram, ctx);
        goto after_0;
    // 0x002364D4: sw          $a3, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r7;
    after_0:
    // 0x002364D8: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x002364DC: lw          $v0, -0x3040($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X3040);
    // 0x002364E0: bne         $v0, $zero, L_002365E0
    if (ctx->r2 != 0) {
        // 0x002364E4: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_002365E0;
    }
    // 0x002364E4: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x002364E8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x002364EC: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x002364F0: sw          $v0, -0x3040($at)
    MEM_W(-0X3040, ctx->r1) = ctx->r2;
    // 0x002364F4: sll         $v0, $s0, 2
    ctx->r2 = S32(ctx->r16 << 2);
    // 0x002364F8: addu        $v0, $v0, $s0
    ctx->r2 = ADD32(ctx->r2, ctx->r16);
    // 0x002364FC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x00236500: ori         $v1, $zero, 0x94D8
    ctx->r3 = 0 | 0X94D8;
    // 0x00236504: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x00236508: lui         $at, 0x1
    ctx->r1 = S32(0X1 << 16);
    // 0x0023650C: addu        $at, $s2, $at
    ctx->r1 = ADD32(ctx->r18, ctx->r1);
    // 0x00236510: lw          $s1, -0x6A60($at)
    ctx->r17 = MEM_W(ctx->r1, -0X6A60);
    // 0x00236514: beq         $s1, $zero, L_00236528
    if (ctx->r17 == 0) {
        // 0x00236518: addu        $s0, $s2, $v0
        ctx->r16 = ADD32(ctx->r18, ctx->r2);
            goto L_00236528;
    }
    // 0x00236518: addu        $s0, $s2, $v0
    ctx->r16 = ADD32(ctx->r18, ctx->r2);
    // 0x0023651C: ori         $a0, $zero, 0x95A0
    ctx->r4 = 0 | 0X95A0;
    // 0x00236520: j           L_00236534
    // 0x00236524: addu        $a0, $s2, $a0
    ctx->r4 = ADD32(ctx->r18, ctx->r4);
        goto L_00236534;
    // 0x00236524: addu        $a0, $s2, $a0
    ctx->r4 = ADD32(ctx->r18, ctx->r4);
L_00236528:
    // 0x00236528: lw          $s1, 0x0($s0)
    ctx->r17 = MEM_W(ctx->r16, 0X0);
    // 0x0023652C: beq         $s1, $zero, L_002365DC
    if (ctx->r17 == 0) {
        // 0x00236530: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_002365DC;
    }
    // 0x00236530: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_00236534:
    // 0x00236534: jal         0x00200738
    // 0x00236538: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_00200738(rdram, ctx);
        goto after_1;
    // 0x00236538: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_1:
    // 0x0023653C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00236540: jal         0x00200574
    // 0x00236544: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_00200574(rdram, ctx);
        goto after_2;
    // 0x00236544: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_2:
    // 0x00236548: beq         $s1, $zero, L_002365DC
    if (ctx->r17 == 0) {
        // 0x0023654C: addiu       $a0, $sp, 0x50
        ctx->r4 = ADD32(ctx->r29, 0X50);
            goto L_002365DC;
    }
    // 0x0023654C: addiu       $a0, $sp, 0x50
    ctx->r4 = ADD32(ctx->r29, 0X50);
    // 0x00236550: lw          $v0, 0x90($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X90);
    // 0x00236554: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x00236558: jal         0x00211114
    // 0x0023655C: sw          $v0, 0x48($s1)
    MEM_W(0X48, ctx->r17) = ctx->r2;
    func_00211114(rdram, ctx);
        goto after_3;
    // 0x0023655C: sw          $v0, 0x48($s1)
    MEM_W(0X48, ctx->r17) = ctx->r2;
    after_3:
    // 0x00236560: lui         $a1, 0x3FC9
    ctx->r5 = S32(0X3FC9 << 16);
    // 0x00236564: ori         $a1, $a1, 0xFDC
    ctx->r5 = ctx->r5 | 0XFDC;
    // 0x00236568: jal         0x002106C0
    // 0x0023656C: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    func_002106C0(rdram, ctx);
        goto after_4;
    // 0x0023656C: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    after_4:
    // 0x00236570: addiu       $s0, $sp, 0x80
    ctx->r16 = ADD32(ctx->r29, 0X80);
    // 0x00236574: jal         0x0020F040
    // 0x00236578: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_0020F040(rdram, ctx);
        goto after_5;
    // 0x00236578: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_5:
    // 0x0023657C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00236580: lui         $a2, 0x4003
    ctx->r6 = S32(0X4003 << 16);
    // 0x00236584: ori         $a2, $a2, 0x126F
    ctx->r6 = ctx->r6 | 0X126F;
    // 0x00236588: jal         0x0020EF60
    // 0x0023658C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_0020EF60(rdram, ctx);
        goto after_6;
    // 0x0023658C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_6:
    // 0x00236590: addiu       $a0, $sp, 0x74
    ctx->r4 = ADD32(ctx->r29, 0X74);
    // 0x00236594: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x00236598: jal         0x0020EEF8
    // 0x0023659C: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    func_0020EEF8(rdram, ctx);
        goto after_7;
    // 0x0023659C: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    after_7:
    // 0x002365A0: lw          $a1, 0x74($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X74);
    // 0x002365A4: lw          $a2, 0x78($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X78);
    // 0x002365A8: lw          $a3, 0x7C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X7C);
    // 0x002365AC: jal         0x00210318
    // 0x002365B0: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    func_00210318(rdram, ctx);
        goto after_8;
    // 0x002365B0: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    after_8:
    // 0x002365B4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002365B8: lwc1        $f0, 0x6524($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6524);
    // 0x002365BC: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x002365C0: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x002365C4: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x002365C8: jal         0x0021034C
    // 0x002365CC: addu        $a3, $a1, $zero
    ctx->r7 = ADD32(ctx->r5, 0);
    func_0021034C(rdram, ctx);
        goto after_9;
    // 0x002365CC: addu        $a3, $a1, $zero
    ctx->r7 = ADD32(ctx->r5, 0);
    after_9:
    // 0x002365D0: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x002365D4: jal         0x0020D274
    // 0x002365D8: addiu       $a1, $s1, 0x8
    ctx->r5 = ADD32(ctx->r17, 0X8);
    func_0020D274(rdram, ctx);
        goto after_10;
    // 0x002365D8: addiu       $a1, $s1, 0x8
    ctx->r5 = ADD32(ctx->r17, 0X8);
    after_10:
L_002365DC:
    // 0x002365DC: addu        $v0, $s1, $zero
    ctx->r2 = ADD32(ctx->r17, 0);
L_002365E0:
    // 0x002365E0: lw          $ra, 0x6C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X6C);
    // 0x002365E4: lw          $s2, 0x68($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X68);
    // 0x002365E8: lw          $s1, 0x64($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X64);
    // 0x002365EC: lw          $s0, 0x60($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X60);
    // 0x002365F0: jr          $ra
    // 0x002365F4: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    return;
    // 0x002365F4: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
;}
RECOMP_FUNC void func_0045A170(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0045A170: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0045A174: sw          $zero, 0x2020($at)
    MEM_W(0X2020, ctx->r1) = 0;
    // 0x0045A178: jr          $ra
    // 0x0045A17C: nop

    return;
    // 0x0045A17C: nop

;}
RECOMP_FUNC void func_00459B50(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
;}
RECOMP_FUNC void func_002A3080(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002A3080: jr          $ra
    // 0x002A3084: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x002A3084: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void func_0023E4A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0023E4A0: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x0023E4A4: sw          $s4, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r20;
    // 0x0023E4A8: addu        $s4, $a0, $zero
    ctx->r20 = ADD32(ctx->r4, 0);
    // 0x0023E4AC: sw          $ra, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r31;
    // 0x0023E4B0: sw          $fp, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r30;
    // 0x0023E4B4: sw          $s7, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r23;
    // 0x0023E4B8: sw          $s6, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r22;
    // 0x0023E4BC: sw          $s5, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r21;
    // 0x0023E4C0: sw          $s3, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r19;
    // 0x0023E4C4: sw          $s2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r18;
    // 0x0023E4C8: sw          $s1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r17;
    // 0x0023E4CC: sw          $s0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r16;
    // 0x0023E4D0: lw          $s2, 0x4($s4)
    ctx->r18 = MEM_W(ctx->r20, 0X4);
    // 0x0023E4D4: lb          $v0, 0x4($s2)
    ctx->r2 = MEM_B(ctx->r18, 0X4);
    // 0x0023E4D8: beq         $v0, $zero, L_0023E6A8
    if (ctx->r2 == 0) {
        // 0x0023E4DC: lui         $v1, 0x4000
        ctx->r3 = S32(0X4000 << 16);
            goto L_0023E6A8;
    }
    // 0x0023E4DC: lui         $v1, 0x4000
    ctx->r3 = S32(0X4000 << 16);
    // 0x0023E4E0: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
    // 0x0023E4E4: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x0023E4E8: bne         $v0, $zero, L_0023E6A8
    if (ctx->r2 != 0) {
        // 0x0023E4EC: nop
    
            goto L_0023E6A8;
    }
    // 0x0023E4EC: nop

    // 0x0023E4F0: lui         $v0, 0x800F
    ctx->r2 = S32(0X800F << 16);
    // 0x0023E4F4: addiu       $v0, $v0, 0x1C60
    ctx->r2 = ADD32(ctx->r2, 0X1C60);
    // 0x0023E4F8: beq         $s2, $v0, L_0023E6A8
    if (ctx->r18 == ctx->r2) {
        // 0x0023E4FC: nop
    
            goto L_0023E6A8;
    }
    // 0x0023E4FC: nop

    // 0x0023E500: lw          $s3, 0x0($s4)
    ctx->r19 = MEM_W(ctx->r20, 0X0);
    // 0x0023E504: lui         $s5, 0x800F
    ctx->r21 = S32(0X800F << 16);
    // 0x0023E508: lw          $s5, 0x7964($s5)
    ctx->r21 = MEM_W(ctx->r21, 0X7964);
    // 0x0023E50C: jal         0x002672C8
    // 0x0023E510: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    func_002672C8(rdram, ctx);
        goto after_0;
    // 0x0023E510: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    after_0:
    // 0x0023E514: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x0023E518: addiu       $s0, $sp, 0x10
    ctx->r16 = ADD32(ctx->r29, 0X10);
    // 0x0023E51C: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    // 0x0023E520: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
    // 0x0023E524: lui         $v1, 0x10
    ctx->r3 = S32(0X10 << 16);
    // 0x0023E528: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x0023E52C: jal         0x0026841C
    // 0x0023E530: sw          $v0, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->r2;
    func_0026841C(rdram, ctx);
        goto after_1;
    // 0x0023E530: sw          $v0, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->r2;
    after_1:
    // 0x0023E534: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x0023E538: jal         0x002671B4
    // 0x0023E53C: swc1        $f0, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f0.u32l;
    func_002671B4(rdram, ctx);
        goto after_2;
    // 0x0023E53C: swc1        $f0, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f0.u32l;
    after_2:
    // 0x0023E540: lwc1        $f2, 0x4($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X4);
    // 0x0023E544: add.s       $f0, $f2, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f2.fl + ctx->f0.fl;
    // 0x0023E548: swc1        $f0, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f0.u32l;
    // 0x0023E54C: lwc1        $f1, 0x8($s3)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r19, 0X8);
    // 0x0023E550: add.s       $f1, $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f2.fl;
    // 0x0023E554: swc1        $f1, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->f_odd[(1 - 1) * 2];
    // 0x0023E558: lwc1        $f1, 0x8($s3)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r19, 0X8);
    // 0x0023E55C: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x0023E560: swc1        $f1, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f_odd[(1 - 1) * 2];
    // 0x0023E564: lwc1        $f1, 0x50($s4)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r20, 0X50);
    // 0x0023E568: add.s       $f1, $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f2.fl;
    // 0x0023E56C: swc1        $f1, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->f_odd[(1 - 1) * 2];
    // 0x0023E570: lwc1        $f1, 0x50($s4)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r20, 0X50);
    // 0x0023E574: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x0023E578: swc1        $f1, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->f_odd[(1 - 1) * 2];
    // 0x0023E57C: lwc1        $f0, 0x4C($s4)
    ctx->f0.u32l = MEM_W(ctx->r20, 0X4C);
    // 0x0023E580: lwc1        $f1, 0x4($s3)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r19, 0X4);
    // 0x0023E584: lwc1        $f3, 0xC($s3)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r19, 0XC);
    // 0x0023E588: c.le.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl <= ctx->f1.fl;
    // 0x0023E58C: nop

    // 0x0023E590: bc1fl       L_0023E598
    if (!c1cs) {
        // 0x0023E594: mov.s       $f0, $f1
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    ctx->f0.fl = ctx->f1.fl;
            goto L_0023E598;
    }
    goto skip_0;
    // 0x0023E594: mov.s       $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    ctx->f0.fl = ctx->f1.fl;
    skip_0:
L_0023E598:
    // 0x0023E598: lwc1        $f2, 0x10($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X10);
    // 0x0023E59C: sub.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f2.fl;
    // 0x0023E5A0: swc1        $f0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f0.u32l;
    // 0x0023E5A4: lwc1        $f0, 0x4C($s4)
    ctx->f0.u32l = MEM_W(ctx->r20, 0X4C);
    // 0x0023E5A8: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x0023E5AC: nop

    // 0x0023E5B0: bc1fl       L_0023E5B8
    if (!c1cs) {
        // 0x0023E5B4: mov.s       $f0, $f1
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    ctx->f0.fl = ctx->f1.fl;
            goto L_0023E5B8;
    }
    goto skip_1;
    // 0x0023E5B4: mov.s       $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    ctx->f0.fl = ctx->f1.fl;
    skip_1:
L_0023E5B8:
    // 0x0023E5B8: add.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f2.fl;
    // 0x0023E5BC: swc1        $f0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f0.u32l;
    // 0x0023E5C0: lwc1        $f0, 0x54($s4)
    ctx->f0.u32l = MEM_W(ctx->r20, 0X54);
    // 0x0023E5C4: c.le.s      $f0, $f3
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    c1cs = ctx->f0.fl <= ctx->f3.fl;
    // 0x0023E5C8: nop

    // 0x0023E5CC: bc1fl       L_0023E5D4
    if (!c1cs) {
        // 0x0023E5D0: mov.s       $f0, $f3
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    ctx->f0.fl = ctx->f3.fl;
            goto L_0023E5D4;
    }
    goto skip_2;
    // 0x0023E5D0: mov.s       $f0, $f3
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    ctx->f0.fl = ctx->f3.fl;
    skip_2:
L_0023E5D4:
    // 0x0023E5D4: sub.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f2.fl;
    // 0x0023E5D8: swc1        $f0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f0.u32l;
    // 0x0023E5DC: lwc1        $f0, 0x54($s4)
    ctx->f0.u32l = MEM_W(ctx->r20, 0X54);
    // 0x0023E5E0: c.le.s      $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f3.fl <= ctx->f0.fl;
    // 0x0023E5E4: nop

    // 0x0023E5E8: bc1fl       L_0023E5F0
    if (!c1cs) {
        // 0x0023E5EC: mov.s       $f0, $f3
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    ctx->f0.fl = ctx->f3.fl;
            goto L_0023E5F0;
    }
    goto skip_3;
    // 0x0023E5EC: mov.s       $f0, $f3
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    ctx->f0.fl = ctx->f3.fl;
    skip_3:
L_0023E5F0:
    // 0x0023E5F0: add.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f2.fl;
    // 0x0023E5F4: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x0023E5F8: blez        $s5, L_0023E6A8
    if (SIGNED(ctx->r21) <= 0) {
        // 0x0023E5FC: swc1        $f0, 0x28($s0)
        MEM_W(0X28, ctx->r16) = ctx->f0.u32l;
            goto L_0023E6A8;
    }
    // 0x0023E5FC: swc1        $f0, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->f0.u32l;
    // 0x0023E600: addiu       $fp, $zero, 0x2
    ctx->r30 = ADD32(0, 0X2);
    // 0x0023E604: addiu       $s7, $zero, 0x1
    ctx->r23 = ADD32(0, 0X1);
    // 0x0023E608: addiu       $s6, $zero, 0x3
    ctx->r22 = ADD32(0, 0X3);
    // 0x0023E60C: lui         $s0, 0x800F
    ctx->r16 = S32(0X800F << 16);
    // 0x0023E610: addiu       $s0, $s0, 0x7078
    ctx->r16 = ADD32(ctx->r16, 0X7078);
L_0023E614:
    // 0x0023E614: lw          $a2, 0xEC($s0)
    ctx->r6 = MEM_W(ctx->r16, 0XEC);
    // 0x0023E618: beql        $a2, $s3, L_0023E69C
    if (ctx->r6 == ctx->r19) {
        // 0x0023E61C: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_0023E69C;
    }
    goto skip_4;
    // 0x0023E61C: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_4:
    // 0x0023E620: lb          $v0, 0x4($s2)
    ctx->r2 = MEM_B(ctx->r18, 0X4);
    // 0x0023E624: beql        $v0, $zero, L_0023E69C
    if (ctx->r2 == 0) {
        // 0x0023E628: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_0023E69C;
    }
    goto skip_5;
    // 0x0023E628: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_5:
    // 0x0023E62C: lbu         $v1, 0x0($a2)
    ctx->r3 = MEM_BU(ctx->r6, 0X0);
    // 0x0023E630: beq         $v1, $fp, L_0023E68C
    if (ctx->r3 == ctx->r30) {
        // 0x0023E634: slti        $v0, $v1, 0x3
        ctx->r2 = SIGNED(ctx->r3) < 0X3 ? 1 : 0;
            goto L_0023E68C;
    }
    // 0x0023E634: slti        $v0, $v1, 0x3
    ctx->r2 = SIGNED(ctx->r3) < 0X3 ? 1 : 0;
    // 0x0023E638: beq         $v0, $zero, L_0023E650
    if (ctx->r2 == 0) {
        // 0x0023E63C: nop
    
            goto L_0023E650;
    }
    // 0x0023E63C: nop

    // 0x0023E640: beq         $v1, $s7, L_0023E660
    if (ctx->r3 == ctx->r23) {
        // 0x0023E644: addu        $a0, $s4, $zero
        ctx->r4 = ADD32(ctx->r20, 0);
            goto L_0023E660;
    }
    // 0x0023E644: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    // 0x0023E648: j           L_0023E690
    // 0x0023E64C: nop

        goto L_0023E690;
    // 0x0023E64C: nop

L_0023E650:
    // 0x0023E650: beq         $v1, $s6, L_0023E67C
    if (ctx->r3 == ctx->r22) {
        // 0x0023E654: addu        $a0, $s4, $zero
        ctx->r4 = ADD32(ctx->r20, 0);
            goto L_0023E67C;
    }
    // 0x0023E654: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    // 0x0023E658: j           L_0023E690
    // 0x0023E65C: nop

        goto L_0023E690;
    // 0x0023E65C: nop

L_0023E660:
    // 0x0023E660: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
    // 0x0023E664: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x0023E668: beq         $v0, $zero, L_0023E690
    if (ctx->r2 == 0) {
        // 0x0023E66C: nop
    
            goto L_0023E690;
    }
    // 0x0023E66C: nop

    // 0x0023E670: lw          $v0, 0x144($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X144);
    // 0x0023E674: j           L_0023E684
    // 0x0023E678: nop

        goto L_0023E684;
    // 0x0023E678: nop

L_0023E67C:
    // 0x0023E67C: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
    // 0x0023E680: andi        $v0, $v0, 0x20
    ctx->r2 = ctx->r2 & 0X20;
L_0023E684:
    // 0x0023E684: beql        $v0, $zero, L_0023E69C
    if (ctx->r2 == 0) {
        // 0x0023E688: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_0023E69C;
    }
    goto skip_6;
    // 0x0023E688: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_6:
L_0023E68C:
    // 0x0023E68C: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
L_0023E690:
    // 0x0023E690: jal         0x0023DF70
    // 0x0023E694: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    func_0023DF70(rdram, ctx);
        goto after_3;
    // 0x0023E694: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    after_3:
    // 0x0023E698: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_0023E69C:
    // 0x0023E69C: slt         $v0, $s1, $s5
    ctx->r2 = SIGNED(ctx->r17) < SIGNED(ctx->r21) ? 1 : 0;
    // 0x0023E6A0: bne         $v0, $zero, L_0023E614
    if (ctx->r2 != 0) {
        // 0x0023E6A4: addiu       $s0, $s0, 0x4
        ctx->r16 = ADD32(ctx->r16, 0X4);
            goto L_0023E614;
    }
    // 0x0023E6A4: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
L_0023E6A8:
    // 0x0023E6A8: lw          $ra, 0x64($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X64);
    // 0x0023E6AC: lw          $fp, 0x60($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X60);
    // 0x0023E6B0: lw          $s7, 0x5C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X5C);
    // 0x0023E6B4: lw          $s6, 0x58($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X58);
    // 0x0023E6B8: lw          $s5, 0x54($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X54);
    // 0x0023E6BC: lw          $s4, 0x50($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X50);
    // 0x0023E6C0: lw          $s3, 0x4C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X4C);
    // 0x0023E6C4: lw          $s2, 0x48($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X48);
    // 0x0023E6C8: lw          $s1, 0x44($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X44);
    // 0x0023E6CC: lw          $s0, 0x40($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X40);
    // 0x0023E6D0: jr          $ra
    // 0x0023E6D4: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    return;
    // 0x0023E6D4: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
;}
RECOMP_FUNC void func_0044083C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0044083C: lw          $v0, 0xD4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XD4);
    // 0x00440840: sw          $zero, 0x18($a0)
    MEM_W(0X18, ctx->r4) = 0;
    // 0x00440844: sw          $zero, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = 0;
    // 0x00440848: sw          $zero, 0x20($a0)
    MEM_W(0X20, ctx->r4) = 0;
    // 0x0044084C: ori         $v0, $v0, 0x2000
    ctx->r2 = ctx->r2 | 0X2000;
    // 0x00440850: jr          $ra
    // 0x00440854: sw          $v0, 0xD4($a0)
    MEM_W(0XD4, ctx->r4) = ctx->r2;
    return;
    // 0x00440854: sw          $v0, 0xD4($a0)
    MEM_W(0XD4, ctx->r4) = ctx->r2;
;}
RECOMP_FUNC void func_00264960(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00264960: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x00264964: lui         $v1, 0x1000
    ctx->r3 = S32(0X1000 << 16);
    // 0x00264968: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x0026496C: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
    // 0x00264970: lw          $v0, 0xD4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XD4);
    // 0x00264974: ori         $v0, $v0, 0x2100
    ctx->r2 = ctx->r2 | 0X2100;
    // 0x00264978: jr          $ra
    // 0x0026497C: sw          $v0, 0xD4($a0)
    MEM_W(0XD4, ctx->r4) = ctx->r2;
    return;
    // 0x0026497C: sw          $v0, 0xD4($a0)
    MEM_W(0XD4, ctx->r4) = ctx->r2;
;}
RECOMP_FUNC void func_0027E000(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0027E000: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x0027E004: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x0027E008: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x0027E00C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x0027E010: lui         $s0, 0x800E
    ctx->r16 = S32(0X800E << 16);
    // 0x0027E014: addiu       $s0, $s0, -0x71DC
    ctx->r16 = ADD32(ctx->r16, -0X71DC);
    // 0x0027E018: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x0027E01C: lui         $s6, 0xE700
    ctx->r22 = S32(0XE700 << 16);
    // 0x0027E020: lui         $v1, 0xDE00
    ctx->r3 = S32(0XDE00 << 16);
    // 0x0027E024: sw          $ra, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r31;
    // 0x0027E028: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x0027E02C: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x0027E030: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x0027E034: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x0027E038: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x0027E03C: lw          $t6, 0x0($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X0);
    // 0x0027E040: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0027E044: lwc1        $f0, -0x661C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X661C);
    // 0x0027E048: addu        $v0, $t6, $zero
    ctx->r2 = ADD32(ctx->r14, 0);
    // 0x0027E04C: addiu       $t6, $t6, 0x8
    ctx->r14 = ADD32(ctx->r14, 0X8);
    // 0x0027E050: addiu       $a0, $t6, 0x8
    ctx->r4 = ADD32(ctx->r14, 0X8);
    // 0x0027E054: sw          $t6, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r14;
    // 0x0027E058: sw          $s6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r22;
    // 0x0027E05C: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x0027E060: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0027E064: addiu       $v0, $v0, -0x4F00
    ctx->r2 = ADD32(ctx->r2, -0X4F00);
    // 0x0027E068: sw          $a0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r4;
    // 0x0027E06C: sw          $v0, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r2;
    // 0x0027E070: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0027E074: addiu       $v0, $v0, -0x4ED0
    ctx->r2 = ADD32(ctx->r2, -0X4ED0);
    // 0x0027E078: sw          $v1, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r3;
    // 0x0027E07C: sw          $v1, 0x8($t6)
    MEM_W(0X8, ctx->r14) = ctx->r3;
    // 0x0027E080: sw          $v0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r2;
    // 0x0027E084: lwc1        $f1, 0x104($s1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r17, 0X104);
    // 0x0027E088: lwc1        $f3, 0x288($s1)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r17, 0X288);
    // 0x0027E08C: addiu       $t4, $t6, 0x10
    ctx->r12 = ADD32(ctx->r14, 0X10);
    // 0x0027E090: sw          $t4, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r12;
    // 0x0027E094: lwc1        $f2, 0x294($s1)
    ctx->f2.u32l = MEM_W(ctx->r17, 0X294);
    // 0x0027E098: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x0027E09C: lhu         $v0, 0x2032($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X2032);
    // 0x0027E0A0: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x0027E0A4: lhu         $v1, 0x2036($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0X2036);
    // 0x0027E0A8: swc1        $f0, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->f0.u32l;
    // 0x0027E0AC: swc1        $f0, 0x10($s1)
    MEM_W(0X10, ctx->r17) = ctx->f0.u32l;
    // 0x0027E0B0: swc1        $f1, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->f_odd[(1 - 1) * 2];
    // 0x0027E0B4: mov.s       $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    ctx->f0.fl = ctx->f1.fl;
    // 0x0027E0B8: addiu       $a1, $v0, -0x1
    ctx->r5 = ADD32(ctx->r2, -0X1);
    // 0x0027E0BC: addiu       $t1, $v1, -0x1
    ctx->r9 = ADD32(ctx->r3, -0X1);
    // 0x0027E0C0: add.s       $f4, $f3, $f3
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f4.fl = ctx->f3.fl + ctx->f3.fl;
    // 0x0027E0C4: lwc1        $f1, 0x290($s1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r17, 0X290);
    // 0x0027E0C8: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x0027E0CC: lw          $v0, 0x2030($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2030);
    // 0x0027E0D0: trunc.w.s   $f5, $f1
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 1);
    ctx->f_odd[(5 - 1) * 2] = TRUNC_W_S(ctx->f1.fl);
    // 0x0027E0D4: mfc1        $a3, $f5
    ctx->r7 = (int32_t)ctx->f_odd[(5 - 1) * 2];
    // 0x0027E0D8: addu        $s5, $a3, $zero
    ctx->r21 = ADD32(ctx->r7, 0);
    // 0x0027E0DC: add.s       $f1, $f1, $f3
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f3.fl;
    // 0x0027E0E0: trunc.w.s   $f5, $f2
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 2);
    ctx->f_odd[(5 - 1) * 2] = TRUNC_W_S(ctx->f2.fl);
    // 0x0027E0E4: mfc1        $t0, $f5
    ctx->r8 = (int32_t)ctx->f_odd[(5 - 1) * 2];
    // 0x0027E0E8: addu        $s4, $t0, $zero
    ctx->r20 = ADD32(ctx->r8, 0);
    // 0x0027E0EC: mul.s       $f4, $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x0027E0F0: lwc1        $f3, 0x108($s1)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r17, 0X108);
    // 0x0027E0F4: lwc1        $f0, 0x28C($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X28C);
    // 0x0027E0F8: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x0027E0FC: swc1        $f3, 0x10($s1)
    MEM_W(0X10, ctx->r17) = ctx->f_odd[(3 - 1) * 2];
    // 0x0027E100: add.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f0.fl;
    // 0x0027E104: trunc.w.s   $f5, $f1
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 1);
    ctx->f_odd[(5 - 1) * 2] = TRUNC_W_S(ctx->f1.fl);
    // 0x0027E108: mfc1        $a0, $f5
    ctx->r4 = (int32_t)ctx->f_odd[(5 - 1) * 2];
    // 0x0027E10C: addu        $s3, $a0, $zero
    ctx->r19 = ADD32(ctx->r4, 0);
    // 0x0027E110: add.s       $f0, $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f0.fl;
    // 0x0027E114: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x0027E118: sra         $a0, $a0, 16
    ctx->r4 = S32(SIGNED(ctx->r4) >> 16);
    // 0x0027E11C: mul.s       $f0, $f0, $f3
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f3.fl);
    // 0x0027E120: slt         $v0, $v0, $a0
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x0027E124: trunc.w.s   $f5, $f2
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 2);
    ctx->f_odd[(5 - 1) * 2] = TRUNC_W_S(ctx->f2.fl);
    // 0x0027E128: mfc1        $a2, $f5
    ctx->r6 = (int32_t)ctx->f_odd[(5 - 1) * 2];
    // 0x0027E12C: trunc.w.s   $f5, $f4
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 4);
    ctx->f_odd[(5 - 1) * 2] = TRUNC_W_S(ctx->f4.fl);
    // 0x0027E130: mfc1        $t2, $f5
    ctx->r10 = (int32_t)ctx->f_odd[(5 - 1) * 2];
    // 0x0027E134: trunc.w.s   $f5, $f0
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(5 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x0027E138: mfc1        $t7, $f5
    ctx->r15 = (int32_t)ctx->f_odd[(5 - 1) * 2];
    // 0x0027E13C: beq         $v0, $zero, L_0027E148
    if (ctx->r2 == 0) {
        // 0x0027E140: addu        $s2, $a2, $zero
        ctx->r18 = ADD32(ctx->r6, 0);
            goto L_0027E148;
    }
    // 0x0027E140: addu        $s2, $a2, $zero
    ctx->r18 = ADD32(ctx->r6, 0);
    // 0x0027E144: addu        $s3, $a1, $zero
    ctx->r19 = ADD32(ctx->r5, 0);
L_0027E148:
    // 0x0027E148: sll         $v0, $a3, 16
    ctx->r2 = S32(ctx->r7 << 16);
    // 0x0027E14C: bltzl       $v0, L_0027E154
    if (SIGNED(ctx->r2) < 0) {
        // 0x0027E150: addu        $s5, $zero, $zero
        ctx->r21 = ADD32(0, 0);
            goto L_0027E154;
    }
    goto skip_0;
    // 0x0027E150: addu        $s5, $zero, $zero
    ctx->r21 = ADD32(0, 0);
    skip_0:
L_0027E154:
    // 0x0027E154: sll         $v0, $t0, 16
    ctx->r2 = S32(ctx->r8 << 16);
    // 0x0027E158: bltzl       $v0, L_0027E160
    if (SIGNED(ctx->r2) < 0) {
        // 0x0027E15C: addu        $s4, $zero, $zero
        ctx->r20 = ADD32(0, 0);
            goto L_0027E160;
    }
    goto skip_1;
    // 0x0027E15C: addu        $s4, $zero, $zero
    ctx->r20 = ADD32(0, 0);
    skip_1:
L_0027E160:
    // 0x0027E160: sll         $v1, $a2, 16
    ctx->r3 = S32(ctx->r6 << 16);
    // 0x0027E164: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x0027E168: lw          $v0, 0x2034($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2034);
    // 0x0027E16C: sra         $v1, $v1, 16
    ctx->r3 = S32(SIGNED(ctx->r3) >> 16);
    // 0x0027E170: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x0027E174: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x0027E178: bnel        $v0, $zero, L_0027E180
    if (ctx->r2 != 0) {
        // 0x0027E17C: addu        $s2, $t1, $zero
        ctx->r18 = ADD32(ctx->r9, 0);
            goto L_0027E180;
    }
    goto skip_2;
    // 0x0027E17C: addu        $s2, $t1, $zero
    ctx->r18 = ADD32(ctx->r9, 0);
    skip_2:
L_0027E180:
    // 0x0027E180: lui         $v0, 0xDA38
    ctx->r2 = S32(0XDA38 << 16);
    // 0x0027E184: ori         $v0, $v0, 0x7
    ctx->r2 = ctx->r2 | 0X7;
    // 0x0027E188: lui         $t3, 0xDC08
    ctx->r11 = S32(0XDC08 << 16);
    // 0x0027E18C: ori         $t3, $t3, 0x8
    ctx->r11 = ctx->r11 | 0X8;
    // 0x0027E190: lui         $t5, 0xDC08
    ctx->r13 = S32(0XDC08 << 16);
    // 0x0027E194: addiu       $v1, $t6, 0x18
    ctx->r3 = ADD32(ctx->r14, 0X18);
    // 0x0027E198: ori         $t5, $t5, 0xA
    ctx->r13 = ctx->r13 | 0XA;
    // 0x0027E19C: addiu       $a3, $t6, 0x20
    ctx->r7 = ADD32(ctx->r14, 0X20);
    // 0x0027E1A0: addiu       $t0, $t6, 0x28
    ctx->r8 = ADD32(ctx->r14, 0X28);
    // 0x0027E1A4: lui         $s7, 0x800F
    ctx->r23 = S32(0X800F << 16);
    // 0x0027E1A8: lw          $s7, 0x7070($s7)
    ctx->r23 = MEM_W(ctx->r23, 0X7070);
    // 0x0027E1AC: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x0027E1B0: lw          $a1, 0x6D1C($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X6D1C);
    // 0x0027E1B4: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0027E1B8: lwc1        $f3, -0x6618($at)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r1, -0X6618);
    // 0x0027E1BC: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0027E1C0: lwc1        $f2, -0x6614($at)
    ctx->f2.u32l = MEM_W(ctx->r1, -0X6614);
    // 0x0027E1C4: addiu       $t1, $t6, 0x30
    ctx->r9 = ADD32(ctx->r14, 0X30);
    // 0x0027E1C8: sw          $v0, 0x10($t6)
    MEM_W(0X10, ctx->r14) = ctx->r2;
    // 0x0027E1CC: sll         $v0, $a1, 6
    ctx->r2 = S32(ctx->r5 << 6);
    // 0x0027E1D0: addiu       $v0, $v0, 0x368
    ctx->r2 = ADD32(ctx->r2, 0X368);
    // 0x0027E1D4: addu        $v0, $s1, $v0
    ctx->r2 = ADD32(ctx->r17, ctx->r2);
    // 0x0027E1D8: sw          $v0, 0x4($t4)
    MEM_W(0X4, ctx->r12) = ctx->r2;
    // 0x0027E1DC: lui         $v0, 0xDB0E
    ctx->r2 = S32(0XDB0E << 16);
    // 0x0027E1E0: sll         $a0, $a1, 4
    ctx->r4 = S32(ctx->r5 << 4);
    // 0x0027E1E4: addu        $a2, $s1, $a0
    ctx->r6 = ADD32(ctx->r17, ctx->r4);
    // 0x0027E1E8: lui         $t4, 0xDC08
    ctx->r12 = S32(0XDC08 << 16);
    // 0x0027E1EC: sw          $v0, 0x18($t6)
    MEM_W(0X18, ctx->r14) = ctx->r2;
    // 0x0027E1F0: lhu         $v0, 0x68($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X68);
    // 0x0027E1F4: ori         $t4, $t4, 0x30A
    ctx->r12 = ctx->r12 | 0X30A;
    // 0x0027E1F8: sw          $v0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r2;
    // 0x0027E1FC: sll         $v0, $t2, 16
    ctx->r2 = S32(ctx->r10 << 16);
    // 0x0027E200: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x0027E204: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x0027E208: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x0027E20C: mul.s       $f0, $f0, $f3
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f3.fl);
    // 0x0027E210: sh          $t2, 0x298($a2)
    MEM_H(0X298, ctx->r6) = ctx->r10;
    // 0x0027E214: sh          $t7, 0x29A($a2)
    MEM_H(0X29A, ctx->r6) = ctx->r15;
    // 0x0027E218: lwc1        $f1, 0x290($s1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r17, 0X290);
    // 0x0027E21C: addiu       $a0, $a0, 0x298
    ctx->r4 = ADD32(ctx->r4, 0X298);
    // 0x0027E220: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x0027E224: addu        $a0, $s1, $a0
    ctx->r4 = ADD32(ctx->r17, ctx->r4);
    // 0x0027E228: sll         $a1, $a1, 5
    ctx->r5 = S32(ctx->r5 << 5);
    // 0x0027E22C: mul.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f2.fl);
    // 0x0027E230: addiu       $a1, $a1, 0x3E8
    ctx->r5 = ADD32(ctx->r5, 0X3E8);
    // 0x0027E234: sll         $v0, $t7, 16
    ctx->r2 = S32(ctx->r15 << 16);
    // 0x0027E238: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x0027E23C: sw          $v1, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r3;
    // 0x0027E240: trunc.w.s   $f5, $f0
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(5 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x0027E244: mfc1        $v1, $f5
    ctx->r3 = (int32_t)ctx->f_odd[(5 - 1) * 2];
    // 0x0027E248: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x0027E24C: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x0027E250: mul.s       $f0, $f0, $f3
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f3.fl);
    // 0x0027E254: sw          $a3, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r7;
    // 0x0027E258: sh          $v1, 0x2A0($a2)
    MEM_H(0X2A0, ctx->r6) = ctx->r3;
    // 0x0027E25C: lwc1        $f1, 0x294($s1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r17, 0X294);
    // 0x0027E260: addu        $a1, $s1, $a1
    ctx->r5 = ADD32(ctx->r17, ctx->r5);
    // 0x0027E264: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x0027E268: addiu       $t2, $t6, 0x38
    ctx->r10 = ADD32(ctx->r14, 0X38);
    // 0x0027E26C: addiu       $v0, $t6, 0x40
    ctx->r2 = ADD32(ctx->r14, 0X40);
    // 0x0027E270: mul.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f2.fl);
    // 0x0027E274: sw          $t0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r8;
    // 0x0027E278: sw          $t1, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r9;
    // 0x0027E27C: sw          $t2, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r10;
    // 0x0027E280: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x0027E284: trunc.w.s   $f5, $f0
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(5 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x0027E288: mfc1        $v0, $f5
    ctx->r2 = (int32_t)ctx->f_odd[(5 - 1) * 2];
    // 0x0027E28C: sh          $v0, 0x2A2($a2)
    MEM_H(0X2A2, ctx->r6) = ctx->r2;
    // 0x0027E290: sll         $v0, $s5, 16
    ctx->r2 = S32(ctx->r21 << 16);
    // 0x0027E294: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x0027E298: mtc1        $v0, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r2;
    // 0x0027E29C: cvt.s.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.fl = CVT_S_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x0027E2A0: mul.s       $f1, $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f2.fl);
    // 0x0027E2A4: sll         $v0, $s4, 16
    ctx->r2 = S32(ctx->r20 << 16);
    // 0x0027E2A8: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x0027E2AC: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x0027E2B0: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x0027E2B4: lui         $v0, 0xED00
    ctx->r2 = S32(0XED00 << 16);
    // 0x0027E2B8: mul.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f2.fl);
    // 0x0027E2BC: sw          $t3, 0x20($t6)
    MEM_W(0X20, ctx->r14) = ctx->r11;
    // 0x0027E2C0: sw          $a0, 0x4($a3)
    MEM_W(0X4, ctx->r7) = ctx->r4;
    // 0x0027E2C4: trunc.w.s   $f5, $f1
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 1);
    ctx->f_odd[(5 - 1) * 2] = TRUNC_W_S(ctx->f1.fl);
    // 0x0027E2C8: mfc1        $v1, $f5
    ctx->r3 = (int32_t)ctx->f_odd[(5 - 1) * 2];
    // 0x0027E2CC: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x0027E2D0: sll         $v1, $v1, 12
    ctx->r3 = S32(ctx->r3 << 12);
    // 0x0027E2D4: trunc.w.s   $f5, $f0
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(5 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x0027E2D8: mfc1        $a0, $f5
    ctx->r4 = (int32_t)ctx->f_odd[(5 - 1) * 2];
    // 0x0027E2DC: andi        $a0, $a0, 0xFFF
    ctx->r4 = ctx->r4 & 0XFFF;
    // 0x0027E2E0: or          $a0, $a0, $v0
    ctx->r4 = ctx->r4 | ctx->r2;
    // 0x0027E2E4: sll         $v0, $s3, 16
    ctx->r2 = S32(ctx->r19 << 16);
    // 0x0027E2E8: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x0027E2EC: mtc1        $v0, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r2;
    // 0x0027E2F0: cvt.s.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.fl = CVT_S_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x0027E2F4: mul.s       $f1, $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f2.fl);
    // 0x0027E2F8: or          $v1, $v1, $a0
    ctx->r3 = ctx->r3 | ctx->r4;
    // 0x0027E2FC: sll         $v0, $s2, 16
    ctx->r2 = S32(ctx->r18 << 16);
    // 0x0027E300: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x0027E304: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x0027E308: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x0027E30C: mul.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f2.fl);
    // 0x0027E310: sw          $v1, 0x28($t6)
    MEM_W(0X28, ctx->r14) = ctx->r3;
    // 0x0027E314: trunc.w.s   $f5, $f1
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 1);
    ctx->f_odd[(5 - 1) * 2] = TRUNC_W_S(ctx->f1.fl);
    // 0x0027E318: mfc1        $v0, $f5
    ctx->r2 = (int32_t)ctx->f_odd[(5 - 1) * 2];
    // 0x0027E31C: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x0027E320: sll         $v0, $v0, 12
    ctx->r2 = S32(ctx->r2 << 12);
    // 0x0027E324: trunc.w.s   $f5, $f0
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(5 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x0027E328: mfc1        $v1, $f5
    ctx->r3 = (int32_t)ctx->f_odd[(5 - 1) * 2];
    // 0x0027E32C: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x0027E330: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x0027E334: sw          $v0, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r2;
    // 0x0027E338: sw          $t5, 0x30($t6)
    MEM_W(0X30, ctx->r14) = ctx->r13;
    // 0x0027E33C: sw          $a1, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r5;
    // 0x0027E340: addiu       $a1, $a1, 0x10
    ctx->r5 = ADD32(ctx->r5, 0X10);
    // 0x0027E344: sw          $t4, 0x38($t6)
    MEM_W(0X38, ctx->r14) = ctx->r12;
    // 0x0027E348: jal         0x00207A54
    // 0x0027E34C: sw          $a1, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->r5;
    entry_00207A54(rdram, ctx);
        goto after_0;
    // 0x0027E34C: sw          $a1, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->r5;
    after_0:
    // 0x0027E350: lui         $a0, 0xE300
    ctx->r4 = S32(0XE300 << 16);
    // 0x0027E354: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x0027E358: ori         $a0, $a0, 0x1201
    ctx->r4 = ctx->r4 | 0X1201;
    // 0x0027E35C: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x0027E360: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x0027E364: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x0027E368: addiu       $v0, $zero, 0x2000
    ctx->r2 = ADD32(0, 0X2000);
    // 0x0027E36C: sw          $v0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r2;
    // 0x0027E370: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x0027E374: addiu       $v0, $v0, -0x6710
    ctx->r2 = ADD32(ctx->r2, -0X6710);
    // 0x0027E378: bne         $s1, $v0, L_0027E390
    if (ctx->r17 != ctx->r2) {
        // 0x0027E37C: sw          $a0, 0x0($v1)
        MEM_W(0X0, ctx->r3) = ctx->r4;
            goto L_0027E390;
    }
    // 0x0027E37C: sw          $a0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r4;
    // 0x0027E380: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x0027E384: lw          $v0, -0x6720($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X6720);
    // 0x0027E388: bne         $v0, $zero, L_0027E6A4
    if (ctx->r2 != 0) {
        // 0x0027E38C: lui         $a1, 0xE300
        ctx->r5 = S32(0XE300 << 16);
            goto L_0027E6A4;
    }
    // 0x0027E38C: lui         $a1, 0xE300
    ctx->r5 = S32(0XE300 << 16);
L_0027E390:
    // 0x0027E390: jal         0x00207FEC
    // 0x0027E394: addiu       $a0, $zero, 0x14
    ctx->r4 = ADD32(0, 0X14);
    func_00207FEC(rdram, ctx);
        goto after_1;
    // 0x0027E394: addiu       $a0, $zero, 0x14
    ctx->r4 = ADD32(0, 0X14);
    after_1:
    // 0x0027E398: lui         $t1, 0xE300
    ctx->r9 = S32(0XE300 << 16);
    // 0x0027E39C: ori         $t1, $t1, 0xA01
    ctx->r9 = ctx->r9 | 0XA01;
    // 0x0027E3A0: lui         $t2, 0xFFFC
    ctx->r10 = S32(0XFFFC << 16);
    // 0x0027E3A4: ori         $t2, $t2, 0xFFFC
    ctx->r10 = ctx->r10 | 0XFFFC;
    // 0x0027E3A8: lui         $t0, 0x30
    ctx->r8 = S32(0X30 << 16);
    // 0x0027E3AC: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x0027E3B0: lui         $v1, 0xFF10
    ctx->r3 = S32(0XFF10 << 16);
    // 0x0027E3B4: addu        $v0, $a1, $zero
    ctx->r2 = ADD32(ctx->r5, 0);
    // 0x0027E3B8: addiu       $a1, $a1, 0x8
    ctx->r5 = ADD32(ctx->r5, 0X8);
    // 0x0027E3BC: addiu       $a3, $a1, 0x8
    ctx->r7 = ADD32(ctx->r5, 0X8);
    // 0x0027E3C0: sw          $a1, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r5;
    // 0x0027E3C4: sw          $s6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r22;
    // 0x0027E3C8: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x0027E3CC: sw          $a3, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r7;
    // 0x0027E3D0: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x0027E3D4: lw          $v0, 0x2030($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2030);
    // 0x0027E3D8: addiu       $a2, $a1, 0x10
    ctx->r6 = ADD32(ctx->r5, 0X10);
    // 0x0027E3DC: sw          $t1, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r9;
    // 0x0027E3E0: sw          $t0, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r8;
    // 0x0027E3E4: sw          $a2, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r6;
    // 0x0027E3E8: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x0027E3EC: lw          $a0, 0xA78($a0)
    ctx->r4 = MEM_W(ctx->r4, 0XA78);
    // 0x0027E3F0: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x0027E3F4: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x0027E3F8: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x0027E3FC: sw          $v0, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->r2;
    // 0x0027E400: addiu       $v0, $a1, 0x18
    ctx->r2 = ADD32(ctx->r5, 0X18);
    // 0x0027E404: addiu       $v1, $a1, 0x20
    ctx->r3 = ADD32(ctx->r5, 0X20);
    // 0x0027E408: sw          $a0, 0x4($a3)
    MEM_W(0X4, ctx->r7) = ctx->r4;
    // 0x0027E40C: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x0027E410: sw          $s6, 0x10($a1)
    MEM_W(0X10, ctx->r5) = ctx->r22;
    // 0x0027E414: sw          $zero, 0x4($a2)
    MEM_W(0X4, ctx->r6) = 0;
    // 0x0027E418: addiu       $a2, $a1, 0x28
    ctx->r6 = ADD32(ctx->r5, 0X28);
    // 0x0027E41C: sw          $v1, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r3;
    // 0x0027E420: sw          $t1, 0x18($a1)
    MEM_W(0X18, ctx->r5) = ctx->r9;
    // 0x0027E424: sw          $t0, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r8;
    // 0x0027E428: lui         $v0, 0xF700
    ctx->r2 = S32(0XF700 << 16);
    // 0x0027E42C: andi        $a0, $s3, 0x3FF
    ctx->r4 = ctx->r19 & 0X3FF;
    // 0x0027E430: sll         $a0, $a0, 14
    ctx->r4 = S32(ctx->r4 << 14);
    // 0x0027E434: sw          $a2, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r6;
    // 0x0027E438: sw          $v0, 0x20($a1)
    MEM_W(0X20, ctx->r5) = ctx->r2;
    // 0x0027E43C: andi        $v0, $s2, 0x3FF
    ctx->r2 = ctx->r18 & 0X3FF;
    // 0x0027E440: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x0027E444: sw          $t2, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r10;
    // 0x0027E448: lui         $v1, 0xF600
    ctx->r3 = S32(0XF600 << 16);
    // 0x0027E44C: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x0027E450: or          $a0, $a0, $v0
    ctx->r4 = ctx->r4 | ctx->r2;
    // 0x0027E454: andi        $v1, $s5, 0x3FF
    ctx->r3 = ctx->r21 & 0X3FF;
    // 0x0027E458: sll         $v1, $v1, 14
    ctx->r3 = S32(ctx->r3 << 14);
    // 0x0027E45C: andi        $v0, $s4, 0x3FF
    ctx->r2 = ctx->r20 & 0X3FF;
    // 0x0027E460: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x0027E464: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x0027E468: sw          $a0, 0x28($a1)
    MEM_W(0X28, ctx->r5) = ctx->r4;
    // 0x0027E46C: sw          $v1, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r3;
    // 0x0027E470: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x0027E474: lw          $v0, -0x5528($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X5528);
    // 0x0027E478: addiu       $a1, $a1, 0x30
    ctx->r5 = ADD32(ctx->r5, 0X30);
    // 0x0027E47C: andi        $v0, $v0, 0x4000
    ctx->r2 = ctx->r2 & 0X4000;
    // 0x0027E480: beq         $v0, $zero, L_0027E498
    if (ctx->r2 == 0) {
        // 0x0027E484: sw          $a1, 0x0($s0)
        MEM_W(0X0, ctx->r16) = ctx->r5;
            goto L_0027E498;
    }
    // 0x0027E484: sw          $a1, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r5;
    // 0x0027E488: sb          $zero, 0x10($sp)
    MEM_B(0X10, ctx->r29) = 0;
    // 0x0027E48C: sb          $zero, 0x11($sp)
    MEM_B(0X11, ctx->r29) = 0;
    // 0x0027E490: j           L_0027E4BC
    // 0x0027E494: sb          $zero, 0x12($sp)
    MEM_B(0X12, ctx->r29) = 0;
        goto L_0027E4BC;
    // 0x0027E494: sb          $zero, 0x12($sp)
    MEM_B(0X12, ctx->r29) = 0;
L_0027E498:
    // 0x0027E498: lbu         $v0, 0x508($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X508);
    // 0x0027E49C: andi        $v0, $v0, 0xF8
    ctx->r2 = ctx->r2 & 0XF8;
    // 0x0027E4A0: sb          $v0, 0x10($sp)
    MEM_B(0X10, ctx->r29) = ctx->r2;
    // 0x0027E4A4: lbu         $v0, 0x509($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X509);
    // 0x0027E4A8: andi        $v0, $v0, 0xF8
    ctx->r2 = ctx->r2 & 0XF8;
    // 0x0027E4AC: sb          $v0, 0x11($sp)
    MEM_B(0X11, ctx->r29) = ctx->r2;
    // 0x0027E4B0: lbu         $v0, 0x50A($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X50A);
    // 0x0027E4B4: andi        $v0, $v0, 0xF8
    ctx->r2 = ctx->r2 & 0XF8;
    // 0x0027E4B8: sb          $v0, 0x12($sp)
    MEM_B(0X12, ctx->r29) = ctx->r2;
L_0027E4BC:
    // 0x0027E4BC: jal         0x00284188
    // 0x0027E4C0: nop

    func_00284188(rdram, ctx);
        goto after_2;
    // 0x0027E4C0: nop

    after_2:
    // 0x0027E4C4: beq         $v0, $zero, L_0027E4F8
    if (ctx->r2 == 0) {
        // 0x0027E4C8: lui         $v0, 0xD9FF
        ctx->r2 = S32(0XD9FF << 16);
            goto L_0027E4F8;
    }
    // 0x0027E4C8: lui         $v0, 0xD9FF
    ctx->r2 = S32(0XD9FF << 16);
    // 0x0027E4CC: jal         0x002843F4
    // 0x0027E4D0: nop

    func_002843F4(rdram, ctx);
        goto after_3;
    // 0x0027E4D0: nop

    after_3:
    // 0x0027E4D4: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x0027E4D8: ori         $v0, $zero, 0xFF00
    ctx->r2 = 0 | 0XFF00;
    // 0x0027E4DC: beq         $v1, $v0, L_0027E4F4
    if (ctx->r3 == ctx->r2) {
        // 0x0027E4E0: srl         $v0, $v1, 16
        ctx->r2 = S32(U32(ctx->r3) >> 16);
            goto L_0027E4F4;
    }
    // 0x0027E4E0: srl         $v0, $v1, 16
    ctx->r2 = S32(U32(ctx->r3) >> 16);
    // 0x0027E4E4: sb          $v0, 0x12($sp)
    MEM_B(0X12, ctx->r29) = ctx->r2;
    // 0x0027E4E8: srl         $v0, $v1, 8
    ctx->r2 = S32(U32(ctx->r3) >> 8);
    // 0x0027E4EC: sb          $v0, 0x11($sp)
    MEM_B(0X11, ctx->r29) = ctx->r2;
    // 0x0027E4F0: sb          $v1, 0x10($sp)
    MEM_B(0X10, ctx->r29) = ctx->r3;
L_0027E4F4:
    // 0x0027E4F4: lui         $v0, 0xD9FF
    ctx->r2 = S32(0XD9FF << 16);
L_0027E4F8:
    // 0x0027E4F8: ori         $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 | 0XFFFF;
    // 0x0027E4FC: lui         $a0, 0x1
    ctx->r4 = S32(0X1 << 16);
    // 0x0027E500: lui         $t0, 0x800E
    ctx->r8 = S32(0X800E << 16);
    // 0x0027E504: addiu       $t0, $t0, -0x71DC
    ctx->r8 = ADD32(ctx->r8, -0X71DC);
    // 0x0027E508: lw          $a1, 0x0($t0)
    ctx->r5 = MEM_W(ctx->r8, 0X0);
    // 0x0027E50C: ori         $a0, $a0, 0xF400
    ctx->r4 = ctx->r4 | 0XF400;
    // 0x0027E510: addu        $v1, $a1, $zero
    ctx->r3 = ADD32(ctx->r5, 0);
    // 0x0027E514: addiu       $a1, $a1, 0x8
    ctx->r5 = ADD32(ctx->r5, 0X8);
    // 0x0027E518: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x0027E51C: lui         $v0, 0x1
    ctx->r2 = S32(0X1 << 16);
    // 0x0027E520: sw          $v0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r2;
    // 0x0027E524: lui         $v0, 0xDB08
    ctx->r2 = S32(0XDB08 << 16);
    // 0x0027E528: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
    // 0x0027E52C: lhu         $a2, 0x526($s1)
    ctx->r6 = MEM_HU(ctx->r17, 0X526);
        turok2_patch_fog_position(rdram, ctx);

    // 0x0027E530: addiu       $v0, $zero, 0x3E8
    ctx->r2 = ADD32(0, 0X3E8);
    // 0x0027E534: subu        $v0, $v0, $a2
    ctx->r2 = SUB32(ctx->r2, ctx->r6);
    // 0x0027E538: div         $zero, $a0, $v0
    lo = S32(S64(S32(ctx->r4)) / S64(S32(ctx->r2))); hi = S32(S64(S32(ctx->r4)) % S64(S32(ctx->r2)));
    // 0x0027E53C: bne         $v0, $zero, L_0027E548
    if (ctx->r2 != 0) {
        // 0x0027E540: nop
    
            goto L_0027E548;
    }
    // 0x0027E540: nop

    // 0x0027E544: break       7
    do_break(2614596);
L_0027E548:
    // 0x0027E548: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x0027E54C: bne         $v0, $at, L_0027E560
    if (ctx->r2 != ctx->r1) {
        // 0x0027E550: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_0027E560;
    }
    // 0x0027E550: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x0027E554: bne         $a0, $at, L_0027E560
    if (ctx->r4 != ctx->r1) {
        // 0x0027E558: nop
    
            goto L_0027E560;
    }
    // 0x0027E558: nop

    // 0x0027E55C: break       6
    do_break(2614620);
L_0027E560:
    // 0x0027E560: mflo        $a0
    ctx->r4 = lo;
    // 0x0027E564: addiu       $v1, $zero, 0x1F4
    ctx->r3 = ADD32(0, 0X1F4);
    // 0x0027E568: subu        $v1, $v1, $a2
    ctx->r3 = SUB32(ctx->r3, ctx->r6);
    // 0x0027E56C: sll         $v1, $v1, 8
    ctx->r3 = S32(ctx->r3 << 8);
    // 0x0027E570: div         $zero, $v1, $v0
    lo = S32(S64(S32(ctx->r3)) / S64(S32(ctx->r2))); hi = S32(S64(S32(ctx->r3)) % S64(S32(ctx->r2)));
    // 0x0027E574: bne         $v0, $zero, L_0027E580
    if (ctx->r2 != 0) {
        // 0x0027E578: nop
    
            goto L_0027E580;
    }
    // 0x0027E578: nop

    // 0x0027E57C: break       7
    do_break(2614652);
L_0027E580:
    // 0x0027E580: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x0027E584: bne         $v0, $at, L_0027E598
    if (ctx->r2 != ctx->r1) {
        // 0x0027E588: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_0027E598;
    }
    // 0x0027E588: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x0027E58C: bne         $v1, $at, L_0027E598
    if (ctx->r3 != ctx->r1) {
        // 0x0027E590: nop
    
            goto L_0027E598;
    }
    // 0x0027E590: nop

    // 0x0027E594: break       6
    do_break(2614676);
L_0027E598:
    // 0x0027E598: mflo        $v1
    ctx->r3 = lo;
    // 0x0027E59C: addiu       $t1, $a1, 0x8
    ctx->r9 = ADD32(ctx->r5, 0X8);
    // 0x0027E5A0: addiu       $t2, $a1, 0x10
    ctx->r10 = ADD32(ctx->r5, 0X10);
    // 0x0027E5A4: addiu       $t3, $a1, 0x18
    ctx->r11 = ADD32(ctx->r5, 0X18);
    // 0x0027E5A8: addiu       $t4, $a1, 0x20
    ctx->r12 = ADD32(ctx->r5, 0X20);
    // 0x0027E5AC: sw          $a1, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r5;
    // 0x0027E5B0: sw          $t1, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r9;
    // 0x0027E5B4: sw          $t2, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r10;
    // 0x0027E5B8: lui         $v0, 0xF800
    ctx->r2 = S32(0XF800 << 16);
    // 0x0027E5BC: sw          $v0, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->r2;
    // 0x0027E5C0: sw          $t3, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r11;
    // 0x0027E5C4: sw          $t4, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r12;
    // 0x0027E5C8: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x0027E5CC: andi        $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 & 0XFFFF;
    // 0x0027E5D0: or          $a0, $a0, $v1
    ctx->r4 = ctx->r4 | ctx->r3;
    // 0x0027E5D4: sw          $a0, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r4;
    // 0x0027E5D8: lbu         $a0, 0x10($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X10);
    // 0x0027E5DC: lbu         $a2, 0x11($sp)
    ctx->r6 = MEM_BU(ctx->r29, 0X11);
    // 0x0027E5E0: lbu         $a3, 0x12($sp)
    ctx->r7 = MEM_BU(ctx->r29, 0X12);
    // 0x0027E5E4: sll         $v1, $a0, 24
    ctx->r3 = S32(ctx->r4 << 24);
    // 0x0027E5E8: sll         $v0, $a2, 16
    ctx->r2 = S32(ctx->r6 << 16);
    // 0x0027E5EC: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x0027E5F0: sll         $v0, $a3, 8
    ctx->r2 = S32(ctx->r7 << 8);
    // 0x0027E5F4: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x0027E5F8: ori         $v1, $v1, 0xFF
    ctx->r3 = ctx->r3 | 0XFF;
    // 0x0027E5FC: sw          $v1, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r3;
    // 0x0027E600: lui         $v1, 0xFF10
    ctx->r3 = S32(0XFF10 << 16);
    // 0x0027E604: sll         $a0, $a0, 8
    ctx->r4 = S32(ctx->r4 << 8);
    // 0x0027E608: andi        $a0, $a0, 0xF800
    ctx->r4 = ctx->r4 & 0XF800;
    // 0x0027E60C: sll         $a2, $a2, 3
    ctx->r6 = S32(ctx->r6 << 3);
    // 0x0027E610: andi        $a2, $a2, 0x7C0
    ctx->r6 = ctx->r6 & 0X7C0;
    // 0x0027E614: or          $a0, $a0, $a2
    ctx->r4 = ctx->r4 | ctx->r6;
    // 0x0027E618: srl         $a3, $a3, 2
    ctx->r7 = S32(U32(ctx->r7) >> 2);
    // 0x0027E61C: andi        $a3, $a3, 0x3E
    ctx->r7 = ctx->r7 & 0X3E;
    // 0x0027E620: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x0027E624: lw          $v0, 0x2030($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2030);
    // 0x0027E628: or          $a0, $a0, $a3
    ctx->r4 = ctx->r4 | ctx->r7;
    // 0x0027E62C: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x0027E630: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x0027E634: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x0027E638: sw          $v0, 0x10($a1)
    MEM_W(0X10, ctx->r5) = ctx->r2;
    // 0x0027E63C: lw          $v1, 0x110($s7)
    ctx->r3 = MEM_W(ctx->r23, 0X110);
    // 0x0027E640: addiu       $v0, $a1, 0x28
    ctx->r2 = ADD32(ctx->r5, 0X28);
    // 0x0027E644: sw          $v0, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r2;
    // 0x0027E648: lui         $v0, 0xF700
    ctx->r2 = S32(0XF700 << 16);
    // 0x0027E64C: sw          $v1, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->r3;
    // 0x0027E650: sw          $v0, 0x18($a1)
    MEM_W(0X18, ctx->r5) = ctx->r2;
    // 0x0027E654: ori         $v0, $a0, 0x1
    ctx->r2 = ctx->r4 | 0X1;
    // 0x0027E658: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x0027E65C: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x0027E660: or          $v0, $v0, $a0
    ctx->r2 = ctx->r2 | ctx->r4;
    // 0x0027E664: andi        $a0, $s3, 0x3FF
    ctx->r4 = ctx->r19 & 0X3FF;
    // 0x0027E668: sll         $a0, $a0, 14
    ctx->r4 = S32(ctx->r4 << 14);
    // 0x0027E66C: sw          $v0, 0x4($t3)
    MEM_W(0X4, ctx->r11) = ctx->r2;
    // 0x0027E670: andi        $v0, $s2, 0x3FF
    ctx->r2 = ctx->r18 & 0X3FF;
    // 0x0027E674: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x0027E678: lui         $v1, 0xF600
    ctx->r3 = S32(0XF600 << 16);
    // 0x0027E67C: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x0027E680: or          $a0, $a0, $v0
    ctx->r4 = ctx->r4 | ctx->r2;
    // 0x0027E684: andi        $v1, $s5, 0x3FF
    ctx->r3 = ctx->r21 & 0X3FF;
    // 0x0027E688: sll         $v1, $v1, 14
    ctx->r3 = S32(ctx->r3 << 14);
    // 0x0027E68C: andi        $v0, $s4, 0x3FF
    ctx->r2 = ctx->r20 & 0X3FF;
    // 0x0027E690: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x0027E694: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x0027E698: sw          $a0, 0x20($a1)
    MEM_W(0X20, ctx->r5) = ctx->r4;
    // 0x0027E69C: sw          $v1, 0x4($t4)
    MEM_W(0X4, ctx->r12) = ctx->r3;
    // 0x0027E6A0: lui         $a1, 0xE300
    ctx->r5 = S32(0XE300 << 16);
L_0027E6A4:
    // 0x0027E6A4: ori         $a1, $a1, 0x1801
    ctx->r5 = ctx->r5 | 0X1801;
    // 0x0027E6A8: lui         $a2, 0xE300
    ctx->r6 = S32(0XE300 << 16);
    // 0x0027E6AC: ori         $a2, $a2, 0x1A01
    ctx->r6 = ctx->r6 | 0X1A01;
    // 0x0027E6B0: lui         $a3, 0xE300
    ctx->r7 = S32(0XE300 << 16);
    // 0x0027E6B4: lui         $s0, 0x800E
    ctx->r16 = S32(0X800E << 16);
    // 0x0027E6B8: addiu       $s0, $s0, -0x71DC
    ctx->r16 = ADD32(ctx->r16, -0X71DC);
    // 0x0027E6BC: ori         $a3, $a3, 0xA01
    ctx->r7 = ctx->r7 | 0XA01;
    // 0x0027E6C0: lw          $v1, 0x0($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X0);
    // 0x0027E6C4: lui         $s2, 0xE700
    ctx->r18 = S32(0XE700 << 16);
    // 0x0027E6C8: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
    // 0x0027E6CC: addiu       $v1, $v1, 0x8
    ctx->r3 = ADD32(ctx->r3, 0X8);
    // 0x0027E6D0: addiu       $a0, $v1, 0x8
    ctx->r4 = ADD32(ctx->r3, 0X8);
    // 0x0027E6D4: sw          $v1, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r3;
    // 0x0027E6D8: sw          $s2, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r18;
    // 0x0027E6DC: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x0027E6E0: sw          $a0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r4;
    // 0x0027E6E4: sw          $a1, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r5;
    // 0x0027E6E8: addiu       $a1, $v1, 0x10
    ctx->r5 = ADD32(ctx->r3, 0X10);
    // 0x0027E6EC: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x0027E6F0: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x0027E6F4: sw          $a1, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r5;
    // 0x0027E6F8: sw          $a2, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r6;
    // 0x0027E6FC: sw          $v0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r2;
    // 0x0027E700: addiu       $v0, $v1, 0x18
    ctx->r2 = ADD32(ctx->r3, 0X18);
    // 0x0027E704: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x0027E708: lui         $v0, 0x10
    ctx->r2 = S32(0X10 << 16);
    // 0x0027E70C: sw          $a3, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->r7;
    // 0x0027E710: sw          $v0, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r2;
    // 0x0027E714: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x0027E718: addiu       $v0, $v0, -0x6710
    ctx->r2 = ADD32(ctx->r2, -0X6710);
    // 0x0027E71C: beq         $s1, $v0, L_0027E72C
    if (ctx->r17 == ctx->r2) {
        // 0x0027E720: nop
    
            goto L_0027E72C;
    }
    // 0x0027E720: nop

    // 0x0027E724: jal         0x002284E0
    // 0x0027E728: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_002284E0(rdram, ctx);
        goto after_4;
    // 0x0027E728: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_4:
L_0027E72C:
    // 0x0027E72C: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x0027E730: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x0027E734: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x0027E738: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x0027E73C: sw          $s2, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r18;
    // 0x0027E740: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x0027E744: lw          $ra, 0x38($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X38);
    // 0x0027E748: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x0027E74C: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x0027E750: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x0027E754: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x0027E758: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x0027E75C: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x0027E760: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x0027E764: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x0027E768: jr          $ra
    // 0x0027E76C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x0027E76C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_004208E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004208E0: lw          $a0, 0x20($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X20);
    // 0x004208E4: jal         0x00285BD0
    // 0x004208E8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_00285BD0(rdram, ctx);
        goto after_0;
    // 0x004208E8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x004208EC: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x004208F0: lw          $v1, 0x9C0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X9C0);
    // 0x004208F4: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
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
        goto after_1;
    // 0x0042095C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_1:
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
        goto after_2;
    // 0x00420974: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_2:
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
        goto after_3;
    // 0x0042098C: nop

    after_3:
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
        goto after_4;
    // 0x004209D8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_4:
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
        goto after_5;
    // 0x004209F0: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_5:
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
        goto after_6;
    // 0x00420A58: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_6:
    // 0x00420A5C: jal         0x0042655C
    // 0x00420A60: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_0042655C(rdram, ctx);
        goto after_7;
    // 0x00420A60: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_7:
    // 0x00420A64: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x00420A68: jal         0x002858CC
    // 0x00420A6C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_002858CC(rdram, ctx);
        goto after_8;
    // 0x00420A6C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_8:
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
        goto after_9;
    // 0x00420B04: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_9:
    // 0x00420B08: jal         0x0042655C
    // 0x00420B0C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_0042655C(rdram, ctx);
        goto after_10;
    // 0x00420B0C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_10:
    // 0x00420B10: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x00420B14: jal         0x002858CC
    // 0x00420B18: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_002858CC(rdram, ctx);
        goto after_11;
    // 0x00420B18: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_11:
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
        goto after_12;
    // 0x00420B9C: nop

    after_12:
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
        goto after_13;
    // 0x00420C10: nop

    after_13:
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
RECOMP_FUNC void func_004213CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004213CC: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x004213D0: lw          $v0, 0x2010($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2010);
    // 0x004213D4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x004213D8: bne         $v0, $zero, L_004213F0
    if (ctx->r2 != 0) {
        // 0x004213DC: sw          $ra, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r31;
            goto L_004213F0;
    }
    // 0x004213DC: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x004213E0: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x004213E4: lw          $v0, 0x2014($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2014);
    // 0x004213E8: beq         $v0, $zero, L_004213F8
    if (ctx->r2 == 0) {
        // 0x004213EC: nop
    
            goto L_004213F8;
    }
    // 0x004213EC: nop

L_004213F0:
    // 0x004213F0: jal         0x002053A8
    // 0x004213F4: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_002053A8(rdram, ctx);
        goto after_0;
    // 0x004213F4: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_0:
L_004213F8:
    // 0x004213F8: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x004213FC: lw          $a1, 0x2010($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X2010);
    // 0x00421400: beq         $a1, $zero, L_00421410
    if (ctx->r5 == 0) {
        // 0x00421404: nop
    
            goto L_00421410;
    }
    // 0x00421404: nop

    // 0x00421408: jal         0x002052D8
    // 0x0042140C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_002052D8(rdram, ctx);
        goto after_1;
    // 0x0042140C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_1:
L_00421410:
    // 0x00421410: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x00421414: lw          $a1, 0x2014($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X2014);
    // 0x00421418: beq         $a1, $zero, L_00421428
    if (ctx->r5 == 0) {
        // 0x0042141C: nop
    
            goto L_00421428;
    }
    // 0x0042141C: nop

    // 0x00421420: jal         0x002052D8
    // 0x00421424: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_002052D8(rdram, ctx);
        goto after_2;
    // 0x00421424: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_2:
L_00421428:
    // 0x00421428: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x0042142C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00421430: sw          $zero, 0x2010($at)
    MEM_W(0X2010, ctx->r1) = 0;
    // 0x00421434: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00421438: sw          $zero, 0x2014($at)
    MEM_W(0X2014, ctx->r1) = 0;
    // 0x0042143C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00421440: sw          $zero, 0x2018($at)
    MEM_W(0X2018, ctx->r1) = 0;
    // 0x00421444: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00421448: sw          $zero, 0x201C($at)
    MEM_W(0X201C, ctx->r1) = 0;
    // 0x0042144C: jr          $ra
    // 0x00421450: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00421450: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00468E0C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00468E0C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00468E10: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x00468E14: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x00468E18: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x00468E1C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00468E20: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00468E24: lw          $v0, 0x8($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X8);
    // 0x00468E28: blez        $v0, L_00468E58
    if (SIGNED(ctx->r2) <= 0) {
        // 0x00468E2C: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_00468E58;
    }
    // 0x00468E2C: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x00468E30: addu        $s1, $s0, $zero
    ctx->r17 = ADD32(ctx->r16, 0);
L_00468E34:
    // 0x00468E34: lw          $a0, 0x4($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X4);
    // 0x00468E38: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x00468E3C: addu        $a0, $s1, $a0
    ctx->r4 = ADD32(ctx->r17, ctx->r4);
    // 0x00468E40: jal         0x0042FF10
    // 0x00468E44: addiu       $a0, $a0, 0x558
    ctx->r4 = ADD32(ctx->r4, 0X558);
    func_0042FF10(rdram, ctx);
        goto after_0;
    // 0x00468E44: addiu       $a0, $a0, 0x558
    ctx->r4 = ADD32(ctx->r4, 0X558);
    after_0:
    // 0x00468E48: lw          $v0, 0x8($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X8);
    // 0x00468E4C: slt         $v0, $s0, $v0
    ctx->r2 = SIGNED(ctx->r16) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x00468E50: bne         $v0, $zero, L_00468E34
    if (ctx->r2 != 0) {
        // 0x00468E54: addiu       $s1, $s1, 0xEC0
        ctx->r17 = ADD32(ctx->r17, 0XEC0);
            goto L_00468E34;
    }
    // 0x00468E54: addiu       $s1, $s1, 0xEC0
    ctx->r17 = ADD32(ctx->r17, 0XEC0);
L_00468E58:
    // 0x00468E58: jal         0x0042FF10
    // 0x00468E5C: addiu       $a0, $s2, 0x598
    ctx->r4 = ADD32(ctx->r18, 0X598);
    func_0042FF10(rdram, ctx);
        goto after_1;
    // 0x00468E5C: addiu       $a0, $s2, 0x598
    ctx->r4 = ADD32(ctx->r18, 0X598);
    after_1:
    // 0x00468E60: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x00468E64: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x00468E68: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00468E6C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00468E70: jr          $ra
    // 0x00468E74: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00468E74: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_002759B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002759B4: lui         $v0, 0x800F
    ctx->r2 = S32(0X800F << 16);
    // 0x002759B8: lw          $v0, 0x478C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X478C);
    // 0x002759BC: jr          $ra
    // 0x002759C0: nop

    return;
    // 0x002759C0: nop

;}
RECOMP_FUNC void func_0029A080(uint8_t* rdram, recomp_context* ctx) {
    // s32 __osSiRawStartDma(s32 direction, void* dramAddr)
    //
    // Replaced. The original points SI_DRAM_ADDR at the buffer, kicks off a
    // RD64B/WR64B burst against PIF RAM and relies on the SI interrupt to
    // release the osRecvMesg that follows. Nothing raises that interrupt here,
    // so both callers, func_00299A40 and func_00427F80, blocked forever.
    // See src/si.cpp.
    extern void turok2_si_raw_start_dma(uint8_t* rdram, recomp_context* ctx);
    turok2_si_raw_start_dma(rdram, ctx);
}
RECOMP_FUNC void func_00253934(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00253934: lwc1        $f1, 0xBE4($a0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r4, 0XBE4);
    // 0x00253938: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0025393C: lwc1        $f0, 0x70E8($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X70E8);
    // 0x00253940: lw          $v0, 0xBEC($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XBEC);
    // 0x00253944: bne         $v0, $zero, L_00253974
    if (ctx->r2 != 0) {
        // 0x00253948: sub.s       $f1, $f1, $f0
        CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl - ctx->f0.fl;
            goto L_00253974;
    }
    // 0x00253948: sub.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl - ctx->f0.fl;
    // 0x0025394C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00253950: lwc1        $f0, 0x70EC($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X70EC);
    // 0x00253954: mul.s       $f0, $f1, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x00253958: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0025395C: lwc1        $f2, 0x70F0($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X70F0);
    // 0x00253960: mov.s       $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    ctx->f1.fl = ctx->f0.fl;
    // 0x00253964: c.lt.s      $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f2.fl < ctx->f1.fl;
    // 0x00253968: nop

    // 0x0025396C: bc1f        L_0025397C
    if (!c1cs) {
        // 0x00253970: nop
    
            goto L_0025397C;
    }
    // 0x00253970: nop

L_00253974:
    // 0x00253974: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00253978: lwc1        $f1, 0x70F4($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X70F4);
L_0025397C:
    // 0x0025397C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00253980: lwc1        $f0, 0x70F8($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X70F8);
    // 0x00253984: jr          $ra
    // 0x00253988: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    return;
    // 0x00253988: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
;}
RECOMP_FUNC void func_0044E31C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_004154C4:
    // 0x0044E31C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
L_00415500:
    // 0x0044E320: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
L_00415508:
    // 0x0044E324: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
L_004155AC:
    // 0x0044E328: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
L_0041560C:
    // 0x0044E32C: sw          $s5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r21;
L_004156D8:
    // 0x0044E330: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x0044E334: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x0044E338: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x0044E33C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0044E340: lw          $v0, 0x14($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X14);
    // 0x0044E344: addu        $s5, $a1, $zero
    ctx->r21 = ADD32(ctx->r5, 0);
    // 0x0044E348: lw          $v0, 0x14($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X14);
    // 0x0044E34C: beq         $v0, $zero, L_0044E360
    if (ctx->r2 == 0) {
        // 0x0044E350: addu        $s4, $zero, $zero
        ctx->r20 = ADD32(0, 0);
            goto L_0044E360;
    }
    // 0x0044E350: addu        $s4, $zero, $zero
    ctx->r20 = ADD32(0, 0);
    // 0x0044E354: jalr        $v0
    // 0x0044E358: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x0044E358: nop

    after_0:
    // 0x0044E35C: addu        $s4, $v0, $zero
    ctx->r20 = ADD32(ctx->r2, 0);
L_0044E360:
    // 0x0044E360: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x0044E364: lw          $s0, 0x10($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X10);
    // 0x0044E368: lw          $s2, 0xC($s1)
    ctx->r18 = MEM_W(ctx->r17, 0XC);
    // 0x0044E36C: addiu       $s0, $s0, -0x1
    ctx->r16 = ADD32(ctx->r16, -0X1);
    // 0x0044E370: beq         $s0, $v0, L_0044E3A0
    if (ctx->r16 == ctx->r2) {
        // 0x0044E374: addu        $s3, $v0, $zero
        ctx->r19 = ADD32(ctx->r2, 0);
            goto L_0044E3A0;
    }
    // 0x0044E374: addu        $s3, $v0, $zero
    ctx->r19 = ADD32(ctx->r2, 0);
L_0044E378:
    // 0x0044E378: lw          $v0, 0x18($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X18);
    // 0x0044E37C: lw          $v0, 0x18($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X18);
    // 0x0044E380: beq         $v0, $zero, L_0044E394
    if (ctx->r2 == 0) {
        // 0x0044E384: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_0044E394;
    }
    // 0x0044E384: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x0044E388: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x0044E38C: jalr        $v0
    // 0x0044E390: addu        $a2, $s5, $zero
    ctx->r6 = ADD32(ctx->r21, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_1;
    // 0x0044E390: addu        $a2, $s5, $zero
    ctx->r6 = ADD32(ctx->r21, 0);
    after_1:
L_0044E394:
    // 0x0044E394: addiu       $s0, $s0, -0x1
    ctx->r16 = ADD32(ctx->r16, -0X1);
    // 0x0044E398: bne         $s0, $s3, L_0044E378
    if (ctx->r16 != ctx->r19) {
        // 0x0044E39C: addiu       $s2, $s2, 0x28
        ctx->r18 = ADD32(ctx->r18, 0X28);
            goto L_0044E378;
    }
    // 0x0044E39C: addiu       $s2, $s2, 0x28
    ctx->r18 = ADD32(ctx->r18, 0X28);
L_0044E3A0:
    // 0x0044E3A0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0044E3A4: lh          $v1, 0x0($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X0);
    // 0x0044E3A8: lwc1        $f0, 0x2C($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X2C);
    // 0x0044E3AC: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0044E3B0: lwc1        $f1, 0x6D28($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X6D28);
    // 0x0044E3B4: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x0044E3B8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x0044E3BC: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x0044E3C0: lw          $v1, 0xC($s1)
    ctx->r3 = MEM_W(ctx->r17, 0XC);
    // 0x0044E3C4: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x0044E3C8: addu        $s2, $v1, $v0
    ctx->r18 = ADD32(ctx->r3, ctx->r2);
    // 0x0044E3CC: swc1        $f0, 0x2C($s1)
    MEM_W(0X2C, ctx->r17) = ctx->f0.u32l;
    // 0x0044E3D0: lw          $v1, 0x8($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X8);
    // 0x0044E3D4: lui         $v0, 0x40
    ctx->r2 = S32(0X40 << 16);
    // 0x0044E3D8: jal         0x00416C28
    // 0x0044E3DC: and         $s3, $v1, $v0
    ctx->r19 = ctx->r3 & ctx->r2;
    func_00416C28(rdram, ctx);
        goto after_2;
    // 0x0044E3DC: and         $s3, $v1, $v0
    ctx->r19 = ctx->r3 & ctx->r2;
    after_2:
    // 0x0044E3E0: lh          $v1, 0x28($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X28);
    // 0x0044E3E4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x0044E3E8: beq         $v1, $a0, L_0044E454
    if (ctx->r3 == ctx->r4) {
        // 0x0044E3EC: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_0044E454;
    }
    // 0x0044E3EC: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x0044E3F0: beq         $v0, $zero, L_0044E408
    if (ctx->r2 == 0) {
        // 0x0044E3F4: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_0044E408;
    }
    // 0x0044E3F4: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x0044E3F8: beq         $v1, $zero, L_0044E420
    if (ctx->r3 == 0) {
        // 0x0044E3FC: slti        $v0, $v1, 0x3
        ctx->r2 = SIGNED(ctx->r3) < 0X3 ? 1 : 0;
            goto L_0044E420;
    }
    // 0x0044E3FC: slti        $v0, $v1, 0x3
    ctx->r2 = SIGNED(ctx->r3) < 0X3 ? 1 : 0;
    // 0x0044E400: j           L_00415508
    // 0x0044E404: nop

    func_00415508(rdram, ctx);
    return;
    // 0x0044E404: nop

L_0044E408:
    // 0x0044E408: beq         $v1, $v0, L_0044E490
    if (ctx->r3 == ctx->r2) {
        // 0x0044E40C: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_0044E490;
    }
    // 0x0044E40C: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x0044E410: beq         $v1, $v0, L_0044E4D0
    if (ctx->r3 == ctx->r2) {
        // 0x0044E414: nop
    
            goto L_0044E4D0;
    }
    // 0x0044E414: nop

    // 0x0044E418: j           L_00415500
    // 0x0044E41C: nop

    func_00415500(rdram, ctx);
    return;
    // 0x0044E41C: nop

L_0044E420:
    // 0x0044E420: lwc1        $f0, 0x30($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X30);
    // 0x0044E424: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0044E428: lwc1        $f1, 0x6D28($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X6D28);
    // 0x0044E42C: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x0044E430: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0044E434: lwc1        $f1, 0xC0C($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0XC0C);
    // 0x0044E438: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x0044E43C: nop

    // 0x0044E440: bc1f        L_0044E500
    if (!c1cs) {
        // 0x0044E444: swc1        $f0, 0x30($s1)
        MEM_W(0X30, ctx->r17) = ctx->f0.u32l;
            goto L_0044E500;
    }
    // 0x0044E444: swc1        $f0, 0x30($s1)
    MEM_W(0X30, ctx->r17) = ctx->f0.u32l;
    // 0x0044E448: swc1        $f1, 0x30($s1)
    MEM_W(0X30, ctx->r17) = ctx->f_odd[(1 - 1) * 2];
    // 0x0044E44C: j           L_00415500
    // 0x0044E450: sh          $a0, 0x28($s1)
    MEM_H(0X28, ctx->r17) = ctx->r4;
    func_00415500(rdram, ctx);
    return;
    // 0x0044E450: sh          $a0, 0x28($s1)
    MEM_H(0X28, ctx->r17) = ctx->r4;
L_0044E454:
    // 0x0044E454: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0044E458: lwc1        $f0, 0x6D28($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6D28);
    // 0x0044E45C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0044E460: lwc1        $f1, 0xC10($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0XC10);
    // 0x0044E464: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0044E468: lwc1        $f1, 0x34($s1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r17, 0X34);
    // 0x0044E46C: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x0044E470: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0044E474: lwc1        $f0, 0xC14($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0XC14);
    // 0x0044E478: c.le.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl <= ctx->f1.fl;
    // 0x0044E47C: nop

    // 0x0044E480: bc1f        L_0044E500
    if (!c1cs) {
        // 0x0044E484: swc1        $f1, 0x34($s1)
        MEM_W(0X34, ctx->r17) = ctx->f_odd[(1 - 1) * 2];
            goto L_0044E500;
    }
    // 0x0044E484: swc1        $f1, 0x34($s1)
    MEM_W(0X34, ctx->r17) = ctx->f_odd[(1 - 1) * 2];
    // 0x0044E488: j           L_004154C4
    // 0x0044E48C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    func_004154C4(rdram, ctx);
    return;
    // 0x0044E48C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_0044E490:
    // 0x0044E490: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0044E494: lwc1        $f0, 0x6D28($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6D28);
    // 0x0044E498: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0044E49C: lwc1        $f1, 0xC18($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0XC18);
    // 0x0044E4A0: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0044E4A4: lwc1        $f1, 0x34($s1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r17, 0X34);
    // 0x0044E4A8: sub.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl - ctx->f0.fl;
    // 0x0044E4AC: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x0044E4B0: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x0044E4B4: nop

    // 0x0044E4B8: bc1f        L_0044E500
    if (!c1cs) {
        // 0x0044E4BC: swc1        $f1, 0x34($s1)
        MEM_W(0X34, ctx->r17) = ctx->f_odd[(1 - 1) * 2];
            goto L_0044E500;
    }
    // 0x0044E4BC: swc1        $f1, 0x34($s1)
    MEM_W(0X34, ctx->r17) = ctx->f_odd[(1 - 1) * 2];
    // 0x0044E4C0: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x0044E4C4: swc1        $f0, 0x34($s1)
    MEM_W(0X34, ctx->r17) = ctx->f0.u32l;
    // 0x0044E4C8: j           L_00415500
    // 0x0044E4CC: sh          $v0, 0x28($s1)
    MEM_H(0X28, ctx->r17) = ctx->r2;
    func_00415500(rdram, ctx);
    return;
    // 0x0044E4CC: sh          $v0, 0x28($s1)
    MEM_H(0X28, ctx->r17) = ctx->r2;
L_0044E4D0:
    // 0x0044E4D0: lwc1        $f0, 0x30($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X30);
    // 0x0044E4D4: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0044E4D8: lwc1        $f1, 0x6D28($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X6D28);
    // 0x0044E4DC: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x0044E4E0: mtc1        $zero, $f1
    ctx->f_odd[(1 - 1) * 2] = 0;
    // 0x0044E4E4: c.le.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl <= ctx->f1.fl;
    // 0x0044E4E8: nop

    // 0x0044E4EC: bc1f        L_0044E500
    if (!c1cs) {
        // 0x0044E4F0: swc1        $f0, 0x30($s1)
        MEM_W(0X30, ctx->r17) = ctx->f0.u32l;
            goto L_0044E500;
    }
    // 0x0044E4F0: swc1        $f0, 0x30($s1)
    MEM_W(0X30, ctx->r17) = ctx->f0.u32l;
    // 0x0044E4F4: swc1        $f1, 0x30($s1)
    MEM_W(0X30, ctx->r17) = ctx->f_odd[(1 - 1) * 2];
    // 0x0044E4F8: j           L_004156D8
    // 0x0044E4FC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    func_004156D8(rdram, ctx);
    return;
    // 0x0044E4FC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_0044E500:
    // 0x0044E500: lh          $v1, 0x28($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X28);
    // 0x0044E504: slti        $v0, $v1, 0x3
    ctx->r2 = SIGNED(ctx->r3) < 0X3 ? 1 : 0;
    // 0x0044E508: beq         $v0, $zero, L_0044E6D8
    if (ctx->r2 == 0) {
        // 0x0044E50C: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_0044E6D8;
    }
    // 0x0044E50C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x0044E510: bltz        $v1, L_0044E6D8
    if (SIGNED(ctx->r3) < 0) {
        // 0x0044E514: nop
    
            goto L_0044E6D8;
    }
    // 0x0044E514: nop

    // 0x0044E518: beq         $s4, $zero, L_0044E524
    if (ctx->r20 == 0) {
        // 0x0044E51C: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_0044E524;
    }
    // 0x0044E51C: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x0044E520: sh          $v0, 0x28($s1)
    MEM_H(0X28, ctx->r17) = ctx->r2;
L_0044E524:
    // 0x0044E524: lw          $v0, 0x8($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X8);
    // 0x0044E528: andi        $v0, $v0, 0x8
    ctx->r2 = ctx->r2 & 0X8;
    // 0x0044E52C: bne         $v0, $zero, L_0044E6D8
    if (ctx->r2 != 0) {
        // 0x0044E530: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_0044E6D8;
    }
    // 0x0044E530: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x0044E534: lh          $v1, 0x4($s2)
    ctx->r3 = MEM_H(ctx->r18, 0X4);
    // 0x0044E538: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x0044E53C: bne         $v1, $v0, L_0044E5AC
    if (ctx->r3 != ctx->r2) {
        // 0x0044E540: addiu       $s0, $zero, 0x1
        ctx->r16 = ADD32(0, 0X1);
            goto L_0044E5AC;
    }
    // 0x0044E540: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
    // 0x0044E544: lw          $v1, 0x20($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X20);
    // 0x0044E548: lui         $v0, 0x2
    ctx->r2 = S32(0X2 << 16);
    // 0x0044E54C: lw          $v1, 0xB0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0XB0);
    // 0x0044E550: ori         $v0, $v0, 0x202
    ctx->r2 = ctx->r2 | 0X202;
    // 0x0044E554: and         $v0, $v1, $v0
    ctx->r2 = ctx->r3 & ctx->r2;
    // 0x0044E558: beq         $v0, $zero, L_0044E57C
    if (ctx->r2 == 0) {
        // 0x0044E55C: lui         $v0, 0x4
        ctx->r2 = S32(0X4 << 16);
            goto L_0044E57C;
    }
    // 0x0044E55C: lui         $v0, 0x4
    ctx->r2 = S32(0X4 << 16);
    // 0x0044E560: lw          $v0, 0x1C($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X1C);
    // 0x0044E564: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x0044E568: addiu       $v0, $v0, -0x2
    ctx->r2 = ADD32(ctx->r2, -0X2);
    // 0x0044E56C: bgez        $v0, L_0044E5AC
    if (SIGNED(ctx->r2) >= 0) {
        // 0x0044E570: sw          $v0, 0x1C($s2)
        MEM_W(0X1C, ctx->r18) = ctx->r2;
            goto L_0044E5AC;
    }
    // 0x0044E570: sw          $v0, 0x1C($s2)
    MEM_W(0X1C, ctx->r18) = ctx->r2;
    // 0x0044E574: j           L_004155AC
    // 0x0044E578: sw          $zero, 0x1C($s2)
    MEM_W(0X1C, ctx->r18) = 0;
    func_004155AC(rdram, ctx);
    return;
    // 0x0044E578: sw          $zero, 0x1C($s2)
    MEM_W(0X1C, ctx->r18) = 0;
L_0044E57C:
    // 0x0044E57C: ori         $v0, $v0, 0x101
    ctx->r2 = ctx->r2 | 0X101;
    // 0x0044E580: and         $v0, $v1, $v0
    ctx->r2 = ctx->r3 & ctx->r2;
    // 0x0044E584: beq         $v0, $zero, L_0044E5AC
    if (ctx->r2 == 0) {
        // 0x0044E588: nop
    
            goto L_0044E5AC;
    }
    // 0x0044E588: nop

    // 0x0044E58C: lw          $v0, 0x1C($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X1C);
    // 0x0044E590: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
    // 0x0044E594: sw          $v0, 0x1C($s2)
    MEM_W(0X1C, ctx->r18) = ctx->r2;
    // 0x0044E598: slti        $v0, $v0, 0x100
    ctx->r2 = SIGNED(ctx->r2) < 0X100 ? 1 : 0;
    // 0x0044E59C: bne         $v0, $zero, L_0044E5AC
    if (ctx->r2 != 0) {
        // 0x0044E5A0: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_0044E5AC;
    }
    // 0x0044E5A0: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x0044E5A4: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x0044E5A8: sw          $v0, 0x1C($s2)
    MEM_W(0X1C, ctx->r18) = ctx->r2;
L_0044E5AC:
    // 0x0044E5AC: bne         $s3, $zero, L_0044E5F4
    if (ctx->r19 != 0) {
        // 0x0044E5B0: lui         $v1, 0x6
        ctx->r3 = S32(0X6 << 16);
            goto L_0044E5F4;
    }
    // 0x0044E5B0: lui         $v1, 0x6
    ctx->r3 = S32(0X6 << 16);
    // 0x0044E5B4: lw          $a0, 0x20($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X20);
    // 0x0044E5B8: jal         0x00285628
    // 0x0044E5BC: nop

    func_00285628(rdram, ctx);
        goto after_3;
    // 0x0044E5BC: nop

    after_3:
    // 0x0044E5C0: beq         $v0, $zero, L_0044E5D0
    if (ctx->r2 == 0) {
        // 0x0044E5C4: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_0044E5D0;
    }
    // 0x0044E5C4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0044E5C8: jal         0x004151B4
    // 0x0044E5CC: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    func_004151B4(rdram, ctx);
        goto after_4;
    // 0x0044E5CC: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    after_4:
L_0044E5D0:
    // 0x0044E5D0: lw          $a0, 0x20($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X20);
    // 0x0044E5D4: jal         0x00285670
    // 0x0044E5D8: nop

    func_00285670(rdram, ctx);
        goto after_5;
    // 0x0044E5D8: nop

    after_5:
    // 0x0044E5DC: beq         $v0, $zero, L_0044E60C
    if (ctx->r2 == 0) {
        // 0x0044E5E0: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_0044E60C;
    }
    // 0x0044E5E0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0044E5E4: jal         0x004151B4
    // 0x0044E5E8: addiu       $a1, $zero, 0x11
    ctx->r5 = ADD32(0, 0X11);
    func_004151B4(rdram, ctx);
        goto after_6;
    // 0x0044E5E8: addiu       $a1, $zero, 0x11
    ctx->r5 = ADD32(0, 0X11);
    after_6:
    // 0x0044E5EC: j           L_0041560C
    // 0x0044E5F0: nop

    func_0041560C(rdram, ctx);
    return;
    // 0x0044E5F0: nop

L_0044E5F4:
    // 0x0044E5F4: lw          $v0, 0x20($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X20);
    // 0x0044E5F8: lw          $v0, 0xB0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0XB0);
    // 0x0044E5FC: ori         $v1, $v1, 0x303
    ctx->r3 = ctx->r3 | 0X303;
    // 0x0044E600: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x0044E604: bnel        $v0, $zero, L_0044E60C
    if (ctx->r2 != 0) {
        // 0x0044E608: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_0044E60C;
    }
    goto skip_0;
    // 0x0044E608: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    skip_0:
L_0044E60C:
    // 0x0044E60C: beq         $s0, $zero, L_0044E64C
    if (ctx->r16 == 0) {
        // 0x0044E610: nop
    
            goto L_0044E64C;
    }
    // 0x0044E610: nop

    // 0x0044E614: lw          $a0, 0x20($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X20);
    // 0x0044E618: jal         0x002856B8
    // 0x0044E61C: nop

    func_002856B8(rdram, ctx);
        goto after_7;
    // 0x0044E61C: nop

    after_7:
    // 0x0044E620: beq         $v0, $zero, L_0044E630
    if (ctx->r2 == 0) {
        // 0x0044E624: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_0044E630;
    }
    // 0x0044E624: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0044E628: jal         0x004151B4
    // 0x0044E62C: addiu       $a1, $zero, 0x12
    ctx->r5 = ADD32(0, 0X12);
    func_004151B4(rdram, ctx);
        goto after_8;
    // 0x0044E62C: addiu       $a1, $zero, 0x12
    ctx->r5 = ADD32(0, 0X12);
    after_8:
L_0044E630:
    // 0x0044E630: lw          $a0, 0x20($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X20);
    // 0x0044E634: jal         0x00285700
    // 0x0044E638: nop

    func_00285700(rdram, ctx);
        goto after_9;
    // 0x0044E638: nop

    after_9:
    // 0x0044E63C: beq         $v0, $zero, L_0044E64C
    if (ctx->r2 == 0) {
        // 0x0044E640: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_0044E64C;
    }
    // 0x0044E640: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0044E644: jal         0x004151B4
    // 0x0044E648: addiu       $a1, $zero, 0x13
    ctx->r5 = ADD32(0, 0X13);
    func_004151B4(rdram, ctx);
        goto after_10;
    // 0x0044E648: addiu       $a1, $zero, 0x13
    ctx->r5 = ADD32(0, 0X13);
    after_10:
L_0044E64C:
    // 0x0044E64C: lh          $v1, 0x28($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X28);
    // 0x0044E650: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x0044E654: bne         $v1, $v0, L_0044E6D8
    if (ctx->r3 != ctx->r2) {
        // 0x0044E658: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_0044E6D8;
    }
    // 0x0044E658: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x0044E65C: lw          $a0, 0x20($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X20);
    // 0x0044E660: jal         0x002855E8
    // 0x0044E664: nop

    func_002855E8(rdram, ctx);
        goto after_11;
    // 0x0044E664: nop

    after_11:
    // 0x0044E668: bne         $v0, $zero, L_0044E6A8
    if (ctx->r2 != 0) {
        // 0x0044E66C: nop
    
            goto L_0044E6A8;
    }
    // 0x0044E66C: nop

    // 0x0044E670: lw          $a0, 0x20($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X20);
    // 0x0044E674: jal         0x00285628
    // 0x0044E678: nop

    func_00285628(rdram, ctx);
        goto after_12;
    // 0x0044E678: nop

    after_12:
    // 0x0044E67C: beq         $v0, $zero, L_0044E68C
    if (ctx->r2 == 0) {
        // 0x0044E680: nop
    
            goto L_0044E68C;
    }
    // 0x0044E680: nop

    // 0x0044E684: bne         $s3, $zero, L_0044E6A8
    if (ctx->r19 != 0) {
        // 0x0044E688: nop
    
            goto L_0044E6A8;
    }
    // 0x0044E688: nop

L_0044E68C:
    // 0x0044E68C: lw          $a0, 0x20($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X20);
    // 0x0044E690: jal         0x00285670
    // 0x0044E694: nop

    func_00285670(rdram, ctx);
        goto after_13;
    // 0x0044E694: nop

    after_13:
    // 0x0044E698: beq         $v0, $zero, L_0044E6D8
    if (ctx->r2 == 0) {
        // 0x0044E69C: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_0044E6D8;
    }
    // 0x0044E69C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x0044E6A0: beq         $s3, $zero, L_0044E6D8
    if (ctx->r19 == 0) {
        // 0x0044E6A4: nop
    
            goto L_0044E6D8;
    }
    // 0x0044E6A4: nop

L_0044E6A8:
    // 0x0044E6A8: lw          $v0, 0x18($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X18);
    // 0x0044E6AC: lw          $v0, 0x1C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1C);
    // 0x0044E6B0: beq         $v0, $zero, L_0044E6CC
    if (ctx->r2 == 0) {
        // 0x0044E6B4: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_0044E6CC;
    }
    // 0x0044E6B4: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x0044E6B8: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x0044E6BC: jalr        $v0
    // 0x0044E6C0: addu        $a2, $s5, $zero
    ctx->r6 = ADD32(ctx->r21, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_14;
    // 0x0044E6C0: addu        $a2, $s5, $zero
    ctx->r6 = ADD32(ctx->r21, 0);
    after_14:
    // 0x0044E6C4: beq         $v0, $zero, L_0044E6D8
    if (ctx->r2 == 0) {
        // 0x0044E6C8: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_0044E6D8;
    }
    // 0x0044E6C8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_0044E6CC:
    // 0x0044E6CC: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x0044E6D0: sh          $v0, 0x28($s1)
    MEM_H(0X28, ctx->r17) = ctx->r2;
    // 0x0044E6D4: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_0044E6D8:
    // 0x0044E6D8: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x0044E6DC: lw          $s5, 0x24($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X24);
    // 0x0044E6E0: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x0044E6E4: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x0044E6E8: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x0044E6EC: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x0044E6F0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0044E6F4: jr          $ra
    // 0x0044E6F8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x0044E6F8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_00452B2C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00452B2C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00452B30: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00452B34: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x00452B38: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00452B3C: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x00452B40: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x00452B44: addu        $s2, $a2, $zero
    ctx->r18 = ADD32(ctx->r6, 0);
    // 0x00452B48: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x00452B4C: jal         0x00275904
    // 0x00452B50: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    func_00275904(rdram, ctx);
        goto after_0;
    // 0x00452B50: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    after_0:
    // 0x00452B54: jal         0x0027598C
    // 0x00452B58: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_0027598C(rdram, ctx);
        goto after_1;
    // 0x00452B58: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_1:
    // 0x00452B5C: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x00452B60: lw          $v0, 0x1F74($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1F74);
    // 0x00452B64: beq         $v0, $zero, L_00452B74
    if (ctx->r2 == 0) {
        // 0x00452B68: nop
    
            goto L_00452B74;
    }
    // 0x00452B68: nop

    // 0x00452B6C: jal         0x00275A50
    // 0x00452B70: nop

    func_00275A50(rdram, ctx);
        goto after_2;
    // 0x00452B70: nop

    after_2:
L_00452B74:
    // 0x00452B74: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x00452B78: lw          $a0, 0x1F70($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1F70);
    // 0x00452B7C: jal         0x002759C4
    // 0x00452B80: nop

    func_002759C4(rdram, ctx);
        goto after_3;
    // 0x00452B80: nop

    after_3:
    // 0x00452B84: jal         0x00285CD4
    // 0x00452B88: nop

    func_00285CD4(rdram, ctx);
        goto after_4;
    // 0x00452B88: nop

    after_4:
    // 0x00452B8C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00452B90: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x00452B94: jal         0x00416454
    // 0x00452B98: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    func_00416454(rdram, ctx);
        goto after_5;
    // 0x00452B98: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    after_5:
    // 0x00452B9C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x00452BA0: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x00452BA4: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00452BA8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00452BAC: jr          $ra
    // 0x00452BB0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00452BB0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_00239398(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00239398: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0023939C: addu        $a0, $a1, $zero
    ctx->r4 = ADD32(ctx->r5, 0);
    // 0x002393A0: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x002393A4: beq         $a0, $zero, L_002393C4
    if (ctx->r4 == 0) {
        // 0x002393A8: sw          $a3, 0x24($sp)
        MEM_W(0X24, ctx->r29) = ctx->r7;
            goto L_002393C4;
    }
    // 0x002393A8: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    // 0x002393AC: lbu         $v1, 0x0($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X0);
    // 0x002393B0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x002393B4: bne         $v1, $v0, L_002393C4
    if (ctx->r3 != ctx->r2) {
        // 0x002393B8: nop
    
            goto L_002393C4;
    }
    // 0x002393B8: nop

    // 0x002393BC: jal         0x00246918
    // 0x002393C0: addiu       $a1, $a0, 0x140
    ctx->r5 = ADD32(ctx->r4, 0X140);
    func_00246918(rdram, ctx);
        goto after_0;
    // 0x002393C0: addiu       $a1, $a0, 0x140
    ctx->r5 = ADD32(ctx->r4, 0X140);
    after_0:
L_002393C4:
    // 0x002393C4: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x002393C8: jr          $ra
    // 0x002393CC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x002393CC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0024B8CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0024B8CC: mtc1        $zero, $f1
    ctx->f_odd[(1 - 1) * 2] = 0;
    // 0x0024B8D0: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x0024B8D4: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x0024B8D8: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x0024B8DC: nop

    // 0x0024B8E0: bc1tl       L_0024B8E8
    if (c1cs) {
        // 0x0024B8E4: negu        $v0, $v0
        ctx->r2 = SUB32(0, ctx->r2);
            goto L_0024B8E8;
    }
    goto skip_0;
    // 0x0024B8E4: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    skip_0:
L_0024B8E8:
    // 0x0024B8E8: mtc1        $a1, $f0
    ctx->f0.u32l = ctx->r5;
    // 0x0024B8EC: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x0024B8F0: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x0024B8F4: nop

    // 0x0024B8F8: bc1fl       L_0024B924
    if (!c1cs) {
        // 0x0024B8FC: subu        $v0, $v0, $a1
        ctx->r2 = SUB32(ctx->r2, ctx->r5);
            goto L_0024B924;
    }
    goto skip_1;
    // 0x0024B8FC: subu        $v0, $v0, $a1
    ctx->r2 = SUB32(ctx->r2, ctx->r5);
    skip_1:
    // 0x0024B900: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x0024B904: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x0024B908: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x0024B90C: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x0024B910: nop

    // 0x0024B914: bc1t        L_0024B93C
    if (c1cs) {
        // 0x0024B918: sll         $v0, $a3, 24
        ctx->r2 = S32(ctx->r7 << 24);
            goto L_0024B93C;
    }
    // 0x0024B918: sll         $v0, $a3, 24
    ctx->r2 = S32(ctx->r7 << 24);
    // 0x0024B91C: j           L_0024B98C
    // 0x0024B920: sra         $v1, $v0, 24
    ctx->r3 = S32(SIGNED(ctx->r2) >> 24);
        goto L_0024B98C;
    // 0x0024B920: sra         $v1, $v0, 24
    ctx->r3 = S32(SIGNED(ctx->r2) >> 24);
L_0024B924:
    // 0x0024B924: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x0024B928: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x0024B92C: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x0024B930: nop

    // 0x0024B934: bc1f        L_0024B988
    if (!c1cs) {
        // 0x0024B938: sll         $v0, $a3, 24
        ctx->r2 = S32(ctx->r7 << 24);
            goto L_0024B988;
    }
    // 0x0024B938: sll         $v0, $a3, 24
    ctx->r2 = S32(ctx->r7 << 24);
L_0024B93C:
    // 0x0024B93C: sra         $v1, $v0, 24
    ctx->r3 = S32(SIGNED(ctx->r2) >> 24);
    // 0x0024B940: mtc1        $zero, $f1
    ctx->f_odd[(1 - 1) * 2] = 0;
    // 0x0024B944: mtc1        $v1, $f0
    ctx->f0.u32l = ctx->r3;
    // 0x0024B948: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x0024B94C: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x0024B950: nop

    // 0x0024B954: bc1tl       L_0024B95C
    if (c1cs) {
        // 0x0024B958: negu        $v1, $v1
        ctx->r3 = SUB32(0, ctx->r3);
            goto L_0024B95C;
    }
    goto skip_2;
    // 0x0024B958: negu        $v1, $v1
    ctx->r3 = SUB32(0, ctx->r3);
    skip_2:
L_0024B95C:
    // 0x0024B95C: sll         $v0, $a2, 24
    ctx->r2 = S32(ctx->r6 << 24);
    // 0x0024B960: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
    // 0x0024B964: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x0024B968: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x0024B96C: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x0024B970: nop

    // 0x0024B974: bc1fl       L_0024B9CC
    if (!c1cs) {
        // 0x0024B978: subu        $v0, $v0, $v1
        ctx->r2 = SUB32(ctx->r2, ctx->r3);
            goto L_0024B9CC;
    }
    goto skip_3;
    // 0x0024B978: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    skip_3:
    // 0x0024B97C: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x0024B980: j           L_0024B9CC
    // 0x0024B984: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
        goto L_0024B9CC;
    // 0x0024B984: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
L_0024B988:
    // 0x0024B988: sra         $v1, $v0, 24
    ctx->r3 = S32(SIGNED(ctx->r2) >> 24);
L_0024B98C:
    // 0x0024B98C: mtc1        $zero, $f1
    ctx->f_odd[(1 - 1) * 2] = 0;
    // 0x0024B990: mtc1        $v1, $f0
    ctx->f0.u32l = ctx->r3;
    // 0x0024B994: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x0024B998: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x0024B99C: nop

    // 0x0024B9A0: bc1tl       L_0024B9A8
    if (c1cs) {
        // 0x0024B9A4: negu        $v1, $v1
        ctx->r3 = SUB32(0, ctx->r3);
            goto L_0024B9A8;
    }
    goto skip_4;
    // 0x0024B9A4: negu        $v1, $v1
    ctx->r3 = SUB32(0, ctx->r3);
    skip_4:
L_0024B9A8:
    // 0x0024B9A8: sll         $v0, $a2, 24
    ctx->r2 = S32(ctx->r6 << 24);
    // 0x0024B9AC: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
    // 0x0024B9B0: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x0024B9B4: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x0024B9B8: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x0024B9BC: nop

    // 0x0024B9C0: bc1fl       L_0024B9E0
    if (!c1cs) {
        // 0x0024B9C4: subu        $v0, $v1, $v0
        ctx->r2 = SUB32(ctx->r3, ctx->r2);
            goto L_0024B9E0;
    }
    goto skip_5;
    // 0x0024B9C4: subu        $v0, $v1, $v0
    ctx->r2 = SUB32(ctx->r3, ctx->r2);
    skip_5:
    // 0x0024B9C8: addu        $v0, $v1, $v0
    ctx->r2 = ADD32(ctx->r3, ctx->r2);
L_0024B9CC:
    // 0x0024B9CC: slti        $v0, $v0, 0x2E
    ctx->r2 = SIGNED(ctx->r2) < 0X2E ? 1 : 0;
    // 0x0024B9D0: bne         $v0, $zero, L_0024B9EC
    if (ctx->r2 != 0) {
        // 0x0024B9D4: sll         $v0, $a3, 24
        ctx->r2 = S32(ctx->r7 << 24);
            goto L_0024B9EC;
    }
    // 0x0024B9D4: sll         $v0, $a3, 24
    ctx->r2 = S32(ctx->r7 << 24);
    // 0x0024B9D8: j           L_0024BA4C
    // 0x0024B9DC: sra         $v1, $v0, 24
    ctx->r3 = S32(SIGNED(ctx->r2) >> 24);
        goto L_0024BA4C;
    // 0x0024B9DC: sra         $v1, $v0, 24
    ctx->r3 = S32(SIGNED(ctx->r2) >> 24);
L_0024B9E0:
    // 0x0024B9E0: slti        $v0, $v0, 0x2E
    ctx->r2 = SIGNED(ctx->r2) < 0X2E ? 1 : 0;
    // 0x0024B9E4: beq         $v0, $zero, L_0024BA44
    if (ctx->r2 == 0) {
        // 0x0024B9E8: sll         $v0, $a3, 24
        ctx->r2 = S32(ctx->r7 << 24);
            goto L_0024BA44;
    }
    // 0x0024B9E8: sll         $v0, $a3, 24
    ctx->r2 = S32(ctx->r7 << 24);
L_0024B9EC:
    // 0x0024B9EC: sra         $a0, $v0, 24
    ctx->r4 = S32(SIGNED(ctx->r2) >> 24);
    // 0x0024B9F0: beq         $a0, $zero, L_0024BA44
    if (ctx->r4 == 0) {
        // 0x0024B9F4: sll         $v0, $a2, 24
        ctx->r2 = S32(ctx->r6 << 24);
            goto L_0024BA44;
    }
    // 0x0024B9F4: sll         $v0, $a2, 24
    ctx->r2 = S32(ctx->r6 << 24);
    // 0x0024B9F8: sra         $v1, $v0, 24
    ctx->r3 = S32(SIGNED(ctx->r2) >> 24);
    // 0x0024B9FC: beq         $v1, $zero, L_0024BA48
    if (ctx->r3 == 0) {
        // 0x0024BA00: sll         $v0, $a3, 24
        ctx->r2 = S32(ctx->r7 << 24);
            goto L_0024BA48;
    }
    // 0x0024BA00: sll         $v0, $a3, 24
    ctx->r2 = S32(ctx->r7 << 24);
    // 0x0024BA04: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x0024BA08: lbu         $v0, -0x550F($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X550F);
    // 0x0024BA0C: bnel        $v0, $zero, L_0024BA48
    if (ctx->r2 != 0) {
        // 0x0024BA10: sll         $v0, $a3, 24
        ctx->r2 = S32(ctx->r7 << 24);
            goto L_0024BA48;
    }
    goto skip_6;
    // 0x0024BA10: sll         $v0, $a3, 24
    ctx->r2 = S32(ctx->r7 << 24);
    skip_6:
    // 0x0024BA14: mult        $a0, $v1
    result = S64(S32(ctx->r4)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x0024BA18: mflo        $t0
    ctx->r8 = lo;
    // 0x0024BA1C: blez        $t0, L_0024BA34
    if (SIGNED(ctx->r8) <= 0) {
        // 0x0024BA20: nop
    
            goto L_0024BA34;
    }
    // 0x0024BA20: nop

    // 0x0024BA24: bgtz        $a0, L_0024BACC
    if (SIGNED(ctx->r4) > 0) {
            // 0x0024BA28: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    func_0024BACC(rdram, ctx);
    return;
    }
    // 0x0024BA28: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0024BA2C: jr          $ra
    // 0x0024BA30: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    return;
    // 0x0024BA30: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
L_0024BA34:
    // 0x0024BA34: blez        $v1, L_0024BACC
    if (SIGNED(ctx->r3) <= 0) {
            // 0x0024BA38: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    func_0024BACC(rdram, ctx);
    return;
    }
    // 0x0024BA38: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x0024BA3C: jr          $ra
    // 0x0024BA40: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    return;
    // 0x0024BA40: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
L_0024BA44:
    // 0x0024BA44: sll         $v0, $a3, 24
    ctx->r2 = S32(ctx->r7 << 24);
L_0024BA48:
    // 0x0024BA48: sra         $v1, $v0, 24
    ctx->r3 = S32(SIGNED(ctx->r2) >> 24);
L_0024BA4C:
    // 0x0024BA4C: mtc1        $zero, $f1
    ctx->f_odd[(1 - 1) * 2] = 0;
    // 0x0024BA50: mtc1        $v1, $f0
    ctx->f0.u32l = ctx->r3;
    // 0x0024BA54: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x0024BA58: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x0024BA5C: nop

    // 0x0024BA60: bc1tl       L_0024BA68
    if (c1cs) {
        // 0x0024BA64: negu        $v1, $v1
        ctx->r3 = SUB32(0, ctx->r3);
            goto L_0024BA68;
    }
    goto skip_7;
    // 0x0024BA64: negu        $v1, $v1
    ctx->r3 = SUB32(0, ctx->r3);
    skip_7:
L_0024BA68:
    // 0x0024BA68: sll         $v0, $a2, 24
    ctx->r2 = S32(ctx->r6 << 24);
    // 0x0024BA6C: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
    // 0x0024BA70: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x0024BA74: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x0024BA78: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x0024BA7C: nop

    // 0x0024BA80: bc1fl       L_0024BAA0
    if (!c1cs) {
        // 0x0024BA84: slt         $v0, $v0, $v1
        ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
            goto L_0024BAA0;
    }
    goto skip_8;
    // 0x0024BA84: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    skip_8:
    // 0x0024BA88: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x0024BA8C: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x0024BA90: bnel        $v0, $zero, L_0024BAAC
    if (ctx->r2 != 0) {
        // 0x0024BA94: sll         $v0, $a3, 24
        ctx->r2 = S32(ctx->r7 << 24);
            goto L_0024BAAC;
    }
    goto skip_9;
    // 0x0024BA94: sll         $v0, $a3, 24
    ctx->r2 = S32(ctx->r7 << 24);
    skip_9:
    // 0x0024BA98: j           L_0024BAC0
    // 0x0024BA9C: sll         $v0, $a2, 24
    ctx->r2 = S32(ctx->r6 << 24);
    func_0024BAC0(rdram, ctx);
    return;
    // 0x0024BA9C: sll         $v0, $a2, 24
    ctx->r2 = S32(ctx->r6 << 24);
L_0024BAA0:
    // 0x0024BAA0: beq         $v0, $zero, L_0024BAC0
    if (ctx->r2 == 0) {
            // 0x0024BAA4: sll         $v0, $a2, 24
    ctx->r2 = S32(ctx->r6 << 24);
    func_0024BAC0(rdram, ctx);
    return;
    }
    // 0x0024BAA4: sll         $v0, $a2, 24
    ctx->r2 = S32(ctx->r6 << 24);
    // 0x0024BAA8: sll         $v0, $a3, 24
    ctx->r2 = S32(ctx->r7 << 24);
L_0024BAAC:
    // 0x0024BAAC: bgtz        $v0, L_0024BAB8
    if (SIGNED(ctx->r2) > 0) {
        // 0x0024BAB0: addiu       $v1, $zero, 0x2
        ctx->r3 = ADD32(0, 0X2);
            goto L_0024BAB8;
    }
    // 0x0024BAB0: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
    // 0x0024BAB4: addiu       $v1, $zero, 0x6
    ctx->r3 = ADD32(0, 0X6);
L_0024BAB8:
    // 0x0024BAB8: jr          $ra
    // 0x0024BABC: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
    return;
    // 0x0024BABC: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
;}
RECOMP_FUNC void func_00265B58(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00265B58: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x00265B5C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x00265B60: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x00265B64: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x00265B68: addu        $s5, $a1, $zero
    ctx->r21 = ADD32(ctx->r5, 0);
    // 0x00265B6C: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x00265B70: lui         $s4, 0x800F
    ctx->r20 = S32(0X800F << 16);
    // 0x00265B74: addiu       $s4, $s4, 0x7078
    ctx->r20 = ADD32(ctx->r20, 0X7078);
    // 0x00265B78: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    // 0x00265B7C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x00265B80: sw          $ra, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r31;
    // 0x00265B84: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x00265B88: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x00265B8C: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x00265B90: lw          $v0, 0x14($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X14);
    // 0x00265B94: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x00265B98: jal         0x00220260
    // 0x00265B9C: addiu       $s1, $v0, 0x14
    ctx->r17 = ADD32(ctx->r2, 0X14);
    func_00220260(rdram, ctx);
        goto after_0;
    // 0x00265B9C: addiu       $s1, $v0, 0x14
    ctx->r17 = ADD32(ctx->r2, 0X14);
    after_0:
    // 0x00265BA0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00265BA4: lui         $a1, 0x4
    ctx->r5 = S32(0X4 << 16);
    // 0x00265BA8: jal         0x0026E110
    // 0x00265BAC: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    func_0026E110(rdram, ctx);
        goto after_1;
    // 0x00265BAC: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    after_1:
    // 0x00265BB0: lw          $v0, 0x4($s5)
    ctx->r2 = MEM_W(ctx->r21, 0X4);
    // 0x00265BB4: bne         $v0, $zero, L_00265BCC
    if (ctx->r2 != 0) {
        // 0x00265BB8: lui         $v1, 0xFFFE
        ctx->r3 = S32(0XFFFE << 16);
            goto L_00265BCC;
    }
    // 0x00265BB8: lui         $v1, 0xFFFE
    ctx->r3 = S32(0XFFFE << 16);
    // 0x00265BBC: lw          $v0, 0xD4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XD4);
    // 0x00265BC0: ori         $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 | 0XFFFF;
    // 0x00265BC4: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x00265BC8: sw          $v0, 0xD4($s0)
    MEM_W(0XD4, ctx->r16) = ctx->r2;
L_00265BCC:
    // 0x00265BCC: lw          $v0, 0x18($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X18);
    // 0x00265BD0: bne         $v0, $zero, L_00265BEC
    if (ctx->r2 != 0) {
        // 0x00265BD4: addiu       $v1, $zero, -0x2001
        ctx->r3 = ADD32(0, -0X2001);
            goto L_00265BEC;
    }
    // 0x00265BD4: addiu       $v1, $zero, -0x2001
    ctx->r3 = ADD32(0, -0X2001);
    // 0x00265BD8: lw          $v0, 0xD4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XD4);
    // 0x00265BDC: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x00265BE0: addiu       $v1, $zero, -0x101
    ctx->r3 = ADD32(0, -0X101);
    // 0x00265BE4: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x00265BE8: sw          $v0, 0xD4($s0)
    MEM_W(0XD4, ctx->r16) = ctx->r2;
L_00265BEC:
    // 0x00265BEC: lw          $s3, 0x0($s4)
    ctx->r19 = MEM_W(ctx->r20, 0X0);
    // 0x00265BF0: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x00265BF4: bne         $s3, $v0, L_00265C8C
    if (ctx->r19 != ctx->r2) {
        // 0x00265BF8: addiu       $s2, $zero, -0x1
        ctx->r18 = ADD32(0, -0X1);
            goto L_00265C8C;
    }
    // 0x00265BF8: addiu       $s2, $zero, -0x1
    ctx->r18 = ADD32(0, -0X1);
    // 0x00265BFC: lw          $v0, 0x20($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X20);
    // 0x00265C00: beq         $v0, $s2, L_00265C28
    if (ctx->r2 == ctx->r18) {
        // 0x00265C04: nop
    
            goto L_00265C28;
    }
    // 0x00265C04: nop

    // 0x00265C08: lh          $a0, 0x22($s1)
    ctx->r4 = MEM_H(ctx->r17, 0X22);
    // 0x00265C0C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x00265C10: sw          $s2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r18;
    // 0x00265C14: lw          $a1, 0x4($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X4);
    // 0x00265C18: lw          $a2, 0x8($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X8);
    // 0x00265C1C: lw          $a3, 0xC($s0)
    ctx->r7 = MEM_W(ctx->r16, 0XC);
    // 0x00265C20: jal         0x00275544
    // 0x00265C24: nop

    func_00275544(rdram, ctx);
        goto after_2;
    // 0x00265C24: nop

    after_2:
L_00265C28:
    // 0x00265C28: lw          $v0, 0x1C($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X1C);
    // 0x00265C2C: beq         $v0, $s2, L_00265C58
    if (ctx->r2 == ctx->r18) {
        // 0x00265C30: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_00265C58;
    }
    // 0x00265C30: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00265C34: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x00265C38: lw          $v0, 0xC($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC);
    // 0x00265C3C: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x00265C40: lw          $a2, 0x4($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X4);
    // 0x00265C44: lw          $a3, 0x8($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X8);
    // 0x00265C48: lw          $a1, 0x1C($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X1C);
    // 0x00265C4C: jal         0x00246690
    // 0x00265C50: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00246690(rdram, ctx);
        goto after_3;
    // 0x00265C50: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x00265C54: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_00265C58:
    // 0x00265C58: lw          $v0, 0x28($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X28);
    // 0x00265C5C: addu        $a1, $s5, $zero
    ctx->r5 = ADD32(ctx->r21, 0);
    // 0x00265C60: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x00265C64: lw          $a3, 0x24($s1)
    ctx->r7 = MEM_W(ctx->r17, 0X24);
    // 0x00265C68: jal         0x0024646C
    // 0x00265C6C: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    func_0024646C(rdram, ctx);
        goto after_4;
    // 0x00265C6C: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_4:
    // 0x00265C70: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x00265C74: addiu       $a0, $a0, 0x2B8
    ctx->r4 = ADD32(ctx->r4, 0X2B8);
    // 0x00265C78: jal         0x002365F8
    // 0x00265C7C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_002365F8(rdram, ctx);
        goto after_5;
    // 0x00265C7C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_5:
    // 0x00265C80: lw          $v0, 0x0($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X0);
    // 0x00265C84: beq         $v0, $s3, L_00265CA4
    if (ctx->r2 == ctx->r19) {
        // 0x00265C88: nop
    
            goto L_00265CA4;
    }
    // 0x00265C88: nop

L_00265C8C:
    // 0x00265C8C: lw          $v0, 0xD4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XD4);
    // 0x00265C90: addiu       $v1, $zero, -0x101
    ctx->r3 = ADD32(0, -0X101);
    // 0x00265C94: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x00265C98: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x00265C9C: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x00265CA0: sw          $v0, 0xD4($s0)
    MEM_W(0XD4, ctx->r16) = ctx->r2;
L_00265CA4:
    // 0x00265CA4: lw          $ra, 0x30($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X30);
    // 0x00265CA8: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x00265CAC: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x00265CB0: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x00265CB4: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x00265CB8: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x00265CBC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x00265CC0: jr          $ra
    // 0x00265CC4: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x00265CC4: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_00446C9C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00446C9C: jr          $ra
    // 0x00446CA0: nop

    return;
    // 0x00446CA0: nop

;}
RECOMP_FUNC void func_00256AAC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00256AAC: beq         $a2, $zero, L_00256AC0
    if (ctx->r6 == 0) {
        // 0x00256AB0: addu        $v1, $a0, $a1
        ctx->r3 = ADD32(ctx->r4, ctx->r5);
            goto L_00256AC0;
    }
    // 0x00256AB0: addu        $v1, $a0, $a1
    ctx->r3 = ADD32(ctx->r4, ctx->r5);
    // 0x00256AB4: lbu         $v0, 0x52C($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X52C);
    // 0x00256AB8: j           L_00256AC8
    // 0x00256ABC: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
        goto L_00256AC8;
    // 0x00256ABC: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
L_00256AC0:
    // 0x00256AC0: lbu         $v0, 0x52C($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X52C);
    // 0x00256AC4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_00256AC8:
    // 0x00256AC8: beq         $a2, $zero, L_00256AE0
    if (ctx->r6 == 0) {
            // 0x00256ACC: sb          $v0, 0x52C($v1)
    MEM_B(0X52C, ctx->r3) = ctx->r2;
    func_00256AE0(rdram, ctx);
    return;
    }
    // 0x00256ACC: sb          $v0, 0x52C($v1)
    MEM_B(0X52C, ctx->r3) = ctx->r2;
    // 0x00256AD0: addu        $v0, $a0, $a1
    ctx->r2 = ADD32(ctx->r4, ctx->r5);
    // 0x00256AD4: lbu         $v0, 0x52C($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X52C);
    // 0x00256AD8: jr          $ra
    // 0x00256ADC: srl         $v0, $v0, 4
    ctx->r2 = S32(U32(ctx->r2) >> 4);
    return;
    // 0x00256ADC: srl         $v0, $v0, 4
    ctx->r2 = S32(U32(ctx->r2) >> 4);
;}
RECOMP_FUNC void func_0025A658(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0025A658: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0025A65C: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x0025A660: lw          $v0, 0x14($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X14);
    // 0x0025A664: lhu         $a3, 0x80($v0)
    ctx->r7 = MEM_HU(ctx->r2, 0X80);
    // 0x0025A668: lui         $a2, 0x800B
    ctx->r6 = S32(0X800B << 16);
    // 0x0025A66C: addiu       $a2, $a2, -0x118
    ctx->r6 = ADD32(ctx->r6, -0X118);
    // 0x0025A670: jal         0x00245A98
    // 0x0025A674: nop

    func_00245A98(rdram, ctx);
        goto after_0;
    // 0x0025A674: nop

    after_0:
    // 0x0025A678: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x0025A67C: jr          $ra
    // 0x0025A680: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0025A680: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0045A5B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0045A5B0: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x0045A5B4: lw          $v0, 0x990($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X990);
    // 0x0045A5B8: bne         $v0, $zero, L_0045A5D0
    if (ctx->r2 != 0) {
            // 0x0045A5BC: nop

    func_0045A5D0(rdram, ctx);
    return;
    }
    // 0x0045A5BC: nop

    // 0x0045A5C0: lw          $v0, 0x20($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X20);
    // 0x0045A5C4: lb          $v0, 0x4($v0)
    ctx->r2 = MEM_B(ctx->r2, 0X4);
    // 0x0045A5C8: jr          $ra
    // 0x0045A5CC: nop

    return;
    // 0x0045A5CC: nop

;}
RECOMP_FUNC void func_0028B0A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0028B0A8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0028B0AC: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x0028B0B0: lw          $v0, 0x4($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X4);
    // 0x0028B0B4: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
    // 0x0028B0B8: bne         $v0, $zero, L_0028B0F0
    if (ctx->r2 != 0) {
        // 0x0028B0BC: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_0028B0F0;
    }
    // 0x0028B0BC: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x0028B0C0: lw          $v1, 0x10($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X10);
    // 0x0028B0C4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0028B0C8: bne         $v1, $v0, L_0028B0F0
    if (ctx->r3 != ctx->r2) {
        // 0x0028B0CC: addiu       $v1, $zero, 0x60
        ctx->r3 = ADD32(0, 0X60);
            goto L_0028B0F0;
    }
    // 0x0028B0CC: addiu       $v1, $zero, 0x60
    ctx->r3 = ADD32(0, 0X60);
    // 0x0028B0D0: lw          $v0, 0x8($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X8);
    // 0x0028B0D4: andi        $v0, $v0, 0x60
    ctx->r2 = ctx->r2 & 0X60;
    // 0x0028B0D8: bne         $v0, $v1, L_0028B0F0
    if (ctx->r2 != ctx->r3) {
        // 0x0028B0DC: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_0028B0F0;
    }
    // 0x0028B0DC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0028B0E0: lw          $a0, 0xC($a1)
    ctx->r4 = MEM_W(ctx->r5, 0XC);
    // 0x0028B0E4: jal         0x0029AC90
    // 0x0028B0E8: nop

    osViSwapBuffer_recomp(rdram, ctx);
        goto after_0;
    // 0x0028B0E8: nop

    after_0:
    // 0x0028B0EC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_0028B0F0:
    // 0x0028B0F0: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x0028B0F4: jr          $ra
    // 0x0028B0F8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0028B0F8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_002985B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002985B8: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x002985BC: lw          $a3, 0x20($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_002269EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002269EC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x002269F0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x002269F4: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x002269F8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x002269FC: addu        $s1, $a2, $zero
    ctx->r17 = ADD32(ctx->r6, 0);
    // 0x00226A00: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x00226A04: lw          $a0, 0x70($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X70);
    // 0x00226A08: jal         0x002017D4
    // 0x00226A0C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_002017D4(rdram, ctx);
        goto after_0;
    // 0x00226A0C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_0:
    // 0x00226A10: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x00226A14: jal         0x002017D4
    // 0x00226A18: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_002017D4(rdram, ctx);
        goto after_1;
    // 0x00226A18: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_1:
    // 0x00226A1C: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x00226A20: jal         0x002017D4
    // 0x00226A24: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_002017D4(rdram, ctx);
        goto after_2;
    // 0x00226A24: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_2:
    // 0x00226A28: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x00226A2C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00226A30: jal         0x002017D4
    // 0x00226A34: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_002017D4(rdram, ctx);
        goto after_3;
    // 0x00226A34: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_3:
    // 0x00226A38: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00226A3C: jal         0x00201818
    // 0x00226A40: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_00201818(rdram, ctx);
        goto after_4;
    // 0x00226A40: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_4:
    // 0x00226A44: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00226A48: jal         0x002017D4
    // 0x00226A4C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_002017D4(rdram, ctx);
        goto after_5;
    // 0x00226A4C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_5:
    // 0x00226A50: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x00226A54: andi        $v1, $s1, 0x7
    ctx->r3 = ctx->r17 & 0X7;
    // 0x00226A58: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00226A5C: bgez        $s1, L_00226A68
    if (SIGNED(ctx->r17) >= 0) {
        // 0x00226A60: sllv        $v1, $v0, $v1
        ctx->r3 = S32(ctx->r2 << (ctx->r3 & 31));
            goto L_00226A68;
    }
    // 0x00226A60: sllv        $v1, $v0, $v1
    ctx->r3 = S32(ctx->r2 << (ctx->r3 & 31));
    // 0x00226A64: addiu       $s1, $s1, 0x7
    ctx->r17 = ADD32(ctx->r17, 0X7);
L_00226A68:
    // 0x00226A68: sra         $v0, $s1, 3
    ctx->r2 = S32(SIGNED(ctx->r17) >> 3);
    // 0x00226A6C: addu        $v0, $a0, $v0
    ctx->r2 = ADD32(ctx->r4, ctx->r2);
    // 0x00226A70: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x00226A74: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x00226A78: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00226A7C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00226A80: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x00226A84: sltu        $v0, $zero, $v0
    ctx->r2 = 0 < ctx->r2 ? 1 : 0;
    // 0x00226A88: jr          $ra
    // 0x00226A8C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00226A8C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_00246B24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00246B24: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x00246B28: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x00246B2C: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x00246B30: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x00246B34: addu        $s0, $a3, $zero
    ctx->r16 = ADD32(ctx->r7, 0);
    // 0x00246B38: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x00246B3C: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x00246B40: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x00246B44: beq         $v0, $zero, L_00246BA4
    if (ctx->r2 == 0) {
        // 0x00246B48: addu        $s2, $a2, $zero
        ctx->r18 = ADD32(ctx->r6, 0);
            goto L_00246BA4;
    }
    // 0x00246B48: addu        $s2, $a2, $zero
    ctx->r18 = ADD32(ctx->r6, 0);
    // 0x00246B4C: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x00246B50: and         $v0, $s2, $v0
    ctx->r2 = ctx->r18 & ctx->r2;
L_00246B54:
    // 0x00246B54: beql        $v0, $zero, L_00246B98
    if (ctx->r2 == 0) {
        // 0x00246B58: addiu       $s0, $s0, 0x8
        ctx->r16 = ADD32(ctx->r16, 0X8);
            goto L_00246B98;
    }
    goto skip_0;
    // 0x00246B58: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    skip_0:
    // 0x00246B5C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00246B60: lwc1        $f12, 0x6994($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X6994);
    // 0x00246B64: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00246B68: lwc1        $f14, 0x6998($at)
    ctx->f14.u32l = MEM_W(ctx->r1, 0X6998);
    // 0x00246B6C: jal         0x002119FC
    // 0x00246B70: nop

    func_002119FC(rdram, ctx);
        goto after_0;
    // 0x00246B70: nop

    after_0:
    // 0x00246B74: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // 0x00246B78: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    // 0x00246B7C: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x00246B80: lw          $a1, 0x4($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X4);
    // 0x00246B84: lw          $a2, 0x8($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X8);
    // 0x00246B88: lw          $a3, 0xC($s1)
    ctx->r7 = MEM_W(ctx->r17, 0XC);
    // 0x00246B8C: jal         0x00268C48
    // 0x00246B90: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_00268C48(rdram, ctx);
        goto after_1;
    // 0x00246B90: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_1:
    // 0x00246B94: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
L_00246B98:
    // 0x00246B98: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x00246B9C: bne         $v0, $zero, L_00246B54
    if (ctx->r2 != 0) {
        // 0x00246BA0: and         $v0, $s2, $v0
        ctx->r2 = ctx->r18 & ctx->r2;
            goto L_00246B54;
    }
    // 0x00246BA0: and         $v0, $s2, $v0
    ctx->r2 = ctx->r18 & ctx->r2;
L_00246BA4:
    // 0x00246BA4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x00246BA8: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x00246BAC: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x00246BB0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x00246BB4: jr          $ra
    // 0x00246BB8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x00246BB8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_00266994(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00266994: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00266998: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0026699C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x002669A0: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x002669A4: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x002669A8: lw          $v0, 0xD4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XD4);
    // 0x002669AC: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x002669B0: ori         $v0, $v0, 0x2100
    ctx->r2 = ctx->r2 | 0X2100;
    // 0x002669B4: jal         0x00284188
    // 0x002669B8: sw          $v0, 0xD4($s0)
    MEM_W(0XD4, ctx->r16) = ctx->r2;
    func_00284188(rdram, ctx);
        goto after_0;
    // 0x002669B8: sw          $v0, 0xD4($s0)
    MEM_W(0XD4, ctx->r16) = ctx->r2;
    after_0:
    // 0x002669BC: beq         $v0, $zero, L_002669D0
    if (ctx->r2 == 0) {
        // 0x002669C0: nop
    
            goto L_002669D0;
    }
    // 0x002669C0: nop

    // 0x002669C4: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x002669C8: ori         $v0, $v0, 0x200
    ctx->r2 = ctx->r2 | 0X200;
    // 0x002669CC: sw          $v0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r2;
L_002669D0:
    // 0x002669D0: jal         0x0021A7EC
    // 0x002669D4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_0021A7EC(rdram, ctx);
        goto after_1;
    // 0x002669D4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x002669D8: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x002669DC: addiu       $a0, $a0, 0x7078
    ctx->r4 = ADD32(ctx->r4, 0X7078);
    // 0x002669E0: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x002669E4: jal         0x00220260
    // 0x002669E8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_00220260(rdram, ctx);
        goto after_2;
    // 0x002669E8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_2:
    // 0x002669EC: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x002669F0: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x002669F4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x002669F8: jr          $ra
    // 0x002669FC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x002669FC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_004078B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004078B0: jr          $ra
    // 0x004078B4: nop

    return;
    // 0x004078B4: nop

;}
RECOMP_FUNC void func_00459374(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_004203B0:
    // 0x00459374: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
L_004205B8:
    // 0x00459378: lw          $v0, 0x990($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X990);
L_004205C4:
    // 0x0045937C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x00459380: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x00459384: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x00459388: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x0045938C: beq         $v0, $zero, L_004593A4
    if (ctx->r2 == 0) {
        // 0x00459390: sw          $s0, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->r16;
            goto L_004593A4;
    }
    // 0x00459390: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x00459394: lui         $s0, 0x800C
    ctx->r16 = S32(0X800C << 16);
    // 0x00459398: lw          $s0, 0x2028($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X2028);
    // 0x0045939C: j           L_004203B0
    // 0x004593A0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_004203B0(rdram, ctx);
    return;
    // 0x004593A0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
L_004593A4:
    // 0x004593A4: lw          $v0, 0x20($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X20);
    // 0x004593A8: lb          $s0, 0x4($v0)
    ctx->r16 = MEM_B(ctx->r2, 0X4);
    // 0x004593AC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x004593B0: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x004593B4: jal         0x0041DCB0
    // 0x004593B8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_0041DCB0(rdram, ctx);
        goto after_0;
    // 0x004593B8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x004593BC: beq         $v0, $zero, L_004593D4
    if (ctx->r2 == 0) {
        // 0x004593C0: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_004593D4;
    }
    // 0x004593C0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x004593C4: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x004593C8: sw          $v0, 0x9BC($at)
    MEM_W(0X9BC, ctx->r1) = ctx->r2;
    // 0x004593CC: j           L_004205C4
    // 0x004593D0: nop

    func_004205C4(rdram, ctx);
    return;
    // 0x004593D0: nop

L_004593D4:
    // 0x004593D4: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x004593D8: lw          $v0, 0x9B8($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X9B8);
    // 0x004593DC: beq         $v0, $zero, L_00459558
    if (ctx->r2 == 0) {
        // 0x004593E0: nop
    
            goto L_00459558;
    }
    // 0x004593E0: nop

    // 0x004593E4: lw          $a1, 0x20($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X20);
    // 0x004593E8: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x004593EC: addiu       $a0, $a0, -0x6790
    ctx->r4 = ADD32(ctx->r4, -0X6790);
    // 0x004593F0: jal         0x0025342C
    // 0x004593F4: nop

    func_0025342C(rdram, ctx);
        goto after_1;
    // 0x004593F4: nop

    after_1:
    // 0x004593F8: lui         $t1, 0x800F
    ctx->r9 = S32(0X800F << 16);
    // 0x004593FC: addiu       $t1, $t1, 0x7078
    ctx->r9 = ADD32(ctx->r9, 0X7078);
    // 0x00459400: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    // 0x00459404: addiu       $a1, $v0, 0x520
    ctx->r5 = ADD32(ctx->r2, 0X520);
    // 0x00459408: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x0045940C: lw          $v0, 0x201C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X201C);
    // 0x00459410: lui         $t2, 0x8012
    ctx->r10 = S32(0X8012 << 16);
    // 0x00459414: lbu         $t2, -0x53A8($t2)
    ctx->r10 = MEM_BU(ctx->r10, -0X53A8);
    // 0x00459418: addiu       $v1, $v0, 0x18
    ctx->r3 = ADD32(ctx->r2, 0X18);
    // 0x0045941C: addiu       $v0, $v0, 0x4F8
    ctx->r2 = ADD32(ctx->r2, 0X4F8);
L_00459420:
    // 0x00459420: lw          $t3, 0x0($v1)
    ctx->r11 = MEM_W(ctx->r3, 0X0);
    // 0x00459424: lw          $t4, 0x4($v1)
    ctx->r12 = MEM_W(ctx->r3, 0X4);
    // 0x00459428: lw          $t5, 0x8($v1)
    ctx->r13 = MEM_W(ctx->r3, 0X8);
    // 0x0045942C: lw          $t6, 0xC($v1)
    ctx->r14 = MEM_W(ctx->r3, 0XC);
    // 0x00459430: sw          $t3, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r11;
    // 0x00459434: sw          $t4, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r12;
    // 0x00459438: sw          $t5, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->r13;
    // 0x0045943C: sw          $t6, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->r14;
    // 0x00459440: addiu       $v1, $v1, 0x10
    ctx->r3 = ADD32(ctx->r3, 0X10);
    // 0x00459444: bne         $v1, $v0, L_00459420
    if (ctx->r3 != ctx->r2) {
        // 0x00459448: addiu       $a1, $a1, 0x10
        ctx->r5 = ADD32(ctx->r5, 0X10);
            goto L_00459420;
    }
    // 0x00459448: addiu       $a1, $a1, 0x10
    ctx->r5 = ADD32(ctx->r5, 0X10);
    // 0x0045944C: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x00459450: lw          $v0, 0x201C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X201C);
    // 0x00459454: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x00459458: addiu       $a0, $a0, -0x5528
    ctx->r4 = ADD32(ctx->r4, -0X5528);
    // 0x0045945C: lw          $t3, 0x0($v1)
    ctx->r11 = MEM_W(ctx->r3, 0X0);
    // 0x00459460: lw          $t4, 0x4($v1)
    ctx->r12 = MEM_W(ctx->r3, 0X4);
    // 0x00459464: sw          $t3, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r11;
    // 0x00459468: sw          $t4, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r12;
    // 0x0045946C: addiu       $v1, $v0, 0x500
    ctx->r3 = ADD32(ctx->r2, 0X500);
    // 0x00459470: addiu       $v0, $v0, 0x680
    ctx->r2 = ADD32(ctx->r2, 0X680);
L_00459474:
    // 0x00459474: lw          $t3, 0x0($v1)
    ctx->r11 = MEM_W(ctx->r3, 0X0);
    // 0x00459478: lw          $t4, 0x4($v1)
    ctx->r12 = MEM_W(ctx->r3, 0X4);
    // 0x0045947C: lw          $t5, 0x8($v1)
    ctx->r13 = MEM_W(ctx->r3, 0X8);
    // 0x00459480: lw          $t6, 0xC($v1)
    ctx->r14 = MEM_W(ctx->r3, 0XC);
    // 0x00459484: sw          $t3, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r11;
    // 0x00459488: sw          $t4, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r12;
    // 0x0045948C: sw          $t5, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r13;
    // 0x00459490: sw          $t6, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->r14;
    // 0x00459494: addiu       $v1, $v1, 0x10
    ctx->r3 = ADD32(ctx->r3, 0X10);
    // 0x00459498: bne         $v1, $v0, L_00459474
    if (ctx->r3 != ctx->r2) {
        // 0x0045949C: addiu       $a0, $a0, 0x10
        ctx->r4 = ADD32(ctx->r4, 0X10);
            goto L_00459474;
    }
    // 0x0045949C: addiu       $a0, $a0, 0x10
    ctx->r4 = ADD32(ctx->r4, 0X10);
    // 0x004594A0: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x004594A4: lw          $v0, 0x201C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X201C);
    // 0x004594A8: lw          $t3, 0x0($v1)
    ctx->r11 = MEM_W(ctx->r3, 0X0);
    // 0x004594AC: sw          $t3, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r11;
    // 0x004594B0: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x004594B4: lw          $v1, -0x5524($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X5524);
    // 0x004594B8: lwc1        $f0, 0x8($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X8);
    // 0x004594BC: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x004594C0: swc1        $f0, -0x5350($at)
    MEM_W(-0X5350, ctx->r1) = ctx->f0.u32l;
    // 0x004594C4: lwc1        $f0, 0xC($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0XC);
    // 0x004594C8: lui         $t0, 0x800F
    ctx->r8 = S32(0X800F << 16);
    // 0x004594CC: addiu       $t0, $t0, -0x4540
    ctx->r8 = ADD32(ctx->r8, -0X4540);
    // 0x004594D0: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x004594D4: swc1        $f0, -0x534C($at)
    MEM_W(-0X534C, ctx->r1) = ctx->f0.u32l;
    // 0x004594D8: lwc1        $f0, 0x10($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X10);
    // 0x004594DC: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x004594E0: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x004594E4: swc1        $f0, -0x5348($at)
    MEM_W(-0X5348, ctx->r1) = ctx->f0.u32l;
    // 0x004594E8: lwc1        $f0, 0x14($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X14);
    // 0x004594EC: lw          $a0, 0x30($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X30);
    // 0x004594F0: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x004594F4: sw          $v1, 0x60($at)
    MEM_W(0X60, ctx->r1) = ctx->r3;
    // 0x004594F8: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x004594FC: sb          $t2, -0x53A8($at)
    MEM_B(-0X53A8, ctx->r1) = ctx->r10;
    // 0x00459500: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x00459504: swc1        $f0, -0x5344($at)
    MEM_W(-0X5344, ctx->r1) = ctx->f0.u32l;
    // 0x00459508: blez        $a0, L_00459530
    if (SIGNED(ctx->r4) <= 0) {
        // 0x0045950C: addiu       $a3, $v0, 0x684
        ctx->r7 = ADD32(ctx->r2, 0X684);
            goto L_00459530;
    }
    // 0x0045950C: addiu       $a3, $v0, 0x684
    ctx->r7 = ADD32(ctx->r2, 0X684);
L_00459510:
    // 0x00459510: lbu         $v0, 0x0($a3)
    ctx->r2 = MEM_BU(ctx->r7, 0X0);
    // 0x00459514: addiu       $a3, $a3, 0x1
    ctx->r7 = ADD32(ctx->r7, 0X1);
    // 0x00459518: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x0045951C: sb          $v0, 0x0($t0)
    MEM_B(0X0, ctx->r8) = ctx->r2;
    // 0x00459520: lw          $v0, 0x30($t1)
    ctx->r2 = MEM_W(ctx->r9, 0X30);
    // 0x00459524: slt         $v0, $a1, $v0
    ctx->r2 = SIGNED(ctx->r5) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x00459528: bne         $v0, $zero, L_00459510
    if (ctx->r2 != 0) {
        // 0x0045952C: addiu       $t0, $t0, 0x1
        ctx->r8 = ADD32(ctx->r8, 0X1);
            goto L_00459510;
    }
    // 0x0045952C: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
L_00459530:
    // 0x00459530: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x00459534: addiu       $v0, $v0, -0x675C
    ctx->r2 = ADD32(ctx->r2, -0X675C);
    // 0x00459538: sw          $zero, 0x0($v0)
    MEM_W(0X0, ctx->r2) = 0;
    // 0x0045953C: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x00459540: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x00459544: lw          $a3, 0xA50($a2)
    ctx->r7 = MEM_W(ctx->r6, 0XA50);
    // 0x00459548: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x0045954C: addiu       $a1, $a1, -0x43C0
    ctx->r5 = ADD32(ctx->r5, -0X43C0);
    // 0x00459550: j           L_004205B8
    // 0x00459554: addiu       $a0, $v0, 0x588
    ctx->r4 = ADD32(ctx->r2, 0X588);
    func_004205B8(rdram, ctx);
    return;
    // 0x00459554: addiu       $a0, $v0, 0x588
    ctx->r4 = ADD32(ctx->r2, 0X588);
L_00459558:
    // 0x00459558: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x0045955C: lw          $a1, 0x9C4($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X9C4);
    // 0x00459560: jal         0x00425F84
    // 0x00459564: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00425F84(rdram, ctx);
        goto after_2;
    // 0x00459564: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x00459568: bne         $v0, $zero, L_00459598
    if (ctx->r2 != 0) {
        // 0x0045956C: nop
    
            goto L_00459598;
    }
    // 0x0045956C: nop

    // 0x00459570: lw          $v0, 0x24($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X24);
    // 0x00459574: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x00459578: addiu       $a0, $a0, -0x61D4
    ctx->r4 = ADD32(ctx->r4, -0X61D4);
    // 0x0045957C: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x00459580: lw          $a2, 0x1C($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X1C);
    // 0x00459584: lw          $a3, 0x20($s1)
    ctx->r7 = MEM_W(ctx->r17, 0X20);
    // 0x00459588: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x0045958C: addiu       $a1, $a1, -0x4330
    ctx->r5 = ADD32(ctx->r5, -0X4330);
    // 0x00459590: j           L_004205B8
    // 0x00459594: nop

    func_004205B8(rdram, ctx);
    return;
    // 0x00459594: nop

L_00459598:
    // 0x00459598: lw          $v0, 0x24($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X24);
    // 0x0045959C: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x004595A0: addiu       $a0, $a0, -0x61D4
    ctx->r4 = ADD32(ctx->r4, -0X61D4);
    // 0x004595A4: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x004595A8: lw          $a2, 0x1C($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X1C);
    // 0x004595AC: lw          $a3, 0x20($s1)
    ctx->r7 = MEM_W(ctx->r17, 0X20);
    // 0x004595B0: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x004595B4: addiu       $a1, $a1, -0x42C4
    ctx->r5 = ADD32(ctx->r5, -0X42C4);
    // 0x004595B8: jal         0x00416644
    // 0x004595BC: nop

    func_00416644(rdram, ctx);
        goto after_3;
    // 0x004595BC: nop

    after_3:
    // 0x004595C0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x004595C4: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x004595C8: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x004595CC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x004595D0: jr          $ra
    // 0x004595D4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x004595D4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_002062F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002062F8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x002062FC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00206300: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x00206304: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00206308: lui         $s1, 0x800E
    ctx->r17 = S32(0X800E << 16);
    // 0x0020630C: addiu       $s1, $s1, -0x7E20
    ctx->r17 = ADD32(ctx->r17, -0X7E20);
    // 0x00206310: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x00206314: jal         0x00200738
    // 0x00206318: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_00200738(rdram, ctx);
        goto after_0;
    // 0x00206318: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_0:
    // 0x0020631C: lw          $v0, 0xC($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC);
    // 0x00206320: andi        $v0, $v0, 0x1000
    ctx->r2 = ctx->r2 & 0X1000;
    // 0x00206324: beq         $v0, $zero, L_00206334
    if (ctx->r2 == 0) {
        // 0x00206328: addiu       $a0, $s1, 0x14
        ctx->r4 = ADD32(ctx->r17, 0X14);
            goto L_00206334;
    }
    // 0x00206328: addiu       $a0, $s1, 0x14
    ctx->r4 = ADD32(ctx->r17, 0X14);
    // 0x0020632C: jal         0x00200738
    // 0x00206330: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_00200738(rdram, ctx);
        goto after_1;
    // 0x00206330: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_1:
L_00206334:
    // 0x00206334: lw          $v0, -0x8($s1)
    ctx->r2 = MEM_W(ctx->r17, -0X8);
    // 0x00206338: beql        $v0, $s0, L_00206340
    if (ctx->r2 == ctx->r16) {
        // 0x0020633C: sw          $zero, -0x8($s1)
        MEM_W(-0X8, ctx->r17) = 0;
            goto L_00206340;
    }
    goto skip_0;
    // 0x0020633C: sw          $zero, -0x8($s1)
    MEM_W(-0X8, ctx->r17) = 0;
    skip_0:
L_00206340:
    // 0x00206340: sw          $zero, 0xC($s0)
    MEM_W(0XC, ctx->r16) = 0;
    // 0x00206344: lui         $v0, 0x800E
    ctx->r2 = S32(0X800E << 16);
    // 0x00206348: lw          $v0, -0x7254($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X7254);
    // 0x0020634C: lui         $v1, 0x800E
    ctx->r3 = S32(0X800E << 16);
    // 0x00206350: lw          $v1, -0x7E2C($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X7E2C);
    // 0x00206354: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x00206358: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x0020635C: sw          $s0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r16;
    // 0x00206360: lw          $v0, 0xBCC($s1)
    ctx->r2 = MEM_W(ctx->r17, 0XBCC);
    // 0x00206364: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x00206368: sw          $v0, 0xBCC($s1)
    MEM_W(0XBCC, ctx->r17) = ctx->r2;
    // 0x0020636C: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x00206370: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00206374: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00206378: jr          $ra
    // 0x0020637C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x0020637C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_0042658C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0042658C: jr          $ra
    // 0x00426590: addiu       $v0, $zero, -0x2
    ctx->r2 = ADD32(0, -0X2);
    return;
    // 0x00426590: addiu       $v0, $zero, -0x2
    ctx->r2 = ADD32(0, -0X2);
;}
RECOMP_FUNC void func_00285998(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00285998: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
    // 0x0028599C: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
L_002859A0:
    // 0x002859A0: lui         $at, 0x800F
    ctx->r1 = S32(0X800F << 16);
    // 0x002859A4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x002859A8: lbu         $v0, 0x677B($at)
    ctx->r2 = MEM_BU(ctx->r1, 0X677B);
    // 0x002859AC: srl         $v0, $v0, 3
    ctx->r2 = S32(U32(ctx->r2) >> 3);
    // 0x002859B0: xori        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 ^ 0X1;
    // 0x002859B4: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x002859B8: beq         $v0, $zero, L_002859C8
    if (ctx->r2 == 0) {
        // 0x002859BC: addiu       $v1, $v1, 0x1
        ctx->r3 = ADD32(ctx->r3, 0X1);
            goto L_002859C8;
    }
    // 0x002859BC: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x002859C0: jr          $ra
    // 0x002859C4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x002859C4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_002859C8:
    // 0x002859C8: slti        $v0, $v1, 0x4
    ctx->r2 = SIGNED(ctx->r3) < 0X4 ? 1 : 0;
    // 0x002859CC: bne         $v0, $zero, L_002859A0
    if (ctx->r2 != 0) {
        // 0x002859D0: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_002859A0;
    }
    // 0x002859D0: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x002859D4: jr          $ra
    // 0x002859D8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x002859D8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void func_00226490(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00226490: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x00226494: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00226498: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x0022649C: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x002264A0: sw          $s5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r21;
    // 0x002264A4: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x002264A8: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x002264AC: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x002264B0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x002264B4: sdc1        $f20, 0x30($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X30, ctx->r29);
    // 0x002264B8: lw          $s3, 0xDF8($a0)
    ctx->r19 = MEM_W(ctx->r4, 0XDF8);
    // 0x002264BC: blez        $s3, L_0022651C
    if (SIGNED(ctx->r19) <= 0) {
        // 0x002264C0: addiu       $s4, $a0, 0xBF8
        ctx->r20 = ADD32(ctx->r4, 0XBF8);
            goto L_0022651C;
    }
    // 0x002264C0: addiu       $s4, $a0, 0xBF8
    ctx->r20 = ADD32(ctx->r4, 0XBF8);
    // 0x002264C4: addiu       $s5, $zero, 0x2
    ctx->r21 = ADD32(0, 0X2);
    // 0x002264C8: addu        $s2, $s4, $zero
    ctx->r18 = ADD32(ctx->r20, 0);
L_002264CC:
    // 0x002264CC: lw          $a0, 0x0($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X0);
    // 0x002264D0: lw          $v0, 0x14($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X14);
    // 0x002264D4: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x002264D8: bne         $v0, $s5, L_0022651C
    if (ctx->r2 != ctx->r21) {
        // 0x002264DC: addu        $s0, $a0, $zero
        ctx->r16 = ADD32(ctx->r4, 0);
            goto L_0022651C;
    }
    // 0x002264DC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x002264E0: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x002264E4: lwc1        $f20, 0x6D28($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X6D28);
    // 0x002264E8: jal         0x0021F1B4
    // 0x002264EC: addiu       $s2, $s2, 0x4
    ctx->r18 = ADD32(ctx->r18, 0X4);
    func_0021F1B4(rdram, ctx);
        goto after_0;
    // 0x002264EC: addiu       $s2, $s2, 0x4
    ctx->r18 = ADD32(ctx->r18, 0X4);
    after_0:
    // 0x002264F0: lw          $v0, 0xD4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XD4);
    // 0x002264F4: andi        $v0, $v0, 0x2000
    ctx->r2 = ctx->r2 & 0X2000;
    // 0x002264F8: beq         $v0, $zero, L_00226508
    if (ctx->r2 == 0) {
        // 0x002264FC: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_00226508;
    }
    // 0x002264FC: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x00226500: jal         0x0021A344
    // 0x00226504: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_0021A344(rdram, ctx);
        goto after_1;
    // 0x00226504: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
L_00226508:
    // 0x00226508: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0022650C: swc1        $f20, 0x6D28($at)
    MEM_W(0X6D28, ctx->r1) = ctx->f20.u32l;
    // 0x00226510: slt         $v0, $s1, $s3
    ctx->r2 = SIGNED(ctx->r17) < SIGNED(ctx->r19) ? 1 : 0;
    // 0x00226514: bne         $v0, $zero, L_002264CC
    if (ctx->r2 != 0) {
        // 0x00226518: nop
    
            goto L_002264CC;
    }
    // 0x00226518: nop

L_0022651C:
    // 0x0022651C: lui         $s0, 0x8012
    ctx->r16 = S32(0X8012 << 16);
    // 0x00226520: addiu       $s0, $s0, -0x5378
    ctx->r16 = ADD32(ctx->r16, -0X5378);
    // 0x00226524: lw          $v1, 0x0($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X0);
    // 0x00226528: addiu       $v0, $zero, 0xD
    ctx->r2 = ADD32(0, 0XD);
    // 0x0022652C: bne         $v1, $v0, L_0022653C
    if (ctx->r3 != ctx->r2) {
        // 0x00226530: nop
    
            goto L_0022653C;
    }
    // 0x00226530: nop

    // 0x00226534: jal         0x00251FC4
    // 0x00226538: addiu       $a0, $s0, -0x1418
    ctx->r4 = ADD32(ctx->r16, -0X1418);
    func_00251FC4(rdram, ctx);
        goto after_2;
    // 0x00226538: addiu       $a0, $s0, -0x1418
    ctx->r4 = ADD32(ctx->r16, -0X1418);
    after_2:
L_0022653C:
    // 0x0022653C: jal         0x00253460
    // 0x00226540: addiu       $a0, $s0, -0x1418
    ctx->r4 = ADD32(ctx->r16, -0X1418);
    func_00253460(rdram, ctx);
        goto after_3;
    // 0x00226540: addiu       $a0, $s0, -0x1418
    ctx->r4 = ADD32(ctx->r16, -0X1418);
    after_3:
    // 0x00226544: beq         $v0, $zero, L_00226560
    if (ctx->r2 == 0) {
        // 0x00226548: slt         $v0, $s1, $s3
        ctx->r2 = SIGNED(ctx->r17) < SIGNED(ctx->r19) ? 1 : 0;
            goto L_00226560;
    }
    // 0x00226548: slt         $v0, $s1, $s3
    ctx->r2 = SIGNED(ctx->r17) < SIGNED(ctx->r19) ? 1 : 0;
    // 0x0022654C: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x00226550: addiu       $a0, $a0, 0x6CB0
    ctx->r4 = ADD32(ctx->r4, 0X6CB0);
    // 0x00226554: jal         0x00430330
    // 0x00226558: nop

    func_00430330(rdram, ctx);
        goto after_4;
    // 0x00226558: nop

    after_4:
    // 0x0022655C: slt         $v0, $s1, $s3
    ctx->r2 = SIGNED(ctx->r17) < SIGNED(ctx->r19) ? 1 : 0;
L_00226560:
    // 0x00226560: beq         $v0, $zero, L_002265B0
    if (ctx->r2 == 0) {
        // 0x00226564: sll         $v0, $s1, 2
        ctx->r2 = S32(ctx->r17 << 2);
            goto L_002265B0;
    }
    // 0x00226564: sll         $v0, $s1, 2
    ctx->r2 = S32(ctx->r17 << 2);
    // 0x00226568: addu        $s2, $v0, $s4
    ctx->r18 = ADD32(ctx->r2, ctx->r20);
L_0022656C:
    // 0x0022656C: lw          $s0, 0x0($s2)
    ctx->r16 = MEM_W(ctx->r18, 0X0);
    // 0x00226570: addiu       $s2, $s2, 0x4
    ctx->r18 = ADD32(ctx->r18, 0X4);
    // 0x00226574: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00226578: lwc1        $f20, 0x6D28($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X6D28);
    // 0x0022657C: jal         0x0021F1B4
    // 0x00226580: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_0021F1B4(rdram, ctx);
        goto after_5;
    // 0x00226580: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_5:
    // 0x00226584: lw          $v0, 0xD4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XD4);
    // 0x00226588: andi        $v0, $v0, 0x2000
    ctx->r2 = ctx->r2 & 0X2000;
    // 0x0022658C: beq         $v0, $zero, L_0022659C
    if (ctx->r2 == 0) {
        // 0x00226590: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_0022659C;
    }
    // 0x00226590: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x00226594: jal         0x0021A344
    // 0x00226598: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_0021A344(rdram, ctx);
        goto after_6;
    // 0x00226598: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_6:
L_0022659C:
    // 0x0022659C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x002265A0: swc1        $f20, 0x6D28($at)
    MEM_W(0X6D28, ctx->r1) = ctx->f20.u32l;
    // 0x002265A4: slt         $v0, $s1, $s3
    ctx->r2 = SIGNED(ctx->r17) < SIGNED(ctx->r19) ? 1 : 0;
    // 0x002265A8: bne         $v0, $zero, L_0022656C
    if (ctx->r2 != 0) {
        // 0x002265AC: nop
    
            goto L_0022656C;
    }
    // 0x002265AC: nop

L_002265B0:
    // 0x002265B0: jal         0x00275F7C
    // 0x002265B4: nop

    func_00275F7C(rdram, ctx);
        goto after_7;
    // 0x002265B4: nop

    after_7:
    // 0x002265B8: jal         0x00275E98
    // 0x002265BC: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    func_00275E98(rdram, ctx);
        goto after_8;
    // 0x002265BC: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    after_8:
    // 0x002265C0: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x002265C4: lw          $s5, 0x24($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X24);
    // 0x002265C8: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x002265CC: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x002265D0: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x002265D4: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x002265D8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x002265DC: ldc1        $f20, 0x30($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X30);
    // 0x002265E0: jr          $ra
    // 0x002265E4: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x002265E4: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_0041A4CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041A4CC: jr          $ra
    // 0x0041A4D0: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
    return;
    // 0x0041A4D0: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
;}
RECOMP_FUNC void func_002718A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002718A0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x002718A4: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x002718A8: jal         0x002751BC
    // 0x002718AC: addiu       $a0, $a0, 0x1D64
    ctx->r4 = ADD32(ctx->r4, 0X1D64);
    func_002751BC(rdram, ctx);
        goto after_0;
    // 0x002718AC: addiu       $a0, $a0, 0x1D64
    ctx->r4 = ADD32(ctx->r4, 0X1D64);
    after_0:
    // 0x002718B0: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x002718B4: jr          $ra
    // 0x002718B8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x002718B8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00264478(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00264478: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0026447C: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x00264480: lw          $v0, 0x14($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X14);
    // 0x00264484: addiu       $t0, $v0, 0x14
    ctx->r8 = ADD32(ctx->r2, 0X14);
    // 0x00264488: lw          $a3, 0x24($t0)
    ctx->r7 = MEM_W(ctx->r8, 0X24);
    // 0x0026448C: andi        $v0, $a3, 0x10
    ctx->r2 = ctx->r7 & 0X10;
    // 0x00264490: beq         $v0, $zero, L_002644A8
    if (ctx->r2 == 0) {
        // 0x00264494: addiu       $a2, $zero, 0x1
        ctx->r6 = ADD32(0, 0X1);
            goto L_002644A8;
    }
    // 0x00264494: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x00264498: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x0026449C: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x002644A0: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x002644A4: sltu        $a2, $zero, $v0
    ctx->r6 = 0 < ctx->r2 ? 1 : 0;
L_002644A8:
    // 0x002644A8: andi        $v0, $a3, 0x100
    ctx->r2 = ctx->r7 & 0X100;
    // 0x002644AC: beq         $v0, $zero, L_002644C4
    if (ctx->r2 == 0) {
        // 0x002644B0: lui         $v1, 0x2
        ctx->r3 = S32(0X2 << 16);
            goto L_002644C4;
    }
    // 0x002644B0: lui         $v1, 0x2
    ctx->r3 = S32(0X2 << 16);
    // 0x002644B4: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x002644B8: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x002644BC: beql        $v0, $zero, L_002644C4
    if (ctx->r2 == 0) {
        // 0x002644C0: addu        $a2, $zero, $zero
        ctx->r6 = ADD32(0, 0);
            goto L_002644C4;
    }
    goto skip_0;
    // 0x002644C0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    skip_0:
L_002644C4:
    // 0x002644C4: lw          $v0, 0x24($t0)
    ctx->r2 = MEM_W(ctx->r8, 0X24);
    // 0x002644C8: andi        $v0, $v0, 0x400
    ctx->r2 = ctx->r2 & 0X400;
    // 0x002644CC: beq         $v0, $zero, L_002644E4
    if (ctx->r2 == 0) {
        // 0x002644D0: lui         $v1, 0x2
        ctx->r3 = S32(0X2 << 16);
            goto L_002644E4;
    }
    // 0x002644D0: lui         $v1, 0x2
    ctx->r3 = S32(0X2 << 16);
    // 0x002644D4: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x002644D8: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x002644DC: bnel        $v0, $zero, L_002644E4
    if (ctx->r2 != 0) {
        // 0x002644E0: addu        $a2, $zero, $zero
        ctx->r6 = ADD32(0, 0);
            goto L_002644E4;
    }
    goto skip_1;
    // 0x002644E0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    skip_1:
L_002644E4:
    // 0x002644E4: beql        $a2, $zero, L_0026450C
    if (ctx->r6 == 0) {
        // 0x002644E8: sw          $zero, 0x40($a1)
        MEM_W(0X40, ctx->r5) = 0;
            goto L_0026450C;
    }
    goto skip_2;
    // 0x002644E8: sw          $zero, 0x40($a1)
    MEM_W(0X40, ctx->r5) = 0;
    skip_2:
    // 0x002644EC: lwc1        $f1, 0x40($a1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r5, 0X40);
    // 0x002644F0: lwc1        $f0, 0x4C($t0)
    ctx->f0.u32l = MEM_W(ctx->r8, 0X4C);
    // 0x002644F4: c.le.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl <= ctx->f1.fl;
    // 0x002644F8: nop

    // 0x002644FC: bc1f        L_0026450C
    if (!c1cs) {
        // 0x00264500: nop
    
            goto L_0026450C;
    }
    // 0x00264500: nop

    // 0x00264504: jal         0x00243414
    // 0x00264508: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_00243414(rdram, ctx);
        goto after_0;
    // 0x00264508: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_0:
L_0026450C:
    // 0x0026450C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x00264510: jr          $ra
    // 0x00264514: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00264514: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00255B50(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00255B50: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00255B54: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00255B58: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x00255B5C: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x00255B60: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00255B64: lwc1        $f1, 0xA80($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0XA80);
    // 0x00255B68: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x00255B6C: c.eq.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl == ctx->f0.fl;
    // 0x00255B70: nop

    // 0x00255B74: bc1f        L_00255B84
    if (!c1cs) {
        // 0x00255B78: addu        $s1, $a1, $zero
        ctx->r17 = ADD32(ctx->r5, 0);
            goto L_00255B84;
    }
    // 0x00255B78: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x00255B7C: j           L_00255B88
    // 0x00255B80: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
        goto L_00255B88;
    // 0x00255B80: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
L_00255B84:
    // 0x00255B84: addiu       $v0, $zero, 0xD
    ctx->r2 = ADD32(0, 0XD);
L_00255B88:
    // 0x00255B88: sh          $v0, 0xA08($s0)
    MEM_H(0XA08, ctx->r16) = ctx->r2;
    // 0x00255B8C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00255B90: lui         $a2, 0x800B
    ctx->r6 = S32(0X800B << 16);
    // 0x00255B94: addiu       $a2, $a2, -0x20E8
    ctx->r6 = ADD32(ctx->r6, -0X20E8);
    // 0x00255B98: jal         0x0024EF70
    // 0x00255B9C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_0024EF70(rdram, ctx);
        goto after_0;
    // 0x00255B9C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_0:
    // 0x00255BA0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00255BA4: lui         $a2, 0x800B
    ctx->r6 = S32(0X800B << 16);
    // 0x00255BA8: addiu       $a2, $a2, -0x20D0
    ctx->r6 = ADD32(ctx->r6, -0X20D0);
    // 0x00255BAC: jal         0x0024F658
    // 0x00255BB0: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_0024F658(rdram, ctx);
        goto after_1;
    // 0x00255BB0: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_1:
    // 0x00255BB4: lw          $v1, 0xC04($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XC04);
    // 0x00255BB8: addiu       $v0, $zero, 0x1144
    ctx->r2 = ADD32(0, 0X1144);
    // 0x00255BBC: bne         $v1, $v0, L_00255BCC
    if (ctx->r3 != ctx->r2) {
        // 0x00255BC0: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_00255BCC;
    }
    // 0x00255BC0: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x00255BC4: lb          $v0, 0xE2($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XE2);
    // 0x00255BC8: sltiu       $a0, $v0, 0x1
    ctx->r4 = ctx->r2 < 0X1 ? 1 : 0;
L_00255BCC:
    // 0x00255BCC: bne         $a0, $zero, L_00255C10
    if (ctx->r4 != 0) {
        // 0x00255BD0: nop
    
            goto L_00255C10;
    }
    // 0x00255BD0: nop

    // 0x00255BD4: lwc1        $f1, 0xA78($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0XA78);
    // 0x00255BD8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00255BDC: lwc1        $f0, 0x71B0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X71B0);
    // 0x00255BE0: c.le.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl <= ctx->f1.fl;
    // 0x00255BE4: nop

    // 0x00255BE8: bc1t        L_00255C0C
    if (c1cs) {
        // 0x00255BEC: addiu       $v0, $zero, 0x8A2
        ctx->r2 = ADD32(0, 0X8A2);
            goto L_00255C0C;
    }
    // 0x00255BEC: addiu       $v0, $zero, 0x8A2
    ctx->r2 = ADD32(0, 0X8A2);
    // 0x00255BF0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00255BF4: lwc1        $f0, 0x71B4($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X71B4);
    // 0x00255BF8: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x00255BFC: nop

    // 0x00255C00: bc1t        L_00255C0C
    if (c1cs) {
        // 0x00255C04: addiu       $v0, $zero, 0x8A7
        ctx->r2 = ADD32(0, 0X8A7);
            goto L_00255C0C;
    }
    // 0x00255C04: addiu       $v0, $zero, 0x8A7
    ctx->r2 = ADD32(0, 0X8A7);
    // 0x00255C08: addiu       $v0, $zero, 0x14
    ctx->r2 = ADD32(0, 0X14);
L_00255C0C:
    // 0x00255C0C: sw          $v0, 0xC04($s0)
    MEM_W(0XC04, ctx->r16) = ctx->r2;
L_00255C10:
    // 0x00255C10: lw          $v0, 0x140($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X140);
    // 0x00255C14: andi        $v0, $v0, 0x800
    ctx->r2 = ctx->r2 & 0X800;
    // 0x00255C18: bne         $v0, $zero, L_00255C48
    if (ctx->r2 != 0) {
        // 0x00255C1C: nop
    
            goto L_00255C48;
    }
    // 0x00255C1C: nop

    // 0x00255C20: lwc1        $f1, 0xA10($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0XA10);
    // 0x00255C24: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00255C28: lwc1        $f0, 0x71B8($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X71B8);
    // 0x00255C2C: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x00255C30: nop

    // 0x00255C34: bc1f        L_00255C48
    if (!c1cs) {
        // 0x00255C38: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_00255C48;
    }
    // 0x00255C38: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00255C3C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x00255C40: jal         0x0024E5F0
    // 0x00255C44: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    func_0024E5F0(rdram, ctx);
        goto after_2;
    // 0x00255C44: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_2:
L_00255C48:
    // 0x00255C48: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x00255C4C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00255C50: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00255C54: jr          $ra
    // 0x00255C58: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00255C58: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
