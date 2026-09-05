#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_0025F784(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0025F784: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0025F788: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x0025F78C: lb          $v1, 0xC7($a1)
    ctx->r3 = MEM_B(ctx->r5, 0XC7);
    // 0x0025F790: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0025F794: beq         $v1, $zero, L_0025F7A4
    if (ctx->r3 == 0) {
        // 0x0025F798: sb          $v0, 0x133($a1)
        MEM_B(0X133, ctx->r5) = ctx->r2;
            goto L_0025F7A4;
    }
    // 0x0025F798: sb          $v0, 0x133($a1)
    MEM_B(0X133, ctx->r5) = ctx->r2;
    // 0x0025F79C: jal         0x00243414
    // 0x0025F7A0: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    func_00243414(rdram, ctx);
        goto after_0;
    // 0x0025F7A0: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_0:
L_0025F7A4:
    // 0x0025F7A4: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x0025F7A8: jr          $ra
    // 0x0025F7AC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0025F7AC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00408EA4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00408EA4: jr          $ra
    // 0x00408EA8: nop

    return;
    // 0x00408EA8: nop

;}
RECOMP_FUNC void func_00290E40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00290E40: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x00290E44: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x00290E48: ori         $a1, $a1, 0xB0
    ctx->r5 = ctx->r5 | 0XB0;
    // 0x00290E4C: sh          $v0, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r2;
    // 0x00290E50: addiu       $v0, $zero, 0x5B
    ctx->r2 = ADD32(0, 0X5B);
    // 0x00290E54: addiu       $a0, $a0, 0x48
    ctx->r4 = ADD32(ctx->r4, 0X48);
    // 0x00290E58: sb          $a1, 0x18($sp)
    MEM_B(0X18, ctx->r29) = ctx->r5;
    // 0x00290E5C: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x00290E60: sb          $a2, 0x1A($sp)
    MEM_B(0X1A, ctx->r29) = ctx->r6;
    // 0x00290E64: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x00290E68: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x00290E6C: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x00290E70: jal         0x00291034
    // 0x00290E74: sb          $v0, 0x19($sp)
    MEM_B(0X19, ctx->r29) = ctx->r2;
    func_00291034(rdram, ctx);
        goto after_0;
    // 0x00290E74: sb          $v0, 0x19($sp)
    MEM_B(0X19, ctx->r29) = ctx->r2;
    after_0:
    // 0x00290E78: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x00290E7C: jr          $ra
    // 0x00290E80: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x00290E80: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_0045AE50(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0045AE50: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x0045AE54: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0045AE58: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x0045AE5C: lw          $v0, 0x201C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X201C);
    // 0x0045AE60: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x0045AE64: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x0045AE68: lh          $s1, 0x22($v0)
    ctx->r17 = MEM_H(ctx->r2, 0X22);
    // 0x0045AE6C: jal         0x004160F0
    // 0x0045AE70: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    func_004160F0(rdram, ctx);
        goto after_0;
    // 0x0045AE70: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    after_0:
    // 0x0045AE74: addiu       $v0, $v0, -0x2
    ctx->r2 = ADD32(ctx->r2, -0X2);
    // 0x0045AE78: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x0045AE7C: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x0045AE80: addiu       $a1, $a1, 0x1414
    ctx->r5 = ADD32(ctx->r5, 0X1414);
    // 0x0045AE84: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x0045AE88: jal         0x0029E3E0
    // 0x0045AE8C: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    func_0029E3E0(rdram, ctx);
        goto after_1;
    // 0x0045AE8C: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    after_1:
    // 0x0045AE90: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x0045AE94: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x0045AE98: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0045AE9C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x0045AEA0: jr          $ra
    // 0x0045AEA4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x0045AEA4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_00255298(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00255298: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0025529C: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x002552A0: lh          $v1, 0xA08($a0)
    ctx->r3 = MEM_H(ctx->r4, 0XA08);
    // 0x002552A4: addiu       $v0, $zero, 0x12
    ctx->r2 = ADD32(0, 0X12);
    // 0x002552A8: beq         $v1, $v0, L_002552C0
    if (ctx->r3 == ctx->r2) {
        // 0x002552AC: addiu       $v0, $zero, 0x10
        ctx->r2 = ADD32(0, 0X10);
            goto L_002552C0;
    }
    // 0x002552AC: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x002552B0: beq         $v1, $v0, L_002552C0
    if (ctx->r3 == ctx->r2) {
        // 0x002552B4: addiu       $v0, $zero, 0x11
        ctx->r2 = ADD32(0, 0X11);
            goto L_002552C0;
    }
    // 0x002552B4: addiu       $v0, $zero, 0x11
    ctx->r2 = ADD32(0, 0X11);
    // 0x002552B8: bne         $v1, $v0, L_002552C4
    if (ctx->r3 != ctx->r2) {
        // 0x002552BC: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_002552C4;
    }
    // 0x002552BC: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_002552C0:
    // 0x002552C0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_002552C4:
    // 0x002552C4: bne         $v0, $zero, L_00255334
    if (ctx->r2 != 0) {
        // 0x002552C8: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_00255334;
    }
    // 0x002552C8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x002552CC: lw          $v0, 0x14($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X14);
    // 0x002552D0: lw          $v0, 0x14($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X14);
    // 0x002552D4: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x002552D8: beq         $v0, $zero, L_00255330
    if (ctx->r2 == 0) {
        // 0x002552DC: addiu       $v0, $zero, 0x23
        ctx->r2 = ADD32(0, 0X23);
            goto L_00255330;
    }
    // 0x002552DC: addiu       $v0, $zero, 0x23
    ctx->r2 = ADD32(0, 0X23);
    // 0x002552E0: lh          $a2, 0xA08($a0)
    ctx->r6 = MEM_H(ctx->r4, 0XA08);
    // 0x002552E4: beq         $a2, $v0, L_00255334
    if (ctx->r6 == ctx->r2) {
        // 0x002552E8: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_00255334;
    }
    // 0x002552E8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x002552EC: lw          $v0, 0xA1C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XA1C);
    // 0x002552F0: andi        $v0, $v0, 0x8000
    ctx->r2 = ctx->r2 & 0X8000;
    // 0x002552F4: bne         $v0, $zero, L_00255334
    if (ctx->r2 != 0) {
        // 0x002552F8: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_00255334;
    }
    // 0x002552F8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x002552FC: lw          $v1, 0x140($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X140);
    // 0x00255300: andi        $v0, $v1, 0x80
    ctx->r2 = ctx->r3 & 0X80;
    // 0x00255304: bne         $v0, $zero, L_00255334
    if (ctx->r2 != 0) {
        // 0x00255308: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_00255334;
    }
    // 0x00255308: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x0025530C: addiu       $v0, $zero, 0xE
    ctx->r2 = ADD32(0, 0XE);
    // 0x00255310: beq         $a2, $v0, L_00255330
    if (ctx->r6 == ctx->r2) {
        // 0x00255314: andi        $v0, $v1, 0x1000
        ctx->r2 = ctx->r3 & 0X1000;
            goto L_00255330;
    }
    // 0x00255314: andi        $v0, $v1, 0x1000
    ctx->r2 = ctx->r3 & 0X1000;
    // 0x00255318: beq         $v0, $zero, L_00255334
    if (ctx->r2 == 0) {
        // 0x0025531C: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_00255334;
    }
    // 0x0025531C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x00255320: jal         0x0024E5F0
    // 0x00255324: addiu       $a2, $zero, 0xE
    ctx->r6 = ADD32(0, 0XE);
    func_0024E5F0(rdram, ctx);
        goto after_0;
    // 0x00255324: addiu       $a2, $zero, 0xE
    ctx->r6 = ADD32(0, 0XE);
    after_0:
    // 0x00255328: j           L_00255334
    // 0x0025532C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_00255334;
    // 0x0025532C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_00255330:
    // 0x00255330: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_00255334:
    // 0x00255334: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x00255338: jr          $ra
    // 0x0025533C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0025533C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0045328C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0045328C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00453290: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x00453294: jal         0x00285304
    // 0x00453298: nop

    func_00285304(rdram, ctx);
        goto after_0;
    // 0x00453298: nop

    after_0:
    // 0x0045329C: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
    // 0x004532A0: addu        $a0, $v1, $zero
    ctx->r4 = ADD32(ctx->r3, 0);
L_004532A4:
    // 0x004532A4: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x004532A8: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x004532AC: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x004532B0: lw          $v0, 0x910($at)
    ctx->r2 = MEM_W(ctx->r1, 0X910);
    // 0x004532B4: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x004532B8: lui         $at, 0x800F
    ctx->r1 = S32(0X800F << 16);
    // 0x004532BC: addu        $at, $at, $a0
    ctx->r1 = ADD32(ctx->r1, ctx->r4);
    // 0x004532C0: sw          $v0, 0x5F8C($at)
    MEM_W(0X5F8C, ctx->r1) = ctx->r2;
    // 0x004532C4: slti        $v0, $v1, 0x4
    ctx->r2 = SIGNED(ctx->r3) < 0X4 ? 1 : 0;
    // 0x004532C8: bne         $v0, $zero, L_004532A4
    if (ctx->r2 != 0) {
        // 0x004532CC: addiu       $a0, $a0, 0x224
        ctx->r4 = ADD32(ctx->r4, 0X224);
            goto L_004532A4;
    }
    // 0x004532CC: addiu       $a0, $a0, 0x224
    ctx->r4 = ADD32(ctx->r4, 0X224);
    // 0x004532D0: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x004532D4: addiu       $a0, $a0, 0x5A50
    ctx->r4 = ADD32(ctx->r4, 0X5A50);
    // 0x004532D8: jal         0x0026EDA8
    // 0x004532DC: nop

    func_0026EDA8(rdram, ctx);
        goto after_1;
    // 0x004532DC: nop

    after_1:
    // 0x004532E0: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x004532E4: jr          $ra
    // 0x004532E8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x004532E8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0029AA10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0029AA10: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0029AA14: lw          $v0, 0x7AC0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X7AC0);
    // 0x0029AA18: jr          $ra
    // 0x0029AA1C: nop

    return;
    // 0x0029AA1C: nop

;}
RECOMP_FUNC void func_0026A268(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0026A268: addiu       $sp, $sp, -0x88
    ctx->r29 = ADD32(ctx->r29, -0X88);
    // 0x0026A26C: sdc1        $f22, 0x68($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X68, ctx->r29);
    // 0x0026A270: mtc1        $a1, $f22
    ctx->f22.u32l = ctx->r5;
    // 0x0026A274: sdc1        $f24, 0x78($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X78, ctx->r29);
    // 0x0026A278: mtc1        $a2, $f24
    ctx->f24.u32l = ctx->r6;
    // 0x0026A27C: sdc1        $f23, 0x70($sp)
    CHECK_FR(ctx, 23);
    SD(ctx->f23.u64, 0X70, ctx->r29);
    // 0x0026A280: mtc1        $a3, $f23
    ctx->f_odd[(23 - 1) * 2] = ctx->r7;
    // 0x0026A284: sdc1        $f25, 0x80($sp)
    CHECK_FR(ctx, 25);
    SD(ctx->f25.u64, 0X80, ctx->r29);
    // 0x0026A288: lwc1        $f25, 0x98($sp)
    ctx->f_odd[(25 - 1) * 2] = MEM_W(ctx->r29, 0X98);
    // 0x0026A28C: sw          $s0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r16;
    // 0x0026A290: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x0026A294: sw          $ra, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r31;
    // 0x0026A298: sdc1        $f21, 0x60($sp)
    CHECK_FR(ctx, 21);
    SD(ctx->f21.u64, 0X60, ctx->r29);
    // 0x0026A29C: sdc1        $f20, 0x58($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X58, ctx->r29);
    // 0x0026A2A0: bne         $s0, $zero, L_0026A2B4
    if (ctx->r16 != 0) {
        // 0x0026A2A4: nop
    
            goto L_0026A2B4;
    }
    // 0x0026A2A4: nop

    // 0x0026A2A8: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x0026A2AC: j           L_0026A578
    // 0x0026A2B0: nop

        goto L_0026A578;
    // 0x0026A2B0: nop

L_0026A2B4:
    // 0x0026A2B4: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0026A2B8: lw          $v0, 0x2608($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2608);
    // 0x0026A2BC: beq         $s0, $v0, L_0026A2F8
    if (ctx->r16 == ctx->r2) {
        // 0x0026A2C0: nop
    
            goto L_0026A2F8;
    }
    // 0x0026A2C0: nop

    // 0x0026A2C4: lw          $a1, 0x8($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X8);
    // 0x0026A2C8: lw          $a2, 0x4($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X4);
    // 0x0026A2CC: jal         0x0020EF2C
    // 0x0026A2D0: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    func_0020EF2C(rdram, ctx);
        goto after_0;
    // 0x0026A2D0: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    after_0:
    // 0x0026A2D4: lw          $a1, 0xC($s0)
    ctx->r5 = MEM_W(ctx->r16, 0XC);
    // 0x0026A2D8: lw          $a2, 0x8($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X8);
    // 0x0026A2DC: jal         0x0020EF2C
    // 0x0026A2E0: addiu       $a0, $sp, 0x40
    ctx->r4 = ADD32(ctx->r29, 0X40);
    func_0020EF2C(rdram, ctx);
        goto after_1;
    // 0x0026A2E0: addiu       $a0, $sp, 0x40
    ctx->r4 = ADD32(ctx->r29, 0X40);
    after_1:
    // 0x0026A2E4: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x0026A2E8: addiu       $a0, $a0, 0x2020
    ctx->r4 = ADD32(ctx->r4, 0X2020);
    // 0x0026A2EC: addiu       $a1, $sp, 0x30
    ctx->r5 = ADD32(ctx->r29, 0X30);
    // 0x0026A2F0: jal         0x0020EFDC
    // 0x0026A2F4: addiu       $a2, $sp, 0x40
    ctx->r6 = ADD32(ctx->r29, 0X40);
    func_0020EFDC(rdram, ctx);
        goto after_2;
    // 0x0026A2F4: addiu       $a2, $sp, 0x40
    ctx->r6 = ADD32(ctx->r29, 0X40);
    after_2:
L_0026A2F8:
    // 0x0026A2F8: lui         $t3, 0x800F
    ctx->r11 = S32(0X800F << 16);
    // 0x0026A2FC: addiu       $t3, $t3, 0x2020
    ctx->r11 = ADD32(ctx->r11, 0X2020);
    // 0x0026A300: lw          $t0, 0x0($t3)
    ctx->r8 = MEM_W(ctx->r11, 0X0);
    // 0x0026A304: lw          $t1, 0x4($t3)
    ctx->r9 = MEM_W(ctx->r11, 0X4);
    // 0x0026A308: lw          $t2, 0x8($t3)
    ctx->r10 = MEM_W(ctx->r11, 0X8);
    // 0x0026A30C: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x0026A310: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x0026A314: sw          $t2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r10;
    // 0x0026A318: lwc1        $f1, 0x14($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X14);
    // 0x0026A31C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x0026A320: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0026A324: sw          $s0, 0x2608($at)
    MEM_W(0X2608, ctx->r1) = ctx->r16;
    // 0x0026A328: c.eq.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl == ctx->f0.fl;
    // 0x0026A32C: nop

    // 0x0026A330: bc1f        L_0026A36C
    if (!c1cs) {
        // 0x0026A334: nop
    
            goto L_0026A36C;
    }
    // 0x0026A334: nop

    // 0x0026A338: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // 0x0026A33C: lw          $v1, 0x8($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X8);
    // 0x0026A340: lwc1        $f1, 0x4($v0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r2, 0X4);
    // 0x0026A344: lwc1        $f0, 0x4($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X4);
    // 0x0026A348: lw          $v0, 0xC($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC);
    // 0x0026A34C: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x0026A350: lwc1        $f0, 0x4($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X4);
    // 0x0026A354: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x0026A358: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0026A35C: lwc1        $f0, 0x7F88($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X7F88);
    // 0x0026A360: mul.s       $f21, $f1, $f0
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f21.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x0026A364: j           L_0026A3C0
    // 0x0026A368: nop

        goto L_0026A3C0;
    // 0x0026A368: nop

L_0026A36C:
    // 0x0026A36C: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // 0x0026A370: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x0026A374: lw          $t1, 0x4($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X4);
    // 0x0026A378: lw          $t2, 0x8($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X8);
    // 0x0026A37C: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
    // 0x0026A380: sw          $t1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r9;
    // 0x0026A384: sw          $t2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r10;
    // 0x0026A388: lwc1        $f0, 0x28($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X28);
    // 0x0026A38C: sub.s       $f0, $f0, $f24
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f24.fl;
    // 0x0026A390: lwc1        $f1, 0x18($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x0026A394: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0026A398: lwc1        $f2, 0x20($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X20);
    // 0x0026A39C: sub.s       $f2, $f2, $f22
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f2.fl = ctx->f2.fl - ctx->f22.fl;
    // 0x0026A3A0: lwc1        $f1, 0x10($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x0026A3A4: mul.s       $f2, $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f1.fl);
    // 0x0026A3A8: lwc1        $f3, 0x14($sp)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r29, 0X14);
    // 0x0026A3AC: lwc1        $f1, 0x24($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X24);
    // 0x0026A3B0: mul.s       $f1, $f1, $f3
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f3.fl);
    // 0x0026A3B4: add.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f2.fl;
    // 0x0026A3B8: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x0026A3BC: div.s       $f21, $f0, $f3
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f21.fl = DIV_S(ctx->f0.fl, ctx->f3.fl);
L_0026A3C0:
    // 0x0026A3C0: bne         $s0, $zero, L_0026A3D8
    if (ctx->r16 != 0) {
        // 0x0026A3C4: nop
    
            goto L_0026A3D8;
    }
    // 0x0026A3C4: nop

    // 0x0026A3C8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0026A3CC: lwc1        $f20, 0x7F8C($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X7F8C);
    // 0x0026A3D0: j           L_0026A4E8
    // 0x0026A3D4: sub.s       $f2, $f23, $f22
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 23);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f23.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f2.fl = ctx->f23.fl - ctx->f22.fl;
        goto L_0026A4E8;
    // 0x0026A3D4: sub.s       $f2, $f23, $f22
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 23);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f23.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f2.fl = ctx->f23.fl - ctx->f22.fl;
L_0026A3D8:
    // 0x0026A3D8: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0026A3DC: lw          $v0, 0x2608($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2608);
    // 0x0026A3E0: beq         $s0, $v0, L_0026A41C
    if (ctx->r16 == ctx->r2) {
        // 0x0026A3E4: nop
    
            goto L_0026A41C;
    }
    // 0x0026A3E4: nop

    // 0x0026A3E8: lw          $a1, 0x8($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X8);
    // 0x0026A3EC: lw          $a2, 0x4($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X4);
    // 0x0026A3F0: jal         0x0020EF2C
    // 0x0026A3F4: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    func_0020EF2C(rdram, ctx);
        goto after_3;
    // 0x0026A3F4: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    after_3:
    // 0x0026A3F8: lw          $a1, 0xC($s0)
    ctx->r5 = MEM_W(ctx->r16, 0XC);
    // 0x0026A3FC: lw          $a2, 0x8($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X8);
    // 0x0026A400: jal         0x0020EF2C
    // 0x0026A404: addiu       $a0, $sp, 0x40
    ctx->r4 = ADD32(ctx->r29, 0X40);
    func_0020EF2C(rdram, ctx);
        goto after_4;
    // 0x0026A404: addiu       $a0, $sp, 0x40
    ctx->r4 = ADD32(ctx->r29, 0X40);
    after_4:
    // 0x0026A408: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x0026A40C: addiu       $a0, $a0, 0x2020
    ctx->r4 = ADD32(ctx->r4, 0X2020);
    // 0x0026A410: addiu       $a1, $sp, 0x30
    ctx->r5 = ADD32(ctx->r29, 0X30);
    // 0x0026A414: jal         0x0020EFDC
    // 0x0026A418: addiu       $a2, $sp, 0x40
    ctx->r6 = ADD32(ctx->r29, 0X40);
    func_0020EFDC(rdram, ctx);
        goto after_5;
    // 0x0026A418: addiu       $a2, $sp, 0x40
    ctx->r6 = ADD32(ctx->r29, 0X40);
    after_5:
L_0026A41C:
    // 0x0026A41C: lui         $t3, 0x800F
    ctx->r11 = S32(0X800F << 16);
    // 0x0026A420: addiu       $t3, $t3, 0x2020
    ctx->r11 = ADD32(ctx->r11, 0X2020);
    // 0x0026A424: lw          $t0, 0x0($t3)
    ctx->r8 = MEM_W(ctx->r11, 0X0);
    // 0x0026A428: lw          $t1, 0x4($t3)
    ctx->r9 = MEM_W(ctx->r11, 0X4);
    // 0x0026A42C: lw          $t2, 0x8($t3)
    ctx->r10 = MEM_W(ctx->r11, 0X8);
    // 0x0026A430: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x0026A434: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x0026A438: sw          $t2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r10;
    // 0x0026A43C: lwc1        $f1, 0x14($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X14);
    // 0x0026A440: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x0026A444: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0026A448: sw          $s0, 0x2608($at)
    MEM_W(0X2608, ctx->r1) = ctx->r16;
    // 0x0026A44C: c.eq.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl == ctx->f0.fl;
    // 0x0026A450: nop

    // 0x0026A454: bc1f        L_0026A490
    if (!c1cs) {
        // 0x0026A458: nop
    
            goto L_0026A490;
    }
    // 0x0026A458: nop

    // 0x0026A45C: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // 0x0026A460: lw          $v1, 0x8($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X8);
    // 0x0026A464: lwc1        $f1, 0x4($v0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r2, 0X4);
    // 0x0026A468: lwc1        $f0, 0x4($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X4);
    // 0x0026A46C: lw          $v0, 0xC($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC);
    // 0x0026A470: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x0026A474: lwc1        $f0, 0x4($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X4);
    // 0x0026A478: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x0026A47C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0026A480: lwc1        $f0, 0x7F90($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X7F90);
    // 0x0026A484: mul.s       $f20, $f1, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x0026A488: j           L_0026A4E8
    // 0x0026A48C: sub.s       $f2, $f23, $f22
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 23);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f23.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f2.fl = ctx->f23.fl - ctx->f22.fl;
        goto L_0026A4E8;
    // 0x0026A48C: sub.s       $f2, $f23, $f22
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 23);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f23.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f2.fl = ctx->f23.fl - ctx->f22.fl;
L_0026A490:
    // 0x0026A490: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // 0x0026A494: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x0026A498: lw          $t1, 0x4($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X4);
    // 0x0026A49C: lw          $t2, 0x8($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X8);
    // 0x0026A4A0: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
    // 0x0026A4A4: sw          $t1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r9;
    // 0x0026A4A8: sw          $t2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r10;
    // 0x0026A4AC: lwc1        $f0, 0x28($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X28);
    // 0x0026A4B0: sub.s       $f0, $f0, $f25
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 25);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f25.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f25.fl;
    // 0x0026A4B4: lwc1        $f1, 0x18($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x0026A4B8: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0026A4BC: lwc1        $f2, 0x20($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X20);
    // 0x0026A4C0: sub.s       $f2, $f2, $f23
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 23);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f23.fl); 
    ctx->f2.fl = ctx->f2.fl - ctx->f23.fl;
    // 0x0026A4C4: lwc1        $f1, 0x10($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x0026A4C8: mul.s       $f2, $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f1.fl);
    // 0x0026A4CC: lwc1        $f3, 0x14($sp)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r29, 0X14);
    // 0x0026A4D0: lwc1        $f1, 0x24($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X24);
    // 0x0026A4D4: mul.s       $f1, $f1, $f3
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f3.fl);
    // 0x0026A4D8: add.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f2.fl;
    // 0x0026A4DC: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x0026A4E0: div.s       $f20, $f0, $f3
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f20.fl = DIV_S(ctx->f0.fl, ctx->f3.fl);
    // 0x0026A4E4: sub.s       $f2, $f23, $f22
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 23);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f23.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f2.fl = ctx->f23.fl - ctx->f22.fl;
L_0026A4E8:
    // 0x0026A4E8: mul.s       $f2, $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x0026A4EC: sub.s       $f1, $f25, $f24
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 25);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f25.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f1.fl = ctx->f25.fl - ctx->f24.fl;
    // 0x0026A4F0: mul.s       $f1, $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f1.fl);
    // 0x0026A4F4: sub.s       $f0, $f20, $f21
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f21.fl); 
    ctx->f0.fl = ctx->f20.fl - ctx->f21.fl;
    // 0x0026A4F8: mul.s       $f0, $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x0026A4FC: add.s       $f2, $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f1.fl;
    // 0x0026A500: add.s       $f1, $f2, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f2.fl + ctx->f0.fl;
    // 0x0026A504: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x0026A508: c.eq.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl == ctx->f0.fl;
    // 0x0026A50C: nop

    // 0x0026A510: bc1t        L_0026A578
    if (c1cs) {
        // 0x0026A514: nop
    
            goto L_0026A578;
    }
    // 0x0026A514: nop

    // 0x0026A518: jal         0x00298470
    // 0x0026A51C: div.s       $f12, $f2, $f1
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f12.fl = DIV_S(ctx->f2.fl, ctx->f1.fl);
    func_00298470(rdram, ctx);
        goto after_6;
    // 0x0026A51C: div.s       $f12, $f2, $f1
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f12.fl = DIV_S(ctx->f2.fl, ctx->f1.fl);
    after_6:
    // 0x0026A520: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0026A524: lwc1        $f1, 0x7F94($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X7F94);
    // 0x0026A528: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x0026A52C: nop

    // 0x0026A530: bc1tl       L_0026A560
    if (c1cs) {
        // 0x0026A534: mov.s       $f0, $f1
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    ctx->f0.fl = ctx->f1.fl;
            goto L_0026A560;
    }
    goto skip_0;
    // 0x0026A534: mov.s       $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    ctx->f0.fl = ctx->f1.fl;
    skip_0:
    // 0x0026A538: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0026A53C: lwc1        $f12, 0x7F98($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X7F98);
    // 0x0026A540: c.lt.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl < ctx->f12.fl;
    // 0x0026A544: nop

    // 0x0026A548: bc1tl       L_0026A560
    if (c1cs) {
        // 0x0026A54C: mov.s       $f0, $f12
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.fl = ctx->f12.fl;
            goto L_0026A560;
    }
    goto skip_1;
    // 0x0026A54C: mov.s       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.fl = ctx->f12.fl;
    skip_1:
    // 0x0026A550: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x0026A554: nop

    // 0x0026A558: bc1tl       L_0026A560
    if (c1cs) {
        // 0x0026A55C: mov.s       $f0, $f1
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    ctx->f0.fl = ctx->f1.fl;
            goto L_0026A560;
    }
    goto skip_2;
    // 0x0026A55C: mov.s       $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    ctx->f0.fl = ctx->f1.fl;
    skip_2:
