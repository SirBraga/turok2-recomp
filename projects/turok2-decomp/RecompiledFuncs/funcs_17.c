#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_00417ACC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00417ACC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x00417AD0: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x00417AD4: addu        $s4, $a0, $zero
    ctx->r20 = ADD32(ctx->r4, 0);
    // 0x00417AD8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00417ADC: addiu       $s0, $zero, 0x3
    ctx->r16 = ADD32(0, 0X3);
    // 0x00417AE0: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x00417AE4: addiu       $v0, $v0, -0x5468
    ctx->r2 = ADD32(ctx->r2, -0X5468);
    // 0x00417AE8: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x00417AEC: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x00417AF0: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x00417AF4: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
L_00417AF8:
    // 0x00417AF8: sb          $zero, 0xA8($v0)
    MEM_B(0XA8, ctx->r2) = 0;
    // 0x00417AFC: addiu       $s0, $s0, -0x1
    ctx->r16 = ADD32(ctx->r16, -0X1);
    // 0x00417B00: bgez        $s0, L_00417AF8
    if (SIGNED(ctx->r16) >= 0) {
        // 0x00417B04: addiu       $v0, $v0, -0x40
        ctx->r2 = ADD32(ctx->r2, -0X40);
            goto L_00417AF8;
    }
    // 0x00417B04: addiu       $v0, $v0, -0x40
    ctx->r2 = ADD32(ctx->r2, -0X40);
    // 0x00417B08: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x00417B0C: lui         $s2, 0x8012
    ctx->r18 = S32(0X8012 << 16);
    // 0x00417B10: addiu       $s2, $s2, -0x54E8
    ctx->r18 = ADD32(ctx->r18, -0X54E8);
    // 0x00417B14: addiu       $s3, $zero, 0x1
    ctx->r19 = ADD32(0, 0X1);
    // 0x00417B18: lui         $s1, 0x800F
    ctx->r17 = S32(0X800F << 16);
    // 0x00417B1C: addiu       $s1, $s1, 0x5EC0
    ctx->r17 = ADD32(ctx->r17, 0X5EC0);
L_00417B20:
    // 0x00417B20: jal         0x002855E8
    // 0x00417B24: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_002855E8(rdram, ctx);
        goto after_0;
    // 0x00417B24: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_0:
    // 0x00417B28: beql        $v0, $zero, L_00417B40
    if (ctx->r2 == 0) {
        // 0x00417B2C: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_00417B40;
    }
    goto skip_0;
    // 0x00417B2C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    skip_0:
    // 0x00417B30: sb          $s3, 0x28($s2)
    MEM_B(0X28, ctx->r18) = ctx->r19;
    // 0x00417B34: sb          $s0, 0x2F($s2)
    MEM_B(0X2F, ctx->r18) = ctx->r16;
    // 0x00417B38: j           L_00417B4C
    // 0x00417B3C: sw          $s1, 0x20($s4)
    MEM_W(0X20, ctx->r20) = ctx->r17;
        goto L_00417B4C;
    // 0x00417B3C: sw          $s1, 0x20($s4)
    MEM_W(0X20, ctx->r20) = ctx->r17;
L_00417B40:
    // 0x00417B40: slti        $v0, $s0, 0x4
    ctx->r2 = SIGNED(ctx->r16) < 0X4 ? 1 : 0;
    // 0x00417B44: bne         $v0, $zero, L_00417B20
    if (ctx->r2 != 0) {
        // 0x00417B48: addiu       $s1, $s1, 0x224
        ctx->r17 = ADD32(ctx->r17, 0X224);
            goto L_00417B20;
    }
    // 0x00417B48: addiu       $s1, $s1, 0x224
    ctx->r17 = ADD32(ctx->r17, 0X224);
L_00417B4C:
    // 0x00417B4C: jal         0x00275A74
    // 0x00417B50: nop

    func_00275A74(rdram, ctx);
        goto after_1;
    // 0x00417B50: nop

    after_1:
    // 0x00417B54: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x00417B58: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x00417B5C: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x00417B60: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x00417B64: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00417B68: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00417B6C: jr          $ra
    // 0x00417B70: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x00417B70: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_00457D00(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_0041ED58:
    // 0x00457D00: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
L_0041EF2C:
    // 0x00457D04: lw          $v0, 0x990($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X990);
L_0041EFA0:
    // 0x00457D08: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
L_0041EFB4:
    // 0x00457D0C: sw          $s3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r19;
L_0041EFC4:
    // 0x00457D10: addu        $s3, $a1, $zero
    ctx->r19 = ADD32(ctx->r5, 0);
    // 0x00457D14: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x00457D18: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x00457D1C: sw          $s4, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r20;
    // 0x00457D20: addiu       $s4, $zero, 0x1
    ctx->r20 = ADD32(0, 0X1);
    // 0x00457D24: sw          $s5, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r21;
    // 0x00457D28: addu        $s5, $s0, $zero
    ctx->r21 = ADD32(ctx->r16, 0);
    // 0x00457D2C: sw          $ra, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r31;
    // 0x00457D30: sw          $s2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r18;
    // 0x00457D34: beq         $v0, $zero, L_00457D4C
    if (ctx->r2 == 0) {
        // 0x00457D38: sw          $s1, 0x34($sp)
        MEM_W(0X34, ctx->r29) = ctx->r17;
            goto L_00457D4C;
    }
    // 0x00457D38: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x00457D3C: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x00457D40: lw          $v0, 0x2028($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2028);
    // 0x00457D44: j           L_0041ED58
    // 0x00457D48: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    entry_0041ED58(rdram, ctx);
    return;
    // 0x00457D48: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
L_00457D4C:
    // 0x00457D4C: lw          $v0, 0x20($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X20);
    // 0x00457D50: lw          $a2, 0x1C($s3)
    ctx->r6 = MEM_W(ctx->r19, 0X1C);
    // 0x00457D54: lb          $v0, 0x4($v0)
    ctx->r2 = MEM_B(ctx->r2, 0X4);
    // 0x00457D58: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x00457D5C: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x00457D60: lw          $v0, 0x984($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X984);
    // 0x00457D64: beq         $v0, $zero, L_00457E48
    if (ctx->r2 == 0) {
        // 0x00457D68: addu        $s2, $a2, $zero
        ctx->r18 = ADD32(ctx->r6, 0);
            goto L_00457E48;
    }
    // 0x00457D68: addu        $s2, $a2, $zero
    ctx->r18 = ADD32(ctx->r6, 0);
    // 0x00457D6C: jal         0x00426D8C
    // 0x00457D70: addiu       $a0, $zero, 0x18
    ctx->r4 = ADD32(0, 0X18);
    func_00426D8C(rdram, ctx);
        goto after_0;
    // 0x00457D70: addiu       $a0, $zero, 0x18
    ctx->r4 = ADD32(0, 0X18);
    after_0:
    // 0x00457D74: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x00457D78: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    // 0x00457D7C: jal         0x004266C0
    // 0x00457D80: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    entry_004266C0(rdram, ctx);
        goto after_1;
    // 0x00457D80: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    after_1:
    // 0x00457D84: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x00457D88: bne         $s0, $zero, L_00457E48
    if (ctx->r16 != 0) {
        // 0x00457D8C: nop
    
            goto L_00457E48;
    }
    // 0x00457D8C: nop

    // 0x00457D90: lw          $v0, 0x24($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X24);
    // 0x00457D94: slt         $v0, $v0, $s1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r17) ? 1 : 0;
    // 0x00457D98: bne         $v0, $zero, L_00457E14
    if (ctx->r2 != 0) {
        // 0x00457D9C: nop
    
            goto L_00457E14;
    }
    // 0x00457D9C: nop

    // 0x00457DA0: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x00457DA4: jal         0x0042662C
    // 0x00457DA8: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    entry_0042662C(rdram, ctx);
        goto after_2;
    // 0x00457DA8: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    after_2:
    // 0x00457DAC: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x00457DB0: bne         $s0, $zero, L_00457E14
    if (ctx->r16 != 0) {
        // 0x00457DB4: nop
    
            goto L_00457E14;
    }
    // 0x00457DB4: nop

    // 0x00457DB8: lw          $v0, 0x28($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X28);
    // 0x00457DBC: beq         $v0, $zero, L_00457E14
    if (ctx->r2 == 0) {
        // 0x00457DC0: nop
    
            goto L_00457E14;
    }
    // 0x00457DC0: nop

    // 0x00457DC4: addu        $s4, $zero, $zero
    ctx->r20 = ADD32(0, 0);
    // 0x00457DC8: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x00457DCC: jal         0x004269B4
    // 0x00457DD0: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    entry_004269B4(rdram, ctx);
        goto after_3;
    // 0x00457DD0: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    after_3:
    // 0x00457DD4: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x00457DD8: bne         $s0, $zero, L_00457E14
    if (ctx->r16 != 0) {
        // 0x00457DDC: addiu       $a1, $zero, 0x18
        ctx->r5 = ADD32(0, 0X18);
            goto L_00457E14;
    }
    // 0x00457DDC: addiu       $a1, $zero, 0x18
    ctx->r5 = ADD32(0, 0X18);
    // 0x00457DE0: addiu       $s5, $zero, 0x1
    ctx->r21 = ADD32(0, 0X1);
    // 0x00457DE4: lui         $a2, 0x8013
    ctx->r6 = S32(0X8013 << 16);
    // 0x00457DE8: addiu       $a2, $a2, 0x968
    ctx->r6 = ADD32(ctx->r6, 0X968);
    // 0x00457DEC: lui         $a3, 0x800B
    ctx->r7 = S32(0X800B << 16);
    // 0x00457DF0: addiu       $a3, $a3, 0x45C0
    ctx->r7 = ADD32(ctx->r7, 0X45C0);
    // 0x00457DF4: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x00457DF8: addu        $v0, $sp, $a1
    ctx->r2 = ADD32(ctx->r29, ctx->r5);
    // 0x00457DFC: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x00457E00: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00457E04: addiu       $v0, $v0, 0x45D8
    ctx->r2 = ADD32(ctx->r2, 0X45D8);
    // 0x00457E08: jal         0x00426084
    // 0x00457E0C: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    func_00426084(rdram, ctx);
        goto after_4;
    // 0x00457E0C: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    after_4:
    // 0x00457E10: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
L_00457E14:
    // 0x00457E14: beq         $s4, $zero, L_00457E48
    if (ctx->r20 == 0) {
        // 0x00457E18: nop
    
            goto L_00457E48;
    }
    // 0x00457E18: nop

    // 0x00457E1C: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x00457E20: addiu       $a0, $a0, -0x61D4
    ctx->r4 = ADD32(ctx->r4, -0X61D4);
    // 0x00457E24: lw          $v0, 0x14($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X14);
    // 0x00457E28: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x00457E2C: addiu       $a1, $a1, -0x4504
    ctx->r5 = ADD32(ctx->r5, -0X4504);
    // 0x00457E30: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x00457E34: lw          $a3, 0xA50($s2)
    ctx->r7 = MEM_W(ctx->r18, 0XA50);
    // 0x00457E38: jal         0x00416644
    // 0x00457E3C: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    func_00416644(rdram, ctx);
        goto after_5;
    // 0x00457E3C: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    after_5:
    // 0x00457E40: j           L_0041EFC4
    // 0x00457E44: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    entry_0041EFC4(rdram, ctx);
    return;
    // 0x00457E44: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_00457E48:
    // 0x00457E48: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x00457E4C: lw          $v0, 0x2010($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2010);
    // 0x00457E50: bne         $v0, $zero, L_00457E68
    if (ctx->r2 != 0) {
        // 0x00457E54: nop
    
            goto L_00457E68;
    }
    // 0x00457E54: nop

    // 0x00457E58: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x00457E5C: lw          $v0, 0x2014($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2014);
    // 0x00457E60: beq         $v0, $zero, L_00457E70
    if (ctx->r2 == 0) {
        // 0x00457E64: nop
    
            goto L_00457E70;
    }
    // 0x00457E64: nop

L_00457E68:
    // 0x00457E68: jal         0x002053A8
    // 0x00457E6C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_002053A8(rdram, ctx);
        goto after_6;
    // 0x00457E6C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_6:
L_00457E70:
    // 0x00457E70: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x00457E74: lw          $a1, 0x2010($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X2010);
    // 0x00457E78: beq         $a1, $zero, L_00457E88
    if (ctx->r5 == 0) {
        // 0x00457E7C: nop
    
            goto L_00457E88;
    }
    // 0x00457E7C: nop

    // 0x00457E80: jal         0x002052D8
    // 0x00457E84: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_002052D8(rdram, ctx);
        goto after_7;
    // 0x00457E84: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_7:
L_00457E88:
    // 0x00457E88: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x00457E8C: lw          $a1, 0x2014($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X2014);
    // 0x00457E90: beq         $a1, $zero, L_00457EA0
    if (ctx->r5 == 0) {
        // 0x00457E94: nop
    
            goto L_00457EA0;
    }
    // 0x00457E94: nop

    // 0x00457E98: jal         0x002052D8
    // 0x00457E9C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_002052D8(rdram, ctx);
        goto after_8;
    // 0x00457E9C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_8:
L_00457EA0:
    // 0x00457EA0: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00457EA4: sw          $zero, 0x2010($at)
    MEM_W(0X2010, ctx->r1) = 0;
    // 0x00457EA8: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00457EAC: sw          $zero, 0x2014($at)
    MEM_W(0X2014, ctx->r1) = 0;
    // 0x00457EB0: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00457EB4: sw          $zero, 0x2018($at)
    MEM_W(0X2018, ctx->r1) = 0;
    // 0x00457EB8: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00457EBC: sw          $zero, 0x201C($at)
    MEM_W(0X201C, ctx->r1) = 0;
    // 0x00457EC0: beq         $s5, $zero, L_00457FC4
    if (ctx->r21 == 0) {
        // 0x00457EC4: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_00457FC4;
    }
    // 0x00457EC4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00457EC8: bne         $s0, $zero, L_00457F44
    if (ctx->r16 != 0) {
        // 0x00457ECC: nop
    
            goto L_00457F44;
    }
    // 0x00457ECC: nop

    // 0x00457ED0: lw          $v1, 0x20($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X20);
    // 0x00457ED4: beq         $v1, $v0, L_00457F04
    if (ctx->r3 == ctx->r2) {
        // 0x00457ED8: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_00457F04;
    }
    // 0x00457ED8: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x00457EDC: bne         $v0, $zero, L_00457EF4
    if (ctx->r2 != 0) {
        // 0x00457EE0: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_00457EF4;
    }
    // 0x00457EE0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x00457EE4: beq         $v1, $v0, L_00457F14
    if (ctx->r3 == ctx->r2) {
        // 0x00457EE8: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_00457F14;
    }
    // 0x00457EE8: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x00457EEC: beq         $v1, $v0, L_00457F24
    if (ctx->r3 == ctx->r2) {
        // 0x00457EF0: nop
    
            goto L_00457F24;
    }
    // 0x00457EF0: nop

L_00457EF4:
    // 0x00457EF4: lui         $v0, 0x44
    ctx->r2 = S32(0X44 << 16);
    // 0x00457EF8: addiu       $v0, $v0, -0x5460
    ctx->r2 = ADD32(ctx->r2, -0X5460);
    // 0x00457EFC: j           L_0041EF2C
    // 0x00457F00: nop

    entry_0041EF2C(rdram, ctx);
    return;
    // 0x00457F00: nop

L_00457F04:
    // 0x00457F04: lui         $v0, 0x44
    ctx->r2 = S32(0X44 << 16);
    // 0x00457F08: addiu       $v0, $v0, -0x543C
    ctx->r2 = ADD32(ctx->r2, -0X543C);
    // 0x00457F0C: j           L_0041EF2C
    // 0x00457F10: nop

    entry_0041EF2C(rdram, ctx);
    return;
    // 0x00457F10: nop

L_00457F14:
    // 0x00457F14: lui         $v0, 0x44
    ctx->r2 = S32(0X44 << 16);
    // 0x00457F18: addiu       $v0, $v0, -0x5418
    ctx->r2 = ADD32(ctx->r2, -0X5418);
    // 0x00457F1C: j           L_0041EF2C
    // 0x00457F20: nop

    entry_0041EF2C(rdram, ctx);
    return;
    // 0x00457F20: nop

L_00457F24:
    // 0x00457F24: lui         $v0, 0x44
    ctx->r2 = S32(0X44 << 16);
    // 0x00457F28: addiu       $v0, $v0, -0x53F4
    ctx->r2 = ADD32(ctx->r2, -0X53F4);
    // 0x00457F2C: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x00457F30: addiu       $a0, $a0, -0x61D4
    ctx->r4 = ADD32(ctx->r4, -0X61D4);
    // 0x00457F34: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x00457F38: addiu       $a1, $a1, -0x4378
    ctx->r5 = ADD32(ctx->r5, -0X4378);
    // 0x00457F3C: j           L_0041EFB4
    // 0x00457F40: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    entry_0041EFB4(rdram, ctx);
    return;
    // 0x00457F40: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
L_00457F44:
    // 0x00457F44: lw          $v1, 0x20($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X20);
    // 0x00457F48: beq         $v1, $v0, L_00457F78
    if (ctx->r3 == ctx->r2) {
        // 0x00457F4C: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_00457F78;
    }
    // 0x00457F4C: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x00457F50: bne         $v0, $zero, L_00457F68
    if (ctx->r2 != 0) {
        // 0x00457F54: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_00457F68;
    }
    // 0x00457F54: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x00457F58: beq         $v1, $v0, L_00457F88
    if (ctx->r3 == ctx->r2) {
        // 0x00457F5C: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_00457F88;
    }
    // 0x00457F5C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x00457F60: beq         $v1, $v0, L_00457F98
    if (ctx->r3 == ctx->r2) {
        // 0x00457F64: nop
    
            goto L_00457F98;
    }
    // 0x00457F64: nop

L_00457F68:
    // 0x00457F68: lui         $v0, 0x44
    ctx->r2 = S32(0X44 << 16);
    // 0x00457F6C: addiu       $v0, $v0, -0x5460
    ctx->r2 = ADD32(ctx->r2, -0X5460);
    // 0x00457F70: j           L_0041EFA0
    // 0x00457F74: nop

    entry_0041EFA0(rdram, ctx);
    return;
    // 0x00457F74: nop

L_00457F78:
    // 0x00457F78: lui         $v0, 0x44
    ctx->r2 = S32(0X44 << 16);
    // 0x00457F7C: addiu       $v0, $v0, -0x543C
    ctx->r2 = ADD32(ctx->r2, -0X543C);
    // 0x00457F80: j           L_0041EFA0
    // 0x00457F84: nop

    entry_0041EFA0(rdram, ctx);
    return;
    // 0x00457F84: nop

L_00457F88:
    // 0x00457F88: lui         $v0, 0x44
    ctx->r2 = S32(0X44 << 16);
    // 0x00457F8C: addiu       $v0, $v0, -0x5418
    ctx->r2 = ADD32(ctx->r2, -0X5418);
    // 0x00457F90: j           L_0041EFA0
    // 0x00457F94: nop

    entry_0041EFA0(rdram, ctx);
    return;
    // 0x00457F94: nop

L_00457F98:
    // 0x00457F98: lui         $v0, 0x44
    ctx->r2 = S32(0X44 << 16);
    // 0x00457F9C: addiu       $v0, $v0, -0x53F4
    ctx->r2 = ADD32(ctx->r2, -0X53F4);
    // 0x00457FA0: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x00457FA4: addiu       $a0, $a0, -0x61D4
    ctx->r4 = ADD32(ctx->r4, -0X61D4);
    // 0x00457FA8: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x00457FAC: addiu       $a1, $a1, -0x42E8
    ctx->r5 = ADD32(ctx->r5, -0X42E8);
    // 0x00457FB0: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x00457FB4: lw          $a3, 0xA50($s2)
    ctx->r7 = MEM_W(ctx->r18, 0XA50);
    // 0x00457FB8: jal         0x00416644
    // 0x00457FBC: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    func_00416644(rdram, ctx);
        goto after_9;
    // 0x00457FBC: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    after_9:
    // 0x00457FC0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_00457FC4:
    // 0x00457FC4: lw          $ra, 0x48($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X48);
    // 0x00457FC8: lw          $s5, 0x44($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X44);
    // 0x00457FCC: lw          $s4, 0x40($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X40);
    // 0x00457FD0: lw          $s3, 0x3C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X3C);
    // 0x00457FD4: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x00457FD8: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x00457FDC: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x00457FE0: jr          $ra
    // 0x00457FE4: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x00457FE4: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_002563FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002563FC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00256400: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00256404: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x00256408: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x0025640C: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x00256410: jal         0x00251A2C
    // 0x00256414: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    func_00251A2C(rdram, ctx);
        goto after_0;
    // 0x00256414: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    after_0:
    // 0x00256418: lwc1        $f1, 0xA78($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0XA78);
    // 0x0025641C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x00256420: c.eq.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl == ctx->f0.fl;
    // 0x00256424: nop

    // 0x00256428: bc1t        L_0025643C
    if (c1cs) {
        // 0x0025642C: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_0025643C;
    }
    // 0x0025642C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00256430: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x00256434: jal         0x0024E5F0
    // 0x00256438: addiu       $a2, $zero, 0x22
    ctx->r6 = ADD32(0, 0X22);
    func_0024E5F0(rdram, ctx);
        goto after_1;
    // 0x00256438: addiu       $a2, $zero, 0x22
    ctx->r6 = ADD32(0, 0X22);
    after_1:
L_0025643C:
    // 0x0025643C: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x00256440: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00256444: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00256448: jr          $ra
    // 0x0025644C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x0025644C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_00427C20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00427C20: addiu       $sp, $sp, -0x158
    ctx->r29 = ADD32(ctx->r29, -0X158);
    // 0x00427C24: sw          $s3, 0x13C($sp)
    MEM_W(0X13C, ctx->r29) = ctx->r19;
    // 0x00427C28: addu        $s3, $a0, $zero
    ctx->r19 = ADD32(ctx->r4, 0);
    // 0x00427C2C: sw          $s1, 0x134($sp)
    MEM_W(0X134, ctx->r29) = ctx->r17;
    // 0x00427C30: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x00427C34: sw          $ra, 0x150($sp)
    MEM_W(0X150, ctx->r29) = ctx->r31;
    // 0x00427C38: sw          $s7, 0x14C($sp)
    MEM_W(0X14C, ctx->r29) = ctx->r23;
    // 0x00427C3C: sw          $s6, 0x148($sp)
    MEM_W(0X148, ctx->r29) = ctx->r22;
    // 0x00427C40: sw          $s5, 0x144($sp)
    MEM_W(0X144, ctx->r29) = ctx->r21;
    // 0x00427C44: sw          $s4, 0x140($sp)
    MEM_W(0X140, ctx->r29) = ctx->r20;
    // 0x00427C48: sw          $s2, 0x138($sp)
    MEM_W(0X138, ctx->r29) = ctx->r18;
    // 0x00427C4C: sw          $s0, 0x130($sp)
    MEM_W(0X130, ctx->r29) = ctx->r16;
    // 0x00427C50: lw          $v0, 0x50($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X50);
    // 0x00427C54: slt         $v0, $s1, $v0
    ctx->r2 = SIGNED(ctx->r17) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x00427C58: beq         $v0, $zero, L_00427CE4
    if (ctx->r2 == 0) {
        // 0x00427C5C: addu        $s6, $a2, $zero
        ctx->r22 = ADD32(ctx->r6, 0);
            goto L_00427CE4;
    }
    // 0x00427C5C: addu        $s6, $a2, $zero
    ctx->r22 = ADD32(ctx->r6, 0);
    // 0x00427C60: bltz        $s1, L_00427E30
    if (SIGNED(ctx->r17) < 0) {
        // 0x00427C64: addiu       $v0, $zero, 0x5
        ctx->r2 = ADD32(0, 0X5);
            goto L_00427E30;
    }
    // 0x00427C64: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x00427C68: lw          $v0, 0x0($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X0);
    // 0x00427C6C: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x00427C70: beq         $v0, $zero, L_00427E30
    if (ctx->r2 == 0) {
        // 0x00427C74: addiu       $v0, $zero, 0x5
        ctx->r2 = ADD32(0, 0X5);
            goto L_00427E30;
    }
    // 0x00427C74: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x00427C78: jal         0x00429DFC
    // 0x00427C7C: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    func_00429DFC(rdram, ctx);
        goto after_0;
    // 0x00427C7C: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    after_0:
    // 0x00427C80: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
    // 0x00427C84: beq         $v0, $v1, L_00427E30
    if (ctx->r2 == ctx->r3) {
        // 0x00427C88: addu        $v0, $v1, $zero
        ctx->r2 = ADD32(ctx->r3, 0);
            goto L_00427E30;
    }
    // 0x00427C88: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
    // 0x00427C8C: lbu         $v0, 0x65($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0X65);
    // 0x00427C90: beq         $v0, $zero, L_00427CAC
    if (ctx->r2 == 0) {
        // 0x00427C94: addiu       $a3, $sp, 0x110
        ctx->r7 = ADD32(ctx->r29, 0X110);
            goto L_00427CAC;
    }
    // 0x00427C94: addiu       $a3, $sp, 0x110
    ctx->r7 = ADD32(ctx->r29, 0X110);
    // 0x00427C98: sb          $zero, 0x65($s3)
    MEM_B(0X65, ctx->r19) = 0;
    // 0x00427C9C: jal         0x00429EC4
    // 0x00427CA0: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    func_00429EC4(rdram, ctx);
        goto after_1;
    // 0x00427CA0: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    after_1:
    // 0x00427CA4: bne         $v0, $zero, L_00427E30
    if (ctx->r2 != 0) {
        // 0x00427CA8: addiu       $a3, $sp, 0x110
        ctx->r7 = ADD32(ctx->r29, 0X110);
            goto L_00427E30;
    }
    // 0x00427CA8: addiu       $a3, $sp, 0x110
    ctx->r7 = ADD32(ctx->r29, 0X110);
L_00427CAC:
    // 0x00427CAC: lw          $a0, 0x4($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X4);
    // 0x00427CB0: lhu         $a2, 0x5E($s3)
    ctx->r6 = MEM_HU(ctx->r19, 0X5E);
    // 0x00427CB4: lw          $a1, 0x8($s3)
    ctx->r5 = MEM_W(ctx->r19, 0X8);
    // 0x00427CB8: addu        $a2, $a2, $s1
    ctx->r6 = ADD32(ctx->r6, ctx->r17);
    // 0x00427CBC: jal         0x00299680
    // 0x00427CC0: andi        $a2, $a2, 0xFFFF
    ctx->r6 = ctx->r6 & 0XFFFF;
    func_00299680(rdram, ctx);
        goto after_2;
    // 0x00427CC0: andi        $a2, $a2, 0xFFFF
    ctx->r6 = ctx->r6 & 0XFFFF;
    after_2:
    // 0x00427CC4: bne         $v0, $zero, L_00427E30
    if (ctx->r2 != 0) {
        // 0x00427CC8: nop
    
            goto L_00427E30;
    }
    // 0x00427CC8: nop

    // 0x00427CCC: lhu         $v0, 0x114($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X114);
    // 0x00427CD0: beq         $v0, $zero, L_00427E30
    if (ctx->r2 == 0) {
        // 0x00427CD4: addiu       $v0, $zero, 0x5
        ctx->r2 = ADD32(0, 0X5);
            goto L_00427E30;
    }
    // 0x00427CD4: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x00427CD8: lw          $v0, 0x110($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X110);
    // 0x00427CDC: bne         $v0, $zero, L_00427CEC
    if (ctx->r2 != 0) {
        // 0x00427CE0: nop
    
            goto L_00427CEC;
    }
    // 0x00427CE0: nop

L_00427CE4:
    // 0x00427CE4: j           L_00427E30
    // 0x00427CE8: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
        goto L_00427E30;
    // 0x00427CE8: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
L_00427CEC:
    // 0x00427CEC: lhu         $v0, 0x116($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X116);
    // 0x00427CF0: lw          $v1, 0x60($s3)
    ctx->r3 = MEM_W(ctx->r19, 0X60);
    // 0x00427CF4: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x00427CF8: bne         $v0, $zero, L_00427E30
    if (ctx->r2 != 0) {
        // 0x00427CFC: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_00427E30;
    }
    // 0x00427CFC: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x00427D00: lbu         $s5, 0x117($sp)
    ctx->r21 = MEM_BU(ctx->r29, 0X117);
    // 0x00427D04: lbu         $s2, 0x116($sp)
    ctx->r18 = MEM_BU(ctx->r29, 0X116);
    // 0x00427D08: lbu         $v0, 0x64($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0X64);
    // 0x00427D0C: andi        $a3, $s2, 0xFF
    ctx->r7 = ctx->r18 & 0XFF;
    // 0x00427D10: sltu        $v0, $a3, $v0
    ctx->r2 = ctx->r7 < ctx->r2 ? 1 : 0;
    // 0x00427D14: beq         $v0, $zero, L_00427DB4
    if (ctx->r2 == 0) {
        // 0x00427D18: addu        $s1, $zero, $zero
        ctx->r17 = ADD32(0, 0);
            goto L_00427DB4;
    }
    // 0x00427D18: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x00427D1C: addiu       $s4, $sp, 0x10
    ctx->r20 = ADD32(ctx->r29, 0X10);
    // 0x00427D20: addiu       $s7, $zero, 0x1
    ctx->r23 = ADD32(0, 0X1);
    // 0x00427D24: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
L_00427D28:
    // 0x00427D28: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x00427D2C: jal         0x00429AA4
    // 0x00427D30: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_00429AA4(rdram, ctx);
        goto after_3;
    // 0x00427D30: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_3:
    // 0x00427D34: bne         $v0, $zero, L_00427E30
    if (ctx->r2 != 0) {
        // 0x00427D38: nop
    
            goto L_00427E30;
    }
    // 0x00427D38: nop

    // 0x00427D3C: andi        $v0, $s5, 0xFF
    ctx->r2 = ctx->r21 & 0XFF;
    // 0x00427D40: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x00427D44: addu        $v0, $s4, $v0
    ctx->r2 = ADD32(ctx->r20, ctx->r2);
    // 0x00427D48: lhu         $s0, 0x0($v0)
    ctx->r16 = MEM_HU(ctx->r2, 0X0);
    // 0x00427D4C: lw          $v1, 0x60($s3)
    ctx->r3 = MEM_W(ctx->r19, 0X60);
    // 0x00427D50: slt         $v0, $s0, $v1
    ctx->r2 = SIGNED(ctx->r16) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x00427D54: bne         $v0, $zero, L_00427D98
    if (ctx->r2 != 0) {
        // 0x00427D58: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_00427D98;
    }
    // 0x00427D58: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x00427D5C: addu        $a0, $v1, $zero
    ctx->r4 = ADD32(ctx->r3, 0);
    // 0x00427D60: andi        $v0, $s0, 0xFF
    ctx->r2 = ctx->r16 & 0XFF;
L_00427D64:
    // 0x00427D64: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x00427D68: addu        $v0, $s4, $v0
    ctx->r2 = ADD32(ctx->r20, ctx->r2);
    // 0x00427D6C: lhu         $s0, 0x0($v0)
    ctx->r16 = MEM_HU(ctx->r2, 0X0);
    // 0x00427D70: andi        $v0, $s0, 0xFFFF
    ctx->r2 = ctx->r16 & 0XFFFF;
    // 0x00427D74: srl         $v1, $v0, 8
    ctx->r3 = S32(U32(ctx->r2) >> 8);
    // 0x00427D78: beq         $v1, $s2, L_00427D8C
    if (ctx->r3 == ctx->r18) {
        // 0x00427D7C: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_00427D8C;
    }
    // 0x00427D7C: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x00427D80: addu        $s2, $v1, $zero
    ctx->r18 = ADD32(ctx->r3, 0);
    // 0x00427D84: j           L_00427D9C
    // 0x00427D88: addu        $s5, $s0, $zero
    ctx->r21 = ADD32(ctx->r16, 0);
        goto L_00427D9C;
    // 0x00427D88: addu        $s5, $s0, $zero
    ctx->r21 = ADD32(ctx->r16, 0);
L_00427D8C:
    // 0x00427D8C: slt         $v0, $v0, $a0
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x00427D90: beq         $v0, $zero, L_00427D64
    if (ctx->r2 == 0) {
        // 0x00427D94: andi        $v0, $s0, 0xFF
        ctx->r2 = ctx->r16 & 0XFF;
            goto L_00427D64;
    }
    // 0x00427D94: andi        $v0, $s0, 0xFF
    ctx->r2 = ctx->r16 & 0XFF;
L_00427D98:
    // 0x00427D98: andi        $v0, $s0, 0xFFFF
    ctx->r2 = ctx->r16 & 0XFFFF;
