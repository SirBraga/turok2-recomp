#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_0029E0A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
;}
RECOMP_FUNC void func_0041BD04(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_0041BD04:
    // 0x0041BD04: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0041BD08: addu        $at, $at, $a1
    ctx->r1 = ADD32(ctx->r1, ctx->r5);
    // 0x0041BD0C: lbu         $v0, 0x5EA4($at)
    ctx->r2 = MEM_BU(ctx->r1, 0X5EA4);
    // 0x0041BD10: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x0041BD14: sb          $v0, 0x33($v1)
    MEM_B(0X33, ctx->r3) = ctx->r2;
    // 0x0041BD18: slti        $v0, $a1, 0x8
    ctx->r2 = SIGNED(ctx->r5) < 0X8 ? 1 : 0;
    // 0x0041BD1C: bne         $v0, $zero, L_0041BD04
    if (ctx->r2 != 0) {
        // 0x0041BD20: addu        $v1, $a0, $a1
        ctx->r3 = ADD32(ctx->r4, ctx->r5);
            goto L_0041BD04;
    }
    // 0x0041BD20: addu        $v1, $a0, $a1
    ctx->r3 = ADD32(ctx->r4, ctx->r5);
    // 0x0041BD24: jr          $ra
    // 0x0041BD28: nop

    return;
    // 0x0041BD28: nop

;}
RECOMP_FUNC void func_002892D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002892D8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x002892DC: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x002892E0: addu        $a2, $a1, $zero
    ctx->r6 = ADD32(ctx->r5, 0);
    // 0x002892E4: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x002892E8: addiu       $v0, $v0, -0x5350
    ctx->r2 = ADD32(ctx->r2, -0X5350);
    // 0x002892EC: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x002892F0: sw          $zero, 0x44($v0)
    MEM_W(0X44, ctx->r2) = 0;
    // 0x002892F4: addiu       $v0, $v0, -0x1D8
    ctx->r2 = ADD32(ctx->r2, -0X1D8);
    // 0x002892F8: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x002892FC: sb          $v1, 0x68($v0)
    MEM_B(0X68, ctx->r2) = ctx->r3;
    // 0x00289300: sb          $zero, 0x19($v0)
    MEM_B(0X19, ctx->r2) = 0;
    // 0x00289304: jal         0x002888BC
    // 0x00289308: sb          $v1, 0x1A($v0)
    MEM_B(0X1A, ctx->r2) = ctx->r3;
    func_002888BC(rdram, ctx);
        goto after_0;
    // 0x00289308: sb          $v1, 0x1A($v0)
    MEM_B(0X1A, ctx->r2) = ctx->r3;
    after_0:
    // 0x0028930C: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x00289310: addiu       $a0, $a0, 0x7078
    ctx->r4 = ADD32(ctx->r4, 0X7078);
    // 0x00289314: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x00289318: jal         0x0042AC0C
    // 0x0028931C: addu        $a2, $a1, $zero
    ctx->r6 = ADD32(ctx->r5, 0);
    func_0042AC0C(rdram, ctx);
        goto after_1;
    // 0x0028931C: addu        $a2, $a1, $zero
    ctx->r6 = ADD32(ctx->r5, 0);
    after_1:
    // 0x00289320: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x00289324: jr          $ra
    // 0x00289328: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00289328: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0021D928(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0021D928: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x0021D92C: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x0021D930: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x0021D934: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x0021D938: addu        $s0, $a2, $zero
    ctx->r16 = ADD32(ctx->r6, 0);
    // 0x0021D93C: addiu       $a3, $s0, 0x18
    ctx->r7 = ADD32(ctx->r16, 0X18);
    // 0x0021D940: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x0021D944: lw          $a0, 0x14($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X14);
    // 0x0021D948: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x0021D94C: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x0021D950: lw          $t0, 0x14($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X14);
    // 0x0021D954: bne         $v0, $v1, L_0021DA00
    if (ctx->r2 != ctx->r3) {
        // 0x0021D958: addiu       $a2, $s0, 0x1C
        ctx->r6 = ADD32(ctx->r16, 0X1C);
            goto L_0021DA00;
    }
    // 0x0021D958: addiu       $a2, $s0, 0x1C
    ctx->r6 = ADD32(ctx->r16, 0X1C);
    // 0x0021D95C: lb          $v1, 0x174($s1)
    ctx->r3 = MEM_B(ctx->r17, 0X174);
    // 0x0021D960: addiu       $v0, $zero, 0x3C
    ctx->r2 = ADD32(0, 0X3C);
    // 0x0021D964: bne         $v1, $v0, L_0021D978
    if (ctx->r3 != ctx->r2) {
        // 0x0021D968: addu        $v0, $v1, $zero
        ctx->r2 = ADD32(ctx->r3, 0);
            goto L_0021D978;
    }
    // 0x0021D968: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
    // 0x0021D96C: lb          $v0, 0x176($s1)
    ctx->r2 = MEM_B(ctx->r17, 0X176);
    // 0x0021D970: j           L_0021D97C
    // 0x0021D974: addiu       $v1, $v0, -0x36
    ctx->r3 = ADD32(ctx->r2, -0X36);
        goto L_0021D97C;
    // 0x0021D974: addiu       $v1, $v0, -0x36
    ctx->r3 = ADD32(ctx->r2, -0X36);
L_0021D978:
    // 0x0021D978: addiu       $v1, $v0, -0x36
    ctx->r3 = ADD32(ctx->r2, -0X36);
L_0021D97C:
    // 0x0021D97C: sltiu       $v0, $v1, 0x6
    ctx->r2 = ctx->r3 < 0X6 ? 1 : 0;
    // 0x0021D980: beq         $v0, $zero, L_0021D9E8
    if (ctx->r2 == 0) {
        // 0x0021D984: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_0021D9E8;
    }
    // 0x0021D984: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x0021D988: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0021D98C: addu        $at, $at, $v0
    gpr jr_addend_0021D994 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x0021D990: lw          $v0, 0x5C30($at)
    ctx->r2 = ADD32(ctx->r1, 0X5C30);
    // 0x0021D994: jr          $v0
    // 0x0021D998: nop

    switch (jr_addend_0021D994 >> 2) {
        case 0: goto L_0021D99C; break;
        case 1: goto L_0021D9A8; break;
        case 2: goto L_0021D9B4; break;
        case 3: goto L_0021D9C0; break;
        case 4: goto L_0021D9CC; break;
        case 5: goto L_0021D9D8; break;
        default: switch_error(__func__, 0x0021D994, 0x800A5C30);
    }
    // 0x0021D998: nop

L_0021D99C:
    // 0x0021D99C: lb          $v0, 0x63($a0)
    ctx->r2 = MEM_B(ctx->r4, 0X63);
    // 0x0021D9A0: j           L_0021D9E0
    // 0x0021D9A4: sw          $v0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r2;
        goto L_0021D9E0;
    // 0x0021D9A4: sw          $v0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r2;
L_0021D9A8:
    // 0x0021D9A8: lb          $v0, 0x64($a0)
    ctx->r2 = MEM_B(ctx->r4, 0X64);
    // 0x0021D9AC: j           L_0021D9E0
    // 0x0021D9B0: sw          $v0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r2;
        goto L_0021D9E0;
    // 0x0021D9B0: sw          $v0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r2;
L_0021D9B4:
    // 0x0021D9B4: lb          $v0, 0x65($a0)
    ctx->r2 = MEM_B(ctx->r4, 0X65);
    // 0x0021D9B8: j           L_0021D9E0
    // 0x0021D9BC: sw          $v0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r2;
        goto L_0021D9E0;
    // 0x0021D9BC: sw          $v0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r2;
L_0021D9C0:
    // 0x0021D9C0: lb          $v0, 0x66($a0)
    ctx->r2 = MEM_B(ctx->r4, 0X66);
    // 0x0021D9C4: j           L_0021D9E0
    // 0x0021D9C8: sw          $v0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r2;
        goto L_0021D9E0;
    // 0x0021D9C8: sw          $v0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r2;
L_0021D9CC:
    // 0x0021D9CC: lb          $v0, 0x67($a0)
    ctx->r2 = MEM_B(ctx->r4, 0X67);
    // 0x0021D9D0: j           L_0021D9E0
    // 0x0021D9D4: sw          $v0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r2;
        goto L_0021D9E0;
    // 0x0021D9D4: sw          $v0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r2;
L_0021D9D8:
    // 0x0021D9D8: lb          $v0, 0x68($a0)
    ctx->r2 = MEM_B(ctx->r4, 0X68);
    // 0x0021D9DC: sw          $v0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r2;
L_0021D9E0:
    // 0x0021D9E0: j           L_0021DA14
    // 0x0021D9E4: sw          $v0, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r2;
        goto L_0021DA14;
    // 0x0021D9E4: sw          $v0, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r2;
L_0021D9E8:
    // 0x0021D9E8: addu        $v0, $t0, $a0
    ctx->r2 = ADD32(ctx->r8, ctx->r4);
    // 0x0021D9EC: lb          $v1, 0xE($v0)
    ctx->r3 = MEM_B(ctx->r2, 0XE);
    // 0x0021D9F0: sw          $v1, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r3;
    // 0x0021D9F4: lb          $v0, 0x10($v0)
    ctx->r2 = MEM_B(ctx->r2, 0X10);
    // 0x0021D9F8: j           L_0021DA14
    // 0x0021D9FC: sw          $v0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r2;
        goto L_0021DA14;
    // 0x0021D9FC: sw          $v0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r2;
L_0021DA00:
    // 0x0021DA00: addu        $v0, $t0, $a0
    ctx->r2 = ADD32(ctx->r8, ctx->r4);
    // 0x0021DA04: lb          $v1, 0xE($v0)
    ctx->r3 = MEM_B(ctx->r2, 0XE);
    // 0x0021DA08: sw          $v1, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->r3;
    // 0x0021DA0C: lb          $v0, 0x10($v0)
    ctx->r2 = MEM_B(ctx->r2, 0X10);
    // 0x0021DA10: sw          $v0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r2;
L_0021DA14:
    // 0x0021DA14: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // 0x0021DA18: beq         $v0, $zero, L_0021DA28
    if (ctx->r2 == 0) {
        // 0x0021DA1C: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_0021DA28;
    }
    // 0x0021DA1C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0021DA20: jal         0x0021DC84
    // 0x0021DA24: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    func_0021DC84(rdram, ctx);
        goto after_0;
    // 0x0021DA24: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    after_0:
L_0021DA28:
    // 0x0021DA28: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x0021DA2C: beq         $v0, $zero, L_0021DA70
    if (ctx->r2 == 0) {
        // 0x0021DA30: addiu       $a2, $zero, 0x1
        ctx->r6 = ADD32(0, 0X1);
            goto L_0021DA70;
    }
    // 0x0021DA30: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x0021DA34: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x0021DA38: lw          $v0, 0x18($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X18);
    // 0x0021DA3C: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x0021DA40: lb          $v0, 0x151($s1)
    ctx->r2 = MEM_B(ctx->r17, 0X151);
    // 0x0021DA44: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x0021DA48: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    // 0x0021DA4C: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0021DA50: lw          $v0, 0x6D1C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X6D1C);
    // 0x0021DA54: lw          $a1, 0x98($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X98);
    // 0x0021DA58: sllv        $a3, $v0, $a2
    ctx->r7 = S32(ctx->r2 << (ctx->r6 & 31));
    // 0x0021DA5C: addu        $a3, $a3, $v0
    ctx->r7 = ADD32(ctx->r7, ctx->r2);
    // 0x0021DA60: sll         $a3, $a3, 3
    ctx->r7 = S32(ctx->r7 << 3);
    // 0x0021DA64: addiu       $a3, $a3, 0x110
    ctx->r7 = ADD32(ctx->r7, 0X110);
    // 0x0021DA68: jal         0x0020A33C
    // 0x0021DA6C: addu        $a3, $s1, $a3
    ctx->r7 = ADD32(ctx->r17, ctx->r7);
    func_0020A33C(rdram, ctx);
        goto after_1;
    // 0x0021DA6C: addu        $a3, $s1, $a3
    ctx->r7 = ADD32(ctx->r17, ctx->r7);
    after_1:
L_0021DA70:
    // 0x0021DA70: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x0021DA74: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x0021DA78: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x0021DA7C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0021DA80: sw          $zero, -0x4750($at)
    MEM_W(-0X4750, ctx->r1) = 0;
    // 0x0021DA84: jr          $ra
    // 0x0021DA88: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x0021DA88: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_002A3100(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002A3100: addi        $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x002A3104: sw          $ra, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r31;
    // 0x002A3108: lui         $t0, 0x2A
    ctx->r8 = S32(0X2A << 16);
    // 0x002A310C: addiu       $t0, $t0, 0x3090
    ctx->r8 = ADD32(ctx->r8, 0X3090);
    // 0x002A3110: lui         $t1, 0x2A
    ctx->r9 = S32(0X2A << 16);
    // 0x002A3114: addiu       $t1, $t1, 0x30A4
    ctx->r9 = ADD32(ctx->r9, 0X30A4);
    // 0x002A3118: lui         $t2, 0x8000
    ctx->r10 = S32(0X8000 << 16);
    // 0x002A311C: ori         $t2, $t2, 0x180
    ctx->r10 = ctx->r10 | 0X180;
    // 0x002A3120: lui         $t3, 0x2A
    ctx->r11 = S32(0X2A << 16);
    // 0x002A3124: addiu       $t3, $t3, 0x30A4
    ctx->r11 = ADD32(ctx->r11, 0X30A4);
L_002A3128:
    // 0x002A3128: lw          $t4, 0x0($t2)
    ctx->r12 = MEM_W(ctx->r10, 0X0);
    // 0x002A312C: lw          $t5, 0x0($t0)
    ctx->r13 = MEM_W(ctx->r8, 0X0);
    // 0x002A3130: addiu       $t0, $t0, 0x4
    ctx->r8 = ADD32(ctx->r8, 0X4);
    // 0x002A3134: sw          $t4, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r12;
    // 0x002A3138: addiu       $t1, $t1, 0x4
    ctx->r9 = ADD32(ctx->r9, 0X4);
    // 0x002A313C: sw          $t5, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r13;
    // 0x002A3140: bne         $t0, $t3, L_002A3128
    if (ctx->r8 != ctx->r11) {
        // 0x002A3144: addiu       $t2, $t2, 0x4
        ctx->r10 = ADD32(ctx->r10, 0X4);
            goto L_002A3128;
    }
    // 0x002A3144: addiu       $t2, $t2, 0x4
    ctx->r10 = ADD32(ctx->r10, 0X4);
    // 0x002A3148: lui         $t0, 0x2A
    ctx->r8 = S32(0X2A << 16);
    // 0x002A314C: addiu       $t0, $t0, 0x30C8
    ctx->r8 = ADD32(ctx->r8, 0X30C8);
    // 0x002A3150: lui         $t1, 0x2A
    ctx->r9 = S32(0X2A << 16);
    // 0x002A3154: addiu       $t1, $t1, 0x30DC
    ctx->r9 = ADD32(ctx->r9, 0X30DC);
    // 0x002A3158: lui         $t2, 0x8000
    ctx->r10 = S32(0X8000 << 16);
    // 0x002A315C: lui         $t3, 0x2A
    ctx->r11 = S32(0X2A << 16);
    // 0x002A3160: addiu       $t3, $t3, 0x30DC
    ctx->r11 = ADD32(ctx->r11, 0X30DC);
L_002A3164:
    // 0x002A3164: lw          $t4, 0x0($t2)
    ctx->r12 = MEM_W(ctx->r10, 0X0);
    // 0x002A3168: lw          $t5, 0x0($t0)
    ctx->r13 = MEM_W(ctx->r8, 0X0);
    // 0x002A316C: addiu       $t0, $t0, 0x4
    ctx->r8 = ADD32(ctx->r8, 0X4);
    // 0x002A3170: sw          $t4, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r12;
    // 0x002A3174: addiu       $t1, $t1, 0x4
    ctx->r9 = ADD32(ctx->r9, 0X4);
    // 0x002A3178: sw          $t5, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r13;
    // 0x002A317C: bne         $t0, $t3, L_002A3164
    if (ctx->r8 != ctx->r11) {
        // 0x002A3180: addiu       $t2, $t2, 0x4
        ctx->r10 = ADD32(ctx->r10, 0X4);
            goto L_002A3164;
    }
    // 0x002A3180: addiu       $t2, $t2, 0x4
    ctx->r10 = ADD32(ctx->r10, 0X4);
    // 0x002A3184: jal         0x002A31AC
    // 0x002A3188: nop

    func_002A31AC(rdram, ctx);
        goto after_0;
    // 0x002A3188: nop

    after_0:
    // 0x002A318C: jal         0x002A31C8
    // 0x002A3190: nop

    func_002A31C8(rdram, ctx);
        goto after_1;
    // 0x002A3190: nop

    after_1:
    // 0x002A3194: addiu       $t0, $zero, -0x802
    ctx->r8 = ADD32(0, -0X802);
    // 0x002A3198: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x002A319C: sw          $t0, -0x7768($at)
    MEM_W(-0X7768, ctx->r1) = ctx->r8;
    // 0x002A31A0: lw          $ra, 0x0($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X0);
    // 0x002A31A4: jr          $ra
    // 0x002A31A8: addi        $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x002A31A8: addi        $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_0044B548(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_004125F8:
    // 0x0044B548: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
L_00412640:
    // 0x0044B54C: lw          $v0, 0x1BB8($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1BB8);
    // 0x0044B550: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x0044B554: sw          $s4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r20;
    // 0x0044B558: addu        $s4, $a0, $zero
    ctx->r20 = ADD32(ctx->r4, 0);
    // 0x0044B55C: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x0044B560: sw          $s3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r19;
    // 0x0044B564: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x0044B568: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x0044B56C: beq         $v0, $zero, L_0044B64C
    if (ctx->r2 == 0) {
        // 0x0044B570: sw          $s0, 0x28($sp)
        MEM_W(0X28, ctx->r29) = ctx->r16;
            goto L_0044B64C;
    }
    // 0x0044B570: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x0044B574: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x0044B578: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x0044B57C: lw          $a0, 0x70D8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X70D8);
    // 0x0044B580: lui         $a1, 0x800F
    ctx->r5 = S32(0X800F << 16);
    // 0x0044B584: lw          $a1, 0x709C($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X709C);
    // 0x0044B588: jal         0x0020185C
    // 0x0044B58C: addiu       $a3, $sp, 0x20
    ctx->r7 = ADD32(ctx->r29, 0X20);
    func_0020185C(rdram, ctx);
        goto after_0;
    // 0x0044B58C: addiu       $a3, $sp, 0x20
    ctx->r7 = ADD32(ctx->r29, 0X20);
    after_0:
    // 0x0044B590: bne         $v0, $zero, L_0044B5C8
    if (ctx->r2 != 0) {
        // 0x0044B594: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_0044B5C8;
    }
    // 0x0044B594: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0044B598: j           L_004125F8
    // 0x0044B59C: addu        $s3, $zero, $zero
    ctx->r19 = ADD32(0, 0);
    entry_004125F8(rdram, ctx);
    return;
    // 0x0044B59C: addu        $s3, $zero, $zero
    ctx->r19 = ADD32(0, 0);
L_0044B5A0:
    // 0x0044B5A0: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x0044B5A4: lw          $v1, 0x1BB0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X1BB0);
    // 0x0044B5A8: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
    // 0x0044B5AC: sw          $v0, 0xE0($v1)
    MEM_W(0XE0, ctx->r3) = ctx->r2;
    // 0x0044B5B0: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x0044B5B4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0044B5B8: sw          $s1, 0xDC($v1)
    MEM_W(0XDC, ctx->r3) = ctx->r17;
    // 0x0044B5BC: sw          $v0, 0x58($v1)
    MEM_W(0X58, ctx->r3) = ctx->r2;
    // 0x0044B5C0: j           L_00412640
    // 0x0044B5C4: sw          $a0, 0xD8($v1)
    MEM_W(0XD8, ctx->r3) = ctx->r4;
    entry_00412640(rdram, ctx);
    return;
    // 0x0044B5C4: sw          $a0, 0xD8($v1)
    MEM_W(0XD8, ctx->r3) = ctx->r4;
L_0044B5C8:
    // 0x0044B5C8: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x0044B5CC: addiu       $a3, $zero, 0x13
    ctx->r7 = ADD32(0, 0X13);
    // 0x0044B5D0: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    // 0x0044B5D4: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x0044B5D8: addiu       $v0, $v0, 0x970
    ctx->r2 = ADD32(ctx->r2, 0X970);
    // 0x0044B5DC: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x0044B5E0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0044B5E4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x0044B5E8: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x0044B5EC: jal         0x0020367C
    // 0x0044B5F0: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    func_0020367C(rdram, ctx);
        goto after_1;
    // 0x0044B5F0: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    after_1:
    // 0x0044B5F4: addu        $s3, $v0, $zero
    ctx->r19 = ADD32(ctx->r2, 0);
    // 0x0044B5F8: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x0044B5FC: lui         $v0, 0x800F
    ctx->r2 = S32(0X800F << 16);
    // 0x0044B600: lw          $v0, 0x70D8($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X70D8);
    // 0x0044B604: lw          $v1, 0x0($s3)
    ctx->r3 = MEM_W(ctx->r19, 0X0);
    // 0x0044B608: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x0044B60C: addiu       $s2, $v0, -0x1
    ctx->r18 = ADD32(ctx->r2, -0X1);
    // 0x0044B610: blez        $s2, L_0044B640
    if (SIGNED(ctx->r18) <= 0) {
        // 0x0044B614: addiu       $v1, $v1, 0x8
        ctx->r3 = ADD32(ctx->r3, 0X8);
            goto L_0044B640;
    }
    // 0x0044B614: addiu       $v1, $v1, 0x8
    ctx->r3 = ADD32(ctx->r3, 0X8);
    // 0x0044B618: addu        $s0, $v1, $zero
    ctx->r16 = ADD32(ctx->r3, 0);
L_0044B61C:
    // 0x0044B61C: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    // 0x0044B620: jal         0x00288780
    // 0x0044B624: addiu       $a1, $s0, 0x18
    ctx->r5 = ADD32(ctx->r16, 0X18);
    func_00288780(rdram, ctx);
        goto after_2;
    // 0x0044B624: addiu       $a1, $s0, 0x18
    ctx->r5 = ADD32(ctx->r16, 0X18);
    after_2:
    // 0x0044B628: beq         $v0, $zero, L_0044B5A0
    if (ctx->r2 == 0) {
        // 0x0044B62C: nop
    
            goto L_0044B5A0;
    }
    // 0x0044B62C: nop

    // 0x0044B630: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x0044B634: slt         $v0, $s1, $s2
    ctx->r2 = SIGNED(ctx->r17) < SIGNED(ctx->r18) ? 1 : 0;
    // 0x0044B638: bne         $v0, $zero, L_0044B61C
    if (ctx->r2 != 0) {
        // 0x0044B63C: addiu       $s0, $s0, 0x4C
        ctx->r16 = ADD32(ctx->r16, 0X4C);
            goto L_0044B61C;
    }
    // 0x0044B63C: addiu       $s0, $s0, 0x4C
    ctx->r16 = ADD32(ctx->r16, 0X4C);
L_0044B640:
    // 0x0044B640: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0044B644: jal         0x002051F4
    // 0x0044B648: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    func_002051F4(rdram, ctx);
        goto after_3;
    // 0x0044B648: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    after_3:
L_0044B64C:
    // 0x0044B64C: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x0044B650: lw          $s4, 0x38($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X38);
    // 0x0044B654: lw          $s3, 0x34($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X34);
    // 0x0044B658: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x0044B65C: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x0044B660: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x0044B664: jr          $ra
    // 0x0044B668: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x0044B668: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_00405E04(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00405E04: addiu       $sp, $sp, -0xB8
    ctx->r29 = ADD32(ctx->r29, -0XB8);
    // 0x00405E08: sw          $s2, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->r18;
    // 0x00405E0C: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x00405E10: sw          $s1, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r17;
    // 0x00405E14: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x00405E18: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    // 0x00405E1C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x00405E20: sw          $s0, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r16;
    // 0x00405E24: lui         $s0, 0x800F
    ctx->r16 = S32(0X800F << 16);
    // 0x00405E28: addiu       $s0, $s0, 0x1F50
    ctx->r16 = ADD32(ctx->r16, 0X1F50);
    // 0x00405E2C: sw          $ra, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->r31;
    // 0x00405E30: sdc1        $f20, 0xB0($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0XB0, ctx->r29);
    // 0x00405E34: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x00405E38: addu        $v1, $a3, $zero
    ctx->r3 = ADD32(ctx->r7, 0);
    // 0x00405E3C: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    // 0x00405E40: ori         $v0, $v0, 0x8000
    ctx->r2 = ctx->r2 | 0X8000;
    // 0x00405E44: jal         0x00246108
    // 0x00405E48: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    func_00246108(rdram, ctx);
        goto after_0;
    // 0x00405E48: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    after_0:
    // 0x00405E4C: lui         $a0, 0xFFFF
    ctx->r4 = S32(0XFFFF << 16);
    // 0x00405E50: ori         $a0, $a0, 0x7FFF
    ctx->r4 = ctx->r4 | 0X7FFF;
    // 0x00405E54: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x00405E58: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x00405E5C: and         $v0, $v0, $a0
    ctx->r2 = ctx->r2 & ctx->r4;
    // 0x00405E60: bne         $v1, $zero, L_00405E90
    if (ctx->r3 != 0) {
        // 0x00405E64: sw          $v0, 0x0($s0)
        MEM_W(0X0, ctx->r16) = ctx->r2;
            goto L_00405E90;
    }
    // 0x00405E64: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x00405E68: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x00405E6C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x00405E70: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00405E74: lwc1        $f0, 0x494($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X494);
    // 0x00405E78: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x00405E7C: swc1        $f0, 0x1FC($a0)
    MEM_W(0X1FC, ctx->r4) = ctx->f0.u32l;
    // 0x00405E80: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x00405E84: sw          $v0, -0x624($at)
    MEM_W(-0X624, ctx->r1) = ctx->r2;
    // 0x00405E88: j           L_00405FDC
    // 0x00405E8C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
        goto L_00405FDC;
    // 0x00405E8C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
L_00405E90:
    // 0x00405E90: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x00405E94: lui         $a2, 0x3E86
    ctx->r6 = S32(0X3E86 << 16);
    // 0x00405E98: ori         $a2, $a2, 0xA93
    ctx->r6 = ctx->r6 | 0XA93;
    // 0x00405E9C: lw          $a3, 0x20($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X20);
    // 0x00405EA0: jal         0x00245BAC
    // 0x00405EA4: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_00245BAC(rdram, ctx);
        goto after_1;
    // 0x00405EA4: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_1:
    // 0x00405EA8: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x00405EAC: addiu       $v1, $v1, -0x61F
    ctx->r3 = ADD32(ctx->r3, -0X61F);
    // 0x00405EB0: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x00405EB4: beq         $v0, $zero, L_00405FE4
    if (ctx->r2 == 0) {
        // 0x00405EB8: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_00405FE4;
    }
    // 0x00405EB8: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x00405EBC: lw          $a0, 0x23($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X23);
    // 0x00405EC0: bnel        $a0, $v0, L_00405F98
    if (ctx->r4 != ctx->r2) {
        // 0x00405EC4: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_00405F98;
    }
    goto skip_0;
    // 0x00405EC4: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    skip_0:
    // 0x00405EC8: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x00405ECC: lw          $v1, -0x600($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X600);
    // 0x00405ED0: beq         $v1, $a0, L_00405F00
    if (ctx->r3 == ctx->r4) {
        // 0x00405ED4: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_00405F00;
    }
    // 0x00405ED4: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x00405ED8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x00405EDC: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x00405EE0: lw          $v1, -0x604($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X604);
    // 0x00405EE4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x00405EE8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x00405EEC: lwc1        $f0, 0x10($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X10);
    // 0x00405EF0: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x00405EF4: swc1        $f0, -0x608($at)
    MEM_W(-0X608, ctx->r1) = ctx->f0.u32l;
    // 0x00405EF8: j           L_00405F0C
    // 0x00405EFC: addiu       $s0, $zero, 0x5
    ctx->r16 = ADD32(0, 0X5);
        goto L_00405F0C;
    // 0x00405EFC: addiu       $s0, $zero, 0x5
    ctx->r16 = ADD32(0, 0X5);
L_00405F00:
    // 0x00405F00: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x00405F04: sw          $zero, -0x608($at)
    MEM_W(-0X608, ctx->r1) = 0;
    // 0x00405F08: addiu       $s0, $zero, 0x5
    ctx->r16 = ADD32(0, 0X5);
L_00405F0C:
    // 0x00405F0C: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x00405F10: lw          $v0, -0x600($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X600);
    // 0x00405F14: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x00405F18: lw          $a0, -0x604($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X604);
    // 0x00405F1C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x00405F20: sll         $v1, $v0, 2
    ctx->r3 = S32(ctx->r2 << 2);
    // 0x00405F24: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x00405F28: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x00405F2C: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x00405F30: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x00405F34: sw          $v0, -0x600($at)
    MEM_W(-0X600, ctx->r1) = ctx->r2;
    // 0x00405F38: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x00405F3C: bne         $v0, $s0, L_00405F4C
    if (ctx->r2 != ctx->r16) {
        // 0x00405F40: nop
    
            goto L_00405F4C;
    }
    // 0x00405F40: nop

    // 0x00405F44: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x00405F48: sw          $zero, -0x600($at)
    MEM_W(-0X600, ctx->r1) = 0;
L_00405F4C:
    // 0x00405F4C: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x00405F50: lw          $v0, -0x600($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X600);
    // 0x00405F54: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x00405F58: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00405F5C: lwc1        $f14, 0x498($at)
    ctx->f14.u32l = MEM_W(ctx->r1, 0X498);
    // 0x00405F60: sll         $v1, $v0, 2
    ctx->r3 = S32(ctx->r2 << 2);
    // 0x00405F64: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x00405F68: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x00405F6C: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x00405F70: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x00405F74: sw          $v0, -0x5FC($at)
    MEM_W(-0X5FC, ctx->r1) = ctx->r2;
    // 0x00405F78: lwc1        $f20, 0xC($v1)
    ctx->f20.u32l = MEM_W(ctx->r3, 0XC);
    // 0x00405F7C: cvt.s.w     $f20, $f20
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    ctx->f20.fl = CVT_S_W(ctx->f20.u32l);
    // 0x00405F80: jal         0x002119FC
    // 0x00405F84: nop

    func_002119FC(rdram, ctx);
        goto after_2;
    // 0x00405F84: nop

    after_2:
    // 0x00405F88: c.le.s      $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f20.fl <= ctx->f0.fl;
    // 0x00405F8C: nop

    // 0x00405F90: bc1t        L_00405F0C
    if (c1cs) {
        // 0x00405F94: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_00405F0C;
    }
    // 0x00405F94: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
L_00405F98:
    // 0x00405F98: lw          $a2, 0x3C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X3C);
    // 0x00405F9C: jal         0x00404C44
    // 0x00405FA0: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_00404C44(rdram, ctx);
        goto after_3;
    // 0x00405FA0: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_3:
    // 0x00405FA4: bne         $v0, $zero, L_00405FE4
    if (ctx->r2 != 0) {
        // 0x00405FA8: nop
    
            goto L_00405FE4;
    }
    // 0x00405FA8: nop

    // 0x00405FAC: lwc1        $f1, 0x3C($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X3C);
    // 0x00405FB0: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00405FB4: lwc1        $f0, 0x49C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X49C);
    // 0x00405FB8: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x00405FBC: nop

    // 0x00405FC0: bc1f        L_00405FE4
    if (!c1cs) {
        // 0x00405FC4: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_00405FE4;
    }
    // 0x00405FC4: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x00405FC8: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x00405FCC: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00405FD0: lwc1        $f0, 0x4A0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X4A0);
    // 0x00405FD4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x00405FD8: swc1        $f0, 0x1FC($a0)
    MEM_W(0X1FC, ctx->r4) = ctx->f0.u32l;
L_00405FDC:
    // 0x00405FDC: jal         0x00243414
    // 0x00405FE0: nop

    func_00243414(rdram, ctx);
        goto after_4;
    // 0x00405FE0: nop

    after_4:
L_00405FE4:
    // 0x00405FE4: lw          $ra, 0xAC($sp)
    ctx->r31 = MEM_W(ctx->r29, 0XAC);
    // 0x00405FE8: lw          $s2, 0xA8($sp)
    ctx->r18 = MEM_W(ctx->r29, 0XA8);
    // 0x00405FEC: lw          $s1, 0xA4($sp)
    ctx->r17 = MEM_W(ctx->r29, 0XA4);
    // 0x00405FF0: lw          $s0, 0xA0($sp)
    ctx->r16 = MEM_W(ctx->r29, 0XA0);
    // 0x00405FF4: ldc1        $f20, 0xB0($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0XB0);
    // 0x00405FF8: jr          $ra
    // 0x00405FFC: addiu       $sp, $sp, 0xB8
    ctx->r29 = ADD32(ctx->r29, 0XB8);
    return;
    // 0x00405FFC: addiu       $sp, $sp, 0xB8
    ctx->r29 = ADD32(ctx->r29, 0XB8);
