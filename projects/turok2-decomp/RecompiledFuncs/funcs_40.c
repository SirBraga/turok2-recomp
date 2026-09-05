#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_0045C688(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_004236C0:
    // 0x0045C688: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
L_004236FC:
    // 0x0045C68C: lw          $v0, 0x990($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X990);
L_00423784:
    // 0x0045C690: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x0045C694: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x0045C698: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x0045C69C: beq         $v0, $zero, L_0045C6B4
    if (ctx->r2 == 0) {
        // 0x0045C6A0: sw          $ra, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r31;
            goto L_0045C6B4;
    }
    // 0x0045C6A0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x0045C6A4: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x0045C6A8: lw          $a1, 0x2028($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X2028);
    // 0x0045C6AC: j           L_004236C0
    // 0x0045C6B0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    entry_004236C0(rdram, ctx);
    return;
    // 0x0045C6B0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_0045C6B4:
    // 0x0045C6B4: lw          $v0, 0x20($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X20);
    // 0x0045C6B8: lb          $a1, 0x4($v0)
    ctx->r5 = MEM_B(ctx->r2, 0X4);
    // 0x0045C6BC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0045C6C0: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0045C6C4: sw          $v0, 0x9BC($at)
    MEM_W(0X9BC, ctx->r1) = ctx->r2;
    // 0x0045C6C8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0045C6CC: jal         0x0041DCB0
    // 0x0045C6D0: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    func_0041DCB0(rdram, ctx);
        goto after_0;
    // 0x0045C6D0: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    after_0:
    // 0x0045C6D4: beq         $v0, $zero, L_0045C740
    if (ctx->r2 == 0) {
        // 0x0045C6D8: nop
    
            goto L_0045C740;
    }
    // 0x0045C6D8: nop

    // 0x0045C6DC: lw          $v0, 0x1C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X1C);
    // 0x0045C6E0: beq         $v0, $zero, L_0045C6F4
    if (ctx->r2 == 0) {
        // 0x0045C6E4: nop
    
            goto L_0045C6F4;
    }
    // 0x0045C6E4: nop

    // 0x0045C6E8: lw          $v0, 0x51C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X51C);
    // 0x0045C6EC: j           L_004236FC
    // 0x0045C6F0: addiu       $a0, $v0, 0x53C
    ctx->r4 = ADD32(ctx->r2, 0X53C);
    entry_004236FC(rdram, ctx);
    return;
    // 0x0045C6F0: addiu       $a0, $v0, 0x53C
    ctx->r4 = ADD32(ctx->r2, 0X53C);
L_0045C6F4:
    // 0x0045C6F4: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x0045C6F8: addiu       $a0, $a0, -0x61D4
    ctx->r4 = ADD32(ctx->r4, -0X61D4);
    // 0x0045C6FC: lw          $v1, 0x24($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X24);
    // 0x0045C700: lui         $v0, 0x44
    ctx->r2 = S32(0X44 << 16);
    // 0x0045C704: addiu       $v0, $v0, -0x41EC
    ctx->r2 = ADD32(ctx->r2, -0X41EC);
    // 0x0045C708: beq         $v1, $v0, L_0045C720
    if (ctx->r3 == ctx->r2) {
        // 0x0045C70C: nop
    
            goto L_0045C720;
    }
    // 0x0045C70C: nop

    // 0x0045C710: lui         $v0, 0x44
    ctx->r2 = S32(0X44 << 16);
    // 0x0045C714: addiu       $v0, $v0, -0x4210
    ctx->r2 = ADD32(ctx->r2, -0X4210);
    // 0x0045C718: bnel        $v1, $v0, L_0045C72C
    if (ctx->r3 != ctx->r2) {
        // 0x0045C71C: sw          $zero, 0x10($sp)
        MEM_W(0X10, ctx->r29) = 0;
            goto L_0045C72C;
    }
    goto skip_0;
    // 0x0045C71C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    skip_0:
L_0045C720:
    // 0x0045C720: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0045C724: sw          $zero, 0x940($at)
    MEM_W(0X940, ctx->r1) = 0;
    // 0x0045C728: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
L_0045C72C:
    // 0x0045C72C: lw          $a1, 0x24($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X24);
    // 0x0045C730: lw          $a2, 0x1C($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X1C);
    // 0x0045C734: lw          $a3, 0x20($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X20);
    // 0x0045C738: j           L_00423784
    // 0x0045C73C: nop

    entry_00423784(rdram, ctx);
    return;
    // 0x0045C73C: nop

L_0045C740:
    // 0x0045C740: lw          $v1, 0x24($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X24);
    // 0x0045C744: lui         $v0, 0x44
    ctx->r2 = S32(0X44 << 16);
    // 0x0045C748: addiu       $v0, $v0, -0x41EC
    ctx->r2 = ADD32(ctx->r2, -0X41EC);
    // 0x0045C74C: beq         $v1, $v0, L_0045C764
    if (ctx->r3 == ctx->r2) {
        // 0x0045C750: nop
    
            goto L_0045C764;
    }
    // 0x0045C750: nop

    // 0x0045C754: lui         $v0, 0x44
    ctx->r2 = S32(0X44 << 16);
    // 0x0045C758: addiu       $v0, $v0, -0x4210
    ctx->r2 = ADD32(ctx->r2, -0X4210);
    // 0x0045C75C: bnel        $v1, $v0, L_0045C770
    if (ctx->r3 != ctx->r2) {
        // 0x0045C760: sw          $zero, 0x10($sp)
        MEM_W(0X10, ctx->r29) = 0;
            goto L_0045C770;
    }
    goto skip_1;
    // 0x0045C760: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    skip_1:
L_0045C764:
    // 0x0045C764: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0045C768: sw          $zero, 0x940($at)
    MEM_W(0X940, ctx->r1) = 0;
    // 0x0045C76C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
L_0045C770:
    // 0x0045C770: lw          $a1, 0x24($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X24);
    // 0x0045C774: lw          $a2, 0x1C($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X1C);
    // 0x0045C778: lw          $a3, 0x20($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X20);
    // 0x0045C77C: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x0045C780: addiu       $a0, $a0, -0x61D4
    ctx->r4 = ADD32(ctx->r4, -0X61D4);
    // 0x0045C784: jal         0x00416644
    // 0x0045C788: nop

    func_00416644(rdram, ctx);
        goto after_1;
    // 0x0045C788: nop

    after_1:
    // 0x0045C78C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0045C790: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x0045C794: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x0045C798: jr          $ra
    // 0x0045C79C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x0045C79C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_00407C20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00407C20: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00407C24: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00407C28: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x00407C2C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00407C30: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x00407C34: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x00407C38: addiu       $a0, $a0, 0xF0
    ctx->r4 = ADD32(ctx->r4, 0XF0);
    // 0x00407C3C: lui         $a2, 0x800C
    ctx->r6 = S32(0X800C << 16);
    // 0x00407C40: addiu       $a2, $a2, 0x46C
    ctx->r6 = ADD32(ctx->r6, 0X46C);
    // 0x00407C44: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x00407C48: jal         0x0027AD24
    // 0x00407C4C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_0027AD24(rdram, ctx);
        goto after_0;
    // 0x00407C4C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_0:
    // 0x00407C50: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00407C54: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x00407C58: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    // 0x00407C5C: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x00407C60: addiu       $v0, $v0, -0x5DC
    ctx->r2 = ADD32(ctx->r2, -0X5DC);
    // 0x00407C64: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x00407C68: lui         $v1, 0x43
    ctx->r3 = S32(0X43 << 16);
    // 0x00407C6C: addiu       $v1, $v1, 0x169C
    ctx->r3 = ADD32(ctx->r3, 0X169C);
    // 0x00407C70: sw          $v1, -0x4($v0)
    MEM_W(-0X4, ctx->r2) = ctx->r3;
    // 0x00407C74: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x00407C78: sb          $v1, -0xC($v0)
    MEM_B(-0XC, ctx->r2) = ctx->r3;
    // 0x00407C7C: lui         $v1, 0x43
    ctx->r3 = S32(0X43 << 16);
    // 0x00407C80: addiu       $v1, $v1, 0x13B4
    ctx->r3 = ADD32(ctx->r3, 0X13B4);
    // 0x00407C84: sw          $a3, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r7;
    // 0x00407C88: sw          $a3, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r7;
    // 0x00407C8C: sw          $a3, -0x14($v0)
    MEM_W(-0X14, ctx->r2) = ctx->r7;
    // 0x00407C90: sw          $a3, -0x10($v0)
    MEM_W(-0X10, ctx->r2) = ctx->r7;
    // 0x00407C94: jal         0x00243414
    // 0x00407C98: sw          $v1, -0x18($v0)
    MEM_W(-0X18, ctx->r2) = ctx->r3;
    func_00243414(rdram, ctx);
        goto after_1;
    // 0x00407C98: sw          $v1, -0x18($v0)
    MEM_W(-0X18, ctx->r2) = ctx->r3;
    after_1:
    // 0x00407C9C: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x00407CA0: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00407CA4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00407CA8: jr          $ra
    // 0x00407CAC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00407CAC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_00285AE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00285AE0: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00285AE4: lbu         $v0, 0x6CF0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X6CF0);
    // 0x00285AE8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x00285AEC: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x00285AF0: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x00285AF4: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x00285AF8: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x00285AFC: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00285B00: beq         $v0, $zero, L_00285BB4
    if (ctx->r2 == 0) {
        // 0x00285B04: sw          $s0, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r16;
            goto L_00285BB4;
    }
    // 0x00285B04: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00285B08: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
    // 0x00285B0C: beq         $v0, $zero, L_00285BB4
    if (ctx->r2 == 0) {
        // 0x00285B10: addu        $a1, $zero, $zero
        ctx->r5 = ADD32(0, 0);
            goto L_00285BB4;
    }
    // 0x00285B10: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x00285B14: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x00285B18: addiu       $a0, $a0, 0x6758
    ctx->r4 = ADD32(ctx->r4, 0X6758);
    // 0x00285B1C: jal         0x0029B6F0
    // 0x00285B20: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osRecvMesg_recomp(rdram, ctx);
        goto after_0;
    // 0x00285B20: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_0:
    // 0x00285B24: jal         0x002847E0
    // 0x00285B28: addiu       $s3, $zero, 0x2
    ctx->r19 = ADD32(0, 0X2);
    func_002847E0(rdram, ctx);
        goto after_1;
    // 0x00285B28: addiu       $s3, $zero, 0x2
    ctx->r19 = ADD32(0, 0X2);
    after_1:
    // 0x00285B2C: addiu       $a0, $s2, 0x140
    ctx->r4 = ADD32(ctx->r18, 0X140);
    // 0x00285B30: addiu       $a1, $s2, 0x16C
    ctx->r5 = ADD32(ctx->r18, 0X16C);
    // 0x00285B34: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x00285B38: lui         $at, 0x800F
    ctx->r1 = S32(0X800F << 16);
    // 0x00285B3C: sb          $s3, 0x6750($at)
    MEM_B(0X6750, ctx->r1) = ctx->r19;
    // 0x00285B40: sw          $zero, 0xCC($s2)
    MEM_W(0XCC, ctx->r18) = 0;
    // 0x00285B44: sw          $zero, 0xD0($s2)
    MEM_W(0XD0, ctx->r18) = 0;
    // 0x00285B48: jal         0x0026EB3C
    // 0x00285B4C: sw          $zero, 0xD4($s2)
    MEM_W(0XD4, ctx->r18) = 0;
    func_0026EB3C(rdram, ctx);
        goto after_2;
    // 0x00285B4C: sw          $zero, 0xD4($s2)
    MEM_W(0XD4, ctx->r18) = 0;
    after_2:
    // 0x00285B50: lui         $s1, 0x800F
    ctx->r17 = S32(0X800F << 16);
    // 0x00285B54: addiu       $s1, $s1, 0x6798
    ctx->r17 = ADD32(ctx->r17, 0X6798);
    // 0x00285B58: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x00285B5C: addiu       $s0, $s2, 0xD8
    ctx->r16 = ADD32(ctx->r18, 0XD8);
    // 0x00285B60: lb          $a2, 0x4($s2)
    ctx->r6 = MEM_B(ctx->r18, 0X4);
    // 0x00285B64: jal         0x00299198
    // 0x00285B68: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_00299198(rdram, ctx);
        goto after_3;
    // 0x00285B68: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_3:
    // 0x00285B6C: jal         0x00298E10
    // 0x00285B70: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00298E10(rdram, ctx);
        goto after_4;
    // 0x00285B70: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
    // 0x00285B74: jal         0x00298E10
    // 0x00285B78: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00298E10(rdram, ctx);
        goto after_5;
    // 0x00285B78: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_5:
    // 0x00285B7C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x00285B80: lb          $a2, 0x4($s2)
    ctx->r6 = MEM_B(ctx->r18, 0X4);
    // 0x00285B84: jal         0x00299198
    // 0x00285B88: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_00299198(rdram, ctx);
        goto after_6;
    // 0x00285B88: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_6:
    // 0x00285B8C: bne         $v0, $zero, L_00285B98
    if (ctx->r2 != 0) {
        // 0x00285B90: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_00285B98;
    }
    // 0x00285B90: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00285B94: sw          $v0, 0xC8($s2)
    MEM_W(0XC8, ctx->r18) = ctx->r2;
L_00285B98:
    // 0x00285B98: lui         $at, 0x800F
    ctx->r1 = S32(0X800F << 16);
    // 0x00285B9C: sb          $s3, 0x6750($at)
    MEM_B(0X6750, ctx->r1) = ctx->r19;
    // 0x00285BA0: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x00285BA4: addiu       $a0, $a0, 0x6758
    ctx->r4 = ADD32(ctx->r4, 0X6758);
    // 0x00285BA8: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x00285BAC: jal         0x0029B820
    // 0x00285BB0: addu        $a2, $a1, $zero
    ctx->r6 = ADD32(ctx->r5, 0);
    osSendMesg_recomp(rdram, ctx);
        goto after_7;
    // 0x00285BB0: addu        $a2, $a1, $zero
    ctx->r6 = ADD32(ctx->r5, 0);
    after_7:
L_00285BB4:
    // 0x00285BB4: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x00285BB8: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x00285BBC: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x00285BC0: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00285BC4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00285BC8: jr          $ra
    // 0x00285BCC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x00285BCC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_00468434(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00468434: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x00468438: addiu       $a0, $a0, 0x56B0
    ctx->r4 = ADD32(ctx->r4, 0X56B0);
    // 0x0046843C: lw          $v0, 0x1C8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X1C8);
    // 0x00468440: beq         $v0, $zero, L_0046848C
    if (ctx->r2 == 0) {
        // 0x00468444: addiu       $v0, $a0, 0x1CC
        ctx->r2 = ADD32(ctx->r4, 0X1CC);
            goto L_0046848C;
    }
    // 0x00468444: addiu       $v0, $a0, 0x1CC
    ctx->r2 = ADD32(ctx->r4, 0X1CC);
    // 0x00468448: sw          $zero, 0x1C8($a0)
    MEM_W(0X1C8, ctx->r4) = 0;
    // 0x0046844C: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x00468450: addiu       $v1, $v1, -0x5528
    ctx->r3 = ADD32(ctx->r3, -0X5528);
    // 0x00468454: addiu       $a1, $a0, 0x34C
    ctx->r5 = ADD32(ctx->r4, 0X34C);
L_00468458:
    // 0x00468458: lw          $a2, 0x0($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X0);
    // 0x0046845C: lw          $a3, 0x4($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X4);
    // 0x00468460: lw          $t0, 0x8($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X8);
    // 0x00468464: lw          $t1, 0xC($v0)
    ctx->r9 = MEM_W(ctx->r2, 0XC);
    // 0x00468468: sw          $a2, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r6;
    // 0x0046846C: sw          $a3, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r7;
    // 0x00468470: sw          $t0, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r8;
    // 0x00468474: sw          $t1, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r9;
    // 0x00468478: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
    // 0x0046847C: bne         $v0, $a1, L_00468458
    if (ctx->r2 != ctx->r5) {
        // 0x00468480: addiu       $v1, $v1, 0x10
        ctx->r3 = ADD32(ctx->r3, 0X10);
            goto L_00468458;
    }
    // 0x00468480: addiu       $v1, $v1, 0x10
    ctx->r3 = ADD32(ctx->r3, 0X10);
    // 0x00468484: lw          $a2, 0x0($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X0);
    // 0x00468488: sw          $a2, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r6;
L_0046848C:
    // 0x0046848C: sw          $zero, 0x0($a0)
    MEM_W(0X0, ctx->r4) = 0;
    // 0x00468490: sw          $zero, 0x4($a0)
    MEM_W(0X4, ctx->r4) = 0;
    // 0x00468494: jr          $ra
    // 0x00468498: sw          $zero, 0x8($a0)
    MEM_W(0X8, ctx->r4) = 0;
    return;
    // 0x00468498: sw          $zero, 0x8($a0)
    MEM_W(0X8, ctx->r4) = 0;
;}
RECOMP_FUNC void func_00416B28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00416B28: jr          $ra
    // 0x00416B2C: addiu       $v0, $a0, -0x53C
    ctx->r2 = ADD32(ctx->r4, -0X53C);
    return;
    // 0x00416B2C: addiu       $v0, $a0, -0x53C
    ctx->r2 = ADD32(ctx->r4, -0X53C);
;}
RECOMP_FUNC void func_00264DF0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00264DF0: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x00264DF4: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x00264DF8: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x00264DFC: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x00264E00: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x00264E04: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x00264E08: lw          $s0, 0x10C($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X10C);
    // 0x00264E0C: lui         $at, 0x800F
    ctx->r1 = S32(0X800F << 16);
    // 0x00264E10: sb          $zero, 0x1F94($at)
    MEM_B(0X1F94, ctx->r1) = 0;
    // 0x00264E14: beq         $s0, $zero, L_00264F40
    if (ctx->r16 == 0) {
        // 0x00264E18: addu        $s2, $a0, $zero
        ctx->r18 = ADD32(ctx->r4, 0);
            goto L_00264F40;
    }
    // 0x00264E18: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x00264E1C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00264E20: addiu       $a1, $zero, 0x2710
    ctx->r5 = ADD32(0, 0X2710);
    // 0x00264E24: jal         0x00219F74
    // 0x00264E28: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    func_00219F74(rdram, ctx);
        goto after_0;
    // 0x00264E28: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    after_0:
    // 0x00264E2C: lh          $v1, 0xDC($s0)
    ctx->r3 = MEM_H(ctx->r16, 0XDC);
    // 0x00264E30: bne         $v1, $v0, L_00264F20
    if (ctx->r3 != ctx->r2) {
        // 0x00264E34: nop
    
            goto L_00264F20;
    }
    // 0x00264E34: nop

    // 0x00264E38: lh          $v0, 0xE0($s0)
    ctx->r2 = MEM_H(ctx->r16, 0XE0);
    // 0x00264E3C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00264E40: lwc1        $f1, 0x7C48($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X7C48);
    // 0x00264E44: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x00264E48: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00264E4C: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00264E50: lwc1        $f1, 0xD8($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0XD8);
    // 0x00264E54: c.le.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl <= ctx->f1.fl;
    // 0x00264E58: nop

    // 0x00264E5C: bc1f        L_00264F20
    if (!c1cs) {
        // 0x00264E60: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_00264F20;
    }
    // 0x00264E60: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x00264E64: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x00264E68: jal         0x00264B0C
    // 0x00264E6C: addiu       $a2, $sp, 0x10
    ctx->r6 = ADD32(ctx->r29, 0X10);
    func_00264B0C(rdram, ctx);
        goto after_1;
    // 0x00264E6C: addiu       $a2, $sp, 0x10
    ctx->r6 = ADD32(ctx->r29, 0X10);
    after_1:
    // 0x00264E70: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00264E74: lwc1        $f2, 0x6D28($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X6D28);
    // 0x00264E78: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00264E7C: lwc1        $f0, 0x7C4C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X7C4C);
    // 0x00264E80: mul.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x00264E84: lwc1        $f1, 0x50($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X50);
    // 0x00264E88: lwc1        $f0, 0x50($s2)
    ctx->f0.u32l = MEM_W(ctx->r18, 0X50);
    // 0x00264E8C: sub.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl - ctx->f0.fl;
    // 0x00264E90: lwc1        $f0, 0x64($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X64);
    // 0x00264E94: add.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f2.fl;
    // 0x00264E98: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00264E9C: lwc1        $f2, 0x7C50($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X7C50);
    // 0x00264EA0: swc1        $f1, 0x114($s1)
    MEM_W(0X114, ctx->r17) = ctx->f_odd[(1 - 1) * 2];
    // 0x00264EA4: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x00264EA8: nop

    // 0x00264EAC: bc1f        L_00264EB8
    if (!c1cs) {
        // 0x00264EB0: swc1        $f0, 0x64($s1)
        MEM_W(0X64, ctx->r17) = ctx->f0.u32l;
            goto L_00264EB8;
    }
    // 0x00264EB0: swc1        $f0, 0x64($s1)
    MEM_W(0X64, ctx->r17) = ctx->f0.u32l;
    // 0x00264EB4: swc1        $f2, 0x64($s1)
    MEM_W(0X64, ctx->r17) = ctx->f2.u32l;
L_00264EB8:
    // 0x00264EB8: addiu       $a0, $s1, 0x54
    ctx->r4 = ADD32(ctx->r17, 0X54);
    // 0x00264EBC: addiu       $a2, $s2, 0x4
    ctx->r6 = ADD32(ctx->r18, 0X4);
    // 0x00264EC0: lw          $a1, 0x64($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X64);
    // 0x00264EC4: jal         0x0020EF8C
    // 0x00264EC8: addiu       $a3, $sp, 0x10
    ctx->r7 = ADD32(ctx->r29, 0X10);
    func_0020EF8C(rdram, ctx);
        goto after_2;
    // 0x00264EC8: addiu       $a3, $sp, 0x10
    ctx->r7 = ADD32(ctx->r29, 0X10);
    after_2:
    // 0x00264ECC: lh          $v0, 0xE0($s0)
    ctx->r2 = MEM_H(ctx->r16, 0XE0);
    // 0x00264ED0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00264ED4: lwc1        $f1, 0x7C54($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X7C54);
    // 0x00264ED8: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x00264EDC: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00264EE0: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00264EE4: lwc1        $f1, 0xD8($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0XD8);
    // 0x00264EE8: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x00264EEC: nop

    // 0x00264EF0: bc1f        L_00264F0C
    if (!c1cs) {
        // 0x00264EF4: nop
    
            goto L_00264F0C;
    }
    // 0x00264EF4: nop

    // 0x00264EF8: lwc1        $f0, 0x110($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X110);
    // 0x00264EFC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00264F00: lwc1        $f1, 0x7C58($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X7C58);
    // 0x00264F04: j           L_00264F1C
    // 0x00264F08: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
        goto L_00264F1C;
    // 0x00264F08: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
L_00264F0C:
    // 0x00264F0C: lwc1        $f0, 0x110($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X110);
    // 0x00264F10: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00264F14: lwc1        $f1, 0x7C5C($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X7C5C);
    // 0x00264F18: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
L_00264F1C:
    // 0x00264F1C: swc1        $f0, 0x110($s1)
    MEM_W(0X110, ctx->r17) = ctx->f0.u32l;
