#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_00454C64(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_00454C64:
    // 0x00454C64: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00454C68: addu        $at, $at, $a1
    ctx->r1 = ADD32(ctx->r1, ctx->r5);
    // 0x00454C6C: lbu         $v0, 0x5EA4($at)
    ctx->r2 = MEM_BU(ctx->r1, 0X5EA4);
    // 0x00454C70: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x00454C74: sb          $v0, 0x33($v1)
    MEM_B(0X33, ctx->r3) = ctx->r2;
    // 0x00454C78: slti        $v0, $a1, 0x8
    ctx->r2 = SIGNED(ctx->r5) < 0X8 ? 1 : 0;
    // 0x00454C7C: bne         $v0, $zero, L_00454C64
    if (ctx->r2 != 0) {
        // 0x00454C80: addu        $v1, $a0, $a1
        ctx->r3 = ADD32(ctx->r4, ctx->r5);
            goto L_00454C64;
    }
    // 0x00454C80: addu        $v1, $a0, $a1
    ctx->r3 = ADD32(ctx->r4, ctx->r5);
    // 0x00454C84: jr          $ra
    // 0x00454C88: nop

    return;
    // 0x00454C88: nop

;}
RECOMP_FUNC void func_004405F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004405F8: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x004405FC: lwc1        $f0, 0x51C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X51C);
    // 0x00440600: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x00440604: addiu       $a1, $a1, -0x624
    ctx->r5 = ADD32(ctx->r5, -0X624);
    // 0x00440608: swc1        $f0, 0x1FC($a0)
    MEM_W(0X1FC, ctx->r4) = ctx->f0.u32l;
    // 0x0044060C: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x00440610: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x00440614: bne         $v1, $v0, L_00440628
    if (ctx->r3 != ctx->r2) {
        // 0x00440618: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_00440628;
    }
    // 0x00440618: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x0044061C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00440620: lwc1        $f0, 0x520($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X520);
    // 0x00440624: swc1        $f0, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->f0.u32l;
L_00440628:
    // 0x00440628: bne         $v1, $v0, L_00440640
    if (ctx->r3 != ctx->r2) {
        // 0x0044062C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_00440640;
    }
    // 0x0044062C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00440630: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00440634: lwc1        $f0, 0x524($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X524);
    // 0x00440638: sb          $v0, -0xA($a1)
    MEM_B(-0XA, ctx->r5) = ctx->r2;
    // 0x0044063C: swc1        $f0, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->f0.u32l;
L_00440640:
    // 0x00440640: lw          $v0, 0xD4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XD4);
    // 0x00440644: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00440648: lwc1        $f0, 0x528($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X528);
    // 0x0044064C: ori         $v0, $v0, 0x2000
    ctx->r2 = ctx->r2 | 0X2000;
    // 0x00440650: sw          $v0, 0xD4($a0)
    MEM_W(0XD4, ctx->r4) = ctx->r2;
    // 0x00440654: jr          $ra
    // 0x00440658: swc1        $f0, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->f0.u32l;
    return;
    // 0x00440658: swc1        $f0, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->f0.u32l;
;}
RECOMP_FUNC void func_00259558(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00259558: addiu       $v0, $zero, 0x4F1A
    ctx->r2 = ADD32(0, 0X4F1A);
    // 0x0025955C: lwc1        $f0, 0x114($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X114);
    // 0x00259560: mtc1        $zero, $f1
    ctx->f_odd[(1 - 1) * 2] = 0;
    // 0x00259564: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x00259568: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x0025956C: nop

    // 0x00259570: bc1t        L_0025957C
    if (c1cs) {
        // 0x00259574: swc1        $f0, 0x114($a1)
        MEM_W(0X114, ctx->r5) = ctx->f0.u32l;
            goto L_0025957C;
    }
    // 0x00259574: swc1        $f0, 0x114($a1)
    MEM_W(0X114, ctx->r5) = ctx->f0.u32l;
    // 0x00259578: addiu       $v0, $zero, 0x4F24
    ctx->r2 = ADD32(0, 0X4F24);
L_0025957C:
    // 0x0025957C: jr          $ra
    // 0x00259580: nop

    return;
    // 0x00259580: nop

;}
RECOMP_FUNC void func_002927E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002927E8: lw          $v1, 0x24($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X24);
    // 0x002927EC: subu        $v1, $v1, $a1
    ctx->r3 = SUB32(ctx->r3, ctx->r5);
    // 0x002927F0: bgez        $v1, L_002927FC
    if (SIGNED(ctx->r3) >= 0) {
        // 0x002927F4: addu        $v0, $v1, $zero
        ctx->r2 = ADD32(ctx->r3, 0);
            goto L_002927FC;
    }
    // 0x002927F4: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
    // 0x002927F8: addiu       $v0, $zero, 0x3E8
    ctx->r2 = ADD32(0, 0X3E8);
L_002927FC:
    // 0x002927FC: jr          $ra
    // 0x00292800: nop

    return;
    // 0x00292800: nop

;}
RECOMP_FUNC void func_0045AD98(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_00421DEC:
    // 0x0045AD98: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x0045AD9C: lw          $v0, 0x201C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X201C);
    // 0x0045ADA0: lw          $v1, 0x508($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X508);
    // 0x0045ADA4: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x0045ADA8: beq         $v1, $v0, L_0045ADD0
    if (ctx->r3 == ctx->r2) {
        // 0x0045ADAC: sltiu       $v0, $v1, 0x11
        ctx->r2 = ctx->r3 < 0X11 ? 1 : 0;
            goto L_0045ADD0;
    }
    // 0x0045ADAC: sltiu       $v0, $v1, 0x11
    ctx->r2 = ctx->r3 < 0X11 ? 1 : 0;
    // 0x0045ADB0: bne         $v0, $zero, L_0045ADC0
    if (ctx->r2 != 0) {
        // 0x0045ADB4: addiu       $v0, $zero, 0x20
        ctx->r2 = ADD32(0, 0X20);
            goto L_0045ADC0;
    }
    // 0x0045ADB4: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x0045ADB8: beq         $v1, $v0, L_0045ADE0
    if (ctx->r3 == ctx->r2) {
        // 0x0045ADBC: nop
    
            goto L_0045ADE0;
    }
    // 0x0045ADBC: nop

L_0045ADC0:
    // 0x0045ADC0: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0045ADC4: addiu       $v0, $v0, 0x49DC
    ctx->r2 = ADD32(ctx->r2, 0X49DC);
    // 0x0045ADC8: j           L_00421DEC
    // 0x0045ADCC: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    entry_00421DEC(rdram, ctx);
    return;
    // 0x0045ADCC: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_0045ADD0:
    // 0x0045ADD0: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0045ADD4: addiu       $v0, $v0, 0x49F0
    ctx->r2 = ADD32(ctx->r2, 0X49F0);
    // 0x0045ADD8: j           L_00421DEC
    // 0x0045ADDC: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    entry_00421DEC(rdram, ctx);
    return;
    // 0x0045ADDC: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_0045ADE0:
    // 0x0045ADE0: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0045ADE4: addiu       $v0, $v0, 0x4A04
    ctx->r2 = ADD32(ctx->r2, 0X4A04);
    // 0x0045ADE8: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    // 0x0045ADEC: jr          $ra
    // 0x0045ADF0: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x0045ADF0: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void func_004145B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004145B0: addiu       $sp, $sp, -0xD0
    ctx->r29 = ADD32(ctx->r29, -0XD0);
    // 0x004145B4: sw          $s0, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->r16;
    // 0x004145B8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x004145BC: sw          $s1, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->r17;
    // 0x004145C0: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x004145C4: sw          $s2, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->r18;
    // 0x004145C8: addu        $s2, $a2, $zero
    ctx->r18 = ADD32(ctx->r6, 0);
    // 0x004145CC: sw          $s3, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->r19;
    // 0x004145D0: addu        $s3, $a3, $zero
    ctx->r19 = ADD32(ctx->r7, 0);
    // 0x004145D4: addiu       $a3, $sp, 0x18
    ctx->r7 = ADD32(ctx->r29, 0X18);
    // 0x004145D8: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    // 0x004145DC: sw          $ra, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->r31;
    // 0x004145E0: sw          $s4, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->r20;
    // 0x004145E4: lw          $v0, 0x14($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X14);
    // 0x004145E8: lw          $v1, 0x18($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X18);
    // 0x004145EC: addiu       $a0, $s0, 0x20
    ctx->r4 = ADD32(ctx->r16, 0X20);
    // 0x004145F0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x004145F4: srl         $v1, $v0, 31
    ctx->r3 = S32(U32(ctx->r2) >> 31);
    // 0x004145F8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x004145FC: sra         $s4, $v0, 1
    ctx->r20 = S32(SIGNED(ctx->r2) >> 1);
L_00414600:
    // 0x00414600: lw          $t1, 0x0($a2)
    ctx->r9 = MEM_W(ctx->r6, 0X0);
    // 0x00414604: lw          $t2, 0x4($a2)
    ctx->r10 = MEM_W(ctx->r6, 0X4);
    // 0x00414608: lw          $t3, 0x8($a2)
    ctx->r11 = MEM_W(ctx->r6, 0X8);
    // 0x0041460C: lw          $t4, 0xC($a2)
    ctx->r12 = MEM_W(ctx->r6, 0XC);
    // 0x00414610: sw          $t1, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r9;
    // 0x00414614: sw          $t2, 0x4($a3)
    MEM_W(0X4, ctx->r7) = ctx->r10;
    // 0x00414618: sw          $t3, 0x8($a3)
    MEM_W(0X8, ctx->r7) = ctx->r11;
    // 0x0041461C: sw          $t4, 0xC($a3)
    MEM_W(0XC, ctx->r7) = ctx->r12;
    // 0x00414620: addiu       $a2, $a2, 0x10
    ctx->r6 = ADD32(ctx->r6, 0X10);
    // 0x00414624: bne         $a2, $a0, L_00414600
    if (ctx->r6 != ctx->r4) {
        // 0x00414628: addiu       $a3, $a3, 0x10
        ctx->r7 = ADD32(ctx->r7, 0X10);
            goto L_00414600;
    }
    // 0x00414628: addiu       $a3, $a3, 0x10
    ctx->r7 = ADD32(ctx->r7, 0X10);
    // 0x0041462C: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    // 0x00414630: addiu       $a1, $sp, 0x40
    ctx->r5 = ADD32(ctx->r29, 0X40);
    // 0x00414634: lw          $t1, 0x0($a2)
    ctx->r9 = MEM_W(ctx->r6, 0X0);
    // 0x00414638: lw          $t2, 0x4($a2)
    ctx->r10 = MEM_W(ctx->r6, 0X4);
    // 0x0041463C: sw          $t1, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r9;
    // 0x00414640: sw          $t2, 0x4($a3)
    MEM_W(0X4, ctx->r7) = ctx->r10;
    // 0x00414644: jal         0x0041363C
    // 0x00414648: sh          $zero, 0x1C($sp)
    MEM_H(0X1C, ctx->r29) = 0;
    func_0041363C(rdram, ctx);
        goto after_0;
    // 0x00414648: sh          $zero, 0x1C($sp)
    MEM_H(0X1C, ctx->r29) = 0;
    after_0:
    // 0x0041464C: addiu       $v1, $sp, 0x18
    ctx->r3 = ADD32(ctx->r29, 0X18);
    // 0x00414650: addu        $v0, $s0, $zero
    ctx->r2 = ADD32(ctx->r16, 0);
    // 0x00414654: addiu       $a0, $s0, 0x20
    ctx->r4 = ADD32(ctx->r16, 0X20);
L_00414658:
    // 0x00414658: lw          $t1, 0x0($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X0);
    // 0x0041465C: lw          $t2, 0x4($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X4);
    // 0x00414660: lw          $t3, 0x8($v0)
    ctx->r11 = MEM_W(ctx->r2, 0X8);
    // 0x00414664: lw          $t4, 0xC($v0)
    ctx->r12 = MEM_W(ctx->r2, 0XC);
    // 0x00414668: sw          $t1, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r9;
    // 0x0041466C: sw          $t2, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r10;
    // 0x00414670: sw          $t3, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r11;
    // 0x00414674: sw          $t4, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r12;
    // 0x00414678: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
    // 0x0041467C: bne         $v0, $a0, L_00414658
    if (ctx->r2 != ctx->r4) {
        // 0x00414680: addiu       $v1, $v1, 0x10
        ctx->r3 = ADD32(ctx->r3, 0X10);
            goto L_00414658;
    }
    // 0x00414680: addiu       $v1, $v1, 0x10
    ctx->r3 = ADD32(ctx->r3, 0X10);
    // 0x00414684: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    // 0x00414688: addiu       $a1, $sp, 0x68
    ctx->r5 = ADD32(ctx->r29, 0X68);
    // 0x0041468C: lw          $t1, 0x0($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X0);
    // 0x00414690: lw          $t2, 0x4($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X4);
    // 0x00414694: sw          $t1, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r9;
    // 0x00414698: sw          $t2, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r10;
    // 0x0041469C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x004146A0: sh          $v0, 0x1C($sp)
    MEM_H(0X1C, ctx->r29) = ctx->r2;
    // 0x004146A4: jal         0x0041363C
    // 0x004146A8: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
    func_0041363C(rdram, ctx);
        goto after_1;
    // 0x004146A8: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
    after_1:
    // 0x004146AC: addiu       $v1, $sp, 0x18
    ctx->r3 = ADD32(ctx->r29, 0X18);
    // 0x004146B0: addu        $v0, $s0, $zero
    ctx->r2 = ADD32(ctx->r16, 0);
    // 0x004146B4: addiu       $a0, $s0, 0x20
    ctx->r4 = ADD32(ctx->r16, 0X20);
L_004146B8:
    // 0x004146B8: lw          $t1, 0x0($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X0);
    // 0x004146BC: lw          $t2, 0x4($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X4);
    // 0x004146C0: lw          $t3, 0x8($v0)
    ctx->r11 = MEM_W(ctx->r2, 0X8);
    // 0x004146C4: lw          $t4, 0xC($v0)
    ctx->r12 = MEM_W(ctx->r2, 0XC);
    // 0x004146C8: sw          $t1, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r9;
    // 0x004146CC: sw          $t2, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r10;
    // 0x004146D0: sw          $t3, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r11;
    // 0x004146D4: sw          $t4, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r12;
    // 0x004146D8: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
    // 0x004146DC: bne         $v0, $a0, L_004146B8
    if (ctx->r2 != ctx->r4) {
        // 0x004146E0: addiu       $v1, $v1, 0x10
        ctx->r3 = ADD32(ctx->r3, 0X10);
            goto L_004146B8;
    }
    // 0x004146E0: addiu       $v1, $v1, 0x10
    ctx->r3 = ADD32(ctx->r3, 0X10);
    // 0x004146E4: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    // 0x004146E8: addiu       $a1, $sp, 0x90
    ctx->r5 = ADD32(ctx->r29, 0X90);
    // 0x004146EC: lw          $t1, 0x0($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X0);
    // 0x004146F0: lw          $t2, 0x4($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X4);
    // 0x004146F4: sw          $t1, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r9;
    // 0x004146F8: sw          $t2, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r10;
    // 0x004146FC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00414700: sh          $v0, 0x1C($sp)
    MEM_H(0X1C, ctx->r29) = ctx->r2;
    // 0x00414704: jal         0x0041363C
    // 0x00414708: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
    func_0041363C(rdram, ctx);
        goto after_2;
    // 0x00414708: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
    after_2:
    // 0x0041470C: addiu       $v1, $sp, 0x18
    ctx->r3 = ADD32(ctx->r29, 0X18);
    // 0x00414710: addu        $v0, $s0, $zero
    ctx->r2 = ADD32(ctx->r16, 0);
    // 0x00414714: addiu       $a0, $s0, 0x20
    ctx->r4 = ADD32(ctx->r16, 0X20);
L_00414718:
    // 0x00414718: lw          $t1, 0x0($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X0);
    // 0x0041471C: lw          $t2, 0x4($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X4);
    // 0x00414720: lw          $t3, 0x8($v0)
    ctx->r11 = MEM_W(ctx->r2, 0X8);
    // 0x00414724: lw          $t4, 0xC($v0)
    ctx->r12 = MEM_W(ctx->r2, 0XC);
    // 0x00414728: sw          $t1, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r9;
    // 0x0041472C: sw          $t2, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r10;
    // 0x00414730: sw          $t3, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r11;
    // 0x00414734: sw          $t4, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r12;
    // 0x00414738: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
    // 0x0041473C: bne         $v0, $a0, L_00414718
    if (ctx->r2 != ctx->r4) {
        // 0x00414740: addiu       $v1, $v1, 0x10
        ctx->r3 = ADD32(ctx->r3, 0X10);
            goto L_00414718;
    }
    // 0x00414740: addiu       $v1, $v1, 0x10
    ctx->r3 = ADD32(ctx->r3, 0X10);
    // 0x00414744: lw          $t1, 0x0($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X0);
    // 0x00414748: lw          $t2, 0x4($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X4);
    // 0x0041474C: sw          $t1, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r9;
    // 0x00414750: sw          $t2, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r10;
    // 0x00414754: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
    // 0x00414758: lw          $v0, 0x1C($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X1C);
    // 0x0041475C: lw          $v1, 0x48($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X48);
    // 0x00414760: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x00414764: sw          $v0, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->r2;
    // 0x00414768: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
    // 0x0041476C: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x00414770: beq         $v0, $zero, L_00414798
    if (ctx->r2 == 0) {
        // 0x00414774: addiu       $a0, $sp, 0x18
        ctx->r4 = ADD32(ctx->r29, 0X18);
            goto L_00414798;
    }
    // 0x00414774: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    // 0x00414778: lw          $v0, 0x6C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X6C);
    // 0x0041477C: lw          $v1, 0x94($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X94);
    // 0x00414780: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x00414784: srl         $v1, $v0, 31
    ctx->r3 = S32(U32(ctx->r2) >> 31);
    // 0x00414788: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x0041478C: sra         $v0, $v0, 1
    ctx->r2 = S32(SIGNED(ctx->r2) >> 1);
    // 0x00414790: subu        $v0, $s4, $v0
    ctx->r2 = SUB32(ctx->r20, ctx->r2);
    // 0x00414794: sw          $v0, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r2;
L_00414798:
    // 0x00414798: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x0041479C: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    // 0x004147A0: lw          $v0, 0x94($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X94);
    // 0x004147A4: addu        $a3, $s3, $zero
    ctx->r7 = ADD32(ctx->r19, 0);
    // 0x004147A8: srl         $v1, $v0, 31
    ctx->r3 = S32(U32(ctx->r2) >> 31);
    // 0x004147AC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x004147B0: lw          $v1, 0x14($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X14);
    // 0x004147B4: sra         $v0, $v0, 1
    ctx->r2 = S32(SIGNED(ctx->r2) >> 1);
    // 0x004147B8: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x004147BC: jal         0x004143DC
    // 0x004147C0: sw          $v1, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r3;
    func_004143DC(rdram, ctx);
        goto after_3;
    // 0x004147C0: sw          $v1, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r3;
    after_3:
    // 0x004147C4: addiu       $v1, $sp, 0x18
    ctx->r3 = ADD32(ctx->r29, 0X18);
    // 0x004147C8: addu        $v0, $s0, $zero
    ctx->r2 = ADD32(ctx->r16, 0);
    // 0x004147CC: addiu       $a0, $s0, 0x20
    ctx->r4 = ADD32(ctx->r16, 0X20);
L_004147D0:
    // 0x004147D0: lw          $t1, 0x0($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X0);
    // 0x004147D4: lw          $t2, 0x4($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X4);
    // 0x004147D8: lw          $t3, 0x8($v0)
    ctx->r11 = MEM_W(ctx->r2, 0X8);
    // 0x004147DC: lw          $t4, 0xC($v0)
    ctx->r12 = MEM_W(ctx->r2, 0XC);
    // 0x004147E0: sw          $t1, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r9;
    // 0x004147E4: sw          $t2, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r10;
    // 0x004147E8: sw          $t3, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r11;
    // 0x004147EC: sw          $t4, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r12;
    // 0x004147F0: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
    // 0x004147F4: bne         $v0, $a0, L_004147D0
    if (ctx->r2 != ctx->r4) {
        // 0x004147F8: addiu       $v1, $v1, 0x10
        ctx->r3 = ADD32(ctx->r3, 0X10);
            goto L_004147D0;
    }
    // 0x004147F8: addiu       $v1, $v1, 0x10
    ctx->r3 = ADD32(ctx->r3, 0X10);
    // 0x004147FC: lw          $t1, 0x0($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X0);
    // 0x00414800: lw          $t2, 0x4($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X4);
    // 0x00414804: sw          $t1, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r9;
    // 0x00414808: sw          $t2, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r10;
    // 0x0041480C: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
    // 0x00414810: lw          $v1, 0x1C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X1C);
    // 0x00414814: lw          $v0, 0x6C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X6C);
    // 0x00414818: mult        $v1, $v0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x0041481C: mflo        $a3
    ctx->r7 = lo;
    // 0x00414820: bltzl       $a3, L_00414828
    if (SIGNED(ctx->r7) < 0) {
        // 0x00414824: addiu       $a3, $a3, 0xFF
        ctx->r7 = ADD32(ctx->r7, 0XFF);
            goto L_00414828;
    }
    goto skip_0;
    // 0x00414824: addiu       $a3, $a3, 0xFF
    ctx->r7 = ADD32(ctx->r7, 0XFF);
    skip_0:
L_00414828:
    // 0x00414828: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    // 0x0041482C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x00414830: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    // 0x00414834: lw          $v1, 0x94($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X94);
    // 0x00414838: sra         $a3, $a3, 8
    ctx->r7 = S32(SIGNED(ctx->r7) >> 8);
    // 0x0041483C: srl         $v0, $v1, 31
    ctx->r2 = S32(U32(ctx->r3) >> 31);
    // 0x00414840: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x00414844: sra         $v1, $v1, 1
    ctx->r3 = S32(SIGNED(ctx->r3) >> 1);
    // 0x00414848: lw          $v0, 0x14($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X14);
    // 0x0041484C: subu        $a3, $a3, $v1
    ctx->r7 = SUB32(ctx->r7, ctx->r3);
    // 0x00414850: addu        $v0, $v0, $a3
    ctx->r2 = ADD32(ctx->r2, ctx->r7);
    // 0x00414854: addu        $a3, $s3, $zero
    ctx->r7 = ADD32(ctx->r19, 0);
    // 0x00414858: sw          $v0, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r2;
    // 0x0041485C: lw          $v1, 0x70($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X70);
    // 0x00414860: lw          $t0, 0x98($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X98);
    // 0x00414864: srl         $v0, $v1, 31
    ctx->r2 = S32(U32(ctx->r3) >> 31);
    // 0x00414868: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x0041486C: sra         $v1, $v1, 1
    ctx->r3 = S32(SIGNED(ctx->r3) >> 1);
    // 0x00414870: srl         $v0, $t0, 31
    ctx->r2 = S32(U32(ctx->r8) >> 31);
    // 0x00414874: addu        $t0, $t0, $v0
    ctx->r8 = ADD32(ctx->r8, ctx->r2);
    // 0x00414878: sra         $t0, $t0, 1
    ctx->r8 = S32(SIGNED(ctx->r8) >> 1);
    // 0x0041487C: lw          $v0, 0x1C($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X1C);
    // 0x00414880: subu        $v1, $v1, $t0
    ctx->r3 = SUB32(ctx->r3, ctx->r8);
    // 0x00414884: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x00414888: jal         0x004143DC
    // 0x0041488C: sw          $v0, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->r2;
    func_004143DC(rdram, ctx);
        goto after_4;
    // 0x0041488C: sw          $v0, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->r2;
    after_4:
    // 0x00414890: addiu       $v1, $sp, 0x18
    ctx->r3 = ADD32(ctx->r29, 0X18);
    // 0x00414894: addu        $v0, $s0, $zero
    ctx->r2 = ADD32(ctx->r16, 0);
    // 0x00414898: addiu       $a0, $s0, 0x20
    ctx->r4 = ADD32(ctx->r16, 0X20);
L_0041489C:
    // 0x0041489C: lw          $t1, 0x0($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X0);
    // 0x004148A0: lw          $t2, 0x4($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X4);
    // 0x004148A4: lw          $t3, 0x8($v0)
    ctx->r11 = MEM_W(ctx->r2, 0X8);
    // 0x004148A8: lw          $t4, 0xC($v0)
    ctx->r12 = MEM_W(ctx->r2, 0XC);
    // 0x004148AC: sw          $t1, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r9;
    // 0x004148B0: sw          $t2, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r10;
    // 0x004148B4: sw          $t3, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r11;
    // 0x004148B8: sw          $t4, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r12;
    // 0x004148BC: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
    // 0x004148C0: bne         $v0, $a0, L_0041489C
    if (ctx->r2 != ctx->r4) {
        // 0x004148C4: addiu       $v1, $v1, 0x10
        ctx->r3 = ADD32(ctx->r3, 0X10);
            goto L_0041489C;
    }
    // 0x004148C4: addiu       $v1, $v1, 0x10
    ctx->r3 = ADD32(ctx->r3, 0X10);
    // 0x004148C8: lw          $t1, 0x0($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X0);
    // 0x004148CC: lw          $t2, 0x4($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X4);
    // 0x004148D0: sw          $t1, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r9;
    // 0x004148D4: sw          $t2, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r10;
    // 0x004148D8: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
    // 0x004148DC: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x004148E0: beq         $v0, $zero, L_00414900
    if (ctx->r2 == 0) {
        // 0x004148E4: addiu       $a0, $sp, 0x18
        ctx->r4 = ADD32(ctx->r29, 0X18);
            goto L_00414900;
    }
    // 0x004148E4: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    // 0x004148E8: lw          $v0, 0x44($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X44);
    // 0x004148EC: srl         $v1, $v0, 31
    ctx->r3 = S32(U32(ctx->r2) >> 31);
    // 0x004148F0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x004148F4: sra         $v0, $v0, 1
    ctx->r2 = S32(SIGNED(ctx->r2) >> 1);
    // 0x004148F8: subu        $v0, $s4, $v0
    ctx->r2 = SUB32(ctx->r20, ctx->r2);
    // 0x004148FC: sw          $v0, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r2;
L_00414900:
    // 0x00414900: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x00414904: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    // 0x00414908: lw          $v0, 0x14($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X14);
    // 0x0041490C: addu        $a3, $s3, $zero
    ctx->r7 = ADD32(ctx->r19, 0);
    // 0x00414910: jal         0x00413F74
    // 0x00414914: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    func_00413F74(rdram, ctx);
        goto after_5;
    // 0x00414914: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    after_5:
    // 0x00414918: lw          $ra, 0xCC($sp)
    ctx->r31 = MEM_W(ctx->r29, 0XCC);
    // 0x0041491C: lw          $s4, 0xC8($sp)
    ctx->r20 = MEM_W(ctx->r29, 0XC8);
    // 0x00414920: lw          $s3, 0xC4($sp)
    ctx->r19 = MEM_W(ctx->r29, 0XC4);
    // 0x00414924: lw          $s2, 0xC0($sp)
    ctx->r18 = MEM_W(ctx->r29, 0XC0);
    // 0x00414928: lw          $s1, 0xBC($sp)
    ctx->r17 = MEM_W(ctx->r29, 0XBC);
    // 0x0041492C: lw          $s0, 0xB8($sp)
    ctx->r16 = MEM_W(ctx->r29, 0XB8);
    // 0x00414930: jr          $ra
    // 0x00414934: addiu       $sp, $sp, 0xD0
    ctx->r29 = ADD32(ctx->r29, 0XD0);
    return;
    // 0x00414934: addiu       $sp, $sp, 0xD0
    ctx->r29 = ADD32(ctx->r29, 0XD0);
;}
RECOMP_FUNC void func_00429454(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00429454: lw          $t0, 0x48($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X48);
    // 0x00429458: lw          $t1, 0x4C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X4C);
    // 0x0042945C: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
;}
RECOMP_FUNC void func_0021149C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0021149C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x002114A0: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x002114A4: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x002114A8: jal         0x0027BC34
    // 0x002114AC: mov.s       $f20, $f12
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 12);
    ctx->f20.fl = ctx->f12.fl;
    func_0027BC34(rdram, ctx);
        goto after_0;
    // 0x002114AC: mov.s       $f20, $f12
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 12);
    ctx->f20.fl = ctx->f12.fl;
    after_0:
    // 0x002114B0: beq         $v0, $zero, L_002114C8
    if (ctx->r2 == 0) {
        // 0x002114B4: lui         $v1, 0xA84A
        ctx->r3 = S32(0XA84A << 16);
            goto L_002114C8;
    }
    // 0x002114B4: lui         $v1, 0xA84A
    ctx->r3 = S32(0XA84A << 16);
    // 0x002114B8: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x002114BC: lw          $v0, 0x6D20($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X6D20);
    // 0x002114C0: j           L_002114D4
    // 0x002114C4: ori         $v1, $v1, 0x5B53
    ctx->r3 = ctx->r3 | 0X5B53;
        goto L_002114D4;
    // 0x002114C4: ori         $v1, $v1, 0x5B53
    ctx->r3 = ctx->r3 | 0X5B53;