;}
RECOMP_FUNC void func_0045A5A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0045A5A8: jr          $ra
    // 0x0045A5AC: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x0045A5AC: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void func_00291270(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00291270: blez        $a2, L_00291294
    if (SIGNED(ctx->r6) <= 0) {
        // 0x00291274: addu        $v1, $zero, $zero
        ctx->r3 = ADD32(0, 0);
            goto L_00291294;
    }
    // 0x00291274: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
L_00291278:
    // 0x00291278: lbu         $v0, 0x0($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X0);
    // 0x0029127C: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x00291280: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x00291284: sb          $v0, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r2;
    // 0x00291288: slt         $v0, $v1, $a2
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r6) ? 1 : 0;
    // 0x0029128C: bne         $v0, $zero, L_00291278
    if (ctx->r2 != 0) {
        // 0x00291290: addiu       $a1, $a1, 0x1
        ctx->r5 = ADD32(ctx->r5, 0X1);
            goto L_00291278;
    }
    // 0x00291290: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
L_00291294:
    // 0x00291294: jr          $ra
    // 0x00291298: nop

    return;
    // 0x00291298: nop

;}
RECOMP_FUNC void func_00421A54(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00421A54: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x00421A58: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x00421A5C: addu        $s2, $a1, $zero
    ctx->r18 = ADD32(ctx->r5, 0);
    // 0x00421A60: sw          $s3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r19;
    // 0x00421A64: addu        $s3, $a2, $zero
    ctx->r19 = ADD32(ctx->r6, 0);
    // 0x00421A68: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x00421A6C: addu        $s1, $a3, $zero
    ctx->r17 = ADD32(ctx->r7, 0);
    // 0x00421A70: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x00421A74: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x00421A78: sw          $ra, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r31;
    // 0x00421A7C: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
L_00421A80:
    // 0x00421A80: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x00421A84: jal         0x00426978
    // 0x00421A88: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    func_00426978(rdram, ctx);
        goto after_0;
    // 0x00421A88: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    after_0:
    // 0x00421A8C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x00421A90: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x00421A94: jal         0x00426C88
    // 0x00421A98: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    func_00426C88(rdram, ctx);
        goto after_1;
    // 0x00421A98: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_1:
    // 0x00421A9C: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x00421AA0: jal         0x00426D54
    // 0x00421AA4: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    func_00426D54(rdram, ctx);
        goto after_2;
    // 0x00421AA4: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    after_2:
    // 0x00421AA8: bnel        $v0, $zero, L_00421AC0
    if (ctx->r2 != 0) {
        // 0x00421AAC: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_00421AC0;
    }
    goto skip_0;
    // 0x00421AAC: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    skip_0:
    // 0x00421AB0: bnel        $s1, $zero, L_00421AB8
    if (ctx->r17 != 0) {
        // 0x00421AB4: sw          $s0, 0x0($s1)
        MEM_W(0X0, ctx->r17) = ctx->r16;
            goto L_00421AB8;
    }
    goto skip_1;
    // 0x00421AB4: sw          $s0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r16;
    skip_1:
L_00421AB8:
    // 0x00421AB8: j           L_00421AD0
    // 0x00421ABC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_00421AD0;
    // 0x00421ABC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_00421AC0:
    // 0x00421AC0: slti        $v0, $s0, 0x10
    ctx->r2 = SIGNED(ctx->r16) < 0X10 ? 1 : 0;
    // 0x00421AC4: bne         $v0, $zero, L_00421A80
    if (ctx->r2 != 0) {
        // 0x00421AC8: addu        $a0, $s3, $zero
        ctx->r4 = ADD32(ctx->r19, 0);
            goto L_00421A80;
    }
    // 0x00421AC8: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x00421ACC: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_00421AD0:
    // 0x00421AD0: lw          $ra, 0x38($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X38);
    // 0x00421AD4: lw          $s3, 0x34($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X34);
    // 0x00421AD8: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x00421ADC: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x00421AE0: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x00421AE4: jr          $ra
    // 0x00421AE8: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x00421AE8: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_0040D3A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0040D3A8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0040D3AC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x0040D3B0: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x0040D3B4: lw          $v0, 0x2C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X2C);
    // 0x0040D3B8: blez        $v0, L_0040D3F0
    if (SIGNED(ctx->r2) <= 0) {
        // 0x0040D3BC: addu        $v1, $zero, $zero
        ctx->r3 = ADD32(0, 0);
            goto L_0040D3F0;
    }
    // 0x0040D3BC: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
    // 0x0040D3C0: addu        $a3, $v0, $zero
    ctx->r7 = ADD32(ctx->r2, 0);
    // 0x0040D3C4: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
L_0040D3C8:
    // 0x0040D3C8: lw          $v0, 0x30($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X30);
    // 0x0040D3CC: lw          $v0, 0xD4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0XD4);
    // 0x0040D3D0: andi        $v0, $v0, 0x100
    ctx->r2 = ctx->r2 & 0X100;
    // 0x0040D3D4: beql        $v0, $zero, L_0040D3E4
    if (ctx->r2 == 0) {
        // 0x0040D3D8: addiu       $v1, $v1, 0x1
        ctx->r3 = ADD32(ctx->r3, 0X1);
            goto L_0040D3E4;
    }
    goto skip_0;
    // 0x0040D3D8: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    skip_0:
    // 0x0040D3DC: j           L_0040D3F0
    // 0x0040D3E0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
        goto L_0040D3F0;
    // 0x0040D3E0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
L_0040D3E4:
    // 0x0040D3E4: slt         $v0, $v1, $a3
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r7) ? 1 : 0;
    // 0x0040D3E8: bne         $v0, $zero, L_0040D3C8
    if (ctx->r2 != 0) {
        // 0x0040D3EC: addiu       $a1, $a1, 0x4
        ctx->r5 = ADD32(ctx->r5, 0X4);
            goto L_0040D3C8;
    }
    // 0x0040D3EC: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
L_0040D3F0:
    // 0x0040D3F0: beq         $a2, $zero, L_0040D4BC
    if (ctx->r6 == 0) {
        // 0x0040D3F4: nop
    
            goto L_0040D4BC;
    }
    // 0x0040D3F4: nop

    // 0x0040D3F8: lw          $v0, 0x4F8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X4F8);
    // 0x0040D3FC: addiu       $v1, $v0, 0xC
    ctx->r3 = ADD32(ctx->r2, 0XC);
    // 0x0040D400: sw          $v1, 0x4F8($a0)
    MEM_W(0X4F8, ctx->r4) = ctx->r3;
    // 0x0040D404: lw          $a2, 0xC($v0)
    ctx->r6 = MEM_W(ctx->r2, 0XC);
    // 0x0040D408: lw          $v0, 0x4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X4);
    // 0x0040D40C: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
    // 0x0040D410: sw          $zero, 0x518($a0)
    MEM_W(0X518, ctx->r4) = 0;
    // 0x0040D414: sw          $zero, 0x530($a0)
    MEM_W(0X530, ctx->r4) = 0;
    // 0x0040D418: blez        $v0, L_0040D440
    if (SIGNED(ctx->r2) <= 0) {
        // 0x0040D41C: sw          $zero, 0x548($a0)
        MEM_W(0X548, ctx->r4) = 0;
            goto L_0040D440;
    }
    // 0x0040D41C: sw          $zero, 0x548($a0)
    MEM_W(0X548, ctx->r4) = 0;
    // 0x0040D420: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
L_0040D424:
    // 0x0040D424: lw          $v0, 0x8($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X8);
    // 0x0040D428: sw          $zero, 0x24C($v0)
    MEM_W(0X24C, ctx->r2) = 0;
    // 0x0040D42C: lw          $v0, 0x4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X4);
    // 0x0040D430: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x0040D434: slt         $v0, $v1, $v0
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x0040D438: bne         $v0, $zero, L_0040D424
    if (ctx->r2 != 0) {
        // 0x0040D43C: addiu       $a1, $a1, 0x4
        ctx->r5 = ADD32(ctx->r5, 0X4);
            goto L_0040D424;
    }
    // 0x0040D43C: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
L_0040D440:
    // 0x0040D440: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x0040D444: blez        $v0, L_0040D46C
    if (SIGNED(ctx->r2) <= 0) {
        // 0x0040D448: addu        $v1, $zero, $zero
        ctx->r3 = ADD32(0, 0);
            goto L_0040D46C;
    }
    // 0x0040D448: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
    // 0x0040D44C: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
L_0040D450:
    // 0x0040D450: lw          $v0, 0x1C($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X1C);
    // 0x0040D454: sw          $zero, 0x24C($v0)
    MEM_W(0X24C, ctx->r2) = 0;
    // 0x0040D458: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x0040D45C: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x0040D460: slt         $v0, $v1, $v0
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x0040D464: bne         $v0, $zero, L_0040D450
    if (ctx->r2 != 0) {
        // 0x0040D468: addiu       $a1, $a1, 0x4
        ctx->r5 = ADD32(ctx->r5, 0X4);
            goto L_0040D450;
    }
    // 0x0040D468: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
L_0040D46C:
    // 0x0040D46C: lw          $v0, 0x2C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X2C);
    // 0x0040D470: blez        $v0, L_0040D498
    if (SIGNED(ctx->r2) <= 0) {
        // 0x0040D474: addu        $v1, $zero, $zero
        ctx->r3 = ADD32(0, 0);
            goto L_0040D498;
    }
    // 0x0040D474: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
    // 0x0040D478: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
L_0040D47C:
    // 0x0040D47C: lw          $v0, 0x30($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X30);
    // 0x0040D480: sw          $zero, 0x24C($v0)
    MEM_W(0X24C, ctx->r2) = 0;
    // 0x0040D484: lw          $v0, 0x2C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X2C);
    // 0x0040D488: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x0040D48C: slt         $v0, $v1, $v0
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x0040D490: bne         $v0, $zero, L_0040D47C
    if (ctx->r2 != 0) {
        // 0x0040D494: addiu       $a1, $a1, 0x4
        ctx->r5 = ADD32(ctx->r5, 0X4);
            goto L_0040D47C;
    }
    // 0x0040D494: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
L_0040D498:
    // 0x0040D498: sll         $v0, $a2, 3
    ctx->r2 = S32(ctx->r6 << 3);
    // 0x0040D49C: sw          $a2, 0x4FC($a0)
    MEM_W(0X4FC, ctx->r4) = ctx->r6;
    // 0x0040D4A0: lui         $at, 0x43
    ctx->r1 = S32(0X43 << 16);
    // 0x0040D4A4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x0040D4A8: lw          $v0, 0x240C($at)
    ctx->r2 = MEM_W(ctx->r1, 0X240C);
    // 0x0040D4AC: beq         $v0, $zero, L_0040D4BC
    if (ctx->r2 == 0) {
        // 0x0040D4B0: nop
    
            goto L_0040D4BC;
    }
    // 0x0040D4B0: nop

    // 0x0040D4B4: jalr        $v0
    // 0x0040D4B8: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x0040D4B8: nop

    after_0:
L_0040D4BC:
    // 0x0040D4BC: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x0040D4C0: jr          $ra
    // 0x0040D4C4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0040D4C4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_002393D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002393D0: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x002393D4: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x002393D8: addu        $s2, $a1, $zero
    ctx->r18 = ADD32(ctx->r5, 0);
    // 0x002393DC: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x002393E0: addiu       $v0, $v0, -0x76B4
    ctx->r2 = ADD32(ctx->r2, -0X76B4);
    // 0x002393E4: addiu       $t0, $sp, 0x30
    ctx->r8 = ADD32(ctx->r29, 0X30);
    // 0x002393E8: sltu        $v0, $t0, $v0
    ctx->r2 = ctx->r8 < ctx->r2 ? 1 : 0;
    // 0x002393EC: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x002393F0: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x002393F4: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x002393F8: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x002393FC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x00239400: bne         $v0, $zero, L_002399D8
    if (ctx->r2 != 0) {
        // 0x00239404: sw          $a0, 0x30($sp)
        MEM_W(0X30, ctx->r29) = ctx->r4;
            goto L_002399D8;
    }
    // 0x00239404: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x00239408: lui         $v1, 0x800F
    ctx->r3 = S32(0X800F << 16);
    // 0x0023940C: lw          $v1, 0x1A48($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X1A48);
    // 0x00239410: lw          $v0, 0x998($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X998);
    // 0x00239414: slti        $v0, $v0, 0x96
    ctx->r2 = SIGNED(ctx->r2) < 0X96 ? 1 : 0;
    // 0x00239418: beq         $v0, $zero, L_002399D8
    if (ctx->r2 == 0) {
        // 0x0023941C: nop
    
            goto L_002399D8;
    }
    // 0x0023941C: nop

    // 0x00239420: lw          $v0, 0x4($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X4);
    // 0x00239424: lwc1        $f0, 0x24($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X24);
    // 0x00239428: lwc1        $f1, 0x0($v0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r2, 0X0);
    // 0x0023942C: c.le.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl <= ctx->f1.fl;
    // 0x00239430: nop

    // 0x00239434: bc1f        L_0023947C
    if (!c1cs) {
        // 0x00239438: nop
    
            goto L_0023947C;
    }
    // 0x00239438: nop

    // 0x0023943C: lwc1        $f0, 0x2C($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X2C);
    // 0x00239440: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x00239444: nop

    // 0x00239448: bc1f        L_0023947C
    if (!c1cs) {
        // 0x0023944C: nop
    
            goto L_0023947C;
    }
    // 0x0023944C: nop

    // 0x00239450: lwc1        $f1, 0x8($v0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r2, 0X8);
    // 0x00239454: lwc1        $f0, 0x28($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X28);
    // 0x00239458: c.le.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl <= ctx->f1.fl;
    // 0x0023945C: nop

    // 0x00239460: bc1f        L_0023947C
    if (!c1cs) {
        // 0x00239464: nop
    
            goto L_0023947C;
    }
    // 0x00239464: nop

    // 0x00239468: lwc1        $f0, 0x30($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X30);
    // 0x0023946C: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x00239470: nop

    // 0x00239474: bc1t        L_00239544
    if (c1cs) {
        // 0x00239478: nop
    
            goto L_00239544;
    }
    // 0x00239478: nop

L_0023947C:
    // 0x0023947C: lw          $v1, 0x8($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X8);
    // 0x00239480: lui         $v0, 0x800F
    ctx->r2 = S32(0X800F << 16);
    // 0x00239484: lw          $v0, 0x1A48($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1A48);
    // 0x00239488: lwc1        $f1, 0x0($v1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r3, 0X0);
    // 0x0023948C: lwc1        $f0, 0x24($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X24);
    // 0x00239490: c.le.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl <= ctx->f1.fl;
    // 0x00239494: nop

    // 0x00239498: bc1f        L_002394E0
    if (!c1cs) {
        // 0x0023949C: nop
    
            goto L_002394E0;
    }
    // 0x0023949C: nop

    // 0x002394A0: lwc1        $f0, 0x2C($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X2C);
    // 0x002394A4: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x002394A8: nop

    // 0x002394AC: bc1f        L_002394E0
    if (!c1cs) {
        // 0x002394B0: nop
    
            goto L_002394E0;
    }
    // 0x002394B0: nop

    // 0x002394B4: lwc1        $f1, 0x8($v1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r3, 0X8);
    // 0x002394B8: lwc1        $f0, 0x28($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X28);
    // 0x002394BC: c.le.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl <= ctx->f1.fl;
    // 0x002394C0: nop

    // 0x002394C4: bc1f        L_002394E0
    if (!c1cs) {
        // 0x002394C8: nop
    
            goto L_002394E0;
    }
    // 0x002394C8: nop

    // 0x002394CC: lwc1        $f0, 0x30($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X30);
    // 0x002394D0: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x002394D4: nop

    // 0x002394D8: bc1t        L_00239544
    if (c1cs) {
        // 0x002394DC: nop
    
            goto L_00239544;
    }
    // 0x002394DC: nop

L_002394E0:
    // 0x002394E0: lw          $v1, 0xC($s2)
    ctx->r3 = MEM_W(ctx->r18, 0XC);
    // 0x002394E4: lui         $v0, 0x800F
    ctx->r2 = S32(0X800F << 16);
    // 0x002394E8: lw          $v0, 0x1A48($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1A48);
    // 0x002394EC: lwc1        $f1, 0x0($v1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r3, 0X0);
    // 0x002394F0: lwc1        $f0, 0x24($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X24);
    // 0x002394F4: c.le.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl <= ctx->f1.fl;
    // 0x002394F8: nop

    // 0x002394FC: bc1f        L_002399D8
    if (!c1cs) {
        // 0x00239500: nop
    
            goto L_002399D8;
    }
    // 0x00239500: nop

    // 0x00239504: lwc1        $f0, 0x2C($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X2C);
    // 0x00239508: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x0023950C: nop

    // 0x00239510: bc1f        L_002399D8
    if (!c1cs) {
        // 0x00239514: nop
    
            goto L_002399D8;
    }
    // 0x00239514: nop

    // 0x00239518: lwc1        $f1, 0x8($v1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r3, 0X8);
    // 0x0023951C: lwc1        $f0, 0x28($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X28);
    // 0x00239520: c.le.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl <= ctx->f1.fl;
    // 0x00239524: nop

    // 0x00239528: bc1f        L_002399D8
    if (!c1cs) {
        // 0x0023952C: nop
    
            goto L_002399D8;
    }
    // 0x0023952C: nop

    // 0x00239530: lwc1        $f0, 0x30($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X30);
    // 0x00239534: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x00239538: nop

    // 0x0023953C: bc1f        L_002399D8
    if (!c1cs) {
        // 0x00239540: nop
    
            goto L_002399D8;
    }
    // 0x00239540: nop

L_00239544:
    // 0x00239544: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x00239548: beq         $a0, $zero, L_002395B0
    if (ctx->r4 == 0) {
        // 0x0023954C: nop
    
            goto L_002395B0;
    }
    // 0x0023954C: nop

    // 0x00239550: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x00239554: jal         0x0026B858
    // 0x00239558: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    func_0026B858(rdram, ctx);
        goto after_0;
    // 0x00239558: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    after_0:
    // 0x0023955C: lw          $v0, 0x30($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X30);
    // 0x00239560: lui         $v1, 0x800F
    ctx->r3 = S32(0X800F << 16);
    // 0x00239564: lw          $v1, 0x1A48($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X1A48);
    // 0x00239568: lwc1        $f1, 0xC($v0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r2, 0XC);
    // 0x0023956C: lw          $v0, 0x8($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X8);
    // 0x00239570: lw          $v1, 0x99C($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X99C);
    // 0x00239574: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x00239578: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x0023957C: lui         $at, 0x800F
    ctx->r1 = S32(0X800F << 16);
    // 0x00239580: sw          $v0, 0x1A28($at)
    MEM_W(0X1A28, ctx->r1) = ctx->r2;
    // 0x00239584: lui         $at, 0x800F
    ctx->r1 = S32(0X800F << 16);
    // 0x00239588: swc1        $f1, 0x1A3C($at)
    MEM_W(0X1A3C, ctx->r1) = ctx->f_odd[(1 - 1) * 2];
    // 0x0023958C: beq         $v1, $zero, L_002395C0
    if (ctx->r3 == 0) {
        // 0x00239590: nop
    
            goto L_002395C0;
    }
    // 0x00239590: nop

    // 0x00239594: lwc1        $f0, 0xC($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0XC);
    // 0x00239598: c.le.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl <= ctx->f1.fl;
    // 0x0023959C: nop

    // 0x002395A0: bc1f        L_002395C0
    if (!c1cs) {
        // 0x002395A4: nop
    
            goto L_002395C0;
    }
    // 0x002395A4: nop

    // 0x002395A8: j           L_002399D8
    // 0x002395AC: nop

        goto L_002399D8;
    // 0x002395AC: nop

L_002395B0:
    // 0x002395B0: lui         $at, 0x800F
    ctx->r1 = S32(0X800F << 16);
    // 0x002395B4: sw          $zero, 0x1A3C($at)
    MEM_W(0X1A3C, ctx->r1) = 0;
    // 0x002395B8: lui         $at, 0x800F
    ctx->r1 = S32(0X800F << 16);
    // 0x002395BC: sw          $zero, 0x1A28($at)
    MEM_W(0X1A28, ctx->r1) = 0;
L_002395C0:
    // 0x002395C0: lui         $a1, 0x800F
    ctx->r5 = S32(0X800F << 16);
    // 0x002395C4: lw          $a1, 0x1A48($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X1A48);
    // 0x002395C8: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x002395CC: lw          $a0, 0x1A28($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1A28);
    // 0x002395D0: lw          $s1, 0x994($a1)
    ctx->r17 = MEM_W(ctx->r5, 0X994);
    // 0x002395D4: lui         $at, 0x800F
    ctx->r1 = S32(0X800F << 16);
    // 0x002395D8: lwc1        $f1, 0x1A3C($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X1A3C);
    // 0x002395DC: addiu       $v0, $s1, 0x10
    ctx->r2 = ADD32(ctx->r17, 0X10);
    // 0x002395E0: sw          $v0, 0x994($a1)
    MEM_W(0X994, ctx->r5) = ctx->r2;
    // 0x002395E4: lw          $v0, 0x998($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X998);
    // 0x002395E8: lw          $v1, 0x30($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X30);
    // 0x002395EC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x002395F0: sw          $v0, 0x998($a1)
    MEM_W(0X998, ctx->r5) = ctx->r2;
    // 0x002395F4: sw          $s2, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r18;
    // 0x002395F8: sw          $v1, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->r3;
    // 0x002395FC: sw          $a0, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->r4;
    // 0x00239600: swc1        $f1, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->f_odd[(1 - 1) * 2];
    // 0x00239604: lw          $v0, 0x4($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X4);
    // 0x00239608: bne         $s2, $v0, L_00239638
    if (ctx->r18 != ctx->r2) {
        // 0x0023960C: addiu       $s4, $zero, 0x1
        ctx->r20 = ADD32(0, 0X1);
            goto L_00239638;
    }
    // 0x0023960C: addiu       $s4, $zero, 0x1
    ctx->r20 = ADD32(0, 0X1);
    // 0x00239610: lw          $v0, 0x99C($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X99C);
    // 0x00239614: beql        $v0, $zero, L_002399D8
    if (ctx->r2 == 0) {
        // 0x00239618: sw          $s1, 0x99C($a1)
        MEM_W(0X99C, ctx->r5) = ctx->r17;
            goto L_002399D8;
    }
    goto skip_0;
    // 0x00239618: sw          $s1, 0x99C($a1)
    MEM_W(0X99C, ctx->r5) = ctx->r17;
    skip_0:
    // 0x0023961C: lwc1        $f0, 0xC($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0XC);
    // 0x00239620: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x00239624: nop

    // 0x00239628: bc1f        L_002399D8
    if (!c1cs) {
        // 0x0023962C: nop
    
            goto L_002399D8;
    }
    // 0x0023962C: nop

    // 0x00239630: j           L_002399D8
    // 0x00239634: sw          $s1, 0x99C($a1)
    MEM_W(0X99C, ctx->r5) = ctx->r17;
        goto L_002399D8;
    // 0x00239634: sw          $s1, 0x99C($a1)
    MEM_W(0X99C, ctx->r5) = ctx->r17;
L_00239638:
    // 0x00239638: lui         $s0, 0x800F
    ctx->r16 = S32(0X800F << 16);
    // 0x0023963C: addiu       $s0, $s0, 0x1A30
    ctx->r16 = ADD32(ctx->r16, 0X1A30);
    // 0x00239640: lhu         $v0, 0x2($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X2);
    // 0x00239644: lui         $s3, 0x800F
    ctx->r19 = S32(0X800F << 16);
    // 0x00239648: addiu       $s3, $s3, 0x1A20
    ctx->r19 = ADD32(ctx->r19, 0X1A20);
    // 0x0023964C: lui         $at, 0x800F
    ctx->r1 = S32(0X800F << 16);
    // 0x00239650: sw          $zero, 0x1A20($at)
    MEM_W(0X1A20, ctx->r1) = 0;
    // 0x00239654: lui         $at, 0x800F
    ctx->r1 = S32(0X800F << 16);
    // 0x00239658: sw          $zero, 0x1A24($at)
    MEM_W(0X1A24, ctx->r1) = 0;
    // 0x0023965C: ori         $v0, $v0, 0x8000
    ctx->r2 = ctx->r2 | 0X8000;
    // 0x00239660: sh          $v0, 0x2($s2)
    MEM_H(0X2, ctx->r18) = ctx->r2;
L_00239664:
    // 0x00239664: lui         $v0, 0x800F
    ctx->r2 = S32(0X800F << 16);
    // 0x00239668: lw          $v0, 0x1A24($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1A24);
    // 0x0023966C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x00239670: addu        $v0, $s2, $v0
    ctx->r2 = ADD32(ctx->r18, ctx->r2);
    // 0x00239674: lw          $v1, 0x10($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X10);
    // 0x00239678: lui         $at, 0x800F
    ctx->r1 = S32(0X800F << 16);
    // 0x0023967C: sw          $v1, 0x19E0($at)
    MEM_W(0X19E0, ctx->r1) = ctx->r3;
    // 0x00239680: beq         $v1, $zero, L_002397B4
    if (ctx->r3 == 0) {
        // 0x00239684: nop
    
            goto L_002397B4;
    }
    // 0x00239684: nop

    // 0x00239688: lhu         $v0, 0x2($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X2);
    // 0x0023968C: andi        $v0, $v0, 0x8000
    ctx->r2 = ctx->r2 & 0X8000;
    // 0x00239690: bne         $v0, $zero, L_002397B4
    if (ctx->r2 != 0) {
        // 0x00239694: addu        $a0, $v1, $zero
        ctx->r4 = ADD32(ctx->r3, 0);
            goto L_002397B4;
    }
    // 0x00239694: addu        $a0, $v1, $zero
    ctx->r4 = ADD32(ctx->r3, 0);
    // 0x00239698: lui         $at, 0x800F
    ctx->r1 = S32(0X800F << 16);
    // 0x0023969C: sw          $zero, 0x1A40($at)
    MEM_W(0X1A40, ctx->r1) = 0;
    // 0x002396A0: lui         $at, 0x800F
    ctx->r1 = S32(0X800F << 16);
    // 0x002396A4: sw          $zero, 0x1A2C($at)
    MEM_W(0X1A2C, ctx->r1) = 0;
L_002396A8:
    // 0x002396A8: lui         $v1, 0x800F
    ctx->r3 = S32(0X800F << 16);
    // 0x002396AC: lw          $v1, 0x1A2C($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X1A2C);
    // 0x002396B0: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x002396B4: addu        $v0, $a0, $v0
    ctx->r2 = ADD32(ctx->r4, ctx->r2);
    // 0x002396B8: lw          $v0, 0x10($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X10);
    // 0x002396BC: bne         $v0, $s2, L_002396D4
    if (ctx->r2 != ctx->r18) {
        // 0x002396C0: addiu       $v0, $v1, 0x1
        ctx->r2 = ADD32(ctx->r3, 0X1);
            goto L_002396D4;
    }
    // 0x002396C0: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
    // 0x002396C4: lui         $at, 0x800F
    ctx->r1 = S32(0X800F << 16);
    // 0x002396C8: sw          $s4, 0x1A40($at)
    MEM_W(0X1A40, ctx->r1) = ctx->r20;
    // 0x002396CC: j           L_002396E8
    // 0x002396D0: nop

        goto L_002396E8;
    // 0x002396D0: nop

L_002396D4:
    // 0x002396D4: lui         $at, 0x800F
    ctx->r1 = S32(0X800F << 16);
    // 0x002396D8: sw          $v0, 0x1A2C($at)
    MEM_W(0X1A2C, ctx->r1) = ctx->r2;
    // 0x002396DC: slti        $v0, $v0, 0x3
    ctx->r2 = SIGNED(ctx->r2) < 0X3 ? 1 : 0;
    // 0x002396E0: bne         $v0, $zero, L_002396A8
    if (ctx->r2 != 0) {
        // 0x002396E4: nop
    
            goto L_002396A8;
    }
    // 0x002396E4: nop

L_002396E8:
    // 0x002396E8: lui         $v0, 0x800F
    ctx->r2 = S32(0X800F << 16);
    // 0x002396EC: lw          $v0, 0x1A40($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1A40);
    // 0x002396F0: beq         $v0, $zero, L_002397B4
    if (ctx->r2 == 0) {
        // 0x002396F4: nop
    
            goto L_002397B4;
    }
    // 0x002396F4: nop

    // 0x002396F8: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x002396FC: lw          $a0, 0x19E0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X19E0);
    // 0x00239700: jal         0x0026CB2C
    // 0x00239704: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_0026CB2C(rdram, ctx);
        goto after_1;
    // 0x00239704: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_1:
    // 0x00239708: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    // 0x0023970C: lui         $a1, 0x800F
    ctx->r5 = S32(0X800F << 16);
    // 0x00239710: lw          $a1, 0x19E0($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X19E0);
    // 0x00239714: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x00239718: lw          $a0, 0x1A48($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1A48);
    // 0x0023971C: lui         $a2, 0x800F
    ctx->r6 = S32(0X800F << 16);
    // 0x00239720: lw          $a2, 0x1A2C($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X1A2C);
    // 0x00239724: jal         0x0023B664
    // 0x00239728: addiu       $a0, $a0, 0x9A0
    ctx->r4 = ADD32(ctx->r4, 0X9A0);
    func_0023B664(rdram, ctx);
        goto after_2;
    // 0x00239728: addiu       $a0, $a0, 0x9A0
    ctx->r4 = ADD32(ctx->r4, 0X9A0);
    after_2:
    // 0x0023972C: lui         $at, 0x800F
    ctx->r1 = S32(0X800F << 16);
    // 0x00239730: sw          $v0, 0x1A44($at)
    MEM_W(0X1A44, ctx->r1) = ctx->r2;
    // 0x00239734: beq         $v0, $zero, L_002397B4
    if (ctx->r2 == 0) {
        // 0x00239738: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_002397B4;
    }
    // 0x00239738: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0023973C: lui         $a2, 0x800F
    ctx->r6 = S32(0X800F << 16);
    // 0x00239740: lw          $a2, 0x1A48($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X1A48);
    // 0x00239744: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x00239748: jal         0x0020EF2C
    // 0x0023974C: addiu       $a2, $a2, 0x8
    ctx->r6 = ADD32(ctx->r6, 0X8);
    func_0020EF2C(rdram, ctx);
        goto after_3;
    // 0x0023974C: addiu       $a2, $a2, 0x8
    ctx->r6 = ADD32(ctx->r6, 0X8);
    after_3:
    // 0x00239750: lwc1        $f0, 0x0($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X0);
    // 0x00239754: mul.s       $f0, $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x00239758: lwc1        $f1, 0x4($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X4);
    // 0x0023975C: mul.s       $f1, $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f1.fl);
    // 0x00239760: lwc1        $f2, 0x8($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X8);
    // 0x00239764: mul.s       $f2, $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x00239768: lw          $a0, 0x0($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X0);
    // 0x0023976C: lui         $v0, 0x800F
    ctx->r2 = S32(0X800F << 16);
    // 0x00239770: lw          $v0, 0x1A20($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1A20);
    // 0x00239774: lui         $v1, 0x800F
    ctx->r3 = S32(0X800F << 16);
    // 0x00239778: lw          $v1, 0x1A24($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X1A24);
    // 0x0023977C: sll         $a1, $a0, 3
    ctx->r5 = S32(ctx->r4 << 3);
    // 0x00239780: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x00239784: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x00239788: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x0023978C: add.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f2.fl;
    // 0x00239790: lui         $at, 0x800F
    ctx->r1 = S32(0X800F << 16);
    // 0x00239794: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x00239798: sw          $v1, 0x19F0($at)
    MEM_W(0X19F0, ctx->r1) = ctx->r3;
    // 0x0023979C: sw          $a0, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r4;
    // 0x002397A0: lui         $at, 0x800F
    ctx->r1 = S32(0X800F << 16);
    // 0x002397A4: swc1        $f0, 0x1A3C($at)
    MEM_W(0X1A3C, ctx->r1) = ctx->f0.u32l;
    // 0x002397A8: lui         $at, 0x800F
    ctx->r1 = S32(0X800F << 16);
    // 0x002397AC: addu        $at, $at, $a1
    ctx->r1 = ADD32(ctx->r1, ctx->r5);
    // 0x002397B0: swc1        $f0, 0x19F4($at)
    MEM_W(0X19F4, ctx->r1) = ctx->f0.u32l;