L_00264F20:
    // 0x00264F20: beq         $s0, $zero, L_00264F40
    if (ctx->r16 == 0) {
        // 0x00264F24: addiu       $v0, $zero, 0x15
        ctx->r2 = ADD32(0, 0X15);
            goto L_00264F40;
    }
    // 0x00264F24: addiu       $v0, $zero, 0x15
    ctx->r2 = ADD32(0, 0X15);
    // 0x00264F28: lb          $v1, 0x174($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X174);
    // 0x00264F2C: beq         $v1, $v0, L_00264F40
    if (ctx->r3 == ctx->r2) {
        // 0x00264F30: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_00264F40;
    }
    // 0x00264F30: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x00264F34: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x00264F38: jal         0x00243414
    // 0x00264F3C: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_00243414(rdram, ctx);
        goto after_3;
    // 0x00264F3C: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_3:
L_00264F40:
    // 0x00264F40: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x00264F44: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x00264F48: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x00264F4C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x00264F50: jr          $ra
    // 0x00264F54: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x00264F54: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_00206088(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00206088: lui         $v0, 0x800E
    ctx->r2 = S32(0X800E << 16);
    // 0x0020608C: lw          $v0, -0x7288($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X7288);
    // 0x00206090: jr          $ra
    // 0x00206094: nop

    return;
    // 0x00206094: nop

;}
RECOMP_FUNC void func_0028B3E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0028B3E0: jr          $ra
    // 0x0028B3E4: addiu       $v0, $a0, 0x40
    ctx->r2 = ADD32(ctx->r4, 0X40);
    return;
    // 0x0028B3E4: addiu       $v0, $a0, 0x40
    ctx->r2 = ADD32(ctx->r4, 0X40);
;}
RECOMP_FUNC void func_0045C884(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_004238CC:
    // 0x0045C884: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
L_004238FC:
    // 0x0045C888: lw          $v0, 0x9A4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X9A4);
L_00423934:
    // 0x0045C88C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0045C890: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0045C894: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x0045C898: bne         $v0, $zero, L_0045C94C
    if (ctx->r2 != 0) {
        // 0x0045C89C: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_0045C94C;
    }
    // 0x0045C89C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x0045C8A0: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x0045C8A4: lw          $v0, 0x990($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X990);
    // 0x0045C8A8: beq         $v0, $zero, L_0045C8C0
    if (ctx->r2 == 0) {
        // 0x0045C8AC: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_0045C8C0;
    }
    // 0x0045C8AC: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x0045C8B0: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x0045C8B4: lw          $v1, 0x2028($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X2028);
    // 0x0045C8B8: j           L_004238CC
    // 0x0045C8BC: nop

    entry_004238CC(rdram, ctx);
    return;
    // 0x0045C8BC: nop

L_0045C8C0:
    // 0x0045C8C0: lw          $v0, 0x20($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X20);
    // 0x0045C8C4: lb          $v1, 0x4($v0)
    ctx->r3 = MEM_B(ctx->r2, 0X4);
    // 0x0045C8C8: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x0045C8CC: beq         $v1, $v0, L_0045C94C
    if (ctx->r3 == ctx->r2) {
        // 0x0045C8D0: nop
    
            goto L_0045C94C;
    }
    // 0x0045C8D0: nop

    // 0x0045C8D4: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x0045C8D8: lw          $v0, 0x990($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X990);
    // 0x0045C8DC: beq         $v0, $zero, L_0045C8F4
    if (ctx->r2 == 0) {
        // 0x0045C8E0: nop
    
            goto L_0045C8F4;
    }
    // 0x0045C8E0: nop

    // 0x0045C8E4: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x0045C8E8: lw          $a0, 0x2028($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X2028);
    // 0x0045C8EC: j           L_004238FC
    // 0x0045C8F0: nop

    entry_004238FC(rdram, ctx);
    return;
    // 0x0045C8F0: nop

L_0045C8F4:
    // 0x0045C8F4: lw          $v0, 0x20($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X20);
    // 0x0045C8F8: lb          $a0, 0x4($v0)
    ctx->r4 = MEM_B(ctx->r2, 0X4);
    // 0x0045C8FC: jal         0x0028591C
    // 0x0045C900: nop

    func_0028591C(rdram, ctx);
        goto after_0;
    // 0x0045C900: nop

    after_0:
    // 0x0045C904: beq         $v0, $zero, L_0045C94C
    if (ctx->r2 == 0) {
        // 0x0045C908: nop
    
            goto L_0045C94C;
    }
    // 0x0045C908: nop

    // 0x0045C90C: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x0045C910: lw          $v0, 0x990($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X990);
    // 0x0045C914: beq         $v0, $zero, L_0045C92C
    if (ctx->r2 == 0) {
        // 0x0045C918: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_0045C92C;
    }
    // 0x0045C918: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0045C91C: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x0045C920: lw          $a1, 0x2028($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X2028);
    // 0x0045C924: j           L_00423934
    // 0x0045C928: nop

    entry_00423934(rdram, ctx);
    return;
    // 0x0045C928: nop

L_0045C92C:
    // 0x0045C92C: lw          $v0, 0x20($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X20);
    // 0x0045C930: lb          $a1, 0x4($v0)
    ctx->r5 = MEM_B(ctx->r2, 0X4);
    // 0x0045C934: jal         0x0041DCB0
    // 0x0045C938: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_0041DCB0(rdram, ctx);
        goto after_1;
    // 0x0045C938: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_1:
    // 0x0045C93C: beq         $v0, $zero, L_0045C94C
    if (ctx->r2 == 0) {
        // 0x0045C940: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_0045C94C;
    }
    // 0x0045C940: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0045C944: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0045C948: sw          $v0, 0x9A4($at)
    MEM_W(0X9A4, ctx->r1) = ctx->r2;
L_0045C94C:
    // 0x0045C94C: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x0045C950: lw          $v0, 0x9A4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X9A4);
    // 0x0045C954: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x0045C958: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0045C95C: jr          $ra
    // 0x0045C960: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0045C960: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_002283FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002283FC: lui         $v0, 0x8011
    ctx->r2 = S32(0X8011 << 16);
    // 0x00228400: lw          $v0, 0x1C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1C);
    // 0x00228404: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00228408: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x0022840C: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x00228410: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x00228414: addu        $s2, $a1, $zero
    ctx->r18 = ADD32(ctx->r5, 0);
    // 0x00228418: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x0022841C: bne         $v0, $zero, L_00228434
    if (ctx->r2 != 0) {
        // 0x00228420: sw          $s0, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r16;
            goto L_00228434;
    }
    // 0x00228420: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00228424: lw          $v0, 0x5324($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X5324);
    // 0x00228428: sltiu       $v0, $v0, 0x3
    ctx->r2 = ctx->r2 < 0X3 ? 1 : 0;
    // 0x0022842C: beq         $v0, $zero, L_0022846C
    if (ctx->r2 == 0) {
        // 0x00228430: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_0022846C;
    }
    // 0x00228430: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_00228434:
    // 0x00228434: lw          $s0, 0x5300($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X5300);
    // 0x00228438: beq         $s0, $zero, L_00228468
    if (ctx->r16 == 0) {
        // 0x0022843C: addiu       $a0, $s1, 0x5300
        ctx->r4 = ADD32(ctx->r17, 0X5300);
            goto L_00228468;
    }
    // 0x0022843C: addiu       $a0, $s1, 0x5300
    ctx->r4 = ADD32(ctx->r17, 0X5300);
    // 0x00228440: jal         0x00200738
    // 0x00228444: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_00200738(rdram, ctx);
        goto after_0;
    // 0x00228444: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_0:
    // 0x00228448: addiu       $a0, $s1, 0x5314
    ctx->r4 = ADD32(ctx->r17, 0X5314);
    // 0x0022844C: jal         0x00200518
    // 0x00228450: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_00200518(rdram, ctx);
        goto after_1;
    // 0x00228450: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_1:
    // 0x00228454: beq         $s2, $zero, L_00228468
    if (ctx->r18 == 0) {
        // 0x00228458: sw          $s2, 0x290($s0)
        MEM_W(0X290, ctx->r16) = ctx->r18;
            goto L_00228468;
    }
    // 0x00228458: sw          $s2, 0x290($s0)
    MEM_W(0X290, ctx->r16) = ctx->r18;
    // 0x0022845C: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
    // 0x00228460: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x00228464: sw          $v0, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r2;
L_00228468:
    // 0x00228468: addu        $v0, $s0, $zero
    ctx->r2 = ADD32(ctx->r16, 0);
L_0022846C:
    // 0x0022846C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x00228470: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x00228474: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00228478: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0022847C: jr          $ra
    // 0x00228480: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00228480: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_0028415C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0028415C: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x00284160: lw          $v0, 0x1BB0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1BB0);
    // 0x00284164: lw          $v0, 0xDC($v0)
    ctx->r2 = MEM_W(ctx->r2, 0XDC);
    // 0x00284168: nor         $v0, $zero, $v0
    ctx->r2 = ~(0 | ctx->r2);
    // 0x0028416C: jr          $ra
    // 0x00284170: sltu        $v0, $zero, $v0
    ctx->r2 = 0 < ctx->r2 ? 1 : 0;
    return;
    // 0x00284170: sltu        $v0, $zero, $v0
    ctx->r2 = 0 < ctx->r2 ? 1 : 0;
;}
RECOMP_FUNC void func_0020C0D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0020C0D0: lwc1        $f0, 0x0($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X0);
    // 0x0020C0D4: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x0020C0D8: swc1        $f0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->f0.u32l;
    // 0x0020C0DC: lwc1        $f0, 0x4($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X4);
    // 0x0020C0E0: swc1        $f0, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->f0.u32l;
    // 0x0020C0E4: lwc1        $f0, 0x8($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X8);
    // 0x0020C0E8: swc1        $f0, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->f0.u32l;
    // 0x0020C0EC: lwc1        $f0, 0xC($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0XC);
    // 0x0020C0F0: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    // 0x0020C0F4: lwc1        $f0, 0x10($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X10);
    // 0x0020C0F8: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    // 0x0020C0FC: lwc1        $f0, 0x14($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X14);
    // 0x0020C100: addu        $t3, $zero, $zero
    ctx->r11 = ADD32(0, 0);
    // 0x0020C104: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    // 0x0020C108: lwc1        $f0, 0x30($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X30);
    // 0x0020C10C: addiu       $t5, $sp, 0x10
    ctx->r13 = ADD32(ctx->r29, 0X10);
    // 0x0020C110: swc1        $f0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f0.u32l;
    // 0x0020C114: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    // 0x0020C118: lwc1        $f0, 0x34($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X34);
    // 0x0020C11C: addiu       $v1, $sp, 0x20
    ctx->r3 = ADD32(ctx->r29, 0X20);
    // 0x0020C120: swc1        $f0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f0.u32l;
    // 0x0020C124: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x0020C128: lwc1        $f0, 0x38($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X38);
    // 0x0020C12C: addiu       $a1, $sp, 0x30
    ctx->r5 = ADD32(ctx->r29, 0X30);
    // 0x0020C130: swc1        $f0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f0.u32l;
    // 0x0020C134: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
L_0020C138:
    // 0x0020C138: addu        $t2, $zero, $zero
    ctx->r10 = ADD32(0, 0);
    // 0x0020C13C: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x0020C140: addu        $t1, $t5, $zero
    ctx->r9 = ADD32(ctx->r13, 0);
    // 0x0020C144: addu        $t0, $sp, $zero
    ctx->r8 = ADD32(ctx->r29, 0);
    // 0x0020C148: addu        $a3, $a0, $zero
    ctx->r7 = ADD32(ctx->r4, 0);
L_0020C14C:
    // 0x0020C14C: addu        $v0, $t4, $a3
    ctx->r2 = ADD32(ctx->r12, ctx->r7);
    // 0x0020C150: lwc1        $f1, 0x0($v0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r2, 0X0);
    // 0x0020C154: lwc1        $f0, 0x0($t0)
    ctx->f0.u32l = MEM_W(ctx->r8, 0X0);
    // 0x0020C158: mul.s       $f2, $f1, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x0020C15C: lwc1        $f0, 0x0($t1)
    ctx->f0.u32l = MEM_W(ctx->r9, 0X0);
    // 0x0020C160: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x0020C164: c.lt.s      $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f2.fl < ctx->f1.fl;
    // 0x0020C168: nop

    // 0x0020C16C: bc1f        L_0020C18C
    if (!c1cs) {
        // 0x0020C170: nop
    
            goto L_0020C18C;
    }
    // 0x0020C170: nop

    // 0x0020C174: lwc1        $f0, 0x0($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X0);
    // 0x0020C178: add.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f2.fl;
    // 0x0020C17C: swc1        $f0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f0.u32l;
    // 0x0020C180: lwc1        $f0, 0x0($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X0);
    // 0x0020C184: j           L_0020C1A0
    // 0x0020C188: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
        goto L_0020C1A0;
    // 0x0020C188: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
L_0020C18C:
    // 0x0020C18C: lwc1        $f0, 0x0($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X0);
    // 0x0020C190: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x0020C194: swc1        $f0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f0.u32l;
    // 0x0020C198: lwc1        $f0, 0x0($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X0);
    // 0x0020C19C: add.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f2.fl;
L_0020C1A0:
    // 0x0020C1A0: swc1        $f0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f0.u32l;
    // 0x0020C1A4: addiu       $t1, $t1, 0x4
    ctx->r9 = ADD32(ctx->r9, 0X4);
    // 0x0020C1A8: addiu       $t0, $t0, 0x4
    ctx->r8 = ADD32(ctx->r8, 0X4);
    // 0x0020C1AC: addiu       $t2, $t2, 0x1
    ctx->r10 = ADD32(ctx->r10, 0X1);
    // 0x0020C1B0: slti        $v0, $t2, 0x3
    ctx->r2 = SIGNED(ctx->r10) < 0X3 ? 1 : 0;
    // 0x0020C1B4: bne         $v0, $zero, L_0020C14C
    if (ctx->r2 != 0) {
        // 0x0020C1B8: addiu       $a3, $a3, 0x10
        ctx->r7 = ADD32(ctx->r7, 0X10);
            goto L_0020C14C;
    }
    // 0x0020C1B8: addiu       $a3, $a3, 0x10
    ctx->r7 = ADD32(ctx->r7, 0X10);
    // 0x0020C1BC: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
    // 0x0020C1C0: addiu       $t3, $t3, 0x1
    ctx->r11 = ADD32(ctx->r11, 0X1);
    // 0x0020C1C4: slti        $v0, $t3, 0x3
    ctx->r2 = SIGNED(ctx->r11) < 0X3 ? 1 : 0;
    // 0x0020C1C8: bne         $v0, $zero, L_0020C138
    if (ctx->r2 != 0) {
        // 0x0020C1CC: addiu       $v1, $v1, 0x4
        ctx->r3 = ADD32(ctx->r3, 0X4);
            goto L_0020C138;
    }
    // 0x0020C1CC: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x0020C1D0: lwc1        $f0, 0x20($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X20);
    // 0x0020C1D4: swc1        $f0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f0.u32l;
    // 0x0020C1D8: lwc1        $f0, 0x24($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X24);
    // 0x0020C1DC: swc1        $f0, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->f0.u32l;
    // 0x0020C1E0: lwc1        $f0, 0x28($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X28);
    // 0x0020C1E4: swc1        $f0, 0x8($a2)
    MEM_W(0X8, ctx->r6) = ctx->f0.u32l;
    // 0x0020C1E8: lwc1        $f0, 0x30($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X30);
    // 0x0020C1EC: swc1        $f0, 0xC($a2)
    MEM_W(0XC, ctx->r6) = ctx->f0.u32l;
    // 0x0020C1F0: lwc1        $f0, 0x34($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X34);
    // 0x0020C1F4: swc1        $f0, 0x10($a2)
    MEM_W(0X10, ctx->r6) = ctx->f0.u32l;
    // 0x0020C1F8: lwc1        $f0, 0x38($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X38);
    // 0x0020C1FC: swc1        $f0, 0x14($a2)
    MEM_W(0X14, ctx->r6) = ctx->f0.u32l;
    // 0x0020C200: jr          $ra
    // 0x0020C204: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x0020C204: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_0045D97C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