L_002114C8:
    // 0x002114C8: lui         $v0, 0x800E
    ctx->r2 = S32(0X800E << 16);
    // 0x002114CC: lw          $v0, -0x287C($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X287C);
    // 0x002114D0: ori         $v1, $v1, 0x5B53
    ctx->r3 = ctx->r3 | 0X5B53;
L_002114D4:
    // 0x002114D4: mult        $v0, $v1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x002114D8: lui         $v0, 0x5834
    ctx->r2 = S32(0X5834 << 16);
    // 0x002114DC: ori         $v0, $v0, 0x8C2D
    ctx->r2 = ctx->r2 | 0X8C2D;
    // 0x002114E0: mflo        $a0
    ctx->r4 = lo;
    // 0x002114E4: addu        $v0, $a0, $v0
    ctx->r2 = ADD32(ctx->r4, ctx->r2);
    // 0x002114E8: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x002114EC: sw          $v0, -0x287C($at)
    MEM_W(-0X287C, ctx->r1) = ctx->r2;
    // 0x002114F0: lui         $v0, 0x800E
    ctx->r2 = S32(0X800E << 16);
    // 0x002114F4: lhu         $v0, -0x287C($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X287C);
    // 0x002114F8: andi        $v0, $v0, 0x7FFF
    ctx->r2 = ctx->r2 & 0X7FFF;
    // 0x002114FC: mtc1        $v0, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r2;
    // 0x00211500: cvt.d.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.d = CVT_D_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x00211504: bgezl       $v0, L_0021151C
    if (SIGNED(ctx->r2) >= 0) {
        // 0x00211508: cvt.s.d     $f0, $f1
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.d); 
    ctx->f0.fl = CVT_S_D(ctx->f1.d);
            goto L_0021151C;
    }
    goto skip_0;
    // 0x00211508: cvt.s.d     $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.d); 
    ctx->f0.fl = CVT_S_D(ctx->f1.d);
    skip_0:
    // 0x0021150C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00211510: ldc1        $f0, 0x5668($at)
    CHECK_FR(ctx, 0);
    ctx->f0.u64 = LD(ctx->r1, 0X5668);
    // 0x00211514: add.d       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.d); NAN_CHECK(ctx->f0.d); 
    ctx->f1.d = ctx->f1.d + ctx->f0.d;
    // 0x00211518: cvt.s.d     $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.d); 
    ctx->f0.fl = CVT_S_D(ctx->f1.d);
L_0021151C:
    // 0x0021151C: mul.s       $f0, $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f20.fl);
    // 0x00211520: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00211524: lwc1        $f1, 0x5670($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X5670);
    // 0x00211528: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0021152C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x00211530: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x00211534: jr          $ra
    // 0x00211538: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00211538: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_0020C618(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0020C618: lwc1        $f0, 0x0($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X0);
    // 0x0020C61C: lwc1        $f1, 0x0($a2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r6, 0X0);
    // 0x0020C620: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0020C624: lwc1        $f3, 0x4($a1)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r5, 0X4);
    // 0x0020C628: lwc1        $f1, 0x10($a2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r6, 0X10);
    // 0x0020C62C: mul.s       $f3, $f3, $f1
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f3.fl = MUL_S(ctx->f3.fl, ctx->f1.fl);
    // 0x0020C630: lwc1        $f2, 0x20($a2)
    ctx->f2.u32l = MEM_W(ctx->r6, 0X20);
    // 0x0020C634: lwc1        $f1, 0x8($a1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r5, 0X8);
    // 0x0020C638: mul.s       $f1, $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f2.fl);
    // 0x0020C63C: add.s       $f0, $f0, $f3
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f3.fl;
    // 0x0020C640: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x0020C644: swc1        $f0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f0.u32l;
    // 0x0020C648: lwc1        $f0, 0x0($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X0);
    // 0x0020C64C: lwc1        $f1, 0x4($a2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r6, 0X4);
    // 0x0020C650: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0020C654: lwc1        $f3, 0x4($a1)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r5, 0X4);
    // 0x0020C658: lwc1        $f1, 0x14($a2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r6, 0X14);
    // 0x0020C65C: mul.s       $f3, $f3, $f1
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f3.fl = MUL_S(ctx->f3.fl, ctx->f1.fl);
    // 0x0020C660: lwc1        $f2, 0x24($a2)
    ctx->f2.u32l = MEM_W(ctx->r6, 0X24);
    // 0x0020C664: lwc1        $f1, 0x8($a1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r5, 0X8);
    // 0x0020C668: mul.s       $f1, $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f2.fl);
    // 0x0020C66C: add.s       $f0, $f0, $f3
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f3.fl;
    // 0x0020C670: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x0020C674: swc1        $f0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->f0.u32l;
    // 0x0020C678: lwc1        $f0, 0x0($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X0);
    // 0x0020C67C: lwc1        $f1, 0x8($a2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r6, 0X8);
    // 0x0020C680: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0020C684: lwc1        $f3, 0x4($a1)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r5, 0X4);
    // 0x0020C688: lwc1        $f1, 0x18($a2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r6, 0X18);
    // 0x0020C68C: mul.s       $f3, $f3, $f1
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f3.fl = MUL_S(ctx->f3.fl, ctx->f1.fl);
    // 0x0020C690: lwc1        $f2, 0x28($a2)
    ctx->f2.u32l = MEM_W(ctx->r6, 0X28);
    // 0x0020C694: lwc1        $f1, 0x8($a1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r5, 0X8);
    // 0x0020C698: mul.s       $f1, $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f2.fl);
    // 0x0020C69C: add.s       $f0, $f0, $f3
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f3.fl;
    // 0x0020C6A0: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x0020C6A4: swc1        $f0, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->f0.u32l;
    // 0x0020C6A8: lwc1        $f0, 0x10($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X10);
    // 0x0020C6AC: lwc1        $f1, 0x0($a2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r6, 0X0);
    // 0x0020C6B0: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0020C6B4: lwc1        $f3, 0x14($a1)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r5, 0X14);
    // 0x0020C6B8: lwc1        $f1, 0x10($a2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r6, 0X10);
    // 0x0020C6BC: mul.s       $f3, $f3, $f1
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f3.fl = MUL_S(ctx->f3.fl, ctx->f1.fl);
    // 0x0020C6C0: lwc1        $f2, 0x20($a2)
    ctx->f2.u32l = MEM_W(ctx->r6, 0X20);
    // 0x0020C6C4: lwc1        $f1, 0x18($a1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r5, 0X18);
    // 0x0020C6C8: mul.s       $f1, $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f2.fl);
    // 0x0020C6CC: add.s       $f0, $f0, $f3
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f3.fl;
    // 0x0020C6D0: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x0020C6D4: swc1        $f0, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->f0.u32l;
    // 0x0020C6D8: lwc1        $f0, 0x10($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X10);
    // 0x0020C6DC: lwc1        $f1, 0x4($a2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r6, 0X4);
    // 0x0020C6E0: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0020C6E4: lwc1        $f3, 0x14($a1)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r5, 0X14);
    // 0x0020C6E8: lwc1        $f1, 0x14($a2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r6, 0X14);
    // 0x0020C6EC: mul.s       $f3, $f3, $f1
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f3.fl = MUL_S(ctx->f3.fl, ctx->f1.fl);
    // 0x0020C6F0: lwc1        $f2, 0x24($a2)
    ctx->f2.u32l = MEM_W(ctx->r6, 0X24);
    // 0x0020C6F4: lwc1        $f1, 0x18($a1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r5, 0X18);
    // 0x0020C6F8: mul.s       $f1, $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f2.fl);
    // 0x0020C6FC: add.s       $f0, $f0, $f3
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f3.fl;
    // 0x0020C700: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x0020C704: swc1        $f0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->f0.u32l;
    // 0x0020C708: lwc1        $f0, 0x10($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X10);
    // 0x0020C70C: lwc1        $f1, 0x8($a2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r6, 0X8);
    // 0x0020C710: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0020C714: lwc1        $f3, 0x14($a1)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r5, 0X14);
    // 0x0020C718: lwc1        $f1, 0x18($a2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r6, 0X18);
    // 0x0020C71C: mul.s       $f3, $f3, $f1
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f3.fl = MUL_S(ctx->f3.fl, ctx->f1.fl);
    // 0x0020C720: lwc1        $f2, 0x28($a2)
    ctx->f2.u32l = MEM_W(ctx->r6, 0X28);
    // 0x0020C724: lwc1        $f1, 0x18($a1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r5, 0X18);
    // 0x0020C728: mul.s       $f1, $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f2.fl);
    // 0x0020C72C: add.s       $f0, $f0, $f3
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f3.fl;
    // 0x0020C730: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x0020C734: swc1        $f0, 0x18($a0)
    MEM_W(0X18, ctx->r4) = ctx->f0.u32l;
    // 0x0020C738: lwc1        $f0, 0x20($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X20);
    // 0x0020C73C: lwc1        $f1, 0x0($a2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r6, 0X0);
    // 0x0020C740: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0020C744: lwc1        $f3, 0x24($a1)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r5, 0X24);
    // 0x0020C748: lwc1        $f1, 0x10($a2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r6, 0X10);
    // 0x0020C74C: mul.s       $f3, $f3, $f1
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f3.fl = MUL_S(ctx->f3.fl, ctx->f1.fl);
    // 0x0020C750: lwc1        $f2, 0x20($a2)
    ctx->f2.u32l = MEM_W(ctx->r6, 0X20);
    // 0x0020C754: lwc1        $f1, 0x28($a1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r5, 0X28);
    // 0x0020C758: mul.s       $f1, $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f2.fl);
    // 0x0020C75C: add.s       $f0, $f0, $f3
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f3.fl;
    // 0x0020C760: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x0020C764: swc1        $f0, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->f0.u32l;
    // 0x0020C768: lwc1        $f0, 0x20($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X20);
    // 0x0020C76C: lwc1        $f1, 0x4($a2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r6, 0X4);
    // 0x0020C770: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0020C774: lwc1        $f3, 0x24($a1)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r5, 0X24);
    // 0x0020C778: lwc1        $f1, 0x14($a2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r6, 0X14);
    // 0x0020C77C: mul.s       $f3, $f3, $f1
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f3.fl = MUL_S(ctx->f3.fl, ctx->f1.fl);
    // 0x0020C780: lwc1        $f2, 0x24($a2)
    ctx->f2.u32l = MEM_W(ctx->r6, 0X24);
    // 0x0020C784: lwc1        $f1, 0x28($a1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r5, 0X28);
    // 0x0020C788: mul.s       $f1, $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f2.fl);
    // 0x0020C78C: add.s       $f0, $f0, $f3
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f3.fl;
    // 0x0020C790: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x0020C794: swc1        $f0, 0x24($a0)
    MEM_W(0X24, ctx->r4) = ctx->f0.u32l;
    // 0x0020C798: lwc1        $f0, 0x20($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X20);
    // 0x0020C79C: lwc1        $f1, 0x8($a2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r6, 0X8);
    // 0x0020C7A0: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0020C7A4: lwc1        $f3, 0x24($a1)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r5, 0X24);
    // 0x0020C7A8: lwc1        $f1, 0x18($a2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r6, 0X18);
    // 0x0020C7AC: mul.s       $f3, $f3, $f1
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f3.fl = MUL_S(ctx->f3.fl, ctx->f1.fl);
    // 0x0020C7B0: lwc1        $f2, 0x28($a2)
    ctx->f2.u32l = MEM_W(ctx->r6, 0X28);
    // 0x0020C7B4: lwc1        $f1, 0x28($a1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r5, 0X28);
    // 0x0020C7B8: mul.s       $f1, $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f2.fl);
    // 0x0020C7BC: add.s       $f0, $f0, $f3
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f3.fl;
    // 0x0020C7C0: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x0020C7C4: swc1        $f0, 0x28($a0)
    MEM_W(0X28, ctx->r4) = ctx->f0.u32l;
    // 0x0020C7C8: lwc1        $f0, 0x30($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X30);
    // 0x0020C7CC: lwc1        $f1, 0x0($a2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r6, 0X0);
    // 0x0020C7D0: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0020C7D4: lwc1        $f3, 0x34($a1)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r5, 0X34);
    // 0x0020C7D8: lwc1        $f1, 0x10($a2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r6, 0X10);
    // 0x0020C7DC: mul.s       $f3, $f3, $f1
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f3.fl = MUL_S(ctx->f3.fl, ctx->f1.fl);
    // 0x0020C7E0: lwc1        $f2, 0x20($a2)
    ctx->f2.u32l = MEM_W(ctx->r6, 0X20);
    // 0x0020C7E4: lwc1        $f1, 0x38($a1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r5, 0X38);
    // 0x0020C7E8: mul.s       $f1, $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f2.fl);
    // 0x0020C7EC: add.s       $f0, $f0, $f3
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f3.fl;
    // 0x0020C7F0: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x0020C7F4: lwc1        $f1, 0x30($a2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r6, 0X30);
    // 0x0020C7F8: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x0020C7FC: swc1        $f0, 0x30($a0)
    MEM_W(0X30, ctx->r4) = ctx->f0.u32l;
    // 0x0020C800: lwc1        $f0, 0x30($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X30);
    // 0x0020C804: lwc1        $f1, 0x4($a2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r6, 0X4);
    // 0x0020C808: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0020C80C: lwc1        $f3, 0x34($a1)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r5, 0X34);
    // 0x0020C810: lwc1        $f1, 0x14($a2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r6, 0X14);
    // 0x0020C814: mul.s       $f3, $f3, $f1
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f3.fl = MUL_S(ctx->f3.fl, ctx->f1.fl);
    // 0x0020C818: lwc1        $f2, 0x24($a2)
    ctx->f2.u32l = MEM_W(ctx->r6, 0X24);
    // 0x0020C81C: lwc1        $f1, 0x38($a1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r5, 0X38);
    // 0x0020C820: mul.s       $f1, $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f2.fl);
    // 0x0020C824: add.s       $f0, $f0, $f3
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f3.fl;
    // 0x0020C828: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x0020C82C: lwc1        $f1, 0x34($a2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r6, 0X34);
    // 0x0020C830: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x0020C834: swc1        $f0, 0x34($a0)
    MEM_W(0X34, ctx->r4) = ctx->f0.u32l;
    // 0x0020C838: lwc1        $f1, 0x30($a1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r5, 0X30);
    // 0x0020C83C: lwc1        $f0, 0x8($a2)
    ctx->f0.u32l = MEM_W(ctx->r6, 0X8);
    // 0x0020C840: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x0020C844: lwc1        $f3, 0x34($a1)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r5, 0X34);
    // 0x0020C848: lwc1        $f0, 0x18($a2)
    ctx->f0.u32l = MEM_W(ctx->r6, 0X18);
    // 0x0020C84C: mul.s       $f3, $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f3.fl = MUL_S(ctx->f3.fl, ctx->f0.fl);
    // 0x0020C850: lwc1        $f2, 0x38($a1)
    ctx->f2.u32l = MEM_W(ctx->r5, 0X38);
    // 0x0020C854: lwc1        $f0, 0x28($a2)
    ctx->f0.u32l = MEM_W(ctx->r6, 0X28);
    // 0x0020C858: mul.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x0020C85C: lwc1        $f4, 0x38($a2)
    ctx->f4.u32l = MEM_W(ctx->r6, 0X38);
    // 0x0020C860: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x0020C864: add.s       $f1, $f1, $f3
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f3.fl;
    // 0x0020C868: swc1        $f0, 0x2C($a0)
    MEM_W(0X2C, ctx->r4) = ctx->f0.u32l;
    // 0x0020C86C: add.s       $f1, $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f2.fl;
    // 0x0020C870: swc1        $f0, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = ctx->f0.u32l;
    // 0x0020C874: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0020C878: lwc1        $f2, 0x5410($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X5410);
    // 0x0020C87C: add.s       $f1, $f1, $f4
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f4.fl;
    // 0x0020C880: swc1        $f0, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->f0.u32l;
    // 0x0020C884: swc1        $f2, 0x3C($a0)
    MEM_W(0X3C, ctx->r4) = ctx->f2.u32l;
    // 0x0020C888: jr          $ra
    // 0x0020C88C: swc1        $f1, 0x38($a0)
    MEM_W(0X38, ctx->r4) = ctx->f_odd[(1 - 1) * 2];
    return;
    // 0x0020C88C: swc1        $f1, 0x38($a0)
    MEM_W(0X38, ctx->r4) = ctx->f_odd[(1 - 1) * 2];
