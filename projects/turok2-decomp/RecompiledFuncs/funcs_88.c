#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_0040E0D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0040E0D8: jr          $ra
    // 0x0040E0DC: nop

    return;
    // 0x0040E0DC: nop

;}
RECOMP_FUNC void func_00296260(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00296260: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00296264: ldc1        $f0, -0x59B0($at)
    CHECK_FR(ctx, 0);
    ctx->f0.u64 = LD(ctx->r1, -0X59B0);
    // 0x00296268: c.eq.d      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.d == ctx->f0.d;
    // 0x0029626C: nop

    // 0x00296270: bc1f        L_00296280
    if (!c1cs) {
            // 0x00296274: sw          $zero, 0x0($a2)
    MEM_W(0X0, ctx->r6) = 0;
    func_00296280(rdram, ctx);
    return;
    }
    // 0x00296274: sw          $zero, 0x0($a2)
    MEM_W(0X0, ctx->r6) = 0;
    // 0x00296278: jr          $ra
    // 0x0029627C: mov.d       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.d = ctx->f12.d;
    return;
    // 0x0029627C: mov.d       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.d = ctx->f12.d;
;}
RECOMP_FUNC void func_00421B30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00421B30: lui         $v0, 0x44
    ctx->r2 = S32(0X44 << 16);
    // 0x00421B34: addiu       $v0, $v0, -0x5338
    ctx->r2 = ADD32(ctx->r2, -0X5338);
    // 0x00421B38: jr          $ra
    // 0x00421B3C: nop

    return;
    // 0x00421B3C: nop

;}
RECOMP_FUNC void func_0028D264(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0028D264: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x0028D268: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x0028D26C: addiu       $v1, $v1, -0x6790
    ctx->r3 = ADD32(ctx->r3, -0X6790);
    // 0x0028D270: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x0028D274: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x0028D278: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x0028D27C: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x0028D280: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x0028D284: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0028D288: lw          $v0, 0x8($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X8);
    // 0x0028D28C: blez        $v0, L_0028D354
    if (SIGNED(ctx->r2) <= 0) {
        // 0x0028D290: addu        $s2, $zero, $zero
        ctx->r18 = ADD32(0, 0);
            goto L_0028D354;
    }
    // 0x0028D290: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    // 0x0028D294: lui         $s0, 0x8012
    ctx->r16 = S32(0X8012 << 16);
    // 0x0028D298: addiu       $s0, $s0, -0xD70
    ctx->r16 = ADD32(ctx->r16, -0XD70);
    // 0x0028D29C: addu        $s1, $s0, $zero
    ctx->r17 = ADD32(ctx->r16, 0);
    // 0x0028D2A0: addu        $s4, $s1, $zero
    ctx->r20 = ADD32(ctx->r17, 0);
    // 0x0028D2A4: addu        $s3, $s2, $zero
    ctx->r19 = ADD32(ctx->r18, 0);
L_0028D2A8:
    // 0x0028D2A8: lw          $v0, 0x4($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X4);
    // 0x0028D2AC: addiu       $a0, $s4, 0x10
    ctx->r4 = ADD32(ctx->r20, 0X10);
    // 0x0028D2B0: addu        $v0, $v0, $s3
    ctx->r2 = ADD32(ctx->r2, ctx->r19);
    // 0x0028D2B4: addiu       $v1, $v0, 0x520
    ctx->r3 = ADD32(ctx->r2, 0X520);
    // 0x0028D2B8: addiu       $a1, $v0, 0xA00
    ctx->r5 = ADD32(ctx->r2, 0XA00);
L_0028D2BC:
    // 0x0028D2BC: lw          $a2, 0x0($v1)
    ctx->r6 = MEM_W(ctx->r3, 0X0);
    // 0x0028D2C0: lw          $a3, 0x4($v1)
    ctx->r7 = MEM_W(ctx->r3, 0X4);
    // 0x0028D2C4: lw          $t0, 0x8($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X8);
    // 0x0028D2C8: lw          $t1, 0xC($v1)
    ctx->r9 = MEM_W(ctx->r3, 0XC);
    // 0x0028D2CC: sw          $a2, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r6;
    // 0x0028D2D0: sw          $a3, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r7;
    // 0x0028D2D4: sw          $t0, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r8;
    // 0x0028D2D8: sw          $t1, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->r9;
    // 0x0028D2DC: addiu       $v1, $v1, 0x10
    ctx->r3 = ADD32(ctx->r3, 0X10);
    // 0x0028D2E0: bne         $v1, $a1, L_0028D2BC
    if (ctx->r3 != ctx->r5) {
        // 0x0028D2E4: addiu       $a0, $a0, 0x10
        ctx->r4 = ADD32(ctx->r4, 0X10);
            goto L_0028D2BC;
    }
    // 0x0028D2E4: addiu       $a0, $a0, 0x10
    ctx->r4 = ADD32(ctx->r4, 0X10);
    // 0x0028D2E8: lw          $a2, 0x0($v1)
    ctx->r6 = MEM_W(ctx->r3, 0X0);
    // 0x0028D2EC: lw          $a3, 0x4($v1)
    ctx->r7 = MEM_W(ctx->r3, 0X4);
    // 0x0028D2F0: sw          $a2, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r6;
    // 0x0028D2F4: sw          $a3, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r7;
    // 0x0028D2F8: lw          $a2, 0x4($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X4);
    // 0x0028D2FC: lw          $a3, 0x8($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X8);
    // 0x0028D300: lw          $t0, 0xC($v0)
    ctx->r8 = MEM_W(ctx->r2, 0XC);
    // 0x0028D304: sw          $a2, 0x13B0($s1)
    MEM_W(0X13B0, ctx->r17) = ctx->r6;
    // 0x0028D308: sw          $a3, 0x13B4($s1)
    MEM_W(0X13B4, ctx->r17) = ctx->r7;
    // 0x0028D30C: sw          $t0, 0x13B8($s1)
    MEM_W(0X13B8, ctx->r17) = ctx->r8;
    // 0x0028D310: addiu       $s1, $s1, 0xC
    ctx->r17 = ADD32(ctx->r17, 0XC);
    // 0x0028D314: addiu       $s4, $s4, 0x4E8
    ctx->r20 = ADD32(ctx->r20, 0X4E8);
    // 0x0028D318: addiu       $s3, $s3, 0x1328
    ctx->r19 = ADD32(ctx->r19, 0X1328);
    // 0x0028D31C: lwc1        $f0, 0x50($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X50);
    // 0x0028D320: swc1        $f0, 0x13E0($s0)
    MEM_W(0X13E0, ctx->r16) = ctx->f0.u32l;
    // 0x0028D324: lw          $a1, 0x10($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X10);
    // 0x0028D328: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x0028D32C: addiu       $a0, $a0, 0x7078
    ctx->r4 = ADD32(ctx->r4, 0X7078);
    // 0x0028D330: jal         0x002242B4
    // 0x0028D334: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    func_002242B4(rdram, ctx);
        goto after_0;
    // 0x0028D334: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    after_0:
    // 0x0028D338: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x0028D33C: addiu       $v1, $v1, -0x6790
    ctx->r3 = ADD32(ctx->r3, -0X6790);
    // 0x0028D340: sw          $v0, 0x13F0($s0)
    MEM_W(0X13F0, ctx->r16) = ctx->r2;
    // 0x0028D344: lw          $v0, 0x8($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X8);
    // 0x0028D348: slt         $v0, $s2, $v0
    ctx->r2 = SIGNED(ctx->r18) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x0028D34C: bne         $v0, $zero, L_0028D2A8
    if (ctx->r2 != 0) {
        // 0x0028D350: addiu       $s0, $s0, 0x4
        ctx->r16 = ADD32(ctx->r16, 0X4);
            goto L_0028D2A8;
    }
    // 0x0028D350: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
L_0028D354:
    // 0x0028D354: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x0028D358: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x0028D35C: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x0028D360: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x0028D364: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x0028D368: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0028D36C: jr          $ra
    // 0x0028D370: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x0028D370: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_00236170(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00236170: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x00236174: sw          $s2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r18;
    // 0x00236178: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x0023617C: sw          $s1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r17;
    // 0x00236180: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x00236184: sw          $ra, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r31;
    // 0x00236188: sw          $s3, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r19;
    // 0x0023618C: sw          $s0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r16;
    // 0x00236190: sdc1        $f20, 0x68($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X68, ctx->r29);
    // 0x00236194: lw          $s0, 0x7520($s2)
    ctx->r16 = MEM_W(ctx->r18, 0X7520);
    // 0x00236198: beq         $s0, $zero, L_0023622C
    if (ctx->r16 == 0) {
        // 0x0023619C: addu        $s3, $a2, $zero
        ctx->r19 = ADD32(ctx->r6, 0);
            goto L_0023622C;
    }
    // 0x0023619C: addu        $s3, $a2, $zero
    ctx->r19 = ADD32(ctx->r6, 0);
    // 0x002361A0: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
L_002361A4:
    // 0x002361A4: lw          $v0, 0x1C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X1C);
    // 0x002361A8: bne         $v0, $s1, L_00236220
    if (ctx->r2 != ctx->r17) {
        // 0x002361AC: nop
    
            goto L_00236220;
    }
    // 0x002361AC: nop

    // 0x002361B0: lwc1        $f0, 0x24($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X24);
    // 0x002361B4: c.lt.s      $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f20.fl < ctx->f0.fl;
    // 0x002361B8: nop

    // 0x002361BC: bc1f        L_00236220
    if (!c1cs) {
        // 0x002361C0: nop
    
            goto L_00236220;
    }
    // 0x002361C0: nop

    // 0x002361C4: bc1f        L_00236220
    if (!c1cs) {
        // 0x002361C8: addiu       $a0, $sp, 0x10
        ctx->r4 = ADD32(ctx->r29, 0X10);
            goto L_00236220;
    }
    // 0x002361C8: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x002361CC: jal         0x0020D908
    // 0x002361D0: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    func_0020D908(rdram, ctx);
        goto after_0;
    // 0x002361D0: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    after_0:
    // 0x002361D4: lw          $v0, 0xF8($s1)
    ctx->r2 = MEM_W(ctx->r17, 0XF8);
    // 0x002361D8: lw          $v0, 0x14($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X14);
    // 0x002361DC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002361E0: lwc1        $f0, 0x6514($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6514);
    // 0x002361E4: beq         $v0, $zero, L_002361F4
    if (ctx->r2 == 0) {
        // 0x002361E8: nop
    
            goto L_002361F4;
    }
    // 0x002361E8: nop

    // 0x002361EC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002361F0: lwc1        $f0, 0x6518($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6518);
L_002361F4:
    // 0x002361F4: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x002361F8: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x002361FC: addu        $a2, $a1, $zero
    ctx->r6 = ADD32(ctx->r5, 0);
    // 0x00236200: jal         0x0021034C
    // 0x00236204: addu        $a3, $a1, $zero
    ctx->r7 = ADD32(ctx->r5, 0);
    func_0021034C(rdram, ctx);
        goto after_1;
    // 0x00236204: addu        $a3, $a1, $zero
    ctx->r7 = ADD32(ctx->r5, 0);
    after_1:
    // 0x00236208: jal         0x0020F7EC
    // 0x0023620C: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    func_0020F7EC(rdram, ctx);
        goto after_2;
    // 0x0023620C: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    after_2:
    // 0x00236210: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x00236214: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x00236218: jal         0x002333C0
    // 0x0023621C: addiu       $a2, $sp, 0x10
    ctx->r6 = ADD32(ctx->r29, 0X10);
    func_002333C0(rdram, ctx);
        goto after_3;
    // 0x0023621C: addiu       $a2, $sp, 0x10
    ctx->r6 = ADD32(ctx->r29, 0X10);
    after_3:
L_00236220:
    // 0x00236220: lw          $s0, 0x4($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X4);
    // 0x00236224: bne         $s0, $zero, L_002361A4
    if (ctx->r16 != 0) {
        // 0x00236228: nop
    
            goto L_002361A4;
    }
    // 0x00236228: nop

L_0023622C:
    // 0x0023622C: lw          $ra, 0x60($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X60);
    // 0x00236230: lw          $s3, 0x5C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X5C);
    // 0x00236234: lw          $s2, 0x58($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X58);
    // 0x00236238: lw          $s1, 0x54($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X54);
    // 0x0023623C: lw          $s0, 0x50($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X50);
    // 0x00236240: ldc1        $f20, 0x68($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X68);
    // 0x00236244: jr          $ra
    // 0x00236248: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    return;
    // 0x00236248: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
;}
RECOMP_FUNC void func_00210090(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00210090: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x00210094: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x00210098: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x0021009C: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x002100A0: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x002100A4: lui         $t0, 0x800A
    ctx->r8 = S32(0X800A << 16);
    // 0x002100A8: addiu       $t0, $t0, 0x5404
    ctx->r8 = ADD32(ctx->r8, 0X5404);
    // 0x002100AC: lw          $v0, 0x0($t0)
    ctx->r2 = MEM_W(ctx->r8, 0X0);
    // 0x002100B0: lw          $v1, 0x4($t0)
    ctx->r3 = MEM_W(ctx->r8, 0X4);
    // 0x002100B4: lw          $a3, 0x8($t0)
    ctx->r7 = MEM_W(ctx->r8, 0X8);
    // 0x002100B8: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x002100BC: sw          $v1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r3;
    // 0x002100C0: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    // 0x002100C4: lwc1        $f2, 0x4($s1)
    ctx->f2.u32l = MEM_W(ctx->r17, 0X4);
    // 0x002100C8: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x002100CC: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x002100D0: nop

    // 0x002100D4: bc1f        L_00210100
    if (!c1cs) {
        // 0x002100D8: addu        $s0, $a0, $zero
        ctx->r16 = ADD32(ctx->r4, 0);
            goto L_00210100;
    }
    // 0x002100D8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x002100DC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002100E0: lwc1        $f1, 0x5608($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X5608);
    // 0x002100E4: neg.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = -ctx->f2.fl;
    // 0x002100E8: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x002100EC: nop

    // 0x002100F0: bc1t        L_00210118
    if (c1cs) {
        // 0x002100F4: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_00210118;
    }
    // 0x002100F4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x002100F8: j           L_00210134
    // 0x002100FC: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
        goto L_00210134;
    // 0x002100FC: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
L_00210100:
    // 0x00210100: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00210104: lwc1        $f0, 0x560C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X560C);
    // 0x00210108: c.le.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl <= ctx->f2.fl;
    // 0x0021010C: nop

    // 0x00210110: bc1f        L_00210130
    if (!c1cs) {
        // 0x00210114: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_00210130;
    }
    // 0x00210114: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_00210118:
    // 0x00210118: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0021011C: lwc1        $f0, 0x5610($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X5610);
    // 0x00210120: sw          $zero, 0x4($s0)
    MEM_W(0X4, ctx->r16) = 0;
    // 0x00210124: sw          $zero, 0x8($s0)
    MEM_W(0X8, ctx->r16) = 0;
    // 0x00210128: j           L_0021013C
    // 0x0021012C: swc1        $f0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f0.u32l;
        goto L_0021013C;
    // 0x0021012C: swc1        $f0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f0.u32l;
L_00210130:
    // 0x00210130: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
L_00210134:
    // 0x00210134: jal         0x0020EFDC
    // 0x00210138: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    func_0020EFDC(rdram, ctx);
        goto after_0;
    // 0x00210138: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    after_0:
L_0021013C:
    // 0x0021013C: addiu       $a0, $s0, 0x10
    ctx->r4 = ADD32(ctx->r16, 0X10);
    // 0x00210140: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x00210144: jal         0x0020EFDC
    // 0x00210148: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    func_0020EFDC(rdram, ctx);
        goto after_1;
    // 0x00210148: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    after_1:
    // 0x0021014C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x00210150: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00210154: lwc1        $f1, 0x5614($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X5614);
    // 0x00210158: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x0021015C: lw          $v1, 0x4($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X4);
    // 0x00210160: lw          $a3, 0x8($s1)
    ctx->r7 = MEM_W(ctx->r17, 0X8);
    // 0x00210164: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    // 0x00210168: sw          $v1, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r3;
    // 0x0021016C: sw          $a3, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->r7;
    // 0x00210170: swc1        $f0, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->f0.u32l;
    // 0x00210174: swc1        $f0, 0x34($s0)
    MEM_W(0X34, ctx->r16) = ctx->f0.u32l;
    // 0x00210178: swc1        $f0, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->f0.u32l;
    // 0x0021017C: swc1        $f0, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->f0.u32l;
    // 0x00210180: swc1        $f0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f0.u32l;
    // 0x00210184: swc1        $f0, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f0.u32l;
    // 0x00210188: swc1        $f1, 0x3C($s0)
    MEM_W(0X3C, ctx->r16) = ctx->f_odd[(1 - 1) * 2];
    // 0x0021018C: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x00210190: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x00210194: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x00210198: jr          $ra
    // 0x0021019C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x0021019C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_00229D10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00229D10: addiu       $sp, $sp, -0x138
    ctx->r29 = ADD32(ctx->r29, -0X138);
    // 0x00229D14: sw          $s1, 0x10C($sp)
    MEM_W(0X10C, ctx->r29) = ctx->r17;
    // 0x00229D18: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x00229D1C: sw          $ra, 0x11C($sp)
    MEM_W(0X11C, ctx->r29) = ctx->r31;
    // 0x00229D20: sw          $s4, 0x118($sp)
    MEM_W(0X118, ctx->r29) = ctx->r20;
    // 0x00229D24: sw          $s3, 0x114($sp)
    MEM_W(0X114, ctx->r29) = ctx->r19;
    // 0x00229D28: sw          $s2, 0x110($sp)
    MEM_W(0X110, ctx->r29) = ctx->r18;
    // 0x00229D2C: sw          $s0, 0x108($sp)
    MEM_W(0X108, ctx->r29) = ctx->r16;
    // 0x00229D30: sdc1        $f22, 0x130($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X130, ctx->r29);
    // 0x00229D34: sdc1        $f21, 0x128($sp)
    CHECK_FR(ctx, 21);
    SD(ctx->f21.u64, 0X128, ctx->r29);
    // 0x00229D38: sdc1        $f20, 0x120($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X120, ctx->r29);
    // 0x00229D3C: lwc1        $f1, 0x11C($s1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r17, 0X11C);
    // 0x00229D40: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00229D44: lwc1        $f0, -0x3198($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X3198);
    // 0x00229D48: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x00229D4C: nop

    // 0x00229D50: bc1f        L_0022A044
    if (!c1cs) {
        // 0x00229D54: addiu       $a0, $sp, 0x78
        ctx->r4 = ADD32(ctx->r29, 0X78);
            goto L_0022A044;
    }
    // 0x00229D54: addiu       $a0, $sp, 0x78
    ctx->r4 = ADD32(ctx->r29, 0X78);
    // 0x00229D58: jal         0x0020E810
    // 0x00229D5C: addiu       $a1, $s1, 0x150
    ctx->r5 = ADD32(ctx->r17, 0X150);
    func_0020E810(rdram, ctx);
        goto after_0;
    // 0x00229D5C: addiu       $a1, $s1, 0x150
    ctx->r5 = ADD32(ctx->r17, 0X150);
    after_0:
    // 0x00229D60: lwc1        $f1, 0x18($s1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r17, 0X18);
    // 0x00229D64: mul.s       $f1, $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f1.fl);
    // 0x00229D68: lwc1        $f0, 0x1C($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X1C);
    // 0x00229D6C: mul.s       $f0, $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x00229D70: lwc1        $f12, 0x20($s1)
    ctx->f12.u32l = MEM_W(ctx->r17, 0X20);
    // 0x00229D74: mul.s       $f12, $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x00229D78: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x00229D7C: jal         0x00298470
    // 0x00229D80: add.s       $f12, $f1, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = ctx->f1.fl + ctx->f12.fl;
    func_00298470(rdram, ctx);
        goto after_1;
    // 0x00229D80: add.s       $f12, $f1, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = ctx->f1.fl + ctx->f12.fl;
    after_1:
    // 0x00229D84: addiu       $s0, $sp, 0x58
    ctx->r16 = ADD32(ctx->r29, 0X58);
    // 0x00229D88: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x00229D8C: lw          $v0, 0x10C($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X10C);
    // 0x00229D90: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00229D94: lwc1        $f1, 0x6158($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X6158);
    // 0x00229D98: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00229D9C: lwc1        $f2, 0x615C($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X615C);
    // 0x00229DA0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00229DA4: lwc1        $f3, 0x6160($at)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r1, 0X6160);
    // 0x00229DA8: lw          $s2, 0x1A8($v0)
    ctx->r18 = MEM_W(ctx->r2, 0X1A8);
    // 0x00229DAC: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x00229DB0: swc1        $f1, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    // 0x00229DB4: swc1        $f2, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f2.u32l;
    // 0x00229DB8: swc1        $f3, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f_odd[(3 - 1) * 2];
    // 0x00229DBC: jal         0x00253F90
    // 0x00229DC0: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_00253F90(rdram, ctx);
        goto after_2;
    // 0x00229DC0: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_2:
    // 0x00229DC4: addiu       $a0, $sp, 0x68
    ctx->r4 = ADD32(ctx->r29, 0X68);
    // 0x00229DC8: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x00229DCC: addiu       $s0, $s1, 0x4
    ctx->r16 = ADD32(ctx->r17, 0X4);
    // 0x00229DD0: jal         0x0020EF2C
    // 0x00229DD4: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    func_0020EF2C(rdram, ctx);
        goto after_3;
    // 0x00229DD4: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    after_3:
    // 0x00229DD8: lwc1        $f1, 0x68($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X68);
    // 0x00229DDC: mul.s       $f1, $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f1.fl);
    // 0x00229DE0: lwc1        $f0, 0x6C($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x00229DE4: mul.s       $f0, $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x00229DE8: lwc1        $f12, 0x70($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X70);
    // 0x00229DEC: mul.s       $f12, $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x00229DF0: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x00229DF4: jal         0x00298470
    // 0x00229DF8: add.s       $f12, $f1, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = ctx->f1.fl + ctx->f12.fl;
    func_00298470(rdram, ctx);
        goto after_4;
    // 0x00229DF8: add.s       $f12, $f1, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = ctx->f1.fl + ctx->f12.fl;
    after_4:
    // 0x00229DFC: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00229E00: lwc1        $f3, -0x3194($at)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r1, -0X3194);
    // 0x00229E04: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00229E08: lwc1        $f1, 0x6164($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X6164);
    // 0x00229E0C: add.s       $f1, $f3, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = ctx->f3.fl + ctx->f1.fl;
    // 0x00229E10: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    // 0x00229E14: c.le.s      $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f2.fl <= ctx->f1.fl;
    // 0x00229E18: nop

    // 0x00229E1C: bc1f        L_00229EB8
    if (!c1cs) {
        // 0x00229E20: nop
    
            goto L_00229EB8;
    }
    // 0x00229E20: nop

    // 0x00229E24: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00229E28: lwc1        $f0, 0x6168($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6168);
    // 0x00229E2C: mul.s       $f0, $f3, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f3.fl, ctx->f0.fl);
    // 0x00229E30: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x00229E34: nop

    // 0x00229E38: bc1t        L_00229E5C
    if (c1cs) {
        // 0x00229E3C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_00229E5C;
    }
    // 0x00229E3C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00229E40: lwc1        $f1, 0x11C($s1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r17, 0X11C);
    // 0x00229E44: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00229E48: lwc1        $f0, 0x616C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X616C);
    // 0x00229E4C: c.le.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl <= ctx->f1.fl;
    // 0x00229E50: nop

    // 0x00229E54: bc1f        L_00229E98
    if (!c1cs) {
        // 0x00229E58: nop
    
            goto L_00229E98;
    }
    // 0x00229E58: nop

L_00229E5C:
    // 0x00229E5C: lw          $t0, 0x58($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X58);
    // 0x00229E60: lw          $t1, 0x5C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X5C);
    // 0x00229E64: lw          $t2, 0x60($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X60);
    // 0x00229E68: sw          $t0, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->r8;
    // 0x00229E6C: sw          $t1, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->r9;
    // 0x00229E70: sw          $t2, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->r10;
    // 0x00229E74: sh          $v0, 0x128($s1)
    MEM_H(0X128, ctx->r17) = ctx->r2;
    // 0x00229E78: lh          $v1, 0x996($s2)
    ctx->r3 = MEM_H(ctx->r18, 0X996);
    // 0x00229E7C: addiu       $v0, $zero, 0x15
    ctx->r2 = ADD32(0, 0X15);
    // 0x00229E80: bne         $v1, $v0, L_0022A178
    if (ctx->r3 != ctx->r2) {
        // 0x00229E84: nop
    
            goto L_0022A178;
    }
    // 0x00229E84: nop

    // 0x00229E88: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00229E8C: lwc1        $f0, 0x6170($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6170);
    // 0x00229E90: j           L_0022A178
    // 0x00229E94: swc1        $f0, 0x4D8($s2)
    MEM_W(0X4D8, ctx->r18) = ctx->f0.u32l;
        goto L_0022A178;
    // 0x00229E94: swc1        $f0, 0x4D8($s2)
    MEM_W(0X4D8, ctx->r18) = ctx->f0.u32l;
L_00229E98:
    // 0x00229E98: lw          $t0, 0x68($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X68);
    // 0x00229E9C: lw          $t1, 0x6C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X6C);
    // 0x00229EA0: lw          $t2, 0x70($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X70);
    // 0x00229EA4: sw          $t0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r8;
    // 0x00229EA8: sw          $t1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r9;
    // 0x00229EAC: sw          $t2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r10;
    // 0x00229EB0: j           L_00229F34
    // 0x00229EB4: addiu       $s0, $sp, 0x28
    ctx->r16 = ADD32(ctx->r29, 0X28);
        goto L_00229F34;
    // 0x00229EB4: addiu       $s0, $sp, 0x28
    ctx->r16 = ADD32(ctx->r29, 0X28);
L_00229EB8:
    // 0x00229EB8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00229EBC: lwc1        $f0, 0x6174($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6174);
    // 0x00229EC0: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    // 0x00229EC4: lw          $a0, 0x10C($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X10C);
    // 0x00229EC8: jal         0x002671B4
    // 0x00229ECC: nop

    func_002671B4(rdram, ctx);
        goto after_5;
    // 0x00229ECC: nop

    after_5:
    // 0x00229ED0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00229ED4: lwc1        $f1, 0x6178($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X6178);
    // 0x00229ED8: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00229EDC: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x00229EE0: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00229EE4: lwc1        $f1, -0x3194($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, -0X3194);
    // 0x00229EE8: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    // 0x00229EEC: neg.s       $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = -ctx->f1.fl;
    // 0x00229EF0: swc1        $f1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    // 0x00229EF4: jal         0x00253F90
    // 0x00229EF8: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    func_00253F90(rdram, ctx);
        goto after_6;
    // 0x00229EF8: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    after_6:
    // 0x00229EFC: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    // 0x00229F00: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    // 0x00229F04: jal         0x0020EF2C
    // 0x00229F08: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    func_0020EF2C(rdram, ctx);
        goto after_7;
    // 0x00229F08: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    after_7:
    // 0x00229F0C: lwc1        $f1, 0x28($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X28);
    // 0x00229F10: mul.s       $f1, $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f1.fl);
    // 0x00229F14: lwc1        $f0, 0x2C($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x00229F18: mul.s       $f0, $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x00229F1C: lwc1        $f12, 0x30($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X30);
    // 0x00229F20: mul.s       $f12, $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x00229F24: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x00229F28: jal         0x00298470
    // 0x00229F2C: add.s       $f12, $f1, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = ctx->f1.fl + ctx->f12.fl;
    func_00298470(rdram, ctx);
        goto after_8;
    // 0x00229F2C: add.s       $f12, $f1, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = ctx->f1.fl + ctx->f12.fl;
    after_8:
    // 0x00229F30: addiu       $s0, $sp, 0x28
    ctx->r16 = ADD32(ctx->r29, 0X28);
L_00229F34:
    // 0x00229F34: jal         0x0020F040
    // 0x00229F38: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_0020F040(rdram, ctx);
        goto after_9;
    // 0x00229F38: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_9:
    // 0x00229F3C: addiu       $s2, $sp, 0x88
    ctx->r18 = ADD32(ctx->r29, 0X88);
    // 0x00229F40: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x00229F44: jal         0x0020E810
    // 0x00229F48: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_0020E810(rdram, ctx);
        goto after_10;
    // 0x00229F48: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_10:
    // 0x00229F4C: jal         0x00211074
    // 0x00229F50: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_00211074(rdram, ctx);
        goto after_11;
    // 0x00229F50: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_11:
    // 0x00229F54: addiu       $s3, $sp, 0x78
    ctx->r19 = ADD32(ctx->r29, 0X78);
    // 0x00229F58: jal         0x00211074
    // 0x00229F5C: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    func_00211074(rdram, ctx);
        goto after_12;
    // 0x00229F5C: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    after_12:
    // 0x00229F60: jal         0x0020F040
    // 0x00229F64: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_0020F040(rdram, ctx);
        goto after_13;
    // 0x00229F64: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_13:
    // 0x00229F68: addiu       $a0, $sp, 0x38
    ctx->r4 = ADD32(ctx->r29, 0X38);
    // 0x00229F6C: lw          $t0, 0x150($s1)
    ctx->r8 = MEM_W(ctx->r17, 0X150);
    // 0x00229F70: lw          $t1, 0x154($s1)
    ctx->r9 = MEM_W(ctx->r17, 0X154);
    // 0x00229F74: lw          $t2, 0x158($s1)
    ctx->r10 = MEM_W(ctx->r17, 0X158);
    // 0x00229F78: sw          $t0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r8;
    // 0x00229F7C: sw          $t1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r9;
    // 0x00229F80: sw          $t2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r10;
    // 0x00229F84: jal         0x0020F040
    // 0x00229F88: addiu       $s4, $s1, 0x150
    ctx->r20 = ADD32(ctx->r17, 0X150);
    func_0020F040(rdram, ctx);
        goto after_14;
    // 0x00229F88: addiu       $s4, $s1, 0x150
    ctx->r20 = ADD32(ctx->r17, 0X150);
    after_14:
    // 0x00229F8C: lwc1        $f2, 0x28($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X28);
    // 0x00229F90: lwc1        $f0, 0x38($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X38);
    // 0x00229F94: mul.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x00229F98: lwc1        $f1, 0x2C($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X2C);
    // 0x00229F9C: lwc1        $f0, 0x3C($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x00229FA0: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x00229FA4: lwc1        $f12, 0x30($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X30);
    // 0x00229FA8: lwc1        $f0, 0x40($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X40);
    // 0x00229FAC: mul.s       $f12, $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = MUL_S(ctx->f12.fl, ctx->f0.fl);
    // 0x00229FB0: add.s       $f2, $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f1.fl;
    // 0x00229FB4: jal         0x0021153C
    // 0x00229FB8: add.s       $f12, $f2, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = ctx->f2.fl + ctx->f12.fl;
    func_0021153C(rdram, ctx);
        goto after_15;
    // 0x00229FB8: add.s       $f12, $f2, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = ctx->f2.fl + ctx->f12.fl;
    after_15:
    // 0x00229FBC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00229FC0: lwc1        $f1, 0x617C($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X617C);
    // 0x00229FC4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00229FC8: lwc1        $f2, 0x6180($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X6180);
    // 0x00229FCC: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x00229FD0: nop

    // 0x00229FD4: bc1f        L_00229FE4
    if (!c1cs) {
        // 0x00229FD8: addiu       $s0, $sp, 0x98
        ctx->r16 = ADD32(ctx->r29, 0X98);
            goto L_00229FE4;
    }
    // 0x00229FD8: addiu       $s0, $sp, 0x98
    ctx->r16 = ADD32(ctx->r29, 0X98);
    // 0x00229FDC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00229FE0: lwc1        $f2, 0x6184($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X6184);
L_00229FE4:
    // 0x00229FE4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00229FE8: addu        $a2, $s3, $zero
    ctx->r6 = ADD32(ctx->r19, 0);
    // 0x00229FEC: mfc1        $a1, $f2
    ctx->r5 = (int32_t)ctx->f2.u32l;
    // 0x00229FF0: jal         0x0020DCC8
    // 0x00229FF4: addu        $a3, $s2, $zero
    ctx->r7 = ADD32(ctx->r18, 0);
    func_0020DCC8(rdram, ctx);
        goto after_16;
    // 0x00229FF4: addu        $a3, $s2, $zero
    ctx->r7 = ADD32(ctx->r18, 0);
    after_16:
    // 0x00229FF8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00229FFC: addiu       $s0, $sp, 0xA8
    ctx->r16 = ADD32(ctx->r29, 0XA8);
    // 0x0022A000: jal         0x00211114
    // 0x0022A004: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_00211114(rdram, ctx);
        goto after_17;
    // 0x0022A004: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_17:
    // 0x0022A008: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0022A00C: addiu       $a1, $sp, 0x48
    ctx->r5 = ADD32(ctx->r29, 0X48);
    // 0x0022A010: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0022A014: lwc1        $f0, 0x6188($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6188);
    // 0x0022A018: addu        $a2, $s4, $zero
    ctx->r6 = ADD32(ctx->r20, 0);
    // 0x0022A01C: sw          $zero, 0x48($sp)
    MEM_W(0X48, ctx->r29) = 0;
    // 0x0022A020: sw          $zero, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = 0;
    // 0x0022A024: jal         0x0020F85C
    // 0x0022A028: swc1        $f0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f0.u32l;
    func_0020F85C(rdram, ctx);
        goto after_18;
    // 0x0022A028: swc1        $f0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f0.u32l;
    after_18:
    // 0x0022A02C: addiu       $a0, $s1, 0x18
    ctx->r4 = ADD32(ctx->r17, 0X18);
    // 0x0022A030: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x0022A034: jal         0x0020EF60
    // 0x0022A038: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    func_0020EF60(rdram, ctx);
        goto after_19;
    // 0x0022A038: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    after_19:
    // 0x0022A03C: j           L_0022A098
    // 0x0022A040: nop

        goto L_0022A098;
    // 0x0022A040: nop

L_0022A044:
    // 0x0022A044: lw          $v1, 0x1B8($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X1B8);
    // 0x0022A048: beq         $v1, $zero, L_0022A070
    if (ctx->r3 == 0) {
        // 0x0022A04C: addiu       $a0, $zero, 0x1B3
        ctx->r4 = ADD32(0, 0X1B3);
            goto L_0022A070;
    }
    // 0x0022A04C: addiu       $a0, $zero, 0x1B3
    ctx->r4 = ADD32(0, 0X1B3);
    // 0x0022A050: lw          $v0, 0xC($v1)
    ctx->r2 = MEM_W(ctx->r3, 0XC);
    // 0x0022A054: bne         $v0, $a0, L_0022A068
    if (ctx->r2 != ctx->r4) {
        // 0x0022A058: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_0022A068;
    }
    // 0x0022A058: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x0022A05C: lw          $v1, 0x8($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X8);
    // 0x0022A060: bne         $v1, $v0, L_0022A098
    if (ctx->r3 != ctx->r2) {
        // 0x0022A064: nop
    
            goto L_0022A098;
    }
    // 0x0022A064: nop

L_0022A068:
    // 0x0022A068: jal         0x00232B40
    // 0x0022A06C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_00232B40(rdram, ctx);
        goto after_20;
    // 0x0022A06C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_20:
L_0022A070:
    // 0x0022A070: jal         0x00275F7C
    // 0x0022A074: nop

    func_00275F7C(rdram, ctx);
        goto after_21;
    // 0x0022A074: nop

    after_21:
    // 0x0022A078: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x0022A07C: addiu       $a1, $zero, 0x1B3
    ctx->r5 = ADD32(0, 0X1B3);
    // 0x0022A080: addiu       $a2, $s1, 0x4
    ctx->r6 = ADD32(ctx->r17, 0X4);
    // 0x0022A084: addu        $a3, $a2, $zero
    ctx->r7 = ADD32(ctx->r6, 0);
    // 0x0022A088: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x0022A08C: jal         0x00275C6C
    // 0x0022A090: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    func_00275C6C(rdram, ctx);
        goto after_22;
    // 0x0022A090: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    after_22:
    // 0x0022A094: sw          $v0, 0x1B8($s1)
    MEM_W(0X1B8, ctx->r17) = ctx->r2;
L_0022A098:
    // 0x0022A098: lw          $v0, 0xF8($s1)
    ctx->r2 = MEM_W(ctx->r17, 0XF8);
    // 0x0022A09C: lw          $v0, 0x30($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X30);
    // 0x0022A0A0: lhu         $a0, 0x10($v0)
    ctx->r4 = MEM_HU(ctx->r2, 0X10);
    // 0x0022A0A4: jal         0x0026D210
    // 0x0022A0A8: nop

    func_0026D210(rdram, ctx);
        goto after_23;
    // 0x0022A0A8: nop

    after_23:
    // 0x0022A0AC: mtc1        $zero, $f22
    ctx->f22.u32l = 0;
    // 0x0022A0B0: mov.s       $f21, $f0
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 0);
    ctx->f21.fl = ctx->f0.fl;
    // 0x0022A0B4: c.eq.s      $f21, $f22
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f21.fl == ctx->f22.fl;
    // 0x0022A0B8: nop

    // 0x0022A0BC: bc1t        L_0022A16C
    if (c1cs) {
        // 0x0022A0C0: addiu       $a0, $sp, 0xE8
        ctx->r4 = ADD32(ctx->r29, 0XE8);
            goto L_0022A16C;
    }
    // 0x0022A0C0: addiu       $a0, $sp, 0xE8
    ctx->r4 = ADD32(ctx->r29, 0XE8);
    // 0x0022A0C4: mfc1        $a2, $f21
    ctx->r6 = (int32_t)ctx->f_odd[(21 - 1) * 2];
    // 0x0022A0C8: lw          $t0, 0x150($s1)
    ctx->r8 = MEM_W(ctx->r17, 0X150);
    // 0x0022A0CC: lw          $t1, 0x154($s1)
    ctx->r9 = MEM_W(ctx->r17, 0X154);
    // 0x0022A0D0: lw          $t2, 0x158($s1)
    ctx->r10 = MEM_W(ctx->r17, 0X158);
    // 0x0022A0D4: sw          $t0, 0xF8($sp)
    MEM_W(0XF8, ctx->r29) = ctx->r8;
    // 0x0022A0D8: sw          $t1, 0xFC($sp)
    MEM_W(0XFC, ctx->r29) = ctx->r9;
    // 0x0022A0DC: sw          $t2, 0x100($sp)
    MEM_W(0X100, ctx->r29) = ctx->r10;
    // 0x0022A0E0: jal         0x0020EF60
    // 0x0022A0E4: addiu       $a1, $sp, 0xF8
    ctx->r5 = ADD32(ctx->r29, 0XF8);
    func_0020EF60(rdram, ctx);
        goto after_24;
    // 0x0022A0E4: addiu       $a1, $sp, 0xF8
    ctx->r5 = ADD32(ctx->r29, 0XF8);
    after_24:
    // 0x0022A0E8: addiu       $s0, $s1, 0x18
    ctx->r16 = ADD32(ctx->r17, 0X18);
    // 0x0022A0EC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0022A0F0: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x0022A0F4: jal         0x0020EEF8
    // 0x0022A0F8: addiu       $a2, $sp, 0xE8
    ctx->r6 = ADD32(ctx->r29, 0XE8);
    func_0020EEF8(rdram, ctx);
        goto after_25;
    // 0x0022A0F8: addiu       $a2, $sp, 0xE8
    ctx->r6 = ADD32(ctx->r29, 0XE8);
    after_25:
    // 0x0022A0FC: lwc1        $f1, 0x18($s1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r17, 0X18);
    // 0x0022A100: mul.s       $f1, $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f1.fl);
    // 0x0022A104: lwc1        $f0, 0x1C($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X1C);
    // 0x0022A108: mul.s       $f0, $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x0022A10C: lwc1        $f12, 0x20($s1)
    ctx->f12.u32l = MEM_W(ctx->r17, 0X20);
    // 0x0022A110: mul.s       $f12, $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x0022A114: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x0022A118: jal         0x00298470
    // 0x0022A11C: add.s       $f12, $f1, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = ctx->f1.fl + ctx->f12.fl;
    func_00298470(rdram, ctx);
        goto after_26;
    // 0x0022A11C: add.s       $f12, $f1, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = ctx->f1.fl + ctx->f12.fl;
    after_26:
    // 0x0022A120: lw          $v0, 0xF8($s1)
    ctx->r2 = MEM_W(ctx->r17, 0XF8);
    // 0x0022A124: lw          $v0, 0x30($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X30);
    // 0x0022A128: lhu         $a0, 0x12($v0)
    ctx->r4 = MEM_HU(ctx->r2, 0X12);
    // 0x0022A12C: jal         0x0026D210
    // 0x0022A130: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    func_0026D210(rdram, ctx);
        goto after_27;
    // 0x0022A130: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    after_27:
    // 0x0022A134: c.lt.s      $f22, $f21
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 21);
    c1cs = ctx->f22.fl < ctx->f21.fl;
    // 0x0022A138: nop

    // 0x0022A13C: bc1f        L_0022A150
    if (!c1cs) {
        // 0x0022A140: nop
    
            goto L_0022A150;
    }
    // 0x0022A140: nop

    // 0x0022A144: c.lt.s      $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f0.fl < ctx->f20.fl;
    // 0x0022A148: j           L_0022A154
    // 0x0022A14C: nop

        goto L_0022A154;
    // 0x0022A14C: nop

