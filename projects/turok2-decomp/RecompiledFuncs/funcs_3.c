#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_0025F5FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0025F5FC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0025F600: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x0025F604: lb          $v0, 0xC7($a1)
    ctx->r2 = MEM_B(ctx->r5, 0XC7);
    // 0x0025F608: beq         $v0, $zero, L_0025F618
    if (ctx->r2 == 0) {
        // 0x0025F60C: nop
    
            goto L_0025F618;
    }
    // 0x0025F60C: nop

    // 0x0025F610: jal         0x00243414
    // 0x0025F614: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    func_00243414(rdram, ctx);
        goto after_0;
    // 0x0025F614: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    after_0:
L_0025F618:
    // 0x0025F618: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x0025F61C: jr          $ra
    // 0x0025F620: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0025F620: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0045DE3C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0045DE3C: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x0045DE40: lw          $a0, 0x48($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X48);
    // 0x0045DE44: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0045DE48: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x0045DE4C: jal         0x0026EFB8
    // 0x0045DE50: nop

    func_0026EFB8(rdram, ctx);
        goto after_0;
    // 0x0045DE50: nop

    after_0:
    // 0x0045DE54: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x0045DE58: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0045DE5C: sw          $v0, 0xA30($at)
    MEM_W(0XA30, ctx->r1) = ctx->r2;
    // 0x0045DE60: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0045DE64: sw          $zero, 0xA34($at)
    MEM_W(0XA34, ctx->r1) = 0;
    // 0x0045DE68: jr          $ra
    // 0x0045DE6C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0045DE6C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00255884(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00255884: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00255888: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0025588C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x00255890: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x00255894: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00255898: lwc1        $f2, 0xA7C($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0XA7C);
    // 0x0025589C: mtc1        $zero, $f1
    ctx->f_odd[(1 - 1) * 2] = 0;
    // 0x002558A0: c.lt.s      $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f2.fl < ctx->f1.fl;
    // 0x002558A4: nop

    // 0x002558A8: bc1f        L_002558C4
    if (!c1cs) {
        // 0x002558AC: addu        $s1, $a1, $zero
        ctx->r17 = ADD32(ctx->r5, 0);
            goto L_002558C4;
    }
    // 0x002558AC: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x002558B0: lwc1        $f0, 0xA5C($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0XA5C);
    // 0x002558B4: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x002558B8: nop

    // 0x002558BC: bc1t        L_00255904
    if (c1cs) {
        // 0x002558C0: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_00255904;
    }
    // 0x002558C0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_002558C4:
    // 0x002558C4: c.lt.s      $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f1.fl < ctx->f2.fl;
    // 0x002558C8: nop

    // 0x002558CC: bc1f        L_002558E8
    if (!c1cs) {
        // 0x002558D0: nop
    
            goto L_002558E8;
    }
    // 0x002558D0: nop

    // 0x002558D4: lwc1        $f0, 0xA5C($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0XA5C);
    // 0x002558D8: c.le.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl <= ctx->f1.fl;
    // 0x002558DC: nop

    // 0x002558E0: bc1t        L_00255904
    if (c1cs) {
        // 0x002558E4: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_00255904;
    }
    // 0x002558E4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_002558E8:
    // 0x002558E8: lwc1        $f1, 0xA10($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0XA10);
    // 0x002558EC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002558F0: lwc1        $f0, 0x7194($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X7194);
    // 0x002558F4: c.le.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl <= ctx->f1.fl;
    // 0x002558F8: nop

    // 0x002558FC: bc1f        L_00255918
    if (!c1cs) {
        // 0x00255900: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_00255918;
    }
    // 0x00255900: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_00255904:
    // 0x00255904: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x00255908: jal         0x0024E5F0
    // 0x0025590C: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
    func_0024E5F0(rdram, ctx);
        goto after_0;
    // 0x0025590C: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
    after_0:
    // 0x00255910: j           L_00255924
    // 0x00255914: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
        goto L_00255924;
    // 0x00255914: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_00255918:
    // 0x00255918: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0025591C: lwc1        $f0, 0x7198($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X7198);
    // 0x00255920: swc1        $f0, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->f0.u32l;
L_00255924:
    // 0x00255924: jal         0x00255940
    // 0x00255928: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_00255940(rdram, ctx);
        goto after_1;
    // 0x00255928: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_1:
    // 0x0025592C: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x00255930: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00255934: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00255938: jr          $ra
    // 0x0025593C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x0025593C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_0020B258(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0020B258: lui         $v0, 0x800F
    ctx->r2 = S32(0X800F << 16);
    // 0x0020B25C: lw          $v0, 0x7070($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X7070);
    // 0x0020B260: lui         $v1, 0x800E
    ctx->r3 = S32(0X800E << 16);
    // 0x0020B264: lw          $v1, -0x71DC($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X71DC);
    // 0x0020B268: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x0020B26C: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x0020B270: addu        $s4, $a0, $zero
    ctx->r20 = ADD32(ctx->r4, 0);
    // 0x0020B274: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x0020B278: addu        $s3, $a1, $zero
    ctx->r19 = ADD32(ctx->r5, 0);
    // 0x0020B27C: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x0020B280: addu        $s2, $a2, $zero
    ctx->r18 = ADD32(ctx->r6, 0);
    // 0x0020B284: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x0020B288: sw          $s5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r21;
    // 0x0020B28C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x0020B290: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0020B294: lw          $v0, 0x114($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X114);
    // 0x0020B298: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x0020B29C: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x0020B2A0: lw          $v0, 0x2214($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2214);
    // 0x0020B2A4: srl         $v1, $v1, 3
    ctx->r3 = S32(U32(ctx->r3) >> 3);
    // 0x0020B2A8: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x0020B2AC: sltiu       $v0, $v0, 0xBB8
    ctx->r2 = ctx->r2 < 0XBB8 ? 1 : 0;
    // 0x0020B2B0: bne         $v0, $zero, L_0020B46C
    if (ctx->r2 != 0) {
        // 0x0020B2B4: addu        $s1, $a3, $zero
        ctx->r17 = ADD32(ctx->r7, 0);
            goto L_0020B46C;
    }
    // 0x0020B2B4: addu        $s1, $a3, $zero
    ctx->r17 = ADD32(ctx->r7, 0);
    // 0x0020B2B8: lw          $a1, 0x48($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X48);
    // 0x0020B2BC: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x0020B2C0: addiu       $a0, $a0, 0x64
    ctx->r4 = ADD32(ctx->r4, 0X64);
    // 0x0020B2C4: jal         0x00208810
    // 0x0020B2C8: nop

    func_00208810(rdram, ctx);
        goto after_0;
    // 0x0020B2C8: nop

    after_0:
    // 0x0020B2CC: beq         $v0, $zero, L_0020B46C
    if (ctx->r2 == 0) {
        // 0x0020B2D0: lui         $a2, 0xE200
        ctx->r6 = S32(0XE200 << 16);
            goto L_0020B46C;
    }
    // 0x0020B2D0: lui         $a2, 0xE200
    ctx->r6 = S32(0XE200 << 16);
    // 0x0020B2D4: ori         $a2, $a2, 0x1C
    ctx->r6 = ctx->r6 | 0X1C;
    // 0x0020B2D8: lui         $a1, 0xC18
    ctx->r5 = S32(0XC18 << 16);
    // 0x0020B2DC: ori         $a1, $a1, 0x4F50
    ctx->r5 = ctx->r5 | 0X4F50;
    // 0x0020B2E0: lui         $s0, 0x800E
    ctx->r16 = S32(0X800E << 16);
    // 0x0020B2E4: addiu       $s0, $s0, -0x71DC
    ctx->r16 = ADD32(ctx->r16, -0X71DC);
    // 0x0020B2E8: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x0020B2EC: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x0020B2F0: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x0020B2F4: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x0020B2F8: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x0020B2FC: sw          $a2, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r6;
    // 0x0020B300: jal         0x00207A70
    // 0x0020B304: sw          $a1, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r5;
    func_00207A70(rdram, ctx);
        goto after_1;
    // 0x0020B304: sw          $a1, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r5;
    after_1:
    // 0x0020B308: beq         $s2, $zero, L_0020B31C
    if (ctx->r18 == 0) {
        // 0x0020B30C: lui         $v0, 0xDB06
        ctx->r2 = S32(0XDB06 << 16);
            goto L_0020B31C;
    }
    // 0x0020B30C: lui         $v0, 0xDB06
    ctx->r2 = S32(0XDB06 << 16);
    // 0x0020B310: lw          $v1, 0x0($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X0);
    // 0x0020B314: j           L_0020B328
    // 0x0020B318: ori         $v0, $v0, 0x4
    ctx->r2 = ctx->r2 | 0X4;
        goto L_0020B328;
    // 0x0020B318: ori         $v0, $v0, 0x4
    ctx->r2 = ctx->r2 | 0X4;
L_0020B31C:
    // 0x0020B31C: lui         $v0, 0xDA38
    ctx->r2 = S32(0XDA38 << 16);
    // 0x0020B320: lw          $v1, 0x0($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X0);
    // 0x0020B324: ori         $v0, $v0, 0x3
    ctx->r2 = ctx->r2 | 0X3;
L_0020B328:
    // 0x0020B328: addu        $a0, $v1, $zero
    ctx->r4 = ADD32(ctx->r3, 0);
    // 0x0020B32C: addiu       $v1, $v1, 0x8
    ctx->r3 = ADD32(ctx->r3, 0X8);
    // 0x0020B330: sw          $v1, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r3;
    // 0x0020B334: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
    // 0x0020B338: beq         $s1, $zero, L_0020B39C
    if (ctx->r17 == 0) {
        // 0x0020B33C: sw          $s3, 0x4($a0)
        MEM_W(0X4, ctx->r4) = ctx->r19;
            goto L_0020B39C;
    }
    // 0x0020B33C: sw          $s3, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r19;
    // 0x0020B340: lui         $a2, 0xDC08
    ctx->r6 = S32(0XDC08 << 16);
    // 0x0020B344: ori         $a2, $a2, 0x60A
    ctx->r6 = ctx->r6 | 0X60A;
    // 0x0020B348: lui         $a3, 0xDC08
    ctx->r7 = S32(0XDC08 << 16);
    // 0x0020B34C: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x0020B350: addiu       $a0, $a0, -0x71DC
    ctx->r4 = ADD32(ctx->r4, -0X71DC);
    // 0x0020B354: ori         $a3, $a3, 0x90A
    ctx->r7 = ctx->r7 | 0X90A;
    // 0x0020B358: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x0020B35C: lui         $v0, 0xDB02
    ctx->r2 = S32(0XDB02 << 16);
    // 0x0020B360: addu        $a1, $v1, $zero
    ctx->r5 = ADD32(ctx->r3, 0);
    // 0x0020B364: addiu       $v1, $v1, 0x8
    ctx->r3 = ADD32(ctx->r3, 0X8);
    // 0x0020B368: sw          $v1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r3;
    // 0x0020B36C: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
    // 0x0020B370: addiu       $v0, $zero, 0x18
    ctx->r2 = ADD32(0, 0X18);
    // 0x0020B374: sw          $v0, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r2;
    // 0x0020B378: addiu       $a1, $v1, 0x8
    ctx->r5 = ADD32(ctx->r3, 0X8);
    // 0x0020B37C: addiu       $v0, $s1, 0x8
    ctx->r2 = ADD32(ctx->r17, 0X8);
    // 0x0020B380: sw          $a1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r5;
    // 0x0020B384: sw          $v0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r2;
    // 0x0020B388: addiu       $v0, $v1, 0x10
    ctx->r2 = ADD32(ctx->r3, 0X10);
    // 0x0020B38C: sw          $a2, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r6;
    // 0x0020B390: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
    // 0x0020B394: sw          $a3, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r7;
    // 0x0020B398: sw          $s1, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r17;
L_0020B39C:
    // 0x0020B39C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0020B3A0: jal         0x0020565C
    // 0x0020B3A4: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    func_0020565C(rdram, ctx);
        goto after_2;
    // 0x0020B3A4: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    after_2:
    // 0x0020B3A8: lw          $a3, 0x40($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X40);
    // 0x0020B3AC: lw          $s0, 0x0($s4)
    ctx->r16 = MEM_W(ctx->r20, 0X0);
    // 0x0020B3B0: bne         $a3, $zero, L_0020B3CC
    if (ctx->r7 != 0) {
        // 0x0020B3B4: lui         $v0, 0xDB06
        ctx->r2 = S32(0XDB06 << 16);
            goto L_0020B3CC;
    }
    // 0x0020B3B4: lui         $v0, 0xDB06
    ctx->r2 = S32(0XDB06 << 16);
    // 0x0020B3B8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0020B3BC: jal         0x002017D4
    // 0x0020B3C0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_002017D4(rdram, ctx);
        goto after_3;
    // 0x0020B3C0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_3:
    // 0x0020B3C4: addu        $a3, $v0, $zero
    ctx->r7 = ADD32(ctx->r2, 0);
    // 0x0020B3C8: lui         $v0, 0xDB06
    ctx->r2 = S32(0XDB06 << 16);
L_0020B3CC:
    // 0x0020B3CC: ori         $v0, $v0, 0x8
    ctx->r2 = ctx->r2 | 0X8;
    // 0x0020B3D0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0020B3D4: lui         $s0, 0x800E
    ctx->r16 = S32(0X800E << 16);
    // 0x0020B3D8: addiu       $s0, $s0, -0x71DC
    ctx->r16 = ADD32(ctx->r16, -0X71DC);
    // 0x0020B3DC: lw          $v1, 0x0($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X0);
    // 0x0020B3E0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x0020B3E4: addu        $a2, $v1, $zero
    ctx->r6 = ADD32(ctx->r3, 0);
    // 0x0020B3E8: addiu       $v1, $v1, 0x8
    ctx->r3 = ADD32(ctx->r3, 0X8);
    // 0x0020B3EC: sw          $v1, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r3;
    // 0x0020B3F0: sw          $v0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r2;
    // 0x0020B3F4: jal         0x002017D4
    // 0x0020B3F8: sw          $a3, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r7;
    func_002017D4(rdram, ctx);
        goto after_4;
    // 0x0020B3F8: sw          $a3, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r7;
    after_4:
    // 0x0020B3FC: lw          $a1, 0x44($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X44);
    // 0x0020B400: jal         0x002017D4
    // 0x0020B404: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    func_002017D4(rdram, ctx);
        goto after_5;
    // 0x0020B404: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    after_5:
    // 0x0020B408: addu        $s3, $v0, $zero
    ctx->r19 = ADD32(ctx->r2, 0);
    // 0x0020B40C: lw          $s2, 0x0($s3)
    ctx->r18 = MEM_W(ctx->r19, 0X0);
    // 0x0020B410: blez        $s2, L_0020B46C
    if (SIGNED(ctx->r18) <= 0) {
        // 0x0020B414: addu        $s1, $zero, $zero
        ctx->r17 = ADD32(0, 0);
            goto L_0020B46C;
    }
    // 0x0020B414: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x0020B418: addu        $s4, $s0, $zero
    ctx->r20 = ADD32(ctx->r16, 0);
    // 0x0020B41C: lui         $s5, 0xDE00
    ctx->r21 = S32(0XDE00 << 16);
L_0020B420:
    // 0x0020B420: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x0020B424: jal         0x002017D4
    // 0x0020B428: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_002017D4(rdram, ctx);
        goto after_6;
    // 0x0020B428: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_6:
    // 0x0020B42C: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x0020B430: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0020B434: jal         0x002017D4
    // 0x0020B438: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_002017D4(rdram, ctx);
        goto after_7;
    // 0x0020B438: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_7:
    // 0x0020B43C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0020B440: jal         0x002017D4
    // 0x0020B444: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_002017D4(rdram, ctx);
        goto after_8;
    // 0x0020B444: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_8:
    // 0x0020B448: lw          $v1, 0x0($s4)
    ctx->r3 = MEM_W(ctx->r20, 0X0);
    // 0x0020B44C: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x0020B450: addu        $a0, $v1, $zero
    ctx->r4 = ADD32(ctx->r3, 0);
    // 0x0020B454: addiu       $v1, $v1, 0x8
    ctx->r3 = ADD32(ctx->r3, 0X8);
    // 0x0020B458: sw          $v1, 0x0($s4)
    MEM_W(0X0, ctx->r20) = ctx->r3;
    // 0x0020B45C: sw          $v0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r2;
    // 0x0020B460: slt         $v0, $s1, $s2
    ctx->r2 = SIGNED(ctx->r17) < SIGNED(ctx->r18) ? 1 : 0;
    // 0x0020B464: bne         $v0, $zero, L_0020B420
    if (ctx->r2 != 0) {
        // 0x0020B468: sw          $s5, 0x0($a0)
        MEM_W(0X0, ctx->r4) = ctx->r21;
            goto L_0020B420;
    }
    // 0x0020B468: sw          $s5, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r21;
L_0020B46C:
    // 0x0020B46C: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x0020B470: lw          $s5, 0x24($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X24);
    // 0x0020B474: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x0020B478: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x0020B47C: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x0020B480: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x0020B484: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0020B488: jr          $ra
    // 0x0020B48C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x0020B48C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_002975B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002975B4: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x002975B8: lwc1        $f0, -0x5870($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X5870);
    // 0x002975BC: jr          $ra
    // 0x002975C0: nop

    return;
    // 0x002975C0: nop

