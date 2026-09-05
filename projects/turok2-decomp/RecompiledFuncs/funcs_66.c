#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_00408E64(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00408E64: lui         $v1, 0x8011
    ctx->r3 = S32(0X8011 << 16);
    // 0x00408E68: lw          $v1, -0x14C($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X14C);
    // 0x00408E6C: beq         $v1, $zero, L_00408E9C
    if (ctx->r3 == 0) {
        // 0x00408E70: addiu       $a0, $zero, 0x1
        ctx->r4 = ADD32(0, 0X1);
            goto L_00408E9C;
    }
    // 0x00408E70: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
L_00408E74:
    // 0x00408E74: lw          $v0, 0x14($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X14);
    // 0x00408E78: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x00408E7C: bne         $v0, $a0, L_00408E90
    if (ctx->r2 != ctx->r4) {
        // 0x00408E80: nop
    
            goto L_00408E90;
    }
    // 0x00408E80: nop

    // 0x00408E84: lw          $v0, 0x144($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X144);
    // 0x00408E88: bne         $v0, $zero, L_00408EA4
    if (ctx->r2 != 0) {
            // 0x00408E8C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    func_00408EA4(rdram, ctx);
    return;
    }
    // 0x00408E8C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_00408E90:
    // 0x00408E90: lw          $v1, 0x28C($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X28C);
    // 0x00408E94: bne         $v1, $zero, L_00408E74
    if (ctx->r3 != 0) {
        // 0x00408E98: nop
    
            goto L_00408E74;
    }
    // 0x00408E98: nop

L_00408E9C:
    // 0x00408E9C: jr          $ra
    // 0x00408EA0: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x00408EA0: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void func_0025C430(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0025C430: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0025C434: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0025C438: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x0025C43C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x0025C440: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // 0x0025C444: beq         $v0, $zero, L_0025C5E8
    if (ctx->r2 == 0) {
        // 0x0025C448: addu        $a2, $a0, $zero
        ctx->r6 = ADD32(ctx->r4, 0);
            goto L_0025C5E8;
    }
    // 0x0025C448: addu        $a2, $a0, $zero
    ctx->r6 = ADD32(ctx->r4, 0);
    // 0x0025C44C: lb          $a0, 0x34($s0)
    ctx->r4 = MEM_B(ctx->r16, 0X34);
    // 0x0025C450: beq         $a0, $zero, L_0025C5E8
    if (ctx->r4 == 0) {
        // 0x0025C454: nop
    
            goto L_0025C5E8;
    }
    // 0x0025C454: nop

    // 0x0025C458: lb          $v1, 0x37($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X37);
    // 0x0025C45C: beq         $v1, $zero, L_0025C474
    if (ctx->r3 == 0) {
        // 0x0025C460: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_0025C474;
    }
    // 0x0025C460: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0025C464: beq         $v1, $v0, L_0025C59C
    if (ctx->r3 == ctx->r2) {
        // 0x0025C468: nop
    
            goto L_0025C59C;
    }
    // 0x0025C468: nop

    // 0x0025C46C: j           L_0025C5E8
    // 0x0025C470: nop

        goto L_0025C5E8;
    // 0x0025C470: nop

L_0025C474:
    // 0x0025C474: lwc1        $f1, 0x44($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X44);
    // 0x0025C478: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0025C47C: lwc1        $f0, 0x75D0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X75D0);
    // 0x0025C480: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x0025C484: nop

    // 0x0025C488: bc1f        L_0025C560
    if (!c1cs) {
        // 0x0025C48C: nop
    
            goto L_0025C560;
    }
    // 0x0025C48C: nop

    // 0x0025C490: lw          $v0, 0x14($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X14);
    // 0x0025C494: addiu       $a1, $v0, 0x14
    ctx->r5 = ADD32(ctx->r2, 0X14);
    // 0x0025C498: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x0025C49C: beq         $a0, $v0, L_0025C514
    if (ctx->r4 == ctx->r2) {
        // 0x0025C4A0: addiu       $v0, $zero, 0x3D
        ctx->r2 = ADD32(0, 0X3D);
            goto L_0025C514;
    }
    // 0x0025C4A0: addiu       $v0, $zero, 0x3D
    ctx->r2 = ADD32(0, 0X3D);
    // 0x0025C4A4: beq         $a0, $v0, L_0025C514
    if (ctx->r4 == ctx->r2) {
        // 0x0025C4A8: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_0025C514;
    }
    // 0x0025C4A8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0025C4AC: lb          $v1, 0x133($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X133);
    // 0x0025C4B0: beq         $v1, $v0, L_0025C4F4
    if (ctx->r3 == ctx->r2) {
        // 0x0025C4B4: nop
    
            goto L_0025C4F4;
    }
    // 0x0025C4B4: nop

    // 0x0025C4B8: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x0025C4BC: beql        $v0, $zero, L_0025C4D4
    if (ctx->r2 == 0) {
        // 0x0025C4C0: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_0025C4D4;
    }
    goto skip_0;
    // 0x0025C4C0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x0025C4C4: beq         $v1, $zero, L_0025C4E4
    if (ctx->r3 == 0) {
        // 0x0025C4C8: nop
    
            goto L_0025C4E4;
    }
    // 0x0025C4C8: nop

    // 0x0025C4CC: j           L_0025C518
    // 0x0025C4D0: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
        goto L_0025C518;
    // 0x0025C4D0: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_0025C4D4:
    // 0x0025C4D4: beq         $v1, $v0, L_0025C504
    if (ctx->r3 == ctx->r2) {
        // 0x0025C4D8: nop
    
            goto L_0025C504;
    }
    // 0x0025C4D8: nop

    // 0x0025C4DC: j           L_0025C518
    // 0x0025C4E0: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
        goto L_0025C518;
    // 0x0025C4E0: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_0025C4E4:
    // 0x0025C4E4: lhu         $v0, 0x7E($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X7E);
    // 0x0025C4E8: andi        $v0, $v0, 0x1F
    ctx->r2 = ctx->r2 & 0X1F;
    // 0x0025C4EC: j           L_0025C518
    // 0x0025C4F0: sltu        $v0, $zero, $v0
    ctx->r2 = 0 < ctx->r2 ? 1 : 0;
        goto L_0025C518;
    // 0x0025C4F0: sltu        $v0, $zero, $v0
    ctx->r2 = 0 < ctx->r2 ? 1 : 0;
L_0025C4F4:
    // 0x0025C4F4: lhu         $v0, 0x7E($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X7E);
    // 0x0025C4F8: andi        $v0, $v0, 0x3E0
    ctx->r2 = ctx->r2 & 0X3E0;
    // 0x0025C4FC: j           L_0025C518
    // 0x0025C500: sltu        $v0, $zero, $v0
    ctx->r2 = 0 < ctx->r2 ? 1 : 0;
        goto L_0025C518;
    // 0x0025C500: sltu        $v0, $zero, $v0
    ctx->r2 = 0 < ctx->r2 ? 1 : 0;
L_0025C504:
    // 0x0025C504: lhu         $v0, 0x7E($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X7E);
    // 0x0025C508: andi        $v0, $v0, 0x7C00
    ctx->r2 = ctx->r2 & 0X7C00;
    // 0x0025C50C: j           L_0025C518
    // 0x0025C510: sltu        $v0, $zero, $v0
    ctx->r2 = 0 < ctx->r2 ? 1 : 0;
        goto L_0025C518;
    // 0x0025C510: sltu        $v0, $zero, $v0
    ctx->r2 = 0 < ctx->r2 ? 1 : 0;
L_0025C514:
    // 0x0025C514: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_0025C518:
    // 0x0025C518: beq         $v0, $zero, L_0025C52C
    if (ctx->r2 == 0) {
        // 0x0025C51C: addu        $a0, $a2, $zero
        ctx->r4 = ADD32(ctx->r6, 0);
            goto L_0025C52C;
    }
    // 0x0025C51C: addu        $a0, $a2, $zero
    ctx->r4 = ADD32(ctx->r6, 0);
    // 0x0025C520: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x0025C524: jal         0x00243414
    // 0x0025C528: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    func_00243414(rdram, ctx);
        goto after_0;
    // 0x0025C528: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    after_0:
L_0025C52C:
    // 0x0025C52C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0025C530: lui         $t2, 0x800B
    ctx->r10 = S32(0X800B << 16);
    // 0x0025C534: addiu       $t2, $t2, 0x6AC
    ctx->r10 = ADD32(ctx->r10, 0X6AC);
    // 0x0025C538: lui         $t1, 0x800B
    ctx->r9 = S32(0X800B << 16);
    // 0x0025C53C: addiu       $t1, $t1, 0x6A0
    ctx->r9 = ADD32(ctx->r9, 0X6A0);
    // 0x0025C540: lw          $a3, 0x0($t2)
    ctx->r7 = MEM_W(ctx->r10, 0X0);
    // 0x0025C544: lw          $t0, 0x4($t2)
    ctx->r8 = MEM_W(ctx->r10, 0X4);
    // 0x0025C548: sw          $a3, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r7;
    // 0x0025C54C: sw          $t0, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r8;
    // 0x0025C550: lw          $a3, 0x8($t2)
    ctx->r7 = MEM_W(ctx->r10, 0X8);
    // 0x0025C554: sw          $a3, 0x8($t1)
    MEM_W(0X8, ctx->r9) = ctx->r7;
    // 0x0025C558: j           L_0025C594
    // 0x0025C55C: sb          $v0, 0x37($s0)
    MEM_B(0X37, ctx->r16) = ctx->r2;
        goto L_0025C594;
    // 0x0025C55C: sb          $v0, 0x37($s0)
    MEM_B(0X37, ctx->r16) = ctx->r2;
L_0025C560:
    // 0x0025C560: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x0025C564: c.lt.s      $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f2.fl < ctx->f1.fl;
    // 0x0025C568: nop

    // 0x0025C56C: bc1fl       L_0025C5E8
    if (!c1cs) {
        // 0x0025C570: sw          $zero, 0x120($s0)
        MEM_W(0X120, ctx->r16) = 0;
            goto L_0025C5E8;
    }
    goto skip_1;
    // 0x0025C570: sw          $zero, 0x120($s0)
    MEM_W(0X120, ctx->r16) = 0;
    skip_1:
    // 0x0025C574: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0025C578: lwc1        $f0, 0x6D28($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6D28);
    // 0x0025C57C: sub.s       $f0, $f1, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f1.fl - ctx->f0.fl;
    // 0x0025C580: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x0025C584: nop

    // 0x0025C588: bc1f        L_0025C594
    if (!c1cs) {
        // 0x0025C58C: swc1        $f0, 0x44($s0)
        MEM_W(0X44, ctx->r16) = ctx->f0.u32l;
            goto L_0025C594;
    }
    // 0x0025C58C: swc1        $f0, 0x44($s0)
    MEM_W(0X44, ctx->r16) = ctx->f0.u32l;
    // 0x0025C590: swc1        $f2, 0x44($s0)
    MEM_W(0X44, ctx->r16) = ctx->f2.u32l;
L_0025C594:
    // 0x0025C594: j           L_0025C5E8
    // 0x0025C598: sw          $zero, 0x120($s0)
    MEM_W(0X120, ctx->r16) = 0;
        goto L_0025C5E8;
    // 0x0025C598: sw          $zero, 0x120($s0)
    MEM_W(0X120, ctx->r16) = 0;
L_0025C59C:
    // 0x0025C59C: lwc1        $f0, 0x44($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X44);
    // 0x0025C5A0: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0025C5A4: lwc1        $f1, 0x6D28($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X6D28);
    // 0x0025C5A8: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x0025C5AC: mtc1        $zero, $f1
    ctx->f_odd[(1 - 1) * 2] = 0;
    // 0x0025C5B0: c.le.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl <= ctx->f1.fl;
    // 0x0025C5B4: nop

    // 0x0025C5B8: bc1f        L_0025C5E8
    if (!c1cs) {
        // 0x0025C5BC: swc1        $f0, 0x44($s0)
        MEM_W(0X44, ctx->r16) = ctx->f0.u32l;
            goto L_0025C5E8;
    }
    // 0x0025C5BC: swc1        $f0, 0x44($s0)
    MEM_W(0X44, ctx->r16) = ctx->f0.u32l;
    // 0x0025C5C0: lb          $v0, 0x94($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X94);
    // 0x0025C5C4: swc1        $f1, 0x44($s0)
    MEM_W(0X44, ctx->r16) = ctx->f_odd[(1 - 1) * 2];
    // 0x0025C5C8: beq         $v0, $zero, L_0025C5E8
    if (ctx->r2 == 0) {
        // 0x0025C5CC: sb          $zero, 0x37($s0)
        MEM_B(0X37, ctx->r16) = 0;
            goto L_0025C5E8;
    }
    // 0x0025C5CC: sb          $zero, 0x37($s0)
    MEM_B(0X37, ctx->r16) = 0;
    // 0x0025C5D0: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x0025C5D4: addiu       $a0, $a0, 0x7078
    ctx->r4 = ADD32(ctx->r4, 0X7078);
    // 0x0025C5D8: lbu         $a1, 0x95($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X95);
    // 0x0025C5DC: jal         0x002261A8
    // 0x0025C5E0: addiu       $a2, $a2, 0x4
    ctx->r6 = ADD32(ctx->r6, 0X4);
    func_002261A8(rdram, ctx);
        goto after_1;
    // 0x0025C5E0: addiu       $a2, $a2, 0x4
    ctx->r6 = ADD32(ctx->r6, 0X4);
    after_1:
    // 0x0025C5E4: sh          $v0, 0x96($s0)
    MEM_H(0X96, ctx->r16) = ctx->r2;
L_0025C5E8:
    // 0x0025C5E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x0025C5EC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0025C5F0: jr          $ra
    // 0x0025C5F4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0025C5F4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0025F1D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0025F1D0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x0025F1D4: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x0025F1D8: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x0025F1DC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0025F1E0: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x0025F1E4: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x0025F1E8: lw          $v0, 0xD4($s1)
    ctx->r2 = MEM_W(ctx->r17, 0XD4);
    // 0x0025F1EC: lui         $v1, 0x2
    ctx->r3 = S32(0X2 << 16);
    // 0x0025F1F0: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x0025F1F4: sw          $v0, 0xD4($s1)
    MEM_W(0XD4, ctx->r17) = ctx->r2;
    // 0x0025F1F8: lhu         $v1, 0xC4($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0XC4);
    // 0x0025F1FC: addiu       $v0, $v1, -0x206C
    ctx->r2 = ADD32(ctx->r3, -0X206C);
    // 0x0025F200: sltiu       $v0, $v0, 0x5
    ctx->r2 = ctx->r2 < 0X5 ? 1 : 0;
    // 0x0025F204: bne         $v0, $zero, L_0025F228
    if (ctx->r2 != 0) {
        // 0x0025F208: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_0025F228;
    }
    // 0x0025F208: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0025F20C: addiu       $v0, $v1, -0x2076
    ctx->r2 = ADD32(ctx->r3, -0X2076);
    // 0x0025F210: sltiu       $v0, $v0, 0x5
    ctx->r2 = ctx->r2 < 0X5 ? 1 : 0;
    // 0x0025F214: bne         $v0, $zero, L_0025F228
    if (ctx->r2 != 0) {
        // 0x0025F218: addiu       $v0, $v1, -0x2080
        ctx->r2 = ADD32(ctx->r3, -0X2080);
            goto L_0025F228;
    }
    // 0x0025F218: addiu       $v0, $v1, -0x2080
    ctx->r2 = ADD32(ctx->r3, -0X2080);
    // 0x0025F21C: sltiu       $v0, $v0, 0x5
    ctx->r2 = ctx->r2 < 0X5 ? 1 : 0;
    // 0x0025F220: beq         $v0, $zero, L_0025F270
    if (ctx->r2 == 0) {
        // 0x0025F224: nop
    
            goto L_0025F270;
    }
    // 0x0025F224: nop

L_0025F228:
    // 0x0025F228: lw          $a2, 0x80($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X80);
    // 0x0025F22C: lui         $a3, 0x3E86
    ctx->r7 = S32(0X3E86 << 16);
    // 0x0025F230: ori         $a3, $a3, 0xA93
    ctx->r7 = ctx->r7 | 0XA93;
    // 0x0025F234: jal         0x002451AC
    // 0x0025F238: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_002451AC(rdram, ctx);
        goto after_0;
    // 0x0025F238: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_0:
    // 0x0025F23C: beq         $v0, $zero, L_0025F24C
    if (ctx->r2 == 0) {
        // 0x0025F240: nop
    
            goto L_0025F24C;
    }
    // 0x0025F240: nop

    // 0x0025F244: j           L_0025F288
    // 0x0025F248: sw          $zero, 0x40($s0)
    MEM_W(0X40, ctx->r16) = 0;
        goto L_0025F288;
    // 0x0025F248: sw          $zero, 0x40($s0)
    MEM_W(0X40, ctx->r16) = 0;
L_0025F24C:
    // 0x0025F24C: lwc1        $f1, 0x40($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X40);
    // 0x0025F250: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0025F254: lwc1        $f0, 0x78D4($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X78D4);
    // 0x0025F258: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x0025F25C: nop

    // 0x0025F260: bc1f        L_0025F288
    if (!c1cs) {
        // 0x0025F264: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_0025F288;
    }
    // 0x0025F264: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0025F268: j           L_0025F280
    // 0x0025F26C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
        goto L_0025F280;
    // 0x0025F26C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
L_0025F270:
    // 0x0025F270: lb          $v0, 0xC7($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XC7);
    // 0x0025F274: beq         $v0, $zero, L_0025F288
    if (ctx->r2 == 0) {
        // 0x0025F278: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_0025F288;
    }
    // 0x0025F278: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0025F27C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
L_0025F280:
    // 0x0025F280: jal         0x00243414
    // 0x0025F284: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    func_00243414(rdram, ctx);
        goto after_1;
    // 0x0025F284: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    after_1:
L_0025F288:
    // 0x0025F288: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x0025F28C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x0025F290: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0025F294: jr          $ra
    // 0x0025F298: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x0025F298: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_004491B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_00410388:
    // 0x004491B8: addiu       $sp, $sp, -0x10
    ctx->r29 = ADD32(ctx->r29, -0X10);
L_00410558:
    // 0x004491BC: mtc1        $a3, $f6
    ctx->f6.u32l = ctx->r7;
    // 0x004491C0: addu        $t1, $zero, $zero
    ctx->r9 = ADD32(0, 0);
    // 0x004491C4: bne         $a2, $zero, L_004491DC
    if (ctx->r6 != 0) {
        // 0x004491C8: addu        $t2, $t1, $zero
        ctx->r10 = ADD32(ctx->r9, 0);
            goto L_004491DC;
    }
    // 0x004491C8: addu        $t2, $t1, $zero
    ctx->r10 = ADD32(ctx->r9, 0);
    // 0x004491CC: sw          $zero, 0x0($sp)
    MEM_W(0X0, ctx->r29) = 0;
    // 0x004491D0: sw          $zero, 0x4($sp)
    MEM_W(0X4, ctx->r29) = 0;
    // 0x004491D4: j           L_00410558
    // 0x004491D8: sw          $zero, 0x8($sp)
    MEM_W(0X8, ctx->r29) = 0;
    entry_00410558(rdram, ctx);
    return;
    // 0x004491D8: sw          $zero, 0x8($sp)
    MEM_W(0X8, ctx->r29) = 0;
L_004491DC:
    // 0x004491DC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x004491E0: beq         $a2, $v0, L_004491FC
    if (ctx->r6 == ctx->r2) {
        // 0x004491E4: nop
    
            goto L_004491FC;
    }
    // 0x004491E4: nop

    // 0x004491E8: lwc1        $f0, 0x1C($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X1C);
    // 0x004491EC: c.le.s      $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.fl <= ctx->f0.fl;
    // 0x004491F0: nop

    // 0x004491F4: bc1f        L_00449218
    if (!c1cs) {
        // 0x004491F8: sll         $v0, $a2, 3
        ctx->r2 = S32(ctx->r6 << 3);
            goto L_00449218;
    }
    // 0x004491F8: sll         $v0, $a2, 3
    ctx->r2 = S32(ctx->r6 << 3);
L_004491FC:
    // 0x004491FC: lwc1        $f0, 0x0($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X0);
    // 0x00449200: swc1        $f0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->f0.u32l;
    // 0x00449204: lwc1        $f0, 0x4($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X4);
    // 0x00449208: swc1        $f0, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->f0.u32l;
    // 0x0044920C: lwc1        $f0, 0x8($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X8);
    // 0x00449210: j           L_00410558
    // 0x00449214: swc1        $f0, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->f0.u32l;
    entry_00410558(rdram, ctx);
    return;
    // 0x00449214: swc1        $f0, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->f0.u32l;
L_00449218:
    // 0x00449218: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x0044921C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x00449220: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x00449224: addiu       $v1, $v0, -0x24
    ctx->r3 = ADD32(ctx->r2, -0X24);
    // 0x00449228: lwc1        $f0, 0x1C($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X1C);
    // 0x0044922C: c.le.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl <= ctx->f6.fl;
    // 0x00449230: nop

    // 0x00449234: bc1fl       L_00449258
    if (!c1cs) {
        // 0x00449238: addiu       $v1, $a2, -0x1
        ctx->r3 = ADD32(ctx->r6, -0X1);
            goto L_00449258;
    }
    goto skip_0;
    // 0x00449238: addiu       $v1, $a2, -0x1
    ctx->r3 = ADD32(ctx->r6, -0X1);
    skip_0:
    // 0x0044923C: lwc1        $f0, -0x24($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, -0X24);
    // 0x00449240: swc1        $f0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->f0.u32l;
    // 0x00449244: lwc1        $f0, 0x4($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X4);
    // 0x00449248: swc1        $f0, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->f0.u32l;
    // 0x0044924C: lwc1        $f0, 0x8($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X8);
    // 0x00449250: j           L_00410558
    // 0x00449254: swc1        $f0, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->f0.u32l;
    entry_00410558(rdram, ctx);
    return;
    // 0x00449254: swc1        $f0, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->f0.u32l;
L_00449258:
    // 0x00449258: slt         $v0, $t2, $v1
    ctx->r2 = SIGNED(ctx->r10) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x0044925C: beq         $v0, $zero, L_004492B0
    if (ctx->r2 == 0) {
        // 0x00449260: addu        $a3, $zero, $zero
        ctx->r7 = ADD32(0, 0);
            goto L_004492B0;
    }
    // 0x00449260: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x00449264: addu        $t3, $v1, $zero
    ctx->r11 = ADD32(ctx->r3, 0);
    // 0x00449268: addiu       $t0, $zero, 0x24
    ctx->r8 = ADD32(0, 0X24);
    // 0x0044926C: addu        $v1, $a1, $zero
    ctx->r3 = ADD32(ctx->r5, 0);
L_00449270:
    // 0x00449270: addu        $t1, $v1, $zero
    ctx->r9 = ADD32(ctx->r3, 0);
    // 0x00449274: lwc1        $f0, 0x1C($t1)
    ctx->f0.u32l = MEM_W(ctx->r9, 0X1C);
    // 0x00449278: c.le.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl <= ctx->f6.fl;
    // 0x0044927C: nop

    // 0x00449280: bc1f        L_0044929C
    if (!c1cs) {
        // 0x00449284: addu        $t2, $a1, $t0
        ctx->r10 = ADD32(ctx->r5, ctx->r8);
            goto L_0044929C;
    }
    // 0x00449284: addu        $t2, $a1, $t0
    ctx->r10 = ADD32(ctx->r5, ctx->r8);
    // 0x00449288: lwc1        $f0, 0x1C($t2)
    ctx->f0.u32l = MEM_W(ctx->r10, 0X1C);
    // 0x0044928C: c.lt.s      $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.fl < ctx->f0.fl;
    // 0x00449290: nop

    // 0x00449294: bc1t        L_004492B0
    if (c1cs) {
        // 0x00449298: nop
    
            goto L_004492B0;
    }
    // 0x00449298: nop

L_0044929C:
    // 0x0044929C: addiu       $t0, $t0, 0x24
    ctx->r8 = ADD32(ctx->r8, 0X24);
    // 0x004492A0: addiu       $a3, $a3, 0x1
    ctx->r7 = ADD32(ctx->r7, 0X1);
    // 0x004492A4: slt         $v0, $a3, $t3
    ctx->r2 = SIGNED(ctx->r7) < SIGNED(ctx->r11) ? 1 : 0;
    // 0x004492A8: bne         $v0, $zero, L_00449270
    if (ctx->r2 != 0) {
        // 0x004492AC: addiu       $v1, $t1, 0x24
        ctx->r3 = ADD32(ctx->r9, 0X24);
            goto L_00449270;
    }
    // 0x004492AC: addiu       $v1, $t1, 0x24
    ctx->r3 = ADD32(ctx->r9, 0X24);
L_004492B0:
    // 0x004492B0: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x004492B4: mov.s       $f5, $f2
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 2);
    ctx->f5.fl = ctx->f2.fl;
    // 0x004492B8: blez        $a3, L_004492DC
    if (SIGNED(ctx->r7) <= 0) {
        // 0x004492BC: mov.s       $f3, $f2
        CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 2);
    ctx->f3.fl = ctx->f2.fl;
            goto L_004492DC;
    }
    // 0x004492BC: mov.s       $f3, $f2
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 2);
    ctx->f3.fl = ctx->f2.fl;
    // 0x004492C0: sll         $v0, $a3, 3
    ctx->r2 = S32(ctx->r7 << 3);
    // 0x004492C4: addu        $v0, $v0, $a3
    ctx->r2 = ADD32(ctx->r2, ctx->r7);
    // 0x004492C8: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x004492CC: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x004492D0: lwc1        $f1, 0x18($v0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r2, 0X18);
    // 0x004492D4: lwc1        $f0, -0xC($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, -0XC);
    // 0x004492D8: sub.s       $f5, $f1, $f0
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f5.fl = ctx->f1.fl - ctx->f0.fl;
L_004492DC:
    // 0x004492DC: addiu       $v0, $a2, -0x1
    ctx->r2 = ADD32(ctx->r6, -0X1);
    // 0x004492E0: slt         $v0, $a3, $v0
    ctx->r2 = SIGNED(ctx->r7) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x004492E4: beq         $v0, $zero, L_00449304
    if (ctx->r2 == 0) {
        // 0x004492E8: sll         $v0, $a3, 3
        ctx->r2 = S32(ctx->r7 << 3);
            goto L_00449304;
    }
    // 0x004492E8: sll         $v0, $a3, 3
    ctx->r2 = S32(ctx->r7 << 3);
    // 0x004492EC: addu        $v0, $v0, $a3
    ctx->r2 = ADD32(ctx->r2, ctx->r7);
    // 0x004492F0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x004492F4: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x004492F8: lwc1        $f1, 0x3C($v0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r2, 0X3C);
    // 0x004492FC: lwc1        $f0, 0x18($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X18);
    // 0x00449300: sub.s       $f2, $f1, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f1.fl - ctx->f0.fl;
L_00449304:
    // 0x00449304: addiu       $v0, $a2, -0x2
    ctx->r2 = ADD32(ctx->r6, -0X2);
    // 0x00449308: slt         $v0, $a3, $v0
    ctx->r2 = SIGNED(ctx->r7) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x0044930C: beq         $v0, $zero, L_0044932C
    if (ctx->r2 == 0) {
        // 0x00449310: sll         $v0, $a3, 3
        ctx->r2 = S32(ctx->r7 << 3);
            goto L_0044932C;
    }
    // 0x00449310: sll         $v0, $a3, 3
    ctx->r2 = S32(ctx->r7 << 3);
    // 0x00449314: addu        $v0, $v0, $a3
    ctx->r2 = ADD32(ctx->r2, ctx->r7);
    // 0x00449318: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x0044931C: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x00449320: lwc1        $f1, 0x60($v0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r2, 0X60);
    // 0x00449324: lwc1        $f0, 0x3C($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X3C);
    // 0x00449328: sub.s       $f3, $f1, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f3.fl = ctx->f1.fl - ctx->f0.fl;
L_0044932C:
    // 0x0044932C: mov.s       $f4, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    ctx->f4.fl = ctx->f2.fl;
    // 0x00449330: c.le.s      $f4, $f5
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 5);
    c1cs = ctx->f4.fl <= ctx->f5.fl;
    // 0x00449334: nop

    // 0x00449338: bc1fl       L_00449340
    if (!c1cs) {
        // 0x0044933C: mov.s       $f4, $f5
        CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 5);
    ctx->f4.fl = ctx->f5.fl;
            goto L_00449340;
    }
    goto skip_1;
    // 0x0044933C: mov.s       $f4, $f5
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 5);
    ctx->f4.fl = ctx->f5.fl;
    skip_1:
L_00449340:
    // 0x00449340: mov.s       $f8, $f3
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 3);
    ctx->f8.fl = ctx->f3.fl;
    // 0x00449344: c.le.s      $f8, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f8.fl <= ctx->f2.fl;
    // 0x00449348: nop

    // 0x0044934C: bc1fl       L_00449354
    if (!c1cs) {
        // 0x00449350: mov.s       $f8, $f2
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    ctx->f8.fl = ctx->f2.fl;
            goto L_00449354;
    }
    goto skip_2;
    // 0x00449350: mov.s       $f8, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    ctx->f8.fl = ctx->f2.fl;
    skip_2:
L_00449354:
    // 0x00449354: lwc1        $f2, 0x1C($t1)
    ctx->f2.u32l = MEM_W(ctx->r9, 0X1C);
    // 0x00449358: lwc1        $f0, 0x1C($t2)
    ctx->f0.u32l = MEM_W(ctx->r10, 0X1C);
    // 0x0044935C: lwc1        $f9, 0x18($t1)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r9, 0X18);
    // 0x00449360: lwc1        $f3, 0x18($t2)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r10, 0X18);
    // 0x00449364: c.eq.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl == ctx->f0.fl;
    // 0x00449368: nop

    // 0x0044936C: bc1t        L_00449384
    if (c1cs) {
        // 0x00449370: nop
    
            goto L_00449384;
    }
    // 0x00449370: nop

    // 0x00449374: sub.s       $f1, $f6, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f1.fl = ctx->f6.fl - ctx->f2.fl;
    // 0x00449378: sub.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f2.fl;
    // 0x0044937C: j           L_00410388
    // 0x00449380: div.s       $f7, $f1, $f0
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f7.fl = DIV_S(ctx->f1.fl, ctx->f0.fl);
    entry_00410388(rdram, ctx);
    return;
    // 0x00449380: div.s       $f7, $f1, $f0
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f7.fl = DIV_S(ctx->f1.fl, ctx->f0.fl);
L_00449384:
    // 0x00449384: mtc1        $zero, $f7
    ctx->f_odd[(7 - 1) * 2] = 0;
    // 0x00449388: mul.s       $f6, $f3, $f7
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 7);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f7.fl); 
    ctx->f6.fl = MUL_S(ctx->f3.fl, ctx->f7.fl);
    // 0x0044938C: nop

    // 0x00449390: mul.s       $f5, $f7, $f7
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 7);
    NAN_CHECK(ctx->f7.fl); NAN_CHECK(ctx->f7.fl); 
    ctx->f5.fl = MUL_S(ctx->f7.fl, ctx->f7.fl);
    // 0x00449394: add.s       $f0, $f7, $f7
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 7);
    NAN_CHECK(ctx->f7.fl); NAN_CHECK(ctx->f7.fl); 
    ctx->f0.fl = ctx->f7.fl + ctx->f7.fl;
    // 0x00449398: mul.s       $f0, $f0, $f7
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 7);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f7.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f7.fl);
    // 0x0044939C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x004493A0: lwc1        $f1, 0x97C($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X97C);
    // 0x004493A4: sub.s       $f1, $f1, $f7
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 7);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f7.fl); 
    ctx->f1.fl = ctx->f1.fl - ctx->f7.fl;
    // 0x004493A8: mul.s       $f1, $f9, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 9);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f9.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = MUL_S(ctx->f9.fl, ctx->f1.fl);
    // 0x004493AC: nop

    // 0x004493B0: mul.s       $f2, $f5, $f7
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 7);
    NAN_CHECK(ctx->f5.fl); NAN_CHECK(ctx->f7.fl); 
    ctx->f2.fl = MUL_S(ctx->f5.fl, ctx->f7.fl);
    // 0x004493B4: sub.s       $f3, $f3, $f9
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 9);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f9.fl); 
    ctx->f3.fl = ctx->f3.fl - ctx->f9.fl;
    // 0x004493B8: sub.s       $f4, $f4, $f3
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f4.fl = ctx->f4.fl - ctx->f3.fl;
    // 0x004493BC: sub.s       $f0, $f7, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f7.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f7.fl - ctx->f0.fl;
    // 0x004493C0: add.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f2.fl;
    // 0x004493C4: mul.s       $f4, $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x004493C8: sub.s       $f3, $f8, $f3
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f3.fl = ctx->f8.fl - ctx->f3.fl;
    // 0x004493CC: sub.s       $f2, $f2, $f5
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 5);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f5.fl); 
    ctx->f2.fl = ctx->f2.fl - ctx->f5.fl;
    // 0x004493D0: mul.s       $f3, $f3, $f2
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f3.fl = MUL_S(ctx->f3.fl, ctx->f2.fl);
    // 0x004493D4: add.s       $f1, $f1, $f6
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f6.fl;
    // 0x004493D8: add.s       $f1, $f1, $f4
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f4.fl;
    // 0x004493DC: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x004493E0: addiu       $v0, $a2, -0x1
    ctx->r2 = ADD32(ctx->r6, -0X1);
    // 0x004493E4: blez        $v0, L_00449438
    if (SIGNED(ctx->r2) <= 0) {
        // 0x004493E8: add.s       $f1, $f1, $f3
        CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f3.fl;
            goto L_00449438;
    }
    // 0x004493E8: add.s       $f1, $f1, $f3
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f3.fl;
    // 0x004493EC: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    // 0x004493F0: addiu       $t0, $zero, 0x24
    ctx->r8 = ADD32(0, 0X24);
    // 0x004493F4: addu        $v1, $a1, $zero
    ctx->r3 = ADD32(ctx->r5, 0);
L_004493F8:
    // 0x004493F8: addu        $t1, $v1, $zero
    ctx->r9 = ADD32(ctx->r3, 0);
    // 0x004493FC: lwc1        $f0, 0x18($t1)
    ctx->f0.u32l = MEM_W(ctx->r9, 0X18);
    // 0x00449400: c.le.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl <= ctx->f1.fl;
    // 0x00449404: nop

    // 0x00449408: bc1f        L_00449424
    if (!c1cs) {
        // 0x0044940C: addu        $t2, $a1, $t0
        ctx->r10 = ADD32(ctx->r5, ctx->r8);
            goto L_00449424;
    }
    // 0x0044940C: addu        $t2, $a1, $t0
    ctx->r10 = ADD32(ctx->r5, ctx->r8);
    // 0x00449410: lwc1        $f0, 0x18($t2)
    ctx->f0.u32l = MEM_W(ctx->r10, 0X18);
    // 0x00449414: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x00449418: nop

    // 0x0044941C: bc1t        L_00449438
    if (c1cs) {
        // 0x00449420: nop
    
            goto L_00449438;
    }
    // 0x00449420: nop

L_00449424:
    // 0x00449424: addiu       $t0, $t0, 0x24
    ctx->r8 = ADD32(ctx->r8, 0X24);
    // 0x00449428: addiu       $a3, $a3, 0x1
    ctx->r7 = ADD32(ctx->r7, 0X1);
    // 0x0044942C: slt         $v0, $a3, $a2
    ctx->r2 = SIGNED(ctx->r7) < SIGNED(ctx->r6) ? 1 : 0;
    // 0x00449430: bne         $v0, $zero, L_004493F8
    if (ctx->r2 != 0) {
        // 0x00449434: addiu       $v1, $t1, 0x24
        ctx->r3 = ADD32(ctx->r9, 0X24);
            goto L_004493F8;
    }
    // 0x00449434: addiu       $v1, $t1, 0x24
    ctx->r3 = ADD32(ctx->r9, 0X24);
L_00449438:
    // 0x00449438: lwc1        $f2, 0x18($t1)
    ctx->f2.u32l = MEM_W(ctx->r9, 0X18);
    // 0x0044943C: lwc1        $f0, 0x18($t2)
    ctx->f0.u32l = MEM_W(ctx->r10, 0X18);
    // 0x00449440: sub.s       $f8, $f0, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = ctx->f0.fl - ctx->f2.fl;
    // 0x00449444: mtc1        $zero, $f9
    ctx->f_odd[(9 - 1) * 2] = 0;
    // 0x00449448: c.eq.s      $f8, $f9
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 9);
    c1cs = ctx->f8.fl == ctx->f9.fl;
    // 0x0044944C: nop

    // 0x00449450: bc1t        L_00449460
    if (c1cs) {
        // 0x00449454: nop
    
            goto L_00449460;
    }
    // 0x00449454: nop

    // 0x00449458: sub.s       $f0, $f1, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f1.fl - ctx->f2.fl;
    // 0x0044945C: div.s       $f9, $f0, $f8
    CHECK_FR(ctx, 9);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f9.fl = DIV_S(ctx->f0.fl, ctx->f8.fl);