L_0022A150:
    // 0x0022A150: c.lt.s      $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f20.fl < ctx->f0.fl;
L_0022A154:
    // 0x0022A154: nop

    // 0x0022A158: bc1f        L_0022A16C
    if (!c1cs) {
        // 0x0022A15C: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_0022A16C;
    }
    // 0x0022A15C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0022A160: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x0022A164: jal         0x0020EF60
    // 0x0022A168: addiu       $a1, $sp, 0xF8
    ctx->r5 = ADD32(ctx->r29, 0XF8);
    func_0020EF60(rdram, ctx);
        goto after_28;
    // 0x0022A168: addiu       $a1, $sp, 0xF8
    ctx->r5 = ADD32(ctx->r29, 0XF8);
    after_28:
L_0022A16C:
    // 0x0022A16C: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    // 0x0022A170: jal         0x00229618
    // 0x0022A174: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_00229618(rdram, ctx);
        goto after_29;
    // 0x0022A174: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_29:
L_0022A178:
    // 0x0022A178: lw          $ra, 0x11C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X11C);
    // 0x0022A17C: lw          $s4, 0x118($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X118);
    // 0x0022A180: lw          $s3, 0x114($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X114);
    // 0x0022A184: lw          $s2, 0x110($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X110);
    // 0x0022A188: lw          $s1, 0x10C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X10C);
    // 0x0022A18C: lw          $s0, 0x108($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X108);
    // 0x0022A190: ldc1        $f22, 0x130($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X130);
    // 0x0022A194: ldc1        $f21, 0x128($sp)
    CHECK_FR(ctx, 21);
    ctx->f21.u64 = LD(ctx->r29, 0X128);
    // 0x0022A198: ldc1        $f20, 0x120($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X120);
    // 0x0022A19C: jr          $ra
    // 0x0022A1A0: addiu       $sp, $sp, 0x138
    ctx->r29 = ADD32(ctx->r29, 0X138);
    return;
    // 0x0022A1A0: addiu       $sp, $sp, 0x138
    ctx->r29 = ADD32(ctx->r29, 0X138);
