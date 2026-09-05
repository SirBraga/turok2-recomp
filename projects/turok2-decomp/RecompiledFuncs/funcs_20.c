#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_00211AF8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00211AF8: lwc1        $f0, 0x0($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X0);
    // 0x00211AFC: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00211B00: lwc1        $f1, 0x6D28($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X6D28);
    // 0x00211B04: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x00211B08: mtc1        $zero, $f1
    ctx->f_odd[(1 - 1) * 2] = 0;
    // 0x00211B0C: c.le.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl <= ctx->f1.fl;
    // 0x00211B10: nop

    // 0x00211B14: bc1t        L_00211B24
    if (c1cs) {
            // 0x00211B18: swc1        $f0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f0.u32l;
    func_00211B24(rdram, ctx);
    return;
    }
    // 0x00211B18: swc1        $f0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f0.u32l;
    // 0x00211B1C: jr          $ra
    // 0x00211B20: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x00211B20: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void func_00424F88(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00424F88: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x00424F8C: lw          $v0, 0xA34($v0)
    ctx->r2 = MEM_W(ctx->r2, 0XA34);
    // 0x00424F90: beq         $v0, $zero, L_00424FA8
    if (ctx->r2 == 0) {
        // 0x00424F94: nop
    
            goto L_00424FA8;
    }
    // 0x00424F94: nop

    // 0x00424F98: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00424F9C: addiu       $v0, $v0, 0x437C
    ctx->r2 = ADD32(ctx->r2, 0X437C);
    // 0x00424FA0: j           L_00424FB4
    // 0x00424FA4: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_00424FB4;
    // 0x00424FA4: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_00424FA8:
    // 0x00424FA8: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00424FAC: addiu       $v0, $v0, 0x436C
    ctx->r2 = ADD32(ctx->r2, 0X436C);
    // 0x00424FB0: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_00424FB4:
    // 0x00424FB4: jr          $ra
    // 0x00424FB8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x00424FB8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
;}
RECOMP_FUNC void func_0028891C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0028891C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00288920: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x00288924: addu        $at, $a0, $at
    ctx->r1 = ADD32(ctx->r4, ctx->r1);
    // 0x00288928: sb          $v0, 0x3FE1($at)
    MEM_B(0X3FE1, ctx->r1) = ctx->r2;
    // 0x0028892C: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x00288930: addu        $at, $a0, $at
    ctx->r1 = ADD32(ctx->r4, ctx->r1);
    // 0x00288934: sw          $zero, 0x3FE4($at)
    MEM_W(0X3FE4, ctx->r1) = 0;
    // 0x00288938: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x0028893C: addu        $at, $a0, $at
    ctx->r1 = ADD32(ctx->r4, ctx->r1);
    // 0x00288940: sb          $zero, 0x3FE0($at)
    MEM_B(0X3FE0, ctx->r1) = 0;
    // 0x00288944: jr          $ra
    // 0x00288948: nop

    return;
    // 0x00288948: nop

;}
RECOMP_FUNC void func_002535E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002535E4: lw          $v0, 0x20($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X20);
    // 0x002535E8: mtc1        $a1, $f0
    ctx->f0.u32l = ctx->r5;
    // 0x002535EC: beq         $v0, $zero, L_00253604
    if (ctx->r2 == 0) {
        // 0x002535F0: nop
    
            goto L_00253604;
    }
    // 0x002535F0: nop

    // 0x002535F4: swc1        $f0, 0xA28($v0)
    MEM_W(0XA28, ctx->r2) = ctx->f0.u32l;
L_002535F8:
    // 0x002535F8: lw          $v0, 0x1320($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1320);
    // 0x002535FC: bnel        $v0, $zero, L_002535F8
    if (ctx->r2 != 0) {
        // 0x00253600: swc1        $f0, 0xA28($v0)
        MEM_W(0XA28, ctx->r2) = ctx->f0.u32l;
            goto L_002535F8;
    }
    goto skip_0;
    // 0x00253600: swc1        $f0, 0xA28($v0)
    MEM_W(0XA28, ctx->r2) = ctx->f0.u32l;
    skip_0:
L_00253604:
    // 0x00253604: jr          $ra
    // 0x00253608: nop

    return;
    // 0x00253608: nop

;}
RECOMP_FUNC void func_00444488(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00444488: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x0044448C: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x00444490: addu        $s2, $a1, $zero
    ctx->r18 = ADD32(ctx->r5, 0);
    // 0x00444494: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x00444498: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x0044449C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x004444A0: lb          $v0, 0xC7($s2)
    ctx->r2 = MEM_B(ctx->r18, 0XC7);
    // 0x004444A4: beq         $v0, $zero, L_0044450C
    if (ctx->r2 == 0) {
        // 0x004444A8: addu        $s1, $a0, $zero
        ctx->r17 = ADD32(ctx->r4, 0);
            goto L_0044450C;
    }
    // 0x004444A8: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x004444AC: lui         $v0, 0x5555
    ctx->r2 = S32(0X5555 << 16);
    // 0x004444B0: lui         $s0, 0x8013
    ctx->r16 = S32(0X8013 << 16);
    // 0x004444B4: addiu       $s0, $s0, -0x490
    ctx->r16 = ADD32(ctx->r16, -0X490);
    // 0x004444B8: lw          $a1, 0x67C($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X67C);
    // 0x004444BC: ori         $v0, $v0, 0x5556
    ctx->r2 = ctx->r2 | 0X5556;
    // 0x004444C0: mult        $a1, $v0
    result = S64(S32(ctx->r5)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x004444C4: sra         $v1, $a1, 31
    ctx->r3 = S32(SIGNED(ctx->r5) >> 31);
    // 0x004444C8: mfhi        $a3
    ctx->r7 = hi;
    // 0x004444CC: subu        $v1, $a3, $v1
    ctx->r3 = SUB32(ctx->r7, ctx->r3);
    // 0x004444D0: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x004444D4: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x004444D8: bne         $a1, $v0, L_004444E8
    if (ctx->r5 != ctx->r2) {
        // 0x004444DC: nop
    
            goto L_004444E8;
    }
    // 0x004444DC: nop

    // 0x004444E0: jal         0x00409A64
    // 0x004444E4: sltiu       $a1, $a1, 0x1
    ctx->r5 = ctx->r5 < 0X1 ? 1 : 0;
    func_00409A64(rdram, ctx);
        goto after_0;
    // 0x004444E4: sltiu       $a1, $a1, 0x1
    ctx->r5 = ctx->r5 < 0X1 ? 1 : 0;
    after_0:
L_004444E8:
    // 0x004444E8: lw          $v0, 0x67C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X67C);
    // 0x004444EC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x004444F0: sw          $v0, 0x67C($s0)
    MEM_W(0X67C, ctx->r16) = ctx->r2;
    // 0x004444F4: slti        $v0, $v0, 0x1F
    ctx->r2 = SIGNED(ctx->r2) < 0X1F ? 1 : 0;
    // 0x004444F8: bne         $v0, $zero, L_0044450C
    if (ctx->r2 != 0) {
        // 0x004444FC: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_0044450C;
    }
    // 0x004444FC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x00444500: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x00444504: jal         0x00243414
    // 0x00444508: addiu       $a2, $zero, 0x11
    ctx->r6 = ADD32(0, 0X11);
    func_00243414(rdram, ctx);
        goto after_1;
    // 0x00444508: addiu       $a2, $zero, 0x11
    ctx->r6 = ADD32(0, 0X11);
    after_1:
L_0044450C:
    // 0x0044450C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x00444510: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x00444514: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00444518: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0044451C: jr          $ra
    // 0x00444520: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00444520: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_00253A1C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00253A1C: sll         $a1, $a1, 2
    ctx->r5 = S32(ctx->r5 << 2);
    // 0x00253A20: lw          $v0, 0x12A4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X12A4);
    // 0x00253A24: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00253A28: addu        $at, $at, $a1
    ctx->r1 = ADD32(ctx->r1, ctx->r5);
    // 0x00253A2C: lw          $a1, -0x9E8($at)
    ctx->r5 = MEM_W(ctx->r1, -0X9E8);
    // 0x00253A30: beq         $v0, $zero, L_00253A64
    if (ctx->r2 == 0) {
        // 0x00253A34: addu        $a3, $zero, $zero
        ctx->r7 = ADD32(0, 0);
            goto L_00253A64;
    }
    // 0x00253A34: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x00253A38: lw          $v1, 0x24($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X24);
    // 0x00253A3C: beq         $v1, $zero, L_00253A68
    if (ctx->r3 == 0) {
        // 0x00253A40: addu        $a2, $a3, $zero
        ctx->r6 = ADD32(ctx->r7, 0);
            goto L_00253A68;
    }
    // 0x00253A40: addu        $a2, $a3, $zero
    ctx->r6 = ADD32(ctx->r7, 0);
    // 0x00253A44: lh          $v0, 0x0($v1)
    ctx->r2 = MEM_H(ctx->r3, 0X0);
    // 0x00253A48: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x00253A4C: addu        $v0, $a0, $v0
    ctx->r2 = ADD32(ctx->r4, ctx->r2);
    // 0x00253A50: lh          $v0, 0x934($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X934);
    // 0x00253A54: blez        $v0, L_00253A68
    if (SIGNED(ctx->r2) <= 0) {
        // 0x00253A58: addu        $v0, $v1, $zero
        ctx->r2 = ADD32(ctx->r3, 0);
            goto L_00253A68;
    }
    // 0x00253A58: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
    // 0x00253A5C: j           L_00253AA4
    // 0x00253A60: nop

        goto L_00253AA4;
    // 0x00253A60: nop

L_00253A64:
    // 0x00253A64: addu        $a2, $a3, $zero
    ctx->r6 = ADD32(ctx->r7, 0);
L_00253A68:
    // 0x00253A68: lw          $v1, 0x20($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X20);
    // 0x00253A6C: beq         $v1, $zero, L_00253AA4
    if (ctx->r3 == 0) {
        // 0x00253A70: addu        $v0, $a3, $zero
        ctx->r2 = ADD32(ctx->r7, 0);
            goto L_00253AA4;
    }
    // 0x00253A70: addu        $v0, $a3, $zero
    ctx->r2 = ADD32(ctx->r7, 0);
    // 0x00253A74: addu        $a3, $v1, $zero
    ctx->r7 = ADD32(ctx->r3, 0);
    // 0x00253A78: lh          $v0, 0x0($v1)
    ctx->r2 = MEM_H(ctx->r3, 0X0);
    // 0x00253A7C: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x00253A80: addu        $v0, $a0, $v0
    ctx->r2 = ADD32(ctx->r4, ctx->r2);
    // 0x00253A84: lh          $v0, 0x934($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X934);
    // 0x00253A88: bgtz        $v0, L_00253AA4
    if (SIGNED(ctx->r2) > 0) {
        // 0x00253A8C: addu        $v0, $a3, $zero
        ctx->r2 = ADD32(ctx->r7, 0);
            goto L_00253AA4;
    }
    // 0x00253A8C: addu        $v0, $a3, $zero
    ctx->r2 = ADD32(ctx->r7, 0);
    // 0x00253A90: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x00253A94: slti        $v0, $a2, 0x3
    ctx->r2 = SIGNED(ctx->r6) < 0X3 ? 1 : 0;
    // 0x00253A98: bne         $v0, $zero, L_00253A68
    if (ctx->r2 != 0) {
        // 0x00253A9C: addiu       $a1, $a1, 0x4
        ctx->r5 = ADD32(ctx->r5, 0X4);
            goto L_00253A68;
    }
    // 0x00253A9C: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
    // 0x00253AA0: addu        $v0, $a3, $zero
    ctx->r2 = ADD32(ctx->r7, 0);
L_00253AA4:
    // 0x00253AA4: bne         $v0, $zero, L_00253AB4
    if (ctx->r2 != 0) {
            // 0x00253AA8: nop

    func_00253AB4(rdram, ctx);
    return;
    }
    // 0x00253AA8: nop

    // 0x00253AAC: jr          $ra
    // 0x00253AB0: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    return;
    // 0x00253AB0: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
;}
RECOMP_FUNC void func_004684B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004684B0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x004684B4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x004684B8: lui         $s0, 0x800F
    ctx->r16 = S32(0X800F << 16);
    // 0x004684BC: addiu       $s0, $s0, 0x56B0
    ctx->r16 = ADD32(ctx->r16, 0X56B0);
    // 0x004684C0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x004684C4: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x004684C8: beq         $v0, $zero, L_00468510
    if (ctx->r2 == 0) {
        // 0x004684CC: nop
    
            goto L_00468510;
    }
    // 0x004684CC: nop

    // 0x004684D0: lw          $v0, 0x350($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X350);
    // 0x004684D4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x004684D8: lui         $at, 0x44
    ctx->r1 = S32(0X44 << 16);
    // 0x004684DC: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x004684E0: lw          $a0, -0x7BF8($at)
    ctx->r4 = MEM_W(ctx->r1, -0X7BF8);
    // 0x004684E4: jal         0x0042EE4C
    // 0x004684E8: nop

    func_0042EE4C(rdram, ctx);
        goto after_0;
    // 0x004684E8: nop

    after_0:
    // 0x004684EC: lw          $v0, 0x350($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X350);
    // 0x004684F0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x004684F4: sw          $v0, 0x350($s0)
    MEM_W(0X350, ctx->r16) = ctx->r2;
    // 0x004684F8: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x004684FC: lui         $at, 0x44
    ctx->r1 = S32(0X44 << 16);
    // 0x00468500: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x00468504: lw          $v0, -0x7BF8($at)
    ctx->r2 = MEM_W(ctx->r1, -0X7BF8);
    // 0x00468508: beql        $v0, $zero, L_00468510
    if (ctx->r2 == 0) {
        // 0x0046850C: sw          $zero, 0x350($s0)
        MEM_W(0X350, ctx->r16) = 0;
            goto L_00468510;
    }
    goto skip_0;
    // 0x0046850C: sw          $zero, 0x350($s0)
    MEM_W(0X350, ctx->r16) = 0;
    skip_0:
L_00468510:
    // 0x00468510: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x00468514: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00468518: jr          $ra
    // 0x0046851C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0046851C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_004527B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004527B8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x004527BC: addu        $a0, $a2, $zero
    ctx->r4 = ADD32(ctx->r6, 0);
    // 0x004527C0: lui         $a2, 0x44
    ctx->r6 = S32(0X44 << 16);
    // 0x004527C4: addiu       $a2, $a2, -0x5EB0
    ctx->r6 = ADD32(ctx->r6, -0X5EB0);
    // 0x004527C8: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x004527CC: jal         0x00416894
    // 0x004527D0: nop

    func_00416894(rdram, ctx);
        goto after_0;
    // 0x004527D0: nop

    after_0:
    // 0x004527D4: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x004527D8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x004527DC: jr          $ra
    // 0x004527E0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x004527E0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00243C90(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00243C90: addiu       $sp, $sp, -0x2C0
    ctx->r29 = ADD32(ctx->r29, -0X2C0);
    // 0x00243C94: sw          $s1, 0x264($sp)
    MEM_W(0X264, ctx->r29) = ctx->r17;
    // 0x00243C98: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x00243C9C: sw          $s4, 0x270($sp)
    MEM_W(0X270, ctx->r29) = ctx->r20;
    // 0x00243CA0: addu        $s4, $a1, $zero
    ctx->r20 = ADD32(ctx->r5, 0);
    // 0x00243CA4: sw          $ra, 0x284($sp)
    MEM_W(0X284, ctx->r29) = ctx->r31;
    // 0x00243CA8: sw          $fp, 0x280($sp)
    MEM_W(0X280, ctx->r29) = ctx->r30;
    // 0x00243CAC: sw          $s7, 0x27C($sp)
    MEM_W(0X27C, ctx->r29) = ctx->r23;
    // 0x00243CB0: sw          $s6, 0x278($sp)
    MEM_W(0X278, ctx->r29) = ctx->r22;
    // 0x00243CB4: sw          $s5, 0x274($sp)
    MEM_W(0X274, ctx->r29) = ctx->r21;
    // 0x00243CB8: sw          $s3, 0x26C($sp)
    MEM_W(0X26C, ctx->r29) = ctx->r19;
    // 0x00243CBC: sw          $s2, 0x268($sp)
    MEM_W(0X268, ctx->r29) = ctx->r18;
    // 0x00243CC0: sw          $s0, 0x260($sp)
    MEM_W(0X260, ctx->r29) = ctx->r16;
    // 0x00243CC4: sdc1        $f26, 0x2B8($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X2B8, ctx->r29);
    // 0x00243CC8: sdc1        $f25, 0x2B0($sp)
    CHECK_FR(ctx, 25);
    SD(ctx->f25.u64, 0X2B0, ctx->r29);
    // 0x00243CCC: sdc1        $f24, 0x2A8($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X2A8, ctx->r29);
    // 0x00243CD0: sdc1        $f23, 0x2A0($sp)
    CHECK_FR(ctx, 23);
    SD(ctx->f23.u64, 0X2A0, ctx->r29);
    // 0x00243CD4: sdc1        $f22, 0x298($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X298, ctx->r29);
    // 0x00243CD8: sdc1        $f21, 0x290($sp)
    CHECK_FR(ctx, 21);
    SD(ctx->f21.u64, 0X290, ctx->r29);
    // 0x00243CDC: sdc1        $f20, 0x288($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X288, ctx->r29);
    // 0x00243CE0: sw          $a2, 0x2C8($sp)
    MEM_W(0X2C8, ctx->r29) = ctx->r6;
    // 0x00243CE4: lw          $a2, 0x78($s4)
    ctx->r6 = MEM_W(ctx->r20, 0X78);
    // 0x00243CE8: beq         $a2, $zero, L_00243D0C
    if (ctx->r6 == 0) {
        // 0x00243CEC: addu        $fp, $a3, $zero
        ctx->r30 = ADD32(ctx->r7, 0);
            goto L_00243D0C;
    }
    // 0x00243CEC: addu        $fp, $a3, $zero
    ctx->r30 = ADD32(ctx->r7, 0);
    // 0x00243CF0: beq         $fp, $zero, L_00243D00
    if (ctx->r30 == 0) {
        // 0x00243CF4: nop
    
            goto L_00243D00;
    }
    // 0x00243CF4: nop

    // 0x00243CF8: jal         0x002438C0
    // 0x00243CFC: nop

    func_002438C0(rdram, ctx);
        goto after_0;
    // 0x00243CFC: nop

    after_0:
L_00243D00:
    // 0x00243D00: lw          $v0, 0x78($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X78);
    // 0x00243D04: j           L_002442EC
    // 0x00243D08: nop

        goto L_002442EC;
    // 0x00243D08: nop

L_00243D0C:
    // 0x00243D0C: lw          $v0, 0x14($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X14);
    // 0x00243D10: lw          $v1, 0x0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X0);
    // 0x00243D14: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00243D18: bne         $v1, $v0, L_00243D54
    if (ctx->r3 != ctx->r2) {
        // 0x00243D1C: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_00243D54;
    }
    // 0x00243D1C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x00243D20: jal         0x0025E44C
    // 0x00243D24: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    func_0025E44C(rdram, ctx);
        goto after_1;
    // 0x00243D24: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    after_1:
    // 0x00243D28: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
    // 0x00243D2C: beq         $v0, $v1, L_00243D54
    if (ctx->r2 == ctx->r3) {
        // 0x00243D30: addu        $s3, $zero, $zero
        ctx->r19 = ADD32(0, 0);
            goto L_00243D54;
    }
    // 0x00243D30: addu        $s3, $zero, $zero
    ctx->r19 = ADD32(0, 0);
    // 0x00243D34: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00243D38: lwc1        $f24, 0x68F4($at)
    ctx->f24.u32l = MEM_W(ctx->r1, 0X68F4);
    // 0x00243D3C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00243D40: lwc1        $f26, 0x68F8($at)
    ctx->f26.u32l = MEM_W(ctx->r1, 0X68F8);
    // 0x00243D44: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00243D48: lwc1        $f25, 0x68FC($at)
    ctx->f_odd[(25 - 1) * 2] = MEM_W(ctx->r1, 0X68FC);
    // 0x00243D4C: j           L_00243D74
    // 0x00243D50: addu        $s5, $s3, $zero
    ctx->r21 = ADD32(ctx->r19, 0);
        goto L_00243D74;
    // 0x00243D50: addu        $s5, $s3, $zero
    ctx->r21 = ADD32(ctx->r19, 0);
L_00243D54:
    // 0x00243D54: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00243D58: lwc1        $f24, 0x6900($at)
    ctx->f24.u32l = MEM_W(ctx->r1, 0X6900);
    // 0x00243D5C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00243D60: lwc1        $f26, 0x6904($at)
    ctx->f26.u32l = MEM_W(ctx->r1, 0X6904);
    // 0x00243D64: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00243D68: lwc1        $f25, 0x6908($at)
    ctx->f_odd[(25 - 1) * 2] = MEM_W(ctx->r1, 0X6908);
    // 0x00243D6C: addu        $s3, $zero, $zero
    ctx->r19 = ADD32(0, 0);
    // 0x00243D70: addu        $s5, $s3, $zero
    ctx->r21 = ADD32(ctx->r19, 0);
L_00243D74:
    // 0x00243D74: jal         0x00284188
    // 0x00243D78: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
    func_00284188(rdram, ctx);
        goto after_2;
    // 0x00243D78: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
    after_2:
    // 0x00243D7C: beq         $v0, $zero, L_00243DA4
    if (ctx->r2 == 0) {
        // 0x00243D80: nop
    
            goto L_00243DA4;
    }
    // 0x00243D80: nop

    // 0x00243D84: jal         0x00284408
    // 0x00243D88: addu        $s0, $s3, $zero
    ctx->r16 = ADD32(ctx->r19, 0);
    func_00284408(rdram, ctx);
        goto after_3;
    // 0x00243D88: addu        $s0, $s3, $zero
    ctx->r16 = ADD32(ctx->r19, 0);
    after_3:
    // 0x00243D8C: slti        $v0, $v0, 0xA
    ctx->r2 = SIGNED(ctx->r2) < 0XA ? 1 : 0;
    // 0x00243D90: bne         $v0, $zero, L_00243DA4
    if (ctx->r2 != 0) {
        // 0x00243D94: nop
    
            goto L_00243DA4;
    }
    // 0x00243D94: nop

    // 0x00243D98: jal         0x00284408
    // 0x00243D9C: nop

    func_00284408(rdram, ctx);
        goto after_4;
    // 0x00243D9C: nop

    after_4:
    // 0x00243DA0: slti        $s0, $v0, 0x3D
    ctx->r16 = SIGNED(ctx->r2) < 0X3D ? 1 : 0;
L_00243DA4:
    // 0x00243DA4: beq         $s0, $zero, L_002442A4
    if (ctx->r16 == 0) {
        // 0x00243DA8: nop
    
            goto L_002442A4;
    }
    // 0x00243DA8: nop

    // 0x00243DAC: beq         $fp, $zero, L_00243F24
    if (ctx->r30 == 0) {
        // 0x00243DB0: nop
    
            goto L_00243F24;
    }
    // 0x00243DB0: nop

    // 0x00243DB4: lw          $v0, 0x14($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X14);
    // 0x00243DB8: lw          $s0, 0x0($v0)
    ctx->r16 = MEM_W(ctx->r2, 0X0);
    // 0x00243DBC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00243DC0: bne         $s0, $v0, L_00243EE4
    if (ctx->r16 != ctx->r2) {
        // 0x00243DC4: nop
    
            goto L_00243EE4;
    }
    // 0x00243DC4: nop

    // 0x00243DC8: lw          $v0, 0x80($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X80);
    // 0x00243DCC: beq         $v0, $zero, L_00243EE4
    if (ctx->r2 == 0) {
        // 0x00243DD0: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_00243EE4;
    }
    // 0x00243DD0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x00243DD4: jal         0x0025E428
    // 0x00243DD8: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    func_0025E428(rdram, ctx);
        goto after_5;
    // 0x00243DD8: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    after_5:
    // 0x00243DDC: addu        $s2, $v0, $zero
    ctx->r18 = ADD32(ctx->r2, 0);
    // 0x00243DE0: bne         $s2, $zero, L_00243DFC
    if (ctx->r18 != 0) {
        // 0x00243DE4: nop
    
            goto L_00243DFC;
    }
    // 0x00243DE4: nop

    // 0x00243DE8: lw          $v0, 0x14($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X14);
    // 0x00243DEC: lw          $v0, 0x48($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X48);
    // 0x00243DF0: andi        $v0, $v0, 0x40
    ctx->r2 = ctx->r2 & 0X40;
    // 0x00243DF4: bne         $v0, $zero, L_00243E34
    if (ctx->r2 != 0) {
        // 0x00243DF8: nop
    
            goto L_00243E34;
    }
    // 0x00243DF8: nop

L_00243DFC:
    // 0x00243DFC: bne         $s2, $s0, L_00243E18
    if (ctx->r18 != ctx->r16) {
        // 0x00243E00: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_00243E18;
    }
    // 0x00243E00: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x00243E04: lw          $v0, 0x14($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X14);
    // 0x00243E08: lw          $v0, 0x48($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X48);
    // 0x00243E0C: andi        $v0, $v0, 0x80
    ctx->r2 = ctx->r2 & 0X80;
    // 0x00243E10: bne         $v0, $zero, L_00243E34
    if (ctx->r2 != 0) {
        // 0x00243E14: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_00243E34;
    }
    // 0x00243E14: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_00243E18:
    // 0x00243E18: bne         $s2, $v0, L_00243E5C
    if (ctx->r18 != ctx->r2) {
        // 0x00243E1C: nop
    
            goto L_00243E5C;
    }
    // 0x00243E1C: nop

    // 0x00243E20: lw          $v0, 0x14($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X14);
    // 0x00243E24: lw          $v0, 0x48($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X48);
    // 0x00243E28: andi        $v0, $v0, 0x100
    ctx->r2 = ctx->r2 & 0X100;
    // 0x00243E2C: beq         $v0, $zero, L_00243E5C
    if (ctx->r2 == 0) {
        // 0x00243E30: nop
    
            goto L_00243E5C;
    }
    // 0x00243E30: nop

L_00243E34:
    // 0x00243E34: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x00243E38: addiu       $a0, $a0, 0x7078
    ctx->r4 = ADD32(ctx->r4, 0X7078);
    // 0x00243E3C: jal         0x00225848
    // 0x00243E40: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_00225848(rdram, ctx);
        goto after_6;
    // 0x00243E40: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_6:
    // 0x00243E44: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x00243E48: beq         $s0, $zero, L_00243E5C
    if (ctx->r16 == 0) {
        // 0x00243E4C: sll         $v0, $s3, 2
        ctx->r2 = S32(ctx->r19 << 2);
            goto L_00243E5C;
    }
    // 0x00243E4C: sll         $v0, $s3, 2
    ctx->r2 = S32(ctx->r19 << 2);
    // 0x00243E50: addu        $v0, $sp, $v0
    ctx->r2 = ADD32(ctx->r29, ctx->r2);
    // 0x00243E54: sw          $s0, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->r16;
    // 0x00243E58: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
L_00243E5C:
    // 0x00243E5C: lw          $v0, 0x80($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X80);
    // 0x00243E60: beq         $v0, $zero, L_00243EE4
    if (ctx->r2 == 0) {
        // 0x00243E64: nop
    
            goto L_00243EE4;
    }
    // 0x00243E64: nop

    // 0x00243E68: bne         $s2, $zero, L_00243E84
    if (ctx->r18 != 0) {
        // 0x00243E6C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_00243E84;
    }
    // 0x00243E6C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00243E70: lw          $v0, 0x14($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X14);
    // 0x00243E74: lhu         $v0, 0x94($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X94);
    // 0x00243E78: andi        $v0, $v0, 0x1F
    ctx->r2 = ctx->r2 & 0X1F;
    // 0x00243E7C: bne         $v0, $zero, L_00243EBC
    if (ctx->r2 != 0) {
        // 0x00243E80: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_00243EBC;
    }
    // 0x00243E80: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_00243E84:
    // 0x00243E84: bne         $s2, $v0, L_00243EA0
    if (ctx->r18 != ctx->r2) {
        // 0x00243E88: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_00243EA0;
    }
    // 0x00243E88: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x00243E8C: lw          $v0, 0x14($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X14);
    // 0x00243E90: lhu         $v0, 0x94($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X94);
    // 0x00243E94: andi        $v0, $v0, 0x3E0
    ctx->r2 = ctx->r2 & 0X3E0;
    // 0x00243E98: bne         $v0, $zero, L_00243EBC
    if (ctx->r2 != 0) {
        // 0x00243E9C: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_00243EBC;
    }
    // 0x00243E9C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_00243EA0:
    // 0x00243EA0: bne         $s2, $v0, L_00243EE4
    if (ctx->r18 != ctx->r2) {
        // 0x00243EA4: nop
    
            goto L_00243EE4;
    }
    // 0x00243EA4: nop

    // 0x00243EA8: lw          $v0, 0x14($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X14);
    // 0x00243EAC: lhu         $v0, 0x94($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X94);
    // 0x00243EB0: andi        $v0, $v0, 0x7C00
    ctx->r2 = ctx->r2 & 0X7C00;
    // 0x00243EB4: beq         $v0, $zero, L_00243EE4
    if (ctx->r2 == 0) {
        // 0x00243EB8: nop
    
            goto L_00243EE4;
    }
    // 0x00243EB8: nop

L_00243EBC:
    // 0x00243EBC: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x00243EC0: addiu       $a0, $a0, 0x7078
    ctx->r4 = ADD32(ctx->r4, 0X7078);
    // 0x00243EC4: jal         0x0022594C
    // 0x00243EC8: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_0022594C(rdram, ctx);
        goto after_7;
    // 0x00243EC8: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_7:
    // 0x00243ECC: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x00243ED0: beq         $s0, $zero, L_00243EE4
    if (ctx->r16 == 0) {
        // 0x00243ED4: sll         $v0, $s3, 2
        ctx->r2 = S32(ctx->r19 << 2);
            goto L_00243EE4;
    }
    // 0x00243ED4: sll         $v0, $s3, 2
    ctx->r2 = S32(ctx->r19 << 2);
    // 0x00243ED8: addu        $v0, $sp, $v0
    ctx->r2 = ADD32(ctx->r29, ctx->r2);
    // 0x00243EDC: sw          $s0, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->r16;
    // 0x00243EE0: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
L_00243EE4:
    // 0x00243EE4: lw          $s0, 0x68($s4)
    ctx->r16 = MEM_W(ctx->r20, 0X68);
    // 0x00243EE8: beq         $s0, $zero, L_00243EFC
    if (ctx->r16 == 0) {
        // 0x00243EEC: sll         $v0, $s3, 2
        ctx->r2 = S32(ctx->r19 << 2);
            goto L_00243EFC;
    }
    // 0x00243EEC: sll         $v0, $s3, 2
    ctx->r2 = S32(ctx->r19 << 2);
    // 0x00243EF0: addu        $v0, $sp, $v0
    ctx->r2 = ADD32(ctx->r29, ctx->r2);
    // 0x00243EF4: sw          $s0, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->r16;
    // 0x00243EF8: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
L_00243EFC:
    // 0x00243EFC: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x00243F00: addiu       $a0, $a0, 0x7078
    ctx->r4 = ADD32(ctx->r4, 0X7078);
    // 0x00243F04: jal         0x002259D0
    // 0x00243F08: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_002259D0(rdram, ctx);
        goto after_8;
    // 0x00243F08: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_8:
    // 0x00243F0C: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x00243F10: beq         $s0, $zero, L_00243F24
    if (ctx->r16 == 0) {
        // 0x00243F14: sll         $v0, $s3, 2
        ctx->r2 = S32(ctx->r19 << 2);
            goto L_00243F24;
    }
    // 0x00243F14: sll         $v0, $s3, 2
    ctx->r2 = S32(ctx->r19 << 2);
    // 0x00243F18: addu        $v0, $sp, $v0
    ctx->r2 = ADD32(ctx->r29, ctx->r2);
    // 0x00243F1C: sw          $s0, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->r16;
    // 0x00243F20: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
L_00243F24:
    // 0x00243F24: lw          $v0, 0xD4($s1)
    ctx->r2 = MEM_W(ctx->r17, 0XD4);
    // 0x00243F28: lui         $v1, 0x30
    ctx->r3 = S32(0X30 << 16);
    // 0x00243F2C: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x00243F30: beq         $v0, $zero, L_00243F64
    if (ctx->r2 == 0) {
        // 0x00243F34: nop
    
            goto L_00243F64;
    }
    // 0x00243F34: nop

    // 0x00243F38: lw          $v0, 0x1A8($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X1A8);
    // 0x00243F3C: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x00243F40: lw          $a1, 0x4($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X4);
    // 0x00243F44: lw          $a2, 0x8($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X8);
    // 0x00243F48: lw          $a3, 0xC($s1)
    ctx->r7 = MEM_W(ctx->r17, 0XC);
    // 0x00243F4C: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x00243F50: addiu       $a0, $a0, -0x6790
    ctx->r4 = ADD32(ctx->r4, -0X6790);
    // 0x00243F54: jal         0x00253370
    // 0x00243F58: nop

    func_00253370(rdram, ctx);
        goto after_9;
    // 0x00243F58: nop

    after_9:
    // 0x00243F5C: j           L_00243F84
    // 0x00243F60: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
        goto L_00243F84;
    // 0x00243F60: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
L_00243F64:
    // 0x00243F64: lw          $a1, 0x4($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X4);
    // 0x00243F68: lw          $a2, 0x8($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X8);
    // 0x00243F6C: lw          $a3, 0xC($s1)
    ctx->r7 = MEM_W(ctx->r17, 0XC);
    // 0x00243F70: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x00243F74: addiu       $a0, $a0, -0x6790
    ctx->r4 = ADD32(ctx->r4, -0X6790);
    // 0x00243F78: jal         0x002532EC
    // 0x00243F7C: nop

    func_002532EC(rdram, ctx);
        goto after_10;
    // 0x00243F7C: nop

    after_10:
    // 0x00243F80: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
L_00243F84:
    // 0x00243F84: beq         $s0, $zero, L_00244040
    if (ctx->r16 == 0) {
        // 0x00243F88: nop
    
            goto L_00244040;
    }
    // 0x00243F88: nop

    // 0x00243F8C: lh          $v0, 0x52A($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X52A);
    // 0x00243F90: beq         $v0, $zero, L_00244040
    if (ctx->r2 == 0) {
        // 0x00243F94: addiu       $s2, $zero, 0x1
        ctx->r18 = ADD32(0, 0X1);
            goto L_00244040;
    }
    // 0x00243F94: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
    // 0x00243F98: lh          $v0, 0xA08($s0)
    ctx->r2 = MEM_H(ctx->r16, 0XA08);
    // 0x00243F9C: beq         $v0, $s2, L_00244040
    if (ctx->r2 == ctx->r18) {
        // 0x00243FA0: nop
    
            goto L_00244040;
    }
    // 0x00243FA0: nop

    // 0x00243FA4: jal         0x00268A2C
    // 0x00243FA8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00268A2C(rdram, ctx);
        goto after_11;
    // 0x00243FA8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_11:
    // 0x00243FAC: beq         $v0, $zero, L_00243FC4
    if (ctx->r2 == 0) {
        // 0x00243FB0: nop
    
            goto L_00243FC4;
    }
    // 0x00243FB0: nop

    // 0x00243FB4: lwc1        $f1, 0x10($v0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r2, 0X10);
    // 0x00243FB8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00243FBC: lwc1        $f0, 0x690C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X690C);
    // 0x00243FC0: sub.s       $f24, $f1, $f0
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f24.fl = ctx->f1.fl - ctx->f0.fl;
L_00243FC4:
    // 0x00243FC4: lw          $v0, 0x14($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X14);
    // 0x00243FC8: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x00243FCC: bne         $v0, $s2, L_0024402C
    if (ctx->r2 != ctx->r18) {
        // 0x00243FD0: nop
    
            goto L_0024402C;
    }
    // 0x00243FD0: nop

    // 0x00243FD4: lb          $v0, 0x37($s4)
    ctx->r2 = MEM_B(ctx->r20, 0X37);
    // 0x00243FD8: bne         $v0, $zero, L_0024402C
    if (ctx->r2 != 0) {
        // 0x00243FDC: nop
    
            goto L_0024402C;
    }
    // 0x00243FDC: nop

    // 0x00243FE0: lh          $v1, 0xA08($s0)
    ctx->r3 = MEM_H(ctx->r16, 0XA08);
    // 0x00243FE4: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x00243FE8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x00243FEC: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x00243FF0: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00243FF4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x00243FF8: lw          $v0, -0x20A4($at)
    ctx->r2 = MEM_W(ctx->r1, -0X20A4);
    // 0x00243FFC: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x00244000: andi        $v0, $v0, 0x80
    ctx->r2 = ctx->r2 & 0X80;
    // 0x00244004: beq         $v0, $zero, L_0024402C
    if (ctx->r2 == 0) {
        // 0x00244008: nop
    
            goto L_0024402C;
    }
    // 0x00244008: nop

    // 0x0024400C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00244010: lwc1        $f0, 0x6910($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6910);
    // 0x00244014: mul.s       $f26, $f26, $f0
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f26.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f26.fl = MUL_S(ctx->f26.fl, ctx->f0.fl);
    // 0x00244018: nop

    // 0x0024401C: mul.s       $f25, $f25, $f0
    CHECK_FR(ctx, 25);
    CHECK_FR(ctx, 25);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f25.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f25.fl = MUL_S(ctx->f25.fl, ctx->f0.fl);
    // 0x00244020: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00244024: lwc1        $f0, 0x6914($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6914);
    // 0x00244028: mul.s       $f24, $f24, $f0
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f24.fl = MUL_S(ctx->f24.fl, ctx->f0.fl);
L_0024402C:
    // 0x0024402C: beq         $s0, $zero, L_00244040
    if (ctx->r16 == 0) {
        // 0x00244030: sll         $v0, $s3, 2
        ctx->r2 = S32(ctx->r19 << 2);
            goto L_00244040;
    }
    // 0x00244030: sll         $v0, $s3, 2
    ctx->r2 = S32(ctx->r19 << 2);
    // 0x00244034: addu        $v0, $sp, $v0
    ctx->r2 = ADD32(ctx->r29, ctx->r2);
    // 0x00244038: sw          $s0, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->r16;
    // 0x0024403C: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
L_00244040:
    // 0x00244040: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00244044: lwc1        $f23, 0x68F0($at)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r1, 0X68F0);
    // 0x00244048: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    // 0x0024404C: blez        $s3, L_002442A4
    if (SIGNED(ctx->r19) <= 0) {
        // 0x00244050: addu        $s5, $s2, $zero
        ctx->r21 = ADD32(ctx->r18, 0);
            goto L_002442A4;
    }
    // 0x00244050: addu        $s5, $s2, $zero
    ctx->r21 = ADD32(ctx->r18, 0);
    // 0x00244054: addiu       $s6, $zero, 0x1
    ctx->r22 = ADD32(0, 0X1);
    // 0x00244058: addiu       $s7, $sp, 0x248
    ctx->r23 = ADD32(ctx->r29, 0X248);
    // 0x0024405C: sll         $v0, $s2, 2
    ctx->r2 = S32(ctx->r18 << 2);
L_00244060:
    // 0x00244060: addu        $v0, $sp, $v0
    ctx->r2 = ADD32(ctx->r29, ctx->r2);
    // 0x00244064: lw          $s0, 0x18($v0)
    ctx->r16 = MEM_W(ctx->r2, 0X18);
    // 0x00244068: lw          $a1, 0x4($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X4);
    // 0x0024406C: lw          $a2, 0x8($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X8);
    // 0x00244070: lw          $a3, 0xC($s1)
    ctx->r7 = MEM_W(ctx->r17, 0XC);
    // 0x00244074: jal         0x002465F0
    // 0x00244078: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_002465F0(rdram, ctx);
        goto after_12;
    // 0x00244078: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_12:
    // 0x0024407C: mov.s       $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    ctx->f22.fl = ctx->f0.fl;
    // 0x00244080: c.lt.s      $f22, $f23
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 23);
    c1cs = ctx->f22.fl < ctx->f23.fl;
    // 0x00244084: nop

    // 0x00244088: bc1fl       L_00244298
    if (!c1cs) {
        // 0x0024408C: addiu       $s2, $s2, 0x1
        ctx->r18 = ADD32(ctx->r18, 0X1);
            goto L_00244298;
    }
    goto skip_0;
    // 0x0024408C: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    skip_0:
    // 0x00244090: beq         $fp, $zero, L_0024411C
    if (ctx->r30 == 0) {
        // 0x00244094: nop
    
            goto L_0024411C;
    }
    // 0x00244094: nop

    // 0x00244098: lw          $v0, 0x14($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X14);
    // 0x0024409C: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x002440A0: bne         $v0, $s6, L_002440B4
    if (ctx->r2 != ctx->r22) {
        // 0x002440A4: nop
    
            goto L_002440B4;
    }
    // 0x002440A4: nop

    // 0x002440A8: lb          $v0, 0x37($s4)
    ctx->r2 = MEM_B(ctx->r20, 0X37);
    // 0x002440AC: beql        $v0, $zero, L_00244298
    if (ctx->r2 == 0) {
        // 0x002440B0: addiu       $s2, $s2, 0x1
        ctx->r18 = ADD32(ctx->r18, 0X1);
            goto L_00244298;
    }
    goto skip_1;
    // 0x002440B0: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    skip_1:
