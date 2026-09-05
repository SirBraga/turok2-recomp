#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_0041EC44(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041EC44: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x0041EC48: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x0041EC4C: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x0041EC50: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x0041EC54: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x0041EC58: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x0041EC5C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x0041EC60: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0041EC64: sw          $v0, 0x2024($at)
    MEM_W(0X2024, ctx->r1) = ctx->r2;
    // 0x0041EC68: lw          $v0, 0x20($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X20);
    // 0x0041EC6C: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x0041EC70: lw          $v1, 0x2020($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X2020);
    // 0x0041EC74: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x0041EC78: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0041EC7C: sw          $zero, 0x984($at)
    MEM_W(0X984, ctx->r1) = 0;
    // 0x0041EC80: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0041EC84: sw          $zero, 0x9A0($at)
    MEM_W(0X9A0, ctx->r1) = 0;
    // 0x0041EC88: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0041EC8C: sw          $t0, 0x994($at)
    MEM_W(0X994, ctx->r1) = ctx->r8;
    // 0x0041EC90: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0041EC94: sw          $zero, 0x9B4($at)
    MEM_W(0X9B4, ctx->r1) = 0;
    // 0x0041EC98: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0041EC9C: sw          $zero, 0x9BC($at)
    MEM_W(0X9BC, ctx->r1) = 0;
    // 0x0041ECA0: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0041ECA4: sw          $zero, 0x990($at)
    MEM_W(0X990, ctx->r1) = 0;
    // 0x0041ECA8: lb          $s0, 0x4($v0)
    ctx->r16 = MEM_B(ctx->r2, 0X4);
    // 0x0041ECAC: beq         $v1, $zero, L_0041ECE0
    if (ctx->r3 == 0) {
        // 0x0041ECB0: lui         $v1, 0xFEFF
        ctx->r3 = S32(0XFEFF << 16);
            goto L_0041ECE0;
    }
    // 0x0041ECB0: lui         $v1, 0xFEFF
    ctx->r3 = S32(0XFEFF << 16);
    // 0x0041ECB4: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x0041ECB8: addiu       $a0, $a0, -0x61D4
    ctx->r4 = ADD32(ctx->r4, -0X61D4);
    // 0x0041ECBC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x0041ECC0: lw          $a2, 0x1C($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X1C);
    // 0x0041ECC4: lw          $a3, 0x20($s1)
    ctx->r7 = MEM_W(ctx->r17, 0X20);
    // 0x0041ECC8: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x0041ECCC: addiu       $a1, $a1, -0x6E70
    ctx->r5 = ADD32(ctx->r5, -0X6E70);
    // 0x0041ECD0: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0041ECD4: sw          $t0, 0x9BC($at)
    MEM_W(0X9BC, ctx->r1) = ctx->r8;
    // 0x0041ECD8: j           L_0041EDC0
    // 0x0041ECDC: nop

        goto L_0041EDC0;
    // 0x0041ECDC: nop

L_0041ECE0:
    // 0x0041ECE0: lw          $a0, 0xC($s1)
    ctx->r4 = MEM_W(ctx->r17, 0XC);
    // 0x0041ECE4: lw          $v0, 0x328($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X328);
    // 0x0041ECE8: ori         $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 | 0XFFFF;
    // 0x0041ECEC: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x0041ECF0: sw          $v0, 0x328($a0)
    MEM_W(0X328, ctx->r4) = ctx->r2;
    // 0x0041ECF4: lw          $v0, 0x20($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X20);
    // 0x0041ECF8: lb          $a0, 0x4($v0)
    ctx->r4 = MEM_B(ctx->r2, 0X4);
    // 0x0041ECFC: jal         0x00426480
    // 0x0041ED00: nop

    func_00426480(rdram, ctx);
        goto after_0;
    // 0x0041ED00: nop

    after_0:
    // 0x0041ED04: jal         0x0042655C
    // 0x0041ED08: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_0042655C(rdram, ctx);
        goto after_1;
    // 0x0041ED08: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x0041ED0C: bne         $v0, $zero, L_0041ED24
    if (ctx->r2 != 0) {
        // 0x0041ED10: addiu       $s2, $zero, 0x1
        ctx->r18 = ADD32(0, 0X1);
            goto L_0041ED24;
    }
    // 0x0041ED10: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
    // 0x0041ED14: jal         0x0041DA28
    // 0x0041ED18: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_0041DA28(rdram, ctx);
        goto after_2;
    // 0x0041ED18: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_2:
    // 0x0041ED1C: j           L_0041EDC8
    // 0x0041ED20: nop

        goto L_0041EDC8;
    // 0x0041ED20: nop

L_0041ED24:
    // 0x0041ED24: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0041ED28: sw          $s2, 0x9BC($at)
    MEM_W(0X9BC, ctx->r1) = ctx->r18;
    // 0x0041ED2C: jal         0x00426594
    // 0x0041ED30: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00426594(rdram, ctx);
        goto after_3;
    // 0x0041ED30: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x0041ED34: beq         $v0, $zero, L_0041ED60
    if (ctx->r2 == 0) {
        // 0x0041ED38: nop
    
            goto L_0041ED60;
    }
    // 0x0041ED38: nop

    // 0x0041ED3C: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x0041ED40: addiu       $a0, $a0, -0x61D4
    ctx->r4 = ADD32(ctx->r4, -0X61D4);
    // 0x0041ED44: sw          $s2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r18;
    // 0x0041ED48: lw          $a2, 0x1C($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X1C);
    // 0x0041ED4C: lw          $a3, 0x20($s1)
    ctx->r7 = MEM_W(ctx->r17, 0X20);
    // 0x0041ED50: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x0041ED54: addiu       $a1, $a1, -0x4394
    ctx->r5 = ADD32(ctx->r5, -0X4394);
    // 0x0041ED58: j           L_0041EDC0
    // 0x0041ED5C: nop

        goto L_0041EDC0;
    // 0x0041ED5C: nop

L_0041ED60:
    // 0x0041ED60: jal         0x00426BD8
    // 0x0041ED64: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00426BD8(rdram, ctx);
        goto after_4;
    // 0x0041ED64: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
    // 0x0041ED68: beq         $v0, $zero, L_0041ED9C
    if (ctx->r2 == 0) {
        // 0x0041ED6C: nop
    
            goto L_0041ED9C;
    }
    // 0x0041ED6C: nop

    // 0x0041ED70: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x0041ED74: addiu       $a0, $a0, -0x61D4
    ctx->r4 = ADD32(ctx->r4, -0X61D4);
    // 0x0041ED78: lui         $v0, 0x44
    ctx->r2 = S32(0X44 << 16);
    // 0x0041ED7C: addiu       $v0, $v0, -0x4910
    ctx->r2 = ADD32(ctx->r2, -0X4910);
    // 0x0041ED80: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x0041ED84: lw          $a2, 0x1C($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X1C);
    // 0x0041ED88: lw          $a3, 0x20($s1)
    ctx->r7 = MEM_W(ctx->r17, 0X20);
    // 0x0041ED8C: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x0041ED90: addiu       $a1, $a1, -0x3FA4
    ctx->r5 = ADD32(ctx->r5, -0X3FA4);
    // 0x0041ED94: j           L_0041EDC0
    // 0x0041ED98: nop

        goto L_0041EDC0;
    // 0x0041ED98: nop

L_0041ED9C:
    // 0x0041ED9C: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x0041EDA0: addiu       $a0, $a0, -0x61D4
    ctx->r4 = ADD32(ctx->r4, -0X61D4);
    // 0x0041EDA4: lui         $v0, 0x44
    ctx->r2 = S32(0X44 << 16);
    // 0x0041EDA8: addiu       $v0, $v0, -0x6E70
    ctx->r2 = ADD32(ctx->r2, -0X6E70);
    // 0x0041EDAC: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x0041EDB0: lw          $a2, 0x1C($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X1C);
    // 0x0041EDB4: lw          $a3, 0x20($s1)
    ctx->r7 = MEM_W(ctx->r17, 0X20);
    // 0x0041EDB8: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x0041EDBC: addiu       $a1, $a1, -0x4400
    ctx->r5 = ADD32(ctx->r5, -0X4400);
L_0041EDC0:
    // 0x0041EDC0: jal         0x00416644
    // 0x0041EDC4: nop

    func_00416644(rdram, ctx);
        goto after_5;
    // 0x0041EDC4: nop

    after_5:
L_0041EDC8:
    // 0x0041EDC8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x0041EDCC: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x0041EDD0: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x0041EDD4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x0041EDD8: jr          $ra
    // 0x0041EDDC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x0041EDDC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_00408B20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00408B20: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00408B24: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00408B28: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x00408B2C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x00408B30: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x00408B34: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00408B38: sw          $s1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r17;
    // 0x00408B3C: lw          $v0, 0x14($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X14);
    // 0x00408B40: addiu       $v0, $v0, 0x14
    ctx->r2 = ADD32(ctx->r2, 0X14);
    // 0x00408B44: sw          $v0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r2;
    // 0x00408B48: lw          $v0, 0x14($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X14);
    // 0x00408B4C: lw          $v1, 0x54($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X54);
    // 0x00408B50: addiu       $a1, $zero, 0x5334
    ctx->r5 = ADD32(0, 0X5334);
    // 0x00408B54: sw          $zero, 0x8($a0)
    MEM_W(0X8, ctx->r4) = 0;
    // 0x00408B58: sw          $zero, 0x10($a0)
    MEM_W(0X10, ctx->r4) = 0;
    // 0x00408B5C: sll         $v0, $v1, 4
    ctx->r2 = S32(ctx->r3 << 4);
    // 0x00408B60: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x00408B64: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x00408B68: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00408B6C: lui         $v0, 0x41
    ctx->r2 = S32(0X41 << 16);
    // 0x00408B70: addiu       $v0, $v0, -0x7620
    ctx->r2 = ADD32(ctx->r2, -0X7620);
    // 0x00408B74: swc1        $f0, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->f0.u32l;
    // 0x00408B78: sw          $v0, 0x234($s1)
    MEM_W(0X234, ctx->r17) = ctx->r2;
    // 0x00408B7C: lw          $s0, 0x0($a0)
    ctx->r16 = MEM_W(ctx->r4, 0X0);
    // 0x00408B80: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x00408B84: sw          $zero, 0x14($a0)
    MEM_W(0X14, ctx->r4) = 0;
    // 0x00408B88: jal         0x00219F74
    // 0x00408B8C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00219F74(rdram, ctx);
        goto after_0;
    // 0x00408B8C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x00408B90: lui         $s2, 0x8011
    ctx->r18 = S32(0X8011 << 16);
    // 0x00408B94: addiu       $s2, $s2, 0xF0
    ctx->r18 = ADD32(ctx->r18, 0XF0);
    // 0x00408B98: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x00408B9C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x00408BA0: lui         $a2, 0x800C
    ctx->r6 = S32(0X800C << 16);
    // 0x00408BA4: addiu       $a2, $a2, 0x560
    ctx->r6 = ADD32(ctx->r6, 0X560);
    // 0x00408BA8: addiu       $a3, $s0, 0x140
    ctx->r7 = ADD32(ctx->r16, 0X140);
    // 0x00408BAC: sb          $v0, 0xC6($a3)
    MEM_B(0XC6, ctx->r7) = ctx->r2;
    // 0x00408BB0: addiu       $v0, $zero, 0x5334
    ctx->r2 = ADD32(0, 0X5334);
    // 0x00408BB4: sh          $v0, 0xC4($a3)
    MEM_H(0XC4, ctx->r7) = ctx->r2;
    // 0x00408BB8: lw          $v0, 0x140($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X140);
    // 0x00408BBC: addiu       $v1, $zero, -0x2
    ctx->r3 = ADD32(0, -0X2);
    // 0x00408BC0: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x00408BC4: sw          $v0, 0x140($s0)
    MEM_W(0X140, ctx->r16) = ctx->r2;
    // 0x00408BC8: jal         0x0027AD24
    // 0x00408BCC: sb          $zero, 0xC7($a3)
    MEM_B(0XC7, ctx->r7) = 0;
    func_0027AD24(rdram, ctx);
        goto after_1;
    // 0x00408BCC: sb          $zero, 0xC7($a3)
    MEM_B(0XC7, ctx->r7) = 0;
    after_1:
    // 0x00408BD0: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x00408BD4: lui         $a2, 0x800C
    ctx->r6 = S32(0X800C << 16);
    // 0x00408BD8: addiu       $a2, $a2, 0x568
    ctx->r6 = ADD32(ctx->r6, 0X568);
    // 0x00408BDC: jal         0x0027AD54
    // 0x00408BE0: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_0027AD54(rdram, ctx);
        goto after_2;
    // 0x00408BE0: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_2:
    // 0x00408BE4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x00408BE8: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x00408BEC: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00408BF0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00408BF4: jr          $ra
    // 0x00408BF8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00408BF8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_0020E810(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0020E810: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x0020E814: sw          $s0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r16;
    // 0x0020E818: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x0020E81C: sw          $ra, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r31;
    // 0x0020E820: sw          $s1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r17;
    // 0x0020E824: sdc1        $f21, 0x68($sp)
    CHECK_FR(ctx, 21);
    SD(ctx->f21.u64, 0X68, ctx->r29);
    // 0x0020E828: sdc1        $f20, 0x60($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X60, ctx->r29);
    // 0x0020E82C: lwc1        $f12, 0x0($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X0);
    // 0x0020E830: mul.s       $f12, $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x0020E834: lwc1        $f1, 0x4($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X4);
    // 0x0020E838: mul.s       $f1, $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f1.fl);
    // 0x0020E83C: lwc1        $f0, 0x8($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X8);
    // 0x0020E840: mul.s       $f0, $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x0020E844: add.s       $f12, $f12, $f1
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f1.fl;
    // 0x0020E848: add.s       $f12, $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f0.fl;
    // 0x0020E84C: jal         0x00298470
    // 0x0020E850: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    func_00298470(rdram, ctx);
        goto after_0;
    // 0x0020E850: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    after_0:
    // 0x0020E854: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x0020E858: mov.s       $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    ctx->f1.fl = ctx->f0.fl;
    // 0x0020E85C: c.eq.s      $f1, $f4
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f1.fl == ctx->f4.fl;
    // 0x0020E860: nop

    // 0x0020E864: bc1f        L_0020E884
    if (!c1cs) {
        // 0x0020E868: nop
    
            goto L_0020E884;
    }
    // 0x0020E868: nop

    // 0x0020E86C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0020E870: lwc1        $f0, 0x5544($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X5544);
    // 0x0020E874: swc1        $f4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f4.u32l;
    // 0x0020E878: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    // 0x0020E87C: j           L_0020EA5C
    // 0x0020E880: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
        goto L_0020EA5C;
    // 0x0020E880: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
L_0020E884:
    // 0x0020E884: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0020E888: lwc1        $f2, 0x5548($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X5548);
    // 0x0020E88C: lwc1        $f0, 0x0($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X0);
    // 0x0020E890: div.s       $f1, $f2, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = DIV_S(ctx->f2.fl, ctx->f1.fl);
    // 0x0020E894: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0020E898: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    // 0x0020E89C: lwc1        $f0, 0x4($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X4);
    // 0x0020E8A0: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0020E8A4: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x0020E8A8: lwc1        $f0, 0x8($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X8);
    // 0x0020E8AC: mul.s       $f3, $f0, $f1
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f3.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0020E8B0: swc1        $f4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f4.u32l;
    // 0x0020E8B4: swc1        $f4, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f4.u32l;
    // 0x0020E8B8: swc1        $f2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f2.u32l;
    // 0x0020E8BC: c.lt.s      $f3, $f4
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f3.fl < ctx->f4.fl;
    // 0x0020E8C0: nop

    // 0x0020E8C4: bc1f        L_0020E8F0
    if (!c1cs) {
        // 0x0020E8C8: swc1        $f3, 0x28($sp)
        MEM_W(0X28, ctx->r29) = ctx->f_odd[(3 - 1) * 2];
            goto L_0020E8F0;
    }
    // 0x0020E8C8: swc1        $f3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f_odd[(3 - 1) * 2];
    // 0x0020E8CC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0020E8D0: lwc1        $f1, 0x554C($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X554C);
    // 0x0020E8D4: neg.s       $f0, $f3
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f3.fl); 
    ctx->f0.fl = -ctx->f3.fl;
    // 0x0020E8D8: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x0020E8DC: nop

    // 0x0020E8E0: bc1f        L_0020E934
    if (!c1cs) {
        // 0x0020E8E4: nop
    
            goto L_0020E934;
    }
    // 0x0020E8E4: nop

    // 0x0020E8E8: j           L_0020E908
    // 0x0020E8EC: nop

        goto L_0020E908;
    // 0x0020E8EC: nop

L_0020E8F0:
    // 0x0020E8F0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0020E8F4: lwc1        $f0, 0x5550($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X5550);
    // 0x0020E8F8: c.lt.s      $f0, $f3
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    c1cs = ctx->f0.fl < ctx->f3.fl;
    // 0x0020E8FC: nop

    // 0x0020E900: bc1f        L_0020E934
    if (!c1cs) {
        // 0x0020E904: nop
    
            goto L_0020E934;
    }
    // 0x0020E904: nop

L_0020E908:
    // 0x0020E908: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x0020E90C: jal         0x002982F0
    // 0x0020E910: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    func_002982F0(rdram, ctx);
        goto after_1;
    // 0x0020E910: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    after_1:
    // 0x0020E914: lwc1        $f1, 0x28($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X28);
    // 0x0020E918: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x0020E91C: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    // 0x0020E920: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x0020E924: swc1        $f0, -0x2874($at)
    MEM_W(-0X2874, ctx->r1) = ctx->f0.u32l;
    // 0x0020E928: swc1        $f12, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f12.u32l;
    // 0x0020E92C: j           L_0020EA54
    // 0x0020E930: swc1        $f12, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f12.u32l;
        goto L_0020EA54;
    // 0x0020E930: swc1        $f12, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f12.u32l;
L_0020E934:
    // 0x0020E934: lwc1        $f2, 0x20($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X20);
    // 0x0020E938: lwc1        $f0, 0x30($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X30);
    // 0x0020E93C: mul.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x0020E940: lwc1        $f1, 0x24($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X24);
    // 0x0020E944: lwc1        $f0, 0x34($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X34);
    // 0x0020E948: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x0020E94C: lwc1        $f12, 0x28($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X28);
    // 0x0020E950: lwc1        $f0, 0x38($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X38);
    // 0x0020E954: mul.s       $f12, $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = MUL_S(ctx->f12.fl, ctx->f0.fl);
    // 0x0020E958: add.s       $f2, $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f1.fl;
    // 0x0020E95C: jal         0x0021153C
    // 0x0020E960: add.s       $f12, $f2, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = ctx->f2.fl + ctx->f12.fl;
    func_0021153C(rdram, ctx);
        goto after_2;
    // 0x0020E960: add.s       $f12, $f2, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = ctx->f2.fl + ctx->f12.fl;
    after_2:
    // 0x0020E964: lwc1        $f5, 0x34($sp)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r29, 0X34);
    // 0x0020E968: lwc1        $f3, 0x28($sp)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r29, 0X28);
    // 0x0020E96C: mul.s       $f4, $f5, $f3
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f5.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f4.fl = MUL_S(ctx->f5.fl, ctx->f3.fl);
    // 0x0020E970: lwc1        $f2, 0x38($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X38);
    // 0x0020E974: lwc1        $f7, 0x24($sp)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r29, 0X24);
    // 0x0020E978: mul.s       $f8, $f2, $f7
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 7);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f7.fl); 
    ctx->f8.fl = MUL_S(ctx->f2.fl, ctx->f7.fl);
    // 0x0020E97C: lwc1        $f6, 0x20($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X20);
    // 0x0020E980: mul.s       $f2, $f2, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f6.fl);
    // 0x0020E984: lwc1        $f1, 0x30($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X30);
    // 0x0020E988: mul.s       $f3, $f1, $f3
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f3.fl = MUL_S(ctx->f1.fl, ctx->f3.fl);
    // 0x0020E98C: nop

    // 0x0020E990: mul.s       $f1, $f1, $f7
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 7);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f7.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f7.fl);
    // 0x0020E994: nop

    // 0x0020E998: mul.s       $f5, $f5, $f6
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f5.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f5.fl = MUL_S(ctx->f5.fl, ctx->f6.fl);
    // 0x0020E99C: sub.s       $f4, $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f4.fl - ctx->f8.fl;
    // 0x0020E9A0: mul.s       $f12, $f4, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = MUL_S(ctx->f4.fl, ctx->f4.fl);
    // 0x0020E9A4: sub.s       $f2, $f2, $f3
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f2.fl = ctx->f2.fl - ctx->f3.fl;
    // 0x0020E9A8: mul.s       $f3, $f2, $f2
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f3.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x0020E9AC: sub.s       $f1, $f1, $f5
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 5);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f5.fl); 
    ctx->f1.fl = ctx->f1.fl - ctx->f5.fl;
    // 0x0020E9B0: mul.s       $f5, $f1, $f1
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f5.fl = MUL_S(ctx->f1.fl, ctx->f1.fl);
    // 0x0020E9B4: add.s       $f12, $f12, $f3
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f3.fl;
    // 0x0020E9B8: mov.s       $f21, $f0
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 0);
    ctx->f21.fl = ctx->f0.fl;
    // 0x0020E9BC: swc1        $f4, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f4.u32l;
    // 0x0020E9C0: add.s       $f12, $f12, $f5
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 5);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f5.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f5.fl;
    // 0x0020E9C4: swc1        $f2, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f2.u32l;
    // 0x0020E9C8: jal         0x00298470
    // 0x0020E9CC: swc1        $f1, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    func_00298470(rdram, ctx);
        goto after_3;
    // 0x0020E9CC: swc1        $f1, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    after_3:
    // 0x0020E9D0: mtc1        $zero, $f1
    ctx->f_odd[(1 - 1) * 2] = 0;
    // 0x0020E9D4: c.eq.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl == ctx->f1.fl;
    // 0x0020E9D8: nop

    // 0x0020E9DC: bc1t        L_0020EA14
    if (c1cs) {
        // 0x0020E9E0: nop
    
            goto L_0020EA14;
    }
    // 0x0020E9E0: nop

    // 0x0020E9E4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0020E9E8: lwc1        $f1, 0x5554($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X5554);
    // 0x0020E9EC: lwc1        $f3, 0x40($sp)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r29, 0X40);
    // 0x0020E9F0: div.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = DIV_S(ctx->f1.fl, ctx->f0.fl);
    // 0x0020E9F4: mul.s       $f3, $f3, $f1
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f3.fl = MUL_S(ctx->f3.fl, ctx->f1.fl);
    // 0x0020E9F8: lwc1        $f2, 0x44($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X44);
    // 0x0020E9FC: mul.s       $f2, $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f1.fl);
    // 0x0020EA00: lwc1        $f0, 0x48($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X48);
    // 0x0020EA04: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0020EA08: swc1        $f3, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f_odd[(3 - 1) * 2];
    // 0x0020EA0C: swc1        $f2, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f2.u32l;
    // 0x0020EA10: swc1        $f0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f0.u32l;
L_0020EA14:
    // 0x0020EA14: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0020EA18: lwc1        $f20, 0x5558($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X5558);
    // 0x0020EA1C: mul.s       $f20, $f21, $f20
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f21.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f20.fl = MUL_S(ctx->f21.fl, ctx->f20.fl);
    // 0x0020EA20: jal         0x002982F0
    // 0x0020EA24: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    func_002982F0(rdram, ctx);
        goto after_4;
    // 0x0020EA24: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    after_4:
    // 0x0020EA28: lwc1        $f3, 0x40($sp)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r29, 0X40);
    // 0x0020EA2C: mul.s       $f3, $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f3.fl = MUL_S(ctx->f3.fl, ctx->f0.fl);
    // 0x0020EA30: lwc1        $f2, 0x44($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X44);
    // 0x0020EA34: mul.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x0020EA38: lwc1        $f1, 0x48($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X48);
    // 0x0020EA3C: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x0020EA40: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    // 0x0020EA44: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x0020EA48: swc1        $f0, -0x2874($at)
    MEM_W(-0X2874, ctx->r1) = ctx->f0.u32l;
    // 0x0020EA4C: swc1        $f3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(3 - 1) * 2];
    // 0x0020EA50: swc1        $f2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f2.u32l;
L_0020EA54:
    // 0x0020EA54: jal         0x002974C0
    // 0x0020EA58: swc1        $f1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    func_002974C0(rdram, ctx);
        goto after_5;
    // 0x0020EA58: swc1        $f1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    after_5:
L_0020EA5C:
    // 0x0020EA5C: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x0020EA60: addu        $v0, $s1, $zero
    ctx->r2 = ADD32(ctx->r17, 0);
    // 0x0020EA64: lw          $v1, 0x10($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X10);
    // 0x0020EA68: lw          $a2, 0x14($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X14);
    // 0x0020EA6C: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x0020EA70: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x0020EA74: sw          $v1, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r3;
    // 0x0020EA78: sw          $a2, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->r6;
    // 0x0020EA7C: sw          $a3, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->r7;
    // 0x0020EA80: sw          $t0, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->r8;
    // 0x0020EA84: lw          $ra, 0x58($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X58);
    // 0x0020EA88: lw          $s1, 0x54($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X54);
    // 0x0020EA8C: lw          $s0, 0x50($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X50);
    // 0x0020EA90: ldc1        $f21, 0x68($sp)
    CHECK_FR(ctx, 21);
    ctx->f21.u64 = LD(ctx->r29, 0X68);
    // 0x0020EA94: ldc1        $f20, 0x60($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X60);
    // 0x0020EA98: jr          $ra
    // 0x0020EA9C: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    return;
    // 0x0020EA9C: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
;}
RECOMP_FUNC void func_0024C0B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0024C0B4: addiu       $sp, $sp, -0xB8
    ctx->r29 = ADD32(ctx->r29, -0XB8);
    // 0x0024C0B8: sw          $s0, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->r16;
    // 0x0024C0BC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x0024C0C0: sw          $s2, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->r18;
    // 0x0024C0C4: addu        $s2, $a1, $zero
    ctx->r18 = ADD32(ctx->r5, 0);
    // 0x0024C0C8: sw          $s1, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->r17;
    // 0x0024C0CC: addu        $s1, $a2, $zero
    ctx->r17 = ADD32(ctx->r6, 0);
    // 0x0024C0D0: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x0024C0D4: addu        $a1, $a3, $zero
    ctx->r5 = ADD32(ctx->r7, 0);
    // 0x0024C0D8: addiu       $t0, $sp, 0x18
    ctx->r8 = ADD32(ctx->r29, 0X18);
    // 0x0024C0DC: lui         $v0, 0x8011
    ctx->r2 = S32(0X8011 << 16);
    // 0x0024C0E0: lw          $v0, 0x5C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X5C);
    // 0x0024C0E4: lui         $v1, 0x8011
    ctx->r3 = S32(0X8011 << 16);
    // 0x0024C0E8: lw          $v1, 0x58($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X58);
    // 0x0024C0EC: addu        $a2, $a3, $zero
    ctx->r6 = ADD32(ctx->r7, 0);
    // 0x0024C0F0: sw          $ra, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->r31;
    // 0x0024C0F4: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x0024C0F8: addiu       $t1, $v0, 0x1
    ctx->r9 = ADD32(ctx->r2, 0X1);
L_0024C0FC:
    // 0x0024C0FC: addu        $v0, $s1, $a1
    ctx->r2 = ADD32(ctx->r17, ctx->r5);
    // 0x0024C100: lb          $v0, 0x972($v0)
    ctx->r2 = MEM_B(ctx->r2, 0X972);
    // 0x0024C104: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0024C108: addu        $at, $at, $a2
    ctx->r1 = ADD32(ctx->r1, ctx->r6);
    // 0x0024C10C: lw          $v1, -0x9E8($at)
    ctx->r3 = MEM_W(ctx->r1, -0X9E8);
    // 0x0024C110: beql        $v0, $zero, L_0024C168
    if (ctx->r2 == 0) {
        // 0x0024C114: addu        $v1, $zero, $zero
        ctx->r3 = ADD32(0, 0);
            goto L_0024C168;
    }
    goto skip_0;
    // 0x0024C114: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
    skip_0:
    // 0x0024C118: lw          $v0, 0x3C8($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X3C8);
    // 0x0024C11C: andi        $v0, $v0, 0x80
    ctx->r2 = ctx->r2 & 0X80;
    // 0x0024C120: beq         $v0, $zero, L_0024C134
    if (ctx->r2 == 0) {
        // 0x0024C124: nop
    
            goto L_0024C134;
    }
    // 0x0024C124: nop

    // 0x0024C128: lw          $v0, 0x14($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X14);
    // 0x0024C12C: j           L_0024C13C
    // 0x0024C130: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
        goto L_0024C13C;
    // 0x0024C130: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
L_0024C134:
    // 0x0024C134: lw          $v0, 0x14($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X14);
    // 0x0024C138: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
L_0024C13C:
    // 0x0024C13C: bne         $v0, $zero, L_0024C14C
    if (ctx->r2 != 0) {
        // 0x0024C140: nop
    
            goto L_0024C14C;
    }
    // 0x0024C140: nop

    // 0x0024C144: j           L_0024C168
    // 0x0024C148: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
        goto L_0024C168;
    // 0x0024C148: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
L_0024C14C:
    // 0x0024C14C: lh          $a0, 0xC($v1)
    ctx->r4 = MEM_H(ctx->r3, 0XC);
    // 0x0024C150: addu        $v0, $s1, $a0
    ctx->r2 = ADD32(ctx->r17, ctx->r4);
    // 0x0024C154: lb          $v0, 0x972($v0)
    ctx->r2 = MEM_B(ctx->r2, 0X972);
    // 0x0024C158: beq         $v0, $zero, L_0024C168
    if (ctx->r2 == 0) {
        // 0x0024C15C: addiu       $v1, $zero, 0x1
        ctx->r3 = ADD32(0, 0X1);
            goto L_0024C168;
    }
    // 0x0024C15C: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x0024C160: slt         $v0, $a1, $a0
    ctx->r2 = SIGNED(ctx->r5) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x0024C164: xor         $v1, $v0, $v1
    ctx->r3 = ctx->r2 ^ ctx->r3;
L_0024C168:
    // 0x0024C168: beq         $v1, $zero, L_0024C174
    if (ctx->r3 == 0) {
        // 0x0024C16C: sw          $v1, 0x0($t0)
        MEM_W(0X0, ctx->r8) = ctx->r3;
            goto L_0024C174;
    }
    // 0x0024C16C: sw          $v1, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r3;
    // 0x0024C170: addiu       $a3, $a3, 0x1
    ctx->r7 = ADD32(ctx->r7, 0X1);
L_0024C174:
    // 0x0024C174: addiu       $t0, $t0, 0x4
    ctx->r8 = ADD32(ctx->r8, 0X4);
    // 0x0024C178: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x0024C17C: slti        $v0, $a1, 0x23
    ctx->r2 = SIGNED(ctx->r5) < 0X23 ? 1 : 0;
    // 0x0024C180: bne         $v0, $zero, L_0024C0FC
    if (ctx->r2 != 0) {
        // 0x0024C184: addiu       $a2, $a2, 0x4
        ctx->r6 = ADD32(ctx->r6, 0X4);
            goto L_0024C0FC;
    }
    // 0x0024C184: addiu       $a2, $a2, 0x4
    ctx->r6 = ADD32(ctx->r6, 0X4);
    // 0x0024C188: div         $zero, $t1, $a3
    lo = S32(S64(S32(ctx->r9)) / S64(S32(ctx->r7))); hi = S32(S64(S32(ctx->r9)) % S64(S32(ctx->r7)));
    // 0x0024C18C: bne         $a3, $zero, L_0024C198
    if (ctx->r7 != 0) {
        // 0x0024C190: nop
    
            goto L_0024C198;
    }
    // 0x0024C190: nop

    // 0x0024C194: break       7
    do_break(2408852);
L_0024C198:
    // 0x0024C198: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x0024C19C: bne         $a3, $at, L_0024C1B0
    if (ctx->r7 != ctx->r1) {
        // 0x0024C1A0: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_0024C1B0;
    }
    // 0x0024C1A0: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x0024C1A4: bne         $t1, $at, L_0024C1B0
    if (ctx->r9 != ctx->r1) {
        // 0x0024C1A8: nop
    
            goto L_0024C1B0;
    }
    // 0x0024C1A8: nop

    // 0x0024C1AC: break       6
    do_break(2408876);
L_0024C1B0:
    // 0x0024C1B0: mflo        $a1
    ctx->r5 = lo;
    // 0x0024C1B4: slti        $v0, $a1, 0x2
    ctx->r2 = SIGNED(ctx->r5) < 0X2 ? 1 : 0;
    // 0x0024C1B8: beq         $v0, $zero, L_0024C1F4
    if (ctx->r2 == 0) {
        // 0x0024C1BC: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_0024C1F4;
    }
    // 0x0024C1BC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0024C1C0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0024C1C4: lwc1        $f0, 0x6C64($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6C64);
    // 0x0024C1C8: mtc1        $t1, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r9;
    // 0x0024C1CC: cvt.s.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.fl = CVT_S_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x0024C1D0: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x0024C1D4: mtc1        $a3, $f0
    ctx->f0.u32l = ctx->r7;
    // 0x0024C1D8: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x0024C1DC: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x0024C1E0: nop

    // 0x0024C1E4: bc1f        L_0024C1F4
    if (!c1cs) {
        // 0x0024C1E8: addiu       $a1, $zero, 0x1
        ctx->r5 = ADD32(0, 0X1);
            goto L_0024C1F4;
    }
    // 0x0024C1E8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x0024C1EC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x0024C1F0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_0024C1F4:
    // 0x0024C1F4: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    // 0x0024C1F8: jal         0x0024BF1C
    // 0x0024C1FC: sw          $s1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r17;
    func_0024BF1C(rdram, ctx);
        goto after_0;
    // 0x0024C1FC: sw          $s1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r17;
    after_0:
    // 0x0024C200: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0024C204: lwc1        $f0, 0x6C68($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6C68);
    // 0x0024C208: lw          $v1, 0x0($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X0);
    // 0x0024C20C: beq         $v1, $zero, L_0024C220
    if (ctx->r3 == 0) {
        // 0x0024C210: swc1        $f0, 0x4($s0)
        MEM_W(0X4, ctx->r16) = ctx->f0.u32l;
            goto L_0024C220;
    }
    // 0x0024C210: swc1        $f0, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f0.u32l;
    // 0x0024C214: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x0024C218: bne         $v1, $v0, L_0024C228
    if (ctx->r3 != ctx->r2) {
        // 0x0024C21C: nop
    
            goto L_0024C228;
    }
    // 0x0024C21C: nop

L_0024C220:
    // 0x0024C220: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0024C224: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
