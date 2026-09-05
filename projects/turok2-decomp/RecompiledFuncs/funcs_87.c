#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_002898A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002898A4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x002898A8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x002898AC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x002898B0: jal         0x0042F514
    // 0x002898B4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    func_0042F514(rdram, ctx);
        goto after_0;
    // 0x002898B4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    after_0:
    // 0x002898B8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x002898BC: jal         0x00288DD0
    // 0x002898C0: addiu       $a1, $zero, 0x8D
    ctx->r5 = ADD32(0, 0X8D);
    func_00288DD0(rdram, ctx);
        goto after_1;
    // 0x002898C0: addiu       $a1, $zero, 0x8D
    ctx->r5 = ADD32(0, 0X8D);
    after_1:
    // 0x002898C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x002898C8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x002898CC: jr          $ra
    // 0x002898D0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x002898D0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0041CE54(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041CE54: lw          $a0, 0xC($a1)
    ctx->r4 = MEM_W(ctx->r5, 0XC);
    // 0x0041CE58: lw          $v0, 0x120($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X120);
    // 0x0041CE5C: ori         $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 | 0XFFFF;
    // 0x0041CE60: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x0041CE64: jr          $ra
    // 0x0041CE68: sw          $v0, 0x120($a0)
    MEM_W(0X120, ctx->r4) = ctx->r2;
    return;
    // 0x0041CE68: sw          $v0, 0x120($a0)
    MEM_W(0X120, ctx->r4) = ctx->r2;
;}
RECOMP_FUNC void func_0041D7B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041D7B0: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x0041D7B4: sll         $v1, $v1, 3
    ctx->r3 = S32(ctx->r3 << 3);
    // 0x0041D7B8: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x0041D7BC: addiu       $a0, $a0, 0x1FBC
    ctx->r4 = ADD32(ctx->r4, 0X1FBC);
    // 0x0041D7C0: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x0041D7C4: sll         $v0, $v0, 6
    ctx->r2 = S32(ctx->r2 << 6);
    // 0x0041D7C8: addiu       $s0, $s0, 0x131B
    ctx->r16 = ADD32(ctx->r16, 0X131B);
    // 0x0041D7CC: addu        $a0, $v0, $s0
    ctx->r4 = ADD32(ctx->r2, ctx->r16);
    // 0x0041D7D0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x0041D7D4: addu        $a1, $a2, $zero
    ctx->r5 = ADD32(ctx->r6, 0);
L_0041D7D8:
    // 0x0041D7D8: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x0041D7DC: bne         $v0, $zero, L_0041D7EC
    if (ctx->r2 != 0) {
        // 0x0041D7E0: addiu       $v1, $v1, 0x1
        ctx->r3 = ADD32(ctx->r3, 0X1);
            goto L_0041D7EC;
    }
    // 0x0041D7E0: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x0041D7E4: j           L_0041D7F0
    // 0x0041D7E8: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
        goto L_0041D7F0;
    // 0x0041D7E8: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
L_0041D7EC:
    // 0x0041D7EC: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
L_0041D7F0:
    // 0x0041D7F0: sb          $v0, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r2;
    // 0x0041D7F4: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x0041D7F8: slti        $v0, $a1, 0x8
    ctx->r2 = SIGNED(ctx->r5) < 0X8 ? 1 : 0;
    // 0x0041D7FC: bne         $v0, $zero, L_0041D7D8
    if (ctx->r2 != 0) {
        // 0x0041D800: addiu       $a0, $a0, 0x1
        ctx->r4 = ADD32(ctx->r4, 0X1);
            goto L_0041D7D8;
    }
    // 0x0041D800: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x0041D804: bne         $a2, $zero, L_0041D818
    if (ctx->r6 != 0) {
        // 0x0041D808: sb          $zero, 0x0($a0)
        MEM_B(0X0, ctx->r4) = 0;
            goto L_0041D818;
    }
    // 0x0041D808: sb          $zero, 0x0($a0)
    MEM_B(0X0, ctx->r4) = 0;
    // 0x0041D80C: lw          $a0, 0x518($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X518);
    // 0x0041D810: jal         0x0041BC50
    // 0x0041D814: nop

    func_0041BC50(rdram, ctx);
        goto after_0;
    // 0x0041D814: nop

    after_0:
L_0041D818:
    // 0x0041D818: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x0041D81C: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x0041D820: jal         0x00416454
    // 0x0041D824: addu        $a2, $s4, $zero
    ctx->r6 = ADD32(ctx->r20, 0);
    func_00416454(rdram, ctx);
        goto after_1;
    // 0x0041D824: addu        $a2, $s4, $zero
    ctx->r6 = ADD32(ctx->r20, 0);
    after_1:
    // 0x0041D828: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x0041D82C: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x0041D830: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x0041D834: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x0041D838: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x0041D83C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0041D840: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0041D844: jr          $ra
    // 0x0041D848: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x0041D848: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_002718EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002718EC: jr          $ra
    // 0x002718F0: sw          $a1, 0x2BB0($a0)
    MEM_W(0X2BB0, ctx->r4) = ctx->r5;
    return;
    // 0x002718F0: sw          $a1, 0x2BB0($a0)
    MEM_W(0X2BB0, ctx->r4) = ctx->r5;
;}
RECOMP_FUNC void func_0044065C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0044065C: lw          $v0, 0xD4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XD4);
    // 0x00440660: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00440664: lwc1        $f0, 0x52C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X52C);
    // 0x00440668: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0044066C: lwc1        $f1, 0x530($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X530);
    // 0x00440670: ori         $v0, $v0, 0x2000
    ctx->r2 = ctx->r2 | 0X2000;
    // 0x00440674: sw          $v0, 0xD4($a0)
    MEM_W(0XD4, ctx->r4) = ctx->r2;
    // 0x00440678: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x0044067C: addiu       $v0, $v0, -0x618
    ctx->r2 = ADD32(ctx->r2, -0X618);
    // 0x00440680: swc1        $f0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f0.u32l;
    // 0x00440684: jr          $ra
    // 0x00440688: swc1        $f1, -0x4($v0)
    MEM_W(-0X4, ctx->r2) = ctx->f_odd[(1 - 1) * 2];
    return;
    // 0x00440688: swc1        $f1, -0x4($v0)
    MEM_W(-0X4, ctx->r2) = ctx->f_odd[(1 - 1) * 2];
;}
RECOMP_FUNC void func_0043DC44(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
;}
RECOMP_FUNC void func_0042085C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0042085C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x00420860: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x00420864: addu        $s2, $a1, $zero
    ctx->r18 = ADD32(ctx->r5, 0);
    // 0x00420868: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x0042086C: lw          $v1, 0x9C0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X9C0);
    // 0x00420870: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x00420874: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // turok2: reconnected split function: a stray ELF symbol at 0x00420878 ended
    // this function early, leaving it without its epilogue. On the
    // hardware execution simply continues into the next instruction.
    func_00420878(rdram, ctx);
;}
RECOMP_FUNC void func_0045FD98(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0045FD98: addiu       $sp, $sp, -0x400
    ctx->r29 = ADD32(ctx->r29, -0X400);
    // 0x0045FD9C: addu        $t1, $zero, $zero
    ctx->r9 = ADD32(0, 0);
    // 0x0045FDA0: lui         $t3, 0xEDB8
    ctx->r11 = S32(0XEDB8 << 16);
    // 0x0045FDA4: ori         $t3, $t3, 0x8320
    ctx->r11 = ctx->r11 | 0X8320;
    // 0x0045FDA8: addu        $t2, $sp, $zero
    ctx->r10 = ADD32(ctx->r29, 0);
L_0045FDAC:
    // 0x0045FDAC: addu        $a3, $t1, $zero
    ctx->r7 = ADD32(ctx->r9, 0);
    // 0x0045FDB0: addu        $t0, $zero, $zero
    ctx->r8 = ADD32(0, 0);
L_0045FDB4:
    // 0x0045FDB4: andi        $v0, $a3, 0x1
    ctx->r2 = ctx->r7 & 0X1;
    // 0x0045FDB8: beq         $v0, $zero, L_0045FDC4
    if (ctx->r2 == 0) {
        // 0x0045FDBC: srl         $v1, $a3, 1
        ctx->r3 = S32(U32(ctx->r7) >> 1);
            goto L_0045FDC4;
    }
    // 0x0045FDBC: srl         $v1, $a3, 1
    ctx->r3 = S32(U32(ctx->r7) >> 1);
    // 0x0045FDC0: xor         $v1, $v1, $t3
    ctx->r3 = ctx->r3 ^ ctx->r11;
L_0045FDC4:
    // 0x0045FDC4: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    // 0x0045FDC8: sltiu       $v0, $t0, 0x8
    ctx->r2 = ctx->r8 < 0X8 ? 1 : 0;
    // 0x0045FDCC: bne         $v0, $zero, L_0045FDB4
    if (ctx->r2 != 0) {
        // 0x0045FDD0: addu        $a3, $v1, $zero
        ctx->r7 = ADD32(ctx->r3, 0);
            goto L_0045FDB4;
    }
    // 0x0045FDD0: addu        $a3, $v1, $zero
    ctx->r7 = ADD32(ctx->r3, 0);
    // 0x0045FDD4: sw          $a3, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r7;
    // 0x0045FDD8: addiu       $t1, $t1, 0x1
    ctx->r9 = ADD32(ctx->r9, 0X1);
    // 0x0045FDDC: sltiu       $v0, $t1, 0x100
    ctx->r2 = ctx->r9 < 0X100 ? 1 : 0;
    // 0x0045FDE0: bne         $v0, $zero, L_0045FDAC
    if (ctx->r2 != 0) {
        // 0x0045FDE4: addiu       $t2, $t2, 0x4
        ctx->r10 = ADD32(ctx->r10, 0X4);
            goto L_0045FDAC;
    }
    // 0x0045FDE4: addiu       $t2, $t2, 0x4
    ctx->r10 = ADD32(ctx->r10, 0X4);
    // 0x0045FDE8: addu        $a1, $a0, $a1
    ctx->r5 = ADD32(ctx->r4, ctx->r5);
    // 0x0045FDEC: sltu        $v0, $a0, $a1
    ctx->r2 = ctx->r4 < ctx->r5 ? 1 : 0;
    // 0x0045FDF0: beq         $v0, $zero, L_0045FE34
    if (ctx->r2 == 0) {
        // 0x0045FDF4: nor         $a2, $zero, $a2
        ctx->r6 = ~(0 | ctx->r6);
            goto L_0045FE34;
    }
    // 0x0045FDF4: nor         $a2, $zero, $a2
    ctx->r6 = ~(0 | ctx->r6);
    // 0x0045FDF8: lui         $a3, 0xFF
    ctx->r7 = S32(0XFF << 16);
    // 0x0045FDFC: ori         $a3, $a3, 0xFFFF
    ctx->r7 = ctx->r7 | 0XFFFF;
L_0045FE00:
    // 0x0045FE00: lbu         $v0, 0x0($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X0);
    // 0x0045FE04: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x0045FE08: xor         $v0, $a2, $v0
    ctx->r2 = ctx->r6 ^ ctx->r2;
    // 0x0045FE0C: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x0045FE10: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x0045FE14: addu        $v1, $sp, $v0
    ctx->r3 = ADD32(ctx->r29, ctx->r2);
    // 0x0045FE18: srl         $v0, $a2, 8
    ctx->r2 = S32(U32(ctx->r6) >> 8);
    // 0x0045FE1C: lw          $v1, 0x0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X0);
    // 0x0045FE20: and         $v0, $v0, $a3
    ctx->r2 = ctx->r2 & ctx->r7;
    // 0x0045FE24: xor         $a2, $v1, $v0
    ctx->r6 = ctx->r3 ^ ctx->r2;
    // 0x0045FE28: sltu        $v0, $a0, $a1
    ctx->r2 = ctx->r4 < ctx->r5 ? 1 : 0;
    // 0x0045FE2C: bne         $v0, $zero, L_0045FE00
    if (ctx->r2 != 0) {
        // 0x0045FE30: nop
    
            goto L_0045FE00;
    }
    // 0x0045FE30: nop

L_0045FE34:
    // 0x0045FE34: nor         $v0, $zero, $a2
    ctx->r2 = ~(0 | ctx->r6);
    // 0x0045FE38: jr          $ra
    // 0x0045FE3C: addiu       $sp, $sp, 0x400
    ctx->r29 = ADD32(ctx->r29, 0X400);
    return;
    // 0x0045FE3C: addiu       $sp, $sp, 0x400
    ctx->r29 = ADD32(ctx->r29, 0X400);
;}
RECOMP_FUNC void func_0026FFA0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0026FFA0: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x0026FFA4: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x0026FFA8: addu        $s3, $a0, $zero
    ctx->r19 = ADD32(ctx->r4, 0);
    // 0x0026FFAC: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x0026FFB0: addu        $s2, $a1, $zero
    ctx->r18 = ADD32(ctx->r5, 0);
    // 0x0026FFB4: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x0026FFB8: lui         $s1, 0x800F
    ctx->r17 = S32(0X800F << 16);
    // 0x0026FFBC: lw          $s1, 0x279C($s1)
    ctx->r17 = MEM_W(ctx->r17, 0X279C);
    // 0x0026FFC0: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x0026FFC4: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x0026FFC8: beq         $s1, $zero, L_00270030
    if (ctx->r17 == 0) {
        // 0x0026FFCC: sw          $s0, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->r16;
            goto L_00270030;
    }
    // 0x0026FFCC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x0026FFD0: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
L_0026FFD4:
    // 0x0026FFD4: lw          $v0, 0x4($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X4);
    // 0x0026FFD8: bne         $v0, $s3, L_00270018
    if (ctx->r2 != ctx->r19) {
        // 0x0026FFDC: nop
    
            goto L_00270018;
    }
    // 0x0026FFDC: nop

    // 0x0026FFE0: lhu         $v0, 0xA($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0XA);
    // 0x0026FFE4: beq         $v0, $s2, L_00270010
    if (ctx->r2 == ctx->r18) {
        // 0x0026FFE8: sh          $v1, 0x8($s1)
        MEM_H(0X8, ctx->r17) = ctx->r3;
            goto L_00270010;
    }
    // 0x0026FFE8: sh          $v1, 0x8($s1)
    MEM_H(0X8, ctx->r17) = ctx->r3;
    // 0x0026FFEC: sh          $s2, 0xA($s1)
    MEM_H(0XA, ctx->r17) = ctx->r18;
    // 0x0026FFF0: addiu       $s0, $s1, 0x10
    ctx->r16 = ADD32(ctx->r17, 0X10);
    // 0x0026FFF4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0026FFF8: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    // 0x0026FFFC: jal         0x0029E460
    // 0x00270000: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    func_0029E460(rdram, ctx);
        goto after_0;
    // 0x00270000: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    after_0:
    // 0x00270004: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00270008: jal         0x0029E340
    // 0x0027000C: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    func_0029E340(rdram, ctx);
        goto after_1;
    // 0x0027000C: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    after_1:
L_00270010:
    // 0x00270010: j           L_002700AC
    // 0x00270014: addiu       $a0, $s1, 0x10
    ctx->r4 = ADD32(ctx->r17, 0X10);
        goto L_002700AC;
    // 0x00270014: addiu       $a0, $s1, 0x10
    ctx->r4 = ADD32(ctx->r17, 0X10);
L_00270018:
    // 0x00270018: lhu         $v0, 0x8($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X8);
    // 0x0027001C: beql        $v0, $zero, L_00270024
    if (ctx->r2 == 0) {
        // 0x00270020: addu        $a3, $s1, $zero
        ctx->r7 = ADD32(ctx->r17, 0);
            goto L_00270024;
    }
    goto skip_0;
    // 0x00270020: addu        $a3, $s1, $zero
    ctx->r7 = ADD32(ctx->r17, 0);
    skip_0:
L_00270024:
    // 0x00270024: lw          $s1, 0x0($s1)
    ctx->r17 = MEM_W(ctx->r17, 0X0);
    // 0x00270028: bne         $s1, $zero, L_0026FFD4
    if (ctx->r17 != 0) {
        // 0x0027002C: nop
    
            goto L_0026FFD4;
    }
    // 0x0027002C: nop

L_00270030:
    // 0x00270030: bne         $a3, $zero, L_00270088
    if (ctx->r7 != 0) {
        // 0x00270034: addiu       $s0, $a3, 0x10
        ctx->r16 = ADD32(ctx->r7, 0X10);
            goto L_00270088;
    }
    // 0x00270034: addiu       $s0, $a3, 0x10
    ctx->r16 = ADD32(ctx->r7, 0X10);
    // 0x00270038: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0027003C: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x00270040: addiu       $v0, $zero, 0x90
    ctx->r2 = ADD32(0, 0X90);
    // 0x00270044: lui         $a2, 0x800F
    ctx->r6 = S32(0X800F << 16);
    // 0x00270048: lw          $a2, 0x2840($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X2840);
    // 0x0027004C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x00270050: jal         0x002912A0
    // 0x00270054: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    func_002912A0(rdram, ctx);
        goto after_2;
    // 0x00270054: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    after_2:
    // 0x00270058: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x0027005C: lw          $a0, 0x279C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X279C);
    // 0x00270060: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x00270064: lw          $v1, 0x2674($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X2674);
    // 0x00270068: addu        $a3, $v0, $zero
    ctx->r7 = ADD32(ctx->r2, 0);
    // 0x0027006C: lui         $at, 0x800F
    ctx->r1 = S32(0X800F << 16);
    // 0x00270070: sw          $a3, 0x279C($at)
    MEM_W(0X279C, ctx->r1) = ctx->r7;
    // 0x00270074: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x00270078: sw          $a0, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r4;
    // 0x0027007C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00270080: sw          $v1, 0x2674($at)
    MEM_W(0X2674, ctx->r1) = ctx->r3;
    // 0x00270084: addiu       $s0, $a3, 0x10
    ctx->r16 = ADD32(ctx->r7, 0X10);
L_00270088:
    // 0x00270088: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0027008C: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    // 0x00270090: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    // 0x00270094: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x00270098: sw          $a1, 0x4($a3)
    MEM_W(0X4, ctx->r7) = ctx->r5;
    // 0x0027009C: sh          $v0, 0x8($a3)
    MEM_H(0X8, ctx->r7) = ctx->r2;
    // 0x002700A0: jal         0x0029E460
    // 0x002700A4: sh          $a2, 0xA($a3)
    MEM_H(0XA, ctx->r7) = ctx->r6;
    func_0029E460(rdram, ctx);
        goto after_3;
    // 0x002700A4: sh          $a2, 0xA($a3)
    MEM_H(0XA, ctx->r7) = ctx->r6;
    after_3:
    // 0x002700A8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_002700AC:
    // 0x002700AC: jal         0x0029BF80
    // 0x002700B0: nop

    func_0029BF80(rdram, ctx);
        goto after_4;
    // 0x002700B0: nop

    after_4:
    // 0x002700B4: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x002700B8: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x002700BC: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x002700C0: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x002700C4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x002700C8: jr          $ra
    // 0x002700CC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x002700CC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_002530A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002530A4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x002530A8: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x002530AC: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x002530B0: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x002530B4: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x002530B8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x002530BC: lw          $s0, 0x20($a0)
    ctx->r16 = MEM_W(ctx->r4, 0X20);
    // 0x002530C0: beq         $s0, $zero, L_0025312C
    if (ctx->r16 == 0) {
        // 0x002530C4: addu        $s1, $a1, $zero
        ctx->r17 = ADD32(ctx->r5, 0);
            goto L_0025312C;
    }
    // 0x002530C4: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x002530C8: addiu       $s3, $zero, 0x200
    ctx->r19 = ADD32(0, 0X200);
    // 0x002530CC: addiu       $s2, $zero, 0x80
    ctx->r18 = ADD32(0, 0X80);
    // 0x002530D0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_002530D4:
    // 0x002530D4: sw          $zero, 0x54($s0)
    MEM_W(0X54, ctx->r16) = 0;
    // 0x002530D8: jal         0x00267090
    // 0x002530DC: sw          $zero, 0x2DC($s0)
    MEM_W(0X2DC, ctx->r16) = 0;
    func_00267090(rdram, ctx);
        goto after_0;
    // 0x002530DC: sw          $zero, 0x2DC($s0)
    MEM_W(0X2DC, ctx->r16) = 0;
    after_0:
    // 0x002530E0: beq         $v0, $zero, L_00253120
    if (ctx->r2 == 0) {
        // 0x002530E4: nop
    
            goto L_00253120;
    }
    // 0x002530E4: nop

    // 0x002530E8: lw          $v1, 0x8EC($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X8EC);
    // 0x002530EC: beq         $v1, $s3, L_00253104
    if (ctx->r3 == ctx->r19) {
        // 0x002530F0: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_00253104;
    }
    // 0x002530F0: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x002530F4: addu        $v0, $s1, $v0
    ctx->r2 = ADD32(ctx->r17, ctx->r2);
    // 0x002530F8: sw          $s0, 0xEC($v0)
    MEM_W(0XEC, ctx->r2) = ctx->r16;
    // 0x002530FC: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
    // 0x00253100: sw          $v0, 0x8EC($s1)
    MEM_W(0X8EC, ctx->r17) = ctx->r2;
L_00253104:
    // 0x00253104: lw          $v1, 0xAF0($s1)
    ctx->r3 = MEM_W(ctx->r17, 0XAF0);
    // 0x00253108: beq         $v1, $s2, L_00253120
    if (ctx->r3 == ctx->r18) {
        // 0x0025310C: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_00253120;
    }
    // 0x0025310C: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x00253110: addu        $v0, $s1, $v0
    ctx->r2 = ADD32(ctx->r17, ctx->r2);
    // 0x00253114: sw          $s0, 0x8F0($v0)
    MEM_W(0X8F0, ctx->r2) = ctx->r16;
    // 0x00253118: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
    // 0x0025311C: sw          $v0, 0xAF0($s1)
    MEM_W(0XAF0, ctx->r17) = ctx->r2;
L_00253120:
    // 0x00253120: lw          $s0, 0x1320($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X1320);
    // 0x00253124: bne         $s0, $zero, L_002530D4
    if (ctx->r16 != 0) {
        // 0x00253128: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_002530D4;
    }
    // 0x00253128: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_0025312C:
    // 0x0025312C: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x00253130: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x00253134: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x00253138: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x0025313C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00253140: jr          $ra
    // 0x00253144: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x00253144: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_0042C418(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0042C418: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0042C41C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0042C420: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x0042C424: jal         0x0028D0E0
    // 0x0042C428: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    func_0028D0E0(rdram, ctx);
        goto after_0;
    // 0x0042C428: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    after_0:
    // 0x0042C42C: bne         $v0, $zero, L_0042C45C
    if (ctx->r2 != 0) {
        // 0x0042C430: nop
    
            goto L_0042C45C;
    }
    // 0x0042C430: nop

    // 0x0042C434: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x0042C438: addiu       $a0, $a0, 0x1CD8
    ctx->r4 = ADD32(ctx->r4, 0X1CD8);
    // 0x0042C43C: lw          $a1, 0x28($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X28);
    // 0x0042C440: lw          $a2, 0x30($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X30);
    // 0x0042C444: lui         $a3, 0x800F
    ctx->r7 = S32(0X800F << 16);
    // 0x0042C448: addiu       $a3, $a3, -0x4540
    ctx->r7 = ADD32(ctx->r7, -0X4540);
    // 0x0042C44C: jal         0x00201DBC
    // 0x0042C450: nop

    func_00201DBC(rdram, ctx);
        goto after_1;
    // 0x0042C450: nop

    after_1:
    // 0x0042C454: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0042C458: sw          $v0, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r2;
L_0042C45C:
    // 0x0042C45C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x0042C460: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0042C464: jr          $ra
    // 0x0042C468: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0042C468: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0044F48C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_00416530:
    // 0x0044F48C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x0044F490: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x0044F494: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x0044F498: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0044F49C: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x0044F4A0: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x0044F4A4: addu        $s4, $a2, $zero
    ctx->r20 = ADD32(ctx->r6, 0);
    // 0x0044F4A8: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x0044F4AC: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x0044F4B0: sw          $s5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r21;
    // 0x0044F4B4: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x0044F4B8: lw          $a0, 0x20($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X20);
    // 0x0044F4BC: lw          $s2, 0x40($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X40);
    // 0x0044F4C0: lw          $s5, 0x44($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X44);
    // 0x0044F4C4: jal         0x00285628
    // 0x0044F4C8: addu        $s3, $a3, $zero
    ctx->r19 = ADD32(ctx->r7, 0);
    func_00285628(rdram, ctx);
        goto after_0;
    // 0x0044F4C8: addu        $s3, $a3, $zero
    ctx->r19 = ADD32(ctx->r7, 0);
    after_0:
    // 0x0044F4CC: bnel        $v0, $zero, L_0044F4D4
    if (ctx->r2 != 0) {
        // 0x0044F4D0: subu        $s0, $s0, $s4
        ctx->r16 = SUB32(ctx->r16, ctx->r20);
            goto L_0044F4D4;
    }
    goto skip_0;
    // 0x0044F4D0: subu        $s0, $s0, $s4
    ctx->r16 = SUB32(ctx->r16, ctx->r20);
    skip_0:
L_0044F4D4:
    // 0x0044F4D4: lw          $a0, 0x20($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X20);
    // 0x0044F4D8: jal         0x00285670
    // 0x0044F4DC: nop

    func_00285670(rdram, ctx);
        goto after_1;
    // 0x0044F4DC: nop

    after_1:
    // 0x0044F4E0: bnel        $v0, $zero, L_0044F500
    if (ctx->r2 != 0) {
        // 0x0044F4E4: addu        $s0, $s0, $s4
        ctx->r16 = ADD32(ctx->r16, ctx->r20);
            goto L_0044F500;
    }
    goto skip_1;
    // 0x0044F4E4: addu        $s0, $s0, $s4
    ctx->r16 = ADD32(ctx->r16, ctx->r20);
    skip_1:
    // 0x0044F4E8: lw          $a0, 0x20($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X20);
    // 0x0044F4EC: jal         0x002855E8
    // 0x0044F4F0: nop

    func_002855E8(rdram, ctx);
        goto after_2;
    // 0x0044F4F0: nop

    after_2:
    // 0x0044F4F4: beq         $v0, $zero, L_0044F504
    if (ctx->r2 == 0) {
        // 0x0044F4F8: slt         $v0, $s0, $s3
        ctx->r2 = SIGNED(ctx->r16) < SIGNED(ctx->r19) ? 1 : 0;
            goto L_0044F504;
    }
    // 0x0044F4F8: slt         $v0, $s0, $s3
    ctx->r2 = SIGNED(ctx->r16) < SIGNED(ctx->r19) ? 1 : 0;
    // 0x0044F4FC: addu        $s0, $s0, $s4
    ctx->r16 = ADD32(ctx->r16, ctx->r20);