;}
RECOMP_FUNC void func_00293D90(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00293D90: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x00293D94: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x00293D98: lw          $a2, 0x40($a0)
    ctx->r6 = MEM_W(ctx->r4, 0X40);
    // 0x00293D9C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x00293DA0: sh          $v0, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r2;
    // 0x00293DA4: sb          $a1, 0x18($sp)
    MEM_B(0X18, ctx->r29) = ctx->r5;
    // 0x00293DA8: lw          $v1, 0x3C($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X3C);
    // 0x00293DAC: addiu       $a0, $a0, 0x14
    ctx->r4 = ADD32(ctx->r4, 0X14);
    // 0x00293DB0: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x00293DB4: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x00293DB8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x00293DBC: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x00293DC0: addu        $a2, $a2, $v0
    ctx->r6 = ADD32(ctx->r6, ctx->r2);
    // 0x00293DC4: sw          $a2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r6;
    // 0x00293DC8: jal         0x00291034
    // 0x00293DCC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_00291034(rdram, ctx);
        goto after_0;
    // 0x00293DCC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x00293DD0: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x00293DD4: jr          $ra
    // 0x00293DD8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x00293DD8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_0044F47C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0044F47C: lw          $v0, 0x14($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X14);
    // 0x0044F480: lw          $v0, 0x1C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1C);
    // 0x0044F484: jr          $ra
    // 0x0044F488: nop

    return;
    // 0x0044F488: nop

;}
RECOMP_FUNC void func_0041828C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041828C: jr          $ra
    // 0x00418290: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x00418290: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void func_00258964(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00258964: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00258968: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0025896C: lwc1        $f0, 0x7290($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X7290);
    // 0x00258970: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00258974: addiu       $v0, $v0, -0x1C6C
    ctx->r2 = ADD32(ctx->r2, -0X1C6C);
    // 0x00258978: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x0025897C: sw          $v0, 0x2C($a1)
    MEM_W(0X2C, ctx->r5) = ctx->r2;
    // 0x00258980: lui         $v0, 0x25
    ctx->r2 = S32(0X25 << 16);
    // 0x00258984: addiu       $v0, $v0, 0x7D48
    ctx->r2 = ADD32(ctx->r2, 0X7D48);
    // 0x00258988: sw          $v0, 0xF0($a1)
    MEM_W(0XF0, ctx->r5) = ctx->r2;
    // 0x0025898C: lui         $v0, 0x26
    ctx->r2 = S32(0X26 << 16);
    // 0x00258990: addiu       $v0, $v0, -0x77C4
    ctx->r2 = ADD32(ctx->r2, -0X77C4);
    // 0x00258994: sw          $v0, 0xF4($a1)
    MEM_W(0XF4, ctx->r5) = ctx->r2;
    // 0x00258998: sw          $zero, 0x10C($a1)
    MEM_W(0X10C, ctx->r5) = 0;
    // 0x0025899C: sw          $zero, 0x110($a1)
    MEM_W(0X110, ctx->r5) = 0;
    // 0x002589A0: sw          $zero, 0x118($a1)
    MEM_W(0X118, ctx->r5) = 0;
    // 0x002589A4: sw          $zero, 0x120($a1)
    MEM_W(0X120, ctx->r5) = 0;
    // 0x002589A8: sw          $zero, 0x124($a1)
    MEM_W(0X124, ctx->r5) = 0;
    // 0x002589AC: sw          $zero, 0x128($a1)
    MEM_W(0X128, ctx->r5) = 0;
    // 0x002589B0: sw          $zero, 0x12C($a1)
    MEM_W(0X12C, ctx->r5) = 0;
    // 0x002589B4: sw          $zero, 0x130($a1)
    MEM_W(0X130, ctx->r5) = 0;
    // 0x002589B8: jal         0x00258754
    // 0x002589BC: swc1        $f0, 0x114($a1)
    MEM_W(0X114, ctx->r5) = ctx->f0.u32l;
    func_00258754(rdram, ctx);
        goto after_0;
    // 0x002589BC: swc1        $f0, 0x114($a1)
    MEM_W(0X114, ctx->r5) = ctx->f0.u32l;
    after_0:
    // 0x002589C0: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x002589C4: jr          $ra
    // 0x002589C8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x002589C8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00210DB4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00210DB4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x00210DB8: sdc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X20, ctx->r29);
    // 0x00210DBC: mov.s       $f20, $f12
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 12);
    ctx->f20.fl = ctx->f12.fl;
    // 0x00210DC0: addiu       $a0, $sp, 0x2C
    ctx->r4 = ADD32(ctx->r29, 0X2C);
    // 0x00210DC4: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x00210DC8: swc1        $f14, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f14.u32l;
    // 0x00210DCC: jal         0x00210EF0
    // 0x00210DD0: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    func_00210EF0(rdram, ctx);
        goto after_0;
    // 0x00210DD0: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    after_0:
    // 0x00210DD4: jal         0x00210EF0
    // 0x00210DD8: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    func_00210EF0(rdram, ctx);
        goto after_1;
    // 0x00210DD8: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    after_1:
    // 0x00210DDC: lwc1        $f4, 0x2C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x00210DE0: lwc1        $f2, 0x30($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X30);
    // 0x00210DE4: c.lt.s      $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f2.fl < ctx->f4.fl;
    // 0x00210DE8: nop

    // 0x00210DEC: bc1f        L_00210E0C
    if (!c1cs) {
        // 0x00210DF0: nop
    
            goto L_00210E0C;
    }
    // 0x00210DF0: nop

    // 0x00210DF4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00210DF8: lwc1        $f0, 0x5630($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X5630);
    // 0x00210DFC: add.s       $f3, $f2, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f3.fl = ctx->f2.fl + ctx->f0.fl;
    // 0x00210E00: sub.s       $f0, $f4, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f4.fl - ctx->f2.fl;
    // 0x00210E04: j           L_00210E20
    // 0x00210E08: sub.s       $f1, $f3, $f4
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f1.fl = ctx->f3.fl - ctx->f4.fl;
        goto L_00210E20;
    // 0x00210E08: sub.s       $f1, $f3, $f4
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f1.fl = ctx->f3.fl - ctx->f4.fl;
L_00210E0C:
    // 0x00210E0C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00210E10: lwc1        $f0, 0x5634($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X5634);
    // 0x00210E14: sub.s       $f3, $f2, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f3.fl = ctx->f2.fl - ctx->f0.fl;
    // 0x00210E18: sub.s       $f0, $f2, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f4.fl;
    // 0x00210E1C: sub.s       $f1, $f4, $f3
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f1.fl = ctx->f4.fl - ctx->f3.fl;
L_00210E20:
    // 0x00210E20: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x00210E24: nop

    // 0x00210E28: bc1tl       L_00210E30
    if (c1cs) {
        // 0x00210E2C: swc1        $f3, 0x30($sp)
        MEM_W(0X30, ctx->r29) = ctx->f_odd[(3 - 1) * 2];
            goto L_00210E30;
    }
    goto skip_0;
    // 0x00210E2C: swc1        $f3, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f_odd[(3 - 1) * 2];
    skip_0:
L_00210E30:
    // 0x00210E30: lwc1        $f0, 0x30($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X30);
    // 0x00210E34: lwc1        $f1, 0x2C($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X2C);
    // 0x00210E38: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x00210E3C: mul.s       $f0, $f20, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f20.fl, ctx->f0.fl);
    // 0x00210E40: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x00210E44: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x00210E48: jal         0x00210EF0
    // 0x00210E4C: swc1        $f1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    func_00210EF0(rdram, ctx);
        goto after_2;
    // 0x00210E4C: swc1        $f1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    after_2:
    // 0x00210E50: lwc1        $f0, 0x10($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X10);
    // 0x00210E54: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x00210E58: ldc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X20);
    // 0x00210E5C: jr          $ra
    // 0x00210E60: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x00210E60: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_00257EA0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00257EA0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x00257EA4: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x00257EA8: addu        $s3, $a0, $zero
    ctx->r19 = ADD32(ctx->r4, 0);
    // 0x00257EAC: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x00257EB0: addu        $s2, $a1, $zero
    ctx->r18 = ADD32(ctx->r5, 0);
    // 0x00257EB4: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x00257EB8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00257EBC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00257EC0: lwc1        $f1, 0x118($s2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r18, 0X118);
    // 0x00257EC4: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x00257EC8: lw          $s1, 0x1A8($s3)
    ctx->r17 = MEM_W(ctx->r19, 0X1A8);
    // 0x00257ECC: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x00257ED0: nop

    // 0x00257ED4: bc1t        L_00257FE4
    if (c1cs) {
        // 0x00257ED8: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_00257FE4;
    }
    // 0x00257ED8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x00257EDC: lh          $a1, 0x996($s1)
    ctx->r5 = MEM_H(ctx->r17, 0X996);
    // 0x00257EE0: jal         0x0024E700
    // 0x00257EE4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_0024E700(rdram, ctx);
        goto after_0;
    // 0x00257EE4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_0:
    // 0x00257EE8: bne         $v0, $zero, L_00257EF8
    if (ctx->r2 != 0) {
        // 0x00257EEC: nop
    
            goto L_00257EF8;
    }
    // 0x00257EEC: nop

L_00257EF0:
    // 0x00257EF0: j           L_00257FE4
    // 0x00257EF4: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
        goto L_00257FE4;
    // 0x00257EF4: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_00257EF8:
    // 0x00257EF8: lw          $v0, 0x518($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X518);
    // 0x00257EFC: lbu         $v1, 0x3E($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X3E);
    // 0x00257F00: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00257F04: beq         $v1, $v0, L_00257EF0
    if (ctx->r3 == ctx->r2) {
        // 0x00257F08: addiu       $v0, $zero, 0xD
        ctx->r2 = ADD32(0, 0XD);
            goto L_00257EF0;
    }
    // 0x00257F08: addiu       $v0, $zero, 0xD
    ctx->r2 = ADD32(0, 0XD);
    // 0x00257F0C: lh          $v1, 0x996($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X996);
    // 0x00257F10: beq         $v1, $v0, L_00257F20
    if (ctx->r3 == ctx->r2) {
        // 0x00257F14: addiu       $v0, $zero, 0x1D
        ctx->r2 = ADD32(0, 0X1D);
            goto L_00257F20;
    }
    // 0x00257F14: addiu       $v0, $zero, 0x1D
    ctx->r2 = ADD32(0, 0X1D);
    // 0x00257F18: bne         $v1, $v0, L_00257F38
    if (ctx->r3 != ctx->r2) {
        // 0x00257F1C: addiu       $v0, $zero, 0x17
        ctx->r2 = ADD32(0, 0X17);
            goto L_00257F38;
    }
    // 0x00257F1C: addiu       $v0, $zero, 0x17
    ctx->r2 = ADD32(0, 0X17);
L_00257F20:
    // 0x00257F20: lw          $v1, 0xB2C($s1)
    ctx->r3 = MEM_W(ctx->r17, 0XB2C);
    // 0x00257F24: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x00257F28: bne         $v1, $v0, L_00257FE4
    if (ctx->r3 != ctx->r2) {
        // 0x00257F2C: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_00257FE4;
    }
    // 0x00257F2C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x00257F30: lh          $v1, 0x996($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X996);
    // 0x00257F34: addiu       $v0, $zero, 0x17
    ctx->r2 = ADD32(0, 0X17);
L_00257F38:
    // 0x00257F38: bne         $v1, $v0, L_00257F58
    if (ctx->r3 != ctx->r2) {
        // 0x00257F3C: nop
    
            goto L_00257F58;
    }
    // 0x00257F3C: nop

    // 0x00257F40: lwc1        $f1, 0x130($s2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r18, 0X130);
    // 0x00257F44: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x00257F48: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x00257F4C: nop

    // 0x00257F50: bc1t        L_00257FE4
    if (c1cs) {
        // 0x00257F54: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_00257FE4;
    }
    // 0x00257F54: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_00257F58:
    // 0x00257F58: lw          $v0, 0x1284($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X1284);
    // 0x00257F5C: bne         $v0, $zero, L_00257FE4
    if (ctx->r2 != 0) {
        // 0x00257F60: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_00257FE4;
    }
    // 0x00257F60: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x00257F64: lh          $v1, 0x996($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X996);
    // 0x00257F68: addiu       $v0, $zero, 0x15
    ctx->r2 = ADD32(0, 0X15);
    // 0x00257F6C: bne         $v1, $v0, L_00257F98
    if (ctx->r3 != ctx->r2) {
        // 0x00257F70: addu        $a1, $v0, $zero
        ctx->r5 = ADD32(ctx->r2, 0);
            goto L_00257F98;
    }
    // 0x00257F70: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x00257F74: lw          $s0, 0x1A8($s3)
    ctx->r16 = MEM_W(ctx->r19, 0X1A8);
    // 0x00257F78: jal         0x0025398C
    // 0x00257F7C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_0025398C(rdram, ctx);
        goto after_1;
    // 0x00257F7C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x00257F80: lh          $v0, 0x0($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X0);
    // 0x00257F84: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x00257F88: addu        $v0, $v0, $s0
    ctx->r2 = ADD32(ctx->r2, ctx->r16);
    // 0x00257F8C: lh          $v0, 0x934($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X934);
    // 0x00257F90: beq         $v0, $zero, L_00257FE4
    if (ctx->r2 == 0) {
        // 0x00257F94: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_00257FE4;
    }
    // 0x00257F94: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_00257F98:
    // 0x00257F98: lw          $v0, 0xA68($s1)
    ctx->r2 = MEM_W(ctx->r17, 0XA68);
    // 0x00257F9C: andi        $v0, $v0, 0x10
    ctx->r2 = ctx->r2 & 0X10;
    // 0x00257FA0: beq         $v0, $zero, L_00257FB4
    if (ctx->r2 == 0) {
        // 0x00257FA4: addu        $v1, $zero, $zero
        ctx->r3 = ADD32(0, 0);
            goto L_00257FB4;
    }
    // 0x00257FA4: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
    // 0x00257FA8: lh          $v0, 0x996($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X996);
    // 0x00257FAC: xori        $v0, $v0, 0x13
    ctx->r2 = ctx->r2 ^ 0X13;
    // 0x00257FB0: sltiu       $v1, $v0, 0x1
    ctx->r3 = ctx->r2 < 0X1 ? 1 : 0;
L_00257FB4:
    // 0x00257FB4: lw          $v0, 0xA64($s1)
    ctx->r2 = MEM_W(ctx->r17, 0XA64);
    // 0x00257FB8: andi        $v0, $v0, 0x2000
    ctx->r2 = ctx->r2 & 0X2000;
    // 0x00257FBC: bne         $v0, $zero, L_00257FCC
    if (ctx->r2 != 0) {
        // 0x00257FC0: addiu       $a2, $zero, 0x4
        ctx->r6 = ADD32(0, 0X4);
            goto L_00257FCC;
    }
    // 0x00257FC0: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x00257FC4: beq         $v1, $zero, L_00257EF0
    if (ctx->r3 == 0) {
        // 0x00257FC8: addiu       $a2, $zero, 0x5
        ctx->r6 = ADD32(0, 0X5);
            goto L_00257EF0;
    }
    // 0x00257FC8: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
L_00257FCC:
    // 0x00257FCC: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x00257FD0: jal         0x00243414
    // 0x00257FD4: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    func_00243414(rdram, ctx);
        goto after_2;
    // 0x00257FD4: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    after_2:
    // 0x00257FD8: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x00257FDC: sb          $v0, 0x35($s2)
    MEM_B(0X35, ctx->r18) = ctx->r2;
    // 0x00257FE0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_00257FE4:
    // 0x00257FE4: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x00257FE8: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x00257FEC: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x00257FF0: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00257FF4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00257FF8: jr          $ra
    // 0x00257FFC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x00257FFC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_002A2104(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002A2104: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x002A2108: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x002A210C: jal         0x002A12F0
    // 0x002A2110: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    func_002A12F0(rdram, ctx);
        goto after_0;
    // 0x002A2110: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_0:
    // 0x002A2114: jal         0x002A3100
    // 0x002A2118: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    func_002A3100(rdram, ctx);
        goto after_1;
    // 0x002A2118: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    after_1:
    // 0x002A211C: lui         $a0, 0xB1FF
    ctx->r4 = S32(0XB1FF << 16);
    // 0x002A2120: ori         $a0, $a0, 0xFFF0
    ctx->r4 = ctx->r4 | 0XFFF0;
    // 0x002A2124: jal         0x002A1350
    // 0x002A2128: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_002A1350(rdram, ctx);
        goto after_2;
    // 0x002A2128: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_2:
    // 0x002A212C: lui         $a0, 0xB1FF
    ctx->r4 = S32(0XB1FF << 16);
    // 0x002A2130: ori         $a0, $a0, 0xFFFC
    ctx->r4 = ctx->r4 | 0XFFFC;
    // 0x002A2134: jal         0x002A1350
    // 0x002A2138: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_002A1350(rdram, ctx);
        goto after_3;
    // 0x002A2138: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_3:
    // 0x002A213C: lui         $a0, 0x3F
    ctx->r4 = S32(0X3F << 16);
    // 0x002A2140: ori         $a0, $a0, 0xFFFF
    ctx->r4 = ctx->r4 | 0XFFFF;
    // 0x002A2144: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x002A2148: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x002A214C: sb          $v0, -0x7780($v1)
    MEM_B(-0X7780, ctx->r3) = ctx->r2;
    // 0x002A2150: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x002A2154: lui         $a3, 0x8000
    ctx->r7 = S32(0X8000 << 16);
    // 0x002A2158: lw          $a3, 0x318($a3)
    ctx->r7 = MEM_W(ctx->r7, 0X318);
    // 0x002A215C: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x002A2160: sltu        $a0, $a0, $a3
    ctx->r4 = ctx->r4 < ctx->r7 ? 1 : 0;
    // 0x002A2164: beq         $a0, $zero, L_002A21B0
    if (ctx->r4 == 0) {
        // 0x002A2168: sb          $v0, -0x777E($v1)
        MEM_B(-0X777E, ctx->r3) = ctx->r2;
            goto L_002A21B0;
    }
    // 0x002A2168: sb          $v0, -0x777E($v1)
    MEM_B(-0X777E, ctx->r3) = ctx->r2;
    // 0x002A216C: lui         $v0, 0x1
    ctx->r2 = S32(0X1 << 16);
    // 0x002A2170: ori         $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 | 0XFFFF;
    // 0x002A2174: and         $v0, $a3, $v0
    ctx->r2 = ctx->r7 & ctx->r2;
    // 0x002A2178: bne         $v0, $zero, L_002A21B4
    if (ctx->r2 != 0) {
        // 0x002A217C: lui         $v0, 0x800B
        ctx->r2 = S32(0X800B << 16);
            goto L_002A21B4;
    }
    // 0x002A217C: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x002A2180: lui         $v0, 0x200
    ctx->r2 = S32(0X200 << 16);
    // 0x002A2184: sltu        $v0, $v0, $a3
    ctx->r2 = ctx->r2 < ctx->r7 ? 1 : 0;
    // 0x002A2188: bne         $v0, $zero, L_002A21B4
    if (ctx->r2 != 0) {
        // 0x002A218C: lui         $v0, 0x800B
        ctx->r2 = S32(0X800B << 16);
            goto L_002A21B4;
    }
    // 0x002A218C: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x002A2190: addiu       $a3, $a3, -0x1
    ctx->r7 = ADD32(ctx->r7, -0X1);
    // 0x002A2194: addiu       $v0, $v0, 0x7600
    ctx->r2 = ADD32(ctx->r2, 0X7600);
    // 0x002A2198: lui         $v1, 0x8000
    ctx->r3 = S32(0X8000 << 16);
    // 0x002A219C: addu        $v1, $a3, $v1
    ctx->r3 = ADD32(ctx->r7, ctx->r3);
    // 0x002A21A0: sw          $v1, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r3;
    // 0x002A21A4: lui         $v1, 0xA000
    ctx->r3 = S32(0XA000 << 16);
    // 0x002A21A8: addu        $v1, $a3, $v1
    ctx->r3 = ADD32(ctx->r7, ctx->r3);
    // 0x002A21AC: sw          $v1, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->r3;
L_002A21B0:
    // 0x002A21B0: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
L_002A21B4:
    // 0x002A21B4: addiu       $a0, $v0, 0x7600
    ctx->r4 = ADD32(ctx->r2, 0X7600);
    // 0x002A21B8: lw          $v0, 0x7600($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X7600);
    // 0x002A21BC: bltz        $v0, L_002A21D8
    if (SIGNED(ctx->r2) < 0) {
        // 0x002A21C0: lui         $a2, 0x8000
        ctx->r6 = S32(0X8000 << 16);
            goto L_002A21D8;
    }
    // 0x002A21C0: lui         $a2, 0x8000
    ctx->r6 = S32(0X8000 << 16);
    // 0x002A21C4: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
L_002A21C8:
    // 0x002A21C8: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x002A21CC: sltu        $v0, $v0, $a2
    ctx->r2 = ctx->r2 < ctx->r6 ? 1 : 0;
    // 0x002A21D0: bnel        $v0, $zero, L_002A21C8
    if (ctx->r2 != 0) {
        // 0x002A21D4: addiu       $a0, $a0, 0x8
        ctx->r4 = ADD32(ctx->r4, 0X8);
            goto L_002A21C8;
    }
    goto skip_0;
    // 0x002A21D4: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    skip_0:
L_002A21D8:
    // 0x002A21D8: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x002A21DC: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x002A21E0: addiu       $a1, $v0, -0x7ED0
    ctx->r5 = ADD32(ctx->r2, -0X7ED0);
L_002A21E4:
    // 0x002A21E4: sw          $a2, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r6;
    // 0x002A21E8: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x002A21EC: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x002A21F0: addiu       $a3, $a3, 0x1
    ctx->r7 = ADD32(ctx->r7, 0X1);
    // 0x002A21F4: sw          $v0, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r2;
    // 0x002A21F8: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x002A21FC: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x002A2200: addiu       $a2, $v0, 0x1
    ctx->r6 = ADD32(ctx->r2, 0X1);
    // 0x002A2204: sw          $v1, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->r3;
    // 0x002A2208: bne         $a2, $zero, L_002A21E4
    if (ctx->r6 != 0) {
        // 0x002A220C: addiu       $a1, $a1, 0xC
        ctx->r5 = ADD32(ctx->r5, 0XC);
            goto L_002A21E4;
    }
    // 0x002A220C: addiu       $a1, $a1, 0xC
    ctx->r5 = ADD32(ctx->r5, 0XC);
    // 0x002A2210: sltiu       $v0, $a3, 0x10
    ctx->r2 = ctx->r7 < 0X10 ? 1 : 0;
    // 0x002A2214: beq         $v0, $zero, L_002A224C
    if (ctx->r2 == 0) {
        // 0x002A2218: addiu       $a0, $zero, -0x1
        ctx->r4 = ADD32(0, -0X1);
            goto L_002A224C;
    }
    // 0x002A2218: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x002A221C: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x002A2220: addiu       $v1, $v1, -0x7ED0
    ctx->r3 = ADD32(ctx->r3, -0X7ED0);
    // 0x002A2224: sll         $v0, $a3, 1
    ctx->r2 = S32(ctx->r7 << 1);
    // 0x002A2228: addu        $v0, $v0, $a3
    ctx->r2 = ADD32(ctx->r2, ctx->r7);
    // 0x002A222C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x002A2230: addu        $v1, $v0, $v1
    ctx->r3 = ADD32(ctx->r2, ctx->r3);
L_002A2234:
    // 0x002A2234: sw          $a0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r4;
    // 0x002A2238: sw          $zero, 0x8($v1)
    MEM_W(0X8, ctx->r3) = 0;
    // 0x002A223C: addiu       $a3, $a3, 0x1
    ctx->r7 = ADD32(ctx->r7, 0X1);
    // 0x002A2240: sltiu       $v0, $a3, 0x10
    ctx->r2 = ctx->r7 < 0X10 ? 1 : 0;
    // 0x002A2244: bne         $v0, $zero, L_002A2234
    if (ctx->r2 != 0) {
        // 0x002A2248: addiu       $v1, $v1, 0xC
        ctx->r3 = ADD32(ctx->r3, 0XC);
            goto L_002A2234;
    }
    // 0x002A2248: addiu       $v1, $v1, 0xC
    ctx->r3 = ADD32(ctx->r3, 0XC);
L_002A224C:
    // 0x002A224C: jal         0x002A1324
    // 0x002A2250: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_002A1324(rdram, ctx);
        goto after_4;
    // 0x002A2250: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
    // 0x002A2254: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x002A2258: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x002A225C: jr          $ra
    // 0x002A2260: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x002A2260: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0040DBC0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0040DBC0: jr          $ra
    // 0x0040DBC4: nop

    return;
    // 0x0040DBC4: nop