;}
RECOMP_FUNC void func_00225058(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00225058: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x0022505C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x00225060: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x00225064: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x00225068: addu        $s2, $a2, $zero
    ctx->r18 = ADD32(ctx->r6, 0);
    // 0x0022506C: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x00225070: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x00225074: lw          $v0, 0xD4($a1)
    ctx->r2 = MEM_W(ctx->r5, 0XD4);
    // 0x00225078: lui         $v1, 0x8
    ctx->r3 = S32(0X8 << 16);
    // 0x0022507C: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x00225080: bne         $v0, $zero, L_002250E0
    if (ctx->r2 != 0) {
        // 0x00225084: addu        $s1, $a3, $zero
        ctx->r17 = ADD32(ctx->r7, 0);
            goto L_002250E0;
    }
    // 0x00225084: addu        $s1, $a3, $zero
    ctx->r17 = ADD32(ctx->r7, 0);
    // 0x00225088: lw          $a0, 0xE0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XE0);
    // 0x0022508C: sltu        $v0, $a1, $a0
    ctx->r2 = ctx->r5 < ctx->r4 ? 1 : 0;
    // 0x00225090: bne         $v0, $zero, L_002250E4
    if (ctx->r2 != 0) {
        // 0x00225094: addiu       $a2, $zero, -0x1
        ctx->r6 = ADD32(0, -0X1);
            goto L_002250E4;
    }
    // 0x00225094: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x00225098: lw          $v1, 0xE8($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XE8);
    // 0x0022509C: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x002250A0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x002250A4: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x002250A8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x002250AC: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x002250B0: addiu       $v0, $v0, -0x288
    ctx->r2 = ADD32(ctx->r2, -0X288);
    // 0x002250B4: addu        $v0, $a0, $v0
    ctx->r2 = ADD32(ctx->r4, ctx->r2);
    // 0x002250B8: sltu        $v0, $v0, $a1
    ctx->r2 = ctx->r2 < ctx->r5 ? 1 : 0;
    // 0x002250BC: bne         $v0, $zero, L_002250E8
    if (ctx->r2 != 0) {
        // 0x002250C0: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_002250E8;
    }
    // 0x002250C0: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x002250C4: subu        $v1, $a1, $a0
    ctx->r3 = SUB32(ctx->r5, ctx->r4);
    // 0x002250C8: lui         $v0, 0xCA45
    ctx->r2 = S32(0XCA45 << 16);
    // 0x002250CC: ori         $v0, $v0, 0x87E7
    ctx->r2 = ctx->r2 | 0X87E7;
    // 0x002250D0: multu       $v1, $v0
    result = U64(U32(ctx->r3)) * U64(U32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x002250D4: mfhi        $t0
    ctx->r8 = hi;
    // 0x002250D8: j           L_002250E4
    // 0x002250DC: srl         $a2, $t0, 9
    ctx->r6 = S32(U32(ctx->r8) >> 9);
        goto L_002250E4;
    // 0x002250DC: srl         $a2, $t0, 9
    ctx->r6 = S32(U32(ctx->r8) >> 9);
L_002250E0:
    // 0x002250E0: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
L_002250E4:
    // 0x002250E4: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_002250E8:
    // 0x002250E8: beq         $a2, $v0, L_00225140
    if (ctx->r6 == ctx->r2) {
        // 0x002250EC: addiu       $v0, $sp, 0x1C
        ctx->r2 = ADD32(ctx->r29, 0X1C);
            goto L_00225140;
    }
    // 0x002250EC: addiu       $v0, $sp, 0x1C
    ctx->r2 = ADD32(ctx->r29, 0X1C);
    // 0x002250F0: lw          $a0, 0x1170($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X1170);
    // 0x002250F4: lw          $a1, 0x1168($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X1168);
    // 0x002250F8: addiu       $a3, $sp, 0x18
    ctx->r7 = ADD32(ctx->r29, 0X18);
    // 0x002250FC: jal         0x00266D8C
    // 0x00225100: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    func_00266D8C(rdram, ctx);
        goto after_0;
    // 0x00225100: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    after_0:
    // 0x00225104: beql        $v0, $zero, L_00225140
    if (ctx->r2 == 0) {
        // 0x00225108: sw          $zero, 0x0($s2)
        MEM_W(0X0, ctx->r18) = 0;
            goto L_00225140;
    }
    goto skip_0;
    // 0x00225108: sw          $zero, 0x0($s2)
    MEM_W(0X0, ctx->r18) = 0;
    skip_0:
    // 0x0022510C: lw          $v1, 0x18($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X18);
    // 0x00225110: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x00225114: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x00225118: lw          $v1, 0x1178($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X1178);
    // 0x0022511C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x00225120: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x00225124: sw          $v1, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r3;
    // 0x00225128: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x0022512C: lw          $v1, 0x18($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X18);
    // 0x00225130: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x00225134: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x00225138: j           L_00225144
    // 0x0022513C: sw          $v0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r2;
        goto L_00225144;
    // 0x0022513C: sw          $v0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r2;
L_00225140:
    // 0x00225140: sw          $zero, 0x0($s1)
    MEM_W(0X0, ctx->r17) = 0;
L_00225144:
    // 0x00225144: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x00225148: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x0022514C: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x00225150: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x00225154: jr          $ra
    // 0x00225158: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x00225158: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_0021EBE4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0021EBE4: addu        $t1, $a0, $zero
    ctx->r9 = ADD32(ctx->r4, 0);
    // 0x0021EBE8: lw          $t0, 0x14($t1)
    ctx->r8 = MEM_W(ctx->r9, 0X14);
    // 0x0021EBEC: lw          $v1, 0x0($t0)
    ctx->r3 = MEM_W(ctx->r8, 0X0);
    // 0x0021EBF0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0021EBF4: bne         $v1, $v0, L_0021EC8C
    if (ctx->r3 != ctx->r2) {
        // 0x0021EBF8: addu        $v0, $a1, $t0
        ctx->r2 = ADD32(ctx->r5, ctx->r8);
            goto L_0021EC8C;
    }
    // 0x0021EBF8: addu        $v0, $a1, $t0
    ctx->r2 = ADD32(ctx->r5, ctx->r8);
    // 0x0021EBFC: lb          $a0, 0x174($t1)
    ctx->r4 = MEM_B(ctx->r9, 0X174);
    // 0x0021EC00: addiu       $v0, $zero, 0x3C
    ctx->r2 = ADD32(0, 0X3C);
    // 0x0021EC04: bne         $a0, $v0, L_0021EC18
    if (ctx->r4 != ctx->r2) {
        // 0x0021EC08: addu        $v0, $a0, $zero
        ctx->r2 = ADD32(ctx->r4, 0);
            goto L_0021EC18;
    }
    // 0x0021EC08: addu        $v0, $a0, $zero
    ctx->r2 = ADD32(ctx->r4, 0);
    // 0x0021EC0C: lb          $v0, 0x176($t1)
    ctx->r2 = MEM_B(ctx->r9, 0X176);
    // 0x0021EC10: j           L_0021EC1C
    // 0x0021EC14: addiu       $a0, $v0, -0x36
    ctx->r4 = ADD32(ctx->r2, -0X36);
        goto L_0021EC1C;
    // 0x0021EC14: addiu       $a0, $v0, -0x36
    ctx->r4 = ADD32(ctx->r2, -0X36);
L_0021EC18:
    // 0x0021EC18: addiu       $a0, $v0, -0x36
    ctx->r4 = ADD32(ctx->r2, -0X36);
L_0021EC1C:
    // 0x0021EC1C: sltiu       $v0, $a0, 0x6
    ctx->r2 = ctx->r4 < 0X6 ? 1 : 0;
    // 0x0021EC20: beq         $v0, $zero, L_0021EC88
    if (ctx->r2 == 0) {
        // 0x0021EC24: sll         $v0, $a0, 2
        ctx->r2 = S32(ctx->r4 << 2);
            goto L_0021EC88;
    }
    // 0x0021EC24: sll         $v0, $a0, 2
    ctx->r2 = S32(ctx->r4 << 2);
    // 0x0021EC28: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0021EC2C: addu        $at, $at, $v0
    gpr jr_addend_0021EC34 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x0021EC30: lw          $v0, 0x5CF8($at)
    ctx->r2 = ADD32(ctx->r1, 0X5CF8);
    // 0x0021EC34: jr          $v0
    // 0x0021EC38: nop

    switch (jr_addend_0021EC34 >> 2) {
        case 0: goto L_0021EC3C; break;
        case 1: goto L_0021EC4C; break;
        case 2: goto L_0021EC58; break;
        case 3: goto L_0021EC64; break;
        case 4: goto L_0021EC70; break;
        case 5: goto L_0021EC7C; break;
        default: switch_error(__func__, 0x0021EC34, 0x800A5CF8);
    }
    // 0x0021EC38: nop

L_0021EC3C:
    // 0x0021EC3C: lb          $v0, 0x63($t0)
    ctx->r2 = MEM_B(ctx->r8, 0X63);
    // 0x0021EC40: sw          $v0, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r2;
L_0021EC44:
    // 0x0021EC44: jr          $ra
    // 0x0021EC48: sw          $v0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r2;
    return;
    // 0x0021EC48: sw          $v0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r2;
L_0021EC4C:
    // 0x0021EC4C: lb          $v0, 0x64($t0)
    ctx->r2 = MEM_B(ctx->r8, 0X64);
    // 0x0021EC50: j           L_0021EC44
    // 0x0021EC54: sw          $v0, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r2;
        goto L_0021EC44;
    // 0x0021EC54: sw          $v0, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r2;
L_0021EC58:
    // 0x0021EC58: lb          $v0, 0x65($t0)
    ctx->r2 = MEM_B(ctx->r8, 0X65);
    // 0x0021EC5C: j           L_0021EC44
    // 0x0021EC60: sw          $v0, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r2;
        goto L_0021EC44;
    // 0x0021EC60: sw          $v0, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r2;
L_0021EC64:
    // 0x0021EC64: lb          $v0, 0x66($t0)
    ctx->r2 = MEM_B(ctx->r8, 0X66);
    // 0x0021EC68: j           L_0021EC44
    // 0x0021EC6C: sw          $v0, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r2;
        goto L_0021EC44;
    // 0x0021EC6C: sw          $v0, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r2;
L_0021EC70:
    // 0x0021EC70: lb          $v0, 0x67($t0)
    ctx->r2 = MEM_B(ctx->r8, 0X67);
    // 0x0021EC74: j           L_0021EC44
    // 0x0021EC78: sw          $v0, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r2;
        goto L_0021EC44;
    // 0x0021EC78: sw          $v0, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r2;
L_0021EC7C:
    // 0x0021EC7C: lb          $v0, 0x68($t0)
    ctx->r2 = MEM_B(ctx->r8, 0X68);
    // 0x0021EC80: j           L_0021EC44
    // 0x0021EC84: sw          $v0, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r2;
        goto L_0021EC44;
    // 0x0021EC84: sw          $v0, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r2;
L_0021EC88:
    // 0x0021EC88: addu        $v0, $a1, $t0
    ctx->r2 = ADD32(ctx->r5, ctx->r8);
L_0021EC8C:
    // 0x0021EC8C: lb          $v1, 0xE($v0)
    ctx->r3 = MEM_B(ctx->r2, 0XE);
    // 0x0021EC90: sw          $v1, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r3;
    // 0x0021EC94: lb          $v0, 0x10($v0)
    ctx->r2 = MEM_B(ctx->r2, 0X10);
    // 0x0021EC98: jr          $ra
    // 0x0021EC9C: sw          $v0, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r2;
    return;
    // 0x0021EC9C: sw          $v0, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r2;
;}
RECOMP_FUNC void func_00243170(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00243170: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00243174: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x00243178: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x0024317C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00243180: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x00243184: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x00243188: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0024318C: lw          $a0, 0x30($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X30);
    // 0x00243190: beq         $a0, $zero, L_002433FC
    if (ctx->r4 == 0) {
        // 0x00243194: nop
    
            goto L_002433FC;
    }
    // 0x00243194: nop

    // 0x00243198: lb          $v1, 0x35($s1)
    ctx->r3 = MEM_B(ctx->r17, 0X35);
    // 0x0024319C: lb          $v0, 0x34($s1)
    ctx->r2 = MEM_B(ctx->r17, 0X34);
    // 0x002431A0: beql        $v1, $v0, L_00243274
    if (ctx->r3 == ctx->r2) {
        // 0x002431A4: addiu       $a1, $zero, -0x1
        ctx->r5 = ADD32(0, -0X1);
            goto L_00243274;
    }
    goto skip_0;
    // 0x002431A4: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    skip_0:
    // 0x002431A8: lwc1        $f1, 0x14($a0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r4, 0X14);
    // 0x002431AC: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x002431B0: c.le.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl <= ctx->f1.fl;
    // 0x002431B4: nop

    // 0x002431B8: bc1tl       L_002431C0
    if (c1cs) {
        // 0x002431BC: swc1        $f1, 0xC0($s1)
        MEM_W(0XC0, ctx->r17) = ctx->f_odd[(1 - 1) * 2];
            goto L_002431C0;
    }
    goto skip_1;
    // 0x002431BC: swc1        $f1, 0xC0($s1)
    MEM_W(0XC0, ctx->r17) = ctx->f_odd[(1 - 1) * 2];
    skip_1:
L_002431C0:
    // 0x002431C0: lw          $v0, 0x3C($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X3C);
    // 0x002431C4: sw          $v0, 0x38($s1)
    MEM_W(0X38, ctx->r17) = ctx->r2;
    // 0x002431C8: lw          $v0, 0x1C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X1C);
    // 0x002431CC: sw          $v0, 0x3C($s1)
    MEM_W(0X3C, ctx->r17) = ctx->r2;
    // 0x002431D0: sb          $zero, 0xE2($s2)
    MEM_B(0XE2, ctx->r18) = 0;
    // 0x002431D4: lw          $s0, 0x10($a0)
    ctx->r16 = MEM_W(ctx->r4, 0X10);
    // 0x002431D8: beq         $s0, $zero, L_00243268
    if (ctx->r16 == 0) {
        // 0x002431DC: nop
    
            goto L_00243268;
    }
    // 0x002431DC: nop

    // 0x002431E0: jal         0x00267024
    // 0x002431E4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00267024(rdram, ctx);
        goto after_0;
    // 0x002431E4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x002431E8: beq         $v0, $zero, L_00243200
    if (ctx->r2 == 0) {
        // 0x002431EC: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_00243200;
    }
    // 0x002431EC: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x002431F0: jalr        $s0
    // 0x002431F4: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    LOOKUP_FUNC(ctx->r16)(rdram, ctx);
        goto after_1;
    // 0x002431F4: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_1:
    // 0x002431F8: j           L_00243220
    // 0x002431FC: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
        goto L_00243220;
    // 0x002431FC: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
L_00243200:
    // 0x00243200: jal         0x00266FC0
    // 0x00243204: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00266FC0(rdram, ctx);
        goto after_2;
    // 0x00243204: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x00243208: beq         $v0, $zero, L_00243220
    if (ctx->r2 == 0) {
        // 0x0024320C: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_00243220;
    }
    // 0x0024320C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x00243210: lb          $a2, 0xC6($s1)
    ctx->r6 = MEM_B(ctx->r17, 0XC6);
    // 0x00243214: jal         0x0021EA3C
    // 0x00243218: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_0021EA3C(rdram, ctx);
        goto after_3;
    // 0x00243218: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_3:
    // 0x0024321C: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
L_00243220:
    // 0x00243220: beq         $s0, $zero, L_00243268
    if (ctx->r16 == 0) {
        // 0x00243224: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_00243268;
    }
    // 0x00243224: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x00243228: beq         $s0, $v0, L_00243254
    if (ctx->r16 == ctx->r2) {
        // 0x0024322C: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_00243254;
    }
    // 0x0024322C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x00243230: lb          $a2, 0xC6($s1)
    ctx->r6 = MEM_B(ctx->r17, 0XC6);
    // 0x00243234: jal         0x00219F74
    // 0x00243238: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_00219F74(rdram, ctx);
        goto after_4;
    // 0x00243238: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_4:
    // 0x0024323C: sb          $v0, 0xC6($s1)
    MEM_B(0XC6, ctx->r17) = ctx->r2;
    // 0x00243240: sh          $s0, 0xC4($s1)
    MEM_H(0XC4, ctx->r17) = ctx->r16;
    // 0x00243244: lh          $v1, 0xDC($s2)
    ctx->r3 = MEM_H(ctx->r18, 0XDC);
    // 0x00243248: lb          $v0, 0xC6($s1)
    ctx->r2 = MEM_B(ctx->r17, 0XC6);
    // 0x0024324C: beql        $v1, $v0, L_00243254
    if (ctx->r3 == ctx->r2) {
        // 0x00243250: sw          $zero, 0xD8($s2)
        MEM_W(0XD8, ctx->r18) = 0;
            goto L_00243254;
    }
    goto skip_2;
    // 0x00243250: sw          $zero, 0xD8($s2)
    MEM_W(0XD8, ctx->r18) = 0;
    skip_2:
L_00243254:
    // 0x00243254: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x00243258: addiu       $v1, $zero, -0x2
    ctx->r3 = ADD32(0, -0X2);
    // 0x0024325C: sb          $zero, 0xC7($s1)
    MEM_B(0XC7, ctx->r17) = 0;
    // 0x00243260: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x00243264: sw          $v0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r2;
L_00243268:
    // 0x00243268: lbu         $v0, 0x34($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X34);
    // 0x0024326C: j           L_00243358
    // 0x00243270: sb          $v0, 0x35($s1)
    MEM_B(0X35, ctx->r17) = ctx->r2;
        goto L_00243358;
    // 0x00243270: sb          $v0, 0x35($s1)
    MEM_B(0X35, ctx->r17) = ctx->r2;
L_00243274:
    // 0x00243274: lb          $v1, 0xC6($s1)
    ctx->r3 = MEM_B(ctx->r17, 0XC6);
    // 0x00243278: beq         $v1, $a1, L_0024328C
    if (ctx->r3 == ctx->r5) {
        // 0x0024327C: nop
    
            goto L_0024328C;
    }
    // 0x0024327C: nop

    // 0x00243280: lh          $v0, 0xC4($s1)
    ctx->r2 = MEM_H(ctx->r17, 0XC4);
    // 0x00243284: bne         $v0, $a1, L_002432A8
    if (ctx->r2 != ctx->r5) {
        // 0x00243288: nop
    
            goto L_002432A8;
    }
    // 0x00243288: nop

L_0024328C:
    // 0x0024328C: lbu         $v0, 0xC7($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XC7);
    // 0x00243290: lw          $v1, 0x0($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X0);
    // 0x00243294: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x00243298: ori         $v1, $v1, 0x1
    ctx->r3 = ctx->r3 | 0X1;
        turok2_patch_scale_anim_repeat(rdram, ctx);

    // 0x0024329C: sb          $v0, 0xC7($s1)
    MEM_B(0XC7, ctx->r17) = ctx->r2;
    // 0x002432A0: j           L_00243358
    // 0x002432A4: sw          $v1, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r3;
        goto L_00243358;
    // 0x002432A4: sw          $v1, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r3;
L_002432A8:
    // 0x002432A8: lh          $v0, 0xDC($s2)
    ctx->r2 = MEM_H(ctx->r18, 0XDC);
    // 0x002432AC: bne         $v0, $v1, L_00243358
    if (ctx->r2 != ctx->r3) {
        // 0x002432B0: nop
    
            goto L_00243358;
    }
    // 0x002432B0: nop

    // 0x002432B4: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x002432B8: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x002432BC: bne         $v0, $zero, L_0024331C
    if (ctx->r2 != 0) {
        // 0x002432C0: nop
    
            goto L_0024331C;
    }
    // 0x002432C0: nop

    // 0x002432C4: lh          $v0, 0xE0($s2)
    ctx->r2 = MEM_H(ctx->r18, 0XE0);
    // 0x002432C8: lw          $v1, 0x18($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X18);
    // 0x002432CC: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x002432D0: mtc1        $v0, $f2
    ctx->f2.u32l = ctx->r2;
    // 0x002432D4: cvt.d.w     $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    ctx->f2.d = CVT_D_W(ctx->f2.u32l);
    // 0x002432D8: bgez        $v0, L_002432EC
    if (SIGNED(ctx->r2) >= 0) {
        // 0x002432DC: nop
    
            goto L_002432EC;
    }
    // 0x002432DC: nop

    // 0x002432E0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002432E4: ldc1        $f0, 0x68B8($at)
    CHECK_FR(ctx, 0);
    ctx->f0.u64 = LD(ctx->r1, 0X68B8);
    // 0x002432E8: add.d       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.d); NAN_CHECK(ctx->f0.d); 
    ctx->f2.d = ctx->f2.d + ctx->f0.d;
L_002432EC:
    // 0x002432EC: lwc1        $f1, 0xD8($s2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r18, 0XD8);
    // 0x002432F0: cvt.s.d     $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.d); 
    ctx->f0.fl = CVT_S_D(ctx->f2.d);
    // 0x002432F4: c.le.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl <= ctx->f1.fl;
    // 0x002432F8: nop

    // 0x002432FC: bc1f        L_0024331C
    if (!c1cs) {
        // 0x00243300: nop
    
            goto L_0024331C;
    }
    // 0x00243300: nop

    // 0x00243304: lbu         $v0, 0xC7($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XC7);
    // 0x00243308: lw          $v1, 0x0($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X0);
    // 0x0024330C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x00243310: ori         $v1, $v1, 0x1
    ctx->r3 = ctx->r3 | 0X1;
        turok2_patch_scale_anim_repeat(rdram, ctx);

    // 0x00243314: sb          $v0, 0xC7($s1)
    MEM_B(0XC7, ctx->r17) = ctx->r2;
    // 0x00243318: sw          $v1, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r3;
L_0024331C:
    // 0x0024331C: lb          $v0, 0xE2($s2)
    ctx->r2 = MEM_B(ctx->r18, 0XE2);
    // 0x00243320: beq         $v0, $zero, L_00243358
    if (ctx->r2 == 0) {
        // 0x00243324: nop
    
            goto L_00243358;
    }
    // 0x00243324: nop

    // 0x00243328: sb          $zero, 0xE2($s2)
    MEM_B(0XE2, ctx->r18) = 0;
    // 0x0024332C: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x00243330: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x00243334: bne         $v0, $zero, L_00243348
    if (ctx->r2 != 0) {
        // 0x00243338: nop
    
            goto L_00243348;
    }
    // 0x00243338: nop

    // 0x0024333C: lbu         $v0, 0xC7($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XC7);
    // 0x00243340: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        turok2_patch_scale_anim_repeat(rdram, ctx);

    // 0x00243344: sb          $v0, 0xC7($s1)
    MEM_B(0XC7, ctx->r17) = ctx->r2;
L_00243348:
    // 0x00243348: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x0024334C: addiu       $v1, $zero, -0x2
    ctx->r3 = ADD32(0, -0X2);
    // 0x00243350: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x00243354: sw          $v0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r2;
L_00243358:
    // 0x00243358: lw          $v0, 0x3C($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X3C);
    // 0x0024335C: andi        $v0, $v0, 0x10
    ctx->r2 = ctx->r2 & 0X10;
    // 0x00243360: beq         $v0, $zero, L_00243374
    if (ctx->r2 == 0) {
        // 0x00243364: nop
    
            goto L_00243374;
    }
    // 0x00243364: nop

    // 0x00243368: lwc1        $f1, 0xC0($s1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r17, 0XC0);
    // 0x0024336C: j           L_00243380
    // 0x00243370: nop

        goto L_00243380;
    // 0x00243370: nop

L_00243374:
    // 0x00243374: lwc1        $f1, 0xBC($s1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r17, 0XBC);
    // 0x00243378: lwc1        $f0, 0xC0($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0XC0);
    // 0x0024337C: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
L_00243380:
    // 0x00243380: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00243384: lwc1        $f0, 0x6D28($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6D28);
    // 0x00243388: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0024338C: lw          $a2, 0x3C($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X3C);
    // 0x00243390: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x00243394: srl         $a2, $a2, 5
    ctx->r6 = S32(U32(ctx->r6) >> 5);
    // 0x00243398: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0024339C: swc1        $f0, 0x6D28($at)
    MEM_W(0X6D28, ctx->r1) = ctx->f0.u32l;
    // 0x002433A0: lb          $a1, 0xC6($s1)
    ctx->r5 = MEM_B(ctx->r17, 0XC6);
    // 0x002433A4: jal         0x0021E9F8
    // 0x002433A8: andi        $a2, $a2, 0x1
    ctx->r6 = ctx->r6 & 0X1;
    func_0021E9F8(rdram, ctx);
        goto after_5;
    // 0x002433A8: andi        $a2, $a2, 0x1
    ctx->r6 = ctx->r6 & 0X1;
    after_5:
    // 0x002433AC: lb          $v1, 0xC6($s1)
    ctx->r3 = MEM_B(ctx->r17, 0XC6);
    // 0x002433B0: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x002433B4: beq         $v1, $v0, L_002433DC
    if (ctx->r3 == ctx->r2) {
        // 0x002433B8: nop
    
            goto L_002433DC;
    }
    // 0x002433B8: nop

    // 0x002433BC: lh          $v0, 0xDE($s2)
    ctx->r2 = MEM_H(ctx->r18, 0XDE);
    // 0x002433C0: beq         $v0, $v1, L_002433DC
    if (ctx->r2 == ctx->r3) {
        // 0x002433C4: addiu       $v1, $zero, -0x2
        ctx->r3 = ADD32(0, -0X2);
            goto L_002433DC;
    }
    // 0x002433C4: addiu       $v1, $zero, -0x2
    ctx->r3 = ADD32(0, -0X2);
    // 0x002433C8: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x002433CC: sb          $zero, 0xC7($s1)
    MEM_B(0XC7, ctx->r17) = 0;
    // 0x002433D0: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x002433D4: sw          $v0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r2;
    // 0x002433D8: sb          $zero, 0xE2($s2)
    MEM_B(0XE2, ctx->r18) = 0;
L_002433DC:
    // 0x002433DC: lw          $v0, 0xD4($s2)
    ctx->r2 = MEM_W(ctx->r18, 0XD4);
    // 0x002433E0: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x002433E4: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x002433E8: beq         $v0, $zero, L_002433FC
    if (ctx->r2 == 0) {
        // 0x002433EC: nop
    
            goto L_002433FC;
    }
    // 0x002433EC: nop

    // 0x002433F0: lbu         $v0, 0xC7($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XC7);
    // 0x002433F4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        turok2_patch_scale_anim_repeat(rdram, ctx);

    // 0x002433F8: sb          $v0, 0xC7($s1)
    MEM_B(0XC7, ctx->r17) = ctx->r2;
L_002433FC:
    // 0x002433FC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x00243400: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x00243404: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00243408: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0024340C: jr          $ra
    // 0x00243410: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00243410: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_004435B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004435B4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x004435B8: lui         $v1, 0xE7FF
    ctx->r3 = S32(0XE7FF << 16);
    // 0x004435BC: lui         $a2, 0x8013
    ctx->r6 = S32(0X8013 << 16);
    // 0x004435C0: addiu       $a2, $a2, -0x490
    ctx->r6 = ADD32(ctx->r6, -0X490);
    // 0x004435C4: addiu       $v0, $zero, 0x600
    ctx->r2 = ADD32(0, 0X600);
    // 0x004435C8: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x004435CC: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x004435D0: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x004435D4: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x004435D8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x004435DC: sw          $v0, 0x688($a2)
    MEM_W(0X688, ctx->r6) = ctx->r2;
    // 0x004435E0: addiu       $v0, $zero, 0x900
    ctx->r2 = ADD32(0, 0X900);
    // 0x004435E4: sw          $v0, 0x68C($a2)
    MEM_W(0X68C, ctx->r6) = ctx->r2;
    // 0x004435E8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x004435EC: sw          $v0, 0x65C($a2)
    MEM_W(0X65C, ctx->r6) = ctx->r2;
    // 0x004435F0: sw          $zero, 0x67C($a2)
    MEM_W(0X67C, ctx->r6) = 0;
    // 0x004435F4: lw          $v0, 0x27C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X27C);
    // 0x004435F8: ori         $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 | 0XFFFF;
    // 0x004435FC: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x00443600: sw          $v0, 0x27C($a0)
    MEM_W(0X27C, ctx->r4) = ctx->r2;
    // 0x00443604: lw          $v0, 0x65C($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X65C);
    // 0x00443608: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x0044360C: lui         $at, 0x43
    ctx->r1 = S32(0X43 << 16);
    // 0x00443610: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x00443614: lw          $v0, 0x1D04($at)
    ctx->r2 = MEM_W(ctx->r1, 0X1D04);
    // 0x00443618: sw          $v0, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->r2;
    // 0x0044361C: lw          $v0, 0x65C($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X65C);
    // 0x00443620: lui         $a0, 0x1
    ctx->r4 = S32(0X1 << 16);
    // 0x00443624: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x00443628: lui         $at, 0x43
    ctx->r1 = S32(0X43 << 16);
    // 0x0044362C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x00443630: lw          $v1, 0x1D1C($at)
    ctx->r3 = MEM_W(ctx->r1, 0X1D1C);
    // 0x00443634: ori         $a0, $a0, 0x2C00
    ctx->r4 = ctx->r4 | 0X2C00;
    // 0x00443638: sw          $v1, 0x664($a2)
    MEM_W(0X664, ctx->r6) = ctx->r3;
    // 0x0044363C: lui         $at, 0x43
    ctx->r1 = S32(0X43 << 16);
    // 0x00443640: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x00443644: lw          $a3, 0x1D10($at)
    ctx->r7 = MEM_W(ctx->r1, 0X1D10);
    // 0x00443648: ori         $v0, $zero, 0x9600
    ctx->r2 = 0 | 0X9600;
    // 0x0044364C: sw          $v0, 0x220($a2)
    MEM_W(0X220, ctx->r6) = ctx->r2;
    // 0x00443650: sw          $v0, 0x80($a2)
    MEM_W(0X80, ctx->r6) = ctx->r2;
    // 0x00443654: sw          $a0, 0x678($a2)
    MEM_W(0X678, ctx->r6) = ctx->r4;
    // 0x00443658: sw          $a0, 0x674($a2)
    MEM_W(0X674, ctx->r6) = ctx->r4;
    // 0x0044365C: sw          $a3, 0x660($a2)
    MEM_W(0X660, ctx->r6) = ctx->r7;
    // 0x00443660: lb          $v1, 0x34($a1)
    ctx->r3 = MEM_B(ctx->r5, 0X34);
    // 0x00443664: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
    // 0x00443668: beq         $v1, $v0, L_004436D4
    if (ctx->r3 == ctx->r2) {
        // 0x0044366C: addu        $s2, $a3, $zero
        ctx->r18 = ADD32(ctx->r7, 0);
            goto L_004436D4;
    }
    // 0x0044366C: addu        $s2, $a3, $zero
    ctx->r18 = ADD32(ctx->r7, 0);
    // 0x00443670: addu        $s3, $a2, $zero
    ctx->r19 = ADD32(ctx->r6, 0);
    // 0x00443674: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x00443678: addiu       $s1, $zero, 0x18
    ctx->r17 = ADD32(0, 0X18);
L_0044367C:
    // 0x0044367C: srav        $v0, $s2, $s0
    ctx->r2 = S32(SIGNED(ctx->r18) >> (ctx->r16 & 31));
    // 0x00443680: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x00443684: beql        $v0, $zero, L_004436A4
    if (ctx->r2 == 0) {
        // 0x00443688: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_004436A4;
    }
    goto skip_0;
    // 0x00443688: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    skip_0:
    // 0x0044368C: addu        $a0, $s3, $s1
    ctx->r4 = ADD32(ctx->r19, ctx->r17);
    // 0x00443690: lui         $a1, 0x43
    ctx->r5 = S32(0X43 << 16);
    // 0x00443694: addiu       $a1, $a1, 0x1D28
    ctx->r5 = ADD32(ctx->r5, 0X1D28);
    // 0x00443698: jal         0x00236314
    // 0x0044369C: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    func_00236314(rdram, ctx);
        goto after_0;
    // 0x0044369C: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    after_0:
    // 0x004436A0: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_004436A4:
    // 0x004436A4: slti        $v0, $s0, 0xF
    ctx->r2 = SIGNED(ctx->r16) < 0XF ? 1 : 0;
    // 0x004436A8: bne         $v0, $zero, L_0044367C
    if (ctx->r2 != 0) {
        // 0x004436AC: addiu       $s1, $s1, 0x68
        ctx->r17 = ADD32(ctx->r17, 0X68);
            goto L_0044367C;
    }
    // 0x004436AC: addiu       $s1, $s1, 0x68
    ctx->r17 = ADD32(ctx->r17, 0X68);
    // 0x004436B0: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
L_004436B4:
    // 0x004436B4: lui         $a1, 0x43
    ctx->r5 = S32(0X43 << 16);
    // 0x004436B8: addiu       $a1, $a1, 0x1CFC
    ctx->r5 = ADD32(ctx->r5, 0X1CFC);
    // 0x004436BC: jal         0x00409500
    // 0x004436C0: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_00409500(rdram, ctx);
        goto after_1;
    // 0x004436C0: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_1:
    // 0x004436C4: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x004436C8: slti        $v0, $s0, 0x3
    ctx->r2 = SIGNED(ctx->r16) < 0X3 ? 1 : 0;
    // 0x004436CC: bne         $v0, $zero, L_004436B4
    if (ctx->r2 != 0) {
        // 0x004436D0: nop
    
            goto L_004436B4;
    }
    // 0x004436D0: nop

L_004436D4:
    // 0x004436D4: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x004436D8: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x004436DC: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x004436E0: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x004436E4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x004436E8: jr          $ra
    // 0x004436EC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x004436EC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_00407410(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00407410: lw          $v0, 0xD4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XD4);
    // 0x00407414: ori         $v0, $v0, 0x2000
    ctx->r2 = ctx->r2 | 0X2000;
    // 0x00407418: sw          $v0, 0xD4($a0)
    MEM_W(0XD4, ctx->r4) = ctx->r2;
    // 0x0040741C: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x00407420: sw          $zero, -0x628($at)
    MEM_W(-0X628, ctx->r1) = 0;
    // 0x00407424: jr          $ra
    // 0x00407428: nop

    return;
    // 0x00407428: nop

;}
RECOMP_FUNC void func_00418090(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00418090: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00418094: addu        $a0, $a1, $zero
    ctx->r4 = ADD32(ctx->r5, 0);
    // 0x00418098: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x0041809C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x004180A0: lw          $v0, 0x1C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X1C);
    // 0x004180A4: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x004180A8: lw          $s0, 0x518($v0)
    ctx->r16 = MEM_W(ctx->r2, 0X518);
    // 0x004180AC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x004180B0: lb          $a1, 0x2B($s0)
    ctx->r5 = MEM_B(ctx->r16, 0X2B);
    // 0x004180B4: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    // 0x004180B8: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x004180BC: jal         0x0041648C
    // 0x004180C0: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    func_0041648C(rdram, ctx);
        goto after_0;
    // 0x004180C0: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    after_0:
    // 0x004180C4: sb          $v0, 0x2B($s0)
    MEM_B(0X2B, ctx->r16) = ctx->r2;
    // 0x004180C8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x004180CC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x004180D0: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x004180D4: jr          $ra
    // 0x004180D8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x004180D8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_00454128(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00454128: jr          $ra
    // 0x0045412C: addiu       $v0, $zero, 0x1F40
    ctx->r2 = ADD32(0, 0X1F40);
    return;
    // 0x0045412C: addiu       $v0, $zero, 0x1F40
    ctx->r2 = ADD32(0, 0X1F40);
;}
RECOMP_FUNC void func_00239160(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00239160: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    // 0x00239164: lbu         $v1, 0x0($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X0);
    // 0x00239168: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0023916C: bne         $v1, $v0, L_0023918C
    if (ctx->r3 != ctx->r2) {
        // 0x00239170: nop
    
            goto L_0023918C;
    }
    // 0x00239170: nop

    // 0x00239174: lw          $v0, 0x18($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X18);
    // 0x00239178: sllv        $v0, $v1, $v0
    ctx->r2 = S32(ctx->r3 << (ctx->r2 & 31));
    // 0x0023917C: lw          $v1, 0x27C($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X27C);
    // 0x00239180: nor         $v0, $zero, $v0
    ctx->r2 = ~(0 | ctx->r2);
    // 0x00239184: and         $v1, $v1, $v0
    ctx->r3 = ctx->r3 & ctx->r2;
    // 0x00239188: sw          $v1, 0x27C($a0)
    MEM_W(0X27C, ctx->r4) = ctx->r3;
L_0023918C:
    // 0x0023918C: jr          $ra
    // 0x00239190: nop

    return;
    // 0x00239190: nop

;}
RECOMP_FUNC void func_0026E19C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0026E19C: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x0026E1A0: addu        $v0, $a0, $zero
    ctx->r2 = ADD32(ctx->r4, 0);
    // 0x0026E1A4: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x0026E1A8: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x0026E1AC: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x0026E1B0: addu        $s1, $a2, $zero
    ctx->r17 = ADD32(ctx->r6, 0);
    // 0x0026E1B4: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x0026E1B8: addiu       $a0, $a0, 0x7078
    ctx->r4 = ADD32(ctx->r4, 0X7078);
    // 0x0026E1BC: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x0026E1C0: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    // 0x0026E1C4: sw          $ra, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r31;
    // 0x0026E1C8: jal         0x00224FC0
    // 0x0026E1CC: addiu       $a3, $sp, 0x24
    ctx->r7 = ADD32(ctx->r29, 0X24);
    func_00224FC0(rdram, ctx);
        goto after_0;
    // 0x0026E1CC: addiu       $a3, $sp, 0x24
    ctx->r7 = ADD32(ctx->r29, 0X24);
    after_0:
    // 0x0026E1D0: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x0026E1D4: beq         $a1, $zero, L_0026E1FC
    if (ctx->r5 == 0) {
        // 0x0026E1D8: addu        $a2, $zero, $zero
        ctx->r6 = ADD32(0, 0);
            goto L_0026E1FC;
    }
    // 0x0026E1D8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x0026E1DC: andi        $a3, $s0, 0x7FF
    ctx->r7 = ctx->r16 & 0X7FF;
    // 0x0026E1E0: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x0026E1E4: andi        $v0, $s0, 0x3800
    ctx->r2 = ctx->r16 & 0X3800;
    // 0x0026E1E8: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x0026E1EC: addiu       $v0, $zero, 0x3800
    ctx->r2 = ADD32(0, 0X3800);
    // 0x0026E1F0: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x0026E1F4: jal         0x0026E4B8
    // 0x0026E1F8: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    func_0026E4B8(rdram, ctx);
        goto after_1;
    // 0x0026E1F8: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    after_1:
L_0026E1FC:
    // 0x0026E1FC: lw          $ra, 0x30($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X30);
    // 0x0026E200: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x0026E204: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x0026E208: jr          $ra
    // 0x0026E20C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x0026E20C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_0044068C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0044068C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00440690: lwc1        $f0, 0x534($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X534);
    // 0x00440694: swc1        $f0, 0x1FC($a0)
    MEM_W(0X1FC, ctx->r4) = ctx->f0.u32l;
    // 0x00440698: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0044069C: swc1        $f0, -0x61C($at)
    MEM_W(-0X61C, ctx->r1) = ctx->f0.u32l;
    // 0x004406A0: lw          $v0, 0xD4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XD4);
    // 0x004406A4: ori         $v0, $v0, 0x2000
    ctx->r2 = ctx->r2 | 0X2000;
    // 0x004406A8: jr          $ra
    // 0x004406AC: sw          $v0, 0xD4($a0)
    MEM_W(0XD4, ctx->r4) = ctx->r2;
    return;
    // 0x004406AC: sw          $v0, 0xD4($a0)
    MEM_W(0XD4, ctx->r4) = ctx->r2;
;}
RECOMP_FUNC void func_0027B4EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0027B4EC: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0027B4F0: lw          $v0, 0x2AC0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2AC0);
    // 0x0027B4F4: jr          $ra
    // 0x0027B4F8: nop

    return;
    // 0x0027B4F8: nop