L_00427D9C:
    // 0x00427D9C: beq         $v0, $s7, L_00427DC4
    if (ctx->r2 == ctx->r23) {
        // 0x00427DA0: andi        $a3, $s2, 0xFF
        ctx->r7 = ctx->r18 & 0XFF;
            goto L_00427DC4;
    }
    // 0x00427DA0: andi        $a3, $s2, 0xFF
    ctx->r7 = ctx->r18 & 0XFF;
    // 0x00427DA4: lbu         $v0, 0x64($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0X64);
    // 0x00427DA8: sltu        $v0, $a3, $v0
    ctx->r2 = ctx->r7 < ctx->r2 ? 1 : 0;
    // 0x00427DAC: bnel        $v0, $zero, L_00427D28
    if (ctx->r2 != 0) {
        // 0x00427DB0: addu        $a0, $s3, $zero
        ctx->r4 = ADD32(ctx->r19, 0);
            goto L_00427D28;
    }
    goto skip_0;
    // 0x00427DB0: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    skip_0:
L_00427DB4:
    // 0x00427DB4: andi        $v1, $s0, 0xFFFF
    ctx->r3 = ctx->r16 & 0XFFFF;
    // 0x00427DB8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00427DBC: bne         $v1, $v0, L_00427E30
    if (ctx->r3 != ctx->r2) {
        // 0x00427DC0: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_00427E30;
    }
    // 0x00427DC0: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
L_00427DC4:
    // 0x00427DC4: sll         $v0, $s1, 8
    ctx->r2 = S32(ctx->r17 << 8);
    // 0x00427DC8: sw          $v0, 0x0($s6)
    MEM_W(0X0, ctx->r22) = ctx->r2;
    // 0x00427DCC: lhu         $v0, 0x114($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X114);
    // 0x00427DD0: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x00427DD4: sh          $v0, 0x8($s6)
    MEM_H(0X8, ctx->r22) = ctx->r2;
    // 0x00427DD8: lw          $v0, 0x110($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X110);
    // 0x00427DDC: addiu       $a1, $sp, 0x110
    ctx->r5 = ADD32(ctx->r29, 0X110);
    // 0x00427DE0: sw          $v0, 0x4($s6)
    MEM_W(0X4, ctx->r22) = ctx->r2;
    // 0x00427DE4: addu        $v1, $s6, $a0
    ctx->r3 = ADD32(ctx->r22, ctx->r4);
L_00427DE8:
    // 0x00427DE8: addu        $v0, $a1, $a0
    ctx->r2 = ADD32(ctx->r5, ctx->r4);
    // 0x00427DEC: lbu         $v0, 0x10($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X10);
    // 0x00427DF0: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x00427DF4: sb          $v0, 0xE($v1)
    MEM_B(0XE, ctx->r3) = ctx->r2;
    // 0x00427DF8: slti        $v0, $a0, 0x10
    ctx->r2 = SIGNED(ctx->r4) < 0X10 ? 1 : 0;
    // 0x00427DFC: bne         $v0, $zero, L_00427DE8
    if (ctx->r2 != 0) {
        // 0x00427E00: addu        $v1, $s6, $a0
        ctx->r3 = ADD32(ctx->r22, ctx->r4);
            goto L_00427DE8;
    }
    // 0x00427E00: addu        $v1, $s6, $a0
    ctx->r3 = ADD32(ctx->r22, ctx->r4);
    // 0x00427E04: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x00427E08: addiu       $a1, $sp, 0x110
    ctx->r5 = ADD32(ctx->r29, 0X110);
    // 0x00427E0C: addu        $v1, $s6, $a0
    ctx->r3 = ADD32(ctx->r22, ctx->r4);
L_00427E10:
    // 0x00427E10: addu        $v0, $a1, $a0
    ctx->r2 = ADD32(ctx->r5, ctx->r4);
    // 0x00427E14: lbu         $v0, 0xC($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0XC);
    // 0x00427E18: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x00427E1C: sb          $v0, 0xA($v1)
    MEM_B(0XA, ctx->r3) = ctx->r2;
    // 0x00427E20: slti        $v0, $a0, 0x4
    ctx->r2 = SIGNED(ctx->r4) < 0X4 ? 1 : 0;
    // 0x00427E24: bne         $v0, $zero, L_00427E10
    if (ctx->r2 != 0) {
        // 0x00427E28: addu        $v1, $s6, $a0
        ctx->r3 = ADD32(ctx->r22, ctx->r4);
            goto L_00427E10;
    }
    // 0x00427E28: addu        $v1, $s6, $a0
    ctx->r3 = ADD32(ctx->r22, ctx->r4);
    // 0x00427E2C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_00427E30:
    // 0x00427E30: lw          $ra, 0x150($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X150);
    // 0x00427E34: lw          $s7, 0x14C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X14C);
    // 0x00427E38: lw          $s6, 0x148($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X148);
    // 0x00427E3C: lw          $s5, 0x144($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X144);
    // 0x00427E40: lw          $s4, 0x140($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X140);
    // 0x00427E44: lw          $s3, 0x13C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X13C);
    // 0x00427E48: lw          $s2, 0x138($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X138);
    // 0x00427E4C: lw          $s1, 0x134($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X134);
    // 0x00427E50: lw          $s0, 0x130($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X130);
    // 0x00427E54: jr          $ra
    // 0x00427E58: addiu       $sp, $sp, 0x158
    ctx->r29 = ADD32(ctx->r29, 0X158);
    return;
    // 0x00427E58: addiu       $sp, $sp, 0x158
    ctx->r29 = ADD32(ctx->r29, 0X158);
;}
RECOMP_FUNC void func_0029B5AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0029B5AC: jal         0x0020EF2C
    // 0x0029B5B0: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    func_0020EF2C(rdram, ctx);
        goto after_0;
    // 0x0029B5B0: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    after_0:
    // 0x0029B5B4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0029B5B8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x0029B5BC: sw          $s5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r21;
    // 0x0029B5C0: addu        $s5, $a1, $zero
    ctx->r21 = ADD32(ctx->r5, 0);
    // 0x0029B5C4: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x0029B5C8: addu        $s4, $a2, $zero
    ctx->r20 = ADD32(ctx->r6, 0);
    // 0x0029B5CC: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x0029B5D0: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x0029B5D4: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x0029B5D8: jal         0x0029DFF0
    // 0x0029B5DC: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    func_0029DFF0(rdram, ctx);
        goto after_1;
    // 0x0029B5DC: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    after_1:
    // 0x0029B5E0: lw          $v1, 0x8($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X8);
    // 0x0029B5E4: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    // 0x0029B5E8: slt         $v1, $v1, $a0
    ctx->r3 = SIGNED(ctx->r3) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x0029B5EC: bne         $v1, $zero, L_0029B638
    if (ctx->r3 != 0) {
        // 0x0029B5F0: addu        $s1, $v0, $zero
        ctx->r17 = ADD32(ctx->r2, 0);
            goto L_0029B638;
    }
    // 0x0029B5F0: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x0029B5F4: addiu       $s3, $zero, 0x1
    ctx->r19 = ADD32(0, 0X1);
    // 0x0029B5F8: addiu       $s2, $zero, 0x8
    ctx->r18 = ADD32(0, 0X8);
L_0029B5FC:
    // 0x0029B5FC: beq         $s4, $s3, L_0029B614
    if (ctx->r20 == ctx->r19) {
        // 0x0029B600: addiu       $a0, $s0, 0x4
        ctx->r4 = ADD32(ctx->r16, 0X4);
            goto L_0029B614;
    }
    // 0x0029B600: addiu       $a0, $s0, 0x4
    ctx->r4 = ADD32(ctx->r16, 0X4);
    // 0x0029B604: jal         0x0029E010
    // 0x0029B608: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_0029E010(rdram, ctx);
        goto after_2;
    // 0x0029B608: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_2:
    // 0x0029B60C: j           L_0029B6C0
    // 0x0029B610: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_0029B6C0;
    // 0x0029B610: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_0029B614:
    // 0x0029B614: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x0029B618: lw          $v0, -0x76E0($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X76E0);
    // 0x0029B61C: jal         0x0029C6DC
    // 0x0029B620: sh          $s2, 0x10($v0)
    MEM_H(0X10, ctx->r2) = ctx->r18;
    func_0029C6DC(rdram, ctx);
        goto after_3;
    // 0x0029B620: sh          $s2, 0x10($v0)
    MEM_H(0X10, ctx->r2) = ctx->r18;
    after_3:
    // 0x0029B624: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
    // 0x0029B628: lw          $v1, 0x10($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X10);
    // 0x0029B62C: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x0029B630: beq         $v0, $zero, L_0029B5FC
    if (ctx->r2 == 0) {
        // 0x0029B634: nop
    
            goto L_0029B5FC;
    }
    // 0x0029B634: nop

L_0029B638:
    // 0x0029B638: lw          $v0, 0xC($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC);
    // 0x0029B63C: lw          $v1, 0x10($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X10);
    // 0x0029B640: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x0029B644: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x0029B648: div         $zero, $v0, $v1
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r3))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r3)));
    // 0x0029B64C: bne         $v1, $zero, L_0029B658
    if (ctx->r3 != 0) {
        // 0x0029B650: nop
    
            goto L_0029B658;
    }
    // 0x0029B650: nop

    // 0x0029B654: break       7
    do_break(2733652);
L_0029B658:
    // 0x0029B658: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x0029B65C: bne         $v1, $at, L_0029B670
    if (ctx->r3 != ctx->r1) {
        // 0x0029B660: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_0029B670;
    }
    // 0x0029B660: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x0029B664: bne         $v0, $at, L_0029B670
    if (ctx->r2 != ctx->r1) {
        // 0x0029B668: nop
    
            goto L_0029B670;
    }
    // 0x0029B668: nop

    // 0x0029B66C: break       6
    do_break(2733676);
L_0029B670:
    // 0x0029B670: mfhi        $v1
    ctx->r3 = hi;
    // 0x0029B674: lw          $v0, 0x14($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X14);
    // 0x0029B678: sw          $v1, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r3;
    // 0x0029B67C: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x0029B680: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x0029B684: sw          $s5, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r21;
    // 0x0029B688: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
    // 0x0029B68C: lw          $v1, 0x0($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X0);
    // 0x0029B690: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x0029B694: sw          $v0, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r2;
    // 0x0029B698: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x0029B69C: beq         $v0, $zero, L_0029B6B4
    if (ctx->r2 == 0) {
        // 0x0029B6A0: nop
    
            goto L_0029B6B4;
    }
    // 0x0029B6A0: nop

    // 0x0029B6A4: jal         0x0029C8C8
    // 0x0029B6A8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_0029C8C8(rdram, ctx);
        goto after_4;
    // 0x0029B6A8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
    // 0x0029B6AC: jal         0x0029BB10
    // 0x0029B6B0: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    osStartThread_recomp(rdram, ctx);
        goto after_5;
    // 0x0029B6B0: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    after_5:
L_0029B6B4:
    // 0x0029B6B4: jal         0x0029E010
    // 0x0029B6B8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_0029E010(rdram, ctx);
        goto after_6;
    // 0x0029B6B8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_6:
    // 0x0029B6BC: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_0029B6C0:
    // 0x0029B6C0: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x0029B6C4: lw          $s5, 0x24($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X24);
    // 0x0029B6C8: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x0029B6CC: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x0029B6D0: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x0029B6D4: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x0029B6D8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0029B6DC: jr          $ra
    // 0x0029B6E0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x0029B6E0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_004199A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004199A0: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x004199A4: jr          $ra
    // 0x004199A8: sh          $v0, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r2;
    return;
    // 0x004199A8: sh          $v0, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r2;
;}
RECOMP_FUNC void func_0042FF10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0042FF10: addu        $s1, $s0, $zero
    ctx->r17 = ADD32(ctx->r16, 0);
L_0042FF14:
    // 0x0042FF14: lw          $a0, 0x4($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X4);
    // 0x0042FF18: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x0042FF1C: addu        $a0, $s1, $a0
    ctx->r4 = ADD32(ctx->r17, ctx->r4);
    // 0x0042FF20: jal         0x0042FFF0
    // 0x0042FF24: addiu       $a0, $a0, 0x558
    ctx->r4 = ADD32(ctx->r4, 0X558);
    func_0042FFF0(rdram, ctx);
        goto after_0;
    // 0x0042FF24: addiu       $a0, $a0, 0x558
    ctx->r4 = ADD32(ctx->r4, 0X558);
    after_0:
    // 0x0042FF28: lw          $v0, 0x8($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X8);
    // 0x0042FF2C: slt         $v0, $s0, $v0
    ctx->r2 = SIGNED(ctx->r16) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x0042FF30: bne         $v0, $zero, L_0042FF14
    if (ctx->r2 != 0) {
        // 0x0042FF34: addiu       $s1, $s1, 0xEC0
        ctx->r17 = ADD32(ctx->r17, 0XEC0);
            goto L_0042FF14;
    }
    // 0x0042FF34: addiu       $s1, $s1, 0xEC0
    ctx->r17 = ADD32(ctx->r17, 0XEC0);
    // 0x0042FF38: jal         0x0042FFF0
    // 0x0042FF3C: addiu       $a0, $s2, 0x598
    ctx->r4 = ADD32(ctx->r18, 0X598);
    func_0042FFF0(rdram, ctx);
        goto after_1;
    // 0x0042FF3C: addiu       $a0, $s2, 0x598
    ctx->r4 = ADD32(ctx->r18, 0X598);
    after_1:
    // 0x0042FF40: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x0042FF44: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x0042FF48: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x0042FF4C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0042FF50: jr          $ra
    // 0x0042FF54: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x0042FF54: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_00257280(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00257280: sll         $v0, $a1, 2
    ctx->r2 = S32(ctx->r5 << 2);
    // 0x00257284: addu        $v1, $a0, $a1
    ctx->r3 = ADD32(ctx->r4, ctx->r5);
    // 0x00257288: lb          $v1, 0x972($v1)
    ctx->r3 = MEM_B(ctx->r3, 0X972);
    // 0x0025728C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00257290: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x00257294: lw          $a2, -0x9E8($at)
    ctx->r6 = MEM_W(ctx->r1, -0X9E8);
    // 0x00257298: beq         $v1, $zero, L_002572C0
    if (ctx->r3 == 0) {
        // 0x0025729C: nop
    
            goto L_002572C0;
    }
    // 0x0025729C: nop

    // 0x002572A0: lw          $v0, 0x3C8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X3C8);
    // 0x002572A4: andi        $v0, $v0, 0x80
    ctx->r2 = ctx->r2 & 0X80;
    // 0x002572A8: beq         $v0, $zero, L_002572C8
    if (ctx->r2 == 0) {
        // 0x002572AC: nop
    
            goto L_002572C8;
    }
    // 0x002572AC: nop

    // 0x002572B0: lw          $v0, 0x14($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X14);
    // 0x002572B4: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
L_002572B8:
    // 0x002572B8: bne         $v0, $zero, L_002572D4
    if (ctx->r2 != 0) {
        // 0x002572BC: nop
    
            goto L_002572D4;
    }
    // 0x002572BC: nop

L_002572C0:
    // 0x002572C0: jr          $ra
    // 0x002572C4: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x002572C4: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_002572C8:
    // 0x002572C8: lw          $v0, 0x14($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X14);
    // 0x002572CC: j           L_002572B8
    // 0x002572D0: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
        goto L_002572B8;
    // 0x002572D0: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
L_002572D4:
    // 0x002572D4: lh          $v1, 0xC($a2)
    ctx->r3 = MEM_H(ctx->r6, 0XC);
    // 0x002572D8: addu        $v0, $a0, $v1
    ctx->r2 = ADD32(ctx->r4, ctx->r3);
    // 0x002572DC: lb          $v0, 0x972($v0)
    ctx->r2 = MEM_B(ctx->r2, 0X972);
    // 0x002572E0: beq         $v0, $zero, L_002572F0
    if (ctx->r2 == 0) {
        // 0x002572E4: slt         $v1, $a1, $v1
        ctx->r3 = SIGNED(ctx->r5) < SIGNED(ctx->r3) ? 1 : 0;
            goto L_002572F0;
    }
    // 0x002572E4: slt         $v1, $a1, $v1
    ctx->r3 = SIGNED(ctx->r5) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x002572E8: bne         $v1, $zero, L_002572F4
    if (ctx->r3 != 0) {
        // 0x002572EC: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_002572F4;
    }
    // 0x002572EC: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_002572F0:
    // 0x002572F0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_002572F4:
    // 0x002572F4: jr          $ra
    // 0x002572F8: nop

    return;
    // 0x002572F8: nop

;}
RECOMP_FUNC void func_00418DA0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00418DA0: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x00418DA4: lb          $v1, -0x5505($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X5505);
    // 0x00418DA8: sltiu       $v0, $v1, 0x9
    ctx->r2 = ctx->r3 < 0X9 ? 1 : 0;
    // 0x00418DAC: beq         $v0, $zero, L_00418E54
    if (ctx->r2 == 0) {
            // 0x00418DB0: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    entry_00418E54(rdram, ctx);
    return;
    }
    // 0x00418DB0: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x00418DB4: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00418DB8: addu        $at, $at, $v0
    gpr jr_addend_00418DC0 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x00418DBC: lw          $v0, 0xF80($at)
    ctx->r2 = ADD32(ctx->r1, 0XF80);
    // 0x00418DC0: jr          $v0
    // 0x00418DC4: nop

    switch (jr_addend_00418DC0 >> 2) {
        case 0: goto L_00418DC8; break;
        case 1: goto L_00418DD8; break;
        case 2: goto L_00418DE8; break;
        case 3: goto L_00418DF8; break;
        case 4: goto L_00418E08; break;
        case 5: goto L_00418E18; break;
        case 6: goto L_00418E28; break;
        case 7: goto L_00418E38; break;
        case 8: goto L_00418E48; break;
        default: switch_error(__func__, 0x00418DC0, 0x800C0F80);
    }
    // 0x00418DC4: nop

L_00418DC8:
    // 0x00418DC8: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00418DCC: addiu       $v0, $v0, 0x608C
    ctx->r2 = ADD32(ctx->r2, 0X608C);
    // 0x00418DD0: j           L_00418E54
    // 0x00418DD4: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    entry_00418E54(rdram, ctx);
    return;
    // 0x00418DD4: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_00418DD8:
    // 0x00418DD8: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00418DDC: addiu       $v0, $v0, 0x60A4
    ctx->r2 = ADD32(ctx->r2, 0X60A4);
    // 0x00418DE0: j           L_00418E54
    // 0x00418DE4: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    entry_00418E54(rdram, ctx);
    return;
    // 0x00418DE4: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_00418DE8:
    // 0x00418DE8: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00418DEC: addiu       $v0, $v0, 0x60BC
    ctx->r2 = ADD32(ctx->r2, 0X60BC);
    // 0x00418DF0: j           L_00418E54
    // 0x00418DF4: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    entry_00418E54(rdram, ctx);
    return;
    // 0x00418DF4: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_00418DF8:
    // 0x00418DF8: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00418DFC: addiu       $v0, $v0, 0x60D4
    ctx->r2 = ADD32(ctx->r2, 0X60D4);
    // 0x00418E00: j           L_00418E54
    // 0x00418E04: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    entry_00418E54(rdram, ctx);
    return;
    // 0x00418E04: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_00418E08:
    // 0x00418E08: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00418E0C: addiu       $v0, $v0, 0x60EC
    ctx->r2 = ADD32(ctx->r2, 0X60EC);
    // 0x00418E10: j           L_00418E54
    // 0x00418E14: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    entry_00418E54(rdram, ctx);
    return;
    // 0x00418E14: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_00418E18:
    // 0x00418E18: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00418E1C: addiu       $v0, $v0, 0x6104
    ctx->r2 = ADD32(ctx->r2, 0X6104);
    // 0x00418E20: j           L_00418E54
    // 0x00418E24: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    entry_00418E54(rdram, ctx);
    return;
    // 0x00418E24: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_00418E28:
    // 0x00418E28: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00418E2C: addiu       $v0, $v0, 0x611C
    ctx->r2 = ADD32(ctx->r2, 0X611C);
    // 0x00418E30: j           L_00418E54
    // 0x00418E34: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    entry_00418E54(rdram, ctx);
    return;
    // 0x00418E34: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_00418E38:
    // 0x00418E38: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00418E3C: addiu       $v0, $v0, 0x6134
    ctx->r2 = ADD32(ctx->r2, 0X6134);
    // 0x00418E40: j           L_00418E54
    // 0x00418E44: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    entry_00418E54(rdram, ctx);
    return;
    // 0x00418E44: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_00418E48:
    // 0x00418E48: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // turok2: reconnected split function: a stray ELF symbol at 0x00418E4C ended
    // this function early, leaving it without its epilogue. On the
    // hardware execution simply continues into the next instruction.
    func_00418E4C(rdram, ctx);
;}
RECOMP_FUNC void func_002603E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002603E0: lhu         $v0, 0x7E($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X7E);
    // 0x002603E4: andi        $v0, $v0, 0x7C00
    ctx->r2 = ctx->r2 & 0X7C00;
    // 0x002603E8: jr          $ra
    // 0x002603EC: sltu        $v0, $zero, $v0
    ctx->r2 = 0 < ctx->r2 ? 1 : 0;
    return;
    // 0x002603EC: sltu        $v0, $zero, $v0
    ctx->r2 = 0 < ctx->r2 ? 1 : 0;
;}
RECOMP_FUNC void func_002898F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002898F4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x002898F8: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x002898FC: jal         0x00288F60
    // 0x00289900: nop

    func_00288F60(rdram, ctx);
        goto after_0;
    // 0x00289900: nop

    after_0:
    // 0x00289904: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x00289908: jr          $ra
    // 0x0028990C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0028990C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00426D6C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_00426D5C:
    // 0x00426D6C: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x00426D70: lbu         $v1, 0x0($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X0);
    // 0x00426D74: lbu         $v0, 0x0($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X0);
    // 0x00426D78: beq         $v1, $v0, L_00426D5C
    if (ctx->r3 == ctx->r2) {
            // 0x00426D7C: nop

    func_00426D5C(rdram, ctx);
    return;
    }
    // 0x00426D7C: nop

    // 0x00426D80: lbu         $v1, 0x0($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X0);
    // 0x00426D84: jr          $ra
    // 0x00426D88: subu        $v0, $v1, $v0
    ctx->r2 = SUB32(ctx->r3, ctx->r2);
    return;
    // 0x00426D88: subu        $v0, $v1, $v0
    ctx->r2 = SUB32(ctx->r3, ctx->r2);
;}
RECOMP_FUNC void func_00429D1C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_00429D1C:
    // 0x00429D1C: lhu         $a2, 0x5A($s2)
    ctx->r6 = MEM_HU(ctx->r18, 0X5A);
    // 0x00429D20: addiu       $s1, $s1, 0x20
    ctx->r17 = ADD32(ctx->r17, 0X20);
    // 0x00429D24: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x00429D28: lw          $a0, 0x4($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X4);
    // 0x00429D2C: lw          $a1, 0x8($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X8);
    // 0x00429D30: addu        $a2, $a2, $s3
    ctx->r6 = ADD32(ctx->r6, ctx->r19);
    // 0x00429D34: addu        $a2, $a2, $s0
    ctx->r6 = ADD32(ctx->r6, ctx->r16);
    // 0x00429D38: jal         0x00299A40
    // 0x00429D3C: andi        $a2, $a2, 0xFFFF
    ctx->r6 = ctx->r6 & 0XFFFF;
    func_00299A40(rdram, ctx);
        goto after_0;
    // 0x00429D3C: andi        $a2, $a2, 0xFFFF
    ctx->r6 = ctx->r6 & 0XFFFF;
    after_0:
    // 0x00429D40: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x00429D44: slti        $v0, $s0, 0x8
    ctx->r2 = SIGNED(ctx->r16) < 0X8 ? 1 : 0;
    // 0x00429D48: bne         $v0, $zero, L_00429D1C
    if (ctx->r2 != 0) {
        // 0x00429D4C: addu        $a3, $s1, $zero
        ctx->r7 = ADD32(ctx->r17, 0);
            goto L_00429D1C;
    }
    // 0x00429D4C: addu        $a3, $s1, $zero
    ctx->r7 = ADD32(ctx->r17, 0);
    // 0x00429D50: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x00429D54: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x00429D58: lw          $fp, 0x38($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X38);
    // 0x00429D5C: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x00429D60: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x00429D64: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x00429D68: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x00429D6C: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x00429D70: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x00429D74: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x00429D78: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x00429D7C: jr          $ra
    // 0x00429D80: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x00429D80: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_002646E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002646E4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x002646E8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x002646EC: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x002646F0: lui         $a1, 0x2
    ctx->r5 = S32(0X2 << 16);
    // 0x002646F4: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x002646F8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x002646FC: lw          $s0, 0x14($a0)
    ctx->r16 = MEM_W(ctx->r4, 0X14);
    // 0x00264700: addu        $a2, $a0, $zero
    ctx->r6 = ADD32(ctx->r4, 0);
    // 0x00264704: jal         0x0026E110
    // 0x00264708: addiu       $s0, $s0, 0x14
    ctx->r16 = ADD32(ctx->r16, 0X14);
    func_0026E110(rdram, ctx);
        goto after_0;
    // 0x00264708: addiu       $s0, $s0, 0x14
    ctx->r16 = ADD32(ctx->r16, 0X14);
    after_0:
    // 0x0026470C: lw          $v0, 0x24($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X24);
    // 0x00264710: andi        $v0, $v0, 0x80
    ctx->r2 = ctx->r2 & 0X80;
    // 0x00264714: bne         $v0, $zero, L_0026472C
    if (ctx->r2 != 0) {
        // 0x00264718: lui         $v1, 0xEFFF
        ctx->r3 = S32(0XEFFF << 16);
            goto L_0026472C;
    }
    // 0x00264718: lui         $v1, 0xEFFF
    ctx->r3 = S32(0XEFFF << 16);
    // 0x0026471C: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x00264720: ori         $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 | 0XFFFF;
    // 0x00264724: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x00264728: sw          $v0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r2;
L_0026472C:
    // 0x0026472C: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x00264730: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00264734: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00264738: jr          $ra
    // 0x0026473C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x0026473C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_00458DE4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_0041FE4C:
    // 0x00458DE4: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
L_0041FE74:
    // 0x00458DE8: lw          $v0, 0x984($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X984);
L_0041FF3C:
    // 0x00458DEC: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
L_00420098:
    // 0x00458DF0: sw          $s4, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r20;
    // 0x00458DF4: addu        $s4, $a0, $zero
    ctx->r20 = ADD32(ctx->r4, 0);
    // 0x00458DF8: sw          $s2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r18;
    // 0x00458DFC: addu        $s2, $a1, $zero
    ctx->r18 = ADD32(ctx->r5, 0);
    // 0x00458E00: sw          $s5, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r21;
    // 0x00458E04: addu        $s5, $a2, $zero
    ctx->r21 = ADD32(ctx->r6, 0);
    // 0x00458E08: sw          $ra, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r31;
    // 0x00458E0C: sw          $s3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r19;
    // 0x00458E10: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x00458E14: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x00458E18: beq         $v0, $zero, L_00458E4C
    if (ctx->r2 == 0) {
        // 0x00458E1C: sw          $zero, 0x28($sp)
        MEM_W(0X28, ctx->r29) = 0;
            goto L_00458E4C;
    }
    // 0x00458E1C: sw          $zero, 0x28($sp)
    MEM_W(0X28, ctx->r29) = 0;
    // 0x00458E20: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x00458E24: lw          $v0, 0x990($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X990);
    // 0x00458E28: beq         $v0, $zero, L_00458E40
    if (ctx->r2 == 0) {
        // 0x00458E2C: nop
    
            goto L_00458E40;
    }
    // 0x00458E2C: nop

    // 0x00458E30: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x00458E34: lw          $v0, 0x2028($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2028);
    // 0x00458E38: j           L_0041FE4C
    // 0x00458E3C: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    entry_0041FE4C(rdram, ctx);
    return;
    // 0x00458E3C: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
L_00458E40:
    // 0x00458E40: lw          $v0, 0x20($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X20);
    // 0x00458E44: lb          $v0, 0x4($v0)
    ctx->r2 = MEM_B(ctx->r2, 0X4);
    // 0x00458E48: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
L_00458E4C:
    // 0x00458E4C: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x00458E50: lw          $v0, 0x990($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X990);
    // 0x00458E54: beq         $v0, $zero, L_00458E6C
    if (ctx->r2 == 0) {
        // 0x00458E58: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_00458E6C;
    }
    // 0x00458E58: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x00458E5C: lui         $s1, 0x800C
    ctx->r17 = S32(0X800C << 16);
    // 0x00458E60: lw          $s1, 0x2028($s1)
    ctx->r17 = MEM_W(ctx->r17, 0X2028);
    // 0x00458E64: j           L_0041FE74
    // 0x00458E68: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    entry_0041FE74(rdram, ctx);
    return;
    // 0x00458E68: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
L_00458E6C:
    // 0x00458E6C: lw          $s1, 0x28($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X28);
    // 0x00458E70: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x00458E74: jal         0x0041DCB0
    // 0x00458E78: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_0041DCB0(rdram, ctx);
        goto after_0;
    // 0x00458E78: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x00458E7C: bne         $v0, $zero, L_0045907C
    if (ctx->r2 != 0) {
        // 0x00458E80: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_0045907C;
    }
    // 0x00458E80: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00458E84: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x00458E88: lw          $v0, 0x9B4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X9B4);
    // 0x00458E8C: beq         $v0, $zero, L_00458EB8
    if (ctx->r2 == 0) {
        // 0x00458E90: nop
    
            goto L_00458EB8;
    }
    // 0x00458E90: nop

    // 0x00458E94: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x00458E98: lw          $v0, 0x984($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X984);
    // 0x00458E9C: beq         $v0, $zero, L_00458FA4
    if (ctx->r2 == 0) {
        // 0x00458EA0: addu        $a0, $s4, $zero
        ctx->r4 = ADD32(ctx->r20, 0);
            goto L_00458FA4;
    }
    // 0x00458EA0: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    // 0x00458EA4: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x00458EA8: jal         0x0041ED00
    // 0x00458EAC: addu        $a2, $s5, $zero
    ctx->r6 = ADD32(ctx->r21, 0);
    entry_0041ED00(rdram, ctx);
        goto after_1;
    // 0x00458EAC: addu        $a2, $s5, $zero
    ctx->r6 = ADD32(ctx->r21, 0);
    after_1:
    // 0x00458EB0: j           L_00420098
    // 0x00458EB4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    entry_00420098(rdram, ctx);
    return;
    // 0x00458EB4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_00458EB8:
    // 0x00458EB8: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x00458EBC: lw          $v0, 0x984($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X984);
    // 0x00458EC0: beq         $v0, $zero, L_00458FA4
    if (ctx->r2 == 0) {
        // 0x00458EC4: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_00458FA4;
    }
    // 0x00458EC4: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x00458EC8: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x00458ECC: sw          $v0, 0x9C4($at)
    MEM_W(0X9C4, ctx->r1) = ctx->r2;
    // 0x00458ED0: lui         $s3, 0x8013
    ctx->r19 = S32(0X8013 << 16);
    // 0x00458ED4: addiu       $s3, $s3, 0x9C4
    ctx->r19 = ADD32(ctx->r19, 0X9C4);
    // 0x00458ED8: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x00458EDC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
L_00458EE0:
    // 0x00458EE0: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x00458EE4: jal         0x00426898
    // 0x00458EE8: addiu       $a2, $sp, 0x2C
    ctx->r6 = ADD32(ctx->r29, 0X2C);
    entry_00426898(rdram, ctx);
        goto after_2;
    // 0x00458EE8: addiu       $a2, $sp, 0x2C
    ctx->r6 = ADD32(ctx->r29, 0X2C);
    after_2:
    // 0x00458EEC: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x00458EF0: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    // 0x00458EF4: jal         0x00426BA8
    // 0x00458EF8: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    entry_00426BA8(rdram, ctx);
        goto after_3;
    // 0x00458EF8: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_3:
    // 0x00458EFC: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x00458F00: addiu       $a1, $a1, 0x45CC
    ctx->r5 = ADD32(ctx->r5, 0X45CC);
    // 0x00458F04: jal         0x00426C74
    // 0x00458F08: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    func_00426C74(rdram, ctx);
        goto after_4;
    // 0x00458F08: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    after_4:
    // 0x00458F0C: bnel        $v0, $zero, L_00458F2C
    if (ctx->r2 != 0) {
        // 0x00458F10: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_00458F2C;
    }
    goto skip_0;
    // 0x00458F10: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    skip_0:
    // 0x00458F14: beq         $s3, $zero, L_00458F3C
    if (ctx->r19 == 0) {
        // 0x00458F18: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_00458F3C;
    }
    // 0x00458F18: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00458F1C: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x00458F20: sw          $s0, 0x9C4($at)
    MEM_W(0X9C4, ctx->r1) = ctx->r16;
    // 0x00458F24: j           L_0041FF3C
    // 0x00458F28: nop

    entry_0041FF3C(rdram, ctx);
    return;
    // 0x00458F28: nop

