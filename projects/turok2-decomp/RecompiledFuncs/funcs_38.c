#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_00299E00(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00299E00: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x00299E04: addiu       $a3, $zero, 0xF
    ctx->r7 = ADD32(0, 0XF);
L_00299E08:
    // 0x00299E08: andi        $v0, $a1, 0x10
    ctx->r2 = ctx->r5 & 0X10;
    // 0x00299E0C: beq         $v0, $zero, L_00299E18
    if (ctx->r2 == 0) {
        // 0x00299E10: addu        $a2, $zero, $zero
        ctx->r6 = ADD32(0, 0);
            goto L_00299E18;
    }
    // 0x00299E10: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x00299E14: addiu       $a2, $zero, 0x15
    ctx->r6 = ADD32(0, 0X15);
L_00299E18:
    // 0x00299E18: sll         $a1, $a1, 1
    ctx->r5 = S32(ctx->r5 << 1);
    // 0x00299E1C: srl         $v1, $a0, 10
    ctx->r3 = S32(U32(ctx->r4) >> 10);
    // 0x00299E20: sll         $a0, $a0, 1
    ctx->r4 = S32(ctx->r4 << 1);
    // 0x00299E24: andi        $v0, $a1, 0xFF
    ctx->r2 = ctx->r5 & 0XFF;
    // 0x00299E28: andi        $v1, $v1, 0x1
    ctx->r3 = ctx->r3 & 0X1;
    // 0x00299E2C: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x00299E30: xor         $v0, $v0, $a2
    ctx->r2 = ctx->r2 ^ ctx->r6;
    // 0x00299E34: addiu       $a3, $a3, -0x1
    ctx->r7 = ADD32(ctx->r7, -0X1);
    // 0x00299E38: bgez        $a3, L_00299E08
    if (SIGNED(ctx->r7) >= 0) {
        // 0x00299E3C: addu        $a1, $v0, $zero
        ctx->r5 = ADD32(ctx->r2, 0);
            goto L_00299E08;
    }
    // 0x00299E3C: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x00299E40: jr          $ra
    // 0x00299E44: andi        $v0, $v0, 0x1F
    ctx->r2 = ctx->r2 & 0X1F;
    return;
    // 0x00299E44: andi        $v0, $v0, 0x1F
    ctx->r2 = ctx->r2 & 0X1F;
;}
RECOMP_FUNC void func_0041DD90(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041DD90: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x0041DD94: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x0041DD98: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x0041DD9C: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x0041DDA0: addu        $s2, $a1, $zero
    ctx->r18 = ADD32(ctx->r5, 0);
    // 0x0041DDA4: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x0041DDA8: addu        $s4, $a2, $zero
    ctx->r20 = ADD32(ctx->r6, 0);
    // 0x0041DDAC: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x0041DDB0: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x0041DDB4: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x0041DDB8: jal         0x00426480
    // 0x0041DDBC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    func_00426480(rdram, ctx);
        goto after_0;
    // 0x0041DDBC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    after_0:
    // 0x0041DDC0: jal         0x0042655C
    // 0x0041DDC4: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_0042655C(rdram, ctx);
        goto after_1;
    // 0x0041DDC4: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_1:
    // 0x0041DDC8: addu        $s3, $v0, $zero
    ctx->r19 = ADD32(ctx->r2, 0);
    // 0x0041DDCC: jal         0x0041DC5C
    // 0x0041DDD0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_0041DC5C(rdram, ctx);
        goto after_2;
    // 0x0041DDD0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_2:
    // 0x0041DDD4: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x0041DDD8: beq         $s0, $zero, L_0041DF30
    if (ctx->r16 == 0) {
        // 0x0041DDDC: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_0041DF30;
    }
    // 0x0041DDDC: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x0041DDE0: jal         0x002858CC
    // 0x0041DDE4: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_002858CC(rdram, ctx);
        goto after_3;
    // 0x0041DDE4: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_3:
    // 0x0041DDE8: beq         $s3, $zero, L_0041DDF8
    if (ctx->r19 == 0) {
        // 0x0041DDEC: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_0041DDF8;
    }
    // 0x0041DDEC: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x0041DDF0: beq         $v1, $zero, L_0041DE38
    if (ctx->r3 == 0) {
        // 0x0041DDF4: nop
    
            goto L_0041DE38;
    }
    // 0x0041DDF4: nop

L_0041DDF8:
    // 0x0041DDF8: addiu       $v0, $zero, -0x2
    ctx->r2 = ADD32(0, -0X2);
    // 0x0041DDFC: beq         $s3, $v0, L_0041DE38
    if (ctx->r19 == ctx->r2) {
        // 0x0041DE00: nop
    
            goto L_0041DE38;
    }
    // 0x0041DE00: nop

    // 0x0041DE04: beq         $v1, $zero, L_0041DF30
    if (ctx->r3 == 0) {
        // 0x0041DE08: addu        $v0, $s3, $zero
        ctx->r2 = ADD32(ctx->r19, 0);
            goto L_0041DF30;
    }
    // 0x0041DE08: addu        $v0, $s3, $zero
    ctx->r2 = ADD32(ctx->r19, 0);
    // 0x0041DE0C: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x0041DE10: addiu       $a0, $a0, -0x61D4
    ctx->r4 = ADD32(ctx->r4, -0X61D4);
    // 0x0041DE14: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0041DE18: lw          $a2, 0x1C($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X1C);
    // 0x0041DE1C: lw          $a3, 0x20($s1)
    ctx->r7 = MEM_W(ctx->r17, 0X20);
    // 0x0041DE20: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x0041DE24: addiu       $a1, $a1, -0x4328
    ctx->r5 = ADD32(ctx->r5, -0X4328);
    // 0x0041DE28: jal         0x00416644
    // 0x0041DE2C: nop

    func_00416644(rdram, ctx);
        goto after_4;
    // 0x0041DE2C: nop

    after_4:
    // 0x0041DE30: j           L_0041DF30
    // 0x0041DE34: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_0041DF30;
    // 0x0041DE34: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_0041DE38:
    // 0x0041DE38: jal         0x00426594
    // 0x0041DE3C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_00426594(rdram, ctx);
        goto after_5;
    // 0x0041DE3C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_5:
    // 0x0041DE40: beq         $v0, $zero, L_0041DEB0
    if (ctx->r2 == 0) {
        // 0x0041DE44: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_0041DEB0;
    }
    // 0x0041DE44: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0041DE48: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x0041DE4C: lw          $v1, 0x990($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X990);
    // 0x0041DE50: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0041DE54: sw          $v0, 0x9BC($at)
    MEM_W(0X9BC, ctx->r1) = ctx->r2;
    // 0x0041DE58: beq         $v1, $zero, L_0041DE70
    if (ctx->r3 == 0) {
        // 0x0041DE5C: nop
    
            goto L_0041DE70;
    }
    // 0x0041DE5C: nop

    // 0x0041DE60: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x0041DE64: addiu       $a1, $a1, -0x43DC
    ctx->r5 = ADD32(ctx->r5, -0X43DC);
    // 0x0041DE68: j           L_0041DE90
    // 0x0041DE6C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
        goto L_0041DE90;
    // 0x0041DE6C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
L_0041DE70:
    // 0x0041DE70: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x0041DE74: lw          $v0, 0x984($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X984);
    // 0x0041DE78: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x0041DE7C: addiu       $a1, $a1, -0x4394
    ctx->r5 = ADD32(ctx->r5, -0X4394);
    // 0x0041DE80: beq         $v0, $zero, L_0041DE90
    if (ctx->r2 == 0) {
        // 0x0041DE84: sw          $s0, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r16;
            goto L_0041DE90;
    }
    // 0x0041DE84: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0041DE88: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x0041DE8C: addiu       $a1, $a1, -0x43B8
    ctx->r5 = ADD32(ctx->r5, -0X43B8);
L_0041DE90:
    // 0x0041DE90: lw          $a2, 0x1C($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X1C);
    // 0x0041DE94: lw          $a3, 0x20($s1)
    ctx->r7 = MEM_W(ctx->r17, 0X20);
    // 0x0041DE98: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x0041DE9C: addiu       $a0, $a0, -0x61D4
    ctx->r4 = ADD32(ctx->r4, -0X61D4);
    // 0x0041DEA0: jal         0x00416644
    // 0x0041DEA4: nop

    func_00416644(rdram, ctx);
        goto after_6;
    // 0x0041DEA4: nop

    after_6:
    // 0x0041DEA8: j           L_0041DF30
    // 0x0041DEAC: addu        $v0, $s3, $zero
    ctx->r2 = ADD32(ctx->r19, 0);
        goto L_0041DF30;
    // 0x0041DEAC: addu        $v0, $s3, $zero
    ctx->r2 = ADD32(ctx->r19, 0);
L_0041DEB0:
    // 0x0041DEB0: bne         $s4, $zero, L_0041DF24
    if (ctx->r20 != 0) {
        // 0x0041DEB4: addiu       $v0, $zero, -0x2
        ctx->r2 = ADD32(0, -0X2);
            goto L_0041DF24;
    }
    // 0x0041DEB4: addiu       $v0, $zero, -0x2
    ctx->r2 = ADD32(0, -0X2);
    // 0x0041DEB8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0041DEBC: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0041DEC0: sw          $v0, 0x9BC($at)
    MEM_W(0X9BC, ctx->r1) = ctx->r2;
    // 0x0041DEC4: jal         0x00426BD8
    // 0x0041DEC8: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_00426BD8(rdram, ctx);
        goto after_7;
    // 0x0041DEC8: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_7:
    // 0x0041DECC: beq         $v0, $zero, L_0041DEFC
    if (ctx->r2 == 0) {
        // 0x0041DED0: sw          $s0, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r16;
            goto L_0041DEFC;
    }
    // 0x0041DED0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0041DED4: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x0041DED8: addiu       $a0, $a0, -0x61D4
    ctx->r4 = ADD32(ctx->r4, -0X61D4);
    // 0x0041DEDC: lw          $a2, 0x1C($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X1C);
    // 0x0041DEE0: lw          $a3, 0x20($s1)
    ctx->r7 = MEM_W(ctx->r17, 0X20);
    // 0x0041DEE4: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x0041DEE8: addiu       $a1, $a1, -0x3FA4
    ctx->r5 = ADD32(ctx->r5, -0X3FA4);
    // 0x0041DEEC: jal         0x00416644
    // 0x0041DEF0: nop

    func_00416644(rdram, ctx);
        goto after_8;
    // 0x0041DEF0: nop

    after_8:
    // 0x0041DEF4: j           L_0041DF30
    // 0x0041DEF8: addu        $v0, $s3, $zero
    ctx->r2 = ADD32(ctx->r19, 0);
        goto L_0041DF30;
    // 0x0041DEF8: addu        $v0, $s3, $zero
    ctx->r2 = ADD32(ctx->r19, 0);
L_0041DEFC:
    // 0x0041DEFC: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x0041DF00: addiu       $a0, $a0, -0x61D4
    ctx->r4 = ADD32(ctx->r4, -0X61D4);
    // 0x0041DF04: lw          $a2, 0x1C($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X1C);
    // 0x0041DF08: lw          $a3, 0x20($s1)
    ctx->r7 = MEM_W(ctx->r17, 0X20);
    // 0x0041DF0C: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x0041DF10: addiu       $a1, $a1, -0x4400
    ctx->r5 = ADD32(ctx->r5, -0X4400);
    // 0x0041DF14: jal         0x00416644
    // 0x0041DF18: nop

    func_00416644(rdram, ctx);
        goto after_9;
    // 0x0041DF18: nop

    after_9:
    // 0x0041DF1C: j           L_0041DF30
    // 0x0041DF20: addu        $v0, $s3, $zero
    ctx->r2 = ADD32(ctx->r19, 0);
        goto L_0041DF30;
    // 0x0041DF20: addu        $v0, $s3, $zero
    ctx->r2 = ADD32(ctx->r19, 0);
L_0041DF24:
    // 0x0041DF24: bnel        $s3, $v0, L_0041DF2C
    if (ctx->r19 != ctx->r2) {
        // 0x0041DF28: addu        $s3, $zero, $zero
        ctx->r19 = ADD32(0, 0);
            goto L_0041DF2C;
    }
    goto skip_0;
    // 0x0041DF28: addu        $s3, $zero, $zero
    ctx->r19 = ADD32(0, 0);
    skip_0:
L_0041DF2C:
    // 0x0041DF2C: addu        $v0, $s3, $zero
    ctx->r2 = ADD32(ctx->r19, 0);
L_0041DF30:
    // 0x0041DF30: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x0041DF34: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x0041DF38: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x0041DF3C: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x0041DF40: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x0041DF44: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x0041DF48: jr          $ra
    // 0x0041DF4C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x0041DF4C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_00290E84(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00290E84: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x00290E88: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x00290E8C: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00260060(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00260060: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00260064: lwc1        $f0, 0x7974($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X7974);
    // 0x00260068: lui         $v0, 0x26
    ctx->r2 = S32(0X26 << 16);
    // 0x0026006C: addiu       $v0, $v0, -0x12B4
    ctx->r2 = ADD32(ctx->r2, -0X12B4);
    // 0x00260070: sw          $v0, 0xF4($a1)
    MEM_W(0XF4, ctx->r5) = ctx->r2;
    // 0x00260074: jr          $ra
    // 0x00260078: swc1        $f0, 0xD0($a1)
    MEM_W(0XD0, ctx->r5) = ctx->f0.u32l;
    return;
    // 0x00260078: swc1        $f0, 0xD0($a1)
    MEM_W(0XD0, ctx->r5) = ctx->f0.u32l;
;}
RECOMP_FUNC void func_0045C398(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_004233E0:
    // 0x0045C398: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
L_00423410:
    // 0x0045C39C: lw          $v0, 0x99C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X99C);
L_00423448:
    // 0x0045C3A0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0045C3A4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0045C3A8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x0045C3AC: bne         $v0, $zero, L_0045C460
    if (ctx->r2 != 0) {
        // 0x0045C3B0: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_0045C460;
    }
    // 0x0045C3B0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x0045C3B4: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x0045C3B8: lw          $v0, 0x990($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X990);
    // 0x0045C3BC: beq         $v0, $zero, L_0045C3D4
    if (ctx->r2 == 0) {
        // 0x0045C3C0: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_0045C3D4;
    }
    // 0x0045C3C0: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x0045C3C4: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x0045C3C8: lw          $v1, 0x2028($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X2028);
    // 0x0045C3CC: j           L_004233E0
    // 0x0045C3D0: nop

    entry_004233E0(rdram, ctx);
    return;
    // 0x0045C3D0: nop

L_0045C3D4:
    // 0x0045C3D4: lw          $v0, 0x20($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X20);
    // 0x0045C3D8: lb          $v1, 0x4($v0)
    ctx->r3 = MEM_B(ctx->r2, 0X4);
    // 0x0045C3DC: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x0045C3E0: beq         $v1, $v0, L_0045C460
    if (ctx->r3 == ctx->r2) {
        // 0x0045C3E4: nop
    
            goto L_0045C460;
    }
    // 0x0045C3E4: nop

    // 0x0045C3E8: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x0045C3EC: lw          $v0, 0x990($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X990);
    // 0x0045C3F0: beq         $v0, $zero, L_0045C408
    if (ctx->r2 == 0) {
        // 0x0045C3F4: nop
    
            goto L_0045C408;
    }
    // 0x0045C3F4: nop

    // 0x0045C3F8: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x0045C3FC: lw          $a0, 0x2028($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X2028);
    // 0x0045C400: j           L_00423410
    // 0x0045C404: nop

    entry_00423410(rdram, ctx);
    return;
    // 0x0045C404: nop

L_0045C408:
    // 0x0045C408: lw          $v0, 0x20($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X20);
    // 0x0045C40C: lb          $a0, 0x4($v0)
    ctx->r4 = MEM_B(ctx->r2, 0X4);
    // 0x0045C410: jal         0x0028591C
    // 0x0045C414: nop

    func_0028591C(rdram, ctx);
        goto after_0;
    // 0x0045C414: nop

    after_0:
    // 0x0045C418: beq         $v0, $zero, L_0045C460
    if (ctx->r2 == 0) {
        // 0x0045C41C: nop
    
            goto L_0045C460;
    }
    // 0x0045C41C: nop

    // 0x0045C420: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x0045C424: lw          $v0, 0x990($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X990);
    // 0x0045C428: beq         $v0, $zero, L_0045C440
    if (ctx->r2 == 0) {
        // 0x0045C42C: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_0045C440;
    }
    // 0x0045C42C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0045C430: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x0045C434: lw          $a1, 0x2028($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X2028);
    // 0x0045C438: j           L_00423448
    // 0x0045C43C: nop

    entry_00423448(rdram, ctx);
    return;
    // 0x0045C43C: nop

L_0045C440:
    // 0x0045C440: lw          $v0, 0x20($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X20);
    // 0x0045C444: lb          $a1, 0x4($v0)
    ctx->r5 = MEM_B(ctx->r2, 0X4);
    // 0x0045C448: jal         0x0041DCB0
    // 0x0045C44C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_0041DCB0(rdram, ctx);
        goto after_1;
    // 0x0045C44C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_1:
    // 0x0045C450: beq         $v0, $zero, L_0045C460
    if (ctx->r2 == 0) {
        // 0x0045C454: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_0045C460;
    }
    // 0x0045C454: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0045C458: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0045C45C: sw          $v0, 0x99C($at)
    MEM_W(0X99C, ctx->r1) = ctx->r2;
L_0045C460:
    // 0x0045C460: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x0045C464: lw          $v0, 0x99C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X99C);
    // 0x0045C468: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x0045C46C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0045C470: jr          $ra
    // 0x0045C474: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0045C474: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0028EEFC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
;}
RECOMP_FUNC void func_0042714C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0042714C: addiu       $v0, $a0, -0x41
    ctx->r2 = ADD32(ctx->r4, -0X41);
    // 0x00427150: sltiu       $v0, $v0, 0x1A
    ctx->r2 = ctx->r2 < 0X1A ? 1 : 0;
    // 0x00427154: bnel        $v0, $zero, L_0042715C
    if (ctx->r2 != 0) {
        // 0x00427158: addiu       $a0, $a0, 0x20
        ctx->r4 = ADD32(ctx->r4, 0X20);
            goto L_0042715C;
    }
    goto skip_0;
    // 0x00427158: addiu       $a0, $a0, 0x20
    ctx->r4 = ADD32(ctx->r4, 0X20);
    skip_0:
L_0042715C:
    // 0x0042715C: jr          $ra
    // 0x00427160: addu        $v0, $a0, $zero
    ctx->r2 = ADD32(ctx->r4, 0);
    return;
    // 0x00427160: addu        $v0, $a0, $zero
    ctx->r2 = ADD32(ctx->r4, 0);
;}
RECOMP_FUNC void func_00297FAC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00297FAC: bne         $a0, $v1, L_00297FE4
    if (ctx->r4 != ctx->r3) {
        // 0x00297FB0: addiu       $sp, $sp, -0x88
        ctx->r29 = ADD32(ctx->r29, -0X88);
            goto L_00297FE4;
    }
    // 0x00297FB0: addiu       $sp, $sp, -0x88
    ctx->r29 = ADD32(ctx->r29, -0X88);
    // 0x00297FB4: sdc1        $f20, 0x60($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X60, ctx->r29);
    // 0x00297FB8: mtc1        $a2, $f20
    ctx->f20.u32l = ctx->r6;
    // 0x00297FBC: sdc1        $f21, 0x68($sp)
    CHECK_FR(ctx, 21);
    SD(ctx->f21.u64, 0X68, ctx->r29);
    // 0x00297FC0: mtc1        $a3, $f21
    ctx->f_odd[(21 - 1) * 2] = ctx->r7;
    // 0x00297FC4: sdc1        $f22, 0x70($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X70, ctx->r29);
    // 0x00297FC8: lwc1        $f22, 0x98($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X98);
    // 0x00297FCC: sdc1        $f23, 0x78($sp)
    CHECK_FR(ctx, 23);
    SD(ctx->f23.u64, 0X78, ctx->r29);
    // 0x00297FD0: lwc1        $f23, 0x9C($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X9C);
    // 0x00297FD4: sw          $s2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r18;
    // 0x00297FD8: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x00297FDC: sw          $s1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r17;
    // 0x00297FE0: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
L_00297FE4:
    // 0x00297FE4: sw          $s0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r16;
    // 0x00297FE8: addiu       $s0, $sp, 0x10
    ctx->r16 = ADD32(ctx->r29, 0X10);
    // 0x00297FEC: sdc1        $f24, 0x80($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X80, ctx->r29);
    // 0x00297FF0: lwc1        $f24, 0xA0($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0XA0);
    // 0x00297FF4: sw          $ra, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r31;
    // 0x00297FF8: jal         0x00297BCC
    // 0x00297FFC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00297BCC(rdram, ctx);
        goto after_0;
    // 0x00297FFC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x00298000: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00298004: lwc1        $f0, -0x5800($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X5800);
    // 0x00298008: mul.s       $f20, $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = MUL_S(ctx->f20.fl, ctx->f0.fl);
    // 0x0029800C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00298010: lwc1        $f0, -0x57FC($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X57FC);
    // 0x00298014: mul.s       $f20, $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = MUL_S(ctx->f20.fl, ctx->f0.fl);
    // 0x00298018: jal         0x002974C0
    // 0x0029801C: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    func_002974C0(rdram, ctx);
        goto after_1;
    // 0x0029801C: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    after_1:
    // 0x00298020: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    // 0x00298024: jal         0x002982F0
    // 0x00298028: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    func_002982F0(rdram, ctx);
        goto after_2;
    // 0x00298028: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    after_2:
    // 0x0029802C: add.s       $f2, $f22, $f23
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 23);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f23.fl); 
    ctx->f2.fl = ctx->f22.fl + ctx->f23.fl;
    // 0x00298030: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x00298034: div.s       $f20, $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = DIV_S(ctx->f20.fl, ctx->f0.fl);
    // 0x00298038: sub.s       $f3, $f22, $f23
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 23);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f23.fl); 
    ctx->f3.fl = ctx->f22.fl - ctx->f23.fl;
    // 0x0029803C: div.s       $f21, $f20, $f21
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f21.fl); 
    ctx->f21.fl = DIV_S(ctx->f20.fl, ctx->f21.fl);
    // 0x00298040: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00298044: lwc1        $f1, -0x57F8($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, -0X57F8);
    // 0x00298048: add.s       $f0, $f22, $f22
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f0.fl = ctx->f22.fl + ctx->f22.fl;
    // 0x0029804C: swc1        $f21, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x00298050: swc1        $f20, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f20.u32l;
    // 0x00298054: mul.s       $f0, $f0, $f23
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 23);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f23.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f23.fl);
    // 0x00298058: sw          $zero, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = 0;
    // 0x0029805C: swc1        $f1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    // 0x00298060: div.s       $f2, $f2, $f3
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f2.fl = DIV_S(ctx->f2.fl, ctx->f3.fl);
    // 0x00298064: swc1        $f2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f2.u32l;
    // 0x00298068: div.s       $f0, $f0, $f3
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f0.fl = DIV_S(ctx->f0.fl, ctx->f3.fl);
    // 0x0029806C: swc1        $f0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f0.u32l;
L_00298070:
    // 0x00298070: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x00298074: addu        $v1, $s0, $zero
    ctx->r3 = ADD32(ctx->r16, 0);
L_00298078:
    // 0x00298078: lwc1        $f0, 0x0($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X0);
    // 0x0029807C: mul.s       $f0, $f0, $f24
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f24.fl);
    // 0x00298080: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x00298084: slti        $v0, $a0, 0x4
    ctx->r2 = SIGNED(ctx->r4) < 0X4 ? 1 : 0;
    // 0x00298088: swc1        $f0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f0.u32l;
    // 0x0029808C: bne         $v0, $zero, L_00298078
    if (ctx->r2 != 0) {
        // 0x00298090: addiu       $v1, $v1, 0x4
        ctx->r3 = ADD32(ctx->r3, 0X4);
            goto L_00298078;
    }
    // 0x00298090: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x00298094: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x00298098: slti        $v0, $a1, 0x4
    ctx->r2 = SIGNED(ctx->r5) < 0X4 ? 1 : 0;
    // 0x0029809C: bne         $v0, $zero, L_00298070
    if (ctx->r2 != 0) {
        // 0x002980A0: addiu       $s0, $s0, 0x10
        ctx->r16 = ADD32(ctx->r16, 0X10);
            goto L_00298070;
    }
    // 0x002980A0: addiu       $s0, $s0, 0x10
    ctx->r16 = ADD32(ctx->r16, 0X10);
    // 0x002980A4: beql        $s1, $zero, L_00298128
    if (ctx->r17 == 0) {
        // 0x002980A8: addiu       $a0, $sp, 0x10
        ctx->r4 = ADD32(ctx->r29, 0X10);
            goto L_00298128;
    }
    goto skip_0;
    // 0x002980A8: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    skip_0:
    // 0x002980AC: add.s       $f2, $f22, $f23
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 23);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f23.fl); 
    ctx->f2.fl = ctx->f22.fl + ctx->f23.fl;
    // 0x002980B0: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x002980B4: lwc1        $f0, -0x57F4($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X57F4);
    // 0x002980B8: c.le.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl <= ctx->f0.fl;
    // 0x002980BC: nop

    // 0x002980C0: bc1t        L_00298120
    if (c1cs) {
        // 0x002980C4: ori         $v0, $zero, 0xFFFF
        ctx->r2 = 0 | 0XFFFF;
            goto L_00298120;
    }
    // 0x002980C4: ori         $v0, $zero, 0xFFFF
    ctx->r2 = 0 | 0XFFFF;
    // 0x002980C8: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x002980CC: lwc1        $f0, -0x57F0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X57F0);
    // 0x002980D0: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x002980D4: lwc1        $f1, -0x57EC($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, -0X57EC);
    // 0x002980D8: div.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = DIV_S(ctx->f0.fl, ctx->f2.fl);
    // 0x002980DC: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x002980E0: nop

    // 0x002980E4: bc1tl       L_002980FC
    if (c1cs) {
        // 0x002980E8: sub.s       $f0, $f0, $f1
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
            goto L_002980FC;
    }
    goto skip_1;
    // 0x002980E8: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    skip_1:
    // 0x002980EC: trunc.w.s   $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x002980F0: mfc1        $v1, $f4
    ctx->r3 = (int32_t)ctx->f4.u32l;
    // 0x002980F4: j           L_00298110
    // 0x002980F8: sh          $v1, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r3;
        goto L_00298110;
    // 0x002980F8: sh          $v1, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r3;
L_002980FC:
    // 0x002980FC: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x00298100: trunc.w.s   $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x00298104: mfc1        $v1, $f4
    ctx->r3 = (int32_t)ctx->f4.u32l;
    // 0x00298108: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x0029810C: sh          $v1, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r3;
L_00298110:
    // 0x00298110: andi        $v0, $v1, 0xFFFF
    ctx->r2 = ctx->r3 & 0XFFFF;
    // 0x00298114: bne         $v0, $zero, L_00298128
    if (ctx->r2 != 0) {
        // 0x00298118: addiu       $a0, $sp, 0x10
        ctx->r4 = ADD32(ctx->r29, 0X10);
            goto L_00298128;
    }
    // 0x00298118: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x0029811C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_00298120:
    // 0x00298120: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
    // 0x00298124: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