;}
RECOMP_FUNC void func_002553BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002553BC: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x002553C0: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x002553C4: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x002553C8: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x002553CC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x002553D0: sdc1        $f21, 0x28($sp)
    CHECK_FR(ctx, 21);
    SD(ctx->f21.u64, 0X28, ctx->r29);
    // 0x002553D4: sdc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X20, ctx->r29);
    // 0x002553D8: lw          $v0, 0xA1C($s1)
    ctx->r2 = MEM_W(ctx->r17, 0XA1C);
    // 0x002553DC: andi        $v0, $v0, 0x8000
    ctx->r2 = ctx->r2 & 0X8000;
    // 0x002553E0: beq         $v0, $zero, L_002554B4
    if (ctx->r2 == 0) {
        // 0x002553E4: addu        $s0, $a1, $zero
        ctx->r16 = ADD32(ctx->r5, 0);
            goto L_002554B4;
    }
    // 0x002553E4: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x002553E8: lw          $a0, 0xBB0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0XBB0);
    // 0x002553EC: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    // 0x002553F0: jal         0x0025EC28
    // 0x002553F4: addiu       $a1, $a0, 0x140
    ctx->r5 = ADD32(ctx->r4, 0X140);
    func_0025EC28(rdram, ctx);
        goto after_0;
    // 0x002553F4: addiu       $a1, $a0, 0x140
    ctx->r5 = ADD32(ctx->r4, 0X140);
    after_0:
    // 0x002553F8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x002553FC: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x00255400: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    // 0x00255404: sw          $zero, 0xBB0($a0)
    MEM_W(0XBB0, ctx->r4) = 0;
    // 0x00255408: sw          $zero, 0xA78($a0)
    MEM_W(0XA78, ctx->r4) = 0;
    // 0x0025540C: jal         0x0024E5F0
    // 0x00255410: sw          $zero, 0xA7C($a0)
    MEM_W(0XA7C, ctx->r4) = 0;
    func_0024E5F0(rdram, ctx);
        goto after_1;
    // 0x00255410: sw          $zero, 0xA7C($a0)
    MEM_W(0XA7C, ctx->r4) = 0;
    after_1:
    // 0x00255414: lwc1        $f12, 0x50($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X50);
    // 0x00255418: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0025541C: lwc1        $f20, 0x7158($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X7158);
    // 0x00255420: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00255424: lwc1        $f21, 0x715C($at)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r1, 0X715C);
    // 0x00255428: jal         0x002982F0
    // 0x0025542C: add.s       $f12, $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f20.fl;
    func_002982F0(rdram, ctx);
        goto after_2;
    // 0x0025542C: add.s       $f12, $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f20.fl;
    after_2:
    // 0x00255430: mul.s       $f0, $f0, $f21
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f21.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f21.fl);
    // 0x00255434: lwc1        $f2, 0x4($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X4);
    // 0x00255438: lwc1        $f1, 0x8($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X8);
    // 0x0025543C: sub.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f2.fl - ctx->f0.fl;
    // 0x00255440: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00255444: lwc1        $f0, 0x7160($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X7160);
    // 0x00255448: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x0025544C: lwc1        $f12, 0x50($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X50);
    // 0x00255450: add.s       $f12, $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f20.fl;
    // 0x00255454: swc1        $f2, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f2.u32l;
    // 0x00255458: jal         0x002974C0
    // 0x0025545C: swc1        $f1, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f_odd[(1 - 1) * 2];
    func_002974C0(rdram, ctx);
        goto after_3;
    // 0x0025545C: swc1        $f1, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f_odd[(1 - 1) * 2];
    after_3:
    // 0x00255460: mul.s       $f0, $f0, $f21
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f21.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f21.fl);
    // 0x00255464: lwc1        $f1, 0xC($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0XC);
    // 0x00255468: sub.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl - ctx->f0.fl;
    // 0x0025546C: lwc1        $f12, 0x50($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X50);
    // 0x00255470: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00255474: lwc1        $f21, 0x7164($at)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r1, 0X7164);
    // 0x00255478: add.s       $f12, $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f20.fl;
    // 0x0025547C: jal         0x002982F0
    // 0x00255480: swc1        $f1, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f_odd[(1 - 1) * 2];
    func_002982F0(rdram, ctx);
        goto after_4;
    // 0x00255480: swc1        $f1, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f_odd[(1 - 1) * 2];
    after_4:
    // 0x00255484: mul.s       $f0, $f0, $f21
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f21.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f21.fl);
    // 0x00255488: lwc1        $f12, 0x50($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X50);
    // 0x0025548C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00255490: lwc1        $f1, 0x7168($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X7168);
    // 0x00255494: add.s       $f12, $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f20.fl;
    // 0x00255498: swc1        $f1, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f_odd[(1 - 1) * 2];
    // 0x0025549C: jal         0x002974C0
    // 0x002554A0: swc1        $f0, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->f0.u32l;
    func_002974C0(rdram, ctx);
        goto after_5;
    // 0x002554A0: swc1        $f0, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->f0.u32l;
    after_5:
    // 0x002554A4: mul.s       $f0, $f0, $f21
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f21.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f21.fl);
    // 0x002554A8: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    // 0x002554AC: jal         0x00206068
    // 0x002554B0: swc1        $f0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f0.u32l;
    func_00206068(rdram, ctx);
        goto after_6;
    // 0x002554B0: swc1        $f0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f0.u32l;
    after_6:
L_002554B4:
    // 0x002554B4: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x002554B8: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x002554BC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x002554C0: ldc1        $f21, 0x28($sp)
    CHECK_FR(ctx, 21);
    ctx->f21.u64 = LD(ctx->r29, 0X28);
    // 0x002554C4: ldc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X20);
    // 0x002554C8: jr          $ra
    // 0x002554CC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x002554CC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_002259D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002259D0: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x002259D4: sw          $s5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r21;
    // 0x002259D8: addu        $s5, $a1, $zero
    ctx->r21 = ADD32(ctx->r5, 0);
    // 0x002259DC: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x002259E0: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    // 0x002259E4: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x002259E8: addu        $s3, $s2, $zero
    ctx->r19 = ADD32(ctx->r18, 0);
    // 0x002259EC: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x002259F0: sw          $s6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r22;
    // 0x002259F4: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x002259F8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x002259FC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00225A00: sdc1        $f20, 0x30($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X30, ctx->r29);
    // 0x00225A04: lw          $s4, 0x1060($a0)
    ctx->r20 = MEM_W(ctx->r4, 0X1060);
    // 0x00225A08: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00225A0C: lwc1        $f20, 0x6000($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X6000);
    // 0x00225A10: blez        $s4, L_00225AA4
    if (SIGNED(ctx->r20) <= 0) {
        // 0x00225A14: addiu       $a0, $a0, 0x1050
        ctx->r4 = ADD32(ctx->r4, 0X1050);
            goto L_00225AA4;
    }
    // 0x00225A14: addiu       $a0, $a0, 0x1050
    ctx->r4 = ADD32(ctx->r4, 0X1050);
    // 0x00225A18: addiu       $s6, $zero, 0x5
    ctx->r22 = ADD32(0, 0X5);
    // 0x00225A1C: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
L_00225A20:
    // 0x00225A20: lw          $s0, 0x0($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X0);
    // 0x00225A24: lw          $v0, 0x14($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X14);
    // 0x00225A28: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x00225A2C: bnel        $v0, $s6, L_00225A98
    if (ctx->r2 != ctx->r22) {
        // 0x00225A30: addiu       $s2, $s2, 0x1
        ctx->r18 = ADD32(ctx->r18, 0X1);
            goto L_00225A98;
    }
    goto skip_0;
    // 0x00225A30: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    skip_0:
    // 0x00225A34: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00225A38: jal         0x00264C80
    // 0x00225A3C: addiu       $a1, $s0, 0x140
    ctx->r5 = ADD32(ctx->r16, 0X140);
    func_00264C80(rdram, ctx);
        goto after_0;
    // 0x00225A3C: addiu       $a1, $s0, 0x140
    ctx->r5 = ADD32(ctx->r16, 0X140);
    after_0:
    // 0x00225A40: bne         $v0, $zero, L_00225A98
    if (ctx->r2 != 0) {
        // 0x00225A44: addiu       $s2, $s2, 0x1
        ctx->r18 = ADD32(ctx->r18, 0X1);
            goto L_00225A98;
    }
    // 0x00225A44: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x00225A48: lwc1        $f2, 0x4($s5)
    ctx->f2.u32l = MEM_W(ctx->r21, 0X4);
    // 0x00225A4C: lwc1        $f0, 0x4($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X4);
    // 0x00225A50: sub.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f2.fl - ctx->f0.fl;
    // 0x00225A54: mul.s       $f2, $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x00225A58: lwc1        $f3, 0x8($s5)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r21, 0X8);
    // 0x00225A5C: lwc1        $f0, 0x8($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X8);
    // 0x00225A60: sub.s       $f3, $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f3.fl = ctx->f3.fl - ctx->f0.fl;
    // 0x00225A64: mul.s       $f3, $f3, $f3
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f3.fl = MUL_S(ctx->f3.fl, ctx->f3.fl);
    // 0x00225A68: lwc1        $f1, 0xC($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0XC);
    // 0x00225A6C: lwc1        $f0, 0xC($s5)
    ctx->f0.u32l = MEM_W(ctx->r21, 0XC);
    // 0x00225A70: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x00225A74: mul.s       $f0, $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x00225A78: add.s       $f2, $f2, $f3
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f3.fl;
    // 0x00225A7C: add.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f0.fl;
    // 0x00225A80: c.lt.s      $f2, $f20
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f2.fl < ctx->f20.fl;
    // 0x00225A84: nop

    // 0x00225A88: bc1f        L_00225A98
    if (!c1cs) {
        // 0x00225A8C: nop
    
            goto L_00225A98;
    }
    // 0x00225A8C: nop

    // 0x00225A90: mov.s       $f20, $f2
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 2);
    ctx->f20.fl = ctx->f2.fl;
    // 0x00225A94: addu        $s3, $s0, $zero
    ctx->r19 = ADD32(ctx->r16, 0);
L_00225A98:
    // 0x00225A98: slt         $v0, $s2, $s4
    ctx->r2 = SIGNED(ctx->r18) < SIGNED(ctx->r20) ? 1 : 0;
    // 0x00225A9C: bne         $v0, $zero, L_00225A20
    if (ctx->r2 != 0) {
        // 0x00225AA0: addiu       $s1, $s1, 0x4
        ctx->r17 = ADD32(ctx->r17, 0X4);
            goto L_00225A20;
    }
    // 0x00225AA0: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
L_00225AA4:
    // 0x00225AA4: addu        $v0, $s3, $zero
    ctx->r2 = ADD32(ctx->r19, 0);
    // 0x00225AA8: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x00225AAC: lw          $s6, 0x28($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X28);
    // 0x00225AB0: lw          $s5, 0x24($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X24);
    // 0x00225AB4: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x00225AB8: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x00225ABC: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x00225AC0: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00225AC4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00225AC8: ldc1        $f20, 0x30($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X30);
    // 0x00225ACC: jr          $ra
    // 0x00225AD0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x00225AD0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_0041880C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041880C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00418810: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00418814: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x00418818: lui         $s0, 0x8012
    ctx->r16 = S32(0X8012 << 16);
    // 0x0041881C: addiu       $s0, $s0, -0x5528
    ctx->r16 = ADD32(ctx->r16, -0X5528);
    // 0x00418820: addu        $a0, $a1, $zero
    ctx->r4 = ADD32(ctx->r5, 0);
    // 0x00418824: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x00418828: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x0041882C: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x00418830: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x00418834: lbu         $v0, 0x29($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X29);
    // 0x00418838: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x0041883C: jal         0x0041648C
    // 0x00418840: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    func_0041648C(rdram, ctx);
        goto after_0;
    // 0x00418840: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    after_0:
    // 0x00418844: sb          $v0, 0x29($s0)
    MEM_B(0X29, ctx->r16) = ctx->r2;
    // 0x00418848: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x0041884C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x00418850: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x00418854: jr          $ra
    // 0x00418858: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00418858: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_002858CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002858CC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x002858D0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x002858D4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x002858D8: jal         0x00285A54
    // 0x002858DC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    func_00285A54(rdram, ctx);
        goto after_0;
    // 0x002858DC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    after_0:
    // 0x002858E0: beq         $v0, $zero, L_00285908
    if (ctx->r2 == 0) {
        // 0x002858E4: sll         $v1, $s0, 2
        ctx->r3 = S32(ctx->r16 << 2);
            goto L_00285908;
    }
    // 0x002858E4: sll         $v1, $s0, 2
    ctx->r3 = S32(ctx->r16 << 2);
    // 0x002858E8: lui         $at, 0x800F
    ctx->r1 = S32(0X800F << 16);
    // 0x002858EC: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x002858F0: lw          $v0, 0x6788($at)
    ctx->r2 = MEM_W(ctx->r1, 0X6788);
    // 0x002858F4: lui         $at, 0x800F
    ctx->r1 = S32(0X800F << 16);
    // 0x002858F8: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x002858FC: sw          $zero, 0x6788($at)
    MEM_W(0X6788, ctx->r1) = 0;
    // 0x00285900: j           L_0028590C
    // 0x00285904: nop

        goto L_0028590C;
    // 0x00285904: nop

L_00285908:
    // 0x00285908: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_0028590C:
    // 0x0028590C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x00285910: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00285914: jr          $ra
    // 0x00285918: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00285918: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0026CCA0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0026CCA0: jr          $ra
    // 0x0026CCA4: nop

    return;
    // 0x0026CCA4: nop

;}
RECOMP_FUNC void func_004034E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004034E0: lw          $v0, 0x218($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X218);
    // 0x004034E4: sw          $a1, 0x214($a0)
    MEM_W(0X214, ctx->r4) = ctx->r5;
    // 0x004034E8: lw          $v1, 0x4($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X4);
    // 0x004034EC: sw          $zero, 0x21C($a0)
    MEM_W(0X21C, ctx->r4) = 0;
    // 0x004034F0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x004034F4: sw          $v0, 0x218($a0)
    MEM_W(0X218, ctx->r4) = ctx->r2;
    // 0x004034F8: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x004034FC: beq         $v0, $zero, L_00403518
    if (ctx->r2 == 0) {
            // 0x00403500: nop

    func_00403518(rdram, ctx);
    return;
    }
    // 0x00403500: nop

    // 0x00403504: lw          $v0, 0x4($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X4);
    // 0x00403508: beq         $v0, $zero, L_00403518
    if (ctx->r2 == 0) {
            // 0x0040350C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    func_00403518(rdram, ctx);
    return;
    }
    // 0x0040350C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00403510: jr          $ra
    // 0x00403514: sw          $v0, 0x250($a0)
    MEM_W(0X250, ctx->r4) = ctx->r2;
    return;
    // 0x00403514: sw          $v0, 0x250($a0)
    MEM_W(0X250, ctx->r4) = ctx->r2;