;}
RECOMP_FUNC void func_0025EF48(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0025EF48: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0025EF4C: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x0025EF50: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x0025EF54: jal         0x00412314
    // 0x0025EF58: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_00412314(rdram, ctx);
        goto after_0;
    // 0x0025EF58: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_0:
    // 0x0025EF5C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x0025EF60: jr          $ra
    // 0x0025EF64: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0025EF64: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0027421C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0027421C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x00274220: sw          $s6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r22;
    // 0x00274224: addu        $s6, $a1, $zero
    ctx->r22 = ADD32(ctx->r5, 0);
    // 0x00274228: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x0027422C: addiu       $s3, $a0, 0x4
    ctx->r19 = ADD32(ctx->r4, 0X4);
    // 0x00274230: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x00274234: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    // 0x00274238: sw          $s5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r21;
    // 0x0027423C: addiu       $s5, $zero, 0x1
    ctx->r21 = ADD32(0, 0X1);
    // 0x00274240: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x00274244: addiu       $s4, $zero, -0x1
    ctx->r20 = ADD32(0, -0X1);
    // 0x00274248: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0027424C: addiu       $s0, $a0, 0x8
    ctx->r16 = ADD32(ctx->r4, 0X8);
    // 0x00274250: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x00274254: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
L_00274258:
    // 0x00274258: lw          $v0, 0xB0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XB0);
    // 0x0027425C: bnel        $v0, $s6, L_002742BC
    if (ctx->r2 != ctx->r22) {
        // 0x00274260: addiu       $s0, $s0, 0xCC
        ctx->r16 = ADD32(ctx->r16, 0XCC);
            goto L_002742BC;
    }
    goto skip_0;
    // 0x00274260: addiu       $s0, $s0, 0xCC
    ctx->r16 = ADD32(ctx->r16, 0XCC);
    skip_0:
    // 0x00274264: lw          $a0, 0xAC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XAC);
    // 0x00274268: lw          $v1, 0xC($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XC);
    // 0x0027426C: sw          $s5, 0xA8($s0)
    MEM_W(0XA8, ctx->r16) = ctx->r21;
    // 0x00274270: sw          $zero, 0x4C($s0)
    MEM_W(0X4C, ctx->r16) = 0;
    // 0x00274274: lw          $v0, 0x104($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X104);
    // 0x00274278: beql        $v1, $v0, L_002742BC
    if (ctx->r3 == ctx->r2) {
        // 0x0027427C: addiu       $s0, $s0, 0xCC
        ctx->r16 = ADD32(ctx->r16, 0XCC);
            goto L_002742BC;
    }
    goto skip_1;
    // 0x0027427C: addiu       $s0, $s0, 0xCC
    ctx->r16 = ADD32(ctx->r16, 0XCC);
    skip_1:
    // 0x00274280: lw          $v0, 0x0($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X0);
    // 0x00274284: addiu       $s1, $a0, 0x84
    ctx->r17 = ADD32(ctx->r4, 0X84);
    // 0x00274288: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x0027428C: addu        $v0, $a0, $v0
    ctx->r2 = ADD32(ctx->r4, ctx->r2);
    // 0x00274290: lh          $a1, 0xDC($v0)
    ctx->r5 = MEM_H(ctx->r2, 0XDC);
    // 0x00274294: jal         0x00293E60
    // 0x00274298: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_00293E60(rdram, ctx);
        goto after_0;
    // 0x00274298: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_0:
    // 0x0027429C: jal         0x00293580
    // 0x002742A0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_00293580(rdram, ctx);
        goto after_1;
    // 0x002742A0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_1:
    // 0x002742A4: beql        $v0, $zero, L_002742B8
    if (ctx->r2 == 0) {
        // 0x002742A8: sw          $s4, 0x0($s0)
        MEM_W(0X0, ctx->r16) = ctx->r20;
            goto L_002742B8;
    }
    goto skip_2;
    // 0x002742A8: sw          $s4, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r20;
    skip_2:
    // 0x002742AC: jal         0x00293EC0
    // 0x002742B0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_00293EC0(rdram, ctx);
        goto after_2;
    // 0x002742B0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_2:
    // 0x002742B4: sw          $s4, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r20;
L_002742B8:
    // 0x002742B8: addiu       $s0, $s0, 0xCC
    ctx->r16 = ADD32(ctx->r16, 0XCC);
L_002742BC:
    // 0x002742BC: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x002742C0: slti        $v0, $s2, 0x11
    ctx->r2 = SIGNED(ctx->r18) < 0X11 ? 1 : 0;
    // 0x002742C4: bne         $v0, $zero, L_00274258
    if (ctx->r2 != 0) {
        // 0x002742C8: addiu       $s3, $s3, 0xCC
        ctx->r19 = ADD32(ctx->r19, 0XCC);
            goto L_00274258;
    }
    // 0x002742C8: addiu       $s3, $s3, 0xCC
    ctx->r19 = ADD32(ctx->r19, 0XCC);
    // 0x002742CC: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x002742D0: lw          $s6, 0x28($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X28);
    // 0x002742D4: lw          $s5, 0x24($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X24);
    // 0x002742D8: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x002742DC: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x002742E0: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x002742E4: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x002742E8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x002742EC: jr          $ra
    // 0x002742F0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x002742F0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_0028EE3C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0028EE3C: jr          $ra
    // turok2: restored delay slot: a stray ELF symbol at 0x0028EE40 sits on this
    // jump's delay slot, so the recompiler stopped at the jump and
    // dropped the instruction. On the hardware it runs before the
    // jump takes effect.
    // 0x0028EE40: lw $r24, 0X10($r29)
    ctx->r24 = MEM_W(ctx->r29, 0X10);
    return;
;}
RECOMP_FUNC void func_0025E888(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0025E888: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0025E88C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0025E890: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x0025E894: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x0025E898: lui         $v1, 0x2
    ctx->r3 = S32(0X2 << 16);
    // 0x0025E89C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x0025E8A0: sw          $zero, 0x4($a1)
    MEM_W(0X4, ctx->r5) = 0;
    // 0x0025E8A4: sb          $v0, 0x35($a1)
    MEM_B(0X35, ctx->r5) = ctx->r2;
    // 0x0025E8A8: lw          $v0, 0xD4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XD4);
    // 0x0025E8AC: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x0025E8B0: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x0025E8B4: sw          $v0, 0xD4($s0)
    MEM_W(0XD4, ctx->r16) = ctx->r2;
    // 0x0025E8B8: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x0025E8BC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0025E8C0: beq         $a0, $v0, L_0025E8D0
    if (ctx->r4 == ctx->r2) {
        // 0x0025E8C4: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_0025E8D0;
    }
    // 0x0025E8C4: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x0025E8C8: bne         $a0, $v0, L_0025E8F0
    if (ctx->r4 != ctx->r2) {
        // 0x0025E8CC: nop
    
            goto L_0025E8F0;
    }
    // 0x0025E8CC: nop

L_0025E8D0:
    // 0x0025E8D0: lbu         $v0, 0x34($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X34);
    // 0x0025E8D4: addiu       $v0, $v0, -0x35
    ctx->r2 = ADD32(ctx->r2, -0X35);
    // 0x0025E8D8: sltiu       $v0, $v0, 0x7
    ctx->r2 = ctx->r2 < 0X7 ? 1 : 0;
    // 0x0025E8DC: beq         $v0, $zero, L_0025E8F0
    if (ctx->r2 == 0) {
        // 0x0025E8E0: nop
    
            goto L_0025E8F0;
    }
    // 0x0025E8E0: nop

    // 0x0025E8E4: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x0025E8E8: ori         $v0, $v0, 0x20
    ctx->r2 = ctx->r2 | 0X20;
    // 0x0025E8EC: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
L_0025E8F0:
    // 0x0025E8F0: lw          $v0, 0xD4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XD4);
    // 0x0025E8F4: lui         $v1, 0x8
    ctx->r3 = S32(0X8 << 16);
    // 0x0025E8F8: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x0025E8FC: lw          $v1, 0x14($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X14);
    // 0x0025E900: bne         $v0, $zero, L_0025E93C
    if (ctx->r2 != 0) {
        // 0x0025E904: nop
    
            goto L_0025E93C;
    }
    // 0x0025E904: nop

    // 0x0025E908: lw          $v0, 0x14($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X14);
    // 0x0025E90C: andi        $v0, $v0, 0x20
    ctx->r2 = ctx->r2 & 0X20;
    // 0x0025E910: bne         $v0, $zero, L_0025E930
    if (ctx->r2 != 0) {
        // 0x0025E914: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_0025E930;
    }
    // 0x0025E914: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0025E918: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x0025E91C: addiu       $a0, $a0, 0x7078
    ctx->r4 = ADD32(ctx->r4, 0X7078);
    // 0x0025E920: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x0025E924: jal         0x00220260
    // 0x0025E928: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_00220260(rdram, ctx);
        goto after_0;
    // 0x0025E928: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_0:
    // 0x0025E92C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_0025E930:
    // 0x0025E930: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x0025E934: jal         0x0026E110
    // 0x0025E938: addu        $a2, $a0, $zero
    ctx->r6 = ADD32(ctx->r4, 0);
    func_0026E110(rdram, ctx);
        goto after_1;
    // 0x0025E938: addu        $a2, $a0, $zero
    ctx->r6 = ADD32(ctx->r4, 0);
    after_1:
L_0025E93C:
    // 0x0025E93C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x0025E940: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0025E944: jr          $ra
    // 0x0025E948: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0025E948: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0021ECA0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0021ECA0: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x0021ECA4: lw          $v1, 0x6D1C($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X6D1C);
    // 0x0021ECA8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0021ECAC: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x0021ECB0: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x0021ECB4: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x0021ECB8: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x0021ECBC: addu        $v0, $a0, $v0
    ctx->r2 = ADD32(ctx->r4, ctx->r2);
    // 0x0021ECC0: lw          $t0, 0x0($a3)
    ctx->r8 = MEM_W(ctx->r7, 0X0);
    // 0x0021ECC4: lw          $t1, 0x4($a3)
    ctx->r9 = MEM_W(ctx->r7, 0X4);
    // 0x0021ECC8: lw          $t2, 0x8($a3)
    ctx->r10 = MEM_W(ctx->r7, 0X8);
    // 0x0021ECCC: lw          $t3, 0xC($a3)
    ctx->r11 = MEM_W(ctx->r7, 0XC);
    // 0x0021ECD0: sw          $t0, 0x110($v0)
    MEM_W(0X110, ctx->r2) = ctx->r8;
    // 0x0021ECD4: sw          $t1, 0x114($v0)
    MEM_W(0X114, ctx->r2) = ctx->r9;
    // 0x0021ECD8: sw          $t2, 0x118($v0)
    MEM_W(0X118, ctx->r2) = ctx->r10;
    // 0x0021ECDC: sw          $t3, 0x11C($v0)
    MEM_W(0X11C, ctx->r2) = ctx->r11;
    // 0x0021ECE0: lw          $t0, 0x10($a3)
    ctx->r8 = MEM_W(ctx->r7, 0X10);
    // 0x0021ECE4: lw          $t1, 0x14($a3)
    ctx->r9 = MEM_W(ctx->r7, 0X14);
    // 0x0021ECE8: sw          $t0, 0x120($v0)
    MEM_W(0X120, ctx->r2) = ctx->r8;
    // 0x0021ECEC: sw          $t1, 0x124($v0)
    MEM_W(0X124, ctx->r2) = ctx->r9;
    // 0x0021ECF0: jal         0x0021D7BC
    // 0x0021ECF4: nop

    func_0021D7BC(rdram, ctx);
        goto after_0;
    // 0x0021ECF4: nop

    after_0:
    // 0x0021ECF8: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x0021ECFC: jr          $ra
    // 0x0021ED00: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0021ED00: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0043E288(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_00405338:
    // 0x0043E288: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
L_004053AC:
    // 0x0043E28C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0043E290: lui         $s0, 0x8013
    ctx->r16 = S32(0X8013 << 16);
    // 0x0043E294: addiu       $s0, $s0, -0x5E0
    ctx->r16 = ADD32(ctx->r16, -0X5E0);
    // 0x0043E298: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x0043E29C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x0043E2A0: sdc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X20, ctx->r29);
    // 0x0043E2A4: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x0043E2A8: beq         $v0, $zero, L_0043E3AC
    if (ctx->r2 == 0) {
        // 0x0043E2AC: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_0043E3AC;
    }
    // 0x0043E2AC: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x0043E2B0: lw          $v1, 0x4($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X4);
    // 0x0043E2B4: beql        $v1, $v0, L_0043E338
    if (ctx->r3 == ctx->r2) {
        // 0x0043E2B8: sw          $zero, -0x4($s0)
        MEM_W(-0X4, ctx->r16) = 0;
            goto L_0043E338;
    }
    goto skip_0;
    // 0x0043E2B8: sw          $zero, -0x4($s0)
    MEM_W(-0X4, ctx->r16) = 0;
    skip_0:
    // 0x0043E2BC: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x0043E2C0: lw          $v1, -0x5DC($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X5DC);
    // 0x0043E2C4: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x0043E2C8: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x0043E2CC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x0043E2D0: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x0043E2D4: lw          $v1, -0x5E0($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X5E0);
    // 0x0043E2D8: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x0043E2DC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x0043E2E0: lwc1        $f14, 0x10($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X10);
    // 0x0043E2E4: jal         0x002119FC
    // 0x0043E2E8: nop

    func_002119FC(rdram, ctx);
        goto after_0;
    // 0x0043E2E8: nop

    after_0:
    // 0x0043E2EC: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x0043E2F0: lw          $v1, -0x5DC($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X5DC);
    // 0x0043E2F4: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0043E2F8: lwc1        $f1, 0x43C($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X43C);
    // 0x0043E2FC: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x0043E300: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x0043E304: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0043E308: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x0043E30C: lw          $v1, -0x5E0($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X5E0);
    // 0x0043E310: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x0043E314: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x0043E318: lwc1        $f1, 0xC($v0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r2, 0XC);
    // 0x0043E31C: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x0043E320: j           L_00405338
    // 0x0043E324: swc1        $f1, -0x4($s0)
    MEM_W(-0X4, ctx->r16) = ctx->f_odd[(1 - 1) * 2];
    entry_00405338(rdram, ctx);
    return;
    // 0x0043E324: swc1        $f1, -0x4($s0)
    MEM_W(-0X4, ctx->r16) = ctx->f_odd[(1 - 1) * 2];
L_0043E328:
    // 0x0043E328: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x0043E32C: sw          $v0, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r2;
    // 0x0043E330: j           L_004053AC
    // 0x0043E334: sw          $zero, -0x4($s0)
    MEM_W(-0X4, ctx->r16) = 0;
    entry_004053AC(rdram, ctx);
    return;
    // 0x0043E334: sw          $zero, -0x4($s0)
    MEM_W(-0X4, ctx->r16) = 0;
L_0043E338:
    // 0x0043E338: lui         $s0, 0x8013
    ctx->r16 = S32(0X8013 << 16);
    // 0x0043E33C: addiu       $s0, $s0, -0x5DC
    ctx->r16 = ADD32(ctx->r16, -0X5DC);
    // 0x0043E340: addiu       $s1, $zero, 0x4
    ctx->r17 = ADD32(0, 0X4);
L_0043E344:
    // 0x0043E344: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x0043E348: addiu       $a0, $v0, 0x1
    ctx->r4 = ADD32(ctx->r2, 0X1);
    // 0x0043E34C: sw          $a0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r4;
    // 0x0043E350: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x0043E354: lw          $v1, -0x5DC($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X5DC);
    // 0x0043E358: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x0043E35C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x0043E360: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x0043E364: lw          $v1, -0x5E0($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X5E0);
    // 0x0043E368: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x0043E36C: addu        $v1, $v0, $v1
    ctx->r3 = ADD32(ctx->r2, ctx->r3);
    // 0x0043E370: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x0043E374: beq         $v0, $s1, L_0043E328
    if (ctx->r2 == ctx->r17) {
        // 0x0043E378: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_0043E328;
    }
    // 0x0043E378: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x0043E37C: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x0043E380: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0043E384: lwc1        $f14, 0x440($at)
    ctx->f14.u32l = MEM_W(ctx->r1, 0X440);
    // 0x0043E388: sw          $a0, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r4;
    // 0x0043E38C: lwc1        $f20, 0x8($v1)
    ctx->f20.u32l = MEM_W(ctx->r3, 0X8);
    // 0x0043E390: cvt.s.w     $f20, $f20
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    ctx->f20.fl = CVT_S_W(ctx->f20.u32l);
    // 0x0043E394: jal         0x002119FC
    // 0x0043E398: nop

    func_002119FC(rdram, ctx);
        goto after_1;
    // 0x0043E398: nop

    after_1:
    // 0x0043E39C: c.le.s      $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f20.fl <= ctx->f0.fl;
    // 0x0043E3A0: nop

    // 0x0043E3A4: bc1t        L_0043E344
    if (c1cs) {
        // 0x0043E3A8: nop
    
            goto L_0043E344;
    }
    // 0x0043E3A8: nop

L_0043E3AC:
    // 0x0043E3AC: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x0043E3B0: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x0043E3B4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0043E3B8: ldc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X20);
    // 0x0043E3BC: jr          $ra
    // 0x0043E3C0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x0043E3C0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_00446D04(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00446D04: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00446D08: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x00446D0C: lb          $v0, 0xC7($a1)
    ctx->r2 = MEM_B(ctx->r5, 0XC7);
    // 0x00446D10: slti        $v0, $v0, 0x7
    ctx->r2 = SIGNED(ctx->r2) < 0X7 ? 1 : 0;
    // 0x00446D14: bne         $v0, $zero, L_00446D24
    if (ctx->r2 != 0) {
        // 0x00446D18: nop
    
            goto L_00446D24;
    }
    // 0x00446D18: nop

    // 0x00446D1C: jal         0x00243414
    // 0x00446D20: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
    func_00243414(rdram, ctx);
        goto after_0;
    // 0x00446D20: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
    after_0:
L_00446D24:
    // 0x00446D24: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x00446D28: jr          $ra
    // 0x00446D2C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00446D2C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00406FE4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00406FE4: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x00406FE8: sw          $s1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r17;
    // 0x00406FEC: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x00406FF0: sw          $s0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r16;
    // 0x00406FF4: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x00406FF8: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x00406FFC: addiu       $a0, $a0, 0x7078
    ctx->r4 = ADD32(ctx->r4, 0X7078);
    // 0x00407000: addiu       $a1, $sp, 0x58
    ctx->r5 = ADD32(ctx->r29, 0X58);
    // 0x00407004: sw          $ra, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r31;
    // 0x00407008: sw          $a2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r6;
    // 0x0040700C: jal         0x00220A1C
    // 0x00407010: sw          $a3, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r7;
    func_00220A1C(rdram, ctx);
        goto after_0;
    // 0x00407010: sw          $a3, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r7;
    after_0:
    // 0x00407014: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x00407018: addiu       $a0, $a0, 0x7590
    ctx->r4 = ADD32(ctx->r4, 0X7590);
    // 0x0040701C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00407020: lwc1        $f0, 0x504($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X504);
    // 0x00407024: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x00407028: sw          $zero, 0x30($sp)
    MEM_W(0X30, ctx->r29) = 0;
    // 0x0040702C: sw          $zero, 0x38($sp)
    MEM_W(0X38, ctx->r29) = 0;
    // 0x00407030: swc1        $f0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f0.u32l;
    // 0x00407034: mtc1        $s0, $f0
    ctx->f0.u32l = ctx->r16;
    // 0x00407038: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x0040703C: lw          $v1, 0x58($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X58);
    // 0x00407040: lw          $t0, 0x5C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X5C);
    // 0x00407044: lw          $t1, 0x60($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X60);
    // 0x00407048: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    // 0x0040704C: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    // 0x00407050: sw          $t1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r9;
    // 0x00407054: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x00407058: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x0040705C: lw          $v1, 0x34($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X34);
    // 0x00407060: lw          $t0, 0x38($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X38);
    // 0x00407064: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    // 0x00407068: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x0040706C: lw          $a3, 0x30($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X30);
    // 0x00407070: jal         0x00227240
    // 0x00407074: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    func_00227240(rdram, ctx);
        goto after_1;
    // 0x00407074: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    after_1:
    // 0x00407078: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x0040707C: beq         $a0, $zero, L_004070A0
    if (ctx->r4 == 0) {
        // 0x00407080: nop
    
            goto L_004070A0;
    }
    // 0x00407080: nop

    // 0x00407084: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x00407088: lw          $v0, 0x60($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X60);
    // 0x0040708C: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x00407090: lw          $a2, 0x58($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X58);
    // 0x00407094: lw          $a3, 0x5C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X5C);
    // 0x00407098: jal         0x00246690
    // 0x0040709C: addiu       $a1, $zero, 0x11D
    ctx->r5 = ADD32(0, 0X11D);
    func_00246690(rdram, ctx);
        goto after_2;
    // 0x0040709C: addiu       $a1, $zero, 0x11D
    ctx->r5 = ADD32(0, 0X11D);
    after_2:
L_004070A0:
    // 0x004070A0: lw          $ra, 0x48($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X48);
    // 0x004070A4: lw          $s1, 0x44($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X44);
    // 0x004070A8: lw          $s0, 0x40($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X40);
    // 0x004070AC: jr          $ra
    // 0x004070B0: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x004070B0: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_00232F30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00232F30: jr          $ra
    // 0x00232F34: nop

    return;
    // 0x00232F34: nop

;}
RECOMP_FUNC void func_00200C40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00200C40: addi        $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x00200C44: sw          $s0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r16;
    // 0x00200C48: sw          $s1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r17;
    // 0x00200C4C: sw          $s2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r18;
    // 0x00200C50: sw          $s3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r19;
    // 0x00200C54: sw          $s4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r20;
    // 0x00200C58: sw          $s5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r21;
    // 0x00200C5C: sw          $s6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r22;
    // 0x00200C60: sw          $s7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r23;
    // 0x00200C64: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x00200C68: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x00200C6C: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x00200C70: addu        $s2, $a2, $zero
    ctx->r18 = ADD32(ctx->r6, 0);
    // 0x00200C74: addu        $s3, $a3, $zero
    ctx->r19 = ADD32(ctx->r7, 0);
    // 0x00200C78: jal         0x00200CB0
    // 0x00200C7C: nop

    func_00200CB0(rdram, ctx);
        goto after_0;
    // 0x00200C7C: nop

    after_0:
    // 0x00200C80: lw          $s0, 0x0($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X0);
    // 0x00200C84: lw          $s1, 0x4($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X4);
    // 0x00200C88: lw          $s2, 0x8($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X8);
    // 0x00200C8C: lw          $s3, 0xC($sp)
    ctx->r19 = MEM_W(ctx->r29, 0XC);
    // 0x00200C90: lw          $s4, 0x10($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X10);
    // 0x00200C94: lw          $s5, 0x14($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X14);
    // 0x00200C98: lw          $s6, 0x18($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X18);
    // 0x00200C9C: lw          $s7, 0x1C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X1C);
    // 0x00200CA0: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x00200CA4: addi        $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x00200CA8: jr          $ra
    // 0x00200CAC: nop

    return;
    // 0x00200CAC: nop