L_00298128:
    // 0x00298128: jal         0x00297C1C
    // 0x0029812C: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    func_00297C1C(rdram, ctx);
        goto after_3;
    // 0x0029812C: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    after_3:
    // 0x00298130: lw          $ra, 0x5C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X5C);
    // 0x00298134: lw          $s2, 0x58($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X58);
    // 0x00298138: lw          $s1, 0x54($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X54);
    // 0x0029813C: lw          $s0, 0x50($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X50);
    // 0x00298140: ldc1        $f24, 0x80($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X80);
    // 0x00298144: ldc1        $f23, 0x78($sp)
    CHECK_FR(ctx, 23);
    ctx->f23.u64 = LD(ctx->r29, 0X78);
    // 0x00298148: ldc1        $f22, 0x70($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X70);
    // 0x0029814C: ldc1        $f21, 0x68($sp)
    CHECK_FR(ctx, 21);
    ctx->f21.u64 = LD(ctx->r29, 0X68);
    // 0x00298150: ldc1        $f20, 0x60($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X60);
    // 0x00298154: jr          $ra
    // 0x00298158: addiu       $sp, $sp, 0x88
    ctx->r29 = ADD32(ctx->r29, 0X88);
    return;
    // 0x00298158: addiu       $sp, $sp, 0x88
    ctx->r29 = ADD32(ctx->r29, 0X88);
;}
RECOMP_FUNC void func_00225E88(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00225E88: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00225E8C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x00225E90: beq         $a1, $v0, L_00225EAC
    if (ctx->r5 == ctx->r2) {
        // 0x00225E94: sw          $ra, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r31;
            goto L_00225EAC;
    }
    // 0x00225E94: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x00225E98: lw          $a0, 0x64($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X64);
    // 0x00225E9C: jal         0x002017D4
    // 0x00225EA0: nop

    func_002017D4(rdram, ctx);
        goto after_0;
    // 0x00225EA0: nop

    after_0:
    // 0x00225EA4: j           L_00225EB0
    // 0x00225EA8: nop

        goto L_00225EB0;
    // 0x00225EA8: nop

L_00225EAC:
    // 0x00225EAC: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_00225EB0:
    // 0x00225EB0: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x00225EB4: jr          $ra
    // 0x00225EB8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00225EB8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00418EF4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00418EF4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00418EF8: addiu       $v0, $zero, 0x1E
    ctx->r2 = ADD32(0, 0X1E);
    // 0x00418EFC: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x00418F00: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00418F04: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x00418F08: lui         $s0, 0x8012
    ctx->r16 = S32(0X8012 << 16);
    // 0x00418F0C: addiu       $s0, $s0, -0x5528
    ctx->r16 = ADD32(ctx->r16, -0X5528);
    // 0x00418F10: addu        $a0, $a1, $zero
    ctx->r4 = ADD32(ctx->r5, 0);
    // 0x00418F14: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    // 0x00418F18: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x00418F1C: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x00418F20: lb          $v0, 0x2A($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X2A);
    // 0x00418F24: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x00418F28: jal         0x0041648C
    // 0x00418F2C: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    func_0041648C(rdram, ctx);
        goto after_0;
    // 0x00418F2C: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    after_0:
    // 0x00418F30: sb          $v0, 0x2A($s0)
    MEM_B(0X2A, ctx->r16) = ctx->r2;
    // 0x00418F34: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x00418F38: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x00418F3C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x00418F40: jr          $ra
    // 0x00418F44: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00418F44: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_002199C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002199C8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x002199CC: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x002199D0: jal         0x0021793C
    // 0x002199D4: nop

    func_0021793C(rdram, ctx);
        goto after_0;
    // 0x002199D4: nop

    after_0:
    // 0x002199D8: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x002199DC: jal         0x002017D4
    // 0x002199E0: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    func_002017D4(rdram, ctx);
        goto after_1;
    // 0x002199E0: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_1:
    // 0x002199E4: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x002199E8: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x002199EC: jr          $ra
    // 0x002199F0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x002199F0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00229304(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00229304: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x00229308: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x0022930C: trunc.w.s   $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x00229310: mfc1        $v1, $f2
    ctx->r3 = (int32_t)ctx->f2.u32l;
    // 0x00229314: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x00229318: jr          $ra
    // 0x0022931C: sb          $v1, 0x0($t4)
    MEM_B(0X0, ctx->r12) = ctx->r3;
    return;
    // 0x0022931C: sb          $v1, 0x0($t4)
    MEM_B(0X0, ctx->r12) = ctx->r3;
;}
RECOMP_FUNC void func_0027BD30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0027BD30: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x0027BD34: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0027BD38: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x0027BD3C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x0027BD40: sdc1        $f21, 0x20($sp)
    CHECK_FR(ctx, 21);
    SD(ctx->f21.u64, 0X20, ctx->r29);
    // 0x0027BD44: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x0027BD48: lwc1        $f1, 0x4($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X4);
    // 0x0027BD4C: lwc1        $f0, 0x8($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X8);
    // 0x0027BD50: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x0027BD54: nop

    // 0x0027BD58: bc1tl       L_0027BD60
    if (c1cs) {
        // 0x0027BD5C: swc1        $f1, 0x8($s0)
        MEM_W(0X8, ctx->r16) = ctx->f_odd[(1 - 1) * 2];
            goto L_0027BD60;
    }
    goto skip_0;
    // 0x0027BD5C: swc1        $f1, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f_odd[(1 - 1) * 2];
    skip_0:
L_0027BD60:
    // 0x0027BD60: lwc1        $f0, 0xC($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0XC);
    // 0x0027BD64: mtc1        $zero, $f21
    ctx->f_odd[(21 - 1) * 2] = 0;
    // 0x0027BD68: c.eq.s      $f0, $f21
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 21);
    c1cs = ctx->f0.fl == ctx->f21.fl;
    // 0x0027BD6C: nop

    // 0x0027BD70: bc1f        L_0027BD84
    if (!c1cs) {
        // 0x0027BD74: nop
    
            goto L_0027BD84;
    }
    // 0x0027BD74: nop

    // 0x0027BD78: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0027BD7C: lwc1        $f0, -0x6830($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X6830);
    // 0x0027BD80: swc1        $f0, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->f0.u32l;
L_0027BD84:
    // 0x0027BD84: lwc1        $f0, 0x8($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X8);
    // 0x0027BD88: add.s       $f1, $f0, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f0.fl + ctx->f0.fl;
    // 0x0027BD8C: lwc1        $f0, 0xC($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0XC);
    // 0x0027BD90: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x0027BD94: nop

    // 0x0027BD98: bc1tl       L_0027BDA0
    if (c1cs) {
        // 0x0027BD9C: swc1        $f1, 0xC($s0)
        MEM_W(0XC, ctx->r16) = ctx->f_odd[(1 - 1) * 2];
            goto L_0027BDA0;
    }
    goto skip_1;
    // 0x0027BD9C: swc1        $f1, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f_odd[(1 - 1) * 2];
    skip_1:
L_0027BDA0:
    // 0x0027BDA0: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0027BDA4: lwc1        $f14, 0x6D28($at)
    ctx->f14.u32l = MEM_W(ctx->r1, 0X6D28);
    // 0x0027BDA8: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0027BDAC: lwc1        $f20, -0x682C($at)
    ctx->f20.u32l = MEM_W(ctx->r1, -0X682C);
    // 0x0027BDB0: mul.s       $f14, $f14, $f20
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f14.fl = MUL_S(ctx->f14.fl, ctx->f20.fl);
    // 0x0027BDB4: lwc1        $f12, 0x4($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X4);
    // 0x0027BDB8: jal         0x0021170C
    // 0x0027BDBC: nop

    func_0021170C(rdram, ctx);
        goto after_0;
    // 0x0027BDBC: nop

    after_0:
    // 0x0027BDC0: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0027BDC4: lwc1        $f14, 0x6D28($at)
    ctx->f14.u32l = MEM_W(ctx->r1, 0X6D28);
    // 0x0027BDC8: mul.s       $f14, $f14, $f20
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f14.fl = MUL_S(ctx->f14.fl, ctx->f20.fl);
    // 0x0027BDCC: lwc1        $f12, 0x8($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X8);
    // 0x0027BDD0: jal         0x0021170C
    // 0x0027BDD4: swc1        $f0, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f0.u32l;
    func_0021170C(rdram, ctx);
        goto after_1;
    // 0x0027BDD4: swc1        $f0, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f0.u32l;
    after_1:
    // 0x0027BDD8: lw          $v1, 0x0($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X0);
    // 0x0027BDDC: beq         $v1, $zero, L_0027BE34
    if (ctx->r3 == 0) {
        // 0x0027BDE0: swc1        $f0, 0x8($s0)
        MEM_W(0X8, ctx->r16) = ctx->f0.u32l;
            goto L_0027BE34;
    }
    // 0x0027BDE0: swc1        $f0, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f0.u32l;
    // 0x0027BDE4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0027BDE8: bne         $v1, $v0, L_0027BE5C
    if (ctx->r3 != ctx->r2) {
        // 0x0027BDEC: nop
    
            goto L_0027BE5C;
    }
    // 0x0027BDEC: nop

    // 0x0027BDF0: lwc1        $f1, 0xC($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0XC);
    // 0x0027BDF4: c.lt.s      $f21, $f1
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f21.fl < ctx->f1.fl;
    // 0x0027BDF8: nop

    // 0x0027BDFC: bc1f        L_0027BE60
    if (!c1cs) {
        // 0x0027BE00: nop
    
            goto L_0027BE60;
    }
    // 0x0027BE00: nop

    // 0x0027BE04: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0027BE08: lwc1        $f0, 0x6D28($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6D28);
    // 0x0027BE0C: mul.s       $f0, $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f20.fl);
    // 0x0027BE10: add.s       $f1, $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f1.fl;
    // 0x0027BE14: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x0027BE18: lwc1        $f0, 0x10($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X10);
    // 0x0027BE1C: lwc1        $f12, 0xC($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0XC);
    // 0x0027BE20: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x0027BE24: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0027BE28: lwc1        $f14, -0x6828($at)
    ctx->f14.u32l = MEM_W(ctx->r1, -0X6828);
    // 0x0027BE2C: j           L_0027BE50
    // 0x0027BE30: swc1        $f0, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->f0.u32l;
        goto L_0027BE50;
    // 0x0027BE30: swc1        $f0, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->f0.u32l;
L_0027BE34:
    // 0x0027BE34: lwc1        $f12, 0xC($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0XC);
    // 0x0027BE38: c.lt.s      $f21, $f12
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f21.fl < ctx->f12.fl;
    // 0x0027BE3C: nop

    // 0x0027BE40: bc1f        L_0027BE5C
    if (!c1cs) {
        // 0x0027BE44: nop
    
            goto L_0027BE5C;
    }
    // 0x0027BE44: nop

    // 0x0027BE48: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0027BE4C: lwc1        $f14, -0x6824($at)
    ctx->f14.u32l = MEM_W(ctx->r1, -0X6824);
L_0027BE50:
    // 0x0027BE50: jal         0x0021170C
    // 0x0027BE54: nop

    func_0021170C(rdram, ctx);
        goto after_2;
    // 0x0027BE54: nop

    after_2:
    // 0x0027BE58: swc1        $f0, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f0.u32l;
L_0027BE5C:
    // 0x0027BE5C: lwc1        $f1, 0xC($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0XC);
L_0027BE60:
    // 0x0027BE60: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x0027BE64: c.eq.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl == ctx->f0.fl;
    // 0x0027BE68: nop

    // 0x0027BE6C: bc1t        L_0027BE78
    if (c1cs) {
        // 0x0027BE70: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_0027BE78;
    }
    // 0x0027BE70: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0027BE74: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_0027BE78:
    // 0x0027BE78: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x0027BE7C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0027BE80: ldc1        $f21, 0x20($sp)
    CHECK_FR(ctx, 21);
    ctx->f21.u64 = LD(ctx->r29, 0X20);
    // 0x0027BE84: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x0027BE88: jr          $ra
    // 0x0027BE8C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x0027BE8C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_0042358C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0042358C: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x00423590: lw          $v0, 0x964($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X964);
    // 0x00423594: beq         $v0, $zero, L_004235AC
    if (ctx->r2 == 0) {
        // 0x00423598: nop
    
            goto L_004235AC;
    }
    // 0x00423598: nop

    // 0x0042359C: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x004235A0: addiu       $v0, $v0, 0x5088
    ctx->r2 = ADD32(ctx->r2, 0X5088);
    // 0x004235A4: j           L_004235B8
    // 0x004235A8: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_004235B8;
    // 0x004235A8: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_004235AC:
    // 0x004235AC: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x004235B0: addiu       $v0, $v0, 0x50C0
    ctx->r2 = ADD32(ctx->r2, 0X50C0);
    // 0x004235B4: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_004235B8:
    // 0x004235B8: jr          $ra
    // 0x004235BC: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x004235BC: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void func_00237F48(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00237F48: sll         $v1, $a2, 3
    ctx->r3 = S32(ctx->r6 << 3);
    // 0x00237F4C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00237F50: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x00237F54: lw          $v0, -0x2F80($at)
    ctx->r2 = MEM_W(ctx->r1, -0X2F80);
    // 0x00237F58: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x00237F5C: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x00237F60: beq         $v0, $zero, L_00237FA0
    if (ctx->r2 == 0) {
        // 0x00237F64: sw          $a3, 0x34($sp)
        MEM_W(0X34, ctx->r29) = ctx->r7;
            goto L_00237FA0;
    }
    // 0x00237F64: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    // 0x00237F68: lw          $t0, 0x40($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X40);
    // 0x00237F6C: lw          $t1, 0x44($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X44);
    // 0x00237F70: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x00237F74: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    // 0x00237F78: lw          $t0, 0x38($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X38);
    // 0x00237F7C: lw          $t1, 0x3C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X3C);
    // 0x00237F80: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x00237F84: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x00237F88: lw          $a3, 0x34($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X34);
    // 0x00237F8C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00237F90: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x00237F94: lw          $v0, -0x2F80($at)
    ctx->r2 = MEM_W(ctx->r1, -0X2F80);
    // 0x00237F98: jalr        $v0
    // 0x00237F9C: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x00237F9C: nop

    after_0:
L_00237FA0:
    // 0x00237FA0: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x00237FA4: jr          $ra
    // 0x00237FA8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x00237FA8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_004088B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004088B0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x004088B4: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x004088B8: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x004088BC: lui         $v0, 0x41
    ctx->r2 = S32(0X41 << 16);
    // 0x004088C0: addiu       $v0, $v0, -0x7A60
    ctx->r2 = ADD32(ctx->r2, -0X7A60);
    // 0x004088C4: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x004088C8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x004088CC: sw          $v0, 0xF0($a1)
    MEM_W(0XF0, ctx->r5) = ctx->r2;
    // 0x004088D0: lui         $v0, 0x41
    ctx->r2 = S32(0X41 << 16);
    // 0x004088D4: addiu       $v0, $v0, -0x7010
    ctx->r2 = ADD32(ctx->r2, -0X7010);
    // 0x004088D8: sw          $v0, 0xF8($a1)
    MEM_W(0XF8, ctx->r5) = ctx->r2;
    // 0x004088DC: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x004088E0: sw          $s1, -0x4B0($at)
    MEM_W(-0X4B0, ctx->r1) = ctx->r17;
    // 0x004088E4: lw          $v0, 0x14($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X14);
    // 0x004088E8: addiu       $v0, $v0, 0x14
    ctx->r2 = ADD32(ctx->r2, 0X14);
    // 0x004088EC: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x004088F0: sw          $v0, -0x4AC($at)
    MEM_W(-0X4AC, ctx->r1) = ctx->r2;
    // 0x004088F4: lw          $v0, 0x14($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X14);
    // 0x004088F8: lw          $v1, 0x54($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X54);
    // 0x004088FC: addiu       $a1, $zero, 0x5334
    ctx->r5 = ADD32(0, 0X5334);
    // 0x00408900: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x00408904: sw          $zero, -0x4A8($at)
    MEM_W(-0X4A8, ctx->r1) = 0;
    // 0x00408908: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0040890C: sw          $zero, -0x4A0($at)
    MEM_W(-0X4A0, ctx->r1) = 0;
    // 0x00408910: sll         $v0, $v1, 4
    ctx->r2 = S32(ctx->r3 << 4);
    // 0x00408914: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x00408918: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x0040891C: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00408920: lui         $v0, 0x41
    ctx->r2 = S32(0X41 << 16);
    // 0x00408924: addiu       $v0, $v0, -0x7620
    ctx->r2 = ADD32(ctx->r2, -0X7620);
    // 0x00408928: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0040892C: swc1        $f0, -0x4A4($at)
    MEM_W(-0X4A4, ctx->r1) = ctx->f0.u32l;
    // 0x00408930: sw          $v0, 0x234($s1)
    MEM_W(0X234, ctx->r17) = ctx->r2;
    // 0x00408934: lui         $s0, 0x8013
    ctx->r16 = S32(0X8013 << 16);
    // 0x00408938: lw          $s0, -0x4B0($s0)
    ctx->r16 = MEM_W(ctx->r16, -0X4B0);
    // 0x0040893C: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x00408940: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x00408944: sw          $zero, -0x49C($at)
    MEM_W(-0X49C, ctx->r1) = 0;
    // 0x00408948: jal         0x00219F74
    // 0x0040894C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00219F74(rdram, ctx);
        goto after_0;
    // 0x0040894C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x00408950: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x00408954: addiu       $a0, $a0, 0xF0
    ctx->r4 = ADD32(ctx->r4, 0XF0);
    // 0x00408958: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x0040895C: lui         $a2, 0x800C
    ctx->r6 = S32(0X800C << 16);
    // 0x00408960: addiu       $a2, $a2, 0x560
    ctx->r6 = ADD32(ctx->r6, 0X560);
    // 0x00408964: addiu       $a3, $s0, 0x140
    ctx->r7 = ADD32(ctx->r16, 0X140);
    // 0x00408968: sb          $v0, 0xC6($a3)
    MEM_B(0XC6, ctx->r7) = ctx->r2;
    // 0x0040896C: addiu       $v0, $zero, 0x5334
    ctx->r2 = ADD32(0, 0X5334);
    // 0x00408970: sh          $v0, 0xC4($a3)
    MEM_H(0XC4, ctx->r7) = ctx->r2;
    // 0x00408974: lw          $v0, 0x140($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X140);
    // 0x00408978: addiu       $v1, $zero, -0x2
    ctx->r3 = ADD32(0, -0X2);
    // 0x0040897C: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x00408980: sw          $v0, 0x140($s0)
    MEM_W(0X140, ctx->r16) = ctx->r2;
    // 0x00408984: jal         0x0027AD24
    // 0x00408988: sb          $zero, 0xC7($a3)
    MEM_B(0XC7, ctx->r7) = 0;
    func_0027AD24(rdram, ctx);
        goto after_1;
    // 0x00408988: sb          $zero, 0xC7($a3)
    MEM_B(0XC7, ctx->r7) = 0;
    after_1:
    // 0x0040898C: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x00408990: addiu       $a0, $a0, 0xF0
    ctx->r4 = ADD32(ctx->r4, 0XF0);
    // 0x00408994: lui         $a2, 0x800C
    ctx->r6 = S32(0X800C << 16);
    // 0x00408998: addiu       $a2, $a2, 0x568
    ctx->r6 = ADD32(ctx->r6, 0X568);
    // 0x0040899C: jal         0x0027AD54
    // 0x004089A0: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_0027AD54(rdram, ctx);
        goto after_2;
    // 0x004089A0: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_2:
    // 0x004089A4: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x004089A8: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x004089AC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x004089B0: jr          $ra
    // 0x004089B4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x004089B4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_0041BE5C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041BE5C: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x0041BE60: lw          $v1, -0x5378($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X5378);
    // 0x0041BE64: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x0041BE68: bne         $v1, $v0, L_0041BE80
    if (ctx->r3 != ctx->r2) {
        // 0x0041BE6C: lui         $v1, 0xFEFF
        ctx->r3 = S32(0XFEFF << 16);
            goto L_0041BE80;
    }
    // 0x0041BE6C: lui         $v1, 0xFEFF
    ctx->r3 = S32(0XFEFF << 16);
    // 0x0041BE70: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x0041BE74: lui         $v1, 0x100
    ctx->r3 = S32(0X100 << 16);
    // 0x0041BE78: j           L_0041BE8C
    // 0x0041BE7C: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
        goto L_0041BE8C;
    // 0x0041BE7C: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
L_0041BE80:
    // 0x0041BE80: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x0041BE84: ori         $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 | 0XFFFF;
    // 0x0041BE88: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
L_0041BE8C:
    // 0x0041BE8C: sw          $v0, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r2;
    // 0x0041BE90: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x0041BE94: lw          $v1, -0x5520($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X5520);
    // 0x0041BE98: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x0041BE9C: beq         $v1, $v0, L_0041BEE0
    if (ctx->r3 == ctx->r2) {
        // 0x0041BEA0: sltiu       $v0, $v1, 0x11
        ctx->r2 = ctx->r3 < 0X11 ? 1 : 0;
            goto L_0041BEE0;
    }
    // 0x0041BEA0: sltiu       $v0, $v1, 0x11
    ctx->r2 = ctx->r3 < 0X11 ? 1 : 0;
    // 0x0041BEA4: beq         $v0, $zero, L_0041BEBC
    if (ctx->r2 == 0) {
        // 0x0041BEA8: addiu       $v0, $zero, 0x8
        ctx->r2 = ADD32(0, 0X8);
            goto L_0041BEBC;
    }
    // 0x0041BEA8: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x0041BEAC: beq         $v1, $v0, L_0041BED0
    if (ctx->r3 == ctx->r2) {
        // 0x0041BEB0: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_0041BED0;
    }
    // 0x0041BEB0: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x0041BEB4: j           L_0041BF00
    // 0x0041BEB8: nop

        goto L_0041BF00;
    // 0x0041BEB8: nop

L_0041BEBC:
    // 0x0041BEBC: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x0041BEC0: beq         $v1, $v0, L_0041BEF0
    if (ctx->r3 == ctx->r2) {
        // 0x0041BEC4: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_0041BEF0;
    }
    // 0x0041BEC4: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x0041BEC8: j           L_0041BF00
    // 0x0041BECC: nop

        goto L_0041BF00;
    // 0x0041BECC: nop

L_0041BED0:
    // 0x0041BED0: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0041BED4: addiu       $v0, $v0, 0x3E70
    ctx->r2 = ADD32(ctx->r2, 0X3E70);
    // 0x0041BED8: j           L_0041BEFC
    // 0x0041BEDC: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_0041BEFC;
    // 0x0041BEDC: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_0041BEE0:
    // 0x0041BEE0: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0041BEE4: addiu       $v0, $v0, 0x3E88
    ctx->r2 = ADD32(ctx->r2, 0X3E88);
    // 0x0041BEE8: j           L_0041BEFC
    // 0x0041BEEC: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_0041BEFC;
    // 0x0041BEEC: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_0041BEF0:
    // 0x0041BEF0: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0041BEF4: addiu       $v0, $v0, 0x3EA0
    ctx->r2 = ADD32(ctx->r2, 0X3EA0);
    // 0x0041BEF8: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_0041BEFC:
    // 0x0041BEFC: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_0041BF00:
    // 0x0041BF00: jr          $ra
    // 0x0041BF04: nop

    return;
    // 0x0041BF04: nop

;}
RECOMP_FUNC void func_002768C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002768C8: srl         $v0, $v0, 9
    ctx->r2 = S32(U32(ctx->r2) >> 9);
    // 0x002768CC: sll         $a0, $v0, 2
    ctx->r4 = S32(ctx->r2 << 2);
;}
RECOMP_FUNC void func_002324E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002324E8: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x002324EC: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x002324F0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x002324F4: sw          $ra, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r31;
    // 0x002324F8: sw          $s3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r19;
    // 0x002324FC: sw          $s2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r18;
    // 0x00232500: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x00232504: lw          $s1, 0xF8($s0)
    ctx->r17 = MEM_W(ctx->r16, 0XF8);
    // 0x00232508: jal         0x002325F0
    // 0x0023250C: nop

    func_002325F0(rdram, ctx);
        goto after_0;
    // 0x0023250C: nop

    after_0:
    // 0x00232510: beq         $v0, $zero, L_0023251C
    if (ctx->r2 == 0) {
        // 0x00232514: addiu       $a0, $zero, 0xA
        ctx->r4 = ADD32(0, 0XA);
            goto L_0023251C;
    }
    // 0x00232514: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    // 0x00232518: addiu       $a0, $zero, 0xC
    ctx->r4 = ADD32(0, 0XC);
L_0023251C:
    // 0x0023251C: sll         $a1, $a0, 1
    ctx->r5 = S32(ctx->r4 << 1);
    // 0x00232520: lw          $v0, 0x18($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X18);
    // 0x00232524: sll         $a0, $a0, 3
    ctx->r4 = S32(ctx->r4 << 3);
    // 0x00232528: addu        $v1, $v0, $a1
    ctx->r3 = ADD32(ctx->r2, ctx->r5);
    // 0x0023252C: lhu         $s2, 0x70($v1)
    ctx->r18 = MEM_HU(ctx->r3, 0X70);
    // 0x00232530: lhu         $a2, 0x8C($v1)
    ctx->r6 = MEM_HU(ctx->r3, 0X8C);
    // 0x00232534: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x00232538: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x0023253C: lw          $t1, 0x4($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X4);
    // 0x00232540: sw          $t0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r8;
    // 0x00232544: sw          $t1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r9;
    // 0x00232548: lw          $v0, 0x18($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X18);
    // 0x0023254C: ori         $s1, $zero, 0xFFFF
    ctx->r17 = 0 | 0XFFFF;
    // 0x00232550: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x00232554: lhu         $s3, 0xA8($v0)
    ctx->r19 = MEM_HU(ctx->r2, 0XA8);
    // 0x00232558: beq         $a2, $s1, L_00232594
    if (ctx->r6 == ctx->r17) {
        // 0x0023255C: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_00232594;
    }
    // 0x0023255C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00232560: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x00232564: lw          $t0, 0x4($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X4);
    // 0x00232568: lw          $t1, 0x8($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X8);
    // 0x0023256C: lw          $t2, 0xC($s0)
    ctx->r10 = MEM_W(ctx->r16, 0XC);
    // 0x00232570: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x00232574: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x00232578: sw          $t2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r10;
    // 0x0023257C: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x00232580: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x00232584: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    // 0x00232588: sw          $t1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r9;
    // 0x0023258C: jal         0x00236EA0
    // 0x00232590: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    func_00236EA0(rdram, ctx);
        goto after_1;
    // 0x00232590: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    after_1:
L_00232594:
    // 0x00232594: beq         $s2, $s1, L_002325AC
    if (ctx->r18 == ctx->r17) {
        // 0x00232598: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_002325AC;
    }
    // 0x00232598: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0023259C: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x002325A0: lb          $a2, 0x1AC($s0)
    ctx->r6 = MEM_B(ctx->r16, 0X1AC);
    // 0x002325A4: jal         0x00229340
    // 0x002325A8: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    entry_00229340(rdram, ctx);
        goto after_2;
    // 0x002325A8: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_2:
L_002325AC:
    // 0x002325AC: beq         $s3, $s1, L_002325D4
    if (ctx->r19 == ctx->r17) {
        // 0x002325B0: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_002325D4;
    }
    // 0x002325B0: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x002325B4: sll         $a0, $s3, 16
    ctx->r4 = S32(ctx->r19 << 16);
    // 0x002325B8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x002325BC: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x002325C0: lw          $a1, 0x4($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X4);
    // 0x002325C4: lw          $a2, 0x8($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X8);
    // 0x002325C8: lw          $a3, 0xC($s0)
    ctx->r7 = MEM_W(ctx->r16, 0XC);
    // 0x002325CC: jal         0x00275544
    // 0x002325D0: sra         $a0, $a0, 16
    ctx->r4 = S32(SIGNED(ctx->r4) >> 16);
    func_00275544(rdram, ctx);
        goto after_3;
    // 0x002325D0: sra         $a0, $a0, 16
    ctx->r4 = S32(SIGNED(ctx->r4) >> 16);
    after_3:
L_002325D4:
    // 0x002325D4: lw          $ra, 0x40($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X40);
    // 0x002325D8: lw          $s3, 0x3C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X3C);
    // 0x002325DC: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x002325E0: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x002325E4: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x002325E8: jr          $ra
    // 0x002325EC: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x002325EC: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_00239254(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00239254: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x00239258: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x0023925C: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x00239260: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x00239264: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x00239268: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x0023926C: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x00239270: lui         $s3, 0x8012
    ctx->r19 = S32(0X8012 << 16);
    // 0x00239274: addiu       $s3, $s3, -0x535C
    ctx->r19 = ADD32(ctx->r19, -0X535C);
    // 0x00239278: sw          $ra, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r31;
    // 0x0023927C: sdc1        $f20, 0x38($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X38, ctx->r29);
    // 0x00239280: sw          $a3, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r7;
    // 0x00239284: lw          $v0, 0x0($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X0);
    // 0x00239288: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0023928C: lwc1        $f20, 0x65F0($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X65F0);
    // 0x00239290: bne         $v0, $zero, L_00239330
    if (ctx->r2 != 0) {
        // 0x00239294: addiu       $s2, $zero, -0x1
        ctx->r18 = ADD32(0, -0X1);
            goto L_00239330;
    }
    // 0x00239294: addiu       $s2, $zero, -0x1
    ctx->r18 = ADD32(0, -0X1);
    // 0x00239298: jal         0x00268E60
    // 0x0023929C: nop

    func_00268E60(rdram, ctx);
        goto after_0;
    // 0x0023929C: nop

    after_0:
    // 0x002392A0: lw          $v1, 0x5C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X5C);
    // 0x002392A4: bne         $v0, $v1, L_00239330
    if (ctx->r2 != ctx->r3) {
        // 0x002392A8: nop
    
            goto L_00239330;
    }
    // 0x002392A8: nop

    // 0x002392AC: lbu         $v1, 0x0($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X0);
    // 0x002392B0: beq         $v1, $zero, L_002392C8
    if (ctx->r3 == 0) {
        // 0x002392B4: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_002392C8;
    }
    // 0x002392B4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x002392B8: beq         $v1, $v0, L_002392D4
    if (ctx->r3 == ctx->r2) {
        // 0x002392BC: nop
    
            goto L_002392D4;
    }
    // 0x002392BC: nop

    // 0x002392C0: j           L_0023930C
    // 0x002392C4: nop

        goto L_0023930C;
    // 0x002392C4: nop

L_002392C8:
    // 0x002392C8: lw          $s2, 0x80($s0)
    ctx->r18 = MEM_W(ctx->r16, 0X80);
    // 0x002392CC: j           L_0023930C
    // 0x002392D0: nop

        goto L_0023930C;
    // 0x002392D0: nop

L_002392D4:
    // 0x002392D4: lw          $v0, 0x14($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X14);
    // 0x002392D8: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x002392DC: bne         $v0, $v1, L_0023930C
    if (ctx->r2 != ctx->r3) {
        // 0x002392E0: nop
    
            goto L_0023930C;
    }
    // 0x002392E0: nop

    // 0x002392E4: lw          $v1, -0x1CC($s3)
    ctx->r3 = MEM_W(ctx->r19, -0X1CC);
    // 0x002392E8: andi        $v0, $v1, 0x40
    ctx->r2 = ctx->r3 & 0X40;
    // 0x002392EC: beq         $v0, $zero, L_002392FC
    if (ctx->r2 == 0) {
        // 0x002392F0: andi        $v0, $v1, 0x20
        ctx->r2 = ctx->r3 & 0X20;
            goto L_002392FC;
    }
    // 0x002392F0: andi        $v0, $v1, 0x20
    ctx->r2 = ctx->r3 & 0X20;
    // 0x002392F4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002392F8: lwc1        $f20, 0x65F4($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X65F4);
L_002392FC:
    // 0x002392FC: beq         $v0, $zero, L_0023930C
    if (ctx->r2 == 0) {
        // 0x00239300: nop
    
            goto L_0023930C;
    }
    // 0x00239300: nop

    // 0x00239304: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00239308: lwc1        $f20, 0x65F8($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X65F8);
L_0023930C:
    // 0x0023930C: lh          $a0, 0x5A($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X5A);
    // 0x00239310: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x00239314: sw          $s2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r18;
    // 0x00239318: swc1        $f20, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f20.u32l;
    // 0x0023931C: lw          $a1, 0x4C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X4C);
    // 0x00239320: lw          $a2, 0x50($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X50);
    // 0x00239324: lw          $a3, 0x54($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X54);
    // 0x00239328: jal         0x002755B0
    // 0x0023932C: nop

    func_002755B0(rdram, ctx);
        goto after_1;
    // 0x0023932C: nop

    after_1:
L_00239330:
    // 0x00239330: lw          $ra, 0x30($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X30);
    // 0x00239334: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x00239338: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x0023933C: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x00239340: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x00239344: ldc1        $f20, 0x38($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X38);
    // 0x00239348: jr          $ra
    // 0x0023934C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x0023934C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_0025A83C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0025A83C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0025A840: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x0025A844: lw          $v0, 0x14($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X14);
    // 0x0025A848: lhu         $a3, 0x8A($v0)
    ctx->r7 = MEM_HU(ctx->r2, 0X8A);
    // 0x0025A84C: lui         $a2, 0x800B
    ctx->r6 = S32(0X800B << 16);
    // 0x0025A850: addiu       $a2, $a2, 0x120
    ctx->r6 = ADD32(ctx->r6, 0X120);
    // 0x0025A854: jal         0x00245A98
    // 0x0025A858: nop

    func_00245A98(rdram, ctx);
        goto after_0;
    // 0x0025A858: nop

    after_0:
    // 0x0025A85C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x0025A860: jr          $ra
    // 0x0025A864: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0025A864: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0044C038(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0044C038: mtc1        $a2, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r6;
    // 0x0044C03C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0044C040: lwc1        $f0, 0xAE4($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0XAE4);
    // 0x0044C044: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x0044C048: mul.s       $f12, $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = MUL_S(ctx->f12.fl, ctx->f0.fl);
    // 0x0044C04C: nop

    // 0x0044C050: mul.s       $f0, $f14, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f14.fl, ctx->f1.fl);
    // 0x0044C054: jr          $ra
    // 0x0044C058: add.s       $f0, $f12, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f12.fl + ctx->f0.fl;
    return;
    // 0x0044C058: add.s       $f0, $f12, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f12.fl + ctx->f0.fl;
;}
RECOMP_FUNC void func_0029A718(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0029A718: bne         $v1, $v0, L_0029A74C
    if (ctx->r3 != ctx->r2) {
        // 0x0029A71C: nop
    
            goto L_0029A74C;
    }
    // 0x0029A71C: nop

    // 0x0029A720: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x0029A724: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x0029A728: lui         $s2, 0x800B
    ctx->r18 = S32(0X800B << 16);
    // 0x0029A72C: addiu       $s2, $s2, 0x7AD0
    ctx->r18 = ADD32(ctx->r18, 0X7AD0);
    // 0x0029A730: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x0029A734: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x0029A738: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x0029A73C: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x0029A740: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x0029A744: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
    // 0x0029A748: bne         $v0, $zero, L_0029A870
    if (ctx->r2 != 0) {
        // 0x0029A74C: addu        $s4, $a0, $zero
        ctx->r20 = ADD32(ctx->r4, 0);
            goto L_0029A870;
    }
L_0029A74C:
    // 0x0029A74C: addu        $s4, $a0, $zero
    ctx->r20 = ADD32(ctx->r4, 0);
    // 0x0029A750: jal         0x0029BDB8
    // 0x0029A754: addiu       $s3, $zero, -0x1
    ctx->r19 = ADD32(0, -0X1);
    func_0029BDB8(rdram, ctx);
        goto after_0;
    // 0x0029A754: addiu       $s3, $zero, -0x1
    ctx->r19 = ADD32(0, -0X1);
    after_0:
    // 0x0029A758: lui         $s1, 0x8012
    ctx->r17 = S32(0X8012 << 16);
    // 0x0029A75C: addiu       $s1, $s1, 0x2910
    ctx->r17 = ADD32(ctx->r17, 0X2910);
    // 0x0029A760: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0029A764: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x0029A768: addiu       $a1, $a1, 0x2930
    ctx->r5 = ADD32(ctx->r5, 0X2930);
    // 0x0029A76C: jal         0x0029B030
    // 0x0029A770: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    osCreateMesgQueue_recomp(rdram, ctx);
        goto after_1;
    // 0x0029A770: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    after_1:
    // 0x0029A774: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    // 0x0029A778: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x0029A77C: lui         $a2, 0x8012
    ctx->r6 = S32(0X8012 << 16);
    // 0x0029A780: addiu       $a2, $a2, 0x2950
    ctx->r6 = ADD32(ctx->r6, 0X2950);
    // 0x0029A784: addiu       $v0, $zero, 0xD
    ctx->r2 = ADD32(0, 0XD);
    // 0x0029A788: lui         $s0, 0x8012
    ctx->r16 = S32(0X8012 << 16);
    // 0x0029A78C: addiu       $s0, $s0, 0x2970
    ctx->r16 = ADD32(ctx->r16, 0X2970);
    // 0x0029A790: sh          $v0, 0x0($a2)
    MEM_H(0X0, ctx->r6) = ctx->r2;
    // 0x0029A794: addiu       $v0, $zero, 0xE
    ctx->r2 = ADD32(0, 0XE);
    // 0x0029A798: sb          $zero, 0x2($a2)
    MEM_B(0X2, ctx->r6) = 0;
    // 0x0029A79C: sw          $zero, 0x4($a2)
    MEM_W(0X4, ctx->r6) = 0;
    // 0x0029A7A0: sh          $v0, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r2;
    // 0x0029A7A4: sb          $zero, 0x2($s0)
    MEM_B(0X2, ctx->r16) = 0;
    // 0x0029A7A8: jal         0x0029B950
    // 0x0029A7AC: sw          $zero, 0x4($s0)
    MEM_W(0X4, ctx->r16) = 0;
    osSetEventMesg_recomp(rdram, ctx);
        goto after_2;
    // 0x0029A7AC: sw          $zero, 0x4($s0)
    MEM_W(0X4, ctx->r16) = 0;
    after_2:
    // 0x0029A7B0: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    // 0x0029A7B4: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x0029A7B8: jal         0x0029B950
    // 0x0029A7BC: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    osSetEventMesg_recomp(rdram, ctx);
        goto after_3;
    // 0x0029A7BC: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    after_3:
    // 0x0029A7C0: jal         0x0029B150
    // 0x0029A7C4: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_0029B150(rdram, ctx);
        goto after_4;
    // 0x0029A7C4: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_4:
    // 0x0029A7C8: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x0029A7CC: slt         $v0, $v1, $s4
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r20) ? 1 : 0;
    // 0x0029A7D0: beq         $v0, $zero, L_0029A7E8
    if (ctx->r2 == 0) {
        // 0x0029A7D4: nop
    
            goto L_0029A7E8;
    }
    // 0x0029A7D4: nop

    // 0x0029A7D8: addu        $s3, $v1, $zero
    ctx->r19 = ADD32(ctx->r3, 0);
    // 0x0029A7DC: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0029A7E0: jal         0x0029B9B0
    // 0x0029A7E4: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    func_0029B9B0(rdram, ctx);
        goto after_5;
    // 0x0029A7E4: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    after_5:
L_0029A7E8:
    // 0x0029A7E8: jal         0x0029DFF0
    // 0x0029A7EC: nop

    func_0029DFF0(rdram, ctx);
        goto after_6;
    // 0x0029A7EC: nop

    after_6:
    // 0x0029A7F0: lui         $s0, 0x8012
    ctx->r16 = S32(0X8012 << 16);
    // 0x0029A7F4: addiu       $s0, $s0, 0x16E0
    ctx->r16 = ADD32(ctx->r16, 0X16E0);
    // 0x0029A7F8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0029A7FC: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x0029A800: lui         $a2, 0x2A
    ctx->r6 = S32(0X2A << 16);
    // 0x0029A804: addiu       $a2, $a2, -0x5770
    ctx->r6 = ADD32(ctx->r6, -0X5770);
    // 0x0029A808: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x0029A80C: sw          $v1, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r3;
    // 0x0029A810: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x0029A814: addiu       $v1, $v1, 0x2910
    ctx->r3 = ADD32(ctx->r3, 0X2910);
    // 0x0029A818: sw          $s1, 0x8($s2)
    MEM_W(0X8, ctx->r18) = ctx->r17;
    // 0x0029A81C: sw          $s1, 0xC($s2)
    MEM_W(0XC, ctx->r18) = ctx->r17;
    // 0x0029A820: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x0029A824: addu        $a3, $s2, $zero
    ctx->r7 = ADD32(ctx->r18, 0);
    // 0x0029A828: sw          $s0, 0x4($s2)
    MEM_W(0X4, ctx->r18) = ctx->r16;
    // 0x0029A82C: sw          $zero, 0x10($s2)
    MEM_W(0X10, ctx->r18) = 0;
    // 0x0029A830: sw          $zero, 0x14($s2)
    MEM_W(0X14, ctx->r18) = 0;
    // 0x0029A834: sw          $zero, 0x18($s2)
    MEM_W(0X18, ctx->r18) = 0;
    // 0x0029A838: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    // 0x0029A83C: jal         0x0029B060
    // 0x0029A840: sw          $s4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r20;
    osCreateThread_recomp(rdram, ctx);
        goto after_7;
    // 0x0029A840: sw          $s4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r20;
    after_7:
    // 0x0029A844: jal         0x0029A5E0
    // 0x0029A848: nop

    func_0029A5E0(rdram, ctx);
        goto after_8;
    // 0x0029A848: nop

    after_8:
    // 0x0029A84C: jal         0x0029BB10
    // 0x0029A850: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    osStartThread_recomp(rdram, ctx);
        goto after_9;
    // 0x0029A850: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_9:
    // 0x0029A854: jal         0x0029E010
    // 0x0029A858: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_0029E010(rdram, ctx);
        goto after_10;
    // 0x0029A858: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_10:
    // 0x0029A85C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x0029A860: beq         $s3, $v0, L_0029A870
    if (ctx->r19 == ctx->r2) {
        // 0x0029A864: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_0029A870;
    }
    // 0x0029A864: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0029A868: jal         0x0029B9B0
    // 0x0029A86C: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    func_0029B9B0(rdram, ctx);
        goto after_11;
    // 0x0029A86C: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    after_11:
L_0029A870:
    // 0x0029A870: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x0029A874: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x0029A878: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x0029A87C: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x0029A880: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x0029A884: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x0029A888: jr          $ra
    // 0x0029A88C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x0029A88C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_0045FD5C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0045FD5C: addiu       $a2, $zero, 0x7E
    ctx->r6 = ADD32(0, 0X7E);
    // 0x0045FD60: addiu       $v1, $zero, -0x1
    ctx->r3 = ADD32(0, -0X1);
L_0045FD64:
    // 0x0045FD64: lbu         $v0, 0x0($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X0);
    // 0x0045FD68: beq         $v0, $a2, L_0045FD84
    if (ctx->r2 == ctx->r6) {
            // 0x0045FD6C: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    func_0045FD84(rdram, ctx);
    return;
    }
    // 0x0045FD6C: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x0045FD70: addiu       $a1, $a1, -0x1
    ctx->r5 = ADD32(ctx->r5, -0X1);
    // 0x0045FD74: bne         $a1, $v1, L_0045FD64
    if (ctx->r5 != ctx->r3) {
        // 0x0045FD78: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_0045FD64;
    }
    // 0x0045FD78: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x0045FD7C: jr          $ra
    // 0x0045FD80: nop

    return;
    // 0x0045FD80: nop

;}
RECOMP_FUNC void func_00266FC0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00266FC0: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x00266FC4: addiu       $v1, $v1, -0x4F50
    ctx->r3 = ADD32(ctx->r3, -0X4F50);
    // 0x00266FC8: sltu        $v0, $a0, $v1
    ctx->r2 = ctx->r4 < ctx->r3 ? 1 : 0;
    // 0x00266FCC: bne         $v0, $zero, L_00266FEC
    if (ctx->r2 != 0) {
        // 0x00266FD0: nop
    
            goto L_00266FEC;
    }
    // 0x00266FD0: nop

    // 0x00266FD4: lui         $v0, 0x1
    ctx->r2 = S32(0X1 << 16);
    // 0x00266FD8: addiu       $v0, $v0, 0x1059
    ctx->r2 = ADD32(ctx->r2, 0X1059);
    // 0x00266FDC: addu        $v0, $v1, $v0
    ctx->r2 = ADD32(ctx->r3, ctx->r2);
    // 0x00266FE0: sltu        $v0, $a0, $v0
    ctx->r2 = ctx->r4 < ctx->r2 ? 1 : 0;
    // 0x00266FE4: bne         $v0, $zero, L_0026701C
    if (ctx->r2 != 0) {
        // 0x00266FE8: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_0026701C;
    }
    // 0x00266FE8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_00266FEC:
    // 0x00266FEC: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x00266FF0: addiu       $a1, $a1, 0x18F0
    ctx->r5 = ADD32(ctx->r5, 0X18F0);
    // 0x00266FF4: sltu        $v0, $a0, $a1
    ctx->r2 = ctx->r4 < ctx->r5 ? 1 : 0;
    // 0x00266FF8: bne         $v0, $zero, L_0026701C
    if (ctx->r2 != 0) {
        // 0x00266FFC: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_0026701C;
    }
    // 0x00266FFC: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x00267000: lui         $v1, 0x0
    ctx->r3 = S32(0X0 << 16);
    // 0x00267004: addiu       $v1, $v1, 0x94F
    ctx->r3 = ADD32(ctx->r3, 0X94F);
    // 0x00267008: addu        $v1, $a1, $v1
    ctx->r3 = ADD32(ctx->r5, ctx->r3);
    // 0x0026700C: sltu        $v1, $a0, $v1
    ctx->r3 = ctx->r4 < ctx->r3 ? 1 : 0;
    // 0x00267010: bne         $v1, $zero, L_0026701C
    if (ctx->r3 != 0) {
        // 0x00267014: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_0026701C;
    }
    // 0x00267014: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00267018: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_0026701C:
    // 0x0026701C: jr          $ra
    // 0x00267020: nop

    return;
    // 0x00267020: nop

;}
RECOMP_FUNC void func_00250430(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00250430: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x00250434: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00250438: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x0025043C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00250440: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x00250444: sdc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X20, ctx->r29);
    // 0x00250448: jal         0x0024FC08
    // 0x0025044C: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    func_0024FC08(rdram, ctx);
        goto after_0;
    // 0x0025044C: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    after_0:
    // 0x00250450: lwc1        $f1, 0xAC0($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0XAC0);
    // 0x00250454: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00250458: lwc1        $f0, 0x6EF8($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6EF8);
    // 0x0025045C: lwc1        $f20, 0x50($s1)
    ctx->f20.u32l = MEM_W(ctx->r17, 0X50);
    // 0x00250460: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x00250464: nop

    // 0x00250468: bc1t        L_00250474
    if (c1cs) {
        // 0x0025046C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_00250474;
    }
    // 0x0025046C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00250470: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_00250474:
    // 0x00250474: beq         $v0, $zero, L_0025048C
    if (ctx->r2 == 0) {
        // 0x00250478: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_0025048C;
    }
    // 0x00250478: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0025047C: lui         $a2, 0x800B
    ctx->r6 = S32(0X800B << 16);
    // 0x00250480: addiu       $a2, $a2, -0x2178
    ctx->r6 = ADD32(ctx->r6, -0X2178);
    // 0x00250484: j           L_00250498
    // 0x00250488: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
        goto L_00250498;
    // 0x00250488: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
L_0025048C:
    // 0x0025048C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x00250490: lui         $a2, 0x800B
    ctx->r6 = S32(0X800B << 16);
    // 0x00250494: addiu       $a2, $a2, -0x2190
    ctx->r6 = ADD32(ctx->r6, -0X2190);
L_00250498:
    // 0x00250498: jal         0x0024EF70
    // 0x0025049C: nop

    func_0024EF70(rdram, ctx);
        goto after_1;
    // 0x0025049C: nop

    after_1:
    // 0x002504A0: lwc1        $f0, 0x50($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X50);
    // 0x002504A4: lw          $v0, 0xB8C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XB8C);
    // 0x002504A8: bne         $v0, $zero, L_00250514
    if (ctx->r2 != 0) {
        // 0x002504AC: sub.s       $f20, $f0, $f20
        CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f20.fl = ctx->f0.fl - ctx->f20.fl;
            goto L_00250514;
    }
    // 0x002504AC: sub.s       $f20, $f0, $f20
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f20.fl = ctx->f0.fl - ctx->f20.fl;
    // 0x002504B0: lwc1        $f1, 0xA9C($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0XA9C);
    // 0x002504B4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002504B8: lwc1        $f0, 0x6EFC($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6EFC);
    // 0x002504BC: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x002504C0: nop

    // 0x002504C4: bc1t        L_00250518
    if (c1cs) {
        // 0x002504C8: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_00250518;
    }
    // 0x002504C8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x002504CC: lw          $v0, 0x140($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X140);
    // 0x002504D0: andi        $v0, $v0, 0x6000
    ctx->r2 = ctx->r2 & 0X6000;
    // 0x002504D4: bne         $v0, $zero, L_00250518
    if (ctx->r2 != 0) {
        // 0x002504D8: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_00250518;
    }
    // 0x002504D8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x002504DC: lw          $v0, 0x14($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X14);
    // 0x002504E0: lw          $v0, 0x14($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X14);
    // 0x002504E4: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x002504E8: beq         $v0, $zero, L_00250518
    if (ctx->r2 == 0) {
        // 0x002504EC: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_00250518;
    }
    // 0x002504EC: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x002504F0: lw          $v0, 0xA68($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XA68);
    // 0x002504F4: andi        $v0, $v0, 0x10
    ctx->r2 = ctx->r2 & 0X10;
    // 0x002504F8: beq         $v0, $zero, L_00250514
    if (ctx->r2 == 0) {
        // 0x002504FC: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_00250514;
    }
    // 0x002504FC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00250500: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x00250504: jal         0x0024E5F0
    // 0x00250508: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    func_0024E5F0(rdram, ctx);
        goto after_2;
    // 0x00250508: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_2:
    // 0x0025050C: j           L_00250518
    // 0x00250510: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_00250518;
    // 0x00250510: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_00250514:
    // 0x00250514: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_00250518:
    // 0x00250518: bne         $v0, $zero, L_002505E0
    if (ctx->r2 != 0) {
        // 0x0025051C: nop
    
            goto L_002505E0;
    }
    // 0x0025051C: nop

    // 0x00250520: lwc1        $f0, 0xA5C($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0XA5C);
    // 0x00250524: mtc1        $zero, $f1
    ctx->f_odd[(1 - 1) * 2] = 0;
    // 0x00250528: c.eq.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl == ctx->f1.fl;
    // 0x0025052C: nop

    // 0x00250530: bc1f        L_00250558
    if (!c1cs) {
        // 0x00250534: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_00250558;
    }
    // 0x00250534: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x00250538: lw          $v1, 0xB8C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XB8C);
    // 0x0025053C: beq         $v1, $v0, L_00250568
    if (ctx->r3 == ctx->r2) {
        // 0x00250540: nop
    
            goto L_00250568;
    }
    // 0x00250540: nop

    // 0x00250544: lwc1        $f0, 0xA60($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0XA60);
    // 0x00250548: c.eq.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl == ctx->f1.fl;
    // 0x0025054C: nop

    // 0x00250550: bc1t        L_00250568
    if (c1cs) {
        // 0x00250554: nop
    
            goto L_00250568;
    }
    // 0x00250554: nop

L_00250558:
    // 0x00250558: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0025055C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x00250560: jal         0x0024E5F0
    // 0x00250564: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    func_0024E5F0(rdram, ctx);
        goto after_3;
    // 0x00250564: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_3:
L_00250568:
    // 0x00250568: lw          $v1, 0xC04($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XC04);
    // 0x0025056C: addiu       $v0, $zero, 0x1130
    ctx->r2 = ADD32(0, 0X1130);
    // 0x00250570: beq         $v1, $v0, L_00250584
    if (ctx->r3 == ctx->r2) {
        // 0x00250574: addiu       $a0, $zero, 0x1
        ctx->r4 = ADD32(0, 0X1);
            goto L_00250584;
    }
    // 0x00250574: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x00250578: addiu       $v0, $zero, 0x1135
    ctx->r2 = ADD32(0, 0X1135);
    // 0x0025057C: bne         $v1, $v0, L_00250590
    if (ctx->r3 != ctx->r2) {
        // 0x00250580: nop
    
            goto L_00250590;
    }
    // 0x00250580: nop

L_00250584:
    // 0x00250584: lb          $v0, 0xE2($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XE2);
    // 0x00250588: beql        $v0, $zero, L_00250590
    if (ctx->r2 == 0) {
        // 0x0025058C: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_00250590;
    }
    goto skip_0;
    // 0x0025058C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    skip_0:
L_00250590:
    // 0x00250590: beq         $a0, $zero, L_002505E0
    if (ctx->r4 == 0) {
        // 0x00250594: nop
    
            goto L_002505E0;
    }
    // 0x00250594: nop

    // 0x00250598: lw          $v0, 0x140($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X140);
    // 0x0025059C: andi        $v0, $v0, 0x6000
    ctx->r2 = ctx->r2 & 0X6000;
    // 0x002505A0: bne         $v0, $zero, L_002505DC
    if (ctx->r2 != 0) {
        // 0x002505A4: addiu       $v0, $zero, 0xA28
        ctx->r2 = ADD32(0, 0XA28);
            goto L_002505DC;
    }
    // 0x002505A4: addiu       $v0, $zero, 0xA28
    ctx->r2 = ADD32(0, 0XA28);
    // 0x002505A8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002505AC: lwc1        $f0, 0x6F00($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6F00);
    // 0x002505B0: c.lt.s      $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f0.fl < ctx->f20.fl;
    // 0x002505B4: nop

    // 0x002505B8: bc1t        L_002505DC
    if (c1cs) {
        // 0x002505BC: addiu       $v0, $zero, 0xB5E
        ctx->r2 = ADD32(0, 0XB5E);
            goto L_002505DC;
    }
    // 0x002505BC: addiu       $v0, $zero, 0xB5E
    ctx->r2 = ADD32(0, 0XB5E);
    // 0x002505C0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002505C4: lwc1        $f0, 0x6F04($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6F04);
    // 0x002505C8: c.lt.s      $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f20.fl < ctx->f0.fl;
    // 0x002505CC: nop

    // 0x002505D0: bc1t        L_002505DC
    if (c1cs) {
        // 0x002505D4: addiu       $v0, $zero, 0xB54
        ctx->r2 = ADD32(0, 0XB54);
            goto L_002505DC;
    }
    // 0x002505D4: addiu       $v0, $zero, 0xB54
    ctx->r2 = ADD32(0, 0XB54);
    // 0x002505D8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_002505DC:
    // 0x002505DC: sw          $v0, 0xC04($s0)
    MEM_W(0XC04, ctx->r16) = ctx->r2;
L_002505E0:
    // 0x002505E0: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x002505E4: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x002505E8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x002505EC: ldc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X20);
    // 0x002505F0: jr          $ra
    // 0x002505F4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x002505F4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_002565C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002565C0: lwc1        $f0, 0xAB0($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0XAB0);
    // 0x002565C4: sw          $zero, 0xAB8($a0)
    MEM_W(0XAB8, ctx->r4) = 0;
    // 0x002565C8: sw          $zero, 0xABC($a0)
    MEM_W(0XABC, ctx->r4) = 0;
    // 0x002565CC: jr          $ra
    // 0x002565D0: swc1        $f0, 0xAB4($a0)
    MEM_W(0XAB4, ctx->r4) = ctx->f0.u32l;
    return;
    // 0x002565D0: swc1        $f0, 0xAB4($a0)
    MEM_W(0XAB4, ctx->r4) = ctx->f0.u32l;