L_00449460:
    // 0x00449460: mul.s       $f8, $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f8.fl = MUL_S(ctx->f8.fl, ctx->f8.fl);
    // 0x00449464: nop

    // 0x00449468: mul.s       $f6, $f9, $f9
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 9);
    CHECK_FR(ctx, 9);
    NAN_CHECK(ctx->f9.fl); NAN_CHECK(ctx->f9.fl); 
    ctx->f6.fl = MUL_S(ctx->f9.fl, ctx->f9.fl);
    // 0x0044946C: lwc1        $f2, 0x0($t2)
    ctx->f2.u32l = MEM_W(ctx->r10, 0X0);
    // 0x00449470: mul.s       $f2, $f2, $f9
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 9);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f9.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f9.fl);
    // 0x00449474: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00449478: lwc1        $f4, 0x980($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X980);
    // 0x0044947C: sub.s       $f4, $f4, $f9
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 9);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f9.fl); 
    ctx->f4.fl = ctx->f4.fl - ctx->f9.fl;
    // 0x00449480: lwc1        $f3, 0x0($t1)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r9, 0X0);
    // 0x00449484: mul.s       $f3, $f3, $f4
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f3.fl = MUL_S(ctx->f3.fl, ctx->f4.fl);
    // 0x00449488: nop

    // 0x0044948C: mul.s       $f5, $f4, $f4
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f5.fl = MUL_S(ctx->f4.fl, ctx->f4.fl);
    // 0x00449490: nop

    // 0x00449494: mul.s       $f6, $f6, $f9
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 9);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f9.fl); 
    ctx->f6.fl = MUL_S(ctx->f6.fl, ctx->f9.fl);
    // 0x00449498: nop

    // 0x0044949C: mul.s       $f5, $f5, $f4
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f5.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f5.fl = MUL_S(ctx->f5.fl, ctx->f4.fl);
    // 0x004494A0: sub.s       $f6, $f6, $f9
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 9);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f9.fl); 
    ctx->f6.fl = ctx->f6.fl - ctx->f9.fl;
    // 0x004494A4: lwc1        $f1, 0xC($t2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r10, 0XC);
    // 0x004494A8: mul.s       $f1, $f1, $f6
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f6.fl);
    // 0x004494AC: sub.s       $f5, $f5, $f4
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f5.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f5.fl = ctx->f5.fl - ctx->f4.fl;
    // 0x004494B0: lwc1        $f0, 0xC($t1)
    ctx->f0.u32l = MEM_W(ctx->r9, 0XC);
    // 0x004494B4: mul.s       $f0, $f0, $f5
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 5);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f5.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f5.fl);
    // 0x004494B8: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x004494BC: mul.s       $f0, $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x004494C0: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x004494C4: lwc1        $f7, 0x984($at)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r1, 0X984);
    // 0x004494C8: mul.s       $f0, $f0, $f7
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 7);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f7.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f7.fl);
    // 0x004494CC: add.s       $f3, $f3, $f2
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f3.fl = ctx->f3.fl + ctx->f2.fl;
    // 0x004494D0: add.s       $f3, $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f3.fl = ctx->f3.fl + ctx->f0.fl;
    // 0x004494D4: swc1        $f3, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->f_odd[(3 - 1) * 2];
    // 0x004494D8: lwc1        $f2, 0x10($t1)
    ctx->f2.u32l = MEM_W(ctx->r9, 0X10);
    // 0x004494DC: mul.s       $f2, $f2, $f5
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 5);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f5.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f5.fl);
    // 0x004494E0: lwc1        $f1, 0x10($t2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r10, 0X10);
    // 0x004494E4: mul.s       $f1, $f1, $f6
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f6.fl);
    // 0x004494E8: lwc1        $f0, 0x4($t1)
    ctx->f0.u32l = MEM_W(ctx->r9, 0X4);
    // 0x004494EC: mul.s       $f0, $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x004494F0: add.s       $f2, $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f1.fl;
    // 0x004494F4: lwc1        $f1, 0x4($t2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r10, 0X4);
    // 0x004494F8: mul.s       $f1, $f1, $f9
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 9);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f9.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f9.fl);
    // 0x004494FC: nop

    // 0x00449500: mul.s       $f2, $f2, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f8.fl);
    // 0x00449504: nop

    // 0x00449508: mul.s       $f2, $f2, $f7
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 7);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f7.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f7.fl);
    // 0x0044950C: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x00449510: add.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f2.fl;
    // 0x00449514: swc1        $f0, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->f0.u32l;
    // 0x00449518: lwc1        $f2, 0x14($t1)
    ctx->f2.u32l = MEM_W(ctx->r9, 0X14);
    // 0x0044951C: mul.s       $f2, $f2, $f5
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 5);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f5.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f5.fl);
    // 0x00449520: lwc1        $f1, 0x14($t2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r10, 0X14);
    // 0x00449524: mul.s       $f1, $f1, $f6
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f6.fl);
    // 0x00449528: lwc1        $f0, 0x8($t1)
    ctx->f0.u32l = MEM_W(ctx->r9, 0X8);
    // 0x0044952C: mul.s       $f0, $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x00449530: add.s       $f2, $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f1.fl;
    // 0x00449534: lwc1        $f1, 0x8($t2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r10, 0X8);
    // 0x00449538: mul.s       $f1, $f1, $f9
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 9);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f9.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f9.fl);
    // 0x0044953C: nop

    // 0x00449540: mul.s       $f2, $f2, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f8.fl);
    // 0x00449544: nop

    // 0x00449548: mul.s       $f2, $f2, $f7
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 7);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f7.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f7.fl);
    // 0x0044954C: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x00449550: add.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f2.fl;
    // 0x00449554: swc1        $f0, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->f0.u32l;
    // 0x00449558: lw          $t4, 0x0($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X0);
    // 0x0044955C: lw          $t5, 0x4($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X4);
    // 0x00449560: lw          $t6, 0x8($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X8);
    // 0x00449564: sw          $t4, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r12;
    // 0x00449568: sw          $t5, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r13;
    // 0x0044956C: sw          $t6, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r14;
    // 0x00449570: addu        $v0, $a0, $zero
    ctx->r2 = ADD32(ctx->r4, 0);
    // 0x00449574: jr          $ra
    // 0x00449578: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
    return;
    // 0x00449578: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
;}
RECOMP_FUNC void func_0029E210(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
;}
RECOMP_FUNC void func_0029A160(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0029A160: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x0029A164: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x0029A168: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0029A16C: lui         $s0, 0x8012
    ctx->r16 = S32(0X8012 << 16);
    // 0x0029A170: addiu       $s0, $s0, 0x1690
    ctx->r16 = ADD32(ctx->r16, 0X1690);
    // 0x0029A174: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0029A178: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    // 0x0029A17C: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x0029A180: jal         0x0029E460
    // 0x0029A184: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    func_0029E460(rdram, ctx);
        goto after_0;
    // 0x0029A184: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    after_0:
    // 0x0029A188: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    // 0x0029A18C: beq         $a0, $zero, L_0029A1A0
    if (ctx->r4 == 0) {
        // 0x0029A190: addu        $s1, $s0, $zero
        ctx->r17 = ADD32(ctx->r16, 0);
            goto L_0029A1A0;
    }
    // 0x0029A190: addu        $s1, $s0, $zero
    ctx->r17 = ADD32(ctx->r16, 0);
    // 0x0029A194: jal         0x0029BF80
    // 0x0029A198: nop

    func_0029BF80(rdram, ctx);
        goto after_1;
    // 0x0029A198: nop

    after_1:
    // 0x0029A19C: sw          $v0, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r2;
L_0029A1A0:
    // 0x0029A1A0: lw          $a0, 0x18($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X18);
    // 0x0029A1A4: beq         $a0, $zero, L_0029A1B8
    if (ctx->r4 == 0) {
        // 0x0029A1A8: nop
    
            goto L_0029A1B8;
    }
    // 0x0029A1A8: nop

    // 0x0029A1AC: jal         0x0029BF80
    // 0x0029A1B0: nop

    func_0029BF80(rdram, ctx);
        goto after_2;
    // 0x0029A1B0: nop

    after_2:
    // 0x0029A1B4: sw          $v0, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->r2;
L_0029A1B8:
    // 0x0029A1B8: lw          $a0, 0x20($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X20);
    // 0x0029A1BC: beq         $a0, $zero, L_0029A1D0
    if (ctx->r4 == 0) {
        // 0x0029A1C0: nop
    
            goto L_0029A1D0;
    }
    // 0x0029A1C0: nop

    // 0x0029A1C4: jal         0x0029BF80
    // 0x0029A1C8: nop

    func_0029BF80(rdram, ctx);
        goto after_3;
    // 0x0029A1C8: nop

    after_3:
    // 0x0029A1CC: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
L_0029A1D0:
    // 0x0029A1D0: lw          $a0, 0x28($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X28);
    // 0x0029A1D4: beq         $a0, $zero, L_0029A1E8
    if (ctx->r4 == 0) {
        // 0x0029A1D8: nop
    
            goto L_0029A1E8;
    }
    // 0x0029A1D8: nop

    // 0x0029A1DC: jal         0x0029BF80
    // 0x0029A1E0: nop

    func_0029BF80(rdram, ctx);
        goto after_4;
    // 0x0029A1E0: nop

    after_4:
    // 0x0029A1E4: sw          $v0, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->r2;
L_0029A1E8:
    // 0x0029A1E8: lw          $a0, 0x2C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X2C);
    // 0x0029A1EC: beq         $a0, $zero, L_0029A200
    if (ctx->r4 == 0) {
        // 0x0029A1F0: nop
    
            goto L_0029A200;
    }
    // 0x0029A1F0: nop

    // 0x0029A1F4: jal         0x0029BF80
    // 0x0029A1F8: nop

    func_0029BF80(rdram, ctx);
        goto after_5;
    // 0x0029A1F8: nop

    after_5:
    // 0x0029A1FC: sw          $v0, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->r2;
L_0029A200:
    // 0x0029A200: lw          $a0, 0x30($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X30);
    // 0x0029A204: beq         $a0, $zero, L_0029A218
    if (ctx->r4 == 0) {
        // 0x0029A208: nop
    
            goto L_0029A218;
    }
    // 0x0029A208: nop

    // 0x0029A20C: jal         0x0029BF80
    // 0x0029A210: nop

    func_0029BF80(rdram, ctx);
        goto after_6;
    // 0x0029A210: nop

    after_6:
    // 0x0029A214: sw          $v0, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->r2;
L_0029A218:
    // 0x0029A218: lw          $a0, 0x38($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X38);
    // 0x0029A21C: beq         $a0, $zero, L_0029A234
    if (ctx->r4 == 0) {
        // 0x0029A220: addu        $v0, $s1, $zero
        ctx->r2 = ADD32(ctx->r17, 0);
            goto L_0029A234;
    }
    // 0x0029A220: addu        $v0, $s1, $zero
    ctx->r2 = ADD32(ctx->r17, 0);
    // 0x0029A224: jal         0x0029BF80
    // 0x0029A228: nop

    func_0029BF80(rdram, ctx);
        goto after_7;
    // 0x0029A228: nop

    after_7:
    // 0x0029A22C: sw          $v0, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->r2;
    // 0x0029A230: addu        $v0, $s1, $zero
    ctx->r2 = ADD32(ctx->r17, 0);
L_0029A234:
    // 0x0029A234: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x0029A238: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x0029A23C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0029A240: jr          $ra
    // 0x0029A244: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x0029A244: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_00232168(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00232168: addiu       $sp, $sp, -0xC0
    ctx->r29 = ADD32(ctx->r29, -0XC0);
    // 0x0023216C: sw          $s3, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->r19;
    // 0x00232170: addu        $s3, $a0, $zero
    ctx->r19 = ADD32(ctx->r4, 0);
    // 0x00232174: sw          $s5, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->r21;
    // 0x00232178: lui         $v0, 0x800F
    ctx->r2 = S32(0X800F << 16);
    // 0x0023217C: addiu       $v0, $v0, 0x1CE0
    ctx->r2 = ADD32(ctx->r2, 0X1CE0);
    // 0x00232180: sw          $ra, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->r31;
    // 0x00232184: sw          $s4, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->r20;
    // 0x00232188: sw          $s2, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->r18;
    // 0x0023218C: sw          $s1, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r17;
    // 0x00232190: sw          $s0, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r16;
    // 0x00232194: lw          $s2, 0x0($v0)
    ctx->r18 = MEM_W(ctx->r2, 0X0);
    // 0x00232198: beq         $a1, $zero, L_002321A8
    if (ctx->r5 == 0) {
        // 0x0023219C: addu        $s5, $a2, $zero
        ctx->r21 = ADD32(ctx->r6, 0);
            goto L_002321A8;
    }
    // 0x0023219C: addu        $s5, $a2, $zero
    ctx->r21 = ADD32(ctx->r6, 0);
    // 0x002321A0: j           L_002321C8
    // 0x002321A4: addiu       $a0, $sp, 0x50
    ctx->r4 = ADD32(ctx->r29, 0X50);
        goto L_002321C8;
    // 0x002321A4: addiu       $a0, $sp, 0x50
    ctx->r4 = ADD32(ctx->r29, 0X50);
L_002321A8:
    // 0x002321A8: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x002321AC: lw          $a1, 0x14($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X14);
    // 0x002321B0: lw          $v0, 0x98($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X98);
    // 0x002321B4: sll         $a1, $a1, 6
    ctx->r5 = S32(ctx->r5 << 6);
    // 0x002321B8: jal         0x0020D908
    // 0x002321BC: addu        $a1, $v0, $a1
    ctx->r5 = ADD32(ctx->r2, ctx->r5);
    func_0020D908(rdram, ctx);
        goto after_0;
    // 0x002321BC: addu        $a1, $v0, $a1
    ctx->r5 = ADD32(ctx->r2, ctx->r5);
    after_0:
    // 0x002321C0: addiu       $a0, $sp, 0x50
    ctx->r4 = ADD32(ctx->r29, 0X50);
    // 0x002321C4: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
L_002321C8:
    // 0x002321C8: jal         0x0020C208
    // 0x002321CC: nop

    func_0020C208(rdram, ctx);
        goto after_1;
    // 0x002321CC: nop

    after_1:
    // 0x002321D0: addiu       $s1, $sp, 0x50
    ctx->r17 = ADD32(ctx->r29, 0X50);
    // 0x002321D4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x002321D8: lui         $s4, 0x800F
    ctx->r20 = S32(0X800F << 16);
    // 0x002321DC: addiu       $s4, $s4, 0x1CE8
    ctx->r20 = ADD32(ctx->r20, 0X1CE8);
    // 0x002321E0: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    // 0x002321E4: jal         0x0020F85C
    // 0x002321E8: addiu       $a2, $s3, 0x34
    ctx->r6 = ADD32(ctx->r19, 0X34);
    func_0020F85C(rdram, ctx);
        goto after_2;
    // 0x002321E8: addiu       $a2, $s3, 0x34
    ctx->r6 = ADD32(ctx->r19, 0X34);
    after_2:
    // 0x002321EC: addiu       $s0, $sp, 0x90
    ctx->r16 = ADD32(ctx->r29, 0X90);
    // 0x002321F0: lw          $t0, 0xD0($s4)
    ctx->r8 = MEM_W(ctx->r20, 0XD0);
    // 0x002321F4: lw          $t1, 0xD4($s4)
    ctx->r9 = MEM_W(ctx->r20, 0XD4);
    // 0x002321F8: lw          $t2, 0xD8($s4)
    ctx->r10 = MEM_W(ctx->r20, 0XD8);
    // 0x002321FC: sw          $t0, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r8;
    // 0x00232200: sw          $t1, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r9;
    // 0x00232204: sw          $t2, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->r10;
    // 0x00232208: jal         0x0020F040
    // 0x0023220C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_0020F040(rdram, ctx);
        goto after_3;
    // 0x0023220C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x00232210: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x00232214: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x00232218: jal         0x0020FAFC
    // 0x0023221C: addiu       $a2, $s3, 0x18
    ctx->r6 = ADD32(ctx->r19, 0X18);
    func_0020FAFC(rdram, ctx);
        goto after_4;
    // 0x0023221C: addiu       $a2, $s3, 0x18
    ctx->r6 = ADD32(ctx->r19, 0X18);
    after_4:
    // 0x00232220: lw          $v0, 0x40($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X40);
    // 0x00232224: lui         $v1, 0x1
    ctx->r3 = S32(0X1 << 16);
    // 0x00232228: sw          $s2, 0x114($s3)
    MEM_W(0X114, ctx->r19) = ctx->r18;
    // 0x0023222C: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x00232230: sw          $v0, 0x40($s3)
    MEM_W(0X40, ctx->r19) = ctx->r2;
    // 0x00232234: lbu         $v0, 0xF($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0XF);
    // 0x00232238: sb          $v0, 0x1AD($s3)
    MEM_B(0X1AD, ctx->r19) = ctx->r2;
    // 0x0023223C: lw          $v0, 0x14($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X14);
    // 0x00232240: lw          $v1, 0x0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X0);
    // 0x00232244: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00232248: bne         $v1, $v0, L_00232278
    if (ctx->r3 != ctx->r2) {
        // 0x0023224C: nop
    
            goto L_00232278;
    }
    // 0x0023224C: nop

    // 0x00232250: lw          $a2, 0x10C($s3)
    ctx->r6 = MEM_W(ctx->r19, 0X10C);
    // 0x00232254: beq         $a2, $zero, L_00232268
    if (ctx->r6 == 0) {
        // 0x00232258: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_00232268;
    }
    // 0x00232258: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x0023225C: addiu       $a1, $a0, 0x140
    ctx->r5 = ADD32(ctx->r4, 0X140);
    // 0x00232260: j           L_00232270
    // 0x00232264: addiu       $a2, $a2, 0x4
    ctx->r6 = ADD32(ctx->r6, 0X4);
        goto L_00232270;
    // 0x00232264: addiu       $a2, $a2, 0x4
    ctx->r6 = ADD32(ctx->r6, 0X4);
L_00232268:
    // 0x00232268: addiu       $a1, $a0, 0x140
    ctx->r5 = ADD32(ctx->r4, 0X140);
    // 0x0023226C: addu        $a2, $s4, $zero
    ctx->r6 = ADD32(ctx->r20, 0);
L_00232270:
    // 0x00232270: jal         0x0025E52C
    // 0x00232274: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    func_0025E52C(rdram, ctx);
        goto after_5;
    // 0x00232274: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    after_5:
L_00232278:
    // 0x00232278: lhu         $v1, 0x2($s3)
    ctx->r3 = MEM_HU(ctx->r19, 0X2);
    // 0x0023227C: addiu       $v0, $zero, 0x56
    ctx->r2 = ADD32(0, 0X56);
    // 0x00232280: bne         $v1, $v0, L_0023229C
    if (ctx->r3 != ctx->r2) {
        // 0x00232284: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_0023229C;
    }
    // 0x00232284: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x00232288: bne         $s5, $v0, L_0023229C
    if (ctx->r21 != ctx->r2) {
        // 0x0023228C: lui         $v1, 0x400
        ctx->r3 = S32(0X400 << 16);
            goto L_0023229C;
    }
    // 0x0023228C: lui         $v1, 0x400
    ctx->r3 = S32(0X400 << 16);
    // 0x00232290: lw          $v0, 0x40($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X40);
    // 0x00232294: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x00232298: sw          $v0, 0x40($s3)
    MEM_W(0X40, ctx->r19) = ctx->r2;
L_0023229C:
    // 0x0023229C: lw          $ra, 0xB8($sp)
    ctx->r31 = MEM_W(ctx->r29, 0XB8);
    // 0x002322A0: lw          $s5, 0xB4($sp)
    ctx->r21 = MEM_W(ctx->r29, 0XB4);
    // 0x002322A4: lw          $s4, 0xB0($sp)
    ctx->r20 = MEM_W(ctx->r29, 0XB0);
    // 0x002322A8: lw          $s3, 0xAC($sp)
    ctx->r19 = MEM_W(ctx->r29, 0XAC);
    // 0x002322AC: lw          $s2, 0xA8($sp)
    ctx->r18 = MEM_W(ctx->r29, 0XA8);
    // 0x002322B0: lw          $s1, 0xA4($sp)
    ctx->r17 = MEM_W(ctx->r29, 0XA4);
    // 0x002322B4: lw          $s0, 0xA0($sp)
    ctx->r16 = MEM_W(ctx->r29, 0XA0);
    // 0x002322B8: jr          $ra
    // 0x002322BC: addiu       $sp, $sp, 0xC0
    ctx->r29 = ADD32(ctx->r29, 0XC0);
    return;
    // 0x002322BC: addiu       $sp, $sp, 0xC0
    ctx->r29 = ADD32(ctx->r29, 0XC0);
;}
RECOMP_FUNC void func_00216A9C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00216A9C: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x00216AA0: sw          $a1, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r5;
    // 0x00216AA4: addu        $a0, $a1, $zero
    ctx->r4 = ADD32(ctx->r5, 0);
    // 0x00216AA8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x00216AAC: sw          $ra, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r31;
    // 0x00216AB0: sw          $fp, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r30;
    // 0x00216AB4: sw          $s7, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r23;
    // 0x00216AB8: sw          $s6, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r22;
    // 0x00216ABC: sw          $s5, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r21;
    // 0x00216AC0: sw          $s4, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r20;
    // 0x00216AC4: sw          $s3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r19;
    // 0x00216AC8: sw          $s2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r18;
    // 0x00216ACC: sw          $s1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r17;
    // 0x00216AD0: jal         0x00200B00
    // 0x00216AD4: sw          $s0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r16;
    func_00200B00(rdram, ctx);
        goto after_0;
    // 0x00216AD4: sw          $s0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r16;
    after_0:
    // 0x00216AD8: beq         $v0, $zero, L_002171E4
    if (ctx->r2 == 0) {
        // 0x00216ADC: addu        $a1, $zero, $zero
        ctx->r5 = ADD32(0, 0);
            goto L_002171E4;
    }
    // 0x00216ADC: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x00216AE0: lw          $t2, 0x74($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X74);
    // 0x00216AE4: lw          $v0, 0x0($t2)
    ctx->r2 = MEM_W(ctx->r10, 0X0);
    // 0x00216AE8: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    // 0x00216AEC: lw          $s0, 0x0($v0)
    ctx->r16 = MEM_W(ctx->r2, 0X0);
    // 0x00216AF0: lw          $s4, 0x4($v0)
    ctx->r20 = MEM_W(ctx->r2, 0X4);
    // 0x00216AF4: jal         0x002017E8
    // 0x00216AF8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_002017E8(rdram, ctx);
        goto after_1;
    // 0x00216AF8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x00216AFC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00216B00: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x00216B04: addiu       $a2, $sp, 0x1C
    ctx->r6 = ADD32(ctx->r29, 0X1C);
    // 0x00216B08: jal         0x002017E8
    // 0x00216B0C: addu        $s5, $v0, $zero
    ctx->r21 = ADD32(ctx->r2, 0);
    func_002017E8(rdram, ctx);
        goto after_2;
    // 0x00216B0C: addu        $s5, $v0, $zero
    ctx->r21 = ADD32(ctx->r2, 0);
    after_2:
    // 0x00216B10: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00216B14: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x00216B18: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    // 0x00216B1C: jal         0x002017E8
    // 0x00216B20: addu        $s6, $v0, $zero
    ctx->r22 = ADD32(ctx->r2, 0);
    func_002017E8(rdram, ctx);
        goto after_3;
    // 0x00216B20: addu        $s6, $v0, $zero
    ctx->r22 = ADD32(ctx->r2, 0);
    after_3:
    // 0x00216B24: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00216B28: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x00216B2C: addiu       $a2, $sp, 0x24
    ctx->r6 = ADD32(ctx->r29, 0X24);
    // 0x00216B30: jal         0x002017E8
    // 0x00216B34: addu        $s7, $v0, $zero
    ctx->r23 = ADD32(ctx->r2, 0);
    func_002017E8(rdram, ctx);
        goto after_4;
    // 0x00216B34: addu        $s7, $v0, $zero
    ctx->r23 = ADD32(ctx->r2, 0);
    after_4:
    // 0x00216B38: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00216B3C: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x00216B40: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    // 0x00216B44: jal         0x002017E8
    // 0x00216B48: addu        $s2, $v0, $zero
    ctx->r18 = ADD32(ctx->r2, 0);
    func_002017E8(rdram, ctx);
        goto after_5;
    // 0x00216B48: addu        $s2, $v0, $zero
    ctx->r18 = ADD32(ctx->r2, 0);
    after_5:
    // 0x00216B4C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00216B50: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x00216B54: addiu       $a2, $sp, 0x2C
    ctx->r6 = ADD32(ctx->r29, 0X2C);
    // 0x00216B58: jal         0x002017E8
    // 0x00216B5C: sw          $v0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r2;
    func_002017E8(rdram, ctx);
        goto after_6;
    // 0x00216B5C: sw          $v0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r2;
    after_6:
    // 0x00216B60: addu        $s3, $v0, $zero
    ctx->r19 = ADD32(ctx->r2, 0);
    // 0x00216B64: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x00216B68: jal         0x002017D4
    // 0x00216B6C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_002017D4(rdram, ctx);
        goto after_7;
    // 0x00216B6C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_7:
    // 0x00216B70: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x00216B74: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x00216B78: addiu       $a2, $sp, 0x30
    ctx->r6 = ADD32(ctx->r29, 0X30);
    // 0x00216B7C: jal         0x002017E8
    // 0x00216B80: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    func_002017E8(rdram, ctx);
        goto after_8;
    // 0x00216B80: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    after_8:
    // 0x00216B84: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x00216B88: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x00216B8C: jal         0x002017E8
    // 0x00216B90: addiu       $a2, $sp, 0x34
    ctx->r6 = ADD32(ctx->r29, 0X34);
    func_002017E8(rdram, ctx);
        goto after_9;
    // 0x00216B90: addiu       $a2, $sp, 0x34
    ctx->r6 = ADD32(ctx->r29, 0X34);
    after_9:
    // 0x00216B94: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x00216B98: jal         0x002017D4
    // 0x00216B9C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_002017D4(rdram, ctx);
        goto after_10;
    // 0x00216B9C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_10:
    // 0x00216BA0: lw          $v1, 0x4($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X4);
    // 0x00216BA4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00216BA8: lwc1        $f1, 0x597C($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X597C);
    // 0x00216BAC: mtc1        $v1, $f0
    ctx->f0.u32l = ctx->r3;
    // 0x00216BB0: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00216BB4: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x00216BB8: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x00216BBC: sw          $v1, 0x67A4($at)
    MEM_W(0X67A4, ctx->r1) = ctx->r3;
    // 0x00216BC0: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x00216BC4: sw          $v1, 0x67A8($at)
    MEM_W(0X67A8, ctx->r1) = ctx->r3;
    // 0x00216BC8: swc1        $f0, 0x18($s1)
    MEM_W(0X18, ctx->r17) = ctx->f0.u32l;
    // 0x00216BCC: bne         $v0, $zero, L_00216BE8
    if (ctx->r2 != 0) {
        // 0x00216BD0: swc1        $f1, 0x1C($s1)
        MEM_W(0X1C, ctx->r17) = ctx->f_odd[(1 - 1) * 2];
            goto L_00216BE8;
    }
    // 0x00216BD0: swc1        $f1, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->f_odd[(1 - 1) * 2];
    // 0x00216BD4: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
    // 0x00216BD8: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x00216BDC: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00216BE0: div.s       $f0, $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = DIV_S(ctx->f0.fl, ctx->f0.fl);
    // 0x00216BE4: swc1        $f0, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->f0.u32l;