;}
RECOMP_FUNC void func_00294498(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00294498: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x0029449C: sw          $v0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r2;
;}
RECOMP_FUNC void func_00457B64(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_0041ECE0:
    // 0x00457B64: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
L_0041ECE8:
    // 0x00457B68: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x00457B6C: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x00457B70: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x00457B74: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x00457B78: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x00457B7C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x00457B80: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00457B84: sw          $v0, 0x2024($at)
    MEM_W(0X2024, ctx->r1) = ctx->r2;
    // 0x00457B88: lw          $v0, 0x20($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X20);
    // 0x00457B8C: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x00457B90: lw          $v1, 0x2020($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X2020);
    // 0x00457B94: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x00457B98: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x00457B9C: sw          $zero, 0x984($at)
    MEM_W(0X984, ctx->r1) = 0;
    // 0x00457BA0: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x00457BA4: sw          $zero, 0x9A0($at)
    MEM_W(0X9A0, ctx->r1) = 0;
    // 0x00457BA8: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x00457BAC: sw          $t0, 0x994($at)
    MEM_W(0X994, ctx->r1) = ctx->r8;
    // 0x00457BB0: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x00457BB4: sw          $zero, 0x9B4($at)
    MEM_W(0X9B4, ctx->r1) = 0;
    // 0x00457BB8: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x00457BBC: sw          $zero, 0x9BC($at)
    MEM_W(0X9BC, ctx->r1) = 0;
    // 0x00457BC0: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x00457BC4: sw          $zero, 0x990($at)
    MEM_W(0X990, ctx->r1) = 0;
    // 0x00457BC8: lb          $s0, 0x4($v0)
    ctx->r16 = MEM_B(ctx->r2, 0X4);
    // 0x00457BCC: beq         $v1, $zero, L_00457C00
    if (ctx->r3 == 0) {
        // 0x00457BD0: lui         $v1, 0xFEFF
        ctx->r3 = S32(0XFEFF << 16);
            goto L_00457C00;
    }
    // 0x00457BD0: lui         $v1, 0xFEFF
    ctx->r3 = S32(0XFEFF << 16);
    // 0x00457BD4: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x00457BD8: addiu       $a0, $a0, -0x61D4
    ctx->r4 = ADD32(ctx->r4, -0X61D4);
    // 0x00457BDC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x00457BE0: lw          $a2, 0x1C($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X1C);
    // 0x00457BE4: lw          $a3, 0x20($s1)
    ctx->r7 = MEM_W(ctx->r17, 0X20);
    // 0x00457BE8: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x00457BEC: addiu       $a1, $a1, -0x6F50
    ctx->r5 = ADD32(ctx->r5, -0X6F50);
    // 0x00457BF0: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x00457BF4: sw          $t0, 0x9BC($at)
    MEM_W(0X9BC, ctx->r1) = ctx->r8;
    // 0x00457BF8: j           L_0041ECE0
    // 0x00457BFC: nop

    entry_0041ECE0(rdram, ctx);
    return;
    // 0x00457BFC: nop

L_00457C00:
    // 0x00457C00: lw          $a0, 0xC($s1)
    ctx->r4 = MEM_W(ctx->r17, 0XC);
    // 0x00457C04: lw          $v0, 0x328($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X328);
    // 0x00457C08: ori         $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 | 0XFFFF;
    // 0x00457C0C: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x00457C10: sw          $v0, 0x328($a0)
    MEM_W(0X328, ctx->r4) = ctx->r2;
    // 0x00457C14: lw          $v0, 0x20($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X20);
    // 0x00457C18: lb          $a0, 0x4($v0)
    ctx->r4 = MEM_B(ctx->r2, 0X4);
    // 0x00457C1C: jal         0x004263A0
    // 0x00457C20: nop

    func_004263A0(rdram, ctx);
        goto after_0;
    // 0x00457C20: nop

    after_0:
    // 0x00457C24: jal         0x0042647C
    // 0x00457C28: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    entry_0042647C(rdram, ctx);
        goto after_1;
    // 0x00457C28: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x00457C2C: bne         $v0, $zero, L_00457C44
    if (ctx->r2 != 0) {
        // 0x00457C30: addiu       $s2, $zero, 0x1
        ctx->r18 = ADD32(0, 0X1);
            goto L_00457C44;
    }
    // 0x00457C30: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
    // 0x00457C34: jal         0x0041D948
    // 0x00457C38: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    entry_0041D948(rdram, ctx);
        goto after_2;
    // 0x00457C38: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_2:
    // 0x00457C3C: j           L_0041ECE8
    // 0x00457C40: nop

    entry_0041ECE8(rdram, ctx);
    return;
    // 0x00457C40: nop

L_00457C44:
    // 0x00457C44: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x00457C48: sw          $s2, 0x9BC($at)
    MEM_W(0X9BC, ctx->r1) = ctx->r18;
    // 0x00457C4C: jal         0x004264B4
    // 0x00457C50: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    entry_004264B4(rdram, ctx);
        goto after_3;
    // 0x00457C50: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x00457C54: beq         $v0, $zero, L_00457C80
    if (ctx->r2 == 0) {
        // 0x00457C58: nop
    
            goto L_00457C80;
    }
    // 0x00457C58: nop

    // 0x00457C5C: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x00457C60: addiu       $a0, $a0, -0x61D4
    ctx->r4 = ADD32(ctx->r4, -0X61D4);
    // 0x00457C64: sw          $s2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r18;
    // 0x00457C68: lw          $a2, 0x1C($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X1C);
    // 0x00457C6C: lw          $a3, 0x20($s1)
    ctx->r7 = MEM_W(ctx->r17, 0X20);
    // 0x00457C70: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x00457C74: addiu       $a1, $a1, -0x4474
    ctx->r5 = ADD32(ctx->r5, -0X4474);
    // 0x00457C78: j           L_0041ECE0
    // 0x00457C7C: nop

    entry_0041ECE0(rdram, ctx);
    return;
    // 0x00457C7C: nop

L_00457C80:
    // 0x00457C80: jal         0x00426AF8
    // 0x00457C84: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00426AF8(rdram, ctx);
        goto after_4;
    // 0x00457C84: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
    // 0x00457C88: beq         $v0, $zero, L_00457CBC
    if (ctx->r2 == 0) {
        // 0x00457C8C: nop
    
            goto L_00457CBC;
    }
    // 0x00457C8C: nop

    // 0x00457C90: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x00457C94: addiu       $a0, $a0, -0x61D4
    ctx->r4 = ADD32(ctx->r4, -0X61D4);
    // 0x00457C98: lui         $v0, 0x44
    ctx->r2 = S32(0X44 << 16);
    // 0x00457C9C: addiu       $v0, $v0, -0x49F0
    ctx->r2 = ADD32(ctx->r2, -0X49F0);
    // 0x00457CA0: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x00457CA4: lw          $a2, 0x1C($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X1C);
    // 0x00457CA8: lw          $a3, 0x20($s1)
    ctx->r7 = MEM_W(ctx->r17, 0X20);
    // 0x00457CAC: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x00457CB0: addiu       $a1, $a1, -0x4084
    ctx->r5 = ADD32(ctx->r5, -0X4084);
    // 0x00457CB4: j           L_0041ECE0
    // 0x00457CB8: nop

    entry_0041ECE0(rdram, ctx);
    return;
    // 0x00457CB8: nop

L_00457CBC:
    // 0x00457CBC: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x00457CC0: addiu       $a0, $a0, -0x61D4
    ctx->r4 = ADD32(ctx->r4, -0X61D4);
    // 0x00457CC4: lui         $v0, 0x44
    ctx->r2 = S32(0X44 << 16);
    // 0x00457CC8: addiu       $v0, $v0, -0x6F50
    ctx->r2 = ADD32(ctx->r2, -0X6F50);
    // 0x00457CCC: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x00457CD0: lw          $a2, 0x1C($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X1C);
    // 0x00457CD4: lw          $a3, 0x20($s1)
    ctx->r7 = MEM_W(ctx->r17, 0X20);
    // 0x00457CD8: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x00457CDC: addiu       $a1, $a1, -0x44E0
    ctx->r5 = ADD32(ctx->r5, -0X44E0);
    // 0x00457CE0: jal         0x00416644
    // 0x00457CE4: nop

    func_00416644(rdram, ctx);
        goto after_5;
    // 0x00457CE4: nop

    after_5:
    // 0x00457CE8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x00457CEC: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x00457CF0: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x00457CF4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x00457CF8: jr          $ra
    // 0x00457CFC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x00457CFC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_0044BEB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0044BEB0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0044BEB4: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x0044BEB8: addiu       $a1, $a0, 0x10
    ctx->r5 = ADD32(ctx->r4, 0X10);
    // 0x0044BEBC: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0044BEC0: lui         $a3, 0x800C
    ctx->r7 = S32(0X800C << 16);
    // 0x0044BEC4: addiu       $a3, $a3, 0x950
    ctx->r7 = ADD32(ctx->r7, 0X950);
    // 0x0044BEC8: jal         0x00204EDC
    // 0x0044BECC: addiu       $a2, $zero, 0x13
    ctx->r6 = ADD32(0, 0X13);
    func_00204EDC(rdram, ctx);
        goto after_0;
    // 0x0044BECC: addiu       $a2, $zero, 0x13
    ctx->r6 = ADD32(0, 0X13);
    after_0:
    // 0x0044BED0: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x0044BED4: beq         $a0, $zero, L_0044BEE8
    if (ctx->r4 == 0) {
        // 0x0044BED8: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_0044BEE8;
    }
    // 0x0044BED8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x0044BEDC: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x0044BEE0: addiu       $v0, $v1, 0x10
    ctx->r2 = ADD32(ctx->r3, 0X10);
    // 0x0044BEE4: sw          $a0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r4;
L_0044BEE8:
    // 0x0044BEE8: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x0044BEEC: jr          $ra
    // 0x0044BEF0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0044BEF0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00442340(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00442340: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x00442344: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x00442348: addu        $s4, $a0, $zero
    ctx->r20 = ADD32(ctx->r4, 0);
    // 0x0044234C: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x00442350: addu        $s5, $a1, $zero
    ctx->r21 = ADD32(ctx->r5, 0);
    // 0x00442354: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x00442358: addiu       $a0, $a0, 0x7078
    ctx->r4 = ADD32(ctx->r4, 0X7078);
    // 0x0044235C: addiu       $a1, $zero, 0x650
    ctx->r5 = ADD32(0, 0X650);
    // 0x00442360: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    // 0x00442364: addiu       $a3, $zero, 0x1DB1
    ctx->r7 = ADD32(0, 0X1DB1);
    // 0x00442368: addu        $v0, $a3, $zero
    ctx->r2 = ADD32(ctx->r7, 0);
    // 0x0044236C: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x00442370: lui         $s3, 0x8013
    ctx->r19 = S32(0X8013 << 16);
    // 0x00442374: addiu       $s3, $s3, -0x490
    ctx->r19 = ADD32(ctx->r19, -0X490);
    // 0x00442378: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x0044237C: sw          $v0, 0x48($at)
    MEM_W(0X48, ctx->r1) = ctx->r2;
    // 0x00442380: addiu       $v0, $s3, 0x630
    ctx->r2 = ADD32(ctx->r19, 0X630);
    // 0x00442384: sw          $ra, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r31;
    // 0x00442388: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x0044238C: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x00442390: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x00442394: sw          $zero, 0x680($s3)
    MEM_W(0X680, ctx->r19) = 0;
    // 0x00442398: sw          $zero, 0x684($s3)
    MEM_W(0X684, ctx->r19) = 0;
    // 0x0044239C: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x004423A0: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x004423A4: jal         0x00225F6C
    // 0x004423A8: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    func_00225F6C(rdram, ctx);
        goto after_0;
    // 0x004423A8: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    after_0:
    // 0x004423AC: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    // 0x004423B0: blez        $v0, L_004423DC
    if (SIGNED(ctx->r2) <= 0) {
        // 0x004423B4: sw          $v0, 0x64C($s3)
        MEM_W(0X64C, ctx->r19) = ctx->r2;
            goto L_004423DC;
    }
    // 0x004423B4: sw          $v0, 0x64C($s3)
    MEM_W(0X64C, ctx->r19) = ctx->r2;
    // 0x004423B8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x004423BC: addu        $v1, $s3, $zero
    ctx->r3 = ADD32(ctx->r19, 0);
L_004423C0:
    // 0x004423C0: lw          $v0, 0x630($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X630);
    // 0x004423C4: sw          $a0, 0x250($v0)
    MEM_W(0X250, ctx->r2) = ctx->r4;
    // 0x004423C8: lw          $v0, 0x64C($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X64C);
    // 0x004423CC: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x004423D0: slt         $v0, $s2, $v0
    ctx->r2 = SIGNED(ctx->r18) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x004423D4: bne         $v0, $zero, L_004423C0
    if (ctx->r2 != 0) {
        // 0x004423D8: addiu       $v1, $v1, 0x4
        ctx->r3 = ADD32(ctx->r3, 0X4);
            goto L_004423C0;
    }
    // 0x004423D8: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
L_004423DC:
    // 0x004423DC: lui         $s1, 0x800F
    ctx->r17 = S32(0X800F << 16);
    // 0x004423E0: addiu       $s1, $s1, 0x7078
    ctx->r17 = ADD32(ctx->r17, 0X7078);
    // 0x004423E4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x004423E8: addiu       $a1, $zero, 0x650
    ctx->r5 = ADD32(0, 0X650);
    // 0x004423EC: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    // 0x004423F0: addiu       $a3, $zero, 0x1DB2
    ctx->r7 = ADD32(0, 0X1DB2);
    // 0x004423F4: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    // 0x004423F8: addu        $v0, $s3, $a1
    ctx->r2 = ADD32(ctx->r19, ctx->r5);
    // 0x004423FC: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x00442400: lw          $v0, 0x64C($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X64C);
    // 0x00442404: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
    // 0x00442408: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x0044240C: jal         0x00225F6C
    // 0x00442410: sw          $v0, 0x670($s3)
    MEM_W(0X670, ctx->r19) = ctx->r2;
    func_00225F6C(rdram, ctx);
        goto after_1;
    // 0x00442410: sw          $v0, 0x670($s3)
    MEM_W(0X670, ctx->r19) = ctx->r2;
    after_1:
    // 0x00442414: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x00442418: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x0044241C: lw          $v0, 0x650($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X650);
    // 0x00442420: addiu       $a2, $zero, 0x1DB1
    ctx->r6 = ADD32(0, 0X1DB1);
    // 0x00442424: jal         0x00225EBC
    // 0x00442428: sw          $s0, 0x250($v0)
    MEM_W(0X250, ctx->r2) = ctx->r16;
    func_00225EBC(rdram, ctx);
        goto after_2;
    // 0x00442428: sw          $s0, 0x250($v0)
    MEM_W(0X250, ctx->r2) = ctx->r16;
    after_2:
    // 0x0044242C: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    // 0x00442430: addu        $a1, $s5, $zero
    ctx->r5 = ADD32(ctx->r21, 0);
    // 0x00442434: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    // 0x00442438: sw          $v0, 0x658($s3)
    MEM_W(0X658, ctx->r19) = ctx->r2;
    // 0x0044243C: lui         $v0, 0x43
    ctx->r2 = S32(0X43 << 16);
    // 0x00442440: addiu       $v0, $v0, 0x1E20
    ctx->r2 = ADD32(ctx->r2, 0X1E20);
    // 0x00442444: sw          $v0, 0x2C($a1)
    MEM_W(0X2C, ctx->r5) = ctx->r2;
    // 0x00442448: lui         $v0, 0x41
    ctx->r2 = S32(0X41 << 16);
    // 0x0044244C: addiu       $v0, $v0, -0x439C
    ctx->r2 = ADD32(ctx->r2, -0X439C);
    // 0x00442450: sw          $v0, 0xF0($a1)
    MEM_W(0XF0, ctx->r5) = ctx->r2;
    // 0x00442454: lui         $v0, 0x41
    ctx->r2 = S32(0X41 << 16);
    // 0x00442458: addiu       $v0, $v0, -0x7000
    ctx->r2 = ADD32(ctx->r2, -0X7000);
    // 0x0044245C: sw          $v0, 0xF8($a1)
    MEM_W(0XF8, ctx->r5) = ctx->r2;
    // 0x00442460: lui         $v0, 0x26
    ctx->r2 = S32(0X26 << 16);
    // 0x00442464: addiu       $v0, $v0, -0x1B48
    ctx->r2 = ADD32(ctx->r2, -0X1B48);
    // 0x00442468: sw          $v0, 0x108($a1)
    MEM_W(0X108, ctx->r5) = ctx->r2;
    // 0x0044246C: lui         $v0, 0x41
    ctx->r2 = S32(0X41 << 16);
    // 0x00442470: addiu       $v0, $v0, -0x4010
    ctx->r2 = ADD32(ctx->r2, -0X4010);
    // 0x00442474: sw          $v0, 0xFC($a1)
    MEM_W(0XFC, ctx->r5) = ctx->r2;
    // 0x00442478: lui         $v0, 0x41
    ctx->r2 = S32(0X41 << 16);
    // 0x0044247C: addiu       $v0, $v0, -0x411C
    ctx->r2 = ADD32(ctx->r2, -0X411C);
    // 0x00442480: jal         0x00243414
    // 0x00442484: sw          $v0, 0xF4($a1)
    MEM_W(0XF4, ctx->r5) = ctx->r2;
    func_00243414(rdram, ctx);
        goto after_3;
    // 0x00442484: sw          $v0, 0xF4($a1)
    MEM_W(0XF4, ctx->r5) = ctx->r2;
    after_3:
    // 0x00442488: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x0044248C: addiu       $v0, $v0, -0x490
    ctx->r2 = ADD32(ctx->r2, -0X490);
    // 0x00442490: addiu       $s0, $v0, 0x1C
    ctx->r16 = ADD32(ctx->r2, 0X1C);
    // 0x00442494: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x00442498: addiu       $a0, $a0, 0x1F10
    ctx->r4 = ADD32(ctx->r4, 0X1F10);
    // 0x0044249C: sw          $s4, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r20;
    // 0x004424A0: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x004424A4: addiu       $v1, $zero, -0x301
    ctx->r3 = ADD32(0, -0X301);
    // 0x004424A8: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x004424AC: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
    // 0x004424B0: lw          $v0, 0xD4($s4)
    ctx->r2 = MEM_W(ctx->r20, 0XD4);
    // 0x004424B4: lui         $v1, 0x400
    ctx->r3 = S32(0X400 << 16);
    // 0x004424B8: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x004424BC: sw          $v0, 0xD4($s4)
    MEM_W(0XD4, ctx->r20) = ctx->r2;
L_004424C0:
    // 0x004424C0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x004424C4: jal         0x002362E4
    // 0x004424C8: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    func_002362E4(rdram, ctx);
        goto after_4;
    // 0x004424C8: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    after_4:
    // 0x004424CC: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x004424D0: slti        $v0, $s2, 0xF
    ctx->r2 = SIGNED(ctx->r18) < 0XF ? 1 : 0;
    // 0x004424D4: bne         $v0, $zero, L_004424C0
    if (ctx->r2 != 0) {
        // 0x004424D8: addiu       $s0, $s0, 0x68
        ctx->r16 = ADD32(ctx->r16, 0X68);
            goto L_004424C0;
    }
    // 0x004424D8: addiu       $s0, $s0, 0x68
    ctx->r16 = ADD32(ctx->r16, 0X68);
    // 0x004424DC: lw          $ra, 0x30($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X30);
    // 0x004424E0: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x004424E4: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x004424E8: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x004424EC: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x004424F0: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x004424F4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x004424F8: jr          $ra
    // 0x004424FC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x004424FC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_002406D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002406D8: lwc1        $f0, 0x0($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X0);
    // 0x002406DC: swc1        $f0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f0.u32l;
    // 0x002406E0: lwc1        $f0, 0x4($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X4);
    // 0x002406E4: swc1        $f0, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->f0.u32l;
    // 0x002406E8: lwc1        $f0, 0x8($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X8);
    // 0x002406EC: swc1        $f0, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->f0.u32l;
    // 0x002406F0: lwc1        $f0, 0xC($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0XC);
    // 0x002406F4: swc1        $f0, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->f0.u32l;
    // 0x002406F8: lwc1        $f0, 0x4($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X4);
    // 0x002406FC: swc1        $f0, 0x10($a1)
    MEM_W(0X10, ctx->r5) = ctx->f0.u32l;
    // 0x00240700: lwc1        $f0, 0x8($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X8);
    // 0x00240704: swc1        $f0, 0x14($a1)
    MEM_W(0X14, ctx->r5) = ctx->f0.u32l;
    // 0x00240708: lwc1        $f0, 0xC($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0XC);
    // 0x0024070C: swc1        $f0, 0x18($a1)
    MEM_W(0X18, ctx->r5) = ctx->f0.u32l;
    // 0x00240710: lwc1        $f0, 0x4($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X4);
    // 0x00240714: swc1        $f0, 0x1C($a1)
    MEM_W(0X1C, ctx->r5) = ctx->f0.u32l;
    // 0x00240718: lwc1        $f0, 0x14($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X14);
    // 0x0024071C: swc1        $f0, 0x20($a1)
    MEM_W(0X20, ctx->r5) = ctx->f0.u32l;
    // 0x00240720: lwc1        $f0, 0x0($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X0);
    // 0x00240724: swc1        $f0, 0x24($a1)
    MEM_W(0X24, ctx->r5) = ctx->f0.u32l;
    // 0x00240728: lwc1        $f0, 0x4($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X4);
    // 0x0024072C: swc1        $f0, 0x28($a1)
    MEM_W(0X28, ctx->r5) = ctx->f0.u32l;
    // 0x00240730: lwc1        $f0, 0x14($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X14);
    // 0x00240734: swc1        $f0, 0x2C($a1)
    MEM_W(0X2C, ctx->r5) = ctx->f0.u32l;
    // 0x00240738: lwc1        $f0, 0x0($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X0);
    // 0x0024073C: swc1        $f0, 0x30($a1)
    MEM_W(0X30, ctx->r5) = ctx->f0.u32l;
    // 0x00240740: lwc1        $f0, 0x10($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X10);
    // 0x00240744: swc1        $f0, 0x34($a1)
    MEM_W(0X34, ctx->r5) = ctx->f0.u32l;
    // 0x00240748: lwc1        $f0, 0x8($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X8);
    // 0x0024074C: swc1        $f0, 0x38($a1)
    MEM_W(0X38, ctx->r5) = ctx->f0.u32l;
    // 0x00240750: lwc1        $f0, 0xC($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0XC);
    // 0x00240754: swc1        $f0, 0x3C($a1)
    MEM_W(0X3C, ctx->r5) = ctx->f0.u32l;
    // 0x00240758: lwc1        $f0, 0x10($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X10);
    // 0x0024075C: swc1        $f0, 0x40($a1)
    MEM_W(0X40, ctx->r5) = ctx->f0.u32l;
    // 0x00240760: lwc1        $f0, 0x8($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X8);
    // 0x00240764: swc1        $f0, 0x44($a1)
    MEM_W(0X44, ctx->r5) = ctx->f0.u32l;
    // 0x00240768: lwc1        $f0, 0xC($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0XC);
    // 0x0024076C: swc1        $f0, 0x48($a1)
    MEM_W(0X48, ctx->r5) = ctx->f0.u32l;
    // 0x00240770: lwc1        $f0, 0x10($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X10);
    // 0x00240774: swc1        $f0, 0x4C($a1)
    MEM_W(0X4C, ctx->r5) = ctx->f0.u32l;
    // 0x00240778: lwc1        $f0, 0x14($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X14);
    // 0x0024077C: swc1        $f0, 0x50($a1)
    MEM_W(0X50, ctx->r5) = ctx->f0.u32l;
    // 0x00240780: lwc1        $f0, 0x0($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X0);
    // 0x00240784: swc1        $f0, 0x54($a1)
    MEM_W(0X54, ctx->r5) = ctx->f0.u32l;
    // 0x00240788: lwc1        $f0, 0x10($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X10);
    // 0x0024078C: swc1        $f0, 0x58($a1)
    MEM_W(0X58, ctx->r5) = ctx->f0.u32l;
    // 0x00240790: lwc1        $f0, 0x14($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X14);
    // 0x00240794: jr          $ra
    // 0x00240798: swc1        $f0, 0x5C($a1)
    MEM_W(0X5C, ctx->r5) = ctx->f0.u32l;
    return;
    // 0x00240798: swc1        $f0, 0x5C($a1)
    MEM_W(0X5C, ctx->r5) = ctx->f0.u32l;
;}
RECOMP_FUNC void func_002657D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002657D8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x002657DC: addu        $v0, $a0, $zero
    ctx->r2 = ADD32(ctx->r4, 0);
    // 0x002657E0: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x002657E4: addiu       $a0, $a0, 0x7078
    ctx->r4 = ADD32(ctx->r4, 0X7078);
    // 0x002657E8: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x002657EC: lhu         $a1, 0xA($v0)
    ctx->r5 = MEM_HU(ctx->r2, 0XA);
    // 0x002657F0: lhu         $a2, 0x4($v0)
    ctx->r6 = MEM_HU(ctx->r2, 0X4);
    // 0x002657F4: jal         0x002245BC
    // 0x002657F8: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_002245BC(rdram, ctx);
        goto after_0;
    // 0x002657F8: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_0:
    // 0x002657FC: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x00265800: jr          $ra
    // 0x00265804: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00265804: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0026EFFC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0026EFFC: sltiu       $v0, $v0, 0x3E8
    ctx->r2 = ctx->r2 < 0X3E8 ? 1 : 0;
    // 0x0026F000: beq         $v0, $zero, L_0026F010
    if (ctx->r2 == 0) {
            // 0x0026F004: addiu       $v0, $a0, -0x7D0
    ctx->r2 = ADD32(ctx->r4, -0X7D0);
    func_0026F010(rdram, ctx);
    return;
    }
    // 0x0026F004: addiu       $v0, $a0, -0x7D0
    ctx->r2 = ADD32(ctx->r4, -0X7D0);
    // 0x0026F008: jr          $ra
    // 0x0026F00C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x0026F00C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
;}
RECOMP_FUNC void func_00213FA0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00213FA0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x00213FA4: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00213FA8: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x00213FAC: addu        $a0, $a1, $zero
    ctx->r4 = ADD32(ctx->r5, 0);
    // 0x00213FB0: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x00213FB4: addu        $s3, $a2, $zero
    ctx->r19 = ADD32(ctx->r6, 0);
    // 0x00213FB8: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x00213FBC: addu        $s4, $a3, $zero
    ctx->r20 = ADD32(ctx->r7, 0);
    // 0x00213FC0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00213FC4: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x00213FC8: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x00213FCC: addu        $s2, $s0, $zero
    ctx->r18 = ADD32(ctx->r16, 0);
    // 0x00213FD0: bne         $a0, $zero, L_00213FF0
    if (ctx->r4 != 0) {
        // 0x00213FD4: sw          $ra, 0x24($sp)
        MEM_W(0X24, ctx->r29) = ctx->r31;
            goto L_00213FF0;
    }
    // 0x00213FD4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x00213FD8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x00213FDC: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    // 0x00213FE0: jal         0x002132B8
    // 0x00213FE4: addu        $a2, $s4, $zero
    ctx->r6 = ADD32(ctx->r20, 0);
    func_002132B8(rdram, ctx);
        goto after_0;
    // 0x00213FE4: addu        $a2, $s4, $zero
    ctx->r6 = ADD32(ctx->r20, 0);
    after_0:
    // 0x00213FE8: j           L_002140E8
    // 0x00213FEC: nop

        goto L_002140E8;
    // 0x00213FEC: nop

L_00213FF0:
    // 0x00213FF0: jal         0x002017D4
    // 0x00213FF4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_002017D4(rdram, ctx);
        goto after_1;
    // 0x00213FF4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_1:
    // 0x00213FF8: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x00213FFC: lw          $a0, 0x4($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X4);
    // 0x00214000: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x00214004: addiu       $a0, $a0, -0x1
    ctx->r4 = ADD32(ctx->r4, -0X1);
    // 0x00214008: beq         $a0, $v0, L_002140E0
    if (ctx->r4 == ctx->r2) {
        // 0x0021400C: addiu       $a2, $v1, 0x8
        ctx->r6 = ADD32(ctx->r3, 0X8);
            goto L_002140E0;
    }
    // 0x0021400C: addiu       $a2, $v1, 0x8
    ctx->r6 = ADD32(ctx->r3, 0X8);
    // 0x00214010: addiu       $t0, $zero, 0x40
    ctx->r8 = ADD32(0, 0X40);
    // 0x00214014: addu        $a3, $v0, $zero
    ctx->r7 = ADD32(ctx->r2, 0);
    // 0x00214018: addiu       $v1, $v1, 0xC2
    ctx->r3 = ADD32(ctx->r3, 0XC2);
    // 0x0021401C: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
L_00214020:
    // 0x00214020: lwc1        $f1, 0xC($s1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r17, 0XC);
    // 0x00214024: lwc1        $f0, -0x1A($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, -0X1A);
    // 0x00214028: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x0021402C: nop

    // 0x00214030: bc1fl       L_002140D4
    if (!c1cs) {
        // 0x00214034: addiu       $v1, $v1, 0xC0
        ctx->r3 = ADD32(ctx->r3, 0XC0);
            goto L_002140D4;
    }
    goto skip_0;
    // 0x00214034: addiu       $v1, $v1, 0xC0
    ctx->r3 = ADD32(ctx->r3, 0XC0);
    skip_0:
    // 0x00214038: lwc1        $f1, 0x0($s1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r17, 0X0);
    // 0x0021403C: lwc1        $f0, -0xE($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, -0XE);
    // 0x00214040: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x00214044: nop

    // 0x00214048: bc1fl       L_002140D4
    if (!c1cs) {
        // 0x0021404C: addiu       $v1, $v1, 0xC0
        ctx->r3 = ADD32(ctx->r3, 0XC0);
            goto L_002140D4;
    }
    goto skip_1;
    // 0x0021404C: addiu       $v1, $v1, 0xC0
    ctx->r3 = ADD32(ctx->r3, 0XC0);
    skip_1:
    // 0x00214050: lwc1        $f1, 0x14($s1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r17, 0X14);
    // 0x00214054: lwc1        $f0, -0x12($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, -0X12);
    // 0x00214058: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x0021405C: nop

    // 0x00214060: bc1fl       L_002140D4
    if (!c1cs) {
        // 0x00214064: addiu       $v1, $v1, 0xC0
        ctx->r3 = ADD32(ctx->r3, 0XC0);
            goto L_002140D4;
    }
    goto skip_2;
    // 0x00214064: addiu       $v1, $v1, 0xC0
    ctx->r3 = ADD32(ctx->r3, 0XC0);
    skip_2:
    // 0x00214068: lwc1        $f1, 0x8($s1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r17, 0X8);
    // 0x0021406C: lwc1        $f0, -0x6($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, -0X6);
    // 0x00214070: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x00214074: nop

    // 0x00214078: bc1fl       L_002140D4
    if (!c1cs) {
        // 0x0021407C: addiu       $v1, $v1, 0xC0
        ctx->r3 = ADD32(ctx->r3, 0XC0);
            goto L_002140D4;
    }
    goto skip_3;
    // 0x0021407C: addiu       $v1, $v1, 0xC0
    ctx->r3 = ADD32(ctx->r3, 0XC0);
    skip_3:
    // 0x00214080: lwc1        $f1, 0x10($s1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r17, 0X10);
    // 0x00214084: lwc1        $f0, -0x16($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, -0X16);
    // 0x00214088: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x0021408C: nop

    // 0x00214090: bc1fl       L_002140D4
    if (!c1cs) {
        // 0x00214094: addiu       $v1, $v1, 0xC0
        ctx->r3 = ADD32(ctx->r3, 0XC0);
            goto L_002140D4;
    }
    goto skip_4;
    // 0x00214094: addiu       $v1, $v1, 0xC0
    ctx->r3 = ADD32(ctx->r3, 0XC0);
    skip_4:
    // 0x00214098: lwc1        $f1, 0x4($s1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r17, 0X4);
    // 0x0021409C: lwc1        $f0, -0xA($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, -0XA);
    // 0x002140A0: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x002140A4: nop

    // 0x002140A8: bc1fl       L_002140D4
    if (!c1cs) {
        // 0x002140AC: addiu       $v1, $v1, 0xC0
        ctx->r3 = ADD32(ctx->r3, 0XC0);
            goto L_002140D4;
    }
    goto skip_5;
    // 0x002140AC: addiu       $v1, $v1, 0xC0
    ctx->r3 = ADD32(ctx->r3, 0XC0);
    skip_5:
    // 0x002140B0: sw          $a2, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r6;
    // 0x002140B4: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
    // 0x002140B8: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x002140BC: beq         $v0, $zero, L_002140C8
    if (ctx->r2 == 0) {
        // 0x002140C0: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_002140C8;
    }
    // 0x002140C0: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x002140C4: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
L_002140C8:
    // 0x002140C8: beql        $s0, $t0, L_002140E4
    if (ctx->r16 == ctx->r8) {
        // 0x002140CC: sw          $s0, 0x0($s4)
        MEM_W(0X0, ctx->r20) = ctx->r16;
            goto L_002140E4;
    }
    goto skip_6;
    // 0x002140CC: sw          $s0, 0x0($s4)
    MEM_W(0X0, ctx->r20) = ctx->r16;
    skip_6:
    // 0x002140D0: addiu       $v1, $v1, 0xC0
    ctx->r3 = ADD32(ctx->r3, 0XC0);
L_002140D4:
    // 0x002140D4: addiu       $a0, $a0, -0x1
    ctx->r4 = ADD32(ctx->r4, -0X1);
    // 0x002140D8: bne         $a0, $a3, L_00214020
    if (ctx->r4 != ctx->r7) {
        // 0x002140DC: addiu       $a2, $a2, 0xC0
        ctx->r6 = ADD32(ctx->r6, 0XC0);
            goto L_00214020;
    }
    // 0x002140DC: addiu       $a2, $a2, 0xC0
    ctx->r6 = ADD32(ctx->r6, 0XC0);