L_002397B4:
    // 0x002397B4: lui         $v0, 0x800F
    ctx->r2 = S32(0X800F << 16);
    // 0x002397B8: lw          $v0, 0x1A24($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1A24);
    // 0x002397BC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x002397C0: lui         $at, 0x800F
    ctx->r1 = S32(0X800F << 16);
    // 0x002397C4: sw          $v0, 0x1A24($at)
    MEM_W(0X1A24, ctx->r1) = ctx->r2;
    // 0x002397C8: slti        $v0, $v0, 0x3
    ctx->r2 = SIGNED(ctx->r2) < 0X3 ? 1 : 0;
    // 0x002397CC: bne         $v0, $zero, L_00239664
    if (ctx->r2 != 0) {
        // 0x002397D0: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_00239664;
    }
    // 0x002397D0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x002397D4: lui         $v1, 0x800F
    ctx->r3 = S32(0X800F << 16);
    // 0x002397D8: lw          $v1, 0x1A20($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X1A20);
    // 0x002397DC: beq         $v1, $v0, L_00239814
    if (ctx->r3 == ctx->r2) {
        // 0x002397E0: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_00239814;
    }
    // 0x002397E0: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x002397E4: beq         $v0, $zero, L_002397FC
    if (ctx->r2 == 0) {
        // 0x002397E8: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_002397FC;
    }
    // 0x002397E8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x002397EC: beq         $v1, $zero, L_002399D8
    if (ctx->r3 == 0) {
        // 0x002397F0: nop
    
            goto L_002399D8;
    }
    // 0x002397F0: nop

    // 0x002397F4: j           L_00239980
    // 0x002397F8: nop

        goto L_00239980;
    // 0x002397F8: nop

L_002397FC:
    // 0x002397FC: beq         $v1, $v0, L_00239830
    if (ctx->r3 == ctx->r2) {
        // 0x00239800: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_00239830;
    }
    // 0x00239800: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x00239804: beq         $v1, $v0, L_00239878
    if (ctx->r3 == ctx->r2) {
        // 0x00239808: nop
    
            goto L_00239878;
    }
    // 0x00239808: nop

    // 0x0023980C: j           L_00239980
    // 0x00239810: nop

        goto L_00239980;
    // 0x00239810: nop

L_00239814:
    // 0x00239814: lui         $v1, 0x800F
    ctx->r3 = S32(0X800F << 16);
    // 0x00239818: lbu         $v1, 0x19F3($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X19F3);
    // 0x0023981C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x00239820: sb          $v0, 0x11($sp)
    MEM_B(0X11, ctx->r29) = ctx->r2;
    // 0x00239824: sb          $v0, 0x12($sp)
    MEM_B(0X12, ctx->r29) = ctx->r2;
    // 0x00239828: j           L_00239980
    // 0x0023982C: sb          $v1, 0x10($sp)
    MEM_B(0X10, ctx->r29) = ctx->r3;
        goto L_00239980;
    // 0x0023982C: sb          $v1, 0x10($sp)
    MEM_B(0X10, ctx->r29) = ctx->r3;
L_00239830:
    // 0x00239830: lui         $v1, 0x800F
    ctx->r3 = S32(0X800F << 16);
    // 0x00239834: addiu       $v1, $v1, 0x19F4
    ctx->r3 = ADD32(ctx->r3, 0X19F4);
    // 0x00239838: lwc1        $f1, 0x0($v1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r3, 0X0);
    // 0x0023983C: lwc1        $f0, 0x8($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X8);
    // 0x00239840: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x00239844: nop

    // 0x00239848: bc1f        L_00239860
    if (!c1cs) {
        // 0x0023984C: nop
    
            goto L_00239860;
    }
    // 0x0023984C: nop

    // 0x00239850: lbu         $v0, -0x1($v1)
    ctx->r2 = MEM_BU(ctx->r3, -0X1);
    // 0x00239854: lbu         $v1, 0x7($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X7);
    // 0x00239858: j           L_0023986C
    // 0x0023985C: sb          $v0, 0x10($sp)
    MEM_B(0X10, ctx->r29) = ctx->r2;
        goto L_0023986C;
    // 0x0023985C: sb          $v0, 0x10($sp)
    MEM_B(0X10, ctx->r29) = ctx->r2;
L_00239860:
    // 0x00239860: lbu         $v0, 0x7($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X7);
    // 0x00239864: lbu         $v1, -0x1($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X1);
    // 0x00239868: sb          $v0, 0x10($sp)
    MEM_B(0X10, ctx->r29) = ctx->r2;
L_0023986C:
    // 0x0023986C: sb          $v1, 0x11($sp)
    MEM_B(0X11, ctx->r29) = ctx->r3;
    // 0x00239870: j           L_0023997C
    // 0x00239874: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_0023997C;
    // 0x00239874: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_00239878:
    // 0x00239878: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x0023987C: addiu       $a0, $a0, 0x1A10
    ctx->r4 = ADD32(ctx->r4, 0X1A10);
    // 0x00239880: lui         $a1, 0x800F
    ctx->r5 = S32(0X800F << 16);
    // 0x00239884: addiu       $a1, $a1, 0x19F0
    ctx->r5 = ADD32(ctx->r5, 0X19F0);
    // 0x00239888: addiu       $a2, $a1, 0x8
    ctx->r6 = ADD32(ctx->r5, 0X8);
    // 0x0023988C: addiu       $a3, $a1, 0x10
    ctx->r7 = ADD32(ctx->r5, 0X10);
    // 0x00239890: sw          $a1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r5;
    // 0x00239894: sw          $a2, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r6;
    // 0x00239898: sw          $a3, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r7;
    // 0x0023989C: lui         $v0, 0x800F
    ctx->r2 = S32(0X800F << 16);
    // 0x002398A0: lw          $v0, 0x1A10($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1A10);
    // 0x002398A4: lui         $v1, 0x800F
    ctx->r3 = S32(0X800F << 16);
    // 0x002398A8: lw          $v1, 0x1A14($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X1A14);
    // 0x002398AC: lwc1        $f1, 0x4($v0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r2, 0X4);
    // 0x002398B0: lwc1        $f0, 0x4($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X4);
    // 0x002398B4: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x002398B8: nop

    // 0x002398BC: bc1f        L_002398D4
    if (!c1cs) {
        // 0x002398C0: nop
    
            goto L_002398D4;
    }
    // 0x002398C0: nop

    // 0x002398C4: lui         $at, 0x800F
    ctx->r1 = S32(0X800F << 16);
    // 0x002398C8: sw          $a1, 0x1A1C($at)
    MEM_W(0X1A1C, ctx->r1) = ctx->r5;
    // 0x002398CC: sw          $a2, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r6;
    // 0x002398D0: sw          $a1, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r5;
L_002398D4:
    // 0x002398D4: lui         $v0, 0x800F
    ctx->r2 = S32(0X800F << 16);
    // 0x002398D8: lw          $v0, 0x1A14($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1A14);
    // 0x002398DC: lui         $v1, 0x800F
    ctx->r3 = S32(0X800F << 16);
    // 0x002398E0: lw          $v1, 0x1A18($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X1A18);
    // 0x002398E4: lwc1        $f1, 0x4($v0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r2, 0X4);
    // 0x002398E8: lwc1        $f0, 0x4($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X4);
    // 0x002398EC: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x002398F0: nop

    // 0x002398F4: bc1f        L_00239910
    if (!c1cs) {
        // 0x002398F8: nop
    
            goto L_00239910;
    }
    // 0x002398F8: nop

    // 0x002398FC: lw          $v0, 0x4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X4);
    // 0x00239900: sw          $a3, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r7;
    // 0x00239904: lui         $at, 0x800F
    ctx->r1 = S32(0X800F << 16);
    // 0x00239908: sw          $v0, 0x1A1C($at)
    MEM_W(0X1A1C, ctx->r1) = ctx->r2;
    // 0x0023990C: sw          $v0, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r2;
L_00239910:
    // 0x00239910: lui         $v0, 0x800F
    ctx->r2 = S32(0X800F << 16);
    // 0x00239914: lw          $v0, 0x1A10($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1A10);
    // 0x00239918: lui         $v1, 0x800F
    ctx->r3 = S32(0X800F << 16);
    // 0x0023991C: lw          $v1, 0x1A14($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X1A14);
    // 0x00239920: lwc1        $f1, 0x4($v0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r2, 0X4);
    // 0x00239924: lwc1        $f0, 0x4($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X4);
    // 0x00239928: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x0023992C: nop

    // 0x00239930: bc1f        L_00239960
    if (!c1cs) {
        // 0x00239934: nop
    
            goto L_00239960;
    }
    // 0x00239934: nop

    // 0x00239938: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x0023993C: lw          $v0, 0x4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X4);
    // 0x00239940: lui         $at, 0x800F
    ctx->r1 = S32(0X800F << 16);
    // 0x00239944: sw          $v1, 0x1A1C($at)
    MEM_W(0X1A1C, ctx->r1) = ctx->r3;
    // 0x00239948: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
    // 0x0023994C: sw          $v1, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r3;
    // 0x00239950: lui         $v0, 0x800F
    ctx->r2 = S32(0X800F << 16);
    // 0x00239954: lw          $v0, 0x1A10($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1A10);
    // 0x00239958: lui         $v1, 0x800F
    ctx->r3 = S32(0X800F << 16);
    // 0x0023995C: lw          $v1, 0x1A14($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X1A14);
L_00239960:
    // 0x00239960: lbu         $v0, 0x3($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X3);
    // 0x00239964: sb          $v0, 0x10($sp)
    MEM_B(0X10, ctx->r29) = ctx->r2;
    // 0x00239968: lbu         $v0, 0x3($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X3);
    // 0x0023996C: lui         $v1, 0x800F
    ctx->r3 = S32(0X800F << 16);
    // 0x00239970: lw          $v1, 0x1A18($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X1A18);
    // 0x00239974: sb          $v0, 0x11($sp)
    MEM_B(0X11, ctx->r29) = ctx->r2;
    // 0x00239978: lbu         $v0, 0x3($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X3);
L_0023997C:
    // 0x0023997C: sb          $v0, 0x12($sp)
    MEM_B(0X12, ctx->r29) = ctx->r2;
L_00239980:
    // 0x00239980: lb          $v0, 0x10($sp)
    ctx->r2 = MEM_B(ctx->r29, 0X10);
    // 0x00239984: addiu       $s0, $zero, -0x1
    ctx->r16 = ADD32(0, -0X1);
    // 0x00239988: beq         $v0, $s0, L_002399A0
    if (ctx->r2 == ctx->r16) {
        // 0x0023998C: sll         $v0, $v0, 2
        ctx->r2 = S32(ctx->r2 << 2);
            goto L_002399A0;
    }
    // 0x0023998C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x00239990: addu        $v0, $s2, $v0
    ctx->r2 = ADD32(ctx->r18, ctx->r2);
    // 0x00239994: lw          $a1, 0x10($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X10);
    // 0x00239998: jal         0x002393D0
    // 0x0023999C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_002393D0(rdram, ctx);
        goto after_4;
    // 0x0023999C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_4:
L_002399A0:
    // 0x002399A0: lb          $v0, 0x11($sp)
    ctx->r2 = MEM_B(ctx->r29, 0X11);
    // 0x002399A4: beq         $v0, $s0, L_002399BC
    if (ctx->r2 == ctx->r16) {
        // 0x002399A8: sll         $v0, $v0, 2
        ctx->r2 = S32(ctx->r2 << 2);
            goto L_002399BC;
    }
    // 0x002399A8: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x002399AC: addu        $v0, $s2, $v0
    ctx->r2 = ADD32(ctx->r18, ctx->r2);
    // 0x002399B0: lw          $a1, 0x10($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X10);
    // 0x002399B4: jal         0x002393D0
    // 0x002399B8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_002393D0(rdram, ctx);
        goto after_5;
    // 0x002399B8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_5:
L_002399BC:
    // 0x002399BC: lb          $v0, 0x12($sp)
    ctx->r2 = MEM_B(ctx->r29, 0X12);
    // 0x002399C0: beq         $v0, $s0, L_002399D8
    if (ctx->r2 == ctx->r16) {
        // 0x002399C4: sll         $v0, $v0, 2
        ctx->r2 = S32(ctx->r2 << 2);
            goto L_002399D8;
    }
    // 0x002399C4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x002399C8: addu        $v0, $s2, $v0
    ctx->r2 = ADD32(ctx->r18, ctx->r2);
    // 0x002399CC: lw          $a1, 0x10($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X10);
    // 0x002399D0: jal         0x002393D0
    // 0x002399D4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_002393D0(rdram, ctx);
        goto after_6;
    // 0x002399D4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_6:
L_002399D8:
    // 0x002399D8: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x002399DC: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x002399E0: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x002399E4: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x002399E8: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x002399EC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x002399F0: jr          $ra
    // 0x002399F4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x002399F4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_002560D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002560D8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x002560DC: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x002560E0: jal         0x00255FF4
    // 0x002560E4: nop

    func_00255FF4(rdram, ctx);
        goto after_0;
    // 0x002560E4: nop

    after_0:
    // 0x002560E8: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x002560EC: jr          $ra
    // 0x002560F0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x002560F0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00250BF0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00250BF0: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x00250BF4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x00250BF8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x00250BFC: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x00250C00: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x00250C04: sdc1        $f20, 0x28($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X28, ctx->r29);
    // 0x00250C08: lwc1        $f1, 0xA80($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0XA80);
    // 0x00250C0C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x00250C10: c.eq.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl == ctx->f0.fl;
    // 0x00250C14: nop

    // 0x00250C18: bc1f        L_00250C28
    if (!c1cs) {
        // 0x00250C1C: addu        $s1, $a1, $zero
        ctx->r17 = ADD32(ctx->r5, 0);
            goto L_00250C28;
    }
    // 0x00250C1C: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x00250C20: j           L_00250C2C
    // 0x00250C24: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
        goto L_00250C2C;
    // 0x00250C24: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
L_00250C28:
    // 0x00250C28: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
L_00250C2C:
    // 0x00250C2C: sh          $v0, 0xA08($s0)
    MEM_H(0XA08, ctx->r16) = ctx->r2;
    // 0x00250C30: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00250C34: lui         $a2, 0x800B
    ctx->r6 = S32(0X800B << 16);
    // 0x00250C38: addiu       $a2, $a2, -0x2100
    ctx->r6 = ADD32(ctx->r6, -0X2100);
    // 0x00250C3C: jal         0x0024EF70
    // 0x00250C40: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_0024EF70(rdram, ctx);
        goto after_0;
    // 0x00250C40: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_0:
    // 0x00250C44: lwc1        $f0, 0xA10($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0XA10);
    // 0x00250C48: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00250C4C: lwc1        $f12, 0x6F50($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X6F50);
    // 0x00250C50: mul.s       $f12, $f0, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = MUL_S(ctx->f0.fl, ctx->f12.fl);
    // 0x00250C54: jal         0x002982F0
    // 0x00250C58: nop

    func_002982F0(rdram, ctx);
        goto after_1;
    // 0x00250C58: nop

    after_1:
    // 0x00250C5C: add.s       $f0, $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f0.fl;
    // 0x00250C60: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00250C64: lwc1        $f20, 0x6F54($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X6F54);
    // 0x00250C68: mul.s       $f0, $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f20.fl);
    // 0x00250C6C: lwc1        $f1, 0xA10($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0XA10);
    // 0x00250C70: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00250C74: lwc1        $f12, 0x6F58($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X6F58);
    // 0x00250C78: mul.s       $f12, $f1, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = MUL_S(ctx->f1.fl, ctx->f12.fl);
    // 0x00250C7C: jal         0x002982F0
    // 0x00250C80: swc1        $f0, 0xAD4($s0)
    MEM_W(0XAD4, ctx->r16) = ctx->f0.u32l;
    func_002982F0(rdram, ctx);
        goto after_2;
    // 0x00250C80: swc1        $f0, 0xAD4($s0)
    MEM_W(0XAD4, ctx->r16) = ctx->f0.u32l;
    after_2:
    // 0x00250C84: add.s       $f0, $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f0.fl;
    // 0x00250C88: mul.s       $f0, $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f20.fl);
    // 0x00250C8C: lwc1        $f1, 0xA10($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0XA10);
    // 0x00250C90: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00250C94: lwc1        $f12, 0x6F5C($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X6F5C);
    // 0x00250C98: mul.s       $f12, $f1, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = MUL_S(ctx->f1.fl, ctx->f12.fl);
    // 0x00250C9C: jal         0x002982F0
    // 0x00250CA0: swc1        $f0, 0xAD8($s0)
    MEM_W(0XAD8, ctx->r16) = ctx->f0.u32l;
    func_002982F0(rdram, ctx);
        goto after_3;
    // 0x00250CA0: swc1        $f0, 0xAD8($s0)
    MEM_W(0XAD8, ctx->r16) = ctx->f0.u32l;
    after_3:
    // 0x00250CA4: add.s       $f0, $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f0.fl;
    // 0x00250CA8: mul.s       $f0, $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f20.fl);
    // 0x00250CAC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00250CB0: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x00250CB4: lui         $a2, 0x800B
    ctx->r6 = S32(0X800B << 16);
    // 0x00250CB8: addiu       $a2, $a2, -0x2124
    ctx->r6 = ADD32(ctx->r6, -0X2124);
    // 0x00250CBC: jal         0x0024F658
    // 0x00250CC0: swc1        $f0, 0xADC($s0)
    MEM_W(0XADC, ctx->r16) = ctx->f0.u32l;
    func_0024F658(rdram, ctx);
        goto after_4;
    // 0x00250CC0: swc1        $f0, 0xADC($s0)
    MEM_W(0XADC, ctx->r16) = ctx->f0.u32l;
    after_4:
    // 0x00250CC4: lw          $v0, 0x140($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X140);
    // 0x00250CC8: andi        $v0, $v0, 0x80
    ctx->r2 = ctx->r2 & 0X80;
    // 0x00250CCC: bne         $v0, $zero, L_00250DCC
    if (ctx->r2 != 0) {
        // 0x00250CD0: nop
    
            goto L_00250DCC;
    }
    // 0x00250CD0: nop

    // 0x00250CD4: lwc1        $f1, 0xA10($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0XA10);
    // 0x00250CD8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00250CDC: lwc1        $f0, 0x6F60($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6F60);
    // 0x00250CE0: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x00250CE4: nop

    // 0x00250CE8: bc1f        L_00250DCC
    if (!c1cs) {
        // 0x00250CEC: addiu       $v0, $s0, 0xCD0
        ctx->r2 = ADD32(ctx->r16, 0XCD0);
            goto L_00250DCC;
    }
    // 0x00250CEC: addiu       $v0, $s0, 0xCD0
    ctx->r2 = ADD32(ctx->r16, 0XCD0);
    // 0x00250CF0: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x00250CF4: sw          $zero, 0xCD0($s0)
    MEM_W(0XCD0, ctx->r16) = 0;
    // 0x00250CF8: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x00250CFC: sw          $a0, 0x37C($v0)
    MEM_W(0X37C, ctx->r2) = ctx->r4;
    // 0x00250D00: sw          $zero, 0x8($v0)
    MEM_W(0X8, ctx->r2) = 0;
    // 0x00250D04: sw          $zero, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = 0;
    // 0x00250D08: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x00250D0C: lbu         $v0, -0x550F($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X550F);
    // 0x00250D10: bne         $v0, $zero, L_00250D84
    if (ctx->r2 != 0) {
        // 0x00250D14: nop
    
            goto L_00250D84;
    }
    // 0x00250D14: nop

    // 0x00250D18: lw          $v0, 0xBEC($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XBEC);
    // 0x00250D1C: beq         $v0, $zero, L_00250D40
    if (ctx->r2 == 0) {
        // 0x00250D20: addiu       $v0, $s0, 0x4
        ctx->r2 = ADD32(ctx->r16, 0X4);
            goto L_00250D40;
    }
    // 0x00250D20: addiu       $v0, $s0, 0x4
    ctx->r2 = ADD32(ctx->r16, 0X4);
    // 0x00250D24: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x00250D28: sw          $a0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r4;
    // 0x00250D2C: lw          $a1, 0x4($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X4);
    // 0x00250D30: lw          $a2, 0x8($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X8);
    // 0x00250D34: lw          $a3, 0xC($s0)
    ctx->r7 = MEM_W(ctx->r16, 0XC);
    // 0x00250D38: j           L_00250D7C
    // 0x00250D3C: addiu       $a0, $zero, 0x3AC3
    ctx->r4 = ADD32(0, 0X3AC3);
        goto L_00250D7C;
    // 0x00250D3C: addiu       $a0, $zero, 0x3AC3
    ctx->r4 = ADD32(0, 0X3AC3);
L_00250D40:
    // 0x00250D40: lwc1        $f1, 0xBE4($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0XBE4);
    // 0x00250D44: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00250D48: lwc1        $f0, 0x6F64($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6F64);
    // 0x00250D4C: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x00250D50: nop

    // 0x00250D54: bc1f        L_00250D84
    if (!c1cs) {
        // 0x00250D58: nop
    
            goto L_00250D84;
    }
    // 0x00250D58: nop

    // 0x00250D5C: lw          $v1, 0x51C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X51C);
    // 0x00250D60: sw          $a0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r4;
    // 0x00250D64: addiu       $v0, $v1, 0x114
    ctx->r2 = ADD32(ctx->r3, 0X114);
    // 0x00250D68: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x00250D6C: lw          $a1, 0x114($v1)
    ctx->r5 = MEM_W(ctx->r3, 0X114);
    // 0x00250D70: lw          $a2, 0x118($v1)
    ctx->r6 = MEM_W(ctx->r3, 0X118);
    // 0x00250D74: lw          $a3, 0x11C($v1)
    ctx->r7 = MEM_W(ctx->r3, 0X11C);
    // 0x00250D78: addiu       $a0, $zero, 0x3AC2
    ctx->r4 = ADD32(0, 0X3AC2);
L_00250D7C:
    // 0x00250D7C: jal         0x00275544
    // 0x00250D80: nop

    func_00275544(rdram, ctx);
        goto after_5;
    // 0x00250D80: nop

    after_5:
L_00250D84:
    // 0x00250D84: lw          $v1, 0x140($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X140);
    // 0x00250D88: lui         $v0, 0xC
    ctx->r2 = S32(0XC << 16);
    // 0x00250D8C: and         $v0, $v1, $v0
    ctx->r2 = ctx->r3 & ctx->r2;
    // 0x00250D90: beq         $v0, $zero, L_00250DA4
    if (ctx->r2 == 0) {
        // 0x00250D94: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_00250DA4;
    }
    // 0x00250D94: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00250D98: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x00250D9C: j           L_00250DC4
    // 0x00250DA0: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
        goto L_00250DC4;
    // 0x00250DA0: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
L_00250DA4:
    // 0x00250DA4: andi        $v0, $v1, 0x200
    ctx->r2 = ctx->r3 & 0X200;
    // 0x00250DA8: beq         $v0, $zero, L_00250DBC
    if (ctx->r2 == 0) {
        // 0x00250DAC: addu        $a1, $s1, $zero
        ctx->r5 = ADD32(ctx->r17, 0);
            goto L_00250DBC;
    }
    // 0x00250DAC: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x00250DB0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00250DB4: j           L_00250DC4
    // 0x00250DB8: addiu       $a2, $zero, 0x9
    ctx->r6 = ADD32(0, 0X9);
        goto L_00250DC4;
    // 0x00250DB8: addiu       $a2, $zero, 0x9
    ctx->r6 = ADD32(0, 0X9);
L_00250DBC:
    // 0x00250DBC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00250DC0: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
L_00250DC4:
    // 0x00250DC4: jal         0x0024E5F0
    // 0x00250DC8: nop

    func_0024E5F0(rdram, ctx);
        goto after_6;
    // 0x00250DC8: nop

    after_6:
L_00250DCC:
    // 0x00250DCC: lw          $v1, 0xC04($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XC04);
    // 0x00250DD0: addiu       $v0, $zero, 0x1144
    ctx->r2 = ADD32(0, 0X1144);
    // 0x00250DD4: bne         $v1, $v0, L_00250DE4
    if (ctx->r3 != ctx->r2) {
        // 0x00250DD8: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_00250DE4;
    }
    // 0x00250DD8: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x00250DDC: lb          $v0, 0xE2($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XE2);
    // 0x00250DE0: sltiu       $a0, $v0, 0x1
    ctx->r4 = ctx->r2 < 0X1 ? 1 : 0;
L_00250DE4:
    // 0x00250DE4: bne         $a0, $zero, L_00250E28
    if (ctx->r4 != 0) {
        // 0x00250DE8: nop
    
            goto L_00250E28;
    }
    // 0x00250DE8: nop

    // 0x00250DEC: lwc1        $f1, 0xA78($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0XA78);
    // 0x00250DF0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00250DF4: lwc1        $f0, 0x6F68($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6F68);
    // 0x00250DF8: c.le.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl <= ctx->f1.fl;
    // 0x00250DFC: nop

    // 0x00250E00: bc1t        L_00250E24
    if (c1cs) {
        // 0x00250E04: addiu       $v0, $zero, 0x8A2
        ctx->r2 = ADD32(0, 0X8A2);
            goto L_00250E24;
    }
    // 0x00250E04: addiu       $v0, $zero, 0x8A2
    ctx->r2 = ADD32(0, 0X8A2);
    // 0x00250E08: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00250E0C: lwc1        $f0, 0x6F6C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6F6C);
    // 0x00250E10: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x00250E14: nop

    // 0x00250E18: bc1t        L_00250E24
    if (c1cs) {
        // 0x00250E1C: addiu       $v0, $zero, 0x8A7
        ctx->r2 = ADD32(0, 0X8A7);
            goto L_00250E24;
    }
    // 0x00250E1C: addiu       $v0, $zero, 0x8A7
    ctx->r2 = ADD32(0, 0X8A7);
    // 0x00250E20: addiu       $v0, $zero, 0x14
    ctx->r2 = ADD32(0, 0X14);
L_00250E24:
    // 0x00250E24: sw          $v0, 0xC04($s0)
    MEM_W(0XC04, ctx->r16) = ctx->r2;
L_00250E28:
    // 0x00250E28: lwc1        $f1, 0x1290($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X1290);
    // 0x00250E2C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00250E30: lwc1        $f0, 0x6D28($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6D28);
    // 0x00250E34: add.s       $f2, $f1, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x00250E38: lwc1        $f1, 0xA80($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0XA80);
    // 0x00250E3C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00250E40: lwc1        $f0, 0x6F70($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6F70);
    // 0x00250E44: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x00250E48: nop

    // 0x00250E4C: bc1f        L_00250EA8
    if (!c1cs) {
        // 0x00250E50: swc1        $f2, 0x1290($s0)
        MEM_W(0X1290, ctx->r16) = ctx->f2.u32l;
            goto L_00250EA8;
    }
    // 0x00250E50: swc1        $f2, 0x1290($s0)
    MEM_W(0X1290, ctx->r16) = ctx->f2.u32l;
    // 0x00250E54: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00250E58: lwc1        $f0, 0x6F74($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6F74);
    // 0x00250E5C: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x00250E60: nop

    // 0x00250E64: bc1f        L_00250EA8
    if (!c1cs) {
        // 0x00250E68: nop
    
            goto L_00250EA8;
    }
    // 0x00250E68: nop

    // 0x00250E6C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00250E70: lwc1        $f12, 0x6F78($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X6F78);
    // 0x00250E74: jal         0x0021149C
    // 0x00250E78: nop

    func_0021149C(rdram, ctx);
        goto after_7;
    // 0x00250E78: nop

    after_7:
    // 0x00250E7C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x00250E80: swc1        $f0, 0x1290($s0)
    MEM_W(0X1290, ctx->r16) = ctx->f0.u32l;
    // 0x00250E84: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x00250E88: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x00250E8C: lw          $a1, 0x4($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X4);
    // 0x00250E90: lw          $a2, 0x8($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X8);
    // 0x00250E94: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x00250E98: lh          $a0, -0x2102($a0)
    ctx->r4 = MEM_H(ctx->r4, -0X2102);
    // 0x00250E9C: lw          $a3, 0xC($s1)
    ctx->r7 = MEM_W(ctx->r17, 0XC);
    // 0x00250EA0: jal         0x00275544
    // 0x00250EA4: nop

    func_00275544(rdram, ctx);
        goto after_8;
    // 0x00250EA4: nop

    after_8:
L_00250EA8:
    // 0x00250EA8: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x00250EAC: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x00250EB0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x00250EB4: ldc1        $f20, 0x28($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X28);
    // 0x00250EB8: jr          $ra
    // 0x00250EBC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x00250EBC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_0029A3A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0029A3A0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x0029A3A4: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x0029A3A8: addu        $s3, $a0, $zero
    ctx->r19 = ADD32(ctx->r4, 0);
    // 0x0029A3AC: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x0029A3B0: addu        $s2, $a1, $zero
    ctx->r18 = ADD32(ctx->r5, 0);
    // 0x0029A3B4: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x0029A3B8: addu        $s1, $a2, $zero
    ctx->r17 = ADD32(ctx->r6, 0);
    // 0x0029A3BC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0029A3C0: addu        $s0, $a3, $zero
    ctx->r16 = ADD32(ctx->r7, 0);
    // 0x0029A3C4: andi        $v0, $s2, 0x7
    ctx->r2 = ctx->r18 & 0X7;
    // 0x0029A3C8: beq         $v0, $zero, L_0029A3E8
    if (ctx->r2 == 0) {
        // 0x0029A3CC: sw          $ra, 0x20($sp)
        MEM_W(0X20, ctx->r29) = ctx->r31;
            goto L_0029A3E8;
    }
    // 0x0029A3CC: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x0029A3D0: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x0029A3D4: addiu       $a0, $a0, -0x5750
    ctx->r4 = ADD32(ctx->r4, -0X5750);
    // 0x0029A3D8: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x0029A3DC: addiu       $a1, $a1, -0x574C
    ctx->r5 = ADD32(ctx->r5, -0X574C);
    // 0x0029A3E0: jal         0x0029B020
    // 0x0029A3E4: addiu       $a2, $zero, 0x3A
    ctx->r6 = ADD32(0, 0X3A);
    func_0029B020(rdram, ctx);
        goto after_0;
    // 0x0029A3E4: addiu       $a2, $zero, 0x3A
    ctx->r6 = ADD32(0, 0X3A);
    after_0:
L_0029A3E8:
    // 0x0029A3E8: andi        $v0, $s1, 0x7
    ctx->r2 = ctx->r17 & 0X7;
    // 0x0029A3EC: beq         $v0, $zero, L_0029A410
    if (ctx->r2 == 0) {
        // 0x0029A3F0: andi        $v0, $s0, 0x7
        ctx->r2 = ctx->r16 & 0X7;
            goto L_0029A410;
    }
    // 0x0029A3F0: andi        $v0, $s0, 0x7
    ctx->r2 = ctx->r16 & 0X7;
    // 0x0029A3F4: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x0029A3F8: addiu       $a0, $a0, -0x5750
    ctx->r4 = ADD32(ctx->r4, -0X5750);
    // 0x0029A3FC: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x0029A400: addiu       $a1, $a1, -0x574C
    ctx->r5 = ADD32(ctx->r5, -0X574C);
    // 0x0029A404: jal         0x0029B020
    // 0x0029A408: addiu       $a2, $zero, 0x3B
    ctx->r6 = ADD32(0, 0X3B);
    func_0029B020(rdram, ctx);
        goto after_1;
    // 0x0029A408: addiu       $a2, $zero, 0x3B
    ctx->r6 = ADD32(0, 0X3B);
    after_1:
    // 0x0029A40C: andi        $v0, $s0, 0x7
    ctx->r2 = ctx->r16 & 0X7;
L_0029A410:
    // 0x0029A410: beq         $v0, $zero, L_0029A430
    if (ctx->r2 == 0) {
        // 0x0029A414: nop
    
            goto L_0029A430;
    }
    // 0x0029A414: nop

    // 0x0029A418: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x0029A41C: addiu       $a0, $a0, -0x5750
    ctx->r4 = ADD32(ctx->r4, -0X5750);
    // 0x0029A420: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x0029A424: addiu       $a1, $a1, -0x574C
    ctx->r5 = ADD32(ctx->r5, -0X574C);
    // 0x0029A428: jal         0x0029B020
    // 0x0029A42C: addiu       $a2, $zero, 0x3C
    ctx->r6 = ADD32(0, 0X3C);
    func_0029B020(rdram, ctx);
        goto after_2;
    // 0x0029A42C: addiu       $a2, $zero, 0x3C
    ctx->r6 = ADD32(0, 0X3C);
    after_2:
L_0029A430:
    // 0x0029A430: jal         0x0029A380
    // 0x0029A434: nop

    func_0029A380(rdram, ctx);
        goto after_3;
    // 0x0029A434: nop

    after_3:
    // 0x0029A438: bne         $v0, $zero, L_0029A480
    if (ctx->r2 != 0) {
        // 0x0029A43C: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_0029A480;
    }
    // 0x0029A43C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x0029A440: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0029A444: lui         $v0, 0xA404
    ctx->r2 = S32(0XA404 << 16);
    // 0x0029A448: sw          $s2, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r18;
    // 0x0029A44C: jal         0x0029BF80
    // 0x0029A450: nop

    func_0029BF80(rdram, ctx);
        goto after_4;
    // 0x0029A450: nop

    after_4:
    // 0x0029A454: lui         $v1, 0xA404
    ctx->r3 = S32(0XA404 << 16);
    // 0x0029A458: ori         $v1, $v1, 0x4
    ctx->r3 = ctx->r3 | 0X4;
    // 0x0029A45C: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x0029A460: bne         $s3, $zero, L_0029A470
    if (ctx->r19 != 0) {
        // 0x0029A464: lui         $v1, 0xA404
        ctx->r3 = S32(0XA404 << 16);
            goto L_0029A470;
    }
    // 0x0029A464: lui         $v1, 0xA404
    ctx->r3 = S32(0XA404 << 16);
    // 0x0029A468: j           L_0029A474
    // 0x0029A46C: ori         $v1, $v1, 0xC
    ctx->r3 = ctx->r3 | 0XC;
        goto L_0029A474;
    // 0x0029A46C: ori         $v1, $v1, 0xC
    ctx->r3 = ctx->r3 | 0XC;