L_0044F500:
    // 0x0044F500: slt         $v0, $s0, $s3
    ctx->r2 = SIGNED(ctx->r16) < SIGNED(ctx->r19) ? 1 : 0;
L_0044F504:
    // 0x0044F504: beq         $v0, $zero, L_0044F51C
    if (ctx->r2 == 0) {
        // 0x0044F508: slt         $v0, $s2, $s0
        ctx->r2 = SIGNED(ctx->r18) < SIGNED(ctx->r16) ? 1 : 0;
            goto L_0044F51C;
    }
    // 0x0044F508: slt         $v0, $s2, $s0
    ctx->r2 = SIGNED(ctx->r18) < SIGNED(ctx->r16) ? 1 : 0;
    // 0x0044F50C: beq         $s5, $zero, L_0044F530
    if (ctx->r21 == 0) {
        // 0x0044F510: addu        $s0, $s3, $zero
        ctx->r16 = ADD32(ctx->r19, 0);
            goto L_0044F530;
    }
    // 0x0044F510: addu        $s0, $s3, $zero
    ctx->r16 = ADD32(ctx->r19, 0);
    // 0x0044F514: j           L_00416530
    // 0x0044F518: addu        $s0, $s2, $zero
    ctx->r16 = ADD32(ctx->r18, 0);
    entry_00416530(rdram, ctx);
    return;
    // 0x0044F518: addu        $s0, $s2, $zero
    ctx->r16 = ADD32(ctx->r18, 0);
L_0044F51C:
    // 0x0044F51C: beq         $v0, $zero, L_0044F534
    if (ctx->r2 == 0) {
        // 0x0044F520: addu        $v0, $s0, $zero
        ctx->r2 = ADD32(ctx->r16, 0);
            goto L_0044F534;
    }
    // 0x0044F520: addu        $v0, $s0, $zero
    ctx->r2 = ADD32(ctx->r16, 0);
    // 0x0044F524: beq         $s5, $zero, L_0044F530
    if (ctx->r21 == 0) {
        // 0x0044F528: addu        $s0, $s2, $zero
        ctx->r16 = ADD32(ctx->r18, 0);
            goto L_0044F530;
    }
    // 0x0044F528: addu        $s0, $s2, $zero
    ctx->r16 = ADD32(ctx->r18, 0);
    // 0x0044F52C: addu        $s0, $s3, $zero
    ctx->r16 = ADD32(ctx->r19, 0);
L_0044F530:
    // 0x0044F530: addu        $v0, $s0, $zero
    ctx->r2 = ADD32(ctx->r16, 0);
L_0044F534:
    // 0x0044F534: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x0044F538: lw          $s5, 0x24($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X24);
    // 0x0044F53C: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x0044F540: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x0044F544: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x0044F548: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x0044F54C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0044F550: jr          $ra
    // 0x0044F554: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x0044F554: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_002842D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002842D8: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x002842DC: lw          $v0, 0x1BB8($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1BB8);
    // 0x002842E0: jr          $ra
    // 0x002842E4: nop

    return;
    // 0x002842E4: nop

;}
RECOMP_FUNC void func_0044FDDC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0044FDDC: addu        $t0, $a0, $zero
    ctx->r8 = ADD32(ctx->r4, 0);
    // 0x0044FDE0: sw          $a3, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r7;
    // 0x0044FDE4: lhu         $v0, 0x0($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X0);
    // 0x0044FDE8: sh          $v0, 0x4($t0)
    MEM_H(0X4, ctx->r8) = ctx->r2;
    // 0x0044FDEC: lw          $v0, 0x4($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X4);
    // 0x0044FDF0: lui         $v1, 0x180
    ctx->r3 = S32(0X180 << 16);
    // 0x0044FDF4: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x0044FDF8: sw          $v0, 0x8($t0)
    MEM_W(0X8, ctx->r8) = ctx->r2;
    // 0x0044FDFC: lhu         $v0, 0x8($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X8);
    // 0x0044FE00: sh          $v0, 0xC($t0)
    MEM_H(0XC, ctx->r8) = ctx->r2;
    // 0x0044FE04: lhu         $v0, 0xA($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0XA);
    // 0x0044FE08: sh          $v0, 0xE($t0)
    MEM_H(0XE, ctx->r8) = ctx->r2;
    // 0x0044FE0C: lbu         $v0, 0xC($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0XC);
    // 0x0044FE10: lw          $a0, 0x10($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X10);
    // 0x0044FE14: sb          $v0, 0x10($t0)
    MEM_B(0X10, ctx->r8) = ctx->r2;
    // 0x0044FE18: lbu         $v0, 0xD($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0XD);
    // 0x0044FE1C: sb          $v0, 0x11($t0)
    MEM_B(0X11, ctx->r8) = ctx->r2;
    // 0x0044FE20: lbu         $v0, 0xE($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0XE);
    // 0x0044FE24: sb          $v0, 0x12($t0)
    MEM_B(0X12, ctx->r8) = ctx->r2;
    // 0x0044FE28: lbu         $v0, 0xF($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0XF);
    // 0x0044FE2C: sb          $v0, 0x13($t0)
    MEM_B(0X13, ctx->r8) = ctx->r2;
    // 0x0044FE30: lw          $v1, 0x10($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X10);
    // 0x0044FE34: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x0044FE38: sw          $a1, 0x18($t0)
    MEM_W(0X18, ctx->r8) = ctx->r5;
    // 0x0044FE3C: sw          $v0, 0x1C($t0)
    MEM_W(0X1C, ctx->r8) = ctx->r2;
    // 0x0044FE40: sw          $a0, 0x24($t0)
    MEM_W(0X24, ctx->r8) = ctx->r4;
    // 0x0044FE44: sw          $v1, 0x14($t0)
    MEM_W(0X14, ctx->r8) = ctx->r3;
    // 0x0044FE48: lh          $v0, 0x0($a1)
    ctx->r2 = MEM_H(ctx->r5, 0X0);
    // 0x0044FE4C: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    // 0x0044FE50: bne         $v0, $a0, L_0044FE5C
    if (ctx->r2 != ctx->r4) {
        // 0x0044FE54: addu        $a3, $zero, $zero
        ctx->r7 = ADD32(0, 0);
            goto L_0044FE5C;
    }
    // 0x0044FE54: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x0044FE58: addiu       $a3, $zero, 0x330
    ctx->r7 = ADD32(0, 0X330);
L_0044FE5C:
    // 0x0044FE5C: beq         $a3, $zero, L_0044FEA0
    if (ctx->r7 == 0) {
        // 0x0044FE60: nop
    
            goto L_0044FEA0;
    }
    // 0x0044FE60: nop

    // 0x0044FE64: lw          $v0, 0x0($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X0);
    // 0x0044FE68: sw          $v0, 0x20($t0)
    MEM_W(0X20, ctx->r8) = ctx->r2;
    // 0x0044FE6C: lh          $v0, 0x0($a1)
    ctx->r2 = MEM_H(ctx->r5, 0X0);
    // 0x0044FE70: lw          $v1, 0x0($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X0);
    // 0x0044FE74: bne         $v0, $a0, L_0044FE88
    if (ctx->r2 != ctx->r4) {
        // 0x0044FE78: nop
    
            goto L_0044FE88;
    }
    // 0x0044FE78: nop

    // 0x0044FE7C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0044FE80: sw          $v0, 0x328($v1)
    MEM_W(0X328, ctx->r3) = ctx->r2;
    // 0x0044FE84: lh          $v0, 0x0($a1)
    ctx->r2 = MEM_H(ctx->r5, 0X0);
L_0044FE88:
    // 0x0044FE88: bne         $v0, $a0, L_0044FE94
    if (ctx->r2 != ctx->r4) {
        // 0x0044FE8C: addu        $v1, $zero, $zero
        ctx->r3 = ADD32(0, 0);
            goto L_0044FE94;
    }
    // 0x0044FE8C: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
    // 0x0044FE90: addiu       $v1, $zero, 0x330
    ctx->r3 = ADD32(0, 0X330);
L_0044FE94:
    // 0x0044FE94: lw          $v0, 0x0($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X0);
    // 0x0044FE98: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x0044FE9C: sw          $v0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r2;
L_0044FEA0:
    // 0x0044FEA0: jr          $ra
    // 0x0044FEA4: nop

    return;
    // 0x0044FEA4: nop

;}
RECOMP_FUNC void func_00202474(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00202474: addu        $t0, $a0, $zero
    ctx->r8 = ADD32(ctx->r4, 0);
    // 0x00202478: addu        $a0, $a1, $a2
    ctx->r4 = ADD32(ctx->r5, ctx->r6);
    // 0x0020247C: addiu       $v0, $a1, 0xF
    ctx->r2 = ADD32(ctx->r5, 0XF);
    // 0x00202480: addiu       $v1, $zero, -0x10
    ctx->r3 = ADD32(0, -0X10);
    // 0x00202484: and         $a3, $v0, $v1
    ctx->r7 = ctx->r2 & ctx->r3;
    // 0x00202488: subu        $v0, $a3, $a1
    ctx->r2 = SUB32(ctx->r7, ctx->r5);
    // 0x0020248C: subu        $a2, $a2, $v0
    ctx->r6 = SUB32(ctx->r6, ctx->r2);
    // 0x00202490: and         $a2, $a2, $v1
    ctx->r6 = ctx->r6 & ctx->r3;
    // 0x00202494: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x00202498: addiu       $a2, $a2, -0x20
    ctx->r6 = ADD32(ctx->r6, -0X20);
    // 0x0020249C: sw          $a1, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r5;
    // 0x002024A0: sw          $a0, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r4;
    // 0x002024A4: sw          $zero, 0x4($a3)
    MEM_W(0X4, ctx->r7) = 0;
    // 0x002024A8: sw          $zero, 0x0($a3)
    MEM_W(0X0, ctx->r7) = 0;
    // 0x002024AC: sw          $zero, 0xC($a3)
    MEM_W(0XC, ctx->r7) = 0;
    // 0x002024B0: sw          $zero, 0x8($a3)
    MEM_W(0X8, ctx->r7) = 0;
    // 0x002024B4: sw          $v0, 0x10($a3)
    MEM_W(0X10, ctx->r7) = ctx->r2;
    // 0x002024B8: sw          $a2, 0x14($a3)
    MEM_W(0X14, ctx->r7) = ctx->r6;
    // 0x002024BC: sw          $a3, 0x10($t0)
    MEM_W(0X10, ctx->r8) = ctx->r7;
    // 0x002024C0: lw          $v0, 0x14($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X14);
    // 0x002024C4: beql        $v0, $zero, L_002024D8
    if (ctx->r2 == 0) {
            // 0x002024C8: sw          $zero, 0xC($t0)
    MEM_W(0XC, ctx->r8) = 0;
    func_002024D8(rdram, ctx);
    return;
    }
    goto skip_0;
    // 0x002024C8: sw          $zero, 0xC($t0)
    MEM_W(0XC, ctx->r8) = 0;
    skip_0:
    // 0x002024CC: sw          $a3, 0xC($t0)
    MEM_W(0XC, ctx->r8) = ctx->r7;
    // 0x002024D0: jr          $ra
    // 0x002024D4: sw          $a3, 0x8($t0)
    MEM_W(0X8, ctx->r8) = ctx->r7;
    return;
    // 0x002024D4: sw          $a3, 0x8($t0)
    MEM_W(0X8, ctx->r8) = ctx->r7;
;}
RECOMP_FUNC void func_00401CC4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00401CC4: sw          $zero, 0x8($a0)
    MEM_W(0X8, ctx->r4) = 0;
    // 0x00401CC8: sw          $zero, 0x4($a0)
    MEM_W(0X4, ctx->r4) = 0;
    // 0x00401CCC: sw          $zero, 0x20($a0)
    MEM_W(0X20, ctx->r4) = 0;
    // 0x00401CD0: sw          $zero, 0x24($a0)
    MEM_W(0X24, ctx->r4) = 0;
    // 0x00401CD4: sw          $zero, 0x28($a0)
    MEM_W(0X28, ctx->r4) = 0;
    // 0x00401CD8: sw          $zero, 0x2C($a0)
    MEM_W(0X2C, ctx->r4) = 0;
    // 0x00401CDC: sw          $zero, 0x30($a0)
    MEM_W(0X30, ctx->r4) = 0;
    // 0x00401CE0: jr          $ra
    // 0x00401CE4: sw          $zero, 0x34($a0)
    MEM_W(0X34, ctx->r4) = 0;
    return;
    // 0x00401CE4: sw          $zero, 0x34($a0)
    MEM_W(0X34, ctx->r4) = 0;
;}
RECOMP_FUNC void func_002765F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002765F4: lw          $a2, 0x8($a0)
    ctx->r6 = MEM_W(ctx->r4, 0X8);
    // 0x002765F8: addiu       $v0, $a0, 0x4
    ctx->r2 = ADD32(ctx->r4, 0X4);
    // 0x002765FC: beq         $a2, $v0, L_00276650
    if (ctx->r6 == ctx->r2) {
        // 0x00276600: addiu       $t1, $a0, 0xD8
        ctx->r9 = ADD32(ctx->r4, 0XD8);
            goto L_00276650;
    }
    // 0x00276600: addiu       $t1, $a0, 0xD8
    ctx->r9 = ADD32(ctx->r4, 0XD8);
    // 0x00276604: addu        $t0, $v0, $zero
    ctx->r8 = ADD32(ctx->r2, 0);
L_00276608:
    // 0x00276608: lw          $v0, 0xC($a2)
    ctx->r2 = MEM_W(ctx->r6, 0XC);
    // 0x0027660C: lw          $a3, 0x4($a2)
    ctx->r7 = MEM_W(ctx->r6, 0X4);
    // 0x00276610: bnel        $v0, $a1, L_00276648
    if (ctx->r2 != ctx->r5) {
        // 0x00276614: addu        $a2, $a3, $zero
        ctx->r6 = ADD32(ctx->r7, 0);
            goto L_00276648;
    }
    goto skip_0;
    // 0x00276614: addu        $a2, $a3, $zero
    ctx->r6 = ADD32(ctx->r7, 0);
    skip_0:
    // 0x00276618: lw          $v0, 0x0($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X0);
    // 0x0027661C: sw          $a3, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r7;
    // 0x00276620: lw          $v1, 0x4($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X4);
    // 0x00276624: lw          $v0, 0x0($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X0);
    // 0x00276628: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x0027662C: lw          $v0, 0xD8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XD8);
    // 0x00276630: sw          $t1, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r9;
    // 0x00276634: sw          $v0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r2;
    // 0x00276638: lw          $v0, 0xD8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XD8);
    // 0x0027663C: sw          $a2, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r6;
    // 0x00276640: sw          $a2, 0xD8($a0)
    MEM_W(0XD8, ctx->r4) = ctx->r6;
    // 0x00276644: addu        $a2, $a3, $zero
    ctx->r6 = ADD32(ctx->r7, 0);
L_00276648:
    // 0x00276648: bne         $a2, $t0, L_00276608
    if (ctx->r6 != ctx->r8) {
        // 0x0027664C: nop
    
            goto L_00276608;
    }
    // 0x0027664C: nop

L_00276650:
    // 0x00276650: jr          $ra
    // 0x00276654: nop

    return;
    // 0x00276654: nop

