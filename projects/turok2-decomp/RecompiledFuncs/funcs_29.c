#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_002897A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002897A4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x002897A8: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    // 0x002897AC: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x002897B0: jal         0x00288E58
    // 0x002897B4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    func_00288E58(rdram, ctx);
        goto after_0;
    // 0x002897B4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_0:
    // 0x002897B8: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x002897BC: jr          $ra
    // 0x002897C0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x002897C0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00228B4C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00228B4C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00228B50: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00228B54: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x00228B58: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00228B5C: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x00228B60: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x00228B64: jal         0x00200738
    // 0x00228B68: sh          $zero, 0x16($s0)
    MEM_H(0X16, ctx->r16) = 0;
    func_00200738(rdram, ctx);
        goto after_0;
    // 0x00228B68: sh          $zero, 0x16($s0)
    MEM_H(0X16, ctx->r16) = 0;
    after_0:
    // 0x00228B6C: addiu       $a0, $s1, 0x14
    ctx->r4 = ADD32(ctx->r17, 0X14);
    // 0x00228B70: jal         0x00200518
    // 0x00228B74: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_00200518(rdram, ctx);
        goto after_1;
    // 0x00228B74: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_1:
    // 0x00228B78: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x00228B7C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00228B80: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00228B84: jr          $ra
    // 0x00228B88: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00228B88: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_002255CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002255CC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x002255D0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x002255D4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x002255D8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x002255DC: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x002255E0: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x002255E4: jal         0x0021EBC0
    // 0x002255E8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_0021EBC0(rdram, ctx);
        goto after_0;
    // 0x002255E8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_0:
    // 0x002255EC: jal         0x00267090
    // 0x002255F0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_00267090(rdram, ctx);
        goto after_1;
    // 0x002255F0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_1:
    // 0x002255F4: beq         $v0, $zero, L_00225618
    if (ctx->r2 == 0) {
        // 0x002255F8: addiu       $v0, $zero, 0x200
        ctx->r2 = ADD32(0, 0X200);
            goto L_00225618;
    }
    // 0x002255F8: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x002255FC: lw          $v1, 0x8EC($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X8EC);
    // 0x00225600: beq         $v1, $v0, L_00225618
    if (ctx->r3 == ctx->r2) {
        // 0x00225604: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_00225618;
    }
    // 0x00225604: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x00225608: addu        $v0, $s0, $v0
    ctx->r2 = ADD32(ctx->r16, ctx->r2);
    // 0x0022560C: sw          $s1, 0xEC($v0)
    MEM_W(0XEC, ctx->r2) = ctx->r17;
    // 0x00225610: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
    // 0x00225614: sw          $v0, 0x8EC($s0)
    MEM_W(0X8EC, ctx->r16) = ctx->r2;
L_00225618:
    // 0x00225618: jal         0x002681BC
    // 0x0022561C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_002681BC(rdram, ctx);
        goto after_2;
    // 0x0022561C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_2:
    // 0x00225620: beq         $v0, $zero, L_00225644
    if (ctx->r2 == 0) {
        // 0x00225624: addiu       $v0, $zero, 0x80
        ctx->r2 = ADD32(0, 0X80);
            goto L_00225644;
    }
    // 0x00225624: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x00225628: lw          $v1, 0xAF0($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XAF0);
    // 0x0022562C: beq         $v1, $v0, L_00225644
    if (ctx->r3 == ctx->r2) {
        // 0x00225630: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_00225644;
    }
    // 0x00225630: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x00225634: addu        $v0, $s0, $v0
    ctx->r2 = ADD32(ctx->r16, ctx->r2);
    // 0x00225638: sw          $s1, 0x8F0($v0)
    MEM_W(0X8F0, ctx->r2) = ctx->r17;
    // 0x0022563C: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
    // 0x00225640: sw          $v0, 0xAF0($s0)
    MEM_W(0XAF0, ctx->r16) = ctx->r2;
L_00225644:
    // 0x00225644: lw          $v1, 0xDF8($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XDF8);
    // 0x00225648: slti        $v0, $v1, 0x80
    ctx->r2 = SIGNED(ctx->r3) < 0X80 ? 1 : 0;
    // 0x0022564C: beq         $v0, $zero, L_00225664
    if (ctx->r2 == 0) {
        // 0x00225650: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_00225664;
    }
    // 0x00225650: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x00225654: addu        $v0, $s0, $v0
    ctx->r2 = ADD32(ctx->r16, ctx->r2);
    // 0x00225658: sw          $s1, 0xBF8($v0)
    MEM_W(0XBF8, ctx->r2) = ctx->r17;
    // 0x0022565C: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
    // 0x00225660: sw          $v0, 0xDF8($s0)
    MEM_W(0XDF8, ctx->r16) = ctx->r2;
L_00225664:
    // 0x00225664: lw          $a0, 0xEFC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XEFC);
    // 0x00225668: slti        $v0, $a0, 0x40
    ctx->r2 = SIGNED(ctx->r4) < 0X40 ? 1 : 0;
    // 0x0022566C: beq         $v0, $zero, L_002256A0
    if (ctx->r2 == 0) {
        // 0x00225670: nop
    
            goto L_002256A0;
    }
    // 0x00225670: nop

    // 0x00225674: lw          $v0, 0x14($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X14);
    // 0x00225678: lw          $v1, 0x0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X0);
    // 0x0022567C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00225680: bne         $v1, $v0, L_002256A0
    if (ctx->r3 != ctx->r2) {
        // 0x00225684: sll         $v0, $a0, 2
        ctx->r2 = S32(ctx->r4 << 2);
            goto L_002256A0;
    }
    // 0x00225684: sll         $v0, $a0, 2
    ctx->r2 = S32(ctx->r4 << 2);
    // 0x00225688: addu        $v0, $s0, $v0
    ctx->r2 = ADD32(ctx->r16, ctx->r2);
    // 0x0022568C: sw          $s1, 0xDFC($v0)
    MEM_W(0XDFC, ctx->r2) = ctx->r17;
    // 0x00225690: lw          $v0, 0xEFC($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XEFC);
    // 0x00225694: sb          $v0, 0x20A($s1)
    MEM_B(0X20A, ctx->r17) = ctx->r2;
    // 0x00225698: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x0022569C: sw          $v0, 0xEFC($s0)
    MEM_W(0XEFC, ctx->r16) = ctx->r2;
L_002256A0:
    // 0x002256A0: lw          $v1, 0xF84($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XF84);
    // 0x002256A4: slti        $v0, $v1, 0x20
    ctx->r2 = SIGNED(ctx->r3) < 0X20 ? 1 : 0;
    // 0x002256A8: beq         $v0, $zero, L_002256D0
    if (ctx->r2 == 0) {
        // 0x002256AC: nop
    
            goto L_002256D0;
    }
    // 0x002256AC: nop

    // 0x002256B0: lw          $v0, 0xD4($s1)
    ctx->r2 = MEM_W(ctx->r17, 0XD4);
    // 0x002256B4: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x002256B8: beq         $v0, $zero, L_002256D0
    if (ctx->r2 == 0) {
        // 0x002256BC: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_002256D0;
    }
    // 0x002256BC: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x002256C0: addu        $v0, $s0, $v0
    ctx->r2 = ADD32(ctx->r16, ctx->r2);
    // 0x002256C4: sw          $s1, 0xF04($v0)
    MEM_W(0XF04, ctx->r2) = ctx->r17;
    // 0x002256C8: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
    // 0x002256CC: sw          $v0, 0xF84($s0)
    MEM_W(0XF84, ctx->r16) = ctx->r2;
L_002256D0:
    // 0x002256D0: lw          $a0, 0xFC8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XFC8);
    // 0x002256D4: slti        $v0, $a0, 0x10
    ctx->r2 = SIGNED(ctx->r4) < 0X10 ? 1 : 0;
    // 0x002256D8: beq         $v0, $zero, L_00225704
    if (ctx->r2 == 0) {
        // 0x002256DC: nop
    
            goto L_00225704;
    }
    // 0x002256DC: nop

    // 0x002256E0: lw          $v0, 0x14($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X14);
    // 0x002256E4: lw          $v1, 0x0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X0);
    // 0x002256E8: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x002256EC: bne         $v1, $v0, L_00225704
    if (ctx->r3 != ctx->r2) {
        // 0x002256F0: sll         $v0, $a0, 2
        ctx->r2 = S32(ctx->r4 << 2);
            goto L_00225704;
    }
    // 0x002256F0: sll         $v0, $a0, 2
    ctx->r2 = S32(ctx->r4 << 2);
    // 0x002256F4: addu        $v0, $s0, $v0
    ctx->r2 = ADD32(ctx->r16, ctx->r2);
    // 0x002256F8: sw          $s1, 0xF88($v0)
    MEM_W(0XF88, ctx->r2) = ctx->r17;
    // 0x002256FC: addiu       $v0, $a0, 0x1
    ctx->r2 = ADD32(ctx->r4, 0X1);
    // 0x00225700: sw          $v0, 0xFC8($s0)
    MEM_W(0XFC8, ctx->r16) = ctx->r2;
L_00225704:
    // 0x00225704: lw          $a0, 0x104C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X104C);
    // 0x00225708: slti        $v0, $a0, 0x20
    ctx->r2 = SIGNED(ctx->r4) < 0X20 ? 1 : 0;
    // 0x0022570C: beq         $v0, $zero, L_00225734
    if (ctx->r2 == 0) {
        // 0x00225710: addiu       $v0, $zero, 0x64F
        ctx->r2 = ADD32(0, 0X64F);
            goto L_00225734;
    }
    // 0x00225710: addiu       $v0, $zero, 0x64F
    ctx->r2 = ADD32(0, 0X64F);
    // 0x00225714: lhu         $v1, 0xB8($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0XB8);
    // 0x00225718: bne         $v1, $v0, L_0022573C
    if (ctx->r3 != ctx->r2) {
        // 0x0022571C: addiu       $v0, $zero, 0x64D
        ctx->r2 = ADD32(0, 0X64D);
            goto L_0022573C;
    }
    // 0x0022571C: addiu       $v0, $zero, 0x64D
    ctx->r2 = ADD32(0, 0X64D);
    // 0x00225720: sll         $v0, $a0, 2
    ctx->r2 = S32(ctx->r4 << 2);
    // 0x00225724: addu        $v0, $s0, $v0
    ctx->r2 = ADD32(ctx->r16, ctx->r2);
    // 0x00225728: sw          $s1, 0xFCC($v0)
    MEM_W(0XFCC, ctx->r2) = ctx->r17;
    // 0x0022572C: addiu       $v0, $a0, 0x1
    ctx->r2 = ADD32(ctx->r4, 0X1);
    // 0x00225730: sw          $v0, 0x104C($s0)
    MEM_W(0X104C, ctx->r16) = ctx->r2;
L_00225734:
    // 0x00225734: lhu         $v1, 0xB8($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0XB8);
    // 0x00225738: addiu       $v0, $zero, 0x64D
    ctx->r2 = ADD32(0, 0X64D);
L_0022573C:
    // 0x0022573C: bne         $v1, $v0, L_00225764
    if (ctx->r3 != ctx->r2) {
        // 0x00225740: nop
    
            goto L_00225764;
    }
    // 0x00225740: nop

    // 0x00225744: lw          $v1, 0x1060($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X1060);
    // 0x00225748: slti        $v0, $v1, 0x4
    ctx->r2 = SIGNED(ctx->r3) < 0X4 ? 1 : 0;
    // 0x0022574C: beq         $v0, $zero, L_00225764
    if (ctx->r2 == 0) {
        // 0x00225750: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_00225764;
    }
    // 0x00225750: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x00225754: addu        $v0, $s0, $v0
    ctx->r2 = ADD32(ctx->r16, ctx->r2);
    // 0x00225758: sw          $s1, 0x1050($v0)
    MEM_W(0X1050, ctx->r2) = ctx->r17;
    // 0x0022575C: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
    // 0x00225760: sw          $v0, 0x1060($s0)
    MEM_W(0X1060, ctx->r16) = ctx->r2;
L_00225764:
    // 0x00225764: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x00225768: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x0022576C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00225770: jr          $ra
    // 0x00225774: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00225774: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_00426D8C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00426D8C: lbu         $v0, 0x0($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X0);
    // 0x00426D90: beq         $v0, $zero, L_00426DA4
    if (ctx->r2 == 0) {
        // 0x00426D94: addiu       $v1, $a0, 0x1
        ctx->r3 = ADD32(ctx->r4, 0X1);
            goto L_00426DA4;
    }
    // 0x00426D94: addiu       $v1, $a0, 0x1
    ctx->r3 = ADD32(ctx->r4, 0X1);
L_00426D98:
    // 0x00426D98: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x00426D9C: bne         $v0, $zero, L_00426D98
    if (ctx->r2 != 0) {
        // 0x00426DA0: addiu       $v1, $v1, 0x1
        ctx->r3 = ADD32(ctx->r3, 0X1);
            goto L_00426D98;
    }
    // 0x00426DA0: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
L_00426DA4:
    // 0x00426DA4: subu        $v0, $v1, $a0
    ctx->r2 = SUB32(ctx->r3, ctx->r4);
    // 0x00426DA8: jr          $ra
    // 0x00426DAC: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    return;
    // 0x00426DAC: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