L_0026A560:
    // 0x0026A560: jal         0x0021153C
    // 0x0026A564: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    func_0021153C(rdram, ctx);
        goto after_7;
    // 0x0026A564: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    after_7:
    // 0x0026A568: c.lt.s      $f21, $f20
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f21.fl < ctx->f20.fl;
    // 0x0026A56C: nop

    // 0x0026A570: bc1fl       L_0026A578
    if (!c1cs) {
        // 0x0026A574: neg.s       $f0, $f0
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
            goto L_0026A578;
    }
    goto skip_3;
    // 0x0026A574: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    skip_3:
L_0026A578:
    // 0x0026A578: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
    // 0x0026A57C: lw          $s0, 0x50($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X50);
    // 0x0026A580: ldc1        $f25, 0x80($sp)
    CHECK_FR(ctx, 25);
    ctx->f25.u64 = LD(ctx->r29, 0X80);
    // 0x0026A584: ldc1        $f24, 0x78($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X78);
    // 0x0026A588: ldc1        $f23, 0x70($sp)
    CHECK_FR(ctx, 23);
    ctx->f23.u64 = LD(ctx->r29, 0X70);
    // 0x0026A58C: ldc1        $f22, 0x68($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X68);
    // 0x0026A590: ldc1        $f21, 0x60($sp)
    CHECK_FR(ctx, 21);
    ctx->f21.u64 = LD(ctx->r29, 0X60);
    // 0x0026A594: ldc1        $f20, 0x58($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X58);
    // 0x0026A598: jr          $ra
    // 0x0026A59C: addiu       $sp, $sp, 0x88
    ctx->r29 = ADD32(ctx->r29, 0X88);
    return;
    // 0x0026A59C: addiu       $sp, $sp, 0x88
    ctx->r29 = ADD32(ctx->r29, 0X88);
;}
RECOMP_FUNC void func_002680D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002680D0: lw          $a0, 0x14($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X14);
    // 0x002680D4: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x002680D8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x002680DC: beq         $v1, $v0, L_002680EC
    if (ctx->r3 == ctx->r2) {
            // 0x002680E0: nop

    func_002680EC(rdram, ctx);
    return;
    }
    // 0x002680E0: nop

    // 0x002680E4: jr          $ra
    // 0x002680E8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x002680E8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void func_00210CF0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00210CF0: lwc1        $f4, 0x4($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X4);
    // 0x00210CF4: lwc1        $f3, 0x8($a0)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r4, 0X8);
    // 0x00210CF8: lwc1        $f2, 0x18($a0)
    ctx->f2.u32l = MEM_W(ctx->r4, 0X18);
    // 0x00210CFC: lwc1        $f1, 0x28($a0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r4, 0X28);
    // 0x00210D00: lwc1        $f0, 0x38($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X38);
    // 0x00210D04: swc1        $f4, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->f4.u32l;
    // 0x00210D08: lwc1        $f4, 0x14($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X14);
    // 0x00210D0C: swc1        $f4, 0x18($a0)
    MEM_W(0X18, ctx->r4) = ctx->f4.u32l;
    // 0x00210D10: lwc1        $f4, 0x24($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X24);
    // 0x00210D14: swc1        $f4, 0x28($a0)
    MEM_W(0X28, ctx->r4) = ctx->f4.u32l;
    // 0x00210D18: lwc1        $f4, 0x34($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X34);
    // 0x00210D1C: swc1        $f3, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->f_odd[(3 - 1) * 2];
    // 0x00210D20: swc1        $f2, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->f2.u32l;
    // 0x00210D24: swc1        $f1, 0x24($a0)
    MEM_W(0X24, ctx->r4) = ctx->f_odd[(1 - 1) * 2];
    // 0x00210D28: swc1        $f0, 0x34($a0)
    MEM_W(0X34, ctx->r4) = ctx->f0.u32l;
    // 0x00210D2C: jr          $ra
    // 0x00210D30: swc1        $f4, 0x38($a0)
    MEM_W(0X38, ctx->r4) = ctx->f4.u32l;
    return;
    // 0x00210D30: swc1        $f4, 0x38($a0)
    MEM_W(0X38, ctx->r4) = ctx->f4.u32l;
;}
RECOMP_FUNC void func_00228BBC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00228BBC: jr          $ra
    // 0x00228BC0: nop

    return;
    // 0x00228BC0: nop

;}
RECOMP_FUNC void func_00218DCC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00218DCC: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x00218DD0: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x00218DD4: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x00218DD8: sw          $s4, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r20;
    // 0x00218DDC: addu        $s4, $a1, $zero
    ctx->r20 = ADD32(ctx->r5, 0);
    // 0x00218DE0: sw          $s6, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r22;
    // 0x00218DE4: addu        $s6, $a2, $zero
    ctx->r22 = ADD32(ctx->r6, 0);
    // 0x00218DE8: sw          $s3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r19;
    // 0x00218DEC: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x00218DF0: sw          $s5, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r21;
    // 0x00218DF4: sw          $s2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r18;
    // 0x00218DF8: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x00218DFC: sdc1        $f23, 0x68($sp)
    CHECK_FR(ctx, 23);
    SD(ctx->f23.u64, 0X68, ctx->r29);
    // 0x00218E00: sdc1        $f22, 0x60($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X60, ctx->r29);
    // 0x00218E04: sdc1        $f21, 0x58($sp)
    CHECK_FR(ctx, 21);
    SD(ctx->f21.u64, 0X58, ctx->r29);
    // 0x00218E08: sdc1        $f20, 0x50($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X50, ctx->r29);
    // 0x00218E0C: jal         0x0021793C
    // 0x00218E10: addu        $s3, $a3, $zero
    ctx->r19 = ADD32(ctx->r7, 0);
    func_0021793C(rdram, ctx);
        goto after_0;
    // 0x00218E10: addu        $s3, $a3, $zero
    ctx->r19 = ADD32(ctx->r7, 0);
    after_0:
    // 0x00218E14: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x00218E18: sw          $zero, 0x0($s4)
    MEM_W(0X0, ctx->r20) = 0;
    // 0x00218E1C: sw          $zero, 0x4($s4)
    MEM_W(0X4, ctx->r20) = 0;
    // 0x00218E20: sw          $zero, 0x8($s4)
    MEM_W(0X8, ctx->r20) = 0;
    // 0x00218E24: sw          $zero, 0x0($s6)
    MEM_W(0X0, ctx->r22) = 0;
    // 0x00218E28: lw          $v0, 0xD4($s3)
    ctx->r2 = MEM_W(ctx->r19, 0XD4);
    // 0x00218E2C: lui         $s5, 0x800
    ctx->r21 = S32(0X800 << 16);
    // 0x00218E30: and         $v0, $v0, $s5
    ctx->r2 = ctx->r2 & ctx->r21;
    // 0x00218E34: beq         $v0, $zero, L_00218E74
    if (ctx->r2 == 0) {
        // 0x00218E38: addu        $a2, $zero, $zero
        ctx->r6 = ADD32(0, 0);
            goto L_00218E74;
    }
    // 0x00218E38: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x00218E3C: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x00218E40: lh          $v0, 0x8($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X8);
    // 0x00218E44: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x00218E48: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x00218E4C: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x00218E50: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00218E54: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x00218E58: jal         0x0021ABC8
    // 0x00218E5C: sw          $a3, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r7;
    func_0021ABC8(rdram, ctx);
        goto after_1;
    // 0x00218E5C: sw          $a3, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r7;
    after_1:
    // 0x00218E60: lui         $v1, 0xF7FF
    ctx->r3 = S32(0XF7FF << 16);
    // 0x00218E64: lw          $v0, 0xD4($s3)
    ctx->r2 = MEM_W(ctx->r19, 0XD4);
    // 0x00218E68: ori         $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 | 0XFFFF;
    // 0x00218E6C: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x00218E70: sw          $v0, 0xD4($s3)
    MEM_W(0XD4, ctx->r19) = ctx->r2;
L_00218E74:
    // 0x00218E74: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00218E78: jal         0x002017D4
    // 0x00218E7C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_002017D4(rdram, ctx);
        goto after_2;
    // 0x00218E7C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_2:
    // 0x00218E80: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x00218E84: jal         0x002017D4
    // 0x00218E88: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_002017D4(rdram, ctx);
        goto after_3;
    // 0x00218E88: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_3:
    // 0x00218E8C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x00218E90: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x00218E94: addiu       $a3, $sp, 0x10
    ctx->r7 = ADD32(ctx->r29, 0X10);
    // 0x00218E98: lw          $a2, 0x0($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X0);
    // 0x00218E9C: jal         0x00215AE0
    // 0x00218EA0: addu        $s2, $v0, $zero
    ctx->r18 = ADD32(ctx->r2, 0);
    func_00215AE0(rdram, ctx);
        goto after_4;
    // 0x00218EA0: addu        $s2, $v0, $zero
    ctx->r18 = ADD32(ctx->r2, 0);
    after_4:
    // 0x00218EA4: lwc1        $f20, 0x0($s1)
    ctx->f20.u32l = MEM_W(ctx->r17, 0X0);
    // 0x00218EA8: jal         0x0021793C
    // 0x00218EAC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_0021793C(rdram, ctx);
        goto after_5;
    // 0x00218EAC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_5:
    // 0x00218EB0: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x00218EB4: jal         0x002017D4
    // 0x00218EB8: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_002017D4(rdram, ctx);
        goto after_6;
    // 0x00218EB8: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_6:
    // 0x00218EBC: lh          $v1, 0x8($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X8);
    // 0x00218EC0: addiu       $a2, $v0, 0x8
    ctx->r6 = ADD32(ctx->r2, 0X8);
    // 0x00218EC4: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x00218EC8: trunc.w.s   $f3, $f20
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 20);
    ctx->f_odd[(3 - 1) * 2] = TRUNC_W_S(ctx->f20.fl);
    // 0x00218ECC: mfc1        $a1, $f3
    ctx->r5 = (int32_t)ctx->f_odd[(3 - 1) * 2];
    // 0x00218ED0: addiu       $a0, $a1, 0x1
    ctx->r4 = ADD32(ctx->r5, 0X1);
    // 0x00218ED4: slt         $v0, $a0, $v1
    ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x00218ED8: bnel        $v0, $zero, L_00218EE0
    if (ctx->r2 != 0) {
        // 0x00218EDC: addu        $v1, $a0, $zero
        ctx->r3 = ADD32(ctx->r4, 0);
            goto L_00218EE0;
    }
    goto skip_0;
    // 0x00218EDC: addu        $v1, $a0, $zero
    ctx->r3 = ADD32(ctx->r4, 0);
    skip_0:
L_00218EE0:
    // 0x00218EE0: sll         $v0, $a1, 1
    ctx->r2 = S32(ctx->r5 << 1);
    // 0x00218EE4: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x00218EE8: lh          $v0, 0x0($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X0);
    // 0x00218EEC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00218EF0: lwc1        $f22, 0x5A1C($at)
    ctx->f22.u32l = MEM_W(ctx->r1, 0X5A1C);
    // 0x00218EF4: mtc1        $v0, $f14
    ctx->f14.u32l = ctx->r2;
    // 0x00218EF8: cvt.s.w     $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    ctx->f14.fl = CVT_S_W(ctx->f14.u32l);
    // 0x00218EFC: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x00218F00: mul.s       $f14, $f14, $f22
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f14.fl = MUL_S(ctx->f14.fl, ctx->f22.fl);
    // 0x00218F04: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x00218F08: lh          $v0, 0x0($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X0);
    // 0x00218F0C: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x00218F10: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00218F14: mul.s       $f0, $f0, $f22
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f22.fl);
    // 0x00218F18: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x00218F1C: cvt.s.w     $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    ctx->f12.fl = CVT_S_W(ctx->f12.u32l);
    // 0x00218F20: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x00218F24: jal         0x00210DB4
    // 0x00218F28: sub.s       $f12, $f20, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = ctx->f20.fl - ctx->f12.fl;
    func_00210DB4(rdram, ctx);
        goto after_7;
    // 0x00218F28: sub.s       $f12, $f20, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = ctx->f20.fl - ctx->f12.fl;
    after_7:
    // 0x00218F2C: lw          $v0, 0xD4($s3)
    ctx->r2 = MEM_W(ctx->r19, 0XD4);
    // 0x00218F30: lwc1        $f2, 0x0($s1)
    ctx->f2.u32l = MEM_W(ctx->r17, 0X0);
    // 0x00218F34: and         $v0, $v0, $s5
    ctx->r2 = ctx->r2 & ctx->r21;
    // 0x00218F38: bne         $v0, $zero, L_00218F64
    if (ctx->r2 != 0) {
        // 0x00218F3C: mov.s       $f23, $f0
        CHECK_FR(ctx, 23);
    CHECK_FR(ctx, 0);
    ctx->f23.fl = ctx->f0.fl;
            goto L_00218F64;
    }
    // 0x00218F3C: mov.s       $f23, $f0
    CHECK_FR(ctx, 23);
    CHECK_FR(ctx, 0);
    ctx->f23.fl = ctx->f0.fl;
    // 0x00218F40: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00218F44: lwc1        $f0, 0x6D28($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6D28);
    // 0x00218F48: lwc1        $f1, 0x8($s2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r18, 0X8);
    // 0x00218F4C: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00218F50: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00218F54: lwc1        $f1, 0x5A20($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X5A20);
    // 0x00218F58: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00218F5C: add.s       $f0, $f2, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f2.fl + ctx->f0.fl;
    // 0x00218F60: swc1        $f0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->f0.u32l;
L_00218F64:
    // 0x00218F64: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x00218F68: mfc1        $a2, $f2
    ctx->r6 = (int32_t)ctx->f2.u32l;
    // 0x00218F6C: lw          $a3, 0x0($s1)
    ctx->r7 = MEM_W(ctx->r17, 0X0);
    // 0x00218F70: jal         0x0021ABC8
    // 0x00218F74: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_0021ABC8(rdram, ctx);
        goto after_8;
    // 0x00218F74: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_8:
    // 0x00218F78: lh          $v0, 0x8($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X8);
    // 0x00218F7C: lwc1        $f0, 0x0($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X0);
    // 0x00218F80: addiu       $s5, $v0, -0x1
    ctx->r21 = ADD32(ctx->r2, -0X1);
    // 0x00218F84: mtc1        $s5, $f21
    ctx->f_odd[(21 - 1) * 2] = ctx->r21;
    // 0x00218F88: cvt.s.w     $f21, $f21
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 21);
    ctx->f21.fl = CVT_S_W(ctx->f_odd[(21 - 1) * 2]);
    // 0x00218F8C: c.lt.s      $f21, $f0
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f21.fl < ctx->f0.fl;
    // 0x00218F90: nop

    // 0x00218F94: bc1f        L_00219214
    if (!c1cs) {
        // 0x00218F98: addiu       $s0, $sp, 0x20
        ctx->r16 = ADD32(ctx->r29, 0X20);
            goto L_00219214;
    }
    // 0x00218F98: addiu       $s0, $sp, 0x20
    ctx->r16 = ADD32(ctx->r29, 0X20);
    // 0x00218F9C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x00218FA0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x00218FA4: mfc1        $a2, $f21
    ctx->r6 = (int32_t)ctx->f_odd[(21 - 1) * 2];
    // 0x00218FA8: jal         0x00215AE0
    // 0x00218FAC: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    func_00215AE0(rdram, ctx);
        goto after_9;
    // 0x00218FAC: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    after_9:
    // 0x00218FB0: jal         0x0021793C
    // 0x00218FB4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_0021793C(rdram, ctx);
        goto after_10;
    // 0x00218FB4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_10:
    // 0x00218FB8: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x00218FBC: jal         0x002017D4
    // 0x00218FC0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_002017D4(rdram, ctx);
        goto after_11;
    // 0x00218FC0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_11:
    // 0x00218FC4: addiu       $a2, $v0, 0x8
    ctx->r6 = ADD32(ctx->r2, 0X8);
    // 0x00218FC8: trunc.w.s   $f3, $f21
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 21);
    ctx->f_odd[(3 - 1) * 2] = TRUNC_W_S(ctx->f21.fl);
    // 0x00218FCC: mfc1        $a1, $f3
    ctx->r5 = (int32_t)ctx->f_odd[(3 - 1) * 2];
    // 0x00218FD0: lh          $v1, 0x8($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X8);
    // 0x00218FD4: addiu       $a0, $a1, 0x1
    ctx->r4 = ADD32(ctx->r5, 0X1);
    // 0x00218FD8: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x00218FDC: slt         $v0, $a0, $v1
    ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x00218FE0: bnel        $v0, $zero, L_00218FE8
    if (ctx->r2 != 0) {
        // 0x00218FE4: addu        $v1, $a0, $zero
        ctx->r3 = ADD32(ctx->r4, 0);
            goto L_00218FE8;
    }
    goto skip_1;
    // 0x00218FE4: addu        $v1, $a0, $zero
    ctx->r3 = ADD32(ctx->r4, 0);
    skip_1:
L_00218FE8:
    // 0x00218FE8: sll         $v0, $a1, 1
    ctx->r2 = S32(ctx->r5 << 1);
    // 0x00218FEC: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x00218FF0: lh          $v0, 0x0($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X0);
    // 0x00218FF4: mtc1        $v0, $f14
    ctx->f14.u32l = ctx->r2;
    // 0x00218FF8: cvt.s.w     $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    ctx->f14.fl = CVT_S_W(ctx->f14.u32l);
    // 0x00218FFC: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x00219000: mul.s       $f14, $f14, $f22
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f14.fl = MUL_S(ctx->f14.fl, ctx->f22.fl);
    // 0x00219004: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x00219008: lh          $v0, 0x0($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X0);
    // 0x0021900C: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x00219010: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00219014: mul.s       $f0, $f0, $f22
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f22.fl);
    // 0x00219018: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x0021901C: cvt.s.w     $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    ctx->f12.fl = CVT_S_W(ctx->f12.u32l);
    // 0x00219020: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x00219024: jal         0x00210DB4
    // 0x00219028: sub.s       $f12, $f21, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f21.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = ctx->f21.fl - ctx->f12.fl;
    func_00210DB4(rdram, ctx);
        goto after_12;
    // 0x00219028: sub.s       $f12, $f21, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f21.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = ctx->f21.fl - ctx->f12.fl;
    after_12:
    // 0x0021902C: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x00219030: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    // 0x00219034: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    // 0x00219038: jal         0x0020EEF8
    // 0x0021903C: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    func_0020EEF8(rdram, ctx);
        goto after_13;
    // 0x0021903C: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    after_13:
    // 0x00219040: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    // 0x00219044: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    // 0x00219048: jal         0x0020EF2C
    // 0x0021904C: addiu       $a2, $sp, 0x10
    ctx->r6 = ADD32(ctx->r29, 0X10);
    func_0020EF2C(rdram, ctx);
        goto after_14;
    // 0x0021904C: addiu       $a2, $sp, 0x10
    ctx->r6 = ADD32(ctx->r29, 0X10);
    after_14:
    // 0x00219050: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    // 0x00219054: jal         0x00210E64
    // 0x00219058: mov.s       $f14, $f23
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 23);
    ctx->f14.fl = ctx->f23.fl;
    func_00210E64(rdram, ctx);
        goto after_15;
    // 0x00219058: mov.s       $f14, $f23
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 23);
    ctx->f14.fl = ctx->f23.fl;
    after_15:
    // 0x0021905C: lwc1        $f1, 0x0($s6)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r22, 0X0);
    // 0x00219060: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x00219064: swc1        $f1, 0x0($s6)
    MEM_W(0X0, ctx->r22) = ctx->f_odd[(1 - 1) * 2];
    // 0x00219068: lhu         $v1, 0x2($s2)
    ctx->r3 = MEM_HU(ctx->r18, 0X2);
    // 0x0021906C: ori         $v0, $zero, 0xFFFF
    ctx->r2 = 0 | 0XFFFF;
    // 0x00219070: beq         $v1, $v0, L_0021907C
    if (ctx->r3 == ctx->r2) {
        // 0x00219074: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_0021907C;
    }
    // 0x00219074: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x00219078: addu        $s0, $v1, $zero
    ctx->r16 = ADD32(ctx->r3, 0);
L_0021907C:
    // 0x0021907C: mtc1        $s0, $f2
    ctx->f2.u32l = ctx->r16;
    // 0x00219080: cvt.d.w     $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    ctx->f2.d = CVT_D_W(ctx->f2.u32l);
    // 0x00219084: bgez        $s0, L_00219098
    if (SIGNED(ctx->r16) >= 0) {
        // 0x00219088: nop
    
            goto L_00219098;
    }
    // 0x00219088: nop

    // 0x0021908C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00219090: ldc1        $f0, 0x5A28($at)
    CHECK_FR(ctx, 0);
    ctx->f0.u64 = LD(ctx->r1, 0X5A28);
    // 0x00219094: add.d       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.d); NAN_CHECK(ctx->f0.d); 
    ctx->f2.d = ctx->f2.d + ctx->f0.d;