;}
RECOMP_FUNC void func_0042F868(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0042F868: lui         $a2, 0x800F
    ctx->r6 = S32(0X800F << 16);
    // 0x0042F86C: addiu       $a2, $a2, 0x56B0
    ctx->r6 = ADD32(ctx->r6, 0X56B0);
    // 0x0042F870: lw          $v0, 0x1B4($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X1B4);
    // 0x0042F874: blez        $v0, L_0042F924
    if (SIGNED(ctx->r2) <= 0) {
        // 0x0042F878: addu        $a1, $zero, $zero
        ctx->r5 = ADD32(0, 0);
            goto L_0042F924;
    }
    // 0x0042F878: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x0042F87C: lui         $a3, 0x800B
    ctx->r7 = S32(0X800B << 16);
    // 0x0042F880: lw          $a3, 0x6D20($a3)
    ctx->r7 = MEM_W(ctx->r7, 0X6D20);
    // 0x0042F884: lui         $t3, 0x1234
    ctx->r11 = S32(0X1234 << 16);
    // 0x0042F888: ori         $t3, $t3, 0x5678
    ctx->r11 = ctx->r11 | 0X5678;
    // 0x0042F88C: lui         $t2, 0x8765
    ctx->r10 = S32(0X8765 << 16);
    // 0x0042F890: ori         $t2, $t2, 0x4321
    ctx->r10 = ctx->r10 | 0X4321;
    // 0x0042F894: lui         $t1, 0x1234
    ctx->r9 = S32(0X1234 << 16);
    // 0x0042F898: ori         $t1, $t1, 0x8765
    ctx->r9 = ctx->r9 | 0X8765;
    // 0x0042F89C: addu        $t0, $v0, $zero
    ctx->r8 = ADD32(ctx->r2, 0);
    // 0x0042F8A0: addu        $a0, $a2, $zero
    ctx->r4 = ADD32(ctx->r6, 0);
L_0042F8A4:
    // 0x0042F8A4: lw          $v0, 0x14($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X14);
    // 0x0042F8A8: mult        $a3, $v0
    result = S64(S32(ctx->r7)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x0042F8AC: mflo        $t4
    ctx->r12 = lo;
    // 0x0042F8B0: nop

    // 0x0042F8B4: nop

    // 0x0042F8B8: mult        $t4, $t3
    result = S64(S32(ctx->r12)) * S64(S32(ctx->r11)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x0042F8BC: lw          $v1, 0x1C4($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X1C4);
    // 0x0042F8C0: mflo        $t4
    ctx->r12 = lo;
    // 0x0042F8C4: addu        $v1, $v1, $t4
    ctx->r3 = ADD32(ctx->r3, ctx->r12);
    // 0x0042F8C8: sw          $v1, 0x1C4($a2)
    MEM_W(0X1C4, ctx->r6) = ctx->r3;
    // 0x0042F8CC: lw          $v0, 0x94($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X94);
    // 0x0042F8D0: mult        $a3, $v0
    result = S64(S32(ctx->r7)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x0042F8D4: mflo        $t4
    ctx->r12 = lo;
    // 0x0042F8D8: nop

    // 0x0042F8DC: nop

    // 0x0042F8E0: mult        $t4, $t2
    result = S64(S32(ctx->r12)) * S64(S32(ctx->r10)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x0042F8E4: mflo        $t4
    ctx->r12 = lo;
    // 0x0042F8E8: addu        $v1, $v1, $t4
    ctx->r3 = ADD32(ctx->r3, ctx->r12);
    // 0x0042F8EC: sw          $v1, 0x1C4($a2)
    MEM_W(0X1C4, ctx->r6) = ctx->r3;
    // 0x0042F8F0: lw          $v0, 0x114($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X114);
    // 0x0042F8F4: mult        $a3, $v0
    result = S64(S32(ctx->r7)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x0042F8F8: mflo        $t4
    ctx->r12 = lo;
    // 0x0042F8FC: nop

    // 0x0042F900: nop

    // 0x0042F904: mult        $t4, $t1
    result = S64(S32(ctx->r12)) * S64(S32(ctx->r9)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x0042F908: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x0042F90C: addiu       $a0, $a0, 0x20
    ctx->r4 = ADD32(ctx->r4, 0X20);
    // 0x0042F910: slt         $v0, $a1, $t0
    ctx->r2 = SIGNED(ctx->r5) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x0042F914: mflo        $t4
    ctx->r12 = lo;
    // 0x0042F918: addu        $v1, $v1, $t4
    ctx->r3 = ADD32(ctx->r3, ctx->r12);
    // 0x0042F91C: bne         $v0, $zero, L_0042F8A4
    if (ctx->r2 != 0) {
        // 0x0042F920: sw          $v1, 0x1C4($a2)
        MEM_W(0X1C4, ctx->r6) = ctx->r3;
            goto L_0042F8A4;
    }
    // 0x0042F920: sw          $v1, 0x1C4($a2)
    MEM_W(0X1C4, ctx->r6) = ctx->r3;
L_0042F924:
    // 0x0042F924: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x0042F928: lw          $v1, 0x6D20($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X6D20);
    // 0x0042F92C: lw          $v0, 0x194($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X194);
    // 0x0042F930: mult        $v1, $v0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x0042F934: mflo        $t4
    ctx->r12 = lo;
    // 0x0042F938: lui         $v0, 0x8765
    ctx->r2 = S32(0X8765 << 16);
    // 0x0042F93C: ori         $v0, $v0, 0x1234
    ctx->r2 = ctx->r2 | 0X1234;
    // 0x0042F940: mult        $t4, $v0
    result = S64(S32(ctx->r12)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x0042F944: lw          $v0, 0x1C4($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X1C4);
    // 0x0042F948: mflo        $t4
    ctx->r12 = lo;
    // 0x0042F94C: addu        $v0, $v0, $t4
    ctx->r2 = ADD32(ctx->r2, ctx->r12);
    // 0x0042F950: jr          $ra
    // 0x0042F954: sw          $v0, 0x1C4($a2)
    MEM_W(0X1C4, ctx->r6) = ctx->r2;
    return;
    // 0x0042F954: sw          $v0, 0x1C4($a2)
    MEM_W(0X1C4, ctx->r6) = ctx->r2;
;}
RECOMP_FUNC void func_004194A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004194A0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x004194A4: addu        $a0, $a2, $zero
    ctx->r4 = ADD32(ctx->r6, 0);
    // 0x004194A8: lui         $a2, 0x44
    ctx->r6 = S32(0X44 << 16);
    // 0x004194AC: addiu       $a2, $a2, -0x73C8
    ctx->r6 = ADD32(ctx->r6, -0X73C8);
    // 0x004194B0: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x004194B4: jal         0x00416894
    // 0x004194B8: nop

    func_00416894(rdram, ctx);
        goto after_0;
    // 0x004194B8: nop

    after_0:
    // 0x004194BC: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x004194C0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x004194C4: jr          $ra
    // 0x004194C8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x004194C8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0020B4D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0020B4D0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0020B4D4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x0020B4D8: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x0020B4DC: jal         0x00209AF4
    // 0x0020B4E0: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_00209AF4(rdram, ctx);
        goto after_0;
    // 0x0020B4E0: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_0:
    // 0x0020B4E4: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x0020B4E8: jr          $ra
    // 0x0020B4EC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0020B4EC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_004276A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004276A0: andi        $a3, $s3, 0xFF
    ctx->r7 = ctx->r19 & 0XFF;
    // 0x004276A4: sll         $v0, $a1, 1
    ctx->r2 = S32(ctx->r5 << 1);
    // 0x004276A8: addu        $v0, $s4, $v0
    ctx->r2 = ADD32(ctx->r20, ctx->r2);
    // 0x004276AC: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x004276B0: jal         0x004276F0
    // 0x004276B4: sh          $v1, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r3;
    func_004276F0(rdram, ctx);
        goto after_0;
    // 0x004276B4: sh          $v1, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r3;
    after_0:
    // 0x004276B8: lw          $t0, 0x70($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X70);
    // 0x004276BC: sw          $zero, 0x0($t0)
    MEM_W(0X0, ctx->r8) = 0;
    // 0x004276C0: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
    // 0x004276C4: lw          $fp, 0x50($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X50);
    // 0x004276C8: lw          $s7, 0x4C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X4C);
    // 0x004276CC: lw          $s6, 0x48($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X48);
    // 0x004276D0: lw          $s5, 0x44($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X44);
    // 0x004276D4: lw          $s4, 0x40($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X40);
    // 0x004276D8: lw          $s3, 0x3C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X3C);
    // 0x004276DC: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x004276E0: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x004276E4: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x004276E8: jr          $ra
    // 0x004276EC: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    return;
    // 0x004276EC: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void func_00268C48(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00268C48: addiu       $sp, $sp, -0x1D8
    ctx->r29 = ADD32(ctx->r29, -0X1D8);
    // 0x00268C4C: sw          $s0, 0x1B0($sp)
    MEM_W(0X1B0, ctx->r29) = ctx->r16;
    // 0x00268C50: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x00268C54: lui         $v0, 0x800F
    ctx->r2 = S32(0X800F << 16);
    // 0x00268C58: addiu       $v0, $v0, 0x1CC0
    ctx->r2 = ADD32(ctx->r2, 0X1CC0);
    // 0x00268C5C: sw          $ra, 0x1C8($sp)
    MEM_W(0X1C8, ctx->r29) = ctx->r31;
    // 0x00268C60: sw          $s5, 0x1C4($sp)
    MEM_W(0X1C4, ctx->r29) = ctx->r21;
    // 0x00268C64: sw          $s4, 0x1C0($sp)
    MEM_W(0X1C0, ctx->r29) = ctx->r20;
    // 0x00268C68: sw          $s3, 0x1BC($sp)
    MEM_W(0X1BC, ctx->r29) = ctx->r19;
    // 0x00268C6C: sw          $s2, 0x1B8($sp)
    MEM_W(0X1B8, ctx->r29) = ctx->r18;
    // 0x00268C70: sw          $s1, 0x1B4($sp)
    MEM_W(0X1B4, ctx->r29) = ctx->r17;
    // 0x00268C74: sdc1        $f20, 0x1D0($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X1D0, ctx->r29);
    // 0x00268C78: sw          $a1, 0x1DC($sp)
    MEM_W(0X1DC, ctx->r29) = ctx->r5;
    // 0x00268C7C: sw          $a2, 0x1E0($sp)
    MEM_W(0X1E0, ctx->r29) = ctx->r6;
    // 0x00268C80: sw          $a3, 0x1E4($sp)
    MEM_W(0X1E4, ctx->r29) = ctx->r7;
    // 0x00268C84: lw          $v1, 0x1DC($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1DC);
    // 0x00268C88: lw          $t0, 0x1E0($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1E0);
    // 0x00268C8C: lw          $t1, 0x1E4($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1E4);
    // 0x00268C90: sw          $v1, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r3;
    // 0x00268C94: sw          $t0, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r8;
    // 0x00268C98: sw          $t1, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r9;
    // 0x00268C9C: lw          $v1, 0x0($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X0);
    // 0x00268CA0: lw          $t0, 0x4($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X4);
    // 0x00268CA4: lw          $t1, 0x8($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X8);
    // 0x00268CA8: lw          $t2, 0xC($s0)
    ctx->r10 = MEM_W(ctx->r16, 0XC);
    // 0x00268CAC: sw          $v1, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r3;
    // 0x00268CB0: sw          $t0, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r8;
    // 0x00268CB4: sw          $t1, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->r9;
    // 0x00268CB8: sw          $t2, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->r10;
    // 0x00268CBC: lw          $v1, 0x10($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X10);
    // 0x00268CC0: lw          $t0, 0x14($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X14);
    // 0x00268CC4: sw          $v1, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r3;
    // 0x00268CC8: sw          $t0, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r8;
    // 0x00268CCC: lw          $s5, 0x1E8($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X1E8);
    // 0x00268CD0: lwc1        $f20, 0x1EC($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1EC);
    // 0x00268CD4: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x00268CD8: lw          $a1, 0x74($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X74);
    // 0x00268CDC: lw          $a2, 0x78($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X78);
    // 0x00268CE0: lw          $a3, 0x7C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X7C);
    // 0x00268CE4: lui         $s3, 0x800F
    ctx->r19 = S32(0X800F << 16);
    // 0x00268CE8: lb          $s3, 0x1CC6($s3)
    ctx->r19 = MEM_B(ctx->r19, 0X1CC6);
    // 0x00268CEC: lui         $s4, 0x800F
    ctx->r20 = S32(0X800F << 16);
    // 0x00268CF0: lb          $s4, 0x1CC4($s4)
    ctx->r20 = MEM_B(ctx->r20, 0X1CC4);
    // 0x00268CF4: lui         $s2, 0x800F
    ctx->r18 = S32(0X800F << 16);
    // 0x00268CF8: lw          $s2, 0x1ADC($s2)
    ctx->r18 = MEM_W(ctx->r18, 0X1ADC);
    // 0x00268CFC: addiu       $v0, $sp, 0xB8
    ctx->r2 = ADD32(ctx->r29, 0XB8);
    // 0x00268D00: lui         $at, 0x800F
    ctx->r1 = S32(0X800F << 16);
    // 0x00268D04: sb          $zero, 0x1CC6($at)
    MEM_B(0X1CC6, ctx->r1) = 0;
    // 0x00268D08: lui         $at, 0x800F
    ctx->r1 = S32(0X800F << 16);
    // 0x00268D0C: sb          $zero, 0x1CC4($at)
    MEM_B(0X1CC4, ctx->r1) = 0;
    // 0x00268D10: lui         $at, 0x800F
    ctx->r1 = S32(0X800F << 16);
    // 0x00268D14: sw          $v0, 0x1ADC($at)
    MEM_W(0X1ADC, ctx->r1) = ctx->r2;
    // 0x00268D18: jal         0x00239F00
    // 0x00268D1C: nop

    func_00239F00(rdram, ctx);
        goto after_0;
    // 0x00268D1C: nop

    after_0:
    // 0x00268D20: lwc1        $f0, 0x78($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X78);
    // 0x00268D24: lui         $a2, 0x3E80
    ctx->r6 = S32(0X3E80 << 16);
    // 0x00268D28: swc1        $f0, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f0.u32l;
    // 0x00268D2C: lwc1        $f0, 0x4($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X4);
    // 0x00268D30: lwc1        $f1, 0x78($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X78);
    // 0x00268D34: addiu       $s1, $sp, 0x40
    ctx->r17 = ADD32(ctx->r29, 0X40);
    // 0x00268D38: swc1        $f0, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->f0.u32l;
    // 0x00268D3C: swc1        $f1, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    // 0x00268D40: lwc1        $f0, 0xC($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0XC);
    // 0x00268D44: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x00268D48: swc1        $f0, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->f0.u32l;
    // 0x00268D4C: lw          $v0, 0x10($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X10);
    // 0x00268D50: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00268D54: lwc1        $f0, 0x7ED8($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X7ED8);
    // 0x00268D58: addiu       $a1, $sp, 0x30
    ctx->r5 = ADD32(ctx->r29, 0X30);
    // 0x00268D5C: lui         $at, 0x800F
    ctx->r1 = S32(0X800F << 16);
    // 0x00268D60: sw          $s2, 0x1ADC($at)
    MEM_W(0X1ADC, ctx->r1) = ctx->r18;
    // 0x00268D64: lw          $v1, 0x90($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X90);
    // 0x00268D68: lw          $t0, 0x94($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X94);
    // 0x00268D6C: lw          $t1, 0x98($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X98);
    // 0x00268D70: lw          $t2, 0x9C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X9C);
    // 0x00268D74: sw          $v1, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r3;
    // 0x00268D78: sw          $t0, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r8;
    // 0x00268D7C: sw          $t1, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r9;
    // 0x00268D80: sw          $t2, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r10;
    // 0x00268D84: lw          $v1, 0xA0($sp)
    ctx->r3 = MEM_W(ctx->r29, 0XA0);
    // 0x00268D88: lw          $t0, 0xA4($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XA4);
    // 0x00268D8C: sw          $v1, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r3;
    // 0x00268D90: sw          $t0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r8;
    // 0x00268D94: lw          $v1, 0xA8($sp)
    ctx->r3 = MEM_W(ctx->r29, 0XA8);
    // 0x00268D98: lw          $t0, 0xAC($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XAC);
    // 0x00268D9C: lw          $t1, 0xB0($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XB0);
    // 0x00268DA0: sw          $v1, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r3;
    // 0x00268DA4: sw          $t0, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r8;
    // 0x00268DA8: sw          $t1, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r9;
    // 0x00268DAC: lui         $at, 0x800F
    ctx->r1 = S32(0X800F << 16);
    // 0x00268DB0: sb          $s3, 0x1CC6($at)
    MEM_B(0X1CC6, ctx->r1) = ctx->r19;
    // 0x00268DB4: lui         $at, 0x800F
    ctx->r1 = S32(0X800F << 16);
    // 0x00268DB8: sb          $s4, 0x1CC4($at)
    MEM_B(0X1CC4, ctx->r1) = ctx->r20;
    // 0x00268DBC: sw          $zero, 0x30($sp)
    MEM_W(0X30, ctx->r29) = 0;
    // 0x00268DC0: sw          $zero, 0x38($sp)
    MEM_W(0X38, ctx->r29) = 0;
    // 0x00268DC4: swc1        $f0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f0.u32l;
    // 0x00268DC8: jal         0x0020DFE0
    // 0x00268DCC: sw          $v0, 0x1A8($sp)
    MEM_W(0X1A8, ctx->r29) = ctx->r2;
    func_0020DFE0(rdram, ctx);
        goto after_1;
    // 0x00268DCC: sw          $v0, 0x1A8($sp)
    MEM_W(0X1A8, ctx->r29) = ctx->r2;
    after_1:
    // 0x00268DD0: jal         0x0020F040
    // 0x00268DD4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_0020F040(rdram, ctx);
        goto after_2;
    // 0x00268DD4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_2:
    // 0x00268DD8: addiu       $a0, $sp, 0x50
    ctx->r4 = ADD32(ctx->r29, 0X50);
    // 0x00268DDC: lui         $a2, 0x43CC
    ctx->r6 = S32(0X43CC << 16);
    // 0x00268DE0: ori         $a2, $a2, 0xCCCC
    ctx->r6 = ctx->r6 | 0XCCCC;
    // 0x00268DE4: jal         0x0020EF60
    // 0x00268DE8: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_0020EF60(rdram, ctx);
        goto after_3;
    // 0x00268DE8: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_3:
    // 0x00268DEC: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x00268DF0: addiu       $a0, $a0, 0x7590
    ctx->r4 = ADD32(ctx->r4, 0X7590);
    // 0x00268DF4: lw          $v1, 0x60($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X60);
    // 0x00268DF8: lw          $t0, 0x64($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X64);
    // 0x00268DFC: lw          $t1, 0x68($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X68);
    // 0x00268E00: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    // 0x00268E04: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    // 0x00268E08: sw          $t1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r9;
    // 0x00268E0C: lw          $v0, 0x1A8($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1A8);
    // 0x00268E10: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x00268E14: swc1        $f20, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f20.u32l;
    // 0x00268E18: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x00268E1C: lw          $v1, 0x54($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X54);
    // 0x00268E20: lw          $t0, 0x58($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X58);
    // 0x00268E24: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    // 0x00268E28: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x00268E2C: lw          $a3, 0x50($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X50);
    // 0x00268E30: jal         0x00227240
    // 0x00268E34: addu        $a2, $s5, $zero
    ctx->r6 = ADD32(ctx->r21, 0);
    func_00227240(rdram, ctx);
        goto after_4;
    // 0x00268E34: addu        $a2, $s5, $zero
    ctx->r6 = ADD32(ctx->r21, 0);
    after_4:
    // 0x00268E38: lw          $ra, 0x1C8($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C8);
    // 0x00268E3C: lw          $s5, 0x1C4($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X1C4);
    // 0x00268E40: lw          $s4, 0x1C0($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X1C0);
    // 0x00268E44: lw          $s3, 0x1BC($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1BC);
    // 0x00268E48: lw          $s2, 0x1B8($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1B8);
    // 0x00268E4C: lw          $s1, 0x1B4($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1B4);
    // 0x00268E50: lw          $s0, 0x1B0($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1B0);
    // 0x00268E54: ldc1        $f20, 0x1D0($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X1D0);
    // 0x00268E58: jr          $ra
    // 0x00268E5C: addiu       $sp, $sp, 0x1D8
    ctx->r29 = ADD32(ctx->r29, 0X1D8);
    return;
    // 0x00268E5C: addiu       $sp, $sp, 0x1D8
    ctx->r29 = ADD32(ctx->r29, 0X1D8);
;}
RECOMP_FUNC void func_0020188C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0020188C: addiu       $v0, $a1, 0x1
    ctx->r2 = ADD32(ctx->r5, 0X1);
    // 0x00201890: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x00201894: addu        $v0, $a0, $v0
    ctx->r2 = ADD32(ctx->r4, ctx->r2);
    // 0x00201898: sll         $a1, $a1, 2
    ctx->r5 = S32(ctx->r5 << 2);
    // 0x0020189C: addu        $a0, $a0, $a1
    ctx->r4 = ADD32(ctx->r4, ctx->r5);
    // 0x002018A0: lw          $v0, 0x4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4);
    // 0x002018A4: lw          $v1, 0x4($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X4);
    // 0x002018A8: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x002018AC: sw          $v0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r2;
    // 0x002018B0: lw          $v0, 0x4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X4);
    // 0x002018B4: jr          $ra
    // 0x002018B8: nop

    return;
    // 0x002018B8: nop

;}
RECOMP_FUNC void func_0028B430(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0028B430: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
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
RECOMP_FUNC void func_004219E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004219E0: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x004219E4: lw          $v0, 0x990($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X990);
    // 0x004219E8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x004219EC: beq         $v0, $zero, L_00421A04
    if (ctx->r2 == 0) {
        // 0x004219F0: sw          $ra, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r31;
            goto L_00421A04;
    }
    // 0x004219F0: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x004219F4: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x004219F8: lw          $a0, 0x2028($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X2028);
    // 0x004219FC: j           L_00421A0C
    // 0x00421A00: nop

        goto L_00421A0C;
    // 0x00421A00: nop

L_00421A04:
    // 0x00421A04: lw          $v0, 0x20($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X20);
    // 0x00421A08: lb          $a0, 0x4($v0)
    ctx->r4 = MEM_B(ctx->r2, 0X4);
L_00421A0C:
    // 0x00421A0C: jal         0x00426480
    // 0x00421A10: nop

    func_00426480(rdram, ctx);
        goto after_0;
    // 0x00421A10: nop

    after_0:
    // 0x00421A14: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x00421A18: jr          $ra
    // 0x00421A1C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00421A1C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0024E9D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0024E9D0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x0024E9D4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0024E9D8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x0024E9DC: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x0024E9E0: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x0024E9E4: lwc1        $f1, 0xA9C($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0XA9C);
    // 0x0024E9E8: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x0024E9EC: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x0024E9F0: nop

    // 0x0024E9F4: bc1t        L_0024EAE0
    if (c1cs) {
        // 0x0024E9F8: addu        $s1, $a1, $zero
        ctx->r17 = ADD32(ctx->r5, 0);
            goto L_0024EAE0;
    }
    // 0x0024E9F8: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x0024E9FC: lh          $v1, 0xA08($s0)
    ctx->r3 = MEM_H(ctx->r16, 0XA08);
    // 0x0024EA00: addiu       $v0, $zero, 0x12
    ctx->r2 = ADD32(0, 0X12);
    // 0x0024EA04: beq         $v1, $v0, L_0024EA1C
    if (ctx->r3 == ctx->r2) {
        // 0x0024EA08: addiu       $v0, $zero, 0x10
        ctx->r2 = ADD32(0, 0X10);
            goto L_0024EA1C;
    }
    // 0x0024EA08: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x0024EA0C: beq         $v1, $v0, L_0024EA1C
    if (ctx->r3 == ctx->r2) {
        // 0x0024EA10: addiu       $v0, $zero, 0x11
        ctx->r2 = ADD32(0, 0X11);
            goto L_0024EA1C;
    }
    // 0x0024EA10: addiu       $v0, $zero, 0x11
    ctx->r2 = ADD32(0, 0X11);
    // 0x0024EA14: bne         $v1, $v0, L_0024EA20
    if (ctx->r3 != ctx->r2) {
        // 0x0024EA18: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_0024EA20;
    }
    // 0x0024EA18: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_0024EA1C:
    // 0x0024EA1C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_0024EA20:
    // 0x0024EA20: bne         $v0, $zero, L_0024EAE4
    if (ctx->r2 != 0) {
        // 0x0024EA24: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_0024EAE4;
    }
    // 0x0024EA24: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x0024EA28: jal         0x00268A2C
    // 0x0024EA2C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_00268A2C(rdram, ctx);
        goto after_0;
    // 0x0024EA2C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_0:
    // 0x0024EA30: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x0024EA34: beq         $v1, $zero, L_0024EAE4
    if (ctx->r3 == 0) {
        // 0x0024EA38: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_0024EAE4;
    }
    // 0x0024EA38: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x0024EA3C: lhu         $v0, 0x52($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X52);
    // 0x0024EA40: andi        $v0, $v0, 0x1000
    ctx->r2 = ctx->r2 & 0X1000;
    // 0x0024EA44: beq         $v0, $zero, L_0024EAE4
    if (ctx->r2 == 0) {
        // 0x0024EA48: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_0024EAE4;
    }
    // 0x0024EA48: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x0024EA4C: lw          $v0, 0x44($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X44);
    // 0x0024EA50: andi        $v0, $v0, 0x800
    ctx->r2 = ctx->r2 & 0X800;
    // 0x0024EA54: bne         $v0, $zero, L_0024EA74
    if (ctx->r2 != 0) {
        // 0x0024EA58: nop
    
            goto L_0024EA74;
    }
    // 0x0024EA58: nop

    // 0x0024EA5C: lhu         $v0, 0x54($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X54);
    // 0x0024EA60: andi        $v0, $v0, 0x10
    ctx->r2 = ctx->r2 & 0X10;
    // 0x0024EA64: bne         $v0, $zero, L_0024EAA8
    if (ctx->r2 != 0) {
        // 0x0024EA68: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_0024EAA8;
    }
    // 0x0024EA68: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0024EA6C: j           L_0024EAD0
    // 0x0024EA70: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
        goto L_0024EAD0;
    // 0x0024EA70: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
L_0024EA74:
    // 0x0024EA74: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x0024EA78: lw          $v0, -0x5528($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X5528);
    // 0x0024EA7C: andi        $v0, $v0, 0x10
    ctx->r2 = ctx->r2 & 0X10;
    // 0x0024EA80: bne         $v0, $zero, L_0024EA90
    if (ctx->r2 != 0) {
        // 0x0024EA84: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_0024EA90;
    }
    // 0x0024EA84: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0024EA88: lbu         $v0, 0x6AA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X6AA);
    // 0x0024EA8C: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
L_0024EA90:
    // 0x0024EA90: bne         $v0, $zero, L_0024EACC
    if (ctx->r2 != 0) {
        // 0x0024EA94: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_0024EACC;
    }
    // 0x0024EA94: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0024EA98: lhu         $v0, 0x54($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X54);
    // 0x0024EA9C: andi        $v0, $v0, 0x10
    ctx->r2 = ctx->r2 & 0X10;
    // 0x0024EAA0: beq         $v0, $zero, L_0024EAE4
    if (ctx->r2 == 0) {
        // 0x0024EAA4: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_0024EAE4;
    }
    // 0x0024EAA4: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_0024EAA8:
    // 0x0024EAA8: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x0024EAAC: lw          $v0, -0x5528($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X5528);
    // 0x0024EAB0: andi        $v0, $v0, 0x10
    ctx->r2 = ctx->r2 & 0X10;
    // 0x0024EAB4: bne         $v0, $zero, L_0024EAC4
    if (ctx->r2 != 0) {
        // 0x0024EAB8: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_0024EAC4;
    }
    // 0x0024EAB8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0024EABC: lbu         $v0, 0x6AB($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X6AB);
    // 0x0024EAC0: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
L_0024EAC4:
    // 0x0024EAC4: beq         $v0, $zero, L_0024EAE0
    if (ctx->r2 == 0) {
        // 0x0024EAC8: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_0024EAE0;
    }
    // 0x0024EAC8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_0024EACC:
    // 0x0024EACC: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
L_0024EAD0:
    // 0x0024EAD0: jal         0x0024E5F0
    // 0x0024EAD4: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    func_0024E5F0(rdram, ctx);
        goto after_1;
    // 0x0024EAD4: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    after_1:
    // 0x0024EAD8: j           L_0024EAE4
    // 0x0024EADC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_0024EAE4;
    // 0x0024EADC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_0024EAE0:
    // 0x0024EAE0: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_0024EAE4:
    // 0x0024EAE4: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x0024EAE8: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x0024EAEC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0024EAF0: jr          $ra
    // 0x0024EAF4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x0024EAF4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_00440B80(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00440B80: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00440B84: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x00440B88: lb          $v0, 0xC7($a1)
    ctx->r2 = MEM_B(ctx->r5, 0XC7);
    // 0x00440B8C: beq         $v0, $zero, L_00440BB0
    if (ctx->r2 == 0) {
        // 0x00440B90: nop
    
            goto L_00440BB0;
    }
    // 0x00440B90: nop

    // 0x00440B94: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x00440B98: lbu         $v0, -0x62E($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X62E);
    // 0x00440B9C: bne         $v0, $zero, L_00440BA8
    if (ctx->r2 != 0) {
        // 0x00440BA0: addiu       $a2, $zero, 0x13
        ctx->r6 = ADD32(0, 0X13);
            goto L_00440BA8;
    }
    // 0x00440BA0: addiu       $a2, $zero, 0x13
    ctx->r6 = ADD32(0, 0X13);
    // 0x00440BA4: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
L_00440BA8:
    // 0x00440BA8: jal         0x00243414
    // 0x00440BAC: nop

    func_00243414(rdram, ctx);
        goto after_0;
    // 0x00440BAC: nop

    after_0:
L_00440BB0:
    // 0x00440BB0: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x00440BB4: jr          $ra
    // 0x00440BB8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00440BB8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0025A228(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0025A228: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0025A22C: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x0025A230: lw          $v0, 0x14($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X14);
    // 0x0025A234: lhu         $a3, 0x78($v0)
    ctx->r7 = MEM_HU(ctx->r2, 0X78);
    // 0x0025A238: lui         $a2, 0x800B
    ctx->r6 = S32(0X800B << 16);
    // 0x0025A23C: addiu       $a2, $a2, -0x358
    ctx->r6 = ADD32(ctx->r6, -0X358);
    // 0x0025A240: jal         0x00245A98
    // 0x0025A244: nop

    func_00245A98(rdram, ctx);
        goto after_0;
    // 0x0025A244: nop

    after_0:
    // 0x0025A248: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x0025A24C: jr          $ra
    // 0x0025A250: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0025A250: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0043EE04(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_00405F0C:
    // 0x0043EE04: addiu       $sp, $sp, -0xB8
    ctx->r29 = ADD32(ctx->r29, -0XB8);
L_00405FDC:
    // 0x0043EE08: sw          $s2, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->r18;
    // 0x0043EE0C: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x0043EE10: sw          $s1, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r17;
    // 0x0043EE14: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x0043EE18: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    // 0x0043EE1C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x0043EE20: sw          $s0, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r16;
    // 0x0043EE24: lui         $s0, 0x800F
    ctx->r16 = S32(0X800F << 16);
    // 0x0043EE28: addiu       $s0, $s0, 0x1F50
    ctx->r16 = ADD32(ctx->r16, 0X1F50);
    // 0x0043EE2C: sw          $ra, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->r31;
    // 0x0043EE30: sdc1        $f20, 0xB0($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0XB0, ctx->r29);
    // 0x0043EE34: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x0043EE38: addu        $v1, $a3, $zero
    ctx->r3 = ADD32(ctx->r7, 0);
    // 0x0043EE3C: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    // 0x0043EE40: ori         $v0, $v0, 0x8000
    ctx->r2 = ctx->r2 | 0X8000;
    // 0x0043EE44: jal         0x00246108
    // 0x0043EE48: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    func_00246108(rdram, ctx);
        goto after_0;
    // 0x0043EE48: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    after_0:
    // 0x0043EE4C: lui         $a0, 0xFFFF
    ctx->r4 = S32(0XFFFF << 16);
    // 0x0043EE50: ori         $a0, $a0, 0x7FFF
    ctx->r4 = ctx->r4 | 0X7FFF;
    // 0x0043EE54: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x0043EE58: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x0043EE5C: and         $v0, $v0, $a0
    ctx->r2 = ctx->r2 & ctx->r4;
    // 0x0043EE60: bne         $v1, $zero, L_0043EE90
    if (ctx->r3 != 0) {
        // 0x0043EE64: sw          $v0, 0x0($s0)
        MEM_W(0X0, ctx->r16) = ctx->r2;
            goto L_0043EE90;
    }
    // 0x0043EE64: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x0043EE68: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x0043EE6C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x0043EE70: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0043EE74: lwc1        $f0, 0x494($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X494);
    // 0x0043EE78: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x0043EE7C: swc1        $f0, 0x1FC($a0)
    MEM_W(0X1FC, ctx->r4) = ctx->f0.u32l;
    // 0x0043EE80: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0043EE84: sw          $v0, -0x624($at)
    MEM_W(-0X624, ctx->r1) = ctx->r2;
    // 0x0043EE88: j           L_00405FDC
    // 0x0043EE8C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    entry_00405FDC(rdram, ctx);
    return;
    // 0x0043EE8C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
L_0043EE90:
    // 0x0043EE90: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x0043EE94: lui         $a2, 0x3E86
    ctx->r6 = S32(0X3E86 << 16);
    // 0x0043EE98: ori         $a2, $a2, 0xA93
    ctx->r6 = ctx->r6 | 0XA93;
    // 0x0043EE9C: lw          $a3, 0x20($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X20);
    // 0x0043EEA0: jal         0x00245BAC
    // 0x0043EEA4: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_00245BAC(rdram, ctx);
        goto after_1;
    // 0x0043EEA4: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_1:
    // 0x0043EEA8: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x0043EEAC: addiu       $v1, $v1, -0x61F
    ctx->r3 = ADD32(ctx->r3, -0X61F);
    // 0x0043EEB0: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x0043EEB4: beq         $v0, $zero, L_0043EFE4
    if (ctx->r2 == 0) {
        // 0x0043EEB8: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_0043EFE4;
    }
    // 0x0043EEB8: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x0043EEBC: lw          $a0, 0x23($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X23);
    // 0x0043EEC0: bnel        $a0, $v0, L_0043EF98
    if (ctx->r4 != ctx->r2) {
        // 0x0043EEC4: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_0043EF98;
    }
    goto skip_0;
    // 0x0043EEC4: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    skip_0:
    // 0x0043EEC8: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x0043EECC: lw          $v1, -0x600($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X600);
    // 0x0043EED0: beq         $v1, $a0, L_0043EF00
    if (ctx->r3 == ctx->r4) {
        // 0x0043EED4: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_0043EF00;
    }
    // 0x0043EED4: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x0043EED8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x0043EEDC: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x0043EEE0: lw          $v1, -0x604($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X604);
    // 0x0043EEE4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x0043EEE8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x0043EEEC: lwc1        $f0, 0x10($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X10);
    // 0x0043EEF0: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0043EEF4: swc1        $f0, -0x608($at)
    MEM_W(-0X608, ctx->r1) = ctx->f0.u32l;
    // 0x0043EEF8: j           L_00405F0C
    // 0x0043EEFC: addiu       $s0, $zero, 0x5
    ctx->r16 = ADD32(0, 0X5);
    entry_00405F0C(rdram, ctx);
    return;
    // 0x0043EEFC: addiu       $s0, $zero, 0x5
    ctx->r16 = ADD32(0, 0X5);
L_0043EF00:
    // 0x0043EF00: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0043EF04: sw          $zero, -0x608($at)
    MEM_W(-0X608, ctx->r1) = 0;
    // 0x0043EF08: addiu       $s0, $zero, 0x5
    ctx->r16 = ADD32(0, 0X5);
L_0043EF0C:
    // 0x0043EF0C: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x0043EF10: lw          $v0, -0x600($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X600);
    // 0x0043EF14: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x0043EF18: lw          $a0, -0x604($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X604);
    // 0x0043EF1C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x0043EF20: sll         $v1, $v0, 2
    ctx->r3 = S32(ctx->r2 << 2);
    // 0x0043EF24: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x0043EF28: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x0043EF2C: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x0043EF30: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0043EF34: sw          $v0, -0x600($at)
    MEM_W(-0X600, ctx->r1) = ctx->r2;
    // 0x0043EF38: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x0043EF3C: bne         $v0, $s0, L_0043EF4C
    if (ctx->r2 != ctx->r16) {
        // 0x0043EF40: nop
    
            goto L_0043EF4C;
    }
    // 0x0043EF40: nop

    // 0x0043EF44: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0043EF48: sw          $zero, -0x600($at)
    MEM_W(-0X600, ctx->r1) = 0;
L_0043EF4C:
    // 0x0043EF4C: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x0043EF50: lw          $v0, -0x600($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X600);
    // 0x0043EF54: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x0043EF58: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0043EF5C: lwc1        $f14, 0x498($at)
    ctx->f14.u32l = MEM_W(ctx->r1, 0X498);
    // 0x0043EF60: sll         $v1, $v0, 2
    ctx->r3 = S32(ctx->r2 << 2);
    // 0x0043EF64: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x0043EF68: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x0043EF6C: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x0043EF70: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0043EF74: sw          $v0, -0x5FC($at)
    MEM_W(-0X5FC, ctx->r1) = ctx->r2;
    // 0x0043EF78: lwc1        $f20, 0xC($v1)
    ctx->f20.u32l = MEM_W(ctx->r3, 0XC);
    // 0x0043EF7C: cvt.s.w     $f20, $f20
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    ctx->f20.fl = CVT_S_W(ctx->f20.u32l);
    // 0x0043EF80: jal         0x002119FC
    // 0x0043EF84: nop

    func_002119FC(rdram, ctx);
        goto after_2;
    // 0x0043EF84: nop

    after_2:
    // 0x0043EF88: c.le.s      $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f20.fl <= ctx->f0.fl;
    // 0x0043EF8C: nop

    // 0x0043EF90: bc1t        L_0043EF0C
    if (c1cs) {
        // 0x0043EF94: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_0043EF0C;
    }
    // 0x0043EF94: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
L_0043EF98:
    // 0x0043EF98: lw          $a2, 0x3C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X3C);
    // 0x0043EF9C: jal         0x00404C44
    // 0x0043EFA0: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_00404C44(rdram, ctx);
        goto after_3;
    // 0x0043EFA0: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_3:
    // 0x0043EFA4: bne         $v0, $zero, L_0043EFE4
    if (ctx->r2 != 0) {
        // 0x0043EFA8: nop
    
            goto L_0043EFE4;
    }
    // 0x0043EFA8: nop

    // 0x0043EFAC: lwc1        $f1, 0x3C($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X3C);
    // 0x0043EFB0: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0043EFB4: lwc1        $f0, 0x49C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X49C);
    // 0x0043EFB8: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x0043EFBC: nop

    // 0x0043EFC0: bc1f        L_0043EFE4
    if (!c1cs) {
        // 0x0043EFC4: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_0043EFE4;
    }
    // 0x0043EFC4: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x0043EFC8: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x0043EFCC: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0043EFD0: lwc1        $f0, 0x4A0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X4A0);
    // 0x0043EFD4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x0043EFD8: swc1        $f0, 0x1FC($a0)
    MEM_W(0X1FC, ctx->r4) = ctx->f0.u32l;
    // 0x0043EFDC: jal         0x00243414
    // 0x0043EFE0: nop

    func_00243414(rdram, ctx);
        goto after_4;
    // 0x0043EFE0: nop

    after_4:
L_0043EFE4:
    // 0x0043EFE4: lw          $ra, 0xAC($sp)
    ctx->r31 = MEM_W(ctx->r29, 0XAC);
    // 0x0043EFE8: lw          $s2, 0xA8($sp)
    ctx->r18 = MEM_W(ctx->r29, 0XA8);
    // 0x0043EFEC: lw          $s1, 0xA4($sp)
    ctx->r17 = MEM_W(ctx->r29, 0XA4);
    // 0x0043EFF0: lw          $s0, 0xA0($sp)
    ctx->r16 = MEM_W(ctx->r29, 0XA0);
    // 0x0043EFF4: ldc1        $f20, 0xB0($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0XB0);
    // 0x0043EFF8: jr          $ra
    // 0x0043EFFC: addiu       $sp, $sp, 0xB8
    ctx->r29 = ADD32(ctx->r29, 0XB8);
    return;
    // 0x0043EFFC: addiu       $sp, $sp, 0xB8
    ctx->r29 = ADD32(ctx->r29, 0XB8);
;}
RECOMP_FUNC void func_0045AA40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0045AA40: lui         $v0, 0x44
    ctx->r2 = S32(0X44 << 16);
    // 0x0045AA44: addiu       $v0, $v0, -0x543C
    ctx->r2 = ADD32(ctx->r2, -0X543C);
    // 0x0045AA48: jr          $ra
    // 0x0045AA4C: nop

    return;
    // 0x0045AA4C: nop

;}
RECOMP_FUNC void func_00233190(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00233190: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x00233194: sw          $s6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r22;
    // 0x00233198: addu        $s6, $a1, $zero
    ctx->r22 = ADD32(ctx->r5, 0);
    // 0x0023319C: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x002331A0: addu        $s3, $a3, $zero
    ctx->r19 = ADD32(ctx->r7, 0);
    // 0x002331A4: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x002331A8: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x002331AC: sw          $s5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r21;
    // 0x002331B0: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x002331B4: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x002331B8: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x002331BC: sdc1        $f20, 0x40($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X40, ctx->r29);
    // 0x002331C0: blez        $s3, L_0023323C
    if (SIGNED(ctx->r19) <= 0) {
        // 0x002331C4: addu        $s1, $zero, $zero
        ctx->r17 = ADD32(0, 0);
            goto L_0023323C;
    }
    // 0x002331C4: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x002331C8: addiu       $s5, $zero, 0x57
    ctx->r21 = ADD32(0, 0X57);
    // 0x002331CC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002331D0: lwc1        $f20, 0x642C($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X642C);
    // 0x002331D4: addiu       $s4, $zero, 0x1
    ctx->r20 = ADD32(0, 0X1);
    // 0x002331D8: addu        $s2, $a2, $zero
    ctx->r18 = ADD32(ctx->r6, 0);
L_002331DC:
    // 0x002331DC: lw          $s0, 0x0($s2)
    ctx->r16 = MEM_W(ctx->r18, 0X0);
    // 0x002331E0: lhu         $v0, 0x2($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X2);
    // 0x002331E4: beql        $v0, $s5, L_00233230
    if (ctx->r2 == ctx->r21) {
        // 0x002331E8: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_00233230;
    }
    goto skip_0;
    // 0x002331E8: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_0:
    // 0x002331EC: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x002331F0: addiu       $a1, $s0, 0x4
    ctx->r5 = ADD32(ctx->r16, 0X4);
    // 0x002331F4: jal         0x0020EF2C
    // 0x002331F8: addiu       $a2, $s6, 0x4
    ctx->r6 = ADD32(ctx->r22, 0X4);
    func_0020EF2C(rdram, ctx);
        goto after_0;
    // 0x002331F8: addiu       $a2, $s6, 0x4
    ctx->r6 = ADD32(ctx->r22, 0X4);
    after_0:
    // 0x002331FC: lwc1        $f0, 0x10($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X10);
    // 0x00233200: mul.s       $f0, $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x00233204: lwc1        $f2, 0x14($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X14);
    // 0x00233208: mul.s       $f2, $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x0023320C: lwc1        $f1, 0x18($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x00233210: mul.s       $f1, $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f1.fl);
    // 0x00233214: add.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f2.fl;
    // 0x00233218: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x0023321C: c.le.s      $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f0.fl <= ctx->f20.fl;
    // 0x00233220: nop

    // 0x00233224: bc1tl       L_0023322C
    if (c1cs) {
        // 0x00233228: sh          $s4, 0x128($s0)
        MEM_H(0X128, ctx->r16) = ctx->r20;
            goto L_0023322C;
    }
    goto skip_1;
    // 0x00233228: sh          $s4, 0x128($s0)
    MEM_H(0X128, ctx->r16) = ctx->r20;
    skip_1:
L_0023322C:
    // 0x0023322C: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_00233230:
    // 0x00233230: slt         $v0, $s1, $s3
    ctx->r2 = SIGNED(ctx->r17) < SIGNED(ctx->r19) ? 1 : 0;
    // 0x00233234: bne         $v0, $zero, L_002331DC
    if (ctx->r2 != 0) {
        // 0x00233238: addiu       $s2, $s2, 0x4
        ctx->r18 = ADD32(ctx->r18, 0X4);
            goto L_002331DC;
    }
    // 0x00233238: addiu       $s2, $s2, 0x4
    ctx->r18 = ADD32(ctx->r18, 0X4);
L_0023323C:
    // 0x0023323C: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x00233240: lw          $s6, 0x38($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X38);
    // 0x00233244: lw          $s5, 0x34($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X34);
    // 0x00233248: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x0023324C: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x00233250: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x00233254: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x00233258: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x0023325C: ldc1        $f20, 0x40($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X40);
    // 0x00233260: jr          $ra
    // 0x00233264: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x00233264: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_0028CCB8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0028CCB8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x0028CCBC: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x0028CCC0: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x0028CCC4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0028CCC8: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x0028CCCC: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x0028CCD0: addiu       $s1, $zero, 0x3
    ctx->r17 = ADD32(0, 0X3);
    // 0x0028CCD4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x0028CCD8: subu        $a0, $s1, $s0
    ctx->r4 = SUB32(ctx->r17, ctx->r16);
L_0028CCDC:
    // 0x0028CCDC: sll         $a0, $a0, 3
    ctx->r4 = S32(ctx->r4 << 3);
    // 0x0028CCE0: jal         0x0028CD68
    // 0x0028CCE4: srlv        $a0, $s2, $a0
    ctx->r4 = S32(U32(ctx->r18) >> (ctx->r4 & 31));
    func_0028CD68(rdram, ctx);
        goto after_0;
    // 0x0028CCE4: srlv        $a0, $s2, $a0
    ctx->r4 = S32(U32(ctx->r18) >> (ctx->r4 & 31));
    after_0:
    // 0x0028CCE8: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x0028CCEC: slti        $v0, $s0, 0x4
    ctx->r2 = SIGNED(ctx->r16) < 0X4 ? 1 : 0;
    // 0x0028CCF0: bnel        $v0, $zero, L_0028CCDC
    if (ctx->r2 != 0) {
        // 0x0028CCF4: subu        $a0, $s1, $s0
        ctx->r4 = SUB32(ctx->r17, ctx->r16);
            goto L_0028CCDC;
    }
    goto skip_0;
    // 0x0028CCF4: subu        $a0, $s1, $s0
    ctx->r4 = SUB32(ctx->r17, ctx->r16);
    skip_0:
    // 0x0028CCF8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x0028CCFC: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x0028CD00: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x0028CD04: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0028CD08: jr          $ra
    // 0x0028CD0C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x0028CD0C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_0045436C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_0041B39C:
    // 0x0045436C: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
L_0041B3D0:
    // 0x00454370: lw          $v0, -0x5524($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X5524);
    // 0x00454374: andi        $v0, $v0, 0x10
    ctx->r2 = ctx->r2 & 0X10;
    // 0x00454378: beq         $v0, $zero, L_0045438C
    if (ctx->r2 == 0) {
        // 0x0045437C: lui         $v1, 0x100
        ctx->r3 = S32(0X100 << 16);
            goto L_0045438C;
    }
    // 0x0045437C: lui         $v1, 0x100
    ctx->r3 = S32(0X100 << 16);
    // 0x00454380: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x00454384: j           L_0041B39C
    // 0x00454388: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    entry_0041B39C(rdram, ctx);
    return;
    // 0x00454388: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
L_0045438C:
    // 0x0045438C: lui         $v1, 0xFEFF
    ctx->r3 = S32(0XFEFF << 16);
    // 0x00454390: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x00454394: ori         $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 | 0XFFFF;
    // 0x00454398: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x0045439C: sw          $v0, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r2;
    // 0x004543A0: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x004543A4: lw          $v0, -0x5528($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X5528);
    // 0x004543A8: andi        $v0, $v0, 0x10
    ctx->r2 = ctx->r2 & 0X10;
    // 0x004543AC: beq         $v0, $zero, L_004543C4
    if (ctx->r2 == 0) {
        // 0x004543B0: nop
    
            goto L_004543C4;
    }
    // 0x004543B0: nop

    // 0x004543B4: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x004543B8: addiu       $v0, $v0, 0x588C
    ctx->r2 = ADD32(ctx->r2, 0X588C);
    // 0x004543BC: j           L_0041B3D0
    // 0x004543C0: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    entry_0041B3D0(rdram, ctx);
    return;
    // 0x004543C0: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_004543C4:
    // 0x004543C4: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x004543C8: addiu       $v0, $v0, 0x58A8
    ctx->r2 = ADD32(ctx->r2, 0X58A8);
    // 0x004543CC: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    // 0x004543D0: jr          $ra
    // 0x004543D4: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x004543D4: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void func_00289570(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00289570: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00289574: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x00289578: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x0028957C: jal         0x00288E58
    // 0x00289580: addu        $a2, $a1, $zero
    ctx->r6 = ADD32(ctx->r5, 0);
    func_00288E58(rdram, ctx);
        goto after_0;
    // 0x00289580: addu        $a2, $a1, $zero
    ctx->r6 = ADD32(ctx->r5, 0);
    after_0:
    // 0x00289584: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x00289588: jr          $ra
    // 0x0028958C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0028958C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_004511A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004511A4: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x004511A8: lw          $v0, -0x5334($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X5334);
    // 0x004511AC: jr          $ra
    // 0x004511B0: nop

    return;
    // 0x004511B0: nop

;}
RECOMP_FUNC void func_002601CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002601CC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x002601D0: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x002601D4: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x002601D8: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x002601DC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x002601E0: lw          $v0, 0x14($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X14);
    // 0x002601E4: lw          $v0, 0x14($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X14);
    // 0x002601E8: andi        $v0, $v0, 0x40
    ctx->r2 = ctx->r2 & 0X40;
    // 0x002601EC: beq         $v0, $zero, L_002602AC
    if (ctx->r2 == 0) {
        // 0x002601F0: addu        $s0, $a1, $zero
        ctx->r16 = ADD32(ctx->r5, 0);
            goto L_002602AC;
    }
    // 0x002601F0: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x002601F4: lwc1        $f0, 0x124($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X124);
    // 0x002601F8: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x002601FC: lwc1        $f1, 0x6D28($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X6D28);
    // 0x00260200: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x00260204: mtc1        $zero, $f1
    ctx->f_odd[(1 - 1) * 2] = 0;
    // 0x00260208: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x0026020C: nop

    // 0x00260210: bc1f        L_0026021C
    if (!c1cs) {
        // 0x00260214: swc1        $f0, 0x124($s0)
        MEM_W(0X124, ctx->r16) = ctx->f0.u32l;
            goto L_0026021C;
    }
    // 0x00260214: swc1        $f0, 0x124($s0)
    MEM_W(0X124, ctx->r16) = ctx->f0.u32l;
    // 0x00260218: swc1        $f1, 0x124($s0)
    MEM_W(0X124, ctx->r16) = ctx->f_odd[(1 - 1) * 2];
L_0026021C:
    // 0x0026021C: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // 0x00260220: beq         $v0, $zero, L_002602B0
    if (ctx->r2 == 0) {
        // 0x00260224: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_002602B0;
    }
    // 0x00260224: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x00260228: lwc1        $f0, 0x124($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X124);
    // 0x0026022C: c.le.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl <= ctx->f1.fl;
    // 0x00260230: nop

    // 0x00260234: bc1f        L_002602AC
    if (!c1cs) {
        // 0x00260238: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_002602AC;
    }
    // 0x00260238: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x0026023C: lb          $v1, 0x34($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X34);
    // 0x00260240: beq         $v1, $v0, L_00260278
    if (ctx->r3 == ctx->r2) {
        // 0x00260244: addiu       $v0, $zero, 0xE
        ctx->r2 = ADD32(0, 0XE);
            goto L_00260278;
    }
    // 0x00260244: addiu       $v0, $zero, 0xE
    ctx->r2 = ADD32(0, 0XE);
    // 0x00260248: beq         $v1, $v0, L_00260278
    if (ctx->r3 == ctx->r2) {
        // 0x0026024C: addiu       $v0, $zero, 0xF
        ctx->r2 = ADD32(0, 0XF);
            goto L_00260278;
    }
    // 0x0026024C: addiu       $v0, $zero, 0xF
    ctx->r2 = ADD32(0, 0XF);
    // 0x00260250: beq         $v1, $v0, L_00260278
    if (ctx->r3 == ctx->r2) {
        // 0x00260254: addiu       $v0, $zero, 0x10
        ctx->r2 = ADD32(0, 0X10);
            goto L_00260278;
    }
    // 0x00260254: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x00260258: beq         $v1, $v0, L_00260278
    if (ctx->r3 == ctx->r2) {
        // 0x0026025C: addiu       $v0, $zero, 0x11
        ctx->r2 = ADD32(0, 0X11);
            goto L_00260278;
    }
    // 0x0026025C: addiu       $v0, $zero, 0x11
    ctx->r2 = ADD32(0, 0X11);
    // 0x00260260: beq         $v1, $v0, L_00260278
    if (ctx->r3 == ctx->r2) {
        // 0x00260264: addiu       $v0, $zero, 0x12
        ctx->r2 = ADD32(0, 0X12);
            goto L_00260278;
    }
    // 0x00260264: addiu       $v0, $zero, 0x12
    ctx->r2 = ADD32(0, 0X12);
    // 0x00260268: beq         $v1, $v0, L_00260278
    if (ctx->r3 == ctx->r2) {
        // 0x0026026C: addiu       $v0, $zero, 0xA
        ctx->r2 = ADD32(0, 0XA);
            goto L_00260278;
    }
    // 0x0026026C: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x00260270: bne         $v1, $v0, L_002602B0
    if (ctx->r3 != ctx->r2) {
        // 0x00260274: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_002602B0;
    }
    // 0x00260274: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_00260278:
    // 0x00260278: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0026027C: lwc1        $f12, 0x797C($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X797C);
    // 0x00260280: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00260284: lwc1        $f14, 0x7980($at)
    ctx->f14.u32l = MEM_W(ctx->r1, 0X7980);
    // 0x00260288: jal         0x002119FC
    // 0x0026028C: nop

    func_002119FC(rdram, ctx);
        goto after_0;
    // 0x0026028C: nop

    after_0:
    // 0x00260290: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x00260294: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x00260298: addiu       $a2, $zero, 0x17
    ctx->r6 = ADD32(0, 0X17);
    // 0x0026029C: jal         0x00243414
    // 0x002602A0: swc1        $f0, 0x124($s0)
    MEM_W(0X124, ctx->r16) = ctx->f0.u32l;
    func_00243414(rdram, ctx);
        goto after_1;
    // 0x002602A0: swc1        $f0, 0x124($s0)
    MEM_W(0X124, ctx->r16) = ctx->f0.u32l;
    after_1:
    // 0x002602A4: j           L_002602B0
    // 0x002602A8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_002602B0;
    // 0x002602A8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_002602AC:
    // 0x002602AC: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_002602B0:
    // 0x002602B0: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x002602B4: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x002602B8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x002602BC: jr          $ra
    // 0x002602C0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x002602C0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_00271DB4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00271DB4: lw          $v0, 0x2BB8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X2BB8);
    // 0x00271DB8: beq         $v0, $zero, L_00271DC8
    if (ctx->r2 == 0) {
        // 0x00271DBC: addiu       $v0, $zero, 0x44C
        ctx->r2 = ADD32(0, 0X44C);
            goto L_00271DC8;
    }
    // 0x00271DBC: addiu       $v0, $zero, 0x44C
    ctx->r2 = ADD32(0, 0X44C);
    // 0x00271DC0: beq         $a1, $v0, L_00271DD8
    if (ctx->r5 == ctx->r2) {
        // 0x00271DC4: nop
    
            goto L_00271DD8;
    }
    // 0x00271DC4: nop

L_00271DC8:
    // 0x00271DC8: lh          $v1, 0x102($a0)
    ctx->r3 = MEM_H(ctx->r4, 0X102);
    // 0x00271DCC: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x00271DD0: beq         $v1, $v0, L_00271DE0
    if (ctx->r3 == ctx->r2) {
            // 0x00271DD4: slti        $v0, $a1, 0x100
    ctx->r2 = SIGNED(ctx->r5) < 0X100 ? 1 : 0;
    func_00271DE0(rdram, ctx);
    return;
    }
    // 0x00271DD4: slti        $v0, $a1, 0x100
    ctx->r2 = SIGNED(ctx->r5) < 0X100 ? 1 : 0;
L_00271DD8:
    // 0x00271DD8: jr          $ra
    // 0x00271DDC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x00271DDC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
;}
RECOMP_FUNC void func_0045F734(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_004267DC:
    // 0x0045F734: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x0045F738: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x0045F73C: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x0045F740: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0045F744: sll         $s0, $s1, 2
    ctx->r16 = S32(ctx->r17 << 2);
    // 0x0045F748: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0045F74C: addu        $at, $at, $s0
    ctx->r1 = ADD32(ctx->r1, ctx->r16);
    // 0x0045F750: lw          $v1, 0xC60($at)
    ctx->r3 = MEM_W(ctx->r1, 0XC60);
    // 0x0045F754: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x0045F758: beq         $v1, $v0, L_0045F768
    if (ctx->r3 == ctx->r2) {
        // 0x0045F75C: sw          $ra, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->r31;
            goto L_0045F768;
    }
    // 0x0045F75C: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x0045F760: j           L_004267DC
    // 0x0045F764: addiu       $v0, $zero, -0x2
    ctx->r2 = ADD32(0, -0X2);
    entry_004267DC(rdram, ctx);
    return;
    // 0x0045F764: addiu       $v0, $zero, -0x2
    ctx->r2 = ADD32(0, -0X2);
L_0045F768:
    // 0x0045F768: jal         0x00285878
    // 0x0045F76C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_00285878(rdram, ctx);
        goto after_0;
    // 0x0045F76C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_0:
    // 0x0045F770: jal         0x002847E0
    // 0x0045F774: nop

    func_002847E0(rdram, ctx);
        goto after_1;
    // 0x0045F774: nop

    after_1:
    // 0x0045F778: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0045F77C: addu        $at, $at, $s0
    ctx->r1 = ADD32(ctx->r1, ctx->r16);
    // 0x0045F780: lw          $s0, 0xC70($at)
    ctx->r16 = MEM_W(ctx->r1, 0XC70);
    // 0x0045F784: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x0045F788: lui         $at, 0x800F
    ctx->r1 = S32(0X800F << 16);
    // 0x0045F78C: sb          $v0, 0x6750($at)
    MEM_B(0X6750, ctx->r1) = ctx->r2;
    // 0x0045F790: addiu       $v0, $zero, -0x4
    ctx->r2 = ADD32(0, -0X4);
    // 0x0045F794: bne         $s0, $v0, L_0045F7D0
    if (ctx->r16 != ctx->r2) {
        // 0x0045F798: sll         $a0, $s1, 1
        ctx->r4 = S32(ctx->r17 << 1);
            goto L_0045F7D0;
    }
    // 0x0045F798: sll         $a0, $s1, 1
    ctx->r4 = S32(ctx->r17 << 1);
    // 0x0045F79C: addu        $a0, $a0, $s1
    ctx->r4 = ADD32(ctx->r4, ctx->r17);
    // 0x0045F7A0: sll         $a0, $a0, 2
    ctx->r4 = S32(ctx->r4 << 2);
    // 0x0045F7A4: addu        $a0, $a0, $s1
    ctx->r4 = ADD32(ctx->r4, ctx->r17);
    // 0x0045F7A8: sll         $a0, $a0, 3
    ctx->r4 = S32(ctx->r4 << 3);
    // 0x0045F7AC: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x0045F7B0: addiu       $v0, $v0, 0xC80
    ctx->r2 = ADD32(ctx->r2, 0XC80);
    // 0x0045F7B4: jal         0x00429050
    // 0x0045F7B8: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    entry_00429050(rdram, ctx);
        goto after_2;
    // 0x0045F7B8: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    after_2:
    // 0x0045F7BC: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x0045F7C0: bnel        $s0, $zero, L_0045F7C8
    if (ctx->r16 != 0) {
        // 0x0045F7C4: addiu       $s0, $zero, -0x1
        ctx->r16 = ADD32(0, -0X1);
            goto L_0045F7C8;
    }
    goto skip_0;
    // 0x0045F7C4: addiu       $s0, $zero, -0x1
    ctx->r16 = ADD32(0, -0X1);
    skip_0:
L_0045F7C8:
    // 0x0045F7C8: jal         0x00425808
    // 0x0045F7CC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    entry_00425808(rdram, ctx);
        goto after_3;
    // 0x0045F7CC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_3:
L_0045F7D0:
    // 0x0045F7D0: jal         0x002858A4
    // 0x0045F7D4: nop

    func_002858A4(rdram, ctx);
        goto after_4;
    // 0x0045F7D4: nop

    after_4:
    // 0x0045F7D8: addu        $v0, $s0, $zero
    ctx->r2 = ADD32(ctx->r16, 0);
    // 0x0045F7DC: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x0045F7E0: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x0045F7E4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0045F7E8: jr          $ra
    // 0x0045F7EC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x0045F7EC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_0026CE3C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0026CE3C: jr          $ra
    // 0x0026CE40: nop

    return;
    // 0x0026CE40: nop

;}
RECOMP_FUNC void func_0040B418(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0040B418: addiu       $sp, $sp, -0xB0
    ctx->r29 = ADD32(ctx->r29, -0XB0);
    // 0x0040B41C: sw          $s1, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r17;
    // 0x0040B420: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x0040B424: sw          $s0, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r16;
    // 0x0040B428: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x0040B42C: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    // 0x0040B430: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x0040B434: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0040B438: sw          $ra, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->r31;
    // 0x0040B43C: jal         0x00246108
    // 0x0040B440: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    func_00246108(rdram, ctx);
        goto after_0;
    // 0x0040B440: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    after_0:
    // 0x0040B444: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0040B448: lui         $a2, 0x3E86
    ctx->r6 = S32(0X3E86 << 16);
    // 0x0040B44C: ori         $a2, $a2, 0xA93
    ctx->r6 = ctx->r6 | 0XA93;
    // 0x0040B450: lw          $a3, 0x20($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X20);
    // 0x0040B454: jal         0x00245BAC
    // 0x0040B458: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_00245BAC(rdram, ctx);
        goto after_1;
    // 0x0040B458: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_1:
    // 0x0040B45C: lb          $v0, 0xC7($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XC7);
    // 0x0040B460: beq         $v0, $zero, L_0040B474
    if (ctx->r2 == 0) {
        // 0x0040B464: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_0040B474;
    }
    // 0x0040B464: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0040B468: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x0040B46C: jal         0x00243414
    // 0x0040B470: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    func_00243414(rdram, ctx);
        goto after_2;
    // 0x0040B470: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    after_2:
L_0040B474:
    // 0x0040B474: lw          $ra, 0xA8($sp)
    ctx->r31 = MEM_W(ctx->r29, 0XA8);
    // 0x0040B478: lw          $s1, 0xA4($sp)
    ctx->r17 = MEM_W(ctx->r29, 0XA4);
    // 0x0040B47C: lw          $s0, 0xA0($sp)
    ctx->r16 = MEM_W(ctx->r29, 0XA0);
    // 0x0040B480: jr          $ra
    // 0x0040B484: addiu       $sp, $sp, 0xB0
    ctx->r29 = ADD32(ctx->r29, 0XB0);
    return;
    // 0x0040B484: addiu       $sp, $sp, 0xB0
    ctx->r29 = ADD32(ctx->r29, 0XB0);
;}
RECOMP_FUNC void func_0026BD20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0026BD20: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x0026BD24: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x0026BD28: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x0026BD2C: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x0026BD30: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x0026BD34: bne         $s0, $zero, L_0026BD5C
    if (ctx->r16 != 0) {
        // 0x0026BD38: sw          $ra, 0x38($sp)
        MEM_W(0X38, ctx->r29) = ctx->r31;
            goto L_0026BD5C;
    }
    // 0x0026BD38: sw          $ra, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r31;
    // 0x0026BD3C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0026BD40: lwc1        $f0, 0x7FF0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X7FF0);
    // 0x0026BD44: lui         $v0, 0x800F
    ctx->r2 = S32(0X800F << 16);
    // 0x0026BD48: addiu       $v0, $v0, 0x2030
    ctx->r2 = ADD32(ctx->r2, 0X2030);
    // 0x0026BD4C: sw          $zero, 0x0($v0)
    MEM_W(0X0, ctx->r2) = 0;
    // 0x0026BD50: sw          $zero, 0x8($v0)
    MEM_W(0X8, ctx->r2) = 0;
    // 0x0026BD54: j           L_0026BE20
    // 0x0026BD58: swc1        $f0, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f0.u32l;
        goto L_0026BE20;
    // 0x0026BD58: swc1        $f0, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f0.u32l;
L_0026BD5C:
    // 0x0026BD5C: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0026BD60: lw          $v0, 0x260C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X260C);
    // 0x0026BD64: beq         $s0, $v0, L_0026BE24
    if (ctx->r16 == ctx->r2) {
        // 0x0026BD68: addu        $v0, $s1, $zero
        ctx->r2 = ADD32(ctx->r17, 0);
            goto L_0026BE24;
    }
    // 0x0026BD68: addu        $v0, $s1, $zero
    ctx->r2 = ADD32(ctx->r17, 0);
    // 0x0026BD6C: bne         $s0, $zero, L_0026BD9C
    if (ctx->r16 != 0) {
        // 0x0026BD70: nop
    
            goto L_0026BD9C;
    }
    // 0x0026BD70: nop

    // 0x0026BD74: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0026BD78: lwc1        $f0, 0x7FF4($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X7FF4);
    // 0x0026BD7C: lui         $at, 0x800F
    ctx->r1 = S32(0X800F << 16);
    // 0x0026BD80: sw          $zero, 0x2020($at)
    MEM_W(0X2020, ctx->r1) = 0;
    // 0x0026BD84: lui         $at, 0x800F
    ctx->r1 = S32(0X800F << 16);
    // 0x0026BD88: sw          $zero, 0x2028($at)
    MEM_W(0X2028, ctx->r1) = 0;
    // 0x0026BD8C: lui         $at, 0x800F
    ctx->r1 = S32(0X800F << 16);
    // 0x0026BD90: swc1        $f0, 0x2024($at)
    MEM_W(0X2024, ctx->r1) = ctx->f0.u32l;
    // 0x0026BD94: j           L_0026BDE0
    // 0x0026BD98: nop

        goto L_0026BDE0;
    // 0x0026BD98: nop

L_0026BD9C:
    // 0x0026BD9C: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0026BDA0: lw          $v0, 0x2608($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2608);
    // 0x0026BDA4: beq         $s0, $v0, L_0026BDE0
    if (ctx->r16 == ctx->r2) {
        // 0x0026BDA8: nop
    
            goto L_0026BDE0;
    }
    // 0x0026BDA8: nop

    // 0x0026BDAC: lw          $a1, 0x8($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X8);
    // 0x0026BDB0: lw          $a2, 0x4($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X4);
    // 0x0026BDB4: jal         0x0020EF2C
    // 0x0026BDB8: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    func_0020EF2C(rdram, ctx);
        goto after_0;
    // 0x0026BDB8: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    after_0:
    // 0x0026BDBC: lw          $a1, 0xC($s0)
    ctx->r5 = MEM_W(ctx->r16, 0XC);
    // 0x0026BDC0: lw          $a2, 0x8($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X8);
    // 0x0026BDC4: jal         0x0020EF2C
    // 0x0026BDC8: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    func_0020EF2C(rdram, ctx);
        goto after_1;
    // 0x0026BDC8: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    after_1:
    // 0x0026BDCC: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x0026BDD0: addiu       $a0, $a0, 0x2020
    ctx->r4 = ADD32(ctx->r4, 0X2020);
    // 0x0026BDD4: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x0026BDD8: jal         0x0020EFDC
    // 0x0026BDDC: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    func_0020EFDC(rdram, ctx);
        goto after_2;
    // 0x0026BDDC: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    after_2:
L_0026BDE0:
    // 0x0026BDE0: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x0026BDE4: addiu       $a0, $a0, 0x2030
    ctx->r4 = ADD32(ctx->r4, 0X2030);
    // 0x0026BDE8: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0026BDEC: sw          $s0, 0x2608($at)
    MEM_W(0X2608, ctx->r1) = ctx->r16;
    // 0x0026BDF0: lui         $t1, 0x800F
    ctx->r9 = S32(0X800F << 16);
    // 0x0026BDF4: addiu       $t1, $t1, 0x2020
    ctx->r9 = ADD32(ctx->r9, 0X2020);
    // 0x0026BDF8: lui         $t0, 0x800F
    ctx->r8 = S32(0X800F << 16);
    // 0x0026BDFC: addiu       $t0, $t0, 0x2030
    ctx->r8 = ADD32(ctx->r8, 0X2030);
    // 0x0026BE00: lw          $v1, 0x0($t1)
    ctx->r3 = MEM_W(ctx->r9, 0X0);
    // 0x0026BE04: lw          $a3, 0x4($t1)
    ctx->r7 = MEM_W(ctx->r9, 0X4);
    // 0x0026BE08: sw          $v1, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r3;
    // 0x0026BE0C: sw          $a3, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r7;
    // 0x0026BE10: lw          $v1, 0x8($t1)
    ctx->r3 = MEM_W(ctx->r9, 0X8);
    // 0x0026BE14: sw          $v1, 0x8($t0)
    MEM_W(0X8, ctx->r8) = ctx->r3;
    // 0x0026BE18: jal         0x0020F040
    // 0x0026BE1C: nop

    func_0020F040(rdram, ctx);
        goto after_3;
    // 0x0026BE1C: nop

    after_3:
L_0026BE20:
    // 0x0026BE20: addu        $v0, $s1, $zero
    ctx->r2 = ADD32(ctx->r17, 0);
L_0026BE24:
    // 0x0026BE24: lui         $t1, 0x800F
    ctx->r9 = S32(0X800F << 16);
    // 0x0026BE28: addiu       $t1, $t1, 0x2030
    ctx->r9 = ADD32(ctx->r9, 0X2030);
    // 0x0026BE2C: lw          $v1, 0x0($t1)
    ctx->r3 = MEM_W(ctx->r9, 0X0);
    // 0x0026BE30: lw          $a3, 0x4($t1)
    ctx->r7 = MEM_W(ctx->r9, 0X4);
    // 0x0026BE34: lw          $t0, 0x8($t1)
    ctx->r8 = MEM_W(ctx->r9, 0X8);
    // 0x0026BE38: sw          $v1, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r3;
    // 0x0026BE3C: sw          $a3, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->r7;
    // 0x0026BE40: sw          $t0, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->r8;
    // 0x0026BE44: lw          $ra, 0x38($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X38);
    // 0x0026BE48: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x0026BE4C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0026BE50: sw          $s0, 0x260C($at)
    MEM_W(0X260C, ctx->r1) = ctx->r16;
    // 0x0026BE54: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x0026BE58: jr          $ra
    // 0x0026BE5C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x0026BE5C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_00271BC4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_00271BBC:
    // 0x00271BC4: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
L_00271BC8:
    // 0x00271BC8: lw          $v0, 0xC($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XC);
    // 0x00271BCC: beq         $v0, $a1, L_00271BBC
    if (ctx->r2 == ctx->r5) {
            // 0x00271BD0: nop

    func_00271BBC(rdram, ctx);
    return;
    }
    // 0x00271BD0: nop

    // 0x00271BD4: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x00271BD8: slti        $v0, $v1, 0x11
    ctx->r2 = SIGNED(ctx->r3) < 0X11 ? 1 : 0;
    // 0x00271BDC: bne         $v0, $zero, L_00271BC8
    if (ctx->r2 != 0) {
        // 0x00271BE0: addiu       $a0, $a0, 0xCC
        ctx->r4 = ADD32(ctx->r4, 0XCC);
            goto L_00271BC8;
    }
    // 0x00271BE0: addiu       $a0, $a0, 0xCC
    ctx->r4 = ADD32(ctx->r4, 0XCC);
    // 0x00271BE4: jr          $ra
    // 0x00271BE8: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    return;
    // 0x00271BE8: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
;}
RECOMP_FUNC void func_0045D53C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0045D53C: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0045D540: addiu       $v0, $v0, 0x40F8
    ctx->r2 = ADD32(ctx->r2, 0X40F8);
    // 0x0045D544: jr          $ra
    // 0x0045D548: nop

    return;
    // 0x0045D548: nop

;}
RECOMP_FUNC void func_00419960(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00419960: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00419964: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x00419968: jal         0x002759C4
    // 0x0041996C: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    func_002759C4(rdram, ctx);
        goto after_0;
    // 0x0041996C: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    after_0:
    // 0x00419970: jal         0x00275A74
    // 0x00419974: nop

    func_00275A74(rdram, ctx);
        goto after_1;
    // 0x00419974: nop

    after_1:
    // 0x00419978: jal         0x00275A2C
    // 0x0041997C: nop

    func_00275A2C(rdram, ctx);
        goto after_2;
    // 0x0041997C: nop

    after_2:
    // 0x00419980: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x00419984: addiu       $a0, $a0, 0x6CB0
    ctx->r4 = ADD32(ctx->r4, 0X6CB0);
    // 0x00419988: jal         0x00430330
    // 0x0041998C: nop

    func_00430330(rdram, ctx);
        goto after_3;
    // 0x0041998C: nop

    after_3:
    // 0x00419990: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x00419994: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00419998: jr          $ra
    // 0x0041999C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0041999C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00262874(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00262874: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00262878: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0026287C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x00262880: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00262884: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x00262888: jal         0x002623EC
    // 0x0026288C: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    func_002623EC(rdram, ctx);
        goto after_0;
    // 0x0026288C: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    after_0:
    // 0x00262890: bne         $v0, $zero, L_002628A4
    if (ctx->r2 != 0) {
        // 0x00262894: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_002628A4;
    }
    // 0x00262894: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00262898: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x0026289C: jal         0x00243414
    // 0x002628A0: addiu       $a2, $zero, 0x3E
    ctx->r6 = ADD32(0, 0X3E);
    func_00243414(rdram, ctx);
        goto after_1;
    // 0x002628A0: addiu       $a2, $zero, 0x3E
    ctx->r6 = ADD32(0, 0X3E);
    after_1:
L_002628A4:
    // 0x002628A4: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x002628A8: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x002628AC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x002628B0: jr          $ra
    // 0x002628B4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x002628B4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_00244338(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00244338: addiu       $sp, $sp, -0xC0
    ctx->r29 = ADD32(ctx->r29, -0XC0);
    // 0x0024433C: sw          $s4, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->r20;
    // 0x00244340: addu        $s4, $a0, $zero
    ctx->r20 = ADD32(ctx->r4, 0);
    // 0x00244344: sw          $s3, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r19;
    // 0x00244348: addu        $s3, $a1, $zero
    ctx->r19 = ADD32(ctx->r5, 0);
    // 0x0024434C: sw          $s5, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->r21;
    // 0x00244350: addu        $s5, $zero, $zero
    ctx->r21 = ADD32(0, 0);
    // 0x00244354: sw          $ra, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->r31;
    // 0x00244358: sw          $s7, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r23;
    // 0x0024435C: sw          $s6, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r22;
    // 0x00244360: sw          $s2, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r18;
    // 0x00244364: sw          $s1, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r17;
    // 0x00244368: sw          $s0, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r16;
    // 0x0024436C: sdc1        $f21, 0xB8($sp)
    CHECK_FR(ctx, 21);
    SD(ctx->f21.u64, 0XB8, ctx->r29);
    // 0x00244370: sdc1        $f20, 0xB0($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0XB0, ctx->r29);
    // 0x00244374: lw          $v0, 0x14($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X14);
    // 0x00244378: lw          $v1, 0x0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X0);
    // 0x0024437C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00244380: bne         $v1, $v0, L_00244398
    if (ctx->r3 != ctx->r2) {
        // 0x00244384: addu        $s6, $a3, $zero
        ctx->r22 = ADD32(ctx->r7, 0);
            goto L_00244398;
    }
    // 0x00244384: addu        $s6, $a3, $zero
    ctx->r22 = ADD32(ctx->r7, 0);
    // 0x00244388: jal         0x0025E428
    // 0x0024438C: nop

    func_0025E428(rdram, ctx);
        goto after_0;
    // 0x0024438C: nop

    after_0:
    // 0x00244390: j           L_0024439C
    // 0x00244394: addu        $s7, $v0, $zero
    ctx->r23 = ADD32(ctx->r2, 0);
        goto L_0024439C;
    // 0x00244394: addu        $s7, $v0, $zero
    ctx->r23 = ADD32(ctx->r2, 0);
L_00244398:
    // 0x00244398: addiu       $s7, $zero, -0x1
    ctx->r23 = ADD32(0, -0X1);
L_0024439C:
    // 0x0024439C: lb          $v1, 0xCA($s3)
    ctx->r3 = MEM_B(ctx->r19, 0XCA);
    // 0x002443A0: lui         $v0, 0x800F
    ctx->r2 = S32(0X800F << 16);
    // 0x002443A4: lw          $v0, 0x7F78($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X7F78);
    // 0x002443A8: bne         $v1, $v0, L_00244410
    if (ctx->r3 != ctx->r2) {
        // 0x002443AC: lui         $v1, 0x2000
        ctx->r3 = S32(0X2000 << 16);
            goto L_00244410;
    }
    // 0x002443AC: lui         $v1, 0x2000
    ctx->r3 = S32(0X2000 << 16);
    // 0x002443B0: lw          $v0, 0x0($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X0);
    // 0x002443B4: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x002443B8: beq         $v0, $zero, L_002443FC
    if (ctx->r2 == 0) {
        // 0x002443BC: addu        $a0, $s4, $zero
        ctx->r4 = ADD32(ctx->r20, 0);
            goto L_002443FC;
    }
    // 0x002443BC: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    // 0x002443C0: lw          $v0, 0x78($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X78);
    // 0x002443C4: bne         $v0, $zero, L_00244400
    if (ctx->r2 != 0) {
        // 0x002443C8: addu        $a1, $s3, $zero
        ctx->r5 = ADD32(ctx->r19, 0);
            goto L_00244400;
    }
    // 0x002443C8: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    // 0x002443CC: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    // 0x002443D0: lw          $a2, 0x88($s3)
    ctx->r6 = MEM_W(ctx->r19, 0X88);
    // 0x002443D4: jal         0x002438C0
    // 0x002443D8: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    func_002438C0(rdram, ctx);
        goto after_1;
    // 0x002443D8: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    after_1:
    // 0x002443DC: bne         $v0, $zero, L_00244410
    if (ctx->r2 != 0) {
        // 0x002443E0: nop
    
            goto L_00244410;
    }
    // 0x002443E0: nop

    // 0x002443E4: lui         $v1, 0xDFFF
    ctx->r3 = S32(0XDFFF << 16);
    // 0x002443E8: lw          $v0, 0x0($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X0);
    // 0x002443EC: ori         $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 | 0XFFFF;
    // 0x002443F0: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x002443F4: j           L_00244410
    // 0x002443F8: sw          $v0, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r2;
        goto L_00244410;
    // 0x002443F8: sw          $v0, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r2;
L_002443FC:
    // 0x002443FC: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
L_00244400:
    // 0x00244400: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x00244404: jal         0x00243C90
    // 0x00244408: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_00243C90(rdram, ctx);
        goto after_2;
    // 0x00244408: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_2:
    // 0x0024440C: sw          $v0, 0x88($s3)
    MEM_W(0X88, ctx->r19) = ctx->r2;
L_00244410:
    // 0x00244410: lw          $v0, 0x4($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X4);
    // 0x00244414: lw          $s2, 0x88($s3)
    ctx->r18 = MEM_W(ctx->r19, 0X88);
    // 0x00244418: beq         $v0, $zero, L_00244504
    if (ctx->r2 == 0) {
        // 0x0024441C: addiu       $s1, $zero, 0x6
        ctx->r17 = ADD32(0, 0X6);
            goto L_00244504;
    }
    // 0x0024441C: addiu       $s1, $zero, 0x6
    ctx->r17 = ADD32(0, 0X6);
    // 0x00244420: bne         $s2, $zero, L_0024443C
    if (ctx->r18 != 0) {
        // 0x00244424: nop
    
            goto L_0024443C;
    }
    // 0x00244424: nop

    // 0x00244428: lb          $v0, 0x94($s3)
    ctx->r2 = MEM_B(ctx->r19, 0X94);
    // 0x0024442C: beq         $v0, $zero, L_00244504
    if (ctx->r2 == 0) {
        // 0x00244430: addiu       $s1, $zero, 0x3
        ctx->r17 = ADD32(0, 0X3);
            goto L_00244504;
    }
    // 0x00244430: addiu       $s1, $zero, 0x3
    ctx->r17 = ADD32(0, 0X3);
    // 0x00244434: j           L_00244504
    // 0x00244438: addiu       $s1, $zero, 0x4
    ctx->r17 = ADD32(0, 0X4);
        goto L_00244504;
    // 0x00244438: addiu       $s1, $zero, 0x4
    ctx->r17 = ADD32(0, 0X4);
L_0024443C:
    // 0x0024443C: lw          $v0, 0x68($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X68);
    // 0x00244440: beq         $s2, $v0, L_00244504
    if (ctx->r18 == ctx->r2) {
        // 0x00244444: addiu       $s1, $zero, 0x2
        ctx->r17 = ADD32(0, 0X2);
            goto L_00244504;
    }
    // 0x00244444: addiu       $s1, $zero, 0x2
    ctx->r17 = ADD32(0, 0X2);
    // 0x00244448: lw          $v0, 0x14($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X14);
    // 0x0024444C: lw          $v1, 0x0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X0);
    // 0x00244450: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x00244454: bnel        $v1, $v0, L_00244464
    if (ctx->r3 != ctx->r2) {
        // 0x00244458: addiu       $v0, $zero, 0x64F
        ctx->r2 = ADD32(0, 0X64F);
            goto L_00244464;
    }
    goto skip_0;
    // 0x00244458: addiu       $v0, $zero, 0x64F
    ctx->r2 = ADD32(0, 0X64F);
    skip_0:
    // 0x0024445C: j           L_00244504
    // 0x00244460: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
        goto L_00244504;
    // 0x00244460: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
L_00244464:
    // 0x00244464: lhu         $v1, 0xB8($s2)
    ctx->r3 = MEM_HU(ctx->r18, 0XB8);
    // 0x00244468: beq         $v1, $v0, L_00244504
    if (ctx->r3 == ctx->r2) {
        // 0x0024446C: addiu       $s1, $zero, 0x7
        ctx->r17 = ADD32(0, 0X7);
            goto L_00244504;
    }
    // 0x0024446C: addiu       $s1, $zero, 0x7
    ctx->r17 = ADD32(0, 0X7);
    // 0x00244470: lui         $v0, 0x8011
    ctx->r2 = S32(0X8011 << 16);
    // 0x00244474: lw          $v0, 0x1C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1C);
    // 0x00244478: bne         $v0, $zero, L_00244504
    if (ctx->r2 != 0) {
        // 0x0024447C: addu        $s1, $zero, $zero
        ctx->r17 = ADD32(0, 0);
            goto L_00244504;
    }
    // 0x0024447C: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x00244480: lw          $v0, 0xD4($s2)
    ctx->r2 = MEM_W(ctx->r18, 0XD4);
    // 0x00244484: lui         $v1, 0x30
    ctx->r3 = S32(0X30 << 16);
    // 0x00244488: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x0024448C: beq         $v0, $zero, L_002444E4
    if (ctx->r2 == 0) {
        // 0x00244490: nop
    
            goto L_002444E4;
    }
    // 0x00244490: nop

    // 0x00244494: lw          $a0, 0x1A8($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X1A8);
    // 0x00244498: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x0024449C: lwc1        $f1, 0xAAC($a0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r4, 0XAAC);
    // 0x002444A0: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x002444A4: nop

    // 0x002444A8: bc1f        L_002444CC
    if (!c1cs) {
        // 0x002444AC: addiu       $v0, $zero, 0xCA
        ctx->r2 = ADD32(0, 0XCA);
            goto L_002444CC;
    }
    // 0x002444AC: addiu       $v0, $zero, 0xCA
    ctx->r2 = ADD32(0, 0XCA);
    // 0x002444B0: lhu         $v1, 0xB8($s4)
    ctx->r3 = MEM_HU(ctx->r20, 0XB8);
    // 0x002444B4: bne         $v1, $v0, L_00244504
    if (ctx->r3 != ctx->r2) {
        // 0x002444B8: addiu       $s1, $zero, 0x1
        ctx->r17 = ADD32(0, 0X1);
            goto L_00244504;
    }
    // 0x002444B8: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
    // 0x002444BC: lh          $v1, 0x996($a0)
    ctx->r3 = MEM_H(ctx->r4, 0X996);
    // 0x002444C0: addiu       $v0, $zero, 0x14
    ctx->r2 = ADD32(0, 0X14);
    // 0x002444C4: bne         $v1, $v0, L_00244504
    if (ctx->r3 != ctx->r2) {
        // 0x002444C8: nop
    
            goto L_00244504;
    }
    // 0x002444C8: nop

L_002444CC:
    // 0x002444CC: lw          $v0, 0xB38($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XB38);
    // 0x002444D0: bne         $v0, $s4, L_002444E4
    if (ctx->r2 != ctx->r20) {
        // 0x002444D4: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_002444E4;
    }
    // 0x002444D4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x002444D8: lw          $v1, 0xB2C($a0)
    ctx->r3 = MEM_W(ctx->r4, 0XB2C);
    // 0x002444DC: beq         $v1, $v0, L_00244504
    if (ctx->r3 == ctx->r2) {
        // 0x002444E0: addiu       $s1, $zero, 0x1
        ctx->r17 = ADD32(0, 0X1);
            goto L_00244504;
    }
    // 0x002444E0: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
L_002444E4:
    // 0x002444E4: lw          $v0, 0x27C($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X27C);
    // 0x002444E8: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x002444EC: beq         $v0, $zero, L_00244500
    if (ctx->r2 == 0) {
        // 0x002444F0: addiu       $v0, $zero, 0xCA
        ctx->r2 = ADD32(0, 0XCA);
            goto L_00244500;
    }
    // 0x002444F0: addiu       $v0, $zero, 0xCA
    ctx->r2 = ADD32(0, 0XCA);
    // 0x002444F4: lhu         $v1, 0xB8($s4)
    ctx->r3 = MEM_HU(ctx->r20, 0XB8);
    // 0x002444F8: bne         $v1, $v0, L_00244504
    if (ctx->r3 != ctx->r2) {
        // 0x002444FC: addiu       $s1, $zero, 0x1
        ctx->r17 = ADD32(0, 0X1);
            goto L_00244504;
    }
    // 0x002444FC: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
L_00244500:
    // 0x00244500: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
L_00244504:
    // 0x00244504: beq         $s2, $zero, L_002446A8
    if (ctx->r18 == 0) {
        // 0x00244508: addiu       $v0, $zero, 0x7
        ctx->r2 = ADD32(0, 0X7);
            goto L_002446A8;
    }
    // 0x00244508: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x0024450C: bne         $s1, $v0, L_002445C0
    if (ctx->r17 != ctx->r2) {
        // 0x00244510: addiu       $s0, $sp, 0x20
        ctx->r16 = ADD32(ctx->r29, 0X20);
            goto L_002445C0;
    }
    // 0x00244510: addiu       $s0, $sp, 0x20
    ctx->r16 = ADD32(ctx->r29, 0X20);
    // 0x00244514: lw          $a2, 0x80($s3)
    ctx->r6 = MEM_W(ctx->r19, 0X80);
    // 0x00244518: beq         $a2, $zero, L_00244544
    if (ctx->r6 == 0) {
        // 0x0024451C: addiu       $s5, $sp, 0x80
        ctx->r21 = ADD32(ctx->r29, 0X80);
            goto L_00244544;
    }
    // 0x0024451C: addiu       $s5, $sp, 0x80
    ctx->r21 = ADD32(ctx->r29, 0X80);
    // 0x00244520: addiu       $a0, $sp, 0x60
    ctx->r4 = ADD32(ctx->r29, 0X60);
    // 0x00244524: addiu       $a1, $s2, 0x4
    ctx->r5 = ADD32(ctx->r18, 0X4);
    // 0x00244528: jal         0x0020EF2C
    // 0x0024452C: addiu       $a2, $a2, 0x4
    ctx->r6 = ADD32(ctx->r6, 0X4);
    func_0020EF2C(rdram, ctx);
        goto after_3;
    // 0x0024452C: addiu       $a2, $a2, 0x4
    ctx->r6 = ADD32(ctx->r6, 0X4);
    after_3:
    // 0x00244530: sw          $zero, 0x64($sp)
    MEM_W(0X64, ctx->r29) = 0;
    // 0x00244534: jal         0x0020F040
    // 0x00244538: addiu       $a0, $sp, 0x60
    ctx->r4 = ADD32(ctx->r29, 0X60);
    func_0020F040(rdram, ctx);
        goto after_4;
    // 0x00244538: addiu       $a0, $sp, 0x60
    ctx->r4 = ADD32(ctx->r29, 0X60);
    after_4:
    // 0x0024453C: j           L_00244550
    // 0x00244540: nop

        goto L_00244550;
    // 0x00244540: nop

L_00244544:
    // 0x00244544: sw          $zero, 0x60($sp)
    MEM_W(0X60, ctx->r29) = 0;
    // 0x00244548: sw          $zero, 0x64($sp)
    MEM_W(0X64, ctx->r29) = 0;
    // 0x0024454C: sw          $zero, 0x68($sp)
    MEM_W(0X68, ctx->r29) = 0;
L_00244550:
    // 0x00244550: jal         0x002672C8
    // 0x00244554: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_002672C8(rdram, ctx);
        goto after_5;
    // 0x00244554: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_5:
    // 0x00244558: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    // 0x0024455C: jal         0x002672C8
    // 0x00244560: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    func_002672C8(rdram, ctx);
        goto after_6;
    // 0x00244560: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    after_6:
    // 0x00244564: add.s       $f20, $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = ctx->f20.fl + ctx->f0.fl;
    // 0x00244568: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0024456C: lwc1        $f0, 0x6918($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6918);
    // 0x00244570: add.s       $f20, $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = ctx->f20.fl + ctx->f0.fl;
    // 0x00244574: addiu       $a0, $sp, 0x60
    ctx->r4 = ADD32(ctx->r29, 0X60);
    // 0x00244578: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x0024457C: jal         0x0020EF60
    // 0x00244580: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    func_0020EF60(rdram, ctx);
        goto after_7;
    // 0x00244580: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    after_7:
    // 0x00244584: addiu       $a0, $sp, 0x70
    ctx->r4 = ADD32(ctx->r29, 0X70);
    // 0x00244588: addiu       $a1, $s2, 0x4
    ctx->r5 = ADD32(ctx->r18, 0X4);
    // 0x0024458C: jal         0x0020EEF8
    // 0x00244590: addiu       $a2, $sp, 0x60
    ctx->r6 = ADD32(ctx->r29, 0X60);
    func_0020EEF8(rdram, ctx);
        goto after_8;
    // 0x00244590: addiu       $a2, $sp, 0x60
    ctx->r6 = ADD32(ctx->r29, 0X60);
    after_8:
    // 0x00244594: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00244598: sw          $s5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r21;
    // 0x0024459C: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x002445A0: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x002445A4: lw          $a1, 0x70($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X70);
    // 0x002445A8: lw          $a2, 0x74($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X74);
    // 0x002445AC: lw          $a3, 0x78($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X78);
    // 0x002445B0: jal         0x002688C8
    // 0x002445B4: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_002688C8(rdram, ctx);
        goto after_9;
    // 0x002445B4: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_9:
    // 0x002445B8: j           L_00244614
    // 0x002445BC: nop

        goto L_00244614;
    // 0x002445BC: nop

L_002445C0:
    // 0x002445C0: lw          $t0, 0x4($s2)
    ctx->r8 = MEM_W(ctx->r18, 0X4);
    // 0x002445C4: lw          $t1, 0x8($s2)
    ctx->r9 = MEM_W(ctx->r18, 0X8);
    // 0x002445C8: lw          $t2, 0xC($s2)
    ctx->r10 = MEM_W(ctx->r18, 0XC);
    // 0x002445CC: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
    // 0x002445D0: sw          $t1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r9;
    // 0x002445D4: sw          $t2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r10;
    // 0x002445D8: lw          $v0, 0x10($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X10);
    // 0x002445DC: sw          $v0, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r2;
    // 0x002445E0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x002445E4: bne         $s7, $v0, L_00244614
    if (ctx->r23 != ctx->r2) {
        // 0x002445E8: nop
    
            goto L_00244614;
    }
    // 0x002445E8: nop

    // 0x002445EC: jal         0x002671B4
    // 0x002445F0: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_002671B4(rdram, ctx);
        goto after_10;
    // 0x002445F0: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_10:
    // 0x002445F4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002445F8: lwc1        $f1, 0x691C($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X691C);
    // 0x002445FC: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00244600: lwc1        $f1, 0x54($s2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r18, 0X54);
    // 0x00244604: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x00244608: lwc1        $f0, 0x24($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X24);
    // 0x0024460C: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x00244610: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
L_00244614:
    // 0x00244614: jal         0x002672C8
    // 0x00244618: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_002672C8(rdram, ctx);
        goto after_11;
    // 0x00244618: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_11:
    // 0x0024461C: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    // 0x00244620: jal         0x002672C8
    // 0x00244624: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    func_002672C8(rdram, ctx);
        goto after_12;
    // 0x00244624: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    after_12:
    // 0x00244628: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x0024462C: beq         $s1, $v0, L_00244674
    if (ctx->r17 == ctx->r2) {
        // 0x00244630: add.s       $f21, $f20, $f0
        CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f21.fl = ctx->f20.fl + ctx->f0.fl;
            goto L_00244674;
    }
    // 0x00244630: add.s       $f21, $f20, $f0
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f21.fl = ctx->f20.fl + ctx->f0.fl;
    // 0x00244634: slti        $v0, $s1, 0x6
    ctx->r2 = SIGNED(ctx->r17) < 0X6 ? 1 : 0;
    // 0x00244638: beq         $v0, $zero, L_00244650
    if (ctx->r2 == 0) {
        // 0x0024463C: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_00244650;
    }
    // 0x0024463C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x00244640: beq         $s1, $v0, L_00244664
    if (ctx->r17 == ctx->r2) {
        // 0x00244644: nop
    
            goto L_00244664;
    }
    // 0x00244644: nop

    // 0x00244648: j           L_00244678
    // 0x0024464C: nop

        goto L_00244678;
    // 0x0024464C: nop

L_00244650:
    // 0x00244650: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x00244654: beq         $s1, $v0, L_00244674
    if (ctx->r17 == ctx->r2) {
        // 0x00244658: nop
    
            goto L_00244674;
    }
    // 0x00244658: nop

    // 0x0024465C: j           L_00244678
    // 0x00244660: nop

        goto L_00244678;
    // 0x00244660: nop

L_00244664:
    // 0x00244664: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00244668: lwc1        $f0, 0x6920($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6920);
    // 0x0024466C: j           L_00244678
    // 0x00244670: add.s       $f21, $f21, $f0
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f21.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f21.fl = ctx->f21.fl + ctx->f0.fl;
        goto L_00244678;
    // 0x00244670: add.s       $f21, $f21, $f0
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f21.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f21.fl = ctx->f21.fl + ctx->f0.fl;
L_00244674:
    // 0x00244674: mtc1        $zero, $f21
    ctx->f_odd[(21 - 1) * 2] = 0;
L_00244678:
    // 0x00244678: lb          $v1, 0x94($s3)
    ctx->r3 = MEM_B(ctx->r19, 0X94);
    // 0x0024467C: addiu       $s5, $zero, 0x1
    ctx->r21 = ADD32(0, 0X1);
    // 0x00244680: bne         $v1, $s5, L_00244694
    if (ctx->r3 != ctx->r21) {
        // 0x00244684: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_00244694;
    }
    // 0x00244684: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x00244688: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x0024468C: j           L_00244798
    // 0x00244690: sb          $v0, 0x94($s3)
    MEM_B(0X94, ctx->r19) = ctx->r2;
        goto L_00244798;
    // 0x00244690: sb          $v0, 0x94($s3)
    MEM_B(0X94, ctx->r19) = ctx->r2;
L_00244694:
    // 0x00244694: bne         $v1, $v0, L_0024479C
    if (ctx->r3 != ctx->r2) {
        // 0x00244698: addiu       $a0, $sp, 0x20
        ctx->r4 = ADD32(ctx->r29, 0X20);
            goto L_0024479C;
    }
    // 0x00244698: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    // 0x0024469C: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x002446A0: j           L_0024479C
    // 0x002446A4: sb          $v0, 0x94($s3)
    MEM_B(0X94, ctx->r19) = ctx->r2;
        goto L_0024479C;
    // 0x002446A4: sb          $v0, 0x94($s3)
    MEM_B(0X94, ctx->r19) = ctx->r2;
L_002446A8:
    // 0x002446A8: jal         0x002672C8
    // 0x002446AC: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    func_002672C8(rdram, ctx);
        goto after_13;
    // 0x002446AC: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    after_13:
    // 0x002446B0: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x002446B4: beq         $s1, $v0, L_002446EC
    if (ctx->r17 == ctx->r2) {
        // 0x002446B8: mov.s       $f21, $f0
        CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 0);
    ctx->f21.fl = ctx->f0.fl;
            goto L_002446EC;
    }
    // 0x002446B8: mov.s       $f21, $f0
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 0);
    ctx->f21.fl = ctx->f0.fl;
    // 0x002446BC: slti        $v0, $s1, 0x5
    ctx->r2 = SIGNED(ctx->r17) < 0X5 ? 1 : 0;
    // 0x002446C0: beq         $v0, $zero, L_002446D8
    if (ctx->r2 == 0) {
        // 0x002446C4: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_002446D8;
    }
    // 0x002446C4: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x002446C8: beq         $s1, $v0, L_00244738
    if (ctx->r17 == ctx->r2) {
        // 0x002446CC: addiu       $a0, $sp, 0x20
        ctx->r4 = ADD32(ctx->r29, 0X20);
            goto L_00244738;
    }
    // 0x002446CC: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    // 0x002446D0: j           L_002447A0
    // 0x002446D4: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
        goto L_002447A0;
    // 0x002446D4: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