L_00216BE8:
    // 0x00216BE8: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x00216BEC: addiu       $t0, $zero, -0x8
    ctx->r8 = ADD32(0, -0X8);
    // 0x00216BF0: lw          $v1, 0x14($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X14);
    // 0x00216BF4: lw          $a1, 0x74($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X74);
    // 0x00216BF8: lui         $a3, 0x800E
    ctx->r7 = S32(0X800E << 16);
    // 0x00216BFC: lw          $a3, 0x67A8($a3)
    ctx->r7 = MEM_W(ctx->r7, 0X67A8);
    // 0x00216C00: sll         $v0, $v1, 4
    ctx->r2 = S32(ctx->r3 << 4);
    // 0x00216C04: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x00216C08: addiu       $v1, $v1, 0xF
    ctx->r3 = ADD32(ctx->r3, 0XF);
    // 0x00216C0C: mult        $v0, $a3
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r7)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x00216C10: lw          $v0, 0x10($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X10);
    // 0x00216C14: and         $v1, $v1, $t0
    ctx->r3 = ctx->r3 & ctx->r8;
    // 0x00216C18: sll         $a2, $v0, 4
    ctx->r6 = S32(ctx->r2 << 4);
    // 0x00216C1C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x00216C20: mflo        $t1
    ctx->r9 = lo;
    // 0x00216C24: addiu       $v0, $v0, 0xF
    ctx->r2 = ADD32(ctx->r2, 0XF);
    // 0x00216C28: and         $v0, $v0, $t0
    ctx->r2 = ctx->r2 & ctx->r8;
    // 0x00216C2C: mult        $a2, $a3
    result = S64(S32(ctx->r6)) * S64(S32(ctx->r7)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x00216C30: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    // 0x00216C34: addu        $t1, $t1, $v1
    ctx->r9 = ADD32(ctx->r9, ctx->r3);
    // 0x00216C38: sw          $t1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r9;
    // 0x00216C3C: subu        $a2, $s4, $a2
    ctx->r6 = SUB32(ctx->r20, ctx->r6);
    // 0x00216C40: mflo        $t4
    ctx->r12 = lo;
    // 0x00216C44: addu        $t4, $t4, $v0
    ctx->r12 = ADD32(ctx->r12, ctx->r2);
    // 0x00216C48: addu        $v0, $t4, $t1
    ctx->r2 = ADD32(ctx->r12, ctx->r9);
    // 0x00216C4C: addiu       $fp, $v0, 0x38
    ctx->r30 = ADD32(ctx->r2, 0X38);
    // 0x00216C50: addu        $a2, $a2, $fp
    ctx->r6 = ADD32(ctx->r6, ctx->r30);
    // 0x00216C54: jal         0x00205D7C
    // 0x00216C58: sw          $t4, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r12;
    func_00205D7C(rdram, ctx);
        goto after_11;
    // 0x00216C58: sw          $t4, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r12;
    after_11:
    // 0x00216C5C: addu        $s4, $v0, $zero
    ctx->r20 = ADD32(ctx->r2, 0);
    // 0x00216C60: beq         $s4, $zero, L_002171D0
    if (ctx->r20 == 0) {
        // 0x00216C64: addiu       $a0, $zero, 0x1
        ctx->r4 = ADD32(0, 0X1);
            goto L_002171D0;
    }
    // 0x00216C64: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x00216C68: lui         $a2, 0xDEAD
    ctx->r6 = S32(0XDEAD << 16);
    // 0x00216C6C: ori         $a2, $a2, 0xBEEF
    ctx->r6 = ctx->r6 | 0XBEEF;
    // 0x00216C70: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x00216C74: lw          $s0, 0x0($s4)
    ctx->r16 = MEM_W(ctx->r20, 0X0);
    // 0x00216C78: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x00216C7C: addiu       $v1, $s0, 0x4
    ctx->r3 = ADD32(ctx->r16, 0X4);
    // 0x00216C80: sw          $a1, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r5;
    // 0x00216C84: sw          $v0, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r2;
L_00216C88:
    // 0x00216C88: sw          $a2, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r6;
    // 0x00216C8C: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x00216C90: slt         $v0, $a1, $a0
    ctx->r2 = SIGNED(ctx->r5) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x00216C94: beq         $v0, $zero, L_00216C88
    if (ctx->r2 == 0) {
        // 0x00216C98: addiu       $v1, $v1, 0x4
        ctx->r3 = ADD32(ctx->r3, 0X4);
            goto L_00216C88;
    }
    // 0x00216C98: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x00216C9C: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x00216CA0: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x00216CA4: bltz        $a1, L_00216CD4
    if (SIGNED(ctx->r5) < 0) {
        // 0x00216CA8: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_00216CD4;
    }
    // 0x00216CA8: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x00216CAC: lui         $a3, 0xDEAD
    ctx->r7 = S32(0XDEAD << 16);
    // 0x00216CB0: ori         $a3, $a3, 0xBEEF
    ctx->r7 = ctx->r7 | 0XBEEF;
    // 0x00216CB4: addu        $v1, $s0, $zero
    ctx->r3 = ADD32(ctx->r16, 0);
L_00216CB8:
    // 0x00216CB8: lw          $v0, 0x4($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X4);
    // 0x00216CBC: beql        $v0, $a3, L_00216CD8
    if (ctx->r2 == ctx->r7) {
        // 0x00216CC0: addiu       $a0, $a0, -0x1
        ctx->r4 = ADD32(ctx->r4, -0X1);
            goto L_00216CD8;
    }
    goto skip_0;
    // 0x00216CC0: addiu       $a0, $a0, -0x1
    ctx->r4 = ADD32(ctx->r4, -0X1);
    skip_0:
    // 0x00216CC4: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x00216CC8: slt         $v0, $a1, $a0
    ctx->r2 = SIGNED(ctx->r5) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x00216CCC: beq         $v0, $zero, L_00216CB8
    if (ctx->r2 == 0) {
        // 0x00216CD0: addiu       $v1, $v1, 0x4
        ctx->r3 = ADD32(ctx->r3, 0X4);
            goto L_00216CB8;
    }
    // 0x00216CD0: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
L_00216CD4:
    // 0x00216CD4: addiu       $a0, $a0, -0x1
    ctx->r4 = ADD32(ctx->r4, -0X1);
L_00216CD8:
    // 0x00216CD8: addiu       $v1, $a0, 0x1
    ctx->r3 = ADD32(ctx->r4, 0X1);
    // 0x00216CDC: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x00216CE0: sll         $a0, $a0, 2
    ctx->r4 = S32(ctx->r4 << 2);
    // 0x00216CE4: addu        $a0, $s0, $a0
    ctx->r4 = ADD32(ctx->r16, ctx->r4);
    // 0x00216CE8: lw          $v0, 0x4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X4);
    // 0x00216CEC: addu        $v1, $s0, $v1
    ctx->r3 = ADD32(ctx->r16, ctx->r3);
    // 0x00216CF0: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x00216CF4: sw          $v0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r2;
    // 0x00216CF8: lw          $v0, 0x4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X4);
    // 0x00216CFC: beq         $s5, $zero, L_00216D0C
    if (ctx->r21 == 0) {
        // 0x00216D00: addu        $a0, $s0, $v0
        ctx->r4 = ADD32(ctx->r16, ctx->r2);
            goto L_00216D0C;
    }
    // 0x00216D00: addu        $a0, $s0, $v0
    ctx->r4 = ADD32(ctx->r16, ctx->r2);
    // 0x00216D04: jal         0x0029E460
    // 0x00216D08: addu        $a1, $s5, $zero
    ctx->r5 = ADD32(ctx->r21, 0);
    func_0029E460(rdram, ctx);
        goto after_12;
    // 0x00216D08: addu        $a1, $s5, $zero
    ctx->r5 = ADD32(ctx->r21, 0);
    after_12:
L_00216D0C:
    // 0x00216D0C: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x00216D10: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x00216D14: bltz        $a1, L_00216D44
    if (SIGNED(ctx->r5) < 0) {
        // 0x00216D18: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_00216D44;
    }
    // 0x00216D18: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x00216D1C: lui         $a3, 0xDEAD
    ctx->r7 = S32(0XDEAD << 16);
    // 0x00216D20: ori         $a3, $a3, 0xBEEF
    ctx->r7 = ctx->r7 | 0XBEEF;
    // 0x00216D24: addu        $v1, $s0, $zero
    ctx->r3 = ADD32(ctx->r16, 0);
L_00216D28:
    // 0x00216D28: lw          $v0, 0x4($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X4);
    // 0x00216D2C: beql        $v0, $a3, L_00216D48
    if (ctx->r2 == ctx->r7) {
        // 0x00216D30: addiu       $a0, $a0, -0x1
        ctx->r4 = ADD32(ctx->r4, -0X1);
            goto L_00216D48;
    }
    goto skip_1;
    // 0x00216D30: addiu       $a0, $a0, -0x1
    ctx->r4 = ADD32(ctx->r4, -0X1);
    skip_1:
    // 0x00216D34: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x00216D38: slt         $v0, $a1, $a0
    ctx->r2 = SIGNED(ctx->r5) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x00216D3C: beq         $v0, $zero, L_00216D28
    if (ctx->r2 == 0) {
        // 0x00216D40: addiu       $v1, $v1, 0x4
        ctx->r3 = ADD32(ctx->r3, 0X4);
            goto L_00216D28;
    }
    // 0x00216D40: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
L_00216D44:
    // 0x00216D44: addiu       $a0, $a0, -0x1
    ctx->r4 = ADD32(ctx->r4, -0X1);
L_00216D48:
    // 0x00216D48: addiu       $v1, $a0, 0x1
    ctx->r3 = ADD32(ctx->r4, 0X1);
    // 0x00216D4C: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x00216D50: sll         $a0, $a0, 2
    ctx->r4 = S32(ctx->r4 << 2);
    // 0x00216D54: addu        $a0, $s0, $a0
    ctx->r4 = ADD32(ctx->r16, ctx->r4);
    // 0x00216D58: lw          $v0, 0x4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X4);
    // 0x00216D5C: addu        $v1, $s0, $v1
    ctx->r3 = ADD32(ctx->r16, ctx->r3);
    // 0x00216D60: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x00216D64: sw          $v0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r2;
    // 0x00216D68: lw          $v0, 0x4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X4);
    // 0x00216D6C: beq         $s6, $zero, L_00216D7C
    if (ctx->r22 == 0) {
        // 0x00216D70: addu        $a0, $s0, $v0
        ctx->r4 = ADD32(ctx->r16, ctx->r2);
            goto L_00216D7C;
    }
    // 0x00216D70: addu        $a0, $s0, $v0
    ctx->r4 = ADD32(ctx->r16, ctx->r2);
    // 0x00216D74: jal         0x0029E460
    // 0x00216D78: addu        $a1, $s6, $zero
    ctx->r5 = ADD32(ctx->r22, 0);
    func_0029E460(rdram, ctx);
        goto after_13;
    // 0x00216D78: addu        $a1, $s6, $zero
    ctx->r5 = ADD32(ctx->r22, 0);
    after_13:
L_00216D7C:
    // 0x00216D7C: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x00216D80: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    // 0x00216D84: bltz        $a1, L_00216DB4
    if (SIGNED(ctx->r5) < 0) {
        // 0x00216D88: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_00216DB4;
    }
    // 0x00216D88: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x00216D8C: lui         $a3, 0xDEAD
    ctx->r7 = S32(0XDEAD << 16);
    // 0x00216D90: ori         $a3, $a3, 0xBEEF
    ctx->r7 = ctx->r7 | 0XBEEF;
    // 0x00216D94: addu        $v1, $s0, $zero
    ctx->r3 = ADD32(ctx->r16, 0);
L_00216D98:
    // 0x00216D98: lw          $v0, 0x4($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X4);
    // 0x00216D9C: beql        $v0, $a3, L_00216DB8
    if (ctx->r2 == ctx->r7) {
        // 0x00216DA0: addiu       $a0, $a0, -0x1
        ctx->r4 = ADD32(ctx->r4, -0X1);
            goto L_00216DB8;
    }
    goto skip_2;
    // 0x00216DA0: addiu       $a0, $a0, -0x1
    ctx->r4 = ADD32(ctx->r4, -0X1);
    skip_2:
    // 0x00216DA4: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x00216DA8: slt         $v0, $a1, $a0
    ctx->r2 = SIGNED(ctx->r5) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x00216DAC: beq         $v0, $zero, L_00216D98
    if (ctx->r2 == 0) {
        // 0x00216DB0: addiu       $v1, $v1, 0x4
        ctx->r3 = ADD32(ctx->r3, 0X4);
            goto L_00216D98;
    }
    // 0x00216DB0: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
L_00216DB4:
    // 0x00216DB4: addiu       $a0, $a0, -0x1
    ctx->r4 = ADD32(ctx->r4, -0X1);
L_00216DB8:
    // 0x00216DB8: addiu       $v1, $a0, 0x1
    ctx->r3 = ADD32(ctx->r4, 0X1);
    // 0x00216DBC: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x00216DC0: sll         $a0, $a0, 2
    ctx->r4 = S32(ctx->r4 << 2);
    // 0x00216DC4: addu        $a0, $s0, $a0
    ctx->r4 = ADD32(ctx->r16, ctx->r4);
    // 0x00216DC8: lw          $v0, 0x4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X4);
    // 0x00216DCC: addu        $v1, $s0, $v1
    ctx->r3 = ADD32(ctx->r16, ctx->r3);
    // 0x00216DD0: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x00216DD4: sw          $v0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r2;
    // 0x00216DD8: lw          $v0, 0x4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X4);
    // 0x00216DDC: beq         $s7, $zero, L_00216DEC
    if (ctx->r23 == 0) {
        // 0x00216DE0: addu        $a0, $s0, $v0
        ctx->r4 = ADD32(ctx->r16, ctx->r2);
            goto L_00216DEC;
    }
    // 0x00216DE0: addu        $a0, $s0, $v0
    ctx->r4 = ADD32(ctx->r16, ctx->r2);
    // 0x00216DE4: jal         0x0029E460
    // 0x00216DE8: addu        $a1, $s7, $zero
    ctx->r5 = ADD32(ctx->r23, 0);
    func_0029E460(rdram, ctx);
        goto after_14;
    // 0x00216DE8: addu        $a1, $s7, $zero
    ctx->r5 = ADD32(ctx->r23, 0);
    after_14:
L_00216DEC:
    // 0x00216DEC: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x00216DF0: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    // 0x00216DF4: bltz        $a1, L_00216E24
    if (SIGNED(ctx->r5) < 0) {
        // 0x00216DF8: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_00216E24;
    }
    // 0x00216DF8: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x00216DFC: lui         $a3, 0xDEAD
    ctx->r7 = S32(0XDEAD << 16);
    // 0x00216E00: ori         $a3, $a3, 0xBEEF
    ctx->r7 = ctx->r7 | 0XBEEF;
    // 0x00216E04: addu        $v1, $s0, $zero
    ctx->r3 = ADD32(ctx->r16, 0);
L_00216E08:
    // 0x00216E08: lw          $v0, 0x4($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X4);
    // 0x00216E0C: beql        $v0, $a3, L_00216E28
    if (ctx->r2 == ctx->r7) {
        // 0x00216E10: addiu       $a0, $a0, -0x1
        ctx->r4 = ADD32(ctx->r4, -0X1);
            goto L_00216E28;
    }
    goto skip_3;
    // 0x00216E10: addiu       $a0, $a0, -0x1
    ctx->r4 = ADD32(ctx->r4, -0X1);
    skip_3:
    // 0x00216E14: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x00216E18: slt         $v0, $a1, $a0
    ctx->r2 = SIGNED(ctx->r5) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x00216E1C: beq         $v0, $zero, L_00216E08
    if (ctx->r2 == 0) {
        // 0x00216E20: addiu       $v1, $v1, 0x4
        ctx->r3 = ADD32(ctx->r3, 0X4);
            goto L_00216E08;
    }
    // 0x00216E20: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
L_00216E24:
    // 0x00216E24: addiu       $a0, $a0, -0x1
    ctx->r4 = ADD32(ctx->r4, -0X1);
L_00216E28:
    // 0x00216E28: addiu       $v1, $a0, 0x1
    ctx->r3 = ADD32(ctx->r4, 0X1);
    // 0x00216E2C: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x00216E30: sll         $a0, $a0, 2
    ctx->r4 = S32(ctx->r4 << 2);
    // 0x00216E34: addu        $a0, $s0, $a0
    ctx->r4 = ADD32(ctx->r16, ctx->r4);
    // 0x00216E38: lw          $v0, 0x4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X4);
    // 0x00216E3C: addu        $v1, $s0, $v1
    ctx->r3 = ADD32(ctx->r16, ctx->r3);
    // 0x00216E40: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x00216E44: sw          $v0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r2;
    // 0x00216E48: lw          $v0, 0x4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X4);
    // 0x00216E4C: beq         $s2, $zero, L_00216E5C
    if (ctx->r18 == 0) {
        // 0x00216E50: addu        $a0, $s0, $v0
        ctx->r4 = ADD32(ctx->r16, ctx->r2);
            goto L_00216E5C;
    }
    // 0x00216E50: addu        $a0, $s0, $v0
    ctx->r4 = ADD32(ctx->r16, ctx->r2);
    // 0x00216E54: jal         0x0029E460
    // 0x00216E58: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    func_0029E460(rdram, ctx);
        goto after_15;
    // 0x00216E58: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    after_15:
L_00216E5C:
    // 0x00216E5C: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x00216E60: lw          $a2, 0x28($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X28);
    // 0x00216E64: bltz        $a1, L_00216E94
    if (SIGNED(ctx->r5) < 0) {
        // 0x00216E68: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_00216E94;
    }
    // 0x00216E68: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x00216E6C: lui         $a3, 0xDEAD
    ctx->r7 = S32(0XDEAD << 16);
    // 0x00216E70: ori         $a3, $a3, 0xBEEF
    ctx->r7 = ctx->r7 | 0XBEEF;
    // 0x00216E74: addu        $v1, $s0, $zero
    ctx->r3 = ADD32(ctx->r16, 0);
L_00216E78:
    // 0x00216E78: lw          $v0, 0x4($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X4);
    // 0x00216E7C: beql        $v0, $a3, L_00216E98
    if (ctx->r2 == ctx->r7) {
        // 0x00216E80: addiu       $a0, $a0, -0x1
        ctx->r4 = ADD32(ctx->r4, -0X1);
            goto L_00216E98;
    }
    goto skip_4;
    // 0x00216E80: addiu       $a0, $a0, -0x1
    ctx->r4 = ADD32(ctx->r4, -0X1);
    skip_4:
    // 0x00216E84: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x00216E88: slt         $v0, $a1, $a0
    ctx->r2 = SIGNED(ctx->r5) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x00216E8C: beq         $v0, $zero, L_00216E78
    if (ctx->r2 == 0) {
        // 0x00216E90: addiu       $v1, $v1, 0x4
        ctx->r3 = ADD32(ctx->r3, 0X4);
            goto L_00216E78;
    }
    // 0x00216E90: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
L_00216E94:
    // 0x00216E94: addiu       $a0, $a0, -0x1
    ctx->r4 = ADD32(ctx->r4, -0X1);
L_00216E98:
    // 0x00216E98: addiu       $v1, $a0, 0x1
    ctx->r3 = ADD32(ctx->r4, 0X1);
    // 0x00216E9C: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x00216EA0: sll         $a0, $a0, 2
    ctx->r4 = S32(ctx->r4 << 2);
    // 0x00216EA4: addu        $a0, $s0, $a0
    ctx->r4 = ADD32(ctx->r16, ctx->r4);
    // 0x00216EA8: lw          $v0, 0x4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X4);
    // 0x00216EAC: addu        $v1, $s0, $v1
    ctx->r3 = ADD32(ctx->r16, ctx->r3);
    // 0x00216EB0: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x00216EB4: sw          $v0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r2;
    // 0x00216EB8: lw          $v0, 0x4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X4);
    // 0x00216EBC: lw          $t2, 0x38($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X38);
    // 0x00216EC0: beq         $t2, $zero, L_00216ED0
    if (ctx->r10 == 0) {
        // 0x00216EC4: addu        $a0, $s0, $v0
        ctx->r4 = ADD32(ctx->r16, ctx->r2);
            goto L_00216ED0;
    }
    // 0x00216EC4: addu        $a0, $s0, $v0
    ctx->r4 = ADD32(ctx->r16, ctx->r2);
    // 0x00216EC8: jal         0x0029E460
    // 0x00216ECC: addu        $a1, $t2, $zero
    ctx->r5 = ADD32(ctx->r10, 0);
    func_0029E460(rdram, ctx);
        goto after_16;
    // 0x00216ECC: addu        $a1, $t2, $zero
    ctx->r5 = ADD32(ctx->r10, 0);
    after_16:
L_00216ED0:
    // 0x00216ED0: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x00216ED4: bltz        $a1, L_00216F04
    if (SIGNED(ctx->r5) < 0) {
        // 0x00216ED8: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_00216F04;
    }
    // 0x00216ED8: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x00216EDC: lui         $a2, 0xDEAD
    ctx->r6 = S32(0XDEAD << 16);
    // 0x00216EE0: ori         $a2, $a2, 0xBEEF
    ctx->r6 = ctx->r6 | 0XBEEF;
    // 0x00216EE4: addu        $v1, $s0, $zero
    ctx->r3 = ADD32(ctx->r16, 0);
L_00216EE8:
    // 0x00216EE8: lw          $v0, 0x4($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X4);
    // 0x00216EEC: beql        $v0, $a2, L_00216F08
    if (ctx->r2 == ctx->r6) {
        // 0x00216EF0: addiu       $a0, $a0, -0x1
        ctx->r4 = ADD32(ctx->r4, -0X1);
            goto L_00216F08;
    }
    goto skip_5;
    // 0x00216EF0: addiu       $a0, $a0, -0x1
    ctx->r4 = ADD32(ctx->r4, -0X1);
    skip_5:
    // 0x00216EF4: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x00216EF8: slt         $v0, $a1, $a0
    ctx->r2 = SIGNED(ctx->r5) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x00216EFC: beq         $v0, $zero, L_00216EE8
    if (ctx->r2 == 0) {
        // 0x00216F00: addiu       $v1, $v1, 0x4
        ctx->r3 = ADD32(ctx->r3, 0X4);
            goto L_00216EE8;
    }
    // 0x00216F00: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
L_00216F04:
    // 0x00216F04: addiu       $a0, $a0, -0x1
    ctx->r4 = ADD32(ctx->r4, -0X1);
L_00216F08:
    // 0x00216F08: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x00216F0C: lui         $a2, 0xDEAD
    ctx->r6 = S32(0XDEAD << 16);
    // 0x00216F10: addu        $v1, $a0, $a1
    ctx->r3 = ADD32(ctx->r4, ctx->r5);
    // 0x00216F14: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x00216F18: sll         $a0, $a0, 2
    ctx->r4 = S32(ctx->r4 << 2);
    // 0x00216F1C: addu        $a0, $s0, $a0
    ctx->r4 = ADD32(ctx->r16, ctx->r4);
    // 0x00216F20: addu        $v1, $s0, $v1
    ctx->r3 = ADD32(ctx->r16, ctx->r3);
    // 0x00216F24: lw          $v0, 0x4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X4);
    // 0x00216F28: ori         $a2, $a2, 0xBEEF
    ctx->r6 = ctx->r6 | 0XBEEF;
    // 0x00216F2C: addu        $v0, $v0, $fp
    ctx->r2 = ADD32(ctx->r2, ctx->r30);
    // 0x00216F30: sw          $v0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r2;
    // 0x00216F34: lw          $v0, 0x4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X4);
    // 0x00216F38: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    // 0x00216F3C: addu        $s0, $s0, $v0
    ctx->r16 = ADD32(ctx->r16, ctx->r2);
    // 0x00216F40: addiu       $v1, $s0, 0x4
    ctx->r3 = ADD32(ctx->r16, 0X4);
    // 0x00216F44: addiu       $v0, $zero, 0x18
    ctx->r2 = ADD32(0, 0X18);
    // 0x00216F48: sw          $a0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r4;
    // 0x00216F4C: sw          $v0, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r2;
L_00216F50:
    // 0x00216F50: sw          $a2, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r6;
    // 0x00216F54: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x00216F58: slt         $v0, $a0, $a1
    ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x00216F5C: beq         $v0, $zero, L_00216F50
    if (ctx->r2 == 0) {
        // 0x00216F60: addiu       $v1, $v1, 0x4
        ctx->r3 = ADD32(ctx->r3, 0X4);
            goto L_00216F50;
    }
    // 0x00216F60: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x00216F64: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x00216F68: bltz        $a1, L_00216F98
    if (SIGNED(ctx->r5) < 0) {
        // 0x00216F6C: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_00216F98;
    }
    // 0x00216F6C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x00216F70: lui         $a2, 0xDEAD
    ctx->r6 = S32(0XDEAD << 16);
    // 0x00216F74: ori         $a2, $a2, 0xBEEF
    ctx->r6 = ctx->r6 | 0XBEEF;
    // 0x00216F78: addu        $v1, $s0, $zero
    ctx->r3 = ADD32(ctx->r16, 0);
L_00216F7C:
    // 0x00216F7C: lw          $v0, 0x4($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X4);
    // 0x00216F80: beql        $v0, $a2, L_00216F9C
    if (ctx->r2 == ctx->r6) {
        // 0x00216F84: addiu       $a0, $a0, -0x1
        ctx->r4 = ADD32(ctx->r4, -0X1);
            goto L_00216F9C;
    }
    goto skip_6;
    // 0x00216F84: addiu       $a0, $a0, -0x1
    ctx->r4 = ADD32(ctx->r4, -0X1);
    skip_6:
    // 0x00216F88: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x00216F8C: slt         $v0, $a1, $a0
    ctx->r2 = SIGNED(ctx->r5) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x00216F90: beq         $v0, $zero, L_00216F7C
    if (ctx->r2 == 0) {
        // 0x00216F94: addiu       $v1, $v1, 0x4
        ctx->r3 = ADD32(ctx->r3, 0X4);
            goto L_00216F7C;
    }
    // 0x00216F94: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
L_00216F98:
    // 0x00216F98: addiu       $a0, $a0, -0x1
    ctx->r4 = ADD32(ctx->r4, -0X1);
L_00216F9C:
    // 0x00216F9C: addiu       $v1, $a0, 0x1
    ctx->r3 = ADD32(ctx->r4, 0X1);
    // 0x00216FA0: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x00216FA4: sll         $a0, $a0, 2
    ctx->r4 = S32(ctx->r4 << 2);
    // 0x00216FA8: addu        $a0, $s0, $a0
    ctx->r4 = ADD32(ctx->r16, ctx->r4);
    // 0x00216FAC: lw          $v0, 0x4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X4);
    // 0x00216FB0: addu        $v1, $s0, $v1
    ctx->r3 = ADD32(ctx->r16, ctx->r3);
    // 0x00216FB4: addiu       $v0, $v0, 0x20
    ctx->r2 = ADD32(ctx->r2, 0X20);
    // 0x00216FB8: sw          $v0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r2;
    // 0x00216FBC: lw          $v0, 0x4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X4);
    // 0x00216FC0: beq         $s1, $zero, L_00216FD4
    if (ctx->r17 == 0) {
        // 0x00216FC4: addu        $a0, $s0, $v0
        ctx->r4 = ADD32(ctx->r16, ctx->r2);
            goto L_00216FD4;
    }
    // 0x00216FC4: addu        $a0, $s0, $v0
    ctx->r4 = ADD32(ctx->r16, ctx->r2);
    // 0x00216FC8: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x00216FCC: jal         0x0029E460
    // 0x00216FD0: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    func_0029E460(rdram, ctx);
        goto after_17;
    // 0x00216FD0: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    after_17:
L_00216FD4:
    // 0x00216FD4: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x00216FD8: bltz        $a1, L_00217008
    if (SIGNED(ctx->r5) < 0) {
        // 0x00216FDC: addu        $v1, $zero, $zero
        ctx->r3 = ADD32(0, 0);
            goto L_00217008;
    }
    // 0x00216FDC: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
    // 0x00216FE0: lui         $a2, 0xDEAD
    ctx->r6 = S32(0XDEAD << 16);
    // 0x00216FE4: ori         $a2, $a2, 0xBEEF
    ctx->r6 = ctx->r6 | 0XBEEF;
    // 0x00216FE8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_00216FEC:
    // 0x00216FEC: lw          $v0, 0x4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X4);
    // 0x00216FF0: beql        $v0, $a2, L_0021700C
    if (ctx->r2 == ctx->r6) {
        // 0x00216FF4: addiu       $v1, $v1, -0x1
        ctx->r3 = ADD32(ctx->r3, -0X1);
            goto L_0021700C;
    }
    goto skip_7;
    // 0x00216FF4: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    skip_7:
    // 0x00216FF8: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x00216FFC: slt         $v0, $a1, $v1
    ctx->r2 = SIGNED(ctx->r5) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x00217000: beq         $v0, $zero, L_00216FEC
    if (ctx->r2 == 0) {
        // 0x00217004: addiu       $a0, $a0, 0x4
        ctx->r4 = ADD32(ctx->r4, 0X4);
            goto L_00216FEC;
    }
    // 0x00217004: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
L_00217008:
    // 0x00217008: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
L_0021700C:
    // 0x0021700C: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
    // 0x00217010: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x00217014: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x00217018: addu        $v1, $s0, $v1
    ctx->r3 = ADD32(ctx->r16, ctx->r3);
    // 0x0021701C: lw          $v1, 0x4($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X4);
    // 0x00217020: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
    // 0x00217024: addu        $v0, $s0, $v0
    ctx->r2 = ADD32(ctx->r16, ctx->r2);
    // 0x00217028: addu        $v1, $v1, $t3
    ctx->r3 = ADD32(ctx->r3, ctx->r11);
    // 0x0021702C: sw          $v1, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r3;
    // 0x00217030: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x00217034: bltz        $a0, L_00217064
    if (SIGNED(ctx->r4) < 0) {
        // 0x00217038: addu        $a2, $zero, $zero
        ctx->r6 = ADD32(0, 0);
            goto L_00217064;
    }
    // 0x00217038: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x0021703C: lui         $a1, 0xDEAD
    ctx->r5 = S32(0XDEAD << 16);
    // 0x00217040: ori         $a1, $a1, 0xBEEF
    ctx->r5 = ctx->r5 | 0XBEEF;
    // 0x00217044: addu        $v1, $s0, $zero
    ctx->r3 = ADD32(ctx->r16, 0);
L_00217048:
    // 0x00217048: lw          $v0, 0x4($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X4);
    // 0x0021704C: beql        $v0, $a1, L_00217068
    if (ctx->r2 == ctx->r5) {
        // 0x00217050: addiu       $a2, $a2, -0x1
        ctx->r6 = ADD32(ctx->r6, -0X1);
            goto L_00217068;
    }
    goto skip_8;
    // 0x00217050: addiu       $a2, $a2, -0x1
    ctx->r6 = ADD32(ctx->r6, -0X1);
    skip_8:
    // 0x00217054: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x00217058: slt         $v0, $a0, $a2
    ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r6) ? 1 : 0;
    // 0x0021705C: beq         $v0, $zero, L_00217048
    if (ctx->r2 == 0) {
        // 0x00217060: addiu       $v1, $v1, 0x4
        ctx->r3 = ADD32(ctx->r3, 0X4);
            goto L_00217048;
    }
    // 0x00217060: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
L_00217064:
    // 0x00217064: addiu       $a2, $a2, -0x1
    ctx->r6 = ADD32(ctx->r6, -0X1);
L_00217068:
    // 0x00217068: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x0021706C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x00217070: addiu       $v1, $a2, 0x1
    ctx->r3 = ADD32(ctx->r6, 0X1);
    // 0x00217074: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x00217078: sll         $v0, $a2, 2
    ctx->r2 = S32(ctx->r6 << 2);
    // 0x0021707C: addu        $v0, $s0, $v0
    ctx->r2 = ADD32(ctx->r16, ctx->r2);
    // 0x00217080: lw          $v0, 0x4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4);
    // 0x00217084: lw          $t2, 0x40($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X40);
    // 0x00217088: addu        $v1, $s0, $v1
    ctx->r3 = ADD32(ctx->r16, ctx->r3);
    // 0x0021708C: addu        $v0, $v0, $t2
    ctx->r2 = ADD32(ctx->r2, ctx->r10);
    // 0x00217090: jal         0x002017D4
    // 0x00217094: sw          $v0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r2;
    func_002017D4(rdram, ctx);
        goto after_18;
    // 0x00217094: sw          $v0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r2;
    after_18:
    // 0x00217098: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x0021709C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x002170A0: jal         0x002017D4
    // 0x002170A4: addu        $s2, $v0, $zero
    ctx->r18 = ADD32(ctx->r2, 0);
    func_002017D4(rdram, ctx);
        goto after_19;
    // 0x002170A4: addu        $s2, $v0, $zero
    ctx->r18 = ADD32(ctx->r2, 0);
    after_19:
    // 0x002170A8: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x002170AC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x002170B0: jal         0x002017D4
    // 0x002170B4: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    func_002017D4(rdram, ctx);
        goto after_20;
    // 0x002170B4: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    after_20:
    // 0x002170B8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x002170BC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x002170C0: jal         0x002017D4
    // 0x002170C4: addu        $s3, $v0, $zero
    ctx->r19 = ADD32(ctx->r2, 0);
    func_002017D4(rdram, ctx);
        goto after_21;
    // 0x002170C4: addu        $s3, $v0, $zero
    ctx->r19 = ADD32(ctx->r2, 0);
    after_21:
    // 0x002170C8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x002170CC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x002170D0: jal         0x002017D4
    // 0x002170D4: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    func_002017D4(rdram, ctx);
        goto after_22;
    // 0x002170D4: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    after_22:
    // 0x002170D8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x002170DC: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x002170E0: lwc1        $f2, 0xC($s2)
    ctx->f2.u32l = MEM_W(ctx->r18, 0XC);
    // 0x002170E4: lw          $v1, 0x0($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X0);
    // 0x002170E8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002170EC: lwc1        $f0, 0x5980($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X5980);
    // 0x002170F0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002170F4: lwc1        $f1, 0x5984($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X5984);
    // 0x002170F8: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    // 0x002170FC: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    // 0x00217100: lw          $v1, 0x8($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X8);
    // 0x00217104: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
    // 0x00217108: sw          $v1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r3;
    // 0x0021710C: lw          $a2, 0x14($s2)
    ctx->r6 = MEM_W(ctx->r18, 0X14);
    // 0x00217110: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x00217114: sw          $s1, 0x6798($at)
    MEM_W(0X6798, ctx->r1) = ctx->r17;
    // 0x00217118: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x0021711C: sw          $zero, 0x6794($at)
    MEM_W(0X6794, ctx->r1) = 0;
    // 0x00217120: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x00217124: swc1        $f0, 0x679C($at)
    MEM_W(0X679C, ctx->r1) = ctx->f0.u32l;
    // 0x00217128: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x0021712C: swc1        $f1, 0x67A0($at)
    MEM_W(0X67A0, ctx->r1) = ctx->f_odd[(1 - 1) * 2];
    // 0x00217130: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x00217134: swc1        $f2, 0x6790($at)
    MEM_W(0X6790, ctx->r1) = ctx->f2.u32l;
    // 0x00217138: jal         0x00216604
    // 0x0021713C: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    func_00216604(rdram, ctx);
        goto after_23;
    // 0x0021713C: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    after_23:
    // 0x00217140: bne         $v0, $zero, L_00217150
    if (ctx->r2 != 0) {
        // 0x00217144: addu        $a0, $s3, $zero
        ctx->r4 = ADD32(ctx->r19, 0);
            goto L_00217150;
    }
    // 0x00217144: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x00217148: j           L_002171B0
    // 0x0021714C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
        goto L_002171B0;
    // 0x0021714C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_00217150:
    // 0x00217150: lwc1        $f2, 0xC($s2)
    ctx->f2.u32l = MEM_W(ctx->r18, 0XC);
    // 0x00217154: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
    // 0x00217158: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0021715C: lwc1        $f0, 0x5988($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X5988);
    // 0x00217160: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00217164: lwc1        $f1, 0x598C($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X598C);
    // 0x00217168: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x0021716C: lw          $v0, 0x8($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X8);
    // 0x00217170: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x00217174: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x00217178: lw          $a2, 0x10($s2)
    ctx->r6 = MEM_W(ctx->r18, 0X10);
    // 0x0021717C: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x00217180: sw          $zero, 0x6798($at)
    MEM_W(0X6798, ctx->r1) = 0;
    // 0x00217184: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x00217188: sw          $s1, 0x6794($at)
    MEM_W(0X6794, ctx->r1) = ctx->r17;
    // 0x0021718C: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x00217190: swc1        $f0, 0x679C($at)
    MEM_W(0X679C, ctx->r1) = ctx->f0.u32l;
    // 0x00217194: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x00217198: swc1        $f1, 0x67A0($at)
    MEM_W(0X67A0, ctx->r1) = ctx->f_odd[(1 - 1) * 2];
    // 0x0021719C: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x002171A0: swc1        $f2, 0x6790($at)
    MEM_W(0X6790, ctx->r1) = ctx->f2.u32l;
    // 0x002171A4: jal         0x00216604
    // 0x002171A8: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    func_00216604(rdram, ctx);
        goto after_24;
    // 0x002171A8: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    after_24:
    // 0x002171AC: sltu        $v0, $zero, $v0
    ctx->r2 = 0 < ctx->r2 ? 1 : 0;
L_002171B0:
    // 0x002171B0: bne         $v0, $zero, L_002171D4
    if (ctx->r2 != 0) {
        // 0x002171B4: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_002171D4;
    }
    // 0x002171B4: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x002171B8: jal         0x002052D8
    // 0x002171BC: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    func_002052D8(rdram, ctx);
        goto after_25;
    // 0x002171BC: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    after_25:
    // 0x002171C0: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x002171C4: lw          $a1, 0x74($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X74);
    // 0x002171C8: j           L_002171DC
    // 0x002171CC: addu        $a2, $a0, $zero
    ctx->r6 = ADD32(ctx->r4, 0);
        goto L_002171DC;
    // 0x002171CC: addu        $a2, $a0, $zero
    ctx->r6 = ADD32(ctx->r4, 0);
L_002171D0:
    // 0x002171D0: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
L_002171D4:
    // 0x002171D4: lw          $a1, 0x74($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X74);
    // 0x002171D8: addu        $a2, $s4, $zero
    ctx->r6 = ADD32(ctx->r20, 0);
L_002171DC:
    // 0x002171DC: jal         0x002057B0
    // 0x002171E0: nop

    func_002057B0(rdram, ctx);
        goto after_26;
    // 0x002171E0: nop

    after_26:
L_002171E4:
    // 0x002171E4: lw          $ra, 0x6C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X6C);
    // 0x002171E8: lw          $fp, 0x68($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X68);
    // 0x002171EC: lw          $s7, 0x64($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X64);
    // 0x002171F0: lw          $s6, 0x60($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X60);
    // 0x002171F4: lw          $s5, 0x5C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X5C);
    // 0x002171F8: lw          $s4, 0x58($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X58);
    // 0x002171FC: lw          $s3, 0x54($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X54);
    // 0x00217200: lw          $s2, 0x50($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X50);
    // 0x00217204: lw          $s1, 0x4C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X4C);
    // 0x00217208: lw          $s0, 0x48($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X48);
    // 0x0021720C: jr          $ra
    // 0x00217210: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    return;
    // 0x00217210: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
;}
RECOMP_FUNC void func_00294B9C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00294B9C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00294BA0: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00294BA4: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x00294BA8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00294BAC: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x00294BB0: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x00294BB4: jal         0x002933B0
    // 0x00294BB8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_002933B0(rdram, ctx);
        goto after_0;
    // 0x00294BB8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x00294BBC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00294BC0: jal         0x002933E0
    // 0x00294BC4: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    func_002933E0(rdram, ctx);
        goto after_1;
    // 0x00294BC4: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    after_1:
    // 0x00294BC8: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x00294BCC: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00294BD0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00294BD4: jr          $ra
    // 0x00294BD8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00294BD8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_0021851C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0021851C: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x00218520: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x00218524: jr          $ra
    // 0x00218528: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
    return;
    // 0x00218528: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
;}
RECOMP_FUNC void func_004501D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004501D0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x004501D4: lui         $a3, 0x800B
    ctx->r7 = S32(0X800B << 16);
    // 0x004501D8: addiu       $a3, $a3, -0x4F18
    ctx->r7 = ADD32(ctx->r7, -0X4F18);
    // 0x004501DC: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x004501E0: jal         0x0021ECA0
    // 0x004501E4: nop

    func_0021ECA0(rdram, ctx);
        goto after_0;
    // 0x004501E4: nop

    after_0:
    // 0x004501E8: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x004501EC: jr          $ra
    // 0x004501F0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x004501F0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_002024D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002024D8: jr          $ra
    // 0x002024DC: sw          $zero, 0x8($t0)
    MEM_W(0X8, ctx->r8) = 0;
    return;
    // 0x002024DC: sw          $zero, 0x8($t0)
    MEM_W(0X8, ctx->r8) = 0;
;}
RECOMP_FUNC void func_00454110(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00454110: jr          $ra
    // 0x00454114: addiu       $v0, $zero, 0x1D4D
    ctx->r2 = ADD32(0, 0X1D4D);
    return;
    // 0x00454114: addiu       $v0, $zero, 0x1D4D
    ctx->r2 = ADD32(0, 0X1D4D);
;}
RECOMP_FUNC void func_00204EDC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00204EDC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00204EE0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00204EE4: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x00204EE8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00204EEC: addu        $s1, $a2, $zero
    ctx->r17 = ADD32(ctx->r6, 0);
    // 0x00204EF0: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x00204EF4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x00204EF8: jal         0x0029DFF0
    // 0x00204EFC: addu        $s2, $a3, $zero
    ctx->r18 = ADD32(ctx->r7, 0);
    func_0029DFF0(rdram, ctx);
        goto after_0;
    // 0x00204EFC: addu        $s2, $a3, $zero
    ctx->r18 = ADD32(ctx->r7, 0);
    after_0:
    // 0x00204F00: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x00204F04: lui         $v1, 0x800E
    ctx->r3 = S32(0X800E << 16);
    // 0x00204F08: lw          $v1, -0x7234($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X7234);
    // 0x00204F0C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00204F10: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x00204F14: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x00204F18: sw          $v1, -0x7234($at)
    MEM_W(-0X7234, ctx->r1) = ctx->r3;
    // 0x00204F1C: beq         $v1, $v0, L_00204F48
    if (ctx->r3 == ctx->r2) {
        // 0x00204F20: nop
    
            goto L_00204F48;
    }
    // 0x00204F20: nop

    // 0x00204F24: jal         0x0029E010
    // 0x00204F28: nop

    func_0029E010(rdram, ctx);
        goto after_1;
    // 0x00204F28: nop

    after_1:
    // 0x00204F2C: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x00204F30: addiu       $a0, $a0, -0x7250
    ctx->r4 = ADD32(ctx->r4, -0X7250);
    // 0x00204F34: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x00204F38: jal         0x0029B6F0
    // 0x00204F3C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osRecvMesg_recomp(rdram, ctx);
        goto after_2;
    // 0x00204F3C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_2:
    // 0x00204F40: j           L_00204F54
    // 0x00204F44: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
        goto L_00204F54;
    // 0x00204F44: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
L_00204F48:
    // 0x00204F48: jal         0x0029E010
    // 0x00204F4C: nop

    func_0029E010(rdram, ctx);
        goto after_3;
    // 0x00204F4C: nop

    after_3:
    // 0x00204F50: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
L_00204F54:
    // 0x00204F54: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x00204F58: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    // 0x00204F5C: jal         0x002060E0
    // 0x00204F60: addu        $a3, $s2, $zero
    ctx->r7 = ADD32(ctx->r18, 0);
    func_002060E0(rdram, ctx);
        goto after_4;
    // 0x00204F60: addu        $a3, $s2, $zero
    ctx->r7 = ADD32(ctx->r18, 0);
    after_4:
    // 0x00204F64: jal         0x0029DFF0
    // 0x00204F68: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    func_0029DFF0(rdram, ctx);
        goto after_5;
    // 0x00204F68: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    after_5:
    // 0x00204F6C: lui         $v1, 0x800E
    ctx->r3 = S32(0X800E << 16);
    // 0x00204F70: lw          $v1, -0x7234($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X7234);
    // 0x00204F74: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x00204F78: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x00204F7C: sw          $v1, -0x7234($at)
    MEM_W(-0X7234, ctx->r1) = ctx->r3;
    // 0x00204F80: beq         $v1, $zero, L_00204FAC
    if (ctx->r3 == 0) {
        // 0x00204F84: nop
    
            goto L_00204FAC;
    }
    // 0x00204F84: nop

    // 0x00204F88: jal         0x0029E010
    // 0x00204F8C: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    func_0029E010(rdram, ctx);
        goto after_6;
    // 0x00204F8C: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    after_6:
    // 0x00204F90: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x00204F94: addiu       $a0, $a0, -0x7250
    ctx->r4 = ADD32(ctx->r4, -0X7250);
    // 0x00204F98: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x00204F9C: jal         0x0029B820
    // 0x00204FA0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osSendMesg_recomp(rdram, ctx);
        goto after_7;
    // 0x00204FA0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_7:
    // 0x00204FA4: j           L_00204FB8
    // 0x00204FA8: addu        $v0, $s0, $zero
    ctx->r2 = ADD32(ctx->r16, 0);
        goto L_00204FB8;
    // 0x00204FA8: addu        $v0, $s0, $zero
    ctx->r2 = ADD32(ctx->r16, 0);
L_00204FAC:
    // 0x00204FAC: jal         0x0029E010
    // 0x00204FB0: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    func_0029E010(rdram, ctx);
        goto after_8;
    // 0x00204FB0: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    after_8:
    // 0x00204FB4: addu        $v0, $s0, $zero
    ctx->r2 = ADD32(ctx->r16, 0);
L_00204FB8:
    // 0x00204FB8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x00204FBC: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x00204FC0: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00204FC4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00204FC8: jr          $ra
    // 0x00204FCC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00204FCC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_00205A2C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00205A2C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00205A30: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x00205A34: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x00205A38: jal         0x0029DFF0
    // 0x00205A3C: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    func_0029DFF0(rdram, ctx);
        goto after_0;
    // 0x00205A3C: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    after_0:
    // 0x00205A40: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x00205A44: lui         $v1, 0x800E
    ctx->r3 = S32(0X800E << 16);
    // 0x00205A48: lw          $v1, -0x7234($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X7234);
    // 0x00205A4C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00205A50: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x00205A54: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x00205A58: sw          $v1, -0x7234($at)
    MEM_W(-0X7234, ctx->r1) = ctx->r3;
    // 0x00205A5C: beq         $v1, $v0, L_00205A88
    if (ctx->r3 == ctx->r2) {
        // 0x00205A60: nop
    
            goto L_00205A88;
    }
    // 0x00205A60: nop

    // 0x00205A64: jal         0x0029E010
    // 0x00205A68: nop

    func_0029E010(rdram, ctx);
        goto after_1;
    // 0x00205A68: nop

    after_1:
    // 0x00205A6C: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x00205A70: addiu       $a0, $a0, -0x7250
    ctx->r4 = ADD32(ctx->r4, -0X7250);
    // 0x00205A74: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x00205A78: jal         0x0029B6F0
    // 0x00205A7C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osRecvMesg_recomp(rdram, ctx);
        goto after_2;
    // 0x00205A7C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_2:
    // 0x00205A80: j           L_00205A94
    // 0x00205A84: sll         $v0, $s0, 5
    ctx->r2 = S32(ctx->r16 << 5);
        goto L_00205A94;
    // 0x00205A84: sll         $v0, $s0, 5
    ctx->r2 = S32(ctx->r16 << 5);
L_00205A88:
    // 0x00205A88: jal         0x0029E010
    // 0x00205A8C: nop

    func_0029E010(rdram, ctx);
        goto after_3;
    // 0x00205A8C: nop

    after_3:
    // 0x00205A90: sll         $v0, $s0, 5
    ctx->r2 = S32(ctx->r16 << 5);