L_00219098:
    // 0x00219098: lwc1        $f1, 0x0($s1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r17, 0X0);
    // 0x0021909C: cvt.s.d     $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.d); 
    ctx->f0.fl = CVT_S_D(ctx->f2.d);
    // 0x002190A0: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x002190A4: sub.s       $f0, $f0, $f21
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f21.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f21.fl;
    // 0x002190A8: c.lt.s      $f21, $f0
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f21.fl < ctx->f0.fl;
    // 0x002190AC: nop

    // 0x002190B0: bc1f        L_002190DC
    if (!c1cs) {
        // 0x002190B4: swc1        $f0, 0x0($s1)
        MEM_W(0X0, ctx->r17) = ctx->f0.u32l;
            goto L_002190DC;
    }
    // 0x002190B4: swc1        $f0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->f0.u32l;
    // 0x002190B8: mtc1        $s0, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r16;
    // 0x002190BC: cvt.d.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.d = CVT_D_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x002190C0: bgezl       $s0, L_002190D8
    if (SIGNED(ctx->r16) >= 0) {
        // 0x002190C4: cvt.s.d     $f0, $f1
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.d); 
    ctx->f0.fl = CVT_S_D(ctx->f1.d);
            goto L_002190D8;
    }
    goto skip_2;
    // 0x002190C4: cvt.s.d     $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.d); 
    ctx->f0.fl = CVT_S_D(ctx->f1.d);
    skip_2:
    // 0x002190C8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002190CC: ldc1        $f0, 0x5A30($at)
    CHECK_FR(ctx, 0);
    ctx->f0.u64 = LD(ctx->r1, 0X5A30);
    // 0x002190D0: add.d       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.d); NAN_CHECK(ctx->f0.d); 
    ctx->f1.d = ctx->f1.d + ctx->f0.d;
    // 0x002190D4: cvt.s.d     $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.d); 
    ctx->f0.fl = CVT_S_D(ctx->f1.d);
L_002190D8:
    // 0x002190D8: swc1        $f0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->f0.u32l;
L_002190DC:
    // 0x002190DC: sltu        $v0, $s0, $s5
    ctx->r2 = ctx->r16 < ctx->r21 ? 1 : 0;
    // 0x002190E0: bne         $v0, $zero, L_00219108
    if (ctx->r2 != 0) {
        // 0x002190E4: nop
    
            goto L_00219108;
    }
    // 0x002190E4: nop

    // 0x002190E8: lh          $v1, 0x4($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X4);
    // 0x002190EC: lh          $v0, 0x6($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X6);
    // 0x002190F0: bne         $v1, $v0, L_00219108
    if (ctx->r3 != ctx->r2) {
        // 0x002190F4: nop
    
            goto L_00219108;
    }
    // 0x002190F4: nop

    // 0x002190F8: jal         0x002199F4
    // 0x002190FC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_002199F4(rdram, ctx);
        goto after_16;
    // 0x002190FC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_16:
    // 0x00219100: beql        $v0, $zero, L_00219108
    if (ctx->r2 == 0) {
        // 0x00219104: sb          $zero, 0xB($s1)
        MEM_B(0XB, ctx->r17) = 0;
            goto L_00219108;
    }
    goto skip_3;
    // 0x00219104: sb          $zero, 0xB($s1)
    MEM_B(0XB, ctx->r17) = 0;
    skip_3:
L_00219108:
    // 0x00219108: mtc1        $s0, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r16;
    // 0x0021910C: cvt.d.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.d = CVT_D_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x00219110: bgez        $s0, L_00219124
    if (SIGNED(ctx->r16) >= 0) {
        // 0x00219114: addu        $a0, $s3, $zero
        ctx->r4 = ADD32(ctx->r19, 0);
            goto L_00219124;
    }
    // 0x00219114: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x00219118: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0021911C: ldc1        $f0, 0x5A38($at)
    CHECK_FR(ctx, 0);
    ctx->f0.u64 = LD(ctx->r1, 0X5A38);
    // 0x00219120: add.d       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.d); NAN_CHECK(ctx->f0.d); 
    ctx->f1.d = ctx->f1.d + ctx->f0.d;
L_00219124:
    // 0x00219124: cvt.s.d     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.d); 
    ctx->f1.fl = CVT_S_D(ctx->f1.d);
    // 0x00219128: lw          $a3, 0x0($s1)
    ctx->r7 = MEM_W(ctx->r17, 0X0);
    // 0x0021912C: mfc1        $a2, $f1
    ctx->r6 = (int32_t)ctx->f_odd[(1 - 1) * 2];
    // 0x00219130: jal         0x0021ABC8
    // 0x00219134: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_0021ABC8(rdram, ctx);
        goto after_17;
    // 0x00219134: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_17:
    // 0x00219138: mtc1        $s0, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r16;
    // 0x0021913C: cvt.d.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.d = CVT_D_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x00219140: bgez        $s0, L_00219154
    if (SIGNED(ctx->r16) >= 0) {
        // 0x00219144: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_00219154;
    }
    // 0x00219144: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x00219148: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0021914C: ldc1        $f0, 0x5A40($at)
    CHECK_FR(ctx, 0);
    ctx->f0.u64 = LD(ctx->r1, 0X5A40);
    // 0x00219150: add.d       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.d); NAN_CHECK(ctx->f0.d); 
    ctx->f1.d = ctx->f1.d + ctx->f0.d;
L_00219154:
    // 0x00219154: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x00219158: cvt.s.d     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.d); 
    ctx->f1.fl = CVT_S_D(ctx->f1.d);
    // 0x0021915C: mfc1        $a2, $f1
    ctx->r6 = (int32_t)ctx->f_odd[(1 - 1) * 2];
    // 0x00219160: jal         0x00215AE0
    // 0x00219164: addiu       $a3, $sp, 0x10
    ctx->r7 = ADD32(ctx->r29, 0X10);
    func_00215AE0(rdram, ctx);
        goto after_18;
    // 0x00219164: addiu       $a3, $sp, 0x10
    ctx->r7 = ADD32(ctx->r29, 0X10);
    after_18:
    // 0x00219168: mtc1        $s0, $f12
    ctx->f12.u32l = ctx->r16;
    // 0x0021916C: cvt.d.w     $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    ctx->f12.d = CVT_D_W(ctx->f12.u32l);
    // 0x00219170: bgez        $s0, L_00219184
    if (SIGNED(ctx->r16) >= 0) {
        // 0x00219174: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_00219184;
    }
    // 0x00219174: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x00219178: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0021917C: ldc1        $f0, 0x5A48($at)
    CHECK_FR(ctx, 0);
    ctx->f0.u64 = LD(ctx->r1, 0X5A48);
    // 0x00219180: add.d       $f12, $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.d); NAN_CHECK(ctx->f0.d); 
    ctx->f12.d = ctx->f12.d + ctx->f0.d;
L_00219184:
    // 0x00219184: jal         0x0021793C
    // 0x00219188: cvt.s.d     $f20, $f12
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.d); 
    ctx->f20.fl = CVT_S_D(ctx->f12.d);
    func_0021793C(rdram, ctx);
        goto after_19;
    // 0x00219188: cvt.s.d     $f20, $f12
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.d); 
    ctx->f20.fl = CVT_S_D(ctx->f12.d);
    after_19:
    // 0x0021918C: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x00219190: jal         0x002017D4
    // 0x00219194: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_002017D4(rdram, ctx);
        goto after_20;
    // 0x00219194: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_20:
    // 0x00219198: lh          $v1, 0x8($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X8);
    // 0x0021919C: addiu       $a2, $v0, 0x8
    ctx->r6 = ADD32(ctx->r2, 0X8);
    // 0x002191A0: trunc.w.s   $f3, $f20
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 20);
    ctx->f_odd[(3 - 1) * 2] = TRUNC_W_S(ctx->f20.fl);
    // 0x002191A4: mfc1        $a1, $f3
    ctx->r5 = (int32_t)ctx->f_odd[(3 - 1) * 2];
    // 0x002191A8: addiu       $a0, $a1, 0x1
    ctx->r4 = ADD32(ctx->r5, 0X1);
    // 0x002191AC: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x002191B0: slt         $v0, $a0, $v1
    ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x002191B4: bnel        $v0, $zero, L_002191BC
    if (ctx->r2 != 0) {
        // 0x002191B8: addu        $v1, $a0, $zero
        ctx->r3 = ADD32(ctx->r4, 0);
            goto L_002191BC;
    }
    goto skip_4;
    // 0x002191B8: addu        $v1, $a0, $zero
    ctx->r3 = ADD32(ctx->r4, 0);
    skip_4:
L_002191BC:
    // 0x002191BC: sll         $v0, $a1, 1
    ctx->r2 = S32(ctx->r5 << 1);
    // 0x002191C0: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x002191C4: lh          $v0, 0x0($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X0);
    // 0x002191C8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002191CC: lwc1        $f1, 0x5A50($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X5A50);
    // 0x002191D0: mtc1        $v0, $f14
    ctx->f14.u32l = ctx->r2;
    // 0x002191D4: cvt.s.w     $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    ctx->f14.fl = CVT_S_W(ctx->f14.u32l);
    // 0x002191D8: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x002191DC: mul.s       $f14, $f14, $f1
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f14.fl = MUL_S(ctx->f14.fl, ctx->f1.fl);
    // 0x002191E0: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x002191E4: lh          $v0, 0x0($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X0);
    // 0x002191E8: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x002191EC: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x002191F0: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x002191F4: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x002191F8: cvt.s.w     $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    ctx->f12.fl = CVT_S_W(ctx->f12.u32l);
    // 0x002191FC: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x00219200: jal         0x00210DB4
    // 0x00219204: sub.s       $f12, $f20, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = ctx->f20.fl - ctx->f12.fl;
    func_00210DB4(rdram, ctx);
        goto after_21;
    // 0x00219204: sub.s       $f12, $f20, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = ctx->f20.fl - ctx->f12.fl;
    after_21:
    // 0x00219208: mov.s       $f23, $f0
    CHECK_FR(ctx, 23);
    CHECK_FR(ctx, 0);
    ctx->f23.fl = ctx->f0.fl;
    // 0x0021920C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00219210: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
L_00219214:
    // 0x00219214: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x00219218: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x0021921C: addiu       $s0, $sp, 0x20
    ctx->r16 = ADD32(ctx->r29, 0X20);
    // 0x00219220: lw          $a2, 0x0($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X0);
    // 0x00219224: jal         0x00215AE0
    // 0x00219228: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    func_00215AE0(rdram, ctx);
        goto after_22;
    // 0x00219228: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    after_22:
    // 0x0021922C: lwc1        $f20, 0x0($s1)
    ctx->f20.u32l = MEM_W(ctx->r17, 0X0);
    // 0x00219230: jal         0x0021793C
    // 0x00219234: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_0021793C(rdram, ctx);
        goto after_23;
    // 0x00219234: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_23:
    // 0x00219238: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x0021923C: jal         0x002017D4
    // 0x00219240: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_002017D4(rdram, ctx);
        goto after_24;
    // 0x00219240: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_24:
    // 0x00219244: lh          $v1, 0x8($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X8);
    // 0x00219248: addiu       $a2, $v0, 0x8
    ctx->r6 = ADD32(ctx->r2, 0X8);
    // 0x0021924C: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x00219250: trunc.w.s   $f3, $f20
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 20);
    ctx->f_odd[(3 - 1) * 2] = TRUNC_W_S(ctx->f20.fl);
    // 0x00219254: mfc1        $a1, $f3
    ctx->r5 = (int32_t)ctx->f_odd[(3 - 1) * 2];
    // 0x00219258: addiu       $a0, $a1, 0x1
    ctx->r4 = ADD32(ctx->r5, 0X1);
    // 0x0021925C: slt         $v0, $a0, $v1
    ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x00219260: bnel        $v0, $zero, L_00219268
    if (ctx->r2 != 0) {
        // 0x00219264: addu        $v1, $a0, $zero
        ctx->r3 = ADD32(ctx->r4, 0);
            goto L_00219268;
    }
    goto skip_5;
    // 0x00219264: addu        $v1, $a0, $zero
    ctx->r3 = ADD32(ctx->r4, 0);
    skip_5:
L_00219268:
    // 0x00219268: sll         $v0, $a1, 1
    ctx->r2 = S32(ctx->r5 << 1);
    // 0x0021926C: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x00219270: lh          $v0, 0x0($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X0);
    // 0x00219274: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00219278: lwc1        $f1, 0x5A54($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X5A54);
    // 0x0021927C: mtc1        $v0, $f14
    ctx->f14.u32l = ctx->r2;
    // 0x00219280: cvt.s.w     $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    ctx->f14.fl = CVT_S_W(ctx->f14.u32l);
    // 0x00219284: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x00219288: mul.s       $f14, $f14, $f1
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f14.fl = MUL_S(ctx->f14.fl, ctx->f1.fl);
    // 0x0021928C: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x00219290: lh          $v0, 0x0($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X0);
    // 0x00219294: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x00219298: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x0021929C: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x002192A0: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x002192A4: cvt.s.w     $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    ctx->f12.fl = CVT_S_W(ctx->f12.u32l);
    // 0x002192A8: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x002192AC: jal         0x00210DB4
    // 0x002192B0: sub.s       $f12, $f20, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = ctx->f20.fl - ctx->f12.fl;
    func_00210DB4(rdram, ctx);
        goto after_25;
    // 0x002192B0: sub.s       $f12, $f20, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = ctx->f20.fl - ctx->f12.fl;
    after_25:
    // 0x002192B4: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x002192B8: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    // 0x002192BC: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    // 0x002192C0: jal         0x0020EEF8
    // 0x002192C4: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    func_0020EEF8(rdram, ctx);
        goto after_26;
    // 0x002192C4: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    after_26:
    // 0x002192C8: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    // 0x002192CC: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x002192D0: jal         0x0020EF2C
    // 0x002192D4: addiu       $a2, $sp, 0x10
    ctx->r6 = ADD32(ctx->r29, 0X10);
    func_0020EF2C(rdram, ctx);
        goto after_27;
    // 0x002192D4: addiu       $a2, $sp, 0x10
    ctx->r6 = ADD32(ctx->r29, 0X10);
    after_27:
    // 0x002192D8: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    // 0x002192DC: jal         0x00210E64
    // 0x002192E0: mov.s       $f14, $f23
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 23);
    ctx->f14.fl = ctx->f23.fl;
    func_00210E64(rdram, ctx);
        goto after_28;
    // 0x002192E0: mov.s       $f14, $f23
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 23);
    ctx->f14.fl = ctx->f23.fl;
    after_28:
    // 0x002192E4: lwc1        $f1, 0x0($s6)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r22, 0X0);
    // 0x002192E8: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x002192EC: swc1        $f1, 0x0($s6)
    MEM_W(0X0, ctx->r22) = ctx->f_odd[(1 - 1) * 2];
    // 0x002192F0: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x002192F4: lw          $s6, 0x48($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X48);
    // 0x002192F8: lw          $s5, 0x44($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X44);
    // 0x002192FC: lw          $s4, 0x40($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X40);
    // 0x00219300: lw          $s3, 0x3C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X3C);
    // 0x00219304: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x00219308: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x0021930C: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x00219310: ldc1        $f23, 0x68($sp)
    CHECK_FR(ctx, 23);
    ctx->f23.u64 = LD(ctx->r29, 0X68);
    // 0x00219314: ldc1        $f22, 0x60($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X60);
    // 0x00219318: ldc1        $f21, 0x58($sp)
    CHECK_FR(ctx, 21);
    ctx->f21.u64 = LD(ctx->r29, 0X58);
    // 0x0021931C: ldc1        $f20, 0x50($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X50);
    // 0x00219320: jr          $ra
    // 0x00219324: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    return;
    // 0x00219324: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
;}
RECOMP_FUNC void func_00210790(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00210790: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00210794: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x00210798: mtc1        $a1, $f20
    ctx->f20.u32l = ctx->r5;
    // 0x0021079C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x002107A0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x002107A4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x002107A8: jal         0x002982F0
    // 0x002107AC: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    func_002982F0(rdram, ctx);
        goto after_0;
    // 0x002107AC: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    after_0:
    // 0x002107B0: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    // 0x002107B4: jal         0x002974C0
    // 0x002107B8: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    func_002974C0(rdram, ctx);
        goto after_1;
    // 0x002107B8: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    after_1:
    // 0x002107BC: lwc1        $f16, 0x4($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X4);
    // 0x002107C0: mul.s       $f15, $f16, $f0
    CHECK_FR(ctx, 15);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f15.fl = MUL_S(ctx->f16.fl, ctx->f0.fl);
    // 0x002107C4: lwc1        $f11, 0x8($s0)
    ctx->f_odd[(11 - 1) * 2] = MEM_W(ctx->r16, 0X8);
    // 0x002107C8: neg.s       $f2, $f20
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); 
    ctx->f2.fl = -ctx->f20.fl;
    // 0x002107CC: mul.s       $f11, $f11, $f2
    CHECK_FR(ctx, 11);
    CHECK_FR(ctx, 11);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f11.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f11.fl = MUL_S(ctx->f11.fl, ctx->f2.fl);
    // 0x002107D0: nop

    // 0x002107D4: mul.s       $f14, $f16, $f20
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f14.fl = MUL_S(ctx->f16.fl, ctx->f20.fl);
    // 0x002107D8: lwc1        $f9, 0x8($s0)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r16, 0X8);
    // 0x002107DC: mul.s       $f9, $f9, $f0
    CHECK_FR(ctx, 9);
    CHECK_FR(ctx, 9);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f9.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f9.fl = MUL_S(ctx->f9.fl, ctx->f0.fl);
    // 0x002107E0: lwc1        $f7, 0x18($s0)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r16, 0X18);
    // 0x002107E4: mul.s       $f7, $f7, $f2
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f7.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f7.fl = MUL_S(ctx->f7.fl, ctx->f2.fl);
    // 0x002107E8: lwc1        $f5, 0x18($s0)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r16, 0X18);
    // 0x002107EC: mul.s       $f5, $f5, $f0
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f5.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f5.fl = MUL_S(ctx->f5.fl, ctx->f0.fl);
    // 0x002107F0: lwc1        $f4, 0x28($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X28);
    // 0x002107F4: mul.s       $f4, $f4, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f4.fl, ctx->f2.fl);
    // 0x002107F8: lwc1        $f3, 0x28($s0)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r16, 0X28);
    // 0x002107FC: mul.s       $f3, $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f3.fl = MUL_S(ctx->f3.fl, ctx->f0.fl);
    // 0x00210800: lwc1        $f1, 0x38($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X38);
    // 0x00210804: mul.s       $f1, $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f2.fl);
    // 0x00210808: lwc1        $f16, 0x14($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X14);
    // 0x0021080C: mul.s       $f13, $f16, $f0
    CHECK_FR(ctx, 13);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f13.fl = MUL_S(ctx->f16.fl, ctx->f0.fl);
    // 0x00210810: nop

    // 0x00210814: mul.s       $f12, $f16, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f12.fl = MUL_S(ctx->f16.fl, ctx->f20.fl);
    // 0x00210818: lwc1        $f2, 0x38($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X38);
    // 0x0021081C: mul.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x00210820: lwc1        $f16, 0x24($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X24);
    // 0x00210824: mul.s       $f10, $f16, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f16.fl, ctx->f0.fl);
    // 0x00210828: nop

    // 0x0021082C: mul.s       $f8, $f16, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f8.fl = MUL_S(ctx->f16.fl, ctx->f20.fl);
    // 0x00210830: lwc1        $f16, 0x34($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X34);
    // 0x00210834: mul.s       $f6, $f16, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f16.fl, ctx->f0.fl);
    // 0x00210838: nop

    // 0x0021083C: mul.s       $f20, $f16, $f20
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f20.fl = MUL_S(ctx->f16.fl, ctx->f20.fl);
    // 0x00210840: add.s       $f15, $f15, $f11
    CHECK_FR(ctx, 15);
    CHECK_FR(ctx, 15);
    CHECK_FR(ctx, 11);
    NAN_CHECK(ctx->f15.fl); NAN_CHECK(ctx->f11.fl); 
    ctx->f15.fl = ctx->f15.fl + ctx->f11.fl;
    // 0x00210844: add.s       $f14, $f14, $f9
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 9);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f9.fl); 
    ctx->f14.fl = ctx->f14.fl + ctx->f9.fl;
    // 0x00210848: add.s       $f13, $f13, $f7
    CHECK_FR(ctx, 13);
    CHECK_FR(ctx, 13);
    CHECK_FR(ctx, 7);
    NAN_CHECK(ctx->f13.fl); NAN_CHECK(ctx->f7.fl); 
    ctx->f13.fl = ctx->f13.fl + ctx->f7.fl;
    // 0x0021084C: add.s       $f12, $f12, $f5
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 5);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f5.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f5.fl;
    // 0x00210850: add.s       $f10, $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x00210854: add.s       $f8, $f8, $f3
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f8.fl = ctx->f8.fl + ctx->f3.fl;
    // 0x00210858: swc1        $f15, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f_odd[(15 - 1) * 2];
    // 0x0021085C: swc1        $f14, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f14.u32l;
    // 0x00210860: add.s       $f6, $f6, $f1
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f1.fl;
    // 0x00210864: swc1        $f13, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->f_odd[(13 - 1) * 2];
    // 0x00210868: swc1        $f12, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->f12.u32l;
    // 0x0021086C: add.s       $f20, $f20, $f2
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f20.fl = ctx->f20.fl + ctx->f2.fl;
    // 0x00210870: swc1        $f10, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f10.u32l;
    // 0x00210874: swc1        $f8, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->f8.u32l;
    // 0x00210878: swc1        $f6, 0x34($s0)
    MEM_W(0X34, ctx->r16) = ctx->f6.u32l;
    // 0x0021087C: swc1        $f20, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->f20.u32l;
    // 0x00210880: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x00210884: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00210888: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x0021088C: jr          $ra
    // 0x00210890: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00210890: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_0041C9C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041C9C4: lw          $v0, 0x1C($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X1C);
    // 0x0041C9C8: lw          $v1, 0x518($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X518);
    // 0x0041C9CC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0041C9D0: sb          $v0, 0x3D($v1)
    MEM_B(0X3D, ctx->r3) = ctx->r2;
    // 0x0041C9D4: jr          $ra
    // 0x0041C9D8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x0041C9D8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
;}
RECOMP_FUNC void func_00293DE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00293DE0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x00293DE4: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x00293DE8: lw          $a2, 0x40($a0)
    ctx->r6 = MEM_W(ctx->r4, 0X40);
    // 0x00293DEC: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x00293DF0: sh          $v0, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r2;
    // 0x00293DF4: lw          $v1, 0x3C($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X3C);
    // 0x00293DF8: addiu       $a0, $a0, 0x14
    ctx->r4 = ADD32(ctx->r4, 0X14);
    // 0x00293DFC: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    // 0x00293E00: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x00293E04: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x00293E08: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x00293E0C: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x00293E10: addu        $a2, $a2, $v0
    ctx->r6 = ADD32(ctx->r6, ctx->r2);
    // 0x00293E14: sw          $a2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r6;
    // 0x00293E18: jal         0x00291034
    // 0x00293E1C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_00291034(rdram, ctx);
        goto after_0;
    // 0x00293E1C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x00293E20: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x00293E24: jr          $ra
    // 0x00293E28: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x00293E28: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_00402F4C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00402F4C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00402F50: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00402F54: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x00402F58: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x00402F5C: lw          $a0, -0xA40($a0)
    ctx->r4 = MEM_W(ctx->r4, -0XA40);
    // 0x00402F60: addiu       $a2, $zero, 0x5AB4
    ctx->r6 = ADD32(0, 0X5AB4);
    // 0x00402F64: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x00402F68: jal         0x002666B0
    // 0x00402F6C: addiu       $a1, $a0, 0x140
    ctx->r5 = ADD32(ctx->r4, 0X140);
    func_002666B0(rdram, ctx);
        goto after_0;
    // 0x00402F6C: addiu       $a1, $a0, 0x140
    ctx->r5 = ADD32(ctx->r4, 0X140);
    after_0:
    // 0x00402F70: lw          $v0, 0xD4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XD4);
    // 0x00402F74: lui         $v1, 0x1
    ctx->r3 = S32(0X1 << 16);
    // 0x00402F78: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x00402F7C: sw          $v0, 0xD4($s0)
    MEM_W(0XD4, ctx->r16) = ctx->r2;
    // 0x00402F80: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x00402F84: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00402F88: jr          $ra
    // 0x00402F8C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00402F8C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0028CEBC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0028CEBC: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x0028CEC0: lw          $v0, 0xA88($v0)
    ctx->r2 = MEM_W(ctx->r2, 0XA88);
    // 0x0028CEC4: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x0028CEC8: sw          $v0, -0xE80($at)
    MEM_W(-0XE80, ctx->r1) = ctx->r2;
    // 0x0028CECC: jr          $ra
    // 0x0028CED0: nop

    return;
    // 0x0028CED0: nop