;}
RECOMP_FUNC void func_00297420(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00297420: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00297424: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00297428: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x0029742C: sll         $v0, $a1, 16
    ctx->r2 = S32(ctx->r5 << 16);
    // 0x00297430: addu        $a1, $a2, $zero
    ctx->r5 = ADD32(ctx->r6, 0);
    // 0x00297434: addu        $a2, $a3, $zero
    ctx->r6 = ADD32(ctx->r7, 0);
    // 0x00297438: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x0029743C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00297440: sll         $s0, $v0, 2
    ctx->r16 = S32(ctx->r2 << 2);
    // 0x00297444: addu        $s0, $s0, $v0
    ctx->r16 = ADD32(ctx->r16, ctx->r2);
    // 0x00297448: sll         $s0, $s0, 2
    ctx->r16 = S32(ctx->r16 << 2);
    // 0x0029744C: subu        $s0, $s0, $v0
    ctx->r16 = SUB32(ctx->r16, ctx->r2);
    // 0x00297450: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x00297454: lw          $a0, 0x34($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X34);
    // 0x00297458: sll         $s0, $s0, 2
    ctx->r16 = S32(ctx->r16 << 2);
    // 0x0029745C: addu        $a0, $a0, $s0
    ctx->r4 = ADD32(ctx->r4, ctx->r16);
    // 0x00297460: jal         0x00294E70
    // 0x00297464: addiu       $a0, $a0, 0x20
    ctx->r4 = ADD32(ctx->r4, 0X20);
    func_00294E70(rdram, ctx);
        goto after_0;
    // 0x00297464: addiu       $a0, $a0, 0x20
    ctx->r4 = ADD32(ctx->r4, 0X20);
    after_0:
    // 0x00297468: lw          $a2, 0x34($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X34);
    // 0x0029746C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x00297470: addu        $a2, $a2, $s0
    ctx->r6 = ADD32(ctx->r6, ctx->r16);
    // 0x00297474: jal         0x00297038
    // 0x00297478: addiu       $a0, $a2, 0x20
    ctx->r4 = ADD32(ctx->r6, 0X20);
    func_00297038(rdram, ctx);
        goto after_1;
    // 0x00297478: addiu       $a0, $a2, 0x20
    ctx->r4 = ADD32(ctx->r6, 0X20);
    after_1:
    // 0x0029747C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x00297480: lw          $a2, 0x34($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X34);
    // 0x00297484: lw          $a0, 0x30($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X30);
    // 0x00297488: addu        $a2, $a2, $s0
    ctx->r6 = ADD32(ctx->r6, ctx->r16);
    // 0x0029748C: jal         0x002964A0
    // 0x00297490: addiu       $a2, $a2, 0x20
    ctx->r6 = ADD32(ctx->r6, 0X20);
    func_002964A0(rdram, ctx);
        goto after_2;
    // 0x00297490: addiu       $a2, $a2, 0x20
    ctx->r6 = ADD32(ctx->r6, 0X20);
    after_2:
    // 0x00297494: lw          $v0, 0x34($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X34);
    // 0x00297498: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x0029749C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x002974A0: addu        $v0, $v0, $s0
    ctx->r2 = ADD32(ctx->r2, ctx->r16);
    // 0x002974A4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x002974A8: addiu       $v0, $v0, 0x20
    ctx->r2 = ADD32(ctx->r2, 0X20);
    // 0x002974AC: jr          $ra
    // 0x002974B0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x002974B0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_002A50D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002A50D4: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x002A50D8: jr          $ra
    // 0x002A50DC: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x002A50DC: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_00426164(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00426164: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x00426168: sw          $s7, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r23;
    // 0x0042616C: addu        $s7, $a0, $zero
    ctx->r23 = ADD32(ctx->r4, 0);
    // 0x00426170: sw          $a1, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r5;
    // 0x00426174: addiu       $v1, $a1, 0xFF
    ctx->r3 = ADD32(ctx->r5, 0XFF);
    // 0x00426178: addiu       $v0, $zero, -0x100
    ctx->r2 = ADD32(0, -0X100);
    // 0x0042617C: and         $v1, $v1, $v0
    ctx->r3 = ctx->r3 & ctx->r2;
    // 0x00426180: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    // 0x00426184: sll         $s0, $s7, 2
    ctx->r16 = S32(ctx->r23 << 2);
    // 0x00426188: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0042618C: addu        $at, $at, $s0
    ctx->r1 = ADD32(ctx->r1, ctx->r16);
    // 0x00426190: lw          $v0, 0xC60($at)
    ctx->r2 = MEM_W(ctx->r1, 0XC60);
    // 0x00426194: sw          $v1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r3;
    // 0x00426198: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
    // 0x0042619C: sw          $ra, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r31;
    // 0x004261A0: sw          $fp, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r30;
    // 0x004261A4: sw          $s6, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r22;
    // 0x004261A8: sw          $s5, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r21;
    // 0x004261AC: sw          $s4, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r20;
    // 0x004261B0: sw          $s3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r19;
    // 0x004261B4: sw          $s2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r18;
    // 0x004261B8: sw          $s1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r17;
    // 0x004261BC: sw          $a2, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r6;
    // 0x004261C0: beq         $v0, $v1, L_004261D0
    if (ctx->r2 == ctx->r3) {
        // 0x004261C4: sw          $a3, 0x6C($sp)
        MEM_W(0X6C, ctx->r29) = ctx->r7;
            goto L_004261D0;
    }
    // 0x004261C4: sw          $a3, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r7;
    // 0x004261C8: j           L_004263AC
    // 0x004261CC: addiu       $v0, $zero, -0x2
    ctx->r2 = ADD32(0, -0X2);
        goto L_004263AC;
    // 0x004261CC: addiu       $v0, $zero, -0x2
    ctx->r2 = ADD32(0, -0X2);
L_004261D0:
    // 0x004261D0: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x004261D4: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x004261D8: lui         $a3, 0x800C
    ctx->r7 = S32(0X800C << 16);
    // 0x004261DC: addiu       $a3, $a3, 0x18C8
    ctx->r7 = ADD32(ctx->r7, 0X18C8);
    // 0x004261E0: jal         0x00204EDC
    // 0x004261E4: addiu       $a2, $zero, 0x23
    ctx->r6 = ADD32(0, 0X23);
    func_00204EDC(rdram, ctx);
        goto after_0;
    // 0x004261E4: addiu       $a2, $zero, 0x23
    ctx->r6 = ADD32(0, 0X23);
    after_0:
    // 0x004261E8: addu        $s5, $zero, $zero
    ctx->r21 = ADD32(0, 0);
    // 0x004261EC: addu        $fp, $s0, $zero
    ctx->r30 = ADD32(ctx->r16, 0);
    // 0x004261F0: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x004261F4: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x004261F8: sll         $v0, $s7, 1
    ctx->r2 = S32(ctx->r23 << 1);
    // 0x004261FC: addu        $v0, $v0, $s7
    ctx->r2 = ADD32(ctx->r2, ctx->r23);
    // 0x00426200: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x00426204: addu        $v0, $v0, $s7
    ctx->r2 = ADD32(ctx->r2, ctx->r23);
    // 0x00426208: sw          $t0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r8;
    // 0x0042620C: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x00426210: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x00426214: addiu       $t0, $t0, 0xFF
    ctx->r8 = ADD32(ctx->r8, 0XFF);
    // 0x00426218: sw          $t0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r8;
    // 0x0042621C: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    // 0x00426220: addu        $a0, $s7, $zero
    ctx->r4 = ADD32(ctx->r23, 0);
L_00426224:
    // 0x00426224: lw          $a1, 0x64($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X64);
    // 0x00426228: lw          $a2, 0x68($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X68);
    // 0x0042622C: lw          $a3, 0x6C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X6C);
    // 0x00426230: lw          $t0, 0x70($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X70);
    // 0x00426234: addiu       $v0, $sp, 0x20
    ctx->r2 = ADD32(ctx->r29, 0X20);
    // 0x00426238: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x0042623C: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x00426240: lw          $t0, 0x74($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X74);
    // 0x00426244: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x00426248: addiu       $v0, $v0, 0x18E0
    ctx->r2 = ADD32(ctx->r2, 0X18E0);
    // 0x0042624C: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x00426250: jal         0x00425BC0
    // 0x00426254: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    func_00425BC0(rdram, ctx);
        goto after_1;
    // 0x00426254: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    after_1:
    // 0x00426258: addu        $s6, $v0, $zero
    ctx->r22 = ADD32(ctx->r2, 0);
    // 0x0042625C: bne         $s6, $zero, L_0042638C
    if (ctx->r22 != 0) {
        // 0x00426260: addiu       $v0, $zero, -0x100
        ctx->r2 = ADD32(0, -0X100);
            goto L_0042638C;
    }
    // 0x00426260: addiu       $v0, $zero, -0x100
    ctx->r2 = ADD32(0, -0X100);
    // 0x00426264: lw          $t0, 0x30($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X30);
    // 0x00426268: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
    // 0x0042626C: and         $s3, $t0, $v0
    ctx->r19 = ctx->r8 & ctx->r2;
    // 0x00426270: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x00426274: addu        $at, $at, $fp
    ctx->r1 = ADD32(ctx->r1, ctx->r30);
    // 0x00426278: lw          $v0, 0xC60($at)
    ctx->r2 = MEM_W(ctx->r1, 0XC60);
    // 0x0042627C: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x00426280: bne         $v0, $v1, L_00426348
    if (ctx->r2 != ctx->r3) {
        // 0x00426284: addiu       $v0, $zero, -0x2
        ctx->r2 = ADD32(0, -0X2);
            goto L_00426348;
    }
    // 0x00426284: addiu       $v0, $zero, -0x2
    ctx->r2 = ADD32(0, -0X2);
    // 0x00426288: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0042628C: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    // 0x00426290: lui         $a3, 0x800C
    ctx->r7 = S32(0X800C << 16);
    // 0x00426294: addiu       $a3, $a3, 0x18B0
    ctx->r7 = ADD32(ctx->r7, 0X18B0);
    // 0x00426298: jal         0x00204EDC
    // 0x0042629C: addiu       $a2, $zero, 0x23
    ctx->r6 = ADD32(0, 0X23);
    func_00204EDC(rdram, ctx);
        goto after_2;
    // 0x0042629C: addiu       $a2, $zero, 0x23
    ctx->r6 = ADD32(0, 0X23);
    after_2:
    // 0x004262A0: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x004262A4: lw          $s2, 0x0($s1)
    ctx->r18 = MEM_W(ctx->r17, 0X0);
    // 0x004262A8: jal         0x00285878
    // 0x004262AC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_00285878(rdram, ctx);
        goto after_3;
    // 0x004262AC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_3:
    // 0x004262B0: jal         0x002847E0
    // 0x004262B4: nop

    func_002847E0(rdram, ctx);
        goto after_4;
    // 0x004262B4: nop

    after_4:
    // 0x004262B8: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x004262BC: addu        $at, $at, $fp
    ctx->r1 = ADD32(ctx->r1, ctx->r30);
    // 0x004262C0: lw          $s0, 0xC70($at)
    ctx->r16 = MEM_W(ctx->r1, 0XC70);
    // 0x004262C4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x004262C8: lui         $at, 0x800F
    ctx->r1 = S32(0X800F << 16);
    // 0x004262CC: sb          $v0, 0x6750($at)
    MEM_B(0X6750, ctx->r1) = ctx->r2;
    // 0x004262D0: bne         $s0, $zero, L_00426324
    if (ctx->r16 != 0) {
        // 0x004262D4: addu        $a1, $s4, $zero
        ctx->r5 = ADD32(ctx->r20, 0);
            goto L_00426324;
    }
    // 0x004262D4: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    // 0x004262D8: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x004262DC: addiu       $a0, $a0, 0xC80
    ctx->r4 = ADD32(ctx->r4, 0XC80);
    // 0x004262E0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x004262E4: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x004262E8: addu        $a3, $a2, $zero
    ctx->r7 = ADD32(ctx->r6, 0);
    // 0x004262EC: sw          $s3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r19;
    // 0x004262F0: sw          $s2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r18;
    // 0x004262F4: jal         0x00428CF0
    // 0x004262F8: addu        $a0, $t0, $a0
    ctx->r4 = ADD32(ctx->r8, ctx->r4);
    func_00428CF0(rdram, ctx);
        goto after_5;
    // 0x004262F8: addu        $a0, $t0, $a0
    ctx->r4 = ADD32(ctx->r8, ctx->r4);
    after_5:
    // 0x004262FC: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x00426300: beq         $s0, $zero, L_00426314
    if (ctx->r16 == 0) {
        // 0x00426304: nop
    
            goto L_00426314;
    }
    // 0x00426304: nop

    // 0x00426308: addiu       $s0, $zero, -0x1
    ctx->r16 = ADD32(0, -0X1);
    // 0x0042630C: bne         $s0, $zero, L_00426324
    if (ctx->r16 != 0) {
        // 0x00426310: nop
    
            goto L_00426324;
    }
    // 0x00426310: nop

L_00426314:
    // 0x00426314: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x00426318: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    // 0x0042631C: jal         0x0029E460
    // 0x00426320: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    func_0029E460(rdram, ctx);
        goto after_6;
    // 0x00426320: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    after_6:
L_00426324:
    // 0x00426324: jal         0x002858A4
    // 0x00426328: nop

    func_002858A4(rdram, ctx);
        goto after_7;
    // 0x00426328: nop

    after_7:
    // 0x0042632C: jal         0x002053A8
    // 0x00426330: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_002053A8(rdram, ctx);
        goto after_8;
    // 0x00426330: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_8:
    // 0x00426334: beq         $s1, $zero, L_00426344
    if (ctx->r17 == 0) {
        // 0x00426338: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_00426344;
    }
    // 0x00426338: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0042633C: jal         0x002052D8
    // 0x00426340: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_002052D8(rdram, ctx);
        goto after_9;
    // 0x00426340: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_9:
L_00426344:
    // 0x00426344: addu        $v0, $s0, $zero
    ctx->r2 = ADD32(ctx->r16, 0);
L_00426348:
    // 0x00426348: bne         $v0, $zero, L_0042636C
    if (ctx->r2 != 0) {
        // 0x0042634C: nop
    
            goto L_0042636C;
    }
    // 0x0042634C: nop

    // 0x00426350: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x00426354: lw          $a1, 0x68($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X68);
    // 0x00426358: lw          $a2, 0x64($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X64);
    // 0x0042635C: jal         0x00266C80
    // 0x00426360: nop

    func_00266C80(rdram, ctx);
        goto after_10;
    // 0x00426360: nop

    after_10:
    // 0x00426364: beq         $v0, $zero, L_0042638C
    if (ctx->r2 == 0) {
        // 0x00426368: nop
    
            goto L_0042638C;
    }
    // 0x00426368: nop

L_0042636C:
    // 0x0042636C: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x00426370: jal         0x00426064
    // 0x00426374: addu        $a0, $s7, $zero
    ctx->r4 = ADD32(ctx->r23, 0);
    func_00426064(rdram, ctx);
        goto after_11;
    // 0x00426374: addu        $a0, $s7, $zero
    ctx->r4 = ADD32(ctx->r23, 0);
    after_11:
    // 0x00426378: bne         $v0, $zero, L_0042638C
    if (ctx->r2 != 0) {
        // 0x0042637C: addiu       $s5, $s5, 0x1
        ctx->r21 = ADD32(ctx->r21, 0X1);
            goto L_0042638C;
    }
    // 0x0042637C: addiu       $s5, $s5, 0x1
    ctx->r21 = ADD32(ctx->r21, 0X1);
    // 0x00426380: slti        $v0, $s5, 0x4
    ctx->r2 = SIGNED(ctx->r21) < 0X4 ? 1 : 0;
    // 0x00426384: bne         $v0, $zero, L_00426224
    if (ctx->r2 != 0) {
        // 0x00426388: addu        $a0, $s7, $zero
        ctx->r4 = ADD32(ctx->r23, 0);
            goto L_00426224;
    }
    // 0x00426388: addu        $a0, $s7, $zero
    ctx->r4 = ADD32(ctx->r23, 0);
L_0042638C:
    // 0x0042638C: jal         0x002053A8
    // 0x00426390: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_002053A8(rdram, ctx);
        goto after_12;
    // 0x00426390: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_12:
    // 0x00426394: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x00426398: beq         $t0, $zero, L_004263A8
    if (ctx->r8 == 0) {
        // 0x0042639C: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_004263A8;
    }
    // 0x0042639C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x004263A0: jal         0x002052D8
    // 0x004263A4: addu        $a1, $t0, $zero
    ctx->r5 = ADD32(ctx->r8, 0);
    func_002052D8(rdram, ctx);
        goto after_13;
    // 0x004263A4: addu        $a1, $t0, $zero
    ctx->r5 = ADD32(ctx->r8, 0);
    after_13:
L_004263A8:
    // 0x004263A8: addu        $v0, $s6, $zero
    ctx->r2 = ADD32(ctx->r22, 0);
L_004263AC:
    // 0x004263AC: lw          $ra, 0x5C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X5C);
    // 0x004263B0: lw          $fp, 0x58($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X58);
    // 0x004263B4: lw          $s7, 0x54($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X54);
    // 0x004263B8: lw          $s6, 0x50($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X50);
    // 0x004263BC: lw          $s5, 0x4C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X4C);
    // 0x004263C0: lw          $s4, 0x48($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X48);
    // 0x004263C4: lw          $s3, 0x44($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X44);
    // 0x004263C8: lw          $s2, 0x40($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X40);
    // 0x004263CC: lw          $s1, 0x3C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X3C);
    // 0x004263D0: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x004263D4: jr          $ra
    // 0x004263D8: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    return;
    // 0x004263D8: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
;}
RECOMP_FUNC void func_0024E7D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0024E7D0: lh          $v0, 0x996($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X996);
    // 0x0024E7D4: lw          $v1, 0x12A4($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X12A4);
    // 0x0024E7D8: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x0024E7DC: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0024E7E0: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x0024E7E4: lw          $a1, -0x9E8($at)
    ctx->r5 = MEM_W(ctx->r1, -0X9E8);
    // 0x0024E7E8: beq         $v1, $zero, L_0024E81C
    if (ctx->r3 == 0) {
        // 0x0024E7EC: addu        $a3, $zero, $zero
        ctx->r7 = ADD32(0, 0);
            goto L_0024E81C;
    }
    // 0x0024E7EC: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x0024E7F0: lw          $v1, 0x24($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X24);
    // 0x0024E7F4: beq         $v1, $zero, L_0024E820
    if (ctx->r3 == 0) {
        // 0x0024E7F8: addu        $a2, $a3, $zero
        ctx->r6 = ADD32(ctx->r7, 0);
            goto L_0024E820;
    }
    // 0x0024E7F8: addu        $a2, $a3, $zero
    ctx->r6 = ADD32(ctx->r7, 0);
    // 0x0024E7FC: lh          $v0, 0x0($v1)
    ctx->r2 = MEM_H(ctx->r3, 0X0);
    // 0x0024E800: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x0024E804: addu        $v0, $a0, $v0
    ctx->r2 = ADD32(ctx->r4, ctx->r2);
    // 0x0024E808: lh          $v0, 0x934($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X934);
    // 0x0024E80C: blez        $v0, L_0024E820
    if (SIGNED(ctx->r2) <= 0) {
        // 0x0024E810: addu        $v0, $v1, $zero
        ctx->r2 = ADD32(ctx->r3, 0);
            goto L_0024E820;
    }
    // 0x0024E810: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
    // 0x0024E814: j           L_0024E85C
    // 0x0024E818: nop

        goto L_0024E85C;
    // 0x0024E818: nop

L_0024E81C:
    // 0x0024E81C: addu        $a2, $a3, $zero
    ctx->r6 = ADD32(ctx->r7, 0);
L_0024E820:
    // 0x0024E820: lw          $v1, 0x20($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X20);
    // 0x0024E824: beq         $v1, $zero, L_0024E85C
    if (ctx->r3 == 0) {
        // 0x0024E828: addu        $v0, $a3, $zero
        ctx->r2 = ADD32(ctx->r7, 0);
            goto L_0024E85C;
    }
    // 0x0024E828: addu        $v0, $a3, $zero
    ctx->r2 = ADD32(ctx->r7, 0);
    // 0x0024E82C: addu        $a3, $v1, $zero
    ctx->r7 = ADD32(ctx->r3, 0);
    // 0x0024E830: lh          $v0, 0x0($v1)
    ctx->r2 = MEM_H(ctx->r3, 0X0);
    // 0x0024E834: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x0024E838: addu        $v0, $a0, $v0
    ctx->r2 = ADD32(ctx->r4, ctx->r2);
    // 0x0024E83C: lh          $v0, 0x934($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X934);
    // 0x0024E840: bgtz        $v0, L_0024E85C
    if (SIGNED(ctx->r2) > 0) {
        // 0x0024E844: addu        $v0, $a3, $zero
        ctx->r2 = ADD32(ctx->r7, 0);
            goto L_0024E85C;
    }
    // 0x0024E844: addu        $v0, $a3, $zero
    ctx->r2 = ADD32(ctx->r7, 0);
    // 0x0024E848: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x0024E84C: slti        $v0, $a2, 0x3
    ctx->r2 = SIGNED(ctx->r6) < 0X3 ? 1 : 0;
    // 0x0024E850: bne         $v0, $zero, L_0024E820
    if (ctx->r2 != 0) {
        // 0x0024E854: addiu       $a1, $a1, 0x4
        ctx->r5 = ADD32(ctx->r5, 0X4);
            goto L_0024E820;
    }
    // 0x0024E854: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
    // 0x0024E858: addu        $v0, $a3, $zero
    ctx->r2 = ADD32(ctx->r7, 0);
L_0024E85C:
    // 0x0024E85C: beq         $v0, $zero, L_0024E868
    if (ctx->r2 == 0) {
        // 0x0024E860: addiu       $v1, $zero, -0x1
        ctx->r3 = ADD32(0, -0X1);
            goto L_0024E868;
    }
    // 0x0024E860: addiu       $v1, $zero, -0x1
    ctx->r3 = ADD32(0, -0X1);
    // 0x0024E864: lh          $v1, 0x0($v0)
    ctx->r3 = MEM_H(ctx->r2, 0X0);
L_0024E868:
    // 0x0024E868: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x0024E86C: beq         $v1, $v0, L_0024E884
    if (ctx->r3 == ctx->r2) {
        // 0x0024E870: nop
    
            goto L_0024E884;
    }
    // 0x0024E870: nop

    // 0x0024E874: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x0024E878: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0024E87C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x0024E880: lh          $v0, -0x958($at)
    ctx->r2 = MEM_H(ctx->r1, -0X958);
L_0024E884:
    // 0x0024E884: jr          $ra
    // 0x0024E888: nop

    return;
    // 0x0024E888: nop

;}
RECOMP_FUNC void func_00261ECC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00261ECC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00261ED0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00261ED4: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x00261ED8: lui         $v1, 0xFFFD
    ctx->r3 = S32(0XFFFD << 16);
    // 0x00261EDC: ori         $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 | 0XFFFF;
    // 0x00261EE0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x00261EE4: lw          $v0, 0xD4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XD4);
    // 0x00261EE8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00261EEC: lwc1        $f12, 0x7B44($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X7B44);
    // 0x00261EF0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00261EF4: lwc1        $f14, 0x7B48($at)
    ctx->f14.u32l = MEM_W(ctx->r1, 0X7B48);
    // 0x00261EF8: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x00261EFC: jal         0x002119FC
    // 0x00261F00: sw          $v0, 0xD4($a0)
    MEM_W(0XD4, ctx->r4) = ctx->r2;
    func_002119FC(rdram, ctx);
        goto after_0;
    // 0x00261F00: sw          $v0, 0xD4($a0)
    MEM_W(0XD4, ctx->r4) = ctx->r2;
    after_0:
    // 0x00261F04: swc1        $f0, 0x64($s0)
    MEM_W(0X64, ctx->r16) = ctx->f0.u32l;
    // 0x00261F08: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x00261F0C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00261F10: jr          $ra
    // 0x00261F14: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00261F14: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00261128(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00261128: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0026112C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00261130: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x00261134: lui         $a2, 0x42B4
    ctx->r6 = S32(0X42B4 << 16);
    // 0x00261138: lui         $a3, 0x41F0
    ctx->r7 = S32(0X41F0 << 16);
    // 0x0026113C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x00261140: jal         0x0025EB50
    // 0x00261144: sb          $zero, 0x37($s0)
    MEM_B(0X37, ctx->r16) = 0;
    func_0025EB50(rdram, ctx);
        goto after_0;
    // 0x00261144: sb          $zero, 0x37($s0)
    MEM_B(0X37, ctx->r16) = 0;
    after_0:
    // 0x00261148: swc1        $f0, 0x44($s0)
    MEM_W(0X44, ctx->r16) = ctx->f0.u32l;
    // 0x0026114C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x00261150: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00261154: jr          $ra
    // 0x00261158: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00261158: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00222A9C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00222A9C: addiu       $sp, $sp, -0x928
    ctx->r29 = ADD32(ctx->r29, -0X928);
    // 0x00222AA0: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x00222AA4: addiu       $v1, $v1, -0x5528
    ctx->r3 = ADD32(ctx->r3, -0X5528);
    // 0x00222AA8: sw          $ra, 0x8FC($sp)
    MEM_W(0X8FC, ctx->r29) = ctx->r31;
    // 0x00222AAC: sw          $fp, 0x8F8($sp)
    MEM_W(0X8F8, ctx->r29) = ctx->r30;
    // 0x00222AB0: sw          $s7, 0x8F4($sp)
    MEM_W(0X8F4, ctx->r29) = ctx->r23;
    // 0x00222AB4: sw          $s6, 0x8F0($sp)
    MEM_W(0X8F0, ctx->r29) = ctx->r22;
    // 0x00222AB8: sw          $s5, 0x8EC($sp)
    MEM_W(0X8EC, ctx->r29) = ctx->r21;
    // 0x00222ABC: sw          $s4, 0x8E8($sp)
    MEM_W(0X8E8, ctx->r29) = ctx->r20;
    // 0x00222AC0: sw          $s3, 0x8E4($sp)
    MEM_W(0X8E4, ctx->r29) = ctx->r19;
    // 0x00222AC4: sw          $s2, 0x8E0($sp)
    MEM_W(0X8E0, ctx->r29) = ctx->r18;
    // 0x00222AC8: sw          $s1, 0x8DC($sp)
    MEM_W(0X8DC, ctx->r29) = ctx->r17;
    // 0x00222ACC: sw          $s0, 0x8D8($sp)
    MEM_W(0X8D8, ctx->r29) = ctx->r16;
    // 0x00222AD0: sdc1        $f24, 0x920($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X920, ctx->r29);
    // 0x00222AD4: sdc1        $f23, 0x918($sp)
    CHECK_FR(ctx, 23);
    SD(ctx->f23.u64, 0X918, ctx->r29);
    // 0x00222AD8: sdc1        $f22, 0x910($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X910, ctx->r29);
    // 0x00222ADC: sdc1        $f21, 0x908($sp)
    CHECK_FR(ctx, 21);
    SD(ctx->f21.u64, 0X908, ctx->r29);
    // 0x00222AE0: sdc1        $f20, 0x900($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X900, ctx->r29);
    // 0x00222AE4: sw          $a0, 0x928($sp)
    MEM_W(0X928, ctx->r29) = ctx->r4;
    // 0x00222AE8: sw          $a1, 0x92C($sp)
    MEM_W(0X92C, ctx->r29) = ctx->r5;
    // 0x00222AEC: sw          $a2, 0x930($sp)
    MEM_W(0X930, ctx->r29) = ctx->r6;
    // 0x00222AF0: sw          $a3, 0x934($sp)
    MEM_W(0X934, ctx->r29) = ctx->r7;
    // 0x00222AF4: lw          $v0, 0xC($v1)
    ctx->r2 = MEM_W(ctx->r3, 0XC);
    // 0x00222AF8: mtc1        $v0, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r2;
    // 0x00222AFC: cvt.d.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.d = CVT_D_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x00222B00: bgezl       $v0, L_00222B18
    if (SIGNED(ctx->r2) >= 0) {
        // 0x00222B04: cvt.s.d     $f0, $f1
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.d); 
    ctx->f0.fl = CVT_S_D(ctx->f1.d);
            goto L_00222B18;
    }
    goto skip_0;
    // 0x00222B04: cvt.s.d     $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.d); 
    ctx->f0.fl = CVT_S_D(ctx->f1.d);
    skip_0:
    // 0x00222B08: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00222B0C: ldc1        $f0, 0x5F80($at)
    CHECK_FR(ctx, 0);
    ctx->f0.u64 = LD(ctx->r1, 0X5F80);
    // 0x00222B10: add.d       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.d); NAN_CHECK(ctx->f0.d); 
    ctx->f1.d = ctx->f1.d + ctx->f0.d;
    // 0x00222B14: cvt.s.d     $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.d); 
    ctx->f0.fl = CVT_S_D(ctx->f1.d);