;}
RECOMP_FUNC void func_0045A900(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_0042192C:
    // 0x0045A900: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x0045A904: lw          $v0, 0x990($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X990);
    // 0x0045A908: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0045A90C: beq         $v0, $zero, L_0045A924
    if (ctx->r2 == 0) {
        // 0x0045A910: sw          $ra, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r31;
            goto L_0045A924;
    }
    // 0x0045A910: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x0045A914: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x0045A918: lw          $a0, 0x2028($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X2028);
    // 0x0045A91C: j           L_0042192C
    // 0x0045A920: nop

    entry_0042192C(rdram, ctx);
    return;
    // 0x0045A920: nop

L_0045A924:
    // 0x0045A924: lw          $v0, 0x20($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X20);
    // 0x0045A928: lb          $a0, 0x4($v0)
    ctx->r4 = MEM_B(ctx->r2, 0X4);
    // 0x0045A92C: jal         0x004263A0
    // 0x0045A930: nop

    func_004263A0(rdram, ctx);
        goto after_0;
    // 0x0045A930: nop

    after_0:
    // 0x0045A934: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x0045A938: jr          $ra
    // 0x0045A93C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0045A93C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00259A98(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00259A98: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00259A9C: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x00259AA0: lw          $v1, 0x90($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X90);
    // 0x00259AA4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x00259AA8: bne         $v1, $v0, L_00259AD4
    if (ctx->r3 != ctx->r2) {
        // 0x00259AAC: nop
    
            goto L_00259AD4;
    }
    // 0x00259AAC: nop

    // 0x00259AB0: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x00259AB4: lwc1        $f0, 0x24C($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X24C);
    // 0x00259AB8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00259ABC: lwc1        $f1, 0x7340($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X7340);
    // 0x00259AC0: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x00259AC4: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00259AC8: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x00259ACC: jal         0x00210A68
    // 0x00259AD0: nop

    func_00210A68(rdram, ctx);
        goto after_0;
    // 0x00259AD0: nop

    after_0:
L_00259AD4:
    // 0x00259AD4: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x00259AD8: jr          $ra
    // 0x00259ADC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00259ADC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0026AD94(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0026AD94: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x0026AD98: sw          $s2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r18;
    // 0x0026AD9C: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x0026ADA0: sw          $s1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r17;
    // 0x0026ADA4: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x0026ADA8: sw          $s0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r16;
    // 0x0026ADAC: addu        $s0, $a2, $zero
    ctx->r16 = ADD32(ctx->r6, 0);
    // 0x0026ADB0: lui         $v0, 0x5555
    ctx->r2 = S32(0X5555 << 16);
    // 0x0026ADB4: ori         $v0, $v0, 0x5556
    ctx->r2 = ctx->r2 | 0X5556;
    // 0x0026ADB8: addiu       $a0, $s0, 0x1
    ctx->r4 = ADD32(ctx->r16, 0X1);
    // 0x0026ADBC: sll         $a1, $s0, 2
    ctx->r5 = S32(ctx->r16 << 2);
    // 0x0026ADC0: addu        $a1, $s1, $a1
    ctx->r5 = ADD32(ctx->r17, ctx->r5);
    // 0x0026ADC4: sra         $v1, $a0, 31
    ctx->r3 = S32(SIGNED(ctx->r4) >> 31);
    // 0x0026ADC8: mult        $a0, $v0
    result = S64(S32(ctx->r4)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x0026ADCC: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x0026ADD0: sdc1        $f22, 0x60($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X60, ctx->r29);
    // 0x0026ADD4: sdc1        $f21, 0x58($sp)
    CHECK_FR(ctx, 21);
    SD(ctx->f21.u64, 0X58, ctx->r29);
    // 0x0026ADD8: sdc1        $f20, 0x50($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X50, ctx->r29);
    // 0x0026ADDC: mfhi        $a3
    ctx->r7 = hi;
    // 0x0026ADE0: subu        $v1, $a3, $v1
    ctx->r3 = SUB32(ctx->r7, ctx->r3);
    // 0x0026ADE4: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x0026ADE8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x0026ADEC: subu        $a0, $a0, $v0
    ctx->r4 = SUB32(ctx->r4, ctx->r2);
    // 0x0026ADF0: sll         $a0, $a0, 2
    ctx->r4 = S32(ctx->r4 << 2);
    // 0x0026ADF4: addu        $a0, $s1, $a0
    ctx->r4 = ADD32(ctx->r17, ctx->r4);
    // 0x0026ADF8: lw          $v0, 0x4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X4);
    // 0x0026ADFC: lw          $v1, 0x4($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X4);
    // 0x0026AE00: lwc1        $f1, 0x0($v0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r2, 0X0);
    // 0x0026AE04: lwc1        $f0, 0x0($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X0);
    // 0x0026AE08: sub.s       $f21, $f1, $f0
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f21.fl = ctx->f1.fl - ctx->f0.fl;
    // 0x0026AE0C: mul.s       $f2, $f21, $f21
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f21.fl); NAN_CHECK(ctx->f21.fl); 
    ctx->f2.fl = MUL_S(ctx->f21.fl, ctx->f21.fl);
    // 0x0026AE10: lwc1        $f1, 0x8($v0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r2, 0X8);
    // 0x0026AE14: lwc1        $f0, 0x8($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X8);
    // 0x0026AE18: sub.s       $f20, $f1, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = ctx->f1.fl - ctx->f0.fl;
    // 0x0026AE1C: mul.s       $f12, $f20, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f12.fl = MUL_S(ctx->f20.fl, ctx->f20.fl);
    // 0x0026AE20: jal         0x00298470
    // 0x0026AE24: add.s       $f12, $f2, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = ctx->f2.fl + ctx->f12.fl;
    func_00298470(rdram, ctx);
        goto after_0;
    // 0x0026AE24: add.s       $f12, $f2, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = ctx->f2.fl + ctx->f12.fl;
    after_0:
    // 0x0026AE28: mtc1        $zero, $f22
    ctx->f22.u32l = 0;
    // 0x0026AE2C: c.eq.s      $f0, $f22
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f0.fl == ctx->f22.fl;
    // 0x0026AE30: nop

    // 0x0026AE34: bc1f        L_0026AE44
    if (!c1cs) {
        // 0x0026AE38: nop
    
            goto L_0026AE44;
    }
    // 0x0026AE38: nop

    // 0x0026AE3C: j           L_0026AE5C
    // 0x0026AE40: mov.s       $f0, $f22
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    ctx->f0.fl = ctx->f22.fl;
        goto L_0026AE5C;
    // 0x0026AE40: mov.s       $f0, $f22
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    ctx->f0.fl = ctx->f22.fl;
L_0026AE44:
    // 0x0026AE44: jal         0x0021153C
    // 0x0026AE48: div.s       $f12, $f21, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f21.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = DIV_S(ctx->f21.fl, ctx->f0.fl);
    func_0021153C(rdram, ctx);
        goto after_1;
    // 0x0026AE48: div.s       $f12, $f21, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f21.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = DIV_S(ctx->f21.fl, ctx->f0.fl);
    after_1:
    // 0x0026AE4C: c.lt.s      $f20, $f22
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f20.fl < ctx->f22.fl;
    // 0x0026AE50: nop

    // 0x0026AE54: bc1fl       L_0026AE5C
    if (!c1cs) {
        // 0x0026AE58: neg.s       $f0, $f0
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
            goto L_0026AE5C;
    }
    goto skip_0;
    // 0x0026AE58: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    skip_0:
L_0026AE5C:
    // 0x0026AE5C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0026AE60: lwc1        $f12, 0x7FC8($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X7FC8);
    // 0x0026AE64: mul.s       $f12, $f0, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = MUL_S(ctx->f0.fl, ctx->f12.fl);
    // 0x0026AE68: jal         0x002982F0
    // 0x0026AE6C: nop

    func_002982F0(rdram, ctx);
        goto after_2;
    // 0x0026AE6C: nop

    after_2:
    // 0x0026AE70: lui         $v0, 0x5555
    ctx->r2 = S32(0X5555 << 16);
    // 0x0026AE74: ori         $v0, $v0, 0x5556
    ctx->r2 = ctx->r2 | 0X5556;
    // 0x0026AE78: addiu       $a0, $s0, 0x1
    ctx->r4 = ADD32(ctx->r16, 0X1);
    // 0x0026AE7C: sll         $a1, $s0, 2
    ctx->r5 = S32(ctx->r16 << 2);
    // 0x0026AE80: addu        $a1, $s1, $a1
    ctx->r5 = ADD32(ctx->r17, ctx->r5);
    // 0x0026AE84: mult        $a0, $v0
    result = S64(S32(ctx->r4)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x0026AE88: sra         $v1, $a0, 31
    ctx->r3 = S32(SIGNED(ctx->r4) >> 31);
    // 0x0026AE8C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x0026AE90: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    // 0x0026AE94: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x0026AE98: mfhi        $a3
    ctx->r7 = hi;
    // 0x0026AE9C: subu        $v1, $a3, $v1
    ctx->r3 = SUB32(ctx->r7, ctx->r3);
    // 0x0026AEA0: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x0026AEA4: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x0026AEA8: subu        $a0, $a0, $v0
    ctx->r4 = SUB32(ctx->r4, ctx->r2);
    // 0x0026AEAC: sll         $a0, $a0, 2
    ctx->r4 = S32(ctx->r4 << 2);
    // 0x0026AEB0: addu        $a0, $s1, $a0
    ctx->r4 = ADD32(ctx->r17, ctx->r4);
    // 0x0026AEB4: lw          $v0, 0x4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X4);
    // 0x0026AEB8: lw          $v1, 0x4($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X4);
    // 0x0026AEBC: lwc1        $f2, 0x0($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X0);
    // 0x0026AEC0: lwc1        $f1, 0x0($v1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r3, 0X0);
    // 0x0026AEC4: sub.s       $f21, $f2, $f1
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f21.fl = ctx->f2.fl - ctx->f1.fl;
    // 0x0026AEC8: mul.s       $f3, $f21, $f21
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f21.fl); NAN_CHECK(ctx->f21.fl); 
    ctx->f3.fl = MUL_S(ctx->f21.fl, ctx->f21.fl);
    // 0x0026AECC: lwc1        $f2, 0x8($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X8);
    // 0x0026AED0: lwc1        $f1, 0x8($v1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r3, 0X8);
    // 0x0026AED4: sub.s       $f20, $f2, $f1
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f20.fl = ctx->f2.fl - ctx->f1.fl;
    // 0x0026AED8: mul.s       $f12, $f20, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f12.fl = MUL_S(ctx->f20.fl, ctx->f20.fl);
    // 0x0026AEDC: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x0026AEE0: swc1        $f0, -0x2874($at)
    MEM_W(-0X2874, ctx->r1) = ctx->f0.u32l;
    // 0x0026AEE4: jal         0x00298470
    // 0x0026AEE8: add.s       $f12, $f3, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = ctx->f3.fl + ctx->f12.fl;
    func_00298470(rdram, ctx);
        goto after_3;
    // 0x0026AEE8: add.s       $f12, $f3, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = ctx->f3.fl + ctx->f12.fl;
    after_3:
    // 0x0026AEEC: mtc1        $zero, $f22
    ctx->f22.u32l = 0;
    // 0x0026AEF0: c.eq.s      $f0, $f22
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f0.fl == ctx->f22.fl;
    // 0x0026AEF4: nop

    // 0x0026AEF8: bc1f        L_0026AF08
    if (!c1cs) {
        // 0x0026AEFC: nop
    
            goto L_0026AF08;
    }
    // 0x0026AEFC: nop

    // 0x0026AF00: j           L_0026AF20
    // 0x0026AF04: mov.s       $f0, $f22
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    ctx->f0.fl = ctx->f22.fl;
        goto L_0026AF20;
    // 0x0026AF04: mov.s       $f0, $f22
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    ctx->f0.fl = ctx->f22.fl;
L_0026AF08:
    // 0x0026AF08: jal         0x0021153C
    // 0x0026AF0C: div.s       $f12, $f21, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f21.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = DIV_S(ctx->f21.fl, ctx->f0.fl);
    func_0021153C(rdram, ctx);
        goto after_4;
    // 0x0026AF0C: div.s       $f12, $f21, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f21.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = DIV_S(ctx->f21.fl, ctx->f0.fl);
    after_4:
    // 0x0026AF10: c.lt.s      $f20, $f22
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f20.fl < ctx->f22.fl;
    // 0x0026AF14: nop

    // 0x0026AF18: bc1fl       L_0026AF20
    if (!c1cs) {
        // 0x0026AF1C: neg.s       $f0, $f0
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
            goto L_0026AF20;
    }
    goto skip_1;
    // 0x0026AF1C: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    skip_1:
L_0026AF20:
    // 0x0026AF20: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0026AF24: lwc1        $f12, 0x7FCC($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X7FCC);
    // 0x0026AF28: mul.s       $f12, $f0, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = MUL_S(ctx->f0.fl, ctx->f12.fl);
    // 0x0026AF2C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0026AF30: lwc1        $f20, 0x7FD0($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X7FD0);
    // 0x0026AF34: jal         0x002974C0
    // 0x0026AF38: nop

    func_002974C0(rdram, ctx);
        goto after_5;
    // 0x0026AF38: nop

    after_5:
    // 0x0026AF3C: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    // 0x0026AF40: jal         0x002982F0
    // 0x0026AF44: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    func_002982F0(rdram, ctx);
        goto after_6;
    // 0x0026AF44: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    after_6:
    // 0x0026AF48: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    // 0x0026AF4C: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x0026AF50: swc1        $f0, -0x2874($at)
    MEM_W(-0X2874, ctx->r1) = ctx->f0.u32l;
    // 0x0026AF54: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    // 0x0026AF58: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x0026AF5C: jal         0x002974C0
    // 0x0026AF60: sw          $zero, 0x28($sp)
    MEM_W(0X28, ctx->r29) = 0;
    func_002974C0(rdram, ctx);
        goto after_7;
    // 0x0026AF60: sw          $zero, 0x28($sp)
    MEM_W(0X28, ctx->r29) = 0;
    after_7:
    // 0x0026AF64: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    // 0x0026AF68: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x0026AF6C: addiu       $a2, $sp, 0x10
    ctx->r6 = ADD32(ctx->r29, 0X10);
    // 0x0026AF70: jal         0x00210F68
    // 0x0026AF74: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    func_00210F68(rdram, ctx);
        goto after_8;
    // 0x0026AF74: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    after_8:
    // 0x0026AF78: addu        $v0, $s2, $zero
    ctx->r2 = ADD32(ctx->r18, 0);
    // 0x0026AF7C: lw          $t0, 0x30($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X30);
    // 0x0026AF80: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x0026AF84: lw          $t2, 0x38($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X38);
    // 0x0026AF88: lw          $a3, 0x3C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X3C);
    // 0x0026AF8C: sw          $t0, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r8;
    // 0x0026AF90: sw          $t1, 0x4($s2)
    MEM_W(0X4, ctx->r18) = ctx->r9;
    // 0x0026AF94: sw          $t2, 0x8($s2)
    MEM_W(0X8, ctx->r18) = ctx->r10;
    // 0x0026AF98: sw          $a3, 0xC($s2)
    MEM_W(0XC, ctx->r18) = ctx->r7;
    // 0x0026AF9C: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x0026AFA0: lw          $s2, 0x48($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X48);
    // 0x0026AFA4: lw          $s1, 0x44($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X44);
    // 0x0026AFA8: lw          $s0, 0x40($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X40);
    // 0x0026AFAC: ldc1        $f22, 0x60($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X60);
    // 0x0026AFB0: ldc1        $f21, 0x58($sp)
    CHECK_FR(ctx, 21);
    ctx->f21.u64 = LD(ctx->r29, 0X58);
    // 0x0026AFB4: ldc1        $f20, 0x50($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X50);
    // 0x0026AFB8: jr          $ra
    // 0x0026AFBC: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    return;
    // 0x0026AFBC: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
;}
RECOMP_FUNC void func_00248644(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00248644: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x00248648: lw          $v0, -0x5528($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X5528);
    // 0x0024864C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00248650: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00248654: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x00248658: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x0024865C: andi        $v0, $v0, 0x10
    ctx->r2 = ctx->r2 & 0X10;
    // 0x00248660: bne         $v0, $zero, L_0024870C
    if (ctx->r2 != 0) {
        // 0x00248664: sw          $s0, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r16;
            goto L_0024870C;
    }
    // 0x00248664: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00248668: addiu       $v0, $a1, -0xFA0
    ctx->r2 = ADD32(ctx->r5, -0XFA0);
    // 0x0024866C: addu        $s0, $s1, $v0
    ctx->r16 = ADD32(ctx->r17, ctx->r2);
    // 0x00248670: lbu         $v0, 0x52C($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X52C);
    // 0x00248674: addiu       $v0, $v0, 0x11
    ctx->r2 = ADD32(ctx->r2, 0X11);
    // 0x00248678: sb          $v0, 0x52C($s0)
    MEM_B(0X52C, ctx->r16) = ctx->r2;
    // 0x0024867C: addiu       $v0, $zero, 0x1194
    ctx->r2 = ADD32(0, 0X1194);
    // 0x00248680: bne         $a1, $v0, L_0024870C
    if (ctx->r5 != ctx->r2) {
        // 0x00248684: nop
    
            goto L_0024870C;
    }
    // 0x00248684: nop

    // 0x00248688: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x0024868C: lw          $a0, 0x48($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X48);
    // 0x00248690: jal         0x0026EFB8
    // 0x00248694: nop

    func_0026EFB8(rdram, ctx);
        goto after_0;
    // 0x00248694: nop

    after_0:
    // 0x00248698: addiu       $v1, $v0, -0x1
    ctx->r3 = ADD32(ctx->r2, -0X1);
    // 0x0024869C: sltiu       $v0, $v1, 0x6
    ctx->r2 = ctx->r3 < 0X6 ? 1 : 0;
    // 0x002486A0: beq         $v0, $zero, L_002486B4
    if (ctx->r2 == 0) {
        // 0x002486A4: addu        $v1, $s1, $v1
        ctx->r3 = ADD32(ctx->r17, ctx->r3);
            goto L_002486B4;
    }
    // 0x002486A4: addu        $v1, $s1, $v1
    ctx->r3 = ADD32(ctx->r17, ctx->r3);
    // 0x002486A8: lbu         $v0, 0x9FC($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X9FC);
    // 0x002486AC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x002486B0: sb          $v0, 0x9FC($v1)
    MEM_B(0X9FC, ctx->r3) = ctx->r2;
L_002486B4:
    // 0x002486B4: lbu         $v0, 0x52C($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X52C);
    // 0x002486B8: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x002486BC: slti        $v0, $v0, 0x6
    ctx->r2 = SIGNED(ctx->r2) < 0X6 ? 1 : 0;
    // 0x002486C0: bne         $v0, $zero, L_0024870C
    if (ctx->r2 != 0) {
        // 0x002486C4: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_0024870C;
    }
    // 0x002486C4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x002486C8: sb          $v0, 0x988($s1)
    MEM_B(0X988, ctx->r17) = ctx->r2;
    // 0x002486CC: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x002486D0: lw          $v0, -0x990($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X990);
    // 0x002486D4: lw          $v1, 0x20($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X20);
    // 0x002486D8: lh          $v0, 0x0($v1)
    ctx->r2 = MEM_H(ctx->r3, 0X0);
    // 0x002486DC: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x002486E0: addiu       $v0, $v0, 0x934
    ctx->r2 = ADD32(ctx->r2, 0X934);
    // 0x002486E4: addu        $a1, $s1, $v0
    ctx->r5 = ADD32(ctx->r17, ctx->r2);
    // 0x002486E8: lh          $v0, 0x0($a1)
    ctx->r2 = MEM_H(ctx->r5, 0X0);
    // 0x002486EC: lh          $v1, 0x2($v1)
    ctx->r3 = MEM_H(ctx->r3, 0X2);
    // 0x002486F0: addiu       $a0, $v0, 0x2
    ctx->r4 = ADD32(ctx->r2, 0X2);
    // 0x002486F4: slt         $v0, $a0, $v1
    ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x002486F8: bnel        $v0, $zero, L_00248700
    if (ctx->r2 != 0) {
        // 0x002486FC: addu        $v1, $a0, $zero
        ctx->r3 = ADD32(ctx->r4, 0);
            goto L_00248700;
    }
    goto skip_0;
    // 0x002486FC: addu        $v1, $a0, $zero
    ctx->r3 = ADD32(ctx->r4, 0);
    skip_0:
L_00248700:
    // 0x00248700: addiu       $v0, $zero, 0x16
    ctx->r2 = ADD32(0, 0X16);
    // 0x00248704: sh          $v1, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r3;
    // 0x00248708: sh          $v0, 0xB14($s1)
    MEM_H(0XB14, ctx->r17) = ctx->r2;
L_0024870C:
    // 0x0024870C: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x00248710: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00248714: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00248718: jr          $ra
    // 0x0024871C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x0024871C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_00227680(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00227680: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x00227684: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x00227688: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x0022768C: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x00227690: sdc1        $f20, 0x30($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X30, ctx->r29);
    // 0x00227694: lwc1        $f1, 0x19C($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X19C);
    // 0x00227698: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x0022769C: c.lt.s      $f20, $f1
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f20.fl < ctx->f1.fl;
    // 0x002276A0: nop

    // 0x002276A4: bc1f        L_002276D4
    if (!c1cs) {
        // 0x002276A8: nop
    
            goto L_002276D4;
    }
    // 0x002276A8: nop

    // 0x002276AC: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x002276B0: lwc1        $f0, 0x6D28($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6D28);
    // 0x002276B4: sub.s       $f0, $f1, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f1.fl - ctx->f0.fl;
    // 0x002276B8: swc1        $f0, 0x19C($s0)
    MEM_W(0X19C, ctx->r16) = ctx->f0.u32l;
    // 0x002276BC: lw          $t0, 0x4($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X4);
    // 0x002276C0: lw          $t1, 0x8($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X8);
    // 0x002276C4: lw          $t2, 0xC($s0)
    ctx->r10 = MEM_W(ctx->r16, 0XC);
    // 0x002276C8: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x002276CC: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    // 0x002276D0: sw          $t2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r10;
L_002276D4:
    // 0x002276D4: jal         0x002156FC
    // 0x002276D8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_002156FC(rdram, ctx);
        goto after_0;
    // 0x002276D8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x002276DC: lw          $v1, 0x14($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X14);
    // 0x002276E0: lui         $v0, 0x800F
    ctx->r2 = S32(0X800F << 16);
    // 0x002276E4: addiu       $v0, $v0, 0x1360
    ctx->r2 = ADD32(ctx->r2, 0X1360);
    // 0x002276E8: beq         $v1, $v0, L_002276FC
    if (ctx->r3 == ctx->r2) {
        // 0x002276EC: nop
    
            goto L_002276FC;
    }
    // 0x002276EC: nop

    // 0x002276F0: swc1        $f20, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->f20.u32l;
    // 0x002276F4: swc1        $f20, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f20.u32l;
    // 0x002276F8: swc1        $f20, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f20.u32l;
L_002276FC:
    // 0x002276FC: lui         $v0, 0x800F
    ctx->r2 = S32(0X800F << 16);
    // 0x00227700: addiu       $v0, $v0, 0x1EF0
    ctx->r2 = ADD32(ctx->r2, 0X1EF0);
    // 0x00227704: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x00227708: lw          $a1, 0x4($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X4);
    // 0x0022770C: lw          $a2, 0x8($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X8);
    // 0x00227710: lw          $a3, 0xC($s0)
    ctx->r7 = MEM_W(ctx->r16, 0XC);
    // 0x00227714: jal         0x00239F00
    // 0x00227718: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00239F00(rdram, ctx);
        goto after_1;
    // 0x00227718: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x0022771C: lwc1        $f0, 0x4($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X4);
    // 0x00227720: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00227724: lwc1        $f2, 0x6060($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X6060);
    // 0x00227728: sub.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f2.fl;
    // 0x0022772C: lwc1        $f5, 0x8($s0)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r16, 0X8);
    // 0x00227730: sub.s       $f5, $f5, $f2
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f5.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f5.fl = ctx->f5.fl - ctx->f2.fl;
    // 0x00227734: lwc1        $f3, 0xC($s0)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r16, 0XC);
    // 0x00227738: sub.s       $f3, $f3, $f2
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f3.fl = ctx->f3.fl - ctx->f2.fl;
    // 0x0022773C: lwc1        $f4, 0x4($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X4);
    // 0x00227740: lwc1        $f1, 0xC($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0XC);
    // 0x00227744: add.s       $f4, $f4, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = ctx->f4.fl + ctx->f2.fl;
    // 0x00227748: swc1        $f0, 0x14C($s0)
    MEM_W(0X14C, ctx->r16) = ctx->f0.u32l;
    // 0x0022774C: lwc1        $f0, 0x8($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X8);
    // 0x00227750: add.s       $f1, $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f2.fl;
    // 0x00227754: swc1        $f5, 0x150($s0)
    MEM_W(0X150, ctx->r16) = ctx->f_odd[(5 - 1) * 2];
    // 0x00227758: swc1        $f3, 0x154($s0)
    MEM_W(0X154, ctx->r16) = ctx->f_odd[(3 - 1) * 2];
    // 0x0022775C: add.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f2.fl;
    // 0x00227760: swc1        $f4, 0x158($s0)
    MEM_W(0X158, ctx->r16) = ctx->f4.u32l;
    // 0x00227764: swc1        $f1, 0x160($s0)
    MEM_W(0X160, ctx->r16) = ctx->f_odd[(1 - 1) * 2];
    // 0x00227768: swc1        $f0, 0x15C($s0)
    MEM_W(0X15C, ctx->r16) = ctx->f0.u32l;
    // 0x0022776C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x00227770: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x00227774: ldc1        $f20, 0x30($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X30);
    // 0x00227778: jr          $ra
    // 0x0022777C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x0022777C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_002103C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002103C8: mtc1        $a2, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r6;
    // 0x002103CC: lwc1        $f0, 0x0($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X0);
    // 0x002103D0: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x002103D4: lwc1        $f3, 0x10($sp)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x002103D8: swc1        $f0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f0.u32l;
    // 0x002103DC: lwc1        $f0, 0x4($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X4);
    // 0x002103E0: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x002103E4: swc1        $f0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->f0.u32l;
    // 0x002103E8: lwc1        $f0, 0x8($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X8);
    // 0x002103EC: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x002103F0: mtc1        $a3, $f2
    ctx->f2.u32l = ctx->r7;
    // 0x002103F4: swc1        $f0, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->f0.u32l;
    // 0x002103F8: lwc1        $f0, 0x10($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X10);
    // 0x002103FC: mul.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f2.fl);
    // 0x00210400: swc1        $f0, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->f0.u32l;
    // 0x00210404: lwc1        $f0, 0x14($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X14);
    // 0x00210408: mul.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f2.fl);
    // 0x0021040C: swc1        $f0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->f0.u32l;
    // 0x00210410: lwc1        $f0, 0x18($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X18);
    // 0x00210414: mul.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f2.fl);
    // 0x00210418: swc1        $f0, 0x18($a0)
    MEM_W(0X18, ctx->r4) = ctx->f0.u32l;
    // 0x0021041C: lwc1        $f0, 0x20($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X20);
    // 0x00210420: mul.s       $f0, $f0, $f3
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f3.fl);
    // 0x00210424: swc1        $f0, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->f0.u32l;
    // 0x00210428: lwc1        $f0, 0x24($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X24);
    // 0x0021042C: mul.s       $f0, $f0, $f3
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f3.fl);
    // 0x00210430: swc1        $f0, 0x24($a0)
    MEM_W(0X24, ctx->r4) = ctx->f0.u32l;
    // 0x00210434: lwc1        $f0, 0x28($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X28);
    // 0x00210438: mul.s       $f0, $f0, $f3
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f3.fl);
    // 0x0021043C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00210440: lwc1        $f1, 0x5618($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X5618);
    // 0x00210444: swc1        $f0, 0x28($a0)
    MEM_W(0X28, ctx->r4) = ctx->f0.u32l;
    // 0x00210448: lwc1        $f0, 0x30($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X30);
    // 0x0021044C: swc1        $f0, 0x30($a0)
    MEM_W(0X30, ctx->r4) = ctx->f0.u32l;
    // 0x00210450: lwc1        $f0, 0x34($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X34);
    // 0x00210454: swc1        $f0, 0x34($a0)
    MEM_W(0X34, ctx->r4) = ctx->f0.u32l;
    // 0x00210458: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x0021045C: lwc1        $f2, 0x38($a1)
    ctx->f2.u32l = MEM_W(ctx->r5, 0X38);
    // 0x00210460: swc1        $f1, 0x3C($a0)
    MEM_W(0X3C, ctx->r4) = ctx->f_odd[(1 - 1) * 2];
    // 0x00210464: swc1        $f0, 0x2C($a0)
    MEM_W(0X2C, ctx->r4) = ctx->f0.u32l;
    // 0x00210468: swc1        $f0, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = ctx->f0.u32l;
    // 0x0021046C: swc1        $f0, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->f0.u32l;
    // 0x00210470: jr          $ra
    // 0x00210474: swc1        $f2, 0x38($a0)
    MEM_W(0X38, ctx->r4) = ctx->f2.u32l;
    return;
    // 0x00210474: swc1        $f2, 0x38($a0)
    MEM_W(0X38, ctx->r4) = ctx->f2.u32l;
;}
RECOMP_FUNC void func_0025F624(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0025F624: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x0025F628: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x0025F62C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0025F630: lwc1        $f20, 0x790C($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X790C);
    // 0x0025F634: sdc1        $f21, 0x20($sp)
    CHECK_FR(ctx, 21);
    SD(ctx->f21.u64, 0X20, ctx->r29);
    // 0x0025F638: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0025F63C: lwc1        $f21, 0x7910($at)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r1, 0X7910);
    // 0x0025F640: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0025F644: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x0025F648: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x0025F64C: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    // 0x0025F650: jal         0x002119FC
    // 0x0025F654: mov.s       $f14, $f21
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 21);
    ctx->f14.fl = ctx->f21.fl;
    func_002119FC(rdram, ctx);
        goto after_0;
    // 0x0025F654: mov.s       $f14, $f21
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 21);
    ctx->f14.fl = ctx->f21.fl;
    after_0:
    // 0x0025F658: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    // 0x0025F65C: mov.s       $f14, $f21
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 21);
    ctx->f14.fl = ctx->f21.fl;
    // 0x0025F660: jal         0x002119FC
    // 0x0025F664: swc1        $f0, 0x134($s0)
    MEM_W(0X134, ctx->r16) = ctx->f0.u32l;
    func_002119FC(rdram, ctx);
        goto after_1;
    // 0x0025F664: swc1        $f0, 0x134($s0)
    MEM_W(0X134, ctx->r16) = ctx->f0.u32l;
    after_1:
    // 0x0025F668: swc1        $f0, 0x138($s0)
    MEM_W(0X138, ctx->r16) = ctx->f0.u32l;
    // 0x0025F66C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x0025F670: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0025F674: ldc1        $f21, 0x20($sp)
    CHECK_FR(ctx, 21);
    ctx->f21.u64 = LD(ctx->r29, 0X20);
    // 0x0025F678: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x0025F67C: jr          $ra
    // 0x0025F680: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x0025F680: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_00286674(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00286674: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00286678: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x0028667C: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x00286680: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x00286684: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00286688: jal         0x00202130
    // 0x0028668C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    entry_00202130(rdram, ctx);
        goto after_0;
    // 0x0028668C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_0:
    // 0x00286690: jal         0x0029A720
    // 0x00286694: addiu       $a0, $zero, 0xFE
    ctx->r4 = ADD32(0, 0XFE);
    func_0029A720(rdram, ctx);
        goto after_1;
    // 0x00286694: addiu       $a0, $zero, 0xFE
    ctx->r4 = ADD32(0, 0XFE);
    after_1:
    // 0x00286698: jal         0x0029A580
    // 0x0028669C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_0029A580(rdram, ctx);
        goto after_2;
    // 0x0028669C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_2:
    // 0x002866A0: lui         $s0, 0x8013
    ctx->r16 = S32(0X8013 << 16);
    // 0x002866A4: addiu       $s0, $s0, 0xA58
    ctx->r16 = ADD32(ctx->r16, 0XA58);
    // 0x002866A8: jal         0x00425604
    // 0x002866AC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00425604(rdram, ctx);
        goto after_3;
    // 0x002866AC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x002866B0: jal         0x00425220
    // 0x002866B4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00425220(rdram, ctx);
        goto after_4;
    // 0x002866B4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
    // 0x002866B8: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x002866BC: lw          $a0, 0xA88($a0)
    ctx->r4 = MEM_W(ctx->r4, 0XA88);
    // 0x002866C0: jal         0x0029AC90
    // 0x002866C4: nop

    osViSwapBuffer_recomp(rdram, ctx);
        goto after_5;
    // 0x002866C4: nop

    after_5:
    // 0x002866C8: jal         0x0029A580
    // 0x002866CC: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_0029A580(rdram, ctx);
        goto after_6;
    // 0x002866CC: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_6:
    // 0x002866D0: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x002866D4: lw          $v0, 0x300($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X300);
    // 0x002866D8: bne         $v0, $zero, L_002866F0
    if (ctx->r2 != 0) {
        // 0x002866DC: nop
    
            goto L_002866F0;
    }
    // 0x002866DC: nop

    // 0x002866E0: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x002866E4: lwc1        $f0, -0x62A4($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X62A4);
    // 0x002866E8: j           L_002866F8
    // 0x002866EC: nop

        goto L_002866F8;
    // 0x002866EC: nop

L_002866F0:
    // 0x002866F0: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x002866F4: lwc1        $f0, -0x62A0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X62A0);
L_002866F8:
    // 0x002866F8: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x002866FC: swc1        $f0, -0x4F5C($at)
    MEM_W(-0X4F5C, ctx->r1) = ctx->f0.u32l;
    // 0x00286700: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x00286704: sw          $zero, -0xEDC($at)
    MEM_W(-0XEDC, ctx->r1) = 0;
    // 0x00286708: jal         0x0042F4F0
    // 0x0028670C: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    func_0042F4F0(rdram, ctx);
        goto after_7;
    // 0x0028670C: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    after_7:
    // 0x00286710: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x00286714: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x00286718: sw          $v0, -0x4EF0($at)
    MEM_W(-0X4EF0, ctx->r1) = ctx->r2;
    // 0x0028671C: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x00286720: sw          $zero, -0x5278($at)
    MEM_W(-0X5278, ctx->r1) = 0;
    // 0x00286724: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x00286728: sw          $zero, -0x4EF4($at)
    MEM_W(-0X4EF4, ctx->r1) = 0;
    // 0x0028672C: lui         $at, 0x800F
    ctx->r1 = S32(0X800F << 16);
    // 0x00286730: sw          $zero, 0x6CA8($at)
    MEM_W(0X6CA8, ctx->r1) = 0;
    // 0x00286734: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x00286738: sw          $zero, -0x52EC($at)
    MEM_W(-0X52EC, ctx->r1) = 0;
    // 0x0028673C: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x00286740: sw          $zero, -0x4F64($at)
    MEM_W(-0X4F64, ctx->r1) = 0;
    // 0x00286744: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x00286748: sw          $zero, -0xED0($at)
    MEM_W(-0XED0, ctx->r1) = 0;
    // 0x0028674C: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x00286750: sw          $zero, -0xECC($at)
    MEM_W(-0XECC, ctx->r1) = 0;
    // 0x00286754: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x00286758: sw          $zero, -0xEC8($at)
    MEM_W(-0XEC8, ctx->r1) = 0;
    // 0x0028675C: lui         $at, 0x800F
    ctx->r1 = S32(0X800F << 16);
    // 0x00286760: sw          $zero, 0x6CA4($at)
    MEM_W(0X6CA4, ctx->r1) = 0;
    // 0x00286764: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x00286768: sw          $zero, -0x4F60($at)
    MEM_W(-0X4F60, ctx->r1) = 0;
    // 0x0028676C: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x00286770: sw          $zero, -0x4F68($at)
    MEM_W(-0X4F68, ctx->r1) = 0;
    // 0x00286774: jal         0x00286440
    // 0x00286778: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_00286440(rdram, ctx);
        goto after_8;
    // 0x00286778: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_8:
    // 0x0028677C: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x00286780: lw          $v0, 0x2210($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2210);
    // 0x00286784: beq         $v0, $zero, L_002867D8
    if (ctx->r2 == 0) {
        // 0x00286788: lui         $s1, 0x2
        ctx->r17 = S32(0X2 << 16);
            goto L_002867D8;
    }
    // 0x00286788: lui         $s1, 0x2
    ctx->r17 = S32(0X2 << 16);
