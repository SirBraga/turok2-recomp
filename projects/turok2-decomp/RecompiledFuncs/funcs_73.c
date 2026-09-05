#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_0042F630(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0042F630: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0042F634: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x0042F638: lw          $v0, 0x14($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X14);
    // 0x0042F63C: jalr        $v0
    // 0x0042F640: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x0042F640: nop

    after_0:
    // 0x0042F644: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x0042F648: jr          $ra
    // 0x0042F64C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0042F64C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00421334(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00421334: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00421338: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x0042133C: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x00421340: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x00421344: addu        $s2, $a1, $zero
    ctx->r18 = ADD32(ctx->r5, 0);
    // 0x00421348: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x0042134C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00421350: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x00421354: beq         $v0, $zero, L_00421370
    if (ctx->r2 == 0) {
        // 0x00421358: addu        $s0, $a2, $zero
        ctx->r16 = ADD32(ctx->r6, 0);
            goto L_00421370;
    }
    // 0x00421358: addu        $s0, $a2, $zero
    ctx->r16 = ADD32(ctx->r6, 0);
    // 0x0042135C: jal         0x002053A8
    // 0x00421360: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_002053A8(rdram, ctx);
        goto after_0;
    // 0x00421360: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_0:
    // 0x00421364: lw          $a1, 0x0($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X0);
    // 0x00421368: jal         0x002052D8
    // 0x0042136C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_002052D8(rdram, ctx);
        goto after_1;
    // 0x0042136C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_1:
L_00421370:
    // 0x00421370: bne         $s0, $zero, L_00421384
    if (ctx->r16 != 0) {
        // 0x00421374: sll         $s0, $s0, 8
        ctx->r16 = S32(ctx->r16 << 8);
            goto L_00421384;
    }
    // 0x00421374: sll         $s0, $s0, 8
    ctx->r16 = S32(ctx->r16 << 8);
    // 0x00421378: lui         $v0, 0x800F
    ctx->r2 = S32(0X800F << 16);
    // 0x0042137C: lw          $v0, 0x70A8($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X70A8);
    // 0x00421380: addiu       $s0, $v0, 0x688
    ctx->r16 = ADD32(ctx->r2, 0X688);
L_00421384:
    // 0x00421384: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x00421388: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x0042138C: lui         $a3, 0x800C
    ctx->r7 = S32(0X800C << 16);
    // 0x00421390: addiu       $a3, $a3, 0x13F0
    ctx->r7 = ADD32(ctx->r7, 0X13F0);
    // 0x00421394: jal         0x00204EDC
    // 0x00421398: addiu       $a2, $zero, 0x33
    ctx->r6 = ADD32(0, 0X33);
    func_00204EDC(rdram, ctx);
        goto after_2;
    // 0x00421398: addiu       $a2, $zero, 0x33
    ctx->r6 = ADD32(0, 0X33);
    after_2:
    // 0x0042139C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x004213A0: sw          $v0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r2;
    // 0x004213A4: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
    // 0x004213A8: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    // 0x004213AC: jal         0x00266C5C
    // 0x004213B0: sw          $a0, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r4;
    func_00266C5C(rdram, ctx);
        goto after_3;
    // 0x004213B0: sw          $a0, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r4;
    after_3:
    // 0x004213B4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x004213B8: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x004213BC: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x004213C0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x004213C4: jr          $ra
    // 0x004213C8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x004213C8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_002758DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002758DC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x002758E0: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x002758E4: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x002758E8: addiu       $a0, $a0, 0x2A00
    ctx->r4 = ADD32(ctx->r4, 0X2A00);
    // 0x002758EC: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x002758F0: jal         0x002715F0
    // 0x002758F4: nop

    func_002715F0(rdram, ctx);
        goto after_0;
    // 0x002758F4: nop

    after_0:
    // 0x002758F8: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x002758FC: jr          $ra
    // 0x00275900: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00275900: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00275544(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00275544: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x00275548: lw          $v0, -0x5360($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X5360);
    // 0x0027554C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x00275550: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x00275554: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x00275558: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x0027555C: bne         $v0, $zero, L_002755A0
    if (ctx->r2 != 0) {
        // 0x00275560: sw          $a3, 0x34($sp)
        MEM_W(0X34, ctx->r29) = ctx->r7;
            goto L_002755A0;
    }
    // 0x00275560: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    // 0x00275564: lw          $v0, 0x38($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X38);
    // 0x00275568: sll         $a1, $a0, 16
    ctx->r5 = S32(ctx->r4 << 16);
    // 0x0027556C: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x00275570: lw          $v0, 0x3C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X3C);
    // 0x00275574: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x00275578: addiu       $a0, $a0, 0x2A00
    ctx->r4 = ADD32(ctx->r4, 0X2A00);
    // 0x0027557C: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x00275580: addu        $v0, $a3, $zero
    ctx->r2 = ADD32(ctx->r7, 0);
    // 0x00275584: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x00275588: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    // 0x0027558C: lw          $a3, 0x30($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X30);
    // 0x00275590: jal         0x00270C80
    // 0x00275594: sra         $a1, $a1, 16
    ctx->r5 = S32(SIGNED(ctx->r5) >> 16);
    func_00270C80(rdram, ctx);
        goto after_0;
    // 0x00275594: sra         $a1, $a1, 16
    ctx->r5 = S32(SIGNED(ctx->r5) >> 16);
    after_0:
    // 0x00275598: j           L_002755A4
    // 0x0027559C: nop

        goto L_002755A4;
    // 0x0027559C: nop

L_002755A0:
    // 0x002755A0: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_002755A4:
    // 0x002755A4: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x002755A8: jr          $ra
    // 0x002755AC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x002755AC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_00232ECC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00232ECC: lw          $v0, 0xF8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XF8);
    // 0x00232ED0: lw          $v0, 0x14($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X14);
    // 0x00232ED4: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x00232ED8: bne         $v0, $zero, L_00232EE4
    if (ctx->r2 != 0) {
        // 0x00232EDC: nop
    
            goto L_00232EE4;
    }
    // 0x00232EDC: nop

    // 0x00232EE0: lwc1        $f0, 0x160($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X160);
L_00232EE4:
    // 0x00232EE4: jr          $ra
    // 0x00232EE8: nop

    return;
    // 0x00232EE8: nop

;}
RECOMP_FUNC void func_0020BBE4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0020BBE4: lui         $v1, 0x800F
    ctx->r3 = S32(0X800F << 16);
    // 0x0020BBE8: lw          $v1, 0x7070($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X7070);
    // 0x0020BBEC: lui         $v0, 0x800E
    ctx->r2 = S32(0X800E << 16);
    // 0x0020BBF0: lw          $v0, -0x71DC($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X71DC);
    // 0x0020BBF4: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x0020BBF8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0020BBFC: lw          $s0, 0x40($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X40);
    // 0x0020BC00: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x0020BC04: addu        $s3, $a1, $zero
    ctx->r19 = ADD32(ctx->r5, 0);
    // 0x0020BC08: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x0020BC0C: addu        $s4, $a2, $zero
    ctx->r20 = ADD32(ctx->r6, 0);
    // 0x0020BC10: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x0020BC14: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x0020BC18: sw          $s5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r21;
    // 0x0020BC1C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x0020BC20: lw          $v1, 0x114($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X114);
    // 0x0020BC24: lw          $s1, 0x44($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X44);
    // 0x0020BC28: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x0020BC2C: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x0020BC30: lw          $v1, 0x2214($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X2214);
    // 0x0020BC34: srl         $v0, $v0, 3
    ctx->r2 = S32(U32(ctx->r2) >> 3);
    // 0x0020BC38: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x0020BC3C: sltiu       $v1, $v1, 0xBB8
    ctx->r3 = ctx->r3 < 0XBB8 ? 1 : 0;
    // 0x0020BC40: bne         $v1, $zero, L_0020BDE4
    if (ctx->r3 != 0) {
        // 0x0020BC44: addu        $s2, $a3, $zero
        ctx->r18 = ADD32(ctx->r7, 0);
            goto L_0020BDE4;
    }
    // 0x0020BC44: addu        $s2, $a3, $zero
    ctx->r18 = ADD32(ctx->r7, 0);
    // 0x0020BC48: lw          $a1, 0x50($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X50);
    // 0x0020BC4C: jal         0x00208810
    // 0x0020BC50: nop

    func_00208810(rdram, ctx);
        goto after_0;
    // 0x0020BC50: nop

    after_0:
    // 0x0020BC54: beq         $v0, $zero, L_0020BDE4
    if (ctx->r2 == 0) {
        // 0x0020BC58: nop
    
            goto L_0020BDE4;
    }
    // 0x0020BC58: nop

    // 0x0020BC5C: beq         $s0, $zero, L_0020BC78
    if (ctx->r16 == 0) {
        // 0x0020BC60: lui         $a1, 0xDB06
        ctx->r5 = S32(0XDB06 << 16);
            goto L_0020BC78;
    }
    // 0x0020BC60: lui         $a1, 0xDB06
    ctx->r5 = S32(0XDB06 << 16);
    // 0x0020BC64: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x0020BC68: addiu       $a0, $a0, -0x71DC
    ctx->r4 = ADD32(ctx->r4, -0X71DC);
    // 0x0020BC6C: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x0020BC70: j           L_0020BC8C
    // 0x0020BC74: ori         $a1, $a1, 0x4
    ctx->r5 = ctx->r5 | 0X4;
        goto L_0020BC8C;
    // 0x0020BC74: ori         $a1, $a1, 0x4
    ctx->r5 = ctx->r5 | 0X4;
L_0020BC78:
    // 0x0020BC78: lui         $a1, 0xDA38
    ctx->r5 = S32(0XDA38 << 16);
    // 0x0020BC7C: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x0020BC80: addiu       $a0, $a0, -0x71DC
    ctx->r4 = ADD32(ctx->r4, -0X71DC);
    // 0x0020BC84: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x0020BC88: ori         $a1, $a1, 0x3
    ctx->r5 = ctx->r5 | 0X3;
L_0020BC8C:
    // 0x0020BC8C: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x0020BC90: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x0020BC94: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
    // 0x0020BC98: sw          $a1, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r5;
    // 0x0020BC9C: beq         $s1, $zero, L_0020BD00
    if (ctx->r17 == 0) {
        // 0x0020BCA0: sw          $s2, 0x4($v1)
        MEM_W(0X4, ctx->r3) = ctx->r18;
            goto L_0020BD00;
    }
    // 0x0020BCA0: sw          $s2, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r18;
    // 0x0020BCA4: lui         $a2, 0xDC08
    ctx->r6 = S32(0XDC08 << 16);
    // 0x0020BCA8: ori         $a2, $a2, 0x60A
    ctx->r6 = ctx->r6 | 0X60A;
    // 0x0020BCAC: lui         $a3, 0xDC08
    ctx->r7 = S32(0XDC08 << 16);
    // 0x0020BCB0: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x0020BCB4: addiu       $a0, $a0, -0x71DC
    ctx->r4 = ADD32(ctx->r4, -0X71DC);
    // 0x0020BCB8: ori         $a3, $a3, 0x90A
    ctx->r7 = ctx->r7 | 0X90A;
    // 0x0020BCBC: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x0020BCC0: lui         $v0, 0xDB02
    ctx->r2 = S32(0XDB02 << 16);
    // 0x0020BCC4: addu        $a1, $v1, $zero
    ctx->r5 = ADD32(ctx->r3, 0);
    // 0x0020BCC8: addiu       $v1, $v1, 0x8
    ctx->r3 = ADD32(ctx->r3, 0X8);
    // 0x0020BCCC: sw          $v1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r3;
    // 0x0020BCD0: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
    // 0x0020BCD4: addiu       $v0, $zero, 0x18
    ctx->r2 = ADD32(0, 0X18);
    // 0x0020BCD8: sw          $v0, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r2;
    // 0x0020BCDC: addiu       $a1, $v1, 0x8
    ctx->r5 = ADD32(ctx->r3, 0X8);
    // 0x0020BCE0: addiu       $v0, $s1, 0x8
    ctx->r2 = ADD32(ctx->r17, 0X8);
    // 0x0020BCE4: sw          $a1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r5;
    // 0x0020BCE8: sw          $v0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r2;
    // 0x0020BCEC: addiu       $v0, $v1, 0x10
    ctx->r2 = ADD32(ctx->r3, 0X10);
    // 0x0020BCF0: sw          $a2, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r6;
    // 0x0020BCF4: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
    // 0x0020BCF8: sw          $a3, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r7;
    // 0x0020BCFC: sw          $s1, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r17;
L_0020BD00:
    // 0x0020BD00: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x0020BD04: beq         $s3, $v0, L_0020BD18
    if (ctx->r19 == ctx->r2) {
        // 0x0020BD08: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_0020BD18;
    }
    // 0x0020BD08: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0020BD0C: jal         0x00207FEC
    // 0x0020BD10: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    func_00207FEC(rdram, ctx);
        goto after_1;
    // 0x0020BD10: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    after_1:
    // 0x0020BD14: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
L_0020BD18:
    // 0x0020BD18: jal         0x0020565C
    // 0x0020BD1C: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    func_0020565C(rdram, ctx);
        goto after_2;
    // 0x0020BD1C: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    after_2:
    // 0x0020BD20: lw          $a3, 0x48($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X48);
    // 0x0020BD24: lw          $s0, 0x0($s4)
    ctx->r16 = MEM_W(ctx->r20, 0X0);
    // 0x0020BD28: bne         $a3, $zero, L_0020BD44
    if (ctx->r7 != 0) {
        // 0x0020BD2C: lui         $v0, 0xDB06
        ctx->r2 = S32(0XDB06 << 16);
            goto L_0020BD44;
    }
    // 0x0020BD2C: lui         $v0, 0xDB06
    ctx->r2 = S32(0XDB06 << 16);
    // 0x0020BD30: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0020BD34: jal         0x002017D4
    // 0x0020BD38: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_002017D4(rdram, ctx);
        goto after_3;
    // 0x0020BD38: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_3:
    // 0x0020BD3C: addu        $a3, $v0, $zero
    ctx->r7 = ADD32(ctx->r2, 0);
    // 0x0020BD40: lui         $v0, 0xDB06
    ctx->r2 = S32(0XDB06 << 16);
L_0020BD44:
    // 0x0020BD44: ori         $v0, $v0, 0x8
    ctx->r2 = ctx->r2 | 0X8;
    // 0x0020BD48: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0020BD4C: lui         $s0, 0x800E
    ctx->r16 = S32(0X800E << 16);
    // 0x0020BD50: addiu       $s0, $s0, -0x71DC
    ctx->r16 = ADD32(ctx->r16, -0X71DC);
    // 0x0020BD54: lw          $v1, 0x0($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X0);
    // 0x0020BD58: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x0020BD5C: addu        $a2, $v1, $zero
    ctx->r6 = ADD32(ctx->r3, 0);
    // 0x0020BD60: addiu       $v1, $v1, 0x8
    ctx->r3 = ADD32(ctx->r3, 0X8);
    // 0x0020BD64: sw          $v1, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r3;
    // 0x0020BD68: sw          $v0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r2;
    // 0x0020BD6C: jal         0x002017D4
    // 0x0020BD70: sw          $a3, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r7;
    func_002017D4(rdram, ctx);
        goto after_4;
    // 0x0020BD70: sw          $a3, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r7;
    after_4:
    // 0x0020BD74: lw          $a1, 0x4C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X4C);
    // 0x0020BD78: jal         0x002017D4
    // 0x0020BD7C: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    func_002017D4(rdram, ctx);
        goto after_5;
    // 0x0020BD7C: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    after_5:
    // 0x0020BD80: addu        $s3, $v0, $zero
    ctx->r19 = ADD32(ctx->r2, 0);
    // 0x0020BD84: lw          $s2, 0x0($s3)
    ctx->r18 = MEM_W(ctx->r19, 0X0);
    // 0x0020BD88: blez        $s2, L_0020BDE4
    if (SIGNED(ctx->r18) <= 0) {
        // 0x0020BD8C: addu        $s1, $zero, $zero
        ctx->r17 = ADD32(0, 0);
            goto L_0020BDE4;
    }
    // 0x0020BD8C: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x0020BD90: addu        $s4, $s0, $zero
    ctx->r20 = ADD32(ctx->r16, 0);
    // 0x0020BD94: lui         $s5, 0xDE00
    ctx->r21 = S32(0XDE00 << 16);
L_0020BD98:
    // 0x0020BD98: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x0020BD9C: jal         0x002017D4
    // 0x0020BDA0: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_002017D4(rdram, ctx);
        goto after_6;
    // 0x0020BDA0: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_6:
    // 0x0020BDA4: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x0020BDA8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0020BDAC: jal         0x002017D4
    // 0x0020BDB0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_002017D4(rdram, ctx);
        goto after_7;
    // 0x0020BDB0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_7:
    // 0x0020BDB4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0020BDB8: jal         0x002017D4
    // 0x0020BDBC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_002017D4(rdram, ctx);
        goto after_8;
    // 0x0020BDBC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_8:
    // 0x0020BDC0: lw          $v1, 0x0($s4)
    ctx->r3 = MEM_W(ctx->r20, 0X0);
    // 0x0020BDC4: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x0020BDC8: addu        $a0, $v1, $zero
    ctx->r4 = ADD32(ctx->r3, 0);
    // 0x0020BDCC: addiu       $v1, $v1, 0x8
    ctx->r3 = ADD32(ctx->r3, 0X8);
    // 0x0020BDD0: sw          $v1, 0x0($s4)
    MEM_W(0X0, ctx->r20) = ctx->r3;
    // 0x0020BDD4: sw          $v0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r2;
    // 0x0020BDD8: slt         $v0, $s1, $s2
    ctx->r2 = SIGNED(ctx->r17) < SIGNED(ctx->r18) ? 1 : 0;
    // 0x0020BDDC: bne         $v0, $zero, L_0020BD98
    if (ctx->r2 != 0) {
        // 0x0020BDE0: sw          $s5, 0x0($a0)
        MEM_W(0X0, ctx->r4) = ctx->r21;
            goto L_0020BD98;
    }
    // 0x0020BDE0: sw          $s5, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r21;
L_0020BDE4:
    // 0x0020BDE4: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x0020BDE8: lw          $s5, 0x24($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X24);
    // 0x0020BDEC: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x0020BDF0: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x0020BDF4: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x0020BDF8: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x0020BDFC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0020BE00: jr          $ra
    // 0x0020BE04: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x0020BE04: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_0042CBE4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0042CBE4: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x0042CBE8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0042CBEC: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x0042CBF0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0042CBF4: sdc1        $f20, 0x28($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X28, ctx->r29);
    // 0x0042CBF8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0042CBFC: lwc1        $f20, 0x6014($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X6014);
    // 0x0042CC00: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x0042CC04: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x0042CC08: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x0042CC0C: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x0042CC10: jal         0x00200B00
    // 0x0042CC14: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    func_00200B00(rdram, ctx);
        goto after_0;
    // 0x0042CC14: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    after_0:
    // 0x0042CC18: beq         $v0, $zero, L_0042CCE4
    if (ctx->r2 == 0) {
        // 0x0042CC1C: nop
    
            goto L_0042CCE4;
    }
    // 0x0042CC1C: nop

    // 0x0042CC20: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x0042CC24: lw          $s2, 0x0($v0)
    ctx->r18 = MEM_W(ctx->r2, 0X0);
    // 0x0042CC28: lw          $s1, 0x0($s2)
    ctx->r17 = MEM_W(ctx->r18, 0X0);
    // 0x0042CC2C: blez        $s1, L_0042CCE4
    if (SIGNED(ctx->r17) <= 0) {
        // 0x0042CC30: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_0042CCE4;
    }
    // 0x0042CC30: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x0042CC34: lui         $s3, 0x800A
    ctx->r19 = S32(0X800A << 16);
    // 0x0042CC38: addiu       $s3, $s3, 0x6018
    ctx->r19 = ADD32(ctx->r19, 0X6018);
    // 0x0042CC3C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
L_0042CC40:
    // 0x0042CC40: jal         0x002017D4
    // 0x0042CC44: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_002017D4(rdram, ctx);
        goto after_1;
    // 0x0042CC44: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_1:
    // 0x0042CC48: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x0042CC4C: lw          $a0, 0x0($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X0);
    // 0x0042CC50: sltiu       $v0, $a0, 0xC
    ctx->r2 = ctx->r4 < 0XC ? 1 : 0;
    // 0x0042CC54: beql        $v0, $zero, L_0042CCD8
    if (ctx->r2 == 0) {
        // 0x0042CC58: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_0042CCD8;
    }
    goto skip_0;
    // 0x0042CC58: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    skip_0:
    // 0x0042CC5C: sll         $v0, $a0, 2
    ctx->r2 = S32(ctx->r4 << 2);
    // 0x0042CC60: addu        $v0, $v0, $s3
    gpr jr_addend_0042CC68 = ctx->r2;
    ctx->r2 = ADD32(ctx->r2, ctx->r19);
    // 0x0042CC64: lw          $v0, 0x0($v0)
    ctx->r2 = ADD32(ctx->r2, 0X0);
    // 0x0042CC68: jr          $v0
    // 0x0042CC6C: nop

    switch (jr_addend_0042CC68 >> 2) {
        case 0: goto L_0042CCD4; break;
        case 1: goto L_0042CC70; break;
        case 2: goto L_0042CCD4; break;
        case 3: goto L_0042CCD4; break;
        case 4: goto L_0042CCD4; break;
        case 5: goto L_0042CCD4; break;
        case 6: goto L_0042CCD4; break;
        case 7: goto L_0042CCD4; break;
        case 8: goto L_0042CCD4; break;
        case 9: goto L_0042CCD4; break;
        case 10: goto L_0042CCD4; break;
        case 11: goto L_0042CCBC; break;
        default: switch_error(__func__, 0x0042CC68, 0x800A6018);
    }
    // 0x0042CC6C: nop

L_0042CC70:
    // 0x0042CC70: lwc1        $f4, 0x28($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X28);
    // 0x0042CC74: mul.s       $f4, $f4, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f4.fl = MUL_S(ctx->f4.fl, ctx->f20.fl);
    // 0x0042CC78: lwc1        $f5, 0x30($v1)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r3, 0X30);
    // 0x0042CC7C: mul.s       $f5, $f5, $f20
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f5.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f5.fl = MUL_S(ctx->f5.fl, ctx->f20.fl);
    // 0x0042CC80: lwc1        $f3, 0x34($v1)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r3, 0X34);
    // 0x0042CC84: mul.s       $f3, $f3, $f20
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f3.fl = MUL_S(ctx->f3.fl, ctx->f20.fl);
    // 0x0042CC88: lwc1        $f2, 0x4C($v1)
    ctx->f2.u32l = MEM_W(ctx->r3, 0X4C);
    // 0x0042CC8C: mul.s       $f2, $f2, $f20
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f20.fl);
    // 0x0042CC90: lwc1        $f1, 0x50($v1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r3, 0X50);
    // 0x0042CC94: mul.s       $f1, $f1, $f20
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f20.fl);
    // 0x0042CC98: lwc1        $f0, 0x54($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X54);
    // 0x0042CC9C: mul.s       $f0, $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f20.fl);
    // 0x0042CCA0: swc1        $f4, 0x28($v1)
    MEM_W(0X28, ctx->r3) = ctx->f4.u32l;
    // 0x0042CCA4: swc1        $f5, 0x30($v1)
    MEM_W(0X30, ctx->r3) = ctx->f_odd[(5 - 1) * 2];
    // 0x0042CCA8: swc1        $f3, 0x34($v1)
    MEM_W(0X34, ctx->r3) = ctx->f_odd[(3 - 1) * 2];
    // 0x0042CCAC: swc1        $f2, 0x4C($v1)
    MEM_W(0X4C, ctx->r3) = ctx->f2.u32l;
    // 0x0042CCB0: swc1        $f1, 0x50($v1)
    MEM_W(0X50, ctx->r3) = ctx->f_odd[(1 - 1) * 2];
    // 0x0042CCB4: j           L_0042CCD4
    // 0x0042CCB8: swc1        $f0, 0x54($v1)
    MEM_W(0X54, ctx->r3) = ctx->f0.u32l;
        goto L_0042CCD4;
    // 0x0042CCB8: swc1        $f0, 0x54($v1)
    MEM_W(0X54, ctx->r3) = ctx->f0.u32l;
L_0042CCBC:
    // 0x0042CCBC: lwc1        $f1, 0x28($v1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r3, 0X28);
    // 0x0042CCC0: mul.s       $f1, $f1, $f20
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f20.fl);
    // 0x0042CCC4: lwc1        $f0, 0x2C($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X2C);
    // 0x0042CCC8: mul.s       $f0, $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f20.fl);
    // 0x0042CCCC: swc1        $f1, 0x28($v1)
    MEM_W(0X28, ctx->r3) = ctx->f_odd[(1 - 1) * 2];
    // 0x0042CCD0: swc1        $f0, 0x2C($v1)
    MEM_W(0X2C, ctx->r3) = ctx->f0.u32l;
L_0042CCD4:
    // 0x0042CCD4: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_0042CCD8:
    // 0x0042CCD8: slt         $v0, $s0, $s1
    ctx->r2 = SIGNED(ctx->r16) < SIGNED(ctx->r17) ? 1 : 0;
    // 0x0042CCDC: bne         $v0, $zero, L_0042CC40
    if (ctx->r2 != 0) {
        // 0x0042CCE0: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_0042CC40;
    }
    // 0x0042CCE0: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
L_0042CCE4:
    // 0x0042CCE4: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x0042CCE8: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x0042CCEC: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x0042CCF0: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x0042CCF4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0042CCF8: ldc1        $f20, 0x28($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X28);
    // 0x0042CCFC: jr          $ra
    // 0x0042CD00: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x0042CD00: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_00288C5C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00288C5C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x00288C60: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x00288C64: addu        $at, $a0, $at
    ctx->r1 = ADD32(ctx->r4, ctx->r1);
    // 0x00288C68: sb          $v0, 0x3FE1($at)
    MEM_B(0X3FE1, ctx->r1) = ctx->r2;
    // 0x00288C6C: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x00288C70: addu        $at, $a0, $at
    ctx->r1 = ADD32(ctx->r4, ctx->r1);
    // 0x00288C74: sw          $a1, 0x3FDC($at)
    MEM_W(0X3FDC, ctx->r1) = ctx->r5;
    // 0x00288C78: jr          $ra
    // 0x00288C7C: nop

    return;
    // 0x00288C7C: nop