L_00222B18:
    // 0x00222B18: sw          $zero, 0x8C8($sp)
    MEM_W(0X8C8, ctx->r29) = 0;
    // 0x00222B1C: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x00222B20: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00222B24: lwc1        $f1, 0x5F88($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X5F88);
    // 0x00222B28: andi        $v0, $v0, 0x4000
    ctx->r2 = ctx->r2 & 0X4000;
    // 0x00222B2C: mul.s       $f23, $f0, $f1
    CHECK_FR(ctx, 23);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f23.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00222B30: beq         $v0, $zero, L_00222B7C
    if (ctx->r2 == 0) {
        // 0x00222B34: addiu       $v0, $zero, 0x7F
        ctx->r2 = ADD32(0, 0X7F);
            goto L_00222B7C;
    }
    // 0x00222B34: addiu       $v0, $zero, 0x7F
    ctx->r2 = ADD32(0, 0X7F);
    // 0x00222B38: lw          $t0, 0x934($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X934);
    // 0x00222B3C: sb          $zero, 0x4($t0)
    MEM_B(0X4, ctx->r8) = 0;
    // 0x00222B40: sb          $zero, 0x0($t0)
    MEM_B(0X0, ctx->r8) = 0;
    // 0x00222B44: sb          $zero, 0x5($t0)
    MEM_B(0X5, ctx->r8) = 0;
    // 0x00222B48: sb          $zero, 0x1($t0)
    MEM_B(0X1, ctx->r8) = 0;
    // 0x00222B4C: sb          $zero, 0x6($t0)
    MEM_B(0X6, ctx->r8) = 0;
    // 0x00222B50: sb          $zero, 0x2($t0)
    MEM_B(0X2, ctx->r8) = 0;
    // 0x00222B54: sb          $zero, 0xC($t0)
    MEM_B(0XC, ctx->r8) = 0;
    // 0x00222B58: sb          $zero, 0x8($t0)
    MEM_B(0X8, ctx->r8) = 0;
    // 0x00222B5C: sb          $zero, 0xD($t0)
    MEM_B(0XD, ctx->r8) = 0;
    // 0x00222B60: sb          $zero, 0x9($t0)
    MEM_B(0X9, ctx->r8) = 0;
    // 0x00222B64: sb          $zero, 0xE($t0)
    MEM_B(0XE, ctx->r8) = 0;
    // 0x00222B68: sb          $zero, 0xA($t0)
    MEM_B(0XA, ctx->r8) = 0;
    // 0x00222B6C: sb          $v0, 0x10($t0)
    MEM_B(0X10, ctx->r8) = ctx->r2;
    // 0x00222B70: sb          $zero, 0x11($t0)
    MEM_B(0X11, ctx->r8) = 0;
    // 0x00222B74: j           L_00223364
    // 0x00222B78: sb          $zero, 0x12($t0)
    MEM_B(0X12, ctx->r8) = 0;
        goto L_00223364;
    // 0x00222B78: sb          $zero, 0x12($t0)
    MEM_B(0X12, ctx->r8) = 0;
L_00222B7C:
    // 0x00222B7C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x00222B80: lw          $t1, 0x92C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X92C);
    // 0x00222B84: addu        $s7, $zero, $zero
    ctx->r23 = ADD32(0, 0);
    // 0x00222B88: swc1        $f0, 0x830($sp)
    MEM_W(0X830, ctx->r29) = ctx->f0.u32l;
    // 0x00222B8C: swc1        $f0, 0x82C($sp)
    MEM_W(0X82C, ctx->r29) = ctx->f0.u32l;
    // 0x00222B90: swc1        $f0, 0x828($sp)
    MEM_W(0X828, ctx->r29) = ctx->f0.u32l;
    // 0x00222B94: swc1        $f0, 0x850($sp)
    MEM_W(0X850, ctx->r29) = ctx->f0.u32l;
    // 0x00222B98: swc1        $f0, 0x84C($sp)
    MEM_W(0X84C, ctx->r29) = ctx->f0.u32l;
    // 0x00222B9C: swc1        $f0, 0x848($sp)
    MEM_W(0X848, ctx->r29) = ctx->f0.u32l;
    // 0x00222BA0: swc1        $f0, 0x860($sp)
    MEM_W(0X860, ctx->r29) = ctx->f0.u32l;
    // 0x00222BA4: swc1        $f0, 0x85C($sp)
    MEM_W(0X85C, ctx->r29) = ctx->f0.u32l;
    // 0x00222BA8: swc1        $f0, 0x858($sp)
    MEM_W(0X858, ctx->r29) = ctx->f0.u32l;
    // 0x00222BAC: swc1        $f0, 0x870($sp)
    MEM_W(0X870, ctx->r29) = ctx->f0.u32l;
    // 0x00222BB0: swc1        $f0, 0x86C($sp)
    MEM_W(0X86C, ctx->r29) = ctx->f0.u32l;
    // 0x00222BB4: blez        $t1, L_00222DF4
    if (SIGNED(ctx->r9) <= 0) {
        // 0x00222BB8: swc1        $f0, 0x868($sp)
        MEM_W(0X868, ctx->r29) = ctx->f0.u32l;
            goto L_00222DF4;
    }
    // 0x00222BB8: swc1        $f0, 0x868($sp)
    MEM_W(0X868, ctx->r29) = ctx->f0.u32l;
    // 0x00222BBC: addiu       $t2, $sp, 0x818
    ctx->r10 = ADD32(ctx->r29, 0X818);
    // 0x00222BC0: addiu       $s5, $sp, 0x888
    ctx->r21 = ADD32(ctx->r29, 0X888);
    // 0x00222BC4: addiu       $fp, $sp, 0x898
    ctx->r30 = ADD32(ctx->r29, 0X898);
    // 0x00222BC8: addiu       $s1, $sp, 0x878
    ctx->r17 = ADD32(ctx->r29, 0X878);
    // 0x00222BCC: addiu       $s4, $sp, 0x848
    ctx->r20 = ADD32(ctx->r29, 0X848);
    // 0x00222BD0: mov.s       $f21, $f0
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 0);
    ctx->f21.fl = ctx->f0.fl;
    // 0x00222BD4: addiu       $s2, $sp, 0x18
    ctx->r18 = ADD32(ctx->r29, 0X18);
    // 0x00222BD8: lw          $s6, 0x928($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X928);
    // 0x00222BDC: addiu       $s3, $sp, 0x218
    ctx->r19 = ADD32(ctx->r29, 0X218);
    // 0x00222BE0: sw          $t2, 0x8CC($sp)
    MEM_W(0X8CC, ctx->r29) = ctx->r10;
L_00222BE4:
    // 0x00222BE4: lw          $a1, 0x930($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X930);
    // 0x00222BE8: lw          $s0, 0x0($s6)
    ctx->r16 = MEM_W(ctx->r22, 0X0);
    // 0x00222BEC: lw          $a2, 0x8CC($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X8CC);
    // 0x00222BF0: jal         0x0020F85C
    // 0x00222BF4: addiu       $a0, $s0, 0x20
    ctx->r4 = ADD32(ctx->r16, 0X20);
    func_0020F85C(rdram, ctx);
        goto after_0;
    // 0x00222BF4: addiu       $a0, $s0, 0x20
    ctx->r4 = ADD32(ctx->r16, 0X20);
    after_0:
    // 0x00222BF8: sw          $s5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r21;
    // 0x00222BFC: sw          $s2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r18;
    // 0x00222C00: lw          $a1, 0x818($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X818);
    // 0x00222C04: lw          $a2, 0x81C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X81C);
    // 0x00222C08: lw          $a3, 0x820($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X820);
    // 0x00222C0C: jal         0x002123D4
    // 0x00222C10: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_002123D4(rdram, ctx);
        goto after_1;
    // 0x00222C10: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x00222C14: beq         $v0, $zero, L_00222DC8
    if (ctx->r2 == 0) {
        // 0x00222C18: addu        $a0, $fp, $zero
        ctx->r4 = ADD32(ctx->r30, 0);
            goto L_00222DC8;
    }
    // 0x00222C18: addu        $a0, $fp, $zero
    ctx->r4 = ADD32(ctx->r30, 0);
    // 0x00222C1C: lw          $a2, 0x8CC($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X8CC);
    // 0x00222C20: jal         0x0020EEF8
    // 0x00222C24: addu        $a1, $s5, $zero
    ctx->r5 = ADD32(ctx->r21, 0);
    func_0020EEF8(rdram, ctx);
        goto after_2;
    // 0x00222C24: addu        $a1, $s5, $zero
    ctx->r5 = ADD32(ctx->r21, 0);
    after_2:
    // 0x00222C28: addiu       $a0, $s0, 0x60
    ctx->r4 = ADD32(ctx->r16, 0X60);
    // 0x00222C2C: addu        $a1, $fp, $zero
    ctx->r5 = ADD32(ctx->r30, 0);
    // 0x00222C30: jal         0x0020F9D4
    // 0x00222C34: addu        $a2, $s5, $zero
    ctx->r6 = ADD32(ctx->r21, 0);
    func_0020F9D4(rdram, ctx);
        goto after_3;
    // 0x00222C34: addu        $a2, $s5, $zero
    ctx->r6 = ADD32(ctx->r21, 0);
    after_3:
    // 0x00222C38: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x00222C3C: lw          $a1, 0x930($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X930);
    // 0x00222C40: jal         0x0020EF2C
    // 0x00222C44: addu        $a2, $s5, $zero
    ctx->r6 = ADD32(ctx->r21, 0);
    func_0020EF2C(rdram, ctx);
        goto after_4;
    // 0x00222C44: addu        $a2, $s5, $zero
    ctx->r6 = ADD32(ctx->r21, 0);
    after_4:
    // 0x00222C48: jal         0x0020F040
    // 0x00222C4C: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    func_0020F040(rdram, ctx);
        goto after_5;
    // 0x00222C4C: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    after_5:
    // 0x00222C50: lw          $t3, 0x8($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X8);
    // 0x00222C54: lw          $t0, 0xC($s0)
    ctx->r8 = MEM_W(ctx->r16, 0XC);
    // 0x00222C58: lw          $t1, 0x10($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X10);
    // 0x00222C5C: sw          $t3, 0x838($sp)
    MEM_W(0X838, ctx->r29) = ctx->r11;
    // 0x00222C60: sw          $t0, 0x83C($sp)
    MEM_W(0X83C, ctx->r29) = ctx->r8;
    // 0x00222C64: sw          $t1, 0x840($sp)
    MEM_W(0X840, ctx->r29) = ctx->r9;
    // 0x00222C68: lbu         $v0, 0xBA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XBA);
    // 0x00222C6C: beq         $v0, $zero, L_00222CD0
    if (ctx->r2 == 0) {
        // 0x00222C70: nop
    
            goto L_00222CD0;
    }
    // 0x00222C70: nop

    // 0x00222C74: jal         0x00213E90
    // 0x00222C78: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00213E90(rdram, ctx);
        goto after_6;
    // 0x00222C78: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_6:
    // 0x00222C7C: swc1        $f0, 0x8A8($sp)
    MEM_W(0X8A8, ctx->r29) = ctx->f0.u32l;
    // 0x00222C80: swc1        $f0, 0x8AC($sp)
    MEM_W(0X8AC, ctx->r29) = ctx->f0.u32l;
    // 0x00222C84: swc1        $f0, 0x8B0($sp)
    MEM_W(0X8B0, ctx->r29) = ctx->f0.u32l;
    // 0x00222C88: lwc1        $f1, 0x0($s2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r18, 0X0);
    // 0x00222C8C: lwc1        $f0, 0x4($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X4);
    // 0x00222C90: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x00222C94: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x00222C98: mfc1        $a2, $f1
    ctx->r6 = (int32_t)ctx->f_odd[(1 - 1) * 2];
    // 0x00222C9C: jal         0x0020EF60
    // 0x00222CA0: addiu       $a1, $sp, 0x8A8
    ctx->r5 = ADD32(ctx->r29, 0X8A8);
    func_0020EF60(rdram, ctx);
        goto after_7;
    // 0x00222CA0: addiu       $a1, $sp, 0x8A8
    ctx->r5 = ADD32(ctx->r29, 0X8A8);
    after_7:
    // 0x00222CA4: lbu         $v0, 0xB8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XB8);
    // 0x00222CA8: beq         $v0, $zero, L_00222CC0
    if (ctx->r2 == 0) {
        // 0x00222CAC: sw          $s0, 0x8C8($sp)
        MEM_W(0X8C8, ctx->r29) = ctx->r16;
            goto L_00222CC0;
    }
    // 0x00222CAC: sw          $s0, 0x8C8($sp)
    MEM_W(0X8C8, ctx->r29) = ctx->r16;
    // 0x00222CB0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x00222CB4: lui         $a2, 0xBF80
    ctx->r6 = S32(0XBF80 << 16);
    // 0x00222CB8: jal         0x0020EF60
    // 0x00222CBC: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_0020EF60(rdram, ctx);
        goto after_8;
    // 0x00222CBC: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_8:
L_00222CC0:
    // 0x00222CC0: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    // 0x00222CC4: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    // 0x00222CC8: jal         0x0020EEF8
    // 0x00222CCC: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    func_0020EEF8(rdram, ctx);
        goto after_9;
    // 0x00222CCC: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    after_9:
L_00222CD0:
    // 0x00222CD0: lwc1        $f1, 0x4($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X4);
    // 0x00222CD4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00222CD8: lwc1        $f0, 0x5F8C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X5F8C);
    // 0x00222CDC: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x00222CE0: lwc1        $f0, 0x0($s2)
    ctx->f0.u32l = MEM_W(ctx->r18, 0X0);
    // 0x00222CE4: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00222CE8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x00222CEC: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x00222CF0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00222CF4: lwc1        $f0, 0x5F90($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X5F90);
    // 0x00222CF8: addiu       $a1, $sp, 0x838
    ctx->r5 = ADD32(ctx->r29, 0X838);
    // 0x00222CFC: jal         0x0020EF60
    // 0x00222D00: sub.s       $f20, $f0, $f1
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f20.fl = ctx->f0.fl - ctx->f1.fl;
    func_0020EF60(rdram, ctx);
        goto after_10;
    // 0x00222D00: sub.s       $f20, $f0, $f1
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f20.fl = ctx->f0.fl - ctx->f1.fl;
    after_10:
    // 0x00222D04: lbu         $v0, 0xB8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XB8);
    // 0x00222D08: beq         $v0, $zero, L_00222D1C
    if (ctx->r2 == 0) {
        // 0x00222D0C: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_00222D1C;
    }
    // 0x00222D0C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x00222D10: lui         $a2, 0xBF80
    ctx->r6 = S32(0XBF80 << 16);
    // 0x00222D14: jal         0x0020EF60
    // 0x00222D18: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_0020EF60(rdram, ctx);
        goto after_11;
    // 0x00222D18: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_11:
L_00222D1C:
    // 0x00222D1C: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    // 0x00222D20: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    // 0x00222D24: jal         0x0020EEF8
    // 0x00222D28: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    func_0020EEF8(rdram, ctx);
        goto after_12;
    // 0x00222D28: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    after_12:
    // 0x00222D2C: lwc1        $f0, 0x0($s2)
    ctx->f0.u32l = MEM_W(ctx->r18, 0X0);
    // 0x00222D30: mul.s       $f0, $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f20.fl);
    // 0x00222D34: swc1        $f0, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->f0.u32l;
    // 0x00222D38: lwc1        $f1, 0x838($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X838);
    // 0x00222D3C: c.lt.s      $f1, $f21
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 21);
    c1cs = ctx->f1.fl < ctx->f21.fl;
    // 0x00222D40: nop

    // 0x00222D44: bc1tl       L_00222D4C
    if (c1cs) {
        // 0x00222D48: neg.s       $f1, $f1
        CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = -ctx->f1.fl;
            goto L_00222D4C;
    }
    goto skip_1;
    // 0x00222D48: neg.s       $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = -ctx->f1.fl;
    skip_1:
L_00222D4C:
    // 0x00222D4C: lwc1        $f0, 0x83C($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X83C);
    // 0x00222D50: c.lt.s      $f0, $f21
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 21);
    c1cs = ctx->f0.fl < ctx->f21.fl;
    // 0x00222D54: nop

    // 0x00222D58: bc1fl       L_00222D64
    if (!c1cs) {
        // 0x00222D5C: add.s       $f1, $f1, $f0
        CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
            goto L_00222D64;
    }
    goto skip_2;
    // 0x00222D5C: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    skip_2:
    // 0x00222D60: sub.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl - ctx->f0.fl;
L_00222D64:
    // 0x00222D64: lwc1        $f0, 0x840($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X840);
    // 0x00222D68: c.lt.s      $f0, $f21
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 21);
    c1cs = ctx->f0.fl < ctx->f21.fl;
    // 0x00222D6C: nop

    // 0x00222D70: bc1fl       L_00222D7C
    if (!c1cs) {
        // 0x00222D74: add.s       $f20, $f1, $f0
        CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = ctx->f1.fl + ctx->f0.fl;
            goto L_00222D7C;
    }
    goto skip_3;
    // 0x00222D74: add.s       $f20, $f1, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = ctx->f1.fl + ctx->f0.fl;
    skip_3:
    // 0x00222D78: sub.s       $f20, $f1, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = ctx->f1.fl - ctx->f0.fl;
L_00222D7C:
    // 0x00222D7C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x00222D80: lw          $a2, 0x0($s2)
    ctx->r6 = MEM_W(ctx->r18, 0X0);
    // 0x00222D84: jal         0x0020EF60
    // 0x00222D88: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    func_0020EF60(rdram, ctx);
        goto after_13;
    // 0x00222D88: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    after_13:
    // 0x00222D8C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x00222D90: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x00222D94: jal         0x0020EF60
    // 0x00222D98: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_0020EF60(rdram, ctx);
        goto after_14;
    // 0x00222D98: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_14:
    // 0x00222D9C: addiu       $a0, $sp, 0x828
    ctx->r4 = ADD32(ctx->r29, 0X828);
    // 0x00222DA0: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x00222DA4: jal         0x0020EEF8
    // 0x00222DA8: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    func_0020EEF8(rdram, ctx);
        goto after_15;
    // 0x00222DA8: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    after_15:
    // 0x00222DAC: lbu         $v0, 0xB8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XB8);
    // 0x00222DB0: beql        $v0, $zero, L_00222DDC
    if (ctx->r2 == 0) {
        // 0x00222DB4: addiu       $s2, $s2, 0x4
        ctx->r18 = ADD32(ctx->r18, 0X4);
            goto L_00222DDC;
    }
    goto skip_4;
    // 0x00222DB4: addiu       $s2, $s2, 0x4
    ctx->r18 = ADD32(ctx->r18, 0X4);
    skip_4:
    // 0x00222DB8: lwc1        $f0, 0x0($s2)
    ctx->f0.u32l = MEM_W(ctx->r18, 0X0);
    // 0x00222DBC: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x00222DC0: j           L_00222DD8
    // 0x00222DC4: swc1        $f0, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->f0.u32l;
        goto L_00222DD8;
    // 0x00222DC4: swc1        $f0, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->f0.u32l;
L_00222DC8:
    // 0x00222DC8: sw          $zero, 0x0($s3)
    MEM_W(0X0, ctx->r19) = 0;
    // 0x00222DCC: sw          $zero, 0x4($s3)
    MEM_W(0X4, ctx->r19) = 0;
    // 0x00222DD0: sw          $zero, 0x8($s3)
    MEM_W(0X8, ctx->r19) = 0;
    // 0x00222DD4: sw          $zero, 0x0($s2)
    MEM_W(0X0, ctx->r18) = 0;
L_00222DD8:
    // 0x00222DD8: addiu       $s2, $s2, 0x4
    ctx->r18 = ADD32(ctx->r18, 0X4);
L_00222DDC:
    // 0x00222DDC: addiu       $s3, $s3, 0xC
    ctx->r19 = ADD32(ctx->r19, 0XC);
    // 0x00222DE0: lw          $t3, 0x92C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X92C);
    // 0x00222DE4: addiu       $s7, $s7, 0x1
    ctx->r23 = ADD32(ctx->r23, 0X1);
    // 0x00222DE8: slt         $v0, $s7, $t3
    ctx->r2 = SIGNED(ctx->r23) < SIGNED(ctx->r11) ? 1 : 0;
    // 0x00222DEC: bne         $v0, $zero, L_00222BE4
    if (ctx->r2 != 0) {
        // 0x00222DF0: addiu       $s6, $s6, 0x4
        ctx->r22 = ADD32(ctx->r22, 0X4);
            goto L_00222BE4;
    }
    // 0x00222DF0: addiu       $s6, $s6, 0x4
    ctx->r22 = ADD32(ctx->r22, 0X4);
L_00222DF4:
    // 0x00222DF4: jal         0x0020F040
    // 0x00222DF8: addiu       $a0, $sp, 0x828
    ctx->r4 = ADD32(ctx->r29, 0X828);
    func_0020F040(rdram, ctx);
        goto after_16;
    // 0x00222DF8: addiu       $a0, $sp, 0x828
    ctx->r4 = ADD32(ctx->r29, 0X828);
    after_16:
    // 0x00222DFC: lw          $t0, 0x92C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X92C);
    // 0x00222E00: blez        $t0, L_00222F88
    if (SIGNED(ctx->r8) <= 0) {
        // 0x00222E04: addu        $s7, $zero, $zero
        ctx->r23 = ADD32(0, 0);
            goto L_00222F88;
    }
    // 0x00222E04: addu        $s7, $zero, $zero
    ctx->r23 = ADD32(0, 0);
    // 0x00222E08: addiu       $t1, $sp, 0x838
    ctx->r9 = ADD32(ctx->r29, 0X838);
    // 0x00222E0C: addiu       $s6, $sp, 0x8B8
    ctx->r22 = ADD32(ctx->r29, 0X8B8);
    // 0x00222E10: addiu       $t2, $sp, 0x8A8
    ctx->r10 = ADD32(ctx->r29, 0X8A8);
    // 0x00222E14: addiu       $s5, $sp, 0x868
    ctx->r21 = ADD32(ctx->r29, 0X868);
    // 0x00222E18: addiu       $s4, $sp, 0x858
    ctx->r20 = ADD32(ctx->r29, 0X858);
    // 0x00222E1C: addiu       $s3, $sp, 0x878
    ctx->r19 = ADD32(ctx->r29, 0X878);
    // 0x00222E20: addiu       $s2, $sp, 0x18
    ctx->r18 = ADD32(ctx->r29, 0X18);
    // 0x00222E24: lw          $fp, 0x928($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X928);
    // 0x00222E28: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00222E2C: lwc1        $f22, 0x5F94($at)
    ctx->f22.u32l = MEM_W(ctx->r1, 0X5F94);
    // 0x00222E30: mtc1        $zero, $f24
    ctx->f24.u32l = 0;
    // 0x00222E34: addu        $s1, $s2, $zero
    ctx->r17 = ADD32(ctx->r18, 0);
    // 0x00222E38: sw          $t1, 0x8D0($sp)
    MEM_W(0X8D0, ctx->r29) = ctx->r9;
    // 0x00222E3C: sw          $t2, 0x8D4($sp)
    MEM_W(0X8D4, ctx->r29) = ctx->r10;
L_00222E40:
    // 0x00222E40: lwc1        $f3, 0x828($sp)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r29, 0X828);
    // 0x00222E44: lwc1        $f0, 0x200($s2)
    ctx->f0.u32l = MEM_W(ctx->r18, 0X200);
    // 0x00222E48: mul.s       $f3, $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f3.fl = MUL_S(ctx->f3.fl, ctx->f0.fl);
    // 0x00222E4C: addiu       $v0, $s2, 0x200
    ctx->r2 = ADD32(ctx->r18, 0X200);
    // 0x00222E50: lwc1        $f2, 0x82C($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X82C);
    // 0x00222E54: lwc1        $f0, 0x4($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X4);
    // 0x00222E58: mul.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x00222E5C: lwc1        $f1, 0x830($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X830);
    // 0x00222E60: lwc1        $f0, 0x8($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X8);
    // 0x00222E64: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x00222E68: add.s       $f3, $f3, $f2
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f3.fl = ctx->f3.fl + ctx->f2.fl;
    // 0x00222E6C: add.s       $f20, $f3, $f1
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f20.fl = ctx->f3.fl + ctx->f1.fl;
    // 0x00222E70: lw          $s0, 0x0($fp)
    ctx->r16 = MEM_W(ctx->r30, 0X0);
    // 0x00222E74: c.lt.s      $f20, $f24
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 24);
    c1cs = ctx->f20.fl < ctx->f24.fl;
    // 0x00222E78: nop

    // 0x00222E7C: bc1f        L_00222E88
    if (!c1cs) {
        // 0x00222E80: sub.s       $f21, $f22, $f20
        CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f21.fl = ctx->f22.fl - ctx->f20.fl;
            goto L_00222E88;
    }
    // 0x00222E80: sub.s       $f21, $f22, $f20
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f21.fl = ctx->f22.fl - ctx->f20.fl;
    // 0x00222E84: mov.s       $f21, $f22
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 22);
    ctx->f21.fl = ctx->f22.fl;
