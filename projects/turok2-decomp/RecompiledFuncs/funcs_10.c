#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_00292B94(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00292B94: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x00292B98: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x00292B9C: addu        $s4, $a0, $zero
    ctx->r20 = ADD32(ctx->r4, 0);
    // 0x00292BA0: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x00292BA4: sw          $s5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r21;
    // 0x00292BA8: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x00292BAC: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x00292BB0: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00292BB4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00292BB8: lw          $s0, 0x50($s4)
    ctx->r16 = MEM_W(ctx->r20, 0X50);
    // 0x00292BBC: beq         $s0, $zero, L_00292C60
    if (ctx->r16 == 0) {
        // 0x00292BC0: addu        $s3, $a1, $zero
        ctx->r19 = ADD32(ctx->r5, 0);
            goto L_00292C60;
    }
    // 0x00292BC0: addu        $s3, $a1, $zero
    ctx->r19 = ADD32(ctx->r5, 0);
    // 0x00292BC4: addiu       $s5, $zero, 0x16
    ctx->r21 = ADD32(0, 0X16);
L_00292BC8:
    // 0x00292BC8: lhu         $s2, 0xC($s0)
    ctx->r18 = MEM_HU(ctx->r16, 0XC);
    // 0x00292BCC: lw          $s1, 0x0($s0)
    ctx->r17 = MEM_W(ctx->r16, 0X0);
    // 0x00292BD0: addiu       $v0, $s2, -0x16
    ctx->r2 = ADD32(ctx->r18, -0X16);
    // 0x00292BD4: sltiu       $v0, $v0, 0x2
    ctx->r2 = ctx->r2 < 0X2 ? 1 : 0;
    // 0x00292BD8: beql        $v0, $zero, L_00292C58
    if (ctx->r2 == 0) {
        // 0x00292BDC: addu        $s0, $s1, $zero
        ctx->r16 = ADD32(ctx->r17, 0);
            goto L_00292C58;
    }
    goto skip_0;
    // 0x00292BDC: addu        $s0, $s1, $zero
    ctx->r16 = ADD32(ctx->r17, 0);
    skip_0:
    // 0x00292BE0: lw          $v0, 0x10($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X10);
    // 0x00292BE4: bnel        $v0, $s3, L_00292C58
    if (ctx->r2 != ctx->r19) {
        // 0x00292BE8: addu        $s0, $s1, $zero
        ctx->r16 = ADD32(ctx->r17, 0);
            goto L_00292C58;
    }
    goto skip_1;
    // 0x00292BE8: addu        $s0, $s1, $zero
    ctx->r16 = ADD32(ctx->r17, 0);
    skip_1:
    // 0x00292BEC: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x00292BF0: lw          $v0, 0x78($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X78);
    // 0x00292BF4: jalr        $v0
    // 0x00292BF8: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x00292BF8: nop

    after_0:
    // 0x00292BFC: jal         0x002933B0
    // 0x00292C00: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_002933B0(rdram, ctx);
        goto after_1;
    // 0x00292C00: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x00292C04: beq         $s1, $zero, L_00292C1C
    if (ctx->r17 == 0) {
        // 0x00292C08: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_00292C1C;
    }
    // 0x00292C08: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00292C0C: lw          $v0, 0x8($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X8);
    // 0x00292C10: lw          $v1, 0x8($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X8);
    // 0x00292C14: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x00292C18: sw          $v0, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->r2;
L_00292C1C:
    // 0x00292C1C: jal         0x002933E0
    // 0x00292C20: addiu       $a1, $s4, 0x48
    ctx->r5 = ADD32(ctx->r20, 0X48);
    func_002933E0(rdram, ctx);
        goto after_2;
    // 0x00292C20: addiu       $a1, $s4, 0x48
    ctx->r5 = ADD32(ctx->r20, 0X48);
    after_2:
    // 0x00292C24: sll         $v0, $s2, 16
    ctx->r2 = S32(ctx->r18 << 16);
    // 0x00292C28: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x00292C2C: bne         $v0, $s5, L_00292C40
    if (ctx->r2 != ctx->r21) {
        // 0x00292C30: nop
    
            goto L_00292C40;
    }
    // 0x00292C30: nop

    // 0x00292C34: lbu         $v0, 0x37($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0X37);
    // 0x00292C38: j           L_00292C48
    // 0x00292C3C: andi        $v0, $v0, 0xFE
    ctx->r2 = ctx->r2 & 0XFE;
        goto L_00292C48;
    // 0x00292C3C: andi        $v0, $v0, 0xFE
    ctx->r2 = ctx->r2 & 0XFE;
L_00292C40:
    // 0x00292C40: lbu         $v0, 0x37($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0X37);
    // 0x00292C44: andi        $v0, $v0, 0xFD
    ctx->r2 = ctx->r2 & 0XFD;
L_00292C48:
    // 0x00292C48: sb          $v0, 0x37($s3)
    MEM_B(0X37, ctx->r19) = ctx->r2;
    // 0x00292C4C: lbu         $v0, 0x37($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0X37);
    // 0x00292C50: beq         $v0, $zero, L_00292C60
    if (ctx->r2 == 0) {
        // 0x00292C54: addu        $s0, $s1, $zero
        ctx->r16 = ADD32(ctx->r17, 0);
            goto L_00292C60;
    }
    // 0x00292C54: addu        $s0, $s1, $zero
    ctx->r16 = ADD32(ctx->r17, 0);
L_00292C58:
    // 0x00292C58: bne         $s0, $zero, L_00292BC8
    if (ctx->r16 != 0) {
        // 0x00292C5C: nop
    
            goto L_00292BC8;
    }
    // 0x00292C5C: nop

L_00292C60:
    // 0x00292C60: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x00292C64: lw          $s5, 0x24($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X24);
    // 0x00292C68: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x00292C6C: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x00292C70: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x00292C74: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00292C78: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00292C7C: jr          $ra
    // 0x00292C80: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x00292C80: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_00417D10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00417D10: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x00417D14: addu        $a1, $a2, $zero
    ctx->r5 = ADD32(ctx->r6, 0);
    // 0x00417D18: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x00417D1C: addiu       $a0, $a0, -0x5528
    ctx->r4 = ADD32(ctx->r4, -0X5528);
    // 0x00417D20: addu        $v1, $a2, $zero
    ctx->r3 = ADD32(ctx->r6, 0);
L_00417D24:
    // 0x00417D24: lui         $at, 0x800F
    ctx->r1 = S32(0X800F << 16);
    // 0x00417D28: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x00417D2C: lw          $v0, 0x5EC0($at)
    ctx->r2 = MEM_W(ctx->r1, 0X5EC0);
    // 0x00417D30: beql        $v0, $zero, L_00417D50
    if (ctx->r2 == 0) {
        // 0x00417D34: addiu       $a0, $a0, 0x40
        ctx->r4 = ADD32(ctx->r4, 0X40);
            goto L_00417D50;
    }
    goto skip_0;
    // 0x00417D34: addiu       $a0, $a0, 0x40
    ctx->r4 = ADD32(ctx->r4, 0X40);
    skip_0:
    // 0x00417D38: lbu         $v0, 0xA8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XA8);
    // 0x00417D3C: bne         $v0, $zero, L_00417D4C
    if (ctx->r2 != 0) {
        // 0x00417D40: addiu       $a2, $a2, 0x1
        ctx->r6 = ADD32(ctx->r6, 0X1);
            goto L_00417D4C;
    }
    // 0x00417D40: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x00417D44: jr          $ra
    // 0x00417D48: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x00417D48: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_00417D4C:
    // 0x00417D4C: addiu       $a0, $a0, 0x40
    ctx->r4 = ADD32(ctx->r4, 0X40);
L_00417D50:
    // 0x00417D50: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x00417D54: slti        $v0, $a1, 0x4
    ctx->r2 = SIGNED(ctx->r5) < 0X4 ? 1 : 0;
    // 0x00417D58: bne         $v0, $zero, L_00417D24
    if (ctx->r2 != 0) {
        // 0x00417D5C: addiu       $v1, $v1, 0x224
        ctx->r3 = ADD32(ctx->r3, 0X224);
            goto L_00417D24;
    }
    // 0x00417D5C: addiu       $v1, $v1, 0x224
    ctx->r3 = ADD32(ctx->r3, 0X224);
    // 0x00417D60: jr          $ra
    // 0x00417D64: addu        $v0, $a2, $zero
    ctx->r2 = ADD32(ctx->r6, 0);
    return;
    // 0x00417D64: addu        $v0, $a2, $zero
    ctx->r2 = ADD32(ctx->r6, 0);
;}
RECOMP_FUNC void func_0040D9B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0040D9B8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x0040D9BC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0040D9C0: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x0040D9C4: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x0040D9C8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x0040D9CC: lw          $a1, 0x4($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X4);
    // 0x0040D9D0: beq         $a1, $zero, L_0040DA7C
    if (ctx->r5 == 0) {
        // 0x0040D9D4: addu        $s1, $a0, $zero
        ctx->r17 = ADD32(ctx->r4, 0);
            goto L_0040DA7C;
    }
    // 0x0040D9D4: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x0040D9D8: lb          $v1, 0x34($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X34);
    // 0x0040D9DC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0040D9E0: beq         $v1, $v0, L_0040DA7C
    if (ctx->r3 == ctx->r2) {
        // 0x0040D9E4: addiu       $v0, $zero, 0x9
        ctx->r2 = ADD32(0, 0X9);
            goto L_0040DA7C;
    }
    // 0x0040D9E4: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
    // 0x0040D9E8: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x0040D9EC: addiu       $a0, $a0, 0x200
    ctx->r4 = ADD32(ctx->r4, 0X200);
    // 0x0040D9F0: lw          $v1, 0x4FC($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X4FC);
    // 0x0040D9F4: beq         $v1, $v0, L_0040DA18
    if (ctx->r3 == ctx->r2) {
        // 0x0040D9F8: nop
    
            goto L_0040DA18;
    }
    // 0x0040D9F8: nop

    // 0x0040D9FC: sb          $zero, 0xC7($s0)
    MEM_B(0XC7, ctx->r16) = 0;
    // 0x0040DA00: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0040DA04: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x0040DA08: jal         0x00243414
    // 0x0040DA0C: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    func_00243414(rdram, ctx);
        goto after_0;
    // 0x0040DA0C: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    after_0:
    // 0x0040DA10: j           L_0040DA7C
    // 0x0040DA14: nop

        goto L_0040DA7C;
    // 0x0040DA14: nop

L_0040DA18:
    // 0x0040DA18: lw          $v0, 0x4($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X4);
    // 0x0040DA1C: subu        $v0, $a1, $v0
    ctx->r2 = SUB32(ctx->r5, ctx->r2);
    // 0x0040DA20: bltzl       $v0, L_0040DA28
    if (SIGNED(ctx->r2) < 0) {
        // 0x0040DA24: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_0040DA28;
    }
    goto skip_0;
    // 0x0040DA24: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    skip_0:
L_0040DA28:
    // 0x0040DA28: lwc1        $f1, 0x118($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X118);
    // 0x0040DA2C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x0040DA30: c.eq.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl == ctx->f0.fl;
    // 0x0040DA34: nop

    // 0x0040DA38: bc1f        L_0040DA5C
    if (!c1cs) {
        // 0x0040DA3C: sw          $v0, 0x4($s0)
        MEM_W(0X4, ctx->r16) = ctx->r2;
            goto L_0040DA5C;
    }
    // 0x0040DA3C: sw          $v0, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r2;
    // 0x0040DA40: addiu       $a0, $a0, 0x3C
    ctx->r4 = ADD32(ctx->r4, 0X3C);
    // 0x0040DA44: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0040DA48: lwc1        $f0, 0x8FC($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X8FC);
    // 0x0040DA4C: lui         $a1, 0x43
    ctx->r5 = S32(0X43 << 16);
    // 0x0040DA50: addiu       $a1, $a1, 0x2464
    ctx->r5 = ADD32(ctx->r5, 0X2464);
    // 0x0040DA54: jal         0x00236314
    // 0x0040DA58: swc1        $f0, 0x118($s0)
    MEM_W(0X118, ctx->r16) = ctx->f0.u32l;
    func_00236314(rdram, ctx);
        goto after_1;
    // 0x0040DA58: swc1        $f0, 0x118($s0)
    MEM_W(0X118, ctx->r16) = ctx->f0.u32l;
    after_1:
L_0040DA5C:
    // 0x0040DA5C: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // 0x0040DA60: bne         $v0, $zero, L_0040DA7C
    if (ctx->r2 != 0) {
        // 0x0040DA64: addu        $a1, $s0, $zero
        ctx->r5 = ADD32(ctx->r16, 0);
            goto L_0040DA7C;
    }
    // 0x0040DA64: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x0040DA68: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0040DA6C: jal         0x00243414
    // 0x0040DA70: addiu       $a2, $zero, 0x9
    ctx->r6 = ADD32(0, 0X9);
    func_00243414(rdram, ctx);
        goto after_2;
    // 0x0040DA70: addiu       $a2, $zero, 0x9
    ctx->r6 = ADD32(0, 0X9);
    after_2:
    // 0x0040DA74: jal         0x00206068
    // 0x0040DA78: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    func_00206068(rdram, ctx);
        goto after_3;
    // 0x0040DA78: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    after_3:
L_0040DA7C:
    // 0x0040DA7C: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x0040DA80: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x0040DA84: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0040DA88: jr          $ra
    // 0x0040DA8C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x0040DA8C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_00254430(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00254430: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x00254434: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x00254438: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x0025443C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x00254440: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x00254444: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x00254448: lwc1        $f1, 0xBE4($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0XBE4);
    // 0x0025444C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00254450: lwc1        $f0, 0x6D28($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6D28);
    // 0x00254454: add.s       $f0, $f1, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x00254458: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0025445C: lwc1        $f2, 0x7108($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X7108);
    // 0x00254460: addu        $s2, $a1, $zero
    ctx->r18 = ADD32(ctx->r5, 0);
    // 0x00254464: c.lt.s      $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f1.fl < ctx->f2.fl;
    // 0x00254468: nop

    // 0x0025446C: bc1f        L_0025449C
    if (!c1cs) {
        // 0x00254470: swc1        $f0, 0xBE4($s0)
        MEM_W(0XBE4, ctx->r16) = ctx->f0.u32l;
            goto L_0025449C;
    }
    // 0x00254470: swc1        $f0, 0xBE4($s0)
    MEM_W(0XBE4, ctx->r16) = ctx->f0.u32l;
    // 0x00254474: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x00254478: nop

    // 0x0025447C: bc1f        L_0025449C
    if (!c1cs) {
        // 0x00254480: nop
    
            goto L_0025449C;
    }
    // 0x00254480: nop

    // 0x00254484: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x00254488: lbu         $v0, -0x550F($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X550F);
    // 0x0025448C: bne         $v0, $zero, L_0025449C
    if (ctx->r2 != 0) {
        // 0x00254490: nop
    
            goto L_0025449C;
    }
    // 0x00254490: nop

    // 0x00254494: jal         0x0027580C
    // 0x00254498: addiu       $a0, $zero, 0x163
    ctx->r4 = ADD32(0, 0X163);
    func_0027580C(rdram, ctx);
        goto after_0;
    // 0x00254498: addiu       $a0, $zero, 0x163
    ctx->r4 = ADD32(0, 0X163);
    after_0:
L_0025449C:
    // 0x0025449C: lwc1        $f1, 0xBE4($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0XBE4);
    // 0x002544A0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002544A4: lwc1        $f0, 0x710C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X710C);
    // 0x002544A8: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x002544AC: nop

    // 0x002544B0: bc1f        L_0025454C
    if (!c1cs) {
        // 0x002544B4: addiu       $v1, $zero, 0x96
        ctx->r3 = ADD32(0, 0X96);
            goto L_0025454C;
    }
    // 0x002544B4: addiu       $v1, $zero, 0x96
    ctx->r3 = ADD32(0, 0X96);
    // 0x002544B8: lw          $v0, 0x524($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X524);
    // 0x002544BC: sra         $v0, $v0, 8
    ctx->r2 = S32(SIGNED(ctx->r2) >> 8);
    // 0x002544C0: subu        $a0, $v1, $v0
    ctx->r4 = SUB32(ctx->r3, ctx->r2);
    // 0x002544C4: blez        $a0, L_002544F0
    if (SIGNED(ctx->r4) <= 0) {
        // 0x002544C8: addiu       $s1, $zero, 0x1
        ctx->r17 = ADD32(0, 0X1);
            goto L_002544F0;
    }
    // 0x002544C8: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
    // 0x002544CC: lui         $v0, 0x51EB
    ctx->r2 = S32(0X51EB << 16);
    // 0x002544D0: ori         $v0, $v0, 0x851F
    ctx->r2 = ctx->r2 | 0X851F;
    // 0x002544D4: mult        $a0, $v0
    result = S64(S32(ctx->r4)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x002544D8: sra         $v0, $a0, 31
    ctx->r2 = S32(SIGNED(ctx->r4) >> 31);
    // 0x002544DC: mfhi        $t0
    ctx->r8 = hi;
    // 0x002544E0: sra         $v1, $t0, 3
    ctx->r3 = S32(SIGNED(ctx->r8) >> 3);
    // 0x002544E4: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x002544E8: bgtzl       $v1, L_002544F0
    if (SIGNED(ctx->r3) > 0) {
        // 0x002544EC: addu        $s1, $v1, $zero
        ctx->r17 = ADD32(ctx->r3, 0);
            goto L_002544F0;
    }
    goto skip_0;
    // 0x002544EC: addu        $s1, $v1, $zero
    ctx->r17 = ADD32(ctx->r3, 0);
    skip_0:
L_002544F0:
    // 0x002544F0: lw          $v0, 0xBEC($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XBEC);
    // 0x002544F4: bne         $v0, $zero, L_00254518
    if (ctx->r2 != 0) {
        // 0x002544F8: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_00254518;
    }
    // 0x002544F8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x002544FC: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x00254500: lbu         $v0, -0x550F($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X550F);
    // 0x00254504: bne         $v0, $zero, L_0025451C
    if (ctx->r2 != 0) {
        // 0x00254508: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_0025451C;
    }
    // 0x00254508: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0025450C: jal         0x0027580C
    // 0x00254510: addiu       $a0, $zero, 0x164
    ctx->r4 = ADD32(0, 0X164);
    func_0027580C(rdram, ctx);
        goto after_1;
    // 0x00254510: addiu       $a0, $zero, 0x164
    ctx->r4 = ADD32(0, 0X164);
    after_1:
    // 0x00254514: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_00254518:
    // 0x00254518: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_0025451C:
    // 0x0025451C: sw          $v0, 0xBEC($s0)
    MEM_W(0XBEC, ctx->r16) = ctx->r2;
    // 0x00254520: addiu       $v0, $zero, 0x1C
    ctx->r2 = ADD32(0, 0X1C);
    // 0x00254524: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x00254528: sll         $a2, $s1, 8
    ctx->r6 = S32(ctx->r17 << 8);
    // 0x0025452C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x00254530: jal         0x00249358
    // 0x00254534: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    func_00249358(rdram, ctx);
        goto after_2;
    // 0x00254534: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    after_2:
    // 0x00254538: lwc1        $f0, 0xBE4($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0XBE4);
    // 0x0025453C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00254540: lwc1        $f1, 0x7110($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X7110);
    // 0x00254544: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x00254548: swc1        $f0, 0xBE4($s0)
    MEM_W(0XBE4, ctx->r16) = ctx->f0.u32l;
L_0025454C:
    // 0x0025454C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x00254550: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x00254554: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x00254558: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x0025455C: jr          $ra
    // 0x00254560: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x00254560: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_0026BFB4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0026BFB4: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x0026BFB8: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x0026BFBC: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x0026BFC0: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x0026BFC4: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x0026BFC8: bne         $s0, $zero, L_0026BFF0
    if (ctx->r16 != 0) {
        // 0x0026BFCC: sw          $ra, 0x38($sp)
        MEM_W(0X38, ctx->r29) = ctx->r31;
            goto L_0026BFF0;
    }
    // 0x0026BFCC: sw          $ra, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r31;
    // 0x0026BFD0: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0026BFD4: lwc1        $f0, -0x8000($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X8000);
    // 0x0026BFD8: lui         $v0, 0x800F
    ctx->r2 = S32(0X800F << 16);
    // 0x0026BFDC: addiu       $v0, $v0, 0x2000
    ctx->r2 = ADD32(ctx->r2, 0X2000);
    // 0x0026BFE0: sw          $zero, 0x0($v0)
    MEM_W(0X0, ctx->r2) = 0;
    // 0x0026BFE4: sw          $zero, 0x8($v0)
    MEM_W(0X8, ctx->r2) = 0;
    // 0x0026BFE8: j           L_0026C0A0
    // 0x0026BFEC: swc1        $f0, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f0.u32l;
        goto L_0026C0A0;
    // 0x0026BFEC: swc1        $f0, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f0.u32l;
L_0026BFF0:
    // 0x0026BFF0: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0026BFF4: lw          $v0, 0x2600($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2600);
    // 0x0026BFF8: beq         $s0, $v0, L_0026C0A0
    if (ctx->r16 == ctx->r2) {
        // 0x0026BFFC: addiu       $a1, $sp, 0x20
        ctx->r5 = ADD32(ctx->r29, 0X20);
            goto L_0026C0A0;
    }
    // 0x0026BFFC: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x0026C000: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
    // 0x0026C004: lw          $v1, 0x4($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X4);
    // 0x0026C008: lwc1        $f0, 0x0($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X0);
    // 0x0026C00C: lwc1        $f1, 0x0($v1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r3, 0X0);
    // 0x0026C010: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x0026C014: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    // 0x0026C018: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
    // 0x0026C01C: lw          $v1, 0x4($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X4);
    // 0x0026C020: lwc1        $f0, 0xC($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0XC);
    // 0x0026C024: lwc1        $f1, 0xC($v1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r3, 0XC);
    // 0x0026C028: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x0026C02C: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    // 0x0026C030: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
    // 0x0026C034: lw          $v1, 0x4($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X4);
    // 0x0026C038: lwc1        $f0, 0x8($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X8);
    // 0x0026C03C: lwc1        $f1, 0x8($v1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r3, 0X8);
    // 0x0026C040: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x0026C044: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    // 0x0026C048: lw          $v0, 0xC($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC);
    // 0x0026C04C: lw          $v1, 0x8($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X8);
    // 0x0026C050: lwc1        $f0, 0x0($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X0);
    // 0x0026C054: lwc1        $f1, 0x0($v1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r3, 0X0);
    // 0x0026C058: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x0026C05C: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    // 0x0026C060: lw          $v0, 0xC($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC);
    // 0x0026C064: lw          $v1, 0x8($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X8);
    // 0x0026C068: lwc1        $f0, 0xC($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0XC);
    // 0x0026C06C: lwc1        $f1, 0xC($v1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r3, 0XC);
    // 0x0026C070: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x0026C074: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x0026C078: lw          $v0, 0xC($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC);
    // 0x0026C07C: lw          $v1, 0x8($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X8);
    // 0x0026C080: lwc1        $f0, 0x8($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X8);
    // 0x0026C084: lwc1        $f1, 0x8($v1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r3, 0X8);
    // 0x0026C088: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x0026C08C: addiu       $a0, $a0, 0x2000
    ctx->r4 = ADD32(ctx->r4, 0X2000);
    // 0x0026C090: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x0026C094: addiu       $a2, $sp, 0x10
    ctx->r6 = ADD32(ctx->r29, 0X10);
    // 0x0026C098: jal         0x0020EFDC
    // 0x0026C09C: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    func_0020EFDC(rdram, ctx);
        goto after_0;
    // 0x0026C09C: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    after_0:
L_0026C0A0:
    // 0x0026C0A0: addu        $v0, $s1, $zero
    ctx->r2 = ADD32(ctx->r17, 0);
    // 0x0026C0A4: lui         $t2, 0x800F
    ctx->r10 = S32(0X800F << 16);
    // 0x0026C0A8: addiu       $t2, $t2, 0x2000
    ctx->r10 = ADD32(ctx->r10, 0X2000);
    // 0x0026C0AC: lw          $a3, 0x0($t2)
    ctx->r7 = MEM_W(ctx->r10, 0X0);
    // 0x0026C0B0: lw          $t0, 0x4($t2)
    ctx->r8 = MEM_W(ctx->r10, 0X4);
    // 0x0026C0B4: lw          $t1, 0x8($t2)
    ctx->r9 = MEM_W(ctx->r10, 0X8);
    // 0x0026C0B8: sw          $a3, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r7;
    // 0x0026C0BC: sw          $t0, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->r8;
    // 0x0026C0C0: sw          $t1, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->r9;
    // 0x0026C0C4: lw          $ra, 0x38($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X38);
    // 0x0026C0C8: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x0026C0CC: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0026C0D0: sw          $s0, 0x2600($at)
    MEM_W(0X2600, ctx->r1) = ctx->r16;
    // 0x0026C0D4: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x0026C0D8: jr          $ra
    // 0x0026C0DC: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x0026C0DC: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_0042DA60(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0042DA60: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x0042DA64: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x0042DA68: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x0042DA6C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x0042DA70: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x0042DA74: sw          $s5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r21;
    // 0x0042DA78: addu        $s5, $a2, $zero
    ctx->r21 = ADD32(ctx->r6, 0);
    // 0x0042DA7C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x0042DA80: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x0042DA84: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x0042DA88: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x0042DA8C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0042DA90: jal         0x0021E6AC
    // 0x0042DA94: sw          $s2, 0x1A8($s2)
    MEM_W(0X1A8, ctx->r18) = ctx->r18;
    func_0021E6AC(rdram, ctx);
        goto after_0;
    // 0x0042DA94: sw          $s2, 0x1A8($s2)
    MEM_W(0X1A8, ctx->r18) = ctx->r18;
    after_0:
    // 0x0042DA98: lui         $v1, 0x10
    ctx->r3 = S32(0X10 << 16);
    // 0x0042DA9C: lw          $v0, 0xD4($s2)
    ctx->r2 = MEM_W(ctx->r18, 0XD4);
    // 0x0042DAA0: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x0042DAA4: addiu       $a0, $a0, -0x550F
    ctx->r4 = ADD32(ctx->r4, -0X550F);
    // 0x0042DAA8: sw          $s2, 0x1A8($s2)
    MEM_W(0X1A8, ctx->r18) = ctx->r18;
    // 0x0042DAAC: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x0042DAB0: lui         $v1, 0x1
    ctx->r3 = S32(0X1 << 16);
    // 0x0042DAB4: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x0042DAB8: lui         $v1, 0x100
    ctx->r3 = S32(0X100 << 16);
    // 0x0042DABC: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x0042DAC0: lui         $v1, 0x200
    ctx->r3 = S32(0X200 << 16);
    // 0x0042DAC4: or          $v1, $v0, $v1
    ctx->r3 = ctx->r2 | ctx->r3;
    // 0x0042DAC8: sw          $v1, 0xD4($s2)
    MEM_W(0XD4, ctx->r18) = ctx->r3;
    // 0x0042DACC: lbu         $v0, 0x0($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X0);
    // 0x0042DAD0: bne         $v0, $zero, L_0042DAE0
    if (ctx->r2 != 0) {
        // 0x0042DAD4: lui         $v0, 0x1000
        ctx->r2 = S32(0X1000 << 16);
            goto L_0042DAE0;
    }
    // 0x0042DAD4: lui         $v0, 0x1000
    ctx->r2 = S32(0X1000 << 16);
    // 0x0042DAD8: or          $v0, $v1, $v0
    ctx->r2 = ctx->r3 | ctx->r2;
    // 0x0042DADC: sw          $v0, 0xD4($s2)
    MEM_W(0XD4, ctx->r18) = ctx->r2;
L_0042DAE0:
    // 0x0042DAE0: lui         $v0, 0x22
    ctx->r2 = S32(0X22 << 16);
    // 0x0042DAE4: addiu       $v0, $v0, -0x17C0
    ctx->r2 = ADD32(ctx->r2, -0X17C0);
    // 0x0042DAE8: sw          $v0, 0x244($s2)
    MEM_W(0X244, ctx->r18) = ctx->r2;
    // 0x0042DAEC: lui         $v0, 0x25
    ctx->r2 = S32(0X25 << 16);
    // 0x0042DAF0: addiu       $v0, $v0, 0x6738
    ctx->r2 = ADD32(ctx->r2, 0X6738);
    // 0x0042DAF4: lui         $s4, 0x24
    ctx->r20 = S32(0X24 << 16);
    // 0x0042DAF8: addiu       $s4, $s4, 0x7C10
    ctx->r20 = ADD32(ctx->r20, 0X7C10);
    // 0x0042DAFC: lui         $s3, 0x25
    ctx->r19 = S32(0X25 << 16);
    // 0x0042DB00: addiu       $s3, $s3, 0x689C
    ctx->r19 = ADD32(ctx->r19, 0X689C);
    // 0x0042DB04: sw          $v0, 0x248($s2)
    MEM_W(0X248, ctx->r18) = ctx->r2;
    // 0x0042DB08: sw          $s4, 0x238($s2)
    MEM_W(0X238, ctx->r18) = ctx->r20;
    // 0x0042DB0C: sw          $s3, 0x240($s2)
    MEM_W(0X240, ctx->r18) = ctx->r19;
    // 0x0042DB10: lbu         $v0, 0x0($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X0);
    // 0x0042DB14: beq         $v0, $zero, L_0042DB28
    if (ctx->r2 == 0) {
        // 0x0042DB18: addiu       $s0, $s2, 0x288
        ctx->r16 = ADD32(ctx->r18, 0X288);
            goto L_0042DB28;
    }
    // 0x0042DB18: addiu       $s0, $s2, 0x288
    ctx->r16 = ADD32(ctx->r18, 0X288);
    // 0x0042DB1C: lui         $v0, 0x24
    ctx->r2 = S32(0X24 << 16);
    // 0x0042DB20: addiu       $v0, $v0, 0x7FB0
    ctx->r2 = ADD32(ctx->r2, 0X7FB0);
    // 0x0042DB24: sw          $v0, 0x234($s2)
    MEM_W(0X234, ctx->r18) = ctx->r2;
L_0042DB28:
    // 0x0042DB28: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0042DB2C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x0042DB30: addu        $a2, $s5, $zero
    ctx->r6 = ADD32(ctx->r21, 0);
    // 0x0042DB34: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // turok2: reconnected split function: a stray ELF symbol at 0x0042DB38 ended
    // this function early, leaving it without its epilogue. On the
    // hardware execution simply continues into the next instruction.
    func_0042DB38(rdram, ctx);
;}
RECOMP_FUNC void func_00253DE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00253DE0: lui         $v0, 0x8011
    ctx->r2 = S32(0X8011 << 16);
    // 0x00253DE4: lw          $v0, 0x28($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X28);
    // 0x00253DE8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x00253DEC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x00253DF0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x00253DF4: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x00253DF8: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x00253DFC: bne         $v0, $zero, L_00253E54
    if (ctx->r2 != 0) {
        // 0x00253E00: sw          $ra, 0x20($sp)
        MEM_W(0X20, ctx->r29) = ctx->r31;
            goto L_00253E54;
    }
    // 0x00253E00: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x00253E04: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x00253E08: lw          $v0, -0x535C($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X535C);
    // 0x00253E0C: bne         $v0, $zero, L_00253E54
    if (ctx->r2 != 0) {
        // 0x00253E10: nop
    
            goto L_00253E54;
    }
    // 0x00253E10: nop

    // 0x00253E14: jal         0x00275F7C
    // 0x00253E18: nop

    func_00275F7C(rdram, ctx);
        goto after_0;
    // 0x00253E18: nop

    after_0:
    // 0x00253E1C: lw          $a1, 0x1288($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X1288);
    // 0x00253E20: jal         0x00275D34
    // 0x00253E24: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    func_00275D34(rdram, ctx);
        goto after_1;
    // 0x00253E24: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    after_1:
    // 0x00253E28: jal         0x00275F7C
    // 0x00253E2C: nop

    func_00275F7C(rdram, ctx);
        goto after_2;
    // 0x00253E2C: nop

    after_2:
    // 0x00253E30: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x00253E34: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x00253E38: lw          $a2, 0x51C($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X51C);
    // 0x00253E3C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x00253E40: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x00253E44: addiu       $a2, $a2, 0x114
    ctx->r6 = ADD32(ctx->r6, 0X114);
    // 0x00253E48: jal         0x00275C6C
    // 0x00253E4C: addu        $a3, $a2, $zero
    ctx->r7 = ADD32(ctx->r6, 0);
    func_00275C6C(rdram, ctx);
        goto after_3;
    // 0x00253E4C: addu        $a3, $a2, $zero
    ctx->r7 = ADD32(ctx->r6, 0);
    after_3:
    // 0x00253E50: sw          $v0, 0x1288($s0)
    MEM_W(0X1288, ctx->r16) = ctx->r2;