;}
RECOMP_FUNC void func_00263640(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00263640: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00263644: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x00263648: lw          $v0, 0x14($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X14);
    // 0x0026364C: addiu       $a2, $v0, 0x14
    ctx->r6 = ADD32(ctx->r2, 0X14);
    // 0x00263650: lw          $v0, 0x4($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X4);
    // 0x00263654: bne         $v0, $zero, L_00263674
    if (ctx->r2 != 0) {
        // 0x00263658: addiu       $v1, $zero, -0x1
        ctx->r3 = ADD32(0, -0X1);
            goto L_00263674;
    }
    // 0x00263658: addiu       $v1, $zero, -0x1
    ctx->r3 = ADD32(0, -0X1);
    // 0x0026365C: lh          $v0, 0x14($a2)
    ctx->r2 = MEM_H(ctx->r6, 0X14);
    // 0x00263660: beql        $v0, $v1, L_002636E0
    if (ctx->r2 == ctx->r3) {
        // 0x00263664: sw          $zero, 0x40($a1)
        MEM_W(0X40, ctx->r5) = 0;
            goto L_002636E0;
    }
    goto skip_0;
    // 0x00263664: sw          $zero, 0x40($a1)
    MEM_W(0X40, ctx->r5) = 0;
    skip_0:
    // 0x00263668: lh          $v0, 0x16($a2)
    ctx->r2 = MEM_H(ctx->r6, 0X16);
    // 0x0026366C: beql        $v0, $v1, L_002636E0
    if (ctx->r2 == ctx->r3) {
        // 0x00263670: sw          $zero, 0x40($a1)
        MEM_W(0X40, ctx->r5) = 0;
            goto L_002636E0;
    }
    goto skip_1;
    // 0x00263670: sw          $zero, 0x40($a1)
    MEM_W(0X40, ctx->r5) = 0;
    skip_1:
L_00263674:
    // 0x00263674: lh          $v1, 0xA($a2)
    ctx->r3 = MEM_H(ctx->r6, 0XA);
    // 0x00263678: lw          $v0, 0x10C($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X10C);
    // 0x0026367C: beql        $v0, $v1, L_002636E0
    if (ctx->r2 == ctx->r3) {
        // 0x00263680: sw          $zero, 0x40($a1)
        MEM_W(0X40, ctx->r5) = 0;
            goto L_002636E0;
    }
    goto skip_2;
    // 0x00263680: sw          $zero, 0x40($a1)
    MEM_W(0X40, ctx->r5) = 0;
    skip_2:
    // 0x00263684: lw          $v1, 0x0($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X0);
    // 0x00263688: andi        $v0, $v1, 0x1
    ctx->r2 = ctx->r3 & 0X1;
    // 0x0026368C: bne         $v0, $zero, L_002636A0
    if (ctx->r2 != 0) {
        // 0x00263690: andi        $v0, $v1, 0x2
        ctx->r2 = ctx->r3 & 0X2;
            goto L_002636A0;
    }
    // 0x00263690: andi        $v0, $v1, 0x2
    ctx->r2 = ctx->r3 & 0X2;
    // 0x00263694: lw          $v0, 0x110($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X110);
    // 0x00263698: blez        $v0, L_002636E0
    if (SIGNED(ctx->r2) <= 0) {
        // 0x0026369C: andi        $v0, $v1, 0x2
        ctx->r2 = ctx->r3 & 0X2;
            goto L_002636E0;
    }
    // 0x0026369C: andi        $v0, $v1, 0x2
    ctx->r2 = ctx->r3 & 0X2;
L_002636A0:
    // 0x002636A0: beq         $v0, $zero, L_002636C0
    if (ctx->r2 == 0) {
        // 0x002636A4: nop
    
            goto L_002636C0;
    }
    // 0x002636A4: nop

    // 0x002636A8: lw          $v0, 0xD4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XD4);
    // 0x002636AC: andi        $v0, $v0, 0x200
    ctx->r2 = ctx->r2 & 0X200;
    // 0x002636B0: beq         $v0, $zero, L_002636C0
    if (ctx->r2 == 0) {
        // 0x002636B4: nop
    
            goto L_002636C0;
    }
    // 0x002636B4: nop

    // 0x002636B8: j           L_002636E0
    // 0x002636BC: sw          $zero, 0x40($a1)
    MEM_W(0X40, ctx->r5) = 0;
        goto L_002636E0;
    // 0x002636BC: sw          $zero, 0x40($a1)
    MEM_W(0X40, ctx->r5) = 0;
L_002636C0:
    // 0x002636C0: lwc1        $f1, 0x40($a1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r5, 0X40);
    // 0x002636C4: lwc1        $f0, 0x64($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X64);
    // 0x002636C8: c.le.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl <= ctx->f1.fl;
    // 0x002636CC: nop

    // 0x002636D0: bc1f        L_002636E0
    if (!c1cs) {
        // 0x002636D4: nop
    
            goto L_002636E0;
    }
    // 0x002636D4: nop

    // 0x002636D8: jal         0x00243414
    // 0x002636DC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_00243414(rdram, ctx);
        goto after_0;
    // 0x002636DC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_0:
L_002636E0:
    // 0x002636E0: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x002636E4: jr          $ra
    // 0x002636E8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x002636E8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00467AD4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00467AD4: jr          $ra
    // 0x00467AD8: nop

    return;
    // 0x00467AD8: nop

;}
RECOMP_FUNC void func_0041AC3C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041AC3C: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x0041AC40: addiu       $a0, $a0, 0x1F84
    ctx->r4 = ADD32(ctx->r4, 0X1F84);
    // 0x0041AC44: lw          $v1, 0x4($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X4);
    // 0x0041AC48: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x0041AC4C: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0041AC50: sw          $v0, 0x920($at)
    MEM_W(0X920, ctx->r1) = ctx->r2;
    // 0x0041AC54: bne         $v1, $zero, L_0041AC64
    if (ctx->r3 != 0) {
        // 0x0041AC58: sw          $zero, 0x0($a0)
        MEM_W(0X0, ctx->r4) = 0;
            goto L_0041AC64;
    }
    // 0x0041AC58: sw          $zero, 0x0($a0)
    MEM_W(0X0, ctx->r4) = 0;
L_0041AC5C:
    // 0x0041AC5C: jr          $ra
    // 0x0041AC60: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x0041AC60: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_0041AC64:
    // 0x0041AC64: lw          $v0, -0x4($a0)
    ctx->r2 = MEM_W(ctx->r4, -0X4);
    // 0x0041AC68: beq         $v0, $zero, L_0041AC5C
    if (ctx->r2 == 0) {
        // 0x0041AC6C: addiu       $a0, $v0, -0x1
        ctx->r4 = ADD32(ctx->r2, -0X1);
            goto L_0041AC5C;
    }
    // 0x0041AC6C: addiu       $a0, $v0, -0x1
    ctx->r4 = ADD32(ctx->r2, -0X1);
    // 0x0041AC70: slti        $v0, $a0, 0x17
    ctx->r2 = SIGNED(ctx->r4) < 0X17 ? 1 : 0;
    // 0x0041AC74: beq         $v0, $zero, L_0041ACAC
    if (ctx->r2 == 0) {
        // 0x0041AC78: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_0041ACAC;
    }
    // 0x0041AC78: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x0041AC7C: addiu       $v0, $a0, 0x1
    ctx->r2 = ADD32(ctx->r4, 0X1);
L_0041AC80:
    // 0x0041AC80: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0041AC84: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x0041AC88: lbu         $v1, 0x1F8C($at)
    ctx->r3 = MEM_BU(ctx->r1, 0X1F8C);
    // 0x0041AC8C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0041AC90: addu        $at, $at, $a0
    ctx->r1 = ADD32(ctx->r1, ctx->r4);
    // 0x0041AC94: sb          $v1, 0x1F8C($at)
    MEM_B(0X1F8C, ctx->r1) = ctx->r3;
    // 0x0041AC98: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x0041AC9C: slti        $v0, $a0, 0x17
    ctx->r2 = SIGNED(ctx->r4) < 0X17 ? 1 : 0;
    // 0x0041ACA0: bne         $v0, $zero, L_0041AC80
    if (ctx->r2 != 0) {
        // 0x0041ACA4: addiu       $v0, $a0, 0x1
        ctx->r2 = ADD32(ctx->r4, 0X1);
            goto L_0041AC80;
    }
    // 0x0041ACA4: addiu       $v0, $a0, 0x1
    ctx->r2 = ADD32(ctx->r4, 0X1);
    // 0x0041ACA8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_0041ACAC:
    // 0x0041ACAC: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x0041ACB0: addiu       $v1, $v1, 0x1F80
    ctx->r3 = ADD32(ctx->r3, 0X1F80);
    // 0x0041ACB4: lw          $a0, 0x0($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X0);
    // 0x0041ACB8: lw          $a1, 0x8($v1)
    ctx->r5 = MEM_W(ctx->r3, 0X8);
    // 0x0041ACBC: addiu       $a0, $a0, -0x1
    ctx->r4 = ADD32(ctx->r4, -0X1);
    // 0x0041ACC0: addiu       $a1, $a1, -0x1
    ctx->r5 = ADD32(ctx->r5, -0X1);
    // 0x0041ACC4: sw          $a0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r4;
    // 0x0041ACC8: jr          $ra
    // 0x0041ACCC: sw          $a1, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r5;
    return;
    // 0x0041ACCC: sw          $a1, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r5;
;}
RECOMP_FUNC void func_004181C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004181C8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x004181CC: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x004181D0: lw          $v0, 0x20($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X20);
    // 0x004181D4: lb          $a0, 0x4($v0)
    ctx->r4 = MEM_B(ctx->r2, 0X4);
    // 0x004181D8: jal         0x00285A68
    // 0x004181DC: nop

    func_00285A68(rdram, ctx);
        goto after_0;
    // 0x004181DC: nop

    after_0:
    // 0x004181E0: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x004181E4: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x004181E8: sw          $zero, 0x2020($at)
    MEM_W(0X2020, ctx->r1) = 0;
    // 0x004181EC: jr          $ra
    // 0x004181F0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x004181F0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00211BA8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00211BA8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00211BAC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00211BB0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x00211BB4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x00211BB8: lwc1        $f1, 0x18($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X18);
    // 0x00211BBC: mul.s       $f1, $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f1.fl);
    // 0x00211BC0: lwc1        $f0, 0x20($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X20);
    // 0x00211BC4: mul.s       $f0, $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x00211BC8: add.s       $f12, $f1, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x00211BCC: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x00211BD0: c.eq.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl == ctx->f0.fl;
    // 0x00211BD4: nop

    // 0x00211BD8: bc1tl       L_00211C18
    if (c1cs) {
        // 0x00211BDC: swc1        $f0, 0x24($s0)
        MEM_W(0X24, ctx->r16) = ctx->f0.u32l;
            goto L_00211C18;
    }
    goto skip_0;
    // 0x00211BDC: swc1        $f0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f0.u32l;
    skip_0:
    // 0x00211BE0: jal         0x00298470
    // 0x00211BE4: nop

    func_00298470(rdram, ctx);
        goto after_0;
    // 0x00211BE4: nop

    after_0:
    // 0x00211BE8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00211BEC: lwc1        $f1, 0x56C8($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X56C8);
    // 0x00211BF0: lwc1        $f2, 0x18($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X18);
    // 0x00211BF4: div.s       $f12, $f1, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = DIV_S(ctx->f1.fl, ctx->f0.fl);
    // 0x00211BF8: mul.s       $f2, $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f12.fl);
    // 0x00211BFC: lwc1        $f1, 0x1C($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X1C);
    // 0x00211C00: mul.s       $f1, $f1, $f12
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f12.fl);
    // 0x00211C04: lwc1        $f0, 0x20($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X20);
    // 0x00211C08: mul.s       $f0, $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f12.fl);
    // 0x00211C0C: swc1        $f2, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f2.u32l;
    // 0x00211C10: j           L_00211C1C
    // 0x00211C14: swc1        $f1, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->f_odd[(1 - 1) * 2];
        goto L_00211C1C;
    // 0x00211C14: swc1        $f1, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->f_odd[(1 - 1) * 2];
L_00211C18:
    // 0x00211C18: swc1        $f0, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->f0.u32l;
L_00211C1C:
    // 0x00211C1C: swc1        $f0, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->f0.u32l;
    // 0x00211C20: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x00211C24: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00211C28: jr          $ra
    // 0x00211C2C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00211C2C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0026E758(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_0023587C:
    // 0x0026E758: sw          $v0, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r2;
    // 0x0026E75C: j           L_0023587C
    entry_0023587C(rdram, ctx);
    return;
;}
RECOMP_FUNC void func_0042283C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0042283C: addiu       $v0, $zero, 0xE
    ctx->r2 = ADD32(0, 0XE);
    // 0x00422840: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x00422844: sw          $v0, 0x9C0($at)
    MEM_W(0X9C0, ctx->r1) = ctx->r2;
    // 0x00422848: jr          $ra
    // 0x0042284C: nop

    return;
    // 0x0042284C: nop

;}
RECOMP_FUNC void func_0021DA8C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0021DA8C: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x0021DA90: sw          $s3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r19;
    // 0x0021DA94: addu        $s3, $a0, $zero
    ctx->r19 = ADD32(ctx->r4, 0);
    // 0x0021DA98: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x0021DA9C: addu        $s2, $a2, $zero
    ctx->r18 = ADD32(ctx->r6, 0);
    // 0x0021DAA0: addiu       $a3, $s2, 0x18
    ctx->r7 = ADD32(ctx->r18, 0X18);
    // 0x0021DAA4: sw          $ra, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r31;
    // 0x0021DAA8: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x0021DAAC: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x0021DAB0: lw          $a0, 0x14($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X14);
    // 0x0021DAB4: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x0021DAB8: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x0021DABC: lw          $t0, 0x14($s2)
    ctx->r8 = MEM_W(ctx->r18, 0X14);
    // 0x0021DAC0: bne         $v0, $v1, L_0021DB6C
    if (ctx->r2 != ctx->r3) {
        // 0x0021DAC4: addiu       $a2, $s2, 0x1C
        ctx->r6 = ADD32(ctx->r18, 0X1C);
            goto L_0021DB6C;
    }
    // 0x0021DAC4: addiu       $a2, $s2, 0x1C
    ctx->r6 = ADD32(ctx->r18, 0X1C);
    // 0x0021DAC8: lb          $v1, 0x174($s3)
    ctx->r3 = MEM_B(ctx->r19, 0X174);
    // 0x0021DACC: addiu       $v0, $zero, 0x3C
    ctx->r2 = ADD32(0, 0X3C);
    // 0x0021DAD0: bne         $v1, $v0, L_0021DAE4
    if (ctx->r3 != ctx->r2) {
        // 0x0021DAD4: addu        $v0, $v1, $zero
        ctx->r2 = ADD32(ctx->r3, 0);
            goto L_0021DAE4;
    }
    // 0x0021DAD4: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
    // 0x0021DAD8: lb          $v0, 0x176($s3)
    ctx->r2 = MEM_B(ctx->r19, 0X176);
    // 0x0021DADC: j           L_0021DAE8
    // 0x0021DAE0: addiu       $v1, $v0, -0x36
    ctx->r3 = ADD32(ctx->r2, -0X36);
        goto L_0021DAE8;
    // 0x0021DAE0: addiu       $v1, $v0, -0x36
    ctx->r3 = ADD32(ctx->r2, -0X36);
L_0021DAE4:
    // 0x0021DAE4: addiu       $v1, $v0, -0x36
    ctx->r3 = ADD32(ctx->r2, -0X36);
L_0021DAE8:
    // 0x0021DAE8: sltiu       $v0, $v1, 0x6
    ctx->r2 = ctx->r3 < 0X6 ? 1 : 0;
    // 0x0021DAEC: beq         $v0, $zero, L_0021DB54
    if (ctx->r2 == 0) {
        // 0x0021DAF0: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_0021DB54;
    }
    // 0x0021DAF0: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x0021DAF4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0021DAF8: addu        $at, $at, $v0
    gpr jr_addend_0021DB00 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x0021DAFC: lw          $v0, 0x5C58($at)
    ctx->r2 = ADD32(ctx->r1, 0X5C58);
    // 0x0021DB00: jr          $v0
    // 0x0021DB04: nop

    switch (jr_addend_0021DB00 >> 2) {
        case 0: goto L_0021DB08; break;
        case 1: goto L_0021DB14; break;
        case 2: goto L_0021DB20; break;
        case 3: goto L_0021DB2C; break;
        case 4: goto L_0021DB38; break;
        case 5: goto L_0021DB44; break;
        default: switch_error(__func__, 0x0021DB00, 0x800A5C58);
    }
    // 0x0021DB04: nop

L_0021DB08:
    // 0x0021DB08: lb          $v0, 0x63($a0)
    ctx->r2 = MEM_B(ctx->r4, 0X63);
    // 0x0021DB0C: j           L_0021DB4C
    // 0x0021DB10: sw          $v0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r2;
        goto L_0021DB4C;
    // 0x0021DB10: sw          $v0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r2;
L_0021DB14:
    // 0x0021DB14: lb          $v0, 0x64($a0)
    ctx->r2 = MEM_B(ctx->r4, 0X64);
    // 0x0021DB18: j           L_0021DB4C
    // 0x0021DB1C: sw          $v0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r2;
        goto L_0021DB4C;
    // 0x0021DB1C: sw          $v0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r2;
L_0021DB20:
    // 0x0021DB20: lb          $v0, 0x65($a0)
    ctx->r2 = MEM_B(ctx->r4, 0X65);
    // 0x0021DB24: j           L_0021DB4C
    // 0x0021DB28: sw          $v0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r2;
        goto L_0021DB4C;
    // 0x0021DB28: sw          $v0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r2;
L_0021DB2C:
    // 0x0021DB2C: lb          $v0, 0x66($a0)
    ctx->r2 = MEM_B(ctx->r4, 0X66);
    // 0x0021DB30: j           L_0021DB4C
    // 0x0021DB34: sw          $v0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r2;
        goto L_0021DB4C;
    // 0x0021DB34: sw          $v0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r2;
L_0021DB38:
    // 0x0021DB38: lb          $v0, 0x67($a0)
    ctx->r2 = MEM_B(ctx->r4, 0X67);
    // 0x0021DB3C: j           L_0021DB4C
    // 0x0021DB40: sw          $v0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r2;
        goto L_0021DB4C;
    // 0x0021DB40: sw          $v0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r2;
L_0021DB44:
    // 0x0021DB44: lb          $v0, 0x68($a0)
    ctx->r2 = MEM_B(ctx->r4, 0X68);
    // 0x0021DB48: sw          $v0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r2;
L_0021DB4C:
    // 0x0021DB4C: j           L_0021DB80
    // 0x0021DB50: sw          $v0, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r2;
        goto L_0021DB80;
    // 0x0021DB50: sw          $v0, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r2;
L_0021DB54:
    // 0x0021DB54: addu        $v0, $t0, $a0
    ctx->r2 = ADD32(ctx->r8, ctx->r4);
    // 0x0021DB58: lb          $v1, 0xE($v0)
    ctx->r3 = MEM_B(ctx->r2, 0XE);
    // 0x0021DB5C: sw          $v1, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r3;
    // 0x0021DB60: lb          $v0, 0x10($v0)
    ctx->r2 = MEM_B(ctx->r2, 0X10);
    // 0x0021DB64: j           L_0021DB80
    // 0x0021DB68: sw          $v0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r2;
        goto L_0021DB80;
    // 0x0021DB68: sw          $v0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r2;