L_0028678C:
    // 0x0028678C: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x00286790: lw          $v1, 0x2030($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X2030);
    // 0x00286794: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x00286798: lw          $v0, 0x2034($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2034);
    // 0x0028679C: mult        $v1, $v0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x002867A0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x002867A4: sll         $v0, $s0, 2
    ctx->r2 = S32(ctx->r16 << 2);
    // 0x002867A8: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x002867AC: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x002867B0: lw          $a0, 0xA88($at)
    ctx->r4 = MEM_W(ctx->r1, 0XA88);
    // 0x002867B4: mflo        $a3
    ctx->r7 = lo;
    // 0x002867B8: jal         0x00266C5C
    // 0x002867BC: sll         $a2, $a3, 1
    ctx->r6 = S32(ctx->r7 << 1);
    func_00266C5C(rdram, ctx);
        goto after_9;
    // 0x002867BC: sll         $a2, $a3, 1
    ctx->r6 = S32(ctx->r7 << 1);
    after_9:
    // 0x002867C0: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x002867C4: lw          $v0, 0x2210($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2210);
    // 0x002867C8: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x002867CC: sltu        $v0, $s0, $v0
    ctx->r2 = ctx->r16 < ctx->r2 ? 1 : 0;
    // 0x002867D0: bne         $v0, $zero, L_0028678C
    if (ctx->r2 != 0) {
        // 0x002867D4: lui         $s1, 0x2
        ctx->r17 = S32(0X2 << 16);
            goto L_0028678C;
    }
    // 0x002867D4: lui         $s1, 0x2
    ctx->r17 = S32(0X2 << 16);
L_002867D8:
    // 0x002867D8: ori         $s1, $s1, 0x2C00
    ctx->r17 = ctx->r17 | 0X2C00;
    // 0x002867DC: addu        $s1, $s2, $s1
    ctx->r17 = ADD32(ctx->r18, ctx->r17);
    // 0x002867E0: jal         0x0042FE4C
    // 0x002867E4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_0042FE4C(rdram, ctx);
        goto after_10;
    // 0x002867E4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_10:
    // 0x002867E8: lui         $s0, 0x2
    ctx->r16 = S32(0X2 << 16);
    // 0x002867EC: ori         $s0, $s0, 0x2BC0
    ctx->r16 = ctx->r16 | 0X2BC0;
    // 0x002867F0: addu        $s0, $s2, $s0
    ctx->r16 = ADD32(ctx->r18, ctx->r16);
    // 0x002867F4: jal         0x0042E834
    // 0x002867F8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_0042E834(rdram, ctx);
        goto after_11;
    // 0x002867F8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_11:
    // 0x002867FC: jal         0x00241860
    // 0x00286800: nop

    entry_00241860(rdram, ctx);
        goto after_12;
    // 0x00286800: nop

    after_12:
    // 0x00286804: lui         $v0, 0xFC
    ctx->r2 = S32(0XFC << 16);
    // 0x00286808: ori         $v0, $v0, 0xBFB4
    ctx->r2 = ctx->r2 | 0XBFB4;
    // 0x0028680C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x00286810: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x00286814: jal         0x0042FBA4
    // 0x00286818: sw          $v0, 0x3C4($s2)
    MEM_W(0X3C4, ctx->r18) = ctx->r2;
    func_0042FBA4(rdram, ctx);
        goto after_13;
    // 0x00286818: sw          $v0, 0x3C4($s2)
    MEM_W(0X3C4, ctx->r18) = ctx->r2;
    after_13:
    // 0x0028681C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00286820: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x00286824: jal         0x0042E5AC
    // 0x00286828: addu        $a2, $a1, $zero
    ctx->r6 = ADD32(ctx->r5, 0);
    func_0042E5AC(rdram, ctx);
        goto after_14;
    // 0x00286828: addu        $a2, $a1, $zero
    ctx->r6 = ADD32(ctx->r5, 0);
    after_14:
    // 0x0028682C: lw          $a1, 0x3C4($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X3C4);
    // 0x00286830: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x00286834: addiu       $a0, $a0, 0x7078
    ctx->r4 = ADD32(ctx->r4, 0X7078);
    // 0x00286838: jal         0x00429FA0
    // 0x0028683C: nop

    func_00429FA0(rdram, ctx);
        goto after_15;
    // 0x0028683C: nop

    after_15:
    // 0x00286840: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00286844: lbu         $v0, 0x6CF1($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X6CF1);
    // 0x00286848: bnel        $v0, $zero, L_0028685C
    if (ctx->r2 != 0) {
        // 0x0028684C: lui         $a0, 0x1
        ctx->r4 = S32(0X1 << 16);
            goto L_0028685C;
    }
    goto skip_0;
    // 0x0028684C: lui         $a0, 0x1
    ctx->r4 = S32(0X1 << 16);
    skip_0:
    // 0x00286850: jal         0x00430070
    // 0x00286854: nop

    func_00430070(rdram, ctx);
        goto after_16;
    // 0x00286854: nop

    after_16:
    // 0x00286858: lui         $a0, 0x1
    ctx->r4 = S32(0X1 << 16);
L_0028685C:
    // 0x0028685C: ori         $a0, $a0, 0x9440
    ctx->r4 = ctx->r4 | 0X9440;
    // 0x00286860: jal         0x0042EB50
    // 0x00286864: addu        $a0, $s2, $a0
    ctx->r4 = ADD32(ctx->r18, ctx->r4);
    func_0042EB50(rdram, ctx);
        goto after_17;
    // 0x00286864: addu        $a0, $s2, $a0
    ctx->r4 = ADD32(ctx->r18, ctx->r4);
    after_17:
    // 0x00286868: jal         0x004263DC
    // 0x0028686C: nop

    func_004263DC(rdram, ctx);
        goto after_18;
    // 0x0028686C: nop

    after_18:
    // 0x00286870: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00286874: lwc1        $f0, -0x629C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X629C);
    // 0x00286878: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0028687C: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x00286880: sw          $zero, -0xEC4($at)
    MEM_W(-0XEC4, ctx->r1) = 0;
    // 0x00286884: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x00286888: sw          $zero, -0xEB8($at)
    MEM_W(-0XEB8, ctx->r1) = 0;
    // 0x0028688C: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x00286890: sw          $zero, -0x4EF8($at)
    MEM_W(-0X4EF8, ctx->r1) = 0;
    // 0x00286894: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x00286898: sw          $v0, -0xEBC($at)
    MEM_W(-0XEBC, ctx->r1) = ctx->r2;
    // 0x0028689C: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x002868A0: sw          $zero, -0x4EEC($at)
    MEM_W(-0X4EEC, ctx->r1) = 0;
    // 0x002868A4: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x002868A8: swc1        $f0, -0x52C0($at)
    MEM_W(-0X52C0, ctx->r1) = ctx->f0.u32l;
    // 0x002868AC: jal         0x00285A94
    // 0x002868B0: nop

    func_00285A94(rdram, ctx);
        goto after_19;
    // 0x002868B0: nop

    after_19:
    // 0x002868B4: jal         0x0028D0E0
    // 0x002868B8: nop

    func_0028D0E0(rdram, ctx);
        goto after_20;
    // 0x002868B8: nop

    after_20:
    // 0x002868BC: beq         $v0, $zero, L_002868CC
    if (ctx->r2 == 0) {
        // 0x002868C0: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_002868CC;
    }
    // 0x002868C0: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x002868C4: j           L_002868D0
    // 0x002868C8: addiu       $a1, $zero, 0xD
    ctx->r5 = ADD32(0, 0XD);
        goto L_002868D0;
    // 0x002868C8: addiu       $a1, $zero, 0xD
    ctx->r5 = ADD32(0, 0XD);
L_002868CC:
    // 0x002868CC: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
L_002868D0:
    // 0x002868D0: jal         0x00288BC8
    // 0x002868D4: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
    func_00288BC8(rdram, ctx);
        goto after_21;
    // 0x002868D4: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
    after_21:
L_002868D8:
    // 0x002868D8: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x002868DC: addiu       $a0, $a0, -0x52D8
    ctx->r4 = ADD32(ctx->r4, -0X52D8);
    // 0x002868E0: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x002868E4: addiu       $a1, $a1, -0xEDC
    ctx->r5 = ADD32(ctx->r5, -0XEDC);
    // 0x002868E8: jal         0x0029B6F0
    // 0x002868EC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osRecvMesg_recomp(rdram, ctx);
        goto after_22;
    // 0x002868EC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_22:
    // 0x002868F0: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x002868F4: lw          $a0, -0xEDC($a0)
    ctx->r4 = MEM_W(ctx->r4, -0XEDC);
    // 0x002868F8: lh          $v1, 0x0($a0)
    ctx->r3 = MEM_H(ctx->r4, 0X0);
    // 0x002868FC: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x00286900: beq         $v1, $v0, L_00286940
    if (ctx->r3 == ctx->r2) {
        // 0x00286904: slti        $v0, $v1, 0x3
        ctx->r2 = SIGNED(ctx->r3) < 0X3 ? 1 : 0;
            goto L_00286940;
    }
    // 0x00286904: slti        $v0, $v1, 0x3
    ctx->r2 = SIGNED(ctx->r3) < 0X3 ? 1 : 0;
    // 0x00286908: beq         $v0, $zero, L_00286920
    if (ctx->r2 == 0) {
        // 0x0028690C: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_00286920;
    }
    // 0x0028690C: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x00286910: beq         $v1, $s0, L_00286930
    if (ctx->r3 == ctx->r16) {
        // 0x00286914: nop
    
            goto L_00286930;
    }
    // 0x00286914: nop

    // 0x00286918: j           L_002868D8
    // 0x0028691C: nop

        goto L_002868D8;
    // 0x0028691C: nop

L_00286920:
    // 0x00286920: beq         $v1, $v0, L_002869C0
    if (ctx->r3 == ctx->r2) {
        // 0x00286924: nop
    
            goto L_002869C0;
    }
    // 0x00286924: nop

    // 0x00286928: j           L_002868D8
    // 0x0028692C: nop

        goto L_002868D8;
    // 0x0028692C: nop

L_00286930:
    // 0x00286930: jal         0x00288C80
    // 0x00286934: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_00288C80(rdram, ctx);
        goto after_23;
    // 0x00286934: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_23:
    // 0x00286938: j           L_002868D8
    // 0x0028693C: nop

        goto L_002868D8;
    // 0x0028693C: nop

L_00286940:
    // 0x00286940: addiu       $v0, $s2, 0xF0
    ctx->r2 = ADD32(ctx->r18, 0XF0);
    // 0x00286944: bne         $a0, $v0, L_0028695C
    if (ctx->r4 != ctx->r2) {
        // 0x00286948: addiu       $v0, $s2, 0x230
        ctx->r2 = ADD32(ctx->r18, 0X230);
            goto L_0028695C;
    }
    // 0x00286948: addiu       $v0, $s2, 0x230
    ctx->r2 = ADD32(ctx->r18, 0X230);
    // 0x0028694C: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x00286950: sw          $s2, -0xEC0($at)
    MEM_W(-0XEC0, ctx->r1) = ctx->r18;
    // 0x00286954: j           L_0028697C
    // 0x00286958: nop

        goto L_0028697C;
    // 0x00286958: nop

L_0028695C:
    // 0x0028695C: bne         $a0, $v0, L_0028696C
    if (ctx->r4 != ctx->r2) {
        // 0x00286960: addiu       $v0, $s2, 0x370
        ctx->r2 = ADD32(ctx->r18, 0X370);
            goto L_0028696C;
    }
    // 0x00286960: addiu       $v0, $s2, 0x370
    ctx->r2 = ADD32(ctx->r18, 0X370);
    // 0x00286964: j           L_00286974
    // 0x00286968: addiu       $v0, $s2, 0x140
    ctx->r2 = ADD32(ctx->r18, 0X140);
        goto L_00286974;
    // 0x00286968: addiu       $v0, $s2, 0x140
    ctx->r2 = ADD32(ctx->r18, 0X140);
L_0028696C:
    // 0x0028696C: bne         $a0, $v0, L_0028697C
    if (ctx->r4 != ctx->r2) {
        // 0x00286970: addiu       $v0, $s2, 0x280
        ctx->r2 = ADD32(ctx->r18, 0X280);
            goto L_0028697C;
    }
    // 0x00286970: addiu       $v0, $s2, 0x280
    ctx->r2 = ADD32(ctx->r18, 0X280);
L_00286974:
    // 0x00286974: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x00286978: sw          $v0, -0xEC0($at)
    MEM_W(-0XEC0, ctx->r1) = ctx->r2;
L_0028697C:
    // 0x0028697C: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x00286980: addu        $at, $s2, $at
    ctx->r1 = ADD32(ctx->r18, ctx->r1);
    // 0x00286984: lw          $v1, 0x3FD8($at)
    ctx->r3 = MEM_W(ctx->r1, 0X3FD8);
    // 0x00286988: addiu       $v0, $zero, 0x11
    ctx->r2 = ADD32(0, 0X11);
    // 0x0028698C: bne         $v1, $v0, L_002869B0
    if (ctx->r3 != ctx->r2) {
        // 0x00286990: nop
    
            goto L_002869B0;
    }
    // 0x00286990: nop

    // 0x00286994: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x00286998: lw          $v0, -0x4EF0($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X4EF0);
    // 0x0028699C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x002869A0: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x002869A4: sw          $v0, -0x4EF0($at)
    MEM_W(-0X4EF0, ctx->r1) = ctx->r2;
    // 0x002869A8: j           L_002868D8
    // 0x002869AC: nop

        goto L_002868D8;
    // 0x002869AC: nop

L_002869B0:
    // 0x002869B0: jal         0x00287ABC
    // 0x002869B4: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_00287ABC(rdram, ctx);
        goto after_24;
    // 0x002869B4: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_24:
    // 0x002869B8: j           L_002868D8
    // 0x002869BC: nop

        goto L_002868D8;
    // 0x002869BC: nop

L_002869C0:
    // 0x002869C0: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x002869C4: sb          $zero, 0x75F0($at)
    MEM_B(0X75F0, ctx->r1) = 0;
    // 0x002869C8: jal         0x00285304
    // 0x002869CC: nop

    func_00285304(rdram, ctx);
        goto after_25;
    // 0x002869CC: nop

    after_25:
    // 0x002869D0: jal         0x00285410
    // 0x002869D4: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_00285410(rdram, ctx);
        goto after_26;
    // 0x002869D4: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_26:
    // 0x002869D8: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x002869DC: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x002869E0: addu        $at, $s2, $at
    ctx->r1 = ADD32(ctx->r18, ctx->r1);
    // 0x002869E4: sb          $s0, 0x3FE0($at)
    MEM_B(0X3FE0, ctx->r1) = ctx->r16;
    // 0x002869E8: jal         0x00288C5C
    // 0x002869EC: addiu       $a1, $zero, 0x11
    ctx->r5 = ADD32(0, 0X11);
    func_00288C5C(rdram, ctx);
        goto after_27;
    // 0x002869EC: addiu       $a1, $zero, 0x11
    ctx->r5 = ADD32(0, 0X11);
    after_27:
    // 0x002869F0: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x002869F4: addu        $at, $s2, $at
    ctx->r1 = ADD32(ctx->r18, ctx->r1);
    // 0x002869F8: sw          $s0, 0x3FF0($at)
    MEM_W(0X3FF0, ctx->r1) = ctx->r16;
    // 0x002869FC: j           L_002868D8
    // 0x00286A00: nop

        goto L_002868D8;
    // 0x00286A00: nop

    // turok2: reconnected split function: a stray ELF symbol at 0x00286A04 ended
    // this function early, leaving it without its epilogue. On the
    // hardware execution simply continues into the next instruction.
    func_00286A04(rdram, ctx);
;}
RECOMP_FUNC void func_00238D3C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00238D3C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x00238D40: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x00238D44: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    // 0x00238D48: lbu         $v1, 0x0($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X0);
    // 0x00238D4C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00238D50: bne         $v1, $v0, L_00238D84
    if (ctx->r3 != ctx->r2) {
        // 0x00238D54: lui         $v1, 0x30
        ctx->r3 = S32(0X30 << 16);
            goto L_00238D84;
    }
    // 0x00238D54: lui         $v1, 0x30
    ctx->r3 = S32(0X30 << 16);
    // 0x00238D58: lw          $v0, 0xD4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XD4);
    // 0x00238D5C: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x00238D60: beq         $v0, $zero, L_00238D84
    if (ctx->r2 == 0) {
        // 0x00238D64: nop
    
            goto L_00238D84;
    }
    // 0x00238D64: nop

    // 0x00238D68: lw          $v0, 0x1A8($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X1A8);
    // 0x00238D6C: lw          $v0, 0xA50($v0)
    ctx->r2 = MEM_W(ctx->r2, 0XA50);
    // 0x00238D70: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x00238D74: sw          $zero, 0x38($sp)
    MEM_W(0X38, ctx->r29) = 0;
    // 0x00238D78: sw          $zero, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = 0;
    // 0x00238D7C: j           L_00238D8C
    // 0x00238D80: addiu       $a1, $v0, 0x140
    ctx->r5 = ADD32(ctx->r2, 0X140);
        goto L_00238D8C;
    // 0x00238D80: addiu       $a1, $v0, 0x140
    ctx->r5 = ADD32(ctx->r2, 0X140);
L_00238D84:
    // 0x00238D84: lui         $a1, 0x800F
    ctx->r5 = S32(0X800F << 16);
    // 0x00238D88: addiu       $a1, $a1, 0x5A50
    ctx->r5 = ADD32(ctx->r5, 0X5A50);
L_00238D8C:
    // 0x00238D8C: lh          $v0, 0x44($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X44);
    // 0x00238D90: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00238D94: lwc1        $f1, 0x65D4($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X65D4);
    // 0x00238D98: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x00238D9C: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00238DA0: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00238DA4: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    // 0x00238DA8: lbu         $v0, 0x46($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0X46);
    // 0x00238DAC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00238DB0: lwc1        $f1, 0x65D8($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X65D8);
    // 0x00238DB4: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x00238DB8: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00238DBC: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00238DC0: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x00238DC4: lw          $t0, 0x38($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X38);
    // 0x00238DC8: lw          $t1, 0x3C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X3C);
    // 0x00238DCC: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x00238DD0: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x00238DD4: lw          $a3, 0x34($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X34);
    // 0x00238DD8: lw          $a2, 0x40($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X40);
    // 0x00238DDC: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x00238DE0: addiu       $a0, $a0, 0x7078
    ctx->r4 = ADD32(ctx->r4, 0X7078);
    // 0x00238DE4: jal         0x00225DB0
    // 0x00238DE8: nop

    func_00225DB0(rdram, ctx);
        goto after_0;
    // 0x00238DE8: nop

    after_0:
    // 0x00238DEC: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x00238DF0: jr          $ra
    // 0x00238DF4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x00238DF4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_0041B3E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041B3E8: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x0041B3EC: lw          $v0, -0x5528($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X5528);
    // 0x0041B3F0: xori        $v0, $v0, 0x10
    ctx->r2 = ctx->r2 ^ 0X10;
    // 0x0041B3F4: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x0041B3F8: sw          $v0, -0x5528($at)
    MEM_W(-0X5528, ctx->r1) = ctx->r2;
    // 0x0041B3FC: jr          $ra
    // 0x0041B400: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x0041B400: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void func_00271904(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00271904: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x00271908: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x0027190C: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x00271910: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x00271914: addu        $s3, $a1, $zero
    ctx->r19 = ADD32(ctx->r5, 0);
    // 0x00271918: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0027191C: addiu       $s0, $s2, 0x110
    ctx->r16 = ADD32(ctx->r18, 0X110);
    // 0x00271920: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x00271924: jal         0x0029DFF0
    // 0x00271928: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    func_0029DFF0(rdram, ctx);
        goto after_0;
    // 0x00271928: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    after_0:
    // 0x0027192C: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x00271930: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x00271934: lw          $v1, 0x1C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X1C);
    // 0x00271938: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0027193C: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x00271940: beq         $v1, $v0, L_00271968
    if (ctx->r3 == ctx->r2) {
        // 0x00271944: sw          $v1, 0x1C($s0)
        MEM_W(0X1C, ctx->r16) = ctx->r3;
            goto L_00271968;
    }
    // 0x00271944: sw          $v1, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r3;
    // 0x00271948: jal         0x0029E010
    // 0x0027194C: nop

    func_0029E010(rdram, ctx);
        goto after_1;
    // 0x0027194C: nop

    after_1:
    // 0x00271950: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00271954: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x00271958: jal         0x0029B6F0
    // 0x0027195C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osRecvMesg_recomp(rdram, ctx);
        goto after_2;
    // 0x0027195C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_2:
    // 0x00271960: j           L_00271974
    // 0x00271964: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
        goto L_00271974;
    // 0x00271964: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
L_00271968:
    // 0x00271968: jal         0x0029E010
    // 0x0027196C: nop

    func_0029E010(rdram, ctx);
        goto after_3;
    // 0x0027196C: nop

    after_3:
    // 0x00271970: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
L_00271974:
    // 0x00271974: addu        $v1, $s2, $zero
    ctx->r3 = ADD32(ctx->r18, 0);
L_00271978:
    // 0x00271978: lw          $v0, 0x1DC0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X1DC0);
    // 0x0027197C: beql        $v0, $s3, L_00271984
    if (ctx->r2 == ctx->r19) {
        // 0x00271980: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_00271984;
    }
    goto skip_0;
    // 0x00271980: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_0:
L_00271984:
    // 0x00271984: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x00271988: slti        $v0, $a0, 0x11
    ctx->r2 = SIGNED(ctx->r4) < 0X11 ? 1 : 0;
    // 0x0027198C: bne         $v0, $zero, L_00271978
    if (ctx->r2 != 0) {
        // 0x00271990: addiu       $v1, $v1, 0xCC
        ctx->r3 = ADD32(ctx->r3, 0XCC);
            goto L_00271978;
    }
    // 0x00271990: addiu       $v1, $v1, 0xCC
    ctx->r3 = ADD32(ctx->r3, 0XCC);
    // 0x00271994: jal         0x0029DFF0
    // 0x00271998: addiu       $s0, $s2, 0x110
    ctx->r16 = ADD32(ctx->r18, 0X110);
    func_0029DFF0(rdram, ctx);
        goto after_4;
    // 0x00271998: addiu       $s0, $s2, 0x110
    ctx->r16 = ADD32(ctx->r18, 0X110);
    after_4:
    // 0x0027199C: lw          $v1, 0x1C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X1C);
    // 0x002719A0: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x002719A4: beq         $v1, $zero, L_002719CC
    if (ctx->r3 == 0) {
        // 0x002719A8: sw          $v1, 0x1C($s0)
        MEM_W(0X1C, ctx->r16) = ctx->r3;
            goto L_002719CC;
    }
    // 0x002719A8: sw          $v1, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r3;
    // 0x002719AC: jal         0x0029E010
    // 0x002719B0: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    func_0029E010(rdram, ctx);
        goto after_5;
    // 0x002719B0: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    after_5:
    // 0x002719B4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x002719B8: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x002719BC: jal         0x0029B820
    // 0x002719C0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osSendMesg_recomp(rdram, ctx);
        goto after_6;
    // 0x002719C0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_6:
    // 0x002719C4: j           L_002719D8
    // 0x002719C8: addu        $v0, $s1, $zero
    ctx->r2 = ADD32(ctx->r17, 0);
        goto L_002719D8;
    // 0x002719C8: addu        $v0, $s1, $zero
    ctx->r2 = ADD32(ctx->r17, 0);
L_002719CC:
    // 0x002719CC: jal         0x0029E010
    // 0x002719D0: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    func_0029E010(rdram, ctx);
        goto after_7;
    // 0x002719D0: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    after_7:
    // 0x002719D4: addu        $v0, $s1, $zero
    ctx->r2 = ADD32(ctx->r17, 0);
L_002719D8:
    // 0x002719D8: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x002719DC: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x002719E0: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x002719E4: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x002719E8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x002719EC: jr          $ra
    // 0x002719F0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x002719F0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_0040CFC4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0040CFC4: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x0040CFC8: lw          $v0, -0x6770($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X6770);
    // 0x0040CFCC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0040CFD0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0040CFD4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x0040CFD8: beq         $v0, $zero, L_0040D0E0
    if (ctx->r2 == 0) {
        // 0x0040CFDC: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_0040D0E0;
    }
    // 0x0040CFDC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x0040CFE0: lwc1        $f1, 0x4($v0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r2, 0X4);
    // 0x0040CFE4: mul.s       $f1, $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f1.fl);
    // 0x0040CFE8: lwc1        $f0, 0x8($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X8);
    // 0x0040CFEC: mul.s       $f0, $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x0040CFF0: lwc1        $f12, 0xC($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0XC);
    // 0x0040CFF4: mul.s       $f12, $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x0040CFF8: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x0040CFFC: jal         0x00298470
    // 0x0040D000: add.s       $f12, $f1, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = ctx->f1.fl + ctx->f12.fl;
    func_00298470(rdram, ctx);
        goto after_0;
    // 0x0040D000: add.s       $f12, $f1, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = ctx->f1.fl + ctx->f12.fl;
    after_0:
    // 0x0040D004: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0040D008: lwc1        $f1, 0x8DC($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X8DC);
    // 0x0040D00C: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x0040D010: nop

    // 0x0040D014: bc1f        L_0040D0E0
    if (!c1cs) {
        // 0x0040D018: nop
    
            goto L_0040D0E0;
    }
    // 0x0040D018: nop

    // 0x0040D01C: lw          $v0, 0x4F8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4F8);
    // 0x0040D020: addiu       $v1, $v0, 0xC
    ctx->r3 = ADD32(ctx->r2, 0XC);
    // 0x0040D024: sw          $v1, 0x4F8($s0)
    MEM_W(0X4F8, ctx->r16) = ctx->r3;
    // 0x0040D028: lw          $a1, 0xC($v0)
    ctx->r5 = MEM_W(ctx->r2, 0XC);
    // 0x0040D02C: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // 0x0040D030: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
    // 0x0040D034: sw          $zero, 0x518($s0)
    MEM_W(0X518, ctx->r16) = 0;
    // 0x0040D038: sw          $zero, 0x530($s0)
    MEM_W(0X530, ctx->r16) = 0;
    // 0x0040D03C: blez        $v0, L_0040D064
    if (SIGNED(ctx->r2) <= 0) {
        // 0x0040D040: sw          $zero, 0x548($s0)
        MEM_W(0X548, ctx->r16) = 0;
            goto L_0040D064;
    }
    // 0x0040D040: sw          $zero, 0x548($s0)
    MEM_W(0X548, ctx->r16) = 0;
    // 0x0040D044: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_0040D048:
    // 0x0040D048: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x0040D04C: sw          $zero, 0x24C($v0)
    MEM_W(0X24C, ctx->r2) = 0;
    // 0x0040D050: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // 0x0040D054: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x0040D058: slt         $v0, $v1, $v0
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x0040D05C: bne         $v0, $zero, L_0040D048
    if (ctx->r2 != 0) {
        // 0x0040D060: addiu       $a0, $a0, 0x4
        ctx->r4 = ADD32(ctx->r4, 0X4);
            goto L_0040D048;
    }
    // 0x0040D060: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