L_002140E0:
    // 0x002140E0: sw          $s0, 0x0($s4)
    MEM_W(0X0, ctx->r20) = ctx->r16;
L_002140E4:
    // 0x002140E4: addu        $v0, $s2, $zero
    ctx->r2 = ADD32(ctx->r18, 0);
L_002140E8:
    // 0x002140E8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x002140EC: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x002140F0: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x002140F4: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x002140F8: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x002140FC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00214100: jr          $ra
    // 0x00214104: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x00214104: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_00419BCC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00419BCC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00419BD0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00419BD4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x00419BD8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00419BDC: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x00419BE0: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x00419BE4: addu        $s2, $a2, $zero
    ctx->r18 = ADD32(ctx->r6, 0);
    // 0x00419BE8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x00419BEC: jal         0x00275904
    // 0x00419BF0: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    func_00275904(rdram, ctx);
        goto after_0;
    // 0x00419BF0: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    after_0:
    // 0x00419BF4: jal         0x0027598C
    // 0x00419BF8: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_0027598C(rdram, ctx);
        goto after_1;
    // 0x00419BF8: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_1:
    // 0x00419BFC: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x00419C00: lw          $v0, 0x1F74($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1F74);
    // 0x00419C04: beq         $v0, $zero, L_00419C14
    if (ctx->r2 == 0) {
        // 0x00419C08: nop
    
            goto L_00419C14;
    }
    // 0x00419C08: nop

    // 0x00419C0C: jal         0x00275A50
    // 0x00419C10: nop

    func_00275A50(rdram, ctx);
        goto after_2;
    // 0x00419C10: nop

    after_2:
L_00419C14:
    // 0x00419C14: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x00419C18: lw          $a0, 0x1F70($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1F70);
    // 0x00419C1C: jal         0x002759C4
    // 0x00419C20: nop

    func_002759C4(rdram, ctx);
        goto after_3;
    // 0x00419C20: nop

    after_3:
    // 0x00419C24: jal         0x00285CD4
    // 0x00419C28: nop

    func_00285CD4(rdram, ctx);
        goto after_4;
    // 0x00419C28: nop

    after_4:
    // 0x00419C2C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00419C30: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x00419C34: jal         0x00416454
    // 0x00419C38: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    func_00416454(rdram, ctx);
        goto after_5;
    // 0x00419C38: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    after_5:
    // 0x00419C3C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x00419C40: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x00419C44: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00419C48: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00419C4C: jr          $ra
    // 0x00419C50: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00419C50: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_00254B9C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00254B9C: lw          $v1, 0x20($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X20);
    // 0x00254BA0: beq         $v1, $zero, L_00254BDC
    if (ctx->r3 == 0) {
        // 0x00254BA4: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_00254BDC;
    }
    // 0x00254BA4: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
L_00254BA8:
    // 0x00254BA8: lw          $v0, 0x51C($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X51C);
    // 0x00254BAC: beq         $v0, $zero, L_00254BD0
    if (ctx->r2 == 0) {
        // 0x00254BB0: nop
    
            goto L_00254BD0;
    }
    // 0x00254BB0: nop

    // 0x00254BB4: lw          $v0, 0x54C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X54C);
    // 0x00254BB8: bne         $v0, $zero, L_00254BD0
    if (ctx->r2 != 0) {
        // 0x00254BBC: nop
    
            goto L_00254BD0;
    }
    // 0x00254BBC: nop

    // 0x00254BC0: lw          $v0, 0x518($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X518);
    // 0x00254BC4: lbu         $v0, 0x3F($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X3F);
    // 0x00254BC8: beql        $v0, $zero, L_00254BD0
    if (ctx->r2 == 0) {
        // 0x00254BCC: addiu       $a0, $a0, 0x1
        ctx->r4 = ADD32(ctx->r4, 0X1);
            goto L_00254BD0;
    }
    goto skip_0;
    // 0x00254BCC: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    skip_0:
L_00254BD0:
    // 0x00254BD0: lw          $v1, 0x1320($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X1320);
    // 0x00254BD4: bne         $v1, $zero, L_00254BA8
    if (ctx->r3 != 0) {
        // 0x00254BD8: nop
    
            goto L_00254BA8;
    }
    // 0x00254BD8: nop

L_00254BDC:
    // 0x00254BDC: jr          $ra
    // 0x00254BE0: addu        $v0, $a0, $zero
    ctx->r2 = ADD32(ctx->r4, 0);
    return;
    // 0x00254BE0: addu        $v0, $a0, $zero
    ctx->r2 = ADD32(ctx->r4, 0);
;}
RECOMP_FUNC void func_00293530(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00293530: sll         $a1, $a1, 16
    ctx->r5 = S32(ctx->r5 << 16);
    // 0x00293534: sra         $a1, $a1, 16
    ctx->r5 = S32(SIGNED(ctx->r5) >> 16);
    // 0x00293538: sll         $v0, $a1, 1
    ctx->r2 = S32(ctx->r5 << 1);
    // 0x0029353C: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x00293540: lw          $v1, 0x40($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X40);
    // 0x00293544: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x00293548: addu        $v1, $v0, $v1
    ctx->r3 = ADD32(ctx->r2, ctx->r3);
    // 0x0029354C: lw          $v0, 0x28($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X28);
    // 0x00293550: bne         $v0, $zero, L_0029356C
    if (ctx->r2 != 0) {
        // 0x00293554: nop
    
            goto L_0029356C;
    }
    // 0x00293554: nop

    // 0x00293558: sw          $zero, 0x1C($v1)
    MEM_W(0X1C, ctx->r3) = 0;
    // 0x0029355C: lw          $v0, 0x3C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X3C);
    // 0x00293560: bne         $v0, $a1, L_0029356C
    if (ctx->r2 != ctx->r5) {
        // 0x00293564: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_0029356C;
    }
    // 0x00293564: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x00293568: sw          $v0, 0x3C($a0)
    MEM_W(0X3C, ctx->r4) = ctx->r2;
L_0029356C:
    // 0x0029356C: jr          $ra
    // 0x00293570: nop

    return;
    // 0x00293570: nop

;}
RECOMP_FUNC void func_00264DE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00264DE0: sw          $zero, 0x64($a1)
    MEM_W(0X64, ctx->r5) = 0;
    // 0x00264DE4: sw          $zero, 0x18($a0)
    MEM_W(0X18, ctx->r4) = 0;
    // 0x00264DE8: jr          $ra
    // 0x00264DEC: sw          $zero, 0x20($a0)
    MEM_W(0X20, ctx->r4) = 0;
    return;
    // 0x00264DEC: sw          $zero, 0x20($a0)
    MEM_W(0X20, ctx->r4) = 0;
;}
RECOMP_FUNC void func_002605AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002605AC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x002605B0: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x002605B4: lwc1        $f0, 0x40($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X40);
    // 0x002605B8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002605BC: lwc1        $f1, 0x7994($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X7994);
    // 0x002605C0: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x002605C4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002605C8: lwc1        $f1, 0x7998($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X7998);
    // 0x002605CC: sub.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl - ctx->f0.fl;
    // 0x002605D0: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x002605D4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x002605D8: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x002605DC: sw          $v0, -0x4750($at)
    MEM_W(-0X4750, ctx->r1) = ctx->r2;
    // 0x002605E0: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x002605E4: nop

    // 0x002605E8: bc1tl       L_002605F0
    if (c1cs) {
        // 0x002605EC: mov.s       $f1, $f0
        CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    ctx->f1.fl = ctx->f0.fl;
            goto L_002605F0;
    }
    goto skip_0;
    // 0x002605EC: mov.s       $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    ctx->f1.fl = ctx->f0.fl;
    skip_0:
L_002605F0:
    // 0x002605F0: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x002605F4: swc1        $f1, -0x4740($at)
    MEM_W(-0X4740, ctx->r1) = ctx->f_odd[(1 - 1) * 2];
    // 0x002605F8: jal         0x0021D928
    // 0x002605FC: nop

    func_0021D928(rdram, ctx);
        goto after_0;
    // 0x002605FC: nop

    after_0:
    // 0x00260600: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x00260604: jr          $ra
    // 0x00260608: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00260608: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0021160C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0021160C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x00211610: mtc1        $a2, $f2
    ctx->f2.u32l = ctx->r6;
    // 0x00211614: c.lt.s      $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f14.fl < ctx->f0.fl;
    // 0x00211618: nop

    // 0x0021161C: bc1f        L_00211644
    if (!c1cs) {
        // 0x00211620: nop
    
            goto L_00211644;
    }
    // 0x00211620: nop

    // 0x00211624: neg.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = -ctx->f2.fl;
    // 0x00211628: c.le.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl <= ctx->f0.fl;
    // 0x0021162C: nop

    // 0x00211630: bc1f        L_00211640
    if (!c1cs) {
        // 0x00211634: nop
    
            goto L_00211640;
    }
    // 0x00211634: nop

L_00211638:
    // 0x00211638: jr          $ra
    // 0x0021163C: mov.s       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.fl = ctx->f12.fl;
    return;
    // 0x0021163C: mov.s       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.fl = ctx->f12.fl;
L_00211640:
    // 0x00211640: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
L_00211644:
    // 0x00211644: c.lt.s      $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f0.fl < ctx->f14.fl;
    // 0x00211648: nop

    // 0x0021164C: bc1f        L_00211664
    if (!c1cs) {
        // 0x00211650: nop
    
            goto L_00211664;
    }
    // 0x00211650: nop

    // 0x00211654: c.le.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl <= ctx->f12.fl;
    // 0x00211658: nop

    // 0x0021165C: bc1t        L_00211638
    if (c1cs) {
        // 0x00211660: nop
    
            goto L_00211638;
    }
    // 0x00211660: nop

L_00211664:
    // 0x00211664: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x00211668: c.lt.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
    // 0x0021166C: nop

    // 0x00211670: bc1f        L_00211688
    if (!c1cs) {
        // 0x00211674: nop
    
            goto L_00211688;
    }
    // 0x00211674: nop

    // 0x00211678: c.lt.s      $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f0.fl < ctx->f14.fl;
    // 0x0021167C: nop

    // 0x00211680: bc1t        L_002116A8
    if (c1cs) {
        // 0x00211684: nop
    
            goto L_002116A8;
    }
    // 0x00211684: nop

L_00211688:
    // 0x00211688: c.lt.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl < ctx->f12.fl;
    // 0x0021168C: nop

    // 0x00211690: bc1f        L_002116B4
    if (!c1cs) {
        // 0x00211694: nop
    
            goto L_002116B4;
    }
    // 0x00211694: nop

    // 0x00211698: c.lt.s      $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f14.fl < ctx->f0.fl;
    // 0x0021169C: nop

    // 0x002116A0: bc1f        L_002116B4
    if (!c1cs) {
        // 0x002116A4: nop
    
            goto L_002116B4;
    }
    // 0x002116A4: nop

L_002116A8:
    // 0x002116A8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002116AC: lwc1        $f0, 0x5688($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X5688);
    // 0x002116B0: mul.s       $f14, $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = MUL_S(ctx->f14.fl, ctx->f0.fl);
L_002116B4:
    // 0x002116B4: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x002116B8: lwc1        $f0, 0x6D28($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6D28);
    // 0x002116BC: mul.s       $f0, $f14, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f14.fl, ctx->f0.fl);
    // 0x002116C0: mtc1        $zero, $f1
    ctx->f_odd[(1 - 1) * 2] = 0;
    // 0x002116C4: c.lt.s      $f14, $f1
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f14.fl < ctx->f1.fl;
    // 0x002116C8: nop

    // 0x002116CC: bc1f        L_002116F0
    if (!c1cs) {
        // 0x002116D0: add.s       $f12, $f12, $f0
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f0.fl;
            goto L_002116F0;
    }
    // 0x002116D0: add.s       $f12, $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f0.fl;
    // 0x002116D4: neg.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = -ctx->f2.fl;
    // 0x002116D8: c.lt.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
    // 0x002116DC: nop

    // 0x002116E0: bc1tl       L_00211700
    if (c1cs) {
        // 0x002116E4: mov.s       $f12, $f0
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
            goto L_00211700;
    }
    goto skip_0;
    // 0x002116E4: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    skip_0:
    // 0x002116E8: jr          $ra
    // 0x002116EC: mov.s       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.fl = ctx->f12.fl;
    return;
    // 0x002116EC: mov.s       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.fl = ctx->f12.fl;
L_002116F0:
    // 0x002116F0: c.lt.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl < ctx->f12.fl;
    // 0x002116F4: nop

    // 0x002116F8: bc1tl       L_00211700
    if (c1cs) {
        // 0x002116FC: mov.s       $f12, $f2
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    ctx->f12.fl = ctx->f2.fl;
            goto L_00211700;
    }
    goto skip_1;
    // 0x002116FC: mov.s       $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    ctx->f12.fl = ctx->f2.fl;
    skip_1:
L_00211700:
    // 0x00211700: mov.s       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.fl = ctx->f12.fl;
    // 0x00211704: jr          $ra
    // 0x00211708: nop

    return;
    // 0x00211708: nop

;}
RECOMP_FUNC void func_002007D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002007D0: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x002007D4: lw          $v0, 0xC($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XC);
    // 0x002007D8: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x002007DC: lw          $v0, 0x10($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X10);
    // 0x002007E0: lw          $v1, 0x0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X0);
    // 0x002007E4: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x002007E8: sw          $v0, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->r2;
    // 0x002007EC: jr          $ra
    // 0x002007F0: sw          $v1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r3;
    return;
    // 0x002007F0: sw          $v1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r3;
;}
RECOMP_FUNC void func_00262960(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00262960: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00262964: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00262968: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x0026296C: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x00262970: addiu       $a0, $a0, 0x7078
    ctx->r4 = ADD32(ctx->r4, 0X7078);
    // 0x00262974: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x00262978: jal         0x00220408
    // 0x0026297C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_00220408(rdram, ctx);
        goto after_0;
    // 0x0026297C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_0:
    // 0x00262980: bne         $v0, $zero, L_00262994
    if (ctx->r2 != 0) {
        // 0x00262984: nop
    
            goto L_00262994;
    }
    // 0x00262984: nop

    // 0x00262988: lw          $v0, 0xD4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XD4);
    // 0x0026298C: ori         $v0, $v0, 0x2100
    ctx->r2 = ctx->r2 | 0X2100;
    // 0x00262990: sw          $v0, 0xD4($s0)
    MEM_W(0XD4, ctx->r16) = ctx->r2;
L_00262994:
    // 0x00262994: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x00262998: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0026299C: jr          $ra
    // 0x002629A0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x002629A0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_002A1D7C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002A1D7C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x002A1D80: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x002A1D84: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x002A1D88: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x002A1D8C: addu        $s2, $a1, $zero
    ctx->r18 = ADD32(ctx->r5, 0);
    // 0x002A1D90: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x002A1D94: addiu       $s0, $a2, -0x1
    ctx->r16 = ADD32(ctx->r6, -0X1);
    // 0x002A1D98: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x002A1D9C: beq         $a2, $zero, L_002A1DD0
    if (ctx->r6 == 0) {
        // 0x002A1DA0: sw          $s3, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r19;
            goto L_002A1DD0;
    }
    // 0x002A1DA0: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x002A1DA4: addiu       $s3, $zero, -0x1
    ctx->r19 = ADD32(0, -0X1);
    // 0x002A1DA8: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
L_002A1DAC:
    // 0x002A1DAC: jal         0x002A1540
    // 0x002A1DB0: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    func_002A1540(rdram, ctx);
        goto after_0;
    // 0x002A1DB0: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    after_0:
    // 0x002A1DB4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x002A1DB8: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x002A1DBC: jal         0x002A1954
    // 0x002A1DC0: andi        $a1, $v0, 0xFF
    ctx->r5 = ctx->r2 & 0XFF;
    func_002A1954(rdram, ctx);
        goto after_1;
    // 0x002A1DC0: andi        $a1, $v0, 0xFF
    ctx->r5 = ctx->r2 & 0XFF;
    after_1:
    // 0x002A1DC4: addiu       $s0, $s0, -0x1
    ctx->r16 = ADD32(ctx->r16, -0X1);
    // 0x002A1DC8: bne         $s0, $s3, L_002A1DAC
    if (ctx->r16 != ctx->r19) {
        // 0x002A1DCC: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_002A1DAC;
    }
    // 0x002A1DCC: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
L_002A1DD0:
    // 0x002A1DD0: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x002A1DD4: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x002A1DD8: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x002A1DDC: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x002A1DE0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x002A1DE4: jr          $ra
    // 0x002A1DE8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x002A1DE8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_0026CCA8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0026CCA8: blez        $a1, L_0026CD68
    if (SIGNED(ctx->r5) <= 0) {
        // 0x0026CCAC: addu        $v1, $zero, $zero
        ctx->r3 = ADD32(0, 0);
            goto L_0026CD68;
    }
    // 0x0026CCAC: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
L_0026CCB0:
    // 0x0026CCB0: lwc1        $f0, 0x0($a2)
    ctx->f0.u32l = MEM_W(ctx->r6, 0X0);
    // 0x0026CCB4: lwc1        $f1, 0x0($a0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r4, 0X0);
    // 0x0026CCB8: c.le.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl <= ctx->f1.fl;
    // 0x0026CCBC: nop

    // 0x0026CCC0: bc1fl       L_0026CCC8
    if (!c1cs) {
        // 0x0026CCC4: mov.s       $f0, $f1
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    ctx->f0.fl = ctx->f1.fl;
            goto L_0026CCC8;
    }
    goto skip_0;
    // 0x0026CCC4: mov.s       $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    ctx->f0.fl = ctx->f1.fl;
    skip_0:
L_0026CCC8:
    // 0x0026CCC8: swc1        $f0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f0.u32l;
    // 0x0026CCCC: lwc1        $f0, 0x4($a2)
    ctx->f0.u32l = MEM_W(ctx->r6, 0X4);
    // 0x0026CCD0: lwc1        $f1, 0x4($a0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r4, 0X4);
    // 0x0026CCD4: c.le.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl <= ctx->f1.fl;
    // 0x0026CCD8: nop

    // 0x0026CCDC: bc1fl       L_0026CCE4
    if (!c1cs) {
        // 0x0026CCE0: mov.s       $f0, $f1
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    ctx->f0.fl = ctx->f1.fl;
            goto L_0026CCE4;
    }
    goto skip_1;
    // 0x0026CCE0: mov.s       $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    ctx->f0.fl = ctx->f1.fl;
    skip_1:
L_0026CCE4:
    // 0x0026CCE4: swc1        $f0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->f0.u32l;
    // 0x0026CCE8: lwc1        $f0, 0x8($a2)
    ctx->f0.u32l = MEM_W(ctx->r6, 0X8);
    // 0x0026CCEC: lwc1        $f1, 0x8($a0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r4, 0X8);
    // 0x0026CCF0: c.le.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl <= ctx->f1.fl;
    // 0x0026CCF4: nop

    // 0x0026CCF8: bc1fl       L_0026CD00
    if (!c1cs) {
        // 0x0026CCFC: mov.s       $f0, $f1
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    ctx->f0.fl = ctx->f1.fl;
            goto L_0026CD00;
    }
    goto skip_2;
    // 0x0026CCFC: mov.s       $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    ctx->f0.fl = ctx->f1.fl;
    skip_2:
L_0026CD00:
    // 0x0026CD00: swc1        $f0, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->f0.u32l;
    // 0x0026CD04: lwc1        $f0, 0x0($a2)
    ctx->f0.u32l = MEM_W(ctx->r6, 0X0);
    // 0x0026CD08: lwc1        $f1, 0xC($a0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r4, 0XC);
    // 0x0026CD0C: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x0026CD10: nop

    // 0x0026CD14: bc1fl       L_0026CD1C
    if (!c1cs) {
        // 0x0026CD18: mov.s       $f0, $f1
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    ctx->f0.fl = ctx->f1.fl;
            goto L_0026CD1C;
    }
    goto skip_3;
    // 0x0026CD18: mov.s       $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    ctx->f0.fl = ctx->f1.fl;
    skip_3:
L_0026CD1C:
    // 0x0026CD1C: swc1        $f0, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->f0.u32l;
    // 0x0026CD20: lwc1        $f0, 0x4($a2)
    ctx->f0.u32l = MEM_W(ctx->r6, 0X4);
    // 0x0026CD24: lwc1        $f1, 0x10($a0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r4, 0X10);
    // 0x0026CD28: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x0026CD2C: nop

    // 0x0026CD30: bc1fl       L_0026CD38
    if (!c1cs) {
        // 0x0026CD34: mov.s       $f0, $f1
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    ctx->f0.fl = ctx->f1.fl;
            goto L_0026CD38;
    }
    goto skip_4;
    // 0x0026CD34: mov.s       $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    ctx->f0.fl = ctx->f1.fl;
    skip_4:
L_0026CD38:
    // 0x0026CD38: swc1        $f0, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->f0.u32l;
    // 0x0026CD3C: lwc1        $f0, 0x8($a2)
    ctx->f0.u32l = MEM_W(ctx->r6, 0X8);
    // 0x0026CD40: lwc1        $f1, 0x14($a0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r4, 0X14);
    // 0x0026CD44: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x0026CD48: nop

    // 0x0026CD4C: bc1fl       L_0026CD54
    if (!c1cs) {
        // 0x0026CD50: mov.s       $f0, $f1
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    ctx->f0.fl = ctx->f1.fl;
            goto L_0026CD54;
    }
    goto skip_5;
    // 0x0026CD50: mov.s       $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    ctx->f0.fl = ctx->f1.fl;
    skip_5:
L_0026CD54:
    // 0x0026CD54: swc1        $f0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->f0.u32l;
    // 0x0026CD58: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x0026CD5C: slt         $v0, $v1, $a1
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x0026CD60: bne         $v0, $zero, L_0026CCB0
    if (ctx->r2 != 0) {
        // 0x0026CD64: addiu       $a2, $a2, 0xC
        ctx->r6 = ADD32(ctx->r6, 0XC);
            goto L_0026CCB0;
    }
    // 0x0026CD64: addiu       $a2, $a2, 0xC
    ctx->r6 = ADD32(ctx->r6, 0XC);
L_0026CD68:
    // 0x0026CD68: jr          $ra
    // 0x0026CD6C: nop

    return;
    // 0x0026CD6C: nop

;}
RECOMP_FUNC void func_00442A64(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_00409C24:
    // 0x00442A64: addiu       $sp, $sp, -0x110
    ctx->r29 = ADD32(ctx->r29, -0X110);
L_00409C30:
    // 0x00442A68: sw          $s6, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = ctx->r22;
    // 0x00442A6C: addu        $s6, $a1, $zero
    ctx->r22 = ADD32(ctx->r5, 0);
    // 0x00442A70: addiu       $a1, $a0, 0x140
    ctx->r5 = ADD32(ctx->r4, 0X140);
    // 0x00442A74: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    // 0x00442A78: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x00442A7C: sw          $ra, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->r31;
    // 0x00442A80: sw          $s5, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->r21;
    // 0x00442A84: sw          $s4, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->r20;
    // 0x00442A88: sw          $s3, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->r19;
    // 0x00442A8C: sw          $s2, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->r18;
    // 0x00442A90: sw          $s1, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->r17;
    // 0x00442A94: sw          $s0, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->r16;
    // 0x00442A98: sdc1        $f26, 0x108($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X108, ctx->r29);
    // 0x00442A9C: sdc1        $f25, 0x100($sp)
    CHECK_FR(ctx, 25);
    SD(ctx->f25.u64, 0X100, ctx->r29);
    // 0x00442AA0: sdc1        $f24, 0xF8($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0XF8, ctx->r29);
    // 0x00442AA4: sdc1        $f23, 0xF0($sp)
    CHECK_FR(ctx, 23);
    SD(ctx->f23.u64, 0XF0, ctx->r29);
    // 0x00442AA8: sdc1        $f22, 0xE8($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0XE8, ctx->r29);
    // 0x00442AAC: sdc1        $f21, 0xE0($sp)
    CHECK_FR(ctx, 21);
    SD(ctx->f21.u64, 0XE0, ctx->r29);
    // 0x00442AB0: sdc1        $f20, 0xD8($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0XD8, ctx->r29);
    // 0x00442AB4: sw          $zero, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = 0;
    // 0x00442AB8: jal         0x00246108
    // 0x00442ABC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_00246108(rdram, ctx);
        goto after_0;
    // 0x00442ABC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_0:
    // 0x00442AC0: lw          $a0, 0x70($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X70);
    // 0x00442AC4: beq         $a0, $zero, L_00442AE0
    if (ctx->r4 == 0) {
        // 0x00442AC8: addiu       $s2, $zero, 0x1
        ctx->r18 = ADD32(0, 0X1);
            goto L_00442AE0;
    }
    // 0x00442AC8: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
    // 0x00442ACC: lw          $v0, 0xD4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XD4);
    // 0x00442AD0: lui         $v1, 0x30
    ctx->r3 = S32(0X30 << 16);
    // 0x00442AD4: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x00442AD8: bnel        $v0, $zero, L_00442AE0
    if (ctx->r2 != 0) {
        // 0x00442ADC: sw          $a0, 0xB0($sp)
        MEM_W(0XB0, ctx->r29) = ctx->r4;
            goto L_00442AE0;
    }
    goto skip_0;
    // 0x00442ADC: sw          $a0, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->r4;
    skip_0:
L_00442AE0:
    // 0x00442AE0: lw          $v0, 0xB0($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XB0);
    // 0x00442AE4: beq         $v0, $zero, L_00442D08
    if (ctx->r2 == 0) {
        // 0x00442AE8: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_00442D08;
    }
    // 0x00442AE8: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x00442AEC: addiu       $s4, $zero, -0x1
    ctx->r20 = ADD32(0, -0X1);
    // 0x00442AF0: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00442AF4: lwc1        $f20, 0x5F8($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X5F8);
    // 0x00442AF8: lui         $s1, 0x43
    ctx->r17 = S32(0X43 << 16);
    // 0x00442AFC: addiu       $s1, $s1, 0x1C40
    ctx->r17 = ADD32(ctx->r17, 0X1C40);
L_00442B00:
    // 0x00442B00: bgez        $s4, L_00442B5C
    if (SIGNED(ctx->r20) >= 0) {
        // 0x00442B04: addiu       $a0, $sp, 0x18
        ctx->r4 = ADD32(ctx->r29, 0X18);
            goto L_00442B5C;
    }
    // 0x00442B04: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    // 0x00442B08: lw          $a1, 0xB0($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XB0);
    // 0x00442B0C: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    // 0x00442B10: jal         0x0020EF2C
    // 0x00442B14: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
    func_0020EF2C(rdram, ctx);
        goto after_1;
    // 0x00442B14: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
    after_1:
    // 0x00442B18: lwc1        $f1, 0x18($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x00442B1C: mul.s       $f1, $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f1.fl);
    // 0x00442B20: lwc1        $f0, 0x1C($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x00442B24: mul.s       $f0, $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x00442B28: lwc1        $f12, 0x20($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X20);
    // 0x00442B2C: mul.s       $f12, $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x00442B30: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x00442B34: jal         0x00298470
    // 0x00442B38: add.s       $f12, $f1, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = ctx->f1.fl + ctx->f12.fl;
    func_00298470(rdram, ctx);
        goto after_2;
    // 0x00442B38: add.s       $f12, $f1, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = ctx->f1.fl + ctx->f12.fl;
    after_2:
    // 0x00442B3C: c.lt.s      $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f0.fl < ctx->f20.fl;
    // 0x00442B40: nop

    // 0x00442B44: bc1tl       L_00442B4C
    if (c1cs) {
        // 0x00442B48: addu        $s4, $s0, $zero
        ctx->r20 = ADD32(ctx->r16, 0);
            goto L_00442B4C;
    }
    goto skip_1;
    // 0x00442B48: addu        $s4, $s0, $zero
    ctx->r20 = ADD32(ctx->r16, 0);
    skip_1:
L_00442B4C:
    // 0x00442B4C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x00442B50: slti        $v0, $s0, 0x4
    ctx->r2 = SIGNED(ctx->r16) < 0X4 ? 1 : 0;
    // 0x00442B54: bne         $v0, $zero, L_00442B00
    if (ctx->r2 != 0) {
        // 0x00442B58: addiu       $s1, $s1, 0x14
        ctx->r17 = ADD32(ctx->r17, 0X14);
            goto L_00442B00;
    }
    // 0x00442B58: addiu       $s1, $s1, 0x14
    ctx->r17 = ADD32(ctx->r17, 0X14);
L_00442B5C:
    // 0x00442B5C: beq         $s2, $zero, L_00442CE8
    if (ctx->r18 == 0) {
        // 0x00442B60: sll         $v0, $s4, 2
        ctx->r2 = S32(ctx->r20 << 2);
            goto L_00442CE8;
    }
    // 0x00442B60: sll         $v0, $s4, 2
    ctx->r2 = S32(ctx->r20 << 2);
    // 0x00442B64: addu        $v0, $v0, $s4
    ctx->r2 = ADD32(ctx->r2, ctx->r20);
    // 0x00442B68: sll         $s3, $v0, 2
    ctx->r19 = S32(ctx->r2 << 2);
    // 0x00442B6C: lui         $s5, 0x43
    ctx->r21 = S32(0X43 << 16);
    // 0x00442B70: addiu       $s5, $s5, 0x1C40
    ctx->r21 = ADD32(ctx->r21, 0X1C40);
    // 0x00442B74: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00442B78: lwc1        $f26, 0x5FC($at)
    ctx->f26.u32l = MEM_W(ctx->r1, 0X5FC);
    // 0x00442B7C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00442B80: lwc1        $f25, 0x600($at)
    ctx->f_odd[(25 - 1) * 2] = MEM_W(ctx->r1, 0X600);
L_00442B84:
    // 0x00442B84: bltz        $s4, L_00442BDC
    if (SIGNED(ctx->r20) < 0) {
        // 0x00442B88: nop
    
            goto L_00442BDC;
    }
    // 0x00442B88: nop

    // 0x00442B8C: lui         $at, 0x43
    ctx->r1 = S32(0X43 << 16);
    // 0x00442B90: addu        $at, $at, $s3
    ctx->r1 = ADD32(ctx->r1, ctx->r19);
    // 0x00442B94: lwc1        $f24, 0x1C40($at)
    ctx->f24.u32l = MEM_W(ctx->r1, 0X1C40);
    // 0x00442B98: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00442B9C: lwc1        $f12, 0x604($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X604);
    // 0x00442BA0: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00442BA4: lwc1        $f14, 0x608($at)
    ctx->f14.u32l = MEM_W(ctx->r1, 0X608);
    // 0x00442BA8: lui         $at, 0x43
    ctx->r1 = S32(0X43 << 16);
    // 0x00442BAC: addu        $at, $at, $s3
    ctx->r1 = ADD32(ctx->r1, ctx->r19);
    // 0x00442BB0: lwc1        $f23, 0x1C48($at)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r1, 0X1C48);
    // 0x00442BB4: jal         0x002119FC
    // 0x00442BB8: nop

    func_002119FC(rdram, ctx);
        goto after_3;
    // 0x00442BB8: nop

    after_3:
    // 0x00442BBC: lui         $at, 0x43
    ctx->r1 = S32(0X43 << 16);
    // 0x00442BC0: addu        $at, $at, $s3
    ctx->r1 = ADD32(ctx->r1, ctx->r19);
    // 0x00442BC4: lwc1        $f12, 0x1C4C($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X1C4C);
    // 0x00442BC8: lui         $at, 0x43
    ctx->r1 = S32(0X43 << 16);
    // 0x00442BCC: addu        $at, $at, $s3
    ctx->r1 = ADD32(ctx->r1, ctx->r19);
    // 0x00442BD0: lwc1        $f14, 0x1C50($at)
    ctx->f14.u32l = MEM_W(ctx->r1, 0X1C50);
    // 0x00442BD4: j           L_00409C24
    // 0x00442BD8: nop

    entry_00409C24(rdram, ctx);
    return;
    // 0x00442BD8: nop

L_00442BDC:
    // 0x00442BDC: lw          $v0, 0xB0($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XB0);
    // 0x00442BE0: lwc1        $f24, 0x4($v0)
    ctx->f24.u32l = MEM_W(ctx->r2, 0X4);
    // 0x00442BE4: lwc1        $f23, 0xC($v0)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r2, 0XC);
    // 0x00442BE8: beq         $s6, $zero, L_00442BFC
    if (ctx->r22 == 0) {
        // 0x00442BEC: nop
    
            goto L_00442BFC;
    }
    // 0x00442BEC: nop

    // 0x00442BF0: mtc1        $zero, $f22
    ctx->f22.u32l = 0;
    // 0x00442BF4: j           L_00409C30
    // 0x00442BF8: mov.s       $f21, $f22
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 22);
    ctx->f21.fl = ctx->f22.fl;
    entry_00409C30(rdram, ctx);
    return;
    // 0x00442BF8: mov.s       $f21, $f22
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 22);
    ctx->f21.fl = ctx->f22.fl;
