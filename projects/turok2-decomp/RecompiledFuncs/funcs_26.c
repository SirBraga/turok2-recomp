#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_00294E6C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00294E6C: sw          $v0, 0xD4($s1)
    MEM_W(0XD4, ctx->r17) = ctx->r2;
;}
RECOMP_FUNC void func_0025557C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0025557C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00255580: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x00255584: lwc1        $f0, 0xA78($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0XA78);
    // 0x00255588: mtc1        $zero, $f1
    ctx->f_odd[(1 - 1) * 2] = 0;
    // 0x0025558C: c.eq.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl == ctx->f1.fl;
    // 0x00255590: nop

    // 0x00255594: bc1f        L_002555B0
    if (!c1cs) {
        // 0x00255598: nop
    
            goto L_002555B0;
    }
    // 0x00255598: nop

    // 0x0025559C: lwc1        $f0, 0xA7C($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0XA7C);
    // 0x002555A0: c.eq.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl == ctx->f1.fl;
    // 0x002555A4: nop

    // 0x002555A8: bc1t        L_002555B8
    if (c1cs) {
        // 0x002555AC: nop
    
            goto L_002555B8;
    }
    // 0x002555AC: nop

L_002555B0:
    // 0x002555B0: jal         0x0024E5F0
    // 0x002555B4: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    func_0024E5F0(rdram, ctx);
        goto after_0;
    // 0x002555B4: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_0:
L_002555B8:
    // 0x002555B8: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x002555BC: jr          $ra
    // 0x002555C0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x002555C0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0027598C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0027598C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00275990: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x00275994: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x00275998: addiu       $a0, $a0, 0x2A00
    ctx->r4 = ADD32(ctx->r4, 0X2A00);
    // 0x0027599C: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x002759A0: jal         0x002718BC
    // 0x002759A4: nop

    func_002718BC(rdram, ctx);
        goto after_0;
    // 0x002759A4: nop

    after_0:
    // 0x002759A8: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x002759AC: jr          $ra
    // 0x002759B0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x002759B0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00254744(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00254744: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x00254748: lbu         $v0, -0x550F($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X550F);
    // 0x0025474C: beq         $v0, $zero, L_00254760
    if (ctx->r2 == 0) {
            // 0x00254750: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    func_00254760(rdram, ctx);
    return;
    }
    // 0x00254750: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x00254754: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00254758: jr          $ra
    // 0x0025475C: sh          $v0, 0x52A($a0)
    MEM_H(0X52A, ctx->r4) = ctx->r2;
    return;
    // 0x0025475C: sh          $v0, 0x52A($a0)
    MEM_H(0X52A, ctx->r4) = ctx->r2;
;}
RECOMP_FUNC void func_0025FD08(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0025FD08: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0025FD0C: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x0025FD10: lb          $v0, 0xC7($a1)
    ctx->r2 = MEM_B(ctx->r5, 0XC7);
    // 0x0025FD14: beq         $v0, $zero, L_0025FD24
    if (ctx->r2 == 0) {
        // 0x0025FD18: nop
    
            goto L_0025FD24;
    }
    // 0x0025FD18: nop

    // 0x0025FD1C: jal         0x00243414
    // 0x0025FD20: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    func_00243414(rdram, ctx);
        goto after_0;
    // 0x0025FD20: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    after_0:
L_0025FD24:
    // 0x0025FD24: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x0025FD28: jr          $ra
    // 0x0025FD2C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0025FD2C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00416894(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00416894: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x00416898: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x0041689C: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x004168A0: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x004168A4: addu        $s2, $a2, $zero
    ctx->r18 = ADD32(ctx->r6, 0);
    // 0x004168A8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x004168AC: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x004168B0: sw          $s6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r22;
    // 0x004168B4: sw          $s5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r21;
    // 0x004168B8: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x004168BC: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x004168C0: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x004168C4: lh          $v1, 0x4($s2)
    ctx->r3 = MEM_H(ctx->r18, 0X4);
    // 0x004168C8: lw          $s3, 0x14($a1)
    ctx->r19 = MEM_W(ctx->r5, 0X14);
    // 0x004168CC: lw          $s4, 0x1C($a1)
    ctx->r20 = MEM_W(ctx->r5, 0X1C);
    // 0x004168D0: lw          $s5, 0x20($a1)
    ctx->r21 = MEM_W(ctx->r5, 0X20);
    // 0x004168D4: lw          $s6, 0x24($a1)
    ctx->r22 = MEM_W(ctx->r5, 0X24);
    // 0x004168D8: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x004168DC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x004168E0: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x004168E4: blez        $v1, L_0041691C
    if (SIGNED(ctx->r3) <= 0) {
        // 0x004168E8: addiu       $a3, $v0, 0x1D8
        ctx->r7 = ADD32(ctx->r2, 0X1D8);
            goto L_0041691C;
    }
    // 0x004168E8: addiu       $a3, $v0, 0x1D8
    ctx->r7 = ADD32(ctx->r2, 0X1D8);
    // 0x004168EC: addiu       $t0, $zero, 0x3
    ctx->r8 = ADD32(0, 0X3);
    // 0x004168F0: addu        $a1, $v1, $zero
    ctx->r5 = ADD32(ctx->r3, 0);
    // 0x004168F4: lw          $a0, 0x0($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X0);
L_004168F8:
    // 0x004168F8: lh          $v0, 0x0($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X0);
    // 0x004168FC: bne         $v0, $t0, L_00416908
    if (ctx->r2 != ctx->r8) {
        // 0x00416900: addu        $v1, $zero, $zero
        ctx->r3 = ADD32(0, 0);
            goto L_00416908;
    }
    // 0x00416900: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
    // 0x00416904: addiu       $v1, $zero, 0x330
    ctx->r3 = ADD32(0, 0X330);
L_00416908:
    // 0x00416908: addu        $a3, $a3, $v1
    ctx->r7 = ADD32(ctx->r7, ctx->r3);
    // 0x0041690C: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x00416910: slt         $v0, $a2, $a1
    ctx->r2 = SIGNED(ctx->r6) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x00416914: bne         $v0, $zero, L_004168F8
    if (ctx->r2 != 0) {
        // 0x00416918: addiu       $a0, $a0, 0x24
        ctx->r4 = ADD32(ctx->r4, 0X24);
            goto L_004168F8;
    }
    // 0x00416918: addiu       $a0, $a0, 0x24
    ctx->r4 = ADD32(ctx->r4, 0X24);
L_0041691C:
    // 0x0041691C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x00416920: addu        $a1, $a3, $zero
    ctx->r5 = ADD32(ctx->r7, 0);
    // 0x00416924: lui         $a3, 0x800C
    ctx->r7 = S32(0X800C << 16);
    // 0x00416928: addiu       $a3, $a3, 0xC54
    ctx->r7 = ADD32(ctx->r7, 0XC54);
    // 0x0041692C: jal         0x00204EDC
    // 0x00416930: addiu       $a2, $zero, 0x3B
    ctx->r6 = ADD32(0, 0X3B);
    func_00204EDC(rdram, ctx);
        goto after_0;
    // 0x00416930: addiu       $a2, $zero, 0x3B
    ctx->r6 = ADD32(0, 0X3B);
    after_0:
    // 0x00416934: beql        $v0, $zero, L_004169A0
    if (ctx->r2 == 0) {
            // 0x00416938: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    func_004169A0(rdram, ctx);
    return;
    }
    goto skip_0;
    // 0x00416938: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    skip_0:
    // 0x0041693C: lw          $s0, 0x0($v0)
    ctx->r16 = MEM_W(ctx->r2, 0X0);
    // 0x00416940: bne         $s0, $zero, L_00416950
    if (ctx->r16 != 0) {
        // 0x00416944: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_00416950;
    }
    // 0x00416944: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00416948: j           L_004169A0
    // 0x0041694C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    func_004169A0(rdram, ctx);
    return;
    // 0x0041694C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_00416950:
    // 0x00416950: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x00416954: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    // 0x00416958: addu        $a3, $s3, $zero
    ctx->r7 = ADD32(ctx->r19, 0);
    // 0x0041695C: sw          $s4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r20;
    // 0x00416960: sw          $s5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r21;
    // 0x00416964: sw          $s6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r22;
    // 0x00416968: jal         0x00414EA8
    // 0x0041696C: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    func_00414EA8(rdram, ctx);
        goto after_1;
    // 0x0041696C: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    after_1:
    // 0x00416970: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x00416974: jal         0x00200518
    // 0x00416978: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_00200518(rdram, ctx);
        goto after_2;
    // 0x00416978: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_2:
    // 0x0041697C: lhu         $v0, 0x14($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X14);
    // 0x00416980: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x00416984: sh          $v0, 0x14($s1)
    MEM_H(0X14, ctx->r17) = ctx->r2;
    // 0x00416988: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x0041698C: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x00416990: slti        $v0, $v0, 0x4
    ctx->r2 = SIGNED(ctx->r2) < 0X4 ? 1 : 0;
    // 0x00416994: beql        $v0, $zero, L_0041699C
    if (ctx->r2 == 0) {
        // 0x00416998: sh          $zero, 0x14($s1)
        MEM_H(0X14, ctx->r17) = 0;
            goto L_0041699C;
    }
    goto skip_1;
    // 0x00416998: sh          $zero, 0x14($s1)
    MEM_H(0X14, ctx->r17) = 0;
    skip_1:
L_0041699C:
    // 0x0041699C: addu        $v0, $s0, $zero
    ctx->r2 = ADD32(ctx->r16, 0);
    // turok2: reconnected split function: a stray ELF symbol at 0x004169A0 ended
    // this function early, leaving it without its epilogue. On the
    // hardware execution simply continues into the next instruction.
    func_004169A0(rdram, ctx);
;}
RECOMP_FUNC void func_00467E4C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_0042F074:
    // 0x00467E4C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x00467E50: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00467E54: lui         $s1, 0x800F
    ctx->r17 = S32(0X800F << 16);
    // 0x00467E58: addiu       $s1, $s1, 0x56B0
    ctx->r17 = ADD32(ctx->r17, 0X56B0);
    // 0x00467E5C: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00467E60: lw          $v0, 0x6D60($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X6D60);
    // 0x00467E64: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x00467E68: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x00467E6C: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x00467E70: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x00467E74: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x00467E78: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00467E7C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x00467E80: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00467E84: sw          $v0, 0x6D60($at)
    MEM_W(0X6D60, ctx->r1) = ctx->r2;
    // 0x00467E88: lw          $v0, 0x1C8($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X1C8);
    // 0x00467E8C: addu        $t0, $s2, $zero
    ctx->r8 = ADD32(ctx->r18, 0);
    // 0x00467E90: sw          $zero, 0x4($s1)
    MEM_W(0X4, ctx->r17) = 0;
    // 0x00467E94: sw          $v1, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->r3;
    // 0x00467E98: sw          $zero, 0x10($s1)
    MEM_W(0X10, ctx->r17) = 0;
    // 0x00467E9C: bne         $v0, $zero, L_00467EEC
    if (ctx->r2 != 0) {
        // 0x00467EA0: sw          $v1, 0xC($s1)
        MEM_W(0XC, ctx->r17) = ctx->r3;
            goto L_00467EEC;
    }
    // 0x00467EA0: sw          $v1, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->r3;
    // 0x00467EA4: sw          $v1, 0x1C8($s1)
    MEM_W(0X1C8, ctx->r17) = ctx->r3;
    // 0x00467EA8: addiu       $v1, $s1, 0x1CC
    ctx->r3 = ADD32(ctx->r17, 0X1CC);
    // 0x00467EAC: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x00467EB0: addiu       $v0, $v0, -0x5528
    ctx->r2 = ADD32(ctx->r2, -0X5528);
    // 0x00467EB4: addiu       $a0, $v0, 0x180
    ctx->r4 = ADD32(ctx->r2, 0X180);
L_00467EB8:
    // 0x00467EB8: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x00467EBC: lw          $t7, 0x4($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X4);
    // 0x00467EC0: lw          $t8, 0x8($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X8);
    // 0x00467EC4: lw          $t9, 0xC($v0)
    ctx->r25 = MEM_W(ctx->r2, 0XC);
    // 0x00467EC8: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x00467ECC: sw          $t7, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r15;
    // 0x00467ED0: sw          $t8, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r24;
    // 0x00467ED4: sw          $t9, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r25;
    // 0x00467ED8: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
    // 0x00467EDC: bne         $v0, $a0, L_00467EB8
    if (ctx->r2 != ctx->r4) {
        // 0x00467EE0: addiu       $v1, $v1, 0x10
        ctx->r3 = ADD32(ctx->r3, 0X10);
            goto L_00467EB8;
    }
    // 0x00467EE0: addiu       $v1, $v1, 0x10
    ctx->r3 = ADD32(ctx->r3, 0X10);
    // 0x00467EE4: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x00467EE8: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
L_00467EEC:
    // 0x00467EEC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x00467EF0: lui         $t5, 0x43
    ctx->r13 = S32(0X43 << 16);
    // 0x00467EF4: addiu       $t5, $t5, -0x13F0
    ctx->r13 = ADD32(ctx->r13, -0X13F0);
    // 0x00467EF8: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x00467EFC: lui         $t3, 0x43
    ctx->r11 = S32(0X43 << 16);
    // 0x00467F00: addiu       $t3, $t3, -0x984
    ctx->r11 = ADD32(ctx->r11, -0X984);
    // 0x00467F04: addu        $a3, $s2, $zero
    ctx->r7 = ADD32(ctx->r18, 0);
    // 0x00467F08: lui         $t4, 0x8012
    ctx->r12 = S32(0X8012 << 16);
    // 0x00467F0C: addiu       $t4, $t4, -0x5528
    ctx->r12 = ADD32(ctx->r12, -0X5528);
    // 0x00467F10: addu        $t1, $t4, $zero
    ctx->r9 = ADD32(ctx->r12, 0);