L_0040D064:
    // 0x0040D064: lw          $v0, 0x18($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X18);
    // 0x0040D068: blez        $v0, L_0040D090
    if (SIGNED(ctx->r2) <= 0) {
        // 0x0040D06C: addu        $v1, $zero, $zero
        ctx->r3 = ADD32(0, 0);
            goto L_0040D090;
    }
    // 0x0040D06C: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
    // 0x0040D070: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_0040D074:
    // 0x0040D074: lw          $v0, 0x1C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X1C);
    // 0x0040D078: sw          $zero, 0x24C($v0)
    MEM_W(0X24C, ctx->r2) = 0;
    // 0x0040D07C: lw          $v0, 0x18($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X18);
    // 0x0040D080: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x0040D084: slt         $v0, $v1, $v0
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x0040D088: bne         $v0, $zero, L_0040D074
    if (ctx->r2 != 0) {
        // 0x0040D08C: addiu       $a0, $a0, 0x4
        ctx->r4 = ADD32(ctx->r4, 0X4);
            goto L_0040D074;
    }
    // 0x0040D08C: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
L_0040D090:
    // 0x0040D090: lw          $v0, 0x2C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X2C);
    // 0x0040D094: blez        $v0, L_0040D0BC
    if (SIGNED(ctx->r2) <= 0) {
        // 0x0040D098: addu        $v1, $zero, $zero
        ctx->r3 = ADD32(0, 0);
            goto L_0040D0BC;
    }
    // 0x0040D098: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
    // 0x0040D09C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_0040D0A0:
    // 0x0040D0A0: lw          $v0, 0x30($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X30);
    // 0x0040D0A4: sw          $zero, 0x24C($v0)
    MEM_W(0X24C, ctx->r2) = 0;
    // 0x0040D0A8: lw          $v0, 0x2C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X2C);
    // 0x0040D0AC: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x0040D0B0: slt         $v0, $v1, $v0
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x0040D0B4: bne         $v0, $zero, L_0040D0A0
    if (ctx->r2 != 0) {
        // 0x0040D0B8: addiu       $a0, $a0, 0x4
        ctx->r4 = ADD32(ctx->r4, 0X4);
            goto L_0040D0A0;
    }
    // 0x0040D0B8: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
L_0040D0BC:
    // 0x0040D0BC: sll         $v0, $a1, 3
    ctx->r2 = S32(ctx->r5 << 3);
    // 0x0040D0C0: sw          $a1, 0x4FC($s0)
    MEM_W(0X4FC, ctx->r16) = ctx->r5;
    // 0x0040D0C4: lui         $at, 0x43
    ctx->r1 = S32(0X43 << 16);
    // 0x0040D0C8: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x0040D0CC: lw          $v0, 0x240C($at)
    ctx->r2 = MEM_W(ctx->r1, 0X240C);
    // 0x0040D0D0: beq         $v0, $zero, L_0040D0E0
    if (ctx->r2 == 0) {
        // 0x0040D0D4: nop
    
            goto L_0040D0E0;
    }
    // 0x0040D0D4: nop

    // 0x0040D0D8: jalr        $v0
    // 0x0040D0DC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_1;
    // 0x0040D0DC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
L_0040D0E0:
    // 0x0040D0E0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x0040D0E4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0040D0E8: jr          $ra
    // 0x0040D0EC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0040D0EC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_004548A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004548A0: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x004548A4: lw          $v0, -0x5528($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X5528);
    // 0x004548A8: xori        $v0, $v0, 0x4000
    ctx->r2 = ctx->r2 ^ 0X4000;
    // 0x004548AC: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x004548B0: sw          $v0, -0x5528($at)
    MEM_W(-0X5528, ctx->r1) = ctx->r2;
    // 0x004548B4: jr          $ra
    // 0x004548B8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x004548B8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void func_002298C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002298C4: addiu       $sp, $sp, -0x110
    ctx->r29 = ADD32(ctx->r29, -0X110);
    // 0x002298C8: sw          $s3, 0xE4($sp)
    MEM_W(0XE4, ctx->r29) = ctx->r19;
    // 0x002298CC: addu        $s3, $a0, $zero
    ctx->r19 = ADD32(ctx->r4, 0);
    // 0x002298D0: sw          $ra, 0xF0($sp)
    MEM_W(0XF0, ctx->r29) = ctx->r31;
    // 0x002298D4: sw          $s5, 0xEC($sp)
    MEM_W(0XEC, ctx->r29) = ctx->r21;
    // 0x002298D8: sw          $s4, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->r20;
    // 0x002298DC: sw          $s2, 0xE0($sp)
    MEM_W(0XE0, ctx->r29) = ctx->r18;
    // 0x002298E0: sw          $s1, 0xDC($sp)
    MEM_W(0XDC, ctx->r29) = ctx->r17;
    // 0x002298E4: sw          $s0, 0xD8($sp)
    MEM_W(0XD8, ctx->r29) = ctx->r16;
    // 0x002298E8: sdc1        $f22, 0x108($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X108, ctx->r29);
    // 0x002298EC: sdc1        $f21, 0x100($sp)
    CHECK_FR(ctx, 21);
    SD(ctx->f21.u64, 0X100, ctx->r29);
    // 0x002298F0: sdc1        $f20, 0xF8($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0XF8, ctx->r29);
    // 0x002298F4: lw          $v0, 0x40($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X40);
    // 0x002298F8: lui         $v1, 0x1
    ctx->r3 = S32(0X1 << 16);
    // 0x002298FC: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x00229900: beq         $v0, $zero, L_00229930
    if (ctx->r2 == 0) {
        // 0x00229904: nop
    
            goto L_00229930;
    }
    // 0x00229904: nop

    // 0x00229908: lw          $v0, 0x1B8($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X1B8);
    // 0x0022990C: beq         $v0, $zero, L_00229CE0
    if (ctx->r2 == 0) {
        // 0x00229910: nop
    
            goto L_00229CE0;
    }
    // 0x00229910: nop

    // 0x00229914: jal         0x00275F7C
    // 0x00229918: nop

    func_00275F7C(rdram, ctx);
        goto after_0;
    // 0x00229918: nop

    after_0:
    // 0x0022991C: lw          $a1, 0x1B8($s3)
    ctx->r5 = MEM_W(ctx->r19, 0X1B8);
    // 0x00229920: jal         0x00275D34
    // 0x00229924: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    func_00275D34(rdram, ctx);
        goto after_1;
    // 0x00229924: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    after_1:
    // 0x00229928: j           L_00229CE0
    // 0x0022992C: sw          $zero, 0x1B8($s3)
    MEM_W(0X1B8, ctx->r19) = 0;
        goto L_00229CE0;
    // 0x0022992C: sw          $zero, 0x1B8($s3)
    MEM_W(0X1B8, ctx->r19) = 0;
L_00229930:
    // 0x00229930: lw          $v1, 0x1B8($s3)
    ctx->r3 = MEM_W(ctx->r19, 0X1B8);
    // 0x00229934: beq         $v1, $zero, L_0022995C
    if (ctx->r3 == 0) {
        // 0x00229938: addiu       $a0, $zero, 0x1B2
        ctx->r4 = ADD32(0, 0X1B2);
            goto L_0022995C;
    }
    // 0x00229938: addiu       $a0, $zero, 0x1B2
    ctx->r4 = ADD32(0, 0X1B2);
    // 0x0022993C: lw          $v0, 0xC($v1)
    ctx->r2 = MEM_W(ctx->r3, 0XC);
    // 0x00229940: bne         $v0, $a0, L_00229954
    if (ctx->r2 != ctx->r4) {
        // 0x00229944: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_00229954;
    }
    // 0x00229944: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x00229948: lw          $v1, 0x8($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X8);
    // 0x0022994C: bne         $v1, $v0, L_00229984
    if (ctx->r3 != ctx->r2) {
        // 0x00229950: nop
    
            goto L_00229984;
    }
    // 0x00229950: nop

L_00229954:
    // 0x00229954: jal         0x00232B40
    // 0x00229958: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    func_00232B40(rdram, ctx);
        goto after_2;
    // 0x00229958: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    after_2:
L_0022995C:
    // 0x0022995C: jal         0x00275F7C
    // 0x00229960: nop

    func_00275F7C(rdram, ctx);
        goto after_3;
    // 0x00229960: nop

    after_3:
    // 0x00229964: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x00229968: addiu       $a1, $zero, 0x1B2
    ctx->r5 = ADD32(0, 0X1B2);
    // 0x0022996C: addiu       $a2, $s3, 0x4
    ctx->r6 = ADD32(ctx->r19, 0X4);
    // 0x00229970: addu        $a3, $a2, $zero
    ctx->r7 = ADD32(ctx->r6, 0);
    // 0x00229974: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x00229978: jal         0x00275C6C
    // 0x0022997C: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    func_00275C6C(rdram, ctx);
        goto after_4;
    // 0x0022997C: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    after_4:
    // 0x00229980: sw          $v0, 0x1B8($s3)
    MEM_W(0X1B8, ctx->r19) = ctx->r2;
L_00229984:
    // 0x00229984: lw          $s0, 0x114($s3)
    ctx->r16 = MEM_W(ctx->r19, 0X114);
    // 0x00229988: beq         $s0, $zero, L_00229C00
    if (ctx->r16 == 0) {
        // 0x0022998C: nop
    
            goto L_00229C00;
    }
    // 0x0022998C: nop

    // 0x00229990: lwc1        $f1, 0x11C($s3)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r19, 0X11C);
    // 0x00229994: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00229998: lwc1        $f0, 0x612C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X612C);
    // 0x0022999C: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x002299A0: nop

    // 0x002299A4: bc1f        L_00229C00
    if (!c1cs) {
        // 0x002299A8: addiu       $a0, $sp, 0x48
        ctx->r4 = ADD32(ctx->r29, 0X48);
            goto L_00229C00;
    }
    // 0x002299A8: addiu       $a0, $sp, 0x48
    ctx->r4 = ADD32(ctx->r29, 0X48);
    // 0x002299AC: addiu       $s2, $s3, 0x150
    ctx->r18 = ADD32(ctx->r19, 0X150);
    // 0x002299B0: jal         0x0020E810
    // 0x002299B4: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    func_0020E810(rdram, ctx);
        goto after_5;
    // 0x002299B4: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    after_5:
    // 0x002299B8: lwc1        $f1, 0x18($s3)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r19, 0X18);
    // 0x002299BC: mul.s       $f1, $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f1.fl);
    // 0x002299C0: lwc1        $f0, 0x1C($s3)
    ctx->f0.u32l = MEM_W(ctx->r19, 0X1C);
    // 0x002299C4: mul.s       $f0, $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x002299C8: lwc1        $f12, 0x20($s3)
    ctx->f12.u32l = MEM_W(ctx->r19, 0X20);
    // 0x002299CC: mul.s       $f12, $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x002299D0: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x002299D4: jal         0x00298470
    // 0x002299D8: add.s       $f12, $f1, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = ctx->f1.fl + ctx->f12.fl;
    func_00298470(rdram, ctx);
        goto after_6;
    // 0x002299D8: add.s       $f12, $f1, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = ctx->f1.fl + ctx->f12.fl;
    after_6:
    // 0x002299DC: addiu       $s1, $sp, 0x28
    ctx->r17 = ADD32(ctx->r29, 0X28);
    // 0x002299E0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x002299E4: addiu       $s5, $sp, 0x18
    ctx->r21 = ADD32(ctx->r29, 0X18);
    // 0x002299E8: addu        $a1, $s5, $zero
    ctx->r5 = ADD32(ctx->r21, 0);
    // 0x002299EC: addiu       $s4, $s3, 0x4
    ctx->r20 = ADD32(ctx->r19, 0X4);
    // 0x002299F0: addu        $a2, $s4, $zero
    ctx->r6 = ADD32(ctx->r20, 0);
    // 0x002299F4: lw          $t0, 0x214($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X214);
    // 0x002299F8: lw          $t1, 0x218($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X218);
    // 0x002299FC: lw          $t2, 0x21C($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X21C);
    // 0x00229A00: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x00229A04: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    // 0x00229A08: sw          $t2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r10;
    // 0x00229A0C: jal         0x0020EF2C
    // 0x00229A10: mov.s       $f21, $f0
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 0);
    ctx->f21.fl = ctx->f0.fl;
    func_0020EF2C(rdram, ctx);
        goto after_7;
    // 0x00229A10: mov.s       $f21, $f0
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 0);
    ctx->f21.fl = ctx->f0.fl;
    after_7:
    // 0x00229A14: lwc1        $f1, 0x28($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X28);
    // 0x00229A18: mul.s       $f1, $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f1.fl);
    // 0x00229A1C: lwc1        $f0, 0x2C($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x00229A20: mul.s       $f0, $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x00229A24: lwc1        $f12, 0x30($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X30);
    // 0x00229A28: mul.s       $f12, $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x00229A2C: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x00229A30: jal         0x00298470
    // 0x00229A34: add.s       $f12, $f1, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = ctx->f1.fl + ctx->f12.fl;
    func_00298470(rdram, ctx);
        goto after_8;
    // 0x00229A34: add.s       $f12, $f1, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = ctx->f1.fl + ctx->f12.fl;
    after_8:
    // 0x00229A38: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00229A3C: lwc1        $f1, 0x6130($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X6130);
    // 0x00229A40: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x00229A44: c.lt.s      $f20, $f1
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f20.fl < ctx->f1.fl;
    // 0x00229A48: nop

    // 0x00229A4C: bc1f        L_00229AAC
    if (!c1cs) {
        // 0x00229A50: addiu       $s0, $sp, 0x68
        ctx->r16 = ADD32(ctx->r29, 0X68);
            goto L_00229AAC;
    }
    // 0x00229A50: addiu       $s0, $sp, 0x68
    ctx->r16 = ADD32(ctx->r29, 0X68);
    // 0x00229A54: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00229A58: jal         0x0020E810
    // 0x00229A5C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_0020E810(rdram, ctx);
        goto after_9;
    // 0x00229A5C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_9:
    // 0x00229A60: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00229A64: addiu       $s0, $sp, 0x78
    ctx->r16 = ADD32(ctx->r29, 0X78);
    // 0x00229A68: jal         0x00211114
    // 0x00229A6C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_00211114(rdram, ctx);
        goto after_10;
    // 0x00229A6C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_10:
    // 0x00229A70: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00229A74: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    // 0x00229A78: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00229A7C: lwc1        $f0, 0x6134($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6134);
    // 0x00229A80: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    // 0x00229A84: sw          $zero, 0x38($sp)
    MEM_W(0X38, ctx->r29) = 0;
    // 0x00229A88: sw          $zero, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = 0;
    // 0x00229A8C: jal         0x0020F85C
    // 0x00229A90: swc1        $f0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f0.u32l;
    func_0020F85C(rdram, ctx);
        goto after_11;
    // 0x00229A90: swc1        $f0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f0.u32l;
    after_11:
    // 0x00229A94: addiu       $a0, $s3, 0x18
    ctx->r4 = ADD32(ctx->r19, 0X18);
    // 0x00229A98: mfc1        $a2, $f21
    ctx->r6 = (int32_t)ctx->f_odd[(21 - 1) * 2];
    // 0x00229A9C: jal         0x0020EF60
    // 0x00229AA0: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    func_0020EF60(rdram, ctx);
        goto after_12;
    // 0x00229AA0: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    after_12:
    // 0x00229AA4: j           L_00229CE0
    // 0x00229AA8: nop

        goto L_00229CE0;
    // 0x00229AA8: nop

L_00229AAC:
    // 0x00229AAC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00229AB0: lwc1        $f0, 0x6138($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6138);
    // 0x00229AB4: c.lt.s      $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f0.fl < ctx->f20.fl;
    // 0x00229AB8: nop

    // 0x00229ABC: bc1f        L_00229B04
    if (!c1cs) {
        // 0x00229AC0: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_00229B04;
    }
    // 0x00229AC0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x00229AC4: lwc1        $f0, 0x1C($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x00229AC8: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x00229ACC: addu        $a1, $s5, $zero
    ctx->r5 = ADD32(ctx->r21, 0);
    // 0x00229AD0: addu        $a2, $s4, $zero
    ctx->r6 = ADD32(ctx->r20, 0);
    // 0x00229AD4: jal         0x0020EF2C
    // 0x00229AD8: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    func_0020EF2C(rdram, ctx);
        goto after_13;
    // 0x00229AD8: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    after_13:
    // 0x00229ADC: lwc1        $f1, 0x28($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X28);
    // 0x00229AE0: mul.s       $f1, $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f1.fl);
    // 0x00229AE4: lwc1        $f0, 0x2C($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x00229AE8: mul.s       $f0, $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x00229AEC: lwc1        $f12, 0x30($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X30);
    // 0x00229AF0: mul.s       $f12, $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x00229AF4: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x00229AF8: jal         0x00298470
    // 0x00229AFC: add.s       $f12, $f1, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = ctx->f1.fl + ctx->f12.fl;
    func_00298470(rdram, ctx);
        goto after_14;
    // 0x00229AFC: add.s       $f12, $f1, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = ctx->f1.fl + ctx->f12.fl;
    after_14:
    // 0x00229B00: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
L_00229B04:
    // 0x00229B04: jal         0x0020F040
    // 0x00229B08: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_0020F040(rdram, ctx);
        goto after_15;
    // 0x00229B08: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_15:
    // 0x00229B0C: addiu       $a0, $sp, 0x58
    ctx->r4 = ADD32(ctx->r29, 0X58);
    // 0x00229B10: jal         0x0020E810
    // 0x00229B14: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_0020E810(rdram, ctx);
        goto after_16;
    // 0x00229B14: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_16:
    // 0x00229B18: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00229B1C: lwc1        $f0, 0x613C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X613C);
    // 0x00229B20: c.lt.s      $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f20.fl < ctx->f0.fl;
    // 0x00229B24: nop

    // 0x00229B28: bc1f        L_00229B80
    if (!c1cs) {
        // 0x00229B2C: nop
    
            goto L_00229B80;
    }
    // 0x00229B2C: nop

    // 0x00229B30: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00229B34: lwc1        $f0, 0x6140($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6140);
    // 0x00229B38: sub.s       $f1, $f20, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f20.fl - ctx->f0.fl;
    // 0x00229B3C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x00229B40: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x00229B44: nop

    // 0x00229B48: bc1f        L_00229B58
    if (!c1cs) {
        // 0x00229B4C: nop
    
            goto L_00229B58;
    }
    // 0x00229B4C: nop

    // 0x00229B50: j           L_00229B64
    // 0x00229B54: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
        goto L_00229B64;
    // 0x00229B54: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
L_00229B58:
    // 0x00229B58: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00229B5C: lwc1        $f0, 0x6144($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6144);
    // 0x00229B60: mul.s       $f20, $f1, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
L_00229B64:
    // 0x00229B64: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00229B68: lwc1        $f0, 0x6148($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6148);
    // 0x00229B6C: mul.s       $f0, $f20, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f20.fl, ctx->f0.fl);
    // 0x00229B70: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00229B74: lwc1        $f1, 0x614C($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X614C);
    // 0x00229B78: j           L_00229B88
    // 0x00229B7C: sub.s       $f20, $f1, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = ctx->f1.fl - ctx->f0.fl;
        goto L_00229B88;
    // 0x00229B7C: sub.s       $f20, $f1, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = ctx->f1.fl - ctx->f0.fl;
L_00229B80:
    // 0x00229B80: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00229B84: lwc1        $f20, 0x6150($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X6150);
L_00229B88:
    // 0x00229B88: addiu       $s2, $sp, 0x58
    ctx->r18 = ADD32(ctx->r29, 0X58);
    // 0x00229B8C: jal         0x00211074
    // 0x00229B90: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_00211074(rdram, ctx);
        goto after_17;
    // 0x00229B90: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_17:
    // 0x00229B94: addiu       $s0, $sp, 0x48
    ctx->r16 = ADD32(ctx->r29, 0X48);
    // 0x00229B98: jal         0x00211074
    // 0x00229B9C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00211074(rdram, ctx);
        goto after_18;
    // 0x00229B9C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_18:
    // 0x00229BA0: addiu       $s1, $sp, 0x68
    ctx->r17 = ADD32(ctx->r29, 0X68);
    // 0x00229BA4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x00229BA8: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    // 0x00229BAC: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x00229BB0: jal         0x0020DCC8
    // 0x00229BB4: addu        $a3, $s2, $zero
    ctx->r7 = ADD32(ctx->r18, 0);
    func_0020DCC8(rdram, ctx);
        goto after_19;
    // 0x00229BB4: addu        $a3, $s2, $zero
    ctx->r7 = ADD32(ctx->r18, 0);
    after_19:
    // 0x00229BB8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x00229BBC: addiu       $s0, $sp, 0x78
    ctx->r16 = ADD32(ctx->r29, 0X78);
    // 0x00229BC0: jal         0x00211114
    // 0x00229BC4: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_00211114(rdram, ctx);
        goto after_20;
    // 0x00229BC4: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_20:
    // 0x00229BC8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00229BCC: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    // 0x00229BD0: addiu       $s0, $s3, 0x150
    ctx->r16 = ADD32(ctx->r19, 0X150);
    // 0x00229BD4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00229BD8: lwc1        $f0, 0x6154($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6154);
    // 0x00229BDC: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    // 0x00229BE0: sw          $zero, 0x38($sp)
    MEM_W(0X38, ctx->r29) = 0;
    // 0x00229BE4: sw          $zero, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = 0;
    // 0x00229BE8: jal         0x0020F85C
    // 0x00229BEC: swc1        $f0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f0.u32l;
    func_0020F85C(rdram, ctx);
        goto after_21;
    // 0x00229BEC: swc1        $f0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f0.u32l;
    after_21:
    // 0x00229BF0: addiu       $a0, $s3, 0x18
    ctx->r4 = ADD32(ctx->r19, 0X18);
    // 0x00229BF4: mfc1        $a2, $f21
    ctx->r6 = (int32_t)ctx->f_odd[(21 - 1) * 2];
    // 0x00229BF8: jal         0x0020EF60
    // 0x00229BFC: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_0020EF60(rdram, ctx);
        goto after_22;
    // 0x00229BFC: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_22:
L_00229C00:
    // 0x00229C00: lw          $v0, 0xF8($s3)
    ctx->r2 = MEM_W(ctx->r19, 0XF8);
    // 0x00229C04: lw          $v0, 0x30($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X30);
    // 0x00229C08: lhu         $a0, 0x10($v0)
    ctx->r4 = MEM_HU(ctx->r2, 0X10);
    // 0x00229C0C: jal         0x0026D210
    // 0x00229C10: nop

    func_0026D210(rdram, ctx);
        goto after_23;
    // 0x00229C10: nop

    after_23:
    // 0x00229C14: mtc1        $zero, $f22
    ctx->f22.u32l = 0;
    // 0x00229C18: mov.s       $f21, $f0
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 0);
    ctx->f21.fl = ctx->f0.fl;
    // 0x00229C1C: c.eq.s      $f21, $f22
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f21.fl == ctx->f22.fl;
    // 0x00229C20: nop

    // 0x00229C24: bc1t        L_00229CD4
    if (c1cs) {
        // 0x00229C28: addiu       $a0, $sp, 0xB8
        ctx->r4 = ADD32(ctx->r29, 0XB8);
            goto L_00229CD4;
    }
    // 0x00229C28: addiu       $a0, $sp, 0xB8
    ctx->r4 = ADD32(ctx->r29, 0XB8);
    // 0x00229C2C: mfc1        $a2, $f21
    ctx->r6 = (int32_t)ctx->f_odd[(21 - 1) * 2];
    // 0x00229C30: lw          $t0, 0x150($s3)
    ctx->r8 = MEM_W(ctx->r19, 0X150);
    // 0x00229C34: lw          $t1, 0x154($s3)
    ctx->r9 = MEM_W(ctx->r19, 0X154);
    // 0x00229C38: lw          $t2, 0x158($s3)
    ctx->r10 = MEM_W(ctx->r19, 0X158);
    // 0x00229C3C: sw          $t0, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->r8;
    // 0x00229C40: sw          $t1, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->r9;
    // 0x00229C44: sw          $t2, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = ctx->r10;
    // 0x00229C48: jal         0x0020EF60
    // 0x00229C4C: addiu       $a1, $sp, 0xC8
    ctx->r5 = ADD32(ctx->r29, 0XC8);
    func_0020EF60(rdram, ctx);
        goto after_24;
    // 0x00229C4C: addiu       $a1, $sp, 0xC8
    ctx->r5 = ADD32(ctx->r29, 0XC8);
    after_24:
    // 0x00229C50: addiu       $s0, $s3, 0x18
    ctx->r16 = ADD32(ctx->r19, 0X18);
    // 0x00229C54: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00229C58: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x00229C5C: jal         0x0020EEF8
    // 0x00229C60: addiu       $a2, $sp, 0xB8
    ctx->r6 = ADD32(ctx->r29, 0XB8);
    func_0020EEF8(rdram, ctx);
        goto after_25;
    // 0x00229C60: addiu       $a2, $sp, 0xB8
    ctx->r6 = ADD32(ctx->r29, 0XB8);
    after_25:
    // 0x00229C64: lwc1        $f1, 0x18($s3)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r19, 0X18);
    // 0x00229C68: mul.s       $f1, $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f1.fl);
    // 0x00229C6C: lwc1        $f0, 0x1C($s3)
    ctx->f0.u32l = MEM_W(ctx->r19, 0X1C);
    // 0x00229C70: mul.s       $f0, $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x00229C74: lwc1        $f12, 0x20($s3)
    ctx->f12.u32l = MEM_W(ctx->r19, 0X20);
    // 0x00229C78: mul.s       $f12, $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x00229C7C: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x00229C80: jal         0x00298470
    // 0x00229C84: add.s       $f12, $f1, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = ctx->f1.fl + ctx->f12.fl;
    func_00298470(rdram, ctx);
        goto after_26;
    // 0x00229C84: add.s       $f12, $f1, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = ctx->f1.fl + ctx->f12.fl;
    after_26:
    // 0x00229C88: lw          $v0, 0xF8($s3)
    ctx->r2 = MEM_W(ctx->r19, 0XF8);
    // 0x00229C8C: lw          $v0, 0x30($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X30);
    // 0x00229C90: lhu         $a0, 0x12($v0)
    ctx->r4 = MEM_HU(ctx->r2, 0X12);
    // 0x00229C94: jal         0x0026D210
    // 0x00229C98: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    func_0026D210(rdram, ctx);
        goto after_27;
    // 0x00229C98: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    after_27:
    // 0x00229C9C: c.lt.s      $f22, $f21
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 21);
    c1cs = ctx->f22.fl < ctx->f21.fl;
    // 0x00229CA0: nop

    // 0x00229CA4: bc1f        L_00229CB8
    if (!c1cs) {
        // 0x00229CA8: nop
    
            goto L_00229CB8;
    }
    // 0x00229CA8: nop

    // 0x00229CAC: c.lt.s      $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f0.fl < ctx->f20.fl;
    // 0x00229CB0: j           L_00229CBC
    // 0x00229CB4: nop

        goto L_00229CBC;
    // 0x00229CB4: nop