;}
RECOMP_FUNC void func_0025F708(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0025F708: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0025F70C: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x0025F710: lb          $v0, 0xC7($a1)
    ctx->r2 = MEM_B(ctx->r5, 0XC7);
    // 0x0025F714: beq         $v0, $zero, L_0025F724
    if (ctx->r2 == 0) {
        // 0x0025F718: sb          $zero, 0x133($a1)
        MEM_B(0X133, ctx->r5) = 0;
            goto L_0025F724;
    }
    // 0x0025F718: sb          $zero, 0x133($a1)
    MEM_B(0X133, ctx->r5) = 0;
    // 0x0025F71C: jal         0x00243414
    // 0x0025F720: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    func_00243414(rdram, ctx);
        goto after_0;
    // 0x0025F720: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_0:
L_0025F724:
    // 0x0025F724: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x0025F728: jr          $ra
    // 0x0025F72C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0025F72C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_002936E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002936E0: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x002936E4: sw          $s4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r20;
    // 0x002936E8: sw          $ra, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r31;
    // 0x002936EC: sw          $s5, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r21;
    // 0x002936F0: sw          $s3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r19;
    // 0x002936F4: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x002936F8: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x002936FC: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x00293700: sdc1        $f20, 0x48($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X48, ctx->r29);
    // 0x00293704: lh          $v1, 0x0($a1)
    ctx->r3 = MEM_H(ctx->r5, 0X0);
    // 0x00293708: lw          $s0, 0x4($a1)
    ctx->r16 = MEM_W(ctx->r5, 0X4);
    // 0x0029370C: sltiu       $v0, $v1, 0x9
    ctx->r2 = ctx->r3 < 0X9 ? 1 : 0;
    // 0x00293710: lw          $s3, 0x1C($s0)
    ctx->r19 = MEM_W(ctx->r16, 0X1C);
    // 0x00293714: beq         $v0, $zero, L_00293AF4
    if (ctx->r2 == 0) {
        // 0x00293718: addu        $s4, $a0, $zero
        ctx->r20 = ADD32(ctx->r4, 0);
            goto L_00293AF4;
    }
    // 0x00293718: addu        $s4, $a0, $zero
    ctx->r20 = ADD32(ctx->r4, 0);
    // 0x0029371C: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x00293720: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00293724: addu        $at, $at, $v0
    gpr jr_addend_0029372C = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x00293728: lw          $v0, -0x5BA0($at)
    ctx->r2 = ADD32(ctx->r1, -0X5BA0);
    // 0x0029372C: jr          $v0
    // 0x00293730: nop

    switch (jr_addend_0029372C >> 2) {
        case 0: goto L_00293734; break;
        case 1: goto L_00293878; break;
        case 2: goto L_002938E8; break;
        case 3: goto L_002939D0; break;
        case 4: goto L_00293958; break;
        case 5: goto L_00293AF4; break;
        case 6: goto L_00293A40; break;
        case 7: goto L_00293ACC; break;
        case 8: goto L_002939A0; break;
        default: switch_error(__func__, 0x0029372C, 0x800AA460);
    }
    // 0x00293730: nop

L_00293734:
    // 0x00293734: lw          $v0, 0x28($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X28);
    // 0x00293738: bne         $v0, $zero, L_00293AF4
    if (ctx->r2 != 0) {
        // 0x0029373C: nop
    
            goto L_00293AF4;
    }
    // 0x0029373C: nop

    // 0x00293740: beq         $s3, $zero, L_00293AF4
    if (ctx->r19 == 0) {
        // 0x00293744: nop
    
            goto L_00293AF4;
    }
    // 0x00293744: nop

    // 0x00293748: sh          $zero, 0x12($sp)
    MEM_H(0X12, ctx->r29) = 0;
    // 0x0029374C: lhu         $v0, 0x20($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X20);
    // 0x00293750: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x00293754: sb          $zero, 0x14($sp)
    MEM_B(0X14, ctx->r29) = 0;
    // 0x00293758: sh          $v0, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r2;
    // 0x0029375C: lw          $a0, 0x38($s4)
    ctx->r4 = MEM_W(ctx->r20, 0X38);
    // 0x00293760: jal         0x00293F60
    // 0x00293764: addiu       $a2, $sp, 0x10
    ctx->r6 = ADD32(ctx->r29, 0X10);
    func_00293F60(rdram, ctx);
        goto after_0;
    // 0x00293764: addiu       $a2, $sp, 0x10
    ctx->r6 = ADD32(ctx->r29, 0X10);
    after_0:
    // 0x00293768: lw          $a2, 0x0($s3)
    ctx->r6 = MEM_W(ctx->r19, 0X0);
    // 0x0029376C: lh          $v0, 0x2C($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X2C);
    // 0x00293770: lbu         $v1, 0xC($a2)
    ctx->r3 = MEM_BU(ctx->r6, 0XC);
    // 0x00293774: mult        $v1, $v0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x00293778: ori         $a1, $zero, 0xFFC0
    ctx->r5 = 0 | 0XFFC0;
    // 0x0029377C: mflo        $v1
    ctx->r3 = lo;
    // 0x00293780: lui         $v0, 0x8102
    ctx->r2 = S32(0X8102 << 16);
    // 0x00293784: ori         $v0, $v0, 0x409
    ctx->r2 = ctx->r2 | 0X409;
    // 0x00293788: mult        $v1, $v0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x0029378C: lbu         $v0, 0x2E($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X2E);
    // 0x00293790: lbu         $a0, 0xC($s3)
    ctx->r4 = MEM_BU(ctx->r19, 0XC);
    // 0x00293794: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x00293798: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x0029379C: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x002937A0: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x002937A4: mfhi        $t1
    ctx->r9 = hi;
    // 0x002937A8: addu        $v0, $t1, $v1
    ctx->r2 = ADD32(ctx->r9, ctx->r3);
    // 0x002937AC: sra         $v0, $v0, 6
    ctx->r2 = S32(SIGNED(ctx->r2) >> 6);
    // 0x002937B0: sra         $v1, $v1, 31
    ctx->r3 = S32(SIGNED(ctx->r3) >> 31);
    // 0x002937B4: bgez        $a0, L_002937C0
    if (SIGNED(ctx->r4) >= 0) {
        // 0x002937B8: subu        $s5, $v0, $v1
        ctx->r21 = SUB32(ctx->r2, ctx->r3);
            goto L_002937C0;
    }
    // 0x002937B8: subu        $s5, $v0, $v1
    ctx->r21 = SUB32(ctx->r2, ctx->r3);
    // 0x002937BC: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
L_002937C0:
    // 0x002937C0: sll         $v0, $a1, 16
    ctx->r2 = S32(ctx->r5 << 16);
    // 0x002937C4: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x002937C8: slti        $v0, $v0, 0x7F
    ctx->r2 = SIGNED(ctx->r2) < 0X7F ? 1 : 0;
    // 0x002937CC: beq         $v0, $zero, L_002937D8
    if (ctx->r2 == 0) {
        // 0x002937D0: addiu       $s1, $zero, 0x7F
        ctx->r17 = ADD32(0, 0X7F);
            goto L_002937D8;
    }
    // 0x002937D0: addiu       $s1, $zero, 0x7F
    ctx->r17 = ADD32(0, 0X7F);
    // 0x002937D4: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
L_002937D8:
    // 0x002937D8: lw          $s2, 0x0($a2)
    ctx->r18 = MEM_W(ctx->r6, 0X0);
    // 0x002937DC: lw          $a0, 0x38($s4)
    ctx->r4 = MEM_W(ctx->r20, 0X38);
    // 0x002937E0: lw          $a2, 0x8($s3)
    ctx->r6 = MEM_W(ctx->r19, 0X8);
    // 0x002937E4: lwc1        $f20, 0x24($s0)
    ctx->f20.u32l = MEM_W(ctx->r16, 0X24);
    // 0x002937E8: jal         0x002944A0
    // 0x002937EC: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_002944A0(rdram, ctx);
        goto after_1;
    // 0x002937EC: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_1:
    // 0x002937F0: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x002937F4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x002937F8: sw          $v0, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->r2;
    // 0x002937FC: lw          $a0, 0x38($s4)
    ctx->r4 = MEM_W(ctx->r20, 0X38);
    // 0x00293800: jal         0x002942B0
    // 0x00293804: andi        $a2, $s1, 0xFF
    ctx->r6 = ctx->r17 & 0XFF;
    func_002942B0(rdram, ctx);
        goto after_2;
    // 0x00293804: andi        $a2, $s1, 0xFF
    ctx->r6 = ctx->r17 & 0XFF;
    after_2:
    // 0x00293808: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x0029380C: sll         $a2, $s5, 16
    ctx->r6 = S32(ctx->r21 << 16);
    // 0x00293810: sra         $a2, $a2, 16
    ctx->r6 = S32(SIGNED(ctx->r6) >> 16);
    // 0x00293814: lw          $a0, 0x38($s4)
    ctx->r4 = MEM_W(ctx->r20, 0X38);
    // 0x00293818: jal         0x002943E0
    // 0x0029381C: addu        $a3, $s2, $zero
    ctx->r7 = ADD32(ctx->r18, 0);
    func_002943E0(rdram, ctx);
        goto after_3;
    // 0x0029381C: addu        $a3, $s2, $zero
    ctx->r7 = ADD32(ctx->r18, 0);
    after_3:
    // 0x00293820: lw          $a0, 0x38($s4)
    ctx->r4 = MEM_W(ctx->r20, 0X38);
    // 0x00293824: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x00293828: jal         0x00294340
    // 0x0029382C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_00294340(rdram, ctx);
        goto after_4;
    // 0x0029382C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_4:
    // 0x00293830: lw          $a0, 0x38($s4)
    ctx->r4 = MEM_W(ctx->r20, 0X38);
    // 0x00293834: lbu         $a2, 0x2F($s0)
    ctx->r6 = MEM_BU(ctx->r16, 0X2F);
    // 0x00293838: jal         0x00294200
    // 0x0029383C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_00294200(rdram, ctx);
        goto after_5;
    // 0x0029383C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_5:
    // 0x00293840: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x00293844: sh          $v0, 0x18($sp)
    MEM_H(0X18, ctx->r29) = ctx->r2;
    // 0x00293848: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x0029384C: lw          $v0, 0x0($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X0);
    // 0x00293850: lw          $a1, 0x24($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X24);
    // 0x00293854: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
    // 0x00293858: jal         0x00293C50
    // 0x0029385C: nop

    func_00293C50(rdram, ctx);
        goto after_6;
    // 0x0029385C: nop

    after_6:
    // 0x00293860: addiu       $a0, $s4, 0x14
    ctx->r4 = ADD32(ctx->r20, 0X14);
    // 0x00293864: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    // 0x00293868: jal         0x00291034
    // 0x0029386C: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    func_00291034(rdram, ctx);
        goto after_7;
    // 0x0029386C: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    after_7:
    // 0x00293870: j           L_00293AF4
    // 0x00293874: nop

        goto L_00293AF4;
    // 0x00293874: nop

L_00293878:
    // 0x00293878: lw          $v1, 0x28($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X28);
    // 0x0029387C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00293880: bne         $v1, $v0, L_00293AF4
    if (ctx->r3 != ctx->r2) {
        // 0x00293884: nop
    
            goto L_00293AF4;
    }
    // 0x00293884: nop

    // 0x00293888: beq         $s3, $zero, L_00293AF4
    if (ctx->r19 == 0) {
        // 0x0029388C: nop
    
            goto L_00293AF4;
    }
    // 0x0029388C: nop

    // 0x00293890: lw          $v0, 0x0($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X0);
    // 0x00293894: lw          $a1, 0x24($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X24);
    // 0x00293898: lw          $a0, 0x8($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X8);
    // 0x0029389C: jal         0x00293C50
    // 0x002938A0: nop

    func_00293C50(rdram, ctx);
        goto after_8;
    // 0x002938A0: nop

    after_8:
    // 0x002938A4: addu        $s2, $v0, $zero
    ctx->r18 = ADD32(ctx->r2, 0);
    // 0x002938A8: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x002938AC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x002938B0: lw          $a0, 0x38($s4)
    ctx->r4 = MEM_W(ctx->r20, 0X38);
    // 0x002938B4: jal         0x002943E0
    // 0x002938B8: addu        $a3, $s2, $zero
    ctx->r7 = ADD32(ctx->r18, 0);
    func_002943E0(rdram, ctx);
        goto after_9;
    // 0x002938B8: addu        $a3, $s2, $zero
    ctx->r7 = ADD32(ctx->r18, 0);
    after_9:
    // 0x002938BC: beq         $s2, $zero, L_00293ACC
    if (ctx->r18 == 0) {
        // 0x002938C0: addiu       $a0, $s4, 0x14
        ctx->r4 = ADD32(ctx->r20, 0X14);
            goto L_00293ACC;
    }
    // 0x002938C0: addiu       $a0, $s4, 0x14
    ctx->r4 = ADD32(ctx->r20, 0X14);
    // 0x002938C4: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    // 0x002938C8: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    // 0x002938CC: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x002938D0: sh          $v0, 0x18($sp)
    MEM_H(0X18, ctx->r29) = ctx->r2;
    // 0x002938D4: jal         0x00291034
    // 0x002938D8: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    func_00291034(rdram, ctx);
        goto after_10;
    // 0x002938D8: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    after_10:
    // 0x002938DC: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x002938E0: j           L_00293AF4
    // 0x002938E4: sw          $v0, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->r2;
        goto L_00293AF4;
    // 0x002938E4: sw          $v0, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->r2;
L_002938E8:
    // 0x002938E8: lbu         $v0, 0x8($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X8);
    // 0x002938EC: lw          $v1, 0x28($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X28);
    // 0x002938F0: sb          $v0, 0x2E($s0)
    MEM_B(0X2E, ctx->r16) = ctx->r2;
    // 0x002938F4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x002938F8: bne         $v1, $v0, L_00293AF4
    if (ctx->r3 != ctx->r2) {
        // 0x002938FC: nop
    
            goto L_00293AF4;
    }
    // 0x002938FC: nop

    // 0x00293900: beq         $s3, $zero, L_00293AF4
    if (ctx->r19 == 0) {
        // 0x00293904: ori         $a0, $zero, 0xFFC0
        ctx->r4 = 0 | 0XFFC0;
            goto L_00293AF4;
    }
    // 0x00293904: ori         $a0, $zero, 0xFFC0
    ctx->r4 = 0 | 0XFFC0;
    // 0x00293908: lbu         $v1, 0x2E($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X2E);
    // 0x0029390C: lbu         $v0, 0xC($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0XC);
    // 0x00293910: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x00293914: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x00293918: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x0029391C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x00293920: bltzl       $v0, L_00293928
    if (SIGNED(ctx->r2) < 0) {
        // 0x00293924: addu        $a1, $zero, $zero
        ctx->r5 = ADD32(0, 0);
            goto L_00293928;
    }
    goto skip_0;
    // 0x00293924: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    skip_0:
L_00293928:
    // 0x00293928: sll         $v0, $a1, 16
    ctx->r2 = S32(ctx->r5 << 16);
    // 0x0029392C: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x00293930: slti        $v0, $v0, 0x7F
    ctx->r2 = SIGNED(ctx->r2) < 0X7F ? 1 : 0;
    // 0x00293934: beq         $v0, $zero, L_00293940
    if (ctx->r2 == 0) {
        // 0x00293938: addiu       $s1, $zero, 0x7F
        ctx->r17 = ADD32(0, 0X7F);
            goto L_00293940;
    }
    // 0x00293938: addiu       $s1, $zero, 0x7F
    ctx->r17 = ADD32(0, 0X7F);
    // 0x0029393C: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
L_00293940:
    // 0x00293940: lw          $a0, 0x38($s4)
    ctx->r4 = MEM_W(ctx->r20, 0X38);
    // 0x00293944: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x00293948: jal         0x002942B0
    // 0x0029394C: andi        $a2, $s1, 0xFF
    ctx->r6 = ctx->r17 & 0XFF;
    func_002942B0(rdram, ctx);
        goto after_11;
    // 0x0029394C: andi        $a2, $s1, 0xFF
    ctx->r6 = ctx->r17 & 0XFF;
    after_11:
    // 0x00293950: j           L_00293AF4
    // 0x00293954: nop

        goto L_00293AF4;
    // 0x00293954: nop

L_00293958:
    // 0x00293958: lwc1        $f0, 0x8($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X8);
    // 0x0029395C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00293960: lwc1        $f1, -0x5B7C($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, -0X5B7C);
    // 0x00293964: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x00293968: nop

    // 0x0029396C: bc1f        L_00293978
    if (!c1cs) {
        // 0x00293970: swc1        $f0, 0x24($s0)
        MEM_W(0X24, ctx->r16) = ctx->f0.u32l;
            goto L_00293978;
    }
    // 0x00293970: swc1        $f0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f0.u32l;
    // 0x00293974: swc1        $f1, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f_odd[(1 - 1) * 2];
L_00293978:
    // 0x00293978: lw          $v1, 0x28($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X28);
    // 0x0029397C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00293980: bne         $v1, $v0, L_00293AF4
    if (ctx->r3 != ctx->r2) {
        // 0x00293984: nop
    
            goto L_00293AF4;
    }
    // 0x00293984: nop

    // 0x00293988: lw          $a0, 0x38($s4)
    ctx->r4 = MEM_W(ctx->r20, 0X38);
    // 0x0029398C: lw          $a2, 0x24($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X24);
    // 0x00293990: jal         0x00294340
    // 0x00293994: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_00294340(rdram, ctx);
        goto after_12;
    // 0x00293994: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_12:
    // 0x00293998: j           L_00293AF4
    // 0x0029399C: nop

        goto L_00293AF4;
    // 0x0029399C: nop

L_002939A0:
    // 0x002939A0: lbu         $v0, 0x8($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X8);
    // 0x002939A4: lw          $v1, 0x28($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X28);
    // 0x002939A8: sb          $v0, 0x2F($s0)
    MEM_B(0X2F, ctx->r16) = ctx->r2;
    // 0x002939AC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x002939B0: bne         $v1, $v0, L_00293AF4
    if (ctx->r3 != ctx->r2) {
        // 0x002939B4: nop
    
            goto L_00293AF4;
    }
    // 0x002939B4: nop

    // 0x002939B8: lw          $a0, 0x38($s4)
    ctx->r4 = MEM_W(ctx->r20, 0X38);
    // 0x002939BC: lbu         $a2, 0x2F($s0)
    ctx->r6 = MEM_BU(ctx->r16, 0X2F);
    // 0x002939C0: jal         0x00294200
    // 0x002939C4: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_00294200(rdram, ctx);
        goto after_13;
    // 0x002939C4: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_13:
    // 0x002939C8: j           L_00293AF4
    // 0x002939CC: nop

        goto L_00293AF4;
    // 0x002939CC: nop

L_002939D0:
    // 0x002939D0: lhu         $a1, 0x8($a1)
    ctx->r5 = MEM_HU(ctx->r5, 0X8);
    // 0x002939D4: lw          $v1, 0x28($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X28);
    // 0x002939D8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x002939DC: bne         $v1, $v0, L_00293AF4
    if (ctx->r3 != ctx->r2) {
        // 0x002939E0: sh          $a1, 0x2C($s0)
        MEM_H(0X2C, ctx->r16) = ctx->r5;
            goto L_00293AF4;
    }
    // 0x002939E0: sh          $a1, 0x2C($s0)
    MEM_H(0X2C, ctx->r16) = ctx->r5;
    // 0x002939E4: beq         $s3, $zero, L_00293AF4
    if (ctx->r19 == 0) {
        // 0x002939E8: sll         $v0, $a1, 16
        ctx->r2 = S32(ctx->r5 << 16);
            goto L_00293AF4;
    }
    // 0x002939E8: sll         $v0, $a1, 16
    ctx->r2 = S32(ctx->r5 << 16);
    // 0x002939EC: lw          $v1, 0x0($s3)
    ctx->r3 = MEM_W(ctx->r19, 0X0);
    // 0x002939F0: lbu         $v1, 0xD($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0XD);
    // 0x002939F4: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x002939F8: mult        $v1, $v0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x002939FC: mflo        $v1
    ctx->r3 = lo;
    // 0x00293A00: lui         $v0, 0x8102
    ctx->r2 = S32(0X8102 << 16);
    // 0x00293A04: ori         $v0, $v0, 0x409
    ctx->r2 = ctx->r2 | 0X409;
    // 0x00293A08: mult        $v1, $v0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x00293A0C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x00293A10: addiu       $a3, $zero, 0x3E8
    ctx->r7 = ADD32(0, 0X3E8);
    // 0x00293A14: lw          $a0, 0x38($s4)
    ctx->r4 = MEM_W(ctx->r20, 0X38);
    // 0x00293A18: mfhi        $t1
    ctx->r9 = hi;
    // 0x00293A1C: addu        $v0, $t1, $v1
    ctx->r2 = ADD32(ctx->r9, ctx->r3);
    // 0x00293A20: sra         $v0, $v0, 6
    ctx->r2 = S32(SIGNED(ctx->r2) >> 6);
    // 0x00293A24: sra         $v1, $v1, 31
    ctx->r3 = S32(SIGNED(ctx->r3) >> 31);
    // 0x00293A28: subu        $s1, $v0, $v1
    ctx->r17 = SUB32(ctx->r2, ctx->r3);
    // 0x00293A2C: sll         $a2, $s1, 16
    ctx->r6 = S32(ctx->r17 << 16);
    // 0x00293A30: jal         0x002943E0
    // 0x00293A34: sra         $a2, $a2, 16
    ctx->r6 = S32(SIGNED(ctx->r6) >> 16);
    func_002943E0(rdram, ctx);
        goto after_14;
    // 0x00293A34: sra         $a2, $a2, 16
    ctx->r6 = S32(SIGNED(ctx->r6) >> 16);
    after_14:
    // 0x00293A38: j           L_00293AF4
    // 0x00293A3C: nop

        goto L_00293AF4;
    // 0x00293A3C: nop

L_00293A40:
    // 0x00293A40: lw          $v1, 0x0($s3)
    ctx->r3 = MEM_W(ctx->r19, 0X0);
    // 0x00293A44: lw          $a0, 0x4($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X4);
    // 0x00293A48: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x00293A4C: beq         $a0, $v0, L_00293AF4
    if (ctx->r4 == ctx->r2) {
        // 0x00293A50: nop
    
            goto L_00293AF4;
    }
    // 0x00293A50: nop

    // 0x00293A54: lbu         $v1, 0xD($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0XD);
    // 0x00293A58: lh          $v0, 0x2C($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X2C);
    // 0x00293A5C: mult        $v1, $v0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x00293A60: mflo        $v1
    ctx->r3 = lo;
    // 0x00293A64: lui         $v0, 0x8102
    ctx->r2 = S32(0X8102 << 16);
    // 0x00293A68: ori         $v0, $v0, 0x409
    ctx->r2 = ctx->r2 | 0X409;
    // 0x00293A6C: mult        $v1, $v0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x00293A70: lw          $a1, 0x24($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X24);
    // 0x00293A74: mfhi        $t1
    ctx->r9 = hi;
    // 0x00293A78: addu        $v0, $t1, $v1
    ctx->r2 = ADD32(ctx->r9, ctx->r3);
    // 0x00293A7C: sra         $v0, $v0, 6
    ctx->r2 = S32(SIGNED(ctx->r2) >> 6);
    // 0x00293A80: sra         $v1, $v1, 31
    ctx->r3 = S32(SIGNED(ctx->r3) >> 31);
    // 0x00293A84: jal         0x00293C50
    // 0x00293A88: subu        $s1, $v0, $v1
    ctx->r17 = SUB32(ctx->r2, ctx->r3);
    func_00293C50(rdram, ctx);
        goto after_15;
    // 0x00293A88: subu        $s1, $v0, $v1
    ctx->r17 = SUB32(ctx->r2, ctx->r3);
    after_15:
    // 0x00293A8C: addu        $s2, $v0, $zero
    ctx->r18 = ADD32(ctx->r2, 0);
    // 0x00293A90: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x00293A94: sll         $a2, $s1, 16
    ctx->r6 = S32(ctx->r17 << 16);
    // 0x00293A98: sra         $a2, $a2, 16
    ctx->r6 = S32(SIGNED(ctx->r6) >> 16);
    // 0x00293A9C: lw          $a0, 0x38($s4)
    ctx->r4 = MEM_W(ctx->r20, 0X38);
    // 0x00293AA0: jal         0x002943E0
    // 0x00293AA4: addu        $a3, $s2, $zero
    ctx->r7 = ADD32(ctx->r18, 0);
    func_002943E0(rdram, ctx);
        goto after_16;
    // 0x00293AA4: addu        $a3, $s2, $zero
    ctx->r7 = ADD32(ctx->r18, 0);
    after_16:
    // 0x00293AA8: addiu       $a0, $s4, 0x14
    ctx->r4 = ADD32(ctx->r20, 0X14);
    // 0x00293AAC: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    // 0x00293AB0: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    // 0x00293AB4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00293AB8: sh          $v0, 0x18($sp)
    MEM_H(0X18, ctx->r29) = ctx->r2;
    // 0x00293ABC: jal         0x00291034
    // 0x00293AC0: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    func_00291034(rdram, ctx);
        goto after_17;
    // 0x00293AC0: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    after_17:
    // 0x00293AC4: j           L_00293AF4
    // 0x00293AC8: nop

        goto L_00293AF4;
    // 0x00293AC8: nop

L_00293ACC:
    // 0x00293ACC: lw          $a0, 0x38($s4)
    ctx->r4 = MEM_W(ctx->r20, 0X38);
    // 0x00293AD0: jal         0x00294650
    // 0x00293AD4: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_00294650(rdram, ctx);
        goto after_18;
    // 0x00293AD4: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_18:
    // 0x00293AD8: lw          $a0, 0x38($s4)
    ctx->r4 = MEM_W(ctx->r20, 0X38);
    // 0x00293ADC: jal         0x00294160
    // 0x00293AE0: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_00294160(rdram, ctx);
        goto after_19;
    // 0x00293AE0: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_19:
    // 0x00293AE4: addiu       $a0, $s4, 0x14
    ctx->r4 = ADD32(ctx->r20, 0X14);
    // 0x00293AE8: jal         0x00293BA8
    // 0x00293AEC: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_00293BA8(rdram, ctx);
        goto after_20;
    // 0x00293AEC: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_20:
    // 0x00293AF0: sw          $zero, 0x28($s0)
    MEM_W(0X28, ctx->r16) = 0;
L_00293AF4:
    // 0x00293AF4: lw          $ra, 0x40($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X40);
    // 0x00293AF8: lw          $s5, 0x3C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X3C);
    // 0x00293AFC: lw          $s4, 0x38($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X38);
    // 0x00293B00: lw          $s3, 0x34($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X34);
    // 0x00293B04: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x00293B08: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x00293B0C: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x00293B10: ldc1        $f20, 0x48($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X48);
    // 0x00293B14: jr          $ra
    // 0x00293B18: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x00293B18: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_0026C308(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0026C308: addiu       $sp, $sp, -0x98
    ctx->r29 = ADD32(ctx->r29, -0X98);
    // 0x0026C30C: sw          $s1, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r17;
    // 0x0026C310: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x0026C314: lui         $v0, 0x5555
    ctx->r2 = S32(0X5555 << 16);
    // 0x0026C318: ori         $v0, $v0, 0x5556
    ctx->r2 = ctx->r2 | 0X5556;
    // 0x0026C31C: addiu       $a0, $a2, 0x1
    ctx->r4 = ADD32(ctx->r6, 0X1);
    // 0x0026C320: sll         $a2, $a2, 2
    ctx->r6 = S32(ctx->r6 << 2);
    // 0x0026C324: addu        $a2, $a1, $a2
    ctx->r6 = ADD32(ctx->r5, ctx->r6);
    // 0x0026C328: sra         $v1, $a0, 31
    ctx->r3 = S32(SIGNED(ctx->r4) >> 31);
    // 0x0026C32C: sw          $ra, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r31;
    // 0x0026C330: mult        $a0, $v0
    result = S64(S32(ctx->r4)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x0026C334: sw          $s0, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r16;
    // 0x0026C338: sdc1        $f22, 0x90($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X90, ctx->r29);
    // 0x0026C33C: sdc1        $f21, 0x88($sp)
    CHECK_FR(ctx, 21);
    SD(ctx->f21.u64, 0X88, ctx->r29);
    // 0x0026C340: sdc1        $f20, 0x80($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X80, ctx->r29);
    // 0x0026C344: mfhi        $a3
    ctx->r7 = hi;
    // 0x0026C348: subu        $v1, $a3, $v1
    ctx->r3 = SUB32(ctx->r7, ctx->r3);
    // 0x0026C34C: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x0026C350: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x0026C354: subu        $a0, $a0, $v0
    ctx->r4 = SUB32(ctx->r4, ctx->r2);
    // 0x0026C358: sll         $a0, $a0, 2
    ctx->r4 = S32(ctx->r4 << 2);
    // 0x0026C35C: addu        $a1, $a1, $a0
    ctx->r5 = ADD32(ctx->r5, ctx->r4);
    // 0x0026C360: lw          $v0, 0x4($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X4);
    // 0x0026C364: lw          $v1, 0x4($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X4);
    // 0x0026C368: lwc1        $f1, 0x0($v0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r2, 0X0);
    // 0x0026C36C: lwc1        $f0, 0x0($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X0);
    // 0x0026C370: sub.s       $f21, $f1, $f0
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f21.fl = ctx->f1.fl - ctx->f0.fl;
    // 0x0026C374: mul.s       $f2, $f21, $f21
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f21.fl); NAN_CHECK(ctx->f21.fl); 
    ctx->f2.fl = MUL_S(ctx->f21.fl, ctx->f21.fl);
    // 0x0026C378: lwc1        $f1, 0x8($v0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r2, 0X8);
    // 0x0026C37C: lwc1        $f0, 0x8($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X8);
    // 0x0026C380: sub.s       $f20, $f1, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = ctx->f1.fl - ctx->f0.fl;
    // 0x0026C384: mul.s       $f12, $f20, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f12.fl = MUL_S(ctx->f20.fl, ctx->f20.fl);
    // 0x0026C388: jal         0x00298470
    // 0x0026C38C: add.s       $f12, $f2, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = ctx->f2.fl + ctx->f12.fl;
    func_00298470(rdram, ctx);
        goto after_0;
    // 0x0026C38C: add.s       $f12, $f2, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = ctx->f2.fl + ctx->f12.fl;
    after_0:
    // 0x0026C390: mtc1        $zero, $f22
    ctx->f22.u32l = 0;
    // 0x0026C394: c.eq.s      $f0, $f22
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f0.fl == ctx->f22.fl;
    // 0x0026C398: nop

    // 0x0026C39C: bc1f        L_0026C3AC
    if (!c1cs) {
        // 0x0026C3A0: nop
    
            goto L_0026C3AC;
    }
    // 0x0026C3A0: nop

    // 0x0026C3A4: j           L_0026C3C4
    // 0x0026C3A8: mov.s       $f0, $f22
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    ctx->f0.fl = ctx->f22.fl;
        goto L_0026C3C4;
    // 0x0026C3A8: mov.s       $f0, $f22
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    ctx->f0.fl = ctx->f22.fl;
L_0026C3AC:
    // 0x0026C3AC: jal         0x0021153C
    // 0x0026C3B0: div.s       $f12, $f21, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f21.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = DIV_S(ctx->f21.fl, ctx->f0.fl);
    func_0021153C(rdram, ctx);
        goto after_1;
    // 0x0026C3B0: div.s       $f12, $f21, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f21.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = DIV_S(ctx->f21.fl, ctx->f0.fl);
    after_1:
    // 0x0026C3B4: c.lt.s      $f20, $f22
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f20.fl < ctx->f22.fl;
    // 0x0026C3B8: nop

    // 0x0026C3BC: bc1fl       L_0026C3C4
    if (!c1cs) {
        // 0x0026C3C0: neg.s       $f0, $f0
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
            goto L_0026C3C4;
    }
    goto skip_0;
    // 0x0026C3C0: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    skip_0:
L_0026C3C4:
    // 0x0026C3C4: addiu       $s0, $sp, 0x30
    ctx->r16 = ADD32(ctx->r29, 0X30);
    // 0x0026C3C8: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x0026C3CC: jal         0x002105A4
    // 0x0026C3D0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_002105A4(rdram, ctx);
        goto after_2;
    // 0x0026C3D0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x0026C3D4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0026C3D8: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x0026C3DC: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0026C3E0: lwc1        $f0, -0x7FF8($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X7FF8);
    // 0x0026C3E4: addiu       $a2, $sp, 0x10
    ctx->r6 = ADD32(ctx->r29, 0X10);
    // 0x0026C3E8: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x0026C3EC: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x0026C3F0: jal         0x0020F85C
    // 0x0026C3F4: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    func_0020F85C(rdram, ctx);
        goto after_3;
    // 0x0026C3F4: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    after_3:
    // 0x0026C3F8: addu        $v0, $s1, $zero
    ctx->r2 = ADD32(ctx->r17, 0);
    // 0x0026C3FC: lw          $t0, 0x10($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X10);
    // 0x0026C400: lw          $t1, 0x14($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X14);
    // 0x0026C404: lw          $t2, 0x18($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X18);
    // 0x0026C408: sw          $t0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r8;
    // 0x0026C40C: sw          $t1, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->r9;
    // 0x0026C410: sw          $t2, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->r10;
    // 0x0026C414: lw          $ra, 0x78($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X78);
    // 0x0026C418: lw          $s1, 0x74($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X74);
    // 0x0026C41C: lw          $s0, 0x70($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X70);
    // 0x0026C420: ldc1        $f22, 0x90($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X90);
    // 0x0026C424: ldc1        $f21, 0x88($sp)
    CHECK_FR(ctx, 21);
    ctx->f21.u64 = LD(ctx->r29, 0X88);
    // 0x0026C428: ldc1        $f20, 0x80($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X80);
    // 0x0026C42C: jr          $ra
    // 0x0026C430: addiu       $sp, $sp, 0x98
    ctx->r29 = ADD32(ctx->r29, 0X98);
    return;
    // 0x0026C430: addiu       $sp, $sp, 0x98
    ctx->r29 = ADD32(ctx->r29, 0X98);
;}
RECOMP_FUNC void func_00214108(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00214108: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x0021410C: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x00214110: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    // 0x00214114: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x00214118: lui         $s3, 0x800F
    ctx->r19 = S32(0X800F << 16);
    // 0x0021411C: addiu       $s3, $s3, 0x7078
    ctx->r19 = ADD32(ctx->r19, 0X7078);
    // 0x00214120: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x00214124: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00214128: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0021412C: lw          $v0, 0x14A8($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X14A8);
    // 0x00214130: blez        $v0, L_00214168
    if (SIGNED(ctx->r2) <= 0) {
        // 0x00214134: addu        $s1, $s2, $zero
        ctx->r17 = ADD32(ctx->r18, 0);
            goto L_00214168;
    }
    // 0x00214134: addu        $s1, $s2, $zero
    ctx->r17 = ADD32(ctx->r18, 0);
    // 0x00214138: addu        $s0, $s3, $zero
    ctx->r16 = ADD32(ctx->r19, 0);
L_0021413C:
    // 0x0021413C: lw          $v0, 0x14AC($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X14AC);
    // 0x00214140: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x00214144: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x00214148: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
    // 0x0021414C: jal         0x002017D4
    // 0x00214150: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_002017D4(rdram, ctx);
        goto after_0;
    // 0x00214150: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_0:
    // 0x00214154: lw          $v1, 0x4($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X4);
    // 0x00214158: lw          $v0, 0x14A8($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X14A8);
    // 0x0021415C: slt         $v0, $s2, $v0
    ctx->r2 = SIGNED(ctx->r18) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x00214160: bne         $v0, $zero, L_0021413C
    if (ctx->r2 != 0) {
        // 0x00214164: addu        $s1, $s1, $v1
        ctx->r17 = ADD32(ctx->r17, ctx->r3);
            goto L_0021413C;
    }
    // 0x00214164: addu        $s1, $s1, $v1
    ctx->r17 = ADD32(ctx->r17, ctx->r3);
L_00214168:
    // 0x00214168: addu        $v0, $s1, $zero
    ctx->r2 = ADD32(ctx->r17, 0);
    // 0x0021416C: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x00214170: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x00214174: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x00214178: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x0021417C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00214180: jr          $ra
    // 0x00214184: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x00214184: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_0040BAB8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0040BAB8: addiu       $sp, $sp, -0xB0
    ctx->r29 = ADD32(ctx->r29, -0XB0);
    // 0x0040BABC: sw          $s1, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r17;
    // 0x0040BAC0: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x0040BAC4: sw          $s0, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r16;
    // 0x0040BAC8: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x0040BACC: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    // 0x0040BAD0: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x0040BAD4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0040BAD8: sw          $ra, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->r31;
    // 0x0040BADC: jal         0x00246108
    // 0x0040BAE0: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    func_00246108(rdram, ctx);
        goto after_0;
    // 0x0040BAE0: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    after_0:
    // 0x0040BAE4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0040BAE8: lui         $a2, 0x3E86
    ctx->r6 = S32(0X3E86 << 16);
    // 0x0040BAEC: ori         $a2, $a2, 0xA93
    ctx->r6 = ctx->r6 | 0XA93;
    // 0x0040BAF0: lw          $a3, 0x20($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X20);
    // 0x0040BAF4: jal         0x00245BAC
    // 0x0040BAF8: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_00245BAC(rdram, ctx);
        goto after_1;
    // 0x0040BAF8: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_1:
    // 0x0040BAFC: lb          $v0, 0xC7($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XC7);
    // 0x0040BB00: beq         $v0, $zero, L_0040BB14
    if (ctx->r2 == 0) {
        // 0x0040BB04: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_0040BB14;
    }
    // 0x0040BB04: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0040BB08: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x0040BB0C: jal         0x00243414
    // 0x0040BB10: addiu       $a2, $zero, 0x16
    ctx->r6 = ADD32(0, 0X16);
    func_00243414(rdram, ctx);
        goto after_2;
    // 0x0040BB10: addiu       $a2, $zero, 0x16
    ctx->r6 = ADD32(0, 0X16);
    after_2:
L_0040BB14:
    // 0x0040BB14: lw          $ra, 0xA8($sp)
    ctx->r31 = MEM_W(ctx->r29, 0XA8);
    // 0x0040BB18: lw          $s1, 0xA4($sp)
    ctx->r17 = MEM_W(ctx->r29, 0XA4);
    // 0x0040BB1C: lw          $s0, 0xA0($sp)
    ctx->r16 = MEM_W(ctx->r29, 0XA0);
    // 0x0040BB20: jr          $ra
    // 0x0040BB24: addiu       $sp, $sp, 0xB0
    ctx->r29 = ADD32(ctx->r29, 0XB0);
    return;
    // 0x0040BB24: addiu       $sp, $sp, 0xB0
    ctx->r29 = ADD32(ctx->r29, 0XB0);
;}
RECOMP_FUNC void func_0027AD54(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0027AD54: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0027AD58: addiu       $v0, $zero, 0x64
    ctx->r2 = ADD32(0, 0X64);
    // 0x0027AD5C: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x0027AD60: sw          $a1, 0x88($a0)
    MEM_W(0X88, ctx->r4) = ctx->r5;
    // 0x0027AD64: sw          $a2, 0x84($a0)
    MEM_W(0X84, ctx->r4) = ctx->r6;
    // 0x0027AD68: sw          $v0, 0x8C($a0)
    MEM_W(0X8C, ctx->r4) = ctx->r2;
    // 0x0027AD6C: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x0027AD70: addiu       $a1, $a1, 0x2C64
    ctx->r5 = ADD32(ctx->r5, 0X2C64);
    // 0x0027AD74: jal         0x0027AD00
    // 0x0027AD78: addiu       $a0, $a0, 0x48
    ctx->r4 = ADD32(ctx->r4, 0X48);
    func_0027AD00(rdram, ctx);
        goto after_0;
    // 0x0027AD78: addiu       $a0, $a0, 0x48
    ctx->r4 = ADD32(ctx->r4, 0X48);
    after_0:
    // 0x0027AD7C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x0027AD80: jr          $ra
    // 0x0027AD84: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0027AD84: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0020793C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0020793C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x00207940: addu        $v1, $a0, $zero
    ctx->r3 = ADD32(ctx->r4, 0);
    // 0x00207944: lui         $v0, 0x20
    ctx->r2 = S32(0X20 << 16);
    // 0x00207948: addiu       $v0, $v0, 0x6990
    ctx->r2 = ADD32(ctx->r2, 0X6990);
    // 0x0020794C: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x00207950: lui         $v0, 0x800A
    ctx->r2 = S32(0X800A << 16);
    // 0x00207954: addiu       $v0, $v0, 0x51F0
    ctx->r2 = ADD32(ctx->r2, 0X51F0);
    // 0x00207958: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x0020795C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00207960: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x00207964: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x00207968: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x0020796C: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x00207970: lw          $a1, 0x0($v1)
    ctx->r5 = MEM_W(ctx->r3, 0X0);
    // 0x00207974: lw          $a2, 0x4($v1)
    ctx->r6 = MEM_W(ctx->r3, 0X4);
    // 0x00207978: jal         0x0020367C
    // 0x0020797C: addu        $a3, $a0, $zero
    ctx->r7 = ADD32(ctx->r4, 0);
    func_0020367C(rdram, ctx);
        goto after_0;
    // 0x0020797C: addu        $a3, $a0, $zero
    ctx->r7 = ADD32(ctx->r4, 0);
    after_0:
    // 0x00207980: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x00207984: jr          $ra
    // 0x00207988: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x00207988: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_00290F9C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00290F9C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x00290FA0: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x00290FA4: addu        $s3, $a0, $zero
    ctx->r19 = ADD32(ctx->r4, 0);
    // 0x00290FA8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00290FAC: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x00290FB0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x00290FB4: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x00290FB8: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x00290FBC: jal         0x0029E230
    // 0x00290FC0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    func_0029E230(rdram, ctx);
        goto after_0;
    // 0x00290FC0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_0:
    // 0x00290FC4: lw          $s0, 0x8($s3)
    ctx->r16 = MEM_W(ctx->r19, 0X8);
    // 0x00290FC8: beq         $s0, $zero, L_00291000
    if (ctx->r16 == 0) {
        // 0x00290FCC: addu        $s2, $v0, $zero
        ctx->r18 = ADD32(ctx->r2, 0);
            goto L_00291000;
    }
    // 0x00290FCC: addu        $s2, $v0, $zero
    ctx->r18 = ADD32(ctx->r2, 0);
    // 0x00290FD0: jal         0x002933B0
    // 0x00290FD4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_002933B0(rdram, ctx);
        goto after_1;
    // 0x00290FD4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x00290FD8: addiu       $a0, $s0, 0xC
    ctx->r4 = ADD32(ctx->r16, 0XC);
    // 0x00290FDC: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x00290FE0: jal         0x00291270
    // 0x00290FE4: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    func_00291270(rdram, ctx);
        goto after_2;
    // 0x00290FE4: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_2:
    // 0x00290FE8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00290FEC: jal         0x002933E0
    // 0x00290FF0: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    func_002933E0(rdram, ctx);
        goto after_3;
    // 0x00290FF0: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    after_3:
    // 0x00290FF4: lw          $s0, 0x8($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X8);
    // 0x00290FF8: j           L_0029100C
    // 0x00290FFC: nop

        goto L_0029100C;
    // 0x00290FFC: nop

L_00291000:
    // 0x00291000: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x00291004: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
    // 0x00291008: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
L_0029100C:
    // 0x0029100C: jal         0x0029E230
    // 0x00291010: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_0029E230(rdram, ctx);
        goto after_4;
    // 0x00291010: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_4:
    // 0x00291014: addu        $v0, $s0, $zero
    ctx->r2 = ADD32(ctx->r16, 0);
    // 0x00291018: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x0029101C: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x00291020: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x00291024: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00291028: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0029102C: jr          $ra
    // 0x00291030: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x00291030: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_00252C70(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00252C70: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x00252C74: sw          $ra, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r31;
    // 0x00252C78: sw          $s7, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r23;
    // 0x00252C7C: sw          $s6, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r22;
    // 0x00252C80: sw          $s5, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r21;
    // 0x00252C84: sw          $s4, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r20;
    // 0x00252C88: sw          $s3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r19;
    // 0x00252C8C: sw          $s2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r18;
    // 0x00252C90: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x00252C94: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x00252C98: lw          $s2, 0x20($a0)
    ctx->r18 = MEM_W(ctx->r4, 0X20);
    // 0x00252C9C: beq         $s2, $zero, L_00252DDC
    if (ctx->r18 == 0) {
        // 0x00252CA0: addu        $s7, $a1, $zero
        ctx->r23 = ADD32(ctx->r5, 0);
            goto L_00252DDC;
    }
    // 0x00252CA0: addu        $s7, $a1, $zero
    ctx->r23 = ADD32(ctx->r5, 0);
    // 0x00252CA4: lui         $s6, 0x4
    ctx->r22 = S32(0X4 << 16);
    // 0x00252CA8: lui         $s5, 0x800A
    ctx->r21 = S32(0X800A << 16);
    // 0x00252CAC: addiu       $s5, $s5, 0x7094
    ctx->r21 = ADD32(ctx->r21, 0X7094);
    // 0x00252CB0: addiu       $s4, $zero, 0x1
    ctx->r20 = ADD32(0, 0X1);
L_00252CB4:
    // 0x00252CB4: lw          $v0, 0x51C($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X51C);
    // 0x00252CB8: bne         $v0, $s7, L_00252D6C
    if (ctx->r2 != ctx->r23) {
        // 0x00252CBC: nop
    
            goto L_00252D6C;
    }
    // 0x00252CBC: nop

    // 0x00252CC0: lw          $v0, 0x24($s7)
    ctx->r2 = MEM_W(ctx->r23, 0X24);
    // 0x00252CC4: bne         $v0, $zero, L_00252D6C
    if (ctx->r2 != 0) {
        // 0x00252CC8: addiu       $s1, $s2, 0x288
        ctx->r17 = ADD32(ctx->r18, 0X288);
            goto L_00252D6C;
    }
    // 0x00252CC8: addiu       $s1, $s2, 0x288
    ctx->r17 = ADD32(ctx->r18, 0X288);
    // 0x00252CCC: lw          $v0, 0xD4($s1)
    ctx->r2 = MEM_W(ctx->r17, 0XD4);
    // 0x00252CD0: and         $v0, $v0, $s6
    ctx->r2 = ctx->r2 & ctx->r22;
    // 0x00252CD4: beq         $v0, $zero, L_00252DD0
    if (ctx->r2 == 0) {
        // 0x00252CD8: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_00252DD0;
    }
    // 0x00252CD8: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x00252CDC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x00252CE0: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x00252CE4: sw          $s5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r21;
    // 0x00252CE8: sw          $s4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r20;
    // 0x00252CEC: lw          $a1, 0xA4($s1)
    ctx->r5 = MEM_W(ctx->r17, 0XA4);
    // 0x00252CF0: lw          $a2, 0xB0($s1)
    ctx->r6 = MEM_W(ctx->r17, 0XB0);
    // 0x00252CF4: jal         0x0020367C
    // 0x00252CF8: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    func_0020367C(rdram, ctx);
        goto after_0;
    // 0x00252CF8: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    after_0:
    // 0x00252CFC: addu        $s3, $v0, $zero
    ctx->r19 = ADD32(ctx->r2, 0);
    // 0x00252D00: beq         $s3, $zero, L_00252DD0
    if (ctx->r19 == 0) {
        // 0x00252D04: nop
    
            goto L_00252DD0;
    }
    // 0x00252D04: nop

    // 0x00252D08: lw          $a0, 0x0($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X0);
    // 0x00252D0C: lw          $s0, 0x1A8($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X1A8);
    // 0x00252D10: jal         0x002017D4
    // 0x00252D14: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_002017D4(rdram, ctx);
        goto after_1;
    // 0x00252D14: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_1:
    // 0x00252D18: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x00252D1C: jal         0x0021E7F8
    // 0x00252D20: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    func_0021E7F8(rdram, ctx);
        goto after_2;
    // 0x00252D20: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    after_2:
    // 0x00252D24: lw          $v0, 0x51C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X51C);
    // 0x00252D28: lwc1        $f0, 0x4($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X4);
    // 0x00252D2C: lwc1        $f1, 0x114($v0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r2, 0X114);
    // 0x00252D30: sub.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl - ctx->f0.fl;
    // 0x00252D34: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x00252D38: swc1        $f1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    // 0x00252D3C: lw          $v0, 0x51C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X51C);
    // 0x00252D40: lwc1        $f1, 0xC($s1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r17, 0XC);
    // 0x00252D44: lwc1        $f0, 0x11C($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X11C);
    // 0x00252D48: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x00252D4C: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x00252D50: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x00252D54: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x00252D58: jal         0x0021E03C
    // 0x00252D5C: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    func_0021E03C(rdram, ctx);
        goto after_3;
    // 0x00252D5C: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    after_3:
    // 0x00252D60: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x00252D64: j           L_00252DC8
    // 0x00252D68: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
        goto L_00252DC8;
    // 0x00252D68: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
L_00252D6C:
    // 0x00252D6C: lw          $v0, 0xD4($s2)
    ctx->r2 = MEM_W(ctx->r18, 0XD4);
    // 0x00252D70: and         $v0, $v0, $s6
    ctx->r2 = ctx->r2 & ctx->r22;
    // 0x00252D74: beq         $v0, $zero, L_00252DD0
    if (ctx->r2 == 0) {
        // 0x00252D78: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_00252DD0;
    }
    // 0x00252D78: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x00252D7C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x00252D80: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x00252D84: sw          $s5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r21;
    // 0x00252D88: sw          $s4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r20;
    // 0x00252D8C: lw          $a1, 0xA4($s2)
    ctx->r5 = MEM_W(ctx->r18, 0XA4);
    // 0x00252D90: lw          $a2, 0xB0($s2)
    ctx->r6 = MEM_W(ctx->r18, 0XB0);
    // 0x00252D94: jal         0x0020367C
    // 0x00252D98: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    func_0020367C(rdram, ctx);
        goto after_4;
    // 0x00252D98: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    after_4:
    // 0x00252D9C: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x00252DA0: beq         $s0, $zero, L_00252DD0
    if (ctx->r16 == 0) {
        // 0x00252DA4: nop
    
            goto L_00252DD0;
    }
    // 0x00252DA4: nop

    // 0x00252DA8: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x00252DAC: jal         0x002017D4
    // 0x00252DB0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_002017D4(rdram, ctx);
        goto after_5;
    // 0x00252DB0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_5:
    // 0x00252DB4: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x00252DB8: jal         0x0021E7F8
    // 0x00252DBC: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    func_0021E7F8(rdram, ctx);
        goto after_6;
    // 0x00252DBC: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    after_6:
    // 0x00252DC0: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x00252DC4: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
L_00252DC8:
    // 0x00252DC8: jal         0x002051F4
    // 0x00252DCC: nop

    func_002051F4(rdram, ctx);
        goto after_7;
    // 0x00252DCC: nop

    after_7:
L_00252DD0:
    // 0x00252DD0: lw          $s2, 0x1320($s2)
    ctx->r18 = MEM_W(ctx->r18, 0X1320);
    // 0x00252DD4: bne         $s2, $zero, L_00252CB4
    if (ctx->r18 != 0) {
        // 0x00252DD8: nop
    
            goto L_00252CB4;
    }
    // 0x00252DD8: nop

L_00252DDC:
    // 0x00252DDC: lw          $ra, 0x50($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X50);
    // 0x00252DE0: lw          $s7, 0x4C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X4C);
    // 0x00252DE4: lw          $s6, 0x48($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X48);
    // 0x00252DE8: lw          $s5, 0x44($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X44);
    // 0x00252DEC: lw          $s4, 0x40($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X40);
    // 0x00252DF0: lw          $s3, 0x3C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X3C);
    // 0x00252DF4: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x00252DF8: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x00252DFC: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x00252E00: jr          $ra
    // 0x00252E04: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    return;
    // 0x00252E04: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void func_00441C10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_00408CCC:
    // 0x00441C10: lw          $v1, 0x8($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X8);
L_00408CE0:
    // 0x00441C14: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00441C18: beq         $v1, $v0, L_00441CEC
    if (ctx->r3 == ctx->r2) {
        // 0x00441C1C: nop
    
            goto L_00441CEC;
    }
    // 0x00441C1C: nop

    // 0x00441C20: lui         $a2, 0x8011
    ctx->r6 = S32(0X8011 << 16);
    // 0x00441C24: lw          $a2, -0x14C($a2)
    ctx->r6 = MEM_W(ctx->r6, -0X14C);
    // 0x00441C28: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x00441C2C: lw          $a3, -0x6770($a3)
    ctx->r7 = MEM_W(ctx->r7, -0X6770);
    // 0x00441C30: beq         $a2, $zero, L_00441CEC
    if (ctx->r6 == 0) {
        // 0x00441C34: addu        $t0, $zero, $zero
        ctx->r8 = ADD32(0, 0);
            goto L_00441CEC;
    }
    // 0x00441C34: addu        $t0, $zero, $zero
    ctx->r8 = ADD32(0, 0);
    // 0x00441C38: addu        $t3, $v0, $zero
    ctx->r11 = ADD32(ctx->r2, 0);
    // 0x00441C3C: lui         $t2, 0x2000
    ctx->r10 = S32(0X2000 << 16);
    // 0x00441C40: lui         $t1, 0x4000
    ctx->r9 = S32(0X4000 << 16);
L_00441C44:
    // 0x00441C44: lw          $v0, 0x14($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X14);
    // 0x00441C48: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x00441C4C: bne         $v0, $t3, L_00441CE0
    if (ctx->r2 != ctx->r11) {
        // 0x00441C50: nop
    
            goto L_00441CE0;
    }
    // 0x00441C50: nop

    // 0x00441C54: lw          $v0, 0x1B8($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X1B8);
    // 0x00441C58: bne         $v0, $zero, L_00441CE0
    if (ctx->r2 != 0) {
        // 0x00441C5C: nop
    
            goto L_00441CE0;
    }
    // 0x00441C5C: nop

    // 0x00441C60: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x00441C64: bne         $v0, $zero, L_00441CB8
    if (ctx->r2 != 0) {
        // 0x00441C68: nop
    
            goto L_00441CB8;
    }
    // 0x00441C68: nop

    // 0x00441C6C: lw          $v0, 0x4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X4);
    // 0x00441C70: lh          $v0, 0x44($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X44);
    // 0x00441C74: slt         $v0, $t0, $v0
    ctx->r2 = SIGNED(ctx->r8) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x00441C78: bne         $v0, $zero, L_00441C88
    if (ctx->r2 != 0) {
        // 0x00441C7C: nop
    
            goto L_00441C88;
    }
    // 0x00441C7C: nop

    // 0x00441C80: beq         $a1, $zero, L_00441C94
    if (ctx->r5 == 0) {
        // 0x00441C84: nop
    
            goto L_00441C94;
    }
    // 0x00441C84: nop

L_00441C88:
    // 0x00441C88: lw          $v0, 0x140($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X140);
    // 0x00441C8C: j           L_00408CCC
    // 0x00441C90: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    entry_00408CCC(rdram, ctx);
    return;
    // 0x00441C90: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
L_00441C94:
    // 0x00441C94: lw          $v1, 0x140($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X140);
    // 0x00441C98: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x00441C9C: or          $v1, $v1, $t2
    ctx->r3 = ctx->r3 | ctx->r10;
    // 0x00441CA0: sw          $v0, 0x1C0($a2)
    MEM_W(0X1C0, ctx->r6) = ctx->r2;
    // 0x00441CA4: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x00441CA8: or          $v1, $v1, $t1
    ctx->r3 = ctx->r3 | ctx->r9;
    // 0x00441CAC: sw          $v1, 0x140($a2)
    MEM_W(0X140, ctx->r6) = ctx->r3;
    // 0x00441CB0: j           L_00408CE0
    // 0x00441CB4: sw          $v0, 0x1C8($a2)
    MEM_W(0X1C8, ctx->r6) = ctx->r2;
    entry_00408CE0(rdram, ctx);
    return;
    // 0x00441CB4: sw          $v0, 0x1C8($a2)
    MEM_W(0X1C8, ctx->r6) = ctx->r2;
L_00441CB8:
    // 0x00441CB8: lw          $v1, 0x1C0($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X1C0);
    // 0x00441CBC: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x00441CC0: bne         $v1, $v0, L_00441CE0
    if (ctx->r3 != ctx->r2) {
        // 0x00441CC4: nop
    
            goto L_00441CE0;
    }
    // 0x00441CC4: nop

    // 0x00441CC8: lw          $v0, 0x140($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X140);
    // 0x00441CCC: sw          $a3, 0x1C8($a2)
    MEM_W(0X1C8, ctx->r6) = ctx->r7;
    // 0x00441CD0: sw          $a3, 0x1C0($a2)
    MEM_W(0X1C0, ctx->r6) = ctx->r7;
    // 0x00441CD4: or          $v0, $v0, $t2
    ctx->r2 = ctx->r2 | ctx->r10;
    // 0x00441CD8: or          $v0, $v0, $t1
    ctx->r2 = ctx->r2 | ctx->r9;
    // 0x00441CDC: sw          $v0, 0x140($a2)
    MEM_W(0X140, ctx->r6) = ctx->r2;
L_00441CE0:
    // 0x00441CE0: lw          $a2, 0x28C($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X28C);
    // 0x00441CE4: bne         $a2, $zero, L_00441C44
    if (ctx->r6 != 0) {
        // 0x00441CE8: nop
    
            goto L_00441C44;
    }
    // 0x00441CE8: nop

L_00441CEC:
    // 0x00441CEC: jr          $ra
    // 0x00441CF0: nop

    return;
    // 0x00441CF0: nop

;}
RECOMP_FUNC void func_0040AE24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0040AE24: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x0040AE28: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x0040AE2C: addiu       $a0, $a0, -0x490
    ctx->r4 = ADD32(ctx->r4, -0X490);
    // 0x0040AE30: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x0040AE34: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x0040AE38: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x0040AE3C: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x0040AE40: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x0040AE44: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0040AE48: sw          $v0, 0x688($a0)
    MEM_W(0X688, ctx->r4) = ctx->r2;
    // 0x0040AE4C: lui         $v1, 0x43
    ctx->r3 = S32(0X43 << 16);
    // 0x0040AE50: lw          $v1, 0x1DE4($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X1DE4);
    // 0x0040AE54: addiu       $v0, $zero, 0x600
    ctx->r2 = ADD32(0, 0X600);
    // 0x0040AE58: sw          $v0, 0x68C($a0)
    MEM_W(0X68C, ctx->r4) = ctx->r2;
    // 0x0040AE5C: sw          $zero, 0x65C($a0)
    MEM_W(0X65C, ctx->r4) = 0;
    // 0x0040AE60: sw          $zero, 0x67C($a0)
    MEM_W(0X67C, ctx->r4) = 0;
    // 0x0040AE64: sw          $v1, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->r3;
    // 0x0040AE68: lw          $v0, 0x65C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X65C);
    // 0x0040AE6C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x0040AE70: lui         $at, 0x43
    ctx->r1 = S32(0X43 << 16);
    // 0x0040AE74: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x0040AE78: lw          $v1, 0x1DFC($at)
    ctx->r3 = MEM_W(ctx->r1, 0X1DFC);
    // 0x0040AE7C: sw          $v1, 0x664($a0)
    MEM_W(0X664, ctx->r4) = ctx->r3;
    // 0x0040AE80: lui         $at, 0x43
    ctx->r1 = S32(0X43 << 16);
    // 0x0040AE84: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x0040AE88: lw          $v1, 0x1DF0($at)
    ctx->r3 = MEM_W(ctx->r1, 0X1DF0);
    // 0x0040AE8C: addiu       $v0, $zero, 0x2800
    ctx->r2 = ADD32(0, 0X2800);
    // 0x0040AE90: sw          $v0, 0x1B8($a0)
    MEM_W(0X1B8, ctx->r4) = ctx->r2;
    // 0x0040AE94: sw          $v0, 0x150($a0)
    MEM_W(0X150, ctx->r4) = ctx->r2;
    // 0x0040AE98: sw          $v0, 0xE8($a0)
    MEM_W(0XE8, ctx->r4) = ctx->r2;
    // 0x0040AE9C: sw          $v0, 0x358($a0)
    MEM_W(0X358, ctx->r4) = ctx->r2;
    // 0x0040AEA0: sw          $v0, 0x2F0($a0)
    MEM_W(0X2F0, ctx->r4) = ctx->r2;
    // 0x0040AEA4: sw          $v0, 0x288($a0)
    MEM_W(0X288, ctx->r4) = ctx->r2;
    // 0x0040AEA8: ori         $v0, $zero, 0xF000
    ctx->r2 = 0 | 0XF000;
    // 0x0040AEAC: sw          $v0, 0x678($a0)
    MEM_W(0X678, ctx->r4) = ctx->r2;
    // 0x0040AEB0: sw          $v0, 0x674($a0)
    MEM_W(0X674, ctx->r4) = ctx->r2;
    // 0x0040AEB4: sw          $v1, 0x660($a0)
    MEM_W(0X660, ctx->r4) = ctx->r3;
    // 0x0040AEB8: lb          $v0, 0x34($a1)
    ctx->r2 = MEM_B(ctx->r5, 0X34);
    // 0x0040AEBC: beq         $v0, $zero, L_0040AF04
    if (ctx->r2 == 0) {
        // 0x0040AEC0: addu        $s2, $v1, $zero
        ctx->r18 = ADD32(ctx->r3, 0);
            goto L_0040AF04;
    }
    // 0x0040AEC0: addu        $s2, $v1, $zero
    ctx->r18 = ADD32(ctx->r3, 0);
    // 0x0040AEC4: addu        $s3, $a0, $zero
    ctx->r19 = ADD32(ctx->r4, 0);
    // 0x0040AEC8: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x0040AECC: addiu       $s1, $zero, 0x18
    ctx->r17 = ADD32(0, 0X18);