L_00467F14:
    // 0x00467F14: sll         $a0, $a2, 5
    ctx->r4 = S32(ctx->r6 << 5);
    // 0x00467F18: addu        $v0, $a0, $s1
    ctx->r2 = ADD32(ctx->r4, ctx->r17);
    // 0x00467F1C: addiu       $v0, $v0, 0x14
    ctx->r2 = ADD32(ctx->r2, 0X14);
    // 0x00467F20: addu        $v1, $a0, $s1
    ctx->r3 = ADD32(ctx->r4, ctx->r17);
    // 0x00467F24: addiu       $v1, $v1, 0x94
    ctx->r3 = ADD32(ctx->r3, 0X94);
    // 0x00467F28: addu        $a0, $a0, $s1
    ctx->r4 = ADD32(ctx->r4, ctx->r17);
    // 0x00467F2C: sb          $zero, 0x68($t4)
    MEM_B(0X68, ctx->r12) = 0;
    // 0x00467F30: sb          $zero, 0xA8($t1)
    MEM_B(0XA8, ctx->r9) = 0;
    // 0x00467F34: lh          $a1, 0x10($a3)
    ctx->r5 = MEM_H(ctx->r7, 0X10);
    // 0x00467F38: addiu       $a0, $a0, 0x114
    ctx->r4 = ADD32(ctx->r4, 0X114);
    // 0x00467F3C: sw          $t0, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r8;
    // 0x00467F40: sw          $a2, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r6;
    // 0x00467F44: sw          $t2, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r10;
    // 0x00467F48: sw          $t5, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->r13;
    // 0x00467F4C: sw          $zero, 0x18($v0)
    MEM_W(0X18, ctx->r2) = 0;
    // 0x00467F50: sw          $zero, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = 0;
    // 0x00467F54: sw          $a1, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r5;
    // 0x00467F58: lh          $v0, 0x18($a3)
    ctx->r2 = MEM_H(ctx->r7, 0X18);
    // 0x00467F5C: addiu       $t1, $t1, 0x40
    ctx->r9 = ADD32(ctx->r9, 0X40);
    // 0x00467F60: sw          $t0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r8;
    // 0x00467F64: sw          $a2, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->r6;
    // 0x00467F68: sw          $t2, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r10;
    // 0x00467F6C: sw          $t3, 0x14($v1)
    MEM_W(0X14, ctx->r3) = ctx->r11;
    // 0x00467F70: sw          $zero, 0x18($v1)
    MEM_W(0X18, ctx->r3) = 0;
    // 0x00467F74: sw          $zero, 0x1C($v1)
    MEM_W(0X1C, ctx->r3) = 0;
    // 0x00467F78: sw          $v0, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r2;
    // 0x00467F7C: lh          $v0, 0x20($a3)
    ctx->r2 = MEM_H(ctx->r7, 0X20);
    // 0x00467F80: sw          $a2, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->r6;
    // 0x00467F84: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x00467F88: sw          $t0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r8;
    // 0x00467F8C: sw          $t2, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->r10;
    // 0x00467F90: sw          $t3, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r11;
    // 0x00467F94: sw          $zero, 0x18($a0)
    MEM_W(0X18, ctx->r4) = 0;
    // 0x00467F98: sw          $zero, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = 0;
    // 0x00467F9C: sw          $v0, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r2;
    // 0x00467FA0: slti        $v0, $a2, 0x4
    ctx->r2 = SIGNED(ctx->r6) < 0X4 ? 1 : 0;
    // 0x00467FA4: bne         $v0, $zero, L_00467F14
    if (ctx->r2 != 0) {
        // 0x00467FA8: addiu       $a3, $a3, 0x2
        ctx->r7 = ADD32(ctx->r7, 0X2);
            goto L_00467F14;
    }
    // 0x00467FA8: addiu       $a3, $a3, 0x2
    ctx->r7 = ADD32(ctx->r7, 0X2);
    // 0x00467FAC: addiu       $v0, $s1, 0x194
    ctx->r2 = ADD32(ctx->r17, 0X194);
    // 0x00467FB0: addiu       $s3, $zero, 0x1
    ctx->r19 = ADD32(0, 0X1);
    // 0x00467FB4: lh          $a0, 0x6($s2)
    ctx->r4 = MEM_H(ctx->r18, 0X6);
    // 0x00467FB8: lui         $v1, 0x43
    ctx->r3 = S32(0X43 << 16);
    // 0x00467FBC: addiu       $v1, $v1, -0x918
    ctx->r3 = ADD32(ctx->r3, -0X918);
    // 0x00467FC0: sw          $t0, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r8;
    // 0x00467FC4: sw          $zero, 0x10($v0)
    MEM_W(0X10, ctx->r2) = 0;
    // 0x00467FC8: sw          $s3, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r19;
    // 0x00467FCC: sw          $v1, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->r3;
    // 0x00467FD0: sw          $zero, 0x18($v0)
    MEM_W(0X18, ctx->r2) = 0;
    // 0x00467FD4: sw          $zero, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = 0;
    // 0x00467FD8: sw          $a0, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r4;
    // 0x00467FDC: lh          $v0, 0x2($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X2);
    // 0x00467FE0: sw          $zero, 0x1B8($s1)
    MEM_W(0X1B8, ctx->r17) = 0;
    // 0x00467FE4: sw          $v0, 0x1B4($s1)
    MEM_W(0X1B4, ctx->r17) = ctx->r2;
    // 0x00467FE8: lh          $v0, 0x4($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X4);
    // 0x00467FEC: sw          $zero, 0x1C0($s1)
    MEM_W(0X1C0, ctx->r17) = 0;
    // 0x00467FF0: sw          $zero, 0x1C4($s1)
    MEM_W(0X1C4, ctx->r17) = 0;
    // 0x00467FF4: sw          $v0, 0x1BC($s1)
    MEM_W(0X1BC, ctx->r17) = ctx->r2;
    // 0x00467FF8: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x00467FFC: addiu       $v0, $v0, -0x5358
    ctx->r2 = ADD32(ctx->r2, -0X5358);
    // 0x00468000: addiu       $s0, $v0, -0x1D0
    ctx->r16 = ADD32(ctx->r2, -0X1D0);
    // 0x00468004: lhu         $v1, 0x0($s2)
    ctx->r3 = MEM_HU(ctx->r18, 0X0);
    // 0x00468008: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0046800C: jal         0x0041B9B0
    // 0x00468010: sw          $v1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r3;
    func_0041B9B0(rdram, ctx);
        goto after_0;
    // 0x00468010: sw          $v1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r3;
    after_0:
    // 0x00468014: lw          $v1, 0x1B4($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X1B4);
    // 0x00468018: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x0046801C: bnel        $v0, $zero, L_00468070
    if (ctx->r2 != 0) {
        // 0x00468020: sb          $s3, 0x68($s0)
        MEM_B(0X68, ctx->r16) = ctx->r19;
            goto L_00468070;
    }
    goto skip_0;
    // 0x00468020: sb          $s3, 0x68($s0)
    MEM_B(0X68, ctx->r16) = ctx->r19;
    skip_0:
    // 0x00468024: blez        $v1, L_0046805C
    if (SIGNED(ctx->r3) <= 0) {
        // 0x00468028: addu        $a2, $zero, $zero
        ctx->r6 = ADD32(0, 0);
            goto L_0046805C;
    }
    // 0x00468028: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x0046802C: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    // 0x00468030: addu        $v1, $s2, $zero
    ctx->r3 = ADD32(ctx->r18, 0);
    // 0x00468034: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_00468038:
    // 0x00468038: sb          $a1, 0xA8($a0)
    MEM_B(0XA8, ctx->r4) = ctx->r5;
    // 0x0046803C: lbu         $v0, 0x9($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X9);
    // 0x00468040: addiu       $v1, $v1, 0x2
    ctx->r3 = ADD32(ctx->r3, 0X2);
    // 0x00468044: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x00468048: sb          $v0, 0xB0($a0)
    MEM_B(0XB0, ctx->r4) = ctx->r2;
    // 0x0046804C: lw          $v0, 0x1B4($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X1B4);
    // 0x00468050: slt         $v0, $a2, $v0
    ctx->r2 = SIGNED(ctx->r6) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x00468054: bne         $v0, $zero, L_00468038
    if (ctx->r2 != 0) {
        // 0x00468058: addiu       $a0, $a0, 0x40
        ctx->r4 = ADD32(ctx->r4, 0X40);
            goto L_00468038;
    }
    // 0x00468058: addiu       $a0, $a0, 0x40
    ctx->r4 = ADD32(ctx->r4, 0X40);
L_0046805C:
    // 0x0046805C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00468060: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x00468064: sb          $v0, -0x550F($at)
    MEM_B(-0X550F, ctx->r1) = ctx->r2;
    // 0x00468068: j           L_0042F074
    // 0x0046806C: nop

    entry_0042F074(rdram, ctx);
    return;
    // 0x0046806C: nop

L_00468070:
    // 0x00468070: sb          $zero, 0x19($s0)
    MEM_B(0X19, ctx->r16) = 0;
    // 0x00468074: lui         $s0, 0x8012
    ctx->r16 = S32(0X8012 << 16);
    // 0x00468078: addiu       $s0, $s0, -0x5528
    ctx->r16 = ADD32(ctx->r16, -0X5528);
    // 0x0046807C: sb          $zero, 0x17($s0)
    MEM_B(0X17, ctx->r16) = 0;
    // 0x00468080: lbu         $v1, 0x1B7($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X1B7);
    // 0x00468084: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
    // 0x00468088: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x0046808C: jal         0x002113A4
    // 0x00468090: sb          $v1, 0x1A($s0)
    MEM_B(0X1A, ctx->r16) = ctx->r3;
    func_002113A4(rdram, ctx);
        goto after_1;
    // 0x00468090: sb          $v1, 0x1A($s0)
    MEM_B(0X1A, ctx->r16) = ctx->r3;
    after_1:
    // 0x00468094: lui         $v1, 0x38E3
    ctx->r3 = S32(0X38E3 << 16);
    // 0x00468098: ori         $v1, $v1, 0x8E39
    ctx->r3 = ctx->r3 | 0X8E39;
    // 0x0046809C: mult        $v0, $v1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x004680A0: sra         $v1, $v0, 31
    ctx->r3 = S32(SIGNED(ctx->r2) >> 31);
    // 0x004680A4: mfhi        $t6
    ctx->r14 = hi;
    // 0x004680A8: sra         $a0, $t6, 1
    ctx->r4 = S32(SIGNED(ctx->r14) >> 1);
    // 0x004680AC: subu        $a0, $a0, $v1
    ctx->r4 = SUB32(ctx->r4, ctx->r3);
    // 0x004680B0: sll         $v1, $a0, 3
    ctx->r3 = S32(ctx->r4 << 3);
    // 0x004680B4: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x004680B8: subu        $a0, $v0, $v1
    ctx->r4 = SUB32(ctx->r2, ctx->r3);
    // 0x004680BC: sb          $a0, 0x23($s0)
    MEM_B(0X23, ctx->r16) = ctx->r4;
    // 0x004680C0: sb          $a0, 0x28($s0)
    MEM_B(0X28, ctx->r16) = ctx->r4;
    // 0x004680C4: sb          $a0, 0x2D($s0)
    MEM_B(0X2D, ctx->r16) = ctx->r4;
    // 0x004680C8: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x004680CC: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x004680D0: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x004680D4: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x004680D8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x004680DC: jr          $ra
    // 0x004680E0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x004680E0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_00283FF8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00283FF8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x00283FFC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00284000: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x00284004: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00284008: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x0028400C: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x00284010: addu        $s2, $a2, $zero
    ctx->r18 = ADD32(ctx->r6, 0);
    // 0x00284014: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x00284018: jal         0x00412438
    // 0x0028401C: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    func_00412438(rdram, ctx);
        goto after_0;
    // 0x0028401C: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    after_0:
    // 0x00284020: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x00284024: lw          $a0, 0x1BB0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1BB0);
    // 0x00284028: lw          $v1, 0xE0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0XE0);
    // 0x0028402C: bne         $v1, $s0, L_00284040
    if (ctx->r3 != ctx->r16) {
        // 0x00284030: addu        $s3, $v0, $zero
        ctx->r19 = ADD32(ctx->r2, 0);
            goto L_00284040;
    }
    // 0x00284030: addu        $s3, $v0, $zero
    ctx->r19 = ADD32(ctx->r2, 0);
    // 0x00284034: sw          $s1, 0xE4($a0)
    MEM_W(0XE4, ctx->r4) = ctx->r17;
    // 0x00284038: j           L_00284060
    // 0x0028403C: sw          $s2, 0xE8($a0)
    MEM_W(0XE8, ctx->r4) = ctx->r18;
        goto L_00284060;
    // 0x0028403C: sw          $s2, 0xE8($a0)
    MEM_W(0XE8, ctx->r4) = ctx->r18;
L_00284040:
    // 0x00284040: beq         $s1, $zero, L_00284050
    if (ctx->r17 == 0) {
        // 0x00284044: nop
    
            goto L_00284050;
    }
    // 0x00284044: nop

    // 0x00284048: jalr        $s1
    // 0x0028404C: nop

    LOOKUP_FUNC(ctx->r17)(rdram, ctx);
        goto after_1;
    // 0x0028404C: nop

    after_1:
L_00284050:
    // 0x00284050: beq         $s2, $zero, L_00284064
    if (ctx->r18 == 0) {
        // 0x00284054: addu        $v0, $s3, $zero
        ctx->r2 = ADD32(ctx->r19, 0);
            goto L_00284064;
    }
    // 0x00284054: addu        $v0, $s3, $zero
    ctx->r2 = ADD32(ctx->r19, 0);
    // 0x00284058: jalr        $s2
    // 0x0028405C: nop

    LOOKUP_FUNC(ctx->r18)(rdram, ctx);
        goto after_2;
    // 0x0028405C: nop

    after_2:
L_00284060:
    // 0x00284060: addu        $v0, $s3, $zero
    ctx->r2 = ADD32(ctx->r19, 0);
L_00284064:
    // 0x00284064: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x00284068: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x0028406C: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x00284070: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00284074: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00284078: jr          $ra
    // 0x0028407C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x0028407C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_00444EA8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00444EA8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00444EAC: lui         $a1, 0x4461
    ctx->r5 = S32(0X4461 << 16);
    // 0x00444EB0: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x00444EB4: addiu       $a0, $a0, -0x6790
    ctx->r4 = ADD32(ctx->r4, -0X6790);
    // 0x00444EB8: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x00444EBC: jal         0x002535E4
    // 0x00444EC0: nop

    func_002535E4(rdram, ctx);
        goto after_0;
    // 0x00444EC0: nop

    after_0:
    // 0x00444EC4: addiu       $a0, $zero, 0xE6
    ctx->r4 = ADD32(0, 0XE6);
    // 0x00444EC8: lui         $a1, 0x41
    ctx->r5 = S32(0X41 << 16);
    // 0x00444ECC: addiu       $a1, $a1, -0x3824
    ctx->r5 = ADD32(ctx->r5, -0X3824);
    // 0x00444ED0: jal         0x00283FF8
    // 0x00444ED4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_00283FF8(rdram, ctx);
        goto after_1;
    // 0x00444ED4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_1:
    // 0x00444ED8: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x00444EDC: jr          $ra
    // 0x00444EE0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00444EE0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00253748(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00253748: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x0025374C: lw          $v0, -0x5528($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X5528);
    // 0x00253750: andi        $v0, $v0, 0x10
    ctx->r2 = ctx->r2 & 0X10;
    // 0x00253754: bne         $v0, $zero, L_00253768
    if (ctx->r2 != 0) {
            // 0x00253758: addu        $v0, $a1, $a0
    ctx->r2 = ADD32(ctx->r5, ctx->r4);
    func_00253768(rdram, ctx);
    return;
    }
    // 0x00253758: addu        $v0, $a1, $a0
    ctx->r2 = ADD32(ctx->r5, ctx->r4);
    // 0x0025375C: lbu         $v0, -0xA74($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0XA74);
    // 0x00253760: jr          $ra
    // 0x00253764: srl         $v0, $v0, 4
    ctx->r2 = S32(U32(ctx->r2) >> 4);
    return;
    // 0x00253764: srl         $v0, $v0, 4
    ctx->r2 = S32(U32(ctx->r2) >> 4);