L_0024C228:
    // 0x0024C228: lw          $a0, 0x37C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X37C);
    // 0x0024C22C: negu        $v0, $s2
    ctx->r2 = SUB32(0, ctx->r18);
    // 0x0024C230: sw          $v0, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r2;
    // 0x0024C234: j           L_0024C268
    // 0x0024C238: sw          $zero, 0x14($s0)
    MEM_W(0X14, ctx->r16) = 0;
        goto L_0024C268;
    // 0x0024C238: sw          $zero, 0x14($s0)
    MEM_W(0X14, ctx->r16) = 0;
L_0024C23C:
    // 0x0024C23C: bgez        $v1, L_0024C254
    if (SIGNED(ctx->r3) >= 0) {
        // 0x0024C240: sw          $v1, 0x37C($s0)
        MEM_W(0X37C, ctx->r16) = ctx->r3;
            goto L_0024C254;
    }
    // 0x0024C240: sw          $v1, 0x37C($s0)
    MEM_W(0X37C, ctx->r16) = ctx->r3;
    // 0x0024C244: lw          $v0, 0x18($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X18);
    // 0x0024C248: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x0024C24C: j           L_0024C264
    // 0x0024C250: sw          $v0, 0x37C($s0)
    MEM_W(0X37C, ctx->r16) = ctx->r2;
        goto L_0024C264;
    // 0x0024C250: sw          $v0, 0x37C($s0)
    MEM_W(0X37C, ctx->r16) = ctx->r2;
L_0024C254:
    // 0x0024C254: lw          $v0, 0x18($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X18);
    // 0x0024C258: slt         $v0, $v1, $v0
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x0024C25C: beql        $v0, $zero, L_0024C264
    if (ctx->r2 == 0) {
        // 0x0024C260: sw          $zero, 0x37C($s0)
        MEM_W(0X37C, ctx->r16) = 0;
            goto L_0024C264;
    }
    goto skip_1;
    // 0x0024C260: sw          $zero, 0x37C($s0)
    MEM_W(0X37C, ctx->r16) = 0;
    skip_1:
L_0024C264:
    // 0x0024C264: lw          $a0, 0x37C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X37C);
L_0024C268:
    // 0x0024C268: lh          $v1, 0xB14($s1)
    ctx->r3 = MEM_H(ctx->r17, 0XB14);
    // 0x0024C26C: sll         $v0, $a0, 1
    ctx->r2 = S32(ctx->r4 << 1);
    // 0x0024C270: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x0024C274: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x0024C278: addu        $v0, $s0, $v0
    ctx->r2 = ADD32(ctx->r16, ctx->r2);
    // 0x0024C27C: lw          $v0, 0x1C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1C);
    // 0x0024C280: bnel        $v0, $v1, L_0024C23C
    if (ctx->r2 != ctx->r3) {
        // 0x0024C284: addu        $v1, $a0, $s2
        ctx->r3 = ADD32(ctx->r4, ctx->r18);
            goto L_0024C23C;
    }
    goto skip_2;
    // 0x0024C284: addu        $v1, $a0, $s2
    ctx->r3 = ADD32(ctx->r4, ctx->r18);
    skip_2:
    // 0x0024C288: lw          $ra, 0xB4($sp)
    ctx->r31 = MEM_W(ctx->r29, 0XB4);
    // 0x0024C28C: lw          $s2, 0xB0($sp)
    ctx->r18 = MEM_W(ctx->r29, 0XB0);
    // 0x0024C290: lw          $s1, 0xAC($sp)
    ctx->r17 = MEM_W(ctx->r29, 0XAC);
    // 0x0024C294: lw          $s0, 0xA8($sp)
    ctx->r16 = MEM_W(ctx->r29, 0XA8);
    // 0x0024C298: jr          $ra
    // 0x0024C29C: addiu       $sp, $sp, 0xB8
    ctx->r29 = ADD32(ctx->r29, 0XB8);
    return;
    // 0x0024C29C: addiu       $sp, $sp, 0xB8
    ctx->r29 = ADD32(ctx->r29, 0XB8);
;}
RECOMP_FUNC void func_00273EB8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00273EB8: jr          $ra
    // 0x00273EBC: sw          $a1, 0xA8($a0)
    MEM_W(0XA8, ctx->r4) = ctx->r5;
    return;
    // 0x00273EBC: sw          $a1, 0xA8($a0)
    MEM_W(0XA8, ctx->r4) = ctx->r5;
;}
RECOMP_FUNC void func_0041B920(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041B920: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    // 0x0041B924: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0041B928: addiu       $v0, $v0, 0x5AA0
    ctx->r2 = ADD32(ctx->r2, 0X5AA0);
    // 0x0041B92C: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    // 0x0041B930: jr          $ra
    // 0x0041B934: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x0041B934: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void func_0041B180(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041B180: jr          $ra
    // 0x0041B184: addiu       $v0, $zero, 0xBB8
    ctx->r2 = ADD32(0, 0XBB8);
    return;
    // 0x0041B184: addiu       $v0, $zero, 0xBB8
    ctx->r2 = ADD32(0, 0XBB8);
;}
RECOMP_FUNC void func_002685D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002685D4: lbu         $v1, 0x0($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X0);
    // 0x002685D8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x002685DC: bne         $v1, $v0, L_002685E8
    if (ctx->r3 != ctx->r2) {
        // 0x002685E0: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_002685E8;
    }
    // 0x002685E0: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x002685E4: lw          $v0, 0x30($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X30);
L_002685E8:
    // 0x002685E8: jr          $ra
    // 0x002685EC: nop

    return;
    // 0x002685EC: nop

;}
RECOMP_FUNC void func_0027AFAC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0027AFAC: addu        $t5, $a0, $zero
    ctx->r13 = ADD32(ctx->r4, 0);
    // 0x0027AFB0: addu        $t6, $a1, $zero
    ctx->r14 = ADD32(ctx->r5, 0);
    // 0x0027AFB4: lui         $t2, 0xFA00
    ctx->r10 = S32(0XFA00 << 16);
    // 0x0027AFB8: ori         $t2, $t2, 0xFFFF
    ctx->r10 = ctx->r10 | 0XFFFF;
    // 0x0027AFBC: lui         $t0, 0x800E
    ctx->r8 = S32(0X800E << 16);
    // 0x0027AFC0: addiu       $t0, $t0, -0x71DC
    ctx->r8 = ADD32(ctx->r8, -0X71DC);
    // 0x0027AFC4: addu        $t4, $a2, $zero
    ctx->r12 = ADD32(ctx->r6, 0);
    // 0x0027AFC8: lui         $v0, 0xE700
    ctx->r2 = S32(0XE700 << 16);
    // 0x0027AFCC: lw          $t3, 0x0($t0)
    ctx->r11 = MEM_W(ctx->r8, 0X0);
    // 0x0027AFD0: lbu         $v1, 0x13($sp)
    ctx->r3 = MEM_BU(ctx->r29, 0X13);
    // 0x0027AFD4: lbu         $a0, 0x17($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X17);
    // 0x0027AFD8: lbu         $a1, 0x1B($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X1B);
    // 0x0027AFDC: lbu         $a2, 0x1F($sp)
    ctx->r6 = MEM_BU(ctx->r29, 0X1F);
    // 0x0027AFE0: addu        $t1, $t3, $zero
    ctx->r9 = ADD32(ctx->r11, 0);
    // 0x0027AFE4: addiu       $t3, $t3, 0x8
    ctx->r11 = ADD32(ctx->r11, 0X8);
    // 0x0027AFE8: sw          $t3, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r11;
    // 0x0027AFEC: sw          $v0, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r2;
    // 0x0027AFF0: sw          $zero, 0x4($t1)
    MEM_W(0X4, ctx->r9) = 0;
    // 0x0027AFF4: addiu       $t1, $t3, 0x8
    ctx->r9 = ADD32(ctx->r11, 0X8);
    // 0x0027AFF8: sll         $v1, $v1, 24
    ctx->r3 = S32(ctx->r3 << 24);
    // 0x0027AFFC: andi        $a0, $a0, 0xFF
    ctx->r4 = ctx->r4 & 0XFF;
    // 0x0027B000: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x0027B004: or          $v1, $v1, $a0
    ctx->r3 = ctx->r3 | ctx->r4;
    // 0x0027B008: andi        $a1, $a1, 0xFF
    ctx->r5 = ctx->r5 & 0XFF;
    // 0x0027B00C: sll         $a1, $a1, 8
    ctx->r5 = S32(ctx->r5 << 8);
    // 0x0027B010: or          $v1, $v1, $a1
    ctx->r3 = ctx->r3 | ctx->r5;
    // 0x0027B014: andi        $a2, $a2, 0xFF
    ctx->r6 = ctx->r6 & 0XFF;
    // 0x0027B018: or          $v1, $v1, $a2
    ctx->r3 = ctx->r3 | ctx->r6;
    // 0x0027B01C: addiu       $v0, $t3, 0x10
    ctx->r2 = ADD32(ctx->r11, 0X10);
    // 0x0027B020: sw          $t1, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r9;
    // 0x0027B024: sw          $t2, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r10;
    // 0x0027B028: sw          $v1, 0x4($t3)
    MEM_W(0X4, ctx->r11) = ctx->r3;
    // 0x0027B02C: bgez        $t4, L_0027B038
    if (SIGNED(ctx->r12) >= 0) {
        // 0x0027B030: sw          $v0, 0x0($t0)
        MEM_W(0X0, ctx->r8) = ctx->r2;
            goto L_0027B038;
    }
    // 0x0027B030: sw          $v0, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r2;
    // 0x0027B034: addu        $t4, $zero, $zero
    ctx->r12 = ADD32(0, 0);
L_0027B038:
    // 0x0027B038: andi        $v0, $t4, 0x3FF
    ctx->r2 = ctx->r12 & 0X3FF;
    // 0x0027B03C: bgez        $a3, L_0027B048
    if (SIGNED(ctx->r7) >= 0) {
        // 0x0027B040: sll         $a0, $v0, 14
        ctx->r4 = S32(ctx->r2 << 14);
            goto L_0027B048;
    }
    // 0x0027B040: sll         $a0, $v0, 14
    ctx->r4 = S32(ctx->r2 << 14);
    // 0x0027B044: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
L_0027B048:
    // 0x0027B048: andi        $v0, $a3, 0x3FF
    ctx->r2 = ctx->r7 & 0X3FF;
    // 0x0027B04C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x0027B050: lui         $v1, 0xF600
    ctx->r3 = S32(0XF600 << 16);
    // 0x0027B054: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x0027B058: or          $v0, $a0, $v0
    ctx->r2 = ctx->r4 | ctx->r2;
    // 0x0027B05C: addu        $a0, $t5, $zero
    ctx->r4 = ADD32(ctx->r13, 0);
    // 0x0027B060: bgez        $a0, L_0027B06C
    if (SIGNED(ctx->r4) >= 0) {
        // 0x0027B064: sw          $v0, 0x8($t3)
        MEM_W(0X8, ctx->r11) = ctx->r2;
            goto L_0027B06C;
    }
    // 0x0027B064: sw          $v0, 0x8($t3)
    MEM_W(0X8, ctx->r11) = ctx->r2;
    // 0x0027B068: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
L_0027B06C:
    // 0x0027B06C: addu        $a1, $t6, $zero
    ctx->r5 = ADD32(ctx->r14, 0);
    // 0x0027B070: andi        $v0, $a0, 0x3FF
    ctx->r2 = ctx->r4 & 0X3FF;
    // 0x0027B074: bgez        $a1, L_0027B080
    if (SIGNED(ctx->r5) >= 0) {
        // 0x0027B078: sll         $v1, $v0, 14
        ctx->r3 = S32(ctx->r2 << 14);
            goto L_0027B080;
    }
    // 0x0027B078: sll         $v1, $v0, 14
    ctx->r3 = S32(ctx->r2 << 14);
    // 0x0027B07C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
L_0027B080:
    // 0x0027B080: andi        $v0, $a1, 0x3FF
    ctx->r2 = ctx->r5 & 0X3FF;
    // 0x0027B084: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x0027B088: or          $v0, $v1, $v0
    ctx->r2 = ctx->r3 | ctx->r2;
    // 0x0027B08C: jr          $ra
    // 0x0027B090: sw          $v0, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r2;
    return;
    // 0x0027B090: sw          $v0, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r2;
;}
RECOMP_FUNC void func_0041ACD0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041ACD0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x0041ACD4: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x0041ACD8: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x0041ACDC: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x0041ACE0: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x0041ACE4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x0041ACE8: jal         0x0029E4C0
    // 0x0041ACEC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    func_0029E4C0(rdram, ctx);
        goto after_0;
    // 0x0041ACEC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_0:
    // 0x0041ACF0: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x0041ACF4: addiu       $a0, $a0, 0x1F8C
    ctx->r4 = ADD32(ctx->r4, 0X1F8C);
    // 0x0041ACF8: jal         0x0029E4C0
    // 0x0041ACFC: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    func_0029E4C0(rdram, ctx);
        goto after_1;
    // 0x0041ACFC: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    after_1:
    // 0x0041AD00: beq         $s0, $v0, L_0041AD10
    if (ctx->r16 == ctx->r2) {
        // 0x0041AD04: nop
    
            goto L_0041AD10;
    }
    // 0x0041AD04: nop

L_0041AD08:
    // 0x0041AD08: j           L_0041AD4C
    // 0x0041AD0C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
        goto L_0041AD4C;
    // 0x0041AD0C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_0041AD10:
    // 0x0041AD10: jal         0x0029E4C0
    // 0x0041AD14: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_0029E4C0(rdram, ctx);
        goto after_2;
    // 0x0041AD14: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_2:
    // 0x0041AD18: slt         $v0, $s1, $v0
    ctx->r2 = SIGNED(ctx->r17) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x0041AD1C: beq         $v0, $zero, L_0041AD48
    if (ctx->r2 == 0) {
        // 0x0041AD20: addu        $v0, $s2, $s1
        ctx->r2 = ADD32(ctx->r18, ctx->r17);
            goto L_0041AD48;
    }
    // 0x0041AD20: addu        $v0, $s2, $s1
    ctx->r2 = ADD32(ctx->r18, ctx->r17);
    // 0x0041AD24: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x0041AD28: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0041AD2C: addu        $at, $at, $s1
    ctx->r1 = ADD32(ctx->r1, ctx->r17);
    // 0x0041AD30: lbu         $v1, 0x1F8C($at)
    ctx->r3 = MEM_BU(ctx->r1, 0X1F8C);
    // 0x0041AD34: xor         $v0, $v0, $s1
    ctx->r2 = ctx->r2 ^ ctx->r17;
    // 0x0041AD38: bne         $v0, $v1, L_0041AD08
    if (ctx->r2 != ctx->r3) {
        // 0x0041AD3C: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_0041AD08;
    }
    // 0x0041AD3C: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x0041AD40: j           L_0041AD10
    // 0x0041AD44: nop

        goto L_0041AD10;
    // 0x0041AD44: nop

L_0041AD48:
    // 0x0041AD48: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_0041AD4C:
    // 0x0041AD4C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x0041AD50: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x0041AD54: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x0041AD58: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0041AD5C: jr          $ra
    // 0x0041AD60: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x0041AD60: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_0023F05C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0023F05C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x0023F060: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0023F064: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x0023F068: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x0023F06C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x0023F070: lhu         $v1, 0x16C($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X16C);
    // 0x0023F074: andi        $v0, $v1, 0x8
    ctx->r2 = ctx->r3 & 0X8;
    // 0x0023F078: beq         $v0, $zero, L_0023F098
    if (ctx->r2 == 0) {
        // 0x0023F07C: addu        $s1, $a0, $zero
        ctx->r17 = ADD32(ctx->r4, 0);
            goto L_0023F098;
    }
    // 0x0023F07C: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x0023F080: lw          $v0, 0x1A0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X1A0);
    // 0x0023F084: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x0023F088: beq         $v0, $zero, L_0023F10C
    if (ctx->r2 == 0) {
        // 0x0023F08C: nop
    
            goto L_0023F10C;
    }
    // 0x0023F08C: nop

    // 0x0023F090: j           L_0023F0A4
    // 0x0023F094: nop

        goto L_0023F0A4;
    // 0x0023F094: nop

L_0023F098:
    // 0x0023F098: andi        $v0, $v1, 0x1
    ctx->r2 = ctx->r3 & 0X1;
    // 0x0023F09C: bne         $v0, $zero, L_0023F10C
    if (ctx->r2 != 0) {
        // 0x0023F0A0: nop
    
            goto L_0023F10C;
    }
    // 0x0023F0A0: nop

L_0023F0A4:
    // 0x0023F0A4: jal         0x00268C04
    // 0x0023F0A8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00268C04(rdram, ctx);
        goto after_0;
    // 0x0023F0A8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x0023F0AC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0023F0B0: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x0023F0B4: jal         0x0023E820
    // 0x0023F0B8: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    func_0023E820(rdram, ctx);
        goto after_1;
    // 0x0023F0B8: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    after_1:
    // 0x0023F0BC: beq         $v0, $zero, L_0023F10C
    if (ctx->r2 == 0) {
        // 0x0023F0C0: nop
    
            goto L_0023F10C;
    }
    // 0x0023F0C0: nop

    // 0x0023F0C4: lhu         $v0, 0x16C($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X16C);
    // 0x0023F0C8: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x0023F0CC: sh          $v0, 0x16C($s0)
    MEM_H(0X16C, ctx->r16) = ctx->r2;
    // 0x0023F0D0: andi        $v0, $v0, 0x8
    ctx->r2 = ctx->r2 & 0X8;
    // 0x0023F0D4: beq         $v0, $zero, L_0023F0EC
    if (ctx->r2 == 0) {
        // 0x0023F0D8: addu        $a1, $s0, $zero
        ctx->r5 = ADD32(ctx->r16, 0);
            goto L_0023F0EC;
    }
    // 0x0023F0D8: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x0023F0DC: jal         0x00227780
    // 0x0023F0E0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00227780(rdram, ctx);
        goto after_2;
    // 0x0023F0E0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x0023F0E4: j           L_0023F10C
    // 0x0023F0E8: nop

        goto L_0023F10C;
    // 0x0023F0E8: nop

L_0023F0EC:
    // 0x0023F0EC: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x0023F0F0: addiu       $a0, $a0, 0x7078
    ctx->r4 = ADD32(ctx->r4, 0X7078);
    // 0x0023F0F4: jal         0x002247E4
    // 0x0023F0F8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_002247E4(rdram, ctx);
        goto after_3;
    // 0x0023F0F8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_3:
    // 0x0023F0FC: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    // 0x0023F100: addiu       $a1, $zero, 0x400
    ctx->r5 = ADD32(0, 0X400);
    // 0x0023F104: jal         0x0026E19C
    // 0x0023F108: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    func_0026E19C(rdram, ctx);
        goto after_4;
    // 0x0023F108: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    after_4:
L_0023F10C:
    // 0x0023F10C: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x0023F110: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x0023F114: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0023F118: jr          $ra
    // 0x0023F11C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x0023F11C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_0023CC30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0023CC30: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x0023CC34: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x0023CC38: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x0023CC3C: addu        $v0, $a1, $zero
    ctx->r2 = ADD32(ctx->r5, 0);
    // 0x0023CC40: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x0023CC44: sw          $s2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r18;
    // 0x0023CC48: addiu       $s2, $s0, 0xC
    ctx->r18 = ADD32(ctx->r16, 0XC);
    // 0x0023CC4C: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x0023CC50: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    // 0x0023CC54: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x0023CC58: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x0023CC5C: lw          $v1, 0x24($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X24);
    // 0x0023CC60: lw          $a3, 0x28($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X28);
    // 0x0023CC64: lw          $t0, 0x2C($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X2C);
    // 0x0023CC68: sw          $v1, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r3;
    // 0x0023CC6C: sw          $a3, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r7;
    // 0x0023CC70: sw          $t0, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r8;
    // 0x0023CC74: lw          $v1, 0x18($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X18);
    // 0x0023CC78: lw          $a3, 0x1C($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X1C);
    // 0x0023CC7C: lw          $t0, 0x20($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X20);
    // 0x0023CC80: sw          $v1, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r3;
    // 0x0023CC84: sw          $a3, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r7;
    // 0x0023CC88: sw          $t0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r8;
    // 0x0023CC8C: lw          $v1, 0x48($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X48);
    // 0x0023CC90: lw          $a3, 0x4C($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X4C);
    // 0x0023CC94: lw          $t0, 0x50($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X50);
    // 0x0023CC98: sw          $v1, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->r3;
    // 0x0023CC9C: sw          $a3, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r7;
    // 0x0023CCA0: sw          $t0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r8;
    // 0x0023CCA4: lw          $v1, 0x54($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X54);
    // 0x0023CCA8: lw          $a3, 0x58($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X58);
    // 0x0023CCAC: lw          $t0, 0x5C($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X5C);
    // 0x0023CCB0: sw          $v1, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r3;
    // 0x0023CCB4: sw          $a3, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->r7;
    // 0x0023CCB8: sw          $t0, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->r8;
    // 0x0023CCBC: jal         0x0020EF2C
    // 0x0023CCC0: addiu       $s1, $s0, 0x18
    ctx->r17 = ADD32(ctx->r16, 0X18);
    func_0020EF2C(rdram, ctx);
        goto after_0;
    // 0x0023CCC0: addiu       $s1, $s0, 0x18
    ctx->r17 = ADD32(ctx->r16, 0X18);
    after_0:
    // 0x0023CCC4: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    // 0x0023CCC8: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x0023CCCC: jal         0x0020EF2C
    // 0x0023CCD0: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    func_0020EF2C(rdram, ctx);
        goto after_1;
    // 0x0023CCD0: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    after_1:
    // 0x0023CCD4: addiu       $a0, $s0, 0x30
    ctx->r4 = ADD32(ctx->r16, 0X30);
    // 0x0023CCD8: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x0023CCDC: jal         0x0020EFDC
    // 0x0023CCE0: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    func_0020EFDC(rdram, ctx);
        goto after_2;
    // 0x0023CCE0: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    after_2:
    // 0x0023CCE4: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x0023CCE8: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x0023CCEC: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x0023CCF0: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x0023CCF4: jr          $ra
    // 0x0023CCF8: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x0023CCF8: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_00451BA0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