L_002440B4:
    // 0x002440B4: jal         0x00267E74
    // 0x002440B8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_00267E74(rdram, ctx);
        goto after_13;
    // 0x002440B8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_13:
    // 0x002440BC: beq         $v0, $zero, L_00244108
    if (ctx->r2 == 0) {
        // 0x002440C0: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_00244108;
    }
    // 0x002440C0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x002440C4: lw          $a1, 0xAC($s4)
    ctx->r5 = MEM_W(ctx->r20, 0XAC);
    // 0x002440C8: lw          $a2, 0xB0($s4)
    ctx->r6 = MEM_W(ctx->r20, 0XB0);
    // 0x002440CC: lw          $a3, 0xB4($s4)
    ctx->r7 = MEM_W(ctx->r20, 0XB4);
    // 0x002440D0: jal         0x0024665C
    // 0x002440D4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_0024665C(rdram, ctx);
        goto after_14;
    // 0x002440D4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_14:
    // 0x002440D8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x002440DC: jal         0x00268534
    // 0x002440E0: mov.s       $f21, $f0
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 0);
    ctx->f21.fl = ctx->f0.fl;
    func_00268534(rdram, ctx);
        goto after_15;
    // 0x002440E0: mov.s       $f21, $f0
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 0);
    ctx->f21.fl = ctx->f0.fl;
    after_15:
    // 0x002440E4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x002440E8: jal         0x00268534
    // 0x002440EC: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    func_00268534(rdram, ctx);
        goto after_16;
    // 0x002440EC: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    after_16:
    // 0x002440F0: mul.s       $f20, $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = MUL_S(ctx->f20.fl, ctx->f0.fl);
    // 0x002440F4: c.le.s      $f20, $f21
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 21);
    c1cs = ctx->f20.fl <= ctx->f21.fl;
    // 0x002440F8: nop

    // 0x002440FC: bc1tl       L_00244298
    if (c1cs) {
        // 0x00244100: addiu       $s2, $s2, 0x1
        ctx->r18 = ADD32(ctx->r18, 0X1);
            goto L_00244298;
    }
    goto skip_2;
    // 0x00244100: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    skip_2:
    // 0x00244104: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
L_00244108:
    // 0x00244108: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    // 0x0024410C: jal         0x002438C0
    // 0x00244110: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    func_002438C0(rdram, ctx);
        goto after_17;
    // 0x00244110: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    after_17:
    // 0x00244114: beql        $v0, $zero, L_00244298
    if (ctx->r2 == 0) {
        // 0x00244118: addiu       $s2, $s2, 0x1
        ctx->r18 = ADD32(ctx->r18, 0X1);
            goto L_00244298;
    }
    goto skip_3;
    // 0x00244118: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    skip_3:
L_0024411C:
    // 0x0024411C: lw          $t0, 0x2C8($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C8);
    // 0x00244120: beq         $t0, $zero, L_0024428C
    if (ctx->r8 == 0) {
        // 0x00244124: addiu       $v1, $sp, 0x218
        ctx->r3 = ADD32(ctx->r29, 0X218);
            goto L_0024428C;
    }
    // 0x00244124: addiu       $v1, $sp, 0x218
    ctx->r3 = ADD32(ctx->r29, 0X218);
    // 0x00244128: addu        $v0, $s0, $zero
    ctx->r2 = ADD32(ctx->r16, 0);
    // 0x0024412C: addiu       $a0, $s0, 0x30
    ctx->r4 = ADD32(ctx->r16, 0X30);