L_00458F2C:
    // 0x00458F2C: slti        $v0, $s0, 0x10
    ctx->r2 = SIGNED(ctx->r16) < 0X10 ? 1 : 0;
    // 0x00458F30: bne         $v0, $zero, L_00458EE0
    if (ctx->r2 != 0) {
        // 0x00458F34: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_00458EE0;
    }
    // 0x00458F34: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x00458F38: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_00458F3C:
    // 0x00458F3C: beq         $v0, $zero, L_00458F90
    if (ctx->r2 == 0) {
        // 0x00458F40: addu        $a0, $s4, $zero
        ctx->r4 = ADD32(ctx->r20, 0);
            goto L_00458F90;
    }
    // 0x00458F40: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    // 0x00458F44: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x00458F48: lw          $v0, 0x9C4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X9C4);
    // 0x00458F4C: bltz        $v0, L_00458F90
    if (SIGNED(ctx->r2) < 0) {
        // 0x00458F50: slti        $v0, $v0, 0x10
        ctx->r2 = SIGNED(ctx->r2) < 0X10 ? 1 : 0;
            goto L_00458F90;
    }
    // 0x00458F50: slti        $v0, $v0, 0x10
    ctx->r2 = SIGNED(ctx->r2) < 0X10 ? 1 : 0;
    // 0x00458F54: beq         $v0, $zero, L_00458F94
    if (ctx->r2 == 0) {
        // 0x00458F58: addu        $a1, $s2, $zero
        ctx->r5 = ADD32(ctx->r18, 0);
            goto L_00458F94;
    }
    // 0x00458F58: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x00458F5C: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x00458F60: addiu       $a0, $a0, -0x61D4
    ctx->r4 = ADD32(ctx->r4, -0X61D4);
    // 0x00458F64: lui         $v0, 0x44
    ctx->r2 = S32(0X44 << 16);
    // 0x00458F68: addiu       $v0, $v0, -0x49CC
    ctx->r2 = ADD32(ctx->r2, -0X49CC);
    // 0x00458F6C: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x00458F70: lw          $a2, 0x1C($s2)
    ctx->r6 = MEM_W(ctx->r18, 0X1C);
    // 0x00458F74: lw          $a3, 0x20($s2)
    ctx->r7 = MEM_W(ctx->r18, 0X20);
    // 0x00458F78: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x00458F7C: addiu       $a1, $a1, -0x3ED4
    ctx->r5 = ADD32(ctx->r5, -0X3ED4);
    // 0x00458F80: jal         0x00416644
    // 0x00458F84: nop

    func_00416644(rdram, ctx);
        goto after_5;
    // 0x00458F84: nop

    after_5:
    // 0x00458F88: j           L_00420098
    // 0x00458F8C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    entry_00420098(rdram, ctx);
    return;
    // 0x00458F8C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_00458F90:
    // 0x00458F90: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
L_00458F94:
    // 0x00458F94: jal         0x0041EFE8
    // 0x00458F98: addu        $a2, $s5, $zero
    ctx->r6 = ADD32(ctx->r21, 0);
    entry_0041EFE8(rdram, ctx);
        goto after_6;
    // 0x00458F98: addu        $a2, $s5, $zero
    ctx->r6 = ADD32(ctx->r21, 0);
    after_6:
    // 0x00458F9C: j           L_00420098
    // 0x00458FA0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    entry_00420098(rdram, ctx);
    return;
    // 0x00458FA0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_00458FA4:
    // 0x00458FA4: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x00458FA8: lw          $v0, 0x990($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X990);
    // 0x00458FAC: beq         $v0, $zero, L_00459094
    if (ctx->r2 == 0) {
        // 0x00458FB0: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_00459094;
    }
    // 0x00458FB0: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x00458FB4: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x00458FB8: lw          $v1, 0x2028($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X2028);
    // 0x00458FBC: beq         $v1, $v0, L_00458FD4
    if (ctx->r3 == ctx->r2) {
        // 0x00458FC0: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_00458FD4;
    }
    // 0x00458FC0: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x00458FC4: addiu       $s0, $v1, 0x1
    ctx->r16 = ADD32(ctx->r3, 0X1);
    // 0x00458FC8: slti        $v0, $s0, 0x4
    ctx->r2 = SIGNED(ctx->r16) < 0X4 ? 1 : 0;
    // 0x00458FCC: beql        $v0, $zero, L_00458FD4
    if (ctx->r2 == 0) {
        // 0x00458FD0: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_00458FD4;
    }
    goto skip_1;
    // 0x00458FD0: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    skip_1:
L_00458FD4:
    // 0x00458FD4: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x00458FD8: addiu       $s3, $zero, -0x2
    ctx->r19 = ADD32(0, -0X2);
L_00458FDC:
    // 0x00458FDC: jal         0x004263A0
    // 0x00458FE0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_004263A0(rdram, ctx);
        goto after_7;
    // 0x00458FE0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_7:
    // 0x00458FE4: jal         0x0042647C
    // 0x00458FE8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    entry_0042647C(rdram, ctx);
        goto after_8;
    // 0x00458FE8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_8:
    // 0x00458FEC: bne         $v0, $s3, L_00459014
    if (ctx->r2 != ctx->r19) {
        // 0x00458FF0: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_00459014;
    }
    // 0x00458FF0: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x00458FF4: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x00458FF8: slti        $v0, $s0, 0x4
    ctx->r2 = SIGNED(ctx->r16) < 0X4 ? 1 : 0;
    // 0x00458FFC: beql        $v0, $zero, L_00459004
    if (ctx->r2 == 0) {
        // 0x00459000: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_00459004;
    }
    goto skip_2;
    // 0x00459000: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    skip_2:
L_00459004:
    // 0x00459004: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x00459008: slti        $v0, $s1, 0x4
    ctx->r2 = SIGNED(ctx->r17) < 0X4 ? 1 : 0;
    // 0x0045900C: bne         $v0, $zero, L_00458FDC
    if (ctx->r2 != 0) {
        // 0x00459010: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_00458FDC;
    }
    // 0x00459010: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
L_00459014:
    // 0x00459014: beql        $s1, $v0, L_0045901C
    if (ctx->r17 == ctx->r2) {
        // 0x00459018: addiu       $s0, $zero, -0x1
        ctx->r16 = ADD32(0, -0X1);
            goto L_0045901C;
    }
    goto skip_3;
    // 0x00459018: addiu       $s0, $zero, -0x1
    ctx->r16 = ADD32(0, -0X1);
    skip_3:
L_0045901C:
    // 0x0045901C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00459020: sw          $s0, 0x2028($at)
    MEM_W(0X2028, ctx->r1) = ctx->r16;
    // 0x00459024: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x00459028: bne         $s0, $v0, L_0045904C
    if (ctx->r16 != ctx->r2) {
        // 0x0045902C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_0045904C;
    }
    // 0x0045902C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00459030: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x00459034: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x00459038: sw          $v1, 0x9BC($at)
    MEM_W(0X9BC, ctx->r1) = ctx->r3;
    // 0x0045903C: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x00459040: sw          $v1, -0xEB8($at)
    MEM_W(-0XEB8, ctx->r1) = ctx->r3;
    // 0x00459044: j           L_00420098
    // 0x00459048: nop

    entry_00420098(rdram, ctx);
    return;
    // 0x00459048: nop

L_0045904C:
    // 0x0045904C: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x00459050: lw          $v0, 0x990($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X990);
    // 0x00459054: bne         $v0, $zero, L_00459064
    if (ctx->r2 != 0) {
        // 0x00459058: addu        $a1, $s0, $zero
        ctx->r5 = ADD32(ctx->r16, 0);
            goto L_00459064;
    }
    // 0x00459058: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x0045905C: lw          $v0, 0x20($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X20);
    // 0x00459060: lb          $a1, 0x4($v0)
    ctx->r5 = MEM_B(ctx->r2, 0X4);
L_00459064:
    // 0x00459064: sw          $a1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r5;
    // 0x00459068: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x0045906C: jal         0x0041DCB0
    // 0x00459070: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_0041DCB0(rdram, ctx);
        goto after_9;
    // 0x00459070: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_9:
    // 0x00459074: beq         $v0, $zero, L_0045908C
    if (ctx->r2 == 0) {
        // 0x00459078: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_0045908C;
    }
    // 0x00459078: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_0045907C:
    // 0x0045907C: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x00459080: sw          $v0, 0x9BC($at)
    MEM_W(0X9BC, ctx->r1) = ctx->r2;
    // 0x00459084: j           L_00420098
    // 0x00459088: nop

    entry_00420098(rdram, ctx);
    return;
    // 0x00459088: nop

L_0045908C:
    // 0x0045908C: jal         0x0041D948
    // 0x00459090: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    entry_0041D948(rdram, ctx);
        goto after_10;
    // 0x00459090: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_10:
L_00459094:
    // 0x00459094: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x00459098: lw          $ra, 0x48($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X48);
    // 0x0045909C: lw          $s5, 0x44($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X44);
    // 0x004590A0: lw          $s4, 0x40($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X40);
    // 0x004590A4: lw          $s3, 0x3C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X3C);
    // 0x004590A8: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x004590AC: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x004590B0: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x004590B4: jr          $ra
    // 0x004590B8: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x004590B8: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_0020C890(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0020C890: lwc1        $f0, 0x0($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X0);
    // 0x0020C894: lwc1        $f1, 0x0($a2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r6, 0X0);
    // 0x0020C898: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0020C89C: lwc1        $f4, 0x4($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X4);
    // 0x0020C8A0: lwc1        $f1, 0x10($a2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r6, 0X10);
    // 0x0020C8A4: mul.s       $f4, $f4, $f1
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f4.fl = MUL_S(ctx->f4.fl, ctx->f1.fl);
    // 0x0020C8A8: lwc1        $f3, 0x8($a1)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r5, 0X8);
    // 0x0020C8AC: lwc1        $f1, 0x20($a2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r6, 0X20);
    // 0x0020C8B0: mul.s       $f3, $f3, $f1
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f3.fl = MUL_S(ctx->f3.fl, ctx->f1.fl);
    // 0x0020C8B4: lwc1        $f2, 0xC($a1)
    ctx->f2.u32l = MEM_W(ctx->r5, 0XC);
    // 0x0020C8B8: lwc1        $f1, 0x30($a2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r6, 0X30);
    // 0x0020C8BC: mul.s       $f2, $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f1.fl);
    // 0x0020C8C0: add.s       $f0, $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f4.fl;
    // 0x0020C8C4: add.s       $f0, $f0, $f3
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f3.fl;
    // 0x0020C8C8: add.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f2.fl;
    // 0x0020C8CC: swc1        $f0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f0.u32l;
    // 0x0020C8D0: lwc1        $f0, 0x0($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X0);
    // 0x0020C8D4: lwc1        $f1, 0x4($a2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r6, 0X4);
    // 0x0020C8D8: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0020C8DC: lwc1        $f4, 0x4($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X4);
    // 0x0020C8E0: lwc1        $f1, 0x14($a2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r6, 0X14);
    // 0x0020C8E4: mul.s       $f4, $f4, $f1
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f4.fl = MUL_S(ctx->f4.fl, ctx->f1.fl);
    // 0x0020C8E8: lwc1        $f3, 0x8($a1)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r5, 0X8);
    // 0x0020C8EC: lwc1        $f1, 0x24($a2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r6, 0X24);
    // 0x0020C8F0: mul.s       $f3, $f3, $f1
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f3.fl = MUL_S(ctx->f3.fl, ctx->f1.fl);
    // 0x0020C8F4: lwc1        $f2, 0xC($a1)
    ctx->f2.u32l = MEM_W(ctx->r5, 0XC);
    // 0x0020C8F8: lwc1        $f1, 0x34($a2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r6, 0X34);
    // 0x0020C8FC: mul.s       $f2, $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f1.fl);
    // 0x0020C900: add.s       $f0, $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f4.fl;
    // 0x0020C904: add.s       $f0, $f0, $f3
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f3.fl;
    // 0x0020C908: add.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f2.fl;
    // 0x0020C90C: swc1        $f0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->f0.u32l;
    // 0x0020C910: lwc1        $f0, 0x0($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X0);
    // 0x0020C914: lwc1        $f1, 0x8($a2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r6, 0X8);
    // 0x0020C918: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0020C91C: lwc1        $f4, 0x4($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X4);
    // 0x0020C920: lwc1        $f1, 0x18($a2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r6, 0X18);
    // 0x0020C924: mul.s       $f4, $f4, $f1
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f4.fl = MUL_S(ctx->f4.fl, ctx->f1.fl);
    // 0x0020C928: lwc1        $f3, 0x8($a1)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r5, 0X8);
    // 0x0020C92C: lwc1        $f1, 0x28($a2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r6, 0X28);
    // 0x0020C930: mul.s       $f3, $f3, $f1
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f3.fl = MUL_S(ctx->f3.fl, ctx->f1.fl);
    // 0x0020C934: lwc1        $f2, 0xC($a1)
    ctx->f2.u32l = MEM_W(ctx->r5, 0XC);
    // 0x0020C938: lwc1        $f1, 0x38($a2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r6, 0X38);
    // 0x0020C93C: mul.s       $f2, $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f1.fl);
    // 0x0020C940: add.s       $f0, $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f4.fl;
    // 0x0020C944: add.s       $f0, $f0, $f3
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f3.fl;
    // 0x0020C948: add.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f2.fl;
    // 0x0020C94C: swc1        $f0, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->f0.u32l;
    // 0x0020C950: lwc1        $f0, 0x0($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X0);
    // 0x0020C954: lwc1        $f1, 0xC($a2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r6, 0XC);
    // 0x0020C958: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0020C95C: lwc1        $f4, 0x4($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X4);
    // 0x0020C960: lwc1        $f1, 0x1C($a2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r6, 0X1C);
    // 0x0020C964: mul.s       $f4, $f4, $f1
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f4.fl = MUL_S(ctx->f4.fl, ctx->f1.fl);
    // 0x0020C968: lwc1        $f3, 0x8($a1)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r5, 0X8);
    // 0x0020C96C: lwc1        $f1, 0x2C($a2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r6, 0X2C);
    // 0x0020C970: mul.s       $f3, $f3, $f1
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f3.fl = MUL_S(ctx->f3.fl, ctx->f1.fl);
    // 0x0020C974: lwc1        $f2, 0xC($a1)
    ctx->f2.u32l = MEM_W(ctx->r5, 0XC);
    // 0x0020C978: lwc1        $f1, 0x3C($a2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r6, 0X3C);
    // 0x0020C97C: mul.s       $f2, $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f1.fl);
    // 0x0020C980: add.s       $f0, $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f4.fl;
    // 0x0020C984: add.s       $f0, $f0, $f3
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f3.fl;
    // 0x0020C988: add.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f2.fl;
    // 0x0020C98C: swc1        $f0, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->f0.u32l;
    // 0x0020C990: lwc1        $f0, 0x10($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X10);
    // 0x0020C994: lwc1        $f1, 0x0($a2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r6, 0X0);
    // 0x0020C998: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0020C99C: lwc1        $f4, 0x14($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X14);
    // 0x0020C9A0: lwc1        $f1, 0x10($a2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r6, 0X10);
    // 0x0020C9A4: mul.s       $f4, $f4, $f1
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f4.fl = MUL_S(ctx->f4.fl, ctx->f1.fl);
    // 0x0020C9A8: lwc1        $f3, 0x18($a1)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r5, 0X18);
    // 0x0020C9AC: lwc1        $f1, 0x20($a2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r6, 0X20);
    // 0x0020C9B0: mul.s       $f3, $f3, $f1
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f3.fl = MUL_S(ctx->f3.fl, ctx->f1.fl);
    // 0x0020C9B4: lwc1        $f2, 0x1C($a1)
    ctx->f2.u32l = MEM_W(ctx->r5, 0X1C);
    // 0x0020C9B8: lwc1        $f1, 0x30($a2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r6, 0X30);
    // 0x0020C9BC: mul.s       $f2, $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f1.fl);
    // 0x0020C9C0: add.s       $f0, $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f4.fl;
    // 0x0020C9C4: add.s       $f0, $f0, $f3
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f3.fl;
    // 0x0020C9C8: add.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f2.fl;
    // 0x0020C9CC: swc1        $f0, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->f0.u32l;
    // 0x0020C9D0: lwc1        $f0, 0x10($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X10);
    // 0x0020C9D4: lwc1        $f1, 0x4($a2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r6, 0X4);
    // 0x0020C9D8: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0020C9DC: lwc1        $f4, 0x14($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X14);
    // 0x0020C9E0: lwc1        $f1, 0x14($a2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r6, 0X14);
    // 0x0020C9E4: mul.s       $f4, $f4, $f1
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f4.fl = MUL_S(ctx->f4.fl, ctx->f1.fl);
    // 0x0020C9E8: lwc1        $f3, 0x18($a1)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r5, 0X18);
    // 0x0020C9EC: lwc1        $f1, 0x24($a2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r6, 0X24);
    // 0x0020C9F0: mul.s       $f3, $f3, $f1
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f3.fl = MUL_S(ctx->f3.fl, ctx->f1.fl);
    // 0x0020C9F4: lwc1        $f2, 0x1C($a1)
    ctx->f2.u32l = MEM_W(ctx->r5, 0X1C);
    // 0x0020C9F8: lwc1        $f1, 0x34($a2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r6, 0X34);
    // 0x0020C9FC: mul.s       $f2, $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f1.fl);
    // 0x0020CA00: add.s       $f0, $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f4.fl;
    // 0x0020CA04: add.s       $f0, $f0, $f3
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f3.fl;
    // 0x0020CA08: add.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f2.fl;
    // 0x0020CA0C: swc1        $f0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->f0.u32l;
    // 0x0020CA10: lwc1        $f0, 0x10($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X10);
    // 0x0020CA14: lwc1        $f1, 0x8($a2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r6, 0X8);
    // 0x0020CA18: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0020CA1C: lwc1        $f4, 0x14($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X14);
    // 0x0020CA20: lwc1        $f1, 0x18($a2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r6, 0X18);
    // 0x0020CA24: mul.s       $f4, $f4, $f1
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f4.fl = MUL_S(ctx->f4.fl, ctx->f1.fl);
    // 0x0020CA28: lwc1        $f3, 0x18($a1)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r5, 0X18);
    // 0x0020CA2C: lwc1        $f1, 0x28($a2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r6, 0X28);
    // 0x0020CA30: mul.s       $f3, $f3, $f1
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f3.fl = MUL_S(ctx->f3.fl, ctx->f1.fl);
    // 0x0020CA34: lwc1        $f2, 0x1C($a1)
    ctx->f2.u32l = MEM_W(ctx->r5, 0X1C);
    // 0x0020CA38: lwc1        $f1, 0x38($a2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r6, 0X38);
    // 0x0020CA3C: mul.s       $f2, $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f1.fl);
    // 0x0020CA40: add.s       $f0, $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f4.fl;
    // 0x0020CA44: add.s       $f0, $f0, $f3
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f3.fl;
    // 0x0020CA48: add.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f2.fl;
    // 0x0020CA4C: swc1        $f0, 0x18($a0)
    MEM_W(0X18, ctx->r4) = ctx->f0.u32l;
    // 0x0020CA50: lwc1        $f0, 0x10($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X10);
    // 0x0020CA54: lwc1        $f1, 0xC($a2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r6, 0XC);
    // 0x0020CA58: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0020CA5C: lwc1        $f4, 0x14($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X14);
    // 0x0020CA60: lwc1        $f1, 0x1C($a2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r6, 0X1C);
    // 0x0020CA64: mul.s       $f4, $f4, $f1
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f4.fl = MUL_S(ctx->f4.fl, ctx->f1.fl);
    // 0x0020CA68: lwc1        $f3, 0x18($a1)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r5, 0X18);
    // 0x0020CA6C: lwc1        $f1, 0x2C($a2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r6, 0X2C);
    // 0x0020CA70: mul.s       $f3, $f3, $f1
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f3.fl = MUL_S(ctx->f3.fl, ctx->f1.fl);
    // 0x0020CA74: lwc1        $f2, 0x1C($a1)
    ctx->f2.u32l = MEM_W(ctx->r5, 0X1C);
    // 0x0020CA78: lwc1        $f1, 0x3C($a2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r6, 0X3C);
    // 0x0020CA7C: mul.s       $f2, $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f1.fl);
    // 0x0020CA80: add.s       $f0, $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f4.fl;
    // 0x0020CA84: add.s       $f0, $f0, $f3
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f3.fl;
    // 0x0020CA88: add.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f2.fl;
    // 0x0020CA8C: swc1        $f0, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = ctx->f0.u32l;
    // 0x0020CA90: lwc1        $f0, 0x20($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X20);
    // 0x0020CA94: lwc1        $f1, 0x0($a2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r6, 0X0);
    // 0x0020CA98: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0020CA9C: lwc1        $f4, 0x24($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X24);
    // 0x0020CAA0: lwc1        $f1, 0x10($a2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r6, 0X10);
    // 0x0020CAA4: mul.s       $f4, $f4, $f1
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f4.fl = MUL_S(ctx->f4.fl, ctx->f1.fl);
    // 0x0020CAA8: lwc1        $f3, 0x28($a1)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r5, 0X28);
    // 0x0020CAAC: lwc1        $f1, 0x20($a2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r6, 0X20);
    // 0x0020CAB0: mul.s       $f3, $f3, $f1
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f3.fl = MUL_S(ctx->f3.fl, ctx->f1.fl);
    // 0x0020CAB4: lwc1        $f2, 0x2C($a1)
    ctx->f2.u32l = MEM_W(ctx->r5, 0X2C);
    // 0x0020CAB8: lwc1        $f1, 0x30($a2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r6, 0X30);
    // 0x0020CABC: mul.s       $f2, $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f1.fl);
    // 0x0020CAC0: add.s       $f0, $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f4.fl;
    // 0x0020CAC4: add.s       $f0, $f0, $f3
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f3.fl;
    // 0x0020CAC8: add.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f2.fl;
    // 0x0020CACC: swc1        $f0, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->f0.u32l;
    // 0x0020CAD0: lwc1        $f0, 0x20($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X20);
    // 0x0020CAD4: lwc1        $f1, 0x4($a2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r6, 0X4);
    // 0x0020CAD8: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0020CADC: lwc1        $f4, 0x24($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X24);
    // 0x0020CAE0: lwc1        $f1, 0x14($a2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r6, 0X14);
    // 0x0020CAE4: mul.s       $f4, $f4, $f1
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f4.fl = MUL_S(ctx->f4.fl, ctx->f1.fl);
    // 0x0020CAE8: lwc1        $f3, 0x28($a1)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r5, 0X28);
    // 0x0020CAEC: lwc1        $f1, 0x24($a2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r6, 0X24);
    // 0x0020CAF0: mul.s       $f3, $f3, $f1
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f3.fl = MUL_S(ctx->f3.fl, ctx->f1.fl);
    // 0x0020CAF4: lwc1        $f2, 0x2C($a1)
    ctx->f2.u32l = MEM_W(ctx->r5, 0X2C);
    // 0x0020CAF8: lwc1        $f1, 0x34($a2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r6, 0X34);
    // 0x0020CAFC: mul.s       $f2, $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f1.fl);
    // 0x0020CB00: add.s       $f0, $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f4.fl;
    // 0x0020CB04: add.s       $f0, $f0, $f3
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f3.fl;
    // 0x0020CB08: add.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f2.fl;
    // 0x0020CB0C: swc1        $f0, 0x24($a0)
    MEM_W(0X24, ctx->r4) = ctx->f0.u32l;
    // 0x0020CB10: lwc1        $f0, 0x20($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X20);
    // 0x0020CB14: lwc1        $f1, 0x8($a2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r6, 0X8);
    // 0x0020CB18: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0020CB1C: lwc1        $f4, 0x24($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X24);
    // 0x0020CB20: lwc1        $f1, 0x18($a2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r6, 0X18);
    // 0x0020CB24: mul.s       $f4, $f4, $f1
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f4.fl = MUL_S(ctx->f4.fl, ctx->f1.fl);
    // 0x0020CB28: lwc1        $f3, 0x28($a1)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r5, 0X28);
    // 0x0020CB2C: lwc1        $f1, 0x28($a2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r6, 0X28);
    // 0x0020CB30: mul.s       $f3, $f3, $f1
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f3.fl = MUL_S(ctx->f3.fl, ctx->f1.fl);
    // 0x0020CB34: lwc1        $f2, 0x2C($a1)
    ctx->f2.u32l = MEM_W(ctx->r5, 0X2C);
    // 0x0020CB38: lwc1        $f1, 0x38($a2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r6, 0X38);
    // 0x0020CB3C: mul.s       $f2, $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f1.fl);
    // 0x0020CB40: add.s       $f0, $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f4.fl;
    // 0x0020CB44: add.s       $f0, $f0, $f3
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f3.fl;
    // 0x0020CB48: add.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f2.fl;
    // 0x0020CB4C: swc1        $f0, 0x28($a0)
    MEM_W(0X28, ctx->r4) = ctx->f0.u32l;
    // 0x0020CB50: lwc1        $f0, 0x20($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X20);
    // 0x0020CB54: lwc1        $f1, 0xC($a2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r6, 0XC);
    // 0x0020CB58: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0020CB5C: lwc1        $f4, 0x24($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X24);
    // 0x0020CB60: lwc1        $f1, 0x1C($a2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r6, 0X1C);
    // 0x0020CB64: mul.s       $f4, $f4, $f1
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f4.fl = MUL_S(ctx->f4.fl, ctx->f1.fl);
    // 0x0020CB68: lwc1        $f3, 0x28($a1)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r5, 0X28);
    // 0x0020CB6C: lwc1        $f1, 0x2C($a2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r6, 0X2C);
    // 0x0020CB70: mul.s       $f3, $f3, $f1
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f3.fl = MUL_S(ctx->f3.fl, ctx->f1.fl);
    // 0x0020CB74: lwc1        $f2, 0x2C($a1)
    ctx->f2.u32l = MEM_W(ctx->r5, 0X2C);
    // 0x0020CB78: lwc1        $f1, 0x3C($a2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r6, 0X3C);
    // 0x0020CB7C: mul.s       $f2, $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f1.fl);
    // 0x0020CB80: add.s       $f0, $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f4.fl;
    // 0x0020CB84: add.s       $f0, $f0, $f3
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f3.fl;
    // 0x0020CB88: add.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f2.fl;
    // 0x0020CB8C: swc1        $f0, 0x2C($a0)
    MEM_W(0X2C, ctx->r4) = ctx->f0.u32l;
    // 0x0020CB90: lwc1        $f0, 0x30($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X30);
    // 0x0020CB94: lwc1        $f1, 0x0($a2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r6, 0X0);
    // 0x0020CB98: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0020CB9C: lwc1        $f4, 0x34($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X34);
    // 0x0020CBA0: lwc1        $f1, 0x10($a2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r6, 0X10);
    // 0x0020CBA4: mul.s       $f4, $f4, $f1
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f4.fl = MUL_S(ctx->f4.fl, ctx->f1.fl);
    // 0x0020CBA8: lwc1        $f3, 0x38($a1)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r5, 0X38);
    // 0x0020CBAC: lwc1        $f1, 0x20($a2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r6, 0X20);
    // 0x0020CBB0: mul.s       $f3, $f3, $f1
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f3.fl = MUL_S(ctx->f3.fl, ctx->f1.fl);
    // 0x0020CBB4: lwc1        $f2, 0x3C($a1)
    ctx->f2.u32l = MEM_W(ctx->r5, 0X3C);
    // 0x0020CBB8: lwc1        $f1, 0x30($a2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r6, 0X30);
    // 0x0020CBBC: mul.s       $f2, $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f1.fl);
    // 0x0020CBC0: add.s       $f0, $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f4.fl;
    // 0x0020CBC4: add.s       $f0, $f0, $f3
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f3.fl;
    // 0x0020CBC8: add.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f2.fl;
    // 0x0020CBCC: swc1        $f0, 0x30($a0)
    MEM_W(0X30, ctx->r4) = ctx->f0.u32l;
    // 0x0020CBD0: lwc1        $f0, 0x30($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X30);
    // 0x0020CBD4: lwc1        $f1, 0x4($a2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r6, 0X4);
    // 0x0020CBD8: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0020CBDC: lwc1        $f4, 0x34($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X34);
    // 0x0020CBE0: lwc1        $f1, 0x14($a2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r6, 0X14);
    // 0x0020CBE4: mul.s       $f4, $f4, $f1
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f4.fl = MUL_S(ctx->f4.fl, ctx->f1.fl);
    // 0x0020CBE8: lwc1        $f3, 0x38($a1)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r5, 0X38);
    // 0x0020CBEC: lwc1        $f1, 0x24($a2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r6, 0X24);
    // 0x0020CBF0: mul.s       $f3, $f3, $f1
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f3.fl = MUL_S(ctx->f3.fl, ctx->f1.fl);
    // 0x0020CBF4: lwc1        $f2, 0x3C($a1)
    ctx->f2.u32l = MEM_W(ctx->r5, 0X3C);
    // 0x0020CBF8: lwc1        $f1, 0x34($a2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r6, 0X34);
    // 0x0020CBFC: mul.s       $f2, $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f1.fl);
    // 0x0020CC00: add.s       $f0, $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f4.fl;
    // 0x0020CC04: add.s       $f0, $f0, $f3
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f3.fl;
    // 0x0020CC08: add.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f2.fl;
    // 0x0020CC0C: swc1        $f0, 0x34($a0)
    MEM_W(0X34, ctx->r4) = ctx->f0.u32l;
    // 0x0020CC10: lwc1        $f0, 0x30($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X30);
    // 0x0020CC14: lwc1        $f1, 0x8($a2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r6, 0X8);
    // 0x0020CC18: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0020CC1C: lwc1        $f4, 0x34($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X34);
    // 0x0020CC20: lwc1        $f1, 0x18($a2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r6, 0X18);
    // 0x0020CC24: mul.s       $f4, $f4, $f1
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f4.fl = MUL_S(ctx->f4.fl, ctx->f1.fl);
    // 0x0020CC28: lwc1        $f3, 0x38($a1)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r5, 0X38);
    // 0x0020CC2C: lwc1        $f1, 0x28($a2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r6, 0X28);
    // 0x0020CC30: mul.s       $f3, $f3, $f1
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f3.fl = MUL_S(ctx->f3.fl, ctx->f1.fl);
    // 0x0020CC34: lwc1        $f2, 0x3C($a1)
    ctx->f2.u32l = MEM_W(ctx->r5, 0X3C);
    // 0x0020CC38: lwc1        $f1, 0x38($a2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r6, 0X38);
    // 0x0020CC3C: mul.s       $f2, $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f1.fl);
    // 0x0020CC40: add.s       $f0, $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f4.fl;
    // 0x0020CC44: add.s       $f0, $f0, $f3
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f3.fl;
    // 0x0020CC48: add.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f2.fl;
    // 0x0020CC4C: swc1        $f0, 0x38($a0)
    MEM_W(0X38, ctx->r4) = ctx->f0.u32l;
    // 0x0020CC50: lwc1        $f0, 0x30($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X30);
    // 0x0020CC54: lwc1        $f1, 0xC($a2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r6, 0XC);
    // 0x0020CC58: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0020CC5C: lwc1        $f4, 0x34($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X34);
    // 0x0020CC60: lwc1        $f1, 0x1C($a2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r6, 0X1C);
    // 0x0020CC64: mul.s       $f4, $f4, $f1
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f4.fl = MUL_S(ctx->f4.fl, ctx->f1.fl);
    // 0x0020CC68: lwc1        $f3, 0x38($a1)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r5, 0X38);
    // 0x0020CC6C: lwc1        $f1, 0x2C($a2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r6, 0X2C);
    // 0x0020CC70: mul.s       $f3, $f3, $f1
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f3.fl = MUL_S(ctx->f3.fl, ctx->f1.fl);
    // 0x0020CC74: lwc1        $f2, 0x3C($a1)
    ctx->f2.u32l = MEM_W(ctx->r5, 0X3C);
    // 0x0020CC78: lwc1        $f1, 0x3C($a2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r6, 0X3C);
    // 0x0020CC7C: mul.s       $f2, $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f1.fl);
    // 0x0020CC80: add.s       $f0, $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f4.fl;
    // 0x0020CC84: add.s       $f0, $f0, $f3
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f3.fl;
    // 0x0020CC88: add.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f2.fl;
    // 0x0020CC8C: jr          $ra
    // 0x0020CC90: swc1        $f0, 0x3C($a0)
    MEM_W(0X3C, ctx->r4) = ctx->f0.u32l;
    return;
    // 0x0020CC90: swc1        $f0, 0x3C($a0)
    MEM_W(0X3C, ctx->r4) = ctx->f0.u32l;