L_00222E88:
    // 0x00222E88: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00222E8C: lwc1        $f0, 0x5F98($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X5F98);
    // 0x00222E90: mul.s       $f21, $f21, $f0
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f21.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f21.fl = MUL_S(ctx->f21.fl, ctx->f0.fl);
    // 0x00222E94: lw          $t3, 0x8($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X8);
    // 0x00222E98: lw          $t0, 0xC($s0)
    ctx->r8 = MEM_W(ctx->r16, 0XC);
    // 0x00222E9C: lw          $t1, 0x10($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X10);
    // 0x00222EA0: sw          $t3, 0x838($sp)
    MEM_W(0X838, ctx->r29) = ctx->r11;
    // 0x00222EA4: sw          $t0, 0x83C($sp)
    MEM_W(0X83C, ctx->r29) = ctx->r8;
    // 0x00222EA8: sw          $t1, 0x840($sp)
    MEM_W(0X840, ctx->r29) = ctx->r9;
    // 0x00222EAC: lw          $t3, 0x8C8($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X8C8);
    // 0x00222EB0: bne         $s0, $t3, L_00222F1C
    if (ctx->r16 != ctx->r11) {
        // 0x00222EB4: sub.s       $f20, $f22, $f21
        CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f21.fl); 
    ctx->f20.fl = ctx->f22.fl - ctx->f21.fl;
            goto L_00222F1C;
    }
    // 0x00222EB4: sub.s       $f20, $f22, $f21
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f21.fl); 
    ctx->f20.fl = ctx->f22.fl - ctx->f21.fl;
    // 0x00222EB8: jal         0x00213E90
    // 0x00222EBC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00213E90(rdram, ctx);
        goto after_17;
    // 0x00222EBC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_17:
    // 0x00222EC0: swc1        $f0, 0x8A8($sp)
    MEM_W(0X8A8, ctx->r29) = ctx->f0.u32l;
    // 0x00222EC4: swc1        $f0, 0x8AC($sp)
    MEM_W(0X8AC, ctx->r29) = ctx->f0.u32l;
    // 0x00222EC8: swc1        $f0, 0x8B0($sp)
    MEM_W(0X8B0, ctx->r29) = ctx->f0.u32l;
    // 0x00222ECC: lwc1        $f0, 0x0($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X0);
    // 0x00222ED0: mul.s       $f0, $f20, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f20.fl, ctx->f0.fl);
    // 0x00222ED4: lw          $a1, 0x8D4($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X8D4);
    // 0x00222ED8: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x00222EDC: jal         0x0020EF60
    // 0x00222EE0: addu        $a0, $s6, $zero
    ctx->r4 = ADD32(ctx->r22, 0);
    func_0020EF60(rdram, ctx);
        goto after_18;
    // 0x00222EE0: addu        $a0, $s6, $zero
    ctx->r4 = ADD32(ctx->r22, 0);
    after_18:
    // 0x00222EE4: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    // 0x00222EE8: addu        $a1, $s5, $zero
    ctx->r5 = ADD32(ctx->r21, 0);
    // 0x00222EEC: jal         0x0020EEF8
    // 0x00222EF0: addu        $a2, $s6, $zero
    ctx->r6 = ADD32(ctx->r22, 0);
    func_0020EEF8(rdram, ctx);
        goto after_19;
    // 0x00222EF0: addu        $a2, $s6, $zero
    ctx->r6 = ADD32(ctx->r22, 0);
    after_19:
    // 0x00222EF4: lwc1        $f0, 0x0($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X0);
    // 0x00222EF8: mul.s       $f0, $f21, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f21.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f21.fl, ctx->f0.fl);
    // 0x00222EFC: lw          $a1, 0x8D4($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X8D4);
    // 0x00222F00: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x00222F04: jal         0x0020EF60
    // 0x00222F08: addu        $a0, $s6, $zero
    ctx->r4 = ADD32(ctx->r22, 0);
    func_0020EF60(rdram, ctx);
        goto after_20;
    // 0x00222F08: addu        $a0, $s6, $zero
    ctx->r4 = ADD32(ctx->r22, 0);
    after_20:
    // 0x00222F0C: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    // 0x00222F10: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    // 0x00222F14: jal         0x0020EEF8
    // 0x00222F18: addu        $a2, $s6, $zero
    ctx->r6 = ADD32(ctx->r22, 0);
    func_0020EEF8(rdram, ctx);
        goto after_21;
    // 0x00222F18: addu        $a2, $s6, $zero
    ctx->r6 = ADD32(ctx->r22, 0);
    after_21:
L_00222F1C:
    // 0x00222F1C: lwc1        $f0, 0x0($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X0);
    // 0x00222F20: mul.s       $f20, $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = MUL_S(ctx->f20.fl, ctx->f0.fl);
    // 0x00222F24: lw          $a1, 0x8D0($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X8D0);
    // 0x00222F28: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x00222F2C: jal         0x0020EF60
    // 0x00222F30: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    func_0020EF60(rdram, ctx);
        goto after_22;
    // 0x00222F30: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    after_22:
    // 0x00222F34: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    // 0x00222F38: addu        $a1, $s5, $zero
    ctx->r5 = ADD32(ctx->r21, 0);
    // 0x00222F3C: jal         0x0020EEF8
    // 0x00222F40: addu        $a2, $s3, $zero
    ctx->r6 = ADD32(ctx->r19, 0);
    func_0020EEF8(rdram, ctx);
        goto after_23;
    // 0x00222F40: addu        $a2, $s3, $zero
    ctx->r6 = ADD32(ctx->r19, 0);
    after_23:
    // 0x00222F44: lwc1        $f0, 0x0($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X0);
    // 0x00222F48: mul.s       $f21, $f21, $f0
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f21.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f21.fl = MUL_S(ctx->f21.fl, ctx->f0.fl);
    // 0x00222F4C: addiu       $s2, $s2, 0xC
    ctx->r18 = ADD32(ctx->r18, 0XC);
    // 0x00222F50: addiu       $fp, $fp, 0x4
    ctx->r30 = ADD32(ctx->r30, 0X4);
    // 0x00222F54: addiu       $s7, $s7, 0x1
    ctx->r23 = ADD32(ctx->r23, 0X1);
    // 0x00222F58: lw          $a1, 0x8D0($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X8D0);
    // 0x00222F5C: mfc1        $a2, $f21
    ctx->r6 = (int32_t)ctx->f_odd[(21 - 1) * 2];
    // 0x00222F60: jal         0x0020EF60
    // 0x00222F64: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    func_0020EF60(rdram, ctx);
        goto after_24;
    // 0x00222F64: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    after_24:
    // 0x00222F68: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    // 0x00222F6C: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    // 0x00222F70: jal         0x0020EEF8
    // 0x00222F74: addu        $a2, $s3, $zero
    ctx->r6 = ADD32(ctx->r19, 0);
    func_0020EEF8(rdram, ctx);
        goto after_25;
    // 0x00222F74: addu        $a2, $s3, $zero
    ctx->r6 = ADD32(ctx->r19, 0);
    after_25:
    // 0x00222F78: lw          $t0, 0x92C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X92C);
    // 0x00222F7C: slt         $v0, $s7, $t0
    ctx->r2 = SIGNED(ctx->r23) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x00222F80: bne         $v0, $zero, L_00222E40
    if (ctx->r2 != 0) {
        // 0x00222F84: addiu       $s1, $s1, 0x4
        ctx->r17 = ADD32(ctx->r17, 0X4);
            goto L_00222E40;
    }
    // 0x00222F84: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
L_00222F88:
    // 0x00222F88: addiu       $s0, $sp, 0x858
    ctx->r16 = ADD32(ctx->r29, 0X858);
    // 0x00222F8C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00222F90: lui         $a2, 0x3F00
    ctx->r6 = S32(0X3F00 << 16);
    // 0x00222F94: jal         0x0020EF60
    // 0x00222F98: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_0020EF60(rdram, ctx);
        goto after_26;
    // 0x00222F98: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_26:
    // 0x00222F9C: addiu       $a0, $sp, 0x848
    ctx->r4 = ADD32(ctx->r29, 0X848);
    // 0x00222FA0: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x00222FA4: jal         0x0020EEF8
    // 0x00222FA8: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    func_0020EEF8(rdram, ctx);
        goto after_27;
    // 0x00222FA8: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    after_27:
    // 0x00222FAC: lwc1        $f1, 0x848($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X848);
    // 0x00222FB0: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x00222FB4: c.lt.s      $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f1.fl < ctx->f2.fl;
    // 0x00222FB8: nop

    // 0x00222FBC: bc1f        L_00222FD0
    if (!c1cs) {
        // 0x00222FC0: nop
    
            goto L_00222FD0;
    }
    // 0x00222FC0: nop

    // 0x00222FC4: lwc1        $f0, 0x868($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X868);
    // 0x00222FC8: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x00222FCC: swc1        $f0, 0x868($sp)
    MEM_W(0X868, ctx->r29) = ctx->f0.u32l;
L_00222FD0:
    // 0x00222FD0: lwc1        $f4, 0x84C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X84C);
    // 0x00222FD4: c.lt.s      $f4, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f4.fl < ctx->f2.fl;
    // 0x00222FD8: nop

    // 0x00222FDC: bc1f        L_00222FF0
    if (!c1cs) {
        // 0x00222FE0: nop
    
            goto L_00222FF0;
    }
    // 0x00222FE0: nop

    // 0x00222FE4: lwc1        $f0, 0x86C($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X86C);
    // 0x00222FE8: add.s       $f0, $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f4.fl;
    // 0x00222FEC: swc1        $f0, 0x86C($sp)
    MEM_W(0X86C, ctx->r29) = ctx->f0.u32l;
L_00222FF0:
    // 0x00222FF0: lwc1        $f7, 0x850($sp)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r29, 0X850);
    // 0x00222FF4: c.lt.s      $f7, $f2
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f7.fl < ctx->f2.fl;
    // 0x00222FF8: nop

    // 0x00222FFC: bc1f        L_00223010
    if (!c1cs) {
        // 0x00223000: nop
    
            goto L_00223010;
    }
    // 0x00223000: nop

    // 0x00223004: lwc1        $f0, 0x870($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X870);
    // 0x00223008: add.s       $f0, $f0, $f7
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 7);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f7.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f7.fl;
    // 0x0022300C: swc1        $f0, 0x870($sp)
    MEM_W(0X870, ctx->r29) = ctx->f0.u32l;
L_00223010:
    // 0x00223010: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00223014: lwc1        $f2, 0x5F9C($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X5F9C);
    // 0x00223018: mov.s       $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    ctx->f0.fl = ctx->f1.fl;
    // 0x0022301C: c.le.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl <= ctx->f2.fl;
    // 0x00223020: nop

    // 0x00223024: bc1fl       L_0022302C
    if (!c1cs) {
        // 0x00223028: mov.s       $f0, $f2
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
            goto L_0022302C;
    }
    goto skip_5;
    // 0x00223028: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
    skip_5:
L_0022302C:
    // 0x0022302C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00223030: lwc1        $f3, 0x5FA0($at)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r1, 0X5FA0);
    // 0x00223034: c.le.s      $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f3.fl <= ctx->f0.fl;
    // 0x00223038: nop

    // 0x0022303C: bc1fl       L_00223044
    if (!c1cs) {
        // 0x00223040: mov.s       $f0, $f3
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    ctx->f0.fl = ctx->f3.fl;
            goto L_00223044;
    }
    goto skip_6;
    // 0x00223040: mov.s       $f0, $f3
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    ctx->f0.fl = ctx->f3.fl;
    skip_6:
L_00223044:
    // 0x00223044: mul.s       $f5, $f23, $f2
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 23);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f23.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f5.fl = MUL_S(ctx->f23.fl, ctx->f2.fl);
    // 0x00223048: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0022304C: lwc1        $f8, 0x5FA4($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X5FA4);
    // 0x00223050: sub.s       $f6, $f8, $f23
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 23);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f23.fl); 
    ctx->f6.fl = ctx->f8.fl - ctx->f23.fl;
    // 0x00223054: mul.s       $f0, $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x00223058: add.s       $f0, $f0, $f5
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 5);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f5.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f5.fl;
    // 0x0022305C: mov.s       $f1, $f4
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 4);
    ctx->f1.fl = ctx->f4.fl;
    // 0x00223060: c.le.s      $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f1.fl <= ctx->f2.fl;
    // 0x00223064: nop

    // 0x00223068: bc1t        L_00223074
    if (c1cs) {
        // 0x0022306C: swc1        $f0, 0x848($sp)
        MEM_W(0X848, ctx->r29) = ctx->f0.u32l;
            goto L_00223074;
    }
    // 0x0022306C: swc1        $f0, 0x848($sp)
    MEM_W(0X848, ctx->r29) = ctx->f0.u32l;
    // 0x00223070: mov.s       $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    ctx->f1.fl = ctx->f2.fl;
L_00223074:
    // 0x00223074: mov.s       $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    ctx->f0.fl = ctx->f1.fl;
    // 0x00223078: c.le.s      $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f3.fl <= ctx->f0.fl;
    // 0x0022307C: nop

    // 0x00223080: bc1fl       L_00223088
    if (!c1cs) {
        // 0x00223084: mov.s       $f0, $f3
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    ctx->f0.fl = ctx->f3.fl;
            goto L_00223088;
    }
    goto skip_7;
    // 0x00223084: mov.s       $f0, $f3
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    ctx->f0.fl = ctx->f3.fl;
    skip_7:
L_00223088:
    // 0x00223088: mul.s       $f0, $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x0022308C: add.s       $f0, $f0, $f5
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 5);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f5.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f5.fl;
    // 0x00223090: mov.s       $f1, $f7
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 7);
    ctx->f1.fl = ctx->f7.fl;
    // 0x00223094: c.le.s      $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f1.fl <= ctx->f2.fl;
    // 0x00223098: nop

    // 0x0022309C: bc1t        L_002230A8
    if (c1cs) {
        // 0x002230A0: swc1        $f0, 0x84C($sp)
        MEM_W(0X84C, ctx->r29) = ctx->f0.u32l;
            goto L_002230A8;
    }
    // 0x002230A0: swc1        $f0, 0x84C($sp)
    MEM_W(0X84C, ctx->r29) = ctx->f0.u32l;
    // 0x002230A4: mov.s       $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    ctx->f1.fl = ctx->f2.fl;
L_002230A8:
    // 0x002230A8: mov.s       $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    ctx->f0.fl = ctx->f1.fl;
    // 0x002230AC: c.le.s      $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f3.fl <= ctx->f0.fl;
    // 0x002230B0: nop

    // 0x002230B4: bc1fl       L_002230BC
    if (!c1cs) {
        // 0x002230B8: mov.s       $f0, $f3
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    ctx->f0.fl = ctx->f3.fl;
            goto L_002230BC;
    }
    goto skip_8;
    // 0x002230B8: mov.s       $f0, $f3
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    ctx->f0.fl = ctx->f3.fl;
    skip_8:
L_002230BC:
    // 0x002230BC: mul.s       $f0, $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x002230C0: add.s       $f0, $f0, $f5
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 5);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f5.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f5.fl;
    // 0x002230C4: lwc1        $f1, 0x868($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X868);
    // 0x002230C8: c.le.s      $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f1.fl <= ctx->f2.fl;
    // 0x002230CC: nop

    // 0x002230D0: bc1t        L_002230DC
    if (c1cs) {
        // 0x002230D4: swc1        $f0, 0x850($sp)
        MEM_W(0X850, ctx->r29) = ctx->f0.u32l;
            goto L_002230DC;
    }
    // 0x002230D4: swc1        $f0, 0x850($sp)
    MEM_W(0X850, ctx->r29) = ctx->f0.u32l;
    // 0x002230D8: mov.s       $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    ctx->f1.fl = ctx->f2.fl;
L_002230DC:
    // 0x002230DC: mov.s       $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    ctx->f0.fl = ctx->f1.fl;
    // 0x002230E0: c.le.s      $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f3.fl <= ctx->f0.fl;
    // 0x002230E4: nop

    // 0x002230E8: bc1fl       L_002230F0
    if (!c1cs) {
        // 0x002230EC: mov.s       $f0, $f3
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    ctx->f0.fl = ctx->f3.fl;
            goto L_002230F0;
    }
    goto skip_9;
    // 0x002230EC: mov.s       $f0, $f3
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    ctx->f0.fl = ctx->f3.fl;
    skip_9:
L_002230F0:
    // 0x002230F0: mul.s       $f0, $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x002230F4: add.s       $f0, $f0, $f5
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 5);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f5.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f5.fl;
    // 0x002230F8: lwc1        $f1, 0x86C($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X86C);
    // 0x002230FC: c.le.s      $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f1.fl <= ctx->f2.fl;
    // 0x00223100: nop

    // 0x00223104: bc1t        L_00223110
    if (c1cs) {
        // 0x00223108: swc1        $f0, 0x868($sp)
        MEM_W(0X868, ctx->r29) = ctx->f0.u32l;
            goto L_00223110;
    }
    // 0x00223108: swc1        $f0, 0x868($sp)
    MEM_W(0X868, ctx->r29) = ctx->f0.u32l;
    // 0x0022310C: mov.s       $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    ctx->f1.fl = ctx->f2.fl;
L_00223110:
    // 0x00223110: mov.s       $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    ctx->f0.fl = ctx->f1.fl;
    // 0x00223114: c.le.s      $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f3.fl <= ctx->f0.fl;
    // 0x00223118: nop

    // 0x0022311C: bc1fl       L_00223124
    if (!c1cs) {
        // 0x00223120: mov.s       $f0, $f3
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    ctx->f0.fl = ctx->f3.fl;
            goto L_00223124;
    }
    goto skip_10;
    // 0x00223120: mov.s       $f0, $f3
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    ctx->f0.fl = ctx->f3.fl;
    skip_10:
L_00223124:
    // 0x00223124: mul.s       $f0, $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x00223128: add.s       $f0, $f0, $f5
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 5);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f5.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f5.fl;
    // 0x0022312C: lwc1        $f1, 0x870($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X870);
    // 0x00223130: c.le.s      $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f1.fl <= ctx->f2.fl;
    // 0x00223134: nop

    // 0x00223138: bc1t        L_00223144
    if (c1cs) {
        // 0x0022313C: swc1        $f0, 0x86C($sp)
        MEM_W(0X86C, ctx->r29) = ctx->f0.u32l;
            goto L_00223144;
    }
    // 0x0022313C: swc1        $f0, 0x86C($sp)
    MEM_W(0X86C, ctx->r29) = ctx->f0.u32l;
    // 0x00223140: mov.s       $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    ctx->f1.fl = ctx->f2.fl;
L_00223144:
    // 0x00223144: c.le.s      $f3, $f1
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f3.fl <= ctx->f1.fl;
    // 0x00223148: nop

    // 0x0022314C: bc1fl       L_00223154
    if (!c1cs) {
        // 0x00223150: mov.s       $f1, $f3
        CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 3);
    ctx->f1.fl = ctx->f3.fl;
            goto L_00223154;
    }
    goto skip_11;
    // 0x00223150: mov.s       $f1, $f3
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 3);
    ctx->f1.fl = ctx->f3.fl;
    skip_11:
L_00223154:
    // 0x00223154: sub.s       $f0, $f8, $f23
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 23);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f23.fl); 
    ctx->f0.fl = ctx->f8.fl - ctx->f23.fl;
    // 0x00223158: mul.s       $f0, $f1, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x0022315C: nop

    // 0x00223160: mul.s       $f1, $f23, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 23);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f23.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f1.fl = MUL_S(ctx->f23.fl, ctx->f2.fl);
    // 0x00223164: lwc1        $f2, 0x848($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X848);
    // 0x00223168: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x0022316C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00223170: lwc1        $f1, 0x5FA8($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X5FA8);
    // 0x00223174: c.le.s      $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f1.fl <= ctx->f2.fl;
    // 0x00223178: nop

    // 0x0022317C: bc1t        L_00223194
    if (c1cs) {
        // 0x00223180: swc1        $f0, 0x870($sp)
        MEM_W(0X870, ctx->r29) = ctx->f0.u32l;
            goto L_00223194;
    }
    // 0x00223180: swc1        $f0, 0x870($sp)
    MEM_W(0X870, ctx->r29) = ctx->f0.u32l;
    // 0x00223184: trunc.w.s   $f9, $f2
    CHECK_FR(ctx, 9);
    CHECK_FR(ctx, 2);
    ctx->f_odd[(9 - 1) * 2] = TRUNC_W_S(ctx->f2.fl);
    // 0x00223188: mfc1        $v1, $f9
    ctx->r3 = (int32_t)ctx->f_odd[(9 - 1) * 2];
    // 0x0022318C: j           L_002231A8
    // 0x00223190: nop

        goto L_002231A8;
    // 0x00223190: nop