;}
RECOMP_FUNC void func_00406E0C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00406E0C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x00406E10: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x00406E14: addiu       $a0, $a0, -0x600
    ctx->r4 = ADD32(ctx->r4, -0X600);
    // 0x00406E18: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x00406E1C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00406E20: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00406E24: sdc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X20, ctx->r29);
    // 0x00406E28: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x00406E2C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x00406E30: beql        $v1, $v0, L_00406E60
    if (ctx->r3 == ctx->r2) {
        // 0x00406E34: sw          $zero, -0x8($a0)
        MEM_W(-0X8, ctx->r4) = 0;
            goto L_00406E60;
    }
    goto skip_0;
    // 0x00406E34: sw          $zero, -0x8($a0)
    MEM_W(-0X8, ctx->r4) = 0;
    skip_0:
    // 0x00406E38: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x00406E3C: lw          $v1, -0x600($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X600);
    // 0x00406E40: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x00406E44: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x00406E48: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x00406E4C: lw          $v1, -0x604($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X604);
    // 0x00406E50: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x00406E54: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x00406E58: lwc1        $f0, 0x10($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X10);
    // 0x00406E5C: swc1        $f0, -0x8($a0)
    MEM_W(-0X8, ctx->r4) = ctx->f0.u32l;
L_00406E60:
    // 0x00406E60: lui         $s0, 0x8013
    ctx->r16 = S32(0X8013 << 16);
    // 0x00406E64: addiu       $s0, $s0, -0x600
    ctx->r16 = ADD32(ctx->r16, -0X600);
    // 0x00406E68: addiu       $s1, $zero, 0x5
    ctx->r17 = ADD32(0, 0X5);
L_00406E6C:
    // 0x00406E6C: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x00406E70: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x00406E74: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x00406E78: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x00406E7C: lw          $v1, -0x600($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X600);
    // 0x00406E80: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x00406E84: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x00406E88: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x00406E8C: lw          $v1, -0x604($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X604);
    // 0x00406E90: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x00406E94: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x00406E98: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x00406E9C: beql        $v0, $s1, L_00406EA4
    if (ctx->r2 == ctx->r17) {
        // 0x00406EA0: sw          $zero, 0x0($s0)
        MEM_W(0X0, ctx->r16) = 0;
            goto L_00406EA4;
    }
    goto skip_1;
    // 0x00406EA0: sw          $zero, 0x0($s0)
    MEM_W(0X0, ctx->r16) = 0;
    skip_1:
L_00406EA4:
    // 0x00406EA4: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x00406EA8: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x00406EAC: lw          $v1, -0x600($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X600);
    // 0x00406EB0: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x00406EB4: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00406EB8: lwc1        $f14, 0x500($at)
    ctx->f14.u32l = MEM_W(ctx->r1, 0X500);
    // 0x00406EBC: sw          $v0, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r2;
    // 0x00406EC0: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x00406EC4: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x00406EC8: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x00406ECC: lw          $v1, -0x604($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X604);
    // 0x00406ED0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x00406ED4: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x00406ED8: lwc1        $f20, 0xC($v0)
    ctx->f20.u32l = MEM_W(ctx->r2, 0XC);
    // 0x00406EDC: cvt.s.w     $f20, $f20
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    ctx->f20.fl = CVT_S_W(ctx->f20.u32l);
    // 0x00406EE0: jal         0x002119FC
    // 0x00406EE4: nop

    func_002119FC(rdram, ctx);
        goto after_0;
    // 0x00406EE4: nop

    after_0:
    // 0x00406EE8: c.le.s      $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f20.fl <= ctx->f0.fl;
    // 0x00406EEC: nop

    // 0x00406EF0: bc1t        L_00406E6C
    if (c1cs) {
        // 0x00406EF4: nop
    
            goto L_00406E6C;
    }
    // 0x00406EF4: nop

    // 0x00406EF8: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x00406EFC: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00406F00: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00406F04: ldc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X20);
    // 0x00406F08: jr          $ra
    // 0x00406F0C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x00406F0C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_00407374(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00407374: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00407378: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x0040737C: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x00407380: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x00407384: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x00407388: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0040738C: lb          $v0, 0xC7($s1)
    ctx->r2 = MEM_B(ctx->r17, 0XC7);
    // 0x00407390: beq         $v0, $zero, L_004073DC
    if (ctx->r2 == 0) {
        // 0x00407394: addu        $s2, $a0, $zero
        ctx->r18 = ADD32(ctx->r4, 0);
            goto L_004073DC;
    }
    // 0x00407394: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x00407398: lui         $s0, 0x8013
    ctx->r16 = S32(0X8013 << 16);
    // 0x0040739C: addiu       $s0, $s0, -0x624
    ctx->r16 = ADD32(ctx->r16, -0X624);
    // 0x004073A0: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x004073A4: lwc1        $f12, 0x50C($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X50C);
    // 0x004073A8: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x004073AC: lwc1        $f14, 0x510($at)
    ctx->f14.u32l = MEM_W(ctx->r1, 0X510);
    // 0x004073B0: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x004073B4: jal         0x002119FC
    // 0x004073B8: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    func_002119FC(rdram, ctx);
        goto after_0;
    // 0x004073B8: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    after_0:
    // 0x004073BC: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x004073C0: lwc1        $f1, 0x514($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X514);
    // 0x004073C4: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x004073C8: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x004073CC: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x004073D0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x004073D4: jal         0x00243414
    // 0x004073D8: swc1        $f0, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f0.u32l;
    func_00243414(rdram, ctx);
        goto after_1;
    // 0x004073D8: swc1        $f0, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f0.u32l;
    after_1:
L_004073DC:
    // 0x004073DC: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x004073E0: lw          $v0, -0x624($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X624);
    // 0x004073E4: bne         $v0, $zero, L_004073F8
    if (ctx->r2 != 0) {
        // 0x004073E8: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_004073F8;
    }
    // 0x004073E8: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x004073EC: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x004073F0: jal         0x00243414
    // 0x004073F4: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    func_00243414(rdram, ctx);
        goto after_2;
    // 0x004073F4: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    after_2:
L_004073F8:
    // 0x004073F8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x004073FC: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x00407400: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00407404: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00407408: jr          $ra
    // 0x0040740C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x0040740C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_00402404(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00402404: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x00402408: sw          $s5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r21;
    // 0x0040240C: addu        $s5, $a0, $zero
    ctx->r21 = ADD32(ctx->r4, 0);
    // 0x00402410: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x00402414: addu        $s3, $a2, $zero
    ctx->r19 = ADD32(ctx->r6, 0);
    // 0x00402418: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x0040241C: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x00402420: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x00402424: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00402428: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0040242C: lw          $a0, 0x10($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X10);
    // 0x00402430: beq         $a0, $zero, L_00402634
    if (ctx->r4 == 0) {
        // 0x00402434: addu        $s2, $a1, $zero
        ctx->r18 = ADD32(ctx->r5, 0);
            goto L_00402634;
    }
    // 0x00402434: addu        $s2, $a1, $zero
    ctx->r18 = ADD32(ctx->r5, 0);
    // 0x00402438: lui         $s1, 0x8013
    ctx->r17 = S32(0X8013 << 16);
    // 0x0040243C: addiu       $s1, $s1, -0xC60
    ctx->r17 = ADD32(ctx->r17, -0XC60);
    // 0x00402440: lw          $v0, 0x250($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X250);
    // 0x00402444: lw          $v1, 0x214($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X214);
    // 0x00402448: bne         $v0, $zero, L_00402634
    if (ctx->r2 != 0) {
        // 0x0040244C: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_00402634;
    }
    // 0x0040244C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x00402450: lw          $s0, 0x14($v1)
    ctx->r16 = MEM_W(ctx->r3, 0X14);
    // 0x00402454: beq         $s0, $v0, L_00402634
    if (ctx->r16 == ctx->r2) {
        // 0x00402458: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_00402634;
    }
    // 0x00402458: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x0040245C: bne         $s0, $v0, L_00402474
    if (ctx->r16 != ctx->r2) {
        // 0x00402460: addiu       $v1, $zero, 0x1
        ctx->r3 = ADD32(0, 0X1);
            goto L_00402474;
    }
    // 0x00402460: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x00402464: lb          $v1, 0x34($s2)
    ctx->r3 = MEM_B(ctx->r18, 0X34);
    // 0x00402468: addiu       $v0, $zero, 0xF
    ctx->r2 = ADD32(0, 0XF);
    // 0x0040246C: bne         $v1, $v0, L_00402634
    if (ctx->r3 != ctx->r2) {
        // 0x00402470: addiu       $v1, $zero, 0x1
        ctx->r3 = ADD32(0, 0X1);
            goto L_00402634;
    }
    // 0x00402470: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_00402474:
    // 0x00402474: lw          $v0, 0x6C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X6C);
    // 0x00402478: sllv        $s4, $v1, $s0
    ctx->r20 = S32(ctx->r3 << (ctx->r16 & 31));
    // 0x0040247C: and         $v0, $v0, $s4
    ctx->r2 = ctx->r2 & ctx->r20;
    // 0x00402480: beq         $v0, $zero, L_00402634
    if (ctx->r2 == 0) {
        // 0x00402484: addiu       $v0, $zero, 0xF
        ctx->r2 = ADD32(0, 0XF);
            goto L_00402634;
    }
    // 0x00402484: addiu       $v0, $zero, 0xF
    ctx->r2 = ADD32(0, 0XF);
    // 0x00402488: lb          $v1, 0x34($s2)
    ctx->r3 = MEM_B(ctx->r18, 0X34);
    // 0x0040248C: beq         $v1, $v0, L_004024B0
    if (ctx->r3 == ctx->r2) {
        // 0x00402490: lui         $v1, 0xC0
        ctx->r3 = S32(0XC0 << 16);
            goto L_004024B0;
    }
    // 0x00402490: lui         $v1, 0xC0
    ctx->r3 = S32(0XC0 << 16);
    // 0x00402494: lw          $v0, 0xC($s3)
    ctx->r2 = MEM_W(ctx->r19, 0XC);
    // 0x00402498: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x0040249C: beq         $v0, $zero, L_004024B0
    if (ctx->r2 == 0) {
        // 0x004024A0: addu        $a0, $s5, $zero
        ctx->r4 = ADD32(ctx->r21, 0);
            goto L_004024B0;
    }
    // 0x004024A0: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    // 0x004024A4: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x004024A8: jal         0x00243414
    // 0x004024AC: addiu       $a2, $zero, 0xD
    ctx->r6 = ADD32(0, 0XD);
    func_00243414(rdram, ctx);
        goto after_0;
    // 0x004024AC: addiu       $a2, $zero, 0xD
    ctx->r6 = ADD32(0, 0XD);
    after_0:
L_004024B0:
    // 0x004024B0: sll         $v0, $s0, 1
    ctx->r2 = S32(ctx->r16 << 1);
    // 0x004024B4: addu        $v0, $v0, $s0
    ctx->r2 = ADD32(ctx->r2, ctx->r16);
    // 0x004024B8: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x004024BC: addu        $v0, $v0, $s0
    ctx->r2 = ADD32(ctx->r2, ctx->r16);
    // 0x004024C0: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x004024C4: addu        $a0, $v0, $s1
    ctx->r4 = ADD32(ctx->r2, ctx->r17);
    // 0x004024C8: addiu       $a0, $a0, 0xC
    ctx->r4 = ADD32(ctx->r4, 0XC);
    // 0x004024CC: addu        $s0, $s1, $v0
    ctx->r16 = ADD32(ctx->r17, ctx->r2);
    // 0x004024D0: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
    // 0x004024D4: lw          $v1, 0x4($s3)
    ctx->r3 = MEM_W(ctx->r19, 0X4);
    // 0x004024D8: lui         $a1, 0x43
    ctx->r5 = S32(0X43 << 16);
    // 0x004024DC: addiu       $a1, $a1, 0x924
    ctx->r5 = ADD32(ctx->r5, 0X924);
    // 0x004024E0: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x004024E4: jal         0x00236314
    // 0x004024E8: sw          $v0, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r2;
    func_00236314(rdram, ctx);
        goto after_1;
    // 0x004024E8: sw          $v0, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r2;
    after_1:
    // 0x004024EC: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
    // 0x004024F0: bgtz        $v0, L_004025B4
    if (SIGNED(ctx->r2) > 0) {
        // 0x004024F4: addu        $v1, $zero, $zero
        ctx->r3 = ADD32(0, 0);
            goto L_004025B4;
    }
    // 0x004024F4: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
    // 0x004024F8: sw          $zero, 0x8($s0)
    MEM_W(0X8, ctx->r16) = 0;
    // 0x004024FC: lw          $v0, 0xC($s2)
    ctx->r2 = MEM_W(ctx->r18, 0XC);
    // 0x00402500: nor         $v1, $zero, $s4
    ctx->r3 = ~(0 | ctx->r20);
    // 0x00402504: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x00402508: lb          $v1, 0x34($s2)
    ctx->r3 = MEM_B(ctx->r18, 0X34);
    // 0x0040250C: sw          $v0, 0xC($s2)
    MEM_W(0XC, ctx->r18) = ctx->r2;
    // 0x00402510: addiu       $v0, $zero, 0xF
    ctx->r2 = ADD32(0, 0XF);
    // 0x00402514: beq         $v1, $v0, L_00402528
    if (ctx->r3 == ctx->r2) {
        // 0x00402518: addu        $a0, $s5, $zero
        ctx->r4 = ADD32(ctx->r21, 0);
            goto L_00402528;
    }
    // 0x00402518: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    // 0x0040251C: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x00402520: jal         0x00243414
    // 0x00402524: addiu       $a2, $zero, 0xD
    ctx->r6 = ADD32(0, 0XD);
    func_00243414(rdram, ctx);
        goto after_2;
    // 0x00402524: addiu       $a2, $zero, 0xD
    ctx->r6 = ADD32(0, 0XD);
    after_2:
L_00402528:
    // 0x00402528: lw          $v0, 0x214($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X214);
    // 0x0040252C: addiu       $v0, $v0, 0x20
    ctx->r2 = ADD32(ctx->r2, 0X20);
    // 0x00402530: sw          $v0, 0x214($s1)
    MEM_W(0X214, ctx->r17) = ctx->r2;
    // 0x00402534: lw          $v0, 0x210($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X210);
    // 0x00402538: lw          $a0, 0x214($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X214);
    // 0x0040253C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x00402540: sw          $v0, 0x210($s1)
    MEM_W(0X210, ctx->r17) = ctx->r2;
    // 0x00402544: lw          $v0, 0x218($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X218);
    // 0x00402548: lw          $v1, 0x4($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X4);
    // 0x0040254C: sw          $zero, 0x21C($s1)
    MEM_W(0X21C, ctx->r17) = 0;
    // 0x00402550: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x00402554: sw          $v0, 0x218($s1)
    MEM_W(0X218, ctx->r17) = ctx->r2;
    // 0x00402558: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x0040255C: beql        $v0, $zero, L_0040257C
    if (ctx->r2 == 0) {
        // 0x00402560: sw          $zero, 0x250($s1)
        MEM_W(0X250, ctx->r17) = 0;
            goto L_0040257C;
    }
    goto skip_0;
    // 0x00402560: sw          $zero, 0x250($s1)
    MEM_W(0X250, ctx->r17) = 0;
    skip_0:
    // 0x00402564: lw          $v0, 0x4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X4);
    // 0x00402568: beq         $v0, $zero, L_00402578
    if (ctx->r2 == 0) {
        // 0x0040256C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_00402578;
    }
    // 0x0040256C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00402570: j           L_0040257C
    // 0x00402574: sw          $v0, 0x250($s1)
    MEM_W(0X250, ctx->r17) = ctx->r2;
        goto L_0040257C;
    // 0x00402574: sw          $v0, 0x250($s1)
    MEM_W(0X250, ctx->r17) = ctx->r2;
L_00402578:
    // 0x00402578: sw          $zero, 0x250($s1)
    MEM_W(0X250, ctx->r17) = 0;
L_0040257C:
    // 0x0040257C: lw          $v1, 0x210($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X210);
    // 0x00402580: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x00402584: bne         $v1, $v0, L_00402598
    if (ctx->r3 != ctx->r2) {
        // 0x00402588: addiu       $v0, $zero, 0x8
        ctx->r2 = ADD32(0, 0X8);
            goto L_00402598;
    }
    // 0x00402588: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x0040258C: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x00402590: j           L_004025A8
    // 0x00402594: addiu       $a2, $zero, 0xE
    ctx->r6 = ADD32(0, 0XE);
        goto L_004025A8;
    // 0x00402594: addiu       $a2, $zero, 0xE
    ctx->r6 = ADD32(0, 0XE);
L_00402598:
    // 0x00402598: bne         $v1, $v0, L_004025B4
    if (ctx->r3 != ctx->r2) {
        // 0x0040259C: addu        $v1, $zero, $zero
        ctx->r3 = ADD32(0, 0);
            goto L_004025B4;
    }
    // 0x0040259C: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
    // 0x004025A0: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x004025A4: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
L_004025A8:
    // 0x004025A8: jal         0x00243414
    // 0x004025AC: addiu       $a1, $a0, 0x140
    ctx->r5 = ADD32(ctx->r4, 0X140);
    func_00243414(rdram, ctx);
        goto after_3;
    // 0x004025AC: addiu       $a1, $a0, 0x140
    ctx->r5 = ADD32(ctx->r4, 0X140);
    after_3:
    // 0x004025B0: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
L_004025B4:
    // 0x004025B4: addu        $a1, $v1, $zero
    ctx->r5 = ADD32(ctx->r3, 0);
    // 0x004025B8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
L_004025BC:
    // 0x004025BC: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x004025C0: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x004025C4: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x004025C8: slti        $v0, $a1, 0x5
    ctx->r2 = SIGNED(ctx->r5) < 0X5 ? 1 : 0;
    // 0x004025CC: bne         $v0, $zero, L_004025BC
    if (ctx->r2 != 0) {
        // 0x004025D0: addiu       $a0, $a0, 0x68
        ctx->r4 = ADD32(ctx->r4, 0X68);
            goto L_004025BC;
    }
    // 0x004025D0: addiu       $a0, $a0, 0x68
    ctx->r4 = ADD32(ctx->r4, 0X68);
    // 0x004025D4: lui         $a0, 0x473C
    ctx->r4 = S32(0X473C << 16);
    // 0x004025D8: ori         $a0, $a0, 0x1AB7
    ctx->r4 = ctx->r4 | 0X1AB7;
    // 0x004025DC: sra         $v1, $v1, 8
    ctx->r3 = S32(SIGNED(ctx->r3) >> 8);
    // 0x004025E0: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x004025E4: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x004025E8: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x004025EC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x004025F0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x004025F4: mult        $v0, $a0
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r4)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x004025F8: sra         $v0, $v0, 31
    ctx->r2 = S32(SIGNED(ctx->r2) >> 31);
    // 0x004025FC: mfhi        $a3
    ctx->r7 = hi;
    // 0x00402600: sra         $v1, $a3, 7
    ctx->r3 = S32(SIGNED(ctx->r7) >> 7);
    // 0x00402604: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x00402608: bltz        $v1, L_00402618
    if (SIGNED(ctx->r3) < 0) {
        // 0x0040260C: slti        $v0, $v1, 0x65
        ctx->r2 = SIGNED(ctx->r3) < 0X65 ? 1 : 0;
            goto L_00402618;
    }
    // 0x0040260C: slti        $v0, $v1, 0x65
    ctx->r2 = SIGNED(ctx->r3) < 0X65 ? 1 : 0;
    // 0x00402610: beq         $v0, $zero, L_00402624
    if (ctx->r2 == 0) {
        // 0x00402614: addiu       $a1, $zero, 0x64
        ctx->r5 = ADD32(0, 0X64);
            goto L_00402624;
    }
    // 0x00402614: addiu       $a1, $zero, 0x64
    ctx->r5 = ADD32(0, 0X64);
L_00402618:
    // 0x00402618: bgez        $v1, L_00402624
    if (SIGNED(ctx->r3) >= 0) {
        // 0x0040261C: addu        $a1, $v1, $zero
        ctx->r5 = ADD32(ctx->r3, 0);
            goto L_00402624;
    }
    // 0x0040261C: addu        $a1, $v1, $zero
    ctx->r5 = ADD32(ctx->r3, 0);
    // 0x00402620: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
L_00402624:
    // 0x00402624: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x00402628: addiu       $a0, $a0, 0xF0
    ctx->r4 = ADD32(ctx->r4, 0XF0);
    // 0x0040262C: jal         0x0027AD88
    // 0x00402630: nop

    func_0027AD88(rdram, ctx);
        goto after_4;
    // 0x00402630: nop

    after_4:
L_00402634:
    // 0x00402634: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x00402638: lw          $s5, 0x24($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X24);
    // 0x0040263C: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x00402640: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x00402644: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x00402648: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x0040264C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00402650: jr          $ra
    // 0x00402654: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x00402654: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_0041B514(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041B514: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x0041B518: lw          $v0, -0x5524($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X5524);
    // 0x0041B51C: andi        $v0, $v0, 0x40
    ctx->r2 = ctx->r2 & 0X40;
    // 0x0041B520: beq         $v0, $zero, L_0041B534
    if (ctx->r2 == 0) {
        // 0x0041B524: lui         $v1, 0x100
        ctx->r3 = S32(0X100 << 16);
            goto L_0041B534;
    }
    // 0x0041B524: lui         $v1, 0x100
    ctx->r3 = S32(0X100 << 16);
    // 0x0041B528: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x0041B52C: j           L_0041B544
    // 0x0041B530: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
        goto L_0041B544;
    // 0x0041B530: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
L_0041B534:
    // 0x0041B534: lui         $v1, 0xFEFF
    ctx->r3 = S32(0XFEFF << 16);
    // 0x0041B538: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x0041B53C: ori         $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 | 0XFFFF;
    // 0x0041B540: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
L_0041B544:
    // 0x0041B544: sw          $v0, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r2;
    // 0x0041B548: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x0041B54C: lw          $v0, -0x5528($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X5528);
    // 0x0041B550: andi        $v0, $v0, 0x40
    ctx->r2 = ctx->r2 & 0X40;
    // 0x0041B554: beq         $v0, $zero, L_0041B56C
    if (ctx->r2 == 0) {
        // 0x0041B558: nop
    
            goto L_0041B56C;
    }
    // 0x0041B558: nop

    // 0x0041B55C: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0041B560: addiu       $v0, $v0, 0x58FC
    ctx->r2 = ADD32(ctx->r2, 0X58FC);
    // 0x0041B564: j           L_0041B578
    // 0x0041B568: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_0041B578;
    // 0x0041B568: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_0041B56C:
    // 0x0041B56C: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0041B570: addiu       $v0, $v0, 0x5918
    ctx->r2 = ADD32(ctx->r2, 0X5918);
    // 0x0041B574: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_0041B578:
    // 0x0041B578: jr          $ra
    // 0x0041B57C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x0041B57C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void func_004235C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004235C0: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x004235C4: lw          $v0, 0x964($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X964);
    // 0x004235C8: beq         $v0, $zero, L_004235E0
    if (ctx->r2 == 0) {
        // 0x004235CC: nop
    
            goto L_004235E0;
    }
    // 0x004235CC: nop

    // 0x004235D0: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x004235D4: addiu       $v0, $v0, 0x509C
    ctx->r2 = ADD32(ctx->r2, 0X509C);
    // 0x004235D8: j           L_004235EC
    // 0x004235DC: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_004235EC;
    // 0x004235DC: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_004235E0:
    // 0x004235E0: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x004235E4: addiu       $v0, $v0, 0x50D4
    ctx->r2 = ADD32(ctx->r2, 0X50D4);
    // 0x004235E8: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_004235EC:
    // 0x004235EC: jr          $ra
    // 0x004235F0: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x004235F0: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void func_0040BDD0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0040BDD0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x0040BDD4: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x0040BDD8: addu        $s2, $a1, $zero
    ctx->r18 = ADD32(ctx->r5, 0);
    // 0x0040BDDC: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x0040BDE0: addu        $s3, $a2, $zero
    ctx->r19 = ADD32(ctx->r6, 0);
    // 0x0040BDE4: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x0040BDE8: lui         $s4, 0x8013
    ctx->r20 = S32(0X8013 << 16);
    // 0x0040BDEC: addiu       $s4, $s4, -0x490
    ctx->r20 = ADD32(ctx->r20, -0X490);
    // 0x0040BDF0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0040BDF4: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x0040BDF8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x0040BDFC: addiu       $s1, $zero, 0x18
    ctx->r17 = ADD32(0, 0X18);
    // 0x0040BE00: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
