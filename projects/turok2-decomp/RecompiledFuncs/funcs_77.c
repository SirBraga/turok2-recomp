#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_00285ABC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00285ABC: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
    // 0x00285AC0: lui         $v0, 0x800F
    ctx->r2 = S32(0X800F << 16);
    // 0x00285AC4: addiu       $v0, $v0, 0x5EA3
    ctx->r2 = ADD32(ctx->r2, 0X5EA3);
L_00285AC8:
    // 0x00285AC8: sb          $zero, 0x0($v0)
    MEM_B(0X0, ctx->r2) = 0;
    // 0x00285ACC: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x00285AD0: bgez        $v1, L_00285AC8
    if (SIGNED(ctx->r3) >= 0) {
        // 0x00285AD4: addiu       $v0, $v0, -0x1
        ctx->r2 = ADD32(ctx->r2, -0X1);
            goto L_00285AC8;
    }
    // 0x00285AD4: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x00285AD8: jr          $ra
    // 0x00285ADC: nop

    return;
    // 0x00285ADC: nop

;}
RECOMP_FUNC void func_00289258(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00289258: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0028925C: lw          $v0, 0x6D64($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X6D64);
    // 0x00289260: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x00289264: beq         $v0, $zero, L_002892CC
    if (ctx->r2 == 0) {
        // 0x00289268: sw          $ra, 0x20($sp)
        MEM_W(0X20, ctx->r29) = ctx->r31;
            goto L_002892CC;
    }
    // 0x00289268: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x0028926C: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x00289270: lw          $v0, -0xEC4($v0)
    ctx->r2 = MEM_W(ctx->r2, -0XEC4);
    // 0x00289274: beq         $v0, $zero, L_002892C4
    if (ctx->r2 == 0) {
        // 0x00289278: addiu       $v0, $zero, 0x5A
        ctx->r2 = ADD32(0, 0X5A);
            goto L_002892C4;
    }
    // 0x00289278: addiu       $v0, $zero, 0x5A
    ctx->r2 = ADD32(0, 0X5A);
    // 0x0028927C: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x00289280: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x00289284: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x00289288: lui         $a3, 0x800C
    ctx->r7 = S32(0X800C << 16);
    // 0x0028928C: lw          $a3, 0x2030($a3)
    ctx->r7 = MEM_W(ctx->r7, 0X2030);
    // 0x00289290: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00289294: lwc1        $f0, -0x6208($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X6208);
    // 0x00289298: lui         $a2, 0x800B
    ctx->r6 = S32(0X800B << 16);
    // 0x0028929C: addiu       $a2, $a2, 0x3634
    ctx->r6 = ADD32(ctx->r6, 0X3634);
    // 0x002892A0: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x002892A4: srl         $v0, $a3, 31
    ctx->r2 = S32(U32(ctx->r7) >> 31);
    // 0x002892A8: addu        $a3, $a3, $v0
    ctx->r7 = ADD32(ctx->r7, ctx->r2);
    // 0x002892AC: srav        $a3, $a3, $a1
    ctx->r7 = S32(SIGNED(ctx->r7) >> (ctx->r5 & 31));
    // 0x002892B0: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    // 0x002892B4: jal         0x00286E14
    // 0x002892B8: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    func_00286E14(rdram, ctx);
        goto after_0;
    // 0x002892B8: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    after_0:
    // 0x002892BC: j           L_002892CC
    // 0x002892C0: nop

        goto L_002892CC;
    // 0x002892C0: nop

L_002892C4:
    // 0x002892C4: jal         0x0028908C
    // 0x002892C8: nop

    func_0028908C(rdram, ctx);
        goto after_1;
    // 0x002892C8: nop

    after_1:
L_002892CC:
    // 0x002892CC: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x002892D0: jr          $ra
    // 0x002892D4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x002892D4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_0029AA78(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0029AA78: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0029AA7C: lwc1        $f12, 0x7AF8($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X7AF8);
;}
RECOMP_FUNC void func_002063B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002063B4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x002063B8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x002063BC: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x002063C0: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x002063C4: addu        $s3, $a2, $zero
    ctx->r19 = ADD32(ctx->r6, 0);
    // 0x002063C8: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x002063CC: addu        $s2, $a3, $zero
    ctx->r18 = ADD32(ctx->r7, 0);
    // 0x002063D0: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x002063D4: beq         $s3, $zero, L_002063F4
    if (ctx->r19 == 0) {
        // 0x002063D8: sw          $s0, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r16;
            goto L_002063F4;
    }
    // 0x002063D8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x002063DC: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x002063E0: addiu       $a0, $a0, 0x1CC0
    ctx->r4 = ADD32(ctx->r4, 0X1CC0);
    // 0x002063E4: jal         0x002025F4
    // 0x002063E8: nop

    func_002025F4(rdram, ctx);
        goto after_0;
    // 0x002063E8: nop

    after_0:
    // 0x002063EC: j           L_00206408
    // 0x002063F0: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
        goto L_00206408;
    // 0x002063F0: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
L_002063F4:
    // 0x002063F4: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x002063F8: addiu       $a0, $a0, 0x1CC0
    ctx->r4 = ADD32(ctx->r4, 0X1CC0);
    // 0x002063FC: jal         0x002024E0
    // 0x00206400: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_002024E0(rdram, ctx);
        goto after_1;
    // 0x00206400: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_1:
    // 0x00206404: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
L_00206408:
    // 0x00206408: bne         $s0, $zero, L_0020647C
    if (ctx->r16 != 0) {
        // 0x0020640C: addu        $v0, $s0, $zero
        ctx->r2 = ADD32(ctx->r16, 0);
            goto L_0020647C;
    }
    // 0x0020640C: addu        $v0, $s0, $zero
    ctx->r2 = ADD32(ctx->r16, 0);
    // 0x00206410: andi        $s2, $s2, 0x10
    ctx->r18 = ctx->r18 & 0X10;
    // 0x00206414: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
L_00206418:
    // 0x00206418: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x0020641C: jal         0x00203068
    // 0x00206420: sltiu       $a2, $s2, 0x1
    ctx->r6 = ctx->r18 < 0X1 ? 1 : 0;
    func_00203068(rdram, ctx);
        goto after_2;
    // 0x00206420: sltiu       $a2, $s2, 0x1
    ctx->r6 = ctx->r18 < 0X1 ? 1 : 0;
    after_2:
    // 0x00206424: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x00206428: beq         $v1, $zero, L_00206438
    if (ctx->r3 == 0) {
        // 0x0020642C: sltu        $v0, $v1, $s1
        ctx->r2 = ctx->r3 < ctx->r17 ? 1 : 0;
            goto L_00206438;
    }
    // 0x0020642C: sltu        $v0, $v1, $s1
    ctx->r2 = ctx->r3 < ctx->r17 ? 1 : 0;
    // 0x00206430: bne         $v0, $zero, L_00206418
    if (ctx->r2 != 0) {
        // 0x00206434: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_00206418;
    }
    // 0x00206434: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
L_00206438:
    // 0x00206438: sltu        $v0, $v1, $s1
    ctx->r2 = ctx->r3 < ctx->r17 ? 1 : 0;
    // 0x0020643C: bne         $v0, $zero, L_0020647C
    if (ctx->r2 != 0) {
        // 0x00206440: addu        $v0, $s0, $zero
        ctx->r2 = ADD32(ctx->r16, 0);
            goto L_0020647C;
    }
    // 0x00206440: addu        $v0, $s0, $zero
    ctx->r2 = ADD32(ctx->r16, 0);
    // 0x00206444: beq         $s3, $zero, L_00206464
    if (ctx->r19 == 0) {
        // 0x00206448: nop
    
            goto L_00206464;
    }
    // 0x00206448: nop

    // 0x0020644C: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x00206450: addiu       $a0, $a0, 0x1CC0
    ctx->r4 = ADD32(ctx->r4, 0X1CC0);
    // 0x00206454: jal         0x002025F4
    // 0x00206458: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_002025F4(rdram, ctx);
        goto after_3;
    // 0x00206458: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_3:
    // 0x0020645C: j           L_00206478
    // 0x00206460: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
        goto L_00206478;
    // 0x00206460: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
L_00206464:
    // 0x00206464: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x00206468: addiu       $a0, $a0, 0x1CC0
    ctx->r4 = ADD32(ctx->r4, 0X1CC0);
    // 0x0020646C: jal         0x002024E0
    // 0x00206470: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_002024E0(rdram, ctx);
        goto after_4;
    // 0x00206470: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_4:
    // 0x00206474: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
L_00206478:
    // 0x00206478: addu        $v0, $s0, $zero
    ctx->r2 = ADD32(ctx->r16, 0);
L_0020647C:
    // 0x0020647C: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x00206480: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x00206484: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x00206488: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x0020648C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00206490: jr          $ra
    // 0x00206494: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x00206494: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_002563DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002563DC: addiu       $v0, $a0, 0xCD0
    ctx->r2 = ADD32(ctx->r4, 0XCD0);
    // 0x002563E0: addiu       $v1, $zero, -0x1
    ctx->r3 = ADD32(0, -0X1);
    // 0x002563E4: sw          $zero, 0xCD0($a0)
    MEM_W(0XCD0, ctx->r4) = 0;
    // 0x002563E8: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x002563EC: sw          $v1, 0x37C($v0)
    MEM_W(0X37C, ctx->r2) = ctx->r3;
    // 0x002563F0: sw          $zero, 0x8($v0)
    MEM_W(0X8, ctx->r2) = 0;
    // 0x002563F4: jr          $ra
    // 0x002563F8: sw          $zero, 0x1284($a0)
    MEM_W(0X1284, ctx->r4) = 0;
    return;
    // 0x002563F8: sw          $zero, 0x1284($a0)
    MEM_W(0X1284, ctx->r4) = 0;
;}
RECOMP_FUNC void func_0022441C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0022441C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00224420: addu        $v0, $a0, $zero
    ctx->r2 = ADD32(ctx->r4, 0);
    // 0x00224424: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x00224428: addu        $s2, $a1, $zero
    ctx->r18 = ADD32(ctx->r5, 0);
    // 0x0022442C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00224430: addu        $s1, $a2, $zero
    ctx->r17 = ADD32(ctx->r6, 0);
    // 0x00224434: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x00224438: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0022443C: lw          $a0, 0x70($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X70);
    // 0x00224440: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x00224444: addu        $at, $v0, $at
    ctx->r1 = ADD32(ctx->r2, ctx->r1);
    // 0x00224448: lw          $s0, -0x7058($at)
    ctx->r16 = MEM_W(ctx->r1, -0X7058);
    // 0x0022444C: jal         0x002017D4
    // 0x00224450: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_002017D4(rdram, ctx);
        goto after_0;
    // 0x00224450: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_0:
    // 0x00224454: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x00224458: jal         0x002017D4
    // 0x0022445C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_002017D4(rdram, ctx);
        goto after_1;
    // 0x0022445C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_1:
    // 0x00224460: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x00224464: jal         0x002017D4
    // 0x00224468: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_002017D4(rdram, ctx);
        goto after_2;
    // 0x00224468: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_2:
    // 0x0022446C: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x00224470: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00224474: jal         0x002017D4
    // 0x00224478: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_002017D4(rdram, ctx);
        goto after_3;
    // 0x00224478: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_3:
    // 0x0022447C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00224480: jal         0x00201818
    // 0x00224484: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_00201818(rdram, ctx);
        goto after_4;
    // 0x00224484: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_4:
    // 0x00224488: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0022448C: jal         0x002017D4
    // 0x00224490: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_002017D4(rdram, ctx);
        goto after_5;
    // 0x00224490: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_5:
    // 0x00224494: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x00224498: addu        $a2, $a1, $zero
    ctx->r6 = ADD32(ctx->r5, 0);
    // 0x0022449C: andi        $v1, $s2, 0x7
    ctx->r3 = ctx->r18 & 0X7;
    // 0x002244A0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x002244A4: beq         $s1, $zero, L_002244D0
    if (ctx->r17 == 0) {
        // 0x002244A8: sllv        $a0, $v0, $v1
        ctx->r4 = S32(ctx->r2 << (ctx->r3 & 31));
            goto L_002244D0;
    }
    // 0x002244A8: sllv        $a0, $v0, $v1
    ctx->r4 = S32(ctx->r2 << (ctx->r3 & 31));
    // 0x002244AC: bgez        $s2, L_002244B8
    if (SIGNED(ctx->r18) >= 0) {
        // 0x002244B0: addu        $v1, $s2, $zero
        ctx->r3 = ADD32(ctx->r18, 0);
            goto L_002244B8;
    }
    // 0x002244B0: addu        $v1, $s2, $zero
    ctx->r3 = ADD32(ctx->r18, 0);
    // 0x002244B4: addiu       $v1, $s2, 0x7
    ctx->r3 = ADD32(ctx->r18, 0X7);
L_002244B8:
    // 0x002244B8: sra         $v1, $v1, 3
    ctx->r3 = S32(SIGNED(ctx->r3) >> 3);
    // 0x002244BC: addu        $v1, $a1, $v1
    ctx->r3 = ADD32(ctx->r5, ctx->r3);
    // 0x002244C0: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x002244C4: or          $v0, $v0, $a0
    ctx->r2 = ctx->r2 | ctx->r4;
    // 0x002244C8: j           L_002244F4
    // 0x002244CC: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
        goto L_002244F4;
    // 0x002244CC: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
L_002244D0:
    // 0x002244D0: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x002244D4: bltzl       $a1, L_002244DC
    if (SIGNED(ctx->r5) < 0) {
        // 0x002244D8: addiu       $a1, $a1, 0x7
        ctx->r5 = ADD32(ctx->r5, 0X7);
            goto L_002244DC;
    }
    goto skip_0;
    // 0x002244D8: addiu       $a1, $a1, 0x7
    ctx->r5 = ADD32(ctx->r5, 0X7);
    skip_0:
L_002244DC:
    // 0x002244DC: sra         $v0, $a1, 3
    ctx->r2 = S32(SIGNED(ctx->r5) >> 3);
    // 0x002244E0: addu        $v0, $a2, $v0
    ctx->r2 = ADD32(ctx->r6, ctx->r2);
    // 0x002244E4: lbu         $v1, 0x0($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X0);
    // 0x002244E8: nor         $a0, $zero, $a0
    ctx->r4 = ~(0 | ctx->r4);
    // 0x002244EC: and         $v1, $v1, $a0
    ctx->r3 = ctx->r3 & ctx->r4;
    // 0x002244F0: sb          $v1, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r3;
L_002244F4:
    // 0x002244F4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x002244F8: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x002244FC: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00224500: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00224504: jr          $ra
    // 0x00224508: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00224508: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_00422728(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00422728: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x0042272C: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x00422730: sw          $v0, 0x9C0($at)
    MEM_W(0X9C0, ctx->r1) = ctx->r2;
    // 0x00422734: jr          $ra
    // 0x00422738: nop

    return;
    // 0x00422738: nop

;}
RECOMP_FUNC void func_002352F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002352F8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x002352FC: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x00235300: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x00235304: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00235308: lui         $s0, 0x800E
    ctx->r16 = S32(0X800E << 16);
    // 0x0023530C: addiu       $s0, $s0, -0x71DC
    ctx->r16 = ADD32(ctx->r16, -0X71DC);
    // 0x00235310: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x00235314: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00235318: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x0023531C: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x00235320: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x00235324: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x00235328: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x0023532C: lui         $v0, 0xE700
    ctx->r2 = S32(0XE700 << 16);
    // 0x00235330: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x00235334: jal         0x0020B5B8
    // 0x00235338: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    func_0020B5B8(rdram, ctx);
        goto after_0;
    // 0x00235338: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    after_0:
    // 0x0023533C: jal         0x00207FEC
    // 0x00235340: addiu       $a0, $zero, 0xE
    ctx->r4 = ADD32(0, 0XE);
    func_00207FEC(rdram, ctx);
        goto after_1;
    // 0x00235340: addiu       $a0, $zero, 0xE
    ctx->r4 = ADD32(0, 0XE);
    after_1:
    // 0x00235344: jal         0x00207A70
    // 0x00235348: addiu       $a0, $zero, 0x1C
    ctx->r4 = ADD32(0, 0X1C);
    func_00207A70(rdram, ctx);
        goto after_2;
    // 0x00235348: addiu       $a0, $zero, 0x1C
    ctx->r4 = ADD32(0, 0X1C);
    after_2:
    // 0x0023534C: lui         $a0, 0xD9F8
    ctx->r4 = S32(0XD9F8 << 16);
    // 0x00235350: ori         $a0, $a0, 0xFB7F
    ctx->r4 = ctx->r4 | 0XFB7F;
    // 0x00235354: lui         $a2, 0xD9FF
    ctx->r6 = S32(0XD9FF << 16);
    // 0x00235358: ori         $a2, $a2, 0xFFFF
    ctx->r6 = ctx->r6 | 0XFFFF;
    // 0x0023535C: lui         $a1, 0x20
    ctx->r5 = S32(0X20 << 16);
    // 0x00235360: ori         $a1, $a1, 0x4
    ctx->r5 = ctx->r5 | 0X4;
    // 0x00235364: lui         $a3, 0xE300
    ctx->r7 = S32(0XE300 << 16);
    // 0x00235368: ori         $a3, $a3, 0xA01
    ctx->r7 = ctx->r7 | 0XA01;
    // 0x0023536C: lui         $t0, 0xE300
    ctx->r8 = S32(0XE300 << 16);
    // 0x00235370: lw          $v1, 0x0($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X0);
    // 0x00235374: ori         $t0, $t0, 0xC00
    ctx->r8 = ctx->r8 | 0XC00;
    // 0x00235378: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
    // 0x0023537C: addiu       $v1, $v1, 0x8
    ctx->r3 = ADD32(ctx->r3, 0X8);
    // 0x00235380: sw          $v1, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r3;
    // 0x00235384: sw          $a0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r4;
    // 0x00235388: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x0023538C: addiu       $v0, $v1, 0x8
    ctx->r2 = ADD32(ctx->r3, 0X8);
    // 0x00235390: addiu       $a0, $v1, 0x10
    ctx->r4 = ADD32(ctx->r3, 0X10);
    // 0x00235394: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x00235398: sw          $a1, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r5;
    // 0x0023539C: addiu       $a1, $v1, 0x18
    ctx->r5 = ADD32(ctx->r3, 0X18);
    // 0x002353A0: sw          $a2, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r6;
    // 0x002353A4: sw          $a0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r4;
    // 0x002353A8: sw          $a3, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r7;
    // 0x002353AC: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x002353B0: lui         $v0, 0x8
    ctx->r2 = S32(0X8 << 16);
    // 0x002353B4: sw          $a1, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r5;
    // 0x002353B8: sw          $t0, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->r8;
    // 0x002353BC: sw          $v0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r2;
    // 0x002353C0: addiu       $v0, $v1, 0x20
    ctx->r2 = ADD32(ctx->r3, 0X20);
    // 0x002353C4: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x002353C8: lui         $v0, 0xD700
    ctx->r2 = S32(0XD700 << 16);
    // 0x002353CC: sw          $v0, 0x18($v1)
    MEM_W(0X18, ctx->r3) = ctx->r2;
    // 0x002353D0: jal         0x00207A54
    // 0x002353D4: sw          $zero, 0x4($a1)
    MEM_W(0X4, ctx->r5) = 0;
    entry_00207A54(rdram, ctx);
        goto after_3;
    // 0x002353D4: sw          $zero, 0x4($a1)
    MEM_W(0X4, ctx->r5) = 0;
    after_3:
    // 0x002353D8: lw          $s0, 0x7520($s2)
    ctx->r16 = MEM_W(ctx->r18, 0X7520);
    // 0x002353DC: beq         $s0, $zero, L_0023546C
    if (ctx->r16 == 0) {
        // 0x002353E0: nop
    
            goto L_0023546C;
    }
    // 0x002353E0: nop

L_002353E4:
    // 0x002353E4: lw          $v0, 0x34($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X34);
    // 0x002353E8: bgez        $v0, L_0023545C
    if (SIGNED(ctx->r2) >= 0) {
        // 0x002353EC: nop
    
            goto L_0023545C;
    }
    // 0x002353EC: nop

    // 0x002353F0: lw          $v0, 0x3C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X3C);
    // 0x002353F4: andi        $v0, $v0, 0x8
    ctx->r2 = ctx->r2 & 0X8;
    // 0x002353F8: beq         $v0, $zero, L_00235408
    if (ctx->r2 == 0) {
        // 0x002353FC: nop
    
            goto L_00235408;
    }
    // 0x002353FC: nop

    // 0x00235400: jal         0x0023417C
    // 0x00235404: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_0023417C(rdram, ctx);
        goto after_4;
    // 0x00235404: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
L_00235408:
    // 0x00235408: lw          $v0, 0x3C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X3C);
    // 0x0023540C: andi        $v0, $v0, 0x4
    ctx->r2 = ctx->r2 & 0X4;
    // 0x00235410: beq         $v0, $zero, L_00235420
    if (ctx->r2 == 0) {
        // 0x00235414: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_00235420;
    }
    // 0x00235414: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00235418: jal         0x00233FCC
    // 0x0023541C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_00233FCC(rdram, ctx);
        goto after_5;
    // 0x0023541C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_5:
L_00235420:
    // 0x00235420: lw          $v0, 0x48($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X48);
    // 0x00235424: slti        $v0, $v0, 0x2
    ctx->r2 = SIGNED(ctx->r2) < 0X2 ? 1 : 0;
    // 0x00235428: bne         $v0, $zero, L_0023545C
    if (ctx->r2 != 0) {
        // 0x0023542C: nop
    
            goto L_0023545C;
    }
    // 0x0023542C: nop

    // 0x00235430: lw          $v0, 0x34($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X34);
    // 0x00235434: bltz        $v0, L_00235450
    if (SIGNED(ctx->r2) < 0) {
        // 0x00235438: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_00235450;
    }
    // 0x00235438: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x0023543C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x00235440: jal         0x00234348
    // 0x00235444: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    func_00234348(rdram, ctx);
        goto after_6;
    // 0x00235444: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    after_6:
    // 0x00235448: j           L_0023545C
    // 0x0023544C: nop

        goto L_0023545C;
    // 0x0023544C: nop

L_00235450:
    // 0x00235450: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x00235454: jal         0x00234928
    // 0x00235458: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    func_00234928(rdram, ctx);
        goto after_7;
    // 0x00235458: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    after_7:
L_0023545C:
    // 0x0023545C: lw          $s0, 0x4($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X4);
    // 0x00235460: bne         $s0, $zero, L_002353E4
    if (ctx->r16 != 0) {
        // 0x00235464: nop
    
            goto L_002353E4;
    }
    // 0x00235464: nop

    // 0x00235468: lw          $s0, 0x7520($s2)
    ctx->r16 = MEM_W(ctx->r18, 0X7520);
L_0023546C:
    // 0x0023546C: beq         $s0, $zero, L_002354F8
    if (ctx->r16 == 0) {
        // 0x00235470: nop
    
            goto L_002354F8;
    }
    // 0x00235470: nop

L_00235474:
    // 0x00235474: lw          $v0, 0x34($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X34);
    // 0x00235478: blez        $v0, L_002354EC
    if (SIGNED(ctx->r2) <= 0) {
        // 0x0023547C: nop
    
            goto L_002354EC;
    }
    // 0x0023547C: nop

    // 0x00235480: lw          $v0, 0x3C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X3C);
    // 0x00235484: andi        $v0, $v0, 0x8
    ctx->r2 = ctx->r2 & 0X8;
    // 0x00235488: beq         $v0, $zero, L_00235498
    if (ctx->r2 == 0) {
        // 0x0023548C: nop
    
            goto L_00235498;
    }
    // 0x0023548C: nop

    // 0x00235490: jal         0x0023417C
    // 0x00235494: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_0023417C(rdram, ctx);
        goto after_8;
    // 0x00235494: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_8:
L_00235498:
    // 0x00235498: lw          $v0, 0x3C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X3C);
    // 0x0023549C: andi        $v0, $v0, 0x4
    ctx->r2 = ctx->r2 & 0X4;
    // 0x002354A0: beq         $v0, $zero, L_002354B0
    if (ctx->r2 == 0) {
        // 0x002354A4: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_002354B0;
    }
    // 0x002354A4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x002354A8: jal         0x00233FCC
    // 0x002354AC: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_00233FCC(rdram, ctx);
        goto after_9;
    // 0x002354AC: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_9:
L_002354B0:
    // 0x002354B0: lw          $v0, 0x48($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X48);
    // 0x002354B4: slti        $v0, $v0, 0x2
    ctx->r2 = SIGNED(ctx->r2) < 0X2 ? 1 : 0;
    // 0x002354B8: bne         $v0, $zero, L_002354EC
    if (ctx->r2 != 0) {
        // 0x002354BC: nop
    
            goto L_002354EC;
    }
    // 0x002354BC: nop

    // 0x002354C0: lw          $v0, 0x34($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X34);
    // 0x002354C4: bltz        $v0, L_002354E0
    if (SIGNED(ctx->r2) < 0) {
        // 0x002354C8: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_002354E0;
    }
    // 0x002354C8: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x002354CC: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x002354D0: jal         0x00234348
    // 0x002354D4: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    func_00234348(rdram, ctx);
        goto after_10;
    // 0x002354D4: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    after_10:
    // 0x002354D8: j           L_002354EC
    // 0x002354DC: nop

        goto L_002354EC;
    // 0x002354DC: nop

L_002354E0:
    // 0x002354E0: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x002354E4: jal         0x00234928
    // 0x002354E8: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    func_00234928(rdram, ctx);
        goto after_11;
    // 0x002354E8: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    after_11:
L_002354EC:
    // 0x002354EC: lw          $s0, 0x4($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X4);
    // 0x002354F0: bne         $s0, $zero, L_00235474
    if (ctx->r16 != 0) {
        // 0x002354F4: nop
    
            goto L_00235474;
    }
    // 0x002354F4: nop

L_002354F8:
    // 0x002354F8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x002354FC: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x00235500: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00235504: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00235508: jr          $ra
    // 0x0023550C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x0023550C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_002616B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002616B8: addiu       $sp, $sp, -0x110
    ctx->r29 = ADD32(ctx->r29, -0X110);
    // 0x002616BC: sw          $s2, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->r18;
    // 0x002616C0: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x002616C4: sw          $s0, 0xE0($sp)
    MEM_W(0XE0, ctx->r29) = ctx->r16;
    // 0x002616C8: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x002616CC: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    // 0x002616D0: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x002616D4: sw          $ra, 0xF0($sp)
    MEM_W(0XF0, ctx->r29) = ctx->r31;
    // 0x002616D8: sw          $s3, 0xEC($sp)
    MEM_W(0XEC, ctx->r29) = ctx->r19;
    // 0x002616DC: sw          $s1, 0xE4($sp)
    MEM_W(0XE4, ctx->r29) = ctx->r17;
    // 0x002616E0: sdc1        $f22, 0x108($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X108, ctx->r29);
    // 0x002616E4: sdc1        $f21, 0x100($sp)
    CHECK_FR(ctx, 21);
    SD(ctx->f21.u64, 0X100, ctx->r29);
    // 0x002616E8: sdc1        $f20, 0xF8($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0XF8, ctx->r29);
    // 0x002616EC: lw          $v1, 0x14($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X14);
    // 0x002616F0: addu        $v0, $a3, $zero
    ctx->r2 = ADD32(ctx->r7, 0);
    // 0x002616F4: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x002616F8: jal         0x00246108
    // 0x002616FC: addiu       $s3, $v1, 0x14
    ctx->r19 = ADD32(ctx->r3, 0X14);
    func_00246108(rdram, ctx);
        goto after_0;
    // 0x002616FC: addiu       $s3, $v1, 0x14
    ctx->r19 = ADD32(ctx->r3, 0X14);
    after_0:
    // 0x00261700: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x00261704: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x00261708: jal         0x0024599C
    // 0x0026170C: addiu       $a2, $sp, 0xA0
    ctx->r6 = ADD32(ctx->r29, 0XA0);
    func_0024599C(rdram, ctx);
        goto after_1;
    // 0x0026170C: addiu       $a2, $sp, 0xA0
    ctx->r6 = ADD32(ctx->r29, 0XA0);
    after_1:
    // 0x00261710: lw          $v1, 0x5C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X5C);
    // 0x00261714: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x00261718: bne         $v1, $v0, L_0026174C
    if (ctx->r3 != ctx->r2) {
        // 0x0026171C: nop
    
            goto L_0026174C;
    }
    // 0x0026171C: nop

    // 0x00261720: lw          $v0, 0x60($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X60);
    // 0x00261724: lb          $v1, 0x174($v0)
    ctx->r3 = MEM_B(ctx->r2, 0X174);
    // 0x00261728: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x0026172C: bne         $v1, $v0, L_0026174C
    if (ctx->r3 != ctx->r2) {
        // 0x00261730: nop
    
            goto L_0026174C;
    }
    // 0x00261730: nop

    // 0x00261734: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00261738: lwc1        $f22, 0x7AA8($at)
    ctx->f22.u32l = MEM_W(ctx->r1, 0X7AA8);
    // 0x0026173C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00261740: lwc1        $f14, 0x7AAC($at)
    ctx->f14.u32l = MEM_W(ctx->r1, 0X7AAC);
    // 0x00261744: j           L_002617D0
    // 0x00261748: nop

        goto L_002617D0;
    // 0x00261748: nop

L_0026174C:
    // 0x0026174C: lw          $v0, 0x5C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X5C);
    // 0x00261750: bne         $v0, $zero, L_00261770
    if (ctx->r2 != 0) {
        // 0x00261754: nop
    
            goto L_00261770;
    }
    // 0x00261754: nop

    // 0x00261758: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0026175C: lwc1        $f22, 0x7AB0($at)
    ctx->f22.u32l = MEM_W(ctx->r1, 0X7AB0);
    // 0x00261760: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00261764: lwc1        $f14, 0x7AB4($at)
    ctx->f14.u32l = MEM_W(ctx->r1, 0X7AB4);
    // 0x00261768: j           L_002617D0
    // 0x0026176C: nop

        goto L_002617D0;
    // 0x0026176C: nop

L_00261770:
    // 0x00261770: lwc1        $f0, 0x40($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X40);
    // 0x00261774: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00261778: lwc1        $f12, 0x7AB8($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X7AB8);
    // 0x0026177C: mul.s       $f12, $f0, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = MUL_S(ctx->f0.fl, ctx->f12.fl);
    // 0x00261780: jal         0x002974C0
    // 0x00261784: nop

    func_002974C0(rdram, ctx);
        goto after_2;
    // 0x00261784: nop

    after_2:
    // 0x00261788: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0026178C: lwc1        $f20, 0x7ABC($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X7ABC);
    // 0x00261790: add.s       $f0, $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f20.fl;
    // 0x00261794: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00261798: lwc1        $f1, 0x7AC0($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X7AC0);
    // 0x0026179C: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x002617A0: lwc1        $f12, 0x40($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X40);
    // 0x002617A4: add.s       $f12, $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f12.fl;
    // 0x002617A8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002617AC: lwc1        $f21, 0x7AC4($at)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r1, 0X7AC4);
    // 0x002617B0: mul.s       $f12, $f12, $f21
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f21.fl); 
    ctx->f12.fl = MUL_S(ctx->f12.fl, ctx->f21.fl);
    // 0x002617B4: jal         0x002974C0
    // 0x002617B8: add.s       $f22, $f0, $f20
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f22.fl = ctx->f0.fl + ctx->f20.fl;
    func_002974C0(rdram, ctx);
        goto after_3;
    // 0x002617B8: add.s       $f22, $f0, $f20
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f22.fl = ctx->f0.fl + ctx->f20.fl;
    after_3:
    // 0x002617BC: add.s       $f0, $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f20.fl;
    // 0x002617C0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002617C4: lwc1        $f1, 0x7AC8($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X7AC8);
    // 0x002617C8: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x002617CC: add.s       $f14, $f0, $f21
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f21.fl); 
    ctx->f14.fl = ctx->f0.fl + ctx->f21.fl;
L_002617D0:
    // 0x002617D0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002617D4: lwc1        $f20, 0x7ACC($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X7ACC);
    // 0x002617D8: lwc1        $f12, 0x118($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X118);
    // 0x002617DC: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x002617E0: jal         0x00211774
    // 0x002617E4: nop

    func_00211774(rdram, ctx);
        goto after_4;
    // 0x002617E4: nop

    after_4:
    // 0x002617E8: lwc1        $f12, 0xBC($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0XBC);
    // 0x002617EC: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x002617F0: mov.s       $f14, $f22
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 22);
    ctx->f14.fl = ctx->f22.fl;
    // 0x002617F4: jal         0x00211774
    // 0x002617F8: swc1        $f0, 0x118($s0)
    MEM_W(0X118, ctx->r16) = ctx->f0.u32l;
    func_00211774(rdram, ctx);
        goto after_5;
    // 0x002617F8: swc1        $f0, 0x118($s0)
    MEM_W(0X118, ctx->r16) = ctx->f0.u32l;
    after_5:
    // 0x002617FC: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x00261800: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x00261804: jal         0x0026872C
    // 0x00261808: swc1        $f0, 0xBC($s0)
    MEM_W(0XBC, ctx->r16) = ctx->f0.u32l;
    func_0026872C(rdram, ctx);
        goto after_6;
    // 0x00261808: swc1        $f0, 0xBC($s0)
    MEM_W(0XBC, ctx->r16) = ctx->f0.u32l;
    after_6:
    // 0x0026180C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x00261810: jal         0x00268A5C
    // 0x00261814: mov.s       $f21, $f0
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 0);
    ctx->f21.fl = ctx->f0.fl;
    func_00268A5C(rdram, ctx);
        goto after_7;
    // 0x00261814: mov.s       $f21, $f0
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 0);
    ctx->f21.fl = ctx->f0.fl;
    after_7:
    // 0x00261818: lwc1        $f1, 0x40($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X40);
    // 0x0026181C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00261820: lwc1        $f12, 0x7AD0($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X7AD0);
    // 0x00261824: mul.s       $f12, $f1, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = MUL_S(ctx->f1.fl, ctx->f12.fl);
    // 0x00261828: jal         0x002974C0
    // 0x0026182C: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    func_002974C0(rdram, ctx);
        goto after_8;
    // 0x0026182C: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    after_8:
    // 0x00261830: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00261834: lwc1        $f2, 0x7AD4($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X7AD4);
    // 0x00261838: mul.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f2.fl);
    // 0x0026183C: lwc1        $f1, 0xA0($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0XA0);
    // 0x00261840: add.s       $f14, $f1, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x00261844: c.lt.s      $f14, $f21
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 21);
    c1cs = ctx->f14.fl < ctx->f21.fl;
    // 0x00261848: nop

    // 0x0026184C: bc1tl       L_00261854
    if (c1cs) {
        // 0x00261850: add.s       $f14, $f14, $f2
        CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f14.fl = ctx->f14.fl + ctx->f2.fl;
            goto L_00261854;
    }
    goto skip_0;
    // 0x00261850: add.s       $f14, $f14, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f14.fl = ctx->f14.fl + ctx->f2.fl;
    skip_0:
L_00261854:
    // 0x00261854: c.lt.s      $f20, $f14
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f20.fl < ctx->f14.fl;
    // 0x00261858: nop

    // 0x0026185C: bc1tl       L_00261864
    if (c1cs) {
        // 0x00261860: sub.s       $f14, $f14, $f2
        CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f14.fl = ctx->f14.fl - ctx->f2.fl;
            goto L_00261864;
    }
    goto skip_1;
    // 0x00261860: sub.s       $f14, $f14, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f14.fl = ctx->f14.fl - ctx->f2.fl;
    skip_1:
L_00261864:
    // 0x00261864: c.lt.s      $f14, $f21
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 21);
    c1cs = ctx->f14.fl < ctx->f21.fl;
    // 0x00261868: nop

    // 0x0026186C: bc1f        L_0026187C
    if (!c1cs) {
        // 0x00261870: nop
    
            goto L_0026187C;
    }
    // 0x00261870: nop

    // 0x00261874: j           L_0026188C
    // 0x00261878: mov.s       $f14, $f21
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 21);
    ctx->f14.fl = ctx->f21.fl;
        goto L_0026188C;
    // 0x00261878: mov.s       $f14, $f21
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 21);
    ctx->f14.fl = ctx->f21.fl;
L_0026187C:
    // 0x0026187C: c.lt.s      $f20, $f14
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f20.fl < ctx->f14.fl;
    // 0x00261880: nop

    // 0x00261884: bc1tl       L_0026188C
    if (c1cs) {
        // 0x00261888: mov.s       $f14, $f20
        CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 20);
    ctx->f14.fl = ctx->f20.fl;
            goto L_0026188C;
    }
    goto skip_2;
    // 0x00261888: mov.s       $f14, $f20
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 20);
    ctx->f14.fl = ctx->f20.fl;
    skip_2:
L_0026188C:
    // 0x0026188C: lwc1        $f12, 0xB0($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0XB0);
    // 0x00261890: lui         $a2, 0x40A3
    ctx->r6 = S32(0X40A3 << 16);
    // 0x00261894: ori         $a2, $a2, 0xD70A
    ctx->r6 = ctx->r6 | 0XD70A;
    // 0x00261898: jal         0x00211774
    // 0x0026189C: nop

    func_00211774(rdram, ctx);
        goto after_9;
    // 0x0026189C: nop

    after_9:
    // 0x002618A0: swc1        $f0, 0xB0($s0)
    MEM_W(0XB0, ctx->r16) = ctx->f0.u32l;
    // 0x002618A4: lwc1        $f0, 0xB8($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0XB8);
    // 0x002618A8: addiu       $s1, $sp, 0x18
    ctx->r17 = ADD32(ctx->r29, 0X18);
    // 0x002618AC: add.s       $f0, $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f0.fl;
    // 0x002618B0: lwc1        $f12, 0x1C($s2)
    ctx->f12.u32l = MEM_W(ctx->r18, 0X1C);
    // 0x002618B4: lwc1        $f14, 0x60($s1)
    ctx->f14.u32l = MEM_W(ctx->r17, 0X60);
    // 0x002618B8: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x002618BC: jal         0x0021160C
    // 0x002618C0: nop

    func_0021160C(rdram, ctx);
        goto after_10;
    // 0x002618C0: nop

    after_10:
    // 0x002618C4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002618C8: lwc1        $f1, 0x7AD8($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X7AD8);
    // 0x002618CC: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x002618D0: nop

    // 0x002618D4: bc1t        L_002618F4
    if (c1cs) {
        // 0x002618D8: swc1        $f0, 0x1C($s2)
        MEM_W(0X1C, ctx->r18) = ctx->f0.u32l;
            goto L_002618F4;
    }
    // 0x002618D8: swc1        $f0, 0x1C($s2)
    MEM_W(0X1C, ctx->r18) = ctx->f0.u32l;
    // 0x002618DC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002618E0: lwc1        $f1, 0x7ADC($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X7ADC);
    // 0x002618E4: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x002618E8: nop

    // 0x002618EC: bc1f        L_002618FC
    if (!c1cs) {
        // 0x002618F0: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_002618FC;
    }
    // 0x002618F0: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
L_002618F4:
    // 0x002618F4: swc1        $f1, 0x1C($s2)
    MEM_W(0X1C, ctx->r18) = ctx->f_odd[(1 - 1) * 2];
    // 0x002618F8: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
L_002618FC:
    // 0x002618FC: lw          $a2, 0x118($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X118);
    // 0x00261900: lw          $a3, 0x4C($s1)
    ctx->r7 = MEM_W(ctx->r17, 0X4C);
    // 0x00261904: jal         0x00245BAC
    // 0x00261908: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_00245BAC(rdram, ctx);
        goto after_11;
    // 0x00261908: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_11:
    // 0x0026190C: lwc1        $f1, 0x40($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X40);
    // 0x00261910: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00261914: lwc1        $f0, 0x7AE0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X7AE0);
    // 0x00261918: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x0026191C: nop

    // 0x00261920: bc1f        L_002619F0
    if (!c1cs) {
        // 0x00261924: addiu       $v0, $zero, 0x5
        ctx->r2 = ADD32(0, 0X5);
            goto L_002619F0;
    }
    // 0x00261924: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x00261928: lbu         $v1, 0x4E($s3)
    ctx->r3 = MEM_BU(ctx->r19, 0X4E);
    // 0x0026192C: beq         $v1, $v0, L_002619BC
    if (ctx->r3 == ctx->r2) {
        // 0x00261930: nop
    
            goto L_002619BC;
    }
    // 0x00261930: nop

    // 0x00261934: lw          $v0, 0x5C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X5C);
    // 0x00261938: bne         $v0, $zero, L_002619F0
    if (ctx->r2 != 0) {
        // 0x0026193C: nop
    
            goto L_002619F0;
    }
    // 0x0026193C: nop

    // 0x00261940: lwc1        $f1, 0x80($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X80);
    // 0x00261944: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00261948: lwc1        $f0, 0x7AE4($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X7AE4);
    // 0x0026194C: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x00261950: nop

    // 0x00261954: bc1f        L_002619F0
    if (!c1cs) {
        // 0x00261958: nop
    
            goto L_002619F0;
    }
    // 0x00261958: nop

    // 0x0026195C: lwc1        $f2, 0x64($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X64);
    // 0x00261960: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x00261964: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x00261968: nop

    // 0x0026196C: bc1f        L_00261998
    if (!c1cs) {
        // 0x00261970: nop
    
            goto L_00261998;
    }
    // 0x00261970: nop

    // 0x00261974: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00261978: lwc1        $f1, 0x7AE8($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X7AE8);
    // 0x0026197C: neg.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = -ctx->f2.fl;
    // 0x00261980: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x00261984: nop

    // 0x00261988: bc1t        L_002619B0
    if (c1cs) {
        // 0x0026198C: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_002619B0;
    }
    // 0x0026198C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x00261990: j           L_002619F0
    // 0x00261994: nop

        goto L_002619F0;
    // 0x00261994: nop

L_00261998:
    // 0x00261998: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0026199C: lwc1        $f0, 0x7AEC($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X7AEC);
    // 0x002619A0: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x002619A4: nop

    // 0x002619A8: bc1f        L_002619F0
    if (!c1cs) {
        // 0x002619AC: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_002619F0;
    }
    // 0x002619AC: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
L_002619B0:
    // 0x002619B0: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x002619B4: j           L_002619E8
    // 0x002619B8: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
        goto L_002619E8;
    // 0x002619B8: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
L_002619BC:
    // 0x002619BC: lw          $v0, 0x5C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X5C);
    // 0x002619C0: bne         $v0, $zero, L_002619F0
    if (ctx->r2 != 0) {
        // 0x002619C4: nop
    
            goto L_002619F0;
    }
    // 0x002619C4: nop

    // 0x002619C8: lwc1        $f1, 0x80($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X80);
    // 0x002619CC: lwc1        $f0, 0x40($s3)
    ctx->f0.u32l = MEM_W(ctx->r19, 0X40);
    // 0x002619D0: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x002619D4: nop

    // 0x002619D8: bc1f        L_002619F0
    if (!c1cs) {
        // 0x002619DC: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_002619F0;
    }
    // 0x002619DC: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x002619E0: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x002619E4: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
L_002619E8:
    // 0x002619E8: jal         0x00243414
    // 0x002619EC: nop

    func_00243414(rdram, ctx);
        goto after_12;
    // 0x002619EC: nop

    after_12:
L_002619F0:
    // 0x002619F0: lw          $ra, 0xF0($sp)
    ctx->r31 = MEM_W(ctx->r29, 0XF0);
    // 0x002619F4: lw          $s3, 0xEC($sp)
    ctx->r19 = MEM_W(ctx->r29, 0XEC);
    // 0x002619F8: lw          $s2, 0xE8($sp)
    ctx->r18 = MEM_W(ctx->r29, 0XE8);
    // 0x002619FC: lw          $s1, 0xE4($sp)
    ctx->r17 = MEM_W(ctx->r29, 0XE4);
    // 0x00261A00: lw          $s0, 0xE0($sp)
    ctx->r16 = MEM_W(ctx->r29, 0XE0);
    // 0x00261A04: ldc1        $f22, 0x108($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X108);
    // 0x00261A08: ldc1        $f21, 0x100($sp)
    CHECK_FR(ctx, 21);
    ctx->f21.u64 = LD(ctx->r29, 0X100);
    // 0x00261A0C: ldc1        $f20, 0xF8($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0XF8);
    // 0x00261A10: jr          $ra
    // 0x00261A14: addiu       $sp, $sp, 0x110
    ctx->r29 = ADD32(ctx->r29, 0X110);
    return;
    // 0x00261A14: addiu       $sp, $sp, 0x110
    ctx->r29 = ADD32(ctx->r29, 0X110);
;}
RECOMP_FUNC void func_00276874(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00276874: lb          $v0, 0xE($a0)
    ctx->r2 = MEM_B(ctx->r4, 0XE);
    // 0x00276878: jr          $ra
    // 0x0027687C: nop

    return;
    // 0x0027687C: nop

;}
RECOMP_FUNC void func_002279A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002279A4: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x002279A8: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x002279AC: sw          $s5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r21;
    // 0x002279B0: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x002279B4: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x002279B8: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x002279BC: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x002279C0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x002279C4: lw          $s0, 0x3604($a0)
    ctx->r16 = MEM_W(ctx->r4, 0X3604);
    // 0x002279C8: beq         $s0, $zero, L_00227ABC
    if (ctx->r16 == 0) {
        // 0x002279CC: addu        $s2, $a1, $zero
        ctx->r18 = ADD32(ctx->r5, 0);
            goto L_00227ABC;
    }
    // 0x002279CC: addu        $s2, $a1, $zero
    ctx->r18 = ADD32(ctx->r5, 0);
    // 0x002279D0: lui         $s5, 0x3
    ctx->r21 = S32(0X3 << 16);
    // 0x002279D4: lui         $s4, 0x2
    ctx->r20 = S32(0X2 << 16);
    // 0x002279D8: lui         $s1, 0x800F
    ctx->r17 = S32(0X800F << 16);
    // 0x002279DC: addiu       $s1, $s1, 0x5A1C
    ctx->r17 = ADD32(ctx->r17, 0X5A1C);
    // 0x002279E0: addiu       $s3, $zero, 0x200
    ctx->r19 = ADD32(0, 0X200);
L_002279E4:
    // 0x002279E4: lw          $v0, 0x16C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X16C);
    // 0x002279E8: and         $v0, $v0, $s5
    ctx->r2 = ctx->r2 & ctx->r21;
    // 0x002279EC: bne         $v0, $s4, L_00227AB0
    if (ctx->r2 != ctx->r20) {
        // 0x002279F0: nop
    
            goto L_00227AB0;
    }
    // 0x002279F0: nop

    // 0x002279F4: jal         0x00267090
    // 0x002279F8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00267090(rdram, ctx);
        goto after_0;
    // 0x002279F8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x002279FC: beq         $v0, $zero, L_00227AB0
    if (ctx->r2 == 0) {
        // 0x00227A00: nop
    
            goto L_00227AB0;
    }
    // 0x00227A00: nop

    // 0x00227A04: lwc1        $f1, 0x0($s1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r17, 0X0);
    // 0x00227A08: lwc1        $f0, 0x14C($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X14C);
    // 0x00227A0C: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x00227A10: nop

    // 0x00227A14: bc1f        L_00227AB0
    if (!c1cs) {
        // 0x00227A18: nop
    
            goto L_00227AB0;
    }
    // 0x00227A18: nop

    // 0x00227A1C: lwc1        $f1, -0xC($s1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r17, -0XC);
    // 0x00227A20: lwc1        $f0, 0x158($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X158);
    // 0x00227A24: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x00227A28: nop

    // 0x00227A2C: bc1f        L_00227AB0
    if (!c1cs) {
        // 0x00227A30: nop
    
            goto L_00227AB0;
    }
    // 0x00227A30: nop

    // 0x00227A34: lwc1        $f1, 0x8($s1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r17, 0X8);
    // 0x00227A38: lwc1        $f0, 0x154($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X154);
    // 0x00227A3C: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x00227A40: nop

    // 0x00227A44: bc1f        L_00227AB0
    if (!c1cs) {
        // 0x00227A48: nop
    
            goto L_00227AB0;
    }
    // 0x00227A48: nop

    // 0x00227A4C: lwc1        $f1, -0x4($s1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r17, -0X4);
    // 0x00227A50: lwc1        $f0, 0x160($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X160);
    // 0x00227A54: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x00227A58: nop

    // 0x00227A5C: bc1f        L_00227AB0
    if (!c1cs) {
        // 0x00227A60: nop
    
            goto L_00227AB0;
    }
    // 0x00227A60: nop

    // 0x00227A64: lwc1        $f1, 0x4($s1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r17, 0X4);
    // 0x00227A68: lwc1        $f0, 0x150($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X150);
    // 0x00227A6C: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x00227A70: nop

    // 0x00227A74: bc1f        L_00227AB0
    if (!c1cs) {
        // 0x00227A78: nop
    
            goto L_00227AB0;
    }
    // 0x00227A78: nop

    // 0x00227A7C: lwc1        $f1, -0x8($s1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r17, -0X8);
    // 0x00227A80: lwc1        $f0, 0x15C($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X15C);
    // 0x00227A84: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x00227A88: nop

    // 0x00227A8C: bc1f        L_00227AB0
    if (!c1cs) {
        // 0x00227A90: nop
    
            goto L_00227AB0;
    }
    // 0x00227A90: nop

    // 0x00227A94: lw          $v1, 0x8EC($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X8EC);
    // 0x00227A98: beq         $v1, $s3, L_00227AB0
    if (ctx->r3 == ctx->r19) {
        // 0x00227A9C: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_00227AB0;
    }
    // 0x00227A9C: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x00227AA0: addu        $v0, $s2, $v0
    ctx->r2 = ADD32(ctx->r18, ctx->r2);
    // 0x00227AA4: sw          $s0, 0xEC($v0)
    MEM_W(0XEC, ctx->r2) = ctx->r16;
    // 0x00227AA8: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
    // 0x00227AAC: sw          $v0, 0x8EC($s2)
    MEM_W(0X8EC, ctx->r18) = ctx->r2;
L_00227AB0:
    // 0x00227AB0: lw          $s0, 0x1AC($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X1AC);
    // 0x00227AB4: bne         $s0, $zero, L_002279E4
    if (ctx->r16 != 0) {
        // 0x00227AB8: nop
    
            goto L_002279E4;
    }
    // 0x00227AB8: nop

L_00227ABC:
    // 0x00227ABC: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x00227AC0: lw          $s5, 0x24($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X24);
    // 0x00227AC4: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x00227AC8: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x00227ACC: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x00227AD0: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00227AD4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00227AD8: jr          $ra
    // 0x00227ADC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x00227ADC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_0041D84C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041D84C: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x0041D850: addiu       $v1, $v1, -0x5350
    ctx->r3 = ADD32(ctx->r3, -0X5350);
    // 0x0041D854: lw          $v0, 0x28($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X28);
    // 0x0041D858: bne         $v0, $zero, L_0041D878
    if (ctx->r2 != 0) {
        // 0x0041D85C: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_0041D878;
    }
    // 0x0041D85C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0041D860: lw          $v0, 0x1C($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X1C);
    // 0x0041D864: bnel        $v0, $zero, L_0041D87C
    if (ctx->r2 != 0) {
        // 0x0041D868: addiu       $a0, $zero, 0x1
        ctx->r4 = ADD32(0, 0X1);
            goto L_0041D87C;
    }
    goto skip_0;
    // 0x0041D868: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    skip_0:
    // 0x0041D86C: lw          $v0, 0x20($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X20);
    // 0x0041D870: beq         $v0, $zero, L_0041D87C
    if (ctx->r2 == 0) {
        // 0x0041D874: nop
    
            goto L_0041D87C;
    }
    // 0x0041D874: nop

L_0041D878:
    // 0x0041D878: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
L_0041D87C:
    // 0x0041D87C: jr          $ra
    // 0x0041D880: addu        $v0, $a0, $zero
    ctx->r2 = ADD32(ctx->r4, 0);
    return;
    // 0x0041D880: addu        $v0, $a0, $zero
    ctx->r2 = ADD32(ctx->r4, 0);
;}
RECOMP_FUNC void func_0025A1A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0025A1A4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0025A1A8: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x0025A1AC: lw          $v0, 0x14($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X14);
    // 0x0025A1B0: lhu         $a3, 0x78($v0)
    ctx->r7 = MEM_HU(ctx->r2, 0X78);
    // 0x0025A1B4: lui         $a2, 0x800B
    ctx->r6 = S32(0X800B << 16);
    // 0x0025A1B8: addiu       $a2, $a2, -0x498
    ctx->r6 = ADD32(ctx->r6, -0X498);
    // 0x0025A1BC: jal         0x00245A98
    // 0x0025A1C0: nop

    func_00245A98(rdram, ctx);
        goto after_0;
    // 0x0025A1C0: nop

    after_0:
    // 0x0025A1C4: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x0025A1C8: jr          $ra
    // 0x0025A1CC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0025A1CC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00267F04(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00267F04: lw          $v0, 0x48($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X48);
    // 0x00267F08: jr          $ra
    // 0x00267F0C: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    return;
    // 0x00267F0C: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
;}
RECOMP_FUNC void func_00265D04(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00265D04: lw          $v0, 0x14($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X14);
    // 0x00265D08: lw          $v0, 0x40($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X40);
    // 0x00265D0C: jr          $ra
    // 0x00265D10: nop

    return;
    // 0x00265D10: nop

;}
RECOMP_FUNC void func_00211D40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00211D40: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00211D44: lw          $v1, 0x30($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X30);
    // 0x00211D48: lw          $a2, 0x34($a0)
    ctx->r6 = MEM_W(ctx->r4, 0X34);
    // 0x00211D4C: lw          $a3, 0x38($a0)
    ctx->r7 = MEM_W(ctx->r4, 0X38);
    // 0x00211D50: sw          $v1, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r3;
    // 0x00211D54: sw          $a2, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r6;
    // 0x00211D58: sw          $a3, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r7;
    // 0x00211D5C: lwc1        $f0, 0x0($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X0);
    // 0x00211D60: lwc1        $f1, 0x0($a0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r4, 0X0);
    // 0x00211D64: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x00211D68: lwc1        $f2, 0x0($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X0);
    // 0x00211D6C: mul.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x00211D70: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    // 0x00211D74: lwc1        $f1, 0x8($a1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r5, 0X8);
    // 0x00211D78: lwc1        $f0, 0x8($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X8);
    // 0x00211D7C: sub.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl - ctx->f0.fl;
    // 0x00211D80: lwc1        $f0, 0x8($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X8);
    // 0x00211D84: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00211D88: mtc1        $zero, $f3
    ctx->f_odd[(3 - 1) * 2] = 0;
    // 0x00211D8C: add.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f0.fl;
    // 0x00211D90: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x00211D94: c.le.s      $f2, $f3
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 3);
    c1cs = ctx->f2.fl <= ctx->f3.fl;
    // 0x00211D98: nop

    // 0x00211D9C: bc1t        L_00211DA8
    if (c1cs) {
        // 0x00211DA0: swc1        $f1, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
            goto L_00211DA8;
    }
    // 0x00211DA0: swc1        $f1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    // 0x00211DA4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_00211DA8:
    // 0x00211DA8: jr          $ra
    // 0x00211DAC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00211DAC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_0020F70C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0020F70C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x0020F710: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0020F714: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x0020F718: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x0020F71C: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x0020F720: lwc1        $f2, 0x0($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X0);
    // 0x0020F724: mul.s       $f2, $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x0020F728: lwc1        $f1, 0x4($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X4);
    // 0x0020F72C: mul.s       $f1, $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f1.fl);
    // 0x0020F730: lwc1        $f0, 0x8($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X8);
    // 0x0020F734: mul.s       $f0, $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x0020F738: mtc1        $a1, $f20
    ctx->f20.u32l = ctx->r5;
    // 0x0020F73C: mul.s       $f3, $f20, $f20
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f3.fl = MUL_S(ctx->f20.fl, ctx->f20.fl);
    // 0x0020F740: add.s       $f2, $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f1.fl;
    // 0x0020F744: add.s       $f12, $f2, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = ctx->f2.fl + ctx->f0.fl;
    // 0x0020F748: c.lt.s      $f3, $f12
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f3.fl < ctx->f12.fl;
    // 0x0020F74C: nop

    // 0x0020F750: bc1f        L_0020F788
    if (!c1cs) {
        // 0x0020F754: nop
    
            goto L_0020F788;
    }
    // 0x0020F754: nop

    // 0x0020F758: jal         0x00298470
    // 0x0020F75C: nop

    func_00298470(rdram, ctx);
        goto after_0;
    // 0x0020F75C: nop

    after_0:
    // 0x0020F760: lwc1        $f3, 0x0($s0)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r16, 0X0);
    // 0x0020F764: div.s       $f0, $f20, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = DIV_S(ctx->f20.fl, ctx->f0.fl);
    // 0x0020F768: mul.s       $f3, $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f3.fl = MUL_S(ctx->f3.fl, ctx->f0.fl);
    // 0x0020F76C: lwc1        $f2, 0x4($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X4);
    // 0x0020F770: mul.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x0020F774: lwc1        $f1, 0x8($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X8);
    // 0x0020F778: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x0020F77C: swc1        $f3, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f_odd[(3 - 1) * 2];
    // 0x0020F780: swc1        $f2, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f2.u32l;
    // 0x0020F784: swc1        $f1, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f_odd[(1 - 1) * 2];
L_0020F788:
    // 0x0020F788: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x0020F78C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0020F790: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x0020F794: jr          $ra
    // 0x0020F798: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x0020F798: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_0021E5D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0021E5D4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0021E5D8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0021E5DC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x0021E5E0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x0021E5E4: lw          $v0, 0x14($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X14);
    // 0x0021E5E8: lw          $a1, 0x0($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X0);
    // 0x0021E5EC: sltiu       $v0, $a1, 0xD
    ctx->r2 = ctx->r5 < 0XD ? 1 : 0;
    // 0x0021E5F0: bne         $v0, $zero, L_0021E610
    if (ctx->r2 != 0) {
        // 0x0021E5F4: addiu       $v0, $zero, 0xB
        ctx->r2 = ADD32(0, 0XB);
            goto L_0021E610;
    }
    // 0x0021E5F4: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
L_0021E5F8:
    // 0x0021E5F8: j           L_0021E660
    // 0x0021E5FC: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
        goto L_0021E660;
    // 0x0021E5FC: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_0021E600:
    // 0x0021E600: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0021E604: addiu       $v0, $v0, -0x166C
    ctx->r2 = ADD32(ctx->r2, -0X166C);
    // 0x0021E608: j           L_0021E660
    // 0x0021E60C: nop

        goto L_0021E660;
    // 0x0021E60C: nop

L_0021E610:
    // 0x0021E610: bne         $a1, $v0, L_0021E654
    if (ctx->r5 != ctx->r2) {
        // 0x0021E614: sll         $v0, $a1, 2
        ctx->r2 = S32(ctx->r5 << 2);
            goto L_0021E654;
    }
    // 0x0021E614: sll         $v0, $a1, 2
    ctx->r2 = S32(ctx->r5 << 2);
    // 0x0021E618: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x0021E61C: lw          $v0, -0x6788($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X6788);
    // 0x0021E620: blez        $v0, L_0021E650
    if (SIGNED(ctx->r2) <= 0) {
        // 0x0021E624: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_0021E650;
    }
    // 0x0021E624: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0021E628: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    // 0x0021E62C: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x0021E630: lw          $v1, -0x678C($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X678C);
L_0021E634:
    // 0x0021E634: beq         $v1, $s0, L_0021E5F8
    if (ctx->r3 == ctx->r16) {
        // 0x0021E638: addiu       $v0, $v1, 0x288
        ctx->r2 = ADD32(ctx->r3, 0X288);
            goto L_0021E5F8;
    }
    // 0x0021E638: addiu       $v0, $v1, 0x288
    ctx->r2 = ADD32(ctx->r3, 0X288);
    // 0x0021E63C: beq         $v0, $s0, L_0021E600
    if (ctx->r2 == ctx->r16) {
        // 0x0021E640: addiu       $a0, $a0, 0x1
        ctx->r4 = ADD32(ctx->r4, 0X1);
            goto L_0021E600;
    }
    // 0x0021E640: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x0021E644: slt         $v0, $a0, $a2
    ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r6) ? 1 : 0;
    // 0x0021E648: bne         $v0, $zero, L_0021E634
    if (ctx->r2 != 0) {
        // 0x0021E64C: addiu       $v1, $v1, 0x1328
        ctx->r3 = ADD32(ctx->r3, 0X1328);
            goto L_0021E634;
    }
    // 0x0021E64C: addiu       $v1, $v1, 0x1328
    ctx->r3 = ADD32(ctx->r3, 0X1328);
L_0021E650:
    // 0x0021E650: sll         $v0, $a1, 2
    ctx->r2 = S32(ctx->r5 << 2);
L_0021E654:
    // 0x0021E654: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0021E658: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x0021E65C: lw          $v0, -0x34A0($at)
    ctx->r2 = MEM_W(ctx->r1, -0X34A0);
L_0021E660:
    // 0x0021E660: beq         $v0, $zero, L_0021E67C
    if (ctx->r2 == 0) {
        // 0x0021E664: nop
    
            goto L_0021E67C;
    }
    // 0x0021E664: nop

    // 0x0021E668: lw          $v0, 0x4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4);
    // 0x0021E66C: beq         $v0, $zero, L_0021E67C
    if (ctx->r2 == 0) {
        // 0x0021E670: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_0021E67C;
    }
    // 0x0021E670: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0021E674: jalr        $v0
    // 0x0021E678: addiu       $a1, $s0, 0x140
    ctx->r5 = ADD32(ctx->r16, 0X140);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x0021E678: addiu       $a1, $s0, 0x140
    ctx->r5 = ADD32(ctx->r16, 0X140);
    after_0:
L_0021E67C:
    // 0x0021E67C: lw          $v0, 0xD4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XD4);
    // 0x0021E680: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x0021E684: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x0021E688: beq         $v0, $zero, L_0021E69C
    if (ctx->r2 == 0) {
        // 0x0021E68C: nop
    
            goto L_0021E69C;
    }
    // 0x0021E68C: nop

    // 0x0021E690: lbu         $v0, 0x207($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X207);
    // 0x0021E694: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x0021E698: sb          $v0, 0x207($s0)
    MEM_B(0X207, ctx->r16) = ctx->r2;
L_0021E69C:
    // 0x0021E69C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x0021E6A0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0021E6A4: jr          $ra
    // 0x0021E6A8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0021E6A8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00267F34(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00267F34: lw          $v0, 0x144($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X144);
    // 0x00267F38: blez        $v0, L_00267F50
    if (SIGNED(ctx->r2) <= 0) {
        // 0x00267F3C: addu        $v1, $zero, $zero
        ctx->r3 = ADD32(0, 0);
            goto L_00267F50;
    }
    // 0x00267F3C: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
    // 0x00267F40: lw          $v0, 0x48($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X48);
    // 0x00267F44: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x00267F48: beq         $v0, $zero, L_00267F54
    if (ctx->r2 == 0) {
        // 0x00267F4C: nop
    
            goto L_00267F54;
    }
    // 0x00267F4C: nop

L_00267F50:
    // 0x00267F50: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_00267F54:
    // 0x00267F54: jr          $ra
    // 0x00267F58: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
    return;
    // 0x00267F58: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
;}
RECOMP_FUNC void func_0044E6FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_004157DC:
    // 0x0044E6FC: addiu       $sp, $sp, -0xE8
    ctx->r29 = ADD32(ctx->r29, -0XE8);
L_004159D8:
    // 0x0044E700: sw          $s3, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->r19;
L_00415C50:
    // 0x0044E704: addu        $s3, $a0, $zero
    ctx->r19 = ADD32(ctx->r4, 0);
L_00415C60:
    // 0x0044E708: addu        $a0, $a1, $zero
    ctx->r4 = ADD32(ctx->r5, 0);
    // 0x0044E70C: sw          $s2, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->r18;
    // 0x0044E710: sw          $ra, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->r31;
    // 0x0044E714: sw          $fp, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->r30;
    // 0x0044E718: sw          $s7, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->r23;
    // 0x0044E71C: sw          $s6, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->r22;
    // 0x0044E720: sw          $s5, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->r21;
    // 0x0044E724: sw          $s4, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->r20;
    // 0x0044E728: sw          $s1, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r17;
    // 0x0044E72C: sw          $s0, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r16;
    // 0x0044E730: sdc1        $f23, 0xE0($sp)
    CHECK_FR(ctx, 23);
    SD(ctx->f23.u64, 0XE0, ctx->r29);
    // 0x0044E734: sdc1        $f22, 0xD8($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0XD8, ctx->r29);
    // 0x0044E738: sdc1        $f21, 0xD0($sp)
    CHECK_FR(ctx, 21);
    SD(ctx->f21.u64, 0XD0, ctx->r29);
    // 0x0044E73C: sdc1        $f20, 0xC8($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0XC8, ctx->r29);
    // 0x0044E740: jal         0x00416B28
    // 0x0044E744: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    func_00416B28(rdram, ctx);
        goto after_0;
    // 0x0044E744: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    after_0:
    // 0x0044E748: addiu       $v1, $zero, 0x400
    ctx->r3 = ADD32(0, 0X400);
    // 0x0044E74C: addiu       $a0, $zero, -0x400
    ctx->r4 = ADD32(0, -0X400);
    // 0x0044E750: sw          $v1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r3;
    // 0x0044E754: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    // 0x0044E758: sw          $v1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r3;
    // 0x0044E75C: sw          $a0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r4;
    // 0x0044E760: sw          $zero, 0x54($sp)
    MEM_W(0X54, ctx->r29) = 0;
    // 0x0044E764: sw          $zero, 0x58($sp)
    MEM_W(0X58, ctx->r29) = 0;
    // 0x0044E768: sw          $zero, 0x64($sp)
    MEM_W(0X64, ctx->r29) = 0;
    // 0x0044E76C: sw          $zero, 0x68($sp)
    MEM_W(0X68, ctx->r29) = 0;
    // 0x0044E770: sw          $zero, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = 0;
    // 0x0044E774: sw          $zero, 0x70($sp)
    MEM_W(0X70, ctx->r29) = 0;
    // 0x0044E778: lw          $v1, 0x10($s3)
    ctx->r3 = MEM_W(ctx->r19, 0X10);
    // 0x0044E77C: blez        $v1, L_0044E850
    if (SIGNED(ctx->r3) <= 0) {
        // 0x0044E780: addu        $s6, $v0, $zero
        ctx->r22 = ADD32(ctx->r2, 0);
            goto L_0044E850;
    }
    // 0x0044E780: addu        $s6, $v0, $zero
    ctx->r22 = ADD32(ctx->r2, 0);
    // 0x0044E784: lui         $fp, 0x80
    ctx->r30 = S32(0X80 << 16);
    // 0x0044E788: lui         $s7, 0x2000
    ctx->r23 = S32(0X2000 << 16);
    // 0x0044E78C: addiu       $s5, $zero, 0x400
    ctx->r21 = ADD32(0, 0X400);
    // 0x0044E790: addu        $s4, $a0, $zero
    ctx->r20 = ADD32(ctx->r4, 0);
    // 0x0044E794: addu        $s1, $s2, $zero
    ctx->r17 = ADD32(ctx->r18, 0);
L_0044E798:
    // 0x0044E798: lw          $v0, 0xC($s3)
    ctx->r2 = MEM_W(ctx->r19, 0XC);
    // 0x0044E79C: addu        $s0, $v0, $s1
    ctx->r16 = ADD32(ctx->r2, ctx->r17);
    // 0x0044E7A0: lw          $v1, 0x8($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X8);
    // 0x0044E7A4: and         $v0, $v1, $fp
    ctx->r2 = ctx->r3 & ctx->r30;
    // 0x0044E7A8: beq         $v0, $zero, L_0044E83C
    if (ctx->r2 == 0) {
        // 0x0044E7AC: and         $v0, $v1, $s7
        ctx->r2 = ctx->r3 & ctx->r23;
            goto L_0044E83C;
    }
    // 0x0044E7AC: and         $v0, $v1, $s7
    ctx->r2 = ctx->r3 & ctx->r23;
    // 0x0044E7B0: beq         $v0, $zero, L_0044E7D4
    if (ctx->r2 == 0) {
        // 0x0044E7B4: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_0044E7D4;
    }
    // 0x0044E7B4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0044E7B8: sw          $s5, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r21;
    // 0x0044E7BC: sw          $s4, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r20;
    // 0x0044E7C0: sw          $s5, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r21;
    // 0x0044E7C4: sw          $s4, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r20;
    // 0x0044E7C8: sw          $zero, 0x54($sp)
    MEM_W(0X54, ctx->r29) = 0;
    // 0x0044E7CC: j           L_004157DC
    // 0x0044E7D0: sw          $zero, 0x58($sp)
    MEM_W(0X58, ctx->r29) = 0;
    entry_004157DC(rdram, ctx);
    return;
    // 0x0044E7D0: sw          $zero, 0x58($sp)
    MEM_W(0X58, ctx->r29) = 0;
L_0044E7D4:
    // 0x0044E7D4: jal         0x0041363C
    // 0x0044E7D8: addiu       $a1, $sp, 0x50
    ctx->r5 = ADD32(ctx->r29, 0X50);
    func_0041363C(rdram, ctx);
        goto after_1;
    // 0x0044E7D8: addiu       $a1, $sp, 0x50
    ctx->r5 = ADD32(ctx->r29, 0X50);
    after_1:
    // 0x0044E7DC: lw          $v1, 0x64($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X64);
    // 0x0044E7E0: lw          $a0, 0x3C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X3C);
    // 0x0044E7E4: slt         $v0, $a0, $v1
    ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x0044E7E8: bnel        $v0, $zero, L_0044E7F0
    if (ctx->r2 != 0) {
        // 0x0044E7EC: addu        $v1, $a0, $zero
        ctx->r3 = ADD32(ctx->r4, 0);
            goto L_0044E7F0;
    }
    goto skip_0;
    // 0x0044E7EC: addu        $v1, $a0, $zero
    ctx->r3 = ADD32(ctx->r4, 0);
    skip_0:
L_0044E7F0:
    // 0x0044E7F0: lw          $a0, 0x68($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X68);
    // 0x0044E7F4: lw          $a1, 0x40($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X40);
    // 0x0044E7F8: slt         $v0, $a0, $a1
    ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x0044E7FC: beq         $v0, $zero, L_0044E808
    if (ctx->r2 == 0) {
        // 0x0044E800: sw          $v1, 0x3C($sp)
        MEM_W(0X3C, ctx->r29) = ctx->r3;
            goto L_0044E808;
    }
    // 0x0044E800: sw          $v1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r3;
    // 0x0044E804: addu        $a0, $a1, $zero
    ctx->r4 = ADD32(ctx->r5, 0);
L_0044E808:
    // 0x0044E808: lw          $a1, 0x6C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X6C);
    // 0x0044E80C: lw          $v1, 0x44($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X44);
    // 0x0044E810: slt         $v0, $v1, $a1
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x0044E814: beq         $v0, $zero, L_0044E820
    if (ctx->r2 == 0) {
        // 0x0044E818: sw          $a0, 0x40($sp)
        MEM_W(0X40, ctx->r29) = ctx->r4;
            goto L_0044E820;
    }
    // 0x0044E818: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    // 0x0044E81C: addu        $a1, $v1, $zero
    ctx->r5 = ADD32(ctx->r3, 0);
L_0044E820:
    // 0x0044E820: lw          $v1, 0x70($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X70);
    // 0x0044E824: lw          $a0, 0x48($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X48);
    // 0x0044E828: slt         $v0, $v1, $a0
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x0044E82C: beq         $v0, $zero, L_0044E838
    if (ctx->r2 == 0) {
        // 0x0044E830: sw          $a1, 0x44($sp)
        MEM_W(0X44, ctx->r29) = ctx->r5;
            goto L_0044E838;
    }
    // 0x0044E830: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x0044E834: addu        $v1, $a0, $zero
    ctx->r3 = ADD32(ctx->r4, 0);
L_0044E838:
    // 0x0044E838: sw          $v1, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r3;
L_0044E83C:
    // 0x0044E83C: lw          $v0, 0x10($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X10);
    // 0x0044E840: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x0044E844: slt         $v0, $s2, $v0
    ctx->r2 = SIGNED(ctx->r18) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x0044E848: bne         $v0, $zero, L_0044E798
    if (ctx->r2 != 0) {
        // 0x0044E84C: addiu       $s1, $s1, 0x28
        ctx->r17 = ADD32(ctx->r17, 0X28);
            goto L_0044E798;
    }
    // 0x0044E84C: addiu       $s1, $s1, 0x28
    ctx->r17 = ADD32(ctx->r17, 0X28);
L_0044E850:
    // 0x0044E850: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x0044E854: lw          $v0, 0x3C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X3C);
    // 0x0044E858: lw          $a1, 0x48($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X48);
    // 0x0044E85C: lw          $v1, 0x44($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X44);
    // 0x0044E860: subu        $a0, $a0, $v0
    ctx->r4 = SUB32(ctx->r4, ctx->r2);
    // 0x0044E864: subu        $a1, $a1, $v1
    ctx->r5 = SUB32(ctx->r5, ctx->r3);
    // 0x0044E868: sw          $a0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r4;
    // 0x0044E86C: bltz        $a0, L_0044ECA8
    if (SIGNED(ctx->r4) < 0) {
        // 0x0044E870: sw          $a1, 0x30($sp)
        MEM_W(0X30, ctx->r29) = ctx->r5;
            goto L_0044ECA8;
    }
    // 0x0044E870: sw          $a1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r5;
    // 0x0044E874: bltz        $a1, L_0044ECA8
    if (SIGNED(ctx->r5) < 0) {
        // 0x0044E878: nop
    
            goto L_0044ECA8;
    }
    // 0x0044E878: nop

    // 0x0044E87C: lwc1        $f0, 0x288($s6)
    ctx->f0.u32l = MEM_W(ctx->r22, 0X288);
    // 0x0044E880: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0044E884: lwc1        $f4, 0xC1C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0XC1C);
    // 0x0044E888: mul.s       $f0, $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x0044E88C: lwc1        $f2, 0x290($s6)
    ctx->f2.u32l = MEM_W(ctx->r22, 0X290);
    // 0x0044E890: lh          $v0, 0x2($s3)
    ctx->r2 = MEM_H(ctx->r19, 0X2);
    // 0x0044E894: lwc1        $f3, 0x28C($s6)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r22, 0X28C);
    // 0x0044E898: lwc1        $f1, 0x294($s6)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r22, 0X294);
    // 0x0044E89C: mul.s       $f3, $f3, $f4
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f3.fl = MUL_S(ctx->f3.fl, ctx->f4.fl);
    // 0x0044E8A0: lh          $v1, 0x4($s3)
    ctx->r3 = MEM_H(ctx->r19, 0X4);
    // 0x0044E8A4: sw          $zero, 0x54($sp)
    MEM_W(0X54, ctx->r29) = 0;
    // 0x0044E8A8: sw          $zero, 0x58($sp)
    MEM_W(0X58, ctx->r29) = 0;
    // 0x0044E8AC: add.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f0.fl;
    // 0x0044E8B0: sw          $zero, 0x64($sp)
    MEM_W(0X64, ctx->r29) = 0;
    // 0x0044E8B4: sw          $zero, 0x68($sp)
    MEM_W(0X68, ctx->r29) = 0;
    // 0x0044E8B8: add.s       $f1, $f1, $f3
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f3.fl;
    // 0x0044E8BC: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x0044E8C0: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x0044E8C4: srl         $v0, $a0, 31
    ctx->r2 = S32(U32(ctx->r4) >> 31);
    // 0x0044E8C8: add.s       $f23, $f2, $f0
    CHECK_FR(ctx, 23);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f23.fl = ctx->f2.fl + ctx->f0.fl;
    // 0x0044E8CC: addu        $v0, $a0, $v0
    ctx->r2 = ADD32(ctx->r4, ctx->r2);
    // 0x0044E8D0: mtc1        $v1, $f0
    ctx->f0.u32l = ctx->r3;
    // 0x0044E8D4: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x0044E8D8: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x0044E8DC: sra         $v0, $v0, 1
    ctx->r2 = S32(SIGNED(ctx->r2) >> 1);
    // 0x0044E8E0: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x0044E8E4: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x0044E8E8: sub.s       $f4, $f23, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 23);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f23.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = ctx->f23.fl - ctx->f0.fl;
    // 0x0044E8EC: srl         $v0, $a1, 31
    ctx->r2 = S32(U32(ctx->r5) >> 31);
    // 0x0044E8F0: addu        $v0, $a1, $v0
    ctx->r2 = ADD32(ctx->r5, ctx->r2);
    // 0x0044E8F4: add.s       $f0, $f23, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 23);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f23.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f23.fl + ctx->f0.fl;
    // 0x0044E8F8: sra         $v0, $v0, 1
    ctx->r2 = S32(SIGNED(ctx->r2) >> 1);
    // 0x0044E8FC: mtc1        $v0, $f2
    ctx->f2.u32l = ctx->r2;
    // 0x0044E900: cvt.s.w     $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    ctx->f2.fl = CVT_S_W(ctx->f2.u32l);
    // 0x0044E904: sub.s       $f3, $f1, $f2
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f3.fl = ctx->f1.fl - ctx->f2.fl;
    // 0x0044E908: sw          $zero, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = 0;
    // 0x0044E90C: sw          $zero, 0x70($sp)
    MEM_W(0X70, ctx->r29) = 0;
    // 0x0044E910: add.s       $f1, $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f2.fl;
    // 0x0044E914: trunc.w.s   $f5, $f4
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 4);
    ctx->f_odd[(5 - 1) * 2] = TRUNC_W_S(ctx->f4.fl);
    // 0x0044E918: swc1        $f5, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f_odd[(5 - 1) * 2];
    // 0x0044E91C: trunc.w.s   $f5, $f0
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(5 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x0044E920: swc1        $f5, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f_odd[(5 - 1) * 2];
    // 0x0044E924: trunc.w.s   $f5, $f3
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 3);
    ctx->f_odd[(5 - 1) * 2] = TRUNC_W_S(ctx->f3.fl);
    // 0x0044E928: swc1        $f5, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f_odd[(5 - 1) * 2];
    // 0x0044E92C: trunc.w.s   $f5, $f1
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 1);
    ctx->f_odd[(5 - 1) * 2] = TRUNC_W_S(ctx->f1.fl);
    // 0x0044E930: swc1        $f5, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f_odd[(5 - 1) * 2];
    // 0x0044E934: lw          $v1, 0x10($s3)
    ctx->r3 = MEM_W(ctx->r19, 0X10);
    // 0x0044E938: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x0044E93C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0044E940: sw          $v0, 0x1BD0($at)
    MEM_W(0X1BD0, ctx->r1) = ctx->r2;
    // 0x0044E944: blez        $v1, L_0044ECA8
    if (SIGNED(ctx->r3) <= 0) {
        // 0x0044E948: addu        $s2, $zero, $zero
        ctx->r18 = ADD32(0, 0);
            goto L_0044ECA8;
    }
    // 0x0044E948: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    // 0x0044E94C: lui         $s7, 0x80
    ctx->r23 = S32(0X80 << 16);
    // 0x0044E950: lui         $s5, 0x2000
    ctx->r21 = S32(0X2000 << 16);
    // 0x0044E954: addiu       $fp, $sp, 0x70
    ctx->r30 = ADD32(ctx->r29, 0X70);
    // 0x0044E958: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0044E95C: lwc1        $f22, 0xC20($at)
    ctx->f22.u32l = MEM_W(ctx->r1, 0XC20);
    // 0x0044E960: lui         $s4, 0x8000
    ctx->r20 = S32(0X8000 << 16);
    // 0x0044E964: addu        $s1, $s2, $zero
    ctx->r17 = ADD32(ctx->r18, 0);
L_0044E968:
    // 0x0044E968: lw          $v0, 0xC($s3)
    ctx->r2 = MEM_W(ctx->r19, 0XC);
    // 0x0044E96C: addu        $s0, $v0, $s1
    ctx->r16 = ADD32(ctx->r2, ctx->r17);
    // 0x0044E970: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
    // 0x0044E974: and         $v0, $v0, $s7
    ctx->r2 = ctx->r2 & ctx->r23;
    // 0x0044E978: beq         $v0, $zero, L_0044EC94
    if (ctx->r2 == 0) {
        // 0x0044E97C: nop
    
            goto L_0044EC94;
    }
    // 0x0044E97C: nop

    // 0x0044E980: sw          $s2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r18;
    // 0x0044E984: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
    // 0x0044E988: and         $v0, $v0, $s5
    ctx->r2 = ctx->r2 & ctx->r21;
    // 0x0044E98C: beq         $v0, $zero, L_0044E9CC
    if (ctx->r2 == 0) {
        // 0x0044E990: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_0044E9CC;
    }
    // 0x0044E990: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0044E994: jal         0x0041363C
    // 0x0044E998: addiu       $a1, $sp, 0x50
    ctx->r5 = ADD32(ctx->r29, 0X50);
    func_0041363C(rdram, ctx);
        goto after_2;
    // 0x0044E998: addiu       $a1, $sp, 0x50
    ctx->r5 = ADD32(ctx->r29, 0X50);
    after_2:
    // 0x0044E99C: sw          $zero, 0x54($sp)
    MEM_W(0X54, ctx->r29) = 0;
    // 0x0044E9A0: sw          $zero, 0x58($sp)
    MEM_W(0X58, ctx->r29) = 0;
    // 0x0044E9A4: lwc1        $f0, 0x290($s6)
    ctx->f0.u32l = MEM_W(ctx->r22, 0X290);
    // 0x0044E9A8: sw          $zero, 0x68($sp)
    MEM_W(0X68, ctx->r29) = 0;
    // 0x0044E9AC: trunc.w.s   $f5, $f0
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(5 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x0044E9B0: swc1        $f5, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f_odd[(5 - 1) * 2];
    // 0x0044E9B4: lwc1        $f0, 0x294($s6)
    ctx->f0.u32l = MEM_W(ctx->r22, 0X294);
    // 0x0044E9B8: sw          $zero, 0x70($sp)
    MEM_W(0X70, ctx->r29) = 0;
    // 0x0044E9BC: trunc.w.s   $f5, $f0
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(5 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x0044E9C0: swc1        $f5, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f_odd[(5 - 1) * 2];
    // 0x0044E9C4: j           L_004159D8
    // 0x0044E9C8: addiu       $v1, $sp, 0x78
    ctx->r3 = ADD32(ctx->r29, 0X78);
    entry_004159D8(rdram, ctx);
    return;
    // 0x0044E9C8: addiu       $v1, $sp, 0x78
    ctx->r3 = ADD32(ctx->r29, 0X78);
L_0044E9CC:
    // 0x0044E9CC: jal         0x0041363C
    // 0x0044E9D0: addiu       $a1, $sp, 0x50
    ctx->r5 = ADD32(ctx->r29, 0X50);
    func_0041363C(rdram, ctx);
        goto after_3;
    // 0x0044E9D0: addiu       $a1, $sp, 0x50
    ctx->r5 = ADD32(ctx->r29, 0X50);
    after_3:
    // 0x0044E9D4: addiu       $v1, $sp, 0x78
    ctx->r3 = ADD32(ctx->r29, 0X78);
    // 0x0044E9D8: addiu       $v0, $sp, 0x50
    ctx->r2 = ADD32(ctx->r29, 0X50);
L_0044E9DC:
    // 0x0044E9DC: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x0044E9E0: lw          $t1, 0x4($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X4);
    // 0x0044E9E4: lw          $t2, 0x8($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X8);
    // 0x0044E9E8: lw          $t3, 0xC($v0)
    ctx->r11 = MEM_W(ctx->r2, 0XC);
    // 0x0044E9EC: sw          $t0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r8;
    // 0x0044E9F0: sw          $t1, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r9;
    // 0x0044E9F4: sw          $t2, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r10;
    // 0x0044E9F8: sw          $t3, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r11;
    // 0x0044E9FC: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
    // 0x0044EA00: bne         $v0, $fp, L_0044E9DC
    if (ctx->r2 != ctx->r30) {
        // 0x0044EA04: addiu       $v1, $v1, 0x10
        ctx->r3 = ADD32(ctx->r3, 0X10);
            goto L_0044E9DC;
    }
    // 0x0044EA04: addiu       $v1, $v1, 0x10
    ctx->r3 = ADD32(ctx->r3, 0X10);
    // 0x0044EA08: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x0044EA0C: sw          $t0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r8;
    // 0x0044EA10: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
    // 0x0044EA14: and         $v0, $v0, $s5
    ctx->r2 = ctx->r2 & ctx->r21;
    // 0x0044EA18: bne         $v0, $zero, L_0044EA58
    if (ctx->r2 != 0) {
        // 0x0044EA1C: nop
    
            goto L_0044EA58;
    }
    // 0x0044EA1C: nop

    // 0x0044EA20: lw          $v0, 0x8C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X8C);
    // 0x0044EA24: lw          $a0, 0x3C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X3C);
    // 0x0044EA28: lw          $v1, 0x90($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X90);
    // 0x0044EA2C: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x0044EA30: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x0044EA34: sw          $v0, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r2;
    // 0x0044EA38: lw          $v0, 0x94($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X94);
    // 0x0044EA3C: lw          $a0, 0x44($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X44);
    // 0x0044EA40: sw          $v1, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r3;
    // 0x0044EA44: lw          $v1, 0x98($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X98);
    // 0x0044EA48: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x0044EA4C: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x0044EA50: sw          $v0, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r2;
    // 0x0044EA54: sw          $v1, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->r3;
L_0044EA58:
    // 0x0044EA58: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
    // 0x0044EA5C: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x0044EA60: beq         $v0, $zero, L_0044EA98
    if (ctx->r2 == 0) {
        // 0x0044EA64: nop
    
            goto L_0044EA98;
    }
    // 0x0044EA64: nop

    // 0x0044EA68: lw          $v1, 0x54($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X54);
    // 0x0044EA6C: srl         $v0, $v1, 31
    ctx->r2 = S32(U32(ctx->r3) >> 31);
    // 0x0044EA70: addu        $v0, $v1, $v0
    ctx->r2 = ADD32(ctx->r3, ctx->r2);
    // 0x0044EA74: sra         $v0, $v0, 1
    ctx->r2 = S32(SIGNED(ctx->r2) >> 1);
    // 0x0044EA78: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x0044EA7C: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x0044EA80: sub.s       $f0, $f23, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 23);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f23.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f23.fl - ctx->f0.fl;
    // 0x0044EA84: trunc.w.s   $f5, $f0
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(5 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x0044EA88: mfc1        $v0, $f5
    ctx->r2 = (int32_t)ctx->f_odd[(5 - 1) * 2];
    // 0x0044EA8C: sw          $v0, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r2;
    // 0x0044EA90: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x0044EA94: sw          $v0, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r2;
L_0044EA98:
    // 0x0044EA98: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
    // 0x0044EA9C: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x0044EAA0: beq         $v0, $zero, L_0044EABC
    if (ctx->r2 == 0) {
        // 0x0044EAA4: nop
    
            goto L_0044EABC;
    }
    // 0x0044EAA4: nop

    // 0x0044EAA8: lw          $v0, 0x3C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X3C);
    // 0x0044EAAC: lw          $v1, 0x54($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X54);
    // 0x0044EAB0: sw          $v0, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r2;
    // 0x0044EAB4: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x0044EAB8: sw          $v0, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r2;
L_0044EABC:
    // 0x0044EABC: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
    // 0x0044EAC0: andi        $v0, $v0, 0x4
    ctx->r2 = ctx->r2 & 0X4;
    // 0x0044EAC4: beq         $v0, $zero, L_0044EAE0
    if (ctx->r2 == 0) {
        // 0x0044EAC8: nop
    
            goto L_0044EAE0;
    }
    // 0x0044EAC8: nop

    // 0x0044EACC: lw          $v0, 0x40($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X40);
    // 0x0044EAD0: lw          $v1, 0x54($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X54);
    // 0x0044EAD4: sw          $v0, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r2;
    // 0x0044EAD8: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x0044EADC: sw          $v0, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r2;
L_0044EAE0:
    // 0x0044EAE0: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    // 0x0044EAE4: and         $v0, $a0, $s7
    ctx->r2 = ctx->r4 & ctx->r23;
    // 0x0044EAE8: beq         $v0, $zero, L_0044EC94
    if (ctx->r2 == 0) {
        // 0x0044EAEC: nop
    
            goto L_0044EC94;
    }
    // 0x0044EAEC: nop

    // 0x0044EAF0: lh          $v0, 0x0($s3)
    ctx->r2 = MEM_H(ctx->r19, 0X0);
    // 0x0044EAF4: bnel        $v0, $s2, L_0044EC7C
    if (ctx->r2 != ctx->r18) {
        // 0x0044EAF8: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_0044EC7C;
    }
    goto skip_1;
    // 0x0044EAF8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    skip_1:
    // 0x0044EAFC: lh          $v1, 0x4($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X4);
    // 0x0044EB00: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x0044EB04: beq         $v1, $v0, L_0044EC78
    if (ctx->r3 == ctx->r2) {
        // 0x0044EB08: andi        $v0, $a0, 0x8
        ctx->r2 = ctx->r4 & 0X8;
            goto L_0044EC78;
    }
    // 0x0044EB08: andi        $v0, $a0, 0x8
    ctx->r2 = ctx->r4 & 0X8;
    // 0x0044EB0C: bne         $v0, $zero, L_0044EC7C
    if (ctx->r2 != 0) {
        // 0x0044EB10: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_0044EC7C;
    }
    // 0x0044EB10: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0044EB14: lwc1        $f21, 0x98($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X98);
    // 0x0044EB18: cvt.s.w     $f21, $f21
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 21);
    ctx->f21.fl = CVT_S_W(ctx->f_odd[(21 - 1) * 2]);
    // 0x0044EB1C: lwc1        $f20, 0x94($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X94);
    // 0x0044EB20: cvt.s.w     $f20, $f20
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    ctx->f20.fl = CVT_S_W(ctx->f20.u32l);
    // 0x0044EB24: sub.s       $f0, $f21, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f21.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f0.fl = ctx->f21.fl - ctx->f20.fl;
    // 0x0044EB28: jal         0x0027AF4C
    // 0x0044EB2C: add.s       $f21, $f20, $f0
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f21.fl = ctx->f20.fl + ctx->f0.fl;
    func_0027AF4C(rdram, ctx);
        goto after_4;
    // 0x0044EB2C: add.s       $f21, $f20, $f0
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f21.fl = ctx->f20.fl + ctx->f0.fl;
    after_4:
    // 0x0044EB30: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x0044EB34: lw          $v1, 0x6D20($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X6D20);
    // 0x0044EB38: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x0044EB3C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x0044EB40: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x0044EB44: mtc1        $v0, $f12
    ctx->f12.u32l = ctx->r2;
    // 0x0044EB48: cvt.d.w     $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    ctx->f12.d = CVT_D_W(ctx->f12.u32l);
    // 0x0044EB4C: bgez        $v0, L_0044EB60
    if (SIGNED(ctx->r2) >= 0) {
        // 0x0044EB50: nop
    
            goto L_0044EB60;
    }
    // 0x0044EB50: nop

    // 0x0044EB54: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0044EB58: ldc1        $f0, 0xC28($at)
    CHECK_FR(ctx, 0);
    ctx->f0.u64 = LD(ctx->r1, 0XC28);
    // 0x0044EB5C: add.d       $f12, $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.d); NAN_CHECK(ctx->f0.d); 
    ctx->f12.d = ctx->f12.d + ctx->f0.d;
L_0044EB60:
    // 0x0044EB60: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0044EB64: lwc1        $f0, 0xC30($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0XC30);
    // 0x0044EB68: cvt.s.d     $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.d); 
    ctx->f12.fl = CVT_S_D(ctx->f12.d);
    // 0x0044EB6C: mul.s       $f12, $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = MUL_S(ctx->f12.fl, ctx->f0.fl);
    // 0x0044EB70: jal         0x002982F0
    // 0x0044EB74: nop

    func_002982F0(rdram, ctx);
        goto after_5;
    // 0x0044EB74: nop

    after_5:
    // 0x0044EB78: lwc1        $f2, 0x30($s3)
    ctx->f2.u32l = MEM_W(ctx->r19, 0X30);
    // 0x0044EB7C: lwc1        $f1, 0x34($s3)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r19, 0X34);
    // 0x0044EB80: mul.s       $f2, $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f1.fl);
    // 0x0044EB84: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0044EB88: lwc1        $f1, 0xC34($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0XC34);
    // 0x0044EB8C: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x0044EB90: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0044EB94: lwc1        $f1, 0xC38($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0XC38);
    // 0x0044EB98: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0044EB9C: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
    // 0x0044EBA0: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x0044EBA4: andi        $v0, $v0, 0x10
    ctx->r2 = ctx->r2 & 0X10;
    // 0x0044EBA8: mul.s       $f0, $f2, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x0044EBAC: beq         $v0, $zero, L_0044EBFC
    if (ctx->r2 == 0) {
        // 0x0044EBB0: addiu       $v0, $zero, 0xFF
        ctx->r2 = ADD32(0, 0XFF);
            goto L_0044EBFC;
    }
    // 0x0044EBB0: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x0044EBB4: lw          $v1, 0x8C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X8C);
    // 0x0044EBB8: lw          $a0, 0x90($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X90);
    // 0x0044EBBC: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x0044EBC0: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x0044EBC4: trunc.w.s   $f5, $f20
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 20);
    ctx->f_odd[(5 - 1) * 2] = TRUNC_W_S(ctx->f20.fl);
    // 0x0044EBC8: mfc1        $a1, $f5
    ctx->r5 = (int32_t)ctx->f_odd[(5 - 1) * 2];
    // 0x0044EBCC: trunc.w.s   $f5, $f21
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 21);
    ctx->f_odd[(5 - 1) * 2] = TRUNC_W_S(ctx->f21.fl);
    // 0x0044EBD0: mfc1        $a3, $f5
    ctx->r7 = (int32_t)ctx->f_odd[(5 - 1) * 2];
    // 0x0044EBD4: c.le.s      $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f22.fl <= ctx->f0.fl;
    // 0x0044EBD8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x0044EBDC: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x0044EBE0: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x0044EBE4: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x0044EBE8: addiu       $v1, $v1, -0x4
    ctx->r3 = ADD32(ctx->r3, -0X4);
    // 0x0044EBEC: bc1f        L_0044EC3C
    if (!c1cs) {
        // 0x0044EBF0: addiu       $a2, $a0, 0x4
        ctx->r6 = ADD32(ctx->r4, 0X4);
            goto L_0044EC3C;
    }
    // 0x0044EBF0: addiu       $a2, $a0, 0x4
    ctx->r6 = ADD32(ctx->r4, 0X4);
    // 0x0044EBF4: j           L_00415C50
    // 0x0044EBF8: sub.s       $f0, $f0, $f22
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f22.fl;
    entry_00415C50(rdram, ctx);
    return;
    // 0x0044EBF8: sub.s       $f0, $f0, $f22
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f22.fl;
L_0044EBFC:
    // 0x0044EBFC: lw          $v1, 0x8C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X8C);
    // 0x0044EC00: lw          $a0, 0x90($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X90);
    // 0x0044EC04: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x0044EC08: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x0044EC0C: trunc.w.s   $f5, $f20
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 20);
    ctx->f_odd[(5 - 1) * 2] = TRUNC_W_S(ctx->f20.fl);
    // 0x0044EC10: mfc1        $a1, $f5
    ctx->r5 = (int32_t)ctx->f_odd[(5 - 1) * 2];
    // 0x0044EC14: trunc.w.s   $f5, $f21
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 21);
    ctx->f_odd[(5 - 1) * 2] = TRUNC_W_S(ctx->f21.fl);
    // 0x0044EC18: mfc1        $a3, $f5
    ctx->r7 = (int32_t)ctx->f_odd[(5 - 1) * 2];
    // 0x0044EC1C: c.le.s      $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f22.fl <= ctx->f0.fl;
    // 0x0044EC20: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x0044EC24: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x0044EC28: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x0044EC2C: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x0044EC30: addiu       $v1, $v1, -0x4
    ctx->r3 = ADD32(ctx->r3, -0X4);
    // 0x0044EC34: bc1t        L_0044EC4C
    if (c1cs) {
        // 0x0044EC38: addiu       $a2, $a0, 0x4
        ctx->r6 = ADD32(ctx->r4, 0X4);
            goto L_0044EC4C;
    }
    // 0x0044EC38: addiu       $a2, $a0, 0x4
    ctx->r6 = ADD32(ctx->r4, 0X4);
L_0044EC3C:
    // 0x0044EC3C: trunc.w.s   $f5, $f0
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(5 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x0044EC40: mfc1        $v0, $f5
    ctx->r2 = (int32_t)ctx->f_odd[(5 - 1) * 2];
    // 0x0044EC44: j           L_00415C60
    // 0x0044EC48: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    entry_00415C60(rdram, ctx);
    return;
    // 0x0044EC48: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
L_0044EC4C:
    // 0x0044EC4C: sub.s       $f0, $f0, $f22
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f22.fl;
    // 0x0044EC50: trunc.w.s   $f5, $f0
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(5 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x0044EC54: mfc1        $v0, $f5
    ctx->r2 = (int32_t)ctx->f_odd[(5 - 1) * 2];
    // 0x0044EC58: or          $v0, $v0, $s4
    ctx->r2 = ctx->r2 | ctx->r20;
    // 0x0044EC5C: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x0044EC60: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x0044EC64: jal         0x002778A8
    // 0x0044EC68: addu        $a0, $v1, $zero
    ctx->r4 = ADD32(ctx->r3, 0);
    func_002778A8(rdram, ctx);
        goto after_6;
    // 0x0044EC68: addu        $a0, $v1, $zero
    ctx->r4 = ADD32(ctx->r3, 0);
    after_6:
    // 0x0044EC6C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x0044EC70: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0044EC74: sw          $v0, 0x1BD0($at)
    MEM_W(0X1BD0, ctx->r1) = ctx->r2;
L_0044EC78:
    // 0x0044EC78: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_0044EC7C:
    // 0x0044EC7C: addiu       $a1, $sp, 0x78
    ctx->r5 = ADD32(ctx->r29, 0X78);
    // 0x0044EC80: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x0044EC84: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    // 0x0044EC88: lw          $v0, 0x14($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X14);
    // 0x0044EC8C: jalr        $v0
    // 0x0044EC90: addu        $a3, $s3, $zero
    ctx->r7 = ADD32(ctx->r19, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_7;
    // 0x0044EC90: addu        $a3, $s3, $zero
    ctx->r7 = ADD32(ctx->r19, 0);
    after_7:
L_0044EC94:
    // 0x0044EC94: lw          $v0, 0x10($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X10);
    // 0x0044EC98: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x0044EC9C: slt         $v0, $s2, $v0
    ctx->r2 = SIGNED(ctx->r18) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x0044ECA0: bne         $v0, $zero, L_0044E968
    if (ctx->r2 != 0) {
        // 0x0044ECA4: addiu       $s1, $s1, 0x28
        ctx->r17 = ADD32(ctx->r17, 0X28);
            goto L_0044E968;
    }
    // 0x0044ECA4: addiu       $s1, $s1, 0x28
    ctx->r17 = ADD32(ctx->r17, 0X28);
L_0044ECA8:
    // 0x0044ECA8: lw          $ra, 0xC4($sp)
    ctx->r31 = MEM_W(ctx->r29, 0XC4);
    // 0x0044ECAC: lw          $fp, 0xC0($sp)
    ctx->r30 = MEM_W(ctx->r29, 0XC0);
    // 0x0044ECB0: lw          $s7, 0xBC($sp)
    ctx->r23 = MEM_W(ctx->r29, 0XBC);
    // 0x0044ECB4: lw          $s6, 0xB8($sp)
    ctx->r22 = MEM_W(ctx->r29, 0XB8);
    // 0x0044ECB8: lw          $s5, 0xB4($sp)
    ctx->r21 = MEM_W(ctx->r29, 0XB4);
    // 0x0044ECBC: lw          $s4, 0xB0($sp)
    ctx->r20 = MEM_W(ctx->r29, 0XB0);
    // 0x0044ECC0: lw          $s3, 0xAC($sp)
    ctx->r19 = MEM_W(ctx->r29, 0XAC);
    // 0x0044ECC4: lw          $s2, 0xA8($sp)
    ctx->r18 = MEM_W(ctx->r29, 0XA8);
    // 0x0044ECC8: lw          $s1, 0xA4($sp)
    ctx->r17 = MEM_W(ctx->r29, 0XA4);
    // 0x0044ECCC: lw          $s0, 0xA0($sp)
    ctx->r16 = MEM_W(ctx->r29, 0XA0);
    // 0x0044ECD0: ldc1        $f23, 0xE0($sp)
    CHECK_FR(ctx, 23);
    ctx->f23.u64 = LD(ctx->r29, 0XE0);
    // 0x0044ECD4: ldc1        $f22, 0xD8($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0XD8);
    // 0x0044ECD8: ldc1        $f21, 0xD0($sp)
    CHECK_FR(ctx, 21);
    ctx->f21.u64 = LD(ctx->r29, 0XD0);
    // 0x0044ECDC: ldc1        $f20, 0xC8($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0XC8);
    // 0x0044ECE0: jr          $ra
    // 0x0044ECE4: addiu       $sp, $sp, 0xE8
    ctx->r29 = ADD32(ctx->r29, 0XE8);
    return;
    // 0x0044ECE4: addiu       $sp, $sp, 0xE8
    ctx->r29 = ADD32(ctx->r29, 0XE8);
;}
RECOMP_FUNC void func_00416454(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00416454: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00416458: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x0041645C: jal         0x00415FB8
    // 0x00416460: addu        $a0, $a2, $zero
    ctx->r4 = ADD32(ctx->r6, 0);
    func_00415FB8(rdram, ctx);
        goto after_0;
    // 0x00416460: addu        $a0, $a2, $zero
    ctx->r4 = ADD32(ctx->r6, 0);
    after_0:
    // 0x00416464: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x00416468: sltu        $v0, $zero, $v0
    ctx->r2 = 0 < ctx->r2 ? 1 : 0;
    // 0x0041646C: jr          $ra
    // 0x00416470: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00416470: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00430250(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00430250: addiu       $a0, $s0, 0x140
    ctx->r4 = ADD32(ctx->r16, 0X140);
    // 0x00430254: addiu       $a1, $s0, 0x16C
    ctx->r5 = ADD32(ctx->r16, 0X16C);
    // 0x00430258: lui         $at, 0x800F
    ctx->r1 = S32(0X800F << 16);
    // 0x0043025C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x00430260: lbu         $v0, 0x677B($at)
    ctx->r2 = MEM_BU(ctx->r1, 0X677B);
    // 0x00430264: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x00430268: sw          $zero, 0xD0($s0)
    MEM_W(0XD0, ctx->r16) = 0;
    // 0x0043026C: sw          $zero, 0xD4($s0)
    MEM_W(0XD4, ctx->r16) = 0;
    // 0x00430270: srl         $v0, $v0, 3
    ctx->r2 = S32(U32(ctx->r2) >> 3);
    // 0x00430274: xori        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 ^ 0X1;
    // 0x00430278: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x0043027C: jal         0x0026EB3C
    // 0x00430280: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    func_0026EB3C(rdram, ctx);
        goto after_0;
    // 0x00430280: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    after_0:
    // 0x00430284: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x00430288: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x0043028C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00430290: jr          $ra
    // 0x00430294: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00430294: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0044A0CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_004111EC:
    // 0x0044A0CC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
L_0041123C:
    // 0x0044A0D0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
L_00411294:
    // 0x0044A0D4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
L_004112CC:
    // 0x0044A0D8: jal         0x0020B5B8
    // 0x0044A0DC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    func_0020B5B8(rdram, ctx);
        goto after_0;
L_00411338:
    // 0x0044A0DC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    after_0:
L_00411388:
    // 0x0044A0E0: lui         $a2, 0xE300
    ctx->r6 = S32(0XE300 << 16);
L_004113D8:
    // 0x0044A0E4: ori         $a2, $a2, 0xA01
    ctx->r6 = ctx->r6 | 0XA01;
L_00411428:
    // 0x0044A0E8: lui         $t1, 0xFCFF
    ctx->r9 = S32(0XFCFF << 16);
L_00411490:
    // 0x0044A0EC: ori         $t1, $t1, 0xFFFF
    ctx->r9 = ctx->r9 | 0XFFFF;
L_004114E0:
    // 0x0044A0F0: lui         $a3, 0xFFFD
    ctx->r7 = S32(0XFFFD << 16);
L_00411538:
    // 0x0044A0F4: ori         $a3, $a3, 0xF6FB
    ctx->r7 = ctx->r7 | 0XF6FB;
L_00411570:
    // 0x0044A0F8: lui         $t2, 0xE200
    ctx->r10 = S32(0XE200 << 16);
L_004115DC:
    // 0x0044A0FC: ori         $t2, $t2, 0x1C
    ctx->r10 = ctx->r10 | 0X1C;
L_0041162C:
    // 0x0044A100: lui         $t0, 0x50
    ctx->r8 = S32(0X50 << 16);
L_00411688:
    // 0x0044A104: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
L_004116CC:
    // 0x0044A108: addiu       $a0, $a0, -0x71DC
    ctx->r4 = ADD32(ctx->r4, -0X71DC);
L_004117BC:
    // 0x0044A10C: ori         $t0, $t0, 0x4240
    ctx->r8 = ctx->r8 | 0X4240;
L_00411800:
    // 0x0044A110: lui         $v1, 0xE700
    ctx->r3 = S32(0XE700 << 16);
L_00411858:
    // 0x0044A114: mtc1        $s0, $f2
    ctx->f2.u32l = ctx->r16;
L_00411890:
    // 0x0044A118: cvt.s.w     $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    ctx->f2.fl = CVT_S_W(ctx->f2.u32l);
L_004118FC:
    // 0x0044A11C: sll         $s0, $s0, 1
    ctx->r16 = S32(ctx->r16 << 1);
L_0041194C:
    // 0x0044A120: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
L_0041199C:
    // 0x0044A124: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
L_004119EC:
    // 0x0044A128: lwc1        $f0, 0x9A8($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X9A8);
L_00411A48:
    // 0x0044A12C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
L_00411A98:
    // 0x0044A130: lwc1        $f1, 0x9AC($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X9AC);
L_00411AF0:
    // 0x0044A134: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
L_00411B28:
    // 0x0044A138: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
L_00411B88:
    // 0x0044A13C: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
L_00411BD8:
    // 0x0044A140: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
L_00411C34:
    // 0x0044A144: sw          $v1, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r3;
L_00411C78:
    // 0x0044A148: addiu       $v1, $v0, 0x8
    ctx->r3 = ADD32(ctx->r2, 0X8);
    // 0x0044A14C: sw          $zero, 0x4($a1)
    MEM_W(0X4, ctx->r5) = 0;
    // 0x0044A150: addiu       $a1, $v0, 0x10
    ctx->r5 = ADD32(ctx->r2, 0X10);
    // 0x0044A154: sw          $v1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r3;
    // 0x0044A158: sw          $a2, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r6;
    // 0x0044A15C: addiu       $a2, $v0, 0x18
    ctx->r6 = ADD32(ctx->r2, 0X18);
    // 0x0044A160: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x0044A164: sw          $a1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r5;
    // 0x0044A168: sw          $t1, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r9;
    // 0x0044A16C: sw          $a3, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r7;
    // 0x0044A170: sw          $a2, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r6;
    // 0x0044A174: sw          $t2, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r10;
    // 0x0044A178: sw          $t0, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r8;
    // 0x0044A17C: addiu       $a1, $v0, 0x20
    ctx->r5 = ADD32(ctx->r2, 0X20);
    // 0x0044A180: lui         $v1, 0xFA00
    ctx->r3 = S32(0XFA00 << 16);
    // 0x0044A184: sw          $a1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r5;
    // 0x0044A188: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0044A18C: lwc1        $f6, 0x2030($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X2030);
    // 0x0044A190: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x0044A194: sw          $v1, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->r3;
    // 0x0044A198: addiu       $v0, $v0, 0x28
    ctx->r2 = ADD32(ctx->r2, 0X28);
    // 0x0044A19C: sw          $zero, 0x4($a2)
    MEM_W(0X4, ctx->r6) = 0;
    // 0x0044A1A0: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
    // 0x0044A1A4: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x0044A1A8: lw          $v0, 0x2034($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2034);
    // 0x0044A1AC: sub.s       $f0, $f6, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f6.fl - ctx->f0.fl;
    // 0x0044A1B0: subu        $v0, $v0, $s0
    ctx->r2 = SUB32(ctx->r2, ctx->r16);
    // 0x0044A1B4: mtc1        $v0, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r2;
    // 0x0044A1B8: cvt.s.w     $f5, $f5
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 5);
    ctx->f5.fl = CVT_S_W(ctx->f_odd[(5 - 1) * 2]);
    // 0x0044A1BC: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x0044A1C0: nop

    // 0x0044A1C4: bc1tl       L_0044A1DC
    if (c1cs) {
        // 0x0044A1C8: sub.s       $f0, $f0, $f1
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
            goto L_0044A1DC;
    }
    goto skip_0;
    // 0x0044A1C8: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    skip_0:
    // 0x0044A1CC: trunc.w.s   $f7, $f0
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(7 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x0044A1D0: mfc1        $v1, $f7
    ctx->r3 = (int32_t)ctx->f_odd[(7 - 1) * 2];
    // 0x0044A1D4: j           L_004111EC
    // 0x0044A1D8: nop

    entry_004111EC(rdram, ctx);
    return;
    // 0x0044A1D8: nop

L_0044A1DC:
    // 0x0044A1DC: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x0044A1E0: trunc.w.s   $f7, $f0
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(7 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x0044A1E4: mfc1        $v1, $f7
    ctx->r3 = (int32_t)ctx->f_odd[(7 - 1) * 2];
    // 0x0044A1E8: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x0044A1EC: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0044A1F0: lwc1        $f0, 0x9B0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X9B0);
    // 0x0044A1F4: andi        $v0, $v1, 0x3FF
    ctx->r2 = ctx->r3 & 0X3FF;
    // 0x0044A1F8: add.s       $f0, $f2, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f2.fl + ctx->f0.fl;
    // 0x0044A1FC: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0044A200: lwc1        $f1, 0x9B4($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X9B4);
    // 0x0044A204: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x0044A208: nop

    // 0x0044A20C: bc1t        L_0044A224
    if (c1cs) {
        // 0x0044A210: sll         $a0, $v0, 14
        ctx->r4 = S32(ctx->r2 << 14);
            goto L_0044A224;
    }
    // 0x0044A210: sll         $a0, $v0, 14
    ctx->r4 = S32(ctx->r2 << 14);
    // 0x0044A214: trunc.w.s   $f7, $f0
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(7 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x0044A218: mfc1        $v1, $f7
    ctx->r3 = (int32_t)ctx->f_odd[(7 - 1) * 2];
    // 0x0044A21C: j           L_0041123C
    // 0x0044A220: andi        $v0, $v1, 0x3FF
    ctx->r2 = ctx->r3 & 0X3FF;
    entry_0041123C(rdram, ctx);
    return;
    // 0x0044A220: andi        $v0, $v1, 0x3FF
    ctx->r2 = ctx->r3 & 0X3FF;
L_0044A224:
    // 0x0044A224: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x0044A228: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x0044A22C: trunc.w.s   $f7, $f0
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(7 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x0044A230: mfc1        $v1, $f7
    ctx->r3 = (int32_t)ctx->f_odd[(7 - 1) * 2];
    // 0x0044A234: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x0044A238: andi        $v0, $v1, 0x3FF
    ctx->r2 = ctx->r3 & 0X3FF;
    // 0x0044A23C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x0044A240: lui         $v1, 0xF600
    ctx->r3 = S32(0XF600 << 16);
    // 0x0044A244: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x0044A248: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0044A24C: lwc1        $f0, 0x9B8($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X9B8);
    // 0x0044A250: or          $v0, $a0, $v0
    ctx->r2 = ctx->r4 | ctx->r2;
    // 0x0044A254: c.le.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl <= ctx->f4.fl;
    // 0x0044A258: nop

    // 0x0044A25C: bc1t        L_0044A274
    if (c1cs) {
        // 0x0044A260: sw          $v0, 0x0($a1)
        MEM_W(0X0, ctx->r5) = ctx->r2;
            goto L_0044A274;
    }
    // 0x0044A260: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
    // 0x0044A264: trunc.w.s   $f7, $f4
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 4);
    ctx->f_odd[(7 - 1) * 2] = TRUNC_W_S(ctx->f4.fl);
    // 0x0044A268: mfc1        $v1, $f7
    ctx->r3 = (int32_t)ctx->f_odd[(7 - 1) * 2];
    // 0x0044A26C: j           L_00411294
    // 0x0044A270: andi        $v0, $v1, 0x3FF
    ctx->r2 = ctx->r3 & 0X3FF;
    entry_00411294(rdram, ctx);
    return;
    // 0x0044A270: andi        $v0, $v1, 0x3FF
    ctx->r2 = ctx->r3 & 0X3FF;
L_0044A274:
    // 0x0044A274: sub.s       $f0, $f4, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f4.fl - ctx->f0.fl;
    // 0x0044A278: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x0044A27C: trunc.w.s   $f7, $f0
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(7 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x0044A280: mfc1        $v1, $f7
    ctx->r3 = (int32_t)ctx->f_odd[(7 - 1) * 2];
    // 0x0044A284: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x0044A288: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0044A28C: lwc1        $f0, 0x9BC($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X9BC);
    // 0x0044A290: andi        $v0, $v1, 0x3FF
    ctx->r2 = ctx->r3 & 0X3FF;
    // 0x0044A294: c.le.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl <= ctx->f2.fl;
    // 0x0044A298: nop

    // 0x0044A29C: bc1t        L_0044A2B4
    if (c1cs) {
        // 0x0044A2A0: sll         $a0, $v0, 14
        ctx->r4 = S32(ctx->r2 << 14);
            goto L_0044A2B4;
    }
    // 0x0044A2A0: sll         $a0, $v0, 14
    ctx->r4 = S32(ctx->r2 << 14);
    // 0x0044A2A4: trunc.w.s   $f7, $f2
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 2);
    ctx->f_odd[(7 - 1) * 2] = TRUNC_W_S(ctx->f2.fl);
    // 0x0044A2A8: mfc1        $v1, $f7
    ctx->r3 = (int32_t)ctx->f_odd[(7 - 1) * 2];
    // 0x0044A2AC: j           L_004112CC
    // 0x0044A2B0: andi        $v0, $v1, 0x3FF
    ctx->r2 = ctx->r3 & 0X3FF;
    entry_004112CC(rdram, ctx);
    return;
    // 0x0044A2B0: andi        $v0, $v1, 0x3FF
    ctx->r2 = ctx->r3 & 0X3FF;
L_0044A2B4:
    // 0x0044A2B4: sub.s       $f0, $f2, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f0.fl;
    // 0x0044A2B8: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x0044A2BC: trunc.w.s   $f7, $f0
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(7 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x0044A2C0: mfc1        $v1, $f7
    ctx->r3 = (int32_t)ctx->f_odd[(7 - 1) * 2];
    // 0x0044A2C4: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x0044A2C8: andi        $v0, $v1, 0x3FF
    ctx->r2 = ctx->r3 & 0X3FF;
    // 0x0044A2CC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x0044A2D0: or          $v0, $a0, $v0
    ctx->r2 = ctx->r4 | ctx->r2;
    // 0x0044A2D4: lui         $v1, 0x800E
    ctx->r3 = S32(0X800E << 16);
    // 0x0044A2D8: addiu       $v1, $v1, -0x71DC
    ctx->r3 = ADD32(ctx->r3, -0X71DC);
    // 0x0044A2DC: sw          $v0, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r2;
    // 0x0044A2E0: lw          $a1, 0x0($v1)
    ctx->r5 = MEM_W(ctx->r3, 0X0);
    // 0x0044A2E4: add.s       $f1, $f4, $f6
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f1.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x0044A2E8: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0044A2EC: lwc1        $f0, 0x9C0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X9C0);
    // 0x0044A2F0: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0044A2F4: lwc1        $f3, 0x9C4($at)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r1, 0X9C4);
    // 0x0044A2F8: sub.s       $f0, $f1, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f1.fl - ctx->f0.fl;
    // 0x0044A2FC: addiu       $v0, $a1, 0x8
    ctx->r2 = ADD32(ctx->r5, 0X8);
    // 0x0044A300: c.le.s      $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f3.fl <= ctx->f0.fl;
    // 0x0044A304: nop

    // 0x0044A308: bc1t        L_0044A320
    if (c1cs) {
        // 0x0044A30C: sw          $v0, 0x0($v1)
        MEM_W(0X0, ctx->r3) = ctx->r2;
            goto L_0044A320;
    }
    // 0x0044A30C: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x0044A310: trunc.w.s   $f7, $f0
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(7 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x0044A314: mfc1        $v1, $f7
    ctx->r3 = (int32_t)ctx->f_odd[(7 - 1) * 2];
    // 0x0044A318: j           L_00411338
    // 0x0044A31C: add.s       $f0, $f2, $f5
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 5);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f5.fl); 
    ctx->f0.fl = ctx->f2.fl + ctx->f5.fl;
    entry_00411338(rdram, ctx);
    return;
    // 0x0044A31C: add.s       $f0, $f2, $f5
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 5);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f5.fl); 
    ctx->f0.fl = ctx->f2.fl + ctx->f5.fl;
L_0044A320:
    // 0x0044A320: sub.s       $f0, $f0, $f3
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f3.fl;
    // 0x0044A324: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x0044A328: trunc.w.s   $f7, $f0
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(7 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x0044A32C: mfc1        $v1, $f7
    ctx->r3 = (int32_t)ctx->f_odd[(7 - 1) * 2];
    // 0x0044A330: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x0044A334: add.s       $f0, $f2, $f5
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 5);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f5.fl); 
    ctx->f0.fl = ctx->f2.fl + ctx->f5.fl;
    // 0x0044A338: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0044A33C: lwc1        $f1, 0x9C8($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X9C8);
    // 0x0044A340: andi        $v0, $v1, 0x3FF
    ctx->r2 = ctx->r3 & 0X3FF;
    // 0x0044A344: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x0044A348: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0044A34C: lwc1        $f1, 0x9CC($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X9CC);
    // 0x0044A350: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x0044A354: nop

    // 0x0044A358: bc1t        L_0044A370
    if (c1cs) {
        // 0x0044A35C: sll         $a0, $v0, 14
        ctx->r4 = S32(ctx->r2 << 14);
            goto L_0044A370;
    }
    // 0x0044A35C: sll         $a0, $v0, 14
    ctx->r4 = S32(ctx->r2 << 14);
    // 0x0044A360: trunc.w.s   $f7, $f0
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(7 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x0044A364: mfc1        $v1, $f7
    ctx->r3 = (int32_t)ctx->f_odd[(7 - 1) * 2];
    // 0x0044A368: j           L_00411388
    // 0x0044A36C: andi        $v0, $v1, 0x3FF
    ctx->r2 = ctx->r3 & 0X3FF;
    entry_00411388(rdram, ctx);
    return;
    // 0x0044A36C: andi        $v0, $v1, 0x3FF
    ctx->r2 = ctx->r3 & 0X3FF;
L_0044A370:
    // 0x0044A370: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x0044A374: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x0044A378: trunc.w.s   $f7, $f0
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(7 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x0044A37C: mfc1        $v1, $f7
    ctx->r3 = (int32_t)ctx->f_odd[(7 - 1) * 2];
    // 0x0044A380: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x0044A384: andi        $v0, $v1, 0x3FF
    ctx->r2 = ctx->r3 & 0X3FF;
    // 0x0044A388: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x0044A38C: lui         $v1, 0xF600
    ctx->r3 = S32(0XF600 << 16);
    // 0x0044A390: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x0044A394: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0044A398: lwc1        $f0, 0x9D0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X9D0);
    // 0x0044A39C: or          $v0, $a0, $v0
    ctx->r2 = ctx->r4 | ctx->r2;
    // 0x0044A3A0: c.le.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl <= ctx->f4.fl;
    // 0x0044A3A4: nop

    // 0x0044A3A8: bc1t        L_0044A3C0
    if (c1cs) {
        // 0x0044A3AC: sw          $v0, 0x0($a1)
        MEM_W(0X0, ctx->r5) = ctx->r2;
            goto L_0044A3C0;
    }
    // 0x0044A3AC: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
    // 0x0044A3B0: trunc.w.s   $f7, $f4
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 4);
    ctx->f_odd[(7 - 1) * 2] = TRUNC_W_S(ctx->f4.fl);
    // 0x0044A3B4: mfc1        $v1, $f7
    ctx->r3 = (int32_t)ctx->f_odd[(7 - 1) * 2];
    // 0x0044A3B8: j           L_004113D8
    // 0x0044A3BC: add.s       $f0, $f2, $f5
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 5);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f5.fl); 
    ctx->f0.fl = ctx->f2.fl + ctx->f5.fl;
    entry_004113D8(rdram, ctx);
    return;
    // 0x0044A3BC: add.s       $f0, $f2, $f5
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 5);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f5.fl); 
    ctx->f0.fl = ctx->f2.fl + ctx->f5.fl;
L_0044A3C0:
    // 0x0044A3C0: sub.s       $f0, $f4, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f4.fl - ctx->f0.fl;
    // 0x0044A3C4: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x0044A3C8: trunc.w.s   $f7, $f0
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(7 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x0044A3CC: mfc1        $v1, $f7
    ctx->r3 = (int32_t)ctx->f_odd[(7 - 1) * 2];
    // 0x0044A3D0: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x0044A3D4: add.s       $f0, $f2, $f5
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 5);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f5.fl); 
    ctx->f0.fl = ctx->f2.fl + ctx->f5.fl;
    // 0x0044A3D8: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0044A3DC: lwc1        $f1, 0x9D4($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X9D4);
    // 0x0044A3E0: andi        $v0, $v1, 0x3FF
    ctx->r2 = ctx->r3 & 0X3FF;
    // 0x0044A3E4: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x0044A3E8: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0044A3EC: lwc1        $f1, 0x9D8($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X9D8);
    // 0x0044A3F0: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x0044A3F4: nop

    // 0x0044A3F8: bc1t        L_0044A410
    if (c1cs) {
        // 0x0044A3FC: sll         $a0, $v0, 14
        ctx->r4 = S32(ctx->r2 << 14);
            goto L_0044A410;
    }
    // 0x0044A3FC: sll         $a0, $v0, 14
    ctx->r4 = S32(ctx->r2 << 14);
    // 0x0044A400: trunc.w.s   $f7, $f0
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(7 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x0044A404: mfc1        $v1, $f7
    ctx->r3 = (int32_t)ctx->f_odd[(7 - 1) * 2];
    // 0x0044A408: j           L_00411428
    // 0x0044A40C: andi        $v0, $v1, 0x3FF
    ctx->r2 = ctx->r3 & 0X3FF;
    entry_00411428(rdram, ctx);
    return;
    // 0x0044A40C: andi        $v0, $v1, 0x3FF
    ctx->r2 = ctx->r3 & 0X3FF;
L_0044A410:
    // 0x0044A410: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x0044A414: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x0044A418: trunc.w.s   $f7, $f0
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(7 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x0044A41C: mfc1        $v1, $f7
    ctx->r3 = (int32_t)ctx->f_odd[(7 - 1) * 2];
    // 0x0044A420: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x0044A424: andi        $v0, $v1, 0x3FF
    ctx->r2 = ctx->r3 & 0X3FF;
    // 0x0044A428: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x0044A42C: or          $v0, $a0, $v0
    ctx->r2 = ctx->r4 | ctx->r2;
    // 0x0044A430: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0044A434: lwc1        $f0, 0x9DC($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X9DC);
    // 0x0044A438: lui         $v1, 0x800E
    ctx->r3 = S32(0X800E << 16);
    // 0x0044A43C: addiu       $v1, $v1, -0x71DC
    ctx->r3 = ADD32(ctx->r3, -0X71DC);
    // 0x0044A440: sw          $v0, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r2;
    // 0x0044A444: lw          $a1, 0x0($v1)
    ctx->r5 = MEM_W(ctx->r3, 0X0);
    // 0x0044A448: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0044A44C: lwc1        $f1, 0x9E0($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X9E0);
    // 0x0044A450: add.s       $f0, $f4, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f4.fl + ctx->f0.fl;
    // 0x0044A454: addiu       $v0, $a1, 0x8
    ctx->r2 = ADD32(ctx->r5, 0X8);
    // 0x0044A458: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x0044A45C: nop

    // 0x0044A460: bc1t        L_0044A478
    if (c1cs) {
        // 0x0044A464: sw          $v0, 0x0($v1)
        MEM_W(0X0, ctx->r3) = ctx->r2;
            goto L_0044A478;
    }
    // 0x0044A464: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x0044A468: trunc.w.s   $f7, $f0
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(7 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x0044A46C: mfc1        $v1, $f7
    ctx->r3 = (int32_t)ctx->f_odd[(7 - 1) * 2];
    // 0x0044A470: j           L_00411490
    // 0x0044A474: add.s       $f0, $f2, $f5
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 5);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f5.fl); 
    ctx->f0.fl = ctx->f2.fl + ctx->f5.fl;
    entry_00411490(rdram, ctx);
    return;
    // 0x0044A474: add.s       $f0, $f2, $f5
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 5);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f5.fl); 
    ctx->f0.fl = ctx->f2.fl + ctx->f5.fl;
L_0044A478:
    // 0x0044A478: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x0044A47C: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x0044A480: trunc.w.s   $f7, $f0
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(7 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x0044A484: mfc1        $v1, $f7
    ctx->r3 = (int32_t)ctx->f_odd[(7 - 1) * 2];
    // 0x0044A488: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x0044A48C: add.s       $f0, $f2, $f5
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 5);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f5.fl); 
    ctx->f0.fl = ctx->f2.fl + ctx->f5.fl;
    // 0x0044A490: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0044A494: lwc1        $f1, 0x9E4($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X9E4);
    // 0x0044A498: andi        $v0, $v1, 0x3FF
    ctx->r2 = ctx->r3 & 0X3FF;
    // 0x0044A49C: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x0044A4A0: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0044A4A4: lwc1        $f1, 0x9E8($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X9E8);
    // 0x0044A4A8: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x0044A4AC: nop

    // 0x0044A4B0: bc1t        L_0044A4C8
    if (c1cs) {
        // 0x0044A4B4: sll         $a0, $v0, 14
        ctx->r4 = S32(ctx->r2 << 14);
            goto L_0044A4C8;
    }
    // 0x0044A4B4: sll         $a0, $v0, 14
    ctx->r4 = S32(ctx->r2 << 14);
    // 0x0044A4B8: trunc.w.s   $f7, $f0
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(7 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x0044A4BC: mfc1        $v1, $f7
    ctx->r3 = (int32_t)ctx->f_odd[(7 - 1) * 2];
    // 0x0044A4C0: j           L_004114E0
    // 0x0044A4C4: andi        $v0, $v1, 0x3FF
    ctx->r2 = ctx->r3 & 0X3FF;
    entry_004114E0(rdram, ctx);
    return;
    // 0x0044A4C4: andi        $v0, $v1, 0x3FF
    ctx->r2 = ctx->r3 & 0X3FF;
L_0044A4C8:
    // 0x0044A4C8: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x0044A4CC: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x0044A4D0: trunc.w.s   $f7, $f0
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(7 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x0044A4D4: mfc1        $v1, $f7
    ctx->r3 = (int32_t)ctx->f_odd[(7 - 1) * 2];
    // 0x0044A4D8: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x0044A4DC: andi        $v0, $v1, 0x3FF
    ctx->r2 = ctx->r3 & 0X3FF;
    // 0x0044A4E0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x0044A4E4: lui         $v1, 0xF600
    ctx->r3 = S32(0XF600 << 16);
    // 0x0044A4E8: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x0044A4EC: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0044A4F0: lwc1        $f0, 0x9EC($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X9EC);
    // 0x0044A4F4: or          $v0, $a0, $v0
    ctx->r2 = ctx->r4 | ctx->r2;
    // 0x0044A4F8: c.le.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl <= ctx->f4.fl;
    // 0x0044A4FC: nop

    // 0x0044A500: bc1t        L_0044A518
    if (c1cs) {
        // 0x0044A504: sw          $v0, 0x0($a1)
        MEM_W(0X0, ctx->r5) = ctx->r2;
            goto L_0044A518;
    }
    // 0x0044A504: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
    // 0x0044A508: trunc.w.s   $f7, $f4
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 4);
    ctx->f_odd[(7 - 1) * 2] = TRUNC_W_S(ctx->f4.fl);
    // 0x0044A50C: mfc1        $v1, $f7
    ctx->r3 = (int32_t)ctx->f_odd[(7 - 1) * 2];
    // 0x0044A510: j           L_00411538
    // 0x0044A514: andi        $v0, $v1, 0x3FF
    ctx->r2 = ctx->r3 & 0X3FF;
    entry_00411538(rdram, ctx);
    return;
    // 0x0044A514: andi        $v0, $v1, 0x3FF
    ctx->r2 = ctx->r3 & 0X3FF;
L_0044A518:
    // 0x0044A518: sub.s       $f0, $f4, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f4.fl - ctx->f0.fl;
    // 0x0044A51C: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x0044A520: trunc.w.s   $f7, $f0
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(7 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x0044A524: mfc1        $v1, $f7
    ctx->r3 = (int32_t)ctx->f_odd[(7 - 1) * 2];
    // 0x0044A528: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x0044A52C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0044A530: lwc1        $f0, 0x9F0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X9F0);
    // 0x0044A534: andi        $v0, $v1, 0x3FF
    ctx->r2 = ctx->r3 & 0X3FF;
    // 0x0044A538: c.le.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl <= ctx->f2.fl;
    // 0x0044A53C: nop

    // 0x0044A540: bc1t        L_0044A558
    if (c1cs) {
        // 0x0044A544: sll         $a0, $v0, 14
        ctx->r4 = S32(ctx->r2 << 14);
            goto L_0044A558;
    }
    // 0x0044A544: sll         $a0, $v0, 14
    ctx->r4 = S32(ctx->r2 << 14);
    // 0x0044A548: trunc.w.s   $f7, $f2
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 2);
    ctx->f_odd[(7 - 1) * 2] = TRUNC_W_S(ctx->f2.fl);
    // 0x0044A54C: mfc1        $v1, $f7
    ctx->r3 = (int32_t)ctx->f_odd[(7 - 1) * 2];
    // 0x0044A550: j           L_00411570
    // 0x0044A554: andi        $v0, $v1, 0x3FF
    ctx->r2 = ctx->r3 & 0X3FF;
    entry_00411570(rdram, ctx);
    return;
    // 0x0044A554: andi        $v0, $v1, 0x3FF
    ctx->r2 = ctx->r3 & 0X3FF;
L_0044A558:
    // 0x0044A558: sub.s       $f0, $f2, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f0.fl;
    // 0x0044A55C: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x0044A560: trunc.w.s   $f7, $f0
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(7 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x0044A564: mfc1        $v1, $f7
    ctx->r3 = (int32_t)ctx->f_odd[(7 - 1) * 2];
    // 0x0044A568: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x0044A56C: andi        $v0, $v1, 0x3FF
    ctx->r2 = ctx->r3 & 0X3FF;
    // 0x0044A570: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x0044A574: or          $v0, $a0, $v0
    ctx->r2 = ctx->r4 | ctx->r2;
    // 0x0044A578: lui         $v1, 0x800E
    ctx->r3 = S32(0X800E << 16);
    // 0x0044A57C: addiu       $v1, $v1, -0x71DC
    ctx->r3 = ADD32(ctx->r3, -0X71DC);
    // 0x0044A580: sw          $v0, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r2;
    // 0x0044A584: lw          $t3, 0x0($v1)
    ctx->r11 = MEM_W(ctx->r3, 0X0);
    // 0x0044A588: add.s       $f1, $f4, $f6
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f1.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x0044A58C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0044A590: lwc1        $f0, 0x9F4($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X9F4);
    // 0x0044A594: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0044A598: lwc1        $f3, 0x9F8($at)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r1, 0X9F8);
    // 0x0044A59C: sub.s       $f0, $f1, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f1.fl - ctx->f0.fl;
    // 0x0044A5A0: addiu       $v0, $t3, 0x8
    ctx->r2 = ADD32(ctx->r11, 0X8);
    // 0x0044A5A4: c.le.s      $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f3.fl <= ctx->f0.fl;
    // 0x0044A5A8: nop

    // 0x0044A5AC: bc1t        L_0044A5C4
    if (c1cs) {
        // 0x0044A5B0: sw          $v0, 0x0($v1)
        MEM_W(0X0, ctx->r3) = ctx->r2;
            goto L_0044A5C4;
    }
    // 0x0044A5B0: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x0044A5B4: trunc.w.s   $f7, $f0
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(7 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x0044A5B8: mfc1        $v1, $f7
    ctx->r3 = (int32_t)ctx->f_odd[(7 - 1) * 2];
    // 0x0044A5BC: j           L_004115DC
    // 0x0044A5C0: add.s       $f0, $f2, $f5
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 5);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f5.fl); 
    ctx->f0.fl = ctx->f2.fl + ctx->f5.fl;
    entry_004115DC(rdram, ctx);
    return;
    // 0x0044A5C0: add.s       $f0, $f2, $f5
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 5);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f5.fl); 
    ctx->f0.fl = ctx->f2.fl + ctx->f5.fl;
L_0044A5C4:
    // 0x0044A5C4: sub.s       $f0, $f0, $f3
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f3.fl;
    // 0x0044A5C8: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x0044A5CC: trunc.w.s   $f7, $f0
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(7 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x0044A5D0: mfc1        $v1, $f7
    ctx->r3 = (int32_t)ctx->f_odd[(7 - 1) * 2];
    // 0x0044A5D4: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x0044A5D8: add.s       $f0, $f2, $f5
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 5);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f5.fl); 
    ctx->f0.fl = ctx->f2.fl + ctx->f5.fl;
    // 0x0044A5DC: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0044A5E0: lwc1        $f1, 0x9FC($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X9FC);
    // 0x0044A5E4: andi        $v0, $v1, 0x3FF
    ctx->r2 = ctx->r3 & 0X3FF;
    // 0x0044A5E8: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x0044A5EC: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0044A5F0: lwc1        $f1, 0xA00($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0XA00);
    // 0x0044A5F4: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x0044A5F8: nop

    // 0x0044A5FC: bc1t        L_0044A614
    if (c1cs) {
        // 0x0044A600: sll         $a0, $v0, 14
        ctx->r4 = S32(ctx->r2 << 14);
            goto L_0044A614;
    }
    // 0x0044A600: sll         $a0, $v0, 14
    ctx->r4 = S32(ctx->r2 << 14);
    // 0x0044A604: trunc.w.s   $f7, $f0
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(7 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x0044A608: mfc1        $v1, $f7
    ctx->r3 = (int32_t)ctx->f_odd[(7 - 1) * 2];
    // 0x0044A60C: j           L_0041162C
    // 0x0044A610: andi        $v0, $v1, 0x3FF
    ctx->r2 = ctx->r3 & 0X3FF;
    entry_0041162C(rdram, ctx);
    return;
    // 0x0044A610: andi        $v0, $v1, 0x3FF
    ctx->r2 = ctx->r3 & 0X3FF;
L_0044A614:
    // 0x0044A614: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x0044A618: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x0044A61C: trunc.w.s   $f7, $f0
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(7 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x0044A620: mfc1        $v1, $f7
    ctx->r3 = (int32_t)ctx->f_odd[(7 - 1) * 2];
    // 0x0044A624: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x0044A628: andi        $v0, $v1, 0x3FF
    ctx->r2 = ctx->r3 & 0X3FF;
    // 0x0044A62C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x0044A630: lui         $v1, 0xF600
    ctx->r3 = S32(0XF600 << 16);
    // 0x0044A634: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x0044A638: add.s       $f1, $f4, $f6
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f1.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x0044A63C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0044A640: lwc1        $f0, 0xA04($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0XA04);
    // 0x0044A644: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0044A648: lwc1        $f3, 0xA08($at)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r1, 0XA08);
    // 0x0044A64C: sub.s       $f0, $f1, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f1.fl - ctx->f0.fl;
    // 0x0044A650: or          $v0, $a0, $v0
    ctx->r2 = ctx->r4 | ctx->r2;
    // 0x0044A654: c.le.s      $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f3.fl <= ctx->f0.fl;
    // 0x0044A658: nop

    // 0x0044A65C: bc1t        L_0044A674
    if (c1cs) {
        // 0x0044A660: sw          $v0, 0x0($t3)
        MEM_W(0X0, ctx->r11) = ctx->r2;
            goto L_0044A674;
    }
    // 0x0044A660: sw          $v0, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r2;
    // 0x0044A664: trunc.w.s   $f7, $f0
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(7 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x0044A668: mfc1        $v1, $f7
    ctx->r3 = (int32_t)ctx->f_odd[(7 - 1) * 2];
    // 0x0044A66C: j           L_00411688
    // 0x0044A670: nop

    entry_00411688(rdram, ctx);
    return;
    // 0x0044A670: nop

L_0044A674:
    // 0x0044A674: sub.s       $f0, $f0, $f3
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f3.fl;
    // 0x0044A678: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x0044A67C: trunc.w.s   $f7, $f0
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(7 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x0044A680: mfc1        $v1, $f7
    ctx->r3 = (int32_t)ctx->f_odd[(7 - 1) * 2];
    // 0x0044A684: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x0044A688: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0044A68C: lwc1        $f0, 0xA0C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0XA0C);
    // 0x0044A690: andi        $v0, $v1, 0x3FF
    ctx->r2 = ctx->r3 & 0X3FF;
    // 0x0044A694: c.le.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl <= ctx->f2.fl;
    // 0x0044A698: nop

    // 0x0044A69C: bc1t        L_0044A6B4
    if (c1cs) {
        // 0x0044A6A0: sll         $t4, $v0, 14
        ctx->r12 = S32(ctx->r2 << 14);
            goto L_0044A6B4;
    }
    // 0x0044A6A0: sll         $t4, $v0, 14
    ctx->r12 = S32(ctx->r2 << 14);
    // 0x0044A6A4: trunc.w.s   $f7, $f2
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 2);
    ctx->f_odd[(7 - 1) * 2] = TRUNC_W_S(ctx->f2.fl);
    // 0x0044A6A8: mfc1        $a1, $f7
    ctx->r5 = (int32_t)ctx->f_odd[(7 - 1) * 2];
    // 0x0044A6AC: j           L_004116CC
    // 0x0044A6B0: lui         $a2, 0xE300
    ctx->r6 = S32(0XE300 << 16);
    entry_004116CC(rdram, ctx);
    return;
    // 0x0044A6B0: lui         $a2, 0xE300
    ctx->r6 = S32(0XE300 << 16);
L_0044A6B4:
    // 0x0044A6B4: sub.s       $f0, $f2, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f0.fl;
    // 0x0044A6B8: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x0044A6BC: trunc.w.s   $f7, $f0
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(7 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x0044A6C0: mfc1        $a1, $f7
    ctx->r5 = (int32_t)ctx->f_odd[(7 - 1) * 2];
    // 0x0044A6C4: or          $a1, $a1, $v0
    ctx->r5 = ctx->r5 | ctx->r2;
    // 0x0044A6C8: lui         $a2, 0xE300
    ctx->r6 = S32(0XE300 << 16);
    // 0x0044A6CC: ori         $a2, $a2, 0xA01
    ctx->r6 = ctx->r6 | 0XA01;
    // 0x0044A6D0: lui         $t0, 0xFCFF
    ctx->r8 = S32(0XFCFF << 16);
    // 0x0044A6D4: ori         $t0, $t0, 0xFFFF
    ctx->r8 = ctx->r8 | 0XFFFF;
    // 0x0044A6D8: lui         $a3, 0xFFFE
    ctx->r7 = S32(0XFFFE << 16);
    // 0x0044A6DC: ori         $a3, $a3, 0x793C
    ctx->r7 = ctx->r7 | 0X793C;
    // 0x0044A6E0: lui         $t1, 0xE200
    ctx->r9 = S32(0XE200 << 16);
    // 0x0044A6E4: ori         $t1, $t1, 0x1C
    ctx->r9 = ctx->r9 | 0X1C;
    // 0x0044A6E8: lui         $t2, 0x1
    ctx->r10 = S32(0X1 << 16);
    // 0x0044A6EC: ori         $t2, $t2, 0x1
    ctx->r10 = ctx->r10 | 0X1;
    // 0x0044A6F0: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x0044A6F4: addiu       $a0, $a0, -0x71DC
    ctx->r4 = ADD32(ctx->r4, -0X71DC);
    // 0x0044A6F8: andi        $v0, $a1, 0x3FF
    ctx->r2 = ctx->r5 & 0X3FF;
    // 0x0044A6FC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x0044A700: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x0044A704: or          $v0, $t4, $v0
    ctx->r2 = ctx->r12 | ctx->r2;
    // 0x0044A708: sw          $v0, 0x4($t3)
    MEM_W(0X4, ctx->r11) = ctx->r2;
    // 0x0044A70C: lui         $v0, 0xE700
    ctx->r2 = S32(0XE700 << 16);
    // 0x0044A710: add.s       $f0, $f4, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x0044A714: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0044A718: lwc1        $f1, 0xA10($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0XA10);
    // 0x0044A71C: addu        $a1, $v1, $zero
    ctx->r5 = ADD32(ctx->r3, 0);
    // 0x0044A720: addiu       $v1, $v1, 0x8
    ctx->r3 = ADD32(ctx->r3, 0X8);
    // 0x0044A724: sw          $v1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r3;
    // 0x0044A728: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
    // 0x0044A72C: sw          $zero, 0x4($a1)
    MEM_W(0X4, ctx->r5) = 0;
    // 0x0044A730: addiu       $a1, $v1, 0x8
    ctx->r5 = ADD32(ctx->r3, 0X8);
    // 0x0044A734: lui         $v0, 0x30
    ctx->r2 = S32(0X30 << 16);
    // 0x0044A738: sw          $a1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r5;
    // 0x0044A73C: sw          $v0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r2;
    // 0x0044A740: addiu       $v0, $v1, 0x10
    ctx->r2 = ADD32(ctx->r3, 0X10);
    // 0x0044A744: sw          $a2, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r6;
    // 0x0044A748: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
    // 0x0044A74C: sw          $t0, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r8;
    // 0x0044A750: sw          $a3, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r7;
    // 0x0044A754: addiu       $a1, $v1, 0x18
    ctx->r5 = ADD32(ctx->r3, 0X18);
    // 0x0044A758: addiu       $a2, $v1, 0x20
    ctx->r6 = ADD32(ctx->r3, 0X20);
    // 0x0044A75C: sw          $a1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r5;
    // 0x0044A760: sw          $t1, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->r9;
    // 0x0044A764: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x0044A768: lui         $v0, 0xF700
    ctx->r2 = S32(0XF700 << 16);
    // 0x0044A76C: sw          $a2, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r6;
    // 0x0044A770: sw          $v0, 0x18($v1)
    MEM_W(0X18, ctx->r3) = ctx->r2;
    // 0x0044A774: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x0044A778: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0044A77C: lwc1        $f1, 0xA14($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0XA14);
    // 0x0044A780: addiu       $v1, $v1, 0x28
    ctx->r3 = ADD32(ctx->r3, 0X28);
    // 0x0044A784: sw          $t2, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r10;
    // 0x0044A788: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x0044A78C: nop

    // 0x0044A790: bc1t        L_0044A7A8
    if (c1cs) {
        // 0x0044A794: sw          $v1, 0x0($a0)
        MEM_W(0X0, ctx->r4) = ctx->r3;
            goto L_0044A7A8;
    }
    // 0x0044A794: sw          $v1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r3;
    // 0x0044A798: trunc.w.s   $f7, $f0
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(7 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x0044A79C: mfc1        $v1, $f7
    ctx->r3 = (int32_t)ctx->f_odd[(7 - 1) * 2];
    // 0x0044A7A0: j           L_004117BC
    // 0x0044A7A4: nop

    entry_004117BC(rdram, ctx);
    return;
    // 0x0044A7A4: nop

L_0044A7A8:
    // 0x0044A7A8: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x0044A7AC: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x0044A7B0: trunc.w.s   $f7, $f0
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(7 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x0044A7B4: mfc1        $v1, $f7
    ctx->r3 = (int32_t)ctx->f_odd[(7 - 1) * 2];
    // 0x0044A7B8: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x0044A7BC: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0044A7C0: lwc1        $f0, 0xA18($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0XA18);
    // 0x0044A7C4: andi        $v0, $v1, 0x3FF
    ctx->r2 = ctx->r3 & 0X3FF;
    // 0x0044A7C8: c.le.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl <= ctx->f2.fl;
    // 0x0044A7CC: nop

    // 0x0044A7D0: bc1t        L_0044A7E8
    if (c1cs) {
        // 0x0044A7D4: sll         $a0, $v0, 14
        ctx->r4 = S32(ctx->r2 << 14);
            goto L_0044A7E8;
    }
    // 0x0044A7D4: sll         $a0, $v0, 14
    ctx->r4 = S32(ctx->r2 << 14);
    // 0x0044A7D8: trunc.w.s   $f7, $f2
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 2);
    ctx->f_odd[(7 - 1) * 2] = TRUNC_W_S(ctx->f2.fl);
    // 0x0044A7DC: mfc1        $v1, $f7
    ctx->r3 = (int32_t)ctx->f_odd[(7 - 1) * 2];
    // 0x0044A7E0: j           L_00411800
    // 0x0044A7E4: andi        $v0, $v1, 0x3FF
    ctx->r2 = ctx->r3 & 0X3FF;
    entry_00411800(rdram, ctx);
    return;
    // 0x0044A7E4: andi        $v0, $v1, 0x3FF
    ctx->r2 = ctx->r3 & 0X3FF;
L_0044A7E8:
    // 0x0044A7E8: sub.s       $f0, $f2, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f0.fl;
    // 0x0044A7EC: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x0044A7F0: trunc.w.s   $f7, $f0
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(7 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x0044A7F4: mfc1        $v1, $f7
    ctx->r3 = (int32_t)ctx->f_odd[(7 - 1) * 2];
    // 0x0044A7F8: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x0044A7FC: andi        $v0, $v1, 0x3FF
    ctx->r2 = ctx->r3 & 0X3FF;
    // 0x0044A800: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x0044A804: lui         $v1, 0xF600
    ctx->r3 = S32(0XF600 << 16);
    // 0x0044A808: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x0044A80C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0044A810: lwc1        $f0, 0xA1C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0XA1C);
    // 0x0044A814: or          $v0, $a0, $v0
    ctx->r2 = ctx->r4 | ctx->r2;
    // 0x0044A818: c.le.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl <= ctx->f4.fl;
    // 0x0044A81C: nop

    // 0x0044A820: bc1t        L_0044A838
    if (c1cs) {
        // 0x0044A824: sw          $v0, 0x0($a2)
        MEM_W(0X0, ctx->r6) = ctx->r2;
            goto L_0044A838;
    }
    // 0x0044A824: sw          $v0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r2;
    // 0x0044A828: trunc.w.s   $f7, $f4
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 4);
    ctx->f_odd[(7 - 1) * 2] = TRUNC_W_S(ctx->f4.fl);
    // 0x0044A82C: mfc1        $v1, $f7
    ctx->r3 = (int32_t)ctx->f_odd[(7 - 1) * 2];
    // 0x0044A830: j           L_00411858
    // 0x0044A834: andi        $v0, $v1, 0x3FF
    ctx->r2 = ctx->r3 & 0X3FF;
    entry_00411858(rdram, ctx);
    return;
    // 0x0044A834: andi        $v0, $v1, 0x3FF
    ctx->r2 = ctx->r3 & 0X3FF;
L_0044A838:
    // 0x0044A838: sub.s       $f0, $f4, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f4.fl - ctx->f0.fl;
    // 0x0044A83C: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x0044A840: trunc.w.s   $f7, $f0
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(7 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x0044A844: mfc1        $v1, $f7
    ctx->r3 = (int32_t)ctx->f_odd[(7 - 1) * 2];
    // 0x0044A848: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x0044A84C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0044A850: lwc1        $f0, 0xA20($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0XA20);
    // 0x0044A854: andi        $v0, $v1, 0x3FF
    ctx->r2 = ctx->r3 & 0X3FF;
    // 0x0044A858: c.le.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl <= ctx->f2.fl;
    // 0x0044A85C: nop

    // 0x0044A860: bc1t        L_0044A878
    if (c1cs) {
        // 0x0044A864: sll         $a0, $v0, 14
        ctx->r4 = S32(ctx->r2 << 14);
            goto L_0044A878;
    }
    // 0x0044A864: sll         $a0, $v0, 14
    ctx->r4 = S32(ctx->r2 << 14);
    // 0x0044A868: trunc.w.s   $f7, $f2
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 2);
    ctx->f_odd[(7 - 1) * 2] = TRUNC_W_S(ctx->f2.fl);
    // 0x0044A86C: mfc1        $v1, $f7
    ctx->r3 = (int32_t)ctx->f_odd[(7 - 1) * 2];
    // 0x0044A870: j           L_00411890
    // 0x0044A874: andi        $v0, $v1, 0x3FF
    ctx->r2 = ctx->r3 & 0X3FF;
    entry_00411890(rdram, ctx);
    return;
    // 0x0044A874: andi        $v0, $v1, 0x3FF
    ctx->r2 = ctx->r3 & 0X3FF;
L_0044A878:
    // 0x0044A878: sub.s       $f0, $f2, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f0.fl;
    // 0x0044A87C: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x0044A880: trunc.w.s   $f7, $f0
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(7 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x0044A884: mfc1        $v1, $f7
    ctx->r3 = (int32_t)ctx->f_odd[(7 - 1) * 2];
    // 0x0044A888: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x0044A88C: andi        $v0, $v1, 0x3FF
    ctx->r2 = ctx->r3 & 0X3FF;
    // 0x0044A890: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x0044A894: or          $v0, $a0, $v0
    ctx->r2 = ctx->r4 | ctx->r2;
    // 0x0044A898: lui         $v1, 0x800E
    ctx->r3 = S32(0X800E << 16);
    // 0x0044A89C: addiu       $v1, $v1, -0x71DC
    ctx->r3 = ADD32(ctx->r3, -0X71DC);
    // 0x0044A8A0: sw          $v0, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r2;
    // 0x0044A8A4: lw          $a1, 0x0($v1)
    ctx->r5 = MEM_W(ctx->r3, 0X0);
    // 0x0044A8A8: add.s       $f1, $f4, $f6
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f1.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x0044A8AC: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0044A8B0: lwc1        $f0, 0xA24($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0XA24);
    // 0x0044A8B4: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0044A8B8: lwc1        $f3, 0xA28($at)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r1, 0XA28);
    // 0x0044A8BC: sub.s       $f0, $f1, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f1.fl - ctx->f0.fl;
    // 0x0044A8C0: addiu       $v0, $a1, 0x8
    ctx->r2 = ADD32(ctx->r5, 0X8);
    // 0x0044A8C4: c.le.s      $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f3.fl <= ctx->f0.fl;
    // 0x0044A8C8: nop

    // 0x0044A8CC: bc1t        L_0044A8E4
    if (c1cs) {
        // 0x0044A8D0: sw          $v0, 0x0($v1)
        MEM_W(0X0, ctx->r3) = ctx->r2;
            goto L_0044A8E4;
    }
    // 0x0044A8D0: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x0044A8D4: trunc.w.s   $f7, $f0
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(7 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x0044A8D8: mfc1        $v1, $f7
    ctx->r3 = (int32_t)ctx->f_odd[(7 - 1) * 2];
    // 0x0044A8DC: j           L_004118FC
    // 0x0044A8E0: add.s       $f0, $f2, $f5
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 5);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f5.fl); 
    ctx->f0.fl = ctx->f2.fl + ctx->f5.fl;
    entry_004118FC(rdram, ctx);
    return;
    // 0x0044A8E0: add.s       $f0, $f2, $f5
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 5);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f5.fl); 
    ctx->f0.fl = ctx->f2.fl + ctx->f5.fl;
L_0044A8E4:
    // 0x0044A8E4: sub.s       $f0, $f0, $f3
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f3.fl;
    // 0x0044A8E8: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x0044A8EC: trunc.w.s   $f7, $f0
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(7 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x0044A8F0: mfc1        $v1, $f7
    ctx->r3 = (int32_t)ctx->f_odd[(7 - 1) * 2];
    // 0x0044A8F4: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x0044A8F8: add.s       $f0, $f2, $f5
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 5);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f5.fl); 
    ctx->f0.fl = ctx->f2.fl + ctx->f5.fl;
    // 0x0044A8FC: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0044A900: lwc1        $f1, 0xA2C($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0XA2C);
    // 0x0044A904: andi        $v0, $v1, 0x3FF
    ctx->r2 = ctx->r3 & 0X3FF;
    // 0x0044A908: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x0044A90C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0044A910: lwc1        $f1, 0xA30($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0XA30);
    // 0x0044A914: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x0044A918: nop

    // 0x0044A91C: bc1t        L_0044A934
    if (c1cs) {
        // 0x0044A920: sll         $a0, $v0, 14
        ctx->r4 = S32(ctx->r2 << 14);
            goto L_0044A934;
    }
    // 0x0044A920: sll         $a0, $v0, 14
    ctx->r4 = S32(ctx->r2 << 14);
    // 0x0044A924: trunc.w.s   $f7, $f0
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(7 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x0044A928: mfc1        $v1, $f7
    ctx->r3 = (int32_t)ctx->f_odd[(7 - 1) * 2];
    // 0x0044A92C: j           L_0041194C
    // 0x0044A930: andi        $v0, $v1, 0x3FF
    ctx->r2 = ctx->r3 & 0X3FF;
    entry_0041194C(rdram, ctx);
    return;
    // 0x0044A930: andi        $v0, $v1, 0x3FF
    ctx->r2 = ctx->r3 & 0X3FF;
L_0044A934:
    // 0x0044A934: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x0044A938: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x0044A93C: trunc.w.s   $f7, $f0
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(7 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x0044A940: mfc1        $v1, $f7
    ctx->r3 = (int32_t)ctx->f_odd[(7 - 1) * 2];
    // 0x0044A944: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x0044A948: andi        $v0, $v1, 0x3FF
    ctx->r2 = ctx->r3 & 0X3FF;
    // 0x0044A94C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x0044A950: lui         $v1, 0xF600
    ctx->r3 = S32(0XF600 << 16);
    // 0x0044A954: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x0044A958: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0044A95C: lwc1        $f0, 0xA34($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0XA34);
    // 0x0044A960: or          $v0, $a0, $v0
    ctx->r2 = ctx->r4 | ctx->r2;
    // 0x0044A964: c.le.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl <= ctx->f4.fl;
    // 0x0044A968: nop

    // 0x0044A96C: bc1t        L_0044A984
    if (c1cs) {
        // 0x0044A970: sw          $v0, 0x0($a1)
        MEM_W(0X0, ctx->r5) = ctx->r2;
            goto L_0044A984;
    }
    // 0x0044A970: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
    // 0x0044A974: trunc.w.s   $f7, $f4
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 4);
    ctx->f_odd[(7 - 1) * 2] = TRUNC_W_S(ctx->f4.fl);
    // 0x0044A978: mfc1        $v1, $f7
    ctx->r3 = (int32_t)ctx->f_odd[(7 - 1) * 2];
    // 0x0044A97C: j           L_0041199C
    // 0x0044A980: add.s       $f0, $f2, $f5
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 5);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f5.fl); 
    ctx->f0.fl = ctx->f2.fl + ctx->f5.fl;
    entry_0041199C(rdram, ctx);
    return;
    // 0x0044A980: add.s       $f0, $f2, $f5
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 5);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f5.fl); 
    ctx->f0.fl = ctx->f2.fl + ctx->f5.fl;
L_0044A984:
    // 0x0044A984: sub.s       $f0, $f4, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f4.fl - ctx->f0.fl;
    // 0x0044A988: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x0044A98C: trunc.w.s   $f7, $f0
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(7 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x0044A990: mfc1        $v1, $f7
    ctx->r3 = (int32_t)ctx->f_odd[(7 - 1) * 2];
    // 0x0044A994: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x0044A998: add.s       $f0, $f2, $f5
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 5);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f5.fl); 
    ctx->f0.fl = ctx->f2.fl + ctx->f5.fl;
    // 0x0044A99C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0044A9A0: lwc1        $f1, 0xA38($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0XA38);
    // 0x0044A9A4: andi        $v0, $v1, 0x3FF
    ctx->r2 = ctx->r3 & 0X3FF;
    // 0x0044A9A8: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x0044A9AC: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0044A9B0: lwc1        $f1, 0xA3C($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0XA3C);
    // 0x0044A9B4: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x0044A9B8: nop

    // 0x0044A9BC: bc1t        L_0044A9D4
    if (c1cs) {
        // 0x0044A9C0: sll         $a0, $v0, 14
        ctx->r4 = S32(ctx->r2 << 14);
            goto L_0044A9D4;
    }
    // 0x0044A9C0: sll         $a0, $v0, 14
    ctx->r4 = S32(ctx->r2 << 14);
    // 0x0044A9C4: trunc.w.s   $f7, $f0
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(7 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x0044A9C8: mfc1        $v1, $f7
    ctx->r3 = (int32_t)ctx->f_odd[(7 - 1) * 2];
    // 0x0044A9CC: j           L_004119EC
    // 0x0044A9D0: andi        $v0, $v1, 0x3FF
    ctx->r2 = ctx->r3 & 0X3FF;
    entry_004119EC(rdram, ctx);
    return;
    // 0x0044A9D0: andi        $v0, $v1, 0x3FF
    ctx->r2 = ctx->r3 & 0X3FF;
L_0044A9D4:
    // 0x0044A9D4: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x0044A9D8: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x0044A9DC: trunc.w.s   $f7, $f0
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(7 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x0044A9E0: mfc1        $v1, $f7
    ctx->r3 = (int32_t)ctx->f_odd[(7 - 1) * 2];
    // 0x0044A9E4: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x0044A9E8: andi        $v0, $v1, 0x3FF
    ctx->r2 = ctx->r3 & 0X3FF;
    // 0x0044A9EC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x0044A9F0: or          $v0, $a0, $v0
    ctx->r2 = ctx->r4 | ctx->r2;
    // 0x0044A9F4: lui         $v1, 0x800E
    ctx->r3 = S32(0X800E << 16);
    // 0x0044A9F8: addiu       $v1, $v1, -0x71DC
    ctx->r3 = ADD32(ctx->r3, -0X71DC);
    // 0x0044A9FC: sw          $v0, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r2;
    // 0x0044AA00: lw          $a1, 0x0($v1)
    ctx->r5 = MEM_W(ctx->r3, 0X0);
    // 0x0044AA04: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0044AA08: lwc1        $f0, 0xA40($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0XA40);
    // 0x0044AA0C: addiu       $v0, $a1, 0x8
    ctx->r2 = ADD32(ctx->r5, 0X8);
    // 0x0044AA10: c.le.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl <= ctx->f4.fl;
    // 0x0044AA14: nop

    // 0x0044AA18: bc1t        L_0044AA30
    if (c1cs) {
        // 0x0044AA1C: sw          $v0, 0x0($v1)
        MEM_W(0X0, ctx->r3) = ctx->r2;
            goto L_0044AA30;
    }
    // 0x0044AA1C: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x0044AA20: trunc.w.s   $f7, $f4
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 4);
    ctx->f_odd[(7 - 1) * 2] = TRUNC_W_S(ctx->f4.fl);
    // 0x0044AA24: mfc1        $v1, $f7
    ctx->r3 = (int32_t)ctx->f_odd[(7 - 1) * 2];
    // 0x0044AA28: j           L_00411A48
    // 0x0044AA2C: add.s       $f0, $f2, $f5
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 5);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f5.fl); 
    ctx->f0.fl = ctx->f2.fl + ctx->f5.fl;
    entry_00411A48(rdram, ctx);
    return;
    // 0x0044AA2C: add.s       $f0, $f2, $f5
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 5);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f5.fl); 
    ctx->f0.fl = ctx->f2.fl + ctx->f5.fl;
L_0044AA30:
    // 0x0044AA30: sub.s       $f0, $f4, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f4.fl - ctx->f0.fl;
    // 0x0044AA34: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x0044AA38: trunc.w.s   $f7, $f0
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(7 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x0044AA3C: mfc1        $v1, $f7
    ctx->r3 = (int32_t)ctx->f_odd[(7 - 1) * 2];
    // 0x0044AA40: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x0044AA44: add.s       $f0, $f2, $f5
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 5);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f5.fl); 
    ctx->f0.fl = ctx->f2.fl + ctx->f5.fl;
    // 0x0044AA48: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0044AA4C: lwc1        $f1, 0xA44($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0XA44);
    // 0x0044AA50: andi        $v0, $v1, 0x3FF
    ctx->r2 = ctx->r3 & 0X3FF;
    // 0x0044AA54: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x0044AA58: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0044AA5C: lwc1        $f1, 0xA48($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0XA48);
    // 0x0044AA60: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x0044AA64: nop

    // 0x0044AA68: bc1t        L_0044AA80
    if (c1cs) {
        // 0x0044AA6C: sll         $a0, $v0, 14
        ctx->r4 = S32(ctx->r2 << 14);
            goto L_0044AA80;
    }
    // 0x0044AA6C: sll         $a0, $v0, 14
    ctx->r4 = S32(ctx->r2 << 14);
    // 0x0044AA70: trunc.w.s   $f7, $f0
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(7 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x0044AA74: mfc1        $v1, $f7
    ctx->r3 = (int32_t)ctx->f_odd[(7 - 1) * 2];
    // 0x0044AA78: j           L_00411A98
    // 0x0044AA7C: andi        $v0, $v1, 0x3FF
    ctx->r2 = ctx->r3 & 0X3FF;
    entry_00411A98(rdram, ctx);
    return;
    // 0x0044AA7C: andi        $v0, $v1, 0x3FF
    ctx->r2 = ctx->r3 & 0X3FF;
L_0044AA80:
    // 0x0044AA80: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x0044AA84: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x0044AA88: trunc.w.s   $f7, $f0
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(7 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x0044AA8C: mfc1        $v1, $f7
    ctx->r3 = (int32_t)ctx->f_odd[(7 - 1) * 2];
    // 0x0044AA90: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x0044AA94: andi        $v0, $v1, 0x3FF
    ctx->r2 = ctx->r3 & 0X3FF;
    // 0x0044AA98: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x0044AA9C: lui         $v1, 0xF600
    ctx->r3 = S32(0XF600 << 16);
    // 0x0044AAA0: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x0044AAA4: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0044AAA8: lwc1        $f0, 0xA4C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0XA4C);
    // 0x0044AAAC: or          $v0, $a0, $v0
    ctx->r2 = ctx->r4 | ctx->r2;
    // 0x0044AAB0: c.le.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl <= ctx->f4.fl;
    // 0x0044AAB4: nop

    // 0x0044AAB8: bc1t        L_0044AAD0
    if (c1cs) {
        // 0x0044AABC: sw          $v0, 0x0($a1)
        MEM_W(0X0, ctx->r5) = ctx->r2;
            goto L_0044AAD0;
    }
    // 0x0044AABC: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
    // 0x0044AAC0: trunc.w.s   $f7, $f4
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 4);
    ctx->f_odd[(7 - 1) * 2] = TRUNC_W_S(ctx->f4.fl);
    // 0x0044AAC4: mfc1        $v1, $f7
    ctx->r3 = (int32_t)ctx->f_odd[(7 - 1) * 2];
    // 0x0044AAC8: j           L_00411AF0
    // 0x0044AACC: andi        $v0, $v1, 0x3FF
    ctx->r2 = ctx->r3 & 0X3FF;
    entry_00411AF0(rdram, ctx);
    return;
    // 0x0044AACC: andi        $v0, $v1, 0x3FF
    ctx->r2 = ctx->r3 & 0X3FF;
L_0044AAD0:
    // 0x0044AAD0: sub.s       $f0, $f4, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f4.fl - ctx->f0.fl;
    // 0x0044AAD4: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x0044AAD8: trunc.w.s   $f7, $f0
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(7 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x0044AADC: mfc1        $v1, $f7
    ctx->r3 = (int32_t)ctx->f_odd[(7 - 1) * 2];
    // 0x0044AAE0: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x0044AAE4: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0044AAE8: lwc1        $f0, 0xA50($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0XA50);
    // 0x0044AAEC: andi        $v0, $v1, 0x3FF
    ctx->r2 = ctx->r3 & 0X3FF;
    // 0x0044AAF0: c.le.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl <= ctx->f2.fl;
    // 0x0044AAF4: nop

    // 0x0044AAF8: bc1t        L_0044AB10
    if (c1cs) {
        // 0x0044AAFC: sll         $a0, $v0, 14
        ctx->r4 = S32(ctx->r2 << 14);
            goto L_0044AB10;
    }
    // 0x0044AAFC: sll         $a0, $v0, 14
    ctx->r4 = S32(ctx->r2 << 14);
    // 0x0044AB00: trunc.w.s   $f7, $f2
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 2);
    ctx->f_odd[(7 - 1) * 2] = TRUNC_W_S(ctx->f2.fl);
    // 0x0044AB04: mfc1        $v1, $f7
    ctx->r3 = (int32_t)ctx->f_odd[(7 - 1) * 2];
    // 0x0044AB08: j           L_00411B28
    // 0x0044AB0C: andi        $v0, $v1, 0x3FF
    ctx->r2 = ctx->r3 & 0X3FF;
    entry_00411B28(rdram, ctx);
    return;
    // 0x0044AB0C: andi        $v0, $v1, 0x3FF
    ctx->r2 = ctx->r3 & 0X3FF;
L_0044AB10:
    // 0x0044AB10: sub.s       $f0, $f2, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f0.fl;
    // 0x0044AB14: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x0044AB18: trunc.w.s   $f7, $f0
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(7 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x0044AB1C: mfc1        $v1, $f7
    ctx->r3 = (int32_t)ctx->f_odd[(7 - 1) * 2];
    // 0x0044AB20: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x0044AB24: andi        $v0, $v1, 0x3FF
    ctx->r2 = ctx->r3 & 0X3FF;
    // 0x0044AB28: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x0044AB2C: or          $v0, $a0, $v0
    ctx->r2 = ctx->r4 | ctx->r2;
    // 0x0044AB30: lui         $v1, 0x800E
    ctx->r3 = S32(0X800E << 16);
    // 0x0044AB34: addiu       $v1, $v1, -0x71DC
    ctx->r3 = ADD32(ctx->r3, -0X71DC);
    // 0x0044AB38: add.s       $f0, $f4, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x0044AB3C: sw          $v0, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r2;
    // 0x0044AB40: lw          $a0, 0x0($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X0);
    // 0x0044AB44: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0044AB48: lwc1        $f1, 0xA54($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0XA54);
    // 0x0044AB4C: addiu       $v0, $a0, 0x8
    ctx->r2 = ADD32(ctx->r4, 0X8);
    // 0x0044AB50: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x0044AB54: nop

    // 0x0044AB58: bc1t        L_0044AB70
    if (c1cs) {
        // 0x0044AB5C: sw          $v0, 0x0($v1)
        MEM_W(0X0, ctx->r3) = ctx->r2;
            goto L_0044AB70;
    }
    // 0x0044AB5C: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x0044AB60: trunc.w.s   $f7, $f0
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(7 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x0044AB64: mfc1        $v1, $f7
    ctx->r3 = (int32_t)ctx->f_odd[(7 - 1) * 2];
    // 0x0044AB68: j           L_00411B88
    // 0x0044AB6C: add.s       $f0, $f2, $f5
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 5);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f5.fl); 
    ctx->f0.fl = ctx->f2.fl + ctx->f5.fl;
    entry_00411B88(rdram, ctx);
    return;
    // 0x0044AB6C: add.s       $f0, $f2, $f5
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 5);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f5.fl); 
    ctx->f0.fl = ctx->f2.fl + ctx->f5.fl;
L_0044AB70:
    // 0x0044AB70: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x0044AB74: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x0044AB78: trunc.w.s   $f7, $f0
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(7 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x0044AB7C: mfc1        $v1, $f7
    ctx->r3 = (int32_t)ctx->f_odd[(7 - 1) * 2];
    // 0x0044AB80: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x0044AB84: add.s       $f0, $f2, $f5
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 5);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f5.fl); 
    ctx->f0.fl = ctx->f2.fl + ctx->f5.fl;
    // 0x0044AB88: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0044AB8C: lwc1        $f1, 0xA58($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0XA58);
    // 0x0044AB90: andi        $v0, $v1, 0x3FF
    ctx->r2 = ctx->r3 & 0X3FF;
    // 0x0044AB94: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x0044AB98: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0044AB9C: lwc1        $f1, 0xA5C($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0XA5C);
    // 0x0044ABA0: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x0044ABA4: nop

    // 0x0044ABA8: bc1t        L_0044ABC0
    if (c1cs) {
        // 0x0044ABAC: sll         $a1, $v0, 14
        ctx->r5 = S32(ctx->r2 << 14);
            goto L_0044ABC0;
    }
    // 0x0044ABAC: sll         $a1, $v0, 14
    ctx->r5 = S32(ctx->r2 << 14);
    // 0x0044ABB0: trunc.w.s   $f7, $f0
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(7 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x0044ABB4: mfc1        $v1, $f7
    ctx->r3 = (int32_t)ctx->f_odd[(7 - 1) * 2];
    // 0x0044ABB8: j           L_00411BD8
    // 0x0044ABBC: andi        $v0, $v1, 0x3FF
    ctx->r2 = ctx->r3 & 0X3FF;
    entry_00411BD8(rdram, ctx);
    return;
    // 0x0044ABBC: andi        $v0, $v1, 0x3FF
    ctx->r2 = ctx->r3 & 0X3FF;
L_0044ABC0:
    // 0x0044ABC0: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x0044ABC4: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x0044ABC8: trunc.w.s   $f7, $f0
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(7 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x0044ABCC: mfc1        $v1, $f7
    ctx->r3 = (int32_t)ctx->f_odd[(7 - 1) * 2];
    // 0x0044ABD0: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x0044ABD4: andi        $v0, $v1, 0x3FF
    ctx->r2 = ctx->r3 & 0X3FF;
    // 0x0044ABD8: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x0044ABDC: lui         $v1, 0xF600
    ctx->r3 = S32(0XF600 << 16);
    // 0x0044ABE0: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x0044ABE4: add.s       $f1, $f4, $f6
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f1.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x0044ABE8: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0044ABEC: lwc1        $f0, 0xA60($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0XA60);
    // 0x0044ABF0: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0044ABF4: lwc1        $f3, 0xA64($at)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r1, 0XA64);
    // 0x0044ABF8: sub.s       $f0, $f1, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f1.fl - ctx->f0.fl;
    // 0x0044ABFC: or          $v0, $a1, $v0
    ctx->r2 = ctx->r5 | ctx->r2;
    // 0x0044AC00: c.le.s      $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f3.fl <= ctx->f0.fl;
    // 0x0044AC04: nop

    // 0x0044AC08: bc1t        L_0044AC20
    if (c1cs) {
        // 0x0044AC0C: sw          $v0, 0x0($a0)
        MEM_W(0X0, ctx->r4) = ctx->r2;
            goto L_0044AC20;
    }
    // 0x0044AC0C: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
    // 0x0044AC10: trunc.w.s   $f7, $f0
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(7 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x0044AC14: mfc1        $v1, $f7
    ctx->r3 = (int32_t)ctx->f_odd[(7 - 1) * 2];
    // 0x0044AC18: j           L_00411C34
    // 0x0044AC1C: nop

    entry_00411C34(rdram, ctx);
    return;
    // 0x0044AC1C: nop

L_0044AC20:
    // 0x0044AC20: sub.s       $f0, $f0, $f3
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f3.fl;
    // 0x0044AC24: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x0044AC28: trunc.w.s   $f7, $f0
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(7 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x0044AC2C: mfc1        $v1, $f7
    ctx->r3 = (int32_t)ctx->f_odd[(7 - 1) * 2];
    // 0x0044AC30: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x0044AC34: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0044AC38: lwc1        $f0, 0xA68($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0XA68);
    // 0x0044AC3C: andi        $v0, $v1, 0x3FF
    ctx->r2 = ctx->r3 & 0X3FF;
    // 0x0044AC40: c.le.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl <= ctx->f2.fl;
    // 0x0044AC44: nop

    // 0x0044AC48: bc1t        L_0044AC60
    if (c1cs) {
        // 0x0044AC4C: sll         $v1, $v0, 14
        ctx->r3 = S32(ctx->r2 << 14);
            goto L_0044AC60;
    }
    // 0x0044AC4C: sll         $v1, $v0, 14
    ctx->r3 = S32(ctx->r2 << 14);
    // 0x0044AC50: trunc.w.s   $f7, $f2
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 2);
    ctx->f_odd[(7 - 1) * 2] = TRUNC_W_S(ctx->f2.fl);
    // 0x0044AC54: mfc1        $s0, $f7
    ctx->r16 = (int32_t)ctx->f_odd[(7 - 1) * 2];
    // 0x0044AC58: j           L_00411C78
    // 0x0044AC5C: andi        $v0, $s0, 0x3FF
    ctx->r2 = ctx->r16 & 0X3FF;
    entry_00411C78(rdram, ctx);
    return;
    // 0x0044AC5C: andi        $v0, $s0, 0x3FF
    ctx->r2 = ctx->r16 & 0X3FF;
L_0044AC60:
    // 0x0044AC60: sub.s       $f0, $f2, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f0.fl;
    // 0x0044AC64: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x0044AC68: trunc.w.s   $f7, $f0
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(7 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x0044AC6C: mfc1        $s0, $f7
    ctx->r16 = (int32_t)ctx->f_odd[(7 - 1) * 2];
    // 0x0044AC70: or          $s0, $s0, $v0
    ctx->r16 = ctx->r16 | ctx->r2;
    // 0x0044AC74: andi        $v0, $s0, 0x3FF
    ctx->r2 = ctx->r16 & 0X3FF;
    // 0x0044AC78: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x0044AC7C: or          $v0, $v1, $v0
    ctx->r2 = ctx->r3 | ctx->r2;
    // 0x0044AC80: sw          $v0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r2;
    // 0x0044AC84: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x0044AC88: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0044AC8C: jr          $ra
    // 0x0044AC90: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0044AC90: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00455A04(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_0041CA30:
    // 0x00455A04: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x00455A08: lw          $v0, -0x531C($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X531C);
    // 0x00455A0C: beq         $v0, $zero, L_00455A24
    if (ctx->r2 == 0) {
        // 0x00455A10: nop
    
            goto L_00455A24;
    }
    // 0x00455A10: nop

    // 0x00455A14: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00455A18: addiu       $v0, $v0, 0x5C6C
    ctx->r2 = ADD32(ctx->r2, 0X5C6C);
    // 0x00455A1C: j           L_0041CA30
    // 0x00455A20: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    entry_0041CA30(rdram, ctx);
    return;
    // 0x00455A20: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_00455A24:
    // 0x00455A24: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00455A28: addiu       $v0, $v0, 0x5C60
    ctx->r2 = ADD32(ctx->r2, 0X5C60);
    // 0x00455A2C: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    // 0x00455A30: jr          $ra
    // 0x00455A34: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x00455A34: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void func_004156D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004156D8: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x004156DC: lw          $s5, 0x24($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X24);
    // 0x004156E0: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x004156E4: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x004156E8: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x004156EC: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x004156F0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x004156F4: jr          $ra
    // 0x004156F8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x004156F8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_0025A070(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0025A070: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0025A074: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x0025A078: lw          $v0, 0x14($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X14);
    // 0x0025A07C: lhu         $a3, 0x98($v0)
    ctx->r7 = MEM_HU(ctx->r2, 0X98);
    // 0x0025A080: lui         $a2, 0x800B
    ctx->r6 = S32(0X800B << 16);
    // 0x0025A084: addiu       $a2, $a2, -0x640
    ctx->r6 = ADD32(ctx->r6, -0X640);
    // 0x0025A088: jal         0x00245A98
    // 0x0025A08C: nop

    func_00245A98(rdram, ctx);
        goto after_0;
    // 0x0025A08C: nop

    after_0:
    // 0x0025A090: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x0025A094: jr          $ra
    // 0x0025A098: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0025A098: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00233BD4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00233BD4: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x00233BD8: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x00233BDC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00233BE0: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x00233BE4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x00233BE8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00233BEC: sdc1        $f23, 0x38($sp)
    CHECK_FR(ctx, 23);
    SD(ctx->f23.u64, 0X38, ctx->r29);
    // 0x00233BF0: sdc1        $f22, 0x30($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X30, ctx->r29);
    // 0x00233BF4: sdc1        $f21, 0x28($sp)
    CHECK_FR(ctx, 21);
    SD(ctx->f21.u64, 0X28, ctx->r29);
    // 0x00233BF8: sdc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X20, ctx->r29);
    // 0x00233BFC: lw          $v0, 0x3C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X3C);
    // 0x00233C00: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00233C04: lwc1        $f23, 0x6D28($at)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r1, 0X6D28);
    // 0x00233C08: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x00233C0C: beq         $v0, $zero, L_00233C28
    if (ctx->r2 == 0) {
        // 0x00233C10: addu        $s2, $a0, $zero
        ctx->r18 = ADD32(ctx->r4, 0);
            goto L_00233C28;
    }
    // 0x00233C10: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x00233C14: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00233C18: lwc1        $f0, 0x6D30($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6D30);
    // 0x00233C1C: mul.s       $f0, $f23, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 23);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f23.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f23.fl, ctx->f0.fl);
    // 0x00233C20: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00233C24: swc1        $f0, 0x6D28($at)
    MEM_W(0X6D28, ctx->r1) = ctx->f0.u32l;
L_00233C28:
    // 0x00233C28: lw          $v0, 0x3C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X3C);
    // 0x00233C2C: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x00233C30: beq         $v0, $zero, L_00233C54
    if (ctx->r2 == 0) {
        // 0x00233C34: nop
    
            goto L_00233C54;
    }
    // 0x00233C34: nop

    // 0x00233C38: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00233C3C: lwc1        $f0, 0x6D28($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6D28);
    // 0x00233C40: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00233C44: lwc1        $f1, 0x6D2C($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X6D2C);
    // 0x00233C48: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00233C4C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00233C50: swc1        $f0, 0x6D28($at)
    MEM_W(0X6D28, ctx->r1) = ctx->f0.u32l;
L_00233C54:
    // 0x00233C54: lw          $v0, 0x3C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X3C);
    // 0x00233C58: andi        $v0, $v0, 0x8
    ctx->r2 = ctx->r2 & 0X8;
    // 0x00233C5C: beq         $v0, $zero, L_00233C7C
    if (ctx->r2 == 0) {
        // 0x00233C60: nop
    
            goto L_00233C7C;
    }
    // 0x00233C60: nop

    // 0x00233C64: lw          $v0, 0x50($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X50);
    // 0x00233C68: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        turok2_patch_scale_swoosh_detach(rdram, ctx);

    // 0x00233C6C: sw          $v0, 0x50($s0)
    MEM_W(0X50, ctx->r16) = ctx->r2;
    // 0x00233C70: slti        $v0, $v0, 0x3
    ctx->r2 = SIGNED(ctx->r2) < 0X3 ? 1 : 0;
    // 0x00233C74: beql        $v0, $zero, L_00233C7C
    if (ctx->r2 == 0) {
        // 0x00233C78: sw          $zero, 0x1C($s0)
        MEM_W(0X1C, ctx->r16) = 0;
            goto L_00233C7C;
    }
    goto skip_0;
    // 0x00233C78: sw          $zero, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = 0;
    skip_0:
L_00233C7C:
    // 0x00233C7C: lwc1        $f0, 0x2C($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X2C);
    // 0x00233C80: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x00233C84: c.le.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl <= ctx->f0.fl;
    // 0x00233C88: nop

    // 0x00233C8C: bc1f        L_00233CA8
    if (!c1cs) {
        // 0x00233C90: nop
    
            goto L_00233CA8;
    }
    // 0x00233C90: nop

    // 0x00233C94: lwc1        $f0, 0x30($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X30);
    // 0x00233C98: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00233C9C: lwc1        $f1, 0x6D28($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X6D28);
    // 0x00233CA0: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x00233CA4: swc1        $f0, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->f0.u32l;
L_00233CA8:
    // 0x00233CA8: lwc1        $f0, 0x24($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X24);
    // 0x00233CAC: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00233CB0: lwc1        $f1, 0x6D28($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X6D28);
    // 0x00233CB4: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x00233CB8: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x00233CBC: nop

    // 0x00233CC0: bc1f        L_00233CCC
    if (!c1cs) {
        // 0x00233CC4: swc1        $f0, 0x24($s0)
        MEM_W(0X24, ctx->r16) = ctx->f0.u32l;
            goto L_00233CCC;
    }
    // 0x00233CC4: swc1        $f0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f0.u32l;
    // 0x00233CC8: swc1        $f2, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f2.u32l;
L_00233CCC:
    // 0x00233CCC: lw          $a2, 0x40($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X40);
    // 0x00233CD0: beq         $a2, $zero, L_00233D80
    if (ctx->r6 == 0) {
        // 0x00233CD4: nop
    
            goto L_00233D80;
    }
    // 0x00233CD4: nop

    // 0x00233CD8: mov.s       $f20, $f2
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 2);
    ctx->f20.fl = ctx->f2.fl;
    // 0x00233CDC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00233CE0: lwc1        $f22, 0x6464($at)
    ctx->f22.u32l = MEM_W(ctx->r1, 0X6464);
    // 0x00233CE4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00233CE8: lwc1        $f21, 0x6468($at)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r1, 0X6468);
L_00233CEC:
    // 0x00233CEC: lwc1        $f0, 0x24($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X24);
    // 0x00233CF0: lw          $s1, 0x4($a2)
    ctx->r17 = MEM_W(ctx->r6, 0X4);
    // 0x00233CF4: c.le.s      $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f0.fl <= ctx->f20.fl;
    // 0x00233CF8: nop

    // 0x00233CFC: bc1f        L_00233D18
    if (!c1cs) {
        // 0x00233D00: nop
    
            goto L_00233D18;
    }
    // 0x00233D00: nop

    // 0x00233D04: lwc1        $f0, 0x8($a2)
    ctx->f0.u32l = MEM_W(ctx->r6, 0X8);
    // 0x00233D08: c.lt.s      $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f20.fl < ctx->f0.fl;
    // 0x00233D0C: nop

    // 0x00233D10: bc1tl       L_00233D18
    if (c1cs) {
        // 0x00233D14: swc1        $f20, 0x8($a2)
        MEM_W(0X8, ctx->r6) = ctx->f20.u32l;
            goto L_00233D18;
    }
    goto skip_1;
    // 0x00233D14: swc1        $f20, 0x8($a2)
    MEM_W(0X8, ctx->r6) = ctx->f20.u32l;
    skip_1:
L_00233D18:
    // 0x00233D18: lwc1        $f1, 0x8($a2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r6, 0X8);
    // 0x00233D1C: c.le.s      $f1, $f20
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f1.fl <= ctx->f20.fl;
    // 0x00233D20: nop

    // 0x00233D24: bc1f        L_00233D54
    if (!c1cs) {
        // 0x00233D28: nop
    
            goto L_00233D54;
    }
    // 0x00233D28: nop

    // 0x00233D2C: sub.s       $f0, $f1, $f22
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f0.fl = ctx->f1.fl - ctx->f22.fl;
    // 0x00233D30: c.lt.s      $f0, $f21
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 21);
    c1cs = ctx->f0.fl < ctx->f21.fl;
    // 0x00233D34: nop

    // 0x00233D38: bc1f        L_00233D74
    if (!c1cs) {
        // 0x00233D3C: swc1        $f0, 0x8($a2)
        MEM_W(0X8, ctx->r6) = ctx->f0.u32l;
            goto L_00233D74;
    }
    // 0x00233D3C: swc1        $f0, 0x8($a2)
    MEM_W(0X8, ctx->r6) = ctx->f0.u32l;
    // 0x00233D40: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x00233D44: jal         0x00236040
    // 0x00233D48: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_00236040(rdram, ctx);
        goto after_0;
    // 0x00233D48: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_0:
    // 0x00233D4C: j           L_00233D78
    // 0x00233D50: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
        goto L_00233D78;
    // 0x00233D50: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
L_00233D54:
    // 0x00233D54: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00233D58: lwc1        $f0, 0x6D28($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6D28);
    // 0x00233D5C: sub.s       $f0, $f1, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f1.fl - ctx->f0.fl;
    // 0x00233D60: c.lt.s      $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f0.fl < ctx->f20.fl;
    // 0x00233D64: nop

    // 0x00233D68: bc1f        L_00233D74
    if (!c1cs) {
        // 0x00233D6C: swc1        $f0, 0x8($a2)
        MEM_W(0X8, ctx->r6) = ctx->f0.u32l;
            goto L_00233D74;
    }
    // 0x00233D6C: swc1        $f0, 0x8($a2)
    MEM_W(0X8, ctx->r6) = ctx->f0.u32l;
    // 0x00233D70: swc1        $f20, 0x8($a2)
    MEM_W(0X8, ctx->r6) = ctx->f20.u32l;
L_00233D74:
    // 0x00233D74: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
L_00233D78:
    // 0x00233D78: bne         $a2, $zero, L_00233CEC
    if (ctx->r6 != 0) {
        // 0x00233D7C: nop
    
            goto L_00233CEC;
    }
    // 0x00233D7C: nop

L_00233D80:
    // 0x00233D80: lw          $v1, 0x1C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X1C);
    // 0x00233D84: beq         $v1, $zero, L_00233DB4
    if (ctx->r3 == 0) {
        // 0x00233D88: nop
    
            goto L_00233DB4;
    }
    // 0x00233D88: nop

    // 0x00233D8C: lw          $v0, 0x3C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X3C);
    // 0x00233D90: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x00233D94: beq         $v0, $zero, L_00233DB4
    if (ctx->r2 == 0) {
        // 0x00233D98: nop
    
            goto L_00233DB4;
    }
    // 0x00233D98: nop

    // 0x00233D9C: lw          $v0, 0xD4($v1)
    ctx->r2 = MEM_W(ctx->r3, 0XD4);
    // 0x00233DA0: andi        $v0, $v0, 0x200
    ctx->r2 = ctx->r2 & 0X200;
    // 0x00233DA4: bne         $v0, $zero, L_00233DB4
    if (ctx->r2 != 0) {
        // 0x00233DA8: nop
    
            goto L_00233DB4;
    }
    // 0x00233DA8: nop

    // 0x00233DAC: jal         0x002368B0
    // 0x00233DB0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_002368B0(rdram, ctx);
        goto after_1;
    // 0x00233DB0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
L_00233DB4:
    // 0x00233DB4: lw          $v0, 0x48($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X48);
    // 0x00233DB8: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00233DBC: swc1        $f23, 0x6D28($at)
    MEM_W(0X6D28, ctx->r1) = ctx->f_odd[(23 - 1) * 2];
    // 0x00233DC0: bne         $v0, $zero, L_00233DF0
    if (ctx->r2 != 0) {
        // 0x00233DC4: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_00233DF0;
    }
    // 0x00233DC4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00233DC8: lwc1        $f1, 0x24($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X24);
    // 0x00233DCC: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x00233DD0: c.eq.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl == ctx->f0.fl;
    // 0x00233DD4: nop

    // 0x00233DD8: bc1t        L_00233DF0
    if (c1cs) {
        // 0x00233DDC: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_00233DF0;
    }
    // 0x00233DDC: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x00233DE0: lw          $v0, 0x1C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X1C);
    // 0x00233DE4: bne         $v0, $zero, L_00233DF0
    if (ctx->r2 != 0) {
        // 0x00233DE8: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_00233DF0;
    }
    // 0x00233DE8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00233DEC: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_00233DF0:
    // 0x00233DF0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x00233DF4: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x00233DF8: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00233DFC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00233E00: ldc1        $f23, 0x38($sp)
    CHECK_FR(ctx, 23);
    ctx->f23.u64 = LD(ctx->r29, 0X38);
    // 0x00233E04: ldc1        $f22, 0x30($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X30);
    // 0x00233E08: ldc1        $f21, 0x28($sp)
    CHECK_FR(ctx, 21);
    ctx->f21.u64 = LD(ctx->r29, 0X28);
    // 0x00233E0C: ldc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X20);
    // 0x00233E10: jr          $ra
    // 0x00233E14: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x00233E14: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_0021E980(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0021E980: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0021E984: sb          $v0, 0xE3($a0)
    MEM_B(0XE3, ctx->r4) = ctx->r2;
    // 0x0021E988: lw          $v0, 0xD4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XD4);
    // 0x0021E98C: addiu       $v1, $zero, -0x401
    ctx->r3 = ADD32(0, -0X401);
    // 0x0021E990: sw          $zero, 0xD8($a0)
    MEM_W(0XD8, ctx->r4) = 0;
    // 0x0021E994: sb          $zero, 0xE2($a0)
    MEM_B(0XE2, ctx->r4) = 0;
    // 0x0021E998: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x0021E99C: jr          $ra
    // 0x0021E9A0: sw          $v0, 0xD4($a0)
    MEM_W(0XD4, ctx->r4) = ctx->r2;
    return;
    // 0x0021E9A0: sw          $v0, 0xD4($a0)
    MEM_W(0XD4, ctx->r4) = ctx->r2;
;}
RECOMP_FUNC void func_00276790(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00276790: lw          $a2, 0x8($a0)
    ctx->r6 = MEM_W(ctx->r4, 0X8);
    // 0x00276794: addiu       $v0, $a0, 0x4
    ctx->r2 = ADD32(ctx->r4, 0X4);
    // 0x00276798: beq         $a2, $v0, L_002767F0
    if (ctx->r6 == ctx->r2) {
        // 0x0027679C: addiu       $t1, $a0, 0xD8
        ctx->r9 = ADD32(ctx->r4, 0XD8);
            goto L_002767F0;
    }
    // 0x0027679C: addiu       $t1, $a0, 0xD8
    ctx->r9 = ADD32(ctx->r4, 0XD8);
    // 0x002767A0: addu        $t0, $v0, $zero
    ctx->r8 = ADD32(ctx->r2, 0);
L_002767A4:
    // 0x002767A4: lw          $v0, 0xAC($a2)
    ctx->r2 = MEM_W(ctx->r6, 0XAC);
    // 0x002767A8: lw          $a3, 0x4($a2)
    ctx->r7 = MEM_W(ctx->r6, 0X4);
    // 0x002767AC: and         $v0, $v0, $a1
    ctx->r2 = ctx->r2 & ctx->r5;
    // 0x002767B0: beql        $v0, $zero, L_002767E8
    if (ctx->r2 == 0) {
        // 0x002767B4: addu        $a2, $a3, $zero
        ctx->r6 = ADD32(ctx->r7, 0);
            goto L_002767E8;
    }
    goto skip_0;
    // 0x002767B4: addu        $a2, $a3, $zero
    ctx->r6 = ADD32(ctx->r7, 0);
    skip_0:
    // 0x002767B8: lw          $v0, 0x0($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X0);
    // 0x002767BC: sw          $a3, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r7;
    // 0x002767C0: lw          $v1, 0x4($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X4);
    // 0x002767C4: lw          $v0, 0x0($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X0);
    // 0x002767C8: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x002767CC: lw          $v0, 0xD8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XD8);
    // 0x002767D0: sw          $t1, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r9;
    // 0x002767D4: sw          $v0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r2;
    // 0x002767D8: lw          $v0, 0xD8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XD8);
    // 0x002767DC: sw          $a2, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r6;
    // 0x002767E0: sw          $a2, 0xD8($a0)
    MEM_W(0XD8, ctx->r4) = ctx->r6;
    // 0x002767E4: addu        $a2, $a3, $zero
    ctx->r6 = ADD32(ctx->r7, 0);
L_002767E8:
    // 0x002767E8: bne         $a2, $t0, L_002767A4
    if (ctx->r6 != ctx->r8) {
        // 0x002767EC: nop
    
            goto L_002767A4;
    }
    // 0x002767EC: nop

L_002767F0:
    // 0x002767F0: jr          $ra
    // 0x002767F4: nop

    return;
    // 0x002767F4: nop

;}
RECOMP_FUNC void func_004677B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004677B4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x004677B8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x004677BC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x004677C0: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x004677C4: lw          $v1, -0x5378($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X5378);
    // 0x004677C8: addiu       $v0, $zero, 0xD
    ctx->r2 = ADD32(0, 0XD);
    // 0x004677CC: bne         $v1, $v0, L_004677F4
    if (ctx->r3 != ctx->r2) {
        // 0x004677D0: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_004677F4;
    }
    // 0x004677D0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x004677D4: jal         0x0028D0E0
    // 0x004677D8: nop

    func_0028D0E0(rdram, ctx);
        goto after_0;
    // 0x004677D8: nop

    after_0:
    // 0x004677DC: beq         $v0, $zero, L_004677F4
    if (ctx->r2 == 0) {
        // 0x004677E0: nop
    
            goto L_004677F4;
    }
    // 0x004677E0: nop

    // 0x004677E4: jal         0x0028D100
    // 0x004677E8: nop

    func_0028D100(rdram, ctx);
        goto after_1;
    // 0x004677E8: nop

    after_1:
    // 0x004677EC: jal         0x0028D0F0
    // 0x004677F0: nop

    func_0028D0F0(rdram, ctx);
        goto after_2;
    // 0x004677F0: nop

    after_2:
L_004677F4:
    // 0x004677F4: lw          $s0, 0x20($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X20);
    // 0x004677F8: beq         $s0, $zero, L_0046782C
    if (ctx->r16 == 0) {
        // 0x004677FC: nop
    
            goto L_0046782C;
    }
    // 0x004677FC: nop

L_00467800:
    // 0x00467800: jal         0x0042DD94
    // 0x00467804: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    entry_0042DD94(rdram, ctx);
        goto after_3;
    // 0x00467804: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x00467808: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0046780C: jal         0x0024CF58
    // 0x00467810: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_0024CF58(rdram, ctx);
        goto after_4;
    // 0x00467810: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_4:
    // 0x00467814: lw          $a0, 0x51C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X51C);
    // 0x00467818: jal         0x00284254
    // 0x0046781C: nop

    func_00284254(rdram, ctx);
        goto after_5;
    // 0x0046781C: nop

    after_5:
    // 0x00467820: lw          $s0, 0x1320($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X1320);
    // 0x00467824: bne         $s0, $zero, L_00467800
    if (ctx->r16 != 0) {
        // 0x00467828: nop
    
            goto L_00467800;
    }
    // 0x00467828: nop

L_0046782C:
    // 0x0046782C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x00467830: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00467834: jr          $ra
    // 0x00467838: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00467838: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00427B40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00427B40: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00427B44: jr          $ra
    // 0x00427B48: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x00427B48: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_0025619C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0025619C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x002561A0: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x002561A4: jal         0x00251698
    // 0x002561A8: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    func_00251698(rdram, ctx);
        goto after_0;
    // 0x002561A8: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    after_0:
    // 0x002561AC: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x002561B0: jr          $ra
    // 0x002561B4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x002561B4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0045DF7C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
;}
RECOMP_FUNC void func_0024A0DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0024A0DC: addiu       $sp, $sp, -0xD0
    ctx->r29 = ADD32(ctx->r29, -0XD0);
    // 0x0024A0E0: sw          $s3, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r19;
    // 0x0024A0E4: addu        $s3, $a0, $zero
    ctx->r19 = ADD32(ctx->r4, 0);
    // 0x0024A0E8: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x0024A0EC: sw          $ra, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r31;
    // 0x0024A0F0: sw          $s5, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->r21;
    // 0x0024A0F4: sw          $s4, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->r20;
    // 0x0024A0F8: sw          $s2, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r18;
    // 0x0024A0FC: sw          $s1, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r17;
    // 0x0024A100: sw          $s0, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r16;
    // 0x0024A104: sdc1        $f24, 0xC8($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0XC8, ctx->r29);
    // 0x0024A108: sdc1        $f23, 0xC0($sp)
    CHECK_FR(ctx, 23);
    SD(ctx->f23.u64, 0XC0, ctx->r29);
    // 0x0024A10C: sdc1        $f22, 0xB8($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0XB8, ctx->r29);
    // 0x0024A110: sdc1        $f21, 0xB0($sp)
    CHECK_FR(ctx, 21);
    SD(ctx->f21.u64, 0XB0, ctx->r29);
    // 0x0024A114: sdc1        $f20, 0xA8($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0XA8, ctx->r29);
    // 0x0024A118: lw          $a0, 0x51C($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X51C);
    // 0x0024A11C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0024A120: lwc1        $f0, 0x6B0C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6B0C);
    // 0x0024A124: addiu       $a2, $sp, 0x40
    ctx->r6 = ADD32(ctx->r29, 0X40);
    // 0x0024A128: sw          $zero, 0x80($sp)
    MEM_W(0X80, ctx->r29) = 0;
    // 0x0024A12C: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x0024A130: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x0024A134: addiu       $a0, $a0, 0x14C
    ctx->r4 = ADD32(ctx->r4, 0X14C);
    // 0x0024A138: jal         0x0020F85C
    // 0x0024A13C: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    func_0020F85C(rdram, ctx);
        goto after_0;
    // 0x0024A13C: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    after_0:
    // 0x0024A140: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
    // 0x0024A144: lh          $v1, 0x996($s3)
    ctx->r3 = MEM_H(ctx->r19, 0X996);
    // 0x0024A148: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0024A14C: lwc1        $f23, 0x6B10($at)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r1, 0X6B10);
    // 0x0024A150: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x0024A154: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0024A158: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x0024A15C: lw          $v0, -0x9E8($at)
    ctx->r2 = MEM_W(ctx->r1, -0X9E8);
    // 0x0024A160: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0024A164: lwc1        $f24, 0x6B14($at)
    ctx->f24.u32l = MEM_W(ctx->r1, 0X6B14);
    // 0x0024A168: lh          $s5, 0xE($v0)
    ctx->r21 = MEM_H(ctx->r2, 0XE);
    // 0x0024A16C: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x0024A170: beq         $v1, $v0, L_0024A1B8
    if (ctx->r3 == ctx->r2) {
        // 0x0024A174: addiu       $s4, $s5, 0x64
        ctx->r20 = ADD32(ctx->r21, 0X64);
            goto L_0024A1B8;
    }
    // 0x0024A174: addiu       $s4, $s5, 0x64
    ctx->r20 = ADD32(ctx->r21, 0X64);
    // 0x0024A178: slti        $v0, $v1, 0x11
    ctx->r2 = SIGNED(ctx->r3) < 0X11 ? 1 : 0;
    // 0x0024A17C: beq         $v0, $zero, L_0024A194
    if (ctx->r2 == 0) {
        // 0x0024A180: addiu       $v0, $zero, 0xD
        ctx->r2 = ADD32(0, 0XD);
            goto L_0024A194;
    }
    // 0x0024A180: addiu       $v0, $zero, 0xD
    ctx->r2 = ADD32(0, 0XD);
    // 0x0024A184: beq         $v1, $v0, L_0024A1A8
    if (ctx->r3 == ctx->r2) {
        // 0x0024A188: nop
    
            goto L_0024A1A8;
    }
    // 0x0024A188: nop

    // 0x0024A18C: j           L_0024A1D8
    // 0x0024A190: nop

        goto L_0024A1D8;
    // 0x0024A190: nop

L_0024A194:
    // 0x0024A194: addiu       $v0, $zero, 0x1D
    ctx->r2 = ADD32(0, 0X1D);
    // 0x0024A198: beq         $v1, $v0, L_0024A1C8
    if (ctx->r3 == ctx->r2) {
        // 0x0024A19C: nop
    
            goto L_0024A1C8;
    }
    // 0x0024A19C: nop

    // 0x0024A1A0: j           L_0024A1D8
    // 0x0024A1A4: nop

        goto L_0024A1D8;
    // 0x0024A1A4: nop

L_0024A1A8:
    // 0x0024A1A8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0024A1AC: lwc1        $f21, 0x6B18($at)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r1, 0X6B18);
    // 0x0024A1B0: j           L_0024A1E0
    // 0x0024A1B4: mov.s       $f22, $f21
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 21);
    ctx->f22.fl = ctx->f21.fl;
        goto L_0024A1E0;
    // 0x0024A1B4: mov.s       $f22, $f21
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 21);
    ctx->f22.fl = ctx->f21.fl;
L_0024A1B8:
    // 0x0024A1B8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0024A1BC: lwc1        $f21, 0x6B1C($at)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r1, 0X6B1C);
    // 0x0024A1C0: j           L_0024A1E0
    // 0x0024A1C4: mov.s       $f22, $f21
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 21);
    ctx->f22.fl = ctx->f21.fl;
        goto L_0024A1E0;
    // 0x0024A1C4: mov.s       $f22, $f21
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 21);
    ctx->f22.fl = ctx->f21.fl;
L_0024A1C8:
    // 0x0024A1C8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0024A1CC: lwc1        $f21, 0x6B20($at)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r1, 0X6B20);
    // 0x0024A1D0: j           L_0024A1E0
    // 0x0024A1D4: mov.s       $f22, $f21
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 21);
    ctx->f22.fl = ctx->f21.fl;
        goto L_0024A1E0;
    // 0x0024A1D4: mov.s       $f22, $f21
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 21);
    ctx->f22.fl = ctx->f21.fl;
L_0024A1D8:
    // 0x0024A1D8: mtc1        $zero, $f21
    ctx->f_odd[(21 - 1) * 2] = 0;
    // 0x0024A1DC: mov.s       $f22, $f21
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 21);
    ctx->f22.fl = ctx->f21.fl;
L_0024A1E0:
    // 0x0024A1E0: lhu         $v0, 0x996($s3)
    ctx->r2 = MEM_HU(ctx->r19, 0X996);
    // 0x0024A1E4: addiu       $v0, $v0, -0x3
    ctx->r2 = ADD32(ctx->r2, -0X3);
    // 0x0024A1E8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x0024A1EC: sra         $v1, $v0, 16
    ctx->r3 = S32(SIGNED(ctx->r2) >> 16);
    // 0x0024A1F0: sltiu       $v0, $v1, 0x1B
    ctx->r2 = ctx->r3 < 0X1B ? 1 : 0;
    // 0x0024A1F4: beq         $v0, $zero, L_0024A264
    if (ctx->r2 == 0) {
        // 0x0024A1F8: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_0024A264;
    }
    // 0x0024A1F8: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x0024A1FC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0024A200: addu        $at, $at, $v0
    gpr jr_addend_0024A208 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x0024A204: lw          $v0, 0x6B28($at)
    ctx->r2 = ADD32(ctx->r1, 0X6B28);
    // 0x0024A208: jr          $v0
    // 0x0024A20C: nop

    switch (jr_addend_0024A208 >> 2) {
        case 0: goto L_0024A230; break;
        case 1: goto L_0024A264; break;
        case 2: goto L_0024A264; break;
        case 3: goto L_0024A264; break;
        case 4: goto L_0024A264; break;
        case 5: goto L_0024A264; break;
        case 6: goto L_0024A264; break;
        case 7: goto L_0024A210; break;
        case 8: goto L_0024A264; break;
        case 9: goto L_0024A264; break;
        case 10: goto L_0024A248; break;
        case 11: goto L_0024A264; break;
        case 12: goto L_0024A264; break;
        case 13: goto L_0024A248; break;
        case 14: goto L_0024A264; break;
        case 15: goto L_0024A264; break;
        case 16: goto L_0024A264; break;
        case 17: goto L_0024A264; break;
        case 18: goto L_0024A264; break;
        case 19: goto L_0024A264; break;
        case 20: goto L_0024A264; break;
        case 21: goto L_0024A264; break;
        case 22: goto L_0024A264; break;
        case 23: goto L_0024A264; break;
        case 24: goto L_0024A210; break;
        case 25: goto L_0024A264; break;
        case 26: goto L_0024A248; break;
        default: switch_error(__func__, 0x0024A208, 0x800A6B28);
    }
    // 0x0024A20C: nop

L_0024A210:
    // 0x0024A210: lw          $v0, 0xB8C($s3)
    ctx->r2 = MEM_W(ctx->r19, 0XB8C);
    // 0x0024A214: beq         $v0, $zero, L_0024A268
    if (ctx->r2 == 0) {
        // 0x0024A218: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_0024A268;
    }
    // 0x0024A218: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x0024A21C: lw          $v1, 0xCC4($s3)
    ctx->r3 = MEM_W(ctx->r19, 0XCC4);
    // 0x0024A220: bne         $v1, $v0, L_0024A26C
    if (ctx->r3 != ctx->r2) {
        // 0x0024A224: addiu       $a0, $sp, 0x50
        ctx->r4 = ADD32(ctx->r29, 0X50);
            goto L_0024A26C;
    }
    // 0x0024A224: addiu       $a0, $sp, 0x50
    ctx->r4 = ADD32(ctx->r29, 0X50);
    // 0x0024A228: j           L_0024A264
    // 0x0024A22C: addiu       $s5, $zero, 0x2E4
    ctx->r21 = ADD32(0, 0X2E4);
        goto L_0024A264;
    // 0x0024A22C: addiu       $s5, $zero, 0x2E4
    ctx->r21 = ADD32(0, 0X2E4);
L_0024A230:
    // 0x0024A230: lw          $v1, 0xCC4($s3)
    ctx->r3 = MEM_W(ctx->r19, 0XCC4);
    // 0x0024A234: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x0024A238: beq         $v1, $v0, L_0024A26C
    if (ctx->r3 == ctx->r2) {
        // 0x0024A23C: addiu       $a0, $sp, 0x50
        ctx->r4 = ADD32(ctx->r29, 0X50);
            goto L_0024A26C;
    }
    // 0x0024A23C: addiu       $a0, $sp, 0x50
    ctx->r4 = ADD32(ctx->r29, 0X50);
    // 0x0024A240: j           L_0024A264
    // 0x0024A244: addiu       $s5, $zero, 0x2DA
    ctx->r21 = ADD32(0, 0X2DA);
        goto L_0024A264;
    // 0x0024A244: addiu       $s5, $zero, 0x2DA
    ctx->r21 = ADD32(0, 0X2DA);
L_0024A248:
    // 0x0024A248: addiu       $a0, $sp, 0x50
    ctx->r4 = ADD32(ctx->r29, 0X50);
    // 0x0024A24C: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    // 0x0024A250: addiu       $a2, $sp, 0x80
    ctx->r6 = ADD32(ctx->r29, 0X80);
    // 0x0024A254: jal         0x00249C20
    // 0x0024A258: addiu       $a3, $sp, 0x10
    ctx->r7 = ADD32(ctx->r29, 0X10);
    func_00249C20(rdram, ctx);
        goto after_1;
    // 0x0024A258: addiu       $a3, $sp, 0x10
    ctx->r7 = ADD32(ctx->r29, 0X10);
    after_1:
    // 0x0024A25C: j           L_0024A268
    // 0x0024A260: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
        goto L_0024A268;
    // 0x0024A260: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
L_0024A264:
    // 0x0024A264: addiu       $s4, $zero, -0x1
    ctx->r20 = ADD32(0, -0X1);
L_0024A268:
    // 0x0024A268: addiu       $a0, $sp, 0x50
    ctx->r4 = ADD32(ctx->r29, 0X50);
L_0024A26C:
    // 0x0024A26C: jal         0x0021AE6C
    // 0x0024A270: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    func_0021AE6C(rdram, ctx);
        goto after_2;
    // 0x0024A270: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    after_2:
    // 0x0024A274: lw          $v0, 0x80($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X80);
    // 0x0024A278: lw          $t0, 0x50($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X50);
    // 0x0024A27C: lw          $t1, 0x54($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X54);
    // 0x0024A280: lw          $t2, 0x58($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X58);
    // 0x0024A284: lw          $t3, 0x5C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X5C);
    // 0x0024A288: sw          $t0, 0xB7C($s3)
    MEM_W(0XB7C, ctx->r19) = ctx->r8;
    // 0x0024A28C: sw          $t1, 0xB80($s3)
    MEM_W(0XB80, ctx->r19) = ctx->r9;
    // 0x0024A290: sw          $t2, 0xB84($s3)
    MEM_W(0XB84, ctx->r19) = ctx->r10;
    // 0x0024A294: sw          $t3, 0xB88($s3)
    MEM_W(0XB88, ctx->r19) = ctx->r11;
    // 0x0024A298: bne         $v0, $zero, L_0024A30C
    if (ctx->r2 != 0) {
        // 0x0024A29C: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_0024A30C;
    }
    // 0x0024A29C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x0024A2A0: lw          $t0, 0x40($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X40);
    // 0x0024A2A4: lw          $t1, 0x44($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X44);
    // 0x0024A2A8: lw          $t2, 0x48($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X48);
    // 0x0024A2AC: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x0024A2B0: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x0024A2B4: sw          $t2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r10;
    // 0x0024A2B8: lw          $v0, 0x518($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X518);
    // 0x0024A2BC: lbu         $v0, 0x2E($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X2E);
    // 0x0024A2C0: beq         $v0, $zero, L_0024A30C
    if (ctx->r2 == 0) {
        // 0x0024A2C4: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_0024A30C;
    }
    // 0x0024A2C4: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x0024A2C8: beq         $s0, $zero, L_0024A30C
    if (ctx->r16 == 0) {
        // 0x0024A2CC: addiu       $a0, $sp, 0x70
        ctx->r4 = ADD32(ctx->r29, 0X70);
            goto L_0024A30C;
    }
    // 0x0024A2CC: addiu       $a0, $sp, 0x70
    ctx->r4 = ADD32(ctx->r29, 0X70);
    // 0x0024A2D0: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    // 0x0024A2D4: addiu       $a2, $sp, 0x84
    ctx->r6 = ADD32(ctx->r29, 0X84);
    // 0x0024A2D8: jal         0x00249C20
    // 0x0024A2DC: addiu       $a3, $sp, 0x60
    ctx->r7 = ADD32(ctx->r29, 0X60);
    func_00249C20(rdram, ctx);
        goto after_3;
    // 0x0024A2DC: addiu       $a3, $sp, 0x60
    ctx->r7 = ADD32(ctx->r29, 0X60);
    after_3:
    // 0x0024A2E0: lw          $v0, 0x84($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X84);
    // 0x0024A2E4: beq         $v0, $zero, L_0024A30C
    if (ctx->r2 == 0) {
        // 0x0024A2E8: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_0024A30C;
    }
    // 0x0024A2E8: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x0024A2EC: lw          $t0, 0x70($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X70);
    // 0x0024A2F0: lw          $t1, 0x74($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X74);
    // 0x0024A2F4: lw          $t2, 0x78($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X78);
    // 0x0024A2F8: lw          $t3, 0x7C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X7C);
    // 0x0024A2FC: sw          $t0, 0xB7C($s3)
    MEM_W(0XB7C, ctx->r19) = ctx->r8;
    // 0x0024A300: sw          $t1, 0xB80($s3)
    MEM_W(0XB80, ctx->r19) = ctx->r9;
    // 0x0024A304: sw          $t2, 0xB84($s3)
    MEM_W(0XB84, ctx->r19) = ctx->r10;
    // 0x0024A308: sw          $t3, 0xB88($s3)
    MEM_W(0XB88, ctx->r19) = ctx->r11;
L_0024A30C:
    // 0x0024A30C: bne         $s5, $v0, L_0024A31C
    if (ctx->r21 != ctx->r2) {
        // 0x0024A310: nop
    
            goto L_0024A31C;
    }
    // 0x0024A310: nop

    // 0x0024A314: j           L_0024A378
    // 0x0024A318: sw          $zero, 0xB2C($s3)
    MEM_W(0XB2C, ctx->r19) = 0;
        goto L_0024A378;
    // 0x0024A318: sw          $zero, 0xB2C($s3)
    MEM_W(0XB2C, ctx->r19) = 0;
L_0024A31C:
    // 0x0024A31C: lw          $v0, 0xB2C($s3)
    ctx->r2 = MEM_W(ctx->r19, 0XB2C);
    // 0x0024A320: bne         $v0, $zero, L_0024A37C
    if (ctx->r2 != 0) {
        // 0x0024A324: addiu       $s1, $sp, 0x30
        ctx->r17 = ADD32(ctx->r29, 0X30);
            goto L_0024A37C;
    }
    // 0x0024A324: addiu       $s1, $sp, 0x30
    ctx->r17 = ADD32(ctx->r29, 0X30);
    // 0x0024A328: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0024A32C: sw          $v0, 0xB2C($s3)
    MEM_W(0XB2C, ctx->r19) = ctx->r2;
    // 0x0024A330: lw          $t0, 0x40($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X40);
    // 0x0024A334: lw          $t1, 0x44($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X44);
    // 0x0024A338: lw          $t2, 0x48($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X48);
    // 0x0024A33C: sw          $t0, 0xB40($s3)
    MEM_W(0XB40, ctx->r19) = ctx->r8;
    // 0x0024A340: sw          $t1, 0xB44($s3)
    MEM_W(0XB44, ctx->r19) = ctx->r9;
    // 0x0024A344: sw          $t2, 0xB48($s3)
    MEM_W(0XB48, ctx->r19) = ctx->r10;
    // 0x0024A348: sw          $zero, 0xB4C($s3)
    MEM_W(0XB4C, ctx->r19) = 0;
    // 0x0024A34C: sw          $zero, 0xB50($s3)
    MEM_W(0XB50, ctx->r19) = 0;
    // 0x0024A350: sw          $zero, 0xB54($s3)
    MEM_W(0XB54, ctx->r19) = 0;
    // 0x0024A354: lw          $t0, 0x40($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X40);
    // 0x0024A358: lw          $t1, 0x44($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X44);
    // 0x0024A35C: lw          $t2, 0x48($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X48);
    // 0x0024A360: sw          $t0, 0xB64($s3)
    MEM_W(0XB64, ctx->r19) = ctx->r8;
    // 0x0024A364: sw          $t1, 0xB68($s3)
    MEM_W(0XB68, ctx->r19) = ctx->r9;
    // 0x0024A368: sw          $t2, 0xB6C($s3)
    MEM_W(0XB6C, ctx->r19) = ctx->r10;
    // 0x0024A36C: sw          $zero, 0xB70($s3)
    MEM_W(0XB70, ctx->r19) = 0;
    // 0x0024A370: sw          $zero, 0xB74($s3)
    MEM_W(0XB74, ctx->r19) = 0;
    // 0x0024A374: sw          $zero, 0xB78($s3)
    MEM_W(0XB78, ctx->r19) = 0;
L_0024A378:
    // 0x0024A378: addiu       $s1, $sp, 0x30
    ctx->r17 = ADD32(ctx->r29, 0X30);
L_0024A37C:
    // 0x0024A37C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0024A380: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x0024A384: addiu       $s2, $s3, 0xB64
    ctx->r18 = ADD32(ctx->r19, 0XB64);
    // 0x0024A388: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0024A38C: lwc1        $f20, 0x6B94($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X6B94);
    // 0x0024A390: jal         0x0020EF2C
    // 0x0024A394: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    func_0020EF2C(rdram, ctx);
        goto after_4;
    // 0x0024A394: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    after_4:
    // 0x0024A398: mul.s       $f2, $f23, $f20
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 23);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f23.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f2.fl = MUL_S(ctx->f23.fl, ctx->f20.fl);
    // 0x0024A39C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0024A3A0: mfc1        $a2, $f2
    ctx->r6 = (int32_t)ctx->f2.u32l;
    // 0x0024A3A4: jal         0x0020EF60
    // 0x0024A3A8: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_0020EF60(rdram, ctx);
        goto after_5;
    // 0x0024A3A8: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_5:
    // 0x0024A3AC: addiu       $s0, $s3, 0xB70
    ctx->r16 = ADD32(ctx->r19, 0XB70);
    // 0x0024A3B0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0024A3B4: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x0024A3B8: jal         0x0020EEF8
    // 0x0024A3BC: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    func_0020EEF8(rdram, ctx);
        goto after_6;
    // 0x0024A3BC: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    after_6:
    // 0x0024A3C0: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x0024A3C4: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x0024A3C8: jal         0x0020EEF8
    // 0x0024A3CC: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    func_0020EEF8(rdram, ctx);
        goto after_7;
    // 0x0024A3CC: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    after_7:
    // 0x0024A3D0: mul.s       $f20, $f24, $f20
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f20.fl = MUL_S(ctx->f24.fl, ctx->f20.fl);
    // 0x0024A3D4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0024A3D8: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x0024A3DC: jal         0x0020EF60
    // 0x0024A3E0: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    func_0020EF60(rdram, ctx);
        goto after_8;
    // 0x0024A3E0: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    after_8:
    // 0x0024A3E4: lw          $v0, 0x80($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X80);
    // 0x0024A3E8: beql        $v0, $zero, L_0024A410
    if (ctx->r2 == 0) {
        // 0x0024A3EC: sw          $s4, 0xB5C($s3)
        MEM_W(0XB5C, ctx->r19) = ctx->r20;
            goto L_0024A410;
    }
    goto skip_0;
    // 0x0024A3EC: sw          $s4, 0xB5C($s3)
    MEM_W(0XB5C, ctx->r19) = ctx->r20;
    skip_0:
    // 0x0024A3F0: lh          $v0, 0x996($s3)
    ctx->r2 = MEM_H(ctx->r19, 0X996);
    // 0x0024A3F4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x0024A3F8: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0024A3FC: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x0024A400: lw          $v0, -0x9E8($at)
    ctx->r2 = MEM_W(ctx->r1, -0X9E8);
    // 0x0024A404: lh          $v0, 0x10($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X10);
    // 0x0024A408: addiu       $v0, $v0, 0x64
    ctx->r2 = ADD32(ctx->r2, 0X64);
    // 0x0024A40C: sw          $v0, 0xB5C($s3)
    MEM_W(0XB5C, ctx->r19) = ctx->r2;
L_0024A410:
    // 0x0024A410: lw          $v1, 0xB2C($s3)
    ctx->r3 = MEM_W(ctx->r19, 0XB2C);
    // 0x0024A414: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0024A418: beq         $v1, $v0, L_0024A448
    if (ctx->r3 == ctx->r2) {
        // 0x0024A41C: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_0024A448;
    }
    // 0x0024A41C: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x0024A420: beq         $v0, $zero, L_0024A438
    if (ctx->r2 == 0) {
        // 0x0024A424: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_0024A438;
    }
    // 0x0024A424: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x0024A428: beq         $v1, $zero, L_0024A5C8
    if (ctx->r3 == 0) {
        // 0x0024A42C: addiu       $s0, $sp, 0x30
        ctx->r16 = ADD32(ctx->r29, 0X30);
            goto L_0024A5C8;
    }
    // 0x0024A42C: addiu       $s0, $sp, 0x30
    ctx->r16 = ADD32(ctx->r29, 0X30);
    // 0x0024A430: j           L_0024A5E8
    // 0x0024A434: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
        goto L_0024A5E8;
    // 0x0024A434: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_0024A438:
    // 0x0024A438: beq         $v1, $v0, L_0024A498
    if (ctx->r3 == ctx->r2) {
        // 0x0024A43C: addiu       $s0, $sp, 0x30
        ctx->r16 = ADD32(ctx->r29, 0X30);
            goto L_0024A498;
    }
    // 0x0024A43C: addiu       $s0, $sp, 0x30
    ctx->r16 = ADD32(ctx->r29, 0X30);
    // 0x0024A440: j           L_0024A5E8
    // 0x0024A444: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
        goto L_0024A5E8;
    // 0x0024A444: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_0024A448:
    // 0x0024A448: lw          $v1, 0x80($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X80);
    // 0x0024A44C: beql        $v1, $zero, L_0024A464
    if (ctx->r3 == 0) {
        // 0x0024A450: sw          $v1, 0xB38($s3)
        MEM_W(0XB38, ctx->r19) = ctx->r3;
            goto L_0024A464;
    }
    goto skip_1;
    // 0x0024A450: sw          $v1, 0xB38($s3)
    MEM_W(0XB38, ctx->r19) = ctx->r3;
    skip_1:
    // 0x0024A454: lw          $v0, 0xB38($s3)
    ctx->r2 = MEM_W(ctx->r19, 0XB38);
    // 0x0024A458: beq         $v0, $v1, L_0024A468
    if (ctx->r2 == ctx->r3) {
        // 0x0024A45C: nop
    
            goto L_0024A468;
    }
    // 0x0024A45C: nop

    // 0x0024A460: sw          $v1, 0xB38($s3)
    MEM_W(0XB38, ctx->r19) = ctx->r3;
L_0024A464:
    // 0x0024A464: sw          $zero, 0xB30($s3)
    MEM_W(0XB30, ctx->r19) = 0;
L_0024A468:
    // 0x0024A468: lwc1        $f0, 0xB30($s3)
    ctx->f0.u32l = MEM_W(ctx->r19, 0XB30);
    // 0x0024A46C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0024A470: lwc1        $f1, 0x6D28($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X6D28);
    // 0x0024A474: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x0024A478: c.le.s      $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f22.fl <= ctx->f0.fl;
    // 0x0024A47C: nop

    // 0x0024A480: bc1f        L_0024A5C8
    if (!c1cs) {
        // 0x0024A484: swc1        $f0, 0xB30($s3)
        MEM_W(0XB30, ctx->r19) = ctx->f0.u32l;
            goto L_0024A5C8;
    }
    // 0x0024A484: swc1        $f0, 0xB30($s3)
    MEM_W(0XB30, ctx->r19) = ctx->f0.u32l;
    // 0x0024A488: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x0024A48C: sw          $v0, 0xB2C($s3)
    MEM_W(0XB2C, ctx->r19) = ctx->r2;
    // 0x0024A490: j           L_0024A5C8
    // 0x0024A494: sw          $zero, 0xB30($s3)
    MEM_W(0XB30, ctx->r19) = 0;
        goto L_0024A5C8;
    // 0x0024A494: sw          $zero, 0xB30($s3)
    MEM_W(0XB30, ctx->r19) = 0;
L_0024A498:
    // 0x0024A498: lw          $v0, 0xB58($s3)
    ctx->r2 = MEM_W(ctx->r19, 0XB58);
    // 0x0024A49C: lw          $v1, 0x80($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X80);
    // 0x0024A4A0: beq         $v0, $v1, L_0024A4B4
    if (ctx->r2 == ctx->r3) {
        // 0x0024A4A4: nop
    
            goto L_0024A4B4;
    }
    // 0x0024A4A4: nop

    // 0x0024A4A8: sw          $v1, 0xB58($s3)
    MEM_W(0XB58, ctx->r19) = ctx->r3;
    // 0x0024A4AC: j           L_0024A4C8
    // 0x0024A4B0: sw          $zero, 0xB30($s3)
    MEM_W(0XB30, ctx->r19) = 0;
        goto L_0024A4C8;
    // 0x0024A4B0: sw          $zero, 0xB30($s3)
    MEM_W(0XB30, ctx->r19) = 0;
L_0024A4B4:
    // 0x0024A4B4: lwc1        $f0, 0xB30($s3)
    ctx->f0.u32l = MEM_W(ctx->r19, 0XB30);
    // 0x0024A4B8: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0024A4BC: lwc1        $f1, 0x6D28($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X6D28);
    // 0x0024A4C0: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x0024A4C4: swc1        $f0, 0xB30($s3)
    MEM_W(0XB30, ctx->r19) = ctx->f0.u32l;
L_0024A4C8:
    // 0x0024A4C8: lw          $v1, 0x80($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X80);
    // 0x0024A4CC: beq         $v1, $zero, L_0024A4FC
    if (ctx->r3 == 0) {
        // 0x0024A4D0: nop
    
            goto L_0024A4FC;
    }
    // 0x0024A4D0: nop

    // 0x0024A4D4: lw          $v0, 0xB38($s3)
    ctx->r2 = MEM_W(ctx->r19, 0XB38);
    // 0x0024A4D8: beq         $v0, $v1, L_0024A4FC
    if (ctx->r2 == ctx->r3) {
        // 0x0024A4DC: nop
    
            goto L_0024A4FC;
    }
    // 0x0024A4DC: nop

    // 0x0024A4E0: lwc1        $f0, 0xB30($s3)
    ctx->f0.u32l = MEM_W(ctx->r19, 0XB30);
    // 0x0024A4E4: c.le.s      $f21, $f0
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f21.fl <= ctx->f0.fl;
    // 0x0024A4E8: nop

    // 0x0024A4EC: bc1f        L_0024A4FC
    if (!c1cs) {
        // 0x0024A4F0: nop
    
            goto L_0024A4FC;
    }
    // 0x0024A4F0: nop

    // 0x0024A4F4: sw          $v1, 0xB38($s3)
    MEM_W(0XB38, ctx->r19) = ctx->r3;
    // 0x0024A4F8: sw          $zero, 0xB30($s3)
    MEM_W(0XB30, ctx->r19) = 0;
L_0024A4FC:
    // 0x0024A4FC: lw          $a1, 0xB38($s3)
    ctx->r5 = MEM_W(ctx->r19, 0XB38);
    // 0x0024A500: beq         $a1, $zero, L_0024A5C8
    if (ctx->r5 == 0) {
        // 0x0024A504: sw          $a1, 0x80($sp)
        MEM_W(0X80, ctx->r29) = ctx->r5;
            goto L_0024A5C8;
    }
    // 0x0024A504: sw          $a1, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r5;
    // 0x0024A508: jal         0x00249A58
    // 0x0024A50C: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    func_00249A58(rdram, ctx);
        goto after_9;
    // 0x0024A50C: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    after_9:
    // 0x0024A510: bne         $v0, $zero, L_0024A520
    if (ctx->r2 != 0) {
        // 0x0024A514: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_0024A520;
    }
    // 0x0024A514: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0024A518: sw          $v0, 0xB2C($s3)
    MEM_W(0XB2C, ctx->r19) = ctx->r2;
    // 0x0024A51C: sw          $zero, 0xB30($s3)
    MEM_W(0XB30, ctx->r19) = 0;
L_0024A520:
    // 0x0024A520: lh          $v1, 0x996($s3)
    ctx->r3 = MEM_H(ctx->r19, 0X996);
    // 0x0024A524: addiu       $v0, $zero, 0xD
    ctx->r2 = ADD32(0, 0XD);
    // 0x0024A528: beq         $v1, $v0, L_0024A538
    if (ctx->r3 == ctx->r2) {
        // 0x0024A52C: addiu       $v0, $zero, 0x1D
        ctx->r2 = ADD32(0, 0X1D);
            goto L_0024A538;
    }
    // 0x0024A52C: addiu       $v0, $zero, 0x1D
    ctx->r2 = ADD32(0, 0X1D);
    // 0x0024A530: bne         $v1, $v0, L_0024A55C
    if (ctx->r3 != ctx->r2) {
        // 0x0024A534: nop
    
            goto L_0024A55C;
    }
    // 0x0024A534: nop

L_0024A538:
    // 0x0024A538: lw          $v0, 0x80($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X80);
    // 0x0024A53C: lw          $t0, 0x214($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X214);
    // 0x0024A540: lw          $t1, 0x218($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X218);
    // 0x0024A544: lw          $t2, 0x21C($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X21C);
    // 0x0024A548: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x0024A54C: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x0024A550: sw          $t2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r10;
    // 0x0024A554: j           L_0024A5A8
    // 0x0024A558: nop

        goto L_0024A5A8;
    // 0x0024A558: nop

L_0024A55C:
    // 0x0024A55C: lw          $v0, 0x80($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X80);
    // 0x0024A560: lw          $t0, 0x4($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X4);
    // 0x0024A564: lw          $t1, 0x8($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X8);
    // 0x0024A568: lw          $t2, 0xC($v0)
    ctx->r10 = MEM_W(ctx->r2, 0XC);
    // 0x0024A56C: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x0024A570: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x0024A574: sw          $t2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r10;
    // 0x0024A578: lw          $a0, 0x80($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X80);
    // 0x0024A57C: lwc1        $f0, 0x14($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X14);
    // 0x0024A580: lwc1        $f1, 0x54($a0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r4, 0X54);
    // 0x0024A584: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x0024A588: jal         0x002671B4
    // 0x0024A58C: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    func_002671B4(rdram, ctx);
        goto after_10;
    // 0x0024A58C: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    after_10:
    // 0x0024A590: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0024A594: lwc1        $f1, 0x6B98($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X6B98);
    // 0x0024A598: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0024A59C: lwc1        $f1, 0x14($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X14);
    // 0x0024A5A0: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x0024A5A4: swc1        $f1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
L_0024A5A8:
    // 0x0024A5A8: lh          $v0, 0x996($s3)
    ctx->r2 = MEM_H(ctx->r19, 0X996);
    // 0x0024A5AC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x0024A5B0: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0024A5B4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x0024A5B8: lw          $v0, -0x9E8($at)
    ctx->r2 = MEM_W(ctx->r1, -0X9E8);
    // 0x0024A5BC: lh          $s5, 0x10($v0)
    ctx->r21 = MEM_H(ctx->r2, 0X10);
    // 0x0024A5C0: j           L_0024A5E4
    // 0x0024A5C4: addiu       $s0, $sp, 0x30
    ctx->r16 = ADD32(ctx->r29, 0X30);
        goto L_0024A5E4;
    // 0x0024A5C4: addiu       $s0, $sp, 0x30
    ctx->r16 = ADD32(ctx->r29, 0X30);
L_0024A5C8:
    // 0x0024A5C8: lw          $t0, 0x40($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X40);
    // 0x0024A5CC: lw          $t1, 0x44($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X44);
    // 0x0024A5D0: lw          $t2, 0x48($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X48);
    // 0x0024A5D4: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x0024A5D8: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x0024A5DC: sw          $t2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r10;
    // 0x0024A5E0: addiu       $s0, $sp, 0x30
    ctx->r16 = ADD32(ctx->r29, 0X30);
L_0024A5E4:
    // 0x0024A5E4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_0024A5E8:
    // 0x0024A5E8: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x0024A5EC: addiu       $s2, $s3, 0xB40
    ctx->r18 = ADD32(ctx->r19, 0XB40);
    // 0x0024A5F0: jal         0x0020EF2C
    // 0x0024A5F4: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    func_0020EF2C(rdram, ctx);
        goto after_11;
    // 0x0024A5F4: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    after_11:
    // 0x0024A5F8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0024A5FC: mfc1        $a2, $f23
    ctx->r6 = (int32_t)ctx->f_odd[(23 - 1) * 2];
    // 0x0024A600: jal         0x0020EF60
    // 0x0024A604: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_0020EF60(rdram, ctx);
        goto after_12;
    // 0x0024A604: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_12:
    // 0x0024A608: addiu       $s1, $s3, 0xB4C
    ctx->r17 = ADD32(ctx->r19, 0XB4C);
    // 0x0024A60C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0024A610: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x0024A614: jal         0x0020EEF8
    // 0x0024A618: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    func_0020EEF8(rdram, ctx);
        goto after_13;
    // 0x0024A618: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    after_13:
    // 0x0024A61C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x0024A620: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x0024A624: jal         0x0020EEF8
    // 0x0024A628: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    func_0020EEF8(rdram, ctx);
        goto after_14;
    // 0x0024A628: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    after_14:
    // 0x0024A62C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0024A630: mfc1        $a2, $f24
    ctx->r6 = (int32_t)ctx->f24.u32l;
    // 0x0024A634: jal         0x0020EF60
    // 0x0024A638: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    func_0020EF60(rdram, ctx);
        goto after_15;
    // 0x0024A638: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    after_15:
    // 0x0024A63C: sw          $s5, 0xB3C($s3)
    MEM_W(0XB3C, ctx->r19) = ctx->r21;
    // 0x0024A640: lw          $ra, 0xA0($sp)
    ctx->r31 = MEM_W(ctx->r29, 0XA0);
    // 0x0024A644: lw          $s5, 0x9C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X9C);
    // 0x0024A648: lw          $s4, 0x98($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X98);
    // 0x0024A64C: lw          $s3, 0x94($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X94);
    // 0x0024A650: lw          $s2, 0x90($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X90);
    // 0x0024A654: lw          $s1, 0x8C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X8C);
    // 0x0024A658: lw          $s0, 0x88($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X88);
    // 0x0024A65C: ldc1        $f24, 0xC8($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0XC8);
    // 0x0024A660: ldc1        $f23, 0xC0($sp)
    CHECK_FR(ctx, 23);
    ctx->f23.u64 = LD(ctx->r29, 0XC0);
    // 0x0024A664: ldc1        $f22, 0xB8($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0XB8);
    // 0x0024A668: ldc1        $f21, 0xB0($sp)
    CHECK_FR(ctx, 21);
    ctx->f21.u64 = LD(ctx->r29, 0XB0);
    // 0x0024A66C: ldc1        $f20, 0xA8($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0XA8);
    // 0x0024A670: jr          $ra
    // 0x0024A674: addiu       $sp, $sp, 0xD0
    ctx->r29 = ADD32(ctx->r29, 0XD0);
    return;
    // 0x0024A674: addiu       $sp, $sp, 0xD0
    ctx->r29 = ADD32(ctx->r29, 0XD0);
;}
RECOMP_FUNC void func_0026E348(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0026E348: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0026E34C: addu        $a1, $a2, $zero
    ctx->r5 = ADD32(ctx->r6, 0);
    // 0x0026E350: lui         $v1, 0x800F
    ctx->r3 = S32(0X800F << 16);
    // 0x0026E354: lw          $v1, 0x7078($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X7078);
    // 0x0026E358: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x0026E35C: bne         $v1, $v0, L_0026E36C
    if (ctx->r3 != ctx->r2) {
        // 0x0026E360: sw          $ra, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r31;
            goto L_0026E36C;
    }
    // 0x0026E360: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x0026E364: jal         0x00412314
    // 0x0026E368: nop

    func_00412314(rdram, ctx);
        goto after_0;
    // 0x0026E368: nop

    after_0:
L_0026E36C:
    // 0x0026E36C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x0026E370: jr          $ra
    // 0x0026E374: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0026E374: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0045A21C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0045A21C: lui         $v0, 0x800F
    ctx->r2 = S32(0X800F << 16);
    // 0x0045A220: lw          $v0, 0x70A8($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X70A8);
    // 0x0045A224: jr          $ra
    // 0x0045A228: addiu       $v0, $v0, 0x688
    ctx->r2 = ADD32(ctx->r2, 0X688);
    return;
    // 0x0045A228: addiu       $v0, $v0, 0x688
    ctx->r2 = ADD32(ctx->r2, 0X688);
;}
RECOMP_FUNC void func_00261490(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00261490: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x00261494: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00261498: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x0026149C: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x002614A0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x002614A4: sdc1        $f22, 0x30($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X30, ctx->r29);
    // 0x002614A8: sdc1        $f21, 0x28($sp)
    CHECK_FR(ctx, 21);
    SD(ctx->f21.u64, 0X28, ctx->r29);
    // 0x002614AC: sdc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X20, ctx->r29);
    // 0x002614B0: lwc1        $f0, 0x1C($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X1C);
    // 0x002614B4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002614B8: lwc1        $f1, 0x7A70($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X7A70);
    // 0x002614BC: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x002614C0: mul.s       $f14, $f0, $f1
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f14.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x002614C4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002614C8: lwc1        $f0, 0x7A74($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X7A74);
    // 0x002614CC: c.lt.s      $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f0.fl < ctx->f14.fl;
    // 0x002614D0: nop

    // 0x002614D4: bc1t        L_002614F4
    if (c1cs) {
        // 0x002614D8: addu        $s0, $a1, $zero
        ctx->r16 = ADD32(ctx->r5, 0);
            goto L_002614F4;
    }
    // 0x002614D8: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x002614DC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002614E0: lwc1        $f0, 0x7A78($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X7A78);
    // 0x002614E4: c.lt.s      $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f14.fl < ctx->f0.fl;
    // 0x002614E8: nop

    // 0x002614EC: bc1f        L_002614F8
    if (!c1cs) {
        // 0x002614F0: nop
    
            goto L_002614F8;
    }
    // 0x002614F0: nop

L_002614F4:
    // 0x002614F4: mov.s       $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    ctx->f14.fl = ctx->f0.fl;
L_002614F8:
    // 0x002614F8: lwc1        $f12, 0x10C($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X10C);
    // 0x002614FC: lui         $a2, 0x3D8E
    ctx->r6 = S32(0X3D8E << 16);
    // 0x00261500: ori         $a2, $a2, 0xFA36
    ctx->r6 = ctx->r6 | 0XFA36;
    // 0x00261504: jal         0x00211774
    // 0x00261508: nop

    func_00211774(rdram, ctx);
        goto after_0;
    // 0x00261508: nop

    after_0:
    // 0x0026150C: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // 0x00261510: beq         $v0, $zero, L_00261618
    if (ctx->r2 == 0) {
        // 0x00261514: swc1        $f0, 0x10C($s0)
        MEM_W(0X10C, ctx->r16) = ctx->f0.u32l;
            goto L_00261618;
    }
    // 0x00261514: swc1        $f0, 0x10C($s0)
    MEM_W(0X10C, ctx->r16) = ctx->f0.u32l;
    // 0x00261518: lb          $v1, 0x34($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X34);
    // 0x0026151C: addiu       $v0, $zero, 0x1B
    ctx->r2 = ADD32(0, 0X1B);
    // 0x00261520: bne         $v1, $v0, L_002615C8
    if (ctx->r3 != ctx->r2) {
        // 0x00261524: nop
    
            goto L_002615C8;
    }
    // 0x00261524: nop

    // 0x00261528: lwc1        $f0, 0x40($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X40);
    // 0x0026152C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00261530: lwc1        $f12, 0x7A7C($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X7A7C);
    // 0x00261534: mul.s       $f12, $f0, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = MUL_S(ctx->f0.fl, ctx->f12.fl);
    // 0x00261538: jal         0x002974C0
    // 0x0026153C: nop

    func_002974C0(rdram, ctx);
        goto after_1;
    // 0x0026153C: nop

    after_1:
    // 0x00261540: lwc1        $f20, 0x11C($s0)
    ctx->f20.u32l = MEM_W(ctx->r16, 0X11C);
    // 0x00261544: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00261548: lwc1        $f22, 0x7A80($at)
    ctx->f22.u32l = MEM_W(ctx->r1, 0X7A80);
    // 0x0026154C: mul.s       $f1, $f20, $f22
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f1.fl = MUL_S(ctx->f20.fl, ctx->f22.fl);
    // 0x00261550: sub.s       $f1, $f1, $f20
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f1.fl = ctx->f1.fl - ctx->f20.fl;
    // 0x00261554: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00261558: lwc1        $f2, 0x7A84($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X7A84);
    // 0x0026155C: mul.s       $f1, $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f2.fl);
    // 0x00261560: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00261564: lwc1        $f2, 0x7A88($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X7A88);
    // 0x00261568: add.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f2.fl;
    // 0x0026156C: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00261570: add.s       $f20, $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = ctx->f20.fl + ctx->f0.fl;
    // 0x00261574: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00261578: lwc1        $f14, 0x7A8C($at)
    ctx->f14.u32l = MEM_W(ctx->r1, 0X7A8C);
    // 0x0026157C: mul.s       $f14, $f20, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = MUL_S(ctx->f20.fl, ctx->f14.fl);
    // 0x00261580: lwc1        $f12, 0x34($s1)
    ctx->f12.u32l = MEM_W(ctx->r17, 0X34);
    // 0x00261584: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00261588: lwc1        $f21, 0x7A90($at)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r1, 0X7A90);
    // 0x0026158C: mfc1        $a2, $f21
    ctx->r6 = (int32_t)ctx->f_odd[(21 - 1) * 2];
    // 0x00261590: jal         0x00211774
    // 0x00261594: add.s       $f14, $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = ctx->f14.fl + ctx->f14.fl;
    func_00211774(rdram, ctx);
        goto after_2;
    // 0x00261594: add.s       $f14, $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = ctx->f14.fl + ctx->f14.fl;
    after_2:
    // 0x00261598: mul.s       $f20, $f20, $f22
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f20.fl = MUL_S(ctx->f20.fl, ctx->f22.fl);
    // 0x0026159C: lwc1        $f12, 0x38($s1)
    ctx->f12.u32l = MEM_W(ctx->r17, 0X38);
    // 0x002615A0: mfc1        $a2, $f21
    ctx->r6 = (int32_t)ctx->f_odd[(21 - 1) * 2];
    // 0x002615A4: add.s       $f20, $f20, $f20
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f20.fl = ctx->f20.fl + ctx->f20.fl;
    // 0x002615A8: swc1        $f0, 0x34($s1)
    MEM_W(0X34, ctx->r17) = ctx->f0.u32l;
    // 0x002615AC: jal         0x00211774
    // 0x002615B0: mov.s       $f14, $f20
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 20);
    ctx->f14.fl = ctx->f20.fl;
    func_00211774(rdram, ctx);
        goto after_3;
    // 0x002615B0: mov.s       $f14, $f20
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 20);
    ctx->f14.fl = ctx->f20.fl;
    after_3:
    // 0x002615B4: lwc1        $f12, 0x3C($s1)
    ctx->f12.u32l = MEM_W(ctx->r17, 0X3C);
    // 0x002615B8: mfc1        $a2, $f21
    ctx->r6 = (int32_t)ctx->f_odd[(21 - 1) * 2];
    // 0x002615BC: mov.s       $f14, $f20
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 20);
    ctx->f14.fl = ctx->f20.fl;
    // 0x002615C0: j           L_0026160C
    // 0x002615C4: swc1        $f0, 0x38($s1)
    MEM_W(0X38, ctx->r17) = ctx->f0.u32l;
        goto L_0026160C;
    // 0x002615C4: swc1        $f0, 0x38($s1)
    MEM_W(0X38, ctx->r17) = ctx->f0.u32l;
L_002615C8:
    // 0x002615C8: lwc1        $f12, 0x34($s1)
    ctx->f12.u32l = MEM_W(ctx->r17, 0X34);
    // 0x002615CC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002615D0: lwc1        $f20, 0x7A94($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X7A94);
    // 0x002615D4: lwc1        $f14, 0x11C($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0X11C);
    // 0x002615D8: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x002615DC: jal         0x00211774
    // 0x002615E0: nop

    func_00211774(rdram, ctx);
        goto after_4;
    // 0x002615E0: nop

    after_4:
    // 0x002615E4: lwc1        $f12, 0x38($s1)
    ctx->f12.u32l = MEM_W(ctx->r17, 0X38);
    // 0x002615E8: swc1        $f0, 0x34($s1)
    MEM_W(0X34, ctx->r17) = ctx->f0.u32l;
    // 0x002615EC: lwc1        $f14, 0x11C($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0X11C);
    // 0x002615F0: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x002615F4: jal         0x00211774
    // 0x002615F8: nop

    func_00211774(rdram, ctx);
        goto after_5;
    // 0x002615F8: nop

    after_5:
    // 0x002615FC: lwc1        $f12, 0x3C($s1)
    ctx->f12.u32l = MEM_W(ctx->r17, 0X3C);
    // 0x00261600: swc1        $f0, 0x38($s1)
    MEM_W(0X38, ctx->r17) = ctx->f0.u32l;
    // 0x00261604: lwc1        $f14, 0x11C($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0X11C);
    // 0x00261608: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
L_0026160C:
    // 0x0026160C: jal         0x00211774
    // 0x00261610: nop

    func_00211774(rdram, ctx);
        goto after_6;
    // 0x00261610: nop

    after_6:
    // 0x00261614: swc1        $f0, 0x3C($s1)
    MEM_W(0X3C, ctx->r17) = ctx->f0.u32l;
L_00261618:
    // 0x00261618: lwc1        $f0, 0x128($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X128);
    // 0x0026161C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00261620: lwc1        $f1, 0x6D28($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X6D28);
    // 0x00261624: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x00261628: mtc1        $zero, $f1
    ctx->f_odd[(1 - 1) * 2] = 0;
    // 0x0026162C: c.le.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl <= ctx->f1.fl;
    // 0x00261630: nop

    // 0x00261634: bc1f        L_00261698
    if (!c1cs) {
        // 0x00261638: swc1        $f0, 0x128($s0)
        MEM_W(0X128, ctx->r16) = ctx->f0.u32l;
            goto L_00261698;
    }
    // 0x00261638: swc1        $f0, 0x128($s0)
    MEM_W(0X128, ctx->r16) = ctx->f0.u32l;
    // 0x0026163C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00261640: lwc1        $f12, 0x7A98($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X7A98);
    // 0x00261644: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00261648: lwc1        $f14, 0x7A9C($at)
    ctx->f14.u32l = MEM_W(ctx->r1, 0X7A9C);
    // 0x0026164C: jal         0x002119FC
    // 0x00261650: nop

    func_002119FC(rdram, ctx);
        goto after_7;
    // 0x00261650: nop

    after_7:
    // 0x00261654: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00261658: lwc1        $f20, 0x7AA0($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X7AA0);
    // 0x0026165C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00261660: lwc1        $f21, 0x7AA4($at)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r1, 0X7AA4);
    // 0x00261664: swc1        $f0, 0x128($s0)
    MEM_W(0X128, ctx->r16) = ctx->f0.u32l;
    // 0x00261668: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    // 0x0026166C: jal         0x002119FC
    // 0x00261670: mov.s       $f14, $f21
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 21);
    ctx->f14.fl = ctx->f21.fl;
    func_002119FC(rdram, ctx);
        goto after_8;
    // 0x00261670: mov.s       $f14, $f21
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 21);
    ctx->f14.fl = ctx->f21.fl;
    after_8:
    // 0x00261674: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    // 0x00261678: mov.s       $f14, $f21
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 21);
    ctx->f14.fl = ctx->f21.fl;
    // 0x0026167C: jal         0x002119FC
    // 0x00261680: swc1        $f0, 0x6C($s0)
    MEM_W(0X6C, ctx->r16) = ctx->f0.u32l;
    func_002119FC(rdram, ctx);
        goto after_9;
    // 0x00261680: swc1        $f0, 0x6C($s0)
    MEM_W(0X6C, ctx->r16) = ctx->f0.u32l;
    after_9:
    // 0x00261684: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    // 0x00261688: mov.s       $f14, $f21
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 21);
    ctx->f14.fl = ctx->f21.fl;
    // 0x0026168C: jal         0x002119FC
    // 0x00261690: swc1        $f0, 0x70($s0)
    MEM_W(0X70, ctx->r16) = ctx->f0.u32l;
    func_002119FC(rdram, ctx);
        goto after_10;
    // 0x00261690: swc1        $f0, 0x70($s0)
    MEM_W(0X70, ctx->r16) = ctx->f0.u32l;
    after_10:
    // 0x00261694: swc1        $f0, 0x74($s0)
    MEM_W(0X74, ctx->r16) = ctx->f0.u32l;
L_00261698:
    // 0x00261698: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x0026169C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x002616A0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x002616A4: ldc1        $f22, 0x30($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X30);
    // 0x002616A8: ldc1        $f21, 0x28($sp)
    CHECK_FR(ctx, 21);
    ctx->f21.u64 = LD(ctx->r29, 0X28);
    // 0x002616AC: ldc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X20);
    // 0x002616B0: jr          $ra
    // 0x002616B4: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x002616B4: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_00245828(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00245828: lw          $v0, 0x10($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X10);
    // 0x0024582C: lw          $v1, 0x14($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X14);
    // 0x00245830: sw          $a1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r5;
    // 0x00245834: sw          $a2, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r6;
    // 0x00245838: sw          $a3, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r7;
    // 0x0024583C: sw          $v0, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->r2;
    // 0x00245840: jr          $ra
    // 0x00245844: sw          $v1, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->r3;
    return;
    // 0x00245844: sw          $v1, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->r3;
;}
RECOMP_FUNC void func_00204778(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00204778: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x0020477C: sw          $s7, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r23;
    // 0x00204780: addu        $s7, $a1, $zero
    ctx->r23 = ADD32(ctx->r5, 0);
    // 0x00204784: sw          $s5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r21;
    // 0x00204788: addu        $s5, $a2, $zero
    ctx->r21 = ADD32(ctx->r6, 0);
    // 0x0020478C: lui         $a2, 0xE300
    ctx->r6 = S32(0XE300 << 16);
    // 0x00204790: ori         $a2, $a2, 0xA01
    ctx->r6 = ctx->r6 | 0XA01;
    // 0x00204794: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00204798: lui         $s0, 0x800E
    ctx->r16 = S32(0X800E << 16);
    // 0x0020479C: addiu       $s0, $s0, -0x71DC
    ctx->r16 = ADD32(ctx->r16, -0X71DC);
    // 0x002047A0: addiu       $a0, $zero, 0x19
    ctx->r4 = ADD32(0, 0X19);
    // 0x002047A4: lui         $v1, 0xE700
    ctx->r3 = S32(0XE700 << 16);
    // 0x002047A8: sw          $ra, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r31;
    // 0x002047AC: sw          $s6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r22;
    // 0x002047B0: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x002047B4: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x002047B8: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x002047BC: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x002047C0: sw          $a3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r7;
    // 0x002047C4: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x002047C8: lw          $s4, 0x48($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X48);
    // 0x002047CC: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x002047D0: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x002047D4: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x002047D8: sw          $v1, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r3;
    // 0x002047DC: addiu       $v1, $v0, 0x8
    ctx->r3 = ADD32(ctx->r2, 0X8);
    // 0x002047E0: sw          $zero, 0x4($a1)
    MEM_W(0X4, ctx->r5) = 0;
    // 0x002047E4: sw          $v1, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r3;
    // 0x002047E8: sw          $a2, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r6;
    // 0x002047EC: jal         0x00207A70
    // 0x002047F0: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    func_00207A70(rdram, ctx);
        goto after_0;
    // 0x002047F0: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    after_0:
    // 0x002047F4: jal         0x00207FEC
    // 0x002047F8: addiu       $a0, $zero, 0x15
    ctx->r4 = ADD32(0, 0X15);
    func_00207FEC(rdram, ctx);
        goto after_1;
    // 0x002047F8: addiu       $a0, $zero, 0x15
    ctx->r4 = ADD32(0, 0X15);
    after_1:
    // 0x002047FC: lui         $v1, 0xA0A0
    ctx->r3 = S32(0XA0A0 << 16);
    // 0x00204800: ori         $v1, $v1, 0xA000
    ctx->r3 = ctx->r3 | 0XA000;
    // 0x00204804: addiu       $a0, $zero, 0x1B
    ctx->r4 = ADD32(0, 0X1B);
    // 0x00204808: lui         $s2, 0xFA00
    ctx->r18 = S32(0XFA00 << 16);
    // 0x0020480C: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x00204810: lui         $s1, 0xF600
    ctx->r17 = S32(0XF600 << 16);
    // 0x00204814: addu        $v0, $a1, $zero
    ctx->r2 = ADD32(ctx->r5, 0);
    // 0x00204818: addiu       $a1, $a1, 0x8
    ctx->r5 = ADD32(ctx->r5, 0X8);
    // 0x0020481C: sw          $a1, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r5;
    // 0x00204820: sw          $s2, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r18;
    // 0x00204824: sw          $v1, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r3;
    // 0x00204828: addiu       $v0, $a1, 0x8
    ctx->r2 = ADD32(ctx->r5, 0X8);
    // 0x0020482C: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x00204830: addiu       $v0, $s4, 0x1
    ctx->r2 = ADD32(ctx->r20, 0X1);
    // 0x00204834: andi        $v0, $v0, 0x3FF
    ctx->r2 = ctx->r2 & 0X3FF;
    // 0x00204838: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x0020483C: lw          $s6, 0x44($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X44);
    // 0x00204840: or          $v0, $v0, $s1
    ctx->r2 = ctx->r2 | ctx->r17;
    // 0x00204844: addiu       $v1, $s6, 0x1
    ctx->r3 = ADD32(ctx->r22, 0X1);
    // 0x00204848: andi        $v1, $v1, 0x3FF
    ctx->r3 = ctx->r3 & 0X3FF;
    // 0x0020484C: sll         $v1, $v1, 14
    ctx->r3 = S32(ctx->r3 << 14);
    // 0x00204850: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x00204854: sw          $v1, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r3;
    // 0x00204858: addiu       $v1, $s7, -0x1
    ctx->r3 = ADD32(ctx->r23, -0X1);
    // 0x0020485C: andi        $v1, $v1, 0x3FF
    ctx->r3 = ctx->r3 & 0X3FF;
    // 0x00204860: sll         $v1, $v1, 14
    ctx->r3 = S32(ctx->r3 << 14);
    // 0x00204864: addiu       $v0, $s5, -0x1
    ctx->r2 = ADD32(ctx->r21, -0X1);
    // 0x00204868: andi        $v0, $v0, 0x3FF
    ctx->r2 = ctx->r2 & 0X3FF;
    // 0x0020486C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x00204870: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x00204874: jal         0x00207FEC
    // 0x00204878: sw          $v1, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r3;
    func_00207FEC(rdram, ctx);
        goto after_2;
    // 0x00204878: sw          $v1, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r3;
    after_2:
    // 0x0020487C: lui         $v1, 0xA0A0
    ctx->r3 = S32(0XA0A0 << 16);
    // 0x00204880: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x00204884: ori         $v1, $v1, 0xA0FF
    ctx->r3 = ctx->r3 | 0XA0FF;
    // 0x00204888: addu        $v0, $a0, $zero
    ctx->r2 = ADD32(ctx->r4, 0);
    // 0x0020488C: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x00204890: sw          $a0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r4;
    // 0x00204894: sw          $s2, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r18;
    // 0x00204898: sw          $v1, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r3;
    // 0x0020489C: addiu       $v0, $a0, 0x8
    ctx->r2 = ADD32(ctx->r4, 0X8);
    // 0x002048A0: andi        $v1, $s6, 0x3FF
    ctx->r3 = ctx->r22 & 0X3FF;
    // 0x002048A4: sll         $v1, $v1, 14
    ctx->r3 = S32(ctx->r3 << 14);
    // 0x002048A8: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x002048AC: andi        $v0, $s4, 0x3FF
    ctx->r2 = ctx->r20 & 0X3FF;
    // 0x002048B0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x002048B4: or          $v0, $v0, $s1
    ctx->r2 = ctx->r2 | ctx->r17;
    // 0x002048B8: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x002048BC: sw          $v1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r3;
    // 0x002048C0: andi        $v1, $s7, 0x3FF
    ctx->r3 = ctx->r23 & 0X3FF;
    // 0x002048C4: sll         $v1, $v1, 14
    ctx->r3 = S32(ctx->r3 << 14);
    // 0x002048C8: andi        $v0, $s5, 0x3FF
    ctx->r2 = ctx->r21 & 0X3FF;
    // 0x002048CC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x002048D0: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x002048D4: jal         0x0029DFF0
    // 0x002048D8: sw          $v1, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r3;
    func_0029DFF0(rdram, ctx);
        goto after_3;
    // 0x002048D8: sw          $v1, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r3;
    after_3:
    // 0x002048DC: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x002048E0: lui         $v1, 0x800E
    ctx->r3 = S32(0X800E << 16);
    // 0x002048E4: lw          $v1, -0x7234($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X7234);
    // 0x002048E8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x002048EC: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x002048F0: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x002048F4: sw          $v1, -0x7234($at)
    MEM_W(-0X7234, ctx->r1) = ctx->r3;
    // 0x002048F8: beq         $v1, $v0, L_00204924
    if (ctx->r3 == ctx->r2) {
        // 0x002048FC: nop
    
            goto L_00204924;
    }
    // 0x002048FC: nop

    // 0x00204900: jal         0x0029E010
    // 0x00204904: nop

    func_0029E010(rdram, ctx);
        goto after_4;
    // 0x00204904: nop

    after_4:
    // 0x00204908: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x0020490C: addiu       $a0, $a0, -0x7250
    ctx->r4 = ADD32(ctx->r4, -0X7250);
    // 0x00204910: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x00204914: jal         0x0029B6F0
    // 0x00204918: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osRecvMesg_recomp(rdram, ctx);
        goto after_5;
    // 0x00204918: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_5:
    // 0x0020491C: j           L_0020492C
    // 0x00204920: nop

        goto L_0020492C;
    // 0x00204920: nop

L_00204924:
    // 0x00204924: jal         0x0029E010
    // 0x00204928: nop

    func_0029E010(rdram, ctx);
        goto after_6;
    // 0x00204928: nop

    after_6:
L_0020492C:
    // 0x0020492C: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x00204930: lw          $a0, 0x1CD0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1CD0);
    // 0x00204934: lui         $s3, 0x8000
    ctx->r19 = S32(0X8000 << 16);
    // 0x00204938: beq         $a0, $zero, L_00204958
    if (ctx->r4 == 0) {
        // 0x0020493C: subu        $t5, $a0, $s3
        ctx->r13 = SUB32(ctx->r4, ctx->r19);
            goto L_00204958;
    }
    // 0x0020493C: subu        $t5, $a0, $s3
    ctx->r13 = SUB32(ctx->r4, ctx->r19);
L_00204940:
    // 0x00204940: lw          $v0, 0x10($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X10);
    // 0x00204944: lw          $v1, 0x14($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X14);
    // 0x00204948: lw          $a0, 0xC($a0)
    ctx->r4 = MEM_W(ctx->r4, 0XC);
    // 0x0020494C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x00204950: bne         $a0, $zero, L_00204940
    if (ctx->r4 != 0) {
        // 0x00204954: addu        $t5, $t5, $v0
        ctx->r13 = ADD32(ctx->r13, ctx->r2);
            goto L_00204940;
    }
    // 0x00204954: addu        $t5, $t5, $v0
    ctx->r13 = ADD32(ctx->r13, ctx->r2);
L_00204958:
    // 0x00204958: lui         $a1, 0x6464
    ctx->r5 = S32(0X6464 << 16);
    // 0x0020495C: lui         $a2, 0x800E
    ctx->r6 = S32(0X800E << 16);
    // 0x00204960: addiu       $a2, $a2, -0x71DC
    ctx->r6 = ADD32(ctx->r6, -0X71DC);
    // 0x00204964: ori         $a1, $a1, 0xFF
    ctx->r5 = ctx->r5 | 0XFF;
    // 0x00204968: lw          $a0, 0x0($a2)
    ctx->r4 = MEM_W(ctx->r6, 0X0);
    // 0x0020496C: lui         $v0, 0xFA00
    ctx->r2 = S32(0XFA00 << 16);
    // 0x00204970: addu        $v1, $a0, $zero
    ctx->r3 = ADD32(ctx->r4, 0);
    // 0x00204974: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x00204978: sw          $a1, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r5;
    // 0x0020497C: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x00204980: lw          $v0, 0x1CD0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1CD0);
    // 0x00204984: subu        $v1, $s4, $s5
    ctx->r3 = SUB32(ctx->r20, ctx->r21);
    // 0x00204988: subu        $v0, $v0, $s3
    ctx->r2 = SUB32(ctx->r2, ctx->r19);
    // 0x0020498C: mult        $v0, $v1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x00204990: mflo        $t0
    ctx->r8 = lo;
    // 0x00204994: nop

    // 0x00204998: nop

    // 0x0020499C: divu        $zero, $t0, $t5
    lo = S32(U32(ctx->r8) / U32(ctx->r13)); hi = S32(U32(ctx->r8) % U32(ctx->r13));
    // 0x002049A0: bne         $t5, $zero, L_002049AC
    if (ctx->r13 != 0) {
        // 0x002049A4: nop
    
            goto L_002049AC;
    }
    // 0x002049A4: nop

    // 0x002049A8: break       7
    do_break(2116008);
L_002049AC:
    // 0x002049AC: mflo        $a1
    ctx->r5 = lo;
    // 0x002049B0: addu        $t7, $zero, $zero
    ctx->r15 = ADD32(0, 0);
    // 0x002049B4: lui         $s2, 0xFA00
    ctx->r18 = S32(0XFA00 << 16);
    // 0x002049B8: lui         $t8, 0xF600
    ctx->r24 = S32(0XF600 << 16);
    // 0x002049BC: addu        $t9, $v1, $zero
    ctx->r25 = ADD32(ctx->r3, 0);
    // 0x002049C0: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x002049C4: lw          $s6, 0x44($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X44);
    // 0x002049C8: addu        $v1, $t8, $zero
    ctx->r3 = ADD32(ctx->r24, 0);
    // 0x002049CC: andi        $v0, $s6, 0x3FF
    ctx->r2 = ctx->r22 & 0X3FF;
    // 0x002049D0: sll         $v0, $v0, 14
    ctx->r2 = S32(ctx->r2 << 14);
    // 0x002049D4: addu        $t6, $v0, $zero
    ctx->r14 = ADD32(ctx->r2, 0);
    // 0x002049D8: andi        $v0, $s7, 0x3FF
    ctx->r2 = ctx->r23 & 0X3FF;
    // 0x002049DC: addu        $s5, $v0, $zero
    ctx->r21 = ADD32(ctx->r2, 0);
    // 0x002049E0: addiu       $v0, $a0, 0x8
    ctx->r2 = ADD32(ctx->r4, 0X8);
    // 0x002049E4: sw          $a0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r4;
    // 0x002049E8: sw          $v0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r2;
    // 0x002049EC: addiu       $v0, $s4, 0x1
    ctx->r2 = ADD32(ctx->r20, 0X1);
    // 0x002049F0: andi        $v0, $v0, 0x3FF
    ctx->r2 = ctx->r2 & 0X3FF;
    // 0x002049F4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x002049F8: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x002049FC: or          $v0, $t6, $v0
    ctx->r2 = ctx->r14 | ctx->r2;
    // 0x00204A00: sll         $v1, $s5, 14
    ctx->r3 = S32(ctx->r21 << 14);
    // 0x00204A04: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
    // 0x00204A08: subu        $a1, $s4, $a1
    ctx->r5 = SUB32(ctx->r20, ctx->r5);
    // 0x00204A0C: addiu       $a1, $a1, -0x1
    ctx->r5 = ADD32(ctx->r5, -0X1);
    // 0x00204A10: andi        $v0, $a1, 0x3FF
    ctx->r2 = ctx->r5 & 0X3FF;
    // 0x00204A14: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x00204A18: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x00204A1C: sw          $v1, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r3;
L_00204A20:
    // 0x00204A20: lui         $t3, 0x800E
    ctx->r11 = S32(0X800E << 16);
    // 0x00204A24: lw          $t3, -0x7E0C($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X7E0C);
    // 0x00204A28: beql        $t3, $zero, L_00204D08
    if (ctx->r11 == 0) {
        // 0x00204A2C: addiu       $t7, $t7, 0x1
        ctx->r15 = ADD32(ctx->r15, 0X1);
            goto L_00204D08;
    }
    goto skip_0;
    // 0x00204A2C: addiu       $t7, $t7, 0x1
    ctx->r15 = ADD32(ctx->r15, 0X1);
    skip_0:
    // 0x00204A30: sll         $s1, $s5, 14
    ctx->r17 = S32(ctx->r21 << 14);
    // 0x00204A34: addiu       $v0, $s7, 0x8
    ctx->r2 = ADD32(ctx->r23, 0X8);
    // 0x00204A38: andi        $v0, $v0, 0x3FF
    ctx->r2 = ctx->r2 & 0X3FF;
    // 0x00204A3C: sll         $s0, $v0, 14
    ctx->r16 = S32(ctx->r2 << 14);
L_00204A40:
    // 0x00204A40: beq         $t7, $zero, L_00204A5C
    if (ctx->r15 == 0) {
        // 0x00204A44: nop
    
            goto L_00204A5C;
    }
    // 0x00204A44: nop

    // 0x00204A48: lw          $v0, 0xC($t3)
    ctx->r2 = MEM_W(ctx->r11, 0XC);
    // 0x00204A4C: andi        $v0, $v0, 0x101
    ctx->r2 = ctx->r2 & 0X101;
    // 0x00204A50: xori        $v0, $v0, 0x100
    ctx->r2 = ctx->r2 ^ 0X100;
    // 0x00204A54: j           L_00204A6C
    // 0x00204A58: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
        goto L_00204A6C;
    // 0x00204A58: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
L_00204A5C:
    // 0x00204A5C: lw          $v0, 0xC($t3)
    ctx->r2 = MEM_W(ctx->r11, 0XC);
    // 0x00204A60: andi        $v0, $v0, 0x101
    ctx->r2 = ctx->r2 & 0X101;
    // 0x00204A64: xori        $v0, $v0, 0x100
    ctx->r2 = ctx->r2 ^ 0X100;
    // 0x00204A68: sltu        $v0, $zero, $v0
    ctx->r2 = 0 < ctx->r2 ? 1 : 0;
L_00204A6C:
    // 0x00204A6C: beq         $v0, $zero, L_00204CF8
    if (ctx->r2 == 0) {
        // 0x00204A70: nop
    
            goto L_00204CF8;
    }
    // 0x00204A70: nop

    // 0x00204A74: lw          $v1, 0xC($t3)
    ctx->r3 = MEM_W(ctx->r11, 0XC);
    // 0x00204A78: andi        $v0, $v1, 0x1
    ctx->r2 = ctx->r3 & 0X1;
    // 0x00204A7C: bne         $v0, $zero, L_00204AA8
    if (ctx->r2 != 0) {
        // 0x00204A80: addiu       $t0, $zero, 0xFF
        ctx->r8 = ADD32(0, 0XFF);
            goto L_00204AA8;
    }
    // 0x00204A80: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x00204A84: andi        $v0, $v1, 0x100
    ctx->r2 = ctx->r3 & 0X100;
    // 0x00204A88: bne         $v0, $zero, L_00204AAC
    if (ctx->r2 != 0) {
        // 0x00204A8C: addu        $t2, $zero, $zero
        ctx->r10 = ADD32(0, 0);
            goto L_00204AAC;
    }
    // 0x00204A8C: addu        $t2, $zero, $zero
    ctx->r10 = ADD32(0, 0);
    // 0x00204A90: andi        $v0, $v1, 0x600
    ctx->r2 = ctx->r3 & 0X600;
    // 0x00204A94: beq         $v0, $zero, L_00204AA8
    if (ctx->r2 == 0) {
        // 0x00204A98: addu        $t0, $zero, $zero
        ctx->r8 = ADD32(0, 0);
            goto L_00204AA8;
    }
    // 0x00204A98: addu        $t0, $zero, $zero
    ctx->r8 = ADD32(0, 0);
    // 0x00204A9C: addu        $t2, $t0, $zero
    ctx->r10 = ADD32(ctx->r8, 0);
    // 0x00204AA0: j           L_00204AB0
    // 0x00204AA4: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
        goto L_00204AB0;
    // 0x00204AA4: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
L_00204AA8:
    // 0x00204AA8: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
L_00204AAC:
    // 0x00204AAC: addu        $t1, $zero, $zero
    ctx->r9 = ADD32(0, 0);
L_00204AB0:
    // 0x00204AB0: sll         $v0, $t0, 24
    ctx->r2 = S32(ctx->r8 << 24);
    // 0x00204AB4: sll         $v1, $t2, 16
    ctx->r3 = S32(ctx->r10 << 16);
    // 0x00204AB8: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x00204ABC: sll         $v1, $t1, 8
    ctx->r3 = S32(ctx->r9 << 8);
    // 0x00204AC0: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x00204AC4: lw          $a3, 0x0($a2)
    ctx->r7 = MEM_W(ctx->r6, 0X0);
    // 0x00204AC8: ori         $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 | 0XFF;
    // 0x00204ACC: addu        $a0, $a3, $zero
    ctx->r4 = ADD32(ctx->r7, 0);
    // 0x00204AD0: sw          $s2, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r18;
    // 0x00204AD4: sw          $v0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r2;
    // 0x00204AD8: lw          $v1, 0x0($t3)
    ctx->r3 = MEM_W(ctx->r11, 0X0);
    // 0x00204ADC: lw          $v0, 0x4($t3)
    ctx->r2 = MEM_W(ctx->r11, 0X4);
    // 0x00204AE0: addu        $v0, $v1, $v0
    ctx->r2 = ADD32(ctx->r3, ctx->r2);
    // 0x00204AE4: subu        $v0, $v0, $s3
    ctx->r2 = SUB32(ctx->r2, ctx->r19);
    // 0x00204AE8: mult        $v0, $t9
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r25)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x00204AEC: mflo        $t4
    ctx->r12 = lo;
    // 0x00204AF0: nop

    // 0x00204AF4: nop

    // 0x00204AF8: divu        $zero, $t4, $t5
    lo = S32(U32(ctx->r12) / U32(ctx->r13)); hi = S32(U32(ctx->r12) % U32(ctx->r13));
    // 0x00204AFC: bne         $t5, $zero, L_00204B08
    if (ctx->r13 != 0) {
        // 0x00204B00: nop
    
            goto L_00204B08;
    }
    // 0x00204B00: nop

    // 0x00204B04: break       7
    do_break(2116356);
L_00204B08:
    // 0x00204B08: mflo        $a0
    ctx->r4 = lo;
    // 0x00204B0C: subu        $v1, $v1, $s3
    ctx->r3 = SUB32(ctx->r3, ctx->r19);
    // 0x00204B10: addiu       $v1, $v1, -0x20
    ctx->r3 = ADD32(ctx->r3, -0X20);
    // 0x00204B14: mult        $v1, $t9
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r25)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x00204B18: mflo        $v1
    ctx->r3 = lo;
    // 0x00204B1C: nop

    // 0x00204B20: nop

    // 0x00204B24: divu        $zero, $v1, $t5
    lo = S32(U32(ctx->r3) / U32(ctx->r13)); hi = S32(U32(ctx->r3) % U32(ctx->r13));
    // 0x00204B28: bne         $t5, $zero, L_00204B34
    if (ctx->r13 != 0) {
        // 0x00204B2C: nop
    
            goto L_00204B34;
    }
    // 0x00204B2C: nop

    // 0x00204B30: break       7
    do_break(2116400);
L_00204B34:
    // 0x00204B34: mflo        $v1
    ctx->r3 = lo;
    // 0x00204B38: addiu       $a3, $a3, 0x8
    ctx->r7 = ADD32(ctx->r7, 0X8);
    // 0x00204B3C: subu        $a0, $s4, $a0
    ctx->r4 = SUB32(ctx->r20, ctx->r4);
    // 0x00204B40: addiu       $a1, $a0, -0x1
    ctx->r5 = ADD32(ctx->r4, -0X1);
    // 0x00204B44: subu        $v1, $s4, $v1
    ctx->r3 = SUB32(ctx->r20, ctx->r3);
    // 0x00204B48: addiu       $t4, $v1, -0x1
    ctx->r12 = ADD32(ctx->r3, -0X1);
    // 0x00204B4C: slt         $v0, $a1, $t4
    ctx->r2 = SIGNED(ctx->r5) < SIGNED(ctx->r12) ? 1 : 0;
    // 0x00204B50: beq         $v0, $zero, L_00204B84
    if (ctx->r2 == 0) {
        // 0x00204B54: sw          $a3, 0x0($a2)
        MEM_W(0X0, ctx->r6) = ctx->r7;
            goto L_00204B84;
    }
    // 0x00204B54: sw          $a3, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r7;
    // 0x00204B58: addiu       $v0, $a3, 0x8
    ctx->r2 = ADD32(ctx->r7, 0X8);
    // 0x00204B5C: sw          $v0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r2;
    // 0x00204B60: andi        $v0, $t4, 0x3FF
    ctx->r2 = ctx->r12 & 0X3FF;
    // 0x00204B64: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x00204B68: or          $v0, $v0, $t8
    ctx->r2 = ctx->r2 | ctx->r24;
    // 0x00204B6C: or          $v0, $t6, $v0
    ctx->r2 = ctx->r14 | ctx->r2;
    // 0x00204B70: sw          $v0, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r2;
    // 0x00204B74: andi        $v0, $a1, 0x3FF
    ctx->r2 = ctx->r5 & 0X3FF;
    // 0x00204B78: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x00204B7C: or          $v0, $s1, $v0
    ctx->r2 = ctx->r17 | ctx->r2;
    // 0x00204B80: sw          $v0, 0x4($a3)
    MEM_W(0X4, ctx->r7) = ctx->r2;
L_00204B84:
    // 0x00204B84: lw          $a3, 0x0($a2)
    ctx->r7 = MEM_W(ctx->r6, 0X0);
    // 0x00204B88: srl         $v1, $t0, 1
    ctx->r3 = S32(U32(ctx->r8) >> 1);
    // 0x00204B8C: addiu       $v0, $a3, 0x8
    ctx->r2 = ADD32(ctx->r7, 0X8);
    // 0x00204B90: sw          $v0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r2;
    // 0x00204B94: slti        $v0, $v1, 0x100
    ctx->r2 = SIGNED(ctx->r3) < 0X100 ? 1 : 0;
    // 0x00204B98: sw          $s2, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r18;
    // 0x00204B9C: beq         $v0, $zero, L_00204BA8
    if (ctx->r2 == 0) {
        // 0x00204BA0: lui         $a0, 0xFF00
        ctx->r4 = S32(0XFF00 << 16);
            goto L_00204BA8;
    }
    // 0x00204BA0: lui         $a0, 0xFF00
    ctx->r4 = S32(0XFF00 << 16);
    // 0x00204BA4: sll         $a0, $v1, 24
    ctx->r4 = S32(ctx->r3 << 24);
L_00204BA8:
    // 0x00204BA8: srl         $v1, $t2, 1
    ctx->r3 = S32(U32(ctx->r10) >> 1);
    // 0x00204BAC: slti        $v0, $v1, 0x100
    ctx->r2 = SIGNED(ctx->r3) < 0X100 ? 1 : 0;
    // 0x00204BB0: bne         $v0, $zero, L_00204BBC
    if (ctx->r2 != 0) {
        // 0x00204BB4: sll         $v0, $v1, 16
        ctx->r2 = S32(ctx->r3 << 16);
            goto L_00204BBC;
    }
    // 0x00204BB4: sll         $v0, $v1, 16
    ctx->r2 = S32(ctx->r3 << 16);
    // 0x00204BB8: lui         $v0, 0xFF
    ctx->r2 = S32(0XFF << 16);
L_00204BBC:
    // 0x00204BBC: or          $a0, $a0, $v0
    ctx->r4 = ctx->r4 | ctx->r2;
    // 0x00204BC0: srl         $v1, $t1, 1
    ctx->r3 = S32(U32(ctx->r9) >> 1);
    // 0x00204BC4: slti        $v0, $v1, 0x100
    ctx->r2 = SIGNED(ctx->r3) < 0X100 ? 1 : 0;
    // 0x00204BC8: beq         $v0, $zero, L_00204BDC
    if (ctx->r2 == 0) {
        // 0x00204BCC: sll         $v0, $v1, 8
        ctx->r2 = S32(ctx->r3 << 8);
            goto L_00204BDC;
    }
    // 0x00204BCC: sll         $v0, $v1, 8
    ctx->r2 = S32(ctx->r3 << 8);
    // 0x00204BD0: or          $v0, $a0, $v0
    ctx->r2 = ctx->r4 | ctx->r2;
    // 0x00204BD4: j           L_00204BE0
    // 0x00204BD8: ori         $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 | 0XFF;
        goto L_00204BE0;
    // 0x00204BD8: ori         $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 | 0XFF;
L_00204BDC:
    // 0x00204BDC: ori         $v0, $a0, 0xFFFF
    ctx->r2 = ctx->r4 | 0XFFFF;
L_00204BE0:
    // 0x00204BE0: sw          $v0, 0x4($a3)
    MEM_W(0X4, ctx->r7) = ctx->r2;
    // 0x00204BE4: andi        $v0, $t4, 0x3FF
    ctx->r2 = ctx->r12 & 0X3FF;
    // 0x00204BE8: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x00204BEC: or          $v0, $v0, $t8
    ctx->r2 = ctx->r2 | ctx->r24;
    // 0x00204BF0: or          $a3, $t6, $v0
    ctx->r7 = ctx->r14 | ctx->r2;
    // 0x00204BF4: addiu       $v0, $t4, -0x1
    ctx->r2 = ADD32(ctx->r12, -0X1);
    // 0x00204BF8: andi        $v0, $v0, 0x3FF
    ctx->r2 = ctx->r2 & 0X3FF;
    // 0x00204BFC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x00204C00: lw          $a0, 0x0($a2)
    ctx->r4 = MEM_W(ctx->r6, 0X0);
    // 0x00204C04: or          $v0, $s1, $v0
    ctx->r2 = ctx->r17 | ctx->r2;
    // 0x00204C08: addu        $v1, $a0, $zero
    ctx->r3 = ADD32(ctx->r4, 0);
    // 0x00204C0C: sw          $a3, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r7;
    // 0x00204C10: sw          $v0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r2;
    // 0x00204C14: lw          $v0, 0xC($t3)
    ctx->r2 = MEM_W(ctx->r11, 0XC);
    // 0x00204C18: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x00204C1C: andi        $v0, $v0, 0x702
    ctx->r2 = ctx->r2 & 0X702;
    // 0x00204C20: bne         $v0, $zero, L_00204CF8
    if (ctx->r2 != 0) {
        // 0x00204C24: sw          $a0, 0x0($a2)
        MEM_W(0X0, ctx->r6) = ctx->r4;
            goto L_00204CF8;
    }
    // 0x00204C24: sw          $a0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r4;
    // 0x00204C28: lui         $v0, 0x800E
    ctx->r2 = S32(0X800E << 16);
    // 0x00204C2C: lw          $v0, -0x7210($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X7210);
    // 0x00204C30: lw          $v1, 0x10($t3)
    ctx->r3 = MEM_W(ctx->r11, 0X10);
    // 0x00204C34: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x00204C38: sltiu       $v0, $v0, 0x5
    ctx->r2 = ctx->r2 < 0X5 ? 1 : 0;
    // 0x00204C3C: bne         $v0, $zero, L_00204CF8
    if (ctx->r2 != 0) {
        // 0x00204C40: addiu       $t1, $zero, 0xFF
        ctx->r9 = ADD32(0, 0XFF);
            goto L_00204CF8;
    }
    // 0x00204C40: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x00204C44: addiu       $v1, $a0, 0x8
    ctx->r3 = ADD32(ctx->r4, 0X8);
    // 0x00204C48: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x00204C4C: sw          $v1, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r3;
    // 0x00204C50: sw          $v0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r2;
    // 0x00204C54: slt         $v0, $a1, $t4
    ctx->r2 = SIGNED(ctx->r5) < SIGNED(ctx->r12) ? 1 : 0;
    // 0x00204C58: beq         $v0, $zero, L_00204C7C
    if (ctx->r2 == 0) {
        // 0x00204C5C: sw          $s2, 0x0($a0)
        MEM_W(0X0, ctx->r4) = ctx->r18;
            goto L_00204C7C;
    }
    // 0x00204C5C: sw          $s2, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r18;
    // 0x00204C60: addiu       $v0, $a0, 0x10
    ctx->r2 = ADD32(ctx->r4, 0X10);
    // 0x00204C64: sw          $v0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r2;
    // 0x00204C68: andi        $v0, $a1, 0x3FF
    ctx->r2 = ctx->r5 & 0X3FF;
    // 0x00204C6C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x00204C70: or          $v0, $s0, $v0
    ctx->r2 = ctx->r16 | ctx->r2;
    // 0x00204C74: sw          $a3, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r7;
    // 0x00204C78: sw          $v0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r2;
L_00204C7C:
    // 0x00204C7C: lw          $a0, 0x0($a2)
    ctx->r4 = MEM_W(ctx->r6, 0X0);
    // 0x00204C80: lui         $a1, 0xFFFF
    ctx->r5 = S32(0XFFFF << 16);
    // 0x00204C84: addiu       $v0, $a0, 0x8
    ctx->r2 = ADD32(ctx->r4, 0X8);
    // 0x00204C88: sw          $v0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r2;
    // 0x00204C8C: sll         $v0, $t1, 1
    ctx->r2 = S32(ctx->r9 << 1);
    // 0x00204C90: addu        $v0, $v0, $t1
    ctx->r2 = ADD32(ctx->r2, ctx->r9);
    // 0x00204C94: sra         $v1, $v0, 1
    ctx->r3 = S32(SIGNED(ctx->r2) >> 1);
    // 0x00204C98: slti        $v0, $v1, 0x100
    ctx->r2 = SIGNED(ctx->r3) < 0X100 ? 1 : 0;
    // 0x00204C9C: beq         $v0, $zero, L_00204CB8
    if (ctx->r2 == 0) {
        // 0x00204CA0: sw          $s2, 0x0($a0)
        MEM_W(0X0, ctx->r4) = ctx->r18;
            goto L_00204CB8;
    }
    // 0x00204CA0: sw          $s2, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r18;
    // 0x00204CA4: andi        $v0, $v1, 0xFF
    ctx->r2 = ctx->r3 & 0XFF;
    // 0x00204CA8: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x00204CAC: or          $v0, $v0, $a1
    ctx->r2 = ctx->r2 | ctx->r5;
    // 0x00204CB0: j           L_00204CBC
    // 0x00204CB4: ori         $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 | 0XFF;
        goto L_00204CBC;
    // 0x00204CB4: ori         $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 | 0XFF;
L_00204CB8:
    // 0x00204CB8: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_00204CBC:
    // 0x00204CBC: sw          $v0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r2;
    // 0x00204CC0: lw          $v0, 0x0($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X0);
    // 0x00204CC4: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x00204CC8: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x00204CCC: sw          $v0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r2;
    // 0x00204CD0: andi        $v0, $t4, 0x3FF
    ctx->r2 = ctx->r12 & 0X3FF;
    // 0x00204CD4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x00204CD8: or          $v0, $v0, $t8
    ctx->r2 = ctx->r2 | ctx->r24;
    // 0x00204CDC: or          $v0, $t6, $v0
    ctx->r2 = ctx->r14 | ctx->r2;
    // 0x00204CE0: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x00204CE4: addiu       $v0, $t4, -0x1
    ctx->r2 = ADD32(ctx->r12, -0X1);
    // 0x00204CE8: andi        $v0, $v0, 0x3FF
    ctx->r2 = ctx->r2 & 0X3FF;
    // 0x00204CEC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x00204CF0: or          $v0, $s0, $v0
    ctx->r2 = ctx->r16 | ctx->r2;
    // 0x00204CF4: sw          $v0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r2;
L_00204CF8:
    // 0x00204CF8: lw          $t3, 0x24($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X24);
    // 0x00204CFC: bne         $t3, $zero, L_00204A40
    if (ctx->r11 != 0) {
        // 0x00204D00: nop
    
            goto L_00204A40;
    }
    // 0x00204D00: nop

    // 0x00204D04: addiu       $t7, $t7, 0x1
    ctx->r15 = ADD32(ctx->r15, 0X1);
L_00204D08:
    // 0x00204D08: slti        $v0, $t7, 0x2
    ctx->r2 = SIGNED(ctx->r15) < 0X2 ? 1 : 0;
    // 0x00204D0C: bne         $v0, $zero, L_00204A20
    if (ctx->r2 != 0) {
        // 0x00204D10: nop
    
            goto L_00204A20;
    }
    // 0x00204D10: nop

    // 0x00204D14: jal         0x0029DFF0
    // 0x00204D18: nop

    func_0029DFF0(rdram, ctx);
        goto after_7;
    // 0x00204D18: nop

    after_7:
    // 0x00204D1C: lui         $v1, 0x800E
    ctx->r3 = S32(0X800E << 16);
    // 0x00204D20: lw          $v1, -0x7234($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X7234);
    // 0x00204D24: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x00204D28: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x00204D2C: sw          $v1, -0x7234($at)
    MEM_W(-0X7234, ctx->r1) = ctx->r3;
    // 0x00204D30: beq         $v1, $zero, L_00204D5C
    if (ctx->r3 == 0) {
        // 0x00204D34: nop
    
            goto L_00204D5C;
    }
    // 0x00204D34: nop

    // 0x00204D38: jal         0x0029E010
    // 0x00204D3C: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    func_0029E010(rdram, ctx);
        goto after_8;
    // 0x00204D3C: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    after_8:
    // 0x00204D40: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x00204D44: addiu       $a0, $a0, -0x7250
    ctx->r4 = ADD32(ctx->r4, -0X7250);
    // 0x00204D48: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x00204D4C: jal         0x0029B820
    // 0x00204D50: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osSendMesg_recomp(rdram, ctx);
        goto after_9;
    // 0x00204D50: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_9:
    // 0x00204D54: j           L_00204D64
    // 0x00204D58: nop

        goto L_00204D64;
    // 0x00204D58: nop

L_00204D5C:
    // 0x00204D5C: jal         0x0029E010
    // 0x00204D60: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    func_0029E010(rdram, ctx);
        goto after_10;
    // 0x00204D60: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    after_10:
L_00204D64:
    // 0x00204D64: lw          $ra, 0x30($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X30);
    // 0x00204D68: lw          $s7, 0x2C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X2C);
    // 0x00204D6C: lw          $s6, 0x28($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X28);
    // 0x00204D70: lw          $s5, 0x24($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X24);
    // 0x00204D74: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x00204D78: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x00204D7C: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x00204D80: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00204D84: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00204D88: jr          $ra
    // 0x00204D8C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x00204D8C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_00468620(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00468620: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x00468624: beq         $a1, $zero, L_00468674
    if (ctx->r5 == 0) {
        // 0x00468628: addiu       $a2, $a1, -0x1
        ctx->r6 = ADD32(ctx->r5, -0X1);
            goto L_00468674;
    }
    // 0x00468628: addiu       $a2, $a1, -0x1
    ctx->r6 = ADD32(ctx->r5, -0X1);
    // 0x0046862C: lw          $a1, 0x4($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X4);
    // 0x00468630: addiu       $t1, $zero, 0x80
    ctx->r9 = ADD32(0, 0X80);
    // 0x00468634: addiu       $t0, $zero, -0x1
    ctx->r8 = ADD32(0, -0X1);
L_00468638:
    // 0x00468638: sll         $a3, $a3, 1
    ctx->r7 = S32(ctx->r7 << 1);
    // 0x0046863C: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x00468640: addiu       $a2, $a2, -0x1
    ctx->r6 = ADD32(ctx->r6, -0X1);
    // 0x00468644: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x00468648: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x0046864C: sw          $v0, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r2;
    // 0x00468650: srl         $v0, $v1, 3
    ctx->r2 = S32(U32(ctx->r3) >> 3);
    // 0x00468654: addu        $v0, $a1, $v0
    ctx->r2 = ADD32(ctx->r5, ctx->r2);
    // 0x00468658: andi        $v1, $v1, 0x7
    ctx->r3 = ctx->r3 & 0X7;
    // 0x0046865C: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x00468660: srav        $v1, $t1, $v1
    ctx->r3 = S32(SIGNED(ctx->r9) >> (ctx->r3 & 31));
    // 0x00468664: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x00468668: sltu        $v0, $zero, $v0
    ctx->r2 = 0 < ctx->r2 ? 1 : 0;
    // 0x0046866C: bne         $a2, $t0, L_00468638
    if (ctx->r6 != ctx->r8) {
        // 0x00468670: or          $a3, $a3, $v0
        ctx->r7 = ctx->r7 | ctx->r2;
            goto L_00468638;
    }
    // 0x00468670: or          $a3, $a3, $v0
    ctx->r7 = ctx->r7 | ctx->r2;
L_00468674:
    // 0x00468674: jr          $ra
    // 0x00468678: addu        $v0, $a3, $zero
    ctx->r2 = ADD32(ctx->r7, 0);
    return;
    // 0x00468678: addu        $v0, $a3, $zero
    ctx->r2 = ADD32(ctx->r7, 0);
;}
RECOMP_FUNC void func_00423A78(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00423A78: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x00423A7C: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x00423A80: sw          $v0, 0x9B0($at)
    MEM_W(0X9B0, ctx->r1) = ctx->r2;
    // 0x00423A84: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x00423A88: sw          $zero, 0x9A4($at)
    MEM_W(0X9A4, ctx->r1) = 0;
    // 0x00423A8C: jr          $ra
    // 0x00423A90: nop

    return;
    // 0x00423A90: nop

;}
RECOMP_FUNC void func_0021D7BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0021D7BC: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x0021D7C0: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x0021D7C4: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x0021D7C8: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x0021D7CC: addu        $s0, $a2, $zero
    ctx->r16 = ADD32(ctx->r6, 0);
    // 0x0021D7D0: addiu       $a3, $s0, 0x18
    ctx->r7 = ADD32(ctx->r16, 0X18);
    // 0x0021D7D4: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x0021D7D8: lw          $a0, 0x14($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X14);
    // 0x0021D7DC: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x0021D7E0: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x0021D7E4: lw          $t0, 0x14($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X14);
    // 0x0021D7E8: bne         $v0, $v1, L_0021D894
    if (ctx->r2 != ctx->r3) {
        // 0x0021D7EC: addiu       $a2, $s0, 0x1C
        ctx->r6 = ADD32(ctx->r16, 0X1C);
            goto L_0021D894;
    }
    // 0x0021D7EC: addiu       $a2, $s0, 0x1C
    ctx->r6 = ADD32(ctx->r16, 0X1C);
    // 0x0021D7F0: lb          $v1, 0x174($s1)
    ctx->r3 = MEM_B(ctx->r17, 0X174);
    // 0x0021D7F4: addiu       $v0, $zero, 0x3C
    ctx->r2 = ADD32(0, 0X3C);
    // 0x0021D7F8: bne         $v1, $v0, L_0021D80C
    if (ctx->r3 != ctx->r2) {
        // 0x0021D7FC: addu        $v0, $v1, $zero
        ctx->r2 = ADD32(ctx->r3, 0);
            goto L_0021D80C;
    }
    // 0x0021D7FC: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
    // 0x0021D800: lb          $v0, 0x176($s1)
    ctx->r2 = MEM_B(ctx->r17, 0X176);
    // 0x0021D804: j           L_0021D810
    // 0x0021D808: addiu       $v1, $v0, -0x36
    ctx->r3 = ADD32(ctx->r2, -0X36);
        goto L_0021D810;
    // 0x0021D808: addiu       $v1, $v0, -0x36
    ctx->r3 = ADD32(ctx->r2, -0X36);
L_0021D80C:
    // 0x0021D80C: addiu       $v1, $v0, -0x36
    ctx->r3 = ADD32(ctx->r2, -0X36);
L_0021D810:
    // 0x0021D810: sltiu       $v0, $v1, 0x6
    ctx->r2 = ctx->r3 < 0X6 ? 1 : 0;
    // 0x0021D814: beq         $v0, $zero, L_0021D87C
    if (ctx->r2 == 0) {
        // 0x0021D818: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_0021D87C;
    }
    // 0x0021D818: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x0021D81C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0021D820: addu        $at, $at, $v0
    gpr jr_addend_0021D828 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x0021D824: lw          $v0, 0x5C18($at)
    ctx->r2 = ADD32(ctx->r1, 0X5C18);
    // 0x0021D828: jr          $v0
    // 0x0021D82C: nop

    switch (jr_addend_0021D828 >> 2) {
        case 0: goto L_0021D830; break;
        case 1: goto L_0021D83C; break;
        case 2: goto L_0021D848; break;
        case 3: goto L_0021D854; break;
        case 4: goto L_0021D860; break;
        case 5: goto L_0021D86C; break;
        default: switch_error(__func__, 0x0021D828, 0x800A5C18);
    }
    // 0x0021D82C: nop

L_0021D830:
    // 0x0021D830: lb          $v0, 0x63($a0)
    ctx->r2 = MEM_B(ctx->r4, 0X63);
    // 0x0021D834: j           L_0021D874
    // 0x0021D838: sw          $v0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r2;
        goto L_0021D874;
    // 0x0021D838: sw          $v0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r2;
L_0021D83C:
    // 0x0021D83C: lb          $v0, 0x64($a0)
    ctx->r2 = MEM_B(ctx->r4, 0X64);
    // 0x0021D840: j           L_0021D874
    // 0x0021D844: sw          $v0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r2;
        goto L_0021D874;
    // 0x0021D844: sw          $v0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r2;
L_0021D848:
    // 0x0021D848: lb          $v0, 0x65($a0)
    ctx->r2 = MEM_B(ctx->r4, 0X65);
    // 0x0021D84C: j           L_0021D874
    // 0x0021D850: sw          $v0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r2;
        goto L_0021D874;
    // 0x0021D850: sw          $v0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r2;
L_0021D854:
    // 0x0021D854: lb          $v0, 0x66($a0)
    ctx->r2 = MEM_B(ctx->r4, 0X66);
    // 0x0021D858: j           L_0021D874
    // 0x0021D85C: sw          $v0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r2;
        goto L_0021D874;
    // 0x0021D85C: sw          $v0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r2;
L_0021D860:
    // 0x0021D860: lb          $v0, 0x67($a0)
    ctx->r2 = MEM_B(ctx->r4, 0X67);
    // 0x0021D864: j           L_0021D874
    // 0x0021D868: sw          $v0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r2;
        goto L_0021D874;
    // 0x0021D868: sw          $v0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r2;
L_0021D86C:
    // 0x0021D86C: lb          $v0, 0x68($a0)
    ctx->r2 = MEM_B(ctx->r4, 0X68);
    // 0x0021D870: sw          $v0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r2;
L_0021D874:
    // 0x0021D874: j           L_0021D8A8
    // 0x0021D878: sw          $v0, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r2;
        goto L_0021D8A8;
    // 0x0021D878: sw          $v0, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r2;
L_0021D87C:
    // 0x0021D87C: addu        $v0, $t0, $a0
    ctx->r2 = ADD32(ctx->r8, ctx->r4);
    // 0x0021D880: lb          $v1, 0xE($v0)
    ctx->r3 = MEM_B(ctx->r2, 0XE);
    // 0x0021D884: sw          $v1, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r3;
    // 0x0021D888: lb          $v0, 0x10($v0)
    ctx->r2 = MEM_B(ctx->r2, 0X10);
    // 0x0021D88C: j           L_0021D8A8
    // 0x0021D890: sw          $v0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r2;
        goto L_0021D8A8;
    // 0x0021D890: sw          $v0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r2;
L_0021D894:
    // 0x0021D894: addu        $v0, $t0, $a0
    ctx->r2 = ADD32(ctx->r8, ctx->r4);
    // 0x0021D898: lb          $v1, 0xE($v0)
    ctx->r3 = MEM_B(ctx->r2, 0XE);
    // 0x0021D89C: sw          $v1, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->r3;
    // 0x0021D8A0: lb          $v0, 0x10($v0)
    ctx->r2 = MEM_B(ctx->r2, 0X10);
    // 0x0021D8A4: sw          $v0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r2;
L_0021D8A8:
    // 0x0021D8A8: lw          $v0, 0x18($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X18);
    // 0x0021D8AC: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x0021D8B0: sllv        $v1, $v1, $v0
    ctx->r3 = S32(ctx->r3 << (ctx->r2 & 31));
    // 0x0021D8B4: sw          $v1, 0x14C($s1)
    MEM_W(0X14C, ctx->r17) = ctx->r3;
    // 0x0021D8B8: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // 0x0021D8BC: beq         $v0, $zero, L_0021D8CC
    if (ctx->r2 == 0) {
        // 0x0021D8C0: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_0021D8CC;
    }
    // 0x0021D8C0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0021D8C4: jal         0x0021DC84
    // 0x0021D8C8: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    func_0021DC84(rdram, ctx);
        goto after_0;
    // 0x0021D8C8: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    after_0:
L_0021D8CC:
    // 0x0021D8CC: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x0021D8D0: beq         $v0, $zero, L_0021D914
    if (ctx->r2 == 0) {
        // 0x0021D8D4: addiu       $a2, $zero, 0x1
        ctx->r6 = ADD32(0, 0X1);
            goto L_0021D914;
    }
    // 0x0021D8D4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x0021D8D8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x0021D8DC: lw          $v0, 0x18($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X18);
    // 0x0021D8E0: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x0021D8E4: lb          $v0, 0x151($s1)
    ctx->r2 = MEM_B(ctx->r17, 0X151);
    // 0x0021D8E8: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x0021D8EC: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    // 0x0021D8F0: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0021D8F4: lw          $v0, 0x6D1C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X6D1C);
    // 0x0021D8F8: lw          $a1, 0x98($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X98);
    // 0x0021D8FC: sllv        $a3, $v0, $a2
    ctx->r7 = S32(ctx->r2 << (ctx->r6 & 31));
    // 0x0021D900: addu        $a3, $a3, $v0
    ctx->r7 = ADD32(ctx->r7, ctx->r2);
    // 0x0021D904: sll         $a3, $a3, 3
    ctx->r7 = S32(ctx->r7 << 3);
    // 0x0021D908: addiu       $a3, $a3, 0x110
    ctx->r7 = ADD32(ctx->r7, 0X110);
    // 0x0021D90C: jal         0x0020B6A0
    // 0x0021D910: addu        $a3, $s1, $a3
    ctx->r7 = ADD32(ctx->r17, ctx->r7);
    func_0020B6A0(rdram, ctx);
        goto after_1;
    // 0x0021D910: addu        $a3, $s1, $a3
    ctx->r7 = ADD32(ctx->r17, ctx->r7);
    after_1:
L_0021D914:
    // 0x0021D914: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x0021D918: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x0021D91C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x0021D920: jr          $ra
    // 0x0021D924: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x0021D924: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_00454834(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_0041B864:
    // 0x00454834: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
L_0041B898:
    // 0x00454838: lw          $v0, -0x5524($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X5524);
    // 0x0045483C: andi        $v0, $v0, 0x2000
    ctx->r2 = ctx->r2 & 0X2000;
    // 0x00454840: beq         $v0, $zero, L_00454854
    if (ctx->r2 == 0) {
        // 0x00454844: lui         $v1, 0x100
        ctx->r3 = S32(0X100 << 16);
            goto L_00454854;
    }
    // 0x00454844: lui         $v1, 0x100
    ctx->r3 = S32(0X100 << 16);
    // 0x00454848: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x0045484C: j           L_0041B864
    // 0x00454850: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    entry_0041B864(rdram, ctx);
    return;
    // 0x00454850: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
L_00454854:
    // 0x00454854: lui         $v1, 0xFEFF
    ctx->r3 = S32(0XFEFF << 16);
    // 0x00454858: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x0045485C: ori         $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 | 0XFFFF;
    // 0x00454860: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x00454864: sw          $v0, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r2;
    // 0x00454868: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x0045486C: lw          $v0, -0x5528($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X5528);
    // 0x00454870: andi        $v0, $v0, 0x2000
    ctx->r2 = ctx->r2 & 0X2000;
    // 0x00454874: beq         $v0, $zero, L_0045488C
    if (ctx->r2 == 0) {
        // 0x00454878: nop
    
            goto L_0045488C;
    }
    // 0x00454878: nop

    // 0x0045487C: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00454880: addiu       $v0, $v0, 0x5A84
    ctx->r2 = ADD32(ctx->r2, 0X5A84);
    // 0x00454884: j           L_0041B898
    // 0x00454888: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    entry_0041B898(rdram, ctx);
    return;
    // 0x00454888: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_0045488C:
    // 0x0045488C: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00454890: addiu       $v0, $v0, 0x5AA0
    ctx->r2 = ADD32(ctx->r2, 0X5AA0);
    // 0x00454894: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    // 0x00454898: jr          $ra
    // 0x0045489C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x0045489C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void func_0040E59C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0040E59C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x0040E5A0: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x0040E5A4: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x0040E5A8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x0040E5AC: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x0040E5B0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0040E5B4: lw          $v0, 0x4($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X4);
    // 0x0040E5B8: blez        $v0, L_0040E5EC
    if (SIGNED(ctx->r2) <= 0) {
        // 0x0040E5BC: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_0040E5EC;
    }
    // 0x0040E5BC: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x0040E5C0: addu        $s1, $s2, $zero
    ctx->r17 = ADD32(ctx->r18, 0);
L_0040E5C4:
    // 0x0040E5C4: lw          $a0, 0x8($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X8);
    // 0x0040E5C8: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    // 0x0040E5CC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x0040E5D0: jal         0x00243414
    // 0x0040E5D4: addiu       $a1, $a0, 0x140
    ctx->r5 = ADD32(ctx->r4, 0X140);
    func_00243414(rdram, ctx);
        goto after_0;
    // 0x0040E5D4: addiu       $a1, $a0, 0x140
    ctx->r5 = ADD32(ctx->r4, 0X140);
    after_0:
    // 0x0040E5D8: lw          $v0, 0x4($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X4);
    // 0x0040E5DC: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x0040E5E0: slt         $v0, $s0, $v0
    ctx->r2 = SIGNED(ctx->r16) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x0040E5E4: bne         $v0, $zero, L_0040E5C4
    if (ctx->r2 != 0) {
        // 0x0040E5E8: nop
    
            goto L_0040E5C4;
    }
    // 0x0040E5E8: nop

L_0040E5EC:
    // 0x0040E5EC: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x0040E5F0: addiu       $a0, $a0, 0x7078
    ctx->r4 = ADD32(ctx->r4, 0X7078);
    // 0x0040E5F4: lw          $v0, 0x4F8($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X4F8);
    // 0x0040E5F8: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0040E5FC: lwc1        $f0, 0x930($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X930);
    // 0x0040E600: lwc1        $f1, 0x4($v0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r2, 0X4);
    // 0x0040E604: lui         $v0, 0x43
    ctx->r2 = S32(0X43 << 16);
    // 0x0040E608: addiu       $v0, $v0, 0x2494
    ctx->r2 = ADD32(ctx->r2, 0X2494);
    // 0x0040E60C: sw          $v0, 0x518($s2)
    MEM_W(0X518, ctx->r18) = ctx->r2;
    // 0x0040E610: addiu       $v0, $s2, 0x518
    ctx->r2 = ADD32(ctx->r18, 0X518);
    // 0x0040E614: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x0040E618: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x0040E61C: sw          $zero, 0xC($v0)
    MEM_W(0XC, ctx->r2) = 0;
    // 0x0040E620: sw          $zero, 0x10($v0)
    MEM_W(0X10, ctx->r2) = 0;
    // 0x0040E624: sw          $zero, 0x14($v0)
    MEM_W(0X14, ctx->r2) = 0;
    // 0x0040E628: jal         0x00225C84
    // 0x0040E62C: swc1        $f1, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f_odd[(1 - 1) * 2];
    func_00225C84(rdram, ctx);
        goto after_1;
    // 0x0040E62C: swc1        $f1, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f_odd[(1 - 1) * 2];
    after_1:
    // 0x0040E630: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x0040E634: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x0040E638: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x0040E63C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0040E640: jr          $ra
    // 0x0040E644: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x0040E644: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_00455EBC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_0041CF90:
    // 0x00455EBC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00455EC0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00455EC4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x00455EC8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x00455ECC: lw          $a1, 0x1C($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X1C);
    // 0x00455ED0: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00455ED4: sw          $zero, 0x2020($at)
    MEM_W(0X2020, ctx->r1) = 0;
    // 0x00455ED8: beq         $a1, $zero, L_00455EF0
    if (ctx->r5 == 0) {
        // 0x00455EDC: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_00455EF0;
    }
    // 0x00455EDC: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x00455EE0: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x00455EE4: addiu       $a0, $a0, -0x6790
    ctx->r4 = ADD32(ctx->r4, -0X6790);
    // 0x00455EE8: jal         0x0025340C
    // 0x00455EEC: nop

    func_0025340C(rdram, ctx);
        goto after_0;
    // 0x00455EEC: nop

    after_0:
L_00455EF0:
    // 0x00455EF0: jal         0x00285A68
    // 0x00455EF4: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    func_00285A68(rdram, ctx);
        goto after_1;
    // 0x00455EF4: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    after_1:
    // 0x00455EF8: lw          $v1, 0xC($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XC);
    // 0x00455EFC: lw          $v0, 0x238($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X238);
    // 0x00455F00: lui         $a0, 0x180
    ctx->r4 = S32(0X180 << 16);
    // 0x00455F04: or          $v0, $v0, $a0
    ctx->r2 = ctx->r2 | ctx->r4;
    // 0x00455F08: sw          $v0, 0x238($v1)
    MEM_W(0X238, ctx->r3) = ctx->r2;
    // 0x00455F0C: lw          $v1, 0xC($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XC);
    // 0x00455F10: lw          $v0, 0x260($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X260);
    // 0x00455F14: or          $v0, $v0, $a0
    ctx->r2 = ctx->r2 | ctx->r4;
    // 0x00455F18: sw          $v0, 0x260($v1)
    MEM_W(0X260, ctx->r3) = ctx->r2;
    // 0x00455F1C: lw          $v1, 0xC($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XC);
    // 0x00455F20: lui         $a0, 0xFE7F
    ctx->r4 = S32(0XFE7F << 16);
    // 0x00455F24: lw          $v0, 0x1C0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X1C0);
    // 0x00455F28: ori         $a0, $a0, 0xFFFF
    ctx->r4 = ctx->r4 | 0XFFFF;
    // 0x00455F2C: and         $v0, $v0, $a0
    ctx->r2 = ctx->r2 & ctx->r4;
    // 0x00455F30: sw          $v0, 0x1C0($v1)
    MEM_W(0X1C0, ctx->r3) = ctx->r2;
    // 0x00455F34: lw          $v1, 0xC($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XC);
    // 0x00455F38: lw          $v0, 0x1E8($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X1E8);
    // 0x00455F3C: and         $v0, $v0, $a0
    ctx->r2 = ctx->r2 & ctx->r4;
    // 0x00455F40: sw          $v0, 0x1E8($v1)
    MEM_W(0X1E8, ctx->r3) = ctx->r2;
    // 0x00455F44: lw          $v1, 0xC($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XC);
    // 0x00455F48: lw          $v0, 0x210($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X210);
    // 0x00455F4C: and         $v0, $v0, $a0
    ctx->r2 = ctx->r2 & ctx->r4;
    // 0x00455F50: sw          $v0, 0x210($v1)
    MEM_W(0X210, ctx->r3) = ctx->r2;
    // 0x00455F54: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x00455F58: lw          $v0, -0x531C($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X531C);
    // 0x00455F5C: beq         $v0, $zero, L_00455F78
    if (ctx->r2 == 0) {
        // 0x00455F60: lui         $a0, 0x100
        ctx->r4 = S32(0X100 << 16);
            goto L_00455F78;
    }
    // 0x00455F60: lui         $a0, 0x100
    ctx->r4 = S32(0X100 << 16);
    // 0x00455F64: lw          $v0, 0xC($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC);
    // 0x00455F68: lw          $v1, 0x120($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X120);
    // 0x00455F6C: or          $v1, $v1, $a0
    ctx->r3 = ctx->r3 | ctx->r4;
    // 0x00455F70: j           L_0041CF90
    // 0x00455F74: sw          $v1, 0x120($v0)
    MEM_W(0X120, ctx->r2) = ctx->r3;
    entry_0041CF90(rdram, ctx);
    return;
    // 0x00455F74: sw          $v1, 0x120($v0)
    MEM_W(0X120, ctx->r2) = ctx->r3;
L_00455F78:
    // 0x00455F78: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    // 0x00455F7C: lui         $v1, 0xFEFF
    ctx->r3 = S32(0XFEFF << 16);
    // 0x00455F80: lw          $v0, 0x120($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X120);
    // 0x00455F84: ori         $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 | 0XFFFF;
    // 0x00455F88: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x00455F8C: sw          $v0, 0x120($a0)
    MEM_W(0X120, ctx->r4) = ctx->r2;
    // 0x00455F90: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x00455F94: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00455F98: jr          $ra
    // 0x00455F9C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00455F9C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0029A378(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_0026138C:
    // 0x0029A378: j           L_0026138C
    // 0x0029A37C: nop

    entry_0026138C(rdram, ctx);
    return;
    // 0x0029A37C: nop

    // turok2: reconnected split function: a stray ELF symbol at 0x0029A380 ended
    // this function early, leaving it without its epilogue. On the
    // hardware execution simply continues into the next instruction.
    func_0029A380(rdram, ctx);
;}
RECOMP_FUNC void func_00243414(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00243414: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x00243418: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x0024341C: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x00243420: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00243424: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x00243428: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x0024342C: addu        $s3, $a2, $zero
    ctx->r19 = ADD32(ctx->r6, 0);
    // 0x00243430: lui         $v1, 0x800F
    ctx->r3 = S32(0X800F << 16);
    // 0x00243434: lw          $v1, 0x7078($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X7078);
    // 0x00243438: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x0024343C: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x00243440: beq         $v1, $v0, L_0024348C
    if (ctx->r3 == ctx->r2) {
        // 0x00243444: sw          $s0, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r16;
            goto L_0024348C;
    }
    // 0x00243444: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00243448: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x0024344C: bne         $v1, $v0, L_00243460
    if (ctx->r3 != ctx->r2) {
        // 0x00243450: nop
    
            goto L_00243460;
    }
    // 0x00243450: nop

    // 0x00243454: lw          $v0, 0xD4($s2)
    ctx->r2 = MEM_W(ctx->r18, 0XD4);
    // 0x00243458: ori         $v0, $v0, 0x100
    ctx->r2 = ctx->r2 | 0X100;
    // 0x0024345C: sw          $v0, 0xD4($s2)
    MEM_W(0XD4, ctx->r18) = ctx->r2;
L_00243460:
    // 0x00243460: lbu         $v0, 0x34($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X34);
    // 0x00243464: sb          $v0, 0x36($s1)
    MEM_B(0X36, ctx->r17) = ctx->r2;
    // 0x00243468: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0024346C: sb          $v0, 0xE3($s2)
    MEM_B(0XE3, ctx->r18) = ctx->r2;
    // 0x00243470: sb          $v0, 0xF7($s2)
    MEM_B(0XF7, ctx->r18) = ctx->r2;
    // 0x00243474: lw          $v0, 0x30($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X30);
    // 0x00243478: beq         $v0, $zero, L_00243494
    if (ctx->r2 == 0) {
        // 0x0024347C: nop
    
            goto L_00243494;
    }
    // 0x0024347C: nop

    // 0x00243480: lb          $v0, 0x34($s1)
    ctx->r2 = MEM_B(ctx->r17, 0X34);
    // 0x00243484: bne         $v0, $s3, L_00243494
    if (ctx->r2 != ctx->r19) {
        // 0x00243488: nop
    
            goto L_00243494;
    }
    // 0x00243488: nop

L_0024348C:
    // 0x0024348C: j           L_00243590
    // 0x00243490: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_00243590;
    // 0x00243490: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_00243494:
    // 0x00243494: lw          $a0, 0x2C($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X2C);
    // 0x00243498: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x0024349C: sb          $s3, 0x34($s1)
    MEM_B(0X34, ctx->r17) = ctx->r19;
    // 0x002434A0: beq         $a0, $zero, L_002434F4
    if (ctx->r4 == 0) {
        // 0x002434A4: sw          $zero, 0x40($s1)
        MEM_W(0X40, ctx->r17) = 0;
            goto L_002434F4;
    }
    // 0x002434A4: sw          $zero, 0x40($s1)
    MEM_W(0X40, ctx->r17) = 0;
    // 0x002434A8: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
L_002434AC:
    // 0x002434AC: lw          $v0, 0x20($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X20);
    // 0x002434B0: beq         $v0, $a2, L_002434E0
    if (ctx->r2 == ctx->r6) {
        // 0x002434B4: addiu       $v1, $a0, 0x20
        ctx->r3 = ADD32(ctx->r4, 0X20);
            goto L_002434E0;
    }
    // 0x002434B4: addiu       $v1, $a0, 0x20
    ctx->r3 = ADD32(ctx->r4, 0X20);
    // 0x002434B8: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
L_002434BC:
    // 0x002434BC: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x002434C0: bnel        $v0, $s3, L_002434D4
    if (ctx->r2 != ctx->r19) {
        // 0x002434C4: addiu       $v1, $v1, 0x20
        ctx->r3 = ADD32(ctx->r3, 0X20);
            goto L_002434D4;
    }
    goto skip_0;
    // 0x002434C4: addiu       $v1, $v1, 0x20
    ctx->r3 = ADD32(ctx->r3, 0X20);
    skip_0:
    // 0x002434C8: addu        $s0, $v1, $zero
    ctx->r16 = ADD32(ctx->r3, 0);
    // 0x002434CC: j           L_002434E0
    // 0x002434D0: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
        goto L_002434E0;
    // 0x002434D0: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
L_002434D4:
    // 0x002434D4: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x002434D8: bne         $v0, $a1, L_002434BC
    if (ctx->r2 != ctx->r5) {
        // 0x002434DC: nop
    
            goto L_002434BC;
    }
    // 0x002434DC: nop

L_002434E0:
    // 0x002434E0: beq         $a0, $zero, L_002434F4
    if (ctx->r4 == 0) {
        // 0x002434E4: nop
    
            goto L_002434F4;
    }
    // 0x002434E4: nop

    // 0x002434E8: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x002434EC: bne         $a0, $zero, L_002434AC
    if (ctx->r4 != 0) {
        // 0x002434F0: nop
    
            goto L_002434AC;
    }
    // 0x002434F0: nop

L_002434F4:
    // 0x002434F4: bne         $s0, $zero, L_00243504
    if (ctx->r16 != 0) {
        // 0x002434F8: lui         $v1, 0x1F80
        ctx->r3 = S32(0X1F80 << 16);
            goto L_00243504;
    }
    // 0x002434F8: lui         $v1, 0x1F80
    ctx->r3 = S32(0X1F80 << 16);
    // 0x002434FC: j           L_00243590
    // 0x00243500: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
        goto L_00243590;
    // 0x00243500: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_00243504:
    // 0x00243504: sw          $s0, 0x30($s1)
    MEM_W(0X30, ctx->r17) = ctx->r16;
    // 0x00243508: lw          $v0, 0x27C($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X27C);
    // 0x0024350C: ori         $v1, $v1, 0x7F
    ctx->r3 = ctx->r3 | 0X7F;
    // 0x00243510: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x00243514: sw          $v0, 0x27C($s2)
    MEM_W(0X27C, ctx->r18) = ctx->r2;
    // 0x00243518: lw          $v0, 0xD4($s2)
    ctx->r2 = MEM_W(ctx->r18, 0XD4);
    // 0x0024351C: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x00243520: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x00243524: bne         $v0, $zero, L_0024353C
    if (ctx->r2 != 0) {
        // 0x00243528: addiu       $v1, $zero, -0x2
        ctx->r3 = ADD32(0, -0X2);
            goto L_0024353C;
    }
    // 0x00243528: addiu       $v1, $zero, -0x2
    ctx->r3 = ADD32(0, -0X2);
    // 0x0024352C: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x00243530: sb          $zero, 0xC7($s1)
    MEM_B(0XC7, ctx->r17) = 0;
    // 0x00243534: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x00243538: sw          $v0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r2;
L_0024353C:
    // 0x0024353C: lw          $v0, 0xEC($s1)
    ctx->r2 = MEM_W(ctx->r17, 0XEC);
    // 0x00243540: beq         $v0, $zero, L_00243550
    if (ctx->r2 == 0) {
        // 0x00243544: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_00243550;
    }
    // 0x00243544: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x00243548: jal         0x00246918
    // 0x0024354C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_00246918(rdram, ctx);
        goto after_0;
    // 0x0024354C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_0:
L_00243550:
    // 0x00243550: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // 0x00243554: beq         $v0, $zero, L_00243564
    if (ctx->r2 == 0) {
        // 0x00243558: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_00243564;
    }
    // 0x00243558: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x0024355C: jalr        $v0
    // 0x00243560: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_1;
    // 0x00243560: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_1:
L_00243564:
    // 0x00243564: lw          $v0, 0x1C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X1C);
    // 0x00243568: sw          $v0, 0x3C($s1)
    MEM_W(0X3C, ctx->r17) = ctx->r2;
    // 0x0024356C: andi        $v0, $v0, 0x4
    ctx->r2 = ctx->r2 & 0X4;
    // 0x00243570: beq         $v0, $zero, L_00243584
    if (ctx->r2 == 0) {
        // 0x00243574: nop
    
            goto L_00243584;
    }
    // 0x00243574: nop

    // 0x00243578: sw          $zero, 0x18($s2)
    MEM_W(0X18, ctx->r18) = 0;
    // 0x0024357C: sw          $zero, 0x1C($s2)
    MEM_W(0X1C, ctx->r18) = 0;
    // 0x00243580: sw          $zero, 0x20($s2)
    MEM_W(0X20, ctx->r18) = 0;
L_00243584:
    // 0x00243584: lb          $v0, 0x34($s1)
    ctx->r2 = MEM_B(ctx->r17, 0X34);
    // 0x00243588: xor         $v0, $v0, $s3
    ctx->r2 = ctx->r2 ^ ctx->r19;
    // 0x0024358C: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
L_00243590:
    // 0x00243590: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x00243594: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x00243598: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x0024359C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x002435A0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x002435A4: jr          $ra
    // 0x002435A8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x002435A8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_00268078(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00268078: jr          $ra
    // 0x0026807C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x0026807C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void func_002684FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002684FC: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x00268500: jr          $ra
    // 0x00268504: nop

    return;
    // 0x00268504: nop

;}
RECOMP_FUNC void func_0023270C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0023270C: lw          $v1, 0xF8($a0)
    ctx->r3 = MEM_W(ctx->r4, 0XF8);
    // 0x00232710: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x00232714: mtc1        $a1, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r5;
    // 0x00232718: andi        $v0, $v0, 0x4
    ctx->r2 = ctx->r2 & 0X4;
    // 0x0023271C: beq         $v0, $zero, L_002327B4
    if (ctx->r2 == 0) {
        // 0x00232720: mov.s       $f4, $f5
        CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 5);
    ctx->f4.fl = ctx->f5.fl;
            goto L_002327B4;
    }
    // 0x00232720: mov.s       $f4, $f5
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 5);
    ctx->f4.fl = ctx->f5.fl;
    // 0x00232724: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00232728: lwc1        $f0, 0x6404($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6404);
    // 0x0023272C: sub.s       $f1, $f4, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f4.fl - ctx->f0.fl;
    // 0x00232730: mtc1        $zero, $f3
    ctx->f_odd[(3 - 1) * 2] = 0;
    // 0x00232734: c.lt.s      $f1, $f3
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 3);
    c1cs = ctx->f1.fl < ctx->f3.fl;
    // 0x00232738: nop

    // 0x0023273C: bc1t        L_00232784
    if (c1cs) {
        // 0x00232740: mov.s       $f0, $f3
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    ctx->f0.fl = ctx->f3.fl;
            goto L_00232784;
    }
    // 0x00232740: mov.s       $f0, $f3
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    ctx->f0.fl = ctx->f3.fl;
    // 0x00232744: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00232748: lwc1        $f0, 0x6408($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6408);
    // 0x0023274C: mul.s       $f0, $f1, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x00232750: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00232754: lwc1        $f2, 0x640C($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X640C);
    // 0x00232758: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x0023275C: nop

    // 0x00232760: bc1t        L_00232784
    if (c1cs) {
        // 0x00232764: mov.s       $f0, $f2
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
            goto L_00232784;
    }
    // 0x00232764: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
    // 0x00232768: c.lt.s      $f1, $f3
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 3);
    c1cs = ctx->f1.fl < ctx->f3.fl;
    // 0x0023276C: nop

    // 0x00232770: bc1t        L_00232784
    if (c1cs) {
        // 0x00232774: mov.s       $f0, $f3
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    ctx->f0.fl = ctx->f3.fl;
            goto L_00232784;
    }
    // 0x00232774: mov.s       $f0, $f3
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    ctx->f0.fl = ctx->f3.fl;
    // 0x00232778: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0023277C: lwc1        $f0, 0x6410($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6410);
    // 0x00232780: mul.s       $f0, $f1, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
L_00232784:
    // 0x00232784: lw          $v0, 0x24($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X24);
    // 0x00232788: lwc1        $f2, 0x20($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X20);
    // 0x0023278C: lwc1        $f3, 0x1C($v0)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r2, 0X1C);
    // 0x00232790: sub.s       $f2, $f2, $f3
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f2.fl = ctx->f2.fl - ctx->f3.fl;
    // 0x00232794: mul.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x00232798: add.s       $f3, $f3, $f2
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f3.fl = ctx->f3.fl + ctx->f2.fl;
    // 0x0023279C: mul.s       $f4, $f4, $f3
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f4.fl = MUL_S(ctx->f4.fl, ctx->f3.fl);
    // 0x002327A0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002327A4: lwc1        $f0, 0x6414($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6414);
    // 0x002327A8: mul.s       $f4, $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x002327AC: j           L_002327BC
    // 0x002327B0: nop

        goto L_002327BC;
    // 0x002327B0: nop

L_002327B4:
    // 0x002327B4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002327B8: lwc1        $f4, 0x6418($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X6418);
L_002327BC:
    // 0x002327BC: lwc1        $f2, 0x6C($a2)
    ctx->f2.u32l = MEM_W(ctx->r6, 0X6C);
    // 0x002327C0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002327C4: lwc1        $f1, 0x641C($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X641C);
    // 0x002327C8: sub.s       $f1, $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f1.fl = ctx->f1.fl - ctx->f2.fl;
    // 0x002327CC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002327D0: lwc1        $f0, 0x6420($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6420);
    // 0x002327D4: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x002327D8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002327DC: lwc1        $f0, 0x6424($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6424);
    // 0x002327E0: mul.s       $f0, $f4, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x002327E4: add.s       $f2, $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f1.fl;
    // 0x002327E8: mul.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f2.fl);
    // 0x002327EC: jr          $ra
    // 0x002327F0: nop

    return;
    // 0x002327F0: nop

;}