;}
RECOMP_FUNC void func_0041BF08(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041BF08: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x0041BF0C: addu        $a0, $a1, $zero
    ctx->r4 = ADD32(ctx->r5, 0);
    // 0x0041BF10: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x0041BF14: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x0041BF18: lw          $v0, 0x1C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X1C);
    // 0x0041BF1C: lui         $s0, 0x8012
    ctx->r16 = S32(0X8012 << 16);
    // 0x0041BF20: addiu       $s0, $s0, -0x54E8
    ctx->r16 = ADD32(ctx->r16, -0X54E8);
    // 0x0041BF24: beql        $v0, $zero, L_0041BF3C
    if (ctx->r2 == 0) {
        // 0x0041BF28: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_0041BF3C;
    }
    goto skip_0;
    // 0x0041BF28: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    skip_0:
    // 0x0041BF2C: lw          $v0, 0x518($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X518);
    // 0x0041BF30: bnel        $v0, $zero, L_0041BF38
    if (ctx->r2 != 0) {
        // 0x0041BF34: addu        $s0, $v0, $zero
        ctx->r16 = ADD32(ctx->r2, 0);
            goto L_0041BF38;
    }
    goto skip_1;
    // 0x0041BF34: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    skip_1:
L_0041BF38:
    // 0x0041BF38: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_0041BF3C:
    // 0x0041BF3C: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    // 0x0041BF40: lb          $a1, 0x2B($s0)
    ctx->r5 = MEM_B(ctx->r16, 0X2B);
    // 0x0041BF44: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x0041BF48: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x0041BF4C: jal         0x0041648C
    // 0x0041BF50: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    func_0041648C(rdram, ctx);
        goto after_0;
    // 0x0041BF50: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    after_0:
    // 0x0041BF54: sb          $v0, 0x2B($s0)
    MEM_B(0X2B, ctx->r16) = ctx->r2;
    // 0x0041BF58: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x0041BF5C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x0041BF60: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x0041BF64: jr          $ra
    // 0x0041BF68: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x0041BF68: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_0041A41C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041A41C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x0041A420: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0041A424: lwc1        $f0, 0x1064($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X1064);
    // 0x0041A428: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x0041A42C: swc1        $f0, -0x5340($at)
    MEM_W(-0X5340, ctx->r1) = ctx->f0.u32l;
    // 0x0041A430: lw          $a0, 0xC($a0)
    ctx->r4 = MEM_W(ctx->r4, 0XC);
    // 0x0041A434: lui         $v1, 0xFBFF
    ctx->r3 = S32(0XFBFF << 16);
    // 0x0041A438: lw          $v0, 0x30($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X30);
    // 0x0041A43C: ori         $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 | 0XFFFF;
    // 0x0041A440: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x0041A444: jr          $ra
    // 0x0041A448: sw          $v0, 0x30($a0)
    MEM_W(0X30, ctx->r4) = ctx->r2;
    return;
    // 0x0041A448: sw          $v0, 0x30($a0)
    MEM_W(0X30, ctx->r4) = ctx->r2;
;}
RECOMP_FUNC void func_0020B6A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0020B6A0: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x0020B6A4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0020B6A8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x0020B6AC: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x0020B6B0: addu        $s3, $a1, $zero
    ctx->r19 = ADD32(ctx->r5, 0);
    // 0x0020B6B4: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x0020B6B8: addu        $s4, $a2, $zero
    ctx->r20 = ADD32(ctx->r6, 0);
    // 0x0020B6BC: sw          $s5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r21;
    // 0x0020B6C0: addu        $s5, $a3, $zero
    ctx->r21 = ADD32(ctx->r7, 0);
    // 0x0020B6C4: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x0020B6C8: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x0020B6CC: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x0020B6D0: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x0020B6D4: lw          $s1, 0x44($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X44);
    // 0x0020B6D8: lw          $s2, 0x48($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X48);
    // 0x0020B6DC: jal         0x002017D4
    // 0x0020B6E0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_002017D4(rdram, ctx);
        goto after_0;
    // 0x0020B6E0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_0:
    // 0x0020B6E4: bltz        $s1, L_0020B7D4
    if (SIGNED(ctx->r17) < 0) {
        // 0x0020B6E8: nop
    
            goto L_0020B7D4;
    }
    // 0x0020B6E8: nop

    // 0x0020B6EC: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x0020B6F0: slt         $v0, $s1, $v0
    ctx->r2 = SIGNED(ctx->r17) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x0020B6F4: beq         $v0, $zero, L_0020B7D4
    if (ctx->r2 == 0) {
        // 0x0020B6F8: nop
    
            goto L_0020B7D4;
    }
    // 0x0020B6F8: nop

    // 0x0020B6FC: lui         $v0, 0x800E
    ctx->r2 = S32(0X800E << 16);
    // 0x0020B700: lw          $v0, -0x71D8($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X71D8);
    // 0x0020B704: bne         $v0, $s0, L_0020B73C
    if (ctx->r2 != ctx->r16) {
        // 0x0020B708: nop
    
            goto L_0020B73C;
    }
    // 0x0020B708: nop

    // 0x0020B70C: lui         $v0, 0x800E
    ctx->r2 = S32(0X800E << 16);
    // 0x0020B710: lw          $v0, -0x71EC($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X71EC);
    // 0x0020B714: bne         $v0, $s1, L_0020B73C
    if (ctx->r2 != ctx->r17) {
        // 0x0020B718: nop
    
            goto L_0020B73C;
    }
    // 0x0020B718: nop

    // 0x0020B71C: lui         $v0, 0x800E
    ctx->r2 = S32(0X800E << 16);
    // 0x0020B720: lw          $v0, -0x71F0($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X71F0);
    // 0x0020B724: bne         $v0, $s2, L_0020B73C
    if (ctx->r2 != ctx->r18) {
        // 0x0020B728: addiu       $v0, $zero, 0x20
        ctx->r2 = ADD32(0, 0X20);
            goto L_0020B73C;
    }
    // 0x0020B728: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x0020B72C: lui         $v1, 0x800E
    ctx->r3 = S32(0X800E << 16);
    // 0x0020B730: lw          $v1, -0x71CC($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X71CC);
    // 0x0020B734: bne         $v1, $v0, L_0020B784
    if (ctx->r3 != ctx->r2) {
        // 0x0020B738: nop
    
            goto L_0020B784;
    }
    // 0x0020B738: nop

L_0020B73C:
    // 0x0020B73C: jal         0x0020A568
    // 0x0020B740: nop

    func_0020A568(rdram, ctx);
        goto after_1;
    // 0x0020B740: nop

    after_1:
    // 0x0020B744: lui         $v1, 0x800E
    ctx->r3 = S32(0X800E << 16);
    // 0x0020B748: lw          $v1, -0x2E90($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X2E90);
    // 0x0020B74C: addiu       $v0, $zero, 0x100
    ctx->r2 = ADD32(0, 0X100);
    // 0x0020B750: beq         $v1, $v0, L_0020B7D4
    if (ctx->r3 == ctx->r2) {
        // 0x0020B754: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_0020B7D4;
    }
    // 0x0020B754: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0020B758: jal         0x00205110
    // 0x0020B75C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_00205110(rdram, ctx);
        goto after_2;
    // 0x0020B75C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_2:
    // 0x0020B760: lui         $v0, 0x800E
    ctx->r2 = S32(0X800E << 16);
    // 0x0020B764: addiu       $v0, $v0, -0x2E90
    ctx->r2 = ADD32(ctx->r2, -0X2E90);
    // 0x0020B768: lw          $v1, 0x0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X0);
    // 0x0020B76C: sll         $a0, $v1, 2
    ctx->r4 = S32(ctx->r3 << 2);
    // 0x0020B770: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x0020B774: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x0020B778: addu        $at, $at, $a0
    ctx->r1 = ADD32(ctx->r1, ctx->r4);
    // 0x0020B77C: sw          $s0, -0x2E88($at)
    MEM_W(-0X2E88, ctx->r1) = ctx->r16;
    // 0x0020B780: sw          $v1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r3;
L_0020B784:
    // 0x0020B784: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x0020B788: addiu       $a0, $a0, -0x71CC
    ctx->r4 = ADD32(ctx->r4, -0X71CC);
    // 0x0020B78C: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x0020B790: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x0020B794: sw          $s0, -0x71D8($at)
    MEM_W(-0X71D8, ctx->r1) = ctx->r16;
    // 0x0020B798: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x0020B79C: sw          $s1, -0x71EC($at)
    MEM_W(-0X71EC, ctx->r1) = ctx->r17;
    // 0x0020B7A0: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x0020B7A4: sw          $s2, -0x71F0($at)
    MEM_W(-0X71F0, ctx->r1) = ctx->r18;
    // 0x0020B7A8: sll         $v1, $v0, 4
    ctx->r3 = S32(ctx->r2 << 4);
    // 0x0020B7AC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x0020B7B0: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
    // 0x0020B7B4: lui         $v0, 0x800E
    ctx->r2 = S32(0X800E << 16);
    // 0x0020B7B8: addiu       $v0, $v0, -0x2A88
    ctx->r2 = ADD32(ctx->r2, -0X2A88);
    // 0x0020B7BC: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x0020B7C0: sw          $s3, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r19;
    // 0x0020B7C4: sw          $s4, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r20;
    // 0x0020B7C8: sw          $s5, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r21;
    // 0x0020B7CC: lw          $v0, 0x40($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X40);
    // 0x0020B7D0: sw          $v0, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r2;
L_0020B7D4:
    // 0x0020B7D4: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x0020B7D8: lw          $s5, 0x24($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X24);
    // 0x0020B7DC: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x0020B7E0: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x0020B7E4: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x0020B7E8: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x0020B7EC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0020B7F0: jr          $ra
    // 0x0020B7F4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x0020B7F4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_0029DBC4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0029DBC4: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x0029DBC8: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x0029DBCC: jal         0x00210318
    // 0x0029DBD0: lui         $v0, 0xA460
    ctx->r2 = S32(0XA460 << 16);
    func_00210318(rdram, ctx);
        goto after_0;
    // 0x0029DBD0: lui         $v0, 0xA460
    ctx->r2 = S32(0XA460 << 16);
    after_0:
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
RECOMP_FUNC void func_0029E21C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0029E21C: addiu       $s2, $v0, 0x14
    ctx->r18 = ADD32(ctx->r2, 0X14);
    // turok2: reconnected split function: a stray ELF symbol at 0x0029E220 ended
    // this function early, leaving it without its epilogue. On the
    // hardware execution simply continues into the next instruction.
    func_0029E220(rdram, ctx);
;}
RECOMP_FUNC void func_00416EA8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00416EA8: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x00416EAC: andi        $v1, $v0, 0x3FE0
    ctx->r3 = ctx->r2 & 0X3FE0;
    // 0x00416EB0: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x00416EB4: beq         $v1, $v0, L_00416F5C
    if (ctx->r3 == ctx->r2) {
        // 0x00416EB8: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_00416F5C;
    }
    // 0x00416EB8: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x00416EBC: sltiu       $v0, $v1, 0x201
    ctx->r2 = ctx->r3 < 0X201 ? 1 : 0;
    // 0x00416EC0: beq         $v0, $zero, L_00416F0C
    if (ctx->r2 == 0) {
        // 0x00416EC4: addiu       $v0, $zero, 0x40
        ctx->r2 = ADD32(0, 0X40);
            goto L_00416F0C;
    }
    // 0x00416EC4: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x00416EC8: beql        $v1, $v0, L_00416F70
    if (ctx->r3 == ctx->r2) {
        // 0x00416ECC: addiu       $a0, $zero, 0x1
        ctx->r4 = ADD32(0, 0X1);
            goto L_00416F70;
    }
    goto skip_0;
    // 0x00416ECC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    skip_0:
    // 0x00416ED0: sltiu       $v0, $v1, 0x41
    ctx->r2 = ctx->r3 < 0X41 ? 1 : 0;
    // 0x00416ED4: beq         $v0, $zero, L_00416EEC
    if (ctx->r2 == 0) {
        // 0x00416ED8: addiu       $v0, $zero, 0x20
        ctx->r2 = ADD32(0, 0X20);
            goto L_00416EEC;
    }
    // 0x00416ED8: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x00416EDC: beq         $v1, $v0, L_00416F74
    if (ctx->r3 == ctx->r2) {
        // 0x00416EE0: sll         $v0, $a0, 3
        ctx->r2 = S32(ctx->r4 << 3);
            goto L_00416F74;
    }
    // 0x00416EE0: sll         $v0, $a0, 3
    ctx->r2 = S32(ctx->r4 << 3);
    // 0x00416EE4: j           L_00416F78
    // 0x00416EE8: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
        goto L_00416F78;
    // 0x00416EE8: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
L_00416EEC:
    // 0x00416EEC: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x00416EF0: beq         $v1, $v0, L_00416F70
    if (ctx->r3 == ctx->r2) {
        // 0x00416EF4: addiu       $a0, $zero, 0x2
        ctx->r4 = ADD32(0, 0X2);
            goto L_00416F70;
    }
    // 0x00416EF4: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x00416EF8: addiu       $v0, $zero, 0x100
    ctx->r2 = ADD32(0, 0X100);
    // 0x00416EFC: beq         $v1, $v0, L_00416F54
    if (ctx->r3 == ctx->r2) {
        // 0x00416F00: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_00416F54;
    }
    // 0x00416F00: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x00416F04: j           L_00416F74
    // 0x00416F08: sll         $v0, $a0, 3
    ctx->r2 = S32(ctx->r4 << 3);
        goto L_00416F74;
    // 0x00416F08: sll         $v0, $a0, 3
    ctx->r2 = S32(ctx->r4 << 3);
L_00416F0C:
    // 0x00416F0C: addiu       $v0, $zero, 0x800
    ctx->r2 = ADD32(0, 0X800);
    // 0x00416F10: beq         $v1, $v0, L_00416F70
    if (ctx->r3 == ctx->r2) {
        // 0x00416F14: addiu       $a0, $zero, 0x6
        ctx->r4 = ADD32(0, 0X6);
            goto L_00416F70;
    }
    // 0x00416F14: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    // 0x00416F18: sltiu       $v0, $v1, 0x801
    ctx->r2 = ctx->r3 < 0X801 ? 1 : 0;
    // 0x00416F1C: beq         $v0, $zero, L_00416F34
    if (ctx->r2 == 0) {
        // 0x00416F20: addiu       $v0, $zero, 0x400
        ctx->r2 = ADD32(0, 0X400);
            goto L_00416F34;
    }
    // 0x00416F20: addiu       $v0, $zero, 0x400
    ctx->r2 = ADD32(0, 0X400);
    // 0x00416F24: beq         $v1, $v0, L_00416F64
    if (ctx->r3 == ctx->r2) {
        // 0x00416F28: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_00416F64;
    }
    // 0x00416F28: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x00416F2C: j           L_00416F74
    // 0x00416F30: sll         $v0, $a0, 3
    ctx->r2 = S32(ctx->r4 << 3);
        goto L_00416F74;
    // 0x00416F30: sll         $v0, $a0, 3
    ctx->r2 = S32(ctx->r4 << 3);
L_00416F34:
    // 0x00416F34: addiu       $v0, $zero, 0x1000
    ctx->r2 = ADD32(0, 0X1000);
    // 0x00416F38: beq         $v1, $v0, L_00416F70
    if (ctx->r3 == ctx->r2) {
        // 0x00416F3C: addiu       $a0, $zero, 0x7
        ctx->r4 = ADD32(0, 0X7);
            goto L_00416F70;
    }
    // 0x00416F3C: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    // 0x00416F40: addiu       $v0, $zero, 0x2000
    ctx->r2 = ADD32(0, 0X2000);
    // 0x00416F44: beq         $v1, $v0, L_00416F6C
    if (ctx->r3 == ctx->r2) {
        // 0x00416F48: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_00416F6C;
    }
    // 0x00416F48: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x00416F4C: j           L_00416F74
    // 0x00416F50: sll         $v0, $a0, 3
    ctx->r2 = S32(ctx->r4 << 3);
        goto L_00416F74;
    // 0x00416F50: sll         $v0, $a0, 3
    ctx->r2 = S32(ctx->r4 << 3);
L_00416F54:
    // 0x00416F54: j           L_00416F70
    // 0x00416F58: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
        goto L_00416F70;
    // 0x00416F58: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
L_00416F5C:
    // 0x00416F5C: j           L_00416F70
    // 0x00416F60: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
        goto L_00416F70;
    // 0x00416F60: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
L_00416F64:
    // 0x00416F64: j           L_00416F70
    // 0x00416F68: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
        goto L_00416F70;
    // 0x00416F68: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
L_00416F6C:
    // 0x00416F6C: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
L_00416F70:
    // 0x00416F70: sll         $v0, $a0, 3
    ctx->r2 = S32(ctx->r4 << 3);
L_00416F74:
    // 0x00416F74: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
L_00416F78:
    // 0x00416F78: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x00416F7C: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x00416F80: addiu       $v1, $v1, 0x1BD4
    ctx->r3 = ADD32(ctx->r3, 0X1BD4);
    // 0x00416F84: jr          $ra
    // 0x00416F88: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    return;
    // 0x00416F88: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
