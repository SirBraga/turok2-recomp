#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_004653D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004653D8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x004653DC: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x004653E0: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x004653E4: addu        $at, $a0, $at
    ctx->r1 = ADD32(ctx->r4, ctx->r1);
    // 0x004653E8: lw          $v0, -0x7058($at)
    ctx->r2 = MEM_W(ctx->r1, -0X7058);
    // 0x004653EC: beq         $a1, $v0, L_00465408
    if (ctx->r5 == ctx->r2) {
        // 0x004653F0: nor         $a1, $zero, $a1
        ctx->r5 = ~(0 | ctx->r5);
            goto L_00465408;
    }
    // 0x004653F0: nor         $a1, $zero, $a1
    ctx->r5 = ~(0 | ctx->r5);
    // 0x004653F4: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x004653F8: addu        $at, $a0, $at
    ctx->r1 = ADD32(ctx->r4, ctx->r1);
    // 0x004653FC: sw          $zero, -0x7048($at)
    MEM_W(-0X7048, ctx->r1) = 0;
    // 0x00465400: jal         0x0042C620
    // 0x00465404: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_0042C620(rdram, ctx);
        goto after_0;
    // 0x00465404: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
L_00465408:
    // 0x00465408: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x0046540C: jr          $ra
    // 0x00465410: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00465410: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00293400(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00293400: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00293404: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x00293408: addiu       $v1, $v1, 0x7760
    ctx->r3 = ADD32(ctx->r3, 0X7760);
    // 0x0029340C: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x00293410: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x00293414: bne         $v0, $zero, L_00293424
    if (ctx->r2 != 0) {
        // 0x00293418: nop
    
            goto L_00293424;
    }
    // 0x00293418: nop

    // 0x0029341C: jal         0x002946D0
    // 0x00293420: sw          $a0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r4;
    func_002946D0(rdram, ctx);
        goto after_0;
    // 0x00293420: sw          $a0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r4;
    after_0:
L_00293424:
    // 0x00293424: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x00293428: jr          $ra
    // 0x0029342C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0029342C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00206498(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00206498: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x0020649C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x002064A0: lui         $s0, 0x800E
    ctx->r16 = S32(0X800E << 16);
    // 0x002064A4: lw          $s0, -0x7E0C($s0)
    ctx->r16 = MEM_W(ctx->r16, -0X7E0C);
    // 0x002064A8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x002064AC: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x002064B0: beq         $s0, $zero, L_002064F8
    if (ctx->r16 == 0) {
        // 0x002064B4: sw          $ra, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->r31;
            goto L_002064F8;
    }
    // 0x002064B4: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
L_002064B8:
    // 0x002064B8: lw          $v1, 0x0($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X0);
    // 0x002064BC: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x002064C0: sltu        $v0, $v0, $v1
    ctx->r2 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x002064C4: beq         $v0, $zero, L_002064E4
    if (ctx->r2 == 0) {
        // 0x002064C8: addu        $a1, $s0, $zero
        ctx->r5 = ADD32(ctx->r16, 0);
            goto L_002064E4;
    }
    // 0x002064C8: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x002064CC: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x002064D0: addiu       $a0, $a0, -0x7E0C
    ctx->r4 = ADD32(ctx->r4, -0X7E0C);
    // 0x002064D4: jal         0x002005D0
    // 0x002064D8: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    func_002005D0(rdram, ctx);
        goto after_0;
    // 0x002064D8: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    after_0:
    // 0x002064DC: j           L_002064F0
    // 0x002064E0: nop

        goto L_002064F0;
    // 0x002064E0: nop

L_002064E4:
    // 0x002064E4: lw          $s0, 0x24($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X24);
    // 0x002064E8: bne         $s0, $zero, L_002064B8
    if (ctx->r16 != 0) {
        // 0x002064EC: nop
    
            goto L_002064B8;
    }
    // 0x002064EC: nop

L_002064F0:
    // 0x002064F0: bne         $s0, $zero, L_00206508
    if (ctx->r16 != 0) {
        // 0x002064F4: nop
    
            goto L_00206508;
    }
    // 0x002064F4: nop

L_002064F8:
    // 0x002064F8: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x002064FC: addiu       $a0, $a0, -0x7E0C
    ctx->r4 = ADD32(ctx->r4, -0X7E0C);
    // 0x00206500: jal         0x00200574
    // 0x00206504: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_00200574(rdram, ctx);
        goto after_1;
    // 0x00206504: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_1:
L_00206508:
    // 0x00206508: lw          $v0, 0xC($s1)
    ctx->r2 = MEM_W(ctx->r17, 0XC);
    // 0x0020650C: ori         $v0, $v0, 0x1000
    ctx->r2 = ctx->r2 | 0X1000;
    // 0x00206510: sw          $v0, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->r2;
    // 0x00206514: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x00206518: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x0020651C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00206520: jr          $ra
    // 0x00206524: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00206524: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_002A2B08(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002A2B08: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x002A2B0C: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    // 0x002A2B10: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x002A2B14: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x002A2B18: lw          $v1, -0x3CFC($v0)
    ctx->r3 = MEM_W(ctx->r2, -0X3CFC);
    // 0x002A2B1C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x002A2B20: bne         $v1, $v0, L_002A2B90
    if (ctx->r3 != ctx->r2) {
        // 0x002A2B24: sw          $ra, 0x3C($sp)
        MEM_W(0X3C, ctx->r29) = ctx->r31;
            goto L_002A2B90;
    }
    // 0x002A2B24: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x002A2B28: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x002A2B2C: ori         $v0, $v0, 0x404
    ctx->r2 = ctx->r2 | 0X404;
    // 0x002A2B30: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x002A2B34: addiu       $a0, $a0, -0x7C90
    ctx->r4 = ADD32(ctx->r4, -0X7C90);
    // 0x002A2B38: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x002A2B3C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x002A2B40: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x002A2B44: lui         $s0, 0x8013
    ctx->r16 = S32(0X8013 << 16);
    // 0x002A2B48: addiu       $s0, $s0, -0x7AC0
    ctx->r16 = ADD32(ctx->r16, -0X7AC0);
    // 0x002A2B4C: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x002A2B50: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x002A2B54: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x002A2B58: sw          $zero, 0x28($sp)
    MEM_W(0X28, ctx->r29) = 0;
    // 0x002A2B5C: jal         0x0029B820
    // 0x002A2B60: sw          $s0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r16;
    osSendMesg_recomp(rdram, ctx);
        goto after_0;
    // 0x002A2B60: sw          $s0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r16;
    after_0:
    // 0x002A2B64: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x002A2B68: addiu       $a1, $sp, 0x30
    ctx->r5 = ADD32(ctx->r29, 0X30);
    // 0x002A2B6C: jal         0x0029B6F0
    // 0x002A2B70: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osRecvMesg_recomp(rdram, ctx);
        goto after_1;
    // 0x002A2B70: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_1:
    // 0x002A2B74: lw          $v1, 0x30($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X30);
    // 0x002A2B78: andi        $v0, $v1, 0x8000
    ctx->r2 = ctx->r3 & 0X8000;
    // 0x002A2B7C: beq         $v0, $zero, L_002A2BD4
    if (ctx->r2 == 0) {
        // 0x002A2B80: lui         $v0, 0xFFFF
        ctx->r2 = S32(0XFFFF << 16);
            goto L_002A2BD4;
    }
    // 0x002A2B80: lui         $v0, 0xFFFF
    ctx->r2 = S32(0XFFFF << 16);
    // 0x002A2B84: or          $v0, $v1, $v0
    ctx->r2 = ctx->r3 | ctx->r2;
    // 0x002A2B88: j           L_002A2BD4
    // 0x002A2B8C: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
        goto L_002A2BD4;
    // 0x002A2B8C: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
L_002A2B90:
    // 0x002A2B90: jal         0x002A12F0
    // 0x002A2B94: nop

    func_002A12F0(rdram, ctx);
        goto after_2;
    // 0x002A2B94: nop

    after_2:
    // 0x002A2B98: addiu       $a0, $zero, 0x404
    ctx->r4 = ADD32(0, 0X404);
    // 0x002A2B9C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x002A2BA0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x002A2BA4: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x002A2BA8: jal         0x002A259C
    // 0x002A2BAC: addu        $a3, $a2, $zero
    ctx->r7 = ADD32(ctx->r6, 0);
    func_002A259C(rdram, ctx);
        goto after_3;
    // 0x002A2BAC: addu        $a3, $a2, $zero
    ctx->r7 = ADD32(ctx->r6, 0);
    after_3:
    // 0x002A2BB0: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x002A2BB4: andi        $v0, $v1, 0x8000
    ctx->r2 = ctx->r3 & 0X8000;
    // 0x002A2BB8: beq         $v0, $zero, L_002A2BCC
    if (ctx->r2 == 0) {
        // 0x002A2BBC: sw          $v1, 0x30($sp)
        MEM_W(0X30, ctx->r29) = ctx->r3;
            goto L_002A2BCC;
    }
    // 0x002A2BBC: sw          $v1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r3;
    // 0x002A2BC0: lui         $v0, 0xFFFF
    ctx->r2 = S32(0XFFFF << 16);
    // 0x002A2BC4: or          $v0, $v1, $v0
    ctx->r2 = ctx->r3 | ctx->r2;
    // 0x002A2BC8: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
L_002A2BCC:
    // 0x002A2BCC: jal         0x002A1324
    // 0x002A2BD0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_002A1324(rdram, ctx);
        goto after_4;
    // 0x002A2BD0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
L_002A2BD4:
    // 0x002A2BD4: lw          $v0, 0x30($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X30);
    // 0x002A2BD8: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x002A2BDC: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x002A2BE0: jr          $ra
    // 0x002A2BE4: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x002A2BE4: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_00253FD0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00253FD0: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x00253FD4: lw          $v0, -0x6788($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X6788);
    // 0x00253FD8: jr          $ra
    // 0x00253FDC: nop

    return;
    // 0x00253FDC: nop

;}
RECOMP_FUNC void func_0045E9D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_00425A74:
    // 0x0045E9D8: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
L_00425A98:
    // 0x0045E9DC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x0045E9E0: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x0045E9E4: sw          $s6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r22;
    // 0x0045E9E8: sw          $s5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r21;
    // 0x0045E9EC: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x0045E9F0: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x0045E9F4: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x0045E9F8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x0045E9FC: jal         0x00285878
    // 0x0045EA00: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    func_00285878(rdram, ctx);
        goto after_0;
    // 0x0045EA00: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_0:
    // 0x0045EA04: jal         0x002847E0
    // 0x0045EA08: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    func_002847E0(rdram, ctx);
        goto after_1;
    // 0x0045EA08: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    after_1:
    // 0x0045EA0C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x0045EA10: addiu       $s6, $zero, 0x2
    ctx->r22 = ADD32(0, 0X2);
    // 0x0045EA14: addiu       $s5, $zero, 0x3
    ctx->r21 = ADD32(0, 0X3);
    // 0x0045EA18: addiu       $s4, $zero, 0x1
    ctx->r20 = ADD32(0, 0X1);
    // 0x0045EA1C: lui         $s1, 0x8013
    ctx->r17 = S32(0X8013 << 16);
    // 0x0045EA20: addiu       $s1, $s1, 0xC60
    ctx->r17 = ADD32(ctx->r17, 0XC60);
    // 0x0045EA24: addu        $s3, $s2, $zero
    ctx->r19 = ADD32(ctx->r18, 0);
    // 0x0045EA28: lui         $s0, 0x8013
    ctx->r16 = S32(0X8013 << 16);
    // 0x0045EA2C: addiu       $s0, $s0, 0xAA0
    ctx->r16 = ADD32(ctx->r16, 0XAA0);
    // 0x0045EA30: lui         $at, 0x800F
    ctx->r1 = S32(0X800F << 16);
    // 0x0045EA34: sb          $v0, 0x6750($at)
    MEM_B(0X6750, ctx->r1) = ctx->r2;
L_0045EA38:
    // 0x0045EA38: lui         $at, 0x800F
    ctx->r1 = S32(0X800F << 16);
    // 0x0045EA3C: addu        $at, $at, $s3
    ctx->r1 = ADD32(ctx->r1, ctx->r19);
    // 0x0045EA40: lbu         $v0, 0x677B($at)
    ctx->r2 = MEM_BU(ctx->r1, 0X677B);
    // 0x0045EA44: beq         $v0, $zero, L_0045EA54
    if (ctx->r2 == 0) {
        // 0x0045EA48: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_0045EA54;
    }
    // 0x0045EA48: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x0045EA4C: j           L_00425A74
    // 0x0045EA50: sb          $zero, 0x0($s0)
    MEM_B(0X0, ctx->r16) = 0;
    entry_00425A74(rdram, ctx);
    return;
    // 0x0045EA50: sb          $zero, 0x0($s0)
    MEM_B(0X0, ctx->r16) = 0;
L_0045EA54:
    // 0x0045EA54: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x0045EA58: addiu       $a0, $a0, 0x6798
    ctx->r4 = ADD32(ctx->r4, 0X6798);
    // 0x0045EA5C: addiu       $a1, $s0, 0x8
    ctx->r5 = ADD32(ctx->r16, 0X8);
    // 0x0045EA60: jal         0x00299198
    // 0x0045EA64: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    func_00299198(rdram, ctx);
        goto after_2;
    // 0x0045EA64: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    after_2:
    // 0x0045EA68: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x0045EA6C: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x0045EA70: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x0045EA74: beq         $v0, $zero, L_0045EA84
    if (ctx->r2 == 0) {
        // 0x0045EA78: nop
    
            goto L_0045EA84;
    }
    // 0x0045EA78: nop

    // 0x0045EA7C: j           L_00425A98
    // 0x0045EA80: sw          $s6, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r22;
    entry_00425A98(rdram, ctx);
    return;
    // 0x0045EA80: sw          $s6, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r22;
L_0045EA84:
    // 0x0045EA84: jal         0x00425808
    // 0x0045EA88: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    entry_00425808(rdram, ctx);
        goto after_3;
    // 0x0045EA88: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_3:
    // 0x0045EA8C: beql        $v0, $zero, L_0045EA98
    if (ctx->r2 == 0) {
        // 0x0045EA90: sw          $s4, 0x0($s1)
        MEM_W(0X0, ctx->r17) = ctx->r20;
            goto L_0045EA98;
    }
    goto skip_0;
    // 0x0045EA90: sw          $s4, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r20;
    skip_0:
    // 0x0045EA94: sw          $s5, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r21;
L_0045EA98:
    // 0x0045EA98: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    // 0x0045EA9C: addiu       $s3, $s3, 0x4
    ctx->r19 = ADD32(ctx->r19, 0X4);
    // 0x0045EAA0: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x0045EAA4: slti        $v0, $s2, 0x4
    ctx->r2 = SIGNED(ctx->r18) < 0X4 ? 1 : 0;
    // 0x0045EAA8: bne         $v0, $zero, L_0045EA38
    if (ctx->r2 != 0) {
        // 0x0045EAAC: addiu       $s0, $s0, 0x70
        ctx->r16 = ADD32(ctx->r16, 0X70);
            goto L_0045EA38;
    }
    // 0x0045EAAC: addiu       $s0, $s0, 0x70
    ctx->r16 = ADD32(ctx->r16, 0X70);
    // 0x0045EAB0: jal         0x002858A4
    // 0x0045EAB4: nop

    func_002858A4(rdram, ctx);
        goto after_4;
    // 0x0045EAB4: nop

    after_4:
    // 0x0045EAB8: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x0045EABC: lw          $s6, 0x28($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X28);
    // 0x0045EAC0: lw          $s5, 0x24($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X24);
    // 0x0045EAC4: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x0045EAC8: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x0045EACC: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x0045EAD0: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x0045EAD4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0045EAD8: jr          $ra
    // 0x0045EADC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x0045EADC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_00426FFC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_00426FFC:
    // 0x00426FFC: lbu         $a2, 0x0($a1)
    ctx->r6 = MEM_BU(ctx->r5, 0X0);
    // 0x00427000: slti        $v0, $a2, 0x41
    ctx->r2 = SIGNED(ctx->r6) < 0X41 ? 1 : 0;
    // 0x00427004: bne         $v0, $zero, L_00427018
    if (ctx->r2 != 0) {
        // 0x00427008: addiu       $a1, $a1, 0x1
        ctx->r5 = ADD32(ctx->r5, 0X1);
            goto L_00427018;
    }
    // 0x00427008: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x0042700C: slti        $v0, $a2, 0x5B
    ctx->r2 = SIGNED(ctx->r6) < 0X5B ? 1 : 0;
    // 0x00427010: bnel        $v0, $zero, L_00427018
    if (ctx->r2 != 0) {
        // 0x00427014: addiu       $a2, $a2, 0x20
        ctx->r6 = ADD32(ctx->r6, 0X20);
            goto L_00427018;
    }
    goto skip_0;
    // 0x00427014: addiu       $a2, $a2, 0x20
    ctx->r6 = ADD32(ctx->r6, 0X20);
    skip_0:
L_00427018:
    // 0x00427018: lbu         $v1, 0x0($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X0);
    // 0x0042701C: slti        $v0, $v1, 0x41
    ctx->r2 = SIGNED(ctx->r3) < 0X41 ? 1 : 0;
    // 0x00427020: bne         $v0, $zero, L_00427034
    if (ctx->r2 != 0) {
        // 0x00427024: addiu       $a0, $a0, 0x1
        ctx->r4 = ADD32(ctx->r4, 0X1);
            goto L_00427034;
    }
    // 0x00427024: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x00427028: slti        $v0, $v1, 0x5B
    ctx->r2 = SIGNED(ctx->r3) < 0X5B ? 1 : 0;
    // 0x0042702C: bnel        $v0, $zero, L_00427034
    if (ctx->r2 != 0) {
        // 0x00427030: addiu       $v1, $v1, 0x20
        ctx->r3 = ADD32(ctx->r3, 0X20);
            goto L_00427034;
    }
    goto skip_1;
    // 0x00427030: addiu       $v1, $v1, 0x20
    ctx->r3 = ADD32(ctx->r3, 0X20);
    skip_1:
L_00427034:
    // 0x00427034: beq         $a2, $zero, L_00427044
    if (ctx->r6 == 0) {
        // 0x00427038: nop
    
            goto L_00427044;
    }
    // 0x00427038: nop

    // 0x0042703C: beq         $a2, $v1, L_00426FFC
    if (ctx->r6 == ctx->r3) {
        // 0x00427040: nop
    
            goto L_00426FFC;
    }
    // 0x00427040: nop

L_00427044:
    // 0x00427044: jr          $ra
    // 0x00427048: subu        $v0, $v1, $a2
    ctx->r2 = SUB32(ctx->r3, ctx->r6);
    return;
    // 0x00427048: subu        $v0, $v1, $a2
    ctx->r2 = SUB32(ctx->r3, ctx->r6);
;}
RECOMP_FUNC void func_0024E720(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0024E720: lw          $v1, 0x12A4($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X12A4);
    // 0x0024E724: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0024E728: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x0024E72C: lw          $a1, -0x9E8($at)
    ctx->r5 = MEM_W(ctx->r1, -0X9E8);
    // 0x0024E730: beq         $v1, $zero, L_0024E764
    if (ctx->r3 == 0) {
        // 0x0024E734: addu        $a3, $zero, $zero
        ctx->r7 = ADD32(0, 0);
            goto L_0024E764;
    }
    // 0x0024E734: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x0024E738: lw          $v1, 0x24($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X24);
    // 0x0024E73C: beq         $v1, $zero, L_0024E768
    if (ctx->r3 == 0) {
        // 0x0024E740: addu        $a2, $a3, $zero
        ctx->r6 = ADD32(ctx->r7, 0);
            goto L_0024E768;
    }
    // 0x0024E740: addu        $a2, $a3, $zero
    ctx->r6 = ADD32(ctx->r7, 0);
    // 0x0024E744: lh          $v0, 0x0($v1)
    ctx->r2 = MEM_H(ctx->r3, 0X0);
    // 0x0024E748: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x0024E74C: addu        $v0, $a0, $v0
    ctx->r2 = ADD32(ctx->r4, ctx->r2);
    // 0x0024E750: lh          $v0, 0x934($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X934);
    // 0x0024E754: blez        $v0, L_0024E768
    if (SIGNED(ctx->r2) <= 0) {
        // 0x0024E758: addu        $v0, $v1, $zero
        ctx->r2 = ADD32(ctx->r3, 0);
            goto L_0024E768;
    }
    // 0x0024E758: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
    // 0x0024E75C: j           L_0024E7A4
    // 0x0024E760: nop

        goto L_0024E7A4;
    // 0x0024E760: nop

L_0024E764:
    // 0x0024E764: addu        $a2, $a3, $zero
    ctx->r6 = ADD32(ctx->r7, 0);
L_0024E768:
    // 0x0024E768: lw          $v1, 0x20($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X20);
    // 0x0024E76C: beq         $v1, $zero, L_0024E7A4
    if (ctx->r3 == 0) {
        // 0x0024E770: addu        $v0, $a3, $zero
        ctx->r2 = ADD32(ctx->r7, 0);
            goto L_0024E7A4;
    }
    // 0x0024E770: addu        $v0, $a3, $zero
    ctx->r2 = ADD32(ctx->r7, 0);
    // 0x0024E774: addu        $a3, $v1, $zero
    ctx->r7 = ADD32(ctx->r3, 0);
    // 0x0024E778: lh          $v0, 0x0($v1)
    ctx->r2 = MEM_H(ctx->r3, 0X0);
    // 0x0024E77C: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x0024E780: addu        $v0, $a0, $v0
    ctx->r2 = ADD32(ctx->r4, ctx->r2);
    // 0x0024E784: lh          $v0, 0x934($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X934);
    // 0x0024E788: bgtz        $v0, L_0024E7A4
    if (SIGNED(ctx->r2) > 0) {
        // 0x0024E78C: addu        $v0, $a3, $zero
        ctx->r2 = ADD32(ctx->r7, 0);
            goto L_0024E7A4;
    }
    // 0x0024E78C: addu        $v0, $a3, $zero
    ctx->r2 = ADD32(ctx->r7, 0);
    // 0x0024E790: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x0024E794: slti        $v0, $a2, 0x3
    ctx->r2 = SIGNED(ctx->r6) < 0X3 ? 1 : 0;
    // 0x0024E798: bne         $v0, $zero, L_0024E768
    if (ctx->r2 != 0) {
        // 0x0024E79C: addiu       $a1, $a1, 0x4
        ctx->r5 = ADD32(ctx->r5, 0X4);
            goto L_0024E768;
    }
    // 0x0024E79C: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
    // 0x0024E7A0: addu        $v0, $a3, $zero
    ctx->r2 = ADD32(ctx->r7, 0);
L_0024E7A4:
    // 0x0024E7A4: beq         $v0, $zero, L_0024E7B0
    if (ctx->r2 == 0) {
        // 0x0024E7A8: addiu       $v1, $zero, -0x1
        ctx->r3 = ADD32(0, -0X1);
            goto L_0024E7B0;
    }
    // 0x0024E7A8: addiu       $v1, $zero, -0x1
    ctx->r3 = ADD32(0, -0X1);
    // 0x0024E7AC: lh          $v1, 0x0($v0)
    ctx->r3 = MEM_H(ctx->r2, 0X0);
L_0024E7B0:
    // 0x0024E7B0: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x0024E7B4: beq         $v1, $v0, L_0024E7C8
    if (ctx->r3 == ctx->r2) {
        // 0x0024E7B8: nop
    
            goto L_0024E7C8;
    }
    // 0x0024E7B8: nop

    // 0x0024E7BC: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x0024E7C0: addu        $v0, $a0, $v0
    ctx->r2 = ADD32(ctx->r4, ctx->r2);
    // 0x0024E7C4: lh          $v0, 0x934($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X934);
L_0024E7C8:
    // 0x0024E7C8: jr          $ra
    // 0x0024E7CC: nop

    return;
    // 0x0024E7CC: nop

;}
RECOMP_FUNC void func_004531B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_0041A26C:
    // 0x004531B4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x004531B8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x004531BC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x004531C0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x004531C4: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x004531C8: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x004531CC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x004531D0: sh          $v0, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r2;
L_004531D4:
    // 0x004531D4: lui         $at, 0x800F
    ctx->r1 = S32(0X800F << 16);
    // 0x004531D8: addu        $at, $at, $a1
    ctx->r1 = ADD32(ctx->r1, ctx->r5);
    // 0x004531DC: lw          $v1, 0x5F8C($at)
    ctx->r3 = MEM_W(ctx->r1, 0X5F8C);
    // 0x004531E0: sll         $v0, $a0, 2
    ctx->r2 = S32(ctx->r4 << 2);
    // 0x004531E4: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x004531E8: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x004531EC: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x004531F0: sw          $v1, 0x910($at)
    MEM_W(0X910, ctx->r1) = ctx->r3;
    // 0x004531F4: slti        $v0, $a0, 0x4
    ctx->r2 = SIGNED(ctx->r4) < 0X4 ? 1 : 0;
    // 0x004531F8: bne         $v0, $zero, L_004531D4
    if (ctx->r2 != 0) {
        // 0x004531FC: addiu       $a1, $a1, 0x224
        ctx->r5 = ADD32(ctx->r5, 0X224);
            goto L_004531D4;
    }
    // 0x004531FC: addiu       $a1, $a1, 0x224
    ctx->r5 = ADD32(ctx->r5, 0X224);
    // 0x00453200: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x00453204: addiu       $a0, $a0, 0x5A50
    ctx->r4 = ADD32(ctx->r4, 0X5A50);
    // 0x00453208: jal         0x0026EDA8
    // 0x0045320C: nop

    func_0026EDA8(rdram, ctx);
        goto after_0;
    // 0x0045320C: nop

    after_0:
    // 0x00453210: jal         0x00285304
    // 0x00453214: nop

    func_00285304(rdram, ctx);
        goto after_1;
    // 0x00453214: nop

    after_1:
    // 0x00453218: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x0045321C: lbu         $v0, -0x550F($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X550F);
    // 0x00453220: beq         $v0, $zero, L_00453250
    if (ctx->r2 == 0) {
        // 0x00453224: lui         $a0, 0x80
        ctx->r4 = S32(0X80 << 16);
            goto L_00453250;
    }
    // 0x00453224: lui         $a0, 0x80
    ctx->r4 = S32(0X80 << 16);
    // 0x00453228: lw          $v1, 0xC($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XC);
    // 0x0045322C: lui         $a0, 0xFF7F
    ctx->r4 = S32(0XFF7F << 16);
    // 0x00453230: lw          $v0, 0x80($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X80);
    // 0x00453234: ori         $a0, $a0, 0xFFFF
    ctx->r4 = ctx->r4 | 0XFFFF;
    // 0x00453238: and         $v0, $v0, $a0
    ctx->r2 = ctx->r2 & ctx->r4;
    // 0x0045323C: sw          $v0, 0x80($v1)
    MEM_W(0X80, ctx->r3) = ctx->r2;
    // 0x00453240: lw          $v1, 0xC($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XC);
    // 0x00453244: lw          $v0, 0xA8($v1)
    ctx->r2 = MEM_W(ctx->r3, 0XA8);
    // 0x00453248: j           L_0041A26C
    // 0x0045324C: and         $v0, $v0, $a0
    ctx->r2 = ctx->r2 & ctx->r4;
    entry_0041A26C(rdram, ctx);
    return;
    // 0x0045324C: and         $v0, $v0, $a0
    ctx->r2 = ctx->r2 & ctx->r4;
L_00453250:
    // 0x00453250: lw          $v1, 0xC($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XC);
    // 0x00453254: lw          $v0, 0x80($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X80);
    // 0x00453258: or          $v0, $v0, $a0
    ctx->r2 = ctx->r2 | ctx->r4;
    // 0x0045325C: sw          $v0, 0x80($v1)
    MEM_W(0X80, ctx->r3) = ctx->r2;
    // 0x00453260: lw          $v1, 0xC($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XC);
    // 0x00453264: lw          $v0, 0xA8($v1)
    ctx->r2 = MEM_W(ctx->r3, 0XA8);
    // 0x00453268: or          $v0, $v0, $a0
    ctx->r2 = ctx->r2 | ctx->r4;
    // 0x0045326C: jal         0x00275F7C
    // 0x00453270: sw          $v0, 0xA8($v1)
    MEM_W(0XA8, ctx->r3) = ctx->r2;
    func_00275F7C(rdram, ctx);
        goto after_2;
    // 0x00453270: sw          $v0, 0xA8($v1)
    MEM_W(0XA8, ctx->r3) = ctx->r2;
    after_2:
    // 0x00453274: jal         0x00275DC0
    // 0x00453278: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    func_00275DC0(rdram, ctx);
        goto after_3;
    // 0x00453278: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    after_3:
    // 0x0045327C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x00453280: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00453284: jr          $ra
    // 0x00453288: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00453288: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00428080(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00428080: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x00428084: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x00428088: sb          $zero, 0x1420($at)
    MEM_B(0X1420, ctx->r1) = 0;
    // 0x0042808C: sb          $zero, 0x2($sp)
    MEM_B(0X2, ctx->r29) = 0;
    // 0x00428090: sb          $v0, 0x3($sp)
    MEM_B(0X3, ctx->r29) = ctx->r2;
    // 0x00428094: sb          $v0, 0x4($sp)
    MEM_B(0X4, ctx->r29) = ctx->r2;
    // 0x00428098: blez        $a0, L_004280B4
    if (SIGNED(ctx->r4) <= 0) {
        // 0x0042809C: sb          $v0, 0x5($sp)
        MEM_B(0X5, ctx->r29) = ctx->r2;
            goto L_004280B4;
    }
    // 0x0042809C: sb          $v0, 0x5($sp)
    MEM_B(0X5, ctx->r29) = ctx->r2;
L_004280A0:
    // 0x004280A0: sb          $zero, 0x0($v1)
    MEM_B(0X0, ctx->r3) = 0;
    // 0x004280A4: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x004280A8: slt         $v0, $a1, $a0
    ctx->r2 = SIGNED(ctx->r5) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x004280AC: bne         $v0, $zero, L_004280A0
    if (ctx->r2 != 0) {
        // 0x004280B0: addiu       $v1, $v1, 0x1
        ctx->r3 = ADD32(ctx->r3, 0X1);
            goto L_004280A0;
    }
    // 0x004280B0: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
L_004280B4:
    // 0x004280B4: addiu       $v0, $zero, 0xFE
    ctx->r2 = ADD32(0, 0XFE);
    // 0x004280B8: lwl         $a2, 0x0($sp)
    ctx->r6 = do_lwl(rdram, ctx->r6, ctx->r29, 0X0);
    // 0x004280BC: lwr         $a2, 0x3($sp)
    ctx->r6 = do_lwr(rdram, ctx->r6, ctx->r29, 0X3);
    // 0x004280C0: lb          $a3, 0x4($sp)
    ctx->r7 = MEM_B(ctx->r29, 0X4);
    // 0x004280C4: lb          $t0, 0x5($sp)
    ctx->r8 = MEM_B(ctx->r29, 0X5);
    // 0x004280C8: swl         $a2, 0x0($v1)
    do_swl(rdram, 0X0, ctx->r3, ctx->r6);
    // 0x004280CC: swr         $a2, 0x3($v1)
    do_swr(rdram, 0X3, ctx->r3, ctx->r6);
    // 0x004280D0: sb          $a3, 0x4($v1)
    MEM_B(0X4, ctx->r3) = ctx->r7;
    // 0x004280D4: sb          $t0, 0x5($v1)
    MEM_B(0X5, ctx->r3) = ctx->r8;
    // 0x004280D8: sb          $v0, 0x6($v1)
    MEM_B(0X6, ctx->r3) = ctx->r2;
    // 0x004280DC: jr          $ra
    // 0x004280E0: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x004280E0: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_0020EEF8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0020EEF8: lwc1        $f0, 0x0($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X0);
    // 0x0020EEFC: lwc1        $f1, 0x0($a2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r6, 0X0);
    // 0x0020EF00: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x0020EF04: swc1        $f0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f0.u32l;
    // 0x0020EF08: lwc1        $f0, 0x4($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X4);
    // 0x0020EF0C: lwc1        $f1, 0x4($a2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r6, 0X4);
    // 0x0020EF10: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x0020EF14: swc1        $f0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->f0.u32l;
    // 0x0020EF18: lwc1        $f0, 0x8($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X8);
    // 0x0020EF1C: lwc1        $f1, 0x8($a2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r6, 0X8);
    // 0x0020EF20: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x0020EF24: jr          $ra
    // 0x0020EF28: swc1        $f0, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->f0.u32l;
    return;
    // 0x0020EF28: swc1        $f0, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->f0.u32l;
;}
RECOMP_FUNC void func_00204D9C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00204D9C: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x00204DA0: lw          $v1, 0xC($a0)
    ctx->r3 = MEM_W(ctx->r4, 0XC);
    // 0x00204DA4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x00204DA8: ori         $v1, $v1, 0x100
    ctx->r3 = ctx->r3 | 0X100;
    // 0x00204DAC: sw          $v0, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r2;
    // 0x00204DB0: jr          $ra
    // 0x00204DB4: sw          $v1, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->r3;
    return;
    // 0x00204DB4: sw          $v1, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->r3;
;}
RECOMP_FUNC void func_002A2D64(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002A2D64: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x002A2D68: sw          $s6, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r22;
    // 0x002A2D6C: addu        $s6, $a0, $zero
    ctx->r22 = ADD32(ctx->r4, 0);
    // 0x002A2D70: sw          $s2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r18;
    // 0x002A2D74: addu        $s2, $a1, $zero
    ctx->r18 = ADD32(ctx->r5, 0);
    // 0x002A2D78: sw          $s1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r17;
    // 0x002A2D7C: addu        $s1, $a2, $zero
    ctx->r17 = ADD32(ctx->r6, 0);
    // 0x002A2D80: sw          $s3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r19;
    // 0x002A2D84: addu        $s3, $zero, $zero
    ctx->r19 = ADD32(0, 0);
    // 0x002A2D88: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x002A2D8C: lw          $v1, -0x3CFC($v0)
    ctx->r3 = MEM_W(ctx->r2, -0X3CFC);
    // 0x002A2D90: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x002A2D94: sw          $ra, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r31;
    // 0x002A2D98: sw          $fp, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r30;
    // 0x002A2D9C: sw          $s7, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r23;
    // 0x002A2DA0: sw          $s5, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r21;
    // 0x002A2DA4: sw          $s4, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r20;
    // 0x002A2DA8: bne         $v1, $v0, L_002A2E40
    if (ctx->r3 != ctx->r2) {
        // 0x002A2DAC: sw          $s0, 0x38($sp)
        MEM_W(0X38, ctx->r29) = ctx->r16;
            goto L_002A2E40;
    }
    // 0x002A2DAC: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    // 0x002A2DB0: beq         $s1, $zero, L_002A2EA8
    if (ctx->r17 == 0) {
        // 0x002A2DB4: addiu       $fp, $zero, 0x1
        ctx->r30 = ADD32(0, 0X1);
            goto L_002A2EA8;
    }
    // 0x002A2DB4: addiu       $fp, $zero, 0x1
    ctx->r30 = ADD32(0, 0X1);
    // 0x002A2DB8: lui         $s5, 0x8000
    ctx->r21 = S32(0X8000 << 16);
    // 0x002A2DBC: ori         $s5, $s5, 0x606
    ctx->r21 = ctx->r21 | 0X606;
    // 0x002A2DC0: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x002A2DC4: addiu       $s4, $v0, -0x7AC0
    ctx->r20 = ADD32(ctx->r2, -0X7AC0);
    // 0x002A2DC8: lui         $s7, 0x8013
    ctx->r23 = S32(0X8013 << 16);
L_002A2DCC:
    // 0x002A2DCC: ori         $t0, $zero, 0x8000
    ctx->r8 = 0 | 0X8000;
    // 0x002A2DD0: sltu        $v0, $t0, $s1
    ctx->r2 = ctx->r8 < ctx->r17 ? 1 : 0;
    // 0x002A2DD4: beq         $v0, $zero, L_002A2DE0
    if (ctx->r2 == 0) {
        // 0x002A2DD8: addu        $s0, $s1, $zero
        ctx->r16 = ADD32(ctx->r17, 0);
            goto L_002A2DE0;
    }
    // 0x002A2DD8: addu        $s0, $s1, $zero
    ctx->r16 = ADD32(ctx->r17, 0);
    // 0x002A2DDC: addu        $s0, $t0, $zero
    ctx->r16 = ADD32(ctx->r8, 0);
L_002A2DE0:
    // 0x002A2DE0: addiu       $a0, $s7, -0x7C90
    ctx->r4 = ADD32(ctx->r23, -0X7C90);
    // 0x002A2DE4: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x002A2DE8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x002A2DEC: sw          $s2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r18;
    // 0x002A2DF0: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x002A2DF4: sw          $fp, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r30;
    // 0x002A2DF8: sw          $s5, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r21;
    // 0x002A2DFC: sw          $s6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r22;
    // 0x002A2E00: sw          $s0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r16;
    // 0x002A2E04: sw          $zero, 0x28($sp)
    MEM_W(0X28, ctx->r29) = 0;
    // 0x002A2E08: jal         0x0029B820
    // 0x002A2E0C: sw          $s4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r20;
    osSendMesg_recomp(rdram, ctx);
        goto after_0;
    // 0x002A2E0C: sw          $s4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r20;
    after_0:
    // 0x002A2E10: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    // 0x002A2E14: addiu       $a1, $sp, 0x30
    ctx->r5 = ADD32(ctx->r29, 0X30);
    // 0x002A2E18: jal         0x0029B6F0
    // 0x002A2E1C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osRecvMesg_recomp(rdram, ctx);
        goto after_1;
    // 0x002A2E1C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_1:
    // 0x002A2E20: lw          $v0, 0x30($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X30);
    // 0x002A2E24: beq         $v0, $zero, L_002A2EA8
    if (ctx->r2 == 0) {
        // 0x002A2E28: addu        $s2, $s2, $v0
        ctx->r18 = ADD32(ctx->r18, ctx->r2);
            goto L_002A2EA8;
    }
    // 0x002A2E28: addu        $s2, $s2, $v0
    ctx->r18 = ADD32(ctx->r18, ctx->r2);
    // 0x002A2E2C: subu        $s1, $s1, $v0
    ctx->r17 = SUB32(ctx->r17, ctx->r2);
    // 0x002A2E30: bne         $s1, $zero, L_002A2DCC
    if (ctx->r17 != 0) {
        // 0x002A2E34: addu        $s3, $s3, $v0
        ctx->r19 = ADD32(ctx->r19, ctx->r2);
            goto L_002A2DCC;
    }
    // 0x002A2E34: addu        $s3, $s3, $v0
    ctx->r19 = ADD32(ctx->r19, ctx->r2);
    // 0x002A2E38: j           L_002A2EAC
    // 0x002A2E3C: addu        $v0, $s3, $zero
    ctx->r2 = ADD32(ctx->r19, 0);
        goto L_002A2EAC;
    // 0x002A2E3C: addu        $v0, $s3, $zero
    ctx->r2 = ADD32(ctx->r19, 0);
L_002A2E40:
    // 0x002A2E40: jal         0x002A12F0
    // 0x002A2E44: nop

    func_002A12F0(rdram, ctx);
        goto after_2;
    // 0x002A2E44: nop

    after_2:
    // 0x002A2E48: beq         $s1, $zero, L_002A2EA0
    if (ctx->r17 == 0) {
        // 0x002A2E4C: addu        $s4, $v0, $zero
        ctx->r20 = ADD32(ctx->r2, 0);
            goto L_002A2EA0;
    }
    // 0x002A2E4C: addu        $s4, $v0, $zero
    ctx->r20 = ADD32(ctx->r2, 0);
    // 0x002A2E50: ori         $s5, $zero, 0x8000
    ctx->r21 = 0 | 0X8000;
L_002A2E54:
    // 0x002A2E54: sltu        $v0, $s5, $s1
    ctx->r2 = ctx->r21 < ctx->r17 ? 1 : 0;
    // 0x002A2E58: beq         $v0, $zero, L_002A2E64
    if (ctx->r2 == 0) {
        // 0x002A2E5C: addu        $s0, $s1, $zero
        ctx->r16 = ADD32(ctx->r17, 0);
            goto L_002A2E64;
    }
    // 0x002A2E5C: addu        $s0, $s1, $zero
    ctx->r16 = ADD32(ctx->r17, 0);
    // 0x002A2E60: ori         $s0, $zero, 0x8000
    ctx->r16 = 0 | 0X8000;
L_002A2E64:
    // 0x002A2E64: lui         $a0, 0xB1FF
    ctx->r4 = S32(0XB1FF << 16);
    // 0x002A2E68: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x002A2E6C: jal         0x002A1A3C
    // 0x002A2E70: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    func_002A1A3C(rdram, ctx);
        goto after_3;
    // 0x002A2E70: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    after_3:
    // 0x002A2E74: addiu       $a0, $zero, 0x606
    ctx->r4 = ADD32(0, 0X606);
    // 0x002A2E78: addu        $a1, $s6, $zero
    ctx->r5 = ADD32(ctx->r22, 0);
    // 0x002A2E7C: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    // 0x002A2E80: jal         0x002A259C
    // 0x002A2E84: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_002A259C(rdram, ctx);
        goto after_4;
    // 0x002A2E84: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_4:
    // 0x002A2E88: beq         $v0, $zero, L_002A2EA0
    if (ctx->r2 == 0) {
        // 0x002A2E8C: sw          $v0, 0x30($sp)
        MEM_W(0X30, ctx->r29) = ctx->r2;
            goto L_002A2EA0;
    }
    // 0x002A2E8C: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    // 0x002A2E90: addu        $s2, $s2, $v0
    ctx->r18 = ADD32(ctx->r18, ctx->r2);
    // 0x002A2E94: subu        $s1, $s1, $v0
    ctx->r17 = SUB32(ctx->r17, ctx->r2);
    // 0x002A2E98: bne         $s1, $zero, L_002A2E54
    if (ctx->r17 != 0) {
        // 0x002A2E9C: addu        $s3, $s3, $v0
        ctx->r19 = ADD32(ctx->r19, ctx->r2);
            goto L_002A2E54;
    }
    // 0x002A2E9C: addu        $s3, $s3, $v0
    ctx->r19 = ADD32(ctx->r19, ctx->r2);
L_002A2EA0:
    // 0x002A2EA0: jal         0x002A1324
    // 0x002A2EA4: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    func_002A1324(rdram, ctx);
        goto after_5;
    // 0x002A2EA4: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    after_5:
L_002A2EA8:
    // 0x002A2EA8: addu        $v0, $s3, $zero
    ctx->r2 = ADD32(ctx->r19, 0);
L_002A2EAC:
    // 0x002A2EAC: lw          $ra, 0x5C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X5C);
    // 0x002A2EB0: lw          $fp, 0x58($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X58);
    // 0x002A2EB4: lw          $s7, 0x54($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X54);
    // 0x002A2EB8: lw          $s6, 0x50($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X50);
    // 0x002A2EBC: lw          $s5, 0x4C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X4C);
    // 0x002A2EC0: lw          $s4, 0x48($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X48);
    // 0x002A2EC4: lw          $s3, 0x44($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X44);
    // 0x002A2EC8: lw          $s2, 0x40($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X40);
    // 0x002A2ECC: lw          $s1, 0x3C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X3C);
    // 0x002A2ED0: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x002A2ED4: jr          $ra
    // 0x002A2ED8: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    return;
    // 0x002A2ED8: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
;}
RECOMP_FUNC void func_0023DCBC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0023DCBC: addiu       $sp, $sp, -0x78
    ctx->r29 = ADD32(ctx->r29, -0X78);
    // 0x0023DCC0: sdc1        $f30, 0x70($sp)
    CHECK_FR(ctx, 30);
    SD(ctx->f30.u64, 0X70, ctx->r29);
    // 0x0023DCC4: mtc1        $a1, $f30
    ctx->f30.u32l = ctx->r5;
    // 0x0023DCC8: mtc1        $a2, $f31
    ctx->f_odd[(31 - 1) * 2] = ctx->r6;
    // 0x0023DCCC: sdc1        $f25, 0x48($sp)
    CHECK_FR(ctx, 25);
    SD(ctx->f25.u64, 0X48, ctx->r29);
    // 0x0023DCD0: lwc1        $f25, 0x94($sp)
    ctx->f_odd[(25 - 1) * 2] = MEM_W(ctx->r29, 0X94);
    // 0x0023DCD4: sdc1        $f26, 0x50($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X50, ctx->r29);
    // 0x0023DCD8: lwc1        $f26, 0x98($sp)
    ctx->f26.u32l = MEM_W(ctx->r29, 0X98);
    // 0x0023DCDC: sdc1        $f24, 0x40($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X40, ctx->r29);
    // 0x0023DCE0: lwc1        $f24, 0x9C($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0X9C);
    // 0x0023DCE4: sdc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X20, ctx->r29);
    // 0x0023DCE8: lwc1        $f20, 0x88($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X88);
    // 0x0023DCEC: sdc1        $f21, 0x28($sp)
    CHECK_FR(ctx, 21);
    SD(ctx->f21.u64, 0X28, ctx->r29);
    // 0x0023DCF0: lwc1        $f21, 0x8C($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X8C);
    // 0x0023DCF4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0023DCF8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x0023DCFC: sdc1        $f22, 0x30($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X30, ctx->r29);
    // 0x0023DD00: lwc1        $f22, 0x90($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X90);
    // 0x0023DD04: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x0023DD08: sdc1        $f29, 0x68($sp)
    CHECK_FR(ctx, 29);
    SD(ctx->f29.u64, 0X68, ctx->r29);
    // 0x0023DD0C: sdc1        $f28, 0x60($sp)
    CHECK_FR(ctx, 28);
    SD(ctx->f28.u64, 0X60, ctx->r29);
    // 0x0023DD10: sdc1        $f27, 0x58($sp)
    CHECK_FR(ctx, 27);
    SD(ctx->f27.u64, 0X58, ctx->r29);
    // 0x0023DD14: sdc1        $f23, 0x38($sp)
    CHECK_FR(ctx, 23);
    SD(ctx->f23.u64, 0X38, ctx->r29);
    // 0x0023DD18: jal         0x00297BCC
    // 0x0023DD1C: sw          $a3, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r7;
    func_00297BCC(rdram, ctx);
        goto after_0;
    // 0x0023DD1C: sw          $a3, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r7;
    after_0:
    // 0x0023DD20: sub.s       $f29, $f20, $f30
    CHECK_FR(ctx, 29);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f29.fl = ctx->f20.fl - ctx->f30.fl;
    // 0x0023DD24: mul.s       $f12, $f29, $f29
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 29);
    CHECK_FR(ctx, 29);
    NAN_CHECK(ctx->f29.fl); NAN_CHECK(ctx->f29.fl); 
    ctx->f12.fl = MUL_S(ctx->f29.fl, ctx->f29.fl);
    // 0x0023DD28: sub.s       $f27, $f21, $f31
    CHECK_FR(ctx, 27);
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 31);
    NAN_CHECK(ctx->f21.fl); NAN_CHECK(ctx->f31.fl); 
    ctx->f27.fl = ctx->f21.fl - ctx->f31.fl;
    // 0x0023DD2C: mul.s       $f1, $f27, $f27
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 27);
    CHECK_FR(ctx, 27);
    NAN_CHECK(ctx->f27.fl); NAN_CHECK(ctx->f27.fl); 
    ctx->f1.fl = MUL_S(ctx->f27.fl, ctx->f27.fl);
    // 0x0023DD30: lwc1        $f9, 0x84($sp)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r29, 0X84);
    // 0x0023DD34: sub.s       $f28, $f22, $f9
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 9);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f9.fl); 
    ctx->f28.fl = ctx->f22.fl - ctx->f9.fl;
    // 0x0023DD38: mul.s       $f0, $f28, $f28
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f28.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f0.fl = MUL_S(ctx->f28.fl, ctx->f28.fl);
    // 0x0023DD3C: add.s       $f12, $f12, $f1
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f1.fl;
    // 0x0023DD40: jal         0x00298470
    // 0x0023DD44: add.s       $f12, $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f0.fl;
    func_00298470(rdram, ctx);
        goto after_1;
    // 0x0023DD44: add.s       $f12, $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f0.fl;
    after_1:
    // 0x0023DD48: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0023DD4C: lwc1        $f1, 0x66C4($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X66C4);
    // 0x0023DD50: div.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = DIV_S(ctx->f1.fl, ctx->f0.fl);
    // 0x0023DD54: mul.s       $f29, $f29, $f1
    CHECK_FR(ctx, 29);
    CHECK_FR(ctx, 29);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f29.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f29.fl = MUL_S(ctx->f29.fl, ctx->f1.fl);
    // 0x0023DD58: nop

    // 0x0023DD5C: mul.s       $f28, $f28, $f1
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f28.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f28.fl = MUL_S(ctx->f28.fl, ctx->f1.fl);
    // 0x0023DD60: nop

    // 0x0023DD64: mul.s       $f27, $f27, $f1
    CHECK_FR(ctx, 27);
    CHECK_FR(ctx, 27);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f27.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f27.fl = MUL_S(ctx->f27.fl, ctx->f1.fl);
    // 0x0023DD68: nop

    // 0x0023DD6C: mul.s       $f5, $f26, $f28
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f26.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f5.fl = MUL_S(ctx->f26.fl, ctx->f28.fl);
    // 0x0023DD70: nop

    // 0x0023DD74: mul.s       $f3, $f24, $f27
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 27);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f27.fl); 
    ctx->f3.fl = MUL_S(ctx->f24.fl, ctx->f27.fl);
    // 0x0023DD78: nop

    // 0x0023DD7C: mul.s       $f4, $f24, $f29
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 29);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f29.fl); 
    ctx->f4.fl = MUL_S(ctx->f24.fl, ctx->f29.fl);
    // 0x0023DD80: nop

    // 0x0023DD84: mul.s       $f1, $f25, $f28
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 25);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f25.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f1.fl = MUL_S(ctx->f25.fl, ctx->f28.fl);
    // 0x0023DD88: nop

    // 0x0023DD8C: mul.s       $f2, $f25, $f27
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 25);
    CHECK_FR(ctx, 27);
    NAN_CHECK(ctx->f25.fl); NAN_CHECK(ctx->f27.fl); 
    ctx->f2.fl = MUL_S(ctx->f25.fl, ctx->f27.fl);
    // 0x0023DD90: nop

    // 0x0023DD94: mul.s       $f0, $f26, $f29
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 29);
    NAN_CHECK(ctx->f26.fl); NAN_CHECK(ctx->f29.fl); 
    ctx->f0.fl = MUL_S(ctx->f26.fl, ctx->f29.fl);
    // 0x0023DD98: sub.s       $f21, $f5, $f3
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f5.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f21.fl = ctx->f5.fl - ctx->f3.fl;
    // 0x0023DD9C: sub.s       $f23, $f2, $f0
    CHECK_FR(ctx, 23);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f23.fl = ctx->f2.fl - ctx->f0.fl;
    // 0x0023DDA0: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x0023DDA4: c.eq.s      $f21, $f0
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f21.fl == ctx->f0.fl;
    // 0x0023DDA8: nop

    // 0x0023DDAC: bc1f        L_0023DDDC
    if (!c1cs) {
        // 0x0023DDB0: sub.s       $f22, $f4, $f1
        CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f22.fl = ctx->f4.fl - ctx->f1.fl;
            goto L_0023DDDC;
    }
    // 0x0023DDB0: sub.s       $f22, $f4, $f1
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f22.fl = ctx->f4.fl - ctx->f1.fl;
    // 0x0023DDB4: c.eq.s      $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f22.fl == ctx->f0.fl;
    // 0x0023DDB8: nop

    // 0x0023DDBC: bc1f        L_0023DDDC
    if (!c1cs) {
        // 0x0023DDC0: nop
    
            goto L_0023DDDC;
    }
    // 0x0023DDC0: nop

    // 0x0023DDC4: c.eq.s      $f23, $f0
    CHECK_FR(ctx, 23);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f23.fl == ctx->f0.fl;
    // 0x0023DDC8: nop

    // 0x0023DDCC: bc1f        L_0023DDDC
    if (!c1cs) {
        // 0x0023DDD0: nop
    
            goto L_0023DDDC;
    }
    // 0x0023DDD0: nop

    // 0x0023DDD4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0023DDD8: lwc1        $f21, 0x66C8($at)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r1, 0X66C8);
L_0023DDDC:
    // 0x0023DDDC: mul.s       $f12, $f21, $f21
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f21.fl); NAN_CHECK(ctx->f21.fl); 
    ctx->f12.fl = MUL_S(ctx->f21.fl, ctx->f21.fl);
    // 0x0023DDE0: nop

    // 0x0023DDE4: mul.s       $f0, $f22, $f22
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f0.fl = MUL_S(ctx->f22.fl, ctx->f22.fl);
    // 0x0023DDE8: nop

    // 0x0023DDEC: mul.s       $f1, $f23, $f23
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 23);
    CHECK_FR(ctx, 23);
    NAN_CHECK(ctx->f23.fl); NAN_CHECK(ctx->f23.fl); 
    ctx->f1.fl = MUL_S(ctx->f23.fl, ctx->f23.fl);
    // 0x0023DDF0: add.s       $f12, $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f0.fl;
    // 0x0023DDF4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0023DDF8: lwc1        $f20, 0x66CC($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X66CC);
    // 0x0023DDFC: jal         0x00298470
    // 0x0023DE00: add.s       $f12, $f12, $f1
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f1.fl;
    func_00298470(rdram, ctx);
        goto after_2;
    // 0x0023DE00: add.s       $f12, $f12, $f1
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f1.fl;
    after_2:
    // 0x0023DE04: div.s       $f1, $f20, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = DIV_S(ctx->f20.fl, ctx->f0.fl);
    // 0x0023DE08: mul.s       $f21, $f21, $f1
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f21.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f21.fl = MUL_S(ctx->f21.fl, ctx->f1.fl);
    // 0x0023DE0C: nop

    // 0x0023DE10: mul.s       $f23, $f23, $f1
    CHECK_FR(ctx, 23);
    CHECK_FR(ctx, 23);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f23.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f23.fl = MUL_S(ctx->f23.fl, ctx->f1.fl);
    // 0x0023DE14: nop

    // 0x0023DE18: mul.s       $f22, $f22, $f1
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f22.fl = MUL_S(ctx->f22.fl, ctx->f1.fl);
    // 0x0023DE1C: nop

    // 0x0023DE20: mul.s       $f3, $f27, $f23
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 27);
    CHECK_FR(ctx, 23);
    NAN_CHECK(ctx->f27.fl); NAN_CHECK(ctx->f23.fl); 
    ctx->f3.fl = MUL_S(ctx->f27.fl, ctx->f23.fl);
    // 0x0023DE24: nop

    // 0x0023DE28: mul.s       $f0, $f28, $f22
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f28.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f0.fl = MUL_S(ctx->f28.fl, ctx->f22.fl);
    // 0x0023DE2C: nop

    // 0x0023DE30: mul.s       $f4, $f28, $f21
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f28.fl); NAN_CHECK(ctx->f21.fl); 
    ctx->f4.fl = MUL_S(ctx->f28.fl, ctx->f21.fl);
    // 0x0023DE34: nop

    // 0x0023DE38: mul.s       $f1, $f29, $f23
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 29);
    CHECK_FR(ctx, 23);
    NAN_CHECK(ctx->f29.fl); NAN_CHECK(ctx->f23.fl); 
    ctx->f1.fl = MUL_S(ctx->f29.fl, ctx->f23.fl);
    // 0x0023DE3C: nop

    // 0x0023DE40: mul.s       $f5, $f29, $f22
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 29);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f29.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f5.fl = MUL_S(ctx->f29.fl, ctx->f22.fl);
    // 0x0023DE44: nop

    // 0x0023DE48: mul.s       $f2, $f27, $f21
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 27);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f27.fl); NAN_CHECK(ctx->f21.fl); 
    ctx->f2.fl = MUL_S(ctx->f27.fl, ctx->f21.fl);
    // 0x0023DE4C: sub.s       $f25, $f3, $f0
    CHECK_FR(ctx, 25);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f25.fl = ctx->f3.fl - ctx->f0.fl;
    // 0x0023DE50: mul.s       $f12, $f25, $f25
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 25);
    CHECK_FR(ctx, 25);
    NAN_CHECK(ctx->f25.fl); NAN_CHECK(ctx->f25.fl); 
    ctx->f12.fl = MUL_S(ctx->f25.fl, ctx->f25.fl);
    // 0x0023DE54: sub.s       $f26, $f4, $f1
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f26.fl = ctx->f4.fl - ctx->f1.fl;
    // 0x0023DE58: mul.s       $f1, $f26, $f26
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f26.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f1.fl = MUL_S(ctx->f26.fl, ctx->f26.fl);
    // 0x0023DE5C: sub.s       $f24, $f5, $f2
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f5.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f24.fl = ctx->f5.fl - ctx->f2.fl;
    // 0x0023DE60: mul.s       $f0, $f24, $f24
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f0.fl = MUL_S(ctx->f24.fl, ctx->f24.fl);
    // 0x0023DE64: add.s       $f12, $f12, $f1
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f1.fl;
    // 0x0023DE68: jal         0x00298470
    // 0x0023DE6C: add.s       $f12, $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f0.fl;
    func_00298470(rdram, ctx);
        goto after_3;
    // 0x0023DE6C: add.s       $f12, $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f0.fl;
    after_3:
    // 0x0023DE70: div.s       $f1, $f20, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = DIV_S(ctx->f20.fl, ctx->f0.fl);
    // 0x0023DE74: mul.s       $f25, $f25, $f1
    CHECK_FR(ctx, 25);
    CHECK_FR(ctx, 25);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f25.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f25.fl = MUL_S(ctx->f25.fl, ctx->f1.fl);
    // 0x0023DE78: nop

    // 0x0023DE7C: mul.s       $f26, $f26, $f1
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f26.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f26.fl = MUL_S(ctx->f26.fl, ctx->f1.fl);
    // 0x0023DE80: nop

    // 0x0023DE84: mul.s       $f24, $f24, $f1
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f24.fl = MUL_S(ctx->f24.fl, ctx->f1.fl);
    // 0x0023DE88: nop

    // 0x0023DE8C: mul.s       $f1, $f30, $f21
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f30.fl); NAN_CHECK(ctx->f21.fl); 
    ctx->f1.fl = MUL_S(ctx->f30.fl, ctx->f21.fl);
    // 0x0023DE90: nop

    // 0x0023DE94: mul.s       $f3, $f31, $f22
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 31);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f31.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f3.fl = MUL_S(ctx->f31.fl, ctx->f22.fl);
    // 0x0023DE98: nop

    // 0x0023DE9C: mul.s       $f0, $f30, $f29
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 29);
    NAN_CHECK(ctx->f30.fl); NAN_CHECK(ctx->f29.fl); 
    ctx->f0.fl = MUL_S(ctx->f30.fl, ctx->f29.fl);
    // 0x0023DEA0: nop

    // 0x0023DEA4: mul.s       $f7, $f31, $f27
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 31);
    CHECK_FR(ctx, 27);
    NAN_CHECK(ctx->f31.fl); NAN_CHECK(ctx->f27.fl); 
    ctx->f7.fl = MUL_S(ctx->f31.fl, ctx->f27.fl);
    // 0x0023DEA8: lwc1        $f9, 0x84($sp)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r29, 0X84);
    // 0x0023DEAC: mul.s       $f4, $f9, $f23
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 9);
    CHECK_FR(ctx, 23);
    NAN_CHECK(ctx->f9.fl); NAN_CHECK(ctx->f23.fl); 
    ctx->f4.fl = MUL_S(ctx->f9.fl, ctx->f23.fl);
    // 0x0023DEB0: nop

    // 0x0023DEB4: mul.s       $f8, $f9, $f28
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 9);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f9.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f8.fl = MUL_S(ctx->f9.fl, ctx->f28.fl);
    // 0x0023DEB8: nop

    // 0x0023DEBC: mul.s       $f2, $f30, $f25
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 25);
    NAN_CHECK(ctx->f30.fl); NAN_CHECK(ctx->f25.fl); 
    ctx->f2.fl = MUL_S(ctx->f30.fl, ctx->f25.fl);
    // 0x0023DEC0: nop

    // 0x0023DEC4: mul.s       $f5, $f31, $f26
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 31);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f31.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f5.fl = MUL_S(ctx->f31.fl, ctx->f26.fl);
    // 0x0023DEC8: nop

    // 0x0023DECC: mul.s       $f6, $f9, $f24
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 9);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f9.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f6.fl = MUL_S(ctx->f9.fl, ctx->f24.fl);
    // 0x0023DED0: swc1        $f21, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f_odd[(21 - 1) * 2];
    // 0x0023DED4: add.s       $f1, $f1, $f3
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f3.fl;
    // 0x0023DED8: swc1        $f22, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->f22.u32l;
    // 0x0023DEDC: swc1        $f23, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f_odd[(23 - 1) * 2];
    // 0x0023DEE0: add.s       $f0, $f0, $f7
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 7);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f7.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f7.fl;
    // 0x0023DEE4: swc1        $f29, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f_odd[(29 - 1) * 2];
    // 0x0023DEE8: swc1        $f27, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->f_odd[(27 - 1) * 2];
    // 0x0023DEEC: add.s       $f1, $f1, $f4
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f4.fl;
    // 0x0023DEF0: swc1        $f28, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->f28.u32l;
    // 0x0023DEF4: sw          $zero, 0xC($s0)
    MEM_W(0XC, ctx->r16) = 0;
    // 0x0023DEF8: add.s       $f0, $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f8.fl;
    // 0x0023DEFC: sw          $zero, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = 0;
    // 0x0023DF00: sw          $zero, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = 0;
    // 0x0023DF04: add.s       $f2, $f2, $f5
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 5);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f5.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f5.fl;
    // 0x0023DF08: swc1        $f20, 0x3C($s0)
    MEM_W(0X3C, ctx->r16) = ctx->f20.u32l;
    // 0x0023DF0C: swc1        $f25, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f_odd[(25 - 1) * 2];
    // 0x0023DF10: add.s       $f2, $f2, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f6.fl;
    // 0x0023DF14: swc1        $f26, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->f26.u32l;
    // 0x0023DF18: swc1        $f24, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f24.u32l;
    // 0x0023DF1C: neg.s       $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = -ctx->f1.fl;
    // 0x0023DF20: swc1        $f1, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->f_odd[(1 - 1) * 2];
    // 0x0023DF24: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x0023DF28: swc1        $f0, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->f0.u32l;
    // 0x0023DF2C: neg.s       $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = -ctx->f2.fl;
    // 0x0023DF30: swc1        $f2, 0x34($s0)
    MEM_W(0X34, ctx->r16) = ctx->f2.u32l;
    // 0x0023DF34: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x0023DF38: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0023DF3C: ldc1        $f30, 0x70($sp)
    CHECK_FR(ctx, 30);
    ctx->f30.u64 = LD(ctx->r29, 0X70);
    // 0x0023DF40: ldc1        $f29, 0x68($sp)
    CHECK_FR(ctx, 29);
    ctx->f29.u64 = LD(ctx->r29, 0X68);
    // 0x0023DF44: ldc1        $f28, 0x60($sp)
    CHECK_FR(ctx, 28);
    ctx->f28.u64 = LD(ctx->r29, 0X60);
    // 0x0023DF48: ldc1        $f27, 0x58($sp)
    CHECK_FR(ctx, 27);
    ctx->f27.u64 = LD(ctx->r29, 0X58);
    // 0x0023DF4C: ldc1        $f26, 0x50($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X50);
    // 0x0023DF50: ldc1        $f25, 0x48($sp)
    CHECK_FR(ctx, 25);
    ctx->f25.u64 = LD(ctx->r29, 0X48);
    // 0x0023DF54: ldc1        $f24, 0x40($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X40);
    // 0x0023DF58: ldc1        $f23, 0x38($sp)
    CHECK_FR(ctx, 23);
    ctx->f23.u64 = LD(ctx->r29, 0X38);
    // 0x0023DF5C: ldc1        $f22, 0x30($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X30);
    // 0x0023DF60: ldc1        $f21, 0x28($sp)
    CHECK_FR(ctx, 21);
    ctx->f21.u64 = LD(ctx->r29, 0X28);
    // 0x0023DF64: ldc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X20);
    // 0x0023DF68: jr          $ra
    // 0x0023DF6C: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
    return;
    // 0x0023DF6C: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
;}
RECOMP_FUNC void func_00421D20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00421D20: lh          $a1, 0x0($a1)
    ctx->r5 = MEM_H(ctx->r5, 0X0);
    // 0x00421D24: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x00421D28: lw          $v0, 0x994($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X994);
    // 0x00421D2C: beq         $v0, $zero, L_00421D64
    if (ctx->r2 == 0) {
        // 0x00421D30: addiu       $v1, $a1, -0x3
        ctx->r3 = ADD32(ctx->r5, -0X3);
            goto L_00421D64;
    }
    // 0x00421D30: addiu       $v1, $a1, -0x3
    ctx->r3 = ADD32(ctx->r5, -0X3);
    // 0x00421D34: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x00421D38: lw          $v0, 0x9B4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X9B4);
    // 0x00421D3C: beq         $v0, $zero, L_00421D54
    if (ctx->r2 == 0) {
        // 0x00421D40: nop
    
            goto L_00421D54;
    }
    // 0x00421D40: nop

    // 0x00421D44: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00421D48: addiu       $v0, $v0, 0x4870
    ctx->r2 = ADD32(ctx->r2, 0X4870);
    // 0x00421D4C: j           L_00421DF4
    // 0x00421D50: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_00421DF4;
    // 0x00421D50: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_00421D54:
    // 0x00421D54: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00421D58: addiu       $v0, $v0, 0x4888
    ctx->r2 = ADD32(ctx->r2, 0X4888);
    // 0x00421D5C: j           L_00421DF4
    // 0x00421D60: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_00421DF4;
    // 0x00421D60: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_00421D64:
    // 0x00421D64: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x00421D68: lw          $v0, 0x984($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X984);
    // 0x00421D6C: beq         $v0, $zero, L_00421DD8
    if (ctx->r2 == 0) {
        // 0x00421D70: sltiu       $v0, $v1, 0x10
        ctx->r2 = ctx->r3 < 0X10 ? 1 : 0;
            goto L_00421DD8;
    }
    // 0x00421D70: sltiu       $v0, $v1, 0x10
    ctx->r2 = ctx->r3 < 0X10 ? 1 : 0;
    // 0x00421D74: beql        $v0, $zero, L_00421D90
    if (ctx->r2 == 0) {
        // 0x00421D78: addiu       $v0, $zero, 0x15
        ctx->r2 = ADD32(0, 0X15);
            goto L_00421D90;
    }
    goto skip_0;
    // 0x00421D78: addiu       $v0, $zero, 0x15
    ctx->r2 = ADD32(0, 0X15);
    skip_0:
    // 0x00421D7C: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00421D80: addiu       $v0, $v0, 0x48A8
    ctx->r2 = ADD32(ctx->r2, 0X48A8);
    // 0x00421D84: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    // 0x00421D88: jr          $ra
    // 0x00421D8C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x00421D8C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_00421D90:
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
L_00421DD8:
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
RECOMP_FUNC void func_004438FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_0040A9C4:
    // 0x004438FC: addiu       $sp, $sp, -0xF8
    ctx->r29 = ADD32(ctx->r29, -0XF8);
L_0040AA64:
    // 0x00443900: sw          $s7, 0xE4($sp)
    MEM_W(0XE4, ctx->r29) = ctx->r23;
L_0040AB40:
    // 0x00443904: addu        $s7, $a0, $zero
    ctx->r23 = ADD32(ctx->r4, 0);
L_0040AB48:
    // 0x00443908: sw          $fp, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->r30;
    // 0x0044390C: addu        $fp, $a1, $zero
    ctx->r30 = ADD32(ctx->r5, 0);
    // 0x00443910: sw          $s1, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->r17;
    // 0x00443914: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x00443918: sw          $s3, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->r19;
    // 0x0044391C: addu        $s3, $s1, $zero
    ctx->r19 = ADD32(ctx->r17, 0);
    // 0x00443920: sw          $s4, 0xD8($sp)
    MEM_W(0XD8, ctx->r29) = ctx->r20;
    // 0x00443924: addu        $s4, $s1, $zero
    ctx->r20 = ADD32(ctx->r17, 0);
    // 0x00443928: sw          $s5, 0xDC($sp)
    MEM_W(0XDC, ctx->r29) = ctx->r21;
    // 0x0044392C: addu        $s5, $s1, $zero
    ctx->r21 = ADD32(ctx->r17, 0);
    // 0x00443930: sw          $s6, 0xE0($sp)
    MEM_W(0XE0, ctx->r29) = ctx->r22;
    // 0x00443934: addu        $s6, $s1, $zero
    ctx->r22 = ADD32(ctx->r17, 0);
    // 0x00443938: sw          $s0, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->r16;
    // 0x0044393C: addu        $s0, $s1, $zero
    ctx->r16 = ADD32(ctx->r17, 0);
    // 0x00443940: addiu       $a1, $s7, 0x140
    ctx->r5 = ADD32(ctx->r23, 0X140);
    // 0x00443944: addiu       $a2, $sp, 0x38
    ctx->r6 = ADD32(ctx->r29, 0X38);
    // 0x00443948: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x0044394C: sw          $ra, 0xEC($sp)
    MEM_W(0XEC, ctx->r29) = ctx->r31;
    // 0x00443950: sw          $s2, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = ctx->r18;
    // 0x00443954: sdc1        $f20, 0xF0($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0XF0, ctx->r29);
    // 0x00443958: sw          $zero, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = 0;
    // 0x0044395C: jal         0x00246108
    // 0x00443960: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_00246108(rdram, ctx);
        goto after_0;
    // 0x00443960: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_0:
    // 0x00443964: lui         $s2, 0x8013
    ctx->r18 = S32(0X8013 << 16);
    // 0x00443968: addiu       $s2, $s2, -0x490
    ctx->r18 = ADD32(ctx->r18, -0X490);
    // 0x0044396C: lw          $a0, 0x80($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X80);
    // 0x00443970: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00443974: lwc1        $f20, 0x864($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X864);
    // 0x00443978: beq         $a0, $zero, L_00443998
    if (ctx->r4 == 0) {
        // 0x0044397C: lui         $v1, 0x30
        ctx->r3 = S32(0X30 << 16);
            goto L_00443998;
    }
    // 0x0044397C: lui         $v1, 0x30
    ctx->r3 = S32(0X30 << 16);
    // 0x00443980: lw          $v0, 0xD4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XD4);
    // 0x00443984: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x00443988: beq         $v0, $zero, L_00443998
    if (ctx->r2 == 0) {
        // 0x0044398C: nop
    
            goto L_00443998;
    }
    // 0x0044398C: nop

    // 0x00443990: lwc1        $f20, 0xBC($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0XBC);
    // 0x00443994: sw          $a0, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->r4;
L_00443998:
    // 0x00443998: lw          $v0, 0x674($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X674);
    // 0x0044399C: beq         $v0, $zero, L_004439BC
    if (ctx->r2 == 0) {
        // 0x004439A0: mov.s       $f2, $f20
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    ctx->f2.fl = ctx->f20.fl;
            goto L_004439BC;
    }
    // 0x004439A0: mov.s       $f2, $f20
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    ctx->f2.fl = ctx->f20.fl;
    // 0x004439A4: lwc1        $f1, 0x678($s2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r18, 0X678);
    // 0x004439A8: cvt.s.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.fl = CVT_S_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x004439AC: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x004439B0: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x004439B4: j           L_0040A9C4
    // 0x004439B8: div.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = DIV_S(ctx->f1.fl, ctx->f0.fl);
    entry_0040A9C4(rdram, ctx);
    return;
    // 0x004439B8: div.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = DIV_S(ctx->f1.fl, ctx->f0.fl);
L_004439BC:
    // 0x004439BC: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x004439C0: lwc1        $f1, 0x868($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X868);
    // 0x004439C4: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x004439C8: lwc1        $f0, 0x86C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X86C);
    // 0x004439CC: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x004439D0: nop

    // 0x004439D4: bc1tl       L_004439DC
    if (c1cs) {
        // 0x004439D8: addiu       $s5, $zero, 0x1
        ctx->r21 = ADD32(0, 0X1);
            goto L_004439DC;
    }
    goto skip_0;
    // 0x004439D8: addiu       $s5, $zero, 0x1
    ctx->r21 = ADD32(0, 0X1);
    skip_0:
L_004439DC:
    // 0x004439DC: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x004439E0: lwc1        $f0, 0x870($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X870);
    // 0x004439E4: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x004439E8: nop

    // 0x004439EC: bc1tl       L_004439F4
    if (c1cs) {
        // 0x004439F0: addiu       $s6, $zero, 0x1
        ctx->r22 = ADD32(0, 0X1);
            goto L_004439F4;
    }
    goto skip_1;
    // 0x004439F0: addiu       $s6, $zero, 0x1
    ctx->r22 = ADD32(0, 0X1);
    skip_1:
L_004439F4:
    // 0x004439F4: lw          $v0, 0xC0($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XC0);
    // 0x004439F8: beq         $v0, $zero, L_00443B80
    if (ctx->r2 == 0) {
        // 0x004439FC: addiu       $v0, $zero, 0x17
        ctx->r2 = ADD32(0, 0X17);
            goto L_00443B80;
    }
    // 0x004439FC: addiu       $v0, $zero, 0x17
    ctx->r2 = ADD32(0, 0X17);
    // 0x00443A00: lw          $v1, 0x66C($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X66C);
    // 0x00443A04: bne         $v1, $v0, L_00443A40
    if (ctx->r3 != ctx->r2) {
        // 0x00443A08: nop
    
            goto L_00443A40;
    }
    // 0x00443A08: nop

    // 0x00443A0C: lw          $v0, 0x67C($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X67C);
    // 0x00443A10: slti        $v0, $v0, 0x65
    ctx->r2 = SIGNED(ctx->r2) < 0X65 ? 1 : 0;
    // 0x00443A14: bnel        $v0, $zero, L_00443A64
    if (ctx->r2 != 0) {
        // 0x00443A18: addiu       $s1, $zero, 0x1
        ctx->r17 = ADD32(0, 0X1);
            goto L_00443A64;
    }
    goto skip_2;
    // 0x00443A18: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
    skip_2:
    // 0x00443A1C: sll         $v1, $s0, 2
    ctx->r3 = S32(ctx->r16 << 2);
    // 0x00443A20: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x00443A24: addiu       $v0, $sp, 0x18
    ctx->r2 = ADD32(ctx->r29, 0X18);
    // 0x00443A28: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x00443A2C: addiu       $v1, $zero, 0x18
    ctx->r3 = ADD32(0, 0X18);
    // 0x00443A30: sh          $v1, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r3;
    // 0x00443A34: addiu       $v1, $zero, 0x5
    ctx->r3 = ADD32(0, 0X5);
    // 0x00443A38: j           L_0040AA64
    // 0x00443A3C: sh          $v1, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r3;
    entry_0040AA64(rdram, ctx);
    return;
    // 0x00443A3C: sh          $v1, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r3;
L_00443A40:
    // 0x00443A40: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00443A44: lwc1        $f0, 0x874($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X874);
    // 0x00443A48: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x00443A4C: nop

    // 0x00443A50: bc1fl       L_00443A60
    if (!c1cs) {
        // 0x00443A54: addiu       $s4, $zero, 0x1
        ctx->r20 = ADD32(0, 0X1);
            goto L_00443A60;
    }
    goto skip_3;
    // 0x00443A54: addiu       $s4, $zero, 0x1
    ctx->r20 = ADD32(0, 0X1);
    skip_3:
    // 0x00443A58: j           L_0040AA64
    // 0x00443A5C: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
    entry_0040AA64(rdram, ctx);
    return;
    // 0x00443A5C: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
L_00443A60:
    // 0x00443A60: addu        $s3, $s4, $zero
    ctx->r19 = ADD32(ctx->r20, 0);
L_00443A64:
    // 0x00443A64: beq         $s1, $zero, L_00443AA4
    if (ctx->r17 == 0) {
        // 0x00443A68: sll         $a0, $s0, 2
        ctx->r4 = S32(ctx->r16 << 2);
            goto L_00443AA4;
    }
    // 0x00443A68: sll         $a0, $s0, 2
    ctx->r4 = S32(ctx->r16 << 2);
    // 0x00443A6C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x00443A70: sll         $a2, $s0, 2
    ctx->r6 = S32(ctx->r16 << 2);
    // 0x00443A74: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x00443A78: addiu       $v1, $sp, 0x18
    ctx->r3 = ADD32(ctx->r29, 0X18);
    // 0x00443A7C: addu        $a0, $v1, $a0
    ctx->r4 = ADD32(ctx->r3, ctx->r4);
    // 0x00443A80: addiu       $v0, $zero, 0x1A
    ctx->r2 = ADD32(0, 0X1A);
    // 0x00443A84: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x00443A88: addu        $v1, $v1, $a2
    ctx->r3 = ADD32(ctx->r3, ctx->r6);
    // 0x00443A8C: sh          $v0, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r2;
    // 0x00443A90: addiu       $v0, $zero, 0x1B
    ctx->r2 = ADD32(0, 0X1B);
    // 0x00443A94: sh          $a1, 0x2($a0)
    MEM_H(0X2, ctx->r4) = ctx->r5;
    // 0x00443A98: sh          $v0, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r2;
    // 0x00443A9C: j           L_0040AB48
    // 0x00443AA0: sh          $a1, 0x2($v1)
    MEM_H(0X2, ctx->r3) = ctx->r5;
    entry_0040AB48(rdram, ctx);
    return;
    // 0x00443AA0: sh          $a1, 0x2($v1)
    MEM_H(0X2, ctx->r3) = ctx->r5;
L_00443AA4:
    // 0x00443AA4: beq         $s3, $zero, L_00443B10
    if (ctx->r19 == 0) {
        // 0x00443AA8: nop
    
            goto L_00443B10;
    }
    // 0x00443AA8: nop

    // 0x00443AAC: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x00443AB0: lw          $a0, -0x14C($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X14C);
    // 0x00443AB4: beq         $a0, $zero, L_00443AC8
    if (ctx->r4 == 0) {
        // 0x00443AB8: addu        $v1, $zero, $zero
        ctx->r3 = ADD32(0, 0);
            goto L_00443AC8;
    }
    // 0x00443AB8: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
L_00443ABC:
    // 0x00443ABC: lw          $a0, 0x28C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X28C);
    // 0x00443AC0: bne         $a0, $zero, L_00443ABC
    if (ctx->r4 != 0) {
        // 0x00443AC4: addiu       $v1, $v1, 0x1
        ctx->r3 = ADD32(ctx->r3, 0X1);
            goto L_00443ABC;
    }
    // 0x00443AC4: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
L_00443AC8:
    // 0x00443AC8: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x00443ACC: beq         $v0, $zero, L_00443AF0
    if (ctx->r2 == 0) {
        // 0x00443AD0: sll         $v1, $s0, 2
        ctx->r3 = S32(ctx->r16 << 2);
            goto L_00443AF0;
    }
    // 0x00443AD0: sll         $v1, $s0, 2
    ctx->r3 = S32(ctx->r16 << 2);
    // 0x00443AD4: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x00443AD8: addiu       $v0, $sp, 0x18
    ctx->r2 = ADD32(ctx->r29, 0X18);
    // 0x00443ADC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x00443AE0: addiu       $v1, $zero, 0x19
    ctx->r3 = ADD32(0, 0X19);
    // 0x00443AE4: sh          $v1, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r3;
    // 0x00443AE8: addiu       $v1, $zero, 0x4
    ctx->r3 = ADD32(0, 0X4);
    // 0x00443AEC: sh          $v1, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r3;
L_00443AF0:
    // 0x00443AF0: sll         $v1, $s0, 2
    ctx->r3 = S32(ctx->r16 << 2);
    // 0x00443AF4: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x00443AF8: addiu       $v0, $sp, 0x18
    ctx->r2 = ADD32(ctx->r29, 0X18);
    // 0x00443AFC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x00443B00: addiu       $v1, $zero, 0x1D
    ctx->r3 = ADD32(0, 0X1D);
    // 0x00443B04: sh          $v1, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r3;
    // 0x00443B08: addiu       $v1, $zero, 0x6
    ctx->r3 = ADD32(0, 0X6);
    // 0x00443B0C: sh          $v1, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r3;
L_00443B10:
    // 0x00443B10: beq         $s4, $zero, L_00443B48
    if (ctx->r20 == 0) {
        // 0x00443B14: sll         $v0, $s0, 2
        ctx->r2 = S32(ctx->r16 << 2);
            goto L_00443B48;
    }
    // 0x00443B14: sll         $v0, $s0, 2
    ctx->r2 = S32(ctx->r16 << 2);
    // 0x00443B18: addiu       $v1, $sp, 0x18
    ctx->r3 = ADD32(ctx->r29, 0X18);
    // 0x00443B1C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x00443B20: addiu       $v0, $zero, 0x17
    ctx->r2 = ADD32(0, 0X17);
    // 0x00443B24: beq         $s5, $zero, L_00443B34
    if (ctx->r21 == 0) {
        // 0x00443B28: sh          $v0, 0x0($v1)
        MEM_H(0X0, ctx->r3) = ctx->r2;
            goto L_00443B34;
    }
    // 0x00443B28: sh          $v0, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r2;
    // 0x00443B2C: j           L_0040AB40
    // 0x00443B30: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    entry_0040AB40(rdram, ctx);
    return;
    // 0x00443B30: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
L_00443B34:
    // 0x00443B34: bne         $s6, $zero, L_00443B40
    if (ctx->r22 != 0) {
        // 0x00443B38: addiu       $v0, $zero, 0x9
        ctx->r2 = ADD32(0, 0X9);
            goto L_00443B40;
    }
    // 0x00443B38: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
    // 0x00443B3C: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
L_00443B40:
    // 0x00443B40: sh          $v0, 0x2($v1)
    MEM_H(0X2, ctx->r3) = ctx->r2;
    // 0x00443B44: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_00443B48:
    // 0x00443B48: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    // 0x00443B4C: sll         $v0, $s0, 2
    ctx->r2 = S32(ctx->r16 << 2);
    // 0x00443B50: addu        $v1, $a0, $v0
    ctx->r3 = ADD32(ctx->r4, ctx->r2);
    // 0x00443B54: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x00443B58: jal         0x0026D518
    // 0x00443B5C: sh          $v0, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r2;
    func_0026D518(rdram, ctx);
        goto after_1;
    // 0x00443B5C: sh          $v0, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r2;
    after_1:
    // 0x00443B60: addu        $a0, $s7, $zero
    ctx->r4 = ADD32(ctx->r23, 0);
    // 0x00443B64: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x00443B68: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x00443B6C: sw          $v0, 0x66C($s2)
    MEM_W(0X66C, ctx->r18) = ctx->r2;
    // 0x00443B70: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    // 0x00443B74: addu        $a1, $fp, $zero
    ctx->r5 = ADD32(ctx->r30, 0);
    // 0x00443B78: jal         0x00243414
    // 0x00443B7C: sw          $zero, 0x67C($s2)
    MEM_W(0X67C, ctx->r18) = 0;
    func_00243414(rdram, ctx);
        goto after_2;
    // 0x00443B7C: sw          $zero, 0x67C($s2)
    MEM_W(0X67C, ctx->r18) = 0;
    after_2:
L_00443B80:
    // 0x00443B80: lw          $ra, 0xEC($sp)
    ctx->r31 = MEM_W(ctx->r29, 0XEC);
    // 0x00443B84: lw          $fp, 0xE8($sp)
    ctx->r30 = MEM_W(ctx->r29, 0XE8);
    // 0x00443B88: lw          $s7, 0xE4($sp)
    ctx->r23 = MEM_W(ctx->r29, 0XE4);
    // 0x00443B8C: lw          $s6, 0xE0($sp)
    ctx->r22 = MEM_W(ctx->r29, 0XE0);
    // 0x00443B90: lw          $s5, 0xDC($sp)
    ctx->r21 = MEM_W(ctx->r29, 0XDC);
    // 0x00443B94: lw          $s4, 0xD8($sp)
    ctx->r20 = MEM_W(ctx->r29, 0XD8);
    // 0x00443B98: lw          $s3, 0xD4($sp)
    ctx->r19 = MEM_W(ctx->r29, 0XD4);
    // 0x00443B9C: lw          $s2, 0xD0($sp)
    ctx->r18 = MEM_W(ctx->r29, 0XD0);
    // 0x00443BA0: lw          $s1, 0xCC($sp)
    ctx->r17 = MEM_W(ctx->r29, 0XCC);
    // 0x00443BA4: lw          $s0, 0xC8($sp)
    ctx->r16 = MEM_W(ctx->r29, 0XC8);
    // 0x00443BA8: ldc1        $f20, 0xF0($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0XF0);
    // 0x00443BAC: jr          $ra
    // 0x00443BB0: addiu       $sp, $sp, 0xF8
    ctx->r29 = ADD32(ctx->r29, 0XF8);
    return;
    // 0x00443BB0: addiu       $sp, $sp, 0xF8
    ctx->r29 = ADD32(ctx->r29, 0XF8);
;}
RECOMP_FUNC void func_0023F000(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0023F000: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x0023F004: addiu       $v1, $v1, -0x27C8
    ctx->r3 = ADD32(ctx->r3, -0X27C8);
    // 0x0023F008: addiu       $a1, $zero, 0xE
    ctx->r5 = ADD32(0, 0XE);
    // 0x0023F00C: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
L_0023F010:
    // 0x0023F010: lh          $v0, 0x4($v1)
    ctx->r2 = MEM_H(ctx->r3, 0X4);
    // 0x0023F014: bne         $v0, $a0, L_0023F024
    if (ctx->r2 != ctx->r4) {
        // 0x0023F018: addiu       $a1, $a1, -0x1
        ctx->r5 = ADD32(ctx->r5, -0X1);
            goto L_0023F024;
    }
    // 0x0023F018: addiu       $a1, $a1, -0x1
    ctx->r5 = ADD32(ctx->r5, -0X1);
    // 0x0023F01C: jr          $ra
    // 0x0023F020: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
    return;
    // 0x0023F020: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
L_0023F024:
    // 0x0023F024: bne         $a1, $a2, L_0023F010
    if (ctx->r5 != ctx->r6) {
        // 0x0023F028: addiu       $v1, $v1, 0x10
        ctx->r3 = ADD32(ctx->r3, 0X10);
            goto L_0023F010;
    }
    // 0x0023F028: addiu       $v1, $v1, 0x10
    ctx->r3 = ADD32(ctx->r3, 0X10);
    // 0x0023F02C: jr          $ra
    // 0x0023F030: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x0023F030: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void func_00229334(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00229334: .word       0x036000DB                   # divu        $zero, $k1, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    lo = S32(U32(ctx->r27) / U32(0)); hi = S32(U32(ctx->r27) % U32(0));
    // 0x00229338: dsrl32      $ra, $ra, 31
    ctx->r31 = ctx->r31 >> (31 + 32);
    // 0x0022933C: sd          $sp, -0x1($ra)
    SD(ctx->r29, -0X1, ctx->r31);
    // 0x00229340: addiu       $sp, $sp, -0x210
    ctx->r29 = ADD32(ctx->r29, -0X210);
    // 0x00229344: sw          $s1, 0x1FC($sp)
    MEM_W(0X1FC, ctx->r29) = ctx->r17;
    // 0x00229348: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x0022934C: sw          $s2, 0x200($sp)
    MEM_W(0X200, ctx->r29) = ctx->r18;
    // 0x00229350: addu        $s2, $a1, $zero
    ctx->r18 = ADD32(ctx->r5, 0);
    // 0x00229354: sw          $ra, 0x20C($sp)
    MEM_W(0X20C, ctx->r29) = ctx->r31;
    // 0x00229358: sw          $s4, 0x208($sp)
    MEM_W(0X208, ctx->r29) = ctx->r20;
    // 0x0022935C: sw          $s3, 0x204($sp)
    MEM_W(0X204, ctx->r29) = ctx->r19;
    // 0x00229360: sw          $s0, 0x1F8($sp)
    MEM_W(0X1F8, ctx->r29) = ctx->r16;
    // 0x00229364: lw          $v0, 0xF8($s1)
    ctx->r2 = MEM_W(ctx->r17, 0XF8);
    // 0x00229368: addu        $s3, $a2, $zero
    ctx->r19 = ADD32(ctx->r6, 0);
    // 0x0022936C: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x00229370: andi        $v0, $v0, 0x10
    ctx->r2 = ctx->r2 & 0X10;
    // 0x00229374: beq         $v0, $zero, L_002293A4
    if (ctx->r2 == 0) {
        // 0x00229378: addu        $s4, $a3, $zero
        ctx->r20 = ADD32(ctx->r7, 0);
            goto L_002293A4;
    }
    // 0x00229378: addu        $s4, $a3, $zero
    ctx->r20 = ADD32(ctx->r7, 0);
    // 0x0022937C: lui         $t3, 0x800F
    ctx->r11 = S32(0X800F << 16);
    // 0x00229380: addiu       $t3, $t3, 0x1DB8
    ctx->r11 = ADD32(ctx->r11, 0X1DB8);
    // 0x00229384: lw          $t0, 0x0($t3)
    ctx->r8 = MEM_W(ctx->r11, 0X0);
    // 0x00229388: lw          $t1, 0x4($t3)
    ctx->r9 = MEM_W(ctx->r11, 0X4);
    // 0x0022938C: lw          $t2, 0x8($t3)
    ctx->r10 = MEM_W(ctx->r11, 0X8);
    // 0x00229390: sw          $t0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r8;
    // 0x00229394: sw          $t1, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r9;
    // 0x00229398: sw          $t2, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r10;
    // 0x0022939C: j           L_002293C0
    // 0x002293A0: addiu       $a0, $sp, 0x50
    ctx->r4 = ADD32(ctx->r29, 0X50);
        goto L_002293C0;
    // 0x002293A0: addiu       $a0, $sp, 0x50
    ctx->r4 = ADD32(ctx->r29, 0X50);
L_002293A4:
    // 0x002293A4: lw          $t0, 0x18($s1)
    ctx->r8 = MEM_W(ctx->r17, 0X18);
    // 0x002293A8: lw          $t1, 0x1C($s1)
    ctx->r9 = MEM_W(ctx->r17, 0X1C);
    // 0x002293AC: lw          $t2, 0x20($s1)
    ctx->r10 = MEM_W(ctx->r17, 0X20);
    // 0x002293B0: sw          $t0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r8;
    // 0x002293B4: sw          $t1, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r9;
    // 0x002293B8: sw          $t2, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r10;
    // 0x002293BC: addiu       $a0, $sp, 0x50
    ctx->r4 = ADD32(ctx->r29, 0X50);
L_002293C0:
    // 0x002293C0: jal         0x0020E810
    // 0x002293C4: addiu       $a1, $sp, 0x60
    ctx->r5 = ADD32(ctx->r29, 0X60);
    func_0020E810(rdram, ctx);
        goto after_0;
    // 0x002293C4: addiu       $a1, $sp, 0x60
    ctx->r5 = ADD32(ctx->r29, 0X60);
    after_0:
    // 0x002293C8: lw          $v0, 0xF8($s1)
    ctx->r2 = MEM_W(ctx->r17, 0XF8);
    // 0x002293CC: lw          $v0, 0x14($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X14);
    // 0x002293D0: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x002293D4: bne         $v0, $zero, L_002293E0
    if (ctx->r2 != 0) {
        // 0x002293D8: nop
    
            goto L_002293E0;
    }
    // 0x002293D8: nop

    // 0x002293DC: lwc1        $f0, 0x15C($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X15C);
L_002293E0:
    // 0x002293E0: mtc1        $zero, $f1
    ctx->f_odd[(1 - 1) * 2] = 0;
    // 0x002293E4: c.eq.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl == ctx->f1.fl;
    // 0x002293E8: nop

    // 0x002293EC: bc1f        L_00229438
    if (!c1cs) {
        // 0x002293F0: nop
    
            goto L_00229438;
    }
    // 0x002293F0: nop

    // 0x002293F4: bne         $v0, $zero, L_00229400
    if (ctx->r2 != 0) {
        // 0x002293F8: nop
    
            goto L_00229400;
    }
    // 0x002293F8: nop

    // 0x002293FC: lwc1        $f1, 0x160($s1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r17, 0X160);
L_00229400:
    // 0x00229400: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x00229404: c.eq.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl == ctx->f0.fl;
    // 0x00229408: nop

    // 0x0022940C: bc1f        L_00229438
    if (!c1cs) {
        // 0x00229410: nop
    
            goto L_00229438;
    }
    // 0x00229410: nop

    // 0x00229414: lw          $t0, 0x4($s1)
    ctx->r8 = MEM_W(ctx->r17, 0X4);
    // 0x00229418: lw          $t1, 0x8($s1)
    ctx->r9 = MEM_W(ctx->r17, 0X8);
    // 0x0022941C: lw          $t2, 0xC($s1)
    ctx->r10 = MEM_W(ctx->r17, 0XC);
    // 0x00229420: sw          $t0, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r8;
    // 0x00229424: sw          $t1, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r9;
    // 0x00229428: sw          $t2, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->r10;
    // 0x0022942C: lw          $v0, 0x10($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X10);
    // 0x00229430: j           L_00229560
    // 0x00229434: sw          $v0, 0x1F0($sp)
    MEM_W(0X1F0, ctx->r29) = ctx->r2;
        goto L_00229560;
    // 0x00229434: sw          $v0, 0x1F0($sp)
    MEM_W(0X1F0, ctx->r29) = ctx->r2;
L_00229438:
    // 0x00229438: lw          $v0, 0xF8($s1)
    ctx->r2 = MEM_W(ctx->r17, 0XF8);
    // 0x0022943C: lw          $v0, 0x14($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X14);
    // 0x00229440: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x00229444: bnel        $v0, $zero, L_00229454
    if (ctx->r2 != 0) {
        // 0x00229448: neg.s       $f0, $f0
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
            goto L_00229454;
    }
    goto skip_0;
    // 0x00229448: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    skip_0:
    // 0x0022944C: lwc1        $f0, 0x15C($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X15C);
    // 0x00229450: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
L_00229454:
    // 0x00229454: swc1        $f0, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f0.u32l;
    // 0x00229458: lw          $v0, 0xF8($s1)
    ctx->r2 = MEM_W(ctx->r17, 0XF8);
    // 0x0022945C: lw          $v0, 0x14($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X14);
    // 0x00229460: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x00229464: bne         $v0, $zero, L_00229470
    if (ctx->r2 != 0) {
        // 0x00229468: addiu       $s0, $sp, 0xC0
        ctx->r16 = ADD32(ctx->r29, 0XC0);
            goto L_00229470;
    }
    // 0x00229468: addiu       $s0, $sp, 0xC0
    ctx->r16 = ADD32(ctx->r29, 0XC0);
    // 0x0022946C: lwc1        $f0, 0x160($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X160);
L_00229470:
    // 0x00229470: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x00229474: swc1        $f0, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f0.u32l;
    // 0x00229478: sw          $zero, 0x78($sp)
    MEM_W(0X78, ctx->r29) = 0;
    // 0x0022947C: lw          $a1, 0x164($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X164);
    // 0x00229480: jal         0x00210630
    // 0x00229484: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00210630(rdram, ctx);
        goto after_1;
    // 0x00229484: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x00229488: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0022948C: addiu       $a1, $sp, 0x70
    ctx->r5 = ADD32(ctx->r29, 0X70);
    // 0x00229490: addiu       $s0, $sp, 0x80
    ctx->r16 = ADD32(ctx->r29, 0X80);
    // 0x00229494: jal         0x0020F85C
    // 0x00229498: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    func_0020F85C(rdram, ctx);
        goto after_2;
    // 0x00229498: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    after_2:
    // 0x0022949C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x002294A0: jal         0x0022CF40
    // 0x002294A4: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_0022CF40(rdram, ctx);
        goto after_3;
    // 0x002294A4: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_3:
    // 0x002294A8: beq         $v0, $zero, L_002294C4
    if (ctx->r2 == 0) {
        // 0x002294AC: addu        $a0, $v0, $zero
        ctx->r4 = ADD32(ctx->r2, 0);
            goto L_002294C4;
    }
    // 0x002294AC: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x002294B0: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x002294B4: jal         0x0020F85C
    // 0x002294B8: addiu       $a2, $sp, 0x90
    ctx->r6 = ADD32(ctx->r29, 0X90);
    func_0020F85C(rdram, ctx);
        goto after_4;
    // 0x002294B8: addiu       $a2, $sp, 0x90
    ctx->r6 = ADD32(ctx->r29, 0X90);
    after_4:
    // 0x002294BC: j           L_002294E0
    // 0x002294C0: addiu       $a0, $sp, 0xB0
    ctx->r4 = ADD32(ctx->r29, 0XB0);
        goto L_002294E0;
    // 0x002294C0: addiu       $a0, $sp, 0xB0
    ctx->r4 = ADD32(ctx->r29, 0XB0);
L_002294C4:
    // 0x002294C4: lw          $t0, 0x80($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X80);
    // 0x002294C8: lw          $t1, 0x84($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X84);
    // 0x002294CC: lw          $t2, 0x88($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X88);
    // 0x002294D0: sw          $t0, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r8;
    // 0x002294D4: sw          $t1, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r9;
    // 0x002294D8: sw          $t2, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->r10;
    // 0x002294DC: addiu       $a0, $sp, 0xB0
    ctx->r4 = ADD32(ctx->r29, 0XB0);
L_002294E0:
    // 0x002294E0: addiu       $a1, $sp, 0x90
    ctx->r5 = ADD32(ctx->r29, 0X90);
    // 0x002294E4: jal         0x0020EEF8
    // 0x002294E8: addiu       $a2, $s1, 0x4
    ctx->r6 = ADD32(ctx->r17, 0X4);
    func_0020EEF8(rdram, ctx);
        goto after_5;
    // 0x002294E8: addiu       $a2, $s1, 0x4
    ctx->r6 = ADD32(ctx->r17, 0X4);
    after_5:
    // 0x002294EC: lw          $v1, 0x10($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X10);
    // 0x002294F0: addiu       $v0, $sp, 0x100
    ctx->r2 = ADD32(ctx->r29, 0X100);
    // 0x002294F4: lui         $at, 0x800F
    ctx->r1 = S32(0X800F << 16);
    // 0x002294F8: sw          $v0, 0x1ADC($at)
    MEM_W(0X1ADC, ctx->r1) = ctx->r2;
    // 0x002294FC: beq         $v1, $zero, L_00229534
    if (ctx->r3 == 0) {
        // 0x00229500: addiu       $v0, $sp, 0xA0
        ctx->r2 = ADD32(ctx->r29, 0XA0);
            goto L_00229534;
    }
    // 0x00229500: addiu       $v0, $sp, 0xA0
    ctx->r2 = ADD32(ctx->r29, 0XA0);
    // 0x00229504: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x00229508: addiu       $v0, $sp, 0x1F0
    ctx->r2 = ADD32(ctx->r29, 0X1F0);
    // 0x0022950C: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x00229510: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x00229514: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x00229518: lw          $a1, 0xB0($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XB0);
    // 0x0022951C: lw          $a2, 0xB4($sp)
    ctx->r6 = MEM_W(ctx->r29, 0XB4);
    // 0x00229520: lw          $a3, 0xB8($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XB8);
    // 0x00229524: jal         0x002688C8
    // 0x00229528: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_002688C8(rdram, ctx);
        goto after_6;
    // 0x00229528: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_6:
    // 0x0022952C: j           L_00229550
    // 0x00229530: nop

        goto L_00229550;
    // 0x00229530: nop

L_00229534:
    // 0x00229534: lw          $t0, 0xB0($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XB0);
    // 0x00229538: lw          $t1, 0xB4($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XB4);
    // 0x0022953C: lw          $t2, 0xB8($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XB8);
    // 0x00229540: sw          $t0, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r8;
    // 0x00229544: sw          $t1, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r9;
    // 0x00229548: sw          $t2, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->r10;
    // 0x0022954C: sw          $zero, 0x1F0($sp)
    MEM_W(0X1F0, ctx->r29) = 0;
L_00229550:
    // 0x00229550: lui         $v0, 0x800F
    ctx->r2 = S32(0X800F << 16);
    // 0x00229554: addiu       $v0, $v0, 0x1CE0
    ctx->r2 = ADD32(ctx->r2, 0X1CE0);
    // 0x00229558: lui         $at, 0x800F
    ctx->r1 = S32(0X800F << 16);
    // 0x0022955C: sw          $v0, 0x1ADC($at)
    MEM_W(0X1ADC, ctx->r1) = ctx->r2;
L_00229560:
    // 0x00229560: lw          $v0, 0x114($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X114);
    // 0x00229564: lui         $v1, 0x20
    ctx->r3 = S32(0X20 << 16);
    // 0x00229568: sw          $s2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r18;
    // 0x0022956C: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x00229570: lw          $t0, 0x60($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X60);
    // 0x00229574: lw          $t1, 0x64($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X64);
    // 0x00229578: lw          $t2, 0x68($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X68);
    // 0x0022957C: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x00229580: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    // 0x00229584: sw          $t2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r10;
    // 0x00229588: lw          $t0, 0x50($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X50);
    // 0x0022958C: lw          $t1, 0x54($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X54);
    // 0x00229590: lw          $t2, 0x58($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X58);
    // 0x00229594: lw          $t3, 0x5C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X5C);
    // 0x00229598: sw          $t0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r8;
    // 0x0022959C: sw          $t1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r9;
    // 0x002295A0: sw          $t2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r10;
    // 0x002295A4: sw          $t3, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r11;
    // 0x002295A8: lw          $t0, 0xA0($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XA0);
    // 0x002295AC: lw          $t1, 0xA4($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XA4);
    // 0x002295B0: lw          $t2, 0xA8($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XA8);
    // 0x002295B4: sw          $t0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r8;
    // 0x002295B8: sw          $t1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r9;
    // 0x002295BC: sw          $t2, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r10;
    // 0x002295C0: lw          $v0, 0x1F0($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1F0);
    // 0x002295C4: ori         $v1, $v1, 0x6
    ctx->r3 = ctx->r3 | 0X6;
    // 0x002295C8: sw          $s3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r19;
    // 0x002295CC: sw          $v0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r2;
    // 0x002295D0: lw          $v0, 0x40($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X40);
    // 0x002295D4: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x002295D8: addiu       $a0, $a0, -0x76D8
    ctx->r4 = ADD32(ctx->r4, -0X76D8);
    // 0x002295DC: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x002295E0: or          $v0, $s4, $v0
    ctx->r2 = ctx->r20 | ctx->r2;
    // 0x002295E4: sw          $v0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r2;
    // 0x002295E8: lw          $a2, 0x10C($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X10C);
    // 0x002295EC: lw          $a3, 0x110($s1)
    ctx->r7 = MEM_W(ctx->r17, 0X110);
    // 0x002295F0: jal         0x0022F350
    // 0x002295F4: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_0022F350(rdram, ctx);
        goto after_7;
    // 0x002295F4: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_7:
    // 0x002295F8: lw          $ra, 0x20C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20C);
    // 0x002295FC: lw          $s4, 0x208($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X208);
    // 0x00229600: lw          $s3, 0x204($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X204);
    // 0x00229604: lw          $s2, 0x200($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X200);
    // 0x00229608: lw          $s1, 0x1FC($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1FC);
    // 0x0022960C: lw          $s0, 0x1F8($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1F8);
    // 0x00229610: jr          $ra
    // 0x00229614: addiu       $sp, $sp, 0x210
    ctx->r29 = ADD32(ctx->r29, 0X210);
    return;
    // 0x00229614: addiu       $sp, $sp, 0x210
    ctx->r29 = ADD32(ctx->r29, 0X210);
;}
RECOMP_FUNC void func_0025DBD8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0025DBD8: addiu       $sp, $sp, -0xB0
    ctx->r29 = ADD32(ctx->r29, -0XB0);
    // 0x0025DBDC: sw          $s1, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r17;
    // 0x0025DBE0: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x0025DBE4: sw          $s0, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r16;
    // 0x0025DBE8: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x0025DBEC: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    // 0x0025DBF0: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x0025DBF4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0025DBF8: sw          $ra, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->r31;
    // 0x0025DBFC: jal         0x00246108
    // 0x0025DC00: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    func_00246108(rdram, ctx);
        goto after_0;
    // 0x0025DC00: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    after_0:
    // 0x0025DC04: lbu         $v0, 0x36($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X36);
    // 0x0025DC08: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0025DC0C: lwc1        $f0, 0x76A0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X76A0);
    // 0x0025DC10: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x0025DC14: sltiu       $v0, $v0, 0x2
    ctx->r2 = ctx->r2 < 0X2 ? 1 : 0;
    // 0x0025DC18: beq         $v0, $zero, L_0025DC28
    if (ctx->r2 == 0) {
        // 0x0025DC1C: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_0025DC28;
    }
    // 0x0025DC1C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0025DC20: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0025DC24: lwc1        $f0, 0x76A4($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X76A4);
L_0025DC28:
    // 0x0025DC28: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x0025DC2C: lw          $a3, 0x20($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X20);
    // 0x0025DC30: jal         0x00245BAC
    // 0x0025DC34: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_00245BAC(rdram, ctx);
        goto after_1;
    // 0x0025DC34: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_1:
    // 0x0025DC38: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x0025DC3C: lui         $v1, 0x400
    ctx->r3 = S32(0X400 << 16);
    // 0x0025DC40: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x0025DC44: beq         $v0, $zero, L_0025DCE4
    if (ctx->r2 == 0) {
        // 0x0025DC48: nop
    
            goto L_0025DCE4;
    }
    // 0x0025DC48: nop

    // 0x0025DC4C: lw          $v0, 0x14($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X14);
    // 0x0025DC50: lb          $v1, 0x130($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X130);
    // 0x0025DC54: beq         $v1, $zero, L_0025DC6C
    if (ctx->r3 == 0) {
        // 0x0025DC58: addiu       $a0, $v0, 0x14
        ctx->r4 = ADD32(ctx->r2, 0X14);
            goto L_0025DC6C;
    }
    // 0x0025DC58: addiu       $a0, $v0, 0x14
    ctx->r4 = ADD32(ctx->r2, 0X14);
    // 0x0025DC5C: lhu         $v0, 0x74($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X74);
    // 0x0025DC60: andi        $v0, $v0, 0x1F
    ctx->r2 = ctx->r2 & 0X1F;
    // 0x0025DC64: bne         $v0, $zero, L_0025DCA8
    if (ctx->r2 != 0) {
        // 0x0025DC68: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_0025DCA8;
    }
    // 0x0025DC68: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_0025DC6C:
    // 0x0025DC6C: lb          $v0, 0x131($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X131);
    // 0x0025DC70: beq         $v0, $zero, L_0025DC88
    if (ctx->r2 == 0) {
        // 0x0025DC74: nop
    
            goto L_0025DC88;
    }
    // 0x0025DC74: nop

    // 0x0025DC78: lhu         $v0, 0x74($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X74);
    // 0x0025DC7C: andi        $v0, $v0, 0x3E0
    ctx->r2 = ctx->r2 & 0X3E0;
    // 0x0025DC80: bne         $v0, $zero, L_0025DCA8
    if (ctx->r2 != 0) {
        // 0x0025DC84: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_0025DCA8;
    }
    // 0x0025DC84: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_0025DC88:
    // 0x0025DC88: lb          $v0, 0x132($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X132);
    // 0x0025DC8C: beq         $v0, $zero, L_0025DCA8
    if (ctx->r2 == 0) {
        // 0x0025DC90: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_0025DCA8;
    }
    // 0x0025DC90: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x0025DC94: lhu         $v0, 0x74($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X74);
    // 0x0025DC98: andi        $v0, $v0, 0x7C00
    ctx->r2 = ctx->r2 & 0X7C00;
    // 0x0025DC9C: bne         $v0, $zero, L_0025DCA8
    if (ctx->r2 != 0) {
        // 0x0025DCA0: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_0025DCA8;
    }
    // 0x0025DCA0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0025DCA4: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_0025DCA8:
    // 0x0025DCA8: beq         $v0, $zero, L_0025DCE4
    if (ctx->r2 == 0) {
        // 0x0025DCAC: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_0025DCE4;
    }
    // 0x0025DCAC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0025DCB0: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x0025DCB4: jal         0x00243414
    // 0x0025DCB8: addiu       $a2, $zero, 0x13
    ctx->r6 = ADD32(0, 0X13);
    func_00243414(rdram, ctx);
        goto after_2;
    // 0x0025DCB8: addiu       $a2, $zero, 0x13
    ctx->r6 = ADD32(0, 0X13);
    after_2:
    // 0x0025DCBC: lui         $v1, 0x400
    ctx->r3 = S32(0X400 << 16);
    // 0x0025DCC0: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x0025DCC4: lbu         $a0, 0x34($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X34);
    // 0x0025DCC8: lw          $a1, 0x30($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X30);
    // 0x0025DCCC: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x0025DCD0: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x0025DCD4: sb          $a0, 0x35($s0)
    MEM_B(0X35, ctx->r16) = ctx->r4;
    // 0x0025DCD8: lwc1        $f0, 0x14($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X14);
    // 0x0025DCDC: j           L_0025DD68
    // 0x0025DCE0: swc1        $f0, 0xC0($s0)
    MEM_W(0XC0, ctx->r16) = ctx->f0.u32l;
        goto L_0025DD68;
    // 0x0025DCE0: swc1        $f0, 0xC0($s0)
    MEM_W(0XC0, ctx->r16) = ctx->f0.u32l;
L_0025DCE4:
    // 0x0025DCE4: lhu         $v0, 0xC4($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0XC4);
    // 0x0025DCE8: addiu       $v0, $v0, -0x1194
    ctx->r2 = ADD32(ctx->r2, -0X1194);
    // 0x0025DCEC: sltiu       $v0, $v0, 0x37
    ctx->r2 = ctx->r2 < 0X37 ? 1 : 0;
    // 0x0025DCF0: beq         $v0, $zero, L_0025DD54
    if (ctx->r2 == 0) {
        // 0x0025DCF4: nop
    
            goto L_0025DD54;
    }
    // 0x0025DCF4: nop

    // 0x0025DCF8: lbu         $v0, 0xC8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XC8);
    // 0x0025DCFC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0025DD00: lwc1        $f0, 0x76A8($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X76A8);
    // 0x0025DD04: mtc1        $v0, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r2;
    // 0x0025DD08: cvt.s.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.fl = CVT_S_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x0025DD0C: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x0025DD10: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0025DD14: lwc1        $f0, 0x76AC($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X76AC);
    // 0x0025DD18: mul.s       $f0, $f1, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x0025DD1C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0025DD20: lwc1        $f1, 0x76B0($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X76B0);
    // 0x0025DD24: add.s       $f1, $f0, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x0025DD28: lb          $v0, 0xC7($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XC7);
    // 0x0025DD2C: trunc.w.s   $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    ctx->f2.u32l = TRUNC_W_S(ctx->f1.fl);
    // 0x0025DD30: mfc1        $v1, $f2
    ctx->r3 = (int32_t)ctx->f2.u32l;
    // 0x0025DD34: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x0025DD38: bne         $v0, $zero, L_0025DD68
    if (ctx->r2 != 0) {
        // 0x0025DD3C: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_0025DD68;
    }
    // 0x0025DD3C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0025DD40: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x0025DD44: jal         0x00243414
    // 0x0025DD48: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    func_00243414(rdram, ctx);
        goto after_3;
    // 0x0025DD48: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    after_3:
    // 0x0025DD4C: j           L_0025DD68
    // 0x0025DD50: nop

        goto L_0025DD68;
    // 0x0025DD50: nop

L_0025DD54:
    // 0x0025DD54: lb          $v0, 0xC7($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XC7);
    // 0x0025DD58: beq         $v0, $zero, L_0025DD68
    if (ctx->r2 == 0) {
        // 0x0025DD5C: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_0025DD68;
    }
    // 0x0025DD5C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0025DD60: jal         0x0025D474
    // 0x0025DD64: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_0025D474(rdram, ctx);
        goto after_4;
    // 0x0025DD64: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_4:
L_0025DD68:
    // 0x0025DD68: lhu         $v1, 0xB8($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0XB8);
    // 0x0025DD6C: addiu       $v0, $zero, 0x259
    ctx->r2 = ADD32(0, 0X259);
    // 0x0025DD70: bne         $v1, $v0, L_0025DDA0
    if (ctx->r3 != ctx->r2) {
        // 0x0025DD74: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_0025DDA0;
    }
    // 0x0025DD74: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0025DD78: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x0025DD7C: jal         0x0025D030
    // 0x0025DD80: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    func_0025D030(rdram, ctx);
        goto after_5;
    // 0x0025DD80: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    after_5:
    // 0x0025DD84: addiu       $v1, $zero, 0xE
    ctx->r3 = ADD32(0, 0XE);
    // 0x0025DD88: bne         $v0, $v1, L_0025DDA0
    if (ctx->r2 != ctx->r3) {
        // 0x0025DD8C: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_0025DDA0;
    }
    // 0x0025DD8C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0025DD90: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x0025DD94: jal         0x00243414
    // 0x0025DD98: addu        $a2, $v1, $zero
    ctx->r6 = ADD32(ctx->r3, 0);
    func_00243414(rdram, ctx);
        goto after_6;
    // 0x0025DD98: addu        $a2, $v1, $zero
    ctx->r6 = ADD32(ctx->r3, 0);
    after_6:
    // 0x0025DD9C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
L_0025DDA0:
    // 0x0025DDA0: jal         0x0025D308
    // 0x0025DDA4: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_0025D308(rdram, ctx);
        goto after_7;
    // 0x0025DDA4: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_7:
    // 0x0025DDA8: lw          $ra, 0xA8($sp)
    ctx->r31 = MEM_W(ctx->r29, 0XA8);
    // 0x0025DDAC: lw          $s1, 0xA4($sp)
    ctx->r17 = MEM_W(ctx->r29, 0XA4);
    // 0x0025DDB0: lw          $s0, 0xA0($sp)
    ctx->r16 = MEM_W(ctx->r29, 0XA0);
    // 0x0025DDB4: jr          $ra
    // 0x0025DDB8: addiu       $sp, $sp, 0xB0
    ctx->r29 = ADD32(ctx->r29, 0XB0);
    return;
    // 0x0025DDB8: addiu       $sp, $sp, 0xB0
    ctx->r29 = ADD32(ctx->r29, 0XB0);
;}
RECOMP_FUNC void func_0022E094(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0022E094: lui         $v0, 0x800F
    ctx->r2 = S32(0X800F << 16);
    // 0x0022E098: lw          $v0, 0x7070($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X7070);
    // 0x0022E09C: lui         $v1, 0x800E
    ctx->r3 = S32(0X800E << 16);
    // 0x0022E0A0: lw          $v1, -0x71DC($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X71DC);
    // 0x0022E0A4: addiu       $sp, $sp, -0xC8
    ctx->r29 = ADD32(ctx->r29, -0XC8);
    // 0x0022E0A8: sw          $s2, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r18;
    // 0x0022E0AC: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x0022E0B0: sw          $ra, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->r31;
    // 0x0022E0B4: sw          $fp, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->r30;
    // 0x0022E0B8: sw          $s7, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->r23;
    // 0x0022E0BC: sw          $s6, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->r22;
    // 0x0022E0C0: sw          $s5, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->r21;
    // 0x0022E0C4: sw          $s4, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->r20;
    // 0x0022E0C8: sw          $s3, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r19;
    // 0x0022E0CC: sw          $s1, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->r17;
    // 0x0022E0D0: sw          $s0, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->r16;
    // 0x0022E0D4: sdc1        $f20, 0xC0($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0XC0, ctx->r29);
    // 0x0022E0D8: lw          $v0, 0x114($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X114);
    // 0x0022E0DC: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x0022E0E0: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x0022E0E4: lw          $v0, 0x2214($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2214);
    // 0x0022E0E8: srl         $v1, $v1, 3
    ctx->r3 = S32(U32(ctx->r3) >> 3);
    // 0x0022E0EC: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x0022E0F0: sltiu       $v0, $v0, 0xBB8
    ctx->r2 = ctx->r2 < 0XBB8 ? 1 : 0;
    // 0x0022E0F4: bne         $v0, $zero, L_0022F194
    if (ctx->r2 != 0) {
        // 0x0022E0F8: addu        $s7, $a1, $zero
        ctx->r23 = ADD32(ctx->r5, 0);
            goto L_0022F194;
    }
    // 0x0022E0F8: addu        $s7, $a1, $zero
    ctx->r23 = ADD32(ctx->r5, 0);
    // 0x0022E0FC: lwc1        $f0, 0x11C($s2)
    ctx->f0.u32l = MEM_W(ctx->r18, 0X11C);
    // 0x0022E100: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x0022E104: c.lt.s      $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f0.fl < ctx->f20.fl;
    // 0x0022E108: nop

    // 0x0022E10C: bc1t        L_0022F194
    if (c1cs) {
        // 0x0022E110: nop
    
            goto L_0022F194;
    }
    // 0x0022E110: nop

    // 0x0022E114: jal         0x0020798C
    // 0x0022E118: addiu       $a0, $s2, 0xFC
    ctx->r4 = ADD32(ctx->r18, 0XFC);
    func_0020798C(rdram, ctx);
        goto after_0;
    // 0x0022E118: addiu       $a0, $s2, 0xFC
    ctx->r4 = ADD32(ctx->r18, 0XFC);
    after_0:
    // 0x0022E11C: addu        $fp, $v0, $zero
    ctx->r30 = ADD32(ctx->r2, 0);
    // 0x0022E120: beq         $fp, $zero, L_0022F194
    if (ctx->r30 == 0) {
        // 0x0022E124: lui         $v1, 0x8
        ctx->r3 = S32(0X8 << 16);
            goto L_0022F194;
    }
    // 0x0022E124: lui         $v1, 0x8
    ctx->r3 = S32(0X8 << 16);
    // 0x0022E128: lw          $s4, 0xF8($s2)
    ctx->r20 = MEM_W(ctx->r18, 0XF8);
    // 0x0022E12C: lw          $v0, 0x0($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X0);
    // 0x0022E130: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x0022E134: beq         $v0, $zero, L_0022E358
    if (ctx->r2 == 0) {
        // 0x0022E138: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_0022E358;
    }
    // 0x0022E138: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0022E13C: lb          $v1, 0x8($s4)
    ctx->r3 = MEM_B(ctx->r20, 0X8);
    // 0x0022E140: bne         $v1, $v0, L_0022E35C
    if (ctx->r3 != ctx->r2) {
        // 0x0022E144: addiu       $v1, $zero, 0x8
        ctx->r3 = ADD32(0, 0X8);
            goto L_0022E35C;
    }
    // 0x0022E144: addiu       $v1, $zero, 0x8
    ctx->r3 = ADD32(0, 0X8);
    // 0x0022E148: lhu         $v1, 0x2($s2)
    ctx->r3 = MEM_HU(ctx->r18, 0X2);
    // 0x0022E14C: addiu       $v0, $zero, 0x60
    ctx->r2 = ADD32(0, 0X60);
    // 0x0022E150: bnel        $v1, $v0, L_0022E158
    if (ctx->r3 != ctx->r2) {
        // 0x0022E154: swc1        $f20, 0x11C($s2)
        MEM_W(0X11C, ctx->r18) = ctx->f20.u32l;
            goto L_0022E158;
    }
    goto skip_0;
    // 0x0022E154: swc1        $f20, 0x11C($s2)
    MEM_W(0X11C, ctx->r18) = ctx->f20.u32l;
    skip_0:
L_0022E158:
    // 0x0022E158: jal         0x00281194
    // 0x0022E15C: addu        $a0, $s7, $zero
    ctx->r4 = ADD32(ctx->r23, 0);
    func_00281194(rdram, ctx);
        goto after_1;
    // 0x0022E15C: addu        $a0, $s7, $zero
    ctx->r4 = ADD32(ctx->r23, 0);
    after_1:
    // 0x0022E160: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x0022E164: beq         $s0, $zero, L_0022E238
    if (ctx->r16 == 0) {
        // 0x0022E168: addiu       $v1, $sp, 0x58
        ctx->r3 = ADD32(ctx->r29, 0X58);
            goto L_0022E238;
    }
    // 0x0022E168: addiu       $v1, $sp, 0x58
    ctx->r3 = ADD32(ctx->r29, 0X58);
    // 0x0022E16C: lw          $v0, 0x24($s7)
    ctx->r2 = MEM_W(ctx->r23, 0X24);
    // 0x0022E170: bne         $v0, $zero, L_0022E23C
    if (ctx->r2 != 0) {
        // 0x0022E174: addu        $v0, $s2, $zero
        ctx->r2 = ADD32(ctx->r18, 0);
            goto L_0022E23C;
    }
    // 0x0022E174: addu        $v0, $s2, $zero
    ctx->r2 = ADD32(ctx->r18, 0);
    // 0x0022E178: addiu       $v1, $sp, 0x58
    ctx->r3 = ADD32(ctx->r29, 0X58);
    // 0x0022E17C: addu        $v0, $s0, $zero
    ctx->r2 = ADD32(ctx->r16, 0);
    // 0x0022E180: addiu       $a0, $s0, 0x30
    ctx->r4 = ADD32(ctx->r16, 0X30);
L_0022E184:
    // 0x0022E184: lw          $t1, 0x0($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X0);
    // 0x0022E188: lw          $t2, 0x4($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X4);
    // 0x0022E18C: lw          $t3, 0x8($v0)
    ctx->r11 = MEM_W(ctx->r2, 0X8);
    // 0x0022E190: lw          $t4, 0xC($v0)
    ctx->r12 = MEM_W(ctx->r2, 0XC);
    // 0x0022E194: sw          $t1, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r9;
    // 0x0022E198: sw          $t2, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r10;
    // 0x0022E19C: sw          $t3, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r11;
    // 0x0022E1A0: sw          $t4, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r12;
    // 0x0022E1A4: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
    // 0x0022E1A8: bne         $v0, $a0, L_0022E184
    if (ctx->r2 != ctx->r4) {
        // 0x0022E1AC: addiu       $v1, $v1, 0x10
        ctx->r3 = ADD32(ctx->r3, 0X10);
            goto L_0022E184;
    }
    // 0x0022E1AC: addiu       $v1, $v1, 0x10
    ctx->r3 = ADD32(ctx->r3, 0X10);
    // 0x0022E1B0: lw          $t1, 0x0($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X0);
    // 0x0022E1B4: sw          $t1, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r9;
    // 0x0022E1B8: lui         $v0, 0x800F
    ctx->r2 = S32(0X800F << 16);
    // 0x0022E1BC: addiu       $v0, $v0, 0x1B40
    ctx->r2 = ADD32(ctx->r2, 0X1B40);
    // 0x0022E1C0: lw          $t1, 0x114($s7)
    ctx->r9 = MEM_W(ctx->r23, 0X114);
    // 0x0022E1C4: lw          $t2, 0x118($s7)
    ctx->r10 = MEM_W(ctx->r23, 0X118);
    // 0x0022E1C8: lw          $t3, 0x11C($s7)
    ctx->r11 = MEM_W(ctx->r23, 0X11C);
    // 0x0022E1CC: sw          $t1, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r9;
    // 0x0022E1D0: sw          $t2, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r10;
    // 0x0022E1D4: sw          $t3, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r11;
    // 0x0022E1D8: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x0022E1DC: lw          $a1, 0x4($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X4);
    // 0x0022E1E0: lw          $a2, 0x8($s2)
    ctx->r6 = MEM_W(ctx->r18, 0X8);
    // 0x0022E1E4: lw          $a3, 0xC($s2)
    ctx->r7 = MEM_W(ctx->r18, 0XC);
    // 0x0022E1E8: jal         0x00239F00
    // 0x0022E1EC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00239F00(rdram, ctx);
        goto after_2;
    // 0x0022E1EC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x0022E1F0: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x0022E1F4: addu        $v0, $s0, $zero
    ctx->r2 = ADD32(ctx->r16, 0);
    // 0x0022E1F8: addiu       $v1, $sp, 0x58
    ctx->r3 = ADD32(ctx->r29, 0X58);
    // 0x0022E1FC: addiu       $a0, $sp, 0x88
    ctx->r4 = ADD32(ctx->r29, 0X88);
L_0022E200:
    // 0x0022E200: lw          $t1, 0x0($v1)
    ctx->r9 = MEM_W(ctx->r3, 0X0);
    // 0x0022E204: lw          $t2, 0x4($v1)
    ctx->r10 = MEM_W(ctx->r3, 0X4);
    // 0x0022E208: lw          $t3, 0x8($v1)
    ctx->r11 = MEM_W(ctx->r3, 0X8);
    // 0x0022E20C: lw          $t4, 0xC($v1)
    ctx->r12 = MEM_W(ctx->r3, 0XC);
    // 0x0022E210: sw          $t1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r9;
    // 0x0022E214: sw          $t2, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r10;
    // 0x0022E218: sw          $t3, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r11;
    // 0x0022E21C: sw          $t4, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r12;
    // 0x0022E220: addiu       $v1, $v1, 0x10
    ctx->r3 = ADD32(ctx->r3, 0X10);
    // 0x0022E224: bne         $v1, $a0, L_0022E200
    if (ctx->r3 != ctx->r4) {
        // 0x0022E228: addiu       $v0, $v0, 0x10
        ctx->r2 = ADD32(ctx->r2, 0X10);
            goto L_0022E200;
    }
    // 0x0022E228: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
    // 0x0022E22C: lw          $t1, 0x0($v1)
    ctx->r9 = MEM_W(ctx->r3, 0X0);
    // 0x0022E230: j           L_0022E2B0
    // 0x0022E234: sw          $t1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r9;
        goto L_0022E2B0;
    // 0x0022E234: sw          $t1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r9;
L_0022E238:
    // 0x0022E238: addu        $v0, $s2, $zero
    ctx->r2 = ADD32(ctx->r18, 0);
L_0022E23C:
    // 0x0022E23C: addiu       $a0, $s2, 0x30
    ctx->r4 = ADD32(ctx->r18, 0X30);
L_0022E240:
    // 0x0022E240: lw          $t1, 0x0($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X0);
    // 0x0022E244: lw          $t2, 0x4($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X4);
    // 0x0022E248: lw          $t3, 0x8($v0)
    ctx->r11 = MEM_W(ctx->r2, 0X8);
    // 0x0022E24C: lw          $t4, 0xC($v0)
    ctx->r12 = MEM_W(ctx->r2, 0XC);
    // 0x0022E250: sw          $t1, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r9;
    // 0x0022E254: sw          $t2, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r10;
    // 0x0022E258: sw          $t3, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r11;
    // 0x0022E25C: sw          $t4, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r12;
    // 0x0022E260: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
    // 0x0022E264: bne         $v0, $a0, L_0022E240
    if (ctx->r2 != ctx->r4) {
        // 0x0022E268: addiu       $v1, $v1, 0x10
        ctx->r3 = ADD32(ctx->r3, 0X10);
            goto L_0022E240;
    }
    // 0x0022E268: addiu       $v1, $v1, 0x10
    ctx->r3 = ADD32(ctx->r3, 0X10);
    // 0x0022E26C: lw          $t1, 0x0($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X0);
    // 0x0022E270: sw          $t1, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r9;
    // 0x0022E274: lui         $v0, 0x800F
    ctx->r2 = S32(0X800F << 16);
    // 0x0022E278: addiu       $v0, $v0, 0x1B40
    ctx->r2 = ADD32(ctx->r2, 0X1B40);
    // 0x0022E27C: lw          $t1, 0x114($s7)
    ctx->r9 = MEM_W(ctx->r23, 0X114);
    // 0x0022E280: lw          $t2, 0x118($s7)
    ctx->r10 = MEM_W(ctx->r23, 0X118);
    // 0x0022E284: lw          $t3, 0x11C($s7)
    ctx->r11 = MEM_W(ctx->r23, 0X11C);
    // 0x0022E288: sw          $t1, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r9;
    // 0x0022E28C: sw          $t2, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r10;
    // 0x0022E290: sw          $t3, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r11;
    // 0x0022E294: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x0022E298: lw          $a1, 0x4($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X4);
    // 0x0022E29C: lw          $a2, 0x8($s2)
    ctx->r6 = MEM_W(ctx->r18, 0X8);
    // 0x0022E2A0: lw          $a3, 0xC($s2)
    ctx->r7 = MEM_W(ctx->r18, 0XC);
    // 0x0022E2A4: jal         0x00239F00
    // 0x0022E2A8: addiu       $a0, $sp, 0x58
    ctx->r4 = ADD32(ctx->r29, 0X58);
    func_00239F00(rdram, ctx);
        goto after_3;
    // 0x0022E2A8: addiu       $a0, $sp, 0x58
    ctx->r4 = ADD32(ctx->r29, 0X58);
    after_3:
    // 0x0022E2AC: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
L_0022E2B0:
    // 0x0022E2B0: bne         $a1, $zero, L_0022E2F0
    if (ctx->r5 != 0) {
        // 0x0022E2B4: addu        $a3, $zero, $zero
        ctx->r7 = ADD32(0, 0);
            goto L_0022E2F0;
    }
    // 0x0022E2B4: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x0022E2B8: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0022E2BC: lwc1        $f1, 0x6D28($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X6D28);
    // 0x0022E2C0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0022E2C4: lwc1        $f0, 0x631C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X631C);
    // 0x0022E2C8: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x0022E2CC: lbu         $v0, 0x1B4($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X1B4);
    // 0x0022E2D0: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x0022E2D4: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x0022E2D8: add.s       $f1, $f0, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x0022E2DC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0022E2E0: lwc1        $f0, 0x6320($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6320);
    // 0x0022E2E4: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x0022E2E8: j           L_0022E31C
    // 0x0022E2EC: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
        goto L_0022E31C;
    // 0x0022E2EC: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
L_0022E2F0:
    // 0x0022E2F0: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0022E2F4: lwc1        $f1, 0x6D28($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X6D28);
    // 0x0022E2F8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0022E2FC: lwc1        $f0, 0x6324($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6324);
    // 0x0022E300: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x0022E304: lbu         $v0, 0x1B4($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X1B4);
    // 0x0022E308: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x0022E30C: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x0022E310: sub.s       $f1, $f0, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x0022E314: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x0022E318: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
L_0022E31C:
    // 0x0022E31C: nop

    // 0x0022E320: bc1t        L_0022E330
    if (c1cs) {
        // 0x0022E324: nop
    
            goto L_0022E330;
    }
    // 0x0022E324: nop

    // 0x0022E328: trunc.w.s   $f4, $f1
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 1);
    ctx->f4.u32l = TRUNC_W_S(ctx->f1.fl);
    // 0x0022E32C: mfc1        $a3, $f4
    ctx->r7 = (int32_t)ctx->f4.u32l;
L_0022E330:
    // 0x0022E330: mtc1        $zero, $f1
    ctx->f_odd[(1 - 1) * 2] = 0;
    // 0x0022E334: mtc1        $a3, $f0
    ctx->f0.u32l = ctx->r7;
    // 0x0022E338: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x0022E33C: c.eq.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl == ctx->f1.fl;
    // 0x0022E340: nop

    // 0x0022E344: bc1f        L_0022E358
    if (!c1cs) {
        // 0x0022E348: sb          $a3, 0x1B4($s2)
        MEM_B(0X1B4, ctx->r18) = ctx->r7;
            goto L_0022E358;
    }
    // 0x0022E348: sb          $a3, 0x1B4($s2)
    MEM_B(0X1B4, ctx->r18) = ctx->r7;
    // 0x0022E34C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0022E350: j           L_0022F18C
    // 0x0022E354: addu        $a1, $fp, $zero
    ctx->r5 = ADD32(ctx->r30, 0);
        goto L_0022F18C;
    // 0x0022E354: addu        $a1, $fp, $zero
    ctx->r5 = ADD32(ctx->r30, 0);
L_0022E358:
    // 0x0022E358: addiu       $v1, $zero, 0x8
    ctx->r3 = ADD32(0, 0X8);
L_0022E35C:
    // 0x0022E35C: lh          $v0, 0x128($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X128);
    // 0x0022E360: lwc1        $f0, 0x11C($s2)
    ctx->f0.u32l = MEM_W(ctx->r18, 0X11C);
    // 0x0022E364: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0022E368: lwc1        $f2, 0x6328($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X6328);
    // 0x0022E36C: mtc1        $v0, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r2;
    // 0x0022E370: cvt.s.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.fl = CVT_S_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x0022E374: div.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = DIV_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0022E378: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0022E37C: lwc1        $f1, 0x632C($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X632C);
    // 0x0022E380: lw          $v0, 0x8($s7)
    ctx->r2 = MEM_W(ctx->r23, 0X8);
    // 0x0022E384: mov.s       $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    ctx->f3.fl = ctx->f0.fl;
    // 0x0022E388: swc1        $f2, 0x174($s2)
    MEM_W(0X174, ctx->r18) = ctx->f2.u32l;
    // 0x0022E38C: sllv        $v1, $v1, $v0
    ctx->r3 = S32(ctx->r3 << (ctx->r2 & 31));
    // 0x0022E390: lw          $v0, 0x40($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X40);
    // 0x0022E394: c.lt.s      $f1, $f3
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 3);
    c1cs = ctx->f1.fl < ctx->f3.fl;
    // 0x0022E398: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x0022E39C: bc1f        L_0022E3A8
    if (!c1cs) {
        // 0x0022E3A0: sw          $v0, 0x40($s2)
        MEM_W(0X40, ctx->r18) = ctx->r2;
            goto L_0022E3A8;
    }
    // 0x0022E3A0: sw          $v0, 0x40($s2)
    MEM_W(0X40, ctx->r18) = ctx->r2;
    // 0x0022E3A4: mov.s       $f3, $f1
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 1);
    ctx->f3.fl = ctx->f1.fl;
L_0022E3A8:
    // 0x0022E3A8: lw          $a0, 0x34($s4)
    ctx->r4 = MEM_W(ctx->r20, 0X34);
    // 0x0022E3AC: lbu         $v1, 0x1B1($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0X1B1);
    // 0x0022E3B0: lbu         $v0, 0x9($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X9);
    // 0x0022E3B4: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x0022E3B8: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x0022E3BC: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x0022E3C0: mul.s       $f0, $f0, $f3
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f3.fl);
    // 0x0022E3C4: addiu       $a2, $s2, 0x1AE
    ctx->r6 = ADD32(ctx->r18, 0X1AE);
    // 0x0022E3C8: addiu       $a3, $s2, 0x1B1
    ctx->r7 = ADD32(ctx->r18, 0X1B1);
    // 0x0022E3CC: mtc1        $v1, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r3;
    // 0x0022E3D0: cvt.s.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.fl = CVT_S_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x0022E3D4: add.s       $f1, $f0, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x0022E3D8: addiu       $a1, $a0, 0x6
    ctx->r5 = ADD32(ctx->r4, 0X6);
    // 0x0022E3DC: c.lt.s      $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f2.fl < ctx->f1.fl;
    // 0x0022E3E0: nop

    // 0x0022E3E4: bc1t        L_0022E404
    if (c1cs) {
        // 0x0022E3E8: addiu       $a0, $a0, 0x9
        ctx->r4 = ADD32(ctx->r4, 0X9);
            goto L_0022E404;
    }
    // 0x0022E3E8: addiu       $a0, $a0, 0x9
    ctx->r4 = ADD32(ctx->r4, 0X9);
    // 0x0022E3EC: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x0022E3F0: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x0022E3F4: nop

    // 0x0022E3F8: bc1t        L_0022E44C
    if (c1cs) {
        // 0x0022E3FC: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_0022E44C;
    }
    // 0x0022E3FC: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x0022E400: c.lt.s      $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f2.fl < ctx->f1.fl;
L_0022E404:
    // 0x0022E404: nop

    // 0x0022E408: bc1t        L_0022E44C
    if (c1cs) {
        // 0x0022E40C: addiu       $v0, $zero, 0xFF
        ctx->r2 = ADD32(0, 0XFF);
            goto L_0022E44C;
    }
    // 0x0022E40C: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x0022E410: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0022E414: lwc1        $f0, 0x6330($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6330);
    // 0x0022E418: c.le.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl <= ctx->f1.fl;
    // 0x0022E41C: nop

    // 0x0022E420: bc1tl       L_0022E438
    if (c1cs) {
        // 0x0022E424: sub.s       $f0, $f1, $f0
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f1.fl - ctx->f0.fl;
            goto L_0022E438;
    }
    goto skip_1;
    // 0x0022E424: sub.s       $f0, $f1, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f1.fl - ctx->f0.fl;
    skip_1:
    // 0x0022E428: trunc.w.s   $f4, $f1
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 1);
    ctx->f4.u32l = TRUNC_W_S(ctx->f1.fl);
    // 0x0022E42C: mfc1        $v1, $f4
    ctx->r3 = (int32_t)ctx->f4.u32l;
    // 0x0022E430: j           L_0022E44C
    // 0x0022E434: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
        goto L_0022E44C;
    // 0x0022E434: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
L_0022E438:
    // 0x0022E438: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x0022E43C: trunc.w.s   $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x0022E440: mfc1        $v1, $f4
    ctx->r3 = (int32_t)ctx->f4.u32l;
    // 0x0022E444: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x0022E448: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
L_0022E44C:
    // 0x0022E44C: sb          $v0, 0x38($sp)
    MEM_B(0X38, ctx->r29) = ctx->r2;
    // 0x0022E450: lbu         $v0, 0x1($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X1);
    // 0x0022E454: lbu         $v1, 0x1($a3)
    ctx->r3 = MEM_BU(ctx->r7, 0X1);
    // 0x0022E458: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x0022E45C: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x0022E460: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x0022E464: mul.s       $f0, $f0, $f3
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f3.fl);
    // 0x0022E468: mtc1        $v1, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r3;
    // 0x0022E46C: cvt.s.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.fl = CVT_S_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x0022E470: add.s       $f1, $f0, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x0022E474: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0022E478: lwc1        $f2, 0x6334($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X6334);
    // 0x0022E47C: c.lt.s      $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f2.fl < ctx->f1.fl;
    // 0x0022E480: nop

    // 0x0022E484: bc1tl       L_0022E4EC
    if (c1cs) {
        // 0x0022E488: addiu       $v0, $zero, 0xFF
        ctx->r2 = ADD32(0, 0XFF);
            goto L_0022E4EC;
    }
    goto skip_2;
    // 0x0022E488: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    skip_2:
    // 0x0022E48C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x0022E490: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x0022E494: nop

    // 0x0022E498: bc1t        L_0022E4EC
    if (c1cs) {
        // 0x0022E49C: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_0022E4EC;
    }
    // 0x0022E49C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x0022E4A0: c.lt.s      $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f2.fl < ctx->f1.fl;
    // 0x0022E4A4: nop

    // 0x0022E4A8: bc1t        L_0022E4EC
    if (c1cs) {
        // 0x0022E4AC: addiu       $v0, $zero, 0xFF
        ctx->r2 = ADD32(0, 0XFF);
            goto L_0022E4EC;
    }
    // 0x0022E4AC: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x0022E4B0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0022E4B4: lwc1        $f0, 0x6338($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6338);
    // 0x0022E4B8: c.le.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl <= ctx->f1.fl;
    // 0x0022E4BC: nop

    // 0x0022E4C0: bc1tl       L_0022E4D8
    if (c1cs) {
        // 0x0022E4C4: sub.s       $f0, $f1, $f0
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f1.fl - ctx->f0.fl;
            goto L_0022E4D8;
    }
    goto skip_3;
    // 0x0022E4C4: sub.s       $f0, $f1, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f1.fl - ctx->f0.fl;
    skip_3:
    // 0x0022E4C8: trunc.w.s   $f4, $f1
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 1);
    ctx->f4.u32l = TRUNC_W_S(ctx->f1.fl);
    // 0x0022E4CC: mfc1        $v1, $f4
    ctx->r3 = (int32_t)ctx->f4.u32l;
    // 0x0022E4D0: j           L_0022E4EC
    // 0x0022E4D4: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
        goto L_0022E4EC;
    // 0x0022E4D4: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
L_0022E4D8:
    // 0x0022E4D8: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x0022E4DC: trunc.w.s   $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x0022E4E0: mfc1        $v1, $f4
    ctx->r3 = (int32_t)ctx->f4.u32l;
    // 0x0022E4E4: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x0022E4E8: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
L_0022E4EC:
    // 0x0022E4EC: sb          $v0, 0x39($sp)
    MEM_B(0X39, ctx->r29) = ctx->r2;
    // 0x0022E4F0: lbu         $v0, 0x2($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X2);
    // 0x0022E4F4: lbu         $v1, 0x2($a3)
    ctx->r3 = MEM_BU(ctx->r7, 0X2);
    // 0x0022E4F8: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x0022E4FC: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x0022E500: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x0022E504: mul.s       $f0, $f0, $f3
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f3.fl);
    // 0x0022E508: mtc1        $v1, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r3;
    // 0x0022E50C: cvt.s.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.fl = CVT_S_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x0022E510: add.s       $f1, $f0, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x0022E514: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0022E518: lwc1        $f2, 0x633C($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X633C);
    // 0x0022E51C: c.lt.s      $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f2.fl < ctx->f1.fl;
    // 0x0022E520: nop

    // 0x0022E524: bc1tl       L_0022E58C
    if (c1cs) {
        // 0x0022E528: addiu       $v0, $zero, 0xFF
        ctx->r2 = ADD32(0, 0XFF);
            goto L_0022E58C;
    }
    goto skip_4;
    // 0x0022E528: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    skip_4:
    // 0x0022E52C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x0022E530: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x0022E534: nop

    // 0x0022E538: bc1t        L_0022E58C
    if (c1cs) {
        // 0x0022E53C: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_0022E58C;
    }
    // 0x0022E53C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x0022E540: c.lt.s      $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f2.fl < ctx->f1.fl;
    // 0x0022E544: nop

    // 0x0022E548: bc1t        L_0022E58C
    if (c1cs) {
        // 0x0022E54C: addiu       $v0, $zero, 0xFF
        ctx->r2 = ADD32(0, 0XFF);
            goto L_0022E58C;
    }
    // 0x0022E54C: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x0022E550: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0022E554: lwc1        $f0, 0x6340($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6340);
    // 0x0022E558: c.le.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl <= ctx->f1.fl;
    // 0x0022E55C: nop

    // 0x0022E560: bc1tl       L_0022E578
    if (c1cs) {
        // 0x0022E564: sub.s       $f0, $f1, $f0
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f1.fl - ctx->f0.fl;
            goto L_0022E578;
    }
    goto skip_5;
    // 0x0022E564: sub.s       $f0, $f1, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f1.fl - ctx->f0.fl;
    skip_5:
    // 0x0022E568: trunc.w.s   $f4, $f1
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 1);
    ctx->f4.u32l = TRUNC_W_S(ctx->f1.fl);
    // 0x0022E56C: mfc1        $v1, $f4
    ctx->r3 = (int32_t)ctx->f4.u32l;
    // 0x0022E570: j           L_0022E58C
    // 0x0022E574: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
        goto L_0022E58C;
    // 0x0022E574: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
L_0022E578:
    // 0x0022E578: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x0022E57C: trunc.w.s   $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x0022E580: mfc1        $v1, $f4
    ctx->r3 = (int32_t)ctx->f4.u32l;
    // 0x0022E584: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x0022E588: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
L_0022E58C:
    // 0x0022E58C: sb          $v0, 0x3A($sp)
    MEM_B(0X3A, ctx->r29) = ctx->r2;
    // 0x0022E590: lbu         $v0, 0x0($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X0);
    // 0x0022E594: lbu         $v1, 0x0($a2)
    ctx->r3 = MEM_BU(ctx->r6, 0X0);
    // 0x0022E598: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x0022E59C: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x0022E5A0: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x0022E5A4: mul.s       $f0, $f0, $f3
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f3.fl);
    // 0x0022E5A8: mtc1        $v1, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r3;
    // 0x0022E5AC: cvt.s.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.fl = CVT_S_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x0022E5B0: add.s       $f1, $f0, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x0022E5B4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0022E5B8: lwc1        $f2, 0x6344($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X6344);
    // 0x0022E5BC: c.lt.s      $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f2.fl < ctx->f1.fl;
    // 0x0022E5C0: nop

    // 0x0022E5C4: bc1tl       L_0022E62C
    if (c1cs) {
        // 0x0022E5C8: addiu       $v0, $zero, 0xFF
        ctx->r2 = ADD32(0, 0XFF);
            goto L_0022E62C;
    }
    goto skip_6;
    // 0x0022E5C8: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    skip_6:
    // 0x0022E5CC: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x0022E5D0: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x0022E5D4: nop

    // 0x0022E5D8: bc1t        L_0022E62C
    if (c1cs) {
        // 0x0022E5DC: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_0022E62C;
    }
    // 0x0022E5DC: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x0022E5E0: c.lt.s      $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f2.fl < ctx->f1.fl;
    // 0x0022E5E4: nop

    // 0x0022E5E8: bc1t        L_0022E62C
    if (c1cs) {
        // 0x0022E5EC: addiu       $v0, $zero, 0xFF
        ctx->r2 = ADD32(0, 0XFF);
            goto L_0022E62C;
    }
    // 0x0022E5EC: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x0022E5F0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0022E5F4: lwc1        $f0, 0x6348($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6348);
    // 0x0022E5F8: c.le.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl <= ctx->f1.fl;
    // 0x0022E5FC: nop

    // 0x0022E600: bc1tl       L_0022E618
    if (c1cs) {
        // 0x0022E604: sub.s       $f0, $f1, $f0
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f1.fl - ctx->f0.fl;
            goto L_0022E618;
    }
    goto skip_7;
    // 0x0022E604: sub.s       $f0, $f1, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f1.fl - ctx->f0.fl;
    skip_7:
    // 0x0022E608: trunc.w.s   $f4, $f1
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 1);
    ctx->f4.u32l = TRUNC_W_S(ctx->f1.fl);
    // 0x0022E60C: mfc1        $v1, $f4
    ctx->r3 = (int32_t)ctx->f4.u32l;
    // 0x0022E610: j           L_0022E62C
    // 0x0022E614: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
        goto L_0022E62C;
    // 0x0022E614: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
L_0022E618:
    // 0x0022E618: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x0022E61C: trunc.w.s   $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x0022E620: mfc1        $v1, $f4
    ctx->r3 = (int32_t)ctx->f4.u32l;
    // 0x0022E624: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x0022E628: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
L_0022E62C:
    // 0x0022E62C: sb          $v0, 0x40($sp)
    MEM_B(0X40, ctx->r29) = ctx->r2;
    // 0x0022E630: lbu         $v0, 0x1($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X1);
    // 0x0022E634: lbu         $v1, 0x1($a2)
    ctx->r3 = MEM_BU(ctx->r6, 0X1);
    // 0x0022E638: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x0022E63C: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x0022E640: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x0022E644: mul.s       $f0, $f0, $f3
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f3.fl);
    // 0x0022E648: mtc1        $v1, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r3;
    // 0x0022E64C: cvt.s.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.fl = CVT_S_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x0022E650: add.s       $f1, $f0, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x0022E654: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0022E658: lwc1        $f2, 0x634C($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X634C);
    // 0x0022E65C: c.lt.s      $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f2.fl < ctx->f1.fl;
    // 0x0022E660: nop

    // 0x0022E664: bc1tl       L_0022E6CC
    if (c1cs) {
        // 0x0022E668: addiu       $v0, $zero, 0xFF
        ctx->r2 = ADD32(0, 0XFF);
            goto L_0022E6CC;
    }
    goto skip_8;
    // 0x0022E668: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    skip_8:
    // 0x0022E66C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x0022E670: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x0022E674: nop

    // 0x0022E678: bc1t        L_0022E6CC
    if (c1cs) {
        // 0x0022E67C: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_0022E6CC;
    }
    // 0x0022E67C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x0022E680: c.lt.s      $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f2.fl < ctx->f1.fl;
    // 0x0022E684: nop

    // 0x0022E688: bc1t        L_0022E6CC
    if (c1cs) {
        // 0x0022E68C: addiu       $v0, $zero, 0xFF
        ctx->r2 = ADD32(0, 0XFF);
            goto L_0022E6CC;
    }
    // 0x0022E68C: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x0022E690: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0022E694: lwc1        $f0, 0x6350($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6350);
    // 0x0022E698: c.le.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl <= ctx->f1.fl;
    // 0x0022E69C: nop

    // 0x0022E6A0: bc1tl       L_0022E6B8
    if (c1cs) {
        // 0x0022E6A4: sub.s       $f0, $f1, $f0
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f1.fl - ctx->f0.fl;
            goto L_0022E6B8;
    }
    goto skip_9;
    // 0x0022E6A4: sub.s       $f0, $f1, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f1.fl - ctx->f0.fl;
    skip_9:
    // 0x0022E6A8: trunc.w.s   $f4, $f1
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 1);
    ctx->f4.u32l = TRUNC_W_S(ctx->f1.fl);
    // 0x0022E6AC: mfc1        $v1, $f4
    ctx->r3 = (int32_t)ctx->f4.u32l;
    // 0x0022E6B0: j           L_0022E6CC
    // 0x0022E6B4: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
        goto L_0022E6CC;
    // 0x0022E6B4: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
L_0022E6B8:
    // 0x0022E6B8: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x0022E6BC: trunc.w.s   $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x0022E6C0: mfc1        $v1, $f4
    ctx->r3 = (int32_t)ctx->f4.u32l;
    // 0x0022E6C4: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x0022E6C8: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
L_0022E6CC:
    // 0x0022E6CC: sb          $v0, 0x41($sp)
    MEM_B(0X41, ctx->r29) = ctx->r2;
    // 0x0022E6D0: lbu         $v0, 0x2($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X2);
    // 0x0022E6D4: lbu         $v1, 0x2($a2)
    ctx->r3 = MEM_BU(ctx->r6, 0X2);
    // 0x0022E6D8: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x0022E6DC: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x0022E6E0: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x0022E6E4: mul.s       $f0, $f0, $f3
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f3.fl);
    // 0x0022E6E8: mtc1        $v1, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r3;
    // 0x0022E6EC: cvt.s.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.fl = CVT_S_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x0022E6F0: add.s       $f1, $f0, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x0022E6F4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0022E6F8: lwc1        $f2, 0x6354($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X6354);
    // 0x0022E6FC: c.lt.s      $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f2.fl < ctx->f1.fl;
    // 0x0022E700: nop

    // 0x0022E704: bc1tl       L_0022E76C
    if (c1cs) {
        // 0x0022E708: addiu       $v0, $zero, 0xFF
        ctx->r2 = ADD32(0, 0XFF);
            goto L_0022E76C;
    }
    goto skip_10;
    // 0x0022E708: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    skip_10:
    // 0x0022E70C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x0022E710: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x0022E714: nop

    // 0x0022E718: bc1t        L_0022E76C
    if (c1cs) {
        // 0x0022E71C: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_0022E76C;
    }
    // 0x0022E71C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x0022E720: c.lt.s      $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f2.fl < ctx->f1.fl;
    // 0x0022E724: nop

    // 0x0022E728: bc1t        L_0022E76C
    if (c1cs) {
        // 0x0022E72C: addiu       $v0, $zero, 0xFF
        ctx->r2 = ADD32(0, 0XFF);
            goto L_0022E76C;
    }
    // 0x0022E72C: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x0022E730: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0022E734: lwc1        $f0, 0x6358($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6358);
    // 0x0022E738: c.le.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl <= ctx->f1.fl;
    // 0x0022E73C: nop

    // 0x0022E740: bc1tl       L_0022E758
    if (c1cs) {
        // 0x0022E744: sub.s       $f0, $f1, $f0
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f1.fl - ctx->f0.fl;
            goto L_0022E758;
    }
    goto skip_11;
    // 0x0022E744: sub.s       $f0, $f1, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f1.fl - ctx->f0.fl;
    skip_11:
    // 0x0022E748: trunc.w.s   $f4, $f1
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 1);
    ctx->f4.u32l = TRUNC_W_S(ctx->f1.fl);
    // 0x0022E74C: mfc1        $v1, $f4
    ctx->r3 = (int32_t)ctx->f4.u32l;
    // 0x0022E750: j           L_0022E76C
    // 0x0022E754: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
        goto L_0022E76C;
    // 0x0022E754: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
L_0022E758:
    // 0x0022E758: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x0022E75C: trunc.w.s   $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x0022E760: mfc1        $v1, $f4
    ctx->r3 = (int32_t)ctx->f4.u32l;
    // 0x0022E764: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x0022E768: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
L_0022E76C:
    // 0x0022E76C: sb          $v0, 0x42($sp)
    MEM_B(0X42, ctx->r29) = ctx->r2;
    // 0x0022E770: lw          $v0, 0xF8($s2)
    ctx->r2 = MEM_W(ctx->r18, 0XF8);
    // 0x0022E774: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x0022E778: lui         $v1, 0x200
    ctx->r3 = S32(0X200 << 16);
    // 0x0022E77C: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x0022E780: beq         $v0, $zero, L_0022E7B0
    if (ctx->r2 == 0) {
        // 0x0022E784: addu        $a2, $zero, $zero
        ctx->r6 = ADD32(0, 0);
            goto L_0022E7B0;
    }
    // 0x0022E784: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x0022E788: lw          $v0, 0x40($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X40);
    // 0x0022E78C: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x0022E790: beq         $v0, $zero, L_0022E7A0
    if (ctx->r2 == 0) {
        // 0x0022E794: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_0022E7A0;
    }
    // 0x0022E794: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x0022E798: j           L_0022E7B0
    // 0x0022E79C: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
        goto L_0022E7B0;
    // 0x0022E79C: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
L_0022E7A0:
    // 0x0022E7A0: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x0022E7A4: lbu         $v1, -0x5511($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X5511);
    // 0x0022E7A8: beql        $v1, $v0, L_0022E7B0
    if (ctx->r3 == ctx->r2) {
        // 0x0022E7AC: addiu       $a2, $zero, 0x1
        ctx->r6 = ADD32(0, 0X1);
            goto L_0022E7B0;
    }
    goto skip_12;
    // 0x0022E7AC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    skip_12:
L_0022E7B0:
    // 0x0022E7B0: addu        $a0, $fp, $zero
    ctx->r4 = ADD32(ctx->r30, 0);
    // 0x0022E7B4: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    // 0x0022E7B8: jal         0x002079D8
    // 0x0022E7BC: addu        $s6, $a2, $zero
    ctx->r22 = ADD32(ctx->r6, 0);
    func_002079D8(rdram, ctx);
        goto after_4;
    // 0x0022E7BC: addu        $s6, $a2, $zero
    ctx->r22 = ADD32(ctx->r6, 0);
    after_4:
    // 0x0022E7C0: lwc1        $f0, 0x120($s2)
    ctx->f0.u32l = MEM_W(ctx->r18, 0X120);
    // 0x0022E7C4: lb          $v1, 0x8($s4)
    ctx->r3 = MEM_B(ctx->r20, 0X8);
    // 0x0022E7C8: trunc.w.s   $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x0022E7CC: mfc1        $s1, $f4
    ctx->r17 = (int32_t)ctx->f4.u32l;
    // 0x0022E7D0: lwc1        $f0, 0x11C($s2)
    ctx->f0.u32l = MEM_W(ctx->r18, 0X11C);
    // 0x0022E7D4: sltiu       $v0, $v1, 0x6
    ctx->r2 = ctx->r3 < 0X6 ? 1 : 0;
    // 0x0022E7D8: trunc.w.s   $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x0022E7DC: mfc1        $s3, $f4
    ctx->r19 = (int32_t)ctx->f4.u32l;
    // 0x0022E7E0: beq         $v0, $zero, L_0022E964
    if (ctx->r2 == 0) {
        // 0x0022E7E4: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_0022E964;
    }
    // 0x0022E7E4: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x0022E7E8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0022E7EC: addu        $at, $at, $v0
    gpr jr_addend_0022E7F4 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x0022E7F0: lw          $v0, 0x6360($at)
    ctx->r2 = ADD32(ctx->r1, 0X6360);
    // 0x0022E7F4: jr          $v0
    // 0x0022E7F8: nop

    switch (jr_addend_0022E7F4 >> 2) {
        case 0: goto L_0022E7FC; break;
        case 1: goto L_0022E828; break;
        case 2: goto L_0022E840; break;
        case 3: goto L_0022E878; break;
        case 4: goto L_0022E8D4; break;
        case 5: goto L_0022E914; break;
        default: switch_error(__func__, 0x0022E7F4, 0x800A6360);
    }
    // 0x0022E7F8: nop

L_0022E7FC:
    // 0x0022E7FC: lw          $v0, 0x28($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X28);
    // 0x0022E800: addiu       $v1, $v0, -0x1
    ctx->r3 = ADD32(ctx->r2, -0X1);
    // 0x0022E804: slt         $v0, $s1, $v1
    ctx->r2 = SIGNED(ctx->r17) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x0022E808: bne         $v0, $zero, L_0022E964
    if (ctx->r2 != 0) {
        // 0x0022E80C: nop
    
            goto L_0022E964;
    }
    // 0x0022E80C: nop

    // 0x0022E810: lh          $s3, 0x128($s2)
    ctx->r19 = MEM_H(ctx->r18, 0X128);
    // 0x0022E814: addu        $s1, $v1, $zero
    ctx->r17 = ADD32(ctx->r3, 0);
    // 0x0022E818: mtc1        $s3, $f0
    ctx->f0.u32l = ctx->r19;
    // 0x0022E81C: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x0022E820: j           L_0022E964
    // 0x0022E824: swc1        $f0, 0x11C($s2)
    MEM_W(0X11C, ctx->r18) = ctx->f0.u32l;
        goto L_0022E964;
    // 0x0022E824: swc1        $f0, 0x11C($s2)
    MEM_W(0X11C, ctx->r18) = ctx->f0.u32l;
L_0022E828:
    // 0x0022E828: lw          $v1, 0x28($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X28);
    // 0x0022E82C: slt         $v0, $s1, $v1
    ctx->r2 = SIGNED(ctx->r17) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x0022E830: beql        $v0, $zero, L_0022E964
    if (ctx->r2 == 0) {
        // 0x0022E834: addiu       $s1, $v1, -0x1
        ctx->r17 = ADD32(ctx->r3, -0X1);
            goto L_0022E964;
    }
    goto skip_13;
    // 0x0022E834: addiu       $s1, $v1, -0x1
    ctx->r17 = ADD32(ctx->r3, -0X1);
    skip_13:
    // 0x0022E838: j           L_0022E964
    // 0x0022E83C: nop

        goto L_0022E964;
    // 0x0022E83C: nop

L_0022E840:
    // 0x0022E840: lw          $v0, 0x28($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X28);
    // 0x0022E844: div         $zero, $s1, $v0
    lo = S32(S64(S32(ctx->r17)) / S64(S32(ctx->r2))); hi = S32(S64(S32(ctx->r17)) % S64(S32(ctx->r2)));
    // 0x0022E848: bne         $v0, $zero, L_0022E854
    if (ctx->r2 != 0) {
        // 0x0022E84C: nop
    
            goto L_0022E854;
    }
    // 0x0022E84C: nop

    // 0x0022E850: break       7
    do_break(2287696);
L_0022E854:
    // 0x0022E854: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x0022E858: bne         $v0, $at, L_0022E86C
    if (ctx->r2 != ctx->r1) {
        // 0x0022E85C: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_0022E86C;
    }
    // 0x0022E85C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x0022E860: bne         $s1, $at, L_0022E86C
    if (ctx->r17 != ctx->r1) {
        // 0x0022E864: nop
    
            goto L_0022E86C;
    }
    // 0x0022E864: nop

    // 0x0022E868: break       6
    do_break(2287720);
L_0022E86C:
    // 0x0022E86C: mfhi        $s1
    ctx->r17 = hi;
    // 0x0022E870: j           L_0022E964
    // 0x0022E874: nop

        goto L_0022E964;
    // 0x0022E874: nop

L_0022E878:
    // 0x0022E878: lw          $v0, 0x28($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X28);
    // 0x0022E87C: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x0022E880: addiu       $v0, $v0, -0x2
    ctx->r2 = ADD32(ctx->r2, -0X2);
    // 0x0022E884: blezl       $v0, L_0022E8B8
    if (SIGNED(ctx->r2) <= 0) {
        // 0x0022E888: addu        $s1, $zero, $zero
        ctx->r17 = ADD32(0, 0);
            goto L_0022E8B8;
    }
    goto skip_14;
    // 0x0022E888: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    skip_14:
    // 0x0022E88C: div         $zero, $s1, $v0
    lo = S32(S64(S32(ctx->r17)) / S64(S32(ctx->r2))); hi = S32(S64(S32(ctx->r17)) % S64(S32(ctx->r2)));
    // 0x0022E890: bne         $v0, $zero, L_0022E89C
    if (ctx->r2 != 0) {
        // 0x0022E894: nop
    
            goto L_0022E89C;
    }
    // 0x0022E894: nop

    // 0x0022E898: break       7
    do_break(2287768);
L_0022E89C:
    // 0x0022E89C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x0022E8A0: bne         $v0, $at, L_0022E8B4
    if (ctx->r2 != ctx->r1) {
        // 0x0022E8A4: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_0022E8B4;
    }
    // 0x0022E8A4: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x0022E8A8: bne         $s1, $at, L_0022E8B4
    if (ctx->r17 != ctx->r1) {
        // 0x0022E8AC: nop
    
            goto L_0022E8B4;
    }
    // 0x0022E8AC: nop

    // 0x0022E8B0: break       6
    do_break(2287792);
L_0022E8B4:
    // 0x0022E8B4: mfhi        $s1
    ctx->r17 = hi;
L_0022E8B8:
    // 0x0022E8B8: lw          $v1, 0x28($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X28);
    // 0x0022E8BC: slt         $v0, $s1, $v1
    ctx->r2 = SIGNED(ctx->r17) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x0022E8C0: bne         $v0, $zero, L_0022E964
    if (ctx->r2 != 0) {
        // 0x0022E8C4: sll         $v1, $v1, 1
        ctx->r3 = S32(ctx->r3 << 1);
            goto L_0022E964;
    }
    // 0x0022E8C4: sll         $v1, $v1, 1
    ctx->r3 = S32(ctx->r3 << 1);
    // 0x0022E8C8: addiu       $v0, $s1, 0x2
    ctx->r2 = ADD32(ctx->r17, 0X2);
    // 0x0022E8CC: j           L_0022E964
    // 0x0022E8D0: subu        $s1, $v1, $v0
    ctx->r17 = SUB32(ctx->r3, ctx->r2);
        goto L_0022E964;
    // 0x0022E8D0: subu        $s1, $v1, $v0
    ctx->r17 = SUB32(ctx->r3, ctx->r2);
L_0022E8D4:
    // 0x0022E8D4: jal         0x002113A4
    // 0x0022E8D8: nop

    func_002113A4(rdram, ctx);
        goto after_5;
    // 0x0022E8D8: nop

    after_5:
    // 0x0022E8DC: lw          $v1, 0x28($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X28);
    // 0x0022E8E0: div         $zero, $v0, $v1
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r3))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r3)));
    // 0x0022E8E4: bne         $v1, $zero, L_0022E8F0
    if (ctx->r3 != 0) {
        // 0x0022E8E8: nop
    
            goto L_0022E8F0;
    }
    // 0x0022E8E8: nop

    // 0x0022E8EC: break       7
    do_break(2287852);
L_0022E8F0:
    // 0x0022E8F0: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x0022E8F4: bne         $v1, $at, L_0022E908
    if (ctx->r3 != ctx->r1) {
        // 0x0022E8F8: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_0022E908;
    }
    // 0x0022E8F8: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x0022E8FC: bne         $v0, $at, L_0022E908
    if (ctx->r2 != ctx->r1) {
        // 0x0022E900: nop
    
            goto L_0022E908;
    }
    // 0x0022E900: nop

    // 0x0022E904: break       6
    do_break(2287876);
L_0022E908:
    // 0x0022E908: mfhi        $s1
    ctx->r17 = hi;
    // 0x0022E90C: j           L_0022E964
    // 0x0022E910: nop

        goto L_0022E964;
    // 0x0022E910: nop

L_0022E914:
    // 0x0022E914: lb          $v1, 0x12B($s2)
    ctx->r3 = MEM_B(ctx->r18, 0X12B);
    // 0x0022E918: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x0022E91C: bne         $v1, $v0, L_0022E960
    if (ctx->r3 != ctx->r2) {
        // 0x0022E920: nop
    
            goto L_0022E960;
    }
    // 0x0022E920: nop

    // 0x0022E924: jal         0x002113A4
    // 0x0022E928: nop

    func_002113A4(rdram, ctx);
        goto after_6;
    // 0x0022E928: nop

    after_6:
    // 0x0022E92C: lw          $v1, 0x28($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X28);
    // 0x0022E930: div         $zero, $v0, $v1
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r3))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r3)));
    // 0x0022E934: bne         $v1, $zero, L_0022E940
    if (ctx->r3 != 0) {
        // 0x0022E938: nop
    
            goto L_0022E940;
    }
    // 0x0022E938: nop

    // 0x0022E93C: break       7
    do_break(2287932);
L_0022E940:
    // 0x0022E940: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x0022E944: bne         $v1, $at, L_0022E958
    if (ctx->r3 != ctx->r1) {
        // 0x0022E948: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_0022E958;
    }
    // 0x0022E948: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x0022E94C: bne         $v0, $at, L_0022E958
    if (ctx->r2 != ctx->r1) {
        // 0x0022E950: nop
    
            goto L_0022E958;
    }
    // 0x0022E950: nop

    // 0x0022E954: break       6
    do_break(2287956);
L_0022E958:
    // 0x0022E958: mfhi        $v1
    ctx->r3 = hi;
    // 0x0022E95C: sb          $v1, 0x12B($s2)
    MEM_B(0X12B, ctx->r18) = ctx->r3;
L_0022E960:
    // 0x0022E960: lb          $s1, 0x12B($s2)
    ctx->r17 = MEM_B(ctx->r18, 0X12B);
L_0022E964:
    // 0x0022E964: lw          $v0, 0x40($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X40);
    // 0x0022E968: lui         $v1, 0x10
    ctx->r3 = S32(0X10 << 16);
    // 0x0022E96C: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x0022E970: bne         $v0, $zero, L_0022EA0C
    if (ctx->r2 != 0) {
        // 0x0022E974: addiu       $a0, $s7, 0x20C
        ctx->r4 = ADD32(ctx->r23, 0X20C);
            goto L_0022EA0C;
    }
    // 0x0022E974: addiu       $a0, $s7, 0x20C
    ctx->r4 = ADD32(ctx->r23, 0X20C);
    // 0x0022E978: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x0022E97C: lw          $v1, -0x6720($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X6720);
    // 0x0022E980: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0022E984: bne         $v1, $v0, L_0022E9D4
    if (ctx->r3 != ctx->r2) {
        // 0x0022E988: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_0022E9D4;
    }
    // 0x0022E988: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x0022E98C: addiu       $a1, $s2, 0x4
    ctx->r5 = ADD32(ctx->r18, 0X4);
    // 0x0022E990: lui         $s0, 0x8012
    ctx->r16 = S32(0X8012 << 16);
    // 0x0022E994: lw          $s0, -0x6730($s0)
    ctx->r16 = MEM_W(ctx->r16, -0X6730);
    // 0x0022E998: addiu       $a2, $sp, 0x58
    ctx->r6 = ADD32(ctx->r29, 0X58);
    // 0x0022E99C: jal         0x0020F85C
    // 0x0022E9A0: addiu       $a0, $s0, 0x20C
    ctx->r4 = ADD32(ctx->r16, 0X20C);
    func_0020F85C(rdram, ctx);
        goto after_7;
    // 0x0022E9A0: addiu       $a0, $s0, 0x20C
    ctx->r4 = ADD32(ctx->r16, 0X20C);
    after_7:
    // 0x0022E9A4: lwc1        $f1, 0x60($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X60);
    // 0x0022E9A8: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x0022E9AC: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x0022E9B0: nop

    // 0x0022E9B4: bc1tl       L_0022E9BC
    if (c1cs) {
        // 0x0022E9B8: neg.s       $f1, $f1
        CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = -ctx->f1.fl;
            goto L_0022E9BC;
    }
    goto skip_15;
    // 0x0022E9B8: neg.s       $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = -ctx->f1.fl;
    skip_15:
L_0022E9BC:
    // 0x0022E9BC: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x0022E9C0: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x0022E9C4: lw          $a1, 0x6D1C($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X6D1C);
    // 0x0022E9C8: mfc1        $a3, $f1
    ctx->r7 = (int32_t)ctx->f_odd[(1 - 1) * 2];
    // 0x0022E9CC: j           L_0022E9E4
    // 0x0022E9D0: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
        goto L_0022E9E4;
    // 0x0022E9D0: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
L_0022E9D4:
    // 0x0022E9D4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x0022E9D8: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x0022E9DC: lw          $a1, 0x6D1C($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X6D1C);
    // 0x0022E9E0: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
L_0022E9E4:
    // 0x0022E9E4: sll         $a1, $a1, 6
    ctx->r5 = S32(ctx->r5 << 6);
    // 0x0022E9E8: addiu       $a1, $a1, 0x48
    ctx->r5 = ADD32(ctx->r5, 0X48);
    // 0x0022E9EC: jal         0x0022D2FC
    // 0x0022E9F0: addu        $a1, $s2, $a1
    ctx->r5 = ADD32(ctx->r18, ctx->r5);
    func_0022D2FC(rdram, ctx);
        goto after_8;
    // 0x0022E9F0: addu        $a1, $s2, $a1
    ctx->r5 = ADD32(ctx->r18, ctx->r5);
    after_8:
    // 0x0022E9F4: lw          $v0, 0x40($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X40);
    // 0x0022E9F8: lui         $v1, 0x10
    ctx->r3 = S32(0X10 << 16);
    // 0x0022E9FC: sb          $s1, 0x12A($s2)
    MEM_B(0X12A, ctx->r18) = ctx->r17;
    // 0x0022EA00: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x0022EA04: sw          $v0, 0x40($s2)
    MEM_W(0X40, ctx->r18) = ctx->r2;
    // 0x0022EA08: addiu       $a0, $s7, 0x20C
    ctx->r4 = ADD32(ctx->r23, 0X20C);
L_0022EA0C:
    // 0x0022EA0C: addiu       $a1, $s2, 0x4
    ctx->r5 = ADD32(ctx->r18, 0X4);
    // 0x0022EA10: jal         0x0020F85C
    // 0x0022EA14: addiu       $a2, $sp, 0x48
    ctx->r6 = ADD32(ctx->r29, 0X48);
    func_0020F85C(rdram, ctx);
        goto after_9;
    // 0x0022EA14: addiu       $a2, $sp, 0x48
    ctx->r6 = ADD32(ctx->r29, 0X48);
    after_9:
    // 0x0022EA18: lwc1        $f20, 0x50($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X50);
    // 0x0022EA1C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x0022EA20: c.lt.s      $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f20.fl < ctx->f0.fl;
    // 0x0022EA24: nop

    // 0x0022EA28: bc1tl       L_0022EA30
    if (c1cs) {
        // 0x0022EA2C: neg.s       $f20, $f20
        CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); 
    ctx->f20.fl = -ctx->f20.fl;
            goto L_0022EA30;
    }
    goto skip_16;
    // 0x0022EA2C: neg.s       $f20, $f20
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); 
    ctx->f20.fl = -ctx->f20.fl;
    skip_16:
L_0022EA30:
    // 0x0022EA30: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x0022EA34: lw          $v1, -0x6720($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X6720);
    // 0x0022EA38: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0022EA3C: bne         $v1, $v0, L_0022EA80
    if (ctx->r3 != ctx->r2) {
        // 0x0022EA40: lui         $a2, 0xDA38
        ctx->r6 = S32(0XDA38 << 16);
            goto L_0022EA80;
    }
    // 0x0022EA40: lui         $a2, 0xDA38
    ctx->r6 = S32(0XDA38 << 16);
    // 0x0022EA44: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x0022EA48: addiu       $a0, $a0, -0x71DC
    ctx->r4 = ADD32(ctx->r4, -0X71DC);
    // 0x0022EA4C: ori         $a2, $a2, 0x3
    ctx->r6 = ctx->r6 | 0X3;
    // 0x0022EA50: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x0022EA54: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0022EA58: lw          $v0, 0x6D1C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X6D1C);
    // 0x0022EA5C: addu        $a1, $v1, $zero
    ctx->r5 = ADD32(ctx->r3, 0);
    // 0x0022EA60: addiu       $v1, $v1, 0x8
    ctx->r3 = ADD32(ctx->r3, 0X8);
    // 0x0022EA64: sll         $v0, $v0, 6
    ctx->r2 = S32(ctx->r2 << 6);
    // 0x0022EA68: addiu       $v0, $v0, 0x48
    ctx->r2 = ADD32(ctx->r2, 0X48);
    // 0x0022EA6C: addu        $v0, $s2, $v0
    ctx->r2 = ADD32(ctx->r18, ctx->r2);
    // 0x0022EA70: sw          $v1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r3;
    // 0x0022EA74: sw          $a2, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r6;
    // 0x0022EA78: j           L_0022EAE0
    // 0x0022EA7C: sw          $v0, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r2;
        goto L_0022EAE0;
    // 0x0022EA7C: sw          $v0, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r2;
L_0022EA80:
    // 0x0022EA80: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x0022EA84: addiu       $a0, $a0, 0x7148
    ctx->r4 = ADD32(ctx->r4, 0X7148);
    // 0x0022EA88: jal         0x00206950
    // 0x0022EA8C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    entry_00206950(rdram, ctx);
        goto after_10;
    // 0x0022EA8C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_10:
    // 0x0022EA90: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x0022EA94: bne         $s0, $zero, L_0022EAA8
    if (ctx->r16 != 0) {
        // 0x0022EA98: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_0022EAA8;
    }
    // 0x0022EA98: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x0022EA9C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0022EAA0: j           L_0022F18C
    // 0x0022EAA4: addu        $a1, $fp, $zero
    ctx->r5 = ADD32(ctx->r30, 0);
        goto L_0022F18C;
    // 0x0022EAA4: addu        $a1, $fp, $zero
    ctx->r5 = ADD32(ctx->r30, 0);
L_0022EAA8:
    // 0x0022EAA8: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x0022EAAC: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x0022EAB0: jal         0x0022D2FC
    // 0x0022EAB4: addu        $a2, $s7, $zero
    ctx->r6 = ADD32(ctx->r23, 0);
    func_0022D2FC(rdram, ctx);
        goto after_11;
    // 0x0022EAB4: addu        $a2, $s7, $zero
    ctx->r6 = ADD32(ctx->r23, 0);
    after_11:
    // 0x0022EAB8: lui         $a1, 0xDA38
    ctx->r5 = S32(0XDA38 << 16);
    // 0x0022EABC: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x0022EAC0: addiu       $a0, $a0, -0x71DC
    ctx->r4 = ADD32(ctx->r4, -0X71DC);
    // 0x0022EAC4: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x0022EAC8: ori         $a1, $a1, 0x3
    ctx->r5 = ctx->r5 | 0X3;
    // 0x0022EACC: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x0022EAD0: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x0022EAD4: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
    // 0x0022EAD8: sw          $a1, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r5;
    // 0x0022EADC: sw          $s0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r16;
L_0022EAE0:
    // 0x0022EAE0: lw          $v1, 0x40($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X40);
    // 0x0022EAE4: lui         $v0, 0x80
    ctx->r2 = S32(0X80 << 16);
    // 0x0022EAE8: and         $v1, $v1, $v0
    ctx->r3 = ctx->r3 & ctx->r2;
    // 0x0022EAEC: sw          $v1, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r3;
    // 0x0022EAF0: lw          $v0, 0x0($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X0);
    // 0x0022EAF4: lw          $v1, 0x30($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X30);
    // 0x0022EAF8: andi        $v0, $v0, 0x100
    ctx->r2 = ctx->r2 & 0X100;
    // 0x0022EAFC: lbu         $v1, 0x2($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X2);
    // 0x0022EB00: beql        $v0, $zero, L_0022EB0C
    if (ctx->r2 == 0) {
        // 0x0022EB04: addiu       $v1, $v1, 0x6
        ctx->r3 = ADD32(ctx->r3, 0X6);
            goto L_0022EB0C;
    }
    goto skip_17;
    // 0x0022EB04: addiu       $v1, $v1, 0x6
    ctx->r3 = ADD32(ctx->r3, 0X6);
    skip_17:
    // 0x0022EB08: addiu       $v1, $v1, 0x7
    ctx->r3 = ADD32(ctx->r3, 0X7);
L_0022EB0C:
    // 0x0022EB0C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0022EB10: sllv        $s5, $v0, $v1
    ctx->r21 = S32(ctx->r2 << (ctx->r3 & 31));
    // 0x0022EB14: lw          $v0, 0x0($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X0);
    // 0x0022EB18: lw          $v1, 0x30($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X30);
    // 0x0022EB1C: andi        $v0, $v0, 0x200
    ctx->r2 = ctx->r2 & 0X200;
    // 0x0022EB20: lbu         $v1, 0x3($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X3);
    // 0x0022EB24: beql        $v0, $zero, L_0022EB30
    if (ctx->r2 == 0) {
        // 0x0022EB28: addiu       $v1, $v1, 0x6
        ctx->r3 = ADD32(ctx->r3, 0X6);
            goto L_0022EB30;
    }
    goto skip_18;
    // 0x0022EB28: addiu       $v1, $v1, 0x6
    ctx->r3 = ADD32(ctx->r3, 0X6);
    skip_18:
    // 0x0022EB2C: addiu       $v1, $v1, 0x7
    ctx->r3 = ADD32(ctx->r3, 0X7);
L_0022EB30:
    // 0x0022EB30: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0022EB34: sllv        $s0, $v0, $v1
    ctx->r16 = S32(ctx->r2 << (ctx->r3 & 31));
    // 0x0022EB38: addiu       $a0, $s2, 0xFC
    ctx->r4 = ADD32(ctx->r18, 0XFC);
    // 0x0022EB3C: addu        $a1, $fp, $zero
    ctx->r5 = ADD32(ctx->r30, 0);
    // 0x0022EB40: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    // 0x0022EB44: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x0022EB48: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0022EB4C: sw          $s5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r21;
    // 0x0022EB50: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x0022EB54: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x0022EB58: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x0022EB5C: jal         0x00206B30
    // 0x0022EB60: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    func_00206B30(rdram, ctx);
        goto after_12;
    // 0x0022EB60: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    after_12:
    // 0x0022EB64: lw          $v0, 0x30($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X30);
    // 0x0022EB68: lbu         $v1, 0x0($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X0);
    // 0x0022EB6C: bltz        $v1, L_0022EB90
    if (SIGNED(ctx->r3) < 0) {
        // 0x0022EB70: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_0022EB90;
    }
    // 0x0022EB70: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x0022EB74: bne         $v0, $zero, L_0022EB88
    if (ctx->r2 != 0) {
        // 0x0022EB78: addiu       $a0, $zero, 0x18
        ctx->r4 = ADD32(0, 0X18);
            goto L_0022EB88;
    }
    // 0x0022EB78: addiu       $a0, $zero, 0x18
    ctx->r4 = ADD32(0, 0X18);
    // 0x0022EB7C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x0022EB80: bne         $v1, $v0, L_0022EB90
    if (ctx->r3 != ctx->r2) {
        // 0x0022EB84: addiu       $a0, $zero, 0x1D
        ctx->r4 = ADD32(0, 0X1D);
            goto L_0022EB90;
    }
    // 0x0022EB84: addiu       $a0, $zero, 0x1D
    ctx->r4 = ADD32(0, 0X1D);
L_0022EB88:
    // 0x0022EB88: jal         0x00207A70
    // 0x0022EB8C: nop

    func_00207A70(rdram, ctx);
        goto after_13;
    // 0x0022EB8C: nop

    after_13:
L_0022EB90:
    // 0x0022EB90: lw          $t1, 0x90($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X90);
    // 0x0022EB94: beq         $t1, $zero, L_0022EBDC
    if (ctx->r9 == 0) {
        // 0x0022EB98: nop
    
            goto L_0022EBDC;
    }
    // 0x0022EB98: nop

    // 0x0022EB9C: jal         0x00207FEC
    // 0x0022EBA0: addiu       $a0, $zero, 0xF
    ctx->r4 = ADD32(0, 0XF);
    func_00207FEC(rdram, ctx);
        goto after_14;
    // 0x0022EBA0: addiu       $a0, $zero, 0xF
    ctx->r4 = ADD32(0, 0XF);
    after_14:
    // 0x0022EBA4: lui         $a1, 0xD7FF
    ctx->r5 = S32(0XD7FF << 16);
    // 0x0022EBA8: lui         $v1, 0x800E
    ctx->r3 = S32(0X800E << 16);
    // 0x0022EBAC: addiu       $v1, $v1, -0x71DC
    ctx->r3 = ADD32(ctx->r3, -0X71DC);
    // 0x0022EBB0: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x0022EBB4: ori         $a1, $a1, 0x2
    ctx->r5 = ctx->r5 | 0X2;
    // 0x0022EBB8: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x0022EBBC: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x0022EBC0: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x0022EBC4: sll         $v0, $s5, 16
    ctx->r2 = S32(ctx->r21 << 16);
    // 0x0022EBC8: andi        $v1, $s0, 0xFFFF
    ctx->r3 = ctx->r16 & 0XFFFF;
    // 0x0022EBCC: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x0022EBD0: sw          $a1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r5;
    // 0x0022EBD4: j           L_0022EC4C
    // 0x0022EBD8: sw          $v0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r2;
        goto L_0022EC4C;
    // 0x0022EBD8: sw          $v0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r2;
L_0022EBDC:
    // 0x0022EBDC: lw          $v0, 0x0($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X0);
    // 0x0022EBE0: andi        $v0, $v0, 0x400
    ctx->r2 = ctx->r2 & 0X400;
    // 0x0022EBE4: beq         $v0, $zero, L_0022EC00
    if (ctx->r2 == 0) {
        // 0x0022EBE8: nop
    
            goto L_0022EC00;
    }
    // 0x0022EBE8: nop

    // 0x0022EBEC: lw          $v0, 0x38($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X38);
    // 0x0022EBF0: lb          $v1, 0xE($v0)
    ctx->r3 = MEM_B(ctx->r2, 0XE);
    // 0x0022EBF4: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x0022EBF8: bne         $v1, $v0, L_0022EC44
    if (ctx->r3 != ctx->r2) {
        // 0x0022EBFC: addiu       $a0, $zero, 0xF
        ctx->r4 = ADD32(0, 0XF);
            goto L_0022EC44;
    }
    // 0x0022EBFC: addiu       $a0, $zero, 0xF
    ctx->r4 = ADD32(0, 0XF);
L_0022EC00:
    // 0x0022EC00: lw          $v0, 0x0($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X0);
    // 0x0022EC04: andi        $v0, $v0, 0x4000
    ctx->r2 = ctx->r2 & 0X4000;
    // 0x0022EC08: beq         $v0, $zero, L_0022EC2C
    if (ctx->r2 == 0) {
        // 0x0022EC0C: nop
    
            goto L_0022EC2C;
    }
    // 0x0022EC0C: nop

    // 0x0022EC10: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x0022EC14: lw          $v0, -0x5528($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X5528);
    // 0x0022EC18: andi        $v0, $v0, 0x200
    ctx->r2 = ctx->r2 & 0X200;
    // 0x0022EC1C: bne         $v0, $zero, L_0022EC44
    if (ctx->r2 != 0) {
        // 0x0022EC20: addiu       $a0, $zero, 0x11
        ctx->r4 = ADD32(0, 0X11);
            goto L_0022EC44;
    }
    // 0x0022EC20: addiu       $a0, $zero, 0x11
    ctx->r4 = ADD32(0, 0X11);
    // 0x0022EC24: j           L_0022EC44
    // 0x0022EC28: addiu       $a0, $zero, 0xD
    ctx->r4 = ADD32(0, 0XD);
        goto L_0022EC44;
    // 0x0022EC28: addiu       $a0, $zero, 0xD
    ctx->r4 = ADD32(0, 0XD);
L_0022EC2C:
    // 0x0022EC2C: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x0022EC30: lw          $v0, -0x5528($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X5528);
    // 0x0022EC34: andi        $v0, $v0, 0x200
    ctx->r2 = ctx->r2 & 0X200;
    // 0x0022EC38: beq         $v0, $zero, L_0022EC44
    if (ctx->r2 == 0) {
        // 0x0022EC3C: addiu       $a0, $zero, 0x13
        ctx->r4 = ADD32(0, 0X13);
            goto L_0022EC44;
    }
    // 0x0022EC3C: addiu       $a0, $zero, 0x13
    ctx->r4 = ADD32(0, 0X13);
    // 0x0022EC40: addiu       $a0, $zero, 0x12
    ctx->r4 = ADD32(0, 0X12);
L_0022EC44:
    // 0x0022EC44: jal         0x00207FEC
    // 0x0022EC48: nop

    func_00207FEC(rdram, ctx);
        goto after_15;
    // 0x0022EC48: nop

    after_15:
L_0022EC4C:
    // 0x0022EC4C: lw          $v0, 0x0($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X0);
    // 0x0022EC50: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x0022EC54: beq         $v0, $zero, L_0022EC90
    if (ctx->r2 == 0) {
        // 0x0022EC58: addiu       $a3, $zero, 0xFF
        ctx->r7 = ADD32(0, 0XFF);
            goto L_0022EC90;
    }
    // 0x0022EC58: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    // 0x0022EC5C: lh          $v1, 0x128($s2)
    ctx->r3 = MEM_H(ctx->r18, 0X128);
    // 0x0022EC60: blez        $v1, L_0022EC90
    if (SIGNED(ctx->r3) <= 0) {
        // 0x0022EC64: subu        $v0, $v1, $s3
        ctx->r2 = SUB32(ctx->r3, ctx->r19);
            goto L_0022EC90;
    }
    // 0x0022EC64: subu        $v0, $v1, $s3
    ctx->r2 = SUB32(ctx->r3, ctx->r19);
    // 0x0022EC68: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0022EC6C: lwc1        $f1, 0x6378($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X6378);
    // 0x0022EC70: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x0022EC74: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x0022EC78: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0022EC7C: mtc1        $v1, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r3;
    // 0x0022EC80: cvt.s.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.fl = CVT_S_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x0022EC84: div.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = DIV_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0022EC88: trunc.w.s   $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x0022EC8C: mfc1        $a3, $f4
    ctx->r7 = (int32_t)ctx->f4.u32l;
L_0022EC90:
    // 0x0022EC90: lw          $a0, 0x38($s4)
    ctx->r4 = MEM_W(ctx->r20, 0X38);
    // 0x0022EC94: lb          $v1, 0x9($a0)
    ctx->r3 = MEM_B(ctx->r4, 0X9);
    // 0x0022EC98: slt         $v0, $s3, $v1
    ctx->r2 = SIGNED(ctx->r19) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x0022EC9C: beq         $v0, $zero, L_0022ECDC
    if (ctx->r2 == 0) {
        // 0x0022ECA0: nop
    
            goto L_0022ECDC;
    }
    // 0x0022ECA0: nop

    // 0x0022ECA4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0022ECA8: lwc1        $f2, 0x637C($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X637C);
    // 0x0022ECAC: mtc1        $s3, $f0
    ctx->f0.u32l = ctx->r19;
    // 0x0022ECB0: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x0022ECB4: add.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f2.fl;
    // 0x0022ECB8: mtc1        $a3, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r7;
    // 0x0022ECBC: cvt.s.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.fl = CVT_S_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x0022ECC0: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x0022ECC4: mtc1        $v1, $f0
    ctx->f0.u32l = ctx->r3;
    // 0x0022ECC8: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x0022ECCC: add.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f2.fl;
    // 0x0022ECD0: div.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = DIV_S(ctx->f1.fl, ctx->f0.fl);
    // 0x0022ECD4: trunc.w.s   $f4, $f1
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 1);
    ctx->f4.u32l = TRUNC_W_S(ctx->f1.fl);
    // 0x0022ECD8: mfc1        $a3, $f4
    ctx->r7 = (int32_t)ctx->f4.u32l;
L_0022ECDC:
    // 0x0022ECDC: lh          $v0, 0x128($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X128);
    // 0x0022ECE0: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x0022ECE4: subu        $v0, $v0, $s3
    ctx->r2 = SUB32(ctx->r2, ctx->r19);
    // 0x0022ECE8: mtc1        $v0, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r2;
    // 0x0022ECEC: cvt.s.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.fl = CVT_S_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x0022ECF0: lb          $v0, 0xA($a0)
    ctx->r2 = MEM_B(ctx->r4, 0XA);
    // 0x0022ECF4: c.lt.s      $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f1.fl < ctx->f2.fl;
    // 0x0022ECF8: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x0022ECFC: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x0022ED00: bc1f        L_0022ED20
    if (!c1cs) {
        // 0x0022ED04: nop
    
            goto L_0022ED20;
    }
    // 0x0022ED04: nop

    // 0x0022ED08: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x0022ED0C: nop

    // 0x0022ED10: bc1f        L_0022ED94
    if (!c1cs) {
        // 0x0022ED14: nop
    
            goto L_0022ED94;
    }
    // 0x0022ED14: nop

    // 0x0022ED18: j           L_0022ED30
    // 0x0022ED1C: nop

        goto L_0022ED30;
    // 0x0022ED1C: nop

L_0022ED20:
    // 0x0022ED20: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x0022ED24: nop

    // 0x0022ED28: bc1f        L_0022ED94
    if (!c1cs) {
        // 0x0022ED2C: nop
    
            goto L_0022ED94;
    }
    // 0x0022ED2C: nop

L_0022ED30:
    // 0x0022ED30: lh          $v0, 0x128($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X128);
    // 0x0022ED34: subu        $v0, $v0, $s3
    ctx->r2 = SUB32(ctx->r2, ctx->r19);
    // 0x0022ED38: mult        $a3, $v0
    result = S64(S32(ctx->r7)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x0022ED3C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x0022ED40: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0022ED44: lwc1        $f1, 0x6380($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X6380);
    // 0x0022ED48: lw          $v0, 0x38($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X38);
    // 0x0022ED4C: mflo        $t1
    ctx->r9 = lo;
    // 0x0022ED50: lb          $v0, 0xA($v0)
    ctx->r2 = MEM_B(ctx->r2, 0XA);
    // 0x0022ED54: mtc1        $t1, $f2
    ctx->f2.u32l = ctx->r9;
    // 0x0022ED58: cvt.s.w     $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    ctx->f2.fl = CVT_S_W(ctx->f2.u32l);
    // 0x0022ED5C: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x0022ED60: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x0022ED64: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x0022ED68: add.s       $f1, $f0, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x0022ED6C: bc1t        L_0022ED90
    if (c1cs) {
        // 0x0022ED70: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_0022ED90;
    }
    // 0x0022ED70: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x0022ED74: trunc.w.s   $f4, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    ctx->f4.u32l = TRUNC_W_S(ctx->f2.fl);
    // 0x0022ED78: mfc1        $v0, $f4
    ctx->r2 = (int32_t)ctx->f4.u32l;
    // 0x0022ED7C: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x0022ED80: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x0022ED84: div.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = DIV_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0022ED88: trunc.w.s   $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x0022ED8C: mfc1        $v0, $f4
    ctx->r2 = (int32_t)ctx->f4.u32l;
L_0022ED90:
    // 0x0022ED90: addu        $a3, $v0, $zero
    ctx->r7 = ADD32(ctx->r2, 0);
L_0022ED94:
    // 0x0022ED94: lw          $v0, 0x38($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X38);
    // 0x0022ED98: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x0022ED9C: lb          $a0, 0x5($v0)
    ctx->r4 = MEM_B(ctx->r2, 0X5);
    // 0x0022EDA0: lwc1        $f2, 0x510($s7)
    ctx->f2.u32l = MEM_W(ctx->r23, 0X510);
    // 0x0022EDA4: beq         $a0, $v1, L_0022EE48
    if (ctx->r4 == ctx->r3) {
        // 0x0022EDA8: slti        $v0, $a0, 0x2
        ctx->r2 = SIGNED(ctx->r4) < 0X2 ? 1 : 0;
            goto L_0022EE48;
    }
    // 0x0022EDA8: slti        $v0, $a0, 0x2
    ctx->r2 = SIGNED(ctx->r4) < 0X2 ? 1 : 0;
    // 0x0022EDAC: beq         $v0, $zero, L_0022EDC4
    if (ctx->r2 == 0) {
        // 0x0022EDB0: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_0022EDC4;
    }
    // 0x0022EDB0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x0022EDB4: beql        $a0, $zero, L_0022EE0C
    if (ctx->r4 == 0) {
        // 0x0022EDB8: sub.s       $f0, $f2, $f20
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f20.fl;
            goto L_0022EE0C;
    }
    goto skip_19;
    // 0x0022EDB8: sub.s       $f0, $f2, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f20.fl;
    skip_19:
    // 0x0022EDBC: j           L_0022EE88
    // 0x0022EDC0: nop

        goto L_0022EE88;
    // 0x0022EDC0: nop

L_0022EDC4:
    // 0x0022EDC4: bne         $a0, $v0, L_0022EE88
    if (ctx->r4 != ctx->r2) {
        // 0x0022EDC8: nop
    
            goto L_0022EE88;
    }
    // 0x0022EDC8: nop

    // 0x0022EDCC: sub.s       $f0, $f2, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f20.fl;
    // 0x0022EDD0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0022EDD4: lwc1        $f1, 0x6384($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X6384);
    // 0x0022EDD8: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0022EDDC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0022EDE0: lwc1        $f1, 0x6388($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X6388);
    // 0x0022EDE4: div.s       $f2, $f0, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = DIV_S(ctx->f0.fl, ctx->f2.fl);
    // 0x0022EDE8: mtc1        $a3, $f0
    ctx->f0.u32l = ctx->r7;
    // 0x0022EDEC: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x0022EDF0: c.lt.s      $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f1.fl < ctx->f2.fl;
    // 0x0022EDF4: nop

    // 0x0022EDF8: bc1t        L_0022EE80
    if (c1cs) {
        // 0x0022EDFC: nop
    
            goto L_0022EE80;
    }
    // 0x0022EDFC: nop

    // 0x0022EE00: mul.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f2.fl);
    // 0x0022EE04: j           L_0022EE80
    // 0x0022EE08: nop

        goto L_0022EE80;
    // 0x0022EE08: nop

L_0022EE0C:
    // 0x0022EE0C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0022EE10: lwc1        $f1, 0x638C($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X638C);
    // 0x0022EE14: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0022EE18: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0022EE1C: lwc1        $f1, 0x6390($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X6390);
    // 0x0022EE20: div.s       $f2, $f0, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = DIV_S(ctx->f0.fl, ctx->f2.fl);
    // 0x0022EE24: mtc1        $a3, $f0
    ctx->f0.u32l = ctx->r7;
    // 0x0022EE28: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x0022EE2C: c.lt.s      $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f1.fl < ctx->f2.fl;
    // 0x0022EE30: nop

    // 0x0022EE34: bc1t        L_0022EE80
    if (c1cs) {
        // 0x0022EE38: nop
    
            goto L_0022EE80;
    }
    // 0x0022EE38: nop

    // 0x0022EE3C: mul.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f2.fl);
    // 0x0022EE40: j           L_0022EE80
    // 0x0022EE44: nop

        goto L_0022EE80;
    // 0x0022EE44: nop

L_0022EE48:
    // 0x0022EE48: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0022EE4C: lwc1        $f0, 0x6394($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6394);
    // 0x0022EE50: mul.s       $f3, $f2, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f3.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x0022EE54: sub.s       $f2, $f3, $f20
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f2.fl = ctx->f3.fl - ctx->f20.fl;
    // 0x0022EE58: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x0022EE5C: mtc1        $a3, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r7;
    // 0x0022EE60: cvt.s.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.fl = CVT_S_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x0022EE64: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x0022EE68: nop

    // 0x0022EE6C: bc1fl       L_0022EE78
    if (!c1cs) {
        // 0x0022EE70: sub.s       $f0, $f3, $f2
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f3.fl - ctx->f2.fl;
            goto L_0022EE78;
    }
    goto skip_20;
    // 0x0022EE70: sub.s       $f0, $f3, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f3.fl - ctx->f2.fl;
    skip_20:
    // 0x0022EE74: add.s       $f0, $f3, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f3.fl + ctx->f2.fl;
L_0022EE78:
    // 0x0022EE78: mul.s       $f0, $f1, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x0022EE7C: div.s       $f0, $f0, $f3
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f0.fl = DIV_S(ctx->f0.fl, ctx->f3.fl);
L_0022EE80:
    // 0x0022EE80: trunc.w.s   $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x0022EE84: mfc1        $a3, $f4
    ctx->r7 = (int32_t)ctx->f4.u32l;
L_0022EE88:
    // 0x0022EE88: lw          $v0, 0x30($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X30);
    // 0x0022EE8C: lbu         $v1, 0x0($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X0);
    // 0x0022EE90: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x0022EE94: bnel        $v1, $v0, L_0022EF78
    if (ctx->r3 != ctx->r2) {
        // 0x0022EE98: slti        $v1, $a3, 0x100
        ctx->r3 = SIGNED(ctx->r7) < 0X100 ? 1 : 0;
            goto L_0022EF78;
    }
    goto skip_21;
    // 0x0022EE98: slti        $v1, $a3, 0x100
    ctx->r3 = SIGNED(ctx->r7) < 0X100 ? 1 : 0;
    skip_21:
    // 0x0022EE9C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0022EEA0: beq         $s6, $v0, L_0022EF2C
    if (ctx->r22 == ctx->r2) {
        // 0x0022EEA4: slti        $v0, $s6, 0x2
        ctx->r2 = SIGNED(ctx->r22) < 0X2 ? 1 : 0;
            goto L_0022EF2C;
    }
    // 0x0022EEA4: slti        $v0, $s6, 0x2
    ctx->r2 = SIGNED(ctx->r22) < 0X2 ? 1 : 0;
    // 0x0022EEA8: bne         $v0, $zero, L_0022EEB8
    if (ctx->r2 != 0) {
        // 0x0022EEAC: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_0022EEB8;
    }
    // 0x0022EEAC: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x0022EEB0: beq         $s6, $v0, L_0022EEE8
    if (ctx->r22 == ctx->r2) {
        // 0x0022EEB4: lui         $v0, 0xFB00
        ctx->r2 = S32(0XFB00 << 16);
            goto L_0022EEE8;
    }
    // 0x0022EEB4: lui         $v0, 0xFB00
    ctx->r2 = S32(0XFB00 << 16);
L_0022EEB8:
    // 0x0022EEB8: lui         $v1, 0x800E
    ctx->r3 = S32(0X800E << 16);
    // 0x0022EEBC: addiu       $v1, $v1, -0x71DC
    ctx->r3 = ADD32(ctx->r3, -0X71DC);
    // 0x0022EEC0: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x0022EEC4: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x0022EEC8: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x0022EECC: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x0022EED0: lui         $v0, 0xFB00
    ctx->r2 = S32(0XFB00 << 16);
    // 0x0022EED4: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
    // 0x0022EED8: lbu         $v0, 0x38($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0X38);
    // 0x0022EEDC: lbu         $a0, 0x39($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X39);
    // 0x0022EEE0: j           L_0022EF54
    // 0x0022EEE4: nop

        goto L_0022EF54;
    // 0x0022EEE4: nop

L_0022EEE8:
    // 0x0022EEE8: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x0022EEEC: addiu       $a1, $a1, -0x71DC
    ctx->r5 = ADD32(ctx->r5, -0X71DC);
    // 0x0022EEF0: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x0022EEF4: addu        $a2, $v1, $zero
    ctx->r6 = ADD32(ctx->r3, 0);
    // 0x0022EEF8: sw          $v0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r2;
    // 0x0022EEFC: lbu         $a0, 0x38($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X38);
    // 0x0022EF00: addiu       $v1, $v1, 0x8
    ctx->r3 = ADD32(ctx->r3, 0X8);
    // 0x0022EF04: sw          $v1, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r3;
    // 0x0022EF08: lbu         $v1, 0x3A($sp)
    ctx->r3 = MEM_BU(ctx->r29, 0X3A);
    // 0x0022EF0C: sll         $v0, $a0, 24
    ctx->r2 = S32(ctx->r4 << 24);
    // 0x0022EF10: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x0022EF14: or          $v0, $v0, $a0
    ctx->r2 = ctx->r2 | ctx->r4;
    // 0x0022EF18: sll         $v1, $v1, 8
    ctx->r3 = S32(ctx->r3 << 8);
    // 0x0022EF1C: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x0022EF20: ori         $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 | 0XFF;
    // 0x0022EF24: j           L_0022EF74
    // 0x0022EF28: sw          $v0, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r2;
        goto L_0022EF74;
    // 0x0022EF28: sw          $v0, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r2;
L_0022EF2C:
    // 0x0022EF2C: lui         $v1, 0x800E
    ctx->r3 = S32(0X800E << 16);
    // 0x0022EF30: addiu       $v1, $v1, -0x71DC
    ctx->r3 = ADD32(ctx->r3, -0X71DC);
    // 0x0022EF34: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x0022EF38: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x0022EF3C: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x0022EF40: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x0022EF44: lui         $v0, 0xFB00
    ctx->r2 = S32(0XFB00 << 16);
    // 0x0022EF48: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
    // 0x0022EF4C: lbu         $v0, 0x39($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0X39);
    // 0x0022EF50: lbu         $a0, 0x38($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X38);
L_0022EF54:
    // 0x0022EF54: lbu         $v1, 0x3A($sp)
    ctx->r3 = MEM_BU(ctx->r29, 0X3A);
    // 0x0022EF58: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x0022EF5C: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x0022EF60: or          $v0, $v0, $a0
    ctx->r2 = ctx->r2 | ctx->r4;
    // 0x0022EF64: sll         $v1, $v1, 8
    ctx->r3 = S32(ctx->r3 << 8);
    // 0x0022EF68: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x0022EF6C: ori         $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 | 0XFF;
    // 0x0022EF70: sw          $v0, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r2;
L_0022EF74:
    // 0x0022EF74: slti        $v1, $a3, 0x100
    ctx->r3 = SIGNED(ctx->r7) < 0X100 ? 1 : 0;
L_0022EF78:
    // 0x0022EF78: beq         $v1, $zero, L_0022EF88
    if (ctx->r3 == 0) {
        // 0x0022EF7C: nop
    
            goto L_0022EF88;
    }
    // 0x0022EF7C: nop

    // 0x0022EF80: bltz        $a3, L_0022EF94
    if (SIGNED(ctx->r7) < 0) {
        // 0x0022EF84: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_0022EF94;
    }
    // 0x0022EF84: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_0022EF88:
    // 0x0022EF88: beq         $v1, $zero, L_0022EF94
    if (ctx->r3 == 0) {
        // 0x0022EF8C: addiu       $v0, $zero, 0xFF
        ctx->r2 = ADD32(0, 0XFF);
            goto L_0022EF94;
    }
    // 0x0022EF8C: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x0022EF90: addu        $v0, $a3, $zero
    ctx->r2 = ADD32(ctx->r7, 0);
L_0022EF94:
    // 0x0022EF94: addu        $a3, $v0, $zero
    ctx->r7 = ADD32(ctx->r2, 0);
    // 0x0022EF98: lui         $v0, 0x100
    ctx->r2 = S32(0X100 << 16);
    // 0x0022EF9C: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x0022EFA0: addiu       $a1, $a1, -0x71DC
    ctx->r5 = ADD32(ctx->r5, -0X71DC);
    // 0x0022EFA4: lw          $a0, 0x0($a1)
    ctx->r4 = MEM_W(ctx->r5, 0X0);
    // 0x0022EFA8: ori         $v0, $v0, 0x4008
    ctx->r2 = ctx->r2 | 0X4008;
    // 0x0022EFAC: addu        $v1, $a0, $zero
    ctx->r3 = ADD32(ctx->r4, 0);
    // 0x0022EFB0: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x0022EFB4: sw          $a0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r4;
    // 0x0022EFB8: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x0022EFBC: lui         $v0, 0x800F
    ctx->r2 = S32(0X800F << 16);
    // 0x0022EFC0: addiu       $v0, $v0, 0x1930
    ctx->r2 = ADD32(ctx->r2, 0X1930);
    // 0x0022EFC4: sw          $v0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r2;
    // 0x0022EFC8: lw          $t1, 0x90($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X90);
    // 0x0022EFCC: beq         $t1, $zero, L_0022EFF4
    if (ctx->r9 == 0) {
        // 0x0022EFD0: lui         $v1, 0xD7FF
        ctx->r3 = S32(0XD7FF << 16);
            goto L_0022EFF4;
    }
    // 0x0022EFD0: lui         $v1, 0xD7FF
    ctx->r3 = S32(0XD7FF << 16);
    // 0x0022EFD4: ori         $v1, $v1, 0x2
    ctx->r3 = ctx->r3 | 0X2;
    // 0x0022EFD8: addiu       $v0, $a0, 0x8
    ctx->r2 = ADD32(ctx->r4, 0X8);
    // 0x0022EFDC: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
    // 0x0022EFE0: sll         $v0, $s5, 16
    ctx->r2 = S32(ctx->r21 << 16);
    // 0x0022EFE4: sw          $v1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r3;
    // 0x0022EFE8: andi        $v1, $s0, 0xFFFF
    ctx->r3 = ctx->r16 & 0XFFFF;
    // 0x0022EFEC: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x0022EFF0: sw          $v0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r2;
L_0022EFF4:
    // 0x0022EFF4: lbu         $v0, 0x1B4($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X1B4);
    // 0x0022EFF8: mult        $a3, $v0
    result = S64(S32(ctx->r7)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x0022EFFC: mflo        $t1
    ctx->r9 = lo;
    // 0x0022F000: sra         $v0, $t1, 8
    ctx->r2 = S32(SIGNED(ctx->r9) >> 8);
    // 0x0022F004: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x0022F008: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x0022F00C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0022F010: beq         $s6, $v0, L_0022F0D8
    if (ctx->r22 == ctx->r2) {
        // 0x0022F014: swc1        $f0, 0x174($s2)
        MEM_W(0X174, ctx->r18) = ctx->f0.u32l;
            goto L_0022F0D8;
    }
    // 0x0022F014: swc1        $f0, 0x174($s2)
    MEM_W(0X174, ctx->r18) = ctx->f0.u32l;
    // 0x0022F018: slti        $v0, $s6, 0x2
    ctx->r2 = SIGNED(ctx->r22) < 0X2 ? 1 : 0;
    // 0x0022F01C: bne         $v0, $zero, L_0022F02C
    if (ctx->r2 != 0) {
        // 0x0022F020: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_0022F02C;
    }
    // 0x0022F020: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x0022F024: beq         $s6, $v0, L_0022F088
    if (ctx->r22 == ctx->r2) {
        // 0x0022F028: nop
    
            goto L_0022F088;
    }
    // 0x0022F028: nop

L_0022F02C:
    // 0x0022F02C: lw          $a2, 0x0($a1)
    ctx->r6 = MEM_W(ctx->r5, 0X0);
    // 0x0022F030: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0022F034: lwc1        $f1, 0x6398($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X6398);
    // 0x0022F038: lui         $v0, 0xFA00
    ctx->r2 = S32(0XFA00 << 16);
    // 0x0022F03C: sw          $v0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r2;
    // 0x0022F040: lwc1        $f0, 0x174($s2)
    ctx->f0.u32l = MEM_W(ctx->r18, 0X174);
    // 0x0022F044: addiu       $v0, $a2, 0x8
    ctx->r2 = ADD32(ctx->r6, 0X8);
    // 0x0022F048: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
    // 0x0022F04C: lbu         $a0, 0x40($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X40);
    // 0x0022F050: lbu         $v1, 0x41($sp)
    ctx->r3 = MEM_BU(ctx->r29, 0X41);
    // 0x0022F054: lbu         $v0, 0x42($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0X42);
    // 0x0022F058: sll         $a0, $a0, 24
    ctx->r4 = S32(ctx->r4 << 24);
    // 0x0022F05C: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x0022F060: or          $a0, $a0, $v1
    ctx->r4 = ctx->r4 | ctx->r3;
    // 0x0022F064: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x0022F068: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x0022F06C: nop

    // 0x0022F070: bc1t        L_0022F134
    if (c1cs) {
        // 0x0022F074: or          $v1, $a0, $v0
        ctx->r3 = ctx->r4 | ctx->r2;
            goto L_0022F134;
    }
    // 0x0022F074: or          $v1, $a0, $v0
    ctx->r3 = ctx->r4 | ctx->r2;
    // 0x0022F078: trunc.w.s   $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x0022F07C: mfc1        $a0, $f4
    ctx->r4 = (int32_t)ctx->f4.u32l;
    // 0x0022F080: j           L_0022F14C
    // 0x0022F084: andi        $v0, $a0, 0xFF
    ctx->r2 = ctx->r4 & 0XFF;
        goto L_0022F14C;
    // 0x0022F084: andi        $v0, $a0, 0xFF
    ctx->r2 = ctx->r4 & 0XFF;
L_0022F088:
    // 0x0022F088: lw          $a2, 0x0($a1)
    ctx->r6 = MEM_W(ctx->r5, 0X0);
    // 0x0022F08C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0022F090: lwc1        $f1, 0x639C($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X639C);
    // 0x0022F094: addiu       $v0, $a2, 0x8
    ctx->r2 = ADD32(ctx->r6, 0X8);
    // 0x0022F098: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
    // 0x0022F09C: lui         $v0, 0xFA00
    ctx->r2 = S32(0XFA00 << 16);
    // 0x0022F0A0: sw          $v0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r2;
    // 0x0022F0A4: lwc1        $f0, 0x174($s2)
    ctx->f0.u32l = MEM_W(ctx->r18, 0X174);
    // 0x0022F0A8: lbu         $v1, 0x40($sp)
    ctx->r3 = MEM_BU(ctx->r29, 0X40);
    // 0x0022F0AC: lbu         $v0, 0x42($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0X42);
    // 0x0022F0B0: sll         $a0, $v1, 24
    ctx->r4 = S32(ctx->r3 << 24);
    // 0x0022F0B4: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x0022F0B8: or          $a0, $a0, $v1
    ctx->r4 = ctx->r4 | ctx->r3;
    // 0x0022F0BC: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x0022F0C0: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x0022F0C4: nop

    // 0x0022F0C8: bc1f        L_0022F124
    if (!c1cs) {
        // 0x0022F0CC: or          $v1, $a0, $v0
        ctx->r3 = ctx->r4 | ctx->r2;
            goto L_0022F124;
    }
    // 0x0022F0CC: or          $v1, $a0, $v0
    ctx->r3 = ctx->r4 | ctx->r2;
    // 0x0022F0D0: j           L_0022F138
    // 0x0022F0D4: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
        goto L_0022F138;
    // 0x0022F0D4: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
L_0022F0D8:
    // 0x0022F0D8: lw          $a2, 0x0($a1)
    ctx->r6 = MEM_W(ctx->r5, 0X0);
    // 0x0022F0DC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0022F0E0: lwc1        $f1, 0x63A0($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X63A0);
    // 0x0022F0E4: lui         $v0, 0xFA00
    ctx->r2 = S32(0XFA00 << 16);
    // 0x0022F0E8: sw          $v0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r2;
    // 0x0022F0EC: lwc1        $f0, 0x174($s2)
    ctx->f0.u32l = MEM_W(ctx->r18, 0X174);
    // 0x0022F0F0: addiu       $v0, $a2, 0x8
    ctx->r2 = ADD32(ctx->r6, 0X8);
    // 0x0022F0F4: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
    // 0x0022F0F8: lbu         $a0, 0x41($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X41);
    // 0x0022F0FC: lbu         $v1, 0x40($sp)
    ctx->r3 = MEM_BU(ctx->r29, 0X40);
    // 0x0022F100: lbu         $v0, 0x42($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0X42);
    // 0x0022F104: sll         $a0, $a0, 24
    ctx->r4 = S32(ctx->r4 << 24);
    // 0x0022F108: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x0022F10C: or          $a0, $a0, $v1
    ctx->r4 = ctx->r4 | ctx->r3;
    // 0x0022F110: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x0022F114: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x0022F118: nop

    // 0x0022F11C: bc1t        L_0022F134
    if (c1cs) {
        // 0x0022F120: or          $v1, $a0, $v0
        ctx->r3 = ctx->r4 | ctx->r2;
            goto L_0022F134;
    }
    // 0x0022F120: or          $v1, $a0, $v0
    ctx->r3 = ctx->r4 | ctx->r2;
L_0022F124:
    // 0x0022F124: trunc.w.s   $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x0022F128: mfc1        $a0, $f4
    ctx->r4 = (int32_t)ctx->f4.u32l;
    // 0x0022F12C: j           L_0022F14C
    // 0x0022F130: andi        $v0, $a0, 0xFF
    ctx->r2 = ctx->r4 & 0XFF;
        goto L_0022F14C;
    // 0x0022F130: andi        $v0, $a0, 0xFF
    ctx->r2 = ctx->r4 & 0XFF;
L_0022F134:
    // 0x0022F134: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
L_0022F138:
    // 0x0022F138: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x0022F13C: trunc.w.s   $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x0022F140: mfc1        $a0, $f4
    ctx->r4 = (int32_t)ctx->f4.u32l;
    // 0x0022F144: or          $a0, $a0, $v0
    ctx->r4 = ctx->r4 | ctx->r2;
    // 0x0022F148: andi        $v0, $a0, 0xFF
    ctx->r2 = ctx->r4 & 0XFF;
L_0022F14C:
    // 0x0022F14C: or          $v0, $v1, $v0
    ctx->r2 = ctx->r3 | ctx->r2;
    // 0x0022F150: sw          $v0, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r2;
    // 0x0022F154: lui         $t0, 0x600
    ctx->r8 = S32(0X600 << 16);
    // 0x0022F158: ori         $t0, $t0, 0x204
    ctx->r8 = ctx->r8 | 0X204;
    // 0x0022F15C: lui         $a3, 0x4
    ctx->r7 = S32(0X4 << 16);
    // 0x0022F160: ori         $a3, $a3, 0x600
    ctx->r7 = ctx->r7 | 0X600;
    // 0x0022F164: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0022F168: lui         $a2, 0x800E
    ctx->r6 = S32(0X800E << 16);
    // 0x0022F16C: addiu       $a2, $a2, -0x71DC
    ctx->r6 = ADD32(ctx->r6, -0X71DC);
    // 0x0022F170: lw          $v0, 0x0($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X0);
    // 0x0022F174: addu        $a1, $fp, $zero
    ctx->r5 = ADD32(ctx->r30, 0);
    // 0x0022F178: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x0022F17C: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x0022F180: sw          $v0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r2;
    // 0x0022F184: sw          $t0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r8;
    // 0x0022F188: sw          $a3, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r7;
L_0022F18C:
    // 0x0022F18C: jal         0x002051F4
    // 0x0022F190: nop

    func_002051F4(rdram, ctx);
        goto after_16;
    // 0x0022F190: nop

    after_16:
L_0022F194:
    // 0x0022F194: lw          $ra, 0xBC($sp)
    ctx->r31 = MEM_W(ctx->r29, 0XBC);
    // 0x0022F198: lw          $fp, 0xB8($sp)
    ctx->r30 = MEM_W(ctx->r29, 0XB8);
    // 0x0022F19C: lw          $s7, 0xB4($sp)
    ctx->r23 = MEM_W(ctx->r29, 0XB4);
    // 0x0022F1A0: lw          $s6, 0xB0($sp)
    ctx->r22 = MEM_W(ctx->r29, 0XB0);
    // 0x0022F1A4: lw          $s5, 0xAC($sp)
    ctx->r21 = MEM_W(ctx->r29, 0XAC);
    // 0x0022F1A8: lw          $s4, 0xA8($sp)
    ctx->r20 = MEM_W(ctx->r29, 0XA8);
    // 0x0022F1AC: lw          $s3, 0xA4($sp)
    ctx->r19 = MEM_W(ctx->r29, 0XA4);
    // 0x0022F1B0: lw          $s2, 0xA0($sp)
    ctx->r18 = MEM_W(ctx->r29, 0XA0);
    // 0x0022F1B4: lw          $s1, 0x9C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X9C);
    // 0x0022F1B8: lw          $s0, 0x98($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X98);
    // 0x0022F1BC: ldc1        $f20, 0xC0($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0XC0);
    // 0x0022F1C0: jr          $ra
    // 0x0022F1C4: addiu       $sp, $sp, 0xC8
    ctx->r29 = ADD32(ctx->r29, 0XC8);
    return;
    // 0x0022F1C4: addiu       $sp, $sp, 0xC8
    ctx->r29 = ADD32(ctx->r29, 0XC8);
;}
RECOMP_FUNC void func_004021C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004021C8: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x004021CC: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x004021D0: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x004021D4: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x004021D8: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x004021DC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x004021E0: addiu       $s0, $zero, 0x8
    ctx->r16 = ADD32(0, 0X8);
    // 0x004021E4: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x004021E8: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x004021EC: lw          $s3, 0x0($s2)
    ctx->r19 = MEM_W(ctx->r18, 0X0);
L_004021F0:
    // 0x004021F0: addu        $a0, $s2, $s0
    ctx->r4 = ADD32(ctx->r18, ctx->r16);
    // 0x004021F4: jal         0x00235510
    // 0x004021F8: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    func_00235510(rdram, ctx);
        goto after_0;
    // 0x004021F8: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    after_0:
    // 0x004021FC: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x00402200: slti        $v0, $s1, 0x5
    ctx->r2 = SIGNED(ctx->r17) < 0X5 ? 1 : 0;
    // 0x00402204: bne         $v0, $zero, L_004021F0
    if (ctx->r2 != 0) {
        // 0x00402208: addiu       $s0, $s0, 0x68
        ctx->r16 = ADD32(ctx->r16, 0X68);
            goto L_004021F0;
    }
    // 0x00402208: addiu       $s0, $s0, 0x68
    ctx->r16 = ADD32(ctx->r16, 0X68);
    // 0x0040220C: jal         0x00284188
    // 0x00402210: nop

    func_00284188(rdram, ctx);
        goto after_1;
    // 0x00402210: nop

    after_1:
    // 0x00402214: bne         $v0, $zero, L_004023E8
    if (ctx->r2 != 0) {
        // 0x00402218: nop
    
            goto L_004023E8;
    }
    // 0x00402218: nop

    // 0x0040221C: lb          $v0, 0x174($s3)
    ctx->r2 = MEM_B(ctx->r19, 0X174);
    // 0x00402220: slti        $v0, $v0, 0x2
    ctx->r2 = SIGNED(ctx->r2) < 0X2 ? 1 : 0;
    // 0x00402224: bne         $v0, $zero, L_004023E8
    if (ctx->r2 != 0) {
        // 0x00402228: addu        $a1, $zero, $zero
        ctx->r5 = ADD32(0, 0);
            goto L_004023E8;
    }
    // 0x00402228: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x0040222C: lw          $v0, 0x244($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X244);
    // 0x00402230: blez        $v0, L_00402264
    if (SIGNED(ctx->r2) <= 0) {
        // 0x00402234: addu        $a0, $a1, $zero
        ctx->r4 = ADD32(ctx->r5, 0);
            goto L_00402264;
    }
    // 0x00402234: addu        $a0, $a1, $zero
    ctx->r4 = ADD32(ctx->r5, 0);
    // 0x00402238: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x0040223C: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    // 0x00402240: addu        $v1, $s2, $zero
    ctx->r3 = ADD32(ctx->r18, 0);
L_00402244:
    // 0x00402244: lw          $v0, 0x224($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X224);
    // 0x00402248: lb          $v0, 0x174($v0)
    ctx->r2 = MEM_B(ctx->r2, 0X174);
    // 0x0040224C: beql        $v0, $a3, L_00402254
    if (ctx->r2 == ctx->r7) {
        // 0x00402250: addiu       $a0, $a0, 0x1
        ctx->r4 = ADD32(ctx->r4, 0X1);
            goto L_00402254;
    }
    goto skip_0;
    // 0x00402250: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    skip_0:
L_00402254:
    // 0x00402254: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x00402258: slt         $v0, $a1, $a2
    ctx->r2 = SIGNED(ctx->r5) < SIGNED(ctx->r6) ? 1 : 0;
    // 0x0040225C: bne         $v0, $zero, L_00402244
    if (ctx->r2 != 0) {
        // 0x00402260: addiu       $v1, $v1, 0x4
        ctx->r3 = ADD32(ctx->r3, 0X4);
            goto L_00402244;
    }
    // 0x00402260: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
L_00402264:
    // 0x00402264: lui         $v1, 0x8011
    ctx->r3 = S32(0X8011 << 16);
    // 0x00402268: lw          $v1, -0x14C($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X14C);
    // 0x0040226C: beq         $v1, $zero, L_0040228C
    if (ctx->r3 == 0) {
        // 0x00402270: nop
    
            goto L_0040228C;
    }
    // 0x00402270: nop

L_00402274:
    // 0x00402274: lw          $v0, 0x144($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X144);
    // 0x00402278: bgtzl       $v0, L_00402280
    if (SIGNED(ctx->r2) > 0) {
        // 0x0040227C: addiu       $a0, $a0, 0x1
        ctx->r4 = ADD32(ctx->r4, 0X1);
            goto L_00402280;
    }
    goto skip_1;
    // 0x0040227C: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    skip_1:
L_00402280:
    // 0x00402280: lw          $v1, 0x28C($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X28C);
    // 0x00402284: bne         $v1, $zero, L_00402274
    if (ctx->r3 != 0) {
        // 0x00402288: nop
    
            goto L_00402274;
    }
    // 0x00402288: nop

L_0040228C:
    // 0x0040228C: lw          $v0, 0x218($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X218);
    // 0x00402290: beq         $v0, $zero, L_004022A4
    if (ctx->r2 == 0) {
        // 0x00402294: sw          $a0, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r4;
            goto L_004022A4;
    }
    // 0x00402294: sw          $a0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r4;
    // 0x00402298: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x0040229C: jal         0x00401FCC
    // 0x004022A0: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    func_00401FCC(rdram, ctx);
        goto after_2;
    // 0x004022A0: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    after_2:
L_004022A4:
    // 0x004022A4: lw          $v0, 0x250($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X250);
    // 0x004022A8: beq         $v0, $zero, L_00402348
    if (ctx->r2 == 0) {
        // 0x004022AC: nop
    
            goto L_00402348;
    }
    // 0x004022AC: nop

    // 0x004022B0: lw          $v0, 0x218($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X218);
    // 0x004022B4: lw          $v1, 0x10($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X10);
    // 0x004022B8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x004022BC: bgtz        $v0, L_00402348
    if (SIGNED(ctx->r2) > 0) {
        // 0x004022C0: nop
    
            goto L_00402348;
    }
    // 0x004022C0: nop

    // 0x004022C4: lw          $v0, 0x214($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X214);
    // 0x004022C8: addiu       $v0, $v0, 0x20
    ctx->r2 = ADD32(ctx->r2, 0X20);
    // 0x004022CC: sw          $v0, 0x214($s2)
    MEM_W(0X214, ctx->r18) = ctx->r2;
    // 0x004022D0: lw          $v0, 0x210($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X210);
    // 0x004022D4: lw          $a0, 0x214($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X214);
    // 0x004022D8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x004022DC: sw          $v0, 0x210($s2)
    MEM_W(0X210, ctx->r18) = ctx->r2;
    // 0x004022E0: lw          $v0, 0x218($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X218);
    // 0x004022E4: lw          $v1, 0x4($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X4);
    // 0x004022E8: sw          $zero, 0x21C($s2)
    MEM_W(0X21C, ctx->r18) = 0;
    // 0x004022EC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x004022F0: sw          $v0, 0x218($s2)
    MEM_W(0X218, ctx->r18) = ctx->r2;
    // 0x004022F4: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x004022F8: beql        $v0, $zero, L_00402318
    if (ctx->r2 == 0) {
        // 0x004022FC: sw          $zero, 0x250($s2)
        MEM_W(0X250, ctx->r18) = 0;
            goto L_00402318;
    }
    goto skip_2;
    // 0x004022FC: sw          $zero, 0x250($s2)
    MEM_W(0X250, ctx->r18) = 0;
    skip_2:
    // 0x00402300: lw          $v0, 0x4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X4);
    // 0x00402304: beq         $v0, $zero, L_00402314
    if (ctx->r2 == 0) {
        // 0x00402308: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_00402314;
    }
    // 0x00402308: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0040230C: j           L_00402318
    // 0x00402310: sw          $v0, 0x250($s2)
    MEM_W(0X250, ctx->r18) = ctx->r2;
        goto L_00402318;
    // 0x00402310: sw          $v0, 0x250($s2)
    MEM_W(0X250, ctx->r18) = ctx->r2;
L_00402314:
    // 0x00402314: sw          $zero, 0x250($s2)
    MEM_W(0X250, ctx->r18) = 0;
L_00402318:
    // 0x00402318: lw          $v1, 0x210($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X210);
    // 0x0040231C: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x00402320: bne         $v1, $v0, L_00402334
    if (ctx->r3 != ctx->r2) {
        // 0x00402324: addiu       $v0, $zero, 0x8
        ctx->r2 = ADD32(0, 0X8);
            goto L_00402334;
    }
    // 0x00402324: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x00402328: lw          $a0, 0x0($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X0);
    // 0x0040232C: j           L_00402340
    // 0x00402330: addiu       $a2, $zero, 0xE
    ctx->r6 = ADD32(0, 0XE);
        goto L_00402340;
    // 0x00402330: addiu       $a2, $zero, 0xE
    ctx->r6 = ADD32(0, 0XE);
L_00402334:
    // 0x00402334: bne         $v1, $v0, L_00402348
    if (ctx->r3 != ctx->r2) {
        // 0x00402338: addiu       $a2, $zero, 0x10
        ctx->r6 = ADD32(0, 0X10);
            goto L_00402348;
    }
    // 0x00402338: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x0040233C: lw          $a0, 0x0($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X0);
L_00402340:
    // 0x00402340: jal         0x00243414
    // 0x00402344: addiu       $a1, $a0, 0x140
    ctx->r5 = ADD32(ctx->r4, 0X140);
    func_00243414(rdram, ctx);
        goto after_3;
    // 0x00402344: addiu       $a1, $a0, 0x140
    ctx->r5 = ADD32(ctx->r4, 0X140);
    after_3:
L_00402348:
    // 0x00402348: lw          $a0, 0x220($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X220);
    // 0x0040234C: lui         $v0, 0xEFFF
    ctx->r2 = S32(0XEFFF << 16);
    // 0x00402350: lw          $v1, 0xD4($a0)
    ctx->r3 = MEM_W(ctx->r4, 0XD4);
    // 0x00402354: ori         $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 | 0XFFFF;
    // 0x00402358: and         $v1, $v1, $v0
    ctx->r3 = ctx->r3 & ctx->r2;
    // 0x0040235C: sw          $v1, 0xD4($a0)
    MEM_W(0XD4, ctx->r4) = ctx->r3;
    // 0x00402360: lw          $v1, 0x24C($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X24C);
    // 0x00402364: addiu       $v0, $zero, 0x5AB4
    ctx->r2 = ADD32(0, 0X5AB4);
    // 0x00402368: beq         $v1, $v0, L_00402398
    if (ctx->r3 == ctx->r2) {
        // 0x0040236C: slti        $v0, $v1, 0x5AB5
        ctx->r2 = SIGNED(ctx->r3) < 0X5AB5 ? 1 : 0;
            goto L_00402398;
    }
    // 0x0040236C: slti        $v0, $v1, 0x5AB5
    ctx->r2 = SIGNED(ctx->r3) < 0X5AB5 ? 1 : 0;
    // 0x00402370: bne         $v0, $zero, L_00402398
    if (ctx->r2 != 0) {
        // 0x00402374: addiu       $v0, $zero, 0x5ABE
        ctx->r2 = ADD32(0, 0X5ABE);
            goto L_00402398;
    }
    // 0x00402374: addiu       $v0, $zero, 0x5ABE
    ctx->r2 = ADD32(0, 0X5ABE);
    // 0x00402378: bne         $v1, $v0, L_00402398
    if (ctx->r3 != ctx->r2) {
        // 0x0040237C: nop
    
            goto L_00402398;
    }
    // 0x0040237C: nop

    // 0x00402380: lb          $v0, 0x207($a0)
    ctx->r2 = MEM_B(ctx->r4, 0X207);
    // 0x00402384: beq         $v0, $zero, L_00402398
    if (ctx->r2 == 0) {
        // 0x00402388: addiu       $a2, $zero, 0x5ADC
        ctx->r6 = ADD32(0, 0X5ADC);
            goto L_00402398;
    }
    // 0x00402388: addiu       $a2, $zero, 0x5ADC
    ctx->r6 = ADD32(0, 0X5ADC);
    // 0x0040238C: lw          $a0, 0x220($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X220);
    // 0x00402390: jal         0x002666B0
    // 0x00402394: addiu       $a1, $a0, 0x140
    ctx->r5 = ADD32(ctx->r4, 0X140);
    func_002666B0(rdram, ctx);
        goto after_4;
    // 0x00402394: addiu       $a1, $a0, 0x140
    ctx->r5 = ADD32(ctx->r4, 0X140);
    after_4:
L_00402398:
    // 0x00402398: lwc1        $f0, 0x258($s2)
    ctx->f0.u32l = MEM_W(ctx->r18, 0X258);
    // 0x0040239C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x004023A0: lwc1        $f1, 0x6D28($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X6D28);
    // 0x004023A4: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x004023A8: mtc1        $zero, $f1
    ctx->f_odd[(1 - 1) * 2] = 0;
    // 0x004023AC: c.le.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl <= ctx->f1.fl;
    // 0x004023B0: nop

    // 0x004023B4: bc1f        L_004023E8
    if (!c1cs) {
        // 0x004023B8: swc1        $f0, 0x258($s2)
        MEM_W(0X258, ctx->r18) = ctx->f0.u32l;
            goto L_004023E8;
    }
    // 0x004023B8: swc1        $f0, 0x258($s2)
    MEM_W(0X258, ctx->r18) = ctx->f0.u32l;
    // 0x004023BC: lw          $v0, 0x254($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X254);
    // 0x004023C0: xori        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 ^ 0X1;
    // 0x004023C4: beq         $v0, $zero, L_004023DC
    if (ctx->r2 == 0) {
        // 0x004023C8: sw          $v0, 0x254($s2)
        MEM_W(0X254, ctx->r18) = ctx->r2;
            goto L_004023DC;
    }
    // 0x004023C8: sw          $v0, 0x254($s2)
    MEM_W(0X254, ctx->r18) = ctx->r2;
    // 0x004023CC: lw          $v0, 0x214($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X214);
    // 0x004023D0: lwc1        $f0, 0x18($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X18);
    // 0x004023D4: j           L_004023E8
    // 0x004023D8: swc1        $f0, 0x258($s2)
    MEM_W(0X258, ctx->r18) = ctx->f0.u32l;
        goto L_004023E8;
    // 0x004023D8: swc1        $f0, 0x258($s2)
    MEM_W(0X258, ctx->r18) = ctx->f0.u32l;
L_004023DC:
    // 0x004023DC: lw          $v0, 0x214($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X214);
    // 0x004023E0: lwc1        $f0, 0x1C($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X1C);
    // 0x004023E4: swc1        $f0, 0x258($s2)
    MEM_W(0X258, ctx->r18) = ctx->f0.u32l;
L_004023E8:
    // 0x004023E8: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x004023EC: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x004023F0: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x004023F4: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x004023F8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x004023FC: jr          $ra
    // 0x00402400: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x00402400: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_00465B04(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
;}
RECOMP_FUNC void func_0042FFF0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0042FFF0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x0042FFF4: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x0042FFF8: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x0042FFFC: addiu       $a0, $s2, 0x8B4
    ctx->r4 = ADD32(ctx->r18, 0X8B4);
    // 0x00430000: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x00430004: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x00430008: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x0043000C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00430010: jal         0x00200500
    // 0x00430014: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    func_00200500(rdram, ctx);
        goto after_0;
    // 0x00430014: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_0:
    // 0x00430018: addiu       $a0, $s2, 0x8A0
    ctx->r4 = ADD32(ctx->r18, 0X8A0);
    // 0x0043001C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x00430020: jal         0x00200500
    // 0x00430024: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    func_00200500(rdram, ctx);
        goto after_1;
    // 0x00430024: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_1:
    // 0x00430028: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x0043002C: addu        $s0, $s2, $zero
    ctx->r16 = ADD32(ctx->r18, 0);
L_00430030:
    // 0x00430030: addiu       $a0, $s2, 0x8A0
    ctx->r4 = ADD32(ctx->r18, 0X8A0);
    // 0x00430034: jal         0x00200574
    // 0x00430038: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_00200574(rdram, ctx);
        goto after_2;
    // 0x00430038: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_2:
    // 0x0043003C: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x00430040: slti        $v0, $s1, 0x4
    ctx->r2 = SIGNED(ctx->r17) < 0X4 ? 1 : 0;
    // 0x00430044: bne         $v0, $zero, L_00430030
    if (ctx->r2 != 0) {
        // 0x00430048: addiu       $s0, $s0, 0x228
        ctx->r16 = ADD32(ctx->r16, 0X228);
            goto L_00430030;
    }
    // 0x00430048: addiu       $s0, $s0, 0x228
    ctx->r16 = ADD32(ctx->r16, 0X228);
    // 0x0043004C: sh          $zero, 0x8C8($s2)
    MEM_H(0X8C8, ctx->r18) = 0;
    // 0x00430050: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x00430054: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x00430058: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x0043005C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00430060: jr          $ra
    // 0x00430064: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00430064: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_004555B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_0041C650:
    // 0x004555B0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
L_0041C660:
    // 0x004555B4: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x004555B8: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x004555BC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x004555C0: lw          $v0, 0x1C($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X1C);
    // 0x004555C4: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x004555C8: addiu       $v1, $v1, -0x54E8
    ctx->r3 = ADD32(ctx->r3, -0X54E8);
    // 0x004555CC: beq         $v0, $zero, L_004555E0
    if (ctx->r2 == 0) {
        // 0x004555D0: addu        $s1, $a0, $zero
        ctx->r17 = ADD32(ctx->r4, 0);
            goto L_004555E0;
    }
    // 0x004555D0: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x004555D4: lw          $v0, 0x518($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X518);
    // 0x004555D8: bnel        $v0, $zero, L_004555E0
    if (ctx->r2 != 0) {
        // 0x004555DC: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_004555E0;
    }
    goto skip_0;
    // 0x004555DC: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    skip_0:
L_004555E0:
    // 0x004555E0: lbu         $v0, 0x2A($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X2A);
    // 0x004555E4: addiu       $a2, $v0, -0x80
    ctx->r6 = ADD32(ctx->r2, -0X80);
    // 0x004555E8: bltzl       $a2, L_004555F0
    if (SIGNED(ctx->r6) < 0) {
        // 0x004555EC: addiu       $a2, $v0, -0x79
        ctx->r6 = ADD32(ctx->r2, -0X79);
            goto L_004555F0;
    }
    goto skip_1;
    // 0x004555EC: addiu       $a2, $v0, -0x79
    ctx->r6 = ADD32(ctx->r2, -0X79);
    skip_1:
L_004555F0:
    // 0x004555F0: sra         $s0, $a2, 3
    ctx->r16 = S32(SIGNED(ctx->r6) >> 3);
    // 0x004555F4: bne         $s0, $zero, L_0045560C
    if (ctx->r16 != 0) {
        // 0x004555F8: nop
    
            goto L_0045560C;
    }
    // 0x004555F8: nop

    // 0x004555FC: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00455600: addiu       $v0, $v0, 0x4080
    ctx->r2 = ADD32(ctx->r2, 0X4080);
    // 0x00455604: j           L_0041C660
    // 0x00455608: sw          $v0, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r2;
    entry_0041C660(rdram, ctx);
    return;
    // 0x00455608: sw          $v0, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r2;
L_0045560C:
    // 0x0045560C: blez        $s0, L_00455634
    if (SIGNED(ctx->r16) <= 0) {
        // 0x00455610: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_00455634;
    }
    // 0x00455610: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x00455614: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00455618: addiu       $v0, $v0, 0x4098
    ctx->r2 = ADD32(ctx->r2, 0X4098);
    // 0x0045561C: jal         0x004160F0
    // 0x00455620: sw          $v0, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r2;
    func_004160F0(rdram, ctx);
        goto after_0;
    // 0x00455620: sw          $v0, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r2;
    after_0:
    // 0x00455624: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x00455628: addiu       $a1, $a1, 0x1318
    ctx->r5 = ADD32(ctx->r5, 0X1318);
    // 0x0045562C: j           L_0041C650
    // 0x00455630: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    func_0041C650(rdram, ctx);
    return;
    // 0x00455630: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
L_00455634:
    // 0x00455634: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00455638: addiu       $v0, $v0, 0x4098
    ctx->r2 = ADD32(ctx->r2, 0X4098);
    // 0x0045563C: jal         0x004160F0
    // 0x00455640: sw          $v0, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r2;
    func_004160F0(rdram, ctx);
        goto after_1;
    // 0x00455640: sw          $v0, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r2;
    after_1:
    // 0x00455644: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x00455648: addiu       $a1, $a1, 0x1320
    ctx->r5 = ADD32(ctx->r5, 0X1320);
    // 0x0045564C: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    // 0x00455650: lw          $a0, 0x14($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X14);
    // 0x00455654: addiu       $v0, $v0, -0x4
    ctx->r2 = ADD32(ctx->r2, -0X4);
    // 0x00455658: jal         0x0029E3E0
    // 0x0045565C: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    func_0029E3E0(rdram, ctx);
        goto after_2;
    // 0x0045565C: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    after_2:
    // 0x00455660: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x00455664: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00455668: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0045566C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x00455670: jr          $ra
    // 0x00455674: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00455674: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_00402BB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00402BB0: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x00402BB4: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x00402BB8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x00402BBC: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x00402BC0: addu        $s2, $a1, $zero
    ctx->r18 = ADD32(ctx->r5, 0);
    // 0x00402BC4: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x00402BC8: jal         0x00284204
    // 0x00402BCC: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    func_00284204(rdram, ctx);
        goto after_0;
    // 0x00402BCC: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    after_0:
    // 0x00402BD0: beq         $v0, $zero, L_00402C74
    if (ctx->r2 == 0) {
        // 0x00402BD4: addiu       $a2, $zero, 0x9
        ctx->r6 = ADD32(0, 0X9);
            goto L_00402C74;
    }
    // 0x00402BD4: addiu       $a2, $zero, 0x9
    ctx->r6 = ADD32(0, 0X9);
    // 0x00402BD8: lui         $s1, 0x800F
    ctx->r17 = S32(0X800F << 16);
    // 0x00402BDC: addiu       $s1, $s1, 0x7078
    ctx->r17 = ADD32(ctx->r17, 0X7078);
    // 0x00402BE0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x00402BE4: addiu       $a1, $zero, 0x451
    ctx->r5 = ADD32(0, 0X451);
    // 0x00402BE8: addiu       $v0, $sp, 0x18
    ctx->r2 = ADD32(ctx->r29, 0X18);
    // 0x00402BEC: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x00402BF0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00402BF4: addiu       $a3, $zero, 0x1D4D
    ctx->r7 = ADD32(0, 0X1D4D);
    // 0x00402BF8: jal         0x00225F6C
    // 0x00402BFC: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    func_00225F6C(rdram, ctx);
        goto after_1;
    // 0x00402BFC: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    after_1:
    // 0x00402C00: beq         $v0, $zero, L_00402C4C
    if (ctx->r2 == 0) {
        // 0x00402C04: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_00402C4C;
    }
    // 0x00402C04: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x00402C08: lw          $v0, 0x18($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X18);
    // 0x00402C0C: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x00402C10: lw          $t0, 0x4($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X4);
    // 0x00402C14: lw          $t1, 0x8($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X8);
    // 0x00402C18: lw          $t2, 0xC($v0)
    ctx->r10 = MEM_W(ctx->r2, 0XC);
    // 0x00402C1C: sw          $t0, 0x54($s2)
    MEM_W(0X54, ctx->r18) = ctx->r8;
    // 0x00402C20: sw          $t1, 0x58($s2)
    MEM_W(0X58, ctx->r18) = ctx->r9;
    // 0x00402C24: sw          $t2, 0x5C($s2)
    MEM_W(0X5C, ctx->r18) = ctx->r10;
    // 0x00402C28: lw          $t0, 0x4($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X4);
    // 0x00402C2C: lw          $t1, 0x8($v1)
    ctx->r9 = MEM_W(ctx->r3, 0X8);
    // 0x00402C30: lw          $t2, 0xC($v1)
    ctx->r10 = MEM_W(ctx->r3, 0XC);
    // 0x00402C34: sw          $t0, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r8;
    // 0x00402C38: sw          $t1, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r9;
    // 0x00402C3C: sw          $t2, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r10;
    // 0x00402C40: jal         0x00220A1C
    // 0x00402C44: addiu       $a1, $s0, 0x4
    ctx->r5 = ADD32(ctx->r16, 0X4);
    func_00220A1C(rdram, ctx);
        goto after_2;
    // 0x00402C44: addiu       $a1, $s0, 0x4
    ctx->r5 = ADD32(ctx->r16, 0X4);
    after_2:
    // 0x00402C48: sw          $v0, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r2;
L_00402C4C:
    // 0x00402C4C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00402C50: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x00402C54: jal         0x00243414
    // 0x00402C58: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    func_00243414(rdram, ctx);
        goto after_3;
    // 0x00402C58: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_3:
    // 0x00402C5C: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x00402C60: addiu       $a0, $a0, 0xF0
    ctx->r4 = ADD32(ctx->r4, 0XF0);
    // 0x00402C64: lui         $a2, 0x800C
    ctx->r6 = S32(0X800C << 16);
    // 0x00402C68: addiu       $a2, $a2, 0x330
    ctx->r6 = ADD32(ctx->r6, 0X330);
    // 0x00402C6C: jal         0x0027AD24
    // 0x00402C70: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_0027AD24(rdram, ctx);
        goto after_4;
    // 0x00402C70: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_4:
L_00402C74:
    // 0x00402C74: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x00402C78: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x00402C7C: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x00402C80: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x00402C84: jr          $ra
    // 0x00402C88: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x00402C88: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_0026F760(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0026F760: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x0026F764: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x0026F768: addu        $s4, $a0, $zero
    ctx->r20 = ADD32(ctx->r4, 0);
    // 0x0026F76C: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x0026F770: addu        $s5, $a2, $zero
    ctx->r21 = ADD32(ctx->r6, 0);
    // 0x0026F774: lui         $v0, 0x27
    ctx->r2 = S32(0X27 << 16);
    // 0x0026F778: addiu       $v0, $v0, -0x2B4
    ctx->r2 = ADD32(ctx->r2, -0X2B4);
    // 0x0026F77C: sw          $ra, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r31;
    // 0x0026F780: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x0026F784: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x0026F788: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x0026F78C: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x0026F790: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x0026F794: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x0026F798: lui         $at, 0x800F
    ctx->r1 = S32(0X800F << 16);
    // 0x0026F79C: sb          $zero, 0x2790($at)
    MEM_B(0X2790, ctx->r1) = 0;
    // 0x0026F7A0: sw          $v0, 0x10($s4)
    MEM_W(0X10, ctx->r20) = ctx->r2;
    // 0x0026F7A4: lw          $a0, 0x0($s5)
    ctx->r4 = MEM_W(ctx->r21, 0X0);
    // 0x0026F7A8: jal         0x002984A0
    // 0x0026F7AC: addu        $s7, $a1, $zero
    ctx->r23 = ADD32(ctx->r5, 0);
    osAiSetFrequency_recomp(rdram, ctx);
        goto after_0;
    // 0x0026F7AC: addu        $s7, $a1, $zero
    ctx->r23 = ADD32(ctx->r5, 0);
    after_0:
    // 0x0026F7B0: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x0026F7B4: sw          $v1, 0x18($s4)
    MEM_W(0X18, ctx->r20) = ctx->r3;
    // 0x0026F7B8: lw          $v0, 0x4($s5)
    ctx->r2 = MEM_W(ctx->r21, 0X4);
    // 0x0026F7BC: mtc1        $v0, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r2;
    // 0x0026F7C0: cvt.d.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.d = CVT_D_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x0026F7C4: bgezl       $v0, L_0026F7DC
    if (SIGNED(ctx->r2) >= 0) {
        // 0x0026F7C8: cvt.s.d     $f0, $f1
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.d); 
    ctx->f0.fl = CVT_S_D(ctx->f1.d);
            goto L_0026F7DC;
    }
    goto skip_0;
    // 0x0026F7C8: cvt.s.d     $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.d); 
    ctx->f0.fl = CVT_S_D(ctx->f1.d);
    skip_0:
    // 0x0026F7CC: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0026F7D0: ldc1        $f0, -0x7F60($at)
    CHECK_FR(ctx, 0);
    ctx->f0.u64 = LD(ctx->r1, -0X7F60);
    // 0x0026F7D4: add.d       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.d); NAN_CHECK(ctx->f0.d); 
    ctx->f1.d = ctx->f1.d + ctx->f0.d;
    // 0x0026F7D8: cvt.s.d     $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.d); 
    ctx->f0.fl = CVT_S_D(ctx->f1.d);
L_0026F7DC:
    // 0x0026F7DC: mtc1        $v1, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r3;
    // 0x0026F7E0: cvt.s.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.fl = CVT_S_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x0026F7E4: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0026F7E8: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0026F7EC: lwc1        $f1, -0x7F58($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, -0X7F58);
    // 0x0026F7F0: mul.s       $f2, $f0, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f2.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0026F7F4: trunc.w.s   $f3, $f2
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 2);
    ctx->f_odd[(3 - 1) * 2] = TRUNC_W_S(ctx->f2.fl);
    // 0x0026F7F8: mfc1        $v0, $f3
    ctx->r2 = (int32_t)ctx->f_odd[(3 - 1) * 2];
    // 0x0026F7FC: mtc1        $v0, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r2;
    // 0x0026F800: cvt.d.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.d = CVT_D_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x0026F804: lui         $at, 0x800F
    ctx->r1 = S32(0X800F << 16);
    // 0x0026F808: sw          $v0, 0x2838($at)
    MEM_W(0X2838, ctx->r1) = ctx->r2;
    // 0x0026F80C: bgezl       $v0, L_0026F824
    if (SIGNED(ctx->r2) >= 0) {
        // 0x0026F810: cvt.s.d     $f0, $f1
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.d); 
    ctx->f0.fl = CVT_S_D(ctx->f1.d);
            goto L_0026F824;
    }
    goto skip_1;
    // 0x0026F810: cvt.s.d     $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.d); 
    ctx->f0.fl = CVT_S_D(ctx->f1.d);
    skip_1:
    // 0x0026F814: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0026F818: ldc1        $f0, -0x7F50($at)
    CHECK_FR(ctx, 0);
    ctx->f0.u64 = LD(ctx->r1, -0X7F50);
    // 0x0026F81C: add.d       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.d); NAN_CHECK(ctx->f0.d); 
    ctx->f1.d = ctx->f1.d + ctx->f0.d;
    // 0x0026F820: cvt.s.d     $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.d); 
    ctx->f0.fl = CVT_S_D(ctx->f1.d);
L_0026F824:
    // 0x0026F824: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x0026F828: nop

    // 0x0026F82C: bc1f        L_0026F83C
    if (!c1cs) {
        // 0x0026F830: addiu       $v0, $v0, 0x1
        ctx->r2 = ADD32(ctx->r2, 0X1);
            goto L_0026F83C;
    }
    // 0x0026F830: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x0026F834: lui         $at, 0x800F
    ctx->r1 = S32(0X800F << 16);
    // 0x0026F838: sw          $v0, 0x2838($at)
    MEM_W(0X2838, ctx->r1) = ctx->r2;
L_0026F83C:
    // 0x0026F83C: lui         $v1, 0x800F
    ctx->r3 = S32(0X800F << 16);
    // 0x0026F840: lw          $v1, 0x2838($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X2838);
    // 0x0026F844: andi        $v0, $v1, 0xF
    ctx->r2 = ctx->r3 & 0XF;
    // 0x0026F848: beq         $v0, $zero, L_0026F860
    if (ctx->r2 == 0) {
        // 0x0026F84C: addiu       $v0, $zero, -0x10
        ctx->r2 = ADD32(0, -0X10);
            goto L_0026F860;
    }
    // 0x0026F84C: addiu       $v0, $zero, -0x10
    ctx->r2 = ADD32(0, -0X10);
    // 0x0026F850: and         $v0, $v1, $v0
    ctx->r2 = ctx->r3 & ctx->r2;
    // 0x0026F854: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
    // 0x0026F858: lui         $at, 0x800F
    ctx->r1 = S32(0X800F << 16);
    // 0x0026F85C: sw          $v0, 0x2838($at)
    MEM_W(0X2838, ctx->r1) = ctx->r2;
L_0026F860:
    // 0x0026F860: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x0026F864: addiu       $a0, $a0, 0x27D4
    ctx->r4 = ADD32(ctx->r4, 0X27D4);
    // 0x0026F868: jal         0x00293400
    // 0x0026F86C: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    func_00293400(rdram, ctx);
        goto after_1;
    // 0x0026F86C: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    after_1:
    // 0x0026F870: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x0026F874: addiu       $s6, $zero, 0x300
    ctx->r22 = ADD32(0, 0X300);
    // 0x0026F878: lui         $v0, 0x800F
    ctx->r2 = S32(0X800F << 16);
    // 0x0026F87C: addiu       $v0, $v0, 0x22CC
    ctx->r2 = ADD32(ctx->r2, 0X22CC);
    // 0x0026F880: addiu       $s3, $v0, -0x4
    ctx->r19 = ADD32(ctx->r2, -0X4);
    // 0x0026F884: addiu       $s2, $v0, 0x10
    ctx->r18 = ADD32(ctx->r2, 0X10);
    // 0x0026F888: addu        $s0, $s1, $zero
    ctx->r16 = ADD32(ctx->r17, 0);
    // 0x0026F88C: sw          $zero, 0x0($v0)
    MEM_W(0X0, ctx->r2) = 0;
    // 0x0026F890: sw          $zero, -0x4($v0)
    MEM_W(-0X4, ctx->r2) = 0;
L_0026F894:
    // 0x0026F894: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x0026F898: jal         0x002933E0
    // 0x0026F89C: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    func_002933E0(rdram, ctx);
        goto after_2;
    // 0x0026F89C: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    after_2:
    // 0x0026F8A0: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0026F8A4: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x0026F8A8: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x0026F8AC: addiu       $s3, $s3, 0x14
    ctx->r19 = ADD32(ctx->r19, 0X14);
    // 0x0026F8B0: addiu       $s2, $s2, 0x14
    ctx->r18 = ADD32(ctx->r18, 0X14);
    // 0x0026F8B4: sw          $s6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r22;
    // 0x0026F8B8: lw          $a2, 0x14($s4)
    ctx->r6 = MEM_W(ctx->r20, 0X14);
    // 0x0026F8BC: jal         0x002912A0
    // 0x0026F8C0: addu        $s1, $s1, $a3
    ctx->r17 = ADD32(ctx->r17, ctx->r7);
    func_002912A0(rdram, ctx);
        goto after_3;
    // 0x0026F8C0: addu        $s1, $s1, $a3
    ctx->r17 = ADD32(ctx->r17, ctx->r7);
    after_3:
    // 0x0026F8C4: lui         $at, 0x800F
    ctx->r1 = S32(0X800F << 16);
    // 0x0026F8C8: addu        $at, $at, $s0
    ctx->r1 = ADD32(ctx->r1, ctx->r16);
    // 0x0026F8CC: sw          $v0, 0x22D8($at)
    MEM_W(0X22D8, ctx->r1) = ctx->r2;
    // 0x0026F8D0: sltiu       $v0, $s1, 0x3B
    ctx->r2 = ctx->r17 < 0X3B ? 1 : 0;
    // 0x0026F8D4: bne         $v0, $zero, L_0026F894
    if (ctx->r2 != 0) {
        // 0x0026F8D8: addiu       $s0, $s0, 0x14
        ctx->r16 = ADD32(ctx->r16, 0X14);
            goto L_0026F894;
    }
    // 0x0026F8D8: addiu       $s0, $s0, 0x14
    ctx->r16 = ADD32(ctx->r16, 0X14);
    // 0x0026F8DC: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0026F8E0: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x0026F8E4: addiu       $v0, $zero, 0x300
    ctx->r2 = ADD32(0, 0X300);
    // 0x0026F8E8: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x0026F8EC: lw          $a2, 0x14($s4)
    ctx->r6 = MEM_W(ctx->r20, 0X14);
    // 0x0026F8F0: jal         0x002912A0
    // 0x0026F8F4: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_002912A0(rdram, ctx);
        goto after_4;
    // 0x0026F8F4: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_4:
    // 0x0026F8F8: sll         $v1, $s1, 2
    ctx->r3 = S32(ctx->r17 << 2);
    // 0x0026F8FC: addu        $v1, $v1, $s1
    ctx->r3 = ADD32(ctx->r3, ctx->r17);
    // 0x0026F900: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x0026F904: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x0026F908: lui         $at, 0x800F
    ctx->r1 = S32(0X800F << 16);
    // 0x0026F90C: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x0026F910: sw          $v0, 0x22D8($at)
    MEM_W(0X22D8, ctx->r1) = ctx->r2;
    // 0x0026F914: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
L_0026F918:
    // 0x0026F918: lw          $v0, 0x8($s5)
    ctx->r2 = MEM_W(ctx->r21, 0X8);
    // 0x0026F91C: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x0026F920: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x0026F924: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x0026F928: lw          $a2, 0x14($s4)
    ctx->r6 = MEM_W(ctx->r20, 0X14);
    // 0x0026F92C: jal         0x002912A0
    // 0x0026F930: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_002912A0(rdram, ctx);
        goto after_5;
    // 0x0026F930: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_5:
    // 0x0026F934: sll         $v1, $s1, 2
    ctx->r3 = S32(ctx->r17 << 2);
    // 0x0026F938: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x0026F93C: lui         $at, 0x800F
    ctx->r1 = S32(0X800F << 16);
    // 0x0026F940: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x0026F944: sw          $v0, 0x27C0($at)
    MEM_W(0X27C0, ctx->r1) = ctx->r2;
    // 0x0026F948: sltiu       $v0, $s1, 0x2
    ctx->r2 = ctx->r17 < 0X2 ? 1 : 0;
    // 0x0026F94C: bne         $v0, $zero, L_0026F918
    if (ctx->r2 != 0) {
        // 0x0026F950: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_0026F918;
    }
    // 0x0026F950: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0026F954: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x0026F958: lui         $s2, 0x800C
    ctx->r18 = S32(0X800C << 16);
    // 0x0026F95C: addiu       $s2, $s2, -0x3CD0
    ctx->r18 = ADD32(ctx->r18, -0X3CD0);
    // 0x0026F960: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x0026F964: addiu       $v0, $v0, -0x3C00
    ctx->r2 = ADD32(ctx->r2, -0X3C00);
    // 0x0026F968: subu        $s3, $v0, $s2
    ctx->r19 = SUB32(ctx->r2, ctx->r18);
    // 0x0026F96C: lw          $v0, 0x8($s5)
    ctx->r2 = MEM_W(ctx->r21, 0X8);
    // 0x0026F970: lui         $s0, 0x800F
    ctx->r16 = S32(0X800F << 16);
    // 0x0026F974: addiu       $s0, $s0, 0x27C8
    ctx->r16 = ADD32(ctx->r16, 0X27C8);
    // 0x0026F978: lui         $at, 0x800F
    ctx->r1 = S32(0X800F << 16);
    // 0x0026F97C: sw          $v0, 0x283C($at)
    MEM_W(0X283C, ctx->r1) = ctx->r2;
L_0026F980:
    // 0x0026F980: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0026F984: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x0026F988: addiu       $v0, $zero, 0x70
    ctx->r2 = ADD32(0, 0X70);
    // 0x0026F98C: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x0026F990: lw          $a2, 0x14($s4)
    ctx->r6 = MEM_W(ctx->r20, 0X14);
    // 0x0026F994: jal         0x002912A0
    // 0x0026F998: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_002912A0(rdram, ctx);
        goto after_6;
    // 0x0026F998: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_6:
    // 0x0026F99C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0026F9A0: lui         $v1, 0x800F
    ctx->r3 = S32(0X800F << 16);
    // 0x0026F9A4: lw          $v1, 0x2838($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X2838);
    // 0x0026F9A8: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x0026F9AC: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x0026F9B0: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x0026F9B4: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    // 0x0026F9B8: lw          $a2, 0x14($s4)
    ctx->r6 = MEM_W(ctx->r20, 0X14);
    // 0x0026F9BC: jal         0x002912A0
    // 0x0026F9C0: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_002912A0(rdram, ctx);
        goto after_7;
    // 0x0026F9C0: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_7:
    // 0x0026F9C4: lw          $v1, 0x0($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X0);
    // 0x0026F9C8: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x0026F9CC: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x0026F9D0: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x0026F9D4: addiu       $a0, $a0, 0x2820
    ctx->r4 = ADD32(ctx->r4, 0X2820);
    // 0x0026F9D8: sw          $a0, 0x58($v0)
    MEM_W(0X58, ctx->r2) = ctx->r4;
    // 0x0026F9DC: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x0026F9E0: sw          $v0, 0x5C($v0)
    MEM_W(0X5C, ctx->r2) = ctx->r2;
    // 0x0026F9E4: lw          $v1, 0x0($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X0);
    // 0x0026F9E8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x0026F9EC: sw          $v0, 0x18($v1)
    MEM_W(0X18, ctx->r3) = ctx->r2;
    // 0x0026F9F0: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x0026F9F4: sw          $s2, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->r18;
    // 0x0026F9F8: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x0026F9FC: sw          $s3, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->r19;
    // 0x0026FA00: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x0026FA04: sw          $zero, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = 0;
    // 0x0026FA08: lw          $v1, 0x0($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X0);
    // 0x0026FA0C: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x0026FA10: addiu       $v0, $v0, -0x16E0
    ctx->r2 = ADD32(ctx->r2, -0X16E0);
    // 0x0026FA14: sw          $v0, 0x28($v1)
    MEM_W(0X28, ctx->r3) = ctx->r2;
    // 0x0026FA18: lw          $v1, 0x0($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X0);
    // 0x0026FA1C: addiu       $v0, $zero, 0x1000
    ctx->r2 = ADD32(0, 0X1000);
    // 0x0026FA20: sw          $v0, 0x2C($v1)
    MEM_W(0X2C, ctx->r3) = ctx->r2;
    // 0x0026FA24: lw          $v1, 0x0($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X0);
    // 0x0026FA28: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x0026FA2C: addiu       $v0, $v0, -0xB0
    ctx->r2 = ADD32(ctx->r2, -0XB0);
    // 0x0026FA30: sw          $v0, 0x30($v1)
    MEM_W(0X30, ctx->r3) = ctx->r2;
    // 0x0026FA34: lw          $v1, 0x0($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X0);
    // 0x0026FA38: addiu       $v0, $zero, 0x800
    ctx->r2 = ADD32(0, 0X800);
    // 0x0026FA3C: sw          $v0, 0x34($v1)
    MEM_W(0X34, ctx->r3) = ctx->r2;
    // 0x0026FA40: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x0026FA44: sw          $zero, 0x50($v0)
    MEM_W(0X50, ctx->r2) = 0;
    // 0x0026FA48: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x0026FA4C: sw          $zero, 0x54($v0)
    MEM_W(0X54, ctx->r2) = 0;
    // 0x0026FA50: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x0026FA54: sw          $zero, 0x38($v0)
    MEM_W(0X38, ctx->r2) = 0;
    // 0x0026FA58: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x0026FA5C: sw          $zero, 0x3C($v0)
    MEM_W(0X3C, ctx->r2) = 0;
    // 0x0026FA60: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x0026FA64: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x0026FA68: sw          $zero, 0x40($v0)
    MEM_W(0X40, ctx->r2) = 0;
    // 0x0026FA6C: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x0026FA70: sw          $zero, 0x44($v0)
    MEM_W(0X44, ctx->r2) = 0;
    // 0x0026FA74: sltiu       $v0, $s1, 0x3
    ctx->r2 = ctx->r17 < 0X3 ? 1 : 0;
    // 0x0026FA78: bne         $v0, $zero, L_0026F980
    if (ctx->r2 != 0) {
        // 0x0026FA7C: addiu       $s0, $s0, 0x4
        ctx->r16 = ADD32(ctx->r16, 0X4);
            goto L_0026F980;
    }
    // 0x0026FA7C: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x0026FA80: lui         $a1, 0x800F
    ctx->r5 = S32(0X800F << 16);
    // 0x0026FA84: addiu       $a1, $a1, 0x2070
    ctx->r5 = ADD32(ctx->r5, 0X2070);
    // 0x0026FA88: jal         0x0029B030
    // 0x0026FA8C: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    osCreateMesgQueue_recomp(rdram, ctx);
        goto after_8;
    // 0x0026FA8C: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    after_8:
    // 0x0026FA90: lui         $s2, 0x800F
    ctx->r18 = S32(0X800F << 16);
    // 0x0026FA94: addiu       $s2, $s2, 0x27A0
    ctx->r18 = ADD32(ctx->r18, 0X27A0);
    // 0x0026FA98: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x0026FA9C: lui         $a1, 0x800F
    ctx->r5 = S32(0X800F << 16);
    // 0x0026FAA0: addiu       $a1, $a1, 0x2048
    ctx->r5 = ADD32(ctx->r5, 0X2048);
    // 0x0026FAA4: jal         0x0029B030
    // 0x0026FAA8: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    osCreateMesgQueue_recomp(rdram, ctx);
        goto after_9;
    // 0x0026FAA8: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    after_9:
    // 0x0026FAAC: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x0026FAB0: addiu       $a0, $a0, 0x2778
    ctx->r4 = ADD32(ctx->r4, 0X2778);
    // 0x0026FAB4: lui         $a1, 0x800F
    ctx->r5 = S32(0X800F << 16);
    // 0x0026FAB8: addiu       $a1, $a1, 0x2848
    ctx->r5 = ADD32(ctx->r5, 0X2848);
    // 0x0026FABC: jal         0x0029B030
    // 0x0026FAC0: addiu       $a2, $zero, 0x3C
    ctx->r6 = ADD32(0, 0X3C);
    osCreateMesgQueue_recomp(rdram, ctx);
        goto after_10;
    // 0x0026FAC0: addiu       $a2, $zero, 0x3C
    ctx->r6 = ADD32(0, 0X3C);
    after_10:
    // 0x0026FAC4: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    // 0x0026FAC8: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x0026FACC: jal         0x0029B950
    // 0x0026FAD0: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
    osSetEventMesg_recomp(rdram, ctx);
        goto after_11;
    // 0x0026FAD0: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
    after_11:
    // 0x0026FAD4: lui         $s0, 0x800C
    ctx->r16 = S32(0X800C << 16);
    // 0x0026FAD8: addiu       $s0, $s0, 0x5400
    ctx->r16 = ADD32(ctx->r16, 0X5400);
    // 0x0026FADC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0026FAE0: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x0026FAE4: lw          $v0, 0x14($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X14);
    // 0x0026FAE8: lui         $at, 0x800F
    ctx->r1 = S32(0X800F << 16);
    // 0x0026FAEC: sw          $zero, 0x279C($at)
    MEM_W(0X279C, ctx->r1) = 0;
    // 0x0026FAF0: lui         $at, 0x800F
    ctx->r1 = S32(0X800F << 16);
    // 0x0026FAF4: sw          $v0, 0x2840($at)
    MEM_W(0X2840, ctx->r1) = ctx->r2;
    // 0x0026FAF8: jal         0x00266C5C
    // 0x0026FAFC: addiu       $a2, $zero, 0x2800
    ctx->r6 = ADD32(0, 0X2800);
    func_00266C5C(rdram, ctx);
        goto after_12;
    // 0x0026FAFC: addiu       $a2, $zero, 0x2800
    ctx->r6 = ADD32(0, 0X2800);
    after_12:
    // 0x0026FB00: lui         $s1, 0x800F
    ctx->r17 = S32(0X800F << 16);
    // 0x0026FB04: addiu       $s1, $s1, 0x2098
    ctx->r17 = ADD32(ctx->r17, 0X2098);
    // 0x0026FB08: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0026FB0C: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x0026FB10: lui         $a2, 0x27
    ctx->r6 = S32(0X27 << 16);
    // 0x0026FB14: addiu       $a2, $a2, -0x490
    ctx->r6 = ADD32(ctx->r6, -0X490);
    // 0x0026FB18: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x0026FB1C: addiu       $s0, $s0, 0x2800
    ctx->r16 = ADD32(ctx->r16, 0X2800);
    // 0x0026FB20: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0026FB24: jal         0x0029B060
    // 0x0026FB28: sw          $s7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r23;
    osCreateThread_recomp(rdram, ctx);
        goto after_13;
    // 0x0026FB28: sw          $s7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r23;
    after_13:
    // 0x0026FB2C: jal         0x0029BB10
    // 0x0026FB30: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    osStartThread_recomp(rdram, ctx);
        goto after_14;
    // 0x0026FB30: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_14:
    // 0x0026FB34: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x0026FB38: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    // 0x0026FB3C: jal         0x0029B820
    // 0x0026FB40: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    osSendMesg_recomp(rdram, ctx);
        goto after_15;
    // 0x0026FB40: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_15:
    // 0x0026FB44: lw          $ra, 0x38($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X38);
    // 0x0026FB48: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x0026FB4C: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x0026FB50: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x0026FB54: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x0026FB58: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x0026FB5C: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x0026FB60: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x0026FB64: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x0026FB68: jr          $ra
    // 0x0026FB6C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x0026FB6C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_00200A9C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00200A9C: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x00200AA0: beq         $v1, $zero, L_00200AC4
    if (ctx->r3 == 0) {
        // 0x00200AA4: nop
    
            goto L_00200AC4;
    }
    // 0x00200AA4: nop

L_00200AA8:
    // 0x00200AA8: beq         $v1, $a1, L_00200ACC
    if (ctx->r3 == ctx->r5) {
        // 0x00200AAC: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_00200ACC;
    }
    // 0x00200AAC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00200AB0: lw          $v0, 0xC($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XC);
    // 0x00200AB4: addu        $v0, $v1, $v0
    ctx->r2 = ADD32(ctx->r3, ctx->r2);
    // 0x00200AB8: lw          $v1, 0x0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X0);
    // 0x00200ABC: bne         $v1, $zero, L_00200AA8
    if (ctx->r3 != 0) {
        // 0x00200AC0: nop
    
            goto L_00200AA8;
    }
    // 0x00200AC0: nop

L_00200AC4:
    // 0x00200AC4: jr          $ra
    // 0x00200AC8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x00200AC8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_00200ACC:
    // 0x00200ACC: jr          $ra
    // 0x00200AD0: nop

    return;
    // 0x00200AD0: nop

;}
RECOMP_FUNC void func_00275F8C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00275F8C: jr          $ra
    // 0x00275F90: nop

    return;
    // 0x00275F90: nop

;}
RECOMP_FUNC void func_0042FEEC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0042FEEC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x0042FEF0: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x0042FEF4: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x0042FEF8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x0042FEFC: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x0042FF00: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0042FF04: lw          $v0, 0x8($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X8);
    // 0x0042FF08: blez        $v0, L_0042FF38
    if (SIGNED(ctx->r2) <= 0) {
        // 0x0042FF0C: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_0042FF38;
    }
    // 0x0042FF0C: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x0042FF10: addu        $s1, $s0, $zero
    ctx->r17 = ADD32(ctx->r16, 0);
L_0042FF14:
    // 0x0042FF14: lw          $a0, 0x4($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X4);
    // 0x0042FF18: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x0042FF1C: addu        $a0, $s1, $a0
    ctx->r4 = ADD32(ctx->r17, ctx->r4);
    // 0x0042FF20: jal         0x0042FFF0
    // 0x0042FF24: addiu       $a0, $a0, 0x558
    ctx->r4 = ADD32(ctx->r4, 0X558);
    func_0042FFF0(rdram, ctx);
        goto after_0;
    // 0x0042FF24: addiu       $a0, $a0, 0x558
    ctx->r4 = ADD32(ctx->r4, 0X558);
    after_0:
    // 0x0042FF28: lw          $v0, 0x8($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X8);
    // 0x0042FF2C: slt         $v0, $s0, $v0
    ctx->r2 = SIGNED(ctx->r16) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x0042FF30: bne         $v0, $zero, L_0042FF14
    if (ctx->r2 != 0) {
        // 0x0042FF34: addiu       $s1, $s1, 0xEC0
        ctx->r17 = ADD32(ctx->r17, 0XEC0);
            goto L_0042FF14;
    }
    // 0x0042FF34: addiu       $s1, $s1, 0xEC0
    ctx->r17 = ADD32(ctx->r17, 0XEC0);
L_0042FF38:
    // 0x0042FF38: jal         0x0042FFF0
    // 0x0042FF3C: addiu       $a0, $s2, 0x598
    ctx->r4 = ADD32(ctx->r18, 0X598);
    func_0042FFF0(rdram, ctx);
        goto after_1;
    // 0x0042FF3C: addiu       $a0, $s2, 0x598
    ctx->r4 = ADD32(ctx->r18, 0X598);
    after_1:
    // 0x0042FF40: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x0042FF44: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x0042FF48: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x0042FF4C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0042FF50: jr          $ra
    // 0x0042FF54: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x0042FF54: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_0020F5B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0020F5B8: jr          $ra
    // 0x0020F5BC: nop

    return;
    // 0x0020F5BC: nop

;}
RECOMP_FUNC void func_00426F20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00426F20: lbu         $v0, 0x0($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X0);
    // 0x00426F24: beq         $v0, $zero, L_00426F3C
    if (ctx->r2 == 0) {
        // 0x00426F28: addu        $v1, $a0, $zero
        ctx->r3 = ADD32(ctx->r4, 0);
            goto L_00426F3C;
    }
    // 0x00426F28: addu        $v1, $a0, $zero
    ctx->r3 = ADD32(ctx->r4, 0);
    // 0x00426F2C: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
L_00426F30:
    // 0x00426F30: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x00426F34: bnel        $v0, $zero, L_00426F30
    if (ctx->r2 != 0) {
        // 0x00426F38: addiu       $v1, $v1, 0x1
        ctx->r3 = ADD32(ctx->r3, 0X1);
            goto L_00426F30;
    }
    goto skip_0;
    // 0x00426F38: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    skip_0:
L_00426F3C:
    // 0x00426F3C: lbu         $v0, 0x0($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X0);
    // 0x00426F40: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x00426F44: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x00426F48: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x00426F4C: bne         $v0, $zero, L_00426F3C
    if (ctx->r2 != 0) {
        // 0x00426F50: addiu       $v1, $v1, 0x1
        ctx->r3 = ADD32(ctx->r3, 0X1);
            goto L_00426F3C;
    }
    // 0x00426F50: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x00426F54: jr          $ra
    // 0x00426F58: addu        $v0, $a0, $zero
    ctx->r2 = ADD32(ctx->r4, 0);
    return;
    // 0x00426F58: addu        $v0, $a0, $zero
    ctx->r2 = ADD32(ctx->r4, 0);
;}
RECOMP_FUNC void func_002247E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002247E4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x002247E8: addu        $v0, $a0, $zero
    ctx->r2 = ADD32(ctx->r4, 0);
    // 0x002247EC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x002247F0: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x002247F4: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x002247F8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x002247FC: lhu         $s2, 0x16E($a1)
    ctx->r18 = MEM_HU(ctx->r5, 0X16E);
    // 0x00224800: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x00224804: lw          $a0, 0x6C($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X6C);
    // 0x00224808: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x0022480C: addu        $at, $v0, $at
    ctx->r1 = ADD32(ctx->r2, ctx->r1);
    // 0x00224810: lw          $s0, -0x7058($at)
    ctx->r16 = MEM_W(ctx->r1, -0X7058);
    // 0x00224814: jal         0x002017D4
    // 0x00224818: addu        $s1, $a2, $zero
    ctx->r17 = ADD32(ctx->r6, 0);
    func_002017D4(rdram, ctx);
        goto after_0;
    // 0x00224818: addu        $s1, $a2, $zero
    ctx->r17 = ADD32(ctx->r6, 0);
    after_0:
    // 0x0022481C: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x00224820: jal         0x002017D4
    // 0x00224824: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_002017D4(rdram, ctx);
        goto after_1;
    // 0x00224824: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_1:
    // 0x00224828: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x0022482C: jal         0x002017D4
    // 0x00224830: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_002017D4(rdram, ctx);
        goto after_2;
    // 0x00224830: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_2:
    // 0x00224834: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x00224838: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0022483C: jal         0x002017D4
    // 0x00224840: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_002017D4(rdram, ctx);
        goto after_3;
    // 0x00224840: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_3:
    // 0x00224844: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00224848: jal         0x00201818
    // 0x0022484C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_00201818(rdram, ctx);
        goto after_4;
    // 0x0022484C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_4:
    // 0x00224850: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00224854: jal         0x002017D4
    // 0x00224858: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_002017D4(rdram, ctx);
        goto after_5;
    // 0x00224858: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_5:
    // 0x0022485C: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x00224860: addu        $a2, $a1, $zero
    ctx->r6 = ADD32(ctx->r5, 0);
    // 0x00224864: andi        $v1, $s2, 0x7
    ctx->r3 = ctx->r18 & 0X7;
    // 0x00224868: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0022486C: beq         $s1, $zero, L_00224898
    if (ctx->r17 == 0) {
        // 0x00224870: sllv        $a0, $v0, $v1
        ctx->r4 = S32(ctx->r2 << (ctx->r3 & 31));
            goto L_00224898;
    }
    // 0x00224870: sllv        $a0, $v0, $v1
    ctx->r4 = S32(ctx->r2 << (ctx->r3 & 31));
    // 0x00224874: bgez        $s2, L_00224880
    if (SIGNED(ctx->r18) >= 0) {
        // 0x00224878: addu        $v1, $s2, $zero
        ctx->r3 = ADD32(ctx->r18, 0);
            goto L_00224880;
    }
    // 0x00224878: addu        $v1, $s2, $zero
    ctx->r3 = ADD32(ctx->r18, 0);
    // 0x0022487C: addiu       $v1, $s2, 0x7
    ctx->r3 = ADD32(ctx->r18, 0X7);
L_00224880:
    // 0x00224880: sra         $v1, $v1, 3
    ctx->r3 = S32(SIGNED(ctx->r3) >> 3);
    // 0x00224884: addu        $v1, $a1, $v1
    ctx->r3 = ADD32(ctx->r5, ctx->r3);
    // 0x00224888: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x0022488C: or          $v0, $v0, $a0
    ctx->r2 = ctx->r2 | ctx->r4;
    // 0x00224890: j           L_002248BC
    // 0x00224894: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
        goto L_002248BC;
    // 0x00224894: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
L_00224898:
    // 0x00224898: addu        $v0, $s2, $zero
    ctx->r2 = ADD32(ctx->r18, 0);
    // 0x0022489C: bltzl       $v0, L_002248A4
    if (SIGNED(ctx->r2) < 0) {
        // 0x002248A0: addiu       $v0, $v0, 0x7
        ctx->r2 = ADD32(ctx->r2, 0X7);
            goto L_002248A4;
    }
    goto skip_0;
    // 0x002248A0: addiu       $v0, $v0, 0x7
    ctx->r2 = ADD32(ctx->r2, 0X7);
    skip_0:
L_002248A4:
    // 0x002248A4: sra         $v0, $v0, 3
    ctx->r2 = S32(SIGNED(ctx->r2) >> 3);
    // 0x002248A8: addu        $v0, $a2, $v0
    ctx->r2 = ADD32(ctx->r6, ctx->r2);
    // 0x002248AC: lbu         $v1, 0x0($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X0);
    // 0x002248B0: nor         $a0, $zero, $a0
    ctx->r4 = ~(0 | ctx->r4);
    // 0x002248B4: and         $v1, $v1, $a0
    ctx->r3 = ctx->r3 & ctx->r4;
    // 0x002248B8: sb          $v1, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r3;
L_002248BC:
    // 0x002248BC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x002248C0: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x002248C4: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x002248C8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x002248CC: jr          $ra
    // 0x002248D0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x002248D0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_002900B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002900B0: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x002900B4: sw          $s0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r16;
    // 0x002900B8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x002900BC: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x002900C0: lw          $a0, 0x18($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X18);
    // 0x002900C4: beq         $a0, $zero, L_00290230
    if (ctx->r4 == 0) {
        // 0x002900C8: nop
    
            goto L_00290230;
    }
    // 0x002900C8: nop

    // 0x002900CC: jal         0x0028F61C
    // 0x002900D0: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    func_0028F61C(rdram, ctx);
        goto after_0;
    // 0x002900D0: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    after_0:
    // 0x002900D4: lhu         $v0, 0x10($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X10);
    // 0x002900D8: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x002900DC: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x002900E0: sra         $v1, $v0, 16
    ctx->r3 = S32(SIGNED(ctx->r2) >> 16);
    // 0x002900E4: sltiu       $v0, $v1, 0x14
    ctx->r2 = ctx->r3 < 0X14 ? 1 : 0;
    // 0x002900E8: beq         $v0, $zero, L_00290218
    if (ctx->r2 == 0) {
        // 0x002900EC: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_00290218;
    }
    // 0x002900EC: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x002900F0: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x002900F4: addu        $at, $at, $v0
    gpr jr_addend_002900FC = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x002900F8: lw          $v0, -0x5CF0($at)
    ctx->r2 = ADD32(ctx->r1, -0X5CF0);
    // 0x002900FC: jr          $v0
    // 0x00290100: nop

    switch (jr_addend_002900FC >> 2) {
        case 0: goto L_00290104; break;
        case 1: goto L_00290218; break;
        case 2: goto L_0029014C; break;
        case 3: goto L_00290194; break;
        case 4: goto L_00290218; break;
        case 5: goto L_00290218; break;
        case 6: goto L_00290218; break;
        case 7: goto L_00290218; break;
        case 8: goto L_00290218; break;
        case 9: goto L_00290218; break;
        case 10: goto L_00290218; break;
        case 11: goto L_00290218; break;
        case 12: goto L_00290218; break;
        case 13: goto L_00290218; break;
        case 14: goto L_00290218; break;
        case 15: goto L_00290218; break;
        case 16: goto L_00290218; break;
        case 17: goto L_002901C0; break;
        case 18: goto L_002901C0; break;
        case 19: goto L_002901C0; break;
        default: switch_error(__func__, 0x002900FC, 0x800AA310);
    }
    // 0x00290100: nop

L_00290104:
    // 0x00290104: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00290108: jal         0x00290240
    // 0x0029010C: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    func_00290240(rdram, ctx);
        goto after_1;
    // 0x0029010C: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    after_1:
    // 0x00290110: lw          $v1, 0x2C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X2C);
    // 0x00290114: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00290118: bne         $v1, $v0, L_00290230
    if (ctx->r3 != ctx->r2) {
        // 0x0029011C: nop
    
            goto L_00290230;
    }
    // 0x0029011C: nop

    // 0x00290120: lw          $a0, 0x18($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X18);
    // 0x00290124: beq         $a0, $zero, L_00290230
    if (ctx->r4 == 0) {
        // 0x00290128: nop
    
            goto L_00290230;
    }
    // 0x00290128: nop

    // 0x0029012C: jal         0x0028F910
    // 0x00290130: addiu       $a1, $sp, 0x30
    ctx->r5 = ADD32(ctx->r29, 0X30);
    func_0028F910(rdram, ctx);
        goto after_2;
    // 0x00290130: addiu       $a1, $sp, 0x30
    ctx->r5 = ADD32(ctx->r29, 0X30);
    after_2:
    // 0x00290134: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x00290138: beq         $v0, $zero, L_00290230
    if (ctx->r2 == 0) {
        // 0x0029013C: nop
    
            goto L_00290230;
    }
    // 0x0029013C: nop

    // 0x00290140: lw          $v0, 0x30($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X30);
    // 0x00290144: j           L_002901F8
    // 0x00290148: sh          $zero, 0x20($sp)
    MEM_H(0X20, ctx->r29) = 0;
        goto L_002901F8;
    // 0x00290148: sh          $zero, 0x20($sp)
    MEM_H(0X20, ctx->r29) = 0;
L_0029014C:
    // 0x0029014C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00290150: jal         0x00290ACC
    // 0x00290154: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    func_00290ACC(rdram, ctx);
        goto after_3;
    // 0x00290154: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    after_3:
    // 0x00290158: lw          $v1, 0x2C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X2C);
    // 0x0029015C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00290160: bne         $v1, $v0, L_00290230
    if (ctx->r3 != ctx->r2) {
        // 0x00290164: nop
    
            goto L_00290230;
    }
    // 0x00290164: nop

    // 0x00290168: lw          $a0, 0x18($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X18);
    // 0x0029016C: beq         $a0, $zero, L_00290230
    if (ctx->r4 == 0) {
        // 0x00290170: nop
    
            goto L_00290230;
    }
    // 0x00290170: nop

    // 0x00290174: jal         0x0028F910
    // 0x00290178: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    func_0028F910(rdram, ctx);
        goto after_4;
    // 0x00290178: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    after_4:
    // 0x0029017C: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x00290180: beq         $v0, $zero, L_00290230
    if (ctx->r2 == 0) {
        // 0x00290184: nop
    
            goto L_00290230;
    }
    // 0x00290184: nop

    // 0x00290188: lw          $v0, 0x34($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X34);
    // 0x0029018C: j           L_002901F8
    // 0x00290190: sh          $zero, 0x20($sp)
    MEM_H(0X20, ctx->r29) = 0;
        goto L_002901F8;
    // 0x00290190: sh          $zero, 0x20($sp)
    MEM_H(0X20, ctx->r29) = 0;
L_00290194:
    // 0x00290194: addiu       $a0, $s0, 0x48
    ctx->r4 = ADD32(ctx->r16, 0X48);
    // 0x00290198: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x0029019C: lui         $a2, 0x7FFF
    ctx->r6 = S32(0X7FFF << 16);
    // 0x002901A0: ori         $a2, $a2, 0xFFFF
    ctx->r6 = ctx->r6 | 0XFFFF;
    // 0x002901A4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x002901A8: sw          $v0, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->r2;
    // 0x002901AC: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x002901B0: jal         0x00291034
    // 0x002901B4: sh          $v0, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r2;
    func_00291034(rdram, ctx);
        goto after_5;
    // 0x002901B4: sh          $v0, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r2;
    after_5:
    // 0x002901B8: j           L_00290230
    // 0x002901BC: nop

        goto L_00290230;
    // 0x002901BC: nop

L_002901C0:
    // 0x002901C0: lw          $v1, 0x2C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X2C);
    // 0x002901C4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x002901C8: bne         $v1, $v0, L_00290230
    if (ctx->r3 != ctx->r2) {
        // 0x002901CC: nop
    
            goto L_00290230;
    }
    // 0x002901CC: nop

    // 0x002901D0: lw          $a0, 0x18($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X18);
    // 0x002901D4: beq         $a0, $zero, L_00290230
    if (ctx->r4 == 0) {
        // 0x002901D8: nop
    
            goto L_00290230;
    }
    // 0x002901D8: nop

    // 0x002901DC: jal         0x0028F910
    // 0x002901E0: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    func_0028F910(rdram, ctx);
        goto after_6;
    // 0x002901E0: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    after_6:
    // 0x002901E4: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x002901E8: beq         $v0, $zero, L_00290230
    if (ctx->r2 == 0) {
        // 0x002901EC: nop
    
            goto L_00290230;
    }
    // 0x002901EC: nop

    // 0x002901F0: lw          $v0, 0x38($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X38);
    // 0x002901F4: sh          $zero, 0x20($sp)
    MEM_H(0X20, ctx->r29) = 0;
L_002901F8:
    // 0x002901F8: lw          $a2, 0x24($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X24);
    // 0x002901FC: mult        $v0, $a2
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r6)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x00290200: addiu       $a0, $s0, 0x48
    ctx->r4 = ADD32(ctx->r16, 0X48);
    // 0x00290204: mflo        $a2
    ctx->r6 = lo;
    // 0x00290208: jal         0x00291034
    // 0x0029020C: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    func_00291034(rdram, ctx);
        goto after_7;
    // 0x0029020C: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    after_7:
    // 0x00290210: j           L_00290230
    // 0x00290214: nop

        goto L_00290230;
    // 0x00290214: nop

L_00290218:
    // 0x00290218: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x0029021C: addiu       $a0, $a0, -0x5D70
    ctx->r4 = ADD32(ctx->r4, -0X5D70);
    // 0x00290220: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x00290224: addiu       $a1, $a1, -0x5D6C
    ctx->r5 = ADD32(ctx->r5, -0X5D6C);
    // 0x00290228: jal         0x0029B020
    // 0x0029022C: addiu       $a2, $zero, 0x190
    ctx->r6 = ADD32(0, 0X190);
    func_0029B020(rdram, ctx);
        goto after_8;
    // 0x0029022C: addiu       $a2, $zero, 0x190
    ctx->r6 = ADD32(0, 0X190);
    after_8:
L_00290230:
    // 0x00290230: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x00290234: lw          $s0, 0x40($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X40);
    // 0x00290238: jr          $ra
    // 0x0029023C: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x0029023C: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_00421320(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00421320: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x00421324: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x00421328: lw          $v0, -0x4($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X4);
    // 0x0042132C: jr          $ra
    // 0x00421330: nop

    return;
    // 0x00421330: nop

;}
RECOMP_FUNC void func_004540E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004540E0: jr          $ra
    // 0x004540E4: addiu       $v0, $zero, 0x7D0
    ctx->r2 = ADD32(0, 0X7D0);
    return;
    // 0x004540E4: addiu       $v0, $zero, 0x7D0
    ctx->r2 = ADD32(0, 0X7D0);
;}
RECOMP_FUNC void func_00223F50(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00223F50: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00223F54: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x00223F58: lw          $a0, 0x5C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5C);
    // 0x00223F5C: jal         0x002017D4
    // 0x00223F60: nop

    func_002017D4(rdram, ctx);
        goto after_0;
    // 0x00223F60: nop

    after_0:
    // 0x00223F64: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x00223F68: jr          $ra
    // 0x00223F6C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00223F6C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00260464(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00260464: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x00260468: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0026046C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00260470: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x00260474: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x00260478: sdc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X20, ctx->r29);
    // 0x0026047C: lbu         $v0, 0x36($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X36);
    // 0x00260480: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00260484: lwc1        $f20, 0x798C($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X798C);
    // 0x00260488: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x0026048C: sltiu       $v0, $v0, 0x2
    ctx->r2 = ctx->r2 < 0X2 ? 1 : 0;
    // 0x00260490: beq         $v0, $zero, L_002604A0
    if (ctx->r2 == 0) {
        // 0x00260494: addu        $s0, $a0, $zero
        ctx->r16 = ADD32(ctx->r4, 0);
            goto L_002604A0;
    }
    // 0x00260494: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x00260498: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0026049C: lwc1        $f20, 0x7990($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X7990);
L_002604A0:
    // 0x002604A0: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x002604A4: addiu       $v0, $v0, 0x6A0
    ctx->r2 = ADD32(ctx->r2, 0X6A0);
    // 0x002604A8: lw          $a1, 0x0($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X0);
    // 0x002604AC: lw          $a2, 0x4($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X4);
    // 0x002604B0: lw          $a3, 0x8($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X8);
    // 0x002604B4: jal         0x00246310
    // 0x002604B8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00246310(rdram, ctx);
        goto after_0;
    // 0x002604B8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x002604BC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x002604C0: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x002604C4: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x002604C8: jal         0x00245BAC
    // 0x002604CC: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_00245BAC(rdram, ctx);
        goto after_1;
    // 0x002604CC: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_1:
    // 0x002604D0: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x002604D4: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x002604D8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x002604DC: ldc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X20);
    // 0x002604E0: jr          $ra
    // 0x002604E4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x002604E4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_00264C80(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00264C80: lw          $v0, 0x10C($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X10C);
    // 0x00264C84: jr          $ra
    // 0x00264C88: nop

    return;
    // 0x00264C88: nop

;}
RECOMP_FUNC void func_0046006C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0046006C: addiu       $v0, $a0, -0x41
    ctx->r2 = ADD32(ctx->r4, -0X41);
    // 0x00460070: sltiu       $v0, $v0, 0x1A
    ctx->r2 = ctx->r2 < 0X1A ? 1 : 0;
    // 0x00460074: bnel        $v0, $zero, L_0046007C
    if (ctx->r2 != 0) {
        // 0x00460078: addiu       $a0, $a0, 0x20
        ctx->r4 = ADD32(ctx->r4, 0X20);
            goto L_0046007C;
    }
    goto skip_0;
    // 0x00460078: addiu       $a0, $a0, 0x20
    ctx->r4 = ADD32(ctx->r4, 0X20);
    skip_0:
L_0046007C:
    // 0x0046007C: jr          $ra
    // 0x00460080: addu        $v0, $a0, $zero
    ctx->r2 = ADD32(ctx->r4, 0);
    return;
    // 0x00460080: addu        $v0, $a0, $zero
    ctx->r2 = ADD32(ctx->r4, 0);
;}
RECOMP_FUNC void func_00454130(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00454130: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x00454134: lw          $v0, -0x5528($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X5528);
    // 0x00454138: xori        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 ^ 0X1;
    // 0x0045413C: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x00454140: sw          $v0, -0x5528($at)
    MEM_W(-0X5528, ctx->r1) = ctx->r2;
    // 0x00454144: jr          $ra
    // 0x00454148: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x00454148: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void func_00205110(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00205110: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00205114: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00205118: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x0020511C: jal         0x0029DFF0
    // 0x00205120: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    func_0029DFF0(rdram, ctx);
        goto after_0;
    // 0x00205120: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    after_0:
    // 0x00205124: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x00205128: lui         $v1, 0x800E
    ctx->r3 = S32(0X800E << 16);
    // 0x0020512C: lw          $v1, -0x7234($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X7234);
    // 0x00205130: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00205134: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x00205138: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x0020513C: sw          $v1, -0x7234($at)
    MEM_W(-0X7234, ctx->r1) = ctx->r3;
    // 0x00205140: beq         $v1, $v0, L_0020516C
    if (ctx->r3 == ctx->r2) {
        // 0x00205144: nop
    
            goto L_0020516C;
    }
    // 0x00205144: nop

    // 0x00205148: jal         0x0029E010
    // 0x0020514C: nop

    func_0029E010(rdram, ctx);
        goto after_1;
    // 0x0020514C: nop

    after_1:
    // 0x00205150: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x00205154: addiu       $a0, $a0, -0x7250
    ctx->r4 = ADD32(ctx->r4, -0X7250);
    // 0x00205158: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x0020515C: jal         0x0029B6F0
    // 0x00205160: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osRecvMesg_recomp(rdram, ctx);
        goto after_2;
    // 0x00205160: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_2:
    // 0x00205164: j           L_00205178
    // 0x00205168: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
        goto L_00205178;
    // 0x00205168: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
L_0020516C:
    // 0x0020516C: jal         0x0029E010
    // 0x00205170: nop

    func_0029E010(rdram, ctx);
        goto after_3;
    // 0x00205170: nop

    after_3:
    // 0x00205174: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
L_00205178:
    // 0x00205178: jal         0x002065CC
    // 0x0020517C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_002065CC(rdram, ctx);
        goto after_4;
    // 0x0020517C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_4:
    // 0x00205180: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
    // 0x00205184: lw          $v1, 0xC($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XC);
    // 0x00205188: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x0020518C: ori         $v1, $v1, 0x100
    ctx->r3 = ctx->r3 | 0X100;
    // 0x00205190: sw          $v0, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r2;
    // 0x00205194: jal         0x0029DFF0
    // 0x00205198: sw          $v1, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r3;
    func_0029DFF0(rdram, ctx);
        goto after_5;
    // 0x00205198: sw          $v1, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r3;
    after_5:
    // 0x0020519C: lui         $v1, 0x800E
    ctx->r3 = S32(0X800E << 16);
    // 0x002051A0: lw          $v1, -0x7234($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X7234);
    // 0x002051A4: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x002051A8: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x002051AC: sw          $v1, -0x7234($at)
    MEM_W(-0X7234, ctx->r1) = ctx->r3;
    // 0x002051B0: beq         $v1, $zero, L_002051DC
    if (ctx->r3 == 0) {
        // 0x002051B4: nop
    
            goto L_002051DC;
    }
    // 0x002051B4: nop

    // 0x002051B8: jal         0x0029E010
    // 0x002051BC: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    func_0029E010(rdram, ctx);
        goto after_6;
    // 0x002051BC: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    after_6:
    // 0x002051C0: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x002051C4: addiu       $a0, $a0, -0x7250
    ctx->r4 = ADD32(ctx->r4, -0X7250);
    // 0x002051C8: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x002051CC: jal         0x0029B820
    // 0x002051D0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osSendMesg_recomp(rdram, ctx);
        goto after_7;
    // 0x002051D0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_7:
    // 0x002051D4: j           L_002051E4
    // 0x002051D8: nop

        goto L_002051E4;
    // 0x002051D8: nop

L_002051DC:
    // 0x002051DC: jal         0x0029E010
    // 0x002051E0: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    func_0029E010(rdram, ctx);
        goto after_8;
    // 0x002051E0: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    after_8:
L_002051E4:
    // 0x002051E4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x002051E8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x002051EC: jr          $ra
    // 0x002051F0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x002051F0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00299198(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00299198: addiu       $sp, $sp, -0x80
    ctx->r29 = ADD32(ctx->r29, -0X80);
    // 0x0029919C: sw          $s0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r16;
    // 0x002991A0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x002991A4: sw          $s5, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r21;
    // 0x002991A8: addu        $s5, $a2, $zero
    ctx->r21 = ADD32(ctx->r6, 0);
    // 0x002991AC: addiu       $a2, $zero, 0xFE
    ctx->r6 = ADD32(0, 0XFE);
    // 0x002991B0: addiu       $a0, $zero, 0x1F
    ctx->r4 = ADD32(0, 0X1F);
    // 0x002991B4: addiu       $v1, $sp, 0x37
    ctx->r3 = ADD32(ctx->r29, 0X37);
    // 0x002991B8: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x002991BC: sw          $ra, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r31;
    // 0x002991C0: sw          $s4, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r20;
    // 0x002991C4: sw          $s3, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r19;
    // 0x002991C8: sw          $s2, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r18;
    // 0x002991CC: sw          $s1, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r17;
    // 0x002991D0: sw          $s0, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r16;
    // 0x002991D4: sw          $s5, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->r21;
    // 0x002991D8: sw          $zero, 0x0($a1)
    MEM_W(0X0, ctx->r5) = 0;
    // 0x002991DC: sb          $v0, 0x65($a1)
    MEM_B(0X65, ctx->r5) = ctx->r2;
L_002991E0:
    // 0x002991E0: sb          $a2, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r6;
    // 0x002991E4: addiu       $a0, $a0, -0x1
    ctx->r4 = ADD32(ctx->r4, -0X1);
    // 0x002991E8: bgez        $a0, L_002991E0
    if (SIGNED(ctx->r4) >= 0) {
        // 0x002991EC: addiu       $v1, $v1, -0x1
        ctx->r3 = ADD32(ctx->r3, -0X1);
            goto L_002991E0;
    }
    // 0x002991EC: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x002991F0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x002991F4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x002991F8: addu        $a1, $s5, $zero
    ctx->r5 = ADD32(ctx->r21, 0);
    // 0x002991FC: addiu       $a2, $zero, 0x400
    ctx->r6 = ADD32(0, 0X400);
    // 0x00299200: jal         0x00299A40
    // 0x00299204: addiu       $a3, $sp, 0x18
    ctx->r7 = ADD32(ctx->r29, 0X18);
    func_00299A40(rdram, ctx);
        goto after_0;
    // 0x00299204: addiu       $a3, $sp, 0x18
    ctx->r7 = ADD32(ctx->r29, 0X18);
    after_0:
    // 0x00299208: addiu       $s1, $zero, 0x2
    ctx->r17 = ADD32(0, 0X2);
    // 0x0029920C: bne         $v0, $s1, L_00299228
    if (ctx->r2 != ctx->r17) {
        // 0x00299210: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_00299228;
    }
    // 0x00299210: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00299214: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x00299218: addu        $a1, $s5, $zero
    ctx->r5 = ADD32(ctx->r21, 0);
    // 0x0029921C: addiu       $a2, $zero, 0x400
    ctx->r6 = ADD32(0, 0X400);
    // 0x00299220: jal         0x00299A40
    // 0x00299224: addiu       $a3, $sp, 0x18
    ctx->r7 = ADD32(ctx->r29, 0X18);
    func_00299A40(rdram, ctx);
        goto after_1;
    // 0x00299224: addiu       $a3, $sp, 0x18
    ctx->r7 = ADD32(ctx->r29, 0X18);
    after_1:
L_00299228:
    // 0x00299228: bne         $v0, $zero, L_00299650
    if (ctx->r2 != 0) {
        // 0x0029922C: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_00299650;
    }
    // 0x0029922C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00299230: addu        $a1, $s5, $zero
    ctx->r5 = ADD32(ctx->r21, 0);
    // 0x00299234: addiu       $a2, $zero, 0x400
    ctx->r6 = ADD32(0, 0X400);
    // 0x00299238: jal         0x00299680
    // 0x0029923C: addiu       $a3, $sp, 0x18
    ctx->r7 = ADD32(ctx->r29, 0X18);
    func_00299680(rdram, ctx);
        goto after_2;
    // 0x0029923C: addiu       $a3, $sp, 0x18
    ctx->r7 = ADD32(ctx->r29, 0X18);
    after_2:
    // 0x00299240: beql        $v0, $s1, L_00299248
    if (ctx->r2 == ctx->r17) {
        // 0x00299244: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_00299248;
    }
    goto skip_0;
    // 0x00299244: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    skip_0:
L_00299248:
    // 0x00299248: bne         $v0, $zero, L_00299650
    if (ctx->r2 != 0) {
        // 0x0029924C: nop
    
            goto L_00299650;
    }
    // 0x0029924C: nop

    // 0x00299250: lbu         $v1, 0x37($sp)
    ctx->r3 = MEM_BU(ctx->r29, 0X37);
    // 0x00299254: addiu       $v0, $zero, 0xFE
    ctx->r2 = ADD32(0, 0XFE);
    // 0x00299258: beq         $v1, $v0, L_002992E8
    if (ctx->r3 == ctx->r2) {
        // 0x0029925C: addiu       $v1, $zero, 0x80
        ctx->r3 = ADD32(0, 0X80);
            goto L_002992E8;
    }
    // 0x0029925C: addiu       $v1, $zero, 0x80
    ctx->r3 = ADD32(0, 0X80);
    // 0x00299260: addiu       $a0, $zero, 0x1F
    ctx->r4 = ADD32(0, 0X1F);
    // 0x00299264: addiu       $v0, $sp, 0x37
    ctx->r2 = ADD32(ctx->r29, 0X37);
L_00299268:
    // 0x00299268: sb          $v1, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r3;
    // 0x0029926C: addiu       $a0, $a0, -0x1
    ctx->r4 = ADD32(ctx->r4, -0X1);
    // 0x00299270: bgez        $a0, L_00299268
    if (SIGNED(ctx->r4) >= 0) {
        // 0x00299274: addiu       $v0, $v0, -0x1
        ctx->r2 = ADD32(ctx->r2, -0X1);
            goto L_00299268;
    }
    // 0x00299274: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x00299278: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x0029927C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00299280: addu        $a1, $s5, $zero
    ctx->r5 = ADD32(ctx->r21, 0);
    // 0x00299284: addiu       $a2, $zero, 0x400
    ctx->r6 = ADD32(0, 0X400);
    // 0x00299288: jal         0x00299A40
    // 0x0029928C: addiu       $a3, $sp, 0x18
    ctx->r7 = ADD32(ctx->r29, 0X18);
    func_00299A40(rdram, ctx);
        goto after_3;
    // 0x0029928C: addiu       $a3, $sp, 0x18
    ctx->r7 = ADD32(ctx->r29, 0X18);
    after_3:
    // 0x00299290: addiu       $s1, $zero, 0x2
    ctx->r17 = ADD32(0, 0X2);
    // 0x00299294: bne         $v0, $s1, L_002992B0
    if (ctx->r2 != ctx->r17) {
        // 0x00299298: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_002992B0;
    }
    // 0x00299298: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0029929C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x002992A0: addu        $a1, $s5, $zero
    ctx->r5 = ADD32(ctx->r21, 0);
    // 0x002992A4: addiu       $a2, $zero, 0x400
    ctx->r6 = ADD32(0, 0X400);
    // 0x002992A8: jal         0x00299A40
    // 0x002992AC: addiu       $a3, $sp, 0x18
    ctx->r7 = ADD32(ctx->r29, 0X18);
    func_00299A40(rdram, ctx);
        goto after_4;
    // 0x002992AC: addiu       $a3, $sp, 0x18
    ctx->r7 = ADD32(ctx->r29, 0X18);
    after_4:
L_002992B0:
    // 0x002992B0: bne         $v0, $zero, L_00299650
    if (ctx->r2 != 0) {
        // 0x002992B4: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_00299650;
    }
    // 0x002992B4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x002992B8: addu        $a1, $s5, $zero
    ctx->r5 = ADD32(ctx->r21, 0);
    // 0x002992BC: addiu       $a2, $zero, 0x400
    ctx->r6 = ADD32(0, 0X400);
    // 0x002992C0: jal         0x00299680
    // 0x002992C4: addiu       $a3, $sp, 0x18
    ctx->r7 = ADD32(ctx->r29, 0X18);
    func_00299680(rdram, ctx);
        goto after_5;
    // 0x002992C4: addiu       $a3, $sp, 0x18
    ctx->r7 = ADD32(ctx->r29, 0X18);
    after_5:
    // 0x002992C8: beql        $v0, $s1, L_002992D0
    if (ctx->r2 == ctx->r17) {
        // 0x002992CC: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_002992D0;
    }
    goto skip_1;
    // 0x002992CC: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    skip_1:
L_002992D0:
    // 0x002992D0: bne         $v0, $zero, L_00299650
    if (ctx->r2 != 0) {
        // 0x002992D4: nop
    
            goto L_00299650;
    }
    // 0x002992D4: nop

    // 0x002992D8: lbu         $v1, 0x37($sp)
    ctx->r3 = MEM_BU(ctx->r29, 0X37);
    // 0x002992DC: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x002992E0: beq         $v1, $v0, L_002992F0
    if (ctx->r3 == ctx->r2) {
        // 0x002992E4: sll         $v0, $s5, 2
        ctx->r2 = S32(ctx->r21 << 2);
            goto L_002992F0;
    }
    // 0x002992E4: sll         $v0, $s5, 2
    ctx->r2 = S32(ctx->r21 << 2);
L_002992E8:
    // 0x002992E8: j           L_00299650
    // 0x002992EC: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
        goto L_00299650;
    // 0x002992EC: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
L_002992F0:
    // 0x002992F0: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x002992F4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x002992F8: lw          $v0, 0x7A40($at)
    ctx->r2 = MEM_W(ctx->r1, 0X7A40);
    // 0x002992FC: bne         $v0, $zero, L_00299650
    if (ctx->r2 != 0) {
        // 0x00299300: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_00299650;
    }
    // 0x00299300: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x00299304: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x00299308: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x0029930C: addiu       $a3, $a3, 0x1530
    ctx->r7 = ADD32(ctx->r7, 0X1530);
    // 0x00299310: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x00299314: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x00299318: addiu       $a1, $a1, 0x1650
    ctx->r5 = ADD32(ctx->r5, 0X1650);
L_0029931C:
    // 0x0029931C: addu        $v0, $a0, $a3
    ctx->r2 = ADD32(ctx->r4, ctx->r7);
    // 0x00299320: addu        $v1, $a0, $a1
    ctx->r3 = ADD32(ctx->r4, ctx->r5);
    // 0x00299324: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x00299328: sb          $a2, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r6;
    // 0x0029932C: slti        $v0, $a0, 0x20
    ctx->r2 = SIGNED(ctx->r4) < 0X20 ? 1 : 0;
    // 0x00299330: bne         $v0, $zero, L_0029931C
    if (ctx->r2 != 0) {
        // 0x00299334: sb          $zero, 0x0($v1)
        MEM_B(0X0, ctx->r3) = 0;
            goto L_0029931C;
    }
    // 0x00299334: sb          $zero, 0x0($v1)
    MEM_B(0X0, ctx->r3) = 0;
    // 0x00299338: addiu       $s1, $sp, 0x38
    ctx->r17 = ADD32(ctx->r29, 0X38);
    // 0x0029933C: lui         $s3, 0x8012
    ctx->r19 = S32(0X8012 << 16);
    // 0x00299340: addiu       $s3, $s3, 0x1530
    ctx->r19 = ADD32(ctx->r19, 0X1530);
    // 0x00299344: sll         $v1, $s5, 6
    ctx->r3 = S32(ctx->r21 << 6);
    // 0x00299348: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x0029934C: addiu       $v0, $v0, 0x1430
    ctx->r2 = ADD32(ctx->r2, 0X1430);
    // 0x00299350: addu        $s2, $v1, $v0
    ctx->r18 = ADD32(ctx->r3, ctx->r2);
    // 0x00299354: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x00299358: addiu       $a0, $zero, 0xE
    ctx->r4 = ADD32(0, 0XE);
    // 0x0029935C: addiu       $v0, $s2, 0x38
    ctx->r2 = ADD32(ctx->r18, 0X38);
L_00299360:
    // 0x00299360: sw          $zero, 0x0($v0)
    MEM_W(0X0, ctx->r2) = 0;
    // 0x00299364: addiu       $a0, $a0, -0x1
    ctx->r4 = ADD32(ctx->r4, -0X1);
    // 0x00299368: bgez        $a0, L_00299360
    if (SIGNED(ctx->r4) >= 0) {
        // 0x0029936C: addiu       $v0, $v0, -0x4
        ctx->r2 = ADD32(ctx->r2, -0X4);
            goto L_00299360;
    }
    // 0x0029936C: addiu       $v0, $v0, -0x4
    ctx->r2 = ADD32(ctx->r2, -0X4);
    // 0x00299370: addiu       $a0, $zero, 0x600
    ctx->r4 = ADD32(0, 0X600);
    // 0x00299374: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x00299378: addiu       $s0, $zero, 0xFF
    ctx->r16 = ADD32(0, 0XFF);
    // 0x0029937C: addiu       $v0, $zero, 0x23
    ctx->r2 = ADD32(0, 0X23);
    // 0x00299380: sw          $v1, 0x3C($a1)
    MEM_W(0X3C, ctx->r5) = ctx->r3;
    // 0x00299384: sb          $v0, 0x1($s1)
    MEM_B(0X1, ctx->r17) = ctx->r2;
    // 0x00299388: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x0029938C: sb          $s0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r16;
    // 0x00299390: sb          $v1, 0x2($s1)
    MEM_B(0X2, ctx->r17) = ctx->r3;
    // 0x00299394: jal         0x00299E00
    // 0x00299398: sb          $v0, 0x3($s1)
    MEM_B(0X3, ctx->r17) = ctx->r2;
    func_00299E00(rdram, ctx);
        goto after_6;
    // 0x00299398: sb          $v0, 0x3($s1)
    MEM_B(0X3, ctx->r17) = ctx->r2;
    after_6:
    // 0x0029939C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x002993A0: addiu       $v1, $zero, 0x600
    ctx->r3 = ADD32(0, 0X600);
    // 0x002993A4: sll         $v1, $v1, 5
    ctx->r3 = S32(ctx->r3 << 5);
    // 0x002993A8: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x002993AC: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x002993B0: sh          $v0, 0x3C($sp)
    MEM_H(0X3C, ctx->r29) = ctx->r2;
    // 0x002993B4: sb          $s0, 0x26($s1)
    MEM_B(0X26, ctx->r17) = ctx->r16;
L_002993B8:
    // 0x002993B8: lbu         $v1, 0x0($s3)
    ctx->r3 = MEM_BU(ctx->r19, 0X0);
    // 0x002993BC: addu        $v0, $s1, $a0
    ctx->r2 = ADD32(ctx->r17, ctx->r4);
    // 0x002993C0: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x002993C4: sb          $v1, 0x6($v0)
    MEM_B(0X6, ctx->r2) = ctx->r3;
    // 0x002993C8: slti        $v0, $a0, 0x20
    ctx->r2 = SIGNED(ctx->r4) < 0X20 ? 1 : 0;
    // 0x002993CC: bne         $v0, $zero, L_002993B8
    if (ctx->r2 != 0) {
        // 0x002993D0: addiu       $s3, $s3, 0x1
        ctx->r19 = ADD32(ctx->r19, 0X1);
            goto L_002993B8;
    }
    // 0x002993D0: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x002993D4: beq         $s5, $zero, L_002993FC
    if (ctx->r21 == 0) {
        // 0x002993D8: addu        $a2, $s2, $zero
        ctx->r6 = ADD32(ctx->r18, 0);
            goto L_002993FC;
    }
    // 0x002993D8: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    // 0x002993DC: blez        $s5, L_002993FC
    if (SIGNED(ctx->r21) <= 0) {
        // 0x002993E0: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_002993FC;
    }
    // 0x002993E0: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
L_002993E4:
    // 0x002993E4: sb          $zero, 0x0($s2)
    MEM_B(0X0, ctx->r18) = 0;
    // 0x002993E8: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x002993EC: slt         $v0, $a0, $s5
    ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r21) ? 1 : 0;
    // 0x002993F0: bne         $v0, $zero, L_002993E4
    if (ctx->r2 != 0) {
        // 0x002993F4: addiu       $s2, $s2, 0x1
        ctx->r18 = ADD32(ctx->r18, 0X1);
            goto L_002993E4;
    }
    // 0x002993F4: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x002993F8: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
L_002993FC:
    // 0x002993FC: andi        $v0, $s2, 0x3
    ctx->r2 = ctx->r18 & 0X3;
    // 0x00299400: beq         $v0, $zero, L_00299460
    if (ctx->r2 == 0) {
        // 0x00299404: addiu       $a1, $sp, 0x38
        ctx->r5 = ADD32(ctx->r29, 0X38);
            goto L_00299460;
    }
    // 0x00299404: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    // 0x00299408: addiu       $v0, $sp, 0x58
    ctx->r2 = ADD32(ctx->r29, 0X58);
L_0029940C:
    // 0x0029940C: lwl         $t0, 0x0($a1)
    ctx->r8 = do_lwl(rdram, ctx->r8, ctx->r5, 0X0);
    // 0x00299410: lwr         $t0, 0x3($a1)
    ctx->r8 = do_lwr(rdram, ctx->r8, ctx->r5, 0X3);
    // 0x00299414: lwl         $t1, 0x4($a1)
    ctx->r9 = do_lwl(rdram, ctx->r9, ctx->r5, 0X4);
    // 0x00299418: lwr         $t1, 0x7($a1)
    ctx->r9 = do_lwr(rdram, ctx->r9, ctx->r5, 0X7);
    // 0x0029941C: lwl         $t2, 0x8($a1)
    ctx->r10 = do_lwl(rdram, ctx->r10, ctx->r5, 0X8);
    // 0x00299420: lwr         $t2, 0xB($a1)
    ctx->r10 = do_lwr(rdram, ctx->r10, ctx->r5, 0XB);
    // 0x00299424: lwl         $t3, 0xC($a1)
    ctx->r11 = do_lwl(rdram, ctx->r11, ctx->r5, 0XC);
    // 0x00299428: lwr         $t3, 0xF($a1)
    ctx->r11 = do_lwr(rdram, ctx->r11, ctx->r5, 0XF);
    // 0x0029942C: swl         $t0, 0x0($a2)
    do_swl(rdram, 0X0, ctx->r6, ctx->r8);
    // 0x00299430: swr         $t0, 0x3($a2)
    do_swr(rdram, 0X3, ctx->r6, ctx->r8);
    // 0x00299434: swl         $t1, 0x4($a2)
    do_swl(rdram, 0X4, ctx->r6, ctx->r9);
    // 0x00299438: swr         $t1, 0x7($a2)
    do_swr(rdram, 0X7, ctx->r6, ctx->r9);
    // 0x0029943C: swl         $t2, 0x8($a2)
    do_swl(rdram, 0X8, ctx->r6, ctx->r10);
    // 0x00299440: swr         $t2, 0xB($a2)
    do_swr(rdram, 0XB, ctx->r6, ctx->r10);
    // 0x00299444: swl         $t3, 0xC($a2)
    do_swl(rdram, 0XC, ctx->r6, ctx->r11);
    // 0x00299448: swr         $t3, 0xF($a2)
    do_swr(rdram, 0XF, ctx->r6, ctx->r11);
    // 0x0029944C: addiu       $a1, $a1, 0x10
    ctx->r5 = ADD32(ctx->r5, 0X10);
    // 0x00299450: bne         $a1, $v0, L_0029940C
    if (ctx->r5 != ctx->r2) {
        // 0x00299454: addiu       $a2, $a2, 0x10
        ctx->r6 = ADD32(ctx->r6, 0X10);
            goto L_0029940C;
    }
    // 0x00299454: addiu       $a2, $a2, 0x10
    ctx->r6 = ADD32(ctx->r6, 0X10);
    // 0x00299458: j           L_00299494
    // 0x0029945C: addiu       $s3, $sp, 0x38
    ctx->r19 = ADD32(ctx->r29, 0X38);
        goto L_00299494;
    // 0x0029945C: addiu       $s3, $sp, 0x38
    ctx->r19 = ADD32(ctx->r29, 0X38);
L_00299460:
    // 0x00299460: addiu       $v0, $sp, 0x58
    ctx->r2 = ADD32(ctx->r29, 0X58);
L_00299464:
    // 0x00299464: lw          $t0, 0x0($a1)
    ctx->r8 = MEM_W(ctx->r5, 0X0);
    // 0x00299468: lw          $t1, 0x4($a1)
    ctx->r9 = MEM_W(ctx->r5, 0X4);
    // 0x0029946C: lw          $t2, 0x8($a1)
    ctx->r10 = MEM_W(ctx->r5, 0X8);
    // 0x00299470: lw          $t3, 0xC($a1)
    ctx->r11 = MEM_W(ctx->r5, 0XC);
    // 0x00299474: sw          $t0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r8;
    // 0x00299478: sw          $t1, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r9;
    // 0x0029947C: sw          $t2, 0x8($a2)
    MEM_W(0X8, ctx->r6) = ctx->r10;
    // 0x00299480: sw          $t3, 0xC($a2)
    MEM_W(0XC, ctx->r6) = ctx->r11;
    // 0x00299484: addiu       $a1, $a1, 0x10
    ctx->r5 = ADD32(ctx->r5, 0X10);
    // 0x00299488: bne         $a1, $v0, L_00299464
    if (ctx->r5 != ctx->r2) {
        // 0x0029948C: addiu       $a2, $a2, 0x10
        ctx->r6 = ADD32(ctx->r6, 0X10);
            goto L_00299464;
    }
    // 0x0029948C: addiu       $a2, $a2, 0x10
    ctx->r6 = ADD32(ctx->r6, 0X10);
    // 0x00299490: addiu       $s3, $sp, 0x38
    ctx->r19 = ADD32(ctx->r29, 0X38);
L_00299494:
    // 0x00299494: lui         $s4, 0x8012
    ctx->r20 = S32(0X8012 << 16);
    // 0x00299498: addiu       $s4, $s4, 0x1650
    ctx->r20 = ADD32(ctx->r20, 0X1650);
    // 0x0029949C: sll         $v1, $s5, 6
    ctx->r3 = S32(ctx->r21 << 6);
    // 0x002994A0: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x002994A4: addiu       $v0, $v0, 0x1550
    ctx->r2 = ADD32(ctx->r2, 0X1550);
    // 0x002994A8: addu        $s1, $v1, $v0
    ctx->r17 = ADD32(ctx->r3, ctx->r2);
    // 0x002994AC: addu        $a3, $s1, $zero
    ctx->r7 = ADD32(ctx->r17, 0);
    // 0x002994B0: addiu       $a0, $zero, 0xE
    ctx->r4 = ADD32(0, 0XE);
    // 0x002994B4: addiu       $v1, $s1, 0x38
    ctx->r3 = ADD32(ctx->r17, 0X38);
    // 0x002994B8: addiu       $v0, $zero, 0xFE
    ctx->r2 = ADD32(0, 0XFE);
    // 0x002994BC: lwl         $t0, 0x0($a1)
    ctx->r8 = do_lwl(rdram, ctx->r8, ctx->r5, 0X0);
    // 0x002994C0: lwr         $t0, 0x3($a1)
    ctx->r8 = do_lwr(rdram, ctx->r8, ctx->r5, 0X3);
    // 0x002994C4: lwl         $t1, 0x4($a1)
    ctx->r9 = do_lwl(rdram, ctx->r9, ctx->r5, 0X4);
    // 0x002994C8: lwr         $t1, 0x7($a1)
    ctx->r9 = do_lwr(rdram, ctx->r9, ctx->r5, 0X7);
    // 0x002994CC: swl         $t0, 0x0($a2)
    do_swl(rdram, 0X0, ctx->r6, ctx->r8);
    // 0x002994D0: swr         $t0, 0x3($a2)
    do_swr(rdram, 0X3, ctx->r6, ctx->r8);
    // 0x002994D4: swl         $t1, 0x4($a2)
    do_swl(rdram, 0X4, ctx->r6, ctx->r9);
    // 0x002994D8: swr         $t1, 0x7($a2)
    do_swr(rdram, 0X7, ctx->r6, ctx->r9);
    // 0x002994DC: sb          $v0, 0x28($s2)
    MEM_B(0X28, ctx->r18) = ctx->r2;
L_002994E0:
    // 0x002994E0: sw          $zero, 0x0($v1)
    MEM_W(0X0, ctx->r3) = 0;
    // 0x002994E4: addiu       $a0, $a0, -0x1
    ctx->r4 = ADD32(ctx->r4, -0X1);
    // 0x002994E8: bgez        $a0, L_002994E0
    if (SIGNED(ctx->r4) >= 0) {
        // 0x002994EC: addiu       $v1, $v1, -0x4
        ctx->r3 = ADD32(ctx->r3, -0X4);
            goto L_002994E0;
    }
    // 0x002994EC: addiu       $v1, $v1, -0x4
    ctx->r3 = ADD32(ctx->r3, -0X4);
    // 0x002994F0: addiu       $a0, $zero, 0x600
    ctx->r4 = ADD32(0, 0X600);
    // 0x002994F4: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x002994F8: addiu       $s0, $zero, 0xFF
    ctx->r16 = ADD32(0, 0XFF);
    // 0x002994FC: addiu       $v0, $zero, 0x23
    ctx->r2 = ADD32(0, 0X23);
    // 0x00299500: sw          $v1, 0x3C($a3)
    MEM_W(0X3C, ctx->r7) = ctx->r3;
    // 0x00299504: sb          $v0, 0x1($s3)
    MEM_B(0X1, ctx->r19) = ctx->r2;
    // 0x00299508: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x0029950C: sb          $s0, 0x0($s3)
    MEM_B(0X0, ctx->r19) = ctx->r16;
    // 0x00299510: sb          $v1, 0x2($s3)
    MEM_B(0X2, ctx->r19) = ctx->r3;
    // 0x00299514: jal         0x00299E00
    // 0x00299518: sb          $v0, 0x3($s3)
    MEM_B(0X3, ctx->r19) = ctx->r2;
    func_00299E00(rdram, ctx);
        goto after_7;
    // 0x00299518: sb          $v0, 0x3($s3)
    MEM_B(0X3, ctx->r19) = ctx->r2;
    after_7:
    // 0x0029951C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x00299520: addiu       $v1, $zero, 0x600
    ctx->r3 = ADD32(0, 0X600);
    // 0x00299524: sll         $v1, $v1, 5
    ctx->r3 = S32(ctx->r3 << 5);
    // 0x00299528: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x0029952C: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x00299530: sh          $v0, 0x3C($sp)
    MEM_H(0X3C, ctx->r29) = ctx->r2;
    // 0x00299534: sb          $s0, 0x26($s3)
    MEM_B(0X26, ctx->r19) = ctx->r16;
L_00299538:
    // 0x00299538: lbu         $v1, 0x0($s4)
    ctx->r3 = MEM_BU(ctx->r20, 0X0);
    // 0x0029953C: addu        $v0, $s3, $a0
    ctx->r2 = ADD32(ctx->r19, ctx->r4);
    // 0x00299540: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x00299544: sb          $v1, 0x6($v0)
    MEM_B(0X6, ctx->r2) = ctx->r3;
    // 0x00299548: slti        $v0, $a0, 0x20
    ctx->r2 = SIGNED(ctx->r4) < 0X20 ? 1 : 0;
    // 0x0029954C: bne         $v0, $zero, L_00299538
    if (ctx->r2 != 0) {
        // 0x00299550: addiu       $s4, $s4, 0x1
        ctx->r20 = ADD32(ctx->r20, 0X1);
            goto L_00299538;
    }
    // 0x00299550: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
    // 0x00299554: beq         $s5, $zero, L_0029957C
    if (ctx->r21 == 0) {
        // 0x00299558: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_0029957C;
    }
    // 0x00299558: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0029955C: blez        $s5, L_00299578
    if (SIGNED(ctx->r21) <= 0) {
        // 0x00299560: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_00299578;
    }
    // 0x00299560: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
L_00299564:
    // 0x00299564: sb          $zero, 0x0($s1)
    MEM_B(0X0, ctx->r17) = 0;
    // 0x00299568: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x0029956C: slt         $v0, $a0, $s5
    ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r21) ? 1 : 0;
    // 0x00299570: bne         $v0, $zero, L_00299564
    if (ctx->r2 != 0) {
        // 0x00299574: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_00299564;
    }
    // 0x00299574: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_00299578:
    // 0x00299578: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
L_0029957C:
    // 0x0029957C: andi        $v0, $s1, 0x3
    ctx->r2 = ctx->r17 & 0X3;
    // 0x00299580: beq         $v0, $zero, L_002995E0
    if (ctx->r2 == 0) {
        // 0x00299584: addiu       $v1, $sp, 0x38
        ctx->r3 = ADD32(ctx->r29, 0X38);
            goto L_002995E0;
    }
    // 0x00299584: addiu       $v1, $sp, 0x38
    ctx->r3 = ADD32(ctx->r29, 0X38);
    // 0x00299588: addiu       $v0, $sp, 0x58
    ctx->r2 = ADD32(ctx->r29, 0X58);
L_0029958C:
    // 0x0029958C: lwl         $t0, 0x0($v1)
    ctx->r8 = do_lwl(rdram, ctx->r8, ctx->r3, 0X0);
    // 0x00299590: lwr         $t0, 0x3($v1)
    ctx->r8 = do_lwr(rdram, ctx->r8, ctx->r3, 0X3);
    // 0x00299594: lwl         $t1, 0x4($v1)
    ctx->r9 = do_lwl(rdram, ctx->r9, ctx->r3, 0X4);
    // 0x00299598: lwr         $t1, 0x7($v1)
    ctx->r9 = do_lwr(rdram, ctx->r9, ctx->r3, 0X7);
    // 0x0029959C: lwl         $t2, 0x8($v1)
    ctx->r10 = do_lwl(rdram, ctx->r10, ctx->r3, 0X8);
    // 0x002995A0: lwr         $t2, 0xB($v1)
    ctx->r10 = do_lwr(rdram, ctx->r10, ctx->r3, 0XB);
    // 0x002995A4: lwl         $t3, 0xC($v1)
    ctx->r11 = do_lwl(rdram, ctx->r11, ctx->r3, 0XC);
    // 0x002995A8: lwr         $t3, 0xF($v1)
    ctx->r11 = do_lwr(rdram, ctx->r11, ctx->r3, 0XF);
    // 0x002995AC: swl         $t0, 0x0($a0)
    do_swl(rdram, 0X0, ctx->r4, ctx->r8);
    // 0x002995B0: swr         $t0, 0x3($a0)
    do_swr(rdram, 0X3, ctx->r4, ctx->r8);
    // 0x002995B4: swl         $t1, 0x4($a0)
    do_swl(rdram, 0X4, ctx->r4, ctx->r9);
    // 0x002995B8: swr         $t1, 0x7($a0)
    do_swr(rdram, 0X7, ctx->r4, ctx->r9);
    // 0x002995BC: swl         $t2, 0x8($a0)
    do_swl(rdram, 0X8, ctx->r4, ctx->r10);
    // 0x002995C0: swr         $t2, 0xB($a0)
    do_swr(rdram, 0XB, ctx->r4, ctx->r10);
    // 0x002995C4: swl         $t3, 0xC($a0)
    do_swl(rdram, 0XC, ctx->r4, ctx->r11);
    // 0x002995C8: swr         $t3, 0xF($a0)
    do_swr(rdram, 0XF, ctx->r4, ctx->r11);
    // 0x002995CC: addiu       $v1, $v1, 0x10
    ctx->r3 = ADD32(ctx->r3, 0X10);
    // 0x002995D0: bne         $v1, $v0, L_0029958C
    if (ctx->r3 != ctx->r2) {
        // 0x002995D4: addiu       $a0, $a0, 0x10
        ctx->r4 = ADD32(ctx->r4, 0X10);
            goto L_0029958C;
    }
    // 0x002995D4: addiu       $a0, $a0, 0x10
    ctx->r4 = ADD32(ctx->r4, 0X10);
    // 0x002995D8: j           L_00299614
    // 0x002995DC: addiu       $v0, $zero, 0xFE
    ctx->r2 = ADD32(0, 0XFE);
        goto L_00299614;
    // 0x002995DC: addiu       $v0, $zero, 0xFE
    ctx->r2 = ADD32(0, 0XFE);
L_002995E0:
    // 0x002995E0: addiu       $v0, $sp, 0x58
    ctx->r2 = ADD32(ctx->r29, 0X58);
L_002995E4:
    // 0x002995E4: lw          $t0, 0x0($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X0);
    // 0x002995E8: lw          $t1, 0x4($v1)
    ctx->r9 = MEM_W(ctx->r3, 0X4);
    // 0x002995EC: lw          $t2, 0x8($v1)
    ctx->r10 = MEM_W(ctx->r3, 0X8);
    // 0x002995F0: lw          $t3, 0xC($v1)
    ctx->r11 = MEM_W(ctx->r3, 0XC);
    // 0x002995F4: sw          $t0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r8;
    // 0x002995F8: sw          $t1, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r9;
    // 0x002995FC: sw          $t2, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r10;
    // 0x00299600: sw          $t3, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->r11;
    // 0x00299604: addiu       $v1, $v1, 0x10
    ctx->r3 = ADD32(ctx->r3, 0X10);
    // 0x00299608: bne         $v1, $v0, L_002995E4
    if (ctx->r3 != ctx->r2) {
        // 0x0029960C: addiu       $a0, $a0, 0x10
        ctx->r4 = ADD32(ctx->r4, 0X10);
            goto L_002995E4;
    }
    // 0x0029960C: addiu       $a0, $a0, 0x10
    ctx->r4 = ADD32(ctx->r4, 0X10);
    // 0x00299610: addiu       $v0, $zero, 0xFE
    ctx->r2 = ADD32(0, 0XFE);
L_00299614:
    // 0x00299614: lwl         $t0, 0x0($v1)
    ctx->r8 = do_lwl(rdram, ctx->r8, ctx->r3, 0X0);
    // 0x00299618: lwr         $t0, 0x3($v1)
    ctx->r8 = do_lwr(rdram, ctx->r8, ctx->r3, 0X3);
    // 0x0029961C: lwl         $t1, 0x4($v1)
    ctx->r9 = do_lwl(rdram, ctx->r9, ctx->r3, 0X4);
    // 0x00299620: lwr         $t1, 0x7($v1)
    ctx->r9 = do_lwr(rdram, ctx->r9, ctx->r3, 0X7);
    // 0x00299624: swl         $t0, 0x0($a0)
    do_swl(rdram, 0X0, ctx->r4, ctx->r8);
    // 0x00299628: swr         $t0, 0x3($a0)
    do_swr(rdram, 0X3, ctx->r4, ctx->r8);
    // 0x0029962C: swl         $t1, 0x4($a0)
    do_swl(rdram, 0X4, ctx->r4, ctx->r9);
    // 0x00299630: swr         $t1, 0x7($a0)
    do_swr(rdram, 0X7, ctx->r4, ctx->r9);
    // 0x00299634: sll         $v1, $s5, 2
    ctx->r3 = S32(ctx->r21 << 2);
    // 0x00299638: sb          $v0, 0x28($s1)
    MEM_B(0X28, ctx->r17) = ctx->r2;
    // 0x0029963C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00299640: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00299644: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x00299648: sw          $v0, 0x7A40($at)
    MEM_W(0X7A40, ctx->r1) = ctx->r2;
    // 0x0029964C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_00299650:
    // 0x00299650: lw          $ra, 0x78($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X78);
    // 0x00299654: lw          $s5, 0x74($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X74);
    // 0x00299658: lw          $s4, 0x70($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X70);
    // 0x0029965C: lw          $s3, 0x6C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X6C);
    // 0x00299660: lw          $s2, 0x68($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X68);
    // 0x00299664: lw          $s1, 0x64($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X64);
    // 0x00299668: lw          $s0, 0x60($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X60);
    // 0x0029966C: jr          $ra
    // 0x00299670: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
    return;
    // 0x00299670: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
;}
RECOMP_FUNC void func_00256878(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00256878: lw          $v1, 0xBF4($a1)
    ctx->r3 = MEM_W(ctx->r5, 0XBF4);
    // 0x0025687C: lw          $v0, 0xBF4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XBF4);
    // 0x00256880: beq         $v1, $v0, L_00256894
    if (ctx->r3 == ctx->r2) {
        // 0x00256884: nop
    
            goto L_00256894;
    }
    // 0x00256884: nop

    // 0x00256888: lw          $v0, 0x0($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X0);
    // 0x0025688C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x00256890: sw          $v0, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r2;
L_00256894:
    // 0x00256894: jr          $ra
    // 0x00256898: nop

    return;
    // 0x00256898: nop

;}
RECOMP_FUNC void func_00274440(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00274440: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00274444: lwc1        $f0, -0x7E80($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X7E80);
    // 0x00274448: add.s       $f12, $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f0.fl;
    // 0x0027444C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00274450: lwc1        $f0, -0x7E7C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X7E7C);
    // 0x00274454: mul.s       $f0, $f12, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f12.fl, ctx->f0.fl);
    // 0x00274458: trunc.w.s   $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(3 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x0027445C: mfc1        $a0, $f3
    ctx->r4 = (int32_t)ctx->f_odd[(3 - 1) * 2];
    // 0x00274460: sll         $v0, $a0, 16
    ctx->r2 = S32(ctx->r4 << 16);
    // 0x00274464: sra         $v1, $v0, 16
    ctx->r3 = S32(SIGNED(ctx->r2) >> 16);
    // 0x00274468: mtc1        $v1, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r3;
    // 0x0027446C: cvt.s.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.fl = CVT_S_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x00274470: c.eq.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl == ctx->f0.fl;
    // 0x00274474: nop

    // 0x00274478: bc1f        L_00274498
    if (!c1cs) {
            // 0x0027447C: addiu       $v0, $a0, 0x1
    ctx->r2 = ADD32(ctx->r4, 0X1);
    func_00274498(rdram, ctx);
    return;
    }
    // 0x0027447C: addiu       $v0, $a0, 0x1
    ctx->r2 = ADD32(ctx->r4, 0X1);
    // 0x00274480: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x00274484: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00274488: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x0027448C: lwc1        $f0, 0x284C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X284C);
    // 0x00274490: jr          $ra
    // 0x00274494: nop

    return;
    // 0x00274494: nop

;}
RECOMP_FUNC void func_00299A38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00299A38: sw          $s2, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->r18;
    // 0x00299A3C: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
;}
RECOMP_FUNC void func_0023F880(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0023F880: addiu       $sp, $sp, -0xF8
    ctx->r29 = ADD32(ctx->r29, -0XF8);
    // 0x0023F884: sw          $s5, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->r21;
    // 0x0023F888: lw          $s5, 0x108($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X108);
    // 0x0023F88C: sw          $s3, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->r19;
    // 0x0023F890: addu        $s3, $a0, $zero
    ctx->r19 = ADD32(ctx->r4, 0);
    // 0x0023F894: sw          $s7, 0xDC($sp)
    MEM_W(0XDC, ctx->r29) = ctx->r23;
    // 0x0023F898: addu        $s7, $zero, $zero
    ctx->r23 = ADD32(0, 0);
    // 0x0023F89C: sdc1        $f21, 0xF0($sp)
    CHECK_FR(ctx, 21);
    SD(ctx->f21.u64, 0XF0, ctx->r29);
    // 0x0023F8A0: mtc1        $zero, $f21
    ctx->f_odd[(21 - 1) * 2] = 0;
    // 0x0023F8A4: addiu       $t0, $sp, 0x28
    ctx->r8 = ADD32(ctx->r29, 0X28);
    // 0x0023F8A8: sw          $ra, 0xE4($sp)
    MEM_W(0XE4, ctx->r29) = ctx->r31;
    // 0x0023F8AC: sw          $fp, 0xE0($sp)
    MEM_W(0XE0, ctx->r29) = ctx->r30;
    // 0x0023F8B0: sw          $s6, 0xD8($sp)
    MEM_W(0XD8, ctx->r29) = ctx->r22;
    // 0x0023F8B4: sw          $s4, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = ctx->r20;
    // 0x0023F8B8: sw          $s2, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->r18;
    // 0x0023F8BC: sw          $s1, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->r17;
    // 0x0023F8C0: sw          $s0, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->r16;
    // 0x0023F8C4: sdc1        $f20, 0xE8($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0XE8, ctx->r29);
    // 0x0023F8C8: sw          $a2, 0x100($sp)
    MEM_W(0X100, ctx->r29) = ctx->r6;
    // 0x0023F8CC: sw          $a3, 0x104($sp)
    MEM_W(0X104, ctx->r29) = ctx->r7;
    // 0x0023F8D0: sw          $zero, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = 0;
    // 0x0023F8D4: sw          $t0, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->r8;
    // 0x0023F8D8: addiu       $t1, $s5, 0x54
    ctx->r9 = ADD32(ctx->r21, 0X54);
    // 0x0023F8DC: addiu       $t2, $s5, 0x48
    ctx->r10 = ADD32(ctx->r21, 0X48);
    // 0x0023F8E0: addiu       $t3, $s5, 0x3C
    ctx->r11 = ADD32(ctx->r21, 0X3C);
    // 0x0023F8E4: addiu       $t0, $s5, 0x30
    ctx->r8 = ADD32(ctx->r21, 0X30);
    // 0x0023F8E8: sw          $t1, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r9;
    // 0x0023F8EC: addiu       $t1, $s5, 0xC
    ctx->r9 = ADD32(ctx->r21, 0XC);
    // 0x0023F8F0: addiu       $s6, $s5, 0x24
    ctx->r22 = ADD32(ctx->r21, 0X24);
    // 0x0023F8F4: addiu       $fp, $s5, 0x18
    ctx->r30 = ADD32(ctx->r21, 0X18);
    // 0x0023F8F8: sw          $t2, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->r10;
    // 0x0023F8FC: sw          $t3, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->r11;
    // 0x0023F900: sw          $t0, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->r8;
    // 0x0023F904: sw          $t1, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->r9;
    // 0x0023F908: sltiu       $v0, $s7, 0x6
    ctx->r2 = ctx->r23 < 0X6 ? 1 : 0;
L_0023F90C:
    // 0x0023F90C: beq         $v0, $zero, L_0023FA2C
    if (ctx->r2 == 0) {
        // 0x0023F910: sll         $v0, $s7, 2
        ctx->r2 = S32(ctx->r23 << 2);
            goto L_0023FA2C;
    }
    // 0x0023F910: sll         $v0, $s7, 2
    ctx->r2 = S32(ctx->r23 << 2);
    // 0x0023F914: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0023F918: addu        $at, $at, $v0
    gpr jr_addend_0023F920 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x0023F91C: lw          $v0, 0x67D0($at)
    ctx->r2 = ADD32(ctx->r1, 0X67D0);
    // 0x0023F920: jr          $v0
    // 0x0023F924: nop

    switch (jr_addend_0023F920 >> 2) {
        case 0: goto L_0023F928; break;
        case 1: goto L_0023F958; break;
        case 2: goto L_0023F984; break;
        case 3: goto L_0023F9AC; break;
        case 4: goto L_0023F9D0; break;
        case 5: goto L_0023FA04; break;
        default: switch_error(__func__, 0x0023F920, 0x800A67D0);
    }
    // 0x0023F924: nop

L_0023F928:
    // 0x0023F928: addiu       $a0, $sp, 0x38
    ctx->r4 = ADD32(ctx->r29, 0X38);
    // 0x0023F92C: addu        $a2, $s5, $zero
    ctx->r6 = ADD32(ctx->r21, 0);
    // 0x0023F930: lw          $a1, 0xB0($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XB0);
    // 0x0023F934: lw          $t2, 0xA4($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XA4);
    // 0x0023F938: lw          $t3, 0xA8($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XA8);
    // 0x0023F93C: lw          $t0, 0xAC($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XAC);
    // 0x0023F940: addu        $t1, $a1, $zero
    ctx->r9 = ADD32(ctx->r5, 0);
    // 0x0023F944: sw          $t2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r10;
    // 0x0023F948: sw          $t3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r11;
    // 0x0023F94C: sw          $t0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r8;
    // 0x0023F950: j           L_0023FA24
    // 0x0023F954: sw          $t1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r9;
        goto L_0023FA24;
    // 0x0023F954: sw          $t1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r9;
L_0023F958:
    // 0x0023F958: addiu       $a0, $sp, 0x38
    ctx->r4 = ADD32(ctx->r29, 0X38);
    // 0x0023F95C: addu        $a1, $s5, $zero
    ctx->r5 = ADD32(ctx->r21, 0);
    // 0x0023F960: lw          $t2, 0xB0($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XB0);
    // 0x0023F964: lw          $t3, 0xAC($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XAC);
    // 0x0023F968: lw          $t0, 0xB4($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XB4);
    // 0x0023F96C: addiu       $a2, $s5, 0x24
    ctx->r6 = ADD32(ctx->r21, 0X24);
    // 0x0023F970: sw          $s5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r21;
    // 0x0023F974: sw          $t2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r10;
    // 0x0023F978: sw          $t3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r11;
    // 0x0023F97C: j           L_0023FA24
    // 0x0023F980: sw          $t0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r8;
        goto L_0023FA24;
    // 0x0023F980: sw          $t0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r8;
L_0023F984:
    // 0x0023F984: addiu       $a0, $sp, 0x38
    ctx->r4 = ADD32(ctx->r29, 0X38);
    // 0x0023F988: addu        $a1, $s6, $zero
    ctx->r5 = ADD32(ctx->r22, 0);
    // 0x0023F98C: lw          $t1, 0xA4($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XA4);
    // 0x0023F990: lw          $t2, 0xB0($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XB0);
    // 0x0023F994: addiu       $a2, $s5, 0x18
    ctx->r6 = ADD32(ctx->r21, 0X18);
    // 0x0023F998: sw          $s5, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r21;
    // 0x0023F99C: sw          $s6, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r22;
    // 0x0023F9A0: sw          $t1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r9;
    // 0x0023F9A4: j           L_0023FA24
    // 0x0023F9A8: sw          $t2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r10;
        goto L_0023FA24;
    // 0x0023F9A8: sw          $t2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r10;
L_0023F9AC:
    // 0x0023F9AC: addiu       $a0, $sp, 0x38
    ctx->r4 = ADD32(ctx->r29, 0X38);
    // 0x0023F9B0: addu        $a1, $fp, $zero
    ctx->r5 = ADD32(ctx->r30, 0);
    // 0x0023F9B4: lw          $t3, 0xA8($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XA8);
    // 0x0023F9B8: lw          $t0, 0xA4($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XA4);
    // 0x0023F9BC: addiu       $a2, $s5, 0xC
    ctx->r6 = ADD32(ctx->r21, 0XC);
    // 0x0023F9C0: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x0023F9C4: sw          $fp, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r30;
    // 0x0023F9C8: j           L_0023FA20
    // 0x0023F9CC: sw          $t3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r11;
        goto L_0023FA20;
    // 0x0023F9CC: sw          $t3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r11;
L_0023F9D0:
    // 0x0023F9D0: addiu       $a0, $sp, 0x38
    ctx->r4 = ADD32(ctx->r29, 0X38);
    // 0x0023F9D4: lw          $a1, 0xB4($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XB4);
    // 0x0023F9D8: lw          $t1, 0xAC($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XAC);
    // 0x0023F9DC: lw          $t2, 0xA8($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XA8);
    // 0x0023F9E0: addu        $a2, $s5, $zero
    ctx->r6 = ADD32(ctx->r21, 0);
    // 0x0023F9E4: sw          $fp, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r30;
    // 0x0023F9E8: addu        $t3, $a1, $zero
    ctx->r11 = ADD32(ctx->r5, 0);
    // 0x0023F9EC: sw          $t1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r9;
    // 0x0023F9F0: sw          $t2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r10;
    // 0x0023F9F4: j           L_0023FA24
    // 0x0023F9F8: sw          $t3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r11;
        goto L_0023FA24;
    // 0x0023F9F8: sw          $t3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r11;
L_0023F9FC:
    // 0x0023F9FC: j           L_0023FBA4
    // 0x0023FA00: addu        $s4, $zero, $zero
    ctx->r20 = ADD32(0, 0);
        goto L_0023FBA4;
    // 0x0023FA00: addu        $s4, $zero, $zero
    ctx->r20 = ADD32(0, 0);
L_0023FA04:
    // 0x0023FA04: addiu       $a0, $sp, 0x38
    ctx->r4 = ADD32(ctx->r29, 0X38);
    // 0x0023FA08: addu        $a1, $s6, $zero
    ctx->r5 = ADD32(ctx->r22, 0);
    // 0x0023FA0C: lw          $t0, 0xB4($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XB4);
    // 0x0023FA10: addiu       $a2, $s5, 0x54
    ctx->r6 = ADD32(ctx->r21, 0X54);
    // 0x0023FA14: sw          $s5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r21;
    // 0x0023FA18: sw          $fp, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r30;
    // 0x0023FA1C: sw          $s6, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r22;
L_0023FA20:
    // 0x0023FA20: sw          $t0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r8;
L_0023FA24:
    // 0x0023FA24: jal         0x0020EF2C
    // 0x0023FA28: nop

    func_0020EF2C(rdram, ctx);
        goto after_0;
    // 0x0023FA28: nop

    after_0:
L_0023FA2C:
    // 0x0023FA2C: lwc1        $f3, 0x38($sp)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r29, 0X38);
    // 0x0023FA30: lwc1        $f0, 0x58($s3)
    ctx->f0.u32l = MEM_W(ctx->r19, 0X58);
    // 0x0023FA34: mul.s       $f3, $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f3.fl = MUL_S(ctx->f3.fl, ctx->f0.fl);
    // 0x0023FA38: lwc1        $f2, 0x3C($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x0023FA3C: lwc1        $f0, 0x5C($s3)
    ctx->f0.u32l = MEM_W(ctx->r19, 0X5C);
    // 0x0023FA40: mul.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x0023FA44: lwc1        $f1, 0x40($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X40);
    // 0x0023FA48: lwc1        $f0, 0x60($s3)
    ctx->f0.u32l = MEM_W(ctx->r19, 0X60);
    // 0x0023FA4C: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x0023FA50: add.s       $f3, $f3, $f2
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f3.fl = ctx->f3.fl + ctx->f2.fl;
    // 0x0023FA54: add.s       $f20, $f3, $f1
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f20.fl = ctx->f3.fl + ctx->f1.fl;
    // 0x0023FA58: c.eq.s      $f20, $f21
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 21);
    c1cs = ctx->f20.fl == ctx->f21.fl;
    // 0x0023FA5C: nop

    // 0x0023FA60: bc1tl       L_0023FDA8
    if (c1cs) {
        // 0x0023FA64: addiu       $s7, $s7, 0x1
        ctx->r23 = ADD32(ctx->r23, 0X1);
            goto L_0023FDA8;
    }
    goto skip_0;
    // 0x0023FA64: addiu       $s7, $s7, 0x1
    ctx->r23 = ADD32(ctx->r23, 0X1);
    skip_0:
    // 0x0023FA68: lw          $a2, 0x28($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X28);
    // 0x0023FA6C: lw          $a1, 0x104($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X104);
    // 0x0023FA70: jal         0x0020EF2C
    // 0x0023FA74: addiu       $a0, $sp, 0x48
    ctx->r4 = ADD32(ctx->r29, 0X48);
    func_0020EF2C(rdram, ctx);
        goto after_1;
    // 0x0023FA74: addiu       $a0, $sp, 0x48
    ctx->r4 = ADD32(ctx->r29, 0X48);
    after_1:
    // 0x0023FA78: lwc1        $f3, 0x48($sp)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r29, 0X48);
    // 0x0023FA7C: lwc1        $f0, 0x38($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X38);
    // 0x0023FA80: mul.s       $f3, $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f3.fl = MUL_S(ctx->f3.fl, ctx->f0.fl);
    // 0x0023FA84: lwc1        $f2, 0x4C($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x0023FA88: lwc1        $f0, 0x3C($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x0023FA8C: mul.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x0023FA90: lwc1        $f1, 0x50($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X50);
    // 0x0023FA94: lwc1        $f0, 0x40($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X40);
    // 0x0023FA98: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x0023FA9C: add.s       $f3, $f3, $f2
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f3.fl = ctx->f3.fl + ctx->f2.fl;
    // 0x0023FAA0: add.s       $f0, $f3, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f3.fl + ctx->f1.fl;
    // 0x0023FAA4: c.eq.s      $f0, $f21
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 21);
    c1cs = ctx->f0.fl == ctx->f21.fl;
    // 0x0023FAA8: nop

    // 0x0023FAAC: bc1tl       L_0023FDA8
    if (c1cs) {
        // 0x0023FAB0: addiu       $s7, $s7, 0x1
        ctx->r23 = ADD32(ctx->r23, 0X1);
            goto L_0023FDA8;
    }
    goto skip_1;
    // 0x0023FAB0: addiu       $s7, $s7, 0x1
    ctx->r23 = ADD32(ctx->r23, 0X1);
    skip_1:
    // 0x0023FAB4: lwc1        $f1, 0x8($s3)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r19, 0X8);
    // 0x0023FAB8: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x0023FABC: div.s       $f3, $f0, $f20
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f3.fl = DIV_S(ctx->f0.fl, ctx->f20.fl);
    // 0x0023FAC0: c.lt.s      $f3, $f1
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f3.fl < ctx->f1.fl;
    // 0x0023FAC4: nop

    // 0x0023FAC8: bc1fl       L_0023FDA8
    if (!c1cs) {
        // 0x0023FACC: addiu       $s7, $s7, 0x1
        ctx->r23 = ADD32(ctx->r23, 0X1);
            goto L_0023FDA8;
    }
    goto skip_2;
    // 0x0023FACC: addiu       $s7, $s7, 0x1
    ctx->r23 = ADD32(ctx->r23, 0X1);
    skip_2:
    // 0x0023FAD0: lwc1        $f1, 0x58($s3)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r19, 0X58);
    // 0x0023FAD4: mul.s       $f1, $f3, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = MUL_S(ctx->f3.fl, ctx->f1.fl);
    // 0x0023FAD8: lw          $t1, 0x104($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X104);
    // 0x0023FADC: lwc1        $f0, 0x0($t1)
    ctx->f0.u32l = MEM_W(ctx->r9, 0X0);
    // 0x0023FAE0: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x0023FAE4: swc1        $f0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f0.u32l;
    // 0x0023FAE8: lwc1        $f1, 0x5C($s3)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r19, 0X5C);
    // 0x0023FAEC: mul.s       $f1, $f3, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = MUL_S(ctx->f3.fl, ctx->f1.fl);
    // 0x0023FAF0: lwc1        $f0, 0x4($t1)
    ctx->f0.u32l = MEM_W(ctx->r9, 0X4);
    // 0x0023FAF4: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x0023FAF8: swc1        $f0, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f0.u32l;
    // 0x0023FAFC: lwc1        $f0, 0x60($s3)
    ctx->f0.u32l = MEM_W(ctx->r19, 0X60);
    // 0x0023FB00: mul.s       $f0, $f3, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f3.fl, ctx->f0.fl);
    // 0x0023FB04: lwc1        $f1, 0x8($t1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r9, 0X8);
    // 0x0023FB08: addiu       $s4, $zero, 0x1
    ctx->r20 = ADD32(0, 0X1);
    // 0x0023FB0C: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x0023FB10: lw          $s2, 0xB8($sp)
    ctx->r18 = MEM_W(ctx->r29, 0XB8);
    // 0x0023FB14: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x0023FB18: swc1        $f1, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
L_0023FB1C:
    // 0x0023FB1C: addiu       $t2, $zero, 0x3
    ctx->r10 = ADD32(0, 0X3);
    // 0x0023FB20: beq         $s1, $t2, L_0023FB2C
    if (ctx->r17 == ctx->r10) {
        // 0x0023FB24: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_0023FB2C;
    }
    // 0x0023FB24: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x0023FB28: addiu       $v0, $s1, 0x1
    ctx->r2 = ADD32(ctx->r17, 0X1);
L_0023FB2C:
    // 0x0023FB2C: addiu       $a0, $sp, 0x68
    ctx->r4 = ADD32(ctx->r29, 0X68);
    // 0x0023FB30: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x0023FB34: lw          $t3, 0xB8($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XB8);
    // 0x0023FB38: lw          $s0, 0x0($s2)
    ctx->r16 = MEM_W(ctx->r18, 0X0);
    // 0x0023FB3C: addu        $v0, $t3, $v0
    ctx->r2 = ADD32(ctx->r11, ctx->r2);
    // 0x0023FB40: lw          $a1, 0x0($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X0);
    // 0x0023FB44: jal         0x0020EF2C
    // 0x0023FB48: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    func_0020EF2C(rdram, ctx);
        goto after_2;
    // 0x0023FB48: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    after_2:
    // 0x0023FB4C: addiu       $a0, $sp, 0x78
    ctx->r4 = ADD32(ctx->r29, 0X78);
    // 0x0023FB50: addiu       $a1, $sp, 0x58
    ctx->r5 = ADD32(ctx->r29, 0X58);
    // 0x0023FB54: jal         0x0020EF2C
    // 0x0023FB58: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    func_0020EF2C(rdram, ctx);
        goto after_3;
    // 0x0023FB58: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    after_3:
    // 0x0023FB5C: lwc1        $f2, 0x68($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X68);
    // 0x0023FB60: lwc1        $f0, 0x78($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X78);
    // 0x0023FB64: mul.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x0023FB68: lwc1        $f3, 0x6C($sp)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r29, 0X6C);
    // 0x0023FB6C: lwc1        $f0, 0x7C($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X7C);
    // 0x0023FB70: mul.s       $f3, $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f3.fl = MUL_S(ctx->f3.fl, ctx->f0.fl);
    // 0x0023FB74: lwc1        $f1, 0x70($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X70);
    // 0x0023FB78: lwc1        $f0, 0x80($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X80);
    // 0x0023FB7C: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x0023FB80: add.s       $f2, $f2, $f3
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f3.fl;
    // 0x0023FB84: add.s       $f2, $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f1.fl;
    // 0x0023FB88: c.lt.s      $f2, $f21
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 21);
    c1cs = ctx->f2.fl < ctx->f21.fl;
    // 0x0023FB8C: nop

    // 0x0023FB90: bc1t        L_0023F9FC
    if (c1cs) {
        // 0x0023FB94: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_0023F9FC;
    }
    // 0x0023FB94: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x0023FB98: slti        $v0, $s1, 0x4
    ctx->r2 = SIGNED(ctx->r17) < 0X4 ? 1 : 0;
    // 0x0023FB9C: bne         $v0, $zero, L_0023FB1C
    if (ctx->r2 != 0) {
        // 0x0023FBA0: addiu       $s2, $s2, 0x4
        ctx->r18 = ADD32(ctx->r18, 0X4);
            goto L_0023FB1C;
    }
    // 0x0023FBA0: addiu       $s2, $s2, 0x4
    ctx->r18 = ADD32(ctx->r18, 0X4);
L_0023FBA4:
    // 0x0023FBA4: beql        $s4, $zero, L_0023FDA8
    if (ctx->r20 == 0) {
        // 0x0023FBA8: addiu       $s7, $s7, 0x1
        ctx->r23 = ADD32(ctx->r23, 0X1);
            goto L_0023FDA8;
    }
    goto skip_3;
    // 0x0023FBA8: addiu       $s7, $s7, 0x1
    ctx->r23 = ADD32(ctx->r23, 0X1);
    skip_3:
    // 0x0023FBAC: lw          $a0, 0x100($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X100);
    // 0x0023FBB0: jal         0x002682CC
    // 0x0023FBB4: nop

    func_002682CC(rdram, ctx);
        goto after_4;
    // 0x0023FBB4: nop

    after_4:
    // 0x0023FBB8: beq         $v0, $zero, L_0023FBD0
    if (ctx->r2 == 0) {
        // 0x0023FBBC: nop
    
            goto L_0023FBD0;
    }
    // 0x0023FBBC: nop

    // 0x0023FBC0: lw          $v0, 0x4($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X4);
    // 0x0023FBC4: lb          $v0, 0x5($v0)
    ctx->r2 = MEM_B(ctx->r2, 0X5);
    // 0x0023FBC8: j           L_0023FBDC
    // 0x0023FBCC: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
        goto L_0023FBDC;
    // 0x0023FBCC: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
L_0023FBD0:
    // 0x0023FBD0: lw          $v0, 0x4($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X4);
    // 0x0023FBD4: lb          $v0, 0x4($v0)
    ctx->r2 = MEM_B(ctx->r2, 0X4);
    // 0x0023FBD8: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
L_0023FBDC:
    // 0x0023FBDC: lw          $v0, 0x4($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X4);
    // 0x0023FBE0: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x0023FBE4: lwc1        $f0, 0x10($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X10);
    // 0x0023FBE8: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    // 0x0023FBEC: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x0023FBF0: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    // 0x0023FBF4: lw          $a2, 0x28($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X28);
    // 0x0023FBF8: jal         0x0023AB18
    // 0x0023FBFC: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_0023AB18(rdram, ctx);
        goto after_5;
    // 0x0023FBFC: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_5:
    // 0x0023FC00: beql        $v0, $zero, L_0023FDA8
    if (ctx->r2 == 0) {
        // 0x0023FC04: addiu       $s7, $s7, 0x1
        ctx->r23 = ADD32(ctx->r23, 0X1);
            goto L_0023FDA8;
    }
    goto skip_4;
    // 0x0023FC04: addiu       $s7, $s7, 0x1
    ctx->r23 = ADD32(ctx->r23, 0X1);
    skip_4:
    // 0x0023FC08: lw          $t0, 0x110($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X110);
    // 0x0023FC0C: lui         $v1, 0x800F
    ctx->r3 = S32(0X800F << 16);
    // 0x0023FC10: lw          $v1, 0x1ADC($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X1ADC);
    // 0x0023FC14: sw          $t0, 0x40($s3)
    MEM_W(0X40, ctx->r19) = ctx->r8;
    // 0x0023FC18: lw          $t1, 0x100($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X100);
    // 0x0023FC1C: addiu       $v0, $v1, 0x8
    ctx->r2 = ADD32(ctx->r3, 0X8);
    // 0x0023FC20: sw          $v0, 0x34($s3)
    MEM_W(0X34, ctx->r19) = ctx->r2;
    // 0x0023FC24: addiu       $v0, $v1, 0x4
    ctx->r2 = ADD32(ctx->r3, 0X4);
    // 0x0023FC28: sw          $v0, 0x38($s3)
    MEM_W(0X38, ctx->r19) = ctx->r2;
    // 0x0023FC2C: addiu       $v0, $v1, 0x14
    ctx->r2 = ADD32(ctx->r3, 0X14);
    // 0x0023FC30: sw          $v0, 0x3C($s3)
    MEM_W(0X3C, ctx->r19) = ctx->r2;
    // 0x0023FC34: sw          $v1, 0x44($s3)
    MEM_W(0X44, ctx->r19) = ctx->r3;
    // 0x0023FC38: sw          $t1, 0x48($s3)
    MEM_W(0X48, ctx->r19) = ctx->r9;
    // 0x0023FC3C: lw          $t2, 0x10C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X10C);
    // 0x0023FC40: beq         $t2, $zero, L_0023FC7C
    if (ctx->r10 == 0) {
        // 0x0023FC44: addiu       $v0, $v1, 0x18
        ctx->r2 = ADD32(ctx->r3, 0X18);
            goto L_0023FC7C;
    }
    // 0x0023FC44: addiu       $v0, $v1, 0x18
    ctx->r2 = ADD32(ctx->r3, 0X18);
    // 0x0023FC48: addu        $v1, $t2, $zero
    ctx->r3 = ADD32(ctx->r10, 0);
    // 0x0023FC4C: addiu       $a0, $v1, 0x70
    ctx->r4 = ADD32(ctx->r3, 0X70);
L_0023FC50:
    // 0x0023FC50: lw          $t3, 0x0($v1)
    ctx->r11 = MEM_W(ctx->r3, 0X0);
    // 0x0023FC54: lw          $t0, 0x4($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X4);
    // 0x0023FC58: lw          $t1, 0x8($v1)
    ctx->r9 = MEM_W(ctx->r3, 0X8);
    // 0x0023FC5C: lw          $t2, 0xC($v1)
    ctx->r10 = MEM_W(ctx->r3, 0XC);
    // 0x0023FC60: sw          $t3, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r11;
    // 0x0023FC64: sw          $t0, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r8;
    // 0x0023FC68: sw          $t1, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r9;
    // 0x0023FC6C: sw          $t2, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r10;
    // 0x0023FC70: addiu       $v1, $v1, 0x10
    ctx->r3 = ADD32(ctx->r3, 0X10);
    // 0x0023FC74: bne         $v1, $a0, L_0023FC50
    if (ctx->r3 != ctx->r4) {
        // 0x0023FC78: addiu       $v0, $v0, 0x10
        ctx->r2 = ADD32(ctx->r2, 0X10);
            goto L_0023FC50;
    }
    // 0x0023FC78: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
L_0023FC7C:
    // 0x0023FC7C: lw          $a1, 0x0($s3)
    ctx->r5 = MEM_W(ctx->r19, 0X0);
    // 0x0023FC80: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x0023FC84: sw          $t3, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r11;
    // 0x0023FC88: lbu         $v1, 0x0($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X0);
    // 0x0023FC8C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x0023FC90: bnel        $v1, $v0, L_0023FDA8
    if (ctx->r3 != ctx->r2) {
        // 0x0023FC94: addiu       $s7, $s7, 0x1
        ctx->r23 = ADD32(ctx->r23, 0X1);
            goto L_0023FDA8;
    }
    goto skip_5;
    // 0x0023FC94: addiu       $s7, $s7, 0x1
    ctx->r23 = ADD32(ctx->r23, 0X1);
    skip_5:
    // 0x0023FC98: lhu         $v1, 0x2($a1)
    ctx->r3 = MEM_HU(ctx->r5, 0X2);
    // 0x0023FC9C: addiu       $v0, $zero, 0x68
    ctx->r2 = ADD32(0, 0X68);
    // 0x0023FCA0: bnel        $v1, $v0, L_0023FDA8
    if (ctx->r3 != ctx->r2) {
        // 0x0023FCA4: addiu       $s7, $s7, 0x1
        ctx->r23 = ADD32(ctx->r23, 0X1);
            goto L_0023FDA8;
    }
    goto skip_6;
    // 0x0023FCA4: addiu       $s7, $s7, 0x1
    ctx->r23 = ADD32(ctx->r23, 0X1);
    skip_6:
    // 0x0023FCA8: lw          $v0, 0x114($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X114);
    // 0x0023FCAC: lw          $t0, 0x100($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X100);
    // 0x0023FCB0: beql        $v0, $t0, L_0023FDA8
    if (ctx->r2 == ctx->r8) {
        // 0x0023FCB4: addiu       $s7, $s7, 0x1
        ctx->r23 = ADD32(ctx->r23, 0X1);
            goto L_0023FDA8;
    }
    goto skip_7;
    // 0x0023FCB4: addiu       $s7, $s7, 0x1
    ctx->r23 = ADD32(ctx->r23, 0X1);
    skip_7:
    // 0x0023FCB8: addiu       $a0, $sp, 0x88
    ctx->r4 = ADD32(ctx->r29, 0X88);
    // 0x0023FCBC: addiu       $a3, $s3, 0x4C
    ctx->r7 = ADD32(ctx->r19, 0X4C);
    // 0x0023FCC0: sw          $t0, 0x114($a1)
    MEM_W(0X114, ctx->r5) = ctx->r8;
    // 0x0023FCC4: lw          $a2, 0x0($s3)
    ctx->r6 = MEM_W(ctx->r19, 0X0);
    // 0x0023FCC8: lw          $a1, 0x8($s3)
    ctx->r5 = MEM_W(ctx->r19, 0X8);
    // 0x0023FCCC: jal         0x0020EF8C
    // 0x0023FCD0: addiu       $a2, $a2, 0x4
    ctx->r6 = ADD32(ctx->r6, 0X4);
    func_0020EF8C(rdram, ctx);
        goto after_6;
    // 0x0023FCD0: addiu       $a2, $a2, 0x4
    ctx->r6 = ADD32(ctx->r6, 0X4);
    after_6:
    // 0x0023FCD4: addiu       $v1, $zero, 0x5
    ctx->r3 = ADD32(0, 0X5);
    // 0x0023FCD8: addiu       $v0, $zero, 0x6400
    ctx->r2 = ADD32(0, 0X6400);
    // 0x0023FCDC: sh          $v1, 0x98($sp)
    MEM_H(0X98, ctx->r29) = ctx->r3;
    // 0x0023FCE0: sh          $v0, 0x9A($sp)
    MEM_H(0X9A, ctx->r29) = ctx->r2;
    // 0x0023FCE4: sb          $v1, 0x9C($sp)
    MEM_B(0X9C, ctx->r29) = ctx->r3;
    // 0x0023FCE8: lw          $v0, 0x0($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X0);
    // 0x0023FCEC: lwc1        $f0, 0x18($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X18);
    // 0x0023FCF0: trunc.w.s   $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x0023FCF4: mfc1        $v0, $f4
    ctx->r2 = (int32_t)ctx->f4.u32l;
    // 0x0023FCF8: sb          $v0, 0x9D($sp)
    MEM_B(0X9D, ctx->r29) = ctx->r2;
    // 0x0023FCFC: lw          $v0, 0x0($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X0);
    // 0x0023FD00: lwc1        $f0, 0x1C($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X1C);
    // 0x0023FD04: trunc.w.s   $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x0023FD08: mfc1        $v0, $f4
    ctx->r2 = (int32_t)ctx->f4.u32l;
    // 0x0023FD0C: sb          $v0, 0x9E($sp)
    MEM_B(0X9E, ctx->r29) = ctx->r2;
    // 0x0023FD10: lw          $v0, 0x0($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X0);
    // 0x0023FD14: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x0023FD18: lwc1        $f0, 0x20($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X20);
    // 0x0023FD1C: lw          $a0, 0x100($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X100);
    // 0x0023FD20: trunc.w.s   $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x0023FD24: mfc1        $v0, $f4
    ctx->r2 = (int32_t)ctx->f4.u32l;
    // 0x0023FD28: sb          $v0, 0x9F($sp)
    MEM_B(0X9F, ctx->r29) = ctx->r2;
    // 0x0023FD2C: lw          $t0, 0x88($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X88);
    // 0x0023FD30: lw          $t1, 0x8C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X8C);
    // 0x0023FD34: lw          $t2, 0x90($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X90);
    // 0x0023FD38: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x0023FD3C: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x0023FD40: sw          $t2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r10;
    // 0x0023FD44: lw          $t0, 0x98($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X98);
    // 0x0023FD48: lw          $t1, 0x9C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X9C);
    // 0x0023FD4C: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    // 0x0023FD50: sw          $t1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r9;
    // 0x0023FD54: lw          $a1, 0x0($s3)
    ctx->r5 = MEM_W(ctx->r19, 0X0);
    // 0x0023FD58: jal         0x00236EA0
    // 0x0023FD5C: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    func_00236EA0(rdram, ctx);
        goto after_7;
    // 0x0023FD5C: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    after_7:
    // 0x0023FD60: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x0023FD64: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x0023FD68: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x0023FD6C: lw          $a1, 0x88($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X88);
    // 0x0023FD70: lw          $a2, 0x8C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X8C);
    // 0x0023FD74: lw          $a3, 0x90($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X90);
    // 0x0023FD78: jal         0x00275544
    // 0x0023FD7C: addiu       $a0, $zero, 0x1B4
    ctx->r4 = ADD32(0, 0X1B4);
    func_00275544(rdram, ctx);
        goto after_8;
    // 0x0023FD7C: addiu       $a0, $zero, 0x1B4
    ctx->r4 = ADD32(0, 0X1B4);
    after_8:
    // 0x0023FD80: lw          $t0, 0x100($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X100);
    // 0x0023FD84: lw          $v0, 0x14($t0)
    ctx->r2 = MEM_W(ctx->r8, 0X14);
    // 0x0023FD88: lw          $t1, 0xA0($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XA0);
    // 0x0023FD8C: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x0023FD90: bne         $v0, $t1, L_0023FDA8
    if (ctx->r2 != ctx->r9) {
        // 0x0023FD94: addiu       $s7, $s7, 0x1
        ctx->r23 = ADD32(ctx->r23, 0X1);
            goto L_0023FDA8;
    }
    // 0x0023FD94: addiu       $s7, $s7, 0x1
    ctx->r23 = ADD32(ctx->r23, 0X1);
    // 0x0023FD98: lw          $v0, 0x0($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X0);
    // 0x0023FD9C: lw          $v0, 0x10C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X10C);
    // 0x0023FDA0: lw          $v0, 0x1A8($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1A8);
    // 0x0023FDA4: sw          $t1, 0x4F4($v0)
    MEM_W(0X4F4, ctx->r2) = ctx->r9;
L_0023FDA8:
    // 0x0023FDA8: slti        $v0, $s7, 0x6
    ctx->r2 = SIGNED(ctx->r23) < 0X6 ? 1 : 0;
    // 0x0023FDAC: bne         $v0, $zero, L_0023F90C
    if (ctx->r2 != 0) {
        // 0x0023FDB0: sltiu       $v0, $s7, 0x6
        ctx->r2 = ctx->r23 < 0X6 ? 1 : 0;
            goto L_0023F90C;
    }
    // 0x0023FDB0: sltiu       $v0, $s7, 0x6
    ctx->r2 = ctx->r23 < 0X6 ? 1 : 0;
    // 0x0023FDB4: lw          $v0, 0xA0($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XA0);
    // 0x0023FDB8: lw          $ra, 0xE4($sp)
    ctx->r31 = MEM_W(ctx->r29, 0XE4);
    // 0x0023FDBC: lw          $fp, 0xE0($sp)
    ctx->r30 = MEM_W(ctx->r29, 0XE0);
    // 0x0023FDC0: lw          $s7, 0xDC($sp)
    ctx->r23 = MEM_W(ctx->r29, 0XDC);
    // 0x0023FDC4: lw          $s6, 0xD8($sp)
    ctx->r22 = MEM_W(ctx->r29, 0XD8);
    // 0x0023FDC8: lw          $s5, 0xD4($sp)
    ctx->r21 = MEM_W(ctx->r29, 0XD4);
    // 0x0023FDCC: lw          $s4, 0xD0($sp)
    ctx->r20 = MEM_W(ctx->r29, 0XD0);
    // 0x0023FDD0: lw          $s3, 0xCC($sp)
    ctx->r19 = MEM_W(ctx->r29, 0XCC);
    // 0x0023FDD4: lw          $s2, 0xC8($sp)
    ctx->r18 = MEM_W(ctx->r29, 0XC8);
    // 0x0023FDD8: lw          $s1, 0xC4($sp)
    ctx->r17 = MEM_W(ctx->r29, 0XC4);
    // 0x0023FDDC: lw          $s0, 0xC0($sp)
    ctx->r16 = MEM_W(ctx->r29, 0XC0);
    // 0x0023FDE0: ldc1        $f21, 0xF0($sp)
    CHECK_FR(ctx, 21);
    ctx->f21.u64 = LD(ctx->r29, 0XF0);
    // 0x0023FDE4: ldc1        $f20, 0xE8($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0XE8);
    // 0x0023FDE8: jr          $ra
    // 0x0023FDEC: addiu       $sp, $sp, 0xF8
    ctx->r29 = ADD32(ctx->r29, 0XF8);
    return;
    // 0x0023FDEC: addiu       $sp, $sp, 0xF8
    ctx->r29 = ADD32(ctx->r29, 0XF8);
;}
RECOMP_FUNC void func_0027854C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0027854C: addu        $t5, $a0, $zero
    ctx->r13 = ADD32(ctx->r4, 0);
    // 0x00278550: mtc1        $a1, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r5;
    // 0x00278554: mtc1        $a2, $f6
    ctx->f6.u32l = ctx->r6;
    // 0x00278558: mtc1        $a3, $f3
    ctx->f_odd[(3 - 1) * 2] = ctx->r7;
    // 0x0027855C: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x00278560: lwc1        $f4, 0x10($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X10);
    // 0x00278564: c.eq.s      $f3, $f2
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f3.fl == ctx->f2.fl;
    // 0x00278568: nop

    // 0x0027856C: bc1t        L_00278594
    if (c1cs) {
        // 0x00278570: addiu       $t4, $zero, 0x400
        ctx->r12 = ADD32(0, 0X400);
            goto L_00278594;
    }
    // 0x00278570: addiu       $t4, $zero, 0x400
    ctx->r12 = ADD32(0, 0X400);
    // 0x00278574: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00278578: lwc1        $f0, -0x7D58($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X7D58);
    // 0x0027857C: mtc1        $t4, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r12;
    // 0x00278580: cvt.s.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.fl = CVT_S_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x00278584: div.s       $f0, $f0, $f3
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f0.fl = DIV_S(ctx->f0.fl, ctx->f3.fl);
    // 0x00278588: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0027858C: trunc.w.s   $f7, $f0
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(7 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x00278590: mfc1        $t4, $f7
    ctx->r12 = (int32_t)ctx->f_odd[(7 - 1) * 2];
L_00278594:
    // 0x00278594: c.eq.s      $f4, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f4.fl == ctx->f2.fl;
    // 0x00278598: nop

    // 0x0027859C: bc1t        L_002785C4
    if (c1cs) {
        // 0x002785A0: addiu       $t3, $zero, 0x400
        ctx->r11 = ADD32(0, 0X400);
            goto L_002785C4;
    }
    // 0x002785A0: addiu       $t3, $zero, 0x400
    ctx->r11 = ADD32(0, 0X400);
    // 0x002785A4: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x002785A8: lwc1        $f0, -0x7D54($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X7D54);
    // 0x002785AC: mtc1        $t3, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r11;
    // 0x002785B0: cvt.s.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.fl = CVT_S_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x002785B4: div.s       $f0, $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = DIV_S(ctx->f0.fl, ctx->f4.fl);
    // 0x002785B8: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x002785BC: trunc.w.s   $f7, $f0
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(7 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x002785C0: mfc1        $t3, $f7
    ctx->r11 = (int32_t)ctx->f_odd[(7 - 1) * 2];
L_002785C4:
    // 0x002785C4: lui         $a2, 0x708
    ctx->r6 = S32(0X708 << 16);
    // 0x002785C8: ori         $a2, $a2, 0xC240
    ctx->r6 = ctx->r6 | 0XC240;
    // 0x002785CC: lui         $a3, 0x701
    ctx->r7 = S32(0X701 << 16);
    // 0x002785D0: ori         $a3, $a3, 0xF800
    ctx->r7 = ctx->r7 | 0XF800;
    // 0x002785D4: lui         $t0, 0xF580
    ctx->r8 = S32(0XF580 << 16);
    // 0x002785D8: ori         $t0, $t0, 0x200
    ctx->r8 = ctx->r8 | 0X200;
    // 0x002785DC: lui         $t1, 0x8
    ctx->r9 = S32(0X8 << 16);
    // 0x002785E0: ori         $t1, $t1, 0xC240
    ctx->r9 = ctx->r9 | 0XC240;
    // 0x002785E4: lui         $t2, 0x3
    ctx->r10 = S32(0X3 << 16);
    // 0x002785E8: lui         $v1, 0x800E
    ctx->r3 = S32(0X800E << 16);
    // 0x002785EC: addiu       $v1, $v1, -0x71DC
    ctx->r3 = ADD32(ctx->r3, -0X71DC);
    // 0x002785F0: ori         $t2, $t2, 0xC01C
    ctx->r10 = ctx->r10 | 0XC01C;
    // 0x002785F4: lui         $v0, 0xFD90
    ctx->r2 = S32(0XFD90 << 16);
    // 0x002785F8: lw          $a0, 0x0($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X0);
    // 0x002785FC: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00278600: lwc1        $f1, -0x7D50($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, -0X7D50);
    // 0x00278604: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00278608: lwc1        $f2, -0x7D4C($at)
    ctx->f2.u32l = MEM_W(ctx->r1, -0X7D4C);
    // 0x0027860C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00278610: lwc1        $f0, -0x7D48($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X7D48);
    // 0x00278614: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x00278618: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x0027861C: sw          $a0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r4;
    // 0x00278620: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
    // 0x00278624: sw          $t5, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r13;
    // 0x00278628: addiu       $a1, $a0, 0x8
    ctx->r5 = ADD32(ctx->r4, 0X8);
    // 0x0027862C: lui         $v0, 0xF590
    ctx->r2 = S32(0XF590 << 16);
    // 0x00278630: sw          $a1, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r5;
    // 0x00278634: sw          $a2, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r6;
    // 0x00278638: addiu       $a2, $a0, 0x10
    ctx->r6 = ADD32(ctx->r4, 0X10);
    // 0x0027863C: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
    // 0x00278640: lui         $v0, 0xE600
    ctx->r2 = S32(0XE600 << 16);
    // 0x00278644: sw          $a2, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r6;
    // 0x00278648: sw          $v0, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r2;
    // 0x0027864C: sw          $zero, 0x4($a1)
    MEM_W(0X4, ctx->r5) = 0;
    // 0x00278650: addiu       $a1, $a0, 0x18
    ctx->r5 = ADD32(ctx->r4, 0X18);
    // 0x00278654: lui         $v0, 0xF300
    ctx->r2 = S32(0XF300 << 16);
    // 0x00278658: mul.s       $f1, $f3, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = MUL_S(ctx->f3.fl, ctx->f1.fl);
    // 0x0027865C: sw          $a1, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r5;
    // 0x00278660: sw          $v0, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->r2;
    // 0x00278664: sw          $a3, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r7;
    // 0x00278668: addiu       $a2, $a0, 0x20
    ctx->r6 = ADD32(ctx->r4, 0X20);
    // 0x0027866C: lui         $v0, 0xE700
    ctx->r2 = S32(0XE700 << 16);
    // 0x00278670: mul.s       $f0, $f4, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x00278674: sw          $a2, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r6;
    // 0x00278678: sw          $v0, 0x18($a0)
    MEM_W(0X18, ctx->r4) = ctx->r2;
    // 0x0027867C: sw          $zero, 0x4($a1)
    MEM_W(0X4, ctx->r5) = 0;
    // 0x00278680: addiu       $a1, $a0, 0x28
    ctx->r5 = ADD32(ctx->r4, 0X28);
    // 0x00278684: addiu       $a3, $a0, 0x30
    ctx->r7 = ADD32(ctx->r4, 0X30);
    // 0x00278688: lui         $v0, 0xF200
    ctx->r2 = S32(0XF200 << 16);
    // 0x0027868C: sw          $a1, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r5;
    // 0x00278690: add.s       $f1, $f5, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f5.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = ctx->f5.fl + ctx->f1.fl;
    // 0x00278694: sw          $t0, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->r8;
    // 0x00278698: sw          $t1, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r9;
    // 0x0027869C: mul.s       $f1, $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f2.fl);
    // 0x002786A0: addiu       $a2, $a0, 0x38
    ctx->r6 = ADD32(ctx->r4, 0X38);
    // 0x002786A4: addiu       $t0, $a0, 0x40
    ctx->r8 = ADD32(ctx->r4, 0X40);
    // 0x002786A8: sw          $a3, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r7;
    // 0x002786AC: sw          $v0, 0x28($a0)
    MEM_W(0X28, ctx->r4) = ctx->r2;
    // 0x002786B0: add.s       $f0, $f6, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f6.fl + ctx->f0.fl;
    // 0x002786B4: addiu       $v0, $a0, 0x48
    ctx->r2 = ADD32(ctx->r4, 0X48);
    // 0x002786B8: sw          $t2, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r10;
    // 0x002786BC: mul.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f2.fl);
    // 0x002786C0: sw          $a2, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r6;
    // 0x002786C4: sw          $t0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r8;
    // 0x002786C8: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x002786CC: trunc.w.s   $f7, $f1
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 1);
    ctx->f_odd[(7 - 1) * 2] = TRUNC_W_S(ctx->f1.fl);
    // 0x002786D0: mfc1        $v0, $f7
    ctx->r2 = (int32_t)ctx->f_odd[(7 - 1) * 2];
    // 0x002786D4: trunc.w.s   $f7, $f0
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(7 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x002786D8: mfc1        $v1, $f7
    ctx->r3 = (int32_t)ctx->f_odd[(7 - 1) * 2];
    // 0x002786DC: mul.s       $f0, $f5, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f5.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = MUL_S(ctx->f5.fl, ctx->f2.fl);
    // 0x002786E0: lui         $a1, 0xE400
    ctx->r5 = S32(0XE400 << 16);
    // 0x002786E4: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x002786E8: sll         $v0, $v0, 12
    ctx->r2 = S32(ctx->r2 << 12);
    // 0x002786EC: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x002786F0: mul.s       $f2, $f6, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = MUL_S(ctx->f6.fl, ctx->f2.fl);
    // 0x002786F4: or          $v1, $v1, $a1
    ctx->r3 = ctx->r3 | ctx->r5;
    // 0x002786F8: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x002786FC: sw          $v0, 0x30($a0)
    MEM_W(0X30, ctx->r4) = ctx->r2;
    // 0x00278700: trunc.w.s   $f7, $f0
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(7 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x00278704: mfc1        $v0, $f7
    ctx->r2 = (int32_t)ctx->f_odd[(7 - 1) * 2];
    // 0x00278708: trunc.w.s   $f7, $f2
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 2);
    ctx->f_odd[(7 - 1) * 2] = TRUNC_W_S(ctx->f2.fl);
    // 0x0027870C: mfc1        $v1, $f7
    ctx->r3 = (int32_t)ctx->f_odd[(7 - 1) * 2];
    // 0x00278710: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x00278714: sll         $v0, $v0, 12
    ctx->r2 = S32(ctx->r2 << 12);
    // 0x00278718: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x0027871C: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x00278720: sw          $v0, 0x4($a3)
    MEM_W(0X4, ctx->r7) = ctx->r2;
    // 0x00278724: lui         $v0, 0xE100
    ctx->r2 = S32(0XE100 << 16);
    // 0x00278728: sw          $v0, 0x38($a0)
    MEM_W(0X38, ctx->r4) = ctx->r2;
    // 0x0027872C: lui         $v0, 0xF100
    ctx->r2 = S32(0XF100 << 16);
    // 0x00278730: sw          $zero, 0x4($a2)
    MEM_W(0X4, ctx->r6) = 0;
    // 0x00278734: sw          $v0, 0x40($a0)
    MEM_W(0X40, ctx->r4) = ctx->r2;
    // 0x00278738: sll         $v0, $t4, 16
    ctx->r2 = S32(ctx->r12 << 16);
    // 0x0027873C: andi        $v1, $t3, 0xFFFF
    ctx->r3 = ctx->r11 & 0XFFFF;
    // 0x00278740: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x00278744: jr          $ra
    // 0x00278748: sw          $v0, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r2;
    return;
    // 0x00278748: sw          $v0, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r2;
;}
RECOMP_FUNC void func_0042D410(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0042D410: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x0042D414: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x0042D418: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x0042D41C: addiu       $a0, $s2, 0x7514
    ctx->r4 = ADD32(ctx->r18, 0X7514);
    // 0x0042D420: addiu       $a1, $s2, 0x6A94
    ctx->r5 = ADD32(ctx->r18, 0X6A94);
    // 0x0042D424: addiu       $a2, $zero, 0x54
    ctx->r6 = ADD32(0, 0X54);
    // 0x0042D428: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    // 0x0042D42C: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x0042D430: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x0042D434: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x0042D438: jal         0x0026D330
    // 0x0042D43C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    func_0026D330(rdram, ctx);
        goto after_0;
    // 0x0042D43C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_0:
    // 0x0042D440: addiu       $a0, $s2, 0x7580
    ctx->r4 = ADD32(ctx->r18, 0X7580);
    // 0x0042D444: addiu       $a1, $s2, 0x752C
    ctx->r5 = ADD32(ctx->r18, 0X752C);
    // 0x0042D448: addiu       $a2, $zero, 0x1C
    ctx->r6 = ADD32(0, 0X1C);
    // 0x0042D44C: jal         0x0026D330
    // 0x0042D450: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    func_0026D330(rdram, ctx);
        goto after_1;
    // 0x0042D450: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    after_1:
    // 0x0042D454: jal         0x0026D230
    // 0x0042D458: addiu       $a0, $s2, 0x6A88
    ctx->r4 = ADD32(ctx->r18, 0X6A88);
    func_0026D230(rdram, ctx);
        goto after_2;
    // 0x0042D458: addiu       $a0, $s2, 0x6A88
    ctx->r4 = ADD32(ctx->r18, 0X6A88);
    after_2:
    // 0x0042D45C: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x0042D460: addiu       $s1, $zero, 0x2588
    ctx->r17 = ADD32(0, 0X2588);
L_0042D464:
    // 0x0042D464: addiu       $a0, $s2, 0x6A88
    ctx->r4 = ADD32(ctx->r18, 0X6A88);
    // 0x0042D468: jal         0x0026D288
    // 0x0042D46C: addu        $a1, $s2, $s1
    ctx->r5 = ADD32(ctx->r18, ctx->r17);
    func_0026D288(rdram, ctx);
        goto after_3;
    // 0x0042D46C: addu        $a1, $s2, $s1
    ctx->r5 = ADD32(ctx->r18, ctx->r17);
    after_3:
    // 0x0042D470: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x0042D474: slti        $v0, $s0, 0x60
    ctx->r2 = SIGNED(ctx->r16) < 0X60 ? 1 : 0;
    // 0x0042D478: bne         $v0, $zero, L_0042D464
    if (ctx->r2 != 0) {
        // 0x0042D47C: addiu       $s1, $s1, 0xB8
        ctx->r17 = ADD32(ctx->r17, 0XB8);
            goto L_0042D464;
    }
    // 0x0042D47C: addiu       $s1, $s1, 0xB8
    ctx->r17 = ADD32(ctx->r17, 0XB8);
    // 0x0042D480: ori         $a0, $zero, 0x95A0
    ctx->r4 = 0 | 0X95A0;
    // 0x0042D484: addu        $a0, $s2, $a0
    ctx->r4 = ADD32(ctx->r18, ctx->r4);
    // 0x0042D488: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x0042D48C: jal         0x00200500
    // 0x0042D490: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    func_00200500(rdram, ctx);
        goto after_4;
    // 0x0042D490: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_4:
    // 0x0042D494: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x0042D498: ori         $s1, $zero, 0x94D8
    ctx->r17 = 0 | 0X94D8;
L_0042D49C:
    // 0x0042D49C: addu        $a0, $s2, $s1
    ctx->r4 = ADD32(ctx->r18, ctx->r17);
    // 0x0042D4A0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x0042D4A4: jal         0x00200500
    // 0x0042D4A8: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    func_00200500(rdram, ctx);
        goto after_5;
    // 0x0042D4A8: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_5:
    // 0x0042D4AC: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x0042D4B0: slti        $v0, $s0, 0xA
    ctx->r2 = SIGNED(ctx->r16) < 0XA ? 1 : 0;
    // 0x0042D4B4: bne         $v0, $zero, L_0042D49C
    if (ctx->r2 != 0) {
        // 0x0042D4B8: addiu       $s1, $s1, 0x14
        ctx->r17 = ADD32(ctx->r17, 0X14);
            goto L_0042D49C;
    }
    // 0x0042D4B8: addiu       $s1, $s1, 0x14
    ctx->r17 = ADD32(ctx->r17, 0X14);
    // 0x0042D4BC: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x0042D4C0: ori         $s3, $zero, 0x95A0
    ctx->r19 = 0 | 0X95A0;
    // 0x0042D4C4: addiu       $s1, $zero, 0x7598
    ctx->r17 = ADD32(0, 0X7598);
L_0042D4C8:
    // 0x0042D4C8: addu        $a0, $s2, $s3
    ctx->r4 = ADD32(ctx->r18, ctx->r19);
    // 0x0042D4CC: jal         0x00200574
    // 0x0042D4D0: addu        $a1, $s2, $s1
    ctx->r5 = ADD32(ctx->r18, ctx->r17);
    func_00200574(rdram, ctx);
        goto after_6;
    // 0x0042D4D0: addu        $a1, $s2, $s1
    ctx->r5 = ADD32(ctx->r18, ctx->r17);
    after_6:
    // 0x0042D4D4: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x0042D4D8: slti        $v0, $s0, 0x64
    ctx->r2 = SIGNED(ctx->r16) < 0X64 ? 1 : 0;
    // 0x0042D4DC: bne         $v0, $zero, L_0042D4C8
    if (ctx->r2 != 0) {
        // 0x0042D4E0: addiu       $s1, $s1, 0x50
        ctx->r17 = ADD32(ctx->r17, 0X50);
            goto L_0042D4C8;
    }
    // 0x0042D4E0: addiu       $s1, $s1, 0x50
    ctx->r17 = ADD32(ctx->r17, 0X50);
    // 0x0042D4E4: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x0042D4E8: jal         0x00235F48
    // 0x0042D4EC: sw          $zero, 0x2580($s2)
    MEM_W(0X2580, ctx->r18) = 0;
    func_00235F48(rdram, ctx);
        goto after_7;
    // 0x0042D4EC: sw          $zero, 0x2580($s2)
    MEM_W(0X2580, ctx->r18) = 0;
    after_7:
    // 0x0042D4F0: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x0042D4F4: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x0042D4F8: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x0042D4FC: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x0042D500: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0042D504: jr          $ra
    // 0x0042D508: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x0042D508: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_0045C9D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0045C9D0: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x0045C9D4: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0045C9D8: sw          $v0, 0x9B0($at)
    MEM_W(0X9B0, ctx->r1) = ctx->r2;
    // 0x0045C9DC: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0045C9E0: sw          $zero, 0x9A4($at)
    MEM_W(0X9A4, ctx->r1) = 0;
    // 0x0045C9E4: jr          $ra
    // 0x0045C9E8: nop

    return;
    // 0x0045C9E8: nop

;}
RECOMP_FUNC void func_0044F614(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0044F614: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0044F618: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0044F61C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x0044F620: addiu       $a1, $zero, 0x1D0
    ctx->r5 = ADD32(0, 0X1D0);
    // 0x0044F624: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x0044F628: jal         0x00200500
    // 0x0044F62C: addiu       $a2, $zero, 0x1D4
    ctx->r6 = ADD32(0, 0X1D4);
    func_00200500(rdram, ctx);
        goto after_0;
    // 0x0044F62C: addiu       $a2, $zero, 0x1D4
    ctx->r6 = ADD32(0, 0X1D4);
    after_0:
    // 0x0044F630: sh          $zero, 0x14($s0)
    MEM_H(0X14, ctx->r16) = 0;
    // 0x0044F634: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x0044F638: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0044F63C: jr          $ra
    // 0x0044F640: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0044F640: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