L_00253E54:
    // 0x00253E54: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x00253E58: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x00253E5C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x00253E60: jr          $ra
    // 0x00253E64: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x00253E64: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_00285CD4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00285CD4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00285CD8: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00285CDC: sw          $v0, 0x6CF8($at)
    MEM_W(0X6CF8, ctx->r1) = ctx->r2;
    // 0x00285CE0: jr          $ra
    // 0x00285CE4: nop

    return;
    // 0x00285CE4: nop

;}
RECOMP_FUNC void func_0020F3C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0020F3C0: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x0020F3C4: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x0020F3C8: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x0020F3CC: sw          $ra, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r31;
    // 0x0020F3D0: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x0020F3D4: sdc1        $f20, 0x40($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X40, ctx->r29);
    // 0x0020F3D8: lwc1        $f5, 0x0($s0)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r16, 0X0);
    // 0x0020F3DC: lwc1        $f4, 0x0($a2)
    ctx->f4.u32l = MEM_W(ctx->r6, 0X0);
    // 0x0020F3E0: mul.s       $f2, $f5, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f5.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f2.fl = MUL_S(ctx->f5.fl, ctx->f4.fl);
    // 0x0020F3E4: lwc1        $f3, 0x4($s0)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r16, 0X4);
    // 0x0020F3E8: lwc1        $f0, 0x4($a2)
    ctx->f0.u32l = MEM_W(ctx->r6, 0X4);
    // 0x0020F3EC: mul.s       $f3, $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f3.fl = MUL_S(ctx->f3.fl, ctx->f0.fl);
    // 0x0020F3F0: lwc1        $f1, 0x8($a2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r6, 0X8);
    // 0x0020F3F4: lwc1        $f0, 0x8($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X8);
    // 0x0020F3F8: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0020F3FC: add.s       $f2, $f2, $f3
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f3.fl;
    // 0x0020F400: add.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f0.fl;
    // 0x0020F404: mul.s       $f4, $f2, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f4.fl = MUL_S(ctx->f2.fl, ctx->f4.fl);
    // 0x0020F408: sub.s       $f5, $f5, $f4
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f5.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f5.fl = ctx->f5.fl - ctx->f4.fl;
    // 0x0020F40C: swc1        $f5, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(5 - 1) * 2];
    // 0x0020F410: lwc1        $f1, 0x4($a2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r6, 0X4);
    // 0x0020F414: mul.s       $f1, $f2, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = MUL_S(ctx->f2.fl, ctx->f1.fl);
    // 0x0020F418: lwc1        $f0, 0x4($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X4);
    // 0x0020F41C: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x0020F420: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x0020F424: lwc1        $f0, 0x8($a2)
    ctx->f0.u32l = MEM_W(ctx->r6, 0X8);
    // 0x0020F428: mul.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x0020F42C: lwc1        $f0, 0x8($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X8);
    // 0x0020F430: sub.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f2.fl;
    // 0x0020F434: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x0020F438: lw          $v1, 0x20($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X20);
    // 0x0020F43C: lw          $a3, 0x24($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X24);
    // 0x0020F440: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x0020F444: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    // 0x0020F448: sw          $a3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r7;
    // 0x0020F44C: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x0020F450: lwc1        $f1, 0x10($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x0020F454: mul.s       $f1, $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f1.fl);
    // 0x0020F458: lwc1        $f0, 0x14($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X14);
    // 0x0020F45C: mul.s       $f0, $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x0020F460: lwc1        $f12, 0x18($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X18);
    // 0x0020F464: mul.s       $f12, $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x0020F468: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x0020F46C: add.s       $f12, $f1, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = ctx->f1.fl + ctx->f12.fl;
    // 0x0020F470: jal         0x00298470
    // 0x0020F474: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    func_00298470(rdram, ctx);
        goto after_0;
    // 0x0020F474: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    after_0:
    // 0x0020F478: mtc1        $zero, $f1
    ctx->f_odd[(1 - 1) * 2] = 0;
    // 0x0020F47C: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x0020F480: c.eq.s      $f20, $f1
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f20.fl == ctx->f1.fl;
    // 0x0020F484: nop

    // 0x0020F488: bc1t        L_0020F4E0
    if (c1cs) {
        // 0x0020F48C: addu        $v0, $s1, $zero
        ctx->r2 = ADD32(ctx->r17, 0);
            goto L_0020F4E0;
    }
    // 0x0020F48C: addu        $v0, $s1, $zero
    ctx->r2 = ADD32(ctx->r17, 0);
    // 0x0020F490: lwc1        $f1, 0x0($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X0);
    // 0x0020F494: mul.s       $f1, $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f1.fl);
    // 0x0020F498: lwc1        $f0, 0x4($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X4);
    // 0x0020F49C: mul.s       $f0, $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x0020F4A0: lwc1        $f12, 0x8($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X8);
    // 0x0020F4A4: mul.s       $f12, $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x0020F4A8: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x0020F4AC: jal         0x00298470
    // 0x0020F4B0: add.s       $f12, $f1, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = ctx->f1.fl + ctx->f12.fl;
    func_00298470(rdram, ctx);
        goto after_1;
    // 0x0020F4B0: add.s       $f12, $f1, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = ctx->f1.fl + ctx->f12.fl;
    after_1:
    // 0x0020F4B4: lwc1        $f3, 0x10($sp)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x0020F4B8: div.s       $f0, $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f0.fl = DIV_S(ctx->f0.fl, ctx->f20.fl);
    // 0x0020F4BC: mul.s       $f3, $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f3.fl = MUL_S(ctx->f3.fl, ctx->f0.fl);
    // 0x0020F4C0: lwc1        $f2, 0x14($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X14);
    // 0x0020F4C4: mul.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x0020F4C8: lwc1        $f1, 0x18($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x0020F4CC: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x0020F4D0: swc1        $f3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(3 - 1) * 2];
    // 0x0020F4D4: swc1        $f2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f2.u32l;
    // 0x0020F4D8: swc1        $f1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    // 0x0020F4DC: addu        $v0, $s1, $zero
    ctx->r2 = ADD32(ctx->r17, 0);
L_0020F4E0:
    // 0x0020F4E0: lw          $v1, 0x10($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X10);
    // 0x0020F4E4: lw          $a3, 0x14($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X14);
    // 0x0020F4E8: lw          $t0, 0x18($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X18);
    // 0x0020F4EC: sw          $v1, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r3;
    // 0x0020F4F0: sw          $a3, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->r7;
    // 0x0020F4F4: sw          $t0, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->r8;
    // 0x0020F4F8: lw          $ra, 0x38($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X38);
    // 0x0020F4FC: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x0020F500: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x0020F504: ldc1        $f20, 0x40($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X40);
    // 0x0020F508: jr          $ra
    // 0x0020F50C: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x0020F50C: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_00218AB4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00218AB4: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x00218AB8: addu        $a2, $a1, $zero
    ctx->r6 = ADD32(ctx->r5, 0);
    // 0x00218ABC: addu        $v1, $a1, $zero
    ctx->r3 = ADD32(ctx->r5, 0);
    // 0x00218AC0: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x00218AC4: sllv        $v0, $a3, $v1
    ctx->r2 = S32(ctx->r7 << (ctx->r3 & 31));
L_00218AC8:
    // 0x00218AC8: and         $v0, $a0, $v0
    ctx->r2 = ctx->r4 & ctx->r2;
    // 0x00218ACC: beql        $v0, $zero, L_00218AE0
    if (ctx->r2 == 0) {
        // 0x00218AD0: addiu       $v1, $v1, 0x1
        ctx->r3 = ADD32(ctx->r3, 0X1);
            goto L_00218AE0;
    }
    goto skip_0;
    // 0x00218AD0: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    skip_0:
    // 0x00218AD4: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x00218AD8: addu        $a2, $v1, $zero
    ctx->r6 = ADD32(ctx->r3, 0);
    // 0x00218ADC: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
L_00218AE0:
    // 0x00218AE0: sltiu       $v0, $v1, 0x20
    ctx->r2 = ctx->r3 < 0X20 ? 1 : 0;
    // 0x00218AE4: bne         $v0, $zero, L_00218AC8
    if (ctx->r2 != 0) {
        // 0x00218AE8: sllv        $v0, $a3, $v1
        ctx->r2 = S32(ctx->r7 << (ctx->r3 & 31));
            goto L_00218AC8;
    }
    // 0x00218AE8: sllv        $v0, $a3, $v1
    ctx->r2 = S32(ctx->r7 << (ctx->r3 & 31));
    // 0x00218AEC: sltiu       $v0, $a1, 0x2
    ctx->r2 = ctx->r5 < 0X2 ? 1 : 0;
    // 0x00218AF0: bne         $v0, $zero, L_00218B00
    if (ctx->r2 != 0) {
            // 0x00218AF4: addu        $v0, $a2, $zero
    ctx->r2 = ADD32(ctx->r6, 0);
    func_00218B00(rdram, ctx);
    return;
    }
    // 0x00218AF4: addu        $v0, $a2, $zero
    ctx->r2 = ADD32(ctx->r6, 0);
    // 0x00218AF8: jr          $ra
    // 0x00218AFC: addiu       $v0, $a2, 0x1
    ctx->r2 = ADD32(ctx->r6, 0X1);
    return;
    // 0x00218AFC: addiu       $v0, $a2, 0x1
    ctx->r2 = ADD32(ctx->r6, 0X1);
;}
RECOMP_FUNC void func_004276F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004276F0: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x004276F4: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x004276F8: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x004276FC: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x00427700: addu        $s2, $a1, $zero
    ctx->r18 = ADD32(ctx->r5, 0);
    // 0x00427704: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x00427708: addu        $s3, $a2, $zero
    ctx->r19 = ADD32(ctx->r6, 0);
    // 0x0042770C: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x00427710: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x00427714: jal         0x00429EC4
    // 0x00427718: sb          $a3, 0x65($s1)
    MEM_B(0X65, ctx->r17) = ctx->r7;
    func_00429EC4(rdram, ctx);
        goto after_0;
    // 0x00427718: sb          $a3, 0x65($s1)
    MEM_B(0X65, ctx->r17) = ctx->r7;
    after_0:
    // 0x0042771C: bne         $v0, $zero, L_00427764
    if (ctx->r2 != 0) {
        // 0x00427720: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_00427764;
    }
    // 0x00427720: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x00427724: sll         $s2, $s2, 3
    ctx->r18 = S32(ctx->r18 << 3);
    // 0x00427728: addu        $a2, $s2, $s0
    ctx->r6 = ADD32(ctx->r18, ctx->r16);
L_0042772C:
    // 0x0042772C: andi        $a2, $a2, 0xFFFF
    ctx->r6 = ctx->r6 & 0XFFFF;
    // 0x00427730: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x00427734: lw          $a0, 0x4($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X4);
    // 0x00427738: lw          $a1, 0x8($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X8);
    // 0x0042773C: jal         0x00299A40
    // 0x00427740: addu        $a3, $s3, $zero
    ctx->r7 = ADD32(ctx->r19, 0);
    func_00299A40(rdram, ctx);
        goto after_1;
    // 0x00427740: addu        $a3, $s3, $zero
    ctx->r7 = ADD32(ctx->r19, 0);
    after_1:
    // 0x00427744: bne         $v0, $zero, L_00427758
    if (ctx->r2 != 0) {
        // 0x00427748: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_00427758;
    }
    // 0x00427748: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x0042774C: slti        $v0, $s0, 0x8
    ctx->r2 = SIGNED(ctx->r16) < 0X8 ? 1 : 0;
    // 0x00427750: bne         $v0, $zero, L_0042772C
    if (ctx->r2 != 0) {
        // 0x00427754: addu        $a2, $s2, $s0
        ctx->r6 = ADD32(ctx->r18, ctx->r16);
            goto L_0042772C;
    }
    // 0x00427754: addu        $a2, $s2, $s0
    ctx->r6 = ADD32(ctx->r18, ctx->r16);
L_00427758:
    // 0x00427758: sb          $zero, 0x65($s1)
    MEM_B(0X65, ctx->r17) = 0;
    // 0x0042775C: jal         0x00429EC4
    // 0x00427760: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_00429EC4(rdram, ctx);
        goto after_2;
    // 0x00427760: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_2:
L_00427764:
    // 0x00427764: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x00427768: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x0042776C: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x00427770: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x00427774: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x00427778: jr          $ra
    // 0x0042777C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x0042777C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_0028B048(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0028B048: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0028B04C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0028B050: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x0028B054: beq         $s0, $zero, L_0028B094
    if (ctx->r16 == 0) {
        // 0x0028B058: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_0028B094;
    }
    // 0x0028B058: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x0028B05C: lw          $v1, 0xC($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XC);
    // 0x0028B060: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x0028B064: lw          $v0, -0x4F60($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X4F60);
    // 0x0028B068: beq         $v1, $v0, L_0028B098
    if (ctx->r3 == ctx->r2) {
        // 0x0028B06C: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_0028B098;
    }
    // 0x0028B06C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x0028B070: jal         0x0029A6E0
    // 0x0028B074: nop

    func_0029A6E0(rdram, ctx);
        goto after_0;
    // 0x0028B074: nop

    after_0:
    // 0x0028B078: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    // 0x0028B07C: beq         $a0, $v0, L_0028B098
    if (ctx->r4 == ctx->r2) {
        // 0x0028B080: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_0028B098;
    }
    // 0x0028B080: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x0028B084: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x0028B088: lw          $v1, -0x4F68($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X4F68);
    // 0x0028B08C: bne         $a0, $v1, L_0028B098
    if (ctx->r4 != ctx->r3) {
        // 0x0028B090: addu        $v0, $s0, $zero
        ctx->r2 = ADD32(ctx->r16, 0);
            goto L_0028B098;
    }
    // 0x0028B090: addu        $v0, $s0, $zero
    ctx->r2 = ADD32(ctx->r16, 0);
L_0028B094:
    // 0x0028B094: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_0028B098:
    // 0x0028B098: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x0028B09C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0028B0A0: jr          $ra
    // 0x0028B0A4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0028B0A4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0045AD1C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0045AD1C: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x0045AD20: lw          $v0, 0x990($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X990);
    // 0x0045AD24: beq         $v0, $zero, L_0045AD38
    if (ctx->r2 == 0) {
        // 0x0045AD28: nop
    
            goto L_0045AD38;
    }
    // 0x0045AD28: nop

    // 0x0045AD2C: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0045AD30: addiu       $v0, $v0, 0x490C
    ctx->r2 = ADD32(ctx->r2, 0X490C);
    // 0x0045AD34: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_0045AD38:
    // 0x0045AD38: jr          $ra
    // 0x0045AD3C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x0045AD3C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void func_002A3088(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