L_0040BE04:
    // 0x0040BE04: srav        $v0, $s3, $s0
    ctx->r2 = S32(SIGNED(ctx->r19) >> (ctx->r16 & 31));
    // 0x0040BE08: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x0040BE0C: beq         $v0, $zero, L_0040BE20
    if (ctx->r2 == 0) {
        // 0x0040BE10: addu        $a0, $s4, $s1
        ctx->r4 = ADD32(ctx->r20, ctx->r17);
            goto L_0040BE20;
    }
    // 0x0040BE10: addu        $a0, $s4, $s1
    ctx->r4 = ADD32(ctx->r20, ctx->r17);
    // 0x0040BE14: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x0040BE18: jal         0x00236314
    // 0x0040BE1C: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    func_00236314(rdram, ctx);
        goto after_0;
    // 0x0040BE1C: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    after_0:
L_0040BE20:
    // 0x0040BE20: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x0040BE24: slti        $v0, $s0, 0xF
    ctx->r2 = SIGNED(ctx->r16) < 0XF ? 1 : 0;
    // 0x0040BE28: bne         $v0, $zero, L_0040BE04
    if (ctx->r2 != 0) {
        // 0x0040BE2C: addiu       $s1, $s1, 0x68
        ctx->r17 = ADD32(ctx->r17, 0X68);
            goto L_0040BE04;
    }
    // 0x0040BE2C: addiu       $s1, $s1, 0x68
    ctx->r17 = ADD32(ctx->r17, 0X68);
    // 0x0040BE30: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x0040BE34: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x0040BE38: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x0040BE3C: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x0040BE40: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x0040BE44: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0040BE48: jr          $ra
    // 0x0040BE4C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x0040BE4C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_00266D8C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00266D8C: beq         $a1, $zero, L_00266DE8
    if (ctx->r5 == 0) {
        // 0x00266D90: addiu       $t0, $a1, -0x1
        ctx->r8 = ADD32(ctx->r5, -0X1);
            goto L_00266DE8;
    }
    // 0x00266D90: addiu       $t0, $a1, -0x1
    ctx->r8 = ADD32(ctx->r5, -0X1);
    // 0x00266D94: beq         $t0, $zero, L_00266DCC
    if (ctx->r8 == 0) {
        // 0x00266D98: addu        $t1, $zero, $zero
        ctx->r9 = ADD32(0, 0);
            goto L_00266DCC;
    }
    // 0x00266D98: addu        $t1, $zero, $zero
    ctx->r9 = ADD32(0, 0);
    // 0x00266D9C: addu        $v0, $t1, $t0
    ctx->r2 = ADD32(ctx->r9, ctx->r8);
L_00266DA0:
    // 0x00266DA0: srl         $v1, $v0, 1
    ctx->r3 = S32(U32(ctx->r2) >> 1);
    // 0x00266DA4: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x00266DA8: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x00266DAC: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x00266DB0: sltu        $v0, $v0, $a2
    ctx->r2 = ctx->r2 < ctx->r6 ? 1 : 0;
    // 0x00266DB4: beql        $v0, $zero, L_00266DC0
    if (ctx->r2 == 0) {
        // 0x00266DB8: addu        $t0, $v1, $zero
        ctx->r8 = ADD32(ctx->r3, 0);
            goto L_00266DC0;
    }
    goto skip_0;
    // 0x00266DB8: addu        $t0, $v1, $zero
    ctx->r8 = ADD32(ctx->r3, 0);
    skip_0:
    // 0x00266DBC: addiu       $t1, $v1, 0x1
    ctx->r9 = ADD32(ctx->r3, 0X1);
L_00266DC0:
    // 0x00266DC0: sltu        $v0, $t1, $t0
    ctx->r2 = ctx->r9 < ctx->r8 ? 1 : 0;
    // 0x00266DC4: bne         $v0, $zero, L_00266DA0
    if (ctx->r2 != 0) {
        // 0x00266DC8: addu        $v0, $t1, $t0
        ctx->r2 = ADD32(ctx->r9, ctx->r8);
            goto L_00266DA0;
    }
    // 0x00266DC8: addu        $v0, $t1, $t0
    ctx->r2 = ADD32(ctx->r9, ctx->r8);
L_00266DCC:
    // 0x00266DCC: sll         $v0, $t1, 2
    ctx->r2 = S32(ctx->r9 << 2);
    // 0x00266DD0: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x00266DD4: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x00266DD8: bne         $v0, $a2, L_00266DEC
    if (ctx->r2 != ctx->r6) {
        // 0x00266DDC: addiu       $v1, $zero, -0x1
        ctx->r3 = ADD32(0, -0X1);
            goto L_00266DEC;
    }
    // 0x00266DDC: addiu       $v1, $zero, -0x1
    ctx->r3 = ADD32(0, -0X1);
    // 0x00266DE0: j           L_00266DEC
    // 0x00266DE4: addu        $v1, $t1, $zero
    ctx->r3 = ADD32(ctx->r9, 0);
        goto L_00266DEC;
    // 0x00266DE4: addu        $v1, $t1, $zero
    ctx->r3 = ADD32(ctx->r9, 0);
L_00266DE8:
    // 0x00266DE8: addiu       $v1, $zero, -0x1
    ctx->r3 = ADD32(0, -0X1);
L_00266DEC:
    // 0x00266DEC: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x00266DF0: bne         $v1, $v0, L_00266E00
    if (ctx->r3 != ctx->r2) {
            // 0x00266DF4: addiu       $t0, $v1, -0x1
    ctx->r8 = ADD32(ctx->r3, -0X1);
    func_00266E00(rdram, ctx);
    return;
    }
    // 0x00266DF4: addiu       $t0, $v1, -0x1
    ctx->r8 = ADD32(ctx->r3, -0X1);
    // 0x00266DF8: jr          $ra
    // 0x00266DFC: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x00266DFC: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void func_00288BC8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00288BC8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00288BCC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00288BD0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x00288BD4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x00288BD8: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x00288BDC: addu        $at, $s0, $at
    ctx->r1 = ADD32(ctx->r16, ctx->r1);
    // 0x00288BE0: lw          $v1, 0x3FD8($at)
    ctx->r3 = MEM_W(ctx->r1, 0X3FD8);
    // 0x00288BE4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00288BE8: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x00288BEC: addu        $at, $s0, $at
    ctx->r1 = ADD32(ctx->r16, ctx->r1);
    // 0x00288BF0: sb          $v0, 0x3FE1($at)
    MEM_B(0X3FE1, ctx->r1) = ctx->r2;
    // 0x00288BF4: addiu       $v0, $zero, 0x11
    ctx->r2 = ADD32(0, 0X11);
    // 0x00288BF8: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x00288BFC: addu        $at, $s0, $at
    ctx->r1 = ADD32(ctx->r16, ctx->r1);
    // 0x00288C00: sw          $zero, 0x3FE4($at)
    MEM_W(0X3FE4, ctx->r1) = 0;
    // 0x00288C04: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x00288C08: addu        $at, $s0, $at
    ctx->r1 = ADD32(ctx->r16, ctx->r1);
    // 0x00288C0C: sw          $v0, 0x3FD8($at)
    MEM_W(0X3FD8, ctx->r1) = ctx->r2;
    // 0x00288C10: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x00288C14: addu        $at, $s0, $at
    ctx->r1 = ADD32(ctx->r16, ctx->r1);
    // 0x00288C18: sw          $a1, 0x3FDC($at)
    MEM_W(0X3FDC, ctx->r1) = ctx->r5;
    // 0x00288C1C: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x00288C20: addu        $at, $s0, $at
    ctx->r1 = ADD32(ctx->r16, ctx->r1);
    // 0x00288C24: sw          $v1, 0x3FD4($at)
    MEM_W(0X3FD4, ctx->r1) = ctx->r3;
    // 0x00288C28: jal         0x0028D0E0
    // 0x00288C2C: nop

    func_0028D0E0(rdram, ctx);
        goto after_0;
    // 0x00288C2C: nop

    after_0:
    // 0x00288C30: beq         $v0, $zero, L_00288C4C
    if (ctx->r2 == 0) {
        // 0x00288C34: nop
    
            goto L_00288C4C;
    }
    // 0x00288C34: nop

    // 0x00288C38: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00288C3C: lwc1        $f0, -0x6220($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X6220);
    // 0x00288C40: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x00288C44: addu        $at, $s0, $at
    ctx->r1 = ADD32(ctx->r16, ctx->r1);
    // 0x00288C48: swc1        $f0, 0x3FE4($at)
    MEM_W(0X3FE4, ctx->r1) = ctx->f0.u32l;
L_00288C4C:
    // 0x00288C4C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x00288C50: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00288C54: jr          $ra
    // 0x00288C58: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00288C58: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00253148(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00253148: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x0025314C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00253150: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x00253154: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00253158: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x0025315C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x00253160: jal         0x0020B5D4
    // 0x00253164: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    func_0020B5D4(rdram, ctx);
        goto after_0;
    // 0x00253164: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    after_0:
    // 0x00253168: lw          $s0, 0x20($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X20);
    // 0x0025316C: beq         $s0, $zero, L_002531B0
    if (ctx->r16 == 0) {
        // 0x00253170: addiu       $s2, $zero, 0x1
        ctx->r18 = ADD32(0, 0X1);
            goto L_002531B0;
    }
    // 0x00253170: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
L_00253174:
    // 0x00253174: lw          $v0, 0x51C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X51C);
    // 0x00253178: bne         $v0, $s1, L_0025319C
    if (ctx->r2 != ctx->r17) {
        // 0x0025317C: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_0025319C;
    }
    // 0x0025317C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00253180: lw          $v0, 0x24($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X24);
    // 0x00253184: beq         $v0, $s2, L_0025319C
    if (ctx->r2 == ctx->r18) {
        // 0x00253188: nop
    
            goto L_0025319C;
    }
    // 0x00253188: nop

    // 0x0025318C: jal         0x002842F8
    // 0x00253190: nop

    func_002842F8(rdram, ctx);
        goto after_1;
    // 0x00253190: nop

    after_1:
    // 0x00253194: beq         $v0, $zero, L_002531A4
    if (ctx->r2 == 0) {
        // 0x00253198: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_002531A4;
    }
    // 0x00253198: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_0025319C:
    // 0x0025319C: jal         0x0024972C
    // 0x002531A0: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_0024972C(rdram, ctx);
        goto after_2;
    // 0x002531A0: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_2:
L_002531A4:
    // 0x002531A4: lw          $s0, 0x1320($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X1320);
    // 0x002531A8: bne         $s0, $zero, L_00253174
    if (ctx->r16 != 0) {
        // 0x002531AC: nop
    
            goto L_00253174;
    }
    // 0x002531AC: nop

L_002531B0:
    // 0x002531B0: jal         0x0020B624
    // 0x002531B4: nop

    func_0020B624(rdram, ctx);
        goto after_3;
    // 0x002531B4: nop

    after_3:
    // 0x002531B8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x002531BC: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x002531C0: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x002531C4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x002531C8: jr          $ra
    // 0x002531CC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x002531CC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_0040DD38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0040DD38: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0040DD3C: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x0040DD40: lb          $v0, 0xC7($a1)
    ctx->r2 = MEM_B(ctx->r5, 0XC7);
    // 0x0040DD44: beq         $v0, $zero, L_0040DD54
    if (ctx->r2 == 0) {
        // 0x0040DD48: nop
    
            goto L_0040DD54;
    }
    // 0x0040DD48: nop

    // 0x0040DD4C: jal         0x00243414
    // 0x0040DD50: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    func_00243414(rdram, ctx);
        goto after_0;
    // 0x0040DD50: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_0:
L_0040DD54:
    // 0x0040DD54: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x0040DD58: jr          $ra
    // 0x0040DD5C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0040DD5C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00275B58(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00275B58: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00275B5C: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x00275B60: addiu       $a0, $a0, 0x2A00
    ctx->r4 = ADD32(ctx->r4, 0X2A00);
    // 0x00275B64: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x00275B68: jal         0x00271AA8
    // 0x00275B6C: nop

    func_00271AA8(rdram, ctx);
        goto after_0;
    // 0x00275B6C: nop

    after_0:
    // 0x00275B70: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x00275B74: jr          $ra
    // 0x00275B78: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00275B78: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00293F10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00293F10: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00293F14: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00293F18: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x00293F1C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00293F20: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x00293F24: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x00293F28: jal         0x0029E230
    // 0x00293F2C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_0029E230(rdram, ctx);
        goto after_0;
    // 0x00293F2C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_0:
    // 0x00293F30: lw          $v1, 0x20($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X20);
    // 0x00293F34: sw          $v1, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r3;
    // 0x00293F38: lw          $v1, 0x0($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X0);
    // 0x00293F3C: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x00293F40: sw          $v1, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r3;
    // 0x00293F44: jal         0x0029E230
    // 0x00293F48: sw          $s0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r16;
    func_0029E230(rdram, ctx);
        goto after_1;
    // 0x00293F48: sw          $s0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r16;
    after_1:
    // 0x00293F4C: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x00293F50: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00293F54: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00293F58: jr          $ra
    // 0x00293F5C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00293F5C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_0042EB4C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0042EB4C: add.s       $f12, $f12, $f1
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f1.fl;
;}
RECOMP_FUNC void func_0044F474(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0044F474: jr          $ra
    // 0x0044F478: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x0044F478: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void func_0024079C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0024079C: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x002407A0: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x002407A4: lw          $v1, 0x4($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X4);
    // 0x002407A8: sw          $v0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r2;
    // 0x002407AC: sw          $v1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r3;
    // 0x002407B0: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x002407B4: lw          $v1, 0x4($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X4);
    // 0x002407B8: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
    // 0x002407BC: sw          $v1, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r3;
    // 0x002407C0: lw          $v0, 0x0($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X0);
    // 0x002407C4: lw          $v1, 0x4($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X4);
    // 0x002407C8: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
    // 0x002407CC: sw          $v1, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r3;
    // 0x002407D0: jr          $ra
    // 0x002407D4: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x002407D4: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_00228C30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00228C30: jr          $ra
    // 0x00228C34: nop

    return;
    // 0x00228C34: nop

;}
RECOMP_FUNC void func_0040AFD0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0040AFD0: addiu       $sp, $sp, -0xB0
    ctx->r29 = ADD32(ctx->r29, -0XB0);
    // 0x0040AFD4: sw          $s1, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r17;
    // 0x0040AFD8: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x0040AFDC: sw          $s0, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r16;
    // 0x0040AFE0: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x0040AFE4: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    // 0x0040AFE8: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x0040AFEC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0040AFF0: sw          $ra, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->r31;
    // 0x0040AFF4: jal         0x00246108
    // 0x0040AFF8: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    func_00246108(rdram, ctx);
        goto after_0;
    // 0x0040AFF8: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    after_0:
    // 0x0040AFFC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0040B000: lui         $a2, 0x3E86
    ctx->r6 = S32(0X3E86 << 16);
    // 0x0040B004: ori         $a2, $a2, 0xA93
    ctx->r6 = ctx->r6 | 0XA93;
    // 0x0040B008: lw          $a3, 0x20($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X20);
    // 0x0040B00C: jal         0x00245BAC
    // 0x0040B010: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_00245BAC(rdram, ctx);
        goto after_1;
    // 0x0040B010: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_1:
    // 0x0040B014: lb          $v0, 0xC7($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XC7);
    // 0x0040B018: beq         $v0, $zero, L_0040B02C
    if (ctx->r2 == 0) {
        // 0x0040B01C: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_0040B02C;
    }
    // 0x0040B01C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0040B020: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x0040B024: jal         0x00243414
    // 0x0040B028: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_00243414(rdram, ctx);
        goto after_2;
    // 0x0040B028: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_2:
L_0040B02C:
    // 0x0040B02C: lw          $ra, 0xA8($sp)
    ctx->r31 = MEM_W(ctx->r29, 0XA8);
    // 0x0040B030: lw          $s1, 0xA4($sp)
    ctx->r17 = MEM_W(ctx->r29, 0XA4);
    // 0x0040B034: lw          $s0, 0xA0($sp)
    ctx->r16 = MEM_W(ctx->r29, 0XA0);
    // 0x0040B038: jr          $ra
    // 0x0040B03C: addiu       $sp, $sp, 0xB0
    ctx->r29 = ADD32(ctx->r29, 0XB0);
    return;
    // 0x0040B03C: addiu       $sp, $sp, 0xB0
    ctx->r29 = ADD32(ctx->r29, 0XB0);
;}
RECOMP_FUNC void func_00444918(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00444918: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x0044491C: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x00444920: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x00444924: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x00444928: lw          $a1, 0x10($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X10);
    // 0x0044492C: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x00444930: lw          $a2, 0x14($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X14);
    // 0x00444934: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00444938: lwc1        $f0, 0x888($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X888);
    // 0x0044493C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x00444940: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    // 0x00444944: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x00444948: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x0044494C: jal         0x00246310
    // 0x00444950: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    func_00246310(rdram, ctx);
        goto after_0;
    // 0x00444950: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    after_0:
    // 0x00444954: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00444958: lui         $a2, 0x3E86
    ctx->r6 = S32(0X3E86 << 16);
    // 0x0044495C: ori         $a2, $a2, 0xA93
    ctx->r6 = ctx->r6 | 0XA93;
    // 0x00444960: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x00444964: jal         0x00245BAC
    // 0x00444968: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_00245BAC(rdram, ctx);
        goto after_1;
    // 0x00444968: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_1:
    // 0x0044496C: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x00444970: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x00444974: jal         0x0020EF2C
    // 0x00444978: addiu       $a2, $s0, 0x4
    ctx->r6 = ADD32(ctx->r16, 0X4);
    func_0020EF2C(rdram, ctx);
        goto after_2;
    // 0x00444978: addiu       $a2, $s0, 0x4
    ctx->r6 = ADD32(ctx->r16, 0X4);
    after_2:
    // 0x0044497C: lwc1        $f1, 0x10($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x00444980: mul.s       $f1, $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f1.fl);
    // 0x00444984: lwc1        $f0, 0x14($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X14);
    // 0x00444988: mul.s       $f0, $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x0044498C: lwc1        $f12, 0x18($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X18);
    // 0x00444990: mul.s       $f12, $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x00444994: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x00444998: jal         0x00298470
    // 0x0044499C: add.s       $f12, $f1, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = ctx->f1.fl + ctx->f12.fl;
    func_00298470(rdram, ctx);
        goto after_3;
    // 0x0044499C: add.s       $f12, $f1, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = ctx->f1.fl + ctx->f12.fl;
    after_3:
    // 0x004449A0: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x004449A4: lwc1        $f1, 0x88C($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X88C);
    // 0x004449A8: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x004449AC: nop

    // 0x004449B0: bc1f        L_004449C4
    if (!c1cs) {
        // 0x004449B4: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_004449C4;
    }
    // 0x004449B4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x004449B8: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x004449BC: jal         0x00243414
    // 0x004449C0: addiu       $a2, $zero, 0x1C
    ctx->r6 = ADD32(0, 0X1C);
    func_00243414(rdram, ctx);
        goto after_4;
    // 0x004449C0: addiu       $a2, $zero, 0x1C
    ctx->r6 = ADD32(0, 0X1C);
    after_4:
L_004449C4:
    // 0x004449C4: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x004449C8: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x004449CC: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x004449D0: jr          $ra
    // 0x004449D4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x004449D4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_0025AAFC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0025AAFC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0025AB00: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x0025AB04: lw          $v0, 0x14($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X14);
    // 0x0025AB08: lhu         $a3, 0x7C($v0)
    ctx->r7 = MEM_HU(ctx->r2, 0X7C);
    // 0x0025AB0C: lui         $a2, 0x800B
    ctx->r6 = S32(0X800B << 16);
    // 0x0025AB10: addiu       $a2, $a2, 0x420
    ctx->r6 = ADD32(ctx->r6, 0X420);
    // 0x0025AB14: jal         0x00245A98
    // 0x0025AB18: nop

    func_00245A98(rdram, ctx);
        goto after_0;
    // 0x0025AB18: nop

    after_0:
    // 0x0025AB1C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x0025AB20: jr          $ra
    // 0x0025AB24: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0025AB24: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00289624(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00289624: jr          $ra
    // 0x00289628: nop

    return;
    // 0x00289628: nop

;}
RECOMP_FUNC void func_00239130(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00239130: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    // 0x00239134: lbu         $a1, 0x0($a0)
    ctx->r5 = MEM_BU(ctx->r4, 0X0);
    // 0x00239138: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0023913C: bne         $a1, $v0, L_00239158
    if (ctx->r5 != ctx->r2) {
        // 0x00239140: nop
    
            goto L_00239158;
    }
    // 0x00239140: nop

    // 0x00239144: lw          $v0, 0x18($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X18);
    // 0x00239148: lw          $v1, 0x27C($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X27C);
    // 0x0023914C: sllv        $v0, $a1, $v0
    ctx->r2 = S32(ctx->r5 << (ctx->r2 & 31));
    // 0x00239150: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x00239154: sw          $v1, 0x27C($a0)
    MEM_W(0X27C, ctx->r4) = ctx->r3;
L_00239158:
    // 0x00239158: jr          $ra
    // 0x0023915C: nop

    return;
    // 0x0023915C: nop

;}
RECOMP_FUNC void func_00451DBC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00451DBC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00451DC0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00451DC4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x00451DC8: lui         $s0, 0x8012
    ctx->r16 = S32(0X8012 << 16);
    // 0x00451DCC: addiu       $s0, $s0, -0x5528
    ctx->r16 = ADD32(ctx->r16, -0X5528);
    // 0x00451DD0: addu        $a0, $a1, $zero
    ctx->r4 = ADD32(ctx->r5, 0);
    // 0x00451DD4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x00451DD8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x00451DDC: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x00451DE0: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x00451DE4: lbu         $v0, 0x24($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X24);
    // 0x00451DE8: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x00451DEC: jal         0x0041648C
    // 0x00451DF0: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    func_0041648C(rdram, ctx);
        goto after_0;
    // 0x00451DF0: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    after_0:
    // 0x00451DF4: sb          $v0, 0x24($s0)
    MEM_B(0X24, ctx->r16) = ctx->r2;
    // 0x00451DF8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x00451DFC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x00451E00: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x00451E04: jr          $ra
    // 0x00451E08: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00451E08: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_00258D9C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00258D9C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00258DA0: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x00258DA4: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x00258DA8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00258DAC: lwc1        $f0, 0x729C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X729C);
    // 0x00258DB0: lwc1        $f1, 0x24C($v0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r2, 0X24C);
    // 0x00258DB4: mul.s       $f2, $f1, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x00258DB8: lw          $v1, 0x90($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X90);
    // 0x00258DBC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00258DC0: lwc1        $f0, 0x72A0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X72A0);
    // 0x00258DC4: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x00258DC8: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x00258DCC: beq         $v1, $v0, L_00258E0C
    if (ctx->r3 == ctx->r2) {
        // 0x00258DD0: slti        $v0, $v1, 0x8
        ctx->r2 = SIGNED(ctx->r3) < 0X8 ? 1 : 0;
            goto L_00258E0C;
    }
    // 0x00258DD0: slti        $v0, $v1, 0x8
    ctx->r2 = SIGNED(ctx->r3) < 0X8 ? 1 : 0;
    // 0x00258DD4: beq         $v0, $zero, L_00258DEC
    if (ctx->r2 == 0) {
        // 0x00258DD8: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_00258DEC;
    }
    // 0x00258DD8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00258DDC: beq         $v1, $v0, L_00258E00
    if (ctx->r3 == ctx->r2) {
        // 0x00258DE0: nop
    
            goto L_00258E00;
    }
    // 0x00258DE0: nop

    // 0x00258DE4: j           L_00258E2C
    // 0x00258DE8: nop

        goto L_00258E2C;
    // 0x00258DE8: nop