;}
RECOMP_FUNC void func_00419560(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00419560: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00419564: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x00419568: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0041956C: lw          $v0, 0x20($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X20);
    // 0x00419570: lb          $s0, 0x4($v0)
    ctx->r16 = MEM_B(ctx->r2, 0X4);
    // 0x00419574: jal         0x00285A68
    // 0x00419578: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00285A68(rdram, ctx);
        goto after_0;
    // 0x00419578: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x0041957C: jal         0x00426480
    // 0x00419580: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00426480(rdram, ctx);
        goto after_1;
    // 0x00419580: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x00419584: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x00419588: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0041958C: jr          $ra
    // 0x00419590: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00419590: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_004268D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004268D0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x004268D4: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x004268D8: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x004268DC: sll         $v0, $s1, 2
    ctx->r2 = S32(ctx->r17 << 2);
    // 0x004268E0: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x004268E4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x004268E8: lw          $v1, 0xC60($at)
    ctx->r3 = MEM_W(ctx->r1, 0XC60);
    // 0x004268EC: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x004268F0: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x004268F4: beq         $v1, $v0, L_00426904
    if (ctx->r3 == ctx->r2) {
        // 0x004268F8: sw          $s0, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r16;
            goto L_00426904;
    }
    // 0x004268F8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x004268FC: j           L_00426964
    // 0x00426900: addiu       $v0, $zero, -0x2
    ctx->r2 = ADD32(0, -0X2);
        goto L_00426964;
    // 0x00426900: addiu       $v0, $zero, -0x2
    ctx->r2 = ADD32(0, -0X2);
L_00426904:
    // 0x00426904: jal         0x00285878
    // 0x00426908: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_00285878(rdram, ctx);
        goto after_0;
    // 0x00426908: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_0:
    // 0x0042690C: jal         0x002847E0
    // 0x00426910: nop

    func_002847E0(rdram, ctx);
        goto after_1;
    // 0x00426910: nop

    after_1:
    // 0x00426914: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x00426918: lui         $at, 0x800F
    ctx->r1 = S32(0X800F << 16);
    // 0x0042691C: sb          $v0, 0x6750($at)
    MEM_B(0X6750, ctx->r1) = ctx->r2;
    // 0x00426920: sll         $a0, $s1, 1
    ctx->r4 = S32(ctx->r17 << 1);
    // 0x00426924: addu        $a0, $a0, $s1
    ctx->r4 = ADD32(ctx->r4, ctx->r17);
    // 0x00426928: sll         $a0, $a0, 2
    ctx->r4 = S32(ctx->r4 << 2);
    // 0x0042692C: addu        $a0, $a0, $s1
    ctx->r4 = ADD32(ctx->r4, ctx->r17);
    // 0x00426930: sll         $a0, $a0, 3
    ctx->r4 = S32(ctx->r4 << 3);
    // 0x00426934: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x00426938: addiu       $v0, $v0, 0xC80
    ctx->r2 = ADD32(ctx->r2, 0XC80);
    // 0x0042693C: jal         0x00429130
    // 0x00426940: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    func_00429130(rdram, ctx);
        goto after_2;
    // 0x00426940: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    after_2:
    // 0x00426944: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x00426948: bnel        $s0, $zero, L_00426950
    if (ctx->r16 != 0) {
        // 0x0042694C: addiu       $s0, $zero, -0x1
        ctx->r16 = ADD32(0, -0X1);
            goto L_00426950;
    }
    goto skip_0;
    // 0x0042694C: addiu       $s0, $zero, -0x1
    ctx->r16 = ADD32(0, -0X1);
    skip_0:
L_00426950:
    // 0x00426950: jal         0x004258E8
    // 0x00426954: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_004258E8(rdram, ctx);
        goto after_3;
    // 0x00426954: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_3:
    // 0x00426958: jal         0x002858A4
    // 0x0042695C: nop

    func_002858A4(rdram, ctx);
        goto after_4;
    // 0x0042695C: nop

    after_4:
    // 0x00426960: addu        $v0, $s0, $zero
    ctx->r2 = ADD32(ctx->r16, 0);
L_00426964:
    // 0x00426964: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x00426968: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x0042696C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00426970: jr          $ra
    // 0x00426974: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00426974: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_0041B1C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041B1C8: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x0041B1CC: lw          $v0, -0x5528($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X5528);
    // 0x0041B1D0: xori        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 ^ 0X1;
    // 0x0041B1D4: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x0041B1D8: sw          $v0, -0x5528($at)
    MEM_W(-0X5528, ctx->r1) = ctx->r2;
    // 0x0041B1DC: jr          $ra
    // 0x0041B1E0: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x0041B1E0: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void func_0023816C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0023816C: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x00238170: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x00238174: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x00238178: sw          $ra, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r31;
    // 0x0023817C: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x00238180: lbu         $v1, 0x0($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X0);
    // 0x00238184: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00238188: bne         $v1, $v0, L_00238240
    if (ctx->r3 != ctx->r2) {
        // 0x0023818C: addu        $a1, $zero, $zero
        ctx->r5 = ADD32(0, 0);
            goto L_00238240;
    }
    // 0x0023818C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x00238190: lw          $v0, 0xD4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XD4);
    // 0x00238194: lui         $v1, 0x30
    ctx->r3 = S32(0X30 << 16);
    // 0x00238198: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x0023819C: beq         $v0, $zero, L_00238240
    if (ctx->r2 == 0) {
        // 0x002381A0: nop
    
            goto L_00238240;
    }
    // 0x002381A0: nop

    // 0x002381A4: lw          $s0, 0x1A8($a0)
    ctx->r16 = MEM_W(ctx->r4, 0X1A8);
    // 0x002381A8: addiu       $v0, $s0, 0x288
    ctx->r2 = ADD32(ctx->r16, 0X288);
    // 0x002381AC: bne         $a0, $v0, L_00238240
    if (ctx->r4 != ctx->r2) {
        // 0x002381B0: nop
    
            goto L_00238240;
    }
    // 0x002381B0: nop

    // 0x002381B4: lhu         $v1, 0x996($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X996);
    // 0x002381B8: sltiu       $v0, $v1, 0x2
    ctx->r2 = ctx->r3 < 0X2 ? 1 : 0;
    // 0x002381BC: bnel        $v0, $zero, L_002381DC
    if (ctx->r2 != 0) {
        // 0x002381C0: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_002381DC;
    }
    goto skip_0;
    // 0x002381C0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    skip_0:
    // 0x002381C4: sll         $v0, $v1, 16
    ctx->r2 = S32(ctx->r3 << 16);
    // 0x002381C8: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x002381CC: addiu       $v1, $zero, 0x22
    ctx->r3 = ADD32(0, 0X22);
    // 0x002381D0: bne         $v0, $v1, L_00238240
    if (ctx->r2 != ctx->r3) {
        // 0x002381D4: nop
    
            goto L_00238240;
    }
    // 0x002381D4: nop

    // 0x002381D8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
L_002381DC:
    // 0x002381DC: addiu       $a2, $sp, 0x10
    ctx->r6 = ADD32(ctx->r29, 0X10);
    // 0x002381E0: lui         $a1, 0x3F40
    ctx->r5 = S32(0X3F40 << 16);
    // 0x002381E4: lw          $t0, 0x0($s1)
    ctx->r8 = MEM_W(ctx->r17, 0X0);
    // 0x002381E8: lw          $t1, 0x4($s1)
    ctx->r9 = MEM_W(ctx->r17, 0X4);
    // 0x002381EC: lw          $t2, 0x8($s1)
    ctx->r10 = MEM_W(ctx->r17, 0X8);
    // 0x002381F0: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x002381F4: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x002381F8: sw          $t2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r10;
    // 0x002381FC: lw          $t0, 0x4($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X4);
    // 0x00238200: lw          $t1, 0x8($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X8);
    // 0x00238204: lw          $t2, 0xC($s0)
    ctx->r10 = MEM_W(ctx->r16, 0XC);
    // 0x00238208: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
    // 0x0023820C: sw          $t1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r9;
    // 0x00238210: sw          $t2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r10;
    // 0x00238214: jal         0x0020EF8C
    // 0x00238218: addiu       $a3, $sp, 0x20
    ctx->r7 = ADD32(ctx->r29, 0X20);
    func_0020EF8C(rdram, ctx);
        goto after_0;
    // 0x00238218: addiu       $a3, $sp, 0x20
    ctx->r7 = ADD32(ctx->r29, 0X20);
    after_0:
    // 0x0023821C: jal         0x002671B4
    // 0x00238220: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_002671B4(rdram, ctx);
        goto after_1;
    // 0x00238220: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x00238224: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00238228: lwc1        $f1, 0x65B0($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X65B0);
    // 0x0023822C: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00238230: lwc1        $f1, 0x4($s1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r17, 0X4);
    // 0x00238234: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x00238238: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x0023823C: swc1        $f1, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->f_odd[(1 - 1) * 2];
L_00238240:
    // 0x00238240: lw          $ra, 0x38($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X38);
    // 0x00238244: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x00238248: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x0023824C: addu        $v0, $a1, $zero
    ctx->r2 = ADD32(ctx->r5, 0);
    // 0x00238250: jr          $ra
    // 0x00238254: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x00238254: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_0028233C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0028233C: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_002811CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002811CC: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x002811D0: lwc1        $f0, -0x6404($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X6404);
    // 0x002811D4: mtc1        $a1, $f4
    ctx->f4.u32l = ctx->r5;
    // 0x002811D8: mul.s       $f3, $f4, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f3.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x002811DC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x002811E0: lwc1        $f1, 0x38($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X38);
    // 0x002811E4: mtc1        $a2, $f4
    ctx->f4.u32l = ctx->r6;
    // 0x002811E8: lw          $v0, 0x3C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X3C);
    // 0x002811EC: mul.s       $f2, $f4, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x002811F0: mtc1        $a3, $f4
    ctx->f4.u32l = ctx->r7;
    // 0x002811F4: lw          $v1, 0x40($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X40);
    // 0x002811F8: lw          $t0, 0x44($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X44);
    // 0x002811FC: lw          $t1, 0x48($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X48);
    // 0x00281200: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    // 0x00281204: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    // 0x00281208: sw          $t1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r9;
    // 0x0028120C: lw          $v1, 0x18($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X18);
    // 0x00281210: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x00281214: lw          $t1, 0x20($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X20);
    // 0x00281218: sw          $v1, 0x9C($a0)
    MEM_W(0X9C, ctx->r4) = ctx->r3;
    // 0x0028121C: sw          $t0, 0xA0($a0)
    MEM_W(0XA0, ctx->r4) = ctx->r8;
    // 0x00281220: sw          $t1, 0xA4($a0)
    MEM_W(0XA4, ctx->r4) = ctx->r9;
    // 0x00281224: swc1        $f1, 0xA8($a0)
    MEM_W(0XA8, ctx->r4) = ctx->f_odd[(1 - 1) * 2];
    // 0x00281228: sw          $v0, 0xAC($a0)
    MEM_W(0XAC, ctx->r4) = ctx->r2;
    // 0x0028122C: mul.s       $f0, $f4, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x00281230: sw          $v0, 0xC0($a0)
    MEM_W(0XC0, ctx->r4) = ctx->r2;
    // 0x00281234: sw          $v0, 0xD4($a0)
    MEM_W(0XD4, ctx->r4) = ctx->r2;
    // 0x00281238: swc1        $f3, 0xB0($a0)
    MEM_W(0XB0, ctx->r4) = ctx->f_odd[(3 - 1) * 2];
    // 0x0028123C: swc1        $f2, 0xC4($a0)
    MEM_W(0XC4, ctx->r4) = ctx->f2.u32l;
    // 0x00281240: swc1        $f0, 0xD8($a0)
    MEM_W(0XD8, ctx->r4) = ctx->f0.u32l;
    // 0x00281244: jr          $ra
    // 0x00281248: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x00281248: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_002593D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002593D8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x002593DC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x002593E0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x002593E4: sdc1        $f21, 0x20($sp)
    CHECK_FR(ctx, 21);
    SD(ctx->f21.u64, 0X20, ctx->r29);
    // 0x002593E8: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x002593EC: lw          $a0, 0x1A8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1A8);
    // 0x002593F0: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x002593F4: lwc1        $f0, 0xA60($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0XA60);
    // 0x002593F8: c.lt.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl < ctx->f0.fl;
    // 0x002593FC: nop

    // 0x00259400: bc1f        L_002594DC
    if (!c1cs) {
        // 0x00259404: addu        $s0, $a1, $zero
        ctx->r16 = ADD32(ctx->r5, 0);
            goto L_002594DC;
    }
    // 0x00259404: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x00259408: lb          $v1, 0x34($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X34);
    // 0x0025940C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00259410: beq         $v1, $v0, L_002594DC
    if (ctx->r3 == ctx->r2) {
        // 0x00259414: nop
    
            goto L_002594DC;
    }
    // 0x00259414: nop

    // 0x00259418: lwc1        $f3, 0xA78($a0)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r4, 0XA78);
    // 0x0025941C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00259420: lwc1        $f21, 0x72F4($at)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r1, 0X72F4);
    // 0x00259424: c.lt.s      $f4, $f3
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 3);
    c1cs = ctx->f4.fl < ctx->f3.fl;
    // 0x00259428: nop

    // 0x0025942C: bc1f        L_0025943C
    if (!c1cs) {
        // 0x00259430: nop
    
            goto L_0025943C;
    }
    // 0x00259430: nop

    // 0x00259434: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00259438: lwc1        $f21, 0x72F8($at)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r1, 0X72F8);
L_0025943C:
    // 0x0025943C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00259440: lwc1        $f2, 0x72FC($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X72FC);
    // 0x00259444: lwc1        $f1, 0xA80($a0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r4, 0XA80);
    // 0x00259448: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0025944C: lwc1        $f0, 0x7300($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X7300);
    // 0x00259450: c.lt.s      $f3, $f4
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f3.fl < ctx->f4.fl;
    // 0x00259454: mul.s       $f20, $f1, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x00259458: bc1f        L_00259468
    if (!c1cs) {
        // 0x0025945C: nop
    
            goto L_00259468;
    }
    // 0x0025945C: nop

    // 0x00259460: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00259464: lwc1        $f2, 0x7304($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X7304);
L_00259468:
    // 0x00259468: lwc1        $f0, 0x110($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X110);
    // 0x0025946C: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x00259470: nop

    // 0x00259474: bc1f        L_0025949C
    if (!c1cs) {
        // 0x00259478: nop
    
            goto L_0025949C;
    }
    // 0x00259478: nop

    // 0x0025947C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00259480: lwc1        $f0, 0x7308($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X7308);
    // 0x00259484: c.eq.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl == ctx->f0.fl;
    // 0x00259488: nop

    // 0x0025948C: bc1f        L_002594B4
    if (!c1cs) {
        // 0x00259490: nop
    
            goto L_002594B4;
    }
    // 0x00259490: nop

    // 0x00259494: j           L_002594C0
    // 0x00259498: nop

        goto L_002594C0;
    // 0x00259498: nop

L_0025949C:
    // 0x0025949C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002594A0: lwc1        $f0, 0x730C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X730C);
    // 0x002594A4: c.eq.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl == ctx->f0.fl;
    // 0x002594A8: nop

    // 0x002594AC: bc1t        L_002594C0
    if (c1cs) {
        // 0x002594B0: nop
    
            goto L_002594C0;
    }
    // 0x002594B0: nop

L_002594B4:
    // 0x002594B4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002594B8: lwc1        $f0, 0x7310($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X7310);
    // 0x002594BC: mul.s       $f20, $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = MUL_S(ctx->f20.fl, ctx->f0.fl);
L_002594C0:
    // 0x002594C0: lw          $v0, 0x1288($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X1288);
    // 0x002594C4: bne         $v0, $zero, L_00259520
    if (ctx->r2 != 0) {
        // 0x002594C8: nop
    
            goto L_00259520;
    }
    // 0x002594C8: nop

    // 0x002594CC: jal         0x00253DE0
    // 0x002594D0: addiu       $a1, $zero, 0x467
    ctx->r5 = ADD32(0, 0X467);
    func_00253DE0(rdram, ctx);
        goto after_0;
    // 0x002594D0: addiu       $a1, $zero, 0x467
    ctx->r5 = ADD32(0, 0X467);
    after_0:
    // 0x002594D4: j           L_00259520
    // 0x002594D8: nop

        goto L_00259520;
    // 0x002594D8: nop

L_002594DC:
    // 0x002594DC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002594E0: lwc1        $f20, 0x7314($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X7314);
    // 0x002594E4: lwc1        $f1, 0x110($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X110);
    // 0x002594E8: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x002594EC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002594F0: lwc1        $f21, 0x7318($at)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r1, 0X7318);
    // 0x002594F4: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x002594F8: nop

    // 0x002594FC: bc1f        L_0025950C
    if (!c1cs) {
        // 0x00259500: nop
    
            goto L_0025950C;
    }
    // 0x00259500: nop

    // 0x00259504: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00259508: lwc1        $f21, 0x731C($at)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r1, 0X731C);
L_0025950C:
    // 0x0025950C: lw          $v0, 0x1288($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X1288);
    // 0x00259510: beq         $v0, $zero, L_00259520
    if (ctx->r2 == 0) {
        // 0x00259514: nop
    
            goto L_00259520;
    }
    // 0x00259514: nop

    // 0x00259518: jal         0x00253E68
    // 0x0025951C: nop

    func_00253E68(rdram, ctx);
        goto after_1;
    // 0x0025951C: nop

    after_1:
L_00259520:
    // 0x00259520: lwc1        $f12, 0x110($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X110);
    // 0x00259524: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x00259528: jal         0x00211774
    // 0x0025952C: mov.s       $f14, $f21
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 21);
    ctx->f14.fl = ctx->f21.fl;
    func_00211774(rdram, ctx);
        goto after_2;
    // 0x0025952C: mov.s       $f14, $f21
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 21);
    ctx->f14.fl = ctx->f21.fl;
    after_2:
    // 0x00259530: lwc1        $f1, 0x10C($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X10C);
    // 0x00259534: sub.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl - ctx->f0.fl;
    // 0x00259538: swc1        $f0, 0x110($s0)
    MEM_W(0X110, ctx->r16) = ctx->f0.u32l;
    // 0x0025953C: swc1        $f1, 0x10C($s0)
    MEM_W(0X10C, ctx->r16) = ctx->f_odd[(1 - 1) * 2];
    // 0x00259540: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x00259544: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00259548: ldc1        $f21, 0x20($sp)
    CHECK_FR(ctx, 21);
    ctx->f21.u64 = LD(ctx->r29, 0X20);
    // 0x0025954C: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x00259550: jr          $ra
    // 0x00259554: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x00259554: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_00276DFC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00276DFC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00276E00: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00276E04: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x00276E08: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x00276E0C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00276E10: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x00276E14: jal         0x002714B0
    // 0x00276E18: nop

    func_002714B0(rdram, ctx);
        goto after_0;
    // 0x00276E18: nop

    after_0:
    // 0x00276E1C: lw          $v0, 0x8($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X8);
    // 0x00276E20: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
    // 0x00276E24: beq         $v0, $v1, L_00276E58
    if (ctx->r2 == ctx->r3) {
        // 0x00276E28: nop
    
            goto L_00276E58;
    }
    // 0x00276E28: nop

    // 0x00276E2C: beq         $v0, $zero, L_00276E58
    if (ctx->r2 == 0) {
        // 0x00276E30: nop
    
            goto L_00276E58;
    }
    // 0x00276E30: nop

    // 0x00276E34: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x00276E38: jal         0x002718F4
    // 0x00276E3C: sw          $v1, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->r3;
    func_002718F4(rdram, ctx);
        goto after_1;
    // 0x00276E3C: sw          $v1, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->r3;
    after_1:
    // 0x00276E40: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x00276E44: lh          $a1, 0x1E($s1)
    ctx->r5 = MEM_H(ctx->r17, 0X1E);
    // 0x00276E48: jal         0x00293E60
    // 0x00276E4C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00293E60(rdram, ctx);
        goto after_2;
    // 0x00276E4C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x00276E50: jal         0x00293EC0
    // 0x00276E54: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00293EC0(rdram, ctx);
        goto after_3;
    // 0x00276E54: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
L_00276E58:
    // 0x00276E58: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x00276E5C: jal         0x00271514
    // 0x00276E60: nop

    func_00271514(rdram, ctx);
        goto after_4;
    // 0x00276E60: nop

    after_4:
    // 0x00276E64: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x00276E68: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00276E6C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00276E70: jr          $ra
    // 0x00276E74: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00276E74: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_00238500(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00238500: addiu       $sp, $sp, -0xB0
    ctx->r29 = ADD32(ctx->r29, -0XB0);
    // 0x00238504: sw          $s0, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->r16;
    // 0x00238508: lw          $s0, 0xD0($sp)
    ctx->r16 = MEM_W(ctx->r29, 0XD0);
    // 0x0023850C: lwc1        $f0, 0xC4($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0XC4);
    // 0x00238510: sw          $s2, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r18;
    // 0x00238514: addu        $s2, $a1, $zero
    ctx->r18 = ADD32(ctx->r5, 0);
    // 0x00238518: sw          $ra, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->r31;
    // 0x0023851C: sw          $s3, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r19;
    // 0x00238520: sw          $s1, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->r17;
    // 0x00238524: sw          $a2, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->r6;
    // 0x00238528: sw          $a3, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->r7;
    // 0x0023852C: lw          $s1, 0x1A8($s2)
    ctx->r17 = MEM_W(ctx->r18, 0X1A8);
    // 0x00238530: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x00238534: swc1        $f0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f0.u32l;
    // 0x00238538: lwc1        $f0, 0xC8($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0XC8);
    // 0x0023853C: addiu       $a1, $sp, 0x50
    ctx->r5 = ADD32(ctx->r29, 0X50);
    // 0x00238540: swc1        $f0, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f0.u32l;
    // 0x00238544: lwc1        $f0, 0xCC($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0XCC);
    // 0x00238548: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0023854C: jal         0x00253F90
    // 0x00238550: swc1        $f0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f0.u32l;
    func_00253F90(rdram, ctx);
        goto after_0;
    // 0x00238550: swc1        $f0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f0.u32l;
    after_0:
    // 0x00238554: lw          $v0, 0x51C($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X51C);
    // 0x00238558: lwc1        $f0, 0x50($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X50);
    // 0x0023855C: lwc1        $f1, 0x114($v0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r2, 0X114);
    // 0x00238560: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x00238564: swc1        $f0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f0.u32l;
    // 0x00238568: lw          $v0, 0x51C($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X51C);
    // 0x0023856C: lwc1        $f0, 0x54($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X54);
    // 0x00238570: lwc1        $f1, 0x118($v0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r2, 0X118);
    // 0x00238574: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x00238578: swc1        $f0, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f0.u32l;
    // 0x0023857C: lw          $v0, 0x51C($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X51C);
    // 0x00238580: lwc1        $f1, 0x58($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X58);
    // 0x00238584: lwc1        $f0, 0x11C($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X11C);
    // 0x00238588: sub.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl - ctx->f0.fl;
    // 0x0023858C: addiu       $a0, $sp, 0x80
    ctx->r4 = ADD32(ctx->r29, 0X80);
    // 0x00238590: addiu       $a1, $sp, 0x50
    ctx->r5 = ADD32(ctx->r29, 0X50);
    // 0x00238594: jal         0x0020E810
    // 0x00238598: swc1        $f1, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    func_0020E810(rdram, ctx);
        goto after_1;
    // 0x00238598: swc1        $f1, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    after_1:
    // 0x0023859C: addiu       $v0, $sp, 0x60
    ctx->r2 = ADD32(ctx->r29, 0X60);
    // 0x002385A0: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x002385A4: addiu       $v0, $sp, 0x90
    ctx->r2 = ADD32(ctx->r29, 0X90);
    // 0x002385A8: addiu       $s3, $zero, 0x1
    ctx->r19 = ADD32(0, 0X1);
    // 0x002385AC: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x002385B0: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x002385B4: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x002385B8: lw          $a1, 0xB8($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XB8);
    // 0x002385BC: lw          $a2, 0xBC($sp)
    ctx->r6 = MEM_W(ctx->r29, 0XBC);
    // 0x002385C0: lw          $a3, 0xC0($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XC0);
    // 0x002385C4: jal         0x002688C8
    // 0x002385C8: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_002688C8(rdram, ctx);
        goto after_2;
    // 0x002385C8: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_2:
    // 0x002385CC: lw          $t0, 0xB8($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XB8);
    // 0x002385D0: lw          $t1, 0xBC($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XBC);
    // 0x002385D4: lw          $t2, 0xC0($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XC0);
    // 0x002385D8: sw          $t0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r8;
    // 0x002385DC: sw          $t1, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r9;
    // 0x002385E0: sw          $t2, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r10;
    // 0x002385E4: lwc1        $f0, 0x64($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X64);
    // 0x002385E8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002385EC: lwc1        $f1, 0x65C0($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X65C0);
    // 0x002385F0: addiu       $v0, $zero, 0xE9
    ctx->r2 = ADD32(0, 0XE9);
    // 0x002385F4: sw          $zero, 0x70($sp)
    MEM_W(0X70, ctx->r29) = 0;
    // 0x002385F8: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x002385FC: sw          $zero, 0x74($sp)
    MEM_W(0X74, ctx->r29) = 0;
    // 0x00238600: sw          $zero, 0x78($sp)
    MEM_W(0X78, ctx->r29) = 0;
    // 0x00238604: swc1        $f0, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f0.u32l;
    // 0x00238608: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x0023860C: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x00238610: lw          $t0, 0x70($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X70);
    // 0x00238614: lw          $t1, 0x74($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X74);
    // 0x00238618: lw          $t2, 0x78($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X78);
    // 0x0023861C: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x00238620: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    // 0x00238624: sw          $t2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r10;
    // 0x00238628: lw          $t0, 0x80($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X80);
    // 0x0023862C: lw          $t1, 0x84($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X84);
    // 0x00238630: lw          $t2, 0x88($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X88);
    // 0x00238634: lw          $t3, 0x8C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X8C);
    // 0x00238638: sw          $t0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r8;
    // 0x0023863C: sw          $t1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r9;
    // 0x00238640: sw          $t2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r10;
    // 0x00238644: sw          $t3, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r11;
    // 0x00238648: lw          $t0, 0x60($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X60);
    // 0x0023864C: lw          $t1, 0x64($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X64);
    // 0x00238650: lw          $t2, 0x68($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X68);
    // 0x00238654: sw          $t0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r8;
    // 0x00238658: sw          $t1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r9;
    // 0x0023865C: sw          $t2, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r10;
    // 0x00238660: lw          $v1, 0x90($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X90);
    // 0x00238664: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x00238668: sw          $v0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r2;
    // 0x0023866C: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x00238670: bne         $s0, $v0, L_00238684
    if (ctx->r16 != ctx->r2) {
        // 0x00238674: sw          $v1, 0x40($sp)
        MEM_W(0X40, ctx->r29) = ctx->r3;
            goto L_00238684;
    }
    // 0x00238674: sw          $v1, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r3;
    // 0x00238678: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x0023867C: j           L_00238688
    // 0x00238680: sw          $v0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r2;
        goto L_00238688;
    // 0x00238680: sw          $v0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r2;
L_00238684:
    // 0x00238684: sw          $s3, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r19;
L_00238688:
    // 0x00238688: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x0023868C: addiu       $a0, $a0, -0x76D8
    ctx->r4 = ADD32(ctx->r4, -0X76D8);
    // 0x00238690: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x00238694: addu        $a2, $a1, $zero
    ctx->r6 = ADD32(ctx->r5, 0);
    // 0x00238698: jal         0x0022F350
    // 0x0023869C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_0022F350(rdram, ctx);
        goto after_3;
    // 0x0023869C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_3:
    // 0x002386A0: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x002386A4: addiu       $a0, $a0, 0x7078
    ctx->r4 = ADD32(ctx->r4, 0X7078);
    // 0x002386A8: sw          $zero, 0x60($sp)
    MEM_W(0X60, ctx->r29) = 0;
    // 0x002386AC: sw          $zero, 0x64($sp)
    MEM_W(0X64, ctx->r29) = 0;
    // 0x002386B0: sw          $zero, 0x68($sp)
    MEM_W(0X68, ctx->r29) = 0;
    // 0x002386B4: lw          $a1, 0xA50($s1)
    ctx->r5 = MEM_W(ctx->r17, 0XA50);
    // 0x002386B8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002386BC: lwc1        $f0, 0x65C4($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X65C4);
    // 0x002386C0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002386C4: lwc1        $f1, 0x65C8($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X65C8);
    // 0x002386C8: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x002386CC: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    // 0x002386D0: swc1        $f1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    // 0x002386D4: lw          $t0, 0x64($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X64);
    // 0x002386D8: lw          $t1, 0x68($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X68);
    // 0x002386DC: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x002386E0: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x002386E4: lw          $a3, 0x60($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X60);
    // 0x002386E8: jal         0x00225DB0
    // 0x002386EC: addiu       $a1, $a1, 0x140
    ctx->r5 = ADD32(ctx->r5, 0X140);
    func_00225DB0(rdram, ctx);
        goto after_4;
    // 0x002386EC: addiu       $a1, $a1, 0x140
    ctx->r5 = ADD32(ctx->r5, 0X140);
    after_4:
    // 0x002386F0: lw          $ra, 0xA8($sp)
    ctx->r31 = MEM_W(ctx->r29, 0XA8);
    // 0x002386F4: lw          $s3, 0xA4($sp)
    ctx->r19 = MEM_W(ctx->r29, 0XA4);
    // 0x002386F8: lw          $s2, 0xA0($sp)
    ctx->r18 = MEM_W(ctx->r29, 0XA0);
    // 0x002386FC: lw          $s1, 0x9C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X9C);
    // 0x00238700: lw          $s0, 0x98($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X98);
    // 0x00238704: jr          $ra
    // 0x00238708: addiu       $sp, $sp, 0xB0
    ctx->r29 = ADD32(ctx->r29, 0XB0);
    return;
    // 0x00238708: addiu       $sp, $sp, 0xB0
    ctx->r29 = ADD32(ctx->r29, 0XB0);