;}
RECOMP_FUNC void func_0045A240(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0045A240: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x0045A244: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x0045A248: lw          $v0, -0x4($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X4);
    // 0x0045A24C: jr          $ra
    // 0x0045A250: nop

    return;
    // 0x0045A250: nop

;}
RECOMP_FUNC void func_0045F938(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0045F938: jr          $ra
    // 0x0045F93C: addiu       $v0, $zero, -0x2
    ctx->r2 = ADD32(0, -0X2);
    return;
    // 0x0045F93C: addiu       $v0, $zero, -0x2
    ctx->r2 = ADD32(0, -0X2);
;}
RECOMP_FUNC void func_0020D6F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0020D6F8: lui         $a2, 0xFFFF
    ctx->r6 = S32(0XFFFF << 16);
    // 0x0020D6FC: lw          $a3, 0x0($a1)
    ctx->r7 = MEM_W(ctx->r5, 0X0);
    // 0x0020D700: lw          $t0, 0x20($a1)
    ctx->r8 = MEM_W(ctx->r5, 0X20);
    // 0x0020D704: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0020D708: lwc1        $f2, 0x54F4($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X54F4);
    // 0x0020D70C: and         $v0, $a3, $a2
    ctx->r2 = ctx->r7 & ctx->r6;
    // 0x0020D710: srl         $v1, $t0, 16
    ctx->r3 = S32(U32(ctx->r8) >> 16);
    // 0x0020D714: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x0020D718: mtc1        $v0, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r2;
    // 0x0020D71C: cvt.s.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.fl = CVT_S_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x0020D720: mul.s       $f1, $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f2.fl);
    // 0x0020D724: sll         $v0, $a3, 16
    ctx->r2 = S32(ctx->r7 << 16);
    // 0x0020D728: andi        $v1, $t0, 0xFFFF
    ctx->r3 = ctx->r8 & 0XFFFF;
    // 0x0020D72C: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x0020D730: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x0020D734: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x0020D738: mul.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f2.fl);
    // 0x0020D73C: swc1        $f1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f_odd[(1 - 1) * 2];
    // 0x0020D740: swc1        $f0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->f0.u32l;
    // 0x0020D744: lw          $a3, 0x4($a1)
    ctx->r7 = MEM_W(ctx->r5, 0X4);
    // 0x0020D748: lw          $t0, 0x24($a1)
    ctx->r8 = MEM_W(ctx->r5, 0X24);
    // 0x0020D74C: and         $v0, $a3, $a2
    ctx->r2 = ctx->r7 & ctx->r6;
    // 0x0020D750: srl         $v1, $t0, 16
    ctx->r3 = S32(U32(ctx->r8) >> 16);
    // 0x0020D754: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x0020D758: mtc1        $v0, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r2;
    // 0x0020D75C: cvt.s.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.fl = CVT_S_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x0020D760: mul.s       $f1, $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f2.fl);
    // 0x0020D764: sll         $v0, $a3, 16
    ctx->r2 = S32(ctx->r7 << 16);
    // 0x0020D768: andi        $v1, $t0, 0xFFFF
    ctx->r3 = ctx->r8 & 0XFFFF;
    // 0x0020D76C: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x0020D770: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x0020D774: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x0020D778: mul.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f2.fl);
    // 0x0020D77C: swc1        $f1, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->f_odd[(1 - 1) * 2];
    // 0x0020D780: swc1        $f0, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->f0.u32l;
    // 0x0020D784: lw          $a3, 0x8($a1)
    ctx->r7 = MEM_W(ctx->r5, 0X8);
    // 0x0020D788: lw          $t0, 0x28($a1)
    ctx->r8 = MEM_W(ctx->r5, 0X28);
    // 0x0020D78C: and         $v0, $a3, $a2
    ctx->r2 = ctx->r7 & ctx->r6;
    // 0x0020D790: srl         $v1, $t0, 16
    ctx->r3 = S32(U32(ctx->r8) >> 16);
    // 0x0020D794: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x0020D798: mtc1        $v0, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r2;
    // 0x0020D79C: cvt.s.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.fl = CVT_S_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x0020D7A0: mul.s       $f1, $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f2.fl);
    // 0x0020D7A4: sll         $v0, $a3, 16
    ctx->r2 = S32(ctx->r7 << 16);
    // 0x0020D7A8: andi        $v1, $t0, 0xFFFF
    ctx->r3 = ctx->r8 & 0XFFFF;
    // 0x0020D7AC: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x0020D7B0: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x0020D7B4: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x0020D7B8: mul.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f2.fl);
    // 0x0020D7BC: swc1        $f1, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->f_odd[(1 - 1) * 2];
    // 0x0020D7C0: swc1        $f0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->f0.u32l;
    // 0x0020D7C4: lw          $a3, 0xC($a1)
    ctx->r7 = MEM_W(ctx->r5, 0XC);
    // 0x0020D7C8: lw          $t0, 0x2C($a1)
    ctx->r8 = MEM_W(ctx->r5, 0X2C);
    // 0x0020D7CC: and         $v0, $a3, $a2
    ctx->r2 = ctx->r7 & ctx->r6;
    // 0x0020D7D0: srl         $v1, $t0, 16
    ctx->r3 = S32(U32(ctx->r8) >> 16);
    // 0x0020D7D4: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x0020D7D8: mtc1        $v0, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r2;
    // 0x0020D7DC: cvt.s.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.fl = CVT_S_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x0020D7E0: mul.s       $f1, $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f2.fl);
    // 0x0020D7E4: sll         $v0, $a3, 16
    ctx->r2 = S32(ctx->r7 << 16);
    // 0x0020D7E8: andi        $v1, $t0, 0xFFFF
    ctx->r3 = ctx->r8 & 0XFFFF;
    // 0x0020D7EC: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x0020D7F0: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x0020D7F4: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x0020D7F8: mul.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f2.fl);
    // 0x0020D7FC: swc1        $f1, 0x18($a0)
    MEM_W(0X18, ctx->r4) = ctx->f_odd[(1 - 1) * 2];
    // 0x0020D800: swc1        $f0, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = ctx->f0.u32l;
    // 0x0020D804: lw          $a3, 0x10($a1)
    ctx->r7 = MEM_W(ctx->r5, 0X10);
    // 0x0020D808: lw          $t0, 0x30($a1)
    ctx->r8 = MEM_W(ctx->r5, 0X30);
    // 0x0020D80C: and         $v0, $a3, $a2
    ctx->r2 = ctx->r7 & ctx->r6;
    // 0x0020D810: srl         $v1, $t0, 16
    ctx->r3 = S32(U32(ctx->r8) >> 16);
    // 0x0020D814: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x0020D818: mtc1        $v0, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r2;
    // 0x0020D81C: cvt.s.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.fl = CVT_S_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x0020D820: mul.s       $f1, $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f2.fl);
    // 0x0020D824: sll         $v0, $a3, 16
    ctx->r2 = S32(ctx->r7 << 16);
    // 0x0020D828: andi        $v1, $t0, 0xFFFF
    ctx->r3 = ctx->r8 & 0XFFFF;
    // 0x0020D82C: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x0020D830: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x0020D834: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x0020D838: mul.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f2.fl);
    // 0x0020D83C: swc1        $f1, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->f_odd[(1 - 1) * 2];
    // 0x0020D840: swc1        $f0, 0x24($a0)
    MEM_W(0X24, ctx->r4) = ctx->f0.u32l;
    // 0x0020D844: lw          $a3, 0x14($a1)
    ctx->r7 = MEM_W(ctx->r5, 0X14);
    // 0x0020D848: lw          $t0, 0x34($a1)
    ctx->r8 = MEM_W(ctx->r5, 0X34);
    // 0x0020D84C: and         $v0, $a3, $a2
    ctx->r2 = ctx->r7 & ctx->r6;
    // 0x0020D850: srl         $v1, $t0, 16
    ctx->r3 = S32(U32(ctx->r8) >> 16);
    // 0x0020D854: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x0020D858: mtc1        $v0, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r2;
    // 0x0020D85C: cvt.s.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.fl = CVT_S_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x0020D860: mul.s       $f1, $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f2.fl);
    // 0x0020D864: sll         $v0, $a3, 16
    ctx->r2 = S32(ctx->r7 << 16);
    // 0x0020D868: andi        $v1, $t0, 0xFFFF
    ctx->r3 = ctx->r8 & 0XFFFF;
    // 0x0020D86C: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x0020D870: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x0020D874: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x0020D878: mul.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f2.fl);
    // 0x0020D87C: swc1        $f1, 0x28($a0)
    MEM_W(0X28, ctx->r4) = ctx->f_odd[(1 - 1) * 2];
    // 0x0020D880: swc1        $f0, 0x2C($a0)
    MEM_W(0X2C, ctx->r4) = ctx->f0.u32l;
    // 0x0020D884: lw          $a3, 0x18($a1)
    ctx->r7 = MEM_W(ctx->r5, 0X18);
    // 0x0020D888: lw          $t0, 0x38($a1)
    ctx->r8 = MEM_W(ctx->r5, 0X38);
    // 0x0020D88C: and         $v0, $a3, $a2
    ctx->r2 = ctx->r7 & ctx->r6;
    // 0x0020D890: srl         $v1, $t0, 16
    ctx->r3 = S32(U32(ctx->r8) >> 16);
    // 0x0020D894: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x0020D898: mtc1        $v0, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r2;
    // 0x0020D89C: cvt.s.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.fl = CVT_S_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x0020D8A0: mul.s       $f1, $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f2.fl);
    // 0x0020D8A4: sll         $v0, $a3, 16
    ctx->r2 = S32(ctx->r7 << 16);
    // 0x0020D8A8: andi        $v1, $t0, 0xFFFF
    ctx->r3 = ctx->r8 & 0XFFFF;
    // 0x0020D8AC: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x0020D8B0: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x0020D8B4: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x0020D8B8: mul.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f2.fl);
    // 0x0020D8BC: swc1        $f1, 0x30($a0)
    MEM_W(0X30, ctx->r4) = ctx->f_odd[(1 - 1) * 2];
    // 0x0020D8C0: swc1        $f0, 0x34($a0)
    MEM_W(0X34, ctx->r4) = ctx->f0.u32l;
    // 0x0020D8C4: lw          $a3, 0x1C($a1)
    ctx->r7 = MEM_W(ctx->r5, 0X1C);
    // 0x0020D8C8: lw          $t0, 0x3C($a1)
    ctx->r8 = MEM_W(ctx->r5, 0X3C);
    // 0x0020D8CC: and         $a2, $a3, $a2
    ctx->r6 = ctx->r7 & ctx->r6;
    // 0x0020D8D0: srl         $v0, $t0, 16
    ctx->r2 = S32(U32(ctx->r8) >> 16);
    // 0x0020D8D4: or          $a2, $a2, $v0
    ctx->r6 = ctx->r6 | ctx->r2;
    // 0x0020D8D8: mtc1        $a2, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r6;
    // 0x0020D8DC: cvt.s.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.fl = CVT_S_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x0020D8E0: mul.s       $f1, $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f2.fl);
    // 0x0020D8E4: sll         $v0, $a3, 16
    ctx->r2 = S32(ctx->r7 << 16);
    // 0x0020D8E8: andi        $v1, $t0, 0xFFFF
    ctx->r3 = ctx->r8 & 0XFFFF;
    // 0x0020D8EC: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x0020D8F0: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x0020D8F4: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x0020D8F8: mul.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f2.fl);
    // 0x0020D8FC: swc1        $f1, 0x38($a0)
    MEM_W(0X38, ctx->r4) = ctx->f_odd[(1 - 1) * 2];
    // 0x0020D900: jr          $ra
    // 0x0020D904: swc1        $f0, 0x3C($a0)
    MEM_W(0X3C, ctx->r4) = ctx->f0.u32l;
    return;
    // 0x0020D904: swc1        $f0, 0x3C($a0)
    MEM_W(0X3C, ctx->r4) = ctx->f0.u32l;
;}
RECOMP_FUNC void func_0023624C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0023624C: lw          $v1, 0x7520($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X7520);
    // 0x00236250: beq         $v1, $zero, L_002362DC
    if (ctx->r3 == 0) {
        // 0x00236254: nop
    
            goto L_002362DC;
    }
    // 0x00236254: nop

L_00236258:
    // 0x00236258: lw          $a0, 0x1C($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X1C);
    // 0x0023625C: bne         $a0, $a1, L_002362D0
    if (ctx->r4 != ctx->r5) {
        // 0x00236260: nop
    
            goto L_002362D0;
    }
    // 0x00236260: nop

    // 0x00236264: beq         $a0, $zero, L_002362B0
    if (ctx->r4 == 0) {
        // 0x00236268: nop
    
            goto L_002362B0;
    }
    // 0x00236268: nop

    // 0x0023626C: lw          $v0, 0x3C($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X3C);
    // 0x00236270: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x00236274: beq         $v0, $zero, L_0023628C
    if (ctx->r2 == 0) {
        // 0x00236278: nop
    
            goto L_0023628C;
    }
    // 0x00236278: nop

    // 0x0023627C: lbu         $v0, 0x10F($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X10F);
    // 0x00236280: beq         $v0, $zero, L_0023628C
    if (ctx->r2 == 0) {
        // 0x00236284: addiu       $v0, $v0, -0x1
        ctx->r2 = ADD32(ctx->r2, -0X1);
            goto L_0023628C;
    }
    // 0x00236284: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x00236288: sb          $v0, 0x10F($a0)
    MEM_B(0X10F, ctx->r4) = ctx->r2;
L_0023628C:
    // 0x0023628C: lw          $v0, 0x3C($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X3C);
    // 0x00236290: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x00236294: beq         $v0, $zero, L_002362B0
    if (ctx->r2 == 0) {
        // 0x00236298: nop
    
            goto L_002362B0;
    }
    // 0x00236298: nop

    // 0x0023629C: lw          $a0, 0x1C($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X1C);
    // 0x002362A0: lbu         $v0, 0x1B5($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X1B5);
    // 0x002362A4: beq         $v0, $zero, L_002362B0
    if (ctx->r2 == 0) {
        // 0x002362A8: addiu       $v0, $v0, -0x1
        ctx->r2 = ADD32(ctx->r2, -0X1);
            goto L_002362B0;
    }
    // 0x002362A8: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x002362AC: sb          $v0, 0x1B5($a0)
    MEM_B(0X1B5, ctx->r4) = ctx->r2;
L_002362B0:
    // 0x002362B0: lw          $v0, 0x8($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X8);
    // 0x002362B4: lwc1        $f0, 0x24($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X24);
    // 0x002362B8: sw          $zero, 0x1C($v1)
    MEM_W(0X1C, ctx->r3) = 0;
    // 0x002362BC: lwc1        $f1, 0x4($v0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r2, 0X4);
    // 0x002362C0: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x002362C4: nop

    // 0x002362C8: bc1tl       L_002362D0
    if (c1cs) {
        // 0x002362CC: swc1        $f1, 0x24($v1)
        MEM_W(0X24, ctx->r3) = ctx->f_odd[(1 - 1) * 2];
            goto L_002362D0;
    }
    goto skip_0;
    // 0x002362CC: swc1        $f1, 0x24($v1)
    MEM_W(0X24, ctx->r3) = ctx->f_odd[(1 - 1) * 2];
    skip_0:
L_002362D0:
    // 0x002362D0: lw          $v1, 0x4($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X4);
    // 0x002362D4: bne         $v1, $zero, L_00236258
    if (ctx->r3 != 0) {
        // 0x002362D8: nop
    
            goto L_00236258;
    }
    // 0x002362D8: nop

L_002362DC:
    // 0x002362DC: jr          $ra
    // 0x002362E0: nop

    return;
    // 0x002362E0: nop

;}
RECOMP_FUNC void func_00423A44(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00423A44: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x00423A48: sw          $zero, 0x9B0($at)
    MEM_W(0X9B0, ctx->r1) = 0;
    // 0x00423A4C: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x00423A50: sw          $zero, 0x9A4($at)
    MEM_W(0X9A4, ctx->r1) = 0;
    // 0x00423A54: jr          $ra
    // 0x00423A58: nop

    return;
    // 0x00423A58: nop

;}
RECOMP_FUNC void func_002291A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002291A4: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x002291A8: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x002291AC: trunc.w.s   $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x002291B0: mfc1        $v1, $f2
    ctx->r3 = (int32_t)ctx->f2.u32l;
    // 0x002291B4: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x002291B8: jr          $ra
    // 0x002291BC: sb          $v1, 0x0($t5)
    MEM_B(0X0, ctx->r13) = ctx->r3;
    return;
    // 0x002291BC: sb          $v1, 0x0($t5)
    MEM_B(0X0, ctx->r13) = ctx->r3;