;}
RECOMP_FUNC void func_00278278(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00278278: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0027827C: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x00278280: jal         0x0027B4EC
    // 0x00278284: nop

    func_0027B4EC(rdram, ctx);
        goto after_0;
    // 0x00278284: nop

    after_0:
    // 0x00278288: addu        $t4, $v0, $zero
    ctx->r12 = ADD32(ctx->r2, 0);
    // 0x0027828C: beq         $t4, $zero, L_00278360
    if (ctx->r12 == 0) {
        // 0x00278290: lui         $a3, 0xF590
        ctx->r7 = S32(0XF590 << 16);
            goto L_00278360;
    }
    // 0x00278290: lui         $a3, 0xF590
    ctx->r7 = S32(0XF590 << 16);
    // 0x00278294: ori         $a3, $a3, 0x100
    ctx->r7 = ctx->r7 | 0X100;
    // 0x00278298: lui         $a2, 0x701
    ctx->r6 = S32(0X701 << 16);
    // 0x0027829C: ori         $a2, $a2, 0x40
    ctx->r6 = ctx->r6 | 0X40;
    // 0x002782A0: lui         $t0, 0x703
    ctx->r8 = S32(0X703 << 16);
    // 0x002782A4: ori         $t0, $t0, 0xF800
    ctx->r8 = ctx->r8 | 0XF800;
    // 0x002782A8: lui         $t2, 0xF580
    ctx->r10 = S32(0XF580 << 16);
    // 0x002782AC: ori         $t2, $t2, 0x300
    ctx->r10 = ctx->r10 | 0X300;
    // 0x002782B0: lui         $t1, 0x1
    ctx->r9 = S32(0X1 << 16);
    // 0x002782B4: ori         $t1, $t1, 0x40
    ctx->r9 = ctx->r9 | 0X40;
    // 0x002782B8: lui         $t3, 0x3
    ctx->r11 = S32(0X3 << 16);
    // 0x002782BC: ori         $t3, $t3, 0xC03C
    ctx->r11 = ctx->r11 | 0XC03C;
    // 0x002782C0: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x002782C4: addiu       $a0, $a0, -0x71DC
    ctx->r4 = ADD32(ctx->r4, -0X71DC);
    // 0x002782C8: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x002782CC: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
    // 0x002782D0: lui         $at, 0x800F
    ctx->r1 = S32(0X800F << 16);
    // 0x002782D4: sw          $v1, 0x56A8($at)
    MEM_W(0X56A8, ctx->r1) = ctx->r3;
    // 0x002782D8: lui         $v1, 0xFD90
    ctx->r3 = S32(0XFD90 << 16);
    // 0x002782DC: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x002782E0: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x002782E4: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
    // 0x002782E8: sw          $v1, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r3;
    // 0x002782EC: sw          $t4, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r12;
    // 0x002782F0: addiu       $a1, $v0, 0x8
    ctx->r5 = ADD32(ctx->r2, 0X8);
    // 0x002782F4: sw          $a1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r5;
    // 0x002782F8: sw          $a2, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r6;
    // 0x002782FC: addiu       $a2, $v0, 0x10
    ctx->r6 = ADD32(ctx->r2, 0X10);
    // 0x00278300: lui         $v1, 0xE600
    ctx->r3 = S32(0XE600 << 16);
    // 0x00278304: sw          $a3, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r7;
    // 0x00278308: addiu       $a3, $v0, 0x18
    ctx->r7 = ADD32(ctx->r2, 0X18);
    // 0x0027830C: sw          $a2, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r6;
    // 0x00278310: sw          $v1, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r3;
    // 0x00278314: lui         $v1, 0xF300
    ctx->r3 = S32(0XF300 << 16);
    // 0x00278318: sw          $zero, 0x4($a1)
    MEM_W(0X4, ctx->r5) = 0;
    // 0x0027831C: addiu       $a1, $v0, 0x20
    ctx->r5 = ADD32(ctx->r2, 0X20);
    // 0x00278320: sw          $a3, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r7;
    // 0x00278324: sw          $v1, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r3;
    // 0x00278328: lui         $v1, 0xE700
    ctx->r3 = S32(0XE700 << 16);
    // 0x0027832C: sw          $t0, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r8;
    // 0x00278330: addiu       $a2, $v0, 0x28
    ctx->r6 = ADD32(ctx->r2, 0X28);
    // 0x00278334: sw          $a1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r5;
    // 0x00278338: sw          $v1, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->r3;
    // 0x0027833C: addiu       $v1, $v0, 0x30
    ctx->r3 = ADD32(ctx->r2, 0X30);
    // 0x00278340: sw          $zero, 0x4($a3)
    MEM_W(0X4, ctx->r7) = 0;
    // 0x00278344: sw          $a2, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r6;
    // 0x00278348: sw          $t2, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->r10;
    // 0x0027834C: sw          $t1, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r9;
    // 0x00278350: sw          $v1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r3;
    // 0x00278354: lui         $v1, 0xF200
    ctx->r3 = S32(0XF200 << 16);
    // 0x00278358: sw          $v1, 0x28($v0)
    MEM_W(0X28, ctx->r2) = ctx->r3;
    // 0x0027835C: sw          $t3, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r11;
L_00278360:
    // 0x00278360: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x00278364: jr          $ra
    // 0x00278368: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00278368: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0041FB50(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041FB50: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x0041FB54: sw          $s2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r18;
    // 0x0041FB58: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x0041FB5C: addu        $a0, $a1, $zero
    ctx->r4 = ADD32(ctx->r5, 0);
    // 0x0041FB60: sw          $s1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r17;
    // 0x0041FB64: addiu       $s1, $zero, 0x20
    ctx->r17 = ADD32(0, 0X20);
    // 0x0041FB68: sw          $ra, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r31;
    // 0x0041FB6C: sw          $s0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r16;
    // 0x0041FB70: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
    // 0x0041FB74: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x0041FB78: lw          $v1, 0x9BC($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X9BC);
    // 0x0041FB7C: addiu       $a1, $v0, -0x3
    ctx->r5 = ADD32(ctx->r2, -0X3);
    // 0x0041FB80: bne         $v1, $zero, L_0041FCDC
    if (ctx->r3 != 0) {
        // 0x0041FB84: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_0041FCDC;
    }
    // 0x0041FB84: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x0041FB88: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x0041FB8C: lw          $v0, 0x990($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X990);
    // 0x0041FB90: beq         $v0, $zero, L_0041FBA8
    if (ctx->r2 == 0) {
        // 0x0041FB94: addiu       $a2, $sp, 0x48
        ctx->r6 = ADD32(ctx->r29, 0X48);
            goto L_0041FBA8;
    }
    // 0x0041FB94: addiu       $a2, $sp, 0x48
    ctx->r6 = ADD32(ctx->r29, 0X48);
    // 0x0041FB98: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x0041FB9C: lw          $a0, 0x2028($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X2028);
    // 0x0041FBA0: j           L_0041FBB4
    // 0x0041FBA4: addiu       $v0, $sp, 0x30
    ctx->r2 = ADD32(ctx->r29, 0X30);
        goto L_0041FBB4;
    // 0x0041FBA4: addiu       $v0, $sp, 0x30
    ctx->r2 = ADD32(ctx->r29, 0X30);
L_0041FBA8:
    // 0x0041FBA8: lw          $v0, 0x20($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X20);
    // 0x0041FBAC: lb          $a0, 0x4($v0)
    ctx->r4 = MEM_B(ctx->r2, 0X4);
    // 0x0041FBB0: addiu       $v0, $sp, 0x30
    ctx->r2 = ADD32(ctx->r29, 0X30);
L_0041FBB4:
    // 0x0041FBB4: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x0041FBB8: addiu       $v0, $sp, 0x4C
    ctx->r2 = ADD32(ctx->r29, 0X4C);
    // 0x0041FBBC: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x0041FBC0: addiu       $v0, $sp, 0x38
    ctx->r2 = ADD32(ctx->r29, 0X38);
    // 0x0041FBC4: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x0041FBC8: addiu       $v0, $sp, 0x40
    ctx->r2 = ADD32(ctx->r29, 0X40);
    // 0x0041FBCC: addiu       $a3, $sp, 0x20
    ctx->r7 = ADD32(ctx->r29, 0X20);
    // 0x0041FBD0: jal         0x00425E74
    // 0x0041FBD4: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    func_00425E74(rdram, ctx);
        goto after_0;
    // 0x0041FBD4: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    after_0:
    // 0x0041FBD8: lw          $v1, 0x48($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X48);
    // 0x0041FBDC: beq         $v1, $zero, L_0041FC14
    if (ctx->r3 == 0) {
        // 0x0041FBE0: addiu       $a0, $sp, 0x20
        ctx->r4 = ADD32(ctx->r29, 0X20);
            goto L_0041FC14;
    }
    // 0x0041FBE0: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    // 0x0041FBE4: bne         $v0, $zero, L_0041FC14
    if (ctx->r2 != 0) {
        // 0x0041FBE8: nop
    
            goto L_0041FC14;
    }
    // 0x0041FBE8: nop

    // 0x0041FBEC: jal         0x00426E3C
    // 0x0041FBF0: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    func_00426E3C(rdram, ctx);
        goto after_1;
    // 0x0041FBF0: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    after_1:
    // 0x0041FBF4: beq         $v0, $zero, L_0041FC34
    if (ctx->r2 == 0) {
        // 0x0041FBF8: nop
    
            goto L_0041FC34;
    }
    // 0x0041FBF8: nop

    // 0x0041FBFC: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x0041FC00: addiu       $a1, $a1, 0x48D4
    ctx->r5 = ADD32(ctx->r5, 0X48D4);
    // 0x0041FC04: jal         0x00426E04
    // 0x0041FC08: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    func_00426E04(rdram, ctx);
        goto after_2;
    // 0x0041FC08: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    after_2:
    // 0x0041FC0C: j           L_0041FC34
    // 0x0041FC10: nop

        goto L_0041FC34;
    // 0x0041FC10: nop

L_0041FC14:
    // 0x0041FC14: lui         $s0, 0x800B
    ctx->r16 = S32(0X800B << 16);
    // 0x0041FC18: addiu       $s0, $s0, 0x48E0
    ctx->r16 = ADD32(ctx->r16, 0X48E0);
    // 0x0041FC1C: jal         0x00426E04
    // 0x0041FC20: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_00426E04(rdram, ctx);
        goto after_3;
    // 0x0041FC20: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_3:
    // 0x0041FC24: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    // 0x0041FC28: jal         0x00426E04
    // 0x0041FC2C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_00426E04(rdram, ctx);
        goto after_4;
    // 0x0041FC2C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_4:
    // 0x0041FC30: sw          $zero, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = 0;
L_0041FC34:
    // 0x0041FC34: lw          $a0, 0x14($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X14);
    // 0x0041FC38: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x0041FC3C: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
    // 0x0041FC40: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    // 0x0041FC44: addiu       $a0, $a0, 0x3
    ctx->r4 = ADD32(ctx->r4, 0X3);
L_0041FC48:
    // 0x0041FC48: beq         $a1, $zero, L_0041FC54
    if (ctx->r5 == 0) {
        // 0x0041FC4C: addu        $v0, $a2, $v1
        ctx->r2 = ADD32(ctx->r6, ctx->r3);
            goto L_0041FC54;
    }
    // 0x0041FC4C: addu        $v0, $a2, $v1
    ctx->r2 = ADD32(ctx->r6, ctx->r3);
    // 0x0041FC50: lbu         $s1, 0x0($v0)
    ctx->r17 = MEM_BU(ctx->r2, 0X0);
L_0041FC54:
    // 0x0041FC54: bnel        $s1, $zero, L_0041FC68
    if (ctx->r17 != 0) {
        // 0x0041FC58: sb          $s1, 0x0($a0)
        MEM_B(0X0, ctx->r4) = ctx->r17;
            goto L_0041FC68;
    }
    goto skip_0;
    // 0x0041FC58: sb          $s1, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r17;
    skip_0:
    // 0x0041FC5C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x0041FC60: addiu       $s1, $zero, 0x20
    ctx->r17 = ADD32(0, 0X20);
    // 0x0041FC64: sb          $s1, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r17;
L_0041FC68:
    // 0x0041FC68: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x0041FC6C: slti        $v0, $v1, 0x10
    ctx->r2 = SIGNED(ctx->r3) < 0X10 ? 1 : 0;
    // 0x0041FC70: bne         $v0, $zero, L_0041FC48
    if (ctx->r2 != 0) {
        // 0x0041FC74: addiu       $a0, $a0, 0x1
        ctx->r4 = ADD32(ctx->r4, 0X1);
            goto L_0041FC48;
    }
    // 0x0041FC74: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x0041FC78: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x0041FC7C: addu        $a0, $a0, $a1
    ctx->r4 = ADD32(ctx->r4, ctx->r5);
    // 0x0041FC80: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
    // 0x0041FC84: addiu       $a2, $sp, 0x30
    ctx->r6 = ADD32(ctx->r29, 0X30);
L_0041FC88:
    // 0x0041FC88: beq         $a1, $zero, L_0041FC94
    if (ctx->r5 == 0) {
        // 0x0041FC8C: addu        $v0, $a2, $v1
        ctx->r2 = ADD32(ctx->r6, ctx->r3);
            goto L_0041FC94;
    }
    // 0x0041FC8C: addu        $v0, $a2, $v1
    ctx->r2 = ADD32(ctx->r6, ctx->r3);
    // 0x0041FC90: lbu         $s1, 0x0($v0)
    ctx->r17 = MEM_BU(ctx->r2, 0X0);
L_0041FC94:
    // 0x0041FC94: bnel        $s1, $zero, L_0041FCA8
    if (ctx->r17 != 0) {
        // 0x0041FC98: sb          $s1, 0x0($a0)
        MEM_B(0X0, ctx->r4) = ctx->r17;
            goto L_0041FCA8;
    }
    goto skip_1;
    // 0x0041FC98: sb          $s1, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r17;
    skip_1:
    // 0x0041FC9C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x0041FCA0: addiu       $s1, $zero, 0x20
    ctx->r17 = ADD32(0, 0X20);
    // 0x0041FCA4: sb          $s1, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r17;
L_0041FCA8:
    // 0x0041FCA8: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x0041FCAC: slti        $v0, $v1, 0x4
    ctx->r2 = SIGNED(ctx->r3) < 0X4 ? 1 : 0;
    // 0x0041FCB0: bne         $v0, $zero, L_0041FC88
    if (ctx->r2 != 0) {
        // 0x0041FCB4: addiu       $a0, $a0, 0x1
        ctx->r4 = ADD32(ctx->r4, 0X1);
            goto L_0041FC88;
    }
    // 0x0041FCB4: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x0041FCB8: lbu         $v0, 0x0($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X0);
    // 0x0041FCBC: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
    // 0x0041FCC0: sb          $v0, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r2;
    // 0x0041FCC4: lw          $a2, 0x4C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X4C);
    // 0x0041FCC8: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x0041FCCC: addiu       $a1, $a1, 0x1404
    ctx->r5 = ADD32(ctx->r5, 0X1404);
    // 0x0041FCD0: jal         0x0029E3E0
    // 0x0041FCD4: nop

    func_0029E3E0(rdram, ctx);
        goto after_5;
    // 0x0041FCD4: nop

    after_5:
    // 0x0041FCD8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_0041FCDC:
    // 0x0041FCDC: lw          $ra, 0x5C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X5C);
    // 0x0041FCE0: lw          $s2, 0x58($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X58);
    // 0x0041FCE4: lw          $s1, 0x54($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X54);
    // 0x0041FCE8: lw          $s0, 0x50($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X50);
    // 0x0041FCEC: jr          $ra
    // 0x0041FCF0: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    return;
    // 0x0041FCF0: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
;}
RECOMP_FUNC void func_004525C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004525C4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x004525C8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x004525CC: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x004525D0: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x004525D4: addiu       $a0, $a0, 0x6CB0
    ctx->r4 = ADD32(ctx->r4, 0X6CB0);
    // 0x004525D8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x004525DC: jal         0x00288C5C
    // 0x004525E0: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    func_00288C5C(rdram, ctx);
        goto after_0;
    // 0x004525E0: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_0:
    // 0x004525E4: lw          $v0, 0x20($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X20);
    // 0x004525E8: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x004525EC: sw          $zero, 0x8F8($at)
    MEM_W(0X8F8, ctx->r1) = 0;
    // 0x004525F0: lb          $a0, 0x4($v0)
    ctx->r4 = MEM_B(ctx->r2, 0X4);
    // 0x004525F4: jal         0x00285A80
    // 0x004525F8: nop

    func_00285A80(rdram, ctx);
        goto after_1;
    // 0x004525F8: nop

    after_1:
    // 0x004525FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x00452600: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00452604: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00452608: jr          $ra
    // 0x0045260C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0045260C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00296EC8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00296EC8: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x00296ECC: sw          $fp, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r30;
    // 0x00296ED0: addu        $fp, $a0, $zero
    ctx->r30 = ADD32(ctx->r4, 0);
    // 0x00296ED4: sw          $s5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r21;
    // 0x00296ED8: lw          $s5, 0x48($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X48);
    // 0x00296EDC: addu        $a0, $a1, $zero
    ctx->r4 = ADD32(ctx->r5, 0);
    // 0x00296EE0: sw          $s7, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r23;
    // 0x00296EE4: addu        $s7, $a2, $zero
    ctx->r23 = ADD32(ctx->r6, 0);
    // 0x00296EE8: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x00296EEC: sw          $s6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r22;
    // 0x00296EF0: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x00296EF4: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x00296EF8: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x00296EFC: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00296F00: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00296F04: lw          $v1, 0x1C($fp)
    ctx->r3 = MEM_W(ctx->r30, 0X1C);
    // 0x00296F08: lw          $v0, 0x14($fp)
    ctx->r2 = MEM_W(ctx->r30, 0X14);
    // 0x00296F0C: sll         $v1, $v1, 1
    ctx->r3 = S32(ctx->r3 << 1);
    // 0x00296F10: addu        $a1, $v0, $v1
    ctx->r5 = ADD32(ctx->r2, ctx->r3);
    // 0x00296F14: sltu        $v0, $a0, $v0
    ctx->r2 = ctx->r4 < ctx->r2 ? 1 : 0;
    // 0x00296F18: beq         $v0, $zero, L_00296F24
    if (ctx->r2 == 0) {
        // 0x00296F1C: addu        $a2, $s5, $zero
        ctx->r6 = ADD32(ctx->r21, 0);
            goto L_00296F24;
    }
    // 0x00296F1C: addu        $a2, $s5, $zero
    ctx->r6 = ADD32(ctx->r21, 0);
    // 0x00296F20: addu        $a0, $a0, $v1
    ctx->r4 = ADD32(ctx->r4, ctx->r3);
L_00296F24:
    // 0x00296F24: sll         $s6, $a3, 1
    ctx->r22 = S32(ctx->r7 << 1);
    // 0x00296F28: addu        $s0, $a0, $s6
    ctx->r16 = ADD32(ctx->r4, ctx->r22);
    // 0x00296F2C: sltu        $v0, $a1, $s0
    ctx->r2 = ctx->r5 < ctx->r16 ? 1 : 0;
    // 0x00296F30: beq         $v0, $zero, L_00296FD0
    if (ctx->r2 == 0) {
        // 0x00296F34: lui         $s2, 0x800
        ctx->r18 = S32(0X800 << 16);
            goto L_00296FD0;
    }
    // 0x00296F34: lui         $s2, 0x800
    ctx->r18 = S32(0X800 << 16);
    // 0x00296F38: addiu       $s5, $s5, 0x8
    ctx->r21 = ADD32(ctx->r21, 0X8);
    // 0x00296F3C: addu        $s4, $s5, $zero
    ctx->r20 = ADD32(ctx->r21, 0);
    // 0x00296F40: addiu       $s5, $s5, 0x8
    ctx->r21 = ADD32(ctx->r21, 0X8);
    // 0x00296F44: subu        $s1, $a1, $a0
    ctx->r17 = SUB32(ctx->r5, ctx->r4);
    // 0x00296F48: sra         $s1, $s1, 1
    ctx->r17 = S32(SIGNED(ctx->r17) >> 1);
    // 0x00296F4C: sll         $v0, $s7, 16
    ctx->r2 = S32(ctx->r23 << 16);
    // 0x00296F50: sll         $s1, $s1, 1
    ctx->r17 = S32(ctx->r17 << 1);
    // 0x00296F54: andi        $v1, $s1, 0xFFFF
    ctx->r3 = ctx->r17 & 0XFFFF;
    // 0x00296F58: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x00296F5C: lui         $s3, 0x600
    ctx->r19 = S32(0X600 << 16);
    // 0x00296F60: subu        $s0, $s0, $a1
    ctx->r16 = SUB32(ctx->r16, ctx->r5);
    // 0x00296F64: sra         $s0, $s0, 1
    ctx->r16 = S32(SIGNED(ctx->r16) >> 1);
    // 0x00296F68: sw          $s2, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r18;
    // 0x00296F6C: sw          $v0, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r2;
    // 0x00296F70: jal         0x0029BF80
    // 0x00296F74: sw          $s3, 0x0($s4)
    MEM_W(0X0, ctx->r20) = ctx->r19;
    func_0029BF80(rdram, ctx);
        goto after_0;
    // 0x00296F74: sw          $s3, 0x0($s4)
    MEM_W(0X0, ctx->r20) = ctx->r19;
    after_0:
    // 0x00296F78: addu        $v1, $s5, $zero
    ctx->r3 = ADD32(ctx->r21, 0);
    // 0x00296F7C: addiu       $s5, $s5, 0x8
    ctx->r21 = ADD32(ctx->r21, 0X8);
    // 0x00296F80: addu        $s1, $s7, $s1
    ctx->r17 = ADD32(ctx->r23, ctx->r17);
    // 0x00296F84: sll         $s1, $s1, 16
    ctx->r17 = S32(ctx->r17 << 16);
    // 0x00296F88: sll         $s0, $s0, 1
    ctx->r16 = S32(ctx->r16 << 1);
    // 0x00296F8C: andi        $s0, $s0, 0xFFFF
    ctx->r16 = ctx->r16 & 0XFFFF;
    // 0x00296F90: or          $s1, $s1, $s0
    ctx->r17 = ctx->r17 | ctx->r16;
    // 0x00296F94: addu        $s0, $s5, $zero
    ctx->r16 = ADD32(ctx->r21, 0);
    // 0x00296F98: sw          $v0, 0x4($s4)
    MEM_W(0X4, ctx->r20) = ctx->r2;
    // 0x00296F9C: sw          $s2, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r18;
    // 0x00296FA0: sw          $s1, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r17;
    // 0x00296FA4: sw          $s3, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r19;
    // 0x00296FA8: lw          $a0, 0x14($fp)
    ctx->r4 = MEM_W(ctx->r30, 0X14);
    // 0x00296FAC: jal         0x0029BF80
    // 0x00296FB0: addiu       $s5, $s5, 0x8
    ctx->r21 = ADD32(ctx->r21, 0X8);
    func_0029BF80(rdram, ctx);
        goto after_1;
    // 0x00296FB0: addiu       $s5, $s5, 0x8
    ctx->r21 = ADD32(ctx->r21, 0X8);
    after_1:
    // 0x00296FB4: addu        $v1, $s5, $zero
    ctx->r3 = ADD32(ctx->r21, 0);
    // 0x00296FB8: addiu       $s5, $s5, 0x8
    ctx->r21 = ADD32(ctx->r21, 0X8);
    // 0x00296FBC: sw          $v0, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r2;
    // 0x00296FC0: andi        $v0, $s6, 0xFFFF
    ctx->r2 = ctx->r22 & 0XFFFF;
    // 0x00296FC4: sw          $s2, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r18;
    // 0x00296FC8: j           L_00297004
    // 0x00296FCC: sw          $v0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r2;
        goto L_00297004;
    // 0x00296FCC: sw          $v0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r2;
L_00296FD0:
    // 0x00296FD0: addiu       $s5, $s5, 0x8
    ctx->r21 = ADD32(ctx->r21, 0X8);
    // 0x00296FD4: addu        $s0, $s5, $zero
    ctx->r16 = ADD32(ctx->r21, 0);
    // 0x00296FD8: addiu       $s5, $s5, 0x8
    ctx->r21 = ADD32(ctx->r21, 0X8);
    // 0x00296FDC: lui         $v0, 0x800
    ctx->r2 = S32(0X800 << 16);
    // 0x00296FE0: sw          $v0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r2;
    // 0x00296FE4: sll         $v0, $s7, 16
    ctx->r2 = S32(ctx->r23 << 16);
    // 0x00296FE8: andi        $v1, $s6, 0xFFFF
    ctx->r3 = ctx->r22 & 0XFFFF;
    // 0x00296FEC: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x00296FF0: sw          $v0, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r2;
    // 0x00296FF4: lui         $v0, 0x600
    ctx->r2 = S32(0X600 << 16);
    // 0x00296FF8: jal         0x0029BF80
    // 0x00296FFC: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    func_0029BF80(rdram, ctx);
        goto after_2;
    // 0x00296FFC: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    after_2:
    // 0x00297000: sw          $v0, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r2;
L_00297004:
    // 0x00297004: addu        $v0, $s5, $zero
    ctx->r2 = ADD32(ctx->r21, 0);
    // 0x00297008: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x0029700C: lw          $fp, 0x30($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X30);
    // 0x00297010: lw          $s7, 0x2C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X2C);
    // 0x00297014: lw          $s6, 0x28($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X28);
    // 0x00297018: lw          $s5, 0x24($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X24);
    // 0x0029701C: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x00297020: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x00297024: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x00297028: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x0029702C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00297030: jr          $ra
    // 0x00297034: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x00297034: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_0041CF68(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041CF68: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0041CF6C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0041CF70: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x0041CF74: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x0041CF78: lw          $a1, 0x1C($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X1C);
    // 0x0041CF7C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0041CF80: sw          $zero, 0x2020($at)
    MEM_W(0X2020, ctx->r1) = 0;
    // 0x0041CF84: beq         $a1, $zero, L_0041CF9C
    if (ctx->r5 == 0) {
        // 0x0041CF88: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_0041CF9C;
    }
    // 0x0041CF88: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x0041CF8C: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x0041CF90: addiu       $a0, $a0, -0x6790
    ctx->r4 = ADD32(ctx->r4, -0X6790);
    // 0x0041CF94: jal         0x0025340C
    // 0x0041CF98: nop

    func_0025340C(rdram, ctx);
        goto after_0;
    // 0x0041CF98: nop

    after_0:
L_0041CF9C:
    // 0x0041CF9C: jal         0x00285A68
    // 0x0041CFA0: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    func_00285A68(rdram, ctx);
        goto after_1;
    // 0x0041CFA0: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    after_1:
    // 0x0041CFA4: lw          $v1, 0xC($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XC);
    // 0x0041CFA8: lw          $v0, 0x238($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X238);
    // 0x0041CFAC: lui         $a0, 0x180
    ctx->r4 = S32(0X180 << 16);
    // 0x0041CFB0: or          $v0, $v0, $a0
    ctx->r2 = ctx->r2 | ctx->r4;
    // 0x0041CFB4: sw          $v0, 0x238($v1)
    MEM_W(0X238, ctx->r3) = ctx->r2;
    // 0x0041CFB8: lw          $v1, 0xC($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XC);
    // 0x0041CFBC: lw          $v0, 0x260($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X260);
    // 0x0041CFC0: or          $v0, $v0, $a0
    ctx->r2 = ctx->r2 | ctx->r4;
    // 0x0041CFC4: sw          $v0, 0x260($v1)
    MEM_W(0X260, ctx->r3) = ctx->r2;
    // 0x0041CFC8: lw          $v1, 0xC($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XC);
    // 0x0041CFCC: lui         $a0, 0xFE7F
    ctx->r4 = S32(0XFE7F << 16);
    // 0x0041CFD0: lw          $v0, 0x1C0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X1C0);
    // 0x0041CFD4: ori         $a0, $a0, 0xFFFF
    ctx->r4 = ctx->r4 | 0XFFFF;
    // 0x0041CFD8: and         $v0, $v0, $a0
    ctx->r2 = ctx->r2 & ctx->r4;
    // 0x0041CFDC: sw          $v0, 0x1C0($v1)
    MEM_W(0X1C0, ctx->r3) = ctx->r2;
    // 0x0041CFE0: lw          $v1, 0xC($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XC);
    // 0x0041CFE4: lw          $v0, 0x1E8($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X1E8);
    // 0x0041CFE8: and         $v0, $v0, $a0
    ctx->r2 = ctx->r2 & ctx->r4;
    // 0x0041CFEC: sw          $v0, 0x1E8($v1)
    MEM_W(0X1E8, ctx->r3) = ctx->r2;
    // 0x0041CFF0: lw          $v1, 0xC($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XC);
    // 0x0041CFF4: lw          $v0, 0x210($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X210);
    // 0x0041CFF8: and         $v0, $v0, $a0
    ctx->r2 = ctx->r2 & ctx->r4;
    // 0x0041CFFC: sw          $v0, 0x210($v1)
    MEM_W(0X210, ctx->r3) = ctx->r2;
    // 0x0041D000: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x0041D004: lw          $v0, -0x531C($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X531C);
    // 0x0041D008: beq         $v0, $zero, L_0041D024
    if (ctx->r2 == 0) {
        // 0x0041D00C: lui         $a0, 0x100
        ctx->r4 = S32(0X100 << 16);
            goto L_0041D024;
    }
    // 0x0041D00C: lui         $a0, 0x100
    ctx->r4 = S32(0X100 << 16);
    // 0x0041D010: lw          $v0, 0xC($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC);
    // 0x0041D014: lw          $v1, 0x120($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X120);
    // 0x0041D018: or          $v1, $v1, $a0
    ctx->r3 = ctx->r3 | ctx->r4;
    // 0x0041D01C: j           L_0041D03C
    // 0x0041D020: sw          $v1, 0x120($v0)
    MEM_W(0X120, ctx->r2) = ctx->r3;
        goto L_0041D03C;
    // 0x0041D020: sw          $v1, 0x120($v0)
    MEM_W(0X120, ctx->r2) = ctx->r3;
L_0041D024:
    // 0x0041D024: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    // 0x0041D028: lui         $v1, 0xFEFF
    ctx->r3 = S32(0XFEFF << 16);
    // 0x0041D02C: lw          $v0, 0x120($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X120);
    // 0x0041D030: ori         $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 | 0XFFFF;
    // 0x0041D034: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x0041D038: sw          $v0, 0x120($a0)
    MEM_W(0X120, ctx->r4) = ctx->r2;
L_0041D03C:
    // 0x0041D03C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x0041D040: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0041D044: jr          $ra
    // 0x0041D048: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0041D048: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0040DCA4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0040DCA4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0040DCA8: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x0040DCAC: lb          $v0, 0xC7($a1)
    ctx->r2 = MEM_B(ctx->r5, 0XC7);
    // 0x0040DCB0: beq         $v0, $zero, L_0040DCC0
    if (ctx->r2 == 0) {
        // 0x0040DCB4: nop
    
            goto L_0040DCC0;
    }
    // 0x0040DCB4: nop

    // 0x0040DCB8: jal         0x00243414
    // 0x0040DCBC: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    func_00243414(rdram, ctx);
        goto after_0;
    // 0x0040DCBC: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_0:
L_0040DCC0:
    // 0x0040DCC0: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x0040DCC4: jr          $ra
    // 0x0040DCC8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0040DCC8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0026379C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0026379C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x002637A0: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x002637A4: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x002637A8: addiu       $a0, $a0, 0x7078
    ctx->r4 = ADD32(ctx->r4, 0X7078);
    // 0x002637AC: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x002637B0: jal         0x00220260
    // 0x002637B4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_00220260(rdram, ctx);
        goto after_0;
    // 0x002637B4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x002637B8: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x002637BC: jr          $ra
    // 0x002637C0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x002637C0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00444B28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00444B28: jr          $ra
    // 0x00444B2C: nop

    return;
    // 0x00444B2C: nop