L_00244130:
    // 0x00244130: lw          $t1, 0x0($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X0);
    // 0x00244134: lw          $t2, 0x4($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X4);
    // 0x00244138: lw          $t3, 0x8($v0)
    ctx->r11 = MEM_W(ctx->r2, 0X8);
    // 0x0024413C: lw          $t0, 0xC($v0)
    ctx->r8 = MEM_W(ctx->r2, 0XC);
    // 0x00244140: sw          $t1, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r9;
    // 0x00244144: sw          $t2, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r10;
    // 0x00244148: sw          $t3, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r11;
    // 0x0024414C: sw          $t0, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r8;
    // 0x00244150: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
    // 0x00244154: bne         $v0, $a0, L_00244130
    if (ctx->r2 != ctx->r4) {
        // 0x00244158: addiu       $v1, $v1, 0x10
        ctx->r3 = ADD32(ctx->r3, 0X10);
            goto L_00244130;
    }
    // 0x00244158: addiu       $v1, $v1, 0x10
    ctx->r3 = ADD32(ctx->r3, 0X10);
    // 0x0024415C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00244160: lw          $t1, 0x0($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X0);
    // 0x00244164: jal         0x002671B4
    // 0x00244168: sw          $t1, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r9;
    func_002671B4(rdram, ctx);
        goto after_18;
    // 0x00244168: sw          $t1, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r9;
    after_18:
    // 0x0024416C: lwc1        $f1, 0x8($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X8);
    // 0x00244170: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x00244174: lwc1        $f0, 0x54($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X54);
    // 0x00244178: add.s       $f0, $f1, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x0024417C: swc1        $f1, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f_odd[(1 - 1) * 2];
    // 0x00244180: swc1        $f0, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f0.u32l;
    // 0x00244184: lw          $t1, 0x4($s1)
    ctx->r9 = MEM_W(ctx->r17, 0X4);
    // 0x00244188: lw          $t2, 0x8($s1)
    ctx->r10 = MEM_W(ctx->r17, 0X8);
    // 0x0024418C: lw          $t3, 0xC($s1)
    ctx->r11 = MEM_W(ctx->r17, 0XC);
    // 0x00244190: sw          $t1, 0x250($sp)
    MEM_W(0X250, ctx->r29) = ctx->r9;
    // 0x00244194: sw          $t2, 0x254($sp)
    MEM_W(0X254, ctx->r29) = ctx->r10;
    // 0x00244198: sw          $t3, 0x258($sp)
    MEM_W(0X258, ctx->r29) = ctx->r11;
    // 0x0024419C: jal         0x002671B4
    // 0x002441A0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_002671B4(rdram, ctx);
        goto after_19;
    // 0x002441A0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_19:
    // 0x002441A4: lwc1        $f1, 0x254($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X254);
    // 0x002441A8: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x002441AC: swc1        $f1, 0x254($sp)
    MEM_W(0X254, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    // 0x002441B0: lwc1        $f0, 0x54($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X54);
    // 0x002441B4: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x002441B8: lui         $v0, 0x800F
    ctx->r2 = S32(0X800F << 16);
    // 0x002441BC: addiu       $v0, $v0, 0x1B40
    ctx->r2 = ADD32(ctx->r2, 0X1B40);
    // 0x002441C0: swc1        $f1, 0x254($sp)
    MEM_W(0X254, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    // 0x002441C4: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x002441C8: lw          $a1, 0x250($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X250);
    // 0x002441CC: lw          $a2, 0x254($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X254);
    // 0x002441D0: lw          $a3, 0x258($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X258);
    // 0x002441D4: jal         0x00239F00
    // 0x002441D8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00239F00(rdram, ctx);
        goto after_20;
    // 0x002441D8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_20:
    // 0x002441DC: lui         $v1, 0x800F
    ctx->r3 = S32(0X800F << 16);
    // 0x002441E0: lw          $v1, 0x1CE0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X1CE0);
    // 0x002441E4: beql        $v1, $s1, L_002441EC
    if (ctx->r3 == ctx->r17) {
        // 0x002441E8: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_002441EC;
    }
    goto skip_4;
    // 0x002441E8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    skip_4:
L_002441EC:
    // 0x002441EC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x002441F0: addiu       $v1, $sp, 0x218
    ctx->r3 = ADD32(ctx->r29, 0X218);
L_002441F4:
    // 0x002441F4: lw          $t1, 0x0($v1)
    ctx->r9 = MEM_W(ctx->r3, 0X0);
    // 0x002441F8: lw          $t2, 0x4($v1)
    ctx->r10 = MEM_W(ctx->r3, 0X4);
    // 0x002441FC: lw          $t3, 0x8($v1)
    ctx->r11 = MEM_W(ctx->r3, 0X8);
    // 0x00244200: lw          $t0, 0xC($v1)
    ctx->r8 = MEM_W(ctx->r3, 0XC);
    // 0x00244204: sw          $t1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r9;
    // 0x00244208: sw          $t2, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r10;
    // 0x0024420C: sw          $t3, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r11;
    // 0x00244210: sw          $t0, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->r8;
    // 0x00244214: addiu       $v1, $v1, 0x10
    ctx->r3 = ADD32(ctx->r3, 0X10);
    // 0x00244218: bne         $v1, $s7, L_002441F4
    if (ctx->r3 != ctx->r23) {
        // 0x0024421C: addiu       $a0, $a0, 0x10
        ctx->r4 = ADD32(ctx->r4, 0X10);
            goto L_002441F4;
    }
    // 0x0024421C: addiu       $a0, $a0, 0x10
    ctx->r4 = ADD32(ctx->r4, 0X10);
    // 0x00244220: lw          $t1, 0x0($v1)
    ctx->r9 = MEM_W(ctx->r3, 0X0);
    // 0x00244224: bne         $v0, $zero, L_00244294
    if (ctx->r2 != 0) {
        // 0x00244228: sw          $t1, 0x0($a0)
        MEM_W(0X0, ctx->r4) = ctx->r9;
            goto L_00244294;
    }
    // 0x00244228: sw          $t1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r9;
    // 0x0024422C: lw          $v1, 0x14($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X14);
    // 0x00244230: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x00244234: bnel        $v0, $s6, L_00244290
    if (ctx->r2 != ctx->r22) {
        // 0x00244238: mov.s       $f23, $f22
        CHECK_FR(ctx, 23);
    CHECK_FR(ctx, 22);
    ctx->f23.fl = ctx->f22.fl;
            goto L_00244290;
    }
    goto skip_5;
    // 0x00244238: mov.s       $f23, $f22
    CHECK_FR(ctx, 23);
    CHECK_FR(ctx, 22);
    ctx->f23.fl = ctx->f22.fl;
    skip_5:
    // 0x0024423C: lw          $v0, 0x14($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X14);
    // 0x00244240: andi        $v0, $v0, 0x8000
    ctx->r2 = ctx->r2 & 0X8000;
    // 0x00244244: beq         $v0, $zero, L_0024427C
    if (ctx->r2 == 0) {
        // 0x00244248: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_0024427C;
    }
    // 0x00244248: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0024424C: mfc1        $a2, $f24
    ctx->r6 = (int32_t)ctx->f24.u32l;
    // 0x00244250: mfc1        $a3, $f26
    ctx->r7 = (int32_t)ctx->f26.u32l;
    // 0x00244254: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x00244258: jal         0x002435AC
    // 0x0024425C: swc1        $f25, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(25 - 1) * 2];
    func_002435AC(rdram, ctx);
        goto after_21;
    // 0x0024425C: swc1        $f25, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(25 - 1) * 2];
    after_21:
    // 0x00244260: bne         $v0, $zero, L_0024427C
    if (ctx->r2 != 0) {
        // 0x00244264: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_0024427C;
    }
    // 0x00244264: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x00244268: lb          $v0, 0x37($s4)
    ctx->r2 = MEM_B(ctx->r20, 0X37);
    // 0x0024426C: beql        $v0, $zero, L_00244298
    if (ctx->r2 == 0) {
        // 0x00244270: addiu       $s2, $s2, 0x1
        ctx->r18 = ADD32(ctx->r18, 0X1);
            goto L_00244298;
    }
    goto skip_6;
    // 0x00244270: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    skip_6:
    // 0x00244274: j           L_00244290
    // 0x00244278: mov.s       $f23, $f22
    CHECK_FR(ctx, 23);
    CHECK_FR(ctx, 22);
    ctx->f23.fl = ctx->f22.fl;
        goto L_00244290;
    // 0x00244278: mov.s       $f23, $f22
    CHECK_FR(ctx, 23);
    CHECK_FR(ctx, 22);
    ctx->f23.fl = ctx->f22.fl;
L_0024427C:
    // 0x0024427C: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    // 0x00244280: addiu       $a2, $s0, 0x4
    ctx->r6 = ADD32(ctx->r16, 0X4);
    // 0x00244284: jal         0x0025E52C
    // 0x00244288: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    func_0025E52C(rdram, ctx);
        goto after_22;
    // 0x00244288: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    after_22:
L_0024428C:
    // 0x0024428C: mov.s       $f23, $f22
    CHECK_FR(ctx, 23);
    CHECK_FR(ctx, 22);
    ctx->f23.fl = ctx->f22.fl;
L_00244290:
    // 0x00244290: addu        $s5, $s0, $zero
    ctx->r21 = ADD32(ctx->r16, 0);
L_00244294:
    // 0x00244294: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
L_00244298:
    // 0x00244298: slt         $v0, $s2, $s3
    ctx->r2 = SIGNED(ctx->r18) < SIGNED(ctx->r19) ? 1 : 0;
    // 0x0024429C: bne         $v0, $zero, L_00244060
    if (ctx->r2 != 0) {
        // 0x002442A0: sll         $v0, $s2, 2
        ctx->r2 = S32(ctx->r18 << 2);
            goto L_00244060;
    }
    // 0x002442A0: sll         $v0, $s2, 2
    ctx->r2 = S32(ctx->r18 << 2);
L_002442A4:
    // 0x002442A4: beq         $fp, $zero, L_002442EC
    if (ctx->r30 == 0) {
        // 0x002442A8: addu        $v0, $s5, $zero
        ctx->r2 = ADD32(ctx->r21, 0);
            goto L_002442EC;
    }
    // 0x002442A8: addu        $v0, $s5, $zero
    ctx->r2 = ADD32(ctx->r21, 0);
    // 0x002442AC: bne         $s5, $zero, L_002442EC
    if (ctx->r21 != 0) {
        // 0x002442B0: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_002442EC;
    }
    // 0x002442B0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x002442B4: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    // 0x002442B8: jal         0x002438C0
    // 0x002442BC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_002438C0(rdram, ctx);
        goto after_23;
    // 0x002442BC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_23:
    // 0x002442C0: bne         $v0, $zero, L_002442EC
    if (ctx->r2 != 0) {
        // 0x002442C4: addu        $v0, $s5, $zero
        ctx->r2 = ADD32(ctx->r21, 0);
            goto L_002442EC;
    }
    // 0x002442C4: addu        $v0, $s5, $zero
    ctx->r2 = ADD32(ctx->r21, 0);
    // 0x002442C8: lw          $t1, 0x4($s1)
    ctx->r9 = MEM_W(ctx->r17, 0X4);
    // 0x002442CC: lw          $t2, 0x8($s1)
    ctx->r10 = MEM_W(ctx->r17, 0X8);
    // 0x002442D0: lw          $t3, 0xC($s1)
    ctx->r11 = MEM_W(ctx->r17, 0XC);
    // 0x002442D4: sw          $t1, 0xAC($s4)
    MEM_W(0XAC, ctx->r20) = ctx->r9;
    // 0x002442D8: sw          $t2, 0xB0($s4)
    MEM_W(0XB0, ctx->r20) = ctx->r10;
    // 0x002442DC: sw          $t3, 0xB4($s4)
    MEM_W(0XB4, ctx->r20) = ctx->r11;
    // 0x002442E0: lw          $v0, 0x10($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X10);
    // 0x002442E4: sw          $v0, 0xB8($s4)
    MEM_W(0XB8, ctx->r20) = ctx->r2;
    // 0x002442E8: addu        $v0, $s5, $zero
    ctx->r2 = ADD32(ctx->r21, 0);
L_002442EC:
    // 0x002442EC: lw          $ra, 0x284($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X284);
    // 0x002442F0: lw          $fp, 0x280($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X280);
    // 0x002442F4: lw          $s7, 0x27C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X27C);
    // 0x002442F8: lw          $s6, 0x278($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X278);
    // 0x002442FC: lw          $s5, 0x274($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X274);
    // 0x00244300: lw          $s4, 0x270($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X270);
    // 0x00244304: lw          $s3, 0x26C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X26C);
    // 0x00244308: lw          $s2, 0x268($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X268);
    // 0x0024430C: lw          $s1, 0x264($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X264);
    // 0x00244310: lw          $s0, 0x260($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X260);
    // 0x00244314: ldc1        $f26, 0x2B8($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X2B8);
    // 0x00244318: ldc1        $f25, 0x2B0($sp)
    CHECK_FR(ctx, 25);
    ctx->f25.u64 = LD(ctx->r29, 0X2B0);
    // 0x0024431C: ldc1        $f24, 0x2A8($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X2A8);
    // 0x00244320: ldc1        $f23, 0x2A0($sp)
    CHECK_FR(ctx, 23);
    ctx->f23.u64 = LD(ctx->r29, 0X2A0);
    // 0x00244324: ldc1        $f22, 0x298($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X298);
    // 0x00244328: ldc1        $f21, 0x290($sp)
    CHECK_FR(ctx, 21);
    ctx->f21.u64 = LD(ctx->r29, 0X290);
    // 0x0024432C: ldc1        $f20, 0x288($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X288);
    // 0x00244330: jr          $ra
    // 0x00244334: addiu       $sp, $sp, 0x2C0
    ctx->r29 = ADD32(ctx->r29, 0X2C0);
    return;
    // 0x00244334: addiu       $sp, $sp, 0x2C0
    ctx->r29 = ADD32(ctx->r29, 0X2C0);
;}
RECOMP_FUNC void func_0045275C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0045275C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00452760: addu        $a0, $a2, $zero
    ctx->r4 = ADD32(ctx->r6, 0);
    // 0x00452764: addiu       $t0, $zero, 0x3
    ctx->r8 = ADD32(0, 0X3);
    // 0x00452768: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x0045276C: addiu       $v0, $v0, -0x5528
    ctx->r2 = ADD32(ctx->r2, -0X5528);
    // 0x00452770: addiu       $a3, $v0, 0xC0
    ctx->r7 = ADD32(ctx->r2, 0XC0);
    // 0x00452774: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x00452778: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x0045277C: sb          $v1, 0x19($v0)
    MEM_B(0X19, ctx->r2) = ctx->r3;
    // 0x00452780: addiu       $v1, $zero, 0x4
    ctx->r3 = ADD32(0, 0X4);
    // 0x00452784: sb          $v1, 0x1A($v0)
    MEM_B(0X1A, ctx->r2) = ctx->r3;
L_00452788:
    // 0x00452788: sb          $zero, 0xA8($a3)
    MEM_B(0XA8, ctx->r7) = 0;
    // 0x0045278C: addiu       $t0, $t0, -0x1
    ctx->r8 = ADD32(ctx->r8, -0X1);
    // 0x00452790: bgez        $t0, L_00452788
    if (SIGNED(ctx->r8) >= 0) {
        // 0x00452794: addiu       $a3, $a3, -0x40
        ctx->r7 = ADD32(ctx->r7, -0X40);
            goto L_00452788;
    }
    // 0x00452794: addiu       $a3, $a3, -0x40
    ctx->r7 = ADD32(ctx->r7, -0X40);
    // 0x00452798: lui         $a2, 0x44
    ctx->r6 = S32(0X44 << 16);
    // 0x0045279C: addiu       $a2, $a2, -0x704C
    ctx->r6 = ADD32(ctx->r6, -0X704C);
    // 0x004527A0: jal         0x00416894
    // 0x004527A4: nop

    func_00416894(rdram, ctx);
        goto after_0;
    // 0x004527A4: nop

    after_0:
    // 0x004527A8: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x004527AC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x004527B0: jr          $ra
    // 0x004527B4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x004527B4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00258FF8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00258FF8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00258FFC: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
    // 0x00259000: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x00259004: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x00259008: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0025900C: lwc1        $f0, 0x72C8($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X72C8);
    // 0x00259010: lwc1        $f1, 0x24C($v0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r2, 0X24C);
    // 0x00259014: lw          $v0, 0x90($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X90);
    // 0x00259018: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x0025901C: bne         $v0, $v1, L_00259034
    if (ctx->r2 != ctx->r3) {
        // 0x00259020: nop
    
            goto L_00259034;
    }
    // 0x00259020: nop

    // 0x00259024: neg.s       $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = -ctx->f1.fl;
    // 0x00259028: mfc1        $a1, $f1
    ctx->r5 = (int32_t)ctx->f_odd[(1 - 1) * 2];
    // 0x0025902C: jal         0x00210894
    // 0x00259030: nop

    func_00210894(rdram, ctx);
        goto after_0;
    // 0x00259030: nop

    after_0:
L_00259034:
    // 0x00259034: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x00259038: jr          $ra
    // 0x0025903C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0025903C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0029BA74(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0029BA74: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x0029BA78: swc1        $f0, -0x2874($at)
    MEM_W(-0X2874, ctx->r1) = ctx->f0.u32l;
    // 0x0029BA7C: jal         0x002974C0
    // 0x0029BA80: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    func_002974C0(rdram, ctx);
        goto after_0;
    // 0x0029BA80: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    after_0:
    // 0x0029BA84: lw          $v0, 0x28($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X28);
    // 0x0029BA88: lw          $v1, 0x2C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X2C);
    // 0x0029BA8C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0029BA90: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x0029BA94: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x0029BA98: sw          $a2, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r6;
    // 0x0029BA9C: sw          $a3, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r7;
    // 0x0029BAA0: or          $a2, $a3, $a2
    ctx->r6 = ctx->r7 | ctx->r6;
    // 0x0029BAA4: sw          $zero, 0x0($s0)
    MEM_W(0X0, ctx->r16) = 0;
    // 0x0029BAA8: sw          $zero, 0x4($s0)
    MEM_W(0X4, ctx->r16) = 0;
    // 0x0029BAAC: sw          $v0, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r2;
    // 0x0029BAB0: sw          $v1, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r3;
    // 0x0029BAB4: bne         $a2, $zero, L_0029BAC4
    if (ctx->r6 != 0) {
        // 0x0029BAB8: nop
    
            goto L_0029BAC4;
    }
    // 0x0029BAB8: nop

    // 0x0029BABC: sw          $v0, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r2;
    // 0x0029BAC0: sw          $v1, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r3;
L_0029BAC4:
    // 0x0029BAC4: lw          $v0, 0x30($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X30);
    // 0x0029BAC8: sw          $v0, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->r2;
    // 0x0029BACC: lw          $v0, 0x34($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X34);
    // 0x0029BAD0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0029BAD4: jal         0x0029BE6C
    // 0x0029BAD8: sw          $v0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r2;
    func_0029BE6C(rdram, ctx);
        goto after_1;
    // 0x0029BAD8: sw          $v0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r2;
    after_1:
    // 0x0029BADC: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x0029BAE0: lw          $a0, -0x76D0($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X76D0);
    // 0x0029BAE4: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x0029BAE8: bne         $a0, $s0, L_0029BAF8
    if (ctx->r4 != ctx->r16) {
        // 0x0029BAEC: addu        $a0, $v0, $zero
        ctx->r4 = ADD32(ctx->r2, 0);
            goto L_0029BAF8;
    }
    // 0x0029BAEC: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x0029BAF0: jal         0x0029BE0C
    // 0x0029BAF4: addu        $a1, $v1, $zero
    ctx->r5 = ADD32(ctx->r3, 0);
    func_0029BE0C(rdram, ctx);
        goto after_2;
    // 0x0029BAF4: addu        $a1, $v1, $zero
    ctx->r5 = ADD32(ctx->r3, 0);
    after_2:
L_0029BAF8:
    // 0x0029BAF8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x0029BAFC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0029BB00: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x0029BB04: jr          $ra
    // 0x0029BB08: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0029BB08: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_002561D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002561D4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x002561D8: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x002561DC: jal         0x00251698
    // 0x002561E0: addiu       $a2, $zero, 0xD
    ctx->r6 = ADD32(0, 0XD);
    func_00251698(rdram, ctx);
        goto after_0;
    // 0x002561E0: addiu       $a2, $zero, 0xD
    ctx->r6 = ADD32(0, 0XD);
    after_0:
    // 0x002561E4: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x002561E8: jr          $ra
    // 0x002561EC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x002561EC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0044BB14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0044BB14: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x0044BB18: lw          $v1, 0x1BB0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X1BB0);
    // 0x0044BB1C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0044BB20: jr          $ra
    // 0x0044BB24: sw          $v0, 0xB4($v1)
    MEM_W(0XB4, ctx->r3) = ctx->r2;
    return;
    // 0x0044BB24: sw          $v0, 0xB4($v1)
    MEM_W(0XB4, ctx->r3) = ctx->r2;
;}
RECOMP_FUNC void func_0028B424(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0028B424: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x0028B428: addiu       $a0, $s2, 0xC
    ctx->r4 = ADD32(ctx->r18, 0XC);
    // 0x0028B42C: jal         0x00200518
    // 0x0028B430: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    func_00200518(rdram, ctx);
        goto after_0;
    // 0x0028B430: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    after_0:
    // 0x0028B434: beq         $a0, $v0, L_0028B5C0
    if (ctx->r4 == ctx->r2) {
        // 0x0028B438: slti        $v0, $a0, 0xB
        ctx->r2 = SIGNED(ctx->r4) < 0XB ? 1 : 0;
            goto L_0028B5C0;
    }
    // 0x0028B438: slti        $v0, $a0, 0xB
    ctx->r2 = SIGNED(ctx->r4) < 0XB ? 1 : 0;
    // 0x0028B43C: beq         $v0, $zero, L_0028B454
    if (ctx->r2 == 0) {
        // 0x0028B440: addiu       $v0, $zero, 0x9
        ctx->r2 = ADD32(0, 0X9);
            goto L_0028B454;
    }
    // 0x0028B440: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
    // 0x0028B444: beq         $a0, $v0, L_0028B47C
    if (ctx->r4 == ctx->r2) {
        // 0x0028B448: addiu       $a0, $a0, -0x20
        ctx->r4 = ADD32(ctx->r4, -0X20);
            goto L_0028B47C;
    }
    // 0x0028B448: addiu       $a0, $a0, -0x20
    ctx->r4 = ADD32(ctx->r4, -0X20);
    // 0x0028B44C: j           L_0028B4BC
    // 0x0028B450: nop

        goto L_0028B4BC;
    // 0x0028B450: nop

L_0028B454:
    // 0x0028B454: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
    // 0x0028B458: beq         $a0, $v0, L_0028B4A0
    if (ctx->r4 == ctx->r2) {
        // 0x0028B45C: addiu       $v0, $zero, 0xD
        ctx->r2 = ADD32(0, 0XD);
            goto L_0028B4A0;
    }
    // 0x0028B45C: addiu       $v0, $zero, 0xD
    ctx->r2 = ADD32(0, 0XD);
    // 0x0028B460: bne         $a0, $v0, L_0028B4BC
    if (ctx->r4 != ctx->r2) {
        // 0x0028B464: addiu       $a0, $a0, -0x20
        ctx->r4 = ADD32(ctx->r4, -0X20);
            goto L_0028B4BC;
    }
    // 0x0028B464: addiu       $a0, $a0, -0x20
    ctx->r4 = ADD32(ctx->r4, -0X20);
    // 0x0028B468: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x0028B46C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0028B470: sw          $v0, 0x7490($at)
    MEM_W(0X7490, ctx->r1) = ctx->r2;
    // 0x0028B474: jr          $ra
    // 0x0028B478: nop

    return;
    // 0x0028B478: nop

L_0028B47C:
    // 0x0028B47C: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0028B480: lw          $v0, 0x7490($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X7490);
    // 0x0028B484: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x0028B488: lw          $v1, 0x2030($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X2030);
    // 0x0028B48C: addiu       $a0, $v0, 0x8
    ctx->r4 = ADD32(ctx->r2, 0X8);
    // 0x0028B490: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0028B494: sw          $a0, 0x7490($at)
    MEM_W(0X7490, ctx->r1) = ctx->r4;
    // 0x0028B498: j           L_0028B5A4
    // 0x0028B49C: nop

        goto L_0028B5A4;
    // 0x0028B49C: nop

L_0028B4A0:
    // 0x0028B4A0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x0028B4A4: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0028B4A8: sw          $zero, 0x7494($at)
    MEM_W(0X7494, ctx->r1) = 0;
    // 0x0028B4AC: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0028B4B0: sw          $v0, 0x7490($at)
    MEM_W(0X7490, ctx->r1) = ctx->r2;
    // 0x0028B4B4: jr          $ra
    // 0x0028B4B8: nop

    return;
    // 0x0028B4B8: nop

L_0028B4BC:
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
L_0028B5A4:
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

L_0028B5C0:
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
RECOMP_FUNC void func_0045F4D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_00426600:
    // 0x0045F4D0: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x0045F4D4: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x0045F4D8: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x0045F4DC: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x0045F4E0: addu        $s6, $a1, $zero
    ctx->r22 = ADD32(ctx->r5, 0);
    // 0x0045F4E4: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x0045F4E8: addu        $s7, $a2, $zero
    ctx->r23 = ADD32(ctx->r6, 0);
    // 0x0045F4EC: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x0045F4F0: addu        $s5, $a3, $zero
    ctx->r21 = ADD32(ctx->r7, 0);
    // 0x0045F4F4: addiu       $v1, $s5, 0xFF
    ctx->r3 = ADD32(ctx->r21, 0XFF);
    // 0x0045F4F8: addiu       $v0, $zero, -0x100
    ctx->r2 = ADD32(0, -0X100);
    // 0x0045F4FC: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x0045F500: and         $s4, $v1, $v0
    ctx->r20 = ctx->r3 & ctx->r2;
    // 0x0045F504: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x0045F508: sll         $s0, $s2, 2
    ctx->r16 = S32(ctx->r18 << 2);
    // 0x0045F50C: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0045F510: addu        $at, $at, $s0
    ctx->r1 = ADD32(ctx->r1, ctx->r16);
    // 0x0045F514: lw          $v1, 0xC60($at)
    ctx->r3 = MEM_W(ctx->r1, 0XC60);
    // 0x0045F518: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x0045F51C: sw          $ra, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r31;
    // 0x0045F520: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x0045F524: beq         $v1, $v0, L_0045F534
    if (ctx->r3 == ctx->r2) {
        // 0x0045F528: sw          $s1, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r17;
            goto L_0045F534;
    }
    // 0x0045F528: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x0045F52C: j           L_00426600
    // 0x0045F530: addiu       $v0, $zero, -0x2
    ctx->r2 = ADD32(0, -0X2);
    entry_00426600(rdram, ctx);
    return;
    // 0x0045F530: addiu       $v0, $zero, -0x2
    ctx->r2 = ADD32(0, -0X2);
L_0045F534:
    // 0x0045F534: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0045F538: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    // 0x0045F53C: lui         $a3, 0x800C
    ctx->r7 = S32(0X800C << 16);
    // 0x0045F540: addiu       $a3, $a3, 0x18B0
    ctx->r7 = ADD32(ctx->r7, 0X18B0);
    // 0x0045F544: jal         0x00204EDC
    // 0x0045F548: addiu       $a2, $zero, 0x23
    ctx->r6 = ADD32(0, 0X23);
    func_00204EDC(rdram, ctx);
        goto after_0;
    // 0x0045F548: addiu       $a2, $zero, 0x23
    ctx->r6 = ADD32(0, 0X23);
    after_0:
    // 0x0045F54C: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x0045F550: lw          $s3, 0x0($s1)
    ctx->r19 = MEM_W(ctx->r17, 0X0);
    // 0x0045F554: jal         0x00285878
    // 0x0045F558: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_00285878(rdram, ctx);
        goto after_1;
    // 0x0045F558: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_1:
    // 0x0045F55C: jal         0x002847E0
    // 0x0045F560: nop

    func_002847E0(rdram, ctx);
        goto after_2;
    // 0x0045F560: nop

    after_2:
    // 0x0045F564: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0045F568: addu        $at, $at, $s0
    ctx->r1 = ADD32(ctx->r1, ctx->r16);
    // 0x0045F56C: lw          $s0, 0xC70($at)
    ctx->r16 = MEM_W(ctx->r1, 0XC70);
    // 0x0045F570: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x0045F574: lui         $at, 0x800F
    ctx->r1 = S32(0X800F << 16);
    // 0x0045F578: sb          $v0, 0x6750($at)
    MEM_B(0X6750, ctx->r1) = ctx->r2;
    // 0x0045F57C: bne         $s0, $zero, L_0045F5DC
    if (ctx->r16 != 0) {
        // 0x0045F580: sll         $a0, $s2, 1
        ctx->r4 = S32(ctx->r18 << 1);
            goto L_0045F5DC;
    }
    // 0x0045F580: sll         $a0, $s2, 1
    ctx->r4 = S32(ctx->r18 << 1);
    // 0x0045F584: addu        $a0, $a0, $s2
    ctx->r4 = ADD32(ctx->r4, ctx->r18);
    // 0x0045F588: sll         $a0, $a0, 2
    ctx->r4 = S32(ctx->r4 << 2);
    // 0x0045F58C: addu        $a0, $a0, $s2
    ctx->r4 = ADD32(ctx->r4, ctx->r18);
    // 0x0045F590: sll         $a0, $a0, 3
    ctx->r4 = S32(ctx->r4 << 3);
    // 0x0045F594: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x0045F598: addiu       $v0, $v0, 0xC80
    ctx->r2 = ADD32(ctx->r2, 0XC80);
    // 0x0045F59C: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x0045F5A0: addu        $a1, $s6, $zero
    ctx->r5 = ADD32(ctx->r22, 0);
    // 0x0045F5A4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x0045F5A8: addu        $a3, $a2, $zero
    ctx->r7 = ADD32(ctx->r6, 0);
    // 0x0045F5AC: sw          $s4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r20;
    // 0x0045F5B0: jal         0x00428C10
    // 0x0045F5B4: sw          $s3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r19;
    entry_00428C10(rdram, ctx);
        goto after_3;
    // 0x0045F5B4: sw          $s3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r19;
    after_3:
    // 0x0045F5B8: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x0045F5BC: beq         $s0, $zero, L_0045F5D0
    if (ctx->r16 == 0) {
        // 0x0045F5C0: addu        $a0, $s7, $zero
        ctx->r4 = ADD32(ctx->r23, 0);
            goto L_0045F5D0;
    }
    // 0x0045F5C0: addu        $a0, $s7, $zero
    ctx->r4 = ADD32(ctx->r23, 0);
    // 0x0045F5C4: addiu       $s0, $zero, -0x1
    ctx->r16 = ADD32(0, -0X1);
    // 0x0045F5C8: bne         $s0, $zero, L_0045F5DC
    if (ctx->r16 != 0) {
        // 0x0045F5CC: nop
    
            goto L_0045F5DC;
    }
    // 0x0045F5CC: nop

L_0045F5D0:
    // 0x0045F5D0: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    // 0x0045F5D4: jal         0x0029E460
    // 0x0045F5D8: addu        $a2, $s5, $zero
    ctx->r6 = ADD32(ctx->r21, 0);
    func_0029E460(rdram, ctx);
        goto after_4;
    // 0x0045F5D8: addu        $a2, $s5, $zero
    ctx->r6 = ADD32(ctx->r21, 0);
    after_4:
L_0045F5DC:
    // 0x0045F5DC: jal         0x002858A4
    // 0x0045F5E0: nop

    func_002858A4(rdram, ctx);
        goto after_5;
    // 0x0045F5E0: nop

    after_5:
    // 0x0045F5E4: jal         0x002053A8
    // 0x0045F5E8: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_002053A8(rdram, ctx);
        goto after_6;
    // 0x0045F5E8: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_6:
    // 0x0045F5EC: beq         $s1, $zero, L_0045F5FC
    if (ctx->r17 == 0) {
        // 0x0045F5F0: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_0045F5FC;
    }
    // 0x0045F5F0: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0045F5F4: jal         0x002052D8
    // 0x0045F5F8: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_002052D8(rdram, ctx);
        goto after_7;
    // 0x0045F5F8: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_7:
L_0045F5FC:
    // 0x0045F5FC: addu        $v0, $s0, $zero
    ctx->r2 = ADD32(ctx->r16, 0);
    // 0x0045F600: lw          $ra, 0x38($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X38);
    // 0x0045F604: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x0045F608: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x0045F60C: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x0045F610: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x0045F614: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x0045F618: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x0045F61C: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x0045F620: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x0045F624: jr          $ra
    // 0x0045F628: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x0045F628: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_00208810(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00208810: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x00208814: sw          $s1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r17;
    // 0x00208818: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x0020881C: sw          $ra, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r31;
    // 0x00208820: sw          $s3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r19;
    // 0x00208824: sw          $s2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r18;
    // 0x00208828: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    // 0x0020882C: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x00208830: andi        $v0, $v0, 0x100
    ctx->r2 = ctx->r2 & 0X100;
    // 0x00208834: beq         $v0, $zero, L_00208848
    if (ctx->r2 == 0) {
        // 0x00208838: addu        $s0, $a1, $zero
        ctx->r16 = ADD32(ctx->r5, 0);
            goto L_00208848;
    }
    // 0x00208838: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x0020883C: lbu         $v0, 0x13($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X13);
    // 0x00208840: beq         $v0, $zero, L_0020963C
    if (ctx->r2 == 0) {
        // 0x00208844: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_0020963C;
    }
    // 0x00208844: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_00208848:
    // 0x00208848: lw          $v0, 0x8($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X8);
    // 0x0020884C: beq         $v0, $zero, L_002090DC
    if (ctx->r2 == 0) {
        // 0x00208850: addiu       $s2, $zero, -0x1
        ctx->r18 = ADD32(0, -0X1);
            goto L_002090DC;
    }
    // 0x00208850: addiu       $s2, $zero, -0x1
    ctx->r18 = ADD32(0, -0X1);
    // 0x00208854: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x00208858: lw          $v0, -0x5528($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X5528);
    // 0x0020885C: andi        $v0, $v0, 0x400
    ctx->r2 = ctx->r2 & 0X400;
    // 0x00208860: bne         $v0, $zero, L_002090DC
    if (ctx->r2 != 0) {
        // 0x00208864: nop
    
            goto L_002090DC;
    }
    // 0x00208864: nop

    // 0x00208868: jal         0x0020798C
    // 0x0020886C: addiu       $a0, $s1, 0x8
    ctx->r4 = ADD32(ctx->r17, 0X8);
    func_0020798C(rdram, ctx);
        goto after_0;
    // 0x0020886C: addiu       $a0, $s1, 0x8
    ctx->r4 = ADD32(ctx->r17, 0X8);
    after_0:
    // 0x00208870: addu        $s3, $v0, $zero
    ctx->r19 = ADD32(ctx->r2, 0);
    // 0x00208874: bne         $s3, $zero, L_00208884
    if (ctx->r19 != 0) {
        // 0x00208878: addu        $a0, $s3, $zero
        ctx->r4 = ADD32(ctx->r19, 0);
            goto L_00208884;
    }
    // 0x00208878: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x0020887C: j           L_0020963C
    // 0x00208880: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
        goto L_0020963C;
    // 0x00208880: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_00208884:
    // 0x00208884: jal         0x002079D8
    // 0x00208888: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    func_002079D8(rdram, ctx);
        goto after_1;
    // 0x00208888: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    after_1:
    // 0x0020888C: bgez        $s0, L_002088B8
    if (SIGNED(ctx->r16) >= 0) {
        // 0x00208890: nop
    
            goto L_002088B8;
    }
    // 0x00208890: nop

    // 0x00208894: lw          $v0, 0x30($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X30);
    // 0x00208898: lbu         $v1, 0x1($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X1);
    // 0x0020889C: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x002088A0: lw          $v0, 0x6D20($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X6D20);
    // 0x002088A4: divu        $zero, $v0, $v1
    lo = S32(U32(ctx->r2) / U32(ctx->r3)); hi = S32(U32(ctx->r2) % U32(ctx->r3));
    // 0x002088A8: bne         $v1, $zero, L_002088B4
    if (ctx->r3 != 0) {
        // 0x002088AC: nop
    
            goto L_002088B4;
    }
    // 0x002088AC: nop

    // 0x002088B0: break       7
    do_break(2132144);
L_002088B4:
    // 0x002088B4: mflo        $s0
    ctx->r16 = lo;
L_002088B8:
    // 0x002088B8: lw          $v0, 0x28($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X28);
    // 0x002088BC: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x002088C0: div         $zero, $s0, $v0
    lo = S32(S64(S32(ctx->r16)) / S64(S32(ctx->r2))); hi = S32(S64(S32(ctx->r16)) % S64(S32(ctx->r2)));
    // 0x002088C4: bne         $v0, $zero, L_002088D0
    if (ctx->r2 != 0) {
        // 0x002088C8: nop
    
            goto L_002088D0;
    }
    // 0x002088C8: nop

    // 0x002088CC: break       7
    do_break(2132172);
L_002088D0:
    // 0x002088D0: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x002088D4: bne         $v0, $at, L_002088E8
    if (ctx->r2 != ctx->r1) {
        // 0x002088D8: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_002088E8;
    }
    // 0x002088D8: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x002088DC: bne         $s0, $at, L_002088E8
    if (ctx->r16 != ctx->r1) {
        // 0x002088E0: nop
    
            goto L_002088E8;
    }
    // 0x002088E0: nop

    // 0x002088E4: break       6
    do_break(2132196);
L_002088E8:
    // 0x002088E8: mfhi        $a2
    ctx->r6 = hi;
    // 0x002088EC: beq         $a1, $zero, L_00208920
    if (ctx->r5 == 0) {
        // 0x002088F0: addu        $a3, $zero, $zero
        ctx->r7 = ADD32(0, 0);
            goto L_00208920;
    }
    // 0x002088F0: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x002088F4: div         $zero, $s0, $a1
    lo = S32(S64(S32(ctx->r16)) / S64(S32(ctx->r5))); hi = S32(S64(S32(ctx->r16)) % S64(S32(ctx->r5)));
    // 0x002088F8: bne         $a1, $zero, L_00208904
    if (ctx->r5 != 0) {
        // 0x002088FC: nop
    
            goto L_00208904;
    }
    // 0x002088FC: nop

    // 0x00208900: break       7
    do_break(2132224);
L_00208904:
    // 0x00208904: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x00208908: bne         $a1, $at, L_0020891C
    if (ctx->r5 != ctx->r1) {
        // 0x0020890C: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_0020891C;
    }
    // 0x0020890C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x00208910: bne         $s0, $at, L_0020891C
    if (ctx->r16 != ctx->r1) {
        // 0x00208914: nop
    
            goto L_0020891C;
    }
    // 0x00208914: nop

    // 0x00208918: break       6
    do_break(2132248);
L_0020891C:
    // 0x0020891C: mfhi        $a3
    ctx->r7 = hi;
L_00208920:
    // 0x00208920: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x00208924: andi        $v0, $v0, 0x10
    ctx->r2 = ctx->r2 & 0X10;
    // 0x00208928: beq         $v0, $zero, L_00208950
    if (ctx->r2 == 0) {
        // 0x0020892C: addiu       $a0, $zero, 0x1
        ctx->r4 = ADD32(0, 0X1);
            goto L_00208950;
    }
    // 0x0020892C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x00208930: lw          $v0, 0x30($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X30);
    // 0x00208934: lbu         $v1, 0x2($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X2);
    // 0x00208938: lbu         $v0, 0x3($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X3);
    // 0x0020893C: addiu       $v1, $v1, 0x6
    ctx->r3 = ADD32(ctx->r3, 0X6);
    // 0x00208940: sllv        $t2, $a0, $v1
    ctx->r10 = S32(ctx->r4 << (ctx->r3 & 31));
    // 0x00208944: addiu       $v0, $v0, 0x6
    ctx->r2 = ADD32(ctx->r2, 0X6);
    // 0x00208948: j           L_00208958
    // 0x0020894C: sllv        $t1, $a0, $v0
    ctx->r9 = S32(ctx->r4 << (ctx->r2 & 31));
        goto L_00208958;
    // 0x0020894C: sllv        $t1, $a0, $v0
    ctx->r9 = S32(ctx->r4 << (ctx->r2 & 31));
L_00208950:
    // 0x00208950: lhu         $t2, 0x18($s1)
    ctx->r10 = MEM_HU(ctx->r17, 0X18);
    // 0x00208954: lhu         $t1, 0x1A($s1)
    ctx->r9 = MEM_HU(ctx->r17, 0X1A);
L_00208958:
    // 0x00208958: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x0020895C: andi        $v0, $v0, 0x20
    ctx->r2 = ctx->r2 & 0X20;
    // 0x00208960: beq         $v0, $zero, L_0020896C
    if (ctx->r2 == 0) {
        // 0x00208964: addu        $t0, $zero, $zero
        ctx->r8 = ADD32(0, 0);
            goto L_0020896C;
    }
    // 0x00208964: addu        $t0, $zero, $zero
    ctx->r8 = ADD32(0, 0);
    // 0x00208968: addiu       $t0, $zero, 0x2
    ctx->r8 = ADD32(0, 0X2);
L_0020896C:
    // 0x0020896C: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x00208970: andi        $v0, $v0, 0x800
    ctx->r2 = ctx->r2 & 0X800;
    // 0x00208974: beq         $v0, $zero, L_00208984
    if (ctx->r2 == 0) {
        // 0x00208978: addu        $v1, $t0, $zero
        ctx->r3 = ADD32(ctx->r8, 0);
            goto L_00208984;
    }
    // 0x00208978: addu        $v1, $t0, $zero
    ctx->r3 = ADD32(ctx->r8, 0);
    // 0x0020897C: ori         $t0, $t0, 0x1
    ctx->r8 = ctx->r8 | 0X1;
    // 0x00208980: ori         $v1, $v1, 0x1
    ctx->r3 = ctx->r3 | 0X1;
L_00208984:
    // 0x00208984: addiu       $a0, $s1, 0x8
    ctx->r4 = ADD32(ctx->r17, 0X8);
    // 0x00208988: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    // 0x0020898C: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x00208990: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x00208994: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x00208998: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    // 0x0020899C: jal         0x00206B30
    // 0x002089A0: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    func_00206B30(rdram, ctx);
        goto after_2;
    // 0x002089A0: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    after_2:
    // 0x002089A4: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x002089A8: andi        $v0, $v0, 0x2000
    ctx->r2 = ctx->r2 & 0X2000;
    // 0x002089AC: beq         $v0, $zero, L_002089DC
    if (ctx->r2 == 0) {
        // 0x002089B0: lui         $a1, 0xE300
        ctx->r5 = S32(0XE300 << 16);
            goto L_002089DC;
    }
    // 0x002089B0: lui         $a1, 0xE300
    ctx->r5 = S32(0XE300 << 16);
    // 0x002089B4: lui         $v1, 0x800E
    ctx->r3 = S32(0X800E << 16);
    // 0x002089B8: addiu       $v1, $v1, -0x71DC
    ctx->r3 = ADD32(ctx->r3, -0X71DC);
    // 0x002089BC: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x002089C0: ori         $a1, $a1, 0xF00
    ctx->r5 = ctx->r5 | 0XF00;
    // 0x002089C4: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x002089C8: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x002089CC: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x002089D0: lui         $v0, 0x1
    ctx->r2 = S32(0X1 << 16);
    // 0x002089D4: sw          $a1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r5;
    // 0x002089D8: sw          $v0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r2;
L_002089DC:
    // 0x002089DC: lui         $a3, 0x800E
    ctx->r7 = S32(0X800E << 16);
    // 0x002089E0: addiu       $a3, $a3, -0x71DC
    ctx->r7 = ADD32(ctx->r7, -0X71DC);
    // 0x002089E4: lw          $a2, 0x0($a3)
    ctx->r6 = MEM_W(ctx->r7, 0X0);
    // 0x002089E8: lw          $v0, 0x30($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X30);
    // 0x002089EC: addu        $a1, $a2, $zero
    ctx->r5 = ADD32(ctx->r6, 0);
    // 0x002089F0: addiu       $a2, $a2, 0x8
    ctx->r6 = ADD32(ctx->r6, 0X8);
    // 0x002089F4: sw          $a2, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r6;
    // 0x002089F8: lbu         $v0, 0x4($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X4);
    // 0x002089FC: lui         $v1, 0xFA00
    ctx->r3 = S32(0XFA00 << 16);
    // 0x00208A00: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x00208A04: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x00208A08: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
    // 0x00208A0C: lbu         $v0, 0x10($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X10);
    // 0x00208A10: lbu         $v1, 0x11($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X11);
    // 0x00208A14: lbu         $a0, 0x12($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0X12);
    // 0x00208A18: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x00208A1C: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x00208A20: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x00208A24: sll         $a0, $a0, 8
    ctx->r4 = S32(ctx->r4 << 8);
    // 0x00208A28: lbu         $v1, 0x13($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X13);
    // 0x00208A2C: or          $v0, $v0, $a0
    ctx->r2 = ctx->r2 | ctx->r4;
    // 0x00208A30: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x00208A34: sw          $v0, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r2;
    // 0x00208A38: lw          $v1, 0x0($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X0);
    // 0x00208A3C: andi        $v0, $v1, 0x400
    ctx->r2 = ctx->r3 & 0X400;
    // 0x00208A40: beq         $v0, $zero, L_00208B3C
    if (ctx->r2 == 0) {
        // 0x00208A44: addiu       $v0, $a2, 0x8
        ctx->r2 = ADD32(ctx->r6, 0X8);
            goto L_00208B3C;
    }
    // 0x00208A44: addiu       $v0, $a2, 0x8
    ctx->r2 = ADD32(ctx->r6, 0X8);
    // 0x00208A48: sw          $v0, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r2;
    // 0x00208A4C: lui         $v0, 0xFB00
    ctx->r2 = S32(0XFB00 << 16);
    // 0x00208A50: addu        $a1, $a2, $zero
    ctx->r5 = ADD32(ctx->r6, 0);
    // 0x00208A54: sw          $v0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r2;
    // 0x00208A58: lbu         $a0, 0x14($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0X14);
    // 0x00208A5C: lbu         $v0, 0x15($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X15);
    // 0x00208A60: lbu         $v1, 0x16($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X16);
    // 0x00208A64: sll         $a0, $a0, 24
    ctx->r4 = S32(ctx->r4 << 24);
    // 0x00208A68: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x00208A6C: or          $a0, $a0, $v0
    ctx->r4 = ctx->r4 | ctx->r2;
    // 0x00208A70: sll         $v1, $v1, 8
    ctx->r3 = S32(ctx->r3 << 8);
    // 0x00208A74: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00208A78: lw          $v0, -0x4750($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X4750);
    // 0x00208A7C: bne         $v0, $zero, L_00208AB0
    if (ctx->r2 != 0) {
        // 0x00208A80: or          $a0, $a0, $v1
        ctx->r4 = ctx->r4 | ctx->r3;
            goto L_00208AB0;
    }
    // 0x00208A80: or          $a0, $a0, $v1
    ctx->r4 = ctx->r4 | ctx->r3;
    // 0x00208A84: lbu         $v0, 0x13($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X13);
    // 0x00208A88: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00208A8C: lwc1        $f1, 0x5334($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X5334);
    // 0x00208A90: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x00208A94: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00208A98: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x00208A9C: nop

    // 0x00208AA0: bc1f        L_00208AD0
    if (!c1cs) {
        // 0x00208AA4: nop
    
            goto L_00208AD0;
    }
    // 0x00208AA4: nop

    // 0x00208AA8: j           L_00208AE0
    // 0x00208AAC: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
        goto L_00208AE0;
    // 0x00208AAC: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
L_00208AB0:
    // 0x00208AB0: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00208AB4: lwc1        $f0, -0x4740($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X4740);
    // 0x00208AB8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00208ABC: lwc1        $f1, 0x5338($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X5338);
    // 0x00208AC0: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x00208AC4: nop

    // 0x00208AC8: bc1tl       L_00208AE0
    if (c1cs) {
        // 0x00208ACC: sub.s       $f0, $f0, $f1
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
            goto L_00208AE0;
    }
    goto skip_0;
    // 0x00208ACC: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    skip_0:
L_00208AD0:
    // 0x00208AD0: trunc.w.s   $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x00208AD4: mfc1        $v1, $f2
    ctx->r3 = (int32_t)ctx->f2.u32l;
    // 0x00208AD8: j           L_00208AF4
    // 0x00208ADC: andi        $v0, $v1, 0xFF
    ctx->r2 = ctx->r3 & 0XFF;
        goto L_00208AF4;
    // 0x00208ADC: andi        $v0, $v1, 0xFF
    ctx->r2 = ctx->r3 & 0XFF;
L_00208AE0:
    // 0x00208AE0: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x00208AE4: trunc.w.s   $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x00208AE8: mfc1        $v1, $f2
    ctx->r3 = (int32_t)ctx->f2.u32l;
    // 0x00208AEC: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x00208AF0: andi        $v0, $v1, 0xFF
    ctx->r2 = ctx->r3 & 0XFF;
L_00208AF4:
    // 0x00208AF4: or          $a0, $a0, $v0
    ctx->r4 = ctx->r4 | ctx->r2;
    // 0x00208AF8: sw          $a0, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r4;
    // 0x00208AFC: lw          $v1, 0x0($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X0);
    // 0x00208B00: andi        $v0, $v1, 0x2
    ctx->r2 = ctx->r3 & 0X2;
    // 0x00208B04: beq         $v0, $zero, L_00208B2C
    if (ctx->r2 == 0) {
        // 0x00208B08: andi        $v0, $v1, 0x1000
        ctx->r2 = ctx->r3 & 0X1000;
            goto L_00208B2C;
    }
    // 0x00208B08: andi        $v0, $v1, 0x1000
    ctx->r2 = ctx->r3 & 0X1000;
    // 0x00208B0C: beq         $v0, $zero, L_002090C0
    if (ctx->r2 == 0) {
        // 0x00208B10: addiu       $a0, $zero, 0x2
        ctx->r4 = ADD32(0, 0X2);
            goto L_002090C0;
    }
    // 0x00208B10: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x00208B14: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00208B18: lw          $v0, -0x4750($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X4750);
    // 0x00208B1C: beq         $v0, $zero, L_002090C0
    if (ctx->r2 == 0) {
        // 0x00208B20: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_002090C0;
    }
    // 0x00208B20: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x00208B24: j           L_002090C0
    // 0x00208B28: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
        goto L_002090C0;
    // 0x00208B28: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
L_00208B2C:
    // 0x00208B2C: bne         $v0, $zero, L_002090C0
    if (ctx->r2 != 0) {
        // 0x00208B30: addiu       $a0, $zero, 0x3
        ctx->r4 = ADD32(0, 0X3);
            goto L_002090C0;
    }
    // 0x00208B30: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    // 0x00208B34: j           L_002090C0
    // 0x00208B38: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
        goto L_002090C0;
    // 0x00208B38: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
L_00208B3C:
    // 0x00208B3C: andi        $v0, $v1, 0x2
    ctx->r2 = ctx->r3 & 0X2;
    // 0x00208B40: beq         $v0, $zero, L_00208DE4
    if (ctx->r2 == 0) {
        // 0x00208B44: andi        $v0, $v1, 0x2000
        ctx->r2 = ctx->r3 & 0X2000;
            goto L_00208DE4;
    }
    // 0x00208B44: andi        $v0, $v1, 0x2000
    ctx->r2 = ctx->r3 & 0X2000;
    // 0x00208B48: beq         $v0, $zero, L_00208BB8
    if (ctx->r2 == 0) {
        // 0x00208B4C: nop
    
            goto L_00208BB8;
    }
    // 0x00208B4C: nop

    // 0x00208B50: lw          $v0, 0x30($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X30);
    // 0x00208B54: lbu         $v1, 0x5($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X5);
    // 0x00208B58: slti        $v0, $v1, 0x6
    ctx->r2 = SIGNED(ctx->r3) < 0X6 ? 1 : 0;
    // 0x00208B5C: beq         $v0, $zero, L_00208BB0
    if (ctx->r2 == 0) {
        // 0x00208B60: slti        $v0, $v1, 0x4
        ctx->r2 = SIGNED(ctx->r3) < 0X4 ? 1 : 0;
            goto L_00208BB0;
    }
    // 0x00208B60: slti        $v0, $v1, 0x4
    ctx->r2 = SIGNED(ctx->r3) < 0X4 ? 1 : 0;
    // 0x00208B64: bne         $v0, $zero, L_002090C0
    if (ctx->r2 != 0) {
        // 0x00208B68: addiu       $a0, $zero, 0x5
        ctx->r4 = ADD32(0, 0X5);
            goto L_002090C0;
    }
    // 0x00208B68: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    // 0x00208B6C: addiu       $a0, $zero, 0x23
    ctx->r4 = ADD32(0, 0X23);
    // 0x00208B70: addiu       $v0, $a2, 0x8
    ctx->r2 = ADD32(ctx->r6, 0X8);
    // 0x00208B74: sw          $v0, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r2;
    // 0x00208B78: lui         $v0, 0xFB00
    ctx->r2 = S32(0XFB00 << 16);
    // 0x00208B7C: sw          $v0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r2;
    // 0x00208B80: lbu         $v0, 0x14($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X14);
    // 0x00208B84: lbu         $v1, 0x15($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X15);
    // 0x00208B88: lbu         $a1, 0x16($s1)
    ctx->r5 = MEM_BU(ctx->r17, 0X16);
    // 0x00208B8C: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x00208B90: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x00208B94: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x00208B98: sll         $a1, $a1, 8
    ctx->r5 = S32(ctx->r5 << 8);
    // 0x00208B9C: lbu         $v1, 0x17($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X17);
    // 0x00208BA0: or          $v0, $v0, $a1
    ctx->r2 = ctx->r2 | ctx->r5;
    // 0x00208BA4: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x00208BA8: j           L_002090C0
    // 0x00208BAC: sw          $v0, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r2;
        goto L_002090C0;
    // 0x00208BAC: sw          $v0, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r2;
L_00208BB0:
    // 0x00208BB0: j           L_002090C0
    // 0x00208BB4: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
        goto L_002090C0;
    // 0x00208BB4: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
L_00208BB8:
    // 0x00208BB8: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00208BBC: lw          $v0, -0x4750($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X4750);
    // 0x00208BC0: bne         $v0, $zero, L_00208BD0
    if (ctx->r2 != 0) {
        // 0x00208BC4: lui         $v0, 0xFB00
        ctx->r2 = S32(0XFB00 << 16);
            goto L_00208BD0;
    }
    // 0x00208BC4: lui         $v0, 0xFB00
    ctx->r2 = S32(0XFB00 << 16);
    // 0x00208BC8: j           L_002090C0
    // 0x00208BCC: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
        goto L_002090C0;
    // 0x00208BCC: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
L_00208BD0:
    // 0x00208BD0: sw          $v0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r2;
    // 0x00208BD4: addiu       $v0, $a2, 0x8
    ctx->r2 = ADD32(ctx->r6, 0X8);
    // 0x00208BD8: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00208BDC: lwc1        $f0, -0x474C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X474C);
    // 0x00208BE0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00208BE4: lwc1        $f1, 0x533C($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X533C);
    // 0x00208BE8: addu        $a1, $a2, $zero
    ctx->r5 = ADD32(ctx->r6, 0);
    // 0x00208BEC: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x00208BF0: nop

    // 0x00208BF4: bc1t        L_00208C0C
    if (c1cs) {
        // 0x00208BF8: sw          $v0, 0x0($a3)
        MEM_W(0X0, ctx->r7) = ctx->r2;
            goto L_00208C0C;
    }
    // 0x00208BF8: sw          $v0, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r2;
    // 0x00208BFC: trunc.w.s   $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x00208C00: mfc1        $v1, $f2
    ctx->r3 = (int32_t)ctx->f2.u32l;
    // 0x00208C04: j           L_00208C20
    // 0x00208C08: nop

        goto L_00208C20;
    // 0x00208C08: nop

L_00208C0C:
    // 0x00208C0C: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x00208C10: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x00208C14: trunc.w.s   $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x00208C18: mfc1        $v1, $f2
    ctx->r3 = (int32_t)ctx->f2.u32l;
    // 0x00208C1C: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
L_00208C20:
    // 0x00208C20: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00208C24: lwc1        $f0, -0x4748($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X4748);
    // 0x00208C28: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00208C2C: lwc1        $f1, 0x5340($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X5340);
    // 0x00208C30: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x00208C34: nop

    // 0x00208C38: bc1t        L_00208C50
    if (c1cs) {
        // 0x00208C3C: sll         $a0, $v1, 24
        ctx->r4 = S32(ctx->r3 << 24);
            goto L_00208C50;
    }
    // 0x00208C3C: sll         $a0, $v1, 24
    ctx->r4 = S32(ctx->r3 << 24);
    // 0x00208C40: trunc.w.s   $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x00208C44: mfc1        $v1, $f2
    ctx->r3 = (int32_t)ctx->f2.u32l;
    // 0x00208C48: j           L_00208C68
    // 0x00208C4C: andi        $v0, $v1, 0xFF
    ctx->r2 = ctx->r3 & 0XFF;
        goto L_00208C68;
    // 0x00208C4C: andi        $v0, $v1, 0xFF
    ctx->r2 = ctx->r3 & 0XFF;
L_00208C50:
    // 0x00208C50: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x00208C54: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x00208C58: trunc.w.s   $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x00208C5C: mfc1        $v1, $f2
    ctx->r3 = (int32_t)ctx->f2.u32l;
    // 0x00208C60: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x00208C64: andi        $v0, $v1, 0xFF
    ctx->r2 = ctx->r3 & 0XFF;
L_00208C68:
    // 0x00208C68: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x00208C6C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00208C70: lwc1        $f0, -0x4744($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X4744);
    // 0x00208C74: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00208C78: lwc1        $f1, 0x5344($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X5344);
    // 0x00208C7C: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x00208C80: nop

    // 0x00208C84: bc1t        L_00208C9C
    if (c1cs) {
        // 0x00208C88: or          $a0, $a0, $v0
        ctx->r4 = ctx->r4 | ctx->r2;
            goto L_00208C9C;
    }
    // 0x00208C88: or          $a0, $a0, $v0
    ctx->r4 = ctx->r4 | ctx->r2;
    // 0x00208C8C: trunc.w.s   $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x00208C90: mfc1        $v1, $f2
    ctx->r3 = (int32_t)ctx->f2.u32l;
    // 0x00208C94: j           L_00208CB4
    // 0x00208C98: andi        $v0, $v1, 0xFF
    ctx->r2 = ctx->r3 & 0XFF;
        goto L_00208CB4;
    // 0x00208C98: andi        $v0, $v1, 0xFF
    ctx->r2 = ctx->r3 & 0XFF;
L_00208C9C:
    // 0x00208C9C: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x00208CA0: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x00208CA4: trunc.w.s   $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x00208CA8: mfc1        $v1, $f2
    ctx->r3 = (int32_t)ctx->f2.u32l;
    // 0x00208CAC: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x00208CB0: andi        $v0, $v1, 0xFF
    ctx->r2 = ctx->r3 & 0XFF;
L_00208CB4:
    // 0x00208CB4: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x00208CB8: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00208CBC: lwc1        $f0, -0x4740($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X4740);
    // 0x00208CC0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00208CC4: lwc1        $f1, 0x5348($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X5348);
    // 0x00208CC8: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x00208CCC: nop

    // 0x00208CD0: bc1t        L_00208CE8
    if (c1cs) {
        // 0x00208CD4: or          $a0, $a0, $v0
        ctx->r4 = ctx->r4 | ctx->r2;
            goto L_00208CE8;
    }
    // 0x00208CD4: or          $a0, $a0, $v0
    ctx->r4 = ctx->r4 | ctx->r2;
    // 0x00208CD8: trunc.w.s   $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x00208CDC: mfc1        $v1, $f2
    ctx->r3 = (int32_t)ctx->f2.u32l;
    // 0x00208CE0: j           L_00208D00
    // 0x00208CE4: andi        $v0, $v1, 0xFF
    ctx->r2 = ctx->r3 & 0XFF;
        goto L_00208D00;
    // 0x00208CE4: andi        $v0, $v1, 0xFF
    ctx->r2 = ctx->r3 & 0XFF;
L_00208CE8:
    // 0x00208CE8: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x00208CEC: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x00208CF0: trunc.w.s   $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x00208CF4: mfc1        $v1, $f2
    ctx->r3 = (int32_t)ctx->f2.u32l;
    // 0x00208CF8: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x00208CFC: andi        $v0, $v1, 0xFF
    ctx->r2 = ctx->r3 & 0XFF;
L_00208D00:
    // 0x00208D00: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x00208D04: lw          $v1, -0x4750($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X4750);
    // 0x00208D08: or          $v0, $a0, $v0
    ctx->r2 = ctx->r4 | ctx->r2;
    // 0x00208D0C: sw          $v0, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r2;
    // 0x00208D10: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x00208D14: sltiu       $v0, $v1, 0x7
    ctx->r2 = ctx->r3 < 0X7 ? 1 : 0;
    // 0x00208D18: beq         $v0, $zero, L_002090C8
    if (ctx->r2 == 0) {
        // 0x00208D1C: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_002090C8;
    }
    // 0x00208D1C: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x00208D20: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00208D24: addu        $at, $at, $v0
    gpr jr_addend_00208D2C = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x00208D28: lw          $v0, 0x5350($at)
    ctx->r2 = ADD32(ctx->r1, 0X5350);
    // 0x00208D2C: jr          $v0
    // 0x00208D30: nop

    switch (jr_addend_00208D2C >> 2) {
        case 0: goto L_00208D34; break;
        case 1: goto L_00208D34; break;
        case 2: goto L_00208D3C; break;
        case 3: goto L_00208D4C; break;
        case 4: goto L_00208D4C; break;
        case 5: goto L_00208D54; break;
        case 6: goto L_00208D44; break;
        default: switch_error(__func__, 0x00208D2C, 0x800A5350);
    }
    // 0x00208D30: nop

L_00208D34:
    // 0x00208D34: j           L_002090C0
    // 0x00208D38: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
        goto L_002090C0;
    // 0x00208D38: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
L_00208D3C:
    // 0x00208D3C: j           L_002090C0
    // 0x00208D40: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
        goto L_002090C0;
    // 0x00208D40: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
L_00208D44:
    // 0x00208D44: j           L_002090C0
    // 0x00208D48: addiu       $a0, $zero, 0x9
    ctx->r4 = ADD32(0, 0X9);
        goto L_002090C0;
    // 0x00208D48: addiu       $a0, $zero, 0x9
    ctx->r4 = ADD32(0, 0X9);
L_00208D4C:
    // 0x00208D4C: j           L_002090C0
    // 0x00208D50: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
        goto L_002090C0;
    // 0x00208D50: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
L_00208D54:
    // 0x00208D54: lui         $v1, 0x800E
    ctx->r3 = S32(0X800E << 16);
    // 0x00208D58: addiu       $v1, $v1, -0x71DC
    ctx->r3 = ADD32(ctx->r3, -0X71DC);
    // 0x00208D5C: lw          $a1, 0x0($v1)
    ctx->r5 = MEM_W(ctx->r3, 0X0);
    // 0x00208D60: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00208D64: lwc1        $f1, 0x536C($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X536C);
    // 0x00208D68: lui         $v0, 0xFA00
    ctx->r2 = S32(0XFA00 << 16);
    // 0x00208D6C: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
    // 0x00208D70: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00208D74: lwc1        $f0, -0x473C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X473C);
    // 0x00208D78: addiu       $v0, $a1, 0x8
    ctx->r2 = ADD32(ctx->r5, 0X8);
    // 0x00208D7C: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x00208D80: lbu         $a0, 0x10($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0X10);
    // 0x00208D84: lbu         $v1, 0x11($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X11);
    // 0x00208D88: lbu         $v0, 0x12($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X12);
    // 0x00208D8C: sll         $a0, $a0, 24
    ctx->r4 = S32(ctx->r4 << 24);
    // 0x00208D90: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x00208D94: or          $a0, $a0, $v1
    ctx->r4 = ctx->r4 | ctx->r3;
    // 0x00208D98: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x00208D9C: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x00208DA0: nop

    // 0x00208DA4: bc1t        L_00208DBC
    if (c1cs) {
        // 0x00208DA8: or          $a0, $a0, $v0
        ctx->r4 = ctx->r4 | ctx->r2;
            goto L_00208DBC;
    }
    // 0x00208DA8: or          $a0, $a0, $v0
    ctx->r4 = ctx->r4 | ctx->r2;
    // 0x00208DAC: trunc.w.s   $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x00208DB0: mfc1        $v1, $f2
    ctx->r3 = (int32_t)ctx->f2.u32l;
    // 0x00208DB4: j           L_00208DD4
    // 0x00208DB8: andi        $v0, $v1, 0xFF
    ctx->r2 = ctx->r3 & 0XFF;
        goto L_00208DD4;
    // 0x00208DB8: andi        $v0, $v1, 0xFF
    ctx->r2 = ctx->r3 & 0XFF;
L_00208DBC:
    // 0x00208DBC: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x00208DC0: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x00208DC4: trunc.w.s   $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x00208DC8: mfc1        $v1, $f2
    ctx->r3 = (int32_t)ctx->f2.u32l;
    // 0x00208DCC: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x00208DD0: andi        $v0, $v1, 0xFF
    ctx->r2 = ctx->r3 & 0XFF;
L_00208DD4:
    // 0x00208DD4: or          $v0, $a0, $v0
    ctx->r2 = ctx->r4 | ctx->r2;
    // 0x00208DD8: sw          $v0, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r2;
    // 0x00208DDC: j           L_002090C0
    // 0x00208DE0: addiu       $a0, $zero, 0xB
    ctx->r4 = ADD32(0, 0XB);
        goto L_002090C0;
    // 0x00208DE0: addiu       $a0, $zero, 0xB
    ctx->r4 = ADD32(0, 0XB);
L_00208DE4:
    // 0x00208DE4: beq         $v0, $zero, L_00208E98
    if (ctx->r2 == 0) {
        // 0x00208DE8: nop
    
            goto L_00208E98;
    }
    // 0x00208DE8: nop

    // 0x00208DEC: lw          $v0, 0x30($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X30);
    // 0x00208DF0: lbu         $v1, 0x5($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X5);
    // 0x00208DF4: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x00208DF8: beq         $v1, $v0, L_00208E10
    if (ctx->r3 == ctx->r2) {
        // 0x00208DFC: addiu       $v0, $zero, 0x5
        ctx->r2 = ADD32(0, 0X5);
            goto L_00208E10;
    }
    // 0x00208DFC: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x00208E00: beq         $v1, $v0, L_00208E54
    if (ctx->r3 == ctx->r2) {
        // 0x00208E04: addiu       $a0, $zero, 0xC
        ctx->r4 = ADD32(0, 0XC);
            goto L_00208E54;
    }
    // 0x00208E04: addiu       $a0, $zero, 0xC
    ctx->r4 = ADD32(0, 0XC);
    // 0x00208E08: j           L_002090C0
    // 0x00208E0C: nop

        goto L_002090C0;
    // 0x00208E0C: nop

L_00208E10:
    // 0x00208E10: addiu       $a0, $zero, 0x25
    ctx->r4 = ADD32(0, 0X25);
    // 0x00208E14: addiu       $v0, $a2, 0x8
    ctx->r2 = ADD32(ctx->r6, 0X8);
    // 0x00208E18: sw          $v0, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r2;
    // 0x00208E1C: lui         $v0, 0xFB00
    ctx->r2 = S32(0XFB00 << 16);
    // 0x00208E20: sw          $v0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r2;
    // 0x00208E24: lbu         $v0, 0x14($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X14);
    // 0x00208E28: lbu         $v1, 0x15($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X15);
    // 0x00208E2C: lbu         $a1, 0x16($s1)
    ctx->r5 = MEM_BU(ctx->r17, 0X16);
    // 0x00208E30: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x00208E34: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x00208E38: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x00208E3C: sll         $a1, $a1, 8
    ctx->r5 = S32(ctx->r5 << 8);
    // 0x00208E40: lbu         $v1, 0x17($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X17);
    // 0x00208E44: or          $v0, $v0, $a1
    ctx->r2 = ctx->r2 | ctx->r5;
    // 0x00208E48: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x00208E4C: j           L_002090C0
    // 0x00208E50: sw          $v0, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r2;
        goto L_002090C0;
    // 0x00208E50: sw          $v0, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r2;
L_00208E54:
    // 0x00208E54: addiu       $a0, $zero, 0x24
    ctx->r4 = ADD32(0, 0X24);
    // 0x00208E58: addiu       $v0, $a2, 0x8
    ctx->r2 = ADD32(ctx->r6, 0X8);
    // 0x00208E5C: sw          $v0, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r2;
    // 0x00208E60: lui         $v0, 0xFB00
    ctx->r2 = S32(0XFB00 << 16);
    // 0x00208E64: sw          $v0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r2;
    // 0x00208E68: lbu         $v0, 0x14($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X14);
    // 0x00208E6C: lbu         $v1, 0x15($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X15);
    // 0x00208E70: lbu         $a1, 0x16($s1)
    ctx->r5 = MEM_BU(ctx->r17, 0X16);
    // 0x00208E74: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x00208E78: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x00208E7C: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x00208E80: sll         $a1, $a1, 8
    ctx->r5 = S32(ctx->r5 << 8);
    // 0x00208E84: lbu         $v1, 0x17($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X17);
    // 0x00208E88: or          $v0, $v0, $a1
    ctx->r2 = ctx->r2 | ctx->r5;
    // 0x00208E8C: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x00208E90: j           L_002090C0
    // 0x00208E94: sw          $v0, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r2;
        goto L_002090C0;
    // 0x00208E94: sw          $v0, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r2;
L_00208E98:
    // 0x00208E98: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00208E9C: lw          $v0, -0x4750($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X4750);
    // 0x00208EA0: bne         $v0, $zero, L_00208EB0
    if (ctx->r2 != 0) {
        // 0x00208EA4: addu        $a1, $a2, $zero
        ctx->r5 = ADD32(ctx->r6, 0);
            goto L_00208EB0;
    }
    // 0x00208EA4: addu        $a1, $a2, $zero
    ctx->r5 = ADD32(ctx->r6, 0);
    // 0x00208EA8: j           L_002090C0
    // 0x00208EAC: addiu       $a0, $zero, 0xD
    ctx->r4 = ADD32(0, 0XD);
        goto L_002090C0;
    // 0x00208EAC: addiu       $a0, $zero, 0xD
    ctx->r4 = ADD32(0, 0XD);
L_00208EB0:
    // 0x00208EB0: lui         $v0, 0xFB00
    ctx->r2 = S32(0XFB00 << 16);
    // 0x00208EB4: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
    // 0x00208EB8: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00208EBC: lwc1        $f0, -0x474C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X474C);
    // 0x00208EC0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00208EC4: lwc1        $f1, 0x5370($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X5370);
    // 0x00208EC8: addiu       $v0, $a1, 0x8
    ctx->r2 = ADD32(ctx->r5, 0X8);
    // 0x00208ECC: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x00208ED0: nop

    // 0x00208ED4: bc1t        L_00208EEC
    if (c1cs) {
        // 0x00208ED8: sw          $v0, 0x0($a3)
        MEM_W(0X0, ctx->r7) = ctx->r2;
            goto L_00208EEC;
    }
    // 0x00208ED8: sw          $v0, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r2;
    // 0x00208EDC: trunc.w.s   $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x00208EE0: mfc1        $v1, $f2
    ctx->r3 = (int32_t)ctx->f2.u32l;
    // 0x00208EE4: j           L_00208F00
    // 0x00208EE8: nop

        goto L_00208F00;
    // 0x00208EE8: nop

L_00208EEC:
    // 0x00208EEC: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x00208EF0: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x00208EF4: trunc.w.s   $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x00208EF8: mfc1        $v1, $f2
    ctx->r3 = (int32_t)ctx->f2.u32l;
    // 0x00208EFC: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
L_00208F00:
    // 0x00208F00: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00208F04: lwc1        $f0, -0x4748($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X4748);
    // 0x00208F08: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00208F0C: lwc1        $f1, 0x5374($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X5374);
    // 0x00208F10: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x00208F14: nop

    // 0x00208F18: bc1t        L_00208F30
    if (c1cs) {
        // 0x00208F1C: sll         $a0, $v1, 24
        ctx->r4 = S32(ctx->r3 << 24);
            goto L_00208F30;
    }
    // 0x00208F1C: sll         $a0, $v1, 24
    ctx->r4 = S32(ctx->r3 << 24);
    // 0x00208F20: trunc.w.s   $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x00208F24: mfc1        $v1, $f2
    ctx->r3 = (int32_t)ctx->f2.u32l;
    // 0x00208F28: j           L_00208F48
    // 0x00208F2C: andi        $v0, $v1, 0xFF
    ctx->r2 = ctx->r3 & 0XFF;
        goto L_00208F48;
    // 0x00208F2C: andi        $v0, $v1, 0xFF
    ctx->r2 = ctx->r3 & 0XFF;
L_00208F30:
    // 0x00208F30: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x00208F34: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x00208F38: trunc.w.s   $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x00208F3C: mfc1        $v1, $f2
    ctx->r3 = (int32_t)ctx->f2.u32l;
    // 0x00208F40: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x00208F44: andi        $v0, $v1, 0xFF
    ctx->r2 = ctx->r3 & 0XFF;
L_00208F48:
    // 0x00208F48: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x00208F4C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00208F50: lwc1        $f0, -0x4744($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X4744);
    // 0x00208F54: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00208F58: lwc1        $f1, 0x5378($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X5378);
    // 0x00208F5C: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x00208F60: nop

    // 0x00208F64: bc1t        L_00208F7C
    if (c1cs) {
        // 0x00208F68: or          $a0, $a0, $v0
        ctx->r4 = ctx->r4 | ctx->r2;
            goto L_00208F7C;
    }
    // 0x00208F68: or          $a0, $a0, $v0
    ctx->r4 = ctx->r4 | ctx->r2;
    // 0x00208F6C: trunc.w.s   $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x00208F70: mfc1        $v1, $f2
    ctx->r3 = (int32_t)ctx->f2.u32l;
    // 0x00208F74: j           L_00208F94
    // 0x00208F78: andi        $v0, $v1, 0xFF
    ctx->r2 = ctx->r3 & 0XFF;
        goto L_00208F94;
    // 0x00208F78: andi        $v0, $v1, 0xFF
    ctx->r2 = ctx->r3 & 0XFF;
L_00208F7C:
    // 0x00208F7C: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x00208F80: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x00208F84: trunc.w.s   $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x00208F88: mfc1        $v1, $f2
    ctx->r3 = (int32_t)ctx->f2.u32l;
    // 0x00208F8C: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x00208F90: andi        $v0, $v1, 0xFF
    ctx->r2 = ctx->r3 & 0XFF;
L_00208F94:
    // 0x00208F94: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x00208F98: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00208F9C: lwc1        $f0, -0x4740($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X4740);
    // 0x00208FA0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00208FA4: lwc1        $f1, 0x537C($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X537C);
    // 0x00208FA8: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x00208FAC: nop

    // 0x00208FB0: bc1t        L_00208FC8
    if (c1cs) {
        // 0x00208FB4: or          $a0, $a0, $v0
        ctx->r4 = ctx->r4 | ctx->r2;
            goto L_00208FC8;
    }
    // 0x00208FB4: or          $a0, $a0, $v0
    ctx->r4 = ctx->r4 | ctx->r2;
    // 0x00208FB8: trunc.w.s   $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x00208FBC: mfc1        $v1, $f2
    ctx->r3 = (int32_t)ctx->f2.u32l;
    // 0x00208FC0: j           L_00208FE0
    // 0x00208FC4: andi        $v0, $v1, 0xFF
    ctx->r2 = ctx->r3 & 0XFF;
        goto L_00208FE0;
    // 0x00208FC4: andi        $v0, $v1, 0xFF
    ctx->r2 = ctx->r3 & 0XFF;
L_00208FC8:
    // 0x00208FC8: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x00208FCC: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x00208FD0: trunc.w.s   $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x00208FD4: mfc1        $v1, $f2
    ctx->r3 = (int32_t)ctx->f2.u32l;
    // 0x00208FD8: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x00208FDC: andi        $v0, $v1, 0xFF
    ctx->r2 = ctx->r3 & 0XFF;
L_00208FE0:
    // 0x00208FE0: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x00208FE4: lw          $v1, -0x4750($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X4750);
    // 0x00208FE8: or          $v0, $a0, $v0
    ctx->r2 = ctx->r4 | ctx->r2;
    // 0x00208FEC: sw          $v0, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r2;
    // 0x00208FF0: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x00208FF4: sltiu       $v0, $v1, 0x7
    ctx->r2 = ctx->r3 < 0X7 ? 1 : 0;
    // 0x00208FF8: beq         $v0, $zero, L_002090C8
    if (ctx->r2 == 0) {
        // 0x00208FFC: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_002090C8;
    }
    // 0x00208FFC: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x00209000: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00209004: addu        $at, $at, $v0
    gpr jr_addend_0020900C = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x00209008: lw          $v0, 0x5380($at)
    ctx->r2 = ADD32(ctx->r1, 0X5380);
    // 0x0020900C: jr          $v0
    // 0x00209010: nop

    switch (jr_addend_0020900C >> 2) {
        case 0: goto L_00209014; break;
        case 1: goto L_00209014; break;
        case 2: goto L_0020901C; break;
        case 3: goto L_0020902C; break;
        case 4: goto L_0020902C; break;
        case 5: goto L_00209034; break;
        case 6: goto L_00209024; break;
        default: switch_error(__func__, 0x0020900C, 0x800A5380);
    }
    // 0x00209010: nop

L_00209014:
    // 0x00209014: j           L_002090C0
    // 0x00209018: addiu       $a0, $zero, 0xE
    ctx->r4 = ADD32(0, 0XE);
        goto L_002090C0;
    // 0x00209018: addiu       $a0, $zero, 0xE
    ctx->r4 = ADD32(0, 0XE);
L_0020901C:
    // 0x0020901C: j           L_002090C0
    // 0x00209020: addiu       $a0, $zero, 0xF
    ctx->r4 = ADD32(0, 0XF);
        goto L_002090C0;
    // 0x00209020: addiu       $a0, $zero, 0xF
    ctx->r4 = ADD32(0, 0XF);
L_00209024:
    // 0x00209024: j           L_002090C0
    // 0x00209028: addiu       $a0, $zero, 0x9
    ctx->r4 = ADD32(0, 0X9);
        goto L_002090C0;
    // 0x00209028: addiu       $a0, $zero, 0x9
    ctx->r4 = ADD32(0, 0X9);
L_0020902C:
    // 0x0020902C: j           L_002090C0
    // 0x00209030: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
        goto L_002090C0;
    // 0x00209030: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
L_00209034:
    // 0x00209034: lui         $v1, 0x800E
    ctx->r3 = S32(0X800E << 16);
    // 0x00209038: addiu       $v1, $v1, -0x71DC
    ctx->r3 = ADD32(ctx->r3, -0X71DC);
    // 0x0020903C: lw          $a1, 0x0($v1)
    ctx->r5 = MEM_W(ctx->r3, 0X0);
    // 0x00209040: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00209044: lwc1        $f1, 0x539C($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X539C);
    // 0x00209048: lui         $v0, 0xFA00
    ctx->r2 = S32(0XFA00 << 16);
    // 0x0020904C: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
    // 0x00209050: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00209054: lwc1        $f0, -0x473C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X473C);
    // 0x00209058: addiu       $v0, $a1, 0x8
    ctx->r2 = ADD32(ctx->r5, 0X8);
    // 0x0020905C: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x00209060: lbu         $a0, 0x10($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0X10);
    // 0x00209064: lbu         $v1, 0x11($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X11);
    // 0x00209068: lbu         $v0, 0x12($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X12);
    // 0x0020906C: sll         $a0, $a0, 24
    ctx->r4 = S32(ctx->r4 << 24);
    // 0x00209070: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x00209074: or          $a0, $a0, $v1
    ctx->r4 = ctx->r4 | ctx->r3;
    // 0x00209078: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x0020907C: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x00209080: nop

    // 0x00209084: bc1t        L_0020909C
    if (c1cs) {
        // 0x00209088: or          $a0, $a0, $v0
        ctx->r4 = ctx->r4 | ctx->r2;
            goto L_0020909C;
    }
    // 0x00209088: or          $a0, $a0, $v0
    ctx->r4 = ctx->r4 | ctx->r2;
    // 0x0020908C: trunc.w.s   $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x00209090: mfc1        $v1, $f2
    ctx->r3 = (int32_t)ctx->f2.u32l;
    // 0x00209094: j           L_002090B4
    // 0x00209098: andi        $v0, $v1, 0xFF
    ctx->r2 = ctx->r3 & 0XFF;
        goto L_002090B4;
    // 0x00209098: andi        $v0, $v1, 0xFF
    ctx->r2 = ctx->r3 & 0XFF;
L_0020909C:
    // 0x0020909C: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x002090A0: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x002090A4: trunc.w.s   $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x002090A8: mfc1        $v1, $f2
    ctx->r3 = (int32_t)ctx->f2.u32l;
    // 0x002090AC: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x002090B0: andi        $v0, $v1, 0xFF
    ctx->r2 = ctx->r3 & 0XFF;
L_002090B4:
    // 0x002090B4: or          $v0, $a0, $v0
    ctx->r2 = ctx->r4 | ctx->r2;
    // 0x002090B8: sw          $v0, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r2;
    // 0x002090BC: addiu       $a0, $zero, 0x11
    ctx->r4 = ADD32(0, 0X11);
L_002090C0:
    // 0x002090C0: jal         0x00207A70
    // 0x002090C4: nop

    func_00207A70(rdram, ctx);
        goto after_3;
    // 0x002090C4: nop

    after_3:
L_002090C8:
    // 0x002090C8: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x002090CC: jal         0x002051F4
    // 0x002090D0: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    func_002051F4(rdram, ctx);
        goto after_4;
    // 0x002090D0: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    after_4:
    // 0x002090D4: j           L_0020946C
    // 0x002090D8: nop

        goto L_0020946C;
    // 0x002090D8: nop

L_002090DC:
    // 0x002090DC: lui         $a2, 0x800E
    ctx->r6 = S32(0X800E << 16);
    // 0x002090E0: addiu       $a2, $a2, -0x71DC
    ctx->r6 = ADD32(ctx->r6, -0X71DC);
    // 0x002090E4: lw          $a1, 0x0($a2)
    ctx->r5 = MEM_W(ctx->r6, 0X0);
    // 0x002090E8: addu        $v0, $a1, $zero
    ctx->r2 = ADD32(ctx->r5, 0);
    // 0x002090EC: addiu       $a1, $a1, 0x8
    ctx->r5 = ADD32(ctx->r5, 0X8);
    // 0x002090F0: sw          $a1, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r5;
    // 0x002090F4: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x002090F8: lbu         $a0, -0x4738($a0)
    ctx->r4 = MEM_BU(ctx->r4, -0X4738);
    // 0x002090FC: lui         $v1, 0xE700
    ctx->r3 = S32(0XE700 << 16);
    // 0x00209100: sw          $v1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r3;
    // 0x00209104: beq         $a0, $zero, L_00209188
    if (ctx->r4 == 0) {
        // 0x00209108: sw          $zero, 0x4($v0)
        MEM_W(0X4, ctx->r2) = 0;
            goto L_00209188;
    }
    // 0x00209108: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x0020910C: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00209110: lbu         $v0, -0x4734($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X4734);
    // 0x00209114: beq         $v0, $zero, L_0020915C
    if (ctx->r2 == 0) {
        // 0x00209118: addiu       $v0, $a1, 0x8
        ctx->r2 = ADD32(ctx->r5, 0X8);
            goto L_0020915C;
    }
    // 0x00209118: addiu       $v0, $a1, 0x8
    ctx->r2 = ADD32(ctx->r5, 0X8);
    // 0x0020911C: sw          $v0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r2;
    // 0x00209120: lui         $v0, 0xFA00
    ctx->r2 = S32(0XFA00 << 16);
    // 0x00209124: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
    // 0x00209128: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0020912C: lbu         $v0, -0x4737($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X4737);
    // 0x00209130: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x00209134: lbu         $v1, -0x4736($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X4736);
    // 0x00209138: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x0020913C: lbu         $a0, -0x4735($a0)
    ctx->r4 = MEM_BU(ctx->r4, -0X4735);
    // 0x00209140: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x00209144: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x00209148: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x0020914C: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x00209150: lbu         $v1, -0x4733($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X4733);
    // 0x00209154: j           L_002091F8
    // 0x00209158: sll         $a0, $a0, 8
    ctx->r4 = S32(ctx->r4 << 8);
        goto L_002091F8;
    // 0x00209158: sll         $a0, $a0, 8
    ctx->r4 = S32(ctx->r4 << 8);
L_0020915C:
    // 0x0020915C: sw          $v0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r2;
    // 0x00209160: lui         $v0, 0xFA00
    ctx->r2 = S32(0XFA00 << 16);
    // 0x00209164: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
    // 0x00209168: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0020916C: lbu         $v0, -0x4737($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X4737);
    // 0x00209170: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x00209174: lbu         $v1, -0x4736($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X4736);
    // 0x00209178: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x0020917C: lbu         $a0, -0x4735($a0)
    ctx->r4 = MEM_BU(ctx->r4, -0X4735);
    // 0x00209180: j           L_002091E8
    // 0x00209184: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
        goto L_002091E8;
    // 0x00209184: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
L_00209188:
    // 0x00209188: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0020918C: lbu         $v0, -0x4734($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X4734);
    // 0x00209190: beq         $v0, $zero, L_002091CC
    if (ctx->r2 == 0) {
        // 0x00209194: addiu       $v0, $a1, 0x8
        ctx->r2 = ADD32(ctx->r5, 0X8);
            goto L_002091CC;
    }
    // 0x00209194: addiu       $v0, $a1, 0x8
    ctx->r2 = ADD32(ctx->r5, 0X8);
    // 0x00209198: sw          $v0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r2;
    // 0x0020919C: lui         $v0, 0xFA00
    ctx->r2 = S32(0XFA00 << 16);
    // 0x002091A0: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
    // 0x002091A4: lbu         $v0, 0x10($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X10);
    // 0x002091A8: lbu         $v1, 0x11($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X11);
    // 0x002091AC: lbu         $a0, 0x12($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0X12);
    // 0x002091B0: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x002091B4: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x002091B8: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x002091BC: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x002091C0: lbu         $v1, -0x4733($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X4733);
    // 0x002091C4: j           L_002091F8
    // 0x002091C8: sll         $a0, $a0, 8
    ctx->r4 = S32(ctx->r4 << 8);
        goto L_002091F8;
    // 0x002091C8: sll         $a0, $a0, 8
    ctx->r4 = S32(ctx->r4 << 8);
L_002091CC:
    // 0x002091CC: sw          $v0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r2;
    // 0x002091D0: lui         $v0, 0xFA00
    ctx->r2 = S32(0XFA00 << 16);
    // 0x002091D4: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
    // 0x002091D8: lbu         $v0, 0x10($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X10);
    // 0x002091DC: lbu         $v1, 0x11($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X11);
    // 0x002091E0: lbu         $a0, 0x12($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0X12);
    // 0x002091E4: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
L_002091E8:
    // 0x002091E8: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x002091EC: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x002091F0: sll         $a0, $a0, 8
    ctx->r4 = S32(ctx->r4 << 8);
    // 0x002091F4: lbu         $v1, 0x13($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X13);
L_002091F8:
    // 0x002091F8: or          $v0, $v0, $a0
    ctx->r2 = ctx->r2 | ctx->r4;
    // 0x002091FC: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x00209200: sw          $v0, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r2;
    // 0x00209204: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x00209208: addiu       $a1, $a1, -0x71DC
    ctx->r5 = ADD32(ctx->r5, -0X71DC);
    // 0x0020920C: lw          $a0, 0x0($a1)
    ctx->r4 = MEM_W(ctx->r5, 0X0);
    // 0x00209210: lui         $v1, 0xD700
    ctx->r3 = S32(0XD700 << 16);
    // 0x00209214: addu        $v0, $a0, $zero
    ctx->r2 = ADD32(ctx->r4, 0);
    // 0x00209218: sw          $v1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r3;
    // 0x0020921C: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x00209220: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x00209224: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x00209228: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x0020922C: beq         $v0, $zero, L_0020923C
    if (ctx->r2 == 0) {
        // 0x00209230: sw          $a0, 0x0($a1)
        MEM_W(0X0, ctx->r5) = ctx->r4;
            goto L_0020923C;
    }
    // 0x00209230: sw          $a0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r4;
    // 0x00209234: j           L_00209464
    // 0x00209238: addiu       $a0, $zero, 0x12
    ctx->r4 = ADD32(0, 0X12);
        goto L_00209464;
    // 0x00209238: addiu       $a0, $zero, 0x12
    ctx->r4 = ADD32(0, 0X12);
L_0020923C:
    // 0x0020923C: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00209240: lw          $v0, -0x4750($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X4750);
    // 0x00209244: bne         $v0, $zero, L_00209254
    if (ctx->r2 != 0) {
        // 0x00209248: addu        $a2, $a0, $zero
        ctx->r6 = ADD32(ctx->r4, 0);
            goto L_00209254;
    }
    // 0x00209248: addu        $a2, $a0, $zero
    ctx->r6 = ADD32(ctx->r4, 0);
    // 0x0020924C: j           L_00209464
    // 0x00209250: addiu       $a0, $zero, 0x13
    ctx->r4 = ADD32(0, 0X13);
        goto L_00209464;
    // 0x00209250: addiu       $a0, $zero, 0x13
    ctx->r4 = ADD32(0, 0X13);
L_00209254:
    // 0x00209254: lui         $v0, 0xFB00
    ctx->r2 = S32(0XFB00 << 16);
    // 0x00209258: sw          $v0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r2;
    // 0x0020925C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00209260: lwc1        $f0, -0x474C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X474C);
    // 0x00209264: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00209268: lwc1        $f1, 0x53A0($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X53A0);
    // 0x0020926C: addiu       $v0, $a2, 0x8
    ctx->r2 = ADD32(ctx->r6, 0X8);
    // 0x00209270: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x00209274: nop

    // 0x00209278: bc1t        L_00209290
    if (c1cs) {
        // 0x0020927C: sw          $v0, 0x0($a1)
        MEM_W(0X0, ctx->r5) = ctx->r2;
            goto L_00209290;
    }
    // 0x0020927C: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
    // 0x00209280: trunc.w.s   $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x00209284: mfc1        $v1, $f2
    ctx->r3 = (int32_t)ctx->f2.u32l;
    // 0x00209288: j           L_002092A4
    // 0x0020928C: nop

        goto L_002092A4;
    // 0x0020928C: nop

L_00209290:
    // 0x00209290: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x00209294: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x00209298: trunc.w.s   $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x0020929C: mfc1        $v1, $f2
    ctx->r3 = (int32_t)ctx->f2.u32l;
    // 0x002092A0: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
L_002092A4:
    // 0x002092A4: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x002092A8: lwc1        $f0, -0x4748($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X4748);
    // 0x002092AC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002092B0: lwc1        $f1, 0x53A4($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X53A4);
    // 0x002092B4: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x002092B8: nop

    // 0x002092BC: bc1t        L_002092D4
    if (c1cs) {
        // 0x002092C0: sll         $a0, $v1, 24
        ctx->r4 = S32(ctx->r3 << 24);
            goto L_002092D4;
    }
    // 0x002092C0: sll         $a0, $v1, 24
    ctx->r4 = S32(ctx->r3 << 24);
    // 0x002092C4: trunc.w.s   $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x002092C8: mfc1        $v1, $f2
    ctx->r3 = (int32_t)ctx->f2.u32l;
    // 0x002092CC: j           L_002092EC
    // 0x002092D0: andi        $v0, $v1, 0xFF
    ctx->r2 = ctx->r3 & 0XFF;
        goto L_002092EC;
    // 0x002092D0: andi        $v0, $v1, 0xFF
    ctx->r2 = ctx->r3 & 0XFF;
L_002092D4:
    // 0x002092D4: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x002092D8: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x002092DC: trunc.w.s   $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x002092E0: mfc1        $v1, $f2
    ctx->r3 = (int32_t)ctx->f2.u32l;
    // 0x002092E4: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x002092E8: andi        $v0, $v1, 0xFF
    ctx->r2 = ctx->r3 & 0XFF;
L_002092EC:
    // 0x002092EC: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x002092F0: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x002092F4: lwc1        $f0, -0x4744($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X4744);
    // 0x002092F8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002092FC: lwc1        $f1, 0x53A8($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X53A8);
    // 0x00209300: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x00209304: nop

    // 0x00209308: bc1t        L_00209320
    if (c1cs) {
        // 0x0020930C: or          $a0, $a0, $v0
        ctx->r4 = ctx->r4 | ctx->r2;
            goto L_00209320;
    }
    // 0x0020930C: or          $a0, $a0, $v0
    ctx->r4 = ctx->r4 | ctx->r2;
    // 0x00209310: trunc.w.s   $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x00209314: mfc1        $v1, $f2
    ctx->r3 = (int32_t)ctx->f2.u32l;
    // 0x00209318: j           L_00209338
    // 0x0020931C: andi        $v0, $v1, 0xFF
    ctx->r2 = ctx->r3 & 0XFF;
        goto L_00209338;
    // 0x0020931C: andi        $v0, $v1, 0xFF
    ctx->r2 = ctx->r3 & 0XFF;
L_00209320:
    // 0x00209320: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x00209324: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x00209328: trunc.w.s   $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x0020932C: mfc1        $v1, $f2
    ctx->r3 = (int32_t)ctx->f2.u32l;
    // 0x00209330: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x00209334: andi        $v0, $v1, 0xFF
    ctx->r2 = ctx->r3 & 0XFF;
L_00209338:
    // 0x00209338: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x0020933C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00209340: lwc1        $f0, -0x4740($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X4740);
    // 0x00209344: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00209348: lwc1        $f1, 0x53AC($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X53AC);
    // 0x0020934C: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x00209350: nop

    // 0x00209354: bc1t        L_0020936C
    if (c1cs) {
        // 0x00209358: or          $a0, $a0, $v0
        ctx->r4 = ctx->r4 | ctx->r2;
            goto L_0020936C;
    }
    // 0x00209358: or          $a0, $a0, $v0
    ctx->r4 = ctx->r4 | ctx->r2;
    // 0x0020935C: trunc.w.s   $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x00209360: mfc1        $v1, $f2
    ctx->r3 = (int32_t)ctx->f2.u32l;
    // 0x00209364: j           L_00209384
    // 0x00209368: andi        $v0, $v1, 0xFF
    ctx->r2 = ctx->r3 & 0XFF;
        goto L_00209384;
    // 0x00209368: andi        $v0, $v1, 0xFF
    ctx->r2 = ctx->r3 & 0XFF;
L_0020936C:
    // 0x0020936C: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x00209370: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x00209374: trunc.w.s   $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x00209378: mfc1        $v1, $f2
    ctx->r3 = (int32_t)ctx->f2.u32l;
    // 0x0020937C: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x00209380: andi        $v0, $v1, 0xFF
    ctx->r2 = ctx->r3 & 0XFF;
L_00209384:
    // 0x00209384: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x00209388: lw          $v1, -0x4750($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X4750);
    // 0x0020938C: or          $v0, $a0, $v0
    ctx->r2 = ctx->r4 | ctx->r2;
    // 0x00209390: sw          $v0, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r2;
    // 0x00209394: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x00209398: sltiu       $v0, $v1, 0x7
    ctx->r2 = ctx->r3 < 0X7 ? 1 : 0;
    // 0x0020939C: beq         $v0, $zero, L_0020946C
    if (ctx->r2 == 0) {
        // 0x002093A0: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_0020946C;
    }
    // 0x002093A0: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x002093A4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002093A8: addu        $at, $at, $v0
    gpr jr_addend_002093B0 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x002093AC: lw          $v0, 0x53B0($at)
    ctx->r2 = ADD32(ctx->r1, 0X53B0);
    // 0x002093B0: jr          $v0
    // 0x002093B4: nop

    switch (jr_addend_002093B0 >> 2) {
        case 0: goto L_002093B8; break;
        case 1: goto L_002093B8; break;
        case 2: goto L_002093C0; break;
        case 3: goto L_002093D0; break;
        case 4: goto L_002093D0; break;
        case 5: goto L_002093D8; break;
        case 6: goto L_002093C8; break;
        default: switch_error(__func__, 0x002093B0, 0x800A53B0);
    }
    // 0x002093B4: nop

L_002093B8:
    // 0x002093B8: j           L_00209464
    // 0x002093BC: addiu       $a0, $zero, 0x14
    ctx->r4 = ADD32(0, 0X14);
        goto L_00209464;
    // 0x002093BC: addiu       $a0, $zero, 0x14
    ctx->r4 = ADD32(0, 0X14);
L_002093C0:
    // 0x002093C0: j           L_00209464
    // 0x002093C4: addiu       $a0, $zero, 0x15
    ctx->r4 = ADD32(0, 0X15);
        goto L_00209464;
    // 0x002093C4: addiu       $a0, $zero, 0x15
    ctx->r4 = ADD32(0, 0X15);
L_002093C8:
    // 0x002093C8: j           L_00209464
    // 0x002093CC: addiu       $a0, $zero, 0x16
    ctx->r4 = ADD32(0, 0X16);
        goto L_00209464;
    // 0x002093CC: addiu       $a0, $zero, 0x16
    ctx->r4 = ADD32(0, 0X16);
L_002093D0:
    // 0x002093D0: j           L_00209464
    // 0x002093D4: addiu       $a0, $zero, 0x17
    ctx->r4 = ADD32(0, 0X17);
        goto L_00209464;
    // 0x002093D4: addiu       $a0, $zero, 0x17
    ctx->r4 = ADD32(0, 0X17);
L_002093D8:
    // 0x002093D8: lui         $v1, 0x800E
    ctx->r3 = S32(0X800E << 16);
    // 0x002093DC: addiu       $v1, $v1, -0x71DC
    ctx->r3 = ADD32(ctx->r3, -0X71DC);
    // 0x002093E0: lw          $a1, 0x0($v1)
    ctx->r5 = MEM_W(ctx->r3, 0X0);
    // 0x002093E4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002093E8: lwc1        $f1, 0x53CC($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X53CC);
    // 0x002093EC: lui         $v0, 0xFA00
    ctx->r2 = S32(0XFA00 << 16);
    // 0x002093F0: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
    // 0x002093F4: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x002093F8: lwc1        $f0, -0x473C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X473C);
    // 0x002093FC: addiu       $v0, $a1, 0x8
    ctx->r2 = ADD32(ctx->r5, 0X8);
    // 0x00209400: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x00209404: lbu         $a0, 0x10($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0X10);
    // 0x00209408: lbu         $v1, 0x11($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X11);
    // 0x0020940C: lbu         $v0, 0x12($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X12);
    // 0x00209410: sll         $a0, $a0, 24
    ctx->r4 = S32(ctx->r4 << 24);
    // 0x00209414: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x00209418: or          $a0, $a0, $v1
    ctx->r4 = ctx->r4 | ctx->r3;
    // 0x0020941C: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x00209420: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x00209424: nop

    // 0x00209428: bc1t        L_00209440
    if (c1cs) {
        // 0x0020942C: or          $a0, $a0, $v0
        ctx->r4 = ctx->r4 | ctx->r2;
            goto L_00209440;
    }
    // 0x0020942C: or          $a0, $a0, $v0
    ctx->r4 = ctx->r4 | ctx->r2;
    // 0x00209430: trunc.w.s   $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x00209434: mfc1        $v1, $f2
    ctx->r3 = (int32_t)ctx->f2.u32l;
    // 0x00209438: j           L_00209458
    // 0x0020943C: andi        $v0, $v1, 0xFF
    ctx->r2 = ctx->r3 & 0XFF;
        goto L_00209458;
    // 0x0020943C: andi        $v0, $v1, 0xFF
    ctx->r2 = ctx->r3 & 0XFF;
L_00209440:
    // 0x00209440: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x00209444: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x00209448: trunc.w.s   $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x0020944C: mfc1        $v1, $f2
    ctx->r3 = (int32_t)ctx->f2.u32l;
    // 0x00209450: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x00209454: andi        $v0, $v1, 0xFF
    ctx->r2 = ctx->r3 & 0XFF;
L_00209458:
    // 0x00209458: or          $v0, $a0, $v0
    ctx->r2 = ctx->r4 | ctx->r2;
    // 0x0020945C: sw          $v0, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r2;
    // 0x00209460: addiu       $a0, $zero, 0x11
    ctx->r4 = ADD32(0, 0X11);
L_00209464:
    // 0x00209464: jal         0x00207A70
    // 0x00209468: nop

    func_00207A70(rdram, ctx);
        goto after_5;
    // 0x00209468: nop

    after_5:
L_0020946C:
    // 0x0020946C: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x00209470: andi        $v0, $a0, 0x100
    ctx->r2 = ctx->r4 & 0X100;
    // 0x00209474: bne         $v0, $zero, L_0020949C
    if (ctx->r2 != 0) {
        // 0x00209478: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_0020949C;
    }
    // 0x00209478: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0020947C: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x00209480: lw          $v1, -0x4750($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X4750);
    // 0x00209484: beq         $v1, $v0, L_0020949C
    if (ctx->r3 == ctx->r2) {
        // 0x00209488: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_0020949C;
    }
    // 0x00209488: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x0020948C: beq         $v1, $v0, L_0020949C
    if (ctx->r3 == ctx->r2) {
        // 0x00209490: addiu       $v0, $zero, 0x6
        ctx->r2 = ADD32(0, 0X6);
            goto L_0020949C;
    }
    // 0x00209490: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x00209494: bne         $v1, $v0, L_002094E8
    if (ctx->r3 != ctx->r2) {
        // 0x00209498: andi        $v0, $a0, 0x80
        ctx->r2 = ctx->r4 & 0X80;
            goto L_002094E8;
    }
    // 0x00209498: andi        $v0, $a0, 0x80
    ctx->r2 = ctx->r4 & 0X80;
L_0020949C:
    // 0x0020949C: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x002094A0: lw          $v0, -0x4750($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X4750);
    // 0x002094A4: bne         $v0, $zero, L_002094D0
    if (ctx->r2 != 0) {
        // 0x002094A8: nop
    
            goto L_002094D0;
    }
    // 0x002094A8: nop

    // 0x002094AC: lw          $v1, 0x0($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X0);
    // 0x002094B0: andi        $v0, $v1, 0x1000
    ctx->r2 = ctx->r3 & 0X1000;
    // 0x002094B4: bne         $v0, $zero, L_00209544
    if (ctx->r2 != 0) {
        // 0x002094B8: addiu       $s2, $zero, 0x3
        ctx->r18 = ADD32(0, 0X3);
            goto L_00209544;
    }
    // 0x002094B8: addiu       $s2, $zero, 0x3
    ctx->r18 = ADD32(0, 0X3);
    // 0x002094BC: andi        $v0, $v1, 0x200
    ctx->r2 = ctx->r3 & 0X200;
    // 0x002094C0: beq         $v0, $zero, L_00209544
    if (ctx->r2 == 0) {
        // 0x002094C4: addiu       $s2, $zero, 0x1
        ctx->r18 = ADD32(0, 0X1);
            goto L_00209544;
    }
    // 0x002094C4: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
    // 0x002094C8: j           L_00209544
    // 0x002094CC: addiu       $s2, $zero, 0x4
    ctx->r18 = ADD32(0, 0X4);
        goto L_00209544;
    // 0x002094CC: addiu       $s2, $zero, 0x4
    ctx->r18 = ADD32(0, 0X4);
L_002094D0:
    // 0x002094D0: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x002094D4: andi        $v0, $v0, 0x1000
    ctx->r2 = ctx->r2 & 0X1000;
    // 0x002094D8: beq         $v0, $zero, L_00209544
    if (ctx->r2 == 0) {
        // 0x002094DC: addiu       $s2, $zero, 0x5
        ctx->r18 = ADD32(0, 0X5);
            goto L_00209544;
    }
    // 0x002094DC: addiu       $s2, $zero, 0x5
    ctx->r18 = ADD32(0, 0X5);
    // 0x002094E0: j           L_00209544
    // 0x002094E4: addiu       $s2, $zero, 0x3
    ctx->r18 = ADD32(0, 0X3);
        goto L_00209544;
    // 0x002094E4: addiu       $s2, $zero, 0x3
    ctx->r18 = ADD32(0, 0X3);
L_002094E8:
    // 0x002094E8: beq         $v0, $zero, L_00209500
    if (ctx->r2 == 0) {
        // 0x002094EC: andi        $v0, $a0, 0x200
        ctx->r2 = ctx->r4 & 0X200;
            goto L_00209500;
    }
    // 0x002094EC: andi        $v0, $a0, 0x200
    ctx->r2 = ctx->r4 & 0X200;
    // 0x002094F0: jal         0x00207FEC
    // 0x002094F4: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    func_00207FEC(rdram, ctx);
        goto after_6;
    // 0x002094F4: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    after_6:
    // 0x002094F8: j           L_00209548
    // 0x002094FC: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_00209548;
    // 0x002094FC: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_00209500:
    // 0x00209500: bne         $v0, $zero, L_00209544
    if (ctx->r2 != 0) {
        // 0x00209504: addiu       $s2, $zero, 0x7
        ctx->r18 = ADD32(0, 0X7);
            goto L_00209544;
    }
    // 0x00209504: addiu       $s2, $zero, 0x7
    ctx->r18 = ADD32(0, 0X7);
    // 0x00209508: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0020950C: lw          $v0, -0x4768($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X4768);
    // 0x00209510: beq         $v0, $zero, L_00209530
    if (ctx->r2 == 0) {
        // 0x00209514: nop
    
            goto L_00209530;
    }
    // 0x00209514: nop

    // 0x00209518: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0020951C: lw          $v0, -0x4764($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X4764);
    // 0x00209520: beq         $v0, $zero, L_00209544
    if (ctx->r2 == 0) {
        // 0x00209524: addiu       $s2, $zero, 0x9
        ctx->r18 = ADD32(0, 0X9);
            goto L_00209544;
    }
    // 0x00209524: addiu       $s2, $zero, 0x9
    ctx->r18 = ADD32(0, 0X9);
    // 0x00209528: j           L_00209544
    // 0x0020952C: addiu       $s2, $zero, 0x8
    ctx->r18 = ADD32(0, 0X8);
        goto L_00209544;
    // 0x0020952C: addiu       $s2, $zero, 0x8
    ctx->r18 = ADD32(0, 0X8);
L_00209530:
    // 0x00209530: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00209534: lw          $v0, -0x4764($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X4764);
    // 0x00209538: beq         $v0, $zero, L_00209544
    if (ctx->r2 == 0) {
        // 0x0020953C: addiu       $s2, $zero, 0xB
        ctx->r18 = ADD32(0, 0XB);
            goto L_00209544;
    }
    // 0x0020953C: addiu       $s2, $zero, 0xB
    ctx->r18 = ADD32(0, 0XB);
    // 0x00209540: addiu       $s2, $zero, 0xA
    ctx->r18 = ADD32(0, 0XA);
L_00209544:
    // 0x00209544: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_00209548:
    // 0x00209548: beq         $s2, $v0, L_0020955C
    if (ctx->r18 == ctx->r2) {
        // 0x0020954C: lui         $a1, 0x26
        ctx->r5 = S32(0X26 << 16);
            goto L_0020955C;
    }
    // 0x0020954C: lui         $a1, 0x26
    ctx->r5 = S32(0X26 << 16);
    // 0x00209550: jal         0x00207FEC
    // 0x00209554: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_00207FEC(rdram, ctx);
        goto after_7;
    // 0x00209554: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_7:
    // 0x00209558: lui         $a1, 0x26
    ctx->r5 = S32(0X26 << 16);
L_0020955C:
    // 0x0020955C: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x00209560: andi        $v0, $v0, 0x1000
    ctx->r2 = ctx->r2 & 0X1000;
    // 0x00209564: beq         $v0, $zero, L_00209578
    if (ctx->r2 == 0) {
        // 0x00209568: ori         $a1, $a1, 0x404
        ctx->r5 = ctx->r5 | 0X404;
            goto L_00209578;
    }
    // 0x00209568: ori         $a1, $a1, 0x404
    ctx->r5 = ctx->r5 | 0X404;
    // 0x0020956C: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00209570: lw          $v0, -0x475C($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X475C);
    // 0x00209574: or          $a1, $v0, $a1
    ctx->r5 = ctx->r2 | ctx->r5;
L_00209578:
    // 0x00209578: lui         $v1, 0xFF
    ctx->r3 = S32(0XFF << 16);
    // 0x0020957C: ori         $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 | 0XFFFF;
    // 0x00209580: lui         $a3, 0x800E
    ctx->r7 = S32(0X800E << 16);
    // 0x00209584: addiu       $a3, $a3, -0x71DC
    ctx->r7 = ADD32(ctx->r7, -0X71DC);
    // 0x00209588: nor         $v0, $zero, $a1
    ctx->r2 = ~(0 | ctx->r5);
    // 0x0020958C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x00209590: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x00209594: lui         $v1, 0xD900
    ctx->r3 = S32(0XD900 << 16);
    // 0x00209598: lw          $a2, 0x0($a3)
    ctx->r6 = MEM_W(ctx->r7, 0X0);
    // 0x0020959C: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x002095A0: addu        $a0, $a2, $zero
    ctx->r4 = ADD32(ctx->r6, 0);
    // 0x002095A4: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
    // 0x002095A8: sw          $zero, 0x4($a0)
    MEM_W(0X4, ctx->r4) = 0;
    // 0x002095AC: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x002095B0: addiu       $a2, $a2, 0x8
    ctx->r6 = ADD32(ctx->r6, 0X8);
    // 0x002095B4: andi        $v0, $a0, 0x1000
    ctx->r2 = ctx->r4 & 0X1000;
    // 0x002095B8: bne         $v0, $zero, L_002095C8
    if (ctx->r2 != 0) {
        // 0x002095BC: sw          $a2, 0x0($a3)
        MEM_W(0X0, ctx->r7) = ctx->r6;
            goto L_002095C8;
    }
    // 0x002095BC: sw          $a2, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r6;
    // 0x002095C0: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x002095C4: lw          $a1, -0x475C($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X475C);
L_002095C8:
    // 0x002095C8: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x002095CC: lw          $v1, -0x4750($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X4750);
    // 0x002095D0: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x002095D4: bne         $v1, $v0, L_002095E8
    if (ctx->r3 != ctx->r2) {
        // 0x002095D8: andi        $v0, $a0, 0x42
        ctx->r2 = ctx->r4 & 0X42;
            goto L_002095E8;
    }
    // 0x002095D8: andi        $v0, $a0, 0x42
    ctx->r2 = ctx->r4 & 0X42;
    // 0x002095DC: lui         $v0, 0x2
    ctx->r2 = S32(0X2 << 16);
    // 0x002095E0: or          $a1, $a1, $v0
    ctx->r5 = ctx->r5 | ctx->r2;
    // 0x002095E4: andi        $v0, $a0, 0x42
    ctx->r2 = ctx->r4 & 0X42;
L_002095E8:
    // 0x002095E8: bne         $v0, $zero, L_002095FC
    if (ctx->r2 != 0) {
        // 0x002095EC: lui         $v0, 0x20
        ctx->r2 = S32(0X20 << 16);
            goto L_002095FC;
    }
    // 0x002095EC: lui         $v0, 0x20
    ctx->r2 = S32(0X20 << 16);
    // 0x002095F0: lui         $v0, 0x2
    ctx->r2 = S32(0X2 << 16);
    // 0x002095F4: or          $a1, $a1, $v0
    ctx->r5 = ctx->r5 | ctx->r2;
    // 0x002095F8: lui         $v0, 0x20
    ctx->r2 = S32(0X20 << 16);
L_002095FC:
    // 0x002095FC: ori         $v0, $v0, 0x4
    ctx->r2 = ctx->r2 | 0X4;
    // 0x00209600: or          $a1, $a1, $v0
    ctx->r5 = ctx->r5 | ctx->r2;
    // 0x00209604: andi        $v0, $a0, 0x4
    ctx->r2 = ctx->r4 & 0X4;
    // 0x00209608: beql        $v0, $zero, L_00209610
    if (ctx->r2 == 0) {
        // 0x0020960C: ori         $a1, $a1, 0x400
        ctx->r5 = ctx->r5 | 0X400;
            goto L_00209610;
    }
    goto skip_1;
    // 0x0020960C: ori         $a1, $a1, 0x400
    ctx->r5 = ctx->r5 | 0X400;
    skip_1:
L_00209610:
    // 0x00209610: andi        $v0, $a0, 0x10
    ctx->r2 = ctx->r4 & 0X10;
    // 0x00209614: beq         $v0, $zero, L_00209620
    if (ctx->r2 == 0) {
        // 0x00209618: lui         $v0, 0x6
        ctx->r2 = S32(0X6 << 16);
            goto L_00209620;
    }
    // 0x00209618: lui         $v0, 0x6
    ctx->r2 = S32(0X6 << 16);
    // 0x0020961C: or          $a1, $a1, $v0
    ctx->r5 = ctx->r5 | ctx->r2;
L_00209620:
    // 0x00209620: lui         $a0, 0xD9FF
    ctx->r4 = S32(0XD9FF << 16);
    // 0x00209624: ori         $a0, $a0, 0xFFFF
    ctx->r4 = ctx->r4 | 0XFFFF;
    // 0x00209628: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0020962C: addiu       $v1, $a2, 0x8
    ctx->r3 = ADD32(ctx->r6, 0X8);
    // 0x00209630: sw          $v1, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r3;
    // 0x00209634: sw          $a0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r4;
    // 0x00209638: sw          $a1, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r5;
L_0020963C:
    // 0x0020963C: lw          $ra, 0x48($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X48);
    // 0x00209640: lw          $s3, 0x44($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X44);
    // 0x00209644: lw          $s2, 0x40($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X40);
    // 0x00209648: lw          $s1, 0x3C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X3C);
    // 0x0020964C: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x00209650: jr          $ra
    // 0x00209654: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x00209654: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_002241D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002241D8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x002241DC: addu        $t3, $a0, $zero
    ctx->r11 = ADD32(ctx->r4, 0);
    // 0x002241E0: addu        $a0, $a1, $zero
    ctx->r4 = ADD32(ctx->r5, 0);
    // 0x002241E4: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x002241E8: lhu         $v0, 0xB8($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0XB8);
    // 0x002241EC: beq         $v0, $a2, L_00224250
    if (ctx->r2 == ctx->r6) {
        // 0x002241F0: addu        $v1, $zero, $zero
        ctx->r3 = ADD32(0, 0);
            goto L_00224250;
    }
    // 0x002241F0: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
    // 0x002241F4: lw          $v0, 0x74($t3)
    ctx->r2 = MEM_W(ctx->r11, 0X74);
    // 0x002241F8: addiu       $t0, $v0, 0x8
    ctx->r8 = ADD32(ctx->r2, 0X8);
    // 0x002241FC: lw          $t1, 0x4($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X4);
    // 0x00224200: blez        $t1, L_00224228
    if (SIGNED(ctx->r9) <= 0) {
        // 0x00224204: addu        $v0, $a2, $zero
        ctx->r2 = ADD32(ctx->r6, 0);
            goto L_00224228;
    }
    // 0x00224204: addu        $v0, $a2, $zero
    ctx->r2 = ADD32(ctx->r6, 0);
    // 0x00224208: andi        $t2, $v0, 0xFFFF
    ctx->r10 = ctx->r2 & 0XFFFF;
L_0022420C:
    // 0x0022420C: lhu         $v0, 0x0($t0)
    ctx->r2 = MEM_HU(ctx->r8, 0X0);
    // 0x00224210: beq         $v0, $t2, L_00224230
    if (ctx->r2 == ctx->r10) {
        // 0x00224214: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_00224230;
    }
    // 0x00224214: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x00224218: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x0022421C: slt         $v0, $v1, $t1
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r9) ? 1 : 0;
    // 0x00224220: bne         $v0, $zero, L_0022420C
    if (ctx->r2 != 0) {
        // 0x00224224: addiu       $t0, $t0, 0x2
        ctx->r8 = ADD32(ctx->r8, 0X2);
            goto L_0022420C;
    }
    // 0x00224224: addiu       $t0, $t0, 0x2
    ctx->r8 = ADD32(ctx->r8, 0X2);