;}
RECOMP_FUNC void func_0041B624(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041B624: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x0041B628: lw          $v0, -0x5524($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X5524);
    // 0x0041B62C: andi        $v0, $v0, 0x100
    ctx->r2 = ctx->r2 & 0X100;
    // 0x0041B630: beq         $v0, $zero, L_0041B644
    if (ctx->r2 == 0) {
        // 0x0041B634: lui         $v1, 0x100
        ctx->r3 = S32(0X100 << 16);
            goto L_0041B644;
    }
    // 0x0041B634: lui         $v1, 0x100
    ctx->r3 = S32(0X100 << 16);
    // 0x0041B638: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x0041B63C: j           L_0041B654
    // 0x0041B640: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
        goto L_0041B654;
    // 0x0041B640: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
L_0041B644:
    // 0x0041B644: lui         $v1, 0xFEFF
    ctx->r3 = S32(0XFEFF << 16);
    // 0x0041B648: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x0041B64C: ori         $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 | 0XFFFF;
    // 0x0041B650: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
L_0041B654:
    // 0x0041B654: sw          $v0, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r2;
    // 0x0041B658: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x0041B65C: lw          $v0, -0x5528($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X5528);
    // 0x0041B660: andi        $v0, $v0, 0x100
    ctx->r2 = ctx->r2 & 0X100;
    // 0x0041B664: beq         $v0, $zero, L_0041B67C
    if (ctx->r2 == 0) {
        // 0x0041B668: nop
    
            goto L_0041B67C;
    }
    // 0x0041B668: nop

    // 0x0041B66C: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0041B670: addiu       $v0, $v0, 0x596C
    ctx->r2 = ADD32(ctx->r2, 0X596C);
    // 0x0041B674: j           L_0041B688
    // 0x0041B678: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_0041B688;
    // 0x0041B678: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_0041B67C:
    // 0x0041B67C: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0041B680: addiu       $v0, $v0, 0x5988
    ctx->r2 = ADD32(ctx->r2, 0X5988);
    // 0x0041B684: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_0041B688:
    // 0x0041B688: jr          $ra
    // 0x0041B68C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x0041B68C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void func_00298494(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00298494: lw          $ra, 0xAC($sp)
    ctx->r31 = MEM_W(ctx->r29, 0XAC);
    // 0x00298498: lw          $s2, 0xA8($sp)
    ctx->r18 = MEM_W(ctx->r29, 0XA8);
    // 0x0029849C: lw          $s1, 0xA4($sp)
    ctx->r17 = MEM_W(ctx->r29, 0XA4);
;}
RECOMP_FUNC void func_00421D90(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00421D90: bne         $a1, $v0, L_00421DA8
    if (ctx->r5 != ctx->r2) {
        // 0x00421D94: nop
    
            goto L_00421DA8;
    }
    // 0x00421D94: nop

    // 0x00421D98: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x00421D9C: addiu       $v0, $v0, 0x140C
    ctx->r2 = ADD32(ctx->r2, 0X140C);
    // 0x00421DA0: j           L_00421DF4
    // 0x00421DA4: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_00421DF4;
    // 0x00421DA4: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_00421DA8:
    // 0x00421DA8: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x00421DAC: lw          $v0, 0x9B4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X9B4);
    // 0x00421DB0: beq         $v0, $zero, L_00421DC8
    if (ctx->r2 == 0) {
        // 0x00421DB4: nop
    
            goto L_00421DC8;
    }
    // 0x00421DB4: nop

    // 0x00421DB8: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00421DBC: addiu       $v0, $v0, 0x487C
    ctx->r2 = ADD32(ctx->r2, 0X487C);
    // 0x00421DC0: j           L_00421DF4
    // 0x00421DC4: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_00421DF4;
    // 0x00421DC4: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_00421DC8:
    // 0x00421DC8: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00421DCC: addiu       $v0, $v0, 0x4894
    ctx->r2 = ADD32(ctx->r2, 0X4894);
    // 0x00421DD0: j           L_00421DF4
    // 0x00421DD4: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_00421DF4;
    // 0x00421DD4: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    // 0x00421DD8: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x00421DDC: lw          $v0, 0x990($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X990);
    // 0x00421DE0: beq         $v0, $zero, L_00421DF4
    if (ctx->r2 == 0) {
        // 0x00421DE4: nop
    
            goto L_00421DF4;
    }
    // 0x00421DE4: nop

    // 0x00421DE8: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00421DEC: addiu       $v0, $v0, 0x48E4
    ctx->r2 = ADD32(ctx->r2, 0X48E4);
    // 0x00421DF0: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_00421DF4:
    // 0x00421DF4: jr          $ra
    // 0x00421DF8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x00421DF8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void func_00267E10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00267E10: jr          $ra
    // 0x00267E14: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x00267E14: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void func_00260388(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00260388: lb          $a1, 0x133($a1)
    ctx->r5 = MEM_B(ctx->r5, 0X133);
    // 0x0026038C: beq         $a1, $v0, L_002603D0
    if (ctx->r5 == ctx->r2) {
            // 0x00260390: nop

    func_002603D0(rdram, ctx);
    return;
    }
    // 0x00260390: nop

    // 0x00260394: slti        $v0, $a1, 0x2
    ctx->r2 = SIGNED(ctx->r5) < 0X2 ? 1 : 0;
    // 0x00260398: beql        $v0, $zero, L_002603B0
    if (ctx->r2 == 0) {
            // 0x0026039C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    func_002603B0(rdram, ctx);
    return;
    }
    goto skip_0;
    // 0x0026039C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x002603A0: beq         $a1, $zero, L_002603C0
    if (ctx->r5 == 0) {
            // 0x002603A4: nop

    func_002603C0(rdram, ctx);
    return;
    }
    // 0x002603A4: nop

    // 0x002603A8: jr          $ra
    // 0x002603AC: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x002603AC: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void func_00296AF4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00296AF4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00296AF8: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x00296AFC: addiu       $t0, $a1, -0x2
    ctx->r8 = ADD32(ctx->r5, -0X2);
    // 0x00296B00: bgez        $t0, L_00296B0C
    if (SIGNED(ctx->r8) >= 0) {
        // 0x00296B04: addu        $v0, $t0, $zero
        ctx->r2 = ADD32(ctx->r8, 0);
            goto L_00296B0C;
    }
    // 0x00296B04: addu        $v0, $t0, $zero
    ctx->r2 = ADD32(ctx->r8, 0);
    // 0x00296B08: addiu       $v0, $a1, 0x5
    ctx->r2 = ADD32(ctx->r5, 0X5);
L_00296B0C:
    // 0x00296B0C: sra         $a3, $v0, 3
    ctx->r7 = S32(SIGNED(ctx->r2) >> 3);
    // 0x00296B10: addu        $a1, $a3, $zero
    ctx->r5 = ADD32(ctx->r7, 0);
    // 0x00296B14: sll         $v0, $a1, 3
    ctx->r2 = S32(ctx->r5 << 3);
    // 0x00296B18: subu        $a3, $t0, $v0
    ctx->r7 = SUB32(ctx->r8, ctx->r2);
    // 0x00296B1C: lw          $a2, 0x0($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X0);
    // 0x00296B20: sltiu       $v0, $a3, 0x8
    ctx->r2 = ctx->r7 < 0X8 ? 1 : 0;
    // 0x00296B24: beq         $v0, $zero, L_00296CC0
    if (ctx->r2 == 0) {
        // 0x00296B28: sll         $v0, $a3, 2
        ctx->r2 = S32(ctx->r7 << 2);
            goto L_00296CC0;
    }
    // 0x00296B28: sll         $v0, $a3, 2
    ctx->r2 = S32(ctx->r7 << 2);
    // 0x00296B2C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00296B30: addu        $at, $at, $v0
    gpr jr_addend_00296B38 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x00296B34: lw          $v0, -0x5928($at)
    ctx->r2 = ADD32(ctx->r1, -0X5928);
    // 0x00296B38: jr          $v0
    // 0x00296B3C: nop

    switch (jr_addend_00296B38 >> 2) {
        case 0: goto L_00296B40; break;
        case 1: goto L_00296B64; break;
        case 2: goto L_00296BA4; break;
        case 3: goto L_00296B88; break;
        case 4: goto L_00296BC0; break;
        case 5: goto L_00296BDC; break;
        case 6: goto L_00296C24; break;
        case 7: goto L_00296C88; break;
        default: switch_error(__func__, 0x00296B38, 0x800AA6D8);
    }
    // 0x00296B3C: nop

L_00296B40:
    // 0x00296B40: sll         $v0, $a1, 2
    ctx->r2 = S32(ctx->r5 << 2);
    // 0x00296B44: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x00296B48: lw          $v1, 0x20($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X20);
    // 0x00296B4C: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x00296B50: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x00296B54: addiu       $v1, $zero, -0x8
    ctx->r3 = ADD32(0, -0X8);
    // 0x00296B58: and         $v1, $a2, $v1
    ctx->r3 = ctx->r6 & ctx->r3;
    // 0x00296B5C: j           L_00296CC0
    // 0x00296B60: sw          $v1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r3;
        goto L_00296CC0;
    // 0x00296B60: sw          $v1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r3;
L_00296B64:
    // 0x00296B64: sll         $v0, $a1, 2
    ctx->r2 = S32(ctx->r5 << 2);
    // 0x00296B68: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x00296B6C: lw          $v1, 0x20($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X20);
    // 0x00296B70: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x00296B74: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x00296B78: addiu       $v1, $zero, -0x8
    ctx->r3 = ADD32(0, -0X8);
    // 0x00296B7C: and         $v1, $a2, $v1
    ctx->r3 = ctx->r6 & ctx->r3;
    // 0x00296B80: j           L_00296CC0
    // 0x00296B84: sw          $v1, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r3;
        goto L_00296CC0;
    // 0x00296B84: sw          $v1, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r3;
L_00296B88:
    // 0x00296B88: sll         $v0, $a1, 2
    ctx->r2 = S32(ctx->r5 << 2);
    // 0x00296B8C: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x00296B90: lw          $v1, 0x20($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X20);
    // 0x00296B94: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x00296B98: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x00296B9C: j           L_00296CC0
    // 0x00296BA0: sh          $a2, 0x8($v0)
    MEM_H(0X8, ctx->r2) = ctx->r6;
        goto L_00296CC0;
    // 0x00296BA0: sh          $a2, 0x8($v0)
    MEM_H(0X8, ctx->r2) = ctx->r6;
L_00296BA4:
    // 0x00296BA4: sll         $v0, $a1, 2
    ctx->r2 = S32(ctx->r5 << 2);
    // 0x00296BA8: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x00296BAC: lw          $v1, 0x20($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X20);
    // 0x00296BB0: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x00296BB4: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x00296BB8: j           L_00296CC0
    // 0x00296BBC: sh          $a2, 0xA($v0)
    MEM_H(0XA, ctx->r2) = ctx->r6;
        goto L_00296CC0;
    // 0x00296BBC: sh          $a2, 0xA($v0)
    MEM_H(0XA, ctx->r2) = ctx->r6;
L_00296BC0:
    // 0x00296BC0: sll         $v0, $a1, 2
    ctx->r2 = S32(ctx->r5 << 2);
    // 0x00296BC4: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x00296BC8: lw          $v1, 0x20($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X20);
    // 0x00296BCC: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x00296BD0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x00296BD4: j           L_00296CC0
    // 0x00296BD8: sh          $a2, 0xC($v0)
    MEM_H(0XC, ctx->r2) = ctx->r6;
        goto L_00296CC0;
    // 0x00296BD8: sh          $a2, 0xC($v0)
    MEM_H(0XC, ctx->r2) = ctx->r6;
L_00296BDC:
    // 0x00296BDC: mtc1        $a2, $f0
    ctx->f0.u32l = ctx->r6;
    // 0x00296BE0: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00296BE4: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00296BE8: lwc1        $f1, -0x5908($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, -0X5908);
    // 0x00296BEC: sll         $v0, $a1, 2
    ctx->r2 = S32(ctx->r5 << 2);
    // 0x00296BF0: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00296BF4: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x00296BF8: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x00296BFC: lw          $v1, 0x20($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X20);
    // 0x00296C00: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x00296C04: lw          $a0, 0x7760($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7760);
    // 0x00296C08: add.s       $f0, $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f0.fl;
    // 0x00296C0C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x00296C10: lwc1        $f1, 0x44($a0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r4, 0X44);
    // 0x00296C14: cvt.s.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.fl = CVT_S_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x00296C18: div.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = DIV_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00296C1C: j           L_00296CC0
    // 0x00296C20: swc1        $f0, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f0.u32l;
        goto L_00296CC0;
    // 0x00296C20: swc1        $f0, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f0.u32l;
L_00296C24:
    // 0x00296C24: sll         $v0, $a1, 2
    ctx->r2 = S32(ctx->r5 << 2);
    // 0x00296C28: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x00296C2C: lw          $v1, 0x20($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X20);
    // 0x00296C30: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x00296C34: addu        $a0, $v0, $v1
    ctx->r4 = ADD32(ctx->r2, ctx->r3);
    // 0x00296C38: lw          $v0, 0x4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X4);
    // 0x00296C3C: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x00296C40: mtc1        $a2, $f3
    ctx->f_odd[(3 - 1) * 2] = ctx->r6;
    // 0x00296C44: cvt.s.w     $f3, $f3
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    ctx->f3.fl = CVT_S_W(ctx->f_odd[(3 - 1) * 2]);
    // 0x00296C48: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x00296C4C: mtc1        $v0, $f2
    ctx->f2.u32l = ctx->r2;
    // 0x00296C50: cvt.d.w     $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    ctx->f2.d = CVT_D_W(ctx->f2.u32l);
    // 0x00296C54: bgez        $v0, L_00296C68
    if (SIGNED(ctx->r2) >= 0) {
        // 0x00296C58: nop
    
            goto L_00296C68;
    }
    // 0x00296C58: nop

    // 0x00296C5C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00296C60: ldc1        $f0, -0x5900($at)
    CHECK_FR(ctx, 0);
    ctx->f0.u64 = LD(ctx->r1, -0X5900);
    // 0x00296C64: add.d       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.d); NAN_CHECK(ctx->f0.d); 
    ctx->f2.d = ctx->f2.d + ctx->f0.d;
L_00296C68:
    // 0x00296C68: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00296C6C: lwc1        $f1, -0x58F8($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, -0X58F8);
    // 0x00296C70: cvt.s.d     $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.d); 
    ctx->f0.fl = CVT_S_D(ctx->f2.d);
    // 0x00296C74: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00296C78: nop

    // 0x00296C7C: mul.s       $f0, $f3, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f3.fl, ctx->f0.fl);
    // 0x00296C80: j           L_00296CC0
    // 0x00296C84: swc1        $f0, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = ctx->f0.u32l;
        goto L_00296CC0;
    // 0x00296C84: swc1        $f0, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = ctx->f0.u32l;
L_00296C88:
    // 0x00296C88: sll         $v0, $a1, 2
    ctx->r2 = S32(ctx->r5 << 2);
    // 0x00296C8C: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x00296C90: lw          $v1, 0x20($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X20);
    // 0x00296C94: sll         $a1, $v0, 3
    ctx->r5 = S32(ctx->r2 << 3);
    // 0x00296C98: addu        $v1, $a1, $v1
    ctx->r3 = ADD32(ctx->r5, ctx->r3);
    // 0x00296C9C: lw          $v0, 0x20($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X20);
    // 0x00296CA0: beq         $v0, $zero, L_00296CC0
    if (ctx->r2 == 0) {
        // 0x00296CA4: nop
    
            goto L_00296CC0;
    }
    // 0x00296CA4: nop

    // 0x00296CA8: sh          $a2, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r6;
    // 0x00296CAC: lw          $v0, 0x20($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X20);
    // 0x00296CB0: addu        $v0, $a1, $v0
    ctx->r2 = ADD32(ctx->r5, ctx->r2);
    // 0x00296CB4: lw          $a0, 0x20($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X20);
    // 0x00296CB8: jal         0x002955EC
    // 0x00296CBC: nop

    func_002955EC(rdram, ctx);
        goto after_0;
    // 0x00296CBC: nop

    after_0:
L_00296CC0:
    // 0x00296CC0: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x00296CC4: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x00296CC8: jr          $ra
    // 0x00296CCC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00296CCC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00260C7C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00260C7C: addiu       $sp, $sp, -0x80
    ctx->r29 = ADD32(ctx->r29, -0X80);
    // 0x00260C80: sw          $ra, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r31;
    // 0x00260C84: sw          $s1, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r17;
    // 0x00260C88: sw          $s0, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r16;
    // 0x00260C8C: lw          $a2, 0x80($a1)
    ctx->r6 = MEM_W(ctx->r5, 0X80);
    // 0x00260C90: beq         $a2, $zero, L_00260D40
    if (ctx->r6 == 0) {
        // 0x00260C94: addu        $s1, $a0, $zero
        ctx->r17 = ADD32(ctx->r4, 0);
            goto L_00260D40;
    }
    // 0x00260C94: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x00260C98: lui         $a3, 0x3EB2
    ctx->r7 = S32(0X3EB2 << 16);
    // 0x00260C9C: ori         $a3, $a3, 0xB8C4
    ctx->r7 = ctx->r7 | 0XB8C4;
    // 0x00260CA0: jal         0x002451AC
    // 0x00260CA4: nop

    func_002451AC(rdram, ctx);
        goto after_0;
    // 0x00260CA4: nop

    after_0:
    // 0x00260CA8: beq         $v0, $zero, L_00260D0C
    if (ctx->r2 == 0) {
        // 0x00260CAC: addiu       $s0, $sp, 0x30
        ctx->r16 = ADD32(ctx->r29, 0X30);
            goto L_00260D0C;
    }
    // 0x00260CAC: addiu       $s0, $sp, 0x30
    ctx->r16 = ADD32(ctx->r29, 0X30);
    // 0x00260CB0: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x00260CB4: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00260CB8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00260CBC: lwc1        $f1, 0x79E0($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X79E0);
    // 0x00260CC0: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x00260CC4: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00260CC8: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x00260CCC: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x00260CD0: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    // 0x00260CD4: lw          $a1, 0x50($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X50);
    // 0x00260CD8: jal         0x002105A4
    // 0x00260CDC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_002105A4(rdram, ctx);
        goto after_1;
    // 0x00260CDC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x00260CE0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00260CE4: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x00260CE8: addiu       $s0, $sp, 0x20
    ctx->r16 = ADD32(ctx->r29, 0X20);
    // 0x00260CEC: jal         0x0020F85C
    // 0x00260CF0: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    func_0020F85C(rdram, ctx);
        goto after_2;
    // 0x00260CF0: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    after_2:
    // 0x00260CF4: addiu       $a0, $s1, 0x18
    ctx->r4 = ADD32(ctx->r17, 0X18);
    // 0x00260CF8: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x00260CFC: jal         0x0020EEF8
    // 0x00260D00: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    func_0020EEF8(rdram, ctx);
        goto after_3;
    // 0x00260D00: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    after_3:
    // 0x00260D04: j           L_00260D40
    // 0x00260D08: nop

        goto L_00260D40;
    // 0x00260D08: nop

L_00260D0C:
    // 0x00260D0C: lwc1        $f2, 0x18($s1)
    ctx->f2.u32l = MEM_W(ctx->r17, 0X18);
    // 0x00260D10: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00260D14: lwc1        $f3, 0x79E4($at)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r1, 0X79E4);
    // 0x00260D18: mul.s       $f2, $f2, $f3
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f3.fl);
    // 0x00260D1C: lwc1        $f1, 0x1C($s1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r17, 0X1C);
    // 0x00260D20: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00260D24: lwc1        $f0, 0x79E8($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X79E8);
    // 0x00260D28: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x00260D2C: lwc1        $f0, 0x20($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X20);
    // 0x00260D30: mul.s       $f0, $f0, $f3
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f3.fl);
    // 0x00260D34: swc1        $f2, 0x18($s1)
    MEM_W(0X18, ctx->r17) = ctx->f2.u32l;
    // 0x00260D38: swc1        $f1, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->f_odd[(1 - 1) * 2];
    // 0x00260D3C: swc1        $f0, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->f0.u32l;