;}
RECOMP_FUNC void func_0025E94C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0025E94C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0025E950: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0025E954: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x0025E958: lui         $a3, 0xFEFF
    ctx->r7 = S32(0XFEFF << 16);
    // 0x0025E95C: ori         $a3, $a3, 0xFFFF
    ctx->r7 = ctx->r7 | 0XFFFF;
    // 0x0025E960: lui         $a2, 0xFFFE
    ctx->r6 = S32(0XFFFE << 16);
    // 0x0025E964: ori         $a2, $a2, 0xFFFF
    ctx->r6 = ctx->r6 | 0XFFFF;
    // 0x0025E968: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x0025E96C: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x0025E970: lui         $v1, 0x26
    ctx->r3 = S32(0X26 << 16);
    // 0x0025E974: addiu       $v1, $v1, 0x5AC
    ctx->r3 = ADD32(ctx->r3, 0X5AC);
    // 0x0025E978: sw          $v1, 0xF4($a1)
    MEM_W(0XF4, ctx->r5) = ctx->r3;
    // 0x0025E97C: ori         $v0, $v0, 0x20
    ctx->r2 = ctx->r2 | 0X20;
    // 0x0025E980: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
    // 0x0025E984: lw          $v0, 0xD4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XD4);
    // 0x0025E988: sw          $zero, 0x27C($s0)
    MEM_W(0X27C, ctx->r16) = 0;
    // 0x0025E98C: and         $v0, $v0, $a3
    ctx->r2 = ctx->r2 & ctx->r7;
    // 0x0025E990: and         $v0, $v0, $a2
    ctx->r2 = ctx->r2 & ctx->r6;
    // 0x0025E994: jal         0x00246918
    // 0x0025E998: sw          $v0, 0xD4($s0)
    MEM_W(0XD4, ctx->r16) = ctx->r2;
    func_00246918(rdram, ctx);
        goto after_0;
    // 0x0025E998: sw          $v0, 0xD4($s0)
    MEM_W(0XD4, ctx->r16) = ctx->r2;
    after_0:
    // 0x0025E99C: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    // 0x0025E9A0: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    // 0x0025E9A4: jal         0x0026E19C
    // 0x0025E9A8: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    func_0026E19C(rdram, ctx);
        goto after_1;
    // 0x0025E9A8: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    after_1:
    // 0x0025E9AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x0025E9B0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0025E9B4: jr          $ra
    // 0x0025E9B8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0025E9B8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0027B0D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0027B0D4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0027B0D8: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x0027B0DC: jal         0x0027836C
    // 0x0027B0E0: nop

    func_0027836C(rdram, ctx);
        goto after_0;
    // 0x0027B0E0: nop

    after_0:
    // 0x0027B0E4: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x0027B0E8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x0027B0EC: lui         $at, 0x800F
    ctx->r1 = S32(0X800F << 16);
    // 0x0027B0F0: sw          $v0, 0x56A8($at)
    MEM_W(0X56A8, ctx->r1) = ctx->r2;
    // 0x0027B0F4: jr          $ra
    // 0x0027B0F8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0027B0F8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00284DAC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00284DAC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00284DB0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00284DB4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x00284DB8: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x00284DBC: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00284DC0: lb          $a1, 0x4($s0)
    ctx->r5 = MEM_B(ctx->r16, 0X4);
    // 0x00284DC4: sll         $v0, $a1, 2
    ctx->r2 = S32(ctx->r5 << 2);
    // 0x00284DC8: lui         $at, 0x800F
    ctx->r1 = S32(0X800F << 16);
    // 0x00284DCC: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x00284DD0: lbu         $v0, 0x677B($at)
    ctx->r2 = MEM_BU(ctx->r1, 0X677B);
    // 0x00284DD4: srl         $v0, $v0, 3
    ctx->r2 = S32(U32(ctx->r2) >> 3);
    // 0x00284DD8: xori        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 ^ 0X1;
    // 0x00284DDC: andi        $s1, $v0, 0x1
    ctx->r17 = ctx->r2 & 0X1;
    // 0x00284DE0: beql        $s1, $zero, L_00284EA4
    if (ctx->r17 == 0) {
        // 0x00284DE4: sw          $s1, 0x0($s0)
        MEM_W(0X0, ctx->r16) = ctx->r17;
            goto L_00284EA4;
    }
    goto skip_0;
    // 0x00284DE4: sw          $s1, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r17;
    skip_0:
    // 0x00284DE8: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x00284DEC: bnel        $v0, $zero, L_00284EA4
    if (ctx->r2 != 0) {
        // 0x00284DF0: sw          $s1, 0x0($s0)
        MEM_W(0X0, ctx->r16) = ctx->r17;
            goto L_00284EA4;
    }
    goto skip_1;
    // 0x00284DF0: sw          $s1, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r17;
    skip_1:
    // 0x00284DF4: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x00284DF8: addiu       $a2, $zero, 0x30
    ctx->r6 = ADD32(0, 0X30);
    // 0x00284DFC: addu        $v1, $s0, $zero
    ctx->r3 = ADD32(ctx->r16, 0);
    // 0x00284E00: sb          $a1, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r5;
    // 0x00284E04: sw          $zero, 0x0($s0)
    MEM_W(0X0, ctx->r16) = 0;
    // 0x00284E08: sw          $zero, 0xC8($s0)
    MEM_W(0XC8, ctx->r16) = 0;
    // 0x00284E0C: sw          $zero, 0xCC($s0)
    MEM_W(0XCC, ctx->r16) = 0;
    // 0x00284E10: sw          $zero, 0x220($s0)
    MEM_W(0X220, ctx->r16) = 0;
    // 0x00284E14: sw          $zero, 0x8($s0)
    MEM_W(0X8, ctx->r16) = 0;
    // 0x00284E18: sw          $zero, 0xC($s0)
    MEM_W(0XC, ctx->r16) = 0;
    // 0x00284E1C: sw          $zero, 0x10($s0)
    MEM_W(0X10, ctx->r16) = 0;
    // 0x00284E20: sb          $zero, 0xC4($s0)
    MEM_B(0XC4, ctx->r16) = 0;
    // 0x00284E24: sb          $zero, 0xC5($s0)
    MEM_B(0XC5, ctx->r16) = 0;
    // 0x00284E28: sb          $zero, 0xC6($s0)
    MEM_B(0XC6, ctx->r16) = 0;
    // 0x00284E2C: sb          $zero, 0xC7($s0)
    MEM_B(0XC7, ctx->r16) = 0;
    // 0x00284E30: sw          $zero, 0x14($s0)
    MEM_W(0X14, ctx->r16) = 0;
    // 0x00284E34: sw          $zero, 0x18($s0)
    MEM_W(0X18, ctx->r16) = 0;
    // 0x00284E38: sw          $zero, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = 0;
    // 0x00284E3C: sw          $zero, 0x20($s0)
    MEM_W(0X20, ctx->r16) = 0;
    // 0x00284E40: sw          $zero, 0x24($s0)
    MEM_W(0X24, ctx->r16) = 0;
    // 0x00284E44: sw          $zero, 0x28($s0)
    MEM_W(0X28, ctx->r16) = 0;
L_00284E48:
    // 0x00284E48: sb          $zero, 0x2C($v1)
    MEM_B(0X2C, ctx->r3) = 0;
    // 0x00284E4C: sb          $zero, 0x2D($v1)
    MEM_B(0X2D, ctx->r3) = 0;
    // 0x00284E50: sb          $a2, 0x2E($v1)
    MEM_B(0X2E, ctx->r3) = ctx->r6;
    // 0x00284E54: sb          $zero, 0x2F($v1)
    MEM_B(0X2F, ctx->r3) = 0;
    // 0x00284E58: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x00284E5C: slti        $v0, $a0, 0x20
    ctx->r2 = SIGNED(ctx->r4) < 0X20 ? 1 : 0;
    // 0x00284E60: bne         $v0, $zero, L_00284E48
    if (ctx->r2 != 0) {
        // 0x00284E64: addiu       $v1, $v1, 0x4
        ctx->r3 = ADD32(ctx->r3, 0X4);
            goto L_00284E48;
    }
    // 0x00284E64: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x00284E68: sll         $v0, $a1, 2
    ctx->r2 = S32(ctx->r5 << 2);
    // 0x00284E6C: addiu       $a0, $s0, 0x140
    ctx->r4 = ADD32(ctx->r16, 0X140);
    // 0x00284E70: addiu       $a1, $s0, 0x16C
    ctx->r5 = ADD32(ctx->r16, 0X16C);
    // 0x00284E74: lui         $at, 0x800F
    ctx->r1 = S32(0X800F << 16);
    // 0x00284E78: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x00284E7C: lbu         $v0, 0x677B($at)
    ctx->r2 = MEM_BU(ctx->r1, 0X677B);
    // 0x00284E80: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x00284E84: sw          $zero, 0xD0($s0)
    MEM_W(0XD0, ctx->r16) = 0;
    // 0x00284E88: sw          $zero, 0xD4($s0)
    MEM_W(0XD4, ctx->r16) = 0;
    // 0x00284E8C: srl         $v0, $v0, 3
    ctx->r2 = S32(U32(ctx->r2) >> 3);
    // 0x00284E90: xori        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 ^ 0X1;
    // 0x00284E94: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x00284E98: jal         0x0026EB3C
    // 0x00284E9C: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    func_0026EB3C(rdram, ctx);
        goto after_0;
    // 0x00284E9C: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    after_0:
    // 0x00284EA0: sw          $s1, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r17;
L_00284EA4:
    // 0x00284EA4: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x00284EA8: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00284EAC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00284EB0: jr          $ra
    // 0x00284EB4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00284EB4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_0040E930(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0040E930: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0040E934: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0040E938: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x0040E93C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x0040E940: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x0040E944: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x0040E948: jal         0x00243414
    // 0x0040E94C: addiu       $a1, $a0, 0x140
    ctx->r5 = ADD32(ctx->r4, 0X140);
    func_00243414(rdram, ctx);
        goto after_0;
    // 0x0040E94C: addiu       $a1, $a0, 0x140
    ctx->r5 = ADD32(ctx->r4, 0X140);
    after_0:
    // 0x0040E950: lw          $v1, 0x4F8($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X4F8);
    // 0x0040E954: addiu       $v0, $v1, 0xC
    ctx->r2 = ADD32(ctx->r3, 0XC);
    // 0x0040E958: sw          $v0, 0x4F8($s0)
    MEM_W(0X4F8, ctx->r16) = ctx->r2;
    // 0x0040E95C: lw          $a1, 0xC($v1)
    ctx->r5 = MEM_W(ctx->r3, 0XC);
    // 0x0040E960: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // 0x0040E964: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
    // 0x0040E968: sw          $zero, 0x518($s0)
    MEM_W(0X518, ctx->r16) = 0;
    // 0x0040E96C: sw          $zero, 0x530($s0)
    MEM_W(0X530, ctx->r16) = 0;
    // 0x0040E970: blez        $v0, L_0040E998
    if (SIGNED(ctx->r2) <= 0) {
        // 0x0040E974: sw          $zero, 0x548($s0)
        MEM_W(0X548, ctx->r16) = 0;
            goto L_0040E998;
    }
    // 0x0040E974: sw          $zero, 0x548($s0)
    MEM_W(0X548, ctx->r16) = 0;
    // 0x0040E978: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_0040E97C:
    // 0x0040E97C: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x0040E980: sw          $zero, 0x24C($v0)
    MEM_W(0X24C, ctx->r2) = 0;
    // 0x0040E984: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // 0x0040E988: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x0040E98C: slt         $v0, $v1, $v0
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x0040E990: bne         $v0, $zero, L_0040E97C
    if (ctx->r2 != 0) {
        // 0x0040E994: addiu       $a0, $a0, 0x4
        ctx->r4 = ADD32(ctx->r4, 0X4);
            goto L_0040E97C;
    }
    // 0x0040E994: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
L_0040E998:
    // 0x0040E998: lw          $v0, 0x18($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X18);
    // 0x0040E99C: blez        $v0, L_0040E9C4
    if (SIGNED(ctx->r2) <= 0) {
        // 0x0040E9A0: addu        $v1, $zero, $zero
        ctx->r3 = ADD32(0, 0);
            goto L_0040E9C4;
    }
    // 0x0040E9A0: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
    // 0x0040E9A4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_0040E9A8:
    // 0x0040E9A8: lw          $v0, 0x1C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X1C);
    // 0x0040E9AC: sw          $zero, 0x24C($v0)
    MEM_W(0X24C, ctx->r2) = 0;
    // 0x0040E9B0: lw          $v0, 0x18($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X18);
    // 0x0040E9B4: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x0040E9B8: slt         $v0, $v1, $v0
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x0040E9BC: bne         $v0, $zero, L_0040E9A8
    if (ctx->r2 != 0) {
        // 0x0040E9C0: addiu       $a0, $a0, 0x4
        ctx->r4 = ADD32(ctx->r4, 0X4);
            goto L_0040E9A8;
    }
    // 0x0040E9C0: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
L_0040E9C4:
    // 0x0040E9C4: lw          $v0, 0x2C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X2C);
    // 0x0040E9C8: blez        $v0, L_0040E9F0
    if (SIGNED(ctx->r2) <= 0) {
        // 0x0040E9CC: addu        $v1, $zero, $zero
        ctx->r3 = ADD32(0, 0);
            goto L_0040E9F0;
    }
    // 0x0040E9CC: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
    // 0x0040E9D0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_0040E9D4:
    // 0x0040E9D4: lw          $v0, 0x30($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X30);
    // 0x0040E9D8: sw          $zero, 0x24C($v0)
    MEM_W(0X24C, ctx->r2) = 0;
    // 0x0040E9DC: lw          $v0, 0x2C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X2C);
    // 0x0040E9E0: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x0040E9E4: slt         $v0, $v1, $v0
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x0040E9E8: bne         $v0, $zero, L_0040E9D4
    if (ctx->r2 != 0) {
        // 0x0040E9EC: addiu       $a0, $a0, 0x4
        ctx->r4 = ADD32(ctx->r4, 0X4);
            goto L_0040E9D4;
    }
    // 0x0040E9EC: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
L_0040E9F0:
    // 0x0040E9F0: sll         $v0, $a1, 3
    ctx->r2 = S32(ctx->r5 << 3);
    // 0x0040E9F4: sw          $a1, 0x4FC($s0)
    MEM_W(0X4FC, ctx->r16) = ctx->r5;
    // 0x0040E9F8: lui         $at, 0x43
    ctx->r1 = S32(0X43 << 16);
    // 0x0040E9FC: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x0040EA00: lw          $v0, 0x240C($at)
    ctx->r2 = MEM_W(ctx->r1, 0X240C);
    // 0x0040EA04: beq         $v0, $zero, L_0040EA14
    if (ctx->r2 == 0) {
        // 0x0040EA08: nop
    
            goto L_0040EA14;
    }
    // 0x0040EA08: nop

    // 0x0040EA0C: jalr        $v0
    // 0x0040EA10: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_1;
    // 0x0040EA10: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
L_0040EA14:
    // 0x0040EA14: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x0040EA18: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0040EA1C: jr          $ra
    // 0x0040EA20: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0040EA20: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_002893D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002893D8: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x002893DC: lw          $v1, 0x2030($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X2030);
    // 0x002893E0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x002893E4: slti        $v0, $v1, 0x11D
    ctx->r2 = SIGNED(ctx->r3) < 0X11D ? 1 : 0;
    // 0x002893E8: bne         $v0, $zero, L_00289414
    if (ctx->r2 != 0) {
        // 0x002893EC: sw          $ra, 0x20($sp)
        MEM_W(0X20, ctx->r29) = ctx->r31;
            goto L_00289414;
    }
    // 0x002893EC: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x002893F0: srl         $v0, $v1, 31
    ctx->r2 = S32(U32(ctx->r3) >> 31);
    // 0x002893F4: addu        $v0, $v1, $v0
    ctx->r2 = ADD32(ctx->r3, ctx->r2);
    // 0x002893F8: sra         $v0, $v0, 1
    ctx->r2 = S32(SIGNED(ctx->r2) >> 1);
    // 0x002893FC: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00289400: lwc1        $f1, -0x6200($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, -0X6200);
    // 0x00289404: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x00289408: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x0028940C: j           L_00289428
    // 0x00289410: sub.s       $f2, $f0, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f2.fl = ctx->f0.fl - ctx->f1.fl;
        goto L_00289428;
    // 0x00289410: sub.s       $f2, $f0, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f2.fl = ctx->f0.fl - ctx->f1.fl;
L_00289414:
    // 0x00289414: srl         $v0, $v1, 31
    ctx->r2 = S32(U32(ctx->r3) >> 31);
    // 0x00289418: addu        $v0, $v1, $v0
    ctx->r2 = ADD32(ctx->r3, ctx->r2);
    // 0x0028941C: sra         $v0, $v0, 1
    ctx->r2 = S32(SIGNED(ctx->r2) >> 1);
    // 0x00289420: mtc1        $v0, $f2
    ctx->f2.u32l = ctx->r2;
    // 0x00289424: cvt.s.w     $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    ctx->f2.fl = CVT_S_W(ctx->f2.u32l);
L_00289428:
    // 0x00289428: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
    // 0x0028942C: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x00289430: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x00289434: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x00289438: lui         $a2, 0x800B
    ctx->r6 = S32(0X800B << 16);
    // 0x0028943C: addiu       $a2, $a2, 0x3644
    ctx->r6 = ADD32(ctx->r6, 0X3644);
    // 0x00289440: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00289444: lwc1        $f0, -0x61FC($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X61FC);
    // 0x00289448: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0028944C: lwc1        $f1, -0x61F8($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, -0X61F8);
    // 0x00289450: trunc.w.s   $f3, $f2
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 2);
    ctx->f_odd[(3 - 1) * 2] = TRUNC_W_S(ctx->f2.fl);
    // 0x00289454: mfc1        $a3, $f3
    ctx->r7 = (int32_t)ctx->f_odd[(3 - 1) * 2];
    // 0x00289458: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x0028945C: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    // 0x00289460: jal         0x00286E14
    // 0x00289464: swc1        $f1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    func_00286E14(rdram, ctx);
        goto after_0;
    // 0x00289464: swc1        $f1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    after_0:
    // 0x00289468: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x0028946C: jr          $ra
    // 0x00289470: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x00289470: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_004030A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004030A4: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x004030A8: lw          $v0, -0xA4C($v0)
    ctx->r2 = MEM_W(ctx->r2, -0XA4C);
    // 0x004030AC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x004030B0: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x004030B4: lw          $a0, 0x10($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X10);
    // 0x004030B8: jal         0x0026D518
    // 0x004030BC: nop

    func_0026D518(rdram, ctx);
        goto after_0;
    // 0x004030BC: nop

    after_0:
    // 0x004030C0: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x004030C4: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x004030C8: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x004030CC: jr          $ra
    // 0x004030D0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x004030D0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00281518(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00281518: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x0028151C: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x00281520: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x00281524: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x00281528: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x0028152C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x00281530: sdc1        $f20, 0x30($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X30, ctx->r29);
    // 0x00281534: lw          $v0, 0x30($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X30);
    // 0x00281538: bne         $v0, $zero, L_0028154C
    if (ctx->r2 != 0) {
        // 0x0028153C: addu        $s2, $a1, $zero
        ctx->r18 = ADD32(ctx->r5, 0);
            goto L_0028154C;
    }
    // 0x0028153C: addu        $s2, $a1, $zero
    ctx->r18 = ADD32(ctx->r5, 0);
    // 0x00281540: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x00281544: j           L_002815C4
    // 0x00281548: nop

        goto L_002815C4;
    // 0x00281548: nop

L_0028154C:
    // 0x0028154C: lw          $s0, 0x20($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X20);
    // 0x00281550: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x00281554: beq         $s0, $zero, L_0028159C
    if (ctx->r16 == 0) {
        // 0x00281558: nop
    
            goto L_0028159C;
    }
    // 0x00281558: nop

L_0028155C:
    // 0x0028155C: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x00281560: addiu       $a1, $s0, 0x114
    ctx->r5 = ADD32(ctx->r16, 0X114);
    // 0x00281564: jal         0x0020EF2C
    // 0x00281568: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    func_0020EF2C(rdram, ctx);
        goto after_0;
    // 0x00281568: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    after_0:
    // 0x0028156C: lwc1        $f12, 0x10($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X10);
    // 0x00281570: mul.s       $f12, $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x00281574: lwc1        $f1, 0x14($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X14);
    // 0x00281578: mul.s       $f1, $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f1.fl);
    // 0x0028157C: lwc1        $f0, 0x18($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X18);
    // 0x00281580: mul.s       $f0, $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x00281584: add.s       $f12, $f12, $f1
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f1.fl;
    // 0x00281588: jal         0x00298470
    // 0x0028158C: add.s       $f12, $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f0.fl;
    func_00298470(rdram, ctx);
        goto after_1;
    // 0x0028158C: add.s       $f12, $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f0.fl;
    after_1:
    // 0x00281590: lw          $s0, 0x4($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X4);
    // 0x00281594: bne         $s0, $zero, L_0028155C
    if (ctx->r16 != 0) {
        // 0x00281598: add.s       $f20, $f20, $f0
        CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = ctx->f20.fl + ctx->f0.fl;
            goto L_0028155C;
    }
    // 0x00281598: add.s       $f20, $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = ctx->f20.fl + ctx->f0.fl;
L_0028159C:
    // 0x0028159C: lw          $v0, 0x30($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X30);
    // 0x002815A0: mtc1        $v0, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r2;
    // 0x002815A4: cvt.d.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.d = CVT_D_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x002815A8: bgezl       $v0, L_002815C0
    if (SIGNED(ctx->r2) >= 0) {
        // 0x002815AC: cvt.s.d     $f0, $f1
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.d); 
    ctx->f0.fl = CVT_S_D(ctx->f1.d);
            goto L_002815C0;
    }
    goto skip_0;
    // 0x002815AC: cvt.s.d     $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.d); 
    ctx->f0.fl = CVT_S_D(ctx->f1.d);
    skip_0:
    // 0x002815B0: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x002815B4: ldc1        $f0, -0x63F0($at)
    CHECK_FR(ctx, 0);
    ctx->f0.u64 = LD(ctx->r1, -0X63F0);
    // 0x002815B8: add.d       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.d); NAN_CHECK(ctx->f0.d); 
    ctx->f1.d = ctx->f1.d + ctx->f0.d;
    // 0x002815BC: cvt.s.d     $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.d); 
    ctx->f0.fl = CVT_S_D(ctx->f1.d);