L_0021DB6C:
    // 0x0021DB6C: addu        $v0, $t0, $a0
    ctx->r2 = ADD32(ctx->r8, ctx->r4);
    // 0x0021DB70: lb          $v1, 0xE($v0)
    ctx->r3 = MEM_B(ctx->r2, 0XE);
    // 0x0021DB74: sw          $v1, 0x18($s2)
    MEM_W(0X18, ctx->r18) = ctx->r3;
    // 0x0021DB78: lb          $v0, 0x10($v0)
    ctx->r2 = MEM_B(ctx->r2, 0X10);
    // 0x0021DB7C: sw          $v0, 0x1C($s2)
    MEM_W(0X1C, ctx->r18) = ctx->r2;
L_0021DB80:
    // 0x0021DB80: lw          $v0, 0x18($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X18);
    // 0x0021DB84: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
    // 0x0021DB88: sllv        $v0, $s0, $v0
    ctx->r2 = S32(ctx->r16 << (ctx->r2 & 31));
    // 0x0021DB8C: sw          $v0, 0x14C($s3)
    MEM_W(0X14C, ctx->r19) = ctx->r2;
    // 0x0021DB90: lw          $v0, 0x4($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X4);
    // 0x0021DB94: beq         $v0, $zero, L_0021DBA4
    if (ctx->r2 == 0) {
        // 0x0021DB98: addu        $a0, $s3, $zero
        ctx->r4 = ADD32(ctx->r19, 0);
            goto L_0021DBA4;
    }
    // 0x0021DB98: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x0021DB9C: jal         0x0021DC84
    // 0x0021DBA0: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    func_0021DC84(rdram, ctx);
        goto after_0;
    // 0x0021DBA0: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    after_0:
L_0021DBA4:
    // 0x0021DBA4: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
    // 0x0021DBA8: beq         $v0, $zero, L_0021DC68
    if (ctx->r2 == 0) {
        // 0x0021DBAC: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_0021DC68;
    }
    // 0x0021DBAC: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0021DBB0: addu        $a3, $a0, $zero
    ctx->r7 = ADD32(ctx->r4, 0);
    // 0x0021DBB4: lw          $v1, 0x280($s3)
    ctx->r3 = MEM_W(ctx->r19, 0X280);
    // 0x0021DBB8: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x0021DBBC: lw          $a1, -0x3528($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X3528);
    // 0x0021DBC0: lui         $v0, 0x22
    ctx->r2 = S32(0X22 << 16);
    // 0x0021DBC4: addiu       $v0, $v0, 0x208
    ctx->r2 = ADD32(ctx->r2, 0X208);
    // 0x0021DBC8: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x0021DBCC: lui         $v0, 0x800A
    ctx->r2 = S32(0X800A << 16);
    // 0x0021DBD0: addiu       $v0, $v0, 0x5C48
    ctx->r2 = ADD32(ctx->r2, 0X5C48);
    // 0x0021DBD4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x0021DBD8: sw          $s3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r19;
    // 0x0021DBDC: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x0021DBE0: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x0021DBE4: lw          $a2, 0xC($s2)
    ctx->r6 = MEM_W(ctx->r18, 0XC);
    // 0x0021DBE8: jal         0x00203CA0
    // 0x0021DBEC: or          $a1, $v1, $a1
    ctx->r5 = ctx->r3 | ctx->r5;
    func_00203CA0(rdram, ctx);
        goto after_1;
    // 0x0021DBEC: or          $a1, $v1, $a1
    ctx->r5 = ctx->r3 | ctx->r5;
    after_1:
    // 0x0021DBF0: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x0021DBF4: beq         $s1, $zero, L_0021DC68
    if (ctx->r17 == 0) {
        // 0x0021DBF8: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_0021DC68;
    }
    // 0x0021DBF8: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0021DBFC: jal         0x0020565C
    // 0x0021DC00: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_0020565C(rdram, ctx);
        goto after_2;
    // 0x0021DC00: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_2:
    // 0x0021DC04: lw          $v1, 0x0($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X0);
    // 0x0021DC08: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x0021DC0C: bne         $v0, $s0, L_0021DC34
    if (ctx->r2 != ctx->r16) {
        // 0x0021DC10: addiu       $s0, $v1, 0x8
        ctx->r16 = ADD32(ctx->r3, 0X8);
            goto L_0021DC34;
    }
    // 0x0021DC10: addiu       $s0, $v1, 0x8
    ctx->r16 = ADD32(ctx->r3, 0X8);
    // 0x0021DC14: lw          $s0, 0x4($v1)
    ctx->r16 = MEM_W(ctx->r3, 0X4);
    // 0x0021DC18: lw          $a1, 0x8($v1)
    ctx->r5 = MEM_W(ctx->r3, 0X8);
    // 0x0021DC1C: addu        $s0, $v1, $s0
    ctx->r16 = ADD32(ctx->r3, ctx->r16);
    // 0x0021DC20: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0021DC24: jal         0x00214F68
    // 0x0021DC28: addu        $a1, $v1, $a1
    ctx->r5 = ADD32(ctx->r3, ctx->r5);
    entry_00214F68(rdram, ctx);
        goto after_3;
    // 0x0021DC28: addu        $a1, $v1, $a1
    ctx->r5 = ADD32(ctx->r3, ctx->r5);
    after_3:
    // 0x0021DC2C: j           L_0021DC38
    // 0x0021DC30: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
        goto L_0021DC38;
    // 0x0021DC30: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
L_0021DC34:
    // 0x0021DC34: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
L_0021DC38:
    // 0x0021DC38: lw          $v0, 0x18($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X18);
    // 0x0021DC3C: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x0021DC40: lb          $v0, 0x151($s3)
    ctx->r2 = MEM_B(ctx->r19, 0X151);
    // 0x0021DC44: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x0021DC48: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x0021DC4C: lw          $a0, 0xC($s2)
    ctx->r4 = MEM_W(ctx->r18, 0XC);
    // 0x0021DC50: lw          $a1, 0x98($s3)
    ctx->r5 = MEM_W(ctx->r19, 0X98);
    // 0x0021DC54: jal         0x0020B6A0
    // 0x0021DC58: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_0020B6A0(rdram, ctx);
        goto after_4;
    // 0x0021DC58: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_4:
    // 0x0021DC5C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0021DC60: jal         0x002051F4
    // 0x0021DC64: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_002051F4(rdram, ctx);
        goto after_5;
    // 0x0021DC64: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_5:
L_0021DC68:
    // 0x0021DC68: lw          $ra, 0x38($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X38);
    // 0x0021DC6C: lw          $s3, 0x34($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X34);
    // 0x0021DC70: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x0021DC74: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x0021DC78: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x0021DC7C: jr          $ra
    // 0x0021DC80: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x0021DC80: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_00267024(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00267024: lui         $v1, 0x20
    ctx->r3 = S32(0X20 << 16);
    // 0x00267028: addiu       $v1, $v1, 0x500
    ctx->r3 = ADD32(ctx->r3, 0X500);
    // 0x0026702C: sltu        $v0, $a0, $v1
    ctx->r2 = ctx->r4 < ctx->r3 ? 1 : 0;
    // 0x00267030: bne         $v0, $zero, L_00267050
    if (ctx->r2 != 0) {
        // 0x00267034: nop
    
            goto L_00267050;
    }
    // 0x00267034: nop

    // 0x00267038: lui         $v0, 0xA
    ctx->r2 = S32(0XA << 16);
    // 0x0026703C: addiu       $v0, $v0, 0x4694
    ctx->r2 = ADD32(ctx->r2, 0X4694);
    // 0x00267040: addu        $v0, $v1, $v0
    ctx->r2 = ADD32(ctx->r3, ctx->r2);
    // 0x00267044: sltu        $v0, $a0, $v0
    ctx->r2 = ctx->r4 < ctx->r2 ? 1 : 0;
    // 0x00267048: bne         $v0, $zero, L_00267080
    if (ctx->r2 != 0) {
        // 0x0026704C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_00267080;
    }
    // 0x0026704C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_00267050:
    // 0x00267050: lui         $a1, 0x40
    ctx->r5 = S32(0X40 << 16);
    // 0x00267054: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    // 0x00267058: sltu        $v0, $a0, $a1
    ctx->r2 = ctx->r4 < ctx->r5 ? 1 : 0;
    // 0x0026705C: bne         $v0, $zero, L_00267080
    if (ctx->r2 != 0) {
        // 0x00267060: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_00267080;
    }
    // 0x00267060: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x00267064: lui         $v1, 0x3
    ctx->r3 = S32(0X3 << 16);
    // 0x00267068: addiu       $v1, $v1, -0x61A0
    ctx->r3 = ADD32(ctx->r3, -0X61A0);
    // 0x0026706C: addu        $v1, $a1, $v1
    ctx->r3 = ADD32(ctx->r5, ctx->r3);
    // 0x00267070: sltu        $v1, $a0, $v1
    ctx->r3 = ctx->r4 < ctx->r3 ? 1 : 0;
    // 0x00267074: bne         $v1, $zero, L_00267080
    if (ctx->r3 != 0) {
        // 0x00267078: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_00267080;
    }
    // 0x00267078: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0026707C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_00267080:
    // 0x00267080: jr          $ra
    // 0x00267084: nop

    return;
    // 0x00267084: nop