;}
RECOMP_FUNC void func_00287248(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00287248: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x0028724C: sw          $fp, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r30;
    // 0x00287250: addu        $fp, $a0, $zero
    ctx->r30 = ADD32(ctx->r4, 0);
    // 0x00287254: sw          $ra, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r31;
    // 0x00287258: sw          $s7, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r23;
    // 0x0028725C: sw          $s6, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r22;
    // 0x00287260: sw          $s5, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r21;
    // 0x00287264: sw          $s4, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r20;
    // 0x00287268: sw          $s3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r19;
    // 0x0028726C: sw          $s2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r18;
    // 0x00287270: sw          $s1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r17;
    // 0x00287274: jal         0x0029B170
    // 0x00287278: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    func_0029B170(rdram, ctx);
        goto after_0;
    // 0x00287278: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    after_0:
    // 0x0028727C: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x00287280: lw          $a1, 0x6D1C($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X6D1C);
    // 0x00287284: lui         $a2, 0x800F
    ctx->r6 = S32(0X800F << 16);
    // 0x00287288: lw          $a2, 0x7070($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X7070);
    // 0x0028728C: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x00287290: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    // 0x00287294: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x00287298: sw          $a2, -0xEC0($at)
    MEM_W(-0XEC0, ctx->r1) = ctx->r6;
    // 0x0028729C: jal         0x0020548C
    // 0x002872A0: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_0020548C(rdram, ctx);
        goto after_1;
    // 0x002872A0: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_1:
    // 0x002872A4: jal         0x00207A54
    // 0x002872A8: nop

    entry_00207A54(rdram, ctx);
        goto after_2;
    // 0x002872A8: nop

    after_2:
    // 0x002872AC: jal         0x0020B554
    // 0x002872B0: nop

    func_0020B554(rdram, ctx);
        goto after_3;
    // 0x002872B0: nop

    after_3:
    // 0x002872B4: jal         0x00286A04
    // 0x002872B8: addu        $a0, $fp, $zero
    ctx->r4 = ADD32(ctx->r30, 0);
    func_00286A04(rdram, ctx);
        goto after_4;
    // 0x002872B8: addu        $a0, $fp, $zero
    ctx->r4 = ADD32(ctx->r30, 0);
    after_4:
    // 0x002872BC: jal         0x002288D0
    // 0x002872C0: nop

    func_002288D0(rdram, ctx);
        goto after_5;
    // 0x002872C0: nop

    after_5:
    // 0x002872C4: jal         0x00284CE0
    // 0x002872C8: nop

    func_00284CE0(rdram, ctx);
        goto after_6;
    // 0x002872C8: nop

    after_6:
    // 0x002872CC: lui         $a0, 0x2
    ctx->r4 = S32(0X2 << 16);
    // 0x002872D0: ori         $a0, $a0, 0x2C00
    ctx->r4 = ctx->r4 | 0X2C00;
    // 0x002872D4: jal         0x0027ECF0
    // 0x002872D8: addu        $a0, $fp, $a0
    ctx->r4 = ADD32(ctx->r30, ctx->r4);
    func_0027ECF0(rdram, ctx);
        goto after_7;
    // 0x002872D8: addu        $a0, $fp, $a0
    ctx->r4 = ADD32(ctx->r30, ctx->r4);
    after_7:
    // 0x002872DC: jal         0x002886AC
    // 0x002872E0: addu        $a0, $fp, $zero
    ctx->r4 = ADD32(ctx->r30, 0);
    func_002886AC(rdram, ctx);
        goto after_8;
    // 0x002872E0: addu        $a0, $fp, $zero
    ctx->r4 = ADD32(ctx->r30, 0);
    after_8:
    // 0x002872E4: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x002872E8: addu        $at, $fp, $at
    ctx->r1 = ADD32(ctx->r30, ctx->r1);
    // 0x002872EC: lw          $v1, 0x3FD8($at)
    ctx->r3 = MEM_W(ctx->r1, 0X3FD8);
    // 0x002872F0: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x002872F4: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x002872F8: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x002872FC: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00287300: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x00287304: lw          $v0, 0x6D80($at)
    ctx->r2 = MEM_W(ctx->r1, 0X6D80);
    // 0x00287308: beq         $v0, $zero, L_00287318
    if (ctx->r2 == 0) {
        // 0x0028730C: nop
    
            goto L_00287318;
    }
    // 0x0028730C: nop

    // 0x00287310: jalr        $v0
    // 0x00287314: addu        $a0, $fp, $zero
    ctx->r4 = ADD32(ctx->r30, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_9;
    // 0x00287314: addu        $a0, $fp, $zero
    ctx->r4 = ADD32(ctx->r30, 0);
    after_9:
L_00287318:
    // 0x00287318: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x0028731C: lw          $v0, -0xEC0($v0)
    ctx->r2 = MEM_W(ctx->r2, -0XEC0);
    // 0x00287320: lw          $v0, 0x128($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X128);
    // 0x00287324: bne         $v0, $zero, L_002873C8
    if (ctx->r2 != 0) {
        // 0x00287328: nop
    
            goto L_002873C8;
    }
    // 0x00287328: nop

    // 0x0028732C: sb          $zero, 0x18($sp)
    MEM_B(0X18, ctx->r29) = 0;
    // 0x00287330: sb          $zero, 0x19($sp)
    MEM_B(0X19, ctx->r29) = 0;
    // 0x00287334: sb          $zero, 0x1A($sp)
    MEM_B(0X1A, ctx->r29) = 0;
    // 0x00287338: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x0028733C: addu        $at, $fp, $at
    ctx->r1 = ADD32(ctx->r30, ctx->r1);
    // 0x00287340: lwc1        $f1, 0x3FE4($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X3FE4);
    // 0x00287344: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x00287348: c.lt.s      $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f1.fl < ctx->f2.fl;
    // 0x0028734C: nop

    // 0x00287350: bc1t        L_00287398
    if (c1cs) {
        // 0x00287354: addiu       $t0, $zero, 0xFF
        ctx->r8 = ADD32(0, 0XFF);
            goto L_00287398;
    }
    // 0x00287354: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x00287358: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0028735C: lwc1        $f0, -0x6278($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X6278);
    // 0x00287360: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x00287364: nop

    // 0x00287368: bc1t        L_00287398
    if (c1cs) {
        // 0x0028736C: addu        $t0, $zero, $zero
        ctx->r8 = ADD32(0, 0);
            goto L_00287398;
    }
    // 0x0028736C: addu        $t0, $zero, $zero
    ctx->r8 = ADD32(0, 0);
    // 0x00287370: c.lt.s      $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f1.fl < ctx->f2.fl;
    // 0x00287374: nop

    // 0x00287378: bc1t        L_00287398
    if (c1cs) {
        // 0x0028737C: addiu       $t0, $zero, 0xFF
        ctx->r8 = ADD32(0, 0XFF);
            goto L_00287398;
    }
    // 0x0028737C: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x00287380: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00287384: lwc1        $f0, -0x6274($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X6274);
    // 0x00287388: mul.s       $f0, $f1, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x0028738C: trunc.w.s   $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x00287390: mfc1        $v0, $f4
    ctx->r2 = (int32_t)ctx->f4.u32l;
    // 0x00287394: nor         $t0, $zero, $v0
    ctx->r8 = ~(0 | ctx->r2);
L_00287398:
    // 0x00287398: addu        $a0, $fp, $zero
    ctx->r4 = ADD32(ctx->r30, 0);
    // 0x0028739C: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    // 0x002873A0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x002873A4: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x002873A8: lw          $v0, 0x2030($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2030);
    // 0x002873AC: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x002873B0: lw          $v1, 0x2034($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X2034);
    // 0x002873B4: addu        $a3, $a2, $zero
    ctx->r7 = ADD32(ctx->r6, 0);
    // 0x002873B8: sb          $t0, 0x1B($sp)
    MEM_B(0X1B, ctx->r29) = ctx->r8;
    // 0x002873BC: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x002873C0: jal         0x002883E0
    // 0x002873C4: sw          $v1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r3;
    func_002883E0(rdram, ctx);
        goto after_10;
    // 0x002873C4: sw          $v1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r3;
    after_10:
L_002873C8:
    // 0x002873C8: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x002873CC: lw          $v1, 0x2040($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X2040);
    // 0x002873D0: beq         $v1, $zero, L_002875FC
    if (ctx->r3 == 0) {
        // 0x002873D4: addiu       $v0, $zero, 0x14
        ctx->r2 = ADD32(0, 0X14);
            goto L_002875FC;
    }
    // 0x002873D4: addiu       $v0, $zero, 0x14
    ctx->r2 = ADD32(0, 0X14);
    // 0x002873D8: bne         $v1, $v0, L_002873EC
    if (ctx->r3 != ctx->r2) {
        // 0x002873DC: addiu       $a0, $zero, 0x14
        ctx->r4 = ADD32(0, 0X14);
            goto L_002873EC;
    }
    // 0x002873DC: addiu       $a0, $zero, 0x14
    ctx->r4 = ADD32(0, 0X14);
    // 0x002873E0: jal         0x004242EC
    // 0x002873E4: nop

    func_004242EC(rdram, ctx);
        goto after_11;
    // 0x002873E4: nop

    after_11:
    // 0x002873E8: addiu       $a0, $zero, 0x14
    ctx->r4 = ADD32(0, 0X14);
L_002873EC:
    // 0x002873EC: lui         $v0, 0x800E
    ctx->r2 = S32(0X800E << 16);
    // 0x002873F0: lw          $v0, -0x71DC($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X71DC);
    // 0x002873F4: lui         $s0, 0xE700
    ctx->r16 = S32(0XE700 << 16);
    // 0x002873F8: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x002873FC: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x00287400: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x00287404: sw          $v0, -0x71DC($at)
    MEM_W(-0X71DC, ctx->r1) = ctx->r2;
    // 0x00287408: sw          $s0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r16;
    // 0x0028740C: jal         0x00207FEC
    // 0x00287410: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    func_00207FEC(rdram, ctx);
        goto after_12;
    // 0x00287410: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    after_12:
    // 0x00287414: lui         $t4, 0xE300
    ctx->r12 = S32(0XE300 << 16);
    // 0x00287418: ori         $t4, $t4, 0xA01
    ctx->r12 = ctx->r12 | 0XA01;
    // 0x0028741C: lui         $s3, 0xFFFC
    ctx->r19 = S32(0XFFFC << 16);
    // 0x00287420: ori         $s3, $s3, 0xFFFC
    ctx->r19 = ctx->r19 | 0XFFFC;
    // 0x00287424: lui         $s4, 0xF678
    ctx->r20 = S32(0XF678 << 16);
    // 0x00287428: ori         $s4, $s4, 0x5A0
    ctx->r20 = ctx->r20 | 0X5A0;
    // 0x0028742C: lui         $s5, 0x77
    ctx->r21 = S32(0X77 << 16);
    // 0x00287430: ori         $s5, $s5, 0xC59C
    ctx->r21 = ctx->r21 | 0XC59C;
    // 0x00287434: lui         $s6, 0xFF10
    ctx->r22 = S32(0XFF10 << 16);
    // 0x00287438: ori         $s6, $s6, 0x1DF
    ctx->r22 = ctx->r22 | 0X1DF;
    // 0x0028743C: lui         $s7, 0xFCFF
    ctx->r23 = S32(0XFCFF << 16);
    // 0x00287440: ori         $s7, $s7, 0xFFFF
    ctx->r23 = ctx->r23 | 0XFFFF;
    // 0x00287444: lui         $t8, 0xFFFE
    ctx->r24 = S32(0XFFFE << 16);
    // 0x00287448: ori         $t8, $t8, 0x793C
    ctx->r24 = ctx->r24 | 0X793C;
    // 0x0028744C: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x00287450: lui         $s6, 0xE200
    ctx->r22 = S32(0XE200 << 16);
    // 0x00287454: ori         $s6, $s6, 0x1C
    ctx->r22 = ctx->r22 | 0X1C;
    // 0x00287458: lui         $t9, 0x1
    ctx->r25 = S32(0X1 << 16);
    // 0x0028745C: lui         $a3, 0x800E
    ctx->r7 = S32(0X800E << 16);
    // 0x00287460: addiu       $a3, $a3, -0x71DC
    ctx->r7 = ADD32(ctx->r7, -0X71DC);
    // 0x00287464: lui         $a1, 0xFF10
    ctx->r5 = S32(0XFF10 << 16);
    // 0x00287468: lui         $v1, 0x800E
    ctx->r3 = S32(0X800E << 16);
    // 0x0028746C: lw          $v1, -0x71DC($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X71DC);
    // 0x00287470: lui         $a2, 0x8013
    ctx->r6 = S32(0X8013 << 16);
    // 0x00287474: lw          $a2, 0xA78($a2)
    ctx->r6 = MEM_W(ctx->r6, 0XA78);
    // 0x00287478: lui         $s1, 0x30
    ctx->r17 = S32(0X30 << 16);
    // 0x0028747C: sw          $s7, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r23;
    // 0x00287480: sw          $s6, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r22;
    // 0x00287484: addu        $t0, $v1, $zero
    ctx->r8 = ADD32(ctx->r3, 0);
    // 0x00287488: addiu       $v1, $v1, 0x8
    ctx->r3 = ADD32(ctx->r3, 0X8);
    // 0x0028748C: addiu       $t1, $v1, 0x8
    ctx->r9 = ADD32(ctx->r3, 0X8);
    // 0x00287490: addiu       $t2, $v1, 0x10
    ctx->r10 = ADD32(ctx->r3, 0X10);
    // 0x00287494: addiu       $t3, $v1, 0x18
    ctx->r11 = ADD32(ctx->r3, 0X18);
    // 0x00287498: addiu       $t5, $v1, 0x20
    ctx->r13 = ADD32(ctx->r3, 0X20);
    // 0x0028749C: addiu       $t6, $v1, 0x28
    ctx->r14 = ADD32(ctx->r3, 0X28);
    // 0x002874A0: addiu       $t7, $v1, 0x30
    ctx->r15 = ADD32(ctx->r3, 0X30);
    // 0x002874A4: addiu       $v0, $v1, 0x38
    ctx->r2 = ADD32(ctx->r3, 0X38);
    // 0x002874A8: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x002874AC: sw          $v1, -0x71DC($at)
    MEM_W(-0X71DC, ctx->r1) = ctx->r3;
    // 0x002874B0: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x002874B4: sw          $t1, -0x71DC($at)
    MEM_W(-0X71DC, ctx->r1) = ctx->r9;
    // 0x002874B8: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x002874BC: sw          $t2, -0x71DC($at)
    MEM_W(-0X71DC, ctx->r1) = ctx->r10;
    // 0x002874C0: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x002874C4: sw          $t3, -0x71DC($at)
    MEM_W(-0X71DC, ctx->r1) = ctx->r11;
    // 0x002874C8: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x002874CC: sw          $t5, -0x71DC($at)
    MEM_W(-0X71DC, ctx->r1) = ctx->r13;
    // 0x002874D0: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x002874D4: sw          $t6, -0x71DC($at)
    MEM_W(-0X71DC, ctx->r1) = ctx->r14;
    // 0x002874D8: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x002874DC: sw          $t7, -0x71DC($at)
    MEM_W(-0X71DC, ctx->r1) = ctx->r15;
    // 0x002874E0: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x002874E4: sw          $v0, -0x71DC($at)
    MEM_W(-0X71DC, ctx->r1) = ctx->r2;
    // 0x002874E8: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x002874EC: lw          $v0, 0x2030($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2030);
    // 0x002874F0: lw          $a0, 0x0($a3)
    ctx->r4 = MEM_W(ctx->r7, 0X0);
    // 0x002874F4: lui         $s2, 0xF700
    ctx->r18 = S32(0XF700 << 16);
    // 0x002874F8: sw          $a2, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r6;
    // 0x002874FC: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x00287500: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x00287504: or          $v0, $v0, $a1
    ctx->r2 = ctx->r2 | ctx->r5;
    // 0x00287508: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x0028750C: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x00287510: sw          $v0, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r2;
    // 0x00287514: sw          $s0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r16;
    // 0x00287518: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x0028751C: sw          $t4, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r12;
    // 0x00287520: sw          $s1, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r17;
    // 0x00287524: sw          $s2, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->r18;
    // 0x00287528: sw          $s3, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->r19;
    // 0x0028752C: sw          $s4, 0x18($v1)
    MEM_W(0X18, ctx->r3) = ctx->r20;
    // 0x00287530: sw          $zero, 0x4($t3)
    MEM_W(0X4, ctx->r11) = 0;
    // 0x00287534: addiu       $t3, $a0, 0x8
    ctx->r11 = ADD32(ctx->r4, 0X8);
    // 0x00287538: sw          $v0, 0x20($v1)
    MEM_W(0X20, ctx->r3) = ctx->r2;
    // 0x0028753C: lui         $v0, 0x800F
    ctx->r2 = S32(0X800F << 16);
    // 0x00287540: lw          $v0, 0x7070($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X7070);
    // 0x00287544: addiu       $t0, $a0, 0x10
    ctx->r8 = ADD32(ctx->r4, 0X10);
    // 0x00287548: lw          $v0, 0x110($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X110);
    // 0x0028754C: addiu       $t1, $a0, 0x18
    ctx->r9 = ADD32(ctx->r4, 0X18);
    // 0x00287550: sw          $a0, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r4;
    // 0x00287554: sw          $v0, 0x4($t5)
    MEM_W(0X4, ctx->r13) = ctx->r2;
    // 0x00287558: lui         $v0, 0x10
    ctx->r2 = S32(0X10 << 16);
    // 0x0028755C: sw          $s0, 0x28($v1)
    MEM_W(0X28, ctx->r3) = ctx->r16;
    // 0x00287560: sw          $zero, 0x4($t6)
    MEM_W(0X4, ctx->r14) = 0;
    // 0x00287564: sw          $t4, 0x30($v1)
    MEM_W(0X30, ctx->r3) = ctx->r12;
    // 0x00287568: sw          $v0, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->r2;
    // 0x0028756C: lui         $v0, 0xED00
    ctx->r2 = S32(0XED00 << 16);
    // 0x00287570: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
    // 0x00287574: sw          $s5, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r21;
    // 0x00287578: sw          $t3, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r11;
    // 0x0028757C: lw          $s7, 0x30($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X30);
    // 0x00287580: addiu       $t2, $a0, 0x20
    ctx->r10 = ADD32(ctx->r4, 0X20);
    // 0x00287584: sw          $s7, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r23;
    // 0x00287588: sw          $t0, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r8;
    // 0x0028758C: sw          $t1, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r9;
    // 0x00287590: sw          $t2, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r10;
    // 0x00287594: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x00287598: lw          $v0, -0xEC0($v0)
    ctx->r2 = MEM_W(ctx->r2, -0XEC0);
    // 0x0028759C: addiu       $a2, $a0, 0x28
    ctx->r6 = ADD32(ctx->r4, 0X28);
    // 0x002875A0: sw          $a2, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r6;
    // 0x002875A4: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x002875A8: lw          $v1, 0x2040($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X2040);
    // 0x002875AC: lw          $a1, 0x110($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X110);
    // 0x002875B0: addiu       $v0, $a0, 0x30
    ctx->r2 = ADD32(ctx->r4, 0X30);
    // 0x002875B4: sw          $v0, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r2;
    // 0x002875B8: sw          $t4, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r12;
    // 0x002875BC: sw          $a1, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r5;
    // 0x002875C0: sw          $s1, 0x4($t3)
    MEM_W(0X4, ctx->r11) = ctx->r17;
    // 0x002875C4: lw          $s6, 0x28($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X28);
    // 0x002875C8: ori         $t9, $t9, 0x1
    ctx->r25 = ctx->r25 | 0X1;
    // 0x002875CC: sw          $s6, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->r22;
    // 0x002875D0: sw          $t8, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r24;
    // 0x002875D4: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x002875D8: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x002875DC: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x002875E0: sw          $v1, 0x2040($at)
    MEM_W(0X2040, ctx->r1) = ctx->r3;
    // 0x002875E4: sw          $s7, 0x18($a0)
    MEM_W(0X18, ctx->r4) = ctx->r23;
    // 0x002875E8: sw          $zero, 0x4($t1)
    MEM_W(0X4, ctx->r9) = 0;
    // 0x002875EC: sw          $s2, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->r18;
    // 0x002875F0: sw          $t9, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->r25;
    // 0x002875F4: sw          $s4, 0x28($a0)
    MEM_W(0X28, ctx->r4) = ctx->r20;
    // 0x002875F8: sw          $zero, 0x4($a2)
    MEM_W(0X4, ctx->r6) = 0;
L_002875FC:
    // 0x002875FC: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x00287600: addiu       $a0, $a0, -0x71DC
    ctx->r4 = ADD32(ctx->r4, -0X71DC);
    // 0x00287604: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x00287608: lui         $v1, 0xE900
    ctx->r3 = S32(0XE900 << 16);
    // 0x0028760C: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x00287610: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x00287614: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
    // 0x00287618: sw          $v1, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r3;
    // 0x0028761C: addiu       $v1, $v0, 0x8
    ctx->r3 = ADD32(ctx->r2, 0X8);
    // 0x00287620: sw          $zero, 0x4($a1)
    MEM_W(0X4, ctx->r5) = 0;
    // 0x00287624: sw          $v1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r3;
    // 0x00287628: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x0028762C: lw          $a0, -0xEC0($a0)
    ctx->r4 = MEM_W(ctx->r4, -0XEC0);
    // 0x00287630: lui         $v1, 0xDF00
    ctx->r3 = S32(0XDF00 << 16);
    // 0x00287634: sw          $v1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r3;
    // 0x00287638: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x0028763C: lui         $v0, 0x800E
    ctx->r2 = S32(0X800E << 16);
    // 0x00287640: lw          $v0, -0x71DC($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X71DC);
    // 0x00287644: lw          $v1, 0x114($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X114);
    // 0x00287648: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x0028764C: sw          $v0, 0x11C($a0)
    MEM_W(0X11C, ctx->r4) = ctx->r2;
    // 0x00287650: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x00287654: addu        $at, $fp, $at
    ctx->r1 = ADD32(ctx->r30, ctx->r1);
    // 0x00287658: lw          $v1, 0x3FD8($at)
    ctx->r3 = MEM_W(ctx->r1, 0X3FD8);
    // 0x0028765C: addiu       $v0, $zero, 0xD
    ctx->r2 = ADD32(0, 0XD);
    // 0x00287660: bnel        $v1, $v0, L_00287684
    if (ctx->r3 != ctx->r2) {
        // 0x00287664: sw          $zero, 0x128($a0)
        MEM_W(0X128, ctx->r4) = 0;
            goto L_00287684;
    }
    goto skip_0;
    // 0x00287664: sw          $zero, 0x128($a0)
    MEM_W(0X128, ctx->r4) = 0;
    skip_0:
    // 0x00287668: lui         $a0, 0x2
    ctx->r4 = S32(0X2 << 16);
    // 0x0028766C: ori         $a0, $a0, 0x3DF0
    ctx->r4 = ctx->r4 | 0X3DF0;
    // 0x00287670: jal         0x00401C1C
    // 0x00287674: addu        $a0, $fp, $a0
    ctx->r4 = ADD32(ctx->r30, ctx->r4);
    func_00401C1C(rdram, ctx);
        goto after_13;
    // 0x00287674: addu        $a0, $fp, $a0
    ctx->r4 = ADD32(ctx->r30, ctx->r4);
    after_13:
    // 0x00287678: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x0028767C: lw          $v1, -0xEC0($v1)
    ctx->r3 = MEM_W(ctx->r3, -0XEC0);
    // 0x00287680: sw          $v0, 0x128($v1)
    MEM_W(0X128, ctx->r3) = ctx->r2;
L_00287684:
    // 0x00287684: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x00287688: lw          $v0, -0xEC0($v0)
    ctx->r2 = MEM_W(ctx->r2, -0XEC0);
    // 0x0028768C: lw          $v0, 0x128($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X128);
    // 0x00287690: beq         $v0, $zero, L_002877A8
    if (ctx->r2 == 0) {
        // 0x00287694: lui         $a0, 0x2
        ctx->r4 = S32(0X2 << 16);
            goto L_002877A8;
    }
    // 0x00287694: lui         $a0, 0x2
    ctx->r4 = S32(0X2 << 16);
    // 0x00287698: lui         $v0, 0x800F
    ctx->r2 = S32(0X800F << 16);
    // 0x0028769C: lw          $v0, 0x7070($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X7070);
    // 0x002876A0: ori         $a0, $a0, 0x3DF0
    ctx->r4 = ctx->r4 | 0X3DF0;
    // 0x002876A4: lw          $v0, 0x118($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X118);
    // 0x002876A8: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x002876AC: sw          $v0, -0x71DC($at)
    MEM_W(-0X71DC, ctx->r1) = ctx->r2;
    // 0x002876B0: jal         0x004004D8
    // 0x002876B4: addu        $a0, $fp, $a0
    ctx->r4 = ADD32(ctx->r30, ctx->r4);
    func_004004D8(rdram, ctx);
        goto after_14;
    // 0x002876B4: addu        $a0, $fp, $a0
    ctx->r4 = ADD32(ctx->r30, ctx->r4);
    after_14:
    // 0x002876B8: sb          $zero, 0x18($sp)
    MEM_B(0X18, ctx->r29) = 0;
    // 0x002876BC: sb          $zero, 0x19($sp)
    MEM_B(0X19, ctx->r29) = 0;
    // 0x002876C0: sb          $zero, 0x1A($sp)
    MEM_B(0X1A, ctx->r29) = 0;
    // 0x002876C4: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x002876C8: addu        $at, $fp, $at
    ctx->r1 = ADD32(ctx->r30, ctx->r1);
    // 0x002876CC: lwc1        $f1, 0x3FE4($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X3FE4);
    // 0x002876D0: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x002876D4: c.lt.s      $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f1.fl < ctx->f2.fl;
    // 0x002876D8: nop

    // 0x002876DC: bc1t        L_00287724
    if (c1cs) {
        // 0x002876E0: addiu       $t0, $zero, 0xFF
        ctx->r8 = ADD32(0, 0XFF);
            goto L_00287724;
    }
    // 0x002876E0: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x002876E4: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x002876E8: lwc1        $f0, -0x6270($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X6270);
    // 0x002876EC: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x002876F0: nop

    // 0x002876F4: bc1t        L_00287724
    if (c1cs) {
        // 0x002876F8: addu        $t0, $zero, $zero
        ctx->r8 = ADD32(0, 0);
            goto L_00287724;
    }
    // 0x002876F8: addu        $t0, $zero, $zero
    ctx->r8 = ADD32(0, 0);
    // 0x002876FC: c.lt.s      $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f1.fl < ctx->f2.fl;
    // 0x00287700: nop

    // 0x00287704: bc1t        L_00287724
    if (c1cs) {
        // 0x00287708: addiu       $t0, $zero, 0xFF
        ctx->r8 = ADD32(0, 0XFF);
            goto L_00287724;
    }
    // 0x00287708: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x0028770C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00287710: lwc1        $f0, -0x626C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X626C);
    // 0x00287714: mul.s       $f0, $f1, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x00287718: trunc.w.s   $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x0028771C: mfc1        $v0, $f4
    ctx->r2 = (int32_t)ctx->f4.u32l;
    // 0x00287720: nor         $t0, $zero, $v0
    ctx->r8 = ~(0 | ctx->r2);
L_00287724:
    // 0x00287724: addu        $a0, $fp, $zero
    ctx->r4 = ADD32(ctx->r30, 0);
    // 0x00287728: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    // 0x0028772C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x00287730: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x00287734: lw          $v0, 0x2030($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2030);
    // 0x00287738: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x0028773C: lw          $v1, 0x2034($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X2034);
    // 0x00287740: addu        $a3, $a2, $zero
    ctx->r7 = ADD32(ctx->r6, 0);
    // 0x00287744: sb          $t0, 0x1B($sp)
    MEM_B(0X1B, ctx->r29) = ctx->r8;
    // 0x00287748: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x0028774C: jal         0x002883E0
    // 0x00287750: sw          $v1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r3;
    func_002883E0(rdram, ctx);
        goto after_15;
    // 0x00287750: sw          $v1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r3;
    after_15:
    // 0x00287754: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x00287758: addiu       $a0, $a0, -0x71DC
    ctx->r4 = ADD32(ctx->r4, -0X71DC);
    // 0x0028775C: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x00287760: lui         $v1, 0xE900
    ctx->r3 = S32(0XE900 << 16);
    // 0x00287764: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x00287768: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x0028776C: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
    // 0x00287770: sw          $v1, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r3;
    // 0x00287774: addiu       $v1, $v0, 0x8
    ctx->r3 = ADD32(ctx->r2, 0X8);
    // 0x00287778: sw          $zero, 0x4($a1)
    MEM_W(0X4, ctx->r5) = 0;
    // 0x0028777C: sw          $v1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r3;
    // 0x00287780: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x00287784: lw          $a0, -0xEC0($a0)
    ctx->r4 = MEM_W(ctx->r4, -0XEC0);
    // 0x00287788: lui         $v1, 0xDF00
    ctx->r3 = S32(0XDF00 << 16);
    // 0x0028778C: sw          $v1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r3;
    // 0x00287790: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x00287794: lui         $v0, 0x800E
    ctx->r2 = S32(0X800E << 16);
    // 0x00287798: lw          $v0, -0x71DC($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X71DC);
    // 0x0028779C: lw          $v1, 0x118($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X118);
    // 0x002877A0: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x002877A4: sw          $v0, 0x120($a0)
    MEM_W(0X120, ctx->r4) = ctx->r2;
L_002877A8:
    // 0x002877A8: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x002877AC: lw          $v1, -0xEC0($v1)
    ctx->r3 = MEM_W(ctx->r3, -0XEC0);
    // 0x002877B0: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x002877B4: lw          $v0, -0x52F0($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X52F0);
    // 0x002877B8: jal         0x0029B170
    // 0x002877BC: sw          $v0, 0x124($v1)
    MEM_W(0X124, ctx->r3) = ctx->r2;
    func_0029B170(rdram, ctx);
        goto after_16;
    // 0x002877BC: sw          $v0, 0x124($v1)
    MEM_W(0X124, ctx->r3) = ctx->r2;
    after_16:
    // 0x002877C0: lw          $s6, 0x20($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X20);
    // 0x002877C4: lw          $s7, 0x24($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X24);
    // 0x002877C8: sltu        $a2, $v1, $s7
    ctx->r6 = ctx->r3 < ctx->r23 ? 1 : 0;
    // 0x002877CC: subu        $a1, $v1, $s7
    ctx->r5 = SUB32(ctx->r3, ctx->r23);
    // 0x002877D0: subu        $a0, $v0, $s6
    ctx->r4 = SUB32(ctx->r2, ctx->r22);
    // 0x002877D4: subu        $a0, $a0, $a2
    ctx->r4 = SUB32(ctx->r4, ctx->r6);
    // 0x002877D8: sll         $a0, $a0, 6
    ctx->r4 = S32(ctx->r4 << 6);
    // 0x002877DC: srl         $v0, $a1, 26
    ctx->r2 = S32(U32(ctx->r5) >> 26);
    // 0x002877E0: or          $a0, $a0, $v0
    ctx->r4 = ctx->r4 | ctx->r2;
    // 0x002877E4: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x002877E8: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    // 0x002877EC: jal         0x002A4650
    // 0x002877F0: sll         $a1, $a1, 6
    ctx->r5 = S32(ctx->r5 << 6);
    func_002A4650(rdram, ctx);
        goto after_17;
    // 0x002877F0: sll         $a1, $a1, 6
    ctx->r5 = S32(ctx->r5 << 6);
    after_17:
    // 0x002877F4: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x002877F8: addu        $s1, $v1, $zero
    ctx->r17 = ADD32(ctx->r3, 0);
    // 0x002877FC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00287800: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x00287804: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x00287808: jal         0x002A50E0
    // 0x0028780C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_002A50E0(rdram, ctx);
        goto after_18;
    // 0x0028780C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_18:
    // 0x00287810: blez        $v0, L_0028782C
    if (SIGNED(ctx->r2) <= 0) {
        // 0x00287814: srl         $v1, $s1, 1
        ctx->r3 = S32(U32(ctx->r17) >> 1);
            goto L_0028782C;
    }
    // 0x00287814: srl         $v1, $s1, 1
    ctx->r3 = S32(U32(ctx->r17) >> 1);
    // 0x00287818: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0028781C: jal         0x002A5130
    // 0x00287820: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_002A5130(rdram, ctx);
        goto after_19;
    // 0x00287820: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_19:
    // 0x00287824: j           L_0028785C
    // 0x00287828: mov.s       $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    ctx->f1.fl = ctx->f0.fl;
        goto L_0028785C;
    // 0x00287828: mov.s       $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    ctx->f1.fl = ctx->f0.fl;
L_0028782C:
    // 0x0028782C: addiu       $a0, $zero, 0x0
    ctx->r4 = ADD32(0, 0X0);
    // 0x00287830: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x00287834: and         $a0, $s0, $a0
    ctx->r4 = ctx->r16 & ctx->r4;
    // 0x00287838: and         $a1, $s1, $a1
    ctx->r5 = ctx->r17 & ctx->r5;
    // 0x0028783C: sll         $a2, $s0, 31
    ctx->r6 = S32(ctx->r16 << 31);
    // 0x00287840: or          $v1, $v1, $a2
    ctx->r3 = ctx->r3 | ctx->r6;
    // 0x00287844: srl         $v0, $s0, 1
    ctx->r2 = S32(U32(ctx->r16) >> 1);
    // 0x00287848: or          $a0, $a0, $v0
    ctx->r4 = ctx->r4 | ctx->r2;
    // 0x0028784C: jal         0x002A5130
    // 0x00287850: or          $a1, $a1, $v1
    ctx->r5 = ctx->r5 | ctx->r3;
    func_002A5130(rdram, ctx);
        goto after_20;
    // 0x00287850: or          $a1, $a1, $v1
    ctx->r5 = ctx->r5 | ctx->r3;
    after_20:
    // 0x00287854: mov.s       $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    ctx->f1.fl = ctx->f0.fl;
    // 0x00287858: add.s       $f1, $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f1.fl;
L_0028785C:
    // 0x0028785C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00287860: lwc1        $f0, -0x6268($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X6268);
    // 0x00287864: mul.s       $f0, $f1, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x00287868: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0028786C: swc1        $f0, 0x6D48($at)
    MEM_W(0X6D48, ctx->r1) = ctx->f0.u32l;
    // 0x00287870: jal         0x00205574
    // 0x00287874: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_00205574(rdram, ctx);
        goto after_21;
    // 0x00287874: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_21:
    // 0x00287878: beq         $v0, $zero, L_00287898
    if (ctx->r2 == 0) {
        // 0x0028787C: nop
    
            goto L_00287898;
    }
    // 0x0028787C: nop

    // 0x00287880: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x00287884: lw          $a1, -0xEC0($a1)
    ctx->r5 = MEM_W(ctx->r5, -0XEC0);
    // 0x00287888: jal         0x00286B58
    // 0x0028788C: addu        $a0, $fp, $zero
    ctx->r4 = ADD32(ctx->r30, 0);
    func_00286B58(rdram, ctx);
        goto after_22;
    // 0x0028788C: addu        $a0, $fp, $zero
    ctx->r4 = ADD32(ctx->r30, 0);
    after_22:
    // 0x00287890: j           L_002878BC
    // 0x00287894: nop

        goto L_002878BC;
    // 0x00287894: nop

L_00287898:
    // 0x00287898: jal         0x00206078
    // 0x0028789C: nop

    func_00206078(rdram, ctx);
        goto after_23;
    // 0x0028789C: nop

    after_23:
    // 0x002878A0: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x002878A4: addiu       $a0, $a0, -0x52D8
    ctx->r4 = ADD32(ctx->r4, -0X52D8);
    // 0x002878A8: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x002878AC: lw          $a1, -0xEC0($a1)
    ctx->r5 = MEM_W(ctx->r5, -0XEC0);
    // 0x002878B0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x002878B4: jal         0x0029B820
    // 0x002878B8: addiu       $a1, $a1, 0xF0
    ctx->r5 = ADD32(ctx->r5, 0XF0);
    osSendMesg_recomp(rdram, ctx);
        goto after_24;
    // 0x002878B8: addiu       $a1, $a1, 0xF0
    ctx->r5 = ADD32(ctx->r5, 0XF0);
    after_24:
L_002878BC:
    // 0x002878BC: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x002878C0: addu        $at, $fp, $at
    ctx->r1 = ADD32(ctx->r30, ctx->r1);
    // 0x002878C4: lbu         $v0, 0x3FE1($at)
    ctx->r2 = MEM_BU(ctx->r1, 0X3FE1);
    // 0x002878C8: beq         $v0, $zero, L_00287A84
    if (ctx->r2 == 0) {
        // 0x002878CC: nop
    
            goto L_00287A84;
    }
    // 0x002878CC: nop

    // 0x002878D0: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x002878D4: addu        $at, $fp, $at
    ctx->r1 = ADD32(ctx->r30, ctx->r1);
    // 0x002878D8: lbu         $v0, 0x3FE0($at)
    ctx->r2 = MEM_BU(ctx->r1, 0X3FE0);
    // 0x002878DC: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x002878E0: lwc1        $f0, -0x6264($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X6264);
    // 0x002878E4: beq         $v0, $zero, L_002878F4
    if (ctx->r2 == 0) {
        // 0x002878E8: nop
    
            goto L_002878F4;
    }
    // 0x002878E8: nop

    // 0x002878EC: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x002878F0: lwc1        $f0, -0x6260($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X6260);
L_002878F4:
    // 0x002878F4: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x002878F8: addu        $at, $fp, $at
    ctx->r1 = ADD32(ctx->r30, ctx->r1);
    // 0x002878FC: lbu         $v1, 0x3FE1($at)
    ctx->r3 = MEM_BU(ctx->r1, 0X3FE1);
    // 0x00287900: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00287904: beq         $v1, $v0, L_002879FC
    if (ctx->r3 == ctx->r2) {
        // 0x00287908: mov.s       $f3, $f0
        CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    ctx->f3.fl = ctx->f0.fl;
            goto L_002879FC;
    }
    // 0x00287908: mov.s       $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    ctx->f3.fl = ctx->f0.fl;
    // 0x0028790C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x00287910: bne         $v1, $v0, L_00287A84
    if (ctx->r3 != ctx->r2) {
        // 0x00287914: nop
    
            goto L_00287A84;
    }
    // 0x00287914: nop

    // 0x00287918: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x0028791C: addu        $at, $fp, $at
    ctx->r1 = ADD32(ctx->r30, ctx->r1);
    // 0x00287920: lwc1        $f1, 0x3FE4($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X3FE4);
    // 0x00287924: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x00287928: c.lt.s      $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f2.fl < ctx->f1.fl;
    // 0x0028792C: nop

    // 0x00287930: bc1f        L_00287978
    if (!c1cs) {
        // 0x00287934: nop
    
            goto L_00287978;
    }
    // 0x00287934: nop

    // 0x00287938: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0028793C: lwc1        $f0, 0x6D28($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6D28);
    // 0x00287940: mul.s       $f0, $f3, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f3.fl, ctx->f0.fl);
    // 0x00287944: sub.s       $f0, $f1, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f1.fl - ctx->f0.fl;
    // 0x00287948: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x0028794C: addu        $at, $fp, $at
    ctx->r1 = ADD32(ctx->r30, ctx->r1);
    // 0x00287950: swc1        $f0, 0x3FE4($at)
    MEM_W(0X3FE4, ctx->r1) = ctx->f0.u32l;
    // 0x00287954: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x00287958: nop

    // 0x0028795C: bc1f        L_00287990
    if (!c1cs) {
        // 0x00287960: nop
    
            goto L_00287990;
    }
    // 0x00287960: nop

    // 0x00287964: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x00287968: addu        $at, $fp, $at
    ctx->r1 = ADD32(ctx->r30, ctx->r1);
    // 0x0028796C: swc1        $f2, 0x3FE4($at)
    MEM_W(0X3FE4, ctx->r1) = ctx->f2.u32l;
    // 0x00287970: j           L_00287990
    // 0x00287974: nop

        goto L_00287990;
    // 0x00287974: nop

L_00287978:
    // 0x00287978: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0028797C: lwc1        $f0, -0x625C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X625C);
    // 0x00287980: sub.s       $f0, $f1, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f1.fl - ctx->f0.fl;
    // 0x00287984: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x00287988: addu        $at, $fp, $at
    ctx->r1 = ADD32(ctx->r30, ctx->r1);
    // 0x0028798C: swc1        $f0, 0x3FE4($at)
    MEM_W(0X3FE4, ctx->r1) = ctx->f0.u32l;
L_00287990:
    // 0x00287990: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x00287994: addu        $at, $fp, $at
    ctx->r1 = ADD32(ctx->r30, ctx->r1);
    // 0x00287998: lwc1        $f1, 0x3FE4($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X3FE4);
    // 0x0028799C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x002879A0: lwc1        $f0, -0x6258($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X6258);
    // 0x002879A4: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x002879A8: nop

    // 0x002879AC: bc1f        L_00287A84
    if (!c1cs) {
        // 0x002879B0: addiu       $v1, $zero, 0x11
        ctx->r3 = ADD32(0, 0X11);
            goto L_00287A84;
    }
    // 0x002879B0: addiu       $v1, $zero, 0x11
    ctx->r3 = ADD32(0, 0X11);
    // 0x002879B4: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x002879B8: addu        $at, $fp, $at
    ctx->r1 = ADD32(ctx->r30, ctx->r1);
    // 0x002879BC: lw          $v0, 0x3FD8($at)
    ctx->r2 = MEM_W(ctx->r1, 0X3FD8);
    // 0x002879C0: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x002879C4: addu        $at, $fp, $at
    ctx->r1 = ADD32(ctx->r30, ctx->r1);
    // 0x002879C8: sw          $v1, 0x3FD8($at)
    MEM_W(0X3FD8, ctx->r1) = ctx->r3;
    // 0x002879CC: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x002879D0: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x002879D4: addu        $at, $fp, $at
    ctx->r1 = ADD32(ctx->r30, ctx->r1);
    // 0x002879D8: sw          $zero, 0x3FE4($at)
    MEM_W(0X3FE4, ctx->r1) = 0;
    // 0x002879DC: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x002879E0: addu        $at, $fp, $at
    ctx->r1 = ADD32(ctx->r30, ctx->r1);
    // 0x002879E4: sb          $v1, 0x3FE1($at)
    MEM_B(0X3FE1, ctx->r1) = ctx->r3;
    // 0x002879E8: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x002879EC: addu        $at, $fp, $at
    ctx->r1 = ADD32(ctx->r30, ctx->r1);
    // 0x002879F0: sw          $v0, 0x3FD4($at)
    MEM_W(0X3FD4, ctx->r1) = ctx->r2;
    // 0x002879F4: j           L_00287A84
    // 0x002879F8: nop

        goto L_00287A84;
    // 0x002879F8: nop

L_002879FC:
    // 0x002879FC: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00287A00: lwc1        $f2, 0x6D28($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X6D28);
    // 0x00287A04: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00287A08: lwc1        $f3, -0x6254($at)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r1, -0X6254);
    // 0x00287A0C: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x00287A10: addu        $at, $fp, $at
    ctx->r1 = ADD32(ctx->r30, ctx->r1);
    // 0x00287A14: lwc1        $f1, 0x3FE4($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X3FE4);
    // 0x00287A18: c.lt.s      $f2, $f3
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 3);
    c1cs = ctx->f2.fl < ctx->f3.fl;
    // 0x00287A1C: nop

    // 0x00287A20: bc1f        L_00287A34
    if (!c1cs) {
        // 0x00287A24: nop
    
            goto L_00287A34;
    }
    // 0x00287A24: nop

    // 0x00287A28: mul.s       $f0, $f0, $f3
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f3.fl);
    // 0x00287A2C: j           L_00287A3C
    // 0x00287A30: add.s       $f0, $f1, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f1.fl + ctx->f0.fl;
        goto L_00287A3C;
    // 0x00287A30: add.s       $f0, $f1, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f1.fl + ctx->f0.fl;
L_00287A34:
    // 0x00287A34: mul.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f2.fl);
    // 0x00287A38: add.s       $f0, $f1, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f1.fl + ctx->f0.fl;
L_00287A3C:
    // 0x00287A3C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00287A40: lwc1        $f1, -0x6250($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, -0X6250);
    // 0x00287A44: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x00287A48: addu        $at, $fp, $at
    ctx->r1 = ADD32(ctx->r30, ctx->r1);
    // 0x00287A4C: swc1        $f0, 0x3FE4($at)
    MEM_W(0X3FE4, ctx->r1) = ctx->f0.u32l;
    // 0x00287A50: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x00287A54: nop

    // 0x00287A58: bc1f        L_00287A84
    if (!c1cs) {
        // 0x00287A5C: nop
    
            goto L_00287A84;
    }
    // 0x00287A5C: nop

    // 0x00287A60: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x00287A64: addu        $at, $fp, $at
    ctx->r1 = ADD32(ctx->r30, ctx->r1);
    // 0x00287A68: sb          $zero, 0x3FE1($at)
    MEM_B(0X3FE1, ctx->r1) = 0;
    // 0x00287A6C: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x00287A70: addu        $at, $fp, $at
    ctx->r1 = ADD32(ctx->r30, ctx->r1);
    // 0x00287A74: swc1        $f1, 0x3FE4($at)
    MEM_W(0X3FE4, ctx->r1) = ctx->f_odd[(1 - 1) * 2];
    // 0x00287A78: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x00287A7C: addu        $at, $fp, $at
    ctx->r1 = ADD32(ctx->r30, ctx->r1);
    // 0x00287A80: sb          $zero, 0x3FE0($at)
    MEM_B(0X3FE0, ctx->r1) = 0;
L_00287A84:
    // 0x00287A84: jal         0x00283CD4
    // 0x00287A88: nop

    func_00283CD4(rdram, ctx);
        goto after_25;
    // 0x00287A88: nop

    after_25:
    // 0x00287A8C: lw          $ra, 0x5C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X5C);
    // 0x00287A90: lw          $fp, 0x58($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X58);
    // 0x00287A94: lw          $s7, 0x54($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X54);
    // 0x00287A98: lw          $s6, 0x50($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X50);
    // 0x00287A9C: lw          $s5, 0x4C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X4C);
    // 0x00287AA0: lw          $s4, 0x48($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X48);
    // 0x00287AA4: lw          $s3, 0x44($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X44);
    // 0x00287AA8: lw          $s2, 0x40($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X40);
    // 0x00287AAC: lw          $s1, 0x3C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X3C);
    // 0x00287AB0: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x00287AB4: jr          $ra
    // 0x00287AB8: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    return;
    // 0x00287AB8: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
;}
RECOMP_FUNC void func_004206B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004206B8: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x004206BC: lw          $v0, 0x990($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X990);
    // 0x004206C0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x004206C4: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x004206C8: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x004206CC: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x004206D0: beq         $v0, $zero, L_004206E8
    if (ctx->r2 == 0) {
        // 0x004206D4: sw          $s0, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->r16;
            goto L_004206E8;
    }
    // 0x004206D4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x004206D8: lui         $s0, 0x800C
    ctx->r16 = S32(0X800C << 16);
    // 0x004206DC: lw          $s0, 0x2028($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X2028);
    // 0x004206E0: j           L_004206F4
    // 0x004206E4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
        goto L_004206F4;
    // 0x004206E4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