L_00229CB8:
    // 0x00229CB8: c.lt.s      $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f20.fl < ctx->f0.fl;
L_00229CBC:
    // 0x00229CBC: nop

    // 0x00229CC0: bc1f        L_00229CD4
    if (!c1cs) {
        // 0x00229CC4: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_00229CD4;
    }
    // 0x00229CC4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00229CC8: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x00229CCC: jal         0x0020EF60
    // 0x00229CD0: addiu       $a1, $sp, 0xC8
    ctx->r5 = ADD32(ctx->r29, 0XC8);
    func_0020EF60(rdram, ctx);
        goto after_28;
    // 0x00229CD0: addiu       $a1, $sp, 0xC8
    ctx->r5 = ADD32(ctx->r29, 0XC8);
    after_28:
L_00229CD4:
    // 0x00229CD4: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    // 0x00229CD8: jal         0x00229618
    // 0x00229CDC: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    func_00229618(rdram, ctx);
        goto after_29;
    // 0x00229CDC: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    after_29:
L_00229CE0:
    // 0x00229CE0: lw          $ra, 0xF0($sp)
    ctx->r31 = MEM_W(ctx->r29, 0XF0);
    // 0x00229CE4: lw          $s5, 0xEC($sp)
    ctx->r21 = MEM_W(ctx->r29, 0XEC);
    // 0x00229CE8: lw          $s4, 0xE8($sp)
    ctx->r20 = MEM_W(ctx->r29, 0XE8);
    // 0x00229CEC: lw          $s3, 0xE4($sp)
    ctx->r19 = MEM_W(ctx->r29, 0XE4);
    // 0x00229CF0: lw          $s2, 0xE0($sp)
    ctx->r18 = MEM_W(ctx->r29, 0XE0);
    // 0x00229CF4: lw          $s1, 0xDC($sp)
    ctx->r17 = MEM_W(ctx->r29, 0XDC);
    // 0x00229CF8: lw          $s0, 0xD8($sp)
    ctx->r16 = MEM_W(ctx->r29, 0XD8);
    // 0x00229CFC: ldc1        $f22, 0x108($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X108);
    // 0x00229D00: ldc1        $f21, 0x100($sp)
    CHECK_FR(ctx, 21);
    ctx->f21.u64 = LD(ctx->r29, 0X100);
    // 0x00229D04: ldc1        $f20, 0xF8($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0XF8);
    // 0x00229D08: jr          $ra
    // 0x00229D0C: addiu       $sp, $sp, 0x110
    ctx->r29 = ADD32(ctx->r29, 0X110);
    return;
    // 0x00229D0C: addiu       $sp, $sp, 0x110
    ctx->r29 = ADD32(ctx->r29, 0X110);
;}
RECOMP_FUNC void func_00298664(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00298664: swc1        $f0, 0x134($s0)
    MEM_W(0X134, ctx->r16) = ctx->f0.u32l;
    // 0x00298668: swc1        $f0, 0x138($s0)
    MEM_W(0X138, ctx->r16) = ctx->f0.u32l;
    // 0x0029866C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
;}
RECOMP_FUNC void func_00281B58(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00281B58: sw          $zero, 0x14($a0)
    MEM_W(0X14, ctx->r4) = 0;
    // 0x00281B5C: jr          $ra
    // 0x00281B60: sw          $zero, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = 0;
    return;
    // 0x00281B60: sw          $zero, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = 0;
;}
RECOMP_FUNC void func_002A5130(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002A5130: addu        $a2, $a0, $zero
    ctx->r6 = ADD32(ctx->r4, 0);
    // 0x002A5134: addu        $a3, $a1, $zero
    ctx->r7 = ADD32(ctx->r5, 0);
    // 0x002A5138: bgez        $a2, L_002A5154
    if (SIGNED(ctx->r6) >= 0) {
        // 0x002A513C: addu        $a1, $zero, $zero
        ctx->r5 = ADD32(0, 0);
            goto L_002A5154;
    }
    // 0x002A513C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x002A5140: negu        $a3, $a3
    ctx->r7 = SUB32(0, ctx->r7);
    // 0x002A5144: negu        $a2, $a2
    ctx->r6 = SUB32(0, ctx->r6);
    // 0x002A5148: sltu        $v0, $zero, $a3
    ctx->r2 = 0 < ctx->r7 ? 1 : 0;
    // 0x002A514C: subu        $a2, $a2, $v0
    ctx->r6 = SUB32(ctx->r6, ctx->r2);
    // 0x002A5150: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
L_002A5154:
    // 0x002A5154: lui         $v0, 0x1F
    ctx->r2 = S32(0X1F << 16);
    // 0x002A5158: ori         $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 | 0XFFFF;
    // 0x002A515C: sltu        $v0, $v0, $a2
    ctx->r2 = ctx->r2 < ctx->r6 ? 1 : 0;
    // 0x002A5160: beq         $v0, $zero, L_002A5180
    if (ctx->r2 == 0) {
        // 0x002A5164: andi        $v0, $a3, 0x7FF
        ctx->r2 = ctx->r7 & 0X7FF;
            goto L_002A5180;
    }
    // 0x002A5164: andi        $v0, $a3, 0x7FF
    ctx->r2 = ctx->r7 & 0X7FF;
    // 0x002A5168: beq         $v0, $zero, L_002A5184
    if (ctx->r2 == 0) {
        // 0x002A516C: sra         $v1, $a2, 0
        ctx->r3 = S32(SIGNED(ctx->r6) >> 0);
            goto L_002A5184;
    }
    // 0x002A516C: sra         $v1, $a2, 0
    ctx->r3 = S32(SIGNED(ctx->r6) >> 0);
    // 0x002A5170: addiu       $v0, $zero, 0x0
    ctx->r2 = ADD32(0, 0X0);
    // 0x002A5174: addiu       $v1, $zero, 0x800
    ctx->r3 = ADD32(0, 0X800);
    // 0x002A5178: or          $a2, $a2, $v0
    ctx->r6 = ctx->r6 | ctx->r2;
    // 0x002A517C: or          $a3, $a3, $v1
    ctx->r7 = ctx->r7 | ctx->r3;
L_002A5180:
    // 0x002A5180: sra         $v1, $a2, 0
    ctx->r3 = S32(SIGNED(ctx->r6) >> 0);
L_002A5184:
    // 0x002A5184: mtc1        $v1, $f2
    ctx->f2.u32l = ctx->r3;
    // 0x002A5188: cvt.d.w     $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    ctx->f2.d = CVT_D_W(ctx->f2.u32l);
    // 0x002A518C: bgez        $v1, L_002A51A0
    if (SIGNED(ctx->r3) >= 0) {
        // 0x002A5190: sra         $v0, $a2, 31
        ctx->r2 = S32(SIGNED(ctx->r6) >> 31);
            goto L_002A51A0;
    }
    // 0x002A5190: sra         $v0, $a2, 31
    ctx->r2 = S32(SIGNED(ctx->r6) >> 31);
    // 0x002A5194: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x002A5198: ldc1        $f0, -0x4F70($at)
    CHECK_FR(ctx, 0);
    ctx->f0.u64 = LD(ctx->r1, -0X4F70);
    // 0x002A519C: add.d       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.d); NAN_CHECK(ctx->f0.d); 
    ctx->f2.d = ctx->f2.d + ctx->f0.d;
L_002A51A0:
    // 0x002A51A0: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x002A51A4: ldc1        $f0, -0x4F68($at)
    CHECK_FR(ctx, 0);
    ctx->f0.u64 = LD(ctx->r1, -0X4F68);
    // 0x002A51A8: mul.d       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.d); NAN_CHECK(ctx->f0.d); 
    ctx->f2.d = MUL_D(ctx->f2.d, ctx->f0.d);
    // 0x002A51AC: mtc1        $a3, $f4
    ctx->f4.u32l = ctx->r7;
    // 0x002A51B0: cvt.d.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.d = CVT_D_W(ctx->f4.u32l);
    // 0x002A51B4: mul.d       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.d); NAN_CHECK(ctx->f0.d); 
    ctx->f2.d = MUL_D(ctx->f2.d, ctx->f0.d);
    // 0x002A51B8: bgez        $a3, L_002A51CC
    if (SIGNED(ctx->r7) >= 0) {
        // 0x002A51BC: nop
    
            goto L_002A51CC;
    }
    // 0x002A51BC: nop

    // 0x002A51C0: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x002A51C4: ldc1        $f0, -0x4F60($at)
    CHECK_FR(ctx, 0);
    ctx->f0.u64 = LD(ctx->r1, -0X4F60);
    // 0x002A51C8: add.d       $f4, $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f0.d); 
    ctx->f4.d = ctx->f4.d + ctx->f0.d;
L_002A51CC:
    // 0x002A51CC: beq         $a1, $zero, L_002A51D8
    if (ctx->r5 == 0) {
        // 0x002A51D0: add.d       $f0, $f2, $f4
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f2.d); NAN_CHECK(ctx->f4.d); 
    ctx->f0.d = ctx->f2.d + ctx->f4.d;
            goto L_002A51D8;
    }
    // 0x002A51D0: add.d       $f0, $f2, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f2.d); NAN_CHECK(ctx->f4.d); 
    ctx->f0.d = ctx->f2.d + ctx->f4.d;
    // 0x002A51D4: neg.d       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.d); 
    ctx->f0.d = -ctx->f0.d;
L_002A51D8:
    // 0x002A51D8: jr          $ra
    // 0x002A51DC: cvt.s.d     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.d); 
    ctx->f0.fl = CVT_S_D(ctx->f0.d);
    return;
    // 0x002A51DC: cvt.s.d     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.d); 
    ctx->f0.fl = CVT_S_D(ctx->f0.d);
;}
RECOMP_FUNC void func_002536E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002536E0: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x002536E4: lw          $v0, -0x5528($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X5528);
    // 0x002536E8: andi        $v0, $v0, 0x10
    ctx->r2 = ctx->r2 & 0X10;
    // 0x002536EC: bne         $v0, $zero, L_00253718
    if (ctx->r2 != 0) {
        // 0x002536F0: slti        $v0, $a1, 0x1121
        ctx->r2 = SIGNED(ctx->r5) < 0X1121 ? 1 : 0;
            goto L_00253718;
    }
    // 0x002536F0: slti        $v0, $a1, 0x1121
    ctx->r2 = SIGNED(ctx->r5) < 0X1121 ? 1 : 0;
    // 0x002536F4: beq         $v0, $zero, L_00253704
    if (ctx->r2 == 0) {
        // 0x002536F8: slti        $v0, $a1, 0x111C
        ctx->r2 = SIGNED(ctx->r5) < 0X111C ? 1 : 0;
            goto L_00253704;
    }
    // 0x002536F8: slti        $v0, $a1, 0x111C
    ctx->r2 = SIGNED(ctx->r5) < 0X111C ? 1 : 0;
    // 0x002536FC: beq         $v0, $zero, L_00253718
    if (ctx->r2 == 0) {
        // 0x00253700: nop
    
            goto L_00253718;
    }
    // 0x00253700: nop

L_00253704:
    // 0x00253704: addiu       $v1, $a1, -0xFA0
    ctx->r3 = ADD32(ctx->r5, -0XFA0);
    // 0x00253708: addu        $v1, $a0, $v1
    ctx->r3 = ADD32(ctx->r4, ctx->r3);
    // 0x0025370C: lbu         $v0, 0x52C($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X52C);
    // 0x00253710: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x00253714: sb          $v0, 0x52C($v1)
    MEM_B(0X52C, ctx->r3) = ctx->r2;
L_00253718:
    // 0x00253718: jr          $ra
    // 0x0025371C: nop

    return;
    // 0x0025371C: nop

;}
RECOMP_FUNC void func_0045F7F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_00426884:
    // 0x0045F7F0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x0045F7F4: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x0045F7F8: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x0045F7FC: sll         $v0, $s1, 2
    ctx->r2 = S32(ctx->r17 << 2);
    // 0x0045F800: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0045F804: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x0045F808: lw          $v1, 0xC60($at)
    ctx->r3 = MEM_W(ctx->r1, 0XC60);
    // 0x0045F80C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x0045F810: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x0045F814: beq         $v1, $v0, L_0045F824
    if (ctx->r3 == ctx->r2) {
        // 0x0045F818: sw          $s0, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r16;
            goto L_0045F824;
    }
    // 0x0045F818: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0045F81C: j           L_00426884
    // 0x0045F820: addiu       $v0, $zero, -0x2
    ctx->r2 = ADD32(0, -0X2);
    entry_00426884(rdram, ctx);
    return;
    // 0x0045F820: addiu       $v0, $zero, -0x2
    ctx->r2 = ADD32(0, -0X2);
L_0045F824:
    // 0x0045F824: jal         0x00285878
    // 0x0045F828: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_00285878(rdram, ctx);
        goto after_0;
    // 0x0045F828: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_0:
    // 0x0045F82C: jal         0x002847E0
    // 0x0045F830: nop

    func_002847E0(rdram, ctx);
        goto after_1;
    // 0x0045F830: nop

    after_1:
    // 0x0045F834: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x0045F838: lui         $at, 0x800F
    ctx->r1 = S32(0X800F << 16);
    // 0x0045F83C: sb          $v0, 0x6750($at)
    MEM_B(0X6750, ctx->r1) = ctx->r2;
    // 0x0045F840: sll         $a0, $s1, 1
    ctx->r4 = S32(ctx->r17 << 1);
    // 0x0045F844: addu        $a0, $a0, $s1
    ctx->r4 = ADD32(ctx->r4, ctx->r17);
    // 0x0045F848: sll         $a0, $a0, 2
    ctx->r4 = S32(ctx->r4 << 2);
    // 0x0045F84C: addu        $a0, $a0, $s1
    ctx->r4 = ADD32(ctx->r4, ctx->r17);
    // 0x0045F850: sll         $a0, $a0, 3
    ctx->r4 = S32(ctx->r4 << 3);
    // 0x0045F854: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x0045F858: addiu       $v0, $v0, 0xC80
    ctx->r2 = ADD32(ctx->r2, 0XC80);
    // 0x0045F85C: jal         0x00429050
    // 0x0045F860: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    entry_00429050(rdram, ctx);
        goto after_2;
    // 0x0045F860: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    after_2:
    // 0x0045F864: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x0045F868: bnel        $s0, $zero, L_0045F870
    if (ctx->r16 != 0) {
        // 0x0045F86C: addiu       $s0, $zero, -0x1
        ctx->r16 = ADD32(0, -0X1);
            goto L_0045F870;
    }
    goto skip_0;
    // 0x0045F86C: addiu       $s0, $zero, -0x1
    ctx->r16 = ADD32(0, -0X1);
    skip_0:
L_0045F870:
    // 0x0045F870: jal         0x00425808
    // 0x0045F874: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    entry_00425808(rdram, ctx);
        goto after_3;
    // 0x0045F874: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_3:
    // 0x0045F878: jal         0x002858A4
    // 0x0045F87C: nop

    func_002858A4(rdram, ctx);
        goto after_4;
    // 0x0045F87C: nop

    after_4:
    // 0x0045F880: addu        $v0, $s0, $zero
    ctx->r2 = ADD32(ctx->r16, 0);
    // 0x0045F884: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x0045F888: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x0045F88C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0045F890: jr          $ra
    // 0x0045F894: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x0045F894: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_0041305C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041305C: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x00413060: lw          $v0, 0x1BB0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1BB0);
    // 0x00413064: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00413068: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0041306C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x00413070: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x00413074: lw          $a0, 0x4($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X4);
    // 0x00413078: jal         0x002017D4
    // 0x0041307C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_002017D4(rdram, ctx);
        goto after_0;
    // 0x0041307C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_0:
    // 0x00413080: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x00413084: jal         0x002017D4
    // 0x00413088: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_002017D4(rdram, ctx);
        goto after_1;
    // 0x00413088: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_1:
    // 0x0041308C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x00413090: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00413094: jr          $ra
    // 0x00413098: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00413098: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00264170(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00264170: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00264174: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x00264178: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x0026417C: addiu       $a0, $a0, 0x7078
    ctx->r4 = ADD32(ctx->r4, 0X7078);
    // 0x00264180: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x00264184: jal         0x00220408
    // 0x00264188: nop

    func_00220408(rdram, ctx);
        goto after_0;
    // 0x00264188: nop

    after_0:
    // 0x0026418C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x00264190: jr          $ra
    // 0x00264194: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00264194: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00457FE8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_0041F044:
    // 0x00457FE8: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
L_0041F208:
    // 0x00457FEC: lw          $v0, 0x990($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X990);
L_0041F224:
    // 0x00457FF0: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x00457FF4: sw          $s4, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r20;
    // 0x00457FF8: addu        $s4, $a1, $zero
    ctx->r20 = ADD32(ctx->r5, 0);
    // 0x00457FFC: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x00458000: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x00458004: sw          $s5, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r21;
    // 0x00458008: addiu       $s5, $zero, 0x1
    ctx->r21 = ADD32(0, 0X1);
    // 0x0045800C: sw          $s6, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r22;
    // 0x00458010: addu        $s6, $s0, $zero
    ctx->r22 = ADD32(ctx->r16, 0);
    // 0x00458014: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x00458018: sw          $s3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r19;
    // 0x0045801C: sw          $s2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r18;
    // 0x00458020: beq         $v0, $zero, L_00458038
    if (ctx->r2 == 0) {
        // 0x00458024: sw          $s1, 0x34($sp)
        MEM_W(0X34, ctx->r29) = ctx->r17;
            goto L_00458038;
    }
    // 0x00458024: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x00458028: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x0045802C: lw          $v0, 0x2028($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2028);
    // 0x00458030: j           L_0041F044
    // 0x00458034: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    entry_0041F044(rdram, ctx);
    return;
    // 0x00458034: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
L_00458038:
    // 0x00458038: lw          $v0, 0x20($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X20);
    // 0x0045803C: lw          $a2, 0x1C($s4)
    ctx->r6 = MEM_W(ctx->r20, 0X1C);
    // 0x00458040: lb          $v0, 0x4($v0)
    ctx->r2 = MEM_B(ctx->r2, 0X4);
    // 0x00458044: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x00458048: addu        $s2, $a2, $zero
    ctx->r18 = ADD32(ctx->r6, 0);
    // 0x0045804C: lui         $v0, 0x800F
    ctx->r2 = S32(0X800F << 16);
    // 0x00458050: lw          $v0, 0x70A8($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X70A8);
    // 0x00458054: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x00458058: lw          $v1, 0x984($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X984);
    // 0x0045805C: beq         $v1, $zero, L_00458140
    if (ctx->r3 == 0) {
        // 0x00458060: addiu       $s3, $v0, 0x688
        ctx->r19 = ADD32(ctx->r2, 0X688);
            goto L_00458140;
    }
    // 0x00458060: addiu       $s3, $v0, 0x688
    ctx->r19 = ADD32(ctx->r2, 0X688);
    // 0x00458064: jal         0x00426D8C
    // 0x00458068: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    func_00426D8C(rdram, ctx);
        goto after_0;
    // 0x00458068: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    after_0:
    // 0x0045806C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x00458070: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    // 0x00458074: jal         0x004266C0
    // 0x00458078: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    entry_004266C0(rdram, ctx);
        goto after_1;
    // 0x00458078: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    after_1:
    // 0x0045807C: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x00458080: bne         $s0, $zero, L_00458140
    if (ctx->r16 != 0) {
        // 0x00458084: nop
    
            goto L_00458140;
    }
    // 0x00458084: nop

    // 0x00458088: lw          $v0, 0x24($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X24);
    // 0x0045808C: slt         $v0, $v0, $s1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r17) ? 1 : 0;
    // 0x00458090: bne         $v0, $zero, L_0045810C
    if (ctx->r2 != 0) {
        // 0x00458094: nop
    
            goto L_0045810C;
    }
    // 0x00458094: nop

    // 0x00458098: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x0045809C: jal         0x0042662C
    // 0x004580A0: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    entry_0042662C(rdram, ctx);
        goto after_2;
    // 0x004580A0: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    after_2:
    // 0x004580A4: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x004580A8: bne         $s0, $zero, L_0045810C
    if (ctx->r16 != 0) {
        // 0x004580AC: nop
    
            goto L_0045810C;
    }
    // 0x004580AC: nop

    // 0x004580B0: lw          $v0, 0x28($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X28);
    // 0x004580B4: beq         $v0, $zero, L_0045810C
    if (ctx->r2 == 0) {
        // 0x004580B8: nop
    
            goto L_0045810C;
    }
    // 0x004580B8: nop

    // 0x004580BC: addu        $s5, $zero, $zero
    ctx->r21 = ADD32(0, 0);
    // 0x004580C0: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x004580C4: jal         0x004269B4
    // 0x004580C8: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    entry_004269B4(rdram, ctx);
        goto after_3;
    // 0x004580C8: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    after_3:
    // 0x004580CC: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x004580D0: bne         $s0, $zero, L_0045810C
    if (ctx->r16 != 0) {
        // 0x004580D4: addu        $a1, $s3, $zero
        ctx->r5 = ADD32(ctx->r19, 0);
            goto L_0045810C;
    }
    // 0x004580D4: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    // 0x004580D8: addiu       $s6, $zero, 0x1
    ctx->r22 = ADD32(0, 0X1);
    // 0x004580DC: lui         $a3, 0x800B
    ctx->r7 = S32(0X800B << 16);
    // 0x004580E0: addiu       $a3, $a3, 0x45CC
    ctx->r7 = ADD32(ctx->r7, 0X45CC);
    // 0x004580E4: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x004580E8: lui         $a2, 0x800C
    ctx->r6 = S32(0X800C << 16);
    // 0x004580EC: lw          $a2, 0x2018($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X2018);
    // 0x004580F0: addiu       $v0, $sp, 0x18
    ctx->r2 = ADD32(ctx->r29, 0X18);
    // 0x004580F4: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x004580F8: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x004580FC: addiu       $v0, $v0, 0x45D8
    ctx->r2 = ADD32(ctx->r2, 0X45D8);
    // 0x00458100: jal         0x00426084
    // 0x00458104: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    func_00426084(rdram, ctx);
        goto after_4;
    // 0x00458104: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    after_4:
    // 0x00458108: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
L_0045810C:
    // 0x0045810C: beq         $s5, $zero, L_00458140
    if (ctx->r21 == 0) {
        // 0x00458110: nop
    
            goto L_00458140;
    }
    // 0x00458110: nop

    // 0x00458114: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x00458118: addiu       $a0, $a0, -0x61D4
    ctx->r4 = ADD32(ctx->r4, -0X61D4);
    // 0x0045811C: lw          $v0, 0x14($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X14);
    // 0x00458120: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x00458124: addiu       $a1, $a1, -0x3F1C
    ctx->r5 = ADD32(ctx->r5, -0X3F1C);
    // 0x00458128: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x0045812C: lw          $a3, 0xA50($s2)
    ctx->r7 = MEM_W(ctx->r18, 0XA50);
    // 0x00458130: jal         0x00416644
    // 0x00458134: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    func_00416644(rdram, ctx);
        goto after_5;
    // 0x00458134: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    after_5:
    // 0x00458138: j           L_0041F224
    // 0x0045813C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    entry_0041F224(rdram, ctx);
    return;
    // 0x0045813C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_00458140:
    // 0x00458140: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x00458144: lw          $v0, 0x2010($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2010);
    // 0x00458148: bne         $v0, $zero, L_00458160
    if (ctx->r2 != 0) {
        // 0x0045814C: nop
    
            goto L_00458160;
    }
    // 0x0045814C: nop

    // 0x00458150: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x00458154: lw          $v0, 0x2014($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2014);
    // 0x00458158: beq         $v0, $zero, L_00458168
    if (ctx->r2 == 0) {
        // 0x0045815C: nop
    
            goto L_00458168;
    }
    // 0x0045815C: nop