L_00205A94:
    // 0x00205A94: srl         $v1, $s0, 1
    ctx->r3 = S32(U32(ctx->r16) >> 1);
    // 0x00205A98: xor         $v0, $v0, $v1
    ctx->r2 = ctx->r2 ^ ctx->r3;
    // 0x00205A9C: srl         $v1, $s0, 9
    ctx->r3 = S32(U32(ctx->r16) >> 9);
    // 0x00205AA0: xor         $v0, $v0, $v1
    ctx->r2 = ctx->r2 ^ ctx->r3;
    // 0x00205AA4: srl         $v1, $s0, 17
    ctx->r3 = S32(U32(ctx->r16) >> 17);
    // 0x00205AA8: xor         $v0, $v0, $v1
    ctx->r2 = ctx->r2 ^ ctx->r3;
    // 0x00205AAC: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x00205AB0: lw          $a0, -0x7E40($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X7E40);
    // 0x00205AB4: lui         $v1, 0x800E
    ctx->r3 = S32(0X800E << 16);
    // 0x00205AB8: lw          $v1, -0x7E3C($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X7E3C);
    // 0x00205ABC: and         $v0, $v0, $a0
    ctx->r2 = ctx->r2 & ctx->r4;
    // 0x00205AC0: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x00205AC4: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x00205AC8: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x00205ACC: bne         $v0, $s0, L_00205AEC
    if (ctx->r2 != ctx->r16) {
        // 0x00205AD0: addiu       $a0, $sp, 0x10
        ctx->r4 = ADD32(ctx->r29, 0X10);
            goto L_00205AEC;
    }
    // 0x00205AD0: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x00205AD4: lw          $v0, 0x4($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X4);
    // 0x00205AD8: j           L_00205B0C
    // 0x00205ADC: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
        goto L_00205B0C;
    // 0x00205ADC: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
L_00205AE0:
    // 0x00205AE0: lw          $v0, 0x4($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X4);
    // 0x00205AE4: j           L_00205B0C
    // 0x00205AE8: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
        goto L_00205B0C;
    // 0x00205AE8: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
L_00205AEC:
    // 0x00205AEC: beq         $v1, $zero, L_00205B0C
    if (ctx->r3 == 0) {
        // 0x00205AF0: sw          $zero, 0x10($sp)
        MEM_W(0X10, ctx->r29) = 0;
            goto L_00205B0C;
    }
    // 0x00205AF0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
L_00205AF4:
    // 0x00205AF4: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x00205AF8: beq         $v0, $s0, L_00205AE0
    if (ctx->r2 == ctx->r16) {
        // 0x00205AFC: nop
    
            goto L_00205AE0;
    }
    // 0x00205AFC: nop

    // 0x00205B00: lw          $v1, 0xC($v1)
    ctx->r3 = MEM_W(ctx->r3, 0XC);
    // 0x00205B04: bne         $v1, $zero, L_00205AF4
    if (ctx->r3 != 0) {
        // 0x00205B08: nop
    
            goto L_00205AF4;
    }
    // 0x00205B08: nop

L_00205B0C:
    // 0x00205B0C: lw          $a1, 0x10($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X10);
    // 0x00205B10: beq         $a1, $zero, L_00205B34
    if (ctx->r5 == 0) {
        // 0x00205B14: nop
    
            goto L_00205B34;
    }
    // 0x00205B14: nop

    // 0x00205B18: lw          $a1, 0x0($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X0);
    // 0x00205B1C: lui         $v0, 0x800E
    ctx->r2 = S32(0X800E << 16);
    // 0x00205B20: lw          $v0, -0x7210($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X7210);
    // 0x00205B24: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x00205B28: addiu       $a0, $a0, -0x7E20
    ctx->r4 = ADD32(ctx->r4, -0X7E20);
    // 0x00205B2C: jal         0x00200818
    // 0x00205B30: sw          $v0, 0x10($a1)
    MEM_W(0X10, ctx->r5) = ctx->r2;
    func_00200818(rdram, ctx);
        goto after_4;
    // 0x00205B30: sw          $v0, 0x10($a1)
    MEM_W(0X10, ctx->r5) = ctx->r2;
    after_4:
L_00205B34:
    // 0x00205B34: jal         0x0029DFF0
    // 0x00205B38: nop

    func_0029DFF0(rdram, ctx);
        goto after_5;
    // 0x00205B38: nop

    after_5:
    // 0x00205B3C: lui         $v1, 0x800E
    ctx->r3 = S32(0X800E << 16);
    // 0x00205B40: lw          $v1, -0x7234($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X7234);
    // 0x00205B44: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x00205B48: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x00205B4C: sw          $v1, -0x7234($at)
    MEM_W(-0X7234, ctx->r1) = ctx->r3;
    // 0x00205B50: beq         $v1, $zero, L_00205B7C
    if (ctx->r3 == 0) {
        // 0x00205B54: nop
    
            goto L_00205B7C;
    }
    // 0x00205B54: nop

    // 0x00205B58: jal         0x0029E010
    // 0x00205B5C: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    func_0029E010(rdram, ctx);
        goto after_6;
    // 0x00205B5C: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    after_6:
    // 0x00205B60: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x00205B64: addiu       $a0, $a0, -0x7250
    ctx->r4 = ADD32(ctx->r4, -0X7250);
    // 0x00205B68: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x00205B6C: jal         0x0029B820
    // 0x00205B70: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osSendMesg_recomp(rdram, ctx);
        goto after_7;
    // 0x00205B70: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_7:
    // 0x00205B74: j           L_00205B84
    // 0x00205B78: nop

        goto L_00205B84;
    // 0x00205B78: nop

L_00205B7C:
    // 0x00205B7C: jal         0x0029E010
    // 0x00205B80: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    func_0029E010(rdram, ctx);
        goto after_8;
    // 0x00205B80: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    after_8:
L_00205B84:
    // 0x00205B84: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x00205B88: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x00205B8C: jr          $ra
    // 0x00205B90: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00205B90: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_0042D0A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0042D0A0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x0042D0A4: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x0042D0A8: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x0042D0AC: addiu       $a0, $s2, 0x5300
    ctx->r4 = ADD32(ctx->r18, 0X5300);
    // 0x0042D0B0: addiu       $a1, $zero, 0x288
    ctx->r5 = ADD32(0, 0X288);
    // 0x0042D0B4: addiu       $a2, $zero, 0x28C
    ctx->r6 = ADD32(0, 0X28C);
    // 0x0042D0B8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x0042D0BC: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x0042D0C0: jal         0x00200500
    // 0x0042D0C4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    func_00200500(rdram, ctx);
        goto after_0;
    // 0x0042D0C4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_0:
    // 0x0042D0C8: addiu       $a0, $s2, 0x5314
    ctx->r4 = ADD32(ctx->r18, 0X5314);
    // 0x0042D0CC: addiu       $a1, $zero, 0x288
    ctx->r5 = ADD32(0, 0X288);
    // 0x0042D0D0: jal         0x00200500
    // 0x0042D0D4: addiu       $a2, $zero, 0x28C
    ctx->r6 = ADD32(0, 0X28C);
    func_00200500(rdram, ctx);
        goto after_1;
    // 0x0042D0D4: addiu       $a2, $zero, 0x28C
    ctx->r6 = ADD32(0, 0X28C);
    after_1:
    // 0x0042D0D8: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x0042D0DC: addu        $s0, $s2, $zero
    ctx->r16 = ADD32(ctx->r18, 0);
L_0042D0E0:
    // 0x0042D0E0: addiu       $a0, $s2, 0x5300
    ctx->r4 = ADD32(ctx->r18, 0X5300);
    // 0x0042D0E4: jal         0x00200574
    // 0x0042D0E8: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_00200574(rdram, ctx);
        goto after_2;
    // 0x0042D0E8: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_2:
    // 0x0042D0EC: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x0042D0F0: slti        $v0, $s1, 0x20
    ctx->r2 = SIGNED(ctx->r17) < 0X20 ? 1 : 0;
    // 0x0042D0F4: bne         $v0, $zero, L_0042D0E0
    if (ctx->r2 != 0) {
        // 0x0042D0F8: addiu       $s0, $s0, 0x298
        ctx->r16 = ADD32(ctx->r16, 0X298);
            goto L_0042D0E0;
    }
    // 0x0042D0F8: addiu       $s0, $s0, 0x298
    ctx->r16 = ADD32(ctx->r16, 0X298);
    // 0x0042D0FC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x0042D100: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x0042D104: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x0042D108: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0042D10C: jr          $ra
    // 0x0042D110: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x0042D110: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_0025FA54(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0025FA54: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0025FA58: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x0025FA5C: lwc1        $f0, 0x64($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X64);
    // 0x0025FA60: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0025FA64: lwc1        $f1, 0x7948($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X7948);
    // 0x0025FA68: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x0025FA6C: nop

    // 0x0025FA70: bc1tl       L_0025FA78
    if (c1cs) {
        // 0x0025FA74: swc1        $f1, 0x64($a1)
        MEM_W(0X64, ctx->r5) = ctx->f_odd[(1 - 1) * 2];
            goto L_0025FA78;
    }
    goto skip_0;
    // 0x0025FA74: swc1        $f1, 0x64($a1)
    MEM_W(0X64, ctx->r5) = ctx->f_odd[(1 - 1) * 2];
    skip_0:
L_0025FA78:
    // 0x0025FA78: lwc1        $f0, 0x64($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X64);
    // 0x0025FA7C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0025FA80: lwc1        $f1, 0x6D28($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X6D28);
    // 0x0025FA84: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x0025FA88: mtc1        $zero, $f1
    ctx->f_odd[(1 - 1) * 2] = 0;
    // 0x0025FA8C: c.le.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl <= ctx->f1.fl;
    // 0x0025FA90: nop

    // 0x0025FA94: bc1f        L_0025FAA4
    if (!c1cs) {
        // 0x0025FA98: swc1        $f0, 0x64($a1)
        MEM_W(0X64, ctx->r5) = ctx->f0.u32l;
            goto L_0025FAA4;
    }
    // 0x0025FA98: swc1        $f0, 0x64($a1)
    MEM_W(0X64, ctx->r5) = ctx->f0.u32l;
    // 0x0025FA9C: jal         0x00243414
    // 0x0025FAA0: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    func_00243414(rdram, ctx);
        goto after_0;
    // 0x0025FAA0: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    after_0:
L_0025FAA4:
    // 0x0025FAA4: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x0025FAA8: jr          $ra
    // 0x0025FAAC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0025FAAC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0027C4E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0027C4E4: addiu       $sp, $sp, -0x80
    ctx->r29 = ADD32(ctx->r29, -0X80);
    // 0x0027C4E8: sdc1        $f21, 0x48($sp)
    CHECK_FR(ctx, 21);
    SD(ctx->f21.u64, 0X48, ctx->r29);
    // 0x0027C4EC: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0027C4F0: ldc1        $f21, -0x67F8($at)
    CHECK_FR(ctx, 21);
    ctx->f21.u64 = LD(ctx->r1, -0X67F8);
    // 0x0027C4F4: sdc1        $f25, 0x68($sp)
    CHECK_FR(ctx, 25);
    SD(ctx->f25.u64, 0X68, ctx->r29);
    // 0x0027C4F8: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0027C4FC: lwc1        $f25, -0x67F0($at)
    ctx->f_odd[(25 - 1) * 2] = MEM_W(ctx->r1, -0X67F0);
    // 0x0027C500: sdc1        $f24, 0x60($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X60, ctx->r29);
    // 0x0027C504: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0027C508: lwc1        $f24, -0x67EC($at)
    ctx->f24.u32l = MEM_W(ctx->r1, -0X67EC);
    // 0x0027C50C: sdc1        $f23, 0x58($sp)
    CHECK_FR(ctx, 23);
    SD(ctx->f23.u64, 0X58, ctx->r29);
    // 0x0027C510: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0027C514: lwc1        $f23, -0x67E8($at)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r1, -0X67E8);
    // 0x0027C518: sdc1        $f20, 0x40($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X40, ctx->r29);
    // 0x0027C51C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0027C520: lwc1        $f20, -0x67E4($at)
    ctx->f20.u32l = MEM_W(ctx->r1, -0X67E4);
    // 0x0027C524: sdc1        $f26, 0x70($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X70, ctx->r29);
    // 0x0027C528: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0027C52C: lwc1        $f26, -0x67E0($at)
    ctx->f26.u32l = MEM_W(ctx->r1, -0X67E0);
    // 0x0027C530: sdc1        $f22, 0x50($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X50, ctx->r29);
    // 0x0027C534: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0027C538: lwc1        $f22, -0x67DC($at)
    ctx->f22.u32l = MEM_W(ctx->r1, -0X67DC);
    // 0x0027C53C: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x0027C540: addu        $s4, $a0, $zero
    ctx->r20 = ADD32(ctx->r4, 0);
    // 0x0027C544: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x0027C548: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    // 0x0027C54C: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x0027C550: lui         $s3, 0x8000
    ctx->r19 = S32(0X8000 << 16);
    // 0x0027C554: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x0027C558: lui         $s1, 0x800B
    ctx->r17 = S32(0X800B << 16);
    // 0x0027C55C: addiu       $s1, $s1, -0x4F30
    ctx->r17 = ADD32(ctx->r17, -0X4F30);
    // 0x0027C560: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x0027C564: addiu       $s0, $zero, 0x2
    ctx->r16 = ADD32(0, 0X2);
    // 0x0027C568: sw          $ra, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r31;
    // 0x0027C56C: sw          $s5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r21;
    // 0x0027C570: sdc1        $f27, 0x78($sp)
    CHECK_FR(ctx, 27);
    SD(ctx->f27.u64, 0X78, ctx->r29);
    // 0x0027C574: mov.s       $f27, $f26
    CHECK_FR(ctx, 27);
    CHECK_FR(ctx, 26);
    ctx->f27.fl = ctx->f26.fl;
L_0027C578:
    // 0x0027C578: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0027C57C: lw          $v0, 0x6D20($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X6D20);
    // 0x0027C580: mtc1        $v0, $f12
    ctx->f12.u32l = ctx->r2;
    // 0x0027C584: cvt.d.w     $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    ctx->f12.d = CVT_D_W(ctx->f12.u32l);
    // 0x0027C588: bltzl       $v0, L_0027C590
    if (SIGNED(ctx->r2) < 0) {
        // 0x0027C58C: add.d       $f12, $f12, $f21
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f12.d); NAN_CHECK(ctx->f21.d); 
    ctx->f12.d = ctx->f12.d + ctx->f21.d;
            goto L_0027C590;
    }
    goto skip_0;
    // 0x0027C58C: add.d       $f12, $f12, $f21
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f12.d); NAN_CHECK(ctx->f21.d); 
    ctx->f12.d = ctx->f12.d + ctx->f21.d;
    skip_0:
L_0027C590:
    // 0x0027C590: cvt.s.d     $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.d); 
    ctx->f12.fl = CVT_S_D(ctx->f12.d);
    // 0x0027C594: mul.s       $f12, $f26, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f26.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = MUL_S(ctx->f26.fl, ctx->f12.fl);
    // 0x0027C598: mtc1        $s0, $f0
    ctx->f0.u32l = ctx->r16;
    // 0x0027C59C: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x0027C5A0: mul.s       $f0, $f0, $f25
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 25);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f25.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f25.fl);
    // 0x0027C5A4: nop

    // 0x0027C5A8: mul.s       $f12, $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = MUL_S(ctx->f12.fl, ctx->f0.fl);
    // 0x0027C5AC: nop

    // 0x0027C5B0: mul.s       $f12, $f12, $f24
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f12.fl = MUL_S(ctx->f12.fl, ctx->f24.fl);
    // 0x0027C5B4: jal         0x002982F0
    // 0x0027C5B8: nop

    func_002982F0(rdram, ctx);
        goto after_0;
    // 0x0027C5B8: nop

    after_0:
    // 0x0027C5BC: mul.s       $f0, $f0, $f23
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 23);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f23.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f23.fl);
    // 0x0027C5C0: nop

    // 0x0027C5C4: mul.s       $f0, $f27, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 27);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f27.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f27.fl, ctx->f0.fl);
    // 0x0027C5C8: add.s       $f0, $f0, $f23
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 23);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f23.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f23.fl;
    // 0x0027C5CC: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0027C5D0: lwc1        $f1, -0x67D8($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, -0X67D8);
    // 0x0027C5D4: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x0027C5D8: c.le.s      $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f20.fl <= ctx->f0.fl;
    // 0x0027C5DC: nop

    // 0x0027C5E0: bc1t        L_0027C5F8
    if (c1cs) {
        // 0x0027C5E4: addu        $v1, $s1, $zero
        ctx->r3 = ADD32(ctx->r17, 0);
            goto L_0027C5F8;
    }
    // 0x0027C5E4: addu        $v1, $s1, $zero
    ctx->r3 = ADD32(ctx->r17, 0);
    // 0x0027C5E8: trunc.w.s   $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x0027C5EC: mfc1        $v0, $f4
    ctx->r2 = (int32_t)ctx->f4.u32l;
    // 0x0027C5F0: j           L_0027C60C
    // 0x0027C5F4: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
        goto L_0027C60C;
    // 0x0027C5F4: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
L_0027C5F8:
    // 0x0027C5F8: sub.s       $f0, $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f20.fl;
    // 0x0027C5FC: trunc.w.s   $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x0027C600: mfc1        $v0, $f4
    ctx->r2 = (int32_t)ctx->f4.u32l;
    // 0x0027C604: or          $v0, $v0, $s3
    ctx->r2 = ctx->r2 | ctx->r19;
    // 0x0027C608: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
L_0027C60C:
    // 0x0027C60C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0027C610: addu        $at, $at, $s0
    ctx->r1 = ADD32(ctx->r1, ctx->r16);
    // 0x0027C614: sb          $v0, -0x4F2E($at)
    MEM_B(-0X4F2E, ctx->r1) = ctx->r2;
    // 0x0027C618: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0027C61C: lw          $v0, 0x6D20($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X6D20);
    // 0x0027C620: mtc1        $v0, $f12
    ctx->f12.u32l = ctx->r2;
    // 0x0027C624: cvt.d.w     $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    ctx->f12.d = CVT_D_W(ctx->f12.u32l);
    // 0x0027C628: bltzl       $v0, L_0027C630
    if (SIGNED(ctx->r2) < 0) {
        // 0x0027C62C: add.d       $f12, $f12, $f21
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f12.d); NAN_CHECK(ctx->f21.d); 
    ctx->f12.d = ctx->f12.d + ctx->f21.d;
            goto L_0027C630;
    }
    goto skip_1;
    // 0x0027C62C: add.d       $f12, $f12, $f21
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f12.d); NAN_CHECK(ctx->f21.d); 
    ctx->f12.d = ctx->f12.d + ctx->f21.d;
    skip_1:
L_0027C630:
    // 0x0027C630: cvt.s.d     $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.d); 
    ctx->f12.fl = CVT_S_D(ctx->f12.d);
    // 0x0027C634: mul.s       $f12, $f26, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f26.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = MUL_S(ctx->f26.fl, ctx->f12.fl);
    // 0x0027C638: mtc1        $s0, $f0
    ctx->f0.u32l = ctx->r16;
    // 0x0027C63C: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x0027C640: mul.s       $f0, $f0, $f25
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 25);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f25.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f25.fl);
    // 0x0027C644: nop

    // 0x0027C648: mul.s       $f12, $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = MUL_S(ctx->f12.fl, ctx->f0.fl);
    // 0x0027C64C: nop

    // 0x0027C650: mul.s       $f12, $f12, $f24
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f12.fl = MUL_S(ctx->f12.fl, ctx->f24.fl);
    // 0x0027C654: jal         0x002982F0
    // 0x0027C658: nop

    func_002982F0(rdram, ctx);
        goto after_1;
    // 0x0027C658: nop

    after_1:
    // 0x0027C65C: mul.s       $f0, $f0, $f22
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f22.fl);
    // 0x0027C660: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0027C664: lwc1        $f1, -0x67D4($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, -0X67D4);
    // 0x0027C668: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x0027C66C: sub.s       $f0, $f0, $f22
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f22.fl;
    // 0x0027C670: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0027C674: lwc1        $f1, -0x67D0($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, -0X67D0);
    // 0x0027C678: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x0027C67C: c.le.s      $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f20.fl <= ctx->f0.fl;
    // 0x0027C680: nop

    // 0x0027C684: bc1t        L_0027C69C
    if (c1cs) {
        // 0x0027C688: addu        $v1, $s1, $zero
        ctx->r3 = ADD32(ctx->r17, 0);
            goto L_0027C69C;
    }
    // 0x0027C688: addu        $v1, $s1, $zero
    ctx->r3 = ADD32(ctx->r17, 0);
    // 0x0027C68C: trunc.w.s   $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x0027C690: mfc1        $v0, $f4
    ctx->r2 = (int32_t)ctx->f4.u32l;
    // 0x0027C694: j           L_0027C6B0
    // 0x0027C698: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
        goto L_0027C6B0;
    // 0x0027C698: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_0027C69C:
    // 0x0027C69C: sub.s       $f0, $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f20.fl;
    // 0x0027C6A0: trunc.w.s   $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x0027C6A4: mfc1        $v0, $f4
    ctx->r2 = (int32_t)ctx->f4.u32l;
    // 0x0027C6A8: or          $v0, $v0, $s3
    ctx->r2 = ctx->r2 | ctx->r19;
    // 0x0027C6AC: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_0027C6B0:
    // 0x0027C6B0: sb          $v0, 0x8($v1)
    MEM_B(0X8, ctx->r3) = ctx->r2;
    // 0x0027C6B4: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0027C6B8: addu        $at, $at, $s0
    ctx->r1 = ADD32(ctx->r1, ctx->r16);
    // 0x0027C6BC: sb          $v0, -0x4F26($at)
    MEM_B(-0X4F26, ctx->r1) = ctx->r2;
    // 0x0027C6C0: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x0027C6C4: lui         $s5, 0x800B
    ctx->r21 = S32(0X800B << 16);
    // 0x0027C6C8: addiu       $s5, $s5, -0x4F24
    ctx->r21 = ADD32(ctx->r21, -0X4F24);
    // 0x0027C6CC: slti        $v0, $s2, 0x3
    ctx->r2 = SIGNED(ctx->r18) < 0X3 ? 1 : 0;
    // 0x0027C6D0: bne         $v0, $zero, L_0027C578
    if (ctx->r2 != 0) {
        // 0x0027C6D4: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_0027C578;
    }
    // 0x0027C6D4: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x0027C6D8: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x0027C6DC: lw          $v1, 0x6D20($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X6D20);
    // 0x0027C6E0: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x0027C6E4: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x0027C6E8: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x0027C6EC: mtc1        $v0, $f12
    ctx->f12.u32l = ctx->r2;
    // 0x0027C6F0: cvt.d.w     $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    ctx->f12.d = CVT_D_W(ctx->f12.u32l);
    // 0x0027C6F4: bgez        $v0, L_0027C708
    if (SIGNED(ctx->r2) >= 0) {
        // 0x0027C6F8: nop
    
            goto L_0027C708;
    }
    // 0x0027C6F8: nop

    // 0x0027C6FC: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0027C700: ldc1        $f0, -0x67C8($at)
    CHECK_FR(ctx, 0);
    ctx->f0.u64 = LD(ctx->r1, -0X67C8);
    // 0x0027C704: add.d       $f12, $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.d); NAN_CHECK(ctx->f0.d); 
    ctx->f12.d = ctx->f12.d + ctx->f0.d;
L_0027C708:
    // 0x0027C708: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0027C70C: lwc1        $f20, -0x67C0($at)
    ctx->f20.u32l = MEM_W(ctx->r1, -0X67C0);
    // 0x0027C710: cvt.s.d     $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.d); 
    ctx->f12.fl = CVT_S_D(ctx->f12.d);
    // 0x0027C714: mul.s       $f12, $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f12.fl = MUL_S(ctx->f12.fl, ctx->f20.fl);
    // 0x0027C718: jal         0x002982F0
    // 0x0027C71C: nop

    func_002982F0(rdram, ctx);
        goto after_2;
    // 0x0027C71C: nop

    after_2:
    // 0x0027C720: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0027C724: lw          $v0, 0x6D20($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X6D20);
    // 0x0027C728: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x0027C72C: mtc1        $v0, $f12
    ctx->f12.u32l = ctx->r2;
    // 0x0027C730: cvt.d.w     $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    ctx->f12.d = CVT_D_W(ctx->f12.u32l);
    // 0x0027C734: bgez        $v0, L_0027C748
    if (SIGNED(ctx->r2) >= 0) {
        // 0x0027C738: swc1        $f0, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
            goto L_0027C748;
    }
    // 0x0027C738: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    // 0x0027C73C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0027C740: ldc1        $f0, -0x67B8($at)
    CHECK_FR(ctx, 0);
    ctx->f0.u64 = LD(ctx->r1, -0X67B8);
    // 0x0027C744: add.d       $f12, $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.d); NAN_CHECK(ctx->f0.d); 
    ctx->f12.d = ctx->f12.d + ctx->f0.d;
L_0027C748:
    // 0x0027C748: cvt.s.d     $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.d); 
    ctx->f12.fl = CVT_S_D(ctx->f12.d);
    // 0x0027C74C: mul.s       $f12, $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f12.fl = MUL_S(ctx->f12.fl, ctx->f20.fl);
    // 0x0027C750: jal         0x002982F0
    // 0x0027C754: nop

    func_002982F0(rdram, ctx);
        goto after_3;
    // 0x0027C754: nop

    after_3:
    // 0x0027C758: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x0027C75C: lw          $v1, 0x6D20($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X6D20);
    // 0x0027C760: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x0027C764: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x0027C768: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x0027C76C: mtc1        $v0, $f12
    ctx->f12.u32l = ctx->r2;
    // 0x0027C770: cvt.d.w     $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    ctx->f12.d = CVT_D_W(ctx->f12.u32l);
    // 0x0027C774: bgez        $v0, L_0027C788
    if (SIGNED(ctx->r2) >= 0) {
        // 0x0027C778: swc1        $f0, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
            goto L_0027C788;
    }
    // 0x0027C778: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    // 0x0027C77C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0027C780: ldc1        $f0, -0x67B0($at)
    CHECK_FR(ctx, 0);
    ctx->f0.u64 = LD(ctx->r1, -0X67B0);
    // 0x0027C784: add.d       $f12, $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.d); NAN_CHECK(ctx->f0.d); 
    ctx->f12.d = ctx->f12.d + ctx->f0.d;
L_0027C788:
    // 0x0027C788: cvt.s.d     $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.d); 
    ctx->f12.fl = CVT_S_D(ctx->f12.d);
    // 0x0027C78C: mul.s       $f12, $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f12.fl = MUL_S(ctx->f12.fl, ctx->f20.fl);
    // 0x0027C790: jal         0x002974C0
    // 0x0027C794: nop

    func_002974C0(rdram, ctx);
        goto after_4;
    // 0x0027C794: nop

    after_4:
    // 0x0027C798: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x0027C79C: jal         0x0020F040
    // 0x0027C7A0: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    func_0020F040(rdram, ctx);
        goto after_5;
    // 0x0027C7A0: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    after_5:
    // 0x0027C7A4: lwc1        $f1, 0x10($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x0027C7A8: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0027C7AC: lwc1        $f0, -0x67A8($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X67A8);
    // 0x0027C7B0: mul.s       $f3, $f1, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f3.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x0027C7B4: lwc1        $f2, 0x14($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X14);
    // 0x0027C7B8: mul.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x0027C7BC: lwc1        $f1, 0x18($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x0027C7C0: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x0027C7C4: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0027C7C8: lwc1        $f0, -0x67A4($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X67A4);
    // 0x0027C7CC: addiu       $a0, $s5, 0x4
    ctx->r4 = ADD32(ctx->r21, 0X4);
    // 0x0027C7D0: c.le.s      $f0, $f3
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    c1cs = ctx->f0.fl <= ctx->f3.fl;
    // 0x0027C7D4: swc1        $f3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(3 - 1) * 2];
    // 0x0027C7D8: swc1        $f2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f2.u32l;
    // 0x0027C7DC: bc1t        L_0027C7F4
    if (c1cs) {
        // 0x0027C7E0: swc1        $f1, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
            goto L_0027C7F4;
    }
    // 0x0027C7E0: swc1        $f1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    // 0x0027C7E4: trunc.w.s   $f4, $f3
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 3);
    ctx->f4.u32l = TRUNC_W_S(ctx->f3.fl);
    // 0x0027C7E8: mfc1        $v1, $f4
    ctx->r3 = (int32_t)ctx->f4.u32l;
    // 0x0027C7EC: j           L_0027C808
    // 0x0027C7F0: nop

        goto L_0027C808;
    // 0x0027C7F0: nop

L_0027C7F4:
    // 0x0027C7F4: sub.s       $f0, $f3, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f3.fl - ctx->f0.fl;
    // 0x0027C7F8: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x0027C7FC: trunc.w.s   $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x0027C800: mfc1        $v1, $f4
    ctx->r3 = (int32_t)ctx->f4.u32l;
    // 0x0027C804: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
L_0027C808:
    // 0x0027C808: lwc1        $f0, 0x14($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X14);
    // 0x0027C80C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0027C810: lwc1        $f1, -0x67A0($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, -0X67A0);
    // 0x0027C814: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x0027C818: nop

    // 0x0027C81C: bc1t        L_0027C834
    if (c1cs) {
        // 0x0027C820: sb          $v1, 0x0($a0)
        MEM_B(0X0, ctx->r4) = ctx->r3;
            goto L_0027C834;
    }
    // 0x0027C820: sb          $v1, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r3;
    // 0x0027C824: trunc.w.s   $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x0027C828: mfc1        $v1, $f4
    ctx->r3 = (int32_t)ctx->f4.u32l;
    // 0x0027C82C: j           L_0027C848
    // 0x0027C830: nop

        goto L_0027C848;
    // 0x0027C830: nop

L_0027C834:
    // 0x0027C834: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x0027C838: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x0027C83C: trunc.w.s   $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x0027C840: mfc1        $v1, $f4
    ctx->r3 = (int32_t)ctx->f4.u32l;
    // 0x0027C844: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
L_0027C848:
    // 0x0027C848: lwc1        $f0, 0x18($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X18);
    // 0x0027C84C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0027C850: lwc1        $f1, -0x679C($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, -0X679C);
    // 0x0027C854: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0027C858: sb          $v1, -0x4F1F($at)
    MEM_B(-0X4F1F, ctx->r1) = ctx->r3;
    // 0x0027C85C: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x0027C860: nop

    // 0x0027C864: bc1tl       L_0027C87C
    if (c1cs) {
        // 0x0027C868: sub.s       $f0, $f0, $f1
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
            goto L_0027C87C;
    }
    goto skip_2;
    // 0x0027C868: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    skip_2:
    // 0x0027C86C: trunc.w.s   $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x0027C870: mfc1        $v1, $f4
    ctx->r3 = (int32_t)ctx->f4.u32l;
    // 0x0027C874: j           L_0027C88C
    // 0x0027C878: nop

        goto L_0027C88C;
    // 0x0027C878: nop

L_0027C87C:
    // 0x0027C87C: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x0027C880: trunc.w.s   $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x0027C884: mfc1        $v1, $f4
    ctx->r3 = (int32_t)ctx->f4.u32l;
    // 0x0027C888: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
L_0027C88C:
    // 0x0027C88C: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0027C890: lw          $v0, 0x6D20($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X6D20);
    // 0x0027C894: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0027C898: sb          $v1, -0x4F1E($at)
    MEM_B(-0X4F1E, ctx->r1) = ctx->r3;
    // 0x0027C89C: mtc1        $v0, $f12
    ctx->f12.u32l = ctx->r2;
    // 0x0027C8A0: cvt.d.w     $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    ctx->f12.d = CVT_D_W(ctx->f12.u32l);
    // 0x0027C8A4: bgezl       $v0, L_0027C8BC
    if (SIGNED(ctx->r2) >= 0) {
        // 0x0027C8A8: cvt.s.d     $f12, $f12
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.d); 
    ctx->f12.fl = CVT_S_D(ctx->f12.d);
            goto L_0027C8BC;
    }
    goto skip_3;
    // 0x0027C8A8: cvt.s.d     $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.d); 
    ctx->f12.fl = CVT_S_D(ctx->f12.d);
    skip_3:
    // 0x0027C8AC: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0027C8B0: ldc1        $f0, -0x6798($at)
    CHECK_FR(ctx, 0);
    ctx->f0.u64 = LD(ctx->r1, -0X6798);
    // 0x0027C8B4: add.d       $f12, $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.d); NAN_CHECK(ctx->f0.d); 
    ctx->f12.d = ctx->f12.d + ctx->f0.d;
    // 0x0027C8B8: cvt.s.d     $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.d); 
    ctx->f12.fl = CVT_S_D(ctx->f12.d);
L_0027C8BC:
    // 0x0027C8BC: mul.s       $f12, $f26, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f26.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = MUL_S(ctx->f26.fl, ctx->f12.fl);
    // 0x0027C8C0: add.s       $f12, $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f12.fl;
    // 0x0027C8C4: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0027C8C8: lwc1        $f0, -0x6790($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X6790);
    // 0x0027C8CC: mul.s       $f12, $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = MUL_S(ctx->f12.fl, ctx->f0.fl);
    // 0x0027C8D0: jal         0x002982F0
    // 0x0027C8D4: nop

    func_002982F0(rdram, ctx);
        goto after_6;
    // 0x0027C8D4: nop

    after_6:
    // 0x0027C8D8: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0027C8DC: lwc1        $f1, -0x678C($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, -0X678C);
    // 0x0027C8E0: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0027C8E4: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0027C8E8: lwc1        $f1, -0x6788($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, -0X6788);
    // 0x0027C8EC: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x0027C8F0: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0027C8F4: lwc1        $f1, -0x6784($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, -0X6784);
    // 0x0027C8F8: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x0027C8FC: nop

    // 0x0027C900: bc1tl       L_0027C918
    if (c1cs) {
        // 0x0027C904: sub.s       $f0, $f0, $f1
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
            goto L_0027C918;
    }
    goto skip_4;
    // 0x0027C904: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    skip_4:
    // 0x0027C908: trunc.w.s   $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x0027C90C: mfc1        $v1, $f4
    ctx->r3 = (int32_t)ctx->f4.u32l;
    // 0x0027C910: j           L_0027C92C
    // 0x0027C914: andi        $v0, $v1, 0xF8
    ctx->r2 = ctx->r3 & 0XF8;
        goto L_0027C92C;
    // 0x0027C914: andi        $v0, $v1, 0xF8
    ctx->r2 = ctx->r3 & 0XF8;
L_0027C918:
    // 0x0027C918: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x0027C91C: trunc.w.s   $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x0027C920: mfc1        $v1, $f4
    ctx->r3 = (int32_t)ctx->f4.u32l;
    // 0x0027C924: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x0027C928: andi        $v0, $v1, 0xF8
    ctx->r2 = ctx->r3 & 0XF8;
L_0027C92C:
    // 0x0027C92C: sb          $v0, 0x508($s4)
    MEM_B(0X508, ctx->r20) = ctx->r2;
    // 0x0027C930: sb          $v0, 0x50C($s4)
    MEM_B(0X50C, ctx->r20) = ctx->r2;
    // 0x0027C934: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0027C938: lw          $v0, 0x6D20($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X6D20);
    // 0x0027C93C: mtc1        $v0, $f12
    ctx->f12.u32l = ctx->r2;
    // 0x0027C940: cvt.d.w     $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    ctx->f12.d = CVT_D_W(ctx->f12.u32l);
    // 0x0027C944: bgezl       $v0, L_0027C95C
    if (SIGNED(ctx->r2) >= 0) {
        // 0x0027C948: cvt.s.d     $f12, $f12
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.d); 
    ctx->f12.fl = CVT_S_D(ctx->f12.d);
            goto L_0027C95C;
    }
    goto skip_5;
    // 0x0027C948: cvt.s.d     $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.d); 
    ctx->f12.fl = CVT_S_D(ctx->f12.d);
    skip_5:
    // 0x0027C94C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0027C950: ldc1        $f0, -0x6780($at)
    CHECK_FR(ctx, 0);
    ctx->f0.u64 = LD(ctx->r1, -0X6780);
    // 0x0027C954: add.d       $f12, $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.d); NAN_CHECK(ctx->f0.d); 
    ctx->f12.d = ctx->f12.d + ctx->f0.d;
    // 0x0027C958: cvt.s.d     $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.d); 
    ctx->f12.fl = CVT_S_D(ctx->f12.d);
L_0027C95C:
    // 0x0027C95C: mul.s       $f12, $f26, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f26.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = MUL_S(ctx->f26.fl, ctx->f12.fl);
    // 0x0027C960: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0027C964: lwc1        $f0, -0x6778($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X6778);
    // 0x0027C968: mul.s       $f12, $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = MUL_S(ctx->f12.fl, ctx->f0.fl);
    // 0x0027C96C: jal         0x002982F0
    // 0x0027C970: nop

    func_002982F0(rdram, ctx);
        goto after_7;
    // 0x0027C970: nop

    after_7:
    // 0x0027C974: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0027C978: lwc1        $f1, -0x6774($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, -0X6774);
    // 0x0027C97C: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0027C980: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0027C984: lwc1        $f1, -0x6770($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, -0X6770);
    // 0x0027C988: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x0027C98C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0027C990: lwc1        $f1, -0x676C($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, -0X676C);
    // 0x0027C994: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x0027C998: nop

    // 0x0027C99C: bc1tl       L_0027C9B4
    if (c1cs) {
        // 0x0027C9A0: sub.s       $f0, $f0, $f1
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
            goto L_0027C9B4;
    }
    goto skip_6;
    // 0x0027C9A0: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    skip_6:
    // 0x0027C9A4: trunc.w.s   $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x0027C9A8: mfc1        $v1, $f4
    ctx->r3 = (int32_t)ctx->f4.u32l;
    // 0x0027C9AC: j           L_0027C9C8
    // 0x0027C9B0: andi        $v0, $v1, 0xF8
    ctx->r2 = ctx->r3 & 0XF8;
        goto L_0027C9C8;
    // 0x0027C9B0: andi        $v0, $v1, 0xF8
    ctx->r2 = ctx->r3 & 0XF8;