L_004206E8:
    // 0x004206E8: lw          $v0, 0x20($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X20);
    // 0x004206EC: lb          $s0, 0x4($v0)
    ctx->r16 = MEM_B(ctx->r2, 0X4);
    // 0x004206F0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
L_004206F4:
    // 0x004206F4: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x004206F8: jal         0x0041DD90
    // 0x004206FC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_0041DD90(rdram, ctx);
        goto after_0;
    // 0x004206FC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x00420700: beq         $v0, $zero, L_00420718
    if (ctx->r2 == 0) {
        // 0x00420704: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_00420718;
    }
    // 0x00420704: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00420708: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0042070C: sw          $v0, 0x9BC($at)
    MEM_W(0X9BC, ctx->r1) = ctx->r2;
    // 0x00420710: j           L_00420848
    // 0x00420714: nop

        goto L_00420848;
    // 0x00420714: nop

L_00420718:
    // 0x00420718: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x0042071C: lw          $v0, 0x960($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X960);
    // 0x00420720: beq         $v0, $zero, L_004207DC
    if (ctx->r2 == 0) {
        // 0x00420724: nop
    
            goto L_004207DC;
    }
    // 0x00420724: nop

    // 0x00420728: lw          $a1, 0x20($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X20);
    // 0x0042072C: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x00420730: addiu       $a0, $a0, -0x6790
    ctx->r4 = ADD32(ctx->r4, -0X6790);
    // 0x00420734: jal         0x0025342C
    // 0x00420738: nop

    func_0025342C(rdram, ctx);
        goto after_1;
    // 0x00420738: nop

    after_1:
    // 0x0042073C: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x00420740: sw          $v0, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->r2;
    // 0x00420744: lw          $a1, 0x518($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X518);
    // 0x00420748: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x0042074C: lbu         $v0, 0x970($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X970);
    // 0x00420750: sb          $v0, 0x30($a1)
    MEM_B(0X30, ctx->r5) = ctx->r2;
    // 0x00420754: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x00420758: lhu         $v0, 0x968($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X968);
    // 0x0042075C: sh          $v0, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r2;
    // 0x00420760: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x00420764: lhu         $v0, 0x96A($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X96A);
    // 0x00420768: sh          $v0, 0x2($a1)
    MEM_H(0X2, ctx->r5) = ctx->r2;
    // 0x0042076C: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x00420770: lhu         $v0, 0x96C($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X96C);
    // 0x00420774: sh          $v0, 0x4($a1)
    MEM_H(0X4, ctx->r5) = ctx->r2;
    // 0x00420778: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x0042077C: lhu         $v0, 0x96E($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X96E);
    // 0x00420780: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x00420784: sh          $v0, 0x6($a1)
    MEM_H(0X6, ctx->r5) = ctx->r2;
    // 0x00420788: addu        $v1, $a1, $a0
    ctx->r3 = ADD32(ctx->r5, ctx->r4);
L_0042078C:
    // 0x0042078C: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x00420790: addu        $at, $at, $a0
    ctx->r1 = ADD32(ctx->r1, ctx->r4);
    // 0x00420794: lbu         $v0, 0x974($at)
    ctx->r2 = MEM_BU(ctx->r1, 0X974);
    // 0x00420798: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x0042079C: sb          $v0, 0x33($v1)
    MEM_B(0X33, ctx->r3) = ctx->r2;
    // 0x004207A0: slti        $v0, $a0, 0x8
    ctx->r2 = SIGNED(ctx->r4) < 0X8 ? 1 : 0;
    // 0x004207A4: bne         $v0, $zero, L_0042078C
    if (ctx->r2 != 0) {
        // 0x004207A8: addu        $v1, $a1, $a0
        ctx->r3 = ADD32(ctx->r5, ctx->r4);
            goto L_0042078C;
    }
    // 0x004207A8: addu        $v1, $a1, $a0
    ctx->r3 = ADD32(ctx->r5, ctx->r4);
    // 0x004207AC: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x004207B0: lb          $a1, 0x950($a1)
    ctx->r5 = MEM_B(ctx->r5, 0X950);
    // 0x004207B4: jal         0x0042E430
    // 0x004207B8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_0042E430(rdram, ctx);
        goto after_2;
    // 0x004207B8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x004207BC: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x004207C0: lw          $a0, 0x51C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X51C);
    // 0x004207C4: lui         $a2, 0x44
    ctx->r6 = S32(0X44 << 16);
    // 0x004207C8: addiu       $a2, $a2, -0x78B8
    ctx->r6 = ADD32(ctx->r6, -0X78B8);
    // 0x004207CC: jal         0x00416894
    // 0x004207D0: addiu       $a0, $a0, 0x53C
    ctx->r4 = ADD32(ctx->r4, 0X53C);
    func_00416894(rdram, ctx);
        goto after_3;
    // 0x004207D0: addiu       $a0, $a0, 0x53C
    ctx->r4 = ADD32(ctx->r4, 0X53C);
    after_3:
    // 0x004207D4: j           L_00420848
    // 0x004207D8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_00420848;
    // 0x004207D8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_004207DC:
    // 0x004207DC: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x004207E0: lw          $a1, 0x9C4($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X9C4);
    // 0x004207E4: jal         0x00426064
    // 0x004207E8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00426064(rdram, ctx);
        goto after_4;
    // 0x004207E8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
    // 0x004207EC: bne         $v0, $zero, L_0042081C
    if (ctx->r2 != 0) {
        // 0x004207F0: nop
    
            goto L_0042081C;
    }
    // 0x004207F0: nop

    // 0x004207F4: lw          $v0, 0x24($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X24);
    // 0x004207F8: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x004207FC: addiu       $a0, $a0, -0x61D4
    ctx->r4 = ADD32(ctx->r4, -0X61D4);
    // 0x00420800: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x00420804: lw          $a2, 0x1C($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X1C);
    // 0x00420808: lw          $a3, 0x20($s1)
    ctx->r7 = MEM_W(ctx->r17, 0X20);
    // 0x0042080C: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x00420810: addiu       $a1, $a1, -0x4250
    ctx->r5 = ADD32(ctx->r5, -0X4250);
    // 0x00420814: j           L_0042083C
    // 0x00420818: nop

        goto L_0042083C;
    // 0x00420818: nop

L_0042081C:
    // 0x0042081C: lw          $v0, 0x24($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X24);
    // 0x00420820: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x00420824: addiu       $a0, $a0, -0x61D4
    ctx->r4 = ADD32(ctx->r4, -0X61D4);
    // 0x00420828: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x0042082C: lw          $a2, 0x1C($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X1C);
    // 0x00420830: lw          $a3, 0x20($s1)
    ctx->r7 = MEM_W(ctx->r17, 0X20);
    // 0x00420834: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x00420838: addiu       $a1, $a1, -0x41E4
    ctx->r5 = ADD32(ctx->r5, -0X41E4);
L_0042083C:
    // 0x0042083C: jal         0x00416644
    // 0x00420840: nop

    func_00416644(rdram, ctx);
        goto after_5;
    // 0x00420840: nop

    after_5:
    // 0x00420844: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_00420848:
    // 0x00420848: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x0042084C: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x00420850: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x00420854: jr          $ra
    // 0x00420858: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x00420858: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_00236040(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00236040: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00236044: addu        $v0, $a1, $zero
    ctx->r2 = ADD32(ctx->r5, 0);
    // 0x00236048: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0023604C: addu        $s0, $a2, $zero
    ctx->r16 = ADD32(ctx->r6, 0);
    // 0x00236050: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x00236054: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00236058: lwc1        $f1, 0x4C($v0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r2, 0X4C);
    // 0x0023605C: lwc1        $f0, 0xAC($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0XAC);
    // 0x00236060: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x00236064: sub.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl - ctx->f0.fl;
    // 0x00236068: addiu       $a0, $v0, 0x40
    ctx->r4 = ADD32(ctx->r2, 0X40);
    // 0x0023606C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x00236070: jal         0x0026D2D0
    // 0x00236074: swc1        $f1, 0x4C($v0)
    MEM_W(0X4C, ctx->r2) = ctx->f_odd[(1 - 1) * 2];
    func_0026D2D0(rdram, ctx);
        goto after_0;
    // 0x00236074: swc1        $f1, 0x4C($v0)
    MEM_W(0X4C, ctx->r2) = ctx->f_odd[(1 - 1) * 2];
    after_0:
    // 0x00236078: addiu       $a0, $s1, 0x6A88
    ctx->r4 = ADD32(ctx->r17, 0X6A88);
    // 0x0023607C: jal         0x0026D288
    // 0x00236080: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_0026D288(rdram, ctx);
        goto after_1;
    // 0x00236080: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_1:
    // 0x00236084: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x00236088: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x0023608C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00236090: jr          $ra
    // 0x00236094: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00236094: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_0043FC4C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0043FC4C: addiu       $sp, $sp, -0xC8
    ctx->r29 = ADD32(ctx->r29, -0XC8);
    // 0x0043FC50: sw          $s1, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->r17;
    // 0x0043FC54: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x0043FC58: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0043FC5C: addiu       $a1, $s1, 0x140
    ctx->r5 = ADD32(ctx->r17, 0X140);
    // 0x0043FC60: sw          $s2, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->r18;
    // 0x0043FC64: lw          $s2, 0xE0($sp)
    ctx->r18 = MEM_W(ctx->r29, 0XE0);
    // 0x0043FC68: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    // 0x0043FC6C: sw          $a3, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->r7;
    // 0x0043FC70: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x0043FC74: sw          $s0, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->r16;
    // 0x0043FC78: lui         $s0, 0x800F
    ctx->r16 = S32(0X800F << 16);
    // 0x0043FC7C: addiu       $s0, $s0, 0x1F50
    ctx->r16 = ADD32(ctx->r16, 0X1F50);
    // 0x0043FC80: sw          $ra, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->r31;
    // 0x0043FC84: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x0043FC88: addu        $v1, $a3, $zero
    ctx->r3 = ADD32(ctx->r7, 0);
    // 0x0043FC8C: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    // 0x0043FC90: ori         $v0, $v0, 0x8000
    ctx->r2 = ctx->r2 | 0X8000;
    // 0x0043FC94: jal         0x00246108
    // 0x0043FC98: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    func_00246108(rdram, ctx);
        goto after_0;
    // 0x0043FC98: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    after_0:
    // 0x0043FC9C: lui         $v1, 0xFFFF
    ctx->r3 = S32(0XFFFF << 16);
    // 0x0043FCA0: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x0043FCA4: ori         $v1, $v1, 0x7FFF
    ctx->r3 = ctx->r3 | 0X7FFF;
    // 0x0043FCA8: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x0043FCAC: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x0043FCB0: lw          $v1, 0x2C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X2C);
    // 0x0043FCB4: beq         $v1, $zero, L_0043FDF4
    if (ctx->r3 == 0) {
        // 0x0043FCB8: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_0043FDF4;
    }
    // 0x0043FCB8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x0043FCBC: bne         $s2, $v0, L_0043FD4C
    if (ctx->r18 != ctx->r2) {
        // 0x0043FCC0: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_0043FD4C;
    }
    // 0x0043FCC0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0043FCC4: lwc1        $f1, 0x4C($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X4C);
    // 0x0043FCC8: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0043FCCC: lwc1        $f0, 0x4F0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X4F0);
    // 0x0043FCD0: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x0043FCD4: nop

    // 0x0043FCD8: bc1f        L_0043FD4C
    if (!c1cs) {
        // 0x0043FCDC: nop
    
            goto L_0043FD4C;
    }
    // 0x0043FCDC: nop

    // 0x0043FCE0: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x0043FCE4: lw          $v0, -0x670($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X670);
    // 0x0043FCE8: blez        $v0, L_0043FD48
    if (SIGNED(ctx->r2) <= 0) {
        // 0x0043FCEC: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_0043FD48;
    }
    // 0x0043FCEC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0043FCF0: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x0043FCF4: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x0043FCF8: addiu       $v0, $zero, 0xA00
    ctx->r2 = ADD32(0, 0XA00);
    // 0x0043FCFC: sh          $v0, 0xB0($sp)
    MEM_H(0XB0, ctx->r29) = ctx->r2;
    // 0x0043FD00: addiu       $v0, $zero, 0x400
    ctx->r2 = ADD32(0, 0X400);
    // 0x0043FD04: sh          $v0, 0xB2($sp)
    MEM_H(0XB2, ctx->r29) = ctx->r2;
    // 0x0043FD08: sb          $zero, 0xB4($sp)
    MEM_B(0XB4, ctx->r29) = 0;
    // 0x0043FD0C: sb          $zero, 0xB5($sp)
    MEM_B(0XB5, ctx->r29) = 0;
    // 0x0043FD10: sb          $zero, 0xB6($sp)
    MEM_B(0XB6, ctx->r29) = 0;
    // 0x0043FD14: sb          $zero, 0xB7($sp)
    MEM_B(0XB7, ctx->r29) = 0;
    // 0x0043FD18: lw          $t0, 0x4($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X4);
    // 0x0043FD1C: lw          $t1, 0x8($v1)
    ctx->r9 = MEM_W(ctx->r3, 0X8);
    // 0x0043FD20: lw          $t2, 0xC($v1)
    ctx->r10 = MEM_W(ctx->r3, 0XC);
    // 0x0043FD24: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x0043FD28: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x0043FD2C: sw          $t2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r10;
    // 0x0043FD30: lw          $t0, 0xB0($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XB0);
    // 0x0043FD34: lw          $t1, 0xB4($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XB4);
    // 0x0043FD38: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    // 0x0043FD3C: sw          $t1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r9;
    // 0x0043FD40: jal         0x00236EA0
    // 0x0043FD44: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    func_00236EA0(rdram, ctx);
        goto after_1;
    // 0x0043FD44: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    after_1:
L_0043FD48:
    // 0x0043FD48: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_0043FD4C:
    // 0x0043FD4C: bne         $s2, $v0, L_0043FDF4
    if (ctx->r18 != ctx->r2) {
        // 0x0043FD50: nop
    
            goto L_0043FDF4;
    }
    // 0x0043FD50: nop

    // 0x0043FD54: lwc1        $f1, 0x4C($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X4C);
    // 0x0043FD58: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0043FD5C: lwc1        $f0, 0x4F4($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X4F4);
    // 0x0043FD60: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x0043FD64: nop

    // 0x0043FD68: bc1f        L_0043FDF4
    if (!c1cs) {
        // 0x0043FD6C: nop
    
            goto L_0043FDF4;
    }
    // 0x0043FD6C: nop

    // 0x0043FD70: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x0043FD74: lw          $v0, -0x678($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X678);
    // 0x0043FD78: blez        $v0, L_0043FDF4
    if (SIGNED(ctx->r2) <= 0) {
        // 0x0043FD7C: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_0043FDF4;
    }
    // 0x0043FD7C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0043FD80: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x0043FD84: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x0043FD88: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0043FD8C: lwc1        $f1, 0x4F8($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X4F8);
    // 0x0043FD90: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0043FD94: lwc1        $f0, 0x4FC($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X4FC);
    // 0x0043FD98: lw          $v1, 0x2C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X2C);
    // 0x0043FD9C: addiu       $v0, $zero, 0x800
    ctx->r2 = ADD32(0, 0X800);
    // 0x0043FDA0: sh          $v0, 0xB2($sp)
    MEM_H(0XB2, ctx->r29) = ctx->r2;
    // 0x0043FDA4: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0043FDA8: sb          $zero, 0xB4($sp)
    MEM_B(0XB4, ctx->r29) = 0;
    // 0x0043FDAC: sb          $zero, 0xB5($sp)
    MEM_B(0XB5, ctx->r29) = 0;
    // 0x0043FDB0: sb          $zero, 0xB6($sp)
    MEM_B(0XB6, ctx->r29) = 0;
    // 0x0043FDB4: sb          $zero, 0xB7($sp)
    MEM_B(0XB7, ctx->r29) = 0;
    // 0x0043FDB8: trunc.w.s   $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x0043FDBC: mfc1        $v0, $f2
    ctx->r2 = (int32_t)ctx->f2.u32l;
    // 0x0043FDC0: sh          $v0, 0xB0($sp)
    MEM_H(0XB0, ctx->r29) = ctx->r2;
    // 0x0043FDC4: lw          $t0, 0x4($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X4);
    // 0x0043FDC8: lw          $t1, 0x8($v1)
    ctx->r9 = MEM_W(ctx->r3, 0X8);
    // 0x0043FDCC: lw          $t2, 0xC($v1)
    ctx->r10 = MEM_W(ctx->r3, 0XC);
    // 0x0043FDD0: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x0043FDD4: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x0043FDD8: sw          $t2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r10;
    // 0x0043FDDC: lw          $t0, 0xB0($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XB0);
    // 0x0043FDE0: lw          $t1, 0xB4($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XB4);
    // 0x0043FDE4: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    // 0x0043FDE8: sw          $t1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r9;
    // 0x0043FDEC: jal         0x00236EA0
    // 0x0043FDF0: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    func_00236EA0(rdram, ctx);
        goto after_2;
    // 0x0043FDF0: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    after_2:
L_0043FDF4:
    // 0x0043FDF4: lw          $ra, 0xC4($sp)
    ctx->r31 = MEM_W(ctx->r29, 0XC4);
    // 0x0043FDF8: lw          $s2, 0xC0($sp)
    ctx->r18 = MEM_W(ctx->r29, 0XC0);
    // 0x0043FDFC: lw          $s1, 0xBC($sp)
    ctx->r17 = MEM_W(ctx->r29, 0XBC);
    // 0x0043FE00: lw          $s0, 0xB8($sp)
    ctx->r16 = MEM_W(ctx->r29, 0XB8);
    // 0x0043FE04: jr          $ra
    // 0x0043FE08: addiu       $sp, $sp, 0xC8
    ctx->r29 = ADD32(ctx->r29, 0XC8);
    return;
    // 0x0043FE08: addiu       $sp, $sp, 0xC8
    ctx->r29 = ADD32(ctx->r29, 0XC8);
;}
RECOMP_FUNC void func_00416558(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00416558: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x0041655C: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x00416560: addu        $s3, $a0, $zero
    ctx->r19 = ADD32(ctx->r4, 0);
    // 0x00416564: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00416568: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x0041656C: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x00416570: addu        $s4, $a2, $zero
    ctx->r20 = ADD32(ctx->r6, 0);
    // 0x00416574: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x00416578: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x0041657C: sw          $s5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r21;
    // 0x00416580: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00416584: lw          $a0, 0x20($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X20);
    // 0x00416588: lw          $s1, 0x40($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X40);
    // 0x0041658C: lw          $s5, 0x44($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X44);
    // 0x00416590: jal         0x00285628
    // 0x00416594: addu        $s2, $a3, $zero
    ctx->r18 = ADD32(ctx->r7, 0);
    func_00285628(rdram, ctx);
        goto after_0;
    // 0x00416594: addu        $s2, $a3, $zero
    ctx->r18 = ADD32(ctx->r7, 0);
    after_0:
    // 0x00416598: beq         $v0, $zero, L_004165BC
    if (ctx->r2 == 0) {
        // 0x0041659C: nop
    
            goto L_004165BC;
    }
    // 0x0041659C: nop

    // 0x004165A0: subu        $s0, $s0, $s4
    ctx->r16 = SUB32(ctx->r16, ctx->r20);
    // 0x004165A4: slt         $v0, $s0, $s2
    ctx->r2 = SIGNED(ctx->r16) < SIGNED(ctx->r18) ? 1 : 0;
    // 0x004165A8: beq         $v0, $zero, L_004165BC
    if (ctx->r2 == 0) {
        // 0x004165AC: nop
    
            goto L_004165BC;
    }
    // 0x004165AC: nop

    // 0x004165B0: beq         $s5, $zero, L_004165BC
    if (ctx->r21 == 0) {
        // 0x004165B4: addu        $s0, $s2, $zero
        ctx->r16 = ADD32(ctx->r18, 0);
            goto L_004165BC;
    }
    // 0x004165B4: addu        $s0, $s2, $zero
    ctx->r16 = ADD32(ctx->r18, 0);
    // 0x004165B8: addu        $s0, $s1, $zero
    ctx->r16 = ADD32(ctx->r17, 0);
L_004165BC:
    // 0x004165BC: lw          $a0, 0x20($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X20);
    // 0x004165C0: jal         0x00285670
    // 0x004165C4: nop

    func_00285670(rdram, ctx);
        goto after_1;
    // 0x004165C4: nop

    after_1:
    // 0x004165C8: beq         $v0, $zero, L_004165F0
    if (ctx->r2 == 0) {
        // 0x004165CC: addu        $v0, $s0, $zero
        ctx->r2 = ADD32(ctx->r16, 0);
            goto L_004165F0;
    }
    // 0x004165CC: addu        $v0, $s0, $zero
    ctx->r2 = ADD32(ctx->r16, 0);
    // 0x004165D0: addu        $s0, $s0, $s4
    ctx->r16 = ADD32(ctx->r16, ctx->r20);
    // 0x004165D4: slt         $v0, $s1, $s0
    ctx->r2 = SIGNED(ctx->r17) < SIGNED(ctx->r16) ? 1 : 0;
    // 0x004165D8: beq         $v0, $zero, L_004165F0
    if (ctx->r2 == 0) {
        // 0x004165DC: addu        $v0, $s0, $zero
        ctx->r2 = ADD32(ctx->r16, 0);
            goto L_004165F0;
    }
    // 0x004165DC: addu        $v0, $s0, $zero
    ctx->r2 = ADD32(ctx->r16, 0);
    // 0x004165E0: beq         $s5, $zero, L_004165EC
    if (ctx->r21 == 0) {
        // 0x004165E4: addu        $s0, $s1, $zero
        ctx->r16 = ADD32(ctx->r17, 0);
            goto L_004165EC;
    }
    // 0x004165E4: addu        $s0, $s1, $zero
    ctx->r16 = ADD32(ctx->r17, 0);
    // 0x004165E8: addu        $s0, $s2, $zero
    ctx->r16 = ADD32(ctx->r18, 0);
L_004165EC:
    // 0x004165EC: addu        $v0, $s0, $zero
    ctx->r2 = ADD32(ctx->r16, 0);
L_004165F0:
    // 0x004165F0: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x004165F4: lw          $s5, 0x24($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X24);
    // 0x004165F8: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x004165FC: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x00416600: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x00416604: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00416608: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0041660C: jr          $ra
    // 0x00416610: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x00416610: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_0028917C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0028917C: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00289180: lw          $v0, 0x6D64($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X6D64);
    // 0x00289184: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00289188: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x0028918C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x00289190: beq         $v0, $zero, L_00289248
    if (ctx->r2 == 0) {
        // 0x00289194: sw          $ra, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r31;
            goto L_00289248;
    }
    // 0x00289194: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x00289198: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x0028919C: lwc1        $f1, -0x52C0($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, -0X52C0);
    // 0x002891A0: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x002891A4: c.lt.s      $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f2.fl < ctx->f1.fl;
    // 0x002891A8: nop

    // 0x002891AC: bc1f        L_002891C8
    if (!c1cs) {
        // 0x002891B0: nop
    
            goto L_002891C8;
    }
    // 0x002891B0: nop

    // 0x002891B4: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x002891B8: lwc1        $f0, 0x6D28($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6D28);
    // 0x002891BC: sub.s       $f0, $f1, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f1.fl - ctx->f0.fl;
    // 0x002891C0: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x002891C4: swc1        $f0, -0x52C0($at)
    MEM_W(-0X52C0, ctx->r1) = ctx->f0.u32l;
L_002891C8:
    // 0x002891C8: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x002891CC: lwc1        $f0, -0x52C0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X52C0);
    // 0x002891D0: c.le.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl <= ctx->f2.fl;
    // 0x002891D4: nop

    // 0x002891D8: bc1f        L_00289228
    if (!c1cs) {
        // 0x002891DC: nop
    
            goto L_00289228;
    }
    // 0x002891DC: nop

    // 0x002891E0: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x002891E4: lw          $v0, -0x4EE8($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X4EE8);
    // 0x002891E8: bne         $v0, $zero, L_00289228
    if (ctx->r2 != 0) {
        // 0x002891EC: lui         $a0, 0x2
        ctx->r4 = S32(0X2 << 16);
            goto L_00289228;
    }
    // 0x002891EC: lui         $a0, 0x2
    ctx->r4 = S32(0X2 << 16);
    // 0x002891F0: ori         $a0, $a0, 0x317C
    ctx->r4 = ctx->r4 | 0X317C;
    // 0x002891F4: addu        $a0, $s0, $a0
    ctx->r4 = ADD32(ctx->r16, ctx->r4);
    // 0x002891F8: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x002891FC: addiu       $a1, $a1, -0x48C8
    ctx->r5 = ADD32(ctx->r5, -0X48C8);
    // 0x00289200: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00289204: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x00289208: lui         $a3, 0x800F
    ctx->r7 = S32(0X800F << 16);
    // 0x0028920C: addiu       $a3, $a3, 0x5C78
    ctx->r7 = ADD32(ctx->r7, 0X5C78);
    // 0x00289210: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x00289214: swc1        $f2, -0x52C0($at)
    MEM_W(-0X52C0, ctx->r1) = ctx->f2.u32l;
    // 0x00289218: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x0028921C: sw          $v0, -0x4EE8($at)
    MEM_W(-0X4EE8, ctx->r1) = ctx->r2;
    // 0x00289220: jal         0x00416644
    // 0x00289224: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_00416644(rdram, ctx);
        goto after_0;
    // 0x00289224: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_0:
L_00289228:
    // 0x00289228: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x0028922C: lw          $v0, -0xEB8($v0)
    ctx->r2 = MEM_W(ctx->r2, -0XEB8);
    // 0x00289230: beq         $v0, $zero, L_00289248
    if (ctx->r2 == 0) {
        // 0x00289234: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_00289248;
    }
    // 0x00289234: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00289238: jal         0x00288C5C
    // 0x0028923C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_00288C5C(rdram, ctx);
        goto after_1;
    // 0x0028923C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_1:
    // 0x00289240: jal         0x00285ABC
    // 0x00289244: nop

    func_00285ABC(rdram, ctx);
        goto after_2;
    // 0x00289244: nop

    after_2:
L_00289248:
    // 0x00289248: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x0028924C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x00289250: jr          $ra
    // 0x00289254: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00289254: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_002944A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002944A0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x002944A4: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x002944A8: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x002944AC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x002944B0: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x002944B4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x002944B8: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x002944BC: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
    // 0x002944C0: beq         $v0, $zero, L_0029451C
    if (ctx->r2 == 0) {
        // 0x002944C4: addu        $s2, $a2, $zero
        ctx->r18 = ADD32(ctx->r6, 0);
            goto L_0029451C;
    }
    // 0x002944C4: addu        $s2, $a2, $zero
    ctx->r18 = ADD32(ctx->r6, 0);
    // 0x002944C8: jal         0x00294B58
    // 0x002944CC: nop

    func_00294B58(rdram, ctx);
        goto after_0;
    // 0x002944CC: nop

    after_0:
    // 0x002944D0: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    // 0x002944D4: beq         $a2, $zero, L_0029451C
    if (ctx->r6 == 0) {
        // 0x002944D8: nop
    
            goto L_0029451C;
    }
    // 0x002944D8: nop

    // 0x002944DC: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
    // 0x002944E0: lw          $v1, 0x1C($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X1C);
    // 0x002944E4: lw          $a0, 0xD8($v0)
    ctx->r4 = MEM_W(ctx->r2, 0XD8);
    // 0x002944E8: addiu       $v0, $zero, 0xE
    ctx->r2 = ADD32(0, 0XE);
    // 0x002944EC: sh          $v0, 0x8($a2)
    MEM_H(0X8, ctx->r6) = ctx->r2;
    // 0x002944F0: sw          $s2, 0xC($a2)
    MEM_W(0XC, ctx->r6) = ctx->r18;
    // 0x002944F4: sw          $zero, 0x0($a2)
    MEM_W(0X0, ctx->r6) = 0;
    // 0x002944F8: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x002944FC: sw          $v1, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r3;
    // 0x00294500: lhu         $v0, 0x1A($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X1A);
    // 0x00294504: sh          $v0, 0xA($a2)
    MEM_H(0XA, ctx->r6) = ctx->r2;
    // 0x00294508: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
    // 0x0029450C: lw          $a0, 0xC($v0)
    ctx->r4 = MEM_W(ctx->r2, 0XC);
    // 0x00294510: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x00294514: jalr        $v0
    // 0x00294518: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_1;
    // 0x00294518: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_1:
L_0029451C:
    // 0x0029451C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x00294520: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x00294524: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00294528: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0029452C: jr          $ra
    // 0x00294530: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00294530: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_0045C850(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_0042387C:
    // 0x0045C850: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x0045C854: lw          $v0, 0x994($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X994);
    // 0x0045C858: beq         $v0, $zero, L_0045C870
    if (ctx->r2 == 0) {
        // 0x0045C85C: nop
    
            goto L_0045C870;
    }
    // 0x0045C85C: nop

    // 0x0045C860: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0045C864: addiu       $v0, $v0, 0x510C
    ctx->r2 = ADD32(ctx->r2, 0X510C);
    // 0x0045C868: j           L_0042387C
    // 0x0045C86C: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    entry_0042387C(rdram, ctx);
    return;
    // 0x0045C86C: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_0045C870:
    // 0x0045C870: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0045C874: addiu       $v0, $v0, 0x5118
    ctx->r2 = ADD32(ctx->r2, 0X5118);
    // 0x0045C878: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    // 0x0045C87C: jr          $ra
    // 0x0045C880: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x0045C880: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void func_00407BBC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00407BBC: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x00407BC0: addiu       $v1, $v1, -0x630
    ctx->r3 = ADD32(ctx->r3, -0X630);
    // 0x00407BC4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00407BC8: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x00407BCC: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x00407BD0: sw          $v0, 0x54($v1)
    MEM_W(0X54, ctx->r3) = ctx->r2;
    // 0x00407BD4: sw          $v0, 0x58($v1)
    MEM_W(0X58, ctx->r3) = ctx->r2;
    // 0x00407BD8: lui         $v0, 0x43
    ctx->r2 = S32(0X43 << 16);
    // 0x00407BDC: addiu       $v0, $v0, 0x1700
    ctx->r2 = ADD32(ctx->r2, 0X1700);
    // 0x00407BE0: jr          $ra
    // 0x00407BE4: sw          $v0, 0x50($v1)
    MEM_W(0X50, ctx->r3) = ctx->r2;
    return;
    // 0x00407BE4: sw          $v0, 0x50($v1)
    MEM_W(0X50, ctx->r3) = ctx->r2;
;}
RECOMP_FUNC void func_0040E0A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0040E0A0: lw          $v0, 0x514($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X514);
    // 0x0040E0A4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x0040E0A8: jr          $ra
    // 0x0040E0AC: sw          $v0, 0x514($a1)
    MEM_W(0X514, ctx->r5) = ctx->r2;
    return;
    // 0x0040E0AC: sw          $v0, 0x514($a1)
    MEM_W(0X514, ctx->r5) = ctx->r2;
;}
RECOMP_FUNC void func_00200EE8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00200EE8: add         $t7, $t7, $t1
    ctx->r15 = ADD32(ctx->r15, ctx->r9);
    // 0x00200EEC: srlv        $t6, $t6, $t7
    ctx->r14 = S32(U32(ctx->r14) >> (ctx->r15 & 31));
    // 0x00200EF0: addi        $s3, $s3, 0x4
    ctx->r19 = ADD32(ctx->r19, 0X4);
    // 0x00200EF4: lbu         $at, -0x2($s3)
    ctx->r1 = MEM_BU(ctx->r19, -0X2);
    // 0x00200EF8: lbu         $v0, -0x1($s3)
    ctx->r2 = MEM_BU(ctx->r19, -0X1);
    // 0x00200EFC: addi        $s3, $s3, -0x2
    ctx->r19 = ADD32(ctx->r19, -0X2);
    // 0x00200F00: sll         $at, $at, 16
    ctx->r1 = S32(ctx->r1 << 16);
    // 0x00200F04: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x00200F08: or          $t6, $t6, $v0
    ctx->r14 = ctx->r14 | ctx->r2;
    // 0x00200F0C: or          $t6, $t6, $at
    ctx->r14 = ctx->r14 | ctx->r1;
    // 0x00200F10: sub         $t1, $t1, $t7
    ctx->r9 = SUB32(ctx->r9, ctx->r15);
    // 0x00200F14: addi        $t7, $zero, 0x10
    ctx->r15 = ADD32(0, 0X10);
    // 0x00200F18: jr          $ra
    // 0x00200F1C: sub         $t7, $t7, $t1
    ctx->r15 = SUB32(ctx->r15, ctx->r9);
    return;
    // 0x00200F1C: sub         $t7, $t7, $t1
    ctx->r15 = SUB32(ctx->r15, ctx->r9);
;}
RECOMP_FUNC void func_00423478(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00423478: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x0042347C: lw          $v0, 0x99C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X99C);
    // 0x00423480: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00423484: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00423488: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x0042348C: bne         $v0, $zero, L_00423540
    if (ctx->r2 != 0) {
        // 0x00423490: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_00423540;
    }
    // 0x00423490: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x00423494: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x00423498: lw          $v0, 0x990($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X990);
    // 0x0042349C: beq         $v0, $zero, L_004234B4
    if (ctx->r2 == 0) {
        // 0x004234A0: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_004234B4;
    }
    // 0x004234A0: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x004234A4: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x004234A8: lw          $v1, 0x2028($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X2028);
    // 0x004234AC: j           L_004234C0
    // 0x004234B0: nop

        goto L_004234C0;
    // 0x004234B0: nop

L_004234B4:
    // 0x004234B4: lw          $v0, 0x20($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X20);
    // 0x004234B8: lb          $v1, 0x4($v0)
    ctx->r3 = MEM_B(ctx->r2, 0X4);
    // 0x004234BC: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_004234C0:
    // 0x004234C0: beq         $v1, $v0, L_00423540
    if (ctx->r3 == ctx->r2) {
        // 0x004234C4: nop
    
            goto L_00423540;
    }
    // 0x004234C4: nop

    // 0x004234C8: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x004234CC: lw          $v0, 0x990($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X990);
    // 0x004234D0: beq         $v0, $zero, L_004234E8
    if (ctx->r2 == 0) {
        // 0x004234D4: nop
    
            goto L_004234E8;
    }
    // 0x004234D4: nop

    // 0x004234D8: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x004234DC: lw          $a0, 0x2028($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X2028);
    // 0x004234E0: j           L_004234F0
    // 0x004234E4: nop

        goto L_004234F0;
    // 0x004234E4: nop

L_004234E8:
    // 0x004234E8: lw          $v0, 0x20($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X20);
    // 0x004234EC: lb          $a0, 0x4($v0)
    ctx->r4 = MEM_B(ctx->r2, 0X4);