L_00258DEC:
    // 0x00258DEC: slti        $v0, $v1, 0xD
    ctx->r2 = SIGNED(ctx->r3) < 0XD ? 1 : 0;
    // 0x00258DF0: beq         $v0, $zero, L_00258E2C
    if (ctx->r2 == 0) {
        // 0x00258DF4: nop
    
            goto L_00258E2C;
    }
    // 0x00258DF4: nop

    // 0x00258DF8: j           L_00258E20
    // 0x00258DFC: neg.s       $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = -ctx->f1.fl;
        goto L_00258E20;
    // 0x00258DFC: neg.s       $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = -ctx->f1.fl;
L_00258E00:
    // 0x00258E00: mfc1        $a1, $f2
    ctx->r5 = (int32_t)ctx->f2.u32l;
    // 0x00258E04: j           L_00258E24
    // 0x00258E08: nop

        goto L_00258E24;
    // 0x00258E08: nop

L_00258E0C:
    // 0x00258E0C: mfc1        $a1, $f1
    ctx->r5 = (int32_t)ctx->f_odd[(1 - 1) * 2];
    // 0x00258E10: jal         0x00210968
    // 0x00258E14: nop

    func_00210968(rdram, ctx);
        goto after_0;
    // 0x00258E14: nop

    after_0:
    // 0x00258E18: j           L_00258E2C
    // 0x00258E1C: nop

        goto L_00258E2C;
    // 0x00258E1C: nop

L_00258E20:
    // 0x00258E20: mfc1        $a1, $f1
    ctx->r5 = (int32_t)ctx->f_odd[(1 - 1) * 2];
L_00258E24:
    // 0x00258E24: jal         0x00210894
    // 0x00258E28: nop

    func_00210894(rdram, ctx);
        goto after_1;
    // 0x00258E28: nop

    after_1:
L_00258E2C:
    // 0x00258E2C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x00258E30: jr          $ra
    // 0x00258E34: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00258E34: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_004180DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004180DC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x004180E0: addu        $a0, $a2, $zero
    ctx->r4 = ADD32(ctx->r6, 0);
    // 0x004180E4: lui         $a2, 0x44
    ctx->r6 = S32(0X44 << 16);
    // 0x004180E8: addiu       $a2, $a2, -0x4C9C
    ctx->r6 = ADD32(ctx->r6, -0X4C9C);
    // 0x004180EC: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x004180F0: jal         0x00416894
    // 0x004180F4: nop

    func_00416894(rdram, ctx);
        goto after_0;
    // 0x004180F4: nop

    after_0:
    // 0x004180F8: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x004180FC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00418100: jr          $ra
    // 0x00418104: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00418104: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00223F70(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00223F70: lw          $v1, 0x80($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X80);
    // 0x00223F74: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x00223F78: mult        $a1, $v0
    result = S64(S32(ctx->r5)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x00223F7C: mflo        $a2
    ctx->r6 = lo;
    // 0x00223F80: addiu       $v0, $a2, 0x8
    ctx->r2 = ADD32(ctx->r6, 0X8);
    // 0x00223F84: jr          $ra
    // 0x00223F88: addu        $v0, $v1, $v0
    ctx->r2 = ADD32(ctx->r3, ctx->r2);
    return;
    // 0x00223F88: addu        $v0, $v1, $v0
    ctx->r2 = ADD32(ctx->r3, ctx->r2);
;}
RECOMP_FUNC void func_004070B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004070B4: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x004070B8: addiu       $a1, $a1, -0x5F0
    ctx->r5 = ADD32(ctx->r5, -0X5F0);
    // 0x004070BC: addiu       $v1, $zero, -0x1
    ctx->r3 = ADD32(0, -0X1);
    // 0x004070C0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x004070C4: sw          $v1, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r3;
    // 0x004070C8: sb          $v0, 0x8($a1)
    MEM_B(0X8, ctx->r5) = ctx->r2;
    // 0x004070CC: bne         $a0, $zero, L_004070D8
    if (ctx->r4 != 0) {
        // 0x004070D0: sw          $v1, 0x4($a1)
        MEM_W(0X4, ctx->r5) = ctx->r3;
            goto L_004070D8;
    }
    // 0x004070D0: sw          $v1, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r3;
    // 0x004070D4: sw          $zero, -0x4($a1)
    MEM_W(-0X4, ctx->r5) = 0;
L_004070D8:
    // 0x004070D8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x004070DC: bne         $a0, $v0, L_004070F4
    if (ctx->r4 != ctx->r2) {
        // 0x004070E0: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_004070F4;
    }
    // 0x004070E0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x004070E4: lui         $v0, 0x43
    ctx->r2 = S32(0X43 << 16);
    // 0x004070E8: addiu       $v0, $v0, 0x13B4
    ctx->r2 = ADD32(ctx->r2, 0X13B4);
    // 0x004070EC: sw          $v0, -0x4($a1)
    MEM_W(-0X4, ctx->r5) = ctx->r2;
    // 0x004070F0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_004070F4:
    // 0x004070F4: bne         $a0, $v0, L_0040710C
    if (ctx->r4 != ctx->r2) {
        // 0x004070F8: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_0040710C;
    }
    // 0x004070F8: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x004070FC: lui         $v0, 0x43
    ctx->r2 = S32(0X43 << 16);
    // 0x00407100: addiu       $v0, $v0, 0x1424
    ctx->r2 = ADD32(ctx->r2, 0X1424);
    // 0x00407104: sw          $v0, -0x4($a1)
    MEM_W(-0X4, ctx->r5) = ctx->r2;
    // 0x00407108: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
L_0040710C:
    // 0x0040710C: bne         $a0, $v0, L_00407124
    if (ctx->r4 != ctx->r2) {
        // 0x00407110: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_00407124;
    }
    // 0x00407110: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x00407114: lui         $v0, 0x43
    ctx->r2 = S32(0X43 << 16);
    // 0x00407118: addiu       $v0, $v0, 0x14CC
    ctx->r2 = ADD32(ctx->r2, 0X14CC);
    // 0x0040711C: sw          $v0, -0x4($a1)
    MEM_W(-0X4, ctx->r5) = ctx->r2;
    // 0x00407120: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
L_00407124:
    // 0x00407124: bne         $a0, $v0, L_0040713C
    if (ctx->r4 != ctx->r2) {
        // 0x00407128: addiu       $v0, $zero, 0x5
        ctx->r2 = ADD32(0, 0X5);
            goto L_0040713C;
    }
    // 0x00407128: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x0040712C: lui         $v0, 0x43
    ctx->r2 = S32(0X43 << 16);
    // 0x00407130: addiu       $v0, $v0, 0x1558
    ctx->r2 = ADD32(ctx->r2, 0X1558);
    // 0x00407134: sw          $v0, -0x4($a1)
    MEM_W(-0X4, ctx->r5) = ctx->r2;
    // 0x00407138: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
L_0040713C:
    // 0x0040713C: bne         $a0, $v0, L_00407150
    if (ctx->r4 != ctx->r2) {
        // 0x00407140: nop
    
            goto L_00407150;
    }
    // 0x00407140: nop

    // 0x00407144: lui         $v0, 0x43
    ctx->r2 = S32(0X43 << 16);
    // 0x00407148: addiu       $v0, $v0, 0x1590
    ctx->r2 = ADD32(ctx->r2, 0X1590);
    // 0x0040714C: sw          $v0, -0x4($a1)
    MEM_W(-0X4, ctx->r5) = ctx->r2;
L_00407150:
    // 0x00407150: jr          $ra
    // 0x00407154: nop

    return;
    // 0x00407154: nop

;}
RECOMP_FUNC void func_0045060C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_004176EC:
    // 0x0045060C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
L_00417760:
    // 0x00450610: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x00450614: addiu       $v1, $v1, -0x5528
    ctx->r3 = ADD32(ctx->r3, -0X5528);
    // 0x00450618: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x0045061C: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x00450620: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00450624: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00450628: lb          $v0, 0x20($v1)
    ctx->r2 = MEM_B(ctx->r3, 0X20);
    // 0x0045062C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00450630: lwc1        $f1, 0xEA0($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0XEA0);
    // 0x00450634: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x00450638: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x0045063C: sw          $zero, -0x531C($at)
    MEM_W(-0X531C, ctx->r1) = 0;
    // 0x00450640: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x00450644: sw          $zero, -0x532C($at)
    MEM_W(-0X532C, ctx->r1) = 0;
    // 0x00450648: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x0045064C: sw          $zero, -0x5334($at)
    MEM_W(-0X5334, ctx->r1) = 0;
    // 0x00450650: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x00450654: sw          $zero, -0x5324($at)
    MEM_W(-0X5324, ctx->r1) = 0;
    // 0x00450658: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x0045065C: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00450660: lb          $v0, 0x21($v1)
    ctx->r2 = MEM_B(ctx->r3, 0X21);
    // 0x00450664: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00450668: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x0045066C: sw          $zero, -0x5320($at)
    MEM_W(-0X5320, ctx->r1) = 0;
    // 0x00450670: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x00450674: sw          $zero, -0x5328($at)
    MEM_W(-0X5328, ctx->r1) = 0;
    // 0x00450678: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x0045067C: sw          $zero, -0x5330($at)
    MEM_W(-0X5330, ctx->r1) = 0;
    // 0x00450680: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x00450684: sw          $v0, -0x5338($at)
    MEM_W(-0X5338, ctx->r1) = ctx->r2;
    // 0x00450688: c.eq.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl == ctx->f2.fl;
    // 0x0045068C: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x00450690: swc1        $f0, -0x533C($at)
    MEM_W(-0X533C, ctx->r1) = ctx->f0.u32l;
    // 0x00450694: lb          $s2, 0x22($v1)
    ctx->r18 = MEM_B(ctx->r3, 0X22);
    // 0x00450698: bc1f        L_004506AC
    if (!c1cs) {
        // 0x0045069C: addiu       $s0, $zero, 0x3
        ctx->r16 = ADD32(0, 0X3);
            goto L_004506AC;
    }
    // 0x0045069C: addiu       $s0, $zero, 0x3
    ctx->r16 = ADD32(0, 0X3);
    // 0x004506A0: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x004506A4: lwc1        $f0, 0xEA4($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0XEA4);
    // 0x004506A8: swc1        $f0, 0x1EC($v1)
    MEM_W(0X1EC, ctx->r3) = ctx->f0.u32l;
L_004506AC:
    // 0x004506AC: addiu       $v0, $v1, 0xC0
    ctx->r2 = ADD32(ctx->r3, 0XC0);
L_004506B0:
    // 0x004506B0: sb          $zero, 0xB0($v0)
    MEM_B(0XB0, ctx->r2) = 0;
    // 0x004506B4: addiu       $s0, $s0, -0x1
    ctx->r16 = ADD32(ctx->r16, -0X1);
    // 0x004506B8: bgez        $s0, L_004506B0
    if (SIGNED(ctx->r16) >= 0) {
        // 0x004506BC: addiu       $v0, $v0, -0x40
        ctx->r2 = ADD32(ctx->r2, -0X40);
            goto L_004506B0;
    }
    // 0x004506BC: addiu       $v0, $v0, -0x40
    ctx->r2 = ADD32(ctx->r2, -0X40);
    // 0x004506C0: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x004506C4: lui         $s1, 0x800F
    ctx->r17 = S32(0X800F << 16);
    // 0x004506C8: addiu       $s1, $s1, 0x5EC0
    ctx->r17 = ADD32(ctx->r17, 0X5EC0);
L_004506CC:
    // 0x004506CC: jal         0x002855E8
    // 0x004506D0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_002855E8(rdram, ctx);
        goto after_0;
    // 0x004506D0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_0:
    // 0x004506D4: bne         $v0, $zero, L_00450708
    if (ctx->r2 != 0) {
        // 0x004506D8: sll         $v0, $s0, 6
        ctx->r2 = S32(ctx->r16 << 6);
            goto L_00450708;
    }
    // 0x004506D8: sll         $v0, $s0, 6
    ctx->r2 = S32(ctx->r16 << 6);
    // 0x004506DC: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x004506E0: slti        $v0, $s0, 0x4
    ctx->r2 = SIGNED(ctx->r16) < 0X4 ? 1 : 0;
    // 0x004506E4: bne         $v0, $zero, L_004506CC
    if (ctx->r2 != 0) {
        // 0x004506E8: addiu       $s1, $s1, 0x224
        ctx->r17 = ADD32(ctx->r17, 0X224);
            goto L_004506CC;
    }
    // 0x004506E8: addiu       $s1, $s1, 0x224
    ctx->r17 = ADD32(ctx->r17, 0X224);
    // 0x004506EC: beq         $s2, $zero, L_00450724
    if (ctx->r18 == 0) {
        // 0x004506F0: addiu       $v0, $s2, -0x1
        ctx->r2 = ADD32(ctx->r18, -0X1);
            goto L_00450724;
    }
    // 0x004506F0: addiu       $v0, $s2, -0x1
    ctx->r2 = ADD32(ctx->r18, -0X1);
    // 0x004506F4: sltiu       $v0, $v0, 0xD
    ctx->r2 = ctx->r2 < 0XD ? 1 : 0;
    // 0x004506F8: beq         $v0, $zero, L_00450724
    if (ctx->r2 == 0) {
        // 0x004506FC: addiu       $a1, $s2, 0x2328
        ctx->r5 = ADD32(ctx->r18, 0X2328);
            goto L_00450724;
    }
    // 0x004506FC: addiu       $a1, $s2, 0x2328
    ctx->r5 = ADD32(ctx->r18, 0X2328);
    // 0x00450700: j           L_00417760
    // 0x00450704: nop

    entry_00417760(rdram, ctx);
    return;
    // 0x00450704: nop

L_00450708:
    // 0x00450708: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x0045070C: addiu       $v1, $v1, -0x54A8
    ctx->r3 = ADD32(ctx->r3, -0X54A8);
    // 0x00450710: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x00450714: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x00450718: sb          $v1, 0x28($v0)
    MEM_B(0X28, ctx->r2) = ctx->r3;
    // 0x0045071C: j           L_004176EC
    // 0x00450720: sb          $s0, 0x2F($v0)
    MEM_B(0X2F, ctx->r2) = ctx->r16;
    entry_004176EC(rdram, ctx);
    return;
    // 0x00450720: sb          $s0, 0x2F($v0)
    MEM_B(0X2F, ctx->r2) = ctx->r16;
L_00450724:
    // 0x00450724: jal         0x002113A4
    // 0x00450728: nop

    func_002113A4(rdram, ctx);
        goto after_1;
    // 0x00450728: nop

    after_1:
    // 0x0045072C: lui         $v1, 0x4EC4
    ctx->r3 = S32(0X4EC4 << 16);
    // 0x00450730: ori         $v1, $v1, 0xEC4F
    ctx->r3 = ctx->r3 | 0XEC4F;
    // 0x00450734: mult        $v0, $v1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x00450738: sra         $v1, $v0, 31
    ctx->r3 = S32(SIGNED(ctx->r2) >> 31);
    // 0x0045073C: mfhi        $a2
    ctx->r6 = hi;
    // 0x00450740: sra         $a0, $a2, 2
    ctx->r4 = S32(SIGNED(ctx->r6) >> 2);
    // 0x00450744: subu        $a0, $a0, $v1
    ctx->r4 = SUB32(ctx->r4, ctx->r3);
    // 0x00450748: sll         $v1, $a0, 1
    ctx->r3 = S32(ctx->r4 << 1);
    // 0x0045074C: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x00450750: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x00450754: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x00450758: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x0045075C: addiu       $a1, $v0, 0x2329
    ctx->r5 = ADD32(ctx->r2, 0X2329);
    // 0x00450760: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x00450764: addiu       $a0, $a0, 0x6CB0
    ctx->r4 = ADD32(ctx->r4, 0X6CB0);
    // 0x00450768: jal         0x00430374
    // 0x0045076C: nop

    func_00430374(rdram, ctx);
        goto after_2;
    // 0x0045076C: nop

    after_2:
    // 0x00450770: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x00450774: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x00450778: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x0045077C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00450780: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00450784: jr          $ra
    // 0x00450788: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00450788: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_00241E30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00241E30: addiu       $sp, $sp, -0xF8
    ctx->r29 = ADD32(ctx->r29, -0XF8);
    // 0x00241E34: sw          $s5, 0xE4($sp)
    MEM_W(0XE4, ctx->r29) = ctx->r21;
    // 0x00241E38: addu        $s5, $a0, $zero
    ctx->r21 = ADD32(ctx->r4, 0);
    // 0x00241E3C: sw          $ra, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->r31;
    // 0x00241E40: sw          $s4, 0xE0($sp)
    MEM_W(0XE0, ctx->r29) = ctx->r20;
    // 0x00241E44: sw          $s3, 0xDC($sp)
    MEM_W(0XDC, ctx->r29) = ctx->r19;
    // 0x00241E48: sw          $s2, 0xD8($sp)
    MEM_W(0XD8, ctx->r29) = ctx->r18;
    // 0x00241E4C: sw          $s1, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->r17;
    // 0x00241E50: sw          $s0, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = ctx->r16;
    // 0x00241E54: sdc1        $f20, 0xF0($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0XF0, ctx->r29);
    // 0x00241E58: lw          $s0, 0x0($s5)
    ctx->r16 = MEM_W(ctx->r21, 0X0);
    // 0x00241E5C: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    // 0x00241E60: beq         $a0, $zero, L_00241E7C
    if (ctx->r4 == 0) {
        // 0x00241E64: addu        $s4, $a1, $zero
        ctx->r20 = ADD32(ctx->r5, 0);
            goto L_00241E7C;
    }
    // 0x00241E64: addu        $s4, $a1, $zero
    ctx->r20 = ADD32(ctx->r5, 0);
    // 0x00241E68: lw          $v0, 0x10($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X10);
    // 0x00241E6C: lhu         $v1, 0x0($v0)
    ctx->r3 = MEM_HU(ctx->r2, 0X0);
    // 0x00241E70: lhu         $v0, 0x0($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X0);
    // 0x00241E74: bne         $v1, $v0, L_00241FA0
    if (ctx->r3 != ctx->r2) {
        // 0x00241E78: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_00241FA0;
    }
    // 0x00241E78: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_00241E7C:
    // 0x00241E7C: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    // 0x00241E80: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x00241E84: jal         0x00241960
    // 0x00241E88: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    entry_00241960(rdram, ctx);
        goto after_0;
    // 0x00241E88: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    after_0:
    // 0x00241E8C: addiu       $a0, $sp, 0x80
    ctx->r4 = ADD32(ctx->r29, 0X80);
    // 0x00241E90: jal         0x0023C9CC
    // 0x00241E94: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    func_0023C9CC(rdram, ctx);
        goto after_1;
    // 0x00241E94: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    after_1:
    // 0x00241E98: lw          $v0, 0x30($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X30);
    // 0x00241E9C: beql        $v0, $zero, L_00241EC0
    if (ctx->r2 == 0) {
        // 0x00241EA0: sw          $s4, 0x30($s0)
        MEM_W(0X30, ctx->r16) = ctx->r20;
            goto L_00241EC0;
    }
    goto skip_0;
    // 0x00241EA0: sw          $s4, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->r20;
    skip_0:
    // 0x00241EA4: lwc1        $f1, 0x8($s4)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r20, 0X8);
    // 0x00241EA8: lwc1        $f0, 0x8($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X8);
    // 0x00241EAC: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x00241EB0: nop

    // 0x00241EB4: bc1f        L_00241EC4
    if (!c1cs) {
        // 0x00241EB8: addiu       $s3, $sp, 0x80
        ctx->r19 = ADD32(ctx->r29, 0X80);
            goto L_00241EC4;
    }
    // 0x00241EB8: addiu       $s3, $sp, 0x80
    ctx->r19 = ADD32(ctx->r29, 0X80);
    // 0x00241EBC: sw          $s4, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->r20;
L_00241EC0:
    // 0x00241EC0: addiu       $s3, $sp, 0x80
    ctx->r19 = ADD32(ctx->r29, 0X80);
L_00241EC4:
    // 0x00241EC4: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x00241EC8: addiu       $s2, $s0, 0x4
    ctx->r18 = ADD32(ctx->r16, 0X4);
    // 0x00241ECC: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x00241ED0: addiu       $s1, $s5, 0x4C
    ctx->r17 = ADD32(ctx->r21, 0X4C);
    // 0x00241ED4: jal         0x0023C2B0
    // 0x00241ED8: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    func_0023C2B0(rdram, ctx);
        goto after_2;
    // 0x00241ED8: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    after_2:
    // 0x00241EDC: beq         $v0, $zero, L_00241F9C
    if (ctx->r2 == 0) {
        // 0x00241EE0: addu        $a0, $s3, $zero
        ctx->r4 = ADD32(ctx->r19, 0);
            goto L_00241F9C;
    }
    // 0x00241EE0: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x00241EE4: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x00241EE8: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    // 0x00241EEC: jal         0x0023C478
    // 0x00241EF0: addiu       $a3, $sp, 0xC0
    ctx->r7 = ADD32(ctx->r29, 0XC0);
    func_0023C478(rdram, ctx);
        goto after_3;
    // 0x00241EF0: addiu       $a3, $sp, 0xC0
    ctx->r7 = ADD32(ctx->r29, 0XC0);
    after_3:
    // 0x00241EF4: beq         $v0, $zero, L_00241FA0
    if (ctx->r2 == 0) {
        // 0x00241EF8: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_00241FA0;
    }
    // 0x00241EF8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x00241EFC: lwc1        $f12, 0x25C($s4)
    ctx->f12.u32l = MEM_W(ctx->r20, 0X25C);
    // 0x00241F00: jal         0x002982F0
    // 0x00241F04: nop

    func_002982F0(rdram, ctx);
        goto after_4;
    // 0x00241F04: nop

    after_4:
    // 0x00241F08: lwc1        $f12, 0x25C($s4)
    ctx->f12.u32l = MEM_W(ctx->r20, 0X25C);
    // 0x00241F0C: jal         0x002974C0
    // 0x00241F10: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    func_002974C0(rdram, ctx);
        goto after_5;
    // 0x00241F10: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    after_5:
    // 0x00241F14: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    // 0x00241F18: addiu       $a1, $sp, 0xB0
    ctx->r5 = ADD32(ctx->r29, 0XB0);
    // 0x00241F1C: addu        $a2, $s3, $zero
    ctx->r6 = ADD32(ctx->r19, 0);
    // 0x00241F20: mul.s       $f20, $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = MUL_S(ctx->f20.fl, ctx->f0.fl);
    // 0x00241F24: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x00241F28: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x00241F2C: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x00241F30: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x00241F34: jal         0x0023AB18
    // 0x00241F38: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    func_0023AB18(rdram, ctx);
        goto after_6;
    // 0x00241F38: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    after_6:
    // 0x00241F3C: beq         $v0, $zero, L_00241F9C
    if (ctx->r2 == 0) {
        // 0x00241F40: lui         $v0, 0x1
        ctx->r2 = S32(0X1 << 16);
            goto L_00241F9C;
    }
    // 0x00241F40: lui         $v0, 0x1
    ctx->r2 = S32(0X1 << 16);
    // 0x00241F44: lw          $v1, 0x140($s4)
    ctx->r3 = MEM_W(ctx->r20, 0X140);
    // 0x00241F48: or          $a0, $v1, $v0
    ctx->r4 = ctx->r3 | ctx->r2;
    // 0x00241F4C: sw          $a0, 0x140($s4)
    MEM_W(0X140, ctx->r20) = ctx->r4;
    // 0x00241F50: lbu         $v1, 0x0($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X0);
    // 0x00241F54: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00241F58: bne         $v1, $v0, L_00241F78
    if (ctx->r3 != ctx->r2) {
        // 0x00241F5C: lui         $v1, 0x30
        ctx->r3 = S32(0X30 << 16);
            goto L_00241F78;
    }
    // 0x00241F5C: lui         $v1, 0x30
    ctx->r3 = S32(0X30 << 16);
    // 0x00241F60: lw          $v0, 0xD4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XD4);
    // 0x00241F64: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x00241F68: beq         $v0, $zero, L_00241F78
    if (ctx->r2 == 0) {
        // 0x00241F6C: lui         $v0, 0x2
        ctx->r2 = S32(0X2 << 16);
            goto L_00241F78;
    }
    // 0x00241F6C: lui         $v0, 0x2
    ctx->r2 = S32(0X2 << 16);
    // 0x00241F70: or          $v0, $a0, $v0
    ctx->r2 = ctx->r4 | ctx->r2;
    // 0x00241F74: sw          $v0, 0x140($s4)
    MEM_W(0X140, ctx->r20) = ctx->r2;