L_00224228:
    // 0x00224228: addiu       $v1, $zero, -0x1
    ctx->r3 = ADD32(0, -0X1);
    // 0x0022422C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_00224230:
    // 0x00224230: beq         $v1, $v0, L_00224250
    if (ctx->r3 == ctx->r2) {
        // 0x00224234: nop
    
            goto L_00224250;
    }
    // 0x00224234: nop

    // 0x00224238: sh          $v1, 0x2($a0)
    MEM_H(0X2, ctx->r4) = ctx->r3;
    // 0x0022423C: sh          $a2, 0xB8($a0)
    MEM_H(0XB8, ctx->r4) = ctx->r6;
    // 0x00224240: lw          $a1, 0x40($t3)
    ctx->r5 = MEM_W(ctx->r11, 0X40);
    // 0x00224244: lw          $a2, 0x14($t3)
    ctx->r6 = MEM_W(ctx->r11, 0X14);
    // 0x00224248: jal         0x0021A150
    // 0x0022424C: nop

    func_0021A150(rdram, ctx);
        goto after_0;
    // 0x0022424C: nop

    after_0:
L_00224250:
    // 0x00224250: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x00224254: jr          $ra
    // 0x00224258: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00224258: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_002548FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002548FC: lh          $v1, 0xA08($a0)
    ctx->r3 = MEM_H(ctx->r4, 0XA08);
    // 0x00254900: addiu       $v0, $zero, 0x12
    ctx->r2 = ADD32(0, 0X12);
    // 0x00254904: beq         $v1, $v0, L_0025491C
    if (ctx->r3 == ctx->r2) {
        // 0x00254908: addiu       $v0, $zero, 0x10
        ctx->r2 = ADD32(0, 0X10);
            goto L_0025491C;
    }
    // 0x00254908: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x0025490C: beq         $v1, $v0, L_0025491C
    if (ctx->r3 == ctx->r2) {
        // 0x00254910: addiu       $v0, $zero, 0x11
        ctx->r2 = ADD32(0, 0X11);
            goto L_0025491C;
    }
    // 0x00254910: addiu       $v0, $zero, 0x11
    ctx->r2 = ADD32(0, 0X11);
    // 0x00254914: bne         $v1, $v0, L_00254924
    if (ctx->r3 != ctx->r2) {
            // 0x00254918: nop

    func_00254924(rdram, ctx);
    return;
    }
    // 0x00254918: nop