L_00442BFC:
    // 0x00442BFC: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00442C00: lwc1        $f12, 0x60C($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X60C);
    // 0x00442C04: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00442C08: lwc1        $f14, 0x610($at)
    ctx->f14.u32l = MEM_W(ctx->r1, 0X610);
    // 0x00442C0C: jal         0x002119FC
    // 0x00442C10: nop

    func_002119FC(rdram, ctx);
        goto after_4;
    // 0x00442C10: nop

    after_4:
    // 0x00442C14: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00442C18: lwc1        $f12, 0x614($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X614);
    // 0x00442C1C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00442C20: lwc1        $f14, 0x618($at)
    ctx->f14.u32l = MEM_W(ctx->r1, 0X618);
    // 0x00442C24: jal         0x002119FC
    // 0x00442C28: mov.s       $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    ctx->f22.fl = ctx->f0.fl;
    func_002119FC(rdram, ctx);
        goto after_5;
    // 0x00442C28: mov.s       $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    ctx->f22.fl = ctx->f0.fl;
    after_5:
    // 0x00442C2C: mov.s       $f21, $f0
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 0);
    ctx->f21.fl = ctx->f0.fl;
    // 0x00442C30: jal         0x002982F0
    // 0x00442C34: mov.s       $f12, $f21
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 21);
    ctx->f12.fl = ctx->f21.fl;
    func_002982F0(rdram, ctx);
        goto after_6;
    // 0x00442C34: mov.s       $f12, $f21
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 21);
    ctx->f12.fl = ctx->f21.fl;
    after_6:
    // 0x00442C38: mul.s       $f20, $f22, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = MUL_S(ctx->f22.fl, ctx->f0.fl);
    // 0x00442C3C: jal         0x002974C0
    // 0x00442C40: mov.s       $f12, $f21
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 21);
    ctx->f12.fl = ctx->f21.fl;
    func_002974C0(rdram, ctx);
        goto after_7;
    // 0x00442C40: mov.s       $f12, $f21
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 21);
    ctx->f12.fl = ctx->f21.fl;
    after_7:
    // 0x00442C44: mul.s       $f0, $f22, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f22.fl, ctx->f0.fl);
    // 0x00442C48: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    // 0x00442C4C: add.s       $f24, $f24, $f20
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f24.fl = ctx->f24.fl + ctx->f20.fl;
    // 0x00442C50: addu        $s0, $s2, $zero
    ctx->r16 = ADD32(ctx->r18, 0);
    // 0x00442C54: addu        $s1, $s5, $zero
    ctx->r17 = ADD32(ctx->r21, 0);
    // 0x00442C58: add.s       $f23, $f23, $f0
    CHECK_FR(ctx, 23);
    CHECK_FR(ctx, 23);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f23.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f23.fl = ctx->f23.fl + ctx->f0.fl;
    // 0x00442C5C: swc1        $f26, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f26.u32l;
    // 0x00442C60: swc1        $f24, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f24.u32l;
    // 0x00442C64: swc1        $f23, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x00442C68: addiu       $a0, $sp, 0x38
    ctx->r4 = ADD32(ctx->r29, 0X38);
L_00442C6C:
    // 0x00442C6C: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    // 0x00442C70: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    // 0x00442C74: lw          $t0, 0x18($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X18);
    // 0x00442C78: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x00442C7C: lw          $t2, 0x20($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X20);
    // 0x00442C80: sw          $t0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r8;
    // 0x00442C84: sw          $t1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r9;
    // 0x00442C88: sw          $t2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r10;
    // 0x00442C8C: jal         0x0020EF2C
    // 0x00442C90: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
    func_0020EF2C(rdram, ctx);
        goto after_8;
    // 0x00442C90: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
    after_8:
    // 0x00442C94: lwc1        $f0, 0x38($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X38);
    // 0x00442C98: mul.s       $f0, $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x00442C9C: lwc1        $f1, 0x3C($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X3C);
    // 0x00442CA0: mul.s       $f1, $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f1.fl);
    // 0x00442CA4: lwc1        $f12, 0x40($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X40);
    // 0x00442CA8: mul.s       $f12, $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x00442CAC: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x00442CB0: jal         0x00298470
    // 0x00442CB4: add.s       $f12, $f0, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = ctx->f0.fl + ctx->f12.fl;
    func_00298470(rdram, ctx);
        goto after_9;
    // 0x00442CB4: add.s       $f12, $f0, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = ctx->f0.fl + ctx->f12.fl;
    after_9:
    // 0x00442CB8: c.lt.s      $f0, $f25
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 25);
    c1cs = ctx->f0.fl < ctx->f25.fl;
    // 0x00442CBC: nop

    // 0x00442CC0: bc1tl       L_00442CC8
    if (c1cs) {
        // 0x00442CC4: addiu       $s2, $zero, 0x1
        ctx->r18 = ADD32(0, 0X1);
            goto L_00442CC8;
    }
    goto skip_2;
    // 0x00442CC4: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
    skip_2:
L_00442CC8:
    // 0x00442CC8: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x00442CCC: slti        $v0, $s0, 0x4
    ctx->r2 = SIGNED(ctx->r16) < 0X4 ? 1 : 0;
    // 0x00442CD0: beq         $v0, $zero, L_00442CE0
    if (ctx->r2 == 0) {
        // 0x00442CD4: addiu       $s1, $s1, 0x14
        ctx->r17 = ADD32(ctx->r17, 0X14);
            goto L_00442CE0;
    }
    // 0x00442CD4: addiu       $s1, $s1, 0x14
    ctx->r17 = ADD32(ctx->r17, 0X14);
    // 0x00442CD8: beq         $s2, $zero, L_00442C6C
    if (ctx->r18 == 0) {
        // 0x00442CDC: addiu       $a0, $sp, 0x38
        ctx->r4 = ADD32(ctx->r29, 0X38);
            goto L_00442C6C;
    }
    // 0x00442CDC: addiu       $a0, $sp, 0x38
    ctx->r4 = ADD32(ctx->r29, 0X38);
L_00442CE0:
    // 0x00442CE0: bne         $s2, $zero, L_00442B84
    if (ctx->r18 != 0) {
        // 0x00442CE4: nop
    
            goto L_00442B84;
    }
    // 0x00442CE4: nop

L_00442CE8:
    // 0x00442CE8: lw          $a0, 0xB0($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XB0);
    // 0x00442CEC: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x00442CF0: lw          $v0, 0x20($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X20);
    // 0x00442CF4: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x00442CF8: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x00442CFC: lw          $a3, 0x1C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X1C);
    // 0x00442D00: jal         0x00246690
    // 0x00442D04: addiu       $a1, $zero, 0x112
    ctx->r5 = ADD32(0, 0X112);
    func_00246690(rdram, ctx);
        goto after_10;
    // 0x00442D04: addiu       $a1, $zero, 0x112
    ctx->r5 = ADD32(0, 0X112);
    after_10:
L_00442D08:
    // 0x00442D08: lw          $ra, 0xD4($sp)
    ctx->r31 = MEM_W(ctx->r29, 0XD4);
    // 0x00442D0C: lw          $s6, 0xD0($sp)
    ctx->r22 = MEM_W(ctx->r29, 0XD0);
    // 0x00442D10: lw          $s5, 0xCC($sp)
    ctx->r21 = MEM_W(ctx->r29, 0XCC);
    // 0x00442D14: lw          $s4, 0xC8($sp)
    ctx->r20 = MEM_W(ctx->r29, 0XC8);
    // 0x00442D18: lw          $s3, 0xC4($sp)
    ctx->r19 = MEM_W(ctx->r29, 0XC4);
    // 0x00442D1C: lw          $s2, 0xC0($sp)
    ctx->r18 = MEM_W(ctx->r29, 0XC0);
    // 0x00442D20: lw          $s1, 0xBC($sp)
    ctx->r17 = MEM_W(ctx->r29, 0XBC);
    // 0x00442D24: lw          $s0, 0xB8($sp)
    ctx->r16 = MEM_W(ctx->r29, 0XB8);
    // 0x00442D28: ldc1        $f26, 0x108($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X108);
    // 0x00442D2C: ldc1        $f25, 0x100($sp)
    CHECK_FR(ctx, 25);
    ctx->f25.u64 = LD(ctx->r29, 0X100);
    // 0x00442D30: ldc1        $f24, 0xF8($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0XF8);
    // 0x00442D34: ldc1        $f23, 0xF0($sp)
    CHECK_FR(ctx, 23);
    ctx->f23.u64 = LD(ctx->r29, 0XF0);
    // 0x00442D38: ldc1        $f22, 0xE8($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0XE8);
    // 0x00442D3C: ldc1        $f21, 0xE0($sp)
    CHECK_FR(ctx, 21);
    ctx->f21.u64 = LD(ctx->r29, 0XE0);
    // 0x00442D40: ldc1        $f20, 0xD8($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0XD8);
    // 0x00442D44: jr          $ra
    // 0x00442D48: addiu       $sp, $sp, 0x110
    ctx->r29 = ADD32(ctx->r29, 0X110);
    return;
    // 0x00442D48: addiu       $sp, $sp, 0x110
    ctx->r29 = ADD32(ctx->r29, 0X110);
;}
RECOMP_FUNC void func_0041560C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041560C: beq         $s0, $zero, L_0041564C
    if (ctx->r16 == 0) {
        // 0x00415610: nop
    
            goto L_0041564C;
    }
    // 0x00415610: nop

    // 0x00415614: lw          $a0, 0x20($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X20);
    // 0x00415618: jal         0x002856B8
    // 0x0041561C: nop

    func_002856B8(rdram, ctx);
        goto after_0;
    // 0x0041561C: nop

    after_0:
    // 0x00415620: beq         $v0, $zero, L_00415630
    if (ctx->r2 == 0) {
        // 0x00415624: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_00415630;
    }
    // 0x00415624: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x00415628: jal         0x004151B4
    // 0x0041562C: addiu       $a1, $zero, 0x12
    ctx->r5 = ADD32(0, 0X12);
    func_004151B4(rdram, ctx);
        goto after_1;
    // 0x0041562C: addiu       $a1, $zero, 0x12
    ctx->r5 = ADD32(0, 0X12);
    after_1:
L_00415630:
    // 0x00415630: lw          $a0, 0x20($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X20);
    // 0x00415634: jal         0x00285700
    // 0x00415638: nop

    func_00285700(rdram, ctx);
        goto after_2;
    // 0x00415638: nop

    after_2:
    // 0x0041563C: beq         $v0, $zero, L_0041564C
    if (ctx->r2 == 0) {
        // 0x00415640: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_0041564C;
    }
    // 0x00415640: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x00415644: jal         0x004151B4
    // 0x00415648: addiu       $a1, $zero, 0x13
    ctx->r5 = ADD32(0, 0X13);
    func_004151B4(rdram, ctx);
        goto after_3;
    // 0x00415648: addiu       $a1, $zero, 0x13
    ctx->r5 = ADD32(0, 0X13);
    after_3:
L_0041564C:
    // 0x0041564C: lh          $v1, 0x28($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X28);
    // 0x00415650: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x00415654: bne         $v1, $v0, L_004156D8
    if (ctx->r3 != ctx->r2) {
            // 0x00415658: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    func_004156D8(rdram, ctx);
    return;
    }
    // 0x00415658: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x0041565C: lw          $a0, 0x20($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X20);
    // 0x00415660: jal         0x002855E8
    // 0x00415664: nop

    func_002855E8(rdram, ctx);
        goto after_4;
    // 0x00415664: nop

    after_4:
    // 0x00415668: bne         $v0, $zero, L_004156A8
    if (ctx->r2 != 0) {
        // 0x0041566C: nop
    
            goto L_004156A8;
    }
    // 0x0041566C: nop

    // 0x00415670: lw          $a0, 0x20($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X20);
    // 0x00415674: jal         0x00285628
    // 0x00415678: nop

    func_00285628(rdram, ctx);
        goto after_5;
    // 0x00415678: nop

    after_5:
    // 0x0041567C: beq         $v0, $zero, L_0041568C
    if (ctx->r2 == 0) {
        // 0x00415680: nop
    
            goto L_0041568C;
    }
    // 0x00415680: nop

    // 0x00415684: bne         $s3, $zero, L_004156A8
    if (ctx->r19 != 0) {
        // 0x00415688: nop
    
            goto L_004156A8;
    }
    // 0x00415688: nop

L_0041568C:
    // 0x0041568C: lw          $a0, 0x20($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X20);
    // 0x00415690: jal         0x00285670
    // 0x00415694: nop

    func_00285670(rdram, ctx);
        goto after_6;
    // 0x00415694: nop

    after_6:
    // 0x00415698: beq         $v0, $zero, L_004156D8
    if (ctx->r2 == 0) {
            // 0x0041569C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    func_004156D8(rdram, ctx);
    return;
    }
    // 0x0041569C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x004156A0: beq         $s3, $zero, L_004156D8
    if (ctx->r19 == 0) {
            // 0x004156A4: nop

    func_004156D8(rdram, ctx);
    return;
    }
    // 0x004156A4: nop

L_004156A8:
    // 0x004156A8: lw          $v0, 0x18($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X18);
    // 0x004156AC: lw          $v0, 0x1C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1C);
    // 0x004156B0: beq         $v0, $zero, L_004156CC
    if (ctx->r2 == 0) {
        // 0x004156B4: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_004156CC;
    }
    // 0x004156B4: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x004156B8: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x004156BC: jalr        $v0
    // 0x004156C0: addu        $a2, $s5, $zero
    ctx->r6 = ADD32(ctx->r21, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_7;
    // 0x004156C0: addu        $a2, $s5, $zero
    ctx->r6 = ADD32(ctx->r21, 0);
    after_7:
    // 0x004156C4: beq         $v0, $zero, L_004156D8
    if (ctx->r2 == 0) {
            // 0x004156C8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    func_004156D8(rdram, ctx);
    return;
    }
    // 0x004156C8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_004156CC:
    // 0x004156CC: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x004156D0: sh          $v0, 0x28($s1)
    MEM_H(0X28, ctx->r17) = ctx->r2;
    // 0x004156D4: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // turok2: reconnected split function: a stray ELF symbol at 0x004156D8 ended
    // this function early, leaving it without its epilogue. On the
    // hardware execution simply continues into the next instruction.
    func_004156D8(rdram, ctx);
;}
RECOMP_FUNC void func_00454BB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00454BB0: lb          $v1, 0x2F($a0)
    ctx->r3 = MEM_B(ctx->r4, 0X2F);
    // 0x00454BB4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00454BB8: beq         $v1, $v0, L_00454C08
    if (ctx->r3 == ctx->r2) {
            // 0x00454BBC: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    func_00454C08(rdram, ctx);
    return;
    }
    // 0x00454BBC: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x00454BC0: bne         $v0, $zero, L_00454BDC
    if (ctx->r2 != 0) {
        // 0x00454BC4: addu        $a1, $zero, $zero
        ctx->r5 = ADD32(0, 0);
            goto L_00454BDC;
    }
    // 0x00454BC4: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x00454BC8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x00454BCC: beq         $v1, $v0, L_00454C38
    if (ctx->r3 == ctx->r2) {
            // 0x00454BD0: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    func_00454C38(rdram, ctx);
    return;
    }
    // 0x00454BD0: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x00454BD4: beq         $v1, $v0, L_00454C64
    if (ctx->r3 == ctx->r2) {
            // 0x00454BD8: addu        $v1, $a0, $a1
    ctx->r3 = ADD32(ctx->r4, ctx->r5);
    func_00454C64(rdram, ctx);
    return;
    }
    // 0x00454BD8: addu        $v1, $a0, $a1
    ctx->r3 = ADD32(ctx->r4, ctx->r5);
L_00454BDC:
    // 0x00454BDC: addu        $v1, $a0, $a1
    ctx->r3 = ADD32(ctx->r4, ctx->r5);
L_00454BE0:
    // 0x00454BE0: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00454BE4: addu        $at, $at, $a1
    ctx->r1 = ADD32(ctx->r1, ctx->r5);
    // 0x00454BE8: lbu         $v0, 0x5E80($at)
    ctx->r2 = MEM_BU(ctx->r1, 0X5E80);
    // 0x00454BEC: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x00454BF0: sb          $v0, 0x33($v1)
    MEM_B(0X33, ctx->r3) = ctx->r2;
    // 0x00454BF4: slti        $v0, $a1, 0x8
    ctx->r2 = SIGNED(ctx->r5) < 0X8 ? 1 : 0;
    // 0x00454BF8: bne         $v0, $zero, L_00454BE0
    if (ctx->r2 != 0) {
        // 0x00454BFC: addu        $v1, $a0, $a1
        ctx->r3 = ADD32(ctx->r4, ctx->r5);
            goto L_00454BE0;
    }
    // 0x00454BFC: addu        $v1, $a0, $a1
    ctx->r3 = ADD32(ctx->r4, ctx->r5);
    // 0x00454C00: jr          $ra
    // 0x00454C04: nop

    return;
    // 0x00454C04: nop

;}
RECOMP_FUNC void func_00453858(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00453858: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x0045385C: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x00453860: sw          $v0, 0x920($at)
    MEM_W(0X920, ctx->r1) = ctx->r2;
    // 0x00453864: jr          $ra
    // 0x00453868: nop

    return;
    // 0x00453868: nop

;}
RECOMP_FUNC void func_002894D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002894D0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x002894D4: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    // 0x002894D8: lui         $a1, 0x4160
    ctx->r5 = S32(0X4160 << 16);
    // 0x002894DC: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x002894E0: jal         0x00288D3C
    // 0x002894E4: addu        $a3, $a2, $zero
    ctx->r7 = ADD32(ctx->r6, 0);
    func_00288D3C(rdram, ctx);
        goto after_0;
    // 0x002894E4: addu        $a3, $a2, $zero
    ctx->r7 = ADD32(ctx->r6, 0);
    after_0:
    // 0x002894E8: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x002894EC: jr          $ra
    // 0x002894F0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x002894F0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00221210(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00221210: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x00221214: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x00221218: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x0022121C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x00221220: lui         $s0, 0x8012
    ctx->r16 = S32(0X8012 << 16);
    // 0x00221224: addiu       $s0, $s0, -0x5520
    ctx->r16 = ADD32(ctx->r16, -0X5520);
    // 0x00221228: addiu       $a0, $s0, -0x1270
    ctx->r4 = ADD32(ctx->r16, -0X1270);
    // 0x0022122C: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x00221230: sw          $fp, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r30;
    // 0x00221234: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x00221238: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x0022123C: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x00221240: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x00221244: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x00221248: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x0022124C: lw          $a2, 0x0($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X0);
    // 0x00221250: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x00221254: sw          $a2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r6;
    // 0x00221258: sw          $zero, 0xDF8($s1)
    MEM_W(0XDF8, ctx->r17) = 0;
    // 0x0022125C: sw          $zero, 0xEFC($s1)
    MEM_W(0XEFC, ctx->r17) = 0;
    // 0x00221260: jal         0x002530A4
    // 0x00221264: sw          $zero, 0xF84($s1)
    MEM_W(0XF84, ctx->r17) = 0;
    func_002530A4(rdram, ctx);
        goto after_0;
    // 0x00221264: sw          $zero, 0xF84($s1)
    MEM_W(0XF84, ctx->r17) = 0;
    after_0:
    // 0x00221268: lbu         $v0, 0x11($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X11);
    // 0x0022126C: bne         $v0, $zero, L_00221278
    if (ctx->r2 != 0) {
        // 0x00221270: addu        $s7, $zero, $zero
        ctx->r23 = ADD32(0, 0);
            goto L_00221278;
    }
    // 0x00221270: addu        $s7, $zero, $zero
    ctx->r23 = ADD32(0, 0);
    // 0x00221274: lw          $s7, -0x1210($s0)
    ctx->r23 = MEM_W(ctx->r16, -0X1210);
L_00221278:
    // 0x00221278: jal         0x00284188
    // 0x0022127C: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    func_00284188(rdram, ctx);
        goto after_1;
    // 0x0022127C: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    after_1:
    // 0x00221280: bne         $v0, $zero, L_0022129C
    if (ctx->r2 != 0) {
        // 0x00221284: nop
    
            goto L_0022129C;
    }
    // 0x00221284: nop

    // 0x00221288: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x0022128C: addu        $at, $s1, $at
    ctx->r1 = ADD32(ctx->r17, ctx->r1);
    // 0x00221290: lw          $v0, -0x705C($at)
    ctx->r2 = MEM_W(ctx->r1, -0X705C);
    // 0x00221294: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x00221298: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