L_00241F78:
    // 0x00241F78: lwc1        $f0, 0x1C($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x00241F7C: mtc1        $zero, $f1
    ctx->f_odd[(1 - 1) * 2] = 0;
    // 0x00241F80: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x00241F84: nop

    // 0x00241F88: bc1f        L_00241F94
    if (!c1cs) {
        // 0x00241F8C: sw          $s4, 0x30($s0)
        MEM_W(0X30, ctx->r16) = ctx->r20;
            goto L_00241F94;
    }
    // 0x00241F8C: sw          $s4, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->r20;
    // 0x00241F90: swc1        $f1, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f_odd[(1 - 1) * 2];
L_00241F94:
    // 0x00241F94: j           L_00241FA0
    // 0x00241F98: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_00241FA0;
    // 0x00241F98: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_00241F9C:
    // 0x00241F9C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_00241FA0:
    // 0x00241FA0: lw          $ra, 0xE8($sp)
    ctx->r31 = MEM_W(ctx->r29, 0XE8);
    // 0x00241FA4: lw          $s5, 0xE4($sp)
    ctx->r21 = MEM_W(ctx->r29, 0XE4);
    // 0x00241FA8: lw          $s4, 0xE0($sp)
    ctx->r20 = MEM_W(ctx->r29, 0XE0);
    // 0x00241FAC: lw          $s3, 0xDC($sp)
    ctx->r19 = MEM_W(ctx->r29, 0XDC);
    // 0x00241FB0: lw          $s2, 0xD8($sp)
    ctx->r18 = MEM_W(ctx->r29, 0XD8);
    // 0x00241FB4: lw          $s1, 0xD4($sp)
    ctx->r17 = MEM_W(ctx->r29, 0XD4);
    // 0x00241FB8: lw          $s0, 0xD0($sp)
    ctx->r16 = MEM_W(ctx->r29, 0XD0);
    // 0x00241FBC: ldc1        $f20, 0xF0($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0XF0);
    // 0x00241FC0: jr          $ra
    // 0x00241FC4: addiu       $sp, $sp, 0xF8
    ctx->r29 = ADD32(ctx->r29, 0XF8);
    return;
    // 0x00241FC4: addiu       $sp, $sp, 0xF8
    ctx->r29 = ADD32(ctx->r29, 0XF8);
;}
RECOMP_FUNC void func_002715B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002715B0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x002715B4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x002715B8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x002715BC: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x002715C0: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x002715C4: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x002715C8: jal         0x0027421C
    // 0x002715CC: addiu       $a0, $s0, 0x1DB8
    ctx->r4 = ADD32(ctx->r16, 0X1DB8);
    func_0027421C(rdram, ctx);
        goto after_0;
    // 0x002715CC: addiu       $a0, $s0, 0x1DB8
    ctx->r4 = ADD32(ctx->r16, 0X1DB8);
    after_0:
    // 0x002715D0: addiu       $a0, $s0, 0x138
    ctx->r4 = ADD32(ctx->r16, 0X138);
    // 0x002715D4: jal         0x0027672C
    // 0x002715D8: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_0027672C(rdram, ctx);
        goto after_1;
    // 0x002715D8: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_1:
    // 0x002715DC: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x002715E0: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x002715E4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x002715E8: jr          $ra
    // 0x002715EC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x002715EC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_00249A58(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00249A58: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00249A5C: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x00249A60: lh          $a3, 0x996($a0)
    ctx->r7 = MEM_H(ctx->r4, 0X996);
    // 0x00249A64: addiu       $v0, $zero, 0xD
    ctx->r2 = ADD32(0, 0XD);
    // 0x00249A68: beq         $a3, $v0, L_00249A7C
    if (ctx->r7 == ctx->r2) {
        // 0x00249A6C: addu        $a2, $a1, $zero
        ctx->r6 = ADD32(ctx->r5, 0);
            goto L_00249A7C;
    }
    // 0x00249A6C: addu        $a2, $a1, $zero
    ctx->r6 = ADD32(ctx->r5, 0);
    // 0x00249A70: addiu       $v0, $zero, 0x1D
    ctx->r2 = ADD32(0, 0X1D);
    // 0x00249A74: bne         $a3, $v0, L_00249B40
    if (ctx->r7 != ctx->r2) {
        // 0x00249A78: nop
    
            goto L_00249B40;
    }
    // 0x00249A78: nop

L_00249A7C:
    // 0x00249A7C: lw          $v0, 0xD4($a2)
    ctx->r2 = MEM_W(ctx->r6, 0XD4);
    // 0x00249A80: lui         $v1, 0x30
    ctx->r3 = S32(0X30 << 16);
    // 0x00249A84: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x00249A88: beq         $v0, $zero, L_00249AE8
    if (ctx->r2 == 0) {
        // 0x00249A8C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_00249AE8;
    }
    // 0x00249A8C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00249A90: lw          $v0, 0x14($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X14);
    // 0x00249A94: lw          $v0, 0x14($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X14);
    // 0x00249A98: andi        $v0, $v0, 0x20
    ctx->r2 = ctx->r2 & 0X20;
    // 0x00249A9C: beq         $v0, $zero, L_00249C10
    if (ctx->r2 == 0) {
        // 0x00249AA0: addiu       $v0, $zero, 0x23
        ctx->r2 = ADD32(0, 0X23);
            goto L_00249C10;
    }
    // 0x00249AA0: addiu       $v0, $zero, 0x23
    ctx->r2 = ADD32(0, 0X23);
    // 0x00249AA4: lb          $v1, 0x174($a2)
    ctx->r3 = MEM_B(ctx->r6, 0X174);
    // 0x00249AA8: beq         $v1, $v0, L_00249C10
    if (ctx->r3 == ctx->r2) {
        // 0x00249AAC: addiu       $v0, $zero, 0xF
        ctx->r2 = ADD32(0, 0XF);
            goto L_00249C10;
    }
    // 0x00249AAC: addiu       $v0, $zero, 0xF
    ctx->r2 = ADD32(0, 0XF);
    // 0x00249AB0: beq         $v1, $v0, L_00249C14
    if (ctx->r3 == ctx->r2) {
        // 0x00249AB4: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_00249C14;
    }
    // 0x00249AB4: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x00249AB8: lw          $v0, 0x144($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X144);
    // 0x00249ABC: beq         $v0, $zero, L_00249C14
    if (ctx->r2 == 0) {
        // 0x00249AC0: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_00249C14;
    }
    // 0x00249AC0: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x00249AC4: lw          $v1, 0x51C($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X51C);
    // 0x00249AC8: beq         $v1, $zero, L_00249AD8
    if (ctx->r3 == 0) {
        // 0x00249ACC: nop
    
            goto L_00249AD8;
    }
    // 0x00249ACC: nop

    // 0x00249AD0: lw          $v0, 0x54C($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X54C);
    // 0x00249AD4: sltu        $v0, $zero, $v0
    ctx->r2 = 0 < ctx->r2 ? 1 : 0;
L_00249AD8:
    // 0x00249AD8: beq         $v0, $zero, L_00249BB4
    if (ctx->r2 == 0) {
        // 0x00249ADC: nop
    
            goto L_00249BB4;
    }
    // 0x00249ADC: nop

    // 0x00249AE0: j           L_00249C14
    // 0x00249AE4: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
        goto L_00249C14;
    // 0x00249AE4: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_00249AE8:
    // 0x00249AE8: lw          $a1, 0x14($a2)
    ctx->r5 = MEM_W(ctx->r6, 0X14);
    // 0x00249AEC: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x00249AF0: bne         $v1, $v0, L_00249B40
    if (ctx->r3 != ctx->r2) {
        // 0x00249AF4: nop
    
            goto L_00249B40;
    }
    // 0x00249AF4: nop

    // 0x00249AF8: lw          $v0, 0x14($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X14);
    // 0x00249AFC: andi        $v0, $v0, 0x2400
    ctx->r2 = ctx->r2 & 0X2400;
    // 0x00249B00: beq         $v0, $zero, L_00249C10
    if (ctx->r2 == 0) {
        // 0x00249B04: addiu       $v0, $zero, 0x21
        ctx->r2 = ADD32(0, 0X21);
            goto L_00249C10;
    }
    // 0x00249B04: addiu       $v0, $zero, 0x21
    ctx->r2 = ADD32(0, 0X21);
    // 0x00249B08: lb          $v1, 0x174($a2)
    ctx->r3 = MEM_B(ctx->r6, 0X174);
    // 0x00249B0C: beq         $v1, $v0, L_00249C10
    if (ctx->r3 == ctx->r2) {
        // 0x00249B10: addiu       $v0, $zero, 0x34
        ctx->r2 = ADD32(0, 0X34);
            goto L_00249C10;
    }
    // 0x00249B10: addiu       $v0, $zero, 0x34
    ctx->r2 = ADD32(0, 0X34);
    // 0x00249B14: beq         $v1, $v0, L_00249C10
    if (ctx->r3 == ctx->r2) {
        // 0x00249B18: addiu       $v0, $zero, 0x3C
        ctx->r2 = ADD32(0, 0X3C);
            goto L_00249C10;
    }
    // 0x00249B18: addiu       $v0, $zero, 0x3C
    ctx->r2 = ADD32(0, 0X3C);
    // 0x00249B1C: beq         $v1, $v0, L_00249C10
    if (ctx->r3 == ctx->r2) {
        // 0x00249B20: addiu       $v0, $zero, 0x3D
        ctx->r2 = ADD32(0, 0X3D);
            goto L_00249C10;
    }
    // 0x00249B20: addiu       $v0, $zero, 0x3D
    ctx->r2 = ADD32(0, 0X3D);
    // 0x00249B24: beq         $v1, $v0, L_00249C14
    if (ctx->r3 == ctx->r2) {
        // 0x00249B28: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_00249C14;
    }
    // 0x00249B28: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x00249B2C: lw          $v0, 0x144($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X144);
    // 0x00249B30: bne         $v0, $zero, L_00249BB4
    if (ctx->r2 != 0) {
        // 0x00249B34: nop
    
            goto L_00249BB4;
    }
    // 0x00249B34: nop

    // 0x00249B38: j           L_00249C14
    // 0x00249B3C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
        goto L_00249C14;
    // 0x00249B3C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_00249B40:
    // 0x00249B40: lw          $v0, 0x14($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X14);
    // 0x00249B44: lw          $v1, 0x0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X0);
    // 0x00249B48: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x00249B4C: beq         $v1, $v0, L_00249BA8
    if (ctx->r3 == ctx->r2) {
        // 0x00249B50: slti        $v0, $v1, 0x5
        ctx->r2 = SIGNED(ctx->r3) < 0X5 ? 1 : 0;
            goto L_00249BA8;
    }
    // 0x00249B50: slti        $v0, $v1, 0x5
    ctx->r2 = SIGNED(ctx->r3) < 0X5 ? 1 : 0;
    // 0x00249B54: beq         $v0, $zero, L_00249B6C
    if (ctx->r2 == 0) {
        // 0x00249B58: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_00249B6C;
    }
    // 0x00249B58: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00249B5C: beq         $v1, $v0, L_00249B88
    if (ctx->r3 == ctx->r2) {
        // 0x00249B60: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_00249B88;
    }
    // 0x00249B60: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x00249B64: j           L_00249C14
    // 0x00249B68: nop

        goto L_00249C14;
    // 0x00249B68: nop

L_00249B6C:
    // 0x00249B6C: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x00249B70: beq         $v1, $v0, L_00249C10
    if (ctx->r3 == ctx->r2) {
        // 0x00249B74: addiu       $v0, $zero, 0xB
        ctx->r2 = ADD32(0, 0XB);
            goto L_00249C10;
    }
    // 0x00249B74: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
    // 0x00249B78: beq         $v1, $v0, L_00249BC4
    if (ctx->r3 == ctx->r2) {
        // 0x00249B7C: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_00249BC4;
    }
    // 0x00249B7C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x00249B80: j           L_00249C14
    // 0x00249B84: nop

        goto L_00249C14;
    // 0x00249B84: nop

L_00249B88:
    // 0x00249B88: lb          $v1, 0x174($a2)
    ctx->r3 = MEM_B(ctx->r6, 0X174);
    // 0x00249B8C: addiu       $v0, $zero, 0x3C
    ctx->r2 = ADD32(0, 0X3C);
    // 0x00249B90: beq         $v1, $v0, L_00249C10
    if (ctx->r3 == ctx->r2) {
        // 0x00249B94: addiu       $v0, $zero, 0x10
        ctx->r2 = ADD32(0, 0X10);
            goto L_00249C10;
    }
    // 0x00249B94: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x00249B98: beq         $a3, $v0, L_00249BB4
    if (ctx->r7 == ctx->r2) {
        // 0x00249B9C: nop
    
            goto L_00249BB4;
    }
    // 0x00249B9C: nop

    // 0x00249BA0: j           L_00249C14
    // 0x00249BA4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_00249C14;
    // 0x00249BA4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_00249BA8:
    // 0x00249BA8: lw          $v0, 0x144($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X144);
    // 0x00249BAC: beql        $v0, $zero, L_00249C14
    if (ctx->r2 == 0) {
        // 0x00249BB0: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_00249C14;
    }
    goto skip_0;
    // 0x00249BB0: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    skip_0:
L_00249BB4:
    // 0x00249BB4: jal         0x00245FC8
    // 0x00249BB8: addiu       $a1, $a0, 0x140
    ctx->r5 = ADD32(ctx->r4, 0X140);
    func_00245FC8(rdram, ctx);
        goto after_0;
    // 0x00249BB8: addiu       $a1, $a0, 0x140
    ctx->r5 = ADD32(ctx->r4, 0X140);
    after_0:
    // 0x00249BBC: j           L_00249C14
    // 0x00249BC0: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
        goto L_00249C14;
    // 0x00249BC0: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
L_00249BC4:
    // 0x00249BC4: lb          $v1, 0x174($a2)
    ctx->r3 = MEM_B(ctx->r6, 0X174);
    // 0x00249BC8: addiu       $v0, $zero, 0x23
    ctx->r2 = ADD32(0, 0X23);
    // 0x00249BCC: beq         $v1, $v0, L_00249C08
    if (ctx->r3 == ctx->r2) {
        // 0x00249BD0: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_00249C08;
    }
    // 0x00249BD0: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x00249BD4: addiu       $v0, $zero, 0xF
    ctx->r2 = ADD32(0, 0XF);
    // 0x00249BD8: beq         $v1, $v0, L_00249C14
    if (ctx->r3 == ctx->r2) {
        // 0x00249BDC: addu        $v0, $a0, $zero
        ctx->r2 = ADD32(ctx->r4, 0);
            goto L_00249C14;
    }
    // 0x00249BDC: addu        $v0, $a0, $zero
    ctx->r2 = ADD32(ctx->r4, 0);
    // 0x00249BE0: lw          $v0, 0x144($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X144);
    // 0x00249BE4: beq         $v0, $zero, L_00249C14
    if (ctx->r2 == 0) {
        // 0x00249BE8: addu        $v0, $a0, $zero
        ctx->r2 = ADD32(ctx->r4, 0);
            goto L_00249C14;
    }
    // 0x00249BE8: addu        $v0, $a0, $zero
    ctx->r2 = ADD32(ctx->r4, 0);
    // 0x00249BEC: lw          $a1, 0x51C($a2)
    ctx->r5 = MEM_W(ctx->r6, 0X51C);
    // 0x00249BF0: beq         $a1, $zero, L_00249C00
    if (ctx->r5 == 0) {
        // 0x00249BF4: nop
    
            goto L_00249C00;
    }
    // 0x00249BF4: nop

    // 0x00249BF8: lw          $v0, 0x54C($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X54C);
    // 0x00249BFC: sltu        $v0, $a0, $v0
    ctx->r2 = ctx->r4 < ctx->r2 ? 1 : 0;
L_00249C00:
    // 0x00249C00: beql        $v0, $zero, L_00249C08
    if (ctx->r2 == 0) {
        // 0x00249C04: addiu       $a0, $zero, 0x1
        ctx->r4 = ADD32(0, 0X1);
            goto L_00249C08;
    }
    goto skip_1;
    // 0x00249C04: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    skip_1:
L_00249C08:
    // 0x00249C08: j           L_00249C14
    // 0x00249C0C: addu        $v0, $a0, $zero
    ctx->r2 = ADD32(ctx->r4, 0);
        goto L_00249C14;
    // 0x00249C0C: addu        $v0, $a0, $zero
    ctx->r2 = ADD32(ctx->r4, 0);
L_00249C10:
    // 0x00249C10: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_00249C14:
    // 0x00249C14: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x00249C18: jr          $ra
    // 0x00249C1C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00249C1C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0025F114(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0025F114: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x0025F118: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0025F11C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x0025F120: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x0025F124: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x0025F128: sdc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X20, ctx->r29);
    // 0x0025F12C: lbu         $v0, 0x36($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X36);
    // 0x0025F130: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0025F134: lwc1        $f20, 0x78CC($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X78CC);
    // 0x0025F138: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x0025F13C: sltiu       $v0, $v0, 0x2
    ctx->r2 = ctx->r2 < 0X2 ? 1 : 0;
    // 0x0025F140: beq         $v0, $zero, L_0025F150
    if (ctx->r2 == 0) {
        // 0x0025F144: addu        $s0, $a0, $zero
        ctx->r16 = ADD32(ctx->r4, 0);
            goto L_0025F150;
    }
    // 0x0025F144: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x0025F148: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0025F14C: lwc1        $f20, 0x78D0($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X78D0);
L_0025F150:
    // 0x0025F150: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x0025F154: lw          $a1, 0x6A0($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X6A0);
    // 0x0025F158: lui         $a2, 0x800B
    ctx->r6 = S32(0X800B << 16);
    // 0x0025F15C: lw          $a2, 0x6A4($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X6A4);
    // 0x0025F160: lui         $a3, 0x800B
    ctx->r7 = S32(0X800B << 16);
    // 0x0025F164: lw          $a3, 0x6A8($a3)
    ctx->r7 = MEM_W(ctx->r7, 0X6A8);
    // 0x0025F168: jal         0x00246310
    // 0x0025F16C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00246310(rdram, ctx);
        goto after_0;
    // 0x0025F16C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x0025F170: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0025F174: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x0025F178: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x0025F17C: jal         0x00245BAC
    // 0x0025F180: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_00245BAC(rdram, ctx);
        goto after_1;
    // 0x0025F180: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_1:
    // 0x0025F184: lb          $v0, 0xC7($s1)
    ctx->r2 = MEM_B(ctx->r17, 0XC7);
    // 0x0025F188: slti        $v0, $v0, 0x5
    ctx->r2 = SIGNED(ctx->r2) < 0X5 ? 1 : 0;
    // 0x0025F18C: bne         $v0, $zero, L_0025F19C
    if (ctx->r2 != 0) {
        // 0x0025F190: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_0025F19C;
    }
    // 0x0025F190: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0025F194: jal         0x0025D474
    // 0x0025F198: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_0025D474(rdram, ctx);
        goto after_2;
    // 0x0025F198: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_2:
L_0025F19C:
    // 0x0025F19C: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x0025F1A0: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x0025F1A4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0025F1A8: ldc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X20);
    // 0x0025F1AC: jr          $ra
    // 0x0025F1B0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x0025F1B0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_0040F5B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0040F5B8: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x0040F5BC: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x0040F5C0: addu        $s3, $a0, $zero
    ctx->r19 = ADD32(ctx->r4, 0);
    // 0x0040F5C4: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x0040F5C8: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x0040F5CC: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x0040F5D0: addu        $s2, $a2, $zero
    ctx->r18 = ADD32(ctx->r6, 0);
    // 0x0040F5D4: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x0040F5D8: addu        $s0, $a3, $zero
    ctx->r16 = ADD32(ctx->r7, 0);
    // 0x0040F5DC: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0040F5E0: sll         $a1, $s3, 2
    ctx->r5 = S32(ctx->r19 << 2);
    // 0x0040F5E4: addiu       $a1, $a1, 0x10
    ctx->r5 = ADD32(ctx->r5, 0X10);
    // 0x0040F5E8: lui         $a3, 0x800C
    ctx->r7 = S32(0X800C << 16);
    // 0x0040F5EC: addiu       $a3, $a3, 0x950
    ctx->r7 = ADD32(ctx->r7, 0X950);
    // 0x0040F5F0: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x0040F5F4: sw          $fp, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r30;
    // 0x0040F5F8: sw          $s7, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r23;
    // 0x0040F5FC: sw          $s6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r22;
    // 0x0040F600: sw          $s5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r21;
    // 0x0040F604: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x0040F608: sdc1        $f20, 0x48($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X48, ctx->r29);
    // 0x0040F60C: jal         0x00204EDC
    // 0x0040F610: addiu       $a2, $zero, 0x13
    ctx->r6 = ADD32(0, 0X13);
    func_00204EDC(rdram, ctx);
        goto after_0;
    // 0x0040F610: addiu       $a2, $zero, 0x13
    ctx->r6 = ADD32(0, 0X13);
    after_0:
    // 0x0040F614: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x0040F618: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x0040F61C: beq         $v1, $zero, L_0040F630
    if (ctx->r3 == 0) {
        // 0x0040F620: addu        $s7, $zero, $zero
        ctx->r23 = ADD32(0, 0);
            goto L_0040F630;
    }
    // 0x0040F620: addu        $s7, $zero, $zero
    ctx->r23 = ADD32(0, 0);
    // 0x0040F624: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x0040F628: addiu       $s7, $v0, 0x10
    ctx->r23 = ADD32(ctx->r2, 0X10);
    // 0x0040F62C: sw          $v1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r3;
L_0040F630:
    // 0x0040F630: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0040F634: sll         $a1, $s3, 2
    ctx->r5 = S32(ctx->r19 << 2);
    // 0x0040F638: addiu       $a1, $a1, 0x10
    ctx->r5 = ADD32(ctx->r5, 0X10);
    // 0x0040F63C: lui         $a3, 0x800C
    ctx->r7 = S32(0X800C << 16);
    // 0x0040F640: addiu       $a3, $a3, 0x950
    ctx->r7 = ADD32(ctx->r7, 0X950);
    // 0x0040F644: jal         0x00204EDC
    // 0x0040F648: addiu       $a2, $zero, 0x13
    ctx->r6 = ADD32(0, 0X13);
    func_00204EDC(rdram, ctx);
        goto after_1;
    // 0x0040F648: addiu       $a2, $zero, 0x13
    ctx->r6 = ADD32(0, 0X13);
    after_1:
    // 0x0040F64C: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x0040F650: beq         $v1, $zero, L_0040F664
    if (ctx->r3 == 0) {
        // 0x0040F654: addu        $s6, $zero, $zero
        ctx->r22 = ADD32(0, 0);
            goto L_0040F664;
    }
    // 0x0040F654: addu        $s6, $zero, $zero
    ctx->r22 = ADD32(0, 0);
    // 0x0040F658: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x0040F65C: addiu       $s6, $v0, 0x10
    ctx->r22 = ADD32(ctx->r2, 0X10);
    // 0x0040F660: sw          $v1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r3;
L_0040F664:
    // 0x0040F664: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0040F668: sll         $a1, $s3, 2
    ctx->r5 = S32(ctx->r19 << 2);
    // 0x0040F66C: addiu       $a1, $a1, 0x10
    ctx->r5 = ADD32(ctx->r5, 0X10);
    // 0x0040F670: lui         $a3, 0x800C
    ctx->r7 = S32(0X800C << 16);
    // 0x0040F674: addiu       $a3, $a3, 0x950
    ctx->r7 = ADD32(ctx->r7, 0X950);
    // 0x0040F678: jal         0x00204EDC
    // 0x0040F67C: addiu       $a2, $zero, 0x13
    ctx->r6 = ADD32(0, 0X13);
    func_00204EDC(rdram, ctx);
        goto after_2;
    // 0x0040F67C: addiu       $a2, $zero, 0x13
    ctx->r6 = ADD32(0, 0X13);
    after_2:
    // 0x0040F680: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x0040F684: beq         $v1, $zero, L_0040F698
    if (ctx->r3 == 0) {
        // 0x0040F688: addu        $s5, $zero, $zero
        ctx->r21 = ADD32(0, 0);
            goto L_0040F698;
    }
    // 0x0040F688: addu        $s5, $zero, $zero
    ctx->r21 = ADD32(0, 0);
    // 0x0040F68C: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x0040F690: addiu       $s5, $v0, 0x10
    ctx->r21 = ADD32(ctx->r2, 0X10);
    // 0x0040F694: sw          $v1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r3;