L_0029A470:
    // 0x0029A470: ori         $v1, $v1, 0x8
    ctx->r3 = ctx->r3 | 0X8;
L_0029A474:
    // 0x0029A474: addiu       $v0, $s0, -0x1
    ctx->r2 = ADD32(ctx->r16, -0X1);
    // 0x0029A478: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x0029A47C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_0029A480:
    // 0x0029A480: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x0029A484: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x0029A488: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x0029A48C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x0029A490: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0029A494: jr          $ra
    // 0x0029A498: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x0029A498: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_002943D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002943D8: bne         $v1, $v0, L_0029443C
    if (ctx->r3 != ctx->r2) {
        // 0x002943DC: nop
    
            goto L_0029443C;
    }
    // 0x002943DC: nop

    // 0x002943E0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x002943E4: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x002943E8: addu        $s4, $a0, $zero
    ctx->r20 = ADD32(ctx->r4, 0);
    // 0x002943EC: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x002943F0: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x002943F4: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x002943F8: addu        $s2, $a2, $zero
    ctx->r18 = ADD32(ctx->r6, 0);
    // 0x002943FC: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x00294400: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x00294404: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00294408: lw          $v0, 0x8($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X8);
    // 0x0029440C: beq         $v0, $zero, L_00294478
    if (ctx->r2 == 0) {
        // 0x00294410: addu        $s3, $a3, $zero
        ctx->r19 = ADD32(ctx->r7, 0);
            goto L_00294478;
    }
    // 0x00294410: addu        $s3, $a3, $zero
    ctx->r19 = ADD32(ctx->r7, 0);
    // 0x00294414: jal         0x00294B58
    // 0x00294418: nop

    func_00294B58(rdram, ctx);
        goto after_0;
    // 0x00294418: nop

    after_0:
    // 0x0029441C: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x00294420: beq         $s0, $zero, L_00294478
    if (ctx->r16 == 0) {
        // 0x00294424: addu        $a0, $s4, $zero
        ctx->r4 = ADD32(ctx->r20, 0);
            goto L_00294478;
    }
    // 0x00294424: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    // 0x00294428: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    // 0x0029442C: lw          $v0, 0x8($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X8);
    // 0x00294430: lw          $v1, 0x1C($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X1C);
    // 0x00294434: lw          $a2, 0xD8($v0)
    ctx->r6 = MEM_W(ctx->r2, 0XD8);
    // 0x00294438: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
L_0029443C:
    // 0x0029443C: sh          $v0, 0x8($s0)
    MEM_H(0X8, ctx->r16) = ctx->r2;
    // 0x00294440: sll         $v0, $s2, 16
    ctx->r2 = S32(ctx->r18 << 16);
    // 0x00294444: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x00294448: sw          $v0, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r2;
    // 0x0029444C: addu        $v1, $v1, $a2
    ctx->r3 = ADD32(ctx->r3, ctx->r6);
    // 0x00294450: jal         0x00294C30
    // 0x00294454: sw          $v1, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r3;
    func_00294C30(rdram, ctx);
        goto after_1;
    // 0x00294454: sw          $v1, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r3;
    after_1:
    // 0x00294458: sw          $v0, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r2;
    // 0x0029445C: sw          $zero, 0x0($s0)
    MEM_W(0X0, ctx->r16) = 0;
    // 0x00294460: lw          $v0, 0x8($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X8);
    // 0x00294464: lw          $a0, 0xC($v0)
    ctx->r4 = MEM_W(ctx->r2, 0XC);
    // 0x00294468: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x0029446C: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x00294470: jalr        $v0
    // 0x00294474: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_2;
    // 0x00294474: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    after_2:
L_00294478:
    // 0x00294478: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x0029447C: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x00294480: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x00294484: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x00294488: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x0029448C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00294490: jr          $ra
    // 0x00294494: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x00294494: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_0024ED54(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0024ED54: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x0024ED58: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x0024ED5C: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x0024ED60: sw          $s4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r20;
    // 0x0024ED64: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x0024ED68: sw          $s3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r19;
    // 0x0024ED6C: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x0024ED70: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x0024ED74: sdc1        $f21, 0x48($sp)
    CHECK_FR(ctx, 21);
    SD(ctx->f21.u64, 0X48, ctx->r29);
    // 0x0024ED78: sdc1        $f20, 0x40($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X40, ctx->r29);
    // 0x0024ED7C: lw          $v0, 0xA1C($s1)
    ctx->r2 = MEM_W(ctx->r17, 0XA1C);
    // 0x0024ED80: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x0024ED84: lw          $a0, 0x1CE0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1CE0);
    // 0x0024ED88: andi        $v0, $v0, 0x8000
    ctx->r2 = ctx->r2 & 0X8000;
    // 0x0024ED8C: beq         $v0, $zero, L_0024EF44
    if (ctx->r2 == 0) {
        // 0x0024ED90: addu        $s4, $a1, $zero
        ctx->r20 = ADD32(ctx->r5, 0);
            goto L_0024EF44;
    }
    // 0x0024ED90: addu        $s4, $a1, $zero
    ctx->r20 = ADD32(ctx->r5, 0);
    // 0x0024ED94: beq         $a0, $zero, L_0024EF48
    if (ctx->r4 == 0) {
        // 0x0024ED98: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_0024EF48;
    }
    // 0x0024ED98: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x0024ED9C: lw          $s3, 0xBB0($s1)
    ctx->r19 = MEM_W(ctx->r17, 0XBB0);
    // 0x0024EDA0: beq         $a0, $s3, L_0024EF44
    if (ctx->r4 == ctx->r19) {
        // 0x0024EDA4: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_0024EF44;
    }
    // 0x0024EDA4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0024EDA8: lbu         $v1, 0x0($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X0);
    // 0x0024EDAC: bne         $v1, $v0, L_0024EF48
    if (ctx->r3 != ctx->r2) {
        // 0x0024EDB0: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_0024EF48;
    }
    // 0x0024EDB0: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x0024EDB4: lw          $v0, 0x14($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X14);
    // 0x0024EDB8: lw          $s2, 0x0($v0)
    ctx->r18 = MEM_W(ctx->r2, 0X0);
    // 0x0024EDBC: bne         $s2, $v1, L_0024EF48
    if (ctx->r18 != ctx->r3) {
        // 0x0024EDC0: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_0024EF48;
    }
    // 0x0024EDC0: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x0024EDC4: beq         $s3, $zero, L_0024EF48
    if (ctx->r19 == 0) {
        // 0x0024EDC8: addu        $s0, $a0, $zero
        ctx->r16 = ADD32(ctx->r4, 0);
            goto L_0024EF48;
    }
    // 0x0024EDC8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x0024EDCC: lw          $v0, 0x144($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X144);
    // 0x0024EDD0: beq         $v0, $zero, L_0024EEF8
    if (ctx->r2 == 0) {
        // 0x0024EDD4: nop
    
            goto L_0024EEF8;
    }
    // 0x0024EDD4: nop

    // 0x0024EDD8: lwc1        $f12, 0x50($s4)
    ctx->f12.u32l = MEM_W(ctx->r20, 0X50);
    // 0x0024EDDC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0024EDE0: lwc1        $f20, 0x6D84($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X6D84);
    // 0x0024EDE4: jal         0x002982F0
    // 0x0024EDE8: add.s       $f12, $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f20.fl;
    func_002982F0(rdram, ctx);
        goto after_0;
    // 0x0024EDE8: add.s       $f12, $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f20.fl;
    after_0:
    // 0x0024EDEC: lwc1        $f1, 0xA78($s1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r17, 0XA78);
    // 0x0024EDF0: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x0024EDF4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0024EDF8: lwc1        $f21, 0x6D88($at)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r1, 0X6D88);
    // 0x0024EDFC: mul.s       $f1, $f1, $f21
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f21.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f21.fl);
    // 0x0024EE00: swc1        $f1, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->f_odd[(1 - 1) * 2];
    // 0x0024EE04: lwc1        $f0, 0xA78($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0XA78);
    // 0x0024EE08: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0024EE0C: lwc1        $f1, 0x6D8C($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X6D8C);
    // 0x0024EE10: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0024EE14: swc1        $f0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f0.u32l;
    // 0x0024EE18: lwc1        $f12, 0x50($s4)
    ctx->f12.u32l = MEM_W(ctx->r20, 0X50);
    // 0x0024EE1C: jal         0x002974C0
    // 0x0024EE20: add.s       $f12, $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f20.fl;
    func_002974C0(rdram, ctx);
        goto after_1;
    // 0x0024EE20: add.s       $f12, $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f20.fl;
    after_1:
    // 0x0024EE24: lwc1        $f1, 0xA78($s1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r17, 0XA78);
    // 0x0024EE28: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x0024EE2C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0024EE30: lwc1        $f0, 0x6D90($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6D90);
    // 0x0024EE34: mul.s       $f1, $f1, $f21
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f21.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f21.fl);
    // 0x0024EE38: lui         $a2, 0x42C8
    ctx->r6 = S32(0X42C8 << 16);
    // 0x0024EE3C: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x0024EE40: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0024EE44: lwc1        $f0, 0x6D94($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6D94);
    // 0x0024EE48: swc1        $f1, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f_odd[(1 - 1) * 2];
    // 0x0024EE4C: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    // 0x0024EE50: sw          $s2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r18;
    // 0x0024EE54: lw          $t0, 0x4($s4)
    ctx->r8 = MEM_W(ctx->r20, 0X4);
    // 0x0024EE58: lw          $t1, 0x8($s4)
    ctx->r9 = MEM_W(ctx->r20, 0X8);
    // 0x0024EE5C: lw          $t2, 0xC($s4)
    ctx->r10 = MEM_W(ctx->r20, 0XC);
    // 0x0024EE60: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x0024EE64: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    // 0x0024EE68: sw          $t2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r10;
    // 0x0024EE6C: lw          $a0, 0x51C($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X51C);
    // 0x0024EE70: jal         0x002811CC
    // 0x0024EE74: addu        $a3, $a1, $zero
    ctx->r7 = ADD32(ctx->r5, 0);
    func_002811CC(rdram, ctx);
        goto after_2;
    // 0x0024EE74: addu        $a3, $a1, $zero
    ctx->r7 = ADD32(ctx->r5, 0);
    after_2:
    // 0x0024EE78: lb          $v1, 0x174($s3)
    ctx->r3 = MEM_B(ctx->r19, 0X174);
    // 0x0024EE7C: addiu       $v0, $zero, 0x2E
    ctx->r2 = ADD32(0, 0X2E);
    // 0x0024EE80: bne         $v1, $v0, L_0024EEB8
    if (ctx->r3 != ctx->r2) {
        // 0x0024EE84: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_0024EEB8;
    }
    // 0x0024EE84: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x0024EE88: lw          $v0, 0x140($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X140);
    // 0x0024EE8C: lui         $v1, 0x40
    ctx->r3 = S32(0X40 << 16);
    // 0x0024EE90: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x0024EE94: sw          $v0, 0x140($s0)
    MEM_W(0X140, ctx->r16) = ctx->r2;
    // 0x0024EE98: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x0024EE9C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x0024EEA0: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x0024EEA4: lw          $a1, 0x4($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X4);
    // 0x0024EEA8: lw          $a2, 0x8($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X8);
    // 0x0024EEAC: lw          $a3, 0xC($s0)
    ctx->r7 = MEM_W(ctx->r16, 0XC);
    // 0x0024EEB0: j           L_0024EED0
    // 0x0024EEB4: addiu       $a0, $zero, 0x278E
    ctx->r4 = ADD32(0, 0X278E);
        goto L_0024EED0;
    // 0x0024EEB4: addiu       $a0, $zero, 0x278E
    ctx->r4 = ADD32(0, 0X278E);
L_0024EEB8:
    // 0x0024EEB8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x0024EEBC: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x0024EEC0: lw          $a1, 0x4($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X4);
    // 0x0024EEC4: lw          $a2, 0x8($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X8);
    // 0x0024EEC8: lw          $a3, 0xC($s0)
    ctx->r7 = MEM_W(ctx->r16, 0XC);
    // 0x0024EECC: addiu       $a0, $zero, 0x278D
    ctx->r4 = ADD32(0, 0X278D);
L_0024EED0:
    // 0x0024EED0: jal         0x00275544
    // 0x0024EED4: nop

    func_00275544(rdram, ctx);
        goto after_3;
    // 0x0024EED4: nop

    after_3:
    // 0x0024EED8: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x0024EEDC: sb          $v0, 0x175($s0)
    MEM_B(0X175, ctx->r16) = ctx->r2;
    // 0x0024EEE0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0024EEE4: addiu       $a1, $a0, 0x140
    ctx->r5 = ADD32(ctx->r4, 0X140);
    // 0x0024EEE8: jal         0x00243414
    // 0x0024EEEC: addiu       $a2, $zero, 0x34
    ctx->r6 = ADD32(0, 0X34);
    func_00243414(rdram, ctx);
        goto after_4;
    // 0x0024EEEC: addiu       $a2, $zero, 0x34
    ctx->r6 = ADD32(0, 0X34);
    after_4:
    // 0x0024EEF0: j           L_0024EF48
    // 0x0024EEF4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_0024EF48;
    // 0x0024EEF4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_0024EEF8:
    // 0x0024EEF8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0024EEFC: lwc1        $f0, 0x6D98($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6D98);
    // 0x0024EF00: lui         $a2, 0x4270
    ctx->r6 = S32(0X4270 << 16);
    // 0x0024EF04: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    // 0x0024EF08: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0024EF0C: lwc1        $f0, 0x6D9C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6D9C);
    // 0x0024EF10: sw          $s2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r18;
    // 0x0024EF14: lw          $t0, 0x4($s4)
    ctx->r8 = MEM_W(ctx->r20, 0X4);
    // 0x0024EF18: lw          $t1, 0x8($s4)
    ctx->r9 = MEM_W(ctx->r20, 0X8);
    // 0x0024EF1C: lw          $t2, 0xC($s4)
    ctx->r10 = MEM_W(ctx->r20, 0XC);
    // 0x0024EF20: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x0024EF24: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    // 0x0024EF28: sw          $t2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r10;
    // 0x0024EF2C: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x0024EF30: lw          $a0, 0x51C($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X51C);
    // 0x0024EF34: jal         0x002811CC
    // 0x0024EF38: addu        $a3, $a1, $zero
    ctx->r7 = ADD32(ctx->r5, 0);
    func_002811CC(rdram, ctx);
        goto after_5;
    // 0x0024EF38: addu        $a3, $a1, $zero
    ctx->r7 = ADD32(ctx->r5, 0);
    after_5:
    // 0x0024EF3C: j           L_0024EF48
    // 0x0024EF40: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_0024EF48;
    // 0x0024EF40: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_0024EF44:
    // 0x0024EF44: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_0024EF48:
    // 0x0024EF48: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x0024EF4C: lw          $s4, 0x38($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X38);
    // 0x0024EF50: lw          $s3, 0x34($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X34);
    // 0x0024EF54: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x0024EF58: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x0024EF5C: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x0024EF60: ldc1        $f21, 0x48($sp)
    CHECK_FR(ctx, 21);
    ctx->f21.u64 = LD(ctx->r29, 0X48);
    // 0x0024EF64: ldc1        $f20, 0x40($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X40);
    // 0x0024EF68: jr          $ra
    // 0x0024EF6C: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x0024EF6C: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_0027B320(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0027B320: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x0027B324: lui         $v0, 0x800F
    ctx->r2 = S32(0X800F << 16);
    // 0x0027B328: lw          $v0, 0x7070($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X7070);
    // 0x0027B32C: lui         $v1, 0x800E
    ctx->r3 = S32(0X800E << 16);
    // 0x0027B330: lw          $v1, -0x71DC($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X71DC);
    // 0x0027B334: addu        $t0, $a0, $zero
    ctx->r8 = ADD32(ctx->r4, 0);
    // 0x0027B338: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x0027B33C: addu        $s3, $a1, $zero
    ctx->r19 = ADD32(ctx->r5, 0);
    // 0x0027B340: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x0027B344: addu        $s1, $a2, $zero
    ctx->r17 = ADD32(ctx->r6, 0);
    // 0x0027B348: sw          $ra, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r31;
    // 0x0027B34C: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x0027B350: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x0027B354: lw          $v0, 0x114($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X114);
    // 0x0027B358: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x0027B35C: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x0027B360: lw          $v0, 0x2214($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2214);
    // 0x0027B364: srl         $v1, $v1, 3
    ctx->r3 = S32(U32(ctx->r3) >> 3);
    // 0x0027B368: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x0027B36C: sltiu       $v0, $v0, 0x3E8
    ctx->r2 = ctx->r2 < 0X3E8 ? 1 : 0;
    // 0x0027B370: bne         $v0, $zero, L_0027B3A8
    if (ctx->r2 != 0) {
        // 0x0027B374: addu        $s2, $a3, $zero
        ctx->r18 = ADD32(ctx->r7, 0);
            goto L_0027B3A8;
    }
    // 0x0027B374: addu        $s2, $a3, $zero
    ctx->r18 = ADD32(ctx->r7, 0);
    // 0x0027B378: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0027B37C: lw          $v0, 0x6D54($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X6D54);
    // 0x0027B380: beq         $v0, $zero, L_0027B3A8
    if (ctx->r2 == 0) {
        // 0x0027B384: addu        $a1, $t0, $zero
        ctx->r5 = ADD32(ctx->r8, 0);
            goto L_0027B3A8;
    }
    // 0x0027B384: addu        $a1, $t0, $zero
    ctx->r5 = ADD32(ctx->r8, 0);
    // 0x0027B388: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x0027B38C: addiu       $a0, $a0, 0x7078
    ctx->r4 = ADD32(ctx->r4, 0X7078);
    // 0x0027B390: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x0027B394: jal         0x00224DF4
    // 0x0027B398: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_00224DF4(rdram, ctx);
        goto after_0;
    // 0x0027B398: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_0:
    // 0x0027B39C: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x0027B3A0: bne         $s0, $zero, L_0027B3B0
    if (ctx->r16 != 0) {
        // 0x0027B3A4: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_0027B3B0;
    }
    // 0x0027B3A4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_0027B3A8:
    // 0x0027B3A8: j           L_0027B3F0
    // 0x0027B3AC: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
        goto L_0027B3F0;
    // 0x0027B3AC: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_0027B3B0:
    // 0x0027B3B0: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    // 0x0027B3B4: sll         $a2, $s1, 16
    ctx->r6 = S32(ctx->r17 << 16);
    // 0x0027B3B8: sra         $a2, $a2, 16
    ctx->r6 = S32(SIGNED(ctx->r6) >> 16);
        turok2_patch_hud_draw_scale(rdram, ctx);

    // 0x0027B3BC: lwc1        $f0, 0x48($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X48);
    // 0x0027B3C0: lw          $v0, 0x50($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X50);
    // 0x0027B3C4: sll         $a3, $s2, 16
    ctx->r7 = S32(ctx->r18 << 16);
    // 0x0027B3C8: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    // 0x0027B3CC: lwc1        $f0, 0x4C($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x0027B3D0: sra         $a3, $a3, 16
    ctx->r7 = S32(SIGNED(ctx->r7) >> 16);
    // 0x0027B3D4: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x0027B3D8: jal         0x0027A7A0
    // 0x0027B3DC: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    func_0027A7A0(rdram, ctx);
        goto after_1;
    // 0x0027B3DC: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    after_1:
    // 0x0027B3E0: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0027B3E4: jal         0x002051F4
    // 0x0027B3E8: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_002051F4(rdram, ctx);
        goto after_2;
    // 0x0027B3E8: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_2:
    // 0x0027B3EC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_0027B3F0:
    // 0x0027B3F0: lw          $ra, 0x30($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X30);
    // 0x0027B3F4: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x0027B3F8: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x0027B3FC: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x0027B400: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x0027B404: jr          $ra
    // 0x0027B408: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x0027B408: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_002571D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002571D8: lwc1        $f1, 0xC($a0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r4, 0XC);
    // 0x002571DC: lwc1        $f0, 0xC($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0XC);
    // 0x002571E0: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x002571E4: nop

    // 0x002571E8: bc1f        L_002571F4
    if (!c1cs) {
        // 0x002571EC: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_002571F4;
    }
    // 0x002571EC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x002571F0: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_002571F4:
    // 0x002571F4: jr          $ra
    // 0x002571F8: nop

    return;
    // 0x002571F8: nop

;}
RECOMP_FUNC void func_0042CE10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0042CE10: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x0042CE14: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x0042CE18: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x0042CE1C: sw          $s3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r19;
    // 0x0042CE20: addu        $s3, $a1, $zero
    ctx->r19 = ADD32(ctx->r5, 0);
    // 0x0042CE24: addu        $a1, $a2, $zero
    ctx->r5 = ADD32(ctx->r6, 0);
    // 0x0042CE28: sw          $ra, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r31;
    // 0x0042CE2C: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x0042CE30: jal         0x00224180
    // 0x0042CE34: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    func_00224180(rdram, ctx);
        goto after_0;
    // 0x0042CE34: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    after_0:
    // 0x0042CE38: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x0042CE3C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x0042CE40: bne         $a1, $v0, L_0042CE50
    if (ctx->r5 != ctx->r2) {
        // 0x0042CE44: nop
    
            goto L_0042CE50;
    }
    // 0x0042CE44: nop

    // 0x0042CE48: j           L_0042CF68
    // 0x0042CE4C: sw          $zero, 0x8($s3)
    MEM_W(0X8, ctx->r19) = 0;
        goto L_0042CF68;
    // 0x0042CE4C: sw          $zero, 0x8($s3)
    MEM_W(0X8, ctx->r19) = 0;
L_0042CE50:
    // 0x0042CE50: jal         0x00224F84
    // 0x0042CE54: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00224F84(rdram, ctx);
        goto after_1;
    // 0x0042CE54: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x0042CE58: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0042CE5C: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x0042CE60: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x0042CE64: addiu       $a2, $zero, 0x18
    ctx->r6 = ADD32(0, 0X18);
    // 0x0042CE68: addu        $a3, $a0, $zero
    ctx->r7 = ADD32(ctx->r4, 0);
    // 0x0042CE6C: lui         $v0, 0x800A
    ctx->r2 = S32(0X800A << 16);
    // 0x0042CE70: addiu       $v0, $v0, 0x5D70
    ctx->r2 = ADD32(ctx->r2, 0X5D70);
    // 0x0042CE74: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
    // 0x0042CE78: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x0042CE7C: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x0042CE80: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x0042CE84: jal         0x0020367C
    // 0x0042CE88: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    func_0020367C(rdram, ctx);
        goto after_2;
    // 0x0042CE88: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    after_2:
    // 0x0042CE8C: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x0042CE90: beq         $s1, $zero, L_0042CF68
    if (ctx->r17 == 0) {
        // 0x0042CE94: addu        $a2, $s2, $zero
        ctx->r6 = ADD32(ctx->r18, 0);
            goto L_0042CF68;
    }
    // 0x0042CE94: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    // 0x0042CE98: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x0042CE9C: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x0042CEA0: jal         0x0020185C
    // 0x0042CEA4: addiu       $a3, $sp, 0x20
    ctx->r7 = ADD32(ctx->r29, 0X20);
    func_0020185C(rdram, ctx);
        goto after_3;
    // 0x0042CEA4: addiu       $a3, $sp, 0x20
    ctx->r7 = ADD32(ctx->r29, 0X20);
    after_3:
    // 0x0042CEA8: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0042CEAC: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x0042CEB0: addu        $a3, $a0, $zero
    ctx->r7 = ADD32(ctx->r4, 0);
    // 0x0042CEB4: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    // 0x0042CEB8: lui         $v0, 0x21
    ctx->r2 = S32(0X21 << 16);
    // 0x0042CEBC: addiu       $v0, $v0, -0x4B70
    ctx->r2 = ADD32(ctx->r2, -0X4B70);
    // 0x0042CEC0: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x0042CEC4: lui         $v0, 0x800A
    ctx->r2 = S32(0X800A << 16);
    // 0x0042CEC8: addiu       $v0, $v0, 0x5D80
    ctx->r2 = ADD32(ctx->r2, 0X5D80);
    // 0x0042CECC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x0042CED0: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x0042CED4: jal         0x0020367C
    // 0x0042CED8: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    func_0020367C(rdram, ctx);
        goto after_4;
    // 0x0042CED8: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    after_4:
    // 0x0042CEDC: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x0042CEE0: beq         $s0, $zero, L_0042CF60
    if (ctx->r16 == 0) {
        // 0x0042CEE4: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_0042CF60;
    }
    // 0x0042CEE4: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0042CEE8: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x0042CEEC: jal         0x002017D4
    // 0x0042CEF0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_002017D4(rdram, ctx);
        goto after_5;
    // 0x0042CEF0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_5:
    // 0x0042CEF4: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x0042CEF8: jal         0x002017D4
    // 0x0042CEFC: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_002017D4(rdram, ctx);
        goto after_6;
    // 0x0042CEFC: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_6:
    // 0x0042CF00: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x0042CF04: jal         0x002017D4
    // 0x0042CF08: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_002017D4(rdram, ctx);
        goto after_7;
    // 0x0042CF08: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_7:
    // 0x0042CF0C: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x0042CF10: jal         0x002017D4
    // 0x0042CF14: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_002017D4(rdram, ctx);
        goto after_8;
    // 0x0042CF14: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_8:
    // 0x0042CF18: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0042CF1C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x0042CF20: lw          $v1, 0x0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X0);
    // 0x0042CF24: lw          $t0, 0x4($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X4);
    // 0x0042CF28: lw          $t1, 0x8($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X8);
    // 0x0042CF2C: lw          $t2, 0xC($v0)
    ctx->r10 = MEM_W(ctx->r2, 0XC);
    // 0x0042CF30: sw          $v1, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r3;
    // 0x0042CF34: sw          $t0, 0x4($s3)
    MEM_W(0X4, ctx->r19) = ctx->r8;
    // 0x0042CF38: sw          $t1, 0x8($s3)
    MEM_W(0X8, ctx->r19) = ctx->r9;
    // 0x0042CF3C: sw          $t2, 0xC($s3)
    MEM_W(0XC, ctx->r19) = ctx->r10;
    // 0x0042CF40: lw          $v1, 0x10($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X10);
    // 0x0042CF44: lw          $t0, 0x14($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X14);
    // 0x0042CF48: lw          $t1, 0x18($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X18);
    // 0x0042CF4C: sw          $v1, 0x10($s3)
    MEM_W(0X10, ctx->r19) = ctx->r3;
    // 0x0042CF50: sw          $t0, 0x14($s3)
    MEM_W(0X14, ctx->r19) = ctx->r8;
    // 0x0042CF54: jal         0x002052D8
    // 0x0042CF58: sw          $t1, 0x18($s3)
    MEM_W(0X18, ctx->r19) = ctx->r9;
    func_002052D8(rdram, ctx);
        goto after_9;
    // 0x0042CF58: sw          $t1, 0x18($s3)
    MEM_W(0X18, ctx->r19) = ctx->r9;
    after_9:
    // 0x0042CF5C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
L_0042CF60:
    // 0x0042CF60: jal         0x002052D8
    // 0x0042CF64: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_002052D8(rdram, ctx);
        goto after_10;
    // 0x0042CF64: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_10:
L_0042CF68:
    // 0x0042CF68: lw          $ra, 0x38($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X38);
    // 0x0042CF6C: lw          $s3, 0x34($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X34);
    // 0x0042CF70: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x0042CF74: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x0042CF78: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x0042CF7C: jr          $ra
    // 0x0042CF80: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x0042CF80: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_00258D94(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00258D94: jr          $ra
    // 0x00258D98: addiu       $v0, $zero, 0x4E84
    ctx->r2 = ADD32(0, 0X4E84);
    return;
    // 0x00258D98: addiu       $v0, $zero, 0x4E84
    ctx->r2 = ADD32(0, 0X4E84);
;}
RECOMP_FUNC void func_0028A17C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0028A17C: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0028A180: lw          $v0, 0x6E54($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X6E54);
    // 0x0028A184: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x0028A188: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x0028A18C: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x0028A190: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x0028A194: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x0028A198: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x0028A19C: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x0028A1A0: beq         $v0, $zero, L_0028A1D4
    if (ctx->r2 == 0) {
        // 0x0028A1A4: sw          $zero, 0x18($sp)
        MEM_W(0X18, ctx->r29) = 0;
            goto L_0028A1D4;
    }
    // 0x0028A1A4: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x0028A1A8: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x0028A1AC: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0028A1B0: sw          $v0, 0x6E54($at)
    MEM_W(0X6E54, ctx->r1) = ctx->r2;
    // 0x0028A1B4: bne         $v0, $zero, L_0028A1D4
    if (ctx->r2 != 0) {
        // 0x0028A1B8: nop
    
            goto L_0028A1D4;
    }
    // 0x0028A1B8: nop

    // 0x0028A1BC: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x0028A1C0: lw          $a1, 0x6E7C($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X6E7C);
    // 0x0028A1C4: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x0028A1C8: addiu       $a0, $a0, 0x6D68
    ctx->r4 = ADD32(ctx->r4, 0X6D68);
    // 0x0028A1CC: jal         0x0029B9B0
    // 0x0028A1D0: nop

    func_0029B9B0(rdram, ctx);
        goto after_0;
    // 0x0028A1D0: nop

    after_0:
L_0028A1D4:
    // 0x0028A1D4: lw          $v0, 0x2FC($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X2FC);
    // 0x0028A1D8: addiu       $s0, $zero, -0x1
    ctx->r16 = ADD32(0, -0X1);
    // 0x0028A1DC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x0028A1E0: sw          $v0, 0x2FC($s1)
    MEM_W(0X2FC, ctx->r17) = ctx->r2;
    // 0x0028A1E4: addiu       $a0, $s1, 0x78
    ctx->r4 = ADD32(ctx->r17, 0X78);
L_0028A1E8:
    // 0x0028A1E8: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x0028A1EC: jal         0x0029B6F0
    // 0x0028A1F0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    osRecvMesg_recomp(rdram, ctx);
        goto after_1;
    // 0x0028A1F0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_1:
    // 0x0028A1F4: beq         $v0, $s0, L_0028A210
    if (ctx->r2 == ctx->r16) {
        // 0x0028A1F8: nop
    
            goto L_0028A210;
    }
    // 0x0028A1F8: nop

    // 0x0028A1FC: lw          $a1, 0x10($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X10);
    // 0x0028A200: jal         0x0028AFF0
    // 0x0028A204: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_0028AFF0(rdram, ctx);
        goto after_2;
    // 0x0028A204: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_2:
    // 0x0028A208: j           L_0028A1E8
    // 0x0028A20C: addiu       $a0, $s1, 0x78
    ctx->r4 = ADD32(ctx->r17, 0X78);
        goto L_0028A1E8;
    // 0x0028A20C: addiu       $a0, $s1, 0x78
    ctx->r4 = ADD32(ctx->r17, 0X78);
L_0028A210:
    // 0x0028A210: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x0028A214: lw          $v0, -0x5278($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X5278);
    // 0x0028A218: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x0028A21C: lw          $v1, -0xED0($v1)
    ctx->r3 = MEM_W(ctx->r3, -0XED0);
    // 0x0028A220: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x0028A224: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x0028A228: sw          $v0, -0x5278($at)
    MEM_W(-0X5278, ctx->r1) = ctx->r2;
    // 0x0028A22C: beq         $v1, $zero, L_0028A25C
    if (ctx->r3 == 0) {
        // 0x0028A230: nop
    
            goto L_0028A25C;
    }
    // 0x0028A230: nop

    // 0x0028A234: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x0028A238: lw          $v0, -0x4F68($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X4F68);
    // 0x0028A23C: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x0028A240: sw          $zero, -0x5278($at)
    MEM_W(-0X5278, ctx->r1) = 0;
    // 0x0028A244: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x0028A248: sw          $zero, -0xED0($at)
    MEM_W(-0XED0, ctx->r1) = 0;
    // 0x0028A24C: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x0028A250: sw          $zero, -0x4F68($at)
    MEM_W(-0X4F68, ctx->r1) = 0;
    // 0x0028A254: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x0028A258: sw          $v0, -0x4F60($at)
    MEM_W(-0X4F60, ctx->r1) = ctx->r2;