L_004234F0:
    // 0x004234F0: jal         0x0028591C
    // 0x004234F4: nop

    func_0028591C(rdram, ctx);
        goto after_0;
    // 0x004234F4: nop

    after_0:
    // 0x004234F8: beq         $v0, $zero, L_00423540
    if (ctx->r2 == 0) {
        // 0x004234FC: nop
    
            goto L_00423540;
    }
    // 0x004234FC: nop

    // 0x00423500: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x00423504: lw          $v0, 0x990($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X990);
    // 0x00423508: beq         $v0, $zero, L_00423520
    if (ctx->r2 == 0) {
        // 0x0042350C: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_00423520;
    }
    // 0x0042350C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00423510: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x00423514: lw          $a1, 0x2028($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X2028);
    // 0x00423518: j           L_00423528
    // 0x0042351C: nop

        goto L_00423528;
    // 0x0042351C: nop

L_00423520:
    // 0x00423520: lw          $v0, 0x20($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X20);
    // 0x00423524: lb          $a1, 0x4($v0)
    ctx->r5 = MEM_B(ctx->r2, 0X4);
L_00423528:
    // 0x00423528: jal         0x0041DD90
    // 0x0042352C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_0041DD90(rdram, ctx);
        goto after_1;
    // 0x0042352C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_1:
    // 0x00423530: beq         $v0, $zero, L_00423540
    if (ctx->r2 == 0) {
        // 0x00423534: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_00423540;
    }
    // 0x00423534: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00423538: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0042353C: sw          $v0, 0x99C($at)
    MEM_W(0X99C, ctx->r1) = ctx->r2;
L_00423540:
    // 0x00423540: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x00423544: lw          $v0, 0x99C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X99C);
    // 0x00423548: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x0042354C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00423550: jr          $ra
    // 0x00423554: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00423554: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0029A398(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0029A398: lwc1        $f1, 0x40($s1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r17, 0X40);
    // 0x0029A39C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
;}
RECOMP_FUNC void func_00238B84(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00238B84: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x00238B88: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00238B8C: sw          $ra, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r31;
    // 0x00238B90: sw          $a3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r7;
    // 0x00238B94: lw          $v1, 0x50($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X50);
    // 0x00238B98: lw          $t0, 0x54($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X54);
    // 0x00238B9C: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    // 0x00238BA0: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    // 0x00238BA4: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x00238BA8: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x00238BAC: lui         $v0, 0x20
    ctx->r2 = S32(0X20 << 16);
    // 0x00238BB0: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    // 0x00238BB4: lw          $v1, 0x48($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X48);
    // 0x00238BB8: lw          $t0, 0x4C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4C);
    // 0x00238BBC: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    // 0x00238BC0: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x00238BC4: lw          $a3, 0x44($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X44);
    // 0x00238BC8: jal         0x00237AFC
    // 0x00238BCC: nop

    func_00237AFC(rdram, ctx);
        goto after_0;
    // 0x00238BCC: nop

    after_0:
    // 0x00238BD0: lw          $ra, 0x30($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X30);
    // 0x00238BD4: jr          $ra
    // 0x00238BD8: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x00238BD8: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_0021E03C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0021E03C: addiu       $sp, $sp, -0x98
    ctx->r29 = ADD32(ctx->r29, -0X98);
    // 0x0021E040: sw          $s0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r16;
    // 0x0021E044: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x0021E048: sw          $s2, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r18;
    // 0x0021E04C: addu        $s2, $a1, $zero
    ctx->r18 = ADD32(ctx->r5, 0);
    // 0x0021E050: sw          $ra, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r31;
    // 0x0021E054: sw          $s3, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r19;
    // 0x0021E058: sw          $s1, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r17;
    // 0x0021E05C: sdc1        $f23, 0x90($sp)
    CHECK_FR(ctx, 23);
    SD(ctx->f23.u64, 0X90, ctx->r29);
    // 0x0021E060: sdc1        $f22, 0x88($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X88, ctx->r29);
    // 0x0021E064: sdc1        $f21, 0x80($sp)
    CHECK_FR(ctx, 21);
    SD(ctx->f21.u64, 0X80, ctx->r29);
    // 0x0021E068: sdc1        $f20, 0x78($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X78, ctx->r29);
    // 0x0021E06C: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    // 0x0021E070: jal         0x0026AFC0
    // 0x0021E074: addu        $s3, $a2, $zero
    ctx->r19 = ADD32(ctx->r6, 0);
    func_0026AFC0(rdram, ctx);
        goto after_0;
    // 0x0021E074: addu        $s3, $a2, $zero
    ctx->r19 = ADD32(ctx->r6, 0);
    after_0:
    // 0x0021E078: lw          $v1, 0x10($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X10);
    // 0x0021E07C: beq         $v1, $zero, L_0021E094
    if (ctx->r3 == 0) {
        // 0x0021E080: sltiu       $a0, $v0, 0x1
        ctx->r4 = ctx->r2 < 0X1 ? 1 : 0;
            goto L_0021E094;
    }
    // 0x0021E080: sltiu       $a0, $v0, 0x1
    ctx->r4 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x0021E084: lhu         $v0, 0x2($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X2);
    // 0x0021E088: andi        $v0, $v0, 0x4000
    ctx->r2 = ctx->r2 & 0X4000;
    // 0x0021E08C: bnel        $v0, $zero, L_0021E094
    if (ctx->r2 != 0) {
        // 0x0021E090: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_0021E094;
    }
    goto skip_0;
    // 0x0021E090: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    skip_0:
L_0021E094:
    // 0x0021E094: beq         $a0, $zero, L_0021E348
    if (ctx->r4 == 0) {
        // 0x0021E098: nop
    
            goto L_0021E348;
    }
    // 0x0021E098: nop

    // 0x0021E09C: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x0021E0A0: addiu       $a0, $a0, 0x7148
    ctx->r4 = ADD32(ctx->r4, 0X7148);
    // 0x0021E0A4: jal         0x00206950
    // 0x0021E0A8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    entry_00206950(rdram, ctx);
        goto after_1;
    // 0x0021E0A8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_1:
    // 0x0021E0AC: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x0021E0B0: beq         $s1, $zero, L_0021E348
    if (ctx->r17 == 0) {
        // 0x0021E0B4: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_0021E348;
    }
    // 0x0021E0B4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0021E0B8: jal         0x00267648
    // 0x0021E0BC: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_00267648(rdram, ctx);
        goto after_2;
    // 0x0021E0BC: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_2:
    // 0x0021E0C0: lwc1        $f2, 0x8($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X8);
    // 0x0021E0C4: lwc1        $f1, 0x54($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X54);
    // 0x0021E0C8: add.s       $f2, $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f1.fl;
    // 0x0021E0CC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0021E0D0: mov.s       $f23, $f0
    CHECK_FR(ctx, 23);
    CHECK_FR(ctx, 0);
    ctx->f23.fl = ctx->f0.fl;
    // 0x0021E0D4: jal         0x00268304
    // 0x0021E0D8: sub.s       $f22, $f2, $f23
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 23);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f23.fl); 
    ctx->f22.fl = ctx->f2.fl - ctx->f23.fl;
    func_00268304(rdram, ctx);
        goto after_3;
    // 0x0021E0D8: sub.s       $f22, $f2, $f23
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 23);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f23.fl); 
    ctx->f22.fl = ctx->f2.fl - ctx->f23.fl;
    after_3:
    // 0x0021E0DC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0021E0E0: jal         0x00268304
    // 0x0021E0E4: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    func_00268304(rdram, ctx);
        goto after_4;
    // 0x0021E0E4: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    after_4:
    // 0x0021E0E8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0021E0EC: lwc1        $f1, 0x5CAC($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X5CAC);
    // 0x0021E0F0: mul.s       $f21, $f22, $f1
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f21.fl = MUL_S(ctx->f22.fl, ctx->f1.fl);
    // 0x0021E0F4: sub.s       $f0, $f0, $f21
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f21.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f21.fl;
    // 0x0021E0F8: c.lt.s      $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f20.fl < ctx->f0.fl;
    // 0x0021E0FC: nop

    // 0x0021E100: bc1f        L_0021E118
    if (!c1cs) {
        // 0x0021E104: nop
    
            goto L_0021E118;
    }
    // 0x0021E104: nop

    // 0x0021E108: jal         0x00268304
    // 0x0021E10C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00268304(rdram, ctx);
        goto after_5;
    // 0x0021E10C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_5:
    // 0x0021E110: j           L_0021E124
    // 0x0021E114: nop

        goto L_0021E124;
    // 0x0021E114: nop

L_0021E118:
    // 0x0021E118: jal         0x00268304
    // 0x0021E11C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00268304(rdram, ctx);
        goto after_6;
    // 0x0021E11C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_6:
    // 0x0021E120: sub.s       $f0, $f0, $f21
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f21.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f21.fl;
L_0021E124:
    // 0x0021E124: mtc1        $zero, $f1
    ctx->f_odd[(1 - 1) * 2] = 0;
    // 0x0021E128: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x0021E12C: nop

    // 0x0021E130: bc1t        L_0021E18C
    if (c1cs) {
        // 0x0021E134: nop
    
            goto L_0021E18C;
    }
    // 0x0021E134: nop

    // 0x0021E138: jal         0x00268304
    // 0x0021E13C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00268304(rdram, ctx);
        goto after_7;
    // 0x0021E13C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_7:
    // 0x0021E140: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0021E144: jal         0x00268304
    // 0x0021E148: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    func_00268304(rdram, ctx);
        goto after_8;
    // 0x0021E148: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    after_8:
    // 0x0021E14C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0021E150: lwc1        $f1, 0x5CB0($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X5CB0);
    // 0x0021E154: mul.s       $f21, $f22, $f1
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f21.fl = MUL_S(ctx->f22.fl, ctx->f1.fl);
    // 0x0021E158: sub.s       $f0, $f0, $f21
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f21.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f21.fl;
    // 0x0021E15C: c.lt.s      $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f20.fl < ctx->f0.fl;
    // 0x0021E160: nop

    // 0x0021E164: bc1f        L_0021E17C
    if (!c1cs) {
        // 0x0021E168: nop
    
            goto L_0021E17C;
    }
    // 0x0021E168: nop

    // 0x0021E16C: jal         0x00268304
    // 0x0021E170: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00268304(rdram, ctx);
        goto after_9;
    // 0x0021E170: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_9:
    // 0x0021E174: j           L_0021E190
    // 0x0021E178: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
        goto L_0021E190;
    // 0x0021E178: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
L_0021E17C:
    // 0x0021E17C: jal         0x00268304
    // 0x0021E180: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00268304(rdram, ctx);
        goto after_10;
    // 0x0021E180: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_10:
    // 0x0021E184: j           L_0021E190
    // 0x0021E188: sub.s       $f20, $f0, $f21
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f21.fl); 
    ctx->f20.fl = ctx->f0.fl - ctx->f21.fl;
        goto L_0021E190;
    // 0x0021E188: sub.s       $f20, $f0, $f21
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f21.fl); 
    ctx->f20.fl = ctx->f0.fl - ctx->f21.fl;
L_0021E18C:
    // 0x0021E18C: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
L_0021E190:
    // 0x0021E190: beq         $s3, $zero, L_0021E1B0
    if (ctx->r19 == 0) {
        // 0x0021E194: nop
    
            goto L_0021E1B0;
    }
    // 0x0021E194: nop

    // 0x0021E198: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0021E19C: lwc1        $f0, 0x5CB4($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X5CB4);
    // 0x0021E1A0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0021E1A4: lwc1        $f2, 0x5CB8($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X5CB8);
    // 0x0021E1A8: j           L_0021E1BC
    // 0x0021E1AC: nop

        goto L_0021E1BC;
    // 0x0021E1AC: nop

L_0021E1B0:
    // 0x0021E1B0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0021E1B4: lwc1        $f0, 0x5CBC($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X5CBC);
    // 0x0021E1B8: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
L_0021E1BC:
    // 0x0021E1BC: mul.s       $f20, $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = MUL_S(ctx->f20.fl, ctx->f0.fl);
    // 0x0021E1C0: lwc1        $f0, 0x4($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X4);
    // 0x0021E1C4: lwc1        $f1, 0x0($s2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r18, 0X0);
    // 0x0021E1C8: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x0021E1CC: swc1        $f0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f0.u32l;
    // 0x0021E1D0: lwc1        $f0, 0xC($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0XC);
    // 0x0021E1D4: lwc1        $f1, 0x8($s2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r18, 0X8);
    // 0x0021E1D8: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x0021E1DC: add.s       $f1, $f23, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 23);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f23.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f1.fl = ctx->f23.fl + ctx->f2.fl;
    // 0x0021E1E0: swc1        $f0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f0.u32l;
    // 0x0021E1E4: lwc1        $f0, 0x4($s2)
    ctx->f0.u32l = MEM_W(ctx->r18, 0X4);
    // 0x0021E1E8: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x0021E1EC: lui         $a1, 0x469C
    ctx->r5 = S32(0X469C << 16);
    // 0x0021E1F0: ori         $a1, $a1, 0x4000
    ctx->r5 = ctx->r5 | 0X4000;
    // 0x0021E1F4: addiu       $a0, $sp, 0x50
    ctx->r4 = ADD32(ctx->r29, 0X50);
    // 0x0021E1F8: jal         0x0020F510
    // 0x0021E1FC: swc1        $f1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    func_0020F510(rdram, ctx);
        goto after_11;
    // 0x0021E1FC: swc1        $f1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    after_11:
    // 0x0021E200: addiu       $a0, $s0, 0x40
    ctx->r4 = ADD32(ctx->r16, 0X40);
    // 0x0021E204: jal         0x00211114
    // 0x0021E208: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    func_00211114(rdram, ctx);
        goto after_12;
    // 0x0021E208: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    after_12:
    // 0x0021E20C: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x0021E210: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x0021E214: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x0021E218: jal         0x0021034C
    // 0x0021E21C: addu        $a3, $a1, $zero
    ctx->r7 = ADD32(ctx->r5, 0);
    func_0021034C(rdram, ctx);
        goto after_13;
    // 0x0021E21C: addu        $a3, $a1, $zero
    ctx->r7 = ADD32(ctx->r5, 0);
    after_13:
    // 0x0021E220: lw          $a1, 0x50($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X50);
    // 0x0021E224: lw          $a2, 0x54($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X54);
    // 0x0021E228: lw          $a3, 0x58($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X58);
    // 0x0021E22C: jal         0x00210318
    // 0x0021E230: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    func_00210318(rdram, ctx);
        goto after_14;
    // 0x0021E230: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    after_14:
    // 0x0021E234: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x0021E238: jal         0x0020D274
    // 0x0021E23C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_0020D274(rdram, ctx);
        goto after_15;
    // 0x0021E23C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_15:
    // 0x0021E240: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0021E244: lwc1        $f0, 0x5CC0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X5CC0);
    // 0x0021E248: mul.s       $f0, $f22, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f22.fl, ctx->f0.fl);
    // 0x0021E24C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0021E250: lwc1        $f1, 0x5CC4($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X5CC4);
    // 0x0021E254: sub.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl - ctx->f0.fl;
    // 0x0021E258: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0021E25C: lwc1        $f2, 0x5CC8($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X5CC8);
    // 0x0021E260: c.lt.s      $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f2.fl < ctx->f1.fl;
    // 0x0021E264: nop

    // 0x0021E268: bc1t        L_0021E2D0
    if (c1cs) {
        // 0x0021E26C: addiu       $v0, $zero, 0xFF
        ctx->r2 = ADD32(0, 0XFF);
            goto L_0021E2D0;
    }
    // 0x0021E26C: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x0021E270: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x0021E274: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x0021E278: nop

    // 0x0021E27C: bc1t        L_0021E2D0
    if (c1cs) {
        // 0x0021E280: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_0021E2D0;
    }
    // 0x0021E280: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x0021E284: c.lt.s      $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f2.fl < ctx->f1.fl;
    // 0x0021E288: nop

    // 0x0021E28C: bc1t        L_0021E2D0
    if (c1cs) {
        // 0x0021E290: addiu       $v0, $zero, 0xFF
        ctx->r2 = ADD32(0, 0XFF);
            goto L_0021E2D0;
    }
    // 0x0021E290: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x0021E294: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0021E298: lwc1        $f0, 0x5CCC($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X5CCC);
    // 0x0021E29C: c.le.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl <= ctx->f1.fl;
    // 0x0021E2A0: nop

    // 0x0021E2A4: bc1tl       L_0021E2BC
    if (c1cs) {
        // 0x0021E2A8: sub.s       $f0, $f1, $f0
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f1.fl - ctx->f0.fl;
            goto L_0021E2BC;
    }
    goto skip_1;
    // 0x0021E2A8: sub.s       $f0, $f1, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f1.fl - ctx->f0.fl;
    skip_1:
    // 0x0021E2AC: trunc.w.s   $f3, $f1
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 1);
    ctx->f_odd[(3 - 1) * 2] = TRUNC_W_S(ctx->f1.fl);
    // 0x0021E2B0: mfc1        $v1, $f3
    ctx->r3 = (int32_t)ctx->f_odd[(3 - 1) * 2];
    // 0x0021E2B4: j           L_0021E2D0
    // 0x0021E2B8: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
        goto L_0021E2D0;
    // 0x0021E2B8: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
L_0021E2BC:
    // 0x0021E2BC: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x0021E2C0: trunc.w.s   $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(3 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x0021E2C4: mfc1        $v1, $f3
    ctx->r3 = (int32_t)ctx->f_odd[(3 - 1) * 2];
    // 0x0021E2C8: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x0021E2CC: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
L_0021E2D0:
    // 0x0021E2D0: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x0021E2D4: lbu         $v1, 0x10E($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X10E);
    // 0x0021E2D8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0021E2DC: lwc1        $f1, 0x5CD0($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X5CD0);
    // 0x0021E2E0: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x0021E2E4: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x0021E2E8: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x0021E2EC: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0021E2F0: mtc1        $v1, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r3;
    // 0x0021E2F4: cvt.s.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.fl = CVT_S_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x0021E2F8: add.s       $f0, $f1, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x0021E2FC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0021E300: lwc1        $f1, 0x5CD4($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X5CD4);
    // 0x0021E304: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x0021E308: nop

    // 0x0021E30C: bc1tl       L_0021E324
    if (c1cs) {
        // 0x0021E310: sub.s       $f0, $f0, $f1
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
            goto L_0021E324;
    }
    goto skip_2;
    // 0x0021E310: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    skip_2:
    // 0x0021E314: trunc.w.s   $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(3 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x0021E318: mfc1        $v1, $f3
    ctx->r3 = (int32_t)ctx->f_odd[(3 - 1) * 2];
    // 0x0021E31C: j           L_0021E338
    // 0x0021E320: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
        goto L_0021E338;
    // 0x0021E320: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
L_0021E324:
    // 0x0021E324: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x0021E328: trunc.w.s   $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(3 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x0021E32C: mfc1        $v1, $f3
    ctx->r3 = (int32_t)ctx->f_odd[(3 - 1) * 2];
    // 0x0021E330: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x0021E334: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
L_0021E338:
    // 0x0021E338: sb          $v1, 0x10E($s0)
    MEM_B(0X10E, ctx->r16) = ctx->r3;
    // 0x0021E33C: andi        $a2, $v1, 0xFF
    ctx->r6 = ctx->r3 & 0XFF;
    // 0x0021E340: jal         0x002086BC
    // 0x0021E344: sltiu       $a1, $s3, 0x1
    ctx->r5 = ctx->r19 < 0X1 ? 1 : 0;
    func_002086BC(rdram, ctx);
        goto after_16;
    // 0x0021E344: sltiu       $a1, $s3, 0x1
    ctx->r5 = ctx->r19 < 0X1 ? 1 : 0;
    after_16:
L_0021E348:
    // 0x0021E348: lw          $ra, 0x70($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X70);
    // 0x0021E34C: lw          $s3, 0x6C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X6C);
    // 0x0021E350: lw          $s2, 0x68($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X68);
    // 0x0021E354: lw          $s1, 0x64($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X64);
    // 0x0021E358: lw          $s0, 0x60($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X60);
    // 0x0021E35C: ldc1        $f23, 0x90($sp)
    CHECK_FR(ctx, 23);
    ctx->f23.u64 = LD(ctx->r29, 0X90);
    // 0x0021E360: ldc1        $f22, 0x88($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X88);
    // 0x0021E364: ldc1        $f21, 0x80($sp)
    CHECK_FR(ctx, 21);
    ctx->f21.u64 = LD(ctx->r29, 0X80);
    // 0x0021E368: ldc1        $f20, 0x78($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X78);
    // 0x0021E36C: jr          $ra
    // 0x0021E370: addiu       $sp, $sp, 0x98
    ctx->r29 = ADD32(ctx->r29, 0X98);
    return;
    // 0x0021E370: addiu       $sp, $sp, 0x98
    ctx->r29 = ADD32(ctx->r29, 0X98);
;}
RECOMP_FUNC void func_00224330(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00224330: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00224334: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00224338: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x0022433C: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x00224340: addu        $s2, $a2, $zero
    ctx->r18 = ADD32(ctx->r6, 0);
    // 0x00224344: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00224348: addu        $s1, $a3, $zero
    ctx->r17 = ADD32(ctx->r7, 0);
    // 0x0022434C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x00224350: lw          $a0, 0x70($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X70);
    // 0x00224354: jal         0x002017D4
    // 0x00224358: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_002017D4(rdram, ctx);
        goto after_0;
    // 0x00224358: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_0:
    // 0x0022435C: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x00224360: jal         0x002017D4
    // 0x00224364: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_002017D4(rdram, ctx);
        goto after_1;
    // 0x00224364: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_1:
    // 0x00224368: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x0022436C: jal         0x002017D4
    // 0x00224370: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_002017D4(rdram, ctx);
        goto after_2;
    // 0x00224370: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_2:
    // 0x00224374: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x00224378: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0022437C: jal         0x002017D4
    // 0x00224380: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_002017D4(rdram, ctx);
        goto after_3;
    // 0x00224380: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_3:
    // 0x00224384: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00224388: jal         0x00201818
    // 0x0022438C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_00201818(rdram, ctx);
        goto after_4;
    // 0x0022438C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_4:
    // 0x00224390: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00224394: jal         0x002017D4
    // 0x00224398: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_002017D4(rdram, ctx);
        goto after_5;
    // 0x00224398: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_5:
    // 0x0022439C: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x002243A0: addu        $a3, $a1, $zero
    ctx->r7 = ADD32(ctx->r5, 0);
    // 0x002243A4: andi        $v1, $s2, 0x7
    ctx->r3 = ctx->r18 & 0X7;
    // 0x002243A8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x002243AC: beq         $s1, $zero, L_002243D8
    if (ctx->r17 == 0) {
        // 0x002243B0: sllv        $a0, $v0, $v1
        ctx->r4 = S32(ctx->r2 << (ctx->r3 & 31));
            goto L_002243D8;
    }
    // 0x002243B0: sllv        $a0, $v0, $v1
    ctx->r4 = S32(ctx->r2 << (ctx->r3 & 31));
    // 0x002243B4: bgez        $s2, L_002243C0
    if (SIGNED(ctx->r18) >= 0) {
        // 0x002243B8: addu        $v1, $s2, $zero
        ctx->r3 = ADD32(ctx->r18, 0);
            goto L_002243C0;
    }
    // 0x002243B8: addu        $v1, $s2, $zero
    ctx->r3 = ADD32(ctx->r18, 0);
    // 0x002243BC: addiu       $v1, $s2, 0x7
    ctx->r3 = ADD32(ctx->r18, 0X7);
L_002243C0:
    // 0x002243C0: sra         $v1, $v1, 3
    ctx->r3 = S32(SIGNED(ctx->r3) >> 3);
    // 0x002243C4: addu        $v1, $a1, $v1
    ctx->r3 = ADD32(ctx->r5, ctx->r3);
    // 0x002243C8: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x002243CC: or          $v0, $v0, $a0
    ctx->r2 = ctx->r2 | ctx->r4;
    // 0x002243D0: j           L_002243FC
    // 0x002243D4: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
        goto L_002243FC;
    // 0x002243D4: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
L_002243D8:
    // 0x002243D8: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    // 0x002243DC: bltzl       $a2, L_002243E4
    if (SIGNED(ctx->r6) < 0) {
        // 0x002243E0: addiu       $a2, $a2, 0x7
        ctx->r6 = ADD32(ctx->r6, 0X7);
            goto L_002243E4;
    }
    goto skip_0;
    // 0x002243E0: addiu       $a2, $a2, 0x7
    ctx->r6 = ADD32(ctx->r6, 0X7);
    skip_0:
L_002243E4:
    // 0x002243E4: sra         $v0, $a2, 3
    ctx->r2 = S32(SIGNED(ctx->r6) >> 3);
    // 0x002243E8: addu        $v0, $a3, $v0
    ctx->r2 = ADD32(ctx->r7, ctx->r2);
    // 0x002243EC: lbu         $v1, 0x0($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X0);
    // 0x002243F0: nor         $a0, $zero, $a0
    ctx->r4 = ~(0 | ctx->r4);
    // 0x002243F4: and         $v1, $v1, $a0
    ctx->r3 = ctx->r3 & ctx->r4;
    // 0x002243F8: sb          $v1, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r3;
L_002243FC:
    // 0x002243FC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x00224400: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x00224404: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00224408: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0022440C: jr          $ra
    // 0x00224410: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00224410: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_0045C97C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0045C97C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0045C980: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0045C984: sw          $v0, 0x9B0($at)
    MEM_W(0X9B0, ctx->r1) = ctx->r2;
    // 0x0045C988: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0045C98C: sw          $zero, 0x9A4($at)
    MEM_W(0X9A4, ctx->r1) = 0;
    // 0x0045C990: jr          $ra
    // 0x0045C994: nop

    return;
    // 0x0045C994: nop

;}
RECOMP_FUNC void func_004101B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004101B8: addiu       $sp, $sp, -0x10
    ctx->r29 = ADD32(ctx->r29, -0X10);
    // 0x004101BC: mtc1        $a3, $f6
    ctx->f6.u32l = ctx->r7;
    // 0x004101C0: addu        $t1, $zero, $zero
    ctx->r9 = ADD32(0, 0);
    // 0x004101C4: bne         $a2, $zero, L_004101DC
    if (ctx->r6 != 0) {
        // 0x004101C8: addu        $t2, $t1, $zero
        ctx->r10 = ADD32(ctx->r9, 0);
            goto L_004101DC;
    }
    // 0x004101C8: addu        $t2, $t1, $zero
    ctx->r10 = ADD32(ctx->r9, 0);
    // 0x004101CC: sw          $zero, 0x0($sp)
    MEM_W(0X0, ctx->r29) = 0;
    // 0x004101D0: sw          $zero, 0x4($sp)
    MEM_W(0X4, ctx->r29) = 0;
    // 0x004101D4: j           L_00410558
    // 0x004101D8: sw          $zero, 0x8($sp)
    MEM_W(0X8, ctx->r29) = 0;
        goto L_00410558;
    // 0x004101D8: sw          $zero, 0x8($sp)
    MEM_W(0X8, ctx->r29) = 0;
L_004101DC:
    // 0x004101DC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x004101E0: beq         $a2, $v0, L_004101FC
    if (ctx->r6 == ctx->r2) {
        // 0x004101E4: nop
    
            goto L_004101FC;
    }
    // 0x004101E4: nop

    // 0x004101E8: lwc1        $f0, 0x1C($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X1C);
    // 0x004101EC: c.le.s      $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.fl <= ctx->f0.fl;
    // 0x004101F0: nop

    // 0x004101F4: bc1f        L_00410218
    if (!c1cs) {
        // 0x004101F8: sll         $v0, $a2, 3
        ctx->r2 = S32(ctx->r6 << 3);
            goto L_00410218;
    }
    // 0x004101F8: sll         $v0, $a2, 3
    ctx->r2 = S32(ctx->r6 << 3);
L_004101FC:
    // 0x004101FC: lwc1        $f0, 0x0($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X0);
    // 0x00410200: swc1        $f0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->f0.u32l;
    // 0x00410204: lwc1        $f0, 0x4($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X4);
    // 0x00410208: swc1        $f0, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->f0.u32l;
    // 0x0041020C: lwc1        $f0, 0x8($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X8);
    // 0x00410210: j           L_00410558
    // 0x00410214: swc1        $f0, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->f0.u32l;
        goto L_00410558;
    // 0x00410214: swc1        $f0, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->f0.u32l;
L_00410218:
    // 0x00410218: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x0041021C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x00410220: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x00410224: addiu       $v1, $v0, -0x24
    ctx->r3 = ADD32(ctx->r2, -0X24);
    // 0x00410228: lwc1        $f0, 0x1C($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X1C);
    // 0x0041022C: c.le.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl <= ctx->f6.fl;
    // 0x00410230: nop

    // 0x00410234: bc1fl       L_00410258
    if (!c1cs) {
        // 0x00410238: addiu       $v1, $a2, -0x1
        ctx->r3 = ADD32(ctx->r6, -0X1);
            goto L_00410258;
    }
    goto skip_0;
    // 0x00410238: addiu       $v1, $a2, -0x1
    ctx->r3 = ADD32(ctx->r6, -0X1);
    skip_0:
    // 0x0041023C: lwc1        $f0, -0x24($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, -0X24);
    // 0x00410240: swc1        $f0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->f0.u32l;
    // 0x00410244: lwc1        $f0, 0x4($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X4);
    // 0x00410248: swc1        $f0, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->f0.u32l;
    // 0x0041024C: lwc1        $f0, 0x8($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X8);
    // 0x00410250: j           L_00410558
    // 0x00410254: swc1        $f0, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->f0.u32l;
        goto L_00410558;
    // 0x00410254: swc1        $f0, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->f0.u32l;
L_00410258:
    // 0x00410258: slt         $v0, $t2, $v1
    ctx->r2 = SIGNED(ctx->r10) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x0041025C: beq         $v0, $zero, L_004102B0
    if (ctx->r2 == 0) {
        // 0x00410260: addu        $a3, $zero, $zero
        ctx->r7 = ADD32(0, 0);
            goto L_004102B0;
    }
    // 0x00410260: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x00410264: addu        $t3, $v1, $zero
    ctx->r11 = ADD32(ctx->r3, 0);
    // 0x00410268: addiu       $t0, $zero, 0x24
    ctx->r8 = ADD32(0, 0X24);
    // 0x0041026C: addu        $v1, $a1, $zero
    ctx->r3 = ADD32(ctx->r5, 0);
L_00410270:
    // 0x00410270: addu        $t1, $v1, $zero
    ctx->r9 = ADD32(ctx->r3, 0);
    // 0x00410274: lwc1        $f0, 0x1C($t1)
    ctx->f0.u32l = MEM_W(ctx->r9, 0X1C);
    // 0x00410278: c.le.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl <= ctx->f6.fl;
    // 0x0041027C: nop

    // 0x00410280: bc1f        L_0041029C
    if (!c1cs) {
        // 0x00410284: addu        $t2, $a1, $t0
        ctx->r10 = ADD32(ctx->r5, ctx->r8);
            goto L_0041029C;
    }
    // 0x00410284: addu        $t2, $a1, $t0
    ctx->r10 = ADD32(ctx->r5, ctx->r8);
    // 0x00410288: lwc1        $f0, 0x1C($t2)
    ctx->f0.u32l = MEM_W(ctx->r10, 0X1C);
    // 0x0041028C: c.lt.s      $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.fl < ctx->f0.fl;
    // 0x00410290: nop

    // 0x00410294: bc1t        L_004102B0
    if (c1cs) {
        // 0x00410298: nop
    
            goto L_004102B0;
    }
    // 0x00410298: nop

L_0041029C:
    // 0x0041029C: addiu       $t0, $t0, 0x24
    ctx->r8 = ADD32(ctx->r8, 0X24);
    // 0x004102A0: addiu       $a3, $a3, 0x1
    ctx->r7 = ADD32(ctx->r7, 0X1);
    // 0x004102A4: slt         $v0, $a3, $t3
    ctx->r2 = SIGNED(ctx->r7) < SIGNED(ctx->r11) ? 1 : 0;
    // 0x004102A8: bne         $v0, $zero, L_00410270
    if (ctx->r2 != 0) {
        // 0x004102AC: addiu       $v1, $t1, 0x24
        ctx->r3 = ADD32(ctx->r9, 0X24);
            goto L_00410270;
    }
    // 0x004102AC: addiu       $v1, $t1, 0x24
    ctx->r3 = ADD32(ctx->r9, 0X24);
L_004102B0:
    // 0x004102B0: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x004102B4: mov.s       $f5, $f2
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 2);
    ctx->f5.fl = ctx->f2.fl;
    // 0x004102B8: blez        $a3, L_004102DC
    if (SIGNED(ctx->r7) <= 0) {
        // 0x004102BC: mov.s       $f3, $f2
        CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 2);
    ctx->f3.fl = ctx->f2.fl;
            goto L_004102DC;
    }
    // 0x004102BC: mov.s       $f3, $f2
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 2);
    ctx->f3.fl = ctx->f2.fl;
    // 0x004102C0: sll         $v0, $a3, 3
    ctx->r2 = S32(ctx->r7 << 3);
    // 0x004102C4: addu        $v0, $v0, $a3
    ctx->r2 = ADD32(ctx->r2, ctx->r7);
    // 0x004102C8: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x004102CC: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x004102D0: lwc1        $f1, 0x18($v0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r2, 0X18);
    // 0x004102D4: lwc1        $f0, -0xC($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, -0XC);
    // 0x004102D8: sub.s       $f5, $f1, $f0
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f5.fl = ctx->f1.fl - ctx->f0.fl;
L_004102DC:
    // 0x004102DC: addiu       $v0, $a2, -0x1
    ctx->r2 = ADD32(ctx->r6, -0X1);
    // 0x004102E0: slt         $v0, $a3, $v0
    ctx->r2 = SIGNED(ctx->r7) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x004102E4: beq         $v0, $zero, L_00410304
    if (ctx->r2 == 0) {
        // 0x004102E8: sll         $v0, $a3, 3
        ctx->r2 = S32(ctx->r7 << 3);
            goto L_00410304;
    }
    // 0x004102E8: sll         $v0, $a3, 3
    ctx->r2 = S32(ctx->r7 << 3);
    // 0x004102EC: addu        $v0, $v0, $a3
    ctx->r2 = ADD32(ctx->r2, ctx->r7);
    // 0x004102F0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x004102F4: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x004102F8: lwc1        $f1, 0x3C($v0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r2, 0X3C);
    // 0x004102FC: lwc1        $f0, 0x18($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X18);
    // 0x00410300: sub.s       $f2, $f1, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f1.fl - ctx->f0.fl;