L_00260D40:
    // 0x00260D40: lw          $ra, 0x78($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X78);
    // 0x00260D44: lw          $s1, 0x74($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X74);
    // 0x00260D48: lw          $s0, 0x70($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X70);
    // 0x00260D4C: jr          $ra
    // 0x00260D50: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
    return;
    // 0x00260D50: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
;}
RECOMP_FUNC void func_00412EB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00412EB0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00412EB4: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x00412EB8: addiu       $a1, $a0, 0x10
    ctx->r5 = ADD32(ctx->r4, 0X10);
    // 0x00412EBC: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x00412EC0: lui         $a3, 0x800C
    ctx->r7 = S32(0X800C << 16);
    // 0x00412EC4: addiu       $a3, $a3, 0x950
    ctx->r7 = ADD32(ctx->r7, 0X950);
    // 0x00412EC8: jal         0x00204EDC
    // 0x00412ECC: addiu       $a2, $zero, 0x13
    ctx->r6 = ADD32(0, 0X13);
    func_00204EDC(rdram, ctx);
        goto after_0;
    // 0x00412ECC: addiu       $a2, $zero, 0x13
    ctx->r6 = ADD32(0, 0X13);
    after_0:
    // 0x00412ED0: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x00412ED4: beq         $a0, $zero, L_00412EE8
    if (ctx->r4 == 0) {
        // 0x00412ED8: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_00412EE8;
    }
    // 0x00412ED8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x00412EDC: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x00412EE0: addiu       $v0, $v1, 0x10
    ctx->r2 = ADD32(ctx->r3, 0X10);
    // 0x00412EE4: sw          $a0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r4;
L_00412EE8:
    // 0x00412EE8: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x00412EEC: jr          $ra
    // 0x00412EF0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00412EF0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_002A1324(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002A1324: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x002A1328: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x002A132C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x002A1330: jal         0x002A31E4
    // 0x002A1334: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    func_002A31E4(rdram, ctx);
        goto after_0;
    // 0x002A1334: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    after_0:
    // 0x002A1338: jal         0x002A31F0
    // 0x002A133C: or          $a0, $v0, $s0
    ctx->r4 = ctx->r2 | ctx->r16;
    func_002A31F0(rdram, ctx);
        goto after_1;
    // 0x002A133C: or          $a0, $v0, $s0
    ctx->r4 = ctx->r2 | ctx->r16;
    after_1:
    // 0x002A1340: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x002A1344: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x002A1348: jr          $ra
    // 0x002A134C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x002A134C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_002101BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002101BC: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x002101C0: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x002101C4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x002101C8: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x002101CC: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x002101D0: lwc1        $f0, 0x0($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X0);
    // 0x002101D4: mul.s       $f12, $f0, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x002101D8: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    // 0x002101DC: lwc1        $f0, 0x4($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X4);
    // 0x002101E0: mul.s       $f2, $f0, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x002101E4: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    // 0x002101E8: lwc1        $f0, 0x8($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X8);
    // 0x002101EC: mul.s       $f1, $f0, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x002101F0: add.s       $f12, $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f2.fl;
    // 0x002101F4: add.s       $f12, $f12, $f1
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f1.fl;
    // 0x002101F8: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x002101FC: jal         0x00298470
    // 0x00210200: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    func_00298470(rdram, ctx);
        goto after_0;
    // 0x00210200: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    after_0:
    // 0x00210204: swc1        $f0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->f0.u32l;
    // 0x00210208: lwc1        $f0, 0x10($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X10);
    // 0x0021020C: mul.s       $f12, $f0, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x00210210: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    // 0x00210214: lwc1        $f0, 0x14($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X14);
    // 0x00210218: mul.s       $f2, $f0, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x0021021C: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    // 0x00210220: lwc1        $f0, 0x18($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X18);
    // 0x00210224: mul.s       $f1, $f0, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x00210228: add.s       $f12, $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f2.fl;
    // 0x0021022C: add.s       $f12, $f12, $f1
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f1.fl;
    // 0x00210230: jal         0x00298470
    // 0x00210234: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    func_00298470(rdram, ctx);
        goto after_1;
    // 0x00210234: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    after_1:
    // 0x00210238: swc1        $f0, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->f0.u32l;
    // 0x0021023C: lwc1        $f0, 0x20($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X20);
    // 0x00210240: mul.s       $f12, $f0, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x00210244: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    // 0x00210248: lwc1        $f0, 0x24($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X24);
    // 0x0021024C: mul.s       $f2, $f0, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x00210250: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    // 0x00210254: lwc1        $f0, 0x28($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X28);
    // 0x00210258: mul.s       $f1, $f0, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x0021025C: add.s       $f12, $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f2.fl;
    // 0x00210260: add.s       $f12, $f12, $f1
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f1.fl;
    // 0x00210264: jal         0x00298470
    // 0x00210268: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    func_00298470(rdram, ctx);
        goto after_2;
    // 0x00210268: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    after_2:
    // 0x0021026C: swc1        $f0, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->f0.u32l;
    // 0x00210270: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x00210274: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x00210278: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x0021027C: jr          $ra
    // 0x00210280: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x00210280: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_0045CA68(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
;}
RECOMP_FUNC void func_0045D46C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_004244B0:
    // 0x0045D46C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0045D470: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x0045D474: lw          $v1, 0x2038($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X2038);
    // 0x0045D478: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x0045D47C: bne         $v1, $v0, L_0045D4B0
    if (ctx->r3 != ctx->r2) {
        // 0x0045D480: sw          $ra, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r31;
            goto L_0045D4B0;
    }
    // 0x0045D480: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x0045D484: jal         0x00266B80
    // 0x0045D488: nop

    func_00266B80(rdram, ctx);
        goto after_0;
    // 0x0045D488: nop

    after_0:
    // 0x0045D48C: lui         $v1, 0x40
    ctx->r3 = S32(0X40 << 16);
    // 0x0045D490: beq         $v0, $v1, L_0045D4A8
    if (ctx->r2 == ctx->r3) {
        // 0x0045D494: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_0045D4A8;
    }
    // 0x0045D494: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0045D498: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0045D49C: sw          $v0, 0x2038($at)
    MEM_W(0X2038, ctx->r1) = ctx->r2;
    // 0x0045D4A0: j           L_004244B0
    // 0x0045D4A4: nop

    entry_004244B0(rdram, ctx);
    return;
    // 0x0045D4A4: nop

L_0045D4A8:
    // 0x0045D4A8: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0045D4AC: sw          $zero, 0x2038($at)
    MEM_W(0X2038, ctx->r1) = 0;
L_0045D4B0:
    // 0x0045D4B0: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x0045D4B4: lw          $v0, 0x2040($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2040);
    // 0x0045D4B8: slti        $v0, $v0, 0x5
    ctx->r2 = SIGNED(ctx->r2) < 0X5 ? 1 : 0;
    // 0x0045D4BC: beq         $v0, $zero, L_0045D4F4
    if (ctx->r2 == 0) {
        // 0x0045D4C0: nop
    
            goto L_0045D4F4;
    }
    // 0x0045D4C0: nop

    // 0x0045D4C4: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x0045D4C8: lw          $v1, 0x203C($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X203C);
    // 0x0045D4CC: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x0045D4D0: lw          $v0, 0x2038($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2038);
    // 0x0045D4D4: beq         $v1, $v0, L_0045D4F4
    if (ctx->r3 == ctx->r2) {
        // 0x0045D4D8: nop
    
            goto L_0045D4F4;
    }
    // 0x0045D4D8: nop

    // 0x0045D4DC: jal         0x00423D30
    // 0x0045D4E0: nop

    func_00423D30(rdram, ctx);
        goto after_1;
    // 0x0045D4E0: nop

    after_1:
    // 0x0045D4E4: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x0045D4E8: lw          $v0, 0x2038($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2038);
    // 0x0045D4EC: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0045D4F0: sw          $v0, 0x203C($at)
    MEM_W(0X203C, ctx->r1) = ctx->r2;
L_0045D4F4:
    // 0x0045D4F4: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x0045D4F8: jr          $ra
    // 0x0045D4FC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0045D4FC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0024665C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0024665C: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x00246660: lwc1        $f2, 0x4($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X4);
    // 0x00246664: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x00246668: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    // 0x0024666C: lwc1        $f0, 0x4($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X4);
    // 0x00246670: sub.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f2.fl - ctx->f0.fl;
    // 0x00246674: mul.s       $f2, $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x00246678: lwc1        $f1, 0xC($a0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r4, 0XC);
    // 0x0024667C: lwc1        $f0, 0xC($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0XC);
    // 0x00246680: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x00246684: mul.s       $f0, $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x00246688: jr          $ra
    // 0x0024668C: add.s       $f0, $f2, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f2.fl + ctx->f0.fl;
    return;
    // 0x0024668C: add.s       $f0, $f2, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f2.fl + ctx->f0.fl;
;}
RECOMP_FUNC void func_0025FC08(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0025FC08: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x0025FC0C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x0025FC10: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x0025FC14: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0025FC18: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x0025FC1C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x0025FC20: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x0025FC24: lwc1        $f0, 0x64($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X64);
    // 0x0025FC28: lw          $v0, 0x14($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X14);
    // 0x0025FC2C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0025FC30: lwc1        $f1, 0x7960($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X7960);
    // 0x0025FC34: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x0025FC38: nop

    // 0x0025FC3C: bc1f        L_0025FC4C
    if (!c1cs) {
        // 0x0025FC40: addiu       $s2, $v0, 0x14
        ctx->r18 = ADD32(ctx->r2, 0X14);
            goto L_0025FC4C;
    }
    // 0x0025FC40: addiu       $s2, $v0, 0x14
    ctx->r18 = ADD32(ctx->r2, 0X14);
    // 0x0025FC44: swc1        $f1, 0x64($s0)
    MEM_W(0X64, ctx->r16) = ctx->f_odd[(1 - 1) * 2];
    // 0x0025FC48: lwc1        $f0, 0x64($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X64);
L_0025FC4C:
    // 0x0025FC4C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0025FC50: lwc1        $f1, 0x6D28($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X6D28);
    // 0x0025FC54: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x0025FC58: mtc1        $zero, $f1
    ctx->f_odd[(1 - 1) * 2] = 0;
    // 0x0025FC5C: c.le.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl <= ctx->f1.fl;
    // 0x0025FC60: nop

    // 0x0025FC64: bc1f        L_0025FCA0
    if (!c1cs) {
        // 0x0025FC68: swc1        $f0, 0x64($s0)
        MEM_W(0X64, ctx->r16) = ctx->f0.u32l;
            goto L_0025FCA0;
    }
    // 0x0025FC68: swc1        $f0, 0x64($s0)
    MEM_W(0X64, ctx->r16) = ctx->f0.u32l;
    // 0x0025FC6C: jal         0x004089C8
    // 0x0025FC70: sw          $zero, 0x4($s0)
    MEM_W(0X4, ctx->r16) = 0;
    func_004089C8(rdram, ctx);
        goto after_0;
    // 0x0025FC70: sw          $zero, 0x4($s0)
    MEM_W(0X4, ctx->r16) = 0;
    after_0:
    // 0x0025FC74: lb          $v1, 0x51($s2)
    ctx->r3 = MEM_B(ctx->r18, 0X51);
    // 0x0025FC78: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x0025FC7C: beq         $v1, $v0, L_0025FC90
    if (ctx->r3 == ctx->r2) {
        // 0x0025FC80: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_0025FC90;
    }
    // 0x0025FC80: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0025FC84: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x0025FC88: j           L_0025FC98
    // 0x0025FC8C: addiu       $a2, $zero, 0x38
    ctx->r6 = ADD32(0, 0X38);
        goto L_0025FC98;
    // 0x0025FC8C: addiu       $a2, $zero, 0x38
    ctx->r6 = ADD32(0, 0X38);
L_0025FC90:
    // 0x0025FC90: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x0025FC94: addiu       $a2, $zero, 0x34
    ctx->r6 = ADD32(0, 0X34);
L_0025FC98:
    // 0x0025FC98: jal         0x00243414
    // 0x0025FC9C: nop

    func_00243414(rdram, ctx);
        goto after_1;
    // 0x0025FC9C: nop

    after_1:
L_0025FCA0:
    // 0x0025FCA0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x0025FCA4: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x0025FCA8: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x0025FCAC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0025FCB0: jr          $ra
    // 0x0025FCB4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x0025FCB4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_00275A50(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00275A50: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00275A54: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x00275A58: addiu       $a0, $a0, 0x2A00
    ctx->r4 = ADD32(ctx->r4, 0X2A00);
    // 0x00275A5C: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x00275A60: jal         0x00271A70
    // 0x00275A64: nop

    func_00271A70(rdram, ctx);
        goto after_0;
    // 0x00275A64: nop

    after_0:
    // 0x00275A68: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x00275A6C: jr          $ra
    // 0x00275A70: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00275A70: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0020B4F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0020B4F0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x0020B4F4: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x0020B4F8: mtc1        $a1, $f20
    ctx->f20.u32l = ctx->r5;
    // 0x0020B4FC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x0020B500: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0020B504: lw          $s0, 0x0($a0)
    ctx->r16 = MEM_W(ctx->r4, 0X0);
    // 0x0020B508: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x0020B50C: jal         0x002017D4
    // 0x0020B510: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_002017D4(rdram, ctx);
        goto after_0;
    // 0x0020B510: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x0020B514: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    // 0x0020B518: lw          $v1, 0x0($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X0);
    // 0x0020B51C: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0020B520: lw          $v0, 0x6D18($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X6D18);
    // 0x0020B524: beq         $v1, $v0, L_0020B540
    if (ctx->r3 == ctx->r2) {
        // 0x0020B528: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_0020B540;
    }
    // 0x0020B528: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0020B52C: lwc1        $f0, 0x4($a2)
    ctx->f0.u32l = MEM_W(ctx->r6, 0X4);
    // 0x0020B530: add.s       $f0, $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f20.fl;
    // 0x0020B534: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x0020B538: jal         0x002097AC
    // 0x0020B53C: sw          $a1, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r5;
    func_002097AC(rdram, ctx);
        goto after_1;
    // 0x0020B53C: sw          $a1, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r5;
    after_1:
L_0020B540:
    // 0x0020B540: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x0020B544: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0020B548: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x0020B54C: jr          $ra
    // 0x0020B550: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x0020B550: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_0025F900(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0025F900: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0025F904: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x0025F908: lb          $v0, 0xC7($a1)
    ctx->r2 = MEM_B(ctx->r5, 0XC7);
    // 0x0025F90C: beq         $v0, $zero, L_0025F91C
    if (ctx->r2 == 0) {
        // 0x0025F910: nop
    
            goto L_0025F91C;
    }
    // 0x0025F910: nop

    // 0x0025F914: jal         0x00243414
    // 0x0025F918: addiu       $a2, $zero, 0x1E
    ctx->r6 = ADD32(0, 0X1E);
    func_00243414(rdram, ctx);
        goto after_0;
    // 0x0025F918: addiu       $a2, $zero, 0x1E
    ctx->r6 = ADD32(0, 0X1E);
    after_0:
L_0025F91C:
    // 0x0025F91C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x0025F920: jr          $ra
    // 0x0025F924: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0025F924: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0044BDA4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0044BDA4: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x0044BDA8: lw          $v0, 0x1BB0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1BB0);
    // 0x0044BDAC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0044BDB0: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x0044BDB4: lw          $a0, 0x4($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X4);
    // 0x0044BDB8: jal         0x002017D4
    // 0x0044BDBC: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_002017D4(rdram, ctx);
        goto after_0;
    // 0x0044BDBC: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_0:
    // 0x0044BDC0: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x0044BDC4: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x0044BDC8: jr          $ra
    // 0x0044BDCC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0044BDCC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00416C00(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00416C00: sw          $zero, 0x1CC($a0)
    MEM_W(0X1CC, ctx->r4) = 0;
    // 0x00416C04: jr          $ra
    // 0x00416C08: sw          $zero, 0x1C8($a0)
    MEM_W(0X1C8, ctx->r4) = 0;
    return;
    // 0x00416C08: sw          $zero, 0x1C8($a0)
    MEM_W(0X1C8, ctx->r4) = 0;
;}
RECOMP_FUNC void func_002560F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002560F4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x002560F8: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x002560FC: jal         0x00251698
    // 0x00256100: addiu       $a2, $zero, 0x1E
    ctx->r6 = ADD32(0, 0X1E);
    func_00251698(rdram, ctx);
        goto after_0;
    // 0x00256100: addiu       $a2, $zero, 0x1E
    ctx->r6 = ADD32(0, 0X1E);
    after_0:
    // 0x00256104: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x00256108: jr          $ra
    // 0x0025610C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0025610C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0041D884(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041D884: bne         $v1, $v0, L_0041D9C8
    if (ctx->r3 != ctx->r2) {
        // 0x0041D888: addiu       $s0, $sp, 0x30
        ctx->r16 = ADD32(ctx->r29, 0X30);
            goto L_0041D9C8;
    }
    // 0x0041D888: addiu       $s0, $sp, 0x30
    ctx->r16 = ADD32(ctx->r29, 0X30);
    // 0x0041D88C: addiu       $a0, $sp, 0x48
    ctx->r4 = ADD32(ctx->r29, 0X48);
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
L_0041D9C8:
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
RECOMP_FUNC void func_0027B7E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0027B7E0: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x0027B7E4: addu        $t0, $a0, $zero
    ctx->r8 = ADD32(ctx->r4, 0);
    // 0x0027B7E8: sw          $s7, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r23;
    // 0x0027B7EC: addu        $s7, $a2, $zero
    ctx->r23 = ADD32(ctx->r6, 0);
    // 0x0027B7F0: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x0027B7F4: addiu       $s2, $t0, 0x8
    ctx->r18 = ADD32(ctx->r8, 0X8);
    // 0x0027B7F8: sw          $s4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r20;
    // 0x0027B7FC: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x0027B800: sw          $fp, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r30;
    // 0x0027B804: sw          $s6, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r22;
    // 0x0027B808: sw          $s5, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r21;
    // 0x0027B80C: sw          $s3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r19;
    // 0x0027B810: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x0027B814: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x0027B818: lhu         $s5, 0x2($t0)
    ctx->r21 = MEM_HU(ctx->r8, 0X2);
    // 0x0027B81C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x0027B820: addiu       $s5, $s5, -0x1
    ctx->r21 = ADD32(ctx->r21, -0X1);
    // 0x0027B824: beq         $s5, $v0, L_0027B8B0
    if (ctx->r21 == ctx->r2) {
        // 0x0027B828: addu        $s4, $zero, $zero
        ctx->r20 = ADD32(0, 0);
            goto L_0027B8B0;
    }
    // 0x0027B828: addu        $s4, $zero, $zero
    ctx->r20 = ADD32(0, 0);
    // 0x0027B82C: sll         $a1, $a1, 16
    ctx->r5 = S32(ctx->r5 << 16);
    // 0x0027B830: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    // 0x0027B834: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