L_002446D8:
    // 0x002446D8: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x002446DC: beq         $s1, $v0, L_00244760
    if (ctx->r17 == ctx->r2) {
        // 0x002446E0: addiu       $a0, $sp, 0x20
        ctx->r4 = ADD32(ctx->r29, 0X20);
            goto L_00244760;
    }
    // 0x002446E0: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    // 0x002446E4: j           L_002447A0
    // 0x002446E8: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
        goto L_002447A0;
    // 0x002446E8: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
L_002446EC:
    // 0x002446EC: jal         0x0028479C
    // 0x002446F0: addiu       $a0, $s3, 0x94
    ctx->r4 = ADD32(ctx->r19, 0X94);
    func_0028479C(rdram, ctx);
        goto after_14;
    // 0x002446F0: addiu       $a0, $s3, 0x94
    ctx->r4 = ADD32(ctx->r19, 0X94);
    after_14:
    // 0x002446F4: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x002446F8: lw          $t1, 0x4($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X4);
    // 0x002446FC: lw          $t2, 0x8($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X8);
    // 0x00244700: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
    // 0x00244704: sw          $t1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r9;
    // 0x00244708: sw          $t2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r10;
    // 0x0024470C: lw          $v0, 0xC($v0)
    ctx->r2 = MEM_W(ctx->r2, 0XC);
    // 0x00244710: mtc1        $zero, $f21
    ctx->f_odd[(21 - 1) * 2] = 0;
    // 0x00244714: sw          $v0, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r2;
    // 0x00244718: lb          $v1, 0x94($s3)
    ctx->r3 = MEM_B(ctx->r19, 0X94);
    // 0x0024471C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x00244720: beql        $v1, $v0, L_00244798
    if (ctx->r3 == ctx->r2) {
        // 0x00244724: addiu       $s5, $zero, 0x1
        ctx->r21 = ADD32(0, 0X1);
            goto L_00244798;
    }
    goto skip_1;
    // 0x00244724: addiu       $s5, $zero, 0x1
    ctx->r21 = ADD32(0, 0X1);
    skip_1:
    // 0x00244728: bne         $v1, $s1, L_0024479C
    if (ctx->r3 != ctx->r17) {
        // 0x0024472C: addiu       $a0, $sp, 0x20
        ctx->r4 = ADD32(ctx->r29, 0X20);
            goto L_0024479C;
    }
    // 0x0024472C: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    // 0x00244730: j           L_0024479C
    // 0x00244734: addiu       $s5, $zero, 0x1
    ctx->r21 = ADD32(0, 0X1);
        goto L_0024479C;
    // 0x00244734: addiu       $s5, $zero, 0x1
    ctx->r21 = ADD32(0, 0X1);