;}
RECOMP_FUNC void func_004688D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004688D0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x004688D4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x004688D8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x004688DC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x004688E0: sdc1        $f21, 0x20($sp)
    CHECK_FR(ctx, 21);
    SD(ctx->f21.u64, 0X20, ctx->r29);
    // 0x004688E4: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x004688E8: jal         0x00280C28
    // 0x004688EC: addiu       $a0, $s0, 0x24
    ctx->r4 = ADD32(ctx->r16, 0X24);
    func_00280C28(rdram, ctx);
        goto after_0;
    // 0x004688EC: addiu       $a0, $s0, 0x24
    ctx->r4 = ADD32(ctx->r16, 0X24);
    after_0:
    // 0x004688F0: jal         0x0020F79C
    // 0x004688F4: addiu       $a0, $s0, 0x14C
    ctx->r4 = ADD32(ctx->r16, 0X14C);
    func_0020F79C(rdram, ctx);
        goto after_1;
    // 0x004688F4: addiu       $a0, $s0, 0x14C
    ctx->r4 = ADD32(ctx->r16, 0X14C);
    after_1:
    // 0x004688F8: jal         0x0020F79C
    // 0x004688FC: addiu       $a0, $s0, 0x1CC
    ctx->r4 = ADD32(ctx->r16, 0X1CC);
    func_0020F79C(rdram, ctx);
        goto after_2;
    // 0x004688FC: addiu       $a0, $s0, 0x1CC
    ctx->r4 = ADD32(ctx->r16, 0X1CC);
    after_2:
    // 0x00468900: addiu       $a0, $s0, 0x18C
    ctx->r4 = ADD32(ctx->r16, 0X18C);
    // 0x00468904: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x00468908: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0046890C: lwc1        $f21, -0x6810($at)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r1, -0X6810);
    // 0x00468910: addiu       $v0, $s0, 0x12C
    ctx->r2 = ADD32(ctx->r16, 0X12C);
    // 0x00468914: swc1        $f20, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f20.u32l;
    // 0x00468918: swc1        $f20, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f20.u32l;
    // 0x0046891C: swc1        $f20, 0x12C($s0)
    MEM_W(0X12C, ctx->r16) = ctx->f20.u32l;
    // 0x00468920: jal         0x0020F79C
    // 0x00468924: swc1        $f21, 0x138($s0)
    MEM_W(0X138, ctx->r16) = ctx->f_odd[(21 - 1) * 2];
    func_0020F79C(rdram, ctx);
        goto after_3;
    // 0x00468924: swc1        $f21, 0x138($s0)
    MEM_W(0X138, ctx->r16) = ctx->f_odd[(21 - 1) * 2];
    after_3:
    // 0x00468928: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0046892C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00468930: lwc1        $f0, 0x2030($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X2030);
    // 0x00468934: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00468938: swc1        $f0, 0x288($s0)
    MEM_W(0X288, ctx->r16) = ctx->f0.u32l;
    // 0x0046893C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00468940: lwc1        $f0, 0x2034($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X2034);
    // 0x00468944: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00468948: swc1        $f0, 0x28C($s0)
    MEM_W(0X28C, ctx->r16) = ctx->f0.u32l;
    // 0x0046894C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00468950: lwc1        $f0, -0x680C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X680C);
    // 0x00468954: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00468958: lwc1        $f1, -0x6808($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, -0X6808);
    // 0x0046895C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x00468960: sw          $v0, 0x500($s0)
    MEM_W(0X500, ctx->r16) = ctx->r2;
    // 0x00468964: addiu       $v0, $zero, 0x3E3
    ctx->r2 = ADD32(0, 0X3E3);
    // 0x00468968: swc1        $f20, 0x290($s0)
    MEM_W(0X290, ctx->r16) = ctx->f20.u32l;
    // 0x0046896C: swc1        $f20, 0x294($s0)
    MEM_W(0X294, ctx->r16) = ctx->f20.u32l;
    // 0x00468970: sb          $zero, 0x508($s0)
    MEM_B(0X508, ctx->r16) = 0;
    // 0x00468974: sb          $zero, 0x50C($s0)
    MEM_B(0X50C, ctx->r16) = 0;
    // 0x00468978: sb          $zero, 0x509($s0)
    MEM_B(0X509, ctx->r16) = 0;
    // 0x0046897C: sb          $zero, 0x50D($s0)
    MEM_B(0X50D, ctx->r16) = 0;
    // 0x00468980: sb          $zero, 0x50A($s0)
    MEM_B(0X50A, ctx->r16) = 0;
    // 0x00468984: sb          $zero, 0x50E($s0)
    MEM_B(0X50E, ctx->r16) = 0;
    // 0x00468988: sb          $zero, 0x50B($s0)
    MEM_B(0X50B, ctx->r16) = 0;
    // 0x0046898C: sb          $zero, 0x50F($s0)
    MEM_B(0X50F, ctx->r16) = 0;
    // 0x00468990: swc1        $f21, 0x504($s0)
    MEM_W(0X504, ctx->r16) = ctx->f_odd[(21 - 1) * 2];
    // 0x00468994: sw          $v0, 0x524($s0)
    MEM_W(0X524, ctx->r16) = ctx->r2;
    // 0x00468998: sw          $v0, 0x528($s0)
    MEM_W(0X528, ctx->r16) = ctx->r2;
    // 0x0046899C: sb          $zero, 0x530($s0)
    MEM_B(0X530, ctx->r16) = 0;
    // 0x004689A0: swc1        $f21, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f_odd[(21 - 1) * 2];
    // 0x004689A4: swc1        $f21, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->f_odd[(21 - 1) * 2];
    // 0x004689A8: swc1        $f0, 0x510($s0)
    MEM_W(0X510, ctx->r16) = ctx->f0.u32l;
    // 0x004689AC: swc1        $f0, 0x514($s0)
    MEM_W(0X514, ctx->r16) = ctx->f0.u32l;
    // 0x004689B0: swc1        $f1, 0x518($s0)
    MEM_W(0X518, ctx->r16) = ctx->f_odd[(1 - 1) * 2];
    // 0x004689B4: jal         0x00281278
    // 0x004689B8: swc1        $f1, 0x51C($s0)
    MEM_W(0X51C, ctx->r16) = ctx->f_odd[(1 - 1) * 2];
    func_00281278(rdram, ctx);
        goto after_4;
    // 0x004689B8: swc1        $f1, 0x51C($s0)
    MEM_W(0X51C, ctx->r16) = ctx->f_odd[(1 - 1) * 2];
    after_4:
    // 0x004689BC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x004689C0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x004689C4: addiu       $v0, $s0, 0x94
    ctx->r2 = ADD32(ctx->r16, 0X94);
    // 0x004689C8: swc1        $f20, 0xE8($s0)
    MEM_W(0XE8, ctx->r16) = ctx->f20.u32l;
    // 0x004689CC: swc1        $f20, 0xEC($s0)
    MEM_W(0XEC, ctx->r16) = ctx->f20.u32l;
    // 0x004689D0: swc1        $f20, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f20.u32l;
    // 0x004689D4: swc1        $f20, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f20.u32l;
    // 0x004689D8: swc1        $f20, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f20.u32l;
    // 0x004689DC: swc1        $f21, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->f_odd[(21 - 1) * 2];
    // 0x004689E0: addiu       $v0, $s0, 0xAC
    ctx->r2 = ADD32(ctx->r16, 0XAC);
    // 0x004689E4: swc1        $f20, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f20.u32l;
    // 0x004689E8: swc1        $f20, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f20.u32l;
    // 0x004689EC: swc1        $f20, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f20.u32l;
    // 0x004689F0: swc1        $f20, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f20.u32l;
    // 0x004689F4: addiu       $v0, $s0, 0xC0
    ctx->r2 = ADD32(ctx->r16, 0XC0);
    // 0x004689F8: swc1        $f20, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f20.u32l;
    // 0x004689FC: swc1        $f20, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f20.u32l;
    // 0x00468A00: swc1        $f20, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f20.u32l;
    // 0x00468A04: swc1        $f20, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f20.u32l;
    // 0x00468A08: addiu       $v0, $s0, 0xD4
    ctx->r2 = ADD32(ctx->r16, 0XD4);
    // 0x00468A0C: swc1        $f20, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f20.u32l;
    // 0x00468A10: swc1        $f20, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f20.u32l;
    // 0x00468A14: swc1        $f20, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f20.u32l;
    // 0x00468A18: jal         0x00280E64
    // 0x00468A1C: swc1        $f20, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f20.u32l;
    func_00280E64(rdram, ctx);
        goto after_5;
    // 0x00468A1C: swc1        $f20, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f20.u32l;
    after_5:
    // 0x00468A20: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x00468A24: addiu       $a2, $zero, 0x3FF
    ctx->r6 = ADD32(0, 0X3FF);
    // 0x00468A28: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x00468A2C: lw          $v0, 0x2030($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2030);
    // 0x00468A30: addu        $v1, $s0, $zero
    ctx->r3 = ADD32(ctx->r16, 0);
    // 0x00468A34: sll         $a0, $v0, 1
    ctx->r4 = S32(ctx->r2 << 1);
L_00468A38:
    // 0x00468A38: sh          $a0, 0x298($v1)
    MEM_H(0X298, ctx->r3) = ctx->r4;
    // 0x00468A3C: sh          $a0, 0x29A($v1)
    MEM_H(0X29A, ctx->r3) = ctx->r4;
    // 0x00468A40: sh          $a2, 0x29C($v1)
    MEM_H(0X29C, ctx->r3) = ctx->r6;
    // 0x00468A44: sh          $zero, 0x29E($v1)
    MEM_H(0X29E, ctx->r3) = 0;
    // 0x00468A48: sh          $a0, 0x2A0($v1)
    MEM_H(0X2A0, ctx->r3) = ctx->r4;
    // 0x00468A4C: sh          $a0, 0x2A2($v1)
    MEM_H(0X2A2, ctx->r3) = ctx->r4;
    // 0x00468A50: sh          $zero, 0x2A4($v1)
    MEM_H(0X2A4, ctx->r3) = 0;
    // 0x00468A54: sh          $zero, 0x2A6($v1)
    MEM_H(0X2A6, ctx->r3) = 0;
    // 0x00468A58: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x00468A5C: slti        $v0, $a1, 0x2
    ctx->r2 = SIGNED(ctx->r5) < 0X2 ? 1 : 0;
    // 0x00468A60: bne         $v0, $zero, L_00468A38
    if (ctx->r2 != 0) {
        // 0x00468A64: addiu       $v1, $v1, 0x10
        ctx->r3 = ADD32(ctx->r3, 0X10);
            goto L_00468A38;
    }
    // 0x00468A64: addiu       $v1, $v1, 0x10
    ctx->r3 = ADD32(ctx->r3, 0X10);
    // 0x00468A68: jal         0x00416614
    // 0x00468A6C: addiu       $a0, $s0, 0x53C
    ctx->r4 = ADD32(ctx->r16, 0X53C);
    func_00416614(rdram, ctx);
        goto after_6;
    // 0x00468A6C: addiu       $a0, $s0, 0x53C
    ctx->r4 = ADD32(ctx->r16, 0X53C);
    after_6:
    // 0x00468A70: jal         0x0042FF10
    // 0x00468A74: addiu       $a0, $s0, 0x558
    ctx->r4 = ADD32(ctx->r16, 0X558);
    func_0042FF10(rdram, ctx);
        goto after_7;
    // 0x00468A74: addiu       $a0, $s0, 0x558
    ctx->r4 = ADD32(ctx->r16, 0X558);
    after_7:
    // 0x00468A78: jal         0x0020F79C
    // 0x00468A7C: addiu       $a0, $s0, 0xE3C
    ctx->r4 = ADD32(ctx->r16, 0XE3C);
    func_0020F79C(rdram, ctx);
        goto after_8;
    // 0x00468A7C: addiu       $a0, $s0, 0xE3C
    ctx->r4 = ADD32(ctx->r16, 0XE3C);
    after_8:
    // 0x00468A80: jal         0x0020F79C
    // 0x00468A84: addiu       $a0, $s0, 0xE7C
    ctx->r4 = ADD32(ctx->r16, 0XE7C);
    func_0020F79C(rdram, ctx);
        goto after_9;
    // 0x00468A84: addiu       $a0, $s0, 0xE7C
    ctx->r4 = ADD32(ctx->r16, 0XE7C);
    after_9:
    // 0x00468A88: addiu       $a0, $s0, 0xE28
    ctx->r4 = ADD32(ctx->r16, 0XE28);
    // 0x00468A8C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x00468A90: sw          $zero, 0x52C($s0)
    MEM_W(0X52C, ctx->r16) = 0;
    // 0x00468A94: lui         $at, 0x800F
    ctx->r1 = S32(0X800F << 16);
    // 0x00468A98: sw          $zero, 0x5A44($at)
    MEM_W(0X5A44, ctx->r1) = 0;
    // 0x00468A9C: jal         0x00200500
    // 0x00468AA0: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    func_00200500(rdram, ctx);
        goto after_10;
    // 0x00468AA0: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_10:
    // 0x00468AA4: jal         0x00281A98
    // 0x00468AA8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00281A98(rdram, ctx);
        goto after_11;
    // 0x00468AA8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_11:
    // 0x00468AAC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x00468AB0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00468AB4: ldc1        $f21, 0x20($sp)
    CHECK_FR(ctx, 21);
    ctx->f21.u64 = LD(ctx->r29, 0X20);
    // 0x00468AB8: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x00468ABC: jr          $ra
    // 0x00468AC0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x00468AC0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_00224FC0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00224FC0: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x00224FC4: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x00224FC8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x00224FCC: addiu       $v0, $sp, 0x1C
    ctx->r2 = ADD32(ctx->r29, 0X1C);
    // 0x00224FD0: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x00224FD4: addu        $s1, $a2, $zero
    ctx->r17 = ADD32(ctx->r6, 0);
    // 0x00224FD8: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x00224FDC: addu        $s2, $a3, $zero
    ctx->r18 = ADD32(ctx->r7, 0);
    // 0x00224FE0: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x00224FE4: lhu         $v1, 0x0($a1)
    ctx->r3 = MEM_HU(ctx->r5, 0X0);
    // 0x00224FE8: lw          $a0, 0x1174($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X1174);
    // 0x00224FEC: lw          $a1, 0x116C($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X116C);
    // 0x00224FF0: addiu       $a3, $sp, 0x18
    ctx->r7 = ADD32(ctx->r29, 0X18);
    // 0x00224FF4: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x00224FF8: jal         0x00266D8C
    // 0x00224FFC: addu        $a2, $v1, $zero
    ctx->r6 = ADD32(ctx->r3, 0);
    func_00266D8C(rdram, ctx);
        goto after_0;
    // 0x00224FFC: addu        $a2, $v1, $zero
    ctx->r6 = ADD32(ctx->r3, 0);
    after_0:
    // 0x00225000: beql        $v0, $zero, L_0022503C
    if (ctx->r2 == 0) {
        // 0x00225004: sw          $zero, 0x0($s1)
        MEM_W(0X0, ctx->r17) = 0;
            goto L_0022503C;
    }
    goto skip_0;
    // 0x00225004: sw          $zero, 0x0($s1)
    MEM_W(0X0, ctx->r17) = 0;
    skip_0:
    // 0x00225008: lw          $v1, 0x18($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X18);
    // 0x0022500C: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x00225010: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x00225014: lw          $v1, 0x117C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X117C);
    // 0x00225018: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x0022501C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x00225020: sw          $v1, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r3;
    // 0x00225024: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x00225028: lw          $v1, 0x18($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X18);
    // 0x0022502C: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x00225030: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x00225034: j           L_00225040
    // 0x00225038: sw          $v0, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r2;
        goto L_00225040;
    // 0x00225038: sw          $v0, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r2;
L_0022503C:
    // 0x0022503C: sw          $zero, 0x0($s2)
    MEM_W(0X0, ctx->r18) = 0;
L_00225040:
    // 0x00225040: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x00225044: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x00225048: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x0022504C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x00225050: jr          $ra
    // 0x00225054: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x00225054: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_004079C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004079C4: addiu       $sp, $sp, -0xB0
    ctx->r29 = ADD32(ctx->r29, -0XB0);
    // 0x004079C8: sw          $s2, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->r18;
    // 0x004079CC: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x004079D0: sw          $s1, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r17;
    // 0x004079D4: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x004079D8: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    // 0x004079DC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x004079E0: sw          $s0, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r16;
    // 0x004079E4: lui         $s0, 0x800F
    ctx->r16 = S32(0X800F << 16);
    // 0x004079E8: addiu       $s0, $s0, 0x1F50
    ctx->r16 = ADD32(ctx->r16, 0X1F50);
    // 0x004079EC: sw          $ra, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->r31;
    // 0x004079F0: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x004079F4: addu        $v1, $a3, $zero
    ctx->r3 = ADD32(ctx->r7, 0);
    // 0x004079F8: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    // 0x004079FC: ori         $v0, $v0, 0x8000
    ctx->r2 = ctx->r2 | 0X8000;
    // 0x00407A00: jal         0x00246108
    // 0x00407A04: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    func_00246108(rdram, ctx);
        goto after_0;
    // 0x00407A04: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    after_0:
    // 0x00407A08: lui         $a0, 0xFFFF
    ctx->r4 = S32(0XFFFF << 16);
    // 0x00407A0C: ori         $a0, $a0, 0x7FFF
    ctx->r4 = ctx->r4 | 0X7FFF;
    // 0x00407A10: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x00407A14: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x00407A18: and         $v0, $v0, $a0
    ctx->r2 = ctx->r2 & ctx->r4;
    // 0x00407A1C: beq         $v1, $zero, L_00407A50
    if (ctx->r3 == 0) {
        // 0x00407A20: sw          $v0, 0x0($s0)
        MEM_W(0X0, ctx->r16) = ctx->r2;
            goto L_00407A50;
    }
    // 0x00407A20: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x00407A24: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x00407A28: lui         $a2, 0x3E86
    ctx->r6 = S32(0X3E86 << 16);
    // 0x00407A2C: ori         $a2, $a2, 0xA93
    ctx->r6 = ctx->r6 | 0XA93;
    // 0x00407A30: lw          $a3, 0x20($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X20);
    // 0x00407A34: jal         0x00245BAC
    // 0x00407A38: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_00245BAC(rdram, ctx);
        goto after_1;
    // 0x00407A38: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_1:
    // 0x00407A3C: lwc1        $f0, 0x20($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X20);
    // 0x00407A40: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x00407A44: swc1        $f0, -0x9D8($at)
    MEM_W(-0X9D8, ctx->r1) = ctx->f0.u32l;
    // 0x00407A48: j           L_00407A6C
    // 0x00407A4C: nop

        goto L_00407A6C;
    // 0x00407A4C: nop

L_00407A50:
    // 0x00407A50: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x00407A54: lui         $a2, 0x3E86
    ctx->r6 = S32(0X3E86 << 16);
    // 0x00407A58: ori         $a2, $a2, 0xA93
    ctx->r6 = ctx->r6 | 0XA93;
    // 0x00407A5C: lui         $a3, 0x8013
    ctx->r7 = S32(0X8013 << 16);
    // 0x00407A60: lw          $a3, -0x9D8($a3)
    ctx->r7 = MEM_W(ctx->r7, -0X9D8);
    // 0x00407A64: jal         0x00245BAC
    // 0x00407A68: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_00245BAC(rdram, ctx);
        goto after_2;
    // 0x00407A68: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_2:
L_00407A6C:
    // 0x00407A6C: lb          $v0, 0xC7($s1)
    ctx->r2 = MEM_B(ctx->r17, 0XC7);
    // 0x00407A70: beq         $v0, $zero, L_00407AA8
    if (ctx->r2 == 0) {
        // 0x00407A74: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_00407AA8;
    }
    // 0x00407A74: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x00407A78: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x00407A7C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x00407A80: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x00407A84: addiu       $v1, $v1, -0x5FC
    ctx->r3 = ADD32(ctx->r3, -0X5FC);
    // 0x00407A88: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00407A8C: lwc1        $f0, 0x558($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X558);
    // 0x00407A90: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x00407A94: swc1        $f0, 0x1FC($a0)
    MEM_W(0X1FC, ctx->r4) = ctx->f0.u32l;
    // 0x00407A98: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x00407A9C: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x00407AA0: jal         0x00243414
    // 0x00407AA4: sw          $v0, -0x28($v1)
    MEM_W(-0X28, ctx->r3) = ctx->r2;
    func_00243414(rdram, ctx);
        goto after_3;
    // 0x00407AA4: sw          $v0, -0x28($v1)
    MEM_W(-0X28, ctx->r3) = ctx->r2;
    after_3:
L_00407AA8:
    // 0x00407AA8: lw          $ra, 0xAC($sp)
    ctx->r31 = MEM_W(ctx->r29, 0XAC);
    // 0x00407AAC: lw          $s2, 0xA8($sp)
    ctx->r18 = MEM_W(ctx->r29, 0XA8);
    // 0x00407AB0: lw          $s1, 0xA4($sp)
    ctx->r17 = MEM_W(ctx->r29, 0XA4);
    // 0x00407AB4: lw          $s0, 0xA0($sp)
    ctx->r16 = MEM_W(ctx->r29, 0XA0);
    // 0x00407AB8: jr          $ra
    // 0x00407ABC: addiu       $sp, $sp, 0xB0
    ctx->r29 = ADD32(ctx->r29, 0XB0);
    return;
    // 0x00407ABC: addiu       $sp, $sp, 0xB0
    ctx->r29 = ADD32(ctx->r29, 0XB0);
;}
RECOMP_FUNC void func_00252840(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00252840: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00252844: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x00252848: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0025284C: lw          $s0, 0x20($a0)
    ctx->r16 = MEM_W(ctx->r4, 0X20);
    // 0x00252850: beq         $s0, $zero, L_0025294C
    if (ctx->r16 == 0) {
        // 0x00252854: nop
    
            goto L_0025294C;
    }
    // 0x00252854: nop

L_00252858:
    // 0x00252858: lw          $v0, 0x518($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X518);
    // 0x0025285C: sb          $zero, 0x3E($v0)
    MEM_B(0X3E, ctx->r2) = 0;
    // 0x00252860: lw          $v0, 0x518($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X518);
    // 0x00252864: lw          $a2, 0x520($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X520);
    // 0x00252868: lbu         $v1, 0x3E($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X3E);
    // 0x0025286C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00252870: beql        $v1, $v0, L_00252878
    if (ctx->r3 == ctx->r2) {
        // 0x00252874: addiu       $a2, $zero, 0xB
        ctx->r6 = ADD32(0, 0XB);
            goto L_00252878;
    }
    goto skip_0;
    // 0x00252874: addiu       $a2, $zero, 0xB
    ctx->r6 = ADD32(0, 0XB);
    skip_0:
L_00252878:
    // 0x00252878: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x0025287C: addiu       $a0, $a0, 0x7078
    ctx->r4 = ADD32(ctx->r4, 0X7078);
    // 0x00252880: jal         0x00225EBC
    // 0x00252884: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    func_00225EBC(rdram, ctx);
        goto after_0;
    // 0x00252884: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    after_0:
    // 0x00252888: bnel        $v0, $zero, L_002528C4
    if (ctx->r2 != 0) {
        // 0x0025288C: sw          $v0, 0x14($s0)
        MEM_W(0X14, ctx->r16) = ctx->r2;
            goto L_002528C4;
    }
    goto skip_1;
    // 0x0025288C: sw          $v0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r2;
    skip_1:
    // 0x00252890: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x00252894: addiu       $a0, $a0, 0x7078
    ctx->r4 = ADD32(ctx->r4, 0X7078);
    // 0x00252898: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    // 0x0025289C: jal         0x00225EBC
    // 0x002528A0: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    func_00225EBC(rdram, ctx);
        goto after_1;
    // 0x002528A0: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    after_1:
    // 0x002528A4: bnel        $v0, $zero, L_002528C4
    if (ctx->r2 != 0) {
        // 0x002528A8: sw          $v0, 0x14($s0)
        MEM_W(0X14, ctx->r16) = ctx->r2;
            goto L_002528C4;
    }
    goto skip_2;
    // 0x002528A8: sw          $v0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r2;
    skip_2:
    // 0x002528AC: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x002528B0: addiu       $a0, $a0, 0x7078
    ctx->r4 = ADD32(ctx->r4, 0X7078);
    // 0x002528B4: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x002528B8: jal         0x00225EBC
    // 0x002528BC: addu        $a2, $a1, $zero
    ctx->r6 = ADD32(ctx->r5, 0);
    func_00225EBC(rdram, ctx);
        goto after_2;
    // 0x002528BC: addu        $a2, $a1, $zero
    ctx->r6 = ADD32(ctx->r5, 0);
    after_2:
    // 0x002528C0: sw          $v0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r2;
L_002528C4:
    // 0x002528C4: lwc1        $f0, 0x38($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X38);
    // 0x002528C8: swc1        $f0, 0x34($s0)
    MEM_W(0X34, ctx->r16) = ctx->f0.u32l;
    // 0x002528CC: lwc1        $f0, 0x3C($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X3C);
    // 0x002528D0: swc1        $f0, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->f0.u32l;
    // 0x002528D4: lwc1        $f0, 0x40($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X40);
    // 0x002528D8: swc1        $f0, 0x3C($s0)
    MEM_W(0X3C, ctx->r16) = ctx->f0.u32l;
    // 0x002528DC: lw          $v0, 0x18($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X18);
    // 0x002528E0: lw          $v1, 0x14($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X14);
    // 0x002528E4: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x002528E8: sw          $v0, 0x524($s0)
    MEM_W(0X524, ctx->r16) = ctx->r2;
    // 0x002528EC: lw          $v0, 0x18($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X18);
    // 0x002528F0: lw          $v1, 0x520($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X520);
    // 0x002528F4: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x002528F8: sw          $v0, 0x144($s0)
    MEM_W(0X144, ctx->r16) = ctx->r2;
    // 0x002528FC: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x00252900: bnel        $v1, $v0, L_0025293C
    if (ctx->r3 != ctx->r2) {
        // 0x00252904: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_0025293C;
    }
    goto skip_3;
    // 0x00252904: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    skip_3:
    // 0x00252908: jal         0x002113A4
    // 0x0025290C: nop

    func_002113A4(rdram, ctx);
        goto after_3;
    // 0x0025290C: nop

    after_3:
    // 0x00252910: lui         $v1, 0x38E3
    ctx->r3 = S32(0X38E3 << 16);
    // 0x00252914: ori         $v1, $v1, 0x8E39
    ctx->r3 = ctx->r3 | 0X8E39;
    // 0x00252918: mult        $v0, $v1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x0025291C: sra         $v1, $v0, 31
    ctx->r3 = S32(SIGNED(ctx->r2) >> 31);
    // 0x00252920: mfhi        $a3
    ctx->r7 = hi;
    // 0x00252924: sra         $a0, $a3, 2
    ctx->r4 = S32(SIGNED(ctx->r7) >> 2);
    // 0x00252928: subu        $a0, $a0, $v1
    ctx->r4 = SUB32(ctx->r4, ctx->r3);
    // 0x0025292C: sll         $v1, $a0, 3
    ctx->r3 = S32(ctx->r4 << 3);
    // 0x00252930: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x00252934: sll         $v1, $v1, 1
    ctx->r3 = S32(ctx->r3 << 1);
    // 0x00252938: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
L_0025293C:
    // 0x0025293C: sb          $v0, 0x151($s0)
    MEM_B(0X151, ctx->r16) = ctx->r2;
    // 0x00252940: lw          $s0, 0x1320($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X1320);
    // 0x00252944: bne         $s0, $zero, L_00252858
    if (ctx->r16 != 0) {
        // 0x00252948: nop
    
            goto L_00252858;
    }
    // 0x00252948: nop

L_0025294C:
    // 0x0025294C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x00252950: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00252954: jr          $ra
    // 0x00252958: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00252958: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00465760(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00465760: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x00465764: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x00465768: addu        $s3, $a0, $zero
    ctx->r19 = ADD32(ctx->r4, 0);
    // 0x0046576C: sw          $ra, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r31;
    // 0x00465770: sw          $s7, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r23;
    // 0x00465774: sw          $s6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r22;
    // 0x00465778: sw          $s5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r21;
    // 0x0046577C: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x00465780: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x00465784: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00465788: jal         0x002842C8
    // 0x0046578C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    func_002842C8(rdram, ctx);
        goto after_0;
    // 0x0046578C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_0:
    // 0x00465790: lw          $s2, 0x1168($s3)
    ctx->r18 = MEM_W(ctx->r19, 0X1168);
    // 0x00465794: blez        $s2, L_004657F4
    if (SIGNED(ctx->r18) <= 0) {
        // 0x00465798: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_004657F4;
    }
    // 0x00465798: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x0046579C: addiu       $s7, $zero, 0x1
    ctx->r23 = ADD32(0, 0X1);
    // 0x004657A0: addiu       $s6, $zero, 0x4
    ctx->r22 = ADD32(0, 0X4);
    // 0x004657A4: addiu       $s5, $zero, 0x2
    ctx->r21 = ADD32(0, 0X2);
    // 0x004657A8: addiu       $s4, $zero, 0xA
    ctx->r20 = ADD32(0, 0XA);
    // 0x004657AC: addu        $s1, $s0, $zero
    ctx->r17 = ADD32(ctx->r16, 0);
L_004657B0:
    // 0x004657B0: lw          $v0, 0x1178($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X1178);
    // 0x004657B4: addu        $a1, $v0, $s1
    ctx->r5 = ADD32(ctx->r2, ctx->r17);
    // 0x004657B8: lbu         $v1, 0x11($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X11);
    // 0x004657BC: beq         $v1, $s7, L_004657DC
    if (ctx->r3 == ctx->r23) {
        // 0x004657C0: nop
    
            goto L_004657DC;
    }
    // 0x004657C0: nop

    // 0x004657C4: beq         $v1, $s6, L_004657DC
    if (ctx->r3 == ctx->r22) {
        // 0x004657C8: nop
    
            goto L_004657DC;
    }
    // 0x004657C8: nop

    // 0x004657CC: beq         $v1, $s5, L_004657DC
    if (ctx->r3 == ctx->r21) {
        // 0x004657D0: nop
    
            goto L_004657DC;
    }
    // 0x004657D0: nop

    // 0x004657D4: bnel        $v1, $s4, L_004657E8
    if (ctx->r3 != ctx->r20) {
        // 0x004657D8: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_004657E8;
    }
    goto skip_0;
    // 0x004657D8: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    skip_0:
L_004657DC:
    // 0x004657DC: jal         0x00220BF0
    // 0x004657E0: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    func_00220BF0(rdram, ctx);
        goto after_1;
    // 0x004657E0: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    after_1:
    // 0x004657E4: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_004657E8:
    // 0x004657E8: slt         $v0, $s0, $s2
    ctx->r2 = SIGNED(ctx->r16) < SIGNED(ctx->r18) ? 1 : 0;
    // 0x004657EC: bne         $v0, $zero, L_004657B0
    if (ctx->r2 != 0) {
        // 0x004657F0: addiu       $s1, $s1, 0x14
        ctx->r17 = ADD32(ctx->r17, 0X14);
            goto L_004657B0;
    }
    // 0x004657F0: addiu       $s1, $s1, 0x14
    ctx->r17 = ADD32(ctx->r17, 0X14);
L_004657F4:
    // 0x004657F4: lw          $s2, 0x116C($s3)
    ctx->r18 = MEM_W(ctx->r19, 0X116C);
    // 0x004657F8: blez        $s2, L_00465858
    if (SIGNED(ctx->r18) <= 0) {
        // 0x004657FC: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_00465858;
    }
    // 0x004657FC: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x00465800: addiu       $s7, $zero, 0x1
    ctx->r23 = ADD32(0, 0X1);
    // 0x00465804: addiu       $s6, $zero, 0x4
    ctx->r22 = ADD32(0, 0X4);
    // 0x00465808: addiu       $s5, $zero, 0x2
    ctx->r21 = ADD32(0, 0X2);
    // 0x0046580C: addiu       $s4, $zero, 0xA
    ctx->r20 = ADD32(0, 0XA);
    // 0x00465810: addu        $s1, $s0, $zero
    ctx->r17 = ADD32(ctx->r16, 0);
L_00465814:
    // 0x00465814: lw          $v0, 0x117C($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X117C);
    // 0x00465818: addu        $a1, $v0, $s1
    ctx->r5 = ADD32(ctx->r2, ctx->r17);
    // 0x0046581C: lbu         $v1, 0x11($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X11);
    // 0x00465820: beq         $v1, $s7, L_00465840
    if (ctx->r3 == ctx->r23) {
        // 0x00465824: nop
    
            goto L_00465840;
    }
    // 0x00465824: nop

    // 0x00465828: beq         $v1, $s6, L_00465840
    if (ctx->r3 == ctx->r22) {
        // 0x0046582C: nop
    
            goto L_00465840;
    }
    // 0x0046582C: nop

    // 0x00465830: beq         $v1, $s5, L_00465840
    if (ctx->r3 == ctx->r21) {
        // 0x00465834: nop
    
            goto L_00465840;
    }
    // 0x00465834: nop

    // 0x00465838: bnel        $v1, $s4, L_0046584C
    if (ctx->r3 != ctx->r20) {
        // 0x0046583C: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_0046584C;
    }
    goto skip_1;
    // 0x0046583C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    skip_1:
L_00465840:
    // 0x00465840: jal         0x00220BF0
    // 0x00465844: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    func_00220BF0(rdram, ctx);
        goto after_2;
    // 0x00465844: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    after_2:
    // 0x00465848: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_0046584C:
    // 0x0046584C: slt         $v0, $s0, $s2
    ctx->r2 = SIGNED(ctx->r16) < SIGNED(ctx->r18) ? 1 : 0;
    // 0x00465850: bne         $v0, $zero, L_00465814
    if (ctx->r2 != 0) {
        // 0x00465854: addiu       $s1, $s1, 0x14
        ctx->r17 = ADD32(ctx->r17, 0X14);
            goto L_00465814;
    }
    // 0x00465854: addiu       $s1, $s1, 0x14
    ctx->r17 = ADD32(ctx->r17, 0X14);
L_00465858:
    // 0x00465858: jal         0x002842B4
    // 0x0046585C: nop

    func_002842B4(rdram, ctx);
        goto after_3;
    // 0x0046585C: nop

    after_3:
    // 0x00465860: lw          $ra, 0x30($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X30);
    // 0x00465864: lw          $s7, 0x2C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X2C);
    // 0x00465868: lw          $s6, 0x28($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X28);
    // 0x0046586C: lw          $s5, 0x24($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X24);
    // 0x00465870: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x00465874: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x00465878: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x0046587C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00465880: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00465884: jr          $ra
    // 0x00465888: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x00465888: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_00266B7C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00266B7C: lw          $a2, 0x154($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X154);
    // turok2: reconnected split function: a stray ELF symbol at 0x00266B80 ended
    // this function early, leaving it without its epilogue. On the
    // hardware execution simply continues into the next instruction.
    func_00266B80(rdram, ctx);
;}
RECOMP_FUNC void func_00255940(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00255940: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x00255944: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00255948: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x0025594C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00255950: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x00255954: sdc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X20, ctx->r29);
    // 0x00255958: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x0025595C: lui         $a2, 0x3E80
    ctx->r6 = S32(0X3E80 << 16);
    // 0x00255960: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x00255964: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x00255968: jal         0x002117DC
    // 0x0025596C: addiu       $a0, $s1, 0xAD0
    ctx->r4 = ADD32(ctx->r17, 0XAD0);
    func_002117DC(rdram, ctx);
        goto after_0;
    // 0x0025596C: addiu       $a0, $s1, 0xAD0
    ctx->r4 = ADD32(ctx->r17, 0XAD0);
    after_0:
    // 0x00255970: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x00255974: lui         $a2, 0x800B
    ctx->r6 = S32(0X800B << 16);
    // 0x00255978: addiu       $a2, $a2, -0x2190
    ctx->r6 = ADD32(ctx->r6, -0X2190);
    // 0x0025597C: jal         0x0024EF70
    // 0x00255980: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_0024EF70(rdram, ctx);
        goto after_1;
    // 0x00255980: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_1:
    // 0x00255984: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x00255988: lui         $a2, 0x800B
    ctx->r6 = S32(0X800B << 16);
    // 0x0025598C: addiu       $a2, $a2, -0x21D8
    ctx->r6 = ADD32(ctx->r6, -0X21D8);
    // 0x00255990: jal         0x0024F174
    // 0x00255994: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_0024F174(rdram, ctx);
        goto after_2;
    // 0x00255994: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_2:
    // 0x00255998: lwc1        $f0, 0x1C($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x0025599C: c.le.s      $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f0.fl <= ctx->f20.fl;
    // 0x002559A0: nop

    // 0x002559A4: bc1f        L_002559C8
    if (!c1cs) {
        // 0x002559A8: nop
    
            goto L_002559C8;
    }
    // 0x002559A8: nop

    // 0x002559AC: jal         0x002685F0
    // 0x002559B0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_002685F0(rdram, ctx);
        goto after_3;
    // 0x002559B0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x002559B4: beq         $v0, $zero, L_002559C8
    if (ctx->r2 == 0) {
        // 0x002559B8: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_002559C8;
    }
    // 0x002559B8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x002559BC: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x002559C0: jal         0x0024E5F0
    // 0x002559C4: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_0024E5F0(rdram, ctx);
        goto after_4;
    // 0x002559C4: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_4:
L_002559C8:
    // 0x002559C8: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x002559CC: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x002559D0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x002559D4: ldc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X20);
    // 0x002559D8: jr          $ra
    // 0x002559DC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x002559DC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_00277F6C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00277F6C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x00277F70: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x00277F74: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x00277F78: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x00277F7C: jal         0x0027B4EC
    // 0x00277F80: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    func_0027B4EC(rdram, ctx);
        goto after_0;
    // 0x00277F80: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    after_0:
    // 0x00277F84: addu        $s2, $v0, $zero
    ctx->r18 = ADD32(ctx->r2, 0);
    // 0x00277F88: beq         $s2, $zero, L_00278170
    if (ctx->r18 == 0) {
        // 0x00277F8C: lui         $a1, 0xE300
        ctx->r5 = S32(0XE300 << 16);
            goto L_00278170;
    }
    // 0x00277F8C: lui         $a1, 0xE300
    ctx->r5 = S32(0XE300 << 16);
    // 0x00277F90: ori         $a1, $a1, 0xA01
    ctx->r5 = ctx->r5 | 0XA01;
    // 0x00277F94: lui         $s0, 0x800E
    ctx->r16 = S32(0X800E << 16);
    // 0x00277F98: addiu       $s0, $s0, -0x71DC
    ctx->r16 = ADD32(ctx->r16, -0X71DC);
    // 0x00277F9C: addiu       $a0, $zero, 0x1A
    ctx->r4 = ADD32(0, 0X1A);
    // 0x00277FA0: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x00277FA4: lui         $s1, 0xE700
    ctx->r17 = S32(0XE700 << 16);
    // 0x00277FA8: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x00277FAC: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x00277FB0: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x00277FB4: sw          $s1, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r17;
    // 0x00277FB8: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x00277FBC: addiu       $v1, $v0, 0x8
    ctx->r3 = ADD32(ctx->r2, 0X8);
    // 0x00277FC0: sw          $v1, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r3;
    // 0x00277FC4: lui         $v1, 0x10
    ctx->r3 = S32(0X10 << 16);
    // 0x00277FC8: sw          $a1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r5;
    // 0x00277FCC: jal         0x00207A70
    // 0x00277FD0: sw          $v1, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r3;
    func_00207A70(rdram, ctx);
        goto after_1;
    // 0x00277FD0: sw          $v1, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r3;
    after_1:
    // 0x00277FD4: jal         0x00207FEC
    // 0x00277FD8: addiu       $a0, $zero, 0x15
    ctx->r4 = ADD32(0, 0X15);
    func_00207FEC(rdram, ctx);
        goto after_2;
    // 0x00277FD8: addiu       $a0, $zero, 0x15
    ctx->r4 = ADD32(0, 0X15);
    after_2:
    // 0x00277FDC: lui         $a2, 0xD700
    ctx->r6 = S32(0XD700 << 16);
    // 0x00277FE0: ori         $a2, $a2, 0x2
    ctx->r6 = ctx->r6 | 0X2;
    // 0x00277FE4: lui         $a1, 0x8000
    ctx->r5 = S32(0X8000 << 16);
    // 0x00277FE8: ori         $a1, $a1, 0x8000
    ctx->r5 = ctx->r5 | 0X8000;
    // 0x00277FEC: lui         $a3, 0xE300
    ctx->r7 = S32(0XE300 << 16);
    // 0x00277FF0: ori         $a3, $a3, 0x1001
    ctx->r7 = ctx->r7 | 0X1001;
    // 0x00277FF4: lui         $t0, 0xE300
    ctx->r8 = S32(0XE300 << 16);
    // 0x00277FF8: ori         $t0, $t0, 0xC00
    ctx->r8 = ctx->r8 | 0XC00;
    // 0x00277FFC: lui         $t1, 0xE300
    ctx->r9 = S32(0XE300 << 16);
    // 0x00278000: ori         $t1, $t1, 0x1201
    ctx->r9 = ctx->r9 | 0X1201;
    // 0x00278004: lui         $t2, 0x708
    ctx->r10 = S32(0X708 << 16);
    // 0x00278008: ori         $t2, $t2, 0xF800
    ctx->r10 = ctx->r10 | 0XF800;
    // 0x0027800C: lui         $t3, 0xF580
    ctx->r11 = S32(0XF580 << 16);
    // 0x00278010: ori         $t3, $t3, 0x400
    ctx->r11 = ctx->r11 | 0X400;
    // 0x00278014: lui         $t4, 0x5
    ctx->r12 = S32(0X5 << 16);
    // 0x00278018: ori         $t4, $t4, 0xC05C
    ctx->r12 = ctx->r12 | 0XC05C;
    // 0x0027801C: lui         $t5, 0x103
    ctx->r13 = S32(0X103 << 16);
    // 0x00278020: ori         $t5, $t5, 0xC03C
    ctx->r13 = ctx->r13 | 0XC03C;
    // 0x00278024: lw          $v1, 0x0($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X0);
    // 0x00278028: addiu       $a0, $zero, 0xC8
    ctx->r4 = ADD32(0, 0XC8);
    // 0x0027802C: lui         $at, 0x800F
    ctx->r1 = S32(0X800F << 16);
    // 0x00278030: sw          $zero, 0x56A8($at)
    MEM_W(0X56A8, ctx->r1) = 0;
    // 0x00278034: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
    // 0x00278038: addiu       $v1, $v1, 0x8
    ctx->r3 = ADD32(ctx->r3, 0X8);
    // 0x0027803C: sw          $v1, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r3;
    // 0x00278040: sw          $a2, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r6;
    // 0x00278044: sw          $a1, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r5;
    // 0x00278048: addiu       $v0, $v1, 0x8
    ctx->r2 = ADD32(ctx->r3, 0X8);
    // 0x0027804C: addiu       $a1, $v1, 0x10
    ctx->r5 = ADD32(ctx->r3, 0X10);
    // 0x00278050: addiu       $a2, $v1, 0x18
    ctx->r6 = ADD32(ctx->r3, 0X18);
    // 0x00278054: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x00278058: sw          $a3, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r7;
    // 0x0027805C: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x00278060: sw          $a1, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r5;
    // 0x00278064: sw          $t0, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r8;
    // 0x00278068: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x0027806C: addiu       $v0, $zero, 0x2000
    ctx->r2 = ADD32(0, 0X2000);
    // 0x00278070: sw          $a2, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r6;
    // 0x00278074: sw          $t1, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->r9;
    // 0x00278078: sw          $v0, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r2;
    // 0x0027807C: addiu       $a1, $v1, 0x20
    ctx->r5 = ADD32(ctx->r3, 0X20);
    // 0x00278080: lui         $v0, 0xFD90
    ctx->r2 = S32(0XFD90 << 16);
    // 0x00278084: addiu       $a3, $v1, 0x28
    ctx->r7 = ADD32(ctx->r3, 0X28);
    // 0x00278088: sw          $a1, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r5;
    // 0x0027808C: sw          $v0, 0x18($v1)
    MEM_W(0X18, ctx->r3) = ctx->r2;
    // 0x00278090: lui         $v0, 0xF590
    ctx->r2 = S32(0XF590 << 16);
    // 0x00278094: sw          $s2, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r18;
    // 0x00278098: sw          $a3, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r7;
    // 0x0027809C: sw          $v0, 0x20($v1)
    MEM_W(0X20, ctx->r3) = ctx->r2;
    // 0x002780A0: lui         $v0, 0x700
    ctx->r2 = S32(0X700 << 16);
    // 0x002780A4: addiu       $a2, $v1, 0x30
    ctx->r6 = ADD32(ctx->r3, 0X30);
    // 0x002780A8: sw          $v0, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r2;
    // 0x002780AC: lui         $v0, 0xE600
    ctx->r2 = S32(0XE600 << 16);
    // 0x002780B0: addiu       $a1, $v1, 0x38
    ctx->r5 = ADD32(ctx->r3, 0X38);
    // 0x002780B4: sw          $a2, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r6;
    // 0x002780B8: sw          $v0, 0x28($v1)
    MEM_W(0X28, ctx->r3) = ctx->r2;
    // 0x002780BC: lui         $v0, 0xF300
    ctx->r2 = S32(0XF300 << 16);
    // 0x002780C0: sw          $zero, 0x4($a3)
    MEM_W(0X4, ctx->r7) = 0;
    // 0x002780C4: sw          $a1, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r5;
    // 0x002780C8: sw          $v0, 0x30($v1)
    MEM_W(0X30, ctx->r3) = ctx->r2;
    // 0x002780CC: addiu       $v0, $v1, 0x40
    ctx->r2 = ADD32(ctx->r3, 0X40);
    // 0x002780D0: sw          $t2, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r10;
    // 0x002780D4: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x002780D8: sw          $s1, 0x38($v1)
    MEM_W(0X38, ctx->r3) = ctx->r17;
    // 0x002780DC: sw          $zero, 0x4($a1)
    MEM_W(0X4, ctx->r5) = 0;
    // 0x002780E0: addiu       $a1, $v1, 0x48
    ctx->r5 = ADD32(ctx->r3, 0X48);
    // 0x002780E4: addiu       $a2, $v1, 0x50
    ctx->r6 = ADD32(ctx->r3, 0X50);
    // 0x002780E8: lui         $a3, 0xF200
    ctx->r7 = S32(0XF200 << 16);
    // 0x002780EC: sw          $a1, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r5;
    // 0x002780F0: sw          $t3, 0x40($v1)
    MEM_W(0X40, ctx->r3) = ctx->r11;
    // 0x002780F4: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x002780F8: sw          $a2, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r6;
    // 0x002780FC: sw          $a3, 0x48($v1)
    MEM_W(0X48, ctx->r3) = ctx->r7;
    // 0x00278100: sw          $t4, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r12;
    // 0x00278104: addiu       $a1, $v1, 0x58
    ctx->r5 = ADD32(ctx->r3, 0X58);
    // 0x00278108: lui         $v0, 0xF580
    ctx->r2 = S32(0XF580 << 16);
    // 0x0027810C: sw          $a1, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r5;
    // 0x00278110: sw          $v0, 0x50($v1)
    MEM_W(0X50, ctx->r3) = ctx->r2;
    // 0x00278114: lui         $v0, 0x100
    ctx->r2 = S32(0X100 << 16);
    // 0x00278118: sw          $v0, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r2;
    // 0x0027811C: addiu       $v0, $v1, 0x60
    ctx->r2 = ADD32(ctx->r3, 0X60);
    // 0x00278120: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x00278124: addiu       $v0, $zero, 0x47
    ctx->r2 = ADD32(0, 0X47);
    // 0x00278128: sw          $a3, 0x58($v1)
    MEM_W(0X58, ctx->r3) = ctx->r7;
    // 0x0027812C: sw          $t5, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r13;
    // 0x00278130: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x00278134: addiu       $v0, $zero, 0x2F
    ctx->r2 = ADD32(0, 0X2F);
    // 0x00278138: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x0027813C: addiu       $a2, $zero, 0x8A
    ctx->r6 = ADD32(0, 0X8A);
    // 0x00278140: addiu       $a3, $zero, 0x56
    ctx->r7 = ADD32(0, 0X56);
    // 0x00278144: jal         0x0027B094
    // 0x00278148: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    func_0027B094(rdram, ctx);
        goto after_3;
    // 0x00278148: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    after_3:
    // 0x0027814C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00278150: lwc1        $f12, -0x7D5C($at)
    ctx->f12.u32l = MEM_W(ctx->r1, -0X7D5C);
    // 0x00278154: jal         0x0027B0C0
    // 0x00278158: mov.s       $f14, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    ctx->f14.fl = ctx->f12.fl;
    func_0027B0C0(rdram, ctx);
        goto after_4;
    // 0x00278158: mov.s       $f14, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    ctx->f14.fl = ctx->f12.fl;
    after_4:
    // 0x0027815C: lui         $v1, 0x8011
    ctx->r3 = S32(0X8011 << 16);
    // 0x00278160: addiu       $v1, $v1, 0x1B0
    ctx->r3 = ADD32(ctx->r3, 0X1B0);
    // 0x00278164: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x00278168: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x0027816C: sw          $v0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r2;
L_00278170:
    // 0x00278170: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x00278174: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x00278178: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x0027817C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x00278180: jr          $ra
    // 0x00278184: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x00278184: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_00404C44(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00404C44: mtc1        $a2, $f2
    ctx->f2.u32l = ctx->r6;
    // 0x00404C48: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x00404C4C: lwc1        $f1, -0x608($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, -0X608);
    // 0x00404C50: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x00404C54: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00404C58: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00404C5C: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x00404C60: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x00404C64: addu        $s2, $a1, $zero
    ctx->r18 = ADD32(ctx->r5, 0);
    // 0x00404C68: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x00404C6C: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x00404C70: nop

    // 0x00404C74: bc1t        L_00404FC4
    if (c1cs) {
        // 0x00404C78: sw          $s0, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r16;
            goto L_00404FC4;
    }
    // 0x00404C78: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00404C7C: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x00404C80: lw          $v1, -0x5FC($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X5FC);
    // 0x00404C84: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x00404C88: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x00404C8C: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x00404C90: lw          $v1, -0x604($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X604);
    // 0x00404C94: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x00404C98: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x00404C9C: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x00404CA0: addiu       $v1, $v0, -0x2
    ctx->r3 = ADD32(ctx->r2, -0X2);
    // 0x00404CA4: sltiu       $v0, $v1, 0x6
    ctx->r2 = ctx->r3 < 0X6 ? 1 : 0;
    // 0x00404CA8: beq         $v0, $zero, L_00404FC4
    if (ctx->r2 == 0) {
        // 0x00404CAC: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_00404FC4;
    }
    // 0x00404CAC: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x00404CB0: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00404CB4: addu        $at, $at, $v0
    gpr jr_addend_00404CBC = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x00404CB8: lw          $v0, 0x3E8($at)
    ctx->r2 = ADD32(ctx->r1, 0X3E8);
    // 0x00404CBC: jr          $v0
    // 0x00404CC0: nop

    switch (jr_addend_00404CBC >> 2) {
        case 0: goto L_00404CC4; break;
        case 1: goto L_00404DE0; break;
        case 2: goto L_00404FC4; break;
        case 3: goto L_00404FC4; break;
        case 4: goto L_00404E94; break;
        case 5: goto L_00404F28; break;
        default: switch_error(__func__, 0x00404CBC, 0x800C03E8);
    }
    // 0x00404CC0: nop

L_00404CC4:
    // 0x00404CC4: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x00404CC8: lw          $v1, -0x5FC($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X5FC);
    // 0x00404CCC: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x00404CD0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x00404CD4: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x00404CD8: lw          $v1, -0x604($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X604);
    // 0x00404CDC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x00404CE0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x00404CE4: lw          $v1, 0x4($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X4);
    // 0x00404CE8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00404CEC: bne         $v1, $v0, L_00404D0C
    if (ctx->r3 != ctx->r2) {
        // 0x00404CF0: nop
    
            goto L_00404D0C;
    }
    // 0x00404CF0: nop

    // 0x00404CF4: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00404CF8: lwc1        $f0, 0x400($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X400);
    // 0x00404CFC: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x00404D00: addiu       $v0, $v0, -0x9E4
    ctx->r2 = ADD32(ctx->r2, -0X9E4);
    // 0x00404D04: sw          $zero, -0x4($v0)
    MEM_W(-0X4, ctx->r2) = 0;
    // 0x00404D08: swc1        $f0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f0.u32l;
L_00404D0C:
    // 0x00404D0C: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x00404D10: lw          $v1, -0x5FC($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X5FC);
    // 0x00404D14: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x00404D18: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x00404D1C: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x00404D20: lw          $v1, -0x604($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X604);
    // 0x00404D24: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x00404D28: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x00404D2C: lw          $v1, 0x4($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X4);
    // 0x00404D30: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x00404D34: bne         $v1, $v0, L_00404D74
    if (ctx->r3 != ctx->r2) {
        // 0x00404D38: nop
    
            goto L_00404D74;
    }
    // 0x00404D38: nop

    // 0x00404D3C: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x00404D40: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00404D44: lwc1        $f14, 0x404($at)
    ctx->f14.u32l = MEM_W(ctx->r1, 0X404);
    // 0x00404D48: jal         0x002119FC
    // 0x00404D4C: nop

    func_002119FC(rdram, ctx);
        goto after_0;
    // 0x00404D4C: nop

    after_0:
    // 0x00404D50: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00404D54: lwc1        $f12, 0x408($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X408);
    // 0x00404D58: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00404D5C: lwc1        $f14, 0x40C($at)
    ctx->f14.u32l = MEM_W(ctx->r1, 0X40C);
    // 0x00404D60: lui         $s0, 0x8013
    ctx->r16 = S32(0X8013 << 16);
    // 0x00404D64: addiu       $s0, $s0, -0x9E8
    ctx->r16 = ADD32(ctx->r16, -0X9E8);
    // 0x00404D68: jal         0x002119FC
    // 0x00404D6C: swc1        $f0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f0.u32l;
    func_002119FC(rdram, ctx);
        goto after_1;
    // 0x00404D6C: swc1        $f0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f0.u32l;
    after_1:
    // 0x00404D70: swc1        $f0, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f0.u32l;
L_00404D74:
    // 0x00404D74: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x00404D78: lw          $v1, -0x5FC($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X5FC);
    // 0x00404D7C: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x00404D80: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x00404D84: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x00404D88: lw          $v1, -0x604($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X604);
    // 0x00404D8C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x00404D90: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x00404D94: lw          $v1, 0x4($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X4);
    // 0x00404D98: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x00404D9C: bne         $v1, $v0, L_00404DC8
    if (ctx->r3 != ctx->r2) {
        // 0x00404DA0: addiu       $v0, $zero, 0x9
        ctx->r2 = ADD32(0, 0X9);
            goto L_00404DC8;
    }
    // 0x00404DA0: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
    // 0x00404DA4: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00404DA8: lwc1        $f0, 0x410($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X410);
    // 0x00404DAC: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00404DB0: lwc1        $f1, 0x414($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X414);
    // 0x00404DB4: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x00404DB8: addiu       $v0, $v0, -0x9E4
    ctx->r2 = ADD32(ctx->r2, -0X9E4);
    // 0x00404DBC: swc1        $f0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f0.u32l;
    // 0x00404DC0: swc1        $f1, -0x4($v0)
    MEM_W(-0X4, ctx->r2) = ctx->f_odd[(1 - 1) * 2];
    // 0x00404DC4: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
L_00404DC8:
    // 0x00404DC8: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x00404DCC: sw          $v0, -0x624($at)
    MEM_W(-0X624, ctx->r1) = ctx->r2;
    // 0x00404DD0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x00404DD4: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x00404DD8: j           L_00404FB4
    // 0x00404DDC: addiu       $a2, $zero, 0x12
    ctx->r6 = ADD32(0, 0X12);
        goto L_00404FB4;
    // 0x00404DDC: addiu       $a2, $zero, 0x12
    ctx->r6 = ADD32(0, 0X12);
L_00404DE0:
    // 0x00404DE0: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x00404DE4: lw          $v1, -0x5FC($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X5FC);
    // 0x00404DE8: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x00404DEC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x00404DF0: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x00404DF4: lw          $v1, -0x604($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X604);
    // 0x00404DF8: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x00404DFC: addu        $v1, $v0, $v1
    ctx->r3 = ADD32(ctx->r2, ctx->r3);
    // 0x00404E00: lw          $v0, 0x4($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X4);
    // 0x00404E04: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00404E08: lwc1        $f1, 0x418($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X418);
    // 0x00404E0C: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x00404E10: lui         $at, 0x43
    ctx->r1 = S32(0X43 << 16);
    // 0x00404E14: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x00404E18: lwc1        $f0, 0xF14($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0XF14);
    // 0x00404E1C: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00404E20: c.le.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl <= ctx->f2.fl;
    // 0x00404E24: nop

    // 0x00404E28: bc1fl       L_00404FC8
    if (!c1cs) {
        // 0x00404E2C: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_00404FC8;
    }
    goto skip_0;
    // 0x00404E2C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    skip_0:
    // 0x00404E30: lui         $at, 0x43
    ctx->r1 = S32(0X43 << 16);
    // 0x00404E34: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x00404E38: lwc1        $f0, 0xF18($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0XF18);
    // 0x00404E3C: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00404E40: c.le.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl <= ctx->f0.fl;
    // 0x00404E44: nop

    // 0x00404E48: bc1f        L_00404FC4
    if (!c1cs) {
        // 0x00404E4C: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_00404FC4;
    }
    // 0x00404E4C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x00404E50: lwc1        $f0, 0x8($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X8);
    // 0x00404E54: swc1        $f0, 0x1FC($s1)
    MEM_W(0X1FC, ctx->r17) = ctx->f0.u32l;
    // 0x00404E58: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x00404E5C: lw          $v1, -0x5FC($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X5FC);
    // 0x00404E60: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x00404E64: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x00404E68: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x00404E6C: lw          $v1, -0x604($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X604);
    // 0x00404E70: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x00404E74: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x00404E78: lw          $v0, 0x4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4);
    // 0x00404E7C: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x00404E80: lui         $at, 0x43
    ctx->r1 = S32(0X43 << 16);
    // 0x00404E84: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x00404E88: lw          $a2, 0xF10($at)
    ctx->r6 = MEM_W(ctx->r1, 0XF10);
    // 0x00404E8C: j           L_00404FB4
    // 0x00404E90: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
        goto L_00404FB4;
    // 0x00404E90: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
