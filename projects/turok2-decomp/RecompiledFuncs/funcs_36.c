#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_00202BB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00202BB0: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x00202BB4: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x00202BB8: addu        $s3, $a1, $zero
    ctx->r19 = ADD32(ctx->r5, 0);
    // 0x00202BBC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x00202BC0: lui         $s0, 0x800E
    ctx->r16 = S32(0X800E << 16);
    // 0x00202BC4: addiu       $s0, $s0, -0x7250
    ctx->r16 = ADD32(ctx->r16, -0X7250);
    // 0x00202BC8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00202BCC: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x00202BD0: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x00202BD4: jal         0x00201AA4
    // 0x00202BD8: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    entry_00201AA4(rdram, ctx);
        goto after_0;
    // 0x00202BD8: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    after_0:
    // 0x00202BDC: jal         0x0029DFF0
    // 0x00202BE0: nop

    func_0029DFF0(rdram, ctx);
        goto after_1;
    // 0x00202BE0: nop

    after_1:
    // 0x00202BE4: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x00202BE8: lui         $v1, 0x800E
    ctx->r3 = S32(0X800E << 16);
    // 0x00202BEC: lw          $v1, -0x7234($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X7234);
    // 0x00202BF0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00202BF4: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x00202BF8: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x00202BFC: sw          $v1, -0x7234($at)
    MEM_W(-0X7234, ctx->r1) = ctx->r3;
    // 0x00202C00: beq         $v1, $v0, L_00202C28
    if (ctx->r3 == ctx->r2) {
        // 0x00202C04: nop
    
            goto L_00202C28;
    }
    // 0x00202C04: nop

    // 0x00202C08: jal         0x0029E010
    // 0x00202C0C: nop

    func_0029E010(rdram, ctx);
        goto after_2;
    // 0x00202C0C: nop

    after_2:
    // 0x00202C10: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00202C14: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x00202C18: jal         0x0029B6F0
    // 0x00202C1C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osRecvMesg_recomp(rdram, ctx);
        goto after_3;
    // 0x00202C1C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_3:
    // 0x00202C20: j           L_00202C34
    // 0x00202C24: addiu       $v0, $zero, 0x400
    ctx->r2 = ADD32(0, 0X400);
        goto L_00202C34;
    // 0x00202C24: addiu       $v0, $zero, 0x400
    ctx->r2 = ADD32(0, 0X400);
L_00202C28:
    // 0x00202C28: jal         0x0029E010
    // 0x00202C2C: nop

    func_0029E010(rdram, ctx);
        goto after_4;
    // 0x00202C2C: nop

    after_4:
    // 0x00202C30: addiu       $v0, $zero, 0x400
    ctx->r2 = ADD32(0, 0X400);
L_00202C34:
    // 0x00202C34: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00202C38: sw          $v0, -0x4F40($at)
    MEM_W(-0X4F40, ctx->r1) = ctx->r2;
    // 0x00202C3C: jal         0x00266B80
    // 0x00202C40: nop

    func_00266B80(rdram, ctx);
        goto after_5;
    // 0x00202C40: nop

    after_5:
    // 0x00202C44: lui         $v1, 0x40
    ctx->r3 = S32(0X40 << 16);
    // 0x00202C48: sltu        $v1, $v1, $v0
    ctx->r3 = ctx->r3 < ctx->r2 ? 1 : 0;
    // 0x00202C4C: beq         $v1, $zero, L_00202C68
    if (ctx->r3 == 0) {
        // 0x00202C50: nop
    
            goto L_00202C68;
    }
    // 0x00202C50: nop

    // 0x00202C54: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00202C58: lw          $v0, -0x4F40($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X4F40);
    // 0x00202C5C: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x00202C60: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00202C64: sw          $v0, -0x4F40($at)
    MEM_W(-0X4F40, ctx->r1) = ctx->r2;
L_00202C68:
    // 0x00202C68: lui         $s0, 0x800D
    ctx->r16 = S32(0X800D << 16);
    // 0x00202C6C: addiu       $s0, $s0, 0x1CC0
    ctx->r16 = ADD32(ctx->r16, 0X1CC0);
    // 0x00202C70: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00202C74: lw          $v0, -0x4F40($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X4F40);
    // 0x00202C78: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00202C7C: sll         $a1, $v0, 2
    ctx->r5 = S32(ctx->r2 << 2);
    // 0x00202C80: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    // 0x00202C84: jal         0x002024E0
    // 0x00202C88: sll         $a1, $a1, 3
    ctx->r5 = S32(ctx->r5 << 3);
    func_002024E0(rdram, ctx);
        goto after_6;
    // 0x00202C88: sll         $a1, $a1, 3
    ctx->r5 = S32(ctx->r5 << 3);
    after_6:
    // 0x00202C8C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00202C90: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x00202C94: lw          $a1, -0x4F40($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X4F40);
    // 0x00202C98: lui         $s1, 0x800E
    ctx->r17 = S32(0X800E << 16);
    // 0x00202C9C: addiu       $s1, $s1, -0x7E30
    ctx->r17 = ADD32(ctx->r17, -0X7E30);
    // 0x00202CA0: sw          $v0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r2;
    // 0x00202CA4: jal         0x002024E0
    // 0x00202CA8: sll         $a1, $a1, 2
    ctx->r5 = S32(ctx->r5 << 2);
    func_002024E0(rdram, ctx);
        goto after_7;
    // 0x00202CA8: sll         $a1, $a1, 2
    ctx->r5 = S32(ctx->r5 << 2);
    after_7:
    // 0x00202CAC: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x00202CB0: lw          $v1, -0x4F40($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X4F40);
    // 0x00202CB4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00202CB8: sw          $v0, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->r2;
    // 0x00202CBC: sll         $a1, $v1, 1
    ctx->r5 = S32(ctx->r3 << 1);
    // 0x00202CC0: addu        $a1, $a1, $v1
    ctx->r5 = ADD32(ctx->r5, ctx->r3);
    // 0x00202CC4: sll         $a1, $a1, 2
    ctx->r5 = S32(ctx->r5 << 2);
    // 0x00202CC8: subu        $a1, $a1, $v1
    ctx->r5 = SUB32(ctx->r5, ctx->r3);
    // 0x00202CCC: jal         0x002024E0
    // 0x00202CD0: sll         $a1, $a1, 2
    ctx->r5 = S32(ctx->r5 << 2);
    func_002024E0(rdram, ctx);
        goto after_8;
    // 0x00202CD0: sll         $a1, $a1, 2
    ctx->r5 = S32(ctx->r5 << 2);
    after_8:
    // 0x00202CD4: addiu       $a0, $s1, 0xC00
    ctx->r4 = ADD32(ctx->r17, 0XC00);
    // 0x00202CD8: addiu       $a1, $s1, 0xC18
    ctx->r5 = ADD32(ctx->r17, 0XC18);
    // 0x00202CDC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x00202CE0: jal         0x0029B030
    // 0x00202CE4: sw          $v0, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->r2;
    osCreateMesgQueue_recomp(rdram, ctx);
        goto after_9;
    // 0x00202CE4: sw          $v0, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->r2;
    after_9:
    // 0x00202CE8: addiu       $a0, $s1, 0x10
    ctx->r4 = ADD32(ctx->r17, 0X10);
    // 0x00202CEC: addiu       $a1, $zero, 0x18
    ctx->r5 = ADD32(0, 0X18);
    // 0x00202CF0: addiu       $a2, $zero, 0x1C
    ctx->r6 = ADD32(0, 0X1C);
    // 0x00202CF4: sw          $zero, 0x44($s1)
    MEM_W(0X44, ctx->r17) = 0;
    // 0x00202CF8: jal         0x00200500
    // 0x00202CFC: sw          $zero, 0x40($s1)
    MEM_W(0X40, ctx->r17) = 0;
    func_00200500(rdram, ctx);
        goto after_10;
    // 0x00202CFC: sw          $zero, 0x40($s1)
    MEM_W(0X40, ctx->r17) = 0;
    after_10:
    // 0x00202D00: addiu       $a0, $s1, 0x24
    ctx->r4 = ADD32(ctx->r17, 0X24);
    // 0x00202D04: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    // 0x00202D08: jal         0x00200500
    // 0x00202D0C: addiu       $a2, $zero, 0x24
    ctx->r6 = ADD32(0, 0X24);
    func_00200500(rdram, ctx);
        goto after_11;
    // 0x00202D0C: addiu       $a2, $zero, 0x24
    ctx->r6 = ADD32(0, 0X24);
    after_11:
    // 0x00202D10: lui         $a3, 0x800B
    ctx->r7 = S32(0X800B << 16);
    // 0x00202D14: lw          $a3, -0x4F40($a3)
    ctx->r7 = MEM_W(ctx->r7, -0X4F40);
    // 0x00202D18: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x00202D1C: beq         $a3, $zero, L_00202D68
    if (ctx->r7 == 0) {
        // 0x00202D20: sw          $zero, 0xBDC($s1)
        MEM_W(0XBDC, ctx->r17) = 0;
            goto L_00202D68;
    }
    // 0x00202D20: sw          $zero, 0xBDC($s1)
    MEM_W(0XBDC, ctx->r17) = 0;
    // 0x00202D24: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x00202D28: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
L_00202D2C:
    // 0x00202D2C: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x00202D30: sll         $v0, $s0, 2
    ctx->r2 = S32(ctx->r16 << 2);
    // 0x00202D34: addu        $v1, $v1, $a2
    ctx->r3 = ADD32(ctx->r3, ctx->r6);
    // 0x00202D38: sw          $zero, 0xC($v1)
    MEM_W(0XC, ctx->r3) = 0;
    // 0x00202D3C: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x00202D40: lw          $a0, -0x7E2C($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X7E2C);
    // 0x00202D44: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x00202D48: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x00202D4C: sw          $v1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r3;
    // 0x00202D50: lw          $v0, 0xBDC($a1)
    ctx->r2 = MEM_W(ctx->r5, 0XBDC);
    // 0x00202D54: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x00202D58: sw          $v0, 0xBDC($a1)
    MEM_W(0XBDC, ctx->r5) = ctx->r2;
    // 0x00202D5C: sltu        $v0, $s0, $a3
    ctx->r2 = ctx->r16 < ctx->r7 ? 1 : 0;
    // 0x00202D60: bne         $v0, $zero, L_00202D2C
    if (ctx->r2 != 0) {
        // 0x00202D64: addiu       $a2, $a2, 0x28
        ctx->r6 = ADD32(ctx->r6, 0X28);
            goto L_00202D2C;
    }
    // 0x00202D64: addiu       $a2, $a2, 0x28
    ctx->r6 = ADD32(ctx->r6, 0X28);
L_00202D68:
    // 0x00202D68: lui         $s1, 0x800E
    ctx->r17 = S32(0X800E << 16);
    // 0x00202D6C: addiu       $s1, $s1, -0x7DF8
    ctx->r17 = ADD32(ctx->r17, -0X7DF8);
    // 0x00202D70: addiu       $a0, $s1, 0xB60
    ctx->r4 = ADD32(ctx->r17, 0XB60);
    // 0x00202D74: addiu       $a1, $zero, 0x28
    ctx->r5 = ADD32(0, 0X28);
    // 0x00202D78: addiu       $a2, $zero, 0x24
    ctx->r6 = ADD32(0, 0X24);
    // 0x00202D7C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00202D80: sw          $v0, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->r2;
    // 0x00202D84: sw          $v0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r2;
    // 0x00202D88: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x00202D8C: sw          $v0, 0x10($s1)
    MEM_W(0X10, ctx->r17) = ctx->r2;
    // 0x00202D90: sw          $zero, 0xB9C($s1)
    MEM_W(0XB9C, ctx->r17) = 0;
    // 0x00202D94: sw          $zero, 0xBA0($s1)
    MEM_W(0XBA0, ctx->r17) = 0;
    // 0x00202D98: sw          $zero, -0x30($s1)
    MEM_W(-0X30, ctx->r17) = 0;
    // 0x00202D9C: sw          $zero, 0xBE4($s1)
    MEM_W(0XBE4, ctx->r17) = 0;
    // 0x00202DA0: jal         0x00200500
    // 0x00202DA4: sw          $zero, 0xBE8($s1)
    MEM_W(0XBE8, ctx->r17) = 0;
    func_00200500(rdram, ctx);
        goto after_12;
    // 0x00202DA4: sw          $zero, 0xBE8($s1)
    MEM_W(0XBE8, ctx->r17) = 0;
    after_12:
    // 0x00202DA8: addiu       $a0, $s1, 0xB74
    ctx->r4 = ADD32(ctx->r17, 0XB74);
    // 0x00202DAC: addiu       $a1, $zero, 0x28
    ctx->r5 = ADD32(0, 0X28);
    // 0x00202DB0: jal         0x00200500
    // 0x00202DB4: addiu       $a2, $zero, 0x24
    ctx->r6 = ADD32(0, 0X24);
    func_00200500(rdram, ctx);
        goto after_13;
    // 0x00202DB4: addiu       $a2, $zero, 0x24
    ctx->r6 = ADD32(0, 0X24);
    after_13:
    // 0x00202DB8: addiu       $a0, $s1, 0xB88
    ctx->r4 = ADD32(ctx->r17, 0XB88);
    // 0x00202DBC: addiu       $a1, $zero, 0x28
    ctx->r5 = ADD32(0, 0X28);
    // 0x00202DC0: jal         0x00200500
    // 0x00202DC4: addiu       $a2, $zero, 0x24
    ctx->r6 = ADD32(0, 0X24);
    func_00200500(rdram, ctx);
        goto after_14;
    // 0x00202DC4: addiu       $a2, $zero, 0x24
    ctx->r6 = ADD32(0, 0X24);
    after_14:
    // 0x00202DC8: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00202DCC: lw          $v0, -0x4F40($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X4F40);
    // 0x00202DD0: beq         $v0, $zero, L_00202E0C
    if (ctx->r2 == 0) {
        // 0x00202DD4: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_00202E0C;
    }
    // 0x00202DD4: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x00202DD8: addiu       $s2, $s1, -0x2C
    ctx->r18 = ADD32(ctx->r17, -0X2C);
    // 0x00202DDC: addu        $s1, $s0, $zero
    ctx->r17 = ADD32(ctx->r16, 0);
L_00202DE0:
    // 0x00202DE0: addiu       $a0, $s2, 0xB8C
    ctx->r4 = ADD32(ctx->r18, 0XB8C);
    // 0x00202DE4: lw          $a1, 0x0($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X0);
    // 0x00202DE8: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x00202DEC: addu        $a1, $a1, $s1
    ctx->r5 = ADD32(ctx->r5, ctx->r17);
    // 0x00202DF0: jal         0x00200574
    // 0x00202DF4: sw          $zero, 0x10($a1)
    MEM_W(0X10, ctx->r5) = 0;
    func_00200574(rdram, ctx);
        goto after_15;
    // 0x00202DF4: sw          $zero, 0x10($a1)
    MEM_W(0X10, ctx->r5) = 0;
    after_15:
    // 0x00202DF8: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00202DFC: lw          $v0, -0x4F40($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X4F40);
    // 0x00202E00: sltu        $v0, $s0, $v0
    ctx->r2 = ctx->r16 < ctx->r2 ? 1 : 0;
    // 0x00202E04: bne         $v0, $zero, L_00202DE0
    if (ctx->r2 != 0) {
        // 0x00202E08: addiu       $s1, $s1, 0x2C
        ctx->r17 = ADD32(ctx->r17, 0X2C);
            goto L_00202DE0;
    }
    // 0x00202E08: addiu       $s1, $s1, 0x2C
    ctx->r17 = ADD32(ctx->r17, 0X2C);
L_00202E0C:
    // 0x00202E0C: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x00202E10: lw          $a0, -0x4F40($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X4F40);
    // 0x00202E14: jal         0x00202860
    // 0x00202E18: nop

    func_00202860(rdram, ctx);
        goto after_16;
    // 0x00202E18: nop

    after_16:
    // 0x00202E1C: lui         $s0, 0x800E
    ctx->r16 = S32(0X800E << 16);
    // 0x00202E20: addiu       $s0, $s0, -0x7BB0
    ctx->r16 = ADD32(ctx->r16, -0X7BB0);
    // 0x00202E24: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00202E28: addiu       $a1, $s0, 0x18
    ctx->r5 = ADD32(ctx->r16, 0X18);
    // 0x00202E2C: jal         0x0029B030
    // 0x00202E30: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    osCreateMesgQueue_recomp(rdram, ctx);
        goto after_17;
    // 0x00202E30: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    after_17:
    // 0x00202E34: jal         0x0029DFF0
    // 0x00202E38: nop

    func_0029DFF0(rdram, ctx);
        goto after_18;
    // 0x00202E38: nop

    after_18:
    // 0x00202E3C: lui         $v1, 0x800E
    ctx->r3 = S32(0X800E << 16);
    // 0x00202E40: lw          $v1, -0x7234($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X7234);
    // 0x00202E44: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x00202E48: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x00202E4C: sw          $v1, -0x7234($at)
    MEM_W(-0X7234, ctx->r1) = ctx->r3;
    // 0x00202E50: beq         $v1, $zero, L_00202E78
    if (ctx->r3 == 0) {
        // 0x00202E54: nop
    
            goto L_00202E78;
    }
    // 0x00202E54: nop

    // 0x00202E58: jal         0x0029E010
    // 0x00202E5C: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    func_0029E010(rdram, ctx);
        goto after_19;
    // 0x00202E5C: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    after_19:
    // 0x00202E60: addiu       $a0, $s0, 0x960
    ctx->r4 = ADD32(ctx->r16, 0X960);
    // 0x00202E64: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x00202E68: jal         0x0029B820
    // 0x00202E6C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osSendMesg_recomp(rdram, ctx);
        goto after_20;
    // 0x00202E6C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_20:
    // 0x00202E70: j           L_00202E80
    // 0x00202E74: nop

        goto L_00202E80;
    // 0x00202E74: nop

L_00202E78:
    // 0x00202E78: jal         0x0029E010
    // 0x00202E7C: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    func_0029E010(rdram, ctx);
        goto after_21;
    // 0x00202E7C: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    after_21:
L_00202E80:
    // 0x00202E80: lui         $s0, 0x800E
    ctx->r16 = S32(0X800E << 16);
    // 0x00202E84: addiu       $s0, $s0, -0x7A98
    ctx->r16 = ADD32(ctx->r16, -0X7A98);
    // 0x00202E88: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00202E8C: andi        $a1, $s3, 0xFF
    ctx->r5 = ctx->r19 & 0XFF;
    // 0x00202E90: jal         0x00266C5C
    // 0x00202E94: addiu       $a2, $zero, 0x800
    ctx->r6 = ADD32(0, 0X800);
    func_00266C5C(rdram, ctx);
        goto after_22;
    // 0x00202E94: addiu       $a2, $zero, 0x800
    ctx->r6 = ADD32(0, 0X800);
    after_22:
    // 0x00202E98: addiu       $s1, $s0, -0x348
    ctx->r17 = ADD32(ctx->r16, -0X348);
    // 0x00202E9C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x00202EA0: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    // 0x00202EA4: lui         $a2, 0x20
    ctx->r6 = S32(0X20 << 16);
    // 0x00202EA8: addiu       $a2, $a2, 0x41E4
    ctx->r6 = ADD32(ctx->r6, 0X41E4);
    // 0x00202EAC: addiu       $s0, $s0, 0x800
    ctx->r16 = ADD32(ctx->r16, 0X800);
    // 0x00202EB0: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00202EB4: lw          $v0, 0x6E8C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X6E8C);
    // 0x00202EB8: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x00202EBC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00202EC0: jal         0x0029B060
    // 0x00202EC4: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    osCreateThread_recomp(rdram, ctx);
        goto after_23;
    // 0x00202EC4: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    after_23:
    // 0x00202EC8: jal         0x0029BB10
    // 0x00202ECC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    osStartThread_recomp(rdram, ctx);
        goto after_24;
    // 0x00202ECC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_24:
    // 0x00202ED0: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x00202ED4: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x00202ED8: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x00202EDC: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x00202EE0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x00202EE4: jr          $ra
    // 0x00202EE8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x00202EE8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_004071DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004071DC: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x004071E0: sw          $s1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r17;
    // 0x004071E4: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x004071E8: sw          $s2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r18;
    // 0x004071EC: addu        $s2, $a1, $zero
    ctx->r18 = ADD32(ctx->r5, 0);
    // 0x004071F0: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x004071F4: addiu       $a0, $a0, 0x7078
    ctx->r4 = ADD32(ctx->r4, 0X7078);
    // 0x004071F8: addiu       $a1, $zero, 0x453
    ctx->r5 = ADD32(0, 0X453);
    // 0x004071FC: addiu       $a2, $zero, 0x9
    ctx->r6 = ADD32(0, 0X9);
    // 0x00407200: sw          $s0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r16;
    // 0x00407204: addiu       $s0, $sp, 0x18
    ctx->r16 = ADD32(ctx->r29, 0X18);
    // 0x00407208: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x0040720C: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x00407210: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x00407214: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00407218: jal         0x00225F6C
    // 0x0040721C: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    func_00225F6C(rdram, ctx);
        goto after_0;
    // 0x0040721C: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    after_0:
    // 0x00407220: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x00407224: blez        $a1, L_0040725C
    if (SIGNED(ctx->r5) <= 0) {
        // 0x00407228: addu        $v1, $zero, $zero
        ctx->r3 = ADD32(0, 0);
            goto L_0040725C;
    }
    // 0x00407228: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
    // 0x0040722C: lui         $a3, 0x40
    ctx->r7 = S32(0X40 << 16);
    // 0x00407230: addiu       $a3, $a3, 0x7DC0
    ctx->r7 = ADD32(ctx->r7, 0X7DC0);
    // 0x00407234: lui         $a2, 0x40
    ctx->r6 = S32(0X40 << 16);
    // 0x00407238: addiu       $a2, $a2, 0x3AD4
    ctx->r6 = ADD32(ctx->r6, 0X3AD4);
    // 0x0040723C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_00407240:
    // 0x00407240: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x00407244: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x00407248: sw          $a3, 0x234($v0)
    MEM_W(0X234, ctx->r2) = ctx->r7;
    // 0x0040724C: sw          $a2, 0x248($v0)
    MEM_W(0X248, ctx->r2) = ctx->r6;
    // 0x00407250: slt         $v0, $v1, $a1
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x00407254: bne         $v0, $zero, L_00407240
    if (ctx->r2 != 0) {
        // 0x00407258: addiu       $a0, $a0, 0x4
        ctx->r4 = ADD32(ctx->r4, 0X4);
            goto L_00407240;
    }
    // 0x00407258: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
L_0040725C:
    // 0x0040725C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x00407260: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x00407264: jal         0x00243414
    // 0x00407268: addiu       $a2, $zero, 0x1C
    ctx->r6 = ADD32(0, 0X1C);
    func_00243414(rdram, ctx);
        goto after_1;
    // 0x00407268: addiu       $a2, $zero, 0x1C
    ctx->r6 = ADD32(0, 0X1C);
    after_1:
    // 0x0040726C: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x00407270: lw          $s2, 0x48($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X48);
    // 0x00407274: lw          $s1, 0x44($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X44);
    // 0x00407278: lw          $s0, 0x40($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X40);
    // 0x0040727C: jr          $ra
    // 0x00407280: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x00407280: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_00418D4C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00418D4C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00418D50: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x00418D54: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x00418D58: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00418D5C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x00418D60: lui         $s0, 0x8012
    ctx->r16 = S32(0X8012 << 16);
    // 0x00418D64: addiu       $s0, $s0, -0x5528
    ctx->r16 = ADD32(ctx->r16, -0X5528);
    // 0x00418D68: addu        $a0, $a1, $zero
    ctx->r4 = ADD32(ctx->r5, 0);
    // 0x00418D6C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x00418D70: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x00418D74: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x00418D78: lb          $v0, 0x23($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X23);
    // 0x00418D7C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x00418D80: jal         0x0041648C
    // 0x00418D84: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    func_0041648C(rdram, ctx);
        goto after_0;
    // 0x00418D84: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    after_0:
    // 0x00418D88: sb          $v0, 0x23($s0)
    MEM_B(0X23, ctx->r16) = ctx->r2;
    // 0x00418D8C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x00418D90: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x00418D94: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x00418D98: jr          $ra
    // 0x00418D9C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00418D9C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_0028F71C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0028F71C: mtc1        $a2, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r6;
    // 0x0028F720: cvt.d.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.d = CVT_D_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x0028F724: mtc1        $a1, $f3
    ctx->f_odd[(3 - 1) * 2] = ctx->r5;
    // 0x0028F728: cvt.s.w     $f3, $f3
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    ctx->f3.fl = CVT_S_W(ctx->f_odd[(3 - 1) * 2]);
    // 0x0028F72C: bgez        $a2, L_0028F740
    if (SIGNED(ctx->r6) >= 0) {
        // 0x0028F730: nop
    
            goto L_0028F740;
    }
    // 0x0028F730: nop

    // 0x0028F734: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0028F738: ldc1        $f0, -0x5DB0($at)
    CHECK_FR(ctx, 0);
    ctx->f0.u64 = LD(ctx->r1, -0X5DB0);
    // 0x0028F73C: add.d       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.d); NAN_CHECK(ctx->f0.d); 
    ctx->f1.d = ctx->f1.d + ctx->f0.d;
L_0028F740:
    // 0x0028F740: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x0028F744: cvt.s.d     $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.d); 
    ctx->f0.fl = CVT_S_D(ctx->f1.d);
    // 0x0028F748: lw          $v0, 0x40($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X40);
    // 0x0028F74C: mul.s       $f3, $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f3.fl = MUL_S(ctx->f3.fl, ctx->f0.fl);
    // 0x0028F750: mtc1        $v0, $f2
    ctx->f2.u32l = ctx->r2;
    // 0x0028F754: cvt.d.w     $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    ctx->f2.d = CVT_D_W(ctx->f2.u32l);
    // 0x0028F758: bgez        $v0, L_0028F76C
    if (SIGNED(ctx->r2) >= 0) {
        // 0x0028F75C: nop
    
            goto L_0028F76C;
    }
    // 0x0028F75C: nop

    // 0x0028F760: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0028F764: ldc1        $f0, -0x5DA8($at)
    CHECK_FR(ctx, 0);
    ctx->f0.u64 = LD(ctx->r1, -0X5DA8);
    // 0x0028F768: add.d       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.d); NAN_CHECK(ctx->f0.d); 
    ctx->f2.d = ctx->f2.d + ctx->f0.d;