;}
RECOMP_FUNC void func_00412D04(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00412D04: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00412D08: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x00412D0C: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x00412D10: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00412D14: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x00412D18: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
L_00412D1C:
    // 0x00412D1C: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x00412D20: lw          $v0, 0x1BB0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1BB0);
    // 0x00412D24: lw          $a0, 0x4($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X4);
    // 0x00412D28: jal         0x002017D4
    // 0x00412D2C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_002017D4(rdram, ctx);
        goto after_0;
    // 0x00412D2C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_0:
    // 0x00412D30: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x00412D34: slt         $v0, $s0, $v0
    ctx->r2 = SIGNED(ctx->r16) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x00412D38: beq         $v0, $zero, L_00412D90
    if (ctx->r2 == 0) {
        // 0x00412D3C: mov.s       $f0, $f20
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    ctx->f0.fl = ctx->f20.fl;
            goto L_00412D90;
    }
    // 0x00412D3C: mov.s       $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    ctx->f0.fl = ctx->f20.fl;
    // 0x00412D40: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x00412D44: lw          $v0, 0x1BB0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1BB0);
    // 0x00412D48: lw          $a0, 0x4($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X4);
    // 0x00412D4C: jal         0x002017D4
    // 0x00412D50: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_002017D4(rdram, ctx);
        goto after_1;
    // 0x00412D50: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_1:
    // 0x00412D54: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x00412D58: jal         0x002017D4
    // 0x00412D5C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_002017D4(rdram, ctx);
        goto after_2;
    // 0x00412D5C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_2:
    // 0x00412D60: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x00412D64: jal         0x002017D4
    // 0x00412D68: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_002017D4(rdram, ctx);
        goto after_3;
    // 0x00412D68: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_3:
    // 0x00412D6C: lw          $a0, 0x4($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X4);
    // 0x00412D70: sll         $v1, $a0, 3
    ctx->r3 = S32(ctx->r4 << 3);
    // 0x00412D74: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x00412D78: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x00412D7C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x00412D80: lwc1        $f0, 0x0($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X0);
    // 0x00412D84: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x00412D88: j           L_00412D1C
    // 0x00412D8C: add.s       $f20, $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = ctx->f20.fl + ctx->f0.fl;
        goto L_00412D1C;
    // 0x00412D8C: add.s       $f20, $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = ctx->f20.fl + ctx->f0.fl;
L_00412D90:
    // 0x00412D90: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x00412D94: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00412D98: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x00412D9C: jr          $ra
    // 0x00412DA0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00412DA0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_002A1808(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002A1808: nor         $a2, $zero, $a0
    ctx->r6 = ~(0 | ctx->r4);
    // 0x002A180C: andi        $a2, $a2, 0x3
    ctx->r6 = ctx->r6 & 0X3;
    // 0x002A1810: sll         $a2, $a2, 3
    ctx->r6 = S32(ctx->r6 << 3);
    // 0x002A1814: addiu       $v0, $zero, -0x4
    ctx->r2 = ADD32(0, -0X4);
    // 0x002A1818: and         $a0, $a0, $v0
    ctx->r4 = ctx->r4 & ctx->r2;
    // 0x002A181C: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x002A1820: sllv        $v0, $v0, $a2
    ctx->r2 = S32(ctx->r2 << (ctx->r6 & 31));
    // 0x002A1824: nor         $v0, $zero, $v0
    ctx->r2 = ~(0 | ctx->r2);
    // 0x002A1828: andi        $a1, $a1, 0xFF
    ctx->r5 = ctx->r5 & 0XFF;
    // 0x002A182C: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x002A1830: sllv        $a1, $a1, $a2
    ctx->r5 = S32(ctx->r5 << (ctx->r6 & 31));
    // 0x002A1834: and         $v1, $v1, $v0
    ctx->r3 = ctx->r3 & ctx->r2;
    // 0x002A1838: or          $v1, $v1, $a1
    ctx->r3 = ctx->r3 | ctx->r5;
    // 0x002A183C: jr          $ra
    // 0x002A1840: sw          $v1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r3;
    return;
    // 0x002A1840: sw          $v1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r3;
;}
RECOMP_FUNC void func_0029DED8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0029DED8: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x0029DEDC: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
;}
RECOMP_FUNC void func_00460444(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_004274E4:
    // 0x00460444: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
L_004275E0:
    // 0x00460448: sw          $s6, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r22;
    // 0x0046044C: addu        $s6, $a0, $zero
    ctx->r22 = ADD32(ctx->r4, 0);
    // 0x00460450: sw          $s4, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r20;
    // 0x00460454: addu        $s4, $a1, $zero
    ctx->r20 = ADD32(ctx->r5, 0);
    // 0x00460458: sw          $s5, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r21;
    // 0x0046045C: addu        $s5, $a2, $zero
    ctx->r21 = ADD32(ctx->r6, 0);
    // 0x00460460: sw          $s2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r18;
    // 0x00460464: lw          $s2, 0x6C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X6C);
    // 0x00460468: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0046046C: sw          $s3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r19;
    // 0x00460470: lbu         $s3, 0x6B($sp)
    ctx->r19 = MEM_BU(ctx->r29, 0X6B);
    // 0x00460474: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00460478: sw          $ra, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r31;
    // 0x0046047C: sw          $fp, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r30;
    // 0x00460480: sw          $s7, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r23;
    // 0x00460484: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x00460488: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x0046048C: bne         $s3, $zero, L_00460498
    if (ctx->r19 != 0) {
        // 0x00460490: sw          $a3, 0x64($sp)
        MEM_W(0X64, ctx->r29) = ctx->r7;
            goto L_00460498;
    }
    // 0x00460490: sw          $a3, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r7;
    // 0x00460494: lw          $v0, 0x60($s6)
    ctx->r2 = MEM_W(ctx->r22, 0X60);
L_00460498:
    // 0x00460498: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x0046049C: slti        $v0, $s0, 0x80
    ctx->r2 = SIGNED(ctx->r16) < 0X80 ? 1 : 0;
    // 0x004604A0: beq         $v0, $zero, L_004604CC
    if (ctx->r2 == 0) {
        // 0x004604A4: sll         $v0, $s0, 1
        ctx->r2 = S32(ctx->r16 << 1);
            goto L_004604CC;
    }
    // 0x004604A4: sll         $v0, $s0, 1
    ctx->r2 = S32(ctx->r16 << 1);
    // 0x004604A8: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x004604AC: addu        $v1, $v0, $s4
    ctx->r3 = ADD32(ctx->r2, ctx->r20);
L_004604B0:
    // 0x004604B0: lhu         $v0, 0x0($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X0);
    // 0x004604B4: beq         $v0, $a1, L_004604D0
    if (ctx->r2 == ctx->r5) {
        // 0x004604B8: addiu       $v0, $zero, 0x80
        ctx->r2 = ADD32(0, 0X80);
            goto L_004604D0;
    }
    // 0x004604B8: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x004604BC: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x004604C0: slti        $v0, $s0, 0x80
    ctx->r2 = SIGNED(ctx->r16) < 0X80 ? 1 : 0;
    // 0x004604C4: bne         $v0, $zero, L_004604B0
    if (ctx->r2 != 0) {
        // 0x004604C8: addiu       $v1, $v1, 0x2
        ctx->r3 = ADD32(ctx->r3, 0X2);
            goto L_004604B0;
    }
    // 0x004604C8: addiu       $v1, $v1, 0x2
    ctx->r3 = ADD32(ctx->r3, 0X2);
L_004604CC:
    // 0x004604CC: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
L_004604D0:
    // 0x004604D0: bne         $s0, $v0, L_004604EC
    if (ctx->r16 != ctx->r2) {
        // 0x004604D4: addiu       $v1, $zero, 0x1F
        ctx->r3 = ADD32(0, 0X1F);
            goto L_004604EC;
    }
    // 0x004604D4: addiu       $v1, $zero, 0x1F
    ctx->r3 = ADD32(0, 0X1F);
    // 0x004604D8: lw          $t0, 0x64($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X64);
    // 0x004604DC: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x004604E0: sw          $v0, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r2;
L_004604E4:
    // 0x004604E4: j           L_004275E0
    // 0x004604E8: addu        $v0, $a0, $zero
    ctx->r2 = ADD32(ctx->r4, 0);
    entry_004275E0(rdram, ctx);
    return;
    // 0x004604E8: addu        $v0, $a0, $zero
    ctx->r2 = ADD32(ctx->r4, 0);
L_004604EC:
    // 0x004604EC: addiu       $v0, $sp, 0x2F
    ctx->r2 = ADD32(ctx->r29, 0X2F);
L_004604F0:
    // 0x004604F0: sb          $zero, 0x0($v0)
    MEM_B(0X0, ctx->r2) = 0;
    // 0x004604F4: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x004604F8: bgez        $v1, L_004604F0
    if (SIGNED(ctx->r3) >= 0) {
        // 0x004604FC: addiu       $v0, $v0, -0x1
        ctx->r2 = ADD32(ctx->r2, -0X1);
            goto L_004604F0;
    }
    // 0x004604FC: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x00460500: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00460504: sw          $v0, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r2;
    // 0x00460508: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x0046050C: addu        $s0, $a1, $v0
    ctx->r16 = ADD32(ctx->r5, ctx->r2);
    // 0x00460510: slt         $v0, $v0, $s5
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r21) ? 1 : 0;
    // 0x00460514: beq         $v0, $zero, L_0046058C
    if (ctx->r2 == 0) {
        // 0x00460518: addu        $s7, $a1, $zero
        ctx->r23 = ADD32(ctx->r5, 0);
            goto L_0046058C;
    }
    // 0x00460518: addu        $s7, $a1, $zero
    ctx->r23 = ADD32(ctx->r5, 0);
    // 0x0046051C: addiu       $fp, $zero, 0x3
    ctx->r30 = ADD32(0, 0X3);
    // 0x00460520: sll         $v0, $s0, 1
    ctx->r2 = S32(ctx->r16 << 1);
    // 0x00460524: addu        $s1, $v0, $s4
    ctx->r17 = ADD32(ctx->r2, ctx->r20);
L_00460528:
    // 0x00460528: slti        $v0, $s0, 0x80
    ctx->r2 = SIGNED(ctx->r16) < 0X80 ? 1 : 0;
    // 0x0046052C: beq         $v0, $zero, L_0046058C
    if (ctx->r2 == 0) {
        // 0x00460530: nop
    
            goto L_0046058C;
    }
    // 0x00460530: nop

    // 0x00460534: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x00460538: bnel        $v0, $fp, L_0046057C
    if (ctx->r2 != ctx->r30) {
        // 0x0046053C: addiu       $s1, $s1, 0x2
        ctx->r17 = ADD32(ctx->r17, 0X2);
            goto L_0046057C;
    }
    goto skip_0;
    // 0x0046053C: addiu       $s1, $s1, 0x2
    ctx->r17 = ADD32(ctx->r17, 0X2);
    skip_0:
    // 0x00460540: addu        $a0, $s6, $zero
    ctx->r4 = ADD32(ctx->r22, 0);
    // 0x00460544: addiu       $a2, $sp, 0x10
    ctx->r6 = ADD32(ctx->r29, 0X10);
    // 0x00460548: andi        $a3, $s3, 0xFF
    ctx->r7 = ctx->r19 & 0XFF;
    // 0x0046054C: sll         $v0, $a1, 1
    ctx->r2 = S32(ctx->r5 << 1);
    // 0x00460550: addu        $v0, $s4, $v0
    ctx->r2 = ADD32(ctx->r20, ctx->r2);
    // 0x00460554: sb          $s3, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r19;
    // 0x00460558: jal         0x00427610
    // 0x0046055C: sb          $s0, 0x1($v0)
    MEM_B(0X1, ctx->r2) = ctx->r16;
    entry_00427610(rdram, ctx);
        goto after_0;
    // 0x0046055C: sb          $s0, 0x1($v0)
    MEM_B(0X1, ctx->r2) = ctx->r16;
    after_0:
    // 0x00460560: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x00460564: bne         $a0, $zero, L_004604E4
    if (ctx->r4 != 0) {
        // 0x00460568: addu        $a1, $s0, $zero
        ctx->r5 = ADD32(ctx->r16, 0);
            goto L_004604E4;
    }
    // 0x00460568: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x0046056C: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
    // 0x00460570: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x00460574: sw          $v0, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r2;
    // 0x00460578: addiu       $s1, $s1, 0x2
    ctx->r17 = ADD32(ctx->r17, 0X2);
L_0046057C:
    // 0x0046057C: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
    // 0x00460580: slt         $v0, $v0, $s5
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r21) ? 1 : 0;
    // 0x00460584: bne         $v0, $zero, L_00460528
    if (ctx->r2 != 0) {
        // 0x00460588: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_00460528;
    }
    // 0x00460588: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_0046058C:
    // 0x0046058C: lw          $t0, 0x64($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X64);
    // 0x00460590: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x00460594: bne         $s0, $v0, L_004605B8
    if (ctx->r16 != ctx->r2) {
        // 0x00460598: sw          $s7, 0x0($t0)
        MEM_W(0X0, ctx->r8) = ctx->r23;
            goto L_004605B8;
    }
    // 0x00460598: sw          $s7, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r23;
    // 0x0046059C: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
    // 0x004605A0: slt         $v0, $v0, $s5
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r21) ? 1 : 0;
    // 0x004605A4: beql        $v0, $zero, L_004605BC
    if (ctx->r2 == 0) {
        // 0x004605A8: addu        $a0, $s6, $zero
        ctx->r4 = ADD32(ctx->r22, 0);
            goto L_004605BC;
    }
    goto skip_1;
    // 0x004605A8: addu        $a0, $s6, $zero
    ctx->r4 = ADD32(ctx->r22, 0);
    skip_1:
    // 0x004605AC: lw          $t0, 0x70($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X70);
    // 0x004605B0: j           L_004274E4
    // 0x004605B4: sw          $a1, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r5;
    entry_004274E4(rdram, ctx);
    return;
    // 0x004605B4: sw          $a1, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r5;
L_004605B8:
    // 0x004605B8: addu        $a0, $s6, $zero
    ctx->r4 = ADD32(ctx->r22, 0);
L_004605BC:
    // 0x004605BC: addiu       $a2, $sp, 0x10
    ctx->r6 = ADD32(ctx->r29, 0X10);
    // 0x004605C0: andi        $a3, $s3, 0xFF
    ctx->r7 = ctx->r19 & 0XFF;
    // 0x004605C4: sll         $v0, $a1, 1
    ctx->r2 = S32(ctx->r5 << 1);
    // 0x004605C8: addu        $v0, $s4, $v0
    ctx->r2 = ADD32(ctx->r20, ctx->r2);
    // 0x004605CC: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x004605D0: jal         0x00427610
    // 0x004605D4: sh          $v1, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r3;
    entry_00427610(rdram, ctx);
        goto after_1;
    // 0x004605D4: sh          $v1, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r3;
    after_1:
    // 0x004605D8: lw          $t0, 0x70($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X70);
    // 0x004605DC: sw          $zero, 0x0($t0)
    MEM_W(0X0, ctx->r8) = 0;
    // 0x004605E0: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
    // 0x004605E4: lw          $fp, 0x50($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X50);
    // 0x004605E8: lw          $s7, 0x4C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X4C);
    // 0x004605EC: lw          $s6, 0x48($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X48);
    // 0x004605F0: lw          $s5, 0x44($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X44);
    // 0x004605F4: lw          $s4, 0x40($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X40);
    // 0x004605F8: lw          $s3, 0x3C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X3C);
    // 0x004605FC: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x00460600: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x00460604: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x00460608: jr          $ra
    // 0x0046060C: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    return;
    // 0x0046060C: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void func_004279AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004279AC: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x004279B0: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x004279B4: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x004279B8: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x004279BC: addu        $s3, $a1, $zero
    ctx->r19 = ADD32(ctx->r5, 0);
    // 0x004279C0: andi        $v0, $a2, 0xFF
    ctx->r2 = ctx->r6 & 0XFF;
    // 0x004279C4: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x004279C8: addu        $v0, $s3, $v0
    ctx->r2 = ADD32(ctx->r19, ctx->r2);
    // 0x004279CC: sw          $s5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r21;
    // 0x004279D0: addu        $s5, $a3, $zero
    ctx->r21 = ADD32(ctx->r7, 0);
    // 0x004279D4: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x004279D8: sw          $s6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r22;
    // 0x004279DC: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x004279E0: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x004279E4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x004279E8: lhu         $s0, 0x0($v0)
    ctx->r16 = MEM_HU(ctx->r2, 0X0);
    // 0x004279EC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x004279F0: lw          $s6, 0x44($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X44);
    // 0x004279F4: lw          $a1, 0x48($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X48);
    // 0x004279F8: lbu         $a3, 0x43($sp)
    ctx->r7 = MEM_BU(ctx->r29, 0X43);
    // 0x004279FC: andi        $a0, $s0, 0xFFFF
    ctx->r4 = ctx->r16 & 0XFFFF;
    // 0x00427A00: beq         $a0, $v0, L_00427A1C
    if (ctx->r4 == ctx->r2) {
        // 0x00427A04: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_00427A1C;
    }
    // 0x00427A04: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x00427A08: srl         $v0, $a0, 8
    ctx->r2 = S32(U32(ctx->r4) >> 8);
    // 0x00427A0C: bne         $v0, $zero, L_00427A2C
    if (ctx->r2 != 0) {
        // 0x00427A10: andi        $v0, $s0, 0xFF
        ctx->r2 = ctx->r16 & 0XFF;
            goto L_00427A2C;
    }
    // 0x00427A10: andi        $v0, $s0, 0xFF
    ctx->r2 = ctx->r16 & 0XFF;
    // 0x00427A14: j           L_00427A24
    // 0x00427A18: nop

        goto L_00427A24;
    // 0x00427A18: nop

L_00427A1C:
    // 0x00427A1C: bne         $a3, $zero, L_00427A28
    if (ctx->r7 != 0) {
        // 0x00427A20: addiu       $v1, $zero, 0x1
        ctx->r3 = ADD32(0, 0X1);
            goto L_00427A28;
    }
    // 0x00427A20: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_00427A24:
    // 0x00427A24: lw          $v1, 0x60($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X60);
L_00427A28:
    // 0x00427A28: andi        $v0, $s0, 0xFF
    ctx->r2 = ctx->r16 & 0XFF;
L_00427A2C:
    // 0x00427A2C: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x00427A30: beq         $v0, $zero, L_00427A40
    if (ctx->r2 == 0) {
        // 0x00427A34: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_00427A40;
    }
    // 0x00427A34: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00427A38: bne         $s0, $v0, L_00427B24
    if (ctx->r16 != ctx->r2) {
        // 0x00427A3C: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_00427B24;
    }
    // 0x00427A3C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
L_00427A40:
    // 0x00427A40: addiu       $s4, $zero, 0x1
    ctx->r20 = ADD32(0, 0X1);
    // 0x00427A44: bne         $a1, $s4, L_00427A60
    if (ctx->r5 != ctx->r20) {
        // 0x00427A48: sh          $s0, 0x0($s6)
        MEM_H(0X0, ctx->r22) = ctx->r16;
            goto L_00427A60;
    }
    // 0x00427A48: sh          $s0, 0x0($s6)
    MEM_H(0X0, ctx->r22) = ctx->r16;
    // 0x00427A4C: andi        $v0, $a2, 0xFF
    ctx->r2 = ctx->r6 & 0XFF;
    // 0x00427A50: sllv        $v0, $v0, $s4
    ctx->r2 = S32(ctx->r2 << (ctx->r20 & 31));
    // 0x00427A54: addu        $v0, $s3, $v0
    ctx->r2 = ADD32(ctx->r19, ctx->r2);
    // 0x00427A58: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
    // 0x00427A5C: sh          $v1, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r3;
L_00427A60:
    // 0x00427A60: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x00427A64: andi        $a1, $a2, 0xFF
    ctx->r5 = ctx->r6 & 0XFF;
    // 0x00427A68: addu        $a2, $s5, $zero
    ctx->r6 = ADD32(ctx->r21, 0);
    // 0x00427A6C: andi        $s1, $a3, 0xFF
    ctx->r17 = ctx->r7 & 0XFF;
    // 0x00427A70: jal         0x00427B4C
    // 0x00427A74: addu        $a3, $s1, $zero
    ctx->r7 = ADD32(ctx->r17, 0);
    func_00427B4C(rdram, ctx);
        goto after_0;
    // 0x00427A74: addu        $a3, $s1, $zero
    ctx->r7 = ADD32(ctx->r17, 0);
    after_0:
    // 0x00427A78: bne         $v0, $zero, L_00427B24
    if (ctx->r2 != 0) {
        // 0x00427A7C: andi        $v1, $s0, 0xFFFF
        ctx->r3 = ctx->r16 & 0XFFFF;
            goto L_00427B24;
    }
    // 0x00427A7C: andi        $v1, $s0, 0xFFFF
    ctx->r3 = ctx->r16 & 0XFFFF;
    // 0x00427A80: beq         $v1, $s4, L_00427B24
    if (ctx->r3 == ctx->r20) {
        // 0x00427A84: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_00427B24;
    }
    // 0x00427A84: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x00427A88: lw          $v0, 0x60($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X60);
    // 0x00427A8C: slt         $v0, $v1, $v0
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x00427A90: bnel        $v0, $zero, L_00427B20
    if (ctx->r2 != 0) {
        // 0x00427A94: sh          $s0, 0x0($s6)
        MEM_H(0X0, ctx->r22) = ctx->r16;
            goto L_00427B20;
    }
    goto skip_0;
    // 0x00427A94: sh          $s0, 0x0($s6)
    MEM_H(0X0, ctx->r22) = ctx->r16;
    skip_0:
    // 0x00427A98: addiu       $s4, $zero, 0x3
    ctx->r20 = ADD32(0, 0X3);
    // 0x00427A9C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
L_00427AA0:
    // 0x00427AA0: addu        $v0, $s0, $zero
    ctx->r2 = ADD32(ctx->r16, 0);
    // 0x00427AA4: andi        $a1, $v0, 0xFF
    ctx->r5 = ctx->r2 & 0XFF;
    // 0x00427AA8: addu        $a2, $s5, $zero
    ctx->r6 = ADD32(ctx->r21, 0);
    // 0x00427AAC: addu        $a3, $s1, $zero
    ctx->r7 = ADD32(ctx->r17, 0);
    // 0x00427AB0: addu        $v0, $a1, $zero
    ctx->r2 = ADD32(ctx->r5, 0);
    // 0x00427AB4: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x00427AB8: addu        $v0, $s3, $v0
    ctx->r2 = ADD32(ctx->r19, ctx->r2);
    // 0x00427ABC: lhu         $s0, 0x0($v0)
    ctx->r16 = MEM_HU(ctx->r2, 0X0);
    // 0x00427AC0: sll         $v0, $a1, 1
    ctx->r2 = S32(ctx->r5 << 1);
    // 0x00427AC4: addu        $v0, $s3, $v0
    ctx->r2 = ADD32(ctx->r19, ctx->r2);
    // 0x00427AC8: jal         0x00427B4C
    // 0x00427ACC: sh          $s4, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r20;
    func_00427B4C(rdram, ctx);
        goto after_1;
    // 0x00427ACC: sh          $s4, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r20;
    after_1:
    // 0x00427AD0: bne         $v0, $zero, L_00427B24
    if (ctx->r2 != 0) {
        // 0x00427AD4: andi        $v1, $s0, 0xFFFF
        ctx->r3 = ctx->r16 & 0XFFFF;
            goto L_00427B24;
    }
    // 0x00427AD4: andi        $v1, $s0, 0xFFFF
    ctx->r3 = ctx->r16 & 0XFFFF;
    // 0x00427AD8: srl         $a0, $v1, 8
    ctx->r4 = S32(U32(ctx->r3) >> 8);
    // 0x00427ADC: bne         $a0, $s1, L_00427AF4
    if (ctx->r4 != ctx->r17) {
        // 0x00427AE0: nop
    
            goto L_00427AF4;
    }
    // 0x00427AE0: nop

    // 0x00427AE4: lw          $v0, 0x60($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X60);
    // 0x00427AE8: slt         $v0, $v1, $v0
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x00427AEC: beql        $v0, $zero, L_00427AA0
    if (ctx->r2 == 0) {
        // 0x00427AF0: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_00427AA0;
    }
    goto skip_1;
    // 0x00427AF0: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    skip_1:
L_00427AF4:
    // 0x00427AF4: lw          $v0, 0x60($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X60);
    // 0x00427AF8: slt         $v0, $v1, $v0
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x00427AFC: bnel        $v0, $zero, L_00427B20
    if (ctx->r2 != 0) {
        // 0x00427B00: sh          $s0, 0x0($s6)
        MEM_H(0X0, ctx->r22) = ctx->r16;
            goto L_00427B20;
    }
    goto skip_2;
    // 0x00427B00: sh          $s0, 0x0($s6)
    MEM_H(0X0, ctx->r22) = ctx->r16;
    skip_2:
    // 0x00427B04: bnel        $a0, $s1, L_00427B20
    if (ctx->r4 != ctx->r17) {
        // 0x00427B08: sh          $s0, 0x0($s6)
        MEM_H(0X0, ctx->r22) = ctx->r16;
            goto L_00427B20;
    }
    goto skip_3;
    // 0x00427B08: sh          $s0, 0x0($s6)
    MEM_H(0X0, ctx->r22) = ctx->r16;
    skip_3:
    // 0x00427B0C: andi        $v0, $s0, 0xFF
    ctx->r2 = ctx->r16 & 0XFF;
    // 0x00427B10: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x00427B14: addu        $v0, $s3, $v0
    ctx->r2 = ADD32(ctx->r19, ctx->r2);
    // 0x00427B18: sh          $s4, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r20;
    // 0x00427B1C: sh          $s0, 0x0($s6)
    MEM_H(0X0, ctx->r22) = ctx->r16;
L_00427B20:
    // 0x00427B20: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_00427B24:
    // 0x00427B24: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x00427B28: lw          $s6, 0x28($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X28);
    // 0x00427B2C: lw          $s5, 0x24($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X24);
    // 0x00427B30: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x00427B34: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x00427B38: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x00427B3C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // turok2: reconnected split function: a stray ELF symbol at 0x00427B40 ended
    // this function early, leaving it without its epilogue. On the
    // hardware execution simply continues into the next instruction.
    func_00427B40(rdram, ctx);
;}
RECOMP_FUNC void func_0025A9F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0025A9F4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0025A9F8: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x0025A9FC: lw          $v0, 0x14($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X14);
    // 0x0025AA00: lhu         $a3, 0x90($v0)
    ctx->r7 = MEM_HU(ctx->r2, 0X90);
    // 0x0025AA04: lui         $a2, 0x800B
    ctx->r6 = S32(0X800B << 16);
    // 0x0025AA08: addiu       $a2, $a2, 0x300
    ctx->r6 = ADD32(ctx->r6, 0X300);
    // 0x0025AA0C: jal         0x00245A98
    // 0x0025AA10: nop

    func_00245A98(rdram, ctx);
        goto after_0;
    // 0x0025AA10: nop

    after_0:
    // 0x0025AA14: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x0025AA18: jr          $ra
    // 0x0025AA1C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0025AA1C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_004205C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004205C4: swc1        $f0, -0x5348($at)
    MEM_W(-0X5348, ctx->r1) = ctx->f0.u32l;
    // 0x004205C8: lwc1        $f0, 0x14($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X14);
    // 0x004205CC: lw          $a0, 0x30($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X30);
    // 0x004205D0: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x004205D4: sw          $v1, 0x60($at)
    MEM_W(0X60, ctx->r1) = ctx->r3;
    // 0x004205D8: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x004205DC: sb          $t2, -0x53A8($at)
    MEM_B(-0X53A8, ctx->r1) = ctx->r10;
    // 0x004205E0: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x004205E4: swc1        $f0, -0x5344($at)
    MEM_W(-0X5344, ctx->r1) = ctx->f0.u32l;
    // 0x004205E8: blez        $a0, L_00420610
    if (SIGNED(ctx->r4) <= 0) {
        // 0x004205EC: addiu       $a3, $v0, 0x684
        ctx->r7 = ADD32(ctx->r2, 0X684);
            goto L_00420610;
    }
    // 0x004205EC: addiu       $a3, $v0, 0x684
    ctx->r7 = ADD32(ctx->r2, 0X684);
L_004205F0:
    // 0x004205F0: lbu         $v0, 0x0($a3)
    ctx->r2 = MEM_BU(ctx->r7, 0X0);
    // 0x004205F4: addiu       $a3, $a3, 0x1
    ctx->r7 = ADD32(ctx->r7, 0X1);
    // 0x004205F8: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x004205FC: sb          $v0, 0x0($t0)
    MEM_B(0X0, ctx->r8) = ctx->r2;
    // 0x00420600: lw          $v0, 0x30($t1)
    ctx->r2 = MEM_W(ctx->r9, 0X30);
    // 0x00420604: slt         $v0, $a1, $v0
    ctx->r2 = SIGNED(ctx->r5) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x00420608: bne         $v0, $zero, L_004205F0
    if (ctx->r2 != 0) {
        // 0x0042060C: addiu       $t0, $t0, 0x1
        ctx->r8 = ADD32(ctx->r8, 0X1);
            goto L_004205F0;
    }
    // 0x0042060C: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
L_00420610:
    // 0x00420610: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x00420614: addiu       $v0, $v0, -0x675C
    ctx->r2 = ADD32(ctx->r2, -0X675C);
    // 0x00420618: sw          $zero, 0x0($v0)
    MEM_W(0X0, ctx->r2) = 0;
    // 0x0042061C: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x00420620: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x00420624: lw          $a3, 0xA50($a2)
    ctx->r7 = MEM_W(ctx->r6, 0XA50);
    // 0x00420628: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x0042062C: addiu       $a1, $a1, -0x42E0
    ctx->r5 = ADD32(ctx->r5, -0X42E0);
    // 0x00420630: j           L_00420698
    // 0x00420634: addiu       $a0, $v0, 0x588
    ctx->r4 = ADD32(ctx->r2, 0X588);
        goto L_00420698;
    // 0x00420634: addiu       $a0, $v0, 0x588
    ctx->r4 = ADD32(ctx->r2, 0X588);
    // 0x00420638: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x0042063C: lw          $a1, 0x9C4($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X9C4);
    // 0x00420640: jal         0x00426064
    // 0x00420644: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00426064(rdram, ctx);
        goto after_0;
    // 0x00420644: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x00420648: bne         $v0, $zero, L_00420678
    if (ctx->r2 != 0) {
        // 0x0042064C: nop
    
            goto L_00420678;
    }
    // 0x0042064C: nop

    // 0x00420650: lw          $v0, 0x24($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X24);
    // 0x00420654: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x00420658: addiu       $a0, $a0, -0x61D4
    ctx->r4 = ADD32(ctx->r4, -0X61D4);
    // 0x0042065C: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x00420660: lw          $a2, 0x1C($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X1C);
    // 0x00420664: lw          $a3, 0x20($s1)
    ctx->r7 = MEM_W(ctx->r17, 0X20);
    // 0x00420668: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x0042066C: addiu       $a1, $a1, -0x4250
    ctx->r5 = ADD32(ctx->r5, -0X4250);
    // 0x00420670: j           L_00420698
    // 0x00420674: nop

        goto L_00420698;
    // 0x00420674: nop

L_00420678:
    // 0x00420678: lw          $v0, 0x24($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X24);
    // 0x0042067C: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x00420680: addiu       $a0, $a0, -0x61D4
    ctx->r4 = ADD32(ctx->r4, -0X61D4);
    // 0x00420684: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x00420688: lw          $a2, 0x1C($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X1C);
    // 0x0042068C: lw          $a3, 0x20($s1)
    ctx->r7 = MEM_W(ctx->r17, 0X20);
    // 0x00420690: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x00420694: addiu       $a1, $a1, -0x41E4
    ctx->r5 = ADD32(ctx->r5, -0X41E4);