L_0022129C:
    // 0x0022129C: lw          $s4, 0xE4($s1)
    ctx->r20 = MEM_W(ctx->r17, 0XE4);
    // 0x002212A0: lw          $fp, 0xE8($s1)
    ctx->r30 = MEM_W(ctx->r17, 0XE8);
    // 0x002212A4: lw          $a0, 0xE0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0XE0);
    // 0x002212A8: slt         $v0, $s4, $fp
    ctx->r2 = SIGNED(ctx->r20) < SIGNED(ctx->r30) ? 1 : 0;
    // 0x002212AC: beq         $v0, $zero, L_0022167C
    if (ctx->r2 == 0) {
        // 0x002212B0: sll         $v0, $s4, 2
        ctx->r2 = S32(ctx->r20 << 2);
            goto L_0022167C;
    }
    // 0x002212B0: sll         $v0, $s4, 2
    ctx->r2 = S32(ctx->r20 << 2);
    // 0x002212B4: lui         $s6, 0x800F
    ctx->r22 = S32(0X800F << 16);
    // 0x002212B8: addiu       $s6, $s6, 0x5A34
    ctx->r22 = ADD32(ctx->r22, 0X5A34);
    // 0x002212BC: lui         $s5, 0x800F
    ctx->r21 = S32(0X800F << 16);
    // 0x002212C0: addiu       $s5, $s5, 0x5A1C
    ctx->r21 = ADD32(ctx->r21, 0X5A1C);
    // 0x002212C4: addu        $v0, $v0, $s4
    ctx->r2 = ADD32(ctx->r2, ctx->r20);
    // 0x002212C8: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x002212CC: addu        $v0, $v0, $s4
    ctx->r2 = ADD32(ctx->r2, ctx->r20);
    // 0x002212D0: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x002212D4: addu        $s0, $v0, $a0
    ctx->r16 = ADD32(ctx->r2, ctx->r4);
L_002212D8:
    // 0x002212D8: lw          $v1, 0xD4($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XD4);
    // 0x002212DC: andi        $v0, $v1, 0x100
    ctx->r2 = ctx->r3 & 0X100;
    // 0x002212E0: beql        $v0, $zero, L_00221670
    if (ctx->r2 == 0) {
        // 0x002212E4: addiu       $s4, $s4, 0x1
        ctx->r20 = ADD32(ctx->r20, 0X1);
            goto L_00221670;
    }
    goto skip_0;
    // 0x002212E4: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
    skip_0:
    // 0x002212E8: lw          $s3, 0x14($s0)
    ctx->r19 = MEM_W(ctx->r16, 0X14);
    // 0x002212EC: lw          $a2, 0x10($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X10);
    // 0x002212F0: lw          $v0, 0x4($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X4);
    // 0x002212F4: and         $v0, $v0, $a2
    ctx->r2 = ctx->r2 & ctx->r6;
    // 0x002212F8: beq         $v0, $zero, L_00221480
    if (ctx->r2 == 0) {
        // 0x002212FC: addu        $s2, $zero, $zero
        ctx->r18 = ADD32(0, 0);
            goto L_00221480;
    }
    // 0x002212FC: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    // 0x00221300: lw          $a2, 0x14($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X14);
    // 0x00221304: beq         $a2, $zero, L_002213EC
    if (ctx->r6 == 0) {
        // 0x00221308: andi        $v0, $v1, 0x2
        ctx->r2 = ctx->r3 & 0X2;
            goto L_002213EC;
    }
    // 0x00221308: andi        $v0, $v1, 0x2
    ctx->r2 = ctx->r3 & 0X2;
    // 0x0022130C: bne         $v0, $zero, L_002213EC
    if (ctx->r2 != 0) {
        // 0x00221310: nop
    
            goto L_002213EC;
    }
    // 0x00221310: nop

    // 0x00221314: lb          $v0, 0xE3($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XE3);
    // 0x00221318: bne         $v0, $zero, L_002213EC
    if (ctx->r2 != 0) {
        // 0x0022131C: andi        $v0, $v1, 0x400
        ctx->r2 = ctx->r3 & 0X400;
            goto L_002213EC;
    }
    // 0x0022131C: andi        $v0, $v1, 0x400
    ctx->r2 = ctx->r3 & 0X400;
    // 0x00221320: bne         $v0, $zero, L_002213EC
    if (ctx->r2 != 0) {
        // 0x00221324: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_002213EC;
    }
    // 0x00221324: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x00221328: lw          $v1, 0x0($s3)
    ctx->r3 = MEM_W(ctx->r19, 0X0);
    // 0x0022132C: beq         $v1, $v0, L_002213EC
    if (ctx->r3 == ctx->r2) {
        // 0x00221330: nop
    
            goto L_002213EC;
    }
    // 0x00221330: nop

    // 0x00221334: jal         0x00267090
    // 0x00221338: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00267090(rdram, ctx);
        goto after_2;
    // 0x00221338: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x0022133C: bne         $v0, $zero, L_002213EC
    if (ctx->r2 != 0) {
        // 0x00221340: nop
    
            goto L_002213EC;
    }
    // 0x00221340: nop

    // 0x00221344: lwc1        $f1, 0x0($s6)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r22, 0X0);
    // 0x00221348: lwc1        $f0, 0xBC($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0XBC);
    // 0x0022134C: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x00221350: nop

    // 0x00221354: bc1f        L_00221480
    if (!c1cs) {
        // 0x00221358: nop
    
            goto L_00221480;
    }
    // 0x00221358: nop

    // 0x0022135C: lwc1        $f1, -0xC($s6)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r22, -0XC);
    // 0x00221360: lwc1        $f0, 0xC8($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0XC8);
    // 0x00221364: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x00221368: nop

    // 0x0022136C: bc1f        L_00221480
    if (!c1cs) {
        // 0x00221370: nop
    
            goto L_00221480;
    }
    // 0x00221370: nop

    // 0x00221374: lwc1        $f1, 0x8($s6)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r22, 0X8);
    // 0x00221378: lwc1        $f0, 0xC4($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0XC4);
    // 0x0022137C: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x00221380: nop

    // 0x00221384: bc1f        L_00221480
    if (!c1cs) {
        // 0x00221388: nop
    
            goto L_00221480;
    }
    // 0x00221388: nop

    // 0x0022138C: lwc1        $f1, -0x4($s6)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r22, -0X4);
    // 0x00221390: lwc1        $f0, 0xD0($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0XD0);
    // 0x00221394: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x00221398: nop

    // 0x0022139C: bc1f        L_00221480
    if (!c1cs) {
        // 0x002213A0: nop
    
            goto L_00221480;
    }
    // 0x002213A0: nop

    // 0x002213A4: lwc1        $f1, 0x4($s6)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r22, 0X4);
    // 0x002213A8: lwc1        $f0, 0xC0($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0XC0);
    // 0x002213AC: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x002213B0: nop

    // 0x002213B4: bc1f        L_00221480
    if (!c1cs) {
        // 0x002213B8: nop
    
            goto L_00221480;
    }
    // 0x002213B8: nop

    // 0x002213BC: lwc1        $f1, -0x8($s6)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r22, -0X8);
    // 0x002213C0: lwc1        $f0, 0xCC($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0XCC);
    // 0x002213C4: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x002213C8: nop

    // 0x002213CC: bc1f        L_00221480
    if (!c1cs) {
        // 0x002213D0: nop
    
            goto L_00221480;
    }
    // 0x002213D0: nop

    // 0x002213D4: beq         $s7, $zero, L_0022147C
    if (ctx->r23 == 0) {
        // 0x002213D8: addiu       $a0, $s7, 0x2D8
        ctx->r4 = ADD32(ctx->r23, 0X2D8);
            goto L_0022147C;
    }
    // 0x002213D8: addiu       $a0, $s7, 0x2D8
    ctx->r4 = ADD32(ctx->r23, 0X2D8);
    // 0x002213DC: jal         0x0026F60C
    // 0x002213E0: addiu       $a1, $s0, 0xBC
    ctx->r5 = ADD32(ctx->r16, 0XBC);
    func_0026F60C(rdram, ctx);
        goto after_3;
    // 0x002213E0: addiu       $a1, $s0, 0xBC
    ctx->r5 = ADD32(ctx->r16, 0XBC);
    after_3:
    // 0x002213E4: j           L_00221480
    // 0x002213E8: addu        $s2, $v0, $zero
    ctx->r18 = ADD32(ctx->r2, 0);
        goto L_00221480;
    // 0x002213E8: addu        $s2, $v0, $zero
    ctx->r18 = ADD32(ctx->r2, 0);
L_002213EC:
    // 0x002213EC: lwc1        $f1, 0x0($s5)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r21, 0X0);
    // 0x002213F0: lwc1        $f0, 0xBC($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0XBC);
    // 0x002213F4: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x002213F8: nop

    // 0x002213FC: bc1f        L_00221480
    if (!c1cs) {
        // 0x00221400: addu        $s2, $zero, $zero
        ctx->r18 = ADD32(0, 0);
            goto L_00221480;
    }
    // 0x00221400: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    // 0x00221404: lwc1        $f1, -0xC($s5)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r21, -0XC);
    // 0x00221408: lwc1        $f0, 0xC8($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0XC8);
    // 0x0022140C: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x00221410: nop

    // 0x00221414: bc1f        L_00221480
    if (!c1cs) {
        // 0x00221418: nop
    
            goto L_00221480;
    }
    // 0x00221418: nop

    // 0x0022141C: lwc1        $f1, 0x8($s5)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r21, 0X8);
    // 0x00221420: lwc1        $f0, 0xC4($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0XC4);
    // 0x00221424: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x00221428: nop

    // 0x0022142C: bc1f        L_00221480
    if (!c1cs) {
        // 0x00221430: nop
    
            goto L_00221480;
    }
    // 0x00221430: nop

    // 0x00221434: lwc1        $f1, -0x4($s5)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r21, -0X4);
    // 0x00221438: lwc1        $f0, 0xD0($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0XD0);
    // 0x0022143C: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x00221440: nop

    // 0x00221444: bc1f        L_00221480
    if (!c1cs) {
        // 0x00221448: nop
    
            goto L_00221480;
    }
    // 0x00221448: nop

    // 0x0022144C: lwc1        $f1, 0x4($s5)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r21, 0X4);
    // 0x00221450: lwc1        $f0, 0xC0($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0XC0);
    // 0x00221454: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x00221458: nop

    // 0x0022145C: bc1f        L_00221480
    if (!c1cs) {
        // 0x00221460: nop
    
            goto L_00221480;
    }
    // 0x00221460: nop

    // 0x00221464: lwc1        $f1, -0x8($s5)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r21, -0X8);
    // 0x00221468: lwc1        $f0, 0xCC($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0XCC);
    // 0x0022146C: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x00221470: nop

    // 0x00221474: bc1f        L_00221480
    if (!c1cs) {
        // 0x00221478: nop
    
            goto L_00221480;
    }
    // 0x00221478: nop

L_0022147C:
    // 0x0022147C: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
L_00221480:
    // 0x00221480: jal         0x00284188
    // 0x00221484: nop

    func_00284188(rdram, ctx);
        goto after_4;
    // 0x00221484: nop

    after_4:
    // 0x00221488: beq         $v0, $zero, L_002214B8
    if (ctx->r2 == 0) {
        // 0x0022148C: nop
    
            goto L_002214B8;
    }
    // 0x0022148C: nop

    // 0x00221490: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00221494: lw          $v0, -0x321C($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X321C);
    // 0x00221498: beq         $v0, $zero, L_002214B8
    if (ctx->r2 == 0) {
        // 0x0022149C: nop
    
            goto L_002214B8;
    }
    // 0x0022149C: nop

    // 0x002214A0: lw          $v0, 0x4($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X4);
    // 0x002214A4: andi        $v0, $v0, 0x200
    ctx->r2 = ctx->r2 & 0X200;
    // 0x002214A8: bne         $v0, $zero, L_002214D4
    if (ctx->r2 != 0) {
        // 0x002214AC: nop
    
            goto L_002214D4;
    }
    // 0x002214AC: nop

    // 0x002214B0: j           L_002214D4
    // 0x002214B4: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
        goto L_002214D4;
    // 0x002214B4: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
L_002214B8:
    // 0x002214B8: lw          $v0, 0x4($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X4);
    // 0x002214BC: andi        $v0, $v0, 0x100
    ctx->r2 = ctx->r2 & 0X100;
    // 0x002214C0: bne         $v0, $zero, L_002214D4
    if (ctx->r2 != 0) {
        // 0x002214C4: addiu       $v0, $zero, 0xB
        ctx->r2 = ADD32(0, 0XB);
            goto L_002214D4;
    }
    // 0x002214C4: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
    // 0x002214C8: lw          $v1, 0x0($s3)
    ctx->r3 = MEM_W(ctx->r19, 0X0);
    // 0x002214CC: bnel        $v1, $v0, L_002214D4
    if (ctx->r3 != ctx->r2) {
        // 0x002214D0: addu        $s2, $zero, $zero
        ctx->r18 = ADD32(0, 0);
            goto L_002214D4;
    }
    goto skip_1;
    // 0x002214D0: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    skip_1:
L_002214D4:
    // 0x002214D4: beq         $s2, $zero, L_00221660
    if (ctx->r18 == 0) {
        // 0x002214D8: addiu       $v1, $zero, -0x201
        ctx->r3 = ADD32(0, -0X201);
            goto L_00221660;
    }
    // 0x002214D8: addiu       $v1, $zero, -0x201
    ctx->r3 = ADD32(0, -0X201);
    // 0x002214DC: jal         0x0021EBC0
    // 0x002214E0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_0021EBC0(rdram, ctx);
        goto after_5;
    // 0x002214E0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_5:
    // 0x002214E4: jal         0x00267090
    // 0x002214E8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00267090(rdram, ctx);
        goto after_6;
    // 0x002214E8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_6:
    // 0x002214EC: beq         $v0, $zero, L_00221510
    if (ctx->r2 == 0) {
        // 0x002214F0: addiu       $v0, $zero, 0x200
        ctx->r2 = ADD32(0, 0X200);
            goto L_00221510;
    }
    // 0x002214F0: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x002214F4: lw          $v1, 0x8EC($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X8EC);
    // 0x002214F8: beq         $v1, $v0, L_00221510
    if (ctx->r3 == ctx->r2) {
        // 0x002214FC: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_00221510;
    }
    // 0x002214FC: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x00221500: addu        $v0, $s1, $v0
    ctx->r2 = ADD32(ctx->r17, ctx->r2);
    // 0x00221504: sw          $s0, 0xEC($v0)
    MEM_W(0XEC, ctx->r2) = ctx->r16;
    // 0x00221508: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
    // 0x0022150C: sw          $v0, 0x8EC($s1)
    MEM_W(0X8EC, ctx->r17) = ctx->r2;
L_00221510:
    // 0x00221510: jal         0x002681BC
    // 0x00221514: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_002681BC(rdram, ctx);
        goto after_7;
    // 0x00221514: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_7:
    // 0x00221518: beq         $v0, $zero, L_0022153C
    if (ctx->r2 == 0) {
        // 0x0022151C: addiu       $v0, $zero, 0x80
        ctx->r2 = ADD32(0, 0X80);
            goto L_0022153C;
    }
    // 0x0022151C: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x00221520: lw          $v1, 0xAF0($s1)
    ctx->r3 = MEM_W(ctx->r17, 0XAF0);
    // 0x00221524: beq         $v1, $v0, L_0022153C
    if (ctx->r3 == ctx->r2) {
        // 0x00221528: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_0022153C;
    }
    // 0x00221528: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x0022152C: addu        $v0, $s1, $v0
    ctx->r2 = ADD32(ctx->r17, ctx->r2);
    // 0x00221530: sw          $s0, 0x8F0($v0)
    MEM_W(0X8F0, ctx->r2) = ctx->r16;
    // 0x00221534: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
    // 0x00221538: sw          $v0, 0xAF0($s1)
    MEM_W(0XAF0, ctx->r17) = ctx->r2;
L_0022153C:
    // 0x0022153C: lw          $v1, 0xDF8($s1)
    ctx->r3 = MEM_W(ctx->r17, 0XDF8);
    // 0x00221540: slti        $v0, $v1, 0x80
    ctx->r2 = SIGNED(ctx->r3) < 0X80 ? 1 : 0;
    // 0x00221544: beq         $v0, $zero, L_0022155C
    if (ctx->r2 == 0) {
        // 0x00221548: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_0022155C;
    }
    // 0x00221548: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x0022154C: addu        $v0, $s1, $v0
    ctx->r2 = ADD32(ctx->r17, ctx->r2);
    // 0x00221550: sw          $s0, 0xBF8($v0)
    MEM_W(0XBF8, ctx->r2) = ctx->r16;
    // 0x00221554: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
    // 0x00221558: sw          $v0, 0xDF8($s1)
    MEM_W(0XDF8, ctx->r17) = ctx->r2;
L_0022155C:
    // 0x0022155C: lw          $a0, 0xEFC($s1)
    ctx->r4 = MEM_W(ctx->r17, 0XEFC);
    // 0x00221560: slti        $v0, $a0, 0x40
    ctx->r2 = SIGNED(ctx->r4) < 0X40 ? 1 : 0;
    // 0x00221564: beq         $v0, $zero, L_00221598
    if (ctx->r2 == 0) {
        // 0x00221568: nop
    
            goto L_00221598;
    }
    // 0x00221568: nop

    // 0x0022156C: lw          $v0, 0x14($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X14);
    // 0x00221570: lw          $v1, 0x0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X0);
    // 0x00221574: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00221578: bne         $v1, $v0, L_00221598
    if (ctx->r3 != ctx->r2) {
        // 0x0022157C: sll         $v0, $a0, 2
        ctx->r2 = S32(ctx->r4 << 2);
            goto L_00221598;
    }
    // 0x0022157C: sll         $v0, $a0, 2
    ctx->r2 = S32(ctx->r4 << 2);
    // 0x00221580: addu        $v0, $s1, $v0
    ctx->r2 = ADD32(ctx->r17, ctx->r2);
    // 0x00221584: sw          $s0, 0xDFC($v0)
    MEM_W(0XDFC, ctx->r2) = ctx->r16;
    // 0x00221588: lw          $v0, 0xEFC($s1)
    ctx->r2 = MEM_W(ctx->r17, 0XEFC);
    // 0x0022158C: sb          $v0, 0x20A($s0)
    MEM_B(0X20A, ctx->r16) = ctx->r2;
    // 0x00221590: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x00221594: sw          $v0, 0xEFC($s1)
    MEM_W(0XEFC, ctx->r17) = ctx->r2;
L_00221598:
    // 0x00221598: lw          $v1, 0xF84($s1)
    ctx->r3 = MEM_W(ctx->r17, 0XF84);
    // 0x0022159C: slti        $v0, $v1, 0x20
    ctx->r2 = SIGNED(ctx->r3) < 0X20 ? 1 : 0;
    // 0x002215A0: beq         $v0, $zero, L_002215C8
    if (ctx->r2 == 0) {
        // 0x002215A4: nop
    
            goto L_002215C8;
    }
    // 0x002215A4: nop

    // 0x002215A8: lw          $v0, 0xD4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XD4);
    // 0x002215AC: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x002215B0: beq         $v0, $zero, L_002215C8
    if (ctx->r2 == 0) {
        // 0x002215B4: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_002215C8;
    }
    // 0x002215B4: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x002215B8: addu        $v0, $s1, $v0
    ctx->r2 = ADD32(ctx->r17, ctx->r2);
    // 0x002215BC: sw          $s0, 0xF04($v0)
    MEM_W(0XF04, ctx->r2) = ctx->r16;
    // 0x002215C0: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
    // 0x002215C4: sw          $v0, 0xF84($s1)
    MEM_W(0XF84, ctx->r17) = ctx->r2;
L_002215C8:
    // 0x002215C8: lw          $a0, 0xFC8($s1)
    ctx->r4 = MEM_W(ctx->r17, 0XFC8);
    // 0x002215CC: slti        $v0, $a0, 0x10
    ctx->r2 = SIGNED(ctx->r4) < 0X10 ? 1 : 0;
    // 0x002215D0: beq         $v0, $zero, L_002215FC
    if (ctx->r2 == 0) {
        // 0x002215D4: nop
    
            goto L_002215FC;
    }
    // 0x002215D4: nop

    // 0x002215D8: lw          $v0, 0x14($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X14);
    // 0x002215DC: lw          $v1, 0x0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X0);
    // 0x002215E0: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x002215E4: bne         $v1, $v0, L_002215FC
    if (ctx->r3 != ctx->r2) {
        // 0x002215E8: sll         $v0, $a0, 2
        ctx->r2 = S32(ctx->r4 << 2);
            goto L_002215FC;
    }
    // 0x002215E8: sll         $v0, $a0, 2
    ctx->r2 = S32(ctx->r4 << 2);
    // 0x002215EC: addu        $v0, $s1, $v0
    ctx->r2 = ADD32(ctx->r17, ctx->r2);
    // 0x002215F0: sw          $s0, 0xF88($v0)
    MEM_W(0XF88, ctx->r2) = ctx->r16;
    // 0x002215F4: addiu       $v0, $a0, 0x1
    ctx->r2 = ADD32(ctx->r4, 0X1);
    // 0x002215F8: sw          $v0, 0xFC8($s1)
    MEM_W(0XFC8, ctx->r17) = ctx->r2;
L_002215FC:
    // 0x002215FC: lw          $a0, 0x104C($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X104C);
    // 0x00221600: slti        $v0, $a0, 0x20
    ctx->r2 = SIGNED(ctx->r4) < 0X20 ? 1 : 0;
    // 0x00221604: beq         $v0, $zero, L_0022162C
    if (ctx->r2 == 0) {
        // 0x00221608: addiu       $v0, $zero, 0x64F
        ctx->r2 = ADD32(0, 0X64F);
            goto L_0022162C;
    }
    // 0x00221608: addiu       $v0, $zero, 0x64F
    ctx->r2 = ADD32(0, 0X64F);
    // 0x0022160C: lhu         $v1, 0xB8($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0XB8);
    // 0x00221610: bne         $v1, $v0, L_00221634
    if (ctx->r3 != ctx->r2) {
        // 0x00221614: addiu       $v0, $zero, 0x64D
        ctx->r2 = ADD32(0, 0X64D);
            goto L_00221634;
    }
    // 0x00221614: addiu       $v0, $zero, 0x64D
    ctx->r2 = ADD32(0, 0X64D);
    // 0x00221618: sll         $v0, $a0, 2
    ctx->r2 = S32(ctx->r4 << 2);
    // 0x0022161C: addu        $v0, $s1, $v0
    ctx->r2 = ADD32(ctx->r17, ctx->r2);
    // 0x00221620: sw          $s0, 0xFCC($v0)
    MEM_W(0XFCC, ctx->r2) = ctx->r16;
    // 0x00221624: addiu       $v0, $a0, 0x1
    ctx->r2 = ADD32(ctx->r4, 0X1);
    // 0x00221628: sw          $v0, 0x104C($s1)
    MEM_W(0X104C, ctx->r17) = ctx->r2;
L_0022162C:
    // 0x0022162C: lhu         $v1, 0xB8($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0XB8);
    // 0x00221630: addiu       $v0, $zero, 0x64D
    ctx->r2 = ADD32(0, 0X64D);
L_00221634:
    // 0x00221634: bnel        $v1, $v0, L_00221670
    if (ctx->r3 != ctx->r2) {
        // 0x00221638: addiu       $s4, $s4, 0x1
        ctx->r20 = ADD32(ctx->r20, 0X1);
            goto L_00221670;
    }
    goto skip_2;
    // 0x00221638: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
    skip_2:
    // 0x0022163C: lw          $v1, 0x1060($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X1060);
    // 0x00221640: slti        $v0, $v1, 0x4
    ctx->r2 = SIGNED(ctx->r3) < 0X4 ? 1 : 0;
    // 0x00221644: beq         $v0, $zero, L_0022166C
    if (ctx->r2 == 0) {
        // 0x00221648: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_0022166C;
    }
    // 0x00221648: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x0022164C: addu        $v0, $s1, $v0
    ctx->r2 = ADD32(ctx->r17, ctx->r2);
    // 0x00221650: sw          $s0, 0x1050($v0)
    MEM_W(0X1050, ctx->r2) = ctx->r16;
    // 0x00221654: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
    // 0x00221658: j           L_0022166C
    // 0x0022165C: sw          $v0, 0x1060($s1)
    MEM_W(0X1060, ctx->r17) = ctx->r2;
        goto L_0022166C;
    // 0x0022165C: sw          $v0, 0x1060($s1)
    MEM_W(0X1060, ctx->r17) = ctx->r2;
L_00221660:
    // 0x00221660: lw          $v0, 0xD4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XD4);
    // 0x00221664: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x00221668: sw          $v0, 0xD4($s0)
    MEM_W(0XD4, ctx->r16) = ctx->r2;
L_0022166C:
    // 0x0022166C: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
L_00221670:
    // 0x00221670: slt         $v0, $s4, $fp
    ctx->r2 = SIGNED(ctx->r20) < SIGNED(ctx->r30) ? 1 : 0;
    // 0x00221674: bne         $v0, $zero, L_002212D8
    if (ctx->r2 != 0) {
        // 0x00221678: addiu       $s0, $s0, 0x288
        ctx->r16 = ADD32(ctx->r16, 0X288);
            goto L_002212D8;
    }
    // 0x00221678: addiu       $s0, $s0, 0x288
    ctx->r16 = ADD32(ctx->r16, 0X288);
L_0022167C:
    // 0x0022167C: lui         $a0, 0x1
    ctx->r4 = S32(0X1 << 16);
    // 0x00221680: ori         $a0, $a0, 0x3B28
    ctx->r4 = ctx->r4 | 0X3B28;
    // 0x00221684: addu        $a0, $s1, $a0
    ctx->r4 = ADD32(ctx->r17, ctx->r4);
    // 0x00221688: jal         0x0022828C
    // 0x0022168C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_0022828C(rdram, ctx);
        goto after_8;
    // 0x0022168C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_8:
    // 0x00221690: lw          $v0, 0xF00($s1)
    ctx->r2 = MEM_W(ctx->r17, 0XF00);
    // 0x00221694: lw          $v1, 0xEFC($s1)
    ctx->r3 = MEM_W(ctx->r17, 0XEFC);
    // 0x00221698: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x0022169C: sw          $v0, 0xF00($s1)
    MEM_W(0XF00, ctx->r17) = ctx->r2;
    // 0x002216A0: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x002216A4: beql        $v0, $zero, L_002216AC
    if (ctx->r2 == 0) {
        // 0x002216A8: sw          $zero, 0xF00($s1)
        MEM_W(0XF00, ctx->r17) = 0;
            goto L_002216AC;
    }
    goto skip_3;
    // 0x002216A8: sw          $zero, 0xF00($s1)
    MEM_W(0XF00, ctx->r17) = 0;
    skip_3:
L_002216AC:
    // 0x002216AC: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x002216B0: lw          $fp, 0x38($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X38);
    // 0x002216B4: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x002216B8: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x002216BC: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x002216C0: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x002216C4: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x002216C8: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x002216CC: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x002216D0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x002216D4: jr          $ra
    // 0x002216D8: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x002216D8: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