L_00410304:
    // 0x00410304: addiu       $v0, $a2, -0x2
    ctx->r2 = ADD32(ctx->r6, -0X2);
    // 0x00410308: slt         $v0, $a3, $v0
    ctx->r2 = SIGNED(ctx->r7) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x0041030C: beq         $v0, $zero, L_0041032C
    if (ctx->r2 == 0) {
        // 0x00410310: sll         $v0, $a3, 3
        ctx->r2 = S32(ctx->r7 << 3);
            goto L_0041032C;
    }
    // 0x00410310: sll         $v0, $a3, 3
    ctx->r2 = S32(ctx->r7 << 3);
    // 0x00410314: addu        $v0, $v0, $a3
    ctx->r2 = ADD32(ctx->r2, ctx->r7);
    // 0x00410318: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x0041031C: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x00410320: lwc1        $f1, 0x60($v0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r2, 0X60);
    // 0x00410324: lwc1        $f0, 0x3C($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X3C);
    // 0x00410328: sub.s       $f3, $f1, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f3.fl = ctx->f1.fl - ctx->f0.fl;
L_0041032C:
    // 0x0041032C: mov.s       $f4, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    ctx->f4.fl = ctx->f2.fl;
    // 0x00410330: c.le.s      $f4, $f5
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 5);
    c1cs = ctx->f4.fl <= ctx->f5.fl;
    // 0x00410334: nop

    // 0x00410338: bc1fl       L_00410340
    if (!c1cs) {
        // 0x0041033C: mov.s       $f4, $f5
        CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 5);
    ctx->f4.fl = ctx->f5.fl;
            goto L_00410340;
    }
    goto skip_1;
    // 0x0041033C: mov.s       $f4, $f5
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 5);
    ctx->f4.fl = ctx->f5.fl;
    skip_1:
L_00410340:
    // 0x00410340: mov.s       $f8, $f3
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 3);
    ctx->f8.fl = ctx->f3.fl;
    // 0x00410344: c.le.s      $f8, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f8.fl <= ctx->f2.fl;
    // 0x00410348: nop

    // 0x0041034C: bc1fl       L_00410354
    if (!c1cs) {
        // 0x00410350: mov.s       $f8, $f2
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    ctx->f8.fl = ctx->f2.fl;
            goto L_00410354;
    }
    goto skip_2;
    // 0x00410350: mov.s       $f8, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    ctx->f8.fl = ctx->f2.fl;
    skip_2:
L_00410354:
    // 0x00410354: lwc1        $f2, 0x1C($t1)
    ctx->f2.u32l = MEM_W(ctx->r9, 0X1C);
    // 0x00410358: lwc1        $f0, 0x1C($t2)
    ctx->f0.u32l = MEM_W(ctx->r10, 0X1C);
    // 0x0041035C: lwc1        $f9, 0x18($t1)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r9, 0X18);
    // 0x00410360: lwc1        $f3, 0x18($t2)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r10, 0X18);
    // 0x00410364: c.eq.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl == ctx->f0.fl;
    // 0x00410368: nop

    // 0x0041036C: bc1t        L_00410384
    if (c1cs) {
        // 0x00410370: nop
    
            goto L_00410384;
    }
    // 0x00410370: nop

    // 0x00410374: sub.s       $f1, $f6, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f1.fl = ctx->f6.fl - ctx->f2.fl;
    // 0x00410378: sub.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f2.fl;
    // 0x0041037C: j           L_00410388
    // 0x00410380: div.s       $f7, $f1, $f0
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f7.fl = DIV_S(ctx->f1.fl, ctx->f0.fl);
        goto L_00410388;
    // 0x00410380: div.s       $f7, $f1, $f0
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f7.fl = DIV_S(ctx->f1.fl, ctx->f0.fl);
L_00410384:
    // 0x00410384: mtc1        $zero, $f7
    ctx->f_odd[(7 - 1) * 2] = 0;
L_00410388:
    // 0x00410388: mul.s       $f6, $f3, $f7
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 7);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f7.fl); 
    ctx->f6.fl = MUL_S(ctx->f3.fl, ctx->f7.fl);
    // 0x0041038C: nop

    // 0x00410390: mul.s       $f5, $f7, $f7
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 7);
    NAN_CHECK(ctx->f7.fl); NAN_CHECK(ctx->f7.fl); 
    ctx->f5.fl = MUL_S(ctx->f7.fl, ctx->f7.fl);
    // 0x00410394: add.s       $f0, $f7, $f7
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 7);
    NAN_CHECK(ctx->f7.fl); NAN_CHECK(ctx->f7.fl); 
    ctx->f0.fl = ctx->f7.fl + ctx->f7.fl;
    // 0x00410398: mul.s       $f0, $f0, $f7
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 7);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f7.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f7.fl);
    // 0x0041039C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x004103A0: lwc1        $f1, 0x97C($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X97C);
    // 0x004103A4: sub.s       $f1, $f1, $f7
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 7);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f7.fl); 
    ctx->f1.fl = ctx->f1.fl - ctx->f7.fl;
    // 0x004103A8: mul.s       $f1, $f9, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 9);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f9.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = MUL_S(ctx->f9.fl, ctx->f1.fl);
    // 0x004103AC: nop

    // 0x004103B0: mul.s       $f2, $f5, $f7
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 7);
    NAN_CHECK(ctx->f5.fl); NAN_CHECK(ctx->f7.fl); 
    ctx->f2.fl = MUL_S(ctx->f5.fl, ctx->f7.fl);
    // 0x004103B4: sub.s       $f3, $f3, $f9
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 9);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f9.fl); 
    ctx->f3.fl = ctx->f3.fl - ctx->f9.fl;
    // 0x004103B8: sub.s       $f4, $f4, $f3
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f4.fl = ctx->f4.fl - ctx->f3.fl;
    // 0x004103BC: sub.s       $f0, $f7, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f7.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f7.fl - ctx->f0.fl;
    // 0x004103C0: add.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f2.fl;
    // 0x004103C4: mul.s       $f4, $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x004103C8: sub.s       $f3, $f8, $f3
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f3.fl = ctx->f8.fl - ctx->f3.fl;
    // 0x004103CC: sub.s       $f2, $f2, $f5
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 5);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f5.fl); 
    ctx->f2.fl = ctx->f2.fl - ctx->f5.fl;
    // 0x004103D0: mul.s       $f3, $f3, $f2
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f3.fl = MUL_S(ctx->f3.fl, ctx->f2.fl);
    // 0x004103D4: add.s       $f1, $f1, $f6
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f6.fl;
    // 0x004103D8: add.s       $f1, $f1, $f4
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f4.fl;
    // 0x004103DC: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x004103E0: addiu       $v0, $a2, -0x1
    ctx->r2 = ADD32(ctx->r6, -0X1);
    // 0x004103E4: blez        $v0, L_00410438
    if (SIGNED(ctx->r2) <= 0) {
        // 0x004103E8: add.s       $f1, $f1, $f3
        CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f3.fl;
            goto L_00410438;
    }
    // 0x004103E8: add.s       $f1, $f1, $f3
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f3.fl;
    // 0x004103EC: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    // 0x004103F0: addiu       $t0, $zero, 0x24
    ctx->r8 = ADD32(0, 0X24);
    // 0x004103F4: addu        $v1, $a1, $zero
    ctx->r3 = ADD32(ctx->r5, 0);
L_004103F8:
    // 0x004103F8: addu        $t1, $v1, $zero
    ctx->r9 = ADD32(ctx->r3, 0);
    // 0x004103FC: lwc1        $f0, 0x18($t1)
    ctx->f0.u32l = MEM_W(ctx->r9, 0X18);
    // 0x00410400: c.le.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl <= ctx->f1.fl;
    // 0x00410404: nop

    // 0x00410408: bc1f        L_00410424
    if (!c1cs) {
        // 0x0041040C: addu        $t2, $a1, $t0
        ctx->r10 = ADD32(ctx->r5, ctx->r8);
            goto L_00410424;
    }
    // 0x0041040C: addu        $t2, $a1, $t0
    ctx->r10 = ADD32(ctx->r5, ctx->r8);
    // 0x00410410: lwc1        $f0, 0x18($t2)
    ctx->f0.u32l = MEM_W(ctx->r10, 0X18);
    // 0x00410414: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x00410418: nop

    // 0x0041041C: bc1t        L_00410438
    if (c1cs) {
        // 0x00410420: nop
    
            goto L_00410438;
    }
    // 0x00410420: nop

L_00410424:
    // 0x00410424: addiu       $t0, $t0, 0x24
    ctx->r8 = ADD32(ctx->r8, 0X24);
    // 0x00410428: addiu       $a3, $a3, 0x1
    ctx->r7 = ADD32(ctx->r7, 0X1);
    // 0x0041042C: slt         $v0, $a3, $a2
    ctx->r2 = SIGNED(ctx->r7) < SIGNED(ctx->r6) ? 1 : 0;
    // 0x00410430: bne         $v0, $zero, L_004103F8
    if (ctx->r2 != 0) {
        // 0x00410434: addiu       $v1, $t1, 0x24
        ctx->r3 = ADD32(ctx->r9, 0X24);
            goto L_004103F8;
    }
    // 0x00410434: addiu       $v1, $t1, 0x24
    ctx->r3 = ADD32(ctx->r9, 0X24);
L_00410438:
    // 0x00410438: lwc1        $f2, 0x18($t1)
    ctx->f2.u32l = MEM_W(ctx->r9, 0X18);
    // 0x0041043C: lwc1        $f0, 0x18($t2)
    ctx->f0.u32l = MEM_W(ctx->r10, 0X18);
    // 0x00410440: sub.s       $f8, $f0, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = ctx->f0.fl - ctx->f2.fl;
    // 0x00410444: mtc1        $zero, $f9
    ctx->f_odd[(9 - 1) * 2] = 0;
    // 0x00410448: c.eq.s      $f8, $f9
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 9);
    c1cs = ctx->f8.fl == ctx->f9.fl;
    // 0x0041044C: nop

    // 0x00410450: bc1t        L_00410460
    if (c1cs) {
        // 0x00410454: nop
    
            goto L_00410460;
    }
    // 0x00410454: nop

    // 0x00410458: sub.s       $f0, $f1, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f1.fl - ctx->f2.fl;
    // 0x0041045C: div.s       $f9, $f0, $f8
    CHECK_FR(ctx, 9);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f9.fl = DIV_S(ctx->f0.fl, ctx->f8.fl);
L_00410460:
    // 0x00410460: mul.s       $f8, $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f8.fl = MUL_S(ctx->f8.fl, ctx->f8.fl);
    // 0x00410464: nop

    // 0x00410468: mul.s       $f6, $f9, $f9
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 9);
    CHECK_FR(ctx, 9);
    NAN_CHECK(ctx->f9.fl); NAN_CHECK(ctx->f9.fl); 
    ctx->f6.fl = MUL_S(ctx->f9.fl, ctx->f9.fl);
    // 0x0041046C: lwc1        $f2, 0x0($t2)
    ctx->f2.u32l = MEM_W(ctx->r10, 0X0);
    // 0x00410470: mul.s       $f2, $f2, $f9
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 9);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f9.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f9.fl);
    // 0x00410474: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00410478: lwc1        $f4, 0x980($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X980);
    // 0x0041047C: sub.s       $f4, $f4, $f9
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 9);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f9.fl); 
    ctx->f4.fl = ctx->f4.fl - ctx->f9.fl;
    // 0x00410480: lwc1        $f3, 0x0($t1)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r9, 0X0);
    // 0x00410484: mul.s       $f3, $f3, $f4
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f3.fl = MUL_S(ctx->f3.fl, ctx->f4.fl);
    // 0x00410488: nop

    // 0x0041048C: mul.s       $f5, $f4, $f4
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f5.fl = MUL_S(ctx->f4.fl, ctx->f4.fl);
    // 0x00410490: nop

    // 0x00410494: mul.s       $f6, $f6, $f9
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 9);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f9.fl); 
    ctx->f6.fl = MUL_S(ctx->f6.fl, ctx->f9.fl);
    // 0x00410498: nop

    // 0x0041049C: mul.s       $f5, $f5, $f4
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f5.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f5.fl = MUL_S(ctx->f5.fl, ctx->f4.fl);
    // 0x004104A0: sub.s       $f6, $f6, $f9
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 9);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f9.fl); 
    ctx->f6.fl = ctx->f6.fl - ctx->f9.fl;
    // 0x004104A4: lwc1        $f1, 0xC($t2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r10, 0XC);
    // 0x004104A8: mul.s       $f1, $f1, $f6
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f6.fl);
    // 0x004104AC: sub.s       $f5, $f5, $f4
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f5.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f5.fl = ctx->f5.fl - ctx->f4.fl;
    // 0x004104B0: lwc1        $f0, 0xC($t1)
    ctx->f0.u32l = MEM_W(ctx->r9, 0XC);
    // 0x004104B4: mul.s       $f0, $f0, $f5
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 5);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f5.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f5.fl);
    // 0x004104B8: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x004104BC: mul.s       $f0, $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x004104C0: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x004104C4: lwc1        $f7, 0x984($at)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r1, 0X984);
    // 0x004104C8: mul.s       $f0, $f0, $f7
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 7);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f7.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f7.fl);
    // 0x004104CC: add.s       $f3, $f3, $f2
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f3.fl = ctx->f3.fl + ctx->f2.fl;
    // 0x004104D0: add.s       $f3, $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f3.fl = ctx->f3.fl + ctx->f0.fl;
    // 0x004104D4: swc1        $f3, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->f_odd[(3 - 1) * 2];
    // 0x004104D8: lwc1        $f2, 0x10($t1)
    ctx->f2.u32l = MEM_W(ctx->r9, 0X10);
    // 0x004104DC: mul.s       $f2, $f2, $f5
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 5);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f5.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f5.fl);
    // 0x004104E0: lwc1        $f1, 0x10($t2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r10, 0X10);
    // 0x004104E4: mul.s       $f1, $f1, $f6
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f6.fl);
    // 0x004104E8: lwc1        $f0, 0x4($t1)
    ctx->f0.u32l = MEM_W(ctx->r9, 0X4);
    // 0x004104EC: mul.s       $f0, $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x004104F0: add.s       $f2, $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f1.fl;
    // 0x004104F4: lwc1        $f1, 0x4($t2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r10, 0X4);
    // 0x004104F8: mul.s       $f1, $f1, $f9
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 9);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f9.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f9.fl);
    // 0x004104FC: nop

    // 0x00410500: mul.s       $f2, $f2, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f8.fl);
    // 0x00410504: nop

    // 0x00410508: mul.s       $f2, $f2, $f7
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 7);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f7.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f7.fl);
    // 0x0041050C: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x00410510: add.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f2.fl;
    // 0x00410514: swc1        $f0, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->f0.u32l;
    // 0x00410518: lwc1        $f2, 0x14($t1)
    ctx->f2.u32l = MEM_W(ctx->r9, 0X14);
    // 0x0041051C: mul.s       $f2, $f2, $f5
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 5);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f5.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f5.fl);
    // 0x00410520: lwc1        $f1, 0x14($t2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r10, 0X14);
    // 0x00410524: mul.s       $f1, $f1, $f6
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f6.fl);
    // 0x00410528: lwc1        $f0, 0x8($t1)
    ctx->f0.u32l = MEM_W(ctx->r9, 0X8);
    // 0x0041052C: mul.s       $f0, $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x00410530: add.s       $f2, $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f1.fl;
    // 0x00410534: lwc1        $f1, 0x8($t2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r10, 0X8);
    // 0x00410538: mul.s       $f1, $f1, $f9
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 9);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f9.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f9.fl);
    // 0x0041053C: nop

    // 0x00410540: mul.s       $f2, $f2, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f8.fl);
    // 0x00410544: nop

    // 0x00410548: mul.s       $f2, $f2, $f7
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 7);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f7.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f7.fl);
    // 0x0041054C: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x00410550: add.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f2.fl;
    // 0x00410554: swc1        $f0, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->f0.u32l;
L_00410558:
    // 0x00410558: lw          $t4, 0x0($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X0);
    // 0x0041055C: lw          $t5, 0x4($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X4);
    // 0x00410560: lw          $t6, 0x8($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X8);
    // 0x00410564: sw          $t4, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r12;
    // 0x00410568: sw          $t5, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r13;
    // 0x0041056C: sw          $t6, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r14;
    // 0x00410570: addu        $v0, $a0, $zero
    ctx->r2 = ADD32(ctx->r4, 0);
    // 0x00410574: jr          $ra
    // 0x00410578: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
    return;
    // 0x00410578: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
;}
RECOMP_FUNC void func_00467A6C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00467A6C: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x00467A70: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00467A74: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00467A78: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x00467A7C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x00467A80: sw          $zero, 0x90($s0)
    MEM_W(0X90, ctx->r16) = 0;
    // 0x00467A84: sw          $zero, 0x94($s0)
    MEM_W(0X94, ctx->r16) = 0;
    // 0x00467A88: sw          $zero, 0x98($s0)
    MEM_W(0X98, ctx->r16) = 0;
    // 0x00467A8C: jal         0x0042EAD4
    // 0x00467A90: sw          $zero, 0x9C($s0)
    MEM_W(0X9C, ctx->r16) = 0;
    entry_0042EAD4(rdram, ctx);
        goto after_0;
    // 0x00467A90: sw          $zero, 0x9C($s0)
    MEM_W(0X9C, ctx->r16) = 0;
    after_0:
    // 0x00467A94: jal         0x0027B40C
    // 0x00467A98: nop

    func_0027B40C(rdram, ctx);
        goto after_1;
    // 0x00467A98: nop

    after_1:
    // 0x00467A9C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00467AA0: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x00467AA4: addiu       $a1, $a1, 0x2B78
    ctx->r5 = ADD32(ctx->r5, 0X2B78);
    // 0x00467AA8: jal         0x0027BA8C
    // 0x00467AAC: addiu       $a2, $s0, 0xC8
    ctx->r6 = ADD32(ctx->r16, 0XC8);
    func_0027BA8C(rdram, ctx);
        goto after_2;
    // 0x00467AAC: addiu       $a2, $s0, 0xC8
    ctx->r6 = ADD32(ctx->r16, 0XC8);
    after_2:
    // 0x00467AB0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00467AB4: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x00467AB8: addiu       $a1, $a1, 0x2AC4
    ctx->r5 = ADD32(ctx->r5, 0X2AC4);
    // 0x00467ABC: jal         0x0027BA8C
    // 0x00467AC0: addiu       $a2, $a0, 0x148
    ctx->r6 = ADD32(ctx->r4, 0X148);
    func_0027BA8C(rdram, ctx);
        goto after_3;
    // 0x00467AC0: addiu       $a2, $a0, 0x148
    ctx->r6 = ADD32(ctx->r4, 0X148);
    after_3:
    // 0x00467AC4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x00467AC8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00467ACC: jr          $ra
    // 0x00467AD0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00467AD0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00408BFC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00408BFC: lw          $v0, 0x4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X4);
    // 0x00408C00: lh          $v1, 0x46($v0)
    ctx->r3 = MEM_H(ctx->r2, 0X46);
    // 0x00408C04: lw          $v0, 0x10($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X10);
    // 0x00408C08: jr          $ra
    // 0x00408C0C: subu        $v0, $v1, $v0
    ctx->r2 = SUB32(ctx->r3, ctx->r2);
    return;
    // 0x00408C0C: subu        $v0, $v1, $v0
    ctx->r2 = SUB32(ctx->r3, ctx->r2);
;}
RECOMP_FUNC void func_0025FFF0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0025FFF0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0025FFF4: lui         $v1, 0x800F
    ctx->r3 = S32(0X800F << 16);
    // 0x0025FFF8: addiu       $v1, $v1, 0x5C66
    ctx->r3 = ADD32(ctx->r3, 0X5C66);
    // 0x0025FFFC: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x00260000: lhu         $v0, 0x0($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X0);
    // 0x00260004: bne         $v0, $zero, L_00260024
    if (ctx->r2 != 0) {
        // 0x00260008: nop
    
            goto L_00260024;
    }
    // 0x00260008: nop

    // 0x0026000C: lhu         $v0, 0x6($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X6);
    // 0x00260010: bne         $v0, $zero, L_00260024
    if (ctx->r2 != 0) {
        // 0x00260014: nop
    
            goto L_00260024;
    }
    // 0x00260014: nop

    // 0x00260018: lhu         $v0, 0xC($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0XC);
    // 0x0026001C: beq         $v0, $zero, L_0026002C
    if (ctx->r2 == 0) {
        // 0x00260020: nop
    
            goto L_0026002C;
    }
    // 0x00260020: nop

L_00260024:
    // 0x00260024: jal         0x00243414
    // 0x00260028: addiu       $a2, $zero, 0x32
    ctx->r6 = ADD32(0, 0X32);
    func_00243414(rdram, ctx);
        goto after_0;
    // 0x00260028: addiu       $a2, $zero, 0x32
    ctx->r6 = ADD32(0, 0X32);
    after_0:
L_0026002C:
    // 0x0026002C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x00260030: jr          $ra
    // 0x00260034: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00260034: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0042EBBC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0042EBBC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x0042EBC0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0042EBC4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x0042EBC8: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x0042EBCC: addiu       $a2, $zero, -0x28
    ctx->r6 = ADD32(0, -0X28);
    // 0x0042EBD0: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x0042EBD4: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x0042EBD8: jal         0x0027ACC4
    // 0x0042EBDC: sw          $zero, 0x40($s0)
    MEM_W(0X40, ctx->r16) = 0;
    func_0027ACC4(rdram, ctx);
        goto after_0;
    // 0x0042EBDC: sw          $zero, 0x40($s0)
    MEM_W(0X40, ctx->r16) = 0;
    after_0:
    // 0x0042EBE0: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x0042EBE4: addiu       $a1, $a1, 0x2C30
    ctx->r5 = ADD32(ctx->r5, 0X2C30);
    // 0x0042EBE8: jal         0x0027AD00
    // 0x0042EBEC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_0027AD00(rdram, ctx);
        goto after_1;
    // 0x0042EBEC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x0042EBF0: addiu       $s1, $s0, 0x48
    ctx->r17 = ADD32(ctx->r16, 0X48);
    // 0x0042EBF4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0042EBF8: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x0042EBFC: addiu       $a2, $zero, -0x14
    ctx->r6 = ADD32(0, -0X14);
    // 0x0042EC00: jal         0x0027ACC4
    // 0x0042EC04: sw          $zero, 0x88($s0)
    MEM_W(0X88, ctx->r16) = 0;
    func_0027ACC4(rdram, ctx);
        goto after_2;
    // 0x0042EC04: sw          $zero, 0x88($s0)
    MEM_W(0X88, ctx->r16) = 0;
    after_2:
    // 0x0042EC08: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x0042EC0C: addiu       $a1, $a1, 0x2C40
    ctx->r5 = ADD32(ctx->r5, 0X2C40);
    // 0x0042EC10: jal         0x0027AD00
    // 0x0042EC14: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_0027AD00(rdram, ctx);
        goto after_3;
    // 0x0042EC14: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_3:
    // 0x0042EC18: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x0042EC1C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x0042EC20: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0042EC24: jr          $ra
    // 0x0042EC28: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x0042EC28: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_00210630(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00210630: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00210634: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x00210638: mtc1        $a1, $f20
    ctx->f20.u32l = ctx->r5;
    // 0x0021063C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00210640: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x00210644: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x00210648: jal         0x002982F0
    // 0x0021064C: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    func_002982F0(rdram, ctx);
        goto after_0;
    // 0x0021064C: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    after_0:
    // 0x00210650: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    // 0x00210654: mtc1        $zero, $f1
    ctx->f_odd[(1 - 1) * 2] = 0;
    // 0x00210658: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0021065C: lwc1        $f2, 0x5624($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X5624);
    // 0x00210660: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x00210664: swc1        $f1, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f_odd[(1 - 1) * 2];
    // 0x00210668: swc1        $f1, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f_odd[(1 - 1) * 2];
    // 0x0021066C: swc1        $f1, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->f_odd[(1 - 1) * 2];
    // 0x00210670: swc1        $f1, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f_odd[(1 - 1) * 2];
    // 0x00210674: swc1        $f1, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->f_odd[(1 - 1) * 2];
    // 0x00210678: swc1        $f1, 0x34($s0)
    MEM_W(0X34, ctx->r16) = ctx->f_odd[(1 - 1) * 2];
    // 0x0021067C: swc1        $f1, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->f_odd[(1 - 1) * 2];
    // 0x00210680: swc1        $f1, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->f_odd[(1 - 1) * 2];
    // 0x00210684: swc1        $f1, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f_odd[(1 - 1) * 2];
    // 0x00210688: swc1        $f1, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f_odd[(1 - 1) * 2];
    // 0x0021068C: swc1        $f2, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->f2.u32l;
    // 0x00210690: jal         0x002974C0
    // 0x00210694: swc1        $f2, 0x3C($s0)
    MEM_W(0X3C, ctx->r16) = ctx->f2.u32l;
    func_002974C0(rdram, ctx);
        goto after_1;
    // 0x00210694: swc1        $f2, 0x3C($s0)
    MEM_W(0X3C, ctx->r16) = ctx->f2.u32l;
    after_1:
    // 0x00210698: swc1        $f0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->f0.u32l;
    // 0x0021069C: swc1        $f0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f0.u32l;
    // 0x002106A0: neg.s       $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); 
    ctx->f0.fl = -ctx->f20.fl;
    // 0x002106A4: swc1        $f0, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->f0.u32l;
    // 0x002106A8: swc1        $f20, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f20.u32l;
    // 0x002106AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x002106B0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x002106B4: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x002106B8: jr          $ra
    // 0x002106BC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x002106BC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_00458A70(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_0041FAD4:
    // 0x00458A70: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
L_0041FB54:
    // 0x00458A74: sw          $s2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r18;
    // 0x00458A78: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x00458A7C: addu        $a0, $a1, $zero
    ctx->r4 = ADD32(ctx->r5, 0);
    // 0x00458A80: sw          $s1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r17;
    // 0x00458A84: addiu       $s1, $zero, 0x20
    ctx->r17 = ADD32(0, 0X20);
    // 0x00458A88: sw          $ra, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r31;
    // 0x00458A8C: sw          $s0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r16;
    // 0x00458A90: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
    // 0x00458A94: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x00458A98: lw          $v1, 0x9BC($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X9BC);
    // 0x00458A9C: addiu       $a1, $v0, -0x3
    ctx->r5 = ADD32(ctx->r2, -0X3);
    // 0x00458AA0: bne         $v1, $zero, L_00458BFC
    if (ctx->r3 != 0) {
        // 0x00458AA4: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_00458BFC;
    }
    // 0x00458AA4: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x00458AA8: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x00458AAC: lw          $v0, 0x990($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X990);
    // 0x00458AB0: beq         $v0, $zero, L_00458AC8
    if (ctx->r2 == 0) {
        // 0x00458AB4: addiu       $a2, $sp, 0x48
        ctx->r6 = ADD32(ctx->r29, 0X48);
            goto L_00458AC8;
    }
    // 0x00458AB4: addiu       $a2, $sp, 0x48
    ctx->r6 = ADD32(ctx->r29, 0X48);
    // 0x00458AB8: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x00458ABC: lw          $a0, 0x2028($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X2028);
    // 0x00458AC0: j           L_0041FAD4
    // 0x00458AC4: addiu       $v0, $sp, 0x30
    ctx->r2 = ADD32(ctx->r29, 0X30);
    entry_0041FAD4(rdram, ctx);
    return;
    // 0x00458AC4: addiu       $v0, $sp, 0x30
    ctx->r2 = ADD32(ctx->r29, 0X30);
L_00458AC8:
    // 0x00458AC8: lw          $v0, 0x20($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X20);
    // 0x00458ACC: lb          $a0, 0x4($v0)
    ctx->r4 = MEM_B(ctx->r2, 0X4);
    // 0x00458AD0: addiu       $v0, $sp, 0x30
    ctx->r2 = ADD32(ctx->r29, 0X30);
    // 0x00458AD4: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x00458AD8: addiu       $v0, $sp, 0x4C
    ctx->r2 = ADD32(ctx->r29, 0X4C);
    // 0x00458ADC: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x00458AE0: addiu       $v0, $sp, 0x38
    ctx->r2 = ADD32(ctx->r29, 0X38);
    // 0x00458AE4: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x00458AE8: addiu       $v0, $sp, 0x40
    ctx->r2 = ADD32(ctx->r29, 0X40);
    // 0x00458AEC: addiu       $a3, $sp, 0x20
    ctx->r7 = ADD32(ctx->r29, 0X20);
    // 0x00458AF0: jal         0x00425D94
    // 0x00458AF4: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    func_00425D94(rdram, ctx);
        goto after_0;
    // 0x00458AF4: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    after_0:
    // 0x00458AF8: lw          $v1, 0x48($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X48);
    // 0x00458AFC: beq         $v1, $zero, L_00458B34
    if (ctx->r3 == 0) {
        // 0x00458B00: addiu       $a0, $sp, 0x20
        ctx->r4 = ADD32(ctx->r29, 0X20);
            goto L_00458B34;
    }
    // 0x00458B00: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    // 0x00458B04: bne         $v0, $zero, L_00458B34
    if (ctx->r2 != 0) {
        // 0x00458B08: nop
    
            goto L_00458B34;
    }
    // 0x00458B08: nop

    // 0x00458B0C: jal         0x00426D5C
    // 0x00458B10: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    func_00426D5C(rdram, ctx);
        goto after_1;
    // 0x00458B10: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    after_1:
    // 0x00458B14: beq         $v0, $zero, L_00458B54
    if (ctx->r2 == 0) {
        // 0x00458B18: nop
    
            goto L_00458B54;
    }
    // 0x00458B18: nop

    // 0x00458B1C: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x00458B20: addiu       $a1, $a1, 0x48D4
    ctx->r5 = ADD32(ctx->r5, 0X48D4);
    // 0x00458B24: jal         0x00426D24
    // 0x00458B28: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    entry_00426D24(rdram, ctx);
        goto after_2;
    // 0x00458B28: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    after_2:
    // 0x00458B2C: j           L_0041FB54
    // 0x00458B30: nop

    entry_0041FB54(rdram, ctx);
    return;
    // 0x00458B30: nop

L_00458B34:
    // 0x00458B34: lui         $s0, 0x800B
    ctx->r16 = S32(0X800B << 16);
    // 0x00458B38: addiu       $s0, $s0, 0x48E0
    ctx->r16 = ADD32(ctx->r16, 0X48E0);
    // 0x00458B3C: jal         0x00426D24
    // 0x00458B40: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    entry_00426D24(rdram, ctx);
        goto after_3;
    // 0x00458B40: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_3:
    // 0x00458B44: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    // 0x00458B48: jal         0x00426D24
    // 0x00458B4C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    entry_00426D24(rdram, ctx);
        goto after_4;
    // 0x00458B4C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_4:
    // 0x00458B50: sw          $zero, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = 0;
L_00458B54:
    // 0x00458B54: lw          $a0, 0x14($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X14);
    // 0x00458B58: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x00458B5C: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
    // 0x00458B60: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    // 0x00458B64: addiu       $a0, $a0, 0x3
    ctx->r4 = ADD32(ctx->r4, 0X3);
L_00458B68:
    // 0x00458B68: beq         $a1, $zero, L_00458B74
    if (ctx->r5 == 0) {
        // 0x00458B6C: addu        $v0, $a2, $v1
        ctx->r2 = ADD32(ctx->r6, ctx->r3);
            goto L_00458B74;
    }
    // 0x00458B6C: addu        $v0, $a2, $v1
    ctx->r2 = ADD32(ctx->r6, ctx->r3);
    // 0x00458B70: lbu         $s1, 0x0($v0)
    ctx->r17 = MEM_BU(ctx->r2, 0X0);
L_00458B74:
    // 0x00458B74: bnel        $s1, $zero, L_00458B88
    if (ctx->r17 != 0) {
        // 0x00458B78: sb          $s1, 0x0($a0)
        MEM_B(0X0, ctx->r4) = ctx->r17;
            goto L_00458B88;
    }
    goto skip_0;
    // 0x00458B78: sb          $s1, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r17;
    skip_0:
    // 0x00458B7C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x00458B80: addiu       $s1, $zero, 0x20
    ctx->r17 = ADD32(0, 0X20);
    // 0x00458B84: sb          $s1, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r17;
L_00458B88:
    // 0x00458B88: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x00458B8C: slti        $v0, $v1, 0x10
    ctx->r2 = SIGNED(ctx->r3) < 0X10 ? 1 : 0;
    // 0x00458B90: bne         $v0, $zero, L_00458B68
    if (ctx->r2 != 0) {
        // 0x00458B94: addiu       $a0, $a0, 0x1
        ctx->r4 = ADD32(ctx->r4, 0X1);
            goto L_00458B68;
    }
    // 0x00458B94: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x00458B98: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x00458B9C: addu        $a0, $a0, $a1
    ctx->r4 = ADD32(ctx->r4, ctx->r5);
    // 0x00458BA0: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
    // 0x00458BA4: addiu       $a2, $sp, 0x30
    ctx->r6 = ADD32(ctx->r29, 0X30);
L_00458BA8:
    // 0x00458BA8: beq         $a1, $zero, L_00458BB4
    if (ctx->r5 == 0) {
        // 0x00458BAC: addu        $v0, $a2, $v1
        ctx->r2 = ADD32(ctx->r6, ctx->r3);
            goto L_00458BB4;
    }
    // 0x00458BAC: addu        $v0, $a2, $v1
    ctx->r2 = ADD32(ctx->r6, ctx->r3);
    // 0x00458BB0: lbu         $s1, 0x0($v0)
    ctx->r17 = MEM_BU(ctx->r2, 0X0);
L_00458BB4:
    // 0x00458BB4: bnel        $s1, $zero, L_00458BC8
    if (ctx->r17 != 0) {
        // 0x00458BB8: sb          $s1, 0x0($a0)
        MEM_B(0X0, ctx->r4) = ctx->r17;
            goto L_00458BC8;
    }
    goto skip_1;
    // 0x00458BB8: sb          $s1, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r17;
    skip_1:
    // 0x00458BBC: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x00458BC0: addiu       $s1, $zero, 0x20
    ctx->r17 = ADD32(0, 0X20);
    // 0x00458BC4: sb          $s1, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r17;