L_00420698:
    // 0x00420698: jal         0x00416644
    // 0x0042069C: nop

    func_00416644(rdram, ctx);
        goto after_1;
    // 0x0042069C: nop

    after_1:
    // 0x004206A0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x004206A4: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x004206A8: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x004206AC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x004206B0: jr          $ra
    // 0x004206B4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x004206B4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_002659F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002659F4: lh          $v0, 0xE0($a0)
    ctx->r2 = MEM_H(ctx->r4, 0XE0);
    // 0x002659F8: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x002659FC: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00265A00: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00265A04: lwc1        $f1, 0xD8($a0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r4, 0XD8);
    // 0x00265A08: c.le.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl <= ctx->f1.fl;
    // 0x00265A0C: nop

    // 0x00265A10: bc1t        L_00265A1C
    if (c1cs) {
        // 0x00265A14: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_00265A1C;
    }
    // 0x00265A14: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00265A18: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_00265A1C:
    // 0x00265A1C: jr          $ra
    // 0x00265A20: nop

    return;
    // 0x00265A20: nop

    // 0x00265A24: nop

    // 0x00265A28: beq         $s2, $s0, L_00265A60
    if (ctx->r18 == ctx->r16) {
        // 0x00265A2C: sll         $v0, $s2, 3
        ctx->r2 = S32(ctx->r18 << 3);
            goto L_00265A60;
    }
    // 0x00265A2C: sll         $v0, $s2, 3
    ctx->r2 = S32(ctx->r18 << 3);
    // 0x00265A30: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00265A34: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00265A38: addiu       $v0, $v0, 0x2330
    ctx->r2 = ADD32(ctx->r2, 0X2330);
    // 0x00265A3C: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x00265A40: sw          $v0, 0x2C($a1)
    MEM_W(0X2C, ctx->r5) = ctx->r2;
    // 0x00265A44: lui         $v0, 0x26
    ctx->r2 = S32(0X26 << 16);
    // 0x00265A48: addiu       $v0, $v0, 0x5AF8
    ctx->r2 = ADD32(ctx->r2, 0X5AF8);
    // 0x00265A4C: sw          $v0, 0xF0($a1)
    MEM_W(0XF0, ctx->r5) = ctx->r2;
    // 0x00265A50: lui         $v0, 0x26
    ctx->r2 = S32(0X26 << 16);
    // 0x00265A54: addiu       $v0, $v0, 0x5EEC
    ctx->r2 = ADD32(ctx->r2, 0X5EEC);
    // 0x00265A58: sw          $v0, 0xF8($a1)
    MEM_W(0XF8, ctx->r5) = ctx->r2;
    // 0x00265A5C: lhu         $v1, 0xB8($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0XB8);
L_00265A60:
    // 0x00265A60: addiu       $v0, $zero, 0x64D
    ctx->r2 = ADD32(0, 0X64D);
    // 0x00265A64: bne         $v1, $v0, L_00265A74
    if (ctx->r3 != ctx->r2) {
        // 0x00265A68: nop
    
            goto L_00265A74;
    }
    // 0x00265A68: nop

    // 0x00265A6C: jal         0x004088B0
    // 0x00265A70: nop

    func_004088B0(rdram, ctx);
        goto after_0;
    // 0x00265A70: nop

    after_0:
L_00265A74:
    // 0x00265A74: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x00265A78: jr          $ra
    // 0x00265A7C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00265A7C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00412F18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00412F18: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00412F1C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00412F20: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x00412F24: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x00412F28: jal         0x002017D4
    // 0x00412F2C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_002017D4(rdram, ctx);
        goto after_0;
    // 0x00412F2C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_0:
    // 0x00412F30: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00412F34: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x00412F38: jal         0x002017D4
    // 0x00412F3C: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    func_002017D4(rdram, ctx);
        goto after_1;
    // 0x00412F3C: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    after_1:
    // 0x00412F40: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x00412F44: lw          $a1, 0x4($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X4);
    // 0x00412F48: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x00412F4C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00412F50: sll         $v1, $a0, 3
    ctx->r3 = S32(ctx->r4 << 3);
    // 0x00412F54: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x00412F58: sll         $v0, $a1, 3
    ctx->r2 = S32(ctx->r5 << 3);
    // 0x00412F5C: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x00412F60: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x00412F64: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x00412F68: addiu       $v0, $v0, 0x30
    ctx->r2 = ADD32(ctx->r2, 0X30);
    // 0x00412F6C: jr          $ra
    // 0x00412F70: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00412F70: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00238858(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00238858: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x0023885C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x00238860: lw          $a2, 0x30($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X30);
    // 0x00238864: addu        $a1, $a3, $zero
    ctx->r5 = ADD32(ctx->r7, 0);
    // 0x00238868: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    // 0x0023886C: lw          $a3, 0x34($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X34);
    // 0x00238870: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x00238874: jal         0x00237FAC
    // 0x00238878: nop

    func_00237FAC(rdram, ctx);
        goto after_0;
    // 0x00238878: nop

    after_0:
    // 0x0023887C: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x00238880: jr          $ra
    // 0x00238884: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00238884: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_0024A678(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0024A678: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x0024A67C: sdc1        $f21, 0x40($sp)
    CHECK_FR(ctx, 21);
    SD(ctx->f21.u64, 0X40, ctx->r29);
    // 0x0024A680: mtc1        $a3, $f21
    ctx->f_odd[(21 - 1) * 2] = ctx->r7;
    // 0x0024A684: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x0024A688: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x0024A68C: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x0024A690: addu        $s1, $a2, $zero
    ctx->r17 = ADD32(ctx->r6, 0);
    // 0x0024A694: sdc1        $f20, 0x38($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X38, ctx->r29);
    // 0x0024A698: lwc1        $f20, 0x5C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x0024A69C: addiu       $v0, $zero, 0x2DA
    ctx->r2 = ADD32(0, 0X2DA);
    // 0x0024A6A0: beq         $s1, $v0, L_0024A6BC
    if (ctx->r17 == ctx->r2) {
        // 0x0024A6A4: sw          $ra, 0x30($sp)
        MEM_W(0X30, ctx->r29) = ctx->r31;
            goto L_0024A6BC;
    }
    // 0x0024A6A4: sw          $ra, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r31;
    // 0x0024A6A8: addiu       $v0, $zero, 0x2E4
    ctx->r2 = ADD32(0, 0X2E4);
    // 0x0024A6AC: beq         $s1, $v0, L_0024A6BC
    if (ctx->r17 == ctx->r2) {
        // 0x0024A6B0: addiu       $v0, $zero, 0x2BC
        ctx->r2 = ADD32(0, 0X2BC);
            goto L_0024A6BC;
    }
    // 0x0024A6B0: addiu       $v0, $zero, 0x2BC
    ctx->r2 = ADD32(0, 0X2BC);
    // 0x0024A6B4: bne         $s1, $v0, L_0024A6D8
    if (ctx->r17 != ctx->r2) {
        // 0x0024A6B8: nop
    
            goto L_0024A6D8;
    }
    // 0x0024A6B8: nop

L_0024A6BC:
    // 0x0024A6BC: lwc1        $f0, 0x288($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X288);
    // 0x0024A6C0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0024A6C4: lwc1        $f1, 0x6B9C($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X6B9C);
    // 0x0024A6C8: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0024A6CC: lwc1        $f2, 0x28C($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X28C);
    // 0x0024A6D0: j           L_0024A7D0
    // 0x0024A6D4: nop

        goto L_0024A7D0;
    // 0x0024A6D4: nop

L_0024A6D8:
    // 0x0024A6D8: lwc1        $f0, 0x328($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X328);
    // 0x0024A6DC: lwc1        $f1, 0x0($a1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r5, 0X0);
    // 0x0024A6E0: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0024A6E4: lwc1        $f3, 0x32C($s0)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r16, 0X32C);
    // 0x0024A6E8: lwc1        $f1, 0x4($a1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r5, 0X4);
    // 0x0024A6EC: mul.s       $f3, $f3, $f1
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f3.fl = MUL_S(ctx->f3.fl, ctx->f1.fl);
    // 0x0024A6F0: lwc1        $f2, 0x8($a1)
    ctx->f2.u32l = MEM_W(ctx->r5, 0X8);
    // 0x0024A6F4: lwc1        $f1, 0x330($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X330);
    // 0x0024A6F8: mul.s       $f1, $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f2.fl);
    // 0x0024A6FC: add.s       $f0, $f0, $f3
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f3.fl;
    // 0x0024A700: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x0024A704: lwc1        $f1, 0x334($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X334);
    // 0x0024A708: c.le.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl <= ctx->f1.fl;
    // 0x0024A70C: nop

    // 0x0024A710: bc1f        L_0024A850
    if (!c1cs) {
        // 0x0024A714: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_0024A850;
    }
    // 0x0024A714: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0024A718: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    // 0x0024A71C: jal         0x002810EC
    // 0x0024A720: addiu       $a3, $sp, 0x24
    ctx->r7 = ADD32(ctx->r29, 0X24);
    func_002810EC(rdram, ctx);
        goto after_0;
    // 0x0024A720: addiu       $a3, $sp, 0x24
    ctx->r7 = ADD32(ctx->r29, 0X24);
    after_0:
    // 0x0024A724: lwc1        $f2, 0x20($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X20);
    // 0x0024A728: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0024A72C: lwc1        $f1, 0x6BA0($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X6BA0);
    // 0x0024A730: c.lt.s      $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f2.fl < ctx->f1.fl;
    // 0x0024A734: nop

    // 0x0024A738: bc1t        L_0024A850
    if (c1cs) {
        // 0x0024A73C: nop
    
            goto L_0024A850;
    }
    // 0x0024A73C: nop

    // 0x0024A740: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x0024A744: lw          $a0, 0x2030($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X2030);
    // 0x0024A748: addiu       $v0, $a0, 0x40
    ctx->r2 = ADD32(ctx->r4, 0X40);
    // 0x0024A74C: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x0024A750: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x0024A754: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x0024A758: nop

    // 0x0024A75C: bc1t        L_0024A850
    if (c1cs) {
        // 0x0024A760: nop
    
            goto L_0024A850;
    }
    // 0x0024A760: nop

    // 0x0024A764: lwc1        $f3, 0x24($sp)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r29, 0X24);
    // 0x0024A768: c.lt.s      $f3, $f1
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f3.fl < ctx->f1.fl;
    // 0x0024A76C: nop

    // 0x0024A770: bc1t        L_0024A850
    if (c1cs) {
        // 0x0024A774: nop
    
            goto L_0024A850;
    }
    // 0x0024A774: nop

    // 0x0024A778: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x0024A77C: lw          $v1, 0x2034($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X2034);
    // 0x0024A780: addiu       $v0, $v1, 0x40
    ctx->r2 = ADD32(ctx->r3, 0X40);
    // 0x0024A784: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x0024A788: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x0024A78C: c.lt.s      $f0, $f3
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    c1cs = ctx->f0.fl < ctx->f3.fl;
    // 0x0024A790: nop

    // 0x0024A794: bc1t        L_0024A850
    if (c1cs) {
        // 0x0024A798: nop
    
            goto L_0024A850;
    }
    // 0x0024A798: nop

    // 0x0024A79C: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x0024A7A0: lbu         $v0, -0x550F($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X550F);
    // 0x0024A7A4: beq         $v0, $zero, L_0024A7EC
    if (ctx->r2 == 0) {
        // 0x0024A7A8: nop
    
            goto L_0024A7EC;
    }
    // 0x0024A7A8: nop

    // 0x0024A7AC: mtc1        $a0, $f0
    ctx->f0.u32l = ctx->r4;
    // 0x0024A7B0: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x0024A7B4: lwc1        $f1, 0x288($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X288);
    // 0x0024A7B8: div.s       $f0, $f2, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = DIV_S(ctx->f2.fl, ctx->f0.fl);
    // 0x0024A7BC: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0024A7C0: mtc1        $v1, $f2
    ctx->f2.u32l = ctx->r3;
    // 0x0024A7C4: cvt.s.w     $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    ctx->f2.fl = CVT_S_W(ctx->f2.u32l);
    // 0x0024A7C8: lwc1        $f1, 0x28C($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X28C);
    // 0x0024A7CC: div.s       $f2, $f3, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = DIV_S(ctx->f3.fl, ctx->f2.fl);
L_0024A7D0:
    // 0x0024A7D0: mul.s       $f2, $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f1.fl);
    // 0x0024A7D4: lwc1        $f1, 0x290($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X290);
    // 0x0024A7D8: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x0024A7DC: lwc1        $f0, 0x294($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X294);
    // 0x0024A7E0: add.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f2.fl;
    // 0x0024A7E4: swc1        $f1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    // 0x0024A7E8: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
L_0024A7EC:
    // 0x0024A7EC: lwc1        $f0, 0x58($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X58);
    // 0x0024A7F0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0024A7F4: mul.s       $f0, $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f20.fl);
    // 0x0024A7F8: trunc.w.s   $f4, $f21
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 21);
    ctx->f4.u32l = TRUNC_W_S(ctx->f21.fl);
    // 0x0024A7FC: mfc1        $a1, $f4
    ctx->r5 = (int32_t)ctx->f4.u32l;
    // 0x0024A800: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0024A804: lwc1        $f3, 0x6BA4($at)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r1, 0X6BA4);
    // 0x0024A808: lwc1        $f1, 0x20($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x0024A80C: lwc1        $f2, 0x24($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X24);
    // 0x0024A810: sub.s       $f0, $f0, $f3
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f3.fl;
    // 0x0024A814: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0024A818: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    // 0x0024A81C: sub.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl - ctx->f0.fl;
    // 0x0024A820: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x0024A824: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x0024A828: sub.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f2.fl - ctx->f0.fl;
    // 0x0024A82C: trunc.w.s   $f4, $f1
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 1);
    ctx->f4.u32l = TRUNC_W_S(ctx->f1.fl);
    // 0x0024A830: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x0024A834: sll         $a2, $a2, 16
    ctx->r6 = S32(ctx->r6 << 16);
    // 0x0024A838: sra         $a2, $a2, 16
    ctx->r6 = S32(SIGNED(ctx->r6) >> 16);
    // 0x0024A83C: trunc.w.s   $f4, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    ctx->f4.u32l = TRUNC_W_S(ctx->f2.fl);
    // 0x0024A840: mfc1        $a3, $f4
    ctx->r7 = (int32_t)ctx->f4.u32l;
    // 0x0024A844: sll         $a3, $a3, 16
    ctx->r7 = S32(ctx->r7 << 16);
    // 0x0024A848: jal         0x0027B320
    // 0x0024A84C: sra         $a3, $a3, 16
    ctx->r7 = S32(SIGNED(ctx->r7) >> 16);
    func_0027B320(rdram, ctx);
        goto after_1;
    // 0x0024A84C: sra         $a3, $a3, 16
    ctx->r7 = S32(SIGNED(ctx->r7) >> 16);
    after_1:
L_0024A850:
    // 0x0024A850: lw          $ra, 0x30($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X30);
    // 0x0024A854: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x0024A858: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x0024A85C: ldc1        $f21, 0x40($sp)
    CHECK_FR(ctx, 21);
    ctx->f21.u64 = LD(ctx->r29, 0X40);
    // 0x0024A860: ldc1        $f20, 0x38($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X38);
    // 0x0024A864: jr          $ra
    // 0x0024A868: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x0024A868: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_00234928(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00234928: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x0023492C: sw          $s5, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r21;
    // 0x00234930: addu        $s5, $a1, $zero
    ctx->r21 = ADD32(ctx->r5, 0);
    // 0x00234934: sw          $ra, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r31;
    // 0x00234938: sw          $fp, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r30;
    // 0x0023493C: sw          $s7, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r23;
    // 0x00234940: sw          $s6, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r22;
    // 0x00234944: sw          $s4, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r20;
    // 0x00234948: sw          $s3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r19;
    // 0x0023494C: sw          $s2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r18;
    // 0x00234950: sw          $s1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r17;
    // 0x00234954: sw          $s0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r16;
    // 0x00234958: sw          $a0, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r4;
    // 0x0023495C: lw          $v0, 0x8($s5)
    ctx->r2 = MEM_W(ctx->r21, 0X8);
    // 0x00234960: addiu       $v1, $sp, 0x10
    ctx->r3 = ADD32(ctx->r29, 0X10);
    // 0x00234964: addiu       $v0, $v0, 0x24
    ctx->r2 = ADD32(ctx->r2, 0X24);
    // 0x00234968: sw          $v0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r2;
    // 0x0023496C: lw          $v0, 0x8($s5)
    ctx->r2 = MEM_W(ctx->r21, 0X8);
    // 0x00234970: lbu         $v0, 0x23($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X23);
    // 0x00234974: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x00234978: lw          $v0, 0x3C($s5)
    ctx->r2 = MEM_W(ctx->r21, 0X3C);
    // 0x0023497C: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x00234980: beq         $v0, $zero, L_0023499C
    if (ctx->r2 == 0) {
        // 0x00234984: nop
    
            goto L_0023499C;
    }
    // 0x00234984: nop

    // 0x00234988: lw          $v0, 0xC($s5)
    ctx->r2 = MEM_W(ctx->r21, 0XC);
    // 0x0023498C: sw          $v0, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r2;
    // 0x00234990: lw          $v0, 0x10($s5)
    ctx->r2 = MEM_W(ctx->r21, 0X10);
    // 0x00234994: j           L_002349AC
    // 0x00234998: sw          $v0, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r2;
        goto L_002349AC;
    // 0x00234998: sw          $v0, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r2;
L_0023499C:
    // 0x0023499C: lw          $v0, 0xC($s5)
    ctx->r2 = MEM_W(ctx->r21, 0XC);
    // 0x002349A0: sw          $v0, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r2;
    // 0x002349A4: lw          $v0, 0xC($s5)
    ctx->r2 = MEM_W(ctx->r21, 0XC);
    // 0x002349A8: sw          $v0, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r2;
L_002349AC:
    // 0x002349AC: lw          $v0, 0x8($s5)
    ctx->r2 = MEM_W(ctx->r21, 0X8);
    // 0x002349B0: lbu         $v0, 0x21($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X21);
    // 0x002349B4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002349B8: lwc1        $f1, 0x6488($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X6488);
    // 0x002349BC: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x002349C0: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x002349C4: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x002349C8: swc1        $f0, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->f0.u32l;
    // 0x002349CC: lw          $v0, 0x8($s5)
    ctx->r2 = MEM_W(ctx->r21, 0X8);
    // 0x002349D0: lbu         $v0, 0x22($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X22);
    // 0x002349D4: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x002349D8: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x002349DC: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x002349E0: lui         $a1, 0xDA38
    ctx->r5 = S32(0XDA38 << 16);
    // 0x002349E4: ori         $a1, $a1, 0x3
    ctx->r5 = ctx->r5 | 0X3;
    // 0x002349E8: lui         $a2, 0x800E
    ctx->r6 = S32(0X800E << 16);
    // 0x002349EC: addiu       $a2, $a2, -0x71DC
    ctx->r6 = ADD32(ctx->r6, -0X71DC);
    // 0x002349F0: swc1        $f0, 0x14($v1)
    MEM_W(0X14, ctx->r3) = ctx->f0.u32l;
    // 0x002349F4: lw          $s1, 0x44($s5)
    ctx->r17 = MEM_W(ctx->r21, 0X44);
    // 0x002349F8: lw          $v1, 0x0($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X0);
    // 0x002349FC: lw          $v0, 0x8($s5)
    ctx->r2 = MEM_W(ctx->r21, 0X8);
    // 0x00234A00: addu        $a0, $v1, $zero
    ctx->r4 = ADD32(ctx->r3, 0);
    // 0x00234A04: lw          $s4, 0x0($s1)
    ctx->r20 = MEM_W(ctx->r17, 0X0);
    // 0x00234A08: lbu         $s3, 0x23($v0)
    ctx->r19 = MEM_BU(ctx->r2, 0X23);
    // 0x00234A0C: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00234A10: lw          $v0, 0x6D1C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X6D1C);
    // 0x00234A14: addiu       $v1, $v1, 0x8
    ctx->r3 = ADD32(ctx->r3, 0X8);
    // 0x00234A18: sw          $v1, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r3;
    // 0x00234A1C: sw          $a1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r5;
    // 0x00234A20: sll         $v0, $v0, 6
    ctx->r2 = S32(ctx->r2 << 6);
    // 0x00234A24: addiu       $v0, $v0, 0x28
    ctx->r2 = ADD32(ctx->r2, 0X28);
    // 0x00234A28: addu        $v0, $s1, $v0
    ctx->r2 = ADD32(ctx->r17, ctx->r2);
    // 0x00234A2C: addiu       $s6, $s3, -0x1
    ctx->r22 = ADD32(ctx->r19, -0X1);
    // 0x00234A30: beq         $s1, $zero, L_00234C58
    if (ctx->r17 == 0) {
        // 0x00234A34: sw          $v0, 0x4($a0)
        MEM_W(0X4, ctx->r4) = ctx->r2;
            goto L_00234C58;
    }
    // 0x00234A34: sw          $v0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r2;
    // 0x00234A38: beq         $s4, $zero, L_00234C58
    if (ctx->r20 == 0) {
        // 0x00234A3C: nop
    
            goto L_00234C58;
    }
    // 0x00234A3C: nop

    // 0x00234A40: mtc1        $zero, $f1
    ctx->f_odd[(1 - 1) * 2] = 0;
    // 0x00234A44: lwc1        $f0, 0x8($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X8);
    // 0x00234A48: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x00234A4C: nop

    // 0x00234A50: bc1f        L_00234C58
    if (!c1cs) {
        // 0x00234A54: addu        $s2, $a2, $zero
        ctx->r18 = ADD32(ctx->r6, 0);
            goto L_00234C58;
    }
    // 0x00234A54: addu        $s2, $a2, $zero
    ctx->r18 = ADD32(ctx->r6, 0);
    // 0x00234A58: sll         $a1, $s3, 12
    ctx->r5 = S32(ctx->r19 << 12);
    // 0x00234A5C: andi        $v0, $s3, 0x7F
    ctx->r2 = ctx->r19 & 0X7F;
    // 0x00234A60: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x00234A64: lui         $v1, 0x100
    ctx->r3 = S32(0X100 << 16);
    // 0x00234A68: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x00234A6C: or          $v0, $a1, $v0
    ctx->r2 = ctx->r5 | ctx->r2;
    // 0x00234A70: sll         $a0, $s3, 1
    ctx->r4 = S32(ctx->r19 << 1);
    // 0x00234A74: sw          $v0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r2;
    // 0x00234A78: andi        $v0, $a0, 0x7F
    ctx->r2 = ctx->r4 & 0X7F;
    // 0x00234A7C: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x00234A80: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x00234A84: or          $a1, $a1, $v0
    ctx->r5 = ctx->r5 | ctx->r2;
    // 0x00234A88: lui         $fp, 0x600
    ctx->r30 = S32(0X600 << 16);
    // 0x00234A8C: andi        $s7, $a0, 0xFF
    ctx->r23 = ctx->r4 & 0XFF;
    // 0x00234A90: sll         $t0, $s7, 8
    ctx->r8 = S32(ctx->r23 << 8);
    // 0x00234A94: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x00234A98: sw          $t0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r8;
L_00234A9C:
    // 0x00234A9C: lwc1        $f0, 0x8($s4)
    ctx->f0.u32l = MEM_W(ctx->r20, 0X8);
    // 0x00234AA0: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x00234AA4: nop

    // 0x00234AA8: bc1f        L_00234C58
    if (!c1cs) {
        // 0x00234AAC: nop
    
            goto L_00234C58;
    }
    // 0x00234AAC: nop

    // 0x00234AB0: lw          $a0, 0x70($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X70);
    // 0x00234AB4: jal         0x00235F8C
    // 0x00234AB8: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    func_00235F8C(rdram, ctx);
        goto after_0;
    // 0x00234AB8: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    after_0:
    // 0x00234ABC: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x00234AC0: beq         $s0, $zero, L_00234C58
    if (ctx->r16 == 0) {
        // 0x00234AC4: addu        $a0, $s5, $zero
        ctx->r4 = ADD32(ctx->r21, 0);
            goto L_00234C58;
    }
    // 0x00234AC4: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    // 0x00234AC8: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x00234ACC: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    // 0x00234AD0: jal         0x0023353C
    // 0x00234AD4: addiu       $a3, $sp, 0x10
    ctx->r7 = ADD32(ctx->r29, 0X10);
    func_0023353C(rdram, ctx);
        goto after_1;
    // 0x00234AD4: addiu       $a3, $sp, 0x10
    ctx->r7 = ADD32(ctx->r29, 0X10);
    after_1:
    // 0x00234AD8: lui         $a3, 0xDA38
    ctx->r7 = S32(0XDA38 << 16);
    // 0x00234ADC: ori         $a3, $a3, 0x3
    ctx->r7 = ctx->r7 | 0X3;
    // 0x00234AE0: lw          $a2, 0x0($s2)
    ctx->r6 = MEM_W(ctx->r18, 0X0);
    // 0x00234AE4: lw          $a0, 0x70($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X70);
    // 0x00234AE8: addu        $v0, $a2, $zero
    ctx->r2 = ADD32(ctx->r6, 0);
    // 0x00234AEC: addiu       $a2, $a2, 0x8
    ctx->r6 = ADD32(ctx->r6, 0X8);
    // 0x00234AF0: sw          $a2, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r6;
    // 0x00234AF4: lw          $t0, 0x38($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X38);
    // 0x00234AF8: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    // 0x00234AFC: sw          $s0, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r16;
    // 0x00234B00: sw          $t0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r8;
    // 0x00234B04: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00234B08: lw          $v0, 0x6D1C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X6D1C);
    // 0x00234B0C: addiu       $v1, $a2, 0x8
    ctx->r3 = ADD32(ctx->r6, 0X8);
    // 0x00234B10: sw          $v1, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r3;
    // 0x00234B14: sw          $a3, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r7;
    // 0x00234B18: sll         $v0, $v0, 6
    ctx->r2 = S32(ctx->r2 << 6);
    // 0x00234B1C: addiu       $v0, $v0, 0x28
    ctx->r2 = ADD32(ctx->r2, 0X28);
    // 0x00234B20: addu        $v0, $s4, $v0
    ctx->r2 = ADD32(ctx->r20, ctx->r2);
    // 0x00234B24: jal         0x00235F8C
    // 0x00234B28: sw          $v0, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r2;
    func_00235F8C(rdram, ctx);
        goto after_2;
    // 0x00234B28: sw          $v0, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r2;
    after_2:
    // 0x00234B2C: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x00234B30: beq         $s0, $zero, L_00234C58
    if (ctx->r16 == 0) {
        // 0x00234B34: addu        $a0, $s5, $zero
        ctx->r4 = ADD32(ctx->r21, 0);
            goto L_00234C58;
    }
    // 0x00234B34: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    // 0x00234B38: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    // 0x00234B3C: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    // 0x00234B40: jal         0x0023353C
    // 0x00234B44: addiu       $a3, $sp, 0x10
    ctx->r7 = ADD32(ctx->r29, 0X10);
    func_0023353C(rdram, ctx);
        goto after_3;
    // 0x00234B44: addiu       $a3, $sp, 0x10
    ctx->r7 = ADD32(ctx->r29, 0X10);
    after_3:
    // 0x00234B48: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
    // 0x00234B4C: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x00234B50: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x00234B54: sw          $v0, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r2;
    // 0x00234B58: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x00234B5C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x00234B60: sw          $s0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r16;
    // 0x00234B64: blez        $s6, L_00234BD8
    if (SIGNED(ctx->r22) <= 0) {
        // 0x00234B68: sw          $t0, 0x0($v1)
        MEM_W(0X0, ctx->r3) = ctx->r8;
            goto L_00234BD8;
    }
    // 0x00234B68: sw          $t0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r8;
L_00234B6C:
    // 0x00234B6C: sll         $a0, $a3, 1
    ctx->r4 = S32(ctx->r7 << 1);
    // 0x00234B70: addu        $v1, $s3, $a3
    ctx->r3 = ADD32(ctx->r19, ctx->r7);
    // 0x00234B74: addiu       $v0, $a3, 0x1
    ctx->r2 = ADD32(ctx->r7, 0X1);
    // 0x00234B78: addu        $a3, $v0, $zero
    ctx->r7 = ADD32(ctx->r2, 0);
    // 0x00234B7C: andi        $a0, $a0, 0xFF
    ctx->r4 = ctx->r4 & 0XFF;
    // 0x00234B80: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x00234B84: sll         $v0, $v1, 9
    ctx->r2 = S32(ctx->r3 << 9);
    // 0x00234B88: andi        $v0, $v0, 0xFE00
    ctx->r2 = ctx->r2 & 0XFE00;
    // 0x00234B8C: or          $v0, $a0, $v0
    ctx->r2 = ctx->r4 | ctx->r2;
    // 0x00234B90: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x00234B94: sll         $v1, $v1, 1
    ctx->r3 = S32(ctx->r3 << 1);
    // 0x00234B98: andi        $v1, $v1, 0xFF
    ctx->r3 = ctx->r3 & 0XFF;
    // 0x00234B9C: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x00234BA0: or          $v0, $v0, $fp
    ctx->r2 = ctx->r2 | ctx->r30;
    // 0x00234BA4: sll         $v1, $v1, 8
    ctx->r3 = S32(ctx->r3 << 8);
    // 0x00234BA8: lw          $a1, 0x0($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X0);
    // 0x00234BAC: or          $a0, $a0, $v1
    ctx->r4 = ctx->r4 | ctx->r3;
    // 0x00234BB0: addu        $a2, $a1, $zero
    ctx->r6 = ADD32(ctx->r5, 0);
    // 0x00234BB4: addiu       $a1, $a1, 0x8
    ctx->r5 = ADD32(ctx->r5, 0X8);
    // 0x00234BB8: sw          $a1, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r5;
    // 0x00234BBC: sw          $v0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r2;
    // 0x00234BC0: sll         $v0, $a3, 1
    ctx->r2 = S32(ctx->r7 << 1);
    // 0x00234BC4: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x00234BC8: or          $a0, $a0, $v0
    ctx->r4 = ctx->r4 | ctx->r2;
    // 0x00234BCC: slt         $v0, $a3, $s6
    ctx->r2 = SIGNED(ctx->r7) < SIGNED(ctx->r22) ? 1 : 0;
    // 0x00234BD0: bne         $v0, $zero, L_00234B6C
    if (ctx->r2 != 0) {
        // 0x00234BD4: sw          $a0, 0x4($a2)
        MEM_W(0X4, ctx->r6) = ctx->r4;
            goto L_00234B6C;
    }
    // 0x00234BD4: sw          $a0, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r4;
L_00234BD8:
    // 0x00234BD8: lw          $v0, 0x8($s5)
    ctx->r2 = MEM_W(ctx->r21, 0X8);
    // 0x00234BDC: lbu         $v0, 0x12($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X12);
    // 0x00234BE0: beq         $v0, $zero, L_00234C28
    if (ctx->r2 == 0) {
        // 0x00234BE4: sll         $v1, $a3, 1
        ctx->r3 = S32(ctx->r7 << 1);
            goto L_00234C28;
    }
    // 0x00234BE4: sll         $v1, $a3, 1
    ctx->r3 = S32(ctx->r7 << 1);
    // 0x00234BE8: andi        $v1, $v1, 0xFF
    ctx->r3 = ctx->r3 & 0XFF;
    // 0x00234BEC: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
    // 0x00234BF0: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x00234BF4: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x00234BF8: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x00234BFC: sw          $v0, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r2;
    // 0x00234C00: addu        $v0, $s3, $a3
    ctx->r2 = ADD32(ctx->r19, ctx->r7);
    // 0x00234C04: sll         $v0, $v0, 9
    ctx->r2 = S32(ctx->r2 << 9);
    // 0x00234C08: andi        $v0, $v0, 0xFE00
    ctx->r2 = ctx->r2 & 0XFE00;
    // 0x00234C0C: or          $v0, $v1, $v0
    ctx->r2 = ctx->r3 | ctx->r2;
    // 0x00234C10: or          $v0, $v0, $s7
    ctx->r2 = ctx->r2 | ctx->r23;
    // 0x00234C14: or          $v0, $v0, $fp
    ctx->r2 = ctx->r2 | ctx->r30;
    // 0x00234C18: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
    // 0x00234C1C: lw          $t0, 0x40($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X40);
    // 0x00234C20: or          $v1, $v1, $t0
    ctx->r3 = ctx->r3 | ctx->r8;
    // 0x00234C24: sw          $v1, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r3;
L_00234C28:
    // 0x00234C28: addu        $s1, $s4, $zero
    ctx->r17 = ADD32(ctx->r20, 0);
    // 0x00234C2C: lw          $s4, 0x0($s1)
    ctx->r20 = MEM_W(ctx->r17, 0X0);
    // 0x00234C30: beq         $s1, $zero, L_00234C58
    if (ctx->r17 == 0) {
        // 0x00234C34: nop
    
            goto L_00234C58;
    }
    // 0x00234C34: nop

    // 0x00234C38: beq         $s4, $zero, L_00234C58
    if (ctx->r20 == 0) {
        // 0x00234C3C: nop
    
            goto L_00234C58;
    }
    // 0x00234C3C: nop

    // 0x00234C40: mtc1        $zero, $f1
    ctx->f_odd[(1 - 1) * 2] = 0;
    // 0x00234C44: lwc1        $f0, 0x8($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X8);
    // 0x00234C48: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x00234C4C: nop

    // 0x00234C50: bc1t        L_00234A9C
    if (c1cs) {
        // 0x00234C54: nop
    
            goto L_00234A9C;
    }
    // 0x00234C54: nop