L_0040AED0:
    // 0x0040AED0: srav        $v0, $s2, $s0
    ctx->r2 = S32(SIGNED(ctx->r18) >> (ctx->r16 & 31));
    // 0x0040AED4: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x0040AED8: beql        $v0, $zero, L_0040AEF8
    if (ctx->r2 == 0) {
        // 0x0040AEDC: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_0040AEF8;
    }
    goto skip_0;
    // 0x0040AEDC: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    skip_0:
    // 0x0040AEE0: addu        $a0, $s3, $s1
    ctx->r4 = ADD32(ctx->r19, ctx->r17);
    // 0x0040AEE4: lui         $a1, 0x43
    ctx->r5 = S32(0X43 << 16);
    // 0x0040AEE8: addiu       $a1, $a1, 0x1E08
    ctx->r5 = ADD32(ctx->r5, 0X1E08);
    // 0x0040AEEC: jal         0x00236314
    // 0x0040AEF0: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    func_00236314(rdram, ctx);
        goto after_0;
    // 0x0040AEF0: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    after_0:
    // 0x0040AEF4: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_0040AEF8:
    // 0x0040AEF8: slti        $v0, $s0, 0xF
    ctx->r2 = SIGNED(ctx->r16) < 0XF ? 1 : 0;
    // 0x0040AEFC: bne         $v0, $zero, L_0040AED0
    if (ctx->r2 != 0) {
        // 0x0040AF00: addiu       $s1, $s1, 0x68
        ctx->r17 = ADD32(ctx->r17, 0X68);
            goto L_0040AED0;
    }
    // 0x0040AF00: addiu       $s1, $s1, 0x68
    ctx->r17 = ADD32(ctx->r17, 0X68);
L_0040AF04:
    // 0x0040AF04: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x0040AF08: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x0040AF0C: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x0040AF10: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x0040AF14: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0040AF18: jr          $ra
    // 0x0040AF1C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x0040AF1C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_0027874C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0027874C: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x00278750: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x00278754: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x00278758: sdc1        $f22, 0x50($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X50, ctx->r29);
    // 0x0027875C: mtc1        $a1, $f22
    ctx->f22.u32l = ctx->r5;
    // 0x00278760: lui         $t2, 0x800E
    ctx->r10 = S32(0X800E << 16);
    // 0x00278764: addiu       $t2, $t2, -0x71DC
    ctx->r10 = ADD32(ctx->r10, -0X71DC);
    // 0x00278768: sw          $s5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r21;
    // 0x0027876C: addu        $s5, $zero, $zero
    ctx->r21 = ADD32(0, 0);
    // 0x00278770: sdc1        $f20, 0x40($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X40, ctx->r29);
    // 0x00278774: mtc1        $a2, $f20
    ctx->f20.u32l = ctx->r6;
    // 0x00278778: lui         $v1, 0xE700
    ctx->r3 = S32(0XE700 << 16);
    // 0x0027877C: sdc1        $f24, 0x60($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X60, ctx->r29);
    // 0x00278780: mtc1        $a3, $f24
    ctx->f24.u32l = ctx->r7;
    // 0x00278784: lui         $t1, 0x8011
    ctx->r9 = S32(0X8011 << 16);
    // 0x00278788: addiu       $t1, $t1, 0xF0
    ctx->r9 = ADD32(ctx->r9, 0XF0);
    // 0x0027878C: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x00278790: sw          $s6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r22;
    // 0x00278794: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x00278798: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x0027879C: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x002787A0: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x002787A4: sdc1        $f23, 0x58($sp)
    CHECK_FR(ctx, 23);
    SD(ctx->f23.u64, 0X58, ctx->r29);
    // 0x002787A8: sdc1        $f21, 0x48($sp)
    CHECK_FR(ctx, 21);
    SD(ctx->f21.u64, 0X48, ctx->r29);
    // 0x002787AC: lw          $t0, 0x0($t2)
    ctx->r8 = MEM_W(ctx->r10, 0X0);
    // 0x002787B0: lwc1        $f23, 0x78($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X78);
    // 0x002787B4: lw          $a0, 0x7C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X7C);
    // 0x002787B8: lw          $t3, 0x80($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X80);
    // 0x002787BC: lw          $s3, 0x84($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X84);
    // 0x002787C0: addu        $v0, $t0, $zero
    ctx->r2 = ADD32(ctx->r8, 0);
    // 0x002787C4: addiu       $t0, $t0, 0x8
    ctx->r8 = ADD32(ctx->r8, 0X8);
    // 0x002787C8: sw          $t0, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r8;
    // 0x002787CC: sw          $v1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r3;
    // 0x002787D0: beq         $a0, $zero, L_00278890
    if (ctx->r4 == 0) {
        // 0x002787D4: sw          $zero, 0x4($v0)
        MEM_W(0X4, ctx->r2) = 0;
            goto L_00278890;
    }
    // 0x002787D4: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x002787D8: lui         $v1, 0xE6C2
    ctx->r3 = S32(0XE6C2 << 16);
    // 0x002787DC: ori         $v1, $v1, 0xB449
    ctx->r3 = ctx->r3 | 0XB449;
    // 0x002787E0: lui         $a3, 0x939A
    ctx->r7 = S32(0X939A << 16);
    // 0x002787E4: ori         $a3, $a3, 0x85C5
    ctx->r7 = ctx->r7 | 0X85C5;
    // 0x002787E8: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x002787EC: lw          $a0, 0x2030($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X2030);
    // 0x002787F0: lui         $v0, 0xFB00
    ctx->r2 = S32(0XFB00 << 16);
    // 0x002787F4: sw          $v0, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r2;
    // 0x002787F8: andi        $v0, $t3, 0xFF
    ctx->r2 = ctx->r11 & 0XFF;
    // 0x002787FC: sw          $v0, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r2;
    // 0x00278800: mult        $a0, $v1
    result = S64(S32(ctx->r4)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x00278804: lui         $v0, 0xFA00
    ctx->r2 = S32(0XFA00 << 16);
    // 0x00278808: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x0027880C: lw          $a1, 0x2034($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X2034);
    // 0x00278810: addiu       $a2, $t0, 0x8
    ctx->r6 = ADD32(ctx->r8, 0X8);
    // 0x00278814: sw          $v0, 0x8($t0)
    MEM_W(0X8, ctx->r8) = ctx->r2;
    // 0x00278818: mfhi        $v1
    ctx->r3 = hi;
    // 0x0027881C: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x00278820: sw          $v0, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r2;
    // 0x00278824: mult        $a1, $a3
    result = S64(S32(ctx->r5)) * S64(S32(ctx->r7)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x00278828: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x0027882C: sra         $v1, $v1, 8
    ctx->r3 = S32(SIGNED(ctx->r3) >> 8);
    // 0x00278830: sra         $a0, $a0, 31
    ctx->r4 = S32(SIGNED(ctx->r4) >> 31);
    // 0x00278834: subu        $v1, $v1, $a0
    ctx->r3 = SUB32(ctx->r3, ctx->r4);
    // 0x00278838: mfhi        $t3
    ctx->r11 = hi;
    // 0x0027883C: lw          $a0, 0xC0($t1)
    ctx->r4 = MEM_W(ctx->r9, 0XC0);
    // 0x00278840: nop

    // 0x00278844: mult        $a0, $v1
    result = S64(S32(ctx->r4)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x00278848: addu        $v0, $t3, $a1
    ctx->r2 = ADD32(ctx->r11, ctx->r5);
    // 0x0027884C: sra         $v0, $v0, 7
    ctx->r2 = S32(SIGNED(ctx->r2) >> 7);
    // 0x00278850: sra         $a1, $a1, 31
    ctx->r5 = S32(SIGNED(ctx->r5) >> 31);
    // 0x00278854: mflo        $a0
    ctx->r4 = lo;
    // 0x00278858: lw          $v1, 0xC4($t1)
    ctx->r3 = MEM_W(ctx->r9, 0XC4);
    // 0x0027885C: subu        $v0, $v0, $a1
    ctx->r2 = SUB32(ctx->r2, ctx->r5);
    // 0x00278860: mult        $v1, $v0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x00278864: mtc1        $a0, $f0
    ctx->f0.u32l = ctx->r4;
    // 0x00278868: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x0027886C: add.s       $f22, $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f22.fl = ctx->f22.fl + ctx->f0.fl;
    // 0x00278870: sw          $a2, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r6;
    // 0x00278874: addiu       $v0, $t0, 0x10
    ctx->r2 = ADD32(ctx->r8, 0X10);
    // 0x00278878: mflo        $v1
    ctx->r3 = lo;
    // 0x0027887C: sw          $v0, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r2;
    // 0x00278880: mtc1        $v1, $f0
    ctx->f0.u32l = ctx->r3;
    // 0x00278884: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00278888: j           L_00278904
    // 0x0027888C: add.s       $f20, $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = ctx->f20.fl + ctx->f0.fl;
        goto L_00278904;
    // 0x0027888C: add.s       $f20, $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = ctx->f20.fl + ctx->f0.fl;
L_00278890:
    // 0x00278890: addiu       $a2, $t0, 0x8
    ctx->r6 = ADD32(ctx->r8, 0X8);
    // 0x00278894: lui         $v0, 0xFB00
    ctx->r2 = S32(0XFB00 << 16);
    // 0x00278898: sw          $a2, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r6;
    // 0x0027889C: sw          $v0, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r2;
    // 0x002788A0: addiu       $v0, $t0, 0x10
    ctx->r2 = ADD32(ctx->r8, 0X10);
    // 0x002788A4: sw          $v0, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r2;
    // 0x002788A8: lbu         $v0, 0xA3($t1)
    ctx->r2 = MEM_BU(ctx->r9, 0XA3);
    // 0x002788AC: lbu         $a0, 0xA7($t1)
    ctx->r4 = MEM_BU(ctx->r9, 0XA7);
    // 0x002788B0: lbu         $a1, 0xAB($t1)
    ctx->r5 = MEM_BU(ctx->r9, 0XAB);
    // 0x002788B4: lui         $v1, 0xFA00
    ctx->r3 = S32(0XFA00 << 16);
    // 0x002788B8: sw          $v1, 0x8($t0)
    MEM_W(0X8, ctx->r8) = ctx->r3;
    // 0x002788BC: andi        $v1, $t3, 0xFF
    ctx->r3 = ctx->r11 & 0XFF;
    // 0x002788C0: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x002788C4: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x002788C8: or          $v0, $v0, $a0
    ctx->r2 = ctx->r2 | ctx->r4;
    // 0x002788CC: sll         $a1, $a1, 8
    ctx->r5 = S32(ctx->r5 << 8);
    // 0x002788D0: or          $v0, $v0, $a1
    ctx->r2 = ctx->r2 | ctx->r5;
    // 0x002788D4: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x002788D8: sw          $v0, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r2;
    // 0x002788DC: lbu         $v0, 0xAF($t1)
    ctx->r2 = MEM_BU(ctx->r9, 0XAF);
    // 0x002788E0: lbu         $a0, 0xB3($t1)
    ctx->r4 = MEM_BU(ctx->r9, 0XB3);
    // 0x002788E4: lbu         $v1, 0xB7($t1)
    ctx->r3 = MEM_BU(ctx->r9, 0XB7);
    // 0x002788E8: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x002788EC: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x002788F0: or          $v0, $v0, $a0
    ctx->r2 = ctx->r2 | ctx->r4;
    // 0x002788F4: sll         $v1, $v1, 8
    ctx->r3 = S32(ctx->r3 << 8);
    // 0x002788F8: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x002788FC: ori         $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 | 0XFF;
    // 0x00278900: sw          $v0, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r2;
L_00278904:
    // 0x00278904: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00278908: beq         $s3, $v0, L_00278928
    if (ctx->r19 == ctx->r2) {
        // 0x0027890C: slti        $v0, $s3, 0x2
        ctx->r2 = SIGNED(ctx->r19) < 0X2 ? 1 : 0;
            goto L_00278928;
    }
    // 0x0027890C: slti        $v0, $s3, 0x2
    ctx->r2 = SIGNED(ctx->r19) < 0X2 ? 1 : 0;
    // 0x00278910: beq         $v0, $zero, L_00278930
    if (ctx->r2 == 0) {
        // 0x00278914: addiu       $a1, $zero, 0x6
        ctx->r5 = ADD32(0, 0X6);
            goto L_00278930;
    }
    // 0x00278914: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x00278918: beql        $s3, $zero, L_00278930
    if (ctx->r19 == 0) {
        // 0x0027891C: addiu       $a1, $zero, 0x2
        ctx->r5 = ADD32(0, 0X2);
            goto L_00278930;
    }
    goto skip_0;
    // 0x0027891C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    skip_0:
    // 0x00278920: j           L_00278930
    // 0x00278924: nop

        goto L_00278930;
    // 0x00278924: nop

L_00278928:
    // 0x00278928: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x0027892C: addu        $s5, $a1, $zero
    ctx->r21 = ADD32(ctx->r5, 0);
L_00278930:
    // 0x00278930: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x00278934: addiu       $a0, $a0, 0x7078
    ctx->r4 = ADD32(ctx->r4, 0X7078);
    // 0x00278938: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x0027893C: jal         0x00224DF4
    // 0x00278940: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_00224DF4(rdram, ctx);
        goto after_0;
    // 0x00278940: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_0:
    // 0x00278944: addu        $s2, $v0, $zero
    ctx->r18 = ADD32(ctx->r2, 0);
    // 0x00278948: beq         $s2, $zero, L_00278CA0
    if (ctx->r18 == 0) {
        // 0x0027894C: nop
    
            goto L_00278CA0;
    }
    // 0x0027894C: nop

    // 0x00278950: beq         $s1, $zero, L_00278C98
    if (ctx->r17 == 0) {
        // 0x00278954: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_00278C98;
    }
    // 0x00278954: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x00278958: lbu         $a0, 0x0($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0X0);
    // 0x0027895C: beq         $a0, $zero, L_00278C94
    if (ctx->r4 == 0) {
        // 0x00278960: addiu       $s4, $zero, 0x1
        ctx->r20 = ADD32(0, 0X1);
            goto L_00278C94;
    }
    // 0x00278960: addiu       $s4, $zero, 0x1
    ctx->r20 = ADD32(0, 0X1);
    // 0x00278964: trunc.w.s   $f2, $f20
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    ctx->f2.u32l = TRUNC_W_S(ctx->f20.fl);
    // 0x00278968: mfc1        $v0, $f2
    ctx->r2 = (int32_t)ctx->f2.u32l;
    // 0x0027896C: sll         $s6, $v0, 16
    ctx->r22 = S32(ctx->r2 << 16);
    // 0x00278970: andi        $a2, $a0, 0xFF
    ctx->r6 = ctx->r4 & 0XFF;
L_00278974:
    // 0x00278974: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x00278978: beql        $a2, $v0, L_00278C98
    if (ctx->r6 == ctx->r2) {
        // 0x0027897C: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_00278C98;
    }
    goto skip_1;
    // 0x0027897C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    skip_1:
    // 0x00278980: lbu         $a1, 0x1($s1)
    ctx->r5 = MEM_BU(ctx->r17, 0X1);
    // 0x00278984: beq         $s3, $s4, L_00278A30
    if (ctx->r19 == ctx->r20) {
        // 0x00278988: slti        $v0, $s3, 0x2
        ctx->r2 = SIGNED(ctx->r19) < 0X2 ? 1 : 0;
            goto L_00278A30;
    }
    // 0x00278988: slti        $v0, $s3, 0x2
    ctx->r2 = SIGNED(ctx->r19) < 0X2 ? 1 : 0;
    // 0x0027898C: beq         $v0, $zero, L_0027899C
    if (ctx->r2 == 0) {
        // 0x00278990: nop
    
            goto L_0027899C;
    }
    // 0x00278990: nop

    // 0x00278994: beq         $s3, $zero, L_00278AC4
    if (ctx->r19 == 0) {
        // 0x00278998: nop
    
            goto L_00278AC4;
    }
    // 0x00278998: nop

L_0027899C:
    // 0x0027899C: lui         $v1, 0x800F
    ctx->r3 = S32(0X800F << 16);
    // 0x002789A0: lw          $v1, 0x56A8($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X56A8);
    // 0x002789A4: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x002789A8: addu        $at, $at, $a2
    ctx->r1 = ADD32(ctx->r1, ctx->r6);
    // 0x002789AC: lbu         $s0, 0x1B8($at)
    ctx->r16 = MEM_BU(ctx->r1, 0X1B8);
    // 0x002789B0: sltiu       $v0, $v1, 0x6
    ctx->r2 = ctx->r3 < 0X6 ? 1 : 0;
    // 0x002789B4: beq         $v0, $zero, L_00278A20
    if (ctx->r2 == 0) {
        // 0x002789B8: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_00278A20;
    }
    // 0x002789B8: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x002789BC: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x002789C0: addu        $at, $at, $v0
    gpr jr_addend_002789C8 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x002789C4: lw          $v0, -0x7D40($at)
    ctx->r2 = ADD32(ctx->r1, -0X7D40);
    // 0x002789C8: jr          $v0
    // 0x002789CC: nop

    switch (jr_addend_002789C8 >> 2) {
        case 0: goto L_00278A00; break;
        case 1: goto L_002789F0; break;
        case 2: goto L_00278A20; break;
        case 3: goto L_00278A10; break;
        case 4: goto L_002789E0; break;
        case 5: goto L_002789D0; break;
        default: switch_error(__func__, 0x002789C8, 0x800A82C0);
    }
    // 0x002789CC: nop

L_002789D0:
    // 0x002789D0: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x002789D4: lwc1        $f0, -0x7D28($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X7D28);
    // 0x002789D8: j           L_00278BE8
    // 0x002789DC: mov.s       $f21, $f0
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 0);
    ctx->f21.fl = ctx->f0.fl;
        goto L_00278BE8;
    // 0x002789DC: mov.s       $f21, $f0
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 0);
    ctx->f21.fl = ctx->f0.fl;
L_002789E0:
    // 0x002789E0: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x002789E4: lwc1        $f0, -0x7D24($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X7D24);
    // 0x002789E8: j           L_00278BE8
    // 0x002789EC: mov.s       $f21, $f0
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 0);
    ctx->f21.fl = ctx->f0.fl;
        goto L_00278BE8;
    // 0x002789EC: mov.s       $f21, $f0
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 0);
    ctx->f21.fl = ctx->f0.fl;
L_002789F0:
    // 0x002789F0: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x002789F4: lwc1        $f0, -0x7D20($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X7D20);
    // 0x002789F8: j           L_00278BE8
    // 0x002789FC: mov.s       $f21, $f0
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 0);
    ctx->f21.fl = ctx->f0.fl;
        goto L_00278BE8;
    // 0x002789FC: mov.s       $f21, $f0
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 0);
    ctx->f21.fl = ctx->f0.fl;
L_00278A00:
    // 0x00278A00: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00278A04: lwc1        $f0, -0x7D1C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X7D1C);
    // 0x00278A08: j           L_00278BE8
    // 0x00278A0C: mov.s       $f21, $f0
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 0);
    ctx->f21.fl = ctx->f0.fl;
        goto L_00278BE8;
    // 0x00278A0C: mov.s       $f21, $f0
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 0);
    ctx->f21.fl = ctx->f0.fl;
L_00278A10:
    // 0x00278A10: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00278A14: lwc1        $f0, -0x7D18($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X7D18);
    // 0x00278A18: j           L_00278BE8
    // 0x00278A1C: mov.s       $f21, $f0
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 0);
    ctx->f21.fl = ctx->f0.fl;
        goto L_00278BE8;
    // 0x00278A1C: mov.s       $f21, $f0
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 0);
    ctx->f21.fl = ctx->f0.fl;
L_00278A20:
    // 0x00278A20: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00278A24: lwc1        $f0, -0x7D14($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X7D14);
    // 0x00278A28: j           L_00278BE8
    // 0x00278A2C: mov.s       $f21, $f0
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 0);
    ctx->f21.fl = ctx->f0.fl;
        goto L_00278BE8;
    // 0x00278A2C: mov.s       $f21, $f0
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 0);
    ctx->f21.fl = ctx->f0.fl;
L_00278A30:
    // 0x00278A30: lui         $v1, 0x800F
    ctx->r3 = S32(0X800F << 16);
    // 0x00278A34: lw          $v1, 0x56A8($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X56A8);
    // 0x00278A38: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x00278A3C: addu        $at, $at, $a2
    ctx->r1 = ADD32(ctx->r1, ctx->r6);
    // 0x00278A40: lbu         $s0, 0x1B8($at)
    ctx->r16 = MEM_BU(ctx->r1, 0X1B8);
    // 0x00278A44: sltiu       $v0, $v1, 0x6
    ctx->r2 = ctx->r3 < 0X6 ? 1 : 0;
    // 0x00278A48: beq         $v0, $zero, L_00278AB4
    if (ctx->r2 == 0) {
        // 0x00278A4C: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_00278AB4;
    }
    // 0x00278A4C: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x00278A50: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00278A54: addu        $at, $at, $v0
    gpr jr_addend_00278A5C = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x00278A58: lw          $v0, -0x7D10($at)
    ctx->r2 = ADD32(ctx->r1, -0X7D10);
    // 0x00278A5C: jr          $v0
    // 0x00278A60: nop

    switch (jr_addend_00278A5C >> 2) {
        case 0: goto L_00278A94; break;
        case 1: goto L_00278A84; break;
        case 2: goto L_00278AB4; break;
        case 3: goto L_00278AA4; break;
        case 4: goto L_00278A74; break;
        case 5: goto L_00278A64; break;
        default: switch_error(__func__, 0x00278A5C, 0x800A82F0);
    }
    // 0x00278A60: nop

L_00278A64:
    // 0x00278A64: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00278A68: lwc1        $f0, -0x7CF8($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X7CF8);
    // 0x00278A6C: j           L_00278BE8
    // 0x00278A70: mov.s       $f21, $f0
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 0);
    ctx->f21.fl = ctx->f0.fl;
        goto L_00278BE8;
    // 0x00278A70: mov.s       $f21, $f0
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 0);
    ctx->f21.fl = ctx->f0.fl;
L_00278A74:
    // 0x00278A74: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00278A78: lwc1        $f0, -0x7CF4($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X7CF4);
    // 0x00278A7C: j           L_00278BE8
    // 0x00278A80: mov.s       $f21, $f0
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 0);
    ctx->f21.fl = ctx->f0.fl;
        goto L_00278BE8;
    // 0x00278A80: mov.s       $f21, $f0
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 0);
    ctx->f21.fl = ctx->f0.fl;
L_00278A84:
    // 0x00278A84: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00278A88: lwc1        $f0, -0x7CF0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X7CF0);
    // 0x00278A8C: j           L_00278BE8
    // 0x00278A90: mov.s       $f21, $f0
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 0);
    ctx->f21.fl = ctx->f0.fl;
        goto L_00278BE8;
    // 0x00278A90: mov.s       $f21, $f0
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 0);
    ctx->f21.fl = ctx->f0.fl;
L_00278A94:
    // 0x00278A94: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00278A98: lwc1        $f0, -0x7CEC($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X7CEC);
    // 0x00278A9C: j           L_00278BE8
    // 0x00278AA0: mov.s       $f21, $f0
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 0);
    ctx->f21.fl = ctx->f0.fl;
        goto L_00278BE8;
    // 0x00278AA0: mov.s       $f21, $f0
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 0);
    ctx->f21.fl = ctx->f0.fl;
L_00278AA4:
    // 0x00278AA4: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00278AA8: lwc1        $f0, -0x7CE8($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X7CE8);
    // 0x00278AAC: j           L_00278BE8
    // 0x00278AB0: mov.s       $f21, $f0
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 0);
    ctx->f21.fl = ctx->f0.fl;
        goto L_00278BE8;
    // 0x00278AB0: mov.s       $f21, $f0
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 0);
    ctx->f21.fl = ctx->f0.fl;
L_00278AB4:
    // 0x00278AB4: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00278AB8: lwc1        $f0, -0x7CE4($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X7CE4);
    // 0x00278ABC: j           L_00278BE8
    // 0x00278AC0: mov.s       $f21, $f0
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 0);
    ctx->f21.fl = ctx->f0.fl;
        goto L_00278BE8;
    // 0x00278AC0: mov.s       $f21, $f0
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 0);
    ctx->f21.fl = ctx->f0.fl;
L_00278AC4:
    // 0x00278AC4: lui         $v1, 0x800F
    ctx->r3 = S32(0X800F << 16);
    // 0x00278AC8: lw          $v1, 0x56A8($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X56A8);
    // 0x00278ACC: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x00278AD0: addu        $at, $at, $a2
    ctx->r1 = ADD32(ctx->r1, ctx->r6);
    // 0x00278AD4: lbu         $s0, 0x238($at)
    ctx->r16 = MEM_BU(ctx->r1, 0X238);
    // 0x00278AD8: sltiu       $v0, $v1, 0x6
    ctx->r2 = ctx->r3 < 0X6 ? 1 : 0;
    // 0x00278ADC: beq         $v0, $zero, L_00278B48
    if (ctx->r2 == 0) {
        // 0x00278AE0: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_00278B48;
    }
    // 0x00278AE0: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x00278AE4: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00278AE8: addu        $at, $at, $v0
    gpr jr_addend_00278AF0 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x00278AEC: lw          $v0, -0x7CE0($at)
    ctx->r2 = ADD32(ctx->r1, -0X7CE0);
    // 0x00278AF0: jr          $v0
    // 0x00278AF4: nop

    switch (jr_addend_00278AF0 >> 2) {
        case 0: goto L_00278B28; break;
        case 1: goto L_00278B18; break;
        case 2: goto L_00278B48; break;
        case 3: goto L_00278B38; break;
        case 4: goto L_00278B08; break;
        case 5: goto L_00278AF8; break;
        default: switch_error(__func__, 0x00278AF0, 0x800A8320);
    }
    // 0x00278AF4: nop

L_00278AF8:
    // 0x00278AF8: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00278AFC: lwc1        $f0, -0x7CC8($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X7CC8);
    // 0x00278B00: j           L_00278B50
    // 0x00278B04: nop

        goto L_00278B50;
    // 0x00278B04: nop

L_00278B08:
    // 0x00278B08: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00278B0C: lwc1        $f0, -0x7CC4($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X7CC4);
    // 0x00278B10: j           L_00278B50
    // 0x00278B14: nop

        goto L_00278B50;
    // 0x00278B14: nop

L_00278B18:
    // 0x00278B18: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00278B1C: lwc1        $f0, -0x7CC0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X7CC0);
    // 0x00278B20: j           L_00278B50
    // 0x00278B24: nop

        goto L_00278B50;
    // 0x00278B24: nop

L_00278B28:
    // 0x00278B28: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00278B2C: lwc1        $f0, -0x7CBC($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X7CBC);
    // 0x00278B30: j           L_00278B50
    // 0x00278B34: nop

        goto L_00278B50;
    // 0x00278B34: nop

L_00278B38:
    // 0x00278B38: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00278B3C: lwc1        $f0, -0x7CB8($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X7CB8);
    // 0x00278B40: j           L_00278B50
    // 0x00278B44: nop

        goto L_00278B50;
    // 0x00278B44: nop

L_00278B48:
    // 0x00278B48: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00278B4C: lwc1        $f0, -0x7CB4($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X7CB4);
L_00278B50:
    // 0x00278B50: lui         $v1, 0x800F
    ctx->r3 = S32(0X800F << 16);
    // 0x00278B54: lw          $v1, 0x56A8($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X56A8);
    // 0x00278B58: sltiu       $v0, $v1, 0x6
    ctx->r2 = ctx->r3 < 0X6 ? 1 : 0;
    // 0x00278B5C: beq         $v0, $zero, L_00278BCC
    if (ctx->r2 == 0) {
        // 0x00278B60: mov.s       $f1, $f0
        CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    ctx->f1.fl = ctx->f0.fl;
            goto L_00278BCC;
    }
    // 0x00278B60: mov.s       $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    ctx->f1.fl = ctx->f0.fl;
    // 0x00278B64: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x00278B68: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00278B6C: addu        $at, $at, $v0
    gpr jr_addend_00278B74 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x00278B70: lw          $v0, -0x7CB0($at)
    ctx->r2 = ADD32(ctx->r1, -0X7CB0);
    // 0x00278B74: jr          $v0
    // 0x00278B78: nop

    switch (jr_addend_00278B74 >> 2) {
        case 0: goto L_00278BAC; break;
        case 1: goto L_00278B9C; break;
        case 2: goto L_00278BCC; break;
        case 3: goto L_00278BBC; break;
        case 4: goto L_00278B8C; break;
        case 5: goto L_00278B7C; break;
        default: switch_error(__func__, 0x00278B74, 0x800A8350);
    }
    // 0x00278B78: nop

L_00278B7C:
    // 0x00278B7C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00278B80: lwc1        $f0, -0x7C98($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X7C98);
    // 0x00278B84: j           L_00278BD4
    // 0x00278B88: nop

        goto L_00278BD4;
    // 0x00278B88: nop

L_00278B8C:
    // 0x00278B8C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00278B90: lwc1        $f0, -0x7C94($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X7C94);
    // 0x00278B94: j           L_00278BD4
    // 0x00278B98: nop

        goto L_00278BD4;
    // 0x00278B98: nop

L_00278B9C:
    // 0x00278B9C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00278BA0: lwc1        $f0, -0x7C90($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X7C90);
    // 0x00278BA4: j           L_00278BD4
    // 0x00278BA8: nop

        goto L_00278BD4;
    // 0x00278BA8: nop

L_00278BAC:
    // 0x00278BAC: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00278BB0: lwc1        $f0, -0x7C8C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X7C8C);
    // 0x00278BB4: j           L_00278BD4
    // 0x00278BB8: nop

        goto L_00278BD4;
    // 0x00278BB8: nop

L_00278BBC:
    // 0x00278BBC: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00278BC0: lwc1        $f0, -0x7C88($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X7C88);
    // 0x00278BC4: j           L_00278BD4
    // 0x00278BC8: nop

        goto L_00278BD4;
    // 0x00278BC8: nop

L_00278BCC:
    // 0x00278BCC: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00278BD0: lwc1        $f0, -0x7C84($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X7C84);
L_00278BD4:
    // 0x00278BD4: mfc1        $a2, $f1
    ctx->r6 = (int32_t)ctx->f_odd[(1 - 1) * 2];
    // 0x00278BD8: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x00278BDC: jal         0x004162FC
    // 0x00278BE0: nop

    func_004162FC(rdram, ctx);
        goto after_1;
    // 0x00278BE0: nop

    after_1:
    // 0x00278BE4: mov.s       $f21, $f0
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 0);
    ctx->f21.fl = ctx->f0.fl;
L_00278BE8:
    // 0x00278BE8: mov.s       $f20, $f24
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 24);
    ctx->f20.fl = ctx->f24.fl;
    // 0x00278BEC: beq         $s5, $zero, L_00278C44
    if (ctx->r21 == 0) {
        // 0x00278BF0: mov.s       $f0, $f23
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 23);
    ctx->f0.fl = ctx->f23.fl;
            goto L_00278C44;
    }
    // 0x00278BF0: mov.s       $f0, $f23
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 23);
    ctx->f0.fl = ctx->f23.fl;
    // 0x00278BF4: andi        $v1, $s0, 0xFF
    ctx->r3 = ctx->r16 & 0XFF;
    // 0x00278BF8: addiu       $v0, $zero, 0x25
    ctx->r2 = ADD32(0, 0X25);
    // 0x00278BFC: beq         $v1, $v0, L_00278C14
    if (ctx->r3 == ctx->r2) {
        // 0x00278C00: addiu       $v0, $zero, 0x2B
        ctx->r2 = ADD32(0, 0X2B);
            goto L_00278C14;
    }
    // 0x00278C00: addiu       $v0, $zero, 0x2B
    ctx->r2 = ADD32(0, 0X2B);
    // 0x00278C04: beq         $v1, $v0, L_00278C14
    if (ctx->r3 == ctx->r2) {
        // 0x00278C08: addiu       $v0, $zero, 0x3D
        ctx->r2 = ADD32(0, 0X3D);
            goto L_00278C14;
    }
    // 0x00278C08: addiu       $v0, $zero, 0x3D
    ctx->r2 = ADD32(0, 0X3D);
    // 0x00278C0C: bne         $v1, $v0, L_00278C48
    if (ctx->r3 != ctx->r2) {
        // 0x00278C10: andi        $a1, $s0, 0xFF
        ctx->r5 = ctx->r16 & 0XFF;
            goto L_00278C48;
    }
    // 0x00278C10: andi        $a1, $s0, 0xFF
    ctx->r5 = ctx->r16 & 0XFF;
L_00278C14:
    // 0x00278C14: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00278C18: lwc1        $f1, -0x7C80($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, -0X7C80);
    // 0x00278C1C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00278C20: lwc1        $f0, 0x2030($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X2030);
    // 0x00278C24: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00278C28: mul.s       $f20, $f0, $f1
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f20.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00278C2C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00278C30: lwc1        $f1, -0x7C7C($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, -0X7C7C);
    // 0x00278C34: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00278C38: lwc1        $f0, 0x2034($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X2034);
    // 0x00278C3C: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00278C40: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
L_00278C44:
    // 0x00278C44: andi        $a1, $s0, 0xFF
    ctx->r5 = ctx->r16 & 0XFF;
L_00278C48:
    // 0x00278C48: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x00278C4C: beq         $a1, $v0, L_00278C78
    if (ctx->r5 == ctx->r2) {
        // 0x00278C50: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_00278C78;
    }
    // 0x00278C50: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x00278C54: trunc.w.s   $f2, $f22
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 22);
    ctx->f2.u32l = TRUNC_W_S(ctx->f22.fl);
    // 0x00278C58: mfc1        $a2, $f2
    ctx->r6 = (int32_t)ctx->f2.u32l;
    // 0x00278C5C: sll         $a2, $a2, 16
    ctx->r6 = S32(ctx->r6 << 16);
    // 0x00278C60: sra         $a2, $a2, 16
    ctx->r6 = S32(SIGNED(ctx->r6) >> 16);
    // 0x00278C64: sra         $a3, $s6, 16
    ctx->r7 = S32(SIGNED(ctx->r22) >> 16);
    // 0x00278C68: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    // 0x00278C6C: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    // 0x00278C70: jal         0x0027A7A0
    // 0x00278C74: sw          $s4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r20;
    func_0027A7A0(rdram, ctx);
        goto after_2;
    // 0x00278C74: sw          $s4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r20;
    after_2:
L_00278C78:
    // 0x00278C78: mul.s       $f0, $f21, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f21.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f0.fl = MUL_S(ctx->f21.fl, ctx->f20.fl);
    // 0x00278C7C: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x00278C80: beq         $s1, $zero, L_00278C94
    if (ctx->r17 == 0) {
        // 0x00278C84: add.s       $f22, $f22, $f0
        CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f22.fl = ctx->f22.fl + ctx->f0.fl;
            goto L_00278C94;
    }
    // 0x00278C84: add.s       $f22, $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f22.fl = ctx->f22.fl + ctx->f0.fl;
    // 0x00278C88: lbu         $a0, 0x0($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0X0);
    // 0x00278C8C: bne         $a0, $zero, L_00278974
    if (ctx->r4 != 0) {
        // 0x00278C90: andi        $a2, $a0, 0xFF
        ctx->r6 = ctx->r4 & 0XFF;
            goto L_00278974;
    }
    // 0x00278C90: andi        $a2, $a0, 0xFF
    ctx->r6 = ctx->r4 & 0XFF;
L_00278C94:
    // 0x00278C94: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
L_00278C98:
    // 0x00278C98: jal         0x002051F4
    // 0x00278C9C: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    func_002051F4(rdram, ctx);
        goto after_3;
    // 0x00278C9C: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    after_3:
L_00278CA0:
    // 0x00278CA0: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x00278CA4: lw          $s6, 0x38($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X38);
    // 0x00278CA8: lw          $s5, 0x34($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X34);
    // 0x00278CAC: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x00278CB0: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x00278CB4: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x00278CB8: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x00278CBC: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x00278CC0: ldc1        $f24, 0x60($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X60);
    // 0x00278CC4: ldc1        $f23, 0x58($sp)
    CHECK_FR(ctx, 23);
    ctx->f23.u64 = LD(ctx->r29, 0X58);
    // 0x00278CC8: ldc1        $f22, 0x50($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X50);
    // 0x00278CCC: ldc1        $f21, 0x48($sp)
    CHECK_FR(ctx, 21);
    ctx->f21.u64 = LD(ctx->r29, 0X48);
    // 0x00278CD0: ldc1        $f20, 0x40($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X40);
    // 0x00278CD4: jr          $ra
    // 0x00278CD8: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    return;
    // 0x00278CD8: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