L_0025491C:
    // 0x0025491C: jr          $ra
    // 0x00254920: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x00254920: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
;}
RECOMP_FUNC void func_0046588C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0046588C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00465890: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x00465894: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x00465898: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x0046589C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x004658A0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x004658A4: lw          $s1, 0x1180($s2)
    ctx->r17 = MEM_W(ctx->r18, 0X1180);
    // 0x004658A8: beq         $s1, $zero, L_004658E4
    if (ctx->r17 == 0) {
        // 0x004658AC: nop
    
            goto L_004658E4;
    }
    // 0x004658AC: nop

L_004658B0:
    // 0x004658B0: lw          $a0, 0x8($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X8);
    // 0x004658B4: lw          $s0, 0x4($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X4);
    // 0x004658B8: jal         0x0026DFB0
    // 0x004658BC: nop

    func_0026DFB0(rdram, ctx);
        goto after_0;
    // 0x004658BC: nop

    after_0:
    // 0x004658C0: addiu       $a0, $s2, 0x1180
    ctx->r4 = ADD32(ctx->r18, 0X1180);
    // 0x004658C4: jal         0x00200738
    // 0x004658C8: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_00200738(rdram, ctx);
        goto after_1;
    // 0x004658C8: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_1:
    // 0x004658CC: addiu       $a0, $s2, 0x1194
    ctx->r4 = ADD32(ctx->r18, 0X1194);
    // 0x004658D0: jal         0x00200518
    // 0x004658D4: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_00200518(rdram, ctx);
        goto after_2;
    // 0x004658D4: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_2:
    // 0x004658D8: addu        $s1, $s0, $zero
    ctx->r17 = ADD32(ctx->r16, 0);
    // 0x004658DC: bne         $s1, $zero, L_004658B0
    if (ctx->r17 != 0) {
        // 0x004658E0: nop
    
            goto L_004658B0;
    }
    // 0x004658E0: nop

