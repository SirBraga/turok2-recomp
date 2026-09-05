#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_0025DDBC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0025DDBC: addiu       $sp, $sp, -0xB0
    ctx->r29 = ADD32(ctx->r29, -0XB0);
    // 0x0025DDC0: sw          $s1, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r17;
    // 0x0025DDC4: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x0025DDC8: sw          $s0, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r16;
    // 0x0025DDCC: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x0025DDD0: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    // 0x0025DDD4: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x0025DDD8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0025DDDC: sw          $ra, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->r31;
    // 0x0025DDE0: jal         0x00246108
    // 0x0025DDE4: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    func_00246108(rdram, ctx);
        goto after_0;
    // 0x0025DDE4: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    after_0:
    // 0x0025DDE8: lbu         $v0, 0x36($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X36);
    // 0x0025DDEC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0025DDF0: lwc1        $f0, 0x76B4($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X76B4);
    // 0x0025DDF4: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x0025DDF8: sltiu       $v0, $v0, 0x2
    ctx->r2 = ctx->r2 < 0X2 ? 1 : 0;
    // 0x0025DDFC: beql        $v0, $zero, L_0025DE10
    if (ctx->r2 == 0) {
        // 0x0025DE00: add.s       $f0, $f0, $f0
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f0.fl;
            goto L_0025DE10;
    }
    goto skip_0;
    // 0x0025DE00: add.s       $f0, $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f0.fl;
    skip_0:
    // 0x0025DE04: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0025DE08: lwc1        $f0, 0x76B8($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X76B8);
    // 0x0025DE0C: add.s       $f0, $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f0.fl;
L_0025DE10:
    // 0x0025DE10: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0025DE14: lw          $a3, 0x20($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X20);
    // 0x0025DE18: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x0025DE1C: jal         0x00245BAC
    // 0x0025DE20: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_00245BAC(rdram, ctx);
        goto after_1;
    // 0x0025DE20: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_1:
    // 0x0025DE24: lhu         $v0, 0xC4($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0XC4);
    // 0x0025DE28: addiu       $v0, $v0, -0x1130
    ctx->r2 = ADD32(ctx->r2, -0X1130);
    // 0x0025DE2C: sltiu       $v0, $v0, 0x9B
    ctx->r2 = ctx->r2 < 0X9B ? 1 : 0;
    // 0x0025DE30: beq         $v0, $zero, L_0025DE44
    if (ctx->r2 == 0) {
        // 0x0025DE34: lui         $v1, 0x400
        ctx->r3 = S32(0X400 << 16);
            goto L_0025DE44;
    }
    // 0x0025DE34: lui         $v1, 0x400
    ctx->r3 = S32(0X400 << 16);
    // 0x0025DE38: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x0025DE3C: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x0025DE40: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
L_0025DE44:
    // 0x0025DE44: lwc1        $f0, 0x64($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X64);
    // 0x0025DE48: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0025DE4C: lwc1        $f1, 0x6D28($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X6D28);
    // 0x0025DE50: sub.s       $f1, $f0, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x0025DE54: lb          $v0, 0xC7($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XC7);
    // 0x0025DE58: beq         $v0, $zero, L_0025DECC
    if (ctx->r2 == 0) {
        // 0x0025DE5C: swc1        $f1, 0x64($s0)
        MEM_W(0X64, ctx->r16) = ctx->f_odd[(1 - 1) * 2];
            goto L_0025DECC;
    }
    // 0x0025DE5C: swc1        $f1, 0x64($s0)
    MEM_W(0X64, ctx->r16) = ctx->f_odd[(1 - 1) * 2];
    // 0x0025DE60: lw          $v1, 0x0($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X0);
    // 0x0025DE64: lui         $v0, 0x400
    ctx->r2 = S32(0X400 << 16);
    // 0x0025DE68: and         $v0, $v1, $v0
    ctx->r2 = ctx->r3 & ctx->r2;
    // 0x0025DE6C: bne         $v0, $zero, L_0025DE80
    if (ctx->r2 != 0) {
        // 0x0025DE70: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_0025DE80;
    }
    // 0x0025DE70: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0025DE74: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x0025DE78: j           L_0025DE98
    // 0x0025DE7C: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
        goto L_0025DE98;
    // 0x0025DE7C: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
L_0025DE80:
    // 0x0025DE80: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x0025DE84: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x0025DE88: nop

    // 0x0025DE8C: bc1f        L_0025DEB4
    if (!c1cs) {
        // 0x0025DE90: addu        $a1, $s0, $zero
        ctx->r5 = ADD32(ctx->r16, 0);
            goto L_0025DEB4;
    }
    // 0x0025DE90: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x0025DE94: addiu       $a2, $zero, 0x14
    ctx->r6 = ADD32(0, 0X14);
L_0025DE98:
    // 0x0025DE98: jal         0x00243414
    // 0x0025DE9C: nop

    func_00243414(rdram, ctx);
        goto after_2;
    // 0x0025DE9C: nop

    after_2:
    // 0x0025DEA0: lw          $v0, 0xD4($s1)
    ctx->r2 = MEM_W(ctx->r17, 0XD4);
    // 0x0025DEA4: lui         $v1, 0x2
    ctx->r3 = S32(0X2 << 16);
    // 0x0025DEA8: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x0025DEAC: j           L_0025DECC
    // 0x0025DEB0: sw          $v0, 0xD4($s1)
    MEM_W(0XD4, ctx->r17) = ctx->r2;
        goto L_0025DECC;
    // 0x0025DEB0: sw          $v0, 0xD4($s1)
    MEM_W(0XD4, ctx->r17) = ctx->r2;
L_0025DEB4:
    // 0x0025DEB4: lui         $v0, 0xFBFF
    ctx->r2 = S32(0XFBFF << 16);
    // 0x0025DEB8: ori         $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 | 0XFFFF;
    // 0x0025DEBC: and         $v0, $v1, $v0
    ctx->r2 = ctx->r3 & ctx->r2;
    // 0x0025DEC0: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x0025DEC4: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x0025DEC8: sb          $v0, 0x35($s0)
    MEM_B(0X35, ctx->r16) = ctx->r2;
L_0025DECC:
    // 0x0025DECC: lwc1        $f1, 0x64($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X64);
    // 0x0025DED0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0025DED4: lwc1        $f0, 0x76BC($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X76BC);
    // 0x0025DED8: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x0025DEDC: nop

    // 0x0025DEE0: bc1f        L_0025DEF0
    if (!c1cs) {
        // 0x0025DEE4: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_0025DEF0;
    }
    // 0x0025DEE4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0025DEE8: jal         0x0025D308
    // 0x0025DEEC: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_0025D308(rdram, ctx);
        goto after_3;
    // 0x0025DEEC: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_3:
L_0025DEF0:
    // 0x0025DEF0: lw          $ra, 0xA8($sp)
    ctx->r31 = MEM_W(ctx->r29, 0XA8);
    // 0x0025DEF4: lw          $s1, 0xA4($sp)
    ctx->r17 = MEM_W(ctx->r29, 0XA4);
    // 0x0025DEF8: lw          $s0, 0xA0($sp)
    ctx->r16 = MEM_W(ctx->r29, 0XA0);
    // 0x0025DEFC: jr          $ra
    // 0x0025DF00: addiu       $sp, $sp, 0xB0
    ctx->r29 = ADD32(ctx->r29, 0XB0);
    return;
    // 0x0025DF00: addiu       $sp, $sp, 0xB0
    ctx->r29 = ADD32(ctx->r29, 0XB0);
;}
RECOMP_FUNC void func_0023801C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0023801C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x00238020: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x00238024: addiu       $a0, $a0, -0x535C
    ctx->r4 = ADD32(ctx->r4, -0X535C);
    // 0x00238028: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x0023802C: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    // 0x00238030: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x00238034: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00238038: lwc1        $f0, 0x65A4($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X65A4);
    // 0x0023803C: bne         $v0, $zero, L_00238108
    if (ctx->r2 != 0) {
        // 0x00238040: addiu       $a2, $zero, -0x1
        ctx->r6 = ADD32(0, -0X1);
            goto L_00238108;
    }
    // 0x00238040: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x00238044: beq         $a1, $zero, L_002380CC
    if (ctx->r5 == 0) {
        // 0x00238048: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_002380CC;
    }
    // 0x00238048: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0023804C: lbu         $v1, 0x0($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X0);
    // 0x00238050: beq         $v1, $v0, L_00238080
    if (ctx->r3 == ctx->r2) {
        // 0x00238054: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_00238080;
    }
    // 0x00238054: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x00238058: beq         $v0, $zero, L_00238070
    if (ctx->r2 == 0) {
        // 0x0023805C: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_00238070;
    }
    // 0x0023805C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x00238060: beq         $v1, $zero, L_002380C8
    if (ctx->r3 == 0) {
        // 0x00238064: nop
    
            goto L_002380C8;
    }
    // 0x00238064: nop

    // 0x00238068: j           L_002380CC
    // 0x0023806C: nop

        goto L_002380CC;
    // 0x0023806C: nop

L_00238070:
    // 0x00238070: beql        $v1, $v0, L_002380CC
    if (ctx->r3 == ctx->r2) {
        // 0x00238074: addu        $a2, $a1, $zero
        ctx->r6 = ADD32(ctx->r5, 0);
            goto L_002380CC;
    }
    goto skip_0;
    // 0x00238074: addu        $a2, $a1, $zero
    ctx->r6 = ADD32(ctx->r5, 0);
    skip_0:
    // 0x00238078: j           L_002380CC
    // 0x0023807C: nop

        goto L_002380CC;
    // 0x0023807C: nop

L_00238080:
    // 0x00238080: lw          $v0, 0x14($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X14);
    // 0x00238084: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x00238088: bne         $v0, $v1, L_002380CC
    if (ctx->r2 != ctx->r3) {
        // 0x0023808C: addu        $a2, $a1, $zero
        ctx->r6 = ADD32(ctx->r5, 0);
            goto L_002380CC;
    }
    // 0x0023808C: addu        $a2, $a1, $zero
    ctx->r6 = ADD32(ctx->r5, 0);
    // 0x00238090: lw          $v1, -0x1CC($a0)
    ctx->r3 = MEM_W(ctx->r4, -0X1CC);
    // 0x00238094: andi        $v0, $v1, 0x40
    ctx->r2 = ctx->r3 & 0X40;
    // 0x00238098: beq         $v0, $zero, L_002380B0
    if (ctx->r2 == 0) {
        // 0x0023809C: andi        $v0, $v1, 0x20
        ctx->r2 = ctx->r3 & 0X20;
            goto L_002380B0;
    }
    // 0x0023809C: andi        $v0, $v1, 0x20
    ctx->r2 = ctx->r3 & 0X20;
    // 0x002380A0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002380A4: lwc1        $f0, 0x65A8($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X65A8);
    // 0x002380A8: j           L_002380CC
    // 0x002380AC: nop

        goto L_002380CC;
    // 0x002380AC: nop

L_002380B0:
    // 0x002380B0: beq         $v0, $zero, L_002380CC
    if (ctx->r2 == 0) {
        // 0x002380B4: addu        $a2, $a1, $zero
        ctx->r6 = ADD32(ctx->r5, 0);
            goto L_002380CC;
    }
    // 0x002380B4: addu        $a2, $a1, $zero
    ctx->r6 = ADD32(ctx->r5, 0);
    // 0x002380B8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002380BC: lwc1        $f0, 0x65AC($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X65AC);
    // 0x002380C0: j           L_002380CC
    // 0x002380C4: nop

        goto L_002380CC;
    // 0x002380C4: nop

L_002380C8:
    // 0x002380C8: lw          $a2, 0x80($a1)
    ctx->r6 = MEM_W(ctx->r5, 0X80);
L_002380CC:
    // 0x002380CC: lw          $v1, 0x40($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X40);
    // 0x002380D0: slti        $v0, $v1, 0x1CC
    ctx->r2 = SIGNED(ctx->r3) < 0X1CC ? 1 : 0;
    // 0x002380D4: beq         $v0, $zero, L_002380E4
    if (ctx->r2 == 0) {
        // 0x002380D8: slti        $v0, $v1, 0x1C2
        ctx->r2 = SIGNED(ctx->r3) < 0X1C2 ? 1 : 0;
            goto L_002380E4;
    }
    // 0x002380D8: slti        $v0, $v1, 0x1C2
    ctx->r2 = SIGNED(ctx->r3) < 0X1C2 ? 1 : 0;
    // 0x002380DC: beql        $v0, $zero, L_002380E4
    if (ctx->r2 == 0) {
        // 0x002380E0: addiu       $a2, $zero, -0x1
        ctx->r6 = ADD32(0, -0X1);
            goto L_002380E4;
    }
    goto skip_1;
    // 0x002380E0: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    skip_1:
L_002380E4:
    // 0x002380E4: lh          $a0, 0x42($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X42);
    // 0x002380E8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x002380EC: sw          $a2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r6;
    // 0x002380F0: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    // 0x002380F4: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    // 0x002380F8: lw          $a2, 0x38($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X38);
    // 0x002380FC: lw          $a3, 0x3C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X3C);
    // 0x00238100: jal         0x002755B0
    // 0x00238104: nop

    func_002755B0(rdram, ctx);
        goto after_0;
    // 0x00238104: nop

    after_0:
L_00238108:
    // 0x00238108: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x0023810C: jr          $ra
    // 0x00238110: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x00238110: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_00268B50(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00268B50: lw          $a1, 0x10($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X10);
    // 0x00268B54: lw          $v0, 0x8($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X8);
    // 0x00268B58: lw          $v1, 0x4($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X4);
    // 0x00268B5C: lwc1        $f0, 0x4($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X4);
    // 0x00268B60: lwc1        $f1, 0x4($v1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r3, 0X4);
    // 0x00268B64: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x00268B68: nop

    // 0x00268B6C: bc1fl       L_00268B74
    if (!c1cs) {
        // 0x00268B70: mov.s       $f0, $f1
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    ctx->f0.fl = ctx->f1.fl;
            goto L_00268B74;
    }
    goto skip_0;
    // 0x00268B70: mov.s       $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    ctx->f0.fl = ctx->f1.fl;
    skip_0:
L_00268B74:
    // 0x00268B74: lw          $v0, 0xC($a1)
    ctx->r2 = MEM_W(ctx->r5, 0XC);
    // 0x00268B78: lwc1        $f1, 0x4($v0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r2, 0X4);
    // 0x00268B7C: c.le.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl <= ctx->f1.fl;
    // 0x00268B80: nop

    // 0x00268B84: bc1fl       L_00268B8C
    if (!c1cs) {
        // 0x00268B88: mov.s       $f1, $f0
        CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    ctx->f1.fl = ctx->f0.fl;
            goto L_00268B8C;
    }
    goto skip_1;
    // 0x00268B88: mov.s       $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    ctx->f1.fl = ctx->f0.fl;
    skip_1:
L_00268B8C:
    // 0x00268B8C: lwc1        $f0, 0x8($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X8);
    // 0x00268B90: jr          $ra
    // 0x00268B94: sub.s       $f0, $f1, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f1.fl - ctx->f0.fl;
    return;
    // 0x00268B94: sub.s       $f0, $f1, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f1.fl - ctx->f0.fl;
;}
RECOMP_FUNC void func_00233868(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00233868: addiu       $sp, $sp, -0x78
    ctx->r29 = ADD32(ctx->r29, -0X78);
    // 0x0023386C: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x00233870: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x00233874: sw          $ra, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r31;
    // 0x00233878: sw          $s7, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r23;
    // 0x0023387C: sw          $s6, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r22;
    // 0x00233880: sw          $s5, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r21;
    // 0x00233884: sw          $s4, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r20;
    // 0x00233888: sw          $s3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r19;
    // 0x0023388C: sw          $s2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r18;
    // 0x00233890: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x00233894: sdc1        $f23, 0x70($sp)
    CHECK_FR(ctx, 23);
    SD(ctx->f23.u64, 0X70, ctx->r29);
    // 0x00233898: sdc1        $f22, 0x68($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X68, ctx->r29);
    // 0x0023389C: sdc1        $f21, 0x60($sp)
    CHECK_FR(ctx, 21);
    SD(ctx->f21.u64, 0X60, ctx->r29);
    // 0x002338A0: sdc1        $f20, 0x58($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X58, ctx->r29);
    // 0x002338A4: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
    // 0x002338A8: lwc1        $f12, 0x8($a1)
    ctx->f12.u32l = MEM_W(ctx->r5, 0X8);
    // 0x002338AC: lwc1        $f0, 0x8($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X8);
    // 0x002338B0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002338B4: lwc1        $f22, 0x6454($at)
    ctx->f22.u32l = MEM_W(ctx->r1, 0X6454);
    // 0x002338B8: div.s       $f12, $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = DIV_S(ctx->f12.fl, ctx->f0.fl);
    // 0x002338BC: mul.s       $f12, $f12, $f22
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f12.fl = MUL_S(ctx->f12.fl, ctx->f22.fl);
    // 0x002338C0: mtc1        $a3, $f23
    ctx->f_odd[(23 - 1) * 2] = ctx->r7;
    // 0x002338C4: lw          $s3, 0x88($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X88);
    // 0x002338C8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002338CC: lwc1        $f21, 0x6458($at)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r1, 0X6458);
    // 0x002338D0: jal         0x002974C0
    // 0x002338D4: addu        $s6, $a2, $zero
    ctx->r22 = ADD32(ctx->r6, 0);
    func_002974C0(rdram, ctx);
        goto after_0;
    // 0x002338D4: addu        $s6, $a2, $zero
    ctx->r22 = ADD32(ctx->r6, 0);
    after_0:
    // 0x002338D8: mul.s       $f0, $f0, $f21
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f21.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f21.fl);
    // 0x002338DC: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
    // 0x002338E0: lwc1        $f12, 0x24($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X24);
    // 0x002338E4: lwc1        $f1, 0x4($v0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r2, 0X4);
    // 0x002338E8: c.le.s      $f12, $f1
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f12.fl <= ctx->f1.fl;
    // 0x002338EC: nop

    // 0x002338F0: bc1f        L_00233914
    if (!c1cs) {
        // 0x002338F4: sub.s       $f20, $f21, $f0
        CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f21.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = ctx->f21.fl - ctx->f0.fl;
            goto L_00233914;
    }
    // 0x002338F4: sub.s       $f20, $f21, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f21.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = ctx->f21.fl - ctx->f0.fl;
    // 0x002338F8: div.s       $f12, $f12, $f1
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f12.fl = DIV_S(ctx->f12.fl, ctx->f1.fl);
    // 0x002338FC: mul.s       $f12, $f12, $f22
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f12.fl = MUL_S(ctx->f12.fl, ctx->f22.fl);
    // 0x00233900: jal         0x002974C0
    // 0x00233904: nop

    func_002974C0(rdram, ctx);
        goto after_1;
    // 0x00233904: nop

    after_1:
    // 0x00233908: mul.s       $f0, $f0, $f21
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f21.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f21.fl);
    // 0x0023390C: sub.s       $f0, $f21, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f21.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f21.fl - ctx->f0.fl;
    // 0x00233910: mul.s       $f20, $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = MUL_S(ctx->f20.fl, ctx->f0.fl);
L_00233914:
    // 0x00233914: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x00233918: mtc1        $zero, $f22
    ctx->f22.u32l = 0;
    // 0x0023391C: lw          $s4, 0x0($s3)
    ctx->r20 = MEM_W(ctx->r19, 0X0);
    // 0x00233920: lw          $s5, 0x4($s3)
    ctx->r21 = MEM_W(ctx->r19, 0X4);
    // 0x00233924: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00233928: lwc1        $f0, 0x645C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X645C);
    // 0x0023392C: addiu       $s4, $s4, -0x1
    ctx->r20 = ADD32(ctx->r20, -0X1);
    // 0x00233930: beq         $s4, $v0, L_00233B98
    if (ctx->r20 == ctx->r2) {
        // 0x00233934: sub.s       $f20, $f0, $f20
        CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f20.fl = ctx->f0.fl - ctx->f20.fl;
            goto L_00233B98;
    }
    // 0x00233934: sub.s       $f20, $f0, $f20
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f20.fl = ctx->f0.fl - ctx->f20.fl;
    // 0x00233938: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0023393C: lwc1        $f21, 0x6460($at)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r1, 0X6460);
    // 0x00233940: lui         $s7, 0x8000
    ctx->r23 = S32(0X8000 << 16);
    // 0x00233944: addiu       $s2, $s6, 0xF
    ctx->r18 = ADD32(ctx->r22, 0XF);
    // 0x00233948: addiu       $s1, $s5, 0x4
    ctx->r17 = ADD32(ctx->r21, 0X4);
L_0023394C:
    // 0x0023394C: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x00233950: lhu         $v0, 0x4($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X4);
    // 0x00233954: lw          $a2, 0x10($s3)
    ctx->r6 = MEM_W(ctx->r19, 0X10);
    // 0x00233958: lhu         $v1, 0x6($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X6);
    // 0x0023395C: lw          $s0, 0xC($s3)
    ctx->r16 = MEM_W(ctx->r19, 0XC);
    // 0x00233960: sll         $a1, $v0, 2
    ctx->r5 = S32(ctx->r2 << 2);
    // 0x00233964: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    // 0x00233968: lw          $v0, 0x8($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X8);
    // 0x0023396C: sll         $a1, $a1, 2
    ctx->r5 = S32(ctx->r5 << 2);
    // 0x00233970: addu        $a1, $v0, $a1
    ctx->r5 = ADD32(ctx->r2, ctx->r5);
    // 0x00233974: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x00233978: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x0023397C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x00233980: jal         0x0020EF60
    // 0x00233984: addu        $s0, $s0, $v0
    ctx->r16 = ADD32(ctx->r16, ctx->r2);
    func_0020EF60(rdram, ctx);
        goto after_2;
    // 0x00233984: addu        $s0, $s0, $v0
    ctx->r16 = ADD32(ctx->r16, ctx->r2);
    after_2:
    // 0x00233988: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    // 0x0023398C: lw          $a2, 0x14($s3)
    ctx->r6 = MEM_W(ctx->r19, 0X14);
    // 0x00233990: jal         0x0020EF60
    // 0x00233994: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_0020EF60(rdram, ctx);
        goto after_3;
    // 0x00233994: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_3:
    // 0x00233998: lwc1        $f0, 0x20($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X20);
    // 0x0023399C: lwc1        $f1, 0x10($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x002339A0: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x002339A4: mul.s       $f0, $f20, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f20.fl, ctx->f0.fl);
    // 0x002339A8: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x002339AC: trunc.w.s   $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    ctx->f2.u32l = TRUNC_W_S(ctx->f1.fl);
    // 0x002339B0: mfc1        $v0, $f2
    ctx->r2 = (int32_t)ctx->f2.u32l;
    // 0x002339B4: sh          $v0, 0x0($s6)
    MEM_H(0X0, ctx->r22) = ctx->r2;
    // 0x002339B8: lwc1        $f0, 0x24($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X24);
    // 0x002339BC: lwc1        $f1, 0x14($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X14);
    // 0x002339C0: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x002339C4: mul.s       $f0, $f20, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f20.fl, ctx->f0.fl);
    // 0x002339C8: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x002339CC: trunc.w.s   $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    ctx->f2.u32l = TRUNC_W_S(ctx->f1.fl);
    // 0x002339D0: mfc1        $v0, $f2
    ctx->r2 = (int32_t)ctx->f2.u32l;
    // 0x002339D4: sh          $v0, -0xD($s2)
    MEM_H(-0XD, ctx->r18) = ctx->r2;
    // 0x002339D8: lwc1        $f0, 0x28($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X28);
    // 0x002339DC: lwc1        $f1, 0x18($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x002339E0: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x002339E4: mul.s       $f0, $f20, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f20.fl, ctx->f0.fl);
    // 0x002339E8: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x002339EC: trunc.w.s   $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    ctx->f2.u32l = TRUNC_W_S(ctx->f1.fl);
    // 0x002339F0: mfc1        $v0, $f2
    ctx->r2 = (int32_t)ctx->f2.u32l;
    // 0x002339F4: sh          $v0, -0xB($s2)
    MEM_H(-0XB, ctx->r18) = ctx->r2;
    // 0x002339F8: lwc1        $f0, 0x18($s3)
    ctx->f0.u32l = MEM_W(ctx->r19, 0X18);
    // 0x002339FC: mul.s       $f0, $f0, $f23
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 23);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f23.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f23.fl);
    // 0x00233A00: trunc.w.s   $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x00233A04: mfc1        $v0, $f2
    ctx->r2 = (int32_t)ctx->f2.u32l;
    // 0x00233A08: sh          $v0, -0x7($s2)
    MEM_H(-0X7, ctx->r18) = ctx->r2;
    // 0x00233A0C: lwc1        $f0, 0x1C($s3)
    ctx->f0.u32l = MEM_W(ctx->r19, 0X1C);
    // 0x00233A10: mul.s       $f0, $f0, $f22
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f22.fl);
    // 0x00233A14: trunc.w.s   $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x00233A18: mfc1        $v0, $f2
    ctx->r2 = (int32_t)ctx->f2.u32l;
    // 0x00233A1C: sh          $v0, -0x5($s2)
    MEM_H(-0X5, ctx->r18) = ctx->r2;
    // 0x00233A20: lbu         $v1, -0x1($s1)
    ctx->r3 = MEM_BU(ctx->r17, -0X1);
    // 0x00233A24: lbu         $v0, 0x3($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X3);
    // 0x00233A28: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x00233A2C: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x00233A30: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00233A34: mul.s       $f0, $f20, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f20.fl, ctx->f0.fl);
    // 0x00233A38: mtc1        $v1, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r3;
    // 0x00233A3C: cvt.s.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.fl = CVT_S_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x00233A40: add.s       $f0, $f1, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x00233A44: c.le.s      $f21, $f0
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f21.fl <= ctx->f0.fl;
    // 0x00233A48: nop

    // 0x00233A4C: bc1t        L_00233A64
    if (c1cs) {
        // 0x00233A50: addu        $a0, $s5, $zero
        ctx->r4 = ADD32(ctx->r21, 0);
            goto L_00233A64;
    }
    // 0x00233A50: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    // 0x00233A54: trunc.w.s   $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x00233A58: mfc1        $v0, $f2
    ctx->r2 = (int32_t)ctx->f2.u32l;
    // 0x00233A5C: j           L_00233A78
    // 0x00233A60: sb          $v0, -0x3($s2)
    MEM_B(-0X3, ctx->r18) = ctx->r2;
        goto L_00233A78;
    // 0x00233A60: sb          $v0, -0x3($s2)
    MEM_B(-0X3, ctx->r18) = ctx->r2;
L_00233A64:
    // 0x00233A64: sub.s       $f0, $f0, $f21
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f21.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f21.fl;
    // 0x00233A68: trunc.w.s   $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x00233A6C: mfc1        $v0, $f2
    ctx->r2 = (int32_t)ctx->f2.u32l;
    // 0x00233A70: or          $v0, $v0, $s7
    ctx->r2 = ctx->r2 | ctx->r23;
    // 0x00233A74: sb          $v0, -0x3($s2)
    MEM_B(-0X3, ctx->r18) = ctx->r2;
L_00233A78:
    // 0x00233A78: lbu         $v1, -0x2($s1)
    ctx->r3 = MEM_BU(ctx->r17, -0X2);
    // 0x00233A7C: lbu         $v0, 0x2($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X2);
    // 0x00233A80: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x00233A84: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x00233A88: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00233A8C: mul.s       $f0, $f20, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f20.fl, ctx->f0.fl);
    // 0x00233A90: mtc1        $v1, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r3;
    // 0x00233A94: cvt.s.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.fl = CVT_S_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x00233A98: add.s       $f0, $f1, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x00233A9C: c.le.s      $f21, $f0
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f21.fl <= ctx->f0.fl;
    // 0x00233AA0: nop

    // 0x00233AA4: bc1tl       L_00233ABC
    if (c1cs) {
        // 0x00233AA8: sub.s       $f0, $f0, $f21
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f21.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f21.fl;
            goto L_00233ABC;
    }
    goto skip_0;
    // 0x00233AA8: sub.s       $f0, $f0, $f21
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f21.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f21.fl;
    skip_0:
    // 0x00233AAC: trunc.w.s   $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x00233AB0: mfc1        $v0, $f2
    ctx->r2 = (int32_t)ctx->f2.u32l;
    // 0x00233AB4: j           L_00233ACC
    // 0x00233AB8: sb          $v0, -0x2($s2)
    MEM_B(-0X2, ctx->r18) = ctx->r2;
        goto L_00233ACC;
    // 0x00233AB8: sb          $v0, -0x2($s2)
    MEM_B(-0X2, ctx->r18) = ctx->r2;
L_00233ABC:
    // 0x00233ABC: trunc.w.s   $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x00233AC0: mfc1        $v0, $f2
    ctx->r2 = (int32_t)ctx->f2.u32l;
    // 0x00233AC4: or          $v0, $v0, $s7
    ctx->r2 = ctx->r2 | ctx->r23;
    // 0x00233AC8: sb          $v0, -0x2($s2)
    MEM_B(-0X2, ctx->r18) = ctx->r2;
L_00233ACC:
    // 0x00233ACC: lbu         $v1, -0x3($s1)
    ctx->r3 = MEM_BU(ctx->r17, -0X3);
    // 0x00233AD0: lbu         $v0, 0x1($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X1);
    // 0x00233AD4: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x00233AD8: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x00233ADC: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00233AE0: mul.s       $f0, $f20, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f20.fl, ctx->f0.fl);
    // 0x00233AE4: mtc1        $v1, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r3;
    // 0x00233AE8: cvt.s.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.fl = CVT_S_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x00233AEC: add.s       $f0, $f1, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x00233AF0: c.le.s      $f21, $f0
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f21.fl <= ctx->f0.fl;
    // 0x00233AF4: nop

    // 0x00233AF8: bc1tl       L_00233B10
    if (c1cs) {
        // 0x00233AFC: sub.s       $f0, $f0, $f21
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f21.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f21.fl;
            goto L_00233B10;
    }
    goto skip_1;
    // 0x00233AFC: sub.s       $f0, $f0, $f21
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f21.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f21.fl;
    skip_1:
    // 0x00233B00: trunc.w.s   $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x00233B04: mfc1        $v0, $f2
    ctx->r2 = (int32_t)ctx->f2.u32l;
    // 0x00233B08: j           L_00233B20
    // 0x00233B0C: sb          $v0, -0x1($s2)
    MEM_B(-0X1, ctx->r18) = ctx->r2;
        goto L_00233B20;
    // 0x00233B0C: sb          $v0, -0x1($s2)
    MEM_B(-0X1, ctx->r18) = ctx->r2;
L_00233B10:
    // 0x00233B10: trunc.w.s   $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x00233B14: mfc1        $v0, $f2
    ctx->r2 = (int32_t)ctx->f2.u32l;
    // 0x00233B18: or          $v0, $v0, $s7
    ctx->r2 = ctx->r2 | ctx->r23;
    // 0x00233B1C: sb          $v0, -0x1($s2)
    MEM_B(-0X1, ctx->r18) = ctx->r2;
L_00233B20:
    // 0x00233B20: lbu         $v1, 0x0($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X0);
    // 0x00233B24: lbu         $v0, 0x0($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X0);
    // 0x00233B28: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x00233B2C: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x00233B30: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00233B34: mul.s       $f0, $f20, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f20.fl, ctx->f0.fl);
    // 0x00233B38: mtc1        $v1, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r3;
    // 0x00233B3C: cvt.s.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.fl = CVT_S_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x00233B40: add.s       $f0, $f1, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x00233B44: c.le.s      $f21, $f0
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f21.fl <= ctx->f0.fl;
    // 0x00233B48: nop

    // 0x00233B4C: bc1tl       L_00233B64
    if (c1cs) {
        // 0x00233B50: sub.s       $f0, $f0, $f21
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f21.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f21.fl;
            goto L_00233B64;
    }
    goto skip_2;
    // 0x00233B50: sub.s       $f0, $f0, $f21
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f21.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f21.fl;
    skip_2:
    // 0x00233B54: trunc.w.s   $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x00233B58: mfc1        $v0, $f2
    ctx->r2 = (int32_t)ctx->f2.u32l;
    // 0x00233B5C: j           L_00233B74
    // 0x00233B60: addiu       $s1, $s1, 0xC
    ctx->r17 = ADD32(ctx->r17, 0XC);
        goto L_00233B74;
    // 0x00233B60: addiu       $s1, $s1, 0xC
    ctx->r17 = ADD32(ctx->r17, 0XC);
L_00233B64:
    // 0x00233B64: trunc.w.s   $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x00233B68: mfc1        $v0, $f2
    ctx->r2 = (int32_t)ctx->f2.u32l;
    // 0x00233B6C: or          $v0, $v0, $s7
    ctx->r2 = ctx->r2 | ctx->r23;
    // 0x00233B70: addiu       $s1, $s1, 0xC
    ctx->r17 = ADD32(ctx->r17, 0XC);
L_00233B74:
    // 0x00233B74: addiu       $s5, $s5, 0xC
    ctx->r21 = ADD32(ctx->r21, 0XC);
    // 0x00233B78: sb          $v0, 0x0($s2)
    MEM_B(0X0, ctx->r18) = ctx->r2;
    // 0x00233B7C: addiu       $s2, $s2, 0x10
    ctx->r18 = ADD32(ctx->r18, 0X10);
    // 0x00233B80: addiu       $s6, $s6, 0x10
    ctx->r22 = ADD32(ctx->r22, 0X10);
    // 0x00233B84: addiu       $s4, $s4, -0x1
    ctx->r20 = ADD32(ctx->r20, -0X1);
    // 0x00233B88: lwc1        $f0, 0x20($s3)
    ctx->f0.u32l = MEM_W(ctx->r19, 0X20);
    // 0x00233B8C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x00233B90: bne         $s4, $v0, L_0023394C
    if (ctx->r20 != ctx->r2) {
        // 0x00233B94: add.s       $f22, $f22, $f0
        CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f22.fl = ctx->f22.fl + ctx->f0.fl;
            goto L_0023394C;
    }
    // 0x00233B94: add.s       $f22, $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f22.fl = ctx->f22.fl + ctx->f0.fl;
L_00233B98:
    // 0x00233B98: lw          $ra, 0x50($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X50);
    // 0x00233B9C: lw          $s7, 0x4C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X4C);
    // 0x00233BA0: lw          $s6, 0x48($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X48);
    // 0x00233BA4: lw          $s5, 0x44($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X44);
    // 0x00233BA8: lw          $s4, 0x40($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X40);
    // 0x00233BAC: lw          $s3, 0x3C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X3C);
    // 0x00233BB0: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x00233BB4: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x00233BB8: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x00233BBC: ldc1        $f23, 0x70($sp)
    CHECK_FR(ctx, 23);
    ctx->f23.u64 = LD(ctx->r29, 0X70);
    // 0x00233BC0: ldc1        $f22, 0x68($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X68);
    // 0x00233BC4: ldc1        $f21, 0x60($sp)
    CHECK_FR(ctx, 21);
    ctx->f21.u64 = LD(ctx->r29, 0X60);
    // 0x00233BC8: ldc1        $f20, 0x58($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X58);
    // 0x00233BCC: jr          $ra
    // 0x00233BD0: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
    return;
    // 0x00233BD0: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
;}
RECOMP_FUNC void func_004133A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004133A4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x004133A8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x004133AC: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x004133B0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x004133B4: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x004133B8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x004133BC: sdc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X20, ctx->r29);
    // 0x004133C0: lw          $s0, 0x14($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X14);
    // 0x004133C4: lw          $v0, 0x18($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X18);
    // 0x004133C8: jalr        $v0
    // 0x004133CC: addu        $s2, $a1, $zero
    ctx->r18 = ADD32(ctx->r5, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x004133CC: addu        $s2, $a1, $zero
    ctx->r18 = ADD32(ctx->r5, 0);
    after_0:
    // 0x004133D0: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x004133D4: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x004133D8: sltiu       $v0, $a0, 0x9
    ctx->r2 = ctx->r4 < 0X9 ? 1 : 0;
    // 0x004133DC: beq         $v0, $zero, L_004133F8
    if (ctx->r2 == 0) {
        // 0x004133E0: sll         $v0, $a0, 2
        ctx->r2 = S32(ctx->r4 << 2);
            goto L_004133F8;
    }
    // 0x004133E0: sll         $v0, $a0, 2
    ctx->r2 = S32(ctx->r4 << 2);
    // 0x004133E4: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x004133E8: addu        $at, $at, $v0
    gpr jr_addend_004133F0 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x004133EC: lw          $v0, 0xB38($at)
    ctx->r2 = ADD32(ctx->r1, 0XB38);
    // 0x004133F0: jr          $v0
    // 0x004133F4: nop

    switch (jr_addend_004133F0 >> 2) {
        case 0: goto L_00413404; break;
        case 1: goto L_00413438; break;
        case 2: goto L_00413438; break;
        case 3: goto L_00413410; break;
        case 4: goto L_00413424; break;
        case 5: goto L_00413438; break;
        case 6: goto L_00413448; break;
        case 7: goto L_0041345C; break;
        case 8: goto L_00413470; break;
        default: switch_error(__func__, 0x004133F0, 0x800C0B38);
    }
    // 0x004133F4: nop

L_004133F8:
    // 0x004133F8: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x004133FC: j           L_00413494
    // 0x00413400: nop

        goto L_00413494;
    // 0x00413400: nop

L_00413404:
    // 0x00413404: lwc1        $f20, 0x0($v1)
    ctx->f20.u32l = MEM_W(ctx->r3, 0X0);
    // 0x00413408: j           L_00413494
    // 0x0041340C: nop

        goto L_00413494;
    // 0x0041340C: nop

L_00413410:
    // 0x00413410: lb          $v0, 0x0($v1)
    ctx->r2 = MEM_B(ctx->r3, 0X0);
    // 0x00413414: mtc1        $v0, $f20
    ctx->f20.u32l = ctx->r2;
    // 0x00413418: cvt.s.w     $f20, $f20
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    ctx->f20.fl = CVT_S_W(ctx->f20.u32l);
    // 0x0041341C: j           L_00413494
    // 0x00413420: nop

        goto L_00413494;
    // 0x00413420: nop

L_00413424:
    // 0x00413424: lh          $v0, 0x0($v1)
    ctx->r2 = MEM_H(ctx->r3, 0X0);
    // 0x00413428: mtc1        $v0, $f20
    ctx->f20.u32l = ctx->r2;
    // 0x0041342C: cvt.s.w     $f20, $f20
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    ctx->f20.fl = CVT_S_W(ctx->f20.u32l);
    // 0x00413430: j           L_00413494
    // 0x00413434: nop

        goto L_00413494;
    // 0x00413434: nop

L_00413438:
    // 0x00413438: lwc1        $f20, 0x0($v1)
    ctx->f20.u32l = MEM_W(ctx->r3, 0X0);
    // 0x0041343C: cvt.s.w     $f20, $f20
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    ctx->f20.fl = CVT_S_W(ctx->f20.u32l);
    // 0x00413440: j           L_00413494
    // 0x00413444: nop

        goto L_00413494;
    // 0x00413444: nop

L_00413448:
    // 0x00413448: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x0041344C: mtc1        $v0, $f20
    ctx->f20.u32l = ctx->r2;
    // 0x00413450: cvt.s.w     $f20, $f20
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    ctx->f20.fl = CVT_S_W(ctx->f20.u32l);
    // 0x00413454: j           L_00413494
    // 0x00413458: nop

        goto L_00413494;
    // 0x00413458: nop

L_0041345C:
    // 0x0041345C: lhu         $v0, 0x0($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X0);
    // 0x00413460: mtc1        $v0, $f20
    ctx->f20.u32l = ctx->r2;
    // 0x00413464: cvt.s.w     $f20, $f20
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    ctx->f20.fl = CVT_S_W(ctx->f20.u32l);
    // 0x00413468: j           L_00413494
    // 0x0041346C: nop

        goto L_00413494;
    // 0x0041346C: nop

L_00413470:
    // 0x00413470: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x00413474: mtc1        $v0, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r2;
    // 0x00413478: cvt.d.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.d = CVT_D_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x0041347C: bgezl       $v0, L_00413494
    if (SIGNED(ctx->r2) >= 0) {
        // 0x00413480: cvt.s.d     $f20, $f1
        CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.d); 
    ctx->f20.fl = CVT_S_D(ctx->f1.d);
            goto L_00413494;
    }
    goto skip_0;
    // 0x00413480: cvt.s.d     $f20, $f1
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.d); 
    ctx->f20.fl = CVT_S_D(ctx->f1.d);
    skip_0:
    // 0x00413484: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00413488: ldc1        $f0, 0xB60($at)
    CHECK_FR(ctx, 0);
    ctx->f0.u64 = LD(ctx->r1, 0XB60);
    // 0x0041348C: add.d       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.d); NAN_CHECK(ctx->f0.d); 
    ctx->f1.d = ctx->f1.d + ctx->f0.d;
    // 0x00413490: cvt.s.d     $f20, $f1
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.d); 
    ctx->f20.fl = CVT_S_D(ctx->f1.d);
L_00413494:
    // 0x00413494: lw          $a0, 0x20($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X20);
    // 0x00413498: jal         0x00285628
    // 0x0041349C: nop

    func_00285628(rdram, ctx);
        goto after_1;
    // 0x0041349C: nop

    after_1:
    // 0x004134A0: beq         $v0, $zero, L_004134C0
    if (ctx->r2 == 0) {
        // 0x004134A4: nop
    
            goto L_004134C0;
    }
    // 0x004134A4: nop

    // 0x004134A8: lwc1        $f0, 0x10($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X10);
    // 0x004134AC: sub.s       $f20, $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = ctx->f20.fl - ctx->f0.fl;
    // 0x004134B0: lwc1        $f0, 0x8($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X8);
    // 0x004134B4: c.lt.s      $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f20.fl < ctx->f0.fl;
    // 0x004134B8: j           L_004134E4
    // 0x004134BC: nop

        goto L_004134E4;
    // 0x004134BC: nop

L_004134C0:
    // 0x004134C0: lw          $a0, 0x20($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X20);
    // 0x004134C4: jal         0x00285670
    // 0x004134C8: nop

    func_00285670(rdram, ctx);
        goto after_2;
    // 0x004134C8: nop

    after_2:
    // 0x004134CC: beq         $v0, $zero, L_004134F0
    if (ctx->r2 == 0) {
        // 0x004134D0: nop
    
            goto L_004134F0;
    }
    // 0x004134D0: nop

    // 0x004134D4: lwc1        $f0, 0x10($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X10);
    // 0x004134D8: add.s       $f20, $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = ctx->f20.fl + ctx->f0.fl;
    // 0x004134DC: lwc1        $f0, 0xC($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0XC);
    // 0x004134E0: c.lt.s      $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f0.fl < ctx->f20.fl;
L_004134E4:
    // 0x004134E4: nop

    // 0x004134E8: bc1tl       L_004134F0
    if (c1cs) {
        // 0x004134EC: mov.s       $f20, $f0
        CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
            goto L_004134F0;
    }
    goto skip_1;
    // 0x004134EC: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    skip_1:
L_004134F0:
    // 0x004134F0: lw          $s0, 0x14($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X14);
    // 0x004134F4: lw          $v0, 0x18($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X18);
    // 0x004134F8: jalr        $v0
    // 0x004134FC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_3;
    // 0x004134FC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_3:
    // 0x00413500: lw          $v1, 0x4($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X4);
    // 0x00413504: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x00413508: sltiu       $v0, $v1, 0x9
    ctx->r2 = ctx->r3 < 0X9 ? 1 : 0;
    // 0x0041350C: beq         $v0, $zero, L_0041361C
    if (ctx->r2 == 0) {
        // 0x00413510: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_0041361C;
    }
    // 0x00413510: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x00413514: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00413518: addu        $at, $at, $v0
    gpr jr_addend_00413520 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x0041351C: lw          $v0, 0xB68($at)
    ctx->r2 = ADD32(ctx->r1, 0XB68);
    // 0x00413520: jr          $v0
    // 0x00413524: nop

    switch (jr_addend_00413520 >> 2) {
        case 0: goto L_00413528; break;
        case 1: goto L_00413550; break;
        case 2: goto L_00413550; break;
        case 3: goto L_00413530; break;
        case 4: goto L_00413540; break;
        case 5: goto L_00413550; break;
        case 6: goto L_00413560; break;
        case 7: goto L_004135A0; break;
        case 8: goto L_004135E0; break;
        default: switch_error(__func__, 0x00413520, 0x800C0B68);
    }
    // 0x00413524: nop

L_00413528:
    // 0x00413528: j           L_0041361C
    // 0x0041352C: swc1        $f20, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f20.u32l;
        goto L_0041361C;
    // 0x0041352C: swc1        $f20, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f20.u32l;
L_00413530:
    // 0x00413530: trunc.w.s   $f2, $f20
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    ctx->f2.u32l = TRUNC_W_S(ctx->f20.fl);
    // 0x00413534: mfc1        $v0, $f2
    ctx->r2 = (int32_t)ctx->f2.u32l;
    // 0x00413538: j           L_0041361C
    // 0x0041353C: sb          $v0, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r2;
        goto L_0041361C;
    // 0x0041353C: sb          $v0, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r2;
L_00413540:
    // 0x00413540: trunc.w.s   $f2, $f20
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    ctx->f2.u32l = TRUNC_W_S(ctx->f20.fl);
    // 0x00413544: mfc1        $v0, $f2
    ctx->r2 = (int32_t)ctx->f2.u32l;
    // 0x00413548: j           L_0041361C
    // 0x0041354C: sh          $v0, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r2;
        goto L_0041361C;
    // 0x0041354C: sh          $v0, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r2;
L_00413550:
    // 0x00413550: trunc.w.s   $f2, $f20
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    ctx->f2.u32l = TRUNC_W_S(ctx->f20.fl);
    // 0x00413554: swc1        $f2, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f2.u32l;
    // 0x00413558: j           L_0041361C
    // 0x0041355C: nop

        goto L_0041361C;
    // 0x0041355C: nop

L_00413560:
    // 0x00413560: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00413564: lwc1        $f0, 0xB8C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0XB8C);
    // 0x00413568: c.le.s      $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f0.fl <= ctx->f20.fl;
    // 0x0041356C: nop

    // 0x00413570: bc1tl       L_00413588
    if (c1cs) {
        // 0x00413574: sub.s       $f0, $f20, $f0
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f20.fl - ctx->f0.fl;
            goto L_00413588;
    }
    goto skip_2;
    // 0x00413574: sub.s       $f0, $f20, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f20.fl - ctx->f0.fl;
    skip_2:
    // 0x00413578: trunc.w.s   $f2, $f20
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    ctx->f2.u32l = TRUNC_W_S(ctx->f20.fl);
    // 0x0041357C: mfc1        $v1, $f2
    ctx->r3 = (int32_t)ctx->f2.u32l;
    // 0x00413580: j           L_0041361C
    // 0x00413584: sb          $v1, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r3;
        goto L_0041361C;
    // 0x00413584: sb          $v1, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r3;
L_00413588:
    // 0x00413588: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x0041358C: trunc.w.s   $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x00413590: mfc1        $v1, $f2
    ctx->r3 = (int32_t)ctx->f2.u32l;
    // 0x00413594: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x00413598: j           L_0041361C
    // 0x0041359C: sb          $v1, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r3;
        goto L_0041361C;
    // 0x0041359C: sb          $v1, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r3;
L_004135A0:
    // 0x004135A0: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x004135A4: lwc1        $f0, 0xB90($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0XB90);
    // 0x004135A8: c.le.s      $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f0.fl <= ctx->f20.fl;
    // 0x004135AC: nop

    // 0x004135B0: bc1tl       L_004135C8
    if (c1cs) {
        // 0x004135B4: sub.s       $f0, $f20, $f0
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f20.fl - ctx->f0.fl;
            goto L_004135C8;
    }
    goto skip_3;
    // 0x004135B4: sub.s       $f0, $f20, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f20.fl - ctx->f0.fl;
    skip_3:
    // 0x004135B8: trunc.w.s   $f2, $f20
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    ctx->f2.u32l = TRUNC_W_S(ctx->f20.fl);
    // 0x004135BC: mfc1        $v1, $f2
    ctx->r3 = (int32_t)ctx->f2.u32l;
    // 0x004135C0: j           L_0041361C
    // 0x004135C4: sh          $v1, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r3;
        goto L_0041361C;
    // 0x004135C4: sh          $v1, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r3;
L_004135C8:
    // 0x004135C8: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x004135CC: trunc.w.s   $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x004135D0: mfc1        $v1, $f2
    ctx->r3 = (int32_t)ctx->f2.u32l;
    // 0x004135D4: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x004135D8: j           L_0041361C
    // 0x004135DC: sh          $v1, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r3;
        goto L_0041361C;
    // 0x004135DC: sh          $v1, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r3;
L_004135E0:
    // 0x004135E0: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x004135E4: lwc1        $f0, 0xB94($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0XB94);
    // 0x004135E8: c.le.s      $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f0.fl <= ctx->f20.fl;
    // 0x004135EC: nop

    // 0x004135F0: bc1tl       L_00413608
    if (c1cs) {
        // 0x004135F4: sub.s       $f0, $f20, $f0
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f20.fl - ctx->f0.fl;
            goto L_00413608;
    }
    goto skip_4;
    // 0x004135F4: sub.s       $f0, $f20, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f20.fl - ctx->f0.fl;
    skip_4:
    // 0x004135F8: trunc.w.s   $f2, $f20
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    ctx->f2.u32l = TRUNC_W_S(ctx->f20.fl);
    // 0x004135FC: mfc1        $v1, $f2
    ctx->r3 = (int32_t)ctx->f2.u32l;
    // 0x00413600: j           L_0041361C
    // 0x00413604: sw          $v1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r3;
        goto L_0041361C;
    // 0x00413604: sw          $v1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r3;
L_00413608:
    // 0x00413608: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x0041360C: trunc.w.s   $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x00413610: mfc1        $v1, $f2
    ctx->r3 = (int32_t)ctx->f2.u32l;
    // 0x00413614: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x00413618: sw          $v1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r3;
L_0041361C:
    // 0x0041361C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x00413620: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x00413624: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00413628: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0041362C: ldc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X20);
    // 0x00413630: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x00413634: jr          $ra
    // 0x00413638: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x00413638: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_0021F668(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0021F668: addiu       $sp, $sp, -0xC8
    ctx->r29 = ADD32(ctx->r29, -0XC8);
    // 0x0021F66C: sw          $s1, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->r17;
    // 0x0021F670: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x0021F674: sw          $s0, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->r16;
    // 0x0021F678: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x0021F67C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0021F680: sdc1        $f20, 0xC0($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0XC0, ctx->r29);
    // 0x0021F684: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x0021F688: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x0021F68C: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x0021F690: sw          $ra, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->r31;
    // 0x0021F694: jal         0x00215AE0
    // 0x0021F698: addiu       $a3, $sp, 0x20
    ctx->r7 = ADD32(ctx->r29, 0X20);
    func_00215AE0(rdram, ctx);
        goto after_0;
    // 0x0021F698: addiu       $a3, $sp, 0x20
    ctx->r7 = ADD32(ctx->r29, 0X20);
    after_0:
    // 0x0021F69C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0021F6A0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x0021F6A4: lw          $a2, 0x0($a0)
    ctx->r6 = MEM_W(ctx->r4, 0X0);
    // 0x0021F6A8: jal         0x00215AE0
    // 0x0021F6AC: addiu       $a3, $sp, 0x30
    ctx->r7 = ADD32(ctx->r29, 0X30);
    func_00215AE0(rdram, ctx);
        goto after_1;
    // 0x0021F6AC: addiu       $a3, $sp, 0x30
    ctx->r7 = ADD32(ctx->r29, 0X30);
    after_1:
    // 0x0021F6B0: lwc1        $f2, 0x30($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X30);
    // 0x0021F6B4: lwc1        $f0, 0x20($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X20);
    // 0x0021F6B8: lwc1        $f1, 0x34($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X34);
    // 0x0021F6BC: sub.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f2.fl - ctx->f0.fl;
    // 0x0021F6C0: lwc1        $f0, 0x24($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X24);
    // 0x0021F6C4: addiu       $s0, $sp, 0x70
    ctx->r16 = ADD32(ctx->r29, 0X70);
    // 0x0021F6C8: sub.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl - ctx->f0.fl;
    // 0x0021F6CC: swc1        $f20, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f20.u32l;
    // 0x0021F6D0: swc1        $f2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f2.u32l;
    // 0x0021F6D4: swc1        $f1, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    // 0x0021F6D8: lw          $a1, 0x50($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X50);
    // 0x0021F6DC: jal         0x002105A4
    // 0x0021F6E0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_002105A4(rdram, ctx);
        goto after_2;
    // 0x0021F6E0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x0021F6E4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0021F6E8: addiu       $a1, $sp, 0x40
    ctx->r5 = ADD32(ctx->r29, 0X40);
    // 0x0021F6EC: jal         0x0020F85C
    // 0x0021F6F0: addiu       $a2, $sp, 0x50
    ctx->r6 = ADD32(ctx->r29, 0X50);
    func_0020F85C(rdram, ctx);
        goto after_3;
    // 0x0021F6F0: addiu       $a2, $sp, 0x50
    ctx->r6 = ADD32(ctx->r29, 0X50);
    after_3:
    // 0x0021F6F4: lwc1        $f1, 0x50($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X50);
    // 0x0021F6F8: lwc1        $f0, 0x34($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X34);
    // 0x0021F6FC: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x0021F700: lwc1        $f0, 0x4($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X4);
    // 0x0021F704: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x0021F708: lwc1        $f1, 0x58($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X58);
    // 0x0021F70C: swc1        $f0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f0.u32l;
    // 0x0021F710: lwc1        $f0, 0x8($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X8);
    // 0x0021F714: swc1        $f0, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f0.u32l;
    // 0x0021F718: lwc1        $f0, 0x3C($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X3C);
    // 0x0021F71C: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x0021F720: lwc1        $f0, 0xC($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0XC);
    // 0x0021F724: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x0021F728: addiu       $v0, $s1, 0x4
    ctx->r2 = ADD32(ctx->r17, 0X4);
    // 0x0021F72C: swc1        $f0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f0.u32l;
    // 0x0021F730: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x0021F734: addiu       $v0, $s1, 0x10
    ctx->r2 = ADD32(ctx->r17, 0X10);
    // 0x0021F738: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x0021F73C: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x0021F740: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x0021F744: lw          $a1, 0x60($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X60);
    // 0x0021F748: lw          $a2, 0x64($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X64);
    // 0x0021F74C: lw          $a3, 0x68($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X68);
    // 0x0021F750: jal         0x002688C8
    // 0x0021F754: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_002688C8(rdram, ctx);
        goto after_4;
    // 0x0021F754: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_4:
    // 0x0021F758: lw          $ra, 0xB8($sp)
    ctx->r31 = MEM_W(ctx->r29, 0XB8);
    // 0x0021F75C: lw          $s1, 0xB4($sp)
    ctx->r17 = MEM_W(ctx->r29, 0XB4);
    // 0x0021F760: lw          $s0, 0xB0($sp)
    ctx->r16 = MEM_W(ctx->r29, 0XB0);
    // 0x0021F764: ldc1        $f20, 0xC0($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0XC0);
    // 0x0021F768: jr          $ra
    // 0x0021F76C: addiu       $sp, $sp, 0xC8
    ctx->r29 = ADD32(ctx->r29, 0XC8);
    return;
    // 0x0021F76C: addiu       $sp, $sp, 0xC8
    ctx->r29 = ADD32(ctx->r29, 0XC8);
;}
RECOMP_FUNC void func_00252E08(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00252E08: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x00252E0C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x00252E10: lui         $s0, 0x8012
    ctx->r16 = S32(0X8012 << 16);
    // 0x00252E14: addiu       $s0, $s0, -0x5516
    ctx->r16 = ADD32(ctx->r16, -0X5516);
    // 0x00252E18: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x00252E1C: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x00252E20: sdc1        $f24, 0x50($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X50, ctx->r29);
    // 0x00252E24: sdc1        $f23, 0x48($sp)
    CHECK_FR(ctx, 23);
    SD(ctx->f23.u64, 0X48, ctx->r29);
    // 0x00252E28: sdc1        $f22, 0x40($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X40, ctx->r29);
    // 0x00252E2C: sdc1        $f21, 0x38($sp)
    CHECK_FR(ctx, 21);
    SD(ctx->f21.u64, 0X38, ctx->r29);
    // 0x00252E30: sdc1        $f20, 0x30($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X30, ctx->r29);
    // 0x00252E34: lbu         $a0, 0x0($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X0);
    // 0x00252E38: jal         0x00279028
    // 0x00252E3C: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    func_00279028(rdram, ctx);
        goto after_0;
    // 0x00252E3C: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    after_0:
    // 0x00252E40: lwc1        $f1, 0x1DA($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X1DA);
    // 0x00252E44: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x00252E48: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x00252E4C: nop

    // 0x00252E50: bc1t        L_00252FF0
    if (c1cs) {
        // 0x00252E54: nop
    
            goto L_00252FF0;
    }
    // 0x00252E54: nop

    // 0x00252E58: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00252E5C: lwc1        $f0, 0x70AC($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X70AC);
    // 0x00252E60: mul.s       $f23, $f1, $f0
    CHECK_FR(ctx, 23);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f23.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x00252E64: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00252E68: lwc1        $f0, 0x70B0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X70B0);
    // 0x00252E6C: mul.s       $f0, $f23, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 23);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f23.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f23.fl, ctx->f0.fl);
    // 0x00252E70: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00252E74: lwc1        $f1, 0x70B4($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X70B4);
    // 0x00252E78: trunc.w.s   $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(3 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x00252E7C: mfc1        $v0, $f3
    ctx->r2 = (int32_t)ctx->f_odd[(3 - 1) * 2];
    // 0x00252E80: mtc1        $v0, $f2
    ctx->f2.u32l = ctx->r2;
    // 0x00252E84: cvt.s.w     $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    ctx->f2.fl = CVT_S_W(ctx->f2.u32l);
    // 0x00252E88: mul.s       $f1, $f2, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = MUL_S(ctx->f2.fl, ctx->f1.fl);
    // 0x00252E8C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00252E90: lwc1        $f0, 0x70B8($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X70B8);
    // 0x00252E94: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x00252E98: sub.s       $f23, $f23, $f1
    CHECK_FR(ctx, 23);
    CHECK_FR(ctx, 23);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f23.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f23.fl = ctx->f23.fl - ctx->f1.fl;
    // 0x00252E9C: lwc1        $f1, 0x288($s1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r17, 0X288);
    // 0x00252EA0: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00252EA4: lwc1        $f0, 0x2030($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X2030);
    // 0x00252EA8: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00252EAC: div.s       $f22, $f1, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f22.fl = DIV_S(ctx->f1.fl, ctx->f0.fl);
    // 0x00252EB0: lwc1        $f1, 0x28C($s1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r17, 0X28C);
    // 0x00252EB4: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00252EB8: lwc1        $f0, 0x2034($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X2034);
    // 0x00252EBC: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00252EC0: bc1f        L_00252F14
    if (!c1cs) {
        // 0x00252EC4: div.s       $f24, $f1, $f0
        CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f24.fl = DIV_S(ctx->f1.fl, ctx->f0.fl);
            goto L_00252F14;
    }
    // 0x00252EC4: div.s       $f24, $f1, $f0
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f24.fl = DIV_S(ctx->f1.fl, ctx->f0.fl);
    // 0x00252EC8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00252ECC: lwc1        $f0, 0x70BC($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X70BC);
    // 0x00252ED0: c.lt.s      $f23, $f0
    CHECK_FR(ctx, 23);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f23.fl < ctx->f0.fl;
    // 0x00252ED4: nop

    // 0x00252ED8: bc1f        L_00252F14
    if (!c1cs) {
        // 0x00252EDC: nop
    
            goto L_00252F14;
    }
    // 0x00252EDC: nop

    // 0x00252EE0: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x00252EE4: lw          $v1, 0x6D20($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X6D20);
    // 0x00252EE8: lui         $v0, 0x8888
    ctx->r2 = S32(0X8888 << 16);
    // 0x00252EEC: ori         $v0, $v0, 0x8889
    ctx->r2 = ctx->r2 | 0X8889;
    // 0x00252EF0: multu       $v1, $v0
    result = U64(U32(ctx->r3)) * U64(U32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x00252EF4: mfhi        $t0
    ctx->r8 = hi;
    // 0x00252EF8: srl         $a0, $t0, 3
    ctx->r4 = S32(U32(ctx->r8) >> 3);
    // 0x00252EFC: sll         $v0, $a0, 4
    ctx->r2 = S32(ctx->r4 << 4);
    // 0x00252F00: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
    // 0x00252F04: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x00252F08: sltiu       $v1, $v1, 0x5
    ctx->r3 = ctx->r3 < 0X5 ? 1 : 0;
    // 0x00252F0C: bne         $v1, $zero, L_00252FF0
    if (ctx->r3 != 0) {
        // 0x00252F10: nop
    
            goto L_00252FF0;
    }
    // 0x00252F10: nop

L_00252F14:
    // 0x00252F14: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x00252F18: lw          $v1, -0x6720($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X6720);
    // 0x00252F1C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00252F20: bne         $v1, $v0, L_00252F50
    if (ctx->r3 != ctx->r2) {
        // 0x00252F24: nop
    
            goto L_00252F50;
    }
    // 0x00252F24: nop

    // 0x00252F28: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00252F2C: lwc1        $f0, 0x2030($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X2030);
    // 0x00252F30: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00252F34: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00252F38: lwc1        $f1, 0x70C0($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X70C0);
    // 0x00252F3C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00252F40: lwc1        $f20, 0x70C4($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X70C4);
    // 0x00252F44: mul.s       $f21, $f0, $f1
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f21.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00252F48: j           L_00252F80
    // 0x00252F4C: nop

        goto L_00252F80;
    // 0x00252F4C: nop

L_00252F50:
    // 0x00252F50: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00252F54: lwc1        $f1, 0x70C8($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X70C8);
    // 0x00252F58: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00252F5C: lwc1        $f0, 0x2030($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X2030);
    // 0x00252F60: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00252F64: mul.s       $f21, $f0, $f1
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f21.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00252F68: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x00252F6C: lw          $v0, 0x2034($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2034);
    // 0x00252F70: addiu       $v0, $v0, -0xA
    ctx->r2 = ADD32(ctx->r2, -0XA);
    // 0x00252F74: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x00252F78: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00252F7C: mul.s       $f20, $f0, $f1
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f20.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
L_00252F80:
    // 0x00252F80: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00252F84: lwc1        $f0, 0x70CC($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X70CC);
    // 0x00252F88: mul.s       $f0, $f22, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f22.fl, ctx->f0.fl);
    // 0x00252F8C: trunc.w.s   $f3, $f2
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 2);
    ctx->f_odd[(3 - 1) * 2] = TRUNC_W_S(ctx->f2.fl);
    // 0x00252F90: mfc1        $a0, $f3
    ctx->r4 = (int32_t)ctx->f_odd[(3 - 1) * 2];
    // 0x00252F94: sub.s       $f0, $f21, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f21.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f21.fl - ctx->f0.fl;
    // 0x00252F98: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x00252F9C: mfc1        $a3, $f22
    ctx->r7 = (int32_t)ctx->f22.u32l;
    // 0x00252FA0: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x00252FA4: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
    // 0x00252FA8: swc1        $f24, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f24.u32l;
    // 0x00252FAC: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x00252FB0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x00252FB4: jal         0x00277CF0
    // 0x00252FB8: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    func_00277CF0(rdram, ctx);
        goto after_1;
    // 0x00252FB8: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_1:
    // 0x00252FBC: add.s       $f0, $f22, $f22
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f0.fl = ctx->f22.fl + ctx->f22.fl;
    // 0x00252FC0: trunc.w.s   $f3, $f23
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 23);
    ctx->f_odd[(3 - 1) * 2] = TRUNC_W_S(ctx->f23.fl);
    // 0x00252FC4: mfc1        $a0, $f3
    ctx->r4 = (int32_t)ctx->f_odd[(3 - 1) * 2];
    // 0x00252FC8: add.s       $f21, $f21, $f0
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f21.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f21.fl = ctx->f21.fl + ctx->f0.fl;
    // 0x00252FCC: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x00252FD0: mfc1        $a3, $f22
    ctx->r7 = (int32_t)ctx->f22.u32l;
    // 0x00252FD4: mfc1        $a1, $f21
    ctx->r5 = (int32_t)ctx->f_odd[(21 - 1) * 2];
    // 0x00252FD8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x00252FDC: swc1        $f24, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f24.u32l;
    // 0x00252FE0: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x00252FE4: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x00252FE8: jal         0x00277CF0
    // 0x00252FEC: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    func_00277CF0(rdram, ctx);
        goto after_2;
    // 0x00252FEC: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    after_2:
L_00252FF0:
    // 0x00252FF0: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x00252FF4: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x00252FF8: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x00252FFC: ldc1        $f24, 0x50($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X50);
    // 0x00253000: ldc1        $f23, 0x48($sp)
    CHECK_FR(ctx, 23);
    ctx->f23.u64 = LD(ctx->r29, 0X48);
    // 0x00253004: ldc1        $f22, 0x40($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X40);
    // 0x00253008: ldc1        $f21, 0x38($sp)
    CHECK_FR(ctx, 21);
    ctx->f21.u64 = LD(ctx->r29, 0X38);
    // 0x0025300C: ldc1        $f20, 0x30($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X30);
    // 0x00253010: jr          $ra
    // 0x00253014: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    return;
    // 0x00253014: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void func_0025A254(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0025A254: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0025A258: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x0025A25C: lw          $v0, 0x14($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X14);
    // 0x0025A260: lhu         $a3, 0x78($v0)
    ctx->r7 = MEM_HU(ctx->r2, 0X78);
    // 0x0025A264: lui         $a2, 0x800B
    ctx->r6 = S32(0X800B << 16);
    // 0x0025A268: addiu       $a2, $a2, -0x328
    ctx->r6 = ADD32(ctx->r6, -0X328);
    // 0x0025A26C: jal         0x00245A98
    // 0x0025A270: nop

    func_00245A98(rdram, ctx);
        goto after_0;
    // 0x0025A270: nop

    after_0:
    // 0x0025A274: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x0025A278: jr          $ra
    // 0x0025A27C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0025A27C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0044F2E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0044F2E4: lw          $v1, 0x20($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X20);
    // 0x0044F2E8: beq         $v1, $zero, L_0044F2F4
    if (ctx->r3 == 0) {
        // 0x0044F2EC: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_0044F2F4;
    }
    // 0x0044F2EC: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x0044F2F0: addiu       $v0, $v1, 0xA0
    ctx->r2 = ADD32(ctx->r3, 0XA0);
L_0044F2F4:
    // 0x0044F2F4: jr          $ra
    // 0x0044F2F8: nop

    return;
    // 0x0044F2F8: nop

;}
RECOMP_FUNC void func_00425BC0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00425BC0: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x00425BC4: sw          $s7, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r23;
    // 0x00425BC8: lw          $s7, 0x70($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X70);
    // 0x00425BCC: sw          $s1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r17;
    // 0x00425BD0: lw          $s1, 0x74($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X74);
    // 0x00425BD4: sw          $s6, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r22;
    // 0x00425BD8: addu        $s6, $a0, $zero
    ctx->r22 = ADD32(ctx->r4, 0);
    // 0x00425BDC: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    // 0x00425BE0: sll         $s0, $s6, 2
    ctx->r16 = S32(ctx->r22 << 2);
    // 0x00425BE4: sw          $s4, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r20;
    // 0x00425BE8: lw          $s4, 0x78($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X78);
    // 0x00425BEC: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x00425BF0: addu        $at, $at, $s0
    ctx->r1 = ADD32(ctx->r1, ctx->r16);
    // 0x00425BF4: lw          $v0, 0xC60($at)
    ctx->r2 = MEM_W(ctx->r1, 0XC60);
    // 0x00425BF8: sw          $s5, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r21;
    // 0x00425BFC: addu        $s5, $a1, $zero
    ctx->r21 = ADD32(ctx->r5, 0);
    // 0x00425C00: sw          $fp, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r30;
    // 0x00425C04: addu        $fp, $a2, $zero
    ctx->r30 = ADD32(ctx->r6, 0);
    // 0x00425C08: sw          $s3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r19;
    // 0x00425C0C: addu        $s3, $a3, $zero
    ctx->r19 = ADD32(ctx->r7, 0);
    // 0x00425C10: sw          $s2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r18;
    // 0x00425C14: lw          $s2, 0x7C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X7C);
    // 0x00425C18: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
    // 0x00425C1C: beq         $v0, $v1, L_00425C2C
    if (ctx->r2 == ctx->r3) {
        // 0x00425C20: sw          $ra, 0x5C($sp)
        MEM_W(0X5C, ctx->r29) = ctx->r31;
            goto L_00425C2C;
    }
    // 0x00425C20: sw          $ra, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r31;
    // 0x00425C24: j           L_00425E44
    // 0x00425C28: addiu       $v0, $zero, -0x2
    ctx->r2 = ADD32(0, -0X2);
        goto L_00425E44;
    // 0x00425C28: addiu       $v0, $zero, -0x2
    ctx->r2 = ADD32(0, -0X2);
L_00425C2C:
    // 0x00425C2C: jal         0x00285878
    // 0x00425C30: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_00285878(rdram, ctx);
        goto after_0;
    // 0x00425C30: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_0:
    // 0x00425C34: jal         0x002847E0
    // 0x00425C38: nop

    func_002847E0(rdram, ctx);
        goto after_1;
    // 0x00425C38: nop

    after_1:
    // 0x00425C3C: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x00425C40: addu        $at, $at, $s0
    ctx->r1 = ADD32(ctx->r1, ctx->r16);
    // 0x00425C44: lw          $s0, 0xC70($at)
    ctx->r16 = MEM_W(ctx->r1, 0XC70);
    // 0x00425C48: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x00425C4C: lui         $at, 0x800F
    ctx->r1 = S32(0X800F << 16);
    // 0x00425C50: sb          $v0, 0x6750($at)
    MEM_B(0X6750, ctx->r1) = ctx->r2;
    // 0x00425C54: bne         $s0, $zero, L_00425E38
    if (ctx->r16 != 0) {
        // 0x00425C58: addiu       $t2, $zero, 0x42
        ctx->r10 = ADD32(0, 0X42);
            goto L_00425E38;
    }
    // 0x00425C58: addiu       $t2, $zero, 0x42
    ctx->r10 = ADD32(0, 0X42);
    // 0x00425C5C: addiu       $t0, $sp, 0x30
    ctx->r8 = ADD32(ctx->r29, 0X30);
    // 0x00425C60: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x00425C64: addiu       $t1, $a1, 0x4
    ctx->r9 = ADD32(ctx->r5, 0X4);
L_00425C68:
    // 0x00425C68: lbu         $v1, 0x0($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X0);
    // 0x00425C6C: addiu       $v0, $v1, -0x61
    ctx->r2 = ADD32(ctx->r3, -0X61);
    // 0x00425C70: sltiu       $v0, $v0, 0x1A
    ctx->r2 = ctx->r2 < 0X1A ? 1 : 0;
    // 0x00425C74: bnel        $v0, $zero, L_00425C7C
    if (ctx->r2 != 0) {
        // 0x00425C78: addiu       $v1, $v1, -0x20
        ctx->r3 = ADD32(ctx->r3, -0X20);
            goto L_00425C7C;
    }
    goto skip_0;
    // 0x00425C78: addiu       $v1, $v1, -0x20
    ctx->r3 = ADD32(ctx->r3, -0X20);
    skip_0:
L_00425C7C:
    // 0x00425C7C: sb          $v1, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r3;
    // 0x00425C80: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x00425C84: addu        $a2, $a1, $zero
    ctx->r6 = ADD32(ctx->r5, 0);
    // 0x00425C88: addu        $a3, $t0, $zero
    ctx->r7 = ADD32(ctx->r8, 0);
L_00425C8C:
    // 0x00425C8C: lbu         $v1, 0x0($a2)
    ctx->r3 = MEM_BU(ctx->r6, 0X0);
    // 0x00425C90: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00425C94: addu        $at, $at, $a0
    ctx->r1 = ADD32(ctx->r1, ctx->r4);
    // 0x00425C98: lbu         $v0, 0x222C($at)
    ctx->r2 = MEM_BU(ctx->r1, 0X222C);
    // 0x00425C9C: bnel        $v1, $v0, L_00425CAC
    if (ctx->r3 != ctx->r2) {
        // 0x00425CA0: addiu       $a0, $a0, 0x1
        ctx->r4 = ADD32(ctx->r4, 0X1);
            goto L_00425CAC;
    }
    goto skip_1;
    // 0x00425CA0: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    skip_1:
    // 0x00425CA4: j           L_00425CB8
    // 0x00425CA8: sb          $a0, 0x0($a3)
    MEM_B(0X0, ctx->r7) = ctx->r4;
        goto L_00425CB8;
    // 0x00425CA8: sb          $a0, 0x0($a3)
    MEM_B(0X0, ctx->r7) = ctx->r4;
L_00425CAC:
    // 0x00425CAC: slti        $v0, $a0, 0x42
    ctx->r2 = SIGNED(ctx->r4) < 0X42 ? 1 : 0;
    // 0x00425CB0: bne         $v0, $zero, L_00425C8C
    if (ctx->r2 != 0) {
        // 0x00425CB4: nop
    
            goto L_00425C8C;
    }
    // 0x00425CB4: nop

L_00425CB8:
    // 0x00425CB8: beql        $a0, $t2, L_00425CC0
    if (ctx->r4 == ctx->r10) {
        // 0x00425CBC: sb          $zero, 0x0($t0)
        MEM_B(0X0, ctx->r8) = 0;
            goto L_00425CC0;
    }
    goto skip_2;
    // 0x00425CBC: sb          $zero, 0x0($t0)
    MEM_B(0X0, ctx->r8) = 0;
    skip_2:
L_00425CC0:
    // 0x00425CC0: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x00425CC4: slt         $v0, $a1, $t1
    ctx->r2 = SIGNED(ctx->r5) < SIGNED(ctx->r9) ? 1 : 0;
    // 0x00425CC8: bne         $v0, $zero, L_00425C68
    if (ctx->r2 != 0) {
        // 0x00425CCC: addiu       $t0, $t0, 0x1
        ctx->r8 = ADD32(ctx->r8, 0X1);
            goto L_00425C68;
    }
    // 0x00425CCC: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    // 0x00425CD0: addiu       $v1, $s5, 0xFF
    ctx->r3 = ADD32(ctx->r21, 0XFF);
    // 0x00425CD4: addiu       $v0, $zero, -0x100
    ctx->r2 = ADD32(0, -0X100);
    // 0x00425CD8: and         $s5, $v1, $v0
    ctx->r21 = ctx->r3 & ctx->r2;
    // 0x00425CDC: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    // 0x00425CE0: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    // 0x00425CE4: jal         0x0029E460
    // 0x00425CE8: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    func_0029E460(rdram, ctx);
        goto after_2;
    // 0x00425CE8: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_2:
    // 0x00425CEC: addiu       $t2, $zero, 0x42
    ctx->r10 = ADD32(0, 0X42);
    // 0x00425CF0: addiu       $t0, $sp, 0x20
    ctx->r8 = ADD32(ctx->r29, 0X20);
    // 0x00425CF4: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    // 0x00425CF8: addiu       $t1, $a1, 0x10
    ctx->r9 = ADD32(ctx->r5, 0X10);
L_00425CFC:
    // 0x00425CFC: lbu         $v1, 0x0($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X0);
    // 0x00425D00: addiu       $v0, $v1, -0x61
    ctx->r2 = ADD32(ctx->r3, -0X61);
    // 0x00425D04: sltiu       $v0, $v0, 0x1A
    ctx->r2 = ctx->r2 < 0X1A ? 1 : 0;
    // 0x00425D08: bnel        $v0, $zero, L_00425D10
    if (ctx->r2 != 0) {
        // 0x00425D0C: addiu       $v1, $v1, -0x20
        ctx->r3 = ADD32(ctx->r3, -0X20);
            goto L_00425D10;
    }
    goto skip_3;
    // 0x00425D0C: addiu       $v1, $v1, -0x20
    ctx->r3 = ADD32(ctx->r3, -0X20);
    skip_3:
L_00425D10:
    // 0x00425D10: sb          $v1, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r3;
    // 0x00425D14: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x00425D18: addu        $a2, $a1, $zero
    ctx->r6 = ADD32(ctx->r5, 0);
    // 0x00425D1C: addu        $a3, $t0, $zero
    ctx->r7 = ADD32(ctx->r8, 0);
L_00425D20:
    // 0x00425D20: lbu         $v1, 0x0($a2)
    ctx->r3 = MEM_BU(ctx->r6, 0X0);
    // 0x00425D24: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00425D28: addu        $at, $at, $a0
    ctx->r1 = ADD32(ctx->r1, ctx->r4);
    // 0x00425D2C: lbu         $v0, 0x222C($at)
    ctx->r2 = MEM_BU(ctx->r1, 0X222C);
    // 0x00425D30: bnel        $v1, $v0, L_00425D40
    if (ctx->r3 != ctx->r2) {
        // 0x00425D34: addiu       $a0, $a0, 0x1
        ctx->r4 = ADD32(ctx->r4, 0X1);
            goto L_00425D40;
    }
    goto skip_4;
    // 0x00425D34: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    skip_4:
    // 0x00425D38: j           L_00425D4C
    // 0x00425D3C: sb          $a0, 0x0($a3)
    MEM_B(0X0, ctx->r7) = ctx->r4;
        goto L_00425D4C;
    // 0x00425D3C: sb          $a0, 0x0($a3)
    MEM_B(0X0, ctx->r7) = ctx->r4;
L_00425D40:
    // 0x00425D40: slti        $v0, $a0, 0x42
    ctx->r2 = SIGNED(ctx->r4) < 0X42 ? 1 : 0;
    // 0x00425D44: bne         $v0, $zero, L_00425D20
    if (ctx->r2 != 0) {
        // 0x00425D48: nop
    
            goto L_00425D20;
    }
    // 0x00425D48: nop

L_00425D4C:
    // 0x00425D4C: beql        $a0, $t2, L_00425D54
    if (ctx->r4 == ctx->r10) {
        // 0x00425D50: sb          $zero, 0x0($t0)
        MEM_B(0X0, ctx->r8) = 0;
            goto L_00425D54;
    }
    goto skip_5;
    // 0x00425D50: sb          $zero, 0x0($t0)
    MEM_B(0X0, ctx->r8) = 0;
    skip_5:
L_00425D54:
    // 0x00425D54: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x00425D58: slt         $v0, $a1, $t1
    ctx->r2 = SIGNED(ctx->r5) < SIGNED(ctx->r9) ? 1 : 0;
    // 0x00425D5C: bne         $v0, $zero, L_00425CFC
    if (ctx->r2 != 0) {
        // 0x00425D60: addiu       $t0, $t0, 0x1
        ctx->r8 = ADD32(ctx->r8, 0X1);
            goto L_00425CFC;
    }
    // 0x00425D60: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    // 0x00425D64: sll         $v0, $s6, 1
    ctx->r2 = S32(ctx->r22 << 1);
    // 0x00425D68: addu        $v0, $v0, $s6
    ctx->r2 = ADD32(ctx->r2, ctx->r22);
    // 0x00425D6C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x00425D70: addu        $v0, $v0, $s6
    ctx->r2 = ADD32(ctx->r2, ctx->r22);
    // 0x00425D74: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x00425D78: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x00425D7C: addiu       $v1, $v1, 0xC80
    ctx->r3 = ADD32(ctx->r3, 0XC80);
    // 0x00425D80: addu        $s1, $v0, $v1
    ctx->r17 = ADD32(ctx->r2, ctx->r3);
    // 0x00425D84: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x00425D88: addiu       $a3, $sp, 0x20
    ctx->r7 = ADD32(ctx->r29, 0X20);
    // 0x00425D8C: lbu         $v1, 0x0($s4)
    ctx->r3 = MEM_BU(ctx->r20, 0X0);
    // 0x00425D90: lbu         $a1, 0x1($s4)
    ctx->r5 = MEM_BU(ctx->r20, 0X1);
    // 0x00425D94: lbu         $v0, 0x0($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X0);
    // 0x00425D98: lbu         $a2, 0x1($s2)
    ctx->r6 = MEM_BU(ctx->r18, 0X1);
    // 0x00425D9C: lbu         $t0, 0x2($s2)
    ctx->r8 = MEM_BU(ctx->r18, 0X2);
    // 0x00425DA0: lbu         $t1, 0x3($s2)
    ctx->r9 = MEM_BU(ctx->r18, 0X3);
    // 0x00425DA4: addiu       $s4, $sp, 0x30
    ctx->r20 = ADD32(ctx->r29, 0X30);
    // 0x00425DA8: sw          $s4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r20;
    // 0x00425DAC: sw          $s5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r21;
    // 0x00425DB0: sw          $s7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r23;
    // 0x00425DB4: sll         $v1, $v1, 8
    ctx->r3 = S32(ctx->r3 << 8);
    // 0x00425DB8: or          $s3, $a1, $v1
    ctx->r19 = ctx->r5 | ctx->r3;
    // 0x00425DBC: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    // 0x00425DC0: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x00425DC4: sll         $a2, $a2, 16
    ctx->r6 = S32(ctx->r6 << 16);
    // 0x00425DC8: or          $v0, $v0, $a2
    ctx->r2 = ctx->r2 | ctx->r6;
    // 0x00425DCC: sll         $t0, $t0, 8
    ctx->r8 = S32(ctx->r8 << 8);
    // 0x00425DD0: or          $v0, $v0, $t0
    ctx->r2 = ctx->r2 | ctx->r8;
    // 0x00425DD4: or          $s2, $v0, $t1
    ctx->r18 = ctx->r2 | ctx->r9;
    // 0x00425DD8: jal         0x00427180
    // 0x00425DDC: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    func_00427180(rdram, ctx);
        goto after_3;
    // 0x00425DDC: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    after_3:
    // 0x00425DE0: beq         $v0, $zero, L_00425DF0
    if (ctx->r2 == 0) {
        // 0x00425DE4: addiu       $s0, $zero, -0x1
        ctx->r16 = ADD32(0, -0X1);
            goto L_00425DF0;
    }
    // 0x00425DE4: addiu       $s0, $zero, -0x1
    ctx->r16 = ADD32(0, -0X1);
    // 0x00425DE8: bne         $s0, $zero, L_00425E30
    if (ctx->r16 != 0) {
        // 0x00425DEC: nop
    
            goto L_00425E30;
    }
    // 0x00425DEC: nop

L_00425DF0:
    // 0x00425DF0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x00425DF4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x00425DF8: sw          $s5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r21;
    // 0x00425DFC: sw          $fp, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r30;
    // 0x00425E00: lw          $a1, 0x0($s7)
    ctx->r5 = MEM_W(ctx->r23, 0X0);
    // 0x00425E04: jal         0x00428CF0
    // 0x00425E08: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_00428CF0(rdram, ctx);
        goto after_4;
    // 0x00425E08: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_4:
    // 0x00425E0C: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x00425E10: beq         $s0, $zero, L_00425E30
    if (ctx->r16 == 0) {
        // 0x00425E14: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_00425E30;
    }
    // 0x00425E14: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x00425E18: sw          $s4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r20;
    // 0x00425E1C: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    // 0x00425E20: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    // 0x00425E24: jal         0x00427780
    // 0x00425E28: addiu       $a3, $sp, 0x20
    ctx->r7 = ADD32(ctx->r29, 0X20);
    func_00427780(rdram, ctx);
        goto after_5;
    // 0x00425E28: addiu       $a3, $sp, 0x20
    ctx->r7 = ADD32(ctx->r29, 0X20);
    after_5:
    // 0x00425E2C: addiu       $s0, $zero, -0x1
    ctx->r16 = ADD32(0, -0X1);
L_00425E30:
    // 0x00425E30: jal         0x004258E8
    // 0x00425E34: addu        $a0, $s6, $zero
    ctx->r4 = ADD32(ctx->r22, 0);
    func_004258E8(rdram, ctx);
        goto after_6;
    // 0x00425E34: addu        $a0, $s6, $zero
    ctx->r4 = ADD32(ctx->r22, 0);
    after_6:
L_00425E38:
    // 0x00425E38: jal         0x002858A4
    // 0x00425E3C: nop

    func_002858A4(rdram, ctx);
        goto after_7;
    // 0x00425E3C: nop

    after_7:
    // 0x00425E40: addu        $v0, $s0, $zero
    ctx->r2 = ADD32(ctx->r16, 0);
L_00425E44:
    // 0x00425E44: lw          $ra, 0x5C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X5C);
    // 0x00425E48: lw          $fp, 0x58($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X58);
    // 0x00425E4C: lw          $s7, 0x54($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X54);
    // 0x00425E50: lw          $s6, 0x50($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X50);
    // 0x00425E54: lw          $s5, 0x4C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X4C);
    // 0x00425E58: lw          $s4, 0x48($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X48);
    // 0x00425E5C: lw          $s3, 0x44($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X44);
    // 0x00425E60: lw          $s2, 0x40($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X40);
    // 0x00425E64: lw          $s1, 0x3C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X3C);
    // 0x00425E68: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x00425E6C: jr          $ra
    // 0x00425E70: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    return;
    // 0x00425E70: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
;}
RECOMP_FUNC void func_00412C4C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00412C4C: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x00412C50: lw          $v1, 0x1BB0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X1BB0);
    // 0x00412C54: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x00412C58: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x00412C5C: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x00412C60: lw          $v0, 0x38($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X38);
    // 0x00412C64: bne         $v0, $zero, L_00412CA0
    if (ctx->r2 != 0) {
        // 0x00412C68: addu        $s0, $a0, $zero
        ctx->r16 = ADD32(ctx->r4, 0);
            goto L_00412CA0;
    }
    // 0x00412C68: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x00412C6C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00412C70: lwc1        $f0, 0xADC($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0XADC);
    // 0x00412C74: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x00412C78: sw          $zero, 0x28($sp)
    MEM_W(0X28, ctx->r29) = 0;
    // 0x00412C7C: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    // 0x00412C80: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x00412C84: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x00412C88: lw          $t2, 0x28($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X28);
    // 0x00412C8C: sw          $t0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r8;
    // 0x00412C90: sw          $t1, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r9;
    // 0x00412C94: sw          $t2, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r10;
    // 0x00412C98: j           L_00412CF4
    // 0x00412C9C: addu        $v0, $s0, $zero
    ctx->r2 = ADD32(ctx->r16, 0);
        goto L_00412CF4;
    // 0x00412C9C: addu        $v0, $s0, $zero
    ctx->r2 = ADD32(ctx->r16, 0);
L_00412CA0:
    // 0x00412CA0: lw          $a0, 0x4($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X4);
    // 0x00412CA4: jal         0x002017D4
    // 0x00412CA8: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_002017D4(rdram, ctx);
        goto after_0;
    // 0x00412CA8: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_0:
    // 0x00412CAC: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x00412CB0: jal         0x002017D4
    // 0x00412CB4: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_002017D4(rdram, ctx);
        goto after_1;
    // 0x00412CB4: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_1:
    // 0x00412CB8: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x00412CBC: jal         0x002017D4
    // 0x00412CC0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_002017D4(rdram, ctx);
        goto after_2;
    // 0x00412CC0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_2:
    // 0x00412CC4: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x00412CC8: addiu       $a1, $v0, 0x8
    ctx->r5 = ADD32(ctx->r2, 0X8);
    // 0x00412CCC: lw          $a2, 0x4($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X4);
    // 0x00412CD0: jal         0x004101B8
    // 0x00412CD4: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_004101B8(rdram, ctx);
        goto after_3;
    // 0x00412CD4: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_3:
    // 0x00412CD8: lw          $t0, 0x10($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X10);
    // 0x00412CDC: lw          $t1, 0x14($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X14);
    // 0x00412CE0: lw          $t2, 0x18($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X18);
    // 0x00412CE4: sw          $t0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r8;
    // 0x00412CE8: sw          $t1, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r9;
    // 0x00412CEC: sw          $t2, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r10;
    // 0x00412CF0: addu        $v0, $s0, $zero
    ctx->r2 = ADD32(ctx->r16, 0);
L_00412CF4:
    // 0x00412CF4: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x00412CF8: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x00412CFC: jr          $ra
    // 0x00412D00: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x00412D00: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_004685E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004685E8: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x004685EC: addiu       $v1, $zero, 0x80
    ctx->r3 = ADD32(0, 0X80);
    // 0x004685F0: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x004685F4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x004685F8: sw          $v0, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r2;
    // 0x004685FC: srl         $v0, $a1, 3
    ctx->r2 = S32(U32(ctx->r5) >> 3);
    // 0x00468600: lw          $a0, 0x4($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X4);
    // 0x00468604: andi        $a1, $a1, 0x7
    ctx->r5 = ctx->r5 & 0X7;
    // 0x00468608: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x0046860C: lbu         $v0, 0x0($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X0);
    // 0x00468610: srav        $v1, $v1, $a1
    ctx->r3 = S32(SIGNED(ctx->r3) >> (ctx->r5 & 31));
    // 0x00468614: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x00468618: jr          $ra
    // 0x0046861C: sltu        $v0, $zero, $v0
    ctx->r2 = 0 < ctx->r2 ? 1 : 0;
    return;
    // 0x0046861C: sltu        $v0, $zero, $v0
    ctx->r2 = 0 < ctx->r2 ? 1 : 0;
;}
RECOMP_FUNC void func_0026D1F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0026D1F8: sw          $t1, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r9;
    // 0x0026D1FC: sw          $t2, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r10;
    // turok2: reconnected split function: a stray ELF symbol at 0x0026D200 ended
    // this function early, leaving it without its epilogue. On the
    // hardware execution simply continues into the next instruction.
    func_0026D200(rdram, ctx);
;}
RECOMP_FUNC void func_0041B1B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041B1B8: jr          $ra
    // 0x0041B1BC: addiu       $v0, $zero, 0x1DB2
    ctx->r2 = ADD32(0, 0X1DB2);
    return;
    // 0x0041B1BC: addiu       $v0, $zero, 0x1DB2
    ctx->r2 = ADD32(0, 0X1DB2);
;}
RECOMP_FUNC void func_00253FE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00253FE0: lw          $v1, 0x51C($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X51C);
    // 0x00253FE4: beq         $v1, $zero, L_00253FF4
    if (ctx->r3 == 0) {
        // 0x00253FE8: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_00253FF4;
    }
    // 0x00253FE8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x00253FEC: lw          $v0, 0x54C($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X54C);
    // 0x00253FF0: sltu        $v0, $zero, $v0
    ctx->r2 = 0 < ctx->r2 ? 1 : 0;
L_00253FF4:
    // 0x00253FF4: jr          $ra
    // 0x00253FF8: nop

    return;
    // 0x00253FF8: nop

;}
RECOMP_FUNC void func_00445584(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00445584: addiu       $sp, $sp, -0xB0
    ctx->r29 = ADD32(ctx->r29, -0XB0);
    // 0x00445588: sw          $s0, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r16;
    // 0x0044558C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x00445590: sw          $s1, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r17;
    // 0x00445594: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x00445598: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    // 0x0044559C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x004455A0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x004455A4: sw          $ra, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->r31;
    // 0x004455A8: jal         0x00246108
    // 0x004455AC: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    func_00246108(rdram, ctx);
        goto after_0;
    // 0x004455AC: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    after_0:
    // 0x004455B0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x004455B4: lui         $a2, 0x3E86
    ctx->r6 = S32(0X3E86 << 16);
    // 0x004455B8: ori         $a2, $a2, 0xA93
    ctx->r6 = ctx->r6 | 0XA93;
    // 0x004455BC: lw          $a3, 0x20($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X20);
    // 0x004455C0: jal         0x00245BAC
    // 0x004455C4: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_00245BAC(rdram, ctx);
        goto after_1;
    // 0x004455C4: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_1:
    // 0x004455C8: lw          $ra, 0xA8($sp)
    ctx->r31 = MEM_W(ctx->r29, 0XA8);
    // 0x004455CC: lw          $s1, 0xA4($sp)
    ctx->r17 = MEM_W(ctx->r29, 0XA4);
    // 0x004455D0: lw          $s0, 0xA0($sp)
    ctx->r16 = MEM_W(ctx->r29, 0XA0);
    // 0x004455D4: jr          $ra
    // 0x004455D8: addiu       $sp, $sp, 0xB0
    ctx->r29 = ADD32(ctx->r29, 0XB0);
    return;
    // 0x004455D8: addiu       $sp, $sp, 0xB0
    ctx->r29 = ADD32(ctx->r29, 0XB0);
;}
RECOMP_FUNC void func_00228C20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00228C20: jr          $ra
    // 0x00228C24: nop

    return;
    // 0x00228C24: nop

;}
RECOMP_FUNC void func_00268A2C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00268A2C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00268A30: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x00268A34: lw          $a1, 0x10($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X10);
    // 0x00268A38: beq         $a1, $zero, L_00268A50
    if (ctx->r5 == 0) {
        // 0x00268A3C: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_00268A50;
    }
    // 0x00268A3C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x00268A40: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x00268A44: addiu       $a0, $a0, 0x7078
    ctx->r4 = ADD32(ctx->r4, 0X7078);
    // 0x00268A48: jal         0x0022425C
    // 0x00268A4C: nop

    func_0022425C(rdram, ctx);
        goto after_0;
    // 0x00268A4C: nop

    after_0:
L_00268A50:
    // 0x00268A50: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x00268A54: jr          $ra
    // 0x00268A58: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00268A58: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_002919F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002919F0: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x002919F4: sw          $s1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r17;
    // 0x002919F8: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x002919FC: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x00291A00: sw          $s2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r18;
    // 0x00291A04: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    // 0x00291A08: lw          $a0, 0x18($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X18);
    // 0x00291A0C: beq         $a0, $zero, L_00291BDC
    if (ctx->r4 == 0) {
        // 0x00291A10: nop
    
            goto L_00291BDC;
    }
    // 0x00291A10: nop

    // 0x00291A14: jal         0x00292DE0
    // 0x00291A18: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    func_00292DE0(rdram, ctx);
        goto after_0;
    // 0x00291A18: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    after_0:
    // 0x00291A1C: lh          $s0, 0x10($sp)
    ctx->r16 = MEM_H(ctx->r29, 0X10);
    // 0x00291A20: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x00291A24: beq         $s0, $v0, L_00291AE8
    if (ctx->r16 == ctx->r2) {
        // 0x00291A28: slti        $v0, $s0, 0x4
        ctx->r2 = SIGNED(ctx->r16) < 0X4 ? 1 : 0;
            goto L_00291AE8;
    }
    // 0x00291A28: slti        $v0, $s0, 0x4
    ctx->r2 = SIGNED(ctx->r16) < 0X4 ? 1 : 0;
    // 0x00291A2C: beq         $v0, $zero, L_00291A44
    if (ctx->r2 == 0) {
        // 0x00291A30: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_00291A44;
    }
    // 0x00291A30: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00291A34: beq         $s0, $v0, L_00291A58
    if (ctx->r16 == ctx->r2) {
        // 0x00291A38: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_00291A58;
    }
    // 0x00291A38: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x00291A3C: j           L_00291BC4
    // 0x00291A40: nop

        goto L_00291BC4;
    // 0x00291A40: nop

L_00291A44:
    // 0x00291A44: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x00291A48: beq         $s0, $v0, L_00291B9C
    if (ctx->r16 == ctx->r2) {
        // 0x00291A4C: addiu       $a0, $s1, 0x48
        ctx->r4 = ADD32(ctx->r17, 0X48);
            goto L_00291B9C;
    }
    // 0x00291A4C: addiu       $a0, $s1, 0x48
    ctx->r4 = ADD32(ctx->r17, 0X48);
    // 0x00291A50: j           L_00291BC4
    // 0x00291A54: nop

        goto L_00291BC4;
    // 0x00291A54: nop

L_00291A58:
    // 0x00291A58: jal         0x00291BF4
    // 0x00291A5C: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    func_00291BF4(rdram, ctx);
        goto after_1;
    // 0x00291A5C: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    after_1:
    // 0x00291A60: lw          $v0, 0x2C($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X2C);
    // 0x00291A64: lw          $s2, 0x18($s1)
    ctx->r18 = MEM_W(ctx->r17, 0X18);
    // 0x00291A68: bne         $v0, $s0, L_00291BDC
    if (ctx->r2 != ctx->r16) {
        // 0x00291A6C: nop
    
            goto L_00291BDC;
    }
    // 0x00291A6C: nop

    // 0x00291A70: beq         $s2, $zero, L_00291BDC
    if (ctx->r18 == 0) {
        // 0x00291A74: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_00291BDC;
    }
    // 0x00291A74: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x00291A78: jal         0x00293254
    // 0x00291A7C: addiu       $a1, $sp, 0x30
    ctx->r5 = ADD32(ctx->r29, 0X30);
    func_00293254(rdram, ctx);
        goto after_2;
    // 0x00291A7C: addiu       $a1, $sp, 0x30
    ctx->r5 = ADD32(ctx->r29, 0X30);
    after_2:
    // 0x00291A80: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x00291A84: beq         $v0, $zero, L_00291BDC
    if (ctx->r2 == 0) {
        // 0x00291A88: nop
    
            goto L_00291BDC;
    }
    // 0x00291A88: nop

    // 0x00291A8C: lw          $v0, 0x84($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X84);
    // 0x00291A90: beq         $v0, $zero, L_00291ADC
    if (ctx->r2 == 0) {
        // 0x00291A94: nop
    
            goto L_00291ADC;
    }
    // 0x00291A94: nop

    // 0x00291A98: jal         0x00293028
    // 0x00291A9C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_00293028(rdram, ctx);
        goto after_3;
    // 0x00291A9C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_3:
    // 0x00291AA0: lw          $v1, 0x80($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X80);
    // 0x00291AA4: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x00291AA8: lw          $v1, 0x8($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X8);
    // 0x00291AAC: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x00291AB0: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x00291AB4: bne         $v0, $zero, L_00291ADC
    if (ctx->r2 != 0) {
        // 0x00291AB8: nop
    
            goto L_00291ADC;
    }
    // 0x00291AB8: nop

    // 0x00291ABC: lw          $a1, 0x7C($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X7C);
    // 0x00291AC0: jal         0x0029321C
    // 0x00291AC4: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_0029321C(rdram, ctx);
        goto after_4;
    // 0x00291AC4: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_4:
    // 0x00291AC8: lw          $v1, 0x84($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X84);
    // 0x00291ACC: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x00291AD0: beq         $v1, $v0, L_00291ADC
    if (ctx->r3 == ctx->r2) {
        // 0x00291AD4: addu        $v0, $v1, $v0
        ctx->r2 = ADD32(ctx->r3, ctx->r2);
            goto L_00291ADC;
    }
    // 0x00291AD4: addu        $v0, $v1, $v0
    ctx->r2 = ADD32(ctx->r3, ctx->r2);
    // 0x00291AD8: sw          $v0, 0x84($s1)
    MEM_W(0X84, ctx->r17) = ctx->r2;
L_00291ADC:
    // 0x00291ADC: lw          $v0, 0x30($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X30);
    // 0x00291AE0: j           L_00291B7C
    // 0x00291AE4: sh          $zero, 0x20($sp)
    MEM_H(0X20, ctx->r29) = 0;
        goto L_00291B7C;
    // 0x00291AE4: sh          $zero, 0x20($sp)
    MEM_H(0X20, ctx->r29) = 0;
L_00291AE8:
    // 0x00291AE8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x00291AEC: jal         0x00292D4C
    // 0x00291AF0: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    func_00292D4C(rdram, ctx);
        goto after_5;
    // 0x00291AF0: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    after_5:
    // 0x00291AF4: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x00291AF8: lw          $v0, 0x2C($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X2C);
    // 0x00291AFC: lw          $s0, 0x18($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X18);
    // 0x00291B00: bne         $v0, $v1, L_00291BDC
    if (ctx->r2 != ctx->r3) {
        // 0x00291B04: nop
    
            goto L_00291BDC;
    }
    // 0x00291B04: nop

    // 0x00291B08: beq         $s0, $zero, L_00291BDC
    if (ctx->r16 == 0) {
        // 0x00291B0C: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_00291BDC;
    }
    // 0x00291B0C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00291B10: jal         0x00293254
    // 0x00291B14: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    func_00293254(rdram, ctx);
        goto after_6;
    // 0x00291B14: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    after_6:
    // 0x00291B18: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x00291B1C: beq         $v0, $zero, L_00291BDC
    if (ctx->r2 == 0) {
        // 0x00291B20: nop
    
            goto L_00291BDC;
    }
    // 0x00291B20: nop

    // 0x00291B24: lw          $v0, 0x84($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X84);
    // 0x00291B28: beq         $v0, $zero, L_00291B74
    if (ctx->r2 == 0) {
        // 0x00291B2C: nop
    
            goto L_00291B74;
    }
    // 0x00291B2C: nop

    // 0x00291B30: jal         0x00293028
    // 0x00291B34: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00293028(rdram, ctx);
        goto after_7;
    // 0x00291B34: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_7:
    // 0x00291B38: lw          $v1, 0x80($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X80);
    // 0x00291B3C: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x00291B40: lw          $v1, 0x8($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X8);
    // 0x00291B44: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x00291B48: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x00291B4C: bne         $v0, $zero, L_00291B74
    if (ctx->r2 != 0) {
        // 0x00291B50: nop
    
            goto L_00291B74;
    }
    // 0x00291B50: nop

    // 0x00291B54: lw          $a1, 0x7C($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X7C);
    // 0x00291B58: jal         0x0029321C
    // 0x00291B5C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_0029321C(rdram, ctx);
        goto after_8;
    // 0x00291B5C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_8:
    // 0x00291B60: lw          $v1, 0x84($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X84);
    // 0x00291B64: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x00291B68: beq         $v1, $v0, L_00291B74
    if (ctx->r3 == ctx->r2) {
        // 0x00291B6C: addu        $v0, $v1, $v0
        ctx->r2 = ADD32(ctx->r3, ctx->r2);
            goto L_00291B74;
    }
    // 0x00291B6C: addu        $v0, $v1, $v0
    ctx->r2 = ADD32(ctx->r3, ctx->r2);
    // 0x00291B70: sw          $v0, 0x84($s1)
    MEM_W(0X84, ctx->r17) = ctx->r2;
L_00291B74:
    // 0x00291B74: lw          $v0, 0x34($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X34);
    // 0x00291B78: sh          $zero, 0x20($sp)
    MEM_H(0X20, ctx->r29) = 0;
L_00291B7C:
    // 0x00291B7C: lw          $a2, 0x24($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X24);
    // 0x00291B80: mult        $v0, $a2
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r6)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x00291B84: addiu       $a0, $s1, 0x48
    ctx->r4 = ADD32(ctx->r17, 0X48);
    // 0x00291B88: mflo        $a2
    ctx->r6 = lo;
    // 0x00291B8C: jal         0x00291034
    // 0x00291B90: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    func_00291034(rdram, ctx);
        goto after_9;
    // 0x00291B90: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    after_9:
    // 0x00291B94: j           L_00291BDC
    // 0x00291B98: nop

        goto L_00291BDC;
    // 0x00291B98: nop

L_00291B9C:
    // 0x00291B9C: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x00291BA0: lui         $a2, 0x7FFF
    ctx->r6 = S32(0X7FFF << 16);
    // 0x00291BA4: ori         $a2, $a2, 0xFFFF
    ctx->r6 = ctx->r6 | 0XFFFF;
    // 0x00291BA8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x00291BAC: sw          $v0, 0x2C($s1)
    MEM_W(0X2C, ctx->r17) = ctx->r2;
    // 0x00291BB0: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x00291BB4: jal         0x00291034
    // 0x00291BB8: sh          $v0, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r2;
    func_00291034(rdram, ctx);
        goto after_10;
    // 0x00291BB8: sh          $v0, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r2;
    after_10:
    // 0x00291BBC: j           L_00291BDC
    // 0x00291BC0: nop

        goto L_00291BDC;
    // 0x00291BC0: nop

L_00291BC4:
    // 0x00291BC4: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x00291BC8: addiu       $a0, $a0, -0x5C80
    ctx->r4 = ADD32(ctx->r4, -0X5C80);
    // 0x00291BCC: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x00291BD0: addiu       $a1, $a1, -0x5C7C
    ctx->r5 = ADD32(ctx->r5, -0X5C7C);
    // 0x00291BD4: jal         0x0029B020
    // 0x00291BD8: addiu       $a2, $zero, 0x19C
    ctx->r6 = ADD32(0, 0X19C);
    func_0029B020(rdram, ctx);
        goto after_11;
    // 0x00291BD8: addiu       $a2, $zero, 0x19C
    ctx->r6 = ADD32(0, 0X19C);
    after_11:
L_00291BDC:
    // 0x00291BDC: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x00291BE0: lw          $s2, 0x40($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X40);
    // 0x00291BE4: lw          $s1, 0x3C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X3C);
    // 0x00291BE8: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x00291BEC: jr          $ra
    // 0x00291BF0: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x00291BF0: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_0045E0BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_00425128:
    // 0x0045E0BC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x0045E0C0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0045E0C4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x0045E0C8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x0045E0CC: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x0045E0D0: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x0045E0D4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x0045E0D8: jal         0x00275A74
    // 0x0045E0DC: addu        $s2, $a2, $zero
    ctx->r18 = ADD32(ctx->r6, 0);
    func_00275A74(rdram, ctx);
        goto after_0;
    // 0x0045E0DC: addu        $s2, $a2, $zero
    ctx->r18 = ADD32(ctx->r6, 0);
    after_0:
    // 0x0045E0E0: jal         0x00275F7C
    // 0x0045E0E4: nop

    func_00275F7C(rdram, ctx);
        goto after_1;
    // 0x0045E0E4: nop

    after_1:
    // 0x0045E0E8: jal         0x00275E1C
    // 0x0045E0EC: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    func_00275E1C(rdram, ctx);
        goto after_2;
    // 0x0045E0EC: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    after_2:
    // 0x0045E0F0: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x0045E0F4: lw          $v0, 0xA34($v0)
    ctx->r2 = MEM_W(ctx->r2, 0XA34);
    // 0x0045E0F8: bne         $v0, $zero, L_0045E114
    if (ctx->r2 != 0) {
        // 0x0045E0FC: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_0045E114;
    }
    // 0x0045E0FC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0045E100: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x0045E104: jal         0x00416454
    // 0x0045E108: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    func_00416454(rdram, ctx);
        goto after_3;
    // 0x0045E108: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    after_3:
    // 0x0045E10C: j           L_00425128
    // 0x0045E110: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    entry_00425128(rdram, ctx);
    return;
    // 0x0045E110: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_0045E114:
    // 0x0045E114: jal         0x00285304
    // 0x0045E118: nop

    func_00285304(rdram, ctx);
        goto after_4;
    // 0x0045E118: nop

    after_4:
    // 0x0045E11C: jal         0x00285410
    // 0x0045E120: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_00285410(rdram, ctx);
        goto after_5;
    // 0x0045E120: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_5:
    // 0x0045E124: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0045E128: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x0045E12C: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x0045E130: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x0045E134: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0045E138: jr          $ra
    // 0x0045E13C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x0045E13C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_0045B70C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0045B70C: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x0045B710: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0045B714: sw          $v0, 0x9C0($at)
    MEM_W(0X9C0, ctx->r1) = ctx->r2;
    // 0x0045B718: jr          $ra
    // 0x0045B71C: nop

    return;
    // 0x0045B71C: nop

;}
RECOMP_FUNC void func_00440858(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00440858: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0044085C: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x00440860: lb          $v0, 0xC7($a1)
    ctx->r2 = MEM_B(ctx->r5, 0XC7);
    // 0x00440864: beq         $v0, $zero, L_00440888
    if (ctx->r2 == 0) {
        // 0x00440868: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_00440888;
    }
    // 0x00440868: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x0044086C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00440870: lwc1        $f0, 0x548($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X548);
    // 0x00440874: swc1        $f0, 0x1FC($a0)
    MEM_W(0X1FC, ctx->r4) = ctx->f0.u32l;
    // 0x00440878: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0044087C: sw          $v0, -0x5FC($at)
    MEM_W(-0X5FC, ctx->r1) = ctx->r2;
    // 0x00440880: jal         0x00243414
    // 0x00440884: addiu       $a2, $zero, 0x13
    ctx->r6 = ADD32(0, 0X13);
    func_00243414(rdram, ctx);
        goto after_0;
    // 0x00440884: addiu       $a2, $zero, 0x13
    ctx->r6 = ADD32(0, 0X13);
    after_0:
L_00440888:
    // 0x00440888: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x0044088C: jr          $ra
    // 0x00440890: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00440890: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00429F18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00429F18: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    // 0x00429F1C: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
;}
RECOMP_FUNC void func_0026D710(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0026D710: addiu       $sp, $sp, -0xC8
    ctx->r29 = ADD32(ctx->r29, -0XC8);
    // 0x0026D714: sw          $fp, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->r30;
    // 0x0026D718: lw          $fp, 0xD8($sp)
    ctx->r30 = MEM_W(ctx->r29, 0XD8);
    // 0x0026D71C: sw          $s5, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->r21;
    // 0x0026D720: addu        $s5, $a0, $zero
    ctx->r21 = ADD32(ctx->r4, 0);
    // 0x0026D724: sw          $s4, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->r20;
    // 0x0026D728: addiu       $s4, $a1, -0x1
    ctx->r20 = ADD32(ctx->r5, -0X1);
    // 0x0026D72C: sw          $s7, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->r23;
    // 0x0026D730: addu        $s7, $a2, $zero
    ctx->r23 = ADD32(ctx->r6, 0);
    // 0x0026D734: sw          $s1, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r17;
    // 0x0026D738: addu        $s1, $a3, $zero
    ctx->r17 = ADD32(ctx->r7, 0);
    // 0x0026D73C: sw          $ra, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->r31;
    // 0x0026D740: sw          $s6, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->r22;
    // 0x0026D744: sw          $s3, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->r19;
    // 0x0026D748: sw          $s2, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->r18;
    // 0x0026D74C: beq         $a1, $zero, L_0026DF80
    if (ctx->r5 == 0) {
        // 0x0026D750: sw          $s0, 0xA0($sp)
        MEM_W(0XA0, ctx->r29) = ctx->r16;
            goto L_0026DF80;
    }
    // 0x0026D750: sw          $s0, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r16;
    // 0x0026D754: addiu       $s6, $zero, -0x1
    ctx->r22 = ADD32(0, -0X1);
    // 0x0026D758: addiu       $s3, $a0, 0xC
    ctx->r19 = ADD32(ctx->r4, 0XC);
L_0026D75C:
    // 0x0026D75C: lw          $v0, 0x0($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X0);
    // 0x0026D760: lw          $v1, 0x27C($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X27C);
    // 0x0026D764: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x0026D768: beq         $v0, $zero, L_0026DF70
    if (ctx->r2 == 0) {
        // 0x0026D76C: addu        $a0, $fp, $zero
        ctx->r4 = ADD32(ctx->r30, 0);
            goto L_0026DF70;
    }
    // 0x0026D76C: addu        $a0, $fp, $zero
    ctx->r4 = ADD32(ctx->r30, 0);
    // 0x0026D770: lhu         $a1, 0x4($s3)
    ctx->r5 = MEM_HU(ctx->r19, 0X4);
    // 0x0026D774: jal         0x002017D4
    // 0x0026D778: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    func_002017D4(rdram, ctx);
        goto after_0;
    // 0x0026D778: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    after_0:
    // 0x0026D77C: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x0026D780: jal         0x002017D4
    // 0x0026D784: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_002017D4(rdram, ctx);
        goto after_1;
    // 0x0026D784: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_1:
    // 0x0026D788: addu        $a1, $s5, $zero
    ctx->r5 = ADD32(ctx->r21, 0);
    // 0x0026D78C: addiu       $a2, $sp, 0x50
    ctx->r6 = ADD32(ctx->r29, 0X50);
    // 0x0026D790: lhu         $a0, 0x4($s3)
    ctx->r4 = MEM_HU(ctx->r19, 0X4);
    // 0x0026D794: lbu         $v0, 0x66($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X66);
    // 0x0026D798: sll         $a0, $a0, 6
    ctx->r4 = S32(ctx->r4 << 6);
    // 0x0026D79C: addu        $a0, $s7, $a0
    ctx->r4 = ADD32(ctx->r23, ctx->r4);
    // 0x0026D7A0: xori        $v0, $v0, 0x5
    ctx->r2 = ctx->r2 ^ 0X5;
    // 0x0026D7A4: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x0026D7A8: jal         0x0020F85C
    // 0x0026D7AC: sll         $s0, $v0, 1
    ctx->r16 = S32(ctx->r2 << 1);
    func_0020F85C(rdram, ctx);
        goto after_2;
    // 0x0026D7AC: sll         $s0, $v0, 1
    ctx->r16 = S32(ctx->r2 << 1);
    after_2:
    // 0x0026D7B0: addiu       $a0, $sp, 0x50
    ctx->r4 = ADD32(ctx->r29, 0X50);
    // 0x0026D7B4: lui         $a2, 0x3780
    ctx->r6 = S32(0X3780 << 16);
    // 0x0026D7B8: jal         0x0020EF60
    // 0x0026D7BC: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    func_0020EF60(rdram, ctx);
        goto after_3;
    // 0x0026D7BC: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    after_3:
    // 0x0026D7C0: lw          $v1, 0x0($s3)
    ctx->r3 = MEM_W(ctx->r19, 0X0);
    // 0x0026D7C4: ori         $v0, $zero, 0x8000
    ctx->r2 = 0 | 0X8000;
    // 0x0026D7C8: beq         $v1, $v0, L_0026DD10
    if (ctx->r3 == ctx->r2) {
        // 0x0026D7CC: sltu        $v0, $v0, $v1
        ctx->r2 = ctx->r2 < ctx->r3 ? 1 : 0;
            goto L_0026DD10;
    }
    // 0x0026D7CC: sltu        $v0, $v0, $v1
    ctx->r2 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x0026D7D0: bne         $v0, $zero, L_0026D8B0
    if (ctx->r2 != 0) {
        // 0x0026D7D4: lui         $v0, 0x80
        ctx->r2 = S32(0X80 << 16);
            goto L_0026D8B0;
    }
    // 0x0026D7D4: lui         $v0, 0x80
    ctx->r2 = S32(0X80 << 16);
    // 0x0026D7D8: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x0026D7DC: beq         $v1, $v0, L_0026DBE0
    if (ctx->r3 == ctx->r2) {
        // 0x0026D7E0: sltiu       $v0, $v1, 0x81
        ctx->r2 = ctx->r3 < 0X81 ? 1 : 0;
            goto L_0026DBE0;
    }
    // 0x0026D7E0: sltiu       $v0, $v1, 0x81
    ctx->r2 = ctx->r3 < 0X81 ? 1 : 0;
    // 0x0026D7E4: beq         $v0, $zero, L_0026D830
    if (ctx->r2 == 0) {
        // 0x0026D7E8: addiu       $v0, $zero, 0x8
        ctx->r2 = ADD32(0, 0X8);
            goto L_0026D830;
    }
    // 0x0026D7E8: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x0026D7EC: beq         $v1, $v0, L_0026D9E8
    if (ctx->r3 == ctx->r2) {
        // 0x0026D7F0: sltiu       $v0, $v1, 0x9
        ctx->r2 = ctx->r3 < 0X9 ? 1 : 0;
            goto L_0026D9E8;
    }
    // 0x0026D7F0: sltiu       $v0, $v1, 0x9
    ctx->r2 = ctx->r3 < 0X9 ? 1 : 0;
    // 0x0026D7F4: beq         $v0, $zero, L_0026D80C
    if (ctx->r2 == 0) {
        // 0x0026D7F8: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_0026D80C;
    }
    // 0x0026D7F8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x0026D7FC: beql        $v1, $v0, L_0026D9C4
    if (ctx->r3 == ctx->r2) {
        // 0x0026D800: sw          $s0, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r16;
            goto L_0026D9C4;
    }
    goto skip_0;
    // 0x0026D800: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    skip_0:
    // 0x0026D804: j           L_0026DEE8
    // 0x0026D808: nop

        goto L_0026DEE8;
    // 0x0026D808: nop

L_0026D80C:
    // 0x0026D80C: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x0026D810: beq         $v1, $v0, L_0026DEE8
    if (ctx->r3 == ctx->r2) {
        // 0x0026D814: sltiu       $v0, $v1, 0x21
        ctx->r2 = ctx->r3 < 0X21 ? 1 : 0;
            goto L_0026DEE8;
    }
    // 0x0026D814: sltiu       $v0, $v1, 0x21
    ctx->r2 = ctx->r3 < 0X21 ? 1 : 0;
    // 0x0026D818: bne         $v0, $zero, L_0026DEE8
    if (ctx->r2 != 0) {
        // 0x0026D81C: addiu       $v0, $zero, 0x40
        ctx->r2 = ADD32(0, 0X40);
            goto L_0026DEE8;
    }
    // 0x0026D81C: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x0026D820: beq         $v1, $v0, L_0026DA10
    if (ctx->r3 == ctx->r2) {
        // 0x0026D824: nop
    
            goto L_0026DA10;
    }
    // 0x0026D824: nop

    // 0x0026D828: j           L_0026DEE8
    // 0x0026D82C: nop

        goto L_0026DEE8;
    // 0x0026D82C: nop

L_0026D830:
    // 0x0026D830: addiu       $v0, $zero, 0x800
    ctx->r2 = ADD32(0, 0X800);
    // 0x0026D834: beq         $v1, $v0, L_0026DC78
    if (ctx->r3 == ctx->r2) {
        // 0x0026D838: sltiu       $v0, $v1, 0x801
        ctx->r2 = ctx->r3 < 0X801 ? 1 : 0;
            goto L_0026DC78;
    }
    // 0x0026D838: sltiu       $v0, $v1, 0x801
    ctx->r2 = ctx->r3 < 0X801 ? 1 : 0;
    // 0x0026D83C: beq         $v0, $zero, L_0026D878
    if (ctx->r2 == 0) {
        // 0x0026D840: addiu       $v0, $zero, 0x200
        ctx->r2 = ADD32(0, 0X200);
            goto L_0026D878;
    }
    // 0x0026D840: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x0026D844: beq         $v1, $v0, L_0026DC2C
    if (ctx->r3 == ctx->r2) {
        // 0x0026D848: sltiu       $v0, $v1, 0x201
        ctx->r2 = ctx->r3 < 0X201 ? 1 : 0;
            goto L_0026DC2C;
    }
    // 0x0026D848: sltiu       $v0, $v1, 0x201
    ctx->r2 = ctx->r3 < 0X201 ? 1 : 0;
    // 0x0026D84C: beq         $v0, $zero, L_0026D864
    if (ctx->r2 == 0) {
        // 0x0026D850: addiu       $v0, $zero, 0x100
        ctx->r2 = ADD32(0, 0X100);
            goto L_0026D864;
    }
    // 0x0026D850: addiu       $v0, $zero, 0x100
    ctx->r2 = ADD32(0, 0X100);
    // 0x0026D854: beql        $v1, $v0, L_0026DC08
    if (ctx->r3 == ctx->r2) {
        // 0x0026D858: sw          $s0, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r16;
            goto L_0026DC08;
    }
    goto skip_1;
    // 0x0026D858: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    skip_1:
    // 0x0026D85C: j           L_0026DEE8
    // 0x0026D860: nop

        goto L_0026DEE8;
    // 0x0026D860: nop

L_0026D864:
    // 0x0026D864: addiu       $v0, $zero, 0x400
    ctx->r2 = ADD32(0, 0X400);
    // 0x0026D868: beql        $v1, $v0, L_0026DC54
    if (ctx->r3 == ctx->r2) {
        // 0x0026D86C: sw          $s0, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r16;
            goto L_0026DC54;
    }
    goto skip_2;
    // 0x0026D86C: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    skip_2:
    // 0x0026D870: j           L_0026DEE8
    // 0x0026D874: nop

        goto L_0026DEE8;
    // 0x0026D874: nop

L_0026D878:
    // 0x0026D878: addiu       $v0, $zero, 0x2000
    ctx->r2 = ADD32(0, 0X2000);
    // 0x0026D87C: beq         $v1, $v0, L_0026DCC4
    if (ctx->r3 == ctx->r2) {
        // 0x0026D880: sltiu       $v0, $v1, 0x2001
        ctx->r2 = ctx->r3 < 0X2001 ? 1 : 0;
            goto L_0026DCC4;
    }
    // 0x0026D880: sltiu       $v0, $v1, 0x2001
    ctx->r2 = ctx->r3 < 0X2001 ? 1 : 0;
    // 0x0026D884: beq         $v0, $zero, L_0026D89C
    if (ctx->r2 == 0) {
        // 0x0026D888: addiu       $v0, $zero, 0x1000
        ctx->r2 = ADD32(0, 0X1000);
            goto L_0026D89C;
    }
    // 0x0026D888: addiu       $v0, $zero, 0x1000
    ctx->r2 = ADD32(0, 0X1000);
    // 0x0026D88C: beql        $v1, $v0, L_0026DCA0
    if (ctx->r3 == ctx->r2) {
        // 0x0026D890: sw          $s0, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r16;
            goto L_0026DCA0;
    }
    goto skip_3;
    // 0x0026D890: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    skip_3:
    // 0x0026D894: j           L_0026DEE8
    // 0x0026D898: nop

        goto L_0026DEE8;
    // 0x0026D898: nop

L_0026D89C:
    // 0x0026D89C: addiu       $v0, $zero, 0x4000
    ctx->r2 = ADD32(0, 0X4000);
    // 0x0026D8A0: beql        $v1, $v0, L_0026DCEC
    if (ctx->r3 == ctx->r2) {
        // 0x0026D8A4: sw          $s0, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r16;
            goto L_0026DCEC;
    }
    goto skip_4;
    // 0x0026D8A4: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    skip_4:
    // 0x0026D8A8: j           L_0026DEE8
    // 0x0026D8AC: nop

        goto L_0026DEE8;
    // 0x0026D8AC: nop

L_0026D8B0:
    // 0x0026D8B0: beq         $v1, $v0, L_0026DEDC
    if (ctx->r3 == ctx->r2) {
        // 0x0026D8B4: sltu        $v0, $v0, $v1
        ctx->r2 = ctx->r2 < ctx->r3 ? 1 : 0;
            goto L_0026DEDC;
    }
    // 0x0026D8B4: sltu        $v0, $v0, $v1
    ctx->r2 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x0026D8B8: bne         $v0, $zero, L_0026D940
    if (ctx->r2 != 0) {
        // 0x0026D8BC: lui         $v0, 0x800
        ctx->r2 = S32(0X800 << 16);
            goto L_0026D940;
    }
    // 0x0026D8BC: lui         $v0, 0x800
    ctx->r2 = S32(0X800 << 16);
    // 0x0026D8C0: lui         $v0, 0x8
    ctx->r2 = S32(0X8 << 16);
    // 0x0026D8C4: beq         $v1, $v0, L_0026DDA8
    if (ctx->r3 == ctx->r2) {
        // 0x0026D8C8: sltu        $v0, $v0, $v1
        ctx->r2 = ctx->r2 < ctx->r3 ? 1 : 0;
            goto L_0026DDA8;
    }
    // 0x0026D8C8: sltu        $v0, $v0, $v1
    ctx->r2 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x0026D8CC: bne         $v0, $zero, L_0026D90C
    if (ctx->r2 != 0) {
        // 0x0026D8D0: lui         $v0, 0x20
        ctx->r2 = S32(0X20 << 16);
            goto L_0026D90C;
    }
    // 0x0026D8D0: lui         $v0, 0x20
    ctx->r2 = S32(0X20 << 16);
    // 0x0026D8D4: lui         $v0, 0x2
    ctx->r2 = S32(0X2 << 16);
    // 0x0026D8D8: beq         $v1, $v0, L_0026DD5C
    if (ctx->r3 == ctx->r2) {
        // 0x0026D8DC: sltu        $v0, $v0, $v1
        ctx->r2 = ctx->r2 < ctx->r3 ? 1 : 0;
            goto L_0026DD5C;
    }
    // 0x0026D8DC: sltu        $v0, $v0, $v1
    ctx->r2 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x0026D8E0: bne         $v0, $zero, L_0026D8FC
    if (ctx->r2 != 0) {
        // 0x0026D8E4: lui         $v0, 0x4
        ctx->r2 = S32(0X4 << 16);
            goto L_0026D8FC;
    }
    // 0x0026D8E4: lui         $v0, 0x4
    ctx->r2 = S32(0X4 << 16);
    // 0x0026D8E8: lui         $v0, 0x1
    ctx->r2 = S32(0X1 << 16);
    // 0x0026D8EC: beql        $v1, $v0, L_0026DD38
    if (ctx->r3 == ctx->r2) {
        // 0x0026D8F0: sw          $s0, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r16;
            goto L_0026DD38;
    }
    goto skip_5;
    // 0x0026D8F0: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    skip_5:
    // 0x0026D8F4: j           L_0026DEE8
    // 0x0026D8F8: nop

        goto L_0026DEE8;
    // 0x0026D8F8: nop

L_0026D8FC:
    // 0x0026D8FC: beql        $v1, $v0, L_0026DD84
    if (ctx->r3 == ctx->r2) {
        // 0x0026D900: sw          $s0, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r16;
            goto L_0026DD84;
    }
    goto skip_6;
    // 0x0026D900: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    skip_6:
    // 0x0026D904: j           L_0026DEE8
    // 0x0026D908: nop

        goto L_0026DEE8;
    // 0x0026D908: nop

L_0026D90C:
    // 0x0026D90C: beq         $v1, $v0, L_0026DDF4
    if (ctx->r3 == ctx->r2) {
        // 0x0026D910: sltu        $v0, $v0, $v1
        ctx->r2 = ctx->r2 < ctx->r3 ? 1 : 0;
            goto L_0026DDF4;
    }
    // 0x0026D910: sltu        $v0, $v0, $v1
    ctx->r2 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x0026D914: bne         $v0, $zero, L_0026D930
    if (ctx->r2 != 0) {
        // 0x0026D918: lui         $v0, 0x40
        ctx->r2 = S32(0X40 << 16);
            goto L_0026D930;
    }
    // 0x0026D918: lui         $v0, 0x40
    ctx->r2 = S32(0X40 << 16);
    // 0x0026D91C: lui         $v0, 0x10
    ctx->r2 = S32(0X10 << 16);
    // 0x0026D920: beql        $v1, $v0, L_0026DDD0
    if (ctx->r3 == ctx->r2) {
        // 0x0026D924: sw          $s0, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r16;
            goto L_0026DDD0;
    }
    goto skip_7;
    // 0x0026D924: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    skip_7:
    // 0x0026D928: j           L_0026DEE8
    // 0x0026D92C: nop

        goto L_0026DEE8;
    // 0x0026D92C: nop

L_0026D930:
    // 0x0026D930: beql        $v1, $v0, L_0026DE1C
    if (ctx->r3 == ctx->r2) {
        // 0x0026D934: sw          $s0, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r16;
            goto L_0026DE1C;
    }
    goto skip_8;
    // 0x0026D934: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    skip_8:
    // 0x0026D938: j           L_0026DEE8
    // 0x0026D93C: nop

        goto L_0026DEE8;
    // 0x0026D93C: nop

L_0026D940:
    // 0x0026D940: beq         $v1, $v0, L_0026DEB4
    if (ctx->r3 == ctx->r2) {
        // 0x0026D944: sltu        $v0, $v0, $v1
        ctx->r2 = ctx->r2 < ctx->r3 ? 1 : 0;
            goto L_0026DEB4;
    }
    // 0x0026D944: sltu        $v0, $v0, $v1
    ctx->r2 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x0026D948: bne         $v0, $zero, L_0026D988
    if (ctx->r2 != 0) {
        // 0x0026D94C: lui         $v0, 0x2000
        ctx->r2 = S32(0X2000 << 16);
            goto L_0026D988;
    }
    // 0x0026D94C: lui         $v0, 0x2000
    ctx->r2 = S32(0X2000 << 16);
    // 0x0026D950: lui         $v0, 0x200
    ctx->r2 = S32(0X200 << 16);
    // 0x0026D954: beq         $v1, $v0, L_0026DEE4
    if (ctx->r3 == ctx->r2) {
        // 0x0026D958: sltu        $v0, $v0, $v1
        ctx->r2 = ctx->r2 < ctx->r3 ? 1 : 0;
            goto L_0026DEE4;
    }
    // 0x0026D958: sltu        $v0, $v0, $v1
    ctx->r2 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x0026D95C: bne         $v0, $zero, L_0026D978
    if (ctx->r2 != 0) {
        // 0x0026D960: lui         $v0, 0x400
        ctx->r2 = S32(0X400 << 16);
            goto L_0026D978;
    }
    // 0x0026D960: lui         $v0, 0x400
    ctx->r2 = S32(0X400 << 16);
    // 0x0026D964: lui         $v0, 0x100
    ctx->r2 = S32(0X100 << 16);
    // 0x0026D968: beql        $v1, $v0, L_0026DEE8
    if (ctx->r3 == ctx->r2) {
        // 0x0026D96C: addiu       $s2, $zero, 0xA
        ctx->r18 = ADD32(0, 0XA);
            goto L_0026DEE8;
    }
    goto skip_9;
    // 0x0026D96C: addiu       $s2, $zero, 0xA
    ctx->r18 = ADD32(0, 0XA);
    skip_9:
    // 0x0026D970: j           L_0026DEE8
    // 0x0026D974: nop

        goto L_0026DEE8;
    // 0x0026D974: nop

L_0026D978:
    // 0x0026D978: beql        $v1, $v0, L_0026DEE8
    if (ctx->r3 == ctx->r2) {
        // 0x0026D97C: addiu       $s2, $zero, 0x14
        ctx->r18 = ADD32(0, 0X14);
            goto L_0026DEE8;
    }
    goto skip_10;
    // 0x0026D97C: addiu       $s2, $zero, 0x14
    ctx->r18 = ADD32(0, 0X14);
    skip_10:
    // 0x0026D980: j           L_0026DEE8
    // 0x0026D984: nop

        goto L_0026DEE8;
    // 0x0026D984: nop

L_0026D988:
    // 0x0026D988: beq         $v1, $v0, L_0026DE40
    if (ctx->r3 == ctx->r2) {
        // 0x0026D98C: sltu        $v0, $v0, $v1
        ctx->r2 = ctx->r2 < ctx->r3 ? 1 : 0;
            goto L_0026DE40;
    }
    // 0x0026D98C: sltu        $v0, $v0, $v1
    ctx->r2 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x0026D990: bne         $v0, $zero, L_0026D9AC
    if (ctx->r2 != 0) {
        // 0x0026D994: lui         $v0, 0x4000
        ctx->r2 = S32(0X4000 << 16);
            goto L_0026D9AC;
    }
    // 0x0026D994: lui         $v0, 0x4000
    ctx->r2 = S32(0X4000 << 16);
    // 0x0026D998: lui         $v0, 0x1000
    ctx->r2 = S32(0X1000 << 16);
    // 0x0026D99C: beql        $v1, $v0, L_0026DEB8
    if (ctx->r3 == ctx->r2) {
        // 0x0026D9A0: sw          $s0, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r16;
            goto L_0026DEB8;
    }
    goto skip_11;
    // 0x0026D9A0: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    skip_11:
    // 0x0026D9A4: j           L_0026DEE8
    // 0x0026D9A8: nop

        goto L_0026DEE8;
    // 0x0026D9A8: nop

L_0026D9AC:
    // 0x0026D9AC: beq         $v1, $v0, L_0026DE68
    if (ctx->r3 == ctx->r2) {
        // 0x0026D9B0: lui         $v0, 0x8000
        ctx->r2 = S32(0X8000 << 16);
            goto L_0026DE68;
    }
    // 0x0026D9B0: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x0026D9B4: beql        $v1, $v0, L_0026DE90
    if (ctx->r3 == ctx->r2) {
        // 0x0026D9B8: sw          $s0, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r16;
            goto L_0026DE90;
    }
    goto skip_12;
    // 0x0026D9B8: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    skip_12:
    // 0x0026D9BC: j           L_0026DEE8
    // 0x0026D9C0: nop

        goto L_0026DEE8;
    // 0x0026D9C0: nop

L_0026D9C4:
    // 0x0026D9C4: lw          $v0, 0x58($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X58);
    // 0x0026D9C8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0026D9CC: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x0026D9D0: lw          $a2, 0x50($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X50);
    // 0x0026D9D4: lw          $a3, 0x54($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X54);
    // 0x0026D9D8: jal         0x00246690
    // 0x0026D9DC: addiu       $a1, $zero, 0x51
    ctx->r5 = ADD32(0, 0X51);
    func_00246690(rdram, ctx);
        goto after_4;
    // 0x0026D9DC: addiu       $a1, $zero, 0x51
    ctx->r5 = ADD32(0, 0X51);
    after_4:
    // 0x0026D9E0: j           L_0026DEE8
    // 0x0026D9E4: nop

        goto L_0026DEE8;
    // 0x0026D9E4: nop

L_0026D9E8:
    // 0x0026D9E8: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x0026D9EC: lw          $v0, 0x58($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X58);
    // 0x0026D9F0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0026D9F4: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x0026D9F8: lw          $a2, 0x50($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X50);
    // 0x0026D9FC: lw          $a3, 0x54($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X54);
    // 0x0026DA00: jal         0x00246690
    // 0x0026DA04: addiu       $a1, $zero, 0x5C
    ctx->r5 = ADD32(0, 0X5C);
    func_00246690(rdram, ctx);
        goto after_5;
    // 0x0026DA04: addiu       $a1, $zero, 0x5C
    ctx->r5 = ADD32(0, 0X5C);
    after_5:
    // 0x0026DA08: j           L_0026DEE8
    // 0x0026DA0C: nop

        goto L_0026DEE8;
    // 0x0026DA0C: nop

L_0026DA10:
    // 0x0026DA10: lw          $t0, 0x50($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X50);
    // 0x0026DA14: lw          $t1, 0x54($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X54);
    // 0x0026DA18: lw          $t2, 0x58($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X58);
    // 0x0026DA1C: sw          $t0, 0x214($s1)
    MEM_W(0X214, ctx->r17) = ctx->r8;
    // 0x0026DA20: sw          $t1, 0x218($s1)
    MEM_W(0X218, ctx->r17) = ctx->r9;
    // 0x0026DA24: sw          $t2, 0x21C($s1)
    MEM_W(0X21C, ctx->r17) = ctx->r10;
    // 0x0026DA28: lw          $v0, 0x14($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X14);
    // 0x0026DA2C: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
    // 0x0026DA30: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0026DA34: bne         $a0, $v0, L_0026DA4C
    if (ctx->r4 != ctx->r2) {
        // 0x0026DA38: addiu       $v0, $zero, 0xB
        ctx->r2 = ADD32(0, 0XB);
            goto L_0026DA4C;
    }
    // 0x0026DA38: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
    // 0x0026DA3C: lb          $v1, 0x174($s1)
    ctx->r3 = MEM_B(ctx->r17, 0X174);
    // 0x0026DA40: addiu       $v0, $zero, 0x21
    ctx->r2 = ADD32(0, 0X21);
    // 0x0026DA44: beq         $v1, $v0, L_0026DA68
    if (ctx->r3 == ctx->r2) {
        // 0x0026DA48: addiu       $v0, $zero, 0xB
        ctx->r2 = ADD32(0, 0XB);
            goto L_0026DA68;
    }
    // 0x0026DA48: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
L_0026DA4C:
    // 0x0026DA4C: bne         $a0, $v0, L_0026DEE8
    if (ctx->r4 != ctx->r2) {
        // 0x0026DA50: nop
    
            goto L_0026DEE8;
    }
    // 0x0026DA50: nop

    // 0x0026DA54: lw          $v0, 0x1A8($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X1A8);
    // 0x0026DA58: lh          $v1, 0xA08($v0)
    ctx->r3 = MEM_H(ctx->r2, 0XA08);
    // 0x0026DA5C: addiu       $v0, $zero, 0x23
    ctx->r2 = ADD32(0, 0X23);
    // 0x0026DA60: bne         $v1, $v0, L_0026DEE8
    if (ctx->r3 != ctx->r2) {
        // 0x0026DA64: nop
    
            goto L_0026DEE8;
    }
    // 0x0026DA64: nop

L_0026DA68:
    // 0x0026DA68: addiu       $v0, $sp, 0x60
    ctx->r2 = ADD32(ctx->r29, 0X60);
    // 0x0026DA6C: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x0026DA70: addiu       $v0, $sp, 0x98
    ctx->r2 = ADD32(ctx->r29, 0X98);
    // 0x0026DA74: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x0026DA78: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0026DA7C: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x0026DA80: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x0026DA84: lw          $a1, 0x50($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X50);
    // 0x0026DA88: lw          $a2, 0x54($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X54);
    // 0x0026DA8C: lw          $a3, 0x58($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X58);
    // 0x0026DA90: jal         0x002688C8
    // 0x0026DA94: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_002688C8(rdram, ctx);
        goto after_6;
    // 0x0026DA94: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_6:
    // 0x0026DA98: addiu       $a0, $sp, 0x80
    ctx->r4 = ADD32(ctx->r29, 0X80);
    // 0x0026DA9C: jal         0x0020E810
    // 0x0026DAA0: addiu       $a1, $s1, 0x220
    ctx->r5 = ADD32(ctx->r17, 0X220);
    func_0020E810(rdram, ctx);
        goto after_7;
    // 0x0026DAA0: addiu       $a1, $s1, 0x220
    ctx->r5 = ADD32(ctx->r17, 0X220);
    after_7:
    // 0x0026DAA4: sw          $zero, 0x70($sp)
    MEM_W(0X70, ctx->r29) = 0;
    // 0x0026DAA8: sw          $zero, 0x74($sp)
    MEM_W(0X74, ctx->r29) = 0;
    // 0x0026DAAC: sw          $zero, 0x78($sp)
    MEM_W(0X78, ctx->r29) = 0;
    // 0x0026DAB0: lwc1        $f1, 0x180($s1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r17, 0X180);
    // 0x0026DAB4: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0026DAB8: lwc1        $f0, -0x7FD0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X7FD0);
    // 0x0026DABC: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x0026DAC0: nop

    // 0x0026DAC4: bc1f        L_0026DB50
    if (!c1cs) {
        // 0x0026DAC8: addu        $a1, $s1, $zero
        ctx->r5 = ADD32(ctx->r17, 0);
            goto L_0026DB50;
    }
    // 0x0026DAC8: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x0026DACC: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x0026DAD0: addiu       $a0, $a0, -0x76D8
    ctx->r4 = ADD32(ctx->r4, -0X76D8);
    // 0x0026DAD4: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    // 0x0026DAD8: addiu       $v0, $zero, 0xE6
    ctx->r2 = ADD32(0, 0XE6);
    // 0x0026DADC: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x0026DAE0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x0026DAE4: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x0026DAE8: lw          $t0, 0x70($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X70);
    // 0x0026DAEC: lw          $t1, 0x74($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X74);
    // 0x0026DAF0: lw          $t2, 0x78($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X78);
    // 0x0026DAF4: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x0026DAF8: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    // 0x0026DAFC: sw          $t2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r10;
    // 0x0026DB00: lw          $t0, 0x80($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X80);
    // 0x0026DB04: lw          $t1, 0x84($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X84);
    // 0x0026DB08: lw          $t2, 0x88($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X88);
    // 0x0026DB0C: lw          $t3, 0x8C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X8C);
    // 0x0026DB10: sw          $t0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r8;
    // 0x0026DB14: sw          $t1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r9;
    // 0x0026DB18: sw          $t2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r10;
    // 0x0026DB1C: sw          $t3, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r11;
    // 0x0026DB20: lw          $t0, 0x60($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X60);
    // 0x0026DB24: lw          $t1, 0x64($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X64);
    // 0x0026DB28: lw          $t2, 0x68($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X68);
    // 0x0026DB2C: sw          $t0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r8;
    // 0x0026DB30: sw          $t1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r9;
    // 0x0026DB34: sw          $t2, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r10;
    // 0x0026DB38: lw          $v1, 0x98($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X98);
    // 0x0026DB3C: ori         $v0, $s0, 0x1
    ctx->r2 = ctx->r16 | 0X1;
    // 0x0026DB40: sw          $s6, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r22;
    // 0x0026DB44: sw          $v0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r2;
    // 0x0026DB48: jal         0x0022F350
    // 0x0026DB4C: sw          $v1, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r3;
    func_0022F350(rdram, ctx);
        goto after_8;
    // 0x0026DB4C: sw          $v1, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r3;
    after_8:
L_0026DB50:
    // 0x0026DB50: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x0026DB54: addiu       $a0, $a0, -0x76D8
    ctx->r4 = ADD32(ctx->r4, -0X76D8);
    // 0x0026DB58: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x0026DB5C: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    // 0x0026DB60: addiu       $v0, $zero, 0x8A
    ctx->r2 = ADD32(0, 0X8A);
    // 0x0026DB64: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x0026DB68: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x0026DB6C: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x0026DB70: lw          $t0, 0x70($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X70);
    // 0x0026DB74: lw          $t1, 0x74($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X74);
    // 0x0026DB78: lw          $t2, 0x78($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X78);
    // 0x0026DB7C: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x0026DB80: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    // 0x0026DB84: sw          $t2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r10;
    // 0x0026DB88: lw          $t0, 0x80($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X80);
    // 0x0026DB8C: lw          $t1, 0x84($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X84);
    // 0x0026DB90: lw          $t2, 0x88($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X88);
    // 0x0026DB94: lw          $t3, 0x8C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X8C);
    // 0x0026DB98: sw          $t0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r8;
    // 0x0026DB9C: sw          $t1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r9;
    // 0x0026DBA0: sw          $t2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r10;
    // 0x0026DBA4: sw          $t3, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r11;
    // 0x0026DBA8: lw          $t0, 0x60($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X60);
    // 0x0026DBAC: lw          $t1, 0x64($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X64);
    // 0x0026DBB0: lw          $t2, 0x68($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X68);
    // 0x0026DBB4: sw          $t0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r8;
    // 0x0026DBB8: sw          $t1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r9;
    // 0x0026DBBC: sw          $t2, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r10;
    // 0x0026DBC0: lw          $v1, 0x98($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X98);
    // 0x0026DBC4: ori         $v0, $s0, 0x1
    ctx->r2 = ctx->r16 | 0X1;
    // 0x0026DBC8: sw          $s6, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r22;
    // 0x0026DBCC: sw          $v0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r2;
    // 0x0026DBD0: jal         0x0022F350
    // 0x0026DBD4: sw          $v1, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r3;
    func_0022F350(rdram, ctx);
        goto after_9;
    // 0x0026DBD4: sw          $v1, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r3;
    after_9:
    // 0x0026DBD8: j           L_0026DEE8
    // 0x0026DBDC: nop

        goto L_0026DEE8;
    // 0x0026DBDC: nop

L_0026DBE0:
    // 0x0026DBE0: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x0026DBE4: lw          $v0, 0x58($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X58);
    // 0x0026DBE8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0026DBEC: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x0026DBF0: lw          $a2, 0x50($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X50);
    // 0x0026DBF4: lw          $a3, 0x54($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X54);
    // 0x0026DBF8: jal         0x00246690
    // 0x0026DBFC: addiu       $a1, $zero, 0xAC
    ctx->r5 = ADD32(0, 0XAC);
    func_00246690(rdram, ctx);
        goto after_10;
    // 0x0026DBFC: addiu       $a1, $zero, 0xAC
    ctx->r5 = ADD32(0, 0XAC);
    after_10:
    // 0x0026DC00: j           L_0026DEE8
    // 0x0026DC04: nop

        goto L_0026DEE8;
    // 0x0026DC04: nop

L_0026DC08:
    // 0x0026DC08: lw          $v0, 0x58($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X58);
    // 0x0026DC0C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0026DC10: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x0026DC14: lw          $a2, 0x50($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X50);
    // 0x0026DC18: lw          $a3, 0x54($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X54);
    // 0x0026DC1C: jal         0x00246690
    // 0x0026DC20: addiu       $a1, $zero, 0xAD
    ctx->r5 = ADD32(0, 0XAD);
    func_00246690(rdram, ctx);
        goto after_11;
    // 0x0026DC20: addiu       $a1, $zero, 0xAD
    ctx->r5 = ADD32(0, 0XAD);
    after_11:
    // 0x0026DC24: j           L_0026DEE8
    // 0x0026DC28: nop

        goto L_0026DEE8;
    // 0x0026DC28: nop

L_0026DC2C:
    // 0x0026DC2C: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x0026DC30: lw          $v0, 0x58($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X58);
    // 0x0026DC34: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0026DC38: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x0026DC3C: lw          $a2, 0x50($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X50);
    // 0x0026DC40: lw          $a3, 0x54($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X54);
    // 0x0026DC44: jal         0x00246690
    // 0x0026DC48: addiu       $a1, $zero, 0xAE
    ctx->r5 = ADD32(0, 0XAE);
    func_00246690(rdram, ctx);
        goto after_12;
    // 0x0026DC48: addiu       $a1, $zero, 0xAE
    ctx->r5 = ADD32(0, 0XAE);
    after_12:
    // 0x0026DC4C: j           L_0026DEE8
    // 0x0026DC50: nop

        goto L_0026DEE8;
    // 0x0026DC50: nop

L_0026DC54:
    // 0x0026DC54: lw          $v0, 0x58($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X58);
    // 0x0026DC58: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0026DC5C: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x0026DC60: lw          $a2, 0x50($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X50);
    // 0x0026DC64: lw          $a3, 0x54($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X54);
    // 0x0026DC68: jal         0x00246690
    // 0x0026DC6C: addiu       $a1, $zero, 0xAF
    ctx->r5 = ADD32(0, 0XAF);
    func_00246690(rdram, ctx);
        goto after_13;
    // 0x0026DC6C: addiu       $a1, $zero, 0xAF
    ctx->r5 = ADD32(0, 0XAF);
    after_13:
    // 0x0026DC70: j           L_0026DEE8
    // 0x0026DC74: nop

        goto L_0026DEE8;
    // 0x0026DC74: nop

L_0026DC78:
    // 0x0026DC78: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x0026DC7C: lw          $v0, 0x58($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X58);
    // 0x0026DC80: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0026DC84: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x0026DC88: lw          $a2, 0x50($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X50);
    // 0x0026DC8C: lw          $a3, 0x54($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X54);
    // 0x0026DC90: jal         0x00246690
    // 0x0026DC94: addiu       $a1, $zero, 0xB0
    ctx->r5 = ADD32(0, 0XB0);
    func_00246690(rdram, ctx);
        goto after_14;
    // 0x0026DC94: addiu       $a1, $zero, 0xB0
    ctx->r5 = ADD32(0, 0XB0);
    after_14:
    // 0x0026DC98: j           L_0026DEE8
    // 0x0026DC9C: nop

        goto L_0026DEE8;
    // 0x0026DC9C: nop

L_0026DCA0:
    // 0x0026DCA0: lw          $v0, 0x58($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X58);
    // 0x0026DCA4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0026DCA8: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x0026DCAC: lw          $a2, 0x50($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X50);
    // 0x0026DCB0: lw          $a3, 0x54($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X54);
    // 0x0026DCB4: jal         0x00246690
    // 0x0026DCB8: addiu       $a1, $zero, 0xB1
    ctx->r5 = ADD32(0, 0XB1);
    func_00246690(rdram, ctx);
        goto after_15;
    // 0x0026DCB8: addiu       $a1, $zero, 0xB1
    ctx->r5 = ADD32(0, 0XB1);
    after_15:
    // 0x0026DCBC: j           L_0026DEE8
    // 0x0026DCC0: nop

        goto L_0026DEE8;
    // 0x0026DCC0: nop

L_0026DCC4:
    // 0x0026DCC4: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x0026DCC8: lw          $v0, 0x58($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X58);
    // 0x0026DCCC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0026DCD0: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x0026DCD4: lw          $a2, 0x50($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X50);
    // 0x0026DCD8: lw          $a3, 0x54($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X54);
    // 0x0026DCDC: jal         0x00246690
    // 0x0026DCE0: addiu       $a1, $zero, 0xB2
    ctx->r5 = ADD32(0, 0XB2);
    func_00246690(rdram, ctx);
        goto after_16;
    // 0x0026DCE0: addiu       $a1, $zero, 0xB2
    ctx->r5 = ADD32(0, 0XB2);
    after_16:
    // 0x0026DCE4: j           L_0026DEE8
    // 0x0026DCE8: nop

        goto L_0026DEE8;
    // 0x0026DCE8: nop

L_0026DCEC:
    // 0x0026DCEC: lw          $v0, 0x58($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X58);
    // 0x0026DCF0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0026DCF4: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x0026DCF8: lw          $a2, 0x50($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X50);
    // 0x0026DCFC: lw          $a3, 0x54($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X54);
    // 0x0026DD00: jal         0x00246690
    // 0x0026DD04: addiu       $a1, $zero, 0xB3
    ctx->r5 = ADD32(0, 0XB3);
    func_00246690(rdram, ctx);
        goto after_17;
    // 0x0026DD04: addiu       $a1, $zero, 0xB3
    ctx->r5 = ADD32(0, 0XB3);
    after_17:
    // 0x0026DD08: j           L_0026DEE8
    // 0x0026DD0C: nop

        goto L_0026DEE8;
    // 0x0026DD0C: nop

L_0026DD10:
    // 0x0026DD10: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x0026DD14: lw          $v0, 0x58($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X58);
    // 0x0026DD18: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0026DD1C: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x0026DD20: lw          $a2, 0x50($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X50);
    // 0x0026DD24: lw          $a3, 0x54($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X54);
    // 0x0026DD28: jal         0x00246690
    // 0x0026DD2C: addiu       $a1, $zero, 0xB4
    ctx->r5 = ADD32(0, 0XB4);
    func_00246690(rdram, ctx);
        goto after_18;
    // 0x0026DD2C: addiu       $a1, $zero, 0xB4
    ctx->r5 = ADD32(0, 0XB4);
    after_18:
    // 0x0026DD30: j           L_0026DEE8
    // 0x0026DD34: nop

        goto L_0026DEE8;
    // 0x0026DD34: nop

L_0026DD38:
    // 0x0026DD38: lw          $v0, 0x58($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X58);
    // 0x0026DD3C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0026DD40: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x0026DD44: lw          $a2, 0x50($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X50);
    // 0x0026DD48: lw          $a3, 0x54($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X54);
    // 0x0026DD4C: jal         0x00246690
    // 0x0026DD50: addiu       $a1, $zero, 0xB5
    ctx->r5 = ADD32(0, 0XB5);
    func_00246690(rdram, ctx);
        goto after_19;
    // 0x0026DD50: addiu       $a1, $zero, 0xB5
    ctx->r5 = ADD32(0, 0XB5);
    after_19:
    // 0x0026DD54: j           L_0026DEE8
    // 0x0026DD58: nop

        goto L_0026DEE8;
    // 0x0026DD58: nop

L_0026DD5C:
    // 0x0026DD5C: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x0026DD60: lw          $v0, 0x58($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X58);
    // 0x0026DD64: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0026DD68: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x0026DD6C: lw          $a2, 0x50($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X50);
    // 0x0026DD70: lw          $a3, 0x54($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X54);
    // 0x0026DD74: jal         0x00246690
    // 0x0026DD78: addiu       $a1, $zero, 0xB6
    ctx->r5 = ADD32(0, 0XB6);
    func_00246690(rdram, ctx);
        goto after_20;
    // 0x0026DD78: addiu       $a1, $zero, 0xB6
    ctx->r5 = ADD32(0, 0XB6);
    after_20:
    // 0x0026DD7C: j           L_0026DEE8
    // 0x0026DD80: nop

        goto L_0026DEE8;
    // 0x0026DD80: nop

L_0026DD84:
    // 0x0026DD84: lw          $v0, 0x58($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X58);
    // 0x0026DD88: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0026DD8C: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x0026DD90: lw          $a2, 0x50($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X50);
    // 0x0026DD94: lw          $a3, 0x54($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X54);
    // 0x0026DD98: jal         0x00246690
    // 0x0026DD9C: addiu       $a1, $zero, 0xB7
    ctx->r5 = ADD32(0, 0XB7);
    func_00246690(rdram, ctx);
        goto after_21;
    // 0x0026DD9C: addiu       $a1, $zero, 0xB7
    ctx->r5 = ADD32(0, 0XB7);
    after_21:
    // 0x0026DDA0: j           L_0026DEE8
    // 0x0026DDA4: nop

        goto L_0026DEE8;
    // 0x0026DDA4: nop

L_0026DDA8:
    // 0x0026DDA8: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x0026DDAC: lw          $v0, 0x58($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X58);
    // 0x0026DDB0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0026DDB4: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x0026DDB8: lw          $a2, 0x50($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X50);
    // 0x0026DDBC: lw          $a3, 0x54($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X54);
    // 0x0026DDC0: jal         0x00246690
    // 0x0026DDC4: addiu       $a1, $zero, 0xB8
    ctx->r5 = ADD32(0, 0XB8);
    func_00246690(rdram, ctx);
        goto after_22;
    // 0x0026DDC4: addiu       $a1, $zero, 0xB8
    ctx->r5 = ADD32(0, 0XB8);
    after_22:
    // 0x0026DDC8: j           L_0026DEE8
    // 0x0026DDCC: nop

        goto L_0026DEE8;
    // 0x0026DDCC: nop

L_0026DDD0:
    // 0x0026DDD0: lw          $v0, 0x58($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X58);
    // 0x0026DDD4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0026DDD8: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x0026DDDC: lw          $a2, 0x50($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X50);
    // 0x0026DDE0: lw          $a3, 0x54($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X54);
    // 0x0026DDE4: jal         0x00246690
    // 0x0026DDE8: addiu       $a1, $zero, 0xB9
    ctx->r5 = ADD32(0, 0XB9);
    func_00246690(rdram, ctx);
        goto after_23;
    // 0x0026DDE8: addiu       $a1, $zero, 0xB9
    ctx->r5 = ADD32(0, 0XB9);
    after_23:
    // 0x0026DDEC: j           L_0026DEE8
    // 0x0026DDF0: nop

        goto L_0026DEE8;
    // 0x0026DDF0: nop

L_0026DDF4:
    // 0x0026DDF4: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x0026DDF8: lw          $v0, 0x58($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X58);
    // 0x0026DDFC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0026DE00: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x0026DE04: lw          $a2, 0x50($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X50);
    // 0x0026DE08: lw          $a3, 0x54($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X54);
    // 0x0026DE0C: jal         0x00246690
    // 0x0026DE10: addiu       $a1, $zero, 0xBA
    ctx->r5 = ADD32(0, 0XBA);
    func_00246690(rdram, ctx);
        goto after_24;
    // 0x0026DE10: addiu       $a1, $zero, 0xBA
    ctx->r5 = ADD32(0, 0XBA);
    after_24:
    // 0x0026DE14: j           L_0026DEE8
    // 0x0026DE18: nop

        goto L_0026DEE8;
    // 0x0026DE18: nop

L_0026DE1C:
    // 0x0026DE1C: lw          $v0, 0x58($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X58);
    // 0x0026DE20: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0026DE24: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x0026DE28: lw          $a2, 0x50($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X50);
    // 0x0026DE2C: lw          $a3, 0x54($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X54);
    // 0x0026DE30: jal         0x00246690
    // 0x0026DE34: addiu       $a1, $zero, 0xBB
    ctx->r5 = ADD32(0, 0XBB);
    func_00246690(rdram, ctx);
        goto after_25;
    // 0x0026DE34: addiu       $a1, $zero, 0xBB
    ctx->r5 = ADD32(0, 0XBB);
    after_25:
    // 0x0026DE38: j           L_0026DEE8
    // 0x0026DE3C: nop

        goto L_0026DEE8;
    // 0x0026DE3C: nop

L_0026DE40:
    // 0x0026DE40: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x0026DE44: lw          $v0, 0x58($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X58);
    // 0x0026DE48: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0026DE4C: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x0026DE50: lw          $a2, 0x50($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X50);
    // 0x0026DE54: lw          $a3, 0x54($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X54);
    // 0x0026DE58: jal         0x00246690
    // 0x0026DE5C: addiu       $a1, $zero, 0x1E9
    ctx->r5 = ADD32(0, 0X1E9);
    func_00246690(rdram, ctx);
        goto after_26;
    // 0x0026DE5C: addiu       $a1, $zero, 0x1E9
    ctx->r5 = ADD32(0, 0X1E9);
    after_26:
    // 0x0026DE60: j           L_0026DEE8
    // 0x0026DE64: nop

        goto L_0026DEE8;
    // 0x0026DE64: nop

L_0026DE68:
    // 0x0026DE68: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x0026DE6C: lw          $v0, 0x58($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X58);
    // 0x0026DE70: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0026DE74: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x0026DE78: lw          $a2, 0x50($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X50);
    // 0x0026DE7C: lw          $a3, 0x54($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X54);
    // 0x0026DE80: jal         0x00246690
    // 0x0026DE84: addiu       $a1, $zero, 0x1EA
    ctx->r5 = ADD32(0, 0X1EA);
    func_00246690(rdram, ctx);
        goto after_27;
    // 0x0026DE84: addiu       $a1, $zero, 0x1EA
    ctx->r5 = ADD32(0, 0X1EA);
    after_27:
    // 0x0026DE88: j           L_0026DEE8
    // 0x0026DE8C: nop

        goto L_0026DEE8;
    // 0x0026DE8C: nop

L_0026DE90:
    // 0x0026DE90: lw          $v0, 0x58($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X58);
    // 0x0026DE94: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0026DE98: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x0026DE9C: lw          $a2, 0x50($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X50);
    // 0x0026DEA0: lw          $a3, 0x54($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X54);
    // 0x0026DEA4: jal         0x00246690
    // 0x0026DEA8: addiu       $a1, $zero, 0x1EB
    ctx->r5 = ADD32(0, 0X1EB);
    func_00246690(rdram, ctx);
        goto after_28;
    // 0x0026DEA8: addiu       $a1, $zero, 0x1EB
    ctx->r5 = ADD32(0, 0X1EB);
    after_28:
    // 0x0026DEAC: j           L_0026DEE8
    // 0x0026DEB0: nop

        goto L_0026DEE8;
    // 0x0026DEB0: nop

L_0026DEB4:
    // 0x0026DEB4: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
L_0026DEB8:
    // 0x0026DEB8: lw          $v0, 0x58($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X58);
    // 0x0026DEBC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0026DEC0: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x0026DEC4: lw          $a2, 0x50($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X50);
    // 0x0026DEC8: lw          $a3, 0x54($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X54);
    // 0x0026DECC: jal         0x00246690
    // 0x0026DED0: addiu       $a1, $zero, 0x11C
    ctx->r5 = ADD32(0, 0X11C);
    func_00246690(rdram, ctx);
        goto after_29;
    // 0x0026DED0: addiu       $a1, $zero, 0x11C
    ctx->r5 = ADD32(0, 0X11C);
    after_29:
    // 0x0026DED4: j           L_0026DEE8
    // 0x0026DED8: nop

        goto L_0026DEE8;
    // 0x0026DED8: nop

L_0026DEDC:
    // 0x0026DEDC: j           L_0026DEE8
    // 0x0026DEE0: addiu       $s2, $zero, 0x5
    ctx->r18 = ADD32(0, 0X5);
        goto L_0026DEE8;
    // 0x0026DEE0: addiu       $s2, $zero, 0x5
    ctx->r18 = ADD32(0, 0X5);
L_0026DEE4:
    // 0x0026DEE4: addiu       $s2, $zero, 0xF
    ctx->r18 = ADD32(0, 0XF);
L_0026DEE8:
    // 0x0026DEE8: beql        $s2, $zero, L_0026DF74
    if (ctx->r18 == 0) {
        // 0x0026DEEC: addiu       $s3, $s3, 0x14
        ctx->r19 = ADD32(ctx->r19, 0X14);
            goto L_0026DF74;
    }
    goto skip_13;
    // 0x0026DEEC: addiu       $s3, $s3, 0x14
    ctx->r19 = ADD32(ctx->r19, 0X14);
    skip_13:
    // 0x0026DEF0: jal         0x0021F2B0
    // 0x0026DEF4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_0021F2B0(rdram, ctx);
        goto after_30;
    // 0x0026DEF4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_30:
    // 0x0026DEF8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0026DEFC: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x0026DF00: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x0026DF04: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0026DF08: lwc1        $f2, -0x7FCC($at)
    ctx->f2.u32l = MEM_W(ctx->r1, -0X7FCC);
    // 0x0026DF0C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0026DF10: lwc1        $f1, -0x7FC8($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, -0X7FC8);
    // 0x0026DF14: sll         $v0, $s2, 8
    ctx->r2 = S32(ctx->r18 << 8);
    // 0x0026DF18: sh          $v0, 0x92($sp)
    MEM_H(0X92, ctx->r29) = ctx->r2;
    // 0x0026DF1C: div.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = DIV_S(ctx->f2.fl, ctx->f0.fl);
    // 0x0026DF20: mul.s       $f2, $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f1.fl);
    // 0x0026DF24: sb          $zero, 0x97($sp)
    MEM_B(0X97, ctx->r29) = 0;
    // 0x0026DF28: sb          $zero, 0x96($sp)
    MEM_B(0X96, ctx->r29) = 0;
    // 0x0026DF2C: sb          $zero, 0x95($sp)
    MEM_B(0X95, ctx->r29) = 0;
    // 0x0026DF30: sb          $zero, 0x94($sp)
    MEM_B(0X94, ctx->r29) = 0;
    // 0x0026DF34: trunc.w.s   $f3, $f2
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 2);
    ctx->f_odd[(3 - 1) * 2] = TRUNC_W_S(ctx->f2.fl);
    // 0x0026DF38: mfc1        $v0, $f3
    ctx->r2 = (int32_t)ctx->f_odd[(3 - 1) * 2];
    // 0x0026DF3C: sh          $v0, 0x90($sp)
    MEM_H(0X90, ctx->r29) = ctx->r2;
    // 0x0026DF40: lw          $t0, 0x50($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X50);
    // 0x0026DF44: lw          $t1, 0x54($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X54);
    // 0x0026DF48: lw          $t2, 0x58($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X58);
    // 0x0026DF4C: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x0026DF50: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x0026DF54: sw          $t2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r10;
    // 0x0026DF58: lw          $t0, 0x90($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X90);
    // 0x0026DF5C: lw          $t1, 0x94($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X94);
    // 0x0026DF60: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    // 0x0026DF64: sw          $t1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r9;
    // 0x0026DF68: jal         0x00236EA0
    // 0x0026DF6C: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    func_00236EA0(rdram, ctx);
        goto after_31;
    // 0x0026DF6C: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    after_31:
L_0026DF70:
    // 0x0026DF70: addiu       $s3, $s3, 0x14
    ctx->r19 = ADD32(ctx->r19, 0X14);
L_0026DF74:
    // 0x0026DF74: addiu       $s4, $s4, -0x1
    ctx->r20 = ADD32(ctx->r20, -0X1);
    // 0x0026DF78: bne         $s4, $s6, L_0026D75C
    if (ctx->r20 != ctx->r22) {
        // 0x0026DF7C: addiu       $s5, $s5, 0x14
        ctx->r21 = ADD32(ctx->r21, 0X14);
            goto L_0026D75C;
    }
    // 0x0026DF7C: addiu       $s5, $s5, 0x14
    ctx->r21 = ADD32(ctx->r21, 0X14);
L_0026DF80:
    // 0x0026DF80: lw          $ra, 0xC4($sp)
    ctx->r31 = MEM_W(ctx->r29, 0XC4);
    // 0x0026DF84: lw          $fp, 0xC0($sp)
    ctx->r30 = MEM_W(ctx->r29, 0XC0);
    // 0x0026DF88: lw          $s7, 0xBC($sp)
    ctx->r23 = MEM_W(ctx->r29, 0XBC);
    // 0x0026DF8C: lw          $s6, 0xB8($sp)
    ctx->r22 = MEM_W(ctx->r29, 0XB8);
    // 0x0026DF90: lw          $s5, 0xB4($sp)
    ctx->r21 = MEM_W(ctx->r29, 0XB4);
    // 0x0026DF94: lw          $s4, 0xB0($sp)
    ctx->r20 = MEM_W(ctx->r29, 0XB0);
    // 0x0026DF98: lw          $s3, 0xAC($sp)
    ctx->r19 = MEM_W(ctx->r29, 0XAC);
    // 0x0026DF9C: lw          $s2, 0xA8($sp)
    ctx->r18 = MEM_W(ctx->r29, 0XA8);
    // 0x0026DFA0: lw          $s1, 0xA4($sp)
    ctx->r17 = MEM_W(ctx->r29, 0XA4);
    // 0x0026DFA4: lw          $s0, 0xA0($sp)
    ctx->r16 = MEM_W(ctx->r29, 0XA0);
    // 0x0026DFA8: jr          $ra
    // 0x0026DFAC: addiu       $sp, $sp, 0xC8
    ctx->r29 = ADD32(ctx->r29, 0XC8);
    return;
    // 0x0026DFAC: addiu       $sp, $sp, 0xC8
    ctx->r29 = ADD32(ctx->r29, 0XC8);
;}
RECOMP_FUNC void func_00281054(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00281054: sb          $a1, 0x530($a0)
    MEM_B(0X530, ctx->r4) = ctx->r5;
    // 0x00281058: jr          $ra
    // 0x0028105C: sb          $a2, 0x531($a0)
    MEM_B(0X531, ctx->r4) = ctx->r6;
    return;
    // 0x0028105C: sb          $a2, 0x531($a0)
    MEM_B(0X531, ctx->r4) = ctx->r6;
;}
RECOMP_FUNC void func_002748D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002748D0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x002748D4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x002748D8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x002748DC: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x002748E0: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x002748E4: lw          $a0, 0xB0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XB0);
    // 0x002748E8: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x002748EC: addiu       $s1, $a0, 0x7C
    ctx->r17 = ADD32(ctx->r4, 0X7C);
    // 0x002748F0: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x002748F4: addu        $v0, $s1, $v0
    ctx->r2 = ADD32(ctx->r17, ctx->r2);
    // 0x002748F8: lh          $a1, 0x60($v0)
    ctx->r5 = MEM_H(ctx->r2, 0X60);
    // 0x002748FC: jal         0x00293530
    // 0x00274900: addiu       $a0, $a0, 0x84
    ctx->r4 = ADD32(ctx->r4, 0X84);
    func_00293530(rdram, ctx);
        goto after_0;
    // 0x00274900: addiu       $a0, $a0, 0x84
    ctx->r4 = ADD32(ctx->r4, 0X84);
    after_0:
    // 0x00274904: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x00274908: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x0027490C: addu        $s1, $s1, $v0
    ctx->r17 = ADD32(ctx->r17, ctx->r2);
    // 0x00274910: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x00274914: sh          $v0, 0x60($s1)
    MEM_H(0X60, ctx->r17) = ctx->r2;
    // 0x00274918: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x0027491C: sh          $zero, 0x38($s0)
    MEM_H(0X38, ctx->r16) = 0;
    // 0x00274920: sw          $v0, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r2;
    // 0x00274924: sw          $v0, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r2;
    // 0x00274928: sw          $v0, 0xA8($s0)
    MEM_W(0XA8, ctx->r16) = ctx->r2;
    // 0x0027492C: sh          $v0, 0x3A($s0)
    MEM_H(0X3A, ctx->r16) = ctx->r2;
    // 0x00274930: sw          $v0, 0xB4($s0)
    MEM_W(0XB4, ctx->r16) = ctx->r2;
    // 0x00274934: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x00274938: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x0027493C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00274940: jr          $ra
    // 0x00274944: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00274944: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_002284E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002284E0: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x002284E4: sw          $s5, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r21;
    // 0x002284E8: addu        $s5, $a0, $zero
    ctx->r21 = ADD32(ctx->r4, 0);
    // 0x002284EC: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x002284F0: addiu       $a0, $a0, -0xCC
    ctx->r4 = ADD32(ctx->r4, -0XCC);
    // 0x002284F4: sw          $ra, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r31;
    // 0x002284F8: sw          $s4, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r20;
    // 0x002284FC: sw          $s3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r19;
    // 0x00228500: sw          $s2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r18;
    // 0x00228504: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x00228508: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x0022850C: sdc1        $f20, 0x50($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X50, ctx->r29);
    // 0x00228510: jal         0x00228B8C
    // 0x00228514: nop

    func_00228B8C(rdram, ctx);
        goto after_0;
    // 0x00228514: nop

    after_0:
    // 0x00228518: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x0022851C: bne         $s0, $zero, L_00228568
    if (ctx->r16 != 0) {
        // 0x00228520: lui         $a0, 0xD9FF
        ctx->r4 = S32(0XD9FF << 16);
            goto L_00228568;
    }
    // 0x00228520: lui         $a0, 0xD9FF
    ctx->r4 = S32(0XD9FF << 16);
    // 0x00228524: lui         $a2, 0xD9FF
    ctx->r6 = S32(0XD9FF << 16);
    // 0x00228528: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x0022852C: addiu       $a1, $a1, -0x71DC
    ctx->r5 = ADD32(ctx->r5, -0X71DC);
    // 0x00228530: ori         $a2, $a2, 0xFF7F
    ctx->r6 = ctx->r6 | 0XFF7F;
    // 0x00228534: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x00228538: lui         $v1, 0x800F
    ctx->r3 = S32(0X800F << 16);
    // 0x0022853C: lw          $v1, 0x1800($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X1800);
    // 0x00228540: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x00228544: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x00228548: addiu       $v1, $v1, 0x8
    ctx->r3 = ADD32(ctx->r3, 0X8);
    // 0x0022854C: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
    // 0x00228550: sw          $a2, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r6;
    // 0x00228554: sw          $zero, 0x4($a0)
    MEM_W(0X4, ctx->r4) = 0;
    // 0x00228558: lui         $at, 0x800F
    ctx->r1 = S32(0X800F << 16);
    // 0x0022855C: sw          $v1, 0x1800($at)
    MEM_W(0X1800, ctx->r1) = ctx->r3;
    // 0x00228560: j           L_002288A8
    // 0x00228564: nop

        goto L_002288A8;
    // 0x00228564: nop

L_00228568:
    // 0x00228568: ori         $a0, $a0, 0xFFFF
    ctx->r4 = ctx->r4 | 0XFFFF;
    // 0x0022856C: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x00228570: lui         $s3, 0x8000
    ctx->r19 = S32(0X8000 << 16);
    // 0x00228574: lui         $v0, 0x800E
    ctx->r2 = S32(0X800E << 16);
    // 0x00228578: addiu       $v0, $v0, -0x71DC
    ctx->r2 = ADD32(ctx->r2, -0X71DC);
    // 0x0022857C: addu        $s4, $v0, $zero
    ctx->r20 = ADD32(ctx->r2, 0);
    // 0x00228580: lw          $v0, 0x0($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X0);
    // 0x00228584: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00228588: lwc1        $f20, 0x60A0($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X60A0);
    // 0x0022858C: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x00228590: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x00228594: sw          $v0, 0x0($s4)
    MEM_W(0X0, ctx->r20) = ctx->r2;
    // 0x00228598: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x0022859C: sw          $a0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r4;
    // 0x002285A0: sw          $v0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r2;
L_002285A4:
    // 0x002285A4: beq         $s0, $zero, L_00228800
    if (ctx->r16 == 0) {
        // 0x002285A8: nop
    
            goto L_00228800;
    }
    // 0x002285A8: nop

    // 0x002285AC: lh          $v0, 0x16($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X16);
    // 0x002285B0: beq         $v0, $zero, L_00228800
    if (ctx->r2 == 0) {
        // 0x002285B4: addiu       $a0, $s5, 0x20C
        ctx->r4 = ADD32(ctx->r21, 0X20C);
            goto L_00228800;
    }
    // 0x002285B4: addiu       $a0, $s5, 0x20C
    ctx->r4 = ADD32(ctx->r21, 0X20C);
    // 0x002285B8: lh          $v0, 0x10($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X10);
    // 0x002285BC: lw          $s2, 0x8($s0)
    ctx->r18 = MEM_W(ctx->r16, 0X8);
    // 0x002285C0: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x002285C4: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x002285C8: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    // 0x002285CC: lh          $v0, 0x12($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X12);
    // 0x002285D0: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x002285D4: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x002285D8: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x002285DC: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    // 0x002285E0: lh          $v0, 0x14($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X14);
    // 0x002285E4: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    // 0x002285E8: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x002285EC: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x002285F0: jal         0x0020F85C
    // 0x002285F4: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    func_0020F85C(rdram, ctx);
        goto after_1;
    // 0x002285F4: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    after_1:
    // 0x002285F8: lwc1        $f0, 0x20($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X20);
    // 0x002285FC: lui         $v1, 0x800F
    ctx->r3 = S32(0X800F << 16);
    // 0x00228600: lw          $v1, 0x1800($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X1800);
    // 0x00228604: lwc1        $f1, 0x28($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X28);
    // 0x00228608: trunc.w.s   $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x0022860C: mfc1        $v0, $f2
    ctx->r2 = (int32_t)ctx->f2.u32l;
    // 0x00228610: addu        $v1, $s1, $v1
    ctx->r3 = ADD32(ctx->r17, ctx->r3);
    // 0x00228614: sll         $v1, $v1, 4
    ctx->r3 = S32(ctx->r3 << 4);
    // 0x00228618: lwc1        $f0, 0x24($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X24);
    // 0x0022861C: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x00228620: lui         $at, 0x800F
    ctx->r1 = S32(0X800F << 16);
    // 0x00228624: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x00228628: sh          $v0, 0x1400($at)
    MEM_H(0X1400, ctx->r1) = ctx->r2;
    // 0x0022862C: trunc.w.s   $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x00228630: mfc1        $v0, $f2
    ctx->r2 = (int32_t)ctx->f2.u32l;
    // 0x00228634: lui         $at, 0x800F
    ctx->r1 = S32(0X800F << 16);
    // 0x00228638: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x0022863C: sh          $v0, 0x1402($at)
    MEM_H(0X1402, ctx->r1) = ctx->r2;
    // 0x00228640: trunc.w.s   $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    ctx->f2.u32l = TRUNC_W_S(ctx->f1.fl);
    // 0x00228644: mfc1        $v0, $f2
    ctx->r2 = (int32_t)ctx->f2.u32l;
    // 0x00228648: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x0022864C: lui         $at, 0x800F
    ctx->r1 = S32(0X800F << 16);
    // 0x00228650: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x00228654: sh          $v0, 0x1404($at)
    MEM_H(0X1404, ctx->r1) = ctx->r2;
    // 0x00228658: lbu         $v0, 0x7($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X7);
    // 0x0022865C: lwc1        $f1, 0xC($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0XC);
    // 0x00228660: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x00228664: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00228668: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0022866C: c.le.s      $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f20.fl <= ctx->f0.fl;
    // 0x00228670: nop

    // 0x00228674: bc1tl       L_0022868C
    if (c1cs) {
        // 0x00228678: sub.s       $f0, $f0, $f20
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f20.fl;
            goto L_0022868C;
    }
    goto skip_0;
    // 0x00228678: sub.s       $f0, $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f20.fl;
    skip_0:
    // 0x0022867C: trunc.w.s   $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x00228680: mfc1        $v0, $f2
    ctx->r2 = (int32_t)ctx->f2.u32l;
    // 0x00228684: j           L_00228698
    // 0x00228688: nop

        goto L_00228698;
    // 0x00228688: nop

L_0022868C:
    // 0x0022868C: trunc.w.s   $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x00228690: mfc1        $v0, $f2
    ctx->r2 = (int32_t)ctx->f2.u32l;
    // 0x00228694: or          $v0, $v0, $s3
    ctx->r2 = ctx->r2 | ctx->r19;
L_00228698:
    // 0x00228698: lui         $at, 0x800F
    ctx->r1 = S32(0X800F << 16);
    // 0x0022869C: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x002286A0: sb          $v0, 0x1409($at)
    MEM_B(0X1409, ctx->r1) = ctx->r2;
    // 0x002286A4: lbu         $v0, 0x4($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X4);
    // 0x002286A8: lwc1        $f1, 0xC($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0XC);
    // 0x002286AC: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x002286B0: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x002286B4: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x002286B8: lui         $v0, 0x800F
    ctx->r2 = S32(0X800F << 16);
    // 0x002286BC: lw          $v0, 0x1800($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1800);
    // 0x002286C0: addu        $v0, $s1, $v0
    ctx->r2 = ADD32(ctx->r17, ctx->r2);
    // 0x002286C4: c.le.s      $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f20.fl <= ctx->f0.fl;
    // 0x002286C8: nop

    // 0x002286CC: bc1t        L_002286E4
    if (c1cs) {
        // 0x002286D0: sll         $v0, $v0, 4
        ctx->r2 = S32(ctx->r2 << 4);
            goto L_002286E4;
    }
    // 0x002286D0: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x002286D4: trunc.w.s   $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x002286D8: mfc1        $v1, $f2
    ctx->r3 = (int32_t)ctx->f2.u32l;
    // 0x002286DC: j           L_002286F4
    // 0x002286E0: nop

        goto L_002286F4;
    // 0x002286E0: nop

L_002286E4:
    // 0x002286E4: sub.s       $f0, $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f20.fl;
    // 0x002286E8: trunc.w.s   $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x002286EC: mfc1        $v1, $f2
    ctx->r3 = (int32_t)ctx->f2.u32l;
    // 0x002286F0: or          $v1, $v1, $s3
    ctx->r3 = ctx->r3 | ctx->r19;
L_002286F4:
    // 0x002286F4: lui         $at, 0x800F
    ctx->r1 = S32(0X800F << 16);
    // 0x002286F8: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x002286FC: sb          $v1, 0x1408($at)
    MEM_B(0X1408, ctx->r1) = ctx->r3;
    // 0x00228700: lbu         $v0, 0x5($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X5);
    // 0x00228704: lwc1        $f1, 0xC($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0XC);
    // 0x00228708: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x0022870C: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00228710: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00228714: lui         $v0, 0x800F
    ctx->r2 = S32(0X800F << 16);
    // 0x00228718: lw          $v0, 0x1800($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1800);
    // 0x0022871C: addu        $v0, $s1, $v0
    ctx->r2 = ADD32(ctx->r17, ctx->r2);
    // 0x00228720: c.le.s      $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f20.fl <= ctx->f0.fl;
    // 0x00228724: nop

    // 0x00228728: bc1t        L_00228740
    if (c1cs) {
        // 0x0022872C: sll         $v0, $v0, 4
        ctx->r2 = S32(ctx->r2 << 4);
            goto L_00228740;
    }
    // 0x0022872C: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x00228730: trunc.w.s   $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x00228734: mfc1        $v1, $f2
    ctx->r3 = (int32_t)ctx->f2.u32l;
    // 0x00228738: j           L_00228750
    // 0x0022873C: nop

        goto L_00228750;
    // 0x0022873C: nop

L_00228740:
    // 0x00228740: sub.s       $f0, $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f20.fl;
    // 0x00228744: trunc.w.s   $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x00228748: mfc1        $v1, $f2
    ctx->r3 = (int32_t)ctx->f2.u32l;
    // 0x0022874C: or          $v1, $v1, $s3
    ctx->r3 = ctx->r3 | ctx->r19;
L_00228750:
    // 0x00228750: lui         $at, 0x800F
    ctx->r1 = S32(0X800F << 16);
    // 0x00228754: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x00228758: sb          $v1, 0x1407($at)
    MEM_B(0X1407, ctx->r1) = ctx->r3;
    // 0x0022875C: lbu         $v0, 0x6($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X6);
    // 0x00228760: lwc1        $f1, 0xC($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0XC);
    // 0x00228764: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x00228768: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x0022876C: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00228770: lui         $v0, 0x800F
    ctx->r2 = S32(0X800F << 16);
    // 0x00228774: lw          $v0, 0x1800($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1800);
    // 0x00228778: addu        $v0, $s1, $v0
    ctx->r2 = ADD32(ctx->r17, ctx->r2);
    // 0x0022877C: c.le.s      $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f20.fl <= ctx->f0.fl;
    // 0x00228780: nop

    // 0x00228784: bc1t        L_0022879C
    if (c1cs) {
        // 0x00228788: sll         $v0, $v0, 4
        ctx->r2 = S32(ctx->r2 << 4);
            goto L_0022879C;
    }
    // 0x00228788: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x0022878C: trunc.w.s   $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x00228790: mfc1        $v1, $f2
    ctx->r3 = (int32_t)ctx->f2.u32l;
    // 0x00228794: j           L_002287AC
    // 0x00228798: nop

        goto L_002287AC;
    // 0x00228798: nop

L_0022879C:
    // 0x0022879C: sub.s       $f0, $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f20.fl;
    // 0x002287A0: trunc.w.s   $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x002287A4: mfc1        $v1, $f2
    ctx->r3 = (int32_t)ctx->f2.u32l;
    // 0x002287A8: or          $v1, $v1, $s3
    ctx->r3 = ctx->r3 | ctx->r19;
L_002287AC:
    // 0x002287AC: lui         $at, 0x800F
    ctx->r1 = S32(0X800F << 16);
    // 0x002287B0: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x002287B4: sb          $v1, 0x1406($at)
    MEM_B(0X1406, ctx->r1) = ctx->r3;
    // 0x002287B8: lui         $v1, 0x800F
    ctx->r3 = S32(0X800F << 16);
    // 0x002287BC: lw          $v1, 0x1800($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X1800);
    // 0x002287C0: lhu         $v0, 0x0($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X0);
    // 0x002287C4: addu        $v1, $s1, $v1
    ctx->r3 = ADD32(ctx->r17, ctx->r3);
    // 0x002287C8: sll         $v1, $v1, 4
    ctx->r3 = S32(ctx->r3 << 4);
    // 0x002287CC: lui         $at, 0x800F
    ctx->r1 = S32(0X800F << 16);
    // 0x002287D0: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x002287D4: sh          $v0, 0x140A($at)
    MEM_H(0X140A, ctx->r1) = ctx->r2;
    // 0x002287D8: lhu         $a0, 0x2($s2)
    ctx->r4 = MEM_HU(ctx->r18, 0X2);
    // 0x002287DC: addiu       $v0, $zero, 0x7F80
    ctx->r2 = ADD32(0, 0X7F80);
    // 0x002287E0: lui         $at, 0x800F
    ctx->r1 = S32(0X800F << 16);
    // 0x002287E4: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x002287E8: sh          $v0, 0x140E($at)
    MEM_H(0X140E, ctx->r1) = ctx->r2;
    // 0x002287EC: lui         $at, 0x800F
    ctx->r1 = S32(0X800F << 16);
    // 0x002287F0: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x002287F4: sh          $a0, 0x140C($at)
    MEM_H(0X140C, ctx->r1) = ctx->r4;
    // 0x002287F8: j           L_00228820
    // 0x002287FC: nop

        goto L_00228820;
    // 0x002287FC: nop

L_00228800:
    // 0x00228800: lui         $v0, 0x800F
    ctx->r2 = S32(0X800F << 16);
    // 0x00228804: lw          $v0, 0x1800($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1800);
    // 0x00228808: addiu       $v1, $zero, -0x8000
    ctx->r3 = ADD32(0, -0X8000);
    // 0x0022880C: addu        $v0, $s1, $v0
    ctx->r2 = ADD32(ctx->r17, ctx->r2);
    // 0x00228810: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x00228814: lui         $at, 0x800F
    ctx->r1 = S32(0X800F << 16);
    // 0x00228818: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x0022881C: sh          $v1, 0x140A($at)
    MEM_H(0X140A, ctx->r1) = ctx->r3;
L_00228820:
    // 0x00228820: beq         $s0, $zero, L_00228840
    if (ctx->r16 == 0) {
        // 0x00228824: lui         $a2, 0xDC08
        ctx->r6 = S32(0XDC08 << 16);
            goto L_00228840;
    }
    // 0x00228824: lui         $a2, 0xDC08
    ctx->r6 = S32(0XDC08 << 16);
    // 0x00228828: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x0022882C: addiu       $a0, $a0, -0xCC
    ctx->r4 = ADD32(ctx->r4, -0XCC);
    // 0x00228830: jal         0x00228B98
    // 0x00228834: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_00228B98(rdram, ctx);
        goto after_2;
    // 0x00228834: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_2:
    // 0x00228838: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x0022883C: lui         $a2, 0xDC08
    ctx->r6 = S32(0XDC08 << 16);
L_00228840:
    // 0x00228840: ori         $a2, $a2, 0xA
    ctx->r6 = ctx->r6 | 0XA;
    // 0x00228844: addiu       $v0, $s1, 0x1
    ctx->r2 = ADD32(ctx->r17, 0X1);
    // 0x00228848: lw          $v1, 0x0($s4)
    ctx->r3 = MEM_W(ctx->r20, 0X0);
    // 0x0022884C: lui         $a3, 0x800F
    ctx->r7 = S32(0X800F << 16);
    // 0x00228850: lw          $a3, 0x1800($a3)
    ctx->r7 = MEM_W(ctx->r7, 0X1800);
    // 0x00228854: addu        $a1, $v1, $zero
    ctx->r5 = ADD32(ctx->r3, 0);
    // 0x00228858: addiu       $v1, $v1, 0x8
    ctx->r3 = ADD32(ctx->r3, 0X8);
    // 0x0022885C: addu        $a0, $s1, $a3
    ctx->r4 = ADD32(ctx->r17, ctx->r7);
    // 0x00228860: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x00228864: sll         $v0, $s1, 1
    ctx->r2 = S32(ctx->r17 << 1);
    // 0x00228868: addiu       $v0, $v0, 0xA
    ctx->r2 = ADD32(ctx->r2, 0XA);
    // 0x0022886C: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x00228870: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x00228874: or          $v0, $v0, $a2
    ctx->r2 = ctx->r2 | ctx->r6;
    // 0x00228878: sll         $a0, $a0, 4
    ctx->r4 = S32(ctx->r4 << 4);
    // 0x0022887C: sw          $v1, 0x0($s4)
    MEM_W(0X0, ctx->r20) = ctx->r3;
    // 0x00228880: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
    // 0x00228884: lui         $v0, 0x800F
    ctx->r2 = S32(0X800F << 16);
    // 0x00228888: addiu       $v0, $v0, 0x1400
    ctx->r2 = ADD32(ctx->r2, 0X1400);
    // 0x0022888C: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x00228890: slti        $v0, $s1, 0x8
    ctx->r2 = SIGNED(ctx->r17) < 0X8 ? 1 : 0;
    // 0x00228894: bne         $v0, $zero, L_002285A4
    if (ctx->r2 != 0) {
        // 0x00228898: sw          $a0, 0x4($a1)
        MEM_W(0X4, ctx->r5) = ctx->r4;
            goto L_002285A4;
    }
    // 0x00228898: sw          $a0, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r4;
    // 0x0022889C: addiu       $v0, $a3, 0x8
    ctx->r2 = ADD32(ctx->r7, 0X8);
    // 0x002288A0: lui         $at, 0x800F
    ctx->r1 = S32(0X800F << 16);
    // 0x002288A4: sw          $v0, 0x1800($at)
    MEM_W(0X1800, ctx->r1) = ctx->r2;
L_002288A8:
    // 0x002288A8: lw          $ra, 0x48($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X48);
    // 0x002288AC: lw          $s5, 0x44($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X44);
    // 0x002288B0: lw          $s4, 0x40($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X40);
    // 0x002288B4: lw          $s3, 0x3C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X3C);
    // 0x002288B8: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x002288BC: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x002288C0: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x002288C4: ldc1        $f20, 0x50($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X50);
    // 0x002288C8: jr          $ra
    // 0x002288CC: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    return;
    // 0x002288CC: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void func_0023A968(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0023A968: addiu       $sp, $sp, -0x10
    ctx->r29 = ADD32(ctx->r29, -0X10);
    // 0x0023A96C: addiu       $v1, $a0, 0x4C
    ctx->r3 = ADD32(ctx->r4, 0X4C);
    // 0x0023A970: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x0023A974: lwc1        $f0, 0x8($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X8);
    // 0x0023A978: lwc1        $f2, 0x4($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X4);
    // 0x0023A97C: c.le.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl <= ctx->f0.fl;
    // 0x0023A980: nop

    // 0x0023A984: bc1f        L_0023A9D8
    if (!c1cs) {
        // 0x0023A988: addiu       $v0, $v0, 0x4
        ctx->r2 = ADD32(ctx->r2, 0X4);
            goto L_0023A9D8;
    }
    // 0x0023A988: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x0023A98C: lwc1        $f0, 0xC($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0XC);
    // 0x0023A990: lwc1        $f1, 0x8($v0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r2, 0X8);
    // 0x0023A994: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x0023A998: nop

    // 0x0023A99C: bc1f        L_0023A9D8
    if (!c1cs) {
        // 0x0023A9A0: nop
    
            goto L_0023A9D8;
    }
    // 0x0023A9A0: nop

    // 0x0023A9A4: lwc1        $f0, 0x0($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X0);
    // 0x0023A9A8: c.le.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl <= ctx->f2.fl;
    // 0x0023A9AC: nop

    // 0x0023A9B0: bc1f        L_0023A9D8
    if (!c1cs) {
        // 0x0023A9B4: nop
    
            goto L_0023A9D8;
    }
    // 0x0023A9B4: nop

    // 0x0023A9B8: lwc1        $f0, 0x4($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X4);
    // 0x0023A9BC: c.le.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl <= ctx->f1.fl;
    // 0x0023A9C0: nop

    // 0x0023A9C4: bc1f        L_0023A9D8
    if (!c1cs) {
        // 0x0023A9C8: nop
    
            goto L_0023A9D8;
    }
    // 0x0023A9C8: nop

    // 0x0023A9CC: sw          $zero, 0x0($a2)
    MEM_W(0X0, ctx->r6) = 0;
    // 0x0023A9D0: j           L_0023AB10
    // 0x0023A9D4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_0023AB10;
    // 0x0023A9D4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_0023A9D8:
    // 0x0023A9D8: lwc1        $f1, 0x0($v0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r2, 0X0);
    // 0x0023A9DC: lwc1        $f2, 0x0($v1)
    ctx->f2.u32l = MEM_W(ctx->r3, 0X0);
    // 0x0023A9E0: c.eq.s      $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f1.fl == ctx->f2.fl;
    // 0x0023A9E4: nop

    // 0x0023A9E8: bc1t        L_0023AA70
    if (c1cs) {
        // 0x0023A9EC: nop
    
            goto L_0023AA70;
    }
    // 0x0023A9EC: nop

    // 0x0023A9F0: c.lt.s      $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f1.fl < ctx->f2.fl;
    // 0x0023A9F4: nop

    // 0x0023A9F8: bc1f        L_0023AA10
    if (!c1cs) {
        // 0x0023A9FC: nop
    
            goto L_0023AA10;
    }
    // 0x0023A9FC: nop

    // 0x0023AA00: lwc1        $f0, 0x0($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X0);
    // 0x0023AA04: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x0023AA08: j           L_0023AA1C
    // 0x0023AA0C: sub.s       $f1, $f2, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = ctx->f2.fl - ctx->f1.fl;
        goto L_0023AA1C;
    // 0x0023AA0C: sub.s       $f1, $f2, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = ctx->f2.fl - ctx->f1.fl;
L_0023AA10:
    // 0x0023AA10: lwc1        $f0, 0x8($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X8);
    // 0x0023AA14: sub.s       $f0, $f1, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f1.fl - ctx->f0.fl;
    // 0x0023AA18: sub.s       $f1, $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f1.fl = ctx->f1.fl - ctx->f2.fl;
L_0023AA1C:
    // 0x0023AA1C: div.s       $f2, $f0, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f2.fl = DIV_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0023AA20: lwc1        $f0, 0x8($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X8);
    // 0x0023AA24: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x0023AA28: nop

    // 0x0023AA2C: bc1f        L_0023AA70
    if (!c1cs) {
        // 0x0023AA30: nop
    
            goto L_0023AA70;
    }
    // 0x0023AA30: nop

    // 0x0023AA34: lwc1        $f0, 0x60($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X60);
    // 0x0023AA38: mul.s       $f0, $f2, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x0023AA3C: lwc1        $f1, 0x8($v0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r2, 0X8);
    // 0x0023AA40: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x0023AA44: swc1        $f1, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    // 0x0023AA48: lwc1        $f0, 0x4($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X4);
    // 0x0023AA4C: c.le.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl <= ctx->f1.fl;
    // 0x0023AA50: nop

    // 0x0023AA54: bc1f        L_0023AA70
    if (!c1cs) {
        // 0x0023AA58: nop
    
            goto L_0023AA70;
    }
    // 0x0023AA58: nop

    // 0x0023AA5C: lwc1        $f0, 0xC($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0XC);
    // 0x0023AA60: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x0023AA64: nop

    // 0x0023AA68: bc1tl       L_0023AB0C
    if (c1cs) {
        // 0x0023AA6C: swc1        $f2, 0x0($a2)
        MEM_W(0X0, ctx->r6) = ctx->f2.u32l;
            goto L_0023AB0C;
    }
    goto skip_0;
    // 0x0023AA6C: swc1        $f2, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f2.u32l;
    skip_0:
L_0023AA70:
    // 0x0023AA70: lwc1        $f1, 0x8($v0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r2, 0X8);
    // 0x0023AA74: lwc1        $f2, 0x8($v1)
    ctx->f2.u32l = MEM_W(ctx->r3, 0X8);
    // 0x0023AA78: c.eq.s      $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f1.fl == ctx->f2.fl;
    // 0x0023AA7C: nop

    // 0x0023AA80: bc1tl       L_0023AB10
    if (c1cs) {
        // 0x0023AA84: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_0023AB10;
    }
    goto skip_1;
    // 0x0023AA84: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    skip_1:
    // 0x0023AA88: c.lt.s      $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f1.fl < ctx->f2.fl;
    // 0x0023AA8C: nop

    // 0x0023AA90: bc1f        L_0023AAA8
    if (!c1cs) {
        // 0x0023AA94: nop
    
            goto L_0023AAA8;
    }
    // 0x0023AA94: nop

    // 0x0023AA98: lwc1        $f0, 0x4($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X4);
    // 0x0023AA9C: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x0023AAA0: j           L_0023AAB4
    // 0x0023AAA4: sub.s       $f1, $f2, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = ctx->f2.fl - ctx->f1.fl;
        goto L_0023AAB4;
    // 0x0023AAA4: sub.s       $f1, $f2, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = ctx->f2.fl - ctx->f1.fl;
L_0023AAA8:
    // 0x0023AAA8: lwc1        $f0, 0xC($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0XC);
    // 0x0023AAAC: sub.s       $f0, $f1, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f1.fl - ctx->f0.fl;
    // 0x0023AAB0: sub.s       $f1, $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f1.fl = ctx->f1.fl - ctx->f2.fl;
L_0023AAB4:
    // 0x0023AAB4: div.s       $f2, $f0, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f2.fl = DIV_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0023AAB8: lwc1        $f0, 0x8($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X8);
    // 0x0023AABC: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x0023AAC0: nop

    // 0x0023AAC4: bc1fl       L_0023AB10
    if (!c1cs) {
        // 0x0023AAC8: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_0023AB10;
    }
    goto skip_2;
    // 0x0023AAC8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    skip_2:
    // 0x0023AACC: lwc1        $f0, 0x58($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X58);
    // 0x0023AAD0: mul.s       $f0, $f2, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x0023AAD4: lwc1        $f1, 0x0($v0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r2, 0X0);
    // 0x0023AAD8: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x0023AADC: swc1        $f1, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    // 0x0023AAE0: lwc1        $f0, 0x0($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X0);
    // 0x0023AAE4: c.le.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl <= ctx->f1.fl;
    // 0x0023AAE8: nop

    // 0x0023AAEC: bc1f        L_0023AB10
    if (!c1cs) {
        // 0x0023AAF0: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_0023AB10;
    }
    // 0x0023AAF0: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x0023AAF4: lwc1        $f0, 0x8($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X8);
    // 0x0023AAF8: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x0023AAFC: nop

    // 0x0023AB00: bc1f        L_0023AB10
    if (!c1cs) {
        // 0x0023AB04: nop
    
            goto L_0023AB10;
    }
    // 0x0023AB04: nop

    // 0x0023AB08: swc1        $f2, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f2.u32l;
L_0023AB0C:
    // 0x0023AB0C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_0023AB10:
    // 0x0023AB10: jr          $ra
    // 0x0023AB14: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
    return;
    // 0x0023AB14: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
;}
RECOMP_FUNC void func_0022CA90(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0022CA90: addiu       $sp, $sp, -0x78
    ctx->r29 = ADD32(ctx->r29, -0X78);
    // 0x0022CA94: sw          $s5, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r21;
    // 0x0022CA98: lui         $s5, 0x800F
    ctx->r21 = S32(0X800F << 16);
    // 0x0022CA9C: lw          $s5, 0x1CE0($s5)
    ctx->r21 = MEM_W(ctx->r21, 0X1CE0);
    // 0x0022CAA0: sw          $s1, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r17;
    // 0x0022CAA4: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x0022CAA8: sw          $ra, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r31;
    // 0x0022CAAC: sw          $s4, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r20;
    // 0x0022CAB0: sw          $s3, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r19;
    // 0x0022CAB4: sw          $s2, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r18;
    // 0x0022CAB8: sw          $s0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r16;
    // 0x0022CABC: lw          $s3, 0xF8($s1)
    ctx->r19 = MEM_W(ctx->r17, 0XF8);
    // 0x0022CAC0: jal         0x00245724
    // 0x0022CAC4: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    func_00245724(rdram, ctx);
        goto after_0;
    // 0x0022CAC4: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    after_0:
    // 0x0022CAC8: addu        $s2, $v0, $zero
    ctx->r18 = ADD32(ctx->r2, 0);
    // 0x0022CACC: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x0022CAD0: bne         $s2, $v0, L_0022CAE8
    if (ctx->r18 != ctx->r2) {
        // 0x0022CAD4: nop
    
            goto L_0022CAE8;
    }
    // 0x0022CAD4: nop

    // 0x0022CAD8: lw          $v0, 0x40($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X40);
    // 0x0022CADC: addiu       $s2, $zero, 0x4
    ctx->r18 = ADD32(0, 0X4);
    // 0x0022CAE0: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x0022CAE4: sw          $v0, 0x40($s1)
    MEM_W(0X40, ctx->r17) = ctx->r2;
L_0022CAE8:
    // 0x0022CAE8: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x0022CAEC: lbu         $v0, -0x550F($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X550F);
    // 0x0022CAF0: beq         $v0, $zero, L_0022CBE0
    if (ctx->r2 == 0) {
        // 0x0022CAF4: nop
    
            goto L_0022CBE0;
    }
    // 0x0022CAF4: nop

    // 0x0022CAF8: jal         0x002325F0
    // 0x0022CAFC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_002325F0(rdram, ctx);
        goto after_1;
    // 0x0022CAFC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_1:
    // 0x0022CB00: beq         $v0, $zero, L_0022CBE0
    if (ctx->r2 == 0) {
        // 0x0022CB04: nop
    
            goto L_0022CBE0;
    }
    // 0x0022CB04: nop

    // 0x0022CB08: lw          $s0, 0xF8($s1)
    ctx->r16 = MEM_W(ctx->r17, 0XF8);
    // 0x0022CB0C: jal         0x002325F0
    // 0x0022CB10: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_002325F0(rdram, ctx);
        goto after_2;
    // 0x0022CB10: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_2:
    // 0x0022CB14: beq         $v0, $zero, L_0022CB20
    if (ctx->r2 == 0) {
        // 0x0022CB18: addiu       $a0, $zero, 0xA
        ctx->r4 = ADD32(0, 0XA);
            goto L_0022CB20;
    }
    // 0x0022CB18: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    // 0x0022CB1C: addiu       $a0, $zero, 0xC
    ctx->r4 = ADD32(0, 0XC);
L_0022CB20:
    // 0x0022CB20: sll         $a1, $a0, 1
    ctx->r5 = S32(ctx->r4 << 1);
    // 0x0022CB24: lw          $v0, 0x18($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X18);
    // 0x0022CB28: sll         $a0, $a0, 3
    ctx->r4 = S32(ctx->r4 << 3);
    // 0x0022CB2C: addu        $v1, $v0, $a1
    ctx->r3 = ADD32(ctx->r2, ctx->r5);
    // 0x0022CB30: lhu         $s2, 0x70($v1)
    ctx->r18 = MEM_HU(ctx->r3, 0X70);
    // 0x0022CB34: lhu         $a2, 0x8C($v1)
    ctx->r6 = MEM_HU(ctx->r3, 0X8C);
    // 0x0022CB38: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x0022CB3C: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x0022CB40: lw          $t1, 0x4($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X4);
    // 0x0022CB44: sw          $t0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r8;
    // 0x0022CB48: sw          $t1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r9;
    // 0x0022CB4C: lw          $v0, 0x18($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X18);
    // 0x0022CB50: ori         $s0, $zero, 0xFFFF
    ctx->r16 = 0 | 0XFFFF;
    // 0x0022CB54: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x0022CB58: lhu         $s3, 0xA8($v0)
    ctx->r19 = MEM_HU(ctx->r2, 0XA8);
    // 0x0022CB5C: beq         $a2, $s0, L_0022CB98
    if (ctx->r6 == ctx->r16) {
        // 0x0022CB60: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_0022CB98;
    }
    // 0x0022CB60: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0022CB64: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x0022CB68: lw          $t0, 0x4($s1)
    ctx->r8 = MEM_W(ctx->r17, 0X4);
    // 0x0022CB6C: lw          $t1, 0x8($s1)
    ctx->r9 = MEM_W(ctx->r17, 0X8);
    // 0x0022CB70: lw          $t2, 0xC($s1)
    ctx->r10 = MEM_W(ctx->r17, 0XC);
    // 0x0022CB74: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x0022CB78: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x0022CB7C: sw          $t2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r10;
    // 0x0022CB80: lw          $t0, 0x40($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X40);
    // 0x0022CB84: lw          $t1, 0x44($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X44);
    // 0x0022CB88: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    // 0x0022CB8C: sw          $t1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r9;
    // 0x0022CB90: jal         0x00236EA0
    // 0x0022CB94: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    func_00236EA0(rdram, ctx);
        goto after_3;
    // 0x0022CB94: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    after_3:
L_0022CB98:
    // 0x0022CB98: beq         $s2, $s0, L_0022CBB0
    if (ctx->r18 == ctx->r16) {
        // 0x0022CB9C: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_0022CBB0;
    }
    // 0x0022CB9C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0022CBA0: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x0022CBA4: lb          $a2, 0x1AC($s1)
    ctx->r6 = MEM_B(ctx->r17, 0X1AC);
    // 0x0022CBA8: jal         0x00229340
    // 0x0022CBAC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    entry_00229340(rdram, ctx);
        goto after_4;
    // 0x0022CBAC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_4:
L_0022CBB0:
    // 0x0022CBB0: beq         $s3, $s0, L_0022CF04
    if (ctx->r19 == ctx->r16) {
        // 0x0022CBB4: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_0022CF04;
    }
    // 0x0022CBB4: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x0022CBB8: sll         $a0, $s3, 16
    ctx->r4 = S32(ctx->r19 << 16);
    // 0x0022CBBC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x0022CBC0: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x0022CBC4: lw          $a1, 0x4($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X4);
    // 0x0022CBC8: lw          $a2, 0x8($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X8);
    // 0x0022CBCC: lw          $a3, 0xC($s1)
    ctx->r7 = MEM_W(ctx->r17, 0XC);
    // 0x0022CBD0: jal         0x00275544
    // 0x0022CBD4: sra         $a0, $a0, 16
    ctx->r4 = S32(SIGNED(ctx->r4) >> 16);
    func_00275544(rdram, ctx);
        goto after_5;
    // 0x0022CBD4: sra         $a0, $a0, 16
    ctx->r4 = S32(SIGNED(ctx->r4) >> 16);
    after_5:
    // 0x0022CBD8: j           L_0022CF04
    // 0x0022CBDC: nop

        goto L_0022CF04;
    // 0x0022CBDC: nop

L_0022CBE0:
    // 0x0022CBE0: beq         $s2, $zero, L_0022CC00
    if (ctx->r18 == 0) {
        // 0x0022CBE4: nop
    
            goto L_0022CC00;
    }
    // 0x0022CBE4: nop

    // 0x0022CBE8: bltz        $s2, L_0022CC54
    if (SIGNED(ctx->r18) < 0) {
        // 0x0022CBEC: slti        $v0, $s2, 0x4
        ctx->r2 = SIGNED(ctx->r18) < 0X4 ? 1 : 0;
            goto L_0022CC54;
    }
    // 0x0022CBEC: slti        $v0, $s2, 0x4
    ctx->r2 = SIGNED(ctx->r18) < 0X4 ? 1 : 0;
    // 0x0022CBF0: beq         $v0, $zero, L_0022CC54
    if (ctx->r2 == 0) {
        // 0x0022CBF4: slti        $v0, $s2, 0x2
        ctx->r2 = SIGNED(ctx->r18) < 0X2 ? 1 : 0;
            goto L_0022CC54;
    }
    // 0x0022CBF4: slti        $v0, $s2, 0x2
    ctx->r2 = SIGNED(ctx->r18) < 0X2 ? 1 : 0;
    // 0x0022CBF8: bne         $v0, $zero, L_0022CC54
    if (ctx->r2 != 0) {
        // 0x0022CBFC: nop
    
            goto L_0022CC54;
    }
    // 0x0022CBFC: nop

L_0022CC00:
    // 0x0022CC00: lw          $v0, 0x0($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X0);
    // 0x0022CC04: lui         $v1, 0x80
    ctx->r3 = S32(0X80 << 16);
    // 0x0022CC08: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x0022CC0C: beq         $v0, $zero, L_0022CC54
    if (ctx->r2 == 0) {
        // 0x0022CC10: nop
    
            goto L_0022CC54;
    }
    // 0x0022CC10: nop

    // 0x0022CC14: lui         $v0, 0x800F
    ctx->r2 = S32(0X800F << 16);
    // 0x0022CC18: addiu       $v0, $v0, 0x1CE8
    ctx->r2 = ADD32(ctx->r2, 0X1CE8);
    // 0x0022CC1C: lw          $a1, 0x0($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X0);
    // 0x0022CC20: lw          $a2, 0x4($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X4);
    // 0x0022CC24: lw          $a3, 0x8($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X8);
    // 0x0022CC28: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x0022CC2C: addiu       $a0, $a0, 0x2B8
    ctx->r4 = ADD32(ctx->r4, 0X2B8);
    // 0x0022CC30: lw          $t0, 0xDC($v0)
    ctx->r8 = MEM_W(ctx->r2, 0XDC);
    // 0x0022CC34: lw          $t1, 0xE0($v0)
    ctx->r9 = MEM_W(ctx->r2, 0XE0);
    // 0x0022CC38: lw          $t2, 0xE4($v0)
    ctx->r10 = MEM_W(ctx->r2, 0XE4);
    // 0x0022CC3C: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x0022CC40: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x0022CC44: sw          $t2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r10;
    // 0x0022CC48: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x0022CC4C: jal         0x002364A4
    // 0x0022CC50: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    func_002364A4(rdram, ctx);
        goto after_6;
    // 0x0022CC50: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    after_6:
L_0022CC54:
    // 0x0022CC54: lhu         $v1, 0x2($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X2);
    // 0x0022CC58: addiu       $v0, $zero, 0x56
    ctx->r2 = ADD32(0, 0X56);
    // 0x0022CC5C: beq         $v1, $v0, L_0022CC7C
    if (ctx->r3 == ctx->r2) {
        // 0x0022CC60: addiu       $v0, $zero, 0x126
        ctx->r2 = ADD32(0, 0X126);
            goto L_0022CC7C;
    }
    // 0x0022CC60: addiu       $v0, $zero, 0x126
    ctx->r2 = ADD32(0, 0X126);
    // 0x0022CC64: beq         $v1, $v0, L_0022CC7C
    if (ctx->r3 == ctx->r2) {
        // 0x0022CC68: addiu       $v0, $zero, 0xCD
        ctx->r2 = ADD32(0, 0XCD);
            goto L_0022CC7C;
    }
    // 0x0022CC68: addiu       $v0, $zero, 0xCD
    ctx->r2 = ADD32(0, 0XCD);
    // 0x0022CC6C: beq         $v1, $v0, L_0022CC7C
    if (ctx->r3 == ctx->r2) {
        // 0x0022CC70: addiu       $v0, $zero, 0xF
        ctx->r2 = ADD32(0, 0XF);
            goto L_0022CC7C;
    }
    // 0x0022CC70: addiu       $v0, $zero, 0xF
    ctx->r2 = ADD32(0, 0XF);
    // 0x0022CC74: bne         $v1, $v0, L_0022CDB8
    if (ctx->r3 != ctx->r2) {
        // 0x0022CC78: addiu       $s0, $sp, 0x30
        ctx->r16 = ADD32(ctx->r29, 0X30);
            goto L_0022CDB8;
    }
    // 0x0022CC78: addiu       $s0, $sp, 0x30
    ctx->r16 = ADD32(ctx->r29, 0X30);
L_0022CC7C:
    // 0x0022CC7C: addiu       $a0, $sp, 0x48
    ctx->r4 = ADD32(ctx->r29, 0X48);
    // 0x0022CC80: lui         $v1, 0x2
    ctx->r3 = S32(0X2 << 16);
    // 0x0022CC84: lw          $v0, 0x40($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X40);
    // 0x0022CC88: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x0022CC8C: sw          $v0, 0x40($s1)
    MEM_W(0X40, ctx->r17) = ctx->r2;
    // 0x0022CC90: lui         $t3, 0x800F
    ctx->r11 = S32(0X800F << 16);
    // 0x0022CC94: addiu       $t3, $t3, 0x1CE8
    ctx->r11 = ADD32(ctx->r11, 0X1CE8);
    // 0x0022CC98: lw          $t0, 0x0($t3)
    ctx->r8 = MEM_W(ctx->r11, 0X0);
    // 0x0022CC9C: lw          $t1, 0x4($t3)
    ctx->r9 = MEM_W(ctx->r11, 0X4);
    // 0x0022CCA0: lw          $t2, 0x8($t3)
    ctx->r10 = MEM_W(ctx->r11, 0X8);
    // 0x0022CCA4: sw          $t0, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->r8;
    // 0x0022CCA8: sw          $t1, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->r9;
    // 0x0022CCAC: sw          $t2, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->r10;
    // 0x0022CCB0: lui         $t3, 0x800F
    ctx->r11 = S32(0X800F << 16);
    // 0x0022CCB4: addiu       $t3, $t3, 0x1DB8
    ctx->r11 = ADD32(ctx->r11, 0X1DB8);
    // 0x0022CCB8: lw          $t0, 0x0($t3)
    ctx->r8 = MEM_W(ctx->r11, 0X0);
    // 0x0022CCBC: lw          $t1, 0x4($t3)
    ctx->r9 = MEM_W(ctx->r11, 0X4);
    // 0x0022CCC0: lw          $t2, 0x8($t3)
    ctx->r10 = MEM_W(ctx->r11, 0X8);
    // 0x0022CCC4: sw          $t0, 0x18($s1)
    MEM_W(0X18, ctx->r17) = ctx->r8;
    // 0x0022CCC8: sw          $t1, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->r9;
    // 0x0022CCCC: sw          $t2, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->r10;
    // 0x0022CCD0: lui         $t3, 0x800F
    ctx->r11 = S32(0X800F << 16);
    // 0x0022CCD4: addiu       $t3, $t3, 0x1DB8
    ctx->r11 = ADD32(ctx->r11, 0X1DB8);
    // 0x0022CCD8: lw          $t0, 0x0($t3)
    ctx->r8 = MEM_W(ctx->r11, 0X0);
    // 0x0022CCDC: lw          $t1, 0x4($t3)
    ctx->r9 = MEM_W(ctx->r11, 0X4);
    // 0x0022CCE0: lw          $t2, 0x8($t3)
    ctx->r10 = MEM_W(ctx->r11, 0X8);
    // 0x0022CCE4: sw          $t0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r8;
    // 0x0022CCE8: sw          $t1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r9;
    // 0x0022CCEC: sw          $t2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r10;
    // 0x0022CCF0: jal         0x0020F040
    // 0x0022CCF4: addiu       $s0, $s1, 0x4
    ctx->r16 = ADD32(ctx->r17, 0X4);
    func_0020F040(rdram, ctx);
        goto after_7;
    // 0x0022CCF4: addiu       $s0, $s1, 0x4
    ctx->r16 = ADD32(ctx->r17, 0X4);
    after_7:
    // 0x0022CCF8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0022CCFC: lwc1        $f12, 0x621C($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X621C);
    // 0x0022CD00: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x0022CD04: lw          $t0, 0x48($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X48);
    // 0x0022CD08: lw          $t1, 0x4C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X4C);
    // 0x0022CD0C: lw          $t2, 0x50($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X50);
    // 0x0022CD10: sw          $t0, 0x150($s1)
    MEM_W(0X150, ctx->r17) = ctx->r8;
    // 0x0022CD14: sw          $t1, 0x154($s1)
    MEM_W(0X154, ctx->r17) = ctx->r9;
    // 0x0022CD18: sw          $t2, 0x158($s1)
    MEM_W(0X158, ctx->r17) = ctx->r10;
    // 0x0022CD1C: jal         0x002119FC
    // 0x0022CD20: nop

    func_002119FC(rdram, ctx);
        goto after_8;
    // 0x0022CD20: nop

    after_8:
    // 0x0022CD24: addiu       $a0, $sp, 0x48
    ctx->r4 = ADD32(ctx->r29, 0X48);
    // 0x0022CD28: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x0022CD2C: jal         0x0020EF60
    // 0x0022CD30: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    func_0020EF60(rdram, ctx);
        goto after_9;
    // 0x0022CD30: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    after_9:
    // 0x0022CD34: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0022CD38: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x0022CD3C: jal         0x0020EEF8
    // 0x0022CD40: addiu       $a2, $sp, 0x48
    ctx->r6 = ADD32(ctx->r29, 0X48);
    func_0020EEF8(rdram, ctx);
        goto after_10;
    // 0x0022CD40: addiu       $a2, $sp, 0x48
    ctx->r6 = ADD32(ctx->r29, 0X48);
    after_10:
    // 0x0022CD44: lhu         $v1, 0x2($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X2);
    // 0x0022CD48: addiu       $v0, $zero, 0x7F
    ctx->r2 = ADD32(0, 0X7F);
    // 0x0022CD4C: sb          $v0, 0x1AD($s1)
    MEM_B(0X1AD, ctx->r17) = ctx->r2;
    // 0x0022CD50: addiu       $v0, $zero, 0x56
    ctx->r2 = ADD32(0, 0X56);
    // 0x0022CD54: bne         $v1, $v0, L_0022CD70
    if (ctx->r3 != ctx->r2) {
        // 0x0022CD58: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_0022CD70;
    }
    // 0x0022CD58: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x0022CD5C: bne         $s2, $v0, L_0022CD70
    if (ctx->r18 != ctx->r2) {
        // 0x0022CD60: lui         $v1, 0x400
        ctx->r3 = S32(0X400 << 16);
            goto L_0022CD70;
    }
    // 0x0022CD60: lui         $v1, 0x400
    ctx->r3 = S32(0X400 << 16);
    // 0x0022CD64: lw          $v0, 0x40($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X40);
    // 0x0022CD68: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x0022CD6C: sw          $v0, 0x40($s1)
    MEM_W(0X40, ctx->r17) = ctx->r2;
L_0022CD70:
    // 0x0022CD70: lbu         $v0, 0x1B5($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X1B5);
    // 0x0022CD74: beq         $v0, $zero, L_0022CD94
    if (ctx->r2 == 0) {
        // 0x0022CD78: nop
    
            goto L_0022CD94;
    }
    // 0x0022CD78: nop

    // 0x0022CD7C: jal         0x002327F4
    // 0x0022CD80: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_002327F4(rdram, ctx);
        goto after_11;
    // 0x0022CD80: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_11:
    // 0x0022CD84: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x0022CD88: addiu       $a0, $a0, 0x2B8
    ctx->r4 = ADD32(ctx->r4, 0X2B8);
    // 0x0022CD8C: jal         0x00234E48
    // 0x0022CD90: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_00234E48(rdram, ctx);
        goto after_12;
    // 0x0022CD90: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_12:
L_0022CD94:
    // 0x0022CD94: lw          $a1, 0x118($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X118);
    // 0x0022CD98: beq         $a1, $zero, L_0022CDB8
    if (ctx->r5 == 0) {
        // 0x0022CD9C: addiu       $s0, $sp, 0x30
        ctx->r16 = ADD32(ctx->r29, 0X30);
            goto L_0022CDB8;
    }
    // 0x0022CD9C: addiu       $s0, $sp, 0x30
    ctx->r16 = ADD32(ctx->r29, 0X30);
    // 0x0022CDA0: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x0022CDA4: addiu       $a0, $a0, -0xCC
    ctx->r4 = ADD32(ctx->r4, -0XCC);
    // 0x0022CDA8: jal         0x00228B4C
    // 0x0022CDAC: nop

    func_00228B4C(rdram, ctx);
        goto after_13;
    // 0x0022CDAC: nop

    after_13:
    // 0x0022CDB0: sw          $zero, 0x118($s1)
    MEM_W(0X118, ctx->r17) = 0;
    // 0x0022CDB4: addiu       $s0, $sp, 0x30
    ctx->r16 = ADD32(ctx->r29, 0X30);
L_0022CDB8:
    // 0x0022CDB8: lui         $s4, 0x800F
    ctx->r20 = S32(0X800F << 16);
    // 0x0022CDBC: addiu       $s4, $s4, 0x1DC4
    ctx->r20 = ADD32(ctx->r20, 0X1DC4);
    // 0x0022CDC0: lw          $t0, 0x0($s4)
    ctx->r8 = MEM_W(ctx->r20, 0X0);
    // 0x0022CDC4: lw          $t1, 0x4($s4)
    ctx->r9 = MEM_W(ctx->r20, 0X4);
    // 0x0022CDC8: lw          $t2, 0x8($s4)
    ctx->r10 = MEM_W(ctx->r20, 0X8);
    // 0x0022CDCC: sw          $t0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r8;
    // 0x0022CDD0: sw          $t1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r9;
    // 0x0022CDD4: sw          $t2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r10;
    // 0x0022CDD8: jal         0x0020F040
    // 0x0022CDDC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_0020F040(rdram, ctx);
        goto after_14;
    // 0x0022CDDC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_14:
    // 0x0022CDE0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0022CDE4: lui         $a2, 0x3F83
    ctx->r6 = S32(0X3F83 << 16);
    // 0x0022CDE8: ori         $a2, $a2, 0x126F
    ctx->r6 = ctx->r6 | 0X126F;
    // 0x0022CDEC: jal         0x0020EF60
    // 0x0022CDF0: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_0020EF60(rdram, ctx);
        goto after_15;
    // 0x0022CDF0: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_15:
    // 0x0022CDF4: addiu       $a0, $s1, 0x4
    ctx->r4 = ADD32(ctx->r17, 0X4);
    // 0x0022CDF8: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x0022CDFC: jal         0x0020EEF8
    // 0x0022CE00: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    func_0020EEF8(rdram, ctx);
        goto after_16;
    // 0x0022CE00: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    after_16:
    // 0x0022CE04: sll         $a1, $s2, 1
    ctx->r5 = S32(ctx->r18 << 1);
    // 0x0022CE08: lw          $v0, 0x18($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X18);
    // 0x0022CE0C: sll         $a0, $s2, 3
    ctx->r4 = S32(ctx->r18 << 3);
    // 0x0022CE10: addu        $v1, $v0, $a1
    ctx->r3 = ADD32(ctx->r2, ctx->r5);
    // 0x0022CE14: lhu         $s2, 0x70($v1)
    ctx->r18 = MEM_HU(ctx->r3, 0X70);
    // 0x0022CE18: lhu         $a2, 0x8C($v1)
    ctx->r6 = MEM_HU(ctx->r3, 0X8C);
    // 0x0022CE1C: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x0022CE20: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x0022CE24: lw          $t1, 0x4($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X4);
    // 0x0022CE28: sw          $t0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r8;
    // 0x0022CE2C: sw          $t1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r9;
    // 0x0022CE30: lw          $v0, 0x18($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X18);
    // 0x0022CE34: ori         $v1, $zero, 0xFFFF
    ctx->r3 = 0 | 0XFFFF;
    // 0x0022CE38: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x0022CE3C: lhu         $s3, 0xA8($v0)
    ctx->r19 = MEM_HU(ctx->r2, 0XA8);
    // 0x0022CE40: beq         $a2, $v1, L_0022CE98
    if (ctx->r6 == ctx->r3) {
        // 0x0022CE44: sll         $v0, $a2, 3
        ctx->r2 = S32(ctx->r6 << 3);
            goto L_0022CE98;
    }
    // 0x0022CE44: sll         $v0, $a2, 3
    ctx->r2 = S32(ctx->r6 << 3);
    // 0x0022CE48: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0022CE4C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x0022CE50: lw          $v0, -0x2F7C($at)
    ctx->r2 = MEM_W(ctx->r1, -0X2F7C);
    // 0x0022CE54: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x0022CE58: beq         $v0, $zero, L_0022CE64
    if (ctx->r2 == 0) {
        // 0x0022CE5C: addu        $a0, $s5, $zero
        ctx->r4 = ADD32(ctx->r21, 0);
            goto L_0022CE64;
    }
    // 0x0022CE5C: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    // 0x0022CE60: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
L_0022CE64:
    // 0x0022CE64: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x0022CE68: lw          $t0, -0xDC($s4)
    ctx->r8 = MEM_W(ctx->r20, -0XDC);
    // 0x0022CE6C: lw          $t1, -0xD8($s4)
    ctx->r9 = MEM_W(ctx->r20, -0XD8);
    // 0x0022CE70: lw          $t2, -0xD4($s4)
    ctx->r10 = MEM_W(ctx->r20, -0XD4);
    // 0x0022CE74: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x0022CE78: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x0022CE7C: sw          $t2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r10;
    // 0x0022CE80: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x0022CE84: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x0022CE88: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    // 0x0022CE8C: sw          $t1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r9;
    // 0x0022CE90: jal         0x00236EA0
    // 0x0022CE94: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    func_00236EA0(rdram, ctx);
        goto after_17;
    // 0x0022CE94: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    after_17:
L_0022CE98:
    // 0x0022CE98: ori         $s0, $zero, 0xFFFF
    ctx->r16 = 0 | 0XFFFF;
    // 0x0022CE9C: beq         $s2, $s0, L_0022CEB4
    if (ctx->r18 == ctx->r16) {
        // 0x0022CEA0: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_0022CEB4;
    }
    // 0x0022CEA0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0022CEA4: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x0022CEA8: addiu       $a2, $zero, -0x8
    ctx->r6 = ADD32(0, -0X8);
    // 0x0022CEAC: jal         0x00229340
    // 0x0022CEB0: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    entry_00229340(rdram, ctx);
        goto after_18;
    // 0x0022CEB0: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_18:
L_0022CEB4:
    // 0x0022CEB4: beq         $s3, $s0, L_0022CEE4
    if (ctx->r19 == ctx->r16) {
        // 0x0022CEB8: sll         $a0, $s3, 16
        ctx->r4 = S32(ctx->r19 << 16);
            goto L_0022CEE4;
    }
    // 0x0022CEB8: sll         $a0, $s3, 16
    ctx->r4 = S32(ctx->r19 << 16);
    // 0x0022CEBC: lui         $v0, 0x800F
    ctx->r2 = S32(0X800F << 16);
    // 0x0022CEC0: addiu       $v0, $v0, 0x1CE8
    ctx->r2 = ADD32(ctx->r2, 0X1CE8);
    // 0x0022CEC4: sra         $a0, $a0, 16
    ctx->r4 = S32(SIGNED(ctx->r4) >> 16);
    // 0x0022CEC8: lw          $a1, 0x0($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X0);
    // 0x0022CECC: lw          $a2, 0x4($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X4);
    // 0x0022CED0: lw          $a3, 0x8($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X8);
    // 0x0022CED4: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x0022CED8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x0022CEDC: jal         0x00275544
    // 0x0022CEE0: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    func_00275544(rdram, ctx);
        goto after_19;
    // 0x0022CEE0: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    after_19:
L_0022CEE4:
    // 0x0022CEE4: lw          $v0, 0x40($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X40);
    // 0x0022CEE8: lui         $v1, 0x3
    ctx->r3 = S32(0X3 << 16);
    // 0x0022CEEC: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x0022CEF0: bne         $v0, $zero, L_0022CF1C
    if (ctx->r2 != 0) {
        // 0x0022CEF4: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_0022CF1C;
    }
    // 0x0022CEF4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0022CEF8: lb          $v1, 0x195($s1)
    ctx->r3 = MEM_B(ctx->r17, 0X195);
    // 0x0022CEFC: bne         $v1, $v0, L_0022CF1C
    if (ctx->r3 != ctx->r2) {
        // 0x0022CF00: nop
    
            goto L_0022CF1C;
    }
    // 0x0022CF00: nop

L_0022CF04:
    // 0x0022CF04: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x0022CF08: addiu       $a0, $a0, -0x76D8
    ctx->r4 = ADD32(ctx->r4, -0X76D8);
    // 0x0022CF0C: jal         0x0022F1C8
    // 0x0022CF10: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_0022F1C8(rdram, ctx);
        goto after_20;
    // 0x0022CF10: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_20:
    // 0x0022CF14: jal         0x00232B40
    // 0x0022CF18: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_00232B40(rdram, ctx);
        goto after_21;
    // 0x0022CF18: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_21:
L_0022CF1C:
    // 0x0022CF1C: lw          $ra, 0x70($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X70);
    // 0x0022CF20: lw          $s5, 0x6C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X6C);
    // 0x0022CF24: lw          $s4, 0x68($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X68);
    // 0x0022CF28: lw          $s3, 0x64($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X64);
    // 0x0022CF2C: lw          $s2, 0x60($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X60);
    // 0x0022CF30: lw          $s1, 0x5C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X5C);
    // 0x0022CF34: lw          $s0, 0x58($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X58);
    // 0x0022CF38: jr          $ra
    // 0x0022CF3C: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
    return;
    // 0x0022CF3C: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
;}
RECOMP_FUNC void func_00428C38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00428C38: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x00428C3C: addu        $t0, $a1, $zero
    ctx->r8 = ADD32(ctx->r5, 0);
    // 0x00428C40: addu        $t1, $zero, $zero
    ctx->r9 = ADD32(0, 0);
    // 0x00428C44: lui         $a3, 0x8013
    ctx->r7 = S32(0X8013 << 16);
    // 0x00428C48: addiu       $a3, $a3, 0xE20
    ctx->r7 = ADD32(ctx->r7, 0XE20);
    // 0x00428C4C: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x00428C50: addiu       $v1, $v1, 0x13DC
    ctx->r3 = ADD32(ctx->r3, 0X13DC);
    // 0x00428C54: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x00428C58: beq         $v0, $zero, L_00428CE0
    if (ctx->r2 == 0) {
        // 0x00428C5C: addu        $a2, $zero, $zero
        ctx->r6 = ADD32(0, 0);
            goto L_00428CE0;
    }
    // 0x00428C5C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x00428C60: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x00428C64: addu        $t2, $v1, $zero
    ctx->r10 = ADD32(ctx->r3, 0);
    // 0x00428C68: addiu       $a1, $a1, 0x2
    ctx->r5 = ADD32(ctx->r5, 0X2);
L_00428C6C:
    // 0x00428C6C: lwl         $t4, 0x0($a3)
    ctx->r12 = do_lwl(rdram, ctx->r12, ctx->r7, 0X0);
    // 0x00428C70: lwr         $t4, 0x3($a3)
    ctx->r12 = do_lwr(rdram, ctx->r12, ctx->r7, 0X3);
    // 0x00428C74: lwl         $t5, 0x4($a3)
    ctx->r13 = do_lwl(rdram, ctx->r13, ctx->r7, 0X4);
    // 0x00428C78: lwr         $t5, 0x7($a3)
    ctx->r13 = do_lwr(rdram, ctx->r13, ctx->r7, 0X7);
    // 0x00428C7C: swl         $t4, 0x0($sp)
    do_swl(rdram, 0X0, ctx->r29, ctx->r12);
    // 0x00428C80: swr         $t4, 0x3($sp)
    do_swr(rdram, 0X3, ctx->r29, ctx->r12);
    // 0x00428C84: swl         $t5, 0x4($sp)
    do_swl(rdram, 0X4, ctx->r29, ctx->r13);
    // 0x00428C88: swr         $t5, 0x7($sp)
    do_swr(rdram, 0X7, ctx->r29, ctx->r13);
    // 0x00428C8C: lbu         $v0, 0x2($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0X2);
    // 0x00428C90: andi        $v0, $v0, 0xC0
    ctx->r2 = ctx->r2 & 0XC0;
    // 0x00428C94: srl         $v0, $v0, 4
    ctx->r2 = S32(U32(ctx->r2) >> 4);
    // 0x00428C98: bne         $v0, $zero, L_00428CC4
    if (ctx->r2 != 0) {
        // 0x00428C9C: sb          $v0, 0x1($a1)
        MEM_B(0X1, ctx->r5) = ctx->r2;
            goto L_00428CC4;
    }
    // 0x00428C9C: sb          $v0, 0x1($a1)
    MEM_B(0X1, ctx->r5) = ctx->r2;
    // 0x00428CA0: lbu         $v0, 0x5($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0X5);
    // 0x00428CA4: lbu         $v1, 0x4($sp)
    ctx->r3 = MEM_BU(ctx->r29, 0X4);
    // 0x00428CA8: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x00428CAC: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x00428CB0: sllv        $v0, $t3, $a2
    ctx->r2 = S32(ctx->r11 << (ctx->r6 & 31));
    // 0x00428CB4: sh          $v1, 0x0($t0)
    MEM_H(0X0, ctx->r8) = ctx->r3;
    // 0x00428CB8: lbu         $v1, 0x6($sp)
    ctx->r3 = MEM_BU(ctx->r29, 0X6);
    // 0x00428CBC: or          $t1, $t1, $v0
    ctx->r9 = ctx->r9 | ctx->r2;
    // 0x00428CC0: sb          $v1, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r3;
L_00428CC4:
    // 0x00428CC4: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x00428CC8: addiu       $a3, $a3, 0x8
    ctx->r7 = ADD32(ctx->r7, 0X8);
    // 0x00428CCC: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
    // 0x00428CD0: lbu         $v0, 0x0($t2)
    ctx->r2 = MEM_BU(ctx->r10, 0X0);
    // 0x00428CD4: slt         $v0, $a2, $v0
    ctx->r2 = SIGNED(ctx->r6) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x00428CD8: bne         $v0, $zero, L_00428C6C
    if (ctx->r2 != 0) {
        // 0x00428CDC: addiu       $t0, $t0, 0x4
        ctx->r8 = ADD32(ctx->r8, 0X4);
            goto L_00428C6C;
    }
    // 0x00428CDC: addiu       $t0, $t0, 0x4
    ctx->r8 = ADD32(ctx->r8, 0X4);
L_00428CE0:
    // 0x00428CE0: sb          $t1, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r9;
    // 0x00428CE4: jr          $ra
    // 0x00428CE8: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x00428CE8: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_0041931C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041931C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00419320: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00419324: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x00419328: lui         $s0, 0x8012
    ctx->r16 = S32(0X8012 << 16);
    // 0x0041932C: addiu       $s0, $s0, -0x5528
    ctx->r16 = ADD32(ctx->r16, -0X5528);
    // 0x00419330: addu        $a0, $a1, $zero
    ctx->r4 = ADD32(ctx->r5, 0);
    // 0x00419334: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x00419338: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x0041933C: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x00419340: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x00419344: lbu         $v0, 0x2E($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X2E);
    // 0x00419348: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x0041934C: jal         0x0041648C
    // 0x00419350: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    func_0041648C(rdram, ctx);
        goto after_0;
    // 0x00419350: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    after_0:
    // 0x00419354: sb          $v0, 0x2E($s0)
    MEM_B(0X2E, ctx->r16) = ctx->r2;
    // 0x00419358: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x0041935C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x00419360: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x00419364: jr          $ra
    // 0x00419368: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00419368: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_00418388(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00418388: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x0041838C: addiu       $v1, $v1, -0x5350
    ctx->r3 = ADD32(ctx->r3, -0X5350);
    // 0x00418390: lw          $v0, 0x28($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X28);
    // 0x00418394: bne         $v0, $zero, L_004183B4
    if (ctx->r2 != 0) {
        // 0x00418398: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_004183B4;
    }
    // 0x00418398: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0041839C: lw          $v0, 0x1C($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X1C);
    // 0x004183A0: bnel        $v0, $zero, L_004183B8
    if (ctx->r2 != 0) {
        // 0x004183A4: addiu       $a0, $zero, 0x1
        ctx->r4 = ADD32(0, 0X1);
            goto L_004183B8;
    }
    goto skip_0;
    // 0x004183A4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    skip_0:
    // 0x004183A8: lw          $v0, 0x20($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X20);
    // 0x004183AC: beq         $v0, $zero, L_004183B8
    if (ctx->r2 == 0) {
        // 0x004183B0: nop
    
            goto L_004183B8;
    }
    // 0x004183B0: nop

L_004183B4:
    // 0x004183B4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
L_004183B8:
    // 0x004183B8: jr          $ra
    // 0x004183BC: addu        $v0, $a0, $zero
    ctx->r2 = ADD32(ctx->r4, 0);
    return;
    // 0x004183BC: addu        $v0, $a0, $zero
    ctx->r2 = ADD32(ctx->r4, 0);
;}
RECOMP_FUNC void func_0029BDB8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0029BDB8: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x0029BDBC: lw          $v0, -0x76D0($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X76D0);
    // 0x0029BDC0: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0029BDC4: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x0029BDC8: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x0029BDCC: sw          $a0, 0x2A28($at)
    MEM_W(0X2A28, ctx->r1) = ctx->r4;
    // 0x0029BDD0: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x0029BDD4: sw          $a1, 0x2A2C($at)
    MEM_W(0X2A2C, ctx->r1) = ctx->r5;
    // 0x0029BDD8: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x0029BDDC: sw          $zero, 0x2A20($at)
    MEM_W(0X2A20, ctx->r1) = 0;
    // 0x0029BDE0: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x0029BDE4: sw          $zero, 0x2A24($at)
    MEM_W(0X2A24, ctx->r1) = 0;
    // 0x0029BDE8: sw          $a0, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r4;
    // 0x0029BDEC: sw          $a1, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->r5;
    // 0x0029BDF0: sw          $a0, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r4;
    // 0x0029BDF4: sw          $a1, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r5;
    // 0x0029BDF8: sw          $v0, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r2;
    // 0x0029BDFC: sw          $v0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r2;
    // 0x0029BE00: sw          $zero, 0x18($v0)
    MEM_W(0X18, ctx->r2) = 0;
    // 0x0029BE04: jr          $ra
    // 0x0029BE08: sw          $zero, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = 0;
    return;
    // 0x0029BE08: sw          $zero, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = 0;
;}
RECOMP_FUNC void func_0024972C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0024972C: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x00249730: lbu         $v0, -0x550F($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X550F);
    // 0x00249734: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00249738: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0024973C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x00249740: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00249744: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x00249748: bne         $v0, $zero, L_00249758
    if (ctx->r2 != 0) {
        // 0x0024974C: sw          $ra, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->r31;
            goto L_00249758;
    }
    // 0x0024974C: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x00249750: j           L_002497A0
    // 0x00249754: addiu       $a2, $zero, 0x66
    ctx->r6 = ADD32(0, 0X66);
        goto L_002497A0;
    // 0x00249754: addiu       $a2, $zero, 0x66
    ctx->r6 = ADD32(0, 0X66);
L_00249758:
    // 0x00249758: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x0024975C: lw          $v0, -0x531C($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X531C);
    // 0x00249760: beq         $v0, $zero, L_00249788
    if (ctx->r2 == 0) {
        // 0x00249764: nop
    
            goto L_00249788;
    }
    // 0x00249764: nop

    // 0x00249768: lw          $v0, 0x518($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X518);
    // 0x0024976C: lbu         $v0, 0x3E($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X3E);
    // 0x00249770: beq         $v0, $zero, L_00249788
    if (ctx->r2 == 0) {
        // 0x00249774: nop
    
            goto L_00249788;
    }
    // 0x00249774: nop

    // 0x00249778: lui         $a2, 0x800B
    ctx->r6 = S32(0X800B << 16);
    // 0x0024977C: lw          $a2, -0x24A4($a2)
    ctx->r6 = MEM_W(ctx->r6, -0X24A4);
    // 0x00249780: j           L_002497A0
    // 0x00249784: nop

        goto L_002497A0;
    // 0x00249784: nop

L_00249788:
    // 0x00249788: lw          $v0, 0x14($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X14);
    // 0x0024978C: lh          $v0, 0xC($v0)
    ctx->r2 = MEM_H(ctx->r2, 0XC);
    // 0x00249790: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x00249794: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00249798: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x0024979C: lw          $a2, -0x24D0($at)
    ctx->r6 = MEM_W(ctx->r1, -0X24D0);
L_002497A0:
    // 0x002497A0: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x002497A4: addiu       $a0, $a0, 0x7078
    ctx->r4 = ADD32(ctx->r4, 0X7078);
    // 0x002497A8: lw          $a3, 0xC04($s0)
    ctx->r7 = MEM_W(ctx->r16, 0XC04);
    // 0x002497AC: jal         0x002241D8
    // 0x002497B0: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_002241D8(rdram, ctx);
        goto after_0;
    // 0x002497B0: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_0:
    // 0x002497B4: lui         $t0, 0xE300
    ctx->r8 = S32(0XE300 << 16);
    // 0x002497B8: ori         $t0, $t0, 0xA01
    ctx->r8 = ctx->r8 | 0XA01;
    // 0x002497BC: lui         $t1, 0xD9FF
    ctx->r9 = S32(0XD9FF << 16);
    // 0x002497C0: ori         $t1, $t1, 0xFFFF
    ctx->r9 = ctx->r9 | 0XFFFF;
    // 0x002497C4: lui         $t2, 0xDB04
    ctx->r10 = S32(0XDB04 << 16);
    // 0x002497C8: ori         $t2, $t2, 0x4
    ctx->r10 = ctx->r10 | 0X4;
    // 0x002497CC: lui         $t3, 0xDB04
    ctx->r11 = S32(0XDB04 << 16);
    // 0x002497D0: ori         $t3, $t3, 0xC
    ctx->r11 = ctx->r11 | 0XC;
    // 0x002497D4: lui         $t4, 0xDB04
    ctx->r12 = S32(0XDB04 << 16);
    // 0x002497D8: ori         $t4, $t4, 0x14
    ctx->r12 = ctx->r12 | 0X14;
    // 0x002497DC: lui         $t5, 0xDB04
    ctx->r13 = S32(0XDB04 << 16);
    // 0x002497E0: ori         $t5, $t5, 0x1C
    ctx->r13 = ctx->r13 | 0X1C;
    // 0x002497E4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x002497E8: lui         $a2, 0x800E
    ctx->r6 = S32(0X800E << 16);
    // 0x002497EC: addiu       $a2, $a2, -0x71DC
    ctx->r6 = ADD32(ctx->r6, -0X71DC);
    // 0x002497F0: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x002497F4: lw          $v0, 0x0($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X0);
    // 0x002497F8: lui         $v1, 0xE700
    ctx->r3 = S32(0XE700 << 16);
    // 0x002497FC: addu        $a3, $v0, $zero
    ctx->r7 = ADD32(ctx->r2, 0);
    // 0x00249800: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x00249804: sw          $v0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r2;
    // 0x00249808: sw          $v1, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r3;
    // 0x0024980C: sw          $zero, 0x4($a3)
    MEM_W(0X4, ctx->r7) = 0;
    // 0x00249810: addiu       $a3, $v0, 0x8
    ctx->r7 = ADD32(ctx->r2, 0X8);
    // 0x00249814: lui         $v1, 0x10
    ctx->r3 = S32(0X10 << 16);
    // 0x00249818: sw          $a3, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r7;
    // 0x0024981C: sw          $t0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r8;
    // 0x00249820: addiu       $t0, $v0, 0x10
    ctx->r8 = ADD32(ctx->r2, 0X10);
    // 0x00249824: sw          $v1, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r3;
    // 0x00249828: lui         $v1, 0x1
    ctx->r3 = S32(0X1 << 16);
    // 0x0024982C: sw          $t0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r8;
    // 0x00249830: sw          $t1, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r9;
    // 0x00249834: sw          $v1, 0x4($a3)
    MEM_W(0X4, ctx->r7) = ctx->r3;
    // 0x00249838: addiu       $a3, $v0, 0x18
    ctx->r7 = ADD32(ctx->r2, 0X18);
    // 0x0024983C: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
    // 0x00249840: sw          $a3, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r7;
    // 0x00249844: sw          $t2, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r10;
    // 0x00249848: sw          $v1, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r3;
    // 0x0024984C: addiu       $t0, $v0, 0x20
    ctx->r8 = ADD32(ctx->r2, 0X20);
    // 0x00249850: addiu       $t1, $v0, 0x28
    ctx->r9 = ADD32(ctx->r2, 0X28);
    // 0x00249854: sw          $t0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r8;
    // 0x00249858: sw          $t3, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->r11;
    // 0x0024985C: sw          $v1, 0x4($a3)
    MEM_W(0X4, ctx->r7) = ctx->r3;
    // 0x00249860: ori         $a3, $zero, 0xFFFE
    ctx->r7 = 0 | 0XFFFE;
    // 0x00249864: addiu       $v1, $v0, 0x30
    ctx->r3 = ADD32(ctx->r2, 0X30);
    // 0x00249868: sw          $t1, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r9;
    // 0x0024986C: sw          $t4, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->r12;
    // 0x00249870: sw          $a3, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r7;
    // 0x00249874: sw          $v1, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r3;
    // 0x00249878: sw          $t5, 0x28($v0)
    MEM_W(0X28, ctx->r2) = ctx->r13;
    // 0x0024987C: jal         0x0021D39C
    // 0x00249880: sw          $a3, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r7;
    func_0021D39C(rdram, ctx);
        goto after_1;
    // 0x00249880: sw          $a3, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r7;
    after_1:
    // 0x00249884: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x00249888: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x0024988C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00249890: jr          $ra
    // 0x00249894: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00249894: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_00231A00(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00231A00: addiu       $sp, $sp, -0x80
    ctx->r29 = ADD32(ctx->r29, -0X80);
    // 0x00231A04: sw          $s0, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r16;
    // 0x00231A08: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x00231A0C: sw          $ra, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r31;
    // 0x00231A10: sw          $s1, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r17;
    // 0x00231A14: lw          $v0, 0xF8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XF8);
    // 0x00231A18: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x00231A1C: andi        $v0, $v0, 0x10
    ctx->r2 = ctx->r2 & 0X10;
    // 0x00231A20: beq         $v0, $zero, L_00231A50
    if (ctx->r2 == 0) {
        // 0x00231A24: addu        $s1, $a1, $zero
        ctx->r17 = ADD32(ctx->r5, 0);
            goto L_00231A50;
    }
    // 0x00231A24: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x00231A28: lui         $t3, 0x800F
    ctx->r11 = S32(0X800F << 16);
    // 0x00231A2C: addiu       $t3, $t3, 0x1DB8
    ctx->r11 = ADD32(ctx->r11, 0X1DB8);
    // 0x00231A30: lw          $t0, 0x0($t3)
    ctx->r8 = MEM_W(ctx->r11, 0X0);
    // 0x00231A34: lw          $t1, 0x4($t3)
    ctx->r9 = MEM_W(ctx->r11, 0X4);
    // 0x00231A38: lw          $t2, 0x8($t3)
    ctx->r10 = MEM_W(ctx->r11, 0X8);
    // 0x00231A3C: sw          $t0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r8;
    // 0x00231A40: sw          $t1, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r9;
    // 0x00231A44: sw          $t2, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r10;
    // 0x00231A48: j           L_00231A6C
    // 0x00231A4C: addiu       $a0, $sp, 0x50
    ctx->r4 = ADD32(ctx->r29, 0X50);
        goto L_00231A6C;
    // 0x00231A4C: addiu       $a0, $sp, 0x50
    ctx->r4 = ADD32(ctx->r29, 0X50);
L_00231A50:
    // 0x00231A50: lw          $t0, 0x18($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X18);
    // 0x00231A54: lw          $t1, 0x1C($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X1C);
    // 0x00231A58: lw          $t2, 0x20($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X20);
    // 0x00231A5C: sw          $t0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r8;
    // 0x00231A60: sw          $t1, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r9;
    // 0x00231A64: sw          $t2, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r10;
    // 0x00231A68: addiu       $a0, $sp, 0x50
    ctx->r4 = ADD32(ctx->r29, 0X50);
L_00231A6C:
    // 0x00231A6C: jal         0x0020E810
    // 0x00231A70: addiu       $a1, $sp, 0x60
    ctx->r5 = ADD32(ctx->r29, 0X60);
    func_0020E810(rdram, ctx);
        goto after_0;
    // 0x00231A70: addiu       $a1, $sp, 0x60
    ctx->r5 = ADD32(ctx->r29, 0X60);
    after_0:
    // 0x00231A74: lui         $a1, 0x20
    ctx->r5 = S32(0X20 << 16);
    // 0x00231A78: lui         $v1, 0x800F
    ctx->r3 = S32(0X800F << 16);
    // 0x00231A7C: addiu       $v1, $v1, 0x1D98
    ctx->r3 = ADD32(ctx->r3, 0X1D98);
    // 0x00231A80: lw          $v0, 0x114($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X114);
    // 0x00231A84: lw          $a0, -0x4($v1)
    ctx->r4 = MEM_W(ctx->r3, -0X4);
    // 0x00231A88: ori         $a1, $a1, 0x6
    ctx->r5 = ctx->r5 | 0X6;
    // 0x00231A8C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00231A90: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x00231A94: addiu       $v0, $zero, -0x3
    ctx->r2 = ADD32(0, -0X3);
    // 0x00231A98: lw          $t0, 0x60($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X60);
    // 0x00231A9C: lw          $t1, 0x64($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X64);
    // 0x00231AA0: lw          $t2, 0x68($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X68);
    // 0x00231AA4: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x00231AA8: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    // 0x00231AAC: sw          $t2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r10;
    // 0x00231AB0: lw          $t0, 0x50($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X50);
    // 0x00231AB4: lw          $t1, 0x54($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X54);
    // 0x00231AB8: lw          $t2, 0x58($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X58);
    // 0x00231ABC: lw          $t3, 0x5C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X5C);
    // 0x00231AC0: sw          $t0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r8;
    // 0x00231AC4: sw          $t1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r9;
    // 0x00231AC8: sw          $t2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r10;
    // 0x00231ACC: sw          $t3, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r11;
    // 0x00231AD0: lw          $t0, 0x0($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X0);
    // 0x00231AD4: lw          $t1, 0x4($v1)
    ctx->r9 = MEM_W(ctx->r3, 0X4);
    // 0x00231AD8: lw          $t2, 0x8($v1)
    ctx->r10 = MEM_W(ctx->r3, 0X8);
    // 0x00231ADC: sw          $t0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r8;
    // 0x00231AE0: sw          $t1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r9;
    // 0x00231AE4: sw          $t2, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r10;
    // 0x00231AE8: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    // 0x00231AEC: sw          $v0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r2;
    // 0x00231AF0: lw          $v0, 0x40($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X40);
    // 0x00231AF4: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x00231AF8: addiu       $a0, $a0, -0x76D8
    ctx->r4 = ADD32(ctx->r4, -0X76D8);
    // 0x00231AFC: and         $v0, $v0, $a1
    ctx->r2 = ctx->r2 & ctx->r5;
    // 0x00231B00: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x00231B04: sw          $v0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r2;
    // 0x00231B08: lw          $a2, 0x10C($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X10C);
    // 0x00231B0C: lw          $a3, 0x110($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X110);
    // 0x00231B10: jal         0x0022F350
    // 0x00231B14: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_0022F350(rdram, ctx);
        goto after_1;
    // 0x00231B14: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_1:
    // 0x00231B18: lw          $ra, 0x78($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X78);
    // 0x00231B1C: lw          $s1, 0x74($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X74);
    // 0x00231B20: lw          $s0, 0x70($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X70);
    // 0x00231B24: jr          $ra
    // 0x00231B28: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
    return;
    // 0x00231B28: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
;}
RECOMP_FUNC void func_0040B308(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0040B308: jr          $ra
    // 0x0040B30C: nop

    return;
    // 0x0040B30C: nop

;}
RECOMP_FUNC void func_0040DCD4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0040DCD4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0040DCD8: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x0040DCDC: lb          $v0, 0xC7($a1)
    ctx->r2 = MEM_B(ctx->r5, 0XC7);
    // 0x0040DCE0: beq         $v0, $zero, L_0040DCF0
    if (ctx->r2 == 0) {
        // 0x0040DCE4: nop
    
            goto L_0040DCF0;
    }
    // 0x0040DCE4: nop

    // 0x0040DCE8: jal         0x00243414
    // 0x0040DCEC: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    func_00243414(rdram, ctx);
        goto after_0;
    // 0x0040DCEC: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_0:
L_0040DCF0:
    // 0x0040DCF0: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x0040DCF4: jr          $ra
    // 0x0040DCF8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0040DCF8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00251828(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00251828: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x0025182C: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x00251830: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x00251834: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x00251838: lui         $a2, 0x800B
    ctx->r6 = S32(0X800B << 16);
    // 0x0025183C: addiu       $a2, $a2, -0x2190
    ctx->r6 = ADD32(ctx->r6, -0X2190);
    // 0x00251840: sw          $ra, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r31;
    // 0x00251844: jal         0x0024EF70
    // 0x00251848: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    func_0024EF70(rdram, ctx);
        goto after_0;
    // 0x00251848: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    after_0:
    // 0x0025184C: lwc1        $f0, 0xB98($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0XB98);
    // 0x00251850: lwc1        $f2, 0x50($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X50);
    // 0x00251854: lwc1        $f3, 0xB9C($s0)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r16, 0XB9C);
    // 0x00251858: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0025185C: lwc1        $f1, 0x6D28($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X6D28);
    // 0x00251860: c.eq.s      $f3, $f2
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f3.fl == ctx->f2.fl;
    // 0x00251864: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x00251868: swc1        $f2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f2.u32l;
    // 0x0025186C: swc1        $f3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f_odd[(3 - 1) * 2];
    // 0x00251870: bc1t        L_00251940
    if (c1cs) {
        // 0x00251874: swc1        $f0, 0xB98($s0)
        MEM_W(0XB98, ctx->r16) = ctx->f0.u32l;
            goto L_00251940;
    }
    // 0x00251874: swc1        $f0, 0xB98($s0)
    MEM_W(0XB98, ctx->r16) = ctx->f0.u32l;
    // 0x00251878: jal         0x00210EF0
    // 0x0025187C: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    func_00210EF0(rdram, ctx);
        goto after_1;
    // 0x0025187C: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    after_1:
    // 0x00251880: jal         0x00210EF0
    // 0x00251884: addiu       $a0, $sp, 0x24
    ctx->r4 = ADD32(ctx->r29, 0X24);
    func_00210EF0(rdram, ctx);
        goto after_2;
    // 0x00251884: addiu       $a0, $sp, 0x24
    ctx->r4 = ADD32(ctx->r29, 0X24);
    after_2:
    // 0x00251888: lwc1        $f4, 0x20($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X20);
    // 0x0025188C: lwc1        $f2, 0x24($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X24);
    // 0x00251890: c.lt.s      $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f2.fl < ctx->f4.fl;
    // 0x00251894: nop

    // 0x00251898: bc1f        L_002518B8
    if (!c1cs) {
        // 0x0025189C: nop
    
            goto L_002518B8;
    }
    // 0x0025189C: nop

    // 0x002518A0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002518A4: lwc1        $f0, 0x7018($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X7018);
    // 0x002518A8: add.s       $f3, $f2, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f3.fl = ctx->f2.fl + ctx->f0.fl;
    // 0x002518AC: sub.s       $f0, $f4, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f4.fl - ctx->f2.fl;
    // 0x002518B0: j           L_002518CC
    // 0x002518B4: sub.s       $f1, $f3, $f4
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f1.fl = ctx->f3.fl - ctx->f4.fl;
        goto L_002518CC;
    // 0x002518B4: sub.s       $f1, $f3, $f4
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f1.fl = ctx->f3.fl - ctx->f4.fl;
L_002518B8:
    // 0x002518B8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002518BC: lwc1        $f0, 0x701C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X701C);
    // 0x002518C0: sub.s       $f3, $f2, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f3.fl = ctx->f2.fl - ctx->f0.fl;
    // 0x002518C4: sub.s       $f0, $f2, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f4.fl;
    // 0x002518C8: sub.s       $f1, $f4, $f3
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f1.fl = ctx->f4.fl - ctx->f3.fl;
L_002518CC:
    // 0x002518CC: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x002518D0: nop

    // 0x002518D4: bc1tl       L_002518DC
    if (c1cs) {
        // 0x002518D8: swc1        $f3, 0x24($sp)
        MEM_W(0X24, ctx->r29) = ctx->f_odd[(3 - 1) * 2];
            goto L_002518DC;
    }
    goto skip_0;
    // 0x002518D8: swc1        $f3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f_odd[(3 - 1) * 2];
    skip_0:
L_002518DC:
    // 0x002518DC: lwc1        $f2, 0x24($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X24);
    // 0x002518E0: lwc1        $f3, 0x20($sp)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x002518E4: c.lt.s      $f3, $f2
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f3.fl < ctx->f2.fl;
    // 0x002518E8: nop

    // 0x002518EC: bc1fl       L_00251914
    if (!c1cs) {
        // 0x002518F0: sub.s       $f0, $f3, $f2
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f3.fl - ctx->f2.fl;
            goto L_00251914;
    }
    goto skip_1;
    // 0x002518F0: sub.s       $f0, $f3, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f3.fl - ctx->f2.fl;
    skip_1:
    // 0x002518F4: sub.s       $f0, $f2, $f3
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f3.fl;
    // 0x002518F8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002518FC: lwc1        $f1, 0x7020($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X7020);
    // 0x00251900: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00251904: add.s       $f0, $f3, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f3.fl + ctx->f0.fl;
    // 0x00251908: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x0025190C: j           L_0025192C
    // 0x00251910: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
        goto L_0025192C;
    // 0x00251910: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
L_00251914:
    // 0x00251914: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00251918: lwc1        $f1, 0x7024($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X7024);
    // 0x0025191C: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00251920: sub.s       $f0, $f3, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f3.fl - ctx->f0.fl;
    // 0x00251924: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    // 0x00251928: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
L_0025192C:
    // 0x0025192C: nop

    // 0x00251930: bc1tl       L_00251938
    if (c1cs) {
        // 0x00251934: swc1        $f2, 0x20($sp)
        MEM_W(0X20, ctx->r29) = ctx->f2.u32l;
            goto L_00251938;
    }
    goto skip_2;
    // 0x00251934: swc1        $f2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f2.u32l;
    skip_2:
L_00251938:
    // 0x00251938: jal         0x00210EF0
    // 0x0025193C: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    func_00210EF0(rdram, ctx);
        goto after_3;
    // 0x0025193C: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    after_3:
L_00251940:
    // 0x00251940: lwc1        $f0, 0x20($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X20);
    // 0x00251944: lw          $a0, 0xBA0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XBA0);
    // 0x00251948: swc1        $f0, 0x2D8($s0)
    MEM_W(0X2D8, ctx->r16) = ctx->f0.u32l;
    // 0x0025194C: swc1        $f0, 0x50($s0)
    MEM_W(0X50, ctx->r16) = ctx->f0.u32l;
    // 0x00251950: lbu         $v1, 0x5E($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X5E);
    // 0x00251954: lwc1        $f2, 0xB98($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0XB98);
    // 0x00251958: sll         $v0, $v1, 4
    ctx->r2 = S32(ctx->r3 << 4);
    // 0x0025195C: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x00251960: mtc1        $v0, $f3
    ctx->f_odd[(3 - 1) * 2] = ctx->r2;
    // 0x00251964: cvt.s.w     $f3, $f3
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    ctx->f3.fl = CVT_S_W(ctx->f_odd[(3 - 1) * 2]);
    // 0x00251968: c.lt.s      $f2, $f3
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 3);
    c1cs = ctx->f2.fl < ctx->f3.fl;
    // 0x0025196C: nop

    // 0x00251970: bc1fl       L_00251A0C
    if (!c1cs) {
        // 0x00251974: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_00251A0C;
    }
    goto skip_3;
    // 0x00251974: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    skip_3:
    // 0x00251978: lwc1        $f0, 0x34($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X34);
    // 0x0025197C: lwc1        $f1, 0xBA4($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0XBA4);
    // 0x00251980: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x00251984: div.s       $f2, $f2, $f3
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f2.fl = DIV_S(ctx->f2.fl, ctx->f3.fl);
    // 0x00251988: mul.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f2.fl);
    // 0x0025198C: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x00251990: swc1        $f1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    // 0x00251994: lw          $v0, 0xBA0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XBA0);
    // 0x00251998: lwc1        $f1, 0xBAC($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0XBAC);
    // 0x0025199C: lwc1        $f0, 0x3C($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X3C);
    // 0x002519A0: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x002519A4: mul.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f2.fl);
    // 0x002519A8: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x002519AC: mul.s       $f0, $f2, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x002519B0: swc1        $f1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    // 0x002519B4: lw          $v0, 0xBA0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XBA0);
    // 0x002519B8: lwc1        $f1, 0xBA8($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0XBA8);
    // 0x002519BC: lwc1        $f3, 0x38($v0)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r2, 0X38);
    // 0x002519C0: sub.s       $f3, $f3, $f1
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f3.fl = ctx->f3.fl - ctx->f1.fl;
    // 0x002519C4: mul.s       $f3, $f3, $f2
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f3.fl = MUL_S(ctx->f3.fl, ctx->f2.fl);
    // 0x002519C8: sub.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f2.fl - ctx->f0.fl;
    // 0x002519CC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002519D0: lwc1        $f0, 0x7028($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X7028);
    // 0x002519D4: mul.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x002519D8: lwc1        $f0, 0x40($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X40);
    // 0x002519DC: mul.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f2.fl);
    // 0x002519E0: add.s       $f1, $f1, $f3
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f3.fl;
    // 0x002519E4: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x002519E8: swc1        $f1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    // 0x002519EC: lw          $a3, 0x10($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X10);
    // 0x002519F0: lw          $t0, 0x14($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X14);
    // 0x002519F4: lw          $t1, 0x18($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X18);
    // 0x002519F8: sw          $a3, 0xAA0($s0)
    MEM_W(0XAA0, ctx->r16) = ctx->r7;
    // 0x002519FC: sw          $t0, 0xAA4($s0)
    MEM_W(0XAA4, ctx->r16) = ctx->r8;
    // 0x00251A00: sw          $t1, 0xAA8($s0)
    MEM_W(0XAA8, ctx->r16) = ctx->r9;
    // 0x00251A04: j           L_00251A18
    // 0x00251A08: nop

        goto L_00251A18;
    // 0x00251A08: nop

L_00251A0C:
    // 0x00251A0C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x00251A10: jal         0x0024E5F0
    // 0x00251A14: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_0024E5F0(rdram, ctx);
        goto after_4;
    // 0x00251A14: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_4:
L_00251A18:
    // 0x00251A18: lw          $ra, 0x30($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X30);
    // 0x00251A1C: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x00251A20: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x00251A24: jr          $ra
    // 0x00251A28: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x00251A28: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_0025A6B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0025A6B0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0025A6B4: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x0025A6B8: lw          $v0, 0x14($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X14);
    // 0x0025A6BC: lhu         $a3, 0x82($v0)
    ctx->r7 = MEM_HU(ctx->r2, 0X82);
    // 0x0025A6C0: lui         $a2, 0x800B
    ctx->r6 = S32(0X800B << 16);
    // 0x0025A6C4: addiu       $a2, $a2, -0xB8
    ctx->r6 = ADD32(ctx->r6, -0XB8);
    // 0x0025A6C8: jal         0x00245A98
    // 0x0025A6CC: nop

    func_00245A98(rdram, ctx);
        goto after_0;
    // 0x0025A6CC: nop

    after_0:
    // 0x0025A6D0: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x0025A6D4: jr          $ra
    // 0x0025A6D8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0025A6D8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0025E4B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0025E4B8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x0025E4BC: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x0025E4C0: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x0025E4C4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0025E4C8: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x0025E4CC: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x0025E4D0: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x0025E4D4: lw          $v1, 0x90($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X90);
    // 0x0025E4D8: lb          $v0, 0x18($a0)
    ctx->r2 = MEM_B(ctx->r4, 0X18);
    // 0x0025E4DC: slt         $v0, $v1, $v0
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x0025E4E0: bne         $v0, $zero, L_0025E518
    if (ctx->r2 != 0) {
        // 0x0025E4E4: nop
    
            goto L_0025E518;
    }
    // 0x0025E4E4: nop

    // 0x0025E4E8: lb          $v0, 0x19($a0)
    ctx->r2 = MEM_B(ctx->r4, 0X19);
    // 0x0025E4EC: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x0025E4F0: bne         $v0, $zero, L_0025E518
    if (ctx->r2 != 0) {
        // 0x0025E4F4: nop
    
            goto L_0025E518;
    }
    // 0x0025E4F4: nop

    // 0x0025E4F8: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x0025E4FC: lw          $a1, 0x164($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X164);
    // 0x0025E500: jal         0x00210B38
    // 0x0025E504: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_00210B38(rdram, ctx);
        goto after_0;
    // 0x0025E504: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_0:
    // 0x0025E508: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x0025E50C: lw          $a1, 0x168($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X168);
    // 0x0025E510: jal         0x00210790
    // 0x0025E514: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_00210790(rdram, ctx);
        goto after_1;
    // 0x0025E514: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_1:
L_0025E518:
    // 0x0025E518: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x0025E51C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x0025E520: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0025E524: jr          $ra
    // 0x0025E528: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x0025E528: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_002928F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002928F0: lbu         $v0, 0x34($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X34);
    // 0x002928F4: beq         $v0, $zero, L_00292998
    if (ctx->r2 == 0) {
        // 0x002928F8: addu        $a1, $zero, $zero
        ctx->r5 = ADD32(0, 0);
            goto L_00292998;
    }
    // 0x002928F8: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x002928FC: addiu       $t1, $zero, 0x40
    ctx->r9 = ADD32(0, 0X40);
    // 0x00292900: addiu       $t0, $zero, 0x7F
    ctx->r8 = ADD32(0, 0X7F);
    // 0x00292904: addiu       $a3, $zero, 0x5
    ctx->r7 = ADD32(0, 0X5);
    // 0x00292908: addiu       $a2, $zero, 0xC8
    ctx->r6 = ADD32(0, 0XC8);
    // 0x0029290C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00292910: lwc1        $f0, -0x5BF4($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X5BF4);
L_00292914:
    // 0x00292914: lw          $v0, 0x60($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X60);
    // 0x00292918: sll         $v1, $a1, 4
    ctx->r3 = S32(ctx->r5 << 4);
    // 0x0029291C: addu        $v0, $v1, $v0
    ctx->r2 = ADD32(ctx->r3, ctx->r2);
    // 0x00292920: sw          $zero, 0x0($v0)
    MEM_W(0X0, ctx->r2) = 0;
    // 0x00292924: lw          $v0, 0x60($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X60);
    // 0x00292928: addu        $v0, $v1, $v0
    ctx->r2 = ADD32(ctx->r3, ctx->r2);
    // 0x0029292C: sb          $zero, 0x6($v0)
    MEM_B(0X6, ctx->r2) = 0;
    // 0x00292930: lw          $v0, 0x60($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X60);
    // 0x00292934: addu        $v0, $v1, $v0
    ctx->r2 = ADD32(ctx->r3, ctx->r2);
    // 0x00292938: sb          $zero, 0xA($v0)
    MEM_B(0XA, ctx->r2) = 0;
    // 0x0029293C: lw          $v0, 0x60($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X60);
    // 0x00292940: addu        $v0, $v1, $v0
    ctx->r2 = ADD32(ctx->r3, ctx->r2);
    // 0x00292944: sb          $t1, 0x7($v0)
    MEM_B(0X7, ctx->r2) = ctx->r9;
    // 0x00292948: lw          $v0, 0x60($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X60);
    // 0x0029294C: addu        $v0, $v1, $v0
    ctx->r2 = ADD32(ctx->r3, ctx->r2);
    // 0x00292950: sb          $t0, 0x9($v0)
    MEM_B(0X9, ctx->r2) = ctx->r8;
    // 0x00292954: lw          $v0, 0x60($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X60);
    // 0x00292958: addu        $v0, $v1, $v0
    ctx->r2 = ADD32(ctx->r3, ctx->r2);
    // 0x0029295C: sb          $a3, 0x8($v0)
    MEM_B(0X8, ctx->r2) = ctx->r7;
    // 0x00292960: lw          $v0, 0x60($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X60);
    // 0x00292964: addu        $v0, $v1, $v0
    ctx->r2 = ADD32(ctx->r3, ctx->r2);
    // 0x00292968: sb          $zero, 0xB($v0)
    MEM_B(0XB, ctx->r2) = 0;
    // 0x0029296C: lw          $v0, 0x60($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X60);
    // 0x00292970: addu        $v0, $v1, $v0
    ctx->r2 = ADD32(ctx->r3, ctx->r2);
    // 0x00292974: sh          $a2, 0x4($v0)
    MEM_H(0X4, ctx->r2) = ctx->r6;
    // 0x00292978: lw          $v0, 0x60($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X60);
    // 0x0029297C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x00292980: swc1        $f0, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->f0.u32l;
    // 0x00292984: lbu         $v0, 0x34($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X34);
    // 0x00292988: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x0029298C: slt         $v0, $a1, $v0
    ctx->r2 = SIGNED(ctx->r5) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x00292990: bne         $v0, $zero, L_00292914
    if (ctx->r2 != 0) {
        // 0x00292994: nop
    
            goto L_00292914;
    }
    // 0x00292994: nop

L_00292998:
    // 0x00292998: jr          $ra
    // 0x0029299C: nop

    return;
    // 0x0029299C: nop

;}
RECOMP_FUNC void func_0045216C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0045216C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00452170: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x00452174: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x00452178: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0045217C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x00452180: lui         $s0, 0x8012
    ctx->r16 = S32(0X8012 << 16);
    // 0x00452184: addiu       $s0, $s0, -0x5528
    ctx->r16 = ADD32(ctx->r16, -0X5528);
    // 0x00452188: addu        $a0, $a1, $zero
    ctx->r4 = ADD32(ctx->r5, 0);
    // 0x0045218C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x00452190: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x00452194: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x00452198: lb          $v0, 0x2D($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X2D);
    // 0x0045219C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x004521A0: jal         0x0041648C
    // 0x004521A4: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    func_0041648C(rdram, ctx);
        goto after_0;
    // 0x004521A4: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    after_0:
    // 0x004521A8: sb          $v0, 0x2D($s0)
    MEM_B(0X2D, ctx->r16) = ctx->r2;
    // 0x004521AC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x004521B0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x004521B4: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x004521B8: jr          $ra
    // 0x004521BC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x004521BC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_002755B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002755B0: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x002755B4: lw          $v0, -0x5360($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X5360);
    // 0x002755B8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x002755BC: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x002755C0: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x002755C4: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x002755C8: bne         $v0, $zero, L_00275614
    if (ctx->r2 != 0) {
        // 0x002755CC: sw          $a3, 0x34($sp)
        MEM_W(0X34, ctx->r29) = ctx->r7;
            goto L_00275614;
    }
    // 0x002755CC: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    // 0x002755D0: lw          $v0, 0x38($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X38);
    // 0x002755D4: lwc1        $f0, 0x40($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X40);
    // 0x002755D8: sll         $a1, $a0, 16
    ctx->r5 = S32(ctx->r4 << 16);
    // 0x002755DC: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x002755E0: lw          $v0, 0x3C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X3C);
    // 0x002755E4: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x002755E8: addiu       $a0, $a0, 0x2A00
    ctx->r4 = ADD32(ctx->r4, 0X2A00);
    // 0x002755EC: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x002755F0: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x002755F4: addu        $v0, $a3, $zero
    ctx->r2 = ADD32(ctx->r7, 0);
    // 0x002755F8: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x002755FC: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    // 0x00275600: lw          $a3, 0x30($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X30);
    // 0x00275604: jal         0x00271630
    // 0x00275608: sra         $a1, $a1, 16
    ctx->r5 = S32(SIGNED(ctx->r5) >> 16);
    func_00271630(rdram, ctx);
        goto after_0;
    // 0x00275608: sra         $a1, $a1, 16
    ctx->r5 = S32(SIGNED(ctx->r5) >> 16);
    after_0:
    // 0x0027560C: j           L_00275618
    // 0x00275610: nop

        goto L_00275618;
    // 0x00275610: nop

L_00275614:
    // 0x00275614: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_00275618:
    // 0x00275618: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x0027561C: jr          $ra
    // 0x00275620: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x00275620: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_0041B1B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041B1B0: jr          $ra
    // 0x0041B1B4: addiu       $v0, $zero, 0x1DB1
    ctx->r2 = ADD32(0, 0X1DB1);
    return;
    // 0x0041B1B4: addiu       $v0, $zero, 0x1DB1
    ctx->r2 = ADD32(0, 0X1DB1);
;}
RECOMP_FUNC void func_0042019C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0042019C: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x004201A0: lw          $v0, 0x2010($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2010);
    // 0x004201A4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x004201A8: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x004201AC: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x004201B0: bne         $v0, $zero, L_004201C8
    if (ctx->r2 != 0) {
        // 0x004201B4: sw          $ra, 0x24($sp)
        MEM_W(0X24, ctx->r29) = ctx->r31;
            goto L_004201C8;
    }
    // 0x004201B4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x004201B8: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x004201BC: lw          $v0, 0x2014($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2014);
    // 0x004201C0: beq         $v0, $zero, L_004201D0
    if (ctx->r2 == 0) {
        // 0x004201C4: nop
    
            goto L_004201D0;
    }
    // 0x004201C4: nop

L_004201C8:
    // 0x004201C8: jal         0x002053A8
    // 0x004201CC: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_002053A8(rdram, ctx);
        goto after_0;
    // 0x004201CC: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_0:
L_004201D0:
    // 0x004201D0: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x004201D4: lw          $a1, 0x2010($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X2010);
    // 0x004201D8: beq         $a1, $zero, L_004201E8
    if (ctx->r5 == 0) {
        // 0x004201DC: nop
    
            goto L_004201E8;
    }
    // 0x004201DC: nop

    // 0x004201E0: jal         0x002052D8
    // 0x004201E4: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_002052D8(rdram, ctx);
        goto after_1;
    // 0x004201E4: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_1:
L_004201E8:
    // 0x004201E8: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x004201EC: lw          $a1, 0x2014($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X2014);
    // 0x004201F0: beq         $a1, $zero, L_00420200
    if (ctx->r5 == 0) {
        // 0x004201F4: nop
    
            goto L_00420200;
    }
    // 0x004201F4: nop

    // 0x004201F8: jal         0x002052D8
    // 0x004201FC: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_002052D8(rdram, ctx);
        goto after_2;
    // 0x004201FC: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_2:
L_00420200:
    // 0x00420200: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x00420204: lw          $v0, 0x990($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X990);
    // 0x00420208: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0042020C: sw          $zero, 0x2010($at)
    MEM_W(0X2010, ctx->r1) = 0;
    // 0x00420210: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00420214: sw          $zero, 0x2014($at)
    MEM_W(0X2014, ctx->r1) = 0;
    // 0x00420218: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0042021C: sw          $zero, 0x2018($at)
    MEM_W(0X2018, ctx->r1) = 0;
    // 0x00420220: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00420224: sw          $zero, 0x201C($at)
    MEM_W(0X201C, ctx->r1) = 0;
    // 0x00420228: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0042022C: sw          $zero, 0x940($at)
    MEM_W(0X940, ctx->r1) = 0;
    // 0x00420230: beq         $v0, $zero, L_00420248
    if (ctx->r2 == 0) {
        // 0x00420234: nop
    
            goto L_00420248;
    }
    // 0x00420234: nop

    // 0x00420238: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x0042023C: lw          $v0, 0x2028($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2028);
    // 0x00420240: j           L_00420254
    // 0x00420244: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
        goto L_00420254;
    // 0x00420244: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
L_00420248:
    // 0x00420248: lw          $v0, 0x20($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X20);
    // 0x0042024C: lb          $v0, 0x4($v0)
    ctx->r2 = MEM_B(ctx->r2, 0X4);
    // 0x00420250: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
L_00420254:
    // 0x00420254: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x00420258: lw          $v0, 0x990($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X990);
    // 0x0042025C: beq         $v0, $zero, L_004202A4
    if (ctx->r2 == 0) {
        // 0x00420260: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_004202A4;
    }
    // 0x00420260: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00420264: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x00420268: addiu       $a0, $a0, -0x61D4
    ctx->r4 = ADD32(ctx->r4, -0X61D4);
    // 0x0042026C: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x00420270: addiu       $a1, $a1, -0x48C8
    ctx->r5 = ADD32(ctx->r5, -0X48C8);
    // 0x00420274: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x00420278: lw          $a3, 0x20($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X20);
    // 0x0042027C: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x00420280: sw          $zero, -0xEB8($at)
    MEM_W(-0XEB8, ctx->r1) = 0;
    // 0x00420284: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x00420288: sw          $zero, -0x4EF8($at)
    MEM_W(-0X4EF8, ctx->r1) = 0;
    // 0x0042028C: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x00420290: sw          $v0, -0xEBC($at)
    MEM_W(-0XEBC, ctx->r1) = ctx->r2;
    // 0x00420294: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x00420298: sw          $zero, -0x4EEC($at)
    MEM_W(-0X4EEC, ctx->r1) = 0;
    // 0x0042029C: j           L_004203E8
    // 0x004202A0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
        goto L_004203E8;
    // 0x004202A0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
L_004202A4:
    // 0x004202A4: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x004202A8: lw          $v0, 0x9B4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X9B4);
    // 0x004202AC: beq         $v0, $zero, L_004203A0
    if (ctx->r2 == 0) {
        // 0x004202B0: nop
    
            goto L_004203A0;
    }
    // 0x004202B0: nop

    // 0x004202B4: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x004202B8: lw          $v0, 0x994($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X994);
    // 0x004202BC: beq         $v0, $zero, L_00420304
    if (ctx->r2 == 0) {
        // 0x004202C0: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_00420304;
    }
    // 0x004202C0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x004202C4: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x004202C8: addiu       $a0, $a0, -0x6790
    ctx->r4 = ADD32(ctx->r4, -0X6790);
    // 0x004202CC: lw          $a1, 0x20($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X20);
    // 0x004202D0: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x004202D4: sw          $v0, 0x9BC($at)
    MEM_W(0X9BC, ctx->r1) = ctx->r2;
    // 0x004202D8: jal         0x0025342C
    // 0x004202DC: nop

    func_0025342C(rdram, ctx);
        goto after_3;
    // 0x004202DC: nop

    after_3:
    // 0x004202E0: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    // 0x004202E4: lw          $a0, 0x51C($a2)
    ctx->r4 = MEM_W(ctx->r6, 0X51C);
    // 0x004202E8: lw          $v0, 0x18($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X18);
    // 0x004202EC: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x004202F0: addiu       $a1, $a1, -0x77F8
    ctx->r5 = ADD32(ctx->r5, -0X77F8);
    // 0x004202F4: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x004202F8: lw          $a3, 0xA50($a2)
    ctx->r7 = MEM_W(ctx->r6, 0XA50);
    // 0x004202FC: j           L_004203E8
    // 0x00420300: addiu       $a0, $a0, 0x53C
    ctx->r4 = ADD32(ctx->r4, 0X53C);
        goto L_004203E8;
    // 0x00420300: addiu       $a0, $a0, 0x53C
    ctx->r4 = ADD32(ctx->r4, 0X53C);
L_00420304:
    // 0x00420304: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x00420308: lw          $v0, 0x984($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X984);
    // 0x0042030C: beq         $v0, $zero, L_00420440
    if (ctx->r2 == 0) {
        // 0x00420310: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_00420440;
    }
    // 0x00420310: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00420314: lw          $v1, 0x20($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X20);
    // 0x00420318: lw          $a0, 0x1C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X1C);
    // 0x0042031C: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x00420320: sw          $v0, 0x9BC($at)
    MEM_W(0X9BC, ctx->r1) = ctx->r2;
    // 0x00420324: lb          $v1, 0x4($v1)
    ctx->r3 = MEM_B(ctx->r3, 0X4);
    // 0x00420328: addu        $a2, $a0, $zero
    ctx->r6 = ADD32(ctx->r4, 0);
    // 0x0042032C: beq         $v1, $v0, L_00420360
    if (ctx->r3 == ctx->r2) {
        // 0x00420330: sw          $v1, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->r3;
            goto L_00420360;
    }
    // 0x00420330: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    // 0x00420334: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x00420338: bne         $v0, $zero, L_00420350
    if (ctx->r2 != 0) {
        // 0x0042033C: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_00420350;
    }
    // 0x0042033C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x00420340: beq         $v1, $v0, L_00420370
    if (ctx->r3 == ctx->r2) {
        // 0x00420344: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_00420370;
    }
    // 0x00420344: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x00420348: beq         $v1, $v0, L_00420380
    if (ctx->r3 == ctx->r2) {
        // 0x0042034C: nop
    
            goto L_00420380;
    }
    // 0x0042034C: nop

L_00420350:
    // 0x00420350: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x00420354: addiu       $a1, $a1, -0x5380
    ctx->r5 = ADD32(ctx->r5, -0X5380);
    // 0x00420358: j           L_00420388
    // 0x0042035C: nop

        goto L_00420388;
    // 0x0042035C: nop

L_00420360:
    // 0x00420360: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x00420364: addiu       $a1, $a1, -0x535C
    ctx->r5 = ADD32(ctx->r5, -0X535C);
    // 0x00420368: j           L_00420388
    // 0x0042036C: nop

        goto L_00420388;
    // 0x0042036C: nop

L_00420370:
    // 0x00420370: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x00420374: addiu       $a1, $a1, -0x5338
    ctx->r5 = ADD32(ctx->r5, -0X5338);
    // 0x00420378: j           L_00420388
    // 0x0042037C: nop

        goto L_00420388;
    // 0x0042037C: nop

L_00420380:
    // 0x00420380: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x00420384: addiu       $a1, $a1, -0x5314
    ctx->r5 = ADD32(ctx->r5, -0X5314);
L_00420388:
    // 0x00420388: lw          $v0, 0x18($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X18);
    // 0x0042038C: lw          $a0, 0x51C($a2)
    ctx->r4 = MEM_W(ctx->r6, 0X51C);
    // 0x00420390: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x00420394: lw          $a3, 0xA50($a2)
    ctx->r7 = MEM_W(ctx->r6, 0XA50);
    // 0x00420398: j           L_004203E8
    // 0x0042039C: addiu       $a0, $a0, 0x53C
    ctx->r4 = ADD32(ctx->r4, 0X53C);
        goto L_004203E8;
    // 0x0042039C: addiu       $a0, $a0, 0x53C
    ctx->r4 = ADD32(ctx->r4, 0X53C);
L_004203A0:
    // 0x004203A0: lw          $a1, 0x20($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X20);
    // 0x004203A4: lui         $s0, 0x8012
    ctx->r16 = S32(0X8012 << 16);
    // 0x004203A8: addiu       $s0, $s0, -0x6790
    ctx->r16 = ADD32(ctx->r16, -0X6790);
    // 0x004203AC: jal         0x0025342C
    // 0x004203B0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_0025342C(rdram, ctx);
        goto after_4;
    // 0x004203B0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
    // 0x004203B4: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x004203B8: lw          $v1, 0x994($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X994);
    // 0x004203BC: beq         $v1, $zero, L_004203F8
    if (ctx->r3 == 0) {
        // 0x004203C0: addu        $a2, $v0, $zero
        ctx->r6 = ADD32(ctx->r2, 0);
            goto L_004203F8;
    }
    // 0x004203C0: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    // 0x004203C4: addiu       $a0, $s0, 0x5BC
    ctx->r4 = ADD32(ctx->r16, 0X5BC);
    // 0x004203C8: lw          $v0, 0x18($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X18);
    // 0x004203CC: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x004203D0: addiu       $a1, $a1, -0x6E70
    ctx->r5 = ADD32(ctx->r5, -0X6E70);
    // 0x004203D4: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x004203D8: lw          $a3, 0xA50($a2)
    ctx->r7 = MEM_W(ctx->r6, 0XA50);
    // 0x004203DC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x004203E0: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x004203E4: sw          $v0, 0x9BC($at)
    MEM_W(0X9BC, ctx->r1) = ctx->r2;
L_004203E8:
    // 0x004203E8: jal         0x00416644
    // 0x004203EC: nop

    func_00416644(rdram, ctx);
        goto after_5;
    // 0x004203EC: nop

    after_5:
    // 0x004203F0: j           L_00420444
    // 0x004203F4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_00420444;
    // 0x004203F4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_004203F8:
    // 0x004203F8: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x004203FC: lw          $v0, 0x984($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X984);
    // 0x00420400: beq         $v0, $zero, L_00420440
    if (ctx->r2 == 0) {
        // 0x00420404: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_00420440;
    }
    // 0x00420404: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00420408: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x0042040C: addiu       $a1, $a1, -0x410C
    ctx->r5 = ADD32(ctx->r5, -0X410C);
    // 0x00420410: lw          $a0, 0x51C($a2)
    ctx->r4 = MEM_W(ctx->r6, 0X51C);
    // 0x00420414: lw          $v1, 0x18($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X18);
    // 0x00420418: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0042041C: sw          $v0, 0x9BC($at)
    MEM_W(0X9BC, ctx->r1) = ctx->r2;
    // 0x00420420: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    // 0x00420424: lw          $a3, 0xA50($a2)
    ctx->r7 = MEM_W(ctx->r6, 0XA50);
    // 0x00420428: jal         0x00416644
    // 0x0042042C: addiu       $a0, $a0, 0x53C
    ctx->r4 = ADD32(ctx->r4, 0X53C);
    func_00416644(rdram, ctx);
        goto after_6;
    // 0x0042042C: addiu       $a0, $a0, 0x53C
    ctx->r4 = ADD32(ctx->r4, 0X53C);
    after_6:
    // 0x00420430: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x00420434: sw          $zero, 0x940($at)
    MEM_W(0X940, ctx->r1) = 0;
    // 0x00420438: j           L_00420444
    // 0x0042043C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_00420444;
    // 0x0042043C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_00420440:
    // 0x00420440: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_00420444:
    // 0x00420444: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x00420448: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x0042044C: jr          $ra
    // 0x00420450: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x00420450: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_0029E4F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0029E4F0: addiu       $sp, $sp, -0x80
    ctx->r29 = ADD32(ctx->r29, -0X80);
    // 0x0029E4F4: sw          $s4, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r20;
    // 0x0029E4F8: addu        $s4, $a0, $zero
    ctx->r20 = ADD32(ctx->r4, 0);
    // 0x0029E4FC: sw          $s3, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r19;
    // 0x0029E500: addu        $s3, $a1, $zero
    ctx->r19 = ADD32(ctx->r5, 0);
    // 0x0029E504: addu        $a1, $a2, $zero
    ctx->r5 = ADD32(ctx->r6, 0);
    // 0x0029E508: sw          $ra, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r31;
    // 0x0029E50C: sw          $s2, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r18;
    // 0x0029E510: sw          $s1, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r17;
    // 0x0029E514: sw          $s0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r16;
    // 0x0029E518: sw          $a3, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r7;
    // 0x0029E51C: sw          $zero, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = 0;
L_0029E520:
    // 0x0029E520: lbu         $s1, 0x0($a1)
    ctx->r17 = MEM_BU(ctx->r5, 0X0);
    // 0x0029E524: beq         $s1, $zero, L_0029E548
    if (ctx->r17 == 0) {
        // 0x0029E528: addu        $s2, $a1, $zero
        ctx->r18 = ADD32(ctx->r5, 0);
            goto L_0029E548;
    }
    // 0x0029E528: addu        $s2, $a1, $zero
    ctx->r18 = ADD32(ctx->r5, 0);
    // 0x0029E52C: addiu       $v0, $zero, 0x25
    ctx->r2 = ADD32(0, 0X25);
L_0029E530:
    // 0x0029E530: beq         $s1, $v0, L_0029E54C
    if (ctx->r17 == ctx->r2) {
        // 0x0029E534: subu        $s0, $s2, $a1
        ctx->r16 = SUB32(ctx->r18, ctx->r5);
            goto L_0029E54C;
    }
    // 0x0029E534: subu        $s0, $s2, $a1
    ctx->r16 = SUB32(ctx->r18, ctx->r5);
    // 0x0029E538: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x0029E53C: lbu         $s1, 0x0($s2)
    ctx->r17 = MEM_BU(ctx->r18, 0X0);
    // 0x0029E540: bne         $s1, $zero, L_0029E530
    if (ctx->r17 != 0) {
        // 0x0029E544: nop
    
            goto L_0029E530;
    }
    // 0x0029E544: nop

L_0029E548:
    // 0x0029E548: subu        $s0, $s2, $a1
    ctx->r16 = SUB32(ctx->r18, ctx->r5);
L_0029E54C:
    // 0x0029E54C: blez        $s0, L_0029E574
    if (SIGNED(ctx->r16) <= 0) {
        // 0x0029E550: addu        $a0, $s3, $zero
        ctx->r4 = ADD32(ctx->r19, 0);
            goto L_0029E574;
    }
    // 0x0029E550: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x0029E554: jalr        $s4
    // 0x0029E558: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r20)(rdram, ctx);
        goto after_0;
    // 0x0029E558: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    after_0:
    // 0x0029E55C: addu        $s3, $v0, $zero
    ctx->r19 = ADD32(ctx->r2, 0);
    // 0x0029E560: beq         $s3, $zero, L_0029EA10
    if (ctx->r19 == 0) {
        // 0x0029E564: nop
    
            goto L_0029EA10;
    }
    // 0x0029E564: nop

    // 0x0029E568: lw          $v0, 0x3C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X3C);
    // 0x0029E56C: addu        $v0, $v0, $s0
    ctx->r2 = ADD32(ctx->r2, ctx->r16);
    // 0x0029E570: sw          $v0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r2;
L_0029E574:
    // 0x0029E574: beq         $s1, $zero, L_0029EA10
    if (ctx->r17 == 0) {
        // 0x0029E578: addiu       $s2, $s2, 0x1
        ctx->r18 = ADD32(ctx->r18, 0X1);
            goto L_0029EA10;
    }
    // 0x0029E578: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x0029E57C: sw          $zero, 0x40($sp)
    MEM_W(0X40, ctx->r29) = 0;
    // 0x0029E580: lui         $s0, 0x800B
    ctx->r16 = S32(0X800B << 16);
    // 0x0029E584: addiu       $s0, $s0, -0x55B0
    ctx->r16 = ADD32(ctx->r16, -0X55B0);
    // 0x0029E588: lui         $s1, 0x800B
    ctx->r17 = S32(0X800B << 16);
    // 0x0029E58C: addiu       $s1, $s1, -0x55A8
    ctx->r17 = ADD32(ctx->r17, -0X55A8);
L_0029E590:
    // 0x0029E590: lbu         $a1, 0x0($s2)
    ctx->r5 = MEM_BU(ctx->r18, 0X0);
    // 0x0029E594: jal         0x0029E488
    // 0x0029E598: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_0029E488(rdram, ctx);
        goto after_1;
    // 0x0029E598: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x0029E59C: beq         $v0, $zero, L_0029E5C4
    if (ctx->r2 == 0) {
        // 0x0029E5A0: subu        $v0, $v0, $s0
        ctx->r2 = SUB32(ctx->r2, ctx->r16);
            goto L_0029E5C4;
    }
    // 0x0029E5A0: subu        $v0, $v0, $s0
    ctx->r2 = SUB32(ctx->r2, ctx->r16);
    // 0x0029E5A4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x0029E5A8: addu        $v0, $v0, $s1
    ctx->r2 = ADD32(ctx->r2, ctx->r17);
    // 0x0029E5AC: lw          $v1, 0x40($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X40);
    // 0x0029E5B0: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x0029E5B4: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x0029E5B8: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x0029E5BC: j           L_0029E590
    // 0x0029E5C0: sw          $v1, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r3;
        goto L_0029E590;
    // 0x0029E5C0: sw          $v1, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r3;
L_0029E5C4:
    // 0x0029E5C4: lbu         $v1, 0x0($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0X0);
    // 0x0029E5C8: addiu       $v0, $zero, 0x2A
    ctx->r2 = ADD32(0, 0X2A);
    // 0x0029E5CC: bnel        $v1, $v0, L_0029E644
    if (ctx->r3 != ctx->r2) {
        // 0x0029E5D0: sw          $zero, 0x38($sp)
        MEM_W(0X38, ctx->r29) = 0;
            goto L_0029E644;
    }
    goto skip_0;
    // 0x0029E5D0: sw          $zero, 0x38($sp)
    MEM_W(0X38, ctx->r29) = 0;
    skip_0:
    // 0x0029E5D4: lw          $v0, 0x8C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X8C);
    // 0x0029E5D8: addiu       $v1, $zero, -0x4
    ctx->r3 = ADD32(0, -0X4);
    // 0x0029E5DC: addiu       $v0, $v0, 0x3
    ctx->r2 = ADD32(ctx->r2, 0X3);
    // 0x0029E5E0: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x0029E5E4: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
    // 0x0029E5E8: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x0029E5EC: sw          $v0, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r2;
    // 0x0029E5F0: bgez        $a0, L_0029E60C
    if (SIGNED(ctx->r4) >= 0) {
        // 0x0029E5F4: sw          $a0, 0x38($sp)
        MEM_W(0X38, ctx->r29) = ctx->r4;
            goto L_0029E60C;
    }
    // 0x0029E5F4: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x0029E5F8: lw          $v1, 0x40($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X40);
    // 0x0029E5FC: negu        $v0, $a0
    ctx->r2 = SUB32(0, ctx->r4);
    // 0x0029E600: sw          $v0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r2;
    // 0x0029E604: ori         $v1, $v1, 0x4
    ctx->r3 = ctx->r3 | 0X4;
    // 0x0029E608: sw          $v1, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r3;
L_0029E60C:
    // 0x0029E60C: j           L_0029E658
    // 0x0029E610: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
        goto L_0029E658;
    // 0x0029E610: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
L_0029E614:
    // 0x0029E614: lw          $v1, 0x38($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X38);
    // 0x0029E618: slti        $v0, $v1, 0x3E7
    ctx->r2 = SIGNED(ctx->r3) < 0X3E7 ? 1 : 0;
    // 0x0029E61C: beql        $v0, $zero, L_0029E644
    if (ctx->r2 == 0) {
        // 0x0029E620: addiu       $s2, $s2, 0x1
        ctx->r18 = ADD32(ctx->r18, 0X1);
            goto L_0029E644;
    }
    goto skip_1;
    // 0x0029E620: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    skip_1:
    // 0x0029E624: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x0029E628: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x0029E62C: lbu         $v1, 0x0($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0X0);
    // 0x0029E630: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x0029E634: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x0029E638: addiu       $v0, $v0, -0x30
    ctx->r2 = ADD32(ctx->r2, -0X30);
    // 0x0029E63C: sw          $v0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r2;
    // 0x0029E640: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
L_0029E644:
    // 0x0029E644: lbu         $v0, 0x0($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X0);
    // 0x0029E648: addiu       $v0, $v0, -0x30
    ctx->r2 = ADD32(ctx->r2, -0X30);
    // 0x0029E64C: sltiu       $v0, $v0, 0xA
    ctx->r2 = ctx->r2 < 0XA ? 1 : 0;
    // 0x0029E650: bne         $v0, $zero, L_0029E614
    if (ctx->r2 != 0) {
        // 0x0029E654: nop
    
            goto L_0029E614;
    }
    // 0x0029E654: nop

L_0029E658:
    // 0x0029E658: lbu         $v1, 0x0($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0X0);
    // 0x0029E65C: addiu       $v0, $zero, 0x2E
    ctx->r2 = ADD32(0, 0X2E);
    // 0x0029E660: beq         $v1, $v0, L_0029E670
    if (ctx->r3 == ctx->r2) {
        // 0x0029E664: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_0029E670;
    }
    // 0x0029E664: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x0029E668: j           L_0029E6F0
    // 0x0029E66C: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
        goto L_0029E6F0;
    // 0x0029E66C: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
L_0029E670:
    // 0x0029E670: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x0029E674: lbu         $v1, 0x0($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0X0);
    // 0x0029E678: addiu       $v0, $zero, 0x2A
    ctx->r2 = ADD32(0, 0X2A);
    // 0x0029E67C: bnel        $v1, $v0, L_0029E6DC
    if (ctx->r3 != ctx->r2) {
        // 0x0029E680: sw          $zero, 0x34($sp)
        MEM_W(0X34, ctx->r29) = 0;
            goto L_0029E6DC;
    }
    goto skip_2;
    // 0x0029E680: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    skip_2:
    // 0x0029E684: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x0029E688: lw          $v0, 0x8C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X8C);
    // 0x0029E68C: addiu       $v1, $zero, -0x4
    ctx->r3 = ADD32(0, -0X4);
    // 0x0029E690: addiu       $v0, $v0, 0x3
    ctx->r2 = ADD32(ctx->r2, 0X3);
    // 0x0029E694: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x0029E698: lw          $v1, 0x0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X0);
    // 0x0029E69C: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x0029E6A0: sw          $v0, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r2;
    // 0x0029E6A4: j           L_0029E6F0
    // 0x0029E6A8: sw          $v1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r3;
        goto L_0029E6F0;
    // 0x0029E6A8: sw          $v1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r3;
L_0029E6AC:
    // 0x0029E6AC: lw          $v1, 0x34($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X34);
    // 0x0029E6B0: slti        $v0, $v1, 0x3E7
    ctx->r2 = SIGNED(ctx->r3) < 0X3E7 ? 1 : 0;
    // 0x0029E6B4: beql        $v0, $zero, L_0029E6DC
    if (ctx->r2 == 0) {
        // 0x0029E6B8: addiu       $s2, $s2, 0x1
        ctx->r18 = ADD32(ctx->r18, 0X1);
            goto L_0029E6DC;
    }
    goto skip_3;
    // 0x0029E6B8: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    skip_3:
    // 0x0029E6BC: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x0029E6C0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x0029E6C4: lbu         $v1, 0x0($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0X0);
    // 0x0029E6C8: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x0029E6CC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x0029E6D0: addiu       $v0, $v0, -0x30
    ctx->r2 = ADD32(ctx->r2, -0X30);
    // 0x0029E6D4: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    // 0x0029E6D8: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
L_0029E6DC:
    // 0x0029E6DC: lbu         $v0, 0x0($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X0);
    // 0x0029E6E0: addiu       $v0, $v0, -0x30
    ctx->r2 = ADD32(ctx->r2, -0X30);
    // 0x0029E6E4: sltiu       $v0, $v0, 0xA
    ctx->r2 = ctx->r2 < 0XA ? 1 : 0;
    // 0x0029E6E8: bne         $v0, $zero, L_0029E6AC
    if (ctx->r2 != 0) {
        // 0x0029E6EC: nop
    
            goto L_0029E6AC;
    }
    // 0x0029E6EC: nop

L_0029E6F0:
    // 0x0029E6F0: lbu         $a1, 0x0($s2)
    ctx->r5 = MEM_BU(ctx->r18, 0X0);
    // 0x0029E6F4: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x0029E6F8: addiu       $a0, $a0, -0x5590
    ctx->r4 = ADD32(ctx->r4, -0X5590);
    // 0x0029E6FC: jal         0x0029E488
    // 0x0029E700: nop

    func_0029E488(rdram, ctx);
        goto after_2;
    // 0x0029E700: nop

    after_2:
    // 0x0029E704: beq         $v0, $zero, L_0029E714
    if (ctx->r2 == 0) {
        // 0x0029E708: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_0029E714;
    }
    // 0x0029E708: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x0029E70C: lbu         $v0, 0x0($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X0);
    // 0x0029E710: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
L_0029E714:
    // 0x0029E714: sb          $v0, 0x44($sp)
    MEM_B(0X44, ctx->r29) = ctx->r2;
    // 0x0029E718: andi        $v1, $v0, 0xFF
    ctx->r3 = ctx->r2 & 0XFF;
    // 0x0029E71C: addiu       $v0, $zero, 0x6C
    ctx->r2 = ADD32(0, 0X6C);
    // 0x0029E720: bne         $v1, $v0, L_0029E744
    if (ctx->r3 != ctx->r2) {
        // 0x0029E724: addiu       $a0, $sp, 0x10
        ctx->r4 = ADD32(ctx->r29, 0X10);
            goto L_0029E744;
    }
    // 0x0029E724: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x0029E728: lbu         $v0, 0x0($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X0);
    // 0x0029E72C: bne         $v0, $v1, L_0029E748
    if (ctx->r2 != ctx->r3) {
        // 0x0029E730: addiu       $a1, $sp, 0x8C
        ctx->r5 = ADD32(ctx->r29, 0X8C);
            goto L_0029E748;
    }
    // 0x0029E730: addiu       $a1, $sp, 0x8C
    ctx->r5 = ADD32(ctx->r29, 0X8C);
    // 0x0029E734: addiu       $v0, $zero, 0x4C
    ctx->r2 = ADD32(0, 0X4C);
    // 0x0029E738: sb          $v0, 0x44($sp)
    MEM_B(0X44, ctx->r29) = ctx->r2;
    // 0x0029E73C: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x0029E740: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
L_0029E744:
    // 0x0029E744: addiu       $a1, $sp, 0x8C
    ctx->r5 = ADD32(ctx->r29, 0X8C);
L_0029E748:
    // 0x0029E748: lbu         $a2, 0x0($s2)
    ctx->r6 = MEM_BU(ctx->r18, 0X0);
    // 0x0029E74C: jal         0x0029EA34
    // 0x0029E750: addiu       $a3, $sp, 0x48
    ctx->r7 = ADD32(ctx->r29, 0X48);
    func_0029EA34(rdram, ctx);
        goto after_3;
    // 0x0029E750: addiu       $a3, $sp, 0x48
    ctx->r7 = ADD32(ctx->r29, 0X48);
    after_3:
    // 0x0029E754: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x0029E758: lw          $v0, 0x20($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X20);
    // 0x0029E75C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x0029E760: lw          $v0, 0x24($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X24);
    // 0x0029E764: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x0029E768: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x0029E76C: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x0029E770: lw          $v0, 0x2C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X2C);
    // 0x0029E774: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x0029E778: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x0029E77C: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x0029E780: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x0029E784: lw          $v0, 0x40($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X40);
    // 0x0029E788: subu        $a0, $a0, $v1
    ctx->r4 = SUB32(ctx->r4, ctx->r3);
    // 0x0029E78C: andi        $v0, $v0, 0x4
    ctx->r2 = ctx->r2 & 0X4;
    // 0x0029E790: bne         $v0, $zero, L_0029E7F0
    if (ctx->r2 != 0) {
        // 0x0029E794: sw          $a0, 0x38($sp)
        MEM_W(0X38, ctx->r29) = ctx->r4;
            goto L_0029E7F0;
    }
    // 0x0029E794: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x0029E798: blez        $a0, L_0029E7F0
    if (SIGNED(ctx->r4) <= 0) {
        // 0x0029E79C: nop
    
            goto L_0029E7F0;
    }
    // 0x0029E79C: nop

    // 0x0029E7A0: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x0029E7A4: sltiu       $v0, $s1, 0x21
    ctx->r2 = ctx->r17 < 0X21 ? 1 : 0;
L_0029E7A8:
    // 0x0029E7A8: beq         $v0, $zero, L_0029E7B4
    if (ctx->r2 == 0) {
        // 0x0029E7AC: addiu       $s0, $zero, 0x20
        ctx->r16 = ADD32(0, 0X20);
            goto L_0029E7B4;
    }
    // 0x0029E7AC: addiu       $s0, $zero, 0x20
    ctx->r16 = ADD32(0, 0X20);
    // 0x0029E7B0: addu        $s0, $s1, $zero
    ctx->r16 = ADD32(ctx->r17, 0);
L_0029E7B4:
    // 0x0029E7B4: blezl       $s0, L_0029E7E8
    if (SIGNED(ctx->r16) <= 0) {
        // 0x0029E7B8: subu        $s1, $s1, $s0
        ctx->r17 = SUB32(ctx->r17, ctx->r16);
            goto L_0029E7E8;
    }
    goto skip_4;
    // 0x0029E7B8: subu        $s1, $s1, $s0
    ctx->r17 = SUB32(ctx->r17, ctx->r16);
    skip_4:
    // 0x0029E7BC: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x0029E7C0: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x0029E7C4: addiu       $a1, $a1, -0x7660
    ctx->r5 = ADD32(ctx->r5, -0X7660);
    // 0x0029E7C8: jalr        $s4
    // 0x0029E7CC: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r20)(rdram, ctx);
        goto after_4;
    // 0x0029E7CC: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    after_4:
    // 0x0029E7D0: addu        $s3, $v0, $zero
    ctx->r19 = ADD32(ctx->r2, 0);
    // 0x0029E7D4: beq         $s3, $zero, L_0029EA10
    if (ctx->r19 == 0) {
        // 0x0029E7D8: subu        $s1, $s1, $s0
        ctx->r17 = SUB32(ctx->r17, ctx->r16);
            goto L_0029EA10;
    }
    // 0x0029E7D8: subu        $s1, $s1, $s0
    ctx->r17 = SUB32(ctx->r17, ctx->r16);
    // 0x0029E7DC: lw          $v0, 0x3C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X3C);
    // 0x0029E7E0: addu        $v0, $v0, $s0
    ctx->r2 = ADD32(ctx->r2, ctx->r16);
    // 0x0029E7E4: sw          $v0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r2;
L_0029E7E8:
    // 0x0029E7E8: bgtz        $s1, L_0029E7A8
    if (SIGNED(ctx->r17) > 0) {
        // 0x0029E7EC: sltiu       $v0, $s1, 0x21
        ctx->r2 = ctx->r17 < 0X21 ? 1 : 0;
            goto L_0029E7A8;
    }
    // 0x0029E7EC: sltiu       $v0, $s1, 0x21
    ctx->r2 = ctx->r17 < 0X21 ? 1 : 0;
L_0029E7F0:
    // 0x0029E7F0: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x0029E7F4: blez        $a2, L_0029E820
    if (SIGNED(ctx->r6) <= 0) {
        // 0x0029E7F8: addu        $a0, $s3, $zero
        ctx->r4 = ADD32(ctx->r19, 0);
            goto L_0029E820;
    }
    // 0x0029E7F8: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x0029E7FC: jalr        $s4
    // 0x0029E800: addiu       $a1, $sp, 0x48
    ctx->r5 = ADD32(ctx->r29, 0X48);
    LOOKUP_FUNC(ctx->r20)(rdram, ctx);
        goto after_5;
    // 0x0029E800: addiu       $a1, $sp, 0x48
    ctx->r5 = ADD32(ctx->r29, 0X48);
    after_5:
    // 0x0029E804: addu        $s3, $v0, $zero
    ctx->r19 = ADD32(ctx->r2, 0);
    // 0x0029E808: beq         $s3, $zero, L_0029EA10
    if (ctx->r19 == 0) {
        // 0x0029E80C: nop
    
            goto L_0029EA10;
    }
    // 0x0029E80C: nop

    // 0x0029E810: lw          $v0, 0x3C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X3C);
    // 0x0029E814: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x0029E818: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x0029E81C: sw          $v0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r2;
L_0029E820:
    // 0x0029E820: lw          $v0, 0x20($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X20);
    // 0x0029E824: blez        $v0, L_0029E87C
    if (SIGNED(ctx->r2) <= 0) {
        // 0x0029E828: nop
    
            goto L_0029E87C;
    }
    // 0x0029E828: nop

    // 0x0029E82C: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x0029E830: sltiu       $v0, $s1, 0x21
    ctx->r2 = ctx->r17 < 0X21 ? 1 : 0;
L_0029E834:
    // 0x0029E834: beq         $v0, $zero, L_0029E840
    if (ctx->r2 == 0) {
        // 0x0029E838: addiu       $s0, $zero, 0x20
        ctx->r16 = ADD32(0, 0X20);
            goto L_0029E840;
    }
    // 0x0029E838: addiu       $s0, $zero, 0x20
    ctx->r16 = ADD32(0, 0X20);
    // 0x0029E83C: addu        $s0, $s1, $zero
    ctx->r16 = ADD32(ctx->r17, 0);
L_0029E840:
    // 0x0029E840: blezl       $s0, L_0029E874
    if (SIGNED(ctx->r16) <= 0) {
        // 0x0029E844: subu        $s1, $s1, $s0
        ctx->r17 = SUB32(ctx->r17, ctx->r16);
            goto L_0029E874;
    }
    goto skip_5;
    // 0x0029E844: subu        $s1, $s1, $s0
    ctx->r17 = SUB32(ctx->r17, ctx->r16);
    skip_5:
    // 0x0029E848: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x0029E84C: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x0029E850: addiu       $a1, $a1, -0x763C
    ctx->r5 = ADD32(ctx->r5, -0X763C);
    // 0x0029E854: jalr        $s4
    // 0x0029E858: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r20)(rdram, ctx);
        goto after_6;
    // 0x0029E858: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    after_6:
    // 0x0029E85C: addu        $s3, $v0, $zero
    ctx->r19 = ADD32(ctx->r2, 0);
    // 0x0029E860: beq         $s3, $zero, L_0029EA10
    if (ctx->r19 == 0) {
        // 0x0029E864: subu        $s1, $s1, $s0
        ctx->r17 = SUB32(ctx->r17, ctx->r16);
            goto L_0029EA10;
    }
    // 0x0029E864: subu        $s1, $s1, $s0
    ctx->r17 = SUB32(ctx->r17, ctx->r16);
    // 0x0029E868: lw          $v0, 0x3C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X3C);
    // 0x0029E86C: addu        $v0, $v0, $s0
    ctx->r2 = ADD32(ctx->r2, ctx->r16);
    // 0x0029E870: sw          $v0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r2;
L_0029E874:
    // 0x0029E874: bgtz        $s1, L_0029E834
    if (SIGNED(ctx->r17) > 0) {
        // 0x0029E878: sltiu       $v0, $s1, 0x21
        ctx->r2 = ctx->r17 < 0X21 ? 1 : 0;
            goto L_0029E834;
    }
    // 0x0029E878: sltiu       $v0, $s1, 0x21
    ctx->r2 = ctx->r17 < 0X21 ? 1 : 0;
L_0029E87C:
    // 0x0029E87C: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    // 0x0029E880: blez        $a2, L_0029E8B0
    if (SIGNED(ctx->r6) <= 0) {
        // 0x0029E884: nop
    
            goto L_0029E8B0;
    }
    // 0x0029E884: nop

    // 0x0029E888: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x0029E88C: jalr        $s4
    // 0x0029E890: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    LOOKUP_FUNC(ctx->r20)(rdram, ctx);
        goto after_7;
    // 0x0029E890: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    after_7:
    // 0x0029E894: addu        $s3, $v0, $zero
    ctx->r19 = ADD32(ctx->r2, 0);
    // 0x0029E898: beq         $s3, $zero, L_0029EA10
    if (ctx->r19 == 0) {
        // 0x0029E89C: nop
    
            goto L_0029EA10;
    }
    // 0x0029E89C: nop

    // 0x0029E8A0: lw          $v0, 0x3C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X3C);
    // 0x0029E8A4: lw          $v1, 0x24($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X24);
    // 0x0029E8A8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x0029E8AC: sw          $v0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r2;
L_0029E8B0:
    // 0x0029E8B0: lw          $v0, 0x28($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X28);
    // 0x0029E8B4: blez        $v0, L_0029E90C
    if (SIGNED(ctx->r2) <= 0) {
        // 0x0029E8B8: nop
    
            goto L_0029E90C;
    }
    // 0x0029E8B8: nop

    // 0x0029E8BC: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x0029E8C0: sltiu       $v0, $s1, 0x21
    ctx->r2 = ctx->r17 < 0X21 ? 1 : 0;
L_0029E8C4:
    // 0x0029E8C4: beq         $v0, $zero, L_0029E8D0
    if (ctx->r2 == 0) {
        // 0x0029E8C8: addiu       $s0, $zero, 0x20
        ctx->r16 = ADD32(0, 0X20);
            goto L_0029E8D0;
    }
    // 0x0029E8C8: addiu       $s0, $zero, 0x20
    ctx->r16 = ADD32(0, 0X20);
    // 0x0029E8CC: addu        $s0, $s1, $zero
    ctx->r16 = ADD32(ctx->r17, 0);
L_0029E8D0:
    // 0x0029E8D0: blezl       $s0, L_0029E904
    if (SIGNED(ctx->r16) <= 0) {
        // 0x0029E8D4: subu        $s1, $s1, $s0
        ctx->r17 = SUB32(ctx->r17, ctx->r16);
            goto L_0029E904;
    }
    goto skip_6;
    // 0x0029E8D4: subu        $s1, $s1, $s0
    ctx->r17 = SUB32(ctx->r17, ctx->r16);
    skip_6:
    // 0x0029E8D8: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x0029E8DC: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x0029E8E0: addiu       $a1, $a1, -0x763C
    ctx->r5 = ADD32(ctx->r5, -0X763C);
    // 0x0029E8E4: jalr        $s4
    // 0x0029E8E8: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r20)(rdram, ctx);
        goto after_8;
    // 0x0029E8E8: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    after_8:
    // 0x0029E8EC: addu        $s3, $v0, $zero
    ctx->r19 = ADD32(ctx->r2, 0);
    // 0x0029E8F0: beq         $s3, $zero, L_0029EA10
    if (ctx->r19 == 0) {
        // 0x0029E8F4: subu        $s1, $s1, $s0
        ctx->r17 = SUB32(ctx->r17, ctx->r16);
            goto L_0029EA10;
    }
    // 0x0029E8F4: subu        $s1, $s1, $s0
    ctx->r17 = SUB32(ctx->r17, ctx->r16);
    // 0x0029E8F8: lw          $v0, 0x3C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X3C);
    // 0x0029E8FC: addu        $v0, $v0, $s0
    ctx->r2 = ADD32(ctx->r2, ctx->r16);
    // 0x0029E900: sw          $v0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r2;
L_0029E904:
    // 0x0029E904: bgtz        $s1, L_0029E8C4
    if (SIGNED(ctx->r17) > 0) {
        // 0x0029E908: sltiu       $v0, $s1, 0x21
        ctx->r2 = ctx->r17 < 0X21 ? 1 : 0;
            goto L_0029E8C4;
    }
    // 0x0029E908: sltiu       $v0, $s1, 0x21
    ctx->r2 = ctx->r17 < 0X21 ? 1 : 0;
L_0029E90C:
    // 0x0029E90C: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    // 0x0029E910: blez        $a2, L_0029E944
    if (SIGNED(ctx->r6) <= 0) {
        // 0x0029E914: addu        $a0, $s3, $zero
        ctx->r4 = ADD32(ctx->r19, 0);
            goto L_0029E944;
    }
    // 0x0029E914: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x0029E918: lw          $v0, 0x18($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X18);
    // 0x0029E91C: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x0029E920: jalr        $s4
    // 0x0029E924: addu        $a1, $v0, $a1
    ctx->r5 = ADD32(ctx->r2, ctx->r5);
    LOOKUP_FUNC(ctx->r20)(rdram, ctx);
        goto after_9;
    // 0x0029E924: addu        $a1, $v0, $a1
    ctx->r5 = ADD32(ctx->r2, ctx->r5);
    after_9:
    // 0x0029E928: addu        $s3, $v0, $zero
    ctx->r19 = ADD32(ctx->r2, 0);
    // 0x0029E92C: beq         $s3, $zero, L_0029EA10
    if (ctx->r19 == 0) {
        // 0x0029E930: nop
    
            goto L_0029EA10;
    }
    // 0x0029E930: nop

    // 0x0029E934: lw          $v0, 0x3C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X3C);
    // 0x0029E938: lw          $v1, 0x2C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X2C);
    // 0x0029E93C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x0029E940: sw          $v0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r2;
L_0029E944:
    // 0x0029E944: lw          $v0, 0x30($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X30);
    // 0x0029E948: blez        $v0, L_0029E9A0
    if (SIGNED(ctx->r2) <= 0) {
        // 0x0029E94C: nop
    
            goto L_0029E9A0;
    }
    // 0x0029E94C: nop

    // 0x0029E950: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x0029E954: sltiu       $v0, $s1, 0x21
    ctx->r2 = ctx->r17 < 0X21 ? 1 : 0;
L_0029E958:
    // 0x0029E958: beq         $v0, $zero, L_0029E964
    if (ctx->r2 == 0) {
        // 0x0029E95C: addiu       $s0, $zero, 0x20
        ctx->r16 = ADD32(0, 0X20);
            goto L_0029E964;
    }
    // 0x0029E95C: addiu       $s0, $zero, 0x20
    ctx->r16 = ADD32(0, 0X20);
    // 0x0029E960: addu        $s0, $s1, $zero
    ctx->r16 = ADD32(ctx->r17, 0);
L_0029E964:
    // 0x0029E964: blezl       $s0, L_0029E998
    if (SIGNED(ctx->r16) <= 0) {
        // 0x0029E968: subu        $s1, $s1, $s0
        ctx->r17 = SUB32(ctx->r17, ctx->r16);
            goto L_0029E998;
    }
    goto skip_7;
    // 0x0029E968: subu        $s1, $s1, $s0
    ctx->r17 = SUB32(ctx->r17, ctx->r16);
    skip_7:
    // 0x0029E96C: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x0029E970: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x0029E974: addiu       $a1, $a1, -0x763C
    ctx->r5 = ADD32(ctx->r5, -0X763C);
    // 0x0029E978: jalr        $s4
    // 0x0029E97C: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r20)(rdram, ctx);
        goto after_10;
    // 0x0029E97C: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    after_10:
    // 0x0029E980: addu        $s3, $v0, $zero
    ctx->r19 = ADD32(ctx->r2, 0);
    // 0x0029E984: beq         $s3, $zero, L_0029EA10
    if (ctx->r19 == 0) {
        // 0x0029E988: subu        $s1, $s1, $s0
        ctx->r17 = SUB32(ctx->r17, ctx->r16);
            goto L_0029EA10;
    }
    // 0x0029E988: subu        $s1, $s1, $s0
    ctx->r17 = SUB32(ctx->r17, ctx->r16);
    // 0x0029E98C: lw          $v0, 0x3C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X3C);
    // 0x0029E990: addu        $v0, $v0, $s0
    ctx->r2 = ADD32(ctx->r2, ctx->r16);
    // 0x0029E994: sw          $v0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r2;
L_0029E998:
    // 0x0029E998: bgtz        $s1, L_0029E958
    if (SIGNED(ctx->r17) > 0) {
        // 0x0029E99C: sltiu       $v0, $s1, 0x21
        ctx->r2 = ctx->r17 < 0X21 ? 1 : 0;
            goto L_0029E958;
    }
    // 0x0029E99C: sltiu       $v0, $s1, 0x21
    ctx->r2 = ctx->r17 < 0X21 ? 1 : 0;
L_0029E9A0:
    // 0x0029E9A0: lw          $v0, 0x40($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X40);
    // 0x0029E9A4: andi        $v0, $v0, 0x4
    ctx->r2 = ctx->r2 & 0X4;
    // 0x0029E9A8: beq         $v0, $zero, L_0029E520
    if (ctx->r2 == 0) {
        // 0x0029E9AC: addiu       $a1, $s2, 0x1
        ctx->r5 = ADD32(ctx->r18, 0X1);
            goto L_0029E520;
    }
    // 0x0029E9AC: addiu       $a1, $s2, 0x1
    ctx->r5 = ADD32(ctx->r18, 0X1);
    // 0x0029E9B0: lw          $v0, 0x38($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X38);
    // 0x0029E9B4: blez        $v0, L_0029E520
    if (SIGNED(ctx->r2) <= 0) {
        // 0x0029E9B8: addu        $s1, $v0, $zero
        ctx->r17 = ADD32(ctx->r2, 0);
            goto L_0029E520;
    }
    // 0x0029E9B8: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x0029E9BC: sltiu       $v0, $s1, 0x21
    ctx->r2 = ctx->r17 < 0X21 ? 1 : 0;
L_0029E9C0:
    // 0x0029E9C0: beq         $v0, $zero, L_0029E9CC
    if (ctx->r2 == 0) {
        // 0x0029E9C4: addiu       $s0, $zero, 0x20
        ctx->r16 = ADD32(0, 0X20);
            goto L_0029E9CC;
    }
    // 0x0029E9C4: addiu       $s0, $zero, 0x20
    ctx->r16 = ADD32(0, 0X20);
    // 0x0029E9C8: addu        $s0, $s1, $zero
    ctx->r16 = ADD32(ctx->r17, 0);
L_0029E9CC:
    // 0x0029E9CC: blezl       $s0, L_0029EA00
    if (SIGNED(ctx->r16) <= 0) {
        // 0x0029E9D0: subu        $s1, $s1, $s0
        ctx->r17 = SUB32(ctx->r17, ctx->r16);
            goto L_0029EA00;
    }
    goto skip_8;
    // 0x0029E9D0: subu        $s1, $s1, $s0
    ctx->r17 = SUB32(ctx->r17, ctx->r16);
    skip_8:
    // 0x0029E9D4: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x0029E9D8: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x0029E9DC: addiu       $a1, $a1, -0x7660
    ctx->r5 = ADD32(ctx->r5, -0X7660);
    // 0x0029E9E0: jalr        $s4
    // 0x0029E9E4: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r20)(rdram, ctx);
        goto after_11;
    // 0x0029E9E4: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    after_11:
    // 0x0029E9E8: addu        $s3, $v0, $zero
    ctx->r19 = ADD32(ctx->r2, 0);
    // 0x0029E9EC: beq         $s3, $zero, L_0029EA10
    if (ctx->r19 == 0) {
        // 0x0029E9F0: subu        $s1, $s1, $s0
        ctx->r17 = SUB32(ctx->r17, ctx->r16);
            goto L_0029EA10;
    }
    // 0x0029E9F0: subu        $s1, $s1, $s0
    ctx->r17 = SUB32(ctx->r17, ctx->r16);
    // 0x0029E9F4: lw          $v0, 0x3C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X3C);
    // 0x0029E9F8: addu        $v0, $v0, $s0
    ctx->r2 = ADD32(ctx->r2, ctx->r16);
    // 0x0029E9FC: sw          $v0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r2;
L_0029EA00:
    // 0x0029EA00: bgtz        $s1, L_0029E9C0
    if (SIGNED(ctx->r17) > 0) {
        // 0x0029EA04: sltiu       $v0, $s1, 0x21
        ctx->r2 = ctx->r17 < 0X21 ? 1 : 0;
            goto L_0029E9C0;
    }
    // 0x0029EA04: sltiu       $v0, $s1, 0x21
    ctx->r2 = ctx->r17 < 0X21 ? 1 : 0;
    // 0x0029EA08: j           L_0029E520
    // 0x0029EA0C: addiu       $a1, $s2, 0x1
    ctx->r5 = ADD32(ctx->r18, 0X1);
        goto L_0029E520;
    // 0x0029EA0C: addiu       $a1, $s2, 0x1
    ctx->r5 = ADD32(ctx->r18, 0X1);
L_0029EA10:
    // 0x0029EA10: lw          $v0, 0x3C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X3C);
    // 0x0029EA14: lw          $ra, 0x7C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X7C);
    // 0x0029EA18: lw          $s4, 0x78($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X78);
    // 0x0029EA1C: lw          $s3, 0x74($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X74);
    // 0x0029EA20: lw          $s2, 0x70($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X70);
    // 0x0029EA24: lw          $s1, 0x6C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X6C);
    // 0x0029EA28: lw          $s0, 0x68($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X68);
    // 0x0029EA2C: jr          $ra
    // 0x0029EA30: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
    return;
    // 0x0029EA30: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
;}
RECOMP_FUNC void func_00459E54(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
;}
RECOMP_FUNC void func_0045FE7C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_00426EBC:
    // 0x0045FE7C: lbu         $v0, 0x0($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X0);
    // 0x0045FE80: beq         $v0, $zero, L_0045FE94
    if (ctx->r2 == 0) {
        // 0x0045FE84: addiu       $v1, $a0, 0x1
        ctx->r3 = ADD32(ctx->r4, 0X1);
            goto L_0045FE94;
    }
    // 0x0045FE84: addiu       $v1, $a0, 0x1
    ctx->r3 = ADD32(ctx->r4, 0X1);
L_0045FE88:
    // 0x0045FE88: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x0045FE8C: bne         $v0, $zero, L_0045FE88
    if (ctx->r2 != 0) {
        // 0x0045FE90: addiu       $v1, $v1, 0x1
        ctx->r3 = ADD32(ctx->r3, 0X1);
            goto L_0045FE88;
    }
    // 0x0045FE90: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
L_0045FE94:
    // 0x0045FE94: j           L_00426EBC
    // 0x0045FE98: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    entry_00426EBC(rdram, ctx);
    return;
    // 0x0045FE98: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
L_0045FE9C:
    // 0x0045FE9C: lbu         $v0, 0x0($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X0);
    // 0x0045FEA0: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x0045FEA4: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x0045FEA8: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x0045FEAC: bne         $v0, $zero, L_0045FEBC
    if (ctx->r2 != 0) {
        // 0x0045FEB0: addiu       $v1, $v1, 0x1
        ctx->r3 = ADD32(ctx->r3, 0X1);
            goto L_0045FEBC;
    }
    // 0x0045FEB0: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x0045FEB4: jr          $ra
    // 0x0045FEB8: addu        $v0, $a0, $zero
    ctx->r2 = ADD32(ctx->r4, 0);
    return;
    // 0x0045FEB8: addu        $v0, $a0, $zero
    ctx->r2 = ADD32(ctx->r4, 0);
L_0045FEBC:
    // 0x0045FEBC: addu        $v0, $a2, $zero
    ctx->r2 = ADD32(ctx->r6, 0);
    // 0x0045FEC0: bne         $v0, $zero, L_0045FE9C
    if (ctx->r2 != 0) {
        // 0x0045FEC4: addiu       $a2, $a2, -0x1
        ctx->r6 = ADD32(ctx->r6, -0X1);
            goto L_0045FE9C;
    }
    // 0x0045FEC4: addiu       $a2, $a2, -0x1
    ctx->r6 = ADD32(ctx->r6, -0X1);
    // 0x0045FEC8: sb          $zero, 0x0($v1)
    MEM_B(0X0, ctx->r3) = 0;
    // 0x0045FECC: jr          $ra
    // 0x0045FED0: addu        $v0, $a0, $zero
    ctx->r2 = ADD32(ctx->r4, 0);
    return;
    // 0x0045FED0: addu        $v0, $a0, $zero
    ctx->r2 = ADD32(ctx->r4, 0);
;}
RECOMP_FUNC void func_0042E5AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0042E5AC: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x0042E5B0: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x0042E5B4: addu        $s4, $a0, $zero
    ctx->r20 = ADD32(ctx->r4, 0);
    // 0x0042E5B8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x0042E5BC: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x0042E5C0: sw          $s5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r21;
    // 0x0042E5C4: addu        $s5, $a2, $zero
    ctx->r21 = ADD32(ctx->r6, 0);
    // 0x0042E5C8: addiu       $a0, $s4, 0xC
    ctx->r4 = ADD32(ctx->r20, 0XC);
    // 0x0042E5CC: addiu       $a1, $zero, 0x131C
    ctx->r5 = ADD32(0, 0X131C);
    // 0x0042E5D0: addiu       $a2, $zero, 0x1320
    ctx->r6 = ADD32(0, 0X1320);
    // 0x0042E5D4: sw          $ra, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r31;
    // 0x0042E5D8: sw          $s7, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r23;
    // 0x0042E5DC: sw          $s6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r22;
    // 0x0042E5E0: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x0042E5E4: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x0042E5E8: jal         0x00200500
    // 0x0042E5EC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    func_00200500(rdram, ctx);
        goto after_0;
    // 0x0042E5EC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_0:
    // 0x0042E5F0: addiu       $a0, $s4, 0x20
    ctx->r4 = ADD32(ctx->r20, 0X20);
    // 0x0042E5F4: addiu       $a1, $zero, 0x131C
    ctx->r5 = ADD32(0, 0X131C);
    // 0x0042E5F8: jal         0x00200500
    // 0x0042E5FC: addiu       $a2, $zero, 0x1320
    ctx->r6 = ADD32(0, 0X1320);
    func_00200500(rdram, ctx);
        goto after_1;
    // 0x0042E5FC: addiu       $a2, $zero, 0x1320
    ctx->r6 = ADD32(0, 0X1320);
    after_1:
    // 0x0042E600: jal         0x00285410
    // 0x0042E604: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_00285410(rdram, ctx);
        goto after_2;
    // 0x0042E604: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_2:
    // 0x0042E608: jal         0x002053A8
    // 0x0042E60C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_002053A8(rdram, ctx);
        goto after_3;
    // 0x0042E60C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_3:
    // 0x0042E610: lw          $a1, 0x0($s4)
    ctx->r5 = MEM_W(ctx->r20, 0X0);
    // 0x0042E614: lui         $s7, 0x8012
    ctx->r23 = S32(0X8012 << 16);
    // 0x0042E618: addiu       $s7, $s7, -0x5528
    ctx->r23 = ADD32(ctx->r23, -0X5528);
    // 0x0042E61C: beq         $a1, $zero, L_0042E638
    if (ctx->r5 == 0) {
        // 0x0042E620: nop
    
            goto L_0042E638;
    }
    // 0x0042E620: nop

    // 0x0042E624: jal         0x002052D8
    // 0x0042E628: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_002052D8(rdram, ctx);
        goto after_4;
    // 0x0042E628: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_4:
    // 0x0042E62C: sw          $zero, 0x0($s4)
    MEM_W(0X0, ctx->r20) = 0;
    // 0x0042E630: sw          $zero, 0x4($s4)
    MEM_W(0X4, ctx->r20) = 0;
    // 0x0042E634: sw          $zero, 0x8($s4)
    MEM_W(0X8, ctx->r20) = 0;
L_0042E638:
    // 0x0042E638: beq         $s1, $zero, L_0042E808
    if (ctx->r17 == 0) {
        // 0x0042E63C: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_0042E808;
    }
    // 0x0042E63C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0042E640: sll         $s0, $s1, 3
    ctx->r16 = S32(ctx->r17 << 3);
    // 0x0042E644: addu        $s0, $s0, $s1
    ctx->r16 = ADD32(ctx->r16, ctx->r17);
    // 0x0042E648: sll         $v0, $s0, 4
    ctx->r2 = S32(ctx->r16 << 4);
    // 0x0042E64C: addu        $s0, $s0, $v0
    ctx->r16 = ADD32(ctx->r16, ctx->r2);
    // 0x0042E650: sll         $s0, $s0, 2
    ctx->r16 = S32(ctx->r16 << 2);
    // 0x0042E654: addu        $s0, $s0, $s1
    ctx->r16 = ADD32(ctx->r16, ctx->r17);
    // 0x0042E658: sll         $s0, $s0, 3
    ctx->r16 = S32(ctx->r16 << 3);
    // 0x0042E65C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x0042E660: addiu       $a2, $zero, 0x23
    ctx->r6 = ADD32(0, 0X23);
    // 0x0042E664: lui         $a3, 0x800A
    ctx->r7 = S32(0X800A << 16);
    // 0x0042E668: addiu       $a3, $a3, 0x7080
    ctx->r7 = ADD32(ctx->r7, 0X7080);
    // 0x0042E66C: jal         0x00204EDC
    // 0x0042E670: sw          $s1, 0x8($s4)
    MEM_W(0X8, ctx->r20) = ctx->r17;
    func_00204EDC(rdram, ctx);
        goto after_5;
    // 0x0042E670: sw          $s1, 0x8($s4)
    MEM_W(0X8, ctx->r20) = ctx->r17;
    after_5:
    // 0x0042E674: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x0042E678: sw          $v0, 0x0($s4)
    MEM_W(0X0, ctx->r20) = ctx->r2;
    // 0x0042E67C: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
    // 0x0042E680: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    // 0x0042E684: jal         0x00266C5C
    // 0x0042E688: sw          $a0, 0x4($s4)
    MEM_W(0X4, ctx->r20) = ctx->r4;
    func_00266C5C(rdram, ctx);
        goto after_6;
    // 0x0042E688: sw          $a0, 0x4($s4)
    MEM_W(0X4, ctx->r20) = ctx->r4;
    after_6:
    // 0x0042E68C: lw          $v0, 0x8($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X8);
    // 0x0042E690: blez        $v0, L_0042E6C0
    if (SIGNED(ctx->r2) <= 0) {
        // 0x0042E694: addu        $s2, $zero, $zero
        ctx->r18 = ADD32(0, 0);
            goto L_0042E6C0;
    }
    // 0x0042E694: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    // 0x0042E698: addu        $s0, $s2, $zero
    ctx->r16 = ADD32(ctx->r18, 0);
L_0042E69C:
    // 0x0042E69C: addiu       $a0, $s4, 0xC
    ctx->r4 = ADD32(ctx->r20, 0XC);
    // 0x0042E6A0: lw          $a1, 0x4($s4)
    ctx->r5 = MEM_W(ctx->r20, 0X4);
    // 0x0042E6A4: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x0042E6A8: jal         0x00200574
    // 0x0042E6AC: addu        $a1, $a1, $s0
    ctx->r5 = ADD32(ctx->r5, ctx->r16);
    func_00200574(rdram, ctx);
        goto after_7;
    // 0x0042E6AC: addu        $a1, $a1, $s0
    ctx->r5 = ADD32(ctx->r5, ctx->r16);
    after_7:
    // 0x0042E6B0: lw          $v0, 0x8($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X8);
    // 0x0042E6B4: slt         $v0, $s2, $v0
    ctx->r2 = SIGNED(ctx->r18) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x0042E6B8: bne         $v0, $zero, L_0042E69C
    if (ctx->r2 != 0) {
        // 0x0042E6BC: addiu       $s0, $s0, 0x1328
        ctx->r16 = ADD32(ctx->r16, 0X1328);
            goto L_0042E69C;
    }
    // 0x0042E6BC: addiu       $s0, $s0, 0x1328
    ctx->r16 = ADD32(ctx->r16, 0X1328);
L_0042E6C0:
    // 0x0042E6C0: lbu         $v0, 0x19($s7)
    ctx->r2 = MEM_BU(ctx->r23, 0X19);
    // 0x0042E6C4: beq         $v0, $zero, L_0042E77C
    if (ctx->r2 == 0) {
        // 0x0042E6C8: addiu       $s3, $s7, 0x40
        ctx->r19 = ADD32(ctx->r23, 0X40);
            goto L_0042E77C;
    }
    // 0x0042E6C8: addiu       $s3, $s7, 0x40
    ctx->r19 = ADD32(ctx->r23, 0X40);
    // 0x0042E6CC: lw          $v0, 0x8($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X8);
    // 0x0042E6D0: blez        $v0, L_0042E7FC
    if (SIGNED(ctx->r2) <= 0) {
        // 0x0042E6D4: addu        $s2, $zero, $zero
        ctx->r18 = ADD32(0, 0);
            goto L_0042E7FC;
    }
    // 0x0042E6D4: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    // 0x0042E6D8: lui         $s6, 0x800F
    ctx->r22 = S32(0X800F << 16);
    // 0x0042E6DC: addiu       $s6, $s6, 0x5EC0
    ctx->r22 = ADD32(ctx->r22, 0X5EC0);
    // 0x0042E6E0: addiu       $s5, $zero, 0x80
    ctx->r21 = ADD32(0, 0X80);
    // 0x0042E6E4: addu        $s0, $s2, $zero
    ctx->r16 = ADD32(ctx->r18, 0);
L_0042E6E8:
    // 0x0042E6E8: addu        $s3, $s7, $s5
    ctx->r19 = ADD32(ctx->r23, ctx->r21);
    // 0x0042E6EC: lw          $v0, 0x4($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X4);
    // 0x0042E6F0: addu        $a1, $s6, $zero
    ctx->r5 = ADD32(ctx->r22, 0);
    // 0x0042E6F4: addu        $s1, $v0, $s0
    ctx->r17 = ADD32(ctx->r2, ctx->r16);
    // 0x0042E6F8: addiu       $a0, $s1, 0xA40
    ctx->r4 = ADD32(ctx->r17, 0XA40);
    // 0x0042E6FC: jal         0x002470E8
    // 0x0042E700: sw          $zero, 0x510($s1)
    MEM_W(0X510, ctx->r17) = 0;
    func_002470E8(rdram, ctx);
        goto after_8;
    // 0x0042E700: sw          $zero, 0x510($s1)
    MEM_W(0X510, ctx->r17) = 0;
    after_8:
    // 0x0042E704: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0042E708: sw          $s2, 0x514($s1)
    MEM_W(0X514, ctx->r17) = ctx->r18;
    // 0x0042E70C: sw          $s3, 0x518($s1)
    MEM_W(0X518, ctx->r17) = ctx->r19;
    // 0x0042E710: sw          $zero, 0x1288($s1)
    MEM_W(0X1288, ctx->r17) = 0;
    // 0x0042E714: sw          $zero, 0x128C($s1)
    MEM_W(0X128C, ctx->r17) = 0;
    // 0x0042E718: sw          $zero, 0x92C($s1)
    MEM_W(0X92C, ctx->r17) = 0;
    // 0x0042E71C: sw          $zero, 0x930($s1)
    MEM_W(0X930, ctx->r17) = 0;
    // 0x0042E720: jal         0x00248340
    // 0x0042E724: sw          $zero, 0xC00($s1)
    MEM_W(0XC00, ctx->r17) = 0;
    func_00248340(rdram, ctx);
        goto after_9;
    // 0x0042E724: sw          $zero, 0xC00($s1)
    MEM_W(0XC00, ctx->r17) = 0;
    after_9:
    // 0x0042E728: lbu         $v0, 0x28($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0X28);
    // 0x0042E72C: beq         $v0, $zero, L_0042E758
    if (ctx->r2 == 0) {
        // 0x0042E730: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_0042E758;
    }
    // 0x0042E730: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0042E734: lb          $a1, 0x30($s3)
    ctx->r5 = MEM_B(ctx->r19, 0X30);
    // 0x0042E738: jal         0x0042DC18
    // 0x0042E73C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_0042DC18(rdram, ctx);
        goto after_10;
    // 0x0042E73C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_10:
    // 0x0042E740: addiu       $a0, $s4, 0xC
    ctx->r4 = ADD32(ctx->r20, 0XC);
    // 0x0042E744: jal         0x00200738
    // 0x0042E748: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_00200738(rdram, ctx);
        goto after_11;
    // 0x0042E748: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_11:
    // 0x0042E74C: addiu       $a0, $s4, 0x20
    ctx->r4 = ADD32(ctx->r20, 0X20);
    // 0x0042E750: jal         0x00200518
    // 0x0042E754: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_00200518(rdram, ctx);
        goto after_12;
    // 0x0042E754: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_12:
L_0042E758:
    // 0x0042E758: addiu       $s6, $s6, 0x224
    ctx->r22 = ADD32(ctx->r22, 0X224);
    // 0x0042E75C: addiu       $s5, $s5, 0x40
    ctx->r21 = ADD32(ctx->r21, 0X40);
    // 0x0042E760: lw          $v0, 0x8($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X8);
    // 0x0042E764: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x0042E768: slt         $v0, $s2, $v0
    ctx->r2 = SIGNED(ctx->r18) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x0042E76C: bne         $v0, $zero, L_0042E6E8
    if (ctx->r2 != 0) {
        // 0x0042E770: addiu       $s0, $s0, 0x1328
        ctx->r16 = ADD32(ctx->r16, 0X1328);
            goto L_0042E6E8;
    }
    // 0x0042E770: addiu       $s0, $s0, 0x1328
    ctx->r16 = ADD32(ctx->r16, 0X1328);
    // 0x0042E774: j           L_0042E800
    // 0x0042E778: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_0042E800;
    // 0x0042E778: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_0042E77C:
    // 0x0042E77C: lui         $v0, 0x800F
    ctx->r2 = S32(0X800F << 16);
    // 0x0042E780: addiu       $v0, $v0, 0x5EC0
    ctx->r2 = ADD32(ctx->r2, 0X5EC0);
    // 0x0042E784: lw          $s1, 0x4($s4)
    ctx->r17 = MEM_W(ctx->r20, 0X4);
    // 0x0042E788: lb          $s0, 0x2F($s3)
    ctx->r16 = MEM_B(ctx->r19, 0X2F);
    // 0x0042E78C: addiu       $a0, $s1, 0xA40
    ctx->r4 = ADD32(ctx->r17, 0XA40);
    // 0x0042E790: sll         $a1, $s0, 4
    ctx->r5 = S32(ctx->r16 << 4);
    // 0x0042E794: addu        $a1, $a1, $s0
    ctx->r5 = ADD32(ctx->r5, ctx->r16);
    // 0x0042E798: sll         $a1, $a1, 3
    ctx->r5 = S32(ctx->r5 << 3);
    // 0x0042E79C: addu        $a1, $a1, $s0
    ctx->r5 = ADD32(ctx->r5, ctx->r16);
    // 0x0042E7A0: sll         $a1, $a1, 2
    ctx->r5 = S32(ctx->r5 << 2);
    // 0x0042E7A4: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    // 0x0042E7A8: jal         0x002470E8
    // 0x0042E7AC: sw          $zero, 0x510($s1)
    MEM_W(0X510, ctx->r17) = 0;
    func_002470E8(rdram, ctx);
        goto after_13;
    // 0x0042E7AC: sw          $zero, 0x510($s1)
    MEM_W(0X510, ctx->r17) = 0;
    after_13:
    // 0x0042E7B0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0042E7B4: sw          $s0, 0x514($s1)
    MEM_W(0X514, ctx->r17) = ctx->r16;
    // 0x0042E7B8: sw          $s3, 0x518($s1)
    MEM_W(0X518, ctx->r17) = ctx->r19;
    // 0x0042E7BC: sw          $zero, 0x1288($s1)
    MEM_W(0X1288, ctx->r17) = 0;
    // 0x0042E7C0: sw          $zero, 0x128C($s1)
    MEM_W(0X128C, ctx->r17) = 0;
    // 0x0042E7C4: sw          $zero, 0x92C($s1)
    MEM_W(0X92C, ctx->r17) = 0;
    // 0x0042E7C8: sw          $zero, 0x930($s1)
    MEM_W(0X930, ctx->r17) = 0;
    // 0x0042E7CC: jal         0x00248340
    // 0x0042E7D0: sw          $zero, 0xC00($s1)
    MEM_W(0XC00, ctx->r17) = 0;
    func_00248340(rdram, ctx);
        goto after_14;
    // 0x0042E7D0: sw          $zero, 0xC00($s1)
    MEM_W(0XC00, ctx->r17) = 0;
    after_14:
    // 0x0042E7D4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0042E7D8: lb          $a1, 0x30($s3)
    ctx->r5 = MEM_B(ctx->r19, 0X30);
    // 0x0042E7DC: jal         0x0042DC18
    // 0x0042E7E0: addu        $a2, $s5, $zero
    ctx->r6 = ADD32(ctx->r21, 0);
    func_0042DC18(rdram, ctx);
        goto after_15;
    // 0x0042E7E0: addu        $a2, $s5, $zero
    ctx->r6 = ADD32(ctx->r21, 0);
    after_15:
    // 0x0042E7E4: addiu       $a0, $s4, 0xC
    ctx->r4 = ADD32(ctx->r20, 0XC);
    // 0x0042E7E8: jal         0x00200738
    // 0x0042E7EC: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_00200738(rdram, ctx);
        goto after_16;
    // 0x0042E7EC: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_16:
    // 0x0042E7F0: addiu       $a0, $s4, 0x20
    ctx->r4 = ADD32(ctx->r20, 0X20);
    // 0x0042E7F4: jal         0x00200518
    // 0x0042E7F8: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_00200518(rdram, ctx);
        goto after_17;
    // 0x0042E7F8: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_17:
L_0042E7FC:
    // 0x0042E7FC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_0042E800:
    // 0x0042E800: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x0042E804: sw          $v0, -0x5310($at)
    MEM_W(-0X5310, ctx->r1) = ctx->r2;
L_0042E808:
    // 0x0042E808: lw          $ra, 0x30($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X30);
    // 0x0042E80C: lw          $s7, 0x2C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X2C);
    // 0x0042E810: lw          $s6, 0x28($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X28);
    // 0x0042E814: lw          $s5, 0x24($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X24);
    // 0x0042E818: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x0042E81C: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x0042E820: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x0042E824: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x0042E828: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0042E82C: jr          $ra
    // 0x0042E830: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x0042E830: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_00468570(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00468570: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00468574: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x00468578: lw          $v0, 0x1C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X1C);
    // 0x0046857C: jalr        $v0
    // 0x00468580: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x00468580: nop

    after_0:
    // 0x00468584: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x00468588: jr          $ra
    // 0x0046858C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0046858C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