L_00404E94:
    // 0x00404E94: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x00404E98: lw          $v1, -0x9F8($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X9F8);
    // 0x00404E9C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00404EA0: bne         $v1, $v0, L_00404EC4
    if (ctx->r3 != ctx->r2) {
        // 0x00404EA4: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_00404EC4;
    }
    // 0x00404EA4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x00404EA8: lui         $v0, 0x43
    ctx->r2 = S32(0X43 << 16);
    // 0x00404EAC: addiu       $v0, $v0, 0x1094
    ctx->r2 = ADD32(ctx->r2, 0X1094);
    // 0x00404EB0: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x00404EB4: sw          $v0, -0x604($at)
    MEM_W(-0X604, ctx->r1) = ctx->r2;
    // 0x00404EB8: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x00404EBC: lw          $v1, -0x9F8($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X9F8);
    // 0x00404EC0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_00404EC4:
    // 0x00404EC4: bne         $v1, $v0, L_00404EDC
    if (ctx->r3 != ctx->r2) {
        // 0x00404EC8: nop
    
            goto L_00404EDC;
    }
    // 0x00404EC8: nop

    // 0x00404ECC: lui         $v0, 0x43
    ctx->r2 = S32(0X43 << 16);
    // 0x00404ED0: addiu       $v0, $v0, 0x1198
    ctx->r2 = ADD32(ctx->r2, 0X1198);
    // 0x00404ED4: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x00404ED8: sw          $v0, -0x604($at)
    MEM_W(-0X604, ctx->r1) = ctx->r2;
L_00404EDC:
    // 0x00404EDC: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x00404EE0: lw          $v1, -0x9F8($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X9F8);
    // 0x00404EE4: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x00404EE8: bne         $v1, $v0, L_00404F00
    if (ctx->r3 != ctx->r2) {
        // 0x00404EEC: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_00404F00;
    }
    // 0x00404EEC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x00404EF0: lui         $v0, 0x43
    ctx->r2 = S32(0X43 << 16);
    // 0x00404EF4: addiu       $v0, $v0, 0x1300
    ctx->r2 = ADD32(ctx->r2, 0X1300);
    // 0x00404EF8: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x00404EFC: sw          $v0, -0x604($at)
    MEM_W(-0X604, ctx->r1) = ctx->r2;
L_00404F00:
    // 0x00404F00: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x00404F04: addiu       $a2, $zero, 0x12
    ctx->r6 = ADD32(0, 0X12);
    // 0x00404F08: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x00404F0C: addiu       $v0, $v0, -0x600
    ctx->r2 = ADD32(ctx->r2, -0X600);
    // 0x00404F10: addiu       $v1, $zero, -0x1
    ctx->r3 = ADD32(0, -0X1);
    // 0x00404F14: sw          $v1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r3;
    // 0x00404F18: sw          $v1, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r3;
    // 0x00404F1C: addiu       $v1, $zero, 0x4
    ctx->r3 = ADD32(0, 0X4);
    // 0x00404F20: j           L_00404FB4
    // 0x00404F24: sw          $v1, -0x24($v0)
    MEM_W(-0X24, ctx->r2) = ctx->r3;
        goto L_00404FB4;
    // 0x00404F24: sw          $v1, -0x24($v0)
    MEM_W(-0X24, ctx->r2) = ctx->r3;
L_00404F28:
    // 0x00404F28: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x00404F2C: lw          $v1, -0x9F8($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X9F8);
    // 0x00404F30: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00404F34: bne         $v1, $v0, L_00404F4C
    if (ctx->r3 != ctx->r2) {
        // 0x00404F38: nop
    
            goto L_00404F4C;
    }
    // 0x00404F38: nop

    // 0x00404F3C: lui         $v0, 0x43
    ctx->r2 = S32(0X43 << 16);
    // 0x00404F40: addiu       $v0, $v0, 0x1008
    ctx->r2 = ADD32(ctx->r2, 0X1008);
    // 0x00404F44: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x00404F48: sw          $v0, -0x604($at)
    MEM_W(-0X604, ctx->r1) = ctx->r2;
L_00404F4C:
    // 0x00404F4C: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x00404F50: lw          $v0, -0x9F8($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X9F8);
    // 0x00404F54: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    // 0x00404F58: bne         $v0, $a3, L_00404F70
    if (ctx->r2 != ctx->r7) {
        // 0x00404F5C: nop
    
            goto L_00404F70;
    }
    // 0x00404F5C: nop

    // 0x00404F60: lui         $v0, 0x43
    ctx->r2 = S32(0X43 << 16);
    // 0x00404F64: addiu       $v0, $v0, 0x10E4
    ctx->r2 = ADD32(ctx->r2, 0X10E4);
    // 0x00404F68: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x00404F6C: sw          $v0, -0x604($at)
    MEM_W(-0X604, ctx->r1) = ctx->r2;
L_00404F70:
    // 0x00404F70: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x00404F74: lw          $v1, -0x9F8($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X9F8);
    // 0x00404F78: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x00404F7C: bne         $v1, $v0, L_00404F94
    if (ctx->r3 != ctx->r2) {
        // 0x00404F80: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_00404F94;
    }
    // 0x00404F80: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x00404F84: lui         $v0, 0x43
    ctx->r2 = S32(0X43 << 16);
    // 0x00404F88: addiu       $v0, $v0, 0x1238
    ctx->r2 = ADD32(ctx->r2, 0X1238);
    // 0x00404F8C: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x00404F90: sw          $v0, -0x604($at)
    MEM_W(-0X604, ctx->r1) = ctx->r2;
L_00404F94:
    // 0x00404F94: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x00404F98: addiu       $a2, $zero, 0x18
    ctx->r6 = ADD32(0, 0X18);
    // 0x00404F9C: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x00404FA0: addiu       $v0, $v0, -0x600
    ctx->r2 = ADD32(ctx->r2, -0X600);
    // 0x00404FA4: addiu       $v1, $zero, -0x1
    ctx->r3 = ADD32(0, -0X1);
    // 0x00404FA8: sw          $v1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r3;
    // 0x00404FAC: sw          $v1, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r3;
    // 0x00404FB0: sw          $a3, -0x24($v0)
    MEM_W(-0X24, ctx->r2) = ctx->r7;
L_00404FB4:
    // 0x00404FB4: jal         0x00243414
    // 0x00404FB8: nop

    func_00243414(rdram, ctx);
        goto after_2;
    // 0x00404FB8: nop

    after_2:
    // 0x00404FBC: j           L_00404FC8
    // 0x00404FC0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_00404FC8;
    // 0x00404FC0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_00404FC4:
    // 0x00404FC4: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_00404FC8:
    // 0x00404FC8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x00404FCC: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x00404FD0: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00404FD4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00404FD8: jr          $ra
    // 0x00404FDC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00404FDC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_00408E40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00408E40: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00408E44: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x00408E48: addiu       $a0, $a0, 0x7078
    ctx->r4 = ADD32(ctx->r4, 0X7078);
    // 0x00408E4C: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x00408E50: jal         0x00225D0C
    // 0x00408E54: nop

    func_00225D0C(rdram, ctx);
        goto after_0;
    // 0x00408E54: nop

    after_0:
    // 0x00408E58: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x00408E5C: jr          $ra
    // 0x00408E60: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00408E60: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0029BB0C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0029BB0C: jal         0x0021034C
    // 0x0029BB10: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    func_0021034C(rdram, ctx);
        goto after_0;
    // 0x0029BB10: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    after_0:
    // 0x0029BB14: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0029BB18: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x0029BB1C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x0029BB20: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x0029BB24: jal         0x0029DFF0
    // 0x0029BB28: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    func_0029DFF0(rdram, ctx);
        goto after_1;
    // 0x0029BB28: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    after_1:
    // 0x0029BB2C: addu        $s2, $v0, $zero
    ctx->r18 = ADD32(ctx->r2, 0);
    // 0x0029BB30: lhu         $v1, 0x10($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X10);
    // 0x0029BB34: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0029BB38: beq         $v1, $v0, L_0029BB5C
    if (ctx->r3 == ctx->r2) {
        // 0x0029BB3C: addiu       $v0, $zero, 0x8
        ctx->r2 = ADD32(0, 0X8);
            goto L_0029BB5C;
    }
    // 0x0029BB3C: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x0029BB40: bne         $v1, $v0, L_0029BBBC
    if (ctx->r3 != ctx->r2) {
        // 0x0029BB44: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_0029BBBC;
    }
    // 0x0029BB44: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x0029BB48: sh          $v0, 0x10($s0)
    MEM_H(0X10, ctx->r16) = ctx->r2;
    // 0x0029BB4C: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x0029BB50: addiu       $a0, $a0, -0x76E8
    ctx->r4 = ADD32(ctx->r4, -0X76E8);
    // 0x0029BB54: j           L_0029BBB4
    // 0x0029BB58: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
        goto L_0029BBB4;
    // 0x0029BB58: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
L_0029BB5C:
    // 0x0029BB5C: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
    // 0x0029BB60: beql        $v0, $zero, L_0029BB7C
    if (ctx->r2 == 0) {
        // 0x0029BB64: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_0029BB7C;
    }
    goto skip_0;
    // 0x0029BB64: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x0029BB68: lui         $s1, 0x800C
    ctx->r17 = S32(0X800C << 16);
    // 0x0029BB6C: addiu       $s1, $s1, -0x76E8
    ctx->r17 = ADD32(ctx->r17, -0X76E8);
    // 0x0029BB70: bne         $v0, $s1, L_0029BB90
    if (ctx->r2 != ctx->r17) {
        // 0x0029BB74: addu        $a1, $s0, $zero
        ctx->r5 = ADD32(ctx->r16, 0);
            goto L_0029BB90;
    }
    // 0x0029BB74: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x0029BB78: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_0029BB7C:
    // 0x0029BB7C: sh          $v0, 0x10($s0)
    MEM_H(0X10, ctx->r16) = ctx->r2;
    // 0x0029BB80: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x0029BB84: addiu       $a0, $a0, -0x76E8
    ctx->r4 = ADD32(ctx->r4, -0X76E8);
    // 0x0029BB88: j           L_0029BBB4
    // 0x0029BB8C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
        goto L_0029BBB4;
    // 0x0029BB8C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
L_0029BB90:
    // 0x0029BB90: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    // 0x0029BB94: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x0029BB98: jal         0x0029C878
    // 0x0029BB9C: sh          $v0, 0x10($s0)
    MEM_H(0X10, ctx->r16) = ctx->r2;
    func_0029C878(rdram, ctx);
        goto after_2;
    // 0x0029BB9C: sh          $v0, 0x10($s0)
    MEM_H(0X10, ctx->r16) = ctx->r2;
    after_2:
    // 0x0029BBA0: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    // 0x0029BBA4: jal         0x0029C8C8
    // 0x0029BBA8: nop

    func_0029C8C8(rdram, ctx);
        goto after_3;
    // 0x0029BBA8: nop

    after_3:
    // 0x0029BBAC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0029BBB0: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
L_0029BBB4:
    // 0x0029BBB4: jal         0x0029C878
    // 0x0029BBB8: nop

    func_0029C878(rdram, ctx);
        goto after_4;
    // 0x0029BBB8: nop

    after_4:
L_0029BBBC:
    // 0x0029BBBC: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x0029BBC0: lw          $a1, -0x76E0($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X76E0);
    // 0x0029BBC4: bne         $a1, $zero, L_0029BBDC
    if (ctx->r5 != 0) {
        // 0x0029BBC8: nop
    
            goto L_0029BBDC;
    }
    // 0x0029BBC8: nop

    // 0x0029BBCC: jal         0x0029C8E0
    // 0x0029BBD0: nop

    func_0029C8E0(rdram, ctx);
        goto after_5;
    // 0x0029BBD0: nop

    after_5:
    // 0x0029BBD4: j           L_0029BC04
    // 0x0029BBD8: nop

        goto L_0029BC04;
    // 0x0029BBD8: nop

L_0029BBDC:
    // 0x0029BBDC: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x0029BBE0: addiu       $a0, $a0, -0x76E8
    ctx->r4 = ADD32(ctx->r4, -0X76E8);
    // 0x0029BBE4: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x0029BBE8: lw          $v1, 0x4($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X4);
    // 0x0029BBEC: lw          $v0, 0x4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4);
    // 0x0029BBF0: slt         $v1, $v1, $v0
    ctx->r3 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x0029BBF4: beq         $v1, $zero, L_0029BC04
    if (ctx->r3 == 0) {
        // 0x0029BBF8: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_0029BC04;
    }
    // 0x0029BBF8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x0029BBFC: jal         0x0029C6DC
    // 0x0029BC00: sh          $v0, 0x10($a1)
    MEM_H(0X10, ctx->r5) = ctx->r2;
    func_0029C6DC(rdram, ctx);
        goto after_6;
    // 0x0029BC00: sh          $v0, 0x10($a1)
    MEM_H(0X10, ctx->r5) = ctx->r2;
    after_6:
L_0029BC04:
    // 0x0029BC04: jal         0x0029E010
    // 0x0029BC08: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_0029E010(rdram, ctx);
        goto after_7;
    // 0x0029BC08: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_7:
    // 0x0029BC0C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x0029BC10: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x0029BC14: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x0029BC18: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0029BC1C: jr          $ra
    // 0x0029BC20: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x0029BC20: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_0027BC68(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0027BC68: lui         $v0, 0x800F
    ctx->r2 = S32(0X800F << 16);
    // 0x0027BC6C: lw          $v0, 0x56B4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X56B4);
    // 0x0027BC70: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0027BC74: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x0027BC78: bne         $v0, $zero, L_0027BC90
    if (ctx->r2 != 0) {
        // 0x0027BC7C: sw          $s0, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r16;
            goto L_0027BC90;
    }
    // 0x0027BC7C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0027BC80: lui         $v0, 0x800F
    ctx->r2 = S32(0X800F << 16);
    // 0x0027BC84: lw          $v0, 0x56B8($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X56B8);
    // 0x0027BC88: beq         $v0, $zero, L_0027BC9C
    if (ctx->r2 == 0) {
        // 0x0027BC8C: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_0027BC9C;
    }
    // 0x0027BC8C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_0027BC90:
    // 0x0027BC90: lui         $v0, 0x800F
    ctx->r2 = S32(0X800F << 16);
    // 0x0027BC94: addiu       $v0, $v0, 0x56B0
    ctx->r2 = ADD32(ctx->r2, 0X56B0);
    // 0x0027BC98: lw          $v0, 0x1B4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1B4);
L_0027BC9C:
    // 0x0027BC9C: beq         $v0, $zero, L_0027BCFC
    if (ctx->r2 == 0) {
        // 0x0027BCA0: nop
    
            goto L_0027BCFC;
    }
    // 0x0027BCA0: nop

    // 0x0027BCA4: jal         0x00206068
    // 0x0027BCA8: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    func_00206068(rdram, ctx);
        goto after_0;
    // 0x0027BCA8: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    after_0:
    // 0x0027BCAC: lui         $v0, 0x800F
    ctx->r2 = S32(0X800F << 16);
    // 0x0027BCB0: lw          $v0, 0x56BC($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X56BC);
    // 0x0027BCB4: lui         $s0, 0x800F
    ctx->r16 = S32(0X800F << 16);
    // 0x0027BCB8: addiu       $s0, $s0, 0x56B0
    ctx->r16 = ADD32(ctx->r16, 0X56B0);
    // 0x0027BCBC: beq         $v0, $zero, L_0027BCD4
    if (ctx->r2 == 0) {
        // 0x0027BCC0: addiu       $a0, $s0, 0x194
        ctx->r4 = ADD32(ctx->r16, 0X194);
            goto L_0027BCD4;
    }
    // 0x0027BCC0: addiu       $a0, $s0, 0x194
    ctx->r4 = ADD32(ctx->r16, 0X194);
    // 0x0027BCC4: lui         $v0, 0x800F
    ctx->r2 = S32(0X800F << 16);
    // 0x0027BCC8: lw          $v0, 0x5858($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X5858);
    // 0x0027BCCC: j           L_0027BCE8
    // 0x0027BCD0: nop

        goto L_0027BCE8;
    // 0x0027BCD0: nop

L_0027BCD4:
    // 0x0027BCD4: lw          $v0, 0xC($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XC);
    // 0x0027BCD8: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
        turok2_patch_scale_overlay_wait(rdram, ctx);

    // 0x0027BCDC: bgtz        $v0, L_0027BCF0
    if (SIGNED(ctx->r2) > 0) {
        // 0x0027BCE0: sw          $v0, 0xC($a0)
        MEM_W(0XC, ctx->r4) = ctx->r2;
            goto L_0027BCF0;
    }
    // 0x0027BCE0: sw          $v0, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->r2;
    // 0x0027BCE4: lw          $v0, 0x14($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X14);
L_0027BCE8:
    // 0x0027BCE8: jalr        $v0
    // 0x0027BCEC: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_1;
    // 0x0027BCEC: nop

    after_1:
L_0027BCF0:
    // 0x0027BCF0: lw          $v0, 0x194($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X194);
    // 0x0027BCF4: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x0027BCF8: sw          $v0, -0x52F0($at)
    MEM_W(-0X52F0, ctx->r1) = ctx->r2;
L_0027BCFC:
    // 0x0027BCFC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x0027BD00: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0027BD04: jr          $ra
    // 0x0027BD08: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0027BD08: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0029E140(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
;}
RECOMP_FUNC void func_00400000(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00400000: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00400004: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x00400008: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x0040000C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00400010: beq         $a1, $zero, L_004001C0
    if (ctx->r5 == 0) {
        // 0x00400014: sw          $a0, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->r4;
            goto L_004001C0;
    }
    // 0x00400014: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x00400018: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x0040001C: addiu       $v0, $v0, -0x76B4
    ctx->r2 = ADD32(ctx->r2, -0X76B4);
    // 0x00400020: addiu       $a3, $sp, 0x18
    ctx->r7 = ADD32(ctx->r29, 0X18);
    // 0x00400024: sltu        $v0, $a3, $v0
    ctx->r2 = ctx->r7 < ctx->r2 ? 1 : 0;
    // 0x00400028: bne         $v0, $zero, L_004001C0
    if (ctx->r2 != 0) {
        // 0x0040002C: nop
    
            goto L_004001C0;
    }
    // 0x0040002C: nop

    // 0x00400030: lhu         $v0, 0x2($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X2);
    // 0x00400034: andi        $v0, $v0, 0x400
    ctx->r2 = ctx->r2 & 0X400;
    // 0x00400038: bne         $v0, $zero, L_00400060
    if (ctx->r2 != 0) {
        // 0x0040003C: nop
    
            goto L_00400060;
    }
    // 0x0040003C: nop

    // 0x00400040: lui         $s0, 0x800F
    ctx->r16 = S32(0X800F << 16);
    // 0x00400044: addiu       $s0, $s0, 0x7078
    ctx->r16 = ADD32(ctx->r16, 0X7078);
    // 0x00400048: jal         0x002242B4
    // 0x0040004C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_002242B4(rdram, ctx);
        goto after_0;
    // 0x0040004C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x00400050: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00400054: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x00400058: jal         0x0022441C
    // 0x0040005C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_0022441C(rdram, ctx);
        goto after_1;
    // 0x0040005C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_1:
L_00400060:
    // 0x00400060: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x00400064: lhu         $v0, 0x2($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X2);
    // 0x00400068: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x0040006C: addiu       $v1, $v1, -0x554C
    ctx->r3 = ADD32(ctx->r3, -0X554C);
    // 0x00400070: ori         $v0, $v0, 0x8400
    ctx->r2 = ctx->r2 | 0X8400;
    // 0x00400074: sh          $v0, 0x2($a0)
    MEM_H(0X2, ctx->r4) = ctx->r2;
    // 0x00400078: lw          $v0, 0x4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X4);
    // 0x0040007C: lwc1        $f3, 0x0($v1)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r3, 0X0);
    // 0x00400080: lwc1        $f1, 0x0($v0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r2, 0X0);
    // 0x00400084: sub.s       $f1, $f1, $f3
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f1.fl = ctx->f1.fl - ctx->f3.fl;
    // 0x00400088: mul.s       $f1, $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f1.fl);
    // 0x0040008C: lwc1        $f2, 0x8($v1)
    ctx->f2.u32l = MEM_W(ctx->r3, 0X8);
    // 0x00400090: lwc1        $f0, 0x8($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X8);
    // 0x00400094: sub.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f2.fl;
    // 0x00400098: mul.s       $f0, $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x0040009C: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x004000A0: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x004000A4: lwc1        $f4, 0x210($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X210);
    // 0x004000A8: c.lt.s      $f1, $f4
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f1.fl < ctx->f4.fl;
    // 0x004000AC: nop

    // 0x004000B0: bc1t        L_00400118
    if (c1cs) {
        // 0x004000B4: nop
    
            goto L_00400118;
    }
    // 0x004000B4: nop

    // 0x004000B8: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x004000BC: lwc1        $f1, 0x0($v0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r2, 0X0);
    // 0x004000C0: sub.s       $f1, $f1, $f3
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f1.fl = ctx->f1.fl - ctx->f3.fl;
    // 0x004000C4: mul.s       $f1, $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f1.fl);
    // 0x004000C8: lwc1        $f0, 0x8($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X8);
    // 0x004000CC: sub.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f2.fl;
    // 0x004000D0: mul.s       $f0, $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x004000D4: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x004000D8: c.lt.s      $f1, $f4
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f1.fl < ctx->f4.fl;
    // 0x004000DC: nop

    // 0x004000E0: bc1t        L_00400118
    if (c1cs) {
        // 0x004000E4: nop
    
            goto L_00400118;
    }
    // 0x004000E4: nop

    // 0x004000E8: lw          $v0, 0xC($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XC);
    // 0x004000EC: lwc1        $f1, 0x0($v0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r2, 0X0);
    // 0x004000F0: sub.s       $f1, $f1, $f3
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f1.fl = ctx->f1.fl - ctx->f3.fl;
    // 0x004000F4: mul.s       $f1, $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f1.fl);
    // 0x004000F8: lwc1        $f0, 0x8($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X8);
    // 0x004000FC: sub.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f2.fl;
    // 0x00400100: mul.s       $f0, $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x00400104: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x00400108: c.lt.s      $f1, $f4
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f1.fl < ctx->f4.fl;
    // 0x0040010C: nop

    // 0x00400110: bc1f        L_004001C0
    if (!c1cs) {
        // 0x00400114: nop
    
            goto L_004001C0;
    }
    // 0x00400114: nop

L_00400118:
    // 0x00400118: lw          $v0, 0x18($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X18);
    // 0x0040011C: lw          $a0, 0x10($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X10);
    // 0x00400120: beq         $a0, $zero, L_00400154
    if (ctx->r4 == 0) {
        // 0x00400124: nop
    
            goto L_00400154;
    }
    // 0x00400124: nop

    // 0x00400128: lhu         $v0, 0x2($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X2);
    // 0x0040012C: andi        $v0, $v0, 0x8000
    ctx->r2 = ctx->r2 & 0X8000;
    // 0x00400130: bne         $v0, $zero, L_00400150
    if (ctx->r2 != 0) {
        // 0x00400134: addiu       $v1, $zero, 0x2
        ctx->r3 = ADD32(0, 0X2);
            goto L_00400150;
    }
    // 0x00400134: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
    // 0x00400138: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x0040013C: andi        $v0, $v0, 0x6
    ctx->r2 = ctx->r2 & 0X6;
    // 0x00400140: beq         $v0, $v1, L_00400150
    if (ctx->r2 == ctx->r3) {
        // 0x00400144: nop
    
            goto L_00400150;
    }
    // 0x00400144: nop

    // 0x00400148: jal         0x00400000
    // 0x0040014C: nop

    func_00400000(rdram, ctx);
        goto after_2;
    // 0x0040014C: nop

    after_2:
L_00400150:
    // 0x00400150: lw          $v0, 0x18($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X18);
L_00400154:
    // 0x00400154: lw          $a0, 0x14($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X14);
    // 0x00400158: beq         $a0, $zero, L_00400188
    if (ctx->r4 == 0) {
        // 0x0040015C: nop
    
            goto L_00400188;
    }
    // 0x0040015C: nop

    // 0x00400160: lhu         $v0, 0x2($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X2);
    // 0x00400164: andi        $v0, $v0, 0x8000
    ctx->r2 = ctx->r2 & 0X8000;
    // 0x00400168: bne         $v0, $zero, L_00400188
    if (ctx->r2 != 0) {
        // 0x0040016C: addiu       $v1, $zero, 0x2
        ctx->r3 = ADD32(0, 0X2);
            goto L_00400188;
    }
    // 0x0040016C: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
    // 0x00400170: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x00400174: andi        $v0, $v0, 0x6
    ctx->r2 = ctx->r2 & 0X6;
    // 0x00400178: beq         $v0, $v1, L_00400188
    if (ctx->r2 == ctx->r3) {
        // 0x0040017C: nop
    
            goto L_00400188;
    }
    // 0x0040017C: nop

    // 0x00400180: jal         0x00400000
    // 0x00400184: nop

    func_00400000(rdram, ctx);
        goto after_3;
    // 0x00400184: nop

    after_3:
L_00400188:
    // 0x00400188: lw          $v0, 0x18($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X18);
    // 0x0040018C: lw          $a0, 0x18($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X18);
    // 0x00400190: beq         $a0, $zero, L_004001C0
    if (ctx->r4 == 0) {
        // 0x00400194: nop
    
            goto L_004001C0;
    }
    // 0x00400194: nop

    // 0x00400198: lhu         $v0, 0x2($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X2);
    // 0x0040019C: andi        $v0, $v0, 0x8000
    ctx->r2 = ctx->r2 & 0X8000;
    // 0x004001A0: bne         $v0, $zero, L_004001C0
    if (ctx->r2 != 0) {
        // 0x004001A4: addiu       $v1, $zero, 0x2
        ctx->r3 = ADD32(0, 0X2);
            goto L_004001C0;
    }
    // 0x004001A4: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
    // 0x004001A8: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x004001AC: andi        $v0, $v0, 0x6
    ctx->r2 = ctx->r2 & 0X6;
    // 0x004001B0: beq         $v0, $v1, L_004001C0
    if (ctx->r2 == ctx->r3) {
        // 0x004001B4: nop
    
            goto L_004001C0;
    }
    // 0x004001B4: nop

    // 0x004001B8: jal         0x00400000
    // 0x004001BC: nop

    func_00400000(rdram, ctx);
        goto after_4;
    // 0x004001BC: nop

    after_4:
L_004001C0:
    // 0x004001C0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x004001C4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x004001C8: jr          $ra
    // 0x004001CC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x004001CC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_002261A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002261A8: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x002261AC: sdc1        $f21, 0x40($sp)
    CHECK_FR(ctx, 21);
    SD(ctx->f21.u64, 0X40, ctx->r29);
    // 0x002261B0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002261B4: lwc1        $f21, 0x6010($at)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r1, 0X6010);
    // 0x002261B8: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x002261BC: addu        $s3, $a2, $zero
    ctx->r19 = ADD32(ctx->r6, 0);
    // 0x002261C0: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x002261C4: sw          $ra, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r31;
    // 0x002261C8: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x002261CC: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x002261D0: sdc1        $f22, 0x48($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X48, ctx->r29);
    // 0x002261D4: sdc1        $f20, 0x38($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X38, ctx->r29);
    // 0x002261D8: lw          $a0, 0x68($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X68);
    // 0x002261DC: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x002261E0: jal         0x002017D4
    // 0x002261E4: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    func_002017D4(rdram, ctx);
        goto after_0;
    // 0x002261E4: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    after_0:
    // 0x002261E8: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x002261EC: jal         0x002017D4
    // 0x002261F0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_002017D4(rdram, ctx);
        goto after_1;
    // 0x002261F0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_1:
    // 0x002261F4: lw          $s2, 0x4($v0)
    ctx->r18 = MEM_W(ctx->r2, 0X4);
    // 0x002261F8: blez        $s2, L_0022626C
    if (SIGNED(ctx->r18) <= 0) {
        // 0x002261FC: addiu       $s1, $v0, 0x8
        ctx->r17 = ADD32(ctx->r2, 0X8);
            goto L_0022626C;
    }
    // 0x002261FC: addiu       $s1, $v0, 0x8
    ctx->r17 = ADD32(ctx->r2, 0X8);
    // 0x00226200: mov.s       $f22, $f20
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 20);
    ctx->f22.fl = ctx->f20.fl;