L_0028A25C:
    // 0x0028A25C: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x0028A260: lw          $v0, -0xEC8($v0)
    ctx->r2 = MEM_W(ctx->r2, -0XEC8);
    // 0x0028A264: beq         $v0, $zero, L_0028A30C
    if (ctx->r2 == 0) {
        // 0x0028A268: nop
    
            goto L_0028A30C;
    }
    // 0x0028A268: nop

    // 0x0028A26C: lui         $v0, 0x800F
    ctx->r2 = S32(0X800F << 16);
    // 0x0028A270: lw          $v0, 0x6CA4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X6CA4);
    // 0x0028A274: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x0028A278: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x0028A27C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x0028A280: lw          $a1, -0x52E8($at)
    ctx->r5 = MEM_W(ctx->r1, -0X52E8);
    // 0x0028A284: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x0028A288: lw          $v0, -0x5278($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X5278);
    // 0x0028A28C: lw          $v1, 0x124($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X124);
    // 0x0028A290: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x0028A294: sltu        $v0, $v0, $v1
    ctx->r2 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x0028A298: bne         $v0, $zero, L_0028A30C
    if (ctx->r2 != 0) {
        // 0x0028A29C: nop
    
            goto L_0028A30C;
    }
    // 0x0028A29C: nop

    // 0x0028A2A0: lw          $a0, 0x110($a1)
    ctx->r4 = MEM_W(ctx->r5, 0X110);
    // 0x0028A2A4: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x0028A2A8: sw          $a0, -0x4F68($at)
    MEM_W(-0X4F68, ctx->r1) = ctx->r4;
    // 0x0028A2AC: jal         0x0029AC90
    // 0x0028A2B0: addu        $v0, $a0, $zero
    ctx->r2 = ADD32(ctx->r4, 0);
    osViSwapBuffer_recomp(rdram, ctx);
        goto after_3;
    // 0x0028A2B0: addu        $v0, $a0, $zero
    ctx->r2 = ADD32(ctx->r4, 0);
    after_3:
    // 0x0028A2B4: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x0028A2B8: lw          $v0, -0xEC8($v0)
    ctx->r2 = MEM_W(ctx->r2, -0XEC8);
    // 0x0028A2BC: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x0028A2C0: lw          $v1, -0xED0($v1)
    ctx->r3 = MEM_W(ctx->r3, -0XED0);
    // 0x0028A2C4: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x0028A2C8: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x0028A2CC: sw          $v0, -0xEC8($at)
    MEM_W(-0XEC8, ctx->r1) = ctx->r2;
    // 0x0028A2D0: lui         $v0, 0x800F
    ctx->r2 = S32(0X800F << 16);
    // 0x0028A2D4: lw          $v0, 0x6CA4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X6CA4);
    // 0x0028A2D8: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x0028A2DC: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x0028A2E0: sw          $v1, -0xED0($at)
    MEM_W(-0XED0, ctx->r1) = ctx->r3;
    // 0x0028A2E4: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x0028A2E8: lw          $v1, 0x2210($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X2210);
    // 0x0028A2EC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x0028A2F0: lui         $at, 0x800F
    ctx->r1 = S32(0X800F << 16);
    // 0x0028A2F4: sw          $v0, 0x6CA4($at)
    MEM_W(0X6CA4, ctx->r1) = ctx->r2;
    // 0x0028A2F8: sltu        $v0, $v0, $v1
    ctx->r2 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x0028A2FC: bne         $v0, $zero, L_0028A30C
    if (ctx->r2 != 0) {
        // 0x0028A300: nop
    
            goto L_0028A30C;
    }
    // 0x0028A300: nop

    // 0x0028A304: lui         $at, 0x800F
    ctx->r1 = S32(0X800F << 16);
    // 0x0028A308: sw          $zero, 0x6CA4($at)
    MEM_W(0X6CA4, ctx->r1) = 0;
L_0028A30C:
    // 0x0028A30C: lw          $v0, 0x2F4($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X2F4);
    // 0x0028A310: bne         $v0, $zero, L_0028A370
    if (ctx->r2 != 0) {
        // 0x0028A314: nop
    
            goto L_0028A370;
    }
    // 0x0028A314: nop

    // 0x0028A318: lw          $v0, 0x2F8($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X2F8);
    // 0x0028A31C: bne         $v0, $zero, L_0028A370
    if (ctx->r2 != 0) {
        // 0x0028A320: nop
    
            goto L_0028A370;
    }
    // 0x0028A320: nop

    // 0x0028A324: lw          $a0, 0x2E8($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X2E8);
    // 0x0028A328: beq         $a0, $zero, L_0028A370
    if (ctx->r4 == 0) {
        // 0x0028A32C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_0028A370;
    }
    // 0x0028A32C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0028A330: lw          $v1, 0x10($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X10);
    // 0x0028A334: bne         $v1, $v0, L_0028A370
    if (ctx->r3 != ctx->r2) {
        // 0x0028A338: addiu       $v0, $zero, 0x32
        ctx->r2 = ADD32(0, 0X32);
            goto L_0028A370;
    }
    // 0x0028A338: addiu       $v0, $zero, 0x32
    ctx->r2 = ADD32(0, 0X32);
    // 0x0028A33C: lw          $v1, 0x4($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X4);
    // 0x0028A340: bne         $v1, $v0, L_0028A370
    if (ctx->r3 != ctx->r2) {
        // 0x0028A344: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_0028A370;
    }
    // 0x0028A344: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x0028A348: sw          $v0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r2;
    // 0x0028A34C: lw          $v0, 0x2E8($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X2E8);
    // 0x0028A350: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x0028A354: sw          $v0, 0x2F4($s1)
    MEM_W(0X2F4, ctx->r17) = ctx->r2;
    // 0x0028A358: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x0028A35C: bne         $v0, $zero, L_0028A368
    if (ctx->r2 != 0) {
        // 0x0028A360: sw          $v0, 0x2E8($s1)
        MEM_W(0X2E8, ctx->r17) = ctx->r2;
            goto L_0028A368;
    }
    // 0x0028A360: sw          $v0, 0x2E8($s1)
    MEM_W(0X2E8, ctx->r17) = ctx->r2;
    // 0x0028A364: sw          $zero, 0x2F0($s1)
    MEM_W(0X2F0, ctx->r17) = 0;
L_0028A368:
    // 0x0028A368: jal         0x0028A43C
    // 0x0028A36C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_0028A43C(rdram, ctx);
        goto after_4;
    // 0x0028A36C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_4:
L_0028A370:
    // 0x0028A370: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0028A374: lw          $v0, 0x6E50($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X6E50);
    // 0x0028A378: addiu       $v1, $zero, 0x4B0
    ctx->r3 = ADD32(0, 0X4B0);
    // 0x0028A37C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x0028A380: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0028A384: sw          $v0, 0x6E50($at)
    MEM_W(0X6E50, ctx->r1) = ctx->r2;
    // 0x0028A388: bne         $v0, $v1, L_0028A394
    if (ctx->r2 != ctx->r3) {
        // 0x0028A38C: nop
    
            goto L_0028A394;
    }
    // 0x0028A38C: nop

    // 0x0028A390: sb          $zero, 0x0($zero)
    MEM_B(0X0, 0) = 0;
L_0028A394:
    // 0x0028A394: lw          $v0, 0x300($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X300);
    // 0x0028A398: beq         $v0, $zero, L_0028A3BC
    if (ctx->r2 == 0) {
        // 0x0028A39C: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_0028A3BC;
    }
    // 0x0028A39C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0028A3A0: lw          $v0, 0x2F4($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X2F4);
    // 0x0028A3A4: beq         $v0, $zero, L_0028A3C0
    if (ctx->r2 == 0) {
        // 0x0028A3A8: addiu       $a1, $sp, 0x14
        ctx->r5 = ADD32(ctx->r29, 0X14);
            goto L_0028A3C0;
    }
    // 0x0028A3A8: addiu       $a1, $sp, 0x14
    ctx->r5 = ADD32(ctx->r29, 0X14);
    // 0x0028A3AC: jal         0x0028B274
    // 0x0028A3B0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_0028B274(rdram, ctx);
        goto after_5;
    // 0x0028A3B0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_5:
    // 0x0028A3B4: j           L_0028A3FC
    // 0x0028A3B8: nop

        goto L_0028A3FC;
    // 0x0028A3B8: nop

L_0028A3BC:
    // 0x0028A3BC: addiu       $a1, $sp, 0x14
    ctx->r5 = ADD32(ctx->r29, 0X14);
L_0028A3C0:
    // 0x0028A3C0: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    // 0x0028A3C4: lw          $s0, 0x2F4($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X2F4);
    // 0x0028A3C8: lw          $v0, 0x2F8($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X2F8);
    // 0x0028A3CC: sltiu       $s0, $s0, 0x1
    ctx->r16 = ctx->r16 < 0X1 ? 1 : 0;
    // 0x0028A3D0: sll         $s0, $s0, 1
    ctx->r16 = S32(ctx->r16 << 1);
    // 0x0028A3D4: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x0028A3D8: or          $s0, $s0, $v0
    ctx->r16 = ctx->r16 | ctx->r2;
    // 0x0028A3DC: jal         0x0028ABE0
    // 0x0028A3E0: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    func_0028ABE0(rdram, ctx);
        goto after_6;
    // 0x0028A3E0: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    after_6:
    // 0x0028A3E4: beq         $v0, $s0, L_0028A3FC
    if (ctx->r2 == ctx->r16) {
        // 0x0028A3E8: nop
    
            goto L_0028A3FC;
    }
    // 0x0028A3E8: nop

    // 0x0028A3EC: lw          $a1, 0x14($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X14);
    // 0x0028A3F0: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x0028A3F4: jal         0x0028B0FC
    // 0x0028A3F8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_0028B0FC(rdram, ctx);
        goto after_7;
    // 0x0028A3F8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_7:
L_0028A3FC:
    // 0x0028A3FC: lw          $s0, 0x2E0($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X2E0);
    // 0x0028A400: beq         $s0, $zero, L_0028A420
    if (ctx->r16 == 0) {
        // 0x0028A404: addu        $a1, $s1, $zero
        ctx->r5 = ADD32(ctx->r17, 0);
            goto L_0028A420;
    }
    // 0x0028A404: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
L_0028A408:
    // 0x0028A408: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x0028A40C: jal         0x0029B820
    // 0x0028A410: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    osSendMesg_recomp(rdram, ctx);
        goto after_8;
    // 0x0028A410: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_8:
    // 0x0028A414: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
    // 0x0028A418: bne         $s0, $zero, L_0028A408
    if (ctx->r16 != 0) {
        // 0x0028A41C: addu        $a1, $s1, $zero
        ctx->r5 = ADD32(ctx->r17, 0);
            goto L_0028A408;
    }
    // 0x0028A41C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
L_0028A420:
    // 0x0028A420: jal         0x00284B94
    // 0x0028A424: nop

    func_00284B94(rdram, ctx);
        goto after_9;
    // 0x0028A424: nop

    after_9:
    // 0x0028A428: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x0028A42C: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x0028A430: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x0028A434: jr          $ra
    // 0x0028A438: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x0028A438: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_00286E14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00286E14: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x00286E18: sw          $fp, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r30;
    // 0x00286E1C: lw          $fp, 0x80($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X80);
    // 0x00286E20: sw          $s7, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r23;
    // 0x00286E24: lui         $s7, 0x800C
    ctx->r23 = S32(0X800C << 16);
    // 0x00286E28: lw          $s7, 0x2034($s7)
    ctx->r23 = MEM_W(ctx->r23, 0X2034);
    // 0x00286E2C: sdc1        $f20, 0x60($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X60, ctx->r29);
    // 0x00286E30: lwc1        $f20, 0x88($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X88);
    // 0x00286E34: lui         $v0, 0x939A
    ctx->r2 = S32(0X939A << 16);
    // 0x00286E38: sdc1        $f21, 0x68($sp)
    CHECK_FR(ctx, 21);
    SD(ctx->f21.u64, 0X68, ctx->r29);
    // 0x00286E3C: lwc1        $f21, 0x8C($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X8C);
    // 0x00286E40: ori         $v0, $v0, 0x85C5
    ctx->r2 = ctx->r2 | 0X85C5;
    // 0x00286E44: sw          $ra, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r31;
    // 0x00286E48: sw          $s6, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r22;
    // 0x00286E4C: sw          $s5, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r21;
    // 0x00286E50: mult        $fp, $s7
    result = S64(S32(ctx->r30)) * S64(S32(ctx->r23)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x00286E54: sw          $s4, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r20;
    // 0x00286E58: sw          $s3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r19;
    // 0x00286E5C: sw          $s2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r18;
    // 0x00286E60: sw          $s1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r17;
    // 0x00286E64: mflo        $v1
    ctx->r3 = lo;
    // 0x00286E68: sw          $s7, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r23;
    // 0x00286E6C: lui         $s7, 0x800F
    ctx->r23 = S32(0X800F << 16);
    // 0x00286E70: lw          $s7, 0x7070($s7)
    ctx->r23 = MEM_W(ctx->r23, 0X7070);
    // 0x00286E74: mult        $v1, $v0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x00286E78: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    // 0x00286E7C: sw          $a2, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r6;
    // 0x00286E80: sw          $a3, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r7;
    // 0x00286E84: sw          $s7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r23;
    // 0x00286E88: mfhi        $t0
    ctx->r8 = hi;
    // 0x00286E8C: addu        $v0, $t0, $v1
    ctx->r2 = ADD32(ctx->r8, ctx->r3);
    // 0x00286E90: sra         $v0, $v0, 7
    ctx->r2 = S32(SIGNED(ctx->r2) >> 7);
    // 0x00286E94: sra         $v1, $v1, 31
    ctx->r3 = S32(SIGNED(ctx->r3) >> 31);
    // 0x00286E98: beq         $a1, $zero, L_00287108
    if (ctx->r5 == 0) {
        // 0x00286E9C: subu        $fp, $v0, $v1
        ctx->r30 = SUB32(ctx->r2, ctx->r3);
            goto L_00287108;
    }
    // 0x00286E9C: subu        $fp, $v0, $v1
    ctx->r30 = SUB32(ctx->r2, ctx->r3);
    // 0x00286EA0: addiu       $a0, $zero, 0x14
    ctx->r4 = ADD32(0, 0X14);
    // 0x00286EA4: lui         $s1, 0xE700
    ctx->r17 = S32(0XE700 << 16);
    // 0x00286EA8: lui         $v0, 0x800E
    ctx->r2 = S32(0X800E << 16);
    // 0x00286EAC: lw          $v0, -0x71DC($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X71DC);
    // 0x00286EB0: lui         $s0, 0x800C
    ctx->r16 = S32(0X800C << 16);
    // 0x00286EB4: lw          $s0, 0x2030($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X2030);
    // 0x00286EB8: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x00286EBC: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x00286EC0: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x00286EC4: sw          $v0, -0x71DC($at)
    MEM_W(-0X71DC, ctx->r1) = ctx->r2;
    // 0x00286EC8: sw          $s1, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r17;
    // 0x00286ECC: jal         0x00207FEC
    // 0x00286ED0: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    func_00207FEC(rdram, ctx);
        goto after_0;
    // 0x00286ED0: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    after_0:
    // 0x00286ED4: lui         $t4, 0xE300
    ctx->r12 = S32(0XE300 << 16);
    // 0x00286ED8: ori         $t4, $t4, 0xA01
    ctx->r12 = ctx->r12 | 0XA01;
    // 0x00286EDC: lui         $s5, 0xFFFC
    ctx->r21 = S32(0XFFFC << 16);
    // 0x00286EE0: ori         $s5, $s5, 0xFFFC
    ctx->r21 = ctx->r21 | 0XFFFC;
    // 0x00286EE4: lui         $s7, 0xFCFF
    ctx->r23 = S32(0XFCFF << 16);
    // 0x00286EE8: ori         $s7, $s7, 0xFFFF
    ctx->r23 = ctx->r23 | 0XFFFF;
    // 0x00286EEC: lui         $t8, 0xFFFE
    ctx->r24 = S32(0XFFFE << 16);
    // 0x00286EF0: ori         $t8, $t8, 0x793C
    ctx->r24 = ctx->r24 | 0X793C;
    // 0x00286EF4: sw          $s7, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r23;
    // 0x00286EF8: lui         $s7, 0xE200
    ctx->r23 = S32(0XE200 << 16);
    // 0x00286EFC: ori         $s7, $s7, 0x1C
    ctx->r23 = ctx->r23 | 0X1C;
    // 0x00286F00: lui         $t9, 0x1
    ctx->r25 = S32(0X1 << 16);
    // 0x00286F04: ori         $t9, $t9, 0x1
    ctx->r25 = ctx->r25 | 0X1;
    // 0x00286F08: lui         $a2, 0x800E
    ctx->r6 = S32(0X800E << 16);
    // 0x00286F0C: addiu       $a2, $a2, -0x71DC
    ctx->r6 = ADD32(ctx->r6, -0X71DC);
    // 0x00286F10: lui         $s4, 0x30
    ctx->r20 = S32(0X30 << 16);
    // 0x00286F14: lui         $s6, 0xF700
    ctx->r22 = S32(0XF700 << 16);
    // 0x00286F18: andi        $s0, $s0, 0x3FF
    ctx->r16 = ctx->r16 & 0X3FF;
    // 0x00286F1C: lui         $v1, 0x800E
    ctx->r3 = S32(0X800E << 16);
    // 0x00286F20: lw          $v1, -0x71DC($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X71DC);
    // 0x00286F24: lui         $a3, 0x800C
    ctx->r7 = S32(0X800C << 16);
    // 0x00286F28: lw          $a3, 0x2030($a3)
    ctx->r7 = MEM_W(ctx->r7, 0X2030);
    // 0x00286F2C: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x00286F30: lw          $a1, 0xA78($a1)
    ctx->r5 = MEM_W(ctx->r5, 0XA78);
    // 0x00286F34: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00286F38: lwc1        $f2, -0x6294($at)
    ctx->f2.u32l = MEM_W(ctx->r1, -0X6294);
    // 0x00286F3C: sll         $s0, $s0, 14
    ctx->r16 = S32(ctx->r16 << 14);
    // 0x00286F40: sw          $s7, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r23;
    // 0x00286F44: addu        $t1, $v1, $zero
    ctx->r9 = ADD32(ctx->r3, 0);
    // 0x00286F48: addiu       $v1, $v1, 0x8
    ctx->r3 = ADD32(ctx->r3, 0X8);
    // 0x00286F4C: addiu       $t2, $v1, 0x8
    ctx->r10 = ADD32(ctx->r3, 0X8);
    // 0x00286F50: addiu       $t3, $v1, 0x10
    ctx->r11 = ADD32(ctx->r3, 0X10);
    // 0x00286F54: addiu       $t5, $v1, 0x18
    ctx->r13 = ADD32(ctx->r3, 0X18);
    // 0x00286F58: addiu       $t7, $v1, 0x20
    ctx->r15 = ADD32(ctx->r3, 0X20);
    // 0x00286F5C: addiu       $s2, $v1, 0x28
    ctx->r18 = ADD32(ctx->r3, 0X28);
    // 0x00286F60: addiu       $s3, $v1, 0x30
    ctx->r19 = ADD32(ctx->r3, 0X30);
    // 0x00286F64: addiu       $v0, $v1, 0x38
    ctx->r2 = ADD32(ctx->r3, 0X38);
    // 0x00286F68: addiu       $t6, $a3, -0x1
    ctx->r14 = ADD32(ctx->r7, -0X1);
    // 0x00286F6C: andi        $t0, $t6, 0xFFF
    ctx->r8 = ctx->r14 & 0XFFF;
    // 0x00286F70: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x00286F74: sw          $v1, -0x71DC($at)
    MEM_W(-0X71DC, ctx->r1) = ctx->r3;
    // 0x00286F78: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x00286F7C: sw          $t2, -0x71DC($at)
    MEM_W(-0X71DC, ctx->r1) = ctx->r10;
    // 0x00286F80: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x00286F84: sw          $t3, -0x71DC($at)
    MEM_W(-0X71DC, ctx->r1) = ctx->r11;
    // 0x00286F88: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x00286F8C: sw          $t5, -0x71DC($at)
    MEM_W(-0X71DC, ctx->r1) = ctx->r13;
    // 0x00286F90: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x00286F94: sw          $t7, -0x71DC($at)
    MEM_W(-0X71DC, ctx->r1) = ctx->r15;
    // 0x00286F98: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x00286F9C: sw          $s2, -0x71DC($at)
    MEM_W(-0X71DC, ctx->r1) = ctx->r18;
    // 0x00286FA0: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x00286FA4: sw          $s3, -0x71DC($at)
    MEM_W(-0X71DC, ctx->r1) = ctx->r19;
    // 0x00286FA8: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x00286FAC: sw          $v0, -0x71DC($at)
    MEM_W(-0X71DC, ctx->r1) = ctx->r2;
    // 0x00286FB0: lui         $v0, 0xFF10
    ctx->r2 = S32(0XFF10 << 16);
    // 0x00286FB4: lw          $a0, 0x0($a2)
    ctx->r4 = MEM_W(ctx->r6, 0X0);
    // 0x00286FB8: or          $t0, $t0, $v0
    ctx->r8 = ctx->r8 | ctx->r2;
    // 0x00286FBC: sw          $t0, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r8;
    // 0x00286FC0: sw          $a1, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r5;
    // 0x00286FC4: sw          $s1, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r17;
    // 0x00286FC8: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x00286FCC: sw          $t4, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r12;
    // 0x00286FD0: sw          $s4, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->r20;
    // 0x00286FD4: sw          $s6, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->r22;
    // 0x00286FD8: sw          $s5, 0x4($t3)
    MEM_W(0X4, ctx->r11) = ctx->r21;
    // 0x00286FDC: lui         $s5, 0xF600
    ctx->r21 = S32(0XF600 << 16);
    // 0x00286FE0: mtc1        $t6, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r14;
    // 0x00286FE4: cvt.s.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.fl = CVT_S_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x00286FE8: andi        $a3, $a3, 0x3FF
    ctx->r7 = ctx->r7 & 0X3FF;
    // 0x00286FEC: sll         $a3, $a3, 14
    ctx->r7 = S32(ctx->r7 << 14);
    // 0x00286FF0: lw          $s7, 0x30($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X30);
    // 0x00286FF4: mul.s       $f1, $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f2.fl);
    // 0x00286FF8: andi        $v0, $s7, 0x3FF
    ctx->r2 = ctx->r23 & 0X3FF;
    // 0x00286FFC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x00287000: or          $v0, $v0, $s5
    ctx->r2 = ctx->r2 | ctx->r21;
    // 0x00287004: or          $s0, $s0, $v0
    ctx->r16 = ctx->r16 | ctx->r2;
    // 0x00287008: addu        $t1, $a0, $zero
    ctx->r9 = ADD32(ctx->r4, 0);
    // 0x0028700C: sw          $s0, 0x18($v1)
    MEM_W(0X18, ctx->r3) = ctx->r16;
    // 0x00287010: sw          $zero, 0x4($t5)
    MEM_W(0X4, ctx->r13) = 0;
    // 0x00287014: sw          $t0, 0x20($v1)
    MEM_W(0X20, ctx->r3) = ctx->r8;
    // 0x00287018: lui         $v0, 0x800F
    ctx->r2 = S32(0X800F << 16);
    // 0x0028701C: lw          $v0, 0x7070($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X7070);
    // 0x00287020: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x00287024: lw          $v0, 0x110($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X110);
    // 0x00287028: addiu       $t2, $a0, 0x8
    ctx->r10 = ADD32(ctx->r4, 0X8);
    // 0x0028702C: sw          $a0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r4;
    // 0x00287030: sw          $v0, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->r2;
    // 0x00287034: lui         $v0, 0x10
    ctx->r2 = S32(0X10 << 16);
    // 0x00287038: sw          $s1, 0x28($v1)
    MEM_W(0X28, ctx->r3) = ctx->r17;
    // 0x0028703C: sw          $zero, 0x4($s2)
    MEM_W(0X4, ctx->r18) = 0;
    // 0x00287040: sw          $t4, 0x30($v1)
    MEM_W(0X30, ctx->r3) = ctx->r12;
    // 0x00287044: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x00287048: lw          $a1, 0x2034($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X2034);
    // 0x0028704C: lui         $v1, 0xED00
    ctx->r3 = S32(0XED00 << 16);
    // 0x00287050: sw          $v0, 0x4($s3)
    MEM_W(0X4, ctx->r19) = ctx->r2;
    // 0x00287054: sw          $v1, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r3;
    // 0x00287058: addiu       $v0, $a1, -0x1
    ctx->r2 = ADD32(ctx->r5, -0X1);
    // 0x0028705C: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x00287060: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00287064: trunc.w.s   $f3, $f1
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 1);
    ctx->f_odd[(3 - 1) * 2] = TRUNC_W_S(ctx->f1.fl);
    // 0x00287068: mfc1        $v0, $f3
    ctx->r2 = (int32_t)ctx->f_odd[(3 - 1) * 2];
    // 0x0028706C: mul.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f2.fl);
    // 0x00287070: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x00287074: sll         $v0, $v0, 12
    ctx->r2 = S32(ctx->r2 << 12);
    // 0x00287078: andi        $a1, $a1, 0x3FF
    ctx->r5 = ctx->r5 & 0X3FF;
    // 0x0028707C: sll         $a1, $a1, 2
    ctx->r5 = S32(ctx->r5 << 2);
    // 0x00287080: trunc.w.s   $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(3 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x00287084: mfc1        $v1, $f3
    ctx->r3 = (int32_t)ctx->f_odd[(3 - 1) * 2];
    // 0x00287088: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x0028708C: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x00287090: sw          $v0, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r2;
    // 0x00287094: addiu       $t1, $a0, 0x10
    ctx->r9 = ADD32(ctx->r4, 0X10);
    // 0x00287098: addiu       $v1, $a0, 0x18
    ctx->r3 = ADD32(ctx->r4, 0X18);
    // 0x0028709C: sw          $t2, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r10;
    // 0x002870A0: sw          $t0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r8;
    // 0x002870A4: lw          $s7, 0x20($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X20);
    // 0x002870A8: addiu       $t0, $a0, 0x20
    ctx->r8 = ADD32(ctx->r4, 0X20);
    // 0x002870AC: lw          $t3, 0x110($s7)
    ctx->r11 = MEM_W(ctx->r23, 0X110);
    // 0x002870B0: addiu       $v0, $a0, 0x30
    ctx->r2 = ADD32(ctx->r4, 0X30);
    // 0x002870B4: sw          $t1, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r9;
    // 0x002870B8: sw          $t4, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r12;
    // 0x002870BC: addiu       $t4, $a0, 0x28
    ctx->r12 = ADD32(ctx->r4, 0X28);
    // 0x002870C0: sw          $v1, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r3;
    // 0x002870C4: sw          $t0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r8;
    // 0x002870C8: sw          $t4, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r12;
    // 0x002870CC: sw          $v0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r2;
    // 0x002870D0: sw          $t3, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r11;
    // 0x002870D4: sw          $s4, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->r20;
    // 0x002870D8: lw          $s7, 0x24($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X24);
    // 0x002870DC: or          $a1, $a1, $s5
    ctx->r5 = ctx->r5 | ctx->r21;
    // 0x002870E0: sw          $s7, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->r23;
    // 0x002870E4: sw          $t8, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r24;
    // 0x002870E8: lw          $s7, 0x28($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X28);
    // 0x002870EC: or          $a3, $a3, $a1
    ctx->r7 = ctx->r7 | ctx->r5;
    // 0x002870F0: sw          $s7, 0x18($a0)
    MEM_W(0X18, ctx->r4) = ctx->r23;
    // 0x002870F4: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x002870F8: sw          $s6, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->r22;
    // 0x002870FC: sw          $t9, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r25;
    // 0x00287100: sw          $a3, 0x28($a0)
    MEM_W(0X28, ctx->r4) = ctx->r7;
    // 0x00287104: sw          $zero, 0x4($t4)
    MEM_W(0X4, ctx->r12) = 0;
L_00287108:
    // 0x00287108: jal         0x00277F6C
    // 0x0028710C: nop

    func_00277F6C(rdram, ctx);
        goto after_1;
    // 0x0028710C: nop

    after_1:
    // 0x00287110: jal         0x0027836C
    // 0x00287114: nop

    func_0027836C(rdram, ctx);
        goto after_2;
    // 0x00287114: nop

    after_2:
    // 0x00287118: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0028711C: lwc1        $f0, 0x2030($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X2030);
    // 0x00287120: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00287124: mul.s       $f0, $f20, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f20.fl, ctx->f0.fl);
    // 0x00287128: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0028712C: lwc1        $f1, -0x6290($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, -0X6290);
    // 0x00287130: mul.s       $f20, $f0, $f1
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f20.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00287134: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x00287138: lw          $v0, 0x2034($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2034);
    // 0x0028713C: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x00287140: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00287144: mul.s       $f0, $f21, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f21.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f21.fl, ctx->f0.fl);
    // 0x00287148: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0028714C: lwc1        $f1, -0x628C($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, -0X628C);
    // 0x00287150: slti        $v0, $v0, 0xDF
    ctx->r2 = SIGNED(ctx->r2) < 0XDF ? 1 : 0;
    // 0x00287154: mul.s       $f21, $f0, $f1
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f21.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00287158: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0028715C: lwc1        $f0, -0x6288($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X6288);
    // 0x00287160: bne         $v0, $zero, L_00287170
    if (ctx->r2 != 0) {
        // 0x00287164: nop
    
            goto L_00287170;
    }
    // 0x00287164: nop

    // 0x00287168: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0028716C: lwc1        $f0, -0x6284($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X6284);
L_00287170:
    // 0x00287170: mul.s       $f20, $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = MUL_S(ctx->f20.fl, ctx->f0.fl);
    // 0x00287174: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00287178: lwc1        $f0, -0x6280($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X6280);
    // 0x0028717C: mul.s       $f21, $f21, $f0
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f21.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f21.fl = MUL_S(ctx->f21.fl, ctx->f0.fl);
    // 0x00287180: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    // 0x00287184: jal         0x0027B0C0
    // 0x00287188: mov.s       $f14, $f21
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 21);
    ctx->f14.fl = ctx->f21.fl;
    func_0027B0C0(rdram, ctx);
        goto after_3;
    // 0x00287188: mov.s       $f14, $f21
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 21);
    ctx->f14.fl = ctx->f21.fl;
    after_3:
    // 0x0028718C: lui         $v1, 0x8011
    ctx->r3 = S32(0X8011 << 16);
    // 0x00287190: addiu       $v1, $v1, 0x1B0
    ctx->r3 = ADD32(ctx->r3, 0X1B0);
    // 0x00287194: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00287198: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x0028719C: sw          $v0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r2;
    // 0x002871A0: lw          $s7, 0x78($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X78);
    // 0x002871A4: lw          $v0, 0x0($s7)
    ctx->r2 = MEM_W(ctx->r23, 0X0);
    // 0x002871A8: beq         $v0, $zero, L_00287210
    if (ctx->r2 == 0) {
        // 0x002871AC: addiu       $s1, $zero, 0x1
        ctx->r17 = ADD32(0, 0X1);
            goto L_00287210;
    }
    // 0x002871AC: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
    // 0x002871B0: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x002871B4: lwc1        $f20, -0x627C($at)
    ctx->f20.u32l = MEM_W(ctx->r1, -0X627C);
    // 0x002871B8: addu        $s0, $s7, $zero
    ctx->r16 = ADD32(ctx->r23, 0);
    // 0x002871BC: addu        $a2, $fp, $zero
    ctx->r6 = ADD32(ctx->r30, 0);
L_002871C0:
    // 0x002871C0: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x002871C4: lw          $a1, 0x7C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X7C);
    // 0x002871C8: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    // 0x002871CC: sw          $s1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r17;
    // 0x002871D0: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x002871D4: swc1        $f20, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f20.u32l;
    // 0x002871D8: jal         0x00278CDC
    // 0x002871DC: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    func_00278CDC(rdram, ctx);
        goto after_4;
    // 0x002871DC: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    after_4:
    // 0x002871E0: lwc1        $f0, 0x84($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X84);
    // 0x002871E4: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x002871E8: mul.s       $f0, $f0, $f21
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f21.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f21.fl);
    // 0x002871EC: mtc1        $fp, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r30;
    // 0x002871F0: cvt.s.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.fl = CVT_S_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x002871F4: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x002871F8: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x002871FC: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x00287200: trunc.w.s   $f3, $f1
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 1);
    ctx->f_odd[(3 - 1) * 2] = TRUNC_W_S(ctx->f1.fl);
    // 0x00287204: mfc1        $fp, $f3
    ctx->r30 = (int32_t)ctx->f_odd[(3 - 1) * 2];
    // 0x00287208: bne         $v0, $zero, L_002871C0
    if (ctx->r2 != 0) {
        // 0x0028720C: addu        $a2, $fp, $zero
        ctx->r6 = ADD32(ctx->r30, 0);
            goto L_002871C0;
    }
    // 0x0028720C: addu        $a2, $fp, $zero
    ctx->r6 = ADD32(ctx->r30, 0);