L_00458160:
    // 0x00458160: jal         0x002053A8
    // 0x00458164: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_002053A8(rdram, ctx);
        goto after_6;
    // 0x00458164: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_6:
L_00458168:
    // 0x00458168: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x0045816C: lw          $a1, 0x2010($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X2010);
    // 0x00458170: beq         $a1, $zero, L_00458180
    if (ctx->r5 == 0) {
        // 0x00458174: nop
    
            goto L_00458180;
    }
    // 0x00458174: nop

    // 0x00458178: jal         0x002052D8
    // 0x0045817C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_002052D8(rdram, ctx);
        goto after_7;
    // 0x0045817C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_7:
L_00458180:
    // 0x00458180: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x00458184: lw          $a1, 0x2014($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X2014);
    // 0x00458188: beq         $a1, $zero, L_00458198
    if (ctx->r5 == 0) {
        // 0x0045818C: nop
    
            goto L_00458198;
    }
    // 0x0045818C: nop

    // 0x00458190: jal         0x002052D8
    // 0x00458194: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_002052D8(rdram, ctx);
        goto after_8;
    // 0x00458194: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_8:
L_00458198:
    // 0x00458198: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0045819C: sw          $zero, 0x2010($at)
    MEM_W(0X2010, ctx->r1) = 0;
    // 0x004581A0: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x004581A4: sw          $zero, 0x2014($at)
    MEM_W(0X2014, ctx->r1) = 0;
    // 0x004581A8: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x004581AC: sw          $zero, 0x2018($at)
    MEM_W(0X2018, ctx->r1) = 0;
    // 0x004581B0: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x004581B4: sw          $zero, 0x201C($at)
    MEM_W(0X201C, ctx->r1) = 0;
    // 0x004581B8: beq         $s6, $zero, L_00458224
    if (ctx->r22 == 0) {
        // 0x004581BC: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_00458224;
    }
    // 0x004581BC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x004581C0: bne         $s0, $zero, L_004581F8
    if (ctx->r16 != 0) {
        // 0x004581C4: nop
    
            goto L_004581F8;
    }
    // 0x004581C4: nop

    // 0x004581C8: jal         0x00412B14
    // 0x004581CC: nop

    func_00412B14(rdram, ctx);
        goto after_9;
    // 0x004581CC: nop

    after_9:
    // 0x004581D0: jal         0x00412438
    // 0x004581D4: addiu       $a0, $zero, 0x191
    ctx->r4 = ADD32(0, 0X191);
    func_00412438(rdram, ctx);
        goto after_10;
    // 0x004581D4: addiu       $a0, $zero, 0x191
    ctx->r4 = ADD32(0, 0X191);
    after_10:
    // 0x004581D8: bne         $s0, $zero, L_004581F8
    if (ctx->r16 != 0) {
        // 0x004581DC: nop
    
            goto L_004581F8;
    }
    // 0x004581DC: nop

    // 0x004581E0: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x004581E4: addiu       $a0, $a0, -0x61D4
    ctx->r4 = ADD32(ctx->r4, -0X61D4);
    // 0x004581E8: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x004581EC: addiu       $a1, $a1, -0x4378
    ctx->r5 = ADD32(ctx->r5, -0X4378);
    // 0x004581F0: j           L_0041F208
    // 0x004581F4: nop

    entry_0041F208(rdram, ctx);
    return;
    // 0x004581F4: nop

L_004581F8:
    // 0x004581F8: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x004581FC: addiu       $a0, $a0, -0x61D4
    ctx->r4 = ADD32(ctx->r4, -0X61D4);
    // 0x00458200: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x00458204: addiu       $a1, $a1, -0x42E8
    ctx->r5 = ADD32(ctx->r5, -0X42E8);
    // 0x00458208: lui         $v0, 0x44
    ctx->r2 = S32(0X44 << 16);
    // 0x0045820C: addiu       $v0, $v0, -0x41EC
    ctx->r2 = ADD32(ctx->r2, -0X41EC);
    // 0x00458210: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x00458214: lw          $a3, 0xA50($s2)
    ctx->r7 = MEM_W(ctx->r18, 0XA50);
    // 0x00458218: jal         0x00416644
    // 0x0045821C: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    func_00416644(rdram, ctx);
        goto after_11;
    // 0x0045821C: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    after_11:
    // 0x00458220: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_00458224:
    // 0x00458224: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x00458228: lw          $s6, 0x48($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X48);
    // 0x0045822C: lw          $s5, 0x44($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X44);
    // 0x00458230: lw          $s4, 0x40($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X40);
    // 0x00458234: lw          $s3, 0x3C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X3C);
    // 0x00458238: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x0045823C: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x00458240: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x00458244: jr          $ra
    // 0x00458248: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x00458248: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_00283550(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00283550: lhu         $v0, 0x10($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X10);
    // 0x00283554: mtc1        $a2, $f4
    ctx->f4.u32l = ctx->r6;
    // 0x00283558: lw          $a2, 0x14($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X14);
    // 0x0028355C: and         $v0, $v0, $a1
    ctx->r2 = ctx->r2 & ctx->r5;
    // 0x00283560: lw          $a1, 0xC($a0)
    ctx->r5 = MEM_W(ctx->r4, 0XC);
    // 0x00283564: beq         $v0, $zero, L_002835A4
    if (ctx->r2 == 0) {
        // 0x00283568: nop
    
            goto L_002835A4;
    }
    // 0x00283568: nop

    // 0x0028356C: lwc1        $f0, 0x20($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X20);
    // 0x00283570: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00283574: lwc1        $f1, 0x6D28($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X6D28);
    // 0x00283578: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0028357C: lwc1        $f1, 0x208($a0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r4, 0X208);
    // 0x00283580: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x00283584: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00283588: lwc1        $f0, -0x6350($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X6350);
    // 0x0028358C: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x00283590: nop

    // 0x00283594: bc1tl       L_0028359C
    if (c1cs) {
        // 0x00283598: mov.s       $f1, $f0
        CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    ctx->f1.fl = ctx->f0.fl;
            goto L_0028359C;
    }
    goto skip_0;
    // 0x00283598: mov.s       $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    ctx->f1.fl = ctx->f0.fl;
    skip_0:
L_0028359C:
    // 0x0028359C: j           L_002835E4
    // 0x002835A0: swc1        $f1, 0x208($a0)
    MEM_W(0X208, ctx->r4) = ctx->f_odd[(1 - 1) * 2];
        goto L_002835E4;
    // 0x002835A0: swc1        $f1, 0x208($a0)
    MEM_W(0X208, ctx->r4) = ctx->f_odd[(1 - 1) * 2];
L_002835A4:
    // 0x002835A4: lwc1        $f2, 0x208($a0)
    ctx->f2.u32l = MEM_W(ctx->r4, 0X208);
    // 0x002835A8: mtc1        $zero, $f3
    ctx->f_odd[(3 - 1) * 2] = 0;
    // 0x002835AC: c.eq.s      $f2, $f3
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 3);
    c1cs = ctx->f2.fl == ctx->f3.fl;
    // 0x002835B0: nop

    // 0x002835B4: bc1t        L_002836DC
    if (c1cs) {
            // 0x002835B8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    func_002836DC(rdram, ctx);
    return;
    }
    // 0x002835B8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x002835BC: lwc1        $f0, 0x20($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X20);
    // 0x002835C0: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x002835C4: lwc1        $f1, 0x6D28($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X6D28);
    // 0x002835C8: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x002835CC: sub.s       $f0, $f2, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f0.fl;
    // 0x002835D0: c.lt.s      $f0, $f3
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    c1cs = ctx->f0.fl < ctx->f3.fl;
    // 0x002835D4: nop

    // 0x002835D8: bc1tl       L_002835E0
    if (c1cs) {
        // 0x002835DC: mov.s       $f0, $f3
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    ctx->f0.fl = ctx->f3.fl;
            goto L_002835E0;
    }
    goto skip_1;
    // 0x002835DC: mov.s       $f0, $f3
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    ctx->f0.fl = ctx->f3.fl;
    skip_1:
L_002835E0:
    // 0x002835E0: swc1        $f0, 0x208($a0)
    MEM_W(0X208, ctx->r4) = ctx->f0.u32l;
L_002835E4:
    // 0x002835E4: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x002835E8: lwc1        $f2, 0x6D28($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X6D28);
    // 0x002835EC: lwc1        $f0, 0x10($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X10);
    // 0x002835F0: mul.s       $f0, $f2, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x002835F4: lwc1        $f1, 0x214($a0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r4, 0X214);
    // 0x002835F8: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x002835FC: lwc1        $f1, 0x20C($a0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r4, 0X20C);
    // 0x00283600: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x00283604: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00283608: lwc1        $f0, 0x6D34($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6D34);
    // 0x0028360C: mul.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x00283610: swc1        $f1, 0x20C($a0)
    MEM_W(0X20C, ctx->r4) = ctx->f_odd[(1 - 1) * 2];
    // 0x00283614: lwc1        $f0, 0x8($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X8);
    // 0x00283618: mul.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x0028361C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00283620: lwc1        $f0, -0x634C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X634C);
    // 0x00283624: mul.s       $f0, $f2, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x00283628: lwc1        $f1, 0x1C($a0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r4, 0X1C);
    // 0x0028362C: add.s       $f0, $f1, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x00283630: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00283634: lwc1        $f3, -0x6348($at)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r1, -0X6348);
    // 0x00283638: c.lt.s      $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f3.fl < ctx->f0.fl;
    // 0x0028363C: nop

    // 0x00283640: bc1f        L_00283650
    if (!c1cs) {
        // 0x00283644: swc1        $f0, 0x1C($a0)
        MEM_W(0X1C, ctx->r4) = ctx->f0.u32l;
            goto L_00283650;
    }
    // 0x00283644: swc1        $f0, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = ctx->f0.u32l;
    // 0x00283648: sub.s       $f0, $f0, $f3
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f3.fl;
    // 0x0028364C: swc1        $f0, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = ctx->f0.u32l;
L_00283650:
    // 0x00283650: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00283654: lwc1        $f0, -0x6344($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X6344);
    // 0x00283658: mul.s       $f0, $f2, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x0028365C: lwc1        $f1, 0x20($a0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r4, 0X20);
    // 0x00283660: add.s       $f0, $f1, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x00283664: c.lt.s      $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f3.fl < ctx->f0.fl;
    // 0x00283668: nop

    // 0x0028366C: bc1f        L_0028367C
    if (!c1cs) {
        // 0x00283670: swc1        $f0, 0x20($a0)
        MEM_W(0X20, ctx->r4) = ctx->f0.u32l;
            goto L_0028367C;
    }
    // 0x00283670: swc1        $f0, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->f0.u32l;
    // 0x00283674: sub.s       $f0, $f0, $f3
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f3.fl;
    // 0x00283678: swc1        $f0, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->f0.u32l;
L_0028367C:
    // 0x0028367C: lwc1        $f1, 0x14($a1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r5, 0X14);
    // 0x00283680: lwc1        $f0, 0x21C($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X21C);
    // 0x00283684: beq         $a3, $zero, L_002836A4
    if (ctx->r7 == 0) {
        // 0x00283688: add.s       $f2, $f1, $f0
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f1.fl + ctx->f0.fl;
            goto L_002836A4;
    }
    // 0x00283688: add.s       $f2, $f1, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x0028368C: lw          $v0, 0x24($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X24);
    // 0x00283690: bne         $v0, $zero, L_002836A4
    if (ctx->r2 != 0) {
        // 0x00283694: nop
    
            goto L_002836A4;
    }
    // 0x00283694: nop

    // 0x00283698: lwc1        $f0, 0x10($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X10);
    // 0x0028369C: j           L_002836D0
    // 0x002836A0: add.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f0.fl;
        goto L_002836D0;
    // 0x002836A0: add.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f0.fl;
L_002836A4:
    // 0x002836A4: lbu         $v1, 0x29($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X29);
    // 0x002836A8: andi        $v0, $v1, 0x1
    ctx->r2 = ctx->r3 & 0X1;
    // 0x002836AC: beq         $v0, $zero, L_002836C8
    if (ctx->r2 == 0) {
        // 0x002836B0: andi        $v0, $v1, 0x2
        ctx->r2 = ctx->r3 & 0X2;
            goto L_002836C8;
    }
    // 0x002836B0: andi        $v0, $v1, 0x2
    ctx->r2 = ctx->r3 & 0X2;
    // 0x002836B4: lwc1        $f0, 0x118($a2)
    ctx->f0.u32l = MEM_W(ctx->r6, 0X118);
    // 0x002836B8: lwc1        $f1, 0x1C($a1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r5, 0X1C);
    // 0x002836BC: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x002836C0: j           L_002836D0
    // 0x002836C4: add.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f0.fl;
        goto L_002836D0;
    // 0x002836C4: add.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f0.fl;
L_002836C8:
    // 0x002836C8: bnel        $v0, $zero, L_002836D0
    if (ctx->r2 != 0) {
        // 0x002836CC: add.s       $f2, $f2, $f4
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f4.fl;
            goto L_002836D0;
    }
    goto skip_2;
    // 0x002836CC: add.s       $f2, $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f4.fl;
    skip_2:
L_002836D0:
    // 0x002836D0: swc1        $f2, 0x210($a0)
    MEM_W(0X210, ctx->r4) = ctx->f2.u32l;
    // 0x002836D4: jr          $ra
    // 0x002836D8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x002836D8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void func_0027AD90(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0027AD90: jr          $ra
    // 0x0027AD94: sw          $a1, 0x8C($a0)
    MEM_W(0X8C, ctx->r4) = ctx->r5;
    return;
    // 0x0027AD94: sw          $a1, 0x8C($a0)
    MEM_W(0X8C, ctx->r4) = ctx->r5;
;}
RECOMP_FUNC void func_0028F518(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0028F518: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x0028F51C: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x0028F520: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x0028F524: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x0028F528: addu        $s3, $a1, $zero
    ctx->r19 = ADD32(ctx->r5, 0);
    // 0x0028F52C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0028F530: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x0028F534: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x0028F538: addiu       $s4, $zero, 0x1
    ctx->r20 = ADD32(0, 0X1);
    // 0x0028F53C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x0028F540: addu        $s1, $s2, $zero
    ctx->r17 = ADD32(ctx->r18, 0);
    // 0x0028F544: addu        $v0, $s4, $zero
    ctx->r2 = ADD32(ctx->r20, 0);
    // 0x0028F548: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x0028F54C: sw          $s3, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r19;
    // 0x0028F550: sw          $zero, 0x4($s2)
    MEM_W(0X4, ctx->r18) = 0;
    // 0x0028F554: sw          $zero, 0x10($s2)
    MEM_W(0X10, ctx->r18) = 0;
    // 0x0028F558: sw          $zero, 0xC($s2)
    MEM_W(0XC, ctx->r18) = 0;
    // 0x0028F55C: sw          $v0, 0x14($s2)
    MEM_W(0X14, ctx->r18) = ctx->r2;
L_0028F560:
    // 0x0028F560: addu        $v0, $s2, $s0
    ctx->r2 = ADD32(ctx->r18, ctx->r16);
    // 0x0028F564: sb          $zero, 0xA8($v0)
    MEM_B(0XA8, ctx->r2) = 0;
    // 0x0028F568: sw          $zero, 0x58($s1)
    MEM_W(0X58, ctx->r17) = 0;
    // 0x0028F56C: sb          $zero, 0x98($v0)
    MEM_B(0X98, ctx->r2) = 0;
    // 0x0028F570: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
    // 0x0028F574: sll         $v1, $s0, 2
    ctx->r3 = S32(ctx->r16 << 2);
    // 0x0028F578: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x0028F57C: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
    // 0x0028F580: beq         $a0, $zero, L_0028F5B0
    if (ctx->r4 == 0) {
        // 0x0028F584: sllv        $v1, $s4, $s0
        ctx->r3 = S32(ctx->r20 << (ctx->r16 & 31));
            goto L_0028F5B0;
    }
    // 0x0028F584: sllv        $v1, $s4, $s0
    ctx->r3 = S32(ctx->r20 << (ctx->r16 & 31));
    // 0x0028F588: lw          $v0, 0x4($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X4);
    // 0x0028F58C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x0028F590: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x0028F594: sw          $v0, 0x4($s2)
    MEM_W(0X4, ctx->r18) = ctx->r2;
    // 0x0028F598: addu        $v0, $s3, $a0
    ctx->r2 = ADD32(ctx->r19, ctx->r4);
    // 0x0028F59C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x0028F5A0: jal         0x0028F98C
    // 0x0028F5A4: sw          $v0, 0x18($s1)
    MEM_W(0X18, ctx->r17) = ctx->r2;
    func_0028F98C(rdram, ctx);
        goto after_0;
    // 0x0028F5A4: sw          $v0, 0x18($s1)
    MEM_W(0X18, ctx->r17) = ctx->r2;
    after_0:
    // 0x0028F5A8: j           L_0028F5B4
    // 0x0028F5AC: sw          $v0, 0xB8($s1)
    MEM_W(0XB8, ctx->r17) = ctx->r2;
        goto L_0028F5B4;
    // 0x0028F5AC: sw          $v0, 0xB8($s1)
    MEM_W(0XB8, ctx->r17) = ctx->r2;
L_0028F5B0:
    // 0x0028F5B0: sw          $zero, 0x18($s1)
    MEM_W(0X18, ctx->r17) = 0;
L_0028F5B4:
    // 0x0028F5B4: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x0028F5B8: sltiu       $v0, $s0, 0x10
    ctx->r2 = ctx->r16 < 0X10 ? 1 : 0;
    // 0x0028F5BC: bne         $v0, $zero, L_0028F560
    if (ctx->r2 != 0) {
        // 0x0028F5C0: addiu       $s1, $s1, 0x4
        ctx->r17 = ADD32(ctx->r17, 0X4);
            goto L_0028F560;
    }
    // 0x0028F5C0: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    // 0x0028F5C4: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
    // 0x0028F5C8: lw          $v0, 0x40($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X40);
    // 0x0028F5CC: mtc1        $v0, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r2;
    // 0x0028F5D0: cvt.d.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.d = CVT_D_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x0028F5D4: bgez        $v0, L_0028F5E8
    if (SIGNED(ctx->r2) >= 0) {
        // 0x0028F5D8: nop
    
            goto L_0028F5E8;
    }
    // 0x0028F5D8: nop

    // 0x0028F5DC: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0028F5E0: ldc1        $f0, -0x5DC0($at)
    CHECK_FR(ctx, 0);
    ctx->f0.u64 = LD(ctx->r1, -0X5DC0);
    // 0x0028F5E4: add.d       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.d); NAN_CHECK(ctx->f0.d); 
    ctx->f1.d = ctx->f1.d + ctx->f0.d;
L_0028F5E8:
    // 0x0028F5E8: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0028F5EC: lwc1        $f0, -0x5DB8($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X5DB8);
    // 0x0028F5F0: cvt.s.d     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.d); 
    ctx->f1.fl = CVT_S_D(ctx->f1.d);
    // 0x0028F5F4: div.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = DIV_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0028F5F8: swc1        $f0, 0x8($s2)
    MEM_W(0X8, ctx->r18) = ctx->f0.u32l;
    // 0x0028F5FC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x0028F600: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x0028F604: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x0028F608: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x0028F60C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x0028F610: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0028F614: jr          $ra
    // 0x0028F618: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x0028F618: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_0025FE18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0025FE18: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0025FE1C: addu        $a3, $a0, $zero
    ctx->r7 = ADD32(ctx->r4, 0);
    // 0x0025FE20: addu        $a2, $a1, $zero
    ctx->r6 = ADD32(ctx->r5, 0);
    // 0x0025FE24: lui         $a0, 0xFFFD
    ctx->r4 = S32(0XFFFD << 16);
    // 0x0025FE28: ori         $a0, $a0, 0xFFFF
    ctx->r4 = ctx->r4 | 0XFFFF;
    // 0x0025FE2C: lui         $a1, 0xFFFE
    ctx->r5 = S32(0XFFFE << 16);
    // 0x0025FE30: ori         $a1, $a1, 0xFFFF
    ctx->r5 = ctx->r5 | 0XFFFF;
    // 0x0025FE34: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x0025FE38: lw          $v0, 0xD4($a3)
    ctx->r2 = MEM_W(ctx->r7, 0XD4);
    // 0x0025FE3C: lw          $v1, 0x114($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X114);
    // 0x0025FE40: and         $v0, $v0, $a0
    ctx->r2 = ctx->r2 & ctx->r4;
    // 0x0025FE44: lw          $a0, 0x1A8($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X1A8);
    // 0x0025FE48: and         $v0, $v0, $a1
    ctx->r2 = ctx->r2 & ctx->r5;
    // 0x0025FE4C: sw          $v0, 0xD4($a3)
    MEM_W(0XD4, ctx->r7) = ctx->r2;
    // 0x0025FE50: lb          $v1, 0x34($a2)
    ctx->r3 = MEM_B(ctx->r6, 0X34);
    // 0x0025FE54: addiu       $v0, $zero, 0x2E
    ctx->r2 = ADD32(0, 0X2E);
    // 0x0025FE58: bne         $v1, $v0, L_0025FE6C
    if (ctx->r3 != ctx->r2) {
        // 0x0025FE5C: sw          $zero, 0xF4($a2)
        MEM_W(0XF4, ctx->r6) = 0;
            goto L_0025FE6C;
    }
    // 0x0025FE5C: sw          $zero, 0xF4($a2)
    MEM_W(0XF4, ctx->r6) = 0;
    // 0x0025FE60: lb          $v0, 0xC7($a2)
    ctx->r2 = MEM_B(ctx->r6, 0XC7);
    // 0x0025FE64: beq         $v0, $zero, L_0025FEA4
    if (ctx->r2 == 0) {
        // 0x0025FE68: nop
    
            goto L_0025FEA4;
    }
    // 0x0025FE68: nop

L_0025FE6C:
    // 0x0025FE6C: lh          $v1, 0xA08($a0)
    ctx->r3 = MEM_H(ctx->r4, 0XA08);
    // 0x0025FE70: addiu       $v0, $zero, 0x21
    ctx->r2 = ADD32(0, 0X21);
    // 0x0025FE74: bne         $v1, $v0, L_0025FE8C
    if (ctx->r3 != ctx->r2) {
        // 0x0025FE78: addiu       $v0, $zero, 0x22
        ctx->r2 = ADD32(0, 0X22);
            goto L_0025FE8C;
    }
    // 0x0025FE78: addiu       $v0, $zero, 0x22
    ctx->r2 = ADD32(0, 0X22);
    // 0x0025FE7C: addu        $a0, $a3, $zero
    ctx->r4 = ADD32(ctx->r7, 0);
    // 0x0025FE80: addu        $a1, $a2, $zero
    ctx->r5 = ADD32(ctx->r6, 0);
    // 0x0025FE84: j           L_0025FE9C
    // 0x0025FE88: addiu       $a2, $zero, 0x2C
    ctx->r6 = ADD32(0, 0X2C);
        goto L_0025FE9C;
    // 0x0025FE88: addiu       $a2, $zero, 0x2C
    ctx->r6 = ADD32(0, 0X2C);
L_0025FE8C:
    // 0x0025FE8C: bne         $v1, $v0, L_0025FEA4
    if (ctx->r3 != ctx->r2) {
        // 0x0025FE90: addu        $a0, $a3, $zero
        ctx->r4 = ADD32(ctx->r7, 0);
            goto L_0025FEA4;
    }
    // 0x0025FE90: addu        $a0, $a3, $zero
    ctx->r4 = ADD32(ctx->r7, 0);
    // 0x0025FE94: addu        $a1, $a2, $zero
    ctx->r5 = ADD32(ctx->r6, 0);
    // 0x0025FE98: addiu       $a2, $zero, 0x2D
    ctx->r6 = ADD32(0, 0X2D);
L_0025FE9C:
    // 0x0025FE9C: jal         0x00243414
    // 0x0025FEA0: nop

    func_00243414(rdram, ctx);
        goto after_0;
    // 0x0025FEA0: nop

    after_0:
L_0025FEA4:
    // 0x0025FEA4: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x0025FEA8: jr          $ra
    // 0x0025FEAC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0025FEAC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00453AE8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00453AE8: lui         $a2, 0x800C
    ctx->r6 = S32(0X800C << 16);
    // 0x00453AEC: addiu       $a2, $a2, 0x1F84
    ctx->r6 = ADD32(ctx->r6, 0X1F84);
    // 0x00453AF0: lw          $v1, 0x4($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X4);
    // 0x00453AF4: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x00453AF8: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x00453AFC: sw          $v0, 0x920($at)
    MEM_W(0X920, ctx->r1) = ctx->r2;
    // 0x00453B00: addiu       $v0, $zero, 0x16
    ctx->r2 = ADD32(0, 0X16);
    // 0x00453B04: bne         $v1, $v0, L_00453B14
    if (ctx->r3 != ctx->r2) {
            // 0x00453B08: sw          $zero, 0x0($a2)
    MEM_W(0X0, ctx->r6) = 0;
    func_00453B14(rdram, ctx);
    return;
    }
    // 0x00453B08: sw          $zero, 0x0($a2)
    MEM_W(0X0, ctx->r6) = 0;
    // 0x00453B0C: jr          $ra
    // 0x00453B10: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x00453B10: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void func_00267648(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00267648: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x0026764C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00267650: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x00267654: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x00267658: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x0026765C: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    // 0x00267660: bne         $a0, $zero, L_00267674
    if (ctx->r4 != 0) {
        // 0x00267664: nop
    
            goto L_00267674;
    }
    // 0x00267664: nop

    // 0x00267668: lwc1        $f0, 0x8($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X8);
    // 0x0026766C: j           L_002677EC
    // 0x00267670: nop

        goto L_002677EC;
    // 0x00267670: nop

L_00267674:
    // 0x00267674: lw          $a1, 0x4($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X4);
    // 0x00267678: lw          $a2, 0xC($s0)
    ctx->r6 = MEM_W(ctx->r16, 0XC);
    // 0x0026767C: jal         0x0026BE60
    // 0x00267680: nop

    func_0026BE60(rdram, ctx);
        goto after_0;
    // 0x00267680: nop

    after_0:
    // 0x00267684: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x00267688: lbu         $v1, 0x0($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X0);
    // 0x0026768C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x00267690: bne         $v1, $a1, L_0026769C
    if (ctx->r3 != ctx->r5) {
        // 0x00267694: mov.s       $f20, $f0
        CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
            goto L_0026769C;
    }
    // 0x00267694: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x00267698: lw          $v0, 0x30($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X30);
L_0026769C:
    // 0x0026769C: beq         $v0, $zero, L_002677EC
    if (ctx->r2 == 0) {
        // 0x002676A0: mov.s       $f0, $f20
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    ctx->f0.fl = ctx->f20.fl;
            goto L_002677EC;
    }
    // 0x002676A0: mov.s       $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    ctx->f0.fl = ctx->f20.fl;
    // 0x002676A4: bne         $v1, $a1, L_002676B0
    if (ctx->r3 != ctx->r5) {
        // 0x002676A8: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_002676B0;
    }
    // 0x002676A8: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x002676AC: lw          $a0, 0x30($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X30);
L_002676B0:
    // 0x002676B0: lwc1        $f0, 0x4($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X4);
    // 0x002676B4: lbu         $v0, 0x0($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X0);
    // 0x002676B8: lwc1        $f1, 0xC($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0XC);
    // 0x002676BC: bne         $v0, $a1, L_00267734
    if (ctx->r2 != ctx->r5) {
        // 0x002676C0: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_00267734;
    }
    // 0x002676C0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x002676C4: lw          $a1, 0x14($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X14);
    // 0x002676C8: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x002676CC: bne         $v1, $v0, L_00267734
    if (ctx->r3 != ctx->r2) {
        // 0x002676D0: nop
    
            goto L_00267734;
    }
    // 0x002676D0: nop

    // 0x002676D4: lhu         $v0, 0x18($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X18);
    // 0x002676D8: beq         $v0, $zero, L_002676F8
    if (ctx->r2 == 0) {
        // 0x002676DC: nop
    
            goto L_002676F8;
    }
    // 0x002676DC: nop

    // 0x002676E0: bltz        $v0, L_00267734
    if (SIGNED(ctx->r2) < 0) {
        // 0x002676E4: slti        $v0, $v0, 0x3
        ctx->r2 = SIGNED(ctx->r2) < 0X3 ? 1 : 0;
            goto L_00267734;
    }
    // 0x002676E4: slti        $v0, $v0, 0x3
    ctx->r2 = SIGNED(ctx->r2) < 0X3 ? 1 : 0;
    // 0x002676E8: beq         $v0, $zero, L_00267734
    if (ctx->r2 == 0) {
        // 0x002676EC: nop
    
            goto L_00267734;
    }
    // 0x002676EC: nop

    // 0x002676F0: j           L_0026771C
    // 0x002676F4: nop

        goto L_0026771C;
    // 0x002676F4: nop

L_002676F8:
    // 0x002676F8: lw          $v0, 0x10($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X10);
    // 0x002676FC: beq         $v0, $zero, L_00267734
    if (ctx->r2 == 0) {
        // 0x00267700: nop
    
            goto L_00267734;
    }
    // 0x00267700: nop

    // 0x00267704: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x00267708: mfc1        $a2, $f1
    ctx->r6 = (int32_t)ctx->f_odd[(1 - 1) * 2];
    // 0x0026770C: jal         0x0026BE60
    // 0x00267710: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    func_0026BE60(rdram, ctx);
        goto after_1;
    // 0x00267710: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    after_1:
    // 0x00267714: j           L_00267738
    // 0x00267718: nop

        goto L_00267738;
    // 0x00267718: nop

L_0026771C:
    // 0x0026771C: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x00267720: mfc1        $a2, $f1
    ctx->r6 = (int32_t)ctx->f_odd[(1 - 1) * 2];
    // 0x00267724: jal         0x002425A4
    // 0x00267728: nop

    func_002425A4(rdram, ctx);
        goto after_2;
    // 0x00267728: nop

    after_2:
    // 0x0026772C: j           L_00267738
    // 0x00267730: nop

        goto L_00267738;
    // 0x00267730: nop

L_00267734:
    // 0x00267734: lwc1        $f0, 0x8($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X8);
L_00267738:
    // 0x00267738: c.lt.s      $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f20.fl < ctx->f0.fl;
    // 0x0026773C: nop

    // 0x00267740: bc1f        L_002677E8
    if (!c1cs) {
        // 0x00267744: addiu       $v1, $zero, 0x1
        ctx->r3 = ADD32(0, 0X1);
            goto L_002677E8;
    }
    // 0x00267744: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x00267748: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x0026774C: bne         $v0, $v1, L_00267758
    if (ctx->r2 != ctx->r3) {
        // 0x00267750: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_00267758;
    }
    // 0x00267750: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x00267754: lw          $a0, 0x30($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X30);
L_00267758:
    // 0x00267758: lwc1        $f0, 0x4($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X4);
    // 0x0026775C: lbu         $v0, 0x0($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X0);
    // 0x00267760: lwc1        $f1, 0xC($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0XC);
    // 0x00267764: bne         $v0, $v1, L_002677AC
    if (ctx->r2 != ctx->r3) {
        // 0x00267768: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_002677AC;
    }
    // 0x00267768: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x0026776C: lw          $a1, 0x14($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X14);
    // 0x00267770: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x00267774: bne         $v1, $v0, L_002677AC
    if (ctx->r3 != ctx->r2) {
        // 0x00267778: nop
    
            goto L_002677AC;
    }
    // 0x00267778: nop

    // 0x0026777C: lhu         $v0, 0x18($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X18);
    // 0x00267780: beq         $v0, $zero, L_002677A0
    if (ctx->r2 == 0) {
        // 0x00267784: nop
    
            goto L_002677A0;
    }
    // 0x00267784: nop

    // 0x00267788: bltz        $v0, L_002677AC
    if (SIGNED(ctx->r2) < 0) {
        // 0x0026778C: slti        $v0, $v0, 0x3
        ctx->r2 = SIGNED(ctx->r2) < 0X3 ? 1 : 0;
            goto L_002677AC;
    }
    // 0x0026778C: slti        $v0, $v0, 0x3
    ctx->r2 = SIGNED(ctx->r2) < 0X3 ? 1 : 0;
    // 0x00267790: beq         $v0, $zero, L_002677AC
    if (ctx->r2 == 0) {
        // 0x00267794: nop
    
            goto L_002677AC;
    }
    // 0x00267794: nop

    // 0x00267798: j           L_002677D0
    // 0x0026779C: nop

        goto L_002677D0;
    // 0x0026779C: nop

L_002677A0:
    // 0x002677A0: lw          $v0, 0x10($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X10);
    // 0x002677A4: bne         $v0, $zero, L_002677B8
    if (ctx->r2 != 0) {
        // 0x002677A8: nop
    
            goto L_002677B8;
    }
    // 0x002677A8: nop

L_002677AC:
    // 0x002677AC: lwc1        $f0, 0x8($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X8);
    // 0x002677B0: j           L_002677EC
    // 0x002677B4: nop

        goto L_002677EC;
    // 0x002677B4: nop

L_002677B8:
    // 0x002677B8: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x002677BC: mfc1        $a2, $f1
    ctx->r6 = (int32_t)ctx->f_odd[(1 - 1) * 2];
    // 0x002677C0: jal         0x0026BE60
    // 0x002677C4: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    func_0026BE60(rdram, ctx);
        goto after_3;
    // 0x002677C4: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    after_3:
    // 0x002677C8: j           L_002677EC
    // 0x002677CC: nop

        goto L_002677EC;
    // 0x002677CC: nop

L_002677D0:
    // 0x002677D0: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x002677D4: mfc1        $a2, $f1
    ctx->r6 = (int32_t)ctx->f_odd[(1 - 1) * 2];
    // 0x002677D8: jal         0x002425A4
    // 0x002677DC: nop

    func_002425A4(rdram, ctx);
        goto after_4;
    // 0x002677DC: nop

    after_4:
    // 0x002677E0: j           L_002677EC
    // 0x002677E4: nop

        goto L_002677EC;
    // 0x002677E4: nop

L_002677E8:
    // 0x002677E8: mov.s       $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    ctx->f0.fl = ctx->f20.fl;
L_002677EC:
    // 0x002677EC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x002677F0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x002677F4: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x002677F8: jr          $ra
    // 0x002677FC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x002677FC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_00253460(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00253460: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x00253464: addiu       $v1, $v1, -0x5350
    ctx->r3 = ADD32(ctx->r3, -0X5350);
    // 0x00253468: lw          $v0, 0x20($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X20);
    // 0x0025346C: bne         $v0, $zero, L_002534D8
    if (ctx->r2 != 0) {
            // 0x00253470: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    func_002534D8(rdram, ctx);
    return;
    }
    // 0x00253470: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x00253474: lw          $v0, 0x1C($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X1C);
    // 0x00253478: beq         $v0, $zero, L_002534D0
    if (ctx->r2 == 0) {
            // 0x0025347C: nop

    func_002534D0(rdram, ctx);
    return;
    }
    // 0x0025347C: nop

    // 0x00253480: lw          $v1, 0x20($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X20);
    // 0x00253484: beq         $v1, $zero, L_002534AC
    if (ctx->r3 == 0) {
        // 0x00253488: addu        $a1, $zero, $zero
        ctx->r5 = ADD32(0, 0);
            goto L_002534AC;
    }
    // 0x00253488: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x0025348C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
L_00253490:
    // 0x00253490: lw          $v0, 0x518($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X518);
    // 0x00253494: lbu         $v0, 0x3D($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X3D);
    // 0x00253498: beql        $v0, $a2, L_002534A0
    if (ctx->r2 == ctx->r6) {
        // 0x0025349C: addiu       $a1, $a1, 0x1
        ctx->r5 = ADD32(ctx->r5, 0X1);
            goto L_002534A0;
    }
    goto skip_0;
    // 0x0025349C: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    skip_0:
L_002534A0:
    // 0x002534A0: lw          $v1, 0x1320($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X1320);
    // 0x002534A4: bne         $v1, $zero, L_00253490
    if (ctx->r3 != 0) {
        // 0x002534A8: nop
    
            goto L_00253490;
    }
    // 0x002534A8: nop

L_002534AC:
    // 0x002534AC: lw          $v0, 0x30($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X30);
    // 0x002534B0: bne         $a1, $v0, L_002534D0
    if (ctx->r5 != ctx->r2) {
            // 0x002534B4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    func_002534D0(rdram, ctx);
    return;
    }
    // 0x002534B4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x002534B8: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x002534BC: addiu       $a0, $a0, -0x5350
    ctx->r4 = ADD32(ctx->r4, -0X5350);
    // 0x002534C0: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x002534C4: sw          $v1, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->r3;
    // 0x002534C8: jr          $ra
    // 0x002534CC: sw          $zero, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = 0;
    return;
    // 0x002534CC: sw          $zero, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = 0;
;}
RECOMP_FUNC void func_0029A4C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0029A4C4: jr          $ra
    // 0x0029A4C8: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    return;
    // 0x0029A4C8: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