;}
RECOMP_FUNC void func_0021E374(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0021E374: addiu       $sp, $sp, -0xA8
    ctx->r29 = ADD32(ctx->r29, -0XA8);
    // 0x0021E378: addu        $t0, $a0, $zero
    ctx->r8 = ADD32(ctx->r4, 0);
    // 0x0021E37C: sw          $ra, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->r31;
    // 0x0021E380: sw          $fp, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->r30;
    // 0x0021E384: sw          $s7, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r23;
    // 0x0021E388: sw          $s6, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r22;
    // 0x0021E38C: sw          $s5, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r21;
    // 0x0021E390: sw          $s4, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r20;
    // 0x0021E394: sw          $s3, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r19;
    // 0x0021E398: sw          $s2, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r18;
    // 0x0021E39C: sw          $s1, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r17;
    // 0x0021E3A0: sw          $s0, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r16;
    // 0x0021E3A4: sdc1        $f20, 0xA0($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0XA0, ctx->r29);
    // 0x0021E3A8: sw          $a0, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->r4;
    // 0x0021E3AC: sw          $a1, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->r5;
    // 0x0021E3B0: sw          $a2, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->r6;
    // 0x0021E3B4: sw          $a3, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->r7;
    // 0x0021E3B8: lw          $s0, 0x98($t0)
    ctx->r16 = MEM_W(ctx->r8, 0X98);
    // 0x0021E3BC: bne         $s0, $zero, L_0021E3D0
    if (ctx->r16 != 0) {
        // 0x0021E3C0: nop
    
            goto L_0021E3D0;
    }
    // 0x0021E3C0: nop

    // 0x0021E3C4: lw          $s0, 0x9C($t0)
    ctx->r16 = MEM_W(ctx->r8, 0X9C);
    // 0x0021E3C8: beq         $s0, $zero, L_0021E5A0
    if (ctx->r16 == 0) {
            // 0x0021E3CC: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    static_4_0021E5A0(rdram, ctx);
    return;
    }
    // 0x0021E3CC: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_0021E3D0:
    // 0x0021E3D0: lw          $a0, 0xA8($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XA8);
    // 0x0021E3D4: jal         0x0021F358
    // 0x0021E3D8: nop

    func_0021F358(rdram, ctx);
        goto after_0;
    // 0x0021E3D8: nop

    after_0:
    // 0x0021E3DC: bne         $v0, $zero, L_0021E3EC
    if (ctx->r2 != 0) {
        // 0x0021E3E0: sw          $v0, 0x70($sp)
        MEM_W(0X70, ctx->r29) = ctx->r2;
            goto L_0021E3EC;
    }
    // 0x0021E3E0: sw          $v0, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r2;
    // 0x0021E3E4: j           L_0021E5A0
    // 0x0021E3E8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    static_4_0021E5A0(rdram, ctx);
    return;
    // 0x0021E3E8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_0021E3EC:
    // 0x0021E3EC: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x0021E3F0: lw          $t1, 0x70($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X70);
    // 0x0021E3F4: addu        $s3, $zero, $zero
    ctx->r19 = ADD32(0, 0);
    // 0x0021E3F8: lw          $a0, 0x0($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X0);
    // 0x0021E3FC: jal         0x002017D4
    // 0x0021E400: addu        $s4, $s3, $zero
    ctx->r20 = ADD32(ctx->r19, 0);
    func_002017D4(rdram, ctx);
        goto after_1;
    // 0x0021E400: addu        $s4, $s3, $zero
    ctx->r20 = ADD32(ctx->r19, 0);
    after_1:
    // 0x0021E404: sw          $v0, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r2;
    // 0x0021E408: lw          $fp, 0x0($v0)
    ctx->r30 = MEM_W(ctx->r2, 0X0);
    // 0x0021E40C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0021E410: lwc1        $f20, 0x5CD8($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X5CD8);
    // 0x0021E414: blez        $fp, L_0021E51C
    if (SIGNED(ctx->r30) <= 0) {
            // 0x0021E418: nop

    static_4_0021E51C(rdram, ctx);
    return;
    }
    // 0x0021E418: nop

    // 0x0021E41C: addiu       $s7, $sp, 0x30
    ctx->r23 = ADD32(ctx->r29, 0X30);
    // 0x0021E420: addiu       $s6, $sp, 0x20
    ctx->r22 = ADD32(ctx->r29, 0X20);
    // 0x0021E424: addu        $s5, $s0, $zero
    ctx->r21 = ADD32(ctx->r16, 0);
    // 0x0021E428: lw          $a0, 0x74($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X74);
    // 0x0021E42C: jal         0x002017D4
    // 0x0021E430: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    func_002017D4(rdram, ctx);
        goto after_2;
    // 0x0021E430: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    after_2:
    // 0x0021E434: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x0021E438: jal         0x002017D4
    // 0x0021E43C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_002017D4(rdram, ctx);
        goto after_3;
    // 0x0021E43C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_3:
    // 0x0021E440: addu        $s2, $v0, $zero
    ctx->r18 = ADD32(ctx->r2, 0);
    // 0x0021E444: lw          $t2, 0xA8($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XA8);
    // 0x0021E448: lw          $v0, 0x6C($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X6C);
    // 0x0021E44C: lw          $v1, 0x14C($t2)
    ctx->r3 = MEM_W(ctx->r10, 0X14C);
    // 0x0021E450: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x0021E454: beql        $v0, $zero, L_0021E510
    if (ctx->r2 == 0) {
            // 0x0021E458: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    static_4_0021E510(rdram, ctx);
    return;
    }
    goto skip_0;
    // 0x0021E458: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    skip_0:
    // 0x0021E45C: lw          $t3, 0x0($s2)
    ctx->r11 = MEM_W(ctx->r18, 0X0);
    // 0x0021E460: lw          $t0, 0x4($s2)
    ctx->r8 = MEM_W(ctx->r18, 0X4);
    // 0x0021E464: lw          $t1, 0x8($s2)
    ctx->r9 = MEM_W(ctx->r18, 0X8);
    // 0x0021E468: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x0021E46C: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x0021E470: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    // 0x0021E474: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
    // 0x0021E478: addiu       $s0, $s2, 0xC
    ctx->r16 = ADD32(ctx->r18, 0XC);
L_0021E47C:
    // 0x0021E47C: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x0021E480: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x0021E484: jal         0x0020EEF8
    // 0x0021E488: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    func_0020EEF8(rdram, ctx);
        goto after_4;
    // 0x0021E488: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    after_4:
    // 0x0021E48C: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x0021E490: slti        $v0, $s1, 0x8
    ctx->r2 = SIGNED(ctx->r17) < 0X8 ? 1 : 0;
    // 0x0021E494: bne         $v0, $zero, L_0021E47C
    if (ctx->r2 != 0) {
        // 0x0021E498: addiu       $s0, $s0, 0xC
        ctx->r16 = ADD32(ctx->r16, 0XC);
            goto L_0021E47C;
    }
    // 0x0021E498: addiu       $s0, $s0, 0xC
    ctx->r16 = ADD32(ctx->r16, 0XC);
    // 0x0021E49C: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x0021E4A0: lui         $a2, 0x3E00
    ctx->r6 = S32(0X3E00 << 16);
    // 0x0021E4A4: jal         0x0020EF60
    // 0x0021E4A8: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    func_0020EF60(rdram, ctx);
        goto after_5;
    // 0x0021E4A8: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    after_5:
    // 0x0021E4AC: addu        $a0, $s7, $zero
    ctx->r4 = ADD32(ctx->r23, 0);
    // 0x0021E4B0: jal         0x0020D908
    // 0x0021E4B4: addu        $a1, $s5, $zero
    ctx->r5 = ADD32(ctx->r21, 0);
    func_0020D908(rdram, ctx);
        goto after_6;
    // 0x0021E4B4: addu        $a1, $s5, $zero
    ctx->r5 = ADD32(ctx->r21, 0);
    after_6:
    // 0x0021E4B8: addu        $a0, $s7, $zero
    ctx->r4 = ADD32(ctx->r23, 0);
    // 0x0021E4BC: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x0021E4C0: jal         0x0020F85C
    // 0x0021E4C4: addu        $a2, $s6, $zero
    ctx->r6 = ADD32(ctx->r22, 0);
    func_0020F85C(rdram, ctx);
        goto after_7;
    // 0x0021E4C4: addu        $a2, $s6, $zero
    ctx->r6 = ADD32(ctx->r22, 0);
    after_7:
    // 0x0021E4C8: addu        $a0, $s6, $zero
    ctx->r4 = ADD32(ctx->r22, 0);
    // 0x0021E4CC: addu        $a1, $s6, $zero
    ctx->r5 = ADD32(ctx->r22, 0);
    // 0x0021E4D0: jal         0x0020EF2C
    // 0x0021E4D4: addiu       $a2, $sp, 0xAC
    ctx->r6 = ADD32(ctx->r29, 0XAC);
    func_0020EF2C(rdram, ctx);
        goto after_8;
    // 0x0021E4D4: addiu       $a2, $sp, 0xAC
    ctx->r6 = ADD32(ctx->r29, 0XAC);
    after_8:
    // 0x0021E4D8: lwc1        $f2, 0x20($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X20);
    // 0x0021E4DC: mul.s       $f2, $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x0021E4E0: lwc1        $f1, 0x24($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X24);
    // 0x0021E4E4: mul.s       $f1, $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f1.fl);
    // 0x0021E4E8: lwc1        $f0, 0x28($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X28);
    // 0x0021E4EC: mul.s       $f0, $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x0021E4F0: add.s       $f2, $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f1.fl;
    // 0x0021E4F4: add.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f0.fl;
    // 0x0021E4F8: c.lt.s      $f2, $f20
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f2.fl < ctx->f20.fl;
    // 0x0021E4FC: nop

    // The ELF split at 0x0021E500 is not a return on N64 hardware.
    func_0021E500(rdram, ctx);
    return;
;}
RECOMP_FUNC void func_0041D414(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041D414: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0041D418: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0041D41C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x0041D420: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x0041D424: lw          $a1, 0x1C($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X1C);
    // 0x0041D428: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x0041D42C: addiu       $a0, $a0, -0x6790
    ctx->r4 = ADD32(ctx->r4, -0X6790);
    // 0x0041D430: jal         0x0025340C
    // 0x0041D434: nop

    func_0025340C(rdram, ctx);
        goto after_0;
    // 0x0041D434: nop

    after_0:
    // 0x0041D438: sll         $v1, $v0, 1
    ctx->r3 = S32(ctx->r2 << 1);
    // 0x0041D43C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x0041D440: sll         $a1, $v1, 3
    ctx->r5 = S32(ctx->r3 << 3);
    // 0x0041D444: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0041D448: addu        $at, $at, $a1
    ctx->r1 = ADD32(ctx->r1, ctx->r5);
    // 0x0041D44C: lw          $v1, 0x1FB8($at)
    ctx->r3 = MEM_W(ctx->r1, 0X1FB8);
    // 0x0041D450: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x0041D454: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0041D458: addu        $at, $at, $a1
    ctx->r1 = ADD32(ctx->r1, ctx->r5);
    // 0x0041D45C: sw          $zero, 0x1FB4($at)
    MEM_W(0X1FB4, ctx->r1) = 0;
    // 0x0041D460: beq         $v1, $v0, L_0041D4D4
    if (ctx->r3 == ctx->r2) {
        // 0x0041D464: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_0041D4D4;
    }
    // 0x0041D464: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x0041D468: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x0041D46C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0041D470: addu        $at, $at, $a1
    ctx->r1 = ADD32(ctx->r1, ctx->r5);
    // 0x0041D474: lw          $v1, 0x1FB0($at)
    ctx->r3 = MEM_W(ctx->r1, 0X1FB0);
    // 0x0041D478: lbu         $a0, 0x0($a0)
    ctx->r4 = MEM_BU(ctx->r4, 0X0);
    // 0x0041D47C: addu        $v1, $v1, $a1
    ctx->r3 = ADD32(ctx->r3, ctx->r5);
    // 0x0041D480: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0041D484: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x0041D488: sb          $a0, 0x1FBC($at)
    MEM_B(0X1FBC, ctx->r1) = ctx->r4;
    // 0x0041D48C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0041D490: addu        $at, $at, $a1
    ctx->r1 = ADD32(ctx->r1, ctx->r5);
    // 0x0041D494: lw          $v1, 0x1FB0($at)
    ctx->r3 = MEM_W(ctx->r1, 0X1FB0);
    // 0x0041D498: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0041D49C: addu        $at, $at, $a1
    ctx->r1 = ADD32(ctx->r1, ctx->r5);
    // 0x0041D4A0: lw          $a0, 0x1FB8($at)
    ctx->r4 = MEM_W(ctx->r1, 0X1FB8);
    // 0x0041D4A4: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x0041D4A8: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x0041D4AC: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0041D4B0: addu        $at, $at, $a1
    ctx->r1 = ADD32(ctx->r1, ctx->r5);
    // 0x0041D4B4: sw          $a0, 0x1FB8($at)
    MEM_W(0X1FB8, ctx->r1) = ctx->r4;
    // 0x0041D4B8: addu        $a0, $a0, $a1
    ctx->r4 = ADD32(ctx->r4, ctx->r5);
    // 0x0041D4BC: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0041D4C0: addu        $at, $at, $a1
    ctx->r1 = ADD32(ctx->r1, ctx->r5);
    // 0x0041D4C4: sw          $v1, 0x1FB0($at)
    MEM_W(0X1FB0, ctx->r1) = ctx->r3;
    // 0x0041D4C8: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0041D4CC: addu        $at, $at, $a0
    ctx->r1 = ADD32(ctx->r1, ctx->r4);
    // 0x0041D4D0: sb          $zero, 0x1FBC($at)
    MEM_B(0X1FBC, ctx->r1) = 0;
L_0041D4D4:
    // 0x0041D4D4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x0041D4D8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0041D4DC: jr          $ra
    // 0x0041D4E0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0041D4E0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0026C7A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0026C7A8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0026C7AC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0026C7B0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x0026C7B4: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x0026C7B8: addiu       $a0, $a0, 0x7078
    ctx->r4 = ADD32(ctx->r4, 0X7078);
    // 0x0026C7BC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x0026C7C0: jal         0x0022425C
    // 0x0026C7C4: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_0022425C(rdram, ctx);
        goto after_0;
    // 0x0026C7C4: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_0:
    // 0x0026C7C8: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x0026C7CC: beq         $v1, $zero, L_0026C7E0
    if (ctx->r3 == 0) {
        // 0x0026C7D0: nop
    
            goto L_0026C7E0;
    }
    // 0x0026C7D0: nop

    // 0x0026C7D4: lw          $v0, 0x44($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X44);
    // 0x0026C7D8: ori         $v0, $v0, 0x4000
    ctx->r2 = ctx->r2 | 0X4000;
    // 0x0026C7DC: sw          $v0, 0x44($v1)
    MEM_W(0X44, ctx->r3) = ctx->r2;
L_0026C7E0:
    // 0x0026C7E0: beq         $s0, $zero, L_0026C7F4
    if (ctx->r16 == 0) {
        // 0x0026C7E4: nop
    
            goto L_0026C7F4;
    }
    // 0x0026C7E4: nop

    // 0x0026C7E8: lhu         $a1, 0x0($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X0);
    // 0x0026C7EC: jal         0x0026C9B8
    // 0x0026C7F0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_0026C9B8(rdram, ctx);
        goto after_1;
    // 0x0026C7F0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
L_0026C7F4:
    // 0x0026C7F4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x0026C7F8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0026C7FC: jr          $ra
    // 0x0026C800: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0026C800: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00288DD0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00288DD0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00288DD4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00288DD8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x00288DDC: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00288DE0: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x00288DE4: lui         $a0, 0x2
    ctx->r4 = S32(0X2 << 16);
    // 0x00288DE8: ori         $a0, $a0, 0x2C00
    ctx->r4 = ctx->r4 | 0X2C00;
    // 0x00288DEC: addu        $a0, $s0, $a0
    ctx->r4 = ADD32(ctx->r16, ctx->r4);
    // 0x00288DF0: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x00288DF4: jal         0x0042FBA4
    // 0x00288DF8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_0042FBA4(rdram, ctx);
        goto after_0;
    // 0x00288DF8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x00288DFC: lui         $a0, 0x2
    ctx->r4 = S32(0X2 << 16);
    // 0x00288E00: ori         $a0, $a0, 0x2BC0
    ctx->r4 = ctx->r4 | 0X2BC0;
    // 0x00288E04: addu        $a0, $s0, $a0
    ctx->r4 = ADD32(ctx->r16, ctx->r4);
    // 0x00288E08: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x00288E0C: jal         0x0042E5AC
    // 0x00288E10: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_0042E5AC(rdram, ctx);
        goto after_1;
    // 0x00288E10: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_1:
    // 0x00288E14: jal         0x00412438
    // 0x00288E18: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_00412438(rdram, ctx);
        goto after_2;
    // 0x00288E18: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_2:
    // 0x00288E1C: lui         $s0, 0x800F
    ctx->r16 = S32(0X800F << 16);
    // 0x00288E20: addiu       $s0, $s0, 0x7078
    ctx->r16 = ADD32(ctx->r16, 0X7078);
    // 0x00288E24: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00288E28: nor         $a1, $zero, $v0
    ctx->r5 = ~(0 | ctx->r2);
    // 0x00288E2C: jal         0x0042C700
    // 0x00288E30: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_0042C700(rdram, ctx);
        goto after_3;
    // 0x00288E30: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_3:
    // 0x00288E34: jal         0x0042C418
    // 0x00288E38: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_0042C418(rdram, ctx);
        goto after_4;
    // 0x00288E38: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
    // 0x00288E3C: jal         0x0042C46C
    // 0x00288E40: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_0042C46C(rdram, ctx);
        goto after_5;
    // 0x00288E40: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_5:
    // 0x00288E44: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x00288E48: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00288E4C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00288E50: jr          $ra
    // 0x00288E54: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00288E54: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_0027B0C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0027B0C0: lui         $v0, 0x8011
    ctx->r2 = S32(0X8011 << 16);
    // 0x0027B0C4: addiu       $v0, $v0, 0x1A8
    ctx->r2 = ADD32(ctx->r2, 0X1A8);
    // 0x0027B0C8: swc1        $f12, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f12.u32l;
    // 0x0027B0CC: jr          $ra
    // 0x0027B0D0: swc1        $f14, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f14.u32l;
    return;
    // 0x0027B0D0: swc1        $f14, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f14.u32l;
;}
RECOMP_FUNC void func_0025AB28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0025AB28: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0025AB2C: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x0025AB30: lw          $v0, 0x14($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X14);
    // 0x0025AB34: lhu         $a3, 0x7C($v0)
    ctx->r7 = MEM_HU(ctx->r2, 0X7C);
    // 0x0025AB38: lui         $a2, 0x800B
    ctx->r6 = S32(0X800B << 16);
    // 0x0025AB3C: addiu       $a2, $a2, 0x450
    ctx->r6 = ADD32(ctx->r6, 0X450);
    // 0x0025AB40: jal         0x00245A98
    // 0x0025AB44: nop

    func_00245A98(rdram, ctx);
        goto after_0;
    // 0x0025AB44: nop

    after_0:
    // 0x0025AB48: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x0025AB4C: jr          $ra
    // 0x0025AB50: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0025AB50: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0025E428(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0025E428: lb          $v0, 0x133($a1)
    ctx->r2 = MEM_B(ctx->r5, 0X133);
    // 0x0025E42C: jr          $ra
    // 0x0025E430: nop

    return;
    // 0x0025E430: nop

;}
RECOMP_FUNC void func_00451310(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00451310: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x00451314: lw          $v0, -0x5334($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X5334);
    // 0x00451318: jr          $ra
    // 0x0045131C: nop

    return;
    // 0x0045131C: nop

;}
RECOMP_FUNC void func_00256110(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00256110: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00256114: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x00256118: jal         0x00255FF4
    // 0x0025611C: nop

    func_00255FF4(rdram, ctx);
        goto after_0;
    // 0x0025611C: nop

    after_0:
    // 0x00256120: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x00256124: jr          $ra
    // 0x00256128: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00256128: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00421B20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00421B20: lui         $v0, 0x44
    ctx->r2 = S32(0X44 << 16);
    // 0x00421B24: addiu       $v0, $v0, -0x535C
    ctx->r2 = ADD32(ctx->r2, -0X535C);
    // 0x00421B28: jr          $ra
    // 0x00421B2C: nop

    return;
    // 0x00421B2C: nop

;}
RECOMP_FUNC void func_002237C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002237C4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x002237C8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x002237CC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x002237D0: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x002237D4: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x002237D8: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x002237DC: addu        $at, $s0, $at
    ctx->r1 = ADD32(ctx->r16, ctx->r1);
    // 0x002237E0: lw          $v0, -0x7054($at)
    ctx->r2 = MEM_W(ctx->r1, -0X7054);
    // 0x002237E4: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x002237E8: addiu       $v1, $v1, -0x3218
    ctx->r3 = ADD32(ctx->r3, -0X3218);
    // 0x002237EC: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x002237F0: addu        $a0, $v0, $v1
    ctx->r4 = ADD32(ctx->r2, ctx->r3);
    // 0x002237F4: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x002237F8: addu        $at, $s0, $at
    ctx->r1 = ADD32(ctx->r16, ctx->r1);
    // 0x002237FC: lw          $v1, -0x7050($at)
    ctx->r3 = MEM_W(ctx->r1, -0X7050);
    // 0x00223800: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00223804: beq         $v1, $v0, L_00223824
    if (ctx->r3 == ctx->r2) {
        // 0x00223808: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_00223824;
    }
    // 0x00223808: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x0022380C: bne         $v0, $zero, L_00223A80
    if (ctx->r2 != 0) {
        // 0x00223810: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_00223A80;
    }
    // 0x00223810: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x00223814: beq         $v1, $v0, L_00223A18
    if (ctx->r3 == ctx->r2) {
        // 0x00223818: nop
    
            goto L_00223A18;
    }
    // 0x00223818: nop

    // 0x0022381C: j           L_00223A80
    // 0x00223820: nop

        goto L_00223A80;
    // 0x00223820: nop

L_00223824:
    // 0x00223824: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x00223828: addu        $at, $s0, $at
    ctx->r1 = ADD32(ctx->r16, ctx->r1);
    // 0x0022382C: lwc1        $f1, -0x704C($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, -0X704C);
    // 0x00223830: lwc1        $f0, 0x0($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X0);
    // 0x00223834: c.eq.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl == ctx->f0.fl;
    // 0x00223838: nop

    // 0x0022383C: bc1f        L_002239D8
    if (!c1cs) {
        // 0x00223840: nop
    
            goto L_002239D8;
    }
    // 0x00223840: nop

    // 0x00223844: jal         0x0028441C
    // 0x00223848: nop

    func_0028441C(rdram, ctx);
        goto after_0;
    // 0x00223848: nop

    after_0:
    // 0x0022384C: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x00223850: addu        $at, $s0, $at
    ctx->r1 = ADD32(ctx->r16, ctx->r1);
    // 0x00223854: lw          $v1, -0x702C($at)
    ctx->r3 = MEM_W(ctx->r1, -0X702C);
    // 0x00223858: addiu       $v0, $zero, 0x3E7
    ctx->r2 = ADD32(0, 0X3E7);
    // 0x0022385C: bne         $v1, $v0, L_00223874
    if (ctx->r3 != ctx->r2) {
        // 0x00223860: nop
    
            goto L_00223874;
    }
    // 0x00223860: nop

    // 0x00223864: jal         0x00412B14
    // 0x00223868: nop

    func_00412B14(rdram, ctx);
        goto after_1;
    // 0x00223868: nop

    after_1:
    // 0x0022386C: jal         0x00412438
    // 0x00223870: addiu       $a0, $zero, 0x190
    ctx->r4 = ADD32(0, 0X190);
    func_00412438(rdram, ctx);
        goto after_2;
    // 0x00223870: addiu       $a0, $zero, 0x190
    ctx->r4 = ADD32(0, 0X190);
    after_2:
L_00223874:
    // 0x00223874: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x00223878: addu        $at, $s0, $at
    ctx->r1 = ADD32(ctx->r16, ctx->r1);
    // 0x0022387C: lw          $v0, -0x7054($at)
    ctx->r2 = MEM_W(ctx->r1, -0X7054);
    // 0x00223880: bne         $v0, $zero, L_0022389C
    if (ctx->r2 != 0) {
        // 0x00223884: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_0022389C;
    }
    // 0x00223884: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x00223888: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x0022388C: addu        $at, $s0, $at
    ctx->r1 = ADD32(ctx->r16, ctx->r1);
    // 0x00223890: sw          $zero, -0x7050($at)
    MEM_W(-0X7050, ctx->r1) = 0;
    // 0x00223894: j           L_002238A8
    // 0x00223898: nop

        goto L_002238A8;
    // 0x00223898: nop

L_0022389C:
    // 0x0022389C: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x002238A0: addu        $at, $s0, $at
    ctx->r1 = ADD32(ctx->r16, ctx->r1);
    // 0x002238A4: sw          $v0, -0x7050($at)
    MEM_W(-0X7050, ctx->r1) = ctx->r2;
L_002238A8:
    // 0x002238A8: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x002238AC: addu        $at, $s0, $at
    ctx->r1 = ADD32(ctx->r16, ctx->r1);
    // 0x002238B0: lw          $a2, -0x702C($at)
    ctx->r6 = MEM_W(ctx->r1, -0X702C);
    // 0x002238B4: bgez        $a2, L_002238E0
    if (SIGNED(ctx->r6) >= 0) {
        // 0x002238B8: lui         $a3, 0x1
        ctx->r7 = S32(0X1 << 16);
            goto L_002238E0;
    }
    // 0x002238B8: lui         $a3, 0x1
    ctx->r7 = S32(0X1 << 16);
    // 0x002238BC: nor         $v0, $zero, $a2
    ctx->r2 = ~(0 | ctx->r6);
    // 0x002238C0: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x002238C4: addu        $at, $s0, $at
    ctx->r1 = ADD32(ctx->r16, ctx->r1);
    // 0x002238C8: sw          $v0, -0x702C($at)
    MEM_W(-0X702C, ctx->r1) = ctx->r2;
    // 0x002238CC: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x002238D0: addu        $at, $s0, $at
    ctx->r1 = ADD32(ctx->r16, ctx->r1);
    // 0x002238D4: sw          $zero, -0x7048($at)
    MEM_W(-0X7048, ctx->r1) = 0;
    // 0x002238D8: j           L_00223908
    // 0x002238DC: nop

        goto L_00223908;
    // 0x002238DC: nop

L_002238E0:
    // 0x002238E0: ori         $a3, $a3, 0x8FBC
    ctx->r7 = ctx->r7 | 0X8FBC;
    // 0x002238E4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x002238E8: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x002238EC: addu        $a3, $s0, $a3
    ctx->r7 = ADD32(ctx->r16, ctx->r7);
    // 0x002238F0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x002238F4: jal         0x0042C194
    // 0x002238F8: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    func_0042C194(rdram, ctx);
        goto after_3;
    // 0x002238F8: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    after_3:
    // 0x002238FC: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x00223900: addu        $at, $s0, $at
    ctx->r1 = ADD32(ctx->r16, ctx->r1);
    // 0x00223904: sw          $v0, -0x7048($at)
    MEM_W(-0X7048, ctx->r1) = ctx->r2;
L_00223908:
    // 0x00223908: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x0022390C: addu        $at, $s0, $at
    ctx->r1 = ADD32(ctx->r16, ctx->r1);
    // 0x00223910: lw          $v0, -0x702C($at)
    ctx->r2 = MEM_W(ctx->r1, -0X702C);
    // 0x00223914: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x00223918: addu        $at, $s0, $at
    ctx->r1 = ADD32(ctx->r16, ctx->r1);
    // 0x0022391C: lw          $v1, -0x7048($at)
    ctx->r3 = MEM_W(ctx->r1, -0X7048);
    // 0x00223920: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x00223924: addu        $at, $s0, $at
    ctx->r1 = ADD32(ctx->r16, ctx->r1);
    // 0x00223928: sw          $v0, -0x7030($at)
    MEM_W(-0X7030, ctx->r1) = ctx->r2;
    // 0x0022392C: beq         $v1, $zero, L_00223948
    if (ctx->r3 == 0) {
        // 0x00223930: nop
    
            goto L_00223948;
    }
    // 0x00223930: nop

    // 0x00223934: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x00223938: addu        $at, $s0, $at
    ctx->r1 = ADD32(ctx->r16, ctx->r1);
    // 0x0022393C: lh          $a1, -0x7034($at)
    ctx->r5 = MEM_H(ctx->r1, -0X7034);
    // 0x00223940: j           L_00223954
    // 0x00223944: nop

        goto L_00223954;
    // 0x00223944: nop