L_00287210:
    // 0x00287210: lw          $ra, 0x5C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X5C);
    // 0x00287214: lw          $fp, 0x58($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X58);
    // 0x00287218: lw          $s7, 0x54($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X54);
    // 0x0028721C: lw          $s6, 0x50($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X50);
    // 0x00287220: lw          $s5, 0x4C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X4C);
    // 0x00287224: lw          $s4, 0x48($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X48);
    // 0x00287228: lw          $s3, 0x44($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X44);
    // 0x0028722C: lw          $s2, 0x40($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X40);
    // 0x00287230: lw          $s1, 0x3C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X3C);
    // 0x00287234: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x00287238: ldc1        $f21, 0x68($sp)
    CHECK_FR(ctx, 21);
    ctx->f21.u64 = LD(ctx->r29, 0X68);
    // 0x0028723C: ldc1        $f20, 0x60($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X60);
    // 0x00287240: jr          $ra
    // 0x00287244: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    return;
    // 0x00287244: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
;}
RECOMP_FUNC void func_0021794C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0021794C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00217950: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00217954: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x00217958: addu        $a0, $a1, $zero
    ctx->r4 = ADD32(ctx->r5, 0);
    // 0x0021795C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00217960: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x00217964: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x00217968: sll         $v1, $a0, 2
    ctx->r3 = S32(ctx->r4 << 2);
    // 0x0021796C: addu        $v0, $v1, $v0
    ctx->r2 = ADD32(ctx->r3, ctx->r2);
    // 0x00217970: lh          $a1, 0x0($v0)
    ctx->r5 = MEM_H(ctx->r2, 0X0);
    // 0x00217974: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x00217978: bne         $a1, $v0, L_002179AC
    if (ctx->r5 != ctx->r2) {
        // 0x0021797C: addu        $s1, $a2, $zero
        ctx->r17 = ADD32(ctx->r6, 0);
            goto L_002179AC;
    }
    // 0x0021797C: addu        $s1, $a2, $zero
    ctx->r17 = ADD32(ctx->r6, 0);
    // 0x00217980: addu        $v0, $v1, $a0
    ctx->r2 = ADD32(ctx->r3, ctx->r4);
    // 0x00217984: lw          $v1, 0x4($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X4);
    // 0x00217988: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x0021798C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x00217990: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x00217994: lw          $t1, 0x4($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X4);
    // 0x00217998: lw          $t2, 0x8($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X8);
    // 0x0021799C: sw          $t0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r8;
    // 0x002179A0: sw          $t1, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->r9;
    // 0x002179A4: j           L_002179DC
    // 0x002179A8: sw          $t2, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->r10;
        goto L_002179DC;
    // 0x002179A8: sw          $t2, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->r10;
L_002179AC:
    // 0x002179AC: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    // 0x002179B0: jal         0x002017D4
    // 0x002179B4: nop

    func_002017D4(rdram, ctx);
        goto after_0;
    // 0x002179B4: nop

    after_0:
    // 0x002179B8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x002179BC: lw          $a1, 0x20($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X20);
    // 0x002179C0: lw          $a2, 0x18($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X18);
    // 0x002179C4: lw          $a3, 0x1C($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X1C);
    // 0x002179C8: sll         $a2, $a2, 2
    ctx->r6 = S32(ctx->r6 << 2);
    // 0x002179CC: sll         $a3, $a3, 2
    ctx->r7 = S32(ctx->r7 << 2);
    // 0x002179D0: addu        $a2, $v0, $a2
    ctx->r6 = ADD32(ctx->r2, ctx->r6);
    // 0x002179D4: jal         0x0020EF8C
    // 0x002179D8: addu        $a3, $v0, $a3
    ctx->r7 = ADD32(ctx->r2, ctx->r7);
    func_0020EF8C(rdram, ctx);
        goto after_1;
    // 0x002179D8: addu        $a3, $v0, $a3
    ctx->r7 = ADD32(ctx->r2, ctx->r7);
    after_1:
L_002179DC:
    // 0x002179DC: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x002179E0: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x002179E4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x002179E8: jr          $ra
    // 0x002179EC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x002179EC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_0045C308(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_00423364:
    // 0x0045C308: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x0045C30C: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x0045C310: lw          $v1, 0x990($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X990);
    // 0x0045C314: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0045C318: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0045C31C: sw          $v0, 0x980($at)
    MEM_W(0X980, ctx->r1) = ctx->r2;
    // 0x0045C320: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x0045C324: addiu       $v0, $v0, -0x675C
    ctx->r2 = ADD32(ctx->r2, -0X675C);
    // 0x0045C328: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x0045C32C: sw          $zero, 0x0($v0)
    MEM_W(0X0, ctx->r2) = 0;
    // 0x0045C330: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x0045C334: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0045C338: sw          $zero, 0x940($at)
    MEM_W(0X940, ctx->r1) = 0;
    // 0x0045C33C: beq         $v1, $zero, L_0045C354
    if (ctx->r3 == 0) {
        // 0x0045C340: addu        $a2, $zero, $zero
        ctx->r6 = ADD32(0, 0);
            goto L_0045C354;
    }
    // 0x0045C340: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x0045C344: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x0045C348: lw          $v0, 0x2028($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2028);
    // 0x0045C34C: j           L_00423364
    // 0x0045C350: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    func_00423364(rdram, ctx);
    return;
    // 0x0045C350: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
L_0045C354:
    // 0x0045C354: lw          $v0, 0x20($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X20);
    // 0x0045C358: lw          $a2, 0x1C($a1)
    ctx->r6 = MEM_W(ctx->r5, 0X1C);
    // 0x0045C35C: lb          $v0, 0x4($v0)
    ctx->r2 = MEM_B(ctx->r2, 0X4);
    // 0x0045C360: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x0045C364: lw          $a0, 0x51C($a2)
    ctx->r4 = MEM_W(ctx->r6, 0X51C);
    // 0x0045C368: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x0045C36C: addiu       $a1, $a1, -0x4450
    ctx->r5 = ADD32(ctx->r5, -0X4450);
    // 0x0045C370: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x0045C374: lw          $a3, 0xA50($a2)
    ctx->r7 = MEM_W(ctx->r6, 0XA50);
    // 0x0045C378: jal         0x00416644
    // 0x0045C37C: addiu       $a0, $a0, 0x53C
    ctx->r4 = ADD32(ctx->r4, 0X53C);
    func_00416644(rdram, ctx);
        goto after_0;
    // 0x0045C37C: addiu       $a0, $a0, 0x53C
    ctx->r4 = ADD32(ctx->r4, 0X53C);
    after_0:
    // 0x0045C380: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x0045C384: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0045C388: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0045C38C: sw          $zero, 0x998($at)
    MEM_W(0X998, ctx->r1) = 0;
    // 0x0045C390: jr          $ra
    // 0x0045C394: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x0045C394: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_00218A54(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00218A54: lwc1        $f0, 0x14($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X14);
    // 0x00218A58: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x00218A5C: lwc1        $f3, 0x4($sp)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r29, 0X4);
    // 0x00218A60: mul.s       $f3, $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f3.fl = MUL_S(ctx->f3.fl, ctx->f0.fl);
    // 0x00218A64: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    // 0x00218A68: lwc1        $f1, 0xC($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0XC);
    // 0x00218A6C: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x00218A70: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x00218A74: lwc1        $f2, 0x8($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X8);
    // 0x00218A78: mul.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x00218A7C: nop

    // 0x00218A80: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x00218A84: nop

    // 0x00218A88: mul.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x00218A8C: nop

    // 0x00218A90: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x00218A94: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x00218A98: lwc1        $f0, 0x0($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X0);
    // 0x00218A9C: add.s       $f0, $f0, $f3
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f3.fl;
    // 0x00218AA0: add.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f2.fl;
    // 0x00218AA4: jr          $ra
    // 0x00218AA8: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    return;
    // 0x00218AA8: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
;}
RECOMP_FUNC void func_00461004(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00461004: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x00461008: lui         $a2, 0x8013
    ctx->r6 = S32(0X8013 << 16);
    // 0x0046100C: addiu       $a2, $a2, 0xE20
    ctx->r6 = ADD32(ctx->r6, 0XE20);
    // 0x00461010: blez        $a0, L_00461028
    if (SIGNED(ctx->r4) <= 0) {
        // 0x00461014: addu        $v1, $zero, $zero
        ctx->r3 = ADD32(0, 0);
            goto L_00461028;
    }
    // 0x00461014: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
L_00461018:
    // 0x00461018: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x0046101C: slt         $v0, $v1, $a0
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x00461020: bne         $v0, $zero, L_00461018
    if (ctx->r2 != 0) {
        // 0x00461024: addiu       $a2, $a2, 0x1
        ctx->r6 = ADD32(ctx->r6, 0X1);
            goto L_00461018;
    }
    // 0x00461024: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
L_00461028:
    // 0x00461028: lwl         $a3, 0x0($a2)
    ctx->r7 = do_lwl(rdram, ctx->r7, ctx->r6, 0X0);
    // 0x0046102C: lwr         $a3, 0x3($a2)
    ctx->r7 = do_lwr(rdram, ctx->r7, ctx->r6, 0X3);
    // 0x00461030: lb          $t0, 0x4($a2)
    ctx->r8 = MEM_B(ctx->r6, 0X4);
    // 0x00461034: lb          $t1, 0x5($a2)
    ctx->r9 = MEM_B(ctx->r6, 0X5);
    // 0x00461038: swl         $a3, 0x0($sp)
    do_swl(rdram, 0X0, ctx->r29, ctx->r7);
    // 0x0046103C: swr         $a3, 0x3($sp)
    do_swr(rdram, 0X3, ctx->r29, ctx->r7);
    // 0x00461040: sb          $t0, 0x4($sp)
    MEM_B(0X4, ctx->r29) = ctx->r8;
    // 0x00461044: sb          $t1, 0x5($sp)
    MEM_B(0X5, ctx->r29) = ctx->r9;
    // 0x00461048: lbu         $v0, 0x1($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0X1);
    // 0x0046104C: andi        $v0, $v0, 0xC0
    ctx->r2 = ctx->r2 & 0XC0;
    // 0x00461050: srl         $v0, $v0, 4
    ctx->r2 = S32(U32(ctx->r2) >> 4);
    // 0x00461054: bne         $v0, $zero, L_00461078
    if (ctx->r2 != 0) {
        // 0x00461058: sb          $v0, 0x3($a1)
        MEM_B(0X3, ctx->r5) = ctx->r2;
            goto L_00461078;
    }
    // 0x00461058: sb          $v0, 0x3($a1)
    MEM_B(0X3, ctx->r5) = ctx->r2;
    // 0x0046105C: lbu         $v0, 0x4($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0X4);
    // 0x00461060: lbu         $v1, 0x3($sp)
    ctx->r3 = MEM_BU(ctx->r29, 0X3);
    // 0x00461064: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x00461068: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x0046106C: sh          $v1, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r3;
    // 0x00461070: lbu         $v0, 0x5($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0X5);
    // 0x00461074: sb          $v0, 0x2($a1)
    MEM_B(0X2, ctx->r5) = ctx->r2;
L_00461078:
    // 0x00461078: jr          $ra
    // 0x0046107C: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x0046107C: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_00218AAC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00218AAC: jr          $ra
    // 0x00218AB0: andi        $v0, $a0, 0x1F
    ctx->r2 = ctx->r4 & 0X1F;
    return;
    // 0x00218AB0: andi        $v0, $a0, 0x1F
    ctx->r2 = ctx->r4 & 0X1F;
;}
RECOMP_FUNC void func_00462D1C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_00429DD4:
    // 0x00462D1C: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x00462D20: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x00462D24: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x00462D28: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x00462D2C: lbu         $v0, 0x65($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X65);
    // 0x00462D30: beq         $v0, $zero, L_00462D50
    if (ctx->r2 == 0) {
        // 0x00462D34: addiu       $a2, $zero, 0x1
        ctx->r6 = ADD32(0, 0X1);
            goto L_00462D50;
    }
    // 0x00462D34: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x00462D38: jal         0x00429DE4
    // 0x00462D3C: sb          $zero, 0x65($s0)
    MEM_B(0X65, ctx->r16) = 0;
    entry_00429DE4(rdram, ctx);
        goto after_0;
    // 0x00462D3C: sb          $zero, 0x65($s0)
    MEM_B(0X65, ctx->r16) = 0;
    after_0:
    // 0x00462D40: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x00462D44: bne         $v1, $zero, L_00462DD4
    if (ctx->r3 != 0) {
        // 0x00462D48: nop
    
            goto L_00462DD4;
    }
    // 0x00462D48: nop

    // 0x00462D4C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
L_00462D50:
    // 0x00462D50: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x00462D54: lw          $a1, 0x8($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X8);
    // 0x00462D58: jal         0x00299680
    // 0x00462D5C: addiu       $a3, $sp, 0x10
    ctx->r7 = ADD32(ctx->r29, 0X10);
    func_00299680(rdram, ctx);
        goto after_1;
    // 0x00462D5C: addiu       $a3, $sp, 0x10
    ctx->r7 = ADD32(ctx->r29, 0X10);
    after_1:
    // 0x00462D60: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x00462D64: beq         $v1, $zero, L_00462DA4
    if (ctx->r3 == 0) {
        // 0x00462D68: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_00462DA4;
    }
    // 0x00462D68: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x00462D6C: bne         $v1, $v0, L_00462DD4
    if (ctx->r3 != ctx->r2) {
        // 0x00462D70: addu        $v0, $v1, $zero
        ctx->r2 = ADD32(ctx->r3, 0);
            goto L_00462DD4;
    }
    // 0x00462D70: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
    // 0x00462D74: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x00462D78: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x00462D7C: lw          $a1, 0x8($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X8);
    // 0x00462D80: jal         0x00299680
    // 0x00462D84: addiu       $a3, $sp, 0x10
    ctx->r7 = ADD32(ctx->r29, 0X10);
    func_00299680(rdram, ctx);
        goto after_2;
    // 0x00462D84: addiu       $a3, $sp, 0x10
    ctx->r7 = ADD32(ctx->r29, 0X10);
    after_2:
    // 0x00462D88: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x00462D8C: beq         $v1, $zero, L_00462DA8
    if (ctx->r3 == 0) {
        // 0x00462D90: addu        $a1, $zero, $zero
        ctx->r5 = ADD32(0, 0);
            goto L_00462DA8;
    }
    // 0x00462D90: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x00462D94: j           L_00429DD4
    // 0x00462D98: nop

    entry_00429DD4(rdram, ctx);
    return;
    // 0x00462D98: nop

L_00462D9C:
    // 0x00462D9C: j           L_00429DD4
    // 0x00462DA0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    entry_00429DD4(rdram, ctx);
    return;
    // 0x00462DA0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_00462DA4:
    // 0x00462DA4: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
L_00462DA8:
    // 0x00462DA8: addiu       $a2, $sp, 0x10
    ctx->r6 = ADD32(ctx->r29, 0X10);
    // 0x00462DAC: addu        $v0, $s0, $a1
    ctx->r2 = ADD32(ctx->r16, ctx->r5);
L_00462DB0:
    // 0x00462DB0: addu        $v1, $a2, $a1
    ctx->r3 = ADD32(ctx->r6, ctx->r5);
    // 0x00462DB4: lbu         $a0, 0xC($v0)
    ctx->r4 = MEM_BU(ctx->r2, 0XC);
    // 0x00462DB8: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x00462DBC: bne         $a0, $v0, L_00462D9C
    if (ctx->r4 != ctx->r2) {
        // 0x00462DC0: addiu       $a1, $a1, 0x1
        ctx->r5 = ADD32(ctx->r5, 0X1);
            goto L_00462D9C;
    }
    // 0x00462DC0: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x00462DC4: slti        $v0, $a1, 0x20
    ctx->r2 = SIGNED(ctx->r5) < 0X20 ? 1 : 0;
    // 0x00462DC8: bne         $v0, $zero, L_00462DB0
    if (ctx->r2 != 0) {
        // 0x00462DCC: addu        $v0, $s0, $a1
        ctx->r2 = ADD32(ctx->r16, ctx->r5);
            goto L_00462DB0;
    }
    // 0x00462DCC: addu        $v0, $s0, $a1
    ctx->r2 = ADD32(ctx->r16, ctx->r5);
    // 0x00462DD0: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_00462DD4:
    // 0x00462DD4: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x00462DD8: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x00462DDC: jr          $ra
    // 0x00462DE0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x00462DE0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_0045A15C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0045A15C: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x0045A160: lw          $v0, 0x2028($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2028);
    // 0x0045A164: nor         $v0, $zero, $v0
    ctx->r2 = ~(0 | ctx->r2);
    // 0x0045A168: jr          $ra
    // 0x0045A16C: sltu        $v0, $zero, $v0
    ctx->r2 = 0 < ctx->r2 ? 1 : 0;
    return;
    // 0x0045A16C: sltu        $v0, $zero, $v0
    ctx->r2 = 0 < ctx->r2 ? 1 : 0;
;}
RECOMP_FUNC void func_0041B8CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041B8CC: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x0041B8D0: lw          $v0, -0x5524($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X5524);
    // 0x0041B8D4: andi        $v0, $v0, 0x2000
    ctx->r2 = ctx->r2 & 0X2000;
    // 0x0041B8D8: beq         $v0, $zero, L_0041B8EC
    if (ctx->r2 == 0) {
            // 0x0041B8DC: lui         $v1, 0x100
    ctx->r3 = S32(0X100 << 16);
    func_0041B8EC(rdram, ctx);
    return;
    }
    // 0x0041B8DC: lui         $v1, 0x100
    ctx->r3 = S32(0X100 << 16);
    // 0x0041B8E0: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x0041B8E4: j           L_0041B8FC
    // 0x0041B8E8: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    entry_0041B8FC(rdram, ctx);
    return;
    // 0x0041B8E8: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // turok2: reconnected split function: a stray ELF symbol at 0x0041B8EC ended
    // this function early, leaving it without its epilogue. On the
    // hardware execution simply continues into the next instruction.
    func_0041B8EC(rdram, ctx);
;}
RECOMP_FUNC void func_00228B98(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00228B98: lw          $v0, 0x4($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X4);
    // 0x00228B9C: jr          $ra
    // 0x00228BA0: nop

    return;
    // 0x00228BA0: nop

    // 0x00228BA4: nop

    // 0x00228BA8: .word       0x0001B9D2                   # mflo        $s7 # 000101C0 <InstrIdType: CPU_SPECIAL>
    ctx->r23 = lo;
    // 0x00228BAC: .word       0x00003A98                   # mult        $zero, $zero # 00003A80 <InstrIdType: CPU_SPECIAL>
    result = S64(S32(0)) * S64(S32(0)); lo = S32(result >> 0); hi = S32(result >> 32);
;}
RECOMP_FUNC void func_00210EF0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00210EF0: lwc1        $f0, 0x0($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X0);
    // 0x00210EF4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00210EF8: lwc1        $f1, 0x5640($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X5640);
    // 0x00210EFC: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x00210F00: nop

    // 0x00210F04: bc1f        L_00210F2C
    if (!c1cs) {
        // 0x00210F08: nop
    
            goto L_00210F2C;
    }
    // 0x00210F08: nop

    // 0x00210F0C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00210F10: lwc1        $f2, 0x5644($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X5644);
L_00210F14:
    // 0x00210F14: add.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f2.fl;
    // 0x00210F18: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x00210F1C: nop

    // 0x00210F20: bc1t        L_00210F14
    if (c1cs) {
        // 0x00210F24: swc1        $f0, 0x0($a0)
        MEM_W(0X0, ctx->r4) = ctx->f0.u32l;
            goto L_00210F14;
    }
    // 0x00210F24: swc1        $f0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f0.u32l;
    // 0x00210F28: lwc1        $f0, 0x0($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X0);
L_00210F2C:
    // 0x00210F2C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00210F30: lwc1        $f1, 0x5648($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X5648);
    // 0x00210F34: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x00210F38: nop

    // 0x00210F3C: bc1f        L_00210F60
    if (!c1cs) {
        // 0x00210F40: nop
    
            goto L_00210F60;
    }
    // 0x00210F40: nop

    // 0x00210F44: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00210F48: lwc1        $f2, 0x564C($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X564C);
L_00210F4C:
    // 0x00210F4C: sub.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f2.fl;
    // 0x00210F50: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x00210F54: nop

    // 0x00210F58: bc1t        L_00210F4C
    if (c1cs) {
        // 0x00210F5C: swc1        $f0, 0x0($a0)
        MEM_W(0X0, ctx->r4) = ctx->f0.u32l;
            goto L_00210F4C;
    }
    // 0x00210F5C: swc1        $f0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f0.u32l;
L_00210F60:
    // 0x00210F60: jr          $ra
    // 0x00210F64: nop

    return;
    // 0x00210F64: nop

;}
RECOMP_FUNC void func_002018F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002018F0: sw          $a0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r4;
    // 0x002018F4: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x002018F8: lw          $v0, 0x4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X4);
    // 0x002018FC: mult        $v1, $v0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x00201900: mflo        $a3
    ctx->r7 = lo;
    // 0x00201904: addiu       $v0, $a3, 0x8
    ctx->r2 = ADD32(ctx->r7, 0X8);
    // 0x00201908: jr          $ra
    // 0x0020190C: sw          $v0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r2;
    return;
    // 0x0020190C: sw          $v0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r2;
;}
RECOMP_FUNC void func_00227EE8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00227EE8: addiu       $sp, $sp, -0xB8
    ctx->r29 = ADD32(ctx->r29, -0XB8);
    // 0x00227EEC: sw          $ra, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->r31;
    // 0x00227EF0: sw          $s5, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r21;
    // 0x00227EF4: sw          $s4, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r20;
    // 0x00227EF8: sw          $s3, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->r19;
    // 0x00227EFC: sw          $s2, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->r18;
    // 0x00227F00: sw          $s1, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r17;
    // 0x00227F04: sw          $s0, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r16;
    // 0x00227F08: sdc1        $f20, 0xB0($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0XB0, ctx->r29);
    // 0x00227F0C: lbu         $s0, 0x0($a1)
    ctx->r16 = MEM_BU(ctx->r5, 0X0);
    // 0x00227F10: lhu         $s4, 0xB8($a1)
    ctx->r20 = MEM_HU(ctx->r5, 0XB8);
    // 0x00227F14: lw          $s3, 0x14($a1)
    ctx->r19 = MEM_W(ctx->r5, 0X14);
    // 0x00227F18: lw          $s5, 0x10($a1)
    ctx->r21 = MEM_W(ctx->r5, 0X10);
    // 0x00227F1C: lwc1        $f20, 0x50($a1)
    ctx->f20.u32l = MEM_W(ctx->r5, 0X50);
    // 0x00227F20: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00227F24: lw          $v0, 0x6D54($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X6D54);
    // 0x00227F28: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x00227F2C: lw          $v1, 0x4($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X4);
    // 0x00227F30: lw          $t0, 0x8($a1)
    ctx->r8 = MEM_W(ctx->r5, 0X8);
    // 0x00227F34: lw          $t1, 0xC($a1)
    ctx->r9 = MEM_W(ctx->r5, 0XC);
    // 0x00227F38: sw          $v1, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r3;
    // 0x00227F3C: sw          $t0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r8;
    // 0x00227F40: sw          $t1, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r9;
    // 0x00227F44: lw          $v1, 0x18($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X18);
    // 0x00227F48: lw          $t0, 0x1C($a1)
    ctx->r8 = MEM_W(ctx->r5, 0X1C);
    // 0x00227F4C: lw          $t1, 0x20($a1)
    ctx->r9 = MEM_W(ctx->r5, 0X20);
    // 0x00227F50: sw          $v1, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r3;
    // 0x00227F54: sw          $t0, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r8;
    // 0x00227F58: sw          $t1, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r9;
    // 0x00227F5C: lw          $v1, 0x34($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X34);
    // 0x00227F60: lw          $t0, 0x38($a1)
    ctx->r8 = MEM_W(ctx->r5, 0X38);
    // 0x00227F64: lw          $t1, 0x3C($a1)
    ctx->r9 = MEM_W(ctx->r5, 0X3C);
    // 0x00227F68: sw          $v1, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r3;
    // 0x00227F6C: sw          $t0, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r8;
    // 0x00227F70: sw          $t1, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r9;
    // 0x00227F74: beq         $v0, $zero, L_00227FF8
    if (ctx->r2 == 0) {
        // 0x00227F78: addu        $s1, $s0, $zero
        ctx->r17 = ADD32(ctx->r16, 0);
            goto L_00227FF8;
    }
    // 0x00227F78: addu        $s1, $s0, $zero
    ctx->r17 = ADD32(ctx->r16, 0);
    // 0x00227F7C: beq         $s3, $zero, L_00228088
    if (ctx->r19 == 0) {
        // 0x00227F80: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_00228088;
    }
    // 0x00227F80: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x00227F84: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x00227F88: bne         $s1, $v0, L_00227FAC
    if (ctx->r17 != ctx->r2) {
        // 0x00227F8C: nop
    
            goto L_00227FAC;
    }
    // 0x00227F8C: nop

    // 0x00227F90: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x00227F94: addiu       $a0, $a0, 0x7078
    ctx->r4 = ADD32(ctx->r4, 0X7078);
    // 0x00227F98: jal         0x00224180
    // 0x00227F9C: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    func_00224180(rdram, ctx);
        goto after_0;
    // 0x00227F9C: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    after_0:
    // 0x00227FA0: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x00227FA4: beq         $s1, $s0, L_00228088
    if (ctx->r17 == ctx->r16) {
        // 0x00227FA8: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_00228088;
    }
    // 0x00227FA8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_00227FAC:
    // 0x00227FAC: lui         $v0, 0x8011
    ctx->r2 = S32(0X8011 << 16);
    // 0x00227FB0: lw          $v0, 0x1C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1C);
    // 0x00227FB4: bne         $v0, $zero, L_00227FCC
    if (ctx->r2 != 0) {
        // 0x00227FB8: nop
    
            goto L_00227FCC;
    }
    // 0x00227FB8: nop

    // 0x00227FBC: lw          $v0, 0x5324($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X5324);
    // 0x00227FC0: sltiu       $v0, $v0, 0x3
    ctx->r2 = ctx->r2 < 0X3 ? 1 : 0;
    // 0x00227FC4: beq         $v0, $zero, L_00227FF0
    if (ctx->r2 == 0) {
        // 0x00227FC8: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_00227FF0;
    }
    // 0x00227FC8: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
L_00227FCC:
    // 0x00227FCC: lw          $s0, 0x5300($s2)
    ctx->r16 = MEM_W(ctx->r18, 0X5300);
    // 0x00227FD0: beq         $s0, $zero, L_00227FF0
    if (ctx->r16 == 0) {
        // 0x00227FD4: addiu       $a0, $s2, 0x5300
        ctx->r4 = ADD32(ctx->r18, 0X5300);
            goto L_00227FF0;
    }
    // 0x00227FD4: addiu       $a0, $s2, 0x5300
    ctx->r4 = ADD32(ctx->r18, 0X5300);
    // 0x00227FD8: jal         0x00200738
    // 0x00227FDC: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_00200738(rdram, ctx);
        goto after_1;
    // 0x00227FDC: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_1:
    // 0x00227FE0: addiu       $a0, $s2, 0x5314
    ctx->r4 = ADD32(ctx->r18, 0X5314);
    // 0x00227FE4: jal         0x00200518
    // 0x00227FE8: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_00200518(rdram, ctx);
        goto after_2;
    // 0x00227FE8: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_2:
    // 0x00227FEC: sw          $zero, 0x290($s0)
    MEM_W(0X290, ctx->r16) = 0;
L_00227FF0:
    // 0x00227FF0: bne         $s0, $zero, L_00228000
    if (ctx->r16 != 0) {
        // 0x00227FF4: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_00228000;
    }
    // 0x00227FF4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_00227FF8:
    // 0x00227FF8: j           L_00228088
    // 0x00227FFC: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
        goto L_00228088;
    // 0x00227FFC: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_00228000:
    // 0x00228000: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x00228004: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x00228008: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x0022800C: lui         $v0, 0x8
    ctx->r2 = S32(0X8 << 16);
    // 0x00228010: lui         $a3, 0x800B
    ctx->r7 = S32(0X800B << 16);
    // 0x00228014: lw          $a3, 0x6D00($a3)
    ctx->r7 = MEM_W(ctx->r7, 0X6D00);
    // 0x00228018: addu        $a2, $s4, $zero
    ctx->r6 = ADD32(ctx->r20, 0);
    // 0x0022801C: sw          $s3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r19;
    // 0x00228020: sw          $s5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r21;
    // 0x00228024: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x00228028: lw          $v1, 0x64($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X64);
    // 0x0022802C: lw          $t0, 0x68($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X68);
    // 0x00228030: lw          $t1, 0x6C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X6C);
    // 0x00228034: sw          $v1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r3;
    // 0x00228038: sw          $t0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r8;
    // 0x0022803C: sw          $t1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r9;
    // 0x00228040: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x00228044: lw          $v1, 0x80($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X80);
    // 0x00228048: lw          $t0, 0x84($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X84);
    // 0x0022804C: lw          $t1, 0x88($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X88);
    // 0x00228050: sw          $v1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r3;
    // 0x00228054: sw          $t0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r8;
    // 0x00228058: sw          $t1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r9;
    // 0x0022805C: lw          $v1, 0x74($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X74);
    // 0x00228060: lw          $t0, 0x78($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X78);
    // 0x00228064: lw          $t1, 0x7C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X7C);
    // 0x00228068: sw          $v1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r3;
    // 0x0022806C: sw          $t0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r8;
    // 0x00228070: sw          $t1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r9;
    // 0x00228074: jal         0x00219BC0
    // 0x00228078: sw          $zero, 0x48($sp)
    MEM_W(0X48, ctx->r29) = 0;
    func_00219BC0(rdram, ctx);
        goto after_3;
    // 0x00228078: sw          $zero, 0x48($sp)
    MEM_W(0X48, ctx->r29) = 0;
    after_3:
    // 0x0022807C: jal         0x0021E5D4
    // 0x00228080: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_0021E5D4(rdram, ctx);
        goto after_4;
    // 0x00228080: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
    // 0x00228084: addu        $v0, $s0, $zero
    ctx->r2 = ADD32(ctx->r16, 0);
L_00228088:
    // 0x00228088: lw          $ra, 0xA8($sp)
    ctx->r31 = MEM_W(ctx->r29, 0XA8);
    // 0x0022808C: lw          $s5, 0xA4($sp)
    ctx->r21 = MEM_W(ctx->r29, 0XA4);
    // 0x00228090: lw          $s4, 0xA0($sp)
    ctx->r20 = MEM_W(ctx->r29, 0XA0);
    // 0x00228094: lw          $s3, 0x9C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X9C);
    // 0x00228098: lw          $s2, 0x98($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X98);
    // 0x0022809C: lw          $s1, 0x94($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X94);
    // 0x002280A0: lw          $s0, 0x90($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X90);
    // 0x002280A4: ldc1        $f20, 0xB0($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0XB0);
    // 0x002280A8: jr          $ra
    // 0x002280AC: addiu       $sp, $sp, 0xB8
    ctx->r29 = ADD32(ctx->r29, 0XB8);
    return;
    // 0x002280AC: addiu       $sp, $sp, 0xB8
    ctx->r29 = ADD32(ctx->r29, 0XB8);