;}
RECOMP_FUNC void func_0041D890(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041D890: lui         $v0, 0x800F
    ctx->r2 = S32(0X800F << 16);
    // 0x0041D894: lw          $v0, 0x70A8($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X70A8);
    // 0x0041D898: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x0041D89C: lw          $v1, 0x2010($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X2010);
    // 0x0041D8A0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x0041D8A4: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x0041D8A8: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x0041D8AC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x0041D8B0: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x0041D8B4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0041D8B8: beq         $v1, $zero, L_0041D8D8
    if (ctx->r3 == 0) {
        // 0x0041D8BC: addiu       $s2, $v0, 0x688
        ctx->r18 = ADD32(ctx->r2, 0X688);
            goto L_0041D8D8;
    }
    // 0x0041D8BC: addiu       $s2, $v0, 0x688
    ctx->r18 = ADD32(ctx->r2, 0X688);
    // 0x0041D8C0: jal         0x002053A8
    // 0x0041D8C4: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_002053A8(rdram, ctx);
        goto after_0;
    // 0x0041D8C4: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_0:
    // 0x0041D8C8: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x0041D8CC: lw          $a1, 0x2010($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X2010);
    // 0x0041D8D0: jal         0x002052D8
    // 0x0041D8D4: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_002052D8(rdram, ctx);
        goto after_1;
    // 0x0041D8D4: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_1:
L_0041D8D8:
    // 0x0041D8D8: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0041D8DC: addiu       $a2, $zero, 0x33
    ctx->r6 = ADD32(0, 0X33);
    // 0x0041D8E0: lui         $s0, 0x800F
    ctx->r16 = S32(0X800F << 16);
    // 0x0041D8E4: lw          $s0, 0x70A8($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X70A8);
    // 0x0041D8E8: lui         $a3, 0x800C
    ctx->r7 = S32(0X800C << 16);
    // 0x0041D8EC: addiu       $a3, $a3, 0x13F0
    ctx->r7 = ADD32(ctx->r7, 0X13F0);
    // 0x0041D8F0: addiu       $s0, $s0, 0x688
    ctx->r16 = ADD32(ctx->r16, 0X688);
    // 0x0041D8F4: jal         0x00204EDC
    // 0x0041D8F8: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_00204EDC(rdram, ctx);
        goto after_2;
    // 0x0041D8F8: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_2:
    // 0x0041D8FC: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x0041D900: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
    // 0x0041D904: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0041D908: sw          $v0, 0x2010($at)
    MEM_W(0X2010, ctx->r1) = ctx->r2;
    // 0x0041D90C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0041D910: sw          $a0, 0x2018($at)
    MEM_W(0X2018, ctx->r1) = ctx->r4;
    // 0x0041D914: jal         0x00266C5C
    // 0x0041D918: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    func_00266C5C(rdram, ctx);
        goto after_3;
    // 0x0041D918: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    after_3:
    // 0x0041D91C: addiu       $a2, $s1, 0x520
    ctx->r6 = ADD32(ctx->r17, 0X520);
    // 0x0041D920: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x0041D924: lw          $v0, 0x2018($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2018);
    // 0x0041D928: addiu       $a0, $s1, 0xA00
    ctx->r4 = ADD32(ctx->r17, 0XA00);
    // 0x0041D92C: addiu       $a1, $v0, 0x18
    ctx->r5 = ADD32(ctx->r2, 0X18);
L_0041D930:
    // 0x0041D930: lw          $t0, 0x0($a2)
    ctx->r8 = MEM_W(ctx->r6, 0X0);
    // 0x0041D934: lw          $t1, 0x4($a2)
    ctx->r9 = MEM_W(ctx->r6, 0X4);
    // 0x0041D938: lw          $t2, 0x8($a2)
    ctx->r10 = MEM_W(ctx->r6, 0X8);
    // 0x0041D93C: lw          $t3, 0xC($a2)
    ctx->r11 = MEM_W(ctx->r6, 0XC);
    // 0x0041D940: sw          $t0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r8;
    // 0x0041D944: sw          $t1, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r9;
    // 0x0041D948: sw          $t2, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->r10;
    // 0x0041D94C: sw          $t3, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->r11;
    // 0x0041D950: addiu       $a2, $a2, 0x10
    ctx->r6 = ADD32(ctx->r6, 0X10);
    // 0x0041D954: bne         $a2, $a0, L_0041D930
    if (ctx->r6 != ctx->r4) {
        // 0x0041D958: addiu       $a1, $a1, 0x10
        ctx->r5 = ADD32(ctx->r5, 0X10);
            goto L_0041D930;
    }
    // 0x0041D958: addiu       $a1, $a1, 0x10
    ctx->r5 = ADD32(ctx->r5, 0X10);
    // 0x0041D95C: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x0041D960: addiu       $v1, $v1, -0x5528
    ctx->r3 = ADD32(ctx->r3, -0X5528);
    // 0x0041D964: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x0041D968: lw          $v0, 0x2018($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2018);
    // 0x0041D96C: addiu       $a0, $v1, 0x180
    ctx->r4 = ADD32(ctx->r3, 0X180);
    // 0x0041D970: lw          $t0, 0x0($a2)
    ctx->r8 = MEM_W(ctx->r6, 0X0);
    // 0x0041D974: lw          $t1, 0x4($a2)
    ctx->r9 = MEM_W(ctx->r6, 0X4);
    // 0x0041D978: sw          $t0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r8;
    // 0x0041D97C: sw          $t1, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r9;
    // 0x0041D980: addiu       $v0, $v0, 0x500
    ctx->r2 = ADD32(ctx->r2, 0X500);
L_0041D984:
    // 0x0041D984: lw          $t0, 0x0($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X0);
    // 0x0041D988: lw          $t1, 0x4($v1)
    ctx->r9 = MEM_W(ctx->r3, 0X4);
    // 0x0041D98C: lw          $t2, 0x8($v1)
    ctx->r10 = MEM_W(ctx->r3, 0X8);
    // 0x0041D990: lw          $t3, 0xC($v1)
    ctx->r11 = MEM_W(ctx->r3, 0XC);
    // 0x0041D994: sw          $t0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r8;
    // 0x0041D998: sw          $t1, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r9;
    // 0x0041D99C: sw          $t2, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r10;
    // 0x0041D9A0: sw          $t3, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r11;
    // 0x0041D9A4: addiu       $v1, $v1, 0x10
    ctx->r3 = ADD32(ctx->r3, 0X10);
    // 0x0041D9A8: bne         $v1, $a0, L_0041D984
    if (ctx->r3 != ctx->r4) {
        // 0x0041D9AC: addiu       $v0, $v0, 0x10
        ctx->r2 = ADD32(ctx->r2, 0X10);
            goto L_0041D984;
    }
    // 0x0041D9AC: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
    // 0x0041D9B0: lw          $t0, 0x0($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X0);
    // 0x0041D9B4: sw          $t0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r8;
    // 0x0041D9B8: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x0041D9BC: addiu       $v0, $v0, -0x5350
    ctx->r2 = ADD32(ctx->r2, -0X5350);
    // 0x0041D9C0: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x0041D9C4: lw          $a0, 0x2018($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X2018);
    // 0x0041D9C8: lwc1        $f0, 0x0($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X0);
    // 0x0041D9CC: swc1        $f0, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->f0.u32l;
    // 0x0041D9D0: lwc1        $f0, 0x4($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X4);
    // 0x0041D9D4: swc1        $f0, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->f0.u32l;
    // 0x0041D9D8: lwc1        $f0, 0x8($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X8);
    // 0x0041D9DC: swc1        $f0, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->f0.u32l;
    // 0x0041D9E0: lwc1        $f0, 0xC($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0XC);
    // 0x0041D9E4: lui         $v1, 0x800F
    ctx->r3 = S32(0X800F << 16);
    // 0x0041D9E8: addiu       $v1, $v1, 0x70A8
    ctx->r3 = ADD32(ctx->r3, 0X70A8);
    // 0x0041D9EC: sw          $s2, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r18;
    // 0x0041D9F0: swc1        $f0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->f0.u32l;
    // 0x0041D9F4: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x0041D9F8: lui         $a1, 0x800F
    ctx->r5 = S32(0X800F << 16);
    // 0x0041D9FC: addiu       $a1, $a1, -0x4540
    ctx->r5 = ADD32(ctx->r5, -0X4540);
    // 0x0041DA00: sw          $v0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r2;
    // 0x0041DA04: lw          $a2, 0x0($v1)
    ctx->r6 = MEM_W(ctx->r3, 0X0);
    // 0x0041DA08: jal         0x0029E460
    // 0x0041DA0C: addiu       $a0, $a0, 0x684
    ctx->r4 = ADD32(ctx->r4, 0X684);
    func_0029E460(rdram, ctx);
        goto after_4;
    // 0x0041DA0C: addiu       $a0, $a0, 0x684
    ctx->r4 = ADD32(ctx->r4, 0X684);
    after_4:
    // 0x0041DA10: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x0041DA14: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x0041DA18: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x0041DA1C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0041DA20: jr          $ra
    // 0x0041DA24: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x0041DA24: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_00416B44(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_00416B44:
    // 0x00416B44: lw          $s0, 0x0($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X0);
    // 0x00416B48: beq         $s0, $zero, L_00416B98
    if (ctx->r16 == 0) {
        // 0x00416B4C: nop
    
            goto L_00416B98;
    }
    // 0x00416B4C: nop

    // 0x00416B50: lw          $v0, 0x14($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X14);
    // 0x00416B54: lw          $v0, 0xC($v0)
    ctx->r2 = MEM_W(ctx->r2, 0XC);
    // 0x00416B58: beq         $v0, $zero, L_00416B68
    if (ctx->r2 == 0) {
        // 0x00416B5C: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_00416B68;
    }
    // 0x00416B5C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00416B60: jalr        $v0
    // 0x00416B64: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x00416B64: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_0:
L_00416B68:
    // 0x00416B68: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x00416B6C: lw          $v0, 0x20($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X20);
    // 0x00416B70: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x00416B74: sw          $zero, 0xB0($v0)
    MEM_W(0XB0, ctx->r2) = 0;
    // 0x00416B78: sw          $zero, 0xB4($v0)
    MEM_W(0XB4, ctx->r2) = 0;
    // 0x00416B7C: jal         0x00200738
    // 0x00416B80: sw          $zero, 0xBC($v0)
    MEM_W(0XBC, ctx->r2) = 0;
    func_00200738(rdram, ctx);
        goto after_1;
    // 0x00416B80: sw          $zero, 0xBC($v0)
    MEM_W(0XBC, ctx->r2) = 0;
    after_1:
    // 0x00416B84: lw          $a1, 0x8($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X8);
    // 0x00416B88: jal         0x002052D8
    // 0x00416B8C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_002052D8(rdram, ctx);
        goto after_2;
    // 0x00416B8C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_2:
    // 0x00416B90: j           L_00416B44
    // 0x00416B94: nop

        goto L_00416B44;
    // 0x00416B94: nop

L_00416B98:
    // 0x00416B98: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x00416B9C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00416BA0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00416BA4: jr          $ra
    // 0x00416BA8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00416BA8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_004407AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004407AC: lw          $v0, 0xD4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XD4);
    // 0x004407B0: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x004407B4: lwc1        $f0, 0x540($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X540);
    // 0x004407B8: ori         $v0, $v0, 0x2000
    ctx->r2 = ctx->r2 | 0X2000;
    // 0x004407BC: swc1        $f0, 0x1FC($a0)
    MEM_W(0X1FC, ctx->r4) = ctx->f0.u32l;
    // 0x004407C0: sw          $v0, 0xD4($a0)
    MEM_W(0XD4, ctx->r4) = ctx->r2;
    // 0x004407C4: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x004407C8: addiu       $a0, $a0, -0x61C
    ctx->r4 = ADD32(ctx->r4, -0X61C);
    // 0x004407CC: lw          $v1, -0xC($a0)
    ctx->r3 = MEM_W(ctx->r4, -0XC);
    // 0x004407D0: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x004407D4: bne         $v1, $v0, L_004407E8
    if (ctx->r3 != ctx->r2) {
            // 0x004407D8: swc1        $f0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f0.u32l;
    func_004407E8(rdram, ctx);
    return;
    }
    // 0x004407D8: swc1        $f0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f0.u32l;
    // 0x004407DC: lwc1        $f0, 0x5C($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X5C);
    // 0x004407E0: jr          $ra
    // 0x004407E4: swc1        $f0, 0x50($a0)
    MEM_W(0X50, ctx->r4) = ctx->f0.u32l;
    return;
    // 0x004407E4: swc1        $f0, 0x50($a0)
    MEM_W(0X50, ctx->r4) = ctx->f0.u32l;
;}
RECOMP_FUNC void func_0028AF58(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0028AF58: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x0028AF5C: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x0028AF60: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x0028AF64: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x0028AF68: addu        $s3, $a1, $zero
    ctx->r19 = ADD32(ctx->r5, 0);
    // 0x0028AF6C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x0028AF70: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x0028AF74: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x0028AF78: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0028AF7C: lw          $s0, 0x2E0($s2)
    ctx->r16 = MEM_W(ctx->r18, 0X2E0);
    // 0x0028AF80: jal         0x0029E230
    // 0x0028AF84: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_0029E230(rdram, ctx);
        goto after_0;
    // 0x0028AF84: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_0:
    // 0x0028AF88: beq         $s0, $zero, L_0028AFC4
    if (ctx->r16 == 0) {
        // 0x0028AF8C: addu        $a0, $v0, $zero
        ctx->r4 = ADD32(ctx->r2, 0);
            goto L_0028AFC4;
    }
    // 0x0028AF8C: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
L_0028AF90:
    // 0x0028AF90: bnel        $s0, $s3, L_0028AFB8
    if (ctx->r16 != ctx->r19) {
        // 0x0028AF94: addu        $s1, $s0, $zero
        ctx->r17 = ADD32(ctx->r16, 0);
            goto L_0028AFB8;
    }
    goto skip_0;
    // 0x0028AF94: addu        $s1, $s0, $zero
    ctx->r17 = ADD32(ctx->r16, 0);
    skip_0:
    // 0x0028AF98: beq         $s1, $zero, L_0028AFAC
    if (ctx->r17 == 0) {
        // 0x0028AF9C: nop
    
            goto L_0028AFAC;
    }
    // 0x0028AF9C: nop

    // 0x0028AFA0: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x0028AFA4: j           L_0028AFC4
    // 0x0028AFA8: sw          $v0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r2;
        goto L_0028AFC4;
    // 0x0028AFA8: sw          $v0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r2;
L_0028AFAC:
    // 0x0028AFAC: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x0028AFB0: j           L_0028AFC4
    // 0x0028AFB4: sw          $v0, 0x2E0($s2)
    MEM_W(0X2E0, ctx->r18) = ctx->r2;
        goto L_0028AFC4;
    // 0x0028AFB4: sw          $v0, 0x2E0($s2)
    MEM_W(0X2E0, ctx->r18) = ctx->r2;
L_0028AFB8:
    // 0x0028AFB8: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
    // 0x0028AFBC: bne         $s0, $zero, L_0028AF90
    if (ctx->r16 != 0) {
        // 0x0028AFC0: nop
    
            goto L_0028AF90;
    }
    // 0x0028AFC0: nop

L_0028AFC4:
    // 0x0028AFC4: jal         0x0029E230
    // 0x0028AFC8: nop

    func_0029E230(rdram, ctx);
        goto after_1;
    // 0x0028AFC8: nop

    after_1:
    // 0x0028AFCC: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x0028AFD0: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x0028AFD4: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x0028AFD8: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x0028AFDC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0028AFE0: jr          $ra
    // 0x0028AFE4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x0028AFE4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_0041C338(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041C338: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x0041C33C: addiu       $a1, $a1, -0x5378
    ctx->r5 = ADD32(ctx->r5, -0X5378);
    // 0x0041C340: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x0041C344: addiu       $v0, $zero, 0xD
    ctx->r2 = ADD32(0, 0XD);
    // 0x0041C348: bne         $v1, $v0, L_0041C36C
    if (ctx->r3 != ctx->r2) {
        // 0x0041C34C: nop
    
            goto L_0041C36C;
    }
    // 0x0041C34C: nop

    // 0x0041C350: lbu         $v0, -0x197($a1)
    ctx->r2 = MEM_BU(ctx->r5, -0X197);
    // 0x0041C354: bne         $v0, $zero, L_0041C36C
    if (ctx->r2 != 0) {
        // 0x0041C358: lui         $v1, 0xFEFF
        ctx->r3 = S32(0XFEFF << 16);
            goto L_0041C36C;
    }
    // 0x0041C358: lui         $v1, 0xFEFF
    ctx->r3 = S32(0XFEFF << 16);
    // 0x0041C35C: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x0041C360: ori         $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 | 0XFFFF;
    // 0x0041C364: j           L_0041C378
    // 0x0041C368: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
        goto L_0041C378;
    // 0x0041C368: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
L_0041C36C:
    // 0x0041C36C: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x0041C370: lui         $v1, 0x100
    ctx->r3 = S32(0X100 << 16);
    // 0x0041C374: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
L_0041C378:
    // 0x0041C378: sw          $v0, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r2;
    // 0x0041C37C: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x0041C380: lbu         $v1, -0x550D($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X550D);
    // 0x0041C384: beq         $v1, $zero, L_0041C39C
    if (ctx->r3 == 0) {
        // 0x0041C388: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_0041C39C;
    }
    // 0x0041C388: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0041C38C: beq         $v1, $v0, L_0041C3AC
    if (ctx->r3 == ctx->r2) {
        // 0x0041C390: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_0041C3AC;
    }
    // 0x0041C390: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x0041C394: j           L_0041C3BC
    // 0x0041C398: nop

        goto L_0041C3BC;
    // 0x0041C398: nop

L_0041C39C:
    // 0x0041C39C: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0041C3A0: addiu       $v0, $v0, 0x3FD8
    ctx->r2 = ADD32(ctx->r2, 0X3FD8);
    // 0x0041C3A4: j           L_0041C3B8
    // 0x0041C3A8: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_0041C3B8;
    // 0x0041C3A8: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_0041C3AC:
    // 0x0041C3AC: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0041C3B0: addiu       $v0, $v0, 0x3FF0
    ctx->r2 = ADD32(ctx->r2, 0X3FF0);
    // 0x0041C3B4: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_0041C3B8:
    // 0x0041C3B8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_0041C3BC:
    // 0x0041C3BC: jr          $ra
    // 0x0041C3C0: nop

    return;
    // 0x0041C3C0: nop

;}
RECOMP_FUNC void func_00444298(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00444298: addiu       $sp, $sp, -0xB0
    ctx->r29 = ADD32(ctx->r29, -0XB0);
    // 0x0044429C: sw          $s1, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r17;
    // 0x004442A0: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x004442A4: sw          $s0, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r16;
    // 0x004442A8: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x004442AC: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    // 0x004442B0: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x004442B4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x004442B8: sw          $ra, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->r31;
    // 0x004442BC: jal         0x00246108
    // 0x004442C0: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    func_00246108(rdram, ctx);
        goto after_0;
    // 0x004442C0: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    after_0:
    // 0x004442C4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x004442C8: lui         $a2, 0x3E86
    ctx->r6 = S32(0X3E86 << 16);
    // 0x004442CC: ori         $a2, $a2, 0xA93
    ctx->r6 = ctx->r6 | 0XA93;
    // 0x004442D0: lw          $a3, 0x20($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X20);
    // 0x004442D4: jal         0x00245BAC
    // 0x004442D8: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_00245BAC(rdram, ctx);
        goto after_1;
    // 0x004442D8: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_1:
    // 0x004442DC: lb          $v0, 0xC7($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XC7);
    // 0x004442E0: beq         $v0, $zero, L_004442F4
    if (ctx->r2 == 0) {
        // 0x004442E4: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_004442F4;
    }
    // 0x004442E4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x004442E8: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x004442EC: jal         0x00243414
    // 0x004442F0: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_00243414(rdram, ctx);
        goto after_2;
    // 0x004442F0: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_2:
L_004442F4:
    // 0x004442F4: lw          $ra, 0xA8($sp)
    ctx->r31 = MEM_W(ctx->r29, 0XA8);
    // 0x004442F8: lw          $s1, 0xA4($sp)
    ctx->r17 = MEM_W(ctx->r29, 0XA4);
    // 0x004442FC: lw          $s0, 0xA0($sp)
    ctx->r16 = MEM_W(ctx->r29, 0XA0);
    // 0x00444300: jr          $ra
    // 0x00444304: addiu       $sp, $sp, 0xB0
    ctx->r29 = ADD32(ctx->r29, 0XB0);
    return;
    // 0x00444304: addiu       $sp, $sp, 0xB0
    ctx->r29 = ADD32(ctx->r29, 0XB0);
;}
RECOMP_FUNC void func_00298900(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00298900: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x00298904: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x00298908: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x0029890C: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x00298910: addu        $s4, $a1, $zero
    ctx->r20 = ADD32(ctx->r5, 0);
    // 0x00298914: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x00298918: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x0029891C: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x00298920: jal         0x00299FE4
    // 0x00298924: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    func_00299FE4(rdram, ctx);
        goto after_0;
    // 0x00298924: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    after_0:
    // 0x00298928: lui         $s3, 0x8012
    ctx->r19 = S32(0X8012 << 16);
    // 0x0029892C: addiu       $s3, $s3, 0x1420
    ctx->r19 = ADD32(ctx->r19, 0X1420);
    // 0x00298930: lbu         $v0, 0x0($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0X0);
    // 0x00298934: addiu       $s2, $zero, 0xFF
    ctx->r18 = ADD32(0, 0XFF);
    // 0x00298938: beq         $v0, $s2, L_002989B0
    if (ctx->r2 == ctx->r18) {
        // 0x0029893C: nop
    
            goto L_002989B0;
    }
    // 0x0029893C: nop

    // 0x00298940: jal         0x00298A0C
    // 0x00298944: nop

    func_00298A0C(rdram, ctx);
        goto after_1;
    // 0x00298944: nop

    after_1:
    // 0x00298948: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x0029894C: lui         $s0, 0x8012
    ctx->r16 = S32(0X8012 << 16);
    // 0x00298950: addiu       $s0, $s0, 0x13E0
    ctx->r16 = ADD32(ctx->r16, 0X13E0);
    // 0x00298954: jal         0x0029A080
    // 0x00298958: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_0029A080(rdram, ctx);
        goto after_2;
    // 0x00298958: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_2:
    // 0x0029895C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x00298960: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x00298964: jal         0x0029B6F0
    // 0x00298968: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osRecvMesg_recomp(rdram, ctx);
        goto after_3;
    // 0x00298968: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_3:
    // 0x0029896C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x00298970: jal         0x0029A080
    // 0x00298974: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_0029A080(rdram, ctx);
        goto after_4;
    // 0x00298974: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_4:
    // 0x00298978: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0029897C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x00298980: jal         0x0029B6F0
    // 0x00298984: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osRecvMesg_recomp(rdram, ctx);
        goto after_5;
    // 0x00298984: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_5:
    // 0x00298988: jal         0x00298BE0
    // 0x0029898C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_00298BE0(rdram, ctx);
        goto after_6;
    // 0x0029898C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_6:
    // 0x00298990: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x00298994: jal         0x0029A080
    // 0x00298998: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_0029A080(rdram, ctx);
        goto after_7;
    // 0x00298998: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_7:
    // 0x0029899C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x002989A0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x002989A4: jal         0x0029B6F0
    // 0x002989A8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osRecvMesg_recomp(rdram, ctx);
        goto after_8;
    // 0x002989A8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_8:
    // 0x002989AC: sb          $s2, 0x0($s3)
    MEM_B(0X0, ctx->r19) = ctx->r18;
L_002989B0:
    // 0x002989B0: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x002989B4: addiu       $a1, $a1, 0x13E0
    ctx->r5 = ADD32(ctx->r5, 0X13E0);
    // 0x002989B8: jal         0x0029A080
    // 0x002989BC: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_0029A080(rdram, ctx);
        goto after_9;
    // 0x002989BC: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_9:
    // 0x002989C0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x002989C4: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x002989C8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x002989CC: jal         0x0029B6F0
    // 0x002989D0: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    osRecvMesg_recomp(rdram, ctx);
        goto after_10;
    // 0x002989D0: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    after_10:
    // 0x002989D4: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x002989D8: jal         0x00298C98
    // 0x002989DC: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    func_00298C98(rdram, ctx);
        goto after_11;
    // 0x002989DC: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    after_11:
    // 0x002989E0: jal         0x0029A050
    // 0x002989E4: nop

    func_0029A050(rdram, ctx);
        goto after_12;
    // 0x002989E4: nop

    after_12:
    // 0x002989E8: addu        $v0, $s0, $zero
    ctx->r2 = ADD32(ctx->r16, 0);
    // 0x002989EC: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x002989F0: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x002989F4: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x002989F8: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x002989FC: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x00298A00: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x00298A04: jr          $ra
    // 0x00298A08: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x00298A08: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_0026EE24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0026EE24: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x0026EE28: nop

    // 0x0026EE2C: bc1f        L_0026EE74
    if (!c1cs) {
        // 0x0026EE30: sw          $a1, 0x0($a0)
        MEM_W(0X0, ctx->r4) = ctx->r5;
            goto L_0026EE74;
    }
    // 0x0026EE30: sw          $a1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r5;
    // 0x0026EE34: sw          $zero, 0x4($a0)
    MEM_W(0X4, ctx->r4) = 0;
    // 0x0026EE38: jr          $ra
    // 0x0026EE3C: sw          $zero, 0x8($a0)
    MEM_W(0X8, ctx->r4) = 0;
    return;
    // 0x0026EE3C: sw          $zero, 0x8($a0)
    MEM_W(0X8, ctx->r4) = 0;
    // 0x0026EE40: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0026EE44: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0026EE48: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x0026EE4C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x0026EE50: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x0026EE54: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x0026EE58: beq         $v1, $zero, L_0026EE70
    if (ctx->r3 == 0) {
        // 0x0026EE5C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_0026EE70;
    }
    // 0x0026EE5C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0026EE60: beq         $v1, $v0, L_0026EEAC
    if (ctx->r3 == ctx->r2) {
        // 0x0026EE64: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_0026EEAC;
    }
    // 0x0026EE64: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x0026EE68: j           L_0026EF20
    // 0x0026EE6C: nop

        goto L_0026EF20;
    // 0x0026EE6C: nop

L_0026EE70:
    // 0x0026EE70: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
L_0026EE74:
    // 0x0026EE74: lwc1        $f2, -0x4F5C($at)
    ctx->f2.u32l = MEM_W(ctx->r1, -0X4F5C);
    // 0x0026EE78: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0026EE7C: lwc1        $f0, -0x7F90($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X7F90);
    // 0x0026EE80: lwc1        $f1, 0x4($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X4);
    // 0x0026EE84: div.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = DIV_S(ctx->f0.fl, ctx->f2.fl);
    // 0x0026EE88: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x0026EE8C: swc1        $f1, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f_odd[(1 - 1) * 2];
    // 0x0026EE90: lwc1        $f0, 0x14($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X14);
    // 0x0026EE94: c.le.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl <= ctx->f1.fl;
    // 0x0026EE98: nop

    // 0x0026EE9C: bc1fl       L_0026EF20
    if (!c1cs) {
        // 0x0026EEA0: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_0026EF20;
    }
    goto skip_0;
    // 0x0026EEA0: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    skip_0:
    // 0x0026EEA4: j           L_0026EF20
    // 0x0026EEA8: nop

        goto L_0026EF20;
    // 0x0026EEA8: nop

L_0026EEAC:
    // 0x0026EEAC: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x0026EEB0: lwc1        $f2, -0x4F5C($at)
    ctx->f2.u32l = MEM_W(ctx->r1, -0X4F5C);
    // 0x0026EEB4: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0026EEB8: lwc1        $f0, -0x7F8C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X7F8C);
    // 0x0026EEBC: lwc1        $f1, 0x4($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X4);
    // 0x0026EEC0: div.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = DIV_S(ctx->f0.fl, ctx->f2.fl);
    // 0x0026EEC4: sub.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl - ctx->f0.fl;
    // 0x0026EEC8: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x0026EECC: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x0026EED0: nop

    // 0x0026EED4: bc1f        L_0026EF1C
    if (!c1cs) {
        // 0x0026EED8: swc1        $f1, 0x4($s0)
        MEM_W(0X4, ctx->r16) = ctx->f_odd[(1 - 1) * 2];
            goto L_0026EF1C;
    }
    // 0x0026EED8: swc1        $f1, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f_odd[(1 - 1) * 2];
    // 0x0026EEDC: lwc1        $f0, 0x4($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X4);
    // 0x0026EEE0: add.s       $f0, $f1, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x0026EEE4: swc1        $f0, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f0.u32l;
    // 0x0026EEE8: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x0026EEEC: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0026EEF0: lwc1        $f0, -0x7F88($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X7F88);
    // 0x0026EEF4: mtc1        $v0, $f12
    ctx->f12.u32l = ctx->r2;
    // 0x0026EEF8: cvt.s.w     $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    ctx->f12.fl = CVT_S_W(ctx->f12.u32l);
    // 0x0026EEFC: mul.s       $f12, $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = MUL_S(ctx->f12.fl, ctx->f0.fl);
    // 0x0026EF00: lbu         $v0, 0x9($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X9);
    // 0x0026EF04: mtc1        $v0, $f14
    ctx->f14.u32l = ctx->r2;
    // 0x0026EF08: cvt.s.w     $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    ctx->f14.fl = CVT_S_W(ctx->f14.u32l);
    // 0x0026EF0C: mul.s       $f14, $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = MUL_S(ctx->f14.fl, ctx->f0.fl);
    // 0x0026EF10: jal         0x002119FC
    // 0x0026EF14: nop

    func_002119FC(rdram, ctx);
        goto after_0;
    // 0x0026EF14: nop

    after_0:
    // 0x0026EF18: swc1        $f0, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f0.u32l;
L_0026EF1C:
    // 0x0026EF1C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_0026EF20:
    // 0x0026EF20: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x0026EF24: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0026EF28: jr          $ra
    // 0x0026EF2C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0026EF2C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00423210(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00423210: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00423214: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00423218: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x0042321C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x00423220: lw          $a0, 0x1C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X1C);
    // 0x00423224: lw          $a2, 0x92C($a0)
    ctx->r6 = MEM_W(ctx->r4, 0X92C);
    // 0x00423228: jal         0x00253640
    // 0x0042322C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_00253640(rdram, ctx);
        goto after_0;
    // 0x0042322C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x00423230: beq         $v0, $zero, L_0042324C
    if (ctx->r2 == 0) {
        // 0x00423234: lui         $a0, 0x100
        ctx->r4 = S32(0X100 << 16);
            goto L_0042324C;
    }
    // 0x00423234: lui         $a0, 0x100
    ctx->r4 = S32(0X100 << 16);
    // 0x00423238: lw          $v0, 0xC($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC);
    // 0x0042323C: lw          $v1, 0x30($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X30);
    // 0x00423240: or          $v1, $v1, $a0
    ctx->r3 = ctx->r3 | ctx->r4;
    // 0x00423244: j           L_00423264
    // 0x00423248: sw          $v1, 0x30($v0)
    MEM_W(0X30, ctx->r2) = ctx->r3;
        goto L_00423264;
    // 0x00423248: sw          $v1, 0x30($v0)
    MEM_W(0X30, ctx->r2) = ctx->r3;
L_0042324C:
    // 0x0042324C: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    // 0x00423250: lui         $v1, 0xFEFF
    ctx->r3 = S32(0XFEFF << 16);
    // 0x00423254: lw          $v0, 0x30($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X30);
    // 0x00423258: ori         $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 | 0XFFFF;
    // 0x0042325C: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x00423260: sw          $v0, 0x30($a0)
    MEM_W(0X30, ctx->r4) = ctx->r2;
L_00423264:
    // 0x00423264: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x00423268: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0042326C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x00423270: jr          $ra
    // 0x00423274: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00423274: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0026E6D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0026E6D4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0026E6D8: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x0026E6DC: lhu         $v1, 0xA($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0XA);
    // 0x0026E6E0: lui         $v0, 0x8011
    ctx->r2 = S32(0X8011 << 16);
    // 0x0026E6E4: lw          $v0, 0x20($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X20);
    // 0x0026E6E8: bne         $v1, $v0, L_0026E748
    if (ctx->r3 != ctx->r2) {
        // 0x0026E6EC: addu        $a2, $a1, $zero
        ctx->r6 = ADD32(ctx->r5, 0);
            goto L_0026E748;
    }
    // 0x0026E6EC: addu        $a2, $a1, $zero
    ctx->r6 = ADD32(ctx->r5, 0);
    // 0x0026E6F0: beq         $a2, $zero, L_0026E74C
    if (ctx->r6 == 0) {
        // 0x0026E6F4: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_0026E74C;
    }
    // 0x0026E6F4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0026E6F8: lhu         $v1, 0x4($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X4);
    // 0x0026E6FC: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x0026E700: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x0026E704: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x0026E708: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x0026E70C: lui         $v1, 0x800F
    ctx->r3 = S32(0X800F << 16);
    // 0x0026E710: lw          $v1, 0x7158($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X7158);
    // 0x0026E714: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x0026E718: addu        $a1, $v1, $v0
    ctx->r5 = ADD32(ctx->r3, ctx->r2);
    // 0x0026E71C: lbu         $v1, 0x11($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X11);
    // 0x0026E720: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x0026E724: bne         $v1, $v0, L_0026E74C
    if (ctx->r3 != ctx->r2) {
        // 0x0026E728: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_0026E74C;
    }
    // 0x0026E728: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0026E72C: lbu         $v1, 0x12($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X12);
    // 0x0026E730: bne         $v1, $v0, L_0026E74C
    if (ctx->r3 != ctx->r2) {
        // 0x0026E734: addu        $a0, $a1, $zero
        ctx->r4 = ADD32(ctx->r5, 0);
            goto L_0026E74C;
    }
    // 0x0026E734: addu        $a0, $a1, $zero
    ctx->r4 = ADD32(ctx->r5, 0);
    // 0x0026E738: jal         0x00265F90
    // 0x0026E73C: addiu       $a1, $a0, 0x140
    ctx->r5 = ADD32(ctx->r4, 0X140);
    func_00265F90(rdram, ctx);
        goto after_0;
    // 0x0026E73C: addiu       $a1, $a0, 0x140
    ctx->r5 = ADD32(ctx->r4, 0X140);
    after_0:
    // 0x0026E740: j           L_0026E74C
    // 0x0026E744: nop

        goto L_0026E74C;
    // 0x0026E744: nop

L_0026E748:
    // 0x0026E748: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_0026E74C:
    // 0x0026E74C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x0026E750: jr          $ra
    // 0x0026E754: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0026E754: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00283CD4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00283CD4: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00283CD8: lw          $v0, 0x6CE0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X6CE0);
    // 0x00283CDC: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x00283CE0: lw          $v1, 0x6D18($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X6D18);
    // 0x00283CE4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00283CE8: beq         $v0, $v1, L_00283FEC
    if (ctx->r2 == ctx->r3) {
        // 0x00283CEC: sw          $ra, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r31;
            goto L_00283FEC;
    }
    // 0x00283CEC: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x00283CF0: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00283CF4: sw          $v1, 0x6CE0($at)
    MEM_W(0X6CE0, ctx->r1) = ctx->r3;
    // 0x00283CF8: jal         0x00283BC0
    // 0x00283CFC: nop

    func_00283BC0(rdram, ctx);
        goto after_0;
    // 0x00283CFC: nop

    after_0:
    // 0x00283D00: bne         $v0, $zero, L_00283DD4
    if (ctx->r2 != 0) {
        // 0x00283D04: nop
    
            goto L_00283DD4;
    }
    // 0x00283D04: nop

    // 0x00283D08: jal         0x00284174
    // 0x00283D0C: nop

    func_00284174(rdram, ctx);
        goto after_1;
    // 0x00283D0C: nop

    after_1:
    // 0x00283D10: beq         $v0, $zero, L_00283DCC
    if (ctx->r2 == 0) {
        // 0x00283D14: nop
    
            goto L_00283DCC;
    }
    // 0x00283D14: nop

    // 0x00283D18: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x00283D1C: lw          $v0, -0x535C($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X535C);
    // 0x00283D20: bne         $v0, $zero, L_00283D38
    if (ctx->r2 != 0) {
        // 0x00283D24: nop
    
            goto L_00283D38;
    }
    // 0x00283D24: nop

    // 0x00283D28: jal         0x00284240
    // 0x00283D2C: nop

    func_00284240(rdram, ctx);
        goto after_2;
    // 0x00283D2C: nop

    after_2:
    // 0x00283D30: beq         $v0, $zero, L_00283D4C
    if (ctx->r2 == 0) {
        // 0x00283D34: nop
    
            goto L_00283D4C;
    }
    // 0x00283D34: nop

L_00283D38:
    // 0x00283D38: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x00283D3C: lw          $v0, 0x1BB0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1BB0);
    // 0x00283D40: lwc1        $f0, 0x1C($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X1C);
    // 0x00283D44: j           L_00283DCC
    // 0x00283D48: swc1        $f0, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f0.u32l;
        goto L_00283DCC;
    // 0x00283D48: swc1        $f0, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f0.u32l;
L_00283D4C:
    // 0x00283D4C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00283D50: lwc1        $f1, 0x6D28($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X6D28);
    // 0x00283D54: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00283D58: lwc1        $f0, -0x633C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X633C);
    // 0x00283D5C: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x00283D60: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x00283D64: lw          $v0, 0x1BB0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1BB0);
    // 0x00283D68: lwc1        $f0, 0x1C($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X1C);
    // 0x00283D6C: lwc1        $f2, 0x30($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X30);
    // 0x00283D70: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x00283D74: lwc1        $f1, 0x1C($v0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r2, 0X1C);
    // 0x00283D78: swc1        $f1, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f_odd[(1 - 1) * 2];
    // 0x00283D7C: c.le.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl <= ctx->f0.fl;
    // 0x00283D80: nop

    // 0x00283D84: bc1f        L_00283D94
    if (!c1cs) {
        // 0x00283D88: swc1        $f0, 0x1C($v0)
        MEM_W(0X1C, ctx->r2) = ctx->f0.u32l;
            goto L_00283D94;
    }
    // 0x00283D88: swc1        $f0, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f0.u32l;
    // 0x00283D8C: jal         0x002838A4
    // 0x00283D90: nop

    func_002838A4(rdram, ctx);
        goto after_3;
    // 0x00283D90: nop

    after_3:
L_00283D94:
    // 0x00283D94: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x00283D98: lw          $v1, 0x1BB0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X1BB0);
    // 0x00283D9C: lwc1        $f0, 0x1C($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X1C);
    // 0x00283DA0: lwc1        $f1, 0x2C($v1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r3, 0X2C);
    // 0x00283DA4: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x00283DA8: nop

    // 0x00283DAC: bc1f        L_00283DCC
    if (!c1cs) {
        // 0x00283DB0: nop
    
            goto L_00283DCC;
    }
    // 0x00283DB0: nop

    // 0x00283DB4: lw          $v0, 0xB4($v1)
    ctx->r2 = MEM_W(ctx->r3, 0XB4);
    // 0x00283DB8: beq         $v0, $zero, L_00283DCC
    if (ctx->r2 == 0) {
        // 0x00283DBC: swc1        $f1, 0x1C($v1)
        MEM_W(0X1C, ctx->r3) = ctx->f_odd[(1 - 1) * 2];
            goto L_00283DCC;
    }
    // 0x00283DBC: swc1        $f1, 0x1C($v1)
    MEM_W(0X1C, ctx->r3) = ctx->f_odd[(1 - 1) * 2];
    // 0x00283DC0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00283DC4: sw          $v0, 0x3C($v1)
    MEM_W(0X3C, ctx->r3) = ctx->r2;
    // 0x00283DC8: sw          $zero, 0xB4($v1)
    MEM_W(0XB4, ctx->r3) = 0;
L_00283DCC:
    // 0x00283DCC: jal         0x00412798
    // 0x00283DD0: nop

    func_00412798(rdram, ctx);
        goto after_4;
    // 0x00283DD0: nop

    after_4:
L_00283DD4:
    // 0x00283DD4: jal         0x00283BC0
    // 0x00283DD8: nop

    func_00283BC0(rdram, ctx);
        goto after_5;
    // 0x00283DD8: nop

    after_5:
    // 0x00283DDC: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x00283DE0: lw          $v1, 0x1BB0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X1BB0);
    // 0x00283DE4: lw          $v0, 0x60($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X60);
    // 0x00283DE8: beq         $v0, $zero, L_00283E88
    if (ctx->r2 == 0) {
        // 0x00283DEC: nop
    
            goto L_00283E88;
    }
    // 0x00283DEC: nop

    // 0x00283DF0: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00283DF4: lwc1        $f0, 0x6D28($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6D28);
    // 0x00283DF8: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00283DFC: lwc1        $f1, -0x6338($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, -0X6338);
    // 0x00283E00: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00283E04: add.s       $f0, $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f0.fl;
    // 0x00283E08: lwc1        $f1, 0x64($v1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r3, 0X64);
    // 0x00283E0C: sub.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl - ctx->f0.fl;
    // 0x00283E10: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00283E14: lwc1        $f0, -0x6334($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X6334);
    // 0x00283E18: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x00283E1C: nop

    // 0x00283E20: bc1f        L_00283E88
    if (!c1cs) {
        // 0x00283E24: swc1        $f1, 0x64($v1)
        MEM_W(0X64, ctx->r3) = ctx->f_odd[(1 - 1) * 2];
            goto L_00283E88;
    }
    // 0x00283E24: swc1        $f1, 0x64($v1)
    MEM_W(0X64, ctx->r3) = ctx->f_odd[(1 - 1) * 2];
    // 0x00283E28: sw          $zero, 0x60($v1)
    MEM_W(0X60, ctx->r3) = 0;
    // 0x00283E2C: jal         0x00284174
    // 0x00283E30: sw          $zero, 0x64($v1)
    MEM_W(0X64, ctx->r3) = 0;
    func_00284174(rdram, ctx);
        goto after_6;
    // 0x00283E30: sw          $zero, 0x64($v1)
    MEM_W(0X64, ctx->r3) = 0;
    after_6:
    // 0x00283E34: beq         $v0, $zero, L_00283FEC
    if (ctx->r2 == 0) {
        // 0x00283E38: nop
    
            goto L_00283FEC;
    }
    // 0x00283E38: nop

    // 0x00283E3C: jal         0x00284468
    // 0x00283E40: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_00284468(rdram, ctx);
        goto after_7;
    // 0x00283E40: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_7:
    // 0x00283E44: jal         0x002844F0
    // 0x00283E48: nop

    func_002844F0(rdram, ctx);
        goto after_8;
    // 0x00283E48: nop

    after_8:
    // 0x00283E4C: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x00283E50: lw          $v0, 0x1BB0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1BB0);
    // 0x00283E54: lw          $a1, 0x0($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X0);
    // 0x00283E58: beql        $a1, $zero, L_00283E74
    if (ctx->r5 == 0) {
        // 0x00283E5C: sw          $zero, 0x0($v0)
        MEM_W(0X0, ctx->r2) = 0;
            goto L_00283E74;
    }
    goto skip_0;
    // 0x00283E5C: sw          $zero, 0x0($v0)
    MEM_W(0X0, ctx->r2) = 0;
    skip_0:
    // 0x00283E60: jal         0x002052D8
    // 0x00283E64: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_002052D8(rdram, ctx);
        goto after_9;
    // 0x00283E64: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_9:
    // 0x00283E68: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x00283E6C: lw          $v0, 0x1BB0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1BB0);
    // 0x00283E70: sw          $zero, 0x0($v0)
    MEM_W(0X0, ctx->r2) = 0;
L_00283E74:
    // 0x00283E74: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x00283E78: sw          $zero, 0x38($v0)
    MEM_W(0X38, ctx->r2) = 0;
    // 0x00283E7C: sw          $zero, 0x3C($v0)
    MEM_W(0X3C, ctx->r2) = 0;
    // 0x00283E80: j           L_00283FEC
    // 0x00283E84: sw          $zero, 0x60($v0)
    MEM_W(0X60, ctx->r2) = 0;
        goto L_00283FEC;
    // 0x00283E84: sw          $zero, 0x60($v0)
    MEM_W(0X60, ctx->r2) = 0;
L_00283E88:
    // 0x00283E88: jal         0x00283BC0
    // 0x00283E8C: nop

    func_00283BC0(rdram, ctx);
        goto after_10;
    // 0x00283E8C: nop

    after_10:
    // 0x00283E90: jal         0x00284174
    // 0x00283E94: nop

    func_00284174(rdram, ctx);
        goto after_11;
    // 0x00283E94: nop

    after_11:
    // 0x00283E98: beq         $v0, $zero, L_00283FC8
    if (ctx->r2 == 0) {
        // 0x00283E9C: nop
    
            goto L_00283FC8;
    }
    // 0x00283E9C: nop

    // 0x00283EA0: jal         0x00284240
    // 0x00283EA4: nop

    func_00284240(rdram, ctx);
        goto after_12;
    // 0x00283EA4: nop

    after_12:
    // 0x00283EA8: bne         $v0, $zero, L_00283FC8
    if (ctx->r2 != 0) {
        // 0x00283EAC: nop
    
            goto L_00283FC8;
    }
    // 0x00283EAC: nop

    // 0x00283EB0: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x00283EB4: addiu       $v1, $v1, -0x675C
    ctx->r3 = ADD32(ctx->r3, -0X675C);
    // 0x00283EB8: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x00283EBC: bne         $v0, $zero, L_00283FC8
    if (ctx->r2 != 0) {
        // 0x00283EC0: nop
    
            goto L_00283FC8;
    }
    // 0x00283EC0: nop

    // 0x00283EC4: lw          $v0, 0x1450($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X1450);
    // 0x00283EC8: bne         $v0, $zero, L_00283FC8
    if (ctx->r2 != 0) {
        // 0x00283ECC: nop
    
            goto L_00283FC8;
    }
    // 0x00283ECC: nop

    // 0x00283ED0: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x00283ED4: lw          $v0, 0x1BB0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1BB0);
    // 0x00283ED8: lwc1        $f1, 0x1C($v0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r2, 0X1C);
    // 0x00283EDC: lwc1        $f0, 0x34($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X34);
    // 0x00283EE0: c.le.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl <= ctx->f1.fl;
    // 0x00283EE4: nop

    // 0x00283EE8: bc1f        L_00283F4C
    if (!c1cs) {
        // 0x00283EEC: nop
    
            goto L_00283F4C;
    }
    // 0x00283EEC: nop

    // 0x00283EF0: lw          $v0, 0x44($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X44);
    // 0x00283EF4: bne         $v0, $zero, L_00283F4C
    if (ctx->r2 != 0) {
        // 0x00283EF8: nop
    
            goto L_00283F4C;
    }
    // 0x00283EF8: nop

    // 0x00283EFC: jal         0x00275904
    // 0x00283F00: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    func_00275904(rdram, ctx);
        goto after_13;
    // 0x00283F00: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    after_13:
    // 0x00283F04: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x00283F08: lw          $v0, 0x1BB0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1BB0);
    // 0x00283F0C: lw          $v0, 0x5C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X5C);
    // 0x00283F10: beq         $v0, $zero, L_00283F20
    if (ctx->r2 == 0) {
        // 0x00283F14: nop
    
            goto L_00283F20;
    }
    // 0x00283F14: nop

    // 0x00283F18: jal         0x00283A4C
    // 0x00283F1C: nop

    func_00283A4C(rdram, ctx);
        goto after_14;
    // 0x00283F1C: nop

    after_14:
L_00283F20:
    // 0x00283F20: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x00283F24: lw          $v0, 0x1BB0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1BB0);
    // 0x00283F28: lw          $v1, 0x10($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X10);
    // 0x00283F2C: beq         $v1, $zero, L_00283F3C
    if (ctx->r3 == 0) {
        // 0x00283F30: nop
    
            goto L_00283F3C;
    }
    // 0x00283F30: nop

    // 0x00283F34: jalr        $v1
    // 0x00283F38: sw          $zero, 0x10($v0)
    MEM_W(0X10, ctx->r2) = 0;
    LOOKUP_FUNC(ctx->r3)(rdram, ctx);
        goto after_15;
    // 0x00283F38: sw          $zero, 0x10($v0)
    MEM_W(0X10, ctx->r2) = 0;
    after_15:
L_00283F3C:
    // 0x00283F3C: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x00283F40: lw          $v1, 0x1BB0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X1BB0);
    // 0x00283F44: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00283F48: sw          $v0, 0x44($v1)
    MEM_W(0X44, ctx->r3) = ctx->r2;
L_00283F4C:
    // 0x00283F4C: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x00283F50: lw          $a1, 0x1BB0($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X1BB0);
    // 0x00283F54: lwc1        $f1, 0x1C($a1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r5, 0X1C);
    // 0x00283F58: lwc1        $f0, 0x2C($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X2C);
    // 0x00283F5C: c.le.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl <= ctx->f1.fl;
    // 0x00283F60: nop

    // 0x00283F64: bc1f        L_00283FC8
    if (!c1cs) {
        // 0x00283F68: nop
    
            goto L_00283FC8;
    }
    // 0x00283F68: nop

    // 0x00283F6C: lw          $v0, 0x48($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X48);
    // 0x00283F70: bne         $v0, $zero, L_00283FC8
    if (ctx->r2 != 0) {
        // 0x00283F74: nop
    
            goto L_00283FC8;
    }
    // 0x00283F74: nop

    // 0x00283F78: lw          $a1, 0x0($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X0);
    // 0x00283F7C: beq         $a1, $zero, L_00283F8C
    if (ctx->r5 == 0) {
        // 0x00283F80: nop
    
            goto L_00283F8C;
    }
    // 0x00283F80: nop

    // 0x00283F84: jal         0x002052D8
    // 0x00283F88: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_002052D8(rdram, ctx);
        goto after_16;
    // 0x00283F88: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_16:
L_00283F8C:
    // 0x00283F8C: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x00283F90: lw          $v0, 0x1BB0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1BB0);
    // 0x00283F94: lw          $v1, 0xC($v0)
    ctx->r3 = MEM_W(ctx->r2, 0XC);
    // 0x00283F98: sw          $zero, 0x0($v0)
    MEM_W(0X0, ctx->r2) = 0;
    // 0x00283F9C: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x00283FA0: sw          $zero, 0x38($v0)
    MEM_W(0X38, ctx->r2) = 0;
    // 0x00283FA4: sw          $zero, 0x3C($v0)
    MEM_W(0X3C, ctx->r2) = 0;
    // 0x00283FA8: beq         $v1, $zero, L_00283FB8
    if (ctx->r3 == 0) {
        // 0x00283FAC: sw          $zero, 0x60($v0)
        MEM_W(0X60, ctx->r2) = 0;
            goto L_00283FB8;
    }
    // 0x00283FAC: sw          $zero, 0x60($v0)
    MEM_W(0X60, ctx->r2) = 0;
    // 0x00283FB0: jalr        $v1
    // 0x00283FB4: sw          $zero, 0xC($v0)
    MEM_W(0XC, ctx->r2) = 0;
    LOOKUP_FUNC(ctx->r3)(rdram, ctx);
        goto after_17;
    // 0x00283FB4: sw          $zero, 0xC($v0)
    MEM_W(0XC, ctx->r2) = 0;
    after_17:
L_00283FB8:
    // 0x00283FB8: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x00283FBC: lw          $v1, 0x1BB0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X1BB0);
    // 0x00283FC0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00283FC4: sw          $v0, 0x48($v1)
    MEM_W(0X48, ctx->r3) = ctx->r2;
L_00283FC8:
    // 0x00283FC8: jal         0x00283BC0
    // 0x00283FCC: nop

    func_00283BC0(rdram, ctx);
        goto after_18;
    // 0x00283FCC: nop

    after_18:
    // 0x00283FD0: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x00283FD4: lw          $v0, 0x1BB0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1BB0);
    // 0x00283FD8: lw          $v0, 0x38($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X38);
    // 0x00283FDC: beq         $v0, $zero, L_00283FEC
    if (ctx->r2 == 0) {
        // 0x00283FE0: nop
    
            goto L_00283FEC;
    }
    // 0x00283FE0: nop

    // 0x00283FE4: jal         0x00206068
    // 0x00283FE8: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    func_00206068(rdram, ctx);
        goto after_19;
    // 0x00283FE8: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    after_19:
L_00283FEC:
    // 0x00283FEC: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x00283FF0: jr          $ra
    // 0x00283FF4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00283FF4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00266490(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00266490: lui         $v0, 0x26
    ctx->r2 = S32(0X26 << 16);
    // 0x00266494: addiu       $v0, $v0, 0x6644
    ctx->r2 = ADD32(ctx->r2, 0X6644);
    // 0x00266498: jr          $ra
    // 0x0026649C: sw          $v0, 0xF4($a1)
    MEM_W(0XF4, ctx->r5) = ctx->r2;
    return;
    // 0x0026649C: sw          $v0, 0xF4($a1)
    MEM_W(0XF4, ctx->r5) = ctx->r2;
;}
RECOMP_FUNC void func_00271514(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00271514: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00271518: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0027151C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x00271520: jal         0x0029DFF0
    // 0x00271524: addiu       $s0, $a0, 0x110
    ctx->r16 = ADD32(ctx->r4, 0X110);
    func_0029DFF0(rdram, ctx);
        goto after_0;
    // 0x00271524: addiu       $s0, $a0, 0x110
    ctx->r16 = ADD32(ctx->r4, 0X110);
    after_0:
    // 0x00271528: lw          $v1, 0x1C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X1C);
    // 0x0027152C: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x00271530: beq         $v1, $zero, L_00271558
    if (ctx->r3 == 0) {
        // 0x00271534: sw          $v1, 0x1C($s0)
        MEM_W(0X1C, ctx->r16) = ctx->r3;
            goto L_00271558;
    }
    // 0x00271534: sw          $v1, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r3;
    // 0x00271538: jal         0x0029E010
    // 0x0027153C: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    func_0029E010(rdram, ctx);
        goto after_1;
    // 0x0027153C: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    after_1:
    // 0x00271540: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00271544: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x00271548: jal         0x0029B820
    // 0x0027154C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osSendMesg_recomp(rdram, ctx);
        goto after_2;
    // 0x0027154C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_2:
    // 0x00271550: j           L_00271560
    // 0x00271554: nop

        goto L_00271560;
    // 0x00271554: nop

L_00271558:
    // 0x00271558: jal         0x0029E010
    // 0x0027155C: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    func_0029E010(rdram, ctx);
        goto after_3;
    // 0x0027155C: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    after_3:
L_00271560:
    // 0x00271560: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x00271564: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00271568: jr          $ra
    // 0x0027156C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0027156C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00452A7C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00452A7C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00452A80: addu        $a0, $a2, $zero
    ctx->r4 = ADD32(ctx->r6, 0);
    // 0x00452A84: lui         $a2, 0x44
    ctx->r6 = S32(0X44 << 16);
    // 0x00452A88: addiu       $a2, $a2, -0x5EB0
    ctx->r6 = ADD32(ctx->r6, -0X5EB0);
    // 0x00452A8C: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x00452A90: jal         0x00416894
    // 0x00452A94: nop

    func_00416894(rdram, ctx);
        goto after_0;
    // 0x00452A94: nop

    after_0:
    // 0x00452A98: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x00452A9C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00452AA0: jr          $ra
    // 0x00452AA4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00452AA4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00236C64(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00236C64: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x00236C68: sw          $s2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r18;
    // 0x00236C6C: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x00236C70: sw          $s1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r17;
    // 0x00236C74: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x00236C78: sw          $ra, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r31;
    // 0x00236C7C: sw          $s0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r16;
    // 0x00236C80: lw          $s0, 0x1C($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X1C);
    // 0x00236C84: bne         $s0, $a2, L_00236CF8
    if (ctx->r16 != ctx->r6) {
        // 0x00236C88: addu        $a1, $a3, $zero
        ctx->r5 = ADD32(ctx->r7, 0);
            goto L_00236CF8;
    }
    // 0x00236C88: addu        $a1, $a3, $zero
    ctx->r5 = ADD32(ctx->r7, 0);
    // 0x00236C8C: lwc1        $f1, 0x24($s1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r17, 0X24);
    // 0x00236C90: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x00236C94: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x00236C98: nop

    // 0x00236C9C: bc1f        L_00236CF8
    if (!c1cs) {
        // 0x00236CA0: nop
    
            goto L_00236CF8;
    }
    // 0x00236CA0: nop

    // 0x00236CA4: jal         0x0020D908
    // 0x00236CA8: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    func_0020D908(rdram, ctx);
        goto after_0;
    // 0x00236CA8: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    after_0:
    // 0x00236CAC: lw          $v0, 0xF8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XF8);
    // 0x00236CB0: lw          $v0, 0x14($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X14);
    // 0x00236CB4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00236CB8: lwc1        $f0, 0x653C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X653C);
    // 0x00236CBC: beq         $v0, $zero, L_00236CCC
    if (ctx->r2 == 0) {
        // 0x00236CC0: nop
    
            goto L_00236CCC;
    }
    // 0x00236CC0: nop

    // 0x00236CC4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00236CC8: lwc1        $f0, 0x6540($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6540);
L_00236CCC:
    // 0x00236CCC: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x00236CD0: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x00236CD4: addu        $a2, $a1, $zero
    ctx->r6 = ADD32(ctx->r5, 0);
    // 0x00236CD8: jal         0x0021034C
    // 0x00236CDC: addu        $a3, $a1, $zero
    ctx->r7 = ADD32(ctx->r5, 0);
    func_0021034C(rdram, ctx);
        goto after_1;
    // 0x00236CDC: addu        $a3, $a1, $zero
    ctx->r7 = ADD32(ctx->r5, 0);
    after_1:
    // 0x00236CE0: jal         0x0020F7EC
    // 0x00236CE4: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    func_0020F7EC(rdram, ctx);
        goto after_2;
    // 0x00236CE4: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    after_2:
    // 0x00236CE8: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x00236CEC: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x00236CF0: jal         0x002333C0
    // 0x00236CF4: addiu       $a2, $sp, 0x10
    ctx->r6 = ADD32(ctx->r29, 0X10);
    func_002333C0(rdram, ctx);
        goto after_3;
    // 0x00236CF4: addiu       $a2, $sp, 0x10
    ctx->r6 = ADD32(ctx->r29, 0X10);
    after_3:
L_00236CF8:
    // 0x00236CF8: lw          $ra, 0x5C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X5C);
    // 0x00236CFC: lw          $s2, 0x58($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X58);
    // 0x00236D00: lw          $s1, 0x54($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X54);
    // 0x00236D04: lw          $s0, 0x50($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X50);
    // 0x00236D08: jr          $ra
    // 0x00236D0C: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    return;
    // 0x00236D0C: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
;}
RECOMP_FUNC void func_0041BD3C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041BD3C: lw          $v1, 0x1C($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X1C);
    // 0x0041BD40: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x0041BD44: addiu       $v0, $v0, -0x54E8
    ctx->r2 = ADD32(ctx->r2, -0X54E8);
    // 0x0041BD48: beq         $v1, $zero, L_0041BD5C
    if (ctx->r3 == 0) {
        // 0x0041BD4C: nop
    
            goto L_0041BD5C;
    }
    // 0x0041BD4C: nop

    // 0x0041BD50: lw          $v1, 0x518($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X518);
    // 0x0041BD54: bnel        $v1, $zero, L_0041BD5C
    if (ctx->r3 != 0) {
        // 0x0041BD58: addu        $v0, $v1, $zero
        ctx->r2 = ADD32(ctx->r3, 0);
            goto L_0041BD5C;
    }
    goto skip_0;
    // 0x0041BD58: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
    skip_0:
L_0041BD5C:
    // 0x0041BD5C: jr          $ra
    // 0x0041BD60: nop

    return;
    // 0x0041BD60: nop

;}
RECOMP_FUNC void func_0027BD10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0027BD10: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0027BD14: sw          $v0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r2;
    // 0x0027BD18: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x0027BD1C: sw          $zero, 0x0($a0)
    MEM_W(0X0, ctx->r4) = 0;
    // 0x0027BD20: sh          $zero, 0xC($a0)
    MEM_H(0XC, ctx->r4) = 0;
    // 0x0027BD24: sb          $zero, 0xE($a0)
    MEM_B(0XE, ctx->r4) = 0;
    // 0x0027BD28: jr          $ra
    // 0x0027BD2C: sb          $v0, 0x12($a0)
    MEM_B(0X12, ctx->r4) = ctx->r2;
    return;
    // 0x0027BD2C: sb          $v0, 0x12($a0)
    MEM_B(0X12, ctx->r4) = ctx->r2;
;}
RECOMP_FUNC void func_00245C5C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00245C5C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x00245C60: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x00245C64: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x00245C68: sdc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X20, ctx->r29);
    // 0x00245C6C: mtc1        $a3, $f20
    ctx->f20.u32l = ctx->r7;
    // 0x00245C70: addu        $v0, $a2, $zero
    ctx->r2 = ADD32(ctx->r6, 0);
    // 0x00245C74: beq         $v0, $zero, L_00245D3C
    if (ctx->r2 == 0) {
        // 0x00245C78: sw          $ra, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r31;
            goto L_00245D3C;
    }
    // 0x00245C78: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x00245C7C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00245C80: lwc1        $f0, 0x696C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X696C);
    // 0x00245C84: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x00245C88: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    // 0x00245C8C: lw          $a1, 0x4($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X4);
    // 0x00245C90: lw          $a2, 0x8($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X8);
    // 0x00245C94: lw          $a3, 0xC($v0)
    ctx->r7 = MEM_W(ctx->r2, 0XC);
    // 0x00245C98: jal         0x00244E84
    // 0x00245C9C: nop

    func_00244E84(rdram, ctx);
        goto after_0;
    // 0x00245C9C: nop

    after_0:
    // 0x00245CA0: mov.s       $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    ctx->f1.fl = ctx->f0.fl;
    // 0x00245CA4: c.lt.s      $f20, $f1
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f20.fl < ctx->f1.fl;
    // 0x00245CA8: nop

    // 0x00245CAC: bc1f        L_00245CBC
    if (!c1cs) {
        // 0x00245CB0: mov.s       $f3, $f1
        CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 1);
    ctx->f3.fl = ctx->f1.fl;
            goto L_00245CBC;
    }
    // 0x00245CB0: mov.s       $f3, $f1
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 1);
    ctx->f3.fl = ctx->f1.fl;
    // 0x00245CB4: j           L_00245CD0
    // 0x00245CB8: mov.s       $f1, $f20
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 20);
    ctx->f1.fl = ctx->f20.fl;
        goto L_00245CD0;
    // 0x00245CB8: mov.s       $f1, $f20
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 20);
    ctx->f1.fl = ctx->f20.fl;