L_00226204:
    // 0x00226204: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x00226208: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    // 0x0022620C: jal         0x0020EF2C
    // 0x00226210: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    func_0020EF2C(rdram, ctx);
        goto after_2;
    // 0x00226210: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    after_2:
    // 0x00226214: lwc1        $f0, 0x10($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X10);
    // 0x00226218: mul.s       $f0, $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x0022621C: lwc1        $f1, 0x14($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X14);
    // 0x00226220: mul.s       $f1, $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f1.fl);
    // 0x00226224: lwc1        $f2, 0x18($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X18);
    // 0x00226228: mul.s       $f2, $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x0022622C: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x00226230: c.lt.s      $f21, $f22
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f21.fl < ctx->f22.fl;
    // 0x00226234: nop

    // 0x00226238: bc1t        L_00226250
    if (c1cs) {
        // 0x0022623C: add.s       $f0, $f0, $f2
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f2.fl;
            goto L_00226250;
    }
    // 0x0022623C: add.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f2.fl;
    // 0x00226240: c.lt.s      $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f0.fl < ctx->f20.fl;
    // 0x00226244: nop

    // 0x00226248: bc1fl       L_00226260
    if (!c1cs) {
        // 0x0022624C: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_00226260;
    }
    goto skip_0;
    // 0x0022624C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    skip_0:
L_00226250:
    // 0x00226250: mtc1        $s0, $f21
    ctx->f_odd[(21 - 1) * 2] = ctx->r16;
    // 0x00226254: cvt.s.w     $f21, $f21
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 21);
    ctx->f21.fl = CVT_S_W(ctx->f_odd[(21 - 1) * 2]);
    // 0x00226258: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x0022625C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_00226260:
    // 0x00226260: slt         $v0, $s0, $s2
    ctx->r2 = SIGNED(ctx->r16) < SIGNED(ctx->r18) ? 1 : 0;
    // 0x00226264: bne         $v0, $zero, L_00226204
    if (ctx->r2 != 0) {
        // 0x00226268: addiu       $s1, $s1, 0x1C
        ctx->r17 = ADD32(ctx->r17, 0X1C);
            goto L_00226204;
    }
    // 0x00226268: addiu       $s1, $s1, 0x1C
    ctx->r17 = ADD32(ctx->r17, 0X1C);
L_0022626C:
    // 0x0022626C: trunc.w.s   $f3, $f21
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 21);
    ctx->f_odd[(3 - 1) * 2] = TRUNC_W_S(ctx->f21.fl);
    // 0x00226270: mfc1        $v0, $f3
    ctx->r2 = (int32_t)ctx->f_odd[(3 - 1) * 2];
    // 0x00226274: lw          $ra, 0x30($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X30);
    // 0x00226278: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x0022627C: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x00226280: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x00226284: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x00226288: ldc1        $f22, 0x48($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X48);
    // 0x0022628C: ldc1        $f21, 0x40($sp)
    CHECK_FR(ctx, 21);
    ctx->f21.u64 = LD(ctx->r29, 0X40);
    // 0x00226290: ldc1        $f20, 0x38($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X38);
    // 0x00226294: jr          $ra
    // 0x00226298: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x00226298: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_0024BAC0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0024BAC0: slti        $v0, $v0, 0x1
    ctx->r2 = SIGNED(ctx->r2) < 0X1 ? 1 : 0;
    // 0x0024BAC4: jr          $ra
    // 0x0024BAC8: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    return;
    // 0x0024BAC8: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
;}
RECOMP_FUNC void func_0029BE6C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0029BE6C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x0029BE70: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x0029BE74: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x0029BE78: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x0029BE7C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x0029BE80: jal         0x0029DFF0
    // 0x0029BE84: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    func_0029DFF0(rdram, ctx);
        goto after_0;
    // 0x0029BE84: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_0:
    // 0x0029BE88: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x0029BE8C: lw          $v1, -0x76D0($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X76D0);
    // 0x0029BE90: lw          $a2, 0x0($v1)
    ctx->r6 = MEM_W(ctx->r3, 0X0);
    // 0x0029BE94: lw          $s0, 0x10($s2)
    ctx->r16 = MEM_W(ctx->r18, 0X10);
    // 0x0029BE98: lw          $s1, 0x14($s2)
    ctx->r17 = MEM_W(ctx->r18, 0X14);
    // 0x0029BE9C: beq         $a2, $v1, L_0029BEFC
    if (ctx->r6 == ctx->r3) {
        // 0x0029BEA0: addu        $a3, $v0, $zero
        ctx->r7 = ADD32(ctx->r2, 0);
            goto L_0029BEFC;
    }
    // 0x0029BEA0: addu        $a3, $v0, $zero
    ctx->r7 = ADD32(ctx->r2, 0);
    // 0x0029BEA4: j           L_0029BED4
    // 0x0029BEA8: nop

        goto L_0029BED4;
    // 0x0029BEA8: nop

L_0029BEAC:
    // 0x0029BEAC: lw          $v0, 0x10($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X10);
    // 0x0029BEB0: lw          $v1, 0x14($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X14);
    // 0x0029BEB4: lw          $a2, 0x0($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X0);
    // 0x0029BEB8: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x0029BEBC: lw          $a0, -0x76D0($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X76D0);
    // 0x0029BEC0: sltu        $a1, $s1, $v1
    ctx->r5 = ctx->r17 < ctx->r3 ? 1 : 0;
    // 0x0029BEC4: subu        $s1, $s1, $v1
    ctx->r17 = SUB32(ctx->r17, ctx->r3);
    // 0x0029BEC8: subu        $s0, $s0, $v0
    ctx->r16 = SUB32(ctx->r16, ctx->r2);
    // 0x0029BECC: beq         $a2, $a0, L_0029BEFC
    if (ctx->r6 == ctx->r4) {
        // 0x0029BED0: subu        $s0, $s0, $a1
        ctx->r16 = SUB32(ctx->r16, ctx->r5);
            goto L_0029BEFC;
    }
    // 0x0029BED0: subu        $s0, $s0, $a1
    ctx->r16 = SUB32(ctx->r16, ctx->r5);
L_0029BED4:
    // 0x0029BED4: lw          $v1, 0x10($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X10);
    // 0x0029BED8: sltu        $v0, $v1, $s0
    ctx->r2 = ctx->r3 < ctx->r16 ? 1 : 0;
    // 0x0029BEDC: bne         $v0, $zero, L_0029BEAC
    if (ctx->r2 != 0) {
        // 0x0029BEE0: nop
    
            goto L_0029BEAC;
    }
    // 0x0029BEE0: nop

    // 0x0029BEE4: bne         $s0, $v1, L_0029BEFC
    if (ctx->r16 != ctx->r3) {
        // 0x0029BEE8: nop
    
            goto L_0029BEFC;
    }
    // 0x0029BEE8: nop

    // 0x0029BEEC: lw          $v0, 0x14($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X14);
    // 0x0029BEF0: sltu        $v0, $v0, $s1
    ctx->r2 = ctx->r2 < ctx->r17 ? 1 : 0;
    // 0x0029BEF4: bne         $v0, $zero, L_0029BEAC
    if (ctx->r2 != 0) {
        // 0x0029BEF8: nop
    
            goto L_0029BEAC;
    }
    // 0x0029BEF8: nop

L_0029BEFC:
    // 0x0029BEFC: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x0029BF00: lw          $v0, -0x76D0($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X76D0);
    // 0x0029BF04: sw          $s0, 0x10($s2)
    MEM_W(0X10, ctx->r18) = ctx->r16;
    // 0x0029BF08: sw          $s1, 0x14($s2)
    MEM_W(0X14, ctx->r18) = ctx->r17;
    // 0x0029BF0C: beql        $a2, $v0, L_0029BF38
    if (ctx->r6 == ctx->r2) {
        // 0x0029BF10: sw          $a2, 0x0($s2)
        MEM_W(0X0, ctx->r18) = ctx->r6;
            goto L_0029BF38;
    }
    goto skip_0;
    // 0x0029BF10: sw          $a2, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r6;
    skip_0:
    // 0x0029BF14: lw          $v0, 0x10($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X10);
    // 0x0029BF18: lw          $v1, 0x14($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X14);
    // 0x0029BF1C: sltu        $a0, $v1, $s1
    ctx->r4 = ctx->r3 < ctx->r17 ? 1 : 0;
    // 0x0029BF20: subu        $v1, $v1, $s1
    ctx->r3 = SUB32(ctx->r3, ctx->r17);
    // 0x0029BF24: subu        $v0, $v0, $s0
    ctx->r2 = SUB32(ctx->r2, ctx->r16);
    // 0x0029BF28: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
    // 0x0029BF2C: sw          $v0, 0x10($a2)
    MEM_W(0X10, ctx->r6) = ctx->r2;
    // 0x0029BF30: sw          $v1, 0x14($a2)
    MEM_W(0X14, ctx->r6) = ctx->r3;
    // 0x0029BF34: sw          $a2, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r6;
L_0029BF38:
    // 0x0029BF38: lw          $v0, 0x4($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X4);
    // 0x0029BF3C: sw          $v0, 0x4($s2)
    MEM_W(0X4, ctx->r18) = ctx->r2;
    // 0x0029BF40: lw          $v0, 0x4($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X4);
    // 0x0029BF44: addu        $a0, $a3, $zero
    ctx->r4 = ADD32(ctx->r7, 0);
    // 0x0029BF48: sw          $s2, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r18;
    // 0x0029BF4C: jal         0x0029E010
    // 0x0029BF50: sw          $s2, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r18;
    func_0029E010(rdram, ctx);
        goto after_1;
    // 0x0029BF50: sw          $s2, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r18;
    after_1:
    // 0x0029BF54: addu        $v0, $s0, $zero
    ctx->r2 = ADD32(ctx->r16, 0);
    // 0x0029BF58: addu        $v1, $s1, $zero
    ctx->r3 = ADD32(ctx->r17, 0);
    // 0x0029BF5C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x0029BF60: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x0029BF64: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x0029BF68: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0029BF6C: jr          $ra
    // 0x0029BF70: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x0029BF70: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_00289DFC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00289DFC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00289E00: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00289E04: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x00289E08: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x00289E0C: lw          $v1, -0x4EF0($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X4EF0);
    // 0x00289E10: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x00289E14: bne         $v1, $v0, L_00289F18
    if (ctx->r3 != ctx->r2) {
        // 0x00289E18: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_00289F18;
    }
    // 0x00289E18: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x00289E1C: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x00289E20: addu        $at, $s0, $at
    ctx->r1 = ADD32(ctx->r16, ctx->r1);
    // 0x00289E24: lw          $v0, 0x3FF0($at)
    ctx->r2 = MEM_W(ctx->r1, 0X3FF0);
    // 0x00289E28: bne         $v0, $zero, L_00289F18
    if (ctx->r2 != 0) {
        // 0x00289E2C: nop
    
            goto L_00289F18;
    }
    // 0x00289E2C: nop

    // 0x00289E30: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x00289E34: addu        $at, $s0, $at
    ctx->r1 = ADD32(ctx->r16, ctx->r1);
    // 0x00289E38: lw          $v0, 0x3FDC($at)
    ctx->r2 = MEM_W(ctx->r1, 0X3FDC);
    // 0x00289E3C: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x00289E40: addu        $at, $s0, $at
    ctx->r1 = ADD32(ctx->r16, ctx->r1);
    // 0x00289E44: sw          $zero, 0x3FD0($at)
    MEM_W(0X3FD0, ctx->r1) = 0;
    // 0x00289E48: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x00289E4C: addu        $at, $s0, $at
    ctx->r1 = ADD32(ctx->r16, ctx->r1);
    // 0x00289E50: sw          $v0, 0x3FD8($at)
    MEM_W(0X3FD8, ctx->r1) = ctx->r2;
    // 0x00289E54: jal         0x00284080
    // 0x00289E58: nop

    func_00284080(rdram, ctx);
        goto after_0;
    // 0x00289E58: nop

    after_0:
    // 0x00289E5C: jal         0x00275904
    // 0x00289E60: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    func_00275904(rdram, ctx);
        goto after_1;
    // 0x00289E60: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    after_1:
    // 0x00289E64: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x00289E68: addu        $at, $s0, $at
    ctx->r1 = ADD32(ctx->r16, ctx->r1);
    // 0x00289E6C: lw          $v1, 0x3FDC($at)
    ctx->r3 = MEM_W(ctx->r1, 0X3FDC);
    // 0x00289E70: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    // 0x00289E74: beq         $v1, $a0, L_00289EBC
    if (ctx->r3 == ctx->r4) {
        // 0x00289E78: addiu       $v0, $zero, 0xC
        ctx->r2 = ADD32(0, 0XC);
            goto L_00289EBC;
    }
    // 0x00289E78: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
    // 0x00289E7C: beq         $v1, $v0, L_00289EBC
    if (ctx->r3 == ctx->r2) {
        // 0x00289E80: nop
    
            goto L_00289EBC;
    }
    // 0x00289E80: nop

    // 0x00289E84: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x00289E88: addu        $at, $s0, $at
    ctx->r1 = ADD32(ctx->r16, ctx->r1);
    // 0x00289E8C: lw          $v0, 0x3FD4($at)
    ctx->r2 = MEM_W(ctx->r1, 0X3FD4);
    // 0x00289E90: bne         $v0, $a0, L_00289EAC
    if (ctx->r2 != ctx->r4) {
        // 0x00289E94: addiu       $v0, $zero, 0xD
        ctx->r2 = ADD32(0, 0XD);
            goto L_00289EAC;
    }
    // 0x00289E94: addiu       $v0, $zero, 0xD
    ctx->r2 = ADD32(0, 0XD);
    // 0x00289E98: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x00289E9C: addu        $at, $s0, $at
    ctx->r1 = ADD32(ctx->r16, ctx->r1);
    // 0x00289EA0: lw          $v1, 0x3FD8($at)
    ctx->r3 = MEM_W(ctx->r1, 0X3FD8);
    // 0x00289EA4: beq         $v1, $v0, L_00289EDC
    if (ctx->r3 == ctx->r2) {
        // 0x00289EA8: nop
    
            goto L_00289EDC;
    }
    // 0x00289EA8: nop

L_00289EAC:
    // 0x00289EAC: jal         0x002759C4
    // 0x00289EB0: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    func_002759C4(rdram, ctx);
        goto after_2;
    // 0x00289EB0: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    after_2:
    // 0x00289EB4: jal         0x00275A08
    // 0x00289EB8: nop

    func_00275A08(rdram, ctx);
        goto after_3;
    // 0x00289EB8: nop

    after_3:
L_00289EBC:
    // 0x00289EBC: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x00289EC0: addu        $at, $s0, $at
    ctx->r1 = ADD32(ctx->r16, ctx->r1);
    // 0x00289EC4: lw          $v1, 0x3FD8($at)
    ctx->r3 = MEM_W(ctx->r1, 0X3FD8);
    // 0x00289EC8: addiu       $v0, $zero, 0xD
    ctx->r2 = ADD32(0, 0XD);
    // 0x00289ECC: beq         $v1, $v0, L_00289EDC
    if (ctx->r3 == ctx->r2) {
        // 0x00289ED0: nop
    
            goto L_00289EDC;
    }
    // 0x00289ED0: nop

    // 0x00289ED4: jal         0x0042F514
    // 0x00289ED8: nop

    func_0042F514(rdram, ctx);
        goto after_4;
    // 0x00289ED8: nop

    after_4:
L_00289EDC:
    // 0x00289EDC: jal         0x00285410
    // 0x00289EE0: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_00285410(rdram, ctx);
        goto after_5;
    // 0x00289EE0: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_5:
    // 0x00289EE4: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x00289EE8: addu        $at, $s0, $at
    ctx->r1 = ADD32(ctx->r16, ctx->r1);
    // 0x00289EEC: lw          $v1, 0x3FD8($at)
    ctx->r3 = MEM_W(ctx->r1, 0X3FD8);
    // 0x00289EF0: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x00289EF4: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x00289EF8: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x00289EFC: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00289F00: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x00289F04: lw          $v0, 0x6D78($at)
    ctx->r2 = MEM_W(ctx->r1, 0X6D78);
    // 0x00289F08: beq         $v0, $zero, L_00289F18
    if (ctx->r2 == 0) {
        // 0x00289F0C: nop
    
            goto L_00289F18;
    }
    // 0x00289F0C: nop

    // 0x00289F10: jalr        $v0
    // 0x00289F14: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_6;
    // 0x00289F14: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_6:
L_00289F18:
    // 0x00289F18: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x00289F1C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00289F20: jr          $ra
    // 0x00289F24: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00289F24: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0045176C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0045176C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00451770: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00451774: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x00451778: lui         $s0, 0x8012
    ctx->r16 = S32(0X8012 << 16);
    // 0x0045177C: addiu       $s0, $s0, -0x5528
    ctx->r16 = ADD32(ctx->r16, -0X5528);
    // 0x00451780: addu        $a0, $a1, $zero
    ctx->r4 = ADD32(ctx->r5, 0);
    // 0x00451784: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x00451788: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x0045178C: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x00451790: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x00451794: lbu         $v0, 0x29($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X29);
    // 0x00451798: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x0045179C: jal         0x0041648C
    // 0x004517A0: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    func_0041648C(rdram, ctx);
        goto after_0;
    // 0x004517A0: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    after_0:
    // 0x004517A4: sb          $v0, 0x29($s0)
    MEM_B(0X29, ctx->r16) = ctx->r2;
    // 0x004517A8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x004517AC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x004517B0: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x004517B4: jr          $ra
    // 0x004517B8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x004517B8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_0025398C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0025398C: sll         $a1, $a1, 2
    ctx->r5 = S32(ctx->r5 << 2);
    // 0x00253990: lw          $v0, 0x12A4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X12A4);
    // 0x00253994: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00253998: addu        $at, $at, $a1
    ctx->r1 = ADD32(ctx->r1, ctx->r5);
    // 0x0025399C: lw          $a1, -0x9E8($at)
    ctx->r5 = MEM_W(ctx->r1, -0X9E8);
    // 0x002539A0: beq         $v0, $zero, L_002539DC
    if (ctx->r2 == 0) {
        // 0x002539A4: addu        $a3, $zero, $zero
        ctx->r7 = ADD32(0, 0);
            goto L_002539DC;
    }
    // 0x002539A4: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x002539A8: lw          $v1, 0x24($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X24);
    // 0x002539AC: beq         $v1, $zero, L_002539E0
    if (ctx->r3 == 0) {
        // 0x002539B0: addu        $a2, $a3, $zero
        ctx->r6 = ADD32(ctx->r7, 0);
            goto L_002539E0;
    }
    // 0x002539B0: addu        $a2, $a3, $zero
    ctx->r6 = ADD32(ctx->r7, 0);
    // 0x002539B4: lh          $v0, 0x0($v1)
    ctx->r2 = MEM_H(ctx->r3, 0X0);
    // 0x002539B8: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x002539BC: addu        $v0, $a0, $v0
    ctx->r2 = ADD32(ctx->r4, ctx->r2);
    // 0x002539C0: lh          $v0, 0x934($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X934);
    // 0x002539C4: blez        $v0, L_002539E0
    if (SIGNED(ctx->r2) <= 0) {
        // 0x002539C8: addu        $v0, $v1, $zero
        ctx->r2 = ADD32(ctx->r3, 0);
            goto L_002539E0;
    }
    // 0x002539C8: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
    // 0x002539CC: jr          $ra
    // 0x002539D0: nop

    return;
    // 0x002539D0: nop

L_002539D4:
    // 0x002539D4: jr          $ra
    // 0x002539D8: addu        $v0, $a3, $zero
    ctx->r2 = ADD32(ctx->r7, 0);
    return;
    // 0x002539D8: addu        $v0, $a3, $zero
    ctx->r2 = ADD32(ctx->r7, 0);
L_002539DC:
    // 0x002539DC: addu        $a2, $a3, $zero
    ctx->r6 = ADD32(ctx->r7, 0);
L_002539E0:
    // 0x002539E0: lw          $v1, 0x20($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X20);
    // 0x002539E4: beq         $v1, $zero, L_00253A14
    if (ctx->r3 == 0) {
        // 0x002539E8: nop
    
            goto L_00253A14;
    }
    // 0x002539E8: nop

    // 0x002539EC: addu        $a3, $v1, $zero
    ctx->r7 = ADD32(ctx->r3, 0);
    // 0x002539F0: lh          $v0, 0x0($v1)
    ctx->r2 = MEM_H(ctx->r3, 0X0);
    // 0x002539F4: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x002539F8: addu        $v0, $a0, $v0
    ctx->r2 = ADD32(ctx->r4, ctx->r2);
    // 0x002539FC: lh          $v0, 0x934($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X934);
    // 0x00253A00: bgtz        $v0, L_002539D4
    if (SIGNED(ctx->r2) > 0) {
        // 0x00253A04: addiu       $a2, $a2, 0x1
        ctx->r6 = ADD32(ctx->r6, 0X1);
            goto L_002539D4;
    }
    // 0x00253A04: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x00253A08: slti        $v0, $a2, 0x3
    ctx->r2 = SIGNED(ctx->r6) < 0X3 ? 1 : 0;
    // 0x00253A0C: bne         $v0, $zero, L_002539E0
    if (ctx->r2 != 0) {
        // 0x00253A10: addiu       $a1, $a1, 0x4
        ctx->r5 = ADD32(ctx->r5, 0X4);
            goto L_002539E0;
    }
    // 0x00253A10: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
L_00253A14:
    // 0x00253A14: jr          $ra
    // 0x00253A18: addu        $v0, $a3, $zero
    ctx->r2 = ADD32(ctx->r7, 0);
    return;
    // 0x00253A18: addu        $v0, $a3, $zero
    ctx->r2 = ADD32(ctx->r7, 0);
;}
RECOMP_FUNC void func_00468AC4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00468AC4: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x00468AC8: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x00468ACC: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x00468AD0: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x00468AD4: addu        $s4, $a1, $zero
    ctx->r20 = ADD32(ctx->r5, 0);
    // 0x00468AD8: addiu       $a0, $s2, 0x40
    ctx->r4 = ADD32(ctx->r18, 0X40);
    // 0x00468ADC: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x00468AE0: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x00468AE4: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00468AE8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00468AEC: sdc1        $f20, 0x28($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X28, ctx->r29);
    // 0x00468AF0: sw          $zero, 0x34($s2)
    MEM_W(0X34, ctx->r18) = 0;
    // 0x00468AF4: sw          $zero, 0x38($s2)
    MEM_W(0X38, ctx->r18) = 0;
    // 0x00468AF8: jal         0x0042F8D0
    // 0x00468AFC: sw          $zero, 0x48($s2)
    MEM_W(0X48, ctx->r18) = 0;
    entry_0042F8D0(rdram, ctx);
        goto after_0;
    // 0x00468AFC: sw          $zero, 0x48($s2)
    MEM_W(0X48, ctx->r18) = 0;
    after_0:
    // 0x00468B00: addiu       $a0, $s2, 0x11C0
    ctx->r4 = ADD32(ctx->r18, 0X11C0);
    // 0x00468B04: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x00468B08: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x00468B0C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x00468B10: jal         0x00200500
    // 0x00468B14: sw          $v0, 0x38($s2)
    MEM_W(0X38, ctx->r18) = ctx->r2;
    func_00200500(rdram, ctx);
        goto after_1;
    // 0x00468B14: sw          $v0, 0x38($s2)
    MEM_W(0X38, ctx->r18) = ctx->r2;
    after_1:
    // 0x00468B18: addiu       $a0, $s2, 0x11D4
    ctx->r4 = ADD32(ctx->r18, 0X11D4);
    // 0x00468B1C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x00468B20: jal         0x00200500
    // 0x00468B24: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    func_00200500(rdram, ctx);
        goto after_2;
    // 0x00468B24: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_2:
    // 0x00468B28: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x00468B2C: addiu       $s3, $zero, 0xF20
    ctx->r19 = ADD32(0, 0XF20);
    // 0x00468B30: addu        $s0, $s1, $zero
    ctx->r16 = ADD32(ctx->r17, 0);
    // 0x00468B34: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00468B38: lwc1        $f20, -0x65E8($at)
    ctx->f20.u32l = MEM_W(ctx->r1, -0X65E8);