L_004658E4:
    // 0x004658E4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x004658E8: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x004658EC: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x004658F0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x004658F4: jr          $ra
    // 0x004658F8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x004658F8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_00289854(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00289854: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00289858: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0028985C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x00289860: jal         0x0042F57C
    // 0x00289864: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    func_0042F57C(rdram, ctx);
        goto after_0;
    // 0x00289864: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    after_0:
    // 0x00289868: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0028986C: addiu       $a1, $zero, 0xD
    ctx->r5 = ADD32(0, 0XD);
    // 0x00289870: jal         0x00288E58
    // 0x00289874: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    func_00288E58(rdram, ctx);
        goto after_1;
    // 0x00289874: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_1:
    // 0x00289878: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x0028987C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00289880: jr          $ra
    // 0x00289884: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00289884: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00447A24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00447A24: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00447A28: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x00447A2C: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x00447A30: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x00447A34: jal         0x00243414
    // 0x00447A38: addiu       $a1, $a0, 0x140
    ctx->r5 = ADD32(ctx->r4, 0X140);
    func_00243414(rdram, ctx);
        goto after_0;
    // 0x00447A38: addiu       $a1, $a0, 0x140
    ctx->r5 = ADD32(ctx->r4, 0X140);
    after_0:
    // 0x00447A3C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x00447A40: jr          $ra
    // 0x00447A44: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00447A44: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_004162FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004162FC: andi        $a0, $a0, 0xFF
    ctx->r4 = ctx->r4 & 0XFF;
    // 0x00416300: addiu       $a0, $a0, -0x21
    ctx->r4 = ADD32(ctx->r4, -0X21);
    // 0x00416304: sltiu       $v0, $a0, 0x5E
    ctx->r2 = ctx->r4 < 0X5E ? 1 : 0;
    // 0x00416308: mtc1        $a2, $f2
    ctx->f2.u32l = ctx->r6;
    // 0x0041630C: mtc1        $a3, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r7;
    // 0x00416310: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00416314: lwc1        $f0, 0xC60($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0XC60);
    // 0x00416318: beq         $v0, $zero, L_004163B4
    if (ctx->r2 == 0) {
        // 0x0041631C: sll         $v0, $a0, 2
        ctx->r2 = S32(ctx->r4 << 2);
            goto L_004163B4;
    }
    // 0x0041631C: sll         $v0, $a0, 2
    ctx->r2 = S32(ctx->r4 << 2);
    // 0x00416320: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00416324: addu        $at, $at, $v0
    gpr jr_addend_0041632C = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x00416328: lw          $v0, 0xC68($at)
    ctx->r2 = ADD32(ctx->r1, 0XC68);
    // 0x0041632C: jr          $v0
    // 0x00416330: nop

    switch (jr_addend_0041632C >> 2) {
        case 0: goto L_004163AC; break;
        case 1: goto L_004163B4; break;
        case 2: goto L_004163B4; break;
        case 3: goto L_00416334; break;
        case 4: goto L_004163B4; break;
        case 5: goto L_00416334; break;
        case 6: goto L_004163B4; break;
        case 7: goto L_004163B4; break;
        case 8: goto L_004163B4; break;
        case 9: goto L_004163B4; break;
        case 10: goto L_004163B4; break;
        case 11: goto L_004163B4; break;
        case 12: goto L_004163B4; break;
        case 13: goto L_004163AC; break;
        case 14: goto L_004163B4; break;
        case 15: goto L_004163B4; break;
        case 16: goto L_004163B4; break;
        case 17: goto L_004163B4; break;
        case 18: goto L_004163B4; break;
        case 19: goto L_004163B4; break;
        case 20: goto L_004163B4; break;
        case 21: goto L_004163B4; break;
        case 22: goto L_004163B4; break;
        case 23: goto L_004163B4; break;
        case 24: goto L_004163B4; break;
        case 25: goto L_004163B4; break;
        case 26: goto L_004163B4; break;
        case 27: goto L_004163B4; break;
        case 28: goto L_004163B4; break;
        case 29: goto L_004163B4; break;
        case 30: goto L_004163B4; break;
        case 31: goto L_004163B4; break;
        case 32: goto L_00416374; break;
        case 33: goto L_004163B4; break;
        case 34: goto L_004163B4; break;
        case 35: goto L_004163B4; break;
        case 36: goto L_004163B4; break;
        case 37: goto L_004163B4; break;
        case 38: goto L_004163B4; break;
        case 39: goto L_004163B4; break;
        case 40: goto L_0041633C; break;
        case 41: goto L_004163B4; break;
        case 42: goto L_004163B4; break;
        case 43: goto L_0041634C; break;
        case 44: goto L_0041639C; break;
        case 45: goto L_004163B4; break;
        case 46: goto L_004163B4; break;
        case 47: goto L_004163B4; break;
        case 48: goto L_004163B4; break;
        case 49: goto L_004163B4; break;
        case 50: goto L_004163B4; break;
        case 51: goto L_004163B4; break;
        case 52: goto L_004163B4; break;
        case 53: goto L_004163B4; break;
        case 54: goto L_004163B4; break;
        case 55: goto L_004163B4; break;
        case 56: goto L_004163B4; break;
        case 57: goto L_004163B4; break;
        case 58: goto L_004163B4; break;
        case 59: goto L_004163B4; break;
        case 60: goto L_004163B4; break;
        case 61: goto L_004163B4; break;
        case 62: goto L_004163B4; break;
        case 63: goto L_004163B4; break;
        case 64: goto L_00416374; break;
        case 65: goto L_004163B4; break;
        case 66: goto L_004163B4; break;
        case 67: goto L_004163B4; break;
        case 68: goto L_004163B4; break;
        case 69: goto L_004163B4; break;
        case 70: goto L_004163B4; break;
        case 71: goto L_004163B4; break;
        case 72: goto L_0041633C; break;
        case 73: goto L_004163B4; break;
        case 74: goto L_004163B4; break;
        case 75: goto L_0041634C; break;
        case 76: goto L_0041639C; break;
        case 77: goto L_004163B4; break;
        case 78: goto L_004163B4; break;
        case 79: goto L_004163B4; break;
        case 80: goto L_004163B4; break;
        case 81: goto L_004163B4; break;
        case 82: goto L_004163B4; break;
        case 83: goto L_004163B4; break;
        case 84: goto L_004163B4; break;
        case 85: goto L_004163B4; break;
        case 86: goto L_004163B4; break;
        case 87: goto L_004163B4; break;
        case 88: goto L_004163B4; break;
        case 89: goto L_004163B4; break;
        case 90: goto L_004163B4; break;
        case 91: goto L_004163B4; break;
        case 92: goto L_004163B4; break;
        case 93: goto L_00416334; break;
        default: switch_error(__func__, 0x0041632C, 0x800C0C68);
    }
    // 0x00416330: nop

L_00416334:
    // 0x00416334: jr          $ra
    // 0x00416338: mov.s       $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    ctx->f0.fl = ctx->f1.fl;
    return;
    // 0x00416338: mov.s       $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    ctx->f0.fl = ctx->f1.fl;
L_0041633C:
    // 0x0041633C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00416340: lwc1        $f0, 0xDE0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0XDE0);
    // 0x00416344: j           L_004163B4
    // 0x00416348: nop

        goto L_004163B4;
    // 0x00416348: nop

L_0041634C:
    // 0x0041634C: andi        $a1, $a1, 0xFF
    ctx->r5 = ctx->r5 & 0XFF;
    // 0x00416350: addiu       $v0, $zero, 0x74
    ctx->r2 = ADD32(0, 0X74);
    // 0x00416354: beq         $a1, $v0, L_00416364
    if (ctx->r5 == ctx->r2) {
        // 0x00416358: addiu       $v0, $zero, 0x54
        ctx->r2 = ADD32(0, 0X54);
            goto L_00416364;
    }
    // 0x00416358: addiu       $v0, $zero, 0x54
    ctx->r2 = ADD32(0, 0X54);
    // 0x0041635C: bne         $a1, $v0, L_004163B4
    if (ctx->r5 != ctx->r2) {
        // 0x00416360: nop
    
            goto L_004163B4;
    }
    // 0x00416360: nop

L_00416364:
    // 0x00416364: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00416368: lwc1        $f0, 0xDE4($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0XDE4);
    // 0x0041636C: j           L_004163B4
    // 0x00416370: nop

        goto L_004163B4;
    // 0x00416370: nop

L_00416374:
    // 0x00416374: andi        $a1, $a1, 0xFF
    ctx->r5 = ctx->r5 & 0XFF;
    // 0x00416378: addiu       $v0, $zero, 0x74
    ctx->r2 = ADD32(0, 0X74);
    // 0x0041637C: beq         $a1, $v0, L_0041638C
    if (ctx->r5 == ctx->r2) {
        // 0x00416380: addiu       $v0, $zero, 0x54
        ctx->r2 = ADD32(0, 0X54);
            goto L_0041638C;
    }
    // 0x00416380: addiu       $v0, $zero, 0x54
    ctx->r2 = ADD32(0, 0X54);
    // 0x00416384: bne         $a1, $v0, L_004163B4
    if (ctx->r5 != ctx->r2) {
        // 0x00416388: nop
    
            goto L_004163B4;
    }
    // 0x00416388: nop

L_0041638C:
    // 0x0041638C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00416390: lwc1        $f0, 0xDE8($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0XDE8);
    // 0x00416394: j           L_004163B4
    // 0x00416398: nop

        goto L_004163B4;
    // 0x00416398: nop

L_0041639C:
    // 0x0041639C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x004163A0: lwc1        $f0, 0xDEC($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0XDEC);
    // 0x004163A4: j           L_004163B4
    // 0x004163A8: nop

        goto L_004163B4;
    // 0x004163A8: nop

L_004163AC:
    // 0x004163AC: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x004163B0: lwc1        $f0, 0xDF0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0XDF0);
L_004163B4:
    // 0x004163B4: mul.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f2.fl);
    // 0x004163B8: jr          $ra
    // 0x004163BC: nop

    return;
    // 0x004163BC: nop

;}
RECOMP_FUNC void func_0028981C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0028981C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00289820: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x00289824: jal         0x00288F60
    // 0x00289828: nop

    func_00288F60(rdram, ctx);
        goto after_0;
    // 0x00289828: nop

    after_0:
    // 0x0028982C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x00289830: jr          $ra
    // 0x00289834: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00289834: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0028FA00(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0028FA00: lw          $v0, 0x2C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X2C);
    // 0x0028FA04: jr          $ra
    // 0x0028FA08: nop

    return;
    // 0x0028FA08: nop

;}
RECOMP_FUNC void func_0040E06C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0040E06C: addiu       $v0, $zero, 0x456
    ctx->r2 = ADD32(0, 0X456);
    // 0x0040E070: beq         $v1, $v0, L_0040E0A0
    if (ctx->r3 == ctx->r2) {
            // 0x0040E074: nop

    func_0040E0A0(rdram, ctx);
    return;
    }
    // 0x0040E074: nop

    // 0x0040E078: jr          $ra
    // 0x0040E07C: nop

    return;
    // 0x0040E07C: nop

;}
RECOMP_FUNC void func_00214D04(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00214D04: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x00214D08: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x00214D0C: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x00214D10: sw          $ra, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r31;
    // 0x00214D14: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x00214D18: lhu         $v0, 0x88($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X88);
    // 0x00214D1C: andi        $v0, $v0, 0x40
    ctx->r2 = ctx->r2 & 0X40;
    // 0x00214D20: bne         $v0, $zero, L_00214DA8
    if (ctx->r2 != 0) {
        // 0x00214D24: nop
    
            goto L_00214DA8;
    }
    // 0x00214D24: nop

    // 0x00214D28: jal         0x00214DBC
    // 0x00214D2C: nop

    func_00214DBC(rdram, ctx);
        goto after_0;
    // 0x00214D2C: nop

    after_0:
    // 0x00214D30: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x00214D34: beq         $s0, $zero, L_00214DA8
    if (ctx->r16 == 0) {
        // 0x00214D38: nop
    
            goto L_00214DA8;
    }
    // 0x00214D38: nop

    // 0x00214D3C: jal         0x0020BE08
    // 0x00214D40: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_0020BE08(rdram, ctx);
        goto after_1;
    // 0x00214D40: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x00214D44: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x00214D48: lw          $v1, 0x80($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X80);
    // 0x00214D4C: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x00214D50: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x00214D54: lui         $v0, 0x21
    ctx->r2 = S32(0X21 << 16);
    // 0x00214D58: addiu       $v0, $v0, 0x4F14
    ctx->r2 = ADD32(ctx->r2, 0X4F14);
    // 0x00214D5C: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x00214D60: lui         $v0, 0x800A
    ctx->r2 = S32(0X800A << 16);
    // 0x00214D64: addiu       $v0, $v0, 0x57F8
    ctx->r2 = ADD32(ctx->r2, 0X57F8);
    // 0x00214D68: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x00214D6C: lw          $a1, -0x3528($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X3528);
    // 0x00214D70: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    // 0x00214D74: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00214D78: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x00214D7C: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x00214D80: lw          $a3, 0x24($s1)
    ctx->r7 = MEM_W(ctx->r17, 0X24);
    // 0x00214D84: jal         0x00203CA0
    // 0x00214D88: or          $a1, $v1, $a1
    ctx->r5 = ctx->r3 | ctx->r5;
    func_00203CA0(rdram, ctx);
        goto after_2;
    // 0x00214D88: or          $a1, $v1, $a1
    ctx->r5 = ctx->r3 | ctx->r5;
    after_2:
    // 0x00214D8C: beq         $v0, $zero, L_00214D9C
    if (ctx->r2 == 0) {
        // 0x00214D90: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_00214D9C;
    }
    // 0x00214D90: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x00214D94: jal         0x002051F4
    // 0x00214D98: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    func_002051F4(rdram, ctx);
        goto after_3;
    // 0x00214D98: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    after_3:
L_00214D9C:
    // 0x00214D9C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x00214DA0: jal         0x002051F4
    // 0x00214DA4: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_002051F4(rdram, ctx);
        goto after_4;
    // 0x00214DA4: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_4:
L_00214DA8:
    // 0x00214DA8: lw          $ra, 0x30($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X30);
    // 0x00214DAC: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x00214DB0: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x00214DB4: jr          $ra
    // 0x00214DB8: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x00214DB8: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_0023C730(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0023C730: addu        $t1, $zero, $zero
    ctx->r9 = ADD32(0, 0);
    // 0x0023C734: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x0023C738: addu        $a3, $t1, $zero
    ctx->r7 = ADD32(ctx->r9, 0);
    // 0x0023C73C: mtc1        $a1, $f6
    ctx->f6.u32l = ctx->r5;
    // 0x0023C740: mtc1        $a2, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r6;
    // 0x0023C744: lwc1        $f5, 0x34($a0)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r4, 0X34);
    // 0x0023C748: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
L_0023C74C:
    // 0x0023C74C: c.lt.s      $f5, $f4
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f5.fl < ctx->f4.fl;
    // 0x0023C750: nop

    // 0x0023C754: bc1f        L_0023C774
    if (!c1cs) {
        // 0x0023C758: addu        $a2, $a0, $a3
        ctx->r6 = ADD32(ctx->r4, ctx->r7);
            goto L_0023C774;
    }
    // 0x0023C758: addu        $a2, $a0, $a3
    ctx->r6 = ADD32(ctx->r4, ctx->r7);
    // 0x0023C75C: andi        $v1, $t0, 0x3
    ctx->r3 = ctx->r8 & 0X3;
    // 0x0023C760: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x0023C764: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x0023C768: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x0023C76C: j           L_0023C78C
    // 0x0023C770: addu        $a1, $a0, $v0
    ctx->r5 = ADD32(ctx->r4, ctx->r2);
        goto L_0023C78C;
    // 0x0023C770: addu        $a1, $a0, $v0
    ctx->r5 = ADD32(ctx->r4, ctx->r2);
L_0023C774:
    // 0x0023C774: addu        $a1, $a0, $a3
    ctx->r5 = ADD32(ctx->r4, ctx->r7);
    // 0x0023C778: andi        $v1, $t0, 0x3
    ctx->r3 = ctx->r8 & 0X3;
    // 0x0023C77C: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x0023C780: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x0023C784: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x0023C788: addu        $a2, $a0, $v0
    ctx->r6 = ADD32(ctx->r4, ctx->r2);
L_0023C78C:
    // 0x0023C78C: lwc1        $f2, 0x8($a2)
    ctx->f2.u32l = MEM_W(ctx->r6, 0X8);
    // 0x0023C790: lwc1        $f3, 0x8($a1)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r5, 0X8);
    // 0x0023C794: sub.s       $f2, $f2, $f3
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f2.fl = ctx->f2.fl - ctx->f3.fl;
    // 0x0023C798: lwc1        $f1, 0x0($a1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r5, 0X0);
    // 0x0023C79C: sub.s       $f0, $f6, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f6.fl - ctx->f1.fl;
    // 0x0023C7A0: mul.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x0023C7A4: sub.s       $f3, $f7, $f3
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f7.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f3.fl = ctx->f7.fl - ctx->f3.fl;
    // 0x0023C7A8: lwc1        $f0, 0x0($a2)
    ctx->f0.u32l = MEM_W(ctx->r6, 0X0);
    // 0x0023C7AC: sub.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl - ctx->f0.fl;
    // 0x0023C7B0: mul.s       $f1, $f1, $f3
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f3.fl);
    // 0x0023C7B4: add.s       $f2, $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f1.fl;
    // 0x0023C7B8: c.le.s      $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f2.fl <= ctx->f4.fl;
    // 0x0023C7BC: nop

    // 0x0023C7C0: bc1f        L_0023C7D0
    if (!c1cs) {
        // 0x0023C7C4: addiu       $t0, $t0, 0x1
        ctx->r8 = ADD32(ctx->r8, 0X1);
            goto L_0023C7D0;
    }
    // 0x0023C7C4: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    // 0x0023C7C8: jr          $ra
    // 0x0023C7CC: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x0023C7CC: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_0023C7D0:
    // 0x0023C7D0: addiu       $t1, $t1, 0x1
    ctx->r9 = ADD32(ctx->r9, 0X1);
    // 0x0023C7D4: slti        $v0, $t1, 0x4
    ctx->r2 = SIGNED(ctx->r9) < 0X4 ? 1 : 0;
    // 0x0023C7D8: bne         $v0, $zero, L_0023C74C
    if (ctx->r2 != 0) {
        // 0x0023C7DC: addiu       $a3, $a3, 0xC
        ctx->r7 = ADD32(ctx->r7, 0XC);
            goto L_0023C74C;
    }
    // 0x0023C7DC: addiu       $a3, $a3, 0xC
    ctx->r7 = ADD32(ctx->r7, 0XC);
    // 0x0023C7E0: jr          $ra
    // 0x0023C7E4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x0023C7E4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