L_00245CBC:
    // 0x00245CBC: neg.s       $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); 
    ctx->f0.fl = -ctx->f20.fl;
    // 0x00245CC0: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x00245CC4: nop

    // 0x00245CC8: bc1tl       L_00245CD0
    if (c1cs) {
        // 0x00245CCC: mov.s       $f1, $f0
        CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    ctx->f1.fl = ctx->f0.fl;
            goto L_00245CD0;
    }
    goto skip_0;
    // 0x00245CCC: mov.s       $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    ctx->f1.fl = ctx->f0.fl;
    skip_0:
L_00245CD0:
    // 0x00245CD0: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00245CD4: lwc1        $f0, 0x6D28($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6D28);
    // 0x00245CD8: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x00245CDC: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x00245CE0: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x00245CE4: nop

    // 0x00245CE8: bc1f        L_00245CF4
    if (!c1cs) {
        // 0x00245CEC: mov.s       $f2, $f1
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    ctx->f2.fl = ctx->f1.fl;
            goto L_00245CF4;
    }
    // 0x00245CEC: mov.s       $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    ctx->f2.fl = ctx->f1.fl;
    // 0x00245CF0: neg.s       $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.fl); 
    ctx->f2.fl = -ctx->f1.fl;
L_00245CF4:
    // 0x00245CF4: c.lt.s      $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f3.fl < ctx->f0.fl;
    // 0x00245CF8: nop

    // 0x00245CFC: bc1f        L_00245D20
    if (!c1cs) {
        // 0x00245D00: nop
    
            goto L_00245D20;
    }
    // 0x00245D00: nop

    // 0x00245D04: neg.s       $f0, $f3
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f3.fl); 
    ctx->f0.fl = -ctx->f3.fl;
    // 0x00245D08: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x00245D0C: nop

    // 0x00245D10: bc1tl       L_00245D30
    if (c1cs) {
        // 0x00245D14: mov.s       $f1, $f3
        CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 3);
    ctx->f1.fl = ctx->f3.fl;
            goto L_00245D30;
    }
    goto skip_1;
    // 0x00245D14: mov.s       $f1, $f3
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 3);
    ctx->f1.fl = ctx->f3.fl;
    skip_1:
    // 0x00245D18: j           L_00245D30
    // 0x00245D1C: nop

        goto L_00245D30;
    // 0x00245D1C: nop