L_0027B838:
    // 0x0027B838: lw          $t1, 0x18($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X18);
    // 0x0027B83C: lhu         $s1, 0x0($t0)
    ctx->r17 = MEM_HU(ctx->r8, 0X0);
    // 0x0027B840: addiu       $s1, $s1, -0x1
    ctx->r17 = ADD32(ctx->r17, -0X1);
    // 0x0027B844: beq         $s1, $v1, L_0027B8A4
    if (ctx->r17 == ctx->r3) {
        // 0x0027B848: sra         $s3, $t1, 16
        ctx->r19 = S32(SIGNED(ctx->r9) >> 16);
            goto L_0027B8A4;
    }
    // 0x0027B848: sra         $s3, $t1, 16
    ctx->r19 = S32(SIGNED(ctx->r9) >> 16);
    // 0x0027B84C: sll         $s6, $s7, 16
    ctx->r22 = S32(ctx->r23 << 16);
    // 0x0027B850: addiu       $fp, $zero, -0x1
    ctx->r30 = ADD32(0, -0X1);
L_0027B854:
    // 0x0027B854: addiu       $a0, $s2, 0x8
    ctx->r4 = ADD32(ctx->r18, 0X8);
    // 0x0027B858: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    // 0x0027B85C: lw          $s4, 0x4($s2)
    ctx->r20 = MEM_W(ctx->r18, 0X4);
    // 0x0027B860: lw          $s0, 0x0($s2)
    ctx->r16 = MEM_W(ctx->r18, 0X0);
    // 0x0027B864: sra         $a2, $s6, 16
    ctx->r6 = S32(SIGNED(ctx->r22) >> 16);
    // 0x0027B868: sw          $v1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r3;
    // 0x0027B86C: sw          $t0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r8;
    // 0x0027B870: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    // 0x0027B874: jal         0x0027A2C4
    // 0x0027B878: sw          $s4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r20;
    func_0027A2C4(rdram, ctx);
        goto after_0;
    // 0x0027B878: sw          $s4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r20;
    after_0:
    // 0x0027B87C: mult        $s0, $s4
    result = S64(S32(ctx->r16)) * S64(S32(ctx->r20)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x0027B880: addiu       $s1, $s1, -0x1
    ctx->r17 = ADD32(ctx->r17, -0X1);
    // 0x0027B884: addu        $s3, $s3, $s0
    ctx->r19 = ADD32(ctx->r19, ctx->r16);
    // 0x0027B888: lw          $v1, 0x20($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X20);
    // 0x0027B88C: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x0027B890: mflo        $t1
    ctx->r9 = lo;
    // 0x0027B894: srl         $v0, $t1, 1
    ctx->r2 = S32(U32(ctx->r9) >> 1);
    // 0x0027B898: addu        $s2, $s2, $v0
    ctx->r18 = ADD32(ctx->r18, ctx->r2);
    // 0x0027B89C: bne         $s1, $fp, L_0027B854
    if (ctx->r17 != ctx->r30) {
        // 0x0027B8A0: addiu       $s2, $s2, 0x8
        ctx->r18 = ADD32(ctx->r18, 0X8);
            goto L_0027B854;
    }
    // 0x0027B8A0: addiu       $s2, $s2, 0x8
    ctx->r18 = ADD32(ctx->r18, 0X8);
L_0027B8A4:
    // 0x0027B8A4: addiu       $s5, $s5, -0x1
    ctx->r21 = ADD32(ctx->r21, -0X1);
    // 0x0027B8A8: bne         $s5, $v1, L_0027B838
    if (ctx->r21 != ctx->r3) {
        // 0x0027B8AC: addu        $s7, $s7, $s4
        ctx->r23 = ADD32(ctx->r23, ctx->r20);
            goto L_0027B838;
    }
    // 0x0027B8AC: addu        $s7, $s7, $s4
    ctx->r23 = ADD32(ctx->r23, ctx->r20);
L_0027B8B0:
    // 0x0027B8B0: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x0027B8B4: lw          $fp, 0x48($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X48);
    // 0x0027B8B8: lw          $s7, 0x44($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X44);
    // 0x0027B8BC: lw          $s6, 0x40($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X40);
    // 0x0027B8C0: lw          $s5, 0x3C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X3C);
    // 0x0027B8C4: lw          $s4, 0x38($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X38);
    // 0x0027B8C8: lw          $s3, 0x34($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X34);
    // 0x0027B8CC: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x0027B8D0: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x0027B8D4: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x0027B8D8: jr          $ra
    // 0x0027B8DC: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x0027B8DC: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_0042F75C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0042F75C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0042F760: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x0042F764: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
    // 0x0042F768: addiu       $t1, $zero, 0x80
    ctx->r9 = ADD32(0, 0X80);
    // 0x0042F76C: addiu       $t0, $zero, -0x1
    ctx->r8 = ADD32(0, -0X1);
    // 0x0042F770: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x0042F774: lw          $a3, 0x4($a0)
    ctx->r7 = MEM_W(ctx->r4, 0X4);
L_0042F778:
    // 0x0042F778: sll         $a1, $a1, 1
    ctx->r5 = S32(ctx->r5 << 1);
    // 0x0042F77C: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x0042F780: addiu       $a2, $a2, -0x1
    ctx->r6 = ADD32(ctx->r6, -0X1);
    // 0x0042F784: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x0042F788: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x0042F78C: sw          $v0, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r2;
    // 0x0042F790: srl         $v0, $v1, 3
    ctx->r2 = S32(U32(ctx->r3) >> 3);
    // 0x0042F794: addu        $v0, $a3, $v0
    ctx->r2 = ADD32(ctx->r7, ctx->r2);
    // 0x0042F798: andi        $v1, $v1, 0x7
    ctx->r3 = ctx->r3 & 0X7;
    // 0x0042F79C: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x0042F7A0: srav        $v1, $t1, $v1
    ctx->r3 = S32(SIGNED(ctx->r9) >> (ctx->r3 & 31));
    // 0x0042F7A4: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x0042F7A8: sltu        $v0, $zero, $v0
    ctx->r2 = 0 < ctx->r2 ? 1 : 0;
    // 0x0042F7AC: bne         $a2, $t0, L_0042F778
    if (ctx->r6 != ctx->r8) {
        // 0x0042F7B0: or          $a1, $a1, $v0
        ctx->r5 = ctx->r5 | ctx->r2;
            goto L_0042F778;
    }
    // 0x0042F7B0: or          $a1, $a1, $v0
    ctx->r5 = ctx->r5 | ctx->r2;
    // 0x0042F7B4: jal         0x0042EC30
    // 0x0042F7B8: sw          $a1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r5;
    func_0042EC30(rdram, ctx);
        goto after_0;
    // 0x0042F7B8: sw          $a1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r5;
    after_0:
    // 0x0042F7BC: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x0042F7C0: jr          $ra
    // 0x0042F7C4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0042F7C4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0040BB28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0040BB28: jr          $ra
    // 0x0040BB2C: nop

    return;
    // 0x0040BB2C: nop

;}
RECOMP_FUNC void func_0041CA78(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041CA78: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x0041CA7C: addiu       $v1, $v1, -0x5350
    ctx->r3 = ADD32(ctx->r3, -0X5350);
    // 0x0041CA80: lw          $v0, 0x28($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X28);
    // 0x0041CA84: bne         $v0, $zero, L_0041CAA4
    if (ctx->r2 != 0) {
        // 0x0041CA88: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_0041CAA4;
    }
    // 0x0041CA88: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0041CA8C: lw          $v0, 0x1C($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X1C);
    // 0x0041CA90: bnel        $v0, $zero, L_0041CAA8
    if (ctx->r2 != 0) {
        // 0x0041CA94: addiu       $a0, $zero, 0x1
        ctx->r4 = ADD32(0, 0X1);
            goto L_0041CAA8;
    }
    goto skip_0;
    // 0x0041CA94: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    skip_0:
    // 0x0041CA98: lw          $v0, 0x20($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X20);
    // 0x0041CA9C: beq         $v0, $zero, L_0041CAA8
    if (ctx->r2 == 0) {
        // 0x0041CAA0: nop
    
            goto L_0041CAA8;
    }
    // 0x0041CAA0: nop

L_0041CAA4:
    // 0x0041CAA4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
L_0041CAA8:
    // 0x0041CAA8: jr          $ra
    // 0x0041CAAC: addu        $v0, $a0, $zero
    ctx->r2 = ADD32(ctx->r4, 0);
    return;
    // 0x0041CAAC: addu        $v0, $a0, $zero
    ctx->r2 = ADD32(ctx->r4, 0);
;}
RECOMP_FUNC void func_00270240(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00270240: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x00270244: sw          $s1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r17;
    // 0x00270248: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x0027024C: sw          $s0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r16;
    // 0x00270250: addiu       $s0, $s1, 0x110
    ctx->r16 = ADD32(ctx->r17, 0X110);
    // 0x00270254: sw          $ra, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r31;
    // 0x00270258: jal         0x00201AA4
    // 0x0027025C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    entry_00201AA4(rdram, ctx);
        goto after_0;
    // 0x0027025C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x00270260: jal         0x0029DFF0
    // 0x00270264: nop

    func_0029DFF0(rdram, ctx);
        goto after_1;
    // 0x00270264: nop

    after_1:
    // 0x00270268: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x0027026C: lw          $v1, 0x1C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X1C);
    // 0x00270270: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00270274: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x00270278: beq         $v1, $v0, L_002702A0
    if (ctx->r3 == ctx->r2) {
        // 0x0027027C: sw          $v1, 0x1C($s0)
        MEM_W(0X1C, ctx->r16) = ctx->r3;
            goto L_002702A0;
    }
    // 0x0027027C: sw          $v1, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r3;
    // 0x00270280: jal         0x0029E010
    // 0x00270284: nop

    func_0029E010(rdram, ctx);
        goto after_2;
    // 0x00270284: nop

    after_2:
    // 0x00270288: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0027028C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x00270290: jal         0x0029B6F0
    // 0x00270294: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osRecvMesg_recomp(rdram, ctx);
        goto after_3;
    // 0x00270294: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_3:
    // 0x00270298: j           L_002702A8
    // 0x0027029C: addiu       $s0, $s1, 0x1DA8
    ctx->r16 = ADD32(ctx->r17, 0X1DA8);
        goto L_002702A8;
    // 0x0027029C: addiu       $s0, $s1, 0x1DA8
    ctx->r16 = ADD32(ctx->r17, 0X1DA8);
L_002702A0:
    // 0x002702A0: jal         0x0029E010
    // 0x002702A4: addiu       $s0, $s1, 0x1DA8
    ctx->r16 = ADD32(ctx->r17, 0X1DA8);
    func_0029E010(rdram, ctx);
        goto after_4;
    // 0x002702A4: addiu       $s0, $s1, 0x1DA8
    ctx->r16 = ADD32(ctx->r17, 0X1DA8);
    after_4:
L_002702A8:
    // 0x002702A8: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x002702AC: lw          $a1, 0xA40($a1)
    ctx->r5 = MEM_W(ctx->r5, 0XA40);
    // 0x002702B0: lui         $a2, 0x8013
    ctx->r6 = S32(0X8013 << 16);
    // 0x002702B4: lw          $a2, 0xA7C($a2)
    ctx->r6 = MEM_W(ctx->r6, 0XA7C);
    // 0x002702B8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x002702BC: jal         0x002912F0
    // 0x002702C0: sw          $zero, 0xD8($s1)
    MEM_W(0XD8, ctx->r17) = 0;
    func_002912F0(rdram, ctx);
        goto after_5;
    // 0x002702C0: sw          $zero, 0xD8($s1)
    MEM_W(0XD8, ctx->r17) = 0;
    after_5:
    // 0x002702C4: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x002702C8: addiu       $a2, $sp, 0x38
    ctx->r6 = ADD32(ctx->r29, 0X38);
    // 0x002702CC: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x002702D0: lw          $a1, 0x6E90($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X6E90);
    // 0x002702D4: addiu       $v0, $zero, 0x25
    ctx->r2 = ADD32(0, 0X25);
    // 0x002702D8: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x002702DC: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x002702E0: addiu       $v0, $zero, 0x100
    ctx->r2 = ADD32(0, 0X100);
    // 0x002702E4: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x002702E8: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x002702EC: sb          $v0, 0x2C($sp)
    MEM_B(0X2C, ctx->r29) = ctx->r2;
    // 0x002702F0: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x002702F4: addiu       $v0, $v0, 0x2684
    ctx->r2 = ADD32(ctx->r2, 0X2684);
    // 0x002702F8: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    // 0x002702FC: addiu       $v0, $zero, 0x5622
    ctx->r2 = ADD32(0, 0X5622);
    // 0x00270300: sw          $v0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r2;
    // 0x00270304: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00270308: sw          $v0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r2;
    // 0x0027030C: addiu       $v0, $zero, 0x800
    ctx->r2 = ADD32(0, 0X800);
    // 0x00270310: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x00270314: sw          $s0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r16;
    // 0x00270318: jal         0x0026F760
    // 0x0027031C: sw          $v0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r2;
    func_0026F760(rdram, ctx);
        goto after_6;
    // 0x0027031C: sw          $v0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r2;
    after_6:
    // 0x00270320: lui         $v0, 0x20
    ctx->r2 = S32(0X20 << 16);
    // 0x00270324: ori         $v0, $v0, 0xF194
    ctx->r2 = ctx->r2 | 0XF194;
    // 0x00270328: lui         $a0, 0x2
    ctx->r4 = S32(0X2 << 16);
    // 0x0027032C: ori         $a0, $a0, 0xF194
    ctx->r4 = ctx->r4 | 0XF194;
    // 0x00270330: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x00270334: lui         $at, 0x800F
    ctx->r1 = S32(0X800F << 16);
    // 0x00270338: sw          $v0, 0x2040($at)
    MEM_W(0X2040, ctx->r1) = ctx->r2;
    // 0x0027033C: jal         0x0028E60C
    // 0x00270340: lui         $a2, 0x1E
    ctx->r6 = S32(0X1E << 16);
    func_0028E60C(rdram, ctx);
        goto after_7;
    // 0x00270340: lui         $a2, 0x1E
    ctx->r6 = S32(0X1E << 16);
    after_7:
    // 0x00270344: lw          $v1, 0x4($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X4);
    // 0x00270348: sw          $v1, 0x1D6C($s1)
    MEM_W(0X1D6C, ctx->r17) = ctx->r3;
    // 0x0027034C: lw          $v0, 0xC($v0)
    ctx->r2 = MEM_W(ctx->r2, 0XC);
    // 0x00270350: sw          $v0, 0x80($s1)
    MEM_W(0X80, ctx->r17) = ctx->r2;
    // 0x00270354: lw          $v0, 0x4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4);
    // 0x00270358: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0027035C: jal         0x00270550
    // 0x00270360: sw          $v0, 0x7C($s1)
    MEM_W(0X7C, ctx->r17) = ctx->r2;
    func_00270550(rdram, ctx);
        goto after_8;
    // 0x00270360: sw          $v0, 0x7C($s1)
    MEM_W(0X7C, ctx->r17) = ctx->r2;
    after_8:
    // 0x00270364: addiu       $a0, $s1, 0x1D64
    ctx->r4 = ADD32(ctx->r17, 0X1D64);
    // 0x00270368: jal         0x00274F34
    // 0x0027036C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_00274F34(rdram, ctx);
        goto after_9;
    // 0x0027036C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_9:
    // 0x00270370: lw          $v0, 0x7C($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X7C);
    // 0x00270374: lw          $t1, 0xC($v0)
    ctx->r9 = MEM_W(ctx->r2, 0XC);
    // 0x00270378: lh          $v0, 0xE($t1)
    ctx->r2 = MEM_H(ctx->r9, 0XE);
    // 0x0027037C: lhu         $v1, 0xE($t1)
    ctx->r3 = MEM_HU(ctx->r9, 0XE);
    // 0x00270380: blez        $v0, L_002703F8
    if (SIGNED(ctx->r2) <= 0) {
        // 0x00270384: addu        $t0, $zero, $zero
        ctx->r8 = ADD32(0, 0);
            goto L_002703F8;
    }
    // 0x00270384: addu        $t0, $zero, $zero
    ctx->r8 = ADD32(0, 0);
    // 0x00270388: addu        $t2, $t1, $zero
    ctx->r10 = ADD32(ctx->r9, 0);
L_0027038C:
    // 0x0027038C: addiu       $a2, $t0, 0x1
    ctx->r6 = ADD32(ctx->r8, 0X1);
    // 0x00270390: sll         $v0, $v1, 16
    ctx->r2 = S32(ctx->r3 << 16);
    // 0x00270394: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x00270398: slt         $v0, $a2, $v0
    ctx->r2 = SIGNED(ctx->r6) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x0027039C: beql        $v0, $zero, L_002703E4
    if (ctx->r2 == 0) {
        // 0x002703A0: addiu       $t0, $t0, 0x1
        ctx->r8 = ADD32(ctx->r8, 0X1);
            goto L_002703E4;
    }
    goto skip_0;
    // 0x002703A0: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    skip_0:
    // 0x002703A4: addu        $a3, $t2, $zero
    ctx->r7 = ADD32(ctx->r10, 0);
    // 0x002703A8: sll         $v0, $a2, 2
    ctx->r2 = S32(ctx->r6 << 2);
    // 0x002703AC: addu        $a1, $v0, $t1
    ctx->r5 = ADD32(ctx->r2, ctx->r9);
L_002703B0:
    // 0x002703B0: lw          $v1, 0x10($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X10);
    // 0x002703B4: lw          $a0, 0x10($a3)
    ctx->r4 = MEM_W(ctx->r7, 0X10);
    // 0x002703B8: sltu        $v0, $v1, $a0
    ctx->r2 = ctx->r3 < ctx->r4 ? 1 : 0;
    // 0x002703BC: beq         $v0, $zero, L_002703CC
    if (ctx->r2 == 0) {
        // 0x002703C0: nop
    
            goto L_002703CC;
    }
    // 0x002703C0: nop

    // 0x002703C4: sw          $v1, 0x10($a3)
    MEM_W(0X10, ctx->r7) = ctx->r3;
    // 0x002703C8: sw          $a0, 0x10($a1)
    MEM_W(0X10, ctx->r5) = ctx->r4;
L_002703CC:
    // 0x002703CC: lh          $v0, 0xE($t1)
    ctx->r2 = MEM_H(ctx->r9, 0XE);
    // 0x002703D0: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x002703D4: slt         $v0, $a2, $v0
    ctx->r2 = SIGNED(ctx->r6) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x002703D8: bne         $v0, $zero, L_002703B0
    if (ctx->r2 != 0) {
        // 0x002703DC: addiu       $a1, $a1, 0x4
        ctx->r5 = ADD32(ctx->r5, 0X4);
            goto L_002703B0;
    }
    // 0x002703DC: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
    // 0x002703E0: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
L_002703E4:
    // 0x002703E4: lh          $v0, 0xE($t1)
    ctx->r2 = MEM_H(ctx->r9, 0XE);
    // 0x002703E8: lhu         $v1, 0xE($t1)
    ctx->r3 = MEM_HU(ctx->r9, 0XE);
    // 0x002703EC: slt         $v0, $t0, $v0
    ctx->r2 = SIGNED(ctx->r8) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x002703F0: bne         $v0, $zero, L_0027038C
    if (ctx->r2 != 0) {
        // 0x002703F4: addiu       $t2, $t2, 0x4
        ctx->r10 = ADD32(ctx->r10, 0X4);
            goto L_0027038C;
    }
    // 0x002703F4: addiu       $t2, $t2, 0x4
    ctx->r10 = ADD32(ctx->r10, 0X4);
L_002703F8:
    // 0x002703F8: addiu       $a0, $s1, 0x84
    ctx->r4 = ADD32(ctx->r17, 0X84);
    // 0x002703FC: addiu       $a1, $s1, 0x24
    ctx->r5 = ADD32(ctx->r17, 0X24);
    // 0x00270400: addiu       $v0, $zero, 0x11
    ctx->r2 = ADD32(0, 0X11);
    // 0x00270404: sw          $v0, 0x24($s1)
    MEM_W(0X24, ctx->r17) = ctx->r2;
    // 0x00270408: addiu       $v0, $zero, 0xC0
    ctx->r2 = ADD32(0, 0XC0);
    // 0x0027040C: sw          $v0, 0x28($s1)
    MEM_W(0X28, ctx->r17) = ctx->r2;
    // 0x00270410: addiu       $v0, $s1, 0x1DA8
    ctx->r2 = ADD32(ctx->r17, 0X1DA8);
    // 0x00270414: jal         0x002935B0
    // 0x00270418: sw          $v0, 0x2C($s1)
    MEM_W(0X2C, ctx->r17) = ctx->r2;
    func_002935B0(rdram, ctx);
        goto after_10;
    // 0x00270418: sw          $v0, 0x2C($s1)
    MEM_W(0X2C, ctx->r17) = ctx->r2;
    after_10:
    // 0x0027041C: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x00270420: addiu       $v1, $zero, 0xF
    ctx->r3 = ADD32(0, 0XF);
    // 0x00270424: addiu       $v0, $s1, 0x1E
    ctx->r2 = ADD32(ctx->r17, 0X1E);
L_00270428:
    // 0x00270428: sh          $a0, 0xDC($v0)
    MEM_H(0XDC, ctx->r2) = ctx->r4;
    // 0x0027042C: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x00270430: bgez        $v1, L_00270428
    if (SIGNED(ctx->r3) >= 0) {
        // 0x00270434: addiu       $v0, $v0, -0x2
        ctx->r2 = ADD32(ctx->r2, -0X2);
            goto L_00270428;
    }
    // 0x00270434: addiu       $v0, $v0, -0x2
    ctx->r2 = ADD32(ctx->r2, -0X2);
    // 0x00270438: addiu       $a0, $s1, 0x138
    ctx->r4 = ADD32(ctx->r17, 0X138);
    // 0x0027043C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x00270440: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x00270444: sh          $v0, 0x102($s1)
    MEM_H(0X102, ctx->r17) = ctx->r2;
    // 0x00270448: sh          $v0, 0x2B8C($s1)
    MEM_H(0X2B8C, ctx->r17) = ctx->r2;
    // 0x0027044C: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x00270450: sw          $zero, 0x108($s1)
    MEM_W(0X108, ctx->r17) = 0;
    // 0x00270454: sw          $zero, 0x104($s1)
    MEM_W(0X104, ctx->r17) = 0;
    // 0x00270458: sw          $zero, 0x2B88($s1)
    MEM_W(0X2B88, ctx->r17) = 0;
    // 0x0027045C: sb          $v0, 0x2B94($s1)
    MEM_B(0X2B94, ctx->r17) = ctx->r2;
    // 0x00270460: sw          $zero, 0x2B98($s1)
    MEM_W(0X2B98, ctx->r17) = 0;
    // 0x00270464: sw          $zero, 0x2BB8($s1)
    MEM_W(0X2BB8, ctx->r17) = 0;
    // 0x00270468: jal         0x002763F4
    // 0x0027046C: sw          $zero, 0x2B9C($s1)
    MEM_W(0X2B9C, ctx->r17) = 0;
    func_002763F4(rdram, ctx);
        goto after_11;
    // 0x0027046C: sw          $zero, 0x2B9C($s1)
    MEM_W(0X2B9C, ctx->r17) = 0;
    after_11:
    // 0x00270470: addiu       $a0, $s1, 0x1DB8
    ctx->r4 = ADD32(ctx->r17, 0X1DB8);
    // 0x00270474: jal         0x00273A94
    // 0x00270478: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_00273A94(rdram, ctx);
        goto after_12;
    // 0x00270478: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_12:
    // 0x0027047C: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x00270480: addiu       $v1, $v1, -0x5513
    ctx->r3 = ADD32(ctx->r3, -0X5513);
    // 0x00270484: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x00270488: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0027048C: lwc1        $f1, -0x7F40($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, -0X7F40);
    // 0x00270490: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x00270494: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00270498: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0027049C: swc1        $f0, 0x2BA0($s1)
    MEM_W(0X2BA0, ctx->r17) = ctx->f0.u32l;
    // 0x002704A0: lbu         $v0, -0x1($v1)
    ctx->r2 = MEM_BU(ctx->r3, -0X1);
    // 0x002704A4: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x002704A8: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x002704AC: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x002704B0: swc1        $f0, 0x2BA4($s1)
    MEM_W(0X2BA4, ctx->r17) = ctx->f0.u32l;
    // 0x002704B4: lbu         $v0, 0x1($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X1);
    // 0x002704B8: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x002704BC: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x002704C0: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x002704C4: addiu       $a0, $s1, 0x2BC0
    ctx->r4 = ADD32(ctx->r17, 0X2BC0);
    // 0x002704C8: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x002704CC: sw          $zero, 0x2BAC($s1)
    MEM_W(0X2BAC, ctx->r17) = 0;
    // 0x002704D0: swc1        $f0, 0x2BA8($s1)
    MEM_W(0X2BA8, ctx->r17) = ctx->f0.u32l;
    // 0x002704D4: lbu         $v0, -0x2($v1)
    ctx->r2 = MEM_BU(ctx->r3, -0X2);
    // 0x002704D8: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x002704DC: lwc1        $f0, -0x7F3C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X7F3C);
    // 0x002704E0: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
    // 0x002704E4: sw          $s0, 0x2BB4($s1)
    MEM_W(0X2BB4, ctx->r17) = ctx->r16;
    // 0x002704E8: swc1        $f0, 0x2BBC($s1)
    MEM_W(0X2BBC, ctx->r17) = ctx->f0.u32l;
    // 0x002704EC: jal         0x00276D98
    // 0x002704F0: sw          $v0, 0x2BB0($s1)
    MEM_W(0X2BB0, ctx->r17) = ctx->r2;
    func_00276D98(rdram, ctx);
        goto after_13;
    // 0x002704F0: sw          $v0, 0x2BB0($s1)
    MEM_W(0X2BB0, ctx->r17) = ctx->r2;
    after_13:
    // 0x002704F4: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x002704F8: sw          $s0, 0x2680($at)
    MEM_W(0X2680, ctx->r1) = ctx->r16;
    // 0x002704FC: jal         0x0029DFF0
    // 0x00270500: addiu       $s0, $s1, 0x110
    ctx->r16 = ADD32(ctx->r17, 0X110);
    func_0029DFF0(rdram, ctx);
        goto after_14;
    // 0x00270500: addiu       $s0, $s1, 0x110
    ctx->r16 = ADD32(ctx->r17, 0X110);
    after_14:
    // 0x00270504: lw          $v1, 0x1C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X1C);
    // 0x00270508: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x0027050C: beq         $v1, $zero, L_00270534
    if (ctx->r3 == 0) {
        // 0x00270510: sw          $v1, 0x1C($s0)
        MEM_W(0X1C, ctx->r16) = ctx->r3;
            goto L_00270534;
    }
    // 0x00270510: sw          $v1, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r3;
    // 0x00270514: jal         0x0029E010
    // 0x00270518: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    func_0029E010(rdram, ctx);
        goto after_15;
    // 0x00270518: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    after_15:
    // 0x0027051C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00270520: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x00270524: jal         0x0029B820
    // 0x00270528: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osSendMesg_recomp(rdram, ctx);
        goto after_16;
    // 0x00270528: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_16:
    // 0x0027052C: j           L_0027053C
    // 0x00270530: nop

        goto L_0027053C;
    // 0x00270530: nop

L_00270534:
    // 0x00270534: jal         0x0029E010
    // 0x00270538: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    func_0029E010(rdram, ctx);
        goto after_17;
    // 0x00270538: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    after_17:
L_0027053C:
    // 0x0027053C: lw          $ra, 0x50($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X50);
    // 0x00270540: lw          $s1, 0x4C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X4C);
    // 0x00270544: lw          $s0, 0x48($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X48);
    // 0x00270548: jr          $ra
    // 0x0027054C: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    return;
    // 0x0027054C: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void func_002017E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002017E8: addiu       $v0, $a1, 0x1
    ctx->r2 = ADD32(ctx->r5, 0X1);
    // 0x002017EC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x002017F0: addu        $v0, $a0, $v0
    ctx->r2 = ADD32(ctx->r4, ctx->r2);
    // 0x002017F4: sll         $a1, $a1, 2
    ctx->r5 = S32(ctx->r5 << 2);
    // 0x002017F8: addu        $a1, $a0, $a1
    ctx->r5 = ADD32(ctx->r4, ctx->r5);
    // 0x002017FC: lw          $v0, 0x4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4);
    // 0x00201800: lw          $v1, 0x4($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X4);
    // 0x00201804: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x00201808: sw          $v0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r2;
    // 0x0020180C: lw          $v0, 0x4($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X4);
    // 0x00201810: jr          $ra
    // 0x00201814: addu        $v0, $a0, $v0
    ctx->r2 = ADD32(ctx->r4, ctx->r2);
    return;
    // 0x00201814: addu        $v0, $a0, $v0
    ctx->r2 = ADD32(ctx->r4, ctx->r2);
;}
RECOMP_FUNC void func_00267EA8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00267EA8: lw          $a0, 0x14($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X14);
    // 0x00267EAC: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x00267EB0: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
    // 0x00267EB4: bne         $v1, $v0, L_00267EE0
    if (ctx->r3 != ctx->r2) {
            // 0x00267EB8: nop

    func_00267EE0(rdram, ctx);
    return;
    }
    // 0x00267EB8: nop

    // 0x00267EBC: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x00267EC0: lbu         $v0, -0x550F($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X550F);
    // 0x00267EC4: beq         $v0, $zero, L_00267ED8
    if (ctx->r2 == 0) {
            // 0x00267EC8: nop

    func_00267ED8(rdram, ctx);
    return;
    }
    // 0x00267EC8: nop

    // 0x00267ECC: lw          $v0, 0x14($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X14);
    // 0x00267ED0: jr          $ra
    // 0x00267ED4: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    return;
    // 0x00267ED4: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