;}
RECOMP_FUNC void func_0042B3E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0042B3E4: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x0042B3E8: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x0042B3EC: addu        $s4, $a0, $zero
    ctx->r20 = ADD32(ctx->r4, 0);
    // 0x0042B3F0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0042B3F4: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x0042B3F8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0042B3FC: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x0042B400: sw          $ra, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r31;
    // 0x0042B404: sw          $s7, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r23;
    // 0x0042B408: sw          $s6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r22;
    // 0x0042B40C: sw          $s5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r21;
    // 0x0042B410: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x0042B414: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x0042B418: jal         0x00200B00
    // 0x0042B41C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    func_00200B00(rdram, ctx);
        goto after_0;
    // 0x0042B41C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    after_0:
    // 0x0042B420: beq         $v0, $zero, L_0042B684
    if (ctx->r2 == 0) {
        // 0x0042B424: addiu       $s3, $zero, 0x11A8
        ctx->r19 = ADD32(0, 0X11A8);
            goto L_0042B684;
    }
    // 0x0042B424: addiu       $s3, $zero, 0x11A8
    ctx->r19 = ADD32(0, 0X11A8);
    // 0x0042B428: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x0042B42C: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x0042B430: addu        $s5, $a1, $zero
    ctx->r21 = ADD32(ctx->r5, 0);
    // 0x0042B434: lw          $s0, 0x0($v0)
    ctx->r16 = MEM_W(ctx->r2, 0X0);
    // 0x0042B438: jal         0x002017D4
    // 0x0042B43C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_002017D4(rdram, ctx);
        goto after_1;
    // 0x0042B43C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x0042B440: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0042B444: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x0042B448: jal         0x002017D4
    // 0x0042B44C: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    func_002017D4(rdram, ctx);
        goto after_2;
    // 0x0042B44C: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    after_2:
    // 0x0042B450: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0042B454: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x0042B458: jal         0x002017D4
    // 0x0042B45C: addu        $s2, $v0, $zero
    ctx->r18 = ADD32(ctx->r2, 0);
    func_002017D4(rdram, ctx);
        goto after_3;
    // 0x0042B45C: addu        $s2, $v0, $zero
    ctx->r18 = ADD32(ctx->r2, 0);
    after_3:
    // 0x0042B460: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0042B464: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x0042B468: jal         0x002017D4
    // 0x0042B46C: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    func_002017D4(rdram, ctx);
        goto after_4;
    // 0x0042B46C: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    after_4:
    // 0x0042B470: addiu       $a0, $s4, 0x1180
    ctx->r4 = ADD32(ctx->r20, 0X1180);
    // 0x0042B474: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x0042B478: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x0042B47C: lw          $v1, 0x4($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X4);
    // 0x0042B480: addiu       $s1, $s1, 0x8
    ctx->r17 = ADD32(ctx->r17, 0X8);
    // 0x0042B484: addiu       $s2, $s2, 0x8
    ctx->r18 = ADD32(ctx->r18, 0X8);
    // 0x0042B488: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x0042B48C: sw          $s1, 0x1170($s4)
    MEM_W(0X1170, ctx->r20) = ctx->r17;
    // 0x0042B490: sw          $s2, 0x1178($s4)
    MEM_W(0X1178, ctx->r20) = ctx->r18;
    // 0x0042B494: sw          $v1, 0x1168($s4)
    MEM_W(0X1168, ctx->r20) = ctx->r3;
    // 0x0042B498: lw          $v1, 0x4($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X4);
    // 0x0042B49C: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x0042B4A0: sw          $s0, 0x1174($s4)
    MEM_W(0X1174, ctx->r20) = ctx->r16;
    // 0x0042B4A4: sw          $v0, 0x117C($s4)
    MEM_W(0X117C, ctx->r20) = ctx->r2;
    // 0x0042B4A8: jal         0x00200500
    // 0x0042B4AC: sw          $v1, 0x116C($s4)
    MEM_W(0X116C, ctx->r20) = ctx->r3;
    func_00200500(rdram, ctx);
        goto after_5;
    // 0x0042B4AC: sw          $v1, 0x116C($s4)
    MEM_W(0X116C, ctx->r20) = ctx->r3;
    after_5:
    // 0x0042B4B0: addiu       $a0, $s4, 0x1194
    ctx->r4 = ADD32(ctx->r20, 0X1194);
    // 0x0042B4B4: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x0042B4B8: jal         0x00200500
    // 0x0042B4BC: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    func_00200500(rdram, ctx);
        goto after_6;
    // 0x0042B4BC: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_6:
L_0042B4C0:
    // 0x0042B4C0: addiu       $a0, $s4, 0x1194
    ctx->r4 = ADD32(ctx->r20, 0X1194);
    // 0x0042B4C4: jal         0x00200574
    // 0x0042B4C8: addu        $a1, $s4, $s3
    ctx->r5 = ADD32(ctx->r20, ctx->r19);
    func_00200574(rdram, ctx);
        goto after_7;
    // 0x0042B4C8: addu        $a1, $s4, $s3
    ctx->r5 = ADD32(ctx->r20, ctx->r19);
    after_7:
    // 0x0042B4CC: addiu       $s5, $s5, 0x1
    ctx->r21 = ADD32(ctx->r21, 0X1);
    // 0x0042B4D0: slti        $v0, $s5, 0x30
    ctx->r2 = SIGNED(ctx->r21) < 0X30 ? 1 : 0;
    // 0x0042B4D4: bne         $v0, $zero, L_0042B4C0
    if (ctx->r2 != 0) {
        // 0x0042B4D8: addiu       $s3, $s3, 0x10
        ctx->r19 = ADD32(ctx->r19, 0X10);
            goto L_0042B4C0;
    }
    // 0x0042B4D8: addiu       $s3, $s3, 0x10
    ctx->r19 = ADD32(ctx->r19, 0X10);
    // 0x0042B4DC: lw          $s6, 0x1168($s4)
    ctx->r22 = MEM_W(ctx->r20, 0X1168);
    // 0x0042B4E0: blez        $s6, L_0042B5B0
    if (SIGNED(ctx->r22) <= 0) {
        // 0x0042B4E4: addu        $s3, $zero, $zero
        ctx->r19 = ADD32(0, 0);
            goto L_0042B5B0;
    }
    // 0x0042B4E4: addu        $s3, $zero, $zero
    ctx->r19 = ADD32(0, 0);
    // 0x0042B4E8: addiu       $s7, $zero, 0x1
    ctx->r23 = ADD32(0, 0X1);
    // 0x0042B4EC: addu        $s5, $s3, $zero
    ctx->r21 = ADD32(ctx->r19, 0);
L_0042B4F0:
    // 0x0042B4F0: lw          $v0, 0x1178($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X1178);
    // 0x0042B4F4: addu        $s2, $v0, $s5
    ctx->r18 = ADD32(ctx->r2, ctx->r21);
    // 0x0042B4F8: lbu         $v0, 0xF($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0XF);
    // 0x0042B4FC: beq         $v0, $zero, L_0042B510
    if (ctx->r2 == 0) {
        // 0x0042B500: nop
    
            goto L_0042B510;
    }
    // 0x0042B500: nop

    // 0x0042B504: lbu         $v0, 0xE($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0XE);
    // 0x0042B508: andi        $v0, $v0, 0xFE
    ctx->r2 = ctx->r2 & 0XFE;
    // 0x0042B50C: sb          $v0, 0xE($s2)
    MEM_B(0XE, ctx->r18) = ctx->r2;
L_0042B510:
    // 0x0042B510: lw          $a0, 0x6C($s4)
    ctx->r4 = MEM_W(ctx->r20, 0X6C);
    // 0x0042B514: lbu         $s1, 0x13($s2)
    ctx->r17 = MEM_BU(ctx->r18, 0X13);
    // 0x0042B518: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x0042B51C: addu        $at, $s4, $at
    ctx->r1 = ADD32(ctx->r20, ctx->r1);
    // 0x0042B520: lw          $s0, -0x7058($at)
    ctx->r16 = MEM_W(ctx->r1, -0X7058);
    // 0x0042B524: jal         0x002017D4
    // 0x0042B528: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_002017D4(rdram, ctx);
        goto after_8;
    // 0x0042B528: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_8:
    // 0x0042B52C: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x0042B530: jal         0x002017D4
    // 0x0042B534: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_002017D4(rdram, ctx);
        goto after_9;
    // 0x0042B534: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_9:
    // 0x0042B538: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x0042B53C: jal         0x002017D4
    // 0x0042B540: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_002017D4(rdram, ctx);
        goto after_10;
    // 0x0042B540: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_10:
    // 0x0042B544: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x0042B548: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0042B54C: jal         0x002017D4
    // 0x0042B550: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_002017D4(rdram, ctx);
        goto after_11;
    // 0x0042B550: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_11:
    // 0x0042B554: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0042B558: jal         0x00201818
    // 0x0042B55C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_00201818(rdram, ctx);
        goto after_12;
    // 0x0042B55C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_12:
    // 0x0042B560: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0042B564: jal         0x002017D4
    // 0x0042B568: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_002017D4(rdram, ctx);
        goto after_13;
    // 0x0042B568: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_13:
    // 0x0042B56C: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x0042B570: andi        $v0, $s1, 0x7
    ctx->r2 = ctx->r17 & 0X7;
    // 0x0042B574: bgez        $s1, L_0042B580
    if (SIGNED(ctx->r17) >= 0) {
        // 0x0042B578: sllv        $a0, $s7, $v0
        ctx->r4 = S32(ctx->r23 << (ctx->r2 & 31));
            goto L_0042B580;
    }
    // 0x0042B578: sllv        $a0, $s7, $v0
    ctx->r4 = S32(ctx->r23 << (ctx->r2 & 31));
    // 0x0042B57C: addiu       $s1, $s1, 0x7
    ctx->r17 = ADD32(ctx->r17, 0X7);
L_0042B580:
    // 0x0042B580: sra         $v0, $s1, 3
    ctx->r2 = S32(SIGNED(ctx->r17) >> 3);
    // 0x0042B584: addu        $v0, $v1, $v0
    ctx->r2 = ADD32(ctx->r3, ctx->r2);
    // 0x0042B588: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x0042B58C: and         $v0, $v0, $a0
    ctx->r2 = ctx->r2 & ctx->r4;
    // 0x0042B590: beq         $v0, $zero, L_0042B5A4
    if (ctx->r2 == 0) {
        // 0x0042B594: addiu       $s3, $s3, 0x1
        ctx->r19 = ADD32(ctx->r19, 0X1);
            goto L_0042B5A4;
    }
    // 0x0042B594: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x0042B598: lbu         $v0, 0xE($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0XE);
    // 0x0042B59C: ori         $v0, $v0, 0xF0
    ctx->r2 = ctx->r2 | 0XF0;
    // 0x0042B5A0: sb          $v0, 0xE($s2)
    MEM_B(0XE, ctx->r18) = ctx->r2;
L_0042B5A4:
    // 0x0042B5A4: slt         $v0, $s3, $s6
    ctx->r2 = SIGNED(ctx->r19) < SIGNED(ctx->r22) ? 1 : 0;
    // 0x0042B5A8: bne         $v0, $zero, L_0042B4F0
    if (ctx->r2 != 0) {
        // 0x0042B5AC: addiu       $s5, $s5, 0x14
        ctx->r21 = ADD32(ctx->r21, 0X14);
            goto L_0042B4F0;
    }
    // 0x0042B5AC: addiu       $s5, $s5, 0x14
    ctx->r21 = ADD32(ctx->r21, 0X14);
L_0042B5B0:
    // 0x0042B5B0: lw          $s6, 0x116C($s4)
    ctx->r22 = MEM_W(ctx->r20, 0X116C);
    // 0x0042B5B4: blez        $s6, L_0042B684
    if (SIGNED(ctx->r22) <= 0) {
        // 0x0042B5B8: addu        $s3, $zero, $zero
        ctx->r19 = ADD32(0, 0);
            goto L_0042B684;
    }
    // 0x0042B5B8: addu        $s3, $zero, $zero
    ctx->r19 = ADD32(0, 0);
    // 0x0042B5BC: addiu       $s7, $zero, 0x1
    ctx->r23 = ADD32(0, 0X1);
    // 0x0042B5C0: addu        $s5, $s3, $zero
    ctx->r21 = ADD32(ctx->r19, 0);
L_0042B5C4:
    // 0x0042B5C4: lw          $v0, 0x117C($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X117C);
    // 0x0042B5C8: addu        $s2, $v0, $s5
    ctx->r18 = ADD32(ctx->r2, ctx->r21);
    // 0x0042B5CC: lbu         $v0, 0xF($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0XF);
    // 0x0042B5D0: beq         $v0, $zero, L_0042B5E4
    if (ctx->r2 == 0) {
        // 0x0042B5D4: nop
    
            goto L_0042B5E4;
    }
    // 0x0042B5D4: nop

    // 0x0042B5D8: lbu         $v0, 0xE($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0XE);
    // 0x0042B5DC: andi        $v0, $v0, 0xFE
    ctx->r2 = ctx->r2 & 0XFE;
    // 0x0042B5E0: sb          $v0, 0xE($s2)
    MEM_B(0XE, ctx->r18) = ctx->r2;
L_0042B5E4:
    // 0x0042B5E4: lw          $a0, 0x6C($s4)
    ctx->r4 = MEM_W(ctx->r20, 0X6C);
    // 0x0042B5E8: lbu         $s1, 0x13($s2)
    ctx->r17 = MEM_BU(ctx->r18, 0X13);
    // 0x0042B5EC: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x0042B5F0: addu        $at, $s4, $at
    ctx->r1 = ADD32(ctx->r20, ctx->r1);
    // 0x0042B5F4: lw          $s0, -0x7058($at)
    ctx->r16 = MEM_W(ctx->r1, -0X7058);
    // 0x0042B5F8: jal         0x002017D4
    // 0x0042B5FC: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_002017D4(rdram, ctx);
        goto after_14;
    // 0x0042B5FC: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_14:
    // 0x0042B600: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x0042B604: jal         0x002017D4
    // 0x0042B608: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_002017D4(rdram, ctx);
        goto after_15;
    // 0x0042B608: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_15:
    // 0x0042B60C: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x0042B610: jal         0x002017D4
    // 0x0042B614: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_002017D4(rdram, ctx);
        goto after_16;
    // 0x0042B614: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_16:
    // 0x0042B618: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x0042B61C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0042B620: jal         0x002017D4
    // 0x0042B624: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_002017D4(rdram, ctx);
        goto after_17;
    // 0x0042B624: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_17:
    // 0x0042B628: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0042B62C: jal         0x00201818
    // 0x0042B630: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_00201818(rdram, ctx);
        goto after_18;
    // 0x0042B630: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_18:
    // 0x0042B634: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0042B638: jal         0x002017D4
    // 0x0042B63C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_002017D4(rdram, ctx);
        goto after_19;
    // 0x0042B63C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_19:
    // 0x0042B640: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x0042B644: andi        $v0, $s1, 0x7
    ctx->r2 = ctx->r17 & 0X7;
    // 0x0042B648: bgez        $s1, L_0042B654
    if (SIGNED(ctx->r17) >= 0) {
        // 0x0042B64C: sllv        $a0, $s7, $v0
        ctx->r4 = S32(ctx->r23 << (ctx->r2 & 31));
            goto L_0042B654;
    }
    // 0x0042B64C: sllv        $a0, $s7, $v0
    ctx->r4 = S32(ctx->r23 << (ctx->r2 & 31));
    // 0x0042B650: addiu       $s1, $s1, 0x7
    ctx->r17 = ADD32(ctx->r17, 0X7);
L_0042B654:
    // 0x0042B654: sra         $v0, $s1, 3
    ctx->r2 = S32(SIGNED(ctx->r17) >> 3);
    // 0x0042B658: addu        $v0, $v1, $v0
    ctx->r2 = ADD32(ctx->r3, ctx->r2);
    // 0x0042B65C: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x0042B660: and         $v0, $v0, $a0
    ctx->r2 = ctx->r2 & ctx->r4;
    // 0x0042B664: beq         $v0, $zero, L_0042B678
    if (ctx->r2 == 0) {
        // 0x0042B668: addiu       $s3, $s3, 0x1
        ctx->r19 = ADD32(ctx->r19, 0X1);
            goto L_0042B678;
    }
    // 0x0042B668: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x0042B66C: lbu         $v0, 0xE($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0XE);
    // 0x0042B670: ori         $v0, $v0, 0xF0
    ctx->r2 = ctx->r2 | 0XF0;
    // 0x0042B674: sb          $v0, 0xE($s2)
    MEM_B(0XE, ctx->r18) = ctx->r2;
L_0042B678:
    // 0x0042B678: slt         $v0, $s3, $s6
    ctx->r2 = SIGNED(ctx->r19) < SIGNED(ctx->r22) ? 1 : 0;
    // 0x0042B67C: bne         $v0, $zero, L_0042B5C4
    if (ctx->r2 != 0) {
        // 0x0042B680: addiu       $s5, $s5, 0x14
        ctx->r21 = ADD32(ctx->r21, 0X14);
            goto L_0042B5C4;
    }
    // 0x0042B680: addiu       $s5, $s5, 0x14
    ctx->r21 = ADD32(ctx->r21, 0X14);
L_0042B684:
    // 0x0042B684: lw          $ra, 0x30($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X30);
    // 0x0042B688: lw          $s7, 0x2C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X2C);
    // 0x0042B68C: lw          $s6, 0x28($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X28);
    // 0x0042B690: lw          $s5, 0x24($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X24);
    // 0x0042B694: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x0042B698: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x0042B69C: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x0042B6A0: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x0042B6A4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0042B6A8: jr          $ra
    // 0x0042B6AC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x0042B6AC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_002106C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002106C0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x002106C4: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x002106C8: mtc1        $a1, $f20
    ctx->f20.u32l = ctx->r5;
    // 0x002106CC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x002106D0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x002106D4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x002106D8: jal         0x002982F0
    // 0x002106DC: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    func_002982F0(rdram, ctx);
        goto after_0;
    // 0x002106DC: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    after_0:
    // 0x002106E0: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    // 0x002106E4: jal         0x002974C0
    // 0x002106E8: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    func_002974C0(rdram, ctx);
        goto after_1;
    // 0x002106E8: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    after_1:
    // 0x002106EC: lwc1        $f12, 0x10($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X10);
    // 0x002106F0: mul.s       $f11, $f0, $f12
    CHECK_FR(ctx, 11);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f11.fl = MUL_S(ctx->f0.fl, ctx->f12.fl);
    // 0x002106F4: lwc1        $f8, 0x20($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X20);
    // 0x002106F8: mul.s       $f8, $f20, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f8.fl = MUL_S(ctx->f20.fl, ctx->f8.fl);
    // 0x002106FC: neg.s       $f2, $f20
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); 
    ctx->f2.fl = -ctx->f20.fl;
    // 0x00210700: mul.s       $f10, $f2, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = MUL_S(ctx->f2.fl, ctx->f12.fl);
    // 0x00210704: lwc1        $f6, 0x20($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X20);
    // 0x00210708: mul.s       $f6, $f0, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x0021070C: lwc1        $f4, 0x24($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X24);
    // 0x00210710: mul.s       $f4, $f20, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f4.fl = MUL_S(ctx->f20.fl, ctx->f4.fl);
    // 0x00210714: lwc1        $f3, 0x24($s0)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r16, 0X24);
    // 0x00210718: mul.s       $f3, $f0, $f3
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f3.fl = MUL_S(ctx->f0.fl, ctx->f3.fl);
    // 0x0021071C: lwc1        $f1, 0x28($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X28);
    // 0x00210720: mul.s       $f20, $f20, $f1
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f20.fl = MUL_S(ctx->f20.fl, ctx->f1.fl);
    // 0x00210724: lwc1        $f12, 0x14($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X14);
    // 0x00210728: mul.s       $f9, $f0, $f12
    CHECK_FR(ctx, 9);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f9.fl = MUL_S(ctx->f0.fl, ctx->f12.fl);
    // 0x0021072C: nop

    // 0x00210730: mul.s       $f7, $f2, $f12
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f7.fl = MUL_S(ctx->f2.fl, ctx->f12.fl);
    // 0x00210734: lwc1        $f12, 0x18($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X18);
    // 0x00210738: mul.s       $f5, $f0, $f12
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f5.fl = MUL_S(ctx->f0.fl, ctx->f12.fl);
    // 0x0021073C: nop

    // 0x00210740: mul.s       $f2, $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f12.fl);
    // 0x00210744: nop

    // 0x00210748: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0021074C: add.s       $f11, $f11, $f8
    CHECK_FR(ctx, 11);
    CHECK_FR(ctx, 11);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f11.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f11.fl = ctx->f11.fl + ctx->f8.fl;
    // 0x00210750: add.s       $f10, $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f10.fl + ctx->f6.fl;
    // 0x00210754: add.s       $f9, $f9, $f4
    CHECK_FR(ctx, 9);
    CHECK_FR(ctx, 9);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f9.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f9.fl = ctx->f9.fl + ctx->f4.fl;
    // 0x00210758: add.s       $f7, $f7, $f3
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f7.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f7.fl = ctx->f7.fl + ctx->f3.fl;
    // 0x0021075C: add.s       $f5, $f5, $f20
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f5.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f5.fl = ctx->f5.fl + ctx->f20.fl;
    // 0x00210760: swc1        $f11, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->f_odd[(11 - 1) * 2];
    // 0x00210764: swc1        $f10, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f10.u32l;
    // 0x00210768: add.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f0.fl;
    // 0x0021076C: swc1        $f9, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->f_odd[(9 - 1) * 2];
    // 0x00210770: swc1        $f7, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f_odd[(7 - 1) * 2];
    // 0x00210774: swc1        $f5, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->f_odd[(5 - 1) * 2];
    // 0x00210778: swc1        $f2, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->f2.u32l;
    // 0x0021077C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x00210780: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00210784: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x00210788: jr          $ra
    // 0x0021078C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x0021078C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_00239DB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00239DB0: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x00239DB4: sw          $fp, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r30;
    // 0x00239DB8: lw          $fp, 0x60($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X60);
    // 0x00239DBC: sw          $s5, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r21;
    // 0x00239DC0: addu        $s5, $a0, $zero
    ctx->r21 = ADD32(ctx->r4, 0);
    // 0x00239DC4: sw          $s4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r20;
    // 0x00239DC8: addu        $s4, $a1, $zero
    ctx->r20 = ADD32(ctx->r5, 0);
    // 0x00239DCC: sw          $s6, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r22;
    // 0x00239DD0: addu        $s6, $a2, $zero
    ctx->r22 = ADD32(ctx->r6, 0);
    // 0x00239DD4: sw          $s7, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r23;
    // 0x00239DD8: addu        $s7, $a3, $zero
    ctx->r23 = ADD32(ctx->r7, 0);
    // 0x00239DDC: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x00239DE0: sw          $s3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r19;
    // 0x00239DE4: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x00239DE8: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x00239DEC: beq         $s4, $s7, L_00239ECC
    if (ctx->r20 == ctx->r23) {
        // 0x00239DF0: sw          $s0, 0x28($sp)
        MEM_W(0X28, ctx->r29) = ctx->r16;
            goto L_00239ECC;
    }
    // 0x00239DF0: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x00239DF4: beq         $s4, $fp, L_00239ED0
    if (ctx->r20 == ctx->r30) {
        // 0x00239DF8: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_00239ED0;
    }
    // 0x00239DF8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00239DFC: lw          $a0, 0x0($s5)
    ctx->r4 = MEM_W(ctx->r21, 0X0);
    // 0x00239E00: jal         0x00268460
    // 0x00239E04: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    func_00268460(rdram, ctx);
        goto after_0;
    // 0x00239E04: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    after_0:
    // 0x00239E08: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00239E0C: lwc1        $f1, 0x6604($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X6604);
    // 0x00239E10: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00239E14: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x00239E18: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x00239E1C: jal         0x0023CE94
    // 0x00239E20: addu        $a1, $s6, $zero
    ctx->r5 = ADD32(ctx->r22, 0);
    func_0023CE94(rdram, ctx);
        goto after_1;
    // 0x00239E20: addu        $a1, $s6, $zero
    ctx->r5 = ADD32(ctx->r22, 0);
    after_1:
    // 0x00239E24: addu        $s2, $s4, $zero
    ctx->r18 = ADD32(ctx->r20, 0);
L_00239E28:
    // 0x00239E28: lw          $v0, 0x10($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X10);
    // 0x00239E2C: beql        $v0, $s7, L_00239EC0
    if (ctx->r2 == ctx->r23) {
        // 0x00239E30: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_00239EC0;
    }
    goto skip_0;
    // 0x00239E30: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_0:
    // 0x00239E34: beql        $v0, $fp, L_00239EC0
    if (ctx->r2 == ctx->r30) {
        // 0x00239E38: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_00239EC0;
    }
    goto skip_1;
    // 0x00239E38: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_1:
    // 0x00239E3C: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    // 0x00239E40: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    // 0x00239E44: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    // 0x00239E48: jal         0x0023B664
    // 0x00239E4C: addu        $a3, $s6, $zero
    ctx->r7 = ADD32(ctx->r22, 0);
    func_0023B664(rdram, ctx);
        goto after_2;
    // 0x00239E4C: addu        $a3, $s6, $zero
    ctx->r7 = ADD32(ctx->r22, 0);
    after_2:
    // 0x00239E50: bnel        $v0, $zero, L_00239EC0
    if (ctx->r2 != 0) {
        // 0x00239E54: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_00239EC0;
    }
    goto skip_2;
    // 0x00239E54: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_2:
    // 0x00239E58: lw          $s3, 0x4($s2)
    ctx->r19 = MEM_W(ctx->r18, 0X4);
    // 0x00239E5C: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
    // 0x00239E60: beq         $s1, $v1, L_00239E70
    if (ctx->r17 == ctx->r3) {
        // 0x00239E64: addiu       $v0, $s1, 0x1
        ctx->r2 = ADD32(ctx->r17, 0X1);
            goto L_00239E70;
    }
    // 0x00239E64: addiu       $v0, $s1, 0x1
    ctx->r2 = ADD32(ctx->r17, 0X1);
    // 0x00239E68: j           L_00239E74
    // 0x00239E6C: sllv        $v0, $v0, $v1
    ctx->r2 = S32(ctx->r2 << (ctx->r3 & 31));
        goto L_00239E74;
    // 0x00239E6C: sllv        $v0, $v0, $v1
    ctx->r2 = S32(ctx->r2 << (ctx->r3 & 31));
L_00239E70:
    // 0x00239E70: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_00239E74:
    // 0x00239E74: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x00239E78: addu        $v0, $s4, $v0
    ctx->r2 = ADD32(ctx->r20, ctx->r2);
    // 0x00239E7C: lw          $s0, 0x4($v0)
    ctx->r16 = MEM_W(ctx->r2, 0X4);
    // 0x00239E80: jal         0x0023CEC0
    // 0x00239E84: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    func_0023CEC0(rdram, ctx);
        goto after_3;
    // 0x00239E84: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    after_3:
    // 0x00239E88: bne         $v0, $zero, L_00239ED0
    if (ctx->r2 != 0) {
        // 0x00239E8C: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_00239ED0;
    }
    // 0x00239E8C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x00239E90: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x00239E94: jal         0x0023CEC0
    // 0x00239E98: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_0023CEC0(rdram, ctx);
        goto after_4;
    // 0x00239E98: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_4:
    // 0x00239E9C: beq         $v0, $zero, L_00239EAC
    if (ctx->r2 == 0) {
        // 0x00239EA0: addiu       $a0, $sp, 0x10
        ctx->r4 = ADD32(ctx->r29, 0X10);
            goto L_00239EAC;
    }
    // 0x00239EA0: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
L_00239EA4:
    // 0x00239EA4: j           L_00239ED0
    // 0x00239EA8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
        goto L_00239ED0;
    // 0x00239EA8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_00239EAC:
    // 0x00239EAC: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    // 0x00239EB0: jal         0x0023CF04
    // 0x00239EB4: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    func_0023CF04(rdram, ctx);
        goto after_5;
    // 0x00239EB4: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    after_5:
    // 0x00239EB8: bne         $v0, $zero, L_00239EA4
    if (ctx->r2 != 0) {
        // 0x00239EBC: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_00239EA4;
    }
    // 0x00239EBC: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_00239EC0:
    // 0x00239EC0: slti        $v0, $s1, 0x3
    ctx->r2 = SIGNED(ctx->r17) < 0X3 ? 1 : 0;
    // 0x00239EC4: bne         $v0, $zero, L_00239E28
    if (ctx->r2 != 0) {
        // 0x00239EC8: addiu       $s2, $s2, 0x4
        ctx->r18 = ADD32(ctx->r18, 0X4);
            goto L_00239E28;
    }
    // 0x00239EC8: addiu       $s2, $s2, 0x4
    ctx->r18 = ADD32(ctx->r18, 0X4);
L_00239ECC:
    // 0x00239ECC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_00239ED0:
    // 0x00239ED0: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x00239ED4: lw          $fp, 0x48($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X48);
    // 0x00239ED8: lw          $s7, 0x44($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X44);
    // 0x00239EDC: lw          $s6, 0x40($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X40);
    // 0x00239EE0: lw          $s5, 0x3C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X3C);
    // 0x00239EE4: lw          $s4, 0x38($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X38);
    // 0x00239EE8: lw          $s3, 0x34($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X34);
    // 0x00239EEC: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x00239EF0: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x00239EF4: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x00239EF8: jr          $ra
    // 0x00239EFC: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x00239EFC: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_0041AEF0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041AEF0: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x0041AEF4: lui         $t1, 0x800C
    ctx->r9 = S32(0X800C << 16);
    // 0x0041AEF8: addiu       $t1, $t1, 0x1280
    ctx->r9 = ADD32(ctx->r9, 0X1280);
    // 0x0041AEFC: lui         $t0, 0x8012
    ctx->r8 = S32(0X8012 << 16);
    // 0x0041AF00: addiu       $t0, $t0, -0x5524
    ctx->r8 = ADD32(ctx->r8, -0X5524);
L_0041AF04:
    // 0x0041AF04: bne         $a2, $zero, L_0041AF30
    if (ctx->r6 != 0) {
        // 0x0041AF08: sltiu       $v0, $a0, 0xB
        ctx->r2 = ctx->r4 < 0XB ? 1 : 0;
            goto L_0041AF30;
    }
    // 0x0041AF08: sltiu       $v0, $a0, 0xB
    ctx->r2 = ctx->r4 < 0XB ? 1 : 0;
    // 0x0041AF0C: addu        $a0, $a0, $a1
    ctx->r4 = ADD32(ctx->r4, ctx->r5);
    // 0x0041AF10: slti        $v0, $a0, 0xB
    ctx->r2 = SIGNED(ctx->r4) < 0XB ? 1 : 0;
    // 0x0041AF14: bne         $v0, $zero, L_0041AF24
    if (ctx->r2 != 0) {
        // 0x0041AF18: nop
    
            goto L_0041AF24;
    }
    // 0x0041AF18: nop

    // 0x0041AF1C: j           L_0041AF2C
    // 0x0041AF20: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
        goto L_0041AF2C;
    // 0x0041AF20: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
L_0041AF24:
    // 0x0041AF24: bltzl       $a0, L_0041AF2C
    if (SIGNED(ctx->r4) < 0) {
        // 0x0041AF28: addiu       $a0, $zero, 0xA
        ctx->r4 = ADD32(0, 0XA);
            goto L_0041AF2C;
    }
    goto skip_0;
    // 0x0041AF28: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    skip_0:
L_0041AF2C:
    // 0x0041AF2C: sltiu       $v0, $a0, 0xB
    ctx->r2 = ctx->r4 < 0XB ? 1 : 0;
L_0041AF30:
    // 0x0041AF30: beq         $v0, $zero, L_0041AF48
    if (ctx->r2 == 0) {
        // 0x0041AF34: sll         $v0, $a0, 2
        ctx->r2 = S32(ctx->r4 << 2);
            goto L_0041AF48;
    }
    // 0x0041AF34: sll         $v0, $a0, 2
    ctx->r2 = S32(ctx->r4 << 2);
    // 0x0041AF38: addu        $v0, $v0, $t1
    gpr jr_addend_0041AF40 = ctx->r2;
    ctx->r2 = ADD32(ctx->r2, ctx->r9);
    // 0x0041AF3C: lw          $v0, 0x0($v0)
    ctx->r2 = ADD32(ctx->r2, 0X0);
    // 0x0041AF40: jr          $v0
    // 0x0041AF44: nop

    switch (jr_addend_0041AF40 >> 2) {
        case 0: goto L_0041AF48; break;
        case 1: goto L_0041AF50; break;
        case 2: goto L_0041AF58; break;
        case 3: goto L_0041AF60; break;
        case 4: goto L_0041AF68; break;
        case 5: goto L_0041AF70; break;
        case 6: goto L_0041AF78; break;
        case 7: goto L_0041AF80; break;
        case 8: goto L_0041AF88; break;
        case 9: goto L_0041AF90; break;
        case 10: goto L_0041AF98; break;
        default: switch_error(__func__, 0x0041AF40, 0x800C1280);
    }
    // 0x0041AF44: nop

L_0041AF48:
    // 0x0041AF48: j           L_0041AF9C
    // 0x0041AF4C: lui         $v1, 0x1
    ctx->r3 = S32(0X1 << 16);
        goto L_0041AF9C;
    // 0x0041AF4C: lui         $v1, 0x1
    ctx->r3 = S32(0X1 << 16);
L_0041AF50:
    // 0x0041AF50: j           L_0041AF9C
    // 0x0041AF54: lui         $v1, 0x2
    ctx->r3 = S32(0X2 << 16);
        goto L_0041AF9C;
    // 0x0041AF54: lui         $v1, 0x2
    ctx->r3 = S32(0X2 << 16);
L_0041AF58:
    // 0x0041AF58: j           L_0041AF9C
    // 0x0041AF5C: lui         $v1, 0x4
    ctx->r3 = S32(0X4 << 16);
        goto L_0041AF9C;
    // 0x0041AF5C: lui         $v1, 0x4
    ctx->r3 = S32(0X4 << 16);
L_0041AF60:
    // 0x0041AF60: j           L_0041AF9C
    // 0x0041AF64: lui         $v1, 0x8
    ctx->r3 = S32(0X8 << 16);
        goto L_0041AF9C;
    // 0x0041AF64: lui         $v1, 0x8
    ctx->r3 = S32(0X8 << 16);
L_0041AF68:
    // 0x0041AF68: j           L_0041AF9C
    // 0x0041AF6C: lui         $v1, 0x10
    ctx->r3 = S32(0X10 << 16);
        goto L_0041AF9C;
    // 0x0041AF6C: lui         $v1, 0x10
    ctx->r3 = S32(0X10 << 16);
L_0041AF70:
    // 0x0041AF70: j           L_0041AF9C
    // 0x0041AF74: lui         $v1, 0x20
    ctx->r3 = S32(0X20 << 16);
        goto L_0041AF9C;
    // 0x0041AF74: lui         $v1, 0x20
    ctx->r3 = S32(0X20 << 16);
L_0041AF78:
    // 0x0041AF78: j           L_0041AF9C
    // 0x0041AF7C: lui         $v1, 0x80
    ctx->r3 = S32(0X80 << 16);
        goto L_0041AF9C;
    // 0x0041AF7C: lui         $v1, 0x80
    ctx->r3 = S32(0X80 << 16);
L_0041AF80:
    // 0x0041AF80: j           L_0041AF9C
    // 0x0041AF84: lui         $v1, 0x40
    ctx->r3 = S32(0X40 << 16);
        goto L_0041AF9C;
    // 0x0041AF84: lui         $v1, 0x40
    ctx->r3 = S32(0X40 << 16);
L_0041AF88:
    // 0x0041AF88: j           L_0041AF9C
    // 0x0041AF8C: lui         $v1, 0x100
    ctx->r3 = S32(0X100 << 16);
        goto L_0041AF9C;
    // 0x0041AF8C: lui         $v1, 0x100
    ctx->r3 = S32(0X100 << 16);
L_0041AF90:
    // 0x0041AF90: j           L_0041AF9C
    // 0x0041AF94: lui         $v1, 0x200
    ctx->r3 = S32(0X200 << 16);
        goto L_0041AF9C;
    // 0x0041AF94: lui         $v1, 0x200
    ctx->r3 = S32(0X200 << 16);
L_0041AF98:
    // 0x0041AF98: lui         $v1, 0x400
    ctx->r3 = S32(0X400 << 16);
L_0041AF9C:
    // 0x0041AF9C: lw          $v0, 0x0($t0)
    ctx->r2 = MEM_W(ctx->r8, 0X0);
    // 0x0041AFA0: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x0041AFA4: bne         $v0, $zero, L_0041AFE4
    if (ctx->r2 != 0) {
        // 0x0041AFA8: addu        $v0, $a0, $zero
        ctx->r2 = ADD32(ctx->r4, 0);
            goto L_0041AFE4;
    }
    // 0x0041AFA8: addu        $v0, $a0, $zero
    ctx->r2 = ADD32(ctx->r4, 0);
    // 0x0041AFAC: beql        $a2, $zero, L_0041AFD8
    if (ctx->r6 == 0) {
        // 0x0041AFB0: addiu       $a3, $a3, 0x1
        ctx->r7 = ADD32(ctx->r7, 0X1);
            goto L_0041AFD8;
    }
    goto skip_1;
    // 0x0041AFB0: addiu       $a3, $a3, 0x1
    ctx->r7 = ADD32(ctx->r7, 0X1);
    skip_1:
    // 0x0041AFB4: addu        $a0, $a0, $a1
    ctx->r4 = ADD32(ctx->r4, ctx->r5);
    // 0x0041AFB8: slti        $v0, $a0, 0xB
    ctx->r2 = SIGNED(ctx->r4) < 0XB ? 1 : 0;
    // 0x0041AFBC: bne         $v0, $zero, L_0041AFCC
    if (ctx->r2 != 0) {
        // 0x0041AFC0: nop
    
            goto L_0041AFCC;
    }
    // 0x0041AFC0: nop

    // 0x0041AFC4: j           L_0041AFD4
    // 0x0041AFC8: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
        goto L_0041AFD4;
    // 0x0041AFC8: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