L_00245D20:
    // 0x00245D20: c.lt.s      $f3, $f2
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f3.fl < ctx->f2.fl;
    // 0x00245D24: nop

    // 0x00245D28: bc1tl       L_00245D30
    if (c1cs) {
        // 0x00245D2C: mov.s       $f1, $f3
        CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 3);
    ctx->f1.fl = ctx->f3.fl;
            goto L_00245D30;
    }
    goto skip_2;
    // 0x00245D2C: mov.s       $f1, $f3
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 3);
    ctx->f1.fl = ctx->f3.fl;
    skip_2:
L_00245D30:
    // 0x00245D30: mfc1        $a1, $f1
    ctx->r5 = (int32_t)ctx->f_odd[(1 - 1) * 2];
    // 0x00245D34: jal         0x00246440
    // 0x00245D38: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00246440(rdram, ctx);
        goto after_1;
    // 0x00245D38: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
L_00245D3C:
    // 0x00245D3C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x00245D40: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x00245D44: ldc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X20);
    // 0x00245D48: jr          $ra
    // 0x00245D4C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x00245D4C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_002837B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002837B0: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x002837B4: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x002837B8: lwc1        $f1, 0x210($v0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r2, 0X210);
    // 0x002837BC: lwc1        $f0, 0x210($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X210);
    // 0x002837C0: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x002837C4: nop

    // 0x002837C8: bc1f        L_002837D4
    if (!c1cs) {
        // 0x002837CC: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_002837D4;
    }
    // 0x002837CC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x002837D0: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_002837D4:
    // 0x002837D4: jr          $ra
    // 0x002837D8: nop

    return;
    // 0x002837D8: nop

;}
RECOMP_FUNC void func_0045C964(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0045C964: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0045C968: sw          $zero, 0x9B0($at)
    MEM_W(0X9B0, ctx->r1) = 0;
    // 0x0045C96C: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0045C970: sw          $zero, 0x9A4($at)
    MEM_W(0X9A4, ctx->r1) = 0;
    // 0x0045C974: jr          $ra
    // 0x0045C978: nop

    return;
    // 0x0045C978: nop

;}
RECOMP_FUNC void func_002815E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002815E0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x002815E4: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x002815E8: jal         0x0027FC2C
    // 0x002815EC: nop

    func_0027FC2C(rdram, ctx);
        goto after_0;
    // 0x002815EC: nop

    after_0:
    // 0x002815F0: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x002815F4: beq         $v1, $zero, L_00281600
    if (ctx->r3 == 0) {
        // 0x002815F8: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_00281600;
    }
    // 0x002815F8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x002815FC: sw          $v0, 0x20($v1)
    MEM_W(0X20, ctx->r3) = ctx->r2;
L_00281600:
    // 0x00281600: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x00281604: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
    // 0x00281608: jr          $ra
    // 0x0028160C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0028160C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0021F770(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0021F770: lw          $v0, 0x14($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X14);
    // 0x0021F774: lw          $a2, 0x0($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X0);
    // 0x0021F778: sltiu       $v0, $a2, 0xD
    ctx->r2 = ctx->r6 < 0XD ? 1 : 0;
    // 0x0021F77C: bne         $v0, $zero, L_0021F79C
    if (ctx->r2 != 0) {
        // 0x0021F780: addiu       $v0, $zero, 0xB
        ctx->r2 = ADD32(0, 0XB);
            goto L_0021F79C;
    }
    // 0x0021F780: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
L_0021F784:
    // 0x0021F784: jr          $ra
    // 0x0021F788: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x0021F788: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_0021F78C:
    // 0x0021F78C: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0021F790: addiu       $v0, $v0, -0x166C
    ctx->r2 = ADD32(ctx->r2, -0X166C);
    // 0x0021F794: jr          $ra
    // 0x0021F798: nop

    return;
    // 0x0021F798: nop

L_0021F79C:
    // 0x0021F79C: bne         $a2, $v0, L_0021F7E0
    if (ctx->r6 != ctx->r2) {
        // 0x0021F7A0: sll         $v0, $a2, 2
        ctx->r2 = S32(ctx->r6 << 2);
            goto L_0021F7E0;
    }
    // 0x0021F7A0: sll         $v0, $a2, 2
    ctx->r2 = S32(ctx->r6 << 2);
    // 0x0021F7A4: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x0021F7A8: addiu       $v0, $v0, -0x6790
    ctx->r2 = ADD32(ctx->r2, -0X6790);
    // 0x0021F7AC: lw          $v1, 0x8($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X8);
    // 0x0021F7B0: blez        $v1, L_0021F7DC
    if (SIGNED(ctx->r3) <= 0) {
        // 0x0021F7B4: addu        $a1, $zero, $zero
        ctx->r5 = ADD32(0, 0);
            goto L_0021F7DC;
    }
    // 0x0021F7B4: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x0021F7B8: addu        $a3, $v1, $zero
    ctx->r7 = ADD32(ctx->r3, 0);
    // 0x0021F7BC: lw          $v1, 0x4($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X4);
L_0021F7C0:
    // 0x0021F7C0: beq         $v1, $a0, L_0021F784
    if (ctx->r3 == ctx->r4) {
        // 0x0021F7C4: addiu       $v0, $v1, 0x288
        ctx->r2 = ADD32(ctx->r3, 0X288);
            goto L_0021F784;
    }
    // 0x0021F7C4: addiu       $v0, $v1, 0x288
    ctx->r2 = ADD32(ctx->r3, 0X288);
    // 0x0021F7C8: beq         $v0, $a0, L_0021F78C
    if (ctx->r2 == ctx->r4) {
        // 0x0021F7CC: addiu       $a1, $a1, 0x1
        ctx->r5 = ADD32(ctx->r5, 0X1);
            goto L_0021F78C;
    }
    // 0x0021F7CC: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x0021F7D0: slt         $v0, $a1, $a3
    ctx->r2 = SIGNED(ctx->r5) < SIGNED(ctx->r7) ? 1 : 0;
    // 0x0021F7D4: bne         $v0, $zero, L_0021F7C0
    if (ctx->r2 != 0) {
        // 0x0021F7D8: addiu       $v1, $v1, 0x1328
        ctx->r3 = ADD32(ctx->r3, 0X1328);
            goto L_0021F7C0;
    }
    // 0x0021F7D8: addiu       $v1, $v1, 0x1328
    ctx->r3 = ADD32(ctx->r3, 0X1328);
L_0021F7DC:
    // 0x0021F7DC: sll         $v0, $a2, 2
    ctx->r2 = S32(ctx->r6 << 2);
L_0021F7E0:
    // 0x0021F7E0: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0021F7E4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x0021F7E8: lw          $v0, -0x34A0($at)
    ctx->r2 = MEM_W(ctx->r1, -0X34A0);
    // 0x0021F7EC: jr          $ra
    // 0x0021F7F0: nop

    return;
    // 0x0021F7F0: nop

;}
RECOMP_FUNC void func_0040340C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0040340C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00403410: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x00403414: lw          $a0, 0x220($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X220);
    // 0x00403418: addu        $a2, $a1, $zero
    ctx->r6 = ADD32(ctx->r5, 0);
    // 0x0040341C: jal         0x002666B0
    // 0x00403420: addiu       $a1, $a0, 0x140
    ctx->r5 = ADD32(ctx->r4, 0X140);
    func_002666B0(rdram, ctx);
        goto after_0;
    // 0x00403420: addiu       $a1, $a0, 0x140
    ctx->r5 = ADD32(ctx->r4, 0X140);
    after_0:
    // 0x00403424: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x00403428: jr          $ra
    // 0x0040342C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0040342C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00236324(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00236324: lwc1        $f0, 0x24($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X24);
    // 0x00236328: mtc1        $zero, $f1
    ctx->f_odd[(1 - 1) * 2] = 0;
    // 0x0023632C: c.eq.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl == ctx->f1.fl;
    // 0x00236330: nop

    // 0x00236334: bc1t        L_00236360
    if (c1cs) {
        // 0x00236338: nop
    
            goto L_00236360;
    }
    // 0x00236338: nop

    // 0x0023633C: lwc1        $f0, 0x34($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X34);
    // 0x00236340: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00236344: addiu       $v0, $v0, -0x474C
    ctx->r2 = ADD32(ctx->r2, -0X474C);
    // 0x00236348: swc1        $f0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f0.u32l;
    // 0x0023634C: lwc1        $f0, 0x38($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X38);
    // 0x00236350: swc1        $f0, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f0.u32l;
    // 0x00236354: lwc1        $f0, 0x3C($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X3C);
    // 0x00236358: j           L_00236374
    // 0x0023635C: swc1        $f0, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f0.u32l;
        goto L_00236374;
    // 0x0023635C: swc1        $f0, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f0.u32l;
L_00236360:
    // 0x00236360: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00236364: addiu       $v0, $v0, -0x474C
    ctx->r2 = ADD32(ctx->r2, -0X474C);
    // 0x00236368: swc1        $f1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f_odd[(1 - 1) * 2];
    // 0x0023636C: swc1        $f1, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f_odd[(1 - 1) * 2];
    // 0x00236370: swc1        $f1, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f_odd[(1 - 1) * 2];
L_00236374:
    // 0x00236374: lwc1        $f0, 0x24($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X24);
    // 0x00236378: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0023637C: addiu       $v0, $v0, -0x4740
    ctx->r2 = ADD32(ctx->r2, -0X4740);
    // 0x00236380: swc1        $f0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f0.u32l;
    // 0x00236384: lwc1        $f0, 0x14($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X14);
    // 0x00236388: jr          $ra
    // 0x0023638C: swc1        $f0, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f0.u32l;
    return;
    // 0x0023638C: swc1        $f0, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f0.u32l;
;}
RECOMP_FUNC void func_00425710(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
;}
RECOMP_FUNC void func_00422764(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00422764: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00422768: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x0042276C: lw          $a1, 0xC($a0)
    ctx->r5 = MEM_W(ctx->r4, 0XC);
    // 0x00422770: lui         $v1, 0xFBFF
    ctx->r3 = S32(0XFBFF << 16);
    // 0x00422774: lw          $v0, 0x120($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X120);
    // 0x00422778: ori         $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 | 0XFFFF;
    // 0x0042277C: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x00422780: sw          $v0, 0x120($a1)
    MEM_W(0X120, ctx->r5) = ctx->r2;
    // 0x00422784: lw          $a0, 0xC($a0)
    ctx->r4 = MEM_W(ctx->r4, 0XC);
    // 0x00422788: lw          $v0, 0x120($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X120);
    // 0x0042278C: addiu       $v1, $zero, 0x8
    ctx->r3 = ADD32(0, 0X8);
    // 0x00422790: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x00422794: sw          $v1, 0x9C0($at)
    MEM_W(0X9C0, ctx->r1) = ctx->r3;
    // 0x00422798: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x0042279C: jal         0x00285CC4
    // 0x004227A0: sw          $v0, 0x120($a0)
    MEM_W(0X120, ctx->r4) = ctx->r2;
    func_00285CC4(rdram, ctx);
        goto after_0;
    // 0x004227A0: sw          $v0, 0x120($a0)
    MEM_W(0X120, ctx->r4) = ctx->r2;
    after_0:
    // 0x004227A4: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x004227A8: jr          $ra
    // 0x004227AC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x004227AC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00452494(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00452494: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00452498: addu        $a0, $a2, $zero
    ctx->r4 = ADD32(ctx->r6, 0);
    // 0x0045249C: lui         $a2, 0x44
    ctx->r6 = S32(0X44 << 16);
    // 0x004524A0: addiu       $a2, $a2, -0x716C
    ctx->r6 = ADD32(ctx->r6, -0X716C);
    // 0x004524A4: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x004524A8: jal         0x00416894
    // 0x004524AC: nop

    func_00416894(rdram, ctx);
        goto after_0;
    // 0x004524AC: nop

    after_0:
    // 0x004524B0: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x004524B4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x004524B8: jr          $ra
    // 0x004524BC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x004524BC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_002633D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002633D8: lw          $a2, 0x14($a0)
    ctx->r6 = MEM_W(ctx->r4, 0X14);
    // 0x002633DC: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x002633E0: addiu       $v0, $v0, 0x2008
    ctx->r2 = ADD32(ctx->r2, 0X2008);
    // 0x002633E4: sw          $v0, 0x2C($a1)
    MEM_W(0X2C, ctx->r5) = ctx->r2;
    // 0x002633E8: lui         $v0, 0x26
    ctx->r2 = S32(0X26 << 16);
    // 0x002633EC: addiu       $v0, $v0, 0x352C
    ctx->r2 = ADD32(ctx->r2, 0X352C);
    // 0x002633F0: sw          $v0, 0xF0($a1)
    MEM_W(0XF0, ctx->r5) = ctx->r2;
    // 0x002633F4: lhu         $v1, 0xB8($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0XB8);
    // 0x002633F8: addiu       $v0, $zero, 0x644
    ctx->r2 = ADD32(0, 0X644);
    // 0x002633FC: beq         $v1, $v0, L_00263414
    if (ctx->r3 == ctx->r2) {
        // 0x00263400: nop
    
            goto L_00263414;
    }
    // 0x00263400: nop

    // 0x00263404: lw          $v0, 0x14($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X14);
    // 0x00263408: andi        $v0, $v0, 0x8
    ctx->r2 = ctx->r2 & 0X8;
    // 0x0026340C: beq         $v0, $zero, L_00263424
    if (ctx->r2 == 0) {
        // 0x00263410: nop
    
            goto L_00263424;
    }
    // 0x00263410: nop

L_00263414:
    // 0x00263414: lw          $v0, 0xD4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XD4);
    // 0x00263418: addiu       $v1, $zero, -0x2001
    ctx->r3 = ADD32(0, -0X2001);
    // 0x0026341C: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x00263420: sw          $v0, 0xD4($a0)
    MEM_W(0XD4, ctx->r4) = ctx->r2;
L_00263424:
    // 0x00263424: jr          $ra
    // 0x00263428: nop

    return;
    // 0x00263428: nop

;}
RECOMP_FUNC void func_0025A14C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0025A14C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0025A150: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x0025A154: lw          $v0, 0x14($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X14);
    // 0x0025A158: lhu         $a3, 0x7A($v0)
    ctx->r7 = MEM_HU(ctx->r2, 0X7A);
    // 0x0025A15C: lui         $a2, 0x800B
    ctx->r6 = S32(0X800B << 16);
    // 0x0025A160: addiu       $a2, $a2, -0x550
    ctx->r6 = ADD32(ctx->r6, -0X550);
    // 0x0025A164: jal         0x00245A98
    // 0x0025A168: nop

    func_00245A98(rdram, ctx);
        goto after_0;
    // 0x0025A168: nop

    after_0:
    // 0x0025A16C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x0025A170: jr          $ra
    // 0x0025A174: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0025A174: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0027BAEC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0027BAEC: lui         $v1, 0x800F
    ctx->r3 = S32(0X800F << 16);
    // 0x0027BAF0: lw          $v1, 0x56A8($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X56A8);
    // 0x0027BAF4: sltiu       $v0, $v1, 0x6
    ctx->r2 = ctx->r3 < 0X6 ? 1 : 0;
    // 0x0027BAF8: beq         $v0, $zero, L_0027BB64
    if (ctx->r2 == 0) {
        // 0x0027BAFC: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_0027BB64;
    }
    // 0x0027BAFC: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x0027BB00: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0027BB04: addu        $at, $at, $v0
    gpr jr_addend_0027BB0C = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x0027BB08: lw          $v0, -0x7BA0($at)
    ctx->r2 = ADD32(ctx->r1, -0X7BA0);
    // 0x0027BB0C: jr          $v0
    // 0x0027BB10: nop

    switch (jr_addend_0027BB0C >> 2) {
        case 0: goto L_0027BB44; break;
        case 1: goto L_0027BB34; break;
        case 2: goto L_0027BB64; break;
        case 3: goto L_0027BB54; break;
        case 4: goto L_0027BB24; break;
        case 5: goto L_0027BB14; break;
        default: switch_error(__func__, 0x0027BB0C, 0x800A8460);
    }
    // 0x0027BB10: nop

L_0027BB14:
    // 0x0027BB14: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0027BB18: lwc1        $f0, -0x7B88($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X7B88);
    // 0x0027BB1C: jr          $ra
    // 0x0027BB20: nop

    return;
    // 0x0027BB20: nop

L_0027BB24:
    // 0x0027BB24: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0027BB28: lwc1        $f0, -0x7B84($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X7B84);
    // 0x0027BB2C: jr          $ra
    // 0x0027BB30: nop

    return;
    // 0x0027BB30: nop

L_0027BB34:
    // 0x0027BB34: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0027BB38: lwc1        $f0, -0x7B80($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X7B80);
    // 0x0027BB3C: jr          $ra
    // 0x0027BB40: nop

    return;
    // 0x0027BB40: nop

L_0027BB44:
    // 0x0027BB44: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0027BB48: lwc1        $f0, -0x7B7C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X7B7C);
    // 0x0027BB4C: jr          $ra
    // 0x0027BB50: nop

    return;
    // 0x0027BB50: nop

L_0027BB54:
    // 0x0027BB54: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0027BB58: lwc1        $f0, -0x7B78($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X7B78);
    // 0x0027BB5C: jr          $ra
    // 0x0027BB60: nop

    return;
    // 0x0027BB60: nop