L_00223948:
    // 0x00223948: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x0022394C: addu        $at, $s0, $at
    ctx->r1 = ADD32(ctx->r16, ctx->r1);
    // 0x00223950: lw          $a1, -0x702C($at)
    ctx->r5 = MEM_W(ctx->r1, -0X702C);
L_00223954:
    // 0x00223954: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x00223958: addu        $at, $s0, $at
    ctx->r1 = ADD32(ctx->r16, ctx->r1);
    // 0x0022395C: lw          $a2, -0x7048($at)
    ctx->r6 = MEM_W(ctx->r1, -0X7048);
    // 0x00223960: jal         0x0042AC0C
    // 0x00223964: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_0042AC0C(rdram, ctx);
        goto after_4;
    // 0x00223964: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
    // 0x00223968: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x0022396C: addu        $at, $s0, $at
    ctx->r1 = ADD32(ctx->r16, ctx->r1);
    // 0x00223970: lw          $v0, -0x7048($at)
    ctx->r2 = MEM_W(ctx->r1, -0X7048);
    // 0x00223974: beq         $v0, $zero, L_00223A80
    if (ctx->r2 == 0) {
        // 0x00223978: nop
    
            goto L_00223A80;
    }
    // 0x00223978: nop

    // 0x0022397C: lui         $s1, 0x8012
    ctx->r17 = S32(0X8012 << 16);
    // 0x00223980: addiu       $s1, $s1, -0x5528
    ctx->r17 = ADD32(ctx->r17, -0X5528);
    // 0x00223984: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x00223988: addu        $at, $s0, $at
    ctx->r1 = ADD32(ctx->r16, ctx->r1);
    // 0x0022398C: lw          $v1, -0x7018($at)
    ctx->r3 = MEM_W(ctx->r1, -0X7018);
    // 0x00223990: lw          $v0, 0x4($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X4);
    // 0x00223994: beq         $v1, $v0, L_00223A80
    if (ctx->r3 == ctx->r2) {
        // 0x00223998: nop
    
            goto L_00223A80;
    }
    // 0x00223998: nop

    // 0x0022399C: jal         0x0027BC34
    // 0x002239A0: nop

    func_0027BC34(rdram, ctx);
        goto after_5;
    // 0x002239A0: nop

    after_5:
    // 0x002239A4: bne         $v0, $zero, L_00223A80
    if (ctx->r2 != 0) {
        // 0x002239A8: addiu       $a0, $s1, -0x1228
        ctx->r4 = ADD32(ctx->r17, -0X1228);
            goto L_00223A80;
    }
    // 0x002239A8: addiu       $a0, $s1, -0x1228
    ctx->r4 = ADD32(ctx->r17, -0X1228);
    // 0x002239AC: lui         $a3, 0x4080
    ctx->r7 = S32(0X4080 << 16);
    // 0x002239B0: lui         $a2, 0x800B
    ctx->r6 = S32(0X800B << 16);
    // 0x002239B4: addiu       $a2, $a2, 0x54E0
    ctx->r6 = ADD32(ctx->r6, 0X54E0);
    // 0x002239B8: jal         0x00281610
    // 0x002239BC: addiu       $a1, $s1, -0x11E8
    ctx->r5 = ADD32(ctx->r17, -0X11E8);
    func_00281610(rdram, ctx);
        goto after_6;
    // 0x002239BC: addiu       $a1, $s1, -0x11E8
    ctx->r5 = ADD32(ctx->r17, -0X11E8);
    after_6:
    // 0x002239C0: lw          $v0, 0x4($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X4);
    // 0x002239C4: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x002239C8: addu        $at, $s0, $at
    ctx->r1 = ADD32(ctx->r16, ctx->r1);
    // 0x002239CC: sw          $v0, -0x7018($at)
    MEM_W(-0X7018, ctx->r1) = ctx->r2;
    // 0x002239D0: j           L_00223A80
    // 0x002239D4: nop

        goto L_00223A80;
    // 0x002239D4: nop

L_002239D8:
    // 0x002239D8: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x002239DC: lwc1        $f0, 0x6D28($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6D28);
    // 0x002239E0: add.s       $f0, $f1, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x002239E4: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x002239E8: addu        $at, $s0, $at
    ctx->r1 = ADD32(ctx->r16, ctx->r1);
    // 0x002239EC: swc1        $f0, -0x704C($at)
    MEM_W(-0X704C, ctx->r1) = ctx->f0.u32l;
    // 0x002239F0: lwc1        $f1, 0x0($a0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r4, 0X0);
    // 0x002239F4: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x002239F8: nop

    // 0x002239FC: bc1f        L_00223A80
    if (!c1cs) {
        // 0x00223A00: nop
    
            goto L_00223A80;
    }
    // 0x00223A00: nop

    // 0x00223A04: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x00223A08: addu        $at, $s0, $at
    ctx->r1 = ADD32(ctx->r16, ctx->r1);
    // 0x00223A0C: swc1        $f1, -0x704C($at)
    MEM_W(-0X704C, ctx->r1) = ctx->f_odd[(1 - 1) * 2];
    // 0x00223A10: j           L_00223A80
    // 0x00223A14: nop

        goto L_00223A80;
    // 0x00223A14: nop

L_00223A18:
    // 0x00223A18: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x00223A1C: addu        $at, $s0, $at
    ctx->r1 = ADD32(ctx->r16, ctx->r1);
    // 0x00223A20: lwc1        $f1, -0x704C($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, -0X704C);
    // 0x00223A24: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x00223A28: c.eq.s      $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f1.fl == ctx->f2.fl;
    // 0x00223A2C: nop

    // 0x00223A30: bc1f        L_00223A4C
    if (!c1cs) {
        // 0x00223A34: nop
    
            goto L_00223A4C;
    }
    // 0x00223A34: nop

    // 0x00223A38: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x00223A3C: addu        $at, $s0, $at
    ctx->r1 = ADD32(ctx->r16, ctx->r1);
    // 0x00223A40: sw          $zero, -0x7050($at)
    MEM_W(-0X7050, ctx->r1) = 0;
    // 0x00223A44: j           L_00223A80
    // 0x00223A48: nop

        goto L_00223A80;
    // 0x00223A48: nop

L_00223A4C:
    // 0x00223A4C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00223A50: lwc1        $f0, 0x6D28($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6D28);
    // 0x00223A54: sub.s       $f0, $f1, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f1.fl - ctx->f0.fl;
    // 0x00223A58: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x00223A5C: addu        $at, $s0, $at
    ctx->r1 = ADD32(ctx->r16, ctx->r1);
    // 0x00223A60: swc1        $f0, -0x704C($at)
    MEM_W(-0X704C, ctx->r1) = ctx->f0.u32l;
    // 0x00223A64: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x00223A68: nop

    // 0x00223A6C: bc1f        L_00223A80
    if (!c1cs) {
        // 0x00223A70: nop
    
            goto L_00223A80;
    }
    // 0x00223A70: nop

    // 0x00223A74: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x00223A78: addu        $at, $s0, $at
    ctx->r1 = ADD32(ctx->r16, ctx->r1);
    // 0x00223A7C: swc1        $f2, -0x704C($at)
    MEM_W(-0X704C, ctx->r1) = ctx->f2.u32l;
L_00223A80:
    // 0x00223A80: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x00223A84: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x00223A88: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x00223A8C: jr          $ra
    // 0x00223A90: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x00223A90: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_00290D5C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00290D5C: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x00290D60: mtc1        $a1, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r5;
    // 0x00290D64: beql        $v0, $zero, L_00290D84
    if (ctx->r2 == 0) {
            // 0x00290D68: addiu       $v0, $zero, 0x1E8
    ctx->r2 = ADD32(0, 0X1E8);
    func_00290D84(rdram, ctx);
    return;
    }
    goto skip_0;
    // 0x00290D68: addiu       $v0, $zero, 0x1E8
    ctx->r2 = ADD32(0, 0X1E8);
    skip_0:
    // 0x00290D6C: lwc1        $f0, 0x8($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X8);
    // 0x00290D70: mul.s       $f0, $f1, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x00290D74: trunc.w.s   $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x00290D78: swc1        $f2, 0x24($a0)
    MEM_W(0X24, ctx->r4) = ctx->f2.u32l;
    // 0x00290D7C: jr          $ra
    // 0x00290D80: nop

    return;
    // 0x00290D80: nop

;}
RECOMP_FUNC void func_00200684(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00200684: lw          $v0, 0xC($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XC);
    // 0x00200688: addu        $v0, $a1, $v0
    ctx->r2 = ADD32(ctx->r5, ctx->r2);
    // 0x0020068C: lw          $v1, 0x0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X0);
    // 0x00200690: beq         $v1, $zero, L_002006DC
    if (ctx->r3 == 0) {
        // 0x00200694: nop
    
            goto L_002006DC;
    }
    // 0x00200694: nop

    // 0x00200698: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x0020069C: addu        $v0, $v1, $v0
    ctx->r2 = ADD32(ctx->r3, ctx->r2);
    // 0x002006A0: sw          $a2, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r6;
    // 0x002006A4: lw          $v0, 0xC($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XC);
    // 0x002006A8: addu        $v1, $a1, $v0
    ctx->r3 = ADD32(ctx->r5, ctx->r2);
    // 0x002006AC: lw          $v1, 0x0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X0);
    // 0x002006B0: addu        $v0, $a2, $v0
    ctx->r2 = ADD32(ctx->r6, ctx->r2);
    // 0x002006B4: sw          $v1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r3;
    // 0x002006B8: lw          $v0, 0xC($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XC);
    // 0x002006BC: addu        $v0, $a1, $v0
    ctx->r2 = ADD32(ctx->r5, ctx->r2);
    // 0x002006C0: sw          $a2, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r6;
    // 0x002006C4: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x002006C8: addu        $v0, $a2, $v0
    ctx->r2 = ADD32(ctx->r6, ctx->r2);
    // 0x002006CC: sw          $a1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r5;
    // 0x002006D0: lw          $v0, 0x10($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X10);
    // 0x002006D4: j           L_00200730
    // 0x002006D8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_00200730;
    // 0x002006D8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_002006DC:
    // 0x002006DC: lw          $v1, 0x4($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X4);
    // 0x002006E0: beq         $v1, $zero, L_00200708
    if (ctx->r3 == 0) {
        // 0x002006E4: nop
    
            goto L_00200708;
    }
    // 0x002006E4: nop

    // 0x002006E8: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x002006EC: addu        $v0, $a2, $v0
    ctx->r2 = ADD32(ctx->r6, ctx->r2);
    // 0x002006F0: sw          $v1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r3;
    // 0x002006F4: lw          $v0, 0x4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X4);
    // 0x002006F8: lw          $v1, 0xC($a0)
    ctx->r3 = MEM_W(ctx->r4, 0XC);
    // 0x002006FC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x00200700: j           L_00200718
    // 0x00200704: sw          $a2, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r6;
        goto L_00200718;
    // 0x00200704: sw          $a2, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r6;
L_00200708:
    // 0x00200708: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x0020070C: addu        $v0, $a2, $v0
    ctx->r2 = ADD32(ctx->r6, ctx->r2);
    // 0x00200710: sw          $zero, 0x0($v0)
    MEM_W(0X0, ctx->r2) = 0;
    // 0x00200714: sw          $a2, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r6;
L_00200718:
    // 0x00200718: lw          $v0, 0xC($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XC);
    // 0x0020071C: addu        $v0, $a2, $v0
    ctx->r2 = ADD32(ctx->r6, ctx->r2);
    // 0x00200720: sw          $zero, 0x0($v0)
    MEM_W(0X0, ctx->r2) = 0;
    // 0x00200724: lw          $v0, 0x10($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X10);
    // 0x00200728: sw          $a2, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r6;
    // 0x0020072C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_00200730:
    // 0x00200730: jr          $ra
    // 0x00200734: sw          $v0, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->r2;
    return;
    // 0x00200734: sw          $v0, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->r2;
;}
RECOMP_FUNC void func_00253864(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00253864: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x00253868: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x0025386C: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x00253870: lui         $a1, 0xFFFD
    ctx->r5 = S32(0XFFFD << 16);
    // 0x00253874: ori         $a1, $a1, 0xFFFF
    ctx->r5 = ctx->r5 | 0XFFFF;
    // 0x00253878: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0025387C: addiu       $s0, $s2, 0x288
    ctx->r16 = ADD32(ctx->r18, 0X288);
    // 0x00253880: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00253884: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x00253888: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x0025388C: sdc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X20, ctx->r29);
    // 0x00253890: lw          $s1, 0xC04($s2)
    ctx->r17 = MEM_W(ctx->r18, 0XC04);
    // 0x00253894: lw          $v0, 0xD4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XD4);
    // 0x00253898: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0025389C: lwc1        $f20, 0x6D28($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X6D28);
    // 0x002538A0: addiu       $v1, $zero, 0x10
    ctx->r3 = ADD32(0, 0X10);
    // 0x002538A4: sw          $v1, 0x27C($s0)
    MEM_W(0X27C, ctx->r16) = ctx->r3;
    // 0x002538A8: and         $v0, $v0, $a1
    ctx->r2 = ctx->r2 & ctx->r5;
    // 0x002538AC: jal         0x0021F1B4
    // 0x002538B0: sw          $v0, 0xD4($s0)
    MEM_W(0XD4, ctx->r16) = ctx->r2;
    func_0021F1B4(rdram, ctx);
        goto after_0;
    // 0x002538B0: sw          $v0, 0xD4($s0)
    MEM_W(0XD4, ctx->r16) = ctx->r2;
    after_0:
    // 0x002538B4: jal         0x0021A344
    // 0x002538B8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_0021A344(rdram, ctx);
        goto after_1;
    // 0x002538B8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x002538BC: lw          $v0, 0xC04($s2)
    ctx->r2 = MEM_W(ctx->r18, 0XC04);
    // 0x002538C0: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x002538C4: swc1        $f20, 0x6D28($at)
    MEM_W(0X6D28, ctx->r1) = ctx->f20.u32l;
    // 0x002538C8: bnel        $s1, $v0, L_002538D0
    if (ctx->r17 != ctx->r2) {
        // 0x002538CC: sb          $zero, 0xE2($s2)
        MEM_B(0XE2, ctx->r18) = 0;
            goto L_002538D0;
    }
    goto skip_0;
    // 0x002538CC: sb          $zero, 0xE2($s2)
    MEM_B(0XE2, ctx->r18) = 0;
    skip_0:
L_002538D0:
    // 0x002538D0: lw          $a2, 0x4($s2)
    ctx->r6 = MEM_W(ctx->r18, 0X4);
    // 0x002538D4: lw          $a3, 0x8($s2)
    ctx->r7 = MEM_W(ctx->r18, 0X8);
    // 0x002538D8: lw          $t0, 0xC($s2)
    ctx->r8 = MEM_W(ctx->r18, 0XC);
    // 0x002538DC: sw          $a2, 0x28C($s2)
    MEM_W(0X28C, ctx->r18) = ctx->r6;
    // 0x002538E0: sw          $a3, 0x290($s2)
    MEM_W(0X290, ctx->r18) = ctx->r7;
    // 0x002538E4: sw          $t0, 0x294($s2)
    MEM_W(0X294, ctx->r18) = ctx->r8;
    // 0x002538E8: lwc1        $f0, 0x50($s2)
    ctx->f0.u32l = MEM_W(ctx->r18, 0X50);
    // 0x002538EC: lw          $v0, 0x10($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X10);
    // 0x002538F0: swc1        $f0, 0x2D8($s2)
    MEM_W(0X2D8, ctx->r18) = ctx->f0.u32l;
    // 0x002538F4: sw          $v0, 0x298($s2)
    MEM_W(0X298, ctx->r18) = ctx->r2;
    // 0x002538F8: lw          $a2, 0x40($s2)
    ctx->r6 = MEM_W(ctx->r18, 0X40);
    // 0x002538FC: lw          $a3, 0x44($s2)
    ctx->r7 = MEM_W(ctx->r18, 0X44);
    // 0x00253900: lw          $t0, 0x48($s2)
    ctx->r8 = MEM_W(ctx->r18, 0X48);
    // 0x00253904: lw          $t1, 0x4C($s2)
    ctx->r9 = MEM_W(ctx->r18, 0X4C);
    // 0x00253908: sw          $a2, 0x2C8($s2)
    MEM_W(0X2C8, ctx->r18) = ctx->r6;
    // 0x0025390C: sw          $a3, 0x2CC($s2)
    MEM_W(0X2CC, ctx->r18) = ctx->r7;
    // 0x00253910: sw          $t0, 0x2D0($s2)
    MEM_W(0X2D0, ctx->r18) = ctx->r8;
    // 0x00253914: sw          $t1, 0x2D4($s2)
    MEM_W(0X2D4, ctx->r18) = ctx->r9;
    // 0x00253918: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x0025391C: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x00253920: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00253924: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00253928: ldc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X20);
    // 0x0025392C: jr          $ra
    // 0x00253930: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x00253930: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_00413188(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00413188: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x0041318C: lw          $v0, 0x1BB0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1BB0);
    // 0x00413190: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00413194: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x00413198: lw          $a0, 0x4($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X4);
    // 0x0041319C: jal         0x002017D4
    // 0x004131A0: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_002017D4(rdram, ctx);
        goto after_0;
    // 0x004131A0: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_0:
    // 0x004131A4: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x004131A8: jr          $ra
    // 0x004131AC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x004131AC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0040A25C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0040A25C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0040A260: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x0040A264: lw          $v1, 0x90($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X90);
    // 0x0040A268: lw          $a1, 0x0($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X0);
    // 0x0040A26C: sltiu       $v0, $v1, 0x6E
    ctx->r2 = ctx->r3 < 0X6E ? 1 : 0;
    // 0x0040A270: beq         $v0, $zero, L_0040A40C
    if (ctx->r2 == 0) {
        // 0x0040A274: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_0040A40C;
    }
    // 0x0040A274: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x0040A278: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0040A27C: addu        $at, $at, $v0
    gpr jr_addend_0040A284 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x0040A280: lw          $v0, 0x668($at)
    ctx->r2 = ADD32(ctx->r1, 0X668);
    // 0x0040A284: jr          $v0
    // 0x0040A288: nop

    switch (jr_addend_0040A284 >> 2) {
        case 0: goto L_0040A28C; break;
        case 1: goto L_0040A40C; break;
        case 2: goto L_0040A40C; break;
        case 3: goto L_0040A40C; break;
        case 4: goto L_0040A40C; break;
        case 5: goto L_0040A40C; break;
        case 6: goto L_0040A40C; break;
        case 7: goto L_0040A40C; break;
        case 8: goto L_0040A40C; break;
        case 9: goto L_0040A40C; break;
        case 10: goto L_0040A40C; break;
        case 11: goto L_0040A40C; break;
        case 12: goto L_0040A40C; break;
        case 13: goto L_0040A40C; break;
        case 14: goto L_0040A40C; break;
        case 15: goto L_0040A40C; break;
        case 16: goto L_0040A40C; break;
        case 17: goto L_0040A40C; break;
        case 18: goto L_0040A40C; break;
        case 19: goto L_0040A40C; break;
        case 20: goto L_0040A40C; break;
        case 21: goto L_0040A3F0; break;
        case 22: goto L_0040A40C; break;
        case 23: goto L_0040A40C; break;
        case 24: goto L_0040A40C; break;
        case 25: goto L_0040A40C; break;
        case 26: goto L_0040A3F0; break;
        case 27: goto L_0040A40C; break;
        case 28: goto L_0040A40C; break;
        case 29: goto L_0040A40C; break;
        case 30: goto L_0040A40C; break;
        case 31: goto L_0040A3F0; break;
        case 32: goto L_0040A40C; break;
        case 33: goto L_0040A40C; break;
        case 34: goto L_0040A40C; break;
        case 35: goto L_0040A40C; break;
        case 36: goto L_0040A3F0; break;
        case 37: goto L_0040A40C; break;
        case 38: goto L_0040A40C; break;
        case 39: goto L_0040A40C; break;
        case 40: goto L_0040A40C; break;
        case 41: goto L_0040A40C; break;
        case 42: goto L_0040A40C; break;
        case 43: goto L_0040A40C; break;
        case 44: goto L_0040A40C; break;
        case 45: goto L_0040A40C; break;
        case 46: goto L_0040A3F0; break;
        case 47: goto L_0040A40C; break;
        case 48: goto L_0040A40C; break;
        case 49: goto L_0040A40C; break;
        case 50: goto L_0040A40C; break;
        case 51: goto L_0040A3F0; break;
        case 52: goto L_0040A40C; break;
        case 53: goto L_0040A40C; break;
        case 54: goto L_0040A40C; break;
        case 55: goto L_0040A40C; break;
        case 56: goto L_0040A3F0; break;
        case 57: goto L_0040A40C; break;
        case 58: goto L_0040A40C; break;
        case 59: goto L_0040A40C; break;
        case 60: goto L_0040A40C; break;
        case 61: goto L_0040A3F0; break;
        case 62: goto L_0040A40C; break;
        case 63: goto L_0040A40C; break;
        case 64: goto L_0040A40C; break;
        case 65: goto L_0040A40C; break;
        case 66: goto L_0040A40C; break;
        case 67: goto L_0040A40C; break;
        case 68: goto L_0040A40C; break;
        case 69: goto L_0040A40C; break;
        case 70: goto L_0040A40C; break;
        case 71: goto L_0040A40C; break;
        case 72: goto L_0040A40C; break;
        case 73: goto L_0040A40C; break;
        case 74: goto L_0040A40C; break;
        case 75: goto L_0040A40C; break;
        case 76: goto L_0040A40C; break;
        case 77: goto L_0040A40C; break;
        case 78: goto L_0040A40C; break;
        case 79: goto L_0040A40C; break;
        case 80: goto L_0040A40C; break;
        case 81: goto L_0040A40C; break;
        case 82: goto L_0040A40C; break;
        case 83: goto L_0040A40C; break;
        case 84: goto L_0040A40C; break;
        case 85: goto L_0040A40C; break;
        case 86: goto L_0040A40C; break;
        case 87: goto L_0040A40C; break;
        case 88: goto L_0040A40C; break;
        case 89: goto L_0040A3FC; break;
        case 90: goto L_0040A40C; break;
        case 91: goto L_0040A40C; break;
        case 92: goto L_0040A40C; break;
        case 93: goto L_0040A3FC; break;
        case 94: goto L_0040A40C; break;
        case 95: goto L_0040A40C; break;
        case 96: goto L_0040A40C; break;
        case 97: goto L_0040A3FC; break;
        case 98: goto L_0040A40C; break;
        case 99: goto L_0040A40C; break;
        case 100: goto L_0040A40C; break;
        case 101: goto L_0040A3FC; break;
        case 102: goto L_0040A40C; break;
        case 103: goto L_0040A40C; break;
        case 104: goto L_0040A40C; break;
        case 105: goto L_0040A3FC; break;
        case 106: goto L_0040A40C; break;
        case 107: goto L_0040A40C; break;
        case 108: goto L_0040A40C; break;
        case 109: goto L_0040A3FC; break;
        default: switch_error(__func__, 0x0040A284, 0x800C0668);
    }
    // 0x0040A288: nop

L_0040A28C:
    // 0x0040A28C: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x0040A290: lw          $a0, -0x490($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X490);
    // 0x0040A294: lb          $v1, 0x174($a0)
    ctx->r3 = MEM_B(ctx->r4, 0X174);
    // 0x0040A298: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
    // 0x0040A29C: bne         $v1, $v0, L_0040A2E4
    if (ctx->r3 != ctx->r2) {
        // 0x0040A2A0: addiu       $v0, $zero, 0x13
        ctx->r2 = ADD32(0, 0X13);
            goto L_0040A2E4;
    }
    // 0x0040A2A0: addiu       $v0, $zero, 0x13
    ctx->r2 = ADD32(0, 0X13);
    // 0x0040A2A4: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0040A2A8: lwc1        $f0, 0x6D28($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6D28);
    // 0x0040A2AC: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0040A2B0: lwc1        $f1, 0x820($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X820);
    // 0x0040A2B4: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0040A2B8: lwc1        $f1, 0x254($a1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r5, 0X254);
    // 0x0040A2BC: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x0040A2C0: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0040A2C4: lwc1        $f0, 0x824($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X824);
    // 0x0040A2C8: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x0040A2CC: nop

    // 0x0040A2D0: bc1tl       L_0040A2D8
    if (c1cs) {
        // 0x0040A2D4: mov.s       $f1, $f0
        CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    ctx->f1.fl = ctx->f0.fl;
            goto L_0040A2D8;
    }
    goto skip_0;
    // 0x0040A2D4: mov.s       $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    ctx->f1.fl = ctx->f0.fl;
    skip_0:
L_0040A2D8:
    // 0x0040A2D8: swc1        $f1, 0x254($a1)
    MEM_W(0X254, ctx->r5) = ctx->f_odd[(1 - 1) * 2];
    // 0x0040A2DC: lb          $v1, 0x174($a0)
    ctx->r3 = MEM_B(ctx->r4, 0X174);
    // 0x0040A2E0: addiu       $v0, $zero, 0x13
    ctx->r2 = ADD32(0, 0X13);
L_0040A2E4:
    // 0x0040A2E4: bne         $v1, $v0, L_0040A3D0
    if (ctx->r3 != ctx->r2) {
        // 0x0040A2E8: nop
    
            goto L_0040A3D0;
    }
    // 0x0040A2E8: nop

    // 0x0040A2EC: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0040A2F0: lwc1        $f2, 0x1900($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X1900);
    // 0x0040A2F4: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0040A2F8: lwc1        $f0, 0x828($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X828);
    // 0x0040A2FC: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x0040A300: nop

    // 0x0040A304: bc1f        L_0040A328
    if (!c1cs) {
        // 0x0040A308: nop
    
            goto L_0040A328;
    }
    // 0x0040A308: nop

    // 0x0040A30C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0040A310: lwc1        $f0, 0x6D28($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6D28);
    // 0x0040A314: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0040A318: lwc1        $f1, 0x82C($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X82C);
    // 0x0040A31C: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0040A320: j           L_0040A388
    // 0x0040A324: add.s       $f0, $f2, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f2.fl + ctx->f0.fl;
        goto L_0040A388;
    // 0x0040A324: add.s       $f0, $f2, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f2.fl + ctx->f0.fl;
L_0040A328:
    // 0x0040A328: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x0040A32C: lw          $v0, 0x1904($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1904);
    // 0x0040A330: bne         $v0, $zero, L_0040A398
    if (ctx->r2 != 0) {
        // 0x0040A334: nop
    
            goto L_0040A398;
    }
    // 0x0040A334: nop

    // 0x0040A338: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0040A33C: lwc1        $f3, 0x6D28($at)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r1, 0X6D28);
    // 0x0040A340: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0040A344: lwc1        $f0, 0x830($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X830);
    // 0x0040A348: mul.s       $f0, $f3, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f3.fl, ctx->f0.fl);
    // 0x0040A34C: lwc1        $f1, 0x250($a1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r5, 0X250);
    // 0x0040A350: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x0040A354: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0040A358: lwc1        $f0, 0x834($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X834);
    // 0x0040A35C: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x0040A360: nop

    // 0x0040A364: bc1f        L_0040A378
    if (!c1cs) {
        // 0x0040A368: swc1        $f1, 0x250($a1)
        MEM_W(0X250, ctx->r5) = ctx->f_odd[(1 - 1) * 2];
            goto L_0040A378;
    }
    // 0x0040A368: swc1        $f1, 0x250($a1)
    MEM_W(0X250, ctx->r5) = ctx->f_odd[(1 - 1) * 2];
    // 0x0040A36C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0040A370: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0040A374: sw          $v0, 0x1904($at)
    MEM_W(0X1904, ctx->r1) = ctx->r2;
L_0040A378:
    // 0x0040A378: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0040A37C: lwc1        $f0, 0x838($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X838);
    // 0x0040A380: mul.s       $f0, $f3, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f3.fl, ctx->f0.fl);
    // 0x0040A384: add.s       $f0, $f2, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f2.fl + ctx->f0.fl;
L_0040A388:
    // 0x0040A388: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0040A38C: swc1        $f0, 0x1900($at)
    MEM_W(0X1900, ctx->r1) = ctx->f0.u32l;
    // 0x0040A390: j           L_0040A3D0
    // 0x0040A394: nop

        goto L_0040A3D0;
    // 0x0040A394: nop

L_0040A398:
    // 0x0040A398: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0040A39C: lwc1        $f0, 0x6D28($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6D28);
    // 0x0040A3A0: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0040A3A4: lwc1        $f1, 0x83C($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X83C);
    // 0x0040A3A8: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0040A3AC: lwc1        $f1, 0x250($a1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r5, 0X250);
    // 0x0040A3B0: sub.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl - ctx->f0.fl;
    // 0x0040A3B4: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0040A3B8: lwc1        $f0, 0x840($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X840);
    // 0x0040A3BC: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x0040A3C0: nop

    // 0x0040A3C4: bc1tl       L_0040A3CC
    if (c1cs) {
        // 0x0040A3C8: mov.s       $f1, $f0
        CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    ctx->f1.fl = ctx->f0.fl;
            goto L_0040A3CC;
    }
    goto skip_1;
    // 0x0040A3C8: mov.s       $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    ctx->f1.fl = ctx->f0.fl;
    skip_1:
L_0040A3CC:
    // 0x0040A3CC: swc1        $f1, 0x250($a1)
    MEM_W(0X250, ctx->r5) = ctx->f_odd[(1 - 1) * 2];
L_0040A3D0:
    // 0x0040A3D0: lb          $v0, 0x174($a0)
    ctx->r2 = MEM_B(ctx->r4, 0X174);
    // 0x0040A3D4: slti        $v0, $v0, 0x1E
    ctx->r2 = SIGNED(ctx->r2) < 0X1E ? 1 : 0;
    // 0x0040A3D8: bne         $v0, $zero, L_0040A40C
    if (ctx->r2 != 0) {
        // 0x0040A3DC: nop
    
            goto L_0040A40C;
    }
    // 0x0040A3DC: nop

    // 0x0040A3E0: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0040A3E4: lwc1        $f0, 0x844($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X844);
    // 0x0040A3E8: j           L_0040A40C
    // 0x0040A3EC: swc1        $f0, 0x250($a1)
    MEM_W(0X250, ctx->r5) = ctx->f0.u32l;
        goto L_0040A40C;
    // 0x0040A3EC: swc1        $f0, 0x250($a1)
    MEM_W(0X250, ctx->r5) = ctx->f0.u32l;
L_0040A3F0:
    // 0x0040A3F0: lw          $a1, 0x254($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X254);
    // 0x0040A3F4: j           L_0040A404
    // 0x0040A3F8: addu        $a2, $a1, $zero
    ctx->r6 = ADD32(ctx->r5, 0);
        goto L_0040A404;
    // 0x0040A3F8: addu        $a2, $a1, $zero
    ctx->r6 = ADD32(ctx->r5, 0);
L_0040A3FC:
    // 0x0040A3FC: lw          $a1, 0x250($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X250);
    // 0x0040A400: addu        $a2, $a1, $zero
    ctx->r6 = ADD32(ctx->r5, 0);
L_0040A404:
    // 0x0040A404: jal         0x0021034C
    // 0x0040A408: addu        $a3, $a1, $zero
    ctx->r7 = ADD32(ctx->r5, 0);
    func_0021034C(rdram, ctx);
        goto after_0;
    // 0x0040A408: addu        $a3, $a1, $zero
    ctx->r7 = ADD32(ctx->r5, 0);
    after_0:
L_0040A40C:
    // 0x0040A40C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x0040A410: jr          $ra
    // 0x0040A414: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0040A414: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0040DBD0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0040DBD0: jr          $ra
    // 0x0040DBD4: nop

    return;
    // 0x0040DBD4: nop

;}
RECOMP_FUNC void func_00442500(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00442500: addiu       $sp, $sp, -0xC0
    ctx->r29 = ADD32(ctx->r29, -0XC0);
    // 0x00442504: sw          $s5, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r21;
    // 0x00442508: addu        $s5, $a0, $zero
    ctx->r21 = ADD32(ctx->r4, 0);
    // 0x0044250C: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x00442510: lw          $a0, -0x490($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X490);
    // 0x00442514: sdc1        $f24, 0xB8($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0XB8, ctx->r29);
    // 0x00442518: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0044251C: lwc1        $f24, 0x5D4($at)
    ctx->f24.u32l = MEM_W(ctx->r1, 0X5D4);
    // 0x00442520: sdc1        $f23, 0xB0($sp)
    CHECK_FR(ctx, 23);
    SD(ctx->f23.u64, 0XB0, ctx->r29);
    // 0x00442524: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00442528: lwc1        $f23, 0x5D8($at)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r1, 0X5D8);
    // 0x0044252C: sdc1        $f22, 0xA8($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0XA8, ctx->r29);
    // 0x00442530: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00442534: lwc1        $f22, 0x5DC($at)
    ctx->f22.u32l = MEM_W(ctx->r1, 0X5DC);
    // 0x00442538: sdc1        $f21, 0xA0($sp)
    CHECK_FR(ctx, 21);
    SD(ctx->f21.u64, 0XA0, ctx->r29);
    // 0x0044253C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00442540: lwc1        $f21, 0x5E0($at)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r1, 0X5E0);
    // 0x00442544: sw          $s7, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r23;
    // 0x00442548: addu        $s7, $a1, $zero
    ctx->r23 = ADD32(ctx->r5, 0);
    // 0x0044254C: sdc1        $f20, 0x98($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X98, ctx->r29);
    // 0x00442550: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00442554: lwc1        $f20, 0x5E4($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X5E4);
    // 0x00442558: addiu       $a1, $sp, 0x68
    ctx->r5 = ADD32(ctx->r29, 0X68);
    // 0x0044255C: sw          $s4, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r20;
    // 0x00442560: addiu       $s4, $sp, 0x58
    ctx->r20 = ADD32(ctx->r29, 0X58);
    // 0x00442564: sw          $s6, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r22;
    // 0x00442568: lui         $s6, 0x43
    ctx->r22 = S32(0X43 << 16);
    // 0x0044256C: addiu       $s6, $s6, 0x1C40
    ctx->r22 = ADD32(ctx->r22, 0X1C40);
    // 0x00442570: sw          $s2, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r18;
    // 0x00442574: addu        $s2, $s6, $zero
    ctx->r18 = ADD32(ctx->r22, 0);
    // 0x00442578: sw          $ra, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r31;
    // 0x0044257C: sw          $s3, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r19;
    // 0x00442580: sw          $s1, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r17;
    // 0x00442584: jal         0x0040BD60
    // 0x00442588: sw          $s0, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r16;
    func_0040BD60(rdram, ctx);
        goto after_0;
    // 0x00442588: sw          $s0, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r16;
    after_0:
L_0044258C:
    // 0x0044258C: jal         0x0026D518
    // 0x00442590: addu        $a0, $s7, $zero
    ctx->r4 = ADD32(ctx->r23, 0);
    func_0026D518(rdram, ctx);
        goto after_1;
    // 0x00442590: addu        $a0, $s7, $zero
    ctx->r4 = ADD32(ctx->r23, 0);
    after_1:
    // 0x00442594: mov.s       $f12, $f24
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 24);
    ctx->f12.fl = ctx->f24.fl;
    // 0x00442598: mov.s       $f14, $f23
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 23);
    ctx->f14.fl = ctx->f23.fl;
    // 0x0044259C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x004425A0: jal         0x002119FC
    // 0x004425A4: sra         $s3, $v0, 16
    ctx->r19 = S32(SIGNED(ctx->r2) >> 16);
    func_002119FC(rdram, ctx);
        goto after_2;
    // 0x004425A4: sra         $s3, $v0, 16
    ctx->r19 = S32(SIGNED(ctx->r2) >> 16);
    after_2:
    // 0x004425A8: trunc.w.s   $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(3 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x004425AC: mfc1        $s0, $f3
    ctx->r16 = (int32_t)ctx->f_odd[(3 - 1) * 2];
    // 0x004425B0: mov.s       $f12, $f24
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 24);
    ctx->f12.fl = ctx->f24.fl;
    // 0x004425B4: jal         0x002119FC
    // 0x004425B8: mov.s       $f14, $f23
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 23);
    ctx->f14.fl = ctx->f23.fl;
    func_002119FC(rdram, ctx);
        goto after_3;
    // 0x004425B8: mov.s       $f14, $f23
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 23);
    ctx->f14.fl = ctx->f23.fl;
    after_3:
    // 0x004425BC: mtc1        $s0, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r16;
    // 0x004425C0: cvt.s.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.fl = CVT_S_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x004425C4: mul.s       $f1, $f1, $f22
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f22.fl);
    // 0x004425C8: trunc.w.s   $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(3 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x004425CC: mfc1        $s1, $f3
    ctx->r17 = (int32_t)ctx->f_odd[(3 - 1) * 2];
    // 0x004425D0: mtc1        $s1, $f0
    ctx->f0.u32l = ctx->r17;
    // 0x004425D4: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x004425D8: mul.s       $f0, $f0, $f22
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f22.fl);
    // 0x004425DC: lw          $a1, 0x68($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X68);
    // 0x004425E0: trunc.w.s   $f3, $f1
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 1);
    ctx->f_odd[(3 - 1) * 2] = TRUNC_W_S(ctx->f1.fl);
    // 0x004425E4: mfc1        $s0, $f3
    ctx->r16 = (int32_t)ctx->f_odd[(3 - 1) * 2];
    // 0x004425E8: trunc.w.s   $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(3 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x004425EC: mfc1        $s1, $f3
    ctx->r17 = (int32_t)ctx->f_odd[(3 - 1) * 2];
    // 0x004425F0: beq         $a1, $zero, L_00442640
    if (ctx->r5 == 0) {
        // 0x004425F4: addiu       $a0, $sp, 0x30
        ctx->r4 = ADD32(ctx->r29, 0X30);
            goto L_00442640;
    }
    // 0x004425F4: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    // 0x004425F8: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
    // 0x004425FC: jal         0x0020EF2C
    // 0x00442600: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    func_0020EF2C(rdram, ctx);
        goto after_4;
    // 0x00442600: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    after_4:
    // 0x00442604: lwc1        $f1, 0x30($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X30);
    // 0x00442608: mul.s       $f1, $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f1.fl);
    // 0x0044260C: lwc1        $f0, 0x34($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X34);
    // 0x00442610: mul.s       $f0, $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x00442614: lwc1        $f12, 0x38($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X38);
    // 0x00442618: mul.s       $f12, $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x0044261C: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x00442620: jal         0x00298470
    // 0x00442624: add.s       $f12, $f1, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = ctx->f1.fl + ctx->f12.fl;
    func_00298470(rdram, ctx);
        goto after_5;
    // 0x00442624: add.s       $f12, $f1, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = ctx->f1.fl + ctx->f12.fl;
    after_5:
    // 0x00442628: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0044262C: lwc1        $f1, 0x5E8($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X5E8);
    // 0x00442630: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x00442634: nop

    // 0x00442638: bc1fl       L_00442734
    if (!c1cs) {
        // 0x0044263C: addiu       $s2, $s2, 0x14
        ctx->r18 = ADD32(ctx->r18, 0X14);
            goto L_00442734;
    }
    goto skip_0;
    // 0x0044263C: addiu       $s2, $s2, 0x14
    ctx->r18 = ADD32(ctx->r18, 0X14);
    skip_0:
L_00442640:
    // 0x00442640: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x00442644: addiu       $a0, $a0, 0x7078
    ctx->r4 = ADD32(ctx->r4, 0X7078);
    // 0x00442648: lw          $v1, 0x0($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X0);
    // 0x0044264C: lw          $t0, 0x4($s2)
    ctx->r8 = MEM_W(ctx->r18, 0X4);
    // 0x00442650: lw          $t1, 0x8($s2)
    ctx->r9 = MEM_W(ctx->r18, 0X8);
    // 0x00442654: sw          $v1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r3;
    // 0x00442658: sw          $t0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r8;
    // 0x0044265C: sw          $t1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r9;
    // 0x00442660: lwc1        $f2, 0x30($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X30);
    // 0x00442664: mtc1        $s0, $f0
    ctx->f0.u32l = ctx->r16;
    // 0x00442668: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x0044266C: add.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f0.fl;
    // 0x00442670: lwc1        $f1, 0x38($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X38);
    // 0x00442674: mtc1        $s1, $f0
    ctx->f0.u32l = ctx->r17;
    // 0x00442678: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x0044267C: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x00442680: swc1        $f21, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x00442684: swc1        $f2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f2.u32l;
    // 0x00442688: swc1        $f1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    // 0x0044268C: lw          $v1, 0x30($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X30);
    // 0x00442690: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x00442694: lw          $t1, 0x38($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X38);
    // 0x00442698: sw          $v1, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r3;
    // 0x0044269C: sw          $t0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r8;
    // 0x004426A0: sw          $t1, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r9;
    // 0x004426A4: jal         0x00220A1C
    // 0x004426A8: addiu       $a1, $sp, 0x48
    ctx->r5 = ADD32(ctx->r29, 0X48);
    func_00220A1C(rdram, ctx);
        goto after_6;
    // 0x004426A8: addiu       $a1, $sp, 0x48
    ctx->r5 = ADD32(ctx->r29, 0X48);
    after_6:
    // 0x004426AC: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x004426B0: addiu       $a0, $a0, 0x7590
    ctx->r4 = ADD32(ctx->r4, 0X7590);
    // 0x004426B4: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x004426B8: mtc1        $s5, $f0
    ctx->f0.u32l = ctx->r21;
    // 0x004426BC: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x004426C0: sw          $zero, 0x58($sp)
    MEM_W(0X58, ctx->r29) = 0;
    // 0x004426C4: swc1        $f20, 0x4($s4)
    MEM_W(0X4, ctx->r20) = ctx->f20.u32l;
    // 0x004426C8: sw          $zero, 0x60($sp)
    MEM_W(0X60, ctx->r29) = 0;
    // 0x004426CC: lw          $v1, 0x48($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X48);
    // 0x004426D0: lw          $t0, 0x4C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4C);
    // 0x004426D4: lw          $t1, 0x50($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X50);
    // 0x004426D8: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    // 0x004426DC: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    // 0x004426E0: sw          $t1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r9;
    // 0x004426E4: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x004426E8: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x004426EC: lw          $v1, 0x5C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X5C);
    // 0x004426F0: lw          $t0, 0x60($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X60);
    // 0x004426F4: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    // 0x004426F8: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x004426FC: lw          $a3, 0x58($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X58);
    // 0x00442700: jal         0x00227240
    // 0x00442704: addu        $a2, $s3, $zero
    ctx->r6 = ADD32(ctx->r19, 0);
    func_00227240(rdram, ctx);
        goto after_7;
    // 0x00442704: addu        $a2, $s3, $zero
    ctx->r6 = ADD32(ctx->r19, 0);
    after_7:
    // 0x00442708: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x0044270C: beql        $a0, $zero, L_00442734
    if (ctx->r4 == 0) {
        // 0x00442710: addiu       $s2, $s2, 0x14
        ctx->r18 = ADD32(ctx->r18, 0X14);
            goto L_00442734;
    }
    goto skip_1;
    // 0x00442710: addiu       $s2, $s2, 0x14
    ctx->r18 = ADD32(ctx->r18, 0X14);
    skip_1:
    // 0x00442714: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x00442718: lw          $v0, 0x50($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X50);
    // 0x0044271C: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x00442720: lw          $a2, 0x48($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X48);
    // 0x00442724: lw          $a3, 0x4C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X4C);
    // 0x00442728: jal         0x00246690
    // 0x0044272C: addiu       $a1, $zero, 0x11D
    ctx->r5 = ADD32(0, 0X11D);
    func_00246690(rdram, ctx);
        goto after_8;
    // 0x0044272C: addiu       $a1, $zero, 0x11D
    ctx->r5 = ADD32(0, 0X11D);
    after_8:
    // 0x00442730: addiu       $s2, $s2, 0x14
    ctx->r18 = ADD32(ctx->r18, 0X14);
L_00442734:
    // 0x00442734: addiu       $v0, $s6, 0x50
    ctx->r2 = ADD32(ctx->r22, 0X50);
    // 0x00442738: slt         $v0, $s2, $v0
    ctx->r2 = SIGNED(ctx->r18) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x0044273C: bne         $v0, $zero, L_0044258C
    if (ctx->r2 != 0) {
        // 0x00442740: nop
    
            goto L_0044258C;
    }
    // 0x00442740: nop

    // 0x00442744: lw          $ra, 0x90($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X90);
    // 0x00442748: lw          $s7, 0x8C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X8C);
    // 0x0044274C: lw          $s6, 0x88($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X88);
    // 0x00442750: lw          $s5, 0x84($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X84);
    // 0x00442754: lw          $s4, 0x80($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X80);
    // 0x00442758: lw          $s3, 0x7C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X7C);
    // 0x0044275C: lw          $s2, 0x78($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X78);
    // 0x00442760: lw          $s1, 0x74($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X74);
    // 0x00442764: lw          $s0, 0x70($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X70);
    // 0x00442768: ldc1        $f24, 0xB8($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0XB8);
    // 0x0044276C: ldc1        $f23, 0xB0($sp)
    CHECK_FR(ctx, 23);
    ctx->f23.u64 = LD(ctx->r29, 0XB0);
    // 0x00442770: ldc1        $f22, 0xA8($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0XA8);
    // 0x00442774: ldc1        $f21, 0xA0($sp)
    CHECK_FR(ctx, 21);
    ctx->f21.u64 = LD(ctx->r29, 0XA0);
    // 0x00442778: ldc1        $f20, 0x98($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X98);
    // 0x0044277C: jr          $ra
    // 0x00442780: addiu       $sp, $sp, 0xC0
    ctx->r29 = ADD32(ctx->r29, 0XC0);
    return;
    // 0x00442780: addiu       $sp, $sp, 0xC0
    ctx->r29 = ADD32(ctx->r29, 0XC0);