L_0028F76C:
    // 0x0028F76C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0028F770: lwc1        $f1, -0x5DA0($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, -0X5DA0);
    // 0x0028F774: cvt.s.d     $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.d); 
    ctx->f0.fl = CVT_S_D(ctx->f2.d);
    // 0x0028F778: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0028F77C: jr          $ra
    // 0x0028F780: div.s       $f0, $f3, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = DIV_S(ctx->f3.fl, ctx->f0.fl);
    return;
    // 0x0028F780: div.s       $f0, $f3, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = DIV_S(ctx->f3.fl, ctx->f0.fl);
;}
RECOMP_FUNC void func_0042D1B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0042D1B8: addu        $a1, $a2, $zero
    ctx->r5 = ADD32(ctx->r6, 0);
    // 0x0042D1BC: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
;}
RECOMP_FUNC void func_00453308(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00453308: mtc1        $zero, $f1
    ctx->f_odd[(1 - 1) * 2] = 0;
    // 0x0045330C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00453310: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00453314: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x00453318: lw          $a0, 0x1C($a1)
    ctx->r4 = MEM_W(ctx->r5, 0X1C);
    // 0x0045331C: jal         0x0042E06C
    // 0x00453320: nop

    func_0042E06C(rdram, ctx);
        goto after_0;
    // 0x00453320: nop

    after_0:
    // 0x00453324: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x00453328: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0045332C: jr          $ra
    // 0x00453330: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00453330: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00407858(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00407858: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0040785C: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x00407860: lb          $v0, 0xC7($a1)
    ctx->r2 = MEM_B(ctx->r5, 0XC7);
    // 0x00407864: beq         $v0, $zero, L_00407888
    if (ctx->r2 == 0) {
        // 0x00407868: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_00407888;
    }
    // 0x00407868: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x0040786C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00407870: lwc1        $f0, 0x548($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X548);
    // 0x00407874: swc1        $f0, 0x1FC($a0)
    MEM_W(0X1FC, ctx->r4) = ctx->f0.u32l;
    // 0x00407878: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0040787C: sw          $v0, -0x5FC($at)
    MEM_W(-0X5FC, ctx->r1) = ctx->r2;
    // 0x00407880: jal         0x00243414
    // 0x00407884: addiu       $a2, $zero, 0x13
    ctx->r6 = ADD32(0, 0X13);
    func_00243414(rdram, ctx);
        goto after_0;
    // 0x00407884: addiu       $a2, $zero, 0x13
    ctx->r6 = ADD32(0, 0X13);
    after_0:
L_00407888:
    // 0x00407888: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x0040788C: jr          $ra
    // 0x00407890: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00407890: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00228AEC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00228AEC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00228AF0: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00228AF4: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x00228AF8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x00228AFC: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x00228B00: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00228B04: lw          $s0, 0x14($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X14);
    // 0x00228B08: beq         $s0, $zero, L_00228B30
    if (ctx->r16 == 0) {
        // 0x00228B0C: addu        $s2, $a1, $zero
        ctx->r18 = ADD32(ctx->r5, 0);
            goto L_00228B30;
    }
    // 0x00228B0C: addu        $s2, $a1, $zero
    ctx->r18 = ADD32(ctx->r5, 0);
    // 0x00228B10: addiu       $a0, $s1, 0x14
    ctx->r4 = ADD32(ctx->r17, 0X14);
    // 0x00228B14: jal         0x00200738
    // 0x00228B18: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_00200738(rdram, ctx);
        goto after_0;
    // 0x00228B18: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_0:
    // 0x00228B1C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x00228B20: jal         0x00200518
    // 0x00228B24: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_00200518(rdram, ctx);
        goto after_1;
    // 0x00228B24: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_1:
    // 0x00228B28: sw          $s2, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r18;
    // 0x00228B2C: sh          $zero, 0x16($s0)
    MEM_H(0X16, ctx->r16) = 0;
L_00228B30:
    // 0x00228B30: addu        $v0, $s0, $zero
    ctx->r2 = ADD32(ctx->r16, 0);
    // 0x00228B34: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x00228B38: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x00228B3C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00228B40: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00228B44: jr          $ra
    // 0x00228B48: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00228B48: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_00422F14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00422F14: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00422F18: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x00422F1C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x00422F20: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x00422F24: lw          $v1, 0x20($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X20);
    // 0x00422F28: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00422F2C: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x00422F30: sw          $zero, 0x990($at)
    MEM_W(0X990, ctx->r1) = 0;
    // 0x00422F34: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00422F38: sw          $zero, 0x2020($at)
    MEM_W(0X2020, ctx->r1) = 0;
    // 0x00422F3C: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x00422F40: sw          $zero, 0x9AC($at)
    MEM_W(0X9AC, ctx->r1) = 0;
    // 0x00422F44: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x00422F48: sw          $v0, 0x998($at)
    MEM_W(0X998, ctx->r1) = ctx->r2;
    // 0x00422F4C: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x00422F50: sw          $v0, 0x984($at)
    MEM_W(0X984, ctx->r1) = ctx->r2;
    // 0x00422F54: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x00422F58: sw          $v0, 0x9A0($at)
    MEM_W(0X9A0, ctx->r1) = ctx->r2;
    // 0x00422F5C: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x00422F60: sw          $zero, 0x994($at)
    MEM_W(0X994, ctx->r1) = 0;
    // 0x00422F64: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x00422F68: sw          $zero, 0x9B4($at)
    MEM_W(0X9B4, ctx->r1) = 0;
    // 0x00422F6C: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x00422F70: sw          $zero, 0x980($at)
    MEM_W(0X980, ctx->r1) = 0;
    // 0x00422F74: lb          $a0, 0x4($v1)
    ctx->r4 = MEM_B(ctx->r3, 0X4);
    // 0x00422F78: jal         0x00285A68
    // 0x00422F7C: sw          $a0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r4;
    func_00285A68(rdram, ctx);
        goto after_0;
    // 0x00422F7C: sw          $a0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r4;
    after_0:
    // 0x00422F80: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x00422F84: lw          $v0, 0x990($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X990);
    // 0x00422F88: beq         $v0, $zero, L_00422FA0
    if (ctx->r2 == 0) {
        // 0x00422F8C: nop
    
            goto L_00422FA0;
    }
    // 0x00422F8C: nop

    // 0x00422F90: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x00422F94: lw          $a0, 0x2028($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X2028);
    // 0x00422F98: j           L_00422FA8
    // 0x00422F9C: nop

        goto L_00422FA8;
    // 0x00422F9C: nop

L_00422FA0:
    // 0x00422FA0: lw          $v0, 0x20($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X20);
    // 0x00422FA4: lb          $a0, 0x4($v0)
    ctx->r4 = MEM_B(ctx->r2, 0X4);
L_00422FA8:
    // 0x00422FA8: jal         0x00426480
    // 0x00422FAC: nop

    func_00426480(rdram, ctx);
        goto after_1;
    // 0x00422FAC: nop

    after_1:
    // 0x00422FB0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x00422FB4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x00422FB8: jr          $ra
    // 0x00422FBC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00422FBC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_002597E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002597E8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x002597EC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x002597F0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x002597F4: lw          $a0, 0x1A8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1A8);
    // 0x002597F8: lw          $v0, 0x1288($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X1288);
    // 0x002597FC: bne         $v0, $zero, L_0025981C
    if (ctx->r2 != 0) {
        // 0x00259800: addu        $s0, $a1, $zero
        ctx->r16 = ADD32(ctx->r5, 0);
            goto L_0025981C;
    }
    // 0x00259800: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x00259804: lb          $v1, 0x34($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X34);
    // 0x00259808: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0025980C: beq         $v1, $v0, L_00259824
    if (ctx->r3 == ctx->r2) {
        // 0x00259810: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_00259824;
    }
    // 0x00259810: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x00259814: jal         0x00253DE0
    // 0x00259818: addiu       $a1, $zero, 0x1A8
    ctx->r5 = ADD32(0, 0X1A8);
    func_00253DE0(rdram, ctx);
        goto after_0;
    // 0x00259818: addiu       $a1, $zero, 0x1A8
    ctx->r5 = ADD32(0, 0X1A8);
    after_0:
L_0025981C:
    // 0x0025981C: lb          $v1, 0x34($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X34);
    // 0x00259820: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
L_00259824:
    // 0x00259824: beq         $v1, $v0, L_00259848
    if (ctx->r3 == ctx->r2) {
        // 0x00259828: nop
    
            goto L_00259848;
    }
    // 0x00259828: nop

    // 0x0025982C: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00259830: lw          $v0, 0x6D20($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X6D20);
    // 0x00259834: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x00259838: beq         $v0, $zero, L_00259848
    if (ctx->r2 == 0) {
        // 0x0025983C: nop
    
            goto L_00259848;
    }
    // 0x0025983C: nop

    // 0x00259840: jal         0x0027588C
    // 0x00259844: addiu       $a0, $zero, 0x1A9
    ctx->r4 = ADD32(0, 0X1A9);
    func_0027588C(rdram, ctx);
        goto after_1;
    // 0x00259844: addiu       $a0, $zero, 0x1A9
    ctx->r4 = ADD32(0, 0X1A9);
    after_1:
L_00259848:
    // 0x00259848: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x0025984C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00259850: jr          $ra
    // 0x00259854: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00259854: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0025CAC8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0025CAC8: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x0025CACC: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x0025CAD0: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x0025CAD4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x0025CAD8: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x0025CADC: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x0025CAE0: addu        $s4, $a2, $zero
    ctx->r20 = ADD32(ctx->r6, 0);
    // 0x0025CAE4: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x0025CAE8: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x0025CAEC: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x0025CAF0: lw          $v0, 0x14($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X14);
    // 0x0025CAF4: lw          $v1, 0x4($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X4);
    // 0x0025CAF8: beq         $v1, $zero, L_0025D010
    if (ctx->r3 == 0) {
        // 0x0025CAFC: addiu       $s3, $v0, 0x14
        ctx->r19 = ADD32(ctx->r2, 0X14);
            goto L_0025D010;
    }
    // 0x0025CAFC: addiu       $s3, $v0, 0x14
    ctx->r19 = ADD32(ctx->r2, 0X14);
    // 0x0025CB00: lw          $s1, 0x10C($s4)
    ctx->r17 = MEM_W(ctx->r20, 0X10C);
    // 0x0025CB04: beq         $s1, $zero, L_0025CBB0
    if (ctx->r17 == 0) {
        // 0x0025CB08: nop
    
            goto L_0025CBB0;
    }
    // 0x0025CB08: nop

    // 0x0025CB0C: lb          $v0, 0x133($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X133);
    // 0x0025CB10: addu        $v0, $s0, $v0
    ctx->r2 = ADD32(ctx->r16, ctx->r2);
    // 0x0025CB14: lb          $v0, 0x130($v0)
    ctx->r2 = MEM_B(ctx->r2, 0X130);
    // 0x0025CB18: bltz        $v0, L_0025CC4C
    if (SIGNED(ctx->r2) < 0) {
        // 0x0025CB1C: addiu       $a1, $s1, 0x4
        ctx->r5 = ADD32(ctx->r17, 0X4);
            goto L_0025CC4C;
    }
    // 0x0025CB1C: addiu       $a1, $s1, 0x4
    ctx->r5 = ADD32(ctx->r17, 0X4);
    // 0x0025CB20: slti        $v0, $v0, 0x3
    ctx->r2 = SIGNED(ctx->r2) < 0X3 ? 1 : 0;
    // 0x0025CB24: beq         $v0, $zero, L_0025CC4C
    if (ctx->r2 == 0) {
        // 0x0025CB28: nop
    
            goto L_0025CC4C;
    }
    // 0x0025CB28: nop

    // 0x0025CB2C: jal         0x0020F6BC
    // 0x0025CB30: addiu       $a0, $s2, 0x4
    ctx->r4 = ADD32(ctx->r18, 0X4);
    func_0020F6BC(rdram, ctx);
        goto after_0;
    // 0x0025CB30: addiu       $a0, $s2, 0x4
    ctx->r4 = ADD32(ctx->r18, 0X4);
    after_0:
    // 0x0025CB34: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0025CB38: lwc1        $f1, 0x75DC($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X75DC);
    // 0x0025CB3C: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x0025CB40: nop

    // 0x0025CB44: bc1f        L_0025CC4C
    if (!c1cs) {
        // 0x0025CB48: nop
    
            goto L_0025CC4C;
    }
    // 0x0025CB48: nop

    // 0x0025CB4C: sub.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl - ctx->f0.fl;
    // 0x0025CB50: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0025CB54: lwc1        $f0, 0x75E0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X75E0);
    // 0x0025CB58: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x0025CB5C: lwc1        $f0, 0x44($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X44);
    // 0x0025CB60: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x0025CB64: nop

    // 0x0025CB68: bc1f        L_0025CC4C
    if (!c1cs) {
        // 0x0025CB6C: nop
    
            goto L_0025CC4C;
    }
    // 0x0025CB6C: nop

    // 0x0025CB70: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x0025CB74: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x0025CB78: nop

    // 0x0025CB7C: bc1f        L_0025CB88
    if (!c1cs) {
        // 0x0025CB80: swc1        $f0, 0x44($s0)
        MEM_W(0X44, ctx->r16) = ctx->f0.u32l;
            goto L_0025CB88;
    }
    // 0x0025CB80: swc1        $f0, 0x44($s0)
    MEM_W(0X44, ctx->r16) = ctx->f0.u32l;
    // 0x0025CB84: swc1        $f1, 0x44($s0)
    MEM_W(0X44, ctx->r16) = ctx->f_odd[(1 - 1) * 2];
L_0025CB88:
    // 0x0025CB88: lui         $t3, 0x800B
    ctx->r11 = S32(0X800B << 16);
    // 0x0025CB8C: addiu       $t3, $t3, 0x6AC
    ctx->r11 = ADD32(ctx->r11, 0X6AC);
    // 0x0025CB90: lw          $t0, 0x4($s1)
    ctx->r8 = MEM_W(ctx->r17, 0X4);
    // 0x0025CB94: lw          $t1, 0x8($s1)
    ctx->r9 = MEM_W(ctx->r17, 0X8);
    // 0x0025CB98: lw          $t2, 0xC($s1)
    ctx->r10 = MEM_W(ctx->r17, 0XC);
    // 0x0025CB9C: sw          $t0, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r8;
    // 0x0025CBA0: sw          $t1, 0x4($t3)
    MEM_W(0X4, ctx->r11) = ctx->r9;
    // 0x0025CBA4: sw          $t2, 0x8($t3)
    MEM_W(0X8, ctx->r11) = ctx->r10;
    // 0x0025CBA8: j           L_0025CC4C
    // 0x0025CBAC: nop

        goto L_0025CC4C;
    // 0x0025CBAC: nop

L_0025CBB0:
    // 0x0025CBB0: lb          $v0, 0x133($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X133);
    // 0x0025CBB4: addu        $v0, $s0, $v0
    ctx->r2 = ADD32(ctx->r16, ctx->r2);
    // 0x0025CBB8: lb          $v0, 0x130($v0)
    ctx->r2 = MEM_B(ctx->r2, 0X130);
    // 0x0025CBBC: bltz        $v0, L_0025CC4C
    if (SIGNED(ctx->r2) < 0) {
        // 0x0025CBC0: addiu       $a1, $s4, 0x4
        ctx->r5 = ADD32(ctx->r20, 0X4);
            goto L_0025CC4C;
    }
    // 0x0025CBC0: addiu       $a1, $s4, 0x4
    ctx->r5 = ADD32(ctx->r20, 0X4);
    // 0x0025CBC4: slti        $v0, $v0, 0x3
    ctx->r2 = SIGNED(ctx->r2) < 0X3 ? 1 : 0;
    // 0x0025CBC8: beq         $v0, $zero, L_0025CC4C
    if (ctx->r2 == 0) {
        // 0x0025CBCC: nop
    
            goto L_0025CC4C;
    }
    // 0x0025CBCC: nop

    // 0x0025CBD0: jal         0x0020F6BC
    // 0x0025CBD4: addiu       $a0, $s2, 0x4
    ctx->r4 = ADD32(ctx->r18, 0X4);
    func_0020F6BC(rdram, ctx);
        goto after_1;
    // 0x0025CBD4: addiu       $a0, $s2, 0x4
    ctx->r4 = ADD32(ctx->r18, 0X4);
    after_1:
    // 0x0025CBD8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0025CBDC: lwc1        $f1, 0x75E4($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X75E4);
    // 0x0025CBE0: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x0025CBE4: nop

    // 0x0025CBE8: bc1f        L_0025CC4C
    if (!c1cs) {
        // 0x0025CBEC: nop
    
            goto L_0025CC4C;
    }
    // 0x0025CBEC: nop

    // 0x0025CBF0: sub.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl - ctx->f0.fl;
    // 0x0025CBF4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0025CBF8: lwc1        $f0, 0x75E8($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X75E8);
    // 0x0025CBFC: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x0025CC00: lwc1        $f0, 0x44($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X44);
    // 0x0025CC04: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x0025CC08: nop

    // 0x0025CC0C: bc1f        L_0025CC4C
    if (!c1cs) {
        // 0x0025CC10: nop
    
            goto L_0025CC4C;
    }
    // 0x0025CC10: nop

    // 0x0025CC14: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x0025CC18: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x0025CC1C: nop

    // 0x0025CC20: bc1f        L_0025CC2C
    if (!c1cs) {
        // 0x0025CC24: swc1        $f0, 0x44($s0)
        MEM_W(0X44, ctx->r16) = ctx->f0.u32l;
            goto L_0025CC2C;
    }
    // 0x0025CC24: swc1        $f0, 0x44($s0)
    MEM_W(0X44, ctx->r16) = ctx->f0.u32l;
    // 0x0025CC28: swc1        $f1, 0x44($s0)
    MEM_W(0X44, ctx->r16) = ctx->f_odd[(1 - 1) * 2];
L_0025CC2C:
    // 0x0025CC2C: lui         $t3, 0x800B
    ctx->r11 = S32(0X800B << 16);
    // 0x0025CC30: addiu       $t3, $t3, 0x6AC
    ctx->r11 = ADD32(ctx->r11, 0X6AC);
    // 0x0025CC34: lw          $t0, 0x4($s4)
    ctx->r8 = MEM_W(ctx->r20, 0X4);
    // 0x0025CC38: lw          $t1, 0x8($s4)
    ctx->r9 = MEM_W(ctx->r20, 0X8);
    // 0x0025CC3C: lw          $t2, 0xC($s4)
    ctx->r10 = MEM_W(ctx->r20, 0XC);
    // 0x0025CC40: sw          $t0, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r8;
    // 0x0025CC44: sw          $t1, 0x4($t3)
    MEM_W(0X4, ctx->r11) = ctx->r9;
    // 0x0025CC48: sw          $t2, 0x8($t3)
    MEM_W(0X8, ctx->r11) = ctx->r10;
L_0025CC4C:
    // 0x0025CC4C: lhu         $v1, 0x2($s4)
    ctx->r3 = MEM_HU(ctx->r20, 0X2);
    // 0x0025CC50: slti        $v0, $v1, 0x14
    ctx->r2 = SIGNED(ctx->r3) < 0X14 ? 1 : 0;
    // 0x0025CC54: beq         $v0, $zero, L_0025CCA8
    if (ctx->r2 == 0) {
        // 0x0025CC58: slti        $v0, $v1, 0xC
        ctx->r2 = SIGNED(ctx->r3) < 0XC ? 1 : 0;
            goto L_0025CCA8;
    }
    // 0x0025CC58: slti        $v0, $v1, 0xC
    ctx->r2 = SIGNED(ctx->r3) < 0XC ? 1 : 0;
    // 0x0025CC5C: beq         $v0, $zero, L_0025D010
    if (ctx->r2 == 0) {
        // 0x0025CC60: slti        $v0, $v1, 0xA
        ctx->r2 = SIGNED(ctx->r3) < 0XA ? 1 : 0;
            goto L_0025D010;
    }
    // 0x0025CC60: slti        $v0, $v1, 0xA
    ctx->r2 = SIGNED(ctx->r3) < 0XA ? 1 : 0;
    // 0x0025CC64: beq         $v0, $zero, L_0025CC8C
    if (ctx->r2 == 0) {
        // 0x0025CC68: slti        $v0, $v1, 0x5
        ctx->r2 = SIGNED(ctx->r3) < 0X5 ? 1 : 0;
            goto L_0025CC8C;
    }
    // 0x0025CC68: slti        $v0, $v1, 0x5
    ctx->r2 = SIGNED(ctx->r3) < 0X5 ? 1 : 0;
    // 0x0025CC6C: beq         $v0, $zero, L_0025D010
    if (ctx->r2 == 0) {
        // 0x0025CC70: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_0025D010;
    }
    // 0x0025CC70: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x0025CC74: beq         $v1, $v0, L_0025CCF8
    if (ctx->r3 == ctx->r2) {
        // 0x0025CC78: slti        $v0, $v1, 0x4
        ctx->r2 = SIGNED(ctx->r3) < 0X4 ? 1 : 0;
            goto L_0025CCF8;
    }
    // 0x0025CC78: slti        $v0, $v1, 0x4
    ctx->r2 = SIGNED(ctx->r3) < 0X4 ? 1 : 0;
    // 0x0025CC7C: beq         $v0, $zero, L_0025CDA4
    if (ctx->r2 == 0) {
        // 0x0025CC80: nop
    
            goto L_0025CDA4;
    }
    // 0x0025CC80: nop

    // 0x0025CC84: j           L_0025D010
    // 0x0025CC88: nop

        goto L_0025D010;
    // 0x0025CC88: nop

L_0025CC8C:
    // 0x0025CC8C: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x0025CC90: beq         $v1, $v0, L_0025CE48
    if (ctx->r3 == ctx->r2) {
        // 0x0025CC94: addiu       $v0, $zero, 0xB
        ctx->r2 = ADD32(0, 0XB);
            goto L_0025CE48;
    }
    // 0x0025CC94: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
    // 0x0025CC98: beq         $v1, $v0, L_0025CEC0
    if (ctx->r3 == ctx->r2) {
        // 0x0025CC9C: nop
    
            goto L_0025CEC0;
    }
    // 0x0025CC9C: nop

    // 0x0025CCA0: j           L_0025D010
    // 0x0025CCA4: nop

        goto L_0025D010;
    // 0x0025CCA4: nop

L_0025CCA8:
    // 0x0025CCA8: addiu       $v0, $zero, 0x128
    ctx->r2 = ADD32(0, 0X128);
    // 0x0025CCAC: beq         $v1, $v0, L_0025CDA0
    if (ctx->r3 == ctx->r2) {
        // 0x0025CCB0: slti        $v0, $v1, 0x129
        ctx->r2 = SIGNED(ctx->r3) < 0X129 ? 1 : 0;
            goto L_0025CDA0;
    }
    // 0x0025CCB0: slti        $v0, $v1, 0x129
    ctx->r2 = SIGNED(ctx->r3) < 0X129 ? 1 : 0;
    // 0x0025CCB4: beq         $v0, $zero, L_0025CCD4
    if (ctx->r2 == 0) {
        // 0x0025CCB8: addiu       $v0, $zero, 0x15
        ctx->r2 = ADD32(0, 0X15);
            goto L_0025CCD4;
    }
    // 0x0025CCB8: addiu       $v0, $zero, 0x15
    ctx->r2 = ADD32(0, 0X15);
    // 0x0025CCBC: beq         $v1, $v0, L_0025D010
    if (ctx->r3 == ctx->r2) {
        // 0x0025CCC0: slt         $v0, $v1, $v0
        ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
            goto L_0025D010;
    }
    // 0x0025CCC0: slt         $v0, $v1, $v0
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x0025CCC4: beq         $v0, $zero, L_0025D010
    if (ctx->r2 == 0) {
        // 0x0025CCC8: nop
    
            goto L_0025D010;
    }
    // 0x0025CCC8: nop

    // 0x0025CCCC: j           L_0025CFE4
    // 0x0025CCD0: nop

        goto L_0025CFE4;
    // 0x0025CCD0: nop

L_0025CCD4:
    // 0x0025CCD4: addiu       $v0, $zero, 0x129
    ctx->r2 = ADD32(0, 0X129);
    // 0x0025CCD8: beq         $v1, $v0, L_0025CEC0
    if (ctx->r3 == ctx->r2) {
        // 0x0025CCDC: slti        $v0, $v1, 0x1D3
        ctx->r2 = SIGNED(ctx->r3) < 0X1D3 ? 1 : 0;
            goto L_0025CEC0;
    }
    // 0x0025CCDC: slti        $v0, $v1, 0x1D3
    ctx->r2 = SIGNED(ctx->r3) < 0X1D3 ? 1 : 0;
    // 0x0025CCE0: beq         $v0, $zero, L_0025D010
    if (ctx->r2 == 0) {
        // 0x0025CCE4: slti        $v0, $v1, 0x1CC
        ctx->r2 = SIGNED(ctx->r3) < 0X1CC ? 1 : 0;
            goto L_0025D010;
    }
    // 0x0025CCE4: slti        $v0, $v1, 0x1CC
    ctx->r2 = SIGNED(ctx->r3) < 0X1CC ? 1 : 0;
    // 0x0025CCE8: beq         $v0, $zero, L_0025CDA4
    if (ctx->r2 == 0) {
        // 0x0025CCEC: nop
    
            goto L_0025CDA4;
    }
    // 0x0025CCEC: nop

    // 0x0025CCF0: j           L_0025D010
    // 0x0025CCF4: nop

        goto L_0025D010;
    // 0x0025CCF4: nop

L_0025CCF8:
    // 0x0025CCF8: lw          $v0, 0x0($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X0);
    // 0x0025CCFC: andi        $v0, $v0, 0x200
    ctx->r2 = ctx->r2 & 0X200;
    // 0x0025CD00: beq         $v0, $zero, L_0025D010
    if (ctx->r2 == 0) {
        // 0x0025CD04: addiu       $v0, $zero, 0x3D
        ctx->r2 = ADD32(0, 0X3D);
            goto L_0025D010;
    }
    // 0x0025CD04: addiu       $v0, $zero, 0x3D
    ctx->r2 = ADD32(0, 0X3D);
    // 0x0025CD08: lb          $v1, 0x34($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X34);
    // 0x0025CD0C: beq         $v1, $v0, L_0025D010
    if (ctx->r3 == ctx->r2) {
        // 0x0025CD10: nop
    
            goto L_0025D010;
    }
    // 0x0025CD10: nop

    // 0x0025CD14: lbu         $v0, 0x10($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X10);
    // 0x0025CD18: addiu       $v1, $v0, -0x1
    ctx->r3 = ADD32(ctx->r2, -0X1);
    // 0x0025CD1C: andi        $v0, $v1, 0xFF
    ctx->r2 = ctx->r3 & 0XFF;
    // 0x0025CD20: bne         $v0, $zero, L_0025D010
    if (ctx->r2 != 0) {
        // 0x0025CD24: sb          $v1, 0x10($s0)
        MEM_B(0X10, ctx->r16) = ctx->r3;
            goto L_0025D010;
    }
    // 0x0025CD24: sb          $v1, 0x10($s0)
    MEM_B(0X10, ctx->r16) = ctx->r3;
    // 0x0025CD28: lbu         $v0, 0x2D($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0X2D);
    // 0x0025CD2C: addu        $v0, $v1, $v0
    ctx->r2 = ADD32(ctx->r3, ctx->r2);
    // 0x0025CD30: lb          $v1, 0x34($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X34);
    // 0x0025CD34: sb          $v0, 0x10($s0)
    MEM_B(0X10, ctx->r16) = ctx->r2;
    // 0x0025CD38: addiu       $v0, $zero, 0x1D
    ctx->r2 = ADD32(0, 0X1D);
    // 0x0025CD3C: bne         $v1, $v0, L_0025CD8C
    if (ctx->r3 != ctx->r2) {
        // 0x0025CD40: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_0025CD8C;
    }
    // 0x0025CD40: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x0025CD44: lbu         $v1, 0xC8($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XC8);
    // 0x0025CD48: addiu       $v1, $v1, 0xA
    ctx->r3 = ADD32(ctx->r3, 0XA);
    // 0x0025CD4C: slti        $v0, $v1, 0x100
    ctx->r2 = SIGNED(ctx->r3) < 0X100 ? 1 : 0;
    // 0x0025CD50: beql        $v0, $zero, L_0025CD58
    if (ctx->r2 == 0) {
        // 0x0025CD54: addiu       $v1, $zero, 0xFF
        ctx->r3 = ADD32(0, 0XFF);
            goto L_0025CD58;
    }
    goto skip_0;
    // 0x0025CD54: addiu       $v1, $zero, 0xFF
    ctx->r3 = ADD32(0, 0XFF);
    skip_0:
L_0025CD58:
    // 0x0025CD58: andi        $v0, $v1, 0xFF
    ctx->r2 = ctx->r3 & 0XFF;
    // 0x0025CD5C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0025CD60: lwc1        $f0, 0x75EC($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X75EC);
    // 0x0025CD64: mtc1        $v0, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r2;
    // 0x0025CD68: cvt.s.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.fl = CVT_S_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x0025CD6C: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x0025CD70: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0025CD74: lwc1        $f0, 0x75F0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X75F0);
    // 0x0025CD78: mul.s       $f0, $f1, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x0025CD7C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0025CD80: lwc1        $f1, 0x75F4($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X75F4);
    // 0x0025CD84: j           L_0025CF64
    // 0x0025CD88: sb          $v1, 0xC8($s0)
    MEM_B(0XC8, ctx->r16) = ctx->r3;
        goto L_0025CF64;
    // 0x0025CD88: sb          $v1, 0xC8($s0)
    MEM_B(0XC8, ctx->r16) = ctx->r3;
L_0025CD8C:
    // 0x0025CD8C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x0025CD90: jal         0x00243414
    // 0x0025CD94: addiu       $a2, $zero, 0x1D
    ctx->r6 = ADD32(0, 0X1D);
    func_00243414(rdram, ctx);
        goto after_2;
    // 0x0025CD94: addiu       $a2, $zero, 0x1D
    ctx->r6 = ADD32(0, 0X1D);
    after_2:
    // 0x0025CD98: j           L_0025D010
    // 0x0025CD9C: nop

        goto L_0025D010;
    // 0x0025CD9C: nop

L_0025CDA0:
    // 0x0025CDA0: sw          $zero, 0x1BC($s4)
    MEM_W(0X1BC, ctx->r20) = 0;
L_0025CDA4:
    // 0x0025CDA4: lw          $v0, 0x0($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X0);
    // 0x0025CDA8: andi        $v0, $v0, 0x100
    ctx->r2 = ctx->r2 & 0X100;
    // 0x0025CDAC: beq         $v0, $zero, L_0025D010
    if (ctx->r2 == 0) {
        // 0x0025CDB0: addiu       $v0, $zero, 0x3D
        ctx->r2 = ADD32(0, 0X3D);
            goto L_0025D010;
    }
    // 0x0025CDB0: addiu       $v0, $zero, 0x3D
    ctx->r2 = ADD32(0, 0X3D);
    // 0x0025CDB4: lb          $v1, 0x34($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X34);
    // 0x0025CDB8: beq         $v1, $v0, L_0025D010
    if (ctx->r3 == ctx->r2) {
        // 0x0025CDBC: addiu       $v0, $zero, 0x20
        ctx->r2 = ADD32(0, 0X20);
            goto L_0025D010;
    }
    // 0x0025CDBC: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x0025CDC0: bne         $v1, $v0, L_0025CE1C
    if (ctx->r3 != ctx->r2) {
        // 0x0025CDC4: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_0025CE1C;
    }
    // 0x0025CDC4: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x0025CDC8: lbu         $v1, 0xC8($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XC8);
    // 0x0025CDCC: addiu       $v1, $v1, 0xA
    ctx->r3 = ADD32(ctx->r3, 0XA);
    // 0x0025CDD0: slti        $v0, $v1, 0x100
    ctx->r2 = SIGNED(ctx->r3) < 0X100 ? 1 : 0;
    // 0x0025CDD4: beql        $v0, $zero, L_0025CDDC
    if (ctx->r2 == 0) {
        // 0x0025CDD8: addiu       $v1, $zero, 0xFF
        ctx->r3 = ADD32(0, 0XFF);
            goto L_0025CDDC;
    }
    goto skip_1;
    // 0x0025CDD8: addiu       $v1, $zero, 0xFF
    ctx->r3 = ADD32(0, 0XFF);
    skip_1:
L_0025CDDC:
    // 0x0025CDDC: lwc1        $f0, 0x64($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X64);
    // 0x0025CDE0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0025CDE4: lwc1        $f2, 0x75F8($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X75F8);
    // 0x0025CDE8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0025CDEC: lwc1        $f1, 0x75FC($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X75FC);
    // 0x0025CDF0: add.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f2.fl;
    // 0x0025CDF4: sb          $v1, 0xC8($s0)
    MEM_B(0XC8, ctx->r16) = ctx->r3;
    // 0x0025CDF8: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x0025CDFC: nop

    // 0x0025CE00: bc1f        L_0025CE14
    if (!c1cs) {
        // 0x0025CE04: swc1        $f0, 0x64($s0)
        MEM_W(0X64, ctx->r16) = ctx->f0.u32l;
            goto L_0025CE14;
    }
    // 0x0025CE04: swc1        $f0, 0x64($s0)
    MEM_W(0X64, ctx->r16) = ctx->f0.u32l;
    // 0x0025CE08: add.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f2.fl;
    // 0x0025CE0C: j           L_0025CF70
    // 0x0025CE10: swc1        $f0, 0x64($s0)
    MEM_W(0X64, ctx->r16) = ctx->f0.u32l;
        goto L_0025CF70;
    // 0x0025CE10: swc1        $f0, 0x64($s0)
    MEM_W(0X64, ctx->r16) = ctx->f0.u32l;
L_0025CE14:
    // 0x0025CE14: j           L_0025CF70
    // 0x0025CE18: mov.s       $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    ctx->f0.fl = ctx->f1.fl;
        goto L_0025CF70;
    // 0x0025CE18: mov.s       $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    ctx->f0.fl = ctx->f1.fl;
L_0025CE1C:
    // 0x0025CE1C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x0025CE20: jal         0x00243414
    // 0x0025CE24: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    func_00243414(rdram, ctx);
        goto after_3;
    // 0x0025CE24: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    after_3:
    // 0x0025CE28: lwc1        $f0, 0x1BC($s4)
    ctx->f0.u32l = MEM_W(ctx->r20, 0X1BC);
    // 0x0025CE2C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0025CE30: lwc1        $f1, 0x7600($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X7600);
    // 0x0025CE34: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0025CE38: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0025CE3C: lwc1        $f1, 0x7604($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X7604);
    // 0x0025CE40: j           L_0025CF70
    // 0x0025CE44: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
        goto L_0025CF70;
    // 0x0025CE44: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
L_0025CE48:
    // 0x0025CE48: lw          $v0, 0x0($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X0);
    // 0x0025CE4C: andi        $v0, $v0, 0x80
    ctx->r2 = ctx->r2 & 0X80;
    // 0x0025CE50: beq         $v0, $zero, L_0025D010
    if (ctx->r2 == 0) {
        // 0x0025CE54: addiu       $v0, $zero, 0x1F
        ctx->r2 = ADD32(0, 0X1F);
            goto L_0025D010;
    }
    // 0x0025CE54: addiu       $v0, $zero, 0x1F
    ctx->r2 = ADD32(0, 0X1F);
    // 0x0025CE58: lb          $v1, 0x34($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X34);
    // 0x0025CE5C: bne         $v1, $v0, L_0025CEAC
    if (ctx->r3 != ctx->r2) {
        // 0x0025CE60: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_0025CEAC;
    }
    // 0x0025CE60: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x0025CE64: lbu         $v1, 0xC8($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XC8);
    // 0x0025CE68: addiu       $v1, $v1, 0xA
    ctx->r3 = ADD32(ctx->r3, 0XA);
    // 0x0025CE6C: slti        $v0, $v1, 0x100
    ctx->r2 = SIGNED(ctx->r3) < 0X100 ? 1 : 0;
    // 0x0025CE70: beql        $v0, $zero, L_0025CE78
    if (ctx->r2 == 0) {
        // 0x0025CE74: addiu       $v1, $zero, 0xFF
        ctx->r3 = ADD32(0, 0XFF);
            goto L_0025CE78;
    }
    goto skip_2;
    // 0x0025CE74: addiu       $v1, $zero, 0xFF
    ctx->r3 = ADD32(0, 0XFF);
    skip_2:
L_0025CE78:
    // 0x0025CE78: andi        $v0, $v1, 0xFF
    ctx->r2 = ctx->r3 & 0XFF;
    // 0x0025CE7C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0025CE80: lwc1        $f0, 0x7608($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X7608);
    // 0x0025CE84: mtc1        $v0, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r2;
    // 0x0025CE88: cvt.s.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.fl = CVT_S_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x0025CE8C: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x0025CE90: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0025CE94: lwc1        $f0, 0x760C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X760C);
    // 0x0025CE98: mul.s       $f0, $f1, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x0025CE9C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0025CEA0: lwc1        $f1, 0x7610($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X7610);
    // 0x0025CEA4: j           L_0025CF64
    // 0x0025CEA8: sb          $v1, 0xC8($s0)
    MEM_B(0XC8, ctx->r16) = ctx->r3;
        goto L_0025CF64;
    // 0x0025CEA8: sb          $v1, 0xC8($s0)
    MEM_B(0XC8, ctx->r16) = ctx->r3;
L_0025CEAC:
    // 0x0025CEAC: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x0025CEB0: jal         0x00243414
    // 0x0025CEB4: addiu       $a2, $zero, 0x1F
    ctx->r6 = ADD32(0, 0X1F);
    func_00243414(rdram, ctx);
        goto after_4;
    // 0x0025CEB4: addiu       $a2, $zero, 0x1F
    ctx->r6 = ADD32(0, 0X1F);
    after_4:
    // 0x0025CEB8: j           L_0025D010
    // 0x0025CEBC: nop

        goto L_0025D010;
    // 0x0025CEBC: nop

L_0025CEC0:
    // 0x0025CEC0: lui         $s1, 0x800F
    ctx->r17 = S32(0X800F << 16);
    // 0x0025CEC4: addiu       $s1, $s1, 0x1CE0
    ctx->r17 = ADD32(ctx->r17, 0X1CE0);
    // 0x0025CEC8: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x0025CECC: beq         $v0, $zero, L_0025D010
    if (ctx->r2 == 0) {
        // 0x0025CED0: addiu       $v1, $zero, 0x1
        ctx->r3 = ADD32(0, 0X1);
            goto L_0025D010;
    }
    // 0x0025CED0: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x0025CED4: lbu         $v0, 0x7D($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X7D);
    // 0x0025CED8: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
    // 0x0025CEDC: bne         $v0, $v1, L_0025D010
    if (ctx->r2 != ctx->r3) {
        // 0x0025CEE0: nop
    
            goto L_0025D010;
    }
    // 0x0025CEE0: nop

    // 0x0025CEE4: lw          $v1, 0x0($s3)
    ctx->r3 = MEM_W(ctx->r19, 0X0);
    // 0x0025CEE8: andi        $v0, $v1, 0x400
    ctx->r2 = ctx->r3 & 0X400;
    // 0x0025CEEC: beq         $v0, $zero, L_0025CFA4
    if (ctx->r2 == 0) {
        // 0x0025CEF0: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_0025CFA4;
    }
    // 0x0025CEF0: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x0025CEF4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x0025CEF8: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x0025CEFC: lw          $a1, 0x4($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X4);
    // 0x0025CF00: lw          $a2, 0x8($s2)
    ctx->r6 = MEM_W(ctx->r18, 0X8);
    // 0x0025CF04: lw          $a3, 0xC($s2)
    ctx->r7 = MEM_W(ctx->r18, 0XC);
    // 0x0025CF08: jal         0x00275544
    // 0x0025CF0C: addiu       $a0, $zero, 0x1AB
    ctx->r4 = ADD32(0, 0X1AB);
    func_00275544(rdram, ctx);
        goto after_5;
    // 0x0025CF0C: addiu       $a0, $zero, 0x1AB
    ctx->r4 = ADD32(0, 0X1AB);
    after_5:
    // 0x0025CF10: lb          $v1, 0x34($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X34);
    // 0x0025CF14: addiu       $v0, $zero, 0x21
    ctx->r2 = ADD32(0, 0X21);
    // 0x0025CF18: bnel        $v1, $v0, L_0025CF78
    if (ctx->r3 != ctx->r2) {
        // 0x0025CF1C: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_0025CF78;
    }
    goto skip_3;
    // 0x0025CF1C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    skip_3:
    // 0x0025CF20: lbu         $v1, 0xC8($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XC8);
    // 0x0025CF24: addiu       $v1, $v1, 0x14
    ctx->r3 = ADD32(ctx->r3, 0X14);
    // 0x0025CF28: slti        $v0, $v1, 0x100
    ctx->r2 = SIGNED(ctx->r3) < 0X100 ? 1 : 0;
    // 0x0025CF2C: beql        $v0, $zero, L_0025CF34
    if (ctx->r2 == 0) {
        // 0x0025CF30: addiu       $v1, $zero, 0xFF
        ctx->r3 = ADD32(0, 0XFF);
            goto L_0025CF34;
    }
    goto skip_4;
    // 0x0025CF30: addiu       $v1, $zero, 0xFF
    ctx->r3 = ADD32(0, 0XFF);
    skip_4:
L_0025CF34:
    // 0x0025CF34: sb          $v1, 0xC8($s0)
    MEM_B(0XC8, ctx->r16) = ctx->r3;
    // 0x0025CF38: andi        $v0, $v1, 0xFF
    ctx->r2 = ctx->r3 & 0XFF;
    // 0x0025CF3C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0025CF40: lwc1        $f0, 0x7614($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X7614);
    // 0x0025CF44: mtc1        $v0, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r2;
    // 0x0025CF48: cvt.s.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.fl = CVT_S_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x0025CF4C: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x0025CF50: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0025CF54: lwc1        $f0, 0x7618($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X7618);
    // 0x0025CF58: mul.s       $f0, $f1, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x0025CF5C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0025CF60: lwc1        $f1, 0x761C($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X761C);
L_0025CF64:
    // 0x0025CF64: add.s       $f1, $f0, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x0025CF68: lwc1        $f0, 0x64($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X64);
    // 0x0025CF6C: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
L_0025CF70:
    // 0x0025CF70: j           L_0025D010
    // 0x0025CF74: swc1        $f0, 0x64($s0)
    MEM_W(0X64, ctx->r16) = ctx->f0.u32l;
        goto L_0025D010;
    // 0x0025CF74: swc1        $f0, 0x64($s0)
    MEM_W(0X64, ctx->r16) = ctx->f0.u32l;
L_0025CF78:
    // 0x0025CF78: lw          $t0, 0xE4($s1)
    ctx->r8 = MEM_W(ctx->r17, 0XE4);
    // 0x0025CF7C: lw          $t1, 0xE8($s1)
    ctx->r9 = MEM_W(ctx->r17, 0XE8);
    // 0x0025CF80: lw          $t2, 0xEC($s1)
    ctx->r10 = MEM_W(ctx->r17, 0XEC);
    // 0x0025CF84: sw          $t0, 0xE0($s0)
    MEM_W(0XE0, ctx->r16) = ctx->r8;
    // 0x0025CF88: sw          $t1, 0xE4($s0)
    MEM_W(0XE4, ctx->r16) = ctx->r9;
    // 0x0025CF8C: sw          $t2, 0xE8($s0)
    MEM_W(0XE8, ctx->r16) = ctx->r10;
    // 0x0025CF90: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x0025CF94: jal         0x00243414
    // 0x0025CF98: addiu       $a2, $zero, 0x21
    ctx->r6 = ADD32(0, 0X21);
    func_00243414(rdram, ctx);
        goto after_6;
    // 0x0025CF98: addiu       $a2, $zero, 0x21
    ctx->r6 = ADD32(0, 0X21);
    after_6:
    // 0x0025CF9C: j           L_0025D010
    // 0x0025CFA0: nop

        goto L_0025D010;
    // 0x0025CFA0: nop

L_0025CFA4:
    // 0x0025CFA4: andi        $v0, $v1, 0x2000
    ctx->r2 = ctx->r3 & 0X2000;
    // 0x0025CFA8: beq         $v0, $zero, L_0025D010
    if (ctx->r2 == 0) {
        // 0x0025CFAC: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_0025D010;
    }
    // 0x0025CFAC: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x0025CFB0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x0025CFB4: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x0025CFB8: lw          $a1, 0x4($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X4);
    // 0x0025CFBC: lw          $a2, 0x8($s2)
    ctx->r6 = MEM_W(ctx->r18, 0X8);
    // 0x0025CFC0: lw          $a3, 0xC($s2)
    ctx->r7 = MEM_W(ctx->r18, 0XC);
    // 0x0025CFC4: jal         0x00275544
    // 0x0025CFC8: addiu       $a0, $zero, 0x213
    ctx->r4 = ADD32(0, 0X213);
    func_00275544(rdram, ctx);
        goto after_7;
    // 0x0025CFC8: addiu       $a0, $zero, 0x213
    ctx->r4 = ADD32(0, 0X213);
    after_7:
    // 0x0025CFCC: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x0025CFD0: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x0025CFD4: jal         0x00243414
    // 0x0025CFD8: addiu       $a2, $zero, 0x22
    ctx->r6 = ADD32(0, 0X22);
    func_00243414(rdram, ctx);
        goto after_8;
    // 0x0025CFD8: addiu       $a2, $zero, 0x22
    ctx->r6 = ADD32(0, 0X22);
    after_8:
    // 0x0025CFDC: j           L_0025D010
    // 0x0025CFE0: nop

        goto L_0025D010;
    // 0x0025CFE0: nop

L_0025CFE4:
    // 0x0025CFE4: lwc1        $f1, 0xD0($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0XD0);
    // 0x0025CFE8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0025CFEC: lwc1        $f0, 0x7620($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X7620);
    // 0x0025CFF0: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x0025CFF4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0025CFF8: lwc1        $f0, 0x7624($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X7624);
    // 0x0025CFFC: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x0025D000: nop

    // 0x0025D004: bc1fl       L_0025D00C
    if (!c1cs) {
        // 0x0025D008: mov.s       $f1, $f0
        CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    ctx->f1.fl = ctx->f0.fl;
            goto L_0025D00C;
    }
    goto skip_5;
    // 0x0025D008: mov.s       $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    ctx->f1.fl = ctx->f0.fl;
    skip_5:
L_0025D00C:
    // 0x0025D00C: swc1        $f1, 0xD0($s0)
    MEM_W(0XD0, ctx->r16) = ctx->f_odd[(1 - 1) * 2];
L_0025D010:
    // 0x0025D010: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x0025D014: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x0025D018: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x0025D01C: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x0025D020: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x0025D024: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x0025D028: jr          $ra
    // 0x0025D02C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x0025D02C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_0025AC30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0025AC30: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0025AC34: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x0025AC38: lw          $v0, 0x14($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X14);
    // 0x0025AC3C: lhu         $a3, 0x78($v0)
    ctx->r7 = MEM_HU(ctx->r2, 0X78);
    // 0x0025AC40: lui         $a2, 0x800B
    ctx->r6 = S32(0X800B << 16);
    // 0x0025AC44: addiu       $a2, $a2, 0x570
    ctx->r6 = ADD32(ctx->r6, 0X570);
    // 0x0025AC48: jal         0x00245A98
    // 0x0025AC4C: nop

    func_00245A98(rdram, ctx);
        goto after_0;
    // 0x0025AC4C: nop

    after_0:
    // 0x0025AC50: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x0025AC54: jr          $ra
    // 0x0025AC58: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0025AC58: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00449724(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00449724: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x00449728: sdc1        $f22, 0x38($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X38, ctx->r29);
    // 0x0044972C: mtc1        $a1, $f22
    ctx->f22.u32l = ctx->r5;
    // 0x00449730: sdc1        $f20, 0x28($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X28, ctx->r29);
    // 0x00449734: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x00449738: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x0044973C: addu        $s4, $a0, $zero
    ctx->r20 = ADD32(ctx->r4, 0);
    // 0x00449740: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x00449744: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    // 0x00449748: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x0044974C: addu        $s3, $s2, $zero
    ctx->r19 = ADD32(ctx->r18, 0);
    // 0x00449750: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00449754: addu        $s1, $s2, $zero
    ctx->r17 = ADD32(ctx->r18, 0);
    // 0x00449758: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0044975C: addu        $s0, $s2, $zero
    ctx->r16 = ADD32(ctx->r18, 0);
    // 0x00449760: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x00449764: sdc1        $f21, 0x30($sp)
    CHECK_FR(ctx, 21);
    SD(ctx->f21.u64, 0X30, ctx->r29);
    // 0x00449768: mov.s       $f21, $f20
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 20);
    ctx->f21.fl = ctx->f20.fl;