L_0027C9B4:
    // 0x0027C9B4: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x0027C9B8: trunc.w.s   $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x0027C9BC: mfc1        $v1, $f4
    ctx->r3 = (int32_t)ctx->f4.u32l;
    // 0x0027C9C0: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x0027C9C4: andi        $v0, $v1, 0xF8
    ctx->r2 = ctx->r3 & 0XF8;
L_0027C9C8:
    // 0x0027C9C8: sb          $v0, 0x509($s4)
    MEM_B(0X509, ctx->r20) = ctx->r2;
    // 0x0027C9CC: sb          $v0, 0x50D($s4)
    MEM_B(0X50D, ctx->r20) = ctx->r2;
    // 0x0027C9D0: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0027C9D4: lw          $v0, 0x6D20($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X6D20);
    // 0x0027C9D8: mtc1        $v0, $f12
    ctx->f12.u32l = ctx->r2;
    // 0x0027C9DC: cvt.d.w     $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    ctx->f12.d = CVT_D_W(ctx->f12.u32l);
    // 0x0027C9E0: bgezl       $v0, L_0027C9F8
    if (SIGNED(ctx->r2) >= 0) {
        // 0x0027C9E4: cvt.s.d     $f12, $f12
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.d); 
    ctx->f12.fl = CVT_S_D(ctx->f12.d);
            goto L_0027C9F8;
    }
    goto skip_7;
    // 0x0027C9E4: cvt.s.d     $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.d); 
    ctx->f12.fl = CVT_S_D(ctx->f12.d);
    skip_7:
    // 0x0027C9E8: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0027C9EC: ldc1        $f0, -0x6768($at)
    CHECK_FR(ctx, 0);
    ctx->f0.u64 = LD(ctx->r1, -0X6768);
    // 0x0027C9F0: add.d       $f12, $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.d); NAN_CHECK(ctx->f0.d); 
    ctx->f12.d = ctx->f12.d + ctx->f0.d;
    // 0x0027C9F4: cvt.s.d     $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.d); 
    ctx->f12.fl = CVT_S_D(ctx->f12.d);
L_0027C9F8:
    // 0x0027C9F8: mul.s       $f12, $f26, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f26.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = MUL_S(ctx->f26.fl, ctx->f12.fl);
    // 0x0027C9FC: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0027CA00: lwc1        $f0, -0x6760($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X6760);
    // 0x0027CA04: mul.s       $f12, $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = MUL_S(ctx->f12.fl, ctx->f0.fl);
    // 0x0027CA08: jal         0x002982F0
    // 0x0027CA0C: nop

    func_002982F0(rdram, ctx);
        goto after_8;
    // 0x0027CA0C: nop

    after_8:
    // 0x0027CA10: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0027CA14: lwc1        $f1, -0x675C($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, -0X675C);
    // 0x0027CA18: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0027CA1C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0027CA20: lwc1        $f1, -0x6758($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, -0X6758);
    // 0x0027CA24: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x0027CA28: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0027CA2C: lwc1        $f1, -0x6754($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, -0X6754);
    // 0x0027CA30: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x0027CA34: nop

    // 0x0027CA38: bc1tl       L_0027CA50
    if (c1cs) {
        // 0x0027CA3C: sub.s       $f0, $f0, $f1
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
            goto L_0027CA50;
    }
    goto skip_8;
    // 0x0027CA3C: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    skip_8:
    // 0x0027CA40: trunc.w.s   $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x0027CA44: mfc1        $v1, $f4
    ctx->r3 = (int32_t)ctx->f4.u32l;
    // 0x0027CA48: j           L_0027CA64
    // 0x0027CA4C: andi        $v0, $v1, 0xF8
    ctx->r2 = ctx->r3 & 0XF8;
        goto L_0027CA64;
    // 0x0027CA4C: andi        $v0, $v1, 0xF8
    ctx->r2 = ctx->r3 & 0XF8;
L_0027CA50:
    // 0x0027CA50: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x0027CA54: trunc.w.s   $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x0027CA58: mfc1        $v1, $f4
    ctx->r3 = (int32_t)ctx->f4.u32l;
    // 0x0027CA5C: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x0027CA60: andi        $v0, $v1, 0xF8
    ctx->r2 = ctx->r3 & 0XF8;
L_0027CA64:
    // 0x0027CA64: sb          $v0, 0x50A($s4)
    MEM_B(0X50A, ctx->r20) = ctx->r2;
    // 0x0027CA68: sb          $v0, 0x50E($s4)
    MEM_B(0X50E, ctx->r20) = ctx->r2;
    // 0x0027CA6C: lw          $ra, 0x38($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X38);
    // 0x0027CA70: lw          $s5, 0x34($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X34);
    // 0x0027CA74: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x0027CA78: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x0027CA7C: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x0027CA80: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x0027CA84: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x0027CA88: ldc1        $f27, 0x78($sp)
    CHECK_FR(ctx, 27);
    ctx->f27.u64 = LD(ctx->r29, 0X78);
    // 0x0027CA8C: ldc1        $f26, 0x70($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X70);
    // 0x0027CA90: ldc1        $f25, 0x68($sp)
    CHECK_FR(ctx, 25);
    ctx->f25.u64 = LD(ctx->r29, 0X68);
    // 0x0027CA94: ldc1        $f24, 0x60($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X60);
    // 0x0027CA98: ldc1        $f23, 0x58($sp)
    CHECK_FR(ctx, 23);
    ctx->f23.u64 = LD(ctx->r29, 0X58);
    // 0x0027CA9C: ldc1        $f22, 0x50($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X50);
    // 0x0027CAA0: ldc1        $f21, 0x48($sp)
    CHECK_FR(ctx, 21);
    ctx->f21.u64 = LD(ctx->r29, 0X48);
    // 0x0027CAA4: ldc1        $f20, 0x40($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X40);
    // 0x0027CAA8: jr          $ra
    // 0x0027CAAC: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
    return;
    // 0x0027CAAC: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
;}
RECOMP_FUNC void func_00281AB4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00281AB4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00281AB8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00281ABC: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x00281AC0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x00281AC4: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x00281AC8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00281ACC: lw          $s0, 0xF0C($s1)
    ctx->r16 = MEM_W(ctx->r17, 0XF0C);
    // 0x00281AD0: beq         $s0, $zero, L_00281AF8
    if (ctx->r16 == 0) {
        // 0x00281AD4: addu        $s2, $a1, $zero
        ctx->r18 = ADD32(ctx->r5, 0);
            goto L_00281AF8;
    }
    // 0x00281AD4: addu        $s2, $a1, $zero
    ctx->r18 = ADD32(ctx->r5, 0);
    // 0x00281AD8: jal         0x00281B58
    // 0x00281ADC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00281B58(rdram, ctx);
        goto after_0;
    // 0x00281ADC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x00281AE0: addiu       $a0, $s1, 0xF0C
    ctx->r4 = ADD32(ctx->r17, 0XF0C);
    // 0x00281AE4: jal         0x00200738
    // 0x00281AE8: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_00200738(rdram, ctx);
        goto after_1;
    // 0x00281AE8: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_1:
    // 0x00281AEC: addiu       $a0, $s2, 0xE28
    ctx->r4 = ADD32(ctx->r18, 0XE28);
    // 0x00281AF0: jal         0x00200574
    // 0x00281AF4: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_00200574(rdram, ctx);
        goto after_2;
    // 0x00281AF4: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_2:
L_00281AF8:
    // 0x00281AF8: addu        $v0, $s0, $zero
    ctx->r2 = ADD32(ctx->r16, 0);
    // 0x00281AFC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x00281B00: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x00281B04: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00281B08: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00281B0C: jr          $ra
    // 0x00281B10: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00281B10: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_004595D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_00420614:
    // 0x004595D8: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
L_0042075C:
    // 0x004595DC: lw          $v0, 0x990($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X990);
L_00420768:
    // 0x004595E0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x004595E4: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x004595E8: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x004595EC: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x004595F0: beq         $v0, $zero, L_00459608
    if (ctx->r2 == 0) {
        // 0x004595F4: sw          $s0, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->r16;
            goto L_00459608;
    }
    // 0x004595F4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x004595F8: lui         $s0, 0x800C
    ctx->r16 = S32(0X800C << 16);
    // 0x004595FC: lw          $s0, 0x2028($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X2028);
    // 0x00459600: j           L_00420614
    // 0x00459604: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    entry_00420614(rdram, ctx);
    return;
    // 0x00459604: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
L_00459608:
    // 0x00459608: lw          $v0, 0x20($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X20);
    // 0x0045960C: lb          $s0, 0x4($v0)
    ctx->r16 = MEM_B(ctx->r2, 0X4);
    // 0x00459610: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x00459614: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x00459618: jal         0x0041DCB0
    // 0x0045961C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_0041DCB0(rdram, ctx);
        goto after_0;
    // 0x0045961C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x00459620: beq         $v0, $zero, L_00459638
    if (ctx->r2 == 0) {
        // 0x00459624: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_00459638;
    }
    // 0x00459624: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00459628: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0045962C: sw          $v0, 0x9BC($at)
    MEM_W(0X9BC, ctx->r1) = ctx->r2;
    // 0x00459630: j           L_00420768
    // 0x00459634: nop

    entry_00420768(rdram, ctx);
    return;
    // 0x00459634: nop

L_00459638:
    // 0x00459638: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x0045963C: lw          $v0, 0x960($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X960);
    // 0x00459640: beq         $v0, $zero, L_004596FC
    if (ctx->r2 == 0) {
        // 0x00459644: nop
    
            goto L_004596FC;
    }
    // 0x00459644: nop

    // 0x00459648: lw          $a1, 0x20($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X20);
    // 0x0045964C: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x00459650: addiu       $a0, $a0, -0x6790
    ctx->r4 = ADD32(ctx->r4, -0X6790);
    // 0x00459654: jal         0x0025342C
    // 0x00459658: nop

    func_0025342C(rdram, ctx);
        goto after_1;
    // 0x00459658: nop

    after_1:
    // 0x0045965C: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x00459660: sw          $v0, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->r2;
    // 0x00459664: lw          $a1, 0x518($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X518);
    // 0x00459668: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x0045966C: lbu         $v0, 0x970($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X970);
    // 0x00459670: sb          $v0, 0x30($a1)
    MEM_B(0X30, ctx->r5) = ctx->r2;
    // 0x00459674: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x00459678: lhu         $v0, 0x968($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X968);
    // 0x0045967C: sh          $v0, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r2;
    // 0x00459680: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x00459684: lhu         $v0, 0x96A($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X96A);
    // 0x00459688: sh          $v0, 0x2($a1)
    MEM_H(0X2, ctx->r5) = ctx->r2;
    // 0x0045968C: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x00459690: lhu         $v0, 0x96C($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X96C);
    // 0x00459694: sh          $v0, 0x4($a1)
    MEM_H(0X4, ctx->r5) = ctx->r2;
    // 0x00459698: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x0045969C: lhu         $v0, 0x96E($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X96E);
    // 0x004596A0: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x004596A4: sh          $v0, 0x6($a1)
    MEM_H(0X6, ctx->r5) = ctx->r2;
    // 0x004596A8: addu        $v1, $a1, $a0
    ctx->r3 = ADD32(ctx->r5, ctx->r4);
L_004596AC:
    // 0x004596AC: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x004596B0: addu        $at, $at, $a0
    ctx->r1 = ADD32(ctx->r1, ctx->r4);
    // 0x004596B4: lbu         $v0, 0x974($at)
    ctx->r2 = MEM_BU(ctx->r1, 0X974);
    // 0x004596B8: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x004596BC: sb          $v0, 0x33($v1)
    MEM_B(0X33, ctx->r3) = ctx->r2;
    // 0x004596C0: slti        $v0, $a0, 0x8
    ctx->r2 = SIGNED(ctx->r4) < 0X8 ? 1 : 0;
    // 0x004596C4: bne         $v0, $zero, L_004596AC
    if (ctx->r2 != 0) {
        // 0x004596C8: addu        $v1, $a1, $a0
        ctx->r3 = ADD32(ctx->r5, ctx->r4);
            goto L_004596AC;
    }
    // 0x004596C8: addu        $v1, $a1, $a0
    ctx->r3 = ADD32(ctx->r5, ctx->r4);
    // 0x004596CC: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x004596D0: lb          $a1, 0x950($a1)
    ctx->r5 = MEM_B(ctx->r5, 0X950);
    // 0x004596D4: jal         0x0042E350
    // 0x004596D8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_0042E350(rdram, ctx);
        goto after_2;
    // 0x004596D8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x004596DC: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x004596E0: lw          $a0, 0x51C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X51C);
    // 0x004596E4: lui         $a2, 0x44
    ctx->r6 = S32(0X44 << 16);
    // 0x004596E8: addiu       $a2, $a2, -0x7998
    ctx->r6 = ADD32(ctx->r6, -0X7998);
    // 0x004596EC: jal         0x00416894
    // 0x004596F0: addiu       $a0, $a0, 0x53C
    ctx->r4 = ADD32(ctx->r4, 0X53C);
    func_00416894(rdram, ctx);
        goto after_3;
    // 0x004596F0: addiu       $a0, $a0, 0x53C
    ctx->r4 = ADD32(ctx->r4, 0X53C);
    after_3:
    // 0x004596F4: j           L_00420768
    // 0x004596F8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    entry_00420768(rdram, ctx);
    return;
    // 0x004596F8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_004596FC:
    // 0x004596FC: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x00459700: lw          $a1, 0x9C4($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X9C4);
    // 0x00459704: jal         0x00425F84
    // 0x00459708: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00425F84(rdram, ctx);
        goto after_4;
    // 0x00459708: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
    // 0x0045970C: bne         $v0, $zero, L_0045973C
    if (ctx->r2 != 0) {
        // 0x00459710: nop
    
            goto L_0045973C;
    }
    // 0x00459710: nop

    // 0x00459714: lw          $v0, 0x24($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X24);
    // 0x00459718: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x0045971C: addiu       $a0, $a0, -0x61D4
    ctx->r4 = ADD32(ctx->r4, -0X61D4);
    // 0x00459720: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x00459724: lw          $a2, 0x1C($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X1C);
    // 0x00459728: lw          $a3, 0x20($s1)
    ctx->r7 = MEM_W(ctx->r17, 0X20);
    // 0x0045972C: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x00459730: addiu       $a1, $a1, -0x4330
    ctx->r5 = ADD32(ctx->r5, -0X4330);
    // 0x00459734: j           L_0042075C
    // 0x00459738: nop

    entry_0042075C(rdram, ctx);
    return;
    // 0x00459738: nop

L_0045973C:
    // 0x0045973C: lw          $v0, 0x24($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X24);
    // 0x00459740: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x00459744: addiu       $a0, $a0, -0x61D4
    ctx->r4 = ADD32(ctx->r4, -0X61D4);
    // 0x00459748: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x0045974C: lw          $a2, 0x1C($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X1C);
    // 0x00459750: lw          $a3, 0x20($s1)
    ctx->r7 = MEM_W(ctx->r17, 0X20);
    // 0x00459754: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x00459758: addiu       $a1, $a1, -0x42C4
    ctx->r5 = ADD32(ctx->r5, -0X42C4);
    // 0x0045975C: jal         0x00416644
    // 0x00459760: nop

    func_00416644(rdram, ctx);
        goto after_5;
    // 0x00459760: nop

    after_5:
    // 0x00459764: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00459768: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x0045976C: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x00459770: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x00459774: jr          $ra
    // 0x00459778: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x00459778: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_0024E5F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0024E5F0: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x0024E5F4: lbu         $v0, -0x550F($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X550F);
    // 0x0024E5F8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x0024E5FC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0024E600: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x0024E604: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x0024E608: addu        $s2, $a1, $zero
    ctx->r18 = ADD32(ctx->r5, 0);
    // 0x0024E60C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x0024E610: addu        $s1, $a2, $zero
    ctx->r17 = ADD32(ctx->r6, 0);
    // 0x0024E614: beq         $v0, $zero, L_0024E644
    if (ctx->r2 == 0) {
        // 0x0024E618: sw          $ra, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r31;
            goto L_0024E644;
    }
    // 0x0024E618: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x0024E61C: jal         0x002548FC
    // 0x0024E620: nop

    func_002548FC(rdram, ctx);
        goto after_0;
    // 0x0024E620: nop

    after_0:
    // 0x0024E624: beq         $v0, $zero, L_0024E644
    if (ctx->r2 == 0) {
        // 0x0024E628: addiu       $v0, $zero, 0x12
        ctx->r2 = ADD32(0, 0X12);
            goto L_0024E644;
    }
    // 0x0024E628: addiu       $v0, $zero, 0x12
    ctx->r2 = ADD32(0, 0X12);
    // 0x0024E62C: beq         $s1, $v0, L_0024E644
    if (ctx->r17 == ctx->r2) {
        // 0x0024E630: addiu       $v0, $zero, 0x10
        ctx->r2 = ADD32(0, 0X10);
            goto L_0024E644;
    }
    // 0x0024E630: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x0024E634: beq         $s1, $v0, L_0024E644
    if (ctx->r17 == ctx->r2) {
        // 0x0024E638: addiu       $v0, $zero, 0x11
        ctx->r2 = ADD32(0, 0X11);
            goto L_0024E644;
    }
    // 0x0024E638: addiu       $v0, $zero, 0x11
    ctx->r2 = ADD32(0, 0X11);
    // 0x0024E63C: bne         $s1, $v0, L_0024E6E8
    if (ctx->r17 != ctx->r2) {
        // 0x0024E640: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_0024E6E8;
    }
    // 0x0024E640: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_0024E644:
    // 0x0024E644: lui         $a1, 0xFF7F
    ctx->r5 = S32(0XFF7F << 16);
    // 0x0024E648: lhu         $v1, 0xA08($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0XA08);
    // 0x0024E64C: lw          $a0, 0xA1C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XA1C);
    // 0x0024E650: lw          $v0, 0xD4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XD4);
    // 0x0024E654: ori         $a1, $a1, 0xFFFF
    ctx->r5 = ctx->r5 | 0XFFFF;
    // 0x0024E658: sh          $s1, 0xA08($s0)
    MEM_H(0XA08, ctx->r16) = ctx->r17;
    // 0x0024E65C: and         $v0, $v0, $a1
    ctx->r2 = ctx->r2 & ctx->r5;
    // 0x0024E660: sw          $v0, 0xD4($s0)
    MEM_W(0XD4, ctx->r16) = ctx->r2;
    // 0x0024E664: sll         $v0, $s1, 1
    ctx->r2 = S32(ctx->r17 << 1);
    // 0x0024E668: addu        $v0, $v0, $s1
    ctx->r2 = ADD32(ctx->r2, ctx->r17);
    // 0x0024E66C: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x0024E670: sh          $v1, 0xA0A($s0)
    MEM_H(0XA0A, ctx->r16) = ctx->r3;
    // 0x0024E674: sw          $a0, 0xA18($s0)
    MEM_W(0XA18, ctx->r16) = ctx->r4;
    // 0x0024E678: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0024E67C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x0024E680: lw          $v0, -0x20AC($at)
    ctx->r2 = MEM_W(ctx->r1, -0X20AC);
    // 0x0024E684: beq         $v0, $zero, L_0024E694
    if (ctx->r2 == 0) {
        // 0x0024E688: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_0024E694;
    }
    // 0x0024E688: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0024E68C: jalr        $v0
    // 0x0024E690: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_1;
    // 0x0024E690: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    after_1:
L_0024E694:
    // 0x0024E694: lh          $v1, 0xA08($s0)
    ctx->r3 = MEM_H(ctx->r16, 0XA08);
    // 0x0024E698: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x0024E69C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x0024E6A0: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x0024E6A4: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0024E6A8: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x0024E6AC: lw          $v0, -0x20A0($at)
    ctx->r2 = MEM_W(ctx->r1, -0X20A0);
    // 0x0024E6B0: sw          $v0, 0xA1C($s0)
    MEM_W(0XA1C, ctx->r16) = ctx->r2;
    // 0x0024E6B4: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x0024E6B8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x0024E6BC: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x0024E6C0: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0024E6C4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x0024E6C8: lw          $v0, -0x209C($at)
    ctx->r2 = MEM_W(ctx->r1, -0X209C);
    // 0x0024E6CC: bnel        $v0, $zero, L_0024E6D4
    if (ctx->r2 != 0) {
        // 0x0024E6D0: sw          $v0, 0xC04($s0)
        MEM_W(0XC04, ctx->r16) = ctx->r2;
            goto L_0024E6D4;
    }
    goto skip_0;
    // 0x0024E6D0: sw          $v0, 0xC04($s0)
    MEM_W(0XC04, ctx->r16) = ctx->r2;
    skip_0:
L_0024E6D4:
    // 0x0024E6D4: lh          $v0, 0xA08($s0)
    ctx->r2 = MEM_H(ctx->r16, 0XA08);
    // 0x0024E6D8: bne         $v0, $s1, L_0024E6E8
    if (ctx->r2 != ctx->r17) {
        // 0x0024E6DC: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_0024E6E8;
    }
    // 0x0024E6DC: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x0024E6E0: sw          $zero, 0xA10($s0)
    MEM_W(0XA10, ctx->r16) = 0;
    // 0x0024E6E4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_0024E6E8:
    // 0x0024E6E8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x0024E6EC: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x0024E6F0: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x0024E6F4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0024E6F8: jr          $ra
    // 0x0024E6FC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x0024E6FC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_002A3060(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002A3060: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x002A3064: addiu       $v1, $v1, -0x76A0
    ctx->r3 = ADD32(ctx->r3, -0X76A0);
    // 0x002A3068: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x002A306C: beq         $v0, $zero, L_002A3080
    if (ctx->r2 == 0) {
            // 0x002A3070: nop

    func_002A3080(rdram, ctx);
    return;
    }
    // 0x002A3070: nop

    // 0x002A3074: lw          $v0, 0x8($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X8);
    // 0x002A3078: jr          $ra
    // 0x002A307C: nop

    return;
    // 0x002A307C: nop

;}
RECOMP_FUNC void func_0045D6A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_00424740:
    // 0x0045D6A0: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
L_0042483C:
    // 0x0045D6A4: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x0045D6A8: addu        $s4, $a0, $zero
    ctx->r20 = ADD32(ctx->r4, 0);
    // 0x0045D6AC: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x0045D6B0: addu        $s3, $a1, $zero
    ctx->r19 = ADD32(ctx->r5, 0);
    // 0x0045D6B4: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x0045D6B8: addu        $s2, $a3, $zero
    ctx->r18 = ADD32(ctx->r7, 0);
    // 0x0045D6BC: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x0045D6C0: addiu       $v1, $zero, 0x10FE
    ctx->r3 = ADD32(0, 0X10FE);
    // 0x0045D6C4: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x0045D6C8: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x0045D6CC: lw          $v0, 0x18($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X18);
    // 0x0045D6D0: lw          $a0, 0x1C($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X1C);
    // 0x0045D6D4: lh          $a1, 0x20($v0)
    ctx->r5 = MEM_H(ctx->r2, 0X20);
    // 0x0045D6D8: lh          $s0, 0x22($v0)
    ctx->r16 = MEM_H(ctx->r2, 0X22);
    // 0x0045D6DC: beq         $a1, $v1, L_0045D700
    if (ctx->r5 == ctx->r3) {
        // 0x0045D6E0: addu        $s1, $zero, $zero
        ctx->r17 = ADD32(0, 0);
            goto L_0045D700;
    }
    // 0x0045D6E0: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x0045D6E4: addiu       $v0, $zero, 0x1194
    ctx->r2 = ADD32(0, 0X1194);
    // 0x0045D6E8: beq         $a1, $v0, L_0045D738
    if (ctx->r5 == ctx->r2) {
        // 0x0045D6EC: addu        $v0, $a0, $s0
        ctx->r2 = ADD32(ctx->r4, ctx->r16);
            goto L_0045D738;
    }
    // 0x0045D6EC: addu        $v0, $a0, $s0
    ctx->r2 = ADD32(ctx->r4, ctx->r16);
    // 0x0045D6F0: jal         0x00253748
    // 0x0045D6F4: nop

    func_00253748(rdram, ctx);
        goto after_0;
    // 0x0045D6F4: nop

    after_0:
    // 0x0045D6F8: j           L_00424740
    // 0x0045D6FC: slt         $s1, $s0, $v0
    ctx->r17 = SIGNED(ctx->r16) < SIGNED(ctx->r2) ? 1 : 0;
    entry_00424740(rdram, ctx);
    return;
    // 0x0045D6FC: slt         $s1, $s0, $v0
    ctx->r17 = SIGNED(ctx->r16) < SIGNED(ctx->r2) ? 1 : 0;
L_0045D700:
    // 0x0045D700: bltz        $s0, L_0045D740
    if (SIGNED(ctx->r16) < 0) {
        // 0x0045D704: slti        $v0, $s0, 0x3
        ctx->r2 = SIGNED(ctx->r16) < 0X3 ? 1 : 0;
            goto L_0045D740;
    }
    // 0x0045D704: slti        $v0, $s0, 0x3
    ctx->r2 = SIGNED(ctx->r16) < 0X3 ? 1 : 0;
    // 0x0045D708: bne         $v0, $zero, L_0045D720
    if (ctx->r2 != 0) {
        // 0x0045D70C: slti        $v0, $s0, 0x6
        ctx->r2 = SIGNED(ctx->r16) < 0X6 ? 1 : 0;
            goto L_0045D720;
    }
    // 0x0045D70C: slti        $v0, $s0, 0x6
    ctx->r2 = SIGNED(ctx->r16) < 0X6 ? 1 : 0;
    // 0x0045D710: bnel        $v0, $zero, L_0045D72C
    if (ctx->r2 != 0) {
        // 0x0045D714: addiu       $s1, $s0, -0x3
        ctx->r17 = ADD32(ctx->r16, -0X3);
            goto L_0045D72C;
    }
    goto skip_0;
    // 0x0045D714: addiu       $s1, $s0, -0x3
    ctx->r17 = ADD32(ctx->r16, -0X3);
    skip_0:
    // 0x0045D718: j           L_00424740
    // 0x0045D71C: nop

    entry_00424740(rdram, ctx);
    return;
    // 0x0045D71C: nop

L_0045D720:
    // 0x0045D720: lbu         $v0, 0xA05($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XA05);
    // 0x0045D724: j           L_00424740
    // 0x0045D728: slt         $s1, $s0, $v0
    ctx->r17 = SIGNED(ctx->r16) < SIGNED(ctx->r2) ? 1 : 0;
    entry_00424740(rdram, ctx);
    return;
    // 0x0045D728: slt         $s1, $s0, $v0
    ctx->r17 = SIGNED(ctx->r16) < SIGNED(ctx->r2) ? 1 : 0;
L_0045D72C:
    // 0x0045D72C: lbu         $v0, 0xA06($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XA06);
    // 0x0045D730: j           L_00424740
    // 0x0045D734: slt         $s1, $s1, $v0
    ctx->r17 = SIGNED(ctx->r17) < SIGNED(ctx->r2) ? 1 : 0;
    entry_00424740(rdram, ctx);
    return;
    // 0x0045D734: slt         $s1, $s1, $v0
    ctx->r17 = SIGNED(ctx->r17) < SIGNED(ctx->r2) ? 1 : 0;
L_0045D738:
    // 0x0045D738: lbu         $v0, 0x9FC($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X9FC);
    // 0x0045D73C: sltu        $s1, $zero, $v0
    ctx->r17 = 0 < ctx->r2 ? 1 : 0;
L_0045D740:
    // 0x0045D740: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x0045D744: lw          $v0, 0x1BD0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1BD0);
    // 0x0045D748: addiu       $v1, $zero, 0x14
    ctx->r3 = ADD32(0, 0X14);
    // 0x0045D74C: beq         $v0, $v1, L_0045D788
    if (ctx->r2 == ctx->r3) {
        // 0x0045D750: lui         $a0, 0xE300
        ctx->r4 = S32(0XE300 << 16);
            goto L_0045D788;
    }
    // 0x0045D750: lui         $a0, 0xE300
    ctx->r4 = S32(0XE300 << 16);
    // 0x0045D754: lwc1        $f1, 0x34($s2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r18, 0X34);
    // 0x0045D758: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0045D75C: lwc1        $f0, 0x1720($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X1720);
    // 0x0045D760: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x0045D764: lwc1        $f0, 0x30($s2)
    ctx->f0.u32l = MEM_W(ctx->r18, 0X30);
    // 0x0045D768: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0045D76C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0045D770: sw          $v1, 0x1BD0($at)
    MEM_W(0X1BD0, ctx->r1) = ctx->r3;
    // 0x0045D774: trunc.w.s   $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x0045D778: mfc1        $a0, $f2
    ctx->r4 = (int32_t)ctx->f2.u32l;
    // 0x0045D77C: jal         0x00279028
    // 0x0045D780: nop

    func_00279028(rdram, ctx);
        goto after_1;
    // 0x0045D780: nop

    after_1:
    // 0x0045D784: lui         $a0, 0xE300
    ctx->r4 = S32(0XE300 << 16);
L_0045D788:
    // 0x0045D788: lui         $a3, 0x800E
    ctx->r7 = S32(0X800E << 16);
    // 0x0045D78C: addiu       $a3, $a3, -0x71DC
    ctx->r7 = ADD32(ctx->r7, -0X71DC);
    // 0x0045D790: ori         $a0, $a0, 0xA01
    ctx->r4 = ctx->r4 | 0XA01;
    // 0x0045D794: lw          $a1, 0x0($a3)
    ctx->r5 = MEM_W(ctx->r7, 0X0);
    // 0x0045D798: lui         $v0, 0xE700
    ctx->r2 = S32(0XE700 << 16);
    // 0x0045D79C: addu        $v1, $a1, $zero
    ctx->r3 = ADD32(ctx->r5, 0);
    // 0x0045D7A0: addiu       $a1, $a1, 0x8
    ctx->r5 = ADD32(ctx->r5, 0X8);
    // 0x0045D7A4: addiu       $a2, $a1, 0x8
    ctx->r6 = ADD32(ctx->r5, 0X8);
    // 0x0045D7A8: sw          $a1, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r5;
    // 0x0045D7AC: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x0045D7B0: lui         $v0, 0x10
    ctx->r2 = S32(0X10 << 16);
    // 0x0045D7B4: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x0045D7B8: sw          $a2, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r6;
    // 0x0045D7BC: sw          $a0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r4;
    // 0x0045D7C0: beq         $s1, $zero, L_0045D800
    if (ctx->r17 == 0) {
        // 0x0045D7C4: sw          $v0, 0x4($a1)
        MEM_W(0X4, ctx->r5) = ctx->r2;
            goto L_0045D800;
    }
    // 0x0045D7C4: sw          $v0, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r2;
    // 0x0045D7C8: lui         $v0, 0xFB00
    ctx->r2 = S32(0XFB00 << 16);
    // 0x0045D7CC: sw          $v0, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->r2;
    // 0x0045D7D0: lwc1        $f0, 0x34($s2)
    ctx->f0.u32l = MEM_W(ctx->r18, 0X34);
    // 0x0045D7D4: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0045D7D8: lwc1        $f1, 0x1724($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X1724);
    // 0x0045D7DC: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0045D7E0: lwc1        $f1, 0x30($s2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r18, 0X30);
    // 0x0045D7E4: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x0045D7E8: addiu       $v0, $a1, 0x10
    ctx->r2 = ADD32(ctx->r5, 0X10);
    // 0x0045D7EC: sw          $v0, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r2;
    // 0x0045D7F0: trunc.w.s   $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    ctx->f2.u32l = TRUNC_W_S(ctx->f1.fl);
    // 0x0045D7F4: mfc1        $v0, $f2
    ctx->r2 = (int32_t)ctx->f2.u32l;
    // 0x0045D7F8: j           L_0042483C
    // 0x0045D7FC: addiu       $v1, $zero, -0x100
    ctx->r3 = ADD32(0, -0X100);
    entry_0042483C(rdram, ctx);
    return;
    // 0x0045D7FC: addiu       $v1, $zero, -0x100
    ctx->r3 = ADD32(0, -0X100);
L_0045D800:
    // 0x0045D800: lui         $v0, 0xFB00
    ctx->r2 = S32(0XFB00 << 16);
    // 0x0045D804: sw          $v0, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->r2;
    // 0x0045D808: lwc1        $f0, 0x34($s2)
    ctx->f0.u32l = MEM_W(ctx->r18, 0X34);
    // 0x0045D80C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0045D810: lwc1        $f1, 0x1728($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X1728);
    // 0x0045D814: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0045D818: lwc1        $f1, 0x30($s2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r18, 0X30);
    // 0x0045D81C: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x0045D820: lui         $v1, 0x3232
    ctx->r3 = S32(0X3232 << 16);
    // 0x0045D824: ori         $v1, $v1, 0x3200
    ctx->r3 = ctx->r3 | 0X3200;
    // 0x0045D828: addiu       $v0, $a1, 0x10
    ctx->r2 = ADD32(ctx->r5, 0X10);
    // 0x0045D82C: sw          $v0, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r2;
    // 0x0045D830: trunc.w.s   $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    ctx->f2.u32l = TRUNC_W_S(ctx->f1.fl);
    // 0x0045D834: mfc1        $v0, $f2
    ctx->r2 = (int32_t)ctx->f2.u32l;
    // 0x0045D838: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x0045D83C: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x0045D840: sw          $v0, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r2;
    // 0x0045D844: lwc1        $f0, 0xC($s3)
    ctx->f0.u32l = MEM_W(ctx->r19, 0XC);
    // 0x0045D848: lh          $a2, 0x16($s3)
    ctx->r6 = MEM_H(ctx->r19, 0X16);
    // 0x0045D84C: lh          $a3, 0x1E($s3)
    ctx->r7 = MEM_H(ctx->r19, 0X1E);
    // 0x0045D850: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    // 0x0045D854: lwc1        $f0, 0x10($s3)
    ctx->f0.u32l = MEM_W(ctx->r19, 0X10);
    // 0x0045D858: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0045D85C: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x0045D860: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    // 0x0045D864: lw          $a0, 0x14($s4)
    ctx->r4 = MEM_W(ctx->r20, 0X14);
    // 0x0045D868: jal         0x0027B320
    // 0x0045D86C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_0027B320(rdram, ctx);
        goto after_2;
    // 0x0045D86C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_2:
    // 0x0045D870: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x0045D874: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x0045D878: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x0045D87C: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x0045D880: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x0045D884: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x0045D888: jr          $ra
    // 0x0045D88C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x0045D88C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_0045FFBC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0045FFBC: bne         $a0, $zero, L_0045FFCC
    if (ctx->r4 != 0) {
            // 0x0045FFC0: addu        $v1, $a0, $zero
    ctx->r3 = ADD32(ctx->r4, 0);
    func_0045FFCC(rdram, ctx);
    return;
    }
    // 0x0045FFC0: addu        $v1, $a0, $zero
    ctx->r3 = ADD32(ctx->r4, 0);
    // 0x0045FFC4: jr          $ra
    // 0x0045FFC8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x0045FFC8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void func_00417E28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00417E28: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00417E2C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00417E30: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x00417E34: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00417E38: addiu       $v0, $v0, 0x42F0
    ctx->r2 = ADD32(ctx->r2, 0X42F0);
    // 0x00417E3C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x00417E40: jal         0x004160F0
    // 0x00417E44: sw          $v0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r2;
    func_004160F0(rdram, ctx);
        goto after_0;
    // 0x00417E44: sw          $v0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r2;
    after_0:
    // 0x00417E48: addiu       $v0, $v0, -0x4
    ctx->r2 = ADD32(ctx->r2, -0X4);
    // 0x00417E4C: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x00417E50: addiu       $a1, $a1, 0xE70
    ctx->r5 = ADD32(ctx->r5, 0XE70);
    // 0x00417E54: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x00417E58: lui         $a2, 0x8012
    ctx->r6 = S32(0X8012 << 16);
    // 0x00417E5C: lw          $a2, -0x5320($a2)
    ctx->r6 = MEM_W(ctx->r6, -0X5320);
    // 0x00417E60: jal         0x0029E3E0
    // 0x00417E64: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    func_0029E3E0(rdram, ctx);
        goto after_1;
    // 0x00417E64: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    after_1:
    // 0x00417E68: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x00417E6C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00417E70: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x00417E74: jr          $ra
    // 0x00417E78: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00417E78: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0025F684(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0025F684: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0025F688: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x0025F68C: lb          $v0, 0xC7($a1)
    ctx->r2 = MEM_B(ctx->r5, 0XC7);
    // 0x0025F690: slti        $v0, $v0, 0x4
    ctx->r2 = SIGNED(ctx->r2) < 0X4 ? 1 : 0;
    // 0x0025F694: bne         $v0, $zero, L_0025F6A4
    if (ctx->r2 != 0) {
        // 0x0025F698: nop
    
            goto L_0025F6A4;
    }
    // 0x0025F698: nop

    // 0x0025F69C: jal         0x00243414
    // 0x0025F6A0: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    func_00243414(rdram, ctx);
        goto after_0;
    // 0x0025F6A0: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    after_0:
L_0025F6A4:
    // 0x0025F6A4: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x0025F6A8: jr          $ra
    // 0x0025F6AC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0025F6AC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00233268(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00233268: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x0023326C: sw          $fp, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r30;
    // 0x00233270: addu        $fp, $a1, $zero
    ctx->r30 = ADD32(ctx->r5, 0);
    // 0x00233274: sw          $s5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r21;
    // 0x00233278: addu        $s5, $a2, $zero
    ctx->r21 = ADD32(ctx->r6, 0);
    // 0x0023327C: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x00233280: addu        $s4, $zero, $zero
    ctx->r20 = ADD32(0, 0);
    // 0x00233284: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x00233288: sw          $s7, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r23;
    // 0x0023328C: sw          $s6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r22;
    // 0x00233290: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x00233294: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x00233298: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x0023329C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x002332A0: sdc1        $f20, 0x48($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X48, ctx->r29);
    // 0x002332A4: blez        $s5, L_0023338C
    if (SIGNED(ctx->r21) <= 0) {
        // 0x002332A8: sw          $a0, 0x50($sp)
        MEM_W(0X50, ctx->r29) = ctx->r4;
            goto L_0023338C;
    }
    // 0x002332A8: sw          $a0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r4;
    // 0x002332AC: addiu       $s7, $zero, 0x57
    ctx->r23 = ADD32(0, 0X57);
    // 0x002332B0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002332B4: lwc1        $f20, 0x6430($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X6430);
    // 0x002332B8: addu        $s6, $fp, $zero
    ctx->r22 = ADD32(ctx->r30, 0);
L_002332BC:
    // 0x002332BC: lw          $s3, 0x0($s6)
    ctx->r19 = MEM_W(ctx->r22, 0X0);
    // 0x002332C0: lhu         $v1, 0x2($s3)
    ctx->r3 = MEM_HU(ctx->r19, 0X2);
    // 0x002332C4: beq         $v1, $s7, L_00233308
    if (ctx->r3 == ctx->r23) {
        // 0x002332C8: slti        $v0, $v1, 0x58
        ctx->r2 = SIGNED(ctx->r3) < 0X58 ? 1 : 0;
            goto L_00233308;
    }
    // 0x002332C8: slti        $v0, $v1, 0x58
    ctx->r2 = SIGNED(ctx->r3) < 0X58 ? 1 : 0;
    // 0x002332CC: beql        $v0, $zero, L_0023337C
    if (ctx->r2 == 0) {
        // 0x002332D0: addiu       $s6, $s6, 0x4
        ctx->r22 = ADD32(ctx->r22, 0X4);
            goto L_0023337C;
    }
    goto skip_0;
    // 0x002332D0: addiu       $s6, $s6, 0x4
    ctx->r22 = ADD32(ctx->r22, 0X4);
    skip_0:
    // 0x002332D4: addiu       $t0, $zero, 0xC
    ctx->r8 = ADD32(0, 0XC);
    // 0x002332D8: beql        $v1, $t0, L_0023337C
    if (ctx->r3 == ctx->r8) {
        // 0x002332DC: addiu       $s6, $s6, 0x4
        ctx->r22 = ADD32(ctx->r22, 0X4);
            goto L_0023337C;
    }
    goto skip_1;
    // 0x002332DC: addiu       $s6, $s6, 0x4
    ctx->r22 = ADD32(ctx->r22, 0X4);
    skip_1:
    // 0x002332E0: addiu       $t0, $zero, 0x22
    ctx->r8 = ADD32(0, 0X22);
    // 0x002332E4: bnel        $v1, $t0, L_0023337C
    if (ctx->r3 != ctx->r8) {
        // 0x002332E8: addiu       $s6, $s6, 0x4
        ctx->r22 = ADD32(ctx->r22, 0X4);
            goto L_0023337C;
    }
    goto skip_2;
    // 0x002332E8: addiu       $s6, $s6, 0x4
    ctx->r22 = ADD32(ctx->r22, 0X4);
    skip_2:
    // 0x002332EC: lw          $a0, 0x50($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X50);
    // 0x002332F0: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    // 0x002332F4: addu        $a2, $fp, $zero
    ctx->r6 = ADD32(ctx->r30, 0);
    // 0x002332F8: jal         0x00230AB0
    // 0x002332FC: addu        $a3, $s5, $zero
    ctx->r7 = ADD32(ctx->r21, 0);
    func_00230AB0(rdram, ctx);
        goto after_0;
    // 0x002332FC: addu        $a3, $s5, $zero
    ctx->r7 = ADD32(ctx->r21, 0);
    after_0:
    // 0x00233300: j           L_0023337C
    // 0x00233304: addiu       $s6, $s6, 0x4
    ctx->r22 = ADD32(ctx->r22, 0X4);
        goto L_0023337C;
    // 0x00233304: addiu       $s6, $s6, 0x4
    ctx->r22 = ADD32(ctx->r22, 0X4);
L_00233308:
    // 0x00233308: blez        $s5, L_00233378
    if (SIGNED(ctx->r21) <= 0) {
        // 0x0023330C: addu        $s1, $zero, $zero
        ctx->r17 = ADD32(0, 0);
            goto L_00233378;
    }
    // 0x0023330C: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x00233310: addu        $s2, $fp, $zero
    ctx->r18 = ADD32(ctx->r30, 0);
L_00233314:
    // 0x00233314: lw          $s0, 0x0($s2)
    ctx->r16 = MEM_W(ctx->r18, 0X0);
    // 0x00233318: lhu         $v0, 0x2($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X2);
    // 0x0023331C: beql        $v0, $s7, L_0023336C
    if (ctx->r2 == ctx->r23) {
        // 0x00233320: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_0023336C;
    }
    goto skip_3;
    // 0x00233320: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_3:
    // 0x00233324: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x00233328: addiu       $a1, $s0, 0x4
    ctx->r5 = ADD32(ctx->r16, 0X4);
    // 0x0023332C: jal         0x0020EF2C
    // 0x00233330: addiu       $a2, $s3, 0x4
    ctx->r6 = ADD32(ctx->r19, 0X4);
    func_0020EF2C(rdram, ctx);
        goto after_1;
    // 0x00233330: addiu       $a2, $s3, 0x4
    ctx->r6 = ADD32(ctx->r19, 0X4);
    after_1:
    // 0x00233334: lwc1        $f0, 0x10($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X10);
    // 0x00233338: mul.s       $f0, $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x0023333C: lwc1        $f2, 0x14($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X14);
    // 0x00233340: mul.s       $f2, $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x00233344: lwc1        $f1, 0x18($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x00233348: mul.s       $f1, $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f1.fl);
    // 0x0023334C: add.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f2.fl;
    // 0x00233350: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x00233354: c.le.s      $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f0.fl <= ctx->f20.fl;
    // 0x00233358: nop

    // 0x0023335C: bc1f        L_0023336C
    if (!c1cs) {
        // 0x00233360: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_0023336C;
    }
    // 0x00233360: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x00233364: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x00233368: sh          $t0, 0x128($s0)
    MEM_H(0X128, ctx->r16) = ctx->r8;
L_0023336C:
    // 0x0023336C: slt         $v0, $s1, $s5
    ctx->r2 = SIGNED(ctx->r17) < SIGNED(ctx->r21) ? 1 : 0;
    // 0x00233370: bne         $v0, $zero, L_00233314
    if (ctx->r2 != 0) {
        // 0x00233374: addiu       $s2, $s2, 0x4
        ctx->r18 = ADD32(ctx->r18, 0X4);
            goto L_00233314;
    }
    // 0x00233374: addiu       $s2, $s2, 0x4
    ctx->r18 = ADD32(ctx->r18, 0X4);
L_00233378:
    // 0x00233378: addiu       $s6, $s6, 0x4
    ctx->r22 = ADD32(ctx->r22, 0X4);
L_0023337C:
    // 0x0023337C: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
    // 0x00233380: slt         $v0, $s4, $s5
    ctx->r2 = SIGNED(ctx->r20) < SIGNED(ctx->r21) ? 1 : 0;
    // 0x00233384: bne         $v0, $zero, L_002332BC
    if (ctx->r2 != 0) {
        // 0x00233388: nop
    
            goto L_002332BC;
    }
    // 0x00233388: nop

L_0023338C:
    // 0x0023338C: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x00233390: lw          $fp, 0x40($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X40);
    // 0x00233394: lw          $s7, 0x3C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X3C);
    // 0x00233398: lw          $s6, 0x38($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X38);
    // 0x0023339C: lw          $s5, 0x34($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X34);
    // 0x002333A0: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x002333A4: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x002333A8: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x002333AC: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x002333B0: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x002333B4: ldc1        $f20, 0x48($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X48);
    // 0x002333B8: jr          $ra
    // 0x002333BC: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x002333BC: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_0029E334(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0029E334: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x0029E338: addiu       $a0, $a0, 0x7078
    ctx->r4 = ADD32(ctx->r4, 0X7078);
    // 0x0029E33C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
;}
RECOMP_FUNC void func_00418108(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00418108: lw          $v0, 0x20($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X20);
    // 0x0041810C: lb          $v0, 0x4($v0)
    ctx->r2 = MEM_B(ctx->r2, 0X4);
    // 0x00418110: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x00418114: addiu       $v1, $v1, -0x5475
    ctx->r3 = ADD32(ctx->r3, -0X5475);
    // 0x00418118: sll         $v0, $v0, 6
    ctx->r2 = S32(ctx->r2 << 6);
    // 0x0041811C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x00418120: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    // 0x00418124: jr          $ra
    // 0x00418128: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x00418128: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void func_0044BE44(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0044BE44: jr          $ra
    // 0x0044BE48: addiu       $v0, $a0, 0x8
    ctx->r2 = ADD32(ctx->r4, 0X8);
    return;
    // 0x0044BE48: addiu       $v0, $a0, 0x8
    ctx->r2 = ADD32(ctx->r4, 0X8);
;}
RECOMP_FUNC void func_00283238(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00283238: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x0028323C: sw          $s1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r17;
    // 0x00283240: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x00283244: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x00283248: sw          $s4, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r20;
    // 0x0028324C: sw          $s3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r19;
    // 0x00283250: sw          $s2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r18;
    // 0x00283254: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    // 0x00283258: lw          $v0, 0x8C4($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X8C4);
    // 0x0028325C: beq         $v0, $zero, L_002834AC
    if (ctx->r2 == 0) {
        // 0x00283260: addu        $s4, $a1, $zero
        ctx->r20 = ADD32(ctx->r5, 0);
            goto L_002834AC;
    }
    // 0x00283260: addu        $s4, $a1, $zero
    ctx->r20 = ADD32(ctx->r5, 0);
    // 0x00283264: lui         $a3, 0xDA38
    ctx->r7 = S32(0XDA38 << 16);
    // 0x00283268: ori         $a3, $a3, 0x3
    ctx->r7 = ctx->r7 | 0X3;
    // 0x0028326C: lui         $t0, 0xDB04
    ctx->r8 = S32(0XDB04 << 16);
    // 0x00283270: ori         $t0, $t0, 0x4
    ctx->r8 = ctx->r8 | 0X4;
    // 0x00283274: lui         $t1, 0xDB04
    ctx->r9 = S32(0XDB04 << 16);
    // 0x00283278: ori         $t1, $t1, 0xC
    ctx->r9 = ctx->r9 | 0XC;
    // 0x0028327C: lui         $t2, 0xDB04
    ctx->r10 = S32(0XDB04 << 16);
    // 0x00283280: ori         $t2, $t2, 0x14
    ctx->r10 = ctx->r10 | 0X14;
    // 0x00283284: lui         $t3, 0xDB04
    ctx->r11 = S32(0XDB04 << 16);
    // 0x00283288: ori         $t3, $t3, 0x1C
    ctx->r11 = ctx->r11 | 0X1C;
    // 0x0028328C: lui         $t4, 0xD9FE
    ctx->r12 = S32(0XD9FE << 16);
    // 0x00283290: ori         $t4, $t4, 0xFFFF
    ctx->r12 = ctx->r12 | 0XFFFF;
    // 0x00283294: lui         $t5, 0xE300
    ctx->r13 = S32(0XE300 << 16);
    // 0x00283298: ori         $t5, $t5, 0xA01
    ctx->r13 = ctx->r13 | 0XA01;
    // 0x0028329C: addiu       $a0, $zero, 0xD
    ctx->r4 = ADD32(0, 0XD);
    // 0x002832A0: lui         $s0, 0x800E
    ctx->r16 = S32(0X800E << 16);
    // 0x002832A4: addiu       $s0, $s0, -0x71DC
    ctx->r16 = ADD32(ctx->r16, -0X71DC);
    // 0x002832A8: addu        $s3, $zero, $zero
    ctx->r19 = ADD32(0, 0);
    // 0x002832AC: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x002832B0: lui         $v1, 0xE700
    ctx->r3 = S32(0XE700 << 16);
    // 0x002832B4: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x002832B8: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x002832BC: addiu       $a2, $v0, 0x8
    ctx->r6 = ADD32(ctx->r2, 0X8);
    // 0x002832C0: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x002832C4: sw          $v1, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r3;
    // 0x002832C8: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x002832CC: addiu       $v1, $v1, -0x4F38
    ctx->r3 = ADD32(ctx->r3, -0X4F38);
    // 0x002832D0: sw          $zero, 0x4($a1)
    MEM_W(0X4, ctx->r5) = 0;
    // 0x002832D4: addiu       $a1, $v0, 0x10
    ctx->r5 = ADD32(ctx->r2, 0X10);
    // 0x002832D8: sw          $a2, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r6;
    // 0x002832DC: sw          $v1, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r3;
    // 0x002832E0: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
    // 0x002832E4: sw          $a3, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r7;
    // 0x002832E8: sw          $a1, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r5;
    // 0x002832EC: sw          $t0, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r8;
    // 0x002832F0: sw          $v1, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r3;
    // 0x002832F4: addiu       $a2, $v0, 0x18
    ctx->r6 = ADD32(ctx->r2, 0X18);
    // 0x002832F8: addiu       $a3, $v0, 0x20
    ctx->r7 = ADD32(ctx->r2, 0X20);
    // 0x002832FC: sw          $a2, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r6;
    // 0x00283300: sw          $t1, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r9;
    // 0x00283304: sw          $v1, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r3;
    // 0x00283308: ori         $v1, $zero, 0xFFFE
    ctx->r3 = 0 | 0XFFFE;
    // 0x0028330C: addiu       $a1, $v0, 0x28
    ctx->r5 = ADD32(ctx->r2, 0X28);
    // 0x00283310: sw          $a3, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r7;
    // 0x00283314: sw          $t2, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->r10;
    // 0x00283318: sw          $v1, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r3;
    // 0x0028331C: addiu       $a2, $v0, 0x30
    ctx->r6 = ADD32(ctx->r2, 0X30);
    // 0x00283320: sw          $a1, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r5;
    // 0x00283324: sw          $t3, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->r11;
    // 0x00283328: sw          $v1, 0x4($a3)
    MEM_W(0X4, ctx->r7) = ctx->r3;
    // 0x0028332C: addiu       $v1, $v0, 0x38
    ctx->r3 = ADD32(ctx->r2, 0X38);
    // 0x00283330: sw          $a2, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r6;
    // 0x00283334: sw          $t4, 0x28($v0)
    MEM_W(0X28, ctx->r2) = ctx->r12;
    // 0x00283338: sw          $zero, 0x4($a1)
    MEM_W(0X4, ctx->r5) = 0;
    // 0x0028333C: sw          $v1, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r3;
    // 0x00283340: sw          $t5, 0x30($v0)
    MEM_W(0X30, ctx->r2) = ctx->r13;
    // 0x00283344: jal         0x00207FEC
    // 0x00283348: sw          $zero, 0x4($a2)
    MEM_W(0X4, ctx->r6) = 0;
    func_00207FEC(rdram, ctx);
        goto after_0;
    // 0x00283348: sw          $zero, 0x4($a2)
    MEM_W(0X4, ctx->r6) = 0;
    after_0:
    // 0x0028334C: lui         $a2, 0xD9F9
    ctx->r6 = S32(0XD9F9 << 16);
    // 0x00283350: ori         $a2, $a2, 0xFBFF
    ctx->r6 = ctx->r6 | 0XFBFF;
    // 0x00283354: lui         $a3, 0xD9FF
    ctx->r7 = S32(0XD9FF << 16);
    // 0x00283358: ori         $a3, $a3, 0xFFFF
    ctx->r7 = ctx->r7 | 0XFFFF;
    // 0x0028335C: lui         $a1, 0x20
    ctx->r5 = S32(0X20 << 16);
    // 0x00283360: ori         $a1, $a1, 0x4
    ctx->r5 = ctx->r5 | 0X4;
    // 0x00283364: lui         $a0, 0xE300
    ctx->r4 = S32(0XE300 << 16);
    // 0x00283368: ori         $a0, $a0, 0xC00
    ctx->r4 = ctx->r4 | 0XC00;
    // 0x0028336C: lui         $t0, 0xE300
    ctx->r8 = S32(0XE300 << 16);
    // 0x00283370: lw          $v1, 0x0($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X0);
    // 0x00283374: ori         $t0, $t0, 0x1201
    ctx->r8 = ctx->r8 | 0X1201;
    // 0x00283378: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
    // 0x0028337C: addiu       $v1, $v1, 0x8
    ctx->r3 = ADD32(ctx->r3, 0X8);
    // 0x00283380: sw          $a2, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r6;
    // 0x00283384: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x00283388: sw          $a1, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r5;
    // 0x0028338C: addiu       $a1, $v1, 0x8
    ctx->r5 = ADD32(ctx->r3, 0X8);
    // 0x00283390: lui         $v0, 0x8
    ctx->r2 = S32(0X8 << 16);
    // 0x00283394: sw          $a0, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r4;
    // 0x00283398: addiu       $a0, $v1, 0x10
    ctx->r4 = ADD32(ctx->r3, 0X10);
    // 0x0028339C: sw          $a3, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r7;
    // 0x002833A0: sw          $v0, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r2;
    // 0x002833A4: addiu       $v0, $zero, 0x2000
    ctx->r2 = ADD32(0, 0X2000);
    // 0x002833A8: sw          $t0, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->r8;
    // 0x002833AC: sw          $v0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r2;
    // 0x002833B0: lw          $v0, 0x8B4($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X8B4);
    // 0x002833B4: addu        $s2, $s3, $zero
    ctx->r18 = ADD32(ctx->r19, 0);
    // 0x002833B8: sw          $v1, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r3;
    // 0x002833BC: addiu       $v1, $v1, 0x18
    ctx->r3 = ADD32(ctx->r3, 0X18);
    // 0x002833C0: sw          $a1, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r5;
    // 0x002833C4: sw          $a0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r4;
    // 0x002833C8: beq         $v0, $zero, L_00283414
    if (ctx->r2 == 0) {
        // 0x002833CC: sw          $v1, 0x0($s0)
        MEM_W(0X0, ctx->r16) = ctx->r3;
            goto L_00283414;
    }
    // 0x002833CC: sw          $v1, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r3;
    // 0x002833D0: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    // 0x002833D4: addiu       $v1, $sp, 0x18
    ctx->r3 = ADD32(ctx->r29, 0X18);
L_002833D8:
    // 0x002833D8: lwc1        $f1, 0x210($v0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r2, 0X210);
    // 0x002833DC: lwc1        $f0, 0x118($s4)
    ctx->f0.u32l = MEM_W(ctx->r20, 0X118);
    // 0x002833E0: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x002833E4: nop

    // 0x002833E8: bc1fl       L_00283400
    if (!c1cs) {
        // 0x002833EC: sw          $v0, 0x0($a0)
        MEM_W(0X0, ctx->r4) = ctx->r2;
            goto L_00283400;
    }
    goto skip_0;
    // 0x002833EC: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
    skip_0:
    // 0x002833F0: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x002833F4: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x002833F8: j           L_00283408
    // 0x002833FC: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
        goto L_00283408;
    // 0x002833FC: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
L_00283400:
    // 0x00283400: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x00283404: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
L_00283408:
    // 0x00283408: lw          $v0, 0x4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4);
    // 0x0028340C: bne         $v0, $zero, L_002833D8
    if (ctx->r2 != 0) {
        // 0x00283410: nop
    
            goto L_002833D8;
    }
    // 0x00283410: nop

L_00283414:
    // 0x00283414: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    // 0x00283418: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    // 0x0028341C: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x00283420: lui         $a3, 0x28
    ctx->r7 = S32(0X28 << 16);
    // 0x00283424: addiu       $a3, $a3, 0x3784
    ctx->r7 = ADD32(ctx->r7, 0X3784);
    // 0x00283428: lui         $s0, 0x28
    ctx->r16 = S32(0X28 << 16);
    // 0x0028342C: addiu       $s0, $s0, 0x3770
    ctx->r16 = ADD32(ctx->r16, 0X3770);
    // 0x00283430: jal         0x00226F90
    // 0x00283434: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    entry_00226F90(rdram, ctx);
        goto after_1;
    // 0x00283434: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_1:
    // 0x00283438: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    // 0x0028343C: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x00283440: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x00283444: lui         $a3, 0x28
    ctx->r7 = S32(0X28 << 16);
    // 0x00283448: addiu       $a3, $a3, 0x37B0
    ctx->r7 = ADD32(ctx->r7, 0X37B0);
    // 0x0028344C: jal         0x00226F90
    // 0x00283450: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    entry_00226F90(rdram, ctx);
        goto after_2;
    // 0x00283450: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_2:
    // 0x00283454: blez        $s3, L_00283480
    if (SIGNED(ctx->r19) <= 0) {
        // 0x00283458: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_00283480;
    }
    // 0x00283458: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x0028345C: addiu       $s1, $sp, 0x18
    ctx->r17 = ADD32(ctx->r29, 0X18);
L_00283460:
    // 0x00283460: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x00283464: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    // 0x00283468: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    // 0x0028346C: jal         0x00282340
    // 0x00283470: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    func_00282340(rdram, ctx);
        goto after_3;
    // 0x00283470: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    after_3:
    // 0x00283474: slt         $v0, $s0, $s3
    ctx->r2 = SIGNED(ctx->r16) < SIGNED(ctx->r19) ? 1 : 0;
    // 0x00283478: bne         $v0, $zero, L_00283460
    if (ctx->r2 != 0) {
        // 0x0028347C: nop
    
            goto L_00283460;
    }
    // 0x0028347C: nop

L_00283480:
    // 0x00283480: blez        $s2, L_002834AC
    if (SIGNED(ctx->r18) <= 0) {
        // 0x00283484: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_002834AC;
    }
    // 0x00283484: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x00283488: addiu       $s1, $sp, 0x28
    ctx->r17 = ADD32(ctx->r29, 0X28);
L_0028348C:
    // 0x0028348C: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x00283490: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    // 0x00283494: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    // 0x00283498: jal         0x00282340
    // 0x0028349C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    func_00282340(rdram, ctx);
        goto after_4;
    // 0x0028349C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    after_4:
    // 0x002834A0: slt         $v0, $s0, $s2
    ctx->r2 = SIGNED(ctx->r16) < SIGNED(ctx->r18) ? 1 : 0;
    // 0x002834A4: bne         $v0, $zero, L_0028348C
    if (ctx->r2 != 0) {
        // 0x002834A8: nop
    
            goto L_0028348C;
    }
    // 0x002834A8: nop

L_002834AC:
    // 0x002834AC: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x002834B0: lw          $s4, 0x48($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X48);
    // 0x002834B4: lw          $s3, 0x44($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X44);
    // 0x002834B8: lw          $s2, 0x40($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X40);
    // 0x002834BC: lw          $s1, 0x3C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X3C);
    // 0x002834C0: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x002834C4: jr          $ra
    // 0x002834C8: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x002834C8: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_00284EB8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00284EB8: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x00284EBC: beq         $v0, $zero, L_002851B8
    if (ctx->r2 == 0) {
        // 0x00284EC0: addu        $t0, $a1, $zero
        ctx->r8 = ADD32(ctx->r5, 0);
            goto L_002851B8;
    }
    // 0x00284EC0: addu        $t0, $a1, $zero
    ctx->r8 = ADD32(ctx->r5, 0);
    // 0x00284EC4: sll         $v0, $a1, 24
    ctx->r2 = S32(ctx->r5 << 24);
    // 0x00284EC8: sra         $v1, $v0, 24
    ctx->r3 = S32(SIGNED(ctx->r2) >> 24);
    // 0x00284ECC: slti        $v0, $v1, -0x1E
    ctx->r2 = SIGNED(ctx->r3) < -0X1E ? 1 : 0;
    // 0x00284ED0: beq         $v0, $zero, L_00284EE0
    if (ctx->r2 == 0) {
        // 0x00284ED4: andi        $a3, $a3, 0xFFFF
        ctx->r7 = ctx->r7 & 0XFFFF;
            goto L_00284EE0;
    }
    // 0x00284ED4: andi        $a3, $a3, 0xFFFF
    ctx->r7 = ctx->r7 & 0XFFFF;
    // 0x00284ED8: j           L_00284EF0
    // 0x00284EDC: lui         $v0, 0x2
    ctx->r2 = S32(0X2 << 16);
        goto L_00284EF0;
    // 0x00284EDC: lui         $v0, 0x2
    ctx->r2 = S32(0X2 << 16);
L_00284EE0:
    // 0x00284EE0: slti        $v0, $v1, 0x1F
    ctx->r2 = SIGNED(ctx->r3) < 0X1F ? 1 : 0;
    // 0x00284EE4: bne         $v0, $zero, L_00284EF8
    if (ctx->r2 != 0) {
        // 0x00284EE8: sll         $v0, $a2, 24
        ctx->r2 = S32(ctx->r6 << 24);
            goto L_00284EF8;
    }
    // 0x00284EE8: sll         $v0, $a2, 24
    ctx->r2 = S32(ctx->r6 << 24);
    // 0x00284EEC: lui         $v0, 0x4
    ctx->r2 = S32(0X4 << 16);
L_00284EF0:
    // 0x00284EF0: or          $a3, $a3, $v0
    ctx->r7 = ctx->r7 | ctx->r2;
    // 0x00284EF4: sll         $v0, $a2, 24
    ctx->r2 = S32(ctx->r6 << 24);
L_00284EF8:
    // 0x00284EF8: sra         $v1, $v0, 24
    ctx->r3 = S32(SIGNED(ctx->r2) >> 24);
    // 0x00284EFC: slti        $v0, $v1, -0x1E
    ctx->r2 = SIGNED(ctx->r3) < -0X1E ? 1 : 0;
    // 0x00284F00: bne         $v0, $zero, L_00284F18
    if (ctx->r2 != 0) {
        // 0x00284F04: lui         $v0, 0x8
        ctx->r2 = S32(0X8 << 16);
            goto L_00284F18;
    }
    // 0x00284F04: lui         $v0, 0x8
    ctx->r2 = S32(0X8 << 16);
    // 0x00284F08: slti        $v0, $v1, 0x1F
    ctx->r2 = SIGNED(ctx->r3) < 0X1F ? 1 : 0;
    // 0x00284F0C: bne         $v0, $zero, L_00284F20
    if (ctx->r2 != 0) {
        // 0x00284F10: sll         $v0, $t0, 24
        ctx->r2 = S32(ctx->r8 << 24);
            goto L_00284F20;
    }
    // 0x00284F10: sll         $v0, $t0, 24
    ctx->r2 = S32(ctx->r8 << 24);
    // 0x00284F14: lui         $v0, 0x1
    ctx->r2 = S32(0X1 << 16);
L_00284F18:
    // 0x00284F18: or          $a3, $a3, $v0
    ctx->r7 = ctx->r7 | ctx->r2;
    // 0x00284F1C: sll         $v0, $t0, 24
    ctx->r2 = S32(ctx->r8 << 24);
L_00284F20:
    // 0x00284F20: blez        $v0, L_00284F40
    if (SIGNED(ctx->r2) <= 0) {
        // 0x00284F24: addiu       $v0, $t0, -0x3
        ctx->r2 = ADD32(ctx->r8, -0X3);
            goto L_00284F40;
    }
    // 0x00284F24: addiu       $v0, $t0, -0x3
    ctx->r2 = ADD32(ctx->r8, -0X3);
    // 0x00284F28: addu        $t0, $v0, $zero
    ctx->r8 = ADD32(ctx->r2, 0);
    // 0x00284F2C: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x00284F30: bgez        $v0, L_00284F58
    if (SIGNED(ctx->r2) >= 0) {
        // 0x00284F34: sll         $v0, $a2, 24
        ctx->r2 = S32(ctx->r6 << 24);
            goto L_00284F58;
    }
    // 0x00284F34: sll         $v0, $a2, 24
    ctx->r2 = S32(ctx->r6 << 24);
    // 0x00284F38: j           L_00284F58
    // 0x00284F3C: addu        $t0, $zero, $zero
    ctx->r8 = ADD32(0, 0);
        goto L_00284F58;
    // 0x00284F3C: addu        $t0, $zero, $zero
    ctx->r8 = ADD32(0, 0);
L_00284F40:
    // 0x00284F40: addiu       $v0, $t0, 0x3
    ctx->r2 = ADD32(ctx->r8, 0X3);
    // 0x00284F44: addu        $t0, $v0, $zero
    ctx->r8 = ADD32(ctx->r2, 0);
    // 0x00284F48: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x00284F4C: bgtzl       $v0, L_00284F54
    if (SIGNED(ctx->r2) > 0) {
        // 0x00284F50: addu        $t0, $zero, $zero
        ctx->r8 = ADD32(0, 0);
            goto L_00284F54;
    }
    goto skip_0;
    // 0x00284F50: addu        $t0, $zero, $zero
    ctx->r8 = ADD32(0, 0);
    skip_0:
L_00284F54:
    // 0x00284F54: sll         $v0, $a2, 24
    ctx->r2 = S32(ctx->r6 << 24);
L_00284F58:
    // 0x00284F58: blez        $v0, L_00284F78
    if (SIGNED(ctx->r2) <= 0) {
        // 0x00284F5C: addiu       $v0, $a2, -0x3
        ctx->r2 = ADD32(ctx->r6, -0X3);
            goto L_00284F78;
    }
    // 0x00284F5C: addiu       $v0, $a2, -0x3
    ctx->r2 = ADD32(ctx->r6, -0X3);
    // 0x00284F60: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    // 0x00284F64: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x00284F68: bgez        $v0, L_00284F90
    if (SIGNED(ctx->r2) >= 0) {
        // 0x00284F6C: sll         $v0, $t0, 24
        ctx->r2 = S32(ctx->r8 << 24);
            goto L_00284F90;
    }
    // 0x00284F6C: sll         $v0, $t0, 24
    ctx->r2 = S32(ctx->r8 << 24);
    // 0x00284F70: j           L_00284F90
    // 0x00284F74: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
        goto L_00284F90;
    // 0x00284F74: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
L_00284F78:
    // 0x00284F78: addiu       $v0, $a2, 0x3
    ctx->r2 = ADD32(ctx->r6, 0X3);
    // 0x00284F7C: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    // 0x00284F80: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x00284F84: bgtzl       $v0, L_00284F8C
    if (SIGNED(ctx->r2) > 0) {
        // 0x00284F88: addu        $a2, $zero, $zero
        ctx->r6 = ADD32(0, 0);
            goto L_00284F8C;
    }
    goto skip_1;
    // 0x00284F88: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    skip_1:
L_00284F8C:
    // 0x00284F8C: sll         $v0, $t0, 24
    ctx->r2 = S32(ctx->r8 << 24);
L_00284F90:
    // 0x00284F90: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
    // 0x00284F94: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x00284F98: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00284F9C: sll         $v0, $a2, 24
    ctx->r2 = S32(ctx->r6 << 24);
    // 0x00284FA0: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
    // 0x00284FA4: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00284FA8: lwc1        $f2, -0x631C($at)
    ctx->f2.u32l = MEM_W(ctx->r1, -0X631C);
    // 0x00284FAC: mtc1        $v0, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r2;
    // 0x00284FB0: cvt.s.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.fl = CVT_S_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x00284FB4: c.eq.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl == ctx->f2.fl;
    // 0x00284FB8: nop

    // 0x00284FBC: bc1f        L_00284FCC
    if (!c1cs) {
        // 0x00284FC0: nop
    
            goto L_00284FCC;
    }
    // 0x00284FC0: nop

    // 0x00284FC4: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00284FC8: lwc1        $f0, -0x6318($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X6318);
L_00284FCC:
    // 0x00284FCC: c.eq.s      $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f1.fl == ctx->f2.fl;
    // 0x00284FD0: nop

    // 0x00284FD4: bc1f        L_00284FE4
    if (!c1cs) {
        // 0x00284FD8: nop
    
            goto L_00284FE4;
    }
    // 0x00284FD8: nop

    // 0x00284FDC: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00284FE0: lwc1        $f1, -0x6314($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, -0X6314);
L_00284FE4:
    // 0x00284FE4: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00284FE8: lwc1        $f3, -0x6310($at)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r1, -0X6310);
    // 0x00284FEC: c.lt.s      $f0, $f3
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    c1cs = ctx->f0.fl < ctx->f3.fl;
    // 0x00284FF0: nop

    // 0x00284FF4: bc1tl       L_00284FFC
    if (c1cs) {
        // 0x00284FF8: mov.s       $f0, $f3
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    ctx->f0.fl = ctx->f3.fl;
            goto L_00284FFC;
    }
    goto skip_2;
    // 0x00284FF8: mov.s       $f0, $f3
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    ctx->f0.fl = ctx->f3.fl;
    skip_2:
L_00284FFC:
    // 0x00284FFC: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00285000: lwc1        $f2, -0x630C($at)
    ctx->f2.u32l = MEM_W(ctx->r1, -0X630C);
    // 0x00285004: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x00285008: nop

    // 0x0028500C: bc1tl       L_00285014
    if (c1cs) {
        // 0x00285010: mov.s       $f0, $f2
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
            goto L_00285014;
    }
    goto skip_3;
    // 0x00285010: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
    skip_3:
L_00285014:
    // 0x00285014: c.lt.s      $f1, $f3
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 3);
    c1cs = ctx->f1.fl < ctx->f3.fl;
    // 0x00285018: nop

    // 0x0028501C: bc1tl       L_00285024
    if (c1cs) {
        // 0x00285020: mov.s       $f1, $f3
        CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 3);
    ctx->f1.fl = ctx->f3.fl;
            goto L_00285024;
    }
    goto skip_4;
    // 0x00285020: mov.s       $f1, $f3
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 3);
    ctx->f1.fl = ctx->f3.fl;
    skip_4:
L_00285024:
    // 0x00285024: c.lt.s      $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f2.fl < ctx->f1.fl;
    // 0x00285028: nop

    // 0x0028502C: bc1tl       L_00285034
    if (c1cs) {
        // 0x00285030: mov.s       $f1, $f2
        CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    ctx->f1.fl = ctx->f2.fl;
            goto L_00285034;
    }
    goto skip_5;
    // 0x00285030: mov.s       $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    ctx->f1.fl = ctx->f2.fl;
    skip_5:
L_00285034:
    // 0x00285034: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x00285038: addiu       $t0, $a0, 0x2C
    ctx->r8 = ADD32(ctx->r4, 0X2C);
    // 0x0028503C: addiu       $t1, $zero, 0x13
    ctx->r9 = ADD32(0, 0X13);
    // 0x00285040: addu        $t5, $a2, $zero
    ctx->r13 = ADD32(ctx->r6, 0);
    // 0x00285044: addiu       $t4, $zero, 0x1E
    ctx->r12 = ADD32(0, 0X1E);
    // 0x00285048: addiu       $t3, $zero, 0x30
    ctx->r11 = ADD32(0, 0X30);
    // 0x0028504C: lw          $v1, 0x18($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X18);
    // 0x00285050: trunc.w.s   $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x00285054: mfc1        $v0, $f4
    ctx->r2 = (int32_t)ctx->f4.u32l;
    // 0x00285058: sb          $v0, 0xC4($a0)
    MEM_B(0XC4, ctx->r4) = ctx->r2;
    // 0x0028505C: trunc.w.s   $f4, $f1
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 1);
    ctx->f4.u32l = TRUNC_W_S(ctx->f1.fl);
    // 0x00285060: mfc1        $v0, $f4
    ctx->r2 = (int32_t)ctx->f4.u32l;
    // 0x00285064: sb          $v0, 0xC5($a0)
    MEM_B(0XC5, ctx->r4) = ctx->r2;
    // 0x00285068: lw          $v0, 0x1C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X1C);
    // 0x0028506C: addiu       $a1, $a0, 0x2E
    ctx->r5 = ADD32(ctx->r4, 0X2E);
    // 0x00285070: sw          $a3, 0x18($a0)
    MEM_W(0X18, ctx->r4) = ctx->r7;
    // 0x00285074: sw          $v1, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r3;
    // 0x00285078: xor         $v1, $v1, $a3
    ctx->r3 = ctx->r3 ^ ctx->r7;
    // 0x0028507C: and         $t2, $v1, $a3
    ctx->r10 = ctx->r3 & ctx->r7;
    // 0x00285080: lw          $v1, 0x28($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X28);
    // 0x00285084: or          $v0, $v0, $t2
    ctx->r2 = ctx->r2 | ctx->r10;
    // 0x00285088: sw          $v0, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = ctx->r2;
    // 0x0028508C: or          $v1, $v1, $t2
    ctx->r3 = ctx->r3 | ctx->r10;
    // 0x00285090: sw          $v1, 0x28($a0)
    MEM_W(0X28, ctx->r4) = ctx->r3;