L_00234C58:
    // 0x00234C58: lw          $ra, 0x6C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X6C);
    // 0x00234C5C: lw          $fp, 0x68($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X68);
    // 0x00234C60: lw          $s7, 0x64($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X64);
    // 0x00234C64: lw          $s6, 0x60($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X60);
    // 0x00234C68: lw          $s5, 0x5C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X5C);
    // 0x00234C6C: lw          $s4, 0x58($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X58);
    // 0x00234C70: lw          $s3, 0x54($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X54);
    // 0x00234C74: lw          $s2, 0x50($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X50);
    // 0x00234C78: lw          $s1, 0x4C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X4C);
    // 0x00234C7C: lw          $s0, 0x48($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X48);
    // 0x00234C80: jr          $ra
    // 0x00234C84: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    return;
    // 0x00234C84: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
;}
RECOMP_FUNC void func_0023EFCC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0023EFCC: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x0023EFD0: addiu       $v1, $v1, -0x27F0
    ctx->r3 = ADD32(ctx->r3, -0X27F0);
    // 0x0023EFD4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x0023EFD8: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
L_0023EFDC:
    // 0x0023EFDC: lh          $v0, 0x4($v1)
    ctx->r2 = MEM_H(ctx->r3, 0X4);
    // 0x0023EFE0: bne         $v0, $a0, L_0023EFF0
    if (ctx->r2 != ctx->r4) {
        // 0x0023EFE4: addiu       $a1, $a1, -0x1
        ctx->r5 = ADD32(ctx->r5, -0X1);
            goto L_0023EFF0;
    }
    // 0x0023EFE4: addiu       $a1, $a1, -0x1
    ctx->r5 = ADD32(ctx->r5, -0X1);
    // 0x0023EFE8: jr          $ra
    // 0x0023EFEC: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
    return;
    // 0x0023EFEC: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
L_0023EFF0:
    // 0x0023EFF0: bne         $a1, $a2, L_0023EFDC
    if (ctx->r5 != ctx->r6) {
        // 0x0023EFF4: addiu       $v1, $v1, 0x14
        ctx->r3 = ADD32(ctx->r3, 0X14);
            goto L_0023EFDC;
    }
    // 0x0023EFF4: addiu       $v1, $v1, 0x14
    ctx->r3 = ADD32(ctx->r3, 0X14);
    // 0x0023EFF8: jr          $ra
    // 0x0023EFFC: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x0023EFFC: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void func_0024EAF8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0024EAF8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x0024EAFC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0024EB00: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x0024EB04: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x0024EB08: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x0024EB0C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x0024EB10: lw          $v0, 0xBB0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XBB0);
    // 0x0024EB14: bne         $v0, $zero, L_0024ED38
    if (ctx->r2 != 0) {
        // 0x0024EB18: addu        $s2, $a1, $zero
        ctx->r18 = ADD32(ctx->r5, 0);
            goto L_0024ED38;
    }
    // 0x0024EB18: addu        $s2, $a1, $zero
    ctx->r18 = ADD32(ctx->r5, 0);
    // 0x0024EB1C: lw          $v0, 0xA18($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XA18);
    // 0x0024EB20: andi        $v0, $v0, 0x8000
    ctx->r2 = ctx->r2 & 0X8000;
    // 0x0024EB24: bne         $v0, $zero, L_0024ED3C
    if (ctx->r2 != 0) {
        // 0x0024EB28: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_0024ED3C;
    }
    // 0x0024EB28: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x0024EB2C: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x0024EB30: lw          $a0, 0x1CE0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1CE0);
    // 0x0024EB34: beq         $a0, $zero, L_0024ED38
    if (ctx->r4 == 0) {
        // 0x0024EB38: addu        $v0, $a0, $zero
        ctx->r2 = ADD32(ctx->r4, 0);
            goto L_0024ED38;
    }
    // 0x0024EB38: addu        $v0, $a0, $zero
    ctx->r2 = ADD32(ctx->r4, 0);
    // 0x0024EB3C: lbu         $v1, 0x0($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X0);
    // 0x0024EB40: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0024EB44: bne         $v1, $v0, L_0024ED3C
    if (ctx->r3 != ctx->r2) {
        // 0x0024EB48: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_0024ED3C;
    }
    // 0x0024EB48: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x0024EB4C: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x0024EB50: lhu         $v1, 0xB8($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0XB8);
    // 0x0024EB54: addiu       $v0, $zero, 0x136
    ctx->r2 = ADD32(0, 0X136);
    // 0x0024EB58: bne         $v1, $v0, L_0024ED3C
    if (ctx->r3 != ctx->r2) {
        // 0x0024EB5C: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_0024ED3C;
    }
    // 0x0024EB5C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x0024EB60: lw          $a1, 0x4($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X4);
    // 0x0024EB64: lw          $a2, 0x8($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X8);
    // 0x0024EB68: lw          $a3, 0xC($s1)
    ctx->r7 = MEM_W(ctx->r17, 0XC);
    // 0x0024EB6C: jal         0x00246310
    // 0x0024EB70: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_00246310(rdram, ctx);
        goto after_0;
    // 0x0024EB70: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_0:
    // 0x0024EB74: mtc1        $zero, $f1
    ctx->f_odd[(1 - 1) * 2] = 0;
    // 0x0024EB78: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x0024EB7C: nop

    // 0x0024EB80: bc1f        L_0024EBC0
    if (!c1cs) {
        // 0x0024EB84: nop
    
            goto L_0024EBC0;
    }
    // 0x0024EB84: nop

    // 0x0024EB88: lw          $a1, 0x4($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X4);
    // 0x0024EB8C: lw          $a2, 0x8($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X8);
    // 0x0024EB90: lw          $a3, 0xC($s1)
    ctx->r7 = MEM_W(ctx->r17, 0XC);
    // 0x0024EB94: jal         0x00246310
    // 0x0024EB98: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_00246310(rdram, ctx);
        goto after_1;
    // 0x0024EB98: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_1:
    // 0x0024EB9C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0024EBA0: lwc1        $f1, 0x6D78($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X6D78);
    // 0x0024EBA4: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x0024EBA8: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x0024EBAC: nop

    // 0x0024EBB0: bc1t        L_0024EBEC
    if (c1cs) {
        // 0x0024EBB4: addiu       $a0, $s0, 0xBB8
        ctx->r4 = ADD32(ctx->r16, 0XBB8);
            goto L_0024EBEC;
    }
    // 0x0024EBB4: addiu       $a0, $s0, 0xBB8
    ctx->r4 = ADD32(ctx->r16, 0XBB8);
    // 0x0024EBB8: j           L_0024ED3C
    // 0x0024EBBC: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
        goto L_0024ED3C;
    // 0x0024EBBC: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_0024EBC0:
    // 0x0024EBC0: lw          $a1, 0x4($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X4);
    // 0x0024EBC4: lw          $a2, 0x8($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X8);
    // 0x0024EBC8: lw          $a3, 0xC($s1)
    ctx->r7 = MEM_W(ctx->r17, 0XC);
    // 0x0024EBCC: jal         0x00246310
    // 0x0024EBD0: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_00246310(rdram, ctx);
        goto after_2;
    // 0x0024EBD0: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_2:
    // 0x0024EBD4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0024EBD8: lwc1        $f1, 0x6D7C($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X6D7C);
    // 0x0024EBDC: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x0024EBE0: nop

    // 0x0024EBE4: bc1f        L_0024ED38
    if (!c1cs) {
        // 0x0024EBE8: addiu       $a0, $s0, 0xBB8
        ctx->r4 = ADD32(ctx->r16, 0XBB8);
            goto L_0024ED38;
    }
    // 0x0024EBE8: addiu       $a0, $s0, 0xBB8
    ctx->r4 = ADD32(ctx->r16, 0XBB8);
L_0024EBEC:
    // 0x0024EBEC: lui         $a2, 0x3CF5
    ctx->r6 = S32(0X3CF5 << 16);
    // 0x0024EBF0: ori         $a2, $a2, 0xC28F
    ctx->r6 = ctx->r6 | 0XC28F;
    // 0x0024EBF4: addiu       $v0, $zero, 0x136
    ctx->r2 = ADD32(0, 0X136);
    // 0x0024EBF8: sw          $s1, 0xBB0($s0)
    MEM_W(0XBB0, ctx->r16) = ctx->r17;
    // 0x0024EBFC: sw          $v0, 0xBB4($s0)
    MEM_W(0XBB4, ctx->r16) = ctx->r2;
    // 0x0024EC00: lui         $t3, 0x800B
    ctx->r11 = S32(0X800B << 16);
    // 0x0024EC04: addiu       $t3, $t3, -0x2344
    ctx->r11 = ADD32(ctx->r11, -0X2344);
    // 0x0024EC08: lw          $t0, 0x0($t3)
    ctx->r8 = MEM_W(ctx->r11, 0X0);
    // 0x0024EC0C: lw          $t1, 0x4($t3)
    ctx->r9 = MEM_W(ctx->r11, 0X4);
    // 0x0024EC10: lw          $t2, 0x8($t3)
    ctx->r10 = MEM_W(ctx->r11, 0X8);
    // 0x0024EC14: sw          $t0, 0xBB8($s0)
    MEM_W(0XBB8, ctx->r16) = ctx->r8;
    // 0x0024EC18: sw          $t1, 0xBBC($s0)
    MEM_W(0XBBC, ctx->r16) = ctx->r9;
    // 0x0024EC1C: sw          $t2, 0xBC0($s0)
    MEM_W(0XBC0, ctx->r16) = ctx->r10;
    // 0x0024EC20: jal         0x0020EF60
    // 0x0024EC24: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    func_0020EF60(rdram, ctx);
        goto after_3;
    // 0x0024EC24: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    after_3:
    // 0x0024EC28: lwc1        $f0, 0x50($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X50);
    // 0x0024EC2C: swc1        $f0, 0x50($s2)
    MEM_W(0X50, ctx->r18) = ctx->f0.u32l;
    // 0x0024EC30: lw          $v0, 0x514($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X514);
    // 0x0024EC34: addiu       $a0, $s0, 0xA40
    ctx->r4 = ADD32(ctx->r16, 0XA40);
    // 0x0024EC38: sll         $a1, $v0, 4
    ctx->r5 = S32(ctx->r2 << 4);
    // 0x0024EC3C: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    // 0x0024EC40: sll         $a1, $a1, 3
    ctx->r5 = S32(ctx->r5 << 3);
    // 0x0024EC44: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    // 0x0024EC48: sll         $a1, $a1, 2
    ctx->r5 = S32(ctx->r5 << 2);
    // 0x0024EC4C: lui         $v0, 0x800F
    ctx->r2 = S32(0X800F << 16);
    // 0x0024EC50: addiu       $v0, $v0, 0x5EC0
    ctx->r2 = ADD32(ctx->r2, 0X5EC0);
    // 0x0024EC54: jal         0x002470E8
    // 0x0024EC58: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    func_002470E8(rdram, ctx);
        goto after_4;
    // 0x0024EC58: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    after_4:
    // 0x0024EC5C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0024EC60: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0024EC64: sw          $zero, 0xA78($s0)
    MEM_W(0XA78, ctx->r16) = 0;
    // 0x0024EC68: sw          $zero, 0xA7C($s0)
    MEM_W(0XA7C, ctx->r16) = 0;
    // 0x0024EC6C: sw          $zero, 0xA80($s0)
    MEM_W(0XA80, ctx->r16) = 0;
    // 0x0024EC70: sw          $zero, 0xA84($s0)
    MEM_W(0XA84, ctx->r16) = 0;
    // 0x0024EC74: sw          $v0, 0xA88($s0)
    MEM_W(0XA88, ctx->r16) = ctx->r2;
    // 0x0024EC78: sw          $zero, 0xA8C($s0)
    MEM_W(0XA8C, ctx->r16) = 0;
    // 0x0024EC7C: sw          $zero, 0xA90($s0)
    MEM_W(0XA90, ctx->r16) = 0;
    // 0x0024EC80: sw          $zero, 0xA94($s0)
    MEM_W(0XA94, ctx->r16) = 0;
    // 0x0024EC84: sw          $zero, 0xA9C($s0)
    MEM_W(0XA9C, ctx->r16) = 0;
    // 0x0024EC88: sw          $zero, 0xAFC($s0)
    MEM_W(0XAFC, ctx->r16) = 0;
    // 0x0024EC8C: sw          $zero, 0xB00($s0)
    MEM_W(0XB00, ctx->r16) = 0;
    // 0x0024EC90: sw          $zero, 0x1284($s0)
    MEM_W(0X1284, ctx->r16) = 0;
    // 0x0024EC94: sw          $zero, 0xAB0($s0)
    MEM_W(0XAB0, ctx->r16) = 0;
    // 0x0024EC98: sw          $zero, 0xAB4($s0)
    MEM_W(0XAB4, ctx->r16) = 0;
    // 0x0024EC9C: sw          $zero, 0xAB8($s0)
    MEM_W(0XAB8, ctx->r16) = 0;
    // 0x0024ECA0: sw          $zero, 0xABC($s0)
    MEM_W(0XABC, ctx->r16) = 0;
    // 0x0024ECA4: sw          $zero, 0xAC8($s0)
    MEM_W(0XAC8, ctx->r16) = 0;
    // 0x0024ECA8: sw          $zero, 0xACC($s0)
    MEM_W(0XACC, ctx->r16) = 0;
    // 0x0024ECAC: sw          $zero, 0xAD0($s0)
    MEM_W(0XAD0, ctx->r16) = 0;
    // 0x0024ECB0: sw          $zero, 0xAD4($s0)
    MEM_W(0XAD4, ctx->r16) = 0;
    // 0x0024ECB4: sw          $zero, 0xAD8($s0)
    MEM_W(0XAD8, ctx->r16) = 0;
    // 0x0024ECB8: sw          $zero, 0xADC($s0)
    MEM_W(0XADC, ctx->r16) = 0;
    // 0x0024ECBC: jal         0x00253CFC
    // 0x0024ECC0: sw          $zero, 0xAE0($s0)
    MEM_W(0XAE0, ctx->r16) = 0;
    func_00253CFC(rdram, ctx);
        goto after_5;
    // 0x0024ECC0: sw          $zero, 0xAE0($s0)
    MEM_W(0XAE0, ctx->r16) = 0;
    after_5:
    // 0x0024ECC4: swc1        $f0, 0xAE4($s0)
    MEM_W(0XAE4, ctx->r16) = ctx->f0.u32l;
    // 0x0024ECC8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0024ECCC: lwc1        $f0, 0x6D80($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6D80);
    // 0x0024ECD0: addiu       $v0, $s0, 0xAEC
    ctx->r2 = ADD32(ctx->r16, 0XAEC);
    // 0x0024ECD4: sw          $zero, 0xAE8($s0)
    MEM_W(0XAE8, ctx->r16) = 0;
    // 0x0024ECD8: sw          $zero, 0x8($v0)
    MEM_W(0X8, ctx->r2) = 0;
    // 0x0024ECDC: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x0024ECE0: sw          $zero, 0xAEC($s0)
    MEM_W(0XAEC, ctx->r16) = 0;
    // 0x0024ECE4: sw          $zero, 0xB24($s0)
    MEM_W(0XB24, ctx->r16) = 0;
    // 0x0024ECE8: swc1        $f0, 0xAF8($s0)
    MEM_W(0XAF8, ctx->r16) = ctx->f0.u32l;
    // 0x0024ECEC: swc1        $f0, 0xB28($s0)
    MEM_W(0XB28, ctx->r16) = ctx->f0.u32l;
    // 0x0024ECF0: lw          $t0, 0x4($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X4);
    // 0x0024ECF4: lw          $t1, 0x8($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X8);
    // 0x0024ECF8: lw          $t2, 0xC($s0)
    ctx->r10 = MEM_W(ctx->r16, 0XC);
    // 0x0024ECFC: sw          $t0, 0xAA0($s0)
    MEM_W(0XAA0, ctx->r16) = ctx->r8;
    // 0x0024ED00: sw          $t1, 0xAA4($s0)
    MEM_W(0XAA4, ctx->r16) = ctx->r9;
    // 0x0024ED04: sw          $t2, 0xAA8($s0)
    MEM_W(0XAA8, ctx->r16) = ctx->r10;
    // 0x0024ED08: jal         0x00206068
    // 0x0024ED0C: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    func_00206068(rdram, ctx);
        goto after_6;
    // 0x0024ED0C: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    after_6:
    // 0x0024ED10: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0024ED14: addiu       $a1, $a0, 0x140
    ctx->r5 = ADD32(ctx->r4, 0X140);
    // 0x0024ED18: jal         0x0025EB80
    // 0x0024ED1C: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    func_0025EB80(rdram, ctx);
        goto after_7;
    // 0x0024ED1C: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    after_7:
    // 0x0024ED20: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0024ED24: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x0024ED28: jal         0x0024E5F0
    // 0x0024ED2C: addiu       $a2, $zero, 0x21
    ctx->r6 = ADD32(0, 0X21);
    func_0024E5F0(rdram, ctx);
        goto after_8;
    // 0x0024ED2C: addiu       $a2, $zero, 0x21
    ctx->r6 = ADD32(0, 0X21);
    after_8:
    // 0x0024ED30: j           L_0024ED3C
    // 0x0024ED34: nop

        goto L_0024ED3C;
    // 0x0024ED34: nop

L_0024ED38:
    // 0x0024ED38: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_0024ED3C:
    // 0x0024ED3C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x0024ED40: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x0024ED44: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x0024ED48: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0024ED4C: jr          $ra
    // 0x0024ED50: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x0024ED50: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_0041A140(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041A140: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x0041A144: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x0041A148: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x0041A14C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0041A150: addu        $s0, $a2, $zero
    ctx->r16 = ADD32(ctx->r6, 0);
    // 0x0041A154: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x0041A158: jal         0x00275904
    // 0x0041A15C: addiu       $a0, $zero, 0x12C
    ctx->r4 = ADD32(0, 0X12C);
    func_00275904(rdram, ctx);
        goto after_0;
    // 0x0041A15C: addiu       $a0, $zero, 0x12C
    ctx->r4 = ADD32(0, 0X12C);
    after_0:
    // 0x0041A160: jal         0x00275A98
    // 0x0041A164: nop

    func_00275A98(rdram, ctx);
        goto after_1;
    // 0x0041A164: nop

    after_1:
    // 0x0041A168: jal         0x002759B4
    // 0x0041A16C: nop

    func_002759B4(rdram, ctx);
        goto after_2;
    // 0x0041A16C: nop

    after_2:
    // 0x0041A170: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x0041A174: lw          $a0, 0x1F78($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1F78);
    // 0x0041A178: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0041A17C: sw          $v0, 0x1F70($at)
    MEM_W(0X1F70, ctx->r1) = ctx->r2;
    // 0x0041A180: jal         0x002759C4
    // 0x0041A184: nop

    func_002759C4(rdram, ctx);
        goto after_3;
    // 0x0041A184: nop

    after_3:
    // 0x0041A188: jal         0x00275A74
    // 0x0041A18C: nop

    func_00275A74(rdram, ctx);
        goto after_4;
    // 0x0041A18C: nop

    after_4:
    // 0x0041A190: jal         0x0027598C
    // 0x0041A194: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_0027598C(rdram, ctx);
        goto after_5;
    // 0x0041A194: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_5:
    // 0x0041A198: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0041A19C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0041A1A0: sw          $v0, 0x1F74($at)
    MEM_W(0X1F74, ctx->r1) = ctx->r2;
    // 0x0041A1A4: jal         0x00285CC4
    // 0x0041A1A8: nop

    func_00285CC4(rdram, ctx);
        goto after_6;
    // 0x0041A1A8: nop

    after_6:
    // 0x0041A1AC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0041A1B0: lui         $a2, 0x44
    ctx->r6 = S32(0X44 << 16);
    // 0x0041A1B4: addiu       $a2, $a2, -0x6B4C
    ctx->r6 = ADD32(ctx->r6, -0X6B4C);
    // 0x0041A1B8: jal         0x00416894
    // 0x0041A1BC: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_00416894(rdram, ctx);
        goto after_7;
    // 0x0041A1BC: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_7:
    // 0x0041A1C0: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x0041A1C4: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x0041A1C8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0041A1CC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0041A1D0: jr          $ra
    // 0x0041A1D4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x0041A1D4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_00424508(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00424508: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0042450C: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x00424510: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00424514: sw          $a0, 0x2038($at)
    MEM_W(0X2038, ctx->r1) = ctx->r4;
    // 0x00424518: jal         0x00423E10
    // 0x0042451C: nop

    func_00423E10(rdram, ctx);
        goto after_0;
    // 0x0042451C: nop

    after_0:
    // 0x00424520: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x00424524: jr          $ra
    // 0x00424528: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00424528: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0025AC5C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0025AC5C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0025AC60: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x0025AC64: lw          $v0, 0x14($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X14);
    // 0x0025AC68: lhu         $a3, 0x78($v0)
    ctx->r7 = MEM_HU(ctx->r2, 0X78);
    // 0x0025AC6C: lui         $a2, 0x800B
    ctx->r6 = S32(0X800B << 16);
    // 0x0025AC70: addiu       $a2, $a2, 0x5A0
    ctx->r6 = ADD32(ctx->r6, 0X5A0);
    // 0x0025AC74: jal         0x00245A98
    // 0x0025AC78: nop

    func_00245A98(rdram, ctx);
        goto after_0;
    // 0x0025AC78: nop

    after_0:
    // 0x0025AC7C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x0025AC80: jr          $ra
    // 0x0025AC84: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0025AC84: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0026D228(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0026D228: jal         0x0020D908
    // 0x0026D22C: addu        $a1, $s0, $a1
    ctx->r5 = ADD32(ctx->r16, ctx->r5);
    func_0020D908(rdram, ctx);
        goto after_0;
    // 0x0026D22C: addu        $a1, $s0, $a1
    ctx->r5 = ADD32(ctx->r16, ctx->r5);
    after_0:
    // turok2: reconnected split function: a stray ELF symbol at 0x0026D230 ended
    // this function early, leaving it without its epilogue. On the
    // hardware execution simply continues into the next instruction.
    func_0026D230(rdram, ctx);
;}
RECOMP_FUNC void func_00273B90(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00273B90: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00273B94: sll         $a1, $a1, 16
    ctx->r5 = S32(ctx->r5 << 16);
    // 0x00273B98: sra         $a1, $a1, 16
    ctx->r5 = S32(SIGNED(ctx->r5) >> 16);
    // 0x00273B9C: sll         $v0, $a1, 1
    ctx->r2 = S32(ctx->r5 << 1);
    // 0x00273BA0: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x00273BA4: sll         $v1, $v0, 4
    ctx->r3 = S32(ctx->r2 << 4);
    // 0x00273BA8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x00273BAC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x00273BB0: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x00273BB4: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x00273BB8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x00273BBC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00273BC0: lw          $v1, 0xB0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0XB0);
    // 0x00273BC4: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x00273BC8: addiu       $s0, $v1, 0x84
    ctx->r16 = ADD32(ctx->r3, 0X84);
    // 0x00273BCC: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x00273BD0: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x00273BD4: lh          $a1, 0xDC($v1)
    ctx->r5 = MEM_H(ctx->r3, 0XDC);
    // 0x00273BD8: jal         0x00293E60
    // 0x00273BDC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00293E60(rdram, ctx);
        goto after_0;
    // 0x00273BDC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x00273BE0: jal         0x00293580
    // 0x00273BE4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00293580(rdram, ctx);
        goto after_1;
    // 0x00273BE4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x00273BE8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x00273BEC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00273BF0: jr          $ra
    // 0x00273BF4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00273BF4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0042C480(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0042C480: bne         $v0, $zero, L_0042C4A8
    if (ctx->r2 != 0) {
        // 0x0042C484: nop
    
            goto L_0042C4A8;
    }
    // 0x0042C484: nop

    // 0x0042C488: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x0042C48C: addiu       $a0, $a0, 0x1CD8
    ctx->r4 = ADD32(ctx->r4, 0X1CD8);
    // 0x0042C490: lw          $a1, 0x2C($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X2C);
    // 0x0042C494: lw          $a2, 0x34($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X34);
    // 0x0042C498: lui         $a3, 0x800E
    ctx->r7 = S32(0X800E << 16);
    // 0x0042C49C: addiu       $a3, $a3, 0x6AC0
    ctx->r7 = ADD32(ctx->r7, 0X6AC0);
    // 0x0042C4A0: jal         0x00201DBC
    // 0x0042C4A4: nop

    func_00201DBC(rdram, ctx);
        goto after_0;
    // 0x0042C4A4: nop

    after_0:
L_0042C4A8:
    // 0x0042C4A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x0042C4AC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0042C4B0: jr          $ra
    // 0x0042C4B4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0042C4B4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0045DE70(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0045DE70: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x0045DE74: lw          $a0, 0x48($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X48);
    // 0x0045DE78: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0045DE7C: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x0045DE80: jal         0x0026EFB8
    // 0x0045DE84: nop

    func_0026EFB8(rdram, ctx);
        goto after_0;
    // 0x0045DE84: nop

    after_0:
    // 0x0045DE88: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x0045DE8C: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0045DE90: sw          $v0, 0xA30($at)
    MEM_W(0XA30, ctx->r1) = ctx->r2;
    // 0x0045DE94: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0045DE98: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0045DE9C: sw          $v0, 0xA34($at)
    MEM_W(0XA34, ctx->r1) = ctx->r2;
    // 0x0045DEA0: jr          $ra
    // 0x0045DEA4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0045DEA4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00450D10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00450D10: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x00450D14: addu        $a1, $a2, $zero
    ctx->r5 = ADD32(ctx->r6, 0);
    // 0x00450D18: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x00450D1C: addiu       $a0, $a0, -0x5528
    ctx->r4 = ADD32(ctx->r4, -0X5528);
    // 0x00450D20: addu        $v1, $a2, $zero
    ctx->r3 = ADD32(ctx->r6, 0);
L_00450D24:
    // 0x00450D24: lui         $at, 0x800F
    ctx->r1 = S32(0X800F << 16);
    // 0x00450D28: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x00450D2C: lw          $v0, 0x5EC0($at)
    ctx->r2 = MEM_W(ctx->r1, 0X5EC0);
    // 0x00450D30: beql        $v0, $zero, L_00450D50
    if (ctx->r2 == 0) {
        // 0x00450D34: addiu       $a0, $a0, 0x40
        ctx->r4 = ADD32(ctx->r4, 0X40);
            goto L_00450D50;
    }
    goto skip_0;
    // 0x00450D34: addiu       $a0, $a0, 0x40
    ctx->r4 = ADD32(ctx->r4, 0X40);
    skip_0:
    // 0x00450D38: lbu         $v0, 0xA8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XA8);
    // 0x00450D3C: bne         $v0, $zero, L_00450D4C
    if (ctx->r2 != 0) {
        // 0x00450D40: addiu       $a2, $a2, 0x1
        ctx->r6 = ADD32(ctx->r6, 0X1);
            goto L_00450D4C;
    }
    // 0x00450D40: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x00450D44: jr          $ra
    // 0x00450D48: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x00450D48: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_00450D4C:
    // 0x00450D4C: addiu       $a0, $a0, 0x40
    ctx->r4 = ADD32(ctx->r4, 0X40);
L_00450D50:
    // 0x00450D50: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x00450D54: slti        $v0, $a1, 0x4
    ctx->r2 = SIGNED(ctx->r5) < 0X4 ? 1 : 0;
    // 0x00450D58: bne         $v0, $zero, L_00450D24
    if (ctx->r2 != 0) {
        // 0x00450D5C: addiu       $v1, $v1, 0x224
        ctx->r3 = ADD32(ctx->r3, 0X224);
            goto L_00450D24;
    }
    // 0x00450D5C: addiu       $v1, $v1, 0x224
    ctx->r3 = ADD32(ctx->r3, 0X224);
    // 0x00450D60: jr          $ra
    // 0x00450D64: addu        $v0, $a2, $zero
    ctx->r2 = ADD32(ctx->r6, 0);
    return;
    // 0x00450D64: addu        $v0, $a2, $zero
    ctx->r2 = ADD32(ctx->r6, 0);
;}
RECOMP_FUNC void func_002589CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002589CC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x002589D0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x002589D4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x002589D8: lw          $a0, 0x1A8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1A8);
    // 0x002589DC: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x002589E0: lh          $v0, 0x996($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X996);
    // 0x002589E4: lh          $a2, 0xB14($a0)
    ctx->r6 = MEM_H(ctx->r4, 0XB14);
    // 0x002589E8: lhu         $a1, 0xB14($a0)
    ctx->r5 = MEM_HU(ctx->r4, 0XB14);
    // 0x002589EC: bne         $v0, $a2, L_00258A08
    if (ctx->r2 != ctx->r6) {
        // 0x002589F0: sll         $v0, $a2, 2
        ctx->r2 = S32(ctx->r6 << 2);
            goto L_00258A08;
    }
    // 0x002589F0: sll         $v0, $a2, 2
    ctx->r2 = S32(ctx->r6 << 2);
    // 0x002589F4: lui         $v1, 0x800F
    ctx->r3 = S32(0X800F << 16);
    // 0x002589F8: lw          $v1, 0x7078($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X7078);
    // 0x002589FC: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x00258A00: beq         $v1, $v0, L_00258A88
    if (ctx->r3 == ctx->r2) {
        // 0x00258A04: sll         $v0, $a2, 2
        ctx->r2 = S32(ctx->r6 << 2);
            goto L_00258A88;
    }
    // 0x00258A04: sll         $v0, $a2, 2
    ctx->r2 = S32(ctx->r6 << 2);
L_00258A08:
    // 0x00258A08: sh          $a1, 0x996($a0)
    MEM_H(0X996, ctx->r4) = ctx->r5;
    // 0x00258A0C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00258A10: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x00258A14: lw          $v0, -0x9E8($at)
    ctx->r2 = MEM_W(ctx->r1, -0X9E8);
    // 0x00258A18: lw          $v0, 0x48($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X48);
    // 0x00258A1C: sw          $v0, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->r2;
    // 0x00258A20: lh          $v0, 0x996($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X996);
    // 0x00258A24: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x00258A28: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00258A2C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x00258A30: lw          $v0, -0x9E8($at)
    ctx->r2 = MEM_W(ctx->r1, -0X9E8);
    // 0x00258A34: lw          $v1, 0x4C($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X4C);
    // 0x00258A38: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00258A3C: lw          $v0, 0x6D20($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X6D20);
    // 0x00258A40: sltiu       $v0, $v0, 0x5
    ctx->r2 = ctx->r2 < 0X5 ? 1 : 0;
    // 0x00258A44: bne         $v0, $zero, L_00258A78
    if (ctx->r2 != 0) {
        // 0x00258A48: sw          $v1, 0x108($s0)
        MEM_W(0X108, ctx->r16) = ctx->r3;
            goto L_00258A78;
    }
    // 0x00258A48: sw          $v1, 0x108($s0)
    MEM_W(0X108, ctx->r16) = ctx->r3;
    // 0x00258A4C: lh          $v0, 0x996($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X996);
    // 0x00258A50: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x00258A54: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00258A58: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x00258A5C: lw          $v0, -0x9E8($at)
    ctx->r2 = MEM_W(ctx->r1, -0X9E8);
    // 0x00258A60: lw          $a1, 0x51C($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X51C);
    // 0x00258A64: lw          $a2, 0x0($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X0);
    // 0x00258A68: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x00258A6C: addiu       $a0, $a0, -0x6750
    ctx->r4 = ADD32(ctx->r4, -0X6750);
    // 0x00258A70: jal         0x0027FC2C
    // 0x00258A74: nop

    func_0027FC2C(rdram, ctx);
        goto after_0;
    // 0x00258A74: nop

    after_0:
L_00258A78:
    // 0x00258A78: sw          $zero, 0x10C($s0)
    MEM_W(0X10C, ctx->r16) = 0;
    // 0x00258A7C: sw          $zero, 0x110($s0)
    MEM_W(0X110, ctx->r16) = 0;
    // 0x00258A80: sw          $zero, 0x128($s0)
    MEM_W(0X128, ctx->r16) = 0;
    // 0x00258A84: sw          $zero, 0x118($s0)
    MEM_W(0X118, ctx->r16) = 0;