;}
RECOMP_FUNC void func_00455324(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_0041C3A0:
    // 0x00455324: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x00455328: lhu         $v0, -0x5518($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X5518);
    // 0x0045532C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00455330: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00455334: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x00455338: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0045533C: srl         $s0, $v0, 4
    ctx->r16 = S32(U32(ctx->r2) >> 4);
    // 0x00455340: bne         $s0, $zero, L_00455358
    if (ctx->r16 != 0) {
        // 0x00455344: addu        $s1, $a0, $zero
        ctx->r17 = ADD32(ctx->r4, 0);
            goto L_00455358;
    }
    // 0x00455344: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x00455348: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0045534C: addiu       $v0, $v0, 0x4008
    ctx->r2 = ADD32(ctx->r2, 0X4008);
    // 0x00455350: j           L_0041C3A0
    // 0x00455354: sw          $v0, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r2;
    entry_0041C3A0(rdram, ctx);
    return;
    // 0x00455354: sw          $v0, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r2;
L_00455358:
    // 0x00455358: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x0045535C: bne         $s0, $v0, L_00455374
    if (ctx->r16 != ctx->r2) {
        // 0x00455360: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_00455374;
    }
    // 0x00455360: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x00455364: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00455368: addiu       $v0, $v0, 0x4020
    ctx->r2 = ADD32(ctx->r2, 0X4020);
    // 0x0045536C: j           L_0041C3A0
    // 0x00455370: sw          $v0, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r2;
    entry_0041C3A0(rdram, ctx);
    return;
    // 0x00455370: sw          $v0, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r2;
L_00455374:
    // 0x00455374: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00455378: addiu       $v0, $v0, 0x4038
    ctx->r2 = ADD32(ctx->r2, 0X4038);
    // 0x0045537C: jal         0x004160F0
    // 0x00455380: sw          $v0, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r2;
    func_004160F0(rdram, ctx);
        goto after_0;
    // 0x00455380: sw          $v0, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r2;
    after_0:
    // 0x00455384: addiu       $v0, $v0, -0x2
    ctx->r2 = ADD32(ctx->r2, -0X2);
    // 0x00455388: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x0045538C: addiu       $a1, $a1, 0x1310
    ctx->r5 = ADD32(ctx->r5, 0X1310);
    // 0x00455390: lw          $a0, 0x14($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X14);
    // 0x00455394: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    // 0x00455398: jal         0x0029E3E0
    // 0x0045539C: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    func_0029E3E0(rdram, ctx);
        goto after_1;
    // 0x0045539C: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    after_1:
    // 0x004553A0: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x004553A4: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x004553A8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x004553AC: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x004553B0: jr          $ra
    // 0x004553B4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x004553B4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_004511B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004511B4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x004511B8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x004511BC: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x004511C0: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x004511C4: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x004511C8: lw          $s1, 0x1C($s0)
    ctx->r17 = MEM_W(ctx->r16, 0X1C);
    // 0x004511CC: jal         0x00421170
    // 0x004511D0: nop

    entry_00421170(rdram, ctx);
        goto after_0;
    // 0x004511D0: nop

    after_0:
    // 0x004511D4: jal         0x00275904
    // 0x004511D8: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    func_00275904(rdram, ctx);
        goto after_1;
    // 0x004511D8: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    after_1:
    // 0x004511DC: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x004511E0: addiu       $a0, $a0, -0x61D4
    ctx->r4 = ADD32(ctx->r4, -0X61D4);
    // 0x004511E4: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x004511E8: addiu       $a1, $a1, -0x4A38
    ctx->r5 = ADD32(ctx->r5, -0X4A38);
    // 0x004511EC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x004511F0: lw          $a3, 0x20($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X20);
    // 0x004511F4: jal         0x00416644
    // 0x004511F8: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    func_00416644(rdram, ctx);
        goto after_2;
    // 0x004511F8: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    after_2:
    // 0x004511FC: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x00451200: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x00451204: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x00451208: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0045120C: jr          $ra
    // 0x00451210: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x00451210: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_0022A1A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0022A1A4: addiu       $sp, $sp, -0xF8
    ctx->r29 = ADD32(ctx->r29, -0XF8);
    // 0x0022A1A8: sw          $s2, 0xD8($sp)
    MEM_W(0XD8, ctx->r29) = ctx->r18;
    // 0x0022A1AC: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x0022A1B0: sw          $ra, 0xDC($sp)
    MEM_W(0XDC, ctx->r29) = ctx->r31;
    // 0x0022A1B4: sw          $s1, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->r17;
    // 0x0022A1B8: sw          $s0, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = ctx->r16;
    // 0x0022A1BC: sdc1        $f22, 0xF0($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0XF0, ctx->r29);
    // 0x0022A1C0: sdc1        $f21, 0xE8($sp)
    CHECK_FR(ctx, 21);
    SD(ctx->f21.u64, 0XE8, ctx->r29);
    // 0x0022A1C4: sdc1        $f20, 0xE0($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0XE0, ctx->r29);
    // 0x0022A1C8: lw          $s0, 0x114($s2)
    ctx->r16 = MEM_W(ctx->r18, 0X114);
    // 0x0022A1CC: beq         $s0, $zero, L_0022A3C4
    if (ctx->r16 == 0) {
        // 0x0022A1D0: nop
    
            goto L_0022A3C4;
    }
    // 0x0022A1D0: nop

    // 0x0022A1D4: lwc1        $f1, 0x11C($s2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r18, 0X11C);
    // 0x0022A1D8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0022A1DC: lwc1        $f0, 0x618C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X618C);
    // 0x0022A1E0: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x0022A1E4: nop

    // 0x0022A1E8: bc1f        L_0022A3C4
    if (!c1cs) {
        // 0x0022A1EC: nop
    
            goto L_0022A3C4;
    }
    // 0x0022A1EC: nop

    // 0x0022A1F0: jal         0x0026841C
    // 0x0022A1F4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_0026841C(rdram, ctx);
        goto after_0;
    // 0x0022A1F4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x0022A1F8: lw          $v1, 0x4($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X4);
    // 0x0022A1FC: lw          $t0, 0x8($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X8);
    // 0x0022A200: lw          $t1, 0xC($s0)
    ctx->r9 = MEM_W(ctx->r16, 0XC);
    // 0x0022A204: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    // 0x0022A208: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x0022A20C: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    // 0x0022A210: lwc1        $f1, 0x14($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X14);
    // 0x0022A214: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x0022A218: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0022A21C: jal         0x002671B4
    // 0x0022A220: swc1        $f1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    func_002671B4(rdram, ctx);
        goto after_1;
    // 0x0022A220: swc1        $f1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    after_1:
    // 0x0022A224: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0022A228: lwc1        $f1, 0x6190($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X6190);
    // 0x0022A22C: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0022A230: addiu       $s1, $sp, 0x20
    ctx->r17 = ADD32(ctx->r29, 0X20);
    // 0x0022A234: lwc1        $f1, 0x14($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X14);
    // 0x0022A238: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0022A23C: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x0022A240: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x0022A244: addiu       $a2, $s2, 0x4
    ctx->r6 = ADD32(ctx->r18, 0X4);
    // 0x0022A248: jal         0x0020EF2C
    // 0x0022A24C: swc1        $f1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    func_0020EF2C(rdram, ctx);
        goto after_2;
    // 0x0022A24C: swc1        $f1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    after_2:
    // 0x0022A250: lwc1        $f1, 0x20($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x0022A254: mul.s       $f1, $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f1.fl);
    // 0x0022A258: lwc1        $f0, 0x24($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X24);
    // 0x0022A25C: mul.s       $f0, $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x0022A260: lwc1        $f12, 0x28($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X28);
    // 0x0022A264: mul.s       $f12, $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x0022A268: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x0022A26C: jal         0x00298470
    // 0x0022A270: add.s       $f12, $f1, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = ctx->f1.fl + ctx->f12.fl;
    func_00298470(rdram, ctx);
        goto after_3;
    // 0x0022A270: add.s       $f12, $f1, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = ctx->f1.fl + ctx->f12.fl;
    after_3:
    // 0x0022A274: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0022A278: lwc1        $f1, 0x6194($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X6194);
    // 0x0022A27C: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x0022A280: c.le.s      $f20, $f1
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f20.fl <= ctx->f1.fl;
    // 0x0022A284: nop

    // 0x0022A288: bc1f        L_0022A2B0
    if (!c1cs) {
        // 0x0022A28C: nop
    
            goto L_0022A2B0;
    }
    // 0x0022A28C: nop

    // 0x0022A290: lw          $v1, 0x4($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X4);
    // 0x0022A294: lw          $t0, 0x8($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X8);
    // 0x0022A298: lw          $t1, 0xC($s0)
    ctx->r9 = MEM_W(ctx->r16, 0XC);
    // 0x0022A29C: sw          $v1, 0x4($s2)
    MEM_W(0X4, ctx->r18) = ctx->r3;
    // 0x0022A2A0: sw          $t0, 0x8($s2)
    MEM_W(0X8, ctx->r18) = ctx->r8;
    // 0x0022A2A4: sw          $t1, 0xC($s2)
    MEM_W(0XC, ctx->r18) = ctx->r9;
    // 0x0022A2A8: j           L_0022A4A4
    // 0x0022A2AC: nop

        goto L_0022A4A4;
    // 0x0022A2AC: nop

L_0022A2B0:
    // 0x0022A2B0: jal         0x0020F040
    // 0x0022A2B4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_0020F040(rdram, ctx);
        goto after_4;
    // 0x0022A2B4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_4:
    // 0x0022A2B8: addiu       $a0, $sp, 0x50
    ctx->r4 = ADD32(ctx->r29, 0X50);
    // 0x0022A2BC: jal         0x0020E810
    // 0x0022A2C0: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_0020E810(rdram, ctx);
        goto after_5;
    // 0x0022A2C0: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_5:
    // 0x0022A2C4: addiu       $a0, $sp, 0x40
    ctx->r4 = ADD32(ctx->r29, 0X40);
    // 0x0022A2C8: jal         0x0020E810
    // 0x0022A2CC: addiu       $a1, $s2, 0x150
    ctx->r5 = ADD32(ctx->r18, 0X150);
    func_0020E810(rdram, ctx);
        goto after_6;
    // 0x0022A2CC: addiu       $a1, $s2, 0x150
    ctx->r5 = ADD32(ctx->r18, 0X150);
    after_6:
    // 0x0022A2D0: lwc1        $f1, 0x18($s2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r18, 0X18);
    // 0x0022A2D4: mul.s       $f1, $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f1.fl);
    // 0x0022A2D8: lwc1        $f0, 0x1C($s2)
    ctx->f0.u32l = MEM_W(ctx->r18, 0X1C);
    // 0x0022A2DC: mul.s       $f0, $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x0022A2E0: lwc1        $f12, 0x20($s2)
    ctx->f12.u32l = MEM_W(ctx->r18, 0X20);
    // 0x0022A2E4: mul.s       $f12, $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x0022A2E8: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x0022A2EC: jal         0x00298470
    // 0x0022A2F0: add.s       $f12, $f1, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = ctx->f1.fl + ctx->f12.fl;
    func_00298470(rdram, ctx);
        goto after_7;
    // 0x0022A2F0: add.s       $f12, $f1, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = ctx->f1.fl + ctx->f12.fl;
    after_7:
    // 0x0022A2F4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0022A2F8: lwc1        $f1, 0x6198($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X6198);
    // 0x0022A2FC: c.lt.s      $f20, $f1
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f20.fl < ctx->f1.fl;
    // 0x0022A300: nop

    // 0x0022A304: bc1f        L_0022A35C
    if (!c1cs) {
        // 0x0022A308: mov.s       $f21, $f0
        CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 0);
    ctx->f21.fl = ctx->f0.fl;
            goto L_0022A35C;
    }
    // 0x0022A308: mov.s       $f21, $f0
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 0);
    ctx->f21.fl = ctx->f0.fl;
    // 0x0022A30C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0022A310: lwc1        $f0, 0x619C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X619C);
    // 0x0022A314: sub.s       $f1, $f20, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f20.fl - ctx->f0.fl;
    // 0x0022A318: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x0022A31C: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x0022A320: nop

    // 0x0022A324: bc1f        L_0022A334
    if (!c1cs) {
        // 0x0022A328: nop
    
            goto L_0022A334;
    }
    // 0x0022A328: nop

    // 0x0022A32C: j           L_0022A340
    // 0x0022A330: mov.s       $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    ctx->f1.fl = ctx->f0.fl;
        goto L_0022A340;
    // 0x0022A330: mov.s       $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    ctx->f1.fl = ctx->f0.fl;
L_0022A334:
    // 0x0022A334: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0022A338: lwc1        $f0, 0x61A0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X61A0);
    // 0x0022A33C: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
L_0022A340:
    // 0x0022A340: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0022A344: lwc1        $f0, 0x61A4($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X61A4);
    // 0x0022A348: mul.s       $f0, $f1, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x0022A34C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0022A350: lwc1        $f1, 0x61A8($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X61A8);
    // 0x0022A354: j           L_0022A364
    // 0x0022A358: sub.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl - ctx->f0.fl;
        goto L_0022A364;
    // 0x0022A358: sub.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl - ctx->f0.fl;
L_0022A35C:
    // 0x0022A35C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0022A360: lwc1        $f1, 0x61AC($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X61AC);
L_0022A364:
    // 0x0022A364: addiu       $s0, $sp, 0x60
    ctx->r16 = ADD32(ctx->r29, 0X60);
    // 0x0022A368: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0022A36C: addiu       $a2, $sp, 0x40
    ctx->r6 = ADD32(ctx->r29, 0X40);
    // 0x0022A370: mfc1        $a1, $f1
    ctx->r5 = (int32_t)ctx->f_odd[(1 - 1) * 2];
    // 0x0022A374: jal         0x0020DCC8
    // 0x0022A378: addiu       $a3, $sp, 0x50
    ctx->r7 = ADD32(ctx->r29, 0X50);
    func_0020DCC8(rdram, ctx);
        goto after_8;
    // 0x0022A378: addiu       $a3, $sp, 0x50
    ctx->r7 = ADD32(ctx->r29, 0X50);
    after_8:
    // 0x0022A37C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0022A380: addiu       $s0, $sp, 0x70
    ctx->r16 = ADD32(ctx->r29, 0X70);
    // 0x0022A384: jal         0x00211114
    // 0x0022A388: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_00211114(rdram, ctx);
        goto after_9;
    // 0x0022A388: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_9:
    // 0x0022A38C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0022A390: addiu       $a1, $sp, 0x30
    ctx->r5 = ADD32(ctx->r29, 0X30);
    // 0x0022A394: addiu       $s0, $s2, 0x150
    ctx->r16 = ADD32(ctx->r18, 0X150);
    // 0x0022A398: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0022A39C: lwc1        $f0, 0x61B0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X61B0);
    // 0x0022A3A0: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    // 0x0022A3A4: sw          $zero, 0x30($sp)
    MEM_W(0X30, ctx->r29) = 0;
    // 0x0022A3A8: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x0022A3AC: jal         0x0020F85C
    // 0x0022A3B0: swc1        $f0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f0.u32l;
    func_0020F85C(rdram, ctx);
        goto after_10;
    // 0x0022A3B0: swc1        $f0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f0.u32l;
    after_10:
    // 0x0022A3B4: addiu       $a0, $s2, 0x18
    ctx->r4 = ADD32(ctx->r18, 0X18);
    // 0x0022A3B8: mfc1        $a2, $f21
    ctx->r6 = (int32_t)ctx->f_odd[(21 - 1) * 2];
    // 0x0022A3BC: jal         0x0020EF60
    // 0x0022A3C0: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_0020EF60(rdram, ctx);
        goto after_11;
    // 0x0022A3C0: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_11:
L_0022A3C4:
    // 0x0022A3C4: lw          $v0, 0xF8($s2)
    ctx->r2 = MEM_W(ctx->r18, 0XF8);
    // 0x0022A3C8: lw          $v0, 0x30($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X30);
    // 0x0022A3CC: lhu         $a0, 0x10($v0)
    ctx->r4 = MEM_HU(ctx->r2, 0X10);
    // 0x0022A3D0: jal         0x0026D210
    // 0x0022A3D4: nop

    func_0026D210(rdram, ctx);
        goto after_12;
    // 0x0022A3D4: nop

    after_12:
    // 0x0022A3D8: mtc1        $zero, $f22
    ctx->f22.u32l = 0;
    // 0x0022A3DC: mov.s       $f21, $f0
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 0);
    ctx->f21.fl = ctx->f0.fl;
    // 0x0022A3E0: c.eq.s      $f21, $f22
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f21.fl == ctx->f22.fl;
    // 0x0022A3E4: nop

    // 0x0022A3E8: bc1t        L_0022A498
    if (c1cs) {
        // 0x0022A3EC: addiu       $a0, $sp, 0xB0
        ctx->r4 = ADD32(ctx->r29, 0XB0);
            goto L_0022A498;
    }
    // 0x0022A3EC: addiu       $a0, $sp, 0xB0
    ctx->r4 = ADD32(ctx->r29, 0XB0);
    // 0x0022A3F0: mfc1        $a2, $f21
    ctx->r6 = (int32_t)ctx->f_odd[(21 - 1) * 2];
    // 0x0022A3F4: lw          $v1, 0x150($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X150);
    // 0x0022A3F8: lw          $t0, 0x154($s2)
    ctx->r8 = MEM_W(ctx->r18, 0X154);
    // 0x0022A3FC: lw          $t1, 0x158($s2)
    ctx->r9 = MEM_W(ctx->r18, 0X158);
    // 0x0022A400: sw          $v1, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->r3;
    // 0x0022A404: sw          $t0, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->r8;
    // 0x0022A408: sw          $t1, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->r9;
    // 0x0022A40C: jal         0x0020EF60
    // 0x0022A410: addiu       $a1, $sp, 0xC0
    ctx->r5 = ADD32(ctx->r29, 0XC0);
    func_0020EF60(rdram, ctx);
        goto after_13;
    // 0x0022A410: addiu       $a1, $sp, 0xC0
    ctx->r5 = ADD32(ctx->r29, 0XC0);
    after_13:
    // 0x0022A414: addiu       $s0, $s2, 0x18
    ctx->r16 = ADD32(ctx->r18, 0X18);
    // 0x0022A418: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0022A41C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x0022A420: jal         0x0020EEF8
    // 0x0022A424: addiu       $a2, $sp, 0xB0
    ctx->r6 = ADD32(ctx->r29, 0XB0);
    func_0020EEF8(rdram, ctx);
        goto after_14;
    // 0x0022A424: addiu       $a2, $sp, 0xB0
    ctx->r6 = ADD32(ctx->r29, 0XB0);
    after_14:
    // 0x0022A428: lwc1        $f1, 0x18($s2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r18, 0X18);
    // 0x0022A42C: mul.s       $f1, $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f1.fl);
    // 0x0022A430: lwc1        $f0, 0x1C($s2)
    ctx->f0.u32l = MEM_W(ctx->r18, 0X1C);
    // 0x0022A434: mul.s       $f0, $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x0022A438: lwc1        $f12, 0x20($s2)
    ctx->f12.u32l = MEM_W(ctx->r18, 0X20);
    // 0x0022A43C: mul.s       $f12, $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x0022A440: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x0022A444: jal         0x00298470
    // 0x0022A448: add.s       $f12, $f1, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = ctx->f1.fl + ctx->f12.fl;
    func_00298470(rdram, ctx);
        goto after_15;
    // 0x0022A448: add.s       $f12, $f1, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = ctx->f1.fl + ctx->f12.fl;
    after_15:
    // 0x0022A44C: lw          $v0, 0xF8($s2)
    ctx->r2 = MEM_W(ctx->r18, 0XF8);
    // 0x0022A450: lw          $v0, 0x30($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X30);
    // 0x0022A454: lhu         $a0, 0x12($v0)
    ctx->r4 = MEM_HU(ctx->r2, 0X12);
    // 0x0022A458: jal         0x0026D210
    // 0x0022A45C: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    func_0026D210(rdram, ctx);
        goto after_16;
    // 0x0022A45C: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    after_16:
    // 0x0022A460: c.lt.s      $f22, $f21
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 21);
    c1cs = ctx->f22.fl < ctx->f21.fl;
    // 0x0022A464: nop

    // 0x0022A468: bc1f        L_0022A47C
    if (!c1cs) {
        // 0x0022A46C: nop
    
            goto L_0022A47C;
    }
    // 0x0022A46C: nop

    // 0x0022A470: c.lt.s      $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f0.fl < ctx->f20.fl;
    // 0x0022A474: j           L_0022A480
    // 0x0022A478: nop

        goto L_0022A480;
    // 0x0022A478: nop

L_0022A47C:
    // 0x0022A47C: c.lt.s      $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f20.fl < ctx->f0.fl;
L_0022A480:
    // 0x0022A480: nop

    // 0x0022A484: bc1f        L_0022A498
    if (!c1cs) {
        // 0x0022A488: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_0022A498;
    }
    // 0x0022A488: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0022A48C: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x0022A490: jal         0x0020EF60
    // 0x0022A494: addiu       $a1, $sp, 0xC0
    ctx->r5 = ADD32(ctx->r29, 0XC0);
    func_0020EF60(rdram, ctx);
        goto after_17;
    // 0x0022A494: addiu       $a1, $sp, 0xC0
    ctx->r5 = ADD32(ctx->r29, 0XC0);
    after_17:
L_0022A498:
    // 0x0022A498: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    // 0x0022A49C: jal         0x00229618
    // 0x0022A4A0: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_00229618(rdram, ctx);
        goto after_18;
    // 0x0022A4A0: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_18:
L_0022A4A4:
    // 0x0022A4A4: lw          $ra, 0xDC($sp)
    ctx->r31 = MEM_W(ctx->r29, 0XDC);
    // 0x0022A4A8: lw          $s2, 0xD8($sp)
    ctx->r18 = MEM_W(ctx->r29, 0XD8);
    // 0x0022A4AC: lw          $s1, 0xD4($sp)
    ctx->r17 = MEM_W(ctx->r29, 0XD4);
    // 0x0022A4B0: lw          $s0, 0xD0($sp)
    ctx->r16 = MEM_W(ctx->r29, 0XD0);
    // 0x0022A4B4: ldc1        $f22, 0xF0($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0XF0);
    // 0x0022A4B8: ldc1        $f21, 0xE8($sp)
    CHECK_FR(ctx, 21);
    ctx->f21.u64 = LD(ctx->r29, 0XE8);
    // 0x0022A4BC: ldc1        $f20, 0xE0($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0XE0);
    // 0x0022A4C0: jr          $ra
    // 0x0022A4C4: addiu       $sp, $sp, 0xF8
    ctx->r29 = ADD32(ctx->r29, 0XF8);
    return;
    // 0x0022A4C4: addiu       $sp, $sp, 0xF8
    ctx->r29 = ADD32(ctx->r29, 0XF8);
;}
RECOMP_FUNC void func_0044B438(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_004124B8:
    // 0x0044B438: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
L_00412538:
    // 0x0044B43C: lw          $v0, 0x1BB8($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1BB8);
    // 0x0044B440: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x0044B444: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x0044B448: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x0044B44C: bne         $v0, $zero, L_0044B45C
    if (ctx->r2 != 0) {
        // 0x0044B450: sw          $ra, 0x2C($sp)
        MEM_W(0X2C, ctx->r29) = ctx->r31;
            goto L_0044B45C;
    }
    // 0x0044B450: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x0044B454: j           L_00412538
    // 0x0044B458: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    entry_00412538(rdram, ctx);
    return;
    // 0x0044B458: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_0044B45C:
    // 0x0044B45C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x0044B460: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x0044B464: lw          $a0, 0x70D8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X70D8);
    // 0x0044B468: lui         $a1, 0x800F
    ctx->r5 = S32(0X800F << 16);
    // 0x0044B46C: lw          $a1, 0x709C($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X709C);
    // 0x0044B470: jal         0x0020185C
    // 0x0044B474: addiu       $a3, $sp, 0x20
    ctx->r7 = ADD32(ctx->r29, 0X20);
    func_0020185C(rdram, ctx);
        goto after_0;
    // 0x0044B474: addiu       $a3, $sp, 0x20
    ctx->r7 = ADD32(ctx->r29, 0X20);
    after_0:
    // 0x0044B478: bne         $v0, $zero, L_0044B488
    if (ctx->r2 != 0) {
        // 0x0044B47C: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_0044B488;
    }
    // 0x0044B47C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0044B480: j           L_004124B8
    // 0x0044B484: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    entry_004124B8(rdram, ctx);
    return;
    // 0x0044B484: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
L_0044B488:
    // 0x0044B488: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x0044B48C: addiu       $a3, $zero, 0x13
    ctx->r7 = ADD32(0, 0X13);
    // 0x0044B490: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    // 0x0044B494: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x0044B498: addiu       $v0, $v0, 0x970
    ctx->r2 = ADD32(ctx->r2, 0X970);
    // 0x0044B49C: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x0044B4A0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0044B4A4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x0044B4A8: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x0044B4AC: jal         0x0020367C
    // 0x0044B4B0: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    func_0020367C(rdram, ctx);
        goto after_1;
    // 0x0044B4B0: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    after_1:
    // 0x0044B4B4: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x0044B4B8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x0044B4BC: lui         $v0, 0x800F
    ctx->r2 = S32(0X800F << 16);
    // 0x0044B4C0: lw          $v0, 0x70D8($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X70D8);
    // 0x0044B4C4: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x0044B4C8: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x0044B4CC: addiu       $a3, $v0, -0x1
    ctx->r7 = ADD32(ctx->r2, -0X1);
    // 0x0044B4D0: blez        $a3, L_0044B524
    if (SIGNED(ctx->r7) <= 0) {
        // 0x0044B4D4: addiu       $v1, $v1, 0x8
        ctx->r3 = ADD32(ctx->r3, 0X8);
            goto L_0044B524;
    }
    // 0x0044B4D4: addiu       $v1, $v1, 0x8
    ctx->r3 = ADD32(ctx->r3, 0X8);
    // 0x0044B4D8: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x0044B4DC: lw          $a0, 0x1BB0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1BB0);
    // 0x0044B4E0: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
L_0044B4E4:
    // 0x0044B4E4: lw          $v0, 0x8($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X8);
    // 0x0044B4E8: bnel        $v0, $s0, L_0044B518
    if (ctx->r2 != ctx->r16) {
        // 0x0044B4EC: addiu       $a2, $a2, 0x1
        ctx->r6 = ADD32(ctx->r6, 0X1);
            goto L_0044B518;
    }
    goto skip_0;
    // 0x0044B4EC: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    skip_0:
    // 0x0044B4F0: lw          $v0, 0xC($v1)
    ctx->r2 = MEM_W(ctx->r3, 0XC);
    // 0x0044B4F4: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
    // 0x0044B4F8: bnel        $v0, $zero, L_0044B50C
    if (ctx->r2 != 0) {
        // 0x0044B4FC: sw          $s0, 0xE0($a0)
        MEM_W(0XE0, ctx->r4) = ctx->r16;
            goto L_0044B50C;
    }
    goto skip_1;
    // 0x0044B4FC: sw          $s0, 0xE0($a0)
    MEM_W(0XE0, ctx->r4) = ctx->r16;
    skip_1:
    // 0x0044B500: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x0044B504: sw          $v0, 0xD8($a0)
    MEM_W(0XD8, ctx->r4) = ctx->r2;
    // 0x0044B508: sw          $s0, 0xE0($a0)
    MEM_W(0XE0, ctx->r4) = ctx->r16;
L_0044B50C:
    // 0x0044B50C: sw          $a2, 0xDC($a0)
    MEM_W(0XDC, ctx->r4) = ctx->r6;
    // 0x0044B510: sw          $t0, 0x58($a0)
    MEM_W(0X58, ctx->r4) = ctx->r8;
    // 0x0044B514: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
L_0044B518:
    // 0x0044B518: slt         $v0, $a2, $a3
    ctx->r2 = SIGNED(ctx->r6) < SIGNED(ctx->r7) ? 1 : 0;
    // 0x0044B51C: bne         $v0, $zero, L_0044B4E4
    if (ctx->r2 != 0) {
        // 0x0044B520: addiu       $v1, $v1, 0x4C
        ctx->r3 = ADD32(ctx->r3, 0X4C);
            goto L_0044B4E4;
    }
    // 0x0044B520: addiu       $v1, $v1, 0x4C
    ctx->r3 = ADD32(ctx->r3, 0X4C);
L_0044B524:
    // 0x0044B524: jal         0x002051F4
    // 0x0044B528: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_002051F4(rdram, ctx);
        goto after_2;
    // 0x0044B528: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_2:
    // 0x0044B52C: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x0044B530: lw          $v0, 0x1BB0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1BB0);
    // 0x0044B534: lw          $v0, 0xD8($v0)
    ctx->r2 = MEM_W(ctx->r2, 0XD8);
    // 0x0044B538: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x0044B53C: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x0044B540: jr          $ra
    // 0x0044B544: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x0044B544: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_0022025C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0022025C: .word       0x031F019D                   # dmultu      $t8, $ra # 00000180 <InstrIdType: CPU_SPECIAL>
    DMULTU(U64(ctx->r24), U64(ctx->r31), &lo, &hi);
;}
RECOMP_FUNC void func_00288D3C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00288D3C: mtc1        $a1, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r5;
    // 0x00288D40: lui         $a1, 0x800F
    ctx->r5 = S32(0X800F << 16);
    // 0x00288D44: addiu       $a1, $a1, 0x5D2C
    ctx->r5 = ADD32(ctx->r5, 0X5D2C);
    // 0x00288D48: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x00288D4C: beq         $v0, $zero, L_00288D80
    if (ctx->r2 == 0) {
            // 0x00288D50: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    func_00288D80(rdram, ctx);
    return;
    }
    // 0x00288D50: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x00288D54: beq         $a3, $v0, L_00288D80
    if (ctx->r7 == ctx->r2) {
            // 0x00288D58: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    func_00288D80(rdram, ctx);
    return;
    }
    // 0x00288D58: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00288D5C: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
    // 0x00288D60: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x00288D64: addu        $at, $a0, $at
    ctx->r1 = ADD32(ctx->r4, ctx->r1);
    // 0x00288D68: sb          $v1, 0x3FE1($at)
    MEM_B(0X3FE1, ctx->r1) = ctx->r3;
    // 0x00288D6C: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x00288D70: addu        $at, $a0, $at
    ctx->r1 = ADD32(ctx->r4, ctx->r1);
    // 0x00288D74: sw          $a3, 0x3FDC($at)
    MEM_W(0X3FDC, ctx->r1) = ctx->r7;
    // 0x00288D78: jr          $ra
    // 0x00288D7C: sw          $zero, 0x0($a1)
    MEM_W(0X0, ctx->r5) = 0;
    return;
    // 0x00288D7C: sw          $zero, 0x0($a1)
    MEM_W(0X0, ctx->r5) = 0;