L_00285094:
    // 0x00285094: and         $v0, $t2, $a2
    ctx->r2 = ctx->r10 & ctx->r6;
    // 0x00285098: beq         $v0, $zero, L_002850EC
    if (ctx->r2 == 0) {
        // 0x0028509C: nop
    
            goto L_002850EC;
    }
    // 0x0028509C: nop

    // 0x002850A0: lb          $v0, -0x1($a1)
    ctx->r2 = MEM_B(ctx->r5, -0X1);
    // 0x002850A4: slti        $v0, $v0, 0x1E
    ctx->r2 = SIGNED(ctx->r2) < 0X1E ? 1 : 0;
    // 0x002850A8: beql        $v0, $zero, L_002850E8
    if (ctx->r2 == 0) {
        // 0x002850AC: sb          $t5, 0x0($t0)
        MEM_B(0X0, ctx->r8) = ctx->r13;
            goto L_002850E8;
    }
    goto skip_6;
    // 0x002850AC: sb          $t5, 0x0($t0)
    MEM_B(0X0, ctx->r8) = ctx->r13;
    skip_6:
    // 0x002850B0: sb          $zero, -0x1($a1)
    MEM_B(-0X1, ctx->r5) = 0;
    // 0x002850B4: lbu         $v0, 0x0($t0)
    ctx->r2 = MEM_BU(ctx->r8, 0X0);
    // 0x002850B8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x002850BC: sb          $v0, 0x0($t0)
    MEM_B(0X0, ctx->r8) = ctx->r2;
    // 0x002850C0: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x002850C4: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
    // 0x002850C8: slti        $v0, $v0, 0x2
    ctx->r2 = SIGNED(ctx->r2) < 0X2 ? 1 : 0;
    // 0x002850CC: bne         $v0, $zero, L_002850EC
    if (ctx->r2 != 0) {
        // 0x002850D0: nop
    
            goto L_002850EC;
    }
    // 0x002850D0: nop

    // 0x002850D4: lw          $v0, 0x24($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X24);
    // 0x002850D8: or          $v0, $v0, $a2
    ctx->r2 = ctx->r2 | ctx->r6;
    // 0x002850DC: sw          $v0, 0x24($a0)
    MEM_W(0X24, ctx->r4) = ctx->r2;
    // 0x002850E0: j           L_002850EC
    // 0x002850E4: sb          $zero, 0x0($t0)
    MEM_B(0X0, ctx->r8) = 0;
        goto L_002850EC;
    // 0x002850E4: sb          $zero, 0x0($t0)
    MEM_B(0X0, ctx->r8) = 0;
L_002850E8:
    // 0x002850E8: sb          $zero, -0x1($a1)
    MEM_B(-0X1, ctx->r5) = 0;
L_002850EC:
    // 0x002850EC: lbu         $v0, -0x1($a1)
    ctx->r2 = MEM_BU(ctx->r5, -0X1);
    // 0x002850F0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x002850F4: sb          $v0, -0x1($a1)
    MEM_B(-0X1, ctx->r5) = ctx->r2;
    // 0x002850F8: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x002850FC: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
    // 0x00285100: slti        $v0, $v0, 0x1F
    ctx->r2 = SIGNED(ctx->r2) < 0X1F ? 1 : 0;
    // 0x00285104: beql        $v0, $zero, L_0028510C
    if (ctx->r2 == 0) {
        // 0x00285108: sb          $t4, -0x1($a1)
        MEM_B(-0X1, ctx->r5) = ctx->r12;
            goto L_0028510C;
    }
    goto skip_7;
    // 0x00285108: sb          $t4, -0x1($a1)
    MEM_B(-0X1, ctx->r5) = ctx->r12;
    skip_7:
L_0028510C:
    // 0x0028510C: and         $v0, $a3, $a2
    ctx->r2 = ctx->r7 & ctx->r6;
    // 0x00285110: beq         $v0, $zero, L_0028515C
    if (ctx->r2 == 0) {
        // 0x00285114: nop
    
            goto L_0028515C;
    }
    // 0x00285114: nop

    // 0x00285118: lbu         $v1, 0x1($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X1);
    // 0x0028511C: sltiu       $v0, $v1, 0xFF
    ctx->r2 = ctx->r3 < 0XFF ? 1 : 0;
    // 0x00285120: beq         $v0, $zero, L_0028512C
    if (ctx->r2 == 0) {
        // 0x00285124: addiu       $v0, $v1, 0x1
        ctx->r2 = ADD32(ctx->r3, 0X1);
            goto L_0028512C;
    }
    // 0x00285124: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
    // 0x00285128: sb          $v0, 0x1($a1)
    MEM_B(0X1, ctx->r5) = ctx->r2;
L_0028512C:
    // 0x0028512C: lbu         $v1, 0x0($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X0);
    // 0x00285130: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
    // 0x00285134: sb          $v0, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r2;
    // 0x00285138: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x0028513C: bgezl       $v0, L_002851A4
    if (SIGNED(ctx->r2) >= 0) {
        // 0x00285140: addiu       $a1, $a1, 0x4
        ctx->r5 = ADD32(ctx->r5, 0X4);
            goto L_002851A4;
    }
    goto skip_8;
    // 0x00285140: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
    skip_8:
    // 0x00285144: addiu       $v0, $v1, 0x4
    ctx->r2 = ADD32(ctx->r3, 0X4);
    // 0x00285148: sb          $v0, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r2;
    // 0x0028514C: lw          $v0, 0x28($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X28);
    // 0x00285150: or          $v0, $v0, $a2
    ctx->r2 = ctx->r2 | ctx->r6;
    // 0x00285154: j           L_002851A0
    // 0x00285158: sw          $v0, 0x28($a0)
    MEM_W(0X28, ctx->r4) = ctx->r2;
        goto L_002851A0;
    // 0x00285158: sw          $v0, 0x28($a0)
    MEM_W(0X28, ctx->r4) = ctx->r2;
L_0028515C:
    // 0x0028515C: lbu         $v0, 0x1($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X1);
    // 0x00285160: sltiu       $v0, $v0, 0x11
    ctx->r2 = ctx->r2 < 0X11 ? 1 : 0;
    // 0x00285164: beql        $v0, $zero, L_0028518C
    if (ctx->r2 == 0) {
        // 0x00285168: sb          $zero, 0x1($a1)
        MEM_B(0X1, ctx->r5) = 0;
            goto L_0028518C;
    }
    goto skip_9;
    // 0x00285168: sb          $zero, 0x1($a1)
    MEM_B(0X1, ctx->r5) = 0;
    skip_9:
    // 0x0028516C: lw          $v0, 0x14($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X14);
    // 0x00285170: and         $v0, $v0, $a2
    ctx->r2 = ctx->r2 & ctx->r6;
    // 0x00285174: beql        $v0, $zero, L_0028518C
    if (ctx->r2 == 0) {
        // 0x00285178: sb          $zero, 0x1($a1)
        MEM_B(0X1, ctx->r5) = 0;
            goto L_0028518C;
    }
    goto skip_10;
    // 0x00285178: sb          $zero, 0x1($a1)
    MEM_B(0X1, ctx->r5) = 0;
    skip_10:
    // 0x0028517C: lw          $v0, 0x20($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X20);
    // 0x00285180: or          $v0, $v0, $a2
    ctx->r2 = ctx->r2 | ctx->r6;
    // 0x00285184: sw          $v0, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->r2;
    // 0x00285188: sb          $zero, 0x1($a1)
    MEM_B(0X1, ctx->r5) = 0;
L_0028518C:
    // 0x0028518C: lw          $v0, 0x28($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X28);
    // 0x00285190: nor         $v1, $zero, $a2
    ctx->r3 = ~(0 | ctx->r6);
    // 0x00285194: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x00285198: sw          $v0, 0x28($a0)
    MEM_W(0X28, ctx->r4) = ctx->r2;
    // 0x0028519C: sb          $t3, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r11;
L_002851A0:
    // 0x002851A0: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
L_002851A4:
    // 0x002851A4: addiu       $t0, $t0, 0x4
    ctx->r8 = ADD32(ctx->r8, 0X4);
    // 0x002851A8: sll         $a2, $a2, 1
    ctx->r6 = S32(ctx->r6 << 1);
    // 0x002851AC: addu        $v0, $t1, $zero
    ctx->r2 = ADD32(ctx->r9, 0);
    // 0x002851B0: bne         $v0, $zero, L_00285094
    if (ctx->r2 != 0) {
        // 0x002851B4: addiu       $t1, $t1, -0x1
        ctx->r9 = ADD32(ctx->r9, -0X1);
            goto L_00285094;
    }
    // 0x002851B4: addiu       $t1, $t1, -0x1
    ctx->r9 = ADD32(ctx->r9, -0X1);
L_002851B8:
    // 0x002851B8: jr          $ra
    // 0x002851BC: nop

    return;
    // 0x002851BC: nop

;}
RECOMP_FUNC void func_0026F010(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0026F010: sltiu       $v0, $v0, 0x3E8
    ctx->r2 = ctx->r2 < 0X3E8 ? 1 : 0;
    // 0x0026F014: beq         $v0, $zero, L_0026F024
    if (ctx->r2 == 0) {
            // 0x0026F018: addiu       $v0, $a0, -0xBB8
    ctx->r2 = ADD32(ctx->r4, -0XBB8);
    func_0026F024(rdram, ctx);
    return;
    }
    // 0x0026F018: addiu       $v0, $a0, -0xBB8
    ctx->r2 = ADD32(ctx->r4, -0XBB8);
    // 0x0026F01C: jr          $ra
    // 0x0026F020: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    return;
    // 0x0026F020: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
;}
RECOMP_FUNC void func_0045D890(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0045D890: jr          $ra
    // 0x0045D894: nop

    return;
    // 0x0045D894: nop

;}
RECOMP_FUNC void func_00285A94(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00285A94: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x00285A98: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
    // 0x00285A9C: lui         $v0, 0x800F
    ctx->r2 = S32(0X800F << 16);
    // 0x00285AA0: addiu       $v0, $v0, 0x5EA3
    ctx->r2 = ADD32(ctx->r2, 0X5EA3);
L_00285AA4:
    // 0x00285AA4: sb          $a0, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r4;
    // 0x00285AA8: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x00285AAC: bgez        $v1, L_00285AA4
    if (SIGNED(ctx->r3) >= 0) {
        // 0x00285AB0: addiu       $v0, $v0, -0x1
        ctx->r2 = ADD32(ctx->r2, -0X1);
            goto L_00285AA4;
    }
    // 0x00285AB0: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x00285AB4: jr          $ra
    // 0x00285AB8: nop

    return;
    // 0x00285AB8: nop

;}
RECOMP_FUNC void func_004543D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004543D8: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x004543DC: lw          $v0, -0x5528($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X5528);
    // 0x004543E0: xori        $v0, $v0, 0x20
    ctx->r2 = ctx->r2 ^ 0X20;
    // 0x004543E4: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x004543E8: sw          $v0, -0x5528($at)
    MEM_W(-0X5528, ctx->r1) = ctx->r2;
    // 0x004543EC: jr          $ra
    // 0x004543F0: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x004543F0: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void func_002688C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002688C8: addiu       $sp, $sp, -0x150
    ctx->r29 = ADD32(ctx->r29, -0X150);
    // 0x002688CC: sw          $s1, 0x134($sp)
    MEM_W(0X134, ctx->r29) = ctx->r17;
    // 0x002688D0: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x002688D4: addiu       $v0, $sp, 0x40
    ctx->r2 = ADD32(ctx->r29, 0X40);
    // 0x002688D8: sw          $ra, 0x14C($sp)
    MEM_W(0X14C, ctx->r29) = ctx->r31;
    // 0x002688DC: sw          $s6, 0x148($sp)
    MEM_W(0X148, ctx->r29) = ctx->r22;
    // 0x002688E0: sw          $s5, 0x144($sp)
    MEM_W(0X144, ctx->r29) = ctx->r21;
    // 0x002688E4: sw          $s4, 0x140($sp)
    MEM_W(0X140, ctx->r29) = ctx->r20;
    // 0x002688E8: sw          $s3, 0x13C($sp)
    MEM_W(0X13C, ctx->r29) = ctx->r19;
    // 0x002688EC: sw          $s2, 0x138($sp)
    MEM_W(0X138, ctx->r29) = ctx->r18;
    // 0x002688F0: sw          $s0, 0x130($sp)
    MEM_W(0X130, ctx->r29) = ctx->r16;
    // 0x002688F4: sw          $a1, 0x154($sp)
    MEM_W(0X154, ctx->r29) = ctx->r5;
    // 0x002688F8: sw          $a2, 0x158($sp)
    MEM_W(0X158, ctx->r29) = ctx->r6;
    // 0x002688FC: sw          $a3, 0x15C($sp)
    MEM_W(0X15C, ctx->r29) = ctx->r7;
    // 0x00268900: lw          $t0, 0x0($s1)
    ctx->r8 = MEM_W(ctx->r17, 0X0);
    // 0x00268904: lw          $t1, 0x4($s1)
    ctx->r9 = MEM_W(ctx->r17, 0X4);
    // 0x00268908: lw          $t2, 0x8($s1)
    ctx->r10 = MEM_W(ctx->r17, 0X8);
    // 0x0026890C: lw          $t3, 0xC($s1)
    ctx->r11 = MEM_W(ctx->r17, 0XC);
    // 0x00268910: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x00268914: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    // 0x00268918: sw          $t2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r10;
    // 0x0026891C: sw          $t3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r11;
    // 0x00268920: lw          $t0, 0x10($s1)
    ctx->r8 = MEM_W(ctx->r17, 0X10);
    // 0x00268924: lw          $t1, 0x14($s1)
    ctx->r9 = MEM_W(ctx->r17, 0X14);
    // 0x00268928: sw          $t0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r8;
    // 0x0026892C: sw          $t1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r9;
    // 0x00268930: lw          $s5, 0x160($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X160);
    // 0x00268934: lw          $s6, 0x164($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X164);
    // 0x00268938: lw          $v1, 0x168($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X168);
    // 0x0026893C: lw          $a0, 0x16C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X16C);
    // 0x00268940: lui         $s2, 0x800F
    ctx->r18 = S32(0X800F << 16);
    // 0x00268944: lw          $s2, 0x1ADC($s2)
    ctx->r18 = MEM_W(ctx->r18, 0X1ADC);
    // 0x00268948: lui         $s0, 0x800F
    ctx->r16 = S32(0X800F << 16);
    // 0x0026894C: addiu       $s0, $s0, 0x1CC6
    ctx->r16 = ADD32(ctx->r16, 0X1CC6);
    // 0x00268950: lui         $at, 0x800F
    ctx->r1 = S32(0X800F << 16);
    // 0x00268954: sw          $v0, 0x1ADC($at)
    MEM_W(0X1ADC, ctx->r1) = ctx->r2;
    // 0x00268958: lb          $s3, 0x0($s0)
    ctx->r19 = MEM_B(ctx->r16, 0X0);
    // 0x0026895C: lb          $s4, -0x2($s0)
    ctx->r20 = MEM_B(ctx->r16, -0X2);
    // 0x00268960: addiu       $v0, $s0, -0x6
    ctx->r2 = ADD32(ctx->r16, -0X6);
    // 0x00268964: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x00268968: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    // 0x0026896C: sb          $a0, -0x2($s0)
    MEM_B(-0X2, ctx->r16) = ctx->r4;
    // 0x00268970: lw          $a1, 0x154($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X154);
    // 0x00268974: lw          $a2, 0x158($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X158);
    // 0x00268978: lw          $a3, 0x15C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X15C);
    // 0x0026897C: jal         0x00239F00
    // 0x00268980: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_00239F00(rdram, ctx);
        goto after_0;
    // 0x00268980: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_0:
    // 0x00268984: lui         $at, 0x800F
    ctx->r1 = S32(0X800F << 16);
    // 0x00268988: sw          $s2, 0x1ADC($at)
    MEM_W(0X1ADC, ctx->r1) = ctx->r18;
    // 0x0026898C: lwc1        $f0, 0x158($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X158);
    // 0x00268990: lwc1        $f1, 0x4($s1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r17, 0X4);
    // 0x00268994: swc1        $f0, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->f0.u32l;
    // 0x00268998: swc1        $f1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    // 0x0026899C: lwc1        $f0, 0x158($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X158);
    // 0x002689A0: swc1        $f0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f0.u32l;
    // 0x002689A4: lwc1        $f0, 0xC($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0XC);
    // 0x002689A8: swc1        $f0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f0.u32l;
    // 0x002689AC: lw          $v0, 0x10($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X10);
    // 0x002689B0: lw          $t0, 0x18($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X18);
    // 0x002689B4: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x002689B8: lw          $t2, 0x20($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X20);
    // 0x002689BC: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x002689C0: sw          $t0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r8;
    // 0x002689C4: sw          $t1, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->r9;
    // 0x002689C8: sw          $t2, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->r10;
    // 0x002689CC: sw          $t3, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->r11;
    // 0x002689D0: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x002689D4: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x002689D8: sw          $t0, 0x10($s1)
    MEM_W(0X10, ctx->r17) = ctx->r8;
    // 0x002689DC: sw          $t1, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r9;
    // 0x002689E0: lw          $t0, 0x30($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X30);
    // 0x002689E4: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x002689E8: lw          $t2, 0x38($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X38);
    // 0x002689EC: sw          $t0, 0x0($s5)
    MEM_W(0X0, ctx->r21) = ctx->r8;
    // 0x002689F0: sw          $t1, 0x4($s5)
    MEM_W(0X4, ctx->r21) = ctx->r9;
    // 0x002689F4: sw          $t2, 0x8($s5)
    MEM_W(0X8, ctx->r21) = ctx->r10;
    // 0x002689F8: sw          $v0, 0x0($s6)
    MEM_W(0X0, ctx->r22) = ctx->r2;
    // 0x002689FC: sb          $s3, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r19;
    // 0x00268A00: sb          $s4, -0x2($s0)
    MEM_B(-0X2, ctx->r16) = ctx->r20;
    // 0x00268A04: lw          $ra, 0x14C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14C);
    // 0x00268A08: lw          $s6, 0x148($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X148);
    // 0x00268A0C: lw          $s5, 0x144($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X144);
    // 0x00268A10: lw          $s4, 0x140($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X140);
    // 0x00268A14: lw          $s3, 0x13C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X13C);
    // 0x00268A18: lw          $s2, 0x138($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X138);
    // 0x00268A1C: lw          $s1, 0x134($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X134);
    // 0x00268A20: lw          $s0, 0x130($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X130);
    // 0x00268A24: jr          $ra
    // 0x00268A28: addiu       $sp, $sp, 0x150
    ctx->r29 = ADD32(ctx->r29, 0X150);
    return;
    // 0x00268A28: addiu       $sp, $sp, 0x150
    ctx->r29 = ADD32(ctx->r29, 0X150);
;}
RECOMP_FUNC void func_00429DB4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00429DB4: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x00429DB8: sh          $zero, 0x0($a2)
    MEM_H(0X0, ctx->r6) = 0;
    // 0x00429DBC: sh          $zero, 0x0($a1)
    MEM_H(0X0, ctx->r5) = 0;
    // 0x00429DC0: addu        $v0, $a0, $a3
    ctx->r2 = ADD32(ctx->r4, ctx->r7);
L_00429DC4:
    // 0x00429DC4: lhu         $v1, 0x0($v0)
    ctx->r3 = MEM_HU(ctx->r2, 0X0);
    // 0x00429DC8: lhu         $v0, 0x0($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X0);
    // 0x00429DCC: addiu       $a3, $a3, 0x2
    ctx->r7 = ADD32(ctx->r7, 0X2);
    // 0x00429DD0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x00429DD4: sh          $v0, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r2;
    // 0x00429DD8: lhu         $v0, 0x0($a2)
    ctx->r2 = MEM_HU(ctx->r6, 0X0);
    // 0x00429DDC: nor         $v1, $zero, $v1
    ctx->r3 = ~(0 | ctx->r3);
    // 0x00429DE0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x00429DE4: sh          $v0, 0x0($a2)
    MEM_H(0X0, ctx->r6) = ctx->r2;
    // 0x00429DE8: sltiu       $v0, $a3, 0x1C
    ctx->r2 = ctx->r7 < 0X1C ? 1 : 0;
    // 0x00429DEC: bne         $v0, $zero, L_00429DC4
    if (ctx->r2 != 0) {
        // 0x00429DF0: addu        $v0, $a0, $a3
        ctx->r2 = ADD32(ctx->r4, ctx->r7);
            goto L_00429DC4;
    }
    // 0x00429DF0: addu        $v0, $a0, $a3
    ctx->r2 = ADD32(ctx->r4, ctx->r7);
    // 0x00429DF4: jr          $ra
    // 0x00429DF8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x00429DF8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void func_00283784(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00283784: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x00283788: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x0028378C: lwc1        $f1, 0x210($v0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r2, 0X210);
    // 0x00283790: lwc1        $f0, 0x210($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X210);
    // 0x00283794: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x00283798: nop

    // 0x0028379C: bc1f        L_002837A8
    if (!c1cs) {
        // 0x002837A0: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_002837A8;
    }
    // 0x002837A0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x002837A4: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_002837A8:
    // 0x002837A8: jr          $ra
    // 0x002837AC: nop

    return;
    // 0x002837AC: nop

;}
RECOMP_FUNC void func_002291D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002291D4: addu        $v0, $a1, $zero
    ctx->r2 = ADD32(ctx->r5, 0);
    // 0x002291D8: addu        $t0, $a2, $zero
    ctx->r8 = ADD32(ctx->r6, 0);
    // 0x002291DC: andi        $a0, $a0, 0xFF
    ctx->r4 = ctx->r4 & 0XFF;
    // 0x002291E0: lw          $t2, 0x10($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X10);
    // 0x002291E4: lw          $t3, 0x14($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X14);
    // 0x002291E8: lw          $t4, 0x18($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X18);
    // 0x002291EC: beq         $a0, $zero, L_00229320
    if (ctx->r4 == 0) {
            // 0x002291F0: addu        $t1, $a3, $zero
    ctx->r9 = ADD32(ctx->r7, 0);
    func_00229320(rdram, ctx);
    return;
    }
    // 0x002291F0: addu        $t1, $a3, $zero
    ctx->r9 = ADD32(ctx->r7, 0);
    // 0x002291F4: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x002291F8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002291FC: lwc1        $f0, 0x6100($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6100);
    // 0x00229200: mtc1        $v0, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r2;
    // 0x00229204: cvt.s.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.fl = CVT_S_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x00229208: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x0022920C: addiu       $v0, $zero, 0x64
    ctx->r2 = ADD32(0, 0X64);
    // 0x00229210: subu        $a0, $v0, $a0
    ctx->r4 = SUB32(ctx->r2, ctx->r4);
    // 0x00229214: mtc1        $a0, $f0
    ctx->f0.u32l = ctx->r4;
    // 0x00229218: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x0022921C: mul.s       $f0, $f1, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x00229220: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00229224: lwc1        $f1, 0x6104($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X6104);
    // 0x00229228: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x0022922C: nop

    // 0x00229230: bc1tl       L_00229248
    if (c1cs) {
        // 0x00229234: sub.s       $f0, $f0, $f1
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
            goto L_00229248;
    }
    goto skip_0;
    // 0x00229234: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    skip_0:
    // 0x00229238: trunc.w.s   $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x0022923C: mfc1        $v1, $f2
    ctx->r3 = (int32_t)ctx->f2.u32l;
    // 0x00229240: j           L_0022925C
    // 0x00229244: andi        $v0, $t0, 0xFF
    ctx->r2 = ctx->r8 & 0XFF;
        goto L_0022925C;
    // 0x00229244: andi        $v0, $t0, 0xFF
    ctx->r2 = ctx->r8 & 0XFF;
L_00229248:
    // 0x00229248: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x0022924C: trunc.w.s   $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x00229250: mfc1        $v1, $f2
    ctx->r3 = (int32_t)ctx->f2.u32l;
    // 0x00229254: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x00229258: andi        $v0, $t0, 0xFF
    ctx->r2 = ctx->r8 & 0XFF;
L_0022925C:
    // 0x0022925C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00229260: lwc1        $f1, 0x6108($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X6108);
    // 0x00229264: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x00229268: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x0022926C: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00229270: mtc1        $a0, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r4;
    // 0x00229274: cvt.s.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.fl = CVT_S_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x00229278: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0022927C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00229280: lwc1        $f1, 0x610C($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X610C);
    // 0x00229284: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x00229288: nop

    // 0x0022928C: bc1t        L_002292A4
    if (c1cs) {
        // 0x00229290: sb          $v1, 0x0($t2)
        MEM_B(0X0, ctx->r10) = ctx->r3;
            goto L_002292A4;
    }
    // 0x00229290: sb          $v1, 0x0($t2)
    MEM_B(0X0, ctx->r10) = ctx->r3;
    // 0x00229294: trunc.w.s   $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x00229298: mfc1        $v1, $f2
    ctx->r3 = (int32_t)ctx->f2.u32l;
    // 0x0022929C: j           L_002292BC
    // 0x002292A0: andi        $v0, $t1, 0xFF
    ctx->r2 = ctx->r9 & 0XFF;
        goto L_002292BC;
    // 0x002292A0: andi        $v0, $t1, 0xFF
    ctx->r2 = ctx->r9 & 0XFF;
L_002292A4:
    // 0x002292A4: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x002292A8: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x002292AC: trunc.w.s   $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x002292B0: mfc1        $v1, $f2
    ctx->r3 = (int32_t)ctx->f2.u32l;
    // 0x002292B4: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x002292B8: andi        $v0, $t1, 0xFF
    ctx->r2 = ctx->r9 & 0XFF;
L_002292BC:
    // 0x002292BC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002292C0: lwc1        $f1, 0x6110($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X6110);
    // 0x002292C4: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x002292C8: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x002292CC: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x002292D0: mtc1        $a0, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r4;
    // 0x002292D4: cvt.s.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.fl = CVT_S_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x002292D8: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x002292DC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002292E0: lwc1        $f1, 0x6114($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X6114);
    // 0x002292E4: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x002292E8: nop

    // 0x002292EC: bc1t        L_00229304
    if (c1cs) {
            // 0x002292F0: sb          $v1, 0x0($t3)
    MEM_B(0X0, ctx->r11) = ctx->r3;
    func_00229304(rdram, ctx);
    return;
    }
    // 0x002292F0: sb          $v1, 0x0($t3)
    MEM_B(0X0, ctx->r11) = ctx->r3;
    // 0x002292F4: trunc.w.s   $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x002292F8: mfc1        $v1, $f2
    ctx->r3 = (int32_t)ctx->f2.u32l;
    // 0x002292FC: jr          $ra
    // 0x00229300: sb          $v1, 0x0($t4)
    MEM_B(0X0, ctx->r12) = ctx->r3;
    return;
    // 0x00229300: sb          $v1, 0x0($t4)
    MEM_B(0X0, ctx->r12) = ctx->r3;
;}
RECOMP_FUNC void func_002837DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002837DC: lwc1        $f0, 0x294($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X294);
    // turok2: reconnected split function: a stray ELF symbol at 0x002837E0 ended
    // this function early, leaving it without its epilogue. On the
    // hardware execution simply continues into the next instruction.
    func_002837E0(rdram, ctx);
;}
RECOMP_FUNC void func_0029B410(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0029B410: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x0029B414: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x0029B418: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x0029B41C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0029B420: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x0029B424: bne         $s0, $zero, L_0029B444
    if (ctx->r16 != 0) {
        // 0x0029B428: sw          $ra, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->r31;
            goto L_0029B444;
    }
    // 0x0029B428: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x0029B42C: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x0029B430: addiu       $a0, $a0, -0x5720
    ctx->r4 = ADD32(ctx->r4, -0X5720);
    // 0x0029B434: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x0029B438: addiu       $a1, $a1, -0x571C
    ctx->r5 = ADD32(ctx->r5, -0X571C);
    // 0x0029B43C: jal         0x0029B020
    // 0x0029B440: addiu       $a2, $zero, 0x3D
    ctx->r6 = ADD32(0, 0X3D);
    func_0029B020(rdram, ctx);
        goto after_0;
    // 0x0029B440: addiu       $a2, $zero, 0x3D
    ctx->r6 = ADD32(0, 0X3D);
    after_0:
L_0029B444:
    // 0x0029B444: lui         $v0, 0xA460
    ctx->r2 = S32(0XA460 << 16);
    // 0x0029B448: ori         $v0, $v0, 0x10
    ctx->r2 = ctx->r2 | 0X10;
    // 0x0029B44C: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x0029B450: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
    // 0x0029B454: beq         $v0, $zero, L_0029B470
    if (ctx->r2 == 0) {
        // 0x0029B458: lui         $v1, 0xA460
        ctx->r3 = S32(0XA460 << 16);
            goto L_0029B470;
    }
    // 0x0029B458: lui         $v1, 0xA460
    ctx->r3 = S32(0XA460 << 16);
    // 0x0029B45C: ori         $v1, $v1, 0x10
    ctx->r3 = ctx->r3 | 0X10;
L_0029B460:
    // 0x0029B460: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x0029B464: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
    // 0x0029B468: bne         $v0, $zero, L_0029B460
    if (ctx->r2 != 0) {
        // 0x0029B46C: nop
    
            goto L_0029B460;
    }
    // 0x0029B46C: nop

L_0029B470:
    // 0x0029B470: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x0029B474: lw          $v0, 0x308($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X308);
    // 0x0029B478: lui         $v1, 0xA000
    ctx->r3 = S32(0XA000 << 16);
    // 0x0029B47C: or          $v0, $v0, $s1
    ctx->r2 = ctx->r2 | ctx->r17;
    // 0x0029B480: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x0029B484: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x0029B488: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x0029B48C: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x0029B490: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x0029B494: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0029B498: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x0029B49C: jr          $ra
    // 0x0029B4A0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x0029B4A0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_0040B370(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0040B370: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0040B374: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x0040B378: lb          $v0, 0xC7($a1)
    ctx->r2 = MEM_B(ctx->r5, 0XC7);
    // 0x0040B37C: beq         $v0, $zero, L_0040B39C
    if (ctx->r2 == 0) {
        // 0x0040B380: lui         $v1, 0xEFFF
        ctx->r3 = S32(0XEFFF << 16);
            goto L_0040B39C;
    }
    // 0x0040B380: lui         $v1, 0xEFFF
    ctx->r3 = S32(0XEFFF << 16);
    // 0x0040B384: ori         $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 | 0XFFFF;
    // 0x0040B388: lw          $v0, 0x27C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X27C);
    // 0x0040B38C: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x0040B390: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x0040B394: jal         0x00243414
    // 0x0040B398: sw          $v0, 0x27C($a0)
    MEM_W(0X27C, ctx->r4) = ctx->r2;
    func_00243414(rdram, ctx);
        goto after_0;
    // 0x0040B398: sw          $v0, 0x27C($a0)
    MEM_W(0X27C, ctx->r4) = ctx->r2;
    after_0:
L_0040B39C:
    // 0x0040B39C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x0040B3A0: jr          $ra
    // 0x0040B3A4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0040B3A4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0045BA28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
;}
RECOMP_FUNC void func_00416C28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00416C28: lw          $v0, 0x1C8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X1C8);
    // 0x00416C2C: lw          $v1, 0x1CC($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X1CC);
    // 0x00416C30: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x00416C34: sw          $v0, 0x1C8($a0)
    MEM_W(0X1C8, ctx->r4) = ctx->r2;
    // 0x00416C38: slti        $v0, $v0, 0x30
    ctx->r2 = SIGNED(ctx->r2) < 0X30 ? 1 : 0;
    // 0x00416C3C: bne         $v0, $zero, L_00416C4C
    if (ctx->r2 != 0) {
        // 0x00416C40: nop
    
            goto L_00416C4C;
    }
    // 0x00416C40: nop

    // 0x00416C44: sw          $zero, 0x1C8($a0)
    MEM_W(0X1C8, ctx->r4) = 0;
    // 0x00416C48: sw          $zero, 0x1CC($a0)
    MEM_W(0X1CC, ctx->r4) = 0;
L_00416C4C:
    // 0x00416C4C: jr          $ra
    // 0x00416C50: nop

    return;
    // 0x00416C50: nop