L_0027BB64:
    // 0x0027BB64: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0027BB68: lwc1        $f0, -0x7B74($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X7B74);
    // 0x0027BB6C: jr          $ra
    // 0x0027BB70: nop

    return;
    // 0x0027BB70: nop

;}
RECOMP_FUNC void func_0026C888(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0026C888: mtc1        $a1, $f0
    ctx->f0.u32l = ctx->r5;
    // 0x0026C88C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0026C890: beq         $a0, $zero, L_0026C8A4
    if (ctx->r4 == 0) {
        // 0x0026C894: sw          $ra, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r31;
            goto L_0026C8A4;
    }
    // 0x0026C894: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x0026C898: lhu         $a2, 0x0($a0)
    ctx->r6 = MEM_HU(ctx->r4, 0X0);
    // 0x0026C89C: jal         0x0026CA3C
    // 0x0026C8A0: nop

    func_0026CA3C(rdram, ctx);
        goto after_0;
    // 0x0026C8A0: nop

    after_0:
L_0026C8A4:
    // 0x0026C8A4: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x0026C8A8: jr          $ra
    // 0x0026C8AC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0026C8AC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0026578C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0026578C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00265790: addu        $v0, $a0, $zero
    ctx->r2 = ADD32(ctx->r4, 0);
    // 0x00265794: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x00265798: addiu       $a0, $a0, 0x7078
    ctx->r4 = ADD32(ctx->r4, 0X7078);
    // 0x0026579C: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x002657A0: lhu         $a1, 0xA($v0)
    ctx->r5 = MEM_HU(ctx->r2, 0XA);
    // 0x002657A4: lhu         $a2, 0x4($v0)
    ctx->r6 = MEM_HU(ctx->r2, 0X4);
    // 0x002657A8: jal         0x002245BC
    // 0x002657AC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_002245BC(rdram, ctx);
        goto after_0;
    // 0x002657AC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_0:
    // 0x002657B0: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x002657B4: jr          $ra
    // 0x002657B8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x002657B8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00419F48(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00419F48: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x00419F4C: lbu         $v0, -0x5513($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X5513);
    // 0x00419F50: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00419F54: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00419F58: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x00419F5C: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x00419F60: addiu       $a2, $v0, -0x80
    ctx->r6 = ADD32(ctx->r2, -0X80);
    // 0x00419F64: bgez        $a2, L_00419F70
    if (SIGNED(ctx->r6) >= 0) {
        // 0x00419F68: sw          $s0, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r16;
            goto L_00419F70;
    }
    // 0x00419F68: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00419F6C: addiu       $a2, $v0, -0x79
    ctx->r6 = ADD32(ctx->r2, -0X79);
L_00419F70:
    // 0x00419F70: sra         $s0, $a2, 3
    ctx->r16 = S32(SIGNED(ctx->r6) >> 3);
    // 0x00419F74: bne         $s0, $zero, L_00419F8C
    if (ctx->r16 != 0) {
        // 0x00419F78: addiu       $v0, $zero, 0xF
        ctx->r2 = ADD32(0, 0XF);
            goto L_00419F8C;
    }
    // 0x00419F78: addiu       $v0, $zero, 0xF
    ctx->r2 = ADD32(0, 0XF);
    // 0x00419F7C: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00419F80: addiu       $v0, $v0, 0x6570
    ctx->r2 = ADD32(ctx->r2, 0X6570);
    // 0x00419F84: j           L_0041A010
    // 0x00419F88: sw          $v0, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r2;
        goto L_0041A010;
    // 0x00419F88: sw          $v0, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r2;
L_00419F8C:
    // 0x00419F8C: bne         $s0, $v0, L_00419FA4
    if (ctx->r16 != ctx->r2) {
        // 0x00419F90: addiu       $v0, $zero, -0x10
        ctx->r2 = ADD32(0, -0X10);
            goto L_00419FA4;
    }
    // 0x00419F90: addiu       $v0, $zero, -0x10
    ctx->r2 = ADD32(0, -0X10);
    // 0x00419F94: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00419F98: addiu       $v0, $v0, 0x6558
    ctx->r2 = ADD32(ctx->r2, 0X6558);
    // 0x00419F9C: j           L_0041A010
    // 0x00419FA0: sw          $v0, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r2;
        goto L_0041A010;
    // 0x00419FA0: sw          $v0, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r2;
L_00419FA4:
    // 0x00419FA4: bne         $s0, $v0, L_00419FBC
    if (ctx->r16 != ctx->r2) {
        // 0x00419FA8: nop
    
            goto L_00419FBC;
    }
    // 0x00419FA8: nop

    // 0x00419FAC: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00419FB0: addiu       $v0, $v0, 0x6540
    ctx->r2 = ADD32(ctx->r2, 0X6540);
    // 0x00419FB4: j           L_0041A010
    // 0x00419FB8: sw          $v0, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r2;
        goto L_0041A010;
    // 0x00419FB8: sw          $v0, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r2;
L_00419FBC:
    // 0x00419FBC: blez        $s0, L_00419FE4
    if (SIGNED(ctx->r16) <= 0) {
        // 0x00419FC0: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_00419FE4;
    }
    // 0x00419FC0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x00419FC4: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00419FC8: addiu       $v0, $v0, 0x6588
    ctx->r2 = ADD32(ctx->r2, 0X6588);
    // 0x00419FCC: jal         0x004160F0
    // 0x00419FD0: sw          $v0, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r2;
    func_004160F0(rdram, ctx);
        goto after_0;
    // 0x00419FD0: sw          $v0, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r2;
    after_0:
    // 0x00419FD4: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x00419FD8: addiu       $a1, $a1, 0x1030
    ctx->r5 = ADD32(ctx->r5, 0X1030);
    // 0x00419FDC: j           L_0041A000
    // 0x00419FE0: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
        goto L_0041A000;
    // 0x00419FE0: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
L_00419FE4:
    // 0x00419FE4: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00419FE8: addiu       $v0, $v0, 0x6588
    ctx->r2 = ADD32(ctx->r2, 0X6588);
    // 0x00419FEC: jal         0x004160F0
    // 0x00419FF0: sw          $v0, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r2;
    func_004160F0(rdram, ctx);
        goto after_1;
    // 0x00419FF0: sw          $v0, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r2;
    after_1:
    // 0x00419FF4: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x00419FF8: addiu       $a1, $a1, 0x1038
    ctx->r5 = ADD32(ctx->r5, 0X1038);
    // 0x00419FFC: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
L_0041A000:
    // 0x0041A000: lw          $a0, 0x14($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X14);
    // 0x0041A004: addiu       $v0, $v0, -0x4
    ctx->r2 = ADD32(ctx->r2, -0X4);
    // 0x0041A008: jal         0x0029E3E0
    // 0x0041A00C: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    func_0029E3E0(rdram, ctx);
        goto after_2;
    // 0x0041A00C: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    after_2:
L_0041A010:
    // 0x0041A010: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x0041A014: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x0041A018: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0041A01C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x0041A020: jr          $ra
    // 0x0041A024: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x0041A024: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_0028B7C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0028B7C0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x0028B7C4: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x0028B7C8: addu        $s2, $a1, $zero
    ctx->r18 = ADD32(ctx->r5, 0);
    // 0x0028B7CC: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x0028B7D0: addu        $s3, $a2, $zero
    ctx->r19 = ADD32(ctx->r6, 0);
    // 0x0028B7D4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0028B7D8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x0028B7DC: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x0028B7E0: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x0028B7E4: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x0028B7E8: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x0028B7EC: beq         $v0, $zero, L_0028B80C
    if (ctx->r2 == 0) {
        // 0x0028B7F0: addu        $s4, $a3, $zero
        ctx->r20 = ADD32(ctx->r7, 0);
            goto L_0028B80C;
    }
    // 0x0028B7F0: addu        $s4, $a3, $zero
    ctx->r20 = ADD32(ctx->r7, 0);
L_0028B7F4:
    // 0x0028B7F4: lbu         $a0, 0x0($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X0);
    // 0x0028B7F8: jal         0x0028B430
    // 0x0028B7FC: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    func_0028B430(rdram, ctx);
        goto after_0;
    // 0x0028B7FC: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    after_0:
    // 0x0028B800: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x0028B804: bne         $v0, $zero, L_0028B7F4
    if (ctx->r2 != 0) {
        // 0x0028B808: nop
    
            goto L_0028B7F4;
    }
    // 0x0028B808: nop

L_0028B80C:
    // 0x0028B80C: lui         $s0, 0x800B
    ctx->r16 = S32(0X800B << 16);
    // 0x0028B810: addiu       $s0, $s0, -0x5F24
    ctx->r16 = ADD32(ctx->r16, -0X5F24);
    // 0x0028B814: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x0028B818: beql        $v0, $zero, L_0028B83C
    if (ctx->r2 == 0) {
        // 0x0028B81C: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_0028B83C;
    }
    goto skip_0;
    // 0x0028B81C: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    skip_0:
L_0028B820:
    // 0x0028B820: lbu         $a0, 0x0($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X0);
    // 0x0028B824: jal         0x0028B430
    // 0x0028B828: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    func_0028B430(rdram, ctx);
        goto after_1;
    // 0x0028B828: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    after_1:
    // 0x0028B82C: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x0028B830: bne         $v0, $zero, L_0028B820
    if (ctx->r2 != 0) {
        // 0x0028B834: nop
    
            goto L_0028B820;
    }
    // 0x0028B834: nop

    // 0x0028B838: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
L_0028B83C:
    // 0x0028B83C: addiu       $s1, $zero, 0x3
    ctx->r17 = ADD32(0, 0X3);
    // 0x0028B840: subu        $a0, $s1, $s0
    ctx->r4 = SUB32(ctx->r17, ctx->r16);
L_0028B844:
    // 0x0028B844: sll         $a0, $a0, 3
    ctx->r4 = S32(ctx->r4 << 3);
    // 0x0028B848: jal         0x0028CD68
    // 0x0028B84C: srlv        $a0, $s2, $a0
    ctx->r4 = S32(U32(ctx->r18) >> (ctx->r4 & 31));
    func_0028CD68(rdram, ctx);
        goto after_2;
    // 0x0028B84C: srlv        $a0, $s2, $a0
    ctx->r4 = S32(U32(ctx->r18) >> (ctx->r4 & 31));
    after_2:
    // 0x0028B850: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x0028B854: slti        $v0, $s0, 0x4
    ctx->r2 = SIGNED(ctx->r16) < 0X4 ? 1 : 0;
    // 0x0028B858: bnel        $v0, $zero, L_0028B844
    if (ctx->r2 != 0) {
        // 0x0028B85C: subu        $a0, $s1, $s0
        ctx->r4 = SUB32(ctx->r17, ctx->r16);
            goto L_0028B844;
    }
    goto skip_1;
    // 0x0028B85C: subu        $a0, $s1, $s0
    ctx->r4 = SUB32(ctx->r17, ctx->r16);
    skip_1:
    // 0x0028B860: lui         $s0, 0x800B
    ctx->r16 = S32(0X800B << 16);
    // 0x0028B864: addiu       $s0, $s0, -0x5F14
    ctx->r16 = ADD32(ctx->r16, -0X5F14);
    // 0x0028B868: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x0028B86C: beql        $v0, $zero, L_0028B890
    if (ctx->r2 == 0) {
        // 0x0028B870: addu        $s0, $s3, $zero
        ctx->r16 = ADD32(ctx->r19, 0);
            goto L_0028B890;
    }
    goto skip_2;
    // 0x0028B870: addu        $s0, $s3, $zero
    ctx->r16 = ADD32(ctx->r19, 0);
    skip_2:
L_0028B874:
    // 0x0028B874: lbu         $a0, 0x0($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X0);
    // 0x0028B878: jal         0x0028B430
    // 0x0028B87C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    func_0028B430(rdram, ctx);
        goto after_3;
    // 0x0028B87C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    after_3:
    // 0x0028B880: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x0028B884: bne         $v0, $zero, L_0028B874
    if (ctx->r2 != 0) {
        // 0x0028B888: nop
    
            goto L_0028B874;
    }
    // 0x0028B888: nop

    // 0x0028B88C: addu        $s0, $s3, $zero
    ctx->r16 = ADD32(ctx->r19, 0);
L_0028B890:
    // 0x0028B890: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x0028B894: beq         $v0, $zero, L_0028B8B4
    if (ctx->r2 == 0) {
        // 0x0028B898: nop
    
            goto L_0028B8B4;
    }
    // 0x0028B898: nop

L_0028B89C:
    // 0x0028B89C: lbu         $a0, 0x0($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X0);
    // 0x0028B8A0: jal         0x0028B430
    // 0x0028B8A4: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    func_0028B430(rdram, ctx);
        goto after_4;
    // 0x0028B8A4: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    after_4:
    // 0x0028B8A8: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x0028B8AC: bne         $v0, $zero, L_0028B89C
    if (ctx->r2 != 0) {
        // 0x0028B8B0: nop
    
            goto L_0028B89C;
    }
    // 0x0028B8B0: nop

L_0028B8B4:
    // 0x0028B8B4: lui         $s0, 0x800B
    ctx->r16 = S32(0X800B << 16);
    // 0x0028B8B8: addiu       $s0, $s0, -0x5F24
    ctx->r16 = ADD32(ctx->r16, -0X5F24);
    // 0x0028B8BC: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x0028B8C0: beql        $v0, $zero, L_0028B8E4
    if (ctx->r2 == 0) {
        // 0x0028B8C4: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_0028B8E4;
    }
    goto skip_3;
    // 0x0028B8C4: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    skip_3:
L_0028B8C8:
    // 0x0028B8C8: lbu         $a0, 0x0($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X0);
    // 0x0028B8CC: jal         0x0028B430
    // 0x0028B8D0: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    func_0028B430(rdram, ctx);
        goto after_5;
    // 0x0028B8D0: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    after_5:
    // 0x0028B8D4: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x0028B8D8: bne         $v0, $zero, L_0028B8C8
    if (ctx->r2 != 0) {
        // 0x0028B8DC: nop
    
            goto L_0028B8C8;
    }
    // 0x0028B8DC: nop

    // 0x0028B8E0: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
L_0028B8E4:
    // 0x0028B8E4: addiu       $s1, $zero, 0x3
    ctx->r17 = ADD32(0, 0X3);
    // 0x0028B8E8: subu        $a0, $s1, $s0
    ctx->r4 = SUB32(ctx->r17, ctx->r16);
L_0028B8EC:
    // 0x0028B8EC: sll         $a0, $a0, 3
    ctx->r4 = S32(ctx->r4 << 3);
    // 0x0028B8F0: jal         0x0028CD68
    // 0x0028B8F4: srlv        $a0, $s4, $a0
    ctx->r4 = S32(U32(ctx->r20) >> (ctx->r4 & 31));
    func_0028CD68(rdram, ctx);
        goto after_6;
    // 0x0028B8F4: srlv        $a0, $s4, $a0
    ctx->r4 = S32(U32(ctx->r20) >> (ctx->r4 & 31));
    after_6:
    // 0x0028B8F8: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x0028B8FC: slti        $v0, $s0, 0x4
    ctx->r2 = SIGNED(ctx->r16) < 0X4 ? 1 : 0;
    // 0x0028B900: bnel        $v0, $zero, L_0028B8EC
    if (ctx->r2 != 0) {
        // 0x0028B904: subu        $a0, $s1, $s0
        ctx->r4 = SUB32(ctx->r17, ctx->r16);
            goto L_0028B8EC;
    }
    goto skip_4;
    // 0x0028B904: subu        $a0, $s1, $s0
    ctx->r4 = SUB32(ctx->r17, ctx->r16);
    skip_4:
    // 0x0028B908: lui         $s0, 0x800B
    ctx->r16 = S32(0X800B << 16);
    // 0x0028B90C: addiu       $s0, $s0, -0x5F10
    ctx->r16 = ADD32(ctx->r16, -0X5F10);
    // 0x0028B910: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x0028B914: beq         $v0, $zero, L_0028B934
    if (ctx->r2 == 0) {
        // 0x0028B918: nop
    
            goto L_0028B934;
    }
    // 0x0028B918: nop

L_0028B91C:
    // 0x0028B91C: lbu         $a0, 0x0($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X0);
    // 0x0028B920: jal         0x0028B430
    // 0x0028B924: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    func_0028B430(rdram, ctx);
        goto after_7;
    // 0x0028B924: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    after_7:
    // 0x0028B928: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x0028B92C: bne         $v0, $zero, L_0028B91C
    if (ctx->r2 != 0) {
        // 0x0028B930: nop
    
            goto L_0028B91C;
    }
    // 0x0028B930: nop

L_0028B934:
    // 0x0028B934: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x0028B938: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x0028B93C: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x0028B940: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x0028B944: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x0028B948: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0028B94C: jr          $ra
    // 0x0028B950: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x0028B950: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_0041CB58(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041CB58: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x0041CB5C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0041CB60: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x0041CB64: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x0041CB68: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x0041CB6C: lw          $a1, 0x1C($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X1C);
    // 0x0041CB70: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x0041CB74: addiu       $a0, $a0, -0x6790
    ctx->r4 = ADD32(ctx->r4, -0X6790);
    // 0x0041CB78: jal         0x0025340C
    // 0x0041CB7C: nop

    func_0025340C(rdram, ctx);
        goto after_0;
    // 0x0041CB7C: nop

    after_0:
    // 0x0041CB80: sll         $v0, $v0, 6
    ctx->r2 = S32(ctx->r2 << 6);
    // 0x0041CB84: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x0041CB88: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x0041CB8C: lhu         $s1, -0x54A4($at)
    ctx->r17 = MEM_HU(ctx->r1, -0X54A4);
    // 0x0041CB90: jal         0x004160F0
    // 0x0041CB94: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_004160F0(rdram, ctx);
        goto after_1;
    // 0x0041CB94: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x0041CB98: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x0041CB9C: addiu       $a1, $a1, 0x1330
    ctx->r5 = ADD32(ctx->r5, 0X1330);
    // 0x0041CBA0: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x0041CBA4: addiu       $v0, $v0, -0x4
    ctx->r2 = ADD32(ctx->r2, -0X4);
    // 0x0041CBA8: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x0041CBAC: jal         0x0029E3E0
    // 0x0041CBB0: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    func_0029E3E0(rdram, ctx);
        goto after_2;
    // 0x0041CBB0: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    after_2:
    // 0x0041CBB4: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x0041CBB8: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x0041CBBC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0041CBC0: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x0041CBC4: jr          $ra
    // 0x0041CBC8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x0041CBC8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_00452060(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
;}