L_0044976C:
    // 0x0044976C: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x00449770: lw          $v0, 0x1BB0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1BB0);
    // 0x00449774: lw          $a0, 0x4($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X4);
    // 0x00449778: jal         0x002017D4
    // 0x0044977C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_002017D4(rdram, ctx);
        goto after_0;
    // 0x0044977C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_0:
    // 0x00449780: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x00449784: slt         $v0, $s0, $v0
    ctx->r2 = SIGNED(ctx->r16) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x00449788: beq         $v0, $zero, L_0044984C
    if (ctx->r2 == 0) {
        // 0x0044978C: nop
    
            goto L_0044984C;
    }
    // 0x0044978C: nop

    // 0x00449790: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x00449794: lw          $v0, 0x1BB0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1BB0);
    // 0x00449798: addu        $s1, $s0, $zero
    ctx->r17 = ADD32(ctx->r16, 0);
    // 0x0044979C: lw          $a0, 0x4($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X4);
    // 0x004497A0: jal         0x002017D4
    // 0x004497A4: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_002017D4(rdram, ctx);
        goto after_1;
    // 0x004497A4: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_1:
    // 0x004497A8: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x004497AC: jal         0x002017D4
    // 0x004497B0: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_002017D4(rdram, ctx);
        goto after_2;
    // 0x004497B0: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_2:
    // 0x004497B4: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x004497B8: jal         0x002017D4
    // 0x004497BC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_002017D4(rdram, ctx);
        goto after_3;
    // 0x004497BC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_3:
    // 0x004497C0: lw          $s2, 0x4($v0)
    ctx->r18 = MEM_W(ctx->r2, 0X4);
    // 0x004497C4: addiu       $s3, $v0, 0x8
    ctx->r19 = ADD32(ctx->r2, 0X8);
    // 0x004497C8: sll         $v0, $s2, 3
    ctx->r2 = S32(ctx->r18 << 3);
    // 0x004497CC: addu        $v0, $v0, $s2
    ctx->r2 = ADD32(ctx->r2, ctx->r18);
    // 0x004497D0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x004497D4: addu        $v0, $v0, $s3
    ctx->r2 = ADD32(ctx->r2, ctx->r19);
    // 0x004497D8: lwc1        $f0, -0x8($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, -0X8);
    // 0x004497DC: mov.s       $f20, $f21
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 21);
    ctx->f20.fl = ctx->f21.fl;
    // 0x004497E0: bne         $s1, $zero, L_004497F8
    if (ctx->r17 != 0) {
        // 0x004497E4: add.s       $f21, $f20, $f0
        CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f21.fl = ctx->f20.fl + ctx->f0.fl;
            goto L_004497F8;
    }
    // 0x004497E4: add.s       $f21, $f20, $f0
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f21.fl = ctx->f20.fl + ctx->f0.fl;
    // 0x004497E8: c.le.s      $f22, $f20
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f22.fl <= ctx->f20.fl;
    // 0x004497EC: nop

    // 0x004497F0: bc1t        L_0044984C
    if (c1cs) {
        // 0x004497F4: nop
    
            goto L_0044984C;
    }
    // 0x004497F4: nop