L_0041AFCC:
    // 0x0041AFCC: bltzl       $a0, L_0041AFD4
    if (SIGNED(ctx->r4) < 0) {
        // 0x0041AFD0: addiu       $a0, $zero, 0xA
        ctx->r4 = ADD32(0, 0XA);
            goto L_0041AFD4;
    }
    goto skip_2;
    // 0x0041AFD0: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    skip_2:
L_0041AFD4:
    // 0x0041AFD4: addiu       $a3, $a3, 0x1
    ctx->r7 = ADD32(ctx->r7, 0X1);
L_0041AFD8:
    // 0x0041AFD8: slti        $v0, $a3, 0xB
    ctx->r2 = SIGNED(ctx->r7) < 0XB ? 1 : 0;
    // 0x0041AFDC: bne         $v0, $zero, L_0041AF04
    if (ctx->r2 != 0) {
        // 0x0041AFE0: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_0041AF04;
    }
    // 0x0041AFE0: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_0041AFE4:
    // 0x0041AFE4: jr          $ra
    // 0x0041AFE8: nop

    return;
    // 0x0041AFE8: nop

;}
RECOMP_FUNC void func_00455924(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00455924: lw          $v0, 0x1C($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X1C);
    // 0x00455928: lw          $v1, 0x518($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X518);
    // 0x0045592C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00455930: sb          $v0, 0x3D($v1)
    MEM_B(0X3D, ctx->r3) = ctx->r2;
    // 0x00455934: jr          $ra
    // 0x00455938: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x00455938: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
;}
RECOMP_FUNC void func_00285CC4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00285CC4: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00285CC8: sw          $zero, 0x6CF8($at)
    MEM_W(0X6CF8, ctx->r1) = 0;
    // 0x00285CCC: jr          $ra
    // 0x00285CD0: nop

    return;
    // 0x00285CD0: nop

;}
RECOMP_FUNC void func_00465FC0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00465FC0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00465FC4: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x00465FC8: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x00465FCC: addiu       $a0, $s2, 0x5300
    ctx->r4 = ADD32(ctx->r18, 0X5300);
    // 0x00465FD0: addiu       $a1, $zero, 0x288
    ctx->r5 = ADD32(0, 0X288);
    // 0x00465FD4: addiu       $a2, $zero, 0x28C
    ctx->r6 = ADD32(0, 0X28C);
    // 0x00465FD8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x00465FDC: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00465FE0: jal         0x00200500
    // 0x00465FE4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    func_00200500(rdram, ctx);
        goto after_0;
    // 0x00465FE4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_0:
    // 0x00465FE8: addiu       $a0, $s2, 0x5314
    ctx->r4 = ADD32(ctx->r18, 0X5314);
    // 0x00465FEC: addiu       $a1, $zero, 0x288
    ctx->r5 = ADD32(0, 0X288);
    // 0x00465FF0: jal         0x00200500
    // 0x00465FF4: addiu       $a2, $zero, 0x28C
    ctx->r6 = ADD32(0, 0X28C);
    func_00200500(rdram, ctx);
        goto after_1;
    // 0x00465FF4: addiu       $a2, $zero, 0x28C
    ctx->r6 = ADD32(0, 0X28C);
    after_1:
    // 0x00465FF8: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x00465FFC: addu        $s0, $s2, $zero
    ctx->r16 = ADD32(ctx->r18, 0);
L_00466000:
    // 0x00466000: addiu       $a0, $s2, 0x5300
    ctx->r4 = ADD32(ctx->r18, 0X5300);
    // 0x00466004: jal         0x00200574
    // 0x00466008: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_00200574(rdram, ctx);
        goto after_2;
    // 0x00466008: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_2:
    // 0x0046600C: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x00466010: slti        $v0, $s1, 0x20
    ctx->r2 = SIGNED(ctx->r17) < 0X20 ? 1 : 0;
    // 0x00466014: bne         $v0, $zero, L_00466000
    if (ctx->r2 != 0) {
        // 0x00466018: addiu       $s0, $s0, 0x298
        ctx->r16 = ADD32(ctx->r16, 0X298);
            goto L_00466000;
    }
    // 0x00466018: addiu       $s0, $s0, 0x298
    ctx->r16 = ADD32(ctx->r16, 0X298);
    // 0x0046601C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x00466020: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x00466024: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00466028: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0046602C: jr          $ra
    // 0x00466030: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00466030: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_0044FB28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0044FB28: jr          $ra
    // 0x0044FB2C: addiu       $v0, $a0, -0x53C
    ctx->r2 = ADD32(ctx->r4, -0X53C);
    return;
    // 0x0044FB2C: addiu       $v0, $a0, -0x53C
    ctx->r2 = ADD32(ctx->r4, -0X53C);
;}
RECOMP_FUNC void func_002031E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002031E8: lui         $v0, 0x800E
    ctx->r2 = S32(0X800E << 16);
    // 0x002031EC: lw          $v0, -0x7254($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X7254);
    // 0x002031F0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x002031F4: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x002031F8: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x002031FC: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x00203200: bne         $v0, $zero, L_00203210
    if (ctx->r2 != 0) {
        // 0x00203204: sw          $s0, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r16;
            goto L_00203210;
    }
    // 0x00203204: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00203208: j           L_0020327C
    // 0x0020320C: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
        goto L_0020327C;
    // 0x0020320C: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
L_00203210:
    // 0x00203210: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x00203214: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x00203218: sw          $v0, -0x7254($at)
    MEM_W(-0X7254, ctx->r1) = ctx->r2;
    // 0x0020321C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x00203220: lui         $v1, 0x800E
    ctx->r3 = S32(0X800E << 16);
    // 0x00203224: lw          $v1, -0x7E2C($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X7E2C);
    // 0x00203228: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x0020322C: addiu       $a0, $a0, -0x7E20
    ctx->r4 = ADD32(ctx->r4, -0X7E20);
    // 0x00203230: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x00203234: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x00203238: addiu       $v1, $zero, 0x800
    ctx->r3 = ADD32(0, 0X800);
    // 0x0020323C: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x00203240: sw          $v1, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r3;
    // 0x00203244: sw          $zero, 0x8($v0)
    MEM_W(0X8, ctx->r2) = 0;
    // 0x00203248: sw          $zero, 0x0($v0)
    MEM_W(0X0, ctx->r2) = 0;
    // 0x0020324C: sw          $zero, 0x24($v0)
    MEM_W(0X24, ctx->r2) = 0;
    // 0x00203250: sw          $zero, 0x20($v0)
    MEM_W(0X20, ctx->r2) = 0;
    // 0x00203254: sw          $zero, 0x14($v0)
    MEM_W(0X14, ctx->r2) = 0;
    // 0x00203258: lui         $v1, 0x800E
    ctx->r3 = S32(0X800E << 16);
    // 0x0020325C: lw          $v1, -0x7210($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X7210);
    // 0x00203260: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x00203264: jal         0x00200518
    // 0x00203268: sw          $v1, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r3;
    func_00200518(rdram, ctx);
        goto after_0;
    // 0x00203268: sw          $v1, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r3;
    after_0:
    // 0x0020326C: lw          $v0, 0xC($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC);
    // 0x00203270: andi        $v1, $s1, 0xC
    ctx->r3 = ctx->r17 & 0XC;
    // 0x00203274: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x00203278: sw          $v0, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r2;
L_0020327C:
    // 0x0020327C: bne         $s0, $zero, L_0020331C
    if (ctx->r16 != 0) {
        // 0x00203280: addu        $v0, $s0, $zero
        ctx->r2 = ADD32(ctx->r16, 0);
            goto L_0020331C;
    }
    // 0x00203280: addu        $v0, $s0, $zero
    ctx->r2 = ADD32(ctx->r16, 0);
    // 0x00203284: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x00203288: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x0020328C: andi        $a2, $s1, 0x10
    ctx->r6 = ctx->r17 & 0X10;
    // 0x00203290: jal         0x00203068
    // 0x00203294: sltiu       $a2, $a2, 0x1
    ctx->r6 = ctx->r6 < 0X1 ? 1 : 0;
    func_00203068(rdram, ctx);
        goto after_1;
    // 0x00203294: sltiu       $a2, $a2, 0x1
    ctx->r6 = ctx->r6 < 0X1 ? 1 : 0;
    after_1:
    // 0x00203298: beq         $v0, $zero, L_0020331C
    if (ctx->r2 == 0) {
        // 0x0020329C: addu        $v0, $s0, $zero
        ctx->r2 = ADD32(ctx->r16, 0);
            goto L_0020331C;
    }
    // 0x0020329C: addu        $v0, $s0, $zero
    ctx->r2 = ADD32(ctx->r16, 0);
    // 0x002032A0: lui         $v0, 0x800E
    ctx->r2 = S32(0X800E << 16);
    // 0x002032A4: lw          $v0, -0x7254($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X7254);
    // 0x002032A8: beq         $v0, $zero, L_00203318
    if (ctx->r2 == 0) {
        // 0x002032AC: addiu       $v0, $v0, -0x1
        ctx->r2 = ADD32(ctx->r2, -0X1);
            goto L_00203318;
    }
    // 0x002032AC: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x002032B0: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x002032B4: sw          $v0, -0x7254($at)
    MEM_W(-0X7254, ctx->r1) = ctx->r2;
    // 0x002032B8: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x002032BC: lui         $v1, 0x800E
    ctx->r3 = S32(0X800E << 16);
    // 0x002032C0: lw          $v1, -0x7E2C($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X7E2C);
    // 0x002032C4: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x002032C8: addiu       $a0, $a0, -0x7E20
    ctx->r4 = ADD32(ctx->r4, -0X7E20);
    // 0x002032CC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x002032D0: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x002032D4: addiu       $v1, $zero, 0x800
    ctx->r3 = ADD32(0, 0X800);
    // 0x002032D8: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x002032DC: sw          $v1, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r3;
    // 0x002032E0: sw          $zero, 0x8($v0)
    MEM_W(0X8, ctx->r2) = 0;
    // 0x002032E4: sw          $zero, 0x0($v0)
    MEM_W(0X0, ctx->r2) = 0;
    // 0x002032E8: sw          $zero, 0x24($v0)
    MEM_W(0X24, ctx->r2) = 0;
    // 0x002032EC: sw          $zero, 0x20($v0)
    MEM_W(0X20, ctx->r2) = 0;
    // 0x002032F0: sw          $zero, 0x14($v0)
    MEM_W(0X14, ctx->r2) = 0;
    // 0x002032F4: lui         $v1, 0x800E
    ctx->r3 = S32(0X800E << 16);
    // 0x002032F8: lw          $v1, -0x7210($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X7210);
    // 0x002032FC: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x00203300: jal         0x00200518
    // 0x00203304: sw          $v1, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r3;
    func_00200518(rdram, ctx);
        goto after_2;
    // 0x00203304: sw          $v1, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r3;
    after_2:
    // 0x00203308: lw          $v0, 0xC($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC);
    // 0x0020330C: andi        $v1, $s1, 0xC
    ctx->r3 = ctx->r17 & 0XC;
    // 0x00203310: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x00203314: sw          $v0, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r2;
L_00203318:
    // 0x00203318: addu        $v0, $s0, $zero
    ctx->r2 = ADD32(ctx->r16, 0);
L_0020331C:
    // 0x0020331C: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x00203320: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00203324: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00203328: jr          $ra
    // 0x0020332C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x0020332C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_00215868(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00215868: lw          $v0, 0x14($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X14);
    // 0x0021586C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00215870: lwc1        $f0, 0x6D28($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6D28);
    // 0x00215874: lwc1        $f1, 0x20($v0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r2, 0X20);
    // 0x00215878: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0021587C: jr          $ra
    // 0x00215880: swc1        $f0, 0x174($a0)
    MEM_W(0X174, ctx->r4) = ctx->f0.u32l;
    return;
    // 0x00215880: swc1        $f0, 0x174($a0)
    MEM_W(0X174, ctx->r4) = ctx->f0.u32l;
;}
RECOMP_FUNC void func_00232CD8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00232CD8: lw          $v0, 0x38($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X38);
    // 0x00232CDC: lb          $v1, 0x8($v0)
    ctx->r3 = MEM_B(ctx->r2, 0X8);
    // 0x00232CE0: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x00232CE4: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x00232CE8: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x00232CEC: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x00232CF0: lui         $at, 0x1
    ctx->r1 = S32(0X1 << 16);
    // 0x00232CF4: addu        $at, $v0, $at
    ctx->r1 = ADD32(ctx->r2, ctx->r1);
    // 0x00232CF8: lw          $v1, -0x13D8($at)
    ctx->r3 = MEM_W(ctx->r1, -0X13D8);
    // 0x00232CFC: beq         $a2, $zero, L_00232D40
    if (ctx->r6 == 0) {
        // 0x00232D00: nop
    
            goto L_00232D40;
    }
    // 0x00232D00: nop

    // 0x00232D04: beq         $v1, $zero, L_00232D60
    if (ctx->r3 == 0) {
        // 0x00232D08: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_00232D60;
    }
    // 0x00232D08: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_00232D0C:
    // 0x00232D0C: lw          $v0, 0x104($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X104);
    // 0x00232D10: bne         $v0, $a1, L_00232D24
    if (ctx->r2 != ctx->r5) {
        // 0x00232D14: nop
    
            goto L_00232D24;
    }
    // 0x00232D14: nop

    // 0x00232D18: lw          $v0, 0xF8($v1)
    ctx->r2 = MEM_W(ctx->r3, 0XF8);
    // 0x00232D1C: beq         $v0, $a2, L_00232D38
    if (ctx->r2 == ctx->r6) {
        // 0x00232D20: nop
    
            goto L_00232D38;
    }
    // 0x00232D20: nop

L_00232D24:
    // 0x00232D24: lw          $v1, 0x1C8($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X1C8);
    // 0x00232D28: bne         $v1, $zero, L_00232D0C
    if (ctx->r3 != 0) {
        // 0x00232D2C: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_00232D0C;
    }
    // 0x00232D2C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x00232D30: j           L_00232D60
    // 0x00232D34: nop

        goto L_00232D60;
    // 0x00232D34: nop

L_00232D38:
    // 0x00232D38: jr          $ra
    // 0x00232D3C: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
    return;
    // 0x00232D3C: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
L_00232D40:
    // 0x00232D40: beq         $v1, $zero, L_00232D60
    if (ctx->r3 == 0) {
        // 0x00232D44: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_00232D60;
    }
    // 0x00232D44: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_00232D48:
    // 0x00232D48: lw          $v0, 0x104($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X104);
    // 0x00232D4C: beq         $v0, $a1, L_00232D38
    if (ctx->r2 == ctx->r5) {
        // 0x00232D50: nop
    
            goto L_00232D38;
    }
    // 0x00232D50: nop

    // 0x00232D54: lw          $v1, 0x1C8($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X1C8);
    // 0x00232D58: bne         $v1, $zero, L_00232D48
    if (ctx->r3 != 0) {
        // 0x00232D5C: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_00232D48;
    }
    // 0x00232D5C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_00232D60:
    // 0x00232D60: jr          $ra
    // 0x00232D64: nop

    return;
    // 0x00232D64: nop

;}
RECOMP_FUNC void func_00212DA4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00212DA4: addiu       $sp, $sp, -0xC8
    ctx->r29 = ADD32(ctx->r29, -0XC8);
    // 0x00212DA8: sw          $s6, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->r22;
    // 0x00212DAC: addu        $s6, $a0, $zero
    ctx->r22 = ADD32(ctx->r4, 0);
    // 0x00212DB0: sw          $s7, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->r23;
    // 0x00212DB4: addu        $s7, $a1, $zero
    ctx->r23 = ADD32(ctx->r5, 0);
    // 0x00212DB8: sw          $fp, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->r30;
    // 0x00212DBC: addu        $fp, $a3, $zero
    ctx->r30 = ADD32(ctx->r7, 0);
    // 0x00212DC0: sw          $s5, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r21;
    // 0x00212DC4: addu        $s5, $zero, $zero
    ctx->r21 = ADD32(0, 0);
    // 0x00212DC8: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x00212DCC: sw          $ra, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->r31;
    // 0x00212DD0: sw          $s4, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r20;
    // 0x00212DD4: sw          $s3, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->r19;
    // 0x00212DD8: sw          $s2, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->r18;
    // 0x00212DDC: sw          $s1, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r17;
    // 0x00212DE0: sw          $s0, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r16;
    // 0x00212DE4: sdc1        $f21, 0xC0($sp)
    CHECK_FR(ctx, 21);
    SD(ctx->f21.u64, 0XC0, ctx->r29);
    // 0x00212DE8: sdc1        $f20, 0xB8($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0XB8, ctx->r29);
    // 0x00212DEC: jal         0x0020D908
    // 0x00212DF0: sw          $a2, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = ctx->r6;
    func_0020D908(rdram, ctx);
        goto after_0;
    // 0x00212DF0: sw          $a2, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = ctx->r6;
    after_0:
    // 0x00212DF4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00212DF8: lwc1        $f20, 0x577C($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X577C);
    // 0x00212DFC: addiu       $a0, $sp, 0x50
    ctx->r4 = ADD32(ctx->r29, 0X50);
    // 0x00212E00: swc1        $f20, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f20.u32l;
    // 0x00212E04: swc1        $f20, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f20.u32l;
    // 0x00212E08: jal         0x0020F040
    // 0x00212E0C: swc1        $f20, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f20.u32l;
    func_0020F040(rdram, ctx);
        goto after_1;
    // 0x00212E0C: swc1        $f20, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f20.u32l;
    after_1:
    // 0x00212E10: lw          $v0, 0x0($s6)
    ctx->r2 = MEM_W(ctx->r22, 0X0);
    // 0x00212E14: blez        $v0, L_00212F60
    if (SIGNED(ctx->r2) <= 0) {
        // 0x00212E18: addu        $s4, $s5, $zero
        ctx->r20 = ADD32(ctx->r21, 0);
            goto L_00212F60;
    }
    // 0x00212E18: addu        $s4, $s5, $zero
    ctx->r20 = ADD32(ctx->r21, 0);
    // 0x00212E1C: mov.s       $f21, $f20
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 20);
    ctx->f21.fl = ctx->f20.fl;
    // 0x00212E20: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00212E24: lwc1        $f20, 0x5780($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X5780);
    // 0x00212E28: addu        $a0, $s6, $zero
    ctx->r4 = ADD32(ctx->r22, 0);
L_00212E2C:
    // 0x00212E2C: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    // 0x00212E30: jal         0x002017D4
    // 0x00212E34: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    func_002017D4(rdram, ctx);
        goto after_2;
    // 0x00212E34: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    after_2:
    // 0x00212E38: addu        $s3, $v0, $zero
    ctx->r19 = ADD32(ctx->r2, 0);
    // 0x00212E3C: lw          $v0, 0x4($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X4);
    // 0x00212E40: blez        $v0, L_00212F4C
    if (SIGNED(ctx->r2) <= 0) {
        // 0x00212E44: addiu       $v1, $s3, 0x8
        ctx->r3 = ADD32(ctx->r19, 0X8);
            goto L_00212F4C;
    }
    // 0x00212E44: addiu       $v1, $s3, 0x8
    ctx->r3 = ADD32(ctx->r19, 0X8);
    // 0x00212E48: addu        $s0, $v1, $zero
    ctx->r16 = ADD32(ctx->r3, 0);
    // 0x00212E4C: sll         $v0, $s5, 1
    ctx->r2 = S32(ctx->r21 << 1);
    // 0x00212E50: addu        $v0, $v0, $s5
    ctx->r2 = ADD32(ctx->r2, ctx->r21);
    // 0x00212E54: lw          $t0, 0xD0($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XD0);
    // 0x00212E58: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x00212E5C: addu        $s1, $v0, $t0
    ctx->r17 = ADD32(ctx->r2, ctx->r8);
L_00212E60:
    // 0x00212E60: beq         $fp, $zero, L_00212E80
    if (ctx->r30 == 0) {
        // 0x00212E64: nop
    
            goto L_00212E80;
    }
    // 0x00212E64: nop

    // 0x00212E68: lhu         $a1, 0x6($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X6);
    // 0x00212E6C: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x00212E70: srl         $a1, $a1, 8
    ctx->r5 = S32(U32(ctx->r5) >> 8);
    // 0x00212E74: sll         $a1, $a1, 6
    ctx->r5 = S32(ctx->r5 << 6);
    // 0x00212E78: jal         0x0020D908
    // 0x00212E7C: addu        $a1, $s7, $a1
    ctx->r5 = ADD32(ctx->r23, ctx->r5);
    func_0020D908(rdram, ctx);
        goto after_3;
    // 0x00212E7C: addu        $a1, $s7, $a1
    ctx->r5 = ADD32(ctx->r23, ctx->r5);
    after_3:
L_00212E80:
    // 0x00212E80: lh          $v0, 0x0($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X0);
    // 0x00212E84: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x00212E88: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x00212E8C: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00212E90: swc1        $f0, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f0.u32l;
    // 0x00212E94: lh          $v0, 0x2($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X2);
    // 0x00212E98: addiu       $a1, $sp, 0x70
    ctx->r5 = ADD32(ctx->r29, 0X70);
    // 0x00212E9C: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x00212EA0: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00212EA4: swc1        $f0, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f0.u32l;
    // 0x00212EA8: lh          $v0, 0x4($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X4);
    // 0x00212EAC: addiu       $a2, $sp, 0x80
    ctx->r6 = ADD32(ctx->r29, 0X80);
    // 0x00212EB0: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x00212EB4: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00212EB8: jal         0x0020F85C
    // 0x00212EBC: swc1        $f0, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->f0.u32l;
    func_0020F85C(rdram, ctx);
        goto after_4;
    // 0x00212EBC: swc1        $f0, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->f0.u32l;
    after_4:
    // 0x00212EC0: lwc1        $f1, 0x80($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X80);
    // 0x00212EC4: lwc1        $f0, 0x50($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X50);
    // 0x00212EC8: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x00212ECC: lwc1        $f3, 0x84($sp)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r29, 0X84);
    // 0x00212ED0: lwc1        $f0, 0x54($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X54);
    // 0x00212ED4: mul.s       $f3, $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f3.fl = MUL_S(ctx->f3.fl, ctx->f0.fl);
    // 0x00212ED8: lwc1        $f2, 0x88($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X88);
    // 0x00212EDC: lwc1        $f0, 0x58($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X58);
    // 0x00212EE0: mul.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x00212EE4: add.s       $f1, $f1, $f3
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f3.fl;
    // 0x00212EE8: add.s       $f1, $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f2.fl;
    // 0x00212EEC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00212EF0: lwc1        $f0, 0x5784($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X5784);
    // 0x00212EF4: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x00212EF8: mfc1        $a2, $f21
    ctx->r6 = (int32_t)ctx->f_odd[(21 - 1) * 2];
    // 0x00212EFC: mfc1        $a3, $f21
    ctx->r7 = (int32_t)ctx->f_odd[(21 - 1) * 2];
    // 0x00212F00: mfc1        $a1, $f1
    ctx->r5 = (int32_t)ctx->f_odd[(1 - 1) * 2];
    // 0x00212F04: jal         0x00211DB0
    // 0x00212F08: addiu       $a0, $sp, 0x60
    ctx->r4 = ADD32(ctx->r29, 0X60);
    func_00211DB0(rdram, ctx);
        goto after_5;
    // 0x00212F08: addiu       $a0, $sp, 0x60
    ctx->r4 = ADD32(ctx->r29, 0X60);
    after_5:
    // 0x00212F0C: lwc1        $f0, 0x60($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X60);
    // 0x00212F10: mul.s       $f0, $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f20.fl);
    // 0x00212F14: swc1        $f0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->f0.u32l;
    // 0x00212F18: lwc1        $f0, 0x64($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X64);
    // 0x00212F1C: mul.s       $f0, $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f20.fl);
    // 0x00212F20: swc1        $f0, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->f0.u32l;
    // 0x00212F24: lwc1        $f0, 0x68($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X68);
    // 0x00212F28: mul.s       $f0, $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f20.fl);
    // 0x00212F2C: addiu       $s5, $s5, 0x1
    ctx->r21 = ADD32(ctx->r21, 0X1);
    // 0x00212F30: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x00212F34: addiu       $s0, $s0, 0x10
    ctx->r16 = ADD32(ctx->r16, 0X10);
    // 0x00212F38: swc1        $f0, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->f0.u32l;
    // 0x00212F3C: lw          $v0, 0x4($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X4);
    // 0x00212F40: slt         $v0, $s2, $v0
    ctx->r2 = SIGNED(ctx->r18) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x00212F44: bne         $v0, $zero, L_00212E60
    if (ctx->r2 != 0) {
        // 0x00212F48: addiu       $s1, $s1, 0xC
        ctx->r17 = ADD32(ctx->r17, 0XC);
            goto L_00212E60;
    }
    // 0x00212F48: addiu       $s1, $s1, 0xC
    ctx->r17 = ADD32(ctx->r17, 0XC);
L_00212F4C:
    // 0x00212F4C: lw          $v0, 0x0($s6)
    ctx->r2 = MEM_W(ctx->r22, 0X0);
    // 0x00212F50: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
    // 0x00212F54: slt         $v0, $s4, $v0
    ctx->r2 = SIGNED(ctx->r20) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x00212F58: bnel        $v0, $zero, L_00212E2C
    if (ctx->r2 != 0) {
        // 0x00212F5C: addu        $a0, $s6, $zero
        ctx->r4 = ADD32(ctx->r22, 0);
            goto L_00212E2C;
    }
    goto skip_0;
    // 0x00212F5C: addu        $a0, $s6, $zero
    ctx->r4 = ADD32(ctx->r22, 0);
    skip_0:
L_00212F60:
    // 0x00212F60: lw          $ra, 0xB4($sp)
    ctx->r31 = MEM_W(ctx->r29, 0XB4);
    // 0x00212F64: lw          $fp, 0xB0($sp)
    ctx->r30 = MEM_W(ctx->r29, 0XB0);
    // 0x00212F68: lw          $s7, 0xAC($sp)
    ctx->r23 = MEM_W(ctx->r29, 0XAC);
    // 0x00212F6C: lw          $s6, 0xA8($sp)
    ctx->r22 = MEM_W(ctx->r29, 0XA8);
    // 0x00212F70: lw          $s5, 0xA4($sp)
    ctx->r21 = MEM_W(ctx->r29, 0XA4);
    // 0x00212F74: lw          $s4, 0xA0($sp)
    ctx->r20 = MEM_W(ctx->r29, 0XA0);
    // 0x00212F78: lw          $s3, 0x9C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X9C);
    // 0x00212F7C: lw          $s2, 0x98($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X98);
    // 0x00212F80: lw          $s1, 0x94($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X94);
    // 0x00212F84: lw          $s0, 0x90($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X90);
    // 0x00212F88: ldc1        $f21, 0xC0($sp)
    CHECK_FR(ctx, 21);
    ctx->f21.u64 = LD(ctx->r29, 0XC0);
    // 0x00212F8C: ldc1        $f20, 0xB8($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0XB8);
    // 0x00212F90: jr          $ra
    // 0x00212F94: addiu       $sp, $sp, 0xC8
    ctx->r29 = ADD32(ctx->r29, 0XC8);
    return;
    // 0x00212F94: addiu       $sp, $sp, 0xC8
    ctx->r29 = ADD32(ctx->r29, 0XC8);
;}
RECOMP_FUNC void func_00290F20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00290F20: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x00290F24: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x00290F28: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x00290F2C: addu        $a0, $a1, $zero
    ctx->r4 = ADD32(ctx->r5, 0);
    // 0x00290F30: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x00290F34: addu        $s3, $a2, $zero
    ctx->r19 = ADD32(ctx->r6, 0);
    // 0x00290F38: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00290F3C: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x00290F40: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x00290F44: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00290F48: sw          $zero, 0x10($s2)
    MEM_W(0X10, ctx->r18) = 0;
    // 0x00290F4C: sw          $zero, 0x8($s2)
    MEM_W(0X8, ctx->r18) = 0;
    // 0x00290F50: sw          $zero, 0xC($s2)
    MEM_W(0XC, ctx->r18) = 0;
    // 0x00290F54: sw          $zero, 0x0($s2)
    MEM_W(0X0, ctx->r18) = 0;
    // 0x00290F58: blez        $s3, L_00290F80
    if (SIGNED(ctx->r19) <= 0) {
        // 0x00290F5C: sw          $zero, 0x4($s2)
        MEM_W(0X4, ctx->r18) = 0;
            goto L_00290F80;
    }
    // 0x00290F5C: sw          $zero, 0x4($s2)
    MEM_W(0X4, ctx->r18) = 0;
    // 0x00290F60: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
L_00290F64:
    // 0x00290F64: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00290F68: jal         0x002933E0
    // 0x00290F6C: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    func_002933E0(rdram, ctx);
        goto after_0;
    // 0x00290F6C: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    after_0:
    // 0x00290F70: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x00290F74: slt         $v0, $s1, $s3
    ctx->r2 = SIGNED(ctx->r17) < SIGNED(ctx->r19) ? 1 : 0;
    // 0x00290F78: bne         $v0, $zero, L_00290F64
    if (ctx->r2 != 0) {
        // 0x00290F7C: addiu       $s0, $s0, 0x1C
        ctx->r16 = ADD32(ctx->r16, 0X1C);
            goto L_00290F64;
    }
    // 0x00290F7C: addiu       $s0, $s0, 0x1C
    ctx->r16 = ADD32(ctx->r16, 0X1C);
L_00290F80:
    // 0x00290F80: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x00290F84: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x00290F88: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x00290F8C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00290F90: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00290F94: jr          $ra
    // 0x00290F98: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x00290F98: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_0040CB28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0040CB28: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x0040CB2C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x0040CB30: addiu       $v0, $a0, 0x8
    ctx->r2 = ADD32(ctx->r4, 0X8);
    // 0x0040CB34: addu        $t1, $sp, $zero
    ctx->r9 = ADD32(ctx->r29, 0);
    // 0x0040CB38: sw          $zero, 0x0($sp)
    MEM_W(0X0, ctx->r29) = 0;
    // 0x0040CB3C: sw          $zero, 0x4($sp)
    MEM_W(0X4, ctx->r29) = 0;
    // 0x0040CB40: lw          $t2, 0x4($a0)
    ctx->r10 = MEM_W(ctx->r4, 0X4);
    // 0x0040CB44: blez        $t2, L_0040CBA0
    if (SIGNED(ctx->r10) <= 0) {
        // 0x0040CB48: addiu       $t0, $sp, 0x4
        ctx->r8 = ADD32(ctx->r29, 0X4);
            goto L_0040CBA0;
    }
    // 0x0040CB48: addiu       $t0, $sp, 0x4
    ctx->r8 = ADD32(ctx->r29, 0X4);
    // 0x0040CB4C: addu        $a3, $v0, $zero
    ctx->r7 = ADD32(ctx->r2, 0);
L_0040CB50:
    // 0x0040CB50: lw          $a1, 0x0($a3)
    ctx->r5 = MEM_W(ctx->r7, 0X0);
    // 0x0040CB54: lw          $v0, 0x0($t1)
    ctx->r2 = MEM_W(ctx->r9, 0X0);
    // 0x0040CB58: lw          $v1, 0x148($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X148);
    // 0x0040CB5C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x0040CB60: sw          $v0, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r2;
    // 0x0040CB64: lw          $v0, 0x144($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X144);
    // 0x0040CB68: beq         $v0, $zero, L_0040CB90
    if (ctx->r2 == 0) {
        // 0x0040CB6C: addiu       $a2, $a2, 0x1
        ctx->r6 = ADD32(ctx->r6, 0X1);
            goto L_0040CB90;
    }
    // 0x0040CB6C: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x0040CB70: lw          $v0, 0xD4($a1)
    ctx->r2 = MEM_W(ctx->r5, 0XD4);
    // 0x0040CB74: andi        $v0, $v0, 0x100
    ctx->r2 = ctx->r2 & 0X100;
    // 0x0040CB78: beq         $v0, $zero, L_0040CB90
    if (ctx->r2 == 0) {
        // 0x0040CB7C: nop
    
            goto L_0040CB90;
    }
    // 0x0040CB7C: nop

    // 0x0040CB80: lw          $v0, 0x0($t0)
    ctx->r2 = MEM_W(ctx->r8, 0X0);
    // 0x0040CB84: lw          $v1, 0x148($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X148);
    // 0x0040CB88: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x0040CB8C: sw          $v0, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r2;
L_0040CB90:
    // 0x0040CB90: slt         $v0, $a2, $t2
    ctx->r2 = SIGNED(ctx->r6) < SIGNED(ctx->r10) ? 1 : 0;
    // 0x0040CB94: bne         $v0, $zero, L_0040CB50
    if (ctx->r2 != 0) {
        // 0x0040CB98: addiu       $a3, $a3, 0x4
        ctx->r7 = ADD32(ctx->r7, 0X4);
            goto L_0040CB50;
    }
    // 0x0040CB98: addiu       $a3, $a3, 0x4
    ctx->r7 = ADD32(ctx->r7, 0X4);
    // 0x0040CB9C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
L_0040CBA0:
    // 0x0040CBA0: lw          $t2, 0x18($a0)
    ctx->r10 = MEM_W(ctx->r4, 0X18);
    // 0x0040CBA4: addiu       $v0, $a0, 0x1C
    ctx->r2 = ADD32(ctx->r4, 0X1C);
    // 0x0040CBA8: addu        $t1, $sp, $zero
    ctx->r9 = ADD32(ctx->r29, 0);
    // 0x0040CBAC: blez        $t2, L_0040CC04
    if (SIGNED(ctx->r10) <= 0) {
        // 0x0040CBB0: addiu       $t0, $sp, 0x4
        ctx->r8 = ADD32(ctx->r29, 0X4);
            goto L_0040CC04;
    }
    // 0x0040CBB0: addiu       $t0, $sp, 0x4
    ctx->r8 = ADD32(ctx->r29, 0X4);
    // 0x0040CBB4: addu        $a3, $v0, $zero
    ctx->r7 = ADD32(ctx->r2, 0);
L_0040CBB8:
    // 0x0040CBB8: lw          $a1, 0x0($a3)
    ctx->r5 = MEM_W(ctx->r7, 0X0);
    // 0x0040CBBC: lw          $v0, 0x0($t1)
    ctx->r2 = MEM_W(ctx->r9, 0X0);
    // 0x0040CBC0: lw          $v1, 0x148($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X148);
    // 0x0040CBC4: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x0040CBC8: sw          $v0, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r2;
    // 0x0040CBCC: lw          $v0, 0x144($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X144);
    // 0x0040CBD0: beq         $v0, $zero, L_0040CBF8
    if (ctx->r2 == 0) {
        // 0x0040CBD4: addiu       $a2, $a2, 0x1
        ctx->r6 = ADD32(ctx->r6, 0X1);
            goto L_0040CBF8;
    }
    // 0x0040CBD4: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x0040CBD8: lw          $v0, 0xD4($a1)
    ctx->r2 = MEM_W(ctx->r5, 0XD4);
    // 0x0040CBDC: andi        $v0, $v0, 0x100
    ctx->r2 = ctx->r2 & 0X100;
    // 0x0040CBE0: beq         $v0, $zero, L_0040CBF8
    if (ctx->r2 == 0) {
        // 0x0040CBE4: nop
    
            goto L_0040CBF8;
    }
    // 0x0040CBE4: nop

    // 0x0040CBE8: lw          $v0, 0x0($t0)
    ctx->r2 = MEM_W(ctx->r8, 0X0);
    // 0x0040CBEC: lw          $v1, 0x148($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X148);
    // 0x0040CBF0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x0040CBF4: sw          $v0, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r2;
L_0040CBF8:
    // 0x0040CBF8: slt         $v0, $a2, $t2
    ctx->r2 = SIGNED(ctx->r6) < SIGNED(ctx->r10) ? 1 : 0;
    // 0x0040CBFC: bne         $v0, $zero, L_0040CBB8
    if (ctx->r2 != 0) {
        // 0x0040CC00: addiu       $a3, $a3, 0x4
        ctx->r7 = ADD32(ctx->r7, 0X4);
            goto L_0040CBB8;
    }
    // 0x0040CC00: addiu       $a3, $a3, 0x4
    ctx->r7 = ADD32(ctx->r7, 0X4);