;}
RECOMP_FUNC void func_00406598(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00406598: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x0040659C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x004065A0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x004065A4: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x004065A8: addiu       $v1, $v1, -0x61C
    ctx->r3 = ADD32(ctx->r3, -0X61C);
    // 0x004065AC: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x004065B0: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x004065B4: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x004065B8: sdc1        $f21, 0x38($sp)
    CHECK_FR(ctx, 21);
    SD(ctx->f21.u64, 0X38, ctx->r29);
    // 0x004065BC: sdc1        $f20, 0x30($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X30, ctx->r29);
    // 0x004065C0: lwc1        $f1, 0x0($v1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r3, 0X0);
    // 0x004065C4: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x004065C8: c.lt.s      $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f2.fl < ctx->f1.fl;
    // 0x004065CC: nop

    // 0x004065D0: bc1f        L_004065E8
    if (!c1cs) {
        // 0x004065D4: addu        $s2, $a1, $zero
        ctx->r18 = ADD32(ctx->r5, 0);
            goto L_004065E8;
    }
    // 0x004065D4: addu        $s2, $a1, $zero
    ctx->r18 = ADD32(ctx->r5, 0);
    // 0x004065D8: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x004065DC: lwc1        $f0, 0x6D28($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6D28);
    // 0x004065E0: sub.s       $f0, $f1, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f1.fl - ctx->f0.fl;
    // 0x004065E4: swc1        $f0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f0.u32l;
L_004065E8:
    // 0x004065E8: lw          $v0, -0x8($v1)
    ctx->r2 = MEM_W(ctx->r3, -0X8);
    // 0x004065EC: addiu       $v0, $v0, -0x3
    ctx->r2 = ADD32(ctx->r2, -0X3);
    // 0x004065F0: sltiu       $v0, $v0, 0x2
    ctx->r2 = ctx->r2 < 0X2 ? 1 : 0;
    // 0x004065F4: beq         $v0, $zero, L_0040666C
    if (ctx->r2 == 0) {
        // 0x004065F8: nop
    
            goto L_0040666C;
    }
    // 0x004065F8: nop

    // 0x004065FC: lwc1        $f0, 0x0($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X0);
    // 0x00406600: c.le.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl <= ctx->f2.fl;
    // 0x00406604: nop

    // 0x00406608: bc1f        L_0040666C
    if (!c1cs) {
        // 0x0040660C: nop
    
            goto L_0040666C;
    }
    // 0x0040660C: nop

    // 0x00406610: lb          $v0, 0xC7($s2)
    ctx->r2 = MEM_B(ctx->r18, 0XC7);
    // 0x00406614: beq         $v0, $zero, L_0040666C
    if (ctx->r2 == 0) {
        // 0x00406618: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_0040666C;
    }
    // 0x00406618: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x0040661C: swc1        $f2, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f2.u32l;
    // 0x00406620: lw          $v1, -0xC($v1)
    ctx->r3 = MEM_W(ctx->r3, -0XC);
    // 0x00406624: bne         $v1, $v0, L_00406660
    if (ctx->r3 != ctx->r2) {
        // 0x00406628: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_00406660;
    }
    // 0x00406628: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0040662C: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x00406630: addiu       $a2, $zero, 0x19
    ctx->r6 = ADD32(0, 0X19);
    // 0x00406634: lui         $a3, 0x800F
    ctx->r7 = S32(0X800F << 16);
    // 0x00406638: addiu       $a3, $a3, 0x1C40
    ctx->r7 = ADD32(ctx->r7, 0X1C40);
    // 0x0040663C: lui         $t0, 0x800F
    ctx->r8 = S32(0X800F << 16);
    // 0x00406640: addiu       $t0, $t0, 0x1F50
    ctx->r8 = ADD32(ctx->r8, 0X1F50);
    // 0x00406644: lw          $v0, 0x0($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X0);
    // 0x00406648: lw          $v1, 0x0($t0)
    ctx->r3 = MEM_W(ctx->r8, 0X0);
    // 0x0040664C: ori         $v0, $v0, 0x300
    ctx->r2 = ctx->r2 | 0X300;
    // 0x00406650: ori         $v1, $v1, 0x300
    ctx->r3 = ctx->r3 | 0X300;
    // 0x00406654: sw          $v0, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r2;
    // 0x00406658: j           L_00406864
    // 0x0040665C: sw          $v1, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r3;
        goto L_00406864;
    // 0x0040665C: sw          $v1, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r3;
L_00406660:
    // 0x00406660: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x00406664: j           L_00406864
    // 0x00406668: addiu       $a2, $zero, 0x13
    ctx->r6 = ADD32(0, 0X13);
        goto L_00406864;
    // 0x00406668: addiu       $a2, $zero, 0x13
    ctx->r6 = ADD32(0, 0X13);
L_0040666C:
    // 0x0040666C: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x00406670: addiu       $a0, $a0, -0x624
    ctx->r4 = ADD32(ctx->r4, -0X624);
    // 0x00406674: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x00406678: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x0040667C: bne         $v1, $v0, L_00406770
    if (ctx->r3 != ctx->r2) {
        // 0x00406680: nop
    
            goto L_00406770;
    }
    // 0x00406680: nop

    // 0x00406684: lw          $t1, 0x6C($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X6C);
    // 0x00406688: lw          $t2, 0x70($a0)
    ctx->r10 = MEM_W(ctx->r4, 0X70);
    // 0x0040668C: lw          $t3, 0x74($a0)
    ctx->r11 = MEM_W(ctx->r4, 0X74);
    // 0x00406690: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x00406694: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    // 0x00406698: sw          $t3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r11;
    // 0x0040669C: lw          $a1, 0x10($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X10);
    // 0x004066A0: lw          $a2, 0x14($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X14);
    // 0x004066A4: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x004066A8: jal         0x00246310
    // 0x004066AC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00246310(rdram, ctx);
        goto after_0;
    // 0x004066AC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x004066B0: mtc1        $zero, $f1
    ctx->f_odd[(1 - 1) * 2] = 0;
    // 0x004066B4: mov.s       $f21, $f0
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 0);
    ctx->f21.fl = ctx->f0.fl;
    // 0x004066B8: c.lt.s      $f21, $f1
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f21.fl < ctx->f1.fl;
    // 0x004066BC: nop

    // 0x004066C0: bc1f        L_004066EC
    if (!c1cs) {
        // 0x004066C4: nop
    
            goto L_004066EC;
    }
    // 0x004066C4: nop

    // 0x004066C8: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x004066CC: lwc1        $f1, 0x4C0($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X4C0);
    // 0x004066D0: neg.s       $f0, $f21
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f21.fl); 
    ctx->f0.fl = -ctx->f21.fl;
    // 0x004066D4: c.le.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl <= ctx->f1.fl;
    // 0x004066D8: nop

    // 0x004066DC: bc1t        L_00406704
    if (c1cs) {
        // 0x004066E0: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_00406704;
    }
    // 0x004066E0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x004066E4: j           L_0040675C
    // 0x004066E8: nop

        goto L_0040675C;
    // 0x004066E8: nop

L_004066EC:
    // 0x004066EC: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x004066F0: lwc1        $f0, 0x4C4($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X4C4);
    // 0x004066F4: c.le.s      $f21, $f0
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f21.fl <= ctx->f0.fl;
    // 0x004066F8: nop

    // 0x004066FC: bc1f        L_0040675C
    if (!c1cs) {
        // 0x00406700: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_0040675C;
    }
    // 0x00406700: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_00406704:
    // 0x00406704: lwc1        $f0, 0x1C($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x00406708: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0040670C: lwc1        $f1, 0x4C8($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X4C8);
    // 0x00406710: lwc1        $f12, 0x50($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X50);
    // 0x00406714: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x00406718: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0040671C: lwc1        $f20, 0x4CC($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X4CC);
    // 0x00406720: jal         0x002982F0
    // 0x00406724: swc1        $f0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f0.u32l;
    func_002982F0(rdram, ctx);
        goto after_1;
    // 0x00406724: swc1        $f0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f0.u32l;
    after_1:
    // 0x00406728: mul.s       $f0, $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f20.fl);
    // 0x0040672C: lwc1        $f1, 0x18($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X18);
    // 0x00406730: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x00406734: lwc1        $f12, 0x50($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X50);
    // 0x00406738: jal         0x002974C0
    // 0x0040673C: swc1        $f1, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->f_odd[(1 - 1) * 2];
    func_002974C0(rdram, ctx);
        goto after_2;
    // 0x0040673C: swc1        $f1, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->f_odd[(1 - 1) * 2];
    after_2:
    // 0x00406740: mul.s       $f0, $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f20.fl);
    // 0x00406744: lwc1        $f1, 0x20($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X20);
    // 0x00406748: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x0040674C: swc1        $f1, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f_odd[(1 - 1) * 2];
    // 0x00406750: lb          $v0, 0xC7($s2)
    ctx->r2 = MEM_B(ctx->r18, 0XC7);
    // 0x00406754: bne         $v0, $zero, L_0040685C
    if (ctx->r2 != 0) {
        // 0x00406758: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_0040685C;
    }
    // 0x00406758: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_0040675C:
    // 0x0040675C: lui         $a2, 0x3E86
    ctx->r6 = S32(0X3E86 << 16);
    // 0x00406760: ori         $a2, $a2, 0xA93
    ctx->r6 = ctx->r6 | 0XA93;
    // 0x00406764: mfc1        $a3, $f21
    ctx->r7 = (int32_t)ctx->f_odd[(21 - 1) * 2];
    // 0x00406768: jal         0x00245BAC
    // 0x0040676C: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    func_00245BAC(rdram, ctx);
        goto after_3;
    // 0x0040676C: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    after_3:
L_00406770:
    // 0x00406770: lui         $s1, 0x8013
    ctx->r17 = S32(0X8013 << 16);
    // 0x00406774: addiu       $s1, $s1, -0x624
    ctx->r17 = ADD32(ctx->r17, -0X624);
    // 0x00406778: lw          $v1, 0x0($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X0);
    // 0x0040677C: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
    // 0x00406780: bne         $v1, $v0, L_0040686C
    if (ctx->r3 != ctx->r2) {
        // 0x00406784: nop
    
            goto L_0040686C;
    }
    // 0x00406784: nop

    // 0x00406788: lwc1        $f1, 0xC($s1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r17, 0XC);
    // 0x0040678C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x00406790: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x00406794: nop

    // 0x00406798: bc1f        L_00406848
    if (!c1cs) {
        // 0x0040679C: nop
    
            goto L_00406848;
    }
    // 0x0040679C: nop

    // 0x004067A0: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x004067A4: lwc1        $f1, 0x6D28($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X6D28);
    // 0x004067A8: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x004067AC: lwc1        $f0, 0x4D0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X4D0);
    // 0x004067B0: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x004067B4: lwc1        $f0, 0x1C($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x004067B8: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x004067BC: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x004067C0: lwc1        $f21, 0x4D4($at)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r1, 0X4D4);
    // 0x004067C4: swc1        $f0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f0.u32l;
    // 0x004067C8: lwc1        $f12, -0x3C4($s1)
    ctx->f12.u32l = MEM_W(ctx->r17, -0X3C4);
    // 0x004067CC: mul.s       $f12, $f12, $f21
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f21.fl); 
    ctx->f12.fl = MUL_S(ctx->f12.fl, ctx->f21.fl);
    // 0x004067D0: lwc1        $f0, 0x50($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X50);
    // 0x004067D4: jal         0x002982F0
    // 0x004067D8: add.s       $f12, $f0, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = ctx->f0.fl + ctx->f12.fl;
    func_002982F0(rdram, ctx);
        goto after_4;
    // 0x004067D8: add.s       $f12, $f0, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = ctx->f0.fl + ctx->f12.fl;
    after_4:
    // 0x004067DC: lwc1        $f1, -0x3C0($s1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r17, -0X3C0);
    // 0x004067E0: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x004067E4: lwc1        $f20, 0x4D8($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X4D8);
    // 0x004067E8: mul.s       $f1, $f1, $f20
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f20.fl);
    // 0x004067EC: neg.s       $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = -ctx->f1.fl;
    // 0x004067F0: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x004067F4: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x004067F8: lwc1        $f0, 0x6D28($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6D28);
    // 0x004067FC: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x00406800: lwc1        $f0, 0x18($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X18);
    // 0x00406804: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x00406808: swc1        $f0, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->f0.u32l;
    // 0x0040680C: lwc1        $f12, -0x3C4($s1)
    ctx->f12.u32l = MEM_W(ctx->r17, -0X3C4);
    // 0x00406810: mul.s       $f12, $f12, $f21
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f21.fl); 
    ctx->f12.fl = MUL_S(ctx->f12.fl, ctx->f21.fl);
    // 0x00406814: lwc1        $f0, 0x50($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X50);
    // 0x00406818: jal         0x002974C0
    // 0x0040681C: add.s       $f12, $f0, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = ctx->f0.fl + ctx->f12.fl;
    func_002974C0(rdram, ctx);
        goto after_5;
    // 0x0040681C: add.s       $f12, $f0, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = ctx->f0.fl + ctx->f12.fl;
    after_5:
    // 0x00406820: lwc1        $f1, -0x3C0($s1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r17, -0X3C0);
    // 0x00406824: mul.s       $f1, $f1, $f20
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f20.fl);
    // 0x00406828: neg.s       $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = -ctx->f1.fl;
    // 0x0040682C: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x00406830: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00406834: lwc1        $f0, 0x6D28($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6D28);
    // 0x00406838: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x0040683C: lwc1        $f0, 0x20($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X20);
    // 0x00406840: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x00406844: swc1        $f0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f0.u32l;
L_00406848:
    // 0x00406848: lb          $v0, 0xC7($s2)
    ctx->r2 = MEM_B(ctx->r18, 0XC7);
    // 0x0040684C: beq         $v0, $zero, L_0040686C
    if (ctx->r2 == 0) {
        // 0x00406850: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_0040686C;
    }
    // 0x00406850: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x00406854: sw          $v0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r2;
    // 0x00406858: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_0040685C:
    // 0x0040685C: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x00406860: addiu       $a2, $zero, 0x17
    ctx->r6 = ADD32(0, 0X17);
L_00406864:
    // 0x00406864: jal         0x00243414
    // 0x00406868: nop

    func_00243414(rdram, ctx);
        goto after_6;
    // 0x00406868: nop

    after_6:
L_0040686C:
    // 0x0040686C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x00406870: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x00406874: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x00406878: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x0040687C: ldc1        $f21, 0x38($sp)
    CHECK_FR(ctx, 21);
    ctx->f21.u64 = LD(ctx->r29, 0X38);
    // 0x00406880: ldc1        $f20, 0x30($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X30);
    // 0x00406884: jr          $ra
    // 0x00406888: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x00406888: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_00454680(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00454680: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x00454684: lw          $v0, -0x5528($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X5528);
    // 0x00454688: xori        $v0, $v0, 0x400
    ctx->r2 = ctx->r2 ^ 0X400;
    // 0x0045468C: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x00454690: sw          $v0, -0x5528($at)
    MEM_W(-0X5528, ctx->r1) = ctx->r2;
    // 0x00454694: jr          $ra
    // 0x00454698: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x00454698: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void func_00440C18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00440C18: jr          $ra
    // 0x00440C1C: nop

    return;
    // 0x00440C1C: nop

;}