L_00458BC8:
    // 0x00458BC8: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x00458BCC: slti        $v0, $v1, 0x4
    ctx->r2 = SIGNED(ctx->r3) < 0X4 ? 1 : 0;
    // 0x00458BD0: bne         $v0, $zero, L_00458BA8
    if (ctx->r2 != 0) {
        // 0x00458BD4: addiu       $a0, $a0, 0x1
        ctx->r4 = ADD32(ctx->r4, 0X1);
            goto L_00458BA8;
    }
    // 0x00458BD4: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x00458BD8: lbu         $v0, 0x0($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X0);
    // 0x00458BDC: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
    // 0x00458BE0: sb          $v0, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r2;
    // 0x00458BE4: lw          $a2, 0x4C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X4C);
    // 0x00458BE8: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x00458BEC: addiu       $a1, $a1, 0x1404
    ctx->r5 = ADD32(ctx->r5, 0X1404);
    // 0x00458BF0: jal         0x0029E3E0
    // 0x00458BF4: nop

    func_0029E3E0(rdram, ctx);
        goto after_5;
    // 0x00458BF4: nop

    after_5:
    // 0x00458BF8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_00458BFC:
    // 0x00458BFC: lw          $ra, 0x5C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X5C);
    // 0x00458C00: lw          $s2, 0x58($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X58);
    // 0x00458C04: lw          $s1, 0x54($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X54);
    // 0x00458C08: lw          $s0, 0x50($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X50);
    // 0x00458C0C: jr          $ra
    // 0x00458C10: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    return;
    // 0x00458C10: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
;}
RECOMP_FUNC void func_0045FF6C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0045FF6C: addu        $a3, $a0, $zero
    ctx->r7 = ADD32(ctx->r4, 0);
L_0045FF70:
    // 0x0045FF70: lbu         $v0, 0x0($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X0);
    // 0x0045FF74: bne         $v0, $zero, L_0045FF70
    if (ctx->r2 != 0) {
        // 0x0045FF78: addiu       $a0, $a0, 0x1
        ctx->r4 = ADD32(ctx->r4, 0X1);
            goto L_0045FF70;
    }
    // 0x0045FF78: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x0045FF7C: addiu       $a0, $a0, -0x1
    ctx->r4 = ADD32(ctx->r4, -0X1);
    // 0x0045FF80: beq         $a0, $a3, L_0045FFA4
    if (ctx->r4 == ctx->r7) {
        // 0x0045FF84: addu        $v0, $a0, $zero
        ctx->r2 = ADD32(ctx->r4, 0);
            goto L_0045FFA4;
    }
    // 0x0045FF84: addu        $v0, $a0, $zero
    ctx->r2 = ADD32(ctx->r4, 0);
    // 0x0045FF88: andi        $a2, $a1, 0xFF
    ctx->r6 = ctx->r5 & 0XFF;
L_0045FF8C:
    // 0x0045FF8C: lbu         $v0, 0x0($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X0);
    // 0x0045FF90: beq         $v0, $a2, L_0045FFA4
    if (ctx->r2 == ctx->r6) {
        // 0x0045FF94: addu        $v0, $a0, $zero
        ctx->r2 = ADD32(ctx->r4, 0);
            goto L_0045FFA4;
    }
    // 0x0045FF94: addu        $v0, $a0, $zero
    ctx->r2 = ADD32(ctx->r4, 0);
    // 0x0045FF98: addiu       $a0, $a0, -0x1
    ctx->r4 = ADD32(ctx->r4, -0X1);
    // 0x0045FF9C: bne         $a0, $a3, L_0045FF8C
    if (ctx->r4 != ctx->r7) {
        // 0x0045FFA0: addu        $v0, $a0, $zero
        ctx->r2 = ADD32(ctx->r4, 0);
            goto L_0045FF8C;
    }
    // 0x0045FFA0: addu        $v0, $a0, $zero
    ctx->r2 = ADD32(ctx->r4, 0);
L_0045FFA4:
    // 0x0045FFA4: lbu         $a0, 0x0($v0)
    ctx->r4 = MEM_BU(ctx->r2, 0X0);
    // 0x0045FFA8: andi        $v1, $a1, 0xFF
    ctx->r3 = ctx->r5 & 0XFF;
    // 0x0045FFAC: bnel        $a0, $v1, L_0045FFB4
    if (ctx->r4 != ctx->r3) {
        // 0x0045FFB0: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_0045FFB4;
    }
    goto skip_0;
    // 0x0045FFB0: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    skip_0:
L_0045FFB4:
    // 0x0045FFB4: jr          $ra
    // 0x0045FFB8: nop

    return;
    // 0x0045FFB8: nop

;}
RECOMP_FUNC void func_004455DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004455DC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x004455E0: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x004455E4: addiu       $v0, $v0, -0x490
    ctx->r2 = ADD32(ctx->r2, -0X490);
    // 0x004455E8: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x004455EC: addu        $s3, $v0, $zero
    ctx->r19 = ADD32(ctx->r2, 0);
    // 0x004455F0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x004455F4: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x004455F8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x004455FC: addiu       $s1, $zero, 0x18
    ctx->r17 = ADD32(0, 0X18);
    // 0x00445600: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x00445604: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x00445608: lw          $s2, 0x660($v0)
    ctx->r18 = MEM_W(ctx->r2, 0X660);
L_0044560C:
    // 0x0044560C: srav        $v0, $s2, $s0
    ctx->r2 = S32(SIGNED(ctx->r18) >> (ctx->r16 & 31));
    // 0x00445610: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x00445614: beql        $v0, $zero, L_00445634
    if (ctx->r2 == 0) {
        // 0x00445618: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_00445634;
    }
    goto skip_0;
    // 0x00445618: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    skip_0:
    // 0x0044561C: addu        $a0, $s3, $s1
    ctx->r4 = ADD32(ctx->r19, ctx->r17);
    // 0x00445620: lui         $a1, 0x43
    ctx->r5 = S32(0X43 << 16);
    // 0x00445624: addiu       $a1, $a1, 0x1E04
    ctx->r5 = ADD32(ctx->r5, 0X1E04);
    // 0x00445628: jal         0x00236314
    // 0x0044562C: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    func_00236314(rdram, ctx);
        goto after_0;
    // 0x0044562C: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    after_0:
    // 0x00445630: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_00445634:
    // 0x00445634: slti        $v0, $s0, 0xF
    ctx->r2 = SIGNED(ctx->r16) < 0XF ? 1 : 0;
    // 0x00445638: bne         $v0, $zero, L_0044560C
    if (ctx->r2 != 0) {
        // 0x0044563C: addiu       $s1, $s1, 0x68
        ctx->r17 = ADD32(ctx->r17, 0X68);
            goto L_0044560C;
    }
    // 0x0044563C: addiu       $s1, $s1, 0x68
    ctx->r17 = ADD32(ctx->r17, 0X68);
    // 0x00445640: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x00445644: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x00445648: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x0044564C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00445650: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00445654: jr          $ra
    // 0x00445658: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x00445658: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_00257634(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00257634: addiu       $sp, $sp, -0x10
    ctx->r29 = ADD32(ctx->r29, -0X10);
    // 0x00257638: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x0025763C: jr          $ra
    // 0x00257640: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
    return;
    // 0x00257640: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