;}
RECOMP_FUNC void func_004464C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004464C8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x004464CC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x004464D0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x004464D4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x004464D8: jal         0x00275624
    // 0x004464DC: addiu       $a0, $zero, 0x284F
    ctx->r4 = ADD32(0, 0X284F);
    func_00275624(rdram, ctx);
        goto after_0;
    // 0x004464DC: addiu       $a0, $zero, 0x284F
    ctx->r4 = ADD32(0, 0X284F);
    after_0:
    // 0x004464E0: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x004464E4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x004464E8: jal         0x00243414
    // 0x004464EC: addiu       $a1, $a0, 0x140
    ctx->r5 = ADD32(ctx->r4, 0X140);
    func_00243414(rdram, ctx);
        goto after_1;
    // 0x004464EC: addiu       $a1, $a0, 0x140
    ctx->r5 = ADD32(ctx->r4, 0X140);
    after_1:
    // 0x004464F0: lw          $v1, 0x4F8($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X4F8);
    // 0x004464F4: addiu       $v0, $v1, 0xC
    ctx->r2 = ADD32(ctx->r3, 0XC);
    // 0x004464F8: sw          $v0, 0x4F8($s0)
    MEM_W(0X4F8, ctx->r16) = ctx->r2;
    // 0x004464FC: lw          $a1, 0xC($v1)
    ctx->r5 = MEM_W(ctx->r3, 0XC);
    // 0x00446500: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // 0x00446504: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
    // 0x00446508: sw          $zero, 0x518($s0)
    MEM_W(0X518, ctx->r16) = 0;
    // 0x0044650C: sw          $zero, 0x530($s0)
    MEM_W(0X530, ctx->r16) = 0;
    // 0x00446510: blez        $v0, L_00446538
    if (SIGNED(ctx->r2) <= 0) {
        // 0x00446514: sw          $zero, 0x548($s0)
        MEM_W(0X548, ctx->r16) = 0;
            goto L_00446538;
    }
    // 0x00446514: sw          $zero, 0x548($s0)
    MEM_W(0X548, ctx->r16) = 0;
    // 0x00446518: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_0044651C:
    // 0x0044651C: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x00446520: sw          $zero, 0x24C($v0)
    MEM_W(0X24C, ctx->r2) = 0;
    // 0x00446524: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // 0x00446528: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x0044652C: slt         $v0, $v1, $v0
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x00446530: bne         $v0, $zero, L_0044651C
    if (ctx->r2 != 0) {
        // 0x00446534: addiu       $a0, $a0, 0x4
        ctx->r4 = ADD32(ctx->r4, 0X4);
            goto L_0044651C;
    }
    // 0x00446534: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