L_0040F698:
    // 0x0040F698: addiu       $v0, $zero, 0x24
    ctx->r2 = ADD32(0, 0X24);
    // 0x0040F69C: addiu       $s4, $s0, 0x8
    ctx->r20 = ADD32(ctx->r16, 0X8);
    // 0x0040F6A0: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x0040F6A4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0040F6A8: bne         $s3, $v0, L_0040F6E0
    if (ctx->r19 != ctx->r2) {
        // 0x0040F6AC: sw          $s3, 0x4($s0)
        MEM_W(0X4, ctx->r16) = ctx->r19;
            goto L_0040F6E0;
    }
    // 0x0040F6AC: sw          $s3, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r19;
    // 0x0040F6B0: lwc1        $f0, 0x0($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X0);
    // 0x0040F6B4: swc1        $f0, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f0.u32l;
    // 0x0040F6B8: lwc1        $f0, 0x4($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X4);
    // 0x0040F6BC: swc1        $f0, 0x4($s4)
    MEM_W(0X4, ctx->r20) = ctx->f0.u32l;
    // 0x0040F6C0: lwc1        $f0, 0x8($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X8);
    // 0x0040F6C4: sw          $zero, 0xC($s4)
    MEM_W(0XC, ctx->r20) = 0;
    // 0x0040F6C8: sw          $zero, 0x10($s4)
    MEM_W(0X10, ctx->r20) = 0;
    // 0x0040F6CC: sw          $zero, 0x14($s4)
    MEM_W(0X14, ctx->r20) = 0;
    // 0x0040F6D0: sw          $zero, 0x20($s4)
    MEM_W(0X20, ctx->r20) = 0;
    // 0x0040F6D4: sw          $zero, 0x1C($s4)
    MEM_W(0X1C, ctx->r20) = 0;
    // 0x0040F6D8: j           L_0040F9C0
    // 0x0040F6DC: swc1        $f0, 0x8($s4)
    MEM_W(0X8, ctx->r20) = ctx->f0.u32l;
        goto L_0040F9C0;
    // 0x0040F6DC: swc1        $f0, 0x8($s4)
    MEM_W(0X8, ctx->r20) = ctx->f0.u32l;
L_0040F6E0:
    // 0x0040F6E0: blez        $s3, L_0040F72C
    if (SIGNED(ctx->r19) <= 0) {
        // 0x0040F6E4: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_0040F72C;
    }
    // 0x0040F6E4: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x0040F6E8: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    // 0x0040F6EC: addu        $v1, $s4, $zero
    ctx->r3 = ADD32(ctx->r20, 0);
    // 0x0040F6F0: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
L_0040F6F4:
    // 0x0040F6F4: lwc1        $f0, 0x0($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X0);
    // 0x0040F6F8: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x0040F6FC: swc1        $f0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f0.u32l;
    // 0x0040F700: lwc1        $f0, 0x4($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X4);
    // 0x0040F704: slt         $v0, $s0, $s3
    ctx->r2 = SIGNED(ctx->r16) < SIGNED(ctx->r19) ? 1 : 0;
    // 0x0040F708: swc1        $f0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->f0.u32l;
    // 0x0040F70C: lwc1        $f0, 0x8($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X8);
    // 0x0040F710: addiu       $a1, $a1, 0xC
    ctx->r5 = ADD32(ctx->r5, 0XC);
    // 0x0040F714: swc1        $f0, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f0.u32l;
    // 0x0040F718: lwc1        $f0, 0x0($a2)
    ctx->f0.u32l = MEM_W(ctx->r6, 0X0);
    // 0x0040F71C: addiu       $a2, $a2, 0x4
    ctx->r6 = ADD32(ctx->r6, 0X4);
    // 0x0040F720: swc1        $f0, 0x1C($v1)
    MEM_W(0X1C, ctx->r3) = ctx->f0.u32l;
    // 0x0040F724: bne         $v0, $zero, L_0040F6F4
    if (ctx->r2 != 0) {
        // 0x0040F728: addiu       $v1, $v1, 0x24
        ctx->r3 = ADD32(ctx->r3, 0X24);
            goto L_0040F6F4;
    }
    // 0x0040F728: addiu       $v1, $v1, 0x24
    ctx->r3 = ADD32(ctx->r3, 0X24);
L_0040F72C:
    // 0x0040F72C: blez        $s3, L_0040F794
    if (SIGNED(ctx->r19) <= 0) {
        // 0x0040F730: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_0040F794;
    }
    // 0x0040F730: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x0040F734: addiu       $fp, $s3, -0x1
    ctx->r30 = ADD32(ctx->r19, -0X1);
    // 0x0040F738: addiu       $s2, $zero, 0x24
    ctx->r18 = ADD32(0, 0X24);
    // 0x0040F73C: addu        $s1, $s4, $zero
    ctx->r17 = ADD32(ctx->r20, 0);
L_0040F740:
    // 0x0040F740: beq         $s0, $fp, L_0040F794
    if (ctx->r16 == ctx->r30) {
        // 0x0040F744: swc1        $f20, 0x18($s1)
        MEM_W(0X18, ctx->r17) = ctx->f20.u32l;
            goto L_0040F794;
    }
    // 0x0040F744: swc1        $f20, 0x18($s1)
    MEM_W(0X18, ctx->r17) = ctx->f20.u32l;
    // 0x0040F748: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x0040F74C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x0040F750: jal         0x0020EF2C
    // 0x0040F754: addu        $a2, $s4, $s2
    ctx->r6 = ADD32(ctx->r20, ctx->r18);
    func_0020EF2C(rdram, ctx);
        goto after_3;
    // 0x0040F754: addu        $a2, $s4, $s2
    ctx->r6 = ADD32(ctx->r20, ctx->r18);
    after_3:
    // 0x0040F758: lwc1        $f1, 0x10($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x0040F75C: mul.s       $f1, $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f1.fl);
    // 0x0040F760: lwc1        $f0, 0x14($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X14);
    // 0x0040F764: mul.s       $f0, $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x0040F768: lwc1        $f12, 0x18($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X18);
    // 0x0040F76C: mul.s       $f12, $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x0040F770: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x0040F774: addiu       $s2, $s2, 0x24
    ctx->r18 = ADD32(ctx->r18, 0X24);
    // 0x0040F778: add.s       $f12, $f1, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = ctx->f1.fl + ctx->f12.fl;
    // 0x0040F77C: addiu       $s1, $s1, 0x24
    ctx->r17 = ADD32(ctx->r17, 0X24);
    // 0x0040F780: jal         0x00298470
    // 0x0040F784: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    func_00298470(rdram, ctx);
        goto after_4;
    // 0x0040F784: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    after_4:
    // 0x0040F788: slt         $v0, $s0, $s3
    ctx->r2 = SIGNED(ctx->r16) < SIGNED(ctx->r19) ? 1 : 0;
    // 0x0040F78C: bne         $v0, $zero, L_0040F740
    if (ctx->r2 != 0) {
        // 0x0040F790: add.s       $f20, $f20, $f0
        CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = ctx->f20.fl + ctx->f0.fl;
            goto L_0040F740;
    }
    // 0x0040F790: add.s       $f20, $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = ctx->f20.fl + ctx->f0.fl;
L_0040F794:
    // 0x0040F794: blez        $s3, L_0040F7D0
    if (SIGNED(ctx->r19) <= 0) {
        // 0x0040F798: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_0040F7D0;
    }
    // 0x0040F798: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x0040F79C: addu        $a1, $s6, $zero
    ctx->r5 = ADD32(ctx->r22, 0);
    // 0x0040F7A0: addu        $a0, $s7, $zero
    ctx->r4 = ADD32(ctx->r23, 0);
    // 0x0040F7A4: addu        $v1, $s4, $zero
    ctx->r3 = ADD32(ctx->r20, 0);
L_0040F7A8:
    // 0x0040F7A8: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x0040F7AC: lwc1        $f0, 0x0($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X0);
    // 0x0040F7B0: slt         $v0, $s0, $s3
    ctx->r2 = SIGNED(ctx->r16) < SIGNED(ctx->r19) ? 1 : 0;
    // 0x0040F7B4: swc1        $f0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f0.u32l;
    // 0x0040F7B8: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x0040F7BC: lwc1        $f0, 0x18($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X18);
    // 0x0040F7C0: addiu       $v1, $v1, 0x24
    ctx->r3 = ADD32(ctx->r3, 0X24);
    // 0x0040F7C4: swc1        $f0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f0.u32l;
    // 0x0040F7C8: bne         $v0, $zero, L_0040F7A8
    if (ctx->r2 != 0) {
        // 0x0040F7CC: addiu       $a1, $a1, 0x4
        ctx->r5 = ADD32(ctx->r5, 0X4);
            goto L_0040F7A8;
    }
    // 0x0040F7CC: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
L_0040F7D0:
    // 0x0040F7D0: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x0040F7D4: addu        $a1, $s7, $zero
    ctx->r5 = ADD32(ctx->r23, 0);
    // 0x0040F7D8: addu        $a2, $s6, $zero
    ctx->r6 = ADD32(ctx->r22, 0);
    // 0x0040F7DC: jal         0x0040F240
    // 0x0040F7E0: addu        $a3, $s5, $zero
    ctx->r7 = ADD32(ctx->r21, 0);
    func_0040F240(rdram, ctx);
        goto after_5;
    // 0x0040F7E0: addu        $a3, $s5, $zero
    ctx->r7 = ADD32(ctx->r21, 0);
    after_5:
    // 0x0040F7E4: blez        $s3, L_0040F810
    if (SIGNED(ctx->r19) <= 0) {
        // 0x0040F7E8: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_0040F810;
    }
    // 0x0040F7E8: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x0040F7EC: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    // 0x0040F7F0: addu        $v1, $s4, $zero
    ctx->r3 = ADD32(ctx->r20, 0);
L_0040F7F4:
    // 0x0040F7F4: lwc1        $f0, 0x0($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X0);
    // 0x0040F7F8: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x0040F7FC: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x0040F800: slt         $v0, $s0, $s3
    ctx->r2 = SIGNED(ctx->r16) < SIGNED(ctx->r19) ? 1 : 0;
    // 0x0040F804: swc1        $f0, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->f0.u32l;
    // 0x0040F808: bne         $v0, $zero, L_0040F7F4
    if (ctx->r2 != 0) {
        // 0x0040F80C: addiu       $v1, $v1, 0x24
        ctx->r3 = ADD32(ctx->r3, 0X24);
            goto L_0040F7F4;
    }
    // 0x0040F80C: addiu       $v1, $v1, 0x24
    ctx->r3 = ADD32(ctx->r3, 0X24);
L_0040F810:
    // 0x0040F810: blez        $s3, L_0040F84C
    if (SIGNED(ctx->r19) <= 0) {
        // 0x0040F814: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_0040F84C;
    }
    // 0x0040F814: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x0040F818: addu        $a1, $s6, $zero
    ctx->r5 = ADD32(ctx->r22, 0);
    // 0x0040F81C: addu        $a0, $s7, $zero
    ctx->r4 = ADD32(ctx->r23, 0);
    // 0x0040F820: addu        $v1, $s4, $zero
    ctx->r3 = ADD32(ctx->r20, 0);
L_0040F824:
    // 0x0040F824: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x0040F828: lwc1        $f0, 0x4($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X4);
    // 0x0040F82C: slt         $v0, $s0, $s3
    ctx->r2 = SIGNED(ctx->r16) < SIGNED(ctx->r19) ? 1 : 0;
    // 0x0040F830: swc1        $f0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f0.u32l;
    // 0x0040F834: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x0040F838: lwc1        $f0, 0x18($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X18);
    // 0x0040F83C: addiu       $v1, $v1, 0x24
    ctx->r3 = ADD32(ctx->r3, 0X24);
    // 0x0040F840: swc1        $f0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f0.u32l;
    // 0x0040F844: bne         $v0, $zero, L_0040F824
    if (ctx->r2 != 0) {
        // 0x0040F848: addiu       $a1, $a1, 0x4
        ctx->r5 = ADD32(ctx->r5, 0X4);
            goto L_0040F824;
    }
    // 0x0040F848: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
L_0040F84C:
    // 0x0040F84C: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x0040F850: addu        $a1, $s7, $zero
    ctx->r5 = ADD32(ctx->r23, 0);
    // 0x0040F854: addu        $a2, $s6, $zero
    ctx->r6 = ADD32(ctx->r22, 0);
    // 0x0040F858: jal         0x0040F240
    // 0x0040F85C: addu        $a3, $s5, $zero
    ctx->r7 = ADD32(ctx->r21, 0);
    func_0040F240(rdram, ctx);
        goto after_6;
    // 0x0040F85C: addu        $a3, $s5, $zero
    ctx->r7 = ADD32(ctx->r21, 0);
    after_6:
    // 0x0040F860: blez        $s3, L_0040F88C
    if (SIGNED(ctx->r19) <= 0) {
        // 0x0040F864: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_0040F88C;
    }
    // 0x0040F864: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x0040F868: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    // 0x0040F86C: addu        $v1, $s4, $zero
    ctx->r3 = ADD32(ctx->r20, 0);
L_0040F870:
    // 0x0040F870: lwc1        $f0, 0x0($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X0);
    // 0x0040F874: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x0040F878: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x0040F87C: slt         $v0, $s0, $s3
    ctx->r2 = SIGNED(ctx->r16) < SIGNED(ctx->r19) ? 1 : 0;
    // 0x0040F880: swc1        $f0, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->f0.u32l;
    // 0x0040F884: bne         $v0, $zero, L_0040F870
    if (ctx->r2 != 0) {
        // 0x0040F888: addiu       $v1, $v1, 0x24
        ctx->r3 = ADD32(ctx->r3, 0X24);
            goto L_0040F870;
    }
    // 0x0040F888: addiu       $v1, $v1, 0x24
    ctx->r3 = ADD32(ctx->r3, 0X24);
L_0040F88C:
    // 0x0040F88C: blez        $s3, L_0040F8C8
    if (SIGNED(ctx->r19) <= 0) {
        // 0x0040F890: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_0040F8C8;
    }
    // 0x0040F890: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x0040F894: addu        $a1, $s6, $zero
    ctx->r5 = ADD32(ctx->r22, 0);
    // 0x0040F898: addu        $a0, $s7, $zero
    ctx->r4 = ADD32(ctx->r23, 0);
    // 0x0040F89C: addu        $v1, $s4, $zero
    ctx->r3 = ADD32(ctx->r20, 0);
L_0040F8A0:
    // 0x0040F8A0: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x0040F8A4: lwc1        $f0, 0x8($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X8);
    // 0x0040F8A8: slt         $v0, $s0, $s3
    ctx->r2 = SIGNED(ctx->r16) < SIGNED(ctx->r19) ? 1 : 0;
    // 0x0040F8AC: swc1        $f0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f0.u32l;
    // 0x0040F8B0: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x0040F8B4: lwc1        $f0, 0x18($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X18);
    // 0x0040F8B8: addiu       $v1, $v1, 0x24
    ctx->r3 = ADD32(ctx->r3, 0X24);
    // 0x0040F8BC: swc1        $f0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f0.u32l;
    // 0x0040F8C0: bne         $v0, $zero, L_0040F8A0
    if (ctx->r2 != 0) {
        // 0x0040F8C4: addiu       $a1, $a1, 0x4
        ctx->r5 = ADD32(ctx->r5, 0X4);
            goto L_0040F8A0;
    }
    // 0x0040F8C4: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
L_0040F8C8:
    // 0x0040F8C8: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x0040F8CC: addu        $a1, $s7, $zero
    ctx->r5 = ADD32(ctx->r23, 0);
    // 0x0040F8D0: addu        $a2, $s6, $zero
    ctx->r6 = ADD32(ctx->r22, 0);
    // 0x0040F8D4: jal         0x0040F240
    // 0x0040F8D8: addu        $a3, $s5, $zero
    ctx->r7 = ADD32(ctx->r21, 0);
    func_0040F240(rdram, ctx);
        goto after_7;
    // 0x0040F8D8: addu        $a3, $s5, $zero
    ctx->r7 = ADD32(ctx->r21, 0);
    after_7:
    // 0x0040F8DC: blez        $s3, L_0040F908
    if (SIGNED(ctx->r19) <= 0) {
        // 0x0040F8E0: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_0040F908;
    }
    // 0x0040F8E0: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x0040F8E4: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    // 0x0040F8E8: addu        $v1, $s4, $zero
    ctx->r3 = ADD32(ctx->r20, 0);
L_0040F8EC:
    // 0x0040F8EC: lwc1        $f0, 0x0($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X0);
    // 0x0040F8F0: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x0040F8F4: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x0040F8F8: slt         $v0, $s0, $s3
    ctx->r2 = SIGNED(ctx->r16) < SIGNED(ctx->r19) ? 1 : 0;
    // 0x0040F8FC: swc1        $f0, 0x14($v1)
    MEM_W(0X14, ctx->r3) = ctx->f0.u32l;
    // 0x0040F900: bne         $v0, $zero, L_0040F8EC
    if (ctx->r2 != 0) {
        // 0x0040F904: addiu       $v1, $v1, 0x24
        ctx->r3 = ADD32(ctx->r3, 0X24);
            goto L_0040F8EC;
    }
    // 0x0040F904: addiu       $v1, $v1, 0x24
    ctx->r3 = ADD32(ctx->r3, 0X24);
L_0040F908:
    // 0x0040F908: blez        $s3, L_0040F944
    if (SIGNED(ctx->r19) <= 0) {
        // 0x0040F90C: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_0040F944;
    }
    // 0x0040F90C: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x0040F910: addu        $a1, $s6, $zero
    ctx->r5 = ADD32(ctx->r22, 0);
    // 0x0040F914: addu        $a0, $s7, $zero
    ctx->r4 = ADD32(ctx->r23, 0);
    // 0x0040F918: addu        $v1, $s4, $zero
    ctx->r3 = ADD32(ctx->r20, 0);
L_0040F91C:
    // 0x0040F91C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x0040F920: lwc1        $f0, 0x18($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X18);
    // 0x0040F924: slt         $v0, $s0, $s3
    ctx->r2 = SIGNED(ctx->r16) < SIGNED(ctx->r19) ? 1 : 0;
    // 0x0040F928: swc1        $f0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f0.u32l;
    // 0x0040F92C: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x0040F930: lwc1        $f0, 0x1C($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X1C);
    // 0x0040F934: addiu       $v1, $v1, 0x24
    ctx->r3 = ADD32(ctx->r3, 0X24);
    // 0x0040F938: swc1        $f0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f0.u32l;
    // 0x0040F93C: bne         $v0, $zero, L_0040F91C
    if (ctx->r2 != 0) {
        // 0x0040F940: addiu       $a1, $a1, 0x4
        ctx->r5 = ADD32(ctx->r5, 0X4);
            goto L_0040F91C;
    }
    // 0x0040F940: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
L_0040F944:
    // 0x0040F944: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x0040F948: addu        $a1, $s7, $zero
    ctx->r5 = ADD32(ctx->r23, 0);
    // 0x0040F94C: addu        $a2, $s6, $zero
    ctx->r6 = ADD32(ctx->r22, 0);
    // 0x0040F950: jal         0x0040F240
    // 0x0040F954: addu        $a3, $s5, $zero
    ctx->r7 = ADD32(ctx->r21, 0);
    func_0040F240(rdram, ctx);
        goto after_8;
    // 0x0040F954: addu        $a3, $s5, $zero
    ctx->r7 = ADD32(ctx->r21, 0);
    after_8:
    // 0x0040F958: blez        $s3, L_0040F984
    if (SIGNED(ctx->r19) <= 0) {
        // 0x0040F95C: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_0040F984;
    }
    // 0x0040F95C: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x0040F960: addu        $v1, $s5, $zero
    ctx->r3 = ADD32(ctx->r21, 0);
    // 0x0040F964: addu        $a2, $s4, $zero
    ctx->r6 = ADD32(ctx->r20, 0);
L_0040F968:
    // 0x0040F968: lwc1        $f0, 0x0($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X0);
    // 0x0040F96C: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x0040F970: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x0040F974: slt         $v0, $s0, $s3
    ctx->r2 = SIGNED(ctx->r16) < SIGNED(ctx->r19) ? 1 : 0;
    // 0x0040F978: swc1        $f0, 0x20($a2)
    MEM_W(0X20, ctx->r6) = ctx->f0.u32l;
    // 0x0040F97C: bne         $v0, $zero, L_0040F968
    if (ctx->r2 != 0) {
        // 0x0040F980: addiu       $a2, $a2, 0x24
        ctx->r6 = ADD32(ctx->r6, 0X24);
            goto L_0040F968;
    }
    // 0x0040F980: addiu       $a2, $a2, 0x24
    ctx->r6 = ADD32(ctx->r6, 0X24);
L_0040F984:
    // 0x0040F984: beq         $s7, $zero, L_0040F998
    if (ctx->r23 == 0) {
        // 0x0040F988: nop
    
            goto L_0040F998;
    }
    // 0x0040F988: nop

    // 0x0040F98C: lw          $a1, -0x10($s7)
    ctx->r5 = MEM_W(ctx->r23, -0X10);
    // 0x0040F990: jal         0x002052D8
    // 0x0040F994: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_002052D8(rdram, ctx);
        goto after_9;
    // 0x0040F994: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_9:
L_0040F998:
    // 0x0040F998: beq         $s6, $zero, L_0040F9AC
    if (ctx->r22 == 0) {
        // 0x0040F99C: nop
    
            goto L_0040F9AC;
    }
    // 0x0040F99C: nop

    // 0x0040F9A0: lw          $a1, -0x10($s6)
    ctx->r5 = MEM_W(ctx->r22, -0X10);
    // 0x0040F9A4: jal         0x002052D8
    // 0x0040F9A8: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_002052D8(rdram, ctx);
        goto after_10;
    // 0x0040F9A8: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_10:
L_0040F9AC:
    // 0x0040F9AC: beq         $s5, $zero, L_0040F9C0
    if (ctx->r21 == 0) {
        // 0x0040F9B0: nop
    
            goto L_0040F9C0;
    }
    // 0x0040F9B0: nop

    // 0x0040F9B4: lw          $a1, -0x10($s5)
    ctx->r5 = MEM_W(ctx->r21, -0X10);
    // 0x0040F9B8: jal         0x002052D8
    // 0x0040F9BC: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_002052D8(rdram, ctx);
        goto after_11;
    // 0x0040F9BC: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_11:
L_0040F9C0:
    // 0x0040F9C0: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x0040F9C4: lw          $fp, 0x40($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X40);
    // 0x0040F9C8: lw          $s7, 0x3C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X3C);
    // 0x0040F9CC: lw          $s6, 0x38($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X38);
    // 0x0040F9D0: lw          $s5, 0x34($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X34);
    // 0x0040F9D4: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x0040F9D8: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x0040F9DC: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x0040F9E0: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x0040F9E4: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x0040F9E8: ldc1        $f20, 0x48($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X48);
    // 0x0040F9EC: jr          $ra
    // 0x0040F9F0: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x0040F9F0: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_0042709C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0042709C: bne         $a0, $zero, L_004270AC
    if (ctx->r4 != 0) {
            // 0x004270A0: addu        $v1, $a0, $zero
    ctx->r3 = ADD32(ctx->r4, 0);
    func_004270AC(rdram, ctx);
    return;
    }
    // 0x004270A0: addu        $v1, $a0, $zero
    ctx->r3 = ADD32(ctx->r4, 0);
    // 0x004270A4: jr          $ra
    // 0x004270A8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x004270A8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