L_0040CC04:
    // 0x0040CC04: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x0040CC08: lw          $t1, 0x2C($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X2C);
    // 0x0040CC0C: addiu       $a0, $a0, 0x30
    ctx->r4 = ADD32(ctx->r4, 0X30);
    // 0x0040CC10: addu        $t0, $sp, $zero
    ctx->r8 = ADD32(ctx->r29, 0);
    // 0x0040CC14: blez        $t1, L_0040CC68
    if (SIGNED(ctx->r9) <= 0) {
        // 0x0040CC18: addiu       $a3, $sp, 0x4
        ctx->r7 = ADD32(ctx->r29, 0X4);
            goto L_0040CC68;
    }
    // 0x0040CC18: addiu       $a3, $sp, 0x4
    ctx->r7 = ADD32(ctx->r29, 0X4);
L_0040CC1C:
    // 0x0040CC1C: lw          $a1, 0x0($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X0);
    // 0x0040CC20: lw          $v0, 0x0($t0)
    ctx->r2 = MEM_W(ctx->r8, 0X0);
    // 0x0040CC24: lw          $v1, 0x148($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X148);
    // 0x0040CC28: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x0040CC2C: sw          $v0, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r2;
    // 0x0040CC30: lw          $v0, 0x144($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X144);
    // 0x0040CC34: beq         $v0, $zero, L_0040CC5C
    if (ctx->r2 == 0) {
        // 0x0040CC38: addiu       $a2, $a2, 0x1
        ctx->r6 = ADD32(ctx->r6, 0X1);
            goto L_0040CC5C;
    }
    // 0x0040CC38: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x0040CC3C: lw          $v0, 0xD4($a1)
    ctx->r2 = MEM_W(ctx->r5, 0XD4);
    // 0x0040CC40: andi        $v0, $v0, 0x100
    ctx->r2 = ctx->r2 & 0X100;
    // 0x0040CC44: beq         $v0, $zero, L_0040CC5C
    if (ctx->r2 == 0) {
        // 0x0040CC48: nop
    
            goto L_0040CC5C;
    }
    // 0x0040CC48: nop

    // 0x0040CC4C: lw          $v0, 0x0($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X0);
    // 0x0040CC50: lw          $v1, 0x148($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X148);
    // 0x0040CC54: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x0040CC58: sw          $v0, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r2;
L_0040CC5C:
    // 0x0040CC5C: slt         $v0, $a2, $t1
    ctx->r2 = SIGNED(ctx->r6) < SIGNED(ctx->r9) ? 1 : 0;
    // 0x0040CC60: bne         $v0, $zero, L_0040CC1C
    if (ctx->r2 != 0) {
        // 0x0040CC64: addiu       $a0, $a0, 0x4
        ctx->r4 = ADD32(ctx->r4, 0X4);
            goto L_0040CC1C;
    }
    // 0x0040CC64: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
L_0040CC68:
    // 0x0040CC68: lw          $a0, 0x0($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X0);
    // 0x0040CC6C: beq         $a0, $zero, L_0040CCB8
    if (ctx->r4 == 0) {
        // 0x0040CC70: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_0040CCB8;
    }
    // 0x0040CC70: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x0040CC74: lw          $v1, 0x4($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X4);
    // 0x0040CC78: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x0040CC7C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x0040CC80: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x0040CC84: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x0040CC88: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x0040CC8C: div         $zero, $v0, $a0
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r4))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r4)));
    // 0x0040CC90: bne         $a0, $zero, L_0040CC9C
    if (ctx->r4 != 0) {
        // 0x0040CC94: nop
    
            goto L_0040CC9C;
    }
    // 0x0040CC94: nop

    // 0x0040CC98: break       7
    do_break(4246680);
L_0040CC9C:
    // 0x0040CC9C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x0040CCA0: bne         $a0, $at, L_0040CCB4
    if (ctx->r4 != ctx->r1) {
        // 0x0040CCA4: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_0040CCB4;
    }
    // 0x0040CCA4: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x0040CCA8: bne         $v0, $at, L_0040CCB4
    if (ctx->r2 != ctx->r1) {
        // 0x0040CCAC: nop
    
            goto L_0040CCB4;
    }
    // 0x0040CCAC: nop

    // 0x0040CCB0: break       6
    do_break(4246704);
L_0040CCB4:
    // 0x0040CCB4: mflo        $v0
    ctx->r2 = lo;
L_0040CCB8:
    // 0x0040CCB8: jr          $ra
    // 0x0040CCBC: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x0040CCBC: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_0024A86C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0024A86C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x0024A870: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x0024A874: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x0024A878: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x0024A87C: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x0024A880: lwc1        $f0, 0xB60($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0XB60);
    // 0x0024A884: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0024A888: lwc1        $f1, 0x6D28($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X6D28);
    // 0x0024A88C: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x0024A890: lw          $v0, 0xB2C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XB2C);
    // 0x0024A894: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x0024A898: beq         $v0, $zero, L_0024AAF8
    if (ctx->r2 == 0) {
        // 0x0024A89C: swc1        $f0, 0xB60($s0)
        MEM_W(0XB60, ctx->r16) = ctx->f0.u32l;
            goto L_0024AAF8;
    }
    // 0x0024A89C: swc1        $f0, 0xB60($s0)
    MEM_W(0XB60, ctx->r16) = ctx->f0.u32l;
    // 0x0024A8A0: lw          $v0, 0x518($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X518);
    // 0x0024A8A4: lbu         $v1, 0x3E($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X3E);
    // 0x0024A8A8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0024A8AC: beq         $v1, $v0, L_0024AAF8
    if (ctx->r3 == ctx->r2) {
        // 0x0024A8B0: nop
    
            goto L_0024AAF8;
    }
    // 0x0024A8B0: nop

    // 0x0024A8B4: jal         0x00279028
    // 0x0024A8B8: addiu       $a0, $zero, 0xFF
    ctx->r4 = ADD32(0, 0XFF);
    func_00279028(rdram, ctx);
        goto after_0;
    // 0x0024A8B8: addiu       $a0, $zero, 0xFF
    ctx->r4 = ADD32(0, 0XFF);
    after_0:
    // 0x0024A8BC: lw          $a2, 0xB5C($s0)
    ctx->r6 = MEM_W(ctx->r16, 0XB5C);
    // 0x0024A8C0: addiu       $v0, $zero, 0x2DA
    ctx->r2 = ADD32(0, 0X2DA);
    // 0x0024A8C4: bne         $a2, $v0, L_0024A92C
    if (ctx->r6 != ctx->r2) {
        // 0x0024A8C8: addiu       $v1, $zero, 0x1
        ctx->r3 = ADD32(0, 0X1);
            goto L_0024A92C;
    }
    // 0x0024A8C8: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x0024A8CC: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x0024A8D0: lbu         $v0, -0x550F($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X550F);
    // 0x0024A8D4: beq         $v0, $zero, L_0024A930
    if (ctx->r2 == 0) {
        // 0x0024A8D8: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_0024A930;
    }
    // 0x0024A8D8: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x0024A8DC: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x0024A8E0: lw          $v0, -0x531C($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X531C);
    // 0x0024A8E4: bne         $v0, $zero, L_0024A91C
    if (ctx->r2 != 0) {
        // 0x0024A8E8: nop
    
            goto L_0024A91C;
    }
    // 0x0024A8E8: nop

    // 0x0024A8EC: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x0024A8F0: lw          $v0, -0x532C($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X532C);
    // 0x0024A8F4: beq         $v0, $zero, L_0024A90C
    if (ctx->r2 == 0) {
        // 0x0024A8F8: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_0024A90C;
    }
    // 0x0024A8F8: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x0024A8FC: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x0024A900: lbu         $v1, -0x54FA($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X54FA);
    // 0x0024A904: j           L_0024A930
    // 0x0024A908: nop

        goto L_0024A930;
    // 0x0024A908: nop

L_0024A90C:
    // 0x0024A90C: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x0024A910: lbu         $v1, -0x5504($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X5504);
    // 0x0024A914: j           L_0024A930
    // 0x0024A918: nop

        goto L_0024A930;
    // 0x0024A918: nop

L_0024A91C:
    // 0x0024A91C: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x0024A920: lbu         $v1, -0x54FF($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X54FF);
    // 0x0024A924: j           L_0024A930
    // 0x0024A928: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_0024A930;
    // 0x0024A928: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_0024A92C:
    // 0x0024A92C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_0024A930:
    // 0x0024A930: beq         $a2, $v0, L_0024A9D8
    if (ctx->r6 == ctx->r2) {
        // 0x0024A934: addiu       $v0, $zero, 0x2E4
        ctx->r2 = ADD32(0, 0X2E4);
            goto L_0024A9D8;
    }
    // 0x0024A934: addiu       $v0, $zero, 0x2E4
    ctx->r2 = ADD32(0, 0X2E4);
    // 0x0024A938: beq         $a2, $v0, L_0024A99C
    if (ctx->r6 == ctx->r2) {
        // 0x0024A93C: slti        $v0, $a2, 0x2E5
        ctx->r2 = SIGNED(ctx->r6) < 0X2E5 ? 1 : 0;
            goto L_0024A99C;
    }
    // 0x0024A93C: slti        $v0, $a2, 0x2E5
    ctx->r2 = SIGNED(ctx->r6) < 0X2E5 ? 1 : 0;
    // 0x0024A940: beq         $v0, $zero, L_0024A960
    if (ctx->r2 == 0) {
        // 0x0024A944: addiu       $v0, $zero, 0x2BC
        ctx->r2 = ADD32(0, 0X2BC);
            goto L_0024A960;
    }
    // 0x0024A944: addiu       $v0, $zero, 0x2BC
    ctx->r2 = ADD32(0, 0X2BC);
    // 0x0024A948: beq         $a2, $v0, L_0024A99C
    if (ctx->r6 == ctx->r2) {
        // 0x0024A94C: addiu       $v0, $zero, 0x2DA
        ctx->r2 = ADD32(0, 0X2DA);
            goto L_0024A99C;
    }
    // 0x0024A94C: addiu       $v0, $zero, 0x2DA
    ctx->r2 = ADD32(0, 0X2DA);
    // 0x0024A950: beq         $a2, $v0, L_0024A98C
    if (ctx->r6 == ctx->r2) {
        // 0x0024A954: nop
    
            goto L_0024A98C;
    }
    // 0x0024A954: nop

    // 0x0024A958: j           L_0024A9AC
    // 0x0024A95C: nop

        goto L_0024A9AC;
    // 0x0024A95C: nop

L_0024A960:
    // 0x0024A960: addiu       $v0, $zero, 0x320
    ctx->r2 = ADD32(0, 0X320);
    // 0x0024A964: beq         $a2, $v0, L_0024A99C
    if (ctx->r6 == ctx->r2) {
        // 0x0024A968: slt         $v0, $a2, $v0
        ctx->r2 = SIGNED(ctx->r6) < SIGNED(ctx->r2) ? 1 : 0;
            goto L_0024A99C;
    }
    // 0x0024A968: slt         $v0, $a2, $v0
    ctx->r2 = SIGNED(ctx->r6) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x0024A96C: bne         $v0, $zero, L_0024A9AC
    if (ctx->r2 != 0) {
        // 0x0024A970: slti        $v0, $a2, 0x32C
        ctx->r2 = SIGNED(ctx->r6) < 0X32C ? 1 : 0;
            goto L_0024A9AC;
    }
    // 0x0024A970: slti        $v0, $a2, 0x32C
    ctx->r2 = SIGNED(ctx->r6) < 0X32C ? 1 : 0;
    // 0x0024A974: beq         $v0, $zero, L_0024A9AC
    if (ctx->r2 == 0) {
        // 0x0024A978: slti        $v0, $a2, 0x32A
        ctx->r2 = SIGNED(ctx->r6) < 0X32A ? 1 : 0;
            goto L_0024A9AC;
    }
    // 0x0024A978: slti        $v0, $a2, 0x32A
    ctx->r2 = SIGNED(ctx->r6) < 0X32A ? 1 : 0;
    // 0x0024A97C: beq         $v0, $zero, L_0024A99C
    if (ctx->r2 == 0) {
        // 0x0024A980: nop
    
            goto L_0024A99C;
    }
    // 0x0024A980: nop

    // 0x0024A984: j           L_0024A9AC
    // 0x0024A988: nop

        goto L_0024A9AC;
    // 0x0024A988: nop

L_0024A98C:
    // 0x0024A98C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0024A990: lwc1        $f1, 0x6BA8($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X6BA8);
    // 0x0024A994: j           L_0024A9B4
    // 0x0024A998: nop

        goto L_0024A9B4;
    // 0x0024A998: nop

L_0024A99C:
    // 0x0024A99C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0024A9A0: lwc1        $f1, 0x6BAC($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X6BAC);
    // 0x0024A9A4: j           L_0024A9B4
    // 0x0024A9A8: nop

        goto L_0024A9B4;
    // 0x0024A9A8: nop

L_0024A9AC:
    // 0x0024A9AC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0024A9B0: lwc1        $f1, 0x6BB0($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X6BB0);
L_0024A9B4:
    // 0x0024A9B4: beq         $v1, $zero, L_0024A9D8
    if (ctx->r3 == 0) {
        // 0x0024A9B8: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_0024A9D8;
    }
    // 0x0024A9B8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0024A9BC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0024A9C0: lwc1        $f0, 0x6BB4($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6BB4);
    // 0x0024A9C4: swc1        $f1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    // 0x0024A9C8: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    // 0x0024A9CC: lw          $a3, 0xB60($s0)
    ctx->r7 = MEM_W(ctx->r16, 0XB60);
    // 0x0024A9D0: jal         0x0024A678
    // 0x0024A9D4: addiu       $a1, $s0, 0xB64
    ctx->r5 = ADD32(ctx->r16, 0XB64);
    func_0024A678(rdram, ctx);
        goto after_1;
    // 0x0024A9D4: addiu       $a1, $s0, 0xB64
    ctx->r5 = ADD32(ctx->r16, 0XB64);
    after_1:
L_0024A9D8:
    // 0x0024A9D8: lw          $a2, 0xB3C($s0)
    ctx->r6 = MEM_W(ctx->r16, 0XB3C);
    // 0x0024A9DC: addiu       $v0, $zero, 0x2DA
    ctx->r2 = ADD32(0, 0X2DA);
    // 0x0024A9E0: bne         $a2, $v0, L_0024AA48
    if (ctx->r6 != ctx->r2) {
        // 0x0024A9E4: addiu       $v1, $zero, 0x1
        ctx->r3 = ADD32(0, 0X1);
            goto L_0024AA48;
    }
    // 0x0024A9E4: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x0024A9E8: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x0024A9EC: lbu         $v0, -0x550F($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X550F);
    // 0x0024A9F0: beq         $v0, $zero, L_0024AA4C
    if (ctx->r2 == 0) {
        // 0x0024A9F4: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_0024AA4C;
    }
    // 0x0024A9F4: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x0024A9F8: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x0024A9FC: lw          $v0, -0x531C($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X531C);
    // 0x0024AA00: bne         $v0, $zero, L_0024AA38
    if (ctx->r2 != 0) {
        // 0x0024AA04: nop
    
            goto L_0024AA38;
    }
    // 0x0024AA04: nop

    // 0x0024AA08: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x0024AA0C: lw          $v0, -0x532C($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X532C);
    // 0x0024AA10: beq         $v0, $zero, L_0024AA28
    if (ctx->r2 == 0) {
        // 0x0024AA14: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_0024AA28;
    }
    // 0x0024AA14: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x0024AA18: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x0024AA1C: lbu         $v1, -0x54FA($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X54FA);
    // 0x0024AA20: j           L_0024AA4C
    // 0x0024AA24: nop

        goto L_0024AA4C;
    // 0x0024AA24: nop

L_0024AA28:
    // 0x0024AA28: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x0024AA2C: lbu         $v1, -0x5504($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X5504);
    // 0x0024AA30: j           L_0024AA4C
    // 0x0024AA34: nop

        goto L_0024AA4C;
    // 0x0024AA34: nop

L_0024AA38:
    // 0x0024AA38: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x0024AA3C: lbu         $v1, -0x54FF($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X54FF);
    // 0x0024AA40: j           L_0024AA4C
    // 0x0024AA44: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_0024AA4C;
    // 0x0024AA44: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_0024AA48:
    // 0x0024AA48: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_0024AA4C:
    // 0x0024AA4C: beq         $a2, $v0, L_0024AAF8
    if (ctx->r6 == ctx->r2) {
        // 0x0024AA50: slti        $v0, $a2, 0x2C8
        ctx->r2 = SIGNED(ctx->r6) < 0X2C8 ? 1 : 0;
            goto L_0024AAF8;
    }
    // 0x0024AA50: slti        $v0, $a2, 0x2C8
    ctx->r2 = SIGNED(ctx->r6) < 0X2C8 ? 1 : 0;
    // 0x0024AA54: beq         $v0, $zero, L_0024AA74
    if (ctx->r2 == 0) {
        // 0x0024AA58: slti        $v0, $a2, 0x2C6
        ctx->r2 = SIGNED(ctx->r6) < 0X2C6 ? 1 : 0;
            goto L_0024AA74;
    }
    // 0x0024AA58: slti        $v0, $a2, 0x2C6
    ctx->r2 = SIGNED(ctx->r6) < 0X2C6 ? 1 : 0;
    // 0x0024AA5C: beq         $v0, $zero, L_0024AABC
    if (ctx->r2 == 0) {
        // 0x0024AA60: addiu       $v0, $zero, 0x2BC
        ctx->r2 = ADD32(0, 0X2BC);
            goto L_0024AABC;
    }
    // 0x0024AA60: addiu       $v0, $zero, 0x2BC
    ctx->r2 = ADD32(0, 0X2BC);
    // 0x0024AA64: beq         $a2, $v0, L_0024AABC
    if (ctx->r6 == ctx->r2) {
        // 0x0024AA68: nop
    
            goto L_0024AABC;
    }
    // 0x0024AA68: nop

    // 0x0024AA6C: j           L_0024AACC
    // 0x0024AA70: nop

        goto L_0024AACC;
    // 0x0024AA70: nop

L_0024AA74:
    // 0x0024AA74: addiu       $v0, $zero, 0x2E4
    ctx->r2 = ADD32(0, 0X2E4);
    // 0x0024AA78: beq         $a2, $v0, L_0024AABC
    if (ctx->r6 == ctx->r2) {
        // 0x0024AA7C: slti        $v0, $a2, 0x2E5
        ctx->r2 = SIGNED(ctx->r6) < 0X2E5 ? 1 : 0;
            goto L_0024AABC;
    }
    // 0x0024AA7C: slti        $v0, $a2, 0x2E5
    ctx->r2 = SIGNED(ctx->r6) < 0X2E5 ? 1 : 0;
    // 0x0024AA80: beq         $v0, $zero, L_0024AA98
    if (ctx->r2 == 0) {
        // 0x0024AA84: addiu       $v0, $zero, 0x2DA
        ctx->r2 = ADD32(0, 0X2DA);
            goto L_0024AA98;
    }
    // 0x0024AA84: addiu       $v0, $zero, 0x2DA
    ctx->r2 = ADD32(0, 0X2DA);
    // 0x0024AA88: beq         $a2, $v0, L_0024AAAC
    if (ctx->r6 == ctx->r2) {
        // 0x0024AA8C: nop
    
            goto L_0024AAAC;
    }
    // 0x0024AA8C: nop

    // 0x0024AA90: j           L_0024AACC
    // 0x0024AA94: nop

        goto L_0024AACC;
    // 0x0024AA94: nop

L_0024AA98:
    // 0x0024AA98: addiu       $v0, $zero, 0x320
    ctx->r2 = ADD32(0, 0X320);
    // 0x0024AA9C: beq         $a2, $v0, L_0024AABC
    if (ctx->r6 == ctx->r2) {
        // 0x0024AAA0: nop
    
            goto L_0024AABC;
    }
    // 0x0024AAA0: nop

    // 0x0024AAA4: j           L_0024AACC
    // 0x0024AAA8: nop

        goto L_0024AACC;
    // 0x0024AAA8: nop

L_0024AAAC:
    // 0x0024AAAC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0024AAB0: lwc1        $f1, 0x6BB8($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X6BB8);
    // 0x0024AAB4: j           L_0024AAD4
    // 0x0024AAB8: nop

        goto L_0024AAD4;
    // 0x0024AAB8: nop

L_0024AABC:
    // 0x0024AABC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0024AAC0: lwc1        $f1, 0x6BBC($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X6BBC);
    // 0x0024AAC4: j           L_0024AAD4
    // 0x0024AAC8: nop

        goto L_0024AAD4;
    // 0x0024AAC8: nop

L_0024AACC:
    // 0x0024AACC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0024AAD0: lwc1        $f1, 0x6BC0($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X6BC0);
L_0024AAD4:
    // 0x0024AAD4: beq         $v1, $zero, L_0024AAF8
    if (ctx->r3 == 0) {
        // 0x0024AAD8: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_0024AAF8;
    }
    // 0x0024AAD8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0024AADC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0024AAE0: lwc1        $f0, 0x6BC4($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6BC4);
    // 0x0024AAE4: swc1        $f1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    // 0x0024AAE8: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    // 0x0024AAEC: lw          $a3, 0xB60($s0)
    ctx->r7 = MEM_W(ctx->r16, 0XB60);
    // 0x0024AAF0: jal         0x0024A678
    // 0x0024AAF4: addiu       $a1, $s0, 0xB40
    ctx->r5 = ADD32(ctx->r16, 0XB40);
    func_0024A678(rdram, ctx);
        goto after_2;
    // 0x0024AAF4: addiu       $a1, $s0, 0xB40
    ctx->r5 = ADD32(ctx->r16, 0XB40);
    after_2:
L_0024AAF8:
    // 0x0024AAF8: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x0024AAFC: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x0024AB00: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x0024AB04: jr          $ra
    // 0x0024AB08: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x0024AB08: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_00424978(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00424978: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0042497C: addiu       $v1, $zero, 0x10FE
    ctx->r3 = ADD32(0, 0X10FE);
    // 0x00424980: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x00424984: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00424988: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x0042498C: lw          $a0, 0x1C($a1)
    ctx->r4 = MEM_W(ctx->r5, 0X1C);
    // 0x00424990: lh          $a3, 0x20($v0)
    ctx->r7 = MEM_H(ctx->r2, 0X20);
    // 0x00424994: lh          $s0, 0x22($v0)
    ctx->r16 = MEM_H(ctx->r2, 0X22);
    // 0x00424998: beq         $a3, $v1, L_004249BC
    if (ctx->r7 == ctx->r3) {
        // 0x0042499C: addu        $a2, $zero, $zero
        ctx->r6 = ADD32(0, 0);
            goto L_004249BC;
    }
    // 0x0042499C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x004249A0: addiu       $v0, $zero, 0x1194
    ctx->r2 = ADD32(0, 0X1194);
    // 0x004249A4: beq         $a3, $v0, L_004249F4
    if (ctx->r7 == ctx->r2) {
        // 0x004249A8: addu        $v0, $a0, $s0
        ctx->r2 = ADD32(ctx->r4, ctx->r16);
            goto L_004249F4;
    }
    // 0x004249A8: addu        $v0, $a0, $s0
    ctx->r2 = ADD32(ctx->r4, ctx->r16);
    // 0x004249AC: jal         0x00253748
    // 0x004249B0: addu        $a1, $a3, $zero
    ctx->r5 = ADD32(ctx->r7, 0);
    func_00253748(rdram, ctx);
        goto after_0;
    // 0x004249B0: addu        $a1, $a3, $zero
    ctx->r5 = ADD32(ctx->r7, 0);
    after_0:
    // 0x004249B4: j           L_004249FC
    // 0x004249B8: slt         $a2, $s0, $v0
    ctx->r6 = SIGNED(ctx->r16) < SIGNED(ctx->r2) ? 1 : 0;
        goto L_004249FC;
    // 0x004249B8: slt         $a2, $s0, $v0
    ctx->r6 = SIGNED(ctx->r16) < SIGNED(ctx->r2) ? 1 : 0;
L_004249BC:
    // 0x004249BC: bltz        $s0, L_004249FC
    if (SIGNED(ctx->r16) < 0) {
        // 0x004249C0: slti        $v0, $s0, 0x3
        ctx->r2 = SIGNED(ctx->r16) < 0X3 ? 1 : 0;
            goto L_004249FC;
    }
    // 0x004249C0: slti        $v0, $s0, 0x3
    ctx->r2 = SIGNED(ctx->r16) < 0X3 ? 1 : 0;
    // 0x004249C4: bne         $v0, $zero, L_004249DC
    if (ctx->r2 != 0) {
        // 0x004249C8: slti        $v0, $s0, 0x6
        ctx->r2 = SIGNED(ctx->r16) < 0X6 ? 1 : 0;
            goto L_004249DC;
    }
    // 0x004249C8: slti        $v0, $s0, 0x6
    ctx->r2 = SIGNED(ctx->r16) < 0X6 ? 1 : 0;
    // 0x004249CC: bnel        $v0, $zero, L_004249E8
    if (ctx->r2 != 0) {
        // 0x004249D0: addiu       $a2, $s0, -0x3
        ctx->r6 = ADD32(ctx->r16, -0X3);
            goto L_004249E8;
    }
    goto skip_0;
    // 0x004249D0: addiu       $a2, $s0, -0x3
    ctx->r6 = ADD32(ctx->r16, -0X3);
    skip_0:
    // 0x004249D4: j           L_004249FC
    // 0x004249D8: nop

        goto L_004249FC;
    // 0x004249D8: nop

L_004249DC:
    // 0x004249DC: lbu         $v0, 0xA05($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XA05);
    // 0x004249E0: j           L_004249FC
    // 0x004249E4: slt         $a2, $s0, $v0
    ctx->r6 = SIGNED(ctx->r16) < SIGNED(ctx->r2) ? 1 : 0;
        goto L_004249FC;
    // 0x004249E4: slt         $a2, $s0, $v0
    ctx->r6 = SIGNED(ctx->r16) < SIGNED(ctx->r2) ? 1 : 0;
L_004249E8:
    // 0x004249E8: lbu         $v0, 0xA06($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XA06);
    // 0x004249EC: j           L_004249FC
    // 0x004249F0: slt         $a2, $a2, $v0
    ctx->r6 = SIGNED(ctx->r6) < SIGNED(ctx->r2) ? 1 : 0;
        goto L_004249FC;
    // 0x004249F0: slt         $a2, $a2, $v0
    ctx->r6 = SIGNED(ctx->r6) < SIGNED(ctx->r2) ? 1 : 0;
L_004249F4:
    // 0x004249F4: lbu         $v0, 0x9FC($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X9FC);
    // 0x004249F8: sltu        $a2, $zero, $v0
    ctx->r6 = 0 < ctx->r2 ? 1 : 0;
L_004249FC:
    // 0x004249FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x00424A00: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00424A04: addu        $v0, $a2, $zero
    ctx->r2 = ADD32(ctx->r6, 0);
    // 0x00424A08: jr          $ra
    // 0x00424A0C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00424A0C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0044772C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0044772C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00447730: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x00447734: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x00447738: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x0044773C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00447740: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00447744: lw          $v0, 0x18($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X18);
    // 0x00447748: blez        $v0, L_0044777C
    if (SIGNED(ctx->r2) <= 0) {
        // 0x0044774C: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_0044777C;
    }
    // 0x0044774C: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x00447750: addu        $s1, $s2, $zero
    ctx->r17 = ADD32(ctx->r18, 0);
L_00447754:
    // 0x00447754: lw          $a0, 0x1C($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X1C);
    // 0x00447758: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    // 0x0044775C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x00447760: jal         0x00243414
    // 0x00447764: addiu       $a1, $a0, 0x140
    ctx->r5 = ADD32(ctx->r4, 0X140);
    func_00243414(rdram, ctx);
        goto after_0;
    // 0x00447764: addiu       $a1, $a0, 0x140
    ctx->r5 = ADD32(ctx->r4, 0X140);
    after_0:
    // 0x00447768: lw          $v0, 0x18($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X18);
    // 0x0044776C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x00447770: slt         $v0, $s0, $v0
    ctx->r2 = SIGNED(ctx->r16) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x00447774: bne         $v0, $zero, L_00447754
    if (ctx->r2 != 0) {
        // 0x00447778: nop
    
            goto L_00447754;
    }
    // 0x00447778: nop

L_0044777C:
    // 0x0044777C: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x00447780: addiu       $a0, $a0, 0x7078
    ctx->r4 = ADD32(ctx->r4, 0X7078);
    // 0x00447784: lw          $v0, 0x4F8($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X4F8);
    // 0x00447788: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0044778C: lwc1        $f0, 0x934($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X934);
    // 0x00447790: lwc1        $f1, 0x4($v0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r2, 0X4);
    // 0x00447794: lui         $v0, 0x43
    ctx->r2 = S32(0X43 << 16);
    // 0x00447798: addiu       $v0, $v0, 0x23E8
    ctx->r2 = ADD32(ctx->r2, 0X23E8);
    // 0x0044779C: sw          $v0, 0x530($s2)
    MEM_W(0X530, ctx->r18) = ctx->r2;
    // 0x004477A0: addiu       $v0, $s2, 0x530
    ctx->r2 = ADD32(ctx->r18, 0X530);
    // 0x004477A4: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x004477A8: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x004477AC: sw          $zero, 0xC($v0)
    MEM_W(0XC, ctx->r2) = 0;
    // 0x004477B0: sw          $zero, 0x10($v0)
    MEM_W(0X10, ctx->r2) = 0;
    // 0x004477B4: sw          $zero, 0x14($v0)
    MEM_W(0X14, ctx->r2) = 0;
    // 0x004477B8: jal         0x00225C84
    // 0x004477BC: swc1        $f1, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f_odd[(1 - 1) * 2];
    func_00225C84(rdram, ctx);
        goto after_1;
    // 0x004477BC: swc1        $f1, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f_odd[(1 - 1) * 2];
    after_1:
    // 0x004477C0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x004477C4: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x004477C8: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x004477CC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x004477D0: jr          $ra
    // 0x004477D4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x004477D4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_00260634(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00260634: addiu       $sp, $sp, -0xF0
    ctx->r29 = ADD32(ctx->r29, -0XF0);
    // 0x00260638: sw          $s1, 0xE4($sp)
    MEM_W(0XE4, ctx->r29) = ctx->r17;
    // 0x0026063C: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x00260640: sw          $s0, 0xE0($sp)
    MEM_W(0XE0, ctx->r29) = ctx->r16;
    // 0x00260644: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x00260648: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    // 0x0026064C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x00260650: addu        $v0, $a3, $zero
    ctx->r2 = ADD32(ctx->r7, 0);
    // 0x00260654: sw          $ra, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->r31;
    // 0x00260658: jal         0x00246108
    // 0x0026065C: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    func_00246108(rdram, ctx);
        goto after_0;
    // 0x0026065C: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    after_0:
    // 0x00260660: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x00260664: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x00260668: jal         0x0024599C
    // 0x0026066C: addiu       $a2, $sp, 0xA0
    ctx->r6 = ADD32(ctx->r29, 0XA0);
    func_0024599C(rdram, ctx);
        goto after_1;
    // 0x0026066C: addiu       $a2, $sp, 0xA0
    ctx->r6 = ADD32(ctx->r29, 0XA0);
    after_1:
    // 0x00260670: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x00260674: jal         0x0025EB24
    // 0x00260678: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_0025EB24(rdram, ctx);
        goto after_2;
    // 0x00260678: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_2:
    // 0x0026067C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x00260680: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x00260684: lw          $a3, 0x20($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X20);
    // 0x00260688: jal         0x00245BAC
    // 0x0026068C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_00245BAC(rdram, ctx);
        goto after_3;
    // 0x0026068C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_3:
    // 0x00260690: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x00260694: jal         0x0025EAFC
    // 0x00260698: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_0025EAFC(rdram, ctx);
        goto after_4;
    // 0x00260698: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_4:
    // 0x0026069C: lwc1        $f2, 0x20($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X20);
    // 0x002606A0: mtc1        $zero, $f1
    ctx->f_odd[(1 - 1) * 2] = 0;
    // 0x002606A4: c.lt.s      $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f2.fl < ctx->f1.fl;
    // 0x002606A8: nop

    // 0x002606AC: bc1f        L_002606D0
    if (!c1cs) {
        // 0x002606B0: mov.s       $f1, $f0
        CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    ctx->f1.fl = ctx->f0.fl;
            goto L_002606D0;
    }
    // 0x002606B0: mov.s       $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    ctx->f1.fl = ctx->f0.fl;
    // 0x002606B4: neg.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = -ctx->f2.fl;
    // 0x002606B8: c.le.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl <= ctx->f1.fl;
    // 0x002606BC: nop

    // 0x002606C0: bc1t        L_002606E0
    if (c1cs) {
        // 0x002606C4: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_002606E0;
    }
    // 0x002606C4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x002606C8: j           L_0026071C
    // 0x002606CC: nop

        goto L_0026071C;
    // 0x002606CC: nop

L_002606D0:
    // 0x002606D0: c.le.s      $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f2.fl <= ctx->f1.fl;
    // 0x002606D4: nop

    // 0x002606D8: bc1f        L_0026071C
    if (!c1cs) {
        // 0x002606DC: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_0026071C;
    }
    // 0x002606DC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
L_002606E0:
    // 0x002606E0: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x002606E4: jal         0x0025D030
    // 0x002606E8: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    func_0025D030(rdram, ctx);
        goto after_5;
    // 0x002606E8: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    after_5:
    // 0x002606EC: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    // 0x002606F0: beq         $a2, $zero, L_00260708
    if (ctx->r6 == 0) {
        // 0x002606F4: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_00260708;
    }
    // 0x002606F4: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x002606F8: sb          $v0, 0x35($s0)
    MEM_B(0X35, ctx->r16) = ctx->r2;
    // 0x002606FC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x00260700: j           L_00260714
    // 0x00260704: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
        goto L_00260714;
    // 0x00260704: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
L_00260708:
    // 0x00260708: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0026070C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x00260710: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
L_00260714:
    // 0x00260714: jal         0x00243414
    // 0x00260718: nop

    func_00243414(rdram, ctx);
        goto after_6;
    // 0x00260718: nop

    after_6:
L_0026071C:
    // 0x0026071C: lw          $ra, 0xE8($sp)
    ctx->r31 = MEM_W(ctx->r29, 0XE8);
    // 0x00260720: lw          $s1, 0xE4($sp)
    ctx->r17 = MEM_W(ctx->r29, 0XE4);
    // 0x00260724: lw          $s0, 0xE0($sp)
    ctx->r16 = MEM_W(ctx->r29, 0XE0);
    // 0x00260728: jr          $ra
    // 0x0026072C: addiu       $sp, $sp, 0xF0
    ctx->r29 = ADD32(ctx->r29, 0XF0);
    return;
    // 0x0026072C: addiu       $sp, $sp, 0xF0
    ctx->r29 = ADD32(ctx->r29, 0XF0);
;}
RECOMP_FUNC void func_0042C4B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0042C4B8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0042C4BC: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x0042C4C0: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x0042C4C4: addu        $at, $a0, $at
    ctx->r1 = ADD32(ctx->r4, ctx->r1);
    // 0x0042C4C8: lw          $v0, -0x7058($at)
    ctx->r2 = MEM_W(ctx->r1, -0X7058);
    // 0x0042C4CC: beq         $a1, $v0, L_0042C4E8
    if (ctx->r5 == ctx->r2) {
        // 0x0042C4D0: nor         $a1, $zero, $a1
        ctx->r5 = ~(0 | ctx->r5);
            goto L_0042C4E8;
    }
    // 0x0042C4D0: nor         $a1, $zero, $a1
    ctx->r5 = ~(0 | ctx->r5);
    // 0x0042C4D4: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x0042C4D8: addu        $at, $a0, $at
    ctx->r1 = ADD32(ctx->r4, ctx->r1);
    // 0x0042C4DC: sw          $zero, -0x7048($at)
    MEM_W(-0X7048, ctx->r1) = 0;
    // 0x0042C4E0: jal         0x0042C700
    // 0x0042C4E4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_0042C700(rdram, ctx);
        goto after_0;
    // 0x0042C4E4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
L_0042C4E8:
    // 0x0042C4E8: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x0042C4EC: jr          $ra
    // 0x0042C4F0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0042C4F0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00256804(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00256804: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x00256808: addiu       $a3, $a3, -0x5350
    ctx->r7 = ADD32(ctx->r7, -0X5350);
    // 0x0025680C: lw          $v0, 0x24($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X24);
    // 0x00256810: beq         $v0, $zero, L_00256894
    if (ctx->r2 == 0) {
        // 0x00256814: nop
    
            goto L_00256894;
    }
    // 0x00256814: nop

    // 0x00256818: lw          $v1, 0xBF4($a0)
    ctx->r3 = MEM_W(ctx->r4, 0XBF4);
    // 0x0025681C: beq         $v1, $zero, L_00256834
    if (ctx->r3 == 0) {
        // 0x00256820: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_00256834;
    }
    // 0x00256820: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00256824: beq         $v1, $v0, L_00256838
    if (ctx->r3 == ctx->r2) {
        // 0x00256828: addiu       $a3, $a3, 0x30
        ctx->r7 = ADD32(ctx->r7, 0X30);
            goto L_00256838;
    }
    // 0x00256828: addiu       $a3, $a3, 0x30
    ctx->r7 = ADD32(ctx->r7, 0X30);
    // 0x0025682C: jr          $ra
    // 0x00256830: nop

    return;
    // 0x00256830: nop

L_00256834:
    // 0x00256834: addiu       $a3, $a3, 0x2C
    ctx->r7 = ADD32(ctx->r7, 0X2C);