;}
RECOMP_FUNC void func_0045A448(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0045A448: lui         $t0, 0x800F
    ctx->r8 = S32(0X800F << 16);
    // 0x0045A44C: addiu       $t0, $t0, 0x7078
    ctx->r8 = ADD32(ctx->r8, 0X7078);
    // 0x0045A450: addiu       $a0, $a0, 0x520
    ctx->r4 = ADD32(ctx->r4, 0X520);
    // 0x0045A454: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x0045A458: lw          $v0, 0x201C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X201C);
    // 0x0045A45C: lui         $t1, 0x8012
    ctx->r9 = S32(0X8012 << 16);
    // 0x0045A460: lbu         $t1, -0x53A8($t1)
    ctx->r9 = MEM_BU(ctx->r9, -0X53A8);
    // 0x0045A464: addiu       $v1, $v0, 0x18
    ctx->r3 = ADD32(ctx->r2, 0X18);
    // 0x0045A468: addiu       $v0, $v0, 0x4F8
    ctx->r2 = ADD32(ctx->r2, 0X4F8);
L_0045A46C:
    // 0x0045A46C: lw          $t2, 0x0($v1)
    ctx->r10 = MEM_W(ctx->r3, 0X0);
    // 0x0045A470: lw          $t3, 0x4($v1)
    ctx->r11 = MEM_W(ctx->r3, 0X4);
    // 0x0045A474: lw          $t4, 0x8($v1)
    ctx->r12 = MEM_W(ctx->r3, 0X8);
    // 0x0045A478: lw          $t5, 0xC($v1)
    ctx->r13 = MEM_W(ctx->r3, 0XC);
    // 0x0045A47C: sw          $t2, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r10;
    // 0x0045A480: sw          $t3, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r11;
    // 0x0045A484: sw          $t4, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r12;
    // 0x0045A488: sw          $t5, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->r13;
    // 0x0045A48C: addiu       $v1, $v1, 0x10
    ctx->r3 = ADD32(ctx->r3, 0X10);
    // 0x0045A490: bne         $v1, $v0, L_0045A46C
    if (ctx->r3 != ctx->r2) {
        // 0x0045A494: addiu       $a0, $a0, 0x10
        ctx->r4 = ADD32(ctx->r4, 0X10);
            goto L_0045A46C;
    }
    // 0x0045A494: addiu       $a0, $a0, 0x10
    ctx->r4 = ADD32(ctx->r4, 0X10);
    // 0x0045A498: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x0045A49C: lw          $v0, 0x201C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X201C);
    // 0x0045A4A0: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x0045A4A4: addiu       $a1, $a1, -0x5528
    ctx->r5 = ADD32(ctx->r5, -0X5528);
    // 0x0045A4A8: lw          $t2, 0x0($v1)
    ctx->r10 = MEM_W(ctx->r3, 0X0);
    // 0x0045A4AC: lw          $t3, 0x4($v1)
    ctx->r11 = MEM_W(ctx->r3, 0X4);
    // 0x0045A4B0: sw          $t2, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r10;
    // 0x0045A4B4: sw          $t3, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r11;
    // 0x0045A4B8: addiu       $a0, $v0, 0x500
    ctx->r4 = ADD32(ctx->r2, 0X500);
    // 0x0045A4BC: addiu       $v0, $v0, 0x680
    ctx->r2 = ADD32(ctx->r2, 0X680);
L_0045A4C0:
    // 0x0045A4C0: lw          $t2, 0x0($a0)
    ctx->r10 = MEM_W(ctx->r4, 0X0);
    // 0x0045A4C4: lw          $t3, 0x4($a0)
    ctx->r11 = MEM_W(ctx->r4, 0X4);
    // 0x0045A4C8: lw          $t4, 0x8($a0)
    ctx->r12 = MEM_W(ctx->r4, 0X8);
    // 0x0045A4CC: lw          $t5, 0xC($a0)
    ctx->r13 = MEM_W(ctx->r4, 0XC);
    // 0x0045A4D0: sw          $t2, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r10;
    // 0x0045A4D4: sw          $t3, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r11;
    // 0x0045A4D8: sw          $t4, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->r12;
    // 0x0045A4DC: sw          $t5, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->r13;
    // 0x0045A4E0: addiu       $a0, $a0, 0x10
    ctx->r4 = ADD32(ctx->r4, 0X10);
    // 0x0045A4E4: bne         $a0, $v0, L_0045A4C0
    if (ctx->r4 != ctx->r2) {
        // 0x0045A4E8: addiu       $a1, $a1, 0x10
        ctx->r5 = ADD32(ctx->r5, 0X10);
            goto L_0045A4C0;
    }
    // 0x0045A4E8: addiu       $a1, $a1, 0x10
    ctx->r5 = ADD32(ctx->r5, 0X10);
    // 0x0045A4EC: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x0045A4F0: lw          $v1, 0x201C($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X201C);
    // 0x0045A4F4: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x0045A4F8: addiu       $v0, $v0, -0x5350
    ctx->r2 = ADD32(ctx->r2, -0X5350);
    // 0x0045A4FC: lw          $t2, 0x0($a0)
    ctx->r10 = MEM_W(ctx->r4, 0X0);
    // 0x0045A500: sw          $t2, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r10;
    // 0x0045A504: lw          $a0, -0x1D4($v0)
    ctx->r4 = MEM_W(ctx->r2, -0X1D4);
    // 0x0045A508: lwc1        $f0, 0x8($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X8);
    // 0x0045A50C: swc1        $f0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f0.u32l;
    // 0x0045A510: lwc1        $f0, 0xC($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0XC);
    // 0x0045A514: lui         $a3, 0x800F
    ctx->r7 = S32(0X800F << 16);
    // 0x0045A518: addiu       $a3, $a3, -0x4540
    ctx->r7 = ADD32(ctx->r7, -0X4540);
    // 0x0045A51C: swc1        $f0, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f0.u32l;
    // 0x0045A520: lwc1        $f0, 0x10($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X10);
    // 0x0045A524: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x0045A528: swc1        $f0, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f0.u32l;
    // 0x0045A52C: lwc1        $f0, 0x14($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X14);
    // 0x0045A530: lw          $a1, 0x30($t0)
    ctx->r5 = MEM_W(ctx->r8, 0X30);
    // 0x0045A534: addiu       $v1, $v1, 0x684
    ctx->r3 = ADD32(ctx->r3, 0X684);
    // 0x0045A538: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x0045A53C: sw          $a0, 0x60($at)
    MEM_W(0X60, ctx->r1) = ctx->r4;
    // 0x0045A540: sb          $t1, -0x58($v0)
    MEM_B(-0X58, ctx->r2) = ctx->r9;
    // 0x0045A544: blez        $a1, L_0045A56C
    if (SIGNED(ctx->r5) <= 0) {
        // 0x0045A548: swc1        $f0, 0xC($v0)
        MEM_W(0XC, ctx->r2) = ctx->f0.u32l;
            goto L_0045A56C;
    }
    // 0x0045A548: swc1        $f0, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f0.u32l;
L_0045A54C:
    // 0x0045A54C: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x0045A550: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x0045A554: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x0045A558: sb          $v0, 0x0($a3)
    MEM_B(0X0, ctx->r7) = ctx->r2;
    // 0x0045A55C: lw          $v0, 0x30($t0)
    ctx->r2 = MEM_W(ctx->r8, 0X30);
    // 0x0045A560: slt         $v0, $a2, $v0
    ctx->r2 = SIGNED(ctx->r6) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x0045A564: bne         $v0, $zero, L_0045A54C
    if (ctx->r2 != 0) {
        // 0x0045A568: addiu       $a3, $a3, 0x1
        ctx->r7 = ADD32(ctx->r7, 0X1);
            goto L_0045A54C;
    }
    // 0x0045A568: addiu       $a3, $a3, 0x1
    ctx->r7 = ADD32(ctx->r7, 0X1);
L_0045A56C:
    // 0x0045A56C: jr          $ra
    // 0x0045A570: nop

    return;
    // 0x0045A570: nop

;}
RECOMP_FUNC void func_0020E428(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0020E428: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x0020E42C: sdc1        $f21, 0x48($sp)
    CHECK_FR(ctx, 21);
    SD(ctx->f21.u64, 0X48, ctx->r29);
    // 0x0020E430: mtc1        $a2, $f21
    ctx->f_odd[(21 - 1) * 2] = ctx->r6;
    // 0x0020E434: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x0020E438: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x0020E43C: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x0020E440: sw          $s2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r18;
    // 0x0020E444: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x0020E448: sdc1        $f20, 0x40($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X40, ctx->r29);
    // 0x0020E44C: lwc1        $f0, 0x0($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X0);
    // 0x0020E450: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x0020E454: jal         0x002113A4
    // 0x0020E458: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    func_002113A4(rdram, ctx);
        goto after_0;
    // 0x0020E458: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    after_0:
    // 0x0020E45C: lui         $v1, 0x68DB
    ctx->r3 = S32(0X68DB << 16);
    // 0x0020E460: ori         $v1, $v1, 0x8BAD
    ctx->r3 = ctx->r3 | 0X8BAD;
    // 0x0020E464: mult        $v0, $v1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x0020E468: sra         $v1, $v0, 31
    ctx->r3 = S32(SIGNED(ctx->r2) >> 31);
    // 0x0020E46C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0020E470: lwc1        $f1, 0x5524($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X5524);
    // 0x0020E474: mfhi        $a3
    ctx->r7 = hi;
    // 0x0020E478: sra         $a0, $a3, 13
    ctx->r4 = S32(SIGNED(ctx->r7) >> 13);
    // 0x0020E47C: subu        $a0, $a0, $v1
    ctx->r4 = SUB32(ctx->r4, ctx->r3);
    // 0x0020E480: sll         $v1, $a0, 2
    ctx->r3 = S32(ctx->r4 << 2);
    // 0x0020E484: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x0020E488: sll         $v1, $v1, 3
    ctx->r3 = S32(ctx->r3 << 3);
    // 0x0020E48C: subu        $v1, $v1, $a0
    ctx->r3 = SUB32(ctx->r3, ctx->r4);
    // 0x0020E490: sll         $v1, $v1, 4
    ctx->r3 = S32(ctx->r3 << 4);
    // 0x0020E494: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x0020E498: sll         $v1, $v1, 5
    ctx->r3 = S32(ctx->r3 << 5);
    // 0x0020E49C: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x0020E4A0: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x0020E4A4: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x0020E4A8: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x0020E4AC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0020E4B0: lwc1        $f1, 0x5528($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X5528);
    // 0x0020E4B4: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0020E4B8: lwc1        $f1, 0x10($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x0020E4BC: mul.s       $f1, $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f1.fl);
    // 0x0020E4C0: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    // 0x0020E4C4: lwc1        $f0, 0x8($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X8);
    // 0x0020E4C8: addiu       $s0, $sp, 0x10
    ctx->r16 = ADD32(ctx->r29, 0X10);
    // 0x0020E4CC: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    // 0x0020E4D0: lwc1        $f0, 0x4($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X4);
    // 0x0020E4D4: mul.s       $f0, $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x0020E4D8: lwc1        $f12, 0x8($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X8);
    // 0x0020E4DC: mul.s       $f12, $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x0020E4E0: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x0020E4E4: jal         0x00298470
    // 0x0020E4E8: add.s       $f12, $f1, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = ctx->f1.fl + ctx->f12.fl;
    func_00298470(rdram, ctx);
        goto after_1;
    // 0x0020E4E8: add.s       $f12, $f1, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = ctx->f1.fl + ctx->f12.fl;
    after_1:
    // 0x0020E4EC: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x0020E4F0: mov.s       $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    ctx->f1.fl = ctx->f0.fl;
    // 0x0020E4F4: c.eq.s      $f1, $f20
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f1.fl == ctx->f20.fl;
    // 0x0020E4F8: nop

    // 0x0020E4FC: bc1t        L_0020E534
    if (c1cs) {
        // 0x0020E500: nop
    
            goto L_0020E534;
    }
    // 0x0020E500: nop

    // 0x0020E504: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0020E508: lwc1        $f2, 0x552C($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X552C);
    // 0x0020E50C: lwc1        $f0, 0x10($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X10);
    // 0x0020E510: div.s       $f2, $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f2.fl = DIV_S(ctx->f2.fl, ctx->f1.fl);
    // 0x0020E514: mul.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f2.fl);
    // 0x0020E518: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    // 0x0020E51C: lwc1        $f1, 0x4($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X4);
    // 0x0020E520: mul.s       $f1, $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f2.fl);
    // 0x0020E524: lwc1        $f0, 0x8($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X8);
    // 0x0020E528: mul.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f2.fl);
    // 0x0020E52C: swc1        $f1, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f_odd[(1 - 1) * 2];
    // 0x0020E530: swc1        $f0, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f0.u32l;
L_0020E534:
    // 0x0020E534: lwc1        $f12, 0x0($s1)
    ctx->f12.u32l = MEM_W(ctx->r17, 0X0);
    // 0x0020E538: mul.s       $f12, $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x0020E53C: lwc1        $f1, 0x4($s1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r17, 0X4);
    // 0x0020E540: mul.s       $f1, $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f1.fl);
    // 0x0020E544: lwc1        $f0, 0x8($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X8);
    // 0x0020E548: mul.s       $f0, $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x0020E54C: add.s       $f12, $f12, $f1
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f1.fl;
    // 0x0020E550: jal         0x00298470
    // 0x0020E554: add.s       $f12, $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f0.fl;
    func_00298470(rdram, ctx);
        goto after_2;
    // 0x0020E554: add.s       $f12, $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f0.fl;
    after_2:
    // 0x0020E558: c.eq.s      $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f0.fl == ctx->f20.fl;
    // 0x0020E55C: nop

    // 0x0020E560: bc1t        L_0020E598
    if (c1cs) {
        // 0x0020E564: nop
    
            goto L_0020E598;
    }
    // 0x0020E564: nop

    // 0x0020E568: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0020E56C: lwc1        $f1, 0x5530($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X5530);
    // 0x0020E570: lwc1        $f3, 0x0($s1)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r17, 0X0);
    // 0x0020E574: div.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = DIV_S(ctx->f1.fl, ctx->f0.fl);
    // 0x0020E578: mul.s       $f3, $f3, $f1
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f3.fl = MUL_S(ctx->f3.fl, ctx->f1.fl);
    // 0x0020E57C: lwc1        $f2, 0x4($s1)
    ctx->f2.u32l = MEM_W(ctx->r17, 0X4);
    // 0x0020E580: mul.s       $f2, $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f1.fl);
    // 0x0020E584: lwc1        $f0, 0x8($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X8);
    // 0x0020E588: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0020E58C: swc1        $f3, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->f_odd[(3 - 1) * 2];
    // 0x0020E590: swc1        $f2, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->f2.u32l;
    // 0x0020E594: swc1        $f0, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->f0.u32l;
L_0020E598:
    // 0x0020E598: lwc1        $f0, 0x10($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X10);
    // 0x0020E59C: lwc1        $f1, 0x0($s1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r17, 0X0);
    // 0x0020E5A0: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x0020E5A4: mul.s       $f0, $f21, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f21.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f21.fl, ctx->f0.fl);
    // 0x0020E5A8: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x0020E5AC: swc1        $f1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    // 0x0020E5B0: lwc1        $f0, 0x4($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X4);
    // 0x0020E5B4: lwc1        $f1, 0x4($s1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r17, 0X4);
    // 0x0020E5B8: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x0020E5BC: mul.s       $f0, $f21, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f21.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f21.fl, ctx->f0.fl);
    // 0x0020E5C0: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x0020E5C4: swc1        $f1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    // 0x0020E5C8: lwc1        $f0, 0x8($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X8);
    // 0x0020E5CC: lwc1        $f1, 0x8($s1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r17, 0X8);
    // 0x0020E5D0: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x0020E5D4: mul.s       $f0, $f21, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f21.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f21.fl, ctx->f0.fl);
    // 0x0020E5D8: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x0020E5DC: addu        $v0, $s2, $zero
    ctx->r2 = ADD32(ctx->r18, 0);
    // 0x0020E5E0: swc1        $f1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    // 0x0020E5E4: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x0020E5E8: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x0020E5EC: lw          $t2, 0x28($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X28);
    // 0x0020E5F0: sw          $t0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r8;
    // 0x0020E5F4: sw          $t1, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r9;
    // 0x0020E5F8: sw          $t2, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r10;
    // 0x0020E5FC: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x0020E600: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x0020E604: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x0020E608: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x0020E60C: ldc1        $f21, 0x48($sp)
    CHECK_FR(ctx, 21);
    ctx->f21.u64 = LD(ctx->r29, 0X48);
    // 0x0020E610: ldc1        $f20, 0x40($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X40);
    // 0x0020E614: jr          $ra
    // 0x0020E618: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x0020E618: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_00426E3C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00426E3C: addiu       $a2, $zero, 0x7E
    ctx->r6 = ADD32(0, 0X7E);
    // 0x00426E40: addiu       $v1, $zero, -0x1
    ctx->r3 = ADD32(0, -0X1);
L_00426E44:
    // 0x00426E44: lbu         $v0, 0x0($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X0);
    // 0x00426E48: beq         $v0, $a2, L_00426E64
    if (ctx->r2 == ctx->r6) {
            // 0x00426E4C: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    func_00426E64(rdram, ctx);
    return;
    }
    // 0x00426E4C: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x00426E50: addiu       $a1, $a1, -0x1
    ctx->r5 = ADD32(ctx->r5, -0X1);
    // 0x00426E54: bne         $a1, $v1, L_00426E44
    if (ctx->r5 != ctx->r3) {
        // 0x00426E58: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_00426E44;
    }
    // 0x00426E58: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x00426E5C: jr          $ra
    // 0x00426E60: nop

    return;
    // 0x00426E60: nop

;}
RECOMP_FUNC void func_0027AE00(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0027AE00: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0027AE04: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0027AE08: lw          $v0, 0x6D54($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X6D54);
    // 0x0027AE0C: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x0027AE10: beq         $v0, $zero, L_0027AE34
    if (ctx->r2 == 0) {
        // 0x0027AE14: sw          $ra, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r31;
            goto L_0027AE34;
    }
    // 0x0027AE14: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x0027AE18: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x0027AE1C: addiu       $a0, $a0, 0x7078
    ctx->r4 = ADD32(ctx->r4, 0X7078);
    // 0x0027AE20: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x0027AE24: jal         0x00224DF4
    // 0x0027AE28: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_00224DF4(rdram, ctx);
        goto after_0;
    // 0x0027AE28: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_0:
    // 0x0027AE2C: j           L_0027AE38
    // 0x0027AE30: nop

        goto L_0027AE38;
    // 0x0027AE30: nop

L_0027AE34:
    // 0x0027AE34: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_0027AE38:
    // 0x0027AE38: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x0027AE3C: jr          $ra
    // 0x0027AE40: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0027AE40: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00272278(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00272278: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x0027227C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00272280: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x00272284: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x00272288: addu        $s4, $a1, $zero
    ctx->r20 = ADD32(ctx->r5, 0);
    // 0x0027228C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00272290: addiu       $s1, $s0, 0x10
    ctx->r17 = ADD32(ctx->r16, 0X10);
    // 0x00272294: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x00272298: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x0027229C: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x002722A0: sdc1        $f21, 0x30($sp)
    CHECK_FR(ctx, 21);
    SD(ctx->f21.u64, 0X30, ctx->r29);
    // 0x002722A4: sdc1        $f20, 0x28($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X28, ctx->r29);
    // 0x002722A8: lw          $v0, 0xB0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XB0);
    // 0x002722AC: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x002722B0: lwc1        $f0, -0x7EF0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X7EF0);
    // 0x002722B4: lw          $a0, 0xA8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XA8);
    // 0x002722B8: lw          $s3, 0x2B88($v0)
    ctx->r19 = MEM_W(ctx->r2, 0X2B88);
    // 0x002722BC: slti        $v0, $a0, 0x100
    ctx->r2 = SIGNED(ctx->r4) < 0X100 ? 1 : 0;
    // 0x002722C0: beq         $v0, $zero, L_002722FC
    if (ctx->r2 == 0) {
        // 0x002722C4: swc1        $f0, 0xC8($s0)
        MEM_W(0XC8, ctx->r16) = ctx->f0.u32l;
            goto L_002722FC;
    }
    // 0x002722C4: swc1        $f0, 0xC8($s0)
    MEM_W(0XC8, ctx->r16) = ctx->f0.u32l;
    // 0x002722C8: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
    // 0x002722CC: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x002722D0: sll         $a0, $v1, 3
    ctx->r4 = S32(ctx->r3 << 3);
L_002722D4:
    // 0x002722D4: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x002722D8: addu        $at, $at, $a0
    ctx->r1 = ADD32(ctx->r1, ctx->r4);
    // 0x002722DC: lwc1        $f0, 0x2750($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X2750);
    // 0x002722E0: trunc.w.s   $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x002722E4: mfc1        $v0, $f4
    ctx->r2 = (int32_t)ctx->f4.u32l;
    // 0x002722E8: beq         $a1, $v0, L_00272374
    if (ctx->r5 == ctx->r2) {
        // 0x002722EC: addiu       $v1, $v1, 0x1
        ctx->r3 = ADD32(ctx->r3, 0X1);
            goto L_00272374;
    }
    // 0x002722EC: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x002722F0: slti        $v0, $v1, 0x1F
    ctx->r2 = SIGNED(ctx->r3) < 0X1F ? 1 : 0;
    // 0x002722F4: bne         $v0, $zero, L_002722D4
    if (ctx->r2 != 0) {
        // 0x002722F8: sll         $a0, $v1, 3
        ctx->r4 = S32(ctx->r3 << 3);
            goto L_002722D4;
    }
    // 0x002722F8: sll         $a0, $v1, 3
    ctx->r4 = S32(ctx->r3 << 3);
L_002722FC:
    // 0x002722FC: jal         0x00284188
    // 0x00272300: nop

    func_00284188(rdram, ctx);
        goto after_0;
    // 0x00272300: nop

    after_0:
    // 0x00272304: beq         $v0, $zero, L_00272320
    if (ctx->r2 == 0) {
        // 0x00272308: nop
    
            goto L_00272320;
    }
    // 0x00272308: nop

    // 0x0027230C: lwc1        $f0, 0xC8($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0XC8);
    // 0x00272310: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00272314: lwc1        $f1, -0x7EEC($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, -0X7EEC);
    // 0x00272318: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0027231C: swc1        $f0, 0xC8($s0)
    MEM_W(0XC8, ctx->r16) = ctx->f0.u32l;
L_00272320:
    // 0x00272320: lh          $a1, 0x8($s4)
    ctx->r5 = MEM_H(ctx->r20, 0X8);
    // 0x00272324: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x00272328: beq         $a1, $v0, L_00272388
    if (ctx->r5 == ctx->r2) {
        // 0x0027232C: addiu       $s2, $s0, 0x74
        ctx->r18 = ADD32(ctx->r16, 0X74);
            goto L_00272388;
    }
    // 0x0027232C: addiu       $s2, $s0, 0x74
    ctx->r18 = ADD32(ctx->r16, 0X74);
    // 0x00272330: lw          $a0, 0xB0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XB0);
    // 0x00272334: jal         0x00271778
    // 0x00272338: nop

    func_00271778(rdram, ctx);
        goto after_1;
    // 0x00272338: nop

    after_1:
    // 0x0027233C: lwl         $a2, 0x0($v0)
    ctx->r6 = do_lwl(rdram, ctx->r6, ctx->r2, 0X0);
    // 0x00272340: lwr         $a2, 0x3($v0)
    ctx->r6 = do_lwr(rdram, ctx->r6, ctx->r2, 0X3);
    // 0x00272344: lwl         $a3, 0x4($v0)
    ctx->r7 = do_lwl(rdram, ctx->r7, ctx->r2, 0X4);
    // 0x00272348: lwr         $a3, 0x7($v0)
    ctx->r7 = do_lwr(rdram, ctx->r7, ctx->r2, 0X7);
    // 0x0027234C: lwl         $t0, 0x8($v0)
    ctx->r8 = do_lwl(rdram, ctx->r8, ctx->r2, 0X8);
    // 0x00272350: lwr         $t0, 0xB($v0)
    ctx->r8 = do_lwr(rdram, ctx->r8, ctx->r2, 0XB);
    // 0x00272354: swl         $a2, 0x74($s0)
    do_swl(rdram, 0X74, ctx->r16, ctx->r6);
    // 0x00272358: swr         $a2, 0x77($s0)
    do_swr(rdram, 0X77, ctx->r16, ctx->r6);
    // 0x0027235C: swl         $a3, 0x78($s0)
    do_swl(rdram, 0X78, ctx->r16, ctx->r7);
    // 0x00272360: swr         $a3, 0x7B($s0)
    do_swr(rdram, 0X7B, ctx->r16, ctx->r7);
    // 0x00272364: swl         $t0, 0x7C($s0)
    do_swl(rdram, 0X7C, ctx->r16, ctx->r8);
    // 0x00272368: swr         $t0, 0x7F($s0)
    do_swr(rdram, 0X7F, ctx->r16, ctx->r8);
    // 0x0027236C: j           L_002723A0
    // 0x00272370: nop

        goto L_002723A0;
    // 0x00272370: nop

L_00272374:
    // 0x00272374: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00272378: addu        $at, $at, $a0
    ctx->r1 = ADD32(ctx->r1, ctx->r4);
    // 0x0027237C: lwc1        $f0, 0x2754($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X2754);
    // 0x00272380: j           L_002722FC
    // 0x00272384: swc1        $f0, 0xC8($s0)
    MEM_W(0XC8, ctx->r16) = ctx->f0.u32l;
        goto L_002722FC;
    // 0x00272384: swc1        $f0, 0xC8($s0)
    MEM_W(0XC8, ctx->r16) = ctx->f0.u32l;
L_00272388:
    // 0x00272388: lb          $v0, 0xF($s4)
    ctx->r2 = MEM_B(ctx->r20, 0XF);
    // 0x0027238C: mtc1        $v0, $f12
    ctx->f12.u32l = ctx->r2;
    // 0x00272390: cvt.s.w     $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    ctx->f12.fl = CVT_S_W(ctx->f12.u32l);
    // 0x00272394: jal         0x0026D200
    // 0x00272398: nop

    func_0026D200(rdram, ctx);
        goto after_2;
    // 0x00272398: nop

    after_2:
    // 0x0027239C: sh          $v0, 0x74($s0)
    MEM_H(0X74, ctx->r16) = ctx->r2;
L_002723A0:
    // 0x002723A0: lhu         $v0, 0x6($s4)
    ctx->r2 = MEM_HU(ctx->r20, 0X6);
    // 0x002723A4: andi        $v0, $v0, 0x800
    ctx->r2 = ctx->r2 & 0X800;
    // 0x002723A8: bne         $v0, $zero, L_002724FC
    if (ctx->r2 != 0) {
        // 0x002723AC: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_002724FC;
    }
    // 0x002723AC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x002723B0: lw          $v1, 0xC0($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XC0);
    // 0x002723B4: beq         $v1, $v0, L_002724FC
    if (ctx->r3 == ctx->r2) {
        // 0x002723B8: nop
    
            goto L_002724FC;
    }
    // 0x002723B8: nop

    // 0x002723BC: lw          $v0, 0xB0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XB0);
    // 0x002723C0: lw          $v0, 0x2B98($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2B98);
    // 0x002723C4: beq         $v0, $zero, L_002724FC
    if (ctx->r2 == 0) {
        // 0x002723C8: nop
    
            goto L_002724FC;
    }
    // 0x002723C8: nop

    // 0x002723CC: lbu         $v0, 0x0($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0X0);
    // 0x002723D0: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x002723D4: lwc1        $f1, -0x7EE8($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, -0X7EE8);
    // 0x002723D8: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x002723DC: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x002723E0: mul.s       $f20, $f0, $f1
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f20.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x002723E4: lbu         $v0, 0x1($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0X1);
    // 0x002723E8: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x002723EC: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x002723F0: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x002723F4: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x002723F8: lwc1        $f2, -0x7EE4($at)
    ctx->f2.u32l = MEM_W(ctx->r1, -0X7EE4);
    // 0x002723FC: c.eq.s      $f20, $f2
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f20.fl == ctx->f2.fl;
    // 0x00272400: nop

    // 0x00272404: bc1t        L_00272428
    if (c1cs) {
        // 0x00272408: mov.s       $f21, $f2
        CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 2);
    ctx->f21.fl = ctx->f2.fl;
            goto L_00272428;
    }
    // 0x00272408: mov.s       $f21, $f2
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 2);
    ctx->f21.fl = ctx->f2.fl;
    // 0x0027240C: c.eq.s      $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f0.fl == ctx->f20.fl;
    // 0x00272410: nop

    // 0x00272414: bc1t        L_00272428
    if (c1cs) {
        // 0x00272418: mov.s       $f21, $f20
        CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 20);
    ctx->f21.fl = ctx->f20.fl;
            goto L_00272428;
    }
    // 0x00272418: mov.s       $f21, $f20
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 20);
    ctx->f21.fl = ctx->f20.fl;
    // 0x0027241C: jal         0x0021149C
    // 0x00272420: sub.s       $f12, $f0, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f12.fl = ctx->f0.fl - ctx->f20.fl;
    func_0021149C(rdram, ctx);
        goto after_3;
    // 0x00272420: sub.s       $f12, $f0, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f12.fl = ctx->f0.fl - ctx->f20.fl;
    after_3:
    // 0x00272424: add.s       $f21, $f20, $f0
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f21.fl = ctx->f20.fl + ctx->f0.fl;
L_00272428:
    // 0x00272428: lw          $v0, 0xB0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XB0);
    // 0x0027242C: lw          $v0, 0x2B98($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2B98);
    // 0x00272430: lwc1        $f2, 0x34($s1)
    ctx->f2.u32l = MEM_W(ctx->r17, 0X34);
    // 0x00272434: lwc1        $f0, 0x114($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X114);
    // 0x00272438: sub.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f2.fl - ctx->f0.fl;
    // 0x0027243C: addiu       $v1, $s1, 0x34
    ctx->r3 = ADD32(ctx->r17, 0X34);
    // 0x00272440: mul.s       $f2, $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x00272444: lwc1        $f3, 0x4($v1)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r3, 0X4);
    // 0x00272448: addiu       $v0, $v0, 0x114
    ctx->r2 = ADD32(ctx->r2, 0X114);
    // 0x0027244C: lwc1        $f0, 0x4($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X4);
    // 0x00272450: sub.s       $f3, $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f3.fl = ctx->f3.fl - ctx->f0.fl;
    // 0x00272454: mul.s       $f3, $f3, $f3
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f3.fl = MUL_S(ctx->f3.fl, ctx->f3.fl);
    // 0x00272458: lwc1        $f1, 0x8($v0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r2, 0X8);
    // 0x0027245C: lwc1        $f0, 0x8($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X8);
    // 0x00272460: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x00272464: mul.s       $f0, $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x00272468: add.s       $f2, $f2, $f3
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f3.fl;
    // 0x0027246C: add.s       $f0, $f2, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f2.fl + ctx->f0.fl;
    // 0x00272470: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00272474: lwc1        $f3, 0x2A30($at)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r1, 0X2A30);
    // 0x00272478: c.le.s      $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f3.fl <= ctx->f0.fl;
    // 0x0027247C: mtc1        $zero, $f1
    ctx->f_odd[(1 - 1) * 2] = 0;
    // 0x00272480: bc1t        L_00272498
    if (c1cs) {
        // 0x00272484: nop
    
            goto L_00272498;
    }
    // 0x00272484: nop

    // 0x00272488: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0027248C: lwc1        $f1, -0x7EE0($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, -0X7EE0);
    // 0x00272490: div.s       $f0, $f0, $f3
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f0.fl = DIV_S(ctx->f0.fl, ctx->f3.fl);
    // 0x00272494: sub.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl - ctx->f0.fl;
L_00272498:
    // 0x00272498: lb          $v1, 0x44($s1)
    ctx->r3 = MEM_B(ctx->r17, 0X44);
    // 0x0027249C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x002724A0: beq         $v1, $v0, L_002724DC
    if (ctx->r3 == ctx->r2) {
        // 0x002724A4: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_002724DC;
    }
    // 0x002724A4: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x002724A8: beq         $v0, $zero, L_002724C0
    if (ctx->r2 == 0) {
        // 0x002724AC: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_002724C0;
    }
    // 0x002724AC: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x002724B0: beq         $v1, $zero, L_002724D0
    if (ctx->r3 == 0) {
        // 0x002724B4: nop
    
            goto L_002724D0;
    }
    // 0x002724B4: nop

    // 0x002724B8: j           L_002724EC
    // 0x002724BC: nop

        goto L_002724EC;
    // 0x002724BC: nop

L_002724C0:
    // 0x002724C0: bne         $v1, $v0, L_002724EC
    if (ctx->r3 != ctx->r2) {
        // 0x002724C4: nop
    
            goto L_002724EC;
    }
    // 0x002724C4: nop

    // 0x002724C8: j           L_002724F4
    // 0x002724CC: swc1        $f1, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->f_odd[(1 - 1) * 2];
        goto L_002724F4;
    // 0x002724CC: swc1        $f1, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->f_odd[(1 - 1) * 2];
L_002724D0:
    // 0x002724D0: mul.s       $f1, $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f1.fl);
    // 0x002724D4: nop

    // 0x002724D8: mul.s       $f1, $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f1.fl);
L_002724DC:
    // 0x002724DC: nop

    // 0x002724E0: mul.s       $f1, $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f1.fl);
    // 0x002724E4: j           L_002724F4
    // 0x002724E8: swc1        $f1, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->f_odd[(1 - 1) * 2];
        goto L_002724F4;
    // 0x002724E8: swc1        $f1, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->f_odd[(1 - 1) * 2];
L_002724EC:
    // 0x002724EC: mtc1        $zero, $f1
    ctx->f_odd[(1 - 1) * 2] = 0;
    // 0x002724F0: swc1        $f1, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->f_odd[(1 - 1) * 2];
L_002724F4:
    // 0x002724F4: j           L_0027250C
    // 0x002724F8: swc1        $f1, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->f_odd[(1 - 1) * 2];
        goto L_0027250C;
    // 0x002724F8: swc1        $f1, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->f_odd[(1 - 1) * 2];
L_002724FC:
    // 0x002724FC: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00272500: lwc1        $f21, -0x7EDC($at)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r1, -0X7EDC);
    // 0x00272504: swc1        $f21, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->f_odd[(21 - 1) * 2];
    // 0x00272508: swc1        $f21, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->f_odd[(21 - 1) * 2];
L_0027250C:
    // 0x0027250C: lhu         $v0, 0x6($s4)
    ctx->r2 = MEM_HU(ctx->r20, 0X6);
    // 0x00272510: andi        $v0, $v0, 0x4
    ctx->r2 = ctx->r2 & 0X4;
    // 0x00272514: beq         $v0, $zero, L_00272650
    if (ctx->r2 == 0) {
        // 0x00272518: nop
    
            goto L_00272650;
    }
    // 0x00272518: nop

    // 0x0027251C: lhu         $a0, 0x0($s2)
    ctx->r4 = MEM_HU(ctx->r18, 0X0);
    // 0x00272520: jal         0x0026D210
    // 0x00272524: nop

    func_0026D210(rdram, ctx);
        goto after_4;
    // 0x00272524: nop

    after_4:
    // 0x00272528: trunc.w.s   $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x0027252C: swc1        $f4, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->f4.u32l;
    // 0x00272530: lhu         $a0, 0x2($s2)
    ctx->r4 = MEM_HU(ctx->r18, 0X2);
    // 0x00272534: jal         0x0026D210
    // 0x00272538: nop

    func_0026D210(rdram, ctx);
        goto after_5;
    // 0x00272538: nop

    after_5:
    // 0x0027253C: lhu         $a0, 0x4($s2)
    ctx->r4 = MEM_HU(ctx->r18, 0X4);
    // 0x00272540: jal         0x0026D210
    // 0x00272544: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    func_0026D210(rdram, ctx);
        goto after_6;
    // 0x00272544: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    after_6:
    // 0x00272548: lh          $v0, 0x6($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X6);
    // 0x0027254C: bne         $v0, $zero, L_0027255C
    if (ctx->r2 != 0) {
        // 0x00272550: sub.s       $f20, $f20, $f0
        CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = ctx->f20.fl - ctx->f0.fl;
            goto L_0027255C;
    }
    // 0x00272550: sub.s       $f20, $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = ctx->f20.fl - ctx->f0.fl;
    // 0x00272554: j           L_0027256C
    // 0x00272558: sw          $zero, 0x84($s0)
    MEM_W(0X84, ctx->r16) = 0;
        goto L_0027256C;
    // 0x00272558: sw          $zero, 0x84($s0)
    MEM_W(0X84, ctx->r16) = 0;
L_0027255C:
    // 0x0027255C: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x00272560: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00272564: div.s       $f0, $f20, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = DIV_S(ctx->f20.fl, ctx->f0.fl);
    // 0x00272568: swc1        $f0, 0x84($s0)
    MEM_W(0X84, ctx->r16) = ctx->f0.u32l;
L_0027256C:
    // 0x0027256C: lhu         $a0, 0x2($s2)
    ctx->r4 = MEM_HU(ctx->r18, 0X2);
    // 0x00272570: jal         0x0026D210
    // 0x00272574: nop

    func_0026D210(rdram, ctx);
        goto after_7;
    // 0x00272574: nop

    after_7:
    // 0x00272578: swc1        $f0, 0x80($s0)
    MEM_W(0X80, ctx->r16) = ctx->f0.u32l;
    // 0x0027257C: lhu         $a0, 0x0($s2)
    ctx->r4 = MEM_HU(ctx->r18, 0X0);
    // 0x00272580: jal         0x0026D210
    // 0x00272584: nop

    func_0026D210(rdram, ctx);
        goto after_8;
    // 0x00272584: nop

    after_8:
    // 0x00272588: trunc.w.s   $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x0027258C: mfc1        $v1, $f4
    ctx->r3 = (int32_t)ctx->f4.u32l;
    // 0x00272590: mtc1        $zero, $f1
    ctx->f_odd[(1 - 1) * 2] = 0;
    // 0x00272594: mtc1        $v1, $f0
    ctx->f0.u32l = ctx->r3;
    // 0x00272598: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x0027259C: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x002725A0: nop

    // 0x002725A4: bc1f        L_002725B4
    if (!c1cs) {
        // 0x002725A8: negu        $v0, $v1
        ctx->r2 = SUB32(0, ctx->r3);
            goto L_002725B4;
    }
    // 0x002725A8: negu        $v0, $v1
    ctx->r2 = SUB32(0, ctx->r3);
    // 0x002725AC: j           L_002725B8
    // 0x002725B0: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
        goto L_002725B8;
    // 0x002725B0: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
L_002725B4:
    // 0x002725B4: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
L_002725B8:
    // 0x002725B8: lui         $at, 0x800F
    ctx->r1 = S32(0X800F << 16);
    // 0x002725BC: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x002725C0: lh          $v0, 0x2940($at)
    ctx->r2 = MEM_H(ctx->r1, 0X2940);
    // 0x002725C4: lwc1        $f1, 0x80($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X80);
    // 0x002725C8: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x002725CC: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x002725D0: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x002725D4: trunc.w.s   $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x002725D8: mfc1        $v0, $f4
    ctx->r2 = (int32_t)ctx->f4.u32l;
    // 0x002725DC: mtc1        $v0, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r2;
    // 0x002725E0: cvt.s.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.fl = CVT_S_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x002725E4: mul.s       $f1, $f1, $f21
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f21.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f21.fl);
    // 0x002725E8: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x002725EC: mtc1        $v1, $f0
    ctx->f0.u32l = ctx->r3;
    // 0x002725F0: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x002725F4: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x002725F8: trunc.w.s   $f4, $f1
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 1);
    ctx->f4.u32l = TRUNC_W_S(ctx->f1.fl);
    // 0x002725FC: swc1        $f4, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->f4.u32l;
    // 0x00272600: bc1f        L_00272610
    if (!c1cs) {
        // 0x00272604: negu        $v0, $v1
        ctx->r2 = SUB32(0, ctx->r3);
            goto L_00272610;
    }
    // 0x00272604: negu        $v0, $v1
    ctx->r2 = SUB32(0, ctx->r3);
    // 0x00272608: j           L_00272614
    // 0x0027260C: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
        goto L_00272614;
    // 0x0027260C: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
L_00272610:
    // 0x00272610: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
L_00272614:
    // 0x00272614: lui         $at, 0x800F
    ctx->r1 = S32(0X800F << 16);
    // 0x00272618: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x0027261C: lh          $v0, 0x2940($at)
    ctx->r2 = MEM_H(ctx->r1, 0X2940);
    // 0x00272620: mtc1        $v0, $f12
    ctx->f12.u32l = ctx->r2;
    // 0x00272624: cvt.s.w     $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    ctx->f12.fl = CVT_S_W(ctx->f12.u32l);
    // 0x00272628: mul.s       $f12, $f12, $f21
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f21.fl); 
    ctx->f12.fl = MUL_S(ctx->f12.fl, ctx->f21.fl);
    // 0x0027262C: jal         0x0026D200
    // 0x00272630: nop

    func_0026D200(rdram, ctx);
        goto after_9;
    // 0x00272630: nop

    after_9:
    // 0x00272634: sh          $v0, 0x0($s2)
    MEM_H(0X0, ctx->r18) = ctx->r2;
    // 0x00272638: jal         0x0026D210
    // 0x0027263C: andi        $a0, $v0, 0xFFFF
    ctx->r4 = ctx->r2 & 0XFFFF;
    func_0026D210(rdram, ctx);
        goto after_10;
    // 0x0027263C: andi        $a0, $v0, 0xFFFF
    ctx->r4 = ctx->r2 & 0XFFFF;
    after_10:
    // 0x00272640: trunc.w.s   $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x00272644: swc1        $f4, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->f4.u32l;
    // 0x00272648: j           L_002726B4
    // 0x0027264C: nop

        goto L_002726B4;
    // 0x0027264C: nop

L_00272650:
    // 0x00272650: lhu         $a0, 0x0($s2)
    ctx->r4 = MEM_HU(ctx->r18, 0X0);
    // 0x00272654: jal         0x0026D210
    // 0x00272658: nop

    func_0026D210(rdram, ctx);
        goto after_11;
    // 0x00272658: nop

    after_11:
    // 0x0027265C: trunc.w.s   $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x00272660: mfc1        $v1, $f4
    ctx->r3 = (int32_t)ctx->f4.u32l;
    // 0x00272664: mtc1        $zero, $f1
    ctx->f_odd[(1 - 1) * 2] = 0;
    // 0x00272668: mtc1        $v1, $f0
    ctx->f0.u32l = ctx->r3;
    // 0x0027266C: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00272670: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x00272674: nop

    // 0x00272678: bc1f        L_00272688
    if (!c1cs) {
        // 0x0027267C: negu        $v0, $v1
        ctx->r2 = SUB32(0, ctx->r3);
            goto L_00272688;
    }
    // 0x0027267C: negu        $v0, $v1
    ctx->r2 = SUB32(0, ctx->r3);
    // 0x00272680: j           L_0027268C
    // 0x00272684: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
        goto L_0027268C;
    // 0x00272684: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
L_00272688:
    // 0x00272688: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
L_0027268C:
    // 0x0027268C: lui         $at, 0x800F
    ctx->r1 = S32(0X800F << 16);
    // 0x00272690: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x00272694: lh          $v0, 0x2940($at)
    ctx->r2 = MEM_H(ctx->r1, 0X2940);
    // 0x00272698: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x0027269C: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x002726A0: mul.s       $f0, $f0, $f21
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f21.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f21.fl);
    // 0x002726A4: trunc.w.s   $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x002726A8: mfc1        $v0, $f4
    ctx->r2 = (int32_t)ctx->f4.u32l;
    // 0x002726AC: sw          $v0, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->r2;
    // 0x002726B0: sw          $v0, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->r2;
L_002726B4:
    // 0x002726B4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x002726B8: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x002726BC: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x002726C0: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x002726C4: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x002726C8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x002726CC: ldc1        $f21, 0x30($sp)
    CHECK_FR(ctx, 21);
    ctx->f21.u64 = LD(ctx->r29, 0X30);
    // 0x002726D0: ldc1        $f20, 0x28($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X28);
    // 0x002726D4: jr          $ra
    // 0x002726D8: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x002726D8: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