;}
RECOMP_FUNC void func_00257D48(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00257D48: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00257D4C: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x00257D50: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x00257D54: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00257D58: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x00257D5C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x00257D60: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00257D64: lw          $s0, 0x1A8($s2)
    ctx->r16 = MEM_W(ctx->r18, 0X1A8);
    // 0x00257D68: lwc1        $f1, 0x130($s1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r17, 0X130);
    // 0x00257D6C: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x00257D70: lh          $v1, 0xA08($s0)
    ctx->r3 = MEM_H(ctx->r16, 0XA08);
    // 0x00257D74: c.lt.s      $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f2.fl < ctx->f1.fl;
    // 0x00257D78: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x00257D7C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x00257D80: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x00257D84: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00257D88: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x00257D8C: lh          $a0, -0x2098($at)
    ctx->r4 = MEM_H(ctx->r1, -0X2098);
    // 0x00257D90: bc1f        L_00257DA8
    if (!c1cs) {
        // 0x00257D94: nop
    
            goto L_00257DA8;
    }
    // 0x00257D94: nop

    // 0x00257D98: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00257D9C: lwc1        $f0, 0x6D28($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6D28);
    // 0x00257DA0: sub.s       $f0, $f1, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f1.fl - ctx->f0.fl;
    // 0x00257DA4: swc1        $f0, 0x130($s1)
    MEM_W(0X130, ctx->r17) = ctx->f0.u32l;
L_00257DA8:
    // 0x00257DA8: lh          $v1, 0x996($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X996);
    // 0x00257DAC: addiu       $v0, $zero, 0x15
    ctx->r2 = ADD32(0, 0X15);
    // 0x00257DB0: bnel        $v1, $v0, L_00257DB8
    if (ctx->r3 != ctx->r2) {
        // 0x00257DB4: sw          $zero, 0x128($s1)
        MEM_W(0X128, ctx->r17) = 0;
            goto L_00257DB8;
    }
    goto skip_0;
    // 0x00257DB4: sw          $zero, 0x128($s1)
    MEM_W(0X128, ctx->r17) = 0;
    skip_0:
L_00257DB8:
    // 0x00257DB8: lwc1        $f1, 0x118($s1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r17, 0X118);
    // 0x00257DBC: c.lt.s      $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f2.fl < ctx->f1.fl;
    // 0x00257DC0: nop

    // 0x00257DC4: bc1f        L_00257DDC
    if (!c1cs) {
        // 0x00257DC8: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_00257DDC;
    }
    // 0x00257DC8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00257DCC: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00257DD0: lwc1        $f0, 0x6D28($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6D28);
    // 0x00257DD4: sub.s       $f0, $f1, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f1.fl - ctx->f0.fl;
    // 0x00257DD8: swc1        $f0, 0x118($s1)
    MEM_W(0X118, ctx->r17) = ctx->f0.u32l;
L_00257DDC:
    // 0x00257DDC: bne         $a0, $v0, L_00257DF0
    if (ctx->r4 != ctx->r2) {
        // 0x00257DE0: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_00257DF0;
    }
    // 0x00257DE0: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x00257DE4: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x00257DE8: jal         0x00243414
    // 0x00257DEC: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    func_00243414(rdram, ctx);
        goto after_0;
    // 0x00257DEC: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    after_0:
L_00257DF0:
    // 0x00257DF0: lh          $v1, 0xB14($s0)
    ctx->r3 = MEM_H(ctx->r16, 0XB14);
    // 0x00257DF4: lh          $v0, 0x996($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X996);
    // 0x00257DF8: beq         $v1, $v0, L_00257E10
    if (ctx->r3 == ctx->r2) {
        // 0x00257DFC: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_00257E10;
    }
    // 0x00257DFC: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x00257E00: sw          $zero, 0xB8C($s0)
    MEM_W(0XB8C, ctx->r16) = 0;
    // 0x00257E04: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x00257E08: jal         0x00243414
    // 0x00257E0C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_00243414(rdram, ctx);
        goto after_1;
    // 0x00257E0C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_1:
L_00257E10:
    // 0x00257E10: lw          $v0, 0x30($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X30);
    // 0x00257E14: beq         $v0, $zero, L_00257E30
    if (ctx->r2 == 0) {
        // 0x00257E18: nop
    
            goto L_00257E30;
    }
    // 0x00257E18: nop

    // 0x00257E1C: lw          $v0, 0x8($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X8);
    // 0x00257E20: beq         $v0, $zero, L_00257E30
    if (ctx->r2 == 0) {
        // 0x00257E24: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_00257E30;
    }
    // 0x00257E24: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x00257E28: jalr        $v0
    // 0x00257E2C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_2;
    // 0x00257E2C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_2:
L_00257E30:
    // 0x00257E30: lh          $v0, 0x996($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X996);
    // 0x00257E34: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x00257E38: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00257E3C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x00257E40: lw          $v0, -0x9E8($at)
    ctx->r2 = MEM_W(ctx->r1, -0X9E8);
    // 0x00257E44: lw          $v0, 0x50($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X50);
    // 0x00257E48: beq         $v0, $zero, L_00257E58
    if (ctx->r2 == 0) {
        // 0x00257E4C: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_00257E58;
    }
    // 0x00257E4C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x00257E50: jalr        $v0
    // 0x00257E54: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_3;
    // 0x00257E54: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_3:
L_00257E58:
    // 0x00257E58: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x00257E5C: addiu       $a0, $a0, 0x7078
    ctx->r4 = ADD32(ctx->r4, 0X7078);
    // 0x00257E60: lh          $v0, 0x996($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X996);
    // 0x00257E64: lw          $v1, 0x2C($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X2C);
    // 0x00257E68: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x00257E6C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00257E70: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x00257E74: lw          $v0, -0x9E8($at)
    ctx->r2 = MEM_W(ctx->r1, -0X9E8);
    // 0x00257E78: lw          $a3, 0x10($v1)
    ctx->r7 = MEM_W(ctx->r3, 0X10);
    // 0x00257E7C: lhu         $a2, 0x4($v0)
    ctx->r6 = MEM_HU(ctx->r2, 0X4);
    // 0x00257E80: jal         0x002241D8
    // 0x00257E84: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    func_002241D8(rdram, ctx);
        goto after_4;
    // 0x00257E84: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    after_4:
    // 0x00257E88: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x00257E8C: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x00257E90: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00257E94: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00257E98: jr          $ra
    // 0x00257E9C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00257E9C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_00262C20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00262C20: addiu       $v0, $zero, 0x5F3
    ctx->r2 = ADD32(0, 0X5F3);
    // 0x00262C24: beq         $a0, $v0, L_00262D5C
    if (ctx->r4 == ctx->r2) {
        // 0x00262C28: slti        $v0, $a0, 0x5F4
        ctx->r2 = SIGNED(ctx->r4) < 0X5F4 ? 1 : 0;
            goto L_00262D5C;
    }
    // 0x00262C28: slti        $v0, $a0, 0x5F4
    ctx->r2 = SIGNED(ctx->r4) < 0X5F4 ? 1 : 0;
    // 0x00262C2C: beq         $v0, $zero, L_00262C88
    if (ctx->r2 == 0) {
        // 0x00262C30: addiu       $v0, $zero, 0x5EE
        ctx->r2 = ADD32(0, 0X5EE);
            goto L_00262C88;
    }
    // 0x00262C30: addiu       $v0, $zero, 0x5EE
    ctx->r2 = ADD32(0, 0X5EE);
    // 0x00262C34: beq         $a0, $v0, L_00262D1C
    if (ctx->r4 == ctx->r2) {
        // 0x00262C38: slti        $v0, $a0, 0x5EF
        ctx->r2 = SIGNED(ctx->r4) < 0X5EF ? 1 : 0;
            goto L_00262D1C;
    }
    // 0x00262C38: slti        $v0, $a0, 0x5EF
    ctx->r2 = SIGNED(ctx->r4) < 0X5EF ? 1 : 0;
    // 0x00262C3C: beq         $v0, $zero, L_00262C64
    if (ctx->r2 == 0) {
        // 0x00262C40: addiu       $v0, $zero, 0x5EC
        ctx->r2 = ADD32(0, 0X5EC);
            goto L_00262C64;
    }
    // 0x00262C40: addiu       $v0, $zero, 0x5EC
    ctx->r2 = ADD32(0, 0X5EC);
    // 0x00262C44: beq         $a0, $v0, L_00262CFC
    if (ctx->r4 == ctx->r2) {
        // 0x00262C48: slti        $v0, $a0, 0x5ED
        ctx->r2 = SIGNED(ctx->r4) < 0X5ED ? 1 : 0;
            goto L_00262CFC;
    }
    // 0x00262C48: slti        $v0, $a0, 0x5ED
    ctx->r2 = SIGNED(ctx->r4) < 0X5ED ? 1 : 0;
    // 0x00262C4C: beq         $v0, $zero, L_00262D0C
    if (ctx->r2 == 0) {
        // 0x00262C50: addiu       $v0, $zero, 0x5EB
        ctx->r2 = ADD32(0, 0X5EB);
            goto L_00262D0C;
    }
    // 0x00262C50: addiu       $v0, $zero, 0x5EB
    ctx->r2 = ADD32(0, 0X5EB);
    // 0x00262C54: beq         $a0, $v0, L_00262CE8
    if (ctx->r4 == ctx->r2) {
        // 0x00262C58: nop
    
            goto L_00262CE8;
    }
    // 0x00262C58: nop

    // 0x00262C5C: jr          $ra
    // 0x00262C60: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x00262C60: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_00262C64:
    // 0x00262C64: addiu       $v0, $zero, 0x5F0
    ctx->r2 = ADD32(0, 0X5F0);
    // 0x00262C68: beq         $a0, $v0, L_00262D3C
    if (ctx->r4 == ctx->r2) {
        // 0x00262C6C: slt         $v0, $a0, $v0
        ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r2) ? 1 : 0;
            goto L_00262D3C;
    }
    // 0x00262C6C: slt         $v0, $a0, $v0
    ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x00262C70: bne         $v0, $zero, L_00262D2C
    if (ctx->r2 != 0) {
        // 0x00262C74: addiu       $v0, $zero, 0x5F1
        ctx->r2 = ADD32(0, 0X5F1);
            goto L_00262D2C;
    }
    // 0x00262C74: addiu       $v0, $zero, 0x5F1
    ctx->r2 = ADD32(0, 0X5F1);
    // 0x00262C78: beq         $a0, $v0, L_00262D4C
    if (ctx->r4 == ctx->r2) {
        // 0x00262C7C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_00262D4C;
    }
    // 0x00262C7C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00262C80: j           L_00262D6C
    // 0x00262C84: nop

        goto L_00262D6C;
    // 0x00262C84: nop

L_00262C88:
    // 0x00262C88: addiu       $v0, $zero, 0x845
    ctx->r2 = ADD32(0, 0X845);
    // 0x00262C8C: beq         $a0, $v0, L_00262D1C
    if (ctx->r4 == ctx->r2) {
        // 0x00262C90: slti        $v0, $a0, 0x846
        ctx->r2 = SIGNED(ctx->r4) < 0X846 ? 1 : 0;
            goto L_00262D1C;
    }
    // 0x00262C90: slti        $v0, $a0, 0x846
    ctx->r2 = SIGNED(ctx->r4) < 0X846 ? 1 : 0;
    // 0x00262C94: beq         $v0, $zero, L_00262CBC
    if (ctx->r2 == 0) {
        // 0x00262C98: addiu       $v0, $zero, 0x843
        ctx->r2 = ADD32(0, 0X843);
            goto L_00262CBC;
    }
    // 0x00262C98: addiu       $v0, $zero, 0x843
    ctx->r2 = ADD32(0, 0X843);
    // 0x00262C9C: beq         $a0, $v0, L_00262CFC
    if (ctx->r4 == ctx->r2) {
        // 0x00262CA0: slti        $v0, $a0, 0x844
        ctx->r2 = SIGNED(ctx->r4) < 0X844 ? 1 : 0;
            goto L_00262CFC;
    }
    // 0x00262CA0: slti        $v0, $a0, 0x844
    ctx->r2 = SIGNED(ctx->r4) < 0X844 ? 1 : 0;
    // 0x00262CA4: beq         $v0, $zero, L_00262D0C
    if (ctx->r2 == 0) {
        // 0x00262CA8: addiu       $v0, $zero, 0x842
        ctx->r2 = ADD32(0, 0X842);
            goto L_00262D0C;
    }
    // 0x00262CA8: addiu       $v0, $zero, 0x842
    ctx->r2 = ADD32(0, 0X842);
    // 0x00262CAC: beq         $a0, $v0, L_00262CE8
    if (ctx->r4 == ctx->r2) {
        // 0x00262CB0: nop
    
            goto L_00262CE8;
    }
    // 0x00262CB0: nop

    // 0x00262CB4: jr          $ra
    // 0x00262CB8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x00262CB8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_00262CBC:
    // 0x00262CBC: addiu       $v0, $zero, 0x847
    ctx->r2 = ADD32(0, 0X847);
    // 0x00262CC0: beq         $a0, $v0, L_00262D3C
    if (ctx->r4 == ctx->r2) {
        // 0x00262CC4: slt         $v0, $a0, $v0
        ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r2) ? 1 : 0;
            goto L_00262D3C;
    }
    // 0x00262CC4: slt         $v0, $a0, $v0
    ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x00262CC8: bne         $v0, $zero, L_00262D2C
    if (ctx->r2 != 0) {
        // 0x00262CCC: addiu       $v0, $zero, 0x848
        ctx->r2 = ADD32(0, 0X848);
            goto L_00262D2C;
    }
    // 0x00262CCC: addiu       $v0, $zero, 0x848
    ctx->r2 = ADD32(0, 0X848);
    // 0x00262CD0: beq         $a0, $v0, L_00262D4C
    if (ctx->r4 == ctx->r2) {
        // 0x00262CD4: addiu       $v0, $zero, 0x84A
        ctx->r2 = ADD32(0, 0X84A);
            goto L_00262D4C;
    }
    // 0x00262CD4: addiu       $v0, $zero, 0x84A
    ctx->r2 = ADD32(0, 0X84A);
    // 0x00262CD8: beq         $a0, $v0, L_00262D5C
    if (ctx->r4 == ctx->r2) {
        // 0x00262CDC: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_00262D5C;
    }
    // 0x00262CDC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00262CE0: jr          $ra
    // 0x00262CE4: nop

    return;
    // 0x00262CE4: nop

L_00262CE8:
    // 0x00262CE8: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x00262CEC: lbu         $v0, -0x54F7($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X54F7);
    // 0x00262CF0: xori        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 ^ 0X1;
L_00262CF4:
    // 0x00262CF4: jr          $ra
    // 0x00262CF8: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    return;
    // 0x00262CF8: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
L_00262CFC:
    // 0x00262CFC: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x00262D00: lbu         $v0, -0x54F6($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X54F6);
    // 0x00262D04: j           L_00262CF4
    // 0x00262D08: xori        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 ^ 0X1;
        goto L_00262CF4;
    // 0x00262D08: xori        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 ^ 0X1;
L_00262D0C:
    // 0x00262D0C: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x00262D10: lbu         $v0, -0x54F5($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X54F5);
    // 0x00262D14: j           L_00262CF4
    // 0x00262D18: xori        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 ^ 0X1;
        goto L_00262CF4;
    // 0x00262D18: xori        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 ^ 0X1;
L_00262D1C:
    // 0x00262D1C: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x00262D20: lbu         $v0, -0x54F4($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X54F4);
    // 0x00262D24: j           L_00262CF4
    // 0x00262D28: xori        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 ^ 0X1;
        goto L_00262CF4;
    // 0x00262D28: xori        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 ^ 0X1;
L_00262D2C:
    // 0x00262D2C: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x00262D30: lbu         $v0, -0x54F3($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X54F3);
    // 0x00262D34: j           L_00262CF4
    // 0x00262D38: xori        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 ^ 0X1;
        goto L_00262CF4;
    // 0x00262D38: xori        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 ^ 0X1;
L_00262D3C:
    // 0x00262D3C: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x00262D40: lbu         $v0, -0x54F2($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X54F2);
    // 0x00262D44: j           L_00262CF4
    // 0x00262D48: xori        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 ^ 0X1;
        goto L_00262CF4;
    // 0x00262D48: xori        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 ^ 0X1;
L_00262D4C:
    // 0x00262D4C: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x00262D50: lbu         $v0, -0x54F1($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X54F1);
    // 0x00262D54: j           L_00262CF4
    // 0x00262D58: xori        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 ^ 0X1;
        goto L_00262CF4;
    // 0x00262D58: xori        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 ^ 0X1;
L_00262D5C:
    // 0x00262D5C: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x00262D60: lbu         $v0, -0x54EF($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X54EF);
    // 0x00262D64: xori        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 ^ 0X1;
    // 0x00262D68: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
L_00262D6C:
    // 0x00262D6C: jr          $ra
    // 0x00262D70: nop

    return;
    // 0x00262D70: nop

;}
RECOMP_FUNC void func_00441E40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00441E40: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00441E44: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x00441E48: addiu       $a0, $a0, 0x7078
    ctx->r4 = ADD32(ctx->r4, 0X7078);
    // 0x00441E4C: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x00441E50: jal         0x00225D0C
    // 0x00441E54: nop

    func_00225D0C(rdram, ctx);
        goto after_0;
    // 0x00441E54: nop

    after_0:
    // 0x00441E58: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x00441E5C: jr          $ra
    // 0x00441E60: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00441E60: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_002680EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002680EC: lw          $v0, 0x48($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X48);
    // 0x002680F0: jr          $ra
    // 0x002680F4: andi        $v0, $v0, 0x400
    ctx->r2 = ctx->r2 & 0X400;
    return;
    // 0x002680F4: andi        $v0, $v0, 0x400
    ctx->r2 = ctx->r2 & 0X400;
;}
RECOMP_FUNC void func_00416C0C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00416C0C: lw          $v0, 0x1CC($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X1CC);
    // 0x00416C10: bne         $v0, $zero, L_00416C20
    if (ctx->r2 != 0) {
        // 0x00416C14: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_00416C20;
    }
    // 0x00416C14: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00416C18: sw          $v0, 0x1CC($a0)
    MEM_W(0X1CC, ctx->r4) = ctx->r2;
    // 0x00416C1C: sw          $zero, 0x1C8($a0)
    MEM_W(0X1C8, ctx->r4) = 0;
L_00416C20:
    // 0x00416C20: jr          $ra
    // 0x00416C24: nop

    return;
    // 0x00416C24: nop

;}
RECOMP_FUNC void func_0025AD30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0025AD30: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0025AD34: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x0025AD38: lw          $v0, 0x14($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X14);
    // 0x0025AD3C: lhu         $a3, 0x78($v0)
    ctx->r7 = MEM_HU(ctx->r2, 0X78);
    // 0x0025AD40: lui         $a2, 0x800B
    ctx->r6 = S32(0X800B << 16);
    // 0x0025AD44: addiu       $a2, $a2, 0x5D0
    ctx->r6 = ADD32(ctx->r6, 0X5D0);
    // 0x0025AD48: jal         0x00245A98
    // 0x0025AD4C: nop

    func_00245A98(rdram, ctx);
        goto after_0;
    // 0x0025AD4C: nop

    after_0:
    // 0x0025AD50: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x0025AD54: jr          $ra
    // 0x0025AD58: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0025AD58: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_002316F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002316F4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x002316F8: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x002316FC: addu        $s3, $a0, $zero
    ctx->r19 = ADD32(ctx->r4, 0);
    // 0x00231700: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x00231704: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    // 0x00231708: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x0023170C: ori         $s4, $zero, 0xEC28
    ctx->r20 = 0 | 0XEC28;
    // 0x00231710: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00231714: addu        $s1, $s3, $zero
    ctx->r17 = ADD32(ctx->r19, 0);
    // 0x00231718: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x0023171C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
L_00231720:
    // 0x00231720: addu        $v0, $s1, $s4
    ctx->r2 = ADD32(ctx->r17, ctx->r20);
    // 0x00231724: lw          $s0, 0x0($v0)
    ctx->r16 = MEM_W(ctx->r2, 0X0);
    // 0x00231728: beql        $s0, $zero, L_0023174C
    if (ctx->r16 == 0) {
        // 0x0023172C: addiu       $s2, $s2, 0x1
        ctx->r18 = ADD32(ctx->r18, 0X1);
            goto L_0023174C;
    }
    goto skip_0;
    // 0x0023172C: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    skip_0:
    // 0x00231730: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
L_00231734:
    // 0x00231734: lw          $s0, 0x1C8($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X1C8);
    // 0x00231738: jal         0x0022F1C8
    // 0x0023173C: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    func_0022F1C8(rdram, ctx);
        goto after_0;
    // 0x0023173C: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    after_0:
    // 0x00231740: bne         $s0, $zero, L_00231734
    if (ctx->r16 != 0) {
        // 0x00231744: addu        $a1, $s0, $zero
        ctx->r5 = ADD32(ctx->r16, 0);
            goto L_00231734;
    }
    // 0x00231744: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x00231748: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
L_0023174C:
    // 0x0023174C: slti        $v0, $s2, 0x3
    ctx->r2 = SIGNED(ctx->r18) < 0X3 ? 1 : 0;
    // 0x00231750: bne         $v0, $zero, L_00231720
    if (ctx->r2 != 0) {
        // 0x00231754: addiu       $s1, $s1, 0x14
        ctx->r17 = ADD32(ctx->r17, 0X14);
            goto L_00231720;
    }
    // 0x00231754: addiu       $s1, $s1, 0x14
    ctx->r17 = ADD32(ctx->r17, 0X14);
    // 0x00231758: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x0023175C: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x00231760: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x00231764: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x00231768: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x0023176C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00231770: jr          $ra
    // 0x00231774: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x00231774: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_00255FF4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00255FF4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00255FF8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00255FFC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x00256000: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x00256004: lh          $v1, 0xA08($s0)
    ctx->r3 = MEM_H(ctx->r16, 0XA08);
    // 0x00256008: addiu       $v0, $zero, 0x1D
    ctx->r2 = ADD32(0, 0X1D);
    // 0x0025600C: bne         $v1, $v0, L_00256020
    if (ctx->r3 != ctx->r2) {
        // 0x00256010: nop
    
            goto L_00256020;
    }
    // 0x00256010: nop

    // 0x00256014: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00256018: lwc1        $f0, 0x71C4($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X71C4);
    // 0x0025601C: swc1        $f0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f0.u32l;
L_00256020:
    // 0x00256020: lw          $v0, 0xBF0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XBF0);
    // 0x00256024: bne         $v0, $zero, L_00256074
    if (ctx->r2 != 0) {
        // 0x00256028: nop
    
            goto L_00256074;
    }
    // 0x00256028: nop

    // 0x0025602C: lw          $v0, 0xA1C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XA1C);
    // 0x00256030: andi        $v0, $v0, 0x8000
    ctx->r2 = ctx->r2 & 0X8000;
    // 0x00256034: bne         $v0, $zero, L_00256050
    if (ctx->r2 != 0) {
        // 0x00256038: nop
    
            goto L_00256050;
    }
    // 0x00256038: nop

    // 0x0025603C: lui         $a1, 0x3FA7
    ctx->r5 = S32(0X3FA7 << 16);
    // 0x00256040: ori         $a1, $a1, 0x8D37
    ctx->r5 = ctx->r5 | 0X8D37;
    // 0x00256044: lui         $a2, 0x3E80
    ctx->r6 = S32(0X3E80 << 16);
    // 0x00256048: jal         0x002117DC
    // 0x0025604C: addiu       $a0, $s0, 0xAD0
    ctx->r4 = ADD32(ctx->r16, 0XAD0);
    func_002117DC(rdram, ctx);
        goto after_0;
    // 0x0025604C: addiu       $a0, $s0, 0xAD0
    ctx->r4 = ADD32(ctx->r16, 0XAD0);
    after_0:
L_00256050:
    // 0x00256050: lwc1        $f1, 0xA10($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0XA10);
    // 0x00256054: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00256058: lwc1        $f0, 0x71C8($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X71C8);
    // 0x0025605C: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x00256060: nop

    // 0x00256064: bc1f        L_00256074
    if (!c1cs) {
        // 0x00256068: nop
    
            goto L_00256074;
    }
    // 0x00256068: nop

    // 0x0025606C: jal         0x0042E29C
    // 0x00256070: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_0042E29C(rdram, ctx);
        goto after_1;
    // 0x00256070: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
L_00256074:
    // 0x00256074: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x00256078: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0025607C: jr          $ra
    // 0x00256080: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00256080: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0025AA78(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0025AA78: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0025AA7C: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x0025AA80: lw          $v0, 0x14($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X14);
    // 0x0025AA84: lhu         $a3, 0x8A($v0)
    ctx->r7 = MEM_HU(ctx->r2, 0X8A);
    // 0x0025AA88: lui         $a2, 0x800B
    ctx->r6 = S32(0X800B << 16);
    // 0x0025AA8C: addiu       $a2, $a2, 0x390
    ctx->r6 = ADD32(ctx->r6, 0X390);
    // 0x0025AA90: jal         0x00245A98
    // 0x0025AA94: nop

    func_00245A98(rdram, ctx);
        goto after_0;
    // 0x0025AA94: nop

    after_0:
    // 0x0025AA98: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x0025AA9C: jr          $ra
    // 0x0025AAA0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0025AAA0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00265AF8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00265AF8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00265AFC: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x00265B00: lw          $v0, 0x30($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X30);
    // 0x00265B04: beq         $v0, $zero, L_00265B20
    if (ctx->r2 == 0) {
        // 0x00265B08: nop
    
            goto L_00265B20;
    }
    // 0x00265B08: nop

    // 0x00265B0C: lw          $v0, 0x8($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X8);
    // 0x00265B10: beq         $v0, $zero, L_00265B20
    if (ctx->r2 == 0) {
        // 0x00265B14: nop
    
            goto L_00265B20;
    }
    // 0x00265B14: nop

    // 0x00265B18: jalr        $v0
    // 0x00265B1C: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x00265B1C: nop

    after_0:
L_00265B20:
    // 0x00265B20: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x00265B24: jr          $ra
    // 0x00265B28: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00265B28: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00447BE4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00447BE4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00447BE8: lui         $v0, 0x43
    ctx->r2 = S32(0X43 << 16);
    // 0x00447BEC: addiu       $v0, $v0, 0x2260
    ctx->r2 = ADD32(ctx->r2, 0X2260);
    // 0x00447BF0: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x00447BF4: sw          $a1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r5;
    // 0x00447BF8: sw          $v0, 0x4F8($a0)
    MEM_W(0X4F8, ctx->r4) = ctx->r2;
    // 0x00447BFC: lw          $a1, 0x0($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X0);
    // 0x00447C00: jal         0x0040EC14
    // 0x00447C04: nop

    func_0040EC14(rdram, ctx);
        goto after_0;
    // 0x00447C04: nop

    after_0:
    // 0x00447C08: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x00447C0C: jr          $ra
    // 0x00447C10: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00447C10: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0040F03C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0040F03C: addiu       $sp, $sp, -0xA0
    ctx->r29 = ADD32(ctx->r29, -0XA0);
    // 0x0040F040: sw          $s2, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r18;
    // 0x0040F044: lw          $s2, 0xB4($sp)
    ctx->r18 = MEM_W(ctx->r29, 0XB4);
    // 0x0040F048: sdc1        $f21, 0x98($sp)
    CHECK_FR(ctx, 21);
    SD(ctx->f21.u64, 0X98, ctx->r29);
    // 0x0040F04C: lwc1        $f21, 0xB8($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0XB8);
    // 0x0040F050: sdc1        $f20, 0x90($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X90, ctx->r29);
    // 0x0040F054: lwc1        $f20, 0xBC($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0XBC);
    // 0x0040F058: sw          $s3, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r19;
    // 0x0040F05C: addu        $s3, $a0, $zero
    ctx->r19 = ADD32(ctx->r4, 0);
    // 0x0040F060: sw          $s0, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r16;
    // 0x0040F064: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x0040F068: sw          $s1, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r17;
    // 0x0040F06C: addu        $s1, $a2, $zero
    ctx->r17 = ADD32(ctx->r6, 0);
    // 0x0040F070: beq         $s0, $zero, L_0040F084
    if (ctx->r16 == 0) {
        // 0x0040F074: sw          $ra, 0x88($sp)
        MEM_W(0X88, ctx->r29) = ctx->r31;
            goto L_0040F084;
    }
    // 0x0040F074: sw          $ra, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r31;
    // 0x0040F078: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x0040F07C: beq         $v0, $zero, L_0040F1B4
    if (ctx->r2 == 0) {
        // 0x0040F080: nop
    
            goto L_0040F1B4;
    }
    // 0x0040F080: nop

L_0040F084:
    // 0x0040F084: beq         $s1, $zero, L_0040F0A4
    if (ctx->r17 == 0) {
        // 0x0040F088: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_0040F0A4;
    }
    // 0x0040F088: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x0040F08C: beq         $a3, $v0, L_0040F0A4
    if (ctx->r7 == ctx->r2) {
        // 0x0040F090: nop
    
            goto L_0040F0A4;
    }
    // 0x0040F090: nop

    // 0x0040F094: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x0040F098: slt         $v0, $v0, $a3
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r7) ? 1 : 0;
    // 0x0040F09C: beq         $v0, $zero, L_0040F1B4
    if (ctx->r2 == 0) {
        // 0x0040F0A0: nop
    
            goto L_0040F1B4;
    }
    // 0x0040F0A0: nop

L_0040F0A4:
    // 0x0040F0A4: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0040F0A8: lwc1        $f0, 0x940($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X940);
    // 0x0040F0AC: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    // 0x0040F0B0: sw          $zero, 0x50($sp)
    MEM_W(0X50, ctx->r29) = 0;
    // 0x0040F0B4: sw          $zero, 0x54($sp)
    MEM_W(0X54, ctx->r29) = 0;
    // 0x0040F0B8: sw          $zero, 0x58($sp)
    MEM_W(0X58, ctx->r29) = 0;
    // 0x0040F0BC: swc1        $f0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f0.u32l;
    // 0x0040F0C0: swc1        $f0, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f0.u32l;
    // 0x0040F0C4: jal         0x002982F0
    // 0x0040F0C8: swc1        $f0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f0.u32l;
    func_002982F0(rdram, ctx);
        goto after_0;
    // 0x0040F0C8: swc1        $f0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f0.u32l;
    after_0:
    // 0x0040F0CC: mul.s       $f0, $f21, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f21.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f21.fl, ctx->f0.fl);
    // 0x0040F0D0: lwc1        $f1, 0x4($s2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r18, 0X4);
    // 0x0040F0D4: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x0040F0D8: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    // 0x0040F0DC: sw          $zero, 0x44($sp)
    MEM_W(0X44, ctx->r29) = 0;
    // 0x0040F0E0: jal         0x002974C0
    // 0x0040F0E4: swc1        $f1, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    func_002974C0(rdram, ctx);
        goto after_1;
    // 0x0040F0E4: swc1        $f1, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    after_1:
    // 0x0040F0E8: mul.s       $f0, $f21, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f21.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f21.fl, ctx->f0.fl);
    // 0x0040F0EC: lwc1        $f1, 0xC($s2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r18, 0XC);
    // 0x0040F0F0: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x0040F0F4: addiu       $v0, $sp, 0x40
    ctx->r2 = ADD32(ctx->r29, 0X40);
    // 0x0040F0F8: swc1        $f1, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    // 0x0040F0FC: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x0040F100: addiu       $v0, $sp, 0x70
    ctx->r2 = ADD32(ctx->r29, 0X70);
    // 0x0040F104: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x0040F108: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x0040F10C: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x0040F110: lw          $a0, 0x0($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X0);
    // 0x0040F114: lw          $a1, 0x40($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X40);
    // 0x0040F118: lw          $a2, 0x44($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X44);
    // 0x0040F11C: lw          $a3, 0x48($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X48);
    // 0x0040F120: jal         0x002688C8
    // 0x0040F124: nop

    func_002688C8(rdram, ctx);
        goto after_2;
    // 0x0040F124: nop

    after_2:
    // 0x0040F128: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x0040F12C: addiu       $a0, $a0, -0x5460
    ctx->r4 = ADD32(ctx->r4, -0X5460);
    // 0x0040F130: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x0040F134: lw          $v0, 0x70($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X70);
    // 0x0040F138: lw          $a3, 0xB0($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XB0);
    // 0x0040F13C: addiu       $a2, $zero, 0x1FF
    ctx->r6 = ADD32(0, 0X1FF);
    // 0x0040F140: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x0040F144: lw          $v1, 0x40($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X40);
    // 0x0040F148: lw          $t0, 0x44($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X44);
    // 0x0040F14C: lw          $t1, 0x48($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X48);
    // 0x0040F150: sw          $v1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r3;
    // 0x0040F154: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x0040F158: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    // 0x0040F15C: swc1        $f20, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f20.u32l;
    // 0x0040F160: lw          $v1, 0x50($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X50);
    // 0x0040F164: lw          $t0, 0x54($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X54);
    // 0x0040F168: lw          $t1, 0x58($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X58);
    // 0x0040F16C: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    // 0x0040F170: sw          $t0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r8;
    // 0x0040F174: sw          $t1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r9;
    // 0x0040F178: lw          $v1, 0x60($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X60);
    // 0x0040F17C: lw          $t0, 0x64($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X64);
    // 0x0040F180: lw          $t1, 0x68($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X68);
    // 0x0040F184: sw          $v1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r3;
    // 0x0040F188: sw          $t0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r8;
    // 0x0040F18C: sw          $t1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r9;
    // 0x0040F190: jal         0x00228108
    // 0x0040F194: sw          $s1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r17;
    func_00228108(rdram, ctx);
        goto after_3;
    // 0x0040F194: sw          $s1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r17;
    after_3:
    // 0x0040F198: beq         $v0, $zero, L_0040F1B4
    if (ctx->r2 == 0) {
        // 0x0040F19C: nop
    
            goto L_0040F1B4;
    }
    // 0x0040F19C: nop

    // 0x0040F1A0: beq         $s0, $zero, L_0040F1B4
    if (ctx->r16 == 0) {
        // 0x0040F1A4: nop
    
            goto L_0040F1B4;
    }
    // 0x0040F1A4: nop

    // 0x0040F1A8: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x0040F1AC: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x0040F1B0: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
L_0040F1B4:
    // 0x0040F1B4: lw          $ra, 0x88($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X88);
    // 0x0040F1B8: lw          $s3, 0x84($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X84);
    // 0x0040F1BC: lw          $s2, 0x80($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X80);
    // 0x0040F1C0: lw          $s1, 0x7C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X7C);
    // 0x0040F1C4: lw          $s0, 0x78($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X78);
    // 0x0040F1C8: ldc1        $f21, 0x98($sp)
    CHECK_FR(ctx, 21);
    ctx->f21.u64 = LD(ctx->r29, 0X98);
    // 0x0040F1CC: ldc1        $f20, 0x90($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X90);
    // 0x0040F1D0: jr          $ra
    // 0x0040F1D4: addiu       $sp, $sp, 0xA0
    ctx->r29 = ADD32(ctx->r29, 0XA0);
    return;
    // 0x0040F1D4: addiu       $sp, $sp, 0xA0
    ctx->r29 = ADD32(ctx->r29, 0XA0);