L_00256838:
    // 0x00256838: beq         $a2, $v0, L_00256878
    if (ctx->r6 == ctx->r2) {
        // 0x0025683C: slti        $v0, $a2, 0x2
        ctx->r2 = SIGNED(ctx->r6) < 0X2 ? 1 : 0;
            goto L_00256878;
    }
    // 0x0025683C: slti        $v0, $a2, 0x2
    ctx->r2 = SIGNED(ctx->r6) < 0X2 ? 1 : 0;
    // 0x00256840: beql        $v0, $zero, L_00256858
    if (ctx->r2 == 0) {
        // 0x00256844: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_00256858;
    }
    goto skip_0;
    // 0x00256844: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x00256848: beq         $a2, $zero, L_00256868
    if (ctx->r6 == 0) {
        // 0x0025684C: nop
    
            goto L_00256868;
    }
    // 0x0025684C: nop

    // 0x00256850: jr          $ra
    // 0x00256854: nop

    return;
    // 0x00256854: nop

L_00256858:
    // 0x00256858: beq         $a2, $v0, L_00256878
    if (ctx->r6 == ctx->r2) {
        // 0x0025685C: nop
    
            goto L_00256878;
    }
    // 0x0025685C: nop

    // 0x00256860: jr          $ra
    // 0x00256864: nop

    return;
    // 0x00256864: nop

L_00256868:
    // 0x00256868: lw          $v0, 0x0($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X0);
    // 0x0025686C: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x00256870: jr          $ra
    // 0x00256874: sw          $v0, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r2;
    return;
    // 0x00256874: sw          $v0, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r2;
L_00256878:
    // 0x00256878: lw          $v1, 0xBF4($a1)
    ctx->r3 = MEM_W(ctx->r5, 0XBF4);
    // 0x0025687C: lw          $v0, 0xBF4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XBF4);
    // 0x00256880: beq         $v1, $v0, L_00256894
    if (ctx->r3 == ctx->r2) {
        // 0x00256884: nop
    
            goto L_00256894;
    }
    // 0x00256884: nop

    // 0x00256888: lw          $v0, 0x0($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X0);
    // 0x0025688C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x00256890: sw          $v0, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r2;
L_00256894:
    // 0x00256894: jr          $ra
    // 0x00256898: nop

    return;
    // 0x00256898: nop

;}
RECOMP_FUNC void func_00403774(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00403774: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x00403778: lw          $v0, -0xA0C($v0)
    ctx->r2 = MEM_W(ctx->r2, -0XA0C);
    // 0x0040377C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00403780: beq         $v0, $zero, L_004037A0
    if (ctx->r2 == 0) {
        // 0x00403784: sw          $ra, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r31;
            goto L_004037A0;
    }
    // 0x00403784: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x00403788: lui         $a3, 0x3F49
    ctx->r7 = S32(0X3F49 << 16);
    // 0x0040378C: ori         $a3, $a3, 0xFDC
    ctx->r7 = ctx->r7 | 0XFDC;
    // 0x00403790: jal         0x002451AC
    // 0x00403794: nop

    func_002451AC(rdram, ctx);
        goto after_0;
    // 0x00403794: nop

    after_0:
    // 0x00403798: j           L_004037A4
    // 0x0040379C: nop

        goto L_004037A4;
    // 0x0040379C: nop

L_004037A0:
    // 0x004037A0: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_004037A4:
    // 0x004037A4: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x004037A8: jr          $ra
    // 0x004037AC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x004037AC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00441CF4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_00408DB8:
    // 0x00441CF4: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00441CF8: lwc1        $f12, 0x5A8($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X5A8);
    // 0x00441CFC: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x00441D00: sw          $ra, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r31;
    // 0x00441D04: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x00441D08: jal         0x0021149C
    // 0x00441D0C: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    func_0021149C(rdram, ctx);
        goto after_0;
    // 0x00441D0C: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    after_0:
    // 0x00441D10: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00441D14: lwc1        $f1, 0x5AC($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X5AC);
    // 0x00441D18: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x00441D1C: nop

    // 0x00441D20: bc1t        L_00441DB8
    if (c1cs) {
        // 0x00441D24: nop
    
            goto L_00441DB8;
    }
    // 0x00441D24: nop

    // 0x00441D28: lui         $s0, 0x8011
    ctx->r16 = S32(0X8011 << 16);
    // 0x00441D2C: lw          $s0, -0x14C($s0)
    ctx->r16 = MEM_W(ctx->r16, -0X14C);
    // 0x00441D30: beq         $s0, $zero, L_00441DB8
    if (ctx->r16 == 0) {
        // 0x00441D34: lui         $s1, 0x10
        ctx->r17 = S32(0X10 << 16);
            goto L_00441DB8;
    }
    // 0x00441D34: lui         $s1, 0x10
    ctx->r17 = S32(0X10 << 16);
    // 0x00441D38: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_00441D3C:
    // 0x00441D3C: lw          $v0, 0x14($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X14);
    // 0x00441D40: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x00441D44: bne         $v0, $v1, L_00441DAC
    if (ctx->r2 != ctx->r3) {
        // 0x00441D48: nop
    
            goto L_00441DAC;
    }
    // 0x00441D48: nop

    // 0x00441D4C: lw          $v0, 0x144($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X144);
    // 0x00441D50: beq         $v0, $zero, L_00441DAC
    if (ctx->r2 == 0) {
        // 0x00441D54: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_00441DAC;
    }
    // 0x00441D54: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00441D58: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x00441D5C: lw          $v0, 0xC($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC);
    // 0x00441D60: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x00441D64: lw          $a2, 0x4($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X4);
    // 0x00441D68: lw          $a3, 0x8($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X8);
    // 0x00441D6C: jal         0x00246690
    // 0x00441D70: addiu       $a1, $zero, 0x17C
    ctx->r5 = ADD32(0, 0X17C);
    func_00246690(rdram, ctx);
        goto after_1;
    // 0x00441D70: addiu       $a1, $zero, 0x17C
    ctx->r5 = ADD32(0, 0X17C);
    after_1:
    // 0x00441D74: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    // 0x00441D78: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x00441D7C: lui         $a3, 0x424C
    ctx->r7 = S32(0X424C << 16);
    // 0x00441D80: ori         $a3, $a3, 0xCCCC
    ctx->r7 = ctx->r7 | 0XCCCC;
    // 0x00441D84: ori         $a2, $zero, 0xFF00
    ctx->r6 = 0 | 0XFF00;
    // 0x00441D88: sw          $s1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r17;
    // 0x00441D8C: jal         0x00245828
    // 0x00441D90: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    func_00245828(rdram, ctx);
        goto after_2;
    // 0x00441D90: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    after_2:
    // 0x00441D94: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00441D98: addiu       $a1, $a0, 0x140
    ctx->r5 = ADD32(ctx->r4, 0X140);
    // 0x00441D9C: jal         0x0025B2D4
    // 0x00441DA0: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    func_0025B2D4(rdram, ctx);
        goto after_3;
    // 0x00441DA0: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    after_3:
    // 0x00441DA4: j           L_00408DB8
    // 0x00441DA8: nop

    entry_00408DB8(rdram, ctx);
    return;
    // 0x00441DA8: nop

L_00441DAC:
    // 0x00441DAC: lw          $s0, 0x28C($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X28C);
    // 0x00441DB0: bne         $s0, $zero, L_00441D3C
    if (ctx->r16 != 0) {
        // 0x00441DB4: nop
    
            goto L_00441D3C;
    }
    // 0x00441DB4: nop

L_00441DB8:
    // 0x00441DB8: lw          $ra, 0x38($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X38);
    // 0x00441DBC: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x00441DC0: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x00441DC4: jr          $ra
    // 0x00441DC8: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x00441DC8: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_0024F174(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0024F174: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x0024F178: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x0024F17C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x0024F180: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x0024F184: addu        $s2, $a1, $zero
    ctx->r18 = ADD32(ctx->r5, 0);
    // 0x0024F188: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x0024F18C: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x0024F190: sw          $s4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r20;
    // 0x0024F194: sw          $s3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r19;
    // 0x0024F198: sdc1        $f20, 0x40($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X40, ctx->r29);
    // 0x0024F19C: jal         0x00284174
    // 0x0024F1A0: addu        $s1, $a2, $zero
    ctx->r17 = ADD32(ctx->r6, 0);
    func_00284174(rdram, ctx);
        goto after_0;
    // 0x0024F1A0: addu        $s1, $a2, $zero
    ctx->r17 = ADD32(ctx->r6, 0);
    after_0:
    // 0x0024F1A4: bne         $v0, $zero, L_0024F634
    if (ctx->r2 != 0) {
        // 0x0024F1A8: addu        $s3, $zero, $zero
        ctx->r19 = ADD32(0, 0);
            goto L_0024F634;
    }
    // 0x0024F1A8: addu        $s3, $zero, $zero
    ctx->r19 = ADD32(0, 0);
    // 0x0024F1AC: lwc1        $f1, 0xA94($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0XA94);
    // 0x0024F1B0: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x0024F1B4: c.le.s      $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f1.fl <= ctx->f2.fl;
    // 0x0024F1B8: nop

    // 0x0024F1BC: bc1t        L_0024F1D8
    if (c1cs) {
        // 0x0024F1C0: addiu       $s4, $zero, 0x1
        ctx->r20 = ADD32(0, 0X1);
            goto L_0024F1D8;
    }
    // 0x0024F1C0: addiu       $s4, $zero, 0x1
    ctx->r20 = ADD32(0, 0X1);
    // 0x0024F1C4: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0024F1C8: lwc1        $f0, 0x6D28($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6D28);
    // 0x0024F1CC: sub.s       $f0, $f1, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f1.fl - ctx->f0.fl;
    // 0x0024F1D0: addu        $s4, $s3, $zero
    ctx->r20 = ADD32(ctx->r19, 0);
    // 0x0024F1D4: swc1        $f0, 0xA94($s0)
    MEM_W(0XA94, ctx->r16) = ctx->f0.u32l;
L_0024F1D8:
    // 0x0024F1D8: lwc1        $f0, 0xA78($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0XA78);
    // 0x0024F1DC: lwc1        $f1, 0x4($s1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r17, 0X4);
    // 0x0024F1E0: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x0024F1E4: nop

    // 0x0024F1E8: bc1f        L_0024F20C
    if (!c1cs) {
        // 0x0024F1EC: nop
    
            goto L_0024F20C;
    }
    // 0x0024F1EC: nop

    // 0x0024F1F0: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x0024F1F4: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x0024F1F8: nop

    // 0x0024F1FC: bc1f        L_0024F238
    if (!c1cs) {
        // 0x0024F200: nop
    
            goto L_0024F238;
    }
    // 0x0024F200: nop

    // 0x0024F204: j           L_0024F21C
    // 0x0024F208: nop

        goto L_0024F21C;
    // 0x0024F208: nop

L_0024F20C:
    // 0x0024F20C: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x0024F210: nop

    // 0x0024F214: bc1f        L_0024F238
    if (!c1cs) {
        // 0x0024F218: nop
    
            goto L_0024F238;
    }
    // 0x0024F218: nop

L_0024F21C:
    // 0x0024F21C: lwc1        $f0, 0x8($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X8);
    // 0x0024F220: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0024F224: lwc1        $f14, 0x6DD8($at)
    ctx->f14.u32l = MEM_W(ctx->r1, 0X6DD8);
    // 0x0024F228: mul.s       $f14, $f0, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = MUL_S(ctx->f0.fl, ctx->f14.fl);
    // 0x0024F22C: lwc1        $f12, 0xA78($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0XA78);
    // 0x0024F230: j           L_0024F2A8
    // 0x0024F234: nop

        goto L_0024F2A8;
    // 0x0024F234: nop

L_0024F238:
    // 0x0024F238: lwc1        $f1, 0xA60($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0XA60);
    // 0x0024F23C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x0024F240: c.eq.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl == ctx->f0.fl;
    // 0x0024F244: nop

    // 0x0024F248: bc1t        L_0024F2A0
    if (c1cs) {
        // 0x0024F24C: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_0024F2A0;
    }
    // 0x0024F24C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x0024F250: lw          $v1, 0xB8C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XB8C);
    // 0x0024F254: beq         $v1, $v0, L_0024F2A0
    if (ctx->r3 == ctx->r2) {
        // 0x0024F258: nop
    
            goto L_0024F2A0;
    }
    // 0x0024F258: nop

    // 0x0024F25C: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x0024F260: lwc1        $f0, 0x0($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X0);
    // 0x0024F264: lwc1        $f2, 0x4($s1)
    ctx->f2.u32l = MEM_W(ctx->r17, 0X4);
    // 0x0024F268: mul.s       $f14, $f1, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x0024F26C: bc1f        L_0024F284
    if (!c1cs) {
        // 0x0024F270: nop
    
            goto L_0024F284;
    }
    // 0x0024F270: nop

    // 0x0024F274: neg.s       $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = -ctx->f1.fl;
    // 0x0024F278: mul.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f2.fl);
    // 0x0024F27C: j           L_0024F288
    // 0x0024F280: nop

        goto L_0024F288;
    // 0x0024F280: nop

L_0024F284:
    // 0x0024F284: mul.s       $f0, $f1, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = MUL_S(ctx->f1.fl, ctx->f2.fl);
L_0024F288:
    // 0x0024F288: lwc1        $f12, 0xA78($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0XA78);
    // 0x0024F28C: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x0024F290: jal         0x0021160C
    // 0x0024F294: nop

    func_0021160C(rdram, ctx);
        goto after_1;
    // 0x0024F294: nop

    after_1:
    // 0x0024F298: j           L_0024F2B4
    // 0x0024F29C: swc1        $f0, 0xA78($s0)
    MEM_W(0XA78, ctx->r16) = ctx->f0.u32l;
        goto L_0024F2B4;
    // 0x0024F29C: swc1        $f0, 0xA78($s0)
    MEM_W(0XA78, ctx->r16) = ctx->f0.u32l;
L_0024F2A0:
    // 0x0024F2A0: lwc1        $f12, 0xA78($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0XA78);
    // 0x0024F2A4: lwc1        $f14, 0x8($s1)
    ctx->f14.u32l = MEM_W(ctx->r17, 0X8);
L_0024F2A8:
    // 0x0024F2A8: jal         0x0021170C
    // 0x0024F2AC: nop

    func_0021170C(rdram, ctx);
        goto after_2;
    // 0x0024F2AC: nop

    after_2:
    // 0x0024F2B0: swc1        $f0, 0xA78($s0)
    MEM_W(0XA78, ctx->r16) = ctx->f0.u32l;
L_0024F2B4:
    // 0x0024F2B4: lwc1        $f12, 0x50($s2)
    ctx->f12.u32l = MEM_W(ctx->r18, 0X50);
    // 0x0024F2B8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0024F2BC: lwc1        $f20, 0x6DDC($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X6DDC);
    // 0x0024F2C0: jal         0x002982F0
    // 0x0024F2C4: add.s       $f12, $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f20.fl;
    func_002982F0(rdram, ctx);
        goto after_3;
    // 0x0024F2C4: add.s       $f12, $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f20.fl;
    after_3:
    // 0x0024F2C8: lwc1        $f1, 0xA78($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0XA78);
    // 0x0024F2CC: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x0024F2D0: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x0024F2D4: swc1        $f1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    // 0x0024F2D8: lwc1        $f12, 0x50($s2)
    ctx->f12.u32l = MEM_W(ctx->r18, 0X50);
    // 0x0024F2DC: jal         0x002974C0
    // 0x0024F2E0: add.s       $f12, $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f20.fl;
    func_002974C0(rdram, ctx);
        goto after_4;
    // 0x0024F2E0: add.s       $f12, $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f20.fl;
    after_4:
    // 0x0024F2E4: lwc1        $f1, 0xA78($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0XA78);
    // 0x0024F2E8: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x0024F2EC: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x0024F2F0: swc1        $f1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    // 0x0024F2F4: lwc1        $f1, 0xA7C($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0XA7C);
    // 0x0024F2F8: lwc1        $f2, 0x10($s1)
    ctx->f2.u32l = MEM_W(ctx->r17, 0X10);
    // 0x0024F2FC: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x0024F300: nop

    // 0x0024F304: bc1f        L_0024F328
    if (!c1cs) {
        // 0x0024F308: nop
    
            goto L_0024F328;
    }
    // 0x0024F308: nop

    // 0x0024F30C: neg.s       $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = -ctx->f1.fl;
    // 0x0024F310: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x0024F314: nop

    // 0x0024F318: bc1f        L_0024F354
    if (!c1cs) {
        // 0x0024F31C: nop
    
            goto L_0024F354;
    }
    // 0x0024F31C: nop

    // 0x0024F320: j           L_0024F338
    // 0x0024F324: nop

        goto L_0024F338;
    // 0x0024F324: nop

L_0024F328:
    // 0x0024F328: c.lt.s      $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f2.fl < ctx->f1.fl;
    // 0x0024F32C: nop

    // 0x0024F330: bc1f        L_0024F354
    if (!c1cs) {
        // 0x0024F334: nop
    
            goto L_0024F354;
    }
    // 0x0024F334: nop

L_0024F338:
    // 0x0024F338: lwc1        $f0, 0x14($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X14);
    // 0x0024F33C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0024F340: lwc1        $f14, 0x6DE0($at)
    ctx->f14.u32l = MEM_W(ctx->r1, 0X6DE0);
    // 0x0024F344: mul.s       $f14, $f0, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = MUL_S(ctx->f0.fl, ctx->f14.fl);
    // 0x0024F348: lwc1        $f12, 0xA7C($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0XA7C);
    // 0x0024F34C: j           L_0024F3B8
    // 0x0024F350: nop

        goto L_0024F3B8;
    // 0x0024F350: nop

L_0024F354:
    // 0x0024F354: lwc1        $f1, 0xA5C($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0XA5C);
    // 0x0024F358: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x0024F35C: c.eq.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl == ctx->f0.fl;
    // 0x0024F360: nop

    // 0x0024F364: bc1t        L_0024F3B0
    if (c1cs) {
        // 0x0024F368: nop
    
            goto L_0024F3B0;
    }
    // 0x0024F368: nop

    // 0x0024F36C: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x0024F370: lwc1        $f0, 0xC($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0XC);
    // 0x0024F374: lwc1        $f2, 0x10($s1)
    ctx->f2.u32l = MEM_W(ctx->r17, 0X10);
    // 0x0024F378: mul.s       $f14, $f1, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x0024F37C: bc1f        L_0024F394
    if (!c1cs) {
        // 0x0024F380: nop
    
            goto L_0024F394;
    }
    // 0x0024F380: nop

    // 0x0024F384: neg.s       $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = -ctx->f1.fl;
    // 0x0024F388: mul.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f2.fl);
    // 0x0024F38C: j           L_0024F398
    // 0x0024F390: nop

        goto L_0024F398;
    // 0x0024F390: nop

L_0024F394:
    // 0x0024F394: mul.s       $f0, $f1, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = MUL_S(ctx->f1.fl, ctx->f2.fl);
L_0024F398:
    // 0x0024F398: lwc1        $f12, 0xA7C($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0XA7C);
    // 0x0024F39C: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x0024F3A0: jal         0x0021160C
    // 0x0024F3A4: nop

    func_0021160C(rdram, ctx);
        goto after_5;
    // 0x0024F3A4: nop

    after_5:
    // 0x0024F3A8: j           L_0024F3C4
    // 0x0024F3AC: swc1        $f0, 0xA7C($s0)
    MEM_W(0XA7C, ctx->r16) = ctx->f0.u32l;
        goto L_0024F3C4;
    // 0x0024F3AC: swc1        $f0, 0xA7C($s0)
    MEM_W(0XA7C, ctx->r16) = ctx->f0.u32l;
L_0024F3B0:
    // 0x0024F3B0: lwc1        $f12, 0xA7C($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0XA7C);
    // 0x0024F3B4: lwc1        $f14, 0x14($s1)
    ctx->f14.u32l = MEM_W(ctx->r17, 0X14);
L_0024F3B8:
    // 0x0024F3B8: jal         0x0021170C
    // 0x0024F3BC: nop

    func_0021170C(rdram, ctx);
        goto after_6;
    // 0x0024F3BC: nop

    after_6:
    // 0x0024F3C0: swc1        $f0, 0xA7C($s0)
    MEM_W(0XA7C, ctx->r16) = ctx->f0.u32l;
L_0024F3C4:
    // 0x0024F3C4: lwc1        $f12, 0x50($s2)
    ctx->f12.u32l = MEM_W(ctx->r18, 0X50);
    // 0x0024F3C8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0024F3CC: lwc1        $f20, 0x6DE4($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X6DE4);
    // 0x0024F3D0: jal         0x002982F0
    // 0x0024F3D4: sub.s       $f12, $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f12.fl = ctx->f12.fl - ctx->f20.fl;
    func_002982F0(rdram, ctx);
        goto after_7;
    // 0x0024F3D4: sub.s       $f12, $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f12.fl = ctx->f12.fl - ctx->f20.fl;
    after_7:
    // 0x0024F3D8: lwc1        $f1, 0xA7C($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0XA7C);
    // 0x0024F3DC: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x0024F3E0: lwc1        $f0, 0x18($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X18);
    // 0x0024F3E4: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x0024F3E8: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    // 0x0024F3EC: lwc1        $f12, 0x50($s2)
    ctx->f12.u32l = MEM_W(ctx->r18, 0X50);
    // 0x0024F3F0: jal         0x002974C0
    // 0x0024F3F4: sub.s       $f12, $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f12.fl = ctx->f12.fl - ctx->f20.fl;
    func_002974C0(rdram, ctx);
        goto after_8;
    // 0x0024F3F4: sub.s       $f12, $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f12.fl = ctx->f12.fl - ctx->f20.fl;
    after_8:
    // 0x0024F3F8: lwc1        $f1, 0xA7C($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0XA7C);
    // 0x0024F3FC: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x0024F400: lwc1        $f0, 0x20($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X20);
    // 0x0024F404: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x0024F408: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x0024F40C: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    // 0x0024F410: lwc1        $f1, 0xA7C($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0XA7C);
    // 0x0024F414: c.lt.s      $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f1.fl < ctx->f2.fl;
    // 0x0024F418: nop

    // 0x0024F41C: bc1tl       L_0024F424
    if (c1cs) {
        // 0x0024F420: neg.s       $f1, $f1
        CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = -ctx->f1.fl;
            goto L_0024F424;
    }
    goto skip_0;
    // 0x0024F420: neg.s       $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = -ctx->f1.fl;
    skip_0:
L_0024F424:
    // 0x0024F424: lwc1        $f0, 0xA78($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0XA78);
    // 0x0024F428: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x0024F42C: nop

    // 0x0024F430: bc1f        L_0024F454
    if (!c1cs) {
        // 0x0024F434: nop
    
            goto L_0024F454;
    }
    // 0x0024F434: nop

    // 0x0024F438: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x0024F43C: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x0024F440: nop

    // 0x0024F444: bc1f        L_0024F470
    if (!c1cs) {
        // 0x0024F448: nop
    
            goto L_0024F470;
    }
    // 0x0024F448: nop

    // 0x0024F44C: j           L_0024F464
    // 0x0024F450: nop

        goto L_0024F464;
    // 0x0024F450: nop

L_0024F454:
    // 0x0024F454: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x0024F458: nop

    // 0x0024F45C: bc1f        L_0024F470
    if (!c1cs) {
        // 0x0024F460: nop
    
            goto L_0024F470;
    }
    // 0x0024F460: nop

L_0024F464:
    // 0x0024F464: lw          $a1, 0x10($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X10);
    // 0x0024F468: j           L_0024F474
    // 0x0024F46C: nop

        goto L_0024F474;
    // 0x0024F46C: nop

L_0024F470:
    // 0x0024F470: lw          $a1, 0x4($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X4);
L_0024F474:
    // 0x0024F474: jal         0x0020F70C
    // 0x0024F478: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    func_0020F70C(rdram, ctx);
        goto after_9;
    // 0x0024F478: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    after_9:
    // 0x0024F47C: beq         $s4, $zero, L_0024F4C4
    if (ctx->r20 == 0) {
        // 0x0024F480: nop
    
            goto L_0024F4C4;
    }
    // 0x0024F480: nop

    // 0x0024F484: lw          $v1, 0xA68($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XA68);
    // 0x0024F488: andi        $v0, $v1, 0x8
    ctx->r2 = ctx->r3 & 0X8;
    // 0x0024F48C: beq         $v0, $zero, L_0024F4A0
    if (ctx->r2 == 0) {
        // 0x0024F490: andi        $v0, $v1, 0x4
        ctx->r2 = ctx->r3 & 0X4;
            goto L_0024F4A0;
    }
    // 0x0024F490: andi        $v0, $v1, 0x4
    ctx->r2 = ctx->r3 & 0X4;
    // 0x0024F494: lwc1        $f0, 0x18($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X18);
    // 0x0024F498: j           L_0024F4D4
    // 0x0024F49C: addiu       $s3, $zero, 0x1
    ctx->r19 = ADD32(0, 0X1);
        goto L_0024F4D4;
    // 0x0024F49C: addiu       $s3, $zero, 0x1
    ctx->r19 = ADD32(0, 0X1);
L_0024F4A0:
    // 0x0024F4A0: beq         $v0, $zero, L_0024F4C4
    if (ctx->r2 == 0) {
        // 0x0024F4A4: nop
    
            goto L_0024F4C4;
    }
    // 0x0024F4A4: nop

    // 0x0024F4A8: lwc1        $f0, 0x18($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X18);
    // 0x0024F4AC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0024F4B0: lwc1        $f1, 0x6DE8($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X6DE8);
    // 0x0024F4B4: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x0024F4B8: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0024F4BC: j           L_0024F4D4
    // 0x0024F4C0: addiu       $s3, $zero, 0x1
    ctx->r19 = ADD32(0, 0X1);
        goto L_0024F4D4;
    // 0x0024F4C0: addiu       $s3, $zero, 0x1
    ctx->r19 = ADD32(0, 0X1);
L_0024F4C4:
    // 0x0024F4C4: lwc1        $f12, 0xA8C($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0XA8C);
    // 0x0024F4C8: lwc1        $f14, 0x1C($s1)
    ctx->f14.u32l = MEM_W(ctx->r17, 0X1C);
    // 0x0024F4CC: jal         0x0021170C
    // 0x0024F4D0: nop

    func_0021170C(rdram, ctx);
        goto after_10;
    // 0x0024F4D0: nop

    after_10:
L_0024F4D4:
    // 0x0024F4D4: swc1        $f0, 0xA8C($s0)
    MEM_W(0XA8C, ctx->r16) = ctx->f0.u32l;
    // 0x0024F4D8: lwc1        $f12, 0x50($s2)
    ctx->f12.u32l = MEM_W(ctx->r18, 0X50);
    // 0x0024F4DC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0024F4E0: lwc1        $f20, 0x6DEC($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X6DEC);
    // 0x0024F4E4: jal         0x002982F0
    // 0x0024F4E8: add.s       $f12, $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f20.fl;
    func_002982F0(rdram, ctx);
        goto after_11;
    // 0x0024F4E8: add.s       $f12, $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f20.fl;
    after_11:
    // 0x0024F4EC: lwc1        $f1, 0xA8C($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0XA8C);
    // 0x0024F4F0: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x0024F4F4: lwc1        $f0, 0x18($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X18);
    // 0x0024F4F8: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x0024F4FC: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    // 0x0024F500: lwc1        $f12, 0x50($s2)
    ctx->f12.u32l = MEM_W(ctx->r18, 0X50);
    // 0x0024F504: jal         0x002974C0
    // 0x0024F508: add.s       $f12, $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f20.fl;
    func_002974C0(rdram, ctx);
        goto after_12;
    // 0x0024F508: add.s       $f12, $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f20.fl;
    after_12:
    // 0x0024F50C: lwc1        $f1, 0xA8C($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0XA8C);
    // 0x0024F510: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x0024F514: lwc1        $f0, 0x20($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X20);
    // 0x0024F518: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x0024F51C: beq         $s4, $zero, L_0024F570
    if (ctx->r20 == 0) {
        // 0x0024F520: swc1        $f0, 0x20($sp)
        MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
            goto L_0024F570;
    }
    // 0x0024F520: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    // 0x0024F524: lw          $v1, 0xA70($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XA70);
    // 0x0024F528: andi        $v0, $v1, 0x1
    ctx->r2 = ctx->r3 & 0X1;
    // 0x0024F52C: beq         $v0, $zero, L_0024F54C
    if (ctx->r2 == 0) {
        // 0x0024F530: andi        $v0, $v1, 0x2
        ctx->r2 = ctx->r3 & 0X2;
            goto L_0024F54C;
    }
    // 0x0024F530: andi        $v0, $v1, 0x2
    ctx->r2 = ctx->r3 & 0X2;
    // 0x0024F534: lwc1        $f0, 0x18($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X18);
    // 0x0024F538: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0024F53C: lwc1        $f1, 0x6DF0($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X6DF0);
    // 0x0024F540: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0024F544: j           L_0024F58C
    // 0x0024F548: addiu       $s3, $zero, 0x1
    ctx->r19 = ADD32(0, 0X1);
        goto L_0024F58C;
    // 0x0024F548: addiu       $s3, $zero, 0x1
    ctx->r19 = ADD32(0, 0X1);
L_0024F54C:
    // 0x0024F54C: beq         $v0, $zero, L_0024F570
    if (ctx->r2 == 0) {
        // 0x0024F550: nop
    
            goto L_0024F570;
    }
    // 0x0024F550: nop

    // 0x0024F554: lwc1        $f0, 0x18($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X18);
    // 0x0024F558: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0024F55C: lwc1        $f1, 0x6DF4($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X6DF4);
    // 0x0024F560: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x0024F564: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0024F568: j           L_0024F58C
    // 0x0024F56C: addiu       $s3, $zero, 0x1
    ctx->r19 = ADD32(0, 0X1);
        goto L_0024F58C;
    // 0x0024F56C: addiu       $s3, $zero, 0x1
    ctx->r19 = ADD32(0, 0X1);
L_0024F570:
    // 0x0024F570: lwc1        $f0, 0x1C($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X1C);
    // 0x0024F574: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0024F578: lwc1        $f14, 0x6DF8($at)
    ctx->f14.u32l = MEM_W(ctx->r1, 0X6DF8);
    // 0x0024F57C: mul.s       $f14, $f0, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = MUL_S(ctx->f0.fl, ctx->f14.fl);
    // 0x0024F580: lwc1        $f12, 0xA90($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0XA90);
    // 0x0024F584: jal         0x0021170C
    // 0x0024F588: nop

    func_0021170C(rdram, ctx);
        goto after_13;
    // 0x0024F588: nop

    after_13:
L_0024F58C:
    // 0x0024F58C: swc1        $f0, 0xA90($s0)
    MEM_W(0XA90, ctx->r16) = ctx->f0.u32l;
    // 0x0024F590: lwc1        $f12, 0x50($s2)
    ctx->f12.u32l = MEM_W(ctx->r18, 0X50);
    // 0x0024F594: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0024F598: lwc1        $f20, 0x6DFC($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X6DFC);
    // 0x0024F59C: jal         0x002982F0
    // 0x0024F5A0: sub.s       $f12, $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f12.fl = ctx->f12.fl - ctx->f20.fl;
    func_002982F0(rdram, ctx);
        goto after_14;
    // 0x0024F5A0: sub.s       $f12, $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f12.fl = ctx->f12.fl - ctx->f20.fl;
    after_14:
    // 0x0024F5A4: lwc1        $f1, 0xA90($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0XA90);
    // 0x0024F5A8: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x0024F5AC: lwc1        $f0, 0x18($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X18);
    // 0x0024F5B0: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x0024F5B4: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    // 0x0024F5B8: lwc1        $f12, 0x50($s2)
    ctx->f12.u32l = MEM_W(ctx->r18, 0X50);
    // 0x0024F5BC: jal         0x002974C0
    // 0x0024F5C0: sub.s       $f12, $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f12.fl = ctx->f12.fl - ctx->f20.fl;
    func_002974C0(rdram, ctx);
        goto after_15;
    // 0x0024F5C0: sub.s       $f12, $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f12.fl = ctx->f12.fl - ctx->f20.fl;
    after_15:
    // 0x0024F5C4: lwc1        $f1, 0xA90($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0XA90);
    // 0x0024F5C8: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x0024F5CC: lwc1        $f0, 0x20($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X20);
    // 0x0024F5D0: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x0024F5D4: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    // 0x0024F5D8: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    // 0x0024F5DC: lw          $a2, 0xA24($s0)
    ctx->r6 = MEM_W(ctx->r16, 0XA24);
    // 0x0024F5E0: jal         0x0020EF60
    // 0x0024F5E4: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    func_0020EF60(rdram, ctx);
        goto after_16;
    // 0x0024F5E4: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    after_16:
    // 0x0024F5E8: addiu       $a0, $s0, 0xAA0
    ctx->r4 = ADD32(ctx->r16, 0XAA0);
    // 0x0024F5EC: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x0024F5F0: jal         0x0020EEF8
    // 0x0024F5F4: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    func_0020EEF8(rdram, ctx);
        goto after_17;
    // 0x0024F5F4: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    after_17:
    // 0x0024F5F8: beq         $s3, $zero, L_0024F634
    if (ctx->r19 == 0) {
        // 0x0024F5FC: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_0024F634;
    }
    // 0x0024F5FC: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x0024F600: lwc1        $f0, 0xA94($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0XA94);
    // 0x0024F604: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0024F608: lwc1        $f1, 0x6E00($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X6E00);
    // 0x0024F60C: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x0024F610: swc1        $f0, 0xA94($s0)
    MEM_W(0XA94, ctx->r16) = ctx->f0.u32l;
    // 0x0024F614: lh          $a0, 0x22($s1)
    ctx->r4 = MEM_H(ctx->r17, 0X22);
    // 0x0024F618: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x0024F61C: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x0024F620: lw          $a1, 0x4($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X4);
    // 0x0024F624: lw          $a2, 0x8($s2)
    ctx->r6 = MEM_W(ctx->r18, 0X8);
    // 0x0024F628: lw          $a3, 0xC($s2)
    ctx->r7 = MEM_W(ctx->r18, 0XC);
    // 0x0024F62C: jal         0x00275544
    // 0x0024F630: nop

    func_00275544(rdram, ctx);
        goto after_18;
    // 0x0024F630: nop

    after_18:
L_0024F634:
    // 0x0024F634: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x0024F638: lw          $s4, 0x38($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X38);
    // 0x0024F63C: lw          $s3, 0x34($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X34);
    // 0x0024F640: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x0024F644: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x0024F648: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x0024F64C: ldc1        $f20, 0x40($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X40);
    // 0x0024F650: jr          $ra
    // 0x0024F654: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x0024F654: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_00427178(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00427178: sw          $s0, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->r16;
    // 0x0042717C: sw          $s1, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->r17;
;}
RECOMP_FUNC void func_00416614(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00416614: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00416618: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0041661C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x00416620: addiu       $a1, $zero, 0x1D0
    ctx->r5 = ADD32(0, 0X1D0);
    // 0x00416624: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x00416628: jal         0x00200500
    // 0x0041662C: addiu       $a2, $zero, 0x1D4
    ctx->r6 = ADD32(0, 0X1D4);
    func_00200500(rdram, ctx);
        goto after_0;
    // 0x0041662C: addiu       $a2, $zero, 0x1D4
    ctx->r6 = ADD32(0, 0X1D4);
    after_0:
    // 0x00416630: sh          $zero, 0x14($s0)
    MEM_H(0X14, ctx->r16) = 0;
    // 0x00416634: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x00416638: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0041663C: jr          $ra
    // 0x00416640: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00416640: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0041B1A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041B1A0: jr          $ra
    // 0x0041B1A4: addiu       $v0, $zero, 0x1CE9
    ctx->r2 = ADD32(0, 0X1CE9);
    return;
    // 0x0041B1A4: addiu       $v0, $zero, 0x1CE9
    ctx->r2 = ADD32(0, 0X1CE9);
;}
RECOMP_FUNC void func_004692CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004692CC: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x004692D0: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x004692D4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x004692D8: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x004692DC: addiu       $s1, $zero, -0x1
    ctx->r17 = ADD32(0, -0X1);
    // 0x004692E0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x004692E4: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x004692E8: addiu       $a0, $a0, 0x7078
    ctx->r4 = ADD32(ctx->r4, 0X7078);
    // 0x004692EC: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x004692F0: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    // 0x004692F4: addiu       $a3, $sp, 0x18
    ctx->r7 = ADD32(ctx->r29, 0X18);
    // 0x004692F8: sw          $ra, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r31;
    // 0x004692FC: jal         0x0042C0B4
    // 0x00469300: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    entry_0042C0B4(rdram, ctx);
        goto after_0;
    // 0x00469300: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    after_0:
    // 0x00469304: beql        $v0, $zero, L_0046930C
    if (ctx->r2 == 0) {
        // 0x00469308: addu        $s1, $zero, $zero
        ctx->r17 = ADD32(0, 0);
            goto L_0046930C;
    }
    goto skip_0;
    // 0x00469308: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    skip_0:
L_0046930C:
    // 0x0046930C: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x00469310: addiu       $v0, $v0, -0x5350
    ctx->r2 = ADD32(ctx->r2, -0X5350);
    // 0x00469314: sw          $zero, 0x0($v0)
    MEM_W(0X0, ctx->r2) = 0;
    // 0x00469318: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x0046931C: sw          $zero, 0x8($v0)
    MEM_W(0X8, ctx->r2) = 0;
    // 0x00469320: sw          $zero, 0xC($v0)
    MEM_W(0XC, ctx->r2) = 0;
    // 0x00469324: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x00469328: addu        $at, $s0, $at
    ctx->r1 = ADD32(ctx->r16, ctx->r1);
    // 0x0046932C: sw          $zero, 0x3FFC($at)
    MEM_W(0X3FFC, ctx->r1) = 0;
    // 0x00469330: sw          $zero, 0x44($v0)
    MEM_W(0X44, ctx->r2) = 0;
    // 0x00469334: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x00469338: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x0046933C: addu        $at, $s0, $at
    ctx->r1 = ADD32(ctx->r16, ctx->r1);
    // 0x00469340: sb          $v0, 0x3FE1($at)
    MEM_B(0X3FE1, ctx->r1) = ctx->r2;
    // 0x00469344: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
    // 0x00469348: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x0046934C: addu        $at, $s0, $at
    ctx->r1 = ADD32(ctx->r16, ctx->r1);
    // 0x00469350: sw          $s1, 0x3FF8($at)
    MEM_W(0X3FF8, ctx->r1) = ctx->r17;
    // 0x00469354: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x00469358: addu        $at, $s0, $at
    ctx->r1 = ADD32(ctx->r16, ctx->r1);
    // 0x0046935C: sw          $v0, 0x3FDC($at)
    MEM_W(0X3FDC, ctx->r1) = ctx->r2;
    // 0x00469360: lw          $ra, 0x38($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X38);
    // 0x00469364: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x00469368: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x0046936C: jr          $ra
    // 0x00469370: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x00469370: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_00456E70(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_0041DF30:
    // 0x00456E70: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
L_0041DF90:
    // 0x00456E74: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
L_0041E0D0:
    // 0x00456E78: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
L_0041E0D8:
    // 0x00456E7C: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
L_0041E0E0:
    // 0x00456E80: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x00456E84: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x00456E88: lw          $v0, 0x20($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X20);
    // 0x00456E8C: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x00456E90: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x00456E94: sw          $v1, 0x984($at)
    MEM_W(0X984, ctx->r1) = ctx->r3;
    // 0x00456E98: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x00456E9C: sw          $v1, 0x9A0($at)
    MEM_W(0X9A0, ctx->r1) = ctx->r3;
    // 0x00456EA0: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x00456EA4: sw          $zero, 0x994($at)
    MEM_W(0X994, ctx->r1) = 0;
    // 0x00456EA8: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x00456EAC: sw          $v1, 0x9B4($at)
    MEM_W(0X9B4, ctx->r1) = ctx->r3;
    // 0x00456EB0: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00456EB4: sw          $zero, 0x2024($at)
    MEM_W(0X2024, ctx->r1) = 0;
    // 0x00456EB8: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x00456EBC: sw          $zero, 0x9BC($at)
    MEM_W(0X9BC, ctx->r1) = 0;
    // 0x00456EC0: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x00456EC4: sw          $zero, 0x990($at)
    MEM_W(0X990, ctx->r1) = 0;
    // 0x00456EC8: lb          $a0, 0x4($v0)
    ctx->r4 = MEM_B(ctx->r2, 0X4);
    // 0x00456ECC: lw          $v0, 0x1C($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X1C);
    // 0x00456ED0: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x00456ED4: beq         $a0, $v1, L_00456F08
    if (ctx->r4 == ctx->r3) {
        // 0x00456ED8: sw          $a0, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->r4;
            goto L_00456F08;
    }
    // 0x00456ED8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x00456EDC: slti        $v0, $a0, 0x2
    ctx->r2 = SIGNED(ctx->r4) < 0X2 ? 1 : 0;
    // 0x00456EE0: bne         $v0, $zero, L_00456EF8
    if (ctx->r2 != 0) {
        // 0x00456EE4: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_00456EF8;
    }
    // 0x00456EE4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x00456EE8: beq         $a0, $v0, L_00456F18
    if (ctx->r4 == ctx->r2) {
        // 0x00456EEC: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_00456F18;
    }
    // 0x00456EEC: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x00456EF0: beq         $a0, $v0, L_00456F28
    if (ctx->r4 == ctx->r2) {
        // 0x00456EF4: nop
    
            goto L_00456F28;
    }
    // 0x00456EF4: nop

L_00456EF8:
    // 0x00456EF8: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x00456EFC: addiu       $a1, $a1, -0x5460
    ctx->r5 = ADD32(ctx->r5, -0X5460);
    // 0x00456F00: j           L_0041DF30
    // 0x00456F04: nop

    entry_0041DF30(rdram, ctx);
    return;
    // 0x00456F04: nop

L_00456F08:
    // 0x00456F08: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x00456F0C: addiu       $a1, $a1, -0x543C
    ctx->r5 = ADD32(ctx->r5, -0X543C);
    // 0x00456F10: j           L_0041DF30
    // 0x00456F14: nop

    entry_0041DF30(rdram, ctx);
    return;
    // 0x00456F14: nop

L_00456F18:
    // 0x00456F18: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x00456F1C: addiu       $a1, $a1, -0x5418
    ctx->r5 = ADD32(ctx->r5, -0X5418);
    // 0x00456F20: j           L_0041DF30
    // 0x00456F24: nop

    entry_0041DF30(rdram, ctx);
    return;
    // 0x00456F24: nop

L_00456F28:
    // 0x00456F28: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x00456F2C: addiu       $a1, $a1, -0x53F4
    ctx->r5 = ADD32(ctx->r5, -0X53F4);
    // 0x00456F30: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x00456F34: lw          $v0, 0x2020($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2020);
    // 0x00456F38: beq         $v0, $zero, L_00456F68
    if (ctx->r2 == 0) {
        // 0x00456F3C: addu        $s1, $a1, $zero
        ctx->r17 = ADD32(ctx->r5, 0);
            goto L_00456F68;
    }
    // 0x00456F3C: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x00456F40: lw          $v0, 0x1C($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X1C);
    // 0x00456F44: lw          $a0, 0x51C($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X51C);
    // 0x00456F48: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    // 0x00456F4C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x00456F50: lw          $a3, 0xA50($a2)
    ctx->r7 = MEM_W(ctx->r6, 0XA50);
    // 0x00456F54: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00456F58: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x00456F5C: sw          $v0, 0x9BC($at)
    MEM_W(0X9BC, ctx->r1) = ctx->r2;
    // 0x00456F60: j           L_0041E0D8
    // 0x00456F64: addiu       $a0, $a0, 0x53C
    ctx->r4 = ADD32(ctx->r4, 0X53C);
    entry_0041E0D8(rdram, ctx);
    return;
    // 0x00456F64: addiu       $a0, $a0, 0x53C
    ctx->r4 = ADD32(ctx->r4, 0X53C);
L_00456F68:
    // 0x00456F68: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x00456F6C: lw          $v0, 0x990($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X990);
    // 0x00456F70: beq         $v0, $zero, L_00456F88
    if (ctx->r2 == 0) {
        // 0x00456F74: nop
    
            goto L_00456F88;
    }
    // 0x00456F74: nop

    // 0x00456F78: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x00456F7C: lw          $a0, 0x2028($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X2028);
    // 0x00456F80: j           L_0041DF90
    // 0x00456F84: nop

    entry_0041DF90(rdram, ctx);
    return;
    // 0x00456F84: nop

L_00456F88:
    // 0x00456F88: lw          $v0, 0x20($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X20);
    // 0x00456F8C: lb          $a0, 0x4($v0)
    ctx->r4 = MEM_B(ctx->r2, 0X4);
    // 0x00456F90: jal         0x004263A0
    // 0x00456F94: nop

    func_004263A0(rdram, ctx);
        goto after_0;
    // 0x00456F94: nop

    after_0:
    // 0x00456F98: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x00456F9C: jal         0x0042647C
    // 0x00456FA0: nop

    entry_0042647C(rdram, ctx);
        goto after_1;
    // 0x00456FA0: nop

    after_1:
    // 0x00456FA4: bne         $v0, $zero, L_00457058
    if (ctx->r2 != 0) {
        // 0x00456FA8: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_00457058;
    }
    // 0x00456FA8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00456FAC: lw          $a2, 0x518($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X518);
    // 0x00456FB0: lbu         $v0, 0x30($a2)
    ctx->r2 = MEM_BU(ctx->r6, 0X30);
    // 0x00456FB4: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x00456FB8: sb          $v0, 0x970($at)
    MEM_B(0X970, ctx->r1) = ctx->r2;
    // 0x00456FBC: lhu         $v0, 0x0($a2)
    ctx->r2 = MEM_HU(ctx->r6, 0X0);
    // 0x00456FC0: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x00456FC4: sh          $v0, 0x968($at)
    MEM_H(0X968, ctx->r1) = ctx->r2;
    // 0x00456FC8: lhu         $v0, 0x2($a2)
    ctx->r2 = MEM_HU(ctx->r6, 0X2);
    // 0x00456FCC: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x00456FD0: sh          $v0, 0x96A($at)
    MEM_H(0X96A, ctx->r1) = ctx->r2;
    // 0x00456FD4: lhu         $v0, 0x4($a2)
    ctx->r2 = MEM_HU(ctx->r6, 0X4);
    // 0x00456FD8: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x00456FDC: sh          $v0, 0x96C($at)
    MEM_H(0X96C, ctx->r1) = ctx->r2;
    // 0x00456FE0: lhu         $v0, 0x6($a2)
    ctx->r2 = MEM_HU(ctx->r6, 0X6);
    // 0x00456FE4: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
    // 0x00456FE8: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x00456FEC: sb          $zero, 0x971($at)
    MEM_B(0X971, ctx->r1) = 0;
    // 0x00456FF0: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x00456FF4: sb          $zero, 0x972($at)
    MEM_B(0X972, ctx->r1) = 0;
    // 0x00456FF8: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x00456FFC: sb          $zero, 0x973($at)
    MEM_B(0X973, ctx->r1) = 0;
    // 0x00457000: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x00457004: sh          $v0, 0x96E($at)
    MEM_H(0X96E, ctx->r1) = ctx->r2;
    // 0x00457008: addu        $v0, $a2, $v1
    ctx->r2 = ADD32(ctx->r6, ctx->r3);
L_0045700C:
    // 0x0045700C: lbu         $v0, 0x33($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X33);
    // 0x00457010: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x00457014: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x00457018: sb          $v0, 0x974($at)
    MEM_B(0X974, ctx->r1) = ctx->r2;
    // 0x0045701C: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x00457020: slti        $v0, $v1, 0x8
    ctx->r2 = SIGNED(ctx->r3) < 0X8 ? 1 : 0;
    // 0x00457024: bne         $v0, $zero, L_0045700C
    if (ctx->r2 != 0) {
        // 0x00457028: addu        $v0, $a2, $v1
        ctx->r2 = ADD32(ctx->r6, ctx->r3);
            goto L_0045700C;
    }
    // 0x00457028: addu        $v0, $a2, $v1
    ctx->r2 = ADD32(ctx->r6, ctx->r3);
    // 0x0045702C: lui         $s0, 0x8013
    ctx->r16 = S32(0X8013 << 16);
    // 0x00457030: addiu       $s0, $s0, 0x968
    ctx->r16 = ADD32(ctx->r16, 0X968);
    // 0x00457034: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00457038: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    // 0x0045703C: jal         0x00426D98
    // 0x00457040: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    entry_00426D98(rdram, ctx);
        goto after_2;
    // 0x00457040: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_2:
    // 0x00457044: sw          $v0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r2;
    // 0x00457048: jal         0x0041D948
    // 0x0045704C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    entry_0041D948(rdram, ctx);
        goto after_3;
    // 0x0045704C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_3:
    // 0x00457050: j           L_0041E0E0
    // 0x00457054: nop

    entry_0041E0E0(rdram, ctx);
    return;
    // 0x00457054: nop

L_00457058:
    // 0x00457058: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x0045705C: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x00457060: sw          $v0, 0x9BC($at)
    MEM_W(0X9BC, ctx->r1) = ctx->r2;
    // 0x00457064: jal         0x004264B4
    // 0x00457068: nop

    entry_004264B4(rdram, ctx);
        goto after_4;
    // 0x00457068: nop

    after_4:
    // 0x0045706C: beq         $v0, $zero, L_0045708C
    if (ctx->r2 == 0) {
        // 0x00457070: nop
    
            goto L_0045708C;
    }
    // 0x00457070: nop

    // 0x00457074: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x00457078: addiu       $a0, $a0, -0x61D4
    ctx->r4 = ADD32(ctx->r4, -0X61D4);
    // 0x0045707C: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x00457080: addiu       $a1, $a1, -0x4498
    ctx->r5 = ADD32(ctx->r5, -0X4498);
    // 0x00457084: j           L_0041E0D0
    // 0x00457088: sw          $s1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r17;
    entry_0041E0D0(rdram, ctx);
    return;
    // 0x00457088: sw          $s1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r17;
L_0045708C:
    // 0x0045708C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x00457090: jal         0x00426AF8
    // 0x00457094: nop

    func_00426AF8(rdram, ctx);
        goto after_5;
    // 0x00457094: nop

    after_5:
    // 0x00457098: beql        $v0, $zero, L_004570C0
    if (ctx->r2 == 0) {
        // 0x0045709C: sw          $s1, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r17;
            goto L_004570C0;
    }
    goto skip_0;
    // 0x0045709C: sw          $s1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r17;
    skip_0:
    // 0x004570A0: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x004570A4: addiu       $a0, $a0, -0x61D4
    ctx->r4 = ADD32(ctx->r4, -0X61D4);
    // 0x004570A8: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x004570AC: addiu       $a1, $a1, -0x4084
    ctx->r5 = ADD32(ctx->r5, -0X4084);
    // 0x004570B0: lui         $v0, 0x44
    ctx->r2 = S32(0X44 << 16);
    // 0x004570B4: addiu       $v0, $v0, -0x4A14
    ctx->r2 = ADD32(ctx->r2, -0X4A14);
    // 0x004570B8: j           L_0041E0D0
    // 0x004570BC: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    entry_0041E0D0(rdram, ctx);
    return;
    // 0x004570BC: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
L_004570C0:
    // 0x004570C0: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x004570C4: addiu       $a0, $a0, -0x61D4
    ctx->r4 = ADD32(ctx->r4, -0X61D4);
    // 0x004570C8: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x004570CC: addiu       $a1, $a1, -0x44E0
    ctx->r5 = ADD32(ctx->r5, -0X44E0);
    // 0x004570D0: lw          $a3, 0xA50($s0)
    ctx->r7 = MEM_W(ctx->r16, 0XA50);
    // 0x004570D4: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    // 0x004570D8: jal         0x00416644
    // 0x004570DC: nop

    func_00416644(rdram, ctx);
        goto after_6;
    // 0x004570DC: nop

    after_6:
    // 0x004570E0: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x004570E4: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x004570E8: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x004570EC: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x004570F0: jr          $ra
    // 0x004570F4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x004570F4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_004660D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004660D8: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x004660DC: jal         0x00291BB0
    // 0x004660E0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    entry_00291BB0(rdram, ctx);
        goto after_0;
    // 0x004660E0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    after_0:
    // 0x004660E4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x004660E8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x004660EC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x004660F0: lwc1        $f0, 0x60C0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X60C0);
    // 0x004660F4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x004660F8: lwc1        $f1, 0x60C4($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X60C4);
    // 0x004660FC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00466100: lwc1        $f2, 0x60C8($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X60C8);
    // 0x00466104: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x00466108: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x0046610C: swc1        $f0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->f0.u32l;
    // 0x00466110: swc1        $f1, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->f_odd[(1 - 1) * 2];
    // 0x00466114: jal         0x0020F040
    // 0x00466118: swc1        $f2, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f2.u32l;
    func_0020F040(rdram, ctx);
        goto after_1;
    // 0x00466118: swc1        $f2, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f2.u32l;
    after_1:
    // 0x0046611C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00466120: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    // 0x00466124: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x00466128: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0046612C: jr          $ra
    // 0x00466130: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00466130: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0025F2F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0025F2F8: lui         $v1, 0xFBFF
    ctx->r3 = S32(0XFBFF << 16);
    // 0x0025F2FC: ori         $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 | 0XFFFF;
    // 0x0025F300: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x0025F304: lui         $a2, 0xFFFD
    ctx->r6 = S32(0XFFFD << 16);
    // 0x0025F308: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x0025F30C: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
    // 0x0025F310: lw          $v0, 0xD4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XD4);
    // 0x0025F314: ori         $a2, $a2, 0xFFFF
    ctx->r6 = ctx->r6 | 0XFFFF;
    // 0x0025F318: and         $v0, $v0, $a2
    ctx->r2 = ctx->r2 & ctx->r6;
    // 0x0025F31C: sw          $v0, 0xD4($a0)
    MEM_W(0XD4, ctx->r4) = ctx->r2;
    // 0x0025F320: lbu         $v0, 0xC8($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0XC8);
    // 0x0025F324: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0025F328: lwc1        $f0, 0x78E4($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X78E4);
    // 0x0025F32C: mtc1        $v0, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r2;
    // 0x0025F330: cvt.s.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.fl = CVT_S_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x0025F334: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x0025F338: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0025F33C: lwc1        $f0, 0x78E8($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X78E8);
    // 0x0025F340: mul.s       $f0, $f1, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x0025F344: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0025F348: lwc1        $f1, 0x78EC($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X78EC);
    // 0x0025F34C: add.s       $f1, $f0, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x0025F350: jr          $ra
    // 0x0025F354: swc1        $f1, 0x64($a1)
    MEM_W(0X64, ctx->r5) = ctx->f_odd[(1 - 1) * 2];
    return;
    // 0x0025F354: swc1        $f1, 0x64($a1)
    MEM_W(0X64, ctx->r5) = ctx->f_odd[(1 - 1) * 2];
;}
RECOMP_FUNC void func_002177DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002177DC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x002177E0: addu        $t1, $a0, $zero
    ctx->r9 = ADD32(ctx->r4, 0);
    // 0x002177E4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x002177E8: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x002177EC: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    // 0x002177F0: lw          $t0, 0x0($t1)
    ctx->r8 = MEM_W(ctx->r9, 0X0);
    // 0x002177F4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x002177F8: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x002177FC: lw          $t3, 0x20($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X20);
    // 0x00217800: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x00217804: sw          $t2, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r10;
    // 0x00217808: sw          $t3, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r11;
    // 0x0021780C: sw          $t4, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r12;
    // 0x00217810: lwc1        $f0, 0x28($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X28);
    // 0x00217814: lw          $v1, 0x4($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X4);
    // 0x00217818: lwc1        $f1, 0x8($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X8);
    // 0x0021781C: sllv        $v0, $v0, $v1
    ctx->r2 = S32(ctx->r2 << (ctx->r3 & 31));
    // 0x00217820: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x00217824: lwc1        $f1, 0xC($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0XC);
    // 0x00217828: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x0021782C: div.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = DIV_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00217830: mtc1        $v0, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r2;
    // 0x00217834: cvt.s.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.fl = CVT_S_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x00217838: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0021783C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00217840: lwc1        $f1, 0x59C8($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X59C8);
    // 0x00217844: add.s       $f1, $f0, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x00217848: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x0021784C: c.le.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl <= ctx->f1.fl;
    // 0x00217850: nop

    // 0x00217854: bc1f        L_0021786C
    if (!c1cs) {
        // 0x00217858: nop
    
            goto L_0021786C;
    }
    // 0x00217858: nop

    // 0x0021785C: trunc.w.s   $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    ctx->f2.u32l = TRUNC_W_S(ctx->f1.fl);
    // 0x00217860: mfc1        $a0, $f2
    ctx->r4 = (int32_t)ctx->f2.u32l;
    // 0x00217864: j           L_00217894
    // 0x00217868: nop

        goto L_00217894;
    // 0x00217868: nop

L_0021786C:
    // 0x0021786C: trunc.w.s   $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    ctx->f2.u32l = TRUNC_W_S(ctx->f1.fl);
    // 0x00217870: mfc1        $v0, $f2
    ctx->r2 = (int32_t)ctx->f2.u32l;
    // 0x00217874: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x00217878: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x0021787C: c.eq.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl == ctx->f1.fl;
    // 0x00217880: nop

    // 0x00217884: bc1f        L_00217890
    if (!c1cs) {
        // 0x00217888: addiu       $a0, $zero, 0x1
        ctx->r4 = ADD32(0, 0X1);
            goto L_00217890;
    }
    // 0x00217888: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x0021788C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
L_00217890:
    // 0x00217890: subu        $a0, $v0, $a0
    ctx->r4 = SUB32(ctx->r2, ctx->r4);
L_00217894:
    // 0x00217894: lw          $v0, 0x4($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X4);
    // 0x00217898: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x0021789C: sllv        $v1, $v1, $v0
    ctx->r3 = S32(ctx->r3 << (ctx->r2 & 31));
    // 0x002178A0: addiu       $a2, $v1, -0x1
    ctx->r6 = ADD32(ctx->r3, -0X1);
    // 0x002178A4: addu        $v1, $a2, $zero
    ctx->r3 = ADD32(ctx->r6, 0);
    // 0x002178A8: andi        $v0, $t0, 0x1F
    ctx->r2 = ctx->r8 & 0X1F;
    // 0x002178AC: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x002178B0: bne         $v0, $zero, L_002178C8
    if (ctx->r2 != 0) {
        // 0x002178B4: and         $a0, $a0, $a2
        ctx->r4 = ctx->r4 & ctx->r6;
            goto L_002178C8;
    }
    // 0x002178B4: and         $a0, $a0, $a2
    ctx->r4 = ctx->r4 & ctx->r6;
    // 0x002178B8: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x002178BC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x002178C0: j           L_002178E0
    // 0x002178C4: addu        $a3, $a2, $zero
    ctx->r7 = ADD32(ctx->r6, 0);
        goto L_002178E0;
    // 0x002178C4: addu        $a3, $a2, $zero
    ctx->r7 = ADD32(ctx->r6, 0);
L_002178C8:
    // 0x002178C8: sllv        $v1, $a2, $a1
    ctx->r3 = S32(ctx->r6 << (ctx->r5 & 31));
    // 0x002178CC: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x002178D0: subu        $v0, $v0, $a1
    ctx->r2 = SUB32(ctx->r2, ctx->r5);
    // 0x002178D4: srlv        $a2, $a2, $v0
    ctx->r6 = S32(U32(ctx->r6) >> (ctx->r2 & 31));
    // 0x002178D8: sllv        $a1, $a0, $a1
    ctx->r5 = S32(ctx->r4 << (ctx->r5 & 31));
    // 0x002178DC: srlv        $a3, $a0, $v0
    ctx->r7 = S32(U32(ctx->r4) >> (ctx->r2 & 31));
L_002178E0:
    // 0x002178E0: lui         $v0, 0xFFF
    ctx->r2 = S32(0XFFF << 16);
    // 0x002178E4: ori         $v0, $v0, 0xFFE0
    ctx->r2 = ctx->r2 | 0XFFE0;
    // 0x002178E8: lui         $a0, 0xF000
    ctx->r4 = S32(0XF000 << 16);
    // 0x002178EC: and         $a0, $t0, $a0
    ctx->r4 = ctx->r8 & ctx->r4;
    // 0x002178F0: and         $v0, $t0, $v0
    ctx->r2 = ctx->r8 & ctx->r2;
    // 0x002178F4: srl         $v0, $v0, 3
    ctx->r2 = S32(U32(ctx->r2) >> 3);
    // 0x002178F8: or          $a0, $a0, $v0
    ctx->r4 = ctx->r4 | ctx->r2;
    // 0x002178FC: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x00217900: nor         $v1, $zero, $v1
    ctx->r3 = ~(0 | ctx->r3);
    // 0x00217904: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x00217908: or          $v0, $v0, $a1
    ctx->r2 = ctx->r2 | ctx->r5;
    // 0x0021790C: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
    // 0x00217910: lw          $v0, 0x4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X4);
    // 0x00217914: nor         $v1, $zero, $a2
    ctx->r3 = ~(0 | ctx->r6);
    // 0x00217918: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x0021791C: or          $v0, $v0, $a3
    ctx->r2 = ctx->r2 | ctx->r7;
    // 0x00217920: sw          $v0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r2;
    // 0x00217924: lw          $v0, 0x0($t1)
    ctx->r2 = MEM_W(ctx->r9, 0X0);
    // 0x00217928: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x0021792C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x00217930: sw          $v0, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r2;
    // 0x00217934: jr          $ra
    // 0x00217938: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00217938: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_004219A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004219A8: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x004219AC: lw          $v0, 0x990($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X990);
    // 0x004219B0: beq         $v0, $zero, L_004219C8
    if (ctx->r2 == 0) {
        // 0x004219B4: nop
    
            goto L_004219C8;
    }
    // 0x004219B4: nop

    // 0x004219B8: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x004219BC: lw          $v0, 0x2028($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2028);
    // 0x004219C0: j           L_004219D4
    // 0x004219C4: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
        goto L_004219D4;
    // 0x004219C4: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
L_004219C8:
    // 0x004219C8: lw          $v0, 0x20($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X20);
    // 0x004219CC: lw          $a0, 0x1C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1C);
    // 0x004219D0: lb          $v0, 0x4($v0)
    ctx->r2 = MEM_B(ctx->r2, 0X4);
L_004219D4:
    // 0x004219D4: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
    // 0x004219D8: jr          $ra
    // 0x004219DC: addu        $v0, $a0, $zero
    ctx->r2 = ADD32(ctx->r4, 0);
    return;
    // 0x004219DC: addu        $v0, $a0, $zero
    ctx->r2 = ADD32(ctx->r4, 0);
;}
RECOMP_FUNC void func_00444FF0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00444FF0: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x00444FF4: sw          $s1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r17;
    // 0x00444FF8: lui         $s1, 0x800F
    ctx->r17 = S32(0X800F << 16);
    // 0x00444FFC: lw          $s1, 0x1CE0($s1)
    ctx->r17 = MEM_W(ctx->r17, 0X1CE0);
    // 0x00445000: sw          $s2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r18;
    // 0x00445004: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x00445008: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x0044500C: beq         $s1, $zero, L_004450F8
    if (ctx->r17 == 0) {
        // 0x00445010: sw          $s0, 0x40($sp)
        MEM_W(0X40, ctx->r29) = ctx->r16;
            goto L_004450F8;
    }
    // 0x00445010: sw          $s0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r16;
    // 0x00445014: lbu         $v1, 0x0($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X0);
    // 0x00445018: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0044501C: bne         $v1, $v0, L_004450F8
    if (ctx->r3 != ctx->r2) {
        // 0x00445020: lui         $v1, 0x30
        ctx->r3 = S32(0X30 << 16);
            goto L_004450F8;
    }
    // 0x00445020: lui         $v1, 0x30
    ctx->r3 = S32(0X30 << 16);
    // 0x00445024: lw          $v0, 0xD4($s1)
    ctx->r2 = MEM_W(ctx->r17, 0XD4);
    // 0x00445028: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x0044502C: beq         $v0, $zero, L_004450F8
    if (ctx->r2 == 0) {
        // 0x00445030: nop
    
            goto L_004450F8;
    }
    // 0x00445030: nop

    // 0x00445034: lw          $v0, 0x4($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X4);
    // 0x00445038: beq         $v0, $zero, L_004450F8
    if (ctx->r2 == 0) {
        // 0x0044503C: nop
    
            goto L_004450F8;
    }
    // 0x0044503C: nop

    // 0x00445040: lbu         $v0, 0x34($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X34);
    // 0x00445044: addiu       $v0, $v0, -0xE
    ctx->r2 = ADD32(ctx->r2, -0XE);
    // 0x00445048: sltiu       $v0, $v0, 0x2
    ctx->r2 = ctx->r2 < 0X2 ? 1 : 0;
    // 0x0044504C: beq         $v0, $zero, L_004450F8
    if (ctx->r2 == 0) {
        // 0x00445050: nop
    
            goto L_004450F8;
    }
    // 0x00445050: nop

    // 0x00445054: lw          $v0, 0x80($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X80);
    // 0x00445058: beq         $s1, $v0, L_0044506C
    if (ctx->r17 == ctx->r2) {
        // 0x0044505C: addiu       $s0, $sp, 0x30
        ctx->r16 = ADD32(ctx->r29, 0X30);
            goto L_0044506C;
    }
    // 0x0044505C: addiu       $s0, $sp, 0x30
    ctx->r16 = ADD32(ctx->r29, 0X30);
    // 0x00445060: lw          $v0, 0x88($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X88);
    // 0x00445064: bne         $s1, $v0, L_004450F8
    if (ctx->r17 != ctx->r2) {
        // 0x00445068: nop
    
            goto L_004450F8;
    }
    // 0x00445068: nop

L_0044506C:
    // 0x0044506C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00445070: addiu       $a1, $s2, 0x4
    ctx->r5 = ADD32(ctx->r18, 0X4);
    // 0x00445074: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00445078: lwc1        $f0, 0x898($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X898);
    // 0x0044507C: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    // 0x00445080: sw          $zero, 0x30($sp)
    MEM_W(0X30, ctx->r29) = 0;
    // 0x00445084: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x00445088: jal         0x0020EF2C
    // 0x0044508C: swc1        $f0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f0.u32l;
    func_0020EF2C(rdram, ctx);
        goto after_0;
    // 0x0044508C: swc1        $f0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f0.u32l;
    after_0:
    // 0x00445090: jal         0x0020F040
    // 0x00445094: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_0020F040(rdram, ctx);
        goto after_1;
    // 0x00445094: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x00445098: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0044509C: lui         $a2, 0x44C0
    ctx->r6 = S32(0X44C0 << 16);
    // 0x004450A0: jal         0x0020EF60
    // 0x004450A4: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_0020EF60(rdram, ctx);
        goto after_2;
    // 0x004450A4: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_2:
    // 0x004450A8: addiu       $a0, $s1, 0x18
    ctx->r4 = ADD32(ctx->r17, 0X18);
    // 0x004450AC: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x004450B0: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x004450B4: lwc1        $f0, 0x89C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X89C);
    // 0x004450B8: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    // 0x004450BC: jal         0x0020EEF8
    // 0x004450C0: swc1        $f0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f0.u32l;
    func_0020EEF8(rdram, ctx);
        goto after_3;
    // 0x004450C0: swc1        $f0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f0.u32l;
    after_3:
    // 0x004450C4: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    // 0x004450C8: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x004450CC: addiu       $a2, $zero, 0x500
    ctx->r6 = ADD32(0, 0X500);
    // 0x004450D0: lui         $a3, 0x42CC
    ctx->r7 = S32(0X42CC << 16);
    // 0x004450D4: ori         $a3, $a3, 0xCCCC
    ctx->r7 = ctx->r7 | 0XCCCC;
    // 0x004450D8: lui         $v0, 0x10
    ctx->r2 = S32(0X10 << 16);
    // 0x004450DC: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x004450E0: jal         0x00245828
    // 0x004450E4: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    func_00245828(rdram, ctx);
        goto after_4;
    // 0x004450E4: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    after_4:
    // 0x004450E8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x004450EC: addiu       $a1, $a0, 0x140
    ctx->r5 = ADD32(ctx->r4, 0X140);
    // 0x004450F0: jal         0x002465C8
    // 0x004450F4: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    func_002465C8(rdram, ctx);
        goto after_5;
    // 0x004450F4: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    after_5:
L_004450F8:
    // 0x004450F8: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x004450FC: lw          $s2, 0x48($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X48);
    // 0x00445100: lw          $s1, 0x44($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X44);
    // 0x00445104: lw          $s0, 0x40($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X40);
    // 0x00445108: jr          $ra
    // 0x0044510C: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x0044510C: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_004028F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004028F4: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x004028F8: sw          $s2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r18;
    // 0x004028FC: lui         $s2, 0x8013
    ctx->r18 = S32(0X8013 << 16);
    // 0x00402900: addiu       $s2, $s2, -0xC60
    ctx->r18 = ADD32(ctx->r18, -0XC60);
    // 0x00402904: sw          $ra, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r31;
    // 0x00402908: sw          $s1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r17;
    // 0x0040290C: sw          $s0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r16;
    // 0x00402910: sw          $a3, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r7;
    // 0x00402914: lw          $v0, 0x214($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X214);
    // 0x00402918: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
    // 0x0040291C: jal         0x0026D518
    // 0x00402920: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    func_0026D518(rdram, ctx);
        goto after_0;
    // 0x00402920: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    after_0:
    // 0x00402924: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x00402928: addiu       $v1, $sp, 0x64
    ctx->r3 = ADD32(ctx->r29, 0X64);
    // 0x0040292C: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    // 0x00402930: addiu       $v1, $sp, 0x40
    ctx->r3 = ADD32(ctx->r29, 0X40);
    // 0x00402934: sll         $s0, $v0, 16
    ctx->r16 = S32(ctx->r2 << 16);
    // 0x00402938: sw          $v1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r3;
    // 0x0040293C: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x00402940: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x00402944: lw          $a1, 0x64($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X64);
    // 0x00402948: lw          $a2, 0x68($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X68);
    // 0x0040294C: lw          $a3, 0x6C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X6C);
    // 0x00402950: jal         0x002688C8
    // 0x00402954: sra         $s0, $s0, 16
    ctx->r16 = S32(SIGNED(ctx->r16) >> 16);
    func_002688C8(rdram, ctx);
        goto after_1;
    // 0x00402954: sra         $s0, $s0, 16
    ctx->r16 = S32(SIGNED(ctx->r16) >> 16);
    after_1:
    // 0x00402958: lw          $v0, 0x40($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X40);
    // 0x0040295C: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x00402960: addiu       $a0, $a0, -0x5460
    ctx->r4 = ADD32(ctx->r4, -0X5460);
    // 0x00402964: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x00402968: sll         $v0, $s0, 2
    ctx->r2 = S32(ctx->r16 << 2);
    // 0x0040296C: addu        $s0, $v0, $s0
    ctx->r16 = ADD32(ctx->r2, ctx->r16);
    // 0x00402970: sll         $s0, $s0, 2
    ctx->r16 = S32(ctx->r16 << 2);
    // 0x00402974: lui         $at, 0x43
    ctx->r1 = S32(0X43 << 16);
    // 0x00402978: addu        $at, $at, $s0
    ctx->r1 = ADD32(ctx->r1, ctx->r16);
    // 0x0040297C: lw          $a2, 0x7B4($at)
    ctx->r6 = MEM_W(ctx->r1, 0X7B4);
    // 0x00402980: addu        $v0, $v0, $s2
    ctx->r2 = ADD32(ctx->r2, ctx->r18);
    // 0x00402984: lw          $t0, 0x64($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X64);
    // 0x00402988: lw          $t1, 0x68($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X68);
    // 0x0040298C: lw          $t2, 0x6C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X6C);
    // 0x00402990: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x00402994: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    // 0x00402998: sw          $t2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r10;
    // 0x0040299C: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x004029A0: lw          $t0, 0x18($s1)
    ctx->r8 = MEM_W(ctx->r17, 0X18);
    // 0x004029A4: lw          $t1, 0x1C($s1)
    ctx->r9 = MEM_W(ctx->r17, 0X1C);
    // 0x004029A8: lw          $t2, 0x20($s1)
    ctx->r10 = MEM_W(ctx->r17, 0X20);
    // 0x004029AC: sw          $t0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r8;
    // 0x004029B0: sw          $t1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r9;
    // 0x004029B4: sw          $t2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r10;
    // 0x004029B8: lui         $at, 0x43
    ctx->r1 = S32(0X43 << 16);
    // 0x004029BC: addu        $at, $at, $s0
    ctx->r1 = ADD32(ctx->r1, ctx->r16);
    // 0x004029C0: lw          $t0, 0x7B8($at)
    ctx->r8 = MEM_W(ctx->r1, 0X7B8);
    // 0x004029C4: lui         $at, 0x43
    ctx->r1 = S32(0X43 << 16);
    // 0x004029C8: addu        $at, $at, $s0
    ctx->r1 = ADD32(ctx->r1, ctx->r16);
    // 0x004029CC: lw          $t1, 0x7BC($at)
    ctx->r9 = MEM_W(ctx->r1, 0X7BC);
    // 0x004029D0: lui         $at, 0x43
    ctx->r1 = S32(0X43 << 16);
    // 0x004029D4: addu        $at, $at, $s0
    ctx->r1 = ADD32(ctx->r1, ctx->r16);
    // 0x004029D8: lw          $t2, 0x7C0($at)
    ctx->r10 = MEM_W(ctx->r1, 0X7C0);
    // 0x004029DC: sw          $t0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r8;
    // 0x004029E0: sw          $t1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r9;
    // 0x004029E4: sw          $t2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r10;
    // 0x004029E8: sw          $zero, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = 0;
    // 0x004029EC: lw          $a3, 0x248($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X248);
    // 0x004029F0: jal         0x00228108
    // 0x004029F4: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    func_00228108(rdram, ctx);
        goto after_2;
    // 0x004029F4: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    after_2:
    // 0x004029F8: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
    // 0x004029FC: lw          $s2, 0x50($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X50);
    // 0x00402A00: lw          $s1, 0x4C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X4C);
    // 0x00402A04: lw          $s0, 0x48($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X48);
    // 0x00402A08: jr          $ra
    // 0x00402A0C: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    return;
    // 0x00402A0C: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