L_00446538:
    // 0x00446538: lw          $v0, 0x18($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X18);
    // 0x0044653C: blez        $v0, L_00446564
    if (SIGNED(ctx->r2) <= 0) {
        // 0x00446540: addu        $v1, $zero, $zero
        ctx->r3 = ADD32(0, 0);
            goto L_00446564;
    }
    // 0x00446540: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
    // 0x00446544: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_00446548:
    // 0x00446548: lw          $v0, 0x1C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X1C);
    // 0x0044654C: sw          $zero, 0x24C($v0)
    MEM_W(0X24C, ctx->r2) = 0;
    // 0x00446550: lw          $v0, 0x18($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X18);
    // 0x00446554: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x00446558: slt         $v0, $v1, $v0
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x0044655C: bne         $v0, $zero, L_00446548
    if (ctx->r2 != 0) {
        // 0x00446560: addiu       $a0, $a0, 0x4
        ctx->r4 = ADD32(ctx->r4, 0X4);
            goto L_00446548;
    }
    // 0x00446560: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
L_00446564:
    // 0x00446564: lw          $v0, 0x2C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X2C);
    // 0x00446568: blez        $v0, L_00446590
    if (SIGNED(ctx->r2) <= 0) {
        // 0x0044656C: addu        $v1, $zero, $zero
        ctx->r3 = ADD32(0, 0);
            goto L_00446590;
    }
    // 0x0044656C: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
    // 0x00446570: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_00446574:
    // 0x00446574: lw          $v0, 0x30($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X30);
    // 0x00446578: sw          $zero, 0x24C($v0)
    MEM_W(0X24C, ctx->r2) = 0;
    // 0x0044657C: lw          $v0, 0x2C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X2C);
    // 0x00446580: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x00446584: slt         $v0, $v1, $v0
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x00446588: bne         $v0, $zero, L_00446574
    if (ctx->r2 != 0) {
        // 0x0044658C: addiu       $a0, $a0, 0x4
        ctx->r4 = ADD32(ctx->r4, 0X4);
            goto L_00446574;
    }
    // 0x0044658C: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
L_00446590:
    // 0x00446590: sll         $v0, $a1, 3
    ctx->r2 = S32(ctx->r5 << 3);
    // 0x00446594: sw          $a1, 0x4FC($s0)
    MEM_W(0X4FC, ctx->r16) = ctx->r5;
    // 0x00446598: lui         $at, 0x43
    ctx->r1 = S32(0X43 << 16);
    // 0x0044659C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x004465A0: lw          $v0, 0x232C($at)
    ctx->r2 = MEM_W(ctx->r1, 0X232C);
    // 0x004465A4: beq         $v0, $zero, L_004465B4
    if (ctx->r2 == 0) {
        // 0x004465A8: nop
    
            goto L_004465B4;
    }
    // 0x004465A8: nop

    // 0x004465AC: jalr        $v0
    // 0x004465B0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_2;
    // 0x004465B0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
L_004465B4:
    // 0x004465B4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x004465B8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x004465BC: jr          $ra
    // 0x004465C0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x004465C0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0040EEA0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0040EEA0: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x0040EEA4: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x0040EEA8: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x0040EEAC: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x0040EEB0: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x0040EEB4: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x0040EEB8: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x0040EEBC: jal         0x0021D7BC
    // 0x0040EEC0: addu        $s2, $a2, $zero
    ctx->r18 = ADD32(ctx->r6, 0);
    func_0021D7BC(rdram, ctx);
        goto after_0;
    // 0x0040EEC0: addu        $s2, $a2, $zero
    ctx->r18 = ADD32(ctx->r6, 0);
    after_0:
    // 0x0040EEC4: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // 0x0040EEC8: beq         $v0, $zero, L_0040EF44
    if (ctx->r2 == 0) {
        // 0x0040EECC: nop
    
            goto L_0040EF44;
    }
    // 0x0040EECC: nop

    // 0x0040EED0: lw          $v0, 0x114($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X114);
    // 0x0040EED4: sll         $a0, $v0, 1
    ctx->r4 = S32(ctx->r2 << 1);
    // 0x0040EED8: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x0040EEDC: sll         $a0, $a0, 3
    ctx->r4 = S32(ctx->r4 << 3);
    // 0x0040EEE0: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x0040EEE4: sll         $a0, $a0, 2
    ctx->r4 = S32(ctx->r4 << 2);
    // 0x0040EEE8: addiu       $a0, $a0, 0x3C
    ctx->r4 = ADD32(ctx->r4, 0X3C);
    // 0x0040EEEC: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x0040EEF0: addiu       $v0, $v0, 0x200
    ctx->r2 = ADD32(ctx->r2, 0X200);
    // 0x0040EEF4: jal         0x00236324
    // 0x0040EEF8: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    func_00236324(rdram, ctx);
        goto after_1;
    // 0x0040EEF8: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    after_1:
    // 0x0040EEFC: jal         0x00235898
    // 0x0040EF00: nop

    func_00235898(rdram, ctx);
        goto after_2;
    // 0x0040EF00: nop

    after_2:
    // 0x0040EF04: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0040EF08: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x0040EF0C: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x0040EF10: lb          $v0, 0x151($s1)
    ctx->r2 = MEM_B(ctx->r17, 0X151);
    // 0x0040EF14: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x0040EF18: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x0040EF1C: lw          $a0, 0xC($s2)
    ctx->r4 = MEM_W(ctx->r18, 0XC);
    // 0x0040EF20: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0040EF24: lw          $v0, 0x6D1C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X6D1C);
    // 0x0040EF28: lw          $a1, 0x98($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X98);
    // 0x0040EF2C: sllv        $a3, $v0, $a2
    ctx->r7 = S32(ctx->r2 << (ctx->r6 & 31));
    // 0x0040EF30: addu        $a3, $a3, $v0
    ctx->r7 = ADD32(ctx->r7, ctx->r2);
    // 0x0040EF34: sll         $a3, $a3, 3
    ctx->r7 = S32(ctx->r7 << 3);
    // 0x0040EF38: addiu       $a3, $a3, 0x110
    ctx->r7 = ADD32(ctx->r7, 0X110);
    // 0x0040EF3C: jal         0x0020A33C
    // 0x0040EF40: addu        $a3, $s1, $a3
    ctx->r7 = ADD32(ctx->r17, ctx->r7);
    func_0020A33C(rdram, ctx);
        goto after_3;
    // 0x0040EF40: addu        $a3, $s1, $a3
    ctx->r7 = ADD32(ctx->r17, ctx->r7);
    after_3:
L_0040EF44:
    // 0x0040EF44: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x0040EF48: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x0040EF4C: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x0040EF50: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x0040EF54: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0040EF58: sw          $zero, -0x4750($at)
    MEM_W(-0X4750, ctx->r1) = 0;
    // 0x0040EF5C: jr          $ra
    // 0x0040EF60: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x0040EF60: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_00426A18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00426A18: jr          $ra
    // 0x00426A1C: addiu       $v0, $zero, -0x2
    ctx->r2 = ADD32(0, -0X2);
    return;
    // 0x00426A1C: addiu       $v0, $zero, -0x2
    ctx->r2 = ADD32(0, -0X2);
;}
RECOMP_FUNC void func_002719F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002719F4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x002719F8: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x002719FC: jal         0x00275248
    // 0x00271A00: addiu       $a0, $a0, 0x1D64
    ctx->r4 = ADD32(ctx->r4, 0X1D64);
    func_00275248(rdram, ctx);
        goto after_0;
    // 0x00271A00: addiu       $a0, $a0, 0x1D64
    ctx->r4 = ADD32(ctx->r4, 0X1D64);
    after_0:
    // 0x00271A04: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x00271A08: jr          $ra
    // 0x00271A0C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00271A0C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00402D98(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00402D98: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x00402D9C: sdc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X20, ctx->r29);
    // 0x00402DA0: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00402DA4: lwc1        $f20, 0x354($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X354);
    // 0x00402DA8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00402DAC: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x00402DB0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00402DB4: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x00402DB8: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x00402DBC: lwc1        $f12, 0x54($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X54);
    // 0x00402DC0: jal         0x0021170C
    // 0x00402DC4: mov.s       $f14, $f20
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 20);
    ctx->f14.fl = ctx->f20.fl;
    func_0021170C(rdram, ctx);
        goto after_0;
    // 0x00402DC4: mov.s       $f14, $f20
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 20);
    ctx->f14.fl = ctx->f20.fl;
    after_0:
    // 0x00402DC8: lwc1        $f12, 0x5C($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X5C);
    // 0x00402DCC: mov.s       $f14, $f20
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 20);
    ctx->f14.fl = ctx->f20.fl;
    // 0x00402DD0: jal         0x0021170C
    // 0x00402DD4: swc1        $f0, 0x54($s0)
    MEM_W(0X54, ctx->r16) = ctx->f0.u32l;
    func_0021170C(rdram, ctx);
        goto after_1;
    // 0x00402DD4: swc1        $f0, 0x54($s0)
    MEM_W(0X54, ctx->r16) = ctx->f0.u32l;
    after_1:
    // 0x00402DD8: lb          $v0, 0xC7($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XC7);
    // 0x00402DDC: beq         $v0, $zero, L_00402DF4
    if (ctx->r2 == 0) {
        // 0x00402DE0: swc1        $f0, 0x5C($s0)
        MEM_W(0X5C, ctx->r16) = ctx->f0.u32l;
            goto L_00402DF4;
    }
    // 0x00402DE0: swc1        $f0, 0x5C($s0)
    MEM_W(0X5C, ctx->r16) = ctx->f0.u32l;
    // 0x00402DE4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x00402DE8: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x00402DEC: jal         0x00243414
    // 0x00402DF0: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    func_00243414(rdram, ctx);
        goto after_2;
    // 0x00402DF0: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    after_2:
L_00402DF4:
    // 0x00402DF4: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x00402DF8: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00402DFC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00402E00: ldc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X20);
    // 0x00402E04: jr          $ra
    // 0x00402E08: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x00402E08: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_00268798(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00268798: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x0026879C: sw          $s0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r16;
    // 0x002687A0: sw          $ra, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r31;
    // 0x002687A4: lbu         $v1, 0x0($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X0);
    // 0x002687A8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x002687AC: bne         $v1, $v0, L_002687E0
    if (ctx->r3 != ctx->r2) {
        // 0x002687B0: addu        $s0, $a1, $zero
        ctx->r16 = ADD32(ctx->r5, 0);
            goto L_002687E0;
    }
    // 0x002687B0: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x002687B4: addiu       $a1, $a0, 0x140
    ctx->r5 = ADD32(ctx->r4, 0X140);
    // 0x002687B8: jal         0x0024599C
    // 0x002687BC: addiu       $a2, $sp, 0x10
    ctx->r6 = ADD32(ctx->r29, 0X10);
    func_0024599C(rdram, ctx);
        goto after_0;
    // 0x002687BC: addiu       $a2, $sp, 0x10
    ctx->r6 = ADD32(ctx->r29, 0X10);
    after_0:
    // 0x002687C0: lw          $a3, 0x10($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X10);
    // 0x002687C4: lw          $t0, 0x14($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X14);
    // 0x002687C8: lw          $t1, 0x18($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X18);
    // 0x002687CC: sw          $a3, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r7;
    // 0x002687D0: sw          $t0, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r8;
    // 0x002687D4: sw          $t1, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r9;
    // 0x002687D8: j           L_002687EC
    // 0x002687DC: nop

        goto L_002687EC;
    // 0x002687DC: nop

L_002687E0:
    // 0x002687E0: sw          $zero, 0x0($s0)
    MEM_W(0X0, ctx->r16) = 0;
    // 0x002687E4: sw          $zero, 0x4($s0)
    MEM_W(0X4, ctx->r16) = 0;
    // 0x002687E8: sw          $zero, 0x8($s0)
    MEM_W(0X8, ctx->r16) = 0;
L_002687EC:
    // 0x002687EC: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
    // 0x002687F0: lw          $s0, 0x50($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X50);
    // 0x002687F4: jr          $ra
    // 0x002687F8: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    return;
    // 0x002687F8: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