;}
RECOMP_FUNC void func_00412438(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00412438: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x0041243C: lw          $v0, 0x1BB8($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1BB8);
    // 0x00412440: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x00412444: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x00412448: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x0041244C: bne         $v0, $zero, L_0041245C
    if (ctx->r2 != 0) {
        // 0x00412450: sw          $ra, 0x2C($sp)
        MEM_W(0X2C, ctx->r29) = ctx->r31;
            goto L_0041245C;
    }
    // 0x00412450: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x00412454: j           L_00412538
    // 0x00412458: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
        goto L_00412538;
    // 0x00412458: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_0041245C:
    // 0x0041245C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x00412460: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x00412464: lw          $a0, 0x70D8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X70D8);
    // 0x00412468: lui         $a1, 0x800F
    ctx->r5 = S32(0X800F << 16);
    // 0x0041246C: lw          $a1, 0x709C($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X709C);
    // 0x00412470: jal         0x0020185C
    // 0x00412474: addiu       $a3, $sp, 0x20
    ctx->r7 = ADD32(ctx->r29, 0X20);
    func_0020185C(rdram, ctx);
        goto after_0;
    // 0x00412474: addiu       $a3, $sp, 0x20
    ctx->r7 = ADD32(ctx->r29, 0X20);
    after_0:
    // 0x00412478: bne         $v0, $zero, L_00412488
    if (ctx->r2 != 0) {
        // 0x0041247C: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_00412488;
    }
    // 0x0041247C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x00412480: j           L_004124B8
    // 0x00412484: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
        goto L_004124B8;
    // 0x00412484: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
L_00412488:
    // 0x00412488: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x0041248C: addiu       $a3, $zero, 0x13
    ctx->r7 = ADD32(0, 0X13);
    // 0x00412490: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    // 0x00412494: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x00412498: addiu       $v0, $v0, 0x970
    ctx->r2 = ADD32(ctx->r2, 0X970);
    // 0x0041249C: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x004124A0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x004124A4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x004124A8: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x004124AC: jal         0x0020367C
    // 0x004124B0: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    func_0020367C(rdram, ctx);
        goto after_1;
    // 0x004124B0: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    after_1:
    // 0x004124B4: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
L_004124B8:
    // 0x004124B8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x004124BC: lui         $v0, 0x800F
    ctx->r2 = S32(0X800F << 16);
    // 0x004124C0: lw          $v0, 0x70D8($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X70D8);
    // 0x004124C4: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x004124C8: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x004124CC: addiu       $a3, $v0, -0x1
    ctx->r7 = ADD32(ctx->r2, -0X1);
    // 0x004124D0: blez        $a3, L_00412524
    if (SIGNED(ctx->r7) <= 0) {
        // 0x004124D4: addiu       $v1, $v1, 0x8
        ctx->r3 = ADD32(ctx->r3, 0X8);
            goto L_00412524;
    }
    // 0x004124D4: addiu       $v1, $v1, 0x8
    ctx->r3 = ADD32(ctx->r3, 0X8);
    // 0x004124D8: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x004124DC: lw          $a0, 0x1BB0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1BB0);
    // 0x004124E0: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
L_004124E4:
    // 0x004124E4: lw          $v0, 0x8($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X8);
    // 0x004124E8: bnel        $v0, $s0, L_00412518
    if (ctx->r2 != ctx->r16) {
        // 0x004124EC: addiu       $a2, $a2, 0x1
        ctx->r6 = ADD32(ctx->r6, 0X1);
            goto L_00412518;
    }
    goto skip_0;
    // 0x004124EC: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    skip_0:
    // 0x004124F0: lw          $v0, 0xC($v1)
    ctx->r2 = MEM_W(ctx->r3, 0XC);
    // 0x004124F4: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
    // 0x004124F8: bnel        $v0, $zero, L_0041250C
    if (ctx->r2 != 0) {
        // 0x004124FC: sw          $s0, 0xE0($a0)
        MEM_W(0XE0, ctx->r4) = ctx->r16;
            goto L_0041250C;
    }
    goto skip_1;
    // 0x004124FC: sw          $s0, 0xE0($a0)
    MEM_W(0XE0, ctx->r4) = ctx->r16;
    skip_1:
    // 0x00412500: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x00412504: sw          $v0, 0xD8($a0)
    MEM_W(0XD8, ctx->r4) = ctx->r2;
    // 0x00412508: sw          $s0, 0xE0($a0)
    MEM_W(0XE0, ctx->r4) = ctx->r16;
L_0041250C:
    // 0x0041250C: sw          $a2, 0xDC($a0)
    MEM_W(0XDC, ctx->r4) = ctx->r6;
    // 0x00412510: sw          $t0, 0x58($a0)
    MEM_W(0X58, ctx->r4) = ctx->r8;
    // 0x00412514: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
L_00412518:
    // 0x00412518: slt         $v0, $a2, $a3
    ctx->r2 = SIGNED(ctx->r6) < SIGNED(ctx->r7) ? 1 : 0;
    // 0x0041251C: bne         $v0, $zero, L_004124E4
    if (ctx->r2 != 0) {
        // 0x00412520: addiu       $v1, $v1, 0x4C
        ctx->r3 = ADD32(ctx->r3, 0X4C);
            goto L_004124E4;
    }
    // 0x00412520: addiu       $v1, $v1, 0x4C
    ctx->r3 = ADD32(ctx->r3, 0X4C);
L_00412524:
    // 0x00412524: jal         0x002051F4
    // 0x00412528: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_002051F4(rdram, ctx);
        goto after_2;
    // 0x00412528: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_2:
    // 0x0041252C: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x00412530: lw          $v0, 0x1BB0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1BB0);
    // 0x00412534: lw          $v0, 0xD8($v0)
    ctx->r2 = MEM_W(ctx->r2, 0XD8);
L_00412538:
    // 0x00412538: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x0041253C: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x00412540: jr          $ra
    // 0x00412544: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x00412544: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_0027AEA8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0027AEA8: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x0027AEAC: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0027AEB0: lw          $v0, 0x6D54($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X6D54);
    // 0x0027AEB4: addu        $v1, $a0, $zero
    ctx->r3 = ADD32(ctx->r4, 0);
    // 0x0027AEB8: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x0027AEBC: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x0027AEC0: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x0027AEC4: addu        $s2, $a2, $zero
    ctx->r18 = ADD32(ctx->r6, 0);
    // 0x0027AEC8: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x0027AECC: addu        $s3, $a3, $zero
    ctx->r19 = ADD32(ctx->r7, 0);
    // 0x0027AED0: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x0027AED4: beq         $v0, $zero, L_0027AF30
    if (ctx->r2 == 0) {
        // 0x0027AED8: sw          $s0, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->r16;
            goto L_0027AF30;
    }
    // 0x0027AED8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x0027AEDC: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x0027AEE0: addiu       $a0, $a0, 0x7078
    ctx->r4 = ADD32(ctx->r4, 0X7078);
    // 0x0027AEE4: addu        $a1, $v1, $zero
    ctx->r5 = ADD32(ctx->r3, 0);
    // 0x0027AEE8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x0027AEEC: jal         0x00224DF4
    // 0x0027AEF0: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_00224DF4(rdram, ctx);
        goto after_0;
    // 0x0027AEF0: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_0:
    // 0x0027AEF4: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x0027AEF8: beq         $s0, $zero, L_0027AF30
    if (ctx->r16 == 0) {
        // 0x0027AEFC: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_0027AF30;
    }
    // 0x0027AEFC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0027AF00: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x0027AF04: addiu       $a2, $sp, 0x10
    ctx->r6 = ADD32(ctx->r29, 0X10);
    // 0x0027AF08: jal         0x0027AE44
    // 0x0027AF0C: addiu       $a3, $sp, 0x14
    ctx->r7 = ADD32(ctx->r29, 0X14);
    func_0027AE44(rdram, ctx);
        goto after_1;
    // 0x0027AF0C: addiu       $a3, $sp, 0x14
    ctx->r7 = ADD32(ctx->r29, 0X14);
    after_1:
    // 0x0027AF10: lw          $v0, 0x10($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X10);
    // 0x0027AF14: lhu         $v1, 0x4($v0)
    ctx->r3 = MEM_HU(ctx->r2, 0X4);
    // 0x0027AF18: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0027AF1C: sw          $v1, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r3;
    // 0x0027AF20: lhu         $v0, 0x6($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X6);
    // 0x0027AF24: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x0027AF28: jal         0x002051F4
    // 0x0027AF2C: sw          $v0, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r2;
    func_002051F4(rdram, ctx);
        goto after_2;
    // 0x0027AF2C: sw          $v0, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r2;
    after_2:
L_0027AF30:
    // 0x0027AF30: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x0027AF34: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x0027AF38: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x0027AF3C: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x0027AF40: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x0027AF44: jr          $ra
    // 0x0027AF48: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x0027AF48: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_0025D9E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0025D9E4: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x0025D9E8: sw          $s5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r21;
    // 0x0025D9EC: addu        $s5, $a0, $zero
    ctx->r21 = ADD32(ctx->r4, 0);
    // 0x0025D9F0: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x0025D9F4: addu        $s4, $a1, $zero
    ctx->r20 = ADD32(ctx->r5, 0);
    // 0x0025D9F8: addiu       $a0, $s4, 0x94
    ctx->r4 = ADD32(ctx->r20, 0X94);
    // 0x0025D9FC: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x0025DA00: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x0025DA04: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x0025DA08: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x0025DA0C: jal         0x0028479C
    // 0x0025DA10: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    func_0028479C(rdram, ctx);
        goto after_0;
    // 0x0025DA10: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_0:
    // 0x0025DA14: addiu       $s2, $zero, -0x1
    ctx->r18 = ADD32(0, -0X1);
    // 0x0025DA18: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x0025DA1C: lhu         $v0, 0x16($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X16);
    // 0x0025DA20: lb          $s0, 0x133($s4)
    ctx->r16 = MEM_B(ctx->r20, 0X133);
    // 0x0025DA24: beq         $v0, $zero, L_0025DAA8
    if (ctx->r2 == 0) {
        // 0x0025DA28: addu        $s3, $s2, $zero
        ctx->r19 = ADD32(ctx->r18, 0);
            goto L_0025DAA8;
    }
    // 0x0025DA28: addu        $s3, $s2, $zero
    ctx->r19 = ADD32(ctx->r18, 0);
    // 0x0025DA2C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0025DA30: beq         $s0, $v0, L_0025DA74
    if (ctx->r16 == ctx->r2) {
        // 0x0025DA34: slti        $v0, $s0, 0x2
        ctx->r2 = SIGNED(ctx->r16) < 0X2 ? 1 : 0;
            goto L_0025DA74;
    }
    // 0x0025DA34: slti        $v0, $s0, 0x2
    ctx->r2 = SIGNED(ctx->r16) < 0X2 ? 1 : 0;
    // 0x0025DA38: beq         $v0, $zero, L_0025DA50
    if (ctx->r2 == 0) {
        // 0x0025DA3C: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_0025DA50;
    }
    // 0x0025DA3C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x0025DA40: beq         $s0, $zero, L_0025DA60
    if (ctx->r16 == 0) {
        // 0x0025DA44: addu        $a0, $s5, $zero
        ctx->r4 = ADD32(ctx->r21, 0);
            goto L_0025DA60;
    }
    // 0x0025DA44: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    // 0x0025DA48: j           L_0025DAA8
    // 0x0025DA4C: nop

        goto L_0025DAA8;
    // 0x0025DA4C: nop

L_0025DA50:
    // 0x0025DA50: beq         $s0, $v0, L_0025DA8C
    if (ctx->r16 == ctx->r2) {
        // 0x0025DA54: addu        $a0, $s5, $zero
        ctx->r4 = ADD32(ctx->r21, 0);
            goto L_0025DA8C;
    }
    // 0x0025DA54: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    // 0x0025DA58: j           L_0025DAA8
    // 0x0025DA5C: nop

        goto L_0025DAA8;
    // 0x0025DA5C: nop

L_0025DA60:
    // 0x0025DA60: lhu         $a3, 0x16($s1)
    ctx->r7 = MEM_HU(ctx->r17, 0X16);
    // 0x0025DA64: lui         $a2, 0x800B
    ctx->r6 = S32(0X800B << 16);
    // 0x0025DA68: addiu       $a2, $a2, -0x910
    ctx->r6 = ADD32(ctx->r6, -0X910);
    // 0x0025DA6C: j           L_0025DA9C
    // 0x0025DA70: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
        goto L_0025DA9C;
    // 0x0025DA70: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
L_0025DA74:
    // 0x0025DA74: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    // 0x0025DA78: lhu         $a3, 0x16($s1)
    ctx->r7 = MEM_HU(ctx->r17, 0X16);
    // 0x0025DA7C: lui         $a2, 0x800B
    ctx->r6 = S32(0X800B << 16);
    // 0x0025DA80: addiu       $a2, $a2, -0x8E0
    ctx->r6 = ADD32(ctx->r6, -0X8E0);
    // 0x0025DA84: j           L_0025DA9C
    // 0x0025DA88: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
        goto L_0025DA9C;
    // 0x0025DA88: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
L_0025DA8C:
    // 0x0025DA8C: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    // 0x0025DA90: lhu         $a3, 0x16($s1)
    ctx->r7 = MEM_HU(ctx->r17, 0X16);
    // 0x0025DA94: lui         $a2, 0x800B
    ctx->r6 = S32(0X800B << 16);
    // 0x0025DA98: addiu       $a2, $a2, -0x8B0
    ctx->r6 = ADD32(ctx->r6, -0X8B0);
L_0025DA9C:
    // 0x0025DA9C: jal         0x00245A98
    // 0x0025DAA0: nop

    func_00245A98(rdram, ctx);
        goto after_1;
    // 0x0025DAA0: nop

    after_1:
    // 0x0025DAA4: addu        $s2, $v0, $zero
    ctx->r18 = ADD32(ctx->r2, 0);
L_0025DAA8:
    // 0x0025DAA8: lhu         $v0, 0x18($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X18);
    // 0x0025DAAC: beq         $v0, $zero, L_0025DB34
    if (ctx->r2 == 0) {
        // 0x0025DAB0: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_0025DB34;
    }
    // 0x0025DAB0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0025DAB4: beq         $s0, $v0, L_0025DAFC
    if (ctx->r16 == ctx->r2) {
        // 0x0025DAB8: slti        $v0, $s0, 0x2
        ctx->r2 = SIGNED(ctx->r16) < 0X2 ? 1 : 0;
            goto L_0025DAFC;
    }
    // 0x0025DAB8: slti        $v0, $s0, 0x2
    ctx->r2 = SIGNED(ctx->r16) < 0X2 ? 1 : 0;
    // 0x0025DABC: beq         $v0, $zero, L_0025DAD4
    if (ctx->r2 == 0) {
        // 0x0025DAC0: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_0025DAD4;
    }
    // 0x0025DAC0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x0025DAC4: beq         $s0, $zero, L_0025DAE4
    if (ctx->r16 == 0) {
        // 0x0025DAC8: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_0025DAE4;
    }
    // 0x0025DAC8: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x0025DACC: j           L_0025DB38
    // 0x0025DAD0: nop

        goto L_0025DB38;
    // 0x0025DAD0: nop

L_0025DAD4:
    // 0x0025DAD4: beq         $s0, $v0, L_0025DB14
    if (ctx->r16 == ctx->r2) {
        // 0x0025DAD8: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_0025DB14;
    }
    // 0x0025DAD8: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x0025DADC: j           L_0025DB38
    // 0x0025DAE0: nop

        goto L_0025DB38;
    // 0x0025DAE0: nop

L_0025DAE4:
    // 0x0025DAE4: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    // 0x0025DAE8: lhu         $a3, 0x18($s1)
    ctx->r7 = MEM_HU(ctx->r17, 0X18);
    // 0x0025DAEC: lui         $a2, 0x800B
    ctx->r6 = S32(0X800B << 16);
    // 0x0025DAF0: addiu       $a2, $a2, -0x880
    ctx->r6 = ADD32(ctx->r6, -0X880);
    // 0x0025DAF4: j           L_0025DB28
    // 0x0025DAF8: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
        goto L_0025DB28;
    // 0x0025DAF8: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
L_0025DAFC:
    // 0x0025DAFC: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    // 0x0025DB00: lhu         $a3, 0x18($s1)
    ctx->r7 = MEM_HU(ctx->r17, 0X18);
    // 0x0025DB04: lui         $a2, 0x800B
    ctx->r6 = S32(0X800B << 16);
    // 0x0025DB08: addiu       $a2, $a2, -0x850
    ctx->r6 = ADD32(ctx->r6, -0X850);
    // 0x0025DB0C: j           L_0025DB28
    // 0x0025DB10: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
        goto L_0025DB28;
    // 0x0025DB10: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
L_0025DB14:
    // 0x0025DB14: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    // 0x0025DB18: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    // 0x0025DB1C: lhu         $a3, 0x18($s1)
    ctx->r7 = MEM_HU(ctx->r17, 0X18);
    // 0x0025DB20: lui         $a2, 0x800B
    ctx->r6 = S32(0X800B << 16);
    // 0x0025DB24: addiu       $a2, $a2, -0x820
    ctx->r6 = ADD32(ctx->r6, -0X820);
L_0025DB28:
    // 0x0025DB28: jal         0x00245A98
    // 0x0025DB2C: nop

    func_00245A98(rdram, ctx);
        goto after_2;
    // 0x0025DB2C: nop

    after_2:
    // 0x0025DB30: addu        $s3, $v0, $zero
    ctx->r19 = ADD32(ctx->r2, 0);
L_0025DB34:
    // 0x0025DB34: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_0025DB38:
    // 0x0025DB38: beq         $s2, $v0, L_0025DBA8
    if (ctx->r18 == ctx->r2) {
        // 0x0025DB3C: addiu       $v1, $zero, -0x1
        ctx->r3 = ADD32(0, -0X1);
            goto L_0025DBA8;
    }
    // 0x0025DB3C: addiu       $v1, $zero, -0x1
    ctx->r3 = ADD32(0, -0X1);
    // 0x0025DB40: beq         $s3, $v0, L_0025DB9C
    if (ctx->r19 == ctx->r2) {
        // 0x0025DB44: nop
    
            goto L_0025DB9C;
    }
    // 0x0025DB44: nop

    // 0x0025DB48: jal         0x002113A4
    // 0x0025DB4C: nop

    func_002113A4(rdram, ctx);
        goto after_3;
    // 0x0025DB4C: nop

    after_3:
    // 0x0025DB50: lui         $v1, 0x1062
    ctx->r3 = S32(0X1062 << 16);
    // 0x0025DB54: ori         $v1, $v1, 0x4DD3
    ctx->r3 = ctx->r3 | 0X4DD3;
    // 0x0025DB58: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x0025DB5C: mult        $v0, $v1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x0025DB60: sra         $v1, $a1, 31
    ctx->r3 = S32(SIGNED(ctx->r5) >> 31);
    // 0x0025DB64: mfhi        $t0
    ctx->r8 = hi;
    // 0x0025DB68: sra         $a0, $t0, 6
    ctx->r4 = S32(SIGNED(ctx->r8) >> 6);
    // 0x0025DB6C: subu        $a0, $a0, $v1
    ctx->r4 = SUB32(ctx->r4, ctx->r3);
    // 0x0025DB70: sll         $v1, $a0, 5
    ctx->r3 = S32(ctx->r4 << 5);
    // 0x0025DB74: subu        $v1, $v1, $a0
    ctx->r3 = SUB32(ctx->r3, ctx->r4);
    // 0x0025DB78: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x0025DB7C: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x0025DB80: sll         $v1, $v1, 3
    ctx->r3 = S32(ctx->r3 << 3);
    // 0x0025DB84: subu        $a1, $a1, $v1
    ctx->r5 = SUB32(ctx->r5, ctx->r3);
    // 0x0025DB88: slti        $a1, $a1, 0x1F5
    ctx->r5 = SIGNED(ctx->r5) < 0X1F5 ? 1 : 0;
    // 0x0025DB8C: beq         $a1, $zero, L_0025DBB4
    if (ctx->r5 == 0) {
        // 0x0025DB90: addu        $v0, $s2, $zero
        ctx->r2 = ADD32(ctx->r18, 0);
            goto L_0025DBB4;
    }
    // 0x0025DB90: addu        $v0, $s2, $zero
    ctx->r2 = ADD32(ctx->r18, 0);
    // 0x0025DB94: j           L_0025DBB4
    // 0x0025DB98: addu        $v0, $s3, $zero
    ctx->r2 = ADD32(ctx->r19, 0);
        goto L_0025DBB4;
    // 0x0025DB98: addu        $v0, $s3, $zero
    ctx->r2 = ADD32(ctx->r19, 0);
L_0025DB9C:
    // 0x0025DB9C: bne         $s2, $s3, L_0025DBB4
    if (ctx->r18 != ctx->r19) {
        // 0x0025DBA0: addu        $v0, $s2, $zero
        ctx->r2 = ADD32(ctx->r18, 0);
            goto L_0025DBB4;
    }
    // 0x0025DBA0: addu        $v0, $s2, $zero
    ctx->r2 = ADD32(ctx->r18, 0);
    // 0x0025DBA4: addiu       $v1, $zero, -0x1
    ctx->r3 = ADD32(0, -0X1);
L_0025DBA8:
    // 0x0025DBA8: bne         $s3, $v1, L_0025DBB4
    if (ctx->r19 != ctx->r3) {
        // 0x0025DBAC: addu        $v0, $s3, $zero
        ctx->r2 = ADD32(ctx->r19, 0);
            goto L_0025DBB4;
    }
    // 0x0025DBAC: addu        $v0, $s3, $zero
    ctx->r2 = ADD32(ctx->r19, 0);
    // 0x0025DBB0: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_0025DBB4:
    // 0x0025DBB4: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x0025DBB8: lw          $s5, 0x24($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X24);
    // 0x0025DBBC: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x0025DBC0: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x0025DBC4: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x0025DBC8: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x0025DBCC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0025DBD0: jr          $ra
    // 0x0025DBD4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x0025DBD4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_002743D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002743D0: lwc1        $f1, 0x0($a0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r4, 0X0);
    // 0x002743D4: lwc1        $f0, 0x0($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X0);
    // 0x002743D8: sub.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl - ctx->f0.fl;
    // 0x002743DC: mul.s       $f1, $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f1.fl);
    // 0x002743E0: lwc1        $f3, 0x4($a0)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r4, 0X4);
    // 0x002743E4: lwc1        $f0, 0x4($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X4);
    // 0x002743E8: sub.s       $f3, $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f3.fl = ctx->f3.fl - ctx->f0.fl;
    // 0x002743EC: mul.s       $f3, $f3, $f3
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f3.fl = MUL_S(ctx->f3.fl, ctx->f3.fl);
    // 0x002743F0: lwc1        $f2, 0x8($a1)
    ctx->f2.u32l = MEM_W(ctx->r5, 0X8);
    // 0x002743F4: lwc1        $f0, 0x8($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X8);
    // 0x002743F8: sub.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f2.fl;
    // 0x002743FC: mul.s       $f0, $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x00274400: add.s       $f1, $f1, $f3
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f3.fl;
    // 0x00274404: add.s       $f0, $f1, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x00274408: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0027440C: lwc1        $f2, 0x2A30($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X2A30);
    // 0x00274410: c.le.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl <= ctx->f0.fl;
    // 0x00274414: nop

    // 0x00274418: bc1t        L_00274434
    if (c1cs) {
            // 0x0027441C: nop

    func_00274434(rdram, ctx);
    return;
    }
    // 0x0027441C: nop

    // 0x00274420: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00274424: lwc1        $f1, -0x7E84($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, -0X7E84);
    // 0x00274428: div.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = DIV_S(ctx->f0.fl, ctx->f2.fl);
    // 0x0027442C: jr          $ra
    // 0x00274430: sub.s       $f0, $f1, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f1.fl - ctx->f0.fl;
    return;
    // 0x00274430: sub.s       $f0, $f1, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f1.fl - ctx->f0.fl;
;}
RECOMP_FUNC void func_00409340(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00409340: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x00409344: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x00409348: addu        $s4, $a0, $zero
    ctx->r20 = ADD32(ctx->r4, 0);
    // 0x0040934C: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x00409350: addu        $s5, $a1, $zero
    ctx->r21 = ADD32(ctx->r5, 0);
    // 0x00409354: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x00409358: addiu       $a0, $a0, 0x7078
    ctx->r4 = ADD32(ctx->r4, 0X7078);
    // 0x0040935C: addiu       $a1, $zero, 0x650
    ctx->r5 = ADD32(0, 0X650);
    // 0x00409360: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    // 0x00409364: addiu       $a3, $zero, 0x1DB1
    ctx->r7 = ADD32(0, 0X1DB1);
    // 0x00409368: addu        $v0, $a3, $zero
    ctx->r2 = ADD32(ctx->r7, 0);
    // 0x0040936C: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x00409370: lui         $s3, 0x8013
    ctx->r19 = S32(0X8013 << 16);
    // 0x00409374: addiu       $s3, $s3, -0x490
    ctx->r19 = ADD32(ctx->r19, -0X490);
    // 0x00409378: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x0040937C: sw          $v0, 0x48($at)
    MEM_W(0X48, ctx->r1) = ctx->r2;
    // 0x00409380: addiu       $v0, $s3, 0x630
    ctx->r2 = ADD32(ctx->r19, 0X630);
    // 0x00409384: sw          $ra, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r31;
    // 0x00409388: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x0040938C: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x00409390: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x00409394: sw          $zero, 0x680($s3)
    MEM_W(0X680, ctx->r19) = 0;
    // 0x00409398: sw          $zero, 0x684($s3)
    MEM_W(0X684, ctx->r19) = 0;
    // 0x0040939C: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x004093A0: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x004093A4: jal         0x00225F6C
    // 0x004093A8: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    func_00225F6C(rdram, ctx);
        goto after_0;
    // 0x004093A8: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    after_0:
    // 0x004093AC: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    // 0x004093B0: blez        $v0, L_004093DC
    if (SIGNED(ctx->r2) <= 0) {
        // 0x004093B4: sw          $v0, 0x64C($s3)
        MEM_W(0X64C, ctx->r19) = ctx->r2;
            goto L_004093DC;
    }
    // 0x004093B4: sw          $v0, 0x64C($s3)
    MEM_W(0X64C, ctx->r19) = ctx->r2;
    // 0x004093B8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x004093BC: addu        $v1, $s3, $zero
    ctx->r3 = ADD32(ctx->r19, 0);
L_004093C0:
    // 0x004093C0: lw          $v0, 0x630($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X630);
    // 0x004093C4: sw          $a0, 0x250($v0)
    MEM_W(0X250, ctx->r2) = ctx->r4;
    // 0x004093C8: lw          $v0, 0x64C($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X64C);
    // 0x004093CC: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x004093D0: slt         $v0, $s2, $v0
    ctx->r2 = SIGNED(ctx->r18) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x004093D4: bne         $v0, $zero, L_004093C0
    if (ctx->r2 != 0) {
        // 0x004093D8: addiu       $v1, $v1, 0x4
        ctx->r3 = ADD32(ctx->r3, 0X4);
            goto L_004093C0;
    }
    // 0x004093D8: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
L_004093DC:
    // 0x004093DC: lui         $s1, 0x800F
    ctx->r17 = S32(0X800F << 16);
    // 0x004093E0: addiu       $s1, $s1, 0x7078
    ctx->r17 = ADD32(ctx->r17, 0X7078);
    // 0x004093E4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x004093E8: addiu       $a1, $zero, 0x650
    ctx->r5 = ADD32(0, 0X650);
    // 0x004093EC: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    // 0x004093F0: addiu       $a3, $zero, 0x1DB2
    ctx->r7 = ADD32(0, 0X1DB2);
    // 0x004093F4: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    // 0x004093F8: addu        $v0, $s3, $a1
    ctx->r2 = ADD32(ctx->r19, ctx->r5);
    // 0x004093FC: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x00409400: lw          $v0, 0x64C($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X64C);
    // 0x00409404: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
    // 0x00409408: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x0040940C: jal         0x00225F6C
    // 0x00409410: sw          $v0, 0x670($s3)
    MEM_W(0X670, ctx->r19) = ctx->r2;
    func_00225F6C(rdram, ctx);
        goto after_1;
    // 0x00409410: sw          $v0, 0x670($s3)
    MEM_W(0X670, ctx->r19) = ctx->r2;
    after_1:
    // 0x00409414: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x00409418: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x0040941C: lw          $v0, 0x650($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X650);
    // 0x00409420: addiu       $a2, $zero, 0x1DB1
    ctx->r6 = ADD32(0, 0X1DB1);
    // 0x00409424: jal         0x00225EBC
    // 0x00409428: sw          $s0, 0x250($v0)
    MEM_W(0X250, ctx->r2) = ctx->r16;
    func_00225EBC(rdram, ctx);
        goto after_2;
    // 0x00409428: sw          $s0, 0x250($v0)
    MEM_W(0X250, ctx->r2) = ctx->r16;
    after_2:
    // 0x0040942C: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    // 0x00409430: addu        $a1, $s5, $zero
    ctx->r5 = ADD32(ctx->r21, 0);
    // 0x00409434: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    // 0x00409438: sw          $v0, 0x658($s3)
    MEM_W(0X658, ctx->r19) = ctx->r2;
    // 0x0040943C: lui         $v0, 0x43
    ctx->r2 = S32(0X43 << 16);
    // 0x00409440: addiu       $v0, $v0, 0x1F00
    ctx->r2 = ADD32(ctx->r2, 0X1F00);
    // 0x00409444: sw          $v0, 0x2C($a1)
    MEM_W(0X2C, ctx->r5) = ctx->r2;
    // 0x00409448: lui         $v0, 0x41
    ctx->r2 = S32(0X41 << 16);
    // 0x0040944C: addiu       $v0, $v0, -0x439C
    ctx->r2 = ADD32(ctx->r2, -0X439C);
    // 0x00409450: sw          $v0, 0xF0($a1)
    MEM_W(0XF0, ctx->r5) = ctx->r2;
    // 0x00409454: lui         $v0, 0x41
    ctx->r2 = S32(0X41 << 16);
    // 0x00409458: addiu       $v0, $v0, -0x7000
    ctx->r2 = ADD32(ctx->r2, -0X7000);
    // 0x0040945C: sw          $v0, 0xF8($a1)
    MEM_W(0XF8, ctx->r5) = ctx->r2;
    // 0x00409460: lui         $v0, 0x26
    ctx->r2 = S32(0X26 << 16);
    // 0x00409464: addiu       $v0, $v0, -0x1B48
    ctx->r2 = ADD32(ctx->r2, -0X1B48);
    // 0x00409468: sw          $v0, 0x108($a1)
    MEM_W(0X108, ctx->r5) = ctx->r2;
    // 0x0040946C: lui         $v0, 0x41
    ctx->r2 = S32(0X41 << 16);
    // 0x00409470: addiu       $v0, $v0, -0x4010
    ctx->r2 = ADD32(ctx->r2, -0X4010);
    // 0x00409474: sw          $v0, 0xFC($a1)
    MEM_W(0XFC, ctx->r5) = ctx->r2;
    // 0x00409478: lui         $v0, 0x41
    ctx->r2 = S32(0X41 << 16);
    // 0x0040947C: addiu       $v0, $v0, -0x411C
    ctx->r2 = ADD32(ctx->r2, -0X411C);
    // 0x00409480: jal         0x00243414
    // 0x00409484: sw          $v0, 0xF4($a1)
    MEM_W(0XF4, ctx->r5) = ctx->r2;
    func_00243414(rdram, ctx);
        goto after_3;
    // 0x00409484: sw          $v0, 0xF4($a1)
    MEM_W(0XF4, ctx->r5) = ctx->r2;
    after_3:
    // 0x00409488: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x0040948C: addiu       $v0, $v0, -0x490
    ctx->r2 = ADD32(ctx->r2, -0X490);
    // 0x00409490: addiu       $s0, $v0, 0x1C
    ctx->r16 = ADD32(ctx->r2, 0X1C);
    // 0x00409494: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x00409498: addiu       $a0, $a0, 0x1F10
    ctx->r4 = ADD32(ctx->r4, 0X1F10);
    // 0x0040949C: sw          $s4, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r20;
    // 0x004094A0: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x004094A4: addiu       $v1, $zero, -0x301
    ctx->r3 = ADD32(0, -0X301);
    // 0x004094A8: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x004094AC: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
    // 0x004094B0: lw          $v0, 0xD4($s4)
    ctx->r2 = MEM_W(ctx->r20, 0XD4);
    // 0x004094B4: lui         $v1, 0x400
    ctx->r3 = S32(0X400 << 16);
    // 0x004094B8: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x004094BC: sw          $v0, 0xD4($s4)
    MEM_W(0XD4, ctx->r20) = ctx->r2;
L_004094C0:
    // 0x004094C0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x004094C4: jal         0x002362E4
    // 0x004094C8: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    func_002362E4(rdram, ctx);
        goto after_4;
    // 0x004094C8: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    after_4:
    // 0x004094CC: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x004094D0: slti        $v0, $s2, 0xF
    ctx->r2 = SIGNED(ctx->r18) < 0XF ? 1 : 0;
    // 0x004094D4: bne         $v0, $zero, L_004094C0
    if (ctx->r2 != 0) {
        // 0x004094D8: addiu       $s0, $s0, 0x68
        ctx->r16 = ADD32(ctx->r16, 0X68);
            goto L_004094C0;
    }
    // 0x004094D8: addiu       $s0, $s0, 0x68
    ctx->r16 = ADD32(ctx->r16, 0X68);
    // 0x004094DC: lw          $ra, 0x30($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X30);
    // 0x004094E0: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x004094E4: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x004094E8: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x004094EC: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x004094F0: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x004094F4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x004094F8: jr          $ra
    // 0x004094FC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x004094FC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_002322D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002322D8: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x002322DC: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x002322E0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x002322E4: sw          $ra, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r31;
    // 0x002322E8: sw          $s3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r19;
    // 0x002322EC: sw          $s2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r18;
    // 0x002322F0: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x002322F4: lw          $s1, 0xF8($s0)
    ctx->r17 = MEM_W(ctx->r16, 0XF8);
    // 0x002322F8: jal         0x002325F0
    // 0x002322FC: nop

    func_002325F0(rdram, ctx);
        goto after_0;
    // 0x002322FC: nop

    after_0:
    // 0x00232300: beq         $v0, $zero, L_0023230C
    if (ctx->r2 == 0) {
        // 0x00232304: addiu       $a0, $zero, 0xA
        ctx->r4 = ADD32(0, 0XA);
            goto L_0023230C;
    }
    // 0x00232304: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    // 0x00232308: addiu       $a0, $zero, 0xC
    ctx->r4 = ADD32(0, 0XC);
L_0023230C:
    // 0x0023230C: sll         $a1, $a0, 1
    ctx->r5 = S32(ctx->r4 << 1);
    // 0x00232310: lw          $v0, 0x18($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X18);
    // 0x00232314: sll         $a0, $a0, 3
    ctx->r4 = S32(ctx->r4 << 3);
    // 0x00232318: addu        $v1, $v0, $a1
    ctx->r3 = ADD32(ctx->r2, ctx->r5);
    // 0x0023231C: lhu         $s2, 0x70($v1)
    ctx->r18 = MEM_HU(ctx->r3, 0X70);
    // 0x00232320: lhu         $a2, 0x8C($v1)
    ctx->r6 = MEM_HU(ctx->r3, 0X8C);
    // 0x00232324: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x00232328: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x0023232C: lw          $t1, 0x4($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X4);
    // 0x00232330: sw          $t0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r8;
    // 0x00232334: sw          $t1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r9;
    // 0x00232338: lw          $v0, 0x18($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X18);
    // 0x0023233C: ori         $s1, $zero, 0xFFFF
    ctx->r17 = 0 | 0XFFFF;
    // 0x00232340: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x00232344: lhu         $s3, 0xA8($v0)
    ctx->r19 = MEM_HU(ctx->r2, 0XA8);
    // 0x00232348: beq         $a2, $s1, L_00232384
    if (ctx->r6 == ctx->r17) {
        // 0x0023234C: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_00232384;
    }
    // 0x0023234C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00232350: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x00232354: lw          $t0, 0x4($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X4);
    // 0x00232358: lw          $t1, 0x8($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X8);
    // 0x0023235C: lw          $t2, 0xC($s0)
    ctx->r10 = MEM_W(ctx->r16, 0XC);
    // 0x00232360: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x00232364: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x00232368: sw          $t2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r10;
    // 0x0023236C: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x00232370: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x00232374: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    // 0x00232378: sw          $t1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r9;
    // 0x0023237C: jal         0x00236EA0
    // 0x00232380: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    func_00236EA0(rdram, ctx);
        goto after_1;
    // 0x00232380: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    after_1:
L_00232384:
    // 0x00232384: beq         $s2, $s1, L_0023239C
    if (ctx->r18 == ctx->r17) {
        // 0x00232388: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_0023239C;
    }
    // 0x00232388: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0023238C: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x00232390: lb          $a2, 0x1AC($s0)
    ctx->r6 = MEM_B(ctx->r16, 0X1AC);
    // 0x00232394: jal         0x00229340
    // 0x00232398: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    entry_00229340(rdram, ctx);
        goto after_2;
    // 0x00232398: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_2:
L_0023239C:
    // 0x0023239C: beq         $s3, $s1, L_002323C4
    if (ctx->r19 == ctx->r17) {
        // 0x002323A0: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_002323C4;
    }
    // 0x002323A0: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x002323A4: sll         $a0, $s3, 16
    ctx->r4 = S32(ctx->r19 << 16);
    // 0x002323A8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x002323AC: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x002323B0: lw          $a1, 0x4($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X4);
    // 0x002323B4: lw          $a2, 0x8($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X8);
    // 0x002323B8: lw          $a3, 0xC($s0)
    ctx->r7 = MEM_W(ctx->r16, 0XC);
    // 0x002323BC: jal         0x00275544
    // 0x002323C0: sra         $a0, $a0, 16
    ctx->r4 = S32(SIGNED(ctx->r4) >> 16);
    func_00275544(rdram, ctx);
        goto after_3;
    // 0x002323C0: sra         $a0, $a0, 16
    ctx->r4 = S32(SIGNED(ctx->r4) >> 16);
    after_3:
L_002323C4:
    // 0x002323C4: lw          $ra, 0x40($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X40);
    // 0x002323C8: lw          $s3, 0x3C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X3C);
    // 0x002323CC: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x002323D0: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x002323D4: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x002323D8: jr          $ra
    // 0x002323DC: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x002323DC: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_002060A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002060A8: lui         $v0, 0x800E
    ctx->r2 = S32(0X800E << 16);
    // 0x002060AC: lw          $v0, -0x7E10($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X7E10);
    // 0x002060B0: jr          $ra
    // 0x002060B4: nop

    return;
    // 0x002060B4: nop

;}
RECOMP_FUNC void func_00268014(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00268014: lw          $a0, 0x14($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X14);
    // 0x00268018: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x0026801C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00268020: beq         $v1, $v0, L_00268030
    if (ctx->r3 == ctx->r2) {
            // 0x00268024: nop

    func_00268030(rdram, ctx);
    return;
    }
    // 0x00268024: nop

    // 0x00268028: jr          $ra
    // 0x0026802C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x0026802C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void func_00447DB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_0040EE30:
    // 0x00447DB0: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
L_0040EE44:
    // 0x00447DB4: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x00447DB8: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x00447DBC: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x00447DC0: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x00447DC4: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x00447DC8: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x00447DCC: lw          $v0, 0x114($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X114);
    // 0x00447DD0: addu        $s1, $a2, $zero
    ctx->r17 = ADD32(ctx->r6, 0);
    // 0x00447DD4: sll         $a0, $v0, 1
    ctx->r4 = S32(ctx->r2 << 1);
    // 0x00447DD8: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x00447DDC: sll         $a0, $a0, 3
    ctx->r4 = S32(ctx->r4 << 3);
    // 0x00447DE0: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x00447DE4: sll         $a0, $a0, 2
    ctx->r4 = S32(ctx->r4 << 2);
    // 0x00447DE8: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x00447DEC: addiu       $v0, $v0, 0x23C
    ctx->r2 = ADD32(ctx->r2, 0X23C);
    // 0x00447DF0: jal         0x00236324
    // 0x00447DF4: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    func_00236324(rdram, ctx);
        goto after_0;
    // 0x00447DF4: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    after_0:
    // 0x00447DF8: jal         0x00235898
    // 0x00447DFC: nop

    func_00235898(rdram, ctx);
        goto after_1;
    // 0x00447DFC: nop

    after_1:
    // 0x00447E00: lhu         $v1, 0xB8($s2)
    ctx->r3 = MEM_HU(ctx->r18, 0XB8);
    // 0x00447E04: addiu       $v0, $zero, 0x450
    ctx->r2 = ADD32(0, 0X450);
    // 0x00447E08: beq         $v1, $v0, L_00447E20
    if (ctx->r3 == ctx->r2) {
        // 0x00447E0C: addiu       $v0, $zero, 0x455
        ctx->r2 = ADD32(0, 0X455);
            goto L_00447E20;
    }
    // 0x00447E0C: addiu       $v0, $zero, 0x455
    ctx->r2 = ADD32(0, 0X455);
    // 0x00447E10: beq         $v1, $v0, L_00447E2C
    if (ctx->r3 == ctx->r2) {
        // 0x00447E14: addiu       $v0, $zero, 0x6
        ctx->r2 = ADD32(0, 0X6);
            goto L_00447E2C;
    }
    // 0x00447E14: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x00447E18: j           L_0040EE44
    // 0x00447E1C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    entry_0040EE44(rdram, ctx);
    return;
    // 0x00447E1C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
L_00447E20:
    // 0x00447E20: lb          $v1, 0x34($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X34);
    // 0x00447E24: j           L_0040EE30
    // 0x00447E28: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
    entry_0040EE30(rdram, ctx);
    return;
    // 0x00447E28: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
L_00447E2C:
    // 0x00447E2C: lb          $v1, 0x34($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X34);
    // 0x00447E30: bnel        $v1, $v0, L_00447E44
    if (ctx->r3 != ctx->r2) {
        // 0x00447E34: sw          $zero, 0x10($sp)
        MEM_W(0X10, ctx->r29) = 0;
            goto L_00447E44;
    }
    goto skip_0;
    // 0x00447E34: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    skip_0:
    // 0x00447E38: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00447E3C: sw          $v0, 0x18($s1)
    MEM_W(0X18, ctx->r17) = ctx->r2;
    // 0x00447E40: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
L_00447E44:
    // 0x00447E44: lw          $v0, 0x18($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X18);
    // 0x00447E48: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x00447E4C: lb          $v0, 0x151($s2)
    ctx->r2 = MEM_B(ctx->r18, 0X151);
    // 0x00447E50: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x00447E54: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x00447E58: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00447E5C: lw          $v0, 0x6D1C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X6D1C);
    // 0x00447E60: lw          $a0, 0xC($s1)
    ctx->r4 = MEM_W(ctx->r17, 0XC);
    // 0x00447E64: lw          $a1, 0x98($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X98);
    // 0x00447E68: sll         $a3, $v0, 1
    ctx->r7 = S32(ctx->r2 << 1);
    // 0x00447E6C: addu        $a3, $a3, $v0
    ctx->r7 = ADD32(ctx->r7, ctx->r2);
    // 0x00447E70: sll         $a3, $a3, 3
    ctx->r7 = S32(ctx->r7 << 3);
    // 0x00447E74: addiu       $a3, $a3, 0x110
    ctx->r7 = ADD32(ctx->r7, 0X110);
    // 0x00447E78: jal         0x0020A33C
    // 0x00447E7C: addu        $a3, $s2, $a3
    ctx->r7 = ADD32(ctx->r18, ctx->r7);
    func_0020A33C(rdram, ctx);
        goto after_2;
    // 0x00447E7C: addu        $a3, $s2, $a3
    ctx->r7 = ADD32(ctx->r18, ctx->r7);
    after_2:
    // 0x00447E80: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x00447E84: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x00447E88: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x00447E8C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x00447E90: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00447E94: sw          $zero, -0x4750($at)
    MEM_W(-0X4750, ctx->r1) = 0;
    // 0x00447E98: jr          $ra
    // 0x00447E9C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x00447E9C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_0041CD7C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041CD7C: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x0041CD80: lw          $v0, -0x531C($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X531C);
    // 0x0041CD84: beq         $v0, $zero, L_0041CDA4
    if (ctx->r2 == 0) {
            // 0x0041CD88: lui         $v1, 0xFEFF
    ctx->r3 = S32(0XFEFF << 16);
    func_0041CDA4(rdram, ctx);
    return;
    }
    // 0x0041CD88: lui         $v1, 0xFEFF
    ctx->r3 = S32(0XFEFF << 16);
    // 0x0041CD8C: lw          $v0, 0xC($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XC);
    // 0x0041CD90: lw          $v1, 0x120($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X120);
    // 0x0041CD94: lui         $a0, 0x100
    ctx->r4 = S32(0X100 << 16);
    // 0x0041CD98: or          $v1, $v1, $a0
    ctx->r3 = ctx->r3 | ctx->r4;
    // 0x0041CD9C: jr          $ra
    // 0x0041CDA0: sw          $v1, 0x120($v0)
    MEM_W(0X120, ctx->r2) = ctx->r3;
    return;
    // 0x0041CDA0: sw          $v1, 0x120($v0)
    MEM_W(0X120, ctx->r2) = ctx->r3;
;}
RECOMP_FUNC void func_002A3708(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002A3708: lui         $v1, 0x8000
    ctx->r3 = S32(0X8000 << 16);
    // 0x002A370C: ori         $v1, $v1, 0x180
    ctx->r3 = ctx->r3 | 0X180;
    // 0x002A3710: lui         $v0, 0x2A
    ctx->r2 = S32(0X2A << 16);
    // 0x002A3714: addiu       $v0, $v0, 0x30A4
    ctx->r2 = ADD32(ctx->r2, 0X30A4);
    // 0x002A3718: addi        $a0, $v0, 0x14
    ctx->r4 = ADD32(ctx->r2, 0X14);
L_002A371C:
    // 0x002A371C: lw          $at, 0x0($v0)
    ctx->r1 = MEM_W(ctx->r2, 0X0);
    // 0x002A3720: addi        $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x002A3724: sw          $at, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r1;
    // 0x002A3728: addi        $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x002A372C: bne         $v0, $a0, L_002A371C
    if (ctx->r2 != ctx->r4) {
        // 0x002A3730: nop
    
            goto L_002A371C;
    }
    // 0x002A3730: nop

    // 0x002A3734: lui         $v1, 0x8000
    ctx->r3 = S32(0X8000 << 16);
    // 0x002A3738: lui         $v0, 0x2A
    ctx->r2 = S32(0X2A << 16);
    // 0x002A373C: addiu       $v0, $v0, 0x30DC
    ctx->r2 = ADD32(ctx->r2, 0X30DC);
    // 0x002A3740: addi        $a0, $v0, 0x14
    ctx->r4 = ADD32(ctx->r2, 0X14);
L_002A3744:
    // 0x002A3744: lw          $at, 0x0($v0)
    ctx->r1 = MEM_W(ctx->r2, 0X0);
    // 0x002A3748: addi        $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x002A374C: sw          $at, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r1;
    // 0x002A3750: addi        $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x002A3754: bne         $v0, $a0, L_002A3744
    if (ctx->r2 != ctx->r4) {
        // 0x002A3758: nop
    
            goto L_002A3744;
    }
    // 0x002A3758: nop

    // 0x002A375C: jal         0x002A31AC
    // 0x002A3760: nop

    func_002A31AC(rdram, ctx);
        goto after_0;
    // 0x002A3760: nop

    after_0:
    // 0x002A3764: jal         0x002A31C8
    // 0x002A3768: nop

    func_002A31C8(rdram, ctx);
        goto after_1;
    // 0x002A3768: nop

    after_1:
    // 0x002A376C: jr          $ra
    // 0x002A3770: nop

    return;
    // 0x002A3770: nop

;}
RECOMP_FUNC void func_0044BEF4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0044BEF4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0044BEF8: beq         $a0, $zero, L_0044BF0C
    if (ctx->r4 == 0) {
        // 0x0044BEFC: sw          $ra, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r31;
            goto L_0044BF0C;
    }
    // 0x0044BEFC: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x0044BF00: lw          $a1, -0x10($a0)
    ctx->r5 = MEM_W(ctx->r4, -0X10);
    // 0x0044BF04: jal         0x002052D8
    // 0x0044BF08: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_002052D8(rdram, ctx);
        goto after_0;
    // 0x0044BF08: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_0:
L_0044BF0C:
    // 0x0044BF0C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x0044BF10: jr          $ra
    // 0x0044BF14: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0044BF14: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