L_00468B3C:
    // 0x00468B3C: addu        $v1, $s0, $s2
    ctx->r3 = ADD32(ctx->r16, ctx->r18);
    // 0x00468B40: addiu       $v1, $v1, 0xF20
    ctx->r3 = ADD32(ctx->r3, 0XF20);
    // 0x00468B44: addiu       $a0, $s2, 0x11C0
    ctx->r4 = ADD32(ctx->r18, 0X11C0);
    // 0x00468B48: addu        $a1, $s2, $s3
    ctx->r5 = ADD32(ctx->r18, ctx->r19);
    // 0x00468B4C: addiu       $v0, $v1, 0x18
    ctx->r2 = ADD32(ctx->r3, 0X18);
    // 0x00468B50: sw          $zero, 0x8($v1)
    MEM_W(0X8, ctx->r3) = 0;
    // 0x00468B54: sw          $zero, 0xC($v1)
    MEM_W(0XC, ctx->r3) = 0;
    // 0x00468B58: sw          $zero, 0x10($v1)
    MEM_W(0X10, ctx->r3) = 0;
    // 0x00468B5C: swc1        $f20, 0x14($v1)
    MEM_W(0X14, ctx->r3) = ctx->f20.u32l;
    // 0x00468B60: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x00468B64: sw          $zero, 0x8($v0)
    MEM_W(0X8, ctx->r2) = 0;
    // 0x00468B68: sw          $zero, 0xC($v0)
    MEM_W(0XC, ctx->r2) = 0;
    // 0x00468B6C: sw          $zero, 0x10($v0)
    MEM_W(0X10, ctx->r2) = 0;
    // 0x00468B70: addiu       $v0, $v1, 0x2C
    ctx->r2 = ADD32(ctx->r3, 0X2C);
    // 0x00468B74: addiu       $v1, $v1, 0x40
    ctx->r3 = ADD32(ctx->r3, 0X40);
    // 0x00468B78: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x00468B7C: sw          $zero, 0x8($v0)
    MEM_W(0X8, ctx->r2) = 0;
    // 0x00468B80: sw          $zero, 0xC($v0)
    MEM_W(0XC, ctx->r2) = 0;
    // 0x00468B84: sw          $zero, 0x10($v0)
    MEM_W(0X10, ctx->r2) = 0;
    // 0x00468B88: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x00468B8C: sw          $zero, 0x8($v1)
    MEM_W(0X8, ctx->r3) = 0;
    // 0x00468B90: sw          $zero, 0xC($v1)
    MEM_W(0XC, ctx->r3) = 0;
    // 0x00468B94: jal         0x00200574
    // 0x00468B98: sw          $zero, 0x10($v1)
    MEM_W(0X10, ctx->r3) = 0;
    func_00200574(rdram, ctx);
        goto after_3;
    // 0x00468B98: sw          $zero, 0x10($v1)
    MEM_W(0X10, ctx->r3) = 0;
    after_3:
    // 0x00468B9C: addiu       $s3, $s3, 0x54
    ctx->r19 = ADD32(ctx->r19, 0X54);
    // 0x00468BA0: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x00468BA4: slti        $v0, $s1, 0x8
    ctx->r2 = SIGNED(ctx->r17) < 0X8 ? 1 : 0;
    // 0x00468BA8: bne         $v0, $zero, L_00468B3C
    if (ctx->r2 != 0) {
        // 0x00468BAC: addiu       $s0, $s0, 0x54
        ctx->r16 = ADD32(ctx->r16, 0X54);
            goto L_00468B3C;
    }
    // 0x00468BAC: addiu       $s0, $s0, 0x54
    ctx->r16 = ADD32(ctx->r16, 0X54);
    // 0x00468BB0: addiu       $a0, $s2, 0xC
    ctx->r4 = ADD32(ctx->r18, 0XC);
    // 0x00468BB4: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x00468BB8: jal         0x00200500
    // 0x00468BBC: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    func_00200500(rdram, ctx);
        goto after_4;
    // 0x00468BBC: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_4:
    // 0x00468BC0: addiu       $a0, $s2, 0x20
    ctx->r4 = ADD32(ctx->r18, 0X20);
    // 0x00468BC4: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x00468BC8: jal         0x00200500
    // 0x00468BCC: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    func_00200500(rdram, ctx);
        goto after_5;
    // 0x00468BCC: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_5:
    // 0x00468BD0: addiu       $a0, $s2, 0xF0C
    ctx->r4 = ADD32(ctx->r18, 0XF0C);
    // 0x00468BD4: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x00468BD8: jal         0x00200500
    // 0x00468BDC: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    func_00200500(rdram, ctx);
        goto after_6;
    // 0x00468BDC: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_6:
    // 0x00468BE0: addiu       $a0, $s2, 0x40
    ctx->r4 = ADD32(ctx->r18, 0X40);
    // 0x00468BE4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00468BE8: jal         0x00275AE0
    // 0x00468BEC: sw          $v0, 0x11E8($s2)
    MEM_W(0X11E8, ctx->r18) = ctx->r2;
    func_00275AE0(rdram, ctx);
        goto after_7;
    // 0x00468BEC: sw          $v0, 0x11E8($s2)
    MEM_W(0X11E8, ctx->r18) = ctx->r2;
    after_7:
    // 0x00468BF0: jal         0x002053A8
    // 0x00468BF4: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_002053A8(rdram, ctx);
        goto after_8;
    // 0x00468BF4: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_8:
    // 0x00468BF8: lw          $a1, 0x0($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X0);
    // 0x00468BFC: beq         $a1, $zero, L_00468C18
    if (ctx->r5 == 0) {
        // 0x00468C00: nop
    
            goto L_00468C18;
    }
    // 0x00468C00: nop

    // 0x00468C04: jal         0x002052D8
    // 0x00468C08: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_002052D8(rdram, ctx);
        goto after_9;
    // 0x00468C08: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_9:
    // 0x00468C0C: sw          $zero, 0x0($s2)
    MEM_W(0X0, ctx->r18) = 0;
    // 0x00468C10: sw          $zero, 0x4($s2)
    MEM_W(0X4, ctx->r18) = 0;
    // 0x00468C14: sw          $zero, 0x8($s2)
    MEM_W(0X8, ctx->r18) = 0;
L_00468C18:
    // 0x00468C18: jal         0x002053A8
    // 0x00468C1C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_002053A8(rdram, ctx);
        goto after_10;
    // 0x00468C1C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_10:
    // 0x00468C20: lw          $a1, 0xF00($s2)
    ctx->r5 = MEM_W(ctx->r18, 0XF00);
    // 0x00468C24: beq         $a1, $zero, L_00468C40
    if (ctx->r5 == 0) {
        // 0x00468C28: nop
    
            goto L_00468C40;
    }
    // 0x00468C28: nop

    // 0x00468C2C: jal         0x002052D8
    // 0x00468C30: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_002052D8(rdram, ctx);
        goto after_11;
    // 0x00468C30: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_11:
    // 0x00468C34: sw          $zero, 0xF00($s2)
    MEM_W(0XF00, ctx->r18) = 0;
    // 0x00468C38: sw          $zero, 0xF04($s2)
    MEM_W(0XF04, ctx->r18) = 0;
    // 0x00468C3C: sw          $zero, 0xF08($s2)
    MEM_W(0XF08, ctx->r18) = 0;
L_00468C40:
    // 0x00468C40: beq         $s4, $zero, L_00468CDC
    if (ctx->r20 == 0) {
        // 0x00468C44: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_00468CDC;
    }
    // 0x00468C44: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x00468C48: sll         $s0, $s4, 4
    ctx->r16 = S32(ctx->r20 << 4);
    // 0x00468C4C: subu        $s0, $s0, $s4
    ctx->r16 = SUB32(ctx->r16, ctx->r20);
    // 0x00468C50: sll         $s0, $s0, 2
    ctx->r16 = S32(ctx->r16 << 2);
    // 0x00468C54: subu        $s0, $s0, $s4
    ctx->r16 = SUB32(ctx->r16, ctx->r20);
    // 0x00468C58: sll         $s0, $s0, 6
    ctx->r16 = S32(ctx->r16 << 6);
    // 0x00468C5C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x00468C60: addiu       $a2, $zero, 0x23
    ctx->r6 = ADD32(0, 0X23);
    // 0x00468C64: lui         $a3, 0x800B
    ctx->r7 = S32(0X800B << 16);
    // 0x00468C68: addiu       $a3, $a3, -0x6600
    ctx->r7 = ADD32(ctx->r7, -0X6600);
    // 0x00468C6C: jal         0x00204EDC
    // 0x00468C70: sw          $s4, 0x8($s2)
    MEM_W(0X8, ctx->r18) = ctx->r20;
    func_00204EDC(rdram, ctx);
        goto after_12;
    // 0x00468C70: sw          $s4, 0x8($s2)
    MEM_W(0X8, ctx->r18) = ctx->r20;
    after_12:
    // 0x00468C74: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x00468C78: sw          $v0, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r2;
    // 0x00468C7C: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
    // 0x00468C80: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    // 0x00468C84: jal         0x00266C5C
    // 0x00468C88: sw          $a0, 0x4($s2)
    MEM_W(0X4, ctx->r18) = ctx->r4;
    func_00266C5C(rdram, ctx);
        goto after_13;
    // 0x00468C88: sw          $a0, 0x4($s2)
    MEM_W(0X4, ctx->r18) = ctx->r4;
    after_13:
    // 0x00468C8C: lw          $v0, 0x8($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X8);
    // 0x00468C90: blez        $v0, L_00468CCC
    if (SIGNED(ctx->r2) <= 0) {
        // 0x00468C94: addu        $s1, $zero, $zero
        ctx->r17 = ADD32(0, 0);
            goto L_00468CCC;
    }
    // 0x00468C94: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x00468C98: addu        $s0, $s1, $zero
    ctx->r16 = ADD32(ctx->r17, 0);
L_00468C9C:
    // 0x00468C9C: lw          $v0, 0x4($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X4);
    // 0x00468CA0: addiu       $a0, $s2, 0xC
    ctx->r4 = ADD32(ctx->r18, 0XC);
    // 0x00468CA4: addu        $v0, $s0, $v0
    ctx->r2 = ADD32(ctx->r16, ctx->r2);
    // 0x00468CA8: sw          $s1, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r17;
    // 0x00468CAC: lw          $a1, 0x4($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X4);
    // 0x00468CB0: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x00468CB4: jal         0x00200574
    // 0x00468CB8: addu        $a1, $a1, $s0
    ctx->r5 = ADD32(ctx->r5, ctx->r16);
    func_00200574(rdram, ctx);
        goto after_14;
    // 0x00468CB8: addu        $a1, $a1, $s0
    ctx->r5 = ADD32(ctx->r5, ctx->r16);
    after_14:
    // 0x00468CBC: lw          $v0, 0x8($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X8);
    // 0x00468CC0: slt         $v0, $s1, $v0
    ctx->r2 = SIGNED(ctx->r17) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x00468CC4: bne         $v0, $zero, L_00468C9C
    if (ctx->r2 != 0) {
        // 0x00468CC8: addiu       $s0, $s0, 0xEC0
        ctx->r16 = ADD32(ctx->r16, 0XEC0);
            goto L_00468C9C;
    }
    // 0x00468CC8: addiu       $s0, $s0, 0xEC0
    ctx->r16 = ADD32(ctx->r16, 0XEC0);
L_00468CCC:
    // 0x00468CCC: lw          $a0, 0x4($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X4);
    // 0x00468CD0: jal         0x00275AE0
    // 0x00468CD4: nop

    func_00275AE0(rdram, ctx);
        goto after_15;
    // 0x00468CD4: nop

    after_15:
    // 0x00468CD8: sw          $zero, 0x11E8($s2)
    MEM_W(0X11E8, ctx->r18) = 0;
L_00468CDC:
    // 0x00468CDC: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x00468CE0: addiu       $a1, $zero, 0x400
    ctx->r5 = ADD32(0, 0X400);
    // 0x00468CE4: addiu       $a2, $zero, 0x23
    ctx->r6 = ADD32(0, 0X23);
    // 0x00468CE8: lui         $a3, 0x800B
    ctx->r7 = S32(0X800B << 16);
    // 0x00468CEC: addiu       $a3, $a3, -0x65F8
    ctx->r7 = ADD32(ctx->r7, -0X65F8);
    // 0x00468CF0: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x00468CF4: jal         0x00204EDC
    // 0x00468CF8: sw          $v0, 0xF08($s2)
    MEM_W(0XF08, ctx->r18) = ctx->r2;
    func_00204EDC(rdram, ctx);
        goto after_16;
    // 0x00468CF8: sw          $v0, 0xF08($s2)
    MEM_W(0XF08, ctx->r18) = ctx->r2;
    after_16:
    // 0x00468CFC: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x00468D00: sw          $v0, 0xF00($s2)
    MEM_W(0XF00, ctx->r18) = ctx->r2;
    // 0x00468D04: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
    // 0x00468D08: addiu       $a2, $zero, 0x400
    ctx->r6 = ADD32(0, 0X400);
    // 0x00468D0C: jal         0x00266C5C
    // 0x00468D10: sw          $a0, 0xF04($s2)
    MEM_W(0XF04, ctx->r18) = ctx->r4;
    func_00266C5C(rdram, ctx);
        goto after_17;
    // 0x00468D10: sw          $a0, 0xF04($s2)
    MEM_W(0XF04, ctx->r18) = ctx->r4;
    after_17:
    // 0x00468D14: lw          $v0, 0xF08($s2)
    ctx->r2 = MEM_W(ctx->r18, 0XF08);
    // 0x00468D18: blez        $v0, L_00468D48
    if (SIGNED(ctx->r2) <= 0) {
        // 0x00468D1C: addu        $s1, $zero, $zero
        ctx->r17 = ADD32(0, 0);
            goto L_00468D48;
    }
    // 0x00468D1C: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x00468D20: addiu       $a0, $s2, 0xF0C
    ctx->r4 = ADD32(ctx->r18, 0XF0C);
L_00468D24:
    // 0x00468D24: lw          $v0, 0xF04($s2)
    ctx->r2 = MEM_W(ctx->r18, 0XF04);
    // 0x00468D28: sll         $a1, $s1, 6
    ctx->r5 = S32(ctx->r17 << 6);
    // 0x00468D2C: jal         0x00200574
    // 0x00468D30: addu        $a1, $v0, $a1
    ctx->r5 = ADD32(ctx->r2, ctx->r5);
    func_00200574(rdram, ctx);
        goto after_18;
    // 0x00468D30: addu        $a1, $v0, $a1
    ctx->r5 = ADD32(ctx->r2, ctx->r5);
    after_18:
    // 0x00468D34: lw          $v0, 0xF08($s2)
    ctx->r2 = MEM_W(ctx->r18, 0XF08);
    // 0x00468D38: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x00468D3C: slt         $v0, $s1, $v0
    ctx->r2 = SIGNED(ctx->r17) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x00468D40: bne         $v0, $zero, L_00468D24
    if (ctx->r2 != 0) {
        // 0x00468D44: addiu       $a0, $s2, 0xF0C
        ctx->r4 = ADD32(ctx->r18, 0XF0C);
            goto L_00468D24;
    }
    // 0x00468D44: addiu       $a0, $s2, 0xF0C
    ctx->r4 = ADD32(ctx->r18, 0XF0C);
L_00468D48:
    // 0x00468D48: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x00468D4C: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x00468D50: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x00468D54: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x00468D58: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00468D5C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00468D60: ldc1        $f20, 0x28($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X28);
    // 0x00468D64: jr          $ra
    // 0x00468D68: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x00468D68: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_0026E210(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0026E210: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x0026E214: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0026E218: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x0026E21C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x0026E220: lui         $s1, 0x800F
    ctx->r17 = S32(0X800F << 16);
    // 0x0026E224: addiu       $s1, $s1, 0x7078
    ctx->r17 = ADD32(ctx->r17, 0X7078);
    // 0x0026E228: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0026E22C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x0026E230: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x0026E234: lbu         $v0, 0xE($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XE);
    // 0x0026E238: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x0026E23C: ori         $v0, $v0, 0x10
    ctx->r2 = ctx->r2 | 0X10;
    // 0x0026E240: jal         0x00224A68
    // 0x0026E244: sb          $v0, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r2;
    func_00224A68(rdram, ctx);
        goto after_0;
    // 0x0026E244: sb          $v0, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r2;
    after_0:
    // 0x0026E248: lw          $v1, 0x0($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X0);
    // 0x0026E24C: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x0026E250: bne         $v1, $v0, L_0026E278
    if (ctx->r3 != ctx->r2) {
        // 0x0026E254: nop
    
            goto L_0026E278;
    }
    // 0x0026E254: nop

    // 0x0026E258: lbu         $v0, 0xE($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XE);
    // 0x0026E25C: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x0026E260: beq         $v0, $zero, L_0026E278
    if (ctx->r2 == 0) {
        // 0x0026E264: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_0026E278;
    }
    // 0x0026E264: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0026E268: jal         0x00225354
    // 0x0026E26C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_00225354(rdram, ctx);
        goto after_1;
    // 0x0026E26C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_1:
    // 0x0026E270: j           L_0026E280
    // 0x0026E274: nop

        goto L_0026E280;
    // 0x0026E274: nop

L_0026E278:
    // 0x0026E278: jal         0x0026DFB0
    // 0x0026E27C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_0026DFB0(rdram, ctx);
        goto after_2;
    // 0x0026E27C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
L_0026E280:
    // 0x0026E280: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x0026E284: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x0026E288: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0026E28C: jr          $ra
    // 0x0026E290: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x0026E290: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_002199F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002199F4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x002199F8: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x002199FC: jal         0x0021793C
    // 0x00219A00: nop

    func_0021793C(rdram, ctx);
        goto after_0;
    // 0x00219A00: nop

    after_0:
    // 0x00219A04: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x00219A08: jal         0x002017D4
    // 0x00219A0C: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    func_002017D4(rdram, ctx);
        goto after_1;
    // 0x00219A0C: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_1:
    // 0x00219A10: lw          $v0, 0x4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4);
    // 0x00219A14: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x00219A18: jr          $ra
    // 0x00219A1C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00219A1C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0045A374(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0045A374: lw          $a1, 0x518($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X518);
    // 0x0045A378: lbu         $v1, 0x30($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X30);
    // 0x0045A37C: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x0045A380: addiu       $v0, $v0, 0x970
    ctx->r2 = ADD32(ctx->r2, 0X970);
    // 0x0045A384: sb          $v1, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r3;
    // 0x0045A388: lhu         $v1, 0x0($a1)
    ctx->r3 = MEM_HU(ctx->r5, 0X0);
    // 0x0045A38C: sh          $v1, -0x8($v0)
    MEM_H(-0X8, ctx->r2) = ctx->r3;
    // 0x0045A390: lhu         $v1, 0x2($a1)
    ctx->r3 = MEM_HU(ctx->r5, 0X2);
    // 0x0045A394: sh          $v1, -0x6($v0)
    MEM_H(-0X6, ctx->r2) = ctx->r3;
    // 0x0045A398: lhu         $v1, 0x4($a1)
    ctx->r3 = MEM_HU(ctx->r5, 0X4);
    // 0x0045A39C: sh          $v1, -0x4($v0)
    MEM_H(-0X4, ctx->r2) = ctx->r3;
    // 0x0045A3A0: lhu         $v1, 0x6($a1)
    ctx->r3 = MEM_HU(ctx->r5, 0X6);
    // 0x0045A3A4: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0045A3A8: sb          $zero, 0x1($v0)
    MEM_B(0X1, ctx->r2) = 0;
    // 0x0045A3AC: sb          $zero, 0x2($v0)
    MEM_B(0X2, ctx->r2) = 0;
    // 0x0045A3B0: sb          $zero, 0x3($v0)
    MEM_B(0X3, ctx->r2) = 0;
    // 0x0045A3B4: sh          $v1, -0x2($v0)
    MEM_H(-0X2, ctx->r2) = ctx->r3;
    // 0x0045A3B8: addu        $v0, $a1, $a0
    ctx->r2 = ADD32(ctx->r5, ctx->r4);
L_0045A3BC:
    // 0x0045A3BC: lbu         $v0, 0x33($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X33);
    // 0x0045A3C0: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0045A3C4: addu        $at, $at, $a0
    ctx->r1 = ADD32(ctx->r1, ctx->r4);
    // 0x0045A3C8: sb          $v0, 0x974($at)
    MEM_B(0X974, ctx->r1) = ctx->r2;
    // 0x0045A3CC: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x0045A3D0: slti        $v0, $a0, 0x8
    ctx->r2 = SIGNED(ctx->r4) < 0X8 ? 1 : 0;
    // 0x0045A3D4: bne         $v0, $zero, L_0045A3BC
    if (ctx->r2 != 0) {
        // 0x0045A3D8: addu        $v0, $a1, $a0
        ctx->r2 = ADD32(ctx->r5, ctx->r4);
            goto L_0045A3BC;
    }
    // 0x0045A3D8: addu        $v0, $a1, $a0
    ctx->r2 = ADD32(ctx->r5, ctx->r4);
    // 0x0045A3DC: jr          $ra
    // 0x0045A3E0: nop

    return;
    // 0x0045A3E0: nop

;}
RECOMP_FUNC void func_00268528(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00268528: lwc1        $f0, 0x4C($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X4C);
    // 0x0026852C: jr          $ra
    // 0x00268530: nop

    return;
    // 0x00268530: nop

;}
RECOMP_FUNC void func_00429AA4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00429AA4: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x00429AA8: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x00429AAC: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x00429AB0: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x00429AB4: addu        $s5, $a1, $zero
    ctx->r21 = ADD32(ctx->r5, 0);
    // 0x00429AB8: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x00429ABC: addu        $s6, $a2, $zero
    ctx->r22 = ADD32(ctx->r6, 0);
    // 0x00429AC0: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x00429AC4: sw          $fp, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r30;
    // 0x00429AC8: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x00429ACC: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x00429AD0: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x00429AD4: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x00429AD8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x00429ADC: lbu         $v0, 0x65($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X65);
    // 0x00429AE0: beq         $v0, $zero, L_00429AFC
    if (ctx->r2 == 0) {
        // 0x00429AE4: addu        $s7, $a3, $zero
        ctx->r23 = ADD32(ctx->r7, 0);
            goto L_00429AFC;
    }
    // 0x00429AE4: addu        $s7, $a3, $zero
    ctx->r23 = ADD32(ctx->r7, 0);
    // 0x00429AE8: jal         0x00429EC4
    // 0x00429AEC: sb          $zero, 0x65($s2)
    MEM_B(0X65, ctx->r18) = 0;
    func_00429EC4(rdram, ctx);
        goto after_0;
    // 0x00429AEC: sb          $zero, 0x65($s2)
    MEM_B(0X65, ctx->r18) = 0;
    after_0:
    // 0x00429AF0: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x00429AF4: bne         $a0, $zero, L_00429D54
    if (ctx->r4 != 0) {
            // 0x00429AF8: nop

    entry_00429D54(rdram, ctx);
    return;
    }
    // 0x00429AF8: nop

L_00429AFC:
    // 0x00429AFC: andi        $v0, $s7, 0xFF
    ctx->r2 = ctx->r23 & 0XFF;
    // 0x00429B00: bne         $v0, $zero, L_00429B0C
    if (ctx->r2 != 0) {
        // 0x00429B04: addiu       $s4, $zero, 0x1
        ctx->r20 = ADD32(0, 0X1);
            goto L_00429B0C;
    }
    // 0x00429B04: addiu       $s4, $zero, 0x1
    ctx->r20 = ADD32(0, 0X1);
    // 0x00429B08: lw          $s4, 0x60($s2)
    ctx->r20 = MEM_W(ctx->r18, 0X60);
L_00429B0C:
    // 0x00429B0C: andi        $v1, $s6, 0xFF
    ctx->r3 = ctx->r22 & 0XFF;
    // 0x00429B10: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00429B14: bne         $v1, $v0, L_00429B60
    if (ctx->r3 != ctx->r2) {
        // 0x00429B18: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_00429B60;
    }
    // 0x00429B18: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x00429B1C: sllv        $v0, $s4, $v0
    ctx->r2 = S32(ctx->r20 << (ctx->r2 & 31));
    // 0x00429B20: addu        $a1, $v0, $s5
    ctx->r5 = ADD32(ctx->r2, ctx->r21);
    // 0x00429B24: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x00429B28: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x00429B2C: subu        $v0, $v0, $s4
    ctx->r2 = SUB32(ctx->r2, ctx->r20);
    // 0x00429B30: sll         $a2, $v0, 1
    ctx->r6 = S32(ctx->r2 << 1);
    // 0x00429B34: blez        $a2, L_00429B58
    if (SIGNED(ctx->r6) <= 0) {
        // 0x00429B38: addu        $v1, $a0, $zero
        ctx->r3 = ADD32(ctx->r4, 0);
            goto L_00429B58;
    }
    // 0x00429B38: addu        $v1, $a0, $zero
    ctx->r3 = ADD32(ctx->r4, 0);
L_00429B3C:
    // 0x00429B3C: lbu         $v0, 0x0($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X0);
    // 0x00429B40: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x00429B44: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x00429B48: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x00429B4C: slt         $v0, $a0, $a2
    ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r6) ? 1 : 0;
    // 0x00429B50: bne         $v0, $zero, L_00429B3C
    if (ctx->r2 != 0) {
        // 0x00429B54: andi        $v1, $v1, 0xFFFF
        ctx->r3 = ctx->r3 & 0XFFFF;
            goto L_00429B3C;
    }
    // 0x00429B54: andi        $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 & 0XFFFF;
L_00429B58:
    // 0x00429B58: sb          $v1, 0x1($s5)
    MEM_B(0X1, ctx->r21) = ctx->r3;
    // 0x00429B5C: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
L_00429B60:
    // 0x00429B60: andi        $fp, $s6, 0xFF
    ctx->r30 = ctx->r22 & 0XFF;
    // 0x00429B64: andi        $v0, $s7, 0xFF
    ctx->r2 = ctx->r23 & 0XFF;
    // 0x00429B68: sll         $s3, $v0, 3
    ctx->r19 = S32(ctx->r2 << 3);
    // 0x00429B6C: sll         $v0, $s0, 5
    ctx->r2 = S32(ctx->r16 << 5);
L_00429B70:
    // 0x00429B70: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x00429B74: bne         $fp, $t0, L_00429BCC
    if (ctx->r30 != ctx->r8) {
        // 0x00429B78: addu        $s1, $s5, $v0
        ctx->r17 = ADD32(ctx->r21, ctx->r2);
            goto L_00429BCC;
    }
    // 0x00429B78: addu        $s1, $s5, $v0
    ctx->r17 = ADD32(ctx->r21, ctx->r2);
    // 0x00429B7C: lhu         $a2, 0x56($s2)
    ctx->r6 = MEM_HU(ctx->r18, 0X56);
    // 0x00429B80: addu        $a3, $s1, $zero
    ctx->r7 = ADD32(ctx->r17, 0);
    // 0x00429B84: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x00429B88: lw          $a0, 0x4($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X4);
    // 0x00429B8C: lw          $a1, 0x8($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X8);
    // 0x00429B90: addu        $a2, $a2, $s3
    ctx->r6 = ADD32(ctx->r6, ctx->r19);
    // 0x00429B94: addu        $a2, $a2, $s0
    ctx->r6 = ADD32(ctx->r6, ctx->r16);
    // 0x00429B98: jal         0x00299A40
    // 0x00429B9C: andi        $a2, $a2, 0xFFFF
    ctx->r6 = ctx->r6 & 0XFFFF;
    func_00299A40(rdram, ctx);
        goto after_1;
    // 0x00429B9C: andi        $a2, $a2, 0xFFFF
    ctx->r6 = ctx->r6 & 0XFFFF;
    after_1:
    // 0x00429BA0: lhu         $a2, 0x5A($s2)
    ctx->r6 = MEM_HU(ctx->r18, 0X5A);
    // 0x00429BA4: addu        $a3, $s1, $zero
    ctx->r7 = ADD32(ctx->r17, 0);
    // 0x00429BA8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x00429BAC: lw          $a0, 0x4($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X4);
    // 0x00429BB0: lw          $a1, 0x8($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X8);
    // 0x00429BB4: addu        $a2, $a2, $s3
    ctx->r6 = ADD32(ctx->r6, ctx->r19);
    // 0x00429BB8: addu        $a2, $a2, $s0
    ctx->r6 = ADD32(ctx->r6, ctx->r16);
    // 0x00429BBC: jal         0x00299A40
    // 0x00429BC0: andi        $a2, $a2, 0xFFFF
    ctx->r6 = ctx->r6 & 0XFFFF;
    func_00299A40(rdram, ctx);
        goto after_2;
    // 0x00429BC0: andi        $a2, $a2, 0xFFFF
    ctx->r6 = ctx->r6 & 0XFFFF;
    after_2:
    // 0x00429BC4: j           L_00429BF0
    // 0x00429BC8: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
        goto L_00429BF0;
    // 0x00429BC8: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
L_00429BCC:
    // 0x00429BCC: addu        $a3, $s1, $zero
    ctx->r7 = ADD32(ctx->r17, 0);
    // 0x00429BD0: lw          $a0, 0x4($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X4);
    // 0x00429BD4: lhu         $a2, 0x56($s2)
    ctx->r6 = MEM_HU(ctx->r18, 0X56);
    // 0x00429BD8: lw          $a1, 0x8($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X8);
    // 0x00429BDC: addu        $a2, $a2, $s3
    ctx->r6 = ADD32(ctx->r6, ctx->r19);
    // 0x00429BE0: addu        $a2, $a2, $s0
    ctx->r6 = ADD32(ctx->r6, ctx->r16);
    // 0x00429BE4: jal         0x00299680
    // 0x00429BE8: andi        $a2, $a2, 0xFFFF
    ctx->r6 = ctx->r6 & 0XFFFF;
    func_00299680(rdram, ctx);
        goto after_3;
    // 0x00429BE8: andi        $a2, $a2, 0xFFFF
    ctx->r6 = ctx->r6 & 0XFFFF;
    after_3:
    // 0x00429BEC: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