;}
RECOMP_FUNC void func_00257784(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00257784: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x00257788: lw          $a0, 0x1FD0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1FD0);
    // 0x0025778C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00257790: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x00257794: lh          $v1, 0x52A($a0)
    ctx->r3 = MEM_H(ctx->r4, 0X52A);
    // 0x00257798: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0025779C: bne         $v1, $v0, L_002577B4
    if (ctx->r3 != ctx->r2) {
        // 0x002577A0: addu        $a1, $a0, $zero
        ctx->r5 = ADD32(ctx->r4, 0);
            goto L_002577B4;
    }
    // 0x002577A0: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x002577A4: jal         0x0042E29C
    // 0x002577A8: nop

    func_0042E29C(rdram, ctx);
        goto after_0;
    // 0x002577A8: nop

    after_0:
    // 0x002577AC: j           L_002577BC
    // 0x002577B0: nop

        goto L_002577BC;
    // 0x002577B0: nop

L_002577B4:
    // 0x002577B4: jal         0x0024E5F0
    // 0x002577B8: addiu       $a2, $zero, 0x1F
    ctx->r6 = ADD32(0, 0X1F);
    func_0024E5F0(rdram, ctx);
        goto after_1;
    // 0x002577B8: addiu       $a2, $zero, 0x1F
    ctx->r6 = ADD32(0, 0X1F);
    after_1:
L_002577BC:
    // 0x002577BC: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x002577C0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x002577C4: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x002577C8: sw          $v0, -0x321C($at)
    MEM_W(-0X321C, ctx->r1) = ctx->r2;
    // 0x002577CC: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x002577D0: sw          $zero, -0x1CC0($at)
    MEM_W(-0X1CC0, ctx->r1) = 0;
    // 0x002577D4: jr          $ra
    // 0x002577D8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x002577D8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00464304(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00464304: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x00464308: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x0046430C: addu        $s4, $a0, $zero
    ctx->r20 = ADD32(ctx->r4, 0);
    // 0x00464310: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00464314: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x00464318: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0046431C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x00464320: sw          $ra, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r31;
    // 0x00464324: sw          $s7, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r23;
    // 0x00464328: sw          $s6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r22;
    // 0x0046432C: sw          $s5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r21;
    // 0x00464330: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x00464334: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x00464338: jal         0x00200B00
    // 0x0046433C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    func_00200B00(rdram, ctx);
        goto after_0;
    // 0x0046433C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    after_0:
    // 0x00464340: beq         $v0, $zero, L_004645A4
    if (ctx->r2 == 0) {
        // 0x00464344: addiu       $s3, $zero, 0x11A8
        ctx->r19 = ADD32(0, 0X11A8);
            goto L_004645A4;
    }
    // 0x00464344: addiu       $s3, $zero, 0x11A8
    ctx->r19 = ADD32(0, 0X11A8);
    // 0x00464348: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x0046434C: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x00464350: addu        $s5, $a1, $zero
    ctx->r21 = ADD32(ctx->r5, 0);
    // 0x00464354: lw          $s0, 0x0($v0)
    ctx->r16 = MEM_W(ctx->r2, 0X0);
    // 0x00464358: jal         0x002017D4
    // 0x0046435C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_002017D4(rdram, ctx);
        goto after_1;
    // 0x0046435C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x00464360: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00464364: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x00464368: jal         0x002017D4
    // 0x0046436C: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    func_002017D4(rdram, ctx);
        goto after_2;
    // 0x0046436C: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    after_2:
    // 0x00464370: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00464374: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x00464378: jal         0x002017D4
    // 0x0046437C: addu        $s2, $v0, $zero
    ctx->r18 = ADD32(ctx->r2, 0);
    func_002017D4(rdram, ctx);
        goto after_3;
    // 0x0046437C: addu        $s2, $v0, $zero
    ctx->r18 = ADD32(ctx->r2, 0);
    after_3:
    // 0x00464380: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00464384: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x00464388: jal         0x002017D4
    // 0x0046438C: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    func_002017D4(rdram, ctx);
        goto after_4;
    // 0x0046438C: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    after_4:
    // 0x00464390: addiu       $a0, $s4, 0x1180
    ctx->r4 = ADD32(ctx->r20, 0X1180);
    // 0x00464394: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x00464398: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x0046439C: lw          $v1, 0x4($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X4);
    // 0x004643A0: addiu       $s1, $s1, 0x8
    ctx->r17 = ADD32(ctx->r17, 0X8);
    // 0x004643A4: addiu       $s2, $s2, 0x8
    ctx->r18 = ADD32(ctx->r18, 0X8);
    // 0x004643A8: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x004643AC: sw          $s1, 0x1170($s4)
    MEM_W(0X1170, ctx->r20) = ctx->r17;
    // 0x004643B0: sw          $s2, 0x1178($s4)
    MEM_W(0X1178, ctx->r20) = ctx->r18;
    // 0x004643B4: sw          $v1, 0x1168($s4)
    MEM_W(0X1168, ctx->r20) = ctx->r3;
    // 0x004643B8: lw          $v1, 0x4($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X4);
    // 0x004643BC: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x004643C0: sw          $s0, 0x1174($s4)
    MEM_W(0X1174, ctx->r20) = ctx->r16;
    // 0x004643C4: sw          $v0, 0x117C($s4)
    MEM_W(0X117C, ctx->r20) = ctx->r2;
    // 0x004643C8: jal         0x00200500
    // 0x004643CC: sw          $v1, 0x116C($s4)
    MEM_W(0X116C, ctx->r20) = ctx->r3;
    func_00200500(rdram, ctx);
        goto after_5;
    // 0x004643CC: sw          $v1, 0x116C($s4)
    MEM_W(0X116C, ctx->r20) = ctx->r3;
    after_5:
    // 0x004643D0: addiu       $a0, $s4, 0x1194
    ctx->r4 = ADD32(ctx->r20, 0X1194);
    // 0x004643D4: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x004643D8: jal         0x00200500
    // 0x004643DC: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    func_00200500(rdram, ctx);
        goto after_6;
    // 0x004643DC: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_6:
L_004643E0:
    // 0x004643E0: addiu       $a0, $s4, 0x1194
    ctx->r4 = ADD32(ctx->r20, 0X1194);
    // 0x004643E4: jal         0x00200574
    // 0x004643E8: addu        $a1, $s4, $s3
    ctx->r5 = ADD32(ctx->r20, ctx->r19);
    func_00200574(rdram, ctx);
        goto after_7;
    // 0x004643E8: addu        $a1, $s4, $s3
    ctx->r5 = ADD32(ctx->r20, ctx->r19);
    after_7:
    // 0x004643EC: addiu       $s5, $s5, 0x1
    ctx->r21 = ADD32(ctx->r21, 0X1);
    // 0x004643F0: slti        $v0, $s5, 0x30
    ctx->r2 = SIGNED(ctx->r21) < 0X30 ? 1 : 0;
    // 0x004643F4: bne         $v0, $zero, L_004643E0
    if (ctx->r2 != 0) {
        // 0x004643F8: addiu       $s3, $s3, 0x10
        ctx->r19 = ADD32(ctx->r19, 0X10);
            goto L_004643E0;
    }
    // 0x004643F8: addiu       $s3, $s3, 0x10
    ctx->r19 = ADD32(ctx->r19, 0X10);
    // 0x004643FC: lw          $s6, 0x1168($s4)
    ctx->r22 = MEM_W(ctx->r20, 0X1168);
    // 0x00464400: blez        $s6, L_004644D0
    if (SIGNED(ctx->r22) <= 0) {
        // 0x00464404: addu        $s3, $zero, $zero
        ctx->r19 = ADD32(0, 0);
            goto L_004644D0;
    }
    // 0x00464404: addu        $s3, $zero, $zero
    ctx->r19 = ADD32(0, 0);
    // 0x00464408: addiu       $s7, $zero, 0x1
    ctx->r23 = ADD32(0, 0X1);
    // 0x0046440C: addu        $s5, $s3, $zero
    ctx->r21 = ADD32(ctx->r19, 0);
L_00464410:
    // 0x00464410: lw          $v0, 0x1178($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X1178);
    // 0x00464414: addu        $s2, $v0, $s5
    ctx->r18 = ADD32(ctx->r2, ctx->r21);
    // 0x00464418: lbu         $v0, 0xF($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0XF);
    // 0x0046441C: beq         $v0, $zero, L_00464430
    if (ctx->r2 == 0) {
        // 0x00464420: nop
    
            goto L_00464430;
    }
    // 0x00464420: nop

    // 0x00464424: lbu         $v0, 0xE($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0XE);
    // 0x00464428: andi        $v0, $v0, 0xFE
    ctx->r2 = ctx->r2 & 0XFE;
    // 0x0046442C: sb          $v0, 0xE($s2)
    MEM_B(0XE, ctx->r18) = ctx->r2;
L_00464430:
    // 0x00464430: lw          $a0, 0x6C($s4)
    ctx->r4 = MEM_W(ctx->r20, 0X6C);
    // 0x00464434: lbu         $s1, 0x13($s2)
    ctx->r17 = MEM_BU(ctx->r18, 0X13);
    // 0x00464438: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x0046443C: addu        $at, $s4, $at
    ctx->r1 = ADD32(ctx->r20, ctx->r1);
    // 0x00464440: lw          $s0, -0x7058($at)
    ctx->r16 = MEM_W(ctx->r1, -0X7058);
    // 0x00464444: jal         0x002017D4
    // 0x00464448: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_002017D4(rdram, ctx);
        goto after_8;
    // 0x00464448: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_8:
    // 0x0046444C: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x00464450: jal         0x002017D4
    // 0x00464454: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_002017D4(rdram, ctx);
        goto after_9;
    // 0x00464454: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_9:
    // 0x00464458: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x0046445C: jal         0x002017D4
    // 0x00464460: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_002017D4(rdram, ctx);
        goto after_10;
    // 0x00464460: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_10:
    // 0x00464464: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x00464468: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0046446C: jal         0x002017D4
    // 0x00464470: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_002017D4(rdram, ctx);
        goto after_11;
    // 0x00464470: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_11:
    // 0x00464474: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00464478: jal         0x00201818
    // 0x0046447C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_00201818(rdram, ctx);
        goto after_12;
    // 0x0046447C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_12:
    // 0x00464480: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00464484: jal         0x002017D4
    // 0x00464488: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_002017D4(rdram, ctx);
        goto after_13;
    // 0x00464488: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_13:
    // 0x0046448C: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x00464490: andi        $v0, $s1, 0x7
    ctx->r2 = ctx->r17 & 0X7;
    // 0x00464494: bgez        $s1, L_004644A0
    if (SIGNED(ctx->r17) >= 0) {
        // 0x00464498: sllv        $a0, $s7, $v0
        ctx->r4 = S32(ctx->r23 << (ctx->r2 & 31));
            goto L_004644A0;
    }
    // 0x00464498: sllv        $a0, $s7, $v0
    ctx->r4 = S32(ctx->r23 << (ctx->r2 & 31));
    // 0x0046449C: addiu       $s1, $s1, 0x7
    ctx->r17 = ADD32(ctx->r17, 0X7);
L_004644A0:
    // 0x004644A0: sra         $v0, $s1, 3
    ctx->r2 = S32(SIGNED(ctx->r17) >> 3);
    // 0x004644A4: addu        $v0, $v1, $v0
    ctx->r2 = ADD32(ctx->r3, ctx->r2);
    // 0x004644A8: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x004644AC: and         $v0, $v0, $a0
    ctx->r2 = ctx->r2 & ctx->r4;
    // 0x004644B0: beq         $v0, $zero, L_004644C4
    if (ctx->r2 == 0) {
        // 0x004644B4: addiu       $s3, $s3, 0x1
        ctx->r19 = ADD32(ctx->r19, 0X1);
            goto L_004644C4;
    }
    // 0x004644B4: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x004644B8: lbu         $v0, 0xE($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0XE);
    // 0x004644BC: ori         $v0, $v0, 0xF0
    ctx->r2 = ctx->r2 | 0XF0;
    // 0x004644C0: sb          $v0, 0xE($s2)
    MEM_B(0XE, ctx->r18) = ctx->r2;
L_004644C4:
    // 0x004644C4: slt         $v0, $s3, $s6
    ctx->r2 = SIGNED(ctx->r19) < SIGNED(ctx->r22) ? 1 : 0;
    // 0x004644C8: bne         $v0, $zero, L_00464410
    if (ctx->r2 != 0) {
        // 0x004644CC: addiu       $s5, $s5, 0x14
        ctx->r21 = ADD32(ctx->r21, 0X14);
            goto L_00464410;
    }
    // 0x004644CC: addiu       $s5, $s5, 0x14
    ctx->r21 = ADD32(ctx->r21, 0X14);
L_004644D0:
    // 0x004644D0: lw          $s6, 0x116C($s4)
    ctx->r22 = MEM_W(ctx->r20, 0X116C);
    // 0x004644D4: blez        $s6, L_004645A4
    if (SIGNED(ctx->r22) <= 0) {
        // 0x004644D8: addu        $s3, $zero, $zero
        ctx->r19 = ADD32(0, 0);
            goto L_004645A4;
    }
    // 0x004644D8: addu        $s3, $zero, $zero
    ctx->r19 = ADD32(0, 0);
    // 0x004644DC: addiu       $s7, $zero, 0x1
    ctx->r23 = ADD32(0, 0X1);
    // 0x004644E0: addu        $s5, $s3, $zero
    ctx->r21 = ADD32(ctx->r19, 0);
L_004644E4:
    // 0x004644E4: lw          $v0, 0x117C($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X117C);
    // 0x004644E8: addu        $s2, $v0, $s5
    ctx->r18 = ADD32(ctx->r2, ctx->r21);
    // 0x004644EC: lbu         $v0, 0xF($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0XF);
    // 0x004644F0: beq         $v0, $zero, L_00464504
    if (ctx->r2 == 0) {
        // 0x004644F4: nop
    
            goto L_00464504;
    }
    // 0x004644F4: nop

    // 0x004644F8: lbu         $v0, 0xE($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0XE);
    // 0x004644FC: andi        $v0, $v0, 0xFE
    ctx->r2 = ctx->r2 & 0XFE;
    // 0x00464500: sb          $v0, 0xE($s2)
    MEM_B(0XE, ctx->r18) = ctx->r2;
L_00464504:
    // 0x00464504: lw          $a0, 0x6C($s4)
    ctx->r4 = MEM_W(ctx->r20, 0X6C);
    // 0x00464508: lbu         $s1, 0x13($s2)
    ctx->r17 = MEM_BU(ctx->r18, 0X13);
    // 0x0046450C: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x00464510: addu        $at, $s4, $at
    ctx->r1 = ADD32(ctx->r20, ctx->r1);
    // 0x00464514: lw          $s0, -0x7058($at)
    ctx->r16 = MEM_W(ctx->r1, -0X7058);
    // 0x00464518: jal         0x002017D4
    // 0x0046451C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_002017D4(rdram, ctx);
        goto after_14;
    // 0x0046451C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_14:
    // 0x00464520: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x00464524: jal         0x002017D4
    // 0x00464528: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_002017D4(rdram, ctx);
        goto after_15;
    // 0x00464528: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_15:
    // 0x0046452C: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x00464530: jal         0x002017D4
    // 0x00464534: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_002017D4(rdram, ctx);
        goto after_16;
    // 0x00464534: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_16:
    // 0x00464538: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x0046453C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00464540: jal         0x002017D4
    // 0x00464544: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_002017D4(rdram, ctx);
        goto after_17;
    // 0x00464544: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_17:
    // 0x00464548: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0046454C: jal         0x00201818
    // 0x00464550: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_00201818(rdram, ctx);
        goto after_18;
    // 0x00464550: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_18:
    // 0x00464554: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00464558: jal         0x002017D4
    // 0x0046455C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_002017D4(rdram, ctx);
        goto after_19;
    // 0x0046455C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_19:
    // 0x00464560: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x00464564: andi        $v0, $s1, 0x7
    ctx->r2 = ctx->r17 & 0X7;
    // 0x00464568: bgez        $s1, L_00464574
    if (SIGNED(ctx->r17) >= 0) {
        // 0x0046456C: sllv        $a0, $s7, $v0
        ctx->r4 = S32(ctx->r23 << (ctx->r2 & 31));
            goto L_00464574;
    }
    // 0x0046456C: sllv        $a0, $s7, $v0
    ctx->r4 = S32(ctx->r23 << (ctx->r2 & 31));
    // 0x00464570: addiu       $s1, $s1, 0x7
    ctx->r17 = ADD32(ctx->r17, 0X7);
L_00464574:
    // 0x00464574: sra         $v0, $s1, 3
    ctx->r2 = S32(SIGNED(ctx->r17) >> 3);
    // 0x00464578: addu        $v0, $v1, $v0
    ctx->r2 = ADD32(ctx->r3, ctx->r2);
    // 0x0046457C: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x00464580: and         $v0, $v0, $a0
    ctx->r2 = ctx->r2 & ctx->r4;
    // 0x00464584: beq         $v0, $zero, L_00464598
    if (ctx->r2 == 0) {
        // 0x00464588: addiu       $s3, $s3, 0x1
        ctx->r19 = ADD32(ctx->r19, 0X1);
            goto L_00464598;
    }
    // 0x00464588: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x0046458C: lbu         $v0, 0xE($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0XE);
    // 0x00464590: ori         $v0, $v0, 0xF0
    ctx->r2 = ctx->r2 | 0XF0;
    // 0x00464594: sb          $v0, 0xE($s2)
    MEM_B(0XE, ctx->r18) = ctx->r2;
L_00464598:
    // 0x00464598: slt         $v0, $s3, $s6
    ctx->r2 = SIGNED(ctx->r19) < SIGNED(ctx->r22) ? 1 : 0;
    // 0x0046459C: bne         $v0, $zero, L_004644E4
    if (ctx->r2 != 0) {
        // 0x004645A0: addiu       $s5, $s5, 0x14
        ctx->r21 = ADD32(ctx->r21, 0X14);
            goto L_004644E4;
    }
    // 0x004645A0: addiu       $s5, $s5, 0x14
    ctx->r21 = ADD32(ctx->r21, 0X14);
L_004645A4:
    // 0x004645A4: lw          $ra, 0x30($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X30);
    // 0x004645A8: lw          $s7, 0x2C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X2C);
    // 0x004645AC: lw          $s6, 0x28($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X28);
    // 0x004645B0: lw          $s5, 0x24($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X24);
    // 0x004645B4: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x004645B8: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x004645BC: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x004645C0: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x004645C4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x004645C8: jr          $ra
    // 0x004645CC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x004645CC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_00427780(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00427780: addiu       $sp, $sp, -0x168
    ctx->r29 = ADD32(ctx->r29, -0X168);
    // 0x00427784: sw          $s2, 0x150($sp)
    MEM_W(0X150, ctx->r29) = ctx->r18;
    // 0x00427788: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x0042778C: sw          $s1, 0x14C($sp)
    MEM_W(0X14C, ctx->r29) = ctx->r17;
    // 0x00427790: addu        $s1, $a2, $zero
    ctx->r17 = ADD32(ctx->r6, 0);
    // 0x00427794: sw          $s3, 0x154($sp)
    MEM_W(0X154, ctx->r29) = ctx->r19;
    // 0x00427798: addu        $s3, $a3, $zero
    ctx->r19 = ADD32(ctx->r7, 0);
    // 0x0042779C: sw          $s0, 0x148($sp)
    MEM_W(0X148, ctx->r29) = ctx->r16;
    // 0x004277A0: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x004277A4: andi        $v0, $s0, 0xFFFF
    ctx->r2 = ctx->r16 & 0XFFFF;
    // 0x004277A8: sw          $ra, 0x160($sp)
    MEM_W(0X160, ctx->r29) = ctx->r31;
    // 0x004277AC: sw          $s5, 0x15C($sp)
    MEM_W(0X15C, ctx->r29) = ctx->r21;
    // 0x004277B0: sw          $s4, 0x158($sp)
    MEM_W(0X158, ctx->r29) = ctx->r20;
    // 0x004277B4: beq         $v0, $zero, L_00427840
    if (ctx->r2 == 0) {
        // 0x004277B8: sh          $zero, 0x144($sp)
        MEM_H(0X144, ctx->r29) = 0;
            goto L_00427840;
    }
    // 0x004277B8: sh          $zero, 0x144($sp)
    MEM_H(0X144, ctx->r29) = 0;
    // 0x004277BC: beq         $s1, $zero, L_00427988
    if (ctx->r17 == 0) {
        // 0x004277C0: addiu       $v0, $zero, 0x5
        ctx->r2 = ADD32(0, 0X5);
            goto L_00427988;
    }
    // 0x004277C0: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x004277C4: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
    // 0x004277C8: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x004277CC: beq         $v0, $zero, L_00427988
    if (ctx->r2 == 0) {
        // 0x004277D0: addiu       $v0, $zero, 0x5
        ctx->r2 = ADD32(0, 0X5);
            goto L_00427988;
    }
    // 0x004277D0: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x004277D4: jal         0x00429DFC
    // 0x004277D8: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_00429DFC(rdram, ctx);
        goto after_0;
    // 0x004277D8: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_0:
    // 0x004277DC: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
    // 0x004277E0: beq         $v0, $v1, L_00427988
    if (ctx->r2 == ctx->r3) {
        // 0x004277E4: addu        $v0, $v1, $zero
        ctx->r2 = ADD32(ctx->r3, 0);
            goto L_00427988;
    }
    // 0x004277E4: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
    // 0x004277E8: lbu         $v0, 0x65($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X65);
    // 0x004277EC: beq         $v0, $zero, L_00427808
    if (ctx->r2 == 0) {
        // 0x004277F0: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_00427808;
    }
    // 0x004277F0: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x004277F4: sb          $zero, 0x65($s2)
    MEM_B(0X65, ctx->r18) = 0;
    // 0x004277F8: jal         0x00429EC4
    // 0x004277FC: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_00429EC4(rdram, ctx);
        goto after_1;
    // 0x004277FC: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_1:
    // 0x00427800: bne         $v0, $zero, L_00427988
    if (ctx->r2 != 0) {
        // 0x00427804: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_00427988;
    }
    // 0x00427804: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
L_00427808:
    // 0x00427808: andi        $a1, $s0, 0xFFFF
    ctx->r5 = ctx->r16 & 0XFFFF;
    // 0x0042780C: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    // 0x00427810: addu        $a3, $s3, $zero
    ctx->r7 = ADD32(ctx->r19, 0);
    // 0x00427814: lw          $v0, 0x178($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X178);
    // 0x00427818: addiu       $s0, $sp, 0x140
    ctx->r16 = ADD32(ctx->r29, 0X140);
    // 0x0042781C: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x00427820: jal         0x004292E0
    // 0x00427824: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    func_004292E0(rdram, ctx);
        goto after_2;
    // 0x00427824: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    after_2:
    // 0x00427828: bne         $v0, $zero, L_00427988
    if (ctx->r2 != 0) {
        // 0x0042782C: nop
    
            goto L_00427988;
    }
    // 0x0042782C: nop

    // 0x00427830: lw          $v1, 0x140($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X140);
    // 0x00427834: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x00427838: bne         $v1, $v0, L_00427848
    if (ctx->r3 != ctx->r2) {
        // 0x0042783C: addiu       $a3, $sp, 0x120
        ctx->r7 = ADD32(ctx->r29, 0X120);
            goto L_00427848;
    }
    // 0x0042783C: addiu       $a3, $sp, 0x120
    ctx->r7 = ADD32(ctx->r29, 0X120);
L_00427840:
    // 0x00427840: j           L_00427988
    // 0x00427844: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
        goto L_00427988;
    // 0x00427844: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
L_00427848:
    // 0x00427848: lw          $a0, 0x4($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X4);
    // 0x0042784C: lhu         $a2, 0x5E($s2)
    ctx->r6 = MEM_HU(ctx->r18, 0X5E);
    // 0x00427850: lhu         $v0, 0x2($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X2);
    // 0x00427854: lw          $a1, 0x8($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X8);
    // 0x00427858: addu        $a2, $a2, $v0
    ctx->r6 = ADD32(ctx->r6, ctx->r2);
    // 0x0042785C: jal         0x00299680
    // 0x00427860: andi        $a2, $a2, 0xFFFF
    ctx->r6 = ctx->r6 & 0XFFFF;
    func_00299680(rdram, ctx);
        goto after_3;
    // 0x00427860: andi        $a2, $a2, 0xFFFF
    ctx->r6 = ctx->r6 & 0XFFFF;
    after_3:
    // 0x00427864: bne         $v0, $zero, L_00427988
    if (ctx->r2 != 0) {
        // 0x00427868: nop
    
            goto L_00427988;
    }
    // 0x00427868: nop

    // 0x0042786C: lbu         $s1, 0x127($sp)
    ctx->r17 = MEM_BU(ctx->r29, 0X127);
    // 0x00427870: lbu         $s3, 0x126($sp)
    ctx->r19 = MEM_BU(ctx->r29, 0X126);
    // 0x00427874: lbu         $v0, 0x64($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X64);
    // 0x00427878: andi        $s0, $s3, 0xFF
    ctx->r16 = ctx->r19 & 0XFF;
    // 0x0042787C: sltu        $v0, $s0, $v0
    ctx->r2 = ctx->r16 < ctx->r2 ? 1 : 0;
    // 0x00427880: beq         $v0, $zero, L_0042791C
    if (ctx->r2 == 0) {
        // 0x00427884: addiu       $s4, $sp, 0x146
        ctx->r20 = ADD32(ctx->r29, 0X146);
            goto L_0042791C;
    }
    // 0x00427884: addiu       $s4, $sp, 0x146
    ctx->r20 = ADD32(ctx->r29, 0X146);
    // 0x00427888: addiu       $s5, $zero, 0x1
    ctx->r21 = ADD32(0, 0X1);
    // 0x0042788C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
L_00427890:
    // 0x00427890: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x00427894: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x00427898: jal         0x00429AA4
    // 0x0042789C: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    func_00429AA4(rdram, ctx);
        goto after_4;
    // 0x0042789C: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    after_4:
    // 0x004278A0: bne         $v0, $zero, L_00427988
    if (ctx->r2 != 0) {
        // 0x004278A4: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_00427988;
    }
    // 0x004278A4: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x004278A8: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x004278AC: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    // 0x004278B0: addiu       $a3, $sp, 0x144
    ctx->r7 = ADD32(ctx->r29, 0X144);
    // 0x004278B4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x004278B8: sw          $s4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r20;
    // 0x004278BC: jal         0x004279AC
    // 0x004278C0: sw          $s5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r21;
    func_004279AC(rdram, ctx);
        goto after_5;
    // 0x004278C0: sw          $s5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r21;
    after_5:
    // 0x004278C4: bne         $v0, $zero, L_00427988
    if (ctx->r2 != 0) {
        // 0x004278C8: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_00427988;
    }
    // 0x004278C8: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x004278CC: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x004278D0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x004278D4: jal         0x00429AA4
    // 0x004278D8: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    func_00429AA4(rdram, ctx);
        goto after_6;
    // 0x004278D8: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    after_6:
    // 0x004278DC: bne         $v0, $zero, L_00427988
    if (ctx->r2 != 0) {
        // 0x004278E0: nop
    
            goto L_00427988;
    }
    // 0x004278E0: nop

    // 0x004278E4: lhu         $v0, 0x146($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X146);
    // 0x004278E8: beq         $v0, $s5, L_0042790C
    if (ctx->r2 == ctx->r21) {
        // 0x004278EC: nop
    
            goto L_0042790C;
    }
    // 0x004278EC: nop

    // 0x004278F0: lbu         $s3, 0x146($sp)
    ctx->r19 = MEM_BU(ctx->r29, 0X146);
    // 0x004278F4: lbu         $s1, 0x1($s4)
    ctx->r17 = MEM_BU(ctx->r20, 0X1);
    // 0x004278F8: lbu         $v0, 0x64($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X64);
    // 0x004278FC: andi        $s0, $s3, 0xFF
    ctx->r16 = ctx->r19 & 0XFF;
    // 0x00427900: sltu        $v0, $s0, $v0
    ctx->r2 = ctx->r16 < ctx->r2 ? 1 : 0;
    // 0x00427904: bne         $v0, $zero, L_00427890
    if (ctx->r2 != 0) {
        // 0x00427908: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_00427890;
    }
    // 0x00427908: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
L_0042790C:
    // 0x0042790C: lbu         $v0, 0x64($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X64);
    // 0x00427910: sltu        $v0, $s3, $v0
    ctx->r2 = ctx->r19 < ctx->r2 ? 1 : 0;
    // 0x00427914: bne         $v0, $zero, L_00427924
    if (ctx->r2 != 0) {
        // 0x00427918: addiu       $v1, $zero, 0xF
        ctx->r3 = ADD32(0, 0XF);
            goto L_00427924;
    }
    // 0x00427918: addiu       $v1, $zero, 0xF
    ctx->r3 = ADD32(0, 0XF);
L_0042791C:
    // 0x0042791C: j           L_00427988
    // 0x00427920: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
        goto L_00427988;
    // 0x00427920: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
L_00427924:
    // 0x00427924: addiu       $v0, $sp, 0x12F
    ctx->r2 = ADD32(ctx->r29, 0X12F);
    // 0x00427928: sw          $zero, 0x120($sp)
    MEM_W(0X120, ctx->r29) = 0;
    // 0x0042792C: sh          $zero, 0x124($sp)
    MEM_H(0X124, ctx->r29) = 0;
    // 0x00427930: sh          $zero, 0x126($sp)
    MEM_H(0X126, ctx->r29) = 0;
    // 0x00427934: sh          $zero, 0x12A($sp)
    MEM_H(0X12A, ctx->r29) = 0;
L_00427938:
    // 0x00427938: sb          $zero, 0x10($v0)
    MEM_B(0X10, ctx->r2) = 0;
    // 0x0042793C: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x00427940: bgez        $v1, L_00427938
    if (SIGNED(ctx->r3) >= 0) {
        // 0x00427944: addiu       $v0, $v0, -0x1
        ctx->r2 = ADD32(ctx->r2, -0X1);
            goto L_00427938;
    }
    // 0x00427944: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x00427948: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
    // 0x0042794C: addiu       $v0, $sp, 0x123
    ctx->r2 = ADD32(ctx->r29, 0X123);
L_00427950:
    // 0x00427950: sb          $zero, 0xC($v0)
    MEM_B(0XC, ctx->r2) = 0;
    // 0x00427954: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x00427958: bgez        $v1, L_00427950
    if (SIGNED(ctx->r3) >= 0) {
        // 0x0042795C: addiu       $v0, $v0, -0x1
        ctx->r2 = ADD32(ctx->r2, -0X1);
            goto L_00427950;
    }
    // 0x0042795C: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x00427960: sb          $zero, 0x128($sp)
    MEM_B(0X128, ctx->r29) = 0;
    // 0x00427964: lhu         $a2, 0x5E($s2)
    ctx->r6 = MEM_HU(ctx->r18, 0X5E);
    // 0x00427968: lhu         $v0, 0x142($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X142);
    // 0x0042796C: addiu       $a3, $sp, 0x120
    ctx->r7 = ADD32(ctx->r29, 0X120);
    // 0x00427970: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x00427974: lw          $a0, 0x4($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X4);
    // 0x00427978: lw          $a1, 0x8($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X8);
    // 0x0042797C: addu        $a2, $a2, $v0
    ctx->r6 = ADD32(ctx->r6, ctx->r2);
    // 0x00427980: jal         0x00299A40
    // 0x00427984: andi        $a2, $a2, 0xFFFF
    ctx->r6 = ctx->r6 & 0XFFFF;
    func_00299A40(rdram, ctx);
        goto after_7;
    // 0x00427984: andi        $a2, $a2, 0xFFFF
    ctx->r6 = ctx->r6 & 0XFFFF;
    after_7:
L_00427988:
    // 0x00427988: lw          $ra, 0x160($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X160);
    // 0x0042798C: lw          $s5, 0x15C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X15C);
    // 0x00427990: lw          $s4, 0x158($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X158);
    // 0x00427994: lw          $s3, 0x154($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X154);
    // 0x00427998: lw          $s2, 0x150($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X150);
    // 0x0042799C: lw          $s1, 0x14C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14C);
    // 0x004279A0: lw          $s0, 0x148($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X148);
    // 0x004279A4: jr          $ra
    // 0x004279A8: addiu       $sp, $sp, 0x168
    ctx->r29 = ADD32(ctx->r29, 0X168);
    return;
    // 0x004279A8: addiu       $sp, $sp, 0x168
    ctx->r29 = ADD32(ctx->r29, 0X168);
;}