L_004497F8:
    // 0x004497F8: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x004497FC: lw          $v0, 0x1BB0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1BB0);
    // 0x00449800: lw          $a0, 0x4($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X4);
    // 0x00449804: jal         0x002017D4
    // 0x00449808: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_002017D4(rdram, ctx);
        goto after_4;
    // 0x00449808: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_4:
    // 0x0044980C: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x00449810: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x00449814: bne         $s1, $v0, L_0044982C
    if (ctx->r17 != ctx->r2) {
        // 0x00449818: nop
    
            goto L_0044982C;
    }
    // 0x00449818: nop

    // 0x0044981C: c.lt.s      $f21, $f22
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f21.fl < ctx->f22.fl;
    // 0x00449820: nop

    // 0x00449824: bc1t        L_0044984C
    if (c1cs) {
        // 0x00449828: nop
    
            goto L_0044984C;
    }
    // 0x00449828: nop

L_0044982C:
    // 0x0044982C: c.le.s      $f20, $f22
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f20.fl <= ctx->f22.fl;
    // 0x00449830: nop

    // 0x00449834: bc1f        L_0044976C
    if (!c1cs) {
        // 0x00449838: addiu       $s0, $s1, 0x1
        ctx->r16 = ADD32(ctx->r17, 0X1);
            goto L_0044976C;
    }
    // 0x00449838: addiu       $s0, $s1, 0x1
    ctx->r16 = ADD32(ctx->r17, 0X1);
    // 0x0044983C: c.le.s      $f22, $f21
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 21);
    c1cs = ctx->f22.fl <= ctx->f21.fl;
    // 0x00449840: nop

    // 0x00449844: bc1f        L_0044976C
    if (!c1cs) {
        // 0x00449848: nop
    
            goto L_0044976C;
    }
    // 0x00449848: nop

L_0044984C:
    // 0x0044984C: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x00449850: lw          $v0, 0x1BB0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1BB0);
    // 0x00449854: lw          $a0, 0x4($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X4);
    // 0x00449858: jal         0x002017D4
    // 0x0044985C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_002017D4(rdram, ctx);
        goto after_5;
    // 0x0044985C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_5:
    // 0x00449860: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x00449864: jal         0x002017D4
    // 0x00449868: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_002017D4(rdram, ctx);
        goto after_6;
    // 0x00449868: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_6:
    // 0x0044986C: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x00449870: jal         0x002017D4
    // 0x00449874: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_002017D4(rdram, ctx);
        goto after_7;
    // 0x00449874: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_7:
    // 0x00449878: lw          $v0, 0x4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4);
    // 0x0044987C: bnel        $v0, $zero, L_00449884
    if (ctx->r2 != 0) {
        // 0x00449880: mov.s       $f22, $f20
        CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 20);
    ctx->f22.fl = ctx->f20.fl;
            goto L_00449884;
    }
    goto skip_0;
    // 0x00449880: mov.s       $f22, $f20
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 20);
    ctx->f22.fl = ctx->f20.fl;
    skip_0:
L_00449884:
    // 0x00449884: sub.s       $f22, $f22, $f20
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f22.fl = ctx->f22.fl - ctx->f20.fl;
    // 0x00449888: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    // 0x0044988C: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    // 0x00449890: mfc1        $a3, $f22
    ctx->r7 = (int32_t)ctx->f22.u32l;
    // 0x00449894: jal         0x004101B8
    // 0x00449898: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    func_004101B8(rdram, ctx);
        goto after_8;
    // 0x00449898: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    after_8:
    // 0x0044989C: addu        $v0, $s4, $zero
    ctx->r2 = ADD32(ctx->r20, 0);
    // 0x004498A0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x004498A4: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x004498A8: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x004498AC: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x004498B0: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x004498B4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x004498B8: ldc1        $f22, 0x38($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X38);
    // 0x004498BC: ldc1        $f21, 0x30($sp)
    CHECK_FR(ctx, 21);
    ctx->f21.u64 = LD(ctx->r29, 0X30);
    // 0x004498C0: ldc1        $f20, 0x28($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X28);
    // 0x004498C4: jr          $ra
    // 0x004498C8: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x004498C8: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_00263714(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00263714: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00263718: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x0026371C: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x00263720: addiu       $a0, $a0, 0x7078
    ctx->r4 = ADD32(ctx->r4, 0X7078);
    // 0x00263724: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x00263728: jal         0x00220408
    // 0x0026372C: nop

    func_00220408(rdram, ctx);
        goto after_0;
    // 0x0026372C: nop

    after_0:
    // 0x00263730: xori        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 ^ 0X1;
    // 0x00263734: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x00263738: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x0026373C: jr          $ra
    // 0x00263740: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00263740: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0026508C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0026508C: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x00265090: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x00265094: addu        $s2, $a1, $zero
    ctx->r18 = ADD32(ctx->r5, 0);
    // 0x00265098: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x0026509C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x002650A0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x002650A4: sdc1        $f23, 0x38($sp)
    CHECK_FR(ctx, 23);
    SD(ctx->f23.u64, 0X38, ctx->r29);
    // 0x002650A8: sdc1        $f22, 0x30($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X30, ctx->r29);
    // 0x002650AC: sdc1        $f21, 0x28($sp)
    CHECK_FR(ctx, 21);
    SD(ctx->f21.u64, 0X28, ctx->r29);
    // 0x002650B0: sdc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X20, ctx->r29);
    // 0x002650B4: lw          $s0, 0x10C($s2)
    ctx->r16 = MEM_W(ctx->r18, 0X10C);
    // 0x002650B8: beq         $s0, $zero, L_00265140
    if (ctx->r16 == 0) {
        // 0x002650BC: addu        $s1, $a0, $zero
        ctx->r17 = ADD32(ctx->r4, 0);
            goto L_00265140;
    }
    // 0x002650BC: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x002650C0: lui         $at, 0x800F
    ctx->r1 = S32(0X800F << 16);
    // 0x002650C4: sb          $zero, 0x1F94($at)
    MEM_B(0X1F94, ctx->r1) = 0;
    // 0x002650C8: lw          $a1, 0x4($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X4);
    // 0x002650CC: lw          $a2, 0x8($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X8);
    // 0x002650D0: lw          $a3, 0xC($s0)
    ctx->r7 = MEM_W(ctx->r16, 0XC);
    // 0x002650D4: jal         0x0024665C
    // 0x002650D8: nop

    func_0024665C(rdram, ctx);
        goto after_0;
    // 0x002650D8: nop

    after_0:
    // 0x002650DC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x002650E0: jal         0x002672C8
    // 0x002650E4: mov.s       $f23, $f0
    CHECK_FR(ctx, 23);
    CHECK_FR(ctx, 0);
    ctx->f23.fl = ctx->f0.fl;
    func_002672C8(rdram, ctx);
        goto after_1;
    // 0x002650E4: mov.s       $f23, $f0
    CHECK_FR(ctx, 23);
    CHECK_FR(ctx, 0);
    ctx->f23.fl = ctx->f0.fl;
    after_1:
    // 0x002650E8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x002650EC: jal         0x002672C8
    // 0x002650F0: mov.s       $f21, $f0
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 0);
    ctx->f21.fl = ctx->f0.fl;
    func_002672C8(rdram, ctx);
        goto after_2;
    // 0x002650F0: mov.s       $f21, $f0
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 0);
    ctx->f21.fl = ctx->f0.fl;
    after_2:
    // 0x002650F4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x002650F8: jal         0x002672C8
    // 0x002650FC: mov.s       $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    ctx->f22.fl = ctx->f0.fl;
    func_002672C8(rdram, ctx);
        goto after_3;
    // 0x002650FC: mov.s       $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    ctx->f22.fl = ctx->f0.fl;
    after_3:
    // 0x00265100: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00265104: jal         0x002672C8
    // 0x00265108: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    func_002672C8(rdram, ctx);
        goto after_4;
    // 0x00265108: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    after_4:
    // 0x0026510C: add.s       $f21, $f21, $f22
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f21.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f21.fl = ctx->f21.fl + ctx->f22.fl;
    // 0x00265110: add.s       $f20, $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = ctx->f20.fl + ctx->f0.fl;
    // 0x00265114: mul.s       $f21, $f21, $f20
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f21.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f21.fl = MUL_S(ctx->f21.fl, ctx->f20.fl);
    // 0x00265118: c.lt.s      $f21, $f23
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 23);
    c1cs = ctx->f21.fl < ctx->f23.fl;
    // 0x0026511C: nop

    // 0x00265120: bc1f        L_0026514C
    if (!c1cs) {
        // 0x00265124: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_0026514C;
    }
    // 0x00265124: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00265128: sw          $zero, 0x10C($s2)
    MEM_W(0X10C, ctx->r18) = 0;
    // 0x0026512C: addiu       $a1, $a0, 0x140
    ctx->r5 = ADD32(ctx->r4, 0X140);
    // 0x00265130: jal         0x0025E488
    // 0x00265134: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_0025E488(rdram, ctx);
        goto after_5;
    // 0x00265134: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_5:
    // 0x00265138: j           L_0026514C
    // 0x0026513C: nop

        goto L_0026514C;
    // 0x0026513C: nop

L_00265140:
    // 0x00265140: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x00265144: lui         $at, 0x800F
    ctx->r1 = S32(0X800F << 16);
    // 0x00265148: sb          $v0, 0x1F94($at)
    MEM_B(0X1F94, ctx->r1) = ctx->r2;
L_0026514C:
    // 0x0026514C: lwc1        $f0, 0x18($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X18);
    // 0x00265150: mtc1        $zero, $f1
    ctx->f_odd[(1 - 1) * 2] = 0;
    // 0x00265154: c.eq.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl == ctx->f1.fl;
    // 0x00265158: nop

    // 0x0026515C: bc1f        L_00265198
    if (!c1cs) {
        // 0x00265160: nop
    
            goto L_00265198;
    }
    // 0x00265160: nop

    // 0x00265164: lwc1        $f0, 0x1C($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X1C);
    // 0x00265168: c.eq.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl == ctx->f1.fl;
    // 0x0026516C: nop

    // 0x00265170: bc1f        L_00265198
    if (!c1cs) {
        // 0x00265174: nop
    
            goto L_00265198;
    }
    // 0x00265174: nop

    // 0x00265178: lwc1        $f0, 0x20($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X20);
    // 0x0026517C: c.eq.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl == ctx->f1.fl;
    // 0x00265180: nop

    // 0x00265184: bc1f        L_00265198
    if (!c1cs) {
        // 0x00265188: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_00265198;
    }
    // 0x00265188: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0026518C: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x00265190: jal         0x00243414
    // 0x00265194: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_00243414(rdram, ctx);
        goto after_6;
    // 0x00265194: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_6:
L_00265198:
    // 0x00265198: lwc1        $f1, 0x18($s1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r17, 0X18);
    // 0x0026519C: mul.s       $f1, $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f1.fl);
    // 0x002651A0: lwc1        $f0, 0x1C($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X1C);
    // 0x002651A4: mul.s       $f0, $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x002651A8: lwc1        $f12, 0x20($s1)
    ctx->f12.u32l = MEM_W(ctx->r17, 0X20);
    // 0x002651AC: mul.s       $f12, $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x002651B0: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x002651B4: jal         0x00298470
    // 0x002651B8: add.s       $f12, $f1, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = ctx->f1.fl + ctx->f12.fl;
    func_00298470(rdram, ctx);
        goto after_7;
    // 0x002651B8: add.s       $f12, $f1, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = ctx->f1.fl + ctx->f12.fl;
    after_7:
    // 0x002651BC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002651C0: lwc1        $f1, 0x7C84($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X7C84);
    // 0x002651C4: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x002651C8: lwc1        $f1, 0x110($s2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r18, 0X110);
    // 0x002651CC: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x002651D0: swc1        $f1, 0x110($s2)
    MEM_W(0X110, ctx->r18) = ctx->f_odd[(1 - 1) * 2];
    // 0x002651D4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x002651D8: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x002651DC: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x002651E0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x002651E4: ldc1        $f23, 0x38($sp)
    CHECK_FR(ctx, 23);
    ctx->f23.u64 = LD(ctx->r29, 0X38);
    // 0x002651E8: ldc1        $f22, 0x30($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X30);
    // 0x002651EC: ldc1        $f21, 0x28($sp)
    CHECK_FR(ctx, 21);
    ctx->f21.u64 = LD(ctx->r29, 0X28);
    // 0x002651F0: ldc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X20);
    // 0x002651F4: jr          $ra
    // 0x002651F8: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x002651F8: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_0025A018(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0025A018: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0025A01C: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x0025A020: lw          $v0, 0x14($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X14);
    // 0x0025A024: lhu         $a3, 0x96($v0)
    ctx->r7 = MEM_HU(ctx->r2, 0X96);
    // 0x0025A028: lui         $a2, 0x800B
    ctx->r6 = S32(0X800B << 16);
    // 0x0025A02C: addiu       $a2, $a2, -0x6A0
    ctx->r6 = ADD32(ctx->r6, -0X6A0);
    // 0x0025A030: jal         0x00245A98
    // 0x0025A034: nop

    func_00245A98(rdram, ctx);
        goto after_0;
    // 0x0025A034: nop

    after_0:
    // 0x0025A038: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x0025A03C: jr          $ra
    // 0x0025A040: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0025A040: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_002540E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002540E4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x002540E8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x002540EC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x002540F0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x002540F4: lw          $v0, 0x518($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X518);
    // 0x002540F8: lw          $a2, 0x520($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X520);
    // 0x002540FC: lbu         $v1, 0x3E($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X3E);
    // 0x00254100: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00254104: beql        $v1, $v0, L_0025410C
    if (ctx->r3 == ctx->r2) {
        // 0x00254108: addiu       $a2, $zero, 0xB
        ctx->r6 = ADD32(0, 0XB);
            goto L_0025410C;
    }
    goto skip_0;
    // 0x00254108: addiu       $a2, $zero, 0xB
    ctx->r6 = ADD32(0, 0XB);
    skip_0:
L_0025410C:
    // 0x0025410C: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x00254110: addiu       $a0, $a0, 0x7078
    ctx->r4 = ADD32(ctx->r4, 0X7078);
    // 0x00254114: jal         0x00225EBC
    // 0x00254118: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    func_00225EBC(rdram, ctx);
        goto after_0;
    // 0x00254118: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    after_0:
    // 0x0025411C: bnel        $v0, $zero, L_00254158
    if (ctx->r2 != 0) {
        // 0x00254120: sw          $v0, 0x14($s0)
        MEM_W(0X14, ctx->r16) = ctx->r2;
            goto L_00254158;
    }
    goto skip_1;
    // 0x00254120: sw          $v0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r2;
    skip_1:
    // 0x00254124: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x00254128: addiu       $a0, $a0, 0x7078
    ctx->r4 = ADD32(ctx->r4, 0X7078);
    // 0x0025412C: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    // 0x00254130: jal         0x00225EBC
    // 0x00254134: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    func_00225EBC(rdram, ctx);
        goto after_1;
    // 0x00254134: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    after_1:
    // 0x00254138: bnel        $v0, $zero, L_00254158
    if (ctx->r2 != 0) {
        // 0x0025413C: sw          $v0, 0x14($s0)
        MEM_W(0X14, ctx->r16) = ctx->r2;
            goto L_00254158;
    }
    goto skip_2;
    // 0x0025413C: sw          $v0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r2;
    skip_2:
    // 0x00254140: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x00254144: addiu       $a0, $a0, 0x7078
    ctx->r4 = ADD32(ctx->r4, 0X7078);
    // 0x00254148: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x0025414C: jal         0x00225EBC
    // 0x00254150: addu        $a2, $a1, $zero
    ctx->r6 = ADD32(ctx->r5, 0);
    func_00225EBC(rdram, ctx);
        goto after_2;
    // 0x00254150: addu        $a2, $a1, $zero
    ctx->r6 = ADD32(ctx->r5, 0);
    after_2:
    // 0x00254154: sw          $v0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r2;
L_00254158:
    // 0x00254158: lwc1        $f0, 0x38($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X38);
    // 0x0025415C: swc1        $f0, 0x34($s0)
    MEM_W(0X34, ctx->r16) = ctx->f0.u32l;
    // 0x00254160: lwc1        $f0, 0x3C($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X3C);
    // 0x00254164: swc1        $f0, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->f0.u32l;
    // 0x00254168: lwc1        $f0, 0x40($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X40);
    // 0x0025416C: swc1        $f0, 0x3C($s0)
    MEM_W(0X3C, ctx->r16) = ctx->f0.u32l;
    // 0x00254170: lw          $v0, 0x18($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X18);
    // 0x00254174: lw          $v1, 0x14($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X14);
    // 0x00254178: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x0025417C: sw          $v0, 0x524($s0)
    MEM_W(0X524, ctx->r16) = ctx->r2;
    // 0x00254180: lw          $v0, 0x18($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X18);
    // 0x00254184: lw          $v1, 0x520($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X520);
    // 0x00254188: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x0025418C: sw          $v0, 0x144($s0)
    MEM_W(0X144, ctx->r16) = ctx->r2;
    // 0x00254190: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x00254194: bnel        $v1, $v0, L_002541D0
    if (ctx->r3 != ctx->r2) {
        // 0x00254198: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_002541D0;
    }
    goto skip_3;
    // 0x00254198: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    skip_3:
    // 0x0025419C: jal         0x002113A4
    // 0x002541A0: nop

    func_002113A4(rdram, ctx);
        goto after_3;
    // 0x002541A0: nop

    after_3:
    // 0x002541A4: lui         $v1, 0x38E3
    ctx->r3 = S32(0X38E3 << 16);
    // 0x002541A8: ori         $v1, $v1, 0x8E39
    ctx->r3 = ctx->r3 | 0X8E39;
    // 0x002541AC: mult        $v0, $v1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x002541B0: sra         $v1, $v0, 31
    ctx->r3 = S32(SIGNED(ctx->r2) >> 31);
    // 0x002541B4: mfhi        $a3
    ctx->r7 = hi;
    // 0x002541B8: sra         $a0, $a3, 2
    ctx->r4 = S32(SIGNED(ctx->r7) >> 2);
    // 0x002541BC: subu        $a0, $a0, $v1
    ctx->r4 = SUB32(ctx->r4, ctx->r3);
    // 0x002541C0: sll         $v1, $a0, 3
    ctx->r3 = S32(ctx->r4 << 3);
    // 0x002541C4: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x002541C8: sll         $v1, $v1, 1
    ctx->r3 = S32(ctx->r3 << 1);
    // 0x002541CC: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
L_002541D0:
    // 0x002541D0: sb          $v0, 0x151($s0)
    MEM_B(0X151, ctx->r16) = ctx->r2;
    // 0x002541D4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x002541D8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x002541DC: jr          $ra
    // 0x002541E0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x002541E0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00219968(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00219968: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0021996C: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x00219970: lw          $a0, 0x10($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X10);
    // 0x00219974: beql        $a0, $zero, L_00219988
    if (ctx->r4 == 0) {
        // 0x00219978: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_00219988;
    }
    goto skip_0;
    // 0x00219978: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    skip_0:
    // 0x0021997C: jal         0x00204D90
    // 0x00219980: nop

    func_00204D90(rdram, ctx);
        goto after_0;
    // 0x00219980: nop

    after_0:
    // 0x00219984: sltu        $v0, $zero, $v0
    ctx->r2 = 0 < ctx->r2 ? 1 : 0;
L_00219988:
    // 0x00219988: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x0021998C: jr          $ra
    // 0x00219990: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00219990: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00289650(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00289650: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00289654: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00289658: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x0028965C: jal         0x0042F57C
    // 0x00289660: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    func_0042F57C(rdram, ctx);
        goto after_0;
    // 0x00289660: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    after_0:
    // 0x00289664: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00289668: addiu       $a2, $zero, 0xD
    ctx->r6 = ADD32(0, 0XD);
    // 0x0028966C: lui         $a1, 0x41A0
    ctx->r5 = S32(0X41A0 << 16);
    // 0x00289670: jal         0x00288D3C
    // 0x00289674: addiu       $a3, $zero, 0x8
    ctx->r7 = ADD32(0, 0X8);
    func_00288D3C(rdram, ctx);
        goto after_1;
    // 0x00289674: addiu       $a3, $zero, 0x8
    ctx->r7 = ADD32(0, 0X8);
    after_1:
    // 0x00289678: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x0028967C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00289680: jr          $ra
    // 0x00289684: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00289684: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0025C018(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0025C018: addiu       $sp, $sp, -0xC8
    ctx->r29 = ADD32(ctx->r29, -0XC8);
    // 0x0025C01C: sw          $s1, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->r17;
    // 0x0025C020: sw          $s0, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->r16;
    // 0x0025C024: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x0025C028: sw          $ra, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->r31;
    // 0x0025C02C: sw          $s2, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->r18;
    // 0x0025C030: sdc1        $f20, 0xC0($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0XC0, ctx->r29);
    // 0x0025C034: lw          $v0, 0x3C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X3C);
    // 0x0025C038: lui         $v1, 0x1
    ctx->r3 = S32(0X1 << 16);
    // 0x0025C03C: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x0025C040: beq         $v0, $zero, L_0025C050
    if (ctx->r2 == 0) {
        // 0x0025C044: addu        $s1, $a0, $zero
        ctx->r17 = ADD32(ctx->r4, 0);
            goto L_0025C050;
    }
    // 0x0025C044: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x0025C048: jal         0x0025FEB0
    // 0x0025C04C: nop

    func_0025FEB0(rdram, ctx);
        goto after_0;
    // 0x0025C04C: nop

    after_0:
L_0025C050:
    // 0x0025C050: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // 0x0025C054: bne         $v0, $zero, L_0025C084
    if (ctx->r2 != 0) {
        // 0x0025C058: nop
    
            goto L_0025C084;
    }
    // 0x0025C058: nop

    // 0x0025C05C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0025C060: lwc1        $f20, 0x75B4($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X75B4);
    // 0x0025C064: lwc1        $f12, 0x10C($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X10C);
    // 0x0025C068: jal         0x0021170C
    // 0x0025C06C: mov.s       $f14, $f20
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 20);
    ctx->f14.fl = ctx->f20.fl;
    func_0021170C(rdram, ctx);
        goto after_1;
    // 0x0025C06C: mov.s       $f14, $f20
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 20);
    ctx->f14.fl = ctx->f20.fl;
    after_1:
    // 0x0025C070: lwc1        $f12, 0x110($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X110);
    // 0x0025C074: mov.s       $f14, $f20
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 20);
    ctx->f14.fl = ctx->f20.fl;
    // 0x0025C078: jal         0x0021170C
    // 0x0025C07C: swc1        $f0, 0x10C($s0)
    MEM_W(0X10C, ctx->r16) = ctx->f0.u32l;
    func_0021170C(rdram, ctx);
        goto after_2;
    // 0x0025C07C: swc1        $f0, 0x10C($s0)
    MEM_W(0X10C, ctx->r16) = ctx->f0.u32l;
    after_2:
    // 0x0025C080: swc1        $f0, 0x110($s0)
    MEM_W(0X110, ctx->r16) = ctx->f0.u32l;
L_0025C084:
    // 0x0025C084: lw          $a1, 0x110($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X110);
    // 0x0025C088: jal         0x00210630
    // 0x0025C08C: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    func_00210630(rdram, ctx);
        goto after_3;
    // 0x0025C08C: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    after_3:
    // 0x0025C090: lw          $a1, 0x10C($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X10C);
    // 0x0025C094: jal         0x00210790
    // 0x0025C098: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    func_00210790(rdram, ctx);
        goto after_4;
    // 0x0025C098: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    after_4:
    // 0x0025C09C: lwc1        $f12, 0x50($s1)
    ctx->f12.u32l = MEM_W(ctx->r17, 0X50);
    // 0x0025C0A0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0025C0A4: lwc1        $f20, 0x75B8($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X75B8);
    // 0x0025C0A8: mul.s       $f12, $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f12.fl = MUL_S(ctx->f12.fl, ctx->f20.fl);
    // 0x0025C0AC: jal         0x002982F0
    // 0x0025C0B0: addiu       $s2, $s1, 0x58
    ctx->r18 = ADD32(ctx->r17, 0X58);
    func_002982F0(rdram, ctx);
        goto after_5;
    // 0x0025C0B0: addiu       $s2, $s1, 0x58
    ctx->r18 = ADD32(ctx->r17, 0X58);
    after_5:
    // 0x0025C0B4: sw          $zero, 0x90($sp)
    MEM_W(0X90, ctx->r29) = 0;
    // 0x0025C0B8: swc1        $f0, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->f0.u32l;
    // 0x0025C0BC: sw          $zero, 0x98($sp)
    MEM_W(0X98, ctx->r29) = 0;
    // 0x0025C0C0: lwc1        $f12, 0x50($s1)
    ctx->f12.u32l = MEM_W(ctx->r17, 0X50);
    // 0x0025C0C4: mul.s       $f12, $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f12.fl = MUL_S(ctx->f12.fl, ctx->f20.fl);
    // 0x0025C0C8: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x0025C0CC: swc1        $f0, -0x2874($at)
    MEM_W(-0X2874, ctx->r1) = ctx->f0.u32l;
    // 0x0025C0D0: jal         0x002974C0
    // 0x0025C0D4: nop

    func_002974C0(rdram, ctx);
        goto after_6;
    // 0x0025C0D4: nop

    after_6:
    // 0x0025C0D8: addiu       $s0, $sp, 0xA0
    ctx->r16 = ADD32(ctx->r29, 0XA0);
    // 0x0025C0DC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0025C0E0: addiu       $a1, $sp, 0x90
    ctx->r5 = ADD32(ctx->r29, 0X90);
    // 0x0025C0E4: addiu       $a2, $s1, 0x40
    ctx->r6 = ADD32(ctx->r17, 0X40);
    // 0x0025C0E8: jal         0x00210F68
    // 0x0025C0EC: swc1        $f0, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->f0.u32l;
    func_00210F68(rdram, ctx);
        goto after_7;
    // 0x0025C0EC: swc1        $f0, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->f0.u32l;
    after_7:
    // 0x0025C0F0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0025C0F4: addiu       $s0, $sp, 0x50
    ctx->r16 = ADD32(ctx->r29, 0X50);
    // 0x0025C0F8: jal         0x00211114
    // 0x0025C0FC: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_00211114(rdram, ctx);
        goto after_8;
    // 0x0025C0FC: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_8:
    // 0x0025C100: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x0025C104: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x0025C108: jal         0x0020C618
    // 0x0025C10C: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    func_0020C618(rdram, ctx);
        goto after_9;
    // 0x0025C10C: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    after_9:
    // 0x0025C110: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x0025C114: lw          $v0, -0x5528($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X5528);
    // 0x0025C118: andi        $v0, $v0, 0x40
    ctx->r2 = ctx->r2 & 0X40;
    // 0x0025C11C: beq         $v0, $zero, L_0025C150
    if (ctx->r2 == 0) {
        // 0x0025C120: nop
    
            goto L_0025C150;
    }
    // 0x0025C120: nop

    // 0x0025C124: lwc1        $f0, 0x34($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X34);
    // 0x0025C128: mul.s       $f0, $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f20.fl);
    // 0x0025C12C: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x0025C130: lwc1        $f0, 0x38($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X38);
    // 0x0025C134: mul.s       $f0, $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f20.fl);
    // 0x0025C138: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x0025C13C: lwc1        $f0, 0x3C($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X3C);
    // 0x0025C140: mul.s       $f0, $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f20.fl);
    // 0x0025C144: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x0025C148: j           L_0025C15C
    // 0x0025C14C: nop

        goto L_0025C15C;
    // 0x0025C14C: nop