L_002815C0:
    // 0x002815C0: div.s       $f0, $f20, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = DIV_S(ctx->f20.fl, ctx->f0.fl);
L_002815C4:
    // 0x002815C4: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x002815C8: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x002815CC: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x002815D0: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x002815D4: ldc1        $f20, 0x30($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X30);
    // 0x002815D8: jr          $ra
    // 0x002815DC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x002815DC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_0029F958(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0029F958: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x0029F95C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x0029F960: lw          $s1, 0x40($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X40);
    // 0x0029F964: sw          $s5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r21;
    // 0x0029F968: addu        $s5, $a2, $zero
    ctx->r21 = ADD32(ctx->r6, 0);
    // 0x0029F96C: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x0029F970: addu        $s4, $a0, $zero
    ctx->r20 = ADD32(ctx->r4, 0);
    // 0x0029F974: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x0029F978: sw          $s6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r22;
    // 0x0029F97C: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x0029F980: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x0029F984: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0029F988: lw          $v0, 0x28($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X28);
    // 0x0029F98C: lh          $s3, 0x0($a1)
    ctx->r19 = MEM_H(ctx->r5, 0X0);
    // 0x0029F990: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x0029F994: bne         $v0, $zero, L_0029F9F0
    if (ctx->r2 != 0) {
        // 0x0029F998: addu        $a1, $s1, $zero
        ctx->r5 = ADD32(ctx->r17, 0);
            goto L_0029F9F0;
    }
    // 0x0029F998: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x0029F99C: lui         $v1, 0xFF
    ctx->r3 = S32(0XFF << 16);
    // 0x0029F9A0: ori         $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 | 0XFFFF;
    // 0x0029F9A4: addiu       $v0, $s1, 0x8
    ctx->r2 = ADD32(ctx->r17, 0X8);
    // 0x0029F9A8: and         $v1, $s3, $v1
    ctx->r3 = ctx->r19 & ctx->r3;
    // 0x0029F9AC: lui         $a0, 0x200
    ctx->r4 = S32(0X200 << 16);
    // 0x0029F9B0: or          $v1, $v1, $a0
    ctx->r3 = ctx->r3 | ctx->r4;
    // 0x0029F9B4: sw          $v1, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r3;
    // 0x0029F9B8: sll         $v1, $s5, 1
    ctx->r3 = S32(ctx->r21 << 1);
    // 0x0029F9BC: j           L_0029FB3C
    // 0x0029F9C0: sw          $v1, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r3;
        goto L_0029FB3C;
    // 0x0029F9C0: sw          $v1, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r3;
L_0029F9C4:
    // 0x0029F9C4: lui         $a0, 0xFF
    ctx->r4 = S32(0XFF << 16);
    // 0x0029F9C8: ori         $a0, $a0, 0xFFFF
    ctx->r4 = ctx->r4 | 0XFFFF;
    // 0x0029F9CC: addiu       $v0, $s1, 0x8
    ctx->r2 = ADD32(ctx->r17, 0X8);
    // 0x0029F9D0: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x0029F9D4: and         $a0, $s3, $a0
    ctx->r4 = ctx->r19 & ctx->r4;
    // 0x0029F9D8: lui         $v1, 0x200
    ctx->r3 = S32(0X200 << 16);
    // 0x0029F9DC: or          $a0, $a0, $v1
    ctx->r4 = ctx->r4 | ctx->r3;
    // 0x0029F9E0: sll         $v1, $s5, 1
    ctx->r3 = S32(ctx->r21 << 1);
    // 0x0029F9E4: sw          $a0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r4;
    // 0x0029F9E8: j           L_0029FB3C
    // 0x0029F9EC: sw          $v1, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r3;
        goto L_0029FB3C;
    // 0x0029F9EC: sw          $v1, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r3;
L_0029F9F0:
    // 0x0029F9F0: beq         $s5, $zero, L_0029FB38
    if (ctx->r21 == 0) {
        // 0x0029F9F4: addiu       $s0, $s1, -0x4
        ctx->r16 = ADD32(ctx->r17, -0X4);
            goto L_0029FB38;
    }
    // 0x0029F9F4: addiu       $s0, $s1, -0x4
    ctx->r16 = ADD32(ctx->r17, -0X4);
    // 0x0029F9F8: lui         $s6, 0x800C
    ctx->r22 = S32(0X800C << 16);
    // 0x0029F9FC: addiu       $s6, $s6, -0x75E0
    ctx->r22 = ADD32(ctx->r22, -0X75E0);
L_0029FA00:
    // 0x0029FA00: lw          $v0, 0x38($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X38);
    // 0x0029FA04: bne         $v0, $zero, L_0029FA34
    if (ctx->r2 != 0) {
        // 0x0029FA08: addu        $s2, $s5, $zero
        ctx->r18 = ADD32(ctx->r21, 0);
            goto L_0029FA34;
    }
    // 0x0029FA08: addu        $s2, $s5, $zero
    ctx->r18 = ADD32(ctx->r21, 0);
    // 0x0029FA0C: jal         0x002A122C
    // 0x0029FA10: nop

    func_002A122C(rdram, ctx);
        goto after_0;
    // 0x0029FA10: nop

    after_0:
    // 0x0029FA14: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0029FA18: sw          $v0, -0x75E0($at)
    MEM_W(-0X75E0, ctx->r1) = ctx->r2;
    // 0x0029FA1C: beq         $v0, $zero, L_0029F9C4
    if (ctx->r2 == 0) {
        // 0x0029FA20: addu        $a0, $v0, $zero
        ctx->r4 = ADD32(ctx->r2, 0);
            goto L_0029F9C4;
    }
    // 0x0029FA20: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x0029FA24: jal         0x0029E340
    // 0x0029FA28: addiu       $a1, $zero, 0x200
    ctx->r5 = ADD32(0, 0X200);
    func_0029E340(rdram, ctx);
        goto after_1;
    // 0x0029FA28: addiu       $a1, $zero, 0x200
    ctx->r5 = ADD32(0, 0X200);
    after_1:
    // 0x0029FA2C: addiu       $v0, $zero, 0x100
    ctx->r2 = ADD32(0, 0X100);
    // 0x0029FA30: sw          $v0, 0x38($s4)
    MEM_W(0X38, ctx->r20) = ctx->r2;
L_0029FA34:
    // 0x0029FA34: lw          $v1, 0x38($s4)
    ctx->r3 = MEM_W(ctx->r20, 0X38);
    // 0x0029FA38: slt         $v0, $v1, $s5
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r21) ? 1 : 0;
    // 0x0029FA3C: bnel        $v0, $zero, L_0029FA44
    if (ctx->r2 != 0) {
        // 0x0029FA40: addu        $s2, $v1, $zero
        ctx->r18 = ADD32(ctx->r3, 0);
            goto L_0029FA44;
    }
    goto skip_0;
    // 0x0029FA40: addu        $s2, $v1, $zero
    ctx->r18 = ADD32(ctx->r3, 0);
    skip_0:
L_0029FA44:
    // 0x0029FA44: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x0029FA48: lw          $v0, -0x75E0($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X75E0);
    // 0x0029FA4C: sll         $a0, $s2, 1
    ctx->r4 = S32(ctx->r18 << 1);
    // 0x0029FA50: andi        $v1, $s3, 0x7
    ctx->r3 = ctx->r19 & 0X7;
    // 0x0029FA54: andi        $a2, $v0, 0x7
    ctx->r6 = ctx->r2 & 0X7;
    // 0x0029FA58: beq         $v1, $zero, L_0029FA6C
    if (ctx->r3 == 0) {
        // 0x0029FA5C: addu        $a0, $a0, $a2
        ctx->r4 = ADD32(ctx->r4, ctx->r6);
            goto L_0029FA6C;
    }
    // 0x0029FA5C: addu        $a0, $a0, $a2
    ctx->r4 = ADD32(ctx->r4, ctx->r6);
    // 0x0029FA60: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x0029FA64: j           L_0029FA70
    // 0x0029FA68: subu        $a1, $v0, $v1
    ctx->r5 = SUB32(ctx->r2, ctx->r3);
        goto L_0029FA70;
    // 0x0029FA68: subu        $a1, $v0, $v1
    ctx->r5 = SUB32(ctx->r2, ctx->r3);
L_0029FA6C:
    // 0x0029FA6C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
L_0029FA70:
    // 0x0029FA70: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x0029FA74: addu        $v0, $s3, $a1
    ctx->r2 = ADD32(ctx->r19, ctx->r5);
    // 0x0029FA78: andi        $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 & 0XFFFF;
    // 0x0029FA7C: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x0029FA80: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x0029FA84: sw          $v0, -0x4($s0)
    MEM_W(-0X4, ctx->r16) = ctx->r2;
    // 0x0029FA88: andi        $v0, $a0, 0x7
    ctx->r2 = ctx->r4 & 0X7;
    // 0x0029FA8C: addiu       $v0, $v0, -0x8
    ctx->r2 = ADD32(ctx->r2, -0X8);
    // 0x0029FA90: subu        $v0, $a0, $v0
    ctx->r2 = SUB32(ctx->r4, ctx->r2);
    // 0x0029FA94: andi        $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 & 0XFFFF;
    // 0x0029FA98: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x0029FA9C: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x0029FAA0: addiu       $s1, $s1, 0x10
    ctx->r17 = ADD32(ctx->r17, 0X10);
    // 0x0029FAA4: lui         $a0, 0x1FFF
    ctx->r4 = S32(0X1FFF << 16);
    // 0x0029FAA8: ori         $a0, $a0, 0xFFFF
    ctx->r4 = ctx->r4 | 0XFFFF;
    // 0x0029FAAC: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x0029FAB0: lw          $v1, -0x75E0($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X75E0);
    // 0x0029FAB4: lui         $v0, 0x400
    ctx->r2 = S32(0X400 << 16);
    // 0x0029FAB8: sw          $v0, -0x4($s0)
    MEM_W(-0X4, ctx->r16) = ctx->r2;
    // 0x0029FABC: and         $v1, $v1, $a0
    ctx->r3 = ctx->r3 & ctx->r4;
    // 0x0029FAC0: subu        $v1, $v1, $a2
    ctx->r3 = SUB32(ctx->r3, ctx->r6);
    // 0x0029FAC4: bne         $a2, $zero, L_0029FAD4
    if (ctx->r6 != 0) {
        // 0x0029FAC8: sw          $v1, 0x0($s0)
        MEM_W(0X0, ctx->r16) = ctx->r3;
            goto L_0029FAD4;
    }
    // 0x0029FAC8: sw          $v1, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r3;
    // 0x0029FACC: beql        $a1, $zero, L_0029FB14
    if (ctx->r5 == 0) {
        // 0x0029FAD0: subu        $s5, $s5, $s2
        ctx->r21 = SUB32(ctx->r21, ctx->r18);
            goto L_0029FB14;
    }
    goto skip_1;
    // 0x0029FAD0: subu        $s5, $s5, $s2
    ctx->r21 = SUB32(ctx->r21, ctx->r18);
    skip_1:
L_0029FAD4:
    // 0x0029FAD4: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x0029FAD8: addiu       $s1, $s1, 0x8
    ctx->r17 = ADD32(ctx->r17, 0X8);
    // 0x0029FADC: lui         $v1, 0xFF
    ctx->r3 = S32(0XFF << 16);
    // 0x0029FAE0: ori         $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 | 0XFFFF;
    // 0x0029FAE4: addu        $v0, $s3, $a2
    ctx->r2 = ADD32(ctx->r19, ctx->r6);
    // 0x0029FAE8: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x0029FAEC: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x0029FAF0: lui         $v1, 0xA00
    ctx->r3 = S32(0XA00 << 16);
    // 0x0029FAF4: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x0029FAF8: sll         $v1, $s3, 16
    ctx->r3 = S32(ctx->r19 << 16);
    // 0x0029FAFC: sw          $v0, -0x4($s0)
    MEM_W(-0X4, ctx->r16) = ctx->r2;
    // 0x0029FB00: sll         $v0, $s2, 1
    ctx->r2 = S32(ctx->r18 << 1);
    // 0x0029FB04: andi        $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 & 0XFFFF;
    // 0x0029FB08: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x0029FB0C: sw          $v1, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r3;
    // 0x0029FB10: subu        $s5, $s5, $s2
    ctx->r21 = SUB32(ctx->r21, ctx->r18);
L_0029FB14:
    // 0x0029FB14: sll         $v0, $s2, 1
    ctx->r2 = S32(ctx->r18 << 1);
    // 0x0029FB18: addu        $s3, $s3, $v0
    ctx->r19 = ADD32(ctx->r19, ctx->r2);
    // 0x0029FB1C: lw          $v1, 0x0($s6)
    ctx->r3 = MEM_W(ctx->r22, 0X0);
    // 0x0029FB20: lw          $a0, 0x38($s4)
    ctx->r4 = MEM_W(ctx->r20, 0X38);
    // 0x0029FB24: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x0029FB28: subu        $a0, $a0, $s2
    ctx->r4 = SUB32(ctx->r4, ctx->r18);
    // 0x0029FB2C: sw          $v1, 0x0($s6)
    MEM_W(0X0, ctx->r22) = ctx->r3;
    // 0x0029FB30: bne         $s5, $zero, L_0029FA00
    if (ctx->r21 != 0) {
        // 0x0029FB34: sw          $a0, 0x38($s4)
        MEM_W(0X38, ctx->r20) = ctx->r4;
            goto L_0029FA00;
    }
    // 0x0029FB34: sw          $a0, 0x38($s4)
    MEM_W(0X38, ctx->r20) = ctx->r4;
L_0029FB38:
    // 0x0029FB38: addu        $v0, $s1, $zero
    ctx->r2 = ADD32(ctx->r17, 0);
L_0029FB3C:
    // 0x0029FB3C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x0029FB40: lw          $s6, 0x28($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X28);
    // 0x0029FB44: lw          $s5, 0x24($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X24);
    // 0x0029FB48: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x0029FB4C: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x0029FB50: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x0029FB54: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x0029FB58: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0029FB5C: jr          $ra
    // 0x0029FB60: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x0029FB60: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_0028B4BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0028B4BC: bltz        $a0, L_0028B4CC
    if (SIGNED(ctx->r4) < 0) {
        // 0x0028B4C0: slti        $v0, $a0, 0x60
        ctx->r2 = SIGNED(ctx->r4) < 0X60 ? 1 : 0;
            goto L_0028B4CC;
    }
    // 0x0028B4C0: slti        $v0, $a0, 0x60
    ctx->r2 = SIGNED(ctx->r4) < 0X60 ? 1 : 0;
    // 0x0028B4C4: bne         $v0, $zero, L_0028B4D4
    if (ctx->r2 != 0) {
        // 0x0028B4C8: addu        $a3, $zero, $zero
        ctx->r7 = ADD32(0, 0);
            goto L_0028B4D4;
    }
    // 0x0028B4C8: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
L_0028B4CC:
    // 0x0028B4CC: addiu       $a0, $zero, 0x1F
    ctx->r4 = ADD32(0, 0X1F);
    // 0x0028B4D0: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
L_0028B4D4:
    // 0x0028B4D4: lui         $t6, 0x800C
    ctx->r14 = S32(0X800C << 16);
    // 0x0028B4D8: lw          $t6, 0x2030($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X2030);
    // 0x0028B4DC: lui         $t3, 0x8012
    ctx->r11 = S32(0X8012 << 16);
    // 0x0028B4E0: lw          $t3, -0xE80($t3)
    ctx->r11 = MEM_W(ctx->r11, -0XE80);
    // 0x0028B4E4: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0028B4E8: lw          $v0, 0x7494($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X7494);
    // 0x0028B4EC: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x0028B4F0: lw          $v1, 0x7490($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X7490);
    // 0x0028B4F4: sll         $t5, $v0, 4
    ctx->r13 = S32(ctx->r2 << 4);
    // 0x0028B4F8: sll         $t2, $v1, 3
    ctx->r10 = S32(ctx->r3 << 3);
    // 0x0028B4FC: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
L_0028B500:
    // 0x0028B500: sll         $v0, $a0, 4
    ctx->r2 = S32(ctx->r4 << 4);
    // 0x0028B504: addu        $t1, $a3, $v0
    ctx->r9 = ADD32(ctx->r7, ctx->r2);
    // 0x0028B508: addiu       $t4, $zero, 0x7
    ctx->r12 = ADD32(0, 0X7);
    // 0x0028B50C: addu        $v0, $t5, $a3
    ctx->r2 = ADD32(ctx->r13, ctx->r7);
    // 0x0028B510: mult        $v0, $t6
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r14)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x0028B514: mflo        $t0
    ctx->r8 = lo;
    // 0x0028B518: addu        $v0, $t2, $a1
    ctx->r2 = ADD32(ctx->r10, ctx->r5);
L_0028B51C:
    // 0x0028B51C: addu        $v0, $t0, $v0
    ctx->r2 = ADD32(ctx->r8, ctx->r2);
    // 0x0028B520: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x0028B524: addu        $a2, $v0, $t3
    ctx->r6 = ADD32(ctx->r2, ctx->r11);
    // 0x0028B528: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0028B52C: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x0028B530: lbu         $v0, 0x6EA0($at)
    ctx->r2 = MEM_BU(ctx->r1, 0X6EA0);
    // 0x0028B534: subu        $v1, $t4, $a1
    ctx->r3 = SUB32(ctx->r12, ctx->r5);
    // 0x0028B538: srav        $v0, $v0, $v1
    ctx->r2 = S32(SIGNED(ctx->r2) >> (ctx->r3 & 31));
    // 0x0028B53C: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x0028B540: bne         $v0, $zero, L_0028B558
    if (ctx->r2 != 0) {
        // 0x0028B544: nop
    
            goto L_0028B558;
    }
    // 0x0028B544: nop

    // 0x0028B548: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0028B54C: lhu         $v0, 0x7498($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X7498);
    // 0x0028B550: j           L_0028B564
    // 0x0028B554: sh          $v0, 0x0($a2)
    MEM_H(0X0, ctx->r6) = ctx->r2;
        goto L_0028B564;
    // 0x0028B554: sh          $v0, 0x0($a2)
    MEM_H(0X0, ctx->r6) = ctx->r2;
L_0028B558:
    // 0x0028B558: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x0028B55C: lhu         $v0, -0xE7C($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0XE7C);
    // 0x0028B560: sh          $v0, 0x0($a2)
    MEM_H(0X0, ctx->r6) = ctx->r2;
L_0028B564:
    // 0x0028B564: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x0028B568: slti        $v0, $a1, 0x8
    ctx->r2 = SIGNED(ctx->r5) < 0X8 ? 1 : 0;
    // 0x0028B56C: bne         $v0, $zero, L_0028B51C
    if (ctx->r2 != 0) {
        // 0x0028B570: addu        $v0, $t2, $a1
        ctx->r2 = ADD32(ctx->r10, ctx->r5);
            goto L_0028B51C;
    }
    // 0x0028B570: addu        $v0, $t2, $a1
    ctx->r2 = ADD32(ctx->r10, ctx->r5);
    // 0x0028B574: addiu       $a3, $a3, 0x1
    ctx->r7 = ADD32(ctx->r7, 0X1);
    // 0x0028B578: slti        $v0, $a3, 0x10
    ctx->r2 = SIGNED(ctx->r7) < 0X10 ? 1 : 0;
    // 0x0028B57C: bnel        $v0, $zero, L_0028B500
    if (ctx->r2 != 0) {
        // 0x0028B580: addu        $a1, $zero, $zero
        ctx->r5 = ADD32(0, 0);
            goto L_0028B500;
    }
    goto skip_0;
    // 0x0028B580: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    skip_0:
    // 0x0028B584: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0028B588: lw          $v0, 0x7490($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X7490);
    // 0x0028B58C: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x0028B590: lw          $v1, 0x2030($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X2030);
    // 0x0028B594: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x0028B598: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x0028B59C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0028B5A0: sw          $v0, 0x7490($at)
    MEM_W(0X7490, ctx->r1) = ctx->r2;
    // 0x0028B5A4: bltzl       $v1, L_0028B5AC
    if (SIGNED(ctx->r3) < 0) {
        // 0x0028B5A8: addiu       $v1, $v1, 0x7
        ctx->r3 = ADD32(ctx->r3, 0X7);
            goto L_0028B5AC;
    }
    goto skip_1;
    // 0x0028B5A8: addiu       $v1, $v1, 0x7
    ctx->r3 = ADD32(ctx->r3, 0X7);
    skip_1:
L_0028B5AC:
    // 0x0028B5AC: sra         $v0, $v1, 3
    ctx->r2 = S32(SIGNED(ctx->r3) >> 3);
    // 0x0028B5B0: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x0028B5B4: sltu        $v0, $a0, $v0
    ctx->r2 = ctx->r4 < ctx->r2 ? 1 : 0;
    // 0x0028B5B8: bne         $v0, $zero, L_0028B60C
    if (ctx->r2 != 0) {
        // 0x0028B5BC: nop
    
            goto L_0028B60C;
    }
    // 0x0028B5BC: nop

    // 0x0028B5C0: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x0028B5C4: lw          $a0, 0x2034($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X2034);
    // 0x0028B5C8: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x0028B5CC: lw          $v1, 0x7494($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X7494);
    // 0x0028B5D0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x0028B5D4: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0028B5D8: sw          $v0, 0x7490($at)
    MEM_W(0X7490, ctx->r1) = ctx->r2;
    // 0x0028B5DC: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x0028B5E0: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0028B5E4: sw          $v1, 0x7494($at)
    MEM_W(0X7494, ctx->r1) = ctx->r3;
    // 0x0028B5E8: bltzl       $a0, L_0028B5F0
    if (SIGNED(ctx->r4) < 0) {
        // 0x0028B5EC: addiu       $a0, $a0, 0xF
        ctx->r4 = ADD32(ctx->r4, 0XF);
            goto L_0028B5F0;
    }
    goto skip_2;
    // 0x0028B5EC: addiu       $a0, $a0, 0xF
    ctx->r4 = ADD32(ctx->r4, 0XF);
    skip_2:
L_0028B5F0:
    // 0x0028B5F0: sra         $v0, $a0, 4
    ctx->r2 = S32(SIGNED(ctx->r4) >> 4);
    // 0x0028B5F4: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x0028B5F8: sltu        $v0, $v1, $v0
    ctx->r2 = ctx->r3 < ctx->r2 ? 1 : 0;
    // 0x0028B5FC: bne         $v0, $zero, L_0028B60C
    if (ctx->r2 != 0) {
        // 0x0028B600: nop
    
            goto L_0028B60C;
    }
    // 0x0028B600: nop

    // 0x0028B604: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0028B608: sw          $zero, 0x7494($at)
    MEM_W(0X7494, ctx->r1) = 0;
L_0028B60C:
    // 0x0028B60C: jr          $ra
    // 0x0028B610: nop

    return;
    // 0x0028B610: nop

;}
RECOMP_FUNC void func_0028962C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0028962C: jr          $ra
    // 0x00289630: nop

    return;
    // 0x00289630: nop

;}