L_00223194:
    // 0x00223194: sub.s       $f0, $f2, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f1.fl;
    // 0x00223198: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x0022319C: trunc.w.s   $f9, $f0
    CHECK_FR(ctx, 9);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(9 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x002231A0: mfc1        $v1, $f9
    ctx->r3 = (int32_t)ctx->f_odd[(9 - 1) * 2];
    // 0x002231A4: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
L_002231A8:
    // 0x002231A8: lw          $t0, 0x934($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X934);
    // 0x002231AC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002231B0: lwc1        $f1, 0x5FAC($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X5FAC);
    // 0x002231B4: sb          $v1, 0x4($t0)
    MEM_B(0X4, ctx->r8) = ctx->r3;
    // 0x002231B8: sb          $v1, 0x0($t0)
    MEM_B(0X0, ctx->r8) = ctx->r3;
    // 0x002231BC: lwc1        $f0, 0x84C($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X84C);
    // 0x002231C0: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x002231C4: nop

    // 0x002231C8: bc1tl       L_002231E0
    if (c1cs) {
        // 0x002231CC: sub.s       $f0, $f0, $f1
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
            goto L_002231E0;
    }
    goto skip_12;
    // 0x002231CC: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    skip_12:
    // 0x002231D0: trunc.w.s   $f9, $f0
    CHECK_FR(ctx, 9);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(9 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x002231D4: mfc1        $v1, $f9
    ctx->r3 = (int32_t)ctx->f_odd[(9 - 1) * 2];
    // 0x002231D8: j           L_002231F0
    // 0x002231DC: nop

        goto L_002231F0;
    // 0x002231DC: nop

L_002231E0:
    // 0x002231E0: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x002231E4: trunc.w.s   $f9, $f0
    CHECK_FR(ctx, 9);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(9 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x002231E8: mfc1        $v1, $f9
    ctx->r3 = (int32_t)ctx->f_odd[(9 - 1) * 2];
    // 0x002231EC: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
L_002231F0:
    // 0x002231F0: lw          $t0, 0x934($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X934);
    // 0x002231F4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002231F8: lwc1        $f1, 0x5FB0($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X5FB0);
    // 0x002231FC: sb          $v1, 0x5($t0)
    MEM_B(0X5, ctx->r8) = ctx->r3;
    // 0x00223200: sb          $v1, 0x1($t0)
    MEM_B(0X1, ctx->r8) = ctx->r3;
    // 0x00223204: lwc1        $f0, 0x850($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X850);
    // 0x00223208: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x0022320C: nop

    // 0x00223210: bc1tl       L_00223228
    if (c1cs) {
        // 0x00223214: sub.s       $f0, $f0, $f1
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
            goto L_00223228;
    }
    goto skip_13;
    // 0x00223214: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    skip_13:
    // 0x00223218: trunc.w.s   $f9, $f0
    CHECK_FR(ctx, 9);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(9 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x0022321C: mfc1        $v1, $f9
    ctx->r3 = (int32_t)ctx->f_odd[(9 - 1) * 2];
    // 0x00223220: j           L_00223238
    // 0x00223224: nop

        goto L_00223238;
    // 0x00223224: nop

L_00223228:
    // 0x00223228: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x0022322C: trunc.w.s   $f9, $f0
    CHECK_FR(ctx, 9);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(9 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x00223230: mfc1        $v1, $f9
    ctx->r3 = (int32_t)ctx->f_odd[(9 - 1) * 2];
    // 0x00223234: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
L_00223238:
    // 0x00223238: lw          $t0, 0x934($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X934);
    // 0x0022323C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00223240: lwc1        $f1, 0x5FB4($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X5FB4);
    // 0x00223244: sb          $v1, 0x6($t0)
    MEM_B(0X6, ctx->r8) = ctx->r3;
    // 0x00223248: sb          $v1, 0x2($t0)
    MEM_B(0X2, ctx->r8) = ctx->r3;
    // 0x0022324C: lwc1        $f0, 0x868($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X868);
    // 0x00223250: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x00223254: nop

    // 0x00223258: bc1tl       L_00223270
    if (c1cs) {
        // 0x0022325C: sub.s       $f0, $f0, $f1
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
            goto L_00223270;
    }
    goto skip_14;
    // 0x0022325C: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    skip_14:
    // 0x00223260: trunc.w.s   $f9, $f0
    CHECK_FR(ctx, 9);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(9 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x00223264: mfc1        $v1, $f9
    ctx->r3 = (int32_t)ctx->f_odd[(9 - 1) * 2];
    // 0x00223268: j           L_00223280
    // 0x0022326C: nop

        goto L_00223280;
    // 0x0022326C: nop

L_00223270:
    // 0x00223270: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x00223274: trunc.w.s   $f9, $f0
    CHECK_FR(ctx, 9);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(9 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x00223278: mfc1        $v1, $f9
    ctx->r3 = (int32_t)ctx->f_odd[(9 - 1) * 2];
    // 0x0022327C: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
L_00223280:
    // 0x00223280: lw          $t0, 0x934($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X934);
    // 0x00223284: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00223288: lwc1        $f1, 0x5FB8($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X5FB8);
    // 0x0022328C: sb          $v1, 0xC($t0)
    MEM_B(0XC, ctx->r8) = ctx->r3;
    // 0x00223290: sb          $v1, 0x8($t0)
    MEM_B(0X8, ctx->r8) = ctx->r3;
    // 0x00223294: lwc1        $f0, 0x86C($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X86C);
    // 0x00223298: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x0022329C: nop

    // 0x002232A0: bc1tl       L_002232B8
    if (c1cs) {
        // 0x002232A4: sub.s       $f0, $f0, $f1
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
            goto L_002232B8;
    }
    goto skip_15;
    // 0x002232A4: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    skip_15:
    // 0x002232A8: trunc.w.s   $f9, $f0
    CHECK_FR(ctx, 9);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(9 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x002232AC: mfc1        $v1, $f9
    ctx->r3 = (int32_t)ctx->f_odd[(9 - 1) * 2];
    // 0x002232B0: j           L_002232C8
    // 0x002232B4: nop

        goto L_002232C8;
    // 0x002232B4: nop

L_002232B8:
    // 0x002232B8: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x002232BC: trunc.w.s   $f9, $f0
    CHECK_FR(ctx, 9);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(9 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x002232C0: mfc1        $v1, $f9
    ctx->r3 = (int32_t)ctx->f_odd[(9 - 1) * 2];
    // 0x002232C4: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
L_002232C8:
    // 0x002232C8: lw          $t0, 0x934($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X934);
    // 0x002232CC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002232D0: lwc1        $f1, 0x5FBC($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X5FBC);
    // 0x002232D4: sb          $v1, 0xD($t0)
    MEM_B(0XD, ctx->r8) = ctx->r3;
    // 0x002232D8: sb          $v1, 0x9($t0)
    MEM_B(0X9, ctx->r8) = ctx->r3;
    // 0x002232DC: lwc1        $f0, 0x870($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X870);
    // 0x002232E0: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x002232E4: nop

    // 0x002232E8: bc1tl       L_00223300
    if (c1cs) {
        // 0x002232EC: sub.s       $f0, $f0, $f1
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
            goto L_00223300;
    }
    goto skip_16;
    // 0x002232EC: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    skip_16:
    // 0x002232F0: trunc.w.s   $f9, $f0
    CHECK_FR(ctx, 9);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(9 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x002232F4: mfc1        $v1, $f9
    ctx->r3 = (int32_t)ctx->f_odd[(9 - 1) * 2];
    // 0x002232F8: j           L_00223310
    // 0x002232FC: nop

        goto L_00223310;
    // 0x002232FC: nop

L_00223300:
    // 0x00223300: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x00223304: trunc.w.s   $f9, $f0
    CHECK_FR(ctx, 9);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(9 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x00223308: mfc1        $v1, $f9
    ctx->r3 = (int32_t)ctx->f_odd[(9 - 1) * 2];
    // 0x0022330C: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
L_00223310:
    // 0x00223310: lw          $t0, 0x934($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X934);
    // 0x00223314: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00223318: lwc1        $f1, 0x5FC0($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X5FC0);
    // 0x0022331C: sb          $v1, 0xE($t0)
    MEM_B(0XE, ctx->r8) = ctx->r3;
    // 0x00223320: sb          $v1, 0xA($t0)
    MEM_B(0XA, ctx->r8) = ctx->r3;
    // 0x00223324: lwc1        $f0, 0x828($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X828);
    // 0x00223328: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0022332C: trunc.w.s   $f9, $f0
    CHECK_FR(ctx, 9);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(9 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x00223330: mfc1        $v0, $f9
    ctx->r2 = (int32_t)ctx->f_odd[(9 - 1) * 2];
    // 0x00223334: sb          $v0, 0x10($t0)
    MEM_B(0X10, ctx->r8) = ctx->r2;
    // 0x00223338: lwc1        $f0, 0x82C($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X82C);
    // 0x0022333C: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00223340: trunc.w.s   $f9, $f0
    CHECK_FR(ctx, 9);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(9 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x00223344: mfc1        $v0, $f9
    ctx->r2 = (int32_t)ctx->f_odd[(9 - 1) * 2];
    // 0x00223348: lw          $t0, 0x934($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X934);
    // 0x0022334C: sb          $v0, 0x11($t0)
    MEM_B(0X11, ctx->r8) = ctx->r2;
    // 0x00223350: lwc1        $f0, 0x830($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X830);
    // 0x00223354: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00223358: trunc.w.s   $f9, $f0
    CHECK_FR(ctx, 9);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(9 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x0022335C: mfc1        $v0, $f9
    ctx->r2 = (int32_t)ctx->f_odd[(9 - 1) * 2];
    // 0x00223360: sb          $v0, 0x12($t0)
    MEM_B(0X12, ctx->r8) = ctx->r2;
L_00223364:
    // 0x00223364: lw          $ra, 0x8FC($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X8FC);
    // 0x00223368: lw          $fp, 0x8F8($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X8F8);
    // 0x0022336C: lw          $s7, 0x8F4($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X8F4);
    // 0x00223370: lw          $s6, 0x8F0($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X8F0);
    // 0x00223374: lw          $s5, 0x8EC($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X8EC);
    // 0x00223378: lw          $s4, 0x8E8($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X8E8);
    // 0x0022337C: lw          $s3, 0x8E4($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X8E4);
    // 0x00223380: lw          $s2, 0x8E0($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X8E0);
    // 0x00223384: lw          $s1, 0x8DC($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X8DC);
    // 0x00223388: lw          $s0, 0x8D8($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X8D8);
    // 0x0022338C: ldc1        $f24, 0x920($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X920);
    // 0x00223390: ldc1        $f23, 0x918($sp)
    CHECK_FR(ctx, 23);
    ctx->f23.u64 = LD(ctx->r29, 0X918);
    // 0x00223394: ldc1        $f22, 0x910($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X910);
    // 0x00223398: ldc1        $f21, 0x908($sp)
    CHECK_FR(ctx, 21);
    ctx->f21.u64 = LD(ctx->r29, 0X908);
    // 0x0022339C: ldc1        $f20, 0x900($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X900);
    // 0x002233A0: jr          $ra
    // 0x002233A4: addiu       $sp, $sp, 0x928
    ctx->r29 = ADD32(ctx->r29, 0X928);
    return;
    // 0x002233A4: addiu       $sp, $sp, 0x928
    ctx->r29 = ADD32(ctx->r29, 0X928);
;}
RECOMP_FUNC void func_004674CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_0042E720:
    // 0x004674CC: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x004674D0: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x004674D4: addu        $s4, $a0, $zero
    ctx->r20 = ADD32(ctx->r4, 0);
    // 0x004674D8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x004674DC: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x004674E0: sw          $s5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r21;
    // 0x004674E4: addu        $s5, $a2, $zero
    ctx->r21 = ADD32(ctx->r6, 0);
    // 0x004674E8: addiu       $a0, $s4, 0xC
    ctx->r4 = ADD32(ctx->r20, 0XC);
    // 0x004674EC: addiu       $a1, $zero, 0x131C
    ctx->r5 = ADD32(0, 0X131C);
    // 0x004674F0: addiu       $a2, $zero, 0x1320
    ctx->r6 = ADD32(0, 0X1320);
    // 0x004674F4: sw          $ra, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r31;
    // 0x004674F8: sw          $s7, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r23;
    // 0x004674FC: sw          $s6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r22;
    // 0x00467500: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x00467504: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x00467508: jal         0x00200500
    // 0x0046750C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    func_00200500(rdram, ctx);
        goto after_0;
    // 0x0046750C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_0:
    // 0x00467510: addiu       $a0, $s4, 0x20
    ctx->r4 = ADD32(ctx->r20, 0X20);
    // 0x00467514: addiu       $a1, $zero, 0x131C
    ctx->r5 = ADD32(0, 0X131C);
    // 0x00467518: jal         0x00200500
    // 0x0046751C: addiu       $a2, $zero, 0x1320
    ctx->r6 = ADD32(0, 0X1320);
    func_00200500(rdram, ctx);
        goto after_1;
    // 0x0046751C: addiu       $a2, $zero, 0x1320
    ctx->r6 = ADD32(0, 0X1320);
    after_1:
    // 0x00467520: jal         0x00285410
    // 0x00467524: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_00285410(rdram, ctx);
        goto after_2;
    // 0x00467524: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_2:
    // 0x00467528: jal         0x002053A8
    // 0x0046752C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_002053A8(rdram, ctx);
        goto after_3;
    // 0x0046752C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_3:
    // 0x00467530: lw          $a1, 0x0($s4)
    ctx->r5 = MEM_W(ctx->r20, 0X0);
    // 0x00467534: lui         $s7, 0x8012
    ctx->r23 = S32(0X8012 << 16);
    // 0x00467538: addiu       $s7, $s7, -0x5528
    ctx->r23 = ADD32(ctx->r23, -0X5528);
    // 0x0046753C: beq         $a1, $zero, L_00467558
    if (ctx->r5 == 0) {
        // 0x00467540: nop
    
            goto L_00467558;
    }
    // 0x00467540: nop

    // 0x00467544: jal         0x002052D8
    // 0x00467548: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_002052D8(rdram, ctx);
        goto after_4;
    // 0x00467548: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_4:
    // 0x0046754C: sw          $zero, 0x0($s4)
    MEM_W(0X0, ctx->r20) = 0;
    // 0x00467550: sw          $zero, 0x4($s4)
    MEM_W(0X4, ctx->r20) = 0;
    // 0x00467554: sw          $zero, 0x8($s4)
    MEM_W(0X8, ctx->r20) = 0;
L_00467558:
    // 0x00467558: beq         $s1, $zero, L_00467728
    if (ctx->r17 == 0) {
        // 0x0046755C: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_00467728;
    }
    // 0x0046755C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x00467560: sll         $s0, $s1, 3
    ctx->r16 = S32(ctx->r17 << 3);
    // 0x00467564: addu        $s0, $s0, $s1
    ctx->r16 = ADD32(ctx->r16, ctx->r17);
    // 0x00467568: sll         $v0, $s0, 4
    ctx->r2 = S32(ctx->r16 << 4);
    // 0x0046756C: addu        $s0, $s0, $v0
    ctx->r16 = ADD32(ctx->r16, ctx->r2);
    // 0x00467570: sll         $s0, $s0, 2
    ctx->r16 = S32(ctx->r16 << 2);
    // 0x00467574: addu        $s0, $s0, $s1
    ctx->r16 = ADD32(ctx->r16, ctx->r17);
    // 0x00467578: sll         $s0, $s0, 3
    ctx->r16 = S32(ctx->r16 << 3);
    // 0x0046757C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x00467580: addiu       $a2, $zero, 0x23
    ctx->r6 = ADD32(0, 0X23);
    // 0x00467584: lui         $a3, 0x800A
    ctx->r7 = S32(0X800A << 16);
    // 0x00467588: addiu       $a3, $a3, 0x7080
    ctx->r7 = ADD32(ctx->r7, 0X7080);
    // 0x0046758C: jal         0x00204EDC
    // 0x00467590: sw          $s1, 0x8($s4)
    MEM_W(0X8, ctx->r20) = ctx->r17;
    func_00204EDC(rdram, ctx);
        goto after_5;
    // 0x00467590: sw          $s1, 0x8($s4)
    MEM_W(0X8, ctx->r20) = ctx->r17;
    after_5:
    // 0x00467594: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x00467598: sw          $v0, 0x0($s4)
    MEM_W(0X0, ctx->r20) = ctx->r2;
    // 0x0046759C: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
    // 0x004675A0: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    // 0x004675A4: jal         0x00266C5C
    // 0x004675A8: sw          $a0, 0x4($s4)
    MEM_W(0X4, ctx->r20) = ctx->r4;
    func_00266C5C(rdram, ctx);
        goto after_6;
    // 0x004675A8: sw          $a0, 0x4($s4)
    MEM_W(0X4, ctx->r20) = ctx->r4;
    after_6:
    // 0x004675AC: lw          $v0, 0x8($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X8);
    // 0x004675B0: blez        $v0, L_004675E0
    if (SIGNED(ctx->r2) <= 0) {
        // 0x004675B4: addu        $s2, $zero, $zero
        ctx->r18 = ADD32(0, 0);
            goto L_004675E0;
    }
    // 0x004675B4: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    // 0x004675B8: addu        $s0, $s2, $zero
    ctx->r16 = ADD32(ctx->r18, 0);
L_004675BC:
    // 0x004675BC: addiu       $a0, $s4, 0xC
    ctx->r4 = ADD32(ctx->r20, 0XC);
    // 0x004675C0: lw          $a1, 0x4($s4)
    ctx->r5 = MEM_W(ctx->r20, 0X4);
    // 0x004675C4: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x004675C8: jal         0x00200574
    // 0x004675CC: addu        $a1, $a1, $s0
    ctx->r5 = ADD32(ctx->r5, ctx->r16);
    func_00200574(rdram, ctx);
        goto after_7;
    // 0x004675CC: addu        $a1, $a1, $s0
    ctx->r5 = ADD32(ctx->r5, ctx->r16);
    after_7:
    // 0x004675D0: lw          $v0, 0x8($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X8);
    // 0x004675D4: slt         $v0, $s2, $v0
    ctx->r2 = SIGNED(ctx->r18) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x004675D8: bne         $v0, $zero, L_004675BC
    if (ctx->r2 != 0) {
        // 0x004675DC: addiu       $s0, $s0, 0x1328
        ctx->r16 = ADD32(ctx->r16, 0X1328);
            goto L_004675BC;
    }
    // 0x004675DC: addiu       $s0, $s0, 0x1328
    ctx->r16 = ADD32(ctx->r16, 0X1328);
L_004675E0:
    // 0x004675E0: lbu         $v0, 0x19($s7)
    ctx->r2 = MEM_BU(ctx->r23, 0X19);
    // 0x004675E4: beq         $v0, $zero, L_0046769C
    if (ctx->r2 == 0) {
        // 0x004675E8: addiu       $s3, $s7, 0x40
        ctx->r19 = ADD32(ctx->r23, 0X40);
            goto L_0046769C;
    }
    // 0x004675E8: addiu       $s3, $s7, 0x40
    ctx->r19 = ADD32(ctx->r23, 0X40);
    // 0x004675EC: lw          $v0, 0x8($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X8);
    // 0x004675F0: blez        $v0, L_0046771C
    if (SIGNED(ctx->r2) <= 0) {
        // 0x004675F4: addu        $s2, $zero, $zero
        ctx->r18 = ADD32(0, 0);
            goto L_0046771C;
    }
    // 0x004675F4: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    // 0x004675F8: lui         $s6, 0x800F
    ctx->r22 = S32(0X800F << 16);
    // 0x004675FC: addiu       $s6, $s6, 0x5EC0
    ctx->r22 = ADD32(ctx->r22, 0X5EC0);
    // 0x00467600: addiu       $s5, $zero, 0x80
    ctx->r21 = ADD32(0, 0X80);
    // 0x00467604: addu        $s0, $s2, $zero
    ctx->r16 = ADD32(ctx->r18, 0);
L_00467608:
    // 0x00467608: addu        $s3, $s7, $s5
    ctx->r19 = ADD32(ctx->r23, ctx->r21);
    // 0x0046760C: lw          $v0, 0x4($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X4);
    // 0x00467610: addu        $a1, $s6, $zero
    ctx->r5 = ADD32(ctx->r22, 0);
    // 0x00467614: addu        $s1, $v0, $s0
    ctx->r17 = ADD32(ctx->r2, ctx->r16);
    // 0x00467618: addiu       $a0, $s1, 0xA40
    ctx->r4 = ADD32(ctx->r17, 0XA40);
    // 0x0046761C: jal         0x002470E8
    // 0x00467620: sw          $zero, 0x510($s1)
    MEM_W(0X510, ctx->r17) = 0;
    func_002470E8(rdram, ctx);
        goto after_8;
    // 0x00467620: sw          $zero, 0x510($s1)
    MEM_W(0X510, ctx->r17) = 0;
    after_8:
    // 0x00467624: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x00467628: sw          $s2, 0x514($s1)
    MEM_W(0X514, ctx->r17) = ctx->r18;
    // 0x0046762C: sw          $s3, 0x518($s1)
    MEM_W(0X518, ctx->r17) = ctx->r19;
    // 0x00467630: sw          $zero, 0x1288($s1)
    MEM_W(0X1288, ctx->r17) = 0;
    // 0x00467634: sw          $zero, 0x128C($s1)
    MEM_W(0X128C, ctx->r17) = 0;
    // 0x00467638: sw          $zero, 0x92C($s1)
    MEM_W(0X92C, ctx->r17) = 0;
    // 0x0046763C: sw          $zero, 0x930($s1)
    MEM_W(0X930, ctx->r17) = 0;
    // 0x00467640: jal         0x00248340
    // 0x00467644: sw          $zero, 0xC00($s1)
    MEM_W(0XC00, ctx->r17) = 0;
    func_00248340(rdram, ctx);
        goto after_9;
    // 0x00467644: sw          $zero, 0xC00($s1)
    MEM_W(0XC00, ctx->r17) = 0;
    after_9:
    // 0x00467648: lbu         $v0, 0x28($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0X28);
    // 0x0046764C: beq         $v0, $zero, L_00467678
    if (ctx->r2 == 0) {
        // 0x00467650: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_00467678;
    }
    // 0x00467650: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x00467654: lb          $a1, 0x30($s3)
    ctx->r5 = MEM_B(ctx->r19, 0X30);
    // 0x00467658: jal         0x0042DB38
    // 0x0046765C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_0042DB38(rdram, ctx);
        goto after_10;
    // 0x0046765C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_10:
    // 0x00467660: addiu       $a0, $s4, 0xC
    ctx->r4 = ADD32(ctx->r20, 0XC);
    // 0x00467664: jal         0x00200738
    // 0x00467668: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_00200738(rdram, ctx);
        goto after_11;
    // 0x00467668: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_11:
    // 0x0046766C: addiu       $a0, $s4, 0x20
    ctx->r4 = ADD32(ctx->r20, 0X20);
    // 0x00467670: jal         0x00200518
    // 0x00467674: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_00200518(rdram, ctx);
        goto after_12;
    // 0x00467674: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_12:
L_00467678:
    // 0x00467678: addiu       $s6, $s6, 0x224
    ctx->r22 = ADD32(ctx->r22, 0X224);
    // 0x0046767C: addiu       $s5, $s5, 0x40
    ctx->r21 = ADD32(ctx->r21, 0X40);
    // 0x00467680: lw          $v0, 0x8($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X8);
    // 0x00467684: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x00467688: slt         $v0, $s2, $v0
    ctx->r2 = SIGNED(ctx->r18) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x0046768C: bne         $v0, $zero, L_00467608
    if (ctx->r2 != 0) {
        // 0x00467690: addiu       $s0, $s0, 0x1328
        ctx->r16 = ADD32(ctx->r16, 0X1328);
            goto L_00467608;
    }
    // 0x00467690: addiu       $s0, $s0, 0x1328
    ctx->r16 = ADD32(ctx->r16, 0X1328);
    // 0x00467694: j           L_0042E720
    // 0x00467698: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    entry_0042E720(rdram, ctx);
    return;
    // 0x00467698: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_0046769C:
    // 0x0046769C: lui         $v0, 0x800F
    ctx->r2 = S32(0X800F << 16);
    // 0x004676A0: addiu       $v0, $v0, 0x5EC0
    ctx->r2 = ADD32(ctx->r2, 0X5EC0);
    // 0x004676A4: lw          $s1, 0x4($s4)
    ctx->r17 = MEM_W(ctx->r20, 0X4);
    // 0x004676A8: lb          $s0, 0x2F($s3)
    ctx->r16 = MEM_B(ctx->r19, 0X2F);
    // 0x004676AC: addiu       $a0, $s1, 0xA40
    ctx->r4 = ADD32(ctx->r17, 0XA40);
    // 0x004676B0: sll         $a1, $s0, 4
    ctx->r5 = S32(ctx->r16 << 4);
    // 0x004676B4: addu        $a1, $a1, $s0
    ctx->r5 = ADD32(ctx->r5, ctx->r16);
    // 0x004676B8: sll         $a1, $a1, 3
    ctx->r5 = S32(ctx->r5 << 3);
    // 0x004676BC: addu        $a1, $a1, $s0
    ctx->r5 = ADD32(ctx->r5, ctx->r16);
    // 0x004676C0: sll         $a1, $a1, 2
    ctx->r5 = S32(ctx->r5 << 2);
    // 0x004676C4: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    // 0x004676C8: jal         0x002470E8
    // 0x004676CC: sw          $zero, 0x510($s1)
    MEM_W(0X510, ctx->r17) = 0;
    func_002470E8(rdram, ctx);
        goto after_13;
    // 0x004676CC: sw          $zero, 0x510($s1)
    MEM_W(0X510, ctx->r17) = 0;
    after_13:
    // 0x004676D0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x004676D4: sw          $s0, 0x514($s1)
    MEM_W(0X514, ctx->r17) = ctx->r16;
    // 0x004676D8: sw          $s3, 0x518($s1)
    MEM_W(0X518, ctx->r17) = ctx->r19;
    // 0x004676DC: sw          $zero, 0x1288($s1)
    MEM_W(0X1288, ctx->r17) = 0;
    // 0x004676E0: sw          $zero, 0x128C($s1)
    MEM_W(0X128C, ctx->r17) = 0;
    // 0x004676E4: sw          $zero, 0x92C($s1)
    MEM_W(0X92C, ctx->r17) = 0;
    // 0x004676E8: sw          $zero, 0x930($s1)
    MEM_W(0X930, ctx->r17) = 0;
    // 0x004676EC: jal         0x00248340
    // 0x004676F0: sw          $zero, 0xC00($s1)
    MEM_W(0XC00, ctx->r17) = 0;
    func_00248340(rdram, ctx);
        goto after_14;
    // 0x004676F0: sw          $zero, 0xC00($s1)
    MEM_W(0XC00, ctx->r17) = 0;
    after_14:
    // 0x004676F4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x004676F8: lb          $a1, 0x30($s3)
    ctx->r5 = MEM_B(ctx->r19, 0X30);
    // 0x004676FC: jal         0x0042DB38
    // 0x00467700: addu        $a2, $s5, $zero
    ctx->r6 = ADD32(ctx->r21, 0);
    func_0042DB38(rdram, ctx);
        goto after_15;
    // 0x00467700: addu        $a2, $s5, $zero
    ctx->r6 = ADD32(ctx->r21, 0);
    after_15:
    // 0x00467704: addiu       $a0, $s4, 0xC
    ctx->r4 = ADD32(ctx->r20, 0XC);
    // 0x00467708: jal         0x00200738
    // 0x0046770C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_00200738(rdram, ctx);
        goto after_16;
    // 0x0046770C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_16:
    // 0x00467710: addiu       $a0, $s4, 0x20
    ctx->r4 = ADD32(ctx->r20, 0X20);
    // 0x00467714: jal         0x00200518
    // 0x00467718: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_00200518(rdram, ctx);
        goto after_17;
    // 0x00467718: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_17:
L_0046771C:
    // 0x0046771C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00467720: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x00467724: sw          $v0, -0x5310($at)
    MEM_W(-0X5310, ctx->r1) = ctx->r2;
L_00467728:
    // 0x00467728: lw          $ra, 0x30($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X30);
    // 0x0046772C: lw          $s7, 0x2C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X2C);
    // 0x00467730: lw          $s6, 0x28($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X28);
    // 0x00467734: lw          $s5, 0x24($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X24);
    // 0x00467738: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x0046773C: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x00467740: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x00467744: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00467748: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0046774C: jr          $ra
    // 0x00467750: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x00467750: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_0029DBD0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0029DBD0: lui         $v0, 0xA460
    ctx->r2 = S32(0XA460 << 16);
    // 0x0029DBD4: ori         $v0, $v0, 0x10
    ctx->r2 = ctx->r2 | 0X10;
    // 0x0029DBD8: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x0029DBDC: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
    // 0x0029DBE0: beq         $v0, $zero, L_0029DC00
    if (ctx->r2 == 0) {
        // 0x0029DBE4: nop
    
            goto L_0029DC00;
    }
    // 0x0029DBE4: nop

    // 0x0029DBE8: lui         $v1, 0xA460
    ctx->r3 = S32(0XA460 << 16);
    // 0x0029DBEC: ori         $v1, $v1, 0x10
    ctx->r3 = ctx->r3 | 0X10;
L_0029DBF0:
    // 0x0029DBF0: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x0029DBF4: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
    // 0x0029DBF8: bne         $v0, $zero, L_0029DBF0
    if (ctx->r2 != 0) {
        // 0x0029DBFC: nop
    
            goto L_0029DBF0;
    }
    // 0x0029DBFC: nop

L_0029DC00:
    // 0x0029DC00: lbu         $t0, 0x9($a0)
    ctx->r8 = MEM_BU(ctx->r4, 0X9);
    // 0x0029DC04: sll         $v0, $t0, 2
    ctx->r2 = S32(ctx->r8 << 2);
    // 0x0029DC08: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0029DC0C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x0029DC10: lw          $a3, -0x7680($at)
    ctx->r7 = MEM_W(ctx->r1, -0X7680);
    // 0x0029DC14: beq         $a3, $a0, L_0029DCF4
    if (ctx->r7 == ctx->r4) {
        // 0x0029DC18: nop
    
            goto L_0029DCF4;
    }
    // 0x0029DC18: nop

    // 0x0029DC1C: bne         $t0, $zero, L_0029DC84
    if (ctx->r8 != 0) {
        // 0x0029DC20: nop
    
            goto L_0029DC84;
    }
    // 0x0029DC20: nop

    // 0x0029DC24: lbu         $v1, 0x5($a3)
    ctx->r3 = MEM_BU(ctx->r7, 0X5);
    // 0x0029DC28: lbu         $v0, 0x5($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X5);
    // 0x0029DC2C: beq         $v1, $v0, L_0029DC3C
    if (ctx->r3 == ctx->r2) {
        // 0x0029DC30: lui         $v1, 0xA460
        ctx->r3 = S32(0XA460 << 16);
            goto L_0029DC3C;
    }
    // 0x0029DC30: lui         $v1, 0xA460
    ctx->r3 = S32(0XA460 << 16);
    // 0x0029DC34: ori         $v1, $v1, 0x14
    ctx->r3 = ctx->r3 | 0X14;
    // 0x0029DC38: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
L_0029DC3C:
    // 0x0029DC3C: lbu         $v1, 0x6($a3)
    ctx->r3 = MEM_BU(ctx->r7, 0X6);
    // 0x0029DC40: lbu         $v0, 0x6($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X6);
    // 0x0029DC44: beq         $v1, $v0, L_0029DC54
    if (ctx->r3 == ctx->r2) {
        // 0x0029DC48: lui         $v1, 0xA460
        ctx->r3 = S32(0XA460 << 16);
            goto L_0029DC54;
    }
    // 0x0029DC48: lui         $v1, 0xA460
    ctx->r3 = S32(0XA460 << 16);
    // 0x0029DC4C: ori         $v1, $v1, 0x1C
    ctx->r3 = ctx->r3 | 0X1C;
    // 0x0029DC50: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
L_0029DC54:
    // 0x0029DC54: lbu         $v1, 0x7($a3)
    ctx->r3 = MEM_BU(ctx->r7, 0X7);
    // 0x0029DC58: lbu         $v0, 0x7($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X7);
    // 0x0029DC5C: beq         $v1, $v0, L_0029DC6C
    if (ctx->r3 == ctx->r2) {
        // 0x0029DC60: lui         $v1, 0xA460
        ctx->r3 = S32(0XA460 << 16);
            goto L_0029DC6C;
    }
    // 0x0029DC60: lui         $v1, 0xA460
    ctx->r3 = S32(0XA460 << 16);
    // 0x0029DC64: ori         $v1, $v1, 0x20
    ctx->r3 = ctx->r3 | 0X20;
    // 0x0029DC68: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
L_0029DC6C:
    // 0x0029DC6C: lbu         $v1, 0x8($a3)
    ctx->r3 = MEM_BU(ctx->r7, 0X8);
    // 0x0029DC70: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x0029DC74: beq         $v1, $v0, L_0029DCE4
    if (ctx->r3 == ctx->r2) {
        // 0x0029DC78: lui         $v1, 0xA460
        ctx->r3 = S32(0XA460 << 16);
            goto L_0029DCE4;
    }
    // 0x0029DC78: lui         $v1, 0xA460
    ctx->r3 = S32(0XA460 << 16);
    // 0x0029DC7C: j           L_0029DCE0
    // 0x0029DC80: ori         $v1, $v1, 0x18
    ctx->r3 = ctx->r3 | 0X18;
        goto L_0029DCE0;
    // 0x0029DC80: ori         $v1, $v1, 0x18
    ctx->r3 = ctx->r3 | 0X18;
L_0029DC84:
    // 0x0029DC84: lbu         $v1, 0x5($a3)
    ctx->r3 = MEM_BU(ctx->r7, 0X5);
    // 0x0029DC88: lbu         $v0, 0x5($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X5);
    // 0x0029DC8C: beq         $v1, $v0, L_0029DC9C
    if (ctx->r3 == ctx->r2) {
        // 0x0029DC90: lui         $v1, 0xA460
        ctx->r3 = S32(0XA460 << 16);
            goto L_0029DC9C;
    }
    // 0x0029DC90: lui         $v1, 0xA460
    ctx->r3 = S32(0XA460 << 16);
    // 0x0029DC94: ori         $v1, $v1, 0x24
    ctx->r3 = ctx->r3 | 0X24;
    // 0x0029DC98: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
L_0029DC9C:
    // 0x0029DC9C: lbu         $v1, 0x6($a3)
    ctx->r3 = MEM_BU(ctx->r7, 0X6);
    // 0x0029DCA0: lbu         $v0, 0x6($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X6);
    // 0x0029DCA4: beq         $v1, $v0, L_0029DCB4
    if (ctx->r3 == ctx->r2) {
        // 0x0029DCA8: lui         $v1, 0xA460
        ctx->r3 = S32(0XA460 << 16);
            goto L_0029DCB4;
    }
    // 0x0029DCA8: lui         $v1, 0xA460
    ctx->r3 = S32(0XA460 << 16);
    // 0x0029DCAC: ori         $v1, $v1, 0x2C
    ctx->r3 = ctx->r3 | 0X2C;
    // 0x0029DCB0: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
L_0029DCB4:
    // 0x0029DCB4: lbu         $v1, 0x7($a3)
    ctx->r3 = MEM_BU(ctx->r7, 0X7);
    // 0x0029DCB8: lbu         $v0, 0x7($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X7);
    // 0x0029DCBC: beq         $v1, $v0, L_0029DCCC
    if (ctx->r3 == ctx->r2) {
        // 0x0029DCC0: lui         $v1, 0xA460
        ctx->r3 = S32(0XA460 << 16);
            goto L_0029DCCC;
    }
    // 0x0029DCC0: lui         $v1, 0xA460
    ctx->r3 = S32(0XA460 << 16);
    // 0x0029DCC4: ori         $v1, $v1, 0x30
    ctx->r3 = ctx->r3 | 0X30;
    // 0x0029DCC8: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
L_0029DCCC:
    // 0x0029DCCC: lbu         $v1, 0x8($a3)
    ctx->r3 = MEM_BU(ctx->r7, 0X8);
    // 0x0029DCD0: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x0029DCD4: beq         $v1, $v0, L_0029DCE4
    if (ctx->r3 == ctx->r2) {
        // 0x0029DCD8: lui         $v1, 0xA460
        ctx->r3 = S32(0XA460 << 16);
            goto L_0029DCE4;
    }
    // 0x0029DCD8: lui         $v1, 0xA460
    ctx->r3 = S32(0XA460 << 16);
    // 0x0029DCDC: ori         $v1, $v1, 0x28
    ctx->r3 = ctx->r3 | 0X28;
L_0029DCE0:
    // 0x0029DCE0: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
L_0029DCE4:
    // 0x0029DCE4: sll         $v0, $t0, 2
    ctx->r2 = S32(ctx->r8 << 2);
    // 0x0029DCE8: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0029DCEC: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x0029DCF0: sw          $a0, -0x7680($at)
    MEM_W(-0X7680, ctx->r1) = ctx->r4;
L_0029DCF4:
    // 0x0029DCF4: lw          $v0, 0xC($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XC);
    // 0x0029DCF8: lui         $v1, 0xA000
    ctx->r3 = S32(0XA000 << 16);
    // 0x0029DCFC: or          $v0, $v0, $a1
    ctx->r2 = ctx->r2 | ctx->r5;
    // 0x0029DD00: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x0029DD04: sw          $a2, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r6;
    // 0x0029DD08: jr          $ra
    // 0x0029DD0C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x0029DD0C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void func_00284378(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00284378: jr          $ra
    // 0x0028437C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x0028437C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void func_002651FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002651FC: jal         0x0022F1C8
    // 0x00265200: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    func_0022F1C8(rdram, ctx);
        goto after_0;
    // 0x00265200: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    after_0:
    // 0x00265204: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x00265208: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x0026520C: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x00265210: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x00265214: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x00265218: lw          $v0, 0x14($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X14);
    // 0x0026521C: addiu       $s2, $v0, 0x14
    ctx->r18 = ADD32(ctx->r2, 0X14);
    // 0x00265220: lb          $v1, 0x8($s2)
    ctx->r3 = MEM_B(ctx->r18, 0X8);
    // 0x00265224: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x00265228: beq         $v1, $v0, L_00265348
    if (ctx->r3 == ctx->r2) {
        // 0x0026522C: addu        $s1, $a1, $zero
        ctx->r17 = ADD32(ctx->r5, 0);
            goto L_00265348;
    }
    // 0x0026522C: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x00265230: mtc1        $v1, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r3;
    // 0x00265234: cvt.s.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.fl = CVT_S_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x00265238: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x0026523C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00265240: lwc1        $f0, 0x7C90($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X7C90);
    // 0x00265244: lh          $v0, 0xBA($s0)
    ctx->r2 = MEM_H(ctx->r16, 0XBA);
    // 0x00265248: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x0026524C: beq         $v0, $v1, L_002652F8
    if (ctx->r2 == ctx->r3) {
        // 0x00265250: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_002652F8;
    }
    // 0x00265250: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00265254: lbu         $v0, 0xC6($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XC6);
    // 0x00265258: lh          $v1, 0xDC($s0)
    ctx->r3 = MEM_H(ctx->r16, 0XDC);
    // 0x0026525C: sll         $a0, $v0, 24
    ctx->r4 = S32(ctx->r2 << 24);
    // 0x00265260: sra         $v0, $a0, 24
    ctx->r2 = S32(SIGNED(ctx->r4) >> 24);
    // 0x00265264: bnel        $v1, $v0, L_002652F8
    if (ctx->r3 != ctx->r2) {
        // 0x00265268: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_002652F8;
    }
    goto skip_0;
    // 0x00265268: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    skip_0:
    // 0x0026526C: lh          $v1, 0xDE($s0)
    ctx->r3 = MEM_H(ctx->r16, 0XDE);
    // 0x00265270: bne         $v1, $v0, L_002652F8
    if (ctx->r3 != ctx->r2) {
        // 0x00265274: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_002652F8;
    }
    // 0x00265274: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x00265278: lb          $v0, 0xC7($s1)
    ctx->r2 = MEM_B(ctx->r17, 0XC7);
    // 0x0026527C: beq         $v0, $zero, L_00265294
    if (ctx->r2 == 0) {
        // 0x00265280: nop
    
            goto L_00265294;
    }
    // 0x00265280: nop

    // 0x00265284: lw          $v0, 0xD4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XD4);
    // 0x00265288: andi        $v0, $v0, 0x400
    ctx->r2 = ctx->r2 & 0X400;
    // 0x0026528C: beq         $v0, $zero, L_002652F8
    if (ctx->r2 == 0) {
        // 0x00265290: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_002652F8;
    }
    // 0x00265290: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_00265294:
    // 0x00265294: lh          $v0, 0xE0($s0)
    ctx->r2 = MEM_H(ctx->r16, 0XE0);
    // 0x00265298: slti        $v0, $v0, 0x3
    ctx->r2 = SIGNED(ctx->r2) < 0X3 ? 1 : 0;
    // 0x0026529C: beq         $v0, $zero, L_002652D0
    if (ctx->r2 == 0) {
        // 0x002652A0: nop
    
            goto L_002652D0;
    }
    // 0x002652A0: nop

    // 0x002652A4: lw          $v0, 0xD4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XD4);
    // 0x002652A8: andi        $v0, $v0, 0x400
    ctx->r2 = ctx->r2 & 0X400;
    // 0x002652AC: beq         $v0, $zero, L_002652D0
    if (ctx->r2 == 0) {
        // 0x002652B0: nop
    
            goto L_002652D0;
    }
    // 0x002652B0: nop

    // 0x002652B4: lh          $v0, 0x100($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X100);
    // 0x002652B8: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x002652BC: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x002652C0: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x002652C4: lwc1        $f1, 0x108($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X108);
    // 0x002652C8: j           L_002652E8
    // 0x002652CC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_002652E8;
    // 0x002652CC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_002652D0:
    // 0x002652D0: lh          $v0, 0xE0($s0)
    ctx->r2 = MEM_H(ctx->r16, 0XE0);
    // 0x002652D4: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x002652D8: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x002652DC: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x002652E0: lwc1        $f1, 0xD8($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0XD8);
    // 0x002652E4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_002652E8:
    // 0x002652E8: c.le.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl <= ctx->f1.fl;
    // 0x002652EC: nop

    // 0x002652F0: bc1fl       L_002652F8
    if (!c1cs) {
        // 0x002652F4: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_002652F8;
    }
    goto skip_1;
    // 0x002652F4: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    skip_1:
L_002652F8:
    // 0x002652F8: beq         $v0, $zero, L_00265348
    if (ctx->r2 == 0) {
        // 0x002652FC: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_00265348;
    }
    // 0x002652FC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00265300: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x00265304: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x00265308: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x0026530C: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x00265310: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x00265314: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    // 0x00265318: lw          $t0, 0x8($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X8);
    // 0x0026531C: lw          $t1, 0xC($s0)
    ctx->r9 = MEM_W(ctx->r16, 0XC);
    // 0x00265320: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x00265324: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x00265328: lw          $a3, 0x4($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X4);
    // 0x0026532C: jal         0x00237EE4
    // 0x00265330: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    func_00237EE4(rdram, ctx);
        goto after_1;
    // 0x00265330: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    after_1:
    // 0x00265334: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x00265338: addiu       $a0, $a0, 0x7078
    ctx->r4 = ADD32(ctx->r4, 0X7078);
    // 0x0026533C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x00265340: jal         0x00220260
    // 0x00265344: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_00220260(rdram, ctx);
        goto after_2;
    // 0x00265344: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_2:
L_00265348:
    // 0x00265348: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
    // 0x0026534C: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x00265350: beq         $v0, $zero, L_002653A8
    if (ctx->r2 == 0) {
        // 0x00265354: nop
    
            goto L_002653A8;
    }
    // 0x00265354: nop

    // 0x00265358: lb          $v0, 0xC7($s1)
    ctx->r2 = MEM_B(ctx->r17, 0XC7);
    // 0x0026535C: beq         $v0, $zero, L_002653A8
    if (ctx->r2 == 0) {
        // 0x00265360: nop
    
            goto L_002653A8;
    }
    // 0x00265360: nop

    // 0x00265364: lwc1        $f1, 0x4($s2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r18, 0X4);
    // 0x00265368: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x0026536C: c.eq.s      $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f1.fl == ctx->f2.fl;
    // 0x00265370: nop

    // 0x00265374: bc1t        L_00265390
    if (c1cs) {
        // 0x00265378: nop
    
            goto L_00265390;
    }
    // 0x00265378: nop

    // 0x0026537C: lwc1        $f0, 0x64($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X64);
    // 0x00265380: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x00265384: nop

    // 0x00265388: bc1f        L_002653A8
    if (!c1cs) {
        // 0x0026538C: nop
    
            goto L_002653A8;
    }
    // 0x0026538C: nop

L_00265390:
    // 0x00265390: lwc1        $f0, 0x64($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X64);
    // 0x00265394: c.eq.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl == ctx->f2.fl;
    // 0x00265398: nop

    // 0x0026539C: bc1tl       L_002653A4
    if (c1cs) {
        // 0x002653A0: swc1        $f2, 0x40($s1)
        MEM_W(0X40, ctx->r17) = ctx->f2.u32l;
            goto L_002653A4;
    }
    goto skip_2;
    // 0x002653A0: swc1        $f2, 0x40($s1)
    MEM_W(0X40, ctx->r17) = ctx->f2.u32l;
    skip_2:
L_002653A4:
    // 0x002653A4: swc1        $f1, 0x64($s1)
    MEM_W(0X64, ctx->r17) = ctx->f_odd[(1 - 1) * 2];
L_002653A8:
    // 0x002653A8: lwc1        $f1, 0x64($s1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r17, 0X64);
    // 0x002653AC: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x002653B0: c.eq.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl == ctx->f0.fl;
    // 0x002653B4: nop

    // 0x002653B8: bc1t        L_002653E0
    if (c1cs) {
        // 0x002653BC: nop
    
            goto L_002653E0;
    }
    // 0x002653BC: nop

    // 0x002653C0: lwc1        $f0, 0x40($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X40);
    // 0x002653C4: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x002653C8: nop

    // 0x002653CC: bc1f        L_002653E0
    if (!c1cs) {
        // 0x002653D0: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_002653E0;
    }
    // 0x002653D0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x002653D4: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x002653D8: jal         0x00243414
    // 0x002653DC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_00243414(rdram, ctx);
        goto after_3;
    // 0x002653DC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_3:
L_002653E0:
    // 0x002653E0: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x002653E4: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x002653E8: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x002653EC: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x002653F0: jr          $ra
    // 0x002653F4: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x002653F4: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_004452C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004452C4: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x004452C8: sw          $s1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r17;
    // 0x004452CC: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x004452D0: sw          $s0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r16;
    // 0x004452D4: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x004452D8: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x004452DC: addiu       $a0, $a0, 0x7078
    ctx->r4 = ADD32(ctx->r4, 0X7078);
    // 0x004452E0: addiu       $a1, $sp, 0x58
    ctx->r5 = ADD32(ctx->r29, 0X58);
    // 0x004452E4: sw          $ra, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r31;
    // 0x004452E8: sw          $a2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r6;
    // 0x004452EC: jal         0x00220A1C
    // 0x004452F0: sw          $a3, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r7;
    func_00220A1C(rdram, ctx);
        goto after_0;
    // 0x004452F0: sw          $a3, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r7;
    after_0:
    // 0x004452F4: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x004452F8: addiu       $a0, $a0, 0x7590
    ctx->r4 = ADD32(ctx->r4, 0X7590);
    // 0x004452FC: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00445300: lwc1        $f0, 0x8B4($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X8B4);
    // 0x00445304: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x00445308: sw          $zero, 0x30($sp)
    MEM_W(0X30, ctx->r29) = 0;
    // 0x0044530C: sw          $zero, 0x38($sp)
    MEM_W(0X38, ctx->r29) = 0;
    // 0x00445310: swc1        $f0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f0.u32l;
    // 0x00445314: mtc1        $s0, $f0
    ctx->f0.u32l = ctx->r16;
    // 0x00445318: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x0044531C: lw          $v1, 0x58($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X58);
    // 0x00445320: lw          $t0, 0x5C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X5C);
    // 0x00445324: lw          $t1, 0x60($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X60);
    // 0x00445328: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    // 0x0044532C: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    // 0x00445330: sw          $t1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r9;
    // 0x00445334: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x00445338: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x0044533C: lw          $v1, 0x34($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X34);
    // 0x00445340: lw          $t0, 0x38($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X38);
    // 0x00445344: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    // 0x00445348: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x0044534C: lw          $a3, 0x30($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X30);
    // 0x00445350: jal         0x00227240
    // 0x00445354: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    func_00227240(rdram, ctx);
        goto after_1;
    // 0x00445354: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    after_1:
    // 0x00445358: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x0044535C: beq         $a0, $zero, L_00445380
    if (ctx->r4 == 0) {
        // 0x00445360: nop
    
            goto L_00445380;
    }
    // 0x00445360: nop

    // 0x00445364: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x00445368: lw          $v0, 0x60($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X60);
    // 0x0044536C: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x00445370: lw          $a2, 0x58($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X58);
    // 0x00445374: lw          $a3, 0x5C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X5C);
    // 0x00445378: jal         0x00246690
    // 0x0044537C: addiu       $a1, $zero, 0x11D
    ctx->r5 = ADD32(0, 0X11D);
    func_00246690(rdram, ctx);
        goto after_2;
    // 0x0044537C: addiu       $a1, $zero, 0x11D
    ctx->r5 = ADD32(0, 0X11D);
    after_2:
L_00445380:
    // 0x00445380: lw          $ra, 0x48($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X48);
    // 0x00445384: lw          $s1, 0x44($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X44);
    // 0x00445388: lw          $s0, 0x40($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X40);
    // 0x0044538C: jr          $ra
    // 0x00445390: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x00445390: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_00253F90(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00253F90: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x00253F94: addu        $a2, $a1, $zero
    ctx->r6 = ADD32(ctx->r5, 0);
    // 0x00253F98: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x00253F9C: lw          $v0, 0x0($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X0);
    // 0x00253FA0: lw          $v1, 0x4($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X4);
    // 0x00253FA4: lw          $a3, 0x8($a2)
    ctx->r7 = MEM_W(ctx->r6, 0X8);
    // 0x00253FA8: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x00253FAC: sw          $v1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r3;
    // 0x00253FB0: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    // 0x00253FB4: lw          $a0, 0x51C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X51C);
    // 0x00253FB8: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x00253FBC: jal         0x0020F85C
    // 0x00253FC0: addiu       $a0, $a0, 0x14C
    ctx->r4 = ADD32(ctx->r4, 0X14C);
    func_0020F85C(rdram, ctx);
        goto after_0;
    // 0x00253FC0: addiu       $a0, $a0, 0x14C
    ctx->r4 = ADD32(ctx->r4, 0X14C);
    after_0:
    // 0x00253FC4: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x00253FC8: jr          $ra
    // 0x00253FCC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x00253FCC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_00440284(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_004072B8:
    // 0x00440284: lui         $a2, 0x8013
    ctx->r6 = S32(0X8013 << 16);
    // 0x00440288: addiu       $a2, $a2, -0x624
    ctx->r6 = ADD32(ctx->r6, -0X624);
    // 0x0044028C: lw          $v1, 0x0($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X0);
    // 0x00440290: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x00440294: beq         $v1, $v0, L_004402AC
    if (ctx->r3 == ctx->r2) {
        // 0x00440298: addiu       $a1, $zero, 0x6
        ctx->r5 = ADD32(0, 0X6);
            goto L_004402AC;
    }
    // 0x00440298: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x0044029C: beq         $v1, $a1, L_004402B4
    if (ctx->r3 == ctx->r5) {
        // 0x004402A0: addiu       $v0, $zero, 0xA
        ctx->r2 = ADD32(0, 0XA);
            goto L_004402B4;
    }
    // 0x004402A0: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x004402A4: bnel        $v1, $v0, L_004402B8
    if (ctx->r3 != ctx->r2) {
        // 0x004402A8: sw          $a1, -0x4($a2)
        MEM_W(-0X4, ctx->r6) = ctx->r5;
            goto L_004402B8;
    }
    goto skip_0;
    // 0x004402A8: sw          $a1, -0x4($a2)
    MEM_W(-0X4, ctx->r6) = ctx->r5;
    skip_0:
L_004402AC:
    // 0x004402AC: j           L_004072B8
    // 0x004402B0: sw          $v1, -0x4($a2)
    MEM_W(-0X4, ctx->r6) = ctx->r3;
    entry_004072B8(rdram, ctx);
    return;
    // 0x004402B0: sw          $v1, -0x4($a2)
    MEM_W(-0X4, ctx->r6) = ctx->r3;
L_004402B4:
    // 0x004402B4: sw          $a1, -0x4($a2)
    MEM_W(-0X4, ctx->r6) = ctx->r5;
L_004402B8:
    // 0x004402B8: lw          $v0, 0xD4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XD4);
    // 0x004402BC: ori         $v0, $v0, 0x2000
    ctx->r2 = ctx->r2 | 0X2000;
    // 0x004402C0: jr          $ra
    // 0x004402C4: sw          $v0, 0xD4($a0)
    MEM_W(0XD4, ctx->r4) = ctx->r2;
    return;
    // 0x004402C4: sw          $v0, 0xD4($a0)
    MEM_W(0XD4, ctx->r4) = ctx->r2;
;}
RECOMP_FUNC void func_002532E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002532E4: jr          $ra
    // 0x002532E8: nop

    return;
    // 0x002532E8: nop

;}
RECOMP_FUNC void func_00274434(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00274434: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x00274438: jr          $ra
    // 0x0027443C: nop

    return;
    // 0x0027443C: nop

;}
RECOMP_FUNC void func_0023DB5C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0023DB5C: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x0023DB60: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x0023DB64: lw          $v1, 0x4($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X4);
    // 0x0023DB68: sw          $v0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r2;
    // 0x0023DB6C: sw          $v1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r3;
    // 0x0023DB70: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x0023DB74: lw          $v1, 0x4($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X4);
    // 0x0023DB78: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
    // 0x0023DB7C: sw          $v1, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r3;
    // 0x0023DB80: lw          $v0, 0x0($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X0);
    // 0x0023DB84: lw          $v1, 0x4($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X4);
    // 0x0023DB88: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
    // 0x0023DB8C: sw          $v1, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r3;
    // 0x0023DB90: jr          $ra
    // 0x0023DB94: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x0023DB94: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_0042EB04(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0042EB04: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0042EB08: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0042EB0C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x0042EB10: jal         0x00275F7C
    // 0x0042EB14: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    func_00275F7C(rdram, ctx);
        goto after_0;
    // 0x0042EB14: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    after_0:
    // 0x0042EB18: lw          $a1, 0x1288($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X1288);
    // 0x0042EB1C: jal         0x00275D34
    // 0x0042EB20: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    func_00275D34(rdram, ctx);
        goto after_1;
    // 0x0042EB20: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    after_1:
    // 0x0042EB24: jal         0x00275F7C
    // 0x0042EB28: sw          $zero, 0x1288($s0)
    MEM_W(0X1288, ctx->r16) = 0;
    func_00275F7C(rdram, ctx);
        goto after_2;
    // 0x0042EB28: sw          $zero, 0x1288($s0)
    MEM_W(0X1288, ctx->r16) = 0;
    after_2:
    // 0x0042EB2C: lw          $a1, 0x128C($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X128C);
    // 0x0042EB30: jal         0x00275D34
    // 0x0042EB34: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    func_00275D34(rdram, ctx);
        goto after_3;
    // 0x0042EB34: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    after_3:
    // 0x0042EB38: sw          $zero, 0x128C($s0)
    MEM_W(0X128C, ctx->r16) = 0;
    // 0x0042EB3C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x0042EB40: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0042EB44: jr          $ra
    // 0x0042EB48: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0042EB48: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_004470B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004470B0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x004470B4: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x004470B8: lb          $v0, 0xC7($a1)
    ctx->r2 = MEM_B(ctx->r5, 0XC7);
    // 0x004470BC: beq         $v0, $zero, L_004470CC
    if (ctx->r2 == 0) {
        // 0x004470C0: nop
    
            goto L_004470CC;
    }
    // 0x004470C0: nop

    // 0x004470C4: jal         0x00243414
    // 0x004470C8: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_00243414(rdram, ctx);
        goto after_0;
    // 0x004470C8: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_0:
L_004470CC:
    // 0x004470CC: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x004470D0: jr          $ra
    // 0x004470D4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x004470D4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_004457DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004457DC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x004457E0: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x004457E4: lw          $a0, -0x490($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X490);
    // 0x004457E8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x004457EC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x004457F0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x004457F4: jal         0x00243414
    // 0x004457F8: addiu       $a1, $a0, 0x140
    ctx->r5 = ADD32(ctx->r4, 0X140);
    func_00243414(rdram, ctx);
        goto after_0;
    // 0x004457F8: addiu       $a1, $a0, 0x140
    ctx->r5 = ADD32(ctx->r4, 0X140);
    after_0:
    // 0x004457FC: lui         $s0, 0x8012
    ctx->r16 = S32(0X8012 << 16);
    // 0x00445800: addiu       $s0, $s0, -0x6790
    ctx->r16 = ADD32(ctx->r16, -0X6790);
    // 0x00445804: jal         0x002532A8
    // 0x00445808: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_002532A8(rdram, ctx);
        goto after_1;
    // 0x00445808: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x0044580C: beq         $v0, $zero, L_0044583C
    if (ctx->r2 == 0) {
        // 0x00445810: addu        $a0, $v0, $zero
        ctx->r4 = ADD32(ctx->r2, 0);
            goto L_0044583C;
    }
    // 0x00445810: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x00445814: addiu       $a1, $zero, 0x1B57
    ctx->r5 = ADD32(0, 0X1B57);
    // 0x00445818: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0044581C: addiu       $v1, $s0, 0x1268
    ctx->r3 = ADD32(ctx->r16, 0X1268);
    // 0x00445820: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x00445824: sw          $v0, 0x9EC($a0)
    MEM_W(0X9EC, ctx->r4) = ctx->r2;
    // 0x00445828: lw          $v0, 0x4($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X4);
    // 0x0044582C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x00445830: ori         $v0, $v0, 0x4
    ctx->r2 = ctx->r2 | 0X4;
    // 0x00445834: jal         0x00248BA8
    // 0x00445838: sw          $v0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r2;
    func_00248BA8(rdram, ctx);
        goto after_2;
    // 0x00445838: sw          $v0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r2;
    after_2:
L_0044583C:
    // 0x0044583C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x00445840: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00445844: jr          $ra
    // 0x00445848: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00445848: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00426E6C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00426E6C: addiu       $v0, $a0, 0xFF
    ctx->r2 = ADD32(ctx->r4, 0XFF);
    // 0x00426E70: jr          $ra
    // 0x00426E74: srl         $v0, $v0, 8
    ctx->r2 = S32(U32(ctx->r2) >> 8);
    return;
    // 0x00426E74: srl         $v0, $v0, 8
    ctx->r2 = S32(U32(ctx->r2) >> 8);
;}
RECOMP_FUNC void func_0026D518(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0026D518: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x0026D51C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0026D520: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x0026D524: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x0026D528: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x0026D52C: lh          $v1, 0x0($a0)
    ctx->r3 = MEM_H(ctx->r4, 0X0);
    // 0x0026D530: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x0026D534: beq         $v1, $v0, L_0026D554
    if (ctx->r3 == ctx->r2) {
        // 0x0026D538: addu        $s1, $a0, $zero
        ctx->r17 = ADD32(ctx->r4, 0);
            goto L_0026D554;
    }
    // 0x0026D538: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x0026D53C: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
L_0026D540:
    // 0x0026D540: lh          $v1, 0x2($a0)
    ctx->r3 = MEM_H(ctx->r4, 0X2);
    // 0x0026D544: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x0026D548: lh          $v0, 0x0($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X0);
    // 0x0026D54C: bne         $v0, $a1, L_0026D540
    if (ctx->r2 != ctx->r5) {
        // 0x0026D550: addu        $s0, $s0, $v1
        ctx->r16 = ADD32(ctx->r16, ctx->r3);
            goto L_0026D540;
    }
    // 0x0026D550: addu        $s0, $s0, $v1
    ctx->r16 = ADD32(ctx->r16, ctx->r3);
L_0026D554:
    // 0x0026D554: jal         0x002113A4
    // 0x0026D558: nop

    func_002113A4(rdram, ctx);
        goto after_0;
    // 0x0026D558: nop

    after_0:
    // 0x0026D55C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0026D560: div         $zero, $v0, $s0
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r16))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r16)));
    // 0x0026D564: bne         $s0, $zero, L_0026D570
    if (ctx->r16 != 0) {
        // 0x0026D568: nop
    
            goto L_0026D570;
    }
    // 0x0026D568: nop

    // 0x0026D56C: break       7
    do_break(2545004);
L_0026D570:
    // 0x0026D570: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x0026D574: bne         $s0, $at, L_0026D588
    if (ctx->r16 != ctx->r1) {
        // 0x0026D578: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_0026D588;
    }
    // 0x0026D578: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x0026D57C: bne         $v0, $at, L_0026D588
    if (ctx->r2 != ctx->r1) {
        // 0x0026D580: nop
    
            goto L_0026D588;
    }
    // 0x0026D580: nop

    // 0x0026D584: break       6
    do_break(2545028);
L_0026D588:
    // 0x0026D588: mfhi        $a1
    ctx->r5 = hi;
    // 0x0026D58C: lh          $v1, 0x0($a0)
    ctx->r3 = MEM_H(ctx->r4, 0X0);
    // 0x0026D590: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x0026D594: beq         $v1, $v0, L_0026D5C4
    if (ctx->r3 == ctx->r2) {
        // 0x0026D598: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_0026D5C4;
    }
    // 0x0026D598: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x0026D59C: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
L_0026D5A0:
    // 0x0026D5A0: lh          $v0, 0x2($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X2);
    // 0x0026D5A4: addu        $s0, $s0, $v0
    ctx->r16 = ADD32(ctx->r16, ctx->r2);
    // 0x0026D5A8: slt         $v0, $s0, $a1
    ctx->r2 = SIGNED(ctx->r16) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x0026D5AC: beq         $v0, $zero, L_0026D5C4
    if (ctx->r2 == 0) {
        // 0x0026D5B0: nop
    
            goto L_0026D5C4;
    }
    // 0x0026D5B0: nop

    // 0x0026D5B4: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x0026D5B8: lh          $v0, 0x0($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X0);
    // 0x0026D5BC: bne         $v0, $v1, L_0026D5A0
    if (ctx->r2 != ctx->r3) {
        // 0x0026D5C0: nop
    
            goto L_0026D5A0;
    }
    // 0x0026D5C0: nop

L_0026D5C4:
    // 0x0026D5C4: lh          $v0, 0x0($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X0);
    // 0x0026D5C8: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x0026D5CC: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x0026D5D0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0026D5D4: jr          $ra
    // 0x0026D5D8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x0026D5D8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_00246594(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00246594: lw          $v0, 0x4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X4);
    // 0x00246598: lhu         $a1, 0x0($v0)
    ctx->r5 = MEM_HU(ctx->r2, 0X0);
    // 0x0024659C: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
    // 0x002465A0: sw          $v0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r2;
    // 0x002465A4: lh          $v1, 0x0($v0)
    ctx->r3 = MEM_H(ctx->r2, 0X0);
    // 0x002465A8: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x002465AC: bnel        $v1, $v0, L_002465C0
    if (ctx->r3 != ctx->r2) {
        // 0x002465B0: sll         $v0, $a1, 16
        ctx->r2 = S32(ctx->r5 << 16);
            goto L_002465C0;
    }
    goto skip_0;
    // 0x002465B0: sll         $v0, $a1, 16
    ctx->r2 = S32(ctx->r5 << 16);
    skip_0:
    // 0x002465B4: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x002465B8: sw          $v0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r2;
    // 0x002465BC: sll         $v0, $a1, 16
    ctx->r2 = S32(ctx->r5 << 16);
L_002465C0:
    // 0x002465C0: jr          $ra
    // 0x002465C4: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    return;
    // 0x002465C4: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
;}