L_0025C150:
    // 0x0025C150: lw          $a1, 0x34($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X34);
    // 0x0025C154: lw          $a2, 0x38($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X38);
    // 0x0025C158: lw          $a3, 0x3C($s1)
    ctx->r7 = MEM_W(ctx->r17, 0X3C);
L_0025C15C:
    // 0x0025C15C: jal         0x0021034C
    // 0x0025C160: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_0021034C(rdram, ctx);
        goto after_10;
    // 0x0025C160: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_10:
    // 0x0025C164: lui         $a1, 0x469C
    ctx->r5 = S32(0X469C << 16);
    // 0x0025C168: ori         $a1, $a1, 0x4000
    ctx->r5 = ctx->r5 | 0X4000;
    // 0x0025C16C: jal         0x0020F510
    // 0x0025C170: addiu       $a0, $s1, 0x4
    ctx->r4 = ADD32(ctx->r17, 0X4);
    func_0020F510(rdram, ctx);
        goto after_11;
    // 0x0025C170: addiu       $a0, $s1, 0x4
    ctx->r4 = ADD32(ctx->r17, 0X4);
    after_11:
    // 0x0025C174: addiu       $s0, $s1, 0x58
    ctx->r16 = ADD32(ctx->r17, 0X58);
    // 0x0025C178: lw          $a1, 0x4($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X4);
    // 0x0025C17C: lw          $a2, 0x8($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X8);
    // 0x0025C180: lw          $a3, 0xC($s1)
    ctx->r7 = MEM_W(ctx->r17, 0XC);
    // 0x0025C184: jal         0x00210318
    // 0x0025C188: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00210318(rdram, ctx);
        goto after_12;
    // 0x0025C188: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_12:
    // 0x0025C18C: jal         0x00210C3C
    // 0x0025C190: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00210C3C(rdram, ctx);
        goto after_13;
    // 0x0025C190: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_13:
    // 0x0025C194: lw          $ra, 0xBC($sp)
    ctx->r31 = MEM_W(ctx->r29, 0XBC);
    // 0x0025C198: lw          $s2, 0xB8($sp)
    ctx->r18 = MEM_W(ctx->r29, 0XB8);
    // 0x0025C19C: lw          $s1, 0xB4($sp)
    ctx->r17 = MEM_W(ctx->r29, 0XB4);
    // 0x0025C1A0: lw          $s0, 0xB0($sp)
    ctx->r16 = MEM_W(ctx->r29, 0XB0);
    // 0x0025C1A4: ldc1        $f20, 0xC0($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0XC0);
    // 0x0025C1A8: jr          $ra
    // 0x0025C1AC: addiu       $sp, $sp, 0xC8
    ctx->r29 = ADD32(ctx->r29, 0XC8);
    return;
    // 0x0025C1AC: addiu       $sp, $sp, 0xC8
    ctx->r29 = ADD32(ctx->r29, 0XC8);
;}
RECOMP_FUNC void func_0041BD2C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041BD2C: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0041BD30: sw          $zero, 0x930($at)
    MEM_W(0X930, ctx->r1) = 0;
    // 0x0041BD34: jr          $ra
    // 0x0041BD38: nop

    return;
    // 0x0041BD38: nop

;}
RECOMP_FUNC void func_00446D90(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00446D90: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00446D94: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x00446D98: jal         0x00275624
    // 0x00446D9C: addiu       $a0, $zero, 0x284E
    ctx->r4 = ADD32(0, 0X284E);
    func_00275624(rdram, ctx);
        goto after_0;
    // 0x00446D9C: addiu       $a0, $zero, 0x284E
    ctx->r4 = ADD32(0, 0X284E);
    after_0:
    // 0x00446DA0: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x00446DA4: jr          $ra
    // 0x00446DA8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00446DA8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00228908(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
;}
RECOMP_FUNC void func_00269A90(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00269A90: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x00269A94: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x00269A98: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x00269A9C: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x00269AA0: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x00269AA4: bne         $s0, $zero, L_00269ACC
    if (ctx->r16 != 0) {
        // 0x00269AA8: sw          $ra, 0x38($sp)
        MEM_W(0X38, ctx->r29) = ctx->r31;
            goto L_00269ACC;
    }
    // 0x00269AA8: sw          $ra, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r31;
    // 0x00269AAC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00269AB0: lwc1        $f0, 0x7F60($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X7F60);
    // 0x00269AB4: lui         $v0, 0x800F
    ctx->r2 = S32(0X800F << 16);
    // 0x00269AB8: addiu       $v0, $v0, 0x2010
    ctx->r2 = ADD32(ctx->r2, 0X2010);
    // 0x00269ABC: sw          $zero, 0x0($v0)
    MEM_W(0X0, ctx->r2) = 0;
    // 0x00269AC0: sw          $zero, 0x8($v0)
    MEM_W(0X8, ctx->r2) = 0;
    // 0x00269AC4: j           L_00269BFC
    // 0x00269AC8: swc1        $f0, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f0.u32l;
        goto L_00269BFC;
    // 0x00269AC8: swc1        $f0, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f0.u32l;
L_00269ACC:
    // 0x00269ACC: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00269AD0: lw          $v0, 0x2604($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2604);
    // 0x00269AD4: beq         $s0, $v0, L_00269C00
    if (ctx->r16 == ctx->r2) {
        // 0x00269AD8: addu        $v0, $s1, $zero
        ctx->r2 = ADD32(ctx->r17, 0);
            goto L_00269C00;
    }
    // 0x00269AD8: addu        $v0, $s1, $zero
    ctx->r2 = ADD32(ctx->r17, 0);
    // 0x00269ADC: bne         $s0, $zero, L_00269B0C
    if (ctx->r16 != 0) {
        // 0x00269AE0: nop
    
            goto L_00269B0C;
    }
    // 0x00269AE0: nop

    // 0x00269AE4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00269AE8: lwc1        $f0, 0x7F64($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X7F64);
    // 0x00269AEC: lui         $at, 0x800F
    ctx->r1 = S32(0X800F << 16);
    // 0x00269AF0: sw          $zero, 0x2000($at)
    MEM_W(0X2000, ctx->r1) = 0;
    // 0x00269AF4: lui         $at, 0x800F
    ctx->r1 = S32(0X800F << 16);
    // 0x00269AF8: sw          $zero, 0x2008($at)
    MEM_W(0X2008, ctx->r1) = 0;
    // 0x00269AFC: lui         $at, 0x800F
    ctx->r1 = S32(0X800F << 16);
    // 0x00269B00: swc1        $f0, 0x2004($at)
    MEM_W(0X2004, ctx->r1) = ctx->f0.u32l;
    // 0x00269B04: j           L_00269BBC
    // 0x00269B08: nop

        goto L_00269BBC;
    // 0x00269B08: nop

L_00269B0C:
    // 0x00269B0C: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00269B10: lw          $v0, 0x2600($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2600);
    // 0x00269B14: beq         $s0, $v0, L_00269BBC
    if (ctx->r16 == ctx->r2) {
        // 0x00269B18: addiu       $a1, $sp, 0x20
        ctx->r5 = ADD32(ctx->r29, 0X20);
            goto L_00269BBC;
    }
    // 0x00269B18: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x00269B1C: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
    // 0x00269B20: lw          $v1, 0x4($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X4);
    // 0x00269B24: lwc1        $f0, 0x0($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X0);
    // 0x00269B28: lwc1        $f1, 0x0($v1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r3, 0X0);
    // 0x00269B2C: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x00269B30: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    // 0x00269B34: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
    // 0x00269B38: lw          $v1, 0x4($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X4);
    // 0x00269B3C: lwc1        $f0, 0xC($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0XC);
    // 0x00269B40: lwc1        $f1, 0xC($v1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r3, 0XC);
    // 0x00269B44: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x00269B48: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    // 0x00269B4C: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
    // 0x00269B50: lw          $v1, 0x4($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X4);
    // 0x00269B54: lwc1        $f0, 0x8($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X8);
    // 0x00269B58: lwc1        $f1, 0x8($v1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r3, 0X8);
    // 0x00269B5C: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x00269B60: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    // 0x00269B64: lw          $v0, 0xC($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC);
    // 0x00269B68: lw          $v1, 0x8($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X8);
    // 0x00269B6C: lwc1        $f0, 0x0($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X0);
    // 0x00269B70: lwc1        $f1, 0x0($v1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r3, 0X0);
    // 0x00269B74: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x00269B78: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    // 0x00269B7C: lw          $v0, 0xC($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC);
    // 0x00269B80: lw          $v1, 0x8($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X8);
    // 0x00269B84: lwc1        $f0, 0xC($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0XC);
    // 0x00269B88: lwc1        $f1, 0xC($v1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r3, 0XC);
    // 0x00269B8C: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x00269B90: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x00269B94: lw          $v0, 0xC($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC);
    // 0x00269B98: lw          $v1, 0x8($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X8);
    // 0x00269B9C: lwc1        $f0, 0x8($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X8);
    // 0x00269BA0: lwc1        $f1, 0x8($v1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r3, 0X8);
    // 0x00269BA4: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x00269BA8: addiu       $a0, $a0, 0x2000
    ctx->r4 = ADD32(ctx->r4, 0X2000);
    // 0x00269BAC: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x00269BB0: addiu       $a2, $sp, 0x10
    ctx->r6 = ADD32(ctx->r29, 0X10);
    // 0x00269BB4: jal         0x0020EFDC
    // 0x00269BB8: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    func_0020EFDC(rdram, ctx);
        goto after_0;
    // 0x00269BB8: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    after_0:
L_00269BBC:
    // 0x00269BBC: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x00269BC0: addiu       $a0, $a0, 0x2010
    ctx->r4 = ADD32(ctx->r4, 0X2010);
    // 0x00269BC4: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00269BC8: sw          $s0, 0x2600($at)
    MEM_W(0X2600, ctx->r1) = ctx->r16;
    // 0x00269BCC: lui         $t2, 0x800F
    ctx->r10 = S32(0X800F << 16);
    // 0x00269BD0: addiu       $t2, $t2, 0x2000
    ctx->r10 = ADD32(ctx->r10, 0X2000);
    // 0x00269BD4: lui         $t1, 0x800F
    ctx->r9 = S32(0X800F << 16);
    // 0x00269BD8: addiu       $t1, $t1, 0x2010
    ctx->r9 = ADD32(ctx->r9, 0X2010);
    // 0x00269BDC: lw          $a3, 0x0($t2)
    ctx->r7 = MEM_W(ctx->r10, 0X0);
    // 0x00269BE0: lw          $t0, 0x4($t2)
    ctx->r8 = MEM_W(ctx->r10, 0X4);
    // 0x00269BE4: sw          $a3, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r7;
    // 0x00269BE8: sw          $t0, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r8;
    // 0x00269BEC: lw          $a3, 0x8($t2)
    ctx->r7 = MEM_W(ctx->r10, 0X8);
    // 0x00269BF0: sw          $a3, 0x8($t1)
    MEM_W(0X8, ctx->r9) = ctx->r7;
    // 0x00269BF4: jal         0x0020F040
    // 0x00269BF8: nop

    func_0020F040(rdram, ctx);
        goto after_1;
    // 0x00269BF8: nop

    after_1:
L_00269BFC:
    // 0x00269BFC: addu        $v0, $s1, $zero
    ctx->r2 = ADD32(ctx->r17, 0);
L_00269C00:
    // 0x00269C00: lui         $t2, 0x800F
    ctx->r10 = S32(0X800F << 16);
    // 0x00269C04: addiu       $t2, $t2, 0x2010
    ctx->r10 = ADD32(ctx->r10, 0X2010);
    // 0x00269C08: lw          $a3, 0x0($t2)
    ctx->r7 = MEM_W(ctx->r10, 0X0);
    // 0x00269C0C: lw          $t0, 0x4($t2)
    ctx->r8 = MEM_W(ctx->r10, 0X4);
    // 0x00269C10: lw          $t1, 0x8($t2)
    ctx->r9 = MEM_W(ctx->r10, 0X8);
    // 0x00269C14: sw          $a3, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r7;
    // 0x00269C18: sw          $t0, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->r8;
    // 0x00269C1C: sw          $t1, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->r9;
    // 0x00269C20: lw          $ra, 0x38($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X38);
    // 0x00269C24: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x00269C28: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00269C2C: sw          $s0, 0x2604($at)
    MEM_W(0X2604, ctx->r1) = ctx->r16;
    // 0x00269C30: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x00269C34: jr          $ra
    // 0x00269C38: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x00269C38: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_00284080(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00284080: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00284084: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x00284088: jal         0x00284174
    // 0x0028408C: nop

    func_00284174(rdram, ctx);
        goto after_0;
    // 0x0028408C: nop

    after_0:
    // 0x00284090: beq         $v0, $zero, L_002840E0
    if (ctx->r2 == 0) {
        // 0x00284094: nop
    
            goto L_002840E0;
    }
    // 0x00284094: nop

    // 0x00284098: jal         0x00284468
    // 0x0028409C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_00284468(rdram, ctx);
        goto after_1;
    // 0x0028409C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_1:
    // 0x002840A0: jal         0x002844F0
    // 0x002840A4: nop

    func_002844F0(rdram, ctx);
        goto after_2;
    // 0x002840A4: nop

    after_2:
    // 0x002840A8: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x002840AC: lw          $v0, 0x1BB0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1BB0);
    // 0x002840B0: lw          $a1, 0x0($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X0);
    // 0x002840B4: beql        $a1, $zero, L_002840D0
    if (ctx->r5 == 0) {
        // 0x002840B8: sw          $zero, 0x0($v0)
        MEM_W(0X0, ctx->r2) = 0;
            goto L_002840D0;
    }
    goto skip_0;
    // 0x002840B8: sw          $zero, 0x0($v0)
    MEM_W(0X0, ctx->r2) = 0;
    skip_0:
    // 0x002840BC: jal         0x002052D8
    // 0x002840C0: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_002052D8(rdram, ctx);
        goto after_3;
    // 0x002840C0: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_3:
    // 0x002840C4: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x002840C8: lw          $v0, 0x1BB0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1BB0);
    // 0x002840CC: sw          $zero, 0x0($v0)
    MEM_W(0X0, ctx->r2) = 0;
L_002840D0:
    // 0x002840D0: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x002840D4: sw          $zero, 0x38($v0)
    MEM_W(0X38, ctx->r2) = 0;
    // 0x002840D8: sw          $zero, 0x3C($v0)
    MEM_W(0X3C, ctx->r2) = 0;
    // 0x002840DC: sw          $zero, 0x60($v0)
    MEM_W(0X60, ctx->r2) = 0;
L_002840E0:
    // 0x002840E0: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x002840E4: jr          $ra
    // 0x002840E8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x002840E8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0026BE60(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0026BE60: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x0026BE64: sdc1        $f21, 0x60($sp)
    CHECK_FR(ctx, 21);
    SD(ctx->f21.u64, 0X60, ctx->r29);
    // 0x0026BE68: mtc1        $a1, $f21
    ctx->f_odd[(21 - 1) * 2] = ctx->r5;
    // 0x0026BE6C: sdc1        $f20, 0x58($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X58, ctx->r29);
    // 0x0026BE70: mtc1        $a2, $f20
    ctx->f20.u32l = ctx->r6;
    // 0x0026BE74: sw          $s0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r16;
    // 0x0026BE78: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x0026BE7C: bne         $s0, $zero, L_0026BE94
    if (ctx->r16 != 0) {
        // 0x0026BE80: sw          $ra, 0x54($sp)
        MEM_W(0X54, ctx->r29) = ctx->r31;
            goto L_0026BE94;
    }
    // 0x0026BE80: sw          $ra, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r31;
    // 0x0026BE84: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0026BE88: lwc1        $f0, 0x7FF8($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X7FF8);
    // 0x0026BE8C: j           L_0026BF9C
    // 0x0026BE90: nop

        goto L_0026BF9C;
    // 0x0026BE90: nop

L_0026BE94:
    // 0x0026BE94: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0026BE98: lw          $v0, 0x2608($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2608);
    // 0x0026BE9C: beq         $s0, $v0, L_0026BED8
    if (ctx->r16 == ctx->r2) {
        // 0x0026BEA0: nop
    
            goto L_0026BED8;
    }
    // 0x0026BEA0: nop

    // 0x0026BEA4: lw          $a1, 0x8($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X8);
    // 0x0026BEA8: lw          $a2, 0x4($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X4);
    // 0x0026BEAC: jal         0x0020EF2C
    // 0x0026BEB0: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    func_0020EF2C(rdram, ctx);
        goto after_0;
    // 0x0026BEB0: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    after_0:
    // 0x0026BEB4: lw          $a1, 0xC($s0)
    ctx->r5 = MEM_W(ctx->r16, 0XC);
    // 0x0026BEB8: lw          $a2, 0x8($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X8);
    // 0x0026BEBC: jal         0x0020EF2C
    // 0x0026BEC0: addiu       $a0, $sp, 0x40
    ctx->r4 = ADD32(ctx->r29, 0X40);
    func_0020EF2C(rdram, ctx);
        goto after_1;
    // 0x0026BEC0: addiu       $a0, $sp, 0x40
    ctx->r4 = ADD32(ctx->r29, 0X40);
    after_1:
    // 0x0026BEC4: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x0026BEC8: addiu       $a0, $a0, 0x2020
    ctx->r4 = ADD32(ctx->r4, 0X2020);
    // 0x0026BECC: addiu       $a1, $sp, 0x30
    ctx->r5 = ADD32(ctx->r29, 0X30);
    // 0x0026BED0: jal         0x0020EFDC
    // 0x0026BED4: addiu       $a2, $sp, 0x40
    ctx->r6 = ADD32(ctx->r29, 0X40);
    func_0020EFDC(rdram, ctx);
        goto after_2;
    // 0x0026BED4: addiu       $a2, $sp, 0x40
    ctx->r6 = ADD32(ctx->r29, 0X40);
    after_2:
L_0026BED8:
    // 0x0026BED8: lui         $t2, 0x800F
    ctx->r10 = S32(0X800F << 16);
    // 0x0026BEDC: addiu       $t2, $t2, 0x2020
    ctx->r10 = ADD32(ctx->r10, 0X2020);
    // 0x0026BEE0: lw          $a3, 0x0($t2)
    ctx->r7 = MEM_W(ctx->r10, 0X0);
    // 0x0026BEE4: lw          $t0, 0x4($t2)
    ctx->r8 = MEM_W(ctx->r10, 0X4);
    // 0x0026BEE8: lw          $t1, 0x8($t2)
    ctx->r9 = MEM_W(ctx->r10, 0X8);
    // 0x0026BEEC: sw          $a3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r7;
    // 0x0026BEF0: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x0026BEF4: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    // 0x0026BEF8: lwc1        $f1, 0x14($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X14);
    // 0x0026BEFC: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x0026BF00: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0026BF04: sw          $s0, 0x2608($at)
    MEM_W(0X2608, ctx->r1) = ctx->r16;
    // 0x0026BF08: c.eq.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl == ctx->f0.fl;
    // 0x0026BF0C: nop

    // 0x0026BF10: bc1t        L_0026BF70
    if (c1cs) {
        // 0x0026BF14: nop
    
            goto L_0026BF70;
    }
    // 0x0026BF14: nop

    // 0x0026BF18: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // 0x0026BF1C: lw          $a3, 0x0($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X0);
    // 0x0026BF20: lw          $t0, 0x4($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X4);
    // 0x0026BF24: lw          $t1, 0x8($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X8);
    // 0x0026BF28: sw          $a3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r7;
    // 0x0026BF2C: sw          $t0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r8;
    // 0x0026BF30: sw          $t1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r9;
    // 0x0026BF34: lwc1        $f0, 0x28($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X28);
    // 0x0026BF38: sub.s       $f0, $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f20.fl;
    // 0x0026BF3C: lwc1        $f1, 0x18($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x0026BF40: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0026BF44: lwc1        $f2, 0x20($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X20);
    // 0x0026BF48: sub.s       $f2, $f2, $f21
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f21.fl); 
    ctx->f2.fl = ctx->f2.fl - ctx->f21.fl;
    // 0x0026BF4C: lwc1        $f1, 0x10($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x0026BF50: mul.s       $f2, $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f1.fl);
    // 0x0026BF54: lwc1        $f3, 0x14($sp)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r29, 0X14);
    // 0x0026BF58: lwc1        $f1, 0x24($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X24);
    // 0x0026BF5C: mul.s       $f1, $f1, $f3
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f3.fl);
    // 0x0026BF60: add.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f2.fl;
    // 0x0026BF64: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x0026BF68: j           L_0026BF9C
    // 0x0026BF6C: div.s       $f0, $f0, $f3
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f0.fl = DIV_S(ctx->f0.fl, ctx->f3.fl);
        goto L_0026BF9C;
    // 0x0026BF6C: div.s       $f0, $f0, $f3
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f0.fl = DIV_S(ctx->f0.fl, ctx->f3.fl);
L_0026BF70:
    // 0x0026BF70: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // 0x0026BF74: lw          $v1, 0x8($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X8);
    // 0x0026BF78: lwc1        $f1, 0x4($v0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r2, 0X4);
    // 0x0026BF7C: lwc1        $f0, 0x4($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X4);
    // 0x0026BF80: lw          $v0, 0xC($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC);
    // 0x0026BF84: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x0026BF88: lwc1        $f0, 0x4($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X4);
    // 0x0026BF8C: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x0026BF90: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0026BF94: lwc1        $f0, 0x7FFC($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X7FFC);
    // 0x0026BF98: mul.s       $f0, $f1, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
L_0026BF9C:
    // 0x0026BF9C: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
    // 0x0026BFA0: lw          $s0, 0x50($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X50);
    // 0x0026BFA4: ldc1        $f21, 0x60($sp)
    CHECK_FR(ctx, 21);
    ctx->f21.u64 = LD(ctx->r29, 0X60);
    // 0x0026BFA8: ldc1        $f20, 0x58($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X58);
    // 0x0026BFAC: jr          $ra
    // 0x0026BFB0: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    return;
    // 0x0026BFB0: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
;}
RECOMP_FUNC void func_0021ABC8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0021ABC8: addiu       $sp, $sp, -0xC0
    ctx->r29 = ADD32(ctx->r29, -0XC0);
    // 0x0021ABCC: sw          $s3, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r19;
    // 0x0021ABD0: addu        $s3, $a0, $zero
    ctx->r19 = ADD32(ctx->r4, 0);
    // 0x0021ABD4: sw          $s0, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r16;
    // 0x0021ABD8: sdc1        $f20, 0xB0($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0XB0, ctx->r29);
    // 0x0021ABDC: mtc1        $a2, $f20
    ctx->f20.u32l = ctx->r6;
    // 0x0021ABE0: lui         $v1, 0x400
    ctx->r3 = S32(0X400 << 16);
    // 0x0021ABE4: sw          $ra, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->r31;
    // 0x0021ABE8: sw          $fp, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->r30;
    // 0x0021ABEC: sw          $s7, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r23;
    // 0x0021ABF0: sw          $s6, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r22;
    // 0x0021ABF4: sw          $s5, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->r21;
    // 0x0021ABF8: sw          $s4, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->r20;
    // 0x0021ABFC: sw          $s2, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r18;
    // 0x0021AC00: sw          $s1, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r17;
    // 0x0021AC04: sdc1        $f21, 0xB8($sp)
    CHECK_FR(ctx, 21);
    SD(ctx->f21.u64, 0XB8, ctx->r29);
    // 0x0021AC08: lw          $v0, 0xD4($s3)
    ctx->r2 = MEM_W(ctx->r19, 0XD4);
    // 0x0021AC0C: mtc1        $a3, $f21
    ctx->f_odd[(21 - 1) * 2] = ctx->r7;
    // 0x0021AC10: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x0021AC14: bne         $v0, $zero, L_0021AC28
    if (ctx->r2 != 0) {
        // 0x0021AC18: addu        $s0, $a1, $zero
        ctx->r16 = ADD32(ctx->r5, 0);
            goto L_0021AC28;
    }
    // 0x0021AC18: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x0021AC1C: addiu       $v0, $s3, 0xD8
    ctx->r2 = ADD32(ctx->r19, 0XD8);
    // 0x0021AC20: bne         $s0, $v0, L_0021AE34
    if (ctx->r16 != ctx->r2) {
        // 0x0021AC24: nop
    
            goto L_0021AE34;
    }
    // 0x0021AC24: nop