L_00429BF0:
    // 0x00429BF0: bne         $a0, $zero, L_00429D04
    if (ctx->r4 != 0) {
        // 0x00429BF4: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_00429D04;
    }
    // 0x00429BF4: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x00429BF8: slti        $v0, $s0, 0x8
    ctx->r2 = SIGNED(ctx->r16) < 0X8 ? 1 : 0;
    // 0x00429BFC: bne         $v0, $zero, L_00429B70
    if (ctx->r2 != 0) {
        // 0x00429C00: sll         $v0, $s0, 5
        ctx->r2 = S32(ctx->r16 << 5);
            goto L_00429B70;
    }
    // 0x00429C00: sll         $v0, $s0, 5
    ctx->r2 = S32(ctx->r16 << 5);
    // 0x00429C04: andi        $v0, $s6, 0xFF
    ctx->r2 = ctx->r22 & 0XFF;
    // 0x00429C08: bne         $v0, $zero, L_00429D54
    if (ctx->r2 != 0) {
            // 0x00429C0C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    entry_00429D54(rdram, ctx);
    return;
    }
    // 0x00429C0C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x00429C10: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
    // 0x00429C14: sll         $v0, $s4, 1
    ctx->r2 = S32(ctx->r20 << 1);
    // 0x00429C18: addu        $a2, $v0, $s5
    ctx->r6 = ADD32(ctx->r2, ctx->r21);
    // 0x00429C1C: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x00429C20: subu        $v0, $v0, $s4
    ctx->r2 = SUB32(ctx->r2, ctx->r20);
    // 0x00429C24: sll         $a3, $v0, 1
    ctx->r7 = S32(ctx->r2 << 1);
    // 0x00429C28: slt         $v0, $a0, $a3
    ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r7) ? 1 : 0;
    // 0x00429C2C: beq         $v0, $zero, L_00429C50
    if (ctx->r2 == 0) {
        // 0x00429C30: addu        $a1, $v1, $zero
        ctx->r5 = ADD32(ctx->r3, 0);
            goto L_00429C50;
    }
    // 0x00429C30: addu        $a1, $v1, $zero
    ctx->r5 = ADD32(ctx->r3, 0);
L_00429C34:
    // 0x00429C34: lbu         $v0, 0x0($a2)
    ctx->r2 = MEM_BU(ctx->r6, 0X0);
    // 0x00429C38: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x00429C3C: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x00429C40: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x00429C44: slt         $v0, $a1, $a3
    ctx->r2 = SIGNED(ctx->r5) < SIGNED(ctx->r7) ? 1 : 0;
    // 0x00429C48: bne         $v0, $zero, L_00429C34
    if (ctx->r2 != 0) {
        // 0x00429C4C: andi        $v1, $v1, 0xFFFF
        ctx->r3 = ctx->r3 & 0XFFFF;
            goto L_00429C34;
    }
    // 0x00429C4C: andi        $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 & 0XFFFF;
L_00429C50:
    // 0x00429C50: addu        $s4, $v1, $zero
    ctx->r20 = ADD32(ctx->r3, 0);
    // 0x00429C54: lbu         $v1, 0x1($s5)
    ctx->r3 = MEM_BU(ctx->r21, 0X1);
    // 0x00429C58: andi        $v0, $s4, 0xFF
    ctx->r2 = ctx->r20 & 0XFF;
    // 0x00429C5C: beq         $v0, $v1, L_00429D0C
    if (ctx->r2 == ctx->r3) {
        // 0x00429C60: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_00429D0C;
    }
    // 0x00429C60: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x00429C64: andi        $v0, $s7, 0xFF
    ctx->r2 = ctx->r23 & 0XFF;
    // 0x00429C68: sll         $s3, $v0, 3
    ctx->r19 = S32(ctx->r2 << 3);
    // 0x00429C6C: addu        $s1, $s5, $zero
    ctx->r17 = ADD32(ctx->r21, 0);
    // 0x00429C70: addu        $a3, $s1, $zero
    ctx->r7 = ADD32(ctx->r17, 0);
L_00429C74:
    // 0x00429C74: addiu       $s1, $s1, 0x20
    ctx->r17 = ADD32(ctx->r17, 0X20);
    // 0x00429C78: lw          $a0, 0x4($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X4);
    // 0x00429C7C: lhu         $a2, 0x5A($s2)
    ctx->r6 = MEM_HU(ctx->r18, 0X5A);
    // 0x00429C80: lw          $a1, 0x8($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X8);
    // 0x00429C84: addu        $a2, $a2, $s3
    ctx->r6 = ADD32(ctx->r6, ctx->r19);
    // 0x00429C88: addu        $a2, $a2, $s0
    ctx->r6 = ADD32(ctx->r6, ctx->r16);
    // 0x00429C8C: jal         0x00299680
    // 0x00429C90: andi        $a2, $a2, 0xFFFF
    ctx->r6 = ctx->r6 & 0XFFFF;
    func_00299680(rdram, ctx);
        goto after_4;
    // 0x00429C90: andi        $a2, $a2, 0xFFFF
    ctx->r6 = ctx->r6 & 0XFFFF;
    after_4:
    // 0x00429C94: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x00429C98: slti        $v0, $s0, 0x8
    ctx->r2 = SIGNED(ctx->r16) < 0X8 ? 1 : 0;
    // 0x00429C9C: bne         $v0, $zero, L_00429C74
    if (ctx->r2 != 0) {
        // 0x00429CA0: addu        $a3, $s1, $zero
        ctx->r7 = ADD32(ctx->r17, 0);
            goto L_00429C74;
    }
    // 0x00429CA0: addu        $a3, $s1, $zero
    ctx->r7 = ADD32(ctx->r17, 0);
    // 0x00429CA4: lbu         $v1, 0x1($s5)
    ctx->r3 = MEM_BU(ctx->r21, 0X1);
    // 0x00429CA8: andi        $v0, $s4, 0xFF
    ctx->r2 = ctx->r20 & 0XFF;
    // 0x00429CAC: bne         $v0, $v1, L_00429D54
    if (ctx->r2 != ctx->r3) {
            // 0x00429CB0: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    entry_00429D54(rdram, ctx);
    return;
    }
    // 0x00429CB0: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x00429CB4: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x00429CB8: andi        $v0, $s7, 0xFF
    ctx->r2 = ctx->r23 & 0XFF;
    // 0x00429CBC: sll         $s3, $v0, 3
    ctx->r19 = S32(ctx->r2 << 3);
    // 0x00429CC0: addu        $s1, $s5, $zero
    ctx->r17 = ADD32(ctx->r21, 0);
    // 0x00429CC4: addu        $a3, $s1, $zero
    ctx->r7 = ADD32(ctx->r17, 0);
L_00429CC8:
    // 0x00429CC8: lhu         $a2, 0x56($s2)
    ctx->r6 = MEM_HU(ctx->r18, 0X56);
    // 0x00429CCC: addiu       $s1, $s1, 0x20
    ctx->r17 = ADD32(ctx->r17, 0X20);
    // 0x00429CD0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x00429CD4: lw          $a0, 0x4($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X4);
    // 0x00429CD8: lw          $a1, 0x8($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X8);
    // 0x00429CDC: addu        $a2, $a2, $s3
    ctx->r6 = ADD32(ctx->r6, ctx->r19);
    // 0x00429CE0: addu        $a2, $a2, $s0
    ctx->r6 = ADD32(ctx->r6, ctx->r16);
    // 0x00429CE4: jal         0x00299A40
    // 0x00429CE8: andi        $a2, $a2, 0xFFFF
    ctx->r6 = ctx->r6 & 0XFFFF;
    func_00299A40(rdram, ctx);
        goto after_5;
    // 0x00429CE8: andi        $a2, $a2, 0xFFFF
    ctx->r6 = ctx->r6 & 0XFFFF;
    after_5:
    // 0x00429CEC: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x00429CF0: slti        $v0, $s0, 0x8
    ctx->r2 = SIGNED(ctx->r16) < 0X8 ? 1 : 0;
    // 0x00429CF4: bne         $v0, $zero, L_00429CC8
    if (ctx->r2 != 0) {
        // 0x00429CF8: addu        $a3, $s1, $zero
        ctx->r7 = ADD32(ctx->r17, 0);
            goto L_00429CC8;
    }
    // 0x00429CF8: addu        $a3, $s1, $zero
    ctx->r7 = ADD32(ctx->r17, 0);
    // 0x00429CFC: j           L_00429D54
    // 0x00429D00: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    entry_00429D54(rdram, ctx);
    return;
    // 0x00429D00: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_00429D04:
    // 0x00429D04: j           L_00429D54
    // 0x00429D08: addu        $v0, $a0, $zero
    ctx->r2 = ADD32(ctx->r4, 0);
    entry_00429D54(rdram, ctx);
    return;
    // 0x00429D08: addu        $v0, $a0, $zero
    ctx->r2 = ADD32(ctx->r4, 0);
L_00429D0C:
    // 0x00429D0C: andi        $v0, $s7, 0xFF
    ctx->r2 = ctx->r23 & 0XFF;
    // 0x00429D10: sll         $s3, $v0, 3
    ctx->r19 = S32(ctx->r2 << 3);
    // 0x00429D14: addu        $s1, $s5, $zero
    ctx->r17 = ADD32(ctx->r21, 0);
    // 0x00429D18: addu        $a3, $s1, $zero
    ctx->r7 = ADD32(ctx->r17, 0);
    // turok2: reconnected split function: a stray ELF symbol at 0x00429D1C ended
    // this function early, leaving it without its epilogue. On the
    // hardware execution simply continues into the next instruction.
    func_00429D1C(rdram, ctx);
;}
RECOMP_FUNC void func_00211B24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00211B24: swc1        $f1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f_odd[(1 - 1) * 2];
    // 0x00211B28: jr          $ra
    // 0x00211B2C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x00211B2C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
;}
RECOMP_FUNC void func_002637C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002637C4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x002637C8: addu        $v0, $a0, $zero
    ctx->r2 = ADD32(ctx->r4, 0);
    // 0x002637CC: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x002637D0: addiu       $a0, $a0, 0x7078
    ctx->r4 = ADD32(ctx->r4, 0X7078);
    // 0x002637D4: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x002637D8: lhu         $a1, 0xA($v0)
    ctx->r5 = MEM_HU(ctx->r2, 0XA);
    // 0x002637DC: lhu         $a2, 0x4($v0)
    ctx->r6 = MEM_HU(ctx->r2, 0X4);
    // 0x002637E0: jal         0x002245BC
    // 0x002637E4: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_002245BC(rdram, ctx);
        goto after_0;
    // 0x002637E4: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_0:
    // 0x002637E8: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x002637EC: jr          $ra
    // 0x002637F0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x002637F0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00267094(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00267094: lw          $v1, 0x0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X0);
    // 0x00267098: sltiu       $v0, $v1, 0xD
    ctx->r2 = ctx->r3 < 0XD ? 1 : 0;
    // 0x0026709C: beq         $v0, $zero, L_002671A8
    if (ctx->r2 == 0) {
        // 0x002670A0: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_002671A8;
    }
    // 0x002670A0: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x002670A4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002670A8: addu        $at, $at, $v0
    gpr jr_addend_002670B0 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x002670AC: lw          $v0, 0x7D30($at)
    ctx->r2 = ADD32(ctx->r1, 0X7D30);
    // 0x002670B0: jr          $v0
    // 0x002670B4: nop

    switch (jr_addend_002670B0 >> 2) {
        case 0: goto L_00267100; break;
        case 1: goto L_0026712C; break;
        case 2: goto L_00267110; break;
        case 3: goto L_002671A8; break;
        case 4: goto L_00267168; break;
        case 5: goto L_00267168; break;
        case 6: goto L_002671A8; break;
        case 7: goto L_00267168; break;
        case 8: goto L_002670F8; break;
        case 9: goto L_002671A8; break;
        case 10: goto L_00267168; break;
        case 11: goto L_002670B8; break;
        case 12: goto L_00267198; break;
        default: switch_error(__func__, 0x002670B0, 0x800A7D30);
    }
    // 0x002670B4: nop

L_002670B8:
    // 0x002670B8: lbu         $v1, 0x0($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X0);
    // 0x002670BC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x002670C0: bne         $v1, $v0, L_002671AC
    if (ctx->r3 != ctx->r2) {
        // 0x002670C4: lui         $v1, 0x30
        ctx->r3 = S32(0X30 << 16);
            goto L_002671AC;
    }
    // 0x002670C4: lui         $v1, 0x30
    ctx->r3 = S32(0X30 << 16);
    // 0x002670C8: lw          $v0, 0xD4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XD4);
    // 0x002670CC: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x002670D0: beq         $v0, $zero, L_002670F8
    if (ctx->r2 == 0) {
        // 0x002670D4: nop
    
            goto L_002670F8;
    }
    // 0x002670D4: nop

    // 0x002670D8: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x002670DC: lbu         $v0, -0x550F($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X550F);
    // 0x002670E0: lw          $a0, 0x1A8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1A8);
    // 0x002670E4: beq         $v0, $zero, L_002670F8
    if (ctx->r2 == 0) {
        // 0x002670E8: nop
    
            goto L_002670F8;
    }
    // 0x002670E8: nop

    // 0x002670EC: lw          $v1, 0xBF8($a0)
    ctx->r3 = MEM_W(ctx->r4, 0XBF8);
    // 0x002670F0: bne         $v1, $zero, L_002671AC
    if (ctx->r3 != 0) {
        // 0x002670F4: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_002671AC;
    }
    // 0x002670F4: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_002670F8:
    // 0x002670F8: jr          $ra
    // 0x002670FC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x002670FC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_00267100:
    // 0x00267100: lw          $v0, 0x14($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X14);
    // 0x00267104: lw          $v0, 0x14($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X14);
    // 0x00267108: jr          $ra
    // 0x0026710C: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    return;
    // 0x0026710C: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
L_00267110:
    // 0x00267110: lbu         $v1, 0x0($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X0);
    // 0x00267114: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00267118: bne         $v1, $v0, L_00267188
    if (ctx->r3 != ctx->r2) {
        // 0x0026711C: lui         $v0, 0x1
        ctx->r2 = S32(0X1 << 16);
            goto L_00267188;
    }
    // 0x0026711C: lui         $v0, 0x1
    ctx->r2 = S32(0X1 << 16);
    // 0x00267120: lw          $v1, 0xD4($a0)
    ctx->r3 = MEM_W(ctx->r4, 0XD4);
    // 0x00267124: jr          $ra
    // 0x00267128: and         $v0, $v1, $v0
    ctx->r2 = ctx->r3 & ctx->r2;
    return;
    // 0x00267128: and         $v0, $v1, $v0
    ctx->r2 = ctx->r3 & ctx->r2;
L_0026712C:
    // 0x0026712C: lbu         $v1, 0x0($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X0);
    // 0x00267130: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00267134: bne         $v1, $v0, L_00267188
    if (ctx->r3 != ctx->r2) {
        // 0x00267138: nop
    
            goto L_00267188;
    }
    // 0x00267138: nop

    // 0x0026713C: lw          $v0, 0xD4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XD4);
    // 0x00267140: andi        $v0, $v0, 0x2000
    ctx->r2 = ctx->r2 & 0X2000;
    // 0x00267144: beq         $v0, $zero, L_00267188
    if (ctx->r2 == 0) {
        // 0x00267148: nop
    
            goto L_00267188;
    }
    // 0x00267148: nop

    // 0x0026714C: lw          $a0, 0x170($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X170);
    // 0x00267150: beq         $a0, $zero, L_00267188
    if (ctx->r4 == 0) {
        // 0x00267154: lui         $v1, 0x1
        ctx->r3 = S32(0X1 << 16);
            goto L_00267188;
    }
    // 0x00267154: lui         $v1, 0x1
    ctx->r3 = S32(0X1 << 16);
    // 0x00267158: lw          $v0, 0x1C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X1C);
    // 0x0026715C: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x00267160: jr          $ra
    // 0x00267164: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    return;
    // 0x00267164: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
L_00267168:
    // 0x00267168: lbu         $v1, 0x0($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X0);
    // 0x0026716C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00267170: bne         $v1, $v0, L_00267188
    if (ctx->r3 != ctx->r2) {
        // 0x00267174: nop
    
            goto L_00267188;
    }
    // 0x00267174: nop

    // 0x00267178: lw          $a0, 0xD4($a0)
    ctx->r4 = MEM_W(ctx->r4, 0XD4);
    // 0x0026717C: andi        $v0, $a0, 0x2000
    ctx->r2 = ctx->r4 & 0X2000;
    // 0x00267180: bne         $v0, $zero, L_00267190
    if (ctx->r2 != 0) {
        // 0x00267184: lui         $v0, 0x1
        ctx->r2 = S32(0X1 << 16);
            goto L_00267190;
    }
    // 0x00267184: lui         $v0, 0x1
    ctx->r2 = S32(0X1 << 16);
L_00267188:
    // 0x00267188: jr          $ra
    // 0x0026718C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x0026718C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_00267190:
    // 0x00267190: jr          $ra
    // 0x00267194: and         $v0, $a0, $v0
    ctx->r2 = ctx->r4 & ctx->r2;
    return;
    // 0x00267194: and         $v0, $a0, $v0
    ctx->r2 = ctx->r4 & ctx->r2;
L_00267198:
    // 0x00267198: lw          $v0, 0x14($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X14);
    // 0x0026719C: lw          $v0, 0x14($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X14);
    // 0x002671A0: jr          $ra
    // 0x002671A4: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    return;
    // 0x002671A4: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
L_002671A8:
    // 0x002671A8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_002671AC:
    // 0x002671AC: jr          $ra
    // 0x002671B0: nop

    return;
    // 0x002671B0: nop

;}
RECOMP_FUNC void func_00402F90(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00402F90: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x00402F94: sw          $zero, -0xC5C($at)
    MEM_W(-0XC5C, ctx->r1) = 0;
    // 0x00402F98: jr          $ra
    // 0x00402F9C: nop

    return;
    // 0x00402F9C: nop

;}
RECOMP_FUNC void func_0042C758(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0042C758: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0042C75C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // turok2: reconnected split function: a stray ELF symbol at 0x0042C760 ended
    // this function early, leaving it without its epilogue. On the
    // hardware execution simply continues into the next instruction.
    func_0042C760(rdram, ctx);
;}
RECOMP_FUNC void func_00423CF4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00423CF4: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00423CF8: addiu       $v0, $v0, 0x51CC
    ctx->r2 = ADD32(ctx->r2, 0X51CC);
    // 0x00423CFC: j           L_00423D30
    // 0x00423D00: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    func_00423D30(rdram, ctx);
    return;
    // 0x00423D00: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    // turok2: reconnected split function: a stray ELF symbol at 0x00423D04 ended
    // this function early, leaving it without its epilogue. On the
    // hardware execution simply continues into the next instruction.
    func_00423D04(rdram, ctx);
;}
RECOMP_FUNC void func_00247170(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00247170: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00247174: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00247178: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x0024717C: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x00247180: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x00247184: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00247188: lw          $v1, 0x0($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X0);
    // 0x0024718C: addiu       $v0, $zero, 0xC83
    ctx->r2 = ADD32(0, 0XC83);
    // 0x00247190: bne         $v1, $v0, L_002471E4
    if (ctx->r3 != ctx->r2) {
        // 0x00247194: addu        $s2, $a1, $zero
        ctx->r18 = ADD32(ctx->r5, 0);
            goto L_002471E4;
    }
    // 0x00247194: addu        $s2, $a1, $zero
    ctx->r18 = ADD32(ctx->r5, 0);
    // 0x00247198: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0024719C: lwc1        $f0, 0x6A00($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6A00);
    // 0x002471A0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002471A4: lwc1        $f1, 0x6A04($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X6A04);
    // 0x002471A8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002471AC: lwc1        $f2, 0x6A08($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X6A08);
    // 0x002471B0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002471B4: lwc1        $f3, 0x6A0C($at)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r1, 0X6A0C);
    // 0x002471B8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002471BC: lwc1        $f4, 0x6A10($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X6A10);
    // 0x002471C0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002471C4: lwc1        $f5, 0x6A14($at)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r1, 0X6A14);
    // 0x002471C8: swc1        $f0, 0xA8($s0)
    MEM_W(0XA8, ctx->r16) = ctx->f0.u32l;
    // 0x002471CC: swc1        $f1, 0xAC($s0)
    MEM_W(0XAC, ctx->r16) = ctx->f_odd[(1 - 1) * 2];
    // 0x002471D0: swc1        $f2, 0xB0($s0)
    MEM_W(0XB0, ctx->r16) = ctx->f2.u32l;
    // 0x002471D4: swc1        $f3, 0x90($s0)
    MEM_W(0X90, ctx->r16) = ctx->f_odd[(3 - 1) * 2];
    // 0x002471D8: swc1        $f4, 0x94($s0)
    MEM_W(0X94, ctx->r16) = ctx->f4.u32l;
    // 0x002471DC: j           L_00247230
    // 0x002471E0: swc1        $f5, 0x98($s0)
    MEM_W(0X98, ctx->r16) = ctx->f_odd[(5 - 1) * 2];
        goto L_00247230;
    // 0x002471E0: swc1        $f5, 0x98($s0)
    MEM_W(0X98, ctx->r16) = ctx->f_odd[(5 - 1) * 2];
L_002471E4:
    // 0x002471E4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002471E8: lwc1        $f0, 0x6A18($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6A18);
    // 0x002471EC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002471F0: lwc1        $f1, 0x6A1C($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X6A1C);
    // 0x002471F4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002471F8: lwc1        $f2, 0x6A20($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X6A20);
    // 0x002471FC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00247200: lwc1        $f3, 0x6A24($at)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r1, 0X6A24);
    // 0x00247204: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00247208: lwc1        $f4, 0x6A28($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X6A28);
    // 0x0024720C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00247210: lwc1        $f5, 0x6A2C($at)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r1, 0X6A2C);
    // 0x00247214: sw          $zero, 0xA8($s0)
    MEM_W(0XA8, ctx->r16) = 0;
    // 0x00247218: swc1        $f0, 0xAC($s0)
    MEM_W(0XAC, ctx->r16) = ctx->f0.u32l;
    // 0x0024721C: swc1        $f1, 0xB0($s0)
    MEM_W(0XB0, ctx->r16) = ctx->f_odd[(1 - 1) * 2];
    // 0x00247220: swc1        $f2, 0x90($s0)
    MEM_W(0X90, ctx->r16) = ctx->f2.u32l;
    // 0x00247224: swc1        $f3, 0x94($s0)
    MEM_W(0X94, ctx->r16) = ctx->f_odd[(3 - 1) * 2];
    // 0x00247228: swc1        $f4, 0x98($s0)
    MEM_W(0X98, ctx->r16) = ctx->f4.u32l;
    // 0x0024722C: swc1        $f5, 0xA0($s0)
    MEM_W(0XA0, ctx->r16) = ctx->f_odd[(5 - 1) * 2];
L_00247230:
    // 0x00247230: lw          $a1, 0x4($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X4);
    // 0x00247234: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x00247238: beq         $a1, $v0, L_00247288
    if (ctx->r5 == ctx->r2) {
        // 0x0024723C: nop
    
            goto L_00247288;
    }
    // 0x0024723C: nop

    // 0x00247240: lw          $v0, 0xB4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XB4);
    // 0x00247244: bne         $v0, $zero, L_00247288
    if (ctx->r2 != 0) {
        // 0x00247248: nop
    
            goto L_00247288;
    }
    // 0x00247248: nop

    // 0x0024724C: lui         $s1, 0x800F
    ctx->r17 = S32(0X800F << 16);
    // 0x00247250: addiu       $s1, $s1, 0x7078
    ctx->r17 = ADD32(ctx->r17, 0X7078);
    // 0x00247254: jal         0x00224180
    // 0x00247258: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_00224180(rdram, ctx);
        goto after_0;
    // 0x00247258: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_0:
    // 0x0024725C: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x00247260: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x00247264: beql        $a1, $v0, L_00247288
    if (ctx->r5 == ctx->r2) {
        // 0x00247268: sw          $zero, 0x8($s0)
        MEM_W(0X8, ctx->r16) = 0;
            goto L_00247288;
    }
    goto skip_0;
    // 0x00247268: sw          $zero, 0x8($s0)
    MEM_W(0X8, ctx->r16) = 0;
    skip_0:
    // 0x0024726C: jal         0x00224F84
    // 0x00247270: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_00224F84(rdram, ctx);
        goto after_1;
    // 0x00247270: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_1:
    // 0x00247274: lw          $v1, 0x4($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X4);
    // 0x00247278: sw          $v0, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r2;
    // 0x0024727C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00247280: sw          $v0, 0xB4($s0)
    MEM_W(0XB4, ctx->r16) = ctx->r2;
    // 0x00247284: sw          $v1, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r3;
L_00247288:
    // 0x00247288: lw          $v1, 0xB4($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XB4);
    // 0x0024728C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00247290: beq         $v1, $v0, L_002472B8
    if (ctx->r3 == ctx->r2) {
        // 0x00247294: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_002472B8;
    }
    // 0x00247294: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x00247298: bne         $v0, $zero, L_00247420
    if (ctx->r2 != 0) {
        // 0x0024729C: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_00247420;
    }
    // 0x0024729C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x002472A0: beq         $v1, $v0, L_00247420
    if (ctx->r3 == ctx->r2) {
        // 0x002472A4: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_00247420;
    }
    // 0x002472A4: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x002472A8: beq         $v1, $v0, L_0024734C
    if (ctx->r3 == ctx->r2) {
        // 0x002472AC: nop
    
            goto L_0024734C;
    }
    // 0x002472AC: nop

    // 0x002472B0: j           L_00247420
    // 0x002472B4: nop

        goto L_00247420;
    // 0x002472B4: nop

L_002472B8:
    // 0x002472B8: lwc1        $f0, 0xB8($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0XB8);
    // 0x002472BC: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x002472C0: lwc1        $f1, 0x6D28($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X6D28);
    // 0x002472C4: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x002472C8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002472CC: lwc1        $f1, 0x6A30($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X6A30);
    // 0x002472D0: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x002472D4: nop

    // 0x002472D8: bc1f        L_002472EC
    if (!c1cs) {
        // 0x002472DC: swc1        $f0, 0xB8($s0)
        MEM_W(0XB8, ctx->r16) = ctx->f0.u32l;
            goto L_002472EC;
    }
    // 0x002472DC: swc1        $f0, 0xB8($s0)
    MEM_W(0XB8, ctx->r16) = ctx->f0.u32l;
    // 0x002472E0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x002472E4: sw          $v0, 0xB4($s0)
    MEM_W(0XB4, ctx->r16) = ctx->r2;
    // 0x002472E8: swc1        $f1, 0xB8($s0)
    MEM_W(0XB8, ctx->r16) = ctx->f_odd[(1 - 1) * 2];
L_002472EC:
    // 0x002472EC: lw          $v1, 0x0($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X0);
    // 0x002472F0: addiu       $v0, $zero, 0xC83
    ctx->r2 = ADD32(0, 0XC83);
    // 0x002472F4: bne         $v1, $v0, L_002473F4
    if (ctx->r3 != ctx->r2) {
        // 0x002472F8: nop
    
            goto L_002473F4;
    }
    // 0x002472F8: nop

    // 0x002472FC: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x00247300: lbu         $v0, -0x550F($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X550F);
    // 0x00247304: beq         $v0, $zero, L_00247318
    if (ctx->r2 == 0) {
        // 0x00247308: nop
    
            goto L_00247318;
    }
    // 0x00247308: nop

    // 0x0024730C: sw          $zero, 0xA0($s0)
    MEM_W(0XA0, ctx->r16) = 0;
    // 0x00247310: j           L_00247420
    // 0x00247314: sw          $zero, 0x9C($s0)
    MEM_W(0X9C, ctx->r16) = 0;
        goto L_00247420;
    // 0x00247314: sw          $zero, 0x9C($s0)
    MEM_W(0X9C, ctx->r16) = 0;
L_00247318:
    // 0x00247318: lwc1        $f1, 0xB8($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0XB8);
    // 0x0024731C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00247320: lwc1        $f0, 0x6A34($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6A34);
    // 0x00247324: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x00247328: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0024732C: lwc1        $f0, 0x6A38($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6A38);
    // 0x00247330: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x00247334: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00247338: lwc1        $f1, 0x6A3C($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X6A3C);
    // 0x0024733C: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00247340: sw          $zero, 0x9C($s0)
    MEM_W(0X9C, ctx->r16) = 0;
    // 0x00247344: j           L_00247420
    // 0x00247348: swc1        $f0, 0xA0($s0)
    MEM_W(0XA0, ctx->r16) = ctx->f0.u32l;
        goto L_00247420;
    // 0x00247348: swc1        $f0, 0xA0($s0)
    MEM_W(0XA0, ctx->r16) = ctx->f0.u32l;
L_0024734C:
    // 0x0024734C: lwc1        $f0, 0xB90($s2)
    ctx->f0.u32l = MEM_W(ctx->r18, 0XB90);
    // 0x00247350: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x00247354: c.eq.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl == ctx->f2.fl;
    // 0x00247358: nop

    // 0x0024735C: bc1f        L_0024738C
    if (!c1cs) {
        // 0x00247360: nop
    
            goto L_0024738C;
    }
    // 0x00247360: nop

    // 0x00247364: lwc1        $f0, 0xB8($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0XB8);
    // 0x00247368: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0024736C: lwc1        $f1, 0x6D28($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X6D28);
    // 0x00247370: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x00247374: c.le.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl <= ctx->f2.fl;
    // 0x00247378: nop

    // 0x0024737C: bc1f        L_0024738C
    if (!c1cs) {
        // 0x00247380: swc1        $f0, 0xB8($s0)
        MEM_W(0XB8, ctx->r16) = ctx->f0.u32l;
            goto L_0024738C;
    }
    // 0x00247380: swc1        $f0, 0xB8($s0)
    MEM_W(0XB8, ctx->r16) = ctx->f0.u32l;
    // 0x00247384: sw          $zero, 0xB4($s0)
    MEM_W(0XB4, ctx->r16) = 0;
    // 0x00247388: swc1        $f2, 0xB8($s0)
    MEM_W(0XB8, ctx->r16) = ctx->f2.u32l;
L_0024738C:
    // 0x0024738C: lw          $v1, 0x0($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X0);
    // 0x00247390: addiu       $v0, $zero, 0xC83
    ctx->r2 = ADD32(0, 0XC83);
    // 0x00247394: bne         $v1, $v0, L_002473F4
    if (ctx->r3 != ctx->r2) {
        // 0x00247398: nop
    
            goto L_002473F4;
    }
    // 0x00247398: nop

    // 0x0024739C: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x002473A0: lbu         $v0, -0x550F($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X550F);
    // 0x002473A4: beq         $v0, $zero, L_002473B4
    if (ctx->r2 == 0) {
        // 0x002473A8: nop
    
            goto L_002473B4;
    }
    // 0x002473A8: nop

    // 0x002473AC: j           L_00247420
    // 0x002473B0: sw          $zero, 0xA0($s0)
    MEM_W(0XA0, ctx->r16) = 0;
        goto L_00247420;
    // 0x002473B0: sw          $zero, 0xA0($s0)
    MEM_W(0XA0, ctx->r16) = 0;
L_002473B4:
    // 0x002473B4: lwc1        $f1, 0xB8($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0XB8);
    // 0x002473B8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002473BC: lwc1        $f0, 0x6A40($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6A40);
    // 0x002473C0: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x002473C4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002473C8: lwc1        $f0, 0x6A44($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6A44);
    // 0x002473CC: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x002473D0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002473D4: lwc1        $f1, 0x6A48($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X6A48);
    // 0x002473D8: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x002473DC: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x002473E0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002473E4: lwc1        $f1, 0x6A4C($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X6A4C);
    // 0x002473E8: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x002473EC: j           L_00247420
    // 0x002473F0: swc1        $f0, 0xA0($s0)
    MEM_W(0XA0, ctx->r16) = ctx->f0.u32l;
        goto L_00247420;
    // 0x002473F0: swc1        $f0, 0xA0($s0)
    MEM_W(0XA0, ctx->r16) = ctx->f0.u32l;
L_002473F4:
    // 0x002473F4: lwc1        $f1, 0xB8($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0XB8);
    // 0x002473F8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002473FC: lwc1        $f0, 0x6A50($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6A50);
    // 0x00247400: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x00247404: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00247408: lwc1        $f0, 0x6A54($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6A54);
    // 0x0024740C: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x00247410: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00247414: lwc1        $f1, 0x6A58($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X6A58);
    // 0x00247418: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0024741C: swc1        $f0, 0x9C($s0)
    MEM_W(0X9C, ctx->r16) = ctx->f0.u32l;
L_00247420:
    // 0x00247420: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x00247424: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x00247428: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x0024742C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00247430: jr          $ra
    // 0x00247434: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00247434: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_0041C0F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041C0F4: lw          $v0, 0x1C($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X1C);
    // 0x0041C0F8: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x0041C0FC: addiu       $v1, $v1, -0x54E8
    ctx->r3 = ADD32(ctx->r3, -0X54E8);
    // 0x0041C100: beq         $v0, $zero, L_0041C114
    if (ctx->r2 == 0) {
        // 0x0041C104: nop
    
            goto L_0041C114;
    }
    // 0x0041C104: nop

    // 0x0041C108: lw          $v0, 0x518($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X518);
    // 0x0041C10C: bnel        $v0, $zero, L_0041C114
    if (ctx->r2 != 0) {
        // 0x0041C110: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_0041C114;
    }
    goto skip_0;
    // 0x0041C110: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    skip_0:
L_0041C114:
    // 0x0041C114: lbu         $v1, 0x2D($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X2D);
    // 0x0041C118: beq         $v1, $zero, L_0041C130
    if (ctx->r3 == 0) {
        // 0x0041C11C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_0041C130;
    }
    // 0x0041C11C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0041C120: beq         $v1, $v0, L_0041C140
    if (ctx->r3 == ctx->r2) {
        // 0x0041C124: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_0041C140;
    }
    // 0x0041C124: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x0041C128: j           L_0041C150
    // 0x0041C12C: nop

        goto L_0041C150;
    // 0x0041C12C: nop

L_0041C130:
    // 0x0041C130: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0041C134: addiu       $v0, $v0, 0x3F48
    ctx->r2 = ADD32(ctx->r2, 0X3F48);
    // 0x0041C138: j           L_0041C14C
    // 0x0041C13C: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_0041C14C;
    // 0x0041C13C: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_0041C140:
    // 0x0041C140: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0041C144: addiu       $v0, $v0, 0x3F30
    ctx->r2 = ADD32(ctx->r2, 0X3F30);
    // 0x0041C148: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_0041C14C:
    // 0x0041C14C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_0041C150:
    // 0x0041C150: jr          $ra
    // 0x0041C154: nop

    return;
    // 0x0041C154: nop

;}
RECOMP_FUNC void func_0020192C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0020192C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x00201930: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00201934: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x00201938: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x0020193C: addu        $s2, $a1, $zero
    ctx->r18 = ADD32(ctx->r5, 0);
    // 0x00201940: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x00201944: addu        $s3, $a2, $zero
    ctx->r19 = ADD32(ctx->r6, 0);
    // 0x00201948: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x0020194C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x00201950: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x00201954: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00201958: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x0020195C: jal         0x0029E460
    // 0x00201960: addu        $s0, $s1, $a2
    ctx->r16 = ADD32(ctx->r17, ctx->r6);
    func_0029E460(rdram, ctx);
        goto after_0;
    // 0x00201960: addu        $s0, $s1, $a2
    ctx->r16 = ADD32(ctx->r17, ctx->r6);
    after_0:
    // 0x00201964: addiu       $a3, $s2, 0x8
    ctx->r7 = ADD32(ctx->r18, 0X8);
    // 0x00201968: lw          $a2, 0x4($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X4);
    // 0x0020196C: lw          $t0, 0x0($s1)
    ctx->r8 = MEM_W(ctx->r17, 0X0);
    // 0x00201970: blez        $a2, L_002019B4
    if (SIGNED(ctx->r6) <= 0) {
        // 0x00201974: addu        $a1, $zero, $zero
        ctx->r5 = ADD32(0, 0);
            goto L_002019B4;
    }
    // 0x00201974: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