;}
RECOMP_FUNC void func_0041C524(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041C524: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x0041C528: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x0041C52C: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x0041C530: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0041C534: lw          $v0, 0x1C($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X1C);
    // 0x0041C538: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x0041C53C: addiu       $v1, $v1, -0x54E8
    ctx->r3 = ADD32(ctx->r3, -0X54E8);
    // 0x0041C540: beq         $v0, $zero, L_0041C554
    if (ctx->r2 == 0) {
        // 0x0041C544: addu        $s1, $a0, $zero
        ctx->r17 = ADD32(ctx->r4, 0);
            goto L_0041C554;
    }
    // 0x0041C544: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x0041C548: lw          $v0, 0x518($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X518);
    // 0x0041C54C: bnel        $v0, $zero, L_0041C554
    if (ctx->r2 != 0) {
        // 0x0041C550: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_0041C554;
    }
    goto skip_0;
    // 0x0041C550: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    skip_0:
L_0041C554:
    // 0x0041C554: lbu         $v0, 0x29($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X29);
    // 0x0041C558: addiu       $a2, $v0, -0x80
    ctx->r6 = ADD32(ctx->r2, -0X80);
    // 0x0041C55C: bltzl       $a2, L_0041C564
    if (SIGNED(ctx->r6) < 0) {
        // 0x0041C560: addiu       $a2, $v0, -0x79
        ctx->r6 = ADD32(ctx->r2, -0X79);
            goto L_0041C564;
    }
    goto skip_1;
    // 0x0041C560: addiu       $a2, $v0, -0x79
    ctx->r6 = ADD32(ctx->r2, -0X79);
    skip_1:
L_0041C564:
    // 0x0041C564: sra         $s0, $a2, 3
    ctx->r16 = S32(SIGNED(ctx->r6) >> 3);
    // 0x0041C568: bne         $s0, $zero, L_0041C580
    if (ctx->r16 != 0) {
        // 0x0041C56C: nop
    
            goto L_0041C580;
    }
    // 0x0041C56C: nop

    // 0x0041C570: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0041C574: addiu       $v0, $v0, 0x4050
    ctx->r2 = ADD32(ctx->r2, 0X4050);
    // 0x0041C578: j           L_0041C5D4
    // 0x0041C57C: sw          $v0, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r2;
        goto L_0041C5D4;
    // 0x0041C57C: sw          $v0, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r2;
L_0041C580:
    // 0x0041C580: blez        $s0, L_0041C5A8
    if (SIGNED(ctx->r16) <= 0) {
        // 0x0041C584: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_0041C5A8;
    }
    // 0x0041C584: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0041C588: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0041C58C: addiu       $v0, $v0, 0x4068
    ctx->r2 = ADD32(ctx->r2, 0X4068);
    // 0x0041C590: jal         0x004160F0
    // 0x0041C594: sw          $v0, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r2;
    func_004160F0(rdram, ctx);
        goto after_0;
    // 0x0041C594: sw          $v0, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r2;
    after_0:
    // 0x0041C598: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x0041C59C: addiu       $a1, $a1, 0x1318
    ctx->r5 = ADD32(ctx->r5, 0X1318);
    // 0x0041C5A0: j           L_0041C5C4
    // 0x0041C5A4: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
        goto L_0041C5C4;
    // 0x0041C5A4: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
L_0041C5A8:
    // 0x0041C5A8: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0041C5AC: addiu       $v0, $v0, 0x4068
    ctx->r2 = ADD32(ctx->r2, 0X4068);
    // 0x0041C5B0: jal         0x004160F0
    // 0x0041C5B4: sw          $v0, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r2;
    func_004160F0(rdram, ctx);
        goto after_1;
    // 0x0041C5B4: sw          $v0, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r2;
    after_1:
    // 0x0041C5B8: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x0041C5BC: addiu       $a1, $a1, 0x1320
    ctx->r5 = ADD32(ctx->r5, 0X1320);
    // 0x0041C5C0: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
L_0041C5C4:
    // 0x0041C5C4: lw          $a0, 0x14($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X14);
    // 0x0041C5C8: addiu       $v0, $v0, -0x4
    ctx->r2 = ADD32(ctx->r2, -0X4);
    // 0x0041C5CC: jal         0x0029E3E0
    // 0x0041C5D0: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    func_0029E3E0(rdram, ctx);
        goto after_2;
    // 0x0041C5D0: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    after_2:
L_0041C5D4:
    // 0x0041C5D4: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x0041C5D8: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x0041C5DC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0041C5E0: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x0041C5E4: jr          $ra
    // 0x0041C5E8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x0041C5E8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_00454504(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_0041B534:
    // 0x00454504: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
L_0041B568:
    // 0x00454508: lw          $v0, -0x5524($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X5524);
    // 0x0045450C: andi        $v0, $v0, 0x80
    ctx->r2 = ctx->r2 & 0X80;
    // 0x00454510: beq         $v0, $zero, L_00454524
    if (ctx->r2 == 0) {
        // 0x00454514: lui         $v1, 0x100
        ctx->r3 = S32(0X100 << 16);
            goto L_00454524;
    }
    // 0x00454514: lui         $v1, 0x100
    ctx->r3 = S32(0X100 << 16);
    // 0x00454518: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x0045451C: j           L_0041B534
    // 0x00454520: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    entry_0041B534(rdram, ctx);
    return;
    // 0x00454520: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
L_00454524:
    // 0x00454524: lui         $v1, 0xFEFF
    ctx->r3 = S32(0XFEFF << 16);
    // 0x00454528: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x0045452C: ori         $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 | 0XFFFF;
    // 0x00454530: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x00454534: sw          $v0, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r2;
    // 0x00454538: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x0045453C: lw          $v0, -0x5528($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X5528);
    // 0x00454540: andi        $v0, $v0, 0x80
    ctx->r2 = ctx->r2 & 0X80;
    // 0x00454544: beq         $v0, $zero, L_0045455C
    if (ctx->r2 == 0) {
        // 0x00454548: nop
    
            goto L_0045455C;
    }
    // 0x00454548: nop

    // 0x0045454C: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00454550: addiu       $v0, $v0, 0x5934
    ctx->r2 = ADD32(ctx->r2, 0X5934);
    // 0x00454554: j           L_0041B568
    // 0x00454558: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    entry_0041B568(rdram, ctx);
    return;
    // 0x00454558: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_0045455C:
    // 0x0045455C: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00454560: addiu       $v0, $v0, 0x5950
    ctx->r2 = ADD32(ctx->r2, 0X5950);
    // 0x00454564: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    // 0x00454568: jr          $ra
    // 0x0045456C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x0045456C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void func_0020367C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0020367C: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x00203680: sw          $s4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r20;
    // 0x00203684: lw          $s4, 0x64($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X64);
    // 0x00203688: sw          $s6, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r22;
    // 0x0020368C: lw          $s6, 0x5C($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X5C);
    // 0x00203690: sw          $s3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r19;
    // 0x00203694: addu        $s3, $a1, $zero
    ctx->r19 = ADD32(ctx->r5, 0);
    // 0x00203698: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x0020369C: addu        $s2, $a2, $zero
    ctx->r18 = ADD32(ctx->r6, 0);
    // 0x002036A0: sw          $s5, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r21;
    // 0x002036A4: addu        $s5, $a3, $zero
    ctx->r21 = ADD32(ctx->r7, 0);
    // 0x002036A8: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x002036AC: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x002036B0: jal         0x0029DFF0
    // 0x002036B4: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    func_0029DFF0(rdram, ctx);
        goto after_0;
    // 0x002036B4: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    after_0:
    // 0x002036B8: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x002036BC: lui         $v1, 0x800E
    ctx->r3 = S32(0X800E << 16);
    // 0x002036C0: lw          $v1, -0x7234($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X7234);
    // 0x002036C4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x002036C8: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x002036CC: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x002036D0: sw          $v1, -0x7234($at)
    MEM_W(-0X7234, ctx->r1) = ctx->r3;
    // 0x002036D4: beq         $v1, $v0, L_00203700
    if (ctx->r3 == ctx->r2) {
        // 0x002036D8: nop
    
            goto L_00203700;
    }
    // 0x002036D8: nop

    // 0x002036DC: jal         0x0029E010
    // 0x002036E0: nop

    func_0029E010(rdram, ctx);
        goto after_1;
    // 0x002036E0: nop

    after_1:
    // 0x002036E4: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x002036E8: addiu       $a0, $a0, -0x7250
    ctx->r4 = ADD32(ctx->r4, -0X7250);
    // 0x002036EC: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x002036F0: jal         0x0029B6F0
    // 0x002036F4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osRecvMesg_recomp(rdram, ctx);
        goto after_2;
    // 0x002036F4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_2:
    // 0x002036F8: j           L_0020370C
    // 0x002036FC: sll         $v0, $s3, 5
    ctx->r2 = S32(ctx->r19 << 5);
        goto L_0020370C;
    // 0x002036FC: sll         $v0, $s3, 5
    ctx->r2 = S32(ctx->r19 << 5);
L_00203700:
    // 0x00203700: jal         0x0029E010
    // 0x00203704: nop

    func_0029E010(rdram, ctx);
        goto after_3;
    // 0x00203704: nop

    after_3:
    // 0x00203708: sll         $v0, $s3, 5
    ctx->r2 = S32(ctx->r19 << 5);
L_0020370C:
    // 0x0020370C: srl         $v1, $s3, 1
    ctx->r3 = S32(U32(ctx->r19) >> 1);
    // 0x00203710: xor         $v0, $v0, $v1
    ctx->r2 = ctx->r2 ^ ctx->r3;
    // 0x00203714: srl         $v1, $s3, 9
    ctx->r3 = S32(U32(ctx->r19) >> 9);
    // 0x00203718: xor         $v0, $v0, $v1
    ctx->r2 = ctx->r2 ^ ctx->r3;
    // 0x0020371C: srl         $v1, $s3, 17
    ctx->r3 = S32(U32(ctx->r19) >> 17);
    // 0x00203720: xor         $v0, $v0, $v1
    ctx->r2 = ctx->r2 ^ ctx->r3;
    // 0x00203724: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x00203728: lw          $a0, -0x7E40($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X7E40);
    // 0x0020372C: lui         $v1, 0x800E
    ctx->r3 = S32(0X800E << 16);
    // 0x00203730: lw          $v1, -0x7E3C($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X7E3C);
    // 0x00203734: and         $v0, $v0, $a0
    ctx->r2 = ctx->r2 & ctx->r4;
    // 0x00203738: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x0020373C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x00203740: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x00203744: bne         $v0, $s3, L_00203764
    if (ctx->r2 != ctx->r19) {
        // 0x00203748: addiu       $a0, $sp, 0x20
        ctx->r4 = ADD32(ctx->r29, 0X20);
            goto L_00203764;
    }
    // 0x00203748: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    // 0x0020374C: lw          $v0, 0x4($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X4);
    // 0x00203750: j           L_00203784
    // 0x00203754: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
        goto L_00203784;
    // 0x00203754: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
L_00203758:
    // 0x00203758: lw          $v0, 0x4($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X4);
    // 0x0020375C: j           L_00203784
    // 0x00203760: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
        goto L_00203784;
    // 0x00203760: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
L_00203764:
    // 0x00203764: beq         $v1, $zero, L_00203784
    if (ctx->r3 == 0) {
        // 0x00203768: sw          $zero, 0x20($sp)
        MEM_W(0X20, ctx->r29) = 0;
            goto L_00203784;
    }
    // 0x00203768: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
L_0020376C:
    // 0x0020376C: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x00203770: beq         $v0, $s3, L_00203758
    if (ctx->r2 == ctx->r19) {
        // 0x00203774: nop
    
            goto L_00203758;
    }
    // 0x00203774: nop

    // 0x00203778: lw          $v1, 0xC($v1)
    ctx->r3 = MEM_W(ctx->r3, 0XC);
    // 0x0020377C: bne         $v1, $zero, L_0020376C
    if (ctx->r3 != 0) {
        // 0x00203780: nop
    
            goto L_0020376C;
    }
    // 0x00203780: nop

L_00203784:
    // 0x00203784: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    // 0x00203788: beq         $a2, $zero, L_00203838
    if (ctx->r6 == 0) {
        // 0x0020378C: nop
    
            goto L_00203838;
    }
    // 0x0020378C: nop

    // 0x00203790: lw          $v0, 0xC($a2)
    ctx->r2 = MEM_W(ctx->r6, 0XC);
    // 0x00203794: sltu        $v0, $s2, $v0
    ctx->r2 = ctx->r18 < ctx->r2 ? 1 : 0;
    // 0x00203798: bne         $v0, $zero, L_00203838
    if (ctx->r2 != 0) {
        // 0x0020379C: nop
    
            goto L_00203838;
    }
    // 0x0020379C: nop

    // 0x002037A0: lw          $a1, 0x0($a2)
    ctx->r5 = MEM_W(ctx->r6, 0X0);
    // 0x002037A4: lw          $v0, 0x8($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X8);
    // 0x002037A8: lw          $v1, 0xC($a1)
    ctx->r3 = MEM_W(ctx->r5, 0XC);
    // 0x002037AC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x002037B0: ori         $v1, $v1, 0x100
    ctx->r3 = ctx->r3 | 0X100;
    // 0x002037B4: sw          $v0, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->r2;
    // 0x002037B8: sw          $v1, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->r3;
    // 0x002037BC: lw          $a1, 0x0($a2)
    ctx->r5 = MEM_W(ctx->r6, 0X0);
    // 0x002037C0: lui         $v0, 0x800E
    ctx->r2 = S32(0X800E << 16);
    // 0x002037C4: lw          $v0, -0x7210($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X7210);
    // 0x002037C8: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x002037CC: addiu       $a0, $a0, -0x7E20
    ctx->r4 = ADD32(ctx->r4, -0X7E20);
    // 0x002037D0: jal         0x00200818
    // 0x002037D4: sw          $v0, 0x10($a1)
    MEM_W(0X10, ctx->r5) = ctx->r2;
    func_00200818(rdram, ctx);
        goto after_4;
    // 0x002037D4: sw          $v0, 0x10($a1)
    MEM_W(0X10, ctx->r5) = ctx->r2;
    after_4:
    // 0x002037D8: jal         0x0029DFF0
    // 0x002037DC: nop

    func_0029DFF0(rdram, ctx);
        goto after_5;
    // 0x002037DC: nop

    after_5:
    // 0x002037E0: lui         $v1, 0x800E
    ctx->r3 = S32(0X800E << 16);
    // 0x002037E4: lw          $v1, -0x7234($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X7234);
    // 0x002037E8: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x002037EC: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x002037F0: sw          $v1, -0x7234($at)
    MEM_W(-0X7234, ctx->r1) = ctx->r3;
    // 0x002037F4: beq         $v1, $zero, L_00203820
    if (ctx->r3 == 0) {
        // 0x002037F8: nop
    
            goto L_00203820;
    }
    // 0x002037F8: nop

    // 0x002037FC: jal         0x0029E010
    // 0x00203800: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    func_0029E010(rdram, ctx);
        goto after_6;
    // 0x00203800: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    after_6:
    // 0x00203804: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x00203808: addiu       $a0, $a0, -0x7250
    ctx->r4 = ADD32(ctx->r4, -0X7250);
    // 0x0020380C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x00203810: jal         0x0029B820
    // 0x00203814: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osSendMesg_recomp(rdram, ctx);
        goto after_7;
    // 0x00203814: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_7:
    // 0x00203818: j           L_00203828
    // 0x0020381C: nop

        goto L_00203828;
    // 0x0020381C: nop

L_00203820:
    // 0x00203820: jal         0x0029E010
    // 0x00203824: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    func_0029E010(rdram, ctx);
        goto after_8;
    // 0x00203824: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    after_8:
L_00203828:
    // 0x00203828: lw          $v0, 0x20($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X20);
    // 0x0020382C: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x00203830: j           L_00203C78
    // 0x00203834: nop

        goto L_00203C78;
    // 0x00203834: nop

L_00203838:
    // 0x00203838: lui         $v1, 0x800E
    ctx->r3 = S32(0X800E << 16);
    // 0x0020383C: addiu       $v1, $v1, -0x7214
    ctx->r3 = ADD32(ctx->r3, -0X7214);
    // 0x00203840: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x00203844: or          $s4, $s4, $v0
    ctx->r20 = ctx->r20 | ctx->r2;
    // 0x00203848: bne         $s4, $zero, L_00203894
    if (ctx->r20 != 0) {
        // 0x0020384C: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_00203894;
    }
    // 0x0020384C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x00203850: lw          $v1, -0x5C($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X5C);
    // 0x00203854: beq         $v1, $zero, L_00203884
    if (ctx->r3 == 0) {
        // 0x00203858: nop
    
            goto L_00203884;
    }
    // 0x00203858: nop

L_0020385C:
    // 0x0020385C: lw          $v0, 0x8($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X8);
    // 0x00203860: bne         $v0, $s3, L_00203878
    if (ctx->r2 != ctx->r19) {
        // 0x00203864: nop
    
            goto L_00203878;
    }
    // 0x00203864: nop

    // 0x00203868: lw          $v0, 0xC($v1)
    ctx->r2 = MEM_W(ctx->r3, 0XC);
    // 0x0020386C: sltu        $v0, $v0, $s2
    ctx->r2 = ctx->r2 < ctx->r18 ? 1 : 0;
    // 0x00203870: beql        $v0, $zero, L_00203884
    if (ctx->r2 == 0) {
        // 0x00203874: addiu       $a0, $zero, 0x1
        ctx->r4 = ADD32(0, 0X1);
            goto L_00203884;
    }
    goto skip_0;
    // 0x00203874: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    skip_0:
L_00203878:
    // 0x00203878: lw          $v1, 0x24($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X24);
    // 0x0020387C: bne         $v1, $zero, L_0020385C
    if (ctx->r3 != 0) {
        // 0x00203880: nop
    
            goto L_0020385C;
    }
    // 0x00203880: nop

L_00203884:
    // 0x00203884: bnel        $s4, $zero, L_00203894
    if (ctx->r20 != 0) {
        // 0x00203888: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_00203894;
    }
    goto skip_1;
    // 0x00203888: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    skip_1:
    // 0x0020388C: bne         $a0, $zero, L_00203C24
    if (ctx->r4 != 0) {
        // 0x00203890: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_00203C24;
    }
    // 0x00203890: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
L_00203894:
    // 0x00203894: jal         0x002066F8
    // 0x00203898: addu        $a1, $s5, $zero
    ctx->r5 = ADD32(ctx->r21, 0);
    func_002066F8(rdram, ctx);
        goto after_9;
    // 0x00203898: addu        $a1, $s5, $zero
    ctx->r5 = ADD32(ctx->r21, 0);
    after_9:
    // 0x0020389C: beq         $v0, $zero, L_00203C24
    if (ctx->r2 == 0) {
        // 0x002038A0: sw          $v0, 0x20($sp)
        MEM_W(0X20, ctx->r29) = ctx->r2;
            goto L_00203C24;
    }
    // 0x002038A0: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x002038A4: beq         $s6, $zero, L_002038B4
    if (ctx->r22 == 0) {
        // 0x002038A8: andi        $v0, $s5, 0x1C
        ctx->r2 = ctx->r21 & 0X1C;
            goto L_002038B4;
    }
    // 0x002038A8: andi        $v0, $s5, 0x1C
    ctx->r2 = ctx->r21 & 0X1C;
    // 0x002038AC: j           L_002038B8
    // 0x002038B0: ori         $s1, $v0, 0x22
    ctx->r17 = ctx->r2 | 0X22;
        goto L_002038B8;
    // 0x002038B0: ori         $s1, $v0, 0x22
    ctx->r17 = ctx->r2 | 0X22;
L_002038B4:
    // 0x002038B4: addu        $s1, $s5, $zero
    ctx->r17 = ADD32(ctx->r21, 0);
L_002038B8:
    // 0x002038B8: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x002038BC: lw          $v0, 0x20($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X20);
    // 0x002038C0: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x002038C4: jal         0x002031E8
    // 0x002038C8: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    func_002031E8(rdram, ctx);
        goto after_10;
    // 0x002038C8: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    after_10:
    // 0x002038CC: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x002038D0: beq         $s0, $zero, L_00203960
    if (ctx->r16 == 0) {
        // 0x002038D4: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_00203960;
    }
    // 0x002038D4: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x002038D8: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x002038DC: srl         $a2, $s1, 5
    ctx->r6 = S32(U32(ctx->r17) >> 5);
    // 0x002038E0: andi        $a2, $a2, 0x1
    ctx->r6 = ctx->r6 & 0X1;
    // 0x002038E4: addu        $a3, $s1, $zero
    ctx->r7 = ADD32(ctx->r17, 0);
    // 0x002038E8: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
    // 0x002038EC: lw          $v1, 0xC($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XC);
    // 0x002038F0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x002038F4: ori         $v1, $v1, 0x100
    ctx->r3 = ctx->r3 | 0X100;
    // 0x002038F8: sw          $v0, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r2;
    // 0x002038FC: jal         0x002063B4
    // 0x00203900: sw          $v1, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r3;
    func_002063B4(rdram, ctx);
        goto after_11;
    // 0x00203900: sw          $v1, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r3;
    after_11:
    // 0x00203904: beq         $v0, $zero, L_00203930
    if (ctx->r2 == 0) {
        // 0x00203908: sw          $v0, 0x0($s0)
        MEM_W(0X0, ctx->r16) = ctx->r2;
            goto L_00203930;
    }
    // 0x00203908: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x0020390C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x00203910: lw          $v0, 0xC($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC);
    // 0x00203914: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x00203918: sw          $s2, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r18;
    // 0x0020391C: or          $v0, $v0, $s1
    ctx->r2 = ctx->r2 | ctx->r17;
    // 0x00203920: jal         0x00206498
    // 0x00203924: sw          $v0, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r2;
    func_00206498(rdram, ctx);
        goto after_12;
    // 0x00203924: sw          $v0, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r2;
    after_12:
    // 0x00203928: j           L_00203960
    // 0x0020392C: nop

        goto L_00203960;
    // 0x0020392C: nop

L_00203930:
    // 0x00203930: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
    // 0x00203934: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x00203938: bne         $v0, $zero, L_00203950
    if (ctx->r2 != 0) {
        // 0x0020393C: sw          $v0, 0x8($s0)
        MEM_W(0X8, ctx->r16) = ctx->r2;
            goto L_00203950;
    }
    // 0x0020393C: sw          $v0, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r2;
    // 0x00203940: lw          $v0, 0xC($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC);
    // 0x00203944: addiu       $v1, $zero, -0x101
    ctx->r3 = ADD32(0, -0X101);
    // 0x00203948: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x0020394C: sw          $v0, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r2;
L_00203950:
    // 0x00203950: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x00203954: jal         0x002062F8
    // 0x00203958: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_002062F8(rdram, ctx);
        goto after_13;
    // 0x00203958: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_13:
    // 0x0020395C: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
L_00203960:
    // 0x00203960: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x00203964: addu        $v1, $a1, $zero
    ctx->r3 = ADD32(ctx->r5, 0);
    // 0x00203968: beq         $s0, $zero, L_00203C1C
    if (ctx->r16 == 0) {
        // 0x0020396C: sw          $s0, 0x0($a1)
        MEM_W(0X0, ctx->r5) = ctx->r16;
            goto L_00203C1C;
    }
    // 0x0020396C: sw          $s0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r16;
    // 0x00203970: andi        $v0, $s2, 0x1
    ctx->r2 = ctx->r18 & 0X1;
    // 0x00203974: bnel        $v0, $zero, L_0020397C
    if (ctx->r2 != 0) {
        // 0x00203978: addiu       $s2, $s2, 0x1
        ctx->r18 = ADD32(ctx->r18, 0X1);
            goto L_0020397C;
    }
    goto skip_2;
    // 0x00203978: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    skip_2:
L_0020397C:
    // 0x0020397C: lui         $s0, 0x800E
    ctx->r16 = S32(0X800E << 16);
    // 0x00203980: addiu       $s0, $s0, -0x7284
    ctx->r16 = ADD32(ctx->r16, -0X7284);
    // 0x00203984: addu        $a1, $v1, $zero
    ctx->r5 = ADD32(ctx->r3, 0);
    // 0x00203988: sw          $s3, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->r19;
    // 0x0020398C: sw          $s2, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->r18;
    // 0x00203990: lw          $v0, 0x58($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X58);
    // 0x00203994: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00203998: sw          $s6, 0x14($a1)
    MEM_W(0X14, ctx->r5) = ctx->r22;
    // 0x0020399C: sw          $s5, 0x1C($a1)
    MEM_W(0X1C, ctx->r5) = ctx->r21;
    // 0x002039A0: jal         0x00200738
    // 0x002039A4: sw          $v0, 0x18($a1)
    MEM_W(0X18, ctx->r5) = ctx->r2;
    func_00200738(rdram, ctx);
        goto after_14;
    // 0x002039A4: sw          $v0, 0x18($a1)
    MEM_W(0X18, ctx->r5) = ctx->r2;
    after_14:
    // 0x002039A8: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x002039AC: jal         0x00200574
    // 0x002039B0: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    func_00200574(rdram, ctx);
        goto after_15;
    // 0x002039B0: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    after_15:
    // 0x002039B4: beq         $s4, $zero, L_00203B78
    if (ctx->r20 == 0) {
        // 0x002039B8: nop
    
            goto L_00203B78;
    }
    // 0x002039B8: nop

    // 0x002039BC: beq         $s6, $zero, L_002039D4
    if (ctx->r22 == 0) {
        // 0x002039C0: nop
    
            goto L_002039D4;
    }
    // 0x002039C0: nop

    // 0x002039C4: lw          $v1, 0x20($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X20);
    // 0x002039C8: lw          $v0, 0x10($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X10);
    // 0x002039CC: ori         $v0, $v0, 0x4
    ctx->r2 = ctx->r2 | 0X4;
    // 0x002039D0: sw          $v0, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->r2;
L_002039D4:
    // 0x002039D4: jal         0x0029DFF0
    // 0x002039D8: nop

    func_0029DFF0(rdram, ctx);
        goto after_16;
    // 0x002039D8: nop

    after_16:
    // 0x002039DC: lui         $v1, 0x800E
    ctx->r3 = S32(0X800E << 16);
    // 0x002039E0: lw          $v1, -0x7234($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X7234);
    // 0x002039E4: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x002039E8: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x002039EC: sw          $v1, -0x7234($at)
    MEM_W(-0X7234, ctx->r1) = ctx->r3;
    // 0x002039F0: beq         $v1, $zero, L_00203A18
    if (ctx->r3 == 0) {
        // 0x002039F4: nop
    
            goto L_00203A18;
    }
    // 0x002039F4: nop

    // 0x002039F8: jal         0x0029E010
    // 0x002039FC: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    func_0029E010(rdram, ctx);
        goto after_17;
    // 0x002039FC: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    after_17:
    // 0x00203A00: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x00203A04: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x00203A08: jal         0x0029B820
    // 0x00203A0C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osSendMesg_recomp(rdram, ctx);
        goto after_18;
    // 0x00203A0C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_18:
    // 0x00203A10: j           L_00203A20
    // 0x00203A14: nop

        goto L_00203A20;
    // 0x00203A14: nop

L_00203A18:
    // 0x00203A18: jal         0x0029E010
    // 0x00203A1C: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    func_0029E010(rdram, ctx);
        goto after_19;
    // 0x00203A1C: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    after_19:
L_00203A20:
    // 0x00203A20: lw          $v0, 0x20($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X20);
    // 0x00203A24: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x00203A28: addiu       $a0, $a0, 0x1CD8
    ctx->r4 = ADD32(ctx->r4, 0X1CD8);
    // 0x00203A2C: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x00203A30: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    // 0x00203A34: lw          $a3, 0x0($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X0);
    // 0x00203A38: jal         0x00201DBC
    // 0x00203A3C: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    func_00201DBC(rdram, ctx);
        goto after_20;
    // 0x00203A3C: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    after_20:
    // 0x00203A40: beq         $s6, $zero, L_00203A5C
    if (ctx->r22 == 0) {
        // 0x00203A44: nop
    
            goto L_00203A5C;
    }
    // 0x00203A44: nop

    // 0x00203A48: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x00203A4C: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x00203A50: addiu       $a0, $a0, 0x6D68
    ctx->r4 = ADD32(ctx->r4, 0X6D68);
    // 0x00203A54: jal         0x00201B50
    // 0x00203A58: nop

    func_00201B50(rdram, ctx);
        goto after_21;
    // 0x00203A58: nop

    after_21:
L_00203A5C:
    // 0x00203A5C: jal         0x0029DFF0
    // 0x00203A60: nop

    func_0029DFF0(rdram, ctx);
        goto after_22;
    // 0x00203A60: nop

    after_22:
    // 0x00203A64: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x00203A68: lui         $v1, 0x800E
    ctx->r3 = S32(0X800E << 16);
    // 0x00203A6C: lw          $v1, -0x7234($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X7234);
    // 0x00203A70: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00203A74: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x00203A78: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x00203A7C: sw          $v1, -0x7234($at)
    MEM_W(-0X7234, ctx->r1) = ctx->r3;
    // 0x00203A80: beq         $v1, $v0, L_00203AAC
    if (ctx->r3 == ctx->r2) {
        // 0x00203A84: nop
    
            goto L_00203AAC;
    }
    // 0x00203A84: nop

    // 0x00203A88: jal         0x0029E010
    // 0x00203A8C: nop

    func_0029E010(rdram, ctx);
        goto after_23;
    // 0x00203A8C: nop

    after_23:
    // 0x00203A90: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x00203A94: addiu       $a0, $a0, -0x7250
    ctx->r4 = ADD32(ctx->r4, -0X7250);
    // 0x00203A98: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x00203A9C: jal         0x0029B6F0
    // 0x00203AA0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osRecvMesg_recomp(rdram, ctx);
        goto after_24;
    // 0x00203AA0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_24:
    // 0x00203AA4: j           L_00203AB4
    // 0x00203AA8: nop

        goto L_00203AB4;
    // 0x00203AA8: nop

L_00203AAC:
    // 0x00203AAC: jal         0x0029E010
    // 0x00203AB0: nop

    func_0029E010(rdram, ctx);
        goto after_25;
    // 0x00203AB0: nop

    after_25:
L_00203AB4:
    // 0x00203AB4: beq         $s6, $zero, L_00203ACC
    if (ctx->r22 == 0) {
        // 0x00203AB8: addiu       $a0, $zero, -0x5
        ctx->r4 = ADD32(0, -0X5);
            goto L_00203ACC;
    }
    // 0x00203AB8: addiu       $a0, $zero, -0x5
    ctx->r4 = ADD32(0, -0X5);
    // 0x00203ABC: lw          $v0, 0x20($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X20);
    // 0x00203AC0: lw          $v1, 0x10($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X10);
    // 0x00203AC4: and         $v1, $v1, $a0
    ctx->r3 = ctx->r3 & ctx->r4;
    // 0x00203AC8: sw          $v1, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r3;
L_00203ACC:
    // 0x00203ACC: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x00203AD0: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x00203AD4: jal         0x002044A8
    // 0x00203AD8: addu        $a2, $a0, $zero
    ctx->r6 = ADD32(ctx->r4, 0);
    func_002044A8(rdram, ctx);
        goto after_26;
    // 0x00203AD8: addu        $a2, $a0, $zero
    ctx->r6 = ADD32(ctx->r4, 0);
    after_26:
    // 0x00203ADC: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x00203AE0: beq         $s0, $zero, L_00203B10
    if (ctx->r16 == 0) {
        // 0x00203AE4: nop
    
            goto L_00203B10;
    }
    // 0x00203AE4: nop

    // 0x00203AE8: lw          $v0, 0x20($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X20);
    // 0x00203AEC: beq         $s0, $v0, L_00203B10
    if (ctx->r16 == ctx->r2) {
        // 0x00203AF0: nop
    
            goto L_00203B10;
    }
    // 0x00203AF0: nop

    // 0x00203AF4: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x00203AF8: lw          $v1, 0x8($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X8);
    // 0x00203AFC: lw          $a0, 0xC($v0)
    ctx->r4 = MEM_W(ctx->r2, 0XC);
    // 0x00203B00: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x00203B04: ori         $a0, $a0, 0x100
    ctx->r4 = ctx->r4 | 0X100;
    // 0x00203B08: sw          $v1, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r3;
    // 0x00203B0C: sw          $a0, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r4;
L_00203B10:
    // 0x00203B10: jal         0x0029DFF0
    // 0x00203B14: nop

    func_0029DFF0(rdram, ctx);
        goto after_27;
    // 0x00203B14: nop

    after_27:
    // 0x00203B18: lui         $v1, 0x800E
    ctx->r3 = S32(0X800E << 16);
    // 0x00203B1C: lw          $v1, -0x7234($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X7234);
    // 0x00203B20: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x00203B24: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x00203B28: sw          $v1, -0x7234($at)
    MEM_W(-0X7234, ctx->r1) = ctx->r3;
    // 0x00203B2C: beq         $v1, $zero, L_00203B58
    if (ctx->r3 == 0) {
        // 0x00203B30: nop
    
            goto L_00203B58;
    }
    // 0x00203B30: nop

    // 0x00203B34: jal         0x0029E010
    // 0x00203B38: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    func_0029E010(rdram, ctx);
        goto after_28;
    // 0x00203B38: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    after_28:
    // 0x00203B3C: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x00203B40: addiu       $a0, $a0, -0x7250
    ctx->r4 = ADD32(ctx->r4, -0X7250);
    // 0x00203B44: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x00203B48: jal         0x0029B820
    // 0x00203B4C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osSendMesg_recomp(rdram, ctx);
        goto after_29;
    // 0x00203B4C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_29:
    // 0x00203B50: j           L_00203B64
    // 0x00203B54: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
        goto L_00203B64;
    // 0x00203B54: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_00203B58:
    // 0x00203B58: jal         0x0029E010
    // 0x00203B5C: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    func_0029E010(rdram, ctx);
        goto after_30;
    // 0x00203B5C: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    after_30:
    // 0x00203B60: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_00203B64:
    // 0x00203B64: beq         $s0, $zero, L_00203C78
    if (ctx->r16 == 0) {
        // 0x00203B68: nop
    
            goto L_00203C78;
    }
    // 0x00203B68: nop

    // 0x00203B6C: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x00203B70: j           L_00203C78
    // 0x00203B74: nop

        goto L_00203C78;
    // 0x00203B74: nop

L_00203B78:
    // 0x00203B78: lw          $v1, 0x20($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X20);
    // 0x00203B7C: lw          $a0, 0x10($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X10);
    // 0x00203B80: ori         $v0, $a0, 0x2
    ctx->r2 = ctx->r4 | 0X2;
    // 0x00203B84: beq         $s6, $zero, L_00203B94
    if (ctx->r22 == 0) {
        // 0x00203B88: sw          $v0, 0x10($v1)
        MEM_W(0X10, ctx->r3) = ctx->r2;
            goto L_00203B94;
    }
    // 0x00203B88: sw          $v0, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->r2;
    // 0x00203B8C: ori         $v0, $a0, 0xE
    ctx->r2 = ctx->r4 | 0XE;
    // 0x00203B90: sw          $v0, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->r2;
L_00203B94:
    // 0x00203B94: jal         0x0029DFF0
    // 0x00203B98: nop

    func_0029DFF0(rdram, ctx);
        goto after_31;
    // 0x00203B98: nop

    after_31:
    // 0x00203B9C: lui         $v1, 0x800E
    ctx->r3 = S32(0X800E << 16);
    // 0x00203BA0: lw          $v1, -0x7234($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X7234);
    // 0x00203BA4: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x00203BA8: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x00203BAC: sw          $v1, -0x7234($at)
    MEM_W(-0X7234, ctx->r1) = ctx->r3;
    // 0x00203BB0: beq         $v1, $zero, L_00203BD8
    if (ctx->r3 == 0) {
        // 0x00203BB4: nop
    
            goto L_00203BD8;
    }
    // 0x00203BB4: nop

    // 0x00203BB8: jal         0x0029E010
    // 0x00203BBC: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    func_0029E010(rdram, ctx);
        goto after_32;
    // 0x00203BBC: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    after_32:
    // 0x00203BC0: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x00203BC4: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x00203BC8: jal         0x0029B820
    // 0x00203BCC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osSendMesg_recomp(rdram, ctx);
        goto after_33;
    // 0x00203BCC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_33:
    // 0x00203BD0: j           L_00203BE0
    // 0x00203BD4: nop

        goto L_00203BE0;
    // 0x00203BD4: nop

L_00203BD8:
    // 0x00203BD8: jal         0x0029E010
    // 0x00203BDC: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    func_0029E010(rdram, ctx);
        goto after_34;
    // 0x00203BDC: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    after_34:
L_00203BE0:
    // 0x00203BE0: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x00203BE4: addiu       $a0, $a0, 0x1CD8
    ctx->r4 = ADD32(ctx->r4, 0X1CD8);
    // 0x00203BE8: lw          $v0, 0x20($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X20);
    // 0x00203BEC: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    // 0x00203BF0: lw          $a2, 0x0($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X0);
    // 0x00203BF4: lui         $v1, 0x800E
    ctx->r3 = S32(0X800E << 16);
    // 0x00203BF8: addiu       $v1, $v1, -0x7BB0
    ctx->r3 = ADD32(ctx->r3, -0X7BB0);
    // 0x00203BFC: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    // 0x00203C00: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x00203C04: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x00203C08: lw          $a3, 0x0($a2)
    ctx->r7 = MEM_W(ctx->r6, 0X0);
    // 0x00203C0C: jal         0x00201E94
    // 0x00203C10: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    func_00201E94(rdram, ctx);
        goto after_35;
    // 0x00203C10: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    after_35:
    // 0x00203C14: j           L_00203C78
    // 0x00203C18: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
        goto L_00203C78;
    // 0x00203C18: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_00203C1C:
    // 0x00203C1C: jal         0x002066B0
    // 0x00203C20: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_002066B0(rdram, ctx);
        goto after_36;
    // 0x00203C20: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_36:
L_00203C24:
    // 0x00203C24: jal         0x0029DFF0
    // 0x00203C28: nop

    func_0029DFF0(rdram, ctx);
        goto after_37;
    // 0x00203C28: nop

    after_37:
    // 0x00203C2C: lui         $v1, 0x800E
    ctx->r3 = S32(0X800E << 16);
    // 0x00203C30: lw          $v1, -0x7234($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X7234);
    // 0x00203C34: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x00203C38: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x00203C3C: sw          $v1, -0x7234($at)
    MEM_W(-0X7234, ctx->r1) = ctx->r3;
    // 0x00203C40: beq         $v1, $zero, L_00203C6C
    if (ctx->r3 == 0) {
        // 0x00203C44: nop
    
            goto L_00203C6C;
    }
    // 0x00203C44: nop

    // 0x00203C48: jal         0x0029E010
    // 0x00203C4C: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    func_0029E010(rdram, ctx);
        goto after_38;
    // 0x00203C4C: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    after_38:
    // 0x00203C50: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x00203C54: addiu       $a0, $a0, -0x7250
    ctx->r4 = ADD32(ctx->r4, -0X7250);
    // 0x00203C58: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x00203C5C: jal         0x0029B820
    // 0x00203C60: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osSendMesg_recomp(rdram, ctx);
        goto after_39;
    // 0x00203C60: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_39:
    // 0x00203C64: j           L_00203C78
    // 0x00203C68: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
        goto L_00203C78;
    // 0x00203C68: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_00203C6C:
    // 0x00203C6C: jal         0x0029E010
    // 0x00203C70: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    func_0029E010(rdram, ctx);
        goto after_40;
    // 0x00203C70: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    after_40:
    // 0x00203C74: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_00203C78:
    // 0x00203C78: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x00203C7C: lw          $s6, 0x40($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X40);
    // 0x00203C80: lw          $s5, 0x3C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X3C);
    // 0x00203C84: lw          $s4, 0x38($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X38);
    // 0x00203C88: lw          $s3, 0x34($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X34);
    // 0x00203C8C: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x00203C90: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x00203C94: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x00203C98: jr          $ra
    // 0x00203C9C: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x00203C9C: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_0029A5E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0029A5E0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0029A5E4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0029A5E8: lui         $s0, 0x800B
    ctx->r16 = S32(0X800B << 16);
    // 0x0029A5EC: addiu       $s0, $s0, 0x7A60
    ctx->r16 = ADD32(ctx->r16, 0X7A60);
    // 0x0029A5F0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0029A5F4: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x0029A5F8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x0029A5FC: jal         0x00266C5C
    // 0x0029A600: addiu       $a2, $zero, 0x60
    ctx->r6 = ADD32(0, 0X60);
    func_00266C5C(rdram, ctx);
        goto after_0;
    // 0x0029A600: addiu       $a2, $zero, 0x60
    ctx->r6 = ADD32(0, 0X60);
    after_0:
    // 0x0029A604: lui         $v1, 0x8000
    ctx->r3 = S32(0X8000 << 16);
    // 0x0029A608: lw          $v1, 0x300($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X300);
    // 0x0029A60C: addiu       $v0, $s0, 0x30
    ctx->r2 = ADD32(ctx->r16, 0X30);
    // 0x0029A610: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0029A614: sw          $v0, 0x7AC4($at)
    MEM_W(0X7AC4, ctx->r1) = ctx->r2;
    // 0x0029A618: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0029A61C: sh          $v0, 0x32($s0)
    MEM_H(0X32, ctx->r16) = ctx->r2;
    // 0x0029A620: sh          $v0, 0x2($s0)
    MEM_H(0X2, ctx->r16) = ctx->r2;
    // 0x0029A624: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x0029A628: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0029A62C: sw          $s0, 0x7AC0($at)
    MEM_W(0X7AC0, ctx->r1) = ctx->r16;
    // 0x0029A630: sw          $v0, 0x34($s0)
    MEM_W(0X34, ctx->r16) = ctx->r2;
    // 0x0029A634: bne         $v1, $zero, L_0029A64C
    if (ctx->r3 != 0) {
        // 0x0029A638: sw          $v0, 0x4($s0)
        MEM_W(0X4, ctx->r16) = ctx->r2;
            goto L_0029A64C;
    }
    // 0x0029A638: sw          $v0, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r2;
    // 0x0029A63C: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0029A640: addiu       $v0, $v0, 0x7B40
    ctx->r2 = ADD32(ctx->r2, 0X7B40);
    // 0x0029A644: j           L_0029A674
    // 0x0029A648: sw          $v0, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->r2;
        goto L_0029A674;
    // 0x0029A648: sw          $v0, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->r2;
L_0029A64C:
    // 0x0029A64C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x0029A650: bne         $v1, $v0, L_0029A668
    if (ctx->r3 != ctx->r2) {
        // 0x0029A654: nop
    
            goto L_0029A668;
    }
    // 0x0029A654: nop

    // 0x0029A658: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0029A65C: addiu       $v0, $v0, 0x7B90
    ctx->r2 = ADD32(ctx->r2, 0X7B90);
    // 0x0029A660: j           L_0029A674
    // 0x0029A664: sw          $v0, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->r2;
        goto L_0029A674;
    // 0x0029A664: sw          $v0, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->r2;
L_0029A668:
    // 0x0029A668: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0029A66C: addiu       $v0, $v0, 0x7AF0
    ctx->r2 = ADD32(ctx->r2, 0X7AF0);
    // 0x0029A670: sw          $v0, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->r2;
L_0029A674:
    // 0x0029A674: lui         $a1, 0xA440
    ctx->r5 = S32(0XA440 << 16);
    // 0x0029A678: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x0029A67C: lw          $v1, 0x7AC4($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X7AC4);
    // 0x0029A680: ori         $a1, $a1, 0x10
    ctx->r5 = ctx->r5 | 0X10;
    // 0x0029A684: lw          $a0, 0x8($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X8);
    // 0x0029A688: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x0029A68C: sh          $v0, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r2;
    // 0x0029A690: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x0029A694: lw          $a0, 0x4($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X4);
    // 0x0029A698: sltiu       $v0, $v0, 0xB
    ctx->r2 = ctx->r2 < 0XB ? 1 : 0;
    // 0x0029A69C: bne         $v0, $zero, L_0029A6BC
    if (ctx->r2 != 0) {
        // 0x0029A6A0: sw          $a0, 0xC($v1)
        MEM_W(0XC, ctx->r3) = ctx->r4;
            goto L_0029A6BC;
    }
    // 0x0029A6A0: sw          $a0, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r4;
    // 0x0029A6A4: lui         $v1, 0xA440
    ctx->r3 = S32(0XA440 << 16);
    // 0x0029A6A8: ori         $v1, $v1, 0x10
    ctx->r3 = ctx->r3 | 0X10;
L_0029A6AC:
    // 0x0029A6AC: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x0029A6B0: sltiu       $v0, $v0, 0xB
    ctx->r2 = ctx->r2 < 0XB ? 1 : 0;
    // 0x0029A6B4: beq         $v0, $zero, L_0029A6AC
    if (ctx->r2 == 0) {
        // 0x0029A6B8: nop
    
            goto L_0029A6AC;
    }
    // 0x0029A6B8: nop

L_0029A6BC:
    // 0x0029A6BC: lui         $v0, 0xA440
    ctx->r2 = S32(0XA440 << 16);
    // 0x0029A6C0: sw          $zero, 0x0($v0)
    MEM_W(0X0, ctx->r2) = 0;
    // 0x0029A6C4: jal         0x0029ACE0
    // 0x0029A6C8: nop

    func_0029ACE0(rdram, ctx);
        goto after_1;
    // 0x0029A6C8: nop

    after_1:
    // 0x0029A6CC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x0029A6D0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0029A6D4: jr          $ra
    // 0x0029A6D8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0029A6D8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0042FFB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0042FFB0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x0042FFB4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0042FFB8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x0042FFBC: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x0042FFC0: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x0042FFC4: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x0042FFC8: jal         0x00200738
    // 0x0042FFCC: addiu       $a0, $s0, 0x20
    ctx->r4 = ADD32(ctx->r16, 0X20);
    func_00200738(rdram, ctx);
        goto after_0;
    // 0x0042FFCC: addiu       $a0, $s0, 0x20
    ctx->r4 = ADD32(ctx->r16, 0X20);
    after_0:
    // 0x0042FFD0: addiu       $a0, $s0, 0xC
    ctx->r4 = ADD32(ctx->r16, 0XC);
    // 0x0042FFD4: jal         0x00200518
    // 0x0042FFD8: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_00200518(rdram, ctx);
        goto after_1;
    // 0x0042FFD8: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_1:
    // 0x0042FFDC: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x0042FFE0: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x0042FFE4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0042FFE8: jr          $ra
    // 0x0042FFEC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x0042FFEC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_00260D60(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00260D60: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x00260D64: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00260D68: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x00260D6C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00260D70: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x00260D74: addu        $s3, $a2, $zero
    ctx->r19 = ADD32(ctx->r6, 0);
    // 0x00260D78: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x00260D7C: addu        $s2, $a3, $zero
    ctx->r18 = ADD32(ctx->r7, 0);
    // 0x00260D80: lwc1        $f0, 0x44($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X44);
    // 0x00260D84: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00260D88: lwc1        $f1, 0x79F0($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X79F0);
    // 0x00260D8C: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00260D90: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x00260D94: sdc1        $f20, 0x28($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X28, ctx->r29);
    // 0x00260D98: lw          $a3, 0x4C($s3)
    ctx->r7 = MEM_W(ctx->r19, 0X4C);
    // 0x00260D9C: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x00260DA0: lwc1        $f20, 0x40($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X40);
    // 0x00260DA4: jal         0x00245BAC
    // 0x00260DA8: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    func_00245BAC(rdram, ctx);
        goto after_0;
    // 0x00260DA8: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    after_0:
    // 0x00260DAC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00260DB0: jal         0x0025E428
    // 0x00260DB4: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_0025E428(rdram, ctx);
        goto after_1;
    // 0x00260DB4: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_1:
    // 0x00260DB8: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x00260DBC: bne         $v0, $v1, L_00260FD8
    if (ctx->r2 != ctx->r3) {
        // 0x00260DC0: nop
    
            goto L_00260FD8;
    }
    // 0x00260DC0: nop

    // 0x00260DC4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00260DC8: lwc1        $f0, 0x79F4($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X79F4);
    // 0x00260DCC: mul.s       $f0, $f20, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f20.fl, ctx->f0.fl);
    // 0x00260DD0: lwc1        $f1, 0x18($s2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r18, 0X18);
    // 0x00260DD4: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x00260DD8: lwc1        $f12, 0x1C($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x00260DDC: lwc1        $f14, 0x60($s3)
    ctx->f14.u32l = MEM_W(ctx->r19, 0X60);
    // 0x00260DE0: mfc1        $a2, $f1
    ctx->r6 = (int32_t)ctx->f_odd[(1 - 1) * 2];
    // 0x00260DE4: jal         0x0021160C
    // 0x00260DE8: nop

    func_0021160C(rdram, ctx);
        goto after_2;
    // 0x00260DE8: nop

    after_2:
    // 0x00260DEC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00260DF0: lwc1        $f1, 0x79F8($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X79F8);
    // 0x00260DF4: mul.s       $f1, $f20, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = MUL_S(ctx->f20.fl, ctx->f1.fl);
    // 0x00260DF8: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x00260DFC: nop

    // 0x00260E00: bc1t        L_00260E1C
    if (c1cs) {
        // 0x00260E04: swc1        $f0, 0x1C($s0)
        MEM_W(0X1C, ctx->r16) = ctx->f0.u32l;
            goto L_00260E1C;
    }
    // 0x00260E04: swc1        $f0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f0.u32l;
    // 0x00260E08: neg.s       $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = -ctx->f1.fl;
    // 0x00260E0C: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x00260E10: nop

    // 0x00260E14: bc1f        L_00260E20
    if (!c1cs) {
        // 0x00260E18: nop
    
            goto L_00260E20;
    }
    // 0x00260E18: nop

L_00260E1C:
    // 0x00260E1C: swc1        $f1, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f_odd[(1 - 1) * 2];
L_00260E20:
    // 0x00260E20: lwc1        $f1, 0x1C($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X1C);
    // 0x00260E24: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00260E28: lwc1        $f0, 0x79FC($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X79FC);
    // 0x00260E2C: mul.s       $f14, $f1, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x00260E30: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00260E34: lwc1        $f0, 0x7A00($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X7A00);
    // 0x00260E38: c.lt.s      $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f0.fl < ctx->f14.fl;
    // 0x00260E3C: nop

    // 0x00260E40: bc1tl       L_00260E60
    if (c1cs) {
        // 0x00260E44: mov.s       $f14, $f0
        CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    ctx->f14.fl = ctx->f0.fl;
            goto L_00260E60;
    }
    goto skip_0;
    // 0x00260E44: mov.s       $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    ctx->f14.fl = ctx->f0.fl;
    skip_0:
    // 0x00260E48: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00260E4C: lwc1        $f0, 0x7A04($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X7A04);
    // 0x00260E50: c.lt.s      $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f14.fl < ctx->f0.fl;
    // 0x00260E54: nop

    // 0x00260E58: bc1tl       L_00260E60
    if (c1cs) {
        // 0x00260E5C: mov.s       $f14, $f0
        CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    ctx->f14.fl = ctx->f0.fl;
            goto L_00260E60;
    }
    goto skip_1;
    // 0x00260E5C: mov.s       $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    ctx->f14.fl = ctx->f0.fl;
    skip_1:
L_00260E60:
    // 0x00260E60: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x00260E64: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00260E68: lwc1        $f1, 0x7A08($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X7A08);
    // 0x00260E6C: c.lt.s      $f14, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f14.fl < ctx->f2.fl;
    // 0x00260E70: nop

    // 0x00260E74: bc1f        L_00260E84
    if (!c1cs) {
        // 0x00260E78: nop
    
            goto L_00260E84;
    }
    // 0x00260E78: nop

    // 0x00260E7C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00260E80: lwc1        $f1, 0x7A0C($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X7A0C);
L_00260E84:
    // 0x00260E84: lwc1        $f0, 0x10C($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X10C);
    // 0x00260E88: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x00260E8C: nop

    // 0x00260E90: bc1f        L_00260EB8
    if (!c1cs) {
        // 0x00260E94: nop
    
            goto L_00260EB8;
    }
    // 0x00260E94: nop

    // 0x00260E98: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00260E9C: lwc1        $f0, 0x7A10($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X7A10);
    // 0x00260EA0: c.eq.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl == ctx->f0.fl;
    // 0x00260EA4: nop

    // 0x00260EA8: bc1f        L_00260ED0
    if (!c1cs) {
        // 0x00260EAC: nop
    
            goto L_00260ED0;
    }
    // 0x00260EAC: nop

    // 0x00260EB0: j           L_00260EE4
    // 0x00260EB4: nop

        goto L_00260EE4;
    // 0x00260EB4: nop

L_00260EB8:
    // 0x00260EB8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00260EBC: lwc1        $f0, 0x7A14($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X7A14);
    // 0x00260EC0: c.eq.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl == ctx->f0.fl;
    // 0x00260EC4: nop

    // 0x00260EC8: bc1t        L_00260EE4
    if (c1cs) {
        // 0x00260ECC: nop
    
            goto L_00260EE4;
    }
    // 0x00260ECC: nop

L_00260ED0:
    // 0x00260ED0: lwc1        $f12, 0x10C($s1)
    ctx->f12.u32l = MEM_W(ctx->r17, 0X10C);
    // 0x00260ED4: lui         $a2, 0x3E32
    ctx->r6 = S32(0X3E32 << 16);
    // 0x00260ED8: ori         $a2, $a2, 0xB8C4
    ctx->r6 = ctx->r6 | 0XB8C4;
    // 0x00260EDC: j           L_00260EF0
    // 0x00260EE0: nop

        goto L_00260EF0;
    // 0x00260EE0: nop

L_00260EE4:
    // 0x00260EE4: lwc1        $f12, 0x10C($s1)
    ctx->f12.u32l = MEM_W(ctx->r17, 0X10C);
    // 0x00260EE8: lui         $a2, 0x3DB2
    ctx->r6 = S32(0X3DB2 << 16);
    // 0x00260EEC: ori         $a2, $a2, 0xB8C4
    ctx->r6 = ctx->r6 | 0XB8C4;
L_00260EF0:
    // 0x00260EF0: jal         0x00211774
    // 0x00260EF4: nop

    func_00211774(rdram, ctx);
        goto after_3;
    // 0x00260EF4: nop

    after_3:
    // 0x00260EF8: swc1        $f0, 0x10C($s1)
    MEM_W(0X10C, ctx->r17) = ctx->f0.u32l;
    // 0x00260EFC: lwc1        $f1, 0x4C($s3)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r19, 0X4C);
    // 0x00260F00: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00260F04: lwc1        $f0, 0x7A18($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X7A18);
    // 0x00260F08: mul.s       $f14, $f1, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x00260F0C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00260F10: lwc1        $f0, 0x7A1C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X7A1C);
    // 0x00260F14: c.lt.s      $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f0.fl < ctx->f14.fl;
    // 0x00260F18: nop

    // 0x00260F1C: bc1tl       L_00260F3C
    if (c1cs) {
        // 0x00260F20: mov.s       $f14, $f0
        CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    ctx->f14.fl = ctx->f0.fl;
            goto L_00260F3C;
    }
    goto skip_2;
    // 0x00260F20: mov.s       $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    ctx->f14.fl = ctx->f0.fl;
    skip_2:
    // 0x00260F24: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00260F28: lwc1        $f0, 0x7A20($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X7A20);
    // 0x00260F2C: c.lt.s      $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f14.fl < ctx->f0.fl;
    // 0x00260F30: nop

    // 0x00260F34: bc1tl       L_00260F3C
    if (c1cs) {
        // 0x00260F38: mov.s       $f14, $f0
        CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    ctx->f14.fl = ctx->f0.fl;
            goto L_00260F3C;
    }
    goto skip_3;
    // 0x00260F38: mov.s       $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    ctx->f14.fl = ctx->f0.fl;
    skip_3:
L_00260F3C:
    // 0x00260F3C: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x00260F40: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00260F44: lwc1        $f1, 0x7A24($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X7A24);
    // 0x00260F48: c.lt.s      $f14, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f14.fl < ctx->f2.fl;
    // 0x00260F4C: nop

    // 0x00260F50: bc1f        L_00260F60
    if (!c1cs) {
        // 0x00260F54: nop
    
            goto L_00260F60;
    }
    // 0x00260F54: nop

    // 0x00260F58: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00260F5C: lwc1        $f1, 0x7A28($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X7A28);
L_00260F60:
    // 0x00260F60: lwc1        $f0, 0x110($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X110);
    // 0x00260F64: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x00260F68: nop

    // 0x00260F6C: bc1f        L_00260F94
    if (!c1cs) {
        // 0x00260F70: nop
    
            goto L_00260F94;
    }
    // 0x00260F70: nop

    // 0x00260F74: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00260F78: lwc1        $f0, 0x7A2C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X7A2C);
    // 0x00260F7C: c.eq.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl == ctx->f0.fl;
    // 0x00260F80: nop

    // 0x00260F84: bc1f        L_00260FAC
    if (!c1cs) {
        // 0x00260F88: nop
    
            goto L_00260FAC;
    }
    // 0x00260F88: nop

    // 0x00260F8C: j           L_00260FC0
    // 0x00260F90: nop

        goto L_00260FC0;
    // 0x00260F90: nop

L_00260F94:
    // 0x00260F94: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00260F98: lwc1        $f0, 0x7A30($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X7A30);
    // 0x00260F9C: c.eq.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl == ctx->f0.fl;
    // 0x00260FA0: nop

    // 0x00260FA4: bc1t        L_00260FC0
    if (c1cs) {
        // 0x00260FA8: nop
    
            goto L_00260FC0;
    }
    // 0x00260FA8: nop

L_00260FAC:
    // 0x00260FAC: lwc1        $f12, 0x110($s1)
    ctx->f12.u32l = MEM_W(ctx->r17, 0X110);
    // 0x00260FB0: lui         $a2, 0x3EB2
    ctx->r6 = S32(0X3EB2 << 16);
    // 0x00260FB4: ori         $a2, $a2, 0xB8C4
    ctx->r6 = ctx->r6 | 0XB8C4;
    // 0x00260FB8: j           L_00260FCC
    // 0x00260FBC: nop

        goto L_00260FCC;
    // 0x00260FBC: nop

L_00260FC0:
    // 0x00260FC0: lwc1        $f12, 0x110($s1)
    ctx->f12.u32l = MEM_W(ctx->r17, 0X110);
    // 0x00260FC4: lui         $a2, 0x3E32
    ctx->r6 = S32(0X3E32 << 16);
    // 0x00260FC8: ori         $a2, $a2, 0xB8C4
    ctx->r6 = ctx->r6 | 0XB8C4;
L_00260FCC:
    // 0x00260FCC: jal         0x00211774
    // 0x00260FD0: nop

    func_00211774(rdram, ctx);
        goto after_4;
    // 0x00260FD0: nop

    after_4:
    // 0x00260FD4: swc1        $f0, 0x110($s1)
    MEM_W(0X110, ctx->r17) = ctx->f0.u32l;
L_00260FD8:
    // 0x00260FD8: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x00260FDC: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x00260FE0: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x00260FE4: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00260FE8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00260FEC: ldc1        $f20, 0x28($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X28);
    // 0x00260FF0: jr          $ra
    // 0x00260FF4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x00260FF4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_0029E2E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
;}
RECOMP_FUNC void func_0023C0FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0023C0FC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0023C100: lwc1        $f0, 0x66A0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X66A0);
    // 0x0023C104: sw          $zero, 0x4($a0)
    MEM_W(0X4, ctx->r4) = 0;
    // 0x0023C108: sw          $zero, 0x2C($a0)
    MEM_W(0X2C, ctx->r4) = 0;
    // 0x0023C10C: sw          $zero, 0x30($a0)
    MEM_W(0X30, ctx->r4) = 0;
    // 0x0023C110: sw          $zero, 0x34($a0)
    MEM_W(0X34, ctx->r4) = 0;
    // 0x0023C114: sw          $zero, 0x3C($a0)
    MEM_W(0X3C, ctx->r4) = 0;
    // 0x0023C118: jr          $ra
    // 0x0023C11C: swc1        $f0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f0.u32l;
    return;
    // 0x0023C11C: swc1        $f0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f0.u32l;
;}
RECOMP_FUNC void func_0045B684(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0045B684: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0045B688: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x0045B68C: lw          $a1, 0xC($a0)
    ctx->r5 = MEM_W(ctx->r4, 0XC);
    // 0x0045B690: lui         $v1, 0xFBFF
    ctx->r3 = S32(0XFBFF << 16);
    // 0x0045B694: lw          $v0, 0x120($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X120);
    // 0x0045B698: ori         $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 | 0XFFFF;
    // 0x0045B69C: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x0045B6A0: sw          $v0, 0x120($a1)
    MEM_W(0X120, ctx->r5) = ctx->r2;
    // 0x0045B6A4: lw          $a0, 0xC($a0)
    ctx->r4 = MEM_W(ctx->r4, 0XC);
    // 0x0045B6A8: lw          $v0, 0x120($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X120);
    // 0x0045B6AC: addiu       $v1, $zero, 0x8
    ctx->r3 = ADD32(0, 0X8);
    // 0x0045B6B0: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0045B6B4: sw          $v1, 0x9C0($at)
    MEM_W(0X9C0, ctx->r1) = ctx->r3;
    // 0x0045B6B8: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x0045B6BC: jal         0x00285CC4
    // 0x0045B6C0: sw          $v0, 0x120($a0)
    MEM_W(0X120, ctx->r4) = ctx->r2;
    func_00285CC4(rdram, ctx);
        goto after_0;
    // 0x0045B6C0: sw          $v0, 0x120($a0)
    MEM_W(0X120, ctx->r4) = ctx->r2;
    after_0:
    // 0x0045B6C4: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x0045B6C8: jr          $ra
    // 0x0045B6CC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0045B6CC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00402E0C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00402E0C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00402E10: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x00402E14: lw          $v0, 0xD4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XD4);
    // 0x00402E18: addiu       $v1, $zero, -0x2001
    ctx->r3 = ADD32(0, -0X2001);
    // 0x00402E1C: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x00402E20: sw          $v0, 0xD4($a0)
    MEM_W(0XD4, ctx->r4) = ctx->r2;
    // 0x00402E24: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x00402E28: lw          $a0, -0xA40($a0)
    ctx->r4 = MEM_W(ctx->r4, -0XA40);
    // 0x00402E2C: addiu       $a2, $zero, 0x5ABE
    ctx->r6 = ADD32(0, 0X5ABE);
    // 0x00402E30: jal         0x002666B0
    // 0x00402E34: addiu       $a1, $a0, 0x140
    ctx->r5 = ADD32(ctx->r4, 0X140);
    func_002666B0(rdram, ctx);
        goto after_0;
    // 0x00402E34: addiu       $a1, $a0, 0x140
    ctx->r5 = ADD32(ctx->r4, 0X140);
    after_0:
    // 0x00402E38: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x00402E3C: jr          $ra
    // 0x00402E40: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00402E40: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