L_0021AC28:
    // 0x0021AC28: lhu         $v1, 0xB8($s3)
    ctx->r3 = MEM_HU(ctx->r19, 0XB8);
    // 0x0021AC2C: addiu       $v0, $zero, 0x451
    ctx->r2 = ADD32(0, 0X451);
    // 0x0021AC30: beq         $v1, $v0, L_0021AC5C
    if (ctx->r3 == ctx->r2) {
        // 0x0021AC34: slti        $v0, $v1, 0x452
        ctx->r2 = SIGNED(ctx->r3) < 0X452 ? 1 : 0;
            goto L_0021AC5C;
    }
    // 0x0021AC34: slti        $v0, $v1, 0x452
    ctx->r2 = SIGNED(ctx->r3) < 0X452 ? 1 : 0;
    // 0x0021AC38: beq         $v0, $zero, L_0021AC50
    if (ctx->r2 == 0) {
        // 0x0021AC3C: addiu       $v0, $zero, 0x44E
        ctx->r2 = ADD32(0, 0X44E);
            goto L_0021AC50;
    }
    // 0x0021AC3C: addiu       $v0, $zero, 0x44E
    ctx->r2 = ADD32(0, 0X44E);
    // 0x0021AC40: beq         $v1, $v0, L_0021AC5C
    if (ctx->r3 == ctx->r2) {
        // 0x0021AC44: addu        $fp, $zero, $zero
        ctx->r30 = ADD32(0, 0);
            goto L_0021AC5C;
    }
    // 0x0021AC44: addu        $fp, $zero, $zero
    ctx->r30 = ADD32(0, 0);
    // 0x0021AC48: j           L_0021AC64
    // 0x0021AC4C: addu        $s6, $zero, $zero
    ctx->r22 = ADD32(0, 0);
        goto L_0021AC64;
    // 0x0021AC4C: addu        $s6, $zero, $zero
    ctx->r22 = ADD32(0, 0);
L_0021AC50:
    // 0x0021AC50: addiu       $v0, $zero, 0x453
    ctx->r2 = ADD32(0, 0X453);
    // 0x0021AC54: bne         $v1, $v0, L_0021AC60
    if (ctx->r3 != ctx->r2) {
        // 0x0021AC58: addu        $fp, $zero, $zero
        ctx->r30 = ADD32(0, 0);
            goto L_0021AC60;
    }
    // 0x0021AC58: addu        $fp, $zero, $zero
    ctx->r30 = ADD32(0, 0);
L_0021AC5C:
    // 0x0021AC5C: addiu       $fp, $zero, 0x1
    ctx->r30 = ADD32(0, 0X1);
L_0021AC60:
    // 0x0021AC60: addu        $s6, $zero, $zero
    ctx->r22 = ADD32(0, 0);
L_0021AC64:
    // 0x0021AC64: jal         0x002199C8
    // 0x0021AC68: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_002199C8(rdram, ctx);
        goto after_0;
    // 0x0021AC68: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x0021AC6C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0021AC70: jal         0x002199F4
    // 0x0021AC74: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    func_002199F4(rdram, ctx);
        goto after_1;
    // 0x0021AC74: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    after_1:
    // 0x0021AC78: addu        $s4, $s6, $zero
    ctx->r20 = ADD32(ctx->r22, 0);
    // 0x0021AC7C: addu        $s7, $v0, $zero
    ctx->r23 = ADD32(ctx->r2, 0);
    // 0x0021AC80: blez        $s7, L_0021AE24
    if (SIGNED(ctx->r23) <= 0) {
        // 0x0021AC84: addu        $s2, $s6, $zero
        ctx->r18 = ADD32(ctx->r22, 0);
            goto L_0021AE24;
    }
    // 0x0021AC84: addu        $s2, $s6, $zero
    ctx->r18 = ADD32(ctx->r22, 0);
    // 0x0021AC88: addiu       $s5, $sp, 0x48
    ctx->r21 = ADD32(ctx->r29, 0X48);
L_0021AC8C:
    // 0x0021AC8C: lhu         $v0, 0x0($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X0);
    // 0x0021AC90: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x0021AC94: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x0021AC98: c.le.s      $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f20.fl <= ctx->f0.fl;
    // 0x0021AC9C: nop

    // 0x0021ACA0: bc1fl       L_0021AE18
    if (!c1cs) {
        // 0x0021ACA4: addiu       $s4, $s4, 0x1
        ctx->r20 = ADD32(ctx->r20, 0X1);
            goto L_0021AE18;
    }
    goto skip_0;
    // 0x0021ACA4: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
    skip_0:
    // 0x0021ACA8: c.lt.s      $f0, $f21
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 21);
    c1cs = ctx->f0.fl < ctx->f21.fl;
    // 0x0021ACAC: nop

    // 0x0021ACB0: bc1f        L_0021AE14
    if (!c1cs) {
        // 0x0021ACB4: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_0021AE14;
    }
    // 0x0021ACB4: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x0021ACB8: lh          $v1, 0x4($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X4);
    // 0x0021ACBC: bne         $v1, $v0, L_0021ACF4
    if (ctx->r3 != ctx->r2) {
        // 0x0021ACC0: addiu       $s1, $zero, 0x1
        ctx->r17 = ADD32(0, 0X1);
            goto L_0021ACF4;
    }
    // 0x0021ACC0: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
    // 0x0021ACC4: lwc1        $f0, 0x8($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X8);
    // 0x0021ACC8: addiu       $a0, $s3, 0x58
    ctx->r4 = ADD32(ctx->r19, 0X58);
    // 0x0021ACCC: swc1        $f0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f0.u32l;
    // 0x0021ACD0: lwc1        $f0, 0x10($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X10);
    // 0x0021ACD4: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    // 0x0021ACD8: swc1        $f0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f0.u32l;
    // 0x0021ACDC: lwc1        $f0, 0xC($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0XC);
    // 0x0021ACE0: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    // 0x0021ACE4: jal         0x0020F85C
    // 0x0021ACE8: swc1        $f0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f0.u32l;
    func_0020F85C(rdram, ctx);
        goto after_2;
    // 0x0021ACE8: swc1        $f0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f0.u32l;
    after_2:
    // 0x0021ACEC: j           L_0021ADC0
    // 0x0021ACF0: nop

        goto L_0021ADC0;
    // 0x0021ACF0: nop

L_0021ACF4:
    // 0x0021ACF4: beq         $fp, $zero, L_0021AD6C
    if (ctx->r30 == 0) {
        // 0x0021ACF8: nop
    
            goto L_0021AD6C;
    }
    // 0x0021ACF8: nop

    // 0x0021ACFC: lhu         $v0, 0x2($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X2);
    // 0x0021AD00: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x0021AD04: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0021AD08: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x0021AD0C: lw          $v0, -0x2F7C($at)
    ctx->r2 = MEM_W(ctx->r1, -0X2F7C);
    // 0x0021AD10: andi        $v0, $v0, 0x4
    ctx->r2 = ctx->r2 & 0X4;
    // 0x0021AD14: beq         $v0, $zero, L_0021AD6C
    if (ctx->r2 == 0) {
        // 0x0021AD18: nop
    
            goto L_0021AD6C;
    }
    // 0x0021AD18: nop

    // 0x0021AD1C: bne         $s2, $zero, L_0021AD48
    if (ctx->r18 != 0) {
        // 0x0021AD20: nop
    
            goto L_0021AD48;
    }
    // 0x0021AD20: nop

    // 0x0021AD24: jal         0x0021F358
    // 0x0021AD28: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    func_0021F358(rdram, ctx);
        goto after_3;
    // 0x0021AD28: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    after_3:
    // 0x0021AD2C: addu        $s2, $v0, $zero
    ctx->r18 = ADD32(ctx->r2, 0);
    // 0x0021AD30: beq         $s2, $zero, L_0021AD6C
    if (ctx->r18 == 0) {
        // 0x0021AD34: nop
    
            goto L_0021AD6C;
    }
    // 0x0021AD34: nop

    // 0x0021AD38: lw          $a0, 0x0($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X0);
    // 0x0021AD3C: jal         0x002017D4
    // 0x0021AD40: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_002017D4(rdram, ctx);
        goto after_4;
    // 0x0021AD40: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_4:
    // 0x0021AD44: addu        $s6, $v0, $zero
    ctx->r22 = ADD32(ctx->r2, 0);
L_0021AD48:
    // 0x0021AD48: lh          $a1, 0x4($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X4);
    // 0x0021AD4C: jal         0x002017D4
    // 0x0021AD50: addu        $a0, $s6, $zero
    ctx->r4 = ADD32(ctx->r22, 0);
    func_002017D4(rdram, ctx);
        goto after_5;
    // 0x0021AD50: addu        $a0, $s6, $zero
    ctx->r4 = ADD32(ctx->r22, 0);
    after_5:
    // 0x0021AD54: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x0021AD58: jal         0x002017D4
    // 0x0021AD5C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_002017D4(rdram, ctx);
        goto after_6;
    // 0x0021AD5C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_6:
    // 0x0021AD60: lw          $v1, 0x6C($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X6C);
    // 0x0021AD64: lw          $v0, 0x14C($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X14C);
    // 0x0021AD68: and         $s1, $v1, $v0
    ctx->r17 = ctx->r3 & ctx->r2;
L_0021AD6C:
    // 0x0021AD6C: beql        $s1, $zero, L_0021AE18
    if (ctx->r17 == 0) {
        // 0x0021AD70: addiu       $s4, $s4, 0x1
        ctx->r20 = ADD32(ctx->r20, 0X1);
            goto L_0021AE18;
    }
    goto skip_1;
    // 0x0021AD70: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
    skip_1:
    // 0x0021AD74: lw          $v0, 0x98($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X98);
    // 0x0021AD78: beq         $v0, $zero, L_0021ADA8
    if (ctx->r2 == 0) {
        // 0x0021AD7C: addu        $a0, $s5, $zero
        ctx->r4 = ADD32(ctx->r21, 0);
            goto L_0021ADA8;
    }
    // 0x0021AD7C: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    // 0x0021AD80: lh          $a1, 0x4($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X4);
    // 0x0021AD84: sll         $a1, $a1, 6
    ctx->r5 = S32(ctx->r5 << 6);
    // 0x0021AD88: jal         0x0020D908
    // 0x0021AD8C: addu        $a1, $v0, $a1
    ctx->r5 = ADD32(ctx->r2, ctx->r5);
    func_0020D908(rdram, ctx);
        goto after_7;
    // 0x0021AD8C: addu        $a1, $v0, $a1
    ctx->r5 = ADD32(ctx->r2, ctx->r5);
    after_7:
    // 0x0021AD90: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    // 0x0021AD94: addiu       $a1, $s0, 0x8
    ctx->r5 = ADD32(ctx->r16, 0X8);
    // 0x0021AD98: jal         0x0020F85C
    // 0x0021AD9C: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    func_0020F85C(rdram, ctx);
        goto after_8;
    // 0x0021AD9C: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    after_8:
    // 0x0021ADA0: j           L_0021ADC0
    // 0x0021ADA4: nop

        goto L_0021ADC0;
    // 0x0021ADA4: nop

L_0021ADA8:
    // 0x0021ADA8: lw          $t0, 0x4($s3)
    ctx->r8 = MEM_W(ctx->r19, 0X4);
    // 0x0021ADAC: lw          $t1, 0x8($s3)
    ctx->r9 = MEM_W(ctx->r19, 0X8);
    // 0x0021ADB0: lw          $t2, 0xC($s3)
    ctx->r10 = MEM_W(ctx->r19, 0XC);
    // 0x0021ADB4: sw          $t0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r8;
    // 0x0021ADB8: sw          $t1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r9;
    // 0x0021ADBC: sw          $t2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r10;
L_0021ADC0:
    // 0x0021ADC0: beq         $s1, $zero, L_0021AE14
    if (ctx->r17 == 0) {
        // 0x0021ADC4: addu        $a0, $s3, $zero
        ctx->r4 = ADD32(ctx->r19, 0);
            goto L_0021AE14;
    }
    // 0x0021ADC4: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x0021ADC8: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    // 0x0021ADCC: lhu         $a2, 0x2($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0X2);
    // 0x0021ADD0: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x0021ADD4: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x0021ADD8: lw          $t2, 0x30($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X30);
    // 0x0021ADDC: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x0021ADE0: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x0021ADE4: sw          $t2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r10;
    // 0x0021ADE8: lw          $t0, 0x14($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X14);
    // 0x0021ADEC: lw          $t1, 0x18($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X18);
    // 0x0021ADF0: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    // 0x0021ADF4: sw          $t1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r9;
    // 0x0021ADF8: jal         0x00236EA0
    // 0x0021ADFC: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    func_00236EA0(rdram, ctx);
        goto after_9;
    // 0x0021ADFC: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    after_9:
    // 0x0021AE00: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0021AE04: lw          $v0, -0x346C($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X346C);
    // 0x0021AE08: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x0021AE0C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0021AE10: sw          $v0, -0x346C($at)
    MEM_W(-0X346C, ctx->r1) = ctx->r2;
L_0021AE14:
    // 0x0021AE14: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
L_0021AE18:
    // 0x0021AE18: slt         $v0, $s4, $s7
    ctx->r2 = SIGNED(ctx->r20) < SIGNED(ctx->r23) ? 1 : 0;
    // 0x0021AE1C: bne         $v0, $zero, L_0021AC8C
    if (ctx->r2 != 0) {
        // 0x0021AE20: addiu       $s0, $s0, 0x1C
        ctx->r16 = ADD32(ctx->r16, 0X1C);
            goto L_0021AC8C;
    }
    // 0x0021AE20: addiu       $s0, $s0, 0x1C
    ctx->r16 = ADD32(ctx->r16, 0X1C);
L_0021AE24:
    // 0x0021AE24: beq         $s2, $zero, L_0021AE34
    if (ctx->r18 == 0) {
        // 0x0021AE28: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_0021AE34;
    }
    // 0x0021AE28: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0021AE2C: jal         0x002051F4
    // 0x0021AE30: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    func_002051F4(rdram, ctx);
        goto after_10;
    // 0x0021AE30: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    after_10:
L_0021AE34:
    // 0x0021AE34: lw          $ra, 0xAC($sp)
    ctx->r31 = MEM_W(ctx->r29, 0XAC);
    // 0x0021AE38: lw          $fp, 0xA8($sp)
    ctx->r30 = MEM_W(ctx->r29, 0XA8);
    // 0x0021AE3C: lw          $s7, 0xA4($sp)
    ctx->r23 = MEM_W(ctx->r29, 0XA4);
    // 0x0021AE40: lw          $s6, 0xA0($sp)
    ctx->r22 = MEM_W(ctx->r29, 0XA0);
    // 0x0021AE44: lw          $s5, 0x9C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X9C);
    // 0x0021AE48: lw          $s4, 0x98($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X98);
    // 0x0021AE4C: lw          $s3, 0x94($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X94);
    // 0x0021AE50: lw          $s2, 0x90($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X90);
    // 0x0021AE54: lw          $s1, 0x8C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X8C);
    // 0x0021AE58: lw          $s0, 0x88($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X88);
    // 0x0021AE5C: ldc1        $f21, 0xB8($sp)
    CHECK_FR(ctx, 21);
    ctx->f21.u64 = LD(ctx->r29, 0XB8);
    // 0x0021AE60: ldc1        $f20, 0xB0($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0XB0);
    // 0x0021AE64: jr          $ra
    // 0x0021AE68: addiu       $sp, $sp, 0xC0
    ctx->r29 = ADD32(ctx->r29, 0XC0);
    return;
    // 0x0021AE68: addiu       $sp, $sp, 0xC0
    ctx->r29 = ADD32(ctx->r29, 0XC0);
;}
RECOMP_FUNC void func_00452BB4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00452BB4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00452BB8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x00452BBC: lui         $s0, 0x8012
    ctx->r16 = S32(0X8012 << 16);
    // 0x00452BC0: addiu       $s0, $s0, -0x5512
    ctx->r16 = ADD32(ctx->r16, -0X5512);
    // 0x00452BC4: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x00452BC8: addu        $a0, $a1, $zero
    ctx->r4 = ADD32(ctx->r5, 0);
    // 0x00452BCC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x00452BD0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x00452BD4: lbu         $v1, 0x0($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X0);
    // 0x00452BD8: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x00452BDC: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x00452BE0: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x00452BE4: jal         0x0041648C
    // 0x00452BE8: addu        $a1, $v1, $zero
    ctx->r5 = ADD32(ctx->r3, 0);
    func_0041648C(rdram, ctx);
        goto after_0;
    // 0x00452BE8: addu        $a1, $v1, $zero
    ctx->r5 = ADD32(ctx->r3, 0);
    after_0:
    // 0x00452BEC: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x00452BF0: addiu       $v0, $zero, 0xF7
    ctx->r2 = ADD32(0, 0XF7);
    // 0x00452BF4: beql        $v1, $v0, L_00452BFC
    if (ctx->r3 == ctx->r2) {
        // 0x00452BF8: addiu       $v1, $zero, 0xF8
        ctx->r3 = ADD32(0, 0XF8);
            goto L_00452BFC;
    }
    goto skip_0;
    // 0x00452BF8: addiu       $v1, $zero, 0xF8
    ctx->r3 = ADD32(0, 0XF8);
    skip_0:
L_00452BFC:
    // 0x00452BFC: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    // 0x00452C00: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x00452C04: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x00452C08: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x00452C0C: jr          $ra
    // 0x00452C10: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00452C10: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_00441EAC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_00408FA0:
    // 0x00441EAC: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x00441EB0: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x00441EB4: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x00441EB8: lwc1        $f1, 0xC($a0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r4, 0XC);
    // 0x00441EBC: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x00441EC0: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x00441EC4: nop

    // 0x00441EC8: bc1f        L_00441F3C
    if (!c1cs) {
        // 0x00441ECC: nop
    
            goto L_00441F3C;
    }
    // 0x00441ECC: nop

    // 0x00441ED0: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00441ED4: lwc1        $f0, 0x6D28($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6D28);
    // 0x00441ED8: sub.s       $f0, $f1, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f1.fl - ctx->f0.fl;
    // 0x00441EDC: j           L_00408FA0
    // 0x00441EE0: swc1        $f0, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->f0.u32l;
    entry_00408FA0(rdram, ctx);
    return;
    // 0x00441EE0: swc1        $f0, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->f0.u32l;
L_00441EE4:
    // 0x00441EE4: lw          $v0, 0xC($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC);
    // 0x00441EE8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00441EEC: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x00441EF0: lw          $a2, 0x4($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X4);
    // 0x00441EF4: lw          $a3, 0x8($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X8);
    // 0x00441EF8: jal         0x00246690
    // 0x00441EFC: addiu       $a1, $zero, 0x17C
    ctx->r5 = ADD32(0, 0X17C);
    func_00246690(rdram, ctx);
        goto after_0;
    // 0x00441EFC: addiu       $a1, $zero, 0x17C
    ctx->r5 = ADD32(0, 0X17C);
    after_0:
    // 0x00441F00: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    // 0x00441F04: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x00441F08: ori         $a2, $zero, 0xFF00
    ctx->r6 = 0 | 0XFF00;
    // 0x00441F0C: lui         $a3, 0x424C
    ctx->r7 = S32(0X424C << 16);
    // 0x00441F10: ori         $a3, $a3, 0xCCCC
    ctx->r7 = ctx->r7 | 0XCCCC;
    // 0x00441F14: lui         $v0, 0x10
    ctx->r2 = S32(0X10 << 16);
    // 0x00441F18: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x00441F1C: jal         0x00245828
    // 0x00441F20: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    func_00245828(rdram, ctx);
        goto after_1;
    // 0x00441F20: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    after_1:
    // 0x00441F24: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00441F28: addiu       $a1, $a0, 0x140
    ctx->r5 = ADD32(ctx->r4, 0X140);
    // 0x00441F2C: jal         0x0025B2D4
    // 0x00441F30: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    func_0025B2D4(rdram, ctx);
        goto after_2;
    // 0x00441F30: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    after_2:
    // 0x00441F34: j           L_00408FA0
    // 0x00441F38: nop

    entry_00408FA0(rdram, ctx);
    return;
    // 0x00441F38: nop

L_00441F3C:
    // 0x00441F3C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00441F40: lwc1        $f12, 0x5B4($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X5B4);
    // 0x00441F44: jal         0x0021149C
    // 0x00441F48: nop

    func_0021149C(rdram, ctx);
        goto after_3;
    // 0x00441F48: nop

    after_3:
    // 0x00441F4C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00441F50: lwc1        $f1, 0x5B8($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X5B8);
    // 0x00441F54: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x00441F58: nop

    // 0x00441F5C: bc1t        L_00441FA0
    if (c1cs) {
        // 0x00441F60: nop
    
            goto L_00441FA0;
    }
    // 0x00441F60: nop

    // 0x00441F64: lui         $s0, 0x8011
    ctx->r16 = S32(0X8011 << 16);
    // 0x00441F68: lw          $s0, -0x14C($s0)
    ctx->r16 = MEM_W(ctx->r16, -0X14C);
    // 0x00441F6C: beq         $s0, $zero, L_00441FA0
    if (ctx->r16 == 0) {
        // 0x00441F70: nop
    
            goto L_00441FA0;
    }
    // 0x00441F70: nop

    // 0x00441F74: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_00441F78:
    // 0x00441F78: lw          $v0, 0x14($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X14);
    // 0x00441F7C: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x00441F80: bne         $v0, $v1, L_00441F94
    if (ctx->r2 != ctx->r3) {
        // 0x00441F84: nop
    
            goto L_00441F94;
    }
    // 0x00441F84: nop

    // 0x00441F88: lw          $v0, 0x144($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X144);
    // 0x00441F8C: bnel        $v0, $zero, L_00441EE4
    if (ctx->r2 != 0) {
        // 0x00441F90: sw          $zero, 0x14($sp)
        MEM_W(0X14, ctx->r29) = 0;
            goto L_00441EE4;
    }
    goto skip_0;
    // 0x00441F90: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    skip_0:
L_00441F94:
    // 0x00441F94: lw          $s0, 0x28C($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X28C);
    // 0x00441F98: bne         $s0, $zero, L_00441F78
    if (ctx->r16 != 0) {
        // 0x00441F9C: nop
    
            goto L_00441F78;
    }
    // 0x00441F9C: nop

L_00441FA0:
    // 0x00441FA0: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x00441FA4: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x00441FA8: jr          $ra
    // 0x00441FAC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x00441FAC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_00266128(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00266128: lw          $v0, 0xD4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XD4);
    // 0x0026612C: ori         $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 | 0XFFFF;
    // 0x00266130: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x00266134: jr          $ra
    // 0x00266138: sw          $v0, 0xD4($a0)
    MEM_W(0XD4, ctx->r4) = ctx->r2;
    return;
    // 0x00266138: sw          $v0, 0xD4($a0)
    MEM_W(0XD4, ctx->r4) = ctx->r2;
;}
RECOMP_FUNC void func_00256308(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00256308: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0025630C: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x00256310: jal         0x00255FF4
    // 0x00256314: nop

    func_00255FF4(rdram, ctx);
        goto after_0;
    // 0x00256314: nop

    after_0:
    // 0x00256318: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x0025631C: jr          $ra
    // 0x00256320: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00256320: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00266A30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00266A30: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00266A34: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00266A38: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x00266A3C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x00266A40: jal         0x00412314
    // 0x00266A44: addu        $a1, $a2, $zero
    ctx->r5 = ADD32(ctx->r6, 0);
    func_00412314(rdram, ctx);
        goto after_0;
    // 0x00266A44: addu        $a1, $a2, $zero
    ctx->r5 = ADD32(ctx->r6, 0);
    after_0:
    // 0x00266A48: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x00266A4C: addiu       $a0, $a0, 0x7078
    ctx->r4 = ADD32(ctx->r4, 0X7078);
    // 0x00266A50: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x00266A54: lw          $v0, 0xD4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XD4);
    // 0x00266A58: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x00266A5C: ori         $v0, $v0, 0x2100
    ctx->r2 = ctx->r2 | 0X2100;
    // 0x00266A60: jal         0x00220260
    // 0x00266A64: sw          $v0, 0xD4($a1)
    MEM_W(0XD4, ctx->r5) = ctx->r2;
    func_00220260(rdram, ctx);
        goto after_1;
    // 0x00266A64: sw          $v0, 0xD4($a1)
    MEM_W(0XD4, ctx->r5) = ctx->r2;
    after_1:
    // 0x00266A68: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x00266A6C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00266A70: jr          $ra
    // 0x00266A74: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00266A74: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0045CCB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0045CCB0: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0045CCB4: addiu       $v0, $v0, 0x52DC
    ctx->r2 = ADD32(ctx->r2, 0X52DC);
    // 0x0045CCB8: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    // 0x0045CCBC: jr          $ra
    // 0x0045CCC0: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x0045CCC0: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void func_00210004(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00210004: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00210008: lwc1        $f3, 0x5604($at)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r1, 0X5604);
    // 0x0021000C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x00210010: swc1        $f3, 0x3C($a0)
    MEM_W(0X3C, ctx->r4) = ctx->f_odd[(3 - 1) * 2];
    // 0x00210014: swc1        $f3, 0x28($a0)
    MEM_W(0X28, ctx->r4) = ctx->f_odd[(3 - 1) * 2];
    // 0x00210018: swc1        $f3, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f_odd[(3 - 1) * 2];
    // 0x0021001C: swc1        $f0, 0x38($a0)
    MEM_W(0X38, ctx->r4) = ctx->f0.u32l;
    // 0x00210020: swc1        $f0, 0x34($a0)
    MEM_W(0X34, ctx->r4) = ctx->f0.u32l;
    // 0x00210024: swc1        $f0, 0x30($a0)
    MEM_W(0X30, ctx->r4) = ctx->f0.u32l;
    // 0x00210028: swc1        $f0, 0x2C($a0)
    MEM_W(0X2C, ctx->r4) = ctx->f0.u32l;
    // 0x0021002C: swc1        $f0, 0x24($a0)
    MEM_W(0X24, ctx->r4) = ctx->f0.u32l;
    // 0x00210030: swc1        $f0, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->f0.u32l;
    // 0x00210034: swc1        $f0, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = ctx->f0.u32l;
    // 0x00210038: swc1        $f0, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->f0.u32l;
    // 0x0021003C: swc1        $f0, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->f0.u32l;
    // 0x00210040: swc1        $f0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->f0.u32l;
    // 0x00210044: lwc1        $f1, 0x4($a1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r5, 0X4);
    // 0x00210048: lwc1        $f2, 0x0($a1)
    ctx->f2.u32l = MEM_W(ctx->r5, 0X0);
    // 0x0021004C: div.s       $f3, $f3, $f1
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f3.fl = DIV_S(ctx->f3.fl, ctx->f1.fl);
    // 0x00210050: mul.s       $f2, $f2, $f3
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f3.fl);
    // 0x00210054: lwc1        $f1, 0x8($a1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r5, 0X8);
    // 0x00210058: mul.s       $f1, $f1, $f3
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f3.fl);
    // 0x0021005C: mtc1        $a2, $f4
    ctx->f4.u32l = ctx->r6;
    // 0x00210060: mul.s       $f3, $f4, $f2
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f3.fl = MUL_S(ctx->f4.fl, ctx->f2.fl);
    // 0x00210064: nop

    // 0x00210068: mul.s       $f5, $f4, $f1
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f5.fl = MUL_S(ctx->f4.fl, ctx->f1.fl);
    // 0x0021006C: swc1        $f4, 0x34($a0)
    MEM_W(0X34, ctx->r4) = ctx->f4.u32l;
    // 0x00210070: swc1        $f0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->f0.u32l;
    // 0x00210074: neg.s       $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = -ctx->f2.fl;
    // 0x00210078: swc1        $f2, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->f2.u32l;
    // 0x0021007C: neg.s       $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = -ctx->f1.fl;
    // 0x00210080: swc1        $f1, 0x18($a0)
    MEM_W(0X18, ctx->r4) = ctx->f_odd[(1 - 1) * 2];
    // 0x00210084: swc1        $f3, 0x30($a0)
    MEM_W(0X30, ctx->r4) = ctx->f_odd[(3 - 1) * 2];
    // 0x00210088: jr          $ra
    // 0x0021008C: swc1        $f5, 0x38($a0)
    MEM_W(0X38, ctx->r4) = ctx->f_odd[(5 - 1) * 2];
    return;
    // 0x0021008C: swc1        $f5, 0x38($a0)
    MEM_W(0X38, ctx->r4) = ctx->f_odd[(5 - 1) * 2];