L_00258A88:
    // 0x00258A88: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x00258A8C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00258A90: jr          $ra
    // 0x00258A94: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00258A94: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0040FD6C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0040FD6C: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x0040FD70: sw          $s3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r19;
    // 0x0040FD74: lui         $s3, 0x8012
    ctx->r19 = S32(0X8012 << 16);
    // 0x0040FD78: lw          $s3, -0x6770($s3)
    ctx->r19 = MEM_W(ctx->r19, -0X6770);
    // 0x0040FD7C: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x0040FD80: lw          $v1, 0x1BB0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X1BB0);
    // 0x0040FD84: sw          $s4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r20;
    // 0x0040FD88: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x0040FD8C: lui         $s0, 0x800F
    ctx->r16 = S32(0X800F << 16);
    // 0x0040FD90: addiu       $s0, $s0, 0x7078
    ctx->r16 = ADD32(ctx->r16, 0X7078);
    // 0x0040FD94: sw          $ra, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r31;
    // 0x0040FD98: sw          $s5, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r21;
    // 0x0040FD9C: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x0040FDA0: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x0040FDA4: sdc1        $f20, 0x48($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X48, ctx->r29);
    // 0x0040FDA8: lw          $v0, 0x24($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X24);
    // 0x0040FDAC: lw          $s5, 0x58($v1)
    ctx->r21 = MEM_W(ctx->r3, 0X58);
    // 0x0040FDB0: beq         $v0, $zero, L_0040FDC4
    if (ctx->r2 == 0) {
        // 0x0040FDB4: addu        $s4, $a0, $zero
        ctx->r20 = ADD32(ctx->r4, 0);
            goto L_0040FDC4;
    }
    // 0x0040FDB4: addu        $s4, $a0, $zero
    ctx->r20 = ADD32(ctx->r4, 0);
    // 0x0040FDB8: lw          $v0, 0x60($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X60);
    // 0x0040FDBC: bne         $v0, $zero, L_0040FDCC
    if (ctx->r2 != 0) {
        // 0x0040FDC0: nop
    
            goto L_0040FDCC;
    }
    // 0x0040FDC0: nop

L_0040FDC4:
    // 0x0040FDC4: j           L_00410190
    // 0x0040FDC8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
        goto L_00410190;
    // 0x0040FDC8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_0040FDCC:
    // 0x0040FDCC: lw          $v0, 0x38($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X38);
    // 0x0040FDD0: beq         $v0, $zero, L_0040FDE4
    if (ctx->r2 == 0) {
        // 0x0040FDD4: addiu       $a2, $s4, 0x1
        ctx->r6 = ADD32(ctx->r20, 0X1);
            goto L_0040FDE4;
    }
    // 0x0040FDD4: addiu       $a2, $s4, 0x1
    ctx->r6 = ADD32(ctx->r20, 0X1);
    // 0x0040FDD8: jal         0x0028441C
    // 0x0040FDDC: nop

    func_0028441C(rdram, ctx);
        goto after_0;
    // 0x0040FDDC: nop

    after_0:
    // 0x0040FDE0: addiu       $a2, $s4, 0x1
    ctx->r6 = ADD32(ctx->r20, 0X1);
L_0040FDE4:
    // 0x0040FDE4: lw          $a0, 0x60($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X60);
    // 0x0040FDE8: lw          $a1, 0x24($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X24);
    // 0x0040FDEC: jal         0x0020185C
    // 0x0040FDF0: addiu       $a3, $sp, 0x20
    ctx->r7 = ADD32(ctx->r29, 0X20);
    func_0020185C(rdram, ctx);
        goto after_1;
    // 0x0040FDF0: addiu       $a3, $sp, 0x20
    ctx->r7 = ADD32(ctx->r29, 0X20);
    after_1:
    // 0x0040FDF4: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0040FDF8: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x0040FDFC: addiu       $a3, $zero, 0x13
    ctx->r7 = ADD32(0, 0X13);
    // 0x0040FE00: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    // 0x0040FE04: lui         $v0, 0x41
    ctx->r2 = S32(0X41 << 16);
    // 0x0040FE08: addiu       $v0, $v0, -0x60C
    ctx->r2 = ADD32(ctx->r2, -0X60C);
    // 0x0040FE0C: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x0040FE10: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x0040FE14: addiu       $v0, $v0, 0x970
    ctx->r2 = ADD32(ctx->r2, 0X970);
    // 0x0040FE18: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x0040FE1C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0040FE20: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x0040FE24: jal         0x0020367C
    // 0x0040FE28: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    func_0020367C(rdram, ctx);
        goto after_2;
    // 0x0040FE28: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    after_2:
    // 0x0040FE2C: beq         $v0, $zero, L_0040FDC4
    if (ctx->r2 == 0) {
        // 0x0040FE30: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_0040FDC4;
    }
    // 0x0040FE30: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x0040FE34: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x0040FE38: lw          $v1, 0x1BB0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X1BB0);
    // 0x0040FE3C: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x0040FE40: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x0040FE44: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x0040FE48: jal         0x00412E1C
    // 0x0040FE4C: sw          $v0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r2;
    func_00412E1C(rdram, ctx);
        goto after_3;
    // 0x0040FE4C: sw          $v0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r2;
    after_3:
    // 0x0040FE50: addiu       $s2, $v0, 0x8
    ctx->r18 = ADD32(ctx->r2, 0X8);
    // 0x0040FE54: lw          $s1, 0x4($v0)
    ctx->r17 = MEM_W(ctx->r2, 0X4);
L_0040FE58:
    // 0x0040FE58: jal         0x00412DA4
    // 0x0040FE5C: nop

    func_00412DA4(rdram, ctx);
        goto after_4;
    // 0x0040FE5C: nop

    after_4:
    // 0x0040FE60: slt         $v0, $s0, $v0
    ctx->r2 = SIGNED(ctx->r16) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x0040FE64: beql        $v0, $zero, L_0040FEA0
    if (ctx->r2 == 0) {
        // 0x0040FE68: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_0040FEA0;
    }
    goto skip_0;
    // 0x0040FE68: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    skip_0:
    // 0x0040FE6C: jal         0x00412DD0
    // 0x0040FE70: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00412DD0(rdram, ctx);
        goto after_5;
    // 0x0040FE70: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_5:
    // 0x0040FE74: lw          $v1, 0x4($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X4);
    // 0x0040FE78: blez        $v1, L_0040FE98
    if (SIGNED(ctx->r3) <= 0) {
        // 0x0040FE7C: addiu       $a0, $v0, 0x8
        ctx->r4 = ADD32(ctx->r2, 0X8);
            goto L_0040FE98;
    }
    // 0x0040FE7C: addiu       $a0, $v0, 0x8
    ctx->r4 = ADD32(ctx->r2, 0X8);
    // 0x0040FE80: sll         $v0, $v1, 3
    ctx->r2 = S32(ctx->r3 << 3);
    // 0x0040FE84: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x0040FE88: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x0040FE8C: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x0040FE90: lwc1        $f0, -0x8($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, -0X8);
    // 0x0040FE94: add.s       $f20, $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = ctx->f20.fl + ctx->f0.fl;
L_0040FE98:
    // 0x0040FE98: j           L_0040FE58
    // 0x0040FE9C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
        goto L_0040FE58;
    // 0x0040FE9C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_0040FEA0:
    // 0x0040FEA0: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x0040FEA4: lw          $v0, 0x1BB0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1BB0);
    // 0x0040FEA8: sw          $zero, 0x30($v0)
    MEM_W(0X30, ctx->r2) = 0;
    // 0x0040FEAC: swc1        $f20, 0x34($v0)
    MEM_W(0X34, ctx->r2) = ctx->f20.u32l;
    // 0x0040FEB0: sw          $zero, 0x28($v0)
    MEM_W(0X28, ctx->r2) = 0;
    // 0x0040FEB4: blez        $s1, L_0040FF04
    if (SIGNED(ctx->r17) <= 0) {
        // 0x0040FEB8: swc1        $f20, 0x2C($v0)
        MEM_W(0X2C, ctx->r2) = ctx->f20.u32l;
            goto L_0040FF04;
    }
    // 0x0040FEB8: swc1        $f20, 0x2C($v0)
    MEM_W(0X2C, ctx->r2) = ctx->f20.u32l;
    // 0x0040FEBC: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x0040FEC0: addu        $v1, $s2, $zero
    ctx->r3 = ADD32(ctx->r18, 0);
L_0040FEC4:
    // 0x0040FEC4: lwc1        $f0, 0x28($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X28);
    // 0x0040FEC8: lwc1        $f1, 0x10($v1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r3, 0X10);
    // 0x0040FECC: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x0040FED0: nop

    // 0x0040FED4: bc1tl       L_0040FEDC
    if (c1cs) {
        // 0x0040FED8: swc1        $f1, 0x28($a0)
        MEM_W(0X28, ctx->r4) = ctx->f_odd[(1 - 1) * 2];
            goto L_0040FEDC;
    }
    goto skip_1;
    // 0x0040FED8: swc1        $f1, 0x28($a0)
    MEM_W(0X28, ctx->r4) = ctx->f_odd[(1 - 1) * 2];
    skip_1:
L_0040FEDC:
    // 0x0040FEDC: lwc1        $f0, 0x2C($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X2C);
    // 0x0040FEE0: lwc1        $f1, 0x10($v1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r3, 0X10);
    // 0x0040FEE4: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x0040FEE8: nop

    // 0x0040FEEC: bc1tl       L_0040FEF4
    if (c1cs) {
        // 0x0040FEF0: swc1        $f1, 0x2C($a0)
        MEM_W(0X2C, ctx->r4) = ctx->f_odd[(1 - 1) * 2];
            goto L_0040FEF4;
    }
    goto skip_2;
    // 0x0040FEF0: swc1        $f1, 0x2C($a0)
    MEM_W(0X2C, ctx->r4) = ctx->f_odd[(1 - 1) * 2];
    skip_2:
L_0040FEF4:
    // 0x0040FEF4: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x0040FEF8: slt         $v0, $s0, $s1
    ctx->r2 = SIGNED(ctx->r16) < SIGNED(ctx->r17) ? 1 : 0;
    // 0x0040FEFC: bne         $v0, $zero, L_0040FEC4
    if (ctx->r2 != 0) {
        // 0x0040FF00: addiu       $v1, $v1, 0x14
        ctx->r3 = ADD32(ctx->r3, 0X14);
            goto L_0040FEC4;
    }
    // 0x0040FF00: addiu       $v1, $v1, 0x14
    ctx->r3 = ADD32(ctx->r3, 0X14);
L_0040FF04:
    // 0x0040FF04: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x0040FF08: lw          $v0, 0x1BB0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1BB0);
    // 0x0040FF0C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x0040FF10: lwc1        $f0, 0x28($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X28);
    // 0x0040FF14: mov.s       $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    ctx->f1.fl = ctx->f0.fl;
    // 0x0040FF18: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    // 0x0040FF1C: swc1        $f0, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f0.u32l;
    // 0x0040FF20: swc1        $f1, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f_odd[(1 - 1) * 2];
    // 0x0040FF24: swc1        $f2, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->f2.u32l;
    // 0x0040FF28: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x0040FF2C: lw          $a0, 0x70D8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X70D8);
    // 0x0040FF30: lui         $a1, 0x800F
    ctx->r5 = S32(0X800F << 16);
    // 0x0040FF34: lw          $a1, 0x709C($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X709C);
    // 0x0040FF38: lw          $s0, 0x70($v0)
    ctx->r16 = MEM_W(ctx->r2, 0X70);
    // 0x0040FF3C: jal         0x0020185C
    // 0x0040FF40: addiu       $a3, $sp, 0x24
    ctx->r7 = ADD32(ctx->r29, 0X24);
    func_0020185C(rdram, ctx);
        goto after_6;
    // 0x0040FF40: addiu       $a3, $sp, 0x24
    ctx->r7 = ADD32(ctx->r29, 0X24);
    after_6:
    // 0x0040FF44: bne         $v0, $zero, L_0040FF54
    if (ctx->r2 != 0) {
        // 0x0040FF48: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_0040FF54;
    }
    // 0x0040FF48: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0040FF4C: j           L_0040FF84
    // 0x0040FF50: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
        goto L_0040FF84;
    // 0x0040FF50: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
L_0040FF54:
    // 0x0040FF54: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x0040FF58: addiu       $a3, $zero, 0x13
    ctx->r7 = ADD32(0, 0X13);
    // 0x0040FF5C: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    // 0x0040FF60: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x0040FF64: addiu       $v0, $v0, 0x970
    ctx->r2 = ADD32(ctx->r2, 0X970);
    // 0x0040FF68: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x0040FF6C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0040FF70: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x0040FF74: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x0040FF78: jal         0x0020367C
    // 0x0040FF7C: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    func_0020367C(rdram, ctx);
        goto after_7;
    // 0x0040FF7C: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    after_7:
    // 0x0040FF80: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
L_0040FF84:
    // 0x0040FF84: sll         $v0, $s4, 2
    ctx->r2 = S32(ctx->r20 << 2);
    // 0x0040FF88: addu        $v0, $v0, $s4
    ctx->r2 = ADD32(ctx->r2, ctx->r20);
    // 0x0040FF8C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x0040FF90: subu        $v0, $v0, $s4
    ctx->r2 = SUB32(ctx->r2, ctx->r20);
    // 0x0040FF94: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x0040FF98: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x0040FF9C: lw          $a0, 0x1BB0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1BB0);
    // 0x0040FFA0: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x0040FFA4: addiu       $a2, $a0, 0x68
    ctx->r6 = ADD32(ctx->r4, 0X68);
    // 0x0040FFA8: addiu       $v1, $v1, 0x8
    ctx->r3 = ADD32(ctx->r3, 0X8);
    // 0x0040FFAC: addu        $v1, $v0, $v1
    ctx->r3 = ADD32(ctx->r2, ctx->r3);
    // 0x0040FFB0: addiu       $a3, $v1, 0x40
    ctx->r7 = ADD32(ctx->r3, 0X40);
    // 0x0040FFB4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0040FFB8: sw          $s5, 0x54($a0)
    MEM_W(0X54, ctx->r4) = ctx->r21;
    // 0x0040FFBC: sw          $v0, 0x38($a0)
    MEM_W(0X38, ctx->r4) = ctx->r2;
L_0040FFC0:
    // 0x0040FFC0: lw          $t0, 0x0($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X0);
    // 0x0040FFC4: lw          $t1, 0x4($v1)
    ctx->r9 = MEM_W(ctx->r3, 0X4);
    // 0x0040FFC8: lw          $t2, 0x8($v1)
    ctx->r10 = MEM_W(ctx->r3, 0X8);
    // 0x0040FFCC: lw          $t3, 0xC($v1)
    ctx->r11 = MEM_W(ctx->r3, 0XC);
    // 0x0040FFD0: sw          $t0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r8;
    // 0x0040FFD4: sw          $t1, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r9;
    // 0x0040FFD8: sw          $t2, 0x8($a2)
    MEM_W(0X8, ctx->r6) = ctx->r10;
    // 0x0040FFDC: sw          $t3, 0xC($a2)
    MEM_W(0XC, ctx->r6) = ctx->r11;
    // 0x0040FFE0: addiu       $v1, $v1, 0x10
    ctx->r3 = ADD32(ctx->r3, 0X10);
    // 0x0040FFE4: bne         $v1, $a3, L_0040FFC0
    if (ctx->r3 != ctx->r7) {
        // 0x0040FFE8: addiu       $a2, $a2, 0x10
        ctx->r6 = ADD32(ctx->r6, 0X10);
            goto L_0040FFC0;
    }
    // 0x0040FFE8: addiu       $a2, $a2, 0x10
    ctx->r6 = ADD32(ctx->r6, 0X10);
    // 0x0040FFEC: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x0040FFF0: lw          $a0, 0x1BB0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1BB0);
    // 0x0040FFF4: lw          $t0, 0x0($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X0);
    // 0x0040FFF8: lw          $t1, 0x4($v1)
    ctx->r9 = MEM_W(ctx->r3, 0X4);
    // 0x0040FFFC: lw          $t2, 0x8($v1)
    ctx->r10 = MEM_W(ctx->r3, 0X8);
    // 0x00410000: sw          $t0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r8;
    // 0x00410004: sw          $t1, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r9;
    // 0x00410008: sw          $t2, 0x8($a2)
    MEM_W(0X8, ctx->r6) = ctx->r10;
    // 0x0041000C: lw          $v1, 0x70($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X70);
    // 0x00410010: lw          $v0, 0x74($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X74);
    // 0x00410014: sw          $zero, 0x50($a0)
    MEM_W(0X50, ctx->r4) = 0;
    // 0x00410018: sw          $zero, 0x40($a0)
    MEM_W(0X40, ctx->r4) = 0;
    // 0x0041001C: sw          $zero, 0x44($a0)
    MEM_W(0X44, ctx->r4) = 0;
    // 0x00410020: sw          $zero, 0x48($a0)
    MEM_W(0X48, ctx->r4) = 0;
    // 0x00410024: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x00410028: beq         $v0, $zero, L_00410074
    if (ctx->r2 == 0) {
        // 0x0041002C: sw          $v1, 0xE0($a0)
        MEM_W(0XE0, ctx->r4) = ctx->r3;
            goto L_00410074;
    }
    // 0x0041002C: sw          $v1, 0xE0($a0)
    MEM_W(0XE0, ctx->r4) = ctx->r3;
    // 0x00410030: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x00410034: beq         $v0, $zero, L_00410074
    if (ctx->r2 == 0) {
        // 0x00410038: nop
    
            goto L_00410074;
    }
    // 0x00410038: nop

    // 0x0041003C: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x00410040: lw          $v1, 0x1BB0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X1BB0);
    // 0x00410044: lw          $t0, 0x4($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X4);
    // 0x00410048: lw          $t1, 0x8($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X8);
    // 0x0041004C: lw          $t2, 0xC($v0)
    ctx->r10 = MEM_W(ctx->r2, 0XC);
    // 0x00410050: sw          $t0, 0xF0($a0)
    MEM_W(0XF0, ctx->r4) = ctx->r8;
    // 0x00410054: sw          $t1, 0xF4($a0)
    MEM_W(0XF4, ctx->r4) = ctx->r9;
    // 0x00410058: sw          $t2, 0xF8($a0)
    MEM_W(0XF8, ctx->r4) = ctx->r10;
    // 0x0041005C: lw          $v0, 0x18($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X18);
    // 0x00410060: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00410064: lwc1        $f1, 0x978($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X978);
    // 0x00410068: lwc1        $f0, 0x50($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X50);
    // 0x0041006C: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x00410070: swc1        $f0, 0xFC($v1)
    MEM_W(0XFC, ctx->r3) = ctx->f0.u32l;
L_00410074:
    // 0x00410074: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x00410078: lw          $v1, 0x1BB0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X1BB0);
    // 0x0041007C: lw          $v0, 0x74($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X74);
    // 0x00410080: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x00410084: beq         $v0, $zero, L_004100CC
    if (ctx->r2 == 0) {
        // 0x00410088: nop
    
            goto L_004100CC;
    }
    // 0x00410088: nop

    // 0x0041008C: beql        $s3, $zero, L_004100C0
    if (ctx->r19 == 0) {
        // 0x00410090: sw          $zero, 0xF0($v1)
        MEM_W(0XF0, ctx->r3) = 0;
            goto L_004100C0;
    }
    goto skip_3;
    // 0x00410090: sw          $zero, 0xF0($v1)
    MEM_W(0XF0, ctx->r3) = 0;
    skip_3:
    // 0x00410094: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x00410098: lw          $v0, 0x1BB0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1BB0);
    // 0x0041009C: lw          $t0, 0x4($s3)
    ctx->r8 = MEM_W(ctx->r19, 0X4);
    // 0x004100A0: lw          $t1, 0x8($s3)
    ctx->r9 = MEM_W(ctx->r19, 0X8);
    // 0x004100A4: lw          $t2, 0xC($s3)
    ctx->r10 = MEM_W(ctx->r19, 0XC);
    // 0x004100A8: sw          $t0, 0xF0($v1)
    MEM_W(0XF0, ctx->r3) = ctx->r8;
    // 0x004100AC: sw          $t1, 0xF4($v1)
    MEM_W(0XF4, ctx->r3) = ctx->r9;
    // 0x004100B0: sw          $t2, 0xF8($v1)
    MEM_W(0XF8, ctx->r3) = ctx->r10;
    // 0x004100B4: lwc1        $f0, 0x50($s3)
    ctx->f0.u32l = MEM_W(ctx->r19, 0X50);
    // 0x004100B8: j           L_004100CC
    // 0x004100BC: swc1        $f0, 0xFC($v0)
    MEM_W(0XFC, ctx->r2) = ctx->f0.u32l;
        goto L_004100CC;
    // 0x004100BC: swc1        $f0, 0xFC($v0)
    MEM_W(0XFC, ctx->r2) = ctx->f0.u32l;
L_004100C0:
    // 0x004100C0: sw          $zero, 0xF4($v1)
    MEM_W(0XF4, ctx->r3) = 0;
    // 0x004100C4: sw          $zero, 0xF8($v1)
    MEM_W(0XF8, ctx->r3) = 0;
    // 0x004100C8: sw          $zero, 0xFC($v1)
    MEM_W(0XFC, ctx->r3) = 0;
L_004100CC:
    // 0x004100CC: jal         0x002051F4
    // 0x004100D0: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_002051F4(rdram, ctx);
        goto after_8;
    // 0x004100D0: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_8:
    // 0x004100D4: beq         $s5, $zero, L_00410148
    if (ctx->r21 == 0) {
        // 0x004100D8: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_00410148;
    }
    // 0x004100D8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x004100DC: lui         $a2, 0x800C
    ctx->r6 = S32(0X800C << 16);
    // 0x004100E0: lw          $a2, 0x1BB0($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X1BB0);
    // 0x004100E4: lw          $a0, 0xE4($a2)
    ctx->r4 = MEM_W(ctx->r6, 0XE4);
    // 0x004100E8: lw          $a1, 0xE8($a2)
    ctx->r5 = MEM_W(ctx->r6, 0XE8);
    // 0x004100EC: sw          $v0, 0x54($a2)
    MEM_W(0X54, ctx->r6) = ctx->r2;
    // 0x004100F0: lw          $v0, 0x74($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X74);
    // 0x004100F4: lw          $v1, 0xE0($a2)
    ctx->r3 = MEM_W(ctx->r6, 0XE0);
    // 0x004100F8: sw          $zero, 0x4C($a2)
    MEM_W(0X4C, ctx->r6) = 0;
    // 0x004100FC: sw          $zero, 0xE4($a2)
    MEM_W(0XE4, ctx->r6) = 0;
    // 0x00410100: sw          $zero, 0xE8($a2)
    MEM_W(0XE8, ctx->r6) = 0;
    // 0x00410104: andi        $v0, $v0, 0x8
    ctx->r2 = ctx->r2 & 0X8;
    // 0x00410108: addiu       $v1, $v1, -0xA
    ctx->r3 = ADD32(ctx->r3, -0XA);
    // 0x0041010C: sltiu       $v1, $v1, 0x47
    ctx->r3 = ctx->r3 < 0X47 ? 1 : 0;
    // 0x00410110: sw          $v0, 0xB8($a2)
    MEM_W(0XB8, ctx->r6) = ctx->r2;
    // 0x00410114: sw          $a0, 0xC($a2)
    MEM_W(0XC, ctx->r6) = ctx->r4;
    // 0x00410118: beq         $v1, $zero, L_00410124
    if (ctx->r3 == 0) {
        // 0x0041011C: sw          $a1, 0x10($a2)
        MEM_W(0X10, ctx->r6) = ctx->r5;
            goto L_00410124;
    }
    // 0x0041011C: sw          $a1, 0x10($a2)
    MEM_W(0X10, ctx->r6) = ctx->r5;
    // 0x00410120: sw          $zero, 0xB8($a2)
    MEM_W(0XB8, ctx->r6) = 0;
L_00410124:
    // 0x00410124: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x00410128: lw          $v1, 0x1BB0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X1BB0);
    // 0x0041012C: lw          $v0, 0xE0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0XE0);
    // 0x00410130: addiu       $v0, $v0, -0x190
    ctx->r2 = ADD32(ctx->r2, -0X190);
    // 0x00410134: sltiu       $v0, $v0, 0x4
    ctx->r2 = ctx->r2 < 0X4 ? 1 : 0;
    // 0x00410138: bnel        $v0, $zero, L_00410174
    if (ctx->r2 != 0) {
        // 0x0041013C: sw          $zero, 0xB8($v1)
        MEM_W(0XB8, ctx->r3) = 0;
            goto L_00410174;
    }
    goto skip_4;
    // 0x0041013C: sw          $zero, 0xB8($v1)
    MEM_W(0XB8, ctx->r3) = 0;
    skip_4:
    // 0x00410140: j           L_00410174
    // 0x00410144: nop

        goto L_00410174;
    // 0x00410144: nop

L_00410148:
    // 0x00410148: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x0041014C: lw          $v1, 0x1BB0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X1BB0);
    // 0x00410150: lw          $v0, 0x70($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X70);
    // 0x00410154: slti        $v0, $v0, 0x3
    ctx->r2 = SIGNED(ctx->r2) < 0X3 ? 1 : 0;
    // 0x00410158: bnel        $v0, $zero, L_00410160
    if (ctx->r2 != 0) {
        // 0x0041015C: sw          $s0, 0xE0($v1)
        MEM_W(0XE0, ctx->r3) = ctx->r16;
            goto L_00410160;
    }
    goto skip_5;
    // 0x0041015C: sw          $s0, 0xE0($v1)
    MEM_W(0XE0, ctx->r3) = ctx->r16;
    skip_5:
L_00410160:
    // 0x00410160: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x00410164: lw          $v0, 0x1BB0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1BB0);
    // 0x00410168: lwc1        $f0, 0x30($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X30);
    // 0x0041016C: sw          $zero, 0x54($v0)
    MEM_W(0X54, ctx->r2) = 0;
    // 0x00410170: swc1        $f0, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f0.u32l;
L_00410174:
    // 0x00410174: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x00410178: lw          $a0, 0x1BB0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1BB0);
    // 0x0041017C: lw          $v1, 0x70($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X70);
    // 0x00410180: addiu       $v0, $zero, 0x9F
    ctx->r2 = ADD32(0, 0X9F);
    // 0x00410184: beql        $v1, $v0, L_0041018C
    if (ctx->r3 == ctx->r2) {
        // 0x00410188: sw          $zero, 0xB8($a0)
        MEM_W(0XB8, ctx->r4) = 0;
            goto L_0041018C;
    }
    goto skip_6;
    // 0x00410188: sw          $zero, 0xB8($a0)
    MEM_W(0XB8, ctx->r4) = 0;
    skip_6:
L_0041018C:
    // 0x0041018C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_00410190:
    // 0x00410190: lw          $ra, 0x40($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X40);
    // 0x00410194: lw          $s5, 0x3C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X3C);
    // 0x00410198: lw          $s4, 0x38($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X38);
    // 0x0041019C: lw          $s3, 0x34($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X34);
    // 0x004101A0: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x004101A4: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x004101A8: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x004101AC: ldc1        $f20, 0x48($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X48);
    // 0x004101B0: jr          $ra
    // 0x004101B4: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x004101B4: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_00452E44(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00452E44: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00452E48: addu        $a0, $a1, $zero
    ctx->r4 = ADD32(ctx->r5, 0);
    // 0x00452E4C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x00452E50: lui         $s0, 0x8012
    ctx->r16 = S32(0X8012 << 16);
    // 0x00452E54: addiu       $s0, $s0, -0x5513
    ctx->r16 = ADD32(ctx->r16, -0X5513);
    // 0x00452E58: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x00452E5C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x00452E60: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x00452E64: lbu         $a1, 0x0($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X0);
    // 0x00452E68: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x00452E6C: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x00452E70: jal         0x0041648C
    // 0x00452E74: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    func_0041648C(rdram, ctx);
        goto after_0;
    // 0x00452E74: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    after_0:
    // 0x00452E78: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x00452E7C: addiu       $v0, $zero, 0xF7
    ctx->r2 = ADD32(0, 0XF7);
    // 0x00452E80: beql        $a1, $v0, L_00452E88
    if (ctx->r5 == ctx->r2) {
        // 0x00452E84: addiu       $a1, $zero, 0xF8
        ctx->r5 = ADD32(0, 0XF8);
            goto L_00452E88;
    }
    goto skip_0;
    // 0x00452E84: addiu       $a1, $zero, 0xF8
    ctx->r5 = ADD32(0, 0XF8);
    skip_0:
L_00452E88:
    // 0x00452E88: addiu       $a0, $zero, 0x19E
    ctx->r4 = ADD32(0, 0X19E);
    // 0x00452E8C: jal         0x00275624
    // 0x00452E90: sb          $a1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r5;
    func_00275624(rdram, ctx);
        goto after_1;
    // 0x00452E90: sb          $a1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r5;
    after_1:
    // 0x00452E94: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x00452E98: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x00452E9C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x00452EA0: jr          $ra
    // 0x00452EA4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00452EA4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_004171F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004171F4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x004171F8: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x004171FC: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x00417200: lw          $v1, 0x6D1C($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X6D1C);
    // 0x00417204: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00417208: lwc1        $f0, 0xE60($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0XE60);
    // 0x0041720C: lui         $a3, 0x800B
    ctx->r7 = S32(0X800B << 16);
    // 0x00417210: addiu       $a3, $a3, -0x474C
    ctx->r7 = ADD32(ctx->r7, -0X474C);
    // 0x00417214: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x00417218: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0041721C: sw          $v0, -0x4750($at)
    MEM_W(-0X4750, ctx->r1) = ctx->r2;
    // 0x00417220: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x00417224: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x00417228: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x0041722C: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x00417230: lw          $v1, 0x8E0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X8E0);
    // 0x00417234: addu        $v0, $a0, $v0
    ctx->r2 = ADD32(ctx->r4, ctx->r2);
    // 0x00417238: lui         $t3, 0x800B
    ctx->r11 = S32(0X800B << 16);
    // 0x0041723C: addiu       $t3, $t3, -0x4F18
    ctx->r11 = ADD32(ctx->r11, -0X4F18);
    // 0x00417240: lw          $t0, 0x0($t3)
    ctx->r8 = MEM_W(ctx->r11, 0X0);
    // 0x00417244: lw          $t1, 0x4($t3)
    ctx->r9 = MEM_W(ctx->r11, 0X4);
    // 0x00417248: lw          $t2, 0x8($t3)
    ctx->r10 = MEM_W(ctx->r11, 0X8);
    // 0x0041724C: sw          $t0, 0x110($v0)
    MEM_W(0X110, ctx->r2) = ctx->r8;
    // 0x00417250: sw          $t1, 0x114($v0)
    MEM_W(0X114, ctx->r2) = ctx->r9;
    // 0x00417254: sw          $t2, 0x118($v0)
    MEM_W(0X118, ctx->r2) = ctx->r10;
    // 0x00417258: lw          $t0, 0xC($t3)
    ctx->r8 = MEM_W(ctx->r11, 0XC);
    // 0x0041725C: lw          $t1, 0x10($t3)
    ctx->r9 = MEM_W(ctx->r11, 0X10);
    // 0x00417260: lw          $t2, 0x14($t3)
    ctx->r10 = MEM_W(ctx->r11, 0X14);
    // 0x00417264: sw          $t0, 0x11C($v0)
    MEM_W(0X11C, ctx->r2) = ctx->r8;
    // 0x00417268: sw          $t1, 0x120($v0)
    MEM_W(0X120, ctx->r2) = ctx->r9;
    // 0x0041726C: sw          $t2, 0x124($v0)
    MEM_W(0X124, ctx->r2) = ctx->r10;
    // 0x00417270: swc1        $f0, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->f0.u32l;
    // 0x00417274: sw          $zero, 0x4($a3)
    MEM_W(0X4, ctx->r7) = 0;
    // 0x00417278: sw          $zero, 0x8($a3)
    MEM_W(0X8, ctx->r7) = 0;
    // 0x0041727C: sw          $zero, 0x10($a3)
    MEM_W(0X10, ctx->r7) = 0;
    // 0x00417280: srl         $v0, $v1, 31
    ctx->r2 = S32(U32(ctx->r3) >> 31);
    // 0x00417284: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x00417288: sra         $v1, $v1, 1
    ctx->r3 = S32(SIGNED(ctx->r3) >> 1);
    // 0x0041728C: mtc1        $v1, $f0
    ctx->f0.u32l = ctx->r3;
    // 0x00417290: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00417294: jal         0x0021D928
    // 0x00417298: swc1        $f0, 0xC($a3)
    MEM_W(0XC, ctx->r7) = ctx->f0.u32l;
    func_0021D928(rdram, ctx);
        goto after_0;
    // 0x00417298: swc1        $f0, 0xC($a3)
    MEM_W(0XC, ctx->r7) = ctx->f0.u32l;
    after_0:
    // 0x0041729C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x004172A0: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x004172A4: sw          $zero, -0x4750($at)
    MEM_W(-0X4750, ctx->r1) = 0;
    // 0x004172A8: jr          $ra
    // 0x004172AC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x004172AC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