L_00244738:
    // 0x00244738: lw          $t0, 0xAC($s3)
    ctx->r8 = MEM_W(ctx->r19, 0XAC);
    // 0x0024473C: lw          $t1, 0xB0($s3)
    ctx->r9 = MEM_W(ctx->r19, 0XB0);
    // 0x00244740: lw          $t2, 0xB4($s3)
    ctx->r10 = MEM_W(ctx->r19, 0XB4);
    // 0x00244744: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
    // 0x00244748: sw          $t1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r9;
    // 0x0024474C: sw          $t2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r10;
    // 0x00244750: lw          $v0, 0xB8($s3)
    ctx->r2 = MEM_W(ctx->r19, 0XB8);
    // 0x00244754: addiu       $s5, $zero, 0x1
    ctx->r21 = ADD32(0, 0X1);
    // 0x00244758: j           L_00244798
    // 0x0024475C: sw          $v0, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r2;
        goto L_00244798;
    // 0x0024475C: sw          $v0, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r2;
L_00244760:
    // 0x00244760: lw          $t0, 0x4($s4)
    ctx->r8 = MEM_W(ctx->r20, 0X4);
    // 0x00244764: lw          $t1, 0x8($s4)
    ctx->r9 = MEM_W(ctx->r20, 0X8);
    // 0x00244768: lw          $t2, 0xC($s4)
    ctx->r10 = MEM_W(ctx->r20, 0XC);
    // 0x0024476C: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
    // 0x00244770: sw          $t1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r9;
    // 0x00244774: sw          $t2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r10;
    // 0x00244778: lw          $v0, 0x10($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X10);
    // 0x0024477C: sw          $v0, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r2;
    // 0x00244780: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x00244784: bne         $s7, $v0, L_002447A0
    if (ctx->r23 != ctx->r2) {
        // 0x00244788: addu        $a1, $a0, $zero
        ctx->r5 = ADD32(ctx->r4, 0);
            goto L_002447A0;
    }
    // 0x00244788: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x0024478C: jal         0x00268A5C
    // 0x00244790: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    func_00268A5C(rdram, ctx);
        goto after_15;
    // 0x00244790: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    after_15:
    // 0x00244794: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