;}
RECOMP_FUNC void func_00422574(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00422574: beq         $v0, $zero, L_0042258C
    if (ctx->r2 == 0) {
        // 0x00422578: addiu       $v0, $v1, -0x1194
        ctx->r2 = ADD32(ctx->r3, -0X1194);
            goto L_0042258C;
    }
    // 0x00422578: addiu       $v0, $v1, -0x1194
    ctx->r2 = ADD32(ctx->r3, -0X1194);
    // 0x0042257C: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x00422580: addiu       $a1, $a1, 0x4994
    ctx->r5 = ADD32(ctx->r5, 0X4994);
    // 0x00422584: j           L_004225D4
    // 0x00422588: nop

        goto L_004225D4;
    // 0x00422588: nop

L_0042258C:
    // 0x0042258C: sltiu       $v0, $v0, 0x7D0
    ctx->r2 = ctx->r2 < 0X7D0 ? 1 : 0;
    // 0x00422590: beq         $v0, $zero, L_004225A8
    if (ctx->r2 == 0) {
        // 0x00422594: addiu       $v0, $v1, -0x1964
        ctx->r2 = ADD32(ctx->r3, -0X1964);
            goto L_004225A8;
    }
    // 0x00422594: addiu       $v0, $v1, -0x1964
    ctx->r2 = ADD32(ctx->r3, -0X1964);
    // 0x00422598: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x0042259C: addiu       $a1, $a1, 0x49A0
    ctx->r5 = ADD32(ctx->r5, 0X49A0);
    // 0x004225A0: j           L_004225D4
    // 0x004225A4: nop

        goto L_004225D4;
    // 0x004225A4: nop

L_004225A8:
    // 0x004225A8: sltiu       $v0, $v0, 0xDAB
    ctx->r2 = ctx->r2 < 0XDAB ? 1 : 0;
    // 0x004225AC: beq         $v0, $zero, L_004225C4
    if (ctx->r2 == 0) {
        // 0x004225B0: slti        $v0, $v1, 0x270F
        ctx->r2 = SIGNED(ctx->r3) < 0X270F ? 1 : 0;
            goto L_004225C4;
    }
    // 0x004225B0: slti        $v0, $v1, 0x270F
    ctx->r2 = SIGNED(ctx->r3) < 0X270F ? 1 : 0;
    // 0x004225B4: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x004225B8: addiu       $a1, $a1, 0x49AC
    ctx->r5 = ADD32(ctx->r5, 0X49AC);
    // 0x004225BC: j           L_004225D4
    // 0x004225C0: nop

        goto L_004225D4;
    // 0x004225C0: nop

L_004225C4:
    // 0x004225C4: bne         $v0, $zero, L_004225D4
    if (ctx->r2 != 0) {
        // 0x004225C8: nop
    
            goto L_004225D4;
    }
    // 0x004225C8: nop

    // 0x004225CC: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x004225D0: addiu       $a1, $a1, 0x49B8
    ctx->r5 = ADD32(ctx->r5, 0X49B8);
L_004225D4:
    // 0x004225D4: lw          $a0, 0x14($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X14);
    // 0x004225D8: beq         $a1, $zero, L_00422600
    if (ctx->r5 == 0) {
        // 0x004225DC: addiu       $a0, $a0, 0x8
        ctx->r4 = ADD32(ctx->r4, 0X8);
            goto L_00422600;
    }
    // 0x004225DC: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x004225E0: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
L_004225E4:
    // 0x004225E4: lbu         $v0, 0x0($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X0);
    // 0x004225E8: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x004225EC: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x004225F0: sb          $v0, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r2;
    // 0x004225F4: slti        $v0, $v1, 0xB
    ctx->r2 = SIGNED(ctx->r3) < 0XB ? 1 : 0;
    // 0x004225F8: bne         $v0, $zero, L_004225E4
    if (ctx->r2 != 0) {
        // 0x004225FC: addiu       $a0, $a0, 0x1
        ctx->r4 = ADD32(ctx->r4, 0X1);
            goto L_004225E4;
    }
    // 0x004225FC: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
L_00422600:
    // 0x00422600: jr          $ra
    // 0x00422604: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x00422604: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void func_00268508(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00268508: lw          $a0, 0x14($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X14);
    // 0x0026850C: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x00268510: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00268514: beq         $v1, $v0, L_00268528
    if (ctx->r3 == ctx->r2) {
            // 0x00268518: nop

    func_00268528(rdram, ctx);
    return;
    }
    // 0x00268518: nop

    // 0x0026851C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x00268520: jr          $ra
    // 0x00268524: nop

    return;
    // 0x00268524: nop

;}
RECOMP_FUNC void func_002018D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002018D8: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x002018DC: lw          $v0, 0x4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X4);
    // 0x002018E0: mult        $v1, $v0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x002018E4: mflo        $a1
    ctx->r5 = lo;
    // 0x002018E8: jr          $ra
    // 0x002018EC: addiu       $v0, $a1, 0x8
    ctx->r2 = ADD32(ctx->r5, 0X8);
    return;
    // 0x002018EC: addiu       $v0, $a1, 0x8
    ctx->r2 = ADD32(ctx->r5, 0X8);
;}
RECOMP_FUNC void func_0044759C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0044759C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x004475A0: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x004475A4: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x004475A8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x004475AC: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x004475B0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x004475B4: lw          $v0, 0x4($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X4);
    // 0x004475B8: blez        $v0, L_004475EC
    if (SIGNED(ctx->r2) <= 0) {
        // 0x004475BC: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_004475EC;
    }
    // 0x004475BC: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x004475C0: addu        $s1, $s2, $zero
    ctx->r17 = ADD32(ctx->r18, 0);
L_004475C4:
    // 0x004475C4: lw          $a0, 0x8($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X8);
    // 0x004475C8: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    // 0x004475CC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x004475D0: jal         0x00243414
    // 0x004475D4: addiu       $a1, $a0, 0x140
    ctx->r5 = ADD32(ctx->r4, 0X140);
    func_00243414(rdram, ctx);
        goto after_0;
    // 0x004475D4: addiu       $a1, $a0, 0x140
    ctx->r5 = ADD32(ctx->r4, 0X140);
    after_0:
    // 0x004475D8: lw          $v0, 0x4($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X4);
    // 0x004475DC: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x004475E0: slt         $v0, $s0, $v0
    ctx->r2 = SIGNED(ctx->r16) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x004475E4: bne         $v0, $zero, L_004475C4
    if (ctx->r2 != 0) {
        // 0x004475E8: nop
    
            goto L_004475C4;
    }
    // 0x004475E8: nop

L_004475EC:
    // 0x004475EC: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x004475F0: addiu       $a0, $a0, 0x7078
    ctx->r4 = ADD32(ctx->r4, 0X7078);
    // 0x004475F4: lw          $v0, 0x4F8($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X4F8);
    // 0x004475F8: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x004475FC: lwc1        $f0, 0x930($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X930);
    // 0x00447600: lwc1        $f1, 0x4($v0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r2, 0X4);
    // 0x00447604: lui         $v0, 0x43
    ctx->r2 = S32(0X43 << 16);
    // 0x00447608: addiu       $v0, $v0, 0x23B4
    ctx->r2 = ADD32(ctx->r2, 0X23B4);
    // 0x0044760C: sw          $v0, 0x518($s2)
    MEM_W(0X518, ctx->r18) = ctx->r2;
    // 0x00447610: addiu       $v0, $s2, 0x518
    ctx->r2 = ADD32(ctx->r18, 0X518);
    // 0x00447614: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x00447618: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x0044761C: sw          $zero, 0xC($v0)
    MEM_W(0XC, ctx->r2) = 0;
    // 0x00447620: sw          $zero, 0x10($v0)
    MEM_W(0X10, ctx->r2) = 0;
    // 0x00447624: sw          $zero, 0x14($v0)
    MEM_W(0X14, ctx->r2) = 0;
    // 0x00447628: jal         0x00225C84
    // 0x0044762C: swc1        $f1, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f_odd[(1 - 1) * 2];
    func_00225C84(rdram, ctx);
        goto after_1;
    // 0x0044762C: swc1        $f1, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f_odd[(1 - 1) * 2];
    after_1:
    // 0x00447630: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x00447634: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x00447638: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x0044763C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00447640: jr          $ra
    // 0x00447644: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00447644: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_002961E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002961E8: sra         $a1, $a1, 3
    ctx->r5 = S32(SIGNED(ctx->r5) >> 3);
    // 0x002961EC: bne         $a1, $zero, L_002961FC
    if (ctx->r5 != 0) {
            // 0x002961F0: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
    func_002961FC(rdram, ctx);
    return;
    }
    // 0x002961F0: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
    // 0x002961F4: jr          $ra
    // 0x002961F8: mov.s       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.fl = ctx->f12.fl;
    return;
    // 0x002961F8: mov.s       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.fl = ctx->f12.fl;
;}
RECOMP_FUNC void func_00257800(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00257800: lui         $a1, 0xFF7F
    ctx->r5 = S32(0XFF7F << 16);
    // 0x00257804: ori         $a1, $a1, 0xFFFF
    ctx->r5 = ctx->r5 | 0XFFFF;
    // 0x00257808: lw          $v0, 0xD4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XD4);
    // 0x0025780C: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x00257810: sw          $zero, 0x18($a0)
    MEM_W(0X18, ctx->r4) = 0;
    // 0x00257814: sw          $zero, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = 0;
    // 0x00257818: sw          $zero, 0x20($a0)
    MEM_W(0X20, ctx->r4) = 0;
    // 0x0025781C: sw          $zero, 0x1298($a0)
    MEM_W(0X1298, ctx->r4) = 0;
    // 0x00257820: sw          $v1, 0xC04($a0)
    MEM_W(0XC04, ctx->r4) = ctx->r3;
    // 0x00257824: and         $v0, $v0, $a1
    ctx->r2 = ctx->r2 & ctx->r5;
    // 0x00257828: jr          $ra
    // 0x0025782C: sw          $v0, 0xD4($a0)
    MEM_W(0XD4, ctx->r4) = ctx->r2;
    return;
    // 0x0025782C: sw          $v0, 0xD4($a0)
    MEM_W(0XD4, ctx->r4) = ctx->r2;
;}
RECOMP_FUNC void func_00451408(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_00418478:
    // 0x00451408: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x0045140C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00451410: lui         $s1, 0x8012
    ctx->r17 = S32(0X8012 << 16);
    // 0x00451414: addiu       $s1, $s1, -0x5528
    ctx->r17 = ADD32(ctx->r17, -0X5528);
    // 0x00451418: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x0045141C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00451420: lb          $v0, 0x25($s1)
    ctx->r2 = MEM_B(ctx->r17, 0X25);
    // 0x00451424: beq         $v0, $zero, L_00451458
    if (ctx->r2 == 0) {
        // 0x00451428: addu        $s0, $a0, $zero
        ctx->r16 = ADD32(ctx->r4, 0);
            goto L_00451458;
    }
    // 0x00451428: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x0045142C: jal         0x004160F0
    // 0x00451430: nop

    func_004160F0(rdram, ctx);
        goto after_0;
    // 0x00451430: nop

    after_0:
    // 0x00451434: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x00451438: addiu       $a1, $a1, 0xE84
    ctx->r5 = ADD32(ctx->r5, 0XE84);
    // 0x0045143C: addiu       $v0, $v0, -0x4
    ctx->r2 = ADD32(ctx->r2, -0X4);
    // 0x00451440: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x00451444: lb          $a2, 0x25($s1)
    ctx->r6 = MEM_B(ctx->r17, 0X25);
    // 0x00451448: jal         0x0029E3E0
    // 0x0045144C: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    func_0029E3E0(rdram, ctx);
        goto after_1;
    // 0x0045144C: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    after_1:
    // 0x00451450: j           L_00418478
    // 0x00451454: nop

    entry_00418478(rdram, ctx);
    return;
    // 0x00451454: nop

L_00451458:
    // 0x00451458: jal         0x004160F0
    // 0x0045145C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_004160F0(rdram, ctx);
        goto after_2;
    // 0x0045145C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x00451460: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x00451464: addiu       $a1, $a1, 0xE8C
    ctx->r5 = ADD32(ctx->r5, 0XE8C);
    // 0x00451468: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x0045146C: addiu       $v0, $v0, -0x4
    ctx->r2 = ADD32(ctx->r2, -0X4);
    // 0x00451470: jal         0x0029E3E0
    // 0x00451474: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    func_0029E3E0(rdram, ctx);
        goto after_3;
    // 0x00451474: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    after_3:
    // 0x00451478: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x0045147C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00451480: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00451484: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x00451488: jr          $ra
    // 0x0045148C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x0045148C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_00450484(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_00417574:
    // 0x00450484: lb          $v0, 0xC7($a1)
    ctx->r2 = MEM_B(ctx->r5, 0XC7);
L_004175E0:
    // 0x00450488: beq         $v0, $zero, L_00450498
    if (ctx->r2 == 0) {
        // 0x0045048C: nop
    
            goto L_00450498;
    }
    // 0x0045048C: nop

    // 0x00450490: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00450494: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
L_00450498:
    // 0x00450498: addiu       $a0, $a0, -0x5528
    ctx->r4 = ADD32(ctx->r4, -0X5528);
    // 0x0045049C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x004504A0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x004504A4: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x004504A8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x004504AC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x004504B0: lb          $v1, 0x25($a0)
    ctx->r3 = MEM_B(ctx->r4, 0X25);
    // 0x004504B4: addiu       $a1, $a0, 0x1D8
    ctx->r5 = ADD32(ctx->r4, 0X1D8);
    // 0x004504B8: sw          $v0, 0x34($a1)
    MEM_W(0X34, ctx->r5) = ctx->r2;
    // 0x004504BC: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x004504C0: sw          $zero, -0x532C($at)
    MEM_W(-0X532C, ctx->r1) = 0;
    // 0x004504C4: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x004504C8: sw          $zero, -0x5334($at)
    MEM_W(-0X5334, ctx->r1) = 0;
    // 0x004504CC: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x004504D0: sw          $zero, -0x5324($at)
    MEM_W(-0X5324, ctx->r1) = 0;
    // 0x004504D4: lb          $v0, 0x26($a0)
    ctx->r2 = MEM_B(ctx->r4, 0X26);
    // 0x004504D8: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x004504DC: lwc1        $f1, 0xE94($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0XE94);
    // 0x004504E0: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x004504E4: mtc1        $v1, $f0
    ctx->f0.u32l = ctx->r3;
    // 0x004504E8: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x004504EC: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x004504F0: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x004504F4: sw          $zero, -0x5320($at)
    MEM_W(-0X5320, ctx->r1) = 0;
    // 0x004504F8: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x004504FC: sw          $zero, -0x5328($at)
    MEM_W(-0X5328, ctx->r1) = 0;
    // 0x00450500: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x00450504: sw          $zero, -0x5330($at)
    MEM_W(-0X5330, ctx->r1) = 0;
    // 0x00450508: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x0045050C: sw          $v0, -0x5338($at)
    MEM_W(-0X5338, ctx->r1) = ctx->r2;
    // 0x00450510: c.eq.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl == ctx->f2.fl;
    // 0x00450514: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x00450518: swc1        $f0, -0x533C($at)
    MEM_W(-0X533C, ctx->r1) = ctx->f0.u32l;
    // 0x0045051C: lb          $s2, 0x27($a0)
    ctx->r18 = MEM_B(ctx->r4, 0X27);
    // 0x00450520: bc1f        L_00450534
    if (!c1cs) {
        // 0x00450524: addiu       $s0, $zero, 0x3
        ctx->r16 = ADD32(0, 0X3);
            goto L_00450534;
    }
    // 0x00450524: addiu       $s0, $zero, 0x3
    ctx->r16 = ADD32(0, 0X3);
    // 0x00450528: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0045052C: lwc1        $f0, 0xE98($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0XE98);
    // 0x00450530: swc1        $f0, 0x14($a1)
    MEM_W(0X14, ctx->r5) = ctx->f0.u32l;
L_00450534:
    // 0x00450534: addiu       $v0, $a0, 0xC0
    ctx->r2 = ADD32(ctx->r4, 0XC0);
L_00450538:
    // 0x00450538: sb          $zero, 0xB0($v0)
    MEM_B(0XB0, ctx->r2) = 0;
    // 0x0045053C: addiu       $s0, $s0, -0x1
    ctx->r16 = ADD32(ctx->r16, -0X1);
    // 0x00450540: bgez        $s0, L_00450538
    if (SIGNED(ctx->r16) >= 0) {
        // 0x00450544: addiu       $v0, $v0, -0x40
        ctx->r2 = ADD32(ctx->r2, -0X40);
            goto L_00450538;
    }
    // 0x00450544: addiu       $v0, $v0, -0x40
    ctx->r2 = ADD32(ctx->r2, -0X40);
    // 0x00450548: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x0045054C: lui         $s1, 0x800F
    ctx->r17 = S32(0X800F << 16);
    // 0x00450550: addiu       $s1, $s1, 0x5EC0
    ctx->r17 = ADD32(ctx->r17, 0X5EC0);
L_00450554:
    // 0x00450554: jal         0x002855E8
    // 0x00450558: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_002855E8(rdram, ctx);
        goto after_0;
    // 0x00450558: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_0:
    // 0x0045055C: bne         $v0, $zero, L_00450590
    if (ctx->r2 != 0) {
        // 0x00450560: sll         $v0, $s0, 6
        ctx->r2 = S32(ctx->r16 << 6);
            goto L_00450590;
    }
    // 0x00450560: sll         $v0, $s0, 6
    ctx->r2 = S32(ctx->r16 << 6);
    // 0x00450564: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x00450568: slti        $v0, $s0, 0x4
    ctx->r2 = SIGNED(ctx->r16) < 0X4 ? 1 : 0;
    // 0x0045056C: bne         $v0, $zero, L_00450554
    if (ctx->r2 != 0) {
        // 0x00450570: addiu       $s1, $s1, 0x224
        ctx->r17 = ADD32(ctx->r17, 0X224);
            goto L_00450554;
    }
    // 0x00450570: addiu       $s1, $s1, 0x224
    ctx->r17 = ADD32(ctx->r17, 0X224);
    // 0x00450574: beq         $s2, $zero, L_004505AC
    if (ctx->r18 == 0) {
        // 0x00450578: addiu       $v0, $s2, -0x1
        ctx->r2 = ADD32(ctx->r18, -0X1);
            goto L_004505AC;
    }
    // 0x00450578: addiu       $v0, $s2, -0x1
    ctx->r2 = ADD32(ctx->r18, -0X1);
    // 0x0045057C: sltiu       $v0, $v0, 0x6
    ctx->r2 = ctx->r2 < 0X6 ? 1 : 0;
    // 0x00450580: beq         $v0, $zero, L_004505AC
    if (ctx->r2 == 0) {
        // 0x00450584: addiu       $a1, $s2, 0x2336
        ctx->r5 = ADD32(ctx->r18, 0X2336);
            goto L_004505AC;
    }
    // 0x00450584: addiu       $a1, $s2, 0x2336
    ctx->r5 = ADD32(ctx->r18, 0X2336);
    // 0x00450588: j           L_004175E0
    // 0x0045058C: nop

    entry_004175E0(rdram, ctx);
    return;
    // 0x0045058C: nop

L_00450590:
    // 0x00450590: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x00450594: addiu       $v1, $v1, -0x54A8
    ctx->r3 = ADD32(ctx->r3, -0X54A8);
    // 0x00450598: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x0045059C: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x004505A0: sb          $v1, 0x28($v0)
    MEM_B(0X28, ctx->r2) = ctx->r3;
    // 0x004505A4: j           L_00417574
    // 0x004505A8: sb          $s0, 0x2F($v0)
    MEM_B(0X2F, ctx->r2) = ctx->r16;
    entry_00417574(rdram, ctx);
    return;
    // 0x004505A8: sb          $s0, 0x2F($v0)
    MEM_B(0X2F, ctx->r2) = ctx->r16;
L_004505AC:
    // 0x004505AC: jal         0x002113A4
    // 0x004505B0: nop

    func_002113A4(rdram, ctx);
        goto after_1;
    // 0x004505B0: nop

    after_1:
    // 0x004505B4: lui         $v1, 0x2AAA
    ctx->r3 = S32(0X2AAA << 16);
    // 0x004505B8: ori         $v1, $v1, 0xAAAB
    ctx->r3 = ctx->r3 | 0XAAAB;
    // 0x004505BC: mult        $v0, $v1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x004505C0: sra         $a0, $v0, 31
    ctx->r4 = S32(SIGNED(ctx->r2) >> 31);
    // 0x004505C4: mfhi        $a2
    ctx->r6 = hi;
    // 0x004505C8: subu        $a0, $a2, $a0
    ctx->r4 = SUB32(ctx->r6, ctx->r4);
    // 0x004505CC: sll         $v1, $a0, 1
    ctx->r3 = S32(ctx->r4 << 1);
    // 0x004505D0: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x004505D4: sll         $v1, $v1, 1
    ctx->r3 = S32(ctx->r3 << 1);
    // 0x004505D8: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x004505DC: addiu       $a1, $v0, 0x2337
    ctx->r5 = ADD32(ctx->r2, 0X2337);
    // 0x004505E0: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x004505E4: addiu       $a0, $a0, 0x6CB0
    ctx->r4 = ADD32(ctx->r4, 0X6CB0);
    // 0x004505E8: jal         0x00430374
    // 0x004505EC: nop

    func_00430374(rdram, ctx);
        goto after_2;
    // 0x004505EC: nop

    after_2:
    // 0x004505F0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x004505F4: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x004505F8: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x004505FC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00450600: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00450604: jr          $ra
    // 0x00450608: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00450608: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_0029B4B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0029B4B0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x0029B4B4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0029B4B8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x0029B4BC: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x0029B4C0: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x0029B4C4: andi        $v0, $s0, 0x3
    ctx->r2 = ctx->r16 & 0X3;
    // 0x0029B4C8: beq         $v0, $zero, L_0029B4E8
    if (ctx->r2 == 0) {
        // 0x0029B4CC: sw          $ra, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->r31;
            goto L_0029B4E8;
    }
    // 0x0029B4CC: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x0029B4D0: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x0029B4D4: addiu       $a0, $a0, -0x5700
    ctx->r4 = ADD32(ctx->r4, -0X5700);
    // 0x0029B4D8: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x0029B4DC: addiu       $a1, $a1, -0x56FC
    ctx->r5 = ADD32(ctx->r5, -0X56FC);
    // 0x0029B4E0: jal         0x0029B020
    // 0x0029B4E4: addiu       $a2, $zero, 0x33
    ctx->r6 = ADD32(0, 0X33);
    func_0029B020(rdram, ctx);
        goto after_0;
    // 0x0029B4E4: addiu       $a2, $zero, 0x33
    ctx->r6 = ADD32(0, 0X33);
    after_0:
L_0029B4E8:
    // 0x0029B4E8: bne         $s1, $zero, L_0029B508
    if (ctx->r17 != 0) {
        // 0x0029B4EC: nop
    
            goto L_0029B508;
    }
    // 0x0029B4EC: nop

    // 0x0029B4F0: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x0029B4F4: addiu       $a0, $a0, -0x5700
    ctx->r4 = ADD32(ctx->r4, -0X5700);
    // 0x0029B4F8: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x0029B4FC: addiu       $a1, $a1, -0x56FC
    ctx->r5 = ADD32(ctx->r5, -0X56FC);
    // 0x0029B500: jal         0x0029B020
    // 0x0029B504: addiu       $a2, $zero, 0x34
    ctx->r6 = ADD32(0, 0X34);
    func_0029B020(rdram, ctx);
        goto after_1;
    // 0x0029B504: addiu       $a2, $zero, 0x34
    ctx->r6 = ADD32(0, 0X34);
    after_1:
L_0029B508:
    // 0x0029B508: jal         0x0029A140
    // 0x0029B50C: nop

    func_0029A140(rdram, ctx);
        goto after_2;
    // 0x0029B50C: nop

    after_2:
    // 0x0029B510: bne         $v0, $zero, L_0029B52C
    if (ctx->r2 != 0) {
        // 0x0029B514: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_0029B52C;
    }
    // 0x0029B514: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x0029B518: lui         $v0, 0xA000
    ctx->r2 = S32(0XA000 << 16);
    // 0x0029B51C: or          $v0, $s0, $v0
    ctx->r2 = ctx->r16 | ctx->r2;
    // 0x0029B520: lw          $v1, 0x0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X0);
    // 0x0029B524: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x0029B528: sw          $v1, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r3;
L_0029B52C:
    // 0x0029B52C: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x0029B530: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x0029B534: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0029B538: jr          $ra
    // 0x0029B53C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x0029B53C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_00293108(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00293108: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x0029310C: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x00293110: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x00293114: sw          $s4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r20;
    // 0x00293118: addu        $s4, $a1, $zero
    ctx->r20 = ADD32(ctx->r5, 0);
    // 0x0029311C: sw          $s5, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r21;
    // 0x00293120: addu        $s5, $a2, $zero
    ctx->r21 = ADD32(ctx->r6, 0);
    // 0x00293124: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x00293128: sw          $fp, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r30;
    // 0x0029312C: sw          $s7, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r23;
    // 0x00293130: sw          $s6, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r22;
    // 0x00293134: sw          $s3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r19;
    // 0x00293138: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x0029313C: bne         $s5, $zero, L_00293170
    if (ctx->r21 != 0) {
        // 0x00293140: sw          $s1, 0x2C($sp)
        MEM_W(0X2C, ctx->r29) = ctx->r17;
            goto L_00293170;
    }
    // 0x00293140: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x00293144: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // 0x00293148: sh          $zero, 0xC($s4)
    MEM_H(0XC, ctx->r20) = 0;
    // 0x0029314C: sw          $zero, 0x4($s4)
    MEM_W(0X4, ctx->r20) = 0;
    // 0x00293150: sw          $zero, 0x8($s4)
    MEM_W(0X8, ctx->r20) = 0;
    // 0x00293154: j           L_002931EC
    // 0x00293158: sw          $v0, 0x0($s4)
    MEM_W(0X0, ctx->r20) = ctx->r2;
        goto L_002931EC;
    // 0x00293158: sw          $v0, 0x0($s4)
    MEM_W(0X0, ctx->r20) = ctx->r2;
L_0029315C:
    // 0x0029315C: lw          $s3, 0x8($s0)
    ctx->r19 = MEM_W(ctx->r16, 0X8);
    // 0x00293160: lhu         $s2, 0x1A($s0)
    ctx->r18 = MEM_HU(ctx->r16, 0X1A);
    // 0x00293164: lw          $s1, 0xC($s0)
    ctx->r17 = MEM_W(ctx->r16, 0XC);
    // 0x00293168: j           L_002931CC
    // 0x0029316C: sw          $s3, 0x0($s4)
    MEM_W(0X0, ctx->r20) = ctx->r19;
        goto L_002931CC;
    // 0x0029316C: sw          $s3, 0x0($s4)
    MEM_W(0X0, ctx->r20) = ctx->r19;
L_00293170:
    // 0x00293170: lhu         $v1, 0x1A($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X1A);
    // 0x00293174: lw          $s7, 0x8($s0)
    ctx->r23 = MEM_W(ctx->r16, 0X8);
    // 0x00293178: sh          $v1, 0x20($sp)
    MEM_H(0X20, ctx->r29) = ctx->r3;
    // 0x0029317C: lw          $fp, 0xC($s0)
    ctx->r30 = MEM_W(ctx->r16, 0XC);
    // 0x00293180: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // 0x00293184: addiu       $s6, $zero, 0x4
    ctx->r22 = ADD32(0, 0X4);
    // 0x00293188: sh          $zero, 0x1A($s0)
    MEM_H(0X1A, ctx->r16) = 0;
    // 0x0029318C: sw          $zero, 0xC($s0)
    MEM_W(0XC, ctx->r16) = 0;
    // 0x00293190: sw          $v0, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r2;
    // 0x00293194: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_00293198:
    // 0x00293198: lw          $s3, 0x8($s0)
    ctx->r19 = MEM_W(ctx->r16, 0X8);
    // 0x0029319C: lhu         $s2, 0x1A($s0)
    ctx->r18 = MEM_HU(ctx->r16, 0X1A);
    // 0x002931A0: lw          $s1, 0xC($s0)
    ctx->r17 = MEM_W(ctx->r16, 0XC);
    // 0x002931A4: jal         0x00292DE0
    // 0x002931A8: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    func_00292DE0(rdram, ctx);
        goto after_0;
    // 0x002931A8: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    after_0:
    // 0x002931AC: lh          $v0, 0x10($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X10);
    // 0x002931B0: beq         $v0, $s6, L_0029315C
    if (ctx->r2 == ctx->r22) {
        // 0x002931B4: nop
    
            goto L_0029315C;
    }
    // 0x002931B4: nop

    // 0x002931B8: lw          $v0, 0xC($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC);
    // 0x002931BC: sltu        $v0, $v0, $s5
    ctx->r2 = ctx->r2 < ctx->r21 ? 1 : 0;
    // 0x002931C0: bne         $v0, $zero, L_00293198
    if (ctx->r2 != 0) {
        // 0x002931C4: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_00293198;
    }
    // 0x002931C4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x002931C8: sw          $s3, 0x0($s4)
    MEM_W(0X0, ctx->r20) = ctx->r19;
L_002931CC:
    // 0x002931CC: sh          $s2, 0xC($s4)
    MEM_H(0XC, ctx->r20) = ctx->r18;
    // 0x002931D0: sw          $s1, 0x4($s4)
    MEM_W(0X4, ctx->r20) = ctx->r17;
    // 0x002931D4: lw          $v0, 0xC($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC);
    // 0x002931D8: sw          $v0, 0x8($s4)
    MEM_W(0X8, ctx->r20) = ctx->r2;
    // 0x002931DC: sw          $s7, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r23;
    // 0x002931E0: lhu         $v1, 0x20($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X20);
    // 0x002931E4: sh          $v1, 0x1A($s0)
    MEM_H(0X1A, ctx->r16) = ctx->r3;
    // 0x002931E8: sw          $fp, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r30;
L_002931EC:
    // 0x002931EC: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x002931F0: lw          $fp, 0x48($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X48);
    // 0x002931F4: lw          $s7, 0x44($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X44);
    // 0x002931F8: lw          $s6, 0x40($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X40);
    // 0x002931FC: lw          $s5, 0x3C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X3C);
    // 0x00293200: lw          $s4, 0x38($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X38);
    // 0x00293204: lw          $s3, 0x34($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X34);
    // 0x00293208: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x0029320C: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x00293210: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x00293214: jr          $ra
    // 0x00293218: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x00293218: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_004516B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
;}
RECOMP_FUNC void func_00214F14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00214F14: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00214F18: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x00214F1C: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x00214F20: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x00214F24: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x00214F28: addu        $a3, $a0, $zero
    ctx->r7 = ADD32(ctx->r4, 0);
    // 0x00214F2C: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
    // 0x00214F30: lw          $v0, 0x24($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X24);
    // 0x00214F34: addiu       $a2, $a3, 0x68
    ctx->r6 = ADD32(ctx->r7, 0X68);
    // 0x00214F38: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x00214F3C: lw          $a1, 0x0($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X0);
    // 0x00214F40: jal         0x00213A70
    // 0x00214F44: addiu       $a3, $a3, 0x28
    ctx->r7 = ADD32(ctx->r7, 0X28);
    func_00213A70(rdram, ctx);
        goto after_0;
    // 0x00214F44: addiu       $a3, $a3, 0x28
    ctx->r7 = ADD32(ctx->r7, 0X28);
    after_0:
    // 0x00214F48: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x00214F4C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x00214F50: jal         0x00205904
    // 0x00214F54: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    func_00205904(rdram, ctx);
        goto after_1;
    // 0x00214F54: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    after_1:
    // 0x00214F58: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x00214F5C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x00214F60: jr          $ra
    // 0x00214F64: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00214F64: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_00266D80(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00266D80: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x00266D84: jr          $ra
    // 0x00266D88: nop

    return;
    // 0x00266D88: nop