;}
RECOMP_FUNC void func_00275324(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00275324: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00275328: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x0027532C: mtc1        $a1, $f20
    ctx->f20.u32l = ctx->r5;
    // 0x00275330: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00275334: lwc1        $f0, -0x7E10($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X7E10);
    // 0x00275338: mul.s       $f0, $f20, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f20.fl, ctx->f0.fl);
    // 0x0027533C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00275340: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x00275344: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x00275348: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x0027534C: trunc.w.s   $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(1 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x00275350: mfc1        $a1, $f1
    ctx->r5 = (int32_t)ctx->f_odd[(1 - 1) * 2];
    // 0x00275354: sll         $a1, $a1, 16
    ctx->r5 = S32(ctx->r5 << 16);
    // 0x00275358: jal         0x00290EC0
    // 0x0027535C: sra         $a1, $a1, 16
    ctx->r5 = S32(SIGNED(ctx->r5) >> 16);
    func_00290EC0(rdram, ctx);
        goto after_0;
    // 0x0027535C: sra         $a1, $a1, 16
    ctx->r5 = S32(SIGNED(ctx->r5) >> 16);
    after_0:
    // 0x00275360: swc1        $f20, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->f20.u32l;
    // 0x00275364: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x00275368: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0027536C: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x00275370: jr          $ra
    // 0x00275374: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00275374: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_00267D58(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00267D58: jr          $ra
    // 0x00267D5C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x00267D5C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void func_00284284(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00284284: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x00284288: lw          $v0, 0x1BB0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1BB0);
    // 0x0028428C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00284290: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x00284294: lw          $v0, 0x38($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X38);
    // 0x00284298: beq         $v0, $zero, L_002842A8
    if (ctx->r2 == 0) {
        // 0x0028429C: nop
    
            goto L_002842A8;
    }
    // 0x0028429C: nop

    // 0x002842A0: jal         0x00411EF8
    // 0x002842A4: nop

    func_00411EF8(rdram, ctx);
        goto after_0;
    // 0x002842A4: nop

    after_0:
L_002842A8:
    // 0x002842A8: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x002842AC: jr          $ra
    // 0x002842B0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x002842B0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0020FC24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0020FC24: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0020FC28: lwc1        $f1, 0x55F4($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X55F4);
    // 0x0020FC2C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x0020FC30: sw          $a1, 0x30($a0)
    MEM_W(0X30, ctx->r4) = ctx->r5;
    // 0x0020FC34: sw          $a2, 0x34($a0)
    MEM_W(0X34, ctx->r4) = ctx->r6;
    // 0x0020FC38: sw          $a3, 0x38($a0)
    MEM_W(0X38, ctx->r4) = ctx->r7;
    // 0x0020FC3C: swc1        $f1, 0x3C($a0)
    MEM_W(0X3C, ctx->r4) = ctx->f_odd[(1 - 1) * 2];
    // 0x0020FC40: swc1        $f1, 0x28($a0)
    MEM_W(0X28, ctx->r4) = ctx->f_odd[(1 - 1) * 2];
    // 0x0020FC44: swc1        $f1, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->f_odd[(1 - 1) * 2];
    // 0x0020FC48: swc1        $f1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f_odd[(1 - 1) * 2];
    // 0x0020FC4C: swc1        $f0, 0x2C($a0)
    MEM_W(0X2C, ctx->r4) = ctx->f0.u32l;
    // 0x0020FC50: swc1        $f0, 0x24($a0)
    MEM_W(0X24, ctx->r4) = ctx->f0.u32l;
    // 0x0020FC54: swc1        $f0, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->f0.u32l;
    // 0x0020FC58: swc1        $f0, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = ctx->f0.u32l;
    // 0x0020FC5C: swc1        $f0, 0x18($a0)
    MEM_W(0X18, ctx->r4) = ctx->f0.u32l;
    // 0x0020FC60: swc1        $f0, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->f0.u32l;
    // 0x0020FC64: swc1        $f0, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->f0.u32l;
    // 0x0020FC68: swc1        $f0, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->f0.u32l;
    // 0x0020FC6C: jr          $ra
    // 0x0020FC70: swc1        $f0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->f0.u32l;
    return;
    // 0x0020FC70: swc1        $f0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->f0.u32l;
;}
RECOMP_FUNC void func_00262BE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00262BE0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00262BE4: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x00262BE8: lw          $v1, 0x4($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X4);
    // 0x00262BEC: lw          $v0, 0x4($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X4);
    // 0x00262BF0: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x00262BF4: bltzl       $v1, L_00262BFC
    if (SIGNED(ctx->r3) < 0) {
        // 0x00262BF8: addu        $v1, $zero, $zero
        ctx->r3 = ADD32(0, 0);
            goto L_00262BFC;
    }
    goto skip_0;
    // 0x00262BF8: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
    skip_0:
L_00262BFC:
    // 0x00262BFC: bne         $v1, $zero, L_00262C0C
    if (ctx->r3 != 0) {
        // 0x00262C00: sw          $v1, 0x4($a1)
        MEM_W(0X4, ctx->r5) = ctx->r3;
            goto L_00262C0C;
    }
    // 0x00262C00: sw          $v1, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r3;
    // 0x00262C04: jal         0x00243414
    // 0x00262C08: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    func_00243414(rdram, ctx);
        goto after_0;
    // 0x00262C08: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    after_0:
L_00262C0C:
    // 0x00262C0C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x00262C10: jr          $ra
    // 0x00262C14: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00262C14: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0044FC54(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0044FC54: lw          $v1, 0x1C8($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X1C8);
    // 0x0044FC58: slti        $v0, $v1, 0x18
    ctx->r2 = SIGNED(ctx->r3) < 0X18 ? 1 : 0;
    // 0x0044FC5C: bne         $v0, $zero, L_0044FC6C
    if (ctx->r2 != 0) {
            // 0x0044FC60: addiu       $v0, $zero, 0x2F
    ctx->r2 = ADD32(0, 0X2F);
    func_0044FC6C(rdram, ctx);
    return;
    }
    // 0x0044FC60: addiu       $v0, $zero, 0x2F
    ctx->r2 = ADD32(0, 0X2F);
    // 0x0044FC64: jr          $ra
    // 0x0044FC68: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    return;
    // 0x0044FC68: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
;}
RECOMP_FUNC void func_0025F1B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0025F1B4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0025F1B8: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x0025F1BC: jal         0x0025D474
    // 0x0025F1C0: nop

    func_0025D474(rdram, ctx);
        goto after_0;
    // 0x0025F1C0: nop

    after_0:
    // 0x0025F1C4: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x0025F1C8: jr          $ra
    // 0x0025F1CC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0025F1CC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0029DFE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
;}
RECOMP_FUNC void func_002C22D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002C22D8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x002C22DC: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x002C22E0: addu        $a2, $a1, $zero
    ctx->r6 = ADD32(ctx->r5, 0);
    // 0x002C22E4: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x002C22E8: addiu       $v0, $v0, -0x5350
    ctx->r2 = ADD32(ctx->r2, -0X5350);
    // 0x002C22EC: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x002C22F0: sw          $zero, 0x44($v0)
    MEM_W(0X44, ctx->r2) = 0;
    // 0x002C22F4: addiu       $v0, $v0, -0x1D8
    ctx->r2 = ADD32(ctx->r2, -0X1D8);
    // 0x002C22F8: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x002C22FC: sb          $v1, 0x68($v0)
    MEM_B(0X68, ctx->r2) = ctx->r3;
    // 0x002C2300: sb          $zero, 0x19($v0)
    MEM_B(0X19, ctx->r2) = 0;
    // 0x002C2304: jal         0x002888BC
    // 0x002C2308: sb          $v1, 0x1A($v0)
    MEM_B(0X1A, ctx->r2) = ctx->r3;
    func_002888BC(rdram, ctx);
        goto after_0;
    // 0x002C2308: sb          $v1, 0x1A($v0)
    MEM_B(0X1A, ctx->r2) = ctx->r3;
    after_0:
    // 0x002C230C: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x002C2310: addiu       $a0, $a0, 0x7078
    ctx->r4 = ADD32(ctx->r4, 0X7078);
    // 0x002C2314: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x002C2318: jal         0x0042AB2C
    // 0x002C231C: addu        $a2, $a1, $zero
    ctx->r6 = ADD32(ctx->r5, 0);
    func_0042AB2C(rdram, ctx);
        goto after_1;
    // 0x002C231C: addu        $a2, $a1, $zero
    ctx->r6 = ADD32(ctx->r5, 0);
    after_1:
    // 0x002C2320: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x002C2324: jr          $ra
    // 0x002C2328: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x002C2328: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_002834CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002834CC: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x002834D0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x002834D4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x002834D8: sdc1        $f21, 0x20($sp)
    CHECK_FR(ctx, 21);
    SD(ctx->f21.u64, 0X20, ctx->r29);
    // 0x002834DC: mtc1        $a3, $f21
    ctx->f_odd[(21 - 1) * 2] = ctx->r7;
    // 0x002834E0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x002834E4: sdc1        $f23, 0x30($sp)
    CHECK_FR(ctx, 23);
    SD(ctx->f23.u64, 0X30, ctx->r29);
    // 0x002834E8: sdc1        $f22, 0x28($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X28, ctx->r29);
    // 0x002834EC: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x002834F0: sw          $a1, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r5;
    // 0x002834F4: sh          $a2, 0x10($s0)
    MEM_H(0X10, ctx->r16) = ctx->r6;
    // 0x002834F8: lwc1        $f22, 0x48($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X48);
    // 0x002834FC: lwc1        $f23, 0x4C($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X4C);
    // 0x00283500: lh          $a1, 0x0($a1)
    ctx->r5 = MEM_H(ctx->r5, 0X0);
    // 0x00283504: lwc1        $f20, 0x50($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X50);
    // 0x00283508: jal         0x00207914
    // 0x0028350C: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    entry_00207914(rdram, ctx);
        goto after_0;
    // 0x0028350C: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    after_0:
    // 0x00283510: sw          $zero, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = 0;
    // 0x00283514: sw          $zero, 0x20($s0)
    MEM_W(0X20, ctx->r16) = 0;
    // 0x00283518: sw          $zero, 0x208($s0)
    MEM_W(0X208, ctx->r16) = 0;
    // 0x0028351C: sw          $zero, 0x20C($s0)
    MEM_W(0X20C, ctx->r16) = 0;
    // 0x00283520: swc1        $f21, 0x214($s0)
    MEM_W(0X214, ctx->r16) = ctx->f_odd[(21 - 1) * 2];
    // 0x00283524: swc1        $f22, 0x218($s0)
    MEM_W(0X218, ctx->r16) = ctx->f22.u32l;
    // 0x00283528: swc1        $f23, 0x21C($s0)
    MEM_W(0X21C, ctx->r16) = ctx->f_odd[(23 - 1) * 2];
    // 0x0028352C: swc1        $f20, 0x220($s0)
    MEM_W(0X220, ctx->r16) = ctx->f20.u32l;
    // 0x00283530: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x00283534: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00283538: ldc1        $f23, 0x30($sp)
    CHECK_FR(ctx, 23);
    ctx->f23.u64 = LD(ctx->r29, 0X30);
    // 0x0028353C: ldc1        $f22, 0x28($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X28);
    // 0x00283540: ldc1        $f21, 0x20($sp)
    CHECK_FR(ctx, 21);
    ctx->f21.u64 = LD(ctx->r29, 0X20);
    // 0x00283544: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x00283548: jr          $ra
    // 0x0028354C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x0028354C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_0044BDD0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0044BDD0: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x0044BDD4: lw          $v0, 0x1BB0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1BB0);
    // 0x0044BDD8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0044BDDC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0044BDE0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x0044BDE4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x0044BDE8: lw          $a0, 0x4($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X4);
    // 0x0044BDEC: jal         0x002017D4
    // 0x0044BDF0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_002017D4(rdram, ctx);
        goto after_0;
    // 0x0044BDF0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_0:
    // 0x0044BDF4: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x0044BDF8: jal         0x002017D4
    // 0x0044BDFC: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_002017D4(rdram, ctx);
        goto after_1;
    // 0x0044BDFC: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_1:
    // 0x0044BE00: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x0044BE04: jal         0x002017D4
    // 0x0044BE08: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_002017D4(rdram, ctx);
        goto after_2;
    // 0x0044BE08: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_2:
    // 0x0044BE0C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x0044BE10: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0044BE14: jr          $ra
    // 0x0044BE18: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0044BE18: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0041E1D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041E1D8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x0041E1DC: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x0041E1E0: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x0041E1E4: lui         $a0, 0xFEFF
    ctx->r4 = S32(0XFEFF << 16);
    // 0x0041E1E8: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x0041E1EC: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x0041E1F0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x0041E1F4: lw          $v1, 0xC($s1)
    ctx->r3 = MEM_W(ctx->r17, 0XC);
    // 0x0041E1F8: ori         $a0, $a0, 0xFFFF
    ctx->r4 = ctx->r4 | 0XFFFF;
    // 0x0041E1FC: lw          $v0, 0x328($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X328);
    // 0x0041E200: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
    // 0x0041E204: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0041E208: sw          $zero, 0x984($at)
    MEM_W(0X984, ctx->r1) = 0;
    // 0x0041E20C: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0041E210: sw          $zero, 0x9A0($at)
    MEM_W(0X9A0, ctx->r1) = 0;
    // 0x0041E214: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0041E218: sw          $s2, 0x994($at)
    MEM_W(0X994, ctx->r1) = ctx->r18;
    // 0x0041E21C: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0041E220: sw          $s2, 0x9B4($at)
    MEM_W(0X9B4, ctx->r1) = ctx->r18;
    // 0x0041E224: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0041E228: sw          $s2, 0x2024($at)
    MEM_W(0X2024, ctx->r1) = ctx->r18;
    // 0x0041E22C: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0041E230: sw          $zero, 0x9BC($at)
    MEM_W(0X9BC, ctx->r1) = 0;
    // 0x0041E234: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0041E238: sw          $zero, 0x990($at)
    MEM_W(0X990, ctx->r1) = 0;
    // 0x0041E23C: and         $v0, $v0, $a0
    ctx->r2 = ctx->r2 & ctx->r4;
    // 0x0041E240: sw          $v0, 0x328($v1)
    MEM_W(0X328, ctx->r3) = ctx->r2;
    // 0x0041E244: lw          $v0, 0x20($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X20);
    // 0x0041E248: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x0041E24C: lw          $v1, 0x2020($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X2020);
    // 0x0041E250: lb          $s0, 0x4($v0)
    ctx->r16 = MEM_B(ctx->r2, 0X4);
    // 0x0041E254: beq         $v1, $zero, L_0041E288
    if (ctx->r3 == 0) {
        // 0x0041E258: nop
    
            goto L_0041E288;
    }
    // 0x0041E258: nop

    // 0x0041E25C: lw          $v0, 0x1C($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X1C);
    // 0x0041E260: lw          $a0, 0x51C($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X51C);
    // 0x0041E264: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x0041E268: addiu       $a1, $a1, -0x77D4
    ctx->r5 = ADD32(ctx->r5, -0X77D4);
    // 0x0041E26C: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0041E270: sw          $s2, 0x9BC($at)
    MEM_W(0X9BC, ctx->r1) = ctx->r18;
    // 0x0041E274: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x0041E278: lw          $a2, 0x1C($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X1C);
    // 0x0041E27C: lw          $a3, 0x20($s1)
    ctx->r7 = MEM_W(ctx->r17, 0X20);
    // 0x0041E280: j           L_0041E354
    // 0x0041E284: addiu       $a0, $a0, 0x53C
    ctx->r4 = ADD32(ctx->r4, 0X53C);
        goto L_0041E354;
    // 0x0041E284: addiu       $a0, $a0, 0x53C
    ctx->r4 = ADD32(ctx->r4, 0X53C);
L_0041E288:
    // 0x0041E288: jal         0x00426480
    // 0x0041E28C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00426480(rdram, ctx);
        goto after_0;
    // 0x0041E28C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x0041E290: jal         0x0042655C
    // 0x0041E294: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_0042655C(rdram, ctx);
        goto after_1;
    // 0x0041E294: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x0041E298: bne         $v0, $zero, L_0041E2B0
    if (ctx->r2 != 0) {
        // 0x0041E29C: nop
    
            goto L_0041E2B0;
    }
    // 0x0041E29C: nop

    // 0x0041E2A0: jal         0x0041DA28
    // 0x0041E2A4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_0041DA28(rdram, ctx);
        goto after_2;
    // 0x0041E2A4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_2:
    // 0x0041E2A8: j           L_0041E35C
    // 0x0041E2AC: nop

        goto L_0041E35C;
    // 0x0041E2AC: nop

L_0041E2B0:
    // 0x0041E2B0: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0041E2B4: sw          $s2, 0x9BC($at)
    MEM_W(0X9BC, ctx->r1) = ctx->r18;
    // 0x0041E2B8: jal         0x00426594
    // 0x0041E2BC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00426594(rdram, ctx);
        goto after_3;
    // 0x0041E2BC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x0041E2C0: beq         $v0, $zero, L_0041E2F4
    if (ctx->r2 == 0) {
        // 0x0041E2C4: nop
    
            goto L_0041E2F4;
    }
    // 0x0041E2C4: nop

    // 0x0041E2C8: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x0041E2CC: addiu       $a0, $a0, -0x61D4
    ctx->r4 = ADD32(ctx->r4, -0X61D4);
    // 0x0041E2D0: lui         $v0, 0x44
    ctx->r2 = S32(0X44 << 16);
    // 0x0041E2D4: addiu       $v0, $v0, -0x77D4
    ctx->r2 = ADD32(ctx->r2, -0X77D4);
    // 0x0041E2D8: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x0041E2DC: lw          $a2, 0x1C($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X1C);
    // 0x0041E2E0: lw          $a3, 0x20($s1)
    ctx->r7 = MEM_W(ctx->r17, 0X20);
    // 0x0041E2E4: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x0041E2E8: addiu       $a1, $a1, -0x4394
    ctx->r5 = ADD32(ctx->r5, -0X4394);
    // 0x0041E2EC: j           L_0041E354
    // 0x0041E2F0: nop

        goto L_0041E354;
    // 0x0041E2F0: nop

L_0041E2F4:
    // 0x0041E2F4: jal         0x00426BD8
    // 0x0041E2F8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00426BD8(rdram, ctx);
        goto after_4;
    // 0x0041E2F8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
    // 0x0041E2FC: beq         $v0, $zero, L_0041E330
    if (ctx->r2 == 0) {
        // 0x0041E300: nop
    
            goto L_0041E330;
    }
    // 0x0041E300: nop

    // 0x0041E304: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x0041E308: addiu       $a0, $a0, -0x61D4
    ctx->r4 = ADD32(ctx->r4, -0X61D4);
    // 0x0041E30C: lui         $v0, 0x44
    ctx->r2 = S32(0X44 << 16);
    // 0x0041E310: addiu       $v0, $v0, -0x4958
    ctx->r2 = ADD32(ctx->r2, -0X4958);
    // 0x0041E314: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x0041E318: lw          $a2, 0x1C($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X1C);
    // 0x0041E31C: lw          $a3, 0x20($s1)
    ctx->r7 = MEM_W(ctx->r17, 0X20);
    // 0x0041E320: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x0041E324: addiu       $a1, $a1, -0x3FA4
    ctx->r5 = ADD32(ctx->r5, -0X3FA4);
    // 0x0041E328: j           L_0041E354
    // 0x0041E32C: nop

        goto L_0041E354;
    // 0x0041E32C: nop

L_0041E330:
    // 0x0041E330: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x0041E334: addiu       $a0, $a0, -0x61D4
    ctx->r4 = ADD32(ctx->r4, -0X61D4);
    // 0x0041E338: lui         $v0, 0x44
    ctx->r2 = S32(0X44 << 16);
    // 0x0041E33C: addiu       $v0, $v0, -0x77D4
    ctx->r2 = ADD32(ctx->r2, -0X77D4);
    // 0x0041E340: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x0041E344: lw          $a2, 0x1C($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X1C);
    // 0x0041E348: lw          $a3, 0x20($s1)
    ctx->r7 = MEM_W(ctx->r17, 0X20);
    // 0x0041E34C: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x0041E350: addiu       $a1, $a1, -0x4400
    ctx->r5 = ADD32(ctx->r5, -0X4400);
L_0041E354:
    // 0x0041E354: jal         0x00416644
    // 0x0041E358: nop

    func_00416644(rdram, ctx);
        goto after_5;
    // 0x0041E358: nop

    after_5:
L_0041E35C:
    // 0x0041E35C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x0041E360: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x0041E364: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x0041E368: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x0041E36C: jr          $ra
    // 0x0041E370: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x0041E370: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_00258000(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00258000: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x00258004: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x00258008: addu        $s3, $a0, $zero
    ctx->r19 = ADD32(ctx->r4, 0);
    // 0x0025800C: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x00258010: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x00258014: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x00258018: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x0025801C: lw          $s0, 0x1A8($s3)
    ctx->r16 = MEM_W(ctx->r19, 0X1A8);
    // 0x00258020: lh          $v0, 0xA08($s0)
    ctx->r2 = MEM_H(ctx->r16, 0XA08);
    // 0x00258024: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x00258028: sll         $v1, $v0, 1
    ctx->r3 = S32(ctx->r2 << 1);
    // 0x0025802C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x00258030: sll         $v1, $v1, 3
    ctx->r3 = S32(ctx->r3 << 3);
    // 0x00258034: lb          $v0, 0xC7($s1)
    ctx->r2 = MEM_B(ctx->r17, 0XC7);
    // 0x00258038: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0025803C: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x00258040: lh          $s2, -0x2098($at)
    ctx->r18 = MEM_H(ctx->r1, -0X2098);
    // 0x00258044: beq         $v0, $zero, L_0025806C
    if (ctx->r2 == 0) {
        // 0x00258048: nop
    
            goto L_0025806C;
    }
    // 0x00258048: nop

    // 0x0025804C: lh          $a1, 0x996($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X996);
    // 0x00258050: jal         0x0024E700
    // 0x00258054: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_0024E700(rdram, ctx);
        goto after_0;
    // 0x00258054: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x00258058: bne         $v0, $zero, L_0025806C
    if (ctx->r2 != 0) {
        // 0x0025805C: nop
    
            goto L_0025806C;
    }
    // 0x0025805C: nop

    // 0x00258060: jal         0x00257BA0
    // 0x00258064: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00257BA0(rdram, ctx);
        goto after_1;
    // 0x00258064: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x00258068: sh          $v0, 0xB14($s0)
    MEM_H(0XB14, ctx->r16) = ctx->r2;
L_0025806C:
    // 0x0025806C: lw          $v0, 0xA50($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XA50);
    // 0x00258070: sw          $zero, 0x168($v0)
    MEM_W(0X168, ctx->r2) = 0;
    // 0x00258074: sw          $zero, 0x120($s1)
    MEM_W(0X120, ctx->r17) = 0;
    // 0x00258078: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x0025807C: lw          $v0, -0x531C($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X531C);
    // 0x00258080: beq         $v0, $zero, L_002580D0
    if (ctx->r2 == 0) {
        // 0x00258084: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_002580D0;
    }
    // 0x00258084: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00258088: lw          $v0, 0x518($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X518);
    // 0x0025808C: lbu         $v0, 0x3E($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X3E);
    // 0x00258090: beq         $v0, $zero, L_002580D0
    if (ctx->r2 == 0) {
        // 0x00258094: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_002580D0;
    }
    // 0x00258094: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00258098: lw          $v0, 0xA68($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XA68);
    // 0x0025809C: andi        $v0, $v0, 0x2000
    ctx->r2 = ctx->r2 & 0X2000;
    // 0x002580A0: beq         $v0, $zero, L_002581A8
    if (ctx->r2 == 0) {
        // 0x002580A4: addiu       $v0, $s0, 0x4
        ctx->r2 = ADD32(ctx->r16, 0X4);
            goto L_002581A8;
    }
    // 0x002580A4: addiu       $v0, $s0, 0x4
    ctx->r2 = ADD32(ctx->r16, 0X4);
    // 0x002580A8: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x002580AC: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x002580B0: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x002580B4: lw          $a1, 0x4($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X4);
    // 0x002580B8: lw          $a2, 0x8($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X8);
    // 0x002580BC: lw          $a3, 0xC($s0)
    ctx->r7 = MEM_W(ctx->r16, 0XC);
    // 0x002580C0: jal         0x00275544
    // 0x002580C4: addiu       $a0, $zero, 0x27D8
    ctx->r4 = ADD32(0, 0X27D8);
    func_00275544(rdram, ctx);
        goto after_2;
    // 0x002580C4: addiu       $a0, $zero, 0x27D8
    ctx->r4 = ADD32(0, 0X27D8);
    after_2:
    // 0x002580C8: j           L_002581A8
    // 0x002580CC: nop

        goto L_002581A8;
    // 0x002580CC: nop

L_002580D0:
    // 0x002580D0: beq         $s2, $v0, L_002581A8
    if (ctx->r18 == ctx->r2) {
        // 0x002580D4: addiu       $v0, $zero, 0x7
        ctx->r2 = ADD32(0, 0X7);
            goto L_002581A8;
    }
    // 0x002580D4: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x002580D8: beq         $s2, $v0, L_002581A8
    if (ctx->r18 == ctx->r2) {
        // 0x002580DC: nop
    
            goto L_002581A8;
    }
    // 0x002580DC: nop

    // 0x002580E0: lb          $v0, 0xC7($s1)
    ctx->r2 = MEM_B(ctx->r17, 0XC7);
    // 0x002580E4: beq         $v0, $zero, L_002581A8
    if (ctx->r2 == 0) {
        // 0x002580E8: nop
    
            goto L_002581A8;
    }
    // 0x002580E8: nop

    // 0x002580EC: lw          $a0, 0x1A8($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X1A8);
    // 0x002580F0: lh          $v0, 0x996($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X996);
    // 0x002580F4: lh          $a2, 0xB14($a0)
    ctx->r6 = MEM_H(ctx->r4, 0XB14);
    // 0x002580F8: lhu         $a1, 0xB14($a0)
    ctx->r5 = MEM_HU(ctx->r4, 0XB14);
    // 0x002580FC: bne         $v0, $a2, L_00258118
    if (ctx->r2 != ctx->r6) {
        // 0x00258100: sll         $v0, $a2, 2
        ctx->r2 = S32(ctx->r6 << 2);
            goto L_00258118;
    }
    // 0x00258100: sll         $v0, $a2, 2
    ctx->r2 = S32(ctx->r6 << 2);
    // 0x00258104: lui         $v1, 0x800F
    ctx->r3 = S32(0X800F << 16);
    // 0x00258108: lw          $v1, 0x7078($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X7078);
    // 0x0025810C: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x00258110: beq         $v1, $v0, L_00258198
    if (ctx->r3 == ctx->r2) {
        // 0x00258114: sll         $v0, $a2, 2
        ctx->r2 = S32(ctx->r6 << 2);
            goto L_00258198;
    }
    // 0x00258114: sll         $v0, $a2, 2
    ctx->r2 = S32(ctx->r6 << 2);
L_00258118:
    // 0x00258118: sh          $a1, 0x996($a0)
    MEM_H(0X996, ctx->r4) = ctx->r5;
    // 0x0025811C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00258120: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x00258124: lw          $v0, -0x9E8($at)
    ctx->r2 = MEM_W(ctx->r1, -0X9E8);
    // 0x00258128: lw          $v0, 0x48($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X48);
    // 0x0025812C: sw          $v0, 0x2C($s1)
    MEM_W(0X2C, ctx->r17) = ctx->r2;
    // 0x00258130: lh          $v0, 0x996($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X996);
    // 0x00258134: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x00258138: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0025813C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x00258140: lw          $v0, -0x9E8($at)
    ctx->r2 = MEM_W(ctx->r1, -0X9E8);
    // 0x00258144: lw          $v1, 0x4C($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X4C);
    // 0x00258148: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0025814C: lw          $v0, 0x6D20($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X6D20);
    // 0x00258150: sltiu       $v0, $v0, 0x5
    ctx->r2 = ctx->r2 < 0X5 ? 1 : 0;
    // 0x00258154: bne         $v0, $zero, L_00258188
    if (ctx->r2 != 0) {
        // 0x00258158: sw          $v1, 0x108($s1)
        MEM_W(0X108, ctx->r17) = ctx->r3;
            goto L_00258188;
    }
    // 0x00258158: sw          $v1, 0x108($s1)
    MEM_W(0X108, ctx->r17) = ctx->r3;
    // 0x0025815C: lh          $v0, 0x996($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X996);
    // 0x00258160: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x00258164: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00258168: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x0025816C: lw          $v0, -0x9E8($at)
    ctx->r2 = MEM_W(ctx->r1, -0X9E8);
    // 0x00258170: lw          $a1, 0x51C($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X51C);
    // 0x00258174: lw          $a2, 0x0($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X0);
    // 0x00258178: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x0025817C: addiu       $a0, $a0, -0x6750
    ctx->r4 = ADD32(ctx->r4, -0X6750);
    // 0x00258180: jal         0x0027FC2C
    // 0x00258184: nop

    func_0027FC2C(rdram, ctx);
        goto after_3;
    // 0x00258184: nop

    after_3:
L_00258188:
    // 0x00258188: sw          $zero, 0x10C($s1)
    MEM_W(0X10C, ctx->r17) = 0;
    // 0x0025818C: sw          $zero, 0x110($s1)
    MEM_W(0X110, ctx->r17) = 0;
    // 0x00258190: sw          $zero, 0x128($s1)
    MEM_W(0X128, ctx->r17) = 0;
    // 0x00258194: sw          $zero, 0x118($s1)
    MEM_W(0X118, ctx->r17) = 0;
L_00258198:
    // 0x00258198: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x0025819C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x002581A0: jal         0x00243414
    // 0x002581A4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_00243414(rdram, ctx);
        goto after_4;
    // 0x002581A4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_4:
L_002581A8:
    // 0x002581A8: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x002581AC: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x002581B0: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x002581B4: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x002581B8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x002581BC: jr          $ra
    // 0x002581C0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x002581C0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_0045447C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_0041B4AC:
    // 0x0045447C: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