L_00201978:
    // 0x00201978: blez        $t0, L_002019A4
    if (SIGNED(ctx->r8) <= 0) {
        // 0x0020197C: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_002019A4;
    }
    // 0x0020197C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x00201980: addu        $v1, $a1, $zero
    ctx->r3 = ADD32(ctx->r5, 0);
L_00201984:
    // 0x00201984: addu        $v0, $s0, $v1
    ctx->r2 = ADD32(ctx->r16, ctx->r3);
    // 0x00201988: addu        $v1, $v1, $a2
    ctx->r3 = ADD32(ctx->r3, ctx->r6);
    // 0x0020198C: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x00201990: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x00201994: sb          $v0, 0x0($a3)
    MEM_B(0X0, ctx->r7) = ctx->r2;
    // 0x00201998: slt         $v0, $a0, $t0
    ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x0020199C: bne         $v0, $zero, L_00201984
    if (ctx->r2 != 0) {
        // 0x002019A0: addiu       $a3, $a3, 0x1
        ctx->r7 = ADD32(ctx->r7, 0X1);
            goto L_00201984;
    }
    // 0x002019A0: addiu       $a3, $a3, 0x1
    ctx->r7 = ADD32(ctx->r7, 0X1);
L_002019A4:
    // 0x002019A4: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x002019A8: slt         $v0, $a1, $a2
    ctx->r2 = SIGNED(ctx->r5) < SIGNED(ctx->r6) ? 1 : 0;
    // 0x002019AC: bne         $v0, $zero, L_00201978
    if (ctx->r2 != 0) {
        // 0x002019B0: nop
    
            goto L_00201978;
    }
    // 0x002019B0: nop

L_002019B4:
    // 0x002019B4: mult        $a2, $t0
    result = S64(S32(ctx->r6)) * S64(S32(ctx->r8)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x002019B8: beq         $s3, $zero, L_002019D4
    if (ctx->r19 == 0) {
        // 0x002019BC: nop
    
            goto L_002019D4;
    }
    // 0x002019BC: nop

    // 0x002019C0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x002019C4: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x002019C8: mflo        $t1
    ctx->r9 = lo;
    // 0x002019CC: jal         0x0029E460
    // 0x002019D0: addiu       $a2, $t1, 0x8
    ctx->r6 = ADD32(ctx->r9, 0X8);
    func_0029E460(rdram, ctx);
        goto after_1;
    // 0x002019D0: addiu       $a2, $t1, 0x8
    ctx->r6 = ADD32(ctx->r9, 0X8);
    after_1:
L_002019D4:
    // 0x002019D4: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x002019D8: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x002019DC: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x002019E0: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x002019E4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x002019E8: jr          $ra
    // 0x002019EC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x002019EC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_0026D070(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0026D070: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0026D074: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x0026D078: lw          $v0, 0x8($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X8);
    // 0x0026D07C: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
    // 0x0026D080: lbu         $v0, 0xC($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0XC);
    // 0x0026D084: sb          $v0, 0x10($a0)
    MEM_B(0X10, ctx->r4) = ctx->r2;
    // 0x0026D088: lbu         $v0, 0xD($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0XD);
    // 0x0026D08C: sb          $v0, 0x11($a0)
    MEM_B(0X11, ctx->r4) = ctx->r2;
    // 0x0026D090: lbu         $v0, 0xE($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0XE);
    // 0x0026D094: sb          $v0, 0x12($a0)
    MEM_B(0X12, ctx->r4) = ctx->r2;
    // 0x0026D098: lbu         $v0, 0xF($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0XF);
    // 0x0026D09C: sb          $v0, 0x13($a0)
    MEM_B(0X13, ctx->r4) = ctx->r2;
    // 0x0026D0A0: lbu         $v0, 0x10($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X10);
    // 0x0026D0A4: sb          $v0, 0x14($a0)
    MEM_B(0X14, ctx->r4) = ctx->r2;
    // 0x0026D0A8: lbu         $v0, 0x11($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X11);
    // 0x0026D0AC: sb          $v0, 0x15($a0)
    MEM_B(0X15, ctx->r4) = ctx->r2;
    // 0x0026D0B0: lbu         $v0, 0x12($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X12);
    // 0x0026D0B4: sb          $v0, 0x16($a0)
    MEM_B(0X16, ctx->r4) = ctx->r2;
    // 0x0026D0B8: lbu         $v0, 0x13($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X13);
    // 0x0026D0BC: sb          $v0, 0x17($a0)
    MEM_B(0X17, ctx->r4) = ctx->r2;
    // 0x0026D0C0: lhu         $v0, 0x14($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X14);
    // 0x0026D0C4: sh          $v0, 0x18($a0)
    MEM_H(0X18, ctx->r4) = ctx->r2;
    // 0x0026D0C8: lhu         $v0, 0x16($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X16);
    // 0x0026D0CC: sh          $v0, 0x1A($a0)
    MEM_H(0X1A, ctx->r4) = ctx->r2;
    // 0x0026D0D0: lw          $v0, 0x8($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X8);
    // 0x0026D0D4: andi        $v0, $v0, 0x40
    ctx->r2 = ctx->r2 & 0X40;
    // 0x0026D0D8: beq         $v0, $zero, L_0026D0F0
    if (ctx->r2 == 0) {
        // 0x0026D0DC: nop
    
            goto L_0026D0F0;
    }
    // 0x0026D0DC: nop

    // 0x0026D0E0: lw          $v0, 0x4($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X4);
    // 0x0026D0E4: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x0026D0E8: j           L_0026D0F8
    // 0x0026D0EC: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
        goto L_0026D0F8;
    // 0x0026D0EC: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
L_0026D0F0:
    // 0x0026D0F0: lw          $v0, 0x4($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X4);
    // 0x0026D0F4: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
L_0026D0F8:
    // 0x0026D0F8: sw          $v0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r2;
    // 0x0026D0FC: lw          $a1, 0x0($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X0);
    // 0x0026D100: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x0026D104: bne         $a1, $v0, L_0026D114
    if (ctx->r5 != ctx->r2) {
        // 0x0026D108: nop
    
            goto L_0026D114;
    }
    // 0x0026D108: nop

    // 0x0026D10C: j           L_0026D11C
    // 0x0026D110: sw          $zero, 0x8($a0)
    MEM_W(0X8, ctx->r4) = 0;
        goto L_0026D11C;
    // 0x0026D110: sw          $zero, 0x8($a0)
    MEM_W(0X8, ctx->r4) = 0;
L_0026D114:
    // 0x0026D114: jal         0x00207914
    // 0x0026D118: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    entry_00207914(rdram, ctx);
        goto after_0;
    // 0x0026D118: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    after_0:
L_0026D11C:
    // 0x0026D11C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x0026D120: jr          $ra
    // 0x0026D124: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0026D124: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0042EB50(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0042EB50: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0042EB54: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0042EB58: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x0042EB5C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x0042EB60: sw          $zero, 0x90($s0)
    MEM_W(0X90, ctx->r16) = 0;
    // 0x0042EB64: sw          $zero, 0x94($s0)
    MEM_W(0X94, ctx->r16) = 0;
    // 0x0042EB68: sw          $zero, 0x98($s0)
    MEM_W(0X98, ctx->r16) = 0;
    // 0x0042EB6C: jal         0x0042EBB4
    // 0x0042EB70: sw          $zero, 0x9C($s0)
    MEM_W(0X9C, ctx->r16) = 0;
    func_0042EBB4(rdram, ctx);
        goto after_0;
    // 0x0042EB70: sw          $zero, 0x9C($s0)
    MEM_W(0X9C, ctx->r16) = 0;
    after_0:
    // 0x0042EB74: jal         0x0027B40C
    // 0x0042EB78: nop

    func_0027B40C(rdram, ctx);
        goto after_1;
    // 0x0042EB78: nop

    after_1:
    // 0x0042EB7C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0042EB80: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x0042EB84: addiu       $a1, $a1, 0x2B78
    ctx->r5 = ADD32(ctx->r5, 0X2B78);
    // 0x0042EB88: jal         0x0027BA8C
    // 0x0042EB8C: addiu       $a2, $s0, 0xC8
    ctx->r6 = ADD32(ctx->r16, 0XC8);
    func_0027BA8C(rdram, ctx);
        goto after_2;
    // 0x0042EB8C: addiu       $a2, $s0, 0xC8
    ctx->r6 = ADD32(ctx->r16, 0XC8);
    after_2:
    // 0x0042EB90: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0042EB94: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x0042EB98: addiu       $a1, $a1, 0x2AC4
    ctx->r5 = ADD32(ctx->r5, 0X2AC4);
    // 0x0042EB9C: jal         0x0027BA8C
    // 0x0042EBA0: addiu       $a2, $a0, 0x148
    ctx->r6 = ADD32(ctx->r4, 0X148);
    func_0027BA8C(rdram, ctx);
        goto after_3;
    // 0x0042EBA0: addiu       $a2, $a0, 0x148
    ctx->r6 = ADD32(ctx->r4, 0X148);
    after_3:
    // 0x0042EBA4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x0042EBA8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0042EBAC: jr          $ra
    // 0x0042EBB0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0042EBB0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00255B20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00255B20: lwc1        $f1, 0xA78($a0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r4, 0XA78);
    // 0x00255B24: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00255B28: lwc1        $f2, 0x71AC($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X71AC);
    // 0x00255B2C: mul.s       $f1, $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f2.fl);
    // 0x00255B30: lwc1        $f0, 0xA7C($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0XA7C);
    // 0x00255B34: mul.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f2.fl);
    // 0x00255B38: swc1        $f1, 0xA78($a0)
    MEM_W(0XA78, ctx->r4) = ctx->f_odd[(1 - 1) * 2];
    // 0x00255B3C: swc1        $f0, 0xA7C($a0)
    MEM_W(0XA7C, ctx->r4) = ctx->f0.u32l;
    // 0x00255B40: lwc1        $f0, 0x1C($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X1C);
    // 0x00255B44: mul.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f2.fl);
    // 0x00255B48: jr          $ra
    // 0x00255B4C: swc1        $f0, 0x1C($a1)
    MEM_W(0X1C, ctx->r5) = ctx->f0.u32l;
    return;
    // 0x00255B4C: swc1        $f0, 0x1C($a1)
    MEM_W(0X1C, ctx->r5) = ctx->f0.u32l;
;}
RECOMP_FUNC void func_00402B94(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00402B94: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00402B98: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x00402B9C: jal         0x00412438
    // 0x00402BA0: addiu       $a0, $zero, 0x12C
    ctx->r4 = ADD32(0, 0X12C);
    func_00412438(rdram, ctx);
        goto after_0;
    // 0x00402BA0: addiu       $a0, $zero, 0x12C
    ctx->r4 = ADD32(0, 0X12C);
    after_0:
    // 0x00402BA4: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x00402BA8: jr          $ra
    // 0x00402BAC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00402BAC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00423130(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00423130: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x00423134: lw          $v0, 0x9AC($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X9AC);
    // 0x00423138: bne         $v0, $zero, L_00423170
    if (ctx->r2 != 0) {
        // 0x0042313C: nop
    
            goto L_00423170;
    }
    // 0x0042313C: nop

    // 0x00423140: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x00423144: lw          $v0, 0x998($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X998);
    // 0x00423148: beq         $v0, $zero, L_00423170
    if (ctx->r2 == 0) {
        // 0x0042314C: nop
    
            goto L_00423170;
    }
    // 0x0042314C: nop

    // 0x00423150: lw          $v0, 0x10($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X10);
    // 0x00423154: sltiu       $v0, $v0, 0x2
    ctx->r2 = ctx->r2 < 0X2 ? 1 : 0;
    // 0x00423158: beq         $v0, $zero, L_00423170
    if (ctx->r2 == 0) {
        // 0x0042315C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_00423170;
    }
    // 0x0042315C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00423160: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x00423164: sw          $v0, 0x9AC($at)
    MEM_W(0X9AC, ctx->r1) = ctx->r2;
    // 0x00423168: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0042316C: sw          $v0, 0x940($at)
    MEM_W(0X940, ctx->r1) = ctx->r2;
L_00423170:
    // 0x00423170: jr          $ra
    // 0x00423174: nop

    return;
    // 0x00423174: nop

;}
RECOMP_FUNC void func_00407C18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00407C18: jr          $ra
    // 0x00407C1C: nop

    return;
    // 0x00407C1C: nop

;}
RECOMP_FUNC void func_00447108(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_0040E1D8:
    // 0x00447108: addiu       $sp, $sp, -0xC8
    ctx->r29 = ADD32(ctx->r29, -0XC8);
L_0040E1E0:
    // 0x0044710C: sw          $s1, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->r17;
    // 0x00447110: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x00447114: sw          $s0, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->r16;
    // 0x00447118: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x0044711C: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    // 0x00447120: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x00447124: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00447128: sw          $ra, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->r31;
    // 0x0044712C: sdc1        $f21, 0xC0($sp)
    CHECK_FR(ctx, 21);
    SD(ctx->f21.u64, 0XC0, ctx->r29);
    // 0x00447130: sdc1        $f20, 0xB8($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0XB8, ctx->r29);
    // 0x00447134: jal         0x00246108
    // 0x00447138: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    func_00246108(rdram, ctx);
        goto after_0;
    // 0x00447138: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    after_0:
    // 0x0044713C: lwc1        $f0, 0x58($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X58);
    // 0x00447140: swc1        $f0, 0x11C($s0)
    MEM_W(0X11C, ctx->r16) = ctx->f0.u32l;
    // 0x00447144: lhu         $v1, 0xB8($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0XB8);
    // 0x00447148: addiu       $v0, $zero, 0x455
    ctx->r2 = ADD32(0, 0X455);
    // 0x0044714C: beq         $v1, $v0, L_004471A8
    if (ctx->r3 == ctx->r2) {
        // 0x00447150: slti        $v0, $v1, 0x456
        ctx->r2 = SIGNED(ctx->r3) < 0X456 ? 1 : 0;
            goto L_004471A8;
    }
    // 0x00447150: slti        $v0, $v1, 0x456
    ctx->r2 = SIGNED(ctx->r3) < 0X456 ? 1 : 0;
    // 0x00447154: beq         $v0, $zero, L_0044716C
    if (ctx->r2 == 0) {
        // 0x00447158: addiu       $v0, $zero, 0x454
        ctx->r2 = ADD32(0, 0X454);
            goto L_0044716C;
    }
    // 0x00447158: addiu       $v0, $zero, 0x454
    ctx->r2 = ADD32(0, 0X454);
    // 0x0044715C: beq         $v1, $v0, L_00447180
    if (ctx->r3 == ctx->r2) {
        // 0x00447160: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_00447180;
    }
    // 0x00447160: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x00447164: j           L_0040E1D8
    // 0x00447168: nop

    entry_0040E1D8(rdram, ctx);
    return;
    // 0x00447168: nop

L_0044716C:
    // 0x0044716C: addiu       $v0, $zero, 0x456
    ctx->r2 = ADD32(0, 0X456);
    // 0x00447170: beq         $v1, $v0, L_004471C0
    if (ctx->r3 == ctx->r2) {
        // 0x00447174: nop
    
            goto L_004471C0;
    }
    // 0x00447174: nop

    // 0x00447178: j           L_0040E1D8
    // 0x0044717C: nop

    entry_0040E1D8(rdram, ctx);
    return;
    // 0x0044717C: nop

L_00447180:
    // 0x00447180: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00447184: lwc1        $f21, 0x910($at)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r1, 0X910);
    // 0x00447188: lui         $a2, 0xBFC9
    ctx->r6 = S32(0XBFC9 << 16);
    // 0x0044718C: ori         $a2, $a2, 0xFDC
    ctx->r6 = ctx->r6 | 0XFDC;
    // 0x00447190: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00447194: lwc1        $f20, 0x914($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X914);
    // 0x00447198: jal         0x0025AD90
    // 0x0044719C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_0025AD90(rdram, ctx);
        goto after_1;
    // 0x0044719C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_1:
    // 0x004471A0: j           L_0040E1E0
    // 0x004471A4: sw          $zero, 0x24($s0)
    MEM_W(0X24, ctx->r16) = 0;
    entry_0040E1E0(rdram, ctx);
    return;
    // 0x004471A4: sw          $zero, 0x24($s0)
    MEM_W(0X24, ctx->r16) = 0;
L_004471A8:
    // 0x004471A8: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x004471AC: lwc1        $f21, 0x918($at)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r1, 0X918);
    // 0x004471B0: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x004471B4: lwc1        $f20, 0x91C($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X91C);
    // 0x004471B8: j           L_0040E1E0
    // 0x004471BC: nop

    entry_0040E1E0(rdram, ctx);
    return;
    // 0x004471BC: nop

L_004471C0:
    // 0x004471C0: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x004471C4: lwc1        $f21, 0x920($at)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r1, 0X920);
    // 0x004471C8: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x004471CC: lwc1        $f20, 0x924($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X924);
    // 0x004471D0: j           L_0040E1E0
    // 0x004471D4: nop

    entry_0040E1E0(rdram, ctx);
    return;
    // 0x004471D4: nop

    // 0x004471D8: mtc1        $zero, $f21
    ctx->f_odd[(21 - 1) * 2] = 0;
    // 0x004471DC: mov.s       $f20, $f21
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 21);
    ctx->f20.fl = ctx->f21.fl;
    // 0x004471E0: lwc1        $f0, 0x50($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X50);
    // 0x004471E4: lwc1        $f1, 0x98($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X98);
    // 0x004471E8: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x004471EC: addiu       $a0, $sp, 0xA0
    ctx->r4 = ADD32(ctx->r29, 0XA0);
    // 0x004471F0: jal         0x00210EF0
    // 0x004471F4: swc1        $f0, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->f0.u32l;
    func_00210EF0(rdram, ctx);
        goto after_2;
    // 0x004471F4: swc1        $f0, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->f0.u32l;
    after_2:
    // 0x004471F8: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x004471FC: lwc1        $f0, 0x928($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X928);
    // 0x00447200: lwc1        $f3, 0x20($sp)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x00447204: c.lt.s      $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f20.fl < ctx->f0.fl;
    // 0x00447208: nop

    // 0x0044720C: bc1f        L_00447250
    if (!c1cs) {
        // 0x00447210: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_00447250;
    }
    // 0x00447210: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x00447214: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00447218: lwc1        $f0, 0x92C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X92C);
    // 0x0044721C: mul.s       $f0, $f20, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f20.fl, ctx->f0.fl);
    // 0x00447220: lwc1        $f1, 0xA0($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0XA0);
    // 0x00447224: add.s       $f2, $f1, $f3
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f2.fl = ctx->f1.fl + ctx->f3.fl;
    // 0x00447228: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x0044722C: nop

    // 0x00447230: bc1tl       L_00447250
    if (c1cs) {
        // 0x00447234: sub.s       $f3, $f0, $f1
        CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f3.fl = ctx->f0.fl - ctx->f1.fl;
            goto L_00447250;
    }
    goto skip_0;
    // 0x00447234: sub.s       $f3, $f0, $f1
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f3.fl = ctx->f0.fl - ctx->f1.fl;
    skip_0:
    // 0x00447238: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x0044723C: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x00447240: nop

    // 0x00447244: bc1f        L_00447250
    if (!c1cs) {
        // 0x00447248: nop
    
            goto L_00447250;
    }
    // 0x00447248: nop

    // 0x0044724C: sub.s       $f3, $f0, $f1
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f3.fl = ctx->f0.fl - ctx->f1.fl;
L_00447250:
    // 0x00447250: mfc1        $a2, $f21
    ctx->r6 = (int32_t)ctx->f_odd[(21 - 1) * 2];
    // 0x00447254: mfc1        $a3, $f3
    ctx->r7 = (int32_t)ctx->f_odd[(3 - 1) * 2];
    // 0x00447258: jal         0x00245BAC
    // 0x0044725C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_00245BAC(rdram, ctx);
        goto after_3;
    // 0x0044725C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_3:
    // 0x00447260: lw          $ra, 0xB0($sp)
    ctx->r31 = MEM_W(ctx->r29, 0XB0);
    // 0x00447264: lw          $s1, 0xAC($sp)
    ctx->r17 = MEM_W(ctx->r29, 0XAC);
    // 0x00447268: lw          $s0, 0xA8($sp)
    ctx->r16 = MEM_W(ctx->r29, 0XA8);
    // 0x0044726C: ldc1        $f21, 0xC0($sp)
    CHECK_FR(ctx, 21);
    ctx->f21.u64 = LD(ctx->r29, 0XC0);
    // 0x00447270: ldc1        $f20, 0xB8($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0XB8);
    // 0x00447274: jr          $ra
    // 0x00447278: addiu       $sp, $sp, 0xC8
    ctx->r29 = ADD32(ctx->r29, 0XC8);
    return;
    // 0x00447278: addiu       $sp, $sp, 0xC8
    ctx->r29 = ADD32(ctx->r29, 0XC8);
;}