;}
RECOMP_FUNC void func_002374AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002374AC: addiu       $sp, $sp, -0x90
    ctx->r29 = ADD32(ctx->r29, -0X90);
    // 0x002374B0: sw          $s1, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r17;
    // 0x002374B4: lw          $s1, 0xA0($sp)
    ctx->r17 = MEM_W(ctx->r29, 0XA0);
    // 0x002374B8: lui         $v0, 0x8011
    ctx->r2 = S32(0X8011 << 16);
    // 0x002374BC: lw          $v0, 0x1C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1C);
    // 0x002374C0: sw          $s2, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r18;
    // 0x002374C4: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x002374C8: sw          $s0, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r16;
    // 0x002374CC: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x002374D0: sw          $ra, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r31;
    // 0x002374D4: sw          $a2, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->r6;
    // 0x002374D8: beq         $v0, $zero, L_002374F0
    if (ctx->r2 == 0) {
        // 0x002374DC: sw          $a3, 0x9C($sp)
        MEM_W(0X9C, ctx->r29) = ctx->r7;
            goto L_002374F0;
    }
    // 0x002374DC: sw          $a3, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->r7;
    // 0x002374E0: sw          $zero, 0x0($s1)
    MEM_W(0X0, ctx->r17) = 0;
    // 0x002374E4: sw          $zero, 0x4($s1)
    MEM_W(0X4, ctx->r17) = 0;
    // 0x002374E8: j           L_002376E0
    // 0x002374EC: sw          $zero, 0x8($s1)
    MEM_W(0X8, ctx->r17) = 0;
        goto L_002376E0;
    // 0x002374EC: sw          $zero, 0x8($s1)
    MEM_W(0X8, ctx->r17) = 0;
L_002374F0:
    // 0x002374F0: lb          $v0, 0x9D($sp)
    ctx->r2 = MEM_B(ctx->r29, 0X9D);
    // 0x002374F4: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x002374F8: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x002374FC: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    // 0x00237500: lb          $v0, 0x9E($sp)
    ctx->r2 = MEM_B(ctx->r29, 0X9E);
    // 0x00237504: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x00237508: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x0023750C: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    // 0x00237510: lb          $v0, 0x9F($sp)
    ctx->r2 = MEM_B(ctx->r29, 0X9F);
    // 0x00237514: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x00237518: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x0023751C: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    // 0x00237520: lb          $v0, 0x9C($sp)
    ctx->r2 = MEM_B(ctx->r29, 0X9C);
    // 0x00237524: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00237528: lwc1        $f1, 0x6550($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X6550);
    // 0x0023752C: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x00237530: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00237534: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00237538: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x0023753C: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x00237540: jal         0x0020EF60
    // 0x00237544: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    func_0020EF60(rdram, ctx);
        goto after_0;
    // 0x00237544: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    after_0:
    // 0x00237548: lbu         $v1, 0x0($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X0);
    // 0x0023754C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00237550: beq         $v1, $v0, L_00237568
    if (ctx->r3 == ctx->r2) {
        // 0x00237554: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_00237568;
    }
    // 0x00237554: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x00237558: beq         $v1, $v0, L_002375B0
    if (ctx->r3 == ctx->r2) {
        // 0x0023755C: addu        $a2, $s0, $zero
        ctx->r6 = ADD32(ctx->r16, 0);
            goto L_002375B0;
    }
    // 0x0023755C: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    // 0x00237560: j           L_00237694
    // 0x00237564: nop

        goto L_00237694;
    // 0x00237564: nop

L_00237568:
    // 0x00237568: lw          $v0, 0x17C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X17C);
    // 0x0023756C: andi        $v0, $v0, 0x2000
    ctx->r2 = ctx->r2 & 0X2000;
    // 0x00237570: beq         $v0, $zero, L_0023758C
    if (ctx->r2 == 0) {
        // 0x00237574: nop
    
            goto L_0023758C;
    }
    // 0x00237574: nop

    // 0x00237578: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0023757C: lwc1        $f0, 0x6554($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6554);
    // 0x00237580: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x00237584: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x00237588: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
L_0023758C:
    // 0x0023758C: lwc1        $f1, 0x50($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X50);
    // 0x00237590: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00237594: lwc1        $f0, 0x6558($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6558);
    // 0x00237598: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x0023759C: mfc1        $a1, $f1
    ctx->r5 = (int32_t)ctx->f_odd[(1 - 1) * 2];
    // 0x002375A0: jal         0x002105A4
    // 0x002375A4: addiu       $a0, $sp, 0x40
    ctx->r4 = ADD32(ctx->r29, 0X40);
    func_002105A4(rdram, ctx);
        goto after_1;
    // 0x002375A4: addiu       $a0, $sp, 0x40
    ctx->r4 = ADD32(ctx->r29, 0X40);
    after_1:
    // 0x002375A8: j           L_0023769C
    // 0x002375AC: nop

        goto L_0023769C;
    // 0x002375AC: nop

L_002375B0:
    // 0x002375B0: lhu         $v1, 0x2($a2)
    ctx->r3 = MEM_HU(ctx->r6, 0X2);
    // 0x002375B4: addiu       $v0, $zero, 0xE
    ctx->r2 = ADD32(0, 0XE);
    // 0x002375B8: beq         $v1, $v0, L_002375D0
    if (ctx->r3 == ctx->r2) {
        // 0x002375BC: addiu       $v0, $zero, 0x68
        ctx->r2 = ADD32(0, 0X68);
            goto L_002375D0;
    }
    // 0x002375BC: addiu       $v0, $zero, 0x68
    ctx->r2 = ADD32(0, 0X68);
    // 0x002375C0: beq         $v1, $v0, L_002375FC
    if (ctx->r3 == ctx->r2) {
        // 0x002375C4: lui         $v1, 0x40
        ctx->r3 = S32(0X40 << 16);
            goto L_002375FC;
    }
    // 0x002375C4: lui         $v1, 0x40
    ctx->r3 = S32(0X40 << 16);
    // 0x002375C8: j           L_00237630
    // 0x002375CC: nop

        goto L_00237630;
    // 0x002375CC: nop

L_002375D0:
    // 0x002375D0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002375D4: lwc1        $f0, 0x655C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X655C);
    // 0x002375D8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002375DC: lwc1        $f1, 0x6560($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X6560);
    // 0x002375E0: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x002375E4: sw          $zero, 0x28($sp)
    MEM_W(0X28, ctx->r29) = 0;
    // 0x002375E8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x002375EC: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x002375F0: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x002375F4: j           L_00237670
    // 0x002375F8: swc1        $f1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
        goto L_00237670;
    // 0x002375F8: swc1        $f1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
L_002375FC:
    // 0x002375FC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00237600: lwc1        $f0, 0x6564($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6564);
    // 0x00237604: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x00237608: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x0023760C: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    // 0x00237610: lw          $t0, 0x18($a2)
    ctx->r8 = MEM_W(ctx->r6, 0X18);
    // 0x00237614: lw          $t1, 0x1C($a2)
    ctx->r9 = MEM_W(ctx->r6, 0X1C);
    // 0x00237618: lw          $t2, 0x20($a2)
    ctx->r10 = MEM_W(ctx->r6, 0X20);
    // 0x0023761C: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
    // 0x00237620: sw          $t1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r9;
    // 0x00237624: sw          $t2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r10;
    // 0x00237628: j           L_00237670
    // 0x0023762C: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
        goto L_00237670;
    // 0x0023762C: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
L_00237630:
    // 0x00237630: lw          $v0, 0xA4($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XA4);
    // 0x00237634: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x00237638: beq         $v0, $zero, L_0023765C
    if (ctx->r2 == 0) {
        // 0x0023763C: addiu       $a0, $sp, 0x20
        ctx->r4 = ADD32(ctx->r29, 0X20);
            goto L_0023765C;
    }
    // 0x0023763C: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    // 0x00237640: addiu       $a1, $s2, 0x4
    ctx->r5 = ADD32(ctx->r18, 0X4);
    // 0x00237644: jal         0x0020EF2C
    // 0x00237648: addiu       $a2, $a2, 0x4
    ctx->r6 = ADD32(ctx->r6, 0X4);
    func_0020EF2C(rdram, ctx);
        goto after_2;
    // 0x00237648: addiu       $a2, $a2, 0x4
    ctx->r6 = ADD32(ctx->r6, 0X4);
    after_2:
    // 0x0023764C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00237650: lwc1        $f0, 0x6568($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6568);
    // 0x00237654: j           L_00237670
    // 0x00237658: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
        goto L_00237670;
    // 0x00237658: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
L_0023765C:
    // 0x0023765C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00237660: lwc1        $f0, 0x656C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X656C);
    // 0x00237664: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x00237668: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x0023766C: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
L_00237670:
    // 0x00237670: addiu       $s0, $sp, 0x30
    ctx->r16 = ADD32(ctx->r29, 0X30);
    // 0x00237674: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00237678: jal         0x0020E810
    // 0x0023767C: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    func_0020E810(rdram, ctx);
        goto after_3;
    // 0x0023767C: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    after_3:
    // 0x00237680: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00237684: jal         0x00211114
    // 0x00237688: addiu       $a1, $sp, 0x40
    ctx->r5 = ADD32(ctx->r29, 0X40);
    func_00211114(rdram, ctx);
        goto after_4;
    // 0x00237688: addiu       $a1, $sp, 0x40
    ctx->r5 = ADD32(ctx->r29, 0X40);
    after_4:
    // 0x0023768C: j           L_0023769C
    // 0x00237690: nop

        goto L_0023769C;
    // 0x00237690: nop

L_00237694:
    // 0x00237694: jal         0x0020F79C
    // 0x00237698: addiu       $a0, $sp, 0x40
    ctx->r4 = ADD32(ctx->r29, 0X40);
    func_0020F79C(rdram, ctx);
        goto after_5;
    // 0x00237698: addiu       $a0, $sp, 0x40
    ctx->r4 = ADD32(ctx->r29, 0X40);
    after_5:
L_0023769C:
    // 0x0023769C: lw          $v0, 0xD4($s2)
    ctx->r2 = MEM_W(ctx->r18, 0XD4);
    // 0x002376A0: lui         $v1, 0x30
    ctx->r3 = S32(0X30 << 16);
    // 0x002376A4: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x002376A8: beq         $v0, $zero, L_002376D4
    if (ctx->r2 == 0) {
        // 0x002376AC: addiu       $a0, $sp, 0x40
        ctx->r4 = ADD32(ctx->r29, 0X40);
            goto L_002376D4;
    }
    // 0x002376AC: addiu       $a0, $sp, 0x40
    ctx->r4 = ADD32(ctx->r29, 0X40);
    // 0x002376B0: lw          $v0, 0x1A8($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X1A8);
    // 0x002376B4: lw          $v0, 0xBB0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0XBB0);
    // 0x002376B8: beq         $v0, $zero, L_002376D0
    if (ctx->r2 == 0) {
        // 0x002376BC: addiu       $a0, $sp, 0x10
        ctx->r4 = ADD32(ctx->r29, 0X10);
            goto L_002376D0;
    }
    // 0x002376BC: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x002376C0: lui         $a2, 0x3DCC
    ctx->r6 = S32(0X3DCC << 16);
    // 0x002376C4: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x002376C8: jal         0x0020EF60
    // 0x002376CC: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    func_0020EF60(rdram, ctx);
        goto after_6;
    // 0x002376CC: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    after_6:
L_002376D0:
    // 0x002376D0: addiu       $a0, $sp, 0x40
    ctx->r4 = ADD32(ctx->r29, 0X40);
L_002376D4:
    // 0x002376D4: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x002376D8: jal         0x0020FAFC
    // 0x002376DC: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    func_0020FAFC(rdram, ctx);
        goto after_7;
    // 0x002376DC: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    after_7:
L_002376E0:
    // 0x002376E0: lw          $ra, 0x8C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X8C);
    // 0x002376E4: lw          $s2, 0x88($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X88);
    // 0x002376E8: lw          $s1, 0x84($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X84);
    // 0x002376EC: lw          $s0, 0x80($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X80);
    // 0x002376F0: jr          $ra
    // 0x002376F4: addiu       $sp, $sp, 0x90
    ctx->r29 = ADD32(ctx->r29, 0X90);
    return;
    // 0x002376F4: addiu       $sp, $sp, 0x90
    ctx->r29 = ADD32(ctx->r29, 0X90);
;}
RECOMP_FUNC void func_0040B644(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0040B644: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x0040B648: lui         $a2, 0x8013
    ctx->r6 = S32(0X8013 << 16);
    // 0x0040B64C: addiu       $a2, $a2, -0x490
    ctx->r6 = ADD32(ctx->r6, -0X490);
    // 0x0040B650: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x0040B654: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x0040B658: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x0040B65C: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x0040B660: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x0040B664: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0040B668: sw          $v0, 0x688($a2)
    MEM_W(0X688, ctx->r6) = ctx->r2;
    // 0x0040B66C: addiu       $v0, $zero, 0x600
    ctx->r2 = ADD32(0, 0X600);
    // 0x0040B670: sw          $v0, 0x68C($a2)
    MEM_W(0X68C, ctx->r6) = ctx->r2;
    // 0x0040B674: lui         $v1, 0x43
    ctx->r3 = S32(0X43 << 16);
    // 0x0040B678: lw          $v1, 0x1DEC($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X1DEC);
    // 0x0040B67C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x0040B680: sw          $v0, 0x65C($a2)
    MEM_W(0X65C, ctx->r6) = ctx->r2;
    // 0x0040B684: sw          $zero, 0x67C($a2)
    MEM_W(0X67C, ctx->r6) = 0;
    // 0x0040B688: sw          $v1, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->r3;
    // 0x0040B68C: lw          $v0, 0x65C($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X65C);
    // 0x0040B690: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x0040B694: lui         $at, 0x43
    ctx->r1 = S32(0X43 << 16);
    // 0x0040B698: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x0040B69C: lw          $a0, 0x1DFC($at)
    ctx->r4 = MEM_W(ctx->r1, 0X1DFC);
    // 0x0040B6A0: lui         $v1, 0x1
    ctx->r3 = S32(0X1 << 16);
    // 0x0040B6A4: sw          $a0, 0x664($a2)
    MEM_W(0X664, ctx->r6) = ctx->r4;
    // 0x0040B6A8: lui         $at, 0x43
    ctx->r1 = S32(0X43 << 16);
    // 0x0040B6AC: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x0040B6B0: lw          $a0, 0x1DF0($at)
    ctx->r4 = MEM_W(ctx->r1, 0X1DF0);
    // 0x0040B6B4: ori         $v1, $v1, 0xF400
    ctx->r3 = ctx->r3 | 0XF400;
    // 0x0040B6B8: sw          $v1, 0x560($a2)
    MEM_W(0X560, ctx->r6) = ctx->r3;
    // 0x0040B6BC: sw          $v1, 0x678($a2)
    MEM_W(0X678, ctx->r6) = ctx->r3;
    // 0x0040B6C0: sw          $v1, 0x674($a2)
    MEM_W(0X674, ctx->r6) = ctx->r3;
    // 0x0040B6C4: sw          $a0, 0x660($a2)
    MEM_W(0X660, ctx->r6) = ctx->r4;
    // 0x0040B6C8: lb          $v1, 0x34($a1)
    ctx->r3 = MEM_B(ctx->r5, 0X34);
    // 0x0040B6CC: addiu       $v0, $zero, 0x13
    ctx->r2 = ADD32(0, 0X13);
    // 0x0040B6D0: beq         $v1, $v0, L_0040B718
    if (ctx->r3 == ctx->r2) {
        // 0x0040B6D4: addu        $s2, $a0, $zero
        ctx->r18 = ADD32(ctx->r4, 0);
            goto L_0040B718;
    }
    // 0x0040B6D4: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x0040B6D8: addu        $s3, $a2, $zero
    ctx->r19 = ADD32(ctx->r6, 0);
    // 0x0040B6DC: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x0040B6E0: addiu       $s1, $zero, 0x18
    ctx->r17 = ADD32(0, 0X18);
L_0040B6E4:
    // 0x0040B6E4: srav        $v0, $s2, $s0
    ctx->r2 = S32(SIGNED(ctx->r18) >> (ctx->r16 & 31));
    // 0x0040B6E8: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x0040B6EC: beql        $v0, $zero, L_0040B70C
    if (ctx->r2 == 0) {
        // 0x0040B6F0: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_0040B70C;
    }
    goto skip_0;
    // 0x0040B6F0: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    skip_0:
    // 0x0040B6F4: addu        $a0, $s3, $s1
    ctx->r4 = ADD32(ctx->r19, ctx->r17);
    // 0x0040B6F8: lui         $a1, 0x43
    ctx->r5 = S32(0X43 << 16);
    // 0x0040B6FC: addiu       $a1, $a1, 0x1E08
    ctx->r5 = ADD32(ctx->r5, 0X1E08);
    // 0x0040B700: jal         0x00236314
    // 0x0040B704: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    func_00236314(rdram, ctx);
        goto after_0;
    // 0x0040B704: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    after_0:
    // 0x0040B708: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_0040B70C:
    // 0x0040B70C: slti        $v0, $s0, 0xF
    ctx->r2 = SIGNED(ctx->r16) < 0XF ? 1 : 0;
    // 0x0040B710: bne         $v0, $zero, L_0040B6E4
    if (ctx->r2 != 0) {
        // 0x0040B714: addiu       $s1, $s1, 0x68
        ctx->r17 = ADD32(ctx->r17, 0X68);
            goto L_0040B6E4;
    }
    // 0x0040B714: addiu       $s1, $s1, 0x68
    ctx->r17 = ADD32(ctx->r17, 0X68);
L_0040B718:
    // 0x0040B718: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x0040B71C: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x0040B720: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x0040B724: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x0040B728: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0040B72C: jr          $ra
    // 0x0040B730: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x0040B730: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_0025E460(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0025E460: addu        $a1, $a1, $a2
    ctx->r5 = ADD32(ctx->r5, ctx->r6);
    // 0x0025E464: jr          $ra
    // 0x0025E468: sb          $a3, 0x130($a1)
    MEM_B(0X130, ctx->r5) = ctx->r7;
    return;
    // 0x0025E468: sb          $a3, 0x130($a1)
    MEM_B(0X130, ctx->r5) = ctx->r7;
;}