L_00244798:
    // 0x00244798: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
L_0024479C:
    // 0x0024479C: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
L_002447A0:
    // 0x002447A0: jal         0x0020EEF8
    // 0x002447A4: addiu       $a2, $s3, 0x6C
    ctx->r6 = ADD32(ctx->r19, 0X6C);
    func_0020EEF8(rdram, ctx);
        goto after_16;
    // 0x002447A4: addiu       $a2, $s3, 0x6C
    ctx->r6 = ADD32(ctx->r19, 0X6C);
    after_16:
    // 0x002447A8: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x002447AC: c.lt.s      $f0, $f21
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 21);
    c1cs = ctx->f0.fl < ctx->f21.fl;
    // 0x002447B0: nop

    // 0x002447B4: bc1f        L_00244808
    if (!c1cs) {
        // 0x002447B8: addiu       $a1, $s4, 0x4
        ctx->r5 = ADD32(ctx->r20, 0X4);
            goto L_00244808;
    }
    // 0x002447B8: addiu       $a1, $s4, 0x4
    ctx->r5 = ADD32(ctx->r20, 0X4);
    // 0x002447BC: addiu       $s0, $sp, 0x40
    ctx->r16 = ADD32(ctx->r29, 0X40);
    // 0x002447C0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x002447C4: jal         0x0020EF2C
    // 0x002447C8: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    func_0020EF2C(rdram, ctx);
        goto after_17;
    // 0x002447C8: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    after_17:
    // 0x002447CC: jal         0x0020EAA0
    // 0x002447D0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_0020EAA0(rdram, ctx);
        goto after_18;
    // 0x002447D0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_18:
    // 0x002447D4: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x002447D8: jal         0x002982F0
    // 0x002447DC: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    func_002982F0(rdram, ctx);
        goto after_19;
    // 0x002447DC: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    after_19:
    // 0x002447E0: mul.s       $f0, $f21, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f21.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f21.fl, ctx->f0.fl);
    // 0x002447E4: lwc1        $f1, 0x20($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x002447E8: sub.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl - ctx->f0.fl;
    // 0x002447EC: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    // 0x002447F0: jal         0x002974C0
    // 0x002447F4: swc1        $f1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    func_002974C0(rdram, ctx);
        goto after_20;
    // 0x002447F4: swc1        $f1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    after_20:
    // 0x002447F8: mul.s       $f0, $f21, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f21.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f21.fl, ctx->f0.fl);
    // 0x002447FC: lwc1        $f1, 0x28($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X28);
    // 0x00244800: sub.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl - ctx->f0.fl;
    // 0x00244804: swc1        $f1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