L_0041B4E0:
    // 0x00454480: lw          $v0, -0x5524($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X5524);
    // 0x00454484: andi        $v0, $v0, 0x40
    ctx->r2 = ctx->r2 & 0X40;
    // 0x00454488: beq         $v0, $zero, L_0045449C
    if (ctx->r2 == 0) {
        // 0x0045448C: lui         $v1, 0x100
        ctx->r3 = S32(0X100 << 16);
            goto L_0045449C;
    }
    // 0x0045448C: lui         $v1, 0x100
    ctx->r3 = S32(0X100 << 16);
    // 0x00454490: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x00454494: j           L_0041B4AC
    // 0x00454498: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    entry_0041B4AC(rdram, ctx);
    return;
    // 0x00454498: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
L_0045449C:
    // 0x0045449C: lui         $v1, 0xFEFF
    ctx->r3 = S32(0XFEFF << 16);
    // 0x004544A0: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x004544A4: ori         $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 | 0XFFFF;
    // 0x004544A8: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x004544AC: sw          $v0, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r2;
    // 0x004544B0: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x004544B4: lw          $v0, -0x5528($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X5528);
    // 0x004544B8: andi        $v0, $v0, 0x40
    ctx->r2 = ctx->r2 & 0X40;
    // 0x004544BC: beq         $v0, $zero, L_004544D4
    if (ctx->r2 == 0) {
        // 0x004544C0: nop
    
            goto L_004544D4;
    }
    // 0x004544C0: nop

    // 0x004544C4: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x004544C8: addiu       $v0, $v0, 0x58FC
    ctx->r2 = ADD32(ctx->r2, 0X58FC);
    // 0x004544CC: j           L_0041B4E0
    // 0x004544D0: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    entry_0041B4E0(rdram, ctx);
    return;
    // 0x004544D0: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_004544D4:
    // 0x004544D4: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x004544D8: addiu       $v0, $v0, 0x5918
    ctx->r2 = ADD32(ctx->r2, 0X5918);
    // 0x004544DC: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    // 0x004544E0: jr          $ra
    // 0x004544E4: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x004544E4: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void func_004172F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004172F8: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x004172FC: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x00417300: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x00417304: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x00417308: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x0041730C: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x00417310: addu        $s3, $a2, $zero
    ctx->r19 = ADD32(ctx->r6, 0);
    // 0x00417314: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x00417318: addu        $s4, $a3, $zero
    ctx->r20 = ADD32(ctx->r7, 0);
    // 0x0041731C: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x00417320: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x00417324: lh          $v1, 0x4($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X4);
    // 0x00417328: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x0041732C: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x00417330: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x00417334: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x00417338: blez        $v1, L_00417370
    if (SIGNED(ctx->r3) <= 0) {
        // 0x0041733C: addiu       $a1, $v0, 0x1D8
        ctx->r5 = ADD32(ctx->r2, 0X1D8);
            goto L_00417370;
    }
    // 0x0041733C: addiu       $a1, $v0, 0x1D8
    ctx->r5 = ADD32(ctx->r2, 0X1D8);
    // 0x00417340: addiu       $t0, $zero, 0x3
    ctx->r8 = ADD32(0, 0X3);
    // 0x00417344: addu        $a3, $v1, $zero
    ctx->r7 = ADD32(ctx->r3, 0);
    // 0x00417348: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
L_0041734C:
    // 0x0041734C: lh          $v0, 0x0($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X0);
    // 0x00417350: bne         $v0, $t0, L_0041735C
    if (ctx->r2 != ctx->r8) {
        // 0x00417354: addu        $v1, $zero, $zero
        ctx->r3 = ADD32(0, 0);
            goto L_0041735C;
    }
    // 0x00417354: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
    // 0x00417358: addiu       $v1, $zero, 0x330
    ctx->r3 = ADD32(0, 0X330);
L_0041735C:
    // 0x0041735C: addu        $a1, $a1, $v1
    ctx->r5 = ADD32(ctx->r5, ctx->r3);
    // 0x00417360: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x00417364: slt         $v0, $a2, $a3
    ctx->r2 = SIGNED(ctx->r6) < SIGNED(ctx->r7) ? 1 : 0;
    // 0x00417368: bne         $v0, $zero, L_0041734C
    if (ctx->r2 != 0) {
        // 0x0041736C: addiu       $a0, $a0, 0x24
        ctx->r4 = ADD32(ctx->r4, 0X24);
            goto L_0041734C;
    }
    // 0x0041736C: addiu       $a0, $a0, 0x24
    ctx->r4 = ADD32(ctx->r4, 0X24);
L_00417370:
    // 0x00417370: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x00417374: lui         $a3, 0x800C
    ctx->r7 = S32(0X800C << 16);
    // 0x00417378: addiu       $a3, $a3, 0xC54
    ctx->r7 = ADD32(ctx->r7, 0XC54);
    // 0x0041737C: jal         0x00204EDC
    // 0x00417380: addiu       $a2, $zero, 0x3B
    ctx->r6 = ADD32(0, 0X3B);
    func_00204EDC(rdram, ctx);
        goto after_0;
    // 0x00417380: addiu       $a2, $zero, 0x3B
    ctx->r6 = ADD32(0, 0X3B);
    after_0:
    // 0x00417384: beql        $v0, $zero, L_004173F8
    if (ctx->r2 == 0) {
        // 0x00417388: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_004173F8;
    }
    goto skip_0;
    // 0x00417388: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    skip_0:
    // 0x0041738C: lw          $s0, 0x0($v0)
    ctx->r16 = MEM_W(ctx->r2, 0X0);
    // 0x00417390: bne         $s0, $zero, L_004173A0
    if (ctx->r16 != 0) {
        // 0x00417394: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_004173A0;
    }
    // 0x00417394: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00417398: j           L_004173F8
    // 0x0041739C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
        goto L_004173F8;
    // 0x0041739C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_004173A0:
    // 0x004173A0: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x004173A4: lw          $v0, 0x48($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X48);
    // 0x004173A8: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    // 0x004173AC: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x004173B0: lw          $v0, 0x4C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X4C);
    // 0x004173B4: addu        $a3, $s3, $zero
    ctx->r7 = ADD32(ctx->r19, 0);
    // 0x004173B8: sw          $s4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r20;
    // 0x004173BC: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x004173C0: jal         0x00414EA8
    // 0x004173C4: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    func_00414EA8(rdram, ctx);
        goto after_1;
    // 0x004173C4: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_1:
    // 0x004173C8: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x004173CC: jal         0x00200518
    // 0x004173D0: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_00200518(rdram, ctx);
        goto after_2;
    // 0x004173D0: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_2:
    // 0x004173D4: lhu         $v0, 0x14($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X14);
    // 0x004173D8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x004173DC: sh          $v0, 0x14($s2)
    MEM_H(0X14, ctx->r18) = ctx->r2;
    // 0x004173E0: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x004173E4: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x004173E8: slti        $v0, $v0, 0x4
    ctx->r2 = SIGNED(ctx->r2) < 0X4 ? 1 : 0;
    // 0x004173EC: beql        $v0, $zero, L_004173F4
    if (ctx->r2 == 0) {
        // 0x004173F0: sh          $zero, 0x14($s2)
        MEM_H(0X14, ctx->r18) = 0;
            goto L_004173F4;
    }
    goto skip_1;
    // 0x004173F0: sh          $zero, 0x14($s2)
    MEM_H(0X14, ctx->r18) = 0;
    skip_1:
L_004173F4:
    // 0x004173F4: addu        $v0, $s0, $zero
    ctx->r2 = ADD32(ctx->r16, 0);
L_004173F8:
    // 0x004173F8: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x004173FC: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x00417400: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x00417404: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x00417408: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x0041740C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x00417410: jr          $ra
    // 0x00417414: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x00417414: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_002973E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002973E0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x002973E4: beq         $a1, $v0, L_002973FC
    if (ctx->r5 == ctx->r2) {
        // 0x002973E8: addiu       $v0, $zero, 0x6
        ctx->r2 = ADD32(0, 0X6);
            goto L_002973FC;
    }
    // 0x002973E8: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x002973EC: beq         $a1, $v0, L_00297404
    if (ctx->r5 == ctx->r2) {
        // 0x002973F0: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_00297404;
    }
    // 0x002973F0: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x002973F4: j           L_0029740C
    // 0x002973F8: nop

        goto L_0029740C;
    // 0x002973F8: nop

L_002973FC:
    // 0x002973FC: j           L_00297408
    // 0x00297400: sw          $a2, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r6;
        goto L_00297408;
    // 0x00297400: sw          $a2, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r6;
L_00297404:
    // 0x00297404: sw          $a2, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r6;
L_00297408:
    // 0x00297408: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_0029740C:
    // 0x0029740C: jr          $ra
    // 0x00297410: nop

    return;
    // 0x00297410: nop

;}
RECOMP_FUNC void func_00275378(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00275378: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x0027537C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00275380: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x00275384: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x00275388: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x0027538C: lw          $v0, 0x38($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X38);
    // 0x00275390: beq         $v0, $zero, L_002753C8
    if (ctx->r2 == 0) {
        // 0x00275394: nop
    
            goto L_002753C8;
    }
    // 0x00275394: nop

    // 0x00275398: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x0027539C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x002753A0: lwc1        $f1, -0x7E0C($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, -0X7E0C);
    // 0x002753A4: lwc1        $f0, 0x2BA4($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X2BA4);
    // 0x002753A8: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x002753AC: lwc1        $f20, 0x24($s0)
    ctx->f20.u32l = MEM_W(ctx->r16, 0X24);
    // 0x002753B0: cvt.s.w     $f20, $f20
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    ctx->f20.fl = CVT_S_W(ctx->f20.u32l);
    // 0x002753B4: mul.s       $f20, $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = MUL_S(ctx->f20.fl, ctx->f0.fl);
    // 0x002753B8: lwc1        $f0, 0x3C($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X3C);
    // 0x002753BC: mul.s       $f20, $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = MUL_S(ctx->f20.fl, ctx->f0.fl);
    // 0x002753C0: j           L_00275414
    // 0x002753C4: nop

        goto L_00275414;
    // 0x002753C4: nop

L_002753C8:
    // 0x002753C8: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x002753CC: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x002753D0: lwc1        $f0, -0x7E08($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X7E08);
    // 0x002753D4: lwc1        $f1, 0x2BA4($v0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r2, 0X2BA4);
    // 0x002753D8: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x002753DC: lw          $v0, 0x2BB8($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2BB8);
    // 0x002753E0: lwc1        $f0, 0x24($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X24);
    // 0x002753E4: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x002753E8: mul.s       $f20, $f0, $f1
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f20.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x002753EC: beq         $v0, $zero, L_00275400
    if (ctx->r2 == 0) {
        // 0x002753F0: nop
    
            goto L_00275400;
    }
    // 0x002753F0: nop

    // 0x002753F4: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x002753F8: lwc1        $f0, -0x7E04($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X7E04);
    // 0x002753FC: mul.s       $f20, $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = MUL_S(ctx->f20.fl, ctx->f0.fl);
L_00275400:
    // 0x00275400: lwc1        $f0, 0x2C($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X2C);
    // 0x00275404: c.eq.s      $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f20.fl == ctx->f0.fl;
    // 0x00275408: nop

    // 0x0027540C: bc1t        L_0027543C
    if (c1cs) {
        // 0x00275410: nop
    
            goto L_0027543C;
    }
    // 0x00275410: nop

L_00275414:
    // 0x00275414: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00275418: lwc1        $f0, -0x7E00($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X7E00);
    // 0x0027541C: mul.s       $f0, $f20, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f20.fl, ctx->f0.fl);
    // 0x00275420: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x00275424: trunc.w.s   $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x00275428: mfc1        $a1, $f2
    ctx->r5 = (int32_t)ctx->f2.u32l;
    // 0x0027542C: sll         $a1, $a1, 16
    ctx->r5 = S32(ctx->r5 << 16);
    // 0x00275430: jal         0x00290EC0
    // 0x00275434: sra         $a1, $a1, 16
    ctx->r5 = S32(SIGNED(ctx->r5) >> 16);
    func_00290EC0(rdram, ctx);
        goto after_0;
    // 0x00275434: sra         $a1, $a1, 16
    ctx->r5 = S32(SIGNED(ctx->r5) >> 16);
    after_0:
    // 0x00275438: swc1        $f20, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->f20.u32l;
L_0027543C:
    // 0x0027543C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x00275440: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00275444: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x00275448: jr          $ra
    // 0x0027544C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x0027544C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_0029BE0C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0029BE0C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x0029BE10: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x0029BE14: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x0029BE18: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x0029BE1C: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x0029BE20: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x0029BE24: jal         0x0029DFF0
    // 0x0029BE28: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    func_0029DFF0(rdram, ctx);
        goto after_0;
    // 0x0029BE28: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    after_0:
    // 0x0029BE2C: jal         0x0029DFC0
    // 0x0029BE30: addu        $s2, $v0, $zero
    ctx->r18 = ADD32(ctx->r2, 0);
    func_0029DFC0(rdram, ctx);
        goto after_1;
    // 0x0029BE30: addu        $s2, $v0, $zero
    ctx->r18 = ADD32(ctx->r2, 0);
    after_1:
    // 0x0029BE34: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x0029BE38: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0029BE3C: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x0029BE40: sw          $v0, 0x2A30($at)
    MEM_W(0X2A30, ctx->r1) = ctx->r2;
    // 0x0029BE44: jal         0x0029E210
    // 0x0029BE48: addu        $a0, $s1, $a1
    ctx->r4 = ADD32(ctx->r17, ctx->r5);
    func_0029E210(rdram, ctx);
        goto after_2;
    // 0x0029BE48: addu        $a0, $s1, $a1
    ctx->r4 = ADD32(ctx->r17, ctx->r5);
    after_2:
    // 0x0029BE4C: jal         0x0029E010
    // 0x0029BE50: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_0029E010(rdram, ctx);
        goto after_3;
    // 0x0029BE50: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_3:
    // 0x0029BE54: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x0029BE58: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x0029BE5C: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x0029BE60: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x0029BE64: jr          $ra
    // 0x0029BE68: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x0029BE68: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_00419CB4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00419CB4: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x00419CB8: lbu         $v0, -0x5512($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X5512);
    // 0x00419CBC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00419CC0: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00419CC4: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x00419CC8: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x00419CCC: addiu       $a2, $v0, -0x80
    ctx->r6 = ADD32(ctx->r2, -0X80);
    // 0x00419CD0: bgez        $a2, L_00419CDC
    if (SIGNED(ctx->r6) >= 0) {
        // 0x00419CD4: sw          $s0, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r16;
            goto L_00419CDC;
    }
    // 0x00419CD4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00419CD8: addiu       $a2, $v0, -0x79
    ctx->r6 = ADD32(ctx->r2, -0X79);
L_00419CDC:
    // 0x00419CDC: sra         $s0, $a2, 3
    ctx->r16 = S32(SIGNED(ctx->r6) >> 3);
    // 0x00419CE0: bne         $s0, $zero, L_00419CF8
    if (ctx->r16 != 0) {
        // 0x00419CE4: addiu       $v0, $zero, 0xF
        ctx->r2 = ADD32(0, 0XF);
            goto L_00419CF8;
    }
    // 0x00419CE4: addiu       $v0, $zero, 0xF
    ctx->r2 = ADD32(0, 0XF);
    // 0x00419CE8: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00419CEC: addiu       $v0, $v0, 0x65D0
    ctx->r2 = ADD32(ctx->r2, 0X65D0);
    // 0x00419CF0: j           L_00419D7C
    // 0x00419CF4: sw          $v0, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r2;
        goto L_00419D7C;
    // 0x00419CF4: sw          $v0, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r2;
L_00419CF8:
    // 0x00419CF8: bne         $s0, $v0, L_00419D10
    if (ctx->r16 != ctx->r2) {
        // 0x00419CFC: addiu       $v0, $zero, -0x10
        ctx->r2 = ADD32(0, -0X10);
            goto L_00419D10;
    }
    // 0x00419CFC: addiu       $v0, $zero, -0x10
    ctx->r2 = ADD32(0, -0X10);
    // 0x00419D00: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00419D04: addiu       $v0, $v0, 0x65B8
    ctx->r2 = ADD32(ctx->r2, 0X65B8);
    // 0x00419D08: j           L_00419D7C
    // 0x00419D0C: sw          $v0, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r2;
        goto L_00419D7C;
    // 0x00419D0C: sw          $v0, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r2;
L_00419D10:
    // 0x00419D10: bne         $s0, $v0, L_00419D28
    if (ctx->r16 != ctx->r2) {
        // 0x00419D14: nop
    
            goto L_00419D28;
    }
    // 0x00419D14: nop

    // 0x00419D18: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00419D1C: addiu       $v0, $v0, 0x65A0
    ctx->r2 = ADD32(ctx->r2, 0X65A0);
    // 0x00419D20: j           L_00419D7C
    // 0x00419D24: sw          $v0, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r2;
        goto L_00419D7C;
    // 0x00419D24: sw          $v0, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r2;
L_00419D28:
    // 0x00419D28: blez        $s0, L_00419D50
    if (SIGNED(ctx->r16) <= 0) {
        // 0x00419D2C: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_00419D50;
    }
    // 0x00419D2C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x00419D30: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00419D34: addiu       $v0, $v0, 0x65E8
    ctx->r2 = ADD32(ctx->r2, 0X65E8);
    // 0x00419D38: jal         0x004160F0
    // 0x00419D3C: sw          $v0, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r2;
    func_004160F0(rdram, ctx);
        goto after_0;
    // 0x00419D3C: sw          $v0, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r2;
    after_0:
    // 0x00419D40: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x00419D44: addiu       $a1, $a1, 0x1030
    ctx->r5 = ADD32(ctx->r5, 0X1030);
    // 0x00419D48: j           L_00419D6C
    // 0x00419D4C: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
        goto L_00419D6C;
    // 0x00419D4C: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
L_00419D50:
    // 0x00419D50: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00419D54: addiu       $v0, $v0, 0x65E8
    ctx->r2 = ADD32(ctx->r2, 0X65E8);
    // 0x00419D58: jal         0x004160F0
    // 0x00419D5C: sw          $v0, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r2;
    func_004160F0(rdram, ctx);
        goto after_1;
    // 0x00419D5C: sw          $v0, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r2;
    after_1:
    // 0x00419D60: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x00419D64: addiu       $a1, $a1, 0x1038
    ctx->r5 = ADD32(ctx->r5, 0X1038);
    // 0x00419D68: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
L_00419D6C:
    // 0x00419D6C: lw          $a0, 0x14($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X14);
    // 0x00419D70: addiu       $v0, $v0, -0x4
    ctx->r2 = ADD32(ctx->r2, -0X4);
    // 0x00419D74: jal         0x0029E3E0
    // 0x00419D78: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    func_0029E3E0(rdram, ctx);
        goto after_2;
    // 0x00419D78: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    after_2:
L_00419D7C:
    // 0x00419D7C: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x00419D80: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00419D84: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00419D88: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x00419D8C: jr          $ra
    // 0x00419D90: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00419D90: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_0041057C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041057C: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x00410580: sdc1        $f22, 0x38($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X38, ctx->r29);
    // 0x00410584: mtc1        $a1, $f22
    ctx->f22.u32l = ctx->r5;
    // 0x00410588: sdc1        $f20, 0x28($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X28, ctx->r29);
    // 0x0041058C: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x00410590: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x00410594: addu        $s4, $a0, $zero
    ctx->r20 = ADD32(ctx->r4, 0);
    // 0x00410598: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x0041059C: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    // 0x004105A0: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x004105A4: addu        $s3, $s2, $zero
    ctx->r19 = ADD32(ctx->r18, 0);
    // 0x004105A8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x004105AC: addu        $s1, $s2, $zero
    ctx->r17 = ADD32(ctx->r18, 0);
    // 0x004105B0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x004105B4: addu        $s0, $s2, $zero
    ctx->r16 = ADD32(ctx->r18, 0);
    // 0x004105B8: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x004105BC: sdc1        $f21, 0x30($sp)
    CHECK_FR(ctx, 21);
    SD(ctx->f21.u64, 0X30, ctx->r29);
    // 0x004105C0: mov.s       $f21, $f20
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 20);
    ctx->f21.fl = ctx->f20.fl;
L_004105C4:
    // 0x004105C4: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x004105C8: lw          $v0, 0x1BB0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1BB0);
    // 0x004105CC: lw          $a0, 0x4($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X4);
    // 0x004105D0: jal         0x002017D4
    // 0x004105D4: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_002017D4(rdram, ctx);
        goto after_0;
    // 0x004105D4: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_0:
    // 0x004105D8: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x004105DC: slt         $v0, $s0, $v0
    ctx->r2 = SIGNED(ctx->r16) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x004105E0: beq         $v0, $zero, L_004106A4
    if (ctx->r2 == 0) {
        // 0x004105E4: nop
    
            goto L_004106A4;
    }
    // 0x004105E4: nop

    // 0x004105E8: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x004105EC: lw          $v0, 0x1BB0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1BB0);
    // 0x004105F0: addu        $s1, $s0, $zero
    ctx->r17 = ADD32(ctx->r16, 0);
    // 0x004105F4: lw          $a0, 0x4($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X4);
    // 0x004105F8: jal         0x002017D4
    // 0x004105FC: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_002017D4(rdram, ctx);
        goto after_1;
    // 0x004105FC: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_1:
    // 0x00410600: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x00410604: jal         0x002017D4
    // 0x00410608: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_002017D4(rdram, ctx);
        goto after_2;
    // 0x00410608: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_2:
    // 0x0041060C: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x00410610: jal         0x002017D4
    // 0x00410614: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_002017D4(rdram, ctx);
        goto after_3;
    // 0x00410614: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_3:
    // 0x00410618: lw          $s2, 0x4($v0)
    ctx->r18 = MEM_W(ctx->r2, 0X4);
    // 0x0041061C: addiu       $s3, $v0, 0x8
    ctx->r19 = ADD32(ctx->r2, 0X8);
    // 0x00410620: sll         $v0, $s2, 3
    ctx->r2 = S32(ctx->r18 << 3);
    // 0x00410624: addu        $v0, $v0, $s2
    ctx->r2 = ADD32(ctx->r2, ctx->r18);
    // 0x00410628: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x0041062C: addu        $v0, $v0, $s3
    ctx->r2 = ADD32(ctx->r2, ctx->r19);
    // 0x00410630: lwc1        $f0, -0x8($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, -0X8);
    // 0x00410634: mov.s       $f20, $f21
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 21);
    ctx->f20.fl = ctx->f21.fl;
    // 0x00410638: bne         $s1, $zero, L_00410650
    if (ctx->r17 != 0) {
        // 0x0041063C: add.s       $f21, $f20, $f0
        CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f21.fl = ctx->f20.fl + ctx->f0.fl;
            goto L_00410650;
    }
    // 0x0041063C: add.s       $f21, $f20, $f0
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f21.fl = ctx->f20.fl + ctx->f0.fl;
    // 0x00410640: c.le.s      $f22, $f20
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f22.fl <= ctx->f20.fl;
    // 0x00410644: nop

    // 0x00410648: bc1t        L_004106A4
    if (c1cs) {
        // 0x0041064C: nop
    
            goto L_004106A4;
    }
    // 0x0041064C: nop

L_00410650:
    // 0x00410650: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x00410654: lw          $v0, 0x1BB0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1BB0);
    // 0x00410658: lw          $a0, 0x4($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X4);
    // 0x0041065C: jal         0x002017D4
    // 0x00410660: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_002017D4(rdram, ctx);
        goto after_4;
    // 0x00410660: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_4:
    // 0x00410664: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x00410668: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x0041066C: bne         $s1, $v0, L_00410684
    if (ctx->r17 != ctx->r2) {
        // 0x00410670: nop
    
            goto L_00410684;
    }
    // 0x00410670: nop

    // 0x00410674: c.lt.s      $f21, $f22
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f21.fl < ctx->f22.fl;
    // 0x00410678: nop

    // 0x0041067C: bc1t        L_004106A4
    if (c1cs) {
        // 0x00410680: nop
    
            goto L_004106A4;
    }
    // 0x00410680: nop

L_00410684:
    // 0x00410684: c.le.s      $f20, $f22
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f20.fl <= ctx->f22.fl;
    // 0x00410688: nop

    // 0x0041068C: bc1f        L_004105C4
    if (!c1cs) {
        // 0x00410690: addiu       $s0, $s1, 0x1
        ctx->r16 = ADD32(ctx->r17, 0X1);
            goto L_004105C4;
    }
    // 0x00410690: addiu       $s0, $s1, 0x1
    ctx->r16 = ADD32(ctx->r17, 0X1);
    // 0x00410694: c.le.s      $f22, $f21
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 21);
    c1cs = ctx->f22.fl <= ctx->f21.fl;
    // 0x00410698: nop

    // 0x0041069C: bc1f        L_004105C4
    if (!c1cs) {
        // 0x004106A0: nop
    
            goto L_004105C4;
    }
    // 0x004106A0: nop

L_004106A4:
    // 0x004106A4: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x004106A8: lw          $v0, 0x1BB0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1BB0);
    // 0x004106AC: lw          $a0, 0x4($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X4);
    // 0x004106B0: jal         0x002017D4
    // 0x004106B4: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_002017D4(rdram, ctx);
        goto after_5;
    // 0x004106B4: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_5:
    // 0x004106B8: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x004106BC: jal         0x002017D4
    // 0x004106C0: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_002017D4(rdram, ctx);
        goto after_6;
    // 0x004106C0: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_6:
    // 0x004106C4: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x004106C8: jal         0x002017D4
    // 0x004106CC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_002017D4(rdram, ctx);
        goto after_7;
    // 0x004106CC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_7:
    // 0x004106D0: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x004106D4: bnel        $v0, $zero, L_004106DC
    if (ctx->r2 != 0) {
        // 0x004106D8: mov.s       $f22, $f20
        CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 20);
    ctx->f22.fl = ctx->f20.fl;
            goto L_004106DC;
    }
    goto skip_0;
    // 0x004106D8: mov.s       $f22, $f20
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 20);
    ctx->f22.fl = ctx->f20.fl;
    skip_0:
L_004106DC:
    // 0x004106DC: sub.s       $f22, $f22, $f20
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f22.fl = ctx->f22.fl - ctx->f20.fl;
    // 0x004106E0: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    // 0x004106E4: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    // 0x004106E8: mfc1        $a3, $f22
    ctx->r7 = (int32_t)ctx->f22.u32l;
    // 0x004106EC: jal         0x004101B8
    // 0x004106F0: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    func_004101B8(rdram, ctx);
        goto after_8;
    // 0x004106F0: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    after_8:
    // 0x004106F4: addu        $v0, $s4, $zero
    ctx->r2 = ADD32(ctx->r20, 0);
    // 0x004106F8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x004106FC: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x00410700: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x00410704: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x00410708: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x0041070C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00410710: ldc1        $f22, 0x38($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X38);
    // 0x00410714: ldc1        $f21, 0x30($sp)
    CHECK_FR(ctx, 21);
    ctx->f21.u64 = LD(ctx->r29, 0X30);
    // 0x00410718: ldc1        $f20, 0x28($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X28);
    // 0x0041071C: jr          $ra
    // 0x00410720: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x00410720: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_00417CA0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00417CA0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00417CA4: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x00417CA8: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x00417CAC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00417CB0: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x00417CB4: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00417CB8: lui         $s1, 0x800F
    ctx->r17 = S32(0X800F << 16);
    // 0x00417CBC: addiu       $s1, $s1, 0x5EC0
    ctx->r17 = ADD32(ctx->r17, 0X5EC0);
    // 0x00417CC0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
L_00417CC4:
    // 0x00417CC4: jal         0x002855E8
    // 0x00417CC8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_002855E8(rdram, ctx);
        goto after_0;
    // 0x00417CC8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_0:
    // 0x00417CCC: beq         $v0, $zero, L_00417CDC
    if (ctx->r2 == 0) {
        // 0x00417CD0: addu        $v0, $s1, $zero
        ctx->r2 = ADD32(ctx->r17, 0);
            goto L_00417CDC;
    }
    // 0x00417CD0: addu        $v0, $s1, $zero
    ctx->r2 = ADD32(ctx->r17, 0);
    // 0x00417CD4: j           L_00417CF8
    // 0x00417CD8: sw          $s0, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r16;
        goto L_00417CF8;
    // 0x00417CD8: sw          $s0, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r16;
L_00417CDC:
    // 0x00417CDC: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x00417CE0: slti        $v0, $s0, 0x4
    ctx->r2 = SIGNED(ctx->r16) < 0X4 ? 1 : 0;
    // 0x00417CE4: bne         $v0, $zero, L_00417CC4
    if (ctx->r2 != 0) {
        // 0x00417CE8: addiu       $s1, $s1, 0x224
        ctx->r17 = ADD32(ctx->r17, 0X224);
            goto L_00417CC4;
    }
    // 0x00417CE8: addiu       $s1, $s1, 0x224
    ctx->r17 = ADD32(ctx->r17, 0X224);
    // 0x00417CEC: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x00417CF0: sw          $v0, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r2;
    // 0x00417CF4: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_00417CF8:
    // 0x00417CF8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x00417CFC: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x00417D00: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00417D04: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00417D08: jr          $ra
    // 0x00417D0C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00417D0C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_00468878(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00468878: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0046887C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00468880: lui         $s0, 0x800F
    ctx->r16 = S32(0X800F << 16);
    // 0x00468884: addiu       $s0, $s0, 0x56B0
    ctx->r16 = ADD32(ctx->r16, 0X56B0);
    // 0x00468888: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x0046888C: lw          $v0, 0xC($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC);
    // 0x00468890: bne         $v0, $zero, L_004688A8
    if (ctx->r2 != 0) {
        // 0x00468894: addiu       $a0, $s0, 0x194
        ctx->r4 = ADD32(ctx->r16, 0X194);
            goto L_004688A8;
    }
    // 0x00468894: addiu       $a0, $s0, 0x194
    ctx->r4 = ADD32(ctx->r16, 0X194);
    // 0x00468898: lw          $v0, 0xC($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XC);
    // 0x0046889C: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
        turok2_patch_scale_overlay_wait(rdram, ctx);

    // 0x004688A0: bgtz        $v0, L_004688B4
    if (SIGNED(ctx->r2) > 0) {
        // 0x004688A4: sw          $v0, 0xC($a0)
        MEM_W(0XC, ctx->r4) = ctx->r2;
            goto L_004688B4;
    }
    // 0x004688A4: sw          $v0, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->r2;
L_004688A8:
    // 0x004688A8: lw          $v0, 0x14($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X14);
    // 0x004688AC: jalr        $v0
    // 0x004688B0: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x004688B0: nop

    after_0:
L_004688B4:
    // 0x004688B4: lw          $v0, 0x194($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X194);
    // 0x004688B8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x004688BC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x004688C0: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x004688C4: sw          $v0, -0x52F0($at)
    MEM_W(-0X52F0, ctx->r1) = ctx->r2;
    // 0x004688C8: jr          $ra
    // 0x004688CC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x004688CC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