L_00244808:
    // 0x00244808: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x0024480C: bne         $s7, $v0, L_0024483C
    if (ctx->r23 != ctx->r2) {
        // 0x00244810: nop
    
            goto L_0024483C;
    }
    // 0x00244810: nop

    // 0x00244814: jal         0x00268A5C
    // 0x00244818: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    func_00268A5C(rdram, ctx);
        goto after_21;
    // 0x00244818: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    after_21:
    // 0x0024481C: lwc1        $f1, 0x24($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X24);
    // 0x00244820: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x00244824: nop

    // 0x00244828: bc1t        L_00244838
    if (c1cs) {
        // 0x0024482C: mov.s       $f0, $f1
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    ctx->f0.fl = ctx->f1.fl;
            goto L_00244838;
    }
    // 0x0024482C: mov.s       $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    ctx->f0.fl = ctx->f1.fl;
    // 0x00244830: jal         0x00268A5C
    // 0x00244834: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    func_00268A5C(rdram, ctx);
        goto after_22;
    // 0x00244834: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    after_22:
L_00244838:
    // 0x00244838: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
L_0024483C:
    // 0x0024483C: beq         $s5, $zero, L_002448C0
    if (ctx->r21 == 0) {
        // 0x00244840: nop
    
            goto L_002448C0;
    }
    // 0x00244840: nop

    // 0x00244844: jal         0x00268460
    // 0x00244848: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    func_00268460(rdram, ctx);
        goto after_23;
    // 0x00244848: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    after_23:
    // 0x0024484C: lwc1        $f12, 0x8C($s3)
    ctx->f12.u32l = MEM_W(ctx->r19, 0X8C);
    // 0x00244850: jal         0x002982F0
    // 0x00244854: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    func_002982F0(rdram, ctx);
        goto after_24;
    // 0x00244854: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    after_24:
    // 0x00244858: mul.s       $f0, $f20, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f20.fl, ctx->f0.fl);
    // 0x0024485C: lwc1        $f1, 0x4($s4)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r20, 0X4);
    // 0x00244860: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x00244864: swc1        $f1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    // 0x00244868: lwc1        $f0, 0x90($s3)
    ctx->f0.u32l = MEM_W(ctx->r19, 0X90);
    // 0x0024486C: swc1        $f0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f0.u32l;
    // 0x00244870: lwc1        $f12, 0x8C($s3)
    ctx->f12.u32l = MEM_W(ctx->r19, 0X8C);
    // 0x00244874: jal         0x002974C0
    // 0x00244878: nop

    func_002974C0(rdram, ctx);
        goto after_25;
    // 0x00244878: nop

    after_25:
    // 0x0024487C: mul.s       $f20, $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = MUL_S(ctx->f20.fl, ctx->f0.fl);
    // 0x00244880: lwc1        $f0, 0xC($s4)
    ctx->f0.u32l = MEM_W(ctx->r20, 0XC);
    // 0x00244884: add.s       $f0, $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f20.fl;
    // 0x00244888: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0024488C: lwc1        $f1, 0x6924($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X6924);
    // 0x00244890: swc1        $f0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f0.u32l;
    // 0x00244894: sw          $s2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r18;
    // 0x00244898: swc1        $f1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    // 0x0024489C: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    // 0x002448A0: lw          $a2, 0x34($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X34);
    // 0x002448A4: lw          $a3, 0x38($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X38);
    // 0x002448A8: jal         0x00244E84
    // 0x002448AC: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    func_00244E84(rdram, ctx);
        goto after_26;
    // 0x002448AC: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    after_26:
    // 0x002448B0: lwc1        $f1, 0x90($s3)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r19, 0X90);
    // 0x002448B4: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x002448B8: j           L_002448D8
    // 0x002448BC: swc1        $f1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
        goto L_002448D8;
    // 0x002448BC: swc1        $f1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
L_002448C0:
    // 0x002448C0: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x002448C4: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    // 0x002448C8: lw          $a3, 0x28($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X28);
    // 0x002448CC: jal         0x00246310
    // 0x002448D0: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    func_00246310(rdram, ctx);
        goto after_27;
    // 0x002448D0: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    after_27:
    // 0x002448D4: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
L_002448D8:
    // 0x002448D8: addiu       $a0, $sp, 0x50
    ctx->r4 = ADD32(ctx->r29, 0X50);
    // 0x002448DC: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x002448E0: jal         0x0020EF2C
    // 0x002448E4: addiu       $a2, $s4, 0x4
    ctx->r6 = ADD32(ctx->r20, 0X4);
    func_0020EF2C(rdram, ctx);
        goto after_28;
    // 0x002448E4: addiu       $a2, $s4, 0x4
    ctx->r6 = ADD32(ctx->r20, 0X4);
    after_28:
    // 0x002448E8: sw          $s1, 0x0($s6)
    MEM_W(0X0, ctx->r22) = ctx->r17;
    // 0x002448EC: sw          $s2, 0x4($s6)
    MEM_W(0X4, ctx->r22) = ctx->r18;
    // 0x002448F0: swc1        $f20, 0x8($s6)
    MEM_W(0X8, ctx->r22) = ctx->f20.u32l;
    // 0x002448F4: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x002448F8: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x002448FC: lw          $t2, 0x28($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X28);
    // 0x00244900: sw          $t0, 0xC($s6)
    MEM_W(0XC, ctx->r22) = ctx->r8;
    // 0x00244904: sw          $t1, 0x10($s6)
    MEM_W(0X10, ctx->r22) = ctx->r9;
    // 0x00244908: sw          $t2, 0x14($s6)
    MEM_W(0X14, ctx->r22) = ctx->r10;
    // 0x0024490C: lw          $t0, 0x50($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X50);
    // 0x00244910: lw          $t1, 0x54($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X54);
    // 0x00244914: lw          $t2, 0x58($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X58);
    // 0x00244918: sw          $t0, 0x18($s6)
    MEM_W(0X18, ctx->r22) = ctx->r8;
    // 0x0024491C: sw          $t1, 0x1C($s6)
    MEM_W(0X1C, ctx->r22) = ctx->r9;
    // 0x00244920: sw          $t2, 0x20($s6)
    MEM_W(0X20, ctx->r22) = ctx->r10;
    // 0x00244924: lwc1        $f1, 0x50($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X50);
    // 0x00244928: mul.s       $f1, $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f1.fl);
    // 0x0024492C: lwc1        $f0, 0x54($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X54);
    // 0x00244930: mul.s       $f0, $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x00244934: lwc1        $f12, 0x58($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X58);
    // 0x00244938: mul.s       $f12, $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x0024493C: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x00244940: jal         0x00298470
    // 0x00244944: add.s       $f12, $f1, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = ctx->f1.fl + ctx->f12.fl;
    func_00298470(rdram, ctx);
        goto after_29;
    // 0x00244944: add.s       $f12, $f1, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = ctx->f1.fl + ctx->f12.fl;
    after_29:
    // 0x00244948: swc1        $f0, 0x24($s6)
    MEM_W(0X24, ctx->r22) = ctx->f0.u32l;
    // 0x0024494C: sw          $zero, 0x54($sp)
    MEM_W(0X54, ctx->r29) = 0;
    // 0x00244950: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x00244954: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x00244958: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x0024495C: lw          $t2, 0x28($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X28);
    // 0x00244960: sw          $t0, 0x28($s6)
    MEM_W(0X28, ctx->r22) = ctx->r8;
    // 0x00244964: sw          $t1, 0x2C($s6)
    MEM_W(0X2C, ctx->r22) = ctx->r9;
    // 0x00244968: sw          $t2, 0x30($s6)
    MEM_W(0X30, ctx->r22) = ctx->r10;
    // 0x0024496C: lw          $t0, 0x50($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X50);
    // 0x00244970: lw          $t1, 0x54($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X54);
    // 0x00244974: lw          $t2, 0x58($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X58);
    // 0x00244978: sw          $t0, 0x34($s6)
    MEM_W(0X34, ctx->r22) = ctx->r8;
    // 0x0024497C: sw          $t1, 0x38($s6)
    MEM_W(0X38, ctx->r22) = ctx->r9;
    // 0x00244980: sw          $t2, 0x3C($s6)
    MEM_W(0X3C, ctx->r22) = ctx->r10;
    // 0x00244984: lwc1        $f1, 0x50($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X50);
    // 0x00244988: mul.s       $f1, $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f1.fl);
    // 0x0024498C: lwc1        $f0, 0x54($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X54);
    // 0x00244990: mul.s       $f0, $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x00244994: lwc1        $f12, 0x58($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X58);
    // 0x00244998: mul.s       $f12, $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x0024499C: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x002449A0: jal         0x00298470
    // 0x002449A4: add.s       $f12, $f1, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = ctx->f1.fl + ctx->f12.fl;
    func_00298470(rdram, ctx);
        goto after_30;
    // 0x002449A4: add.s       $f12, $f1, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = ctx->f1.fl + ctx->f12.fl;
    after_30:
    // 0x002449A8: swc1        $f0, 0x40($s6)
    MEM_W(0X40, ctx->r22) = ctx->f0.u32l;
    // 0x002449AC: lw          $ra, 0xA8($sp)
    ctx->r31 = MEM_W(ctx->r29, 0XA8);
    // 0x002449B0: lw          $s7, 0xA4($sp)
    ctx->r23 = MEM_W(ctx->r29, 0XA4);
    // 0x002449B4: lw          $s6, 0xA0($sp)
    ctx->r22 = MEM_W(ctx->r29, 0XA0);
    // 0x002449B8: lw          $s5, 0x9C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X9C);
    // 0x002449BC: lw          $s4, 0x98($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X98);
    // 0x002449C0: lw          $s3, 0x94($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X94);
    // 0x002449C4: lw          $s2, 0x90($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X90);
    // 0x002449C8: lw          $s1, 0x8C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X8C);
    // 0x002449CC: lw          $s0, 0x88($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X88);
    // 0x002449D0: ldc1        $f21, 0xB8($sp)
    CHECK_FR(ctx, 21);
    ctx->f21.u64 = LD(ctx->r29, 0XB8);
    // 0x002449D4: ldc1        $f20, 0xB0($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0XB0);
    // 0x002449D8: jr          $ra
    // 0x002449DC: addiu       $sp, $sp, 0xC0
    ctx->r29 = ADD32(ctx->r29, 0XC0);
    return;
    // 0x002449DC: addiu       $sp, $sp, 0xC0
    ctx->r29 = ADD32(ctx->r29, 0XC0);
;}
RECOMP_FUNC void func_002182BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002182BC: lw          $v0, 0x14($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X14);
    // 0x002182C0: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x002182C4: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    // 0x002182C8: sw          $a1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r5;
    // 0x002182CC: lw          $v1, 0x8($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X8);
    // 0x002182D0: lw          $t0, 0xC($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XC);
    // 0x002182D4: lw          $t1, 0x10($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X10);
    // 0x002182D8: sw          $v1, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r3;
    // 0x002182DC: sw          $t0, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r8;
    // 0x002182E0: sw          $t1, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->r9;
    // 0x002182E4: jr          $ra
    // 0x002182E8: sw          $v0, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->r2;
    return;
    // 0x002182E8: sw          $v0, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->r2;
;}
RECOMP_FUNC void func_002545F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002545F0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x002545F4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x002545F8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x002545FC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x00254600: jal         0x00268A2C
    // 0x00254604: addu        $a0, $a1, $zero
    ctx->r4 = ADD32(ctx->r5, 0);
    func_00268A2C(rdram, ctx);
        goto after_0;
    // 0x00254604: addu        $a0, $a1, $zero
    ctx->r4 = ADD32(ctx->r5, 0);
    after_0:
    // 0x00254608: beq         $v0, $zero, L_00254630
    if (ctx->r2 == 0) {
        // 0x0025460C: nop
    
            goto L_00254630;
    }
    // 0x0025460C: nop

    // 0x00254610: lwc1        $f0, 0x2C($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X2C);
    // 0x00254614: lwc1        $f1, 0xB24($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0XB24);
    // 0x00254618: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x0025461C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00254620: lwc1        $f2, 0x7114($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X7114);
    // 0x00254624: mul.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f2.fl);
    // 0x00254628: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x0025462C: swc1        $f1, 0xB24($s0)
    MEM_W(0XB24, ctx->r16) = ctx->f_odd[(1 - 1) * 2];
L_00254630:
    // 0x00254630: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x00254634: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00254638: jr          $ra
    // 0x0025463C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0025463C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0023F120(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0023F120: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x0023F124: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x0023F128: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x0023F12C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x0023F130: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x0023F134: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x0023F138: sw          $ra, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r31;
    // 0x0023F13C: sw          $s5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r21;
    // 0x0023F140: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x0023F144: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x0023F148: lh          $a1, 0xC($s0)
    ctx->r5 = MEM_H(ctx->r16, 0XC);
    // 0x0023F14C: addiu       $s5, $zero, -0x1
    ctx->r21 = ADD32(0, -0X1);
    // 0x0023F150: beq         $a1, $s5, L_0023F168
    if (ctx->r5 == ctx->r21) {
        // 0x0023F154: addu        $s1, $zero, $zero
        ctx->r17 = ADD32(0, 0);
            goto L_0023F168;
    }
    // 0x0023F154: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x0023F158: lh          $a2, 0xE($s0)
    ctx->r6 = MEM_H(ctx->r16, 0XE);
    // 0x0023F15C: jal         0x00253B54
    // 0x0023F160: nop

    func_00253B54(rdram, ctx);
        goto after_0;
    // 0x0023F160: nop

    after_0:
    // 0x0023F164: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
L_0023F168:
    // 0x0023F168: beq         $s1, $zero, L_0023F1F4
    if (ctx->r17 == 0) {
        // 0x0023F16C: addiu       $a1, $zero, 0x80
        ctx->r5 = ADD32(0, 0X80);
            goto L_0023F1F4;
    }
    // 0x0023F16C: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    // 0x0023F170: addiu       $a2, $zero, 0x32
    ctx->r6 = ADD32(0, 0X32);
    // 0x0023F174: lh          $s3, 0x6($s0)
    ctx->r19 = MEM_H(ctx->r16, 0X6);
    // 0x0023F178: lh          $s4, 0x8($s0)
    ctx->r20 = MEM_H(ctx->r16, 0X8);
    // 0x0023F17C: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
    // 0x0023F180: addiu       $v0, $zero, 0x4B
    ctx->r2 = ADD32(0, 0X4B);
    // 0x0023F184: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x0023F188: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x0023F18C: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x0023F190: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x0023F194: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x0023F198: lw          $a0, 0x51C($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X51C);
    // 0x0023F19C: jal         0x00281060
    // 0x0023F1A0: addu        $a3, $a2, $zero
    ctx->r7 = ADD32(ctx->r6, 0);
    func_00281060(rdram, ctx);
        goto after_1;
    // 0x0023F1A0: addu        $a3, $a2, $zero
    ctx->r7 = ADD32(ctx->r6, 0);
    after_1:
    // 0x0023F1A4: beq         $s0, $zero, L_0023F1C0
    if (ctx->r16 == 0) {
        // 0x0023F1A8: nop
    
            goto L_0023F1C0;
    }
    // 0x0023F1A8: nop

    // 0x0023F1AC: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x0023F1B0: addiu       $a0, $a0, -0x6750
    ctx->r4 = ADD32(ctx->r4, -0X6750);
    // 0x0023F1B4: lw          $a1, 0x51C($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X51C);
    // 0x0023F1B8: jal         0x0027FC2C
    // 0x0023F1BC: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    func_0027FC2C(rdram, ctx);
        goto after_2;
    // 0x0023F1BC: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    after_2:
L_0023F1C0:
    // 0x0023F1C0: beq         $s3, $zero, L_0023F1E4
    if (ctx->r19 == 0) {
        // 0x0023F1C4: nop
    
            goto L_0023F1E4;
    }
    // 0x0023F1C4: nop

    // 0x0023F1C8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x0023F1CC: sw          $s5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r21;
    // 0x0023F1D0: lw          $a1, 0x4($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X4);
    // 0x0023F1D4: lw          $a2, 0x8($s2)
    ctx->r6 = MEM_W(ctx->r18, 0X8);
    // 0x0023F1D8: lw          $a3, 0xC($s2)
    ctx->r7 = MEM_W(ctx->r18, 0XC);
    // 0x0023F1DC: jal         0x00275544
    // 0x0023F1E0: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    func_00275544(rdram, ctx);
        goto after_3;
    // 0x0023F1E0: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    after_3:
L_0023F1E4:
    // 0x0023F1E4: beq         $s4, $zero, L_0023F1F8
    if (ctx->r20 == 0) {
        // 0x0023F1E8: addu        $v0, $s1, $zero
        ctx->r2 = ADD32(ctx->r17, 0);
            goto L_0023F1F8;
    }
    // 0x0023F1E8: addu        $v0, $s1, $zero
    ctx->r2 = ADD32(ctx->r17, 0);
    // 0x0023F1EC: jal         0x0027580C
    // 0x0023F1F0: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    func_0027580C(rdram, ctx);
        goto after_4;
    // 0x0023F1F0: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    after_4:
L_0023F1F4:
    // 0x0023F1F4: addu        $v0, $s1, $zero
    ctx->r2 = ADD32(ctx->r17, 0);
L_0023F1F8:
    // 0x0023F1F8: lw          $ra, 0x38($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X38);
    // 0x0023F1FC: lw          $s5, 0x34($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X34);
    // 0x0023F200: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x0023F204: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x0023F208: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x0023F20C: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x0023F210: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x0023F214: jr          $ra
    // 0x0023F218: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x0023F218: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_00246108(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00246108: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x0024610C: sw          $s2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r18;
    // 0x00246110: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x00246114: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x00246118: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x0024611C: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x00246120: sw          $ra, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r31;
    // 0x00246124: sw          $s3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r19;
    // 0x00246128: lwc1        $f1, 0x7C($s1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r17, 0X7C);
    // 0x0024612C: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x00246130: lw          $s3, 0x58($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X58);
    // 0x00246134: c.lt.s      $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f2.fl < ctx->f1.fl;
    // 0x00246138: nop

    // 0x0024613C: bc1f        L_00246168
    if (!c1cs) {
        // 0x00246140: addu        $s0, $a2, $zero
        ctx->r16 = ADD32(ctx->r6, 0);
            goto L_00246168;
    }
    // 0x00246140: addu        $s0, $a2, $zero
    ctx->r16 = ADD32(ctx->r6, 0);
    // 0x00246144: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00246148: lwc1        $f0, 0x6D28($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6D28);
    // 0x0024614C: sub.s       $f0, $f1, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f1.fl - ctx->f0.fl;
    // 0x00246150: c.le.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl <= ctx->f2.fl;
    // 0x00246154: nop

    // 0x00246158: bc1f        L_00246168
    if (!c1cs) {
        // 0x0024615C: swc1        $f0, 0x7C($s1)
        MEM_W(0X7C, ctx->r17) = ctx->f0.u32l;
            goto L_00246168;
    }
    // 0x0024615C: swc1        $f0, 0x7C($s1)
    MEM_W(0X7C, ctx->r17) = ctx->f0.u32l;
    // 0x00246160: sw          $zero, 0x78($s1)
    MEM_W(0X78, ctx->r17) = 0;
    // 0x00246164: swc1        $f2, 0x7C($s1)
    MEM_W(0X7C, ctx->r17) = ctx->f2.u32l;
L_00246168:
    // 0x00246168: beq         $a3, $zero, L_00246188
    if (ctx->r7 == 0) {
        // 0x0024616C: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_00246188;
    }
    // 0x0024616C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x00246170: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x00246174: lw          $a2, 0x88($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X88);
    // 0x00246178: jal         0x00244338
    // 0x0024617C: addiu       $a3, $s0, 0x44
    ctx->r7 = ADD32(ctx->r16, 0X44);
    func_00244338(rdram, ctx);
        goto after_0;
    // 0x0024617C: addiu       $a3, $s0, 0x44
    ctx->r7 = ADD32(ctx->r16, 0X44);
    after_0:
    // 0x00246180: j           L_00246230
    // 0x00246184: nop

        goto L_00246230;
    // 0x00246184: nop

L_00246188:
    // 0x00246188: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x0024618C: lw          $v1, 0x4($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X4);
    // 0x00246190: lw          $t0, 0x8($s2)
    ctx->r8 = MEM_W(ctx->r18, 0X8);
    // 0x00246194: lw          $t1, 0xC($s2)
    ctx->r9 = MEM_W(ctx->r18, 0XC);
    // 0x00246198: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    // 0x0024619C: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x002461A0: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    // 0x002461A4: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x002461A8: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x002461AC: sw          $zero, 0x28($sp)
    MEM_W(0X28, ctx->r29) = 0;
    // 0x002461B0: sw          $v0, 0x44($s0)
    MEM_W(0X44, ctx->r16) = ctx->r2;
    // 0x002461B4: addiu       $v0, $s0, 0x44
    ctx->r2 = ADD32(ctx->r16, 0X44);
    // 0x002461B8: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x002461BC: sw          $zero, 0x8($v0)
    MEM_W(0X8, ctx->r2) = 0;
    // 0x002461C0: lw          $v1, 0x10($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X10);
    // 0x002461C4: lw          $t0, 0x14($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X14);
    // 0x002461C8: lw          $t1, 0x18($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X18);
    // 0x002461CC: sw          $v1, 0x50($s0)
    MEM_W(0X50, ctx->r16) = ctx->r3;
    // 0x002461D0: sw          $t0, 0x54($s0)
    MEM_W(0X54, ctx->r16) = ctx->r8;
    // 0x002461D4: sw          $t1, 0x58($s0)
    MEM_W(0X58, ctx->r16) = ctx->r9;
    // 0x002461D8: lw          $v1, 0x20($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X20);
    // 0x002461DC: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x002461E0: lw          $t1, 0x28($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X28);
    // 0x002461E4: sw          $v1, 0x5C($s0)
    MEM_W(0X5C, ctx->r16) = ctx->r3;
    // 0x002461E8: sw          $t0, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r8;
    // 0x002461EC: sw          $t1, 0x64($s0)
    MEM_W(0X64, ctx->r16) = ctx->r9;
    // 0x002461F0: sw          $zero, 0x24($v0)
    MEM_W(0X24, ctx->r2) = 0;
    // 0x002461F4: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x002461F8: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x002461FC: lw          $v1, 0x10($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X10);
    // 0x00246200: lw          $t0, 0x14($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X14);
    // 0x00246204: lw          $t1, 0x18($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X18);
    // 0x00246208: sw          $v1, 0x6C($s0)
    MEM_W(0X6C, ctx->r16) = ctx->r3;
    // 0x0024620C: sw          $t0, 0x70($s0)
    MEM_W(0X70, ctx->r16) = ctx->r8;
    // 0x00246210: sw          $t1, 0x74($s0)
    MEM_W(0X74, ctx->r16) = ctx->r9;
    // 0x00246214: lw          $v1, 0x20($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X20);
    // 0x00246218: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x0024621C: lw          $t1, 0x28($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X28);
    // 0x00246220: sw          $v1, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->r3;
    // 0x00246224: sw          $t0, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->r8;
    // 0x00246228: sw          $t1, 0x80($s0)
    MEM_W(0X80, ctx->r16) = ctx->r9;
    // 0x0024622C: sw          $zero, 0x40($v0)
    MEM_W(0X40, ctx->r2) = 0;
L_00246230:
    // 0x00246230: beq         $s3, $zero, L_00246250
    if (ctx->r19 == 0) {
        // 0x00246234: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_00246250;
    }
    // 0x00246234: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x00246238: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x0024623C: lw          $a2, 0x80($a1)
    ctx->r6 = MEM_W(ctx->r5, 0X80);
    // 0x00246240: jal         0x002449E0
    // 0x00246244: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    func_002449E0(rdram, ctx);
        goto after_1;
    // 0x00246244: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    after_1:
    // 0x00246248: j           L_002462F4
    // 0x0024624C: nop

        goto L_002462F4;
    // 0x0024624C: nop

L_00246250:
    // 0x00246250: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x00246254: lw          $v1, 0x4($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X4);
    // 0x00246258: lw          $t0, 0x8($s2)
    ctx->r8 = MEM_W(ctx->r18, 0X8);
    // 0x0024625C: lw          $t1, 0xC($s2)
    ctx->r9 = MEM_W(ctx->r18, 0XC);
    // 0x00246260: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    // 0x00246264: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x00246268: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    // 0x0024626C: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x00246270: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x00246274: sw          $zero, 0x28($sp)
    MEM_W(0X28, ctx->r29) = 0;
    // 0x00246278: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x0024627C: sw          $zero, 0x4($s0)
    MEM_W(0X4, ctx->r16) = 0;
    // 0x00246280: sw          $zero, 0x8($s0)
    MEM_W(0X8, ctx->r16) = 0;
    // 0x00246284: lw          $v1, 0x10($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X10);
    // 0x00246288: lw          $t0, 0x14($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X14);
    // 0x0024628C: lw          $t1, 0x18($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X18);
    // 0x00246290: sw          $v1, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r3;
    // 0x00246294: sw          $t0, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r8;
    // 0x00246298: sw          $t1, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r9;
    // 0x0024629C: lw          $v1, 0x20($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X20);
    // 0x002462A0: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x002462A4: lw          $t1, 0x28($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X28);
    // 0x002462A8: sw          $v1, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->r3;
    // 0x002462AC: sw          $t0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r8;
    // 0x002462B0: sw          $t1, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r9;
    // 0x002462B4: sw          $zero, 0x24($s0)
    MEM_W(0X24, ctx->r16) = 0;
    // 0x002462B8: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x002462BC: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x002462C0: lw          $v1, 0x10($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X10);
    // 0x002462C4: lw          $t0, 0x14($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X14);
    // 0x002462C8: lw          $t1, 0x18($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X18);
    // 0x002462CC: sw          $v1, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->r3;
    // 0x002462D0: sw          $t0, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->r8;
    // 0x002462D4: sw          $t1, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->r9;
    // 0x002462D8: lw          $v1, 0x20($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X20);
    // 0x002462DC: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x002462E0: lw          $t1, 0x28($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X28);
    // 0x002462E4: sw          $v1, 0x34($s0)
    MEM_W(0X34, ctx->r16) = ctx->r3;
    // 0x002462E8: sw          $t0, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->r8;
    // 0x002462EC: sw          $t1, 0x3C($s0)
    MEM_W(0X3C, ctx->r16) = ctx->r9;
    // 0x002462F0: sw          $zero, 0x40($s0)
    MEM_W(0X40, ctx->r16) = 0;
L_002462F4:
    // 0x002462F4: lw          $ra, 0x40($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X40);
    // 0x002462F8: lw          $s3, 0x3C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X3C);
    // 0x002462FC: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x00246300: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x00246304: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x00246308: jr          $ra
    // 0x0024630C: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x0024630C: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_002717C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002717C0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x002717C4: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x002717C8: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x002717CC: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x002717D0: addu        $s2, $a1, $zero
    ctx->r18 = ADD32(ctx->r5, 0);
    // 0x002717D4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x002717D8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x002717DC: jal         0x0029DFF0
    // 0x002717E0: addiu       $s0, $s1, 0x110
    ctx->r16 = ADD32(ctx->r17, 0X110);
    func_0029DFF0(rdram, ctx);
        goto after_0;
    // 0x002717E0: addiu       $s0, $s1, 0x110
    ctx->r16 = ADD32(ctx->r17, 0X110);
    after_0:
    // 0x002717E4: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x002717E8: lw          $v1, 0x1C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X1C);
    // 0x002717EC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x002717F0: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x002717F4: beq         $v1, $v0, L_0027181C
    if (ctx->r3 == ctx->r2) {
        // 0x002717F8: sw          $v1, 0x1C($s0)
        MEM_W(0X1C, ctx->r16) = ctx->r3;
            goto L_0027181C;
    }
    // 0x002717F8: sw          $v1, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r3;
    // 0x002717FC: jal         0x0029E010
    // 0x00271800: nop

    func_0029E010(rdram, ctx);
        goto after_1;
    // 0x00271800: nop

    after_1:
    // 0x00271804: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00271808: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x0027180C: jal         0x0029B6F0
    // 0x00271810: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osRecvMesg_recomp(rdram, ctx);
        goto after_2;
    // 0x00271810: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_2:
    // 0x00271814: j           L_00271828
    // 0x00271818: addiu       $a0, $s1, 0x1DB8
    ctx->r4 = ADD32(ctx->r17, 0X1DB8);
        goto L_00271828;
    // 0x00271818: addiu       $a0, $s1, 0x1DB8
    ctx->r4 = ADD32(ctx->r17, 0X1DB8);
L_0027181C:
    // 0x0027181C: jal         0x0029E010
    // 0x00271820: nop

    func_0029E010(rdram, ctx);
        goto after_3;
    // 0x00271820: nop

    after_3:
    // 0x00271824: addiu       $a0, $s1, 0x1DB8
    ctx->r4 = ADD32(ctx->r17, 0X1DB8);
L_00271828:
    // 0x00271828: jal         0x0027392C
    // 0x0027182C: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    func_0027392C(rdram, ctx);
        goto after_4;
    // 0x0027182C: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    after_4:
    // 0x00271830: addiu       $a0, $s1, 0x138
    ctx->r4 = ADD32(ctx->r17, 0X138);
    // 0x00271834: jal         0x00276658
    // 0x00271838: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    func_00276658(rdram, ctx);
        goto after_5;
    // 0x00271838: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    after_5:
    // 0x0027183C: addiu       $s0, $s1, 0x110
    ctx->r16 = ADD32(ctx->r17, 0X110);
    // 0x00271840: jal         0x0029DFF0
    // 0x00271844: sw          $zero, 0x2B9C($s1)
    MEM_W(0X2B9C, ctx->r17) = 0;
    func_0029DFF0(rdram, ctx);
        goto after_6;
    // 0x00271844: sw          $zero, 0x2B9C($s1)
    MEM_W(0X2B9C, ctx->r17) = 0;
    after_6:
    // 0x00271848: lw          $v1, 0x1C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X1C);
    // 0x0027184C: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x00271850: beq         $v1, $zero, L_00271878
    if (ctx->r3 == 0) {
        // 0x00271854: sw          $v1, 0x1C($s0)
        MEM_W(0X1C, ctx->r16) = ctx->r3;
            goto L_00271878;
    }
    // 0x00271854: sw          $v1, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r3;
    // 0x00271858: jal         0x0029E010
    // 0x0027185C: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    func_0029E010(rdram, ctx);
        goto after_7;
    // 0x0027185C: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    after_7:
    // 0x00271860: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00271864: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x00271868: jal         0x0029B820
    // 0x0027186C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osSendMesg_recomp(rdram, ctx);
        goto after_8;
    // 0x0027186C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_8:
    // 0x00271870: j           L_00271880
    // 0x00271874: nop

        goto L_00271880;
    // 0x00271874: nop

L_00271878:
    // 0x00271878: jal         0x0029E010
    // 0x0027187C: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    func_0029E010(rdram, ctx);
        goto after_9;
    // 0x0027187C: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    after_9:
L_00271880:
    // 0x00271880: jal         0x00276DFC
    // 0x00271884: addiu       $a0, $s1, 0x2BC0
    ctx->r4 = ADD32(ctx->r17, 0X2BC0);
    func_00276DFC(rdram, ctx);
        goto after_10;
    // 0x00271884: addiu       $a0, $s1, 0x2BC0
    ctx->r4 = ADD32(ctx->r17, 0X2BC0);
    after_10:
    // 0x00271888: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x0027188C: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x00271890: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00271894: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00271898: jr          $ra
    // 0x0027189C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x0027189C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_0045FCD0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0045FCD0: beq         $a2, $zero, L_0045FD1C
    if (ctx->r6 == 0) {
        // 0x0045FCD4: addu        $v1, $a0, $zero
        ctx->r3 = ADD32(ctx->r4, 0);
            goto L_0045FD1C;
    }
    // 0x0045FCD4: addu        $v1, $a0, $zero
    ctx->r3 = ADD32(ctx->r4, 0);
L_0045FCD8:
    // 0x0045FCD8: lbu         $v0, 0x0($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X0);
    // 0x0045FCDC: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x0045FCE0: sb          $v0, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r2;
    // 0x0045FCE4: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x0045FCE8: beq         $v0, $zero, L_0045FCFC
    if (ctx->r2 == 0) {
        // 0x0045FCEC: addiu       $a0, $a0, 0x1
        ctx->r4 = ADD32(ctx->r4, 0X1);
            goto L_0045FCFC;
    }
    // 0x0045FCEC: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x0045FCF0: addiu       $a2, $a2, -0x1
    ctx->r6 = ADD32(ctx->r6, -0X1);
    // 0x0045FCF4: bne         $a2, $zero, L_0045FCD8
    if (ctx->r6 != 0) {
        // 0x0045FCF8: nop
    
            goto L_0045FCD8;
    }
    // 0x0045FCF8: nop

L_0045FCFC:
    // 0x0045FCFC: beq         $a2, $zero, L_0045FD1C
    if (ctx->r6 == 0) {
        // 0x0045FD00: addiu       $a2, $a2, -0x1
        ctx->r6 = ADD32(ctx->r6, -0X1);
            goto L_0045FD1C;
    }
    // 0x0045FD00: addiu       $a2, $a2, -0x1
    ctx->r6 = ADD32(ctx->r6, -0X1);
    // 0x0045FD04: beq         $a2, $zero, L_0045FD1C
    if (ctx->r6 == 0) {
        // 0x0045FD08: nop
    
            goto L_0045FD1C;
    }
    // 0x0045FD08: nop

L_0045FD0C:
    // 0x0045FD0C: sb          $zero, 0x0($a0)
    MEM_B(0X0, ctx->r4) = 0;
    // 0x0045FD10: addiu       $a2, $a2, -0x1
    ctx->r6 = ADD32(ctx->r6, -0X1);
    // 0x0045FD14: bne         $a2, $zero, L_0045FD0C
    if (ctx->r6 != 0) {
        // 0x0045FD18: addiu       $a0, $a0, 0x1
        ctx->r4 = ADD32(ctx->r4, 0X1);
            goto L_0045FD0C;
    }
    // 0x0045FD18: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
L_0045FD1C:
    // 0x0045FD1C: jr          $ra
    // 0x0045FD20: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
    return;
    // 0x0045FD20: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
;}
RECOMP_FUNC void func_00293EC0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00293EC0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x00293EC4: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x00293EC8: lw          $a1, 0x40($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X40);
    // 0x00293ECC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00293ED0: sh          $v0, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r2;
    // 0x00293ED4: lw          $v1, 0x3C($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X3C);
    // 0x00293ED8: addiu       $a0, $a0, 0x14
    ctx->r4 = ADD32(ctx->r4, 0X14);
    // 0x00293EDC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x00293EE0: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x00293EE4: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x00293EE8: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x00293EEC: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    // 0x00293EF0: sw          $a1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r5;
    // 0x00293EF4: jal         0x00291034
    // 0x00293EF8: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    func_00291034(rdram, ctx);
        goto after_0;
    // 0x00293EF8: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    after_0:
    // 0x00293EFC: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x00293F00: jr          $ra
    // 0x00293F04: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x00293F04: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_0028EA88(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0028EA88: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x0028EA8C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0028EA90: lui         $s0, 0x8012
    ctx->r16 = S32(0X8012 << 16);
    // 0x0028EA94: lw          $s0, 0x1290($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X1290);
    // 0x0028EA98: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x0028EA9C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x0028EAA0: lw          $v1, 0x4($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X4);
    // 0x0028EAA4: beq         $v1, $zero, L_0028EAB8
    if (ctx->r3 == 0) {
        // 0x0028EAA8: nop
    
            goto L_0028EAB8;
    }
    // 0x0028EAA8: nop

    // 0x0028EAAC: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x0028EAB0: j           L_0028EACC
    // 0x0028EAB4: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
        goto L_0028EACC;
    // 0x0028EAB4: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
L_0028EAB8:
    // 0x0028EAB8: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x0028EABC: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x0028EAC0: sw          $v0, 0x1290($at)
    MEM_W(0X1290, ctx->r1) = ctx->r2;
    // 0x0028EAC4: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x0028EAC8: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
L_0028EACC:
    // 0x0028EACC: lw          $v1, 0x0($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X0);
    // 0x0028EAD0: beq         $v1, $zero, L_0028EAE4
    if (ctx->r3 == 0) {
        // 0x0028EAD4: nop
    
            goto L_0028EAE4;
    }
    // 0x0028EAD4: nop

    // 0x0028EAD8: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // 0x0028EADC: j           L_0028EAF8
    // 0x0028EAE0: sw          $v0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r2;
        goto L_0028EAF8;
    // 0x0028EAE0: sw          $v0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r2;
L_0028EAE4:
    // 0x0028EAE4: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // 0x0028EAE8: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x0028EAEC: sw          $v0, 0x1294($at)
    MEM_W(0X1294, ctx->r1) = ctx->r2;
    // 0x0028EAF0: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // 0x0028EAF4: sw          $zero, 0x0($v0)
    MEM_W(0X0, ctx->r2) = 0;
L_0028EAF8:
    // 0x0028EAF8: jal         0x0028DEFC
    // 0x0028EAFC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_0028DEFC(rdram, ctx);
        goto after_0;
    // 0x0028EAFC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x0028EB00: lhu         $v0, 0x8($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X8);
    // 0x0028EB04: ori         $s1, $zero, 0xFFFF
    ctx->r17 = 0 | 0XFFFF;
    // 0x0028EB08: beql        $v0, $s1, L_0028EB3C
    if (ctx->r2 == ctx->r17) {
        // 0x0028EB0C: addu        $v0, $s0, $zero
        ctx->r2 = ADD32(ctx->r16, 0);
            goto L_0028EB3C;
    }
    goto skip_0;
    // 0x0028EB0C: addu        $v0, $s0, $zero
    ctx->r2 = ADD32(ctx->r16, 0);
    skip_0:
    // 0x0028EB10: jal         0x0028EA40
    // 0x0028EB14: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    func_0028EA40(rdram, ctx);
        goto after_1;
    // 0x0028EB14: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    after_1:
    // 0x0028EB18: lhu         $v1, 0x8($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X8);
    // 0x0028EB1C: lhu         $a0, 0x4($v0)
    ctx->r4 = MEM_HU(ctx->r2, 0X4);
    // 0x0028EB20: lw          $v0, 0x10($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X10);
    // 0x0028EB24: subu        $v1, $v1, $a0
    ctx->r3 = SUB32(ctx->r3, ctx->r4);
    // 0x0028EB28: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x0028EB2C: addiu       $v1, $zero, 0xFF
    ctx->r3 = ADD32(0, 0XFF);
    // 0x0028EB30: sb          $v1, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r3;
    // 0x0028EB34: sh          $s1, 0x8($s0)
    MEM_H(0X8, ctx->r16) = ctx->r17;
    // 0x0028EB38: addu        $v0, $s0, $zero
    ctx->r2 = ADD32(ctx->r16, 0);
L_0028EB3C:
    // 0x0028EB3C: sw          $zero, 0xC($s0)
    MEM_W(0XC, ctx->r16) = 0;
    // 0x0028EB40: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x0028EB44: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x0028EB48: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0028EB4C: jr          $ra
    // 0x0028EB50: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x0028EB50: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
