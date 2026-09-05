#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_00226C7C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00226C7C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00226C80: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00226C84: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x00226C88: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x00226C8C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00226C90: lw          $a0, 0x6C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X6C);
    // 0x00226C94: jal         0x002017D4
    // 0x00226C98: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_002017D4(rdram, ctx);
        goto after_0;
    // 0x00226C98: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x00226C9C: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x00226CA0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00226CA4: jal         0x002017D4
    // 0x00226CA8: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_002017D4(rdram, ctx);
        goto after_1;
    // 0x00226CA8: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_1:
    // 0x00226CAC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00226CB0: jal         0x002017D4
    // 0x00226CB4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_002017D4(rdram, ctx);
        goto after_2;
    // 0x00226CB4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_2:
    // 0x00226CB8: addu        $v0, $v0, $s1
    ctx->r2 = ADD32(ctx->r2, ctx->r17);
    // 0x00226CBC: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x00226CC0: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00226CC4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00226CC8: jr          $ra
    // 0x00226CCC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00226CCC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_0029D44C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0029D44C: lw          $v0, 0x14($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X14);
    // 0x0029D450: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x0029D454: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x0029D458: addu        $s4, $a0, $zero
    ctx->r20 = ADD32(ctx->r4, 0);
    // 0x0029D45C: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x0029D460: addu        $s5, $a1, $zero
    ctx->r21 = ADD32(ctx->r5, 0);
    // 0x0029D464: addu        $a1, $a2, $zero
    ctx->r5 = ADD32(ctx->r6, 0);
    // 0x0029D468: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x0029D46C: lui         $s2, 0x800C
    ctx->r18 = S32(0X800C << 16);
    // 0x0029D470: addiu       $s2, $s2, -0x76A0
    ctx->r18 = ADD32(ctx->r18, -0X76A0);
    // 0x0029D474: sw          $ra, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r31;
    // 0x0029D478: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x0029D47C: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x0029D480: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x0029D484: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
    // 0x0029D488: bne         $v0, $zero, L_0029D5A4
    if (ctx->r2 != 0) {
        // 0x0029D48C: addu        $a2, $a3, $zero
        ctx->r6 = ADD32(ctx->r7, 0);
            goto L_0029D5A4;
    }
    // 0x0029D48C: addu        $a2, $a3, $zero
    ctx->r6 = ADD32(ctx->r7, 0);
    // 0x0029D490: jal         0x0029B030
    // 0x0029D494: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    osCreateMesgQueue_recomp(rdram, ctx);
        goto after_0;
    // 0x0029D494: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    after_0:
    // 0x0029D498: lui         $s0, 0x8012
    ctx->r16 = S32(0X8012 << 16);
    // 0x0029D49C: addiu       $s0, $s0, 0x4D10
    ctx->r16 = ADD32(ctx->r16, 0X4D10);
    // 0x0029D4A0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0029D4A4: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x0029D4A8: addiu       $a1, $a1, 0x4D28
    ctx->r5 = ADD32(ctx->r5, 0X4D28);
    // 0x0029D4AC: jal         0x0029B030
    // 0x0029D4B0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osCreateMesgQueue_recomp(rdram, ctx);
        goto after_1;
    // 0x0029D4B0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_1:
    // 0x0029D4B4: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x0029D4B8: lw          $v0, -0x7670($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X7670);
    // 0x0029D4BC: bnel        $v0, $zero, L_0029D4D0
    if (ctx->r2 != 0) {
        // 0x0029D4C0: addiu       $a0, $zero, 0x8
        ctx->r4 = ADD32(0, 0X8);
            goto L_0029D4D0;
    }
    goto skip_0;
    // 0x0029D4C0: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    skip_0:
    // 0x0029D4C4: jal         0x0029DD10
    // 0x0029D4C8: nop

    func_0029DD10(rdram, ctx);
        goto after_2;
    // 0x0029D4C8: nop

    after_2:
    // 0x0029D4CC: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
L_0029D4D0:
    // 0x0029D4D0: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x0029D4D4: lui         $a2, 0x2222
    ctx->r6 = S32(0X2222 << 16);
    // 0x0029D4D8: jal         0x0029B950
    // 0x0029D4DC: ori         $a2, $a2, 0x2222
    ctx->r6 = ctx->r6 | 0X2222;
    osSetEventMesg_recomp(rdram, ctx);
        goto after_3;
    // 0x0029D4DC: ori         $a2, $a2, 0x2222
    ctx->r6 = ctx->r6 | 0X2222;
    after_3:
    // 0x0029D4E0: addiu       $s3, $zero, -0x1
    ctx->r19 = ADD32(0, -0X1);
    // 0x0029D4E4: jal         0x0029B150
    // 0x0029D4E8: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_0029B150(rdram, ctx);
        goto after_4;
    // 0x0029D4E8: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_4:
    // 0x0029D4EC: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x0029D4F0: slt         $v0, $v1, $s4
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r20) ? 1 : 0;
    // 0x0029D4F4: beq         $v0, $zero, L_0029D50C
    if (ctx->r2 == 0) {
        // 0x0029D4F8: nop
    
            goto L_0029D50C;
    }
    // 0x0029D4F8: nop

    // 0x0029D4FC: addu        $s3, $v1, $zero
    ctx->r19 = ADD32(ctx->r3, 0);
    // 0x0029D500: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0029D504: jal         0x0029B9B0
    // 0x0029D508: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    func_0029B9B0(rdram, ctx);
        goto after_5;
    // 0x0029D508: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    after_5:
L_0029D50C:
    // 0x0029D50C: jal         0x0029DFF0
    // 0x0029D510: nop

    func_0029DFF0(rdram, ctx);
        goto after_6;
    // 0x0029D510: nop

    after_6:
    // 0x0029D514: lui         $s1, 0x8012
    ctx->r17 = S32(0X8012 << 16);
    // 0x0029D518: addiu       $s1, $s1, 0x3AE0
    ctx->r17 = ADD32(ctx->r17, 0X3AE0);
    // 0x0029D51C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0029D520: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x0029D524: lui         $a2, 0x2A
    ctx->r6 = S32(0X2A << 16);
    // 0x0029D528: addiu       $a2, $a2, -0x2970
    ctx->r6 = ADD32(ctx->r6, -0X2970);
    // 0x0029D52C: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x0029D530: sw          $v1, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r3;
    // 0x0029D534: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x0029D538: addiu       $v1, $v1, 0x4DB8
    ctx->r3 = ADD32(ctx->r3, 0X4DB8);
    // 0x0029D53C: sw          $v1, 0x10($s2)
    MEM_W(0X10, ctx->r18) = ctx->r3;
    // 0x0029D540: lui         $v1, 0x2A
    ctx->r3 = S32(0X2A << 16);
    // 0x0029D544: addiu       $v1, $v1, -0x6150
    ctx->r3 = ADD32(ctx->r3, -0X6150);
    // 0x0029D548: sw          $v1, 0x14($s2)
    MEM_W(0X14, ctx->r18) = ctx->r3;
    // 0x0029D54C: lui         $v1, 0x2A
    ctx->r3 = S32(0X2A << 16);
    // 0x0029D550: addiu       $v1, $v1, -0x2E70
    ctx->r3 = ADD32(ctx->r3, -0X2E70);
    // 0x0029D554: sw          $v1, 0x18($s2)
    MEM_W(0X18, ctx->r18) = ctx->r3;
    // 0x0029D558: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x0029D55C: addiu       $v1, $v1, 0x4D10
    ctx->r3 = ADD32(ctx->r3, 0X4D10);
    // 0x0029D560: sw          $s0, 0xC($s2)
    MEM_W(0XC, ctx->r18) = ctx->r16;
    // 0x0029D564: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x0029D568: addu        $a3, $s2, $zero
    ctx->r7 = ADD32(ctx->r18, 0);
    // 0x0029D56C: sw          $s1, 0x4($s2)
    MEM_W(0X4, ctx->r18) = ctx->r17;
    // 0x0029D570: sw          $s5, 0x8($s2)
    MEM_W(0X8, ctx->r18) = ctx->r21;
    // 0x0029D574: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    // 0x0029D578: jal         0x0029B060
    // 0x0029D57C: sw          $s4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r20;
    osCreateThread_recomp(rdram, ctx);
        goto after_7;
    // 0x0029D57C: sw          $s4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r20;
    after_7:
    // 0x0029D580: jal         0x0029BB10
    // 0x0029D584: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    osStartThread_recomp(rdram, ctx);
        goto after_8;
    // 0x0029D584: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_8:
    // 0x0029D588: jal         0x0029E010
    // 0x0029D58C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_0029E010(rdram, ctx);
        goto after_9;
    // 0x0029D58C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_9:
    // 0x0029D590: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x0029D594: beq         $s3, $v0, L_0029D5A4
    if (ctx->r19 == ctx->r2) {
        // 0x0029D598: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_0029D5A4;
    }
    // 0x0029D598: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0029D59C: jal         0x0029B9B0
    // 0x0029D5A0: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    func_0029B9B0(rdram, ctx);
        goto after_10;
    // 0x0029D5A0: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    after_10:
L_0029D5A4:
    // 0x0029D5A4: lw          $ra, 0x30($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X30);
    // 0x0029D5A8: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x0029D5AC: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x0029D5B0: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x0029D5B4: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x0029D5B8: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x0029D5BC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x0029D5C0: jr          $ra
    // 0x0029D5C4: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x0029D5C4: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x0029D5C8: nop

    // 0x0029D5CC: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0029D5D0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x0029D5D4: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x0029D5D8: lui         $s1, 0x8012
    ctx->r17 = S32(0X8012 << 16);
    // 0x0029D5DC: addiu       $s1, $s1, 0x4D30
    ctx->r17 = ADD32(ctx->r17, 0X4D30);
    // 0x0029D5E0: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x0029D5E4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x0029D5E8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x0029D5EC: lw          $v0, 0xC($s1)
    ctx->r2 = MEM_W(ctx->r17, 0XC);
    // 0x0029D5F0: lui         $v1, 0xB000
    ctx->r3 = S32(0XB000 << 16);
    // 0x0029D5F4: beq         $v0, $v1, L_0029D678
    if (ctx->r2 == ctx->r3) {
        // 0x0029D5F8: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_0029D678;
    }
    // 0x0029D5F8: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0029D5FC: addiu       $s0, $sp, 0x10
    ctx->r16 = ADD32(ctx->r29, 0X10);
    // 0x0029D600: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x0029D604: sb          $zero, 0x4($s1)
    MEM_B(0X4, ctx->r17) = 0;
    // 0x0029D608: jal         0x0029B410
    // 0x0029D60C: sw          $v1, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->r3;
    func_0029B410(rdram, ctx);
        goto after_11;
    // 0x0029D60C: sw          $v1, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->r3;
    after_11:
    // 0x0029D610: addiu       $a0, $s1, 0x14
    ctx->r4 = ADD32(ctx->r17, 0X14);
    // 0x0029D614: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x0029D618: lbu         $v0, 0x3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3);
    // 0x0029D61C: lw          $v1, 0x10($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X10);
    // 0x0029D620: addiu       $a2, $zero, 0x60
    ctx->r6 = ADD32(0, 0X60);
    // 0x0029D624: sb          $zero, 0x9($s1)
    MEM_B(0X9, ctx->r17) = 0;
    // 0x0029D628: sw          $zero, 0x10($s1)
    MEM_W(0X10, ctx->r17) = 0;
    // 0x0029D62C: sb          $v0, 0x5($s1)
    MEM_B(0X5, ctx->r17) = ctx->r2;
    // 0x0029D630: srl         $v0, $v1, 8
    ctx->r2 = S32(U32(ctx->r3) >> 8);
    // 0x0029D634: sb          $v0, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r2;
    // 0x0029D638: srl         $v0, $v1, 16
    ctx->r2 = S32(U32(ctx->r3) >> 16);
    // 0x0029D63C: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x0029D640: srl         $v1, $v1, 20
    ctx->r3 = S32(U32(ctx->r3) >> 20);
    // 0x0029D644: andi        $v1, $v1, 0xF
    ctx->r3 = ctx->r3 & 0XF;
    // 0x0029D648: sb          $v0, 0x6($s1)
    MEM_B(0X6, ctx->r17) = ctx->r2;
    // 0x0029D64C: jal         0x00266C5C
    // 0x0029D650: sb          $v1, 0x7($s1)
    MEM_B(0X7, ctx->r17) = ctx->r3;
    func_00266C5C(rdram, ctx);
        goto after_12;
    // 0x0029D650: sb          $v1, 0x7($s1)
    MEM_B(0X7, ctx->r17) = ctx->r3;
    after_12:
    // 0x0029D654: jal         0x0029DFF0
    // 0x0029D658: nop

    func_0029DFF0(rdram, ctx);
        goto after_13;
    // 0x0029D658: nop

    after_13:
    // 0x0029D65C: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x0029D660: addiu       $v1, $v1, -0x7684
    ctx->r3 = ADD32(ctx->r3, -0X7684);
    // 0x0029D664: lw          $a1, 0x0($v1)
    ctx->r5 = MEM_W(ctx->r3, 0X0);
    // 0x0029D668: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x0029D66C: sw          $s1, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r17;
    // 0x0029D670: jal         0x0029E010
    // 0x0029D674: sw          $a1, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r5;
    func_0029E010(rdram, ctx);
        goto after_14;
    // 0x0029D674: sw          $a1, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r5;
    after_14:
L_0029D678:
    // 0x0029D678: addu        $v0, $s1, $zero
    ctx->r2 = ADD32(ctx->r17, 0);
    // 0x0029D67C: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x0029D680: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x0029D684: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x0029D688: jr          $ra
    // 0x0029D68C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x0029D68C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_0021F1D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0021F1D0: beq         $a1, $zero, L_0021F1E8
    if (ctx->r5 == 0) {
            // 0x0021F1D4: addiu       $v1, $zero, -0x3
    ctx->r3 = ADD32(0, -0X3);
    func_0021F1E8(rdram, ctx);
    return;
    }
    // 0x0021F1D4: addiu       $v1, $zero, -0x3
    ctx->r3 = ADD32(0, -0X3);
    // 0x0021F1D8: lw          $v0, 0x27C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X27C);
    // 0x0021F1DC: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x0021F1E0: jr          $ra
    // 0x0021F1E4: sw          $v0, 0x27C($a0)
    MEM_W(0X27C, ctx->r4) = ctx->r2;
    return;
    // 0x0021F1E4: sw          $v0, 0x27C($a0)
    MEM_W(0X27C, ctx->r4) = ctx->r2;
;}
RECOMP_FUNC void func_00295304(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00295304: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x00295308: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x0029530C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x00295310: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x00295314: addu        $s3, $a1, $zero
    ctx->r19 = ADD32(ctx->r5, 0);
    // 0x00295318: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x0029531C: addu        $s2, $a2, $zero
    ctx->r18 = ADD32(ctx->r6, 0);
    // 0x00295320: lui         $a1, 0x2A
    ctx->r5 = S32(0X2A << 16);
    // 0x00295324: addiu       $a1, $a1, -0xE70
    ctx->r5 = ADD32(ctx->r5, -0XE70);
    // 0x00295328: lui         $a2, 0x2A
    ctx->r6 = S32(0X2A << 16);
    // 0x0029532C: addiu       $a2, $a2, -0x49C
    ctx->r6 = ADD32(ctx->r6, -0X49C);
    // 0x00295330: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x00295334: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x00295338: jal         0x00296340
    // 0x0029533C: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    func_00296340(rdram, ctx);
        goto after_0;
    // 0x0029533C: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    after_0:
    // 0x00295340: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x00295344: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x00295348: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    // 0x0029534C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x00295350: addiu       $s1, $zero, 0x20
    ctx->r17 = ADD32(0, 0X20);
    // 0x00295354: jal         0x002912A0
    // 0x00295358: sw          $s1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r17;
    func_002912A0(rdram, ctx);
        goto after_1;
    // 0x00295358: sw          $s1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r17;
    after_1:
    // 0x0029535C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x00295360: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x00295364: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    // 0x00295368: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x0029536C: sw          $v0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r2;
    // 0x00295370: jal         0x002912A0
    // 0x00295374: sw          $s1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r17;
    func_002912A0(rdram, ctx);
        goto after_2;
    // 0x00295374: sw          $s1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r17;
    after_2:
    // 0x00295378: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x0029537C: jalr        $s3
    // 0x00295380: sw          $v0, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->r2;
    LOOKUP_FUNC(ctx->r19)(rdram, ctx);
        goto after_3;
    // 0x00295380: sw          $v0, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->r2;
    after_3:
    // 0x00295384: sw          $v0, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->r2;
    // 0x00295388: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0029538C: sw          $zero, 0x3C($s0)
    MEM_W(0X3C, ctx->r16) = 0;
    // 0x00295390: sw          $v0, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->r2;
    // 0x00295394: sw          $zero, 0x44($s0)
    MEM_W(0X44, ctx->r16) = 0;
    // 0x00295398: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x0029539C: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x002953A0: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x002953A4: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x002953A8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x002953AC: jr          $ra
    // 0x002953B0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x002953B0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_00293BA8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00293BA8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x00293BAC: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x00293BB0: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x00293BB4: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x00293BB8: addu        $s4, $a1, $zero
    ctx->r20 = ADD32(ctx->r5, 0);
    // 0x00293BBC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x00293BC0: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x00293BC4: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x00293BC8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00293BCC: jal         0x0029E230
    // 0x00293BD0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    func_0029E230(rdram, ctx);
        goto after_0;
    // 0x00293BD0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_0:
    // 0x00293BD4: lw          $s0, 0x8($s2)
    ctx->r16 = MEM_W(ctx->r18, 0X8);
    // 0x00293BD8: beq         $s0, $zero, L_00293C28
    if (ctx->r16 == 0) {
        // 0x00293BDC: addu        $s3, $v0, $zero
        ctx->r19 = ADD32(ctx->r2, 0);
            goto L_00293C28;
    }
    // 0x00293BDC: addu        $s3, $v0, $zero
    ctx->r19 = ADD32(ctx->r2, 0);
L_00293BE0:
    // 0x00293BE0: lw          $v0, 0x10($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X10);
    // 0x00293BE4: lw          $s1, 0x0($s0)
    ctx->r17 = MEM_W(ctx->r16, 0X0);
    // 0x00293BE8: bnel        $v0, $s4, L_00293C20
    if (ctx->r2 != ctx->r20) {
        // 0x00293BEC: addu        $s0, $s1, $zero
        ctx->r16 = ADD32(ctx->r17, 0);
            goto L_00293C20;
    }
    goto skip_0;
    // 0x00293BEC: addu        $s0, $s1, $zero
    ctx->r16 = ADD32(ctx->r17, 0);
    skip_0:
    // 0x00293BF0: beq         $s1, $zero, L_00293C08
    if (ctx->r17 == 0) {
        // 0x00293BF4: nop
    
            goto L_00293C08;
    }
    // 0x00293BF4: nop

    // 0x00293BF8: lw          $v0, 0x8($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X8);
    // 0x00293BFC: lw          $v1, 0x8($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X8);
    // 0x00293C00: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x00293C04: sw          $v0, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->r2;
L_00293C08:
    // 0x00293C08: jal         0x002933B0
    // 0x00293C0C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_002933B0(rdram, ctx);
        goto after_1;
    // 0x00293C0C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x00293C10: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00293C14: jal         0x002933E0
    // 0x00293C18: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    func_002933E0(rdram, ctx);
        goto after_2;
    // 0x00293C18: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    after_2:
    // 0x00293C1C: addu        $s0, $s1, $zero
    ctx->r16 = ADD32(ctx->r17, 0);
L_00293C20:
    // 0x00293C20: bne         $s0, $zero, L_00293BE0
    if (ctx->r16 != 0) {
        // 0x00293C24: nop
    
            goto L_00293BE0;
    }
    // 0x00293C24: nop

L_00293C28:
    // 0x00293C28: jal         0x0029E230
    // 0x00293C2C: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    func_0029E230(rdram, ctx);
        goto after_3;
    // 0x00293C2C: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    after_3:
    // 0x00293C30: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x00293C34: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x00293C38: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x00293C3C: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x00293C40: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00293C44: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00293C48: jr          $ra
    // 0x00293C4C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x00293C4C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_002821AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002821AC: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x002821B0: sdc1        $f22, 0x48($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X48, ctx->r29);
    // 0x002821B4: lwc1        $f22, 0x60($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X60);
    // 0x002821B8: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x002821BC: lw          $v0, 0x35D4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X35D4);
    // 0x002821C0: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x002821C4: addu        $s3, $a0, $zero
    ctx->r19 = ADD32(ctx->r4, 0);
    // 0x002821C8: sw          $s6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r22;
    // 0x002821CC: addu        $s6, $a1, $zero
    ctx->r22 = ADD32(ctx->r5, 0);
    // 0x002821D0: sw          $s7, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r23;
    // 0x002821D4: addu        $s7, $a3, $zero
    ctx->r23 = ADD32(ctx->r7, 0);
    // 0x002821D8: sw          $s5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r21;
    // 0x002821DC: lw          $s5, 0x64($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X64);
    // 0x002821E0: sw          $ra, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r31;
    // 0x002821E4: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x002821E8: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x002821EC: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x002821F0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x002821F4: sdc1        $f21, 0x40($sp)
    CHECK_FR(ctx, 21);
    SD(ctx->f21.u64, 0X40, ctx->r29);
    // 0x002821F8: sdc1        $f20, 0x38($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X38, ctx->r29);
    // 0x002821FC: bne         $a2, $v0, L_0028220C
    if (ctx->r6 != ctx->r2) {
        // 0x00282200: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_0028220C;
    }
    // 0x00282200: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x00282204: lui         $a2, 0x800B
    ctx->r6 = S32(0X800B << 16);
    // 0x00282208: lw          $a2, 0x2CD0($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X2CD0);
L_0028220C:
    // 0x0028220C: addu        $s1, $a2, $zero
    ctx->r17 = ADD32(ctx->r6, 0);
    // 0x00282210: lbu         $v0, 0x0($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X0);
    // 0x00282214: beq         $v0, $zero, L_00282300
    if (ctx->r2 == 0) {
        // 0x00282218: addu        $s2, $s1, $zero
        ctx->r18 = ADD32(ctx->r17, 0);
            goto L_00282300;
    }
    // 0x00282218: addu        $s2, $s1, $zero
    ctx->r18 = ADD32(ctx->r17, 0);
    // 0x0028221C: addiu       $s4, $zero, 0xA
    ctx->r20 = ADD32(0, 0XA);
L_00282220:
    // 0x00282220: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00282224: lwc1        $f20, -0x639C($at)
    ctx->f20.u32l = MEM_W(ctx->r1, -0X639C);
    // 0x00282228: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0028222C: lwc1        $f21, -0x6398($at)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r1, -0X6398);
    // 0x00282230: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_00282234:
    // 0x00282234: lbu         $v0, 0x0($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X0);
    // 0x00282238: beq         $v0, $s4, L_00282248
    if (ctx->r2 == ctx->r20) {
        // 0x0028223C: nop
    
            goto L_00282248;
    }
    // 0x0028223C: nop

    // 0x00282240: bnel        $v0, $zero, L_00282220
    if (ctx->r2 != 0) {
        // 0x00282244: addiu       $s4, $zero, 0xA
        ctx->r20 = ADD32(0, 0XA);
            goto L_00282220;
    }
    goto skip_0;
    // 0x00282244: addiu       $s4, $zero, 0xA
    ctx->r20 = ADD32(0, 0XA);
    skip_0:
L_00282248:
    // 0x00282248: beq         $s2, $s1, L_002822F4
    if (ctx->r18 == ctx->r17) {
        // 0x0028224C: nop
    
            goto L_002822F4;
    }
    // 0x0028224C: nop

    // 0x00282250: lw          $s0, 0xF0C($s3)
    ctx->r16 = MEM_W(ctx->r19, 0XF0C);
    // 0x00282254: beq         $s0, $zero, L_00282280
    if (ctx->r16 == 0) {
        // 0x00282258: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_00282280;
    }
    // 0x00282258: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0028225C: jal         0x00281B58
    // 0x00282260: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00281B58(rdram, ctx);
        goto after_0;
    // 0x00282260: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x00282264: addiu       $a0, $s3, 0xF0C
    ctx->r4 = ADD32(ctx->r19, 0XF0C);
    // 0x00282268: jal         0x00200738
    // 0x0028226C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_00200738(rdram, ctx);
        goto after_1;
    // 0x0028226C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_1:
    // 0x00282270: addiu       $a0, $s6, 0xE28
    ctx->r4 = ADD32(ctx->r22, 0XE28);
    // 0x00282274: jal         0x00200574
    // 0x00282278: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_00200574(rdram, ctx);
        goto after_2;
    // 0x00282278: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_2:
    // 0x0028227C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_00282280:
    // 0x00282280: beql        $a0, $zero, L_002822F4
    if (ctx->r4 == 0) {
        // 0x00282284: addiu       $s2, $s1, 0x1
        ctx->r18 = ADD32(ctx->r17, 0X1);
            goto L_002822F4;
    }
    goto skip_1;
    // 0x00282284: addiu       $s2, $s1, 0x1
    ctx->r18 = ADD32(ctx->r17, 0X1);
    skip_1:
    // 0x00282288: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x0028228C: lw          $v1, 0x2030($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X2030);
    // 0x00282290: mul.s       $f1, $f22, $f21
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f21.fl); 
    ctx->f1.fl = MUL_S(ctx->f22.fl, ctx->f21.fl);
    // 0x00282294: sw          $s7, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r23;
    // 0x00282298: sw          $s2, 0x24($a0)
    MEM_W(0X24, ctx->r4) = ctx->r18;
    // 0x0028229C: sw          $zero, 0x18($a0)
    MEM_W(0X18, ctx->r4) = 0;
    // 0x002822A0: swc1        $f20, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->f20.u32l;
    // 0x002822A4: sw          $s5, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = ctx->r21;
    // 0x002822A8: sw          $zero, 0x20($a0)
    MEM_W(0X20, ctx->r4) = 0;
    // 0x002822AC: sw          $zero, 0x28($a0)
    MEM_W(0X28, ctx->r4) = 0;
    // 0x002822B0: sw          $zero, 0x2C($a0)
    MEM_W(0X2C, ctx->r4) = 0;
    // 0x002822B4: swc1        $f20, 0x38($a0)
    MEM_W(0X38, ctx->r4) = ctx->f20.u32l;
    // 0x002822B8: swc1        $f20, 0x3C($a0)
    MEM_W(0X3C, ctx->r4) = ctx->f20.u32l;
    // 0x002822BC: srl         $v0, $v1, 31
    ctx->r2 = S32(U32(ctx->r3) >> 31);
    // 0x002822C0: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x002822C4: sra         $v1, $v1, 1
    ctx->r3 = S32(SIGNED(ctx->r3) >> 1);
    // 0x002822C8: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x002822CC: lw          $v0, 0x2034($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2034);
    // 0x002822D0: mtc1        $v1, $f0
    ctx->f0.u32l = ctx->r3;
    // 0x002822D4: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x002822D8: swc1        $f0, 0x30($a0)
    MEM_W(0X30, ctx->r4) = ctx->f0.u32l;
    // 0x002822DC: addiu       $v0, $v0, -0x50
    ctx->r2 = ADD32(ctx->r2, -0X50);
    // 0x002822E0: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x002822E4: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x002822E8: swc1        $f0, 0x34($a0)
    MEM_W(0X34, ctx->r4) = ctx->f0.u32l;
    // 0x002822EC: swc1        $f1, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->f_odd[(1 - 1) * 2];
    // 0x002822F0: addiu       $s2, $s1, 0x1
    ctx->r18 = ADD32(ctx->r17, 0X1);
L_002822F4:
    // 0x002822F4: lbu         $v0, 0x0($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X0);
    // 0x002822F8: bne         $v0, $zero, L_00282234
    if (ctx->r2 != 0) {
        // 0x002822FC: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_00282234;
    }
    // 0x002822FC: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_00282300:
    // 0x00282300: lw          $ra, 0x30($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X30);
    // 0x00282304: lw          $s7, 0x2C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X2C);
    // 0x00282308: lw          $s6, 0x28($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X28);
    // 0x0028230C: lw          $s5, 0x24($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X24);
    // 0x00282310: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x00282314: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x00282318: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x0028231C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00282320: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00282324: ldc1        $f22, 0x48($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X48);
    // 0x00282328: ldc1        $f21, 0x40($sp)
    CHECK_FR(ctx, 21);
    ctx->f21.u64 = LD(ctx->r29, 0X40);
    // 0x0028232C: ldc1        $f20, 0x38($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X38);
    // 0x00282330: addu        $v0, $a0, $zero
    ctx->r2 = ADD32(ctx->r4, 0);
    // 0x00282334: jr          $ra
    // 0x00282338: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x00282338: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_00275840(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00275840: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00275844: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x00275848: addiu       $a0, $a0, 0x2A00
    ctx->r4 = ADD32(ctx->r4, 0X2A00);
    // 0x0027584C: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x00275850: jal         0x00271B04
    // 0x00275854: nop

    func_00271B04(rdram, ctx);
        goto after_0;
    // 0x00275854: nop

    after_0:
    // 0x00275858: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x0027585C: jr          $ra
    // 0x00275860: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00275860: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00253B54(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00253B54: sll         $v0, $a1, 1
    ctx->r2 = S32(ctx->r5 << 1);
    // 0x00253B58: addiu       $v0, $v0, 0x934
    ctx->r2 = ADD32(ctx->r2, 0X934);
    // 0x00253B5C: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x00253B60: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x00253B64: bne         $a1, $v0, L_00253B74
    if (ctx->r5 != ctx->r2) {
        // 0x00253B68: addu        $t1, $zero, $zero
        ctx->r9 = ADD32(0, 0);
            goto L_00253B74;
    }
    // 0x00253B68: addu        $t1, $zero, $zero
    ctx->r9 = ADD32(0, 0);
    // 0x00253B6C: j           L_00253BDC
    // 0x00253B70: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
        goto L_00253BDC;
    // 0x00253B70: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
L_00253B74:
    // 0x00253B74: addu        $t2, $t1, $zero
    ctx->r10 = ADD32(ctx->r9, 0);
    // 0x00253B78: addu        $t0, $zero, $zero
    ctx->r8 = ADD32(0, 0);
L_00253B7C:
    // 0x00253B7C: sll         $v0, $t2, 2
    ctx->r2 = S32(ctx->r10 << 2);
    // 0x00253B80: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00253B84: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x00253B88: lw          $a3, -0x9E8($at)
    ctx->r7 = MEM_W(ctx->r1, -0X9E8);
L_00253B8C:
    // 0x00253B8C: lw          $v1, 0x20($a3)
    ctx->r3 = MEM_W(ctx->r7, 0X20);
    // 0x00253B90: beql        $v1, $zero, L_00253BCC
    if (ctx->r3 == 0) {
        // 0x00253B94: addiu       $t2, $t2, 0x1
        ctx->r10 = ADD32(ctx->r10, 0X1);
            goto L_00253BCC;
    }
    goto skip_0;
    // 0x00253B94: addiu       $t2, $t2, 0x1
    ctx->r10 = ADD32(ctx->r10, 0X1);
    skip_0:
    // 0x00253B98: lh          $v0, 0x0($v1)
    ctx->r2 = MEM_H(ctx->r3, 0X0);
    // 0x00253B9C: bnel        $v0, $a1, L_00253BBC
    if (ctx->r2 != ctx->r5) {
        // 0x00253BA0: addiu       $t0, $t0, 0x1
        ctx->r8 = ADD32(ctx->r8, 0X1);
            goto L_00253BBC;
    }
    goto skip_1;
    // 0x00253BA0: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    skip_1:
    // 0x00253BA4: lh          $v1, 0x2($v1)
    ctx->r3 = MEM_H(ctx->r3, 0X2);
    // 0x00253BA8: slt         $v0, $v1, $t1
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r9) ? 1 : 0;
    // 0x00253BAC: bnel        $v0, $zero, L_00253BB4
    if (ctx->r2 != 0) {
        // 0x00253BB0: addu        $v1, $t1, $zero
        ctx->r3 = ADD32(ctx->r9, 0);
            goto L_00253BB4;
    }
    goto skip_2;
    // 0x00253BB0: addu        $v1, $t1, $zero
    ctx->r3 = ADD32(ctx->r9, 0);
    skip_2:
L_00253BB4:
    // 0x00253BB4: addu        $t1, $v1, $zero
    ctx->r9 = ADD32(ctx->r3, 0);
    // 0x00253BB8: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
L_00253BBC:
    // 0x00253BBC: slti        $v0, $t0, 0x3
    ctx->r2 = SIGNED(ctx->r8) < 0X3 ? 1 : 0;
    // 0x00253BC0: bne         $v0, $zero, L_00253B8C
    if (ctx->r2 != 0) {
        // 0x00253BC4: addiu       $a3, $a3, 0x4
        ctx->r7 = ADD32(ctx->r7, 0X4);
            goto L_00253B8C;
    }
    // 0x00253BC4: addiu       $a3, $a3, 0x4
    ctx->r7 = ADD32(ctx->r7, 0X4);
    // 0x00253BC8: addiu       $t2, $t2, 0x1
    ctx->r10 = ADD32(ctx->r10, 0X1);
L_00253BCC:
    // 0x00253BCC: slti        $v0, $t2, 0x23
    ctx->r2 = SIGNED(ctx->r10) < 0X23 ? 1 : 0;
    // 0x00253BD0: bnel        $v0, $zero, L_00253B7C
    if (ctx->r2 != 0) {
        // 0x00253BD4: addu        $t0, $zero, $zero
        ctx->r8 = ADD32(0, 0);
            goto L_00253B7C;
    }
    goto skip_3;
    // 0x00253BD4: addu        $t0, $zero, $zero
    ctx->r8 = ADD32(0, 0);
    skip_3:
    // 0x00253BD8: addu        $a1, $t1, $zero
    ctx->r5 = ADD32(ctx->r9, 0);
L_00253BDC:
    // 0x00253BDC: lh          $v0, 0x0($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X0);
    // 0x00253BE0: slt         $a3, $v0, $a1
    ctx->r7 = SIGNED(ctx->r2) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x00253BE4: lhu         $v0, 0x0($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X0);
    // 0x00253BE8: beq         $a3, $zero, L_00253C0C
    if (ctx->r7 == 0) {
        // 0x00253BEC: addu        $v0, $v0, $a2
        ctx->r2 = ADD32(ctx->r2, ctx->r6);
            goto L_00253C0C;
    }
    // 0x00253BEC: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x00253BF0: sh          $v0, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r2;
    // 0x00253BF4: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x00253BF8: sra         $v1, $v0, 16
    ctx->r3 = S32(SIGNED(ctx->r2) >> 16);
    // 0x00253BFC: slt         $v0, $a1, $v1
    ctx->r2 = SIGNED(ctx->r5) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x00253C00: bnel        $v0, $zero, L_00253C08
    if (ctx->r2 != 0) {
        // 0x00253C04: addu        $v1, $a1, $zero
        ctx->r3 = ADD32(ctx->r5, 0);
            goto L_00253C08;
    }
    goto skip_4;
    // 0x00253C04: addu        $v1, $a1, $zero
    ctx->r3 = ADD32(ctx->r5, 0);
    skip_4:
L_00253C08:
    // 0x00253C08: sh          $v1, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r3;
L_00253C0C:
    // 0x00253C0C: jr          $ra
    // 0x00253C10: addu        $v0, $a3, $zero
    ctx->r2 = ADD32(ctx->r7, 0);
    return;
    // 0x00253C10: addu        $v0, $a3, $zero
    ctx->r2 = ADD32(ctx->r7, 0);
;}
RECOMP_FUNC void func_00426F7C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00426F7C: lbu         $v0, 0x0($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X0);
    // 0x00426F80: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x00426F84: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x00426F88: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x00426F8C: bne         $v0, $zero, L_00426F9C
    if (ctx->r2 != 0) {
            // 0x00426F90: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    func_00426F9C(rdram, ctx);
    return;
    }
    // 0x00426F90: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x00426F94: jr          $ra
    // 0x00426F98: addu        $v0, $a0, $zero
    ctx->r2 = ADD32(ctx->r4, 0);
    return;
    // 0x00426F98: addu        $v0, $a0, $zero
    ctx->r2 = ADD32(ctx->r4, 0);
;}
RECOMP_FUNC void func_0045B648(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0045B648: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x0045B64C: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0045B650: sw          $v0, 0x9C0($at)
    MEM_W(0X9C0, ctx->r1) = ctx->r2;
    // 0x0045B654: jr          $ra
    // 0x0045B658: nop

    return;
    // 0x0045B658: nop

;}
RECOMP_FUNC void func_002263C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002263C0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x002263C4: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x002263C8: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x002263CC: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x002263D0: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x002263D4: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x002263D8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x002263DC: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x002263E0: addu        $at, $s2, $at
    ctx->r1 = ADD32(ctx->r18, ctx->r1);
    // 0x002263E4: lwc1        $f0, -0x7148($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X7148);
    // 0x002263E8: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x002263EC: lwc1        $f1, 0x6D28($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X6D28);
    // 0x002263F0: add.s       $f1, $f0, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x002263F4: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x002263F8: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x002263FC: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x00226400: addu        $at, $s2, $at
    ctx->r1 = ADD32(ctx->r18, ctx->r1);
    // 0x00226404: swc1        $f1, -0x7148($at)
    MEM_W(-0X7148, ctx->r1) = ctx->f_odd[(1 - 1) * 2];
    // 0x00226408: bc1t        L_00226414
    if (c1cs) {
        // 0x0022640C: addiu       $s3, $zero, 0x1
        ctx->r19 = ADD32(0, 0X1);
            goto L_00226414;
    }
    // 0x0022640C: addiu       $s3, $zero, 0x1
    ctx->r19 = ADD32(0, 0X1);
    // 0x00226410: addu        $s3, $zero, $zero
    ctx->r19 = ADD32(0, 0);
L_00226414:
    // 0x00226414: beq         $s3, $zero, L_00226440
    if (ctx->r19 == 0) {
        // 0x00226418: nop
    
            goto L_00226440;
    }
    // 0x00226418: nop

    // 0x0022641C: trunc.w.s   $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    ctx->f2.u32l = TRUNC_W_S(ctx->f1.fl);
    // 0x00226420: mfc1        $v0, $f2
    ctx->r2 = (int32_t)ctx->f2.u32l;
    // 0x00226424: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x00226428: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x0022642C: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00226430: sub.s       $f0, $f1, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f1.fl - ctx->f0.fl;
    // 0x00226434: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x00226438: addu        $at, $s2, $at
    ctx->r1 = ADD32(ctx->r18, ctx->r1);
    // 0x0022643C: swc1        $f0, -0x7148($at)
    MEM_W(-0X7148, ctx->r1) = ctx->f0.u32l;
L_00226440:
    // 0x00226440: lw          $v0, 0xBF4($s2)
    ctx->r2 = MEM_W(ctx->r18, 0XBF4);
    // 0x00226444: blez        $v0, L_00226474
    if (SIGNED(ctx->r2) <= 0) {
        // 0x00226448: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_00226474;
    }
    // 0x00226448: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x0022644C: addu        $s1, $s2, $zero
    ctx->r17 = ADD32(ctx->r18, 0);
L_00226450:
    // 0x00226450: lw          $a0, 0xAF4($s1)
    ctx->r4 = MEM_W(ctx->r17, 0XAF4);
    // 0x00226454: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    // 0x00226458: jal         0x00214B58
    // 0x0022645C: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    func_00214B58(rdram, ctx);
        goto after_0;
    // 0x0022645C: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    after_0:
    // 0x00226460: lw          $v0, 0xBF4($s2)
    ctx->r2 = MEM_W(ctx->r18, 0XBF4);
    // 0x00226464: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x00226468: slt         $v0, $s0, $v0
    ctx->r2 = SIGNED(ctx->r16) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x0022646C: bne         $v0, $zero, L_00226450
    if (ctx->r2 != 0) {
        // 0x00226470: nop
    
            goto L_00226450;
    }
    // 0x00226470: nop

L_00226474:
    // 0x00226474: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x00226478: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x0022647C: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x00226480: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00226484: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00226488: jr          $ra
    // 0x0022648C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x0022648C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_0042E430(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0042E430: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0042E434: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0042E438: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x0042E43C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x0042E440: lw          $v0, 0x518($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X518);
    // 0x0042E444: addu        $a2, $a1, $zero
    ctx->r6 = ADD32(ctx->r5, 0);
    // 0x0042E448: sw          $a2, 0x520($s0)
    MEM_W(0X520, ctx->r16) = ctx->r6;
    // 0x0042E44C: lbu         $v1, 0x3E($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X3E);
    // 0x0042E450: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0042E454: beql        $v1, $v0, L_0042E45C
    if (ctx->r3 == ctx->r2) {
        // 0x0042E458: addiu       $a2, $zero, 0xB
        ctx->r6 = ADD32(0, 0XB);
            goto L_0042E45C;
    }
    goto skip_0;
    // 0x0042E458: addiu       $a2, $zero, 0xB
    ctx->r6 = ADD32(0, 0XB);
    skip_0:
L_0042E45C:
    // 0x0042E45C: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x0042E460: addiu       $a0, $a0, 0x7078
    ctx->r4 = ADD32(ctx->r4, 0X7078);
    // 0x0042E464: jal         0x00225EBC
    // 0x0042E468: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    func_00225EBC(rdram, ctx);
        goto after_0;
    // 0x0042E468: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    after_0:
    // 0x0042E46C: bnel        $v0, $zero, L_0042E4A8
    if (ctx->r2 != 0) {
        // 0x0042E470: sw          $v0, 0x14($s0)
        MEM_W(0X14, ctx->r16) = ctx->r2;
            goto L_0042E4A8;
    }
    goto skip_1;
    // 0x0042E470: sw          $v0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r2;
    skip_1:
    // 0x0042E474: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x0042E478: addiu       $a0, $a0, 0x7078
    ctx->r4 = ADD32(ctx->r4, 0X7078);
    // 0x0042E47C: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    // 0x0042E480: jal         0x00225EBC
    // 0x0042E484: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    func_00225EBC(rdram, ctx);
        goto after_1;
    // 0x0042E484: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    after_1:
    // 0x0042E488: bnel        $v0, $zero, L_0042E4A8
    if (ctx->r2 != 0) {
        // 0x0042E48C: sw          $v0, 0x14($s0)
        MEM_W(0X14, ctx->r16) = ctx->r2;
            goto L_0042E4A8;
    }
    goto skip_2;
    // 0x0042E48C: sw          $v0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r2;
    skip_2:
    // 0x0042E490: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x0042E494: addiu       $a0, $a0, 0x7078
    ctx->r4 = ADD32(ctx->r4, 0X7078);
    // 0x0042E498: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x0042E49C: jal         0x00225EBC
    // 0x0042E4A0: addu        $a2, $a1, $zero
    ctx->r6 = ADD32(ctx->r5, 0);
    func_00225EBC(rdram, ctx);
        goto after_2;
    // 0x0042E4A0: addu        $a2, $a1, $zero
    ctx->r6 = ADD32(ctx->r5, 0);
    after_2:
    // 0x0042E4A4: sw          $v0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r2;
L_0042E4A8:
    // 0x0042E4A8: lwc1        $f0, 0x38($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X38);
    // 0x0042E4AC: swc1        $f0, 0x34($s0)
    MEM_W(0X34, ctx->r16) = ctx->f0.u32l;
    // 0x0042E4B0: lwc1        $f0, 0x3C($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X3C);
    // 0x0042E4B4: swc1        $f0, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->f0.u32l;
    // 0x0042E4B8: lwc1        $f0, 0x40($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X40);
    // 0x0042E4BC: swc1        $f0, 0x3C($s0)
    MEM_W(0X3C, ctx->r16) = ctx->f0.u32l;
    // 0x0042E4C0: lw          $v0, 0x18($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X18);
    // 0x0042E4C4: lw          $v1, 0x14($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X14);
    // 0x0042E4C8: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x0042E4CC: sw          $v0, 0x524($s0)
    MEM_W(0X524, ctx->r16) = ctx->r2;
    // 0x0042E4D0: lw          $v0, 0x18($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X18);
    // 0x0042E4D4: lw          $v1, 0x520($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X520);
    // 0x0042E4D8: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x0042E4DC: sw          $v0, 0x144($s0)
    MEM_W(0X144, ctx->r16) = ctx->r2;
    // 0x0042E4E0: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x0042E4E4: bnel        $v1, $v0, L_0042E520
    if (ctx->r3 != ctx->r2) {
        // 0x0042E4E8: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_0042E520;
    }
    goto skip_3;
    // 0x0042E4E8: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    skip_3:
    // 0x0042E4EC: jal         0x002113A4
    // 0x0042E4F0: nop

    func_002113A4(rdram, ctx);
        goto after_3;
    // 0x0042E4F0: nop

    after_3:
    // 0x0042E4F4: lui         $v1, 0x38E3
    ctx->r3 = S32(0X38E3 << 16);
    // 0x0042E4F8: ori         $v1, $v1, 0x8E39
    ctx->r3 = ctx->r3 | 0X8E39;
    // 0x0042E4FC: mult        $v0, $v1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x0042E500: sra         $v1, $v0, 31
    ctx->r3 = S32(SIGNED(ctx->r2) >> 31);
    // 0x0042E504: mfhi        $t0
    ctx->r8 = hi;
    // 0x0042E508: sra         $a0, $t0, 2
    ctx->r4 = S32(SIGNED(ctx->r8) >> 2);
    // 0x0042E50C: subu        $a0, $a0, $v1
    ctx->r4 = SUB32(ctx->r4, ctx->r3);
    // 0x0042E510: sll         $v1, $a0, 3
    ctx->r3 = S32(ctx->r4 << 3);
    // 0x0042E514: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x0042E518: sll         $v1, $v1, 1
    ctx->r3 = S32(ctx->r3 << 1);
    // 0x0042E51C: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
L_0042E520:
    // 0x0042E520: sb          $v0, 0x151($s0)
    MEM_B(0X151, ctx->r16) = ctx->r2;
    // 0x0042E524: jal         0x00248A8C
    // 0x0042E528: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00248A8C(rdram, ctx);
        goto after_4;
    // 0x0042E528: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
    // 0x0042E52C: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x0042E530: lbu         $v0, -0x550F($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X550F);
    // 0x0042E534: beq         $v0, $zero, L_0042E584
    if (ctx->r2 == 0) {
        // 0x0042E538: addiu       $a2, $zero, 0x66
        ctx->r6 = ADD32(0, 0X66);
            goto L_0042E584;
    }
    // 0x0042E538: addiu       $a2, $zero, 0x66
    ctx->r6 = ADD32(0, 0X66);
    // 0x0042E53C: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x0042E540: lw          $v0, -0x531C($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X531C);
    // 0x0042E544: beq         $v0, $zero, L_0042E56C
    if (ctx->r2 == 0) {
        // 0x0042E548: nop
    
            goto L_0042E56C;
    }
    // 0x0042E548: nop

    // 0x0042E54C: lw          $v0, 0x518($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X518);
    // 0x0042E550: lbu         $v0, 0x3E($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X3E);
    // 0x0042E554: beq         $v0, $zero, L_0042E56C
    if (ctx->r2 == 0) {
        // 0x0042E558: addu        $a1, $s0, $zero
        ctx->r5 = ADD32(ctx->r16, 0);
            goto L_0042E56C;
    }
    // 0x0042E558: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x0042E55C: lui         $a2, 0x800B
    ctx->r6 = S32(0X800B << 16);
    // 0x0042E560: lw          $a2, -0x24A4($a2)
    ctx->r6 = MEM_W(ctx->r6, -0X24A4);
    // 0x0042E564: j           L_0042E588
    // 0x0042E568: nop

        goto L_0042E588;
    // 0x0042E568: nop

L_0042E56C:
    // 0x0042E56C: lw          $v0, 0x14($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X14);
    // 0x0042E570: lh          $v0, 0xC($v0)
    ctx->r2 = MEM_H(ctx->r2, 0XC);
    // 0x0042E574: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x0042E578: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0042E57C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x0042E580: lw          $a2, -0x24D0($at)
    ctx->r6 = MEM_W(ctx->r1, -0X24D0);
L_0042E584:
    // 0x0042E584: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
L_0042E588:
    // 0x0042E588: lw          $a3, 0xC04($a1)
    ctx->r7 = MEM_W(ctx->r5, 0XC04);
    // 0x0042E58C: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x0042E590: addiu       $a0, $a0, 0x7078
    ctx->r4 = ADD32(ctx->r4, 0X7078);
    // 0x0042E594: jal         0x002241D8
    // 0x0042E598: nop

    func_002241D8(rdram, ctx);
        goto after_5;
    // 0x0042E598: nop

    after_5:
    // 0x0042E59C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x0042E5A0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0042E5A4: jr          $ra
    // 0x0042E5A8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0042E5A8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_002883E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002883E0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x002883E4: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x002883E8: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x002883EC: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x002883F0: addu        $s2, $a2, $zero
    ctx->r18 = ADD32(ctx->r6, 0);
    // 0x002883F4: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x002883F8: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x002883FC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00288400: lbu         $v0, 0x3($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X3);
    // 0x00288404: beq         $v0, $zero, L_00288510
    if (ctx->r2 == 0) {
        // 0x00288408: addu        $s3, $a3, $zero
        ctx->r19 = ADD32(ctx->r7, 0);
            goto L_00288510;
    }
    // 0x00288408: addu        $s3, $a3, $zero
    ctx->r19 = ADD32(ctx->r7, 0);
    // 0x0028840C: lui         $a2, 0xE300
    ctx->r6 = S32(0XE300 << 16);
    // 0x00288410: ori         $a2, $a2, 0xA01
    ctx->r6 = ctx->r6 | 0XA01;
    // 0x00288414: lui         $s0, 0x800E
    ctx->r16 = S32(0X800E << 16);
    // 0x00288418: addiu       $s0, $s0, -0x71DC
    ctx->r16 = ADD32(ctx->r16, -0X71DC);
    // 0x0028841C: addiu       $a0, $zero, 0x13
    ctx->r4 = ADD32(0, 0X13);
    // 0x00288420: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x00288424: lui         $v1, 0xE700
    ctx->r3 = S32(0XE700 << 16);
    // 0x00288428: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x0028842C: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x00288430: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x00288434: sw          $v1, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r3;
    // 0x00288438: addiu       $v1, $v0, 0x8
    ctx->r3 = ADD32(ctx->r2, 0X8);
    // 0x0028843C: sw          $zero, 0x4($a1)
    MEM_W(0X4, ctx->r5) = 0;
    // 0x00288440: sw          $v1, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r3;
    // 0x00288444: sw          $a2, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r6;
    // 0x00288448: jal         0x00207FEC
    // 0x0028844C: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    func_00207FEC(rdram, ctx);
        goto after_0;
    // 0x0028844C: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    after_0:
    // 0x00288450: jal         0x00207A70
    // 0x00288454: addiu       $a0, $zero, 0x19
    ctx->r4 = ADD32(0, 0X19);
    func_00207A70(rdram, ctx);
        goto after_1;
    // 0x00288454: addiu       $a0, $zero, 0x19
    ctx->r4 = ADD32(0, 0X19);
    after_1:
    // 0x00288458: lui         $v0, 0xFA00
    ctx->r2 = S32(0XFA00 << 16);
    // 0x0028845C: ori         $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 | 0XFFFF;
    // 0x00288460: lw          $t0, 0x0($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X0);
    // 0x00288464: lw          $t1, 0x38($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X38);
    // 0x00288468: addu        $a3, $t0, $zero
    ctx->r7 = ADD32(ctx->r8, 0);
    // 0x0028846C: addiu       $t0, $t0, 0x8
    ctx->r8 = ADD32(ctx->r8, 0X8);
    // 0x00288470: sw          $t0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r8;
    // 0x00288474: sw          $v0, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r2;
    // 0x00288478: lbu         $v0, 0x0($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X0);
    // 0x0028847C: lbu         $a0, 0x1($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0X1);
    // 0x00288480: lbu         $a1, 0x2($s1)
    ctx->r5 = MEM_BU(ctx->r17, 0X2);
    // 0x00288484: lbu         $a2, 0x3($s1)
    ctx->r6 = MEM_BU(ctx->r17, 0X3);
    // 0x00288488: addiu       $v1, $t0, 0x8
    ctx->r3 = ADD32(ctx->r8, 0X8);
    // 0x0028848C: sw          $v1, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r3;
    // 0x00288490: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x00288494: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x00288498: or          $v0, $v0, $a0
    ctx->r2 = ctx->r2 | ctx->r4;
    // 0x0028849C: sll         $a1, $a1, 8
    ctx->r5 = S32(ctx->r5 << 8);
    // 0x002884A0: or          $v0, $v0, $a1
    ctx->r2 = ctx->r2 | ctx->r5;
    // 0x002884A4: or          $v0, $v0, $a2
    ctx->r2 = ctx->r2 | ctx->r6;
    // 0x002884A8: bgez        $t1, L_002884B4
    if (SIGNED(ctx->r9) >= 0) {
        // 0x002884AC: sw          $v0, 0x4($a3)
        MEM_W(0X4, ctx->r7) = ctx->r2;
            goto L_002884B4;
    }
    // 0x002884AC: sw          $v0, 0x4($a3)
    MEM_W(0X4, ctx->r7) = ctx->r2;
    // 0x002884B0: addu        $t1, $zero, $zero
    ctx->r9 = ADD32(0, 0);
L_002884B4:
    // 0x002884B4: lw          $v1, 0x3C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X3C);
    // 0x002884B8: andi        $v0, $t1, 0x3FF
    ctx->r2 = ctx->r9 & 0X3FF;
    // 0x002884BC: bgez        $v1, L_002884C8
    if (SIGNED(ctx->r3) >= 0) {
        // 0x002884C0: sll         $a0, $v0, 14
        ctx->r4 = S32(ctx->r2 << 14);
            goto L_002884C8;
    }
    // 0x002884C0: sll         $a0, $v0, 14
    ctx->r4 = S32(ctx->r2 << 14);
    // 0x002884C4: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
L_002884C8:
    // 0x002884C8: andi        $v0, $v1, 0x3FF
    ctx->r2 = ctx->r3 & 0X3FF;
    // 0x002884CC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x002884D0: lui         $v1, 0xF600
    ctx->r3 = S32(0XF600 << 16);
    // 0x002884D4: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x002884D8: or          $v0, $a0, $v0
    ctx->r2 = ctx->r4 | ctx->r2;
    // 0x002884DC: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    // 0x002884E0: bgez        $a2, L_002884EC
    if (SIGNED(ctx->r6) >= 0) {
        // 0x002884E4: sw          $v0, 0x0($t0)
        MEM_W(0X0, ctx->r8) = ctx->r2;
            goto L_002884EC;
    }
    // 0x002884E4: sw          $v0, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r2;
    // 0x002884E8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
L_002884EC:
    // 0x002884EC: addu        $a3, $s3, $zero
    ctx->r7 = ADD32(ctx->r19, 0);
    // 0x002884F0: andi        $v0, $a2, 0x3FF
    ctx->r2 = ctx->r6 & 0X3FF;
    // 0x002884F4: bgez        $a3, L_00288500
    if (SIGNED(ctx->r7) >= 0) {
        // 0x002884F8: sll         $v1, $v0, 14
        ctx->r3 = S32(ctx->r2 << 14);
            goto L_00288500;
    }
    // 0x002884F8: sll         $v1, $v0, 14
    ctx->r3 = S32(ctx->r2 << 14);
    // 0x002884FC: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
L_00288500:
    // 0x00288500: andi        $v0, $a3, 0x3FF
    ctx->r2 = ctx->r7 & 0X3FF;
    // 0x00288504: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x00288508: or          $v0, $v1, $v0
    ctx->r2 = ctx->r3 | ctx->r2;
    // 0x0028850C: sw          $v0, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r2;
L_00288510:
    // 0x00288510: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x00288514: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x00288518: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x0028851C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00288520: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00288524: jr          $ra
    // 0x00288528: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x00288528: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_0027ECF0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0027ECF0: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x0027ECF4: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x0027ECF8: addu        $s4, $a0, $zero
    ctx->r20 = ADD32(ctx->r4, 0);
    // 0x0027ECFC: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0027ED00: lwc1        $f1, 0x2030($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X2030);
    // 0x0027ED04: cvt.s.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.fl = CVT_S_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x0027ED08: sdc1        $f23, 0x48($sp)
    CHECK_FR(ctx, 23);
    SD(ctx->f23.u64, 0X48, ctx->r29);
    // 0x0027ED0C: mtc1        $zero, $f23
    ctx->f_odd[(23 - 1) * 2] = 0;
    // 0x0027ED10: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0027ED14: lwc1        $f2, 0x2034($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X2034);
    // 0x0027ED18: cvt.s.w     $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    ctx->f2.fl = CVT_S_W(ctx->f2.u32l);
    // 0x0027ED1C: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x0027ED20: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x0027ED24: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x0027ED28: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x0027ED2C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x0027ED30: sdc1        $f25, 0x58($sp)
    CHECK_FR(ctx, 25);
    SD(ctx->f25.u64, 0X58, ctx->r29);
    // 0x0027ED34: sdc1        $f24, 0x50($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X50, ctx->r29);
    // 0x0027ED38: sdc1        $f22, 0x40($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X40, ctx->r29);
    // 0x0027ED3C: sdc1        $f21, 0x38($sp)
    CHECK_FR(ctx, 21);
    SD(ctx->f21.u64, 0X38, ctx->r29);
    // 0x0027ED40: sdc1        $f20, 0x30($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X30, ctx->r29);
    // 0x0027ED44: lw          $v0, 0x30($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X30);
    // 0x0027ED48: sltiu       $v0, $v0, 0x2
    ctx->r2 = ctx->r2 < 0X2 ? 1 : 0;
    // 0x0027ED4C: bne         $v0, $zero, L_0027ED7C
    if (ctx->r2 != 0) {
        // 0x0027ED50: mov.s       $f20, $f23
        CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 23);
    ctx->f20.fl = ctx->f23.fl;
            goto L_0027ED7C;
    }
    // 0x0027ED50: mov.s       $f20, $f23
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 23);
    ctx->f20.fl = ctx->f23.fl;
    // 0x0027ED54: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0027ED58: lwc1        $f0, 0x6CC4($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6CC4);
    // 0x0027ED5C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0027ED60: lwc1        $f20, 0x6CC8($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X6CC8);
    // 0x0027ED64: sub.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f2.fl - ctx->f0.fl;
    // 0x0027ED68: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0027ED6C: lwc1        $f0, 0x6CD0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6CD0);
    // 0x0027ED70: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0027ED74: lwc1        $f23, 0x6CCC($at)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r1, 0X6CCC);
    // 0x0027ED78: sub.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl - ctx->f0.fl;
L_0027ED7C:
    // 0x0027ED7C: sub.s       $f21, $f1, $f23
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 23);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f23.fl); 
    ctx->f21.fl = ctx->f1.fl - ctx->f23.fl;
    // 0x0027ED80: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0027ED84: lwc1        $f0, -0x65B4($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X65B4);
    // 0x0027ED88: mul.s       $f22, $f21, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f21.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f22.fl = MUL_S(ctx->f21.fl, ctx->f0.fl);
    // 0x0027ED8C: sub.s       $f25, $f2, $f20
    CHECK_FR(ctx, 25);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f25.fl = ctx->f2.fl - ctx->f20.fl;
    // 0x0027ED90: lui         $s1, 0x8012
    ctx->r17 = S32(0X8012 << 16);
    // 0x0027ED94: lw          $s1, -0x557C($s1)
    ctx->r17 = MEM_W(ctx->r17, -0X557C);
    // 0x0027ED98: mul.s       $f24, $f25, $f0
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 25);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f25.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f24.fl = MUL_S(ctx->f25.fl, ctx->f0.fl);
    // 0x0027ED9C: beq         $s1, $zero, L_0027EE00
    if (ctx->r17 == 0) {
        // 0x0027EDA0: addiu       $s0, $s4, 0x40
        ctx->r16 = ADD32(ctx->r20, 0X40);
            goto L_0027EE00;
    }
    // 0x0027EDA0: addiu       $s0, $s4, 0x40
    ctx->r16 = ADD32(ctx->r20, 0X40);
L_0027EDA4:
    // 0x0027EDA4: lw          $s3, 0x4($s1)
    ctx->r19 = MEM_W(ctx->r17, 0X4);
    // 0x0027EDA8: jal         0x0027BD30
    // 0x0027EDAC: addiu       $a0, $s1, 0x18
    ctx->r4 = ADD32(ctx->r17, 0X18);
    func_0027BD30(rdram, ctx);
        goto after_0;
    // 0x0027EDAC: addiu       $a0, $s1, 0x18
    ctx->r4 = ADD32(ctx->r17, 0X18);
    after_0:
    // 0x0027EDB0: addiu       $a0, $s1, 0x2C
    ctx->r4 = ADD32(ctx->r17, 0X2C);
    // 0x0027EDB4: jal         0x0027BD30
    // 0x0027EDB8: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    func_0027BD30(rdram, ctx);
        goto after_1;
    // 0x0027EDB8: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    after_1:
    // 0x0027EDBC: addiu       $a0, $s1, 0x40
    ctx->r4 = ADD32(ctx->r17, 0X40);
    // 0x0027EDC0: jal         0x0027BD30
    // 0x0027EDC4: addu        $s2, $v0, $zero
    ctx->r18 = ADD32(ctx->r2, 0);
    func_0027BD30(rdram, ctx);
        goto after_2;
    // 0x0027EDC4: addu        $s2, $v0, $zero
    ctx->r18 = ADD32(ctx->r2, 0);
    after_2:
    // 0x0027EDC8: beq         $s0, $zero, L_0027EDD8
    if (ctx->r16 == 0) {
        // 0x0027EDCC: addu        $v1, $zero, $zero
        ctx->r3 = ADD32(0, 0);
            goto L_0027EDD8;
    }
    // 0x0027EDCC: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
    // 0x0027EDD0: bnel        $s2, $zero, L_0027EDD8
    if (ctx->r18 != 0) {
        // 0x0027EDD4: sltu        $v1, $v1, $v0
        ctx->r3 = ctx->r3 < ctx->r2 ? 1 : 0;
            goto L_0027EDD8;
    }
    goto skip_0;
    // 0x0027EDD4: sltu        $v1, $v1, $v0
    ctx->r3 = ctx->r3 < ctx->r2 ? 1 : 0;
    skip_0:
L_0027EDD8:
    // 0x0027EDD8: beq         $v1, $zero, L_0027EDF4
    if (ctx->r3 == 0) {
        // 0x0027EDDC: addiu       $a0, $s4, 0x11D4
        ctx->r4 = ADD32(ctx->r20, 0X11D4);
            goto L_0027EDF4;
    }
    // 0x0027EDDC: addiu       $a0, $s4, 0x11D4
    ctx->r4 = ADD32(ctx->r20, 0X11D4);
    // 0x0027EDE0: jal         0x00200738
    // 0x0027EDE4: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_00200738(rdram, ctx);
        goto after_3;
    // 0x0027EDE4: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_3:
    // 0x0027EDE8: addiu       $a0, $s4, 0x11C0
    ctx->r4 = ADD32(ctx->r20, 0X11C0);
    // 0x0027EDEC: jal         0x00200518
    // 0x0027EDF0: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_00200518(rdram, ctx);
        goto after_4;
    // 0x0027EDF0: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_4:
L_0027EDF4:
    // 0x0027EDF4: addu        $s1, $s3, $zero
    ctx->r17 = ADD32(ctx->r19, 0);
    // 0x0027EDF8: bne         $s1, $zero, L_0027EDA4
    if (ctx->r17 != 0) {
        // 0x0027EDFC: addiu       $s0, $s4, 0x40
        ctx->r16 = ADD32(ctx->r20, 0X40);
            goto L_0027EDA4;
    }
    // 0x0027EDFC: addiu       $s0, $s4, 0x40
    ctx->r16 = ADD32(ctx->r20, 0X40);
L_0027EE00:
    // 0x0027EE00: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0027EE04: lwc1        $f0, 0x2030($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X2030);
    // 0x0027EE08: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x0027EE0C: swc1        $f0, 0x288($s0)
    MEM_W(0X288, ctx->r16) = ctx->f0.u32l;
    // 0x0027EE10: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0027EE14: lwc1        $f0, 0x2034($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X2034);
    // 0x0027EE18: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x0027EE1C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x0027EE20: swc1        $f0, 0x28C($s0)
    MEM_W(0X28C, ctx->r16) = ctx->f0.u32l;
    // 0x0027EE24: sw          $zero, 0x290($s0)
    MEM_W(0X290, ctx->r16) = 0;
    // 0x0027EE28: sw          $zero, 0x294($s0)
    MEM_W(0X294, ctx->r16) = 0;
    // 0x0027EE2C: lw          $v1, 0x30($s4)
    ctx->r3 = MEM_W(ctx->r20, 0X30);
    // 0x0027EE30: lw          $s0, 0x20($s4)
    ctx->r16 = MEM_W(ctx->r20, 0X20);
    // 0x0027EE34: beq         $v1, $v0, L_0027EE88
    if (ctx->r3 == ctx->r2) {
        // 0x0027EE38: sltiu       $v0, $v1, 0x3
        ctx->r2 = ctx->r3 < 0X3 ? 1 : 0;
            goto L_0027EE88;
    }
    // 0x0027EE38: sltiu       $v0, $v1, 0x3
    ctx->r2 = ctx->r3 < 0X3 ? 1 : 0;
    // 0x0027EE3C: beq         $v0, $zero, L_0027EE54
    if (ctx->r2 == 0) {
        // 0x0027EE40: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_0027EE54;
    }
    // 0x0027EE40: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0027EE44: beq         $v1, $v0, L_0027EE70
    if (ctx->r3 == ctx->r2) {
        // 0x0027EE48: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_0027EE70;
    }
    // 0x0027EE48: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0027EE4C: j           L_0027EFCC
    // 0x0027EE50: nop

        goto L_0027EFCC;
    // 0x0027EE50: nop

L_0027EE54:
    // 0x0027EE54: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x0027EE58: beq         $v1, $v0, L_0027EF00
    if (ctx->r3 == ctx->r2) {
        // 0x0027EE5C: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_0027EF00;
    }
    // 0x0027EE5C: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x0027EE60: beq         $v1, $v0, L_0027EF58
    if (ctx->r3 == ctx->r2) {
        // 0x0027EE64: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_0027EF58;
    }
    // 0x0027EE64: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0027EE68: j           L_0027EFCC
    // 0x0027EE6C: nop

        goto L_0027EFCC;
    // 0x0027EE6C: nop

L_0027EE70:
    // 0x0027EE70: mfc1        $a1, $f21
    ctx->r5 = (int32_t)ctx->f_odd[(21 - 1) * 2];
    // 0x0027EE74: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x0027EE78: mfc1        $a2, $f25
    ctx->r6 = (int32_t)ctx->f_odd[(25 - 1) * 2];
    // 0x0027EE7C: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x0027EE80: j           L_0027EFC4
    // 0x0027EE84: sw          $a3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r7;
        goto L_0027EFC4;
    // 0x0027EE84: sw          $a3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r7;
L_0027EE88:
    // 0x0027EE88: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x0027EE8C: lbu         $v0, -0x550D($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X550D);
    // 0x0027EE90: bne         $v0, $zero, L_0027EECC
    if (ctx->r2 != 0) {
        // 0x0027EE94: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_0027EECC;
    }
    // 0x0027EE94: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0027EE98: mfc1        $a1, $f21
    ctx->r5 = (int32_t)ctx->f_odd[(21 - 1) * 2];
    // 0x0027EE9C: mfc1        $a2, $f24
    ctx->r6 = (int32_t)ctx->f24.u32l;
    // 0x0027EEA0: mfc1        $a3, $f23
    ctx->r7 = (int32_t)ctx->f_odd[(23 - 1) * 2];
    // 0x0027EEA4: jal         0x0027EA88
    // 0x0027EEA8: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    func_0027EA88(rdram, ctx);
        goto after_5;
    // 0x0027EEA8: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    after_5:
    // 0x0027EEAC: add.s       $f0, $f20, $f24
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f0.fl = ctx->f20.fl + ctx->f24.fl;
    // 0x0027EEB0: lw          $s0, 0x4($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X4);
    // 0x0027EEB4: mfc1        $a1, $f21
    ctx->r5 = (int32_t)ctx->f_odd[(21 - 1) * 2];
    // 0x0027EEB8: mfc1        $a2, $f24
    ctx->r6 = (int32_t)ctx->f24.u32l;
    // 0x0027EEBC: mfc1        $a3, $f23
    ctx->r7 = (int32_t)ctx->f_odd[(23 - 1) * 2];
    // 0x0027EEC0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0027EEC4: j           L_0027EFC4
    // 0x0027EEC8: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
        goto L_0027EFC4;
    // 0x0027EEC8: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
L_0027EECC:
    // 0x0027EECC: mfc1        $a1, $f22
    ctx->r5 = (int32_t)ctx->f22.u32l;
    // 0x0027EED0: mfc1        $a2, $f25
    ctx->r6 = (int32_t)ctx->f_odd[(25 - 1) * 2];
    // 0x0027EED4: mfc1        $a3, $f23
    ctx->r7 = (int32_t)ctx->f_odd[(23 - 1) * 2];
    // 0x0027EED8: jal         0x0027EA88
    // 0x0027EEDC: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    func_0027EA88(rdram, ctx);
        goto after_6;
    // 0x0027EEDC: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    after_6:
    // 0x0027EEE0: mfc1        $a1, $f22
    ctx->r5 = (int32_t)ctx->f22.u32l;
    // 0x0027EEE4: lw          $s0, 0x4($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X4);
    // 0x0027EEE8: mtc1        $a1, $f3
    ctx->f_odd[(3 - 1) * 2] = ctx->r5;
    // 0x0027EEEC: mfc1        $a2, $f25
    ctx->r6 = (int32_t)ctx->f_odd[(25 - 1) * 2];
    // 0x0027EEF0: add.s       $f3, $f23, $f3
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 23);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f23.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f3.fl = ctx->f23.fl + ctx->f3.fl;
    // 0x0027EEF4: mfc1        $a3, $f3
    ctx->r7 = (int32_t)ctx->f_odd[(3 - 1) * 2];
    // 0x0027EEF8: j           L_0027EFC0
    // 0x0027EEFC: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
        goto L_0027EFC0;
    // 0x0027EEFC: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
L_0027EF00:
    // 0x0027EF00: mfc1        $a1, $f22
    ctx->r5 = (int32_t)ctx->f22.u32l;
    // 0x0027EF04: mfc1        $a2, $f24
    ctx->r6 = (int32_t)ctx->f24.u32l;
    // 0x0027EF08: mfc1        $a3, $f23
    ctx->r7 = (int32_t)ctx->f_odd[(23 - 1) * 2];
    // 0x0027EF0C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0027EF10: jal         0x0027EA88
    // 0x0027EF14: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    func_0027EA88(rdram, ctx);
        goto after_7;
    // 0x0027EF14: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    after_7:
    // 0x0027EF18: add.s       $f3, $f23, $f22
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 23);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f23.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f3.fl = ctx->f23.fl + ctx->f22.fl;
    // 0x0027EF1C: lw          $s0, 0x4($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X4);
    // 0x0027EF20: mfc1        $a1, $f22
    ctx->r5 = (int32_t)ctx->f22.u32l;
    // 0x0027EF24: mfc1        $a2, $f24
    ctx->r6 = (int32_t)ctx->f24.u32l;
    // 0x0027EF28: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    // 0x0027EF2C: mfc1        $a3, $f3
    ctx->r7 = (int32_t)ctx->f_odd[(3 - 1) * 2];
    // 0x0027EF30: jal         0x0027EA88
    // 0x0027EF34: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_0027EA88(rdram, ctx);
        goto after_8;
    // 0x0027EF34: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_8:
    // 0x0027EF38: add.s       $f0, $f20, $f24
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f0.fl = ctx->f20.fl + ctx->f24.fl;
    // 0x0027EF3C: lw          $s0, 0x4($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X4);
    // 0x0027EF40: mfc1        $a1, $f22
    ctx->r5 = (int32_t)ctx->f22.u32l;
    // 0x0027EF44: mfc1        $a2, $f24
    ctx->r6 = (int32_t)ctx->f24.u32l;
    // 0x0027EF48: mfc1        $a3, $f23
    ctx->r7 = (int32_t)ctx->f_odd[(23 - 1) * 2];
    // 0x0027EF4C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0027EF50: j           L_0027EFC4
    // 0x0027EF54: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
        goto L_0027EFC4;
    // 0x0027EF54: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
L_0027EF58:
    // 0x0027EF58: mfc1        $a1, $f22
    ctx->r5 = (int32_t)ctx->f22.u32l;
    // 0x0027EF5C: mfc1        $a2, $f24
    ctx->r6 = (int32_t)ctx->f24.u32l;
    // 0x0027EF60: mfc1        $a3, $f23
    ctx->r7 = (int32_t)ctx->f_odd[(23 - 1) * 2];
    // 0x0027EF64: jal         0x0027EA88
    // 0x0027EF68: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    func_0027EA88(rdram, ctx);
        goto after_9;
    // 0x0027EF68: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    after_9:
    // 0x0027EF6C: add.s       $f21, $f23, $f22
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 23);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f23.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f21.fl = ctx->f23.fl + ctx->f22.fl;
    // 0x0027EF70: lw          $s0, 0x4($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X4);
    // 0x0027EF74: mfc1        $a1, $f22
    ctx->r5 = (int32_t)ctx->f22.u32l;
    // 0x0027EF78: mfc1        $a2, $f24
    ctx->r6 = (int32_t)ctx->f24.u32l;
    // 0x0027EF7C: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    // 0x0027EF80: mfc1        $a3, $f21
    ctx->r7 = (int32_t)ctx->f_odd[(21 - 1) * 2];
    // 0x0027EF84: jal         0x0027EA88
    // 0x0027EF88: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_0027EA88(rdram, ctx);
        goto after_10;
    // 0x0027EF88: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_10:
    // 0x0027EF8C: add.s       $f20, $f20, $f24
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f20.fl = ctx->f20.fl + ctx->f24.fl;
    // 0x0027EF90: lw          $s0, 0x4($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X4);
    // 0x0027EF94: mfc1        $a1, $f22
    ctx->r5 = (int32_t)ctx->f22.u32l;
    // 0x0027EF98: mfc1        $a2, $f24
    ctx->r6 = (int32_t)ctx->f24.u32l;
    // 0x0027EF9C: mfc1        $a3, $f23
    ctx->r7 = (int32_t)ctx->f_odd[(23 - 1) * 2];
    // 0x0027EFA0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0027EFA4: jal         0x0027EA88
    // 0x0027EFA8: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    func_0027EA88(rdram, ctx);
        goto after_11;
    // 0x0027EFA8: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    after_11:
    // 0x0027EFAC: lw          $s0, 0x4($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X4);
    // 0x0027EFB0: mfc1        $a1, $f22
    ctx->r5 = (int32_t)ctx->f22.u32l;
    // 0x0027EFB4: mfc1        $a2, $f24
    ctx->r6 = (int32_t)ctx->f24.u32l;
    // 0x0027EFB8: mfc1        $a3, $f21
    ctx->r7 = (int32_t)ctx->f_odd[(21 - 1) * 2];
    // 0x0027EFBC: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
L_0027EFC0:
    // 0x0027EFC0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_0027EFC4:
    // 0x0027EFC4: jal         0x0027EA88
    // 0x0027EFC8: nop

    func_0027EA88(rdram, ctx);
        goto after_12;
    // 0x0027EFC8: nop

    after_12:
L_0027EFCC:
    // 0x0027EFCC: lui         $s2, 0x800F
    ctx->r18 = S32(0X800F << 16);
    // 0x0027EFD0: addiu       $s2, $s2, 0x5A28
    ctx->r18 = ADD32(ctx->r18, 0X5A28);
    // 0x0027EFD4: lw          $t0, 0x378($s4)
    ctx->r8 = MEM_W(ctx->r20, 0X378);
    // 0x0027EFD8: lw          $t1, 0x37C($s4)
    ctx->r9 = MEM_W(ctx->r20, 0X37C);
    // 0x0027EFDC: lw          $t2, 0x380($s4)
    ctx->r10 = MEM_W(ctx->r20, 0X380);
    // 0x0027EFE0: lw          $t3, 0x384($s4)
    ctx->r11 = MEM_W(ctx->r20, 0X384);
    // 0x0027EFE4: sw          $t0, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r8;
    // 0x0027EFE8: sw          $t1, 0x4($s2)
    MEM_W(0X4, ctx->r18) = ctx->r9;
    // 0x0027EFEC: sw          $t2, 0x8($s2)
    MEM_W(0X8, ctx->r18) = ctx->r10;
    // 0x0027EFF0: sw          $t3, 0xC($s2)
    MEM_W(0XC, ctx->r18) = ctx->r11;
    // 0x0027EFF4: lw          $t0, 0x388($s4)
    ctx->r8 = MEM_W(ctx->r20, 0X388);
    // 0x0027EFF8: lw          $t1, 0x38C($s4)
    ctx->r9 = MEM_W(ctx->r20, 0X38C);
    // 0x0027EFFC: sw          $t0, 0x10($s2)
    MEM_W(0X10, ctx->r18) = ctx->r8;
    // 0x0027F000: sw          $t1, 0x14($s2)
    MEM_W(0X14, ctx->r18) = ctx->r9;
    // 0x0027F004: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0027F008: lw          $v0, 0x6D00($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X6D00);
    // 0x0027F00C: lui         $s1, 0x800F
    ctx->r17 = S32(0X800F << 16);
    // 0x0027F010: addiu       $s1, $s1, 0x5A10
    ctx->r17 = ADD32(ctx->r17, 0X5A10);
    // 0x0027F014: lw          $t0, 0x390($s4)
    ctx->r8 = MEM_W(ctx->r20, 0X390);
    // 0x0027F018: lw          $t1, 0x394($s4)
    ctx->r9 = MEM_W(ctx->r20, 0X394);
    // 0x0027F01C: lw          $t2, 0x398($s4)
    ctx->r10 = MEM_W(ctx->r20, 0X398);
    // 0x0027F020: lw          $t3, 0x39C($s4)
    ctx->r11 = MEM_W(ctx->r20, 0X39C);
    // 0x0027F024: sw          $t0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r8;
    // 0x0027F028: sw          $t1, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->r9;
    // 0x0027F02C: sw          $t2, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->r10;
    // 0x0027F030: sw          $t3, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->r11;
    // 0x0027F034: lw          $t0, 0x3A0($s4)
    ctx->r8 = MEM_W(ctx->r20, 0X3A0);
    // 0x0027F038: lw          $t1, 0x3A4($s4)
    ctx->r9 = MEM_W(ctx->r20, 0X3A4);
    // 0x0027F03C: sw          $t0, 0x10($s1)
    MEM_W(0X10, ctx->r17) = ctx->r8;
    // 0x0027F040: sw          $t1, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r9;
    // 0x0027F044: lui         $at, 0x800F
    ctx->r1 = S32(0X800F << 16);
    // 0x0027F048: sw          $v0, 0x5A40($at)
    MEM_W(0X5A40, ctx->r1) = ctx->r2;
    // 0x0027F04C: jal         0x0027D160
    // 0x0027F050: addiu       $a0, $s4, 0x40
    ctx->r4 = ADD32(ctx->r20, 0X40);
    func_0027D160(rdram, ctx);
        goto after_13;
    // 0x0027F050: addiu       $a0, $s4, 0x40
    ctx->r4 = ADD32(ctx->r20, 0X40);
    after_13:
    // 0x0027F054: lw          $s0, 0x20($s4)
    ctx->r16 = MEM_W(ctx->r20, 0X20);
    // 0x0027F058: beq         $s0, $zero, L_0027F25C
    if (ctx->r16 == 0) {
        // 0x0027F05C: nop
    
            goto L_0027F25C;
    }
    // 0x0027F05C: nop

    // 0x0027F060: jal         0x0027D160
    // 0x0027F064: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_0027D160(rdram, ctx);
        goto after_14;
    // 0x0027F064: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_14:
    // 0x0027F068: lw          $t0, 0x338($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X338);
    // 0x0027F06C: lw          $t1, 0x33C($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X33C);
    // 0x0027F070: lw          $t2, 0x340($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X340);
    // 0x0027F074: lw          $t3, 0x344($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X344);
    // 0x0027F078: sw          $t0, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r8;
    // 0x0027F07C: sw          $t1, 0x4($s2)
    MEM_W(0X4, ctx->r18) = ctx->r9;
    // 0x0027F080: sw          $t2, 0x8($s2)
    MEM_W(0X8, ctx->r18) = ctx->r10;
    // 0x0027F084: sw          $t3, 0xC($s2)
    MEM_W(0XC, ctx->r18) = ctx->r11;
    // 0x0027F088: lw          $t0, 0x348($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X348);
    // 0x0027F08C: lw          $t1, 0x34C($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X34C);
    // 0x0027F090: sw          $t0, 0x10($s2)
    MEM_W(0X10, ctx->r18) = ctx->r8;
    // 0x0027F094: sw          $t1, 0x14($s2)
    MEM_W(0X14, ctx->r18) = ctx->r9;
    // 0x0027F098: lw          $t0, 0x350($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X350);
    // 0x0027F09C: lw          $t1, 0x354($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X354);
    // 0x0027F0A0: lw          $t2, 0x358($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X358);
    // 0x0027F0A4: lw          $t3, 0x35C($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X35C);
    // 0x0027F0A8: sw          $t0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r8;
    // 0x0027F0AC: sw          $t1, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->r9;
    // 0x0027F0B0: sw          $t2, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->r10;
    // 0x0027F0B4: sw          $t3, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->r11;
    // 0x0027F0B8: lw          $t0, 0x360($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X360);
    // 0x0027F0BC: lw          $t1, 0x364($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X364);
    // 0x0027F0C0: sw          $t0, 0x10($s1)
    MEM_W(0X10, ctx->r17) = ctx->r8;
    // 0x0027F0C4: sw          $t1, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r9;
    // 0x0027F0C8: lw          $v0, 0x64($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X64);
    // 0x0027F0CC: lui         $at, 0x800F
    ctx->r1 = S32(0X800F << 16);
    // 0x0027F0D0: sw          $v0, 0x5A40($at)
    MEM_W(0X5A40, ctx->r1) = ctx->r2;
    // 0x0027F0D4: lw          $s0, 0x4($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X4);
    // 0x0027F0D8: beq         $s0, $zero, L_0027F25C
    if (ctx->r16 == 0) {
        // 0x0027F0DC: nop
    
            goto L_0027F25C;
    }
    // 0x0027F0DC: nop

    // 0x0027F0E0: lui         $s3, 0x800F
    ctx->r19 = S32(0X800F << 16);
    // 0x0027F0E4: addiu       $s3, $s3, 0x5A40
    ctx->r19 = ADD32(ctx->r19, 0X5A40);
L_0027F0E8:
    // 0x0027F0E8: jal         0x0027D160
    // 0x0027F0EC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_0027D160(rdram, ctx);
        goto after_15;
    // 0x0027F0EC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_15:
    // 0x0027F0F0: lwc1        $f0, 0x338($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X338);
    // 0x0027F0F4: lwc1        $f1, 0x0($s2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r18, 0X0);
    // 0x0027F0F8: c.le.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl <= ctx->f1.fl;
    // 0x0027F0FC: nop

    // 0x0027F100: bc1fl       L_0027F108
    if (!c1cs) {
        // 0x0027F104: mov.s       $f0, $f1
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    ctx->f0.fl = ctx->f1.fl;
            goto L_0027F108;
    }
    goto skip_1;
    // 0x0027F104: mov.s       $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    ctx->f0.fl = ctx->f1.fl;
    skip_1:
L_0027F108:
    // 0x0027F108: swc1        $f0, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->f0.u32l;
    // 0x0027F10C: lwc1        $f0, 0x33C($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X33C);
    // 0x0027F110: lwc1        $f1, 0x4($s2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r18, 0X4);
    // 0x0027F114: c.le.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl <= ctx->f1.fl;
    // 0x0027F118: nop

    // 0x0027F11C: bc1fl       L_0027F124
    if (!c1cs) {
        // 0x0027F120: mov.s       $f0, $f1
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    ctx->f0.fl = ctx->f1.fl;
            goto L_0027F124;
    }
    goto skip_2;
    // 0x0027F120: mov.s       $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    ctx->f0.fl = ctx->f1.fl;
    skip_2:
L_0027F124:
    // 0x0027F124: swc1        $f0, 0x4($s2)
    MEM_W(0X4, ctx->r18) = ctx->f0.u32l;
    // 0x0027F128: lwc1        $f0, 0x340($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X340);
    // 0x0027F12C: lwc1        $f1, 0x8($s2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r18, 0X8);
    // 0x0027F130: c.le.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl <= ctx->f1.fl;
    // 0x0027F134: nop

    // 0x0027F138: bc1fl       L_0027F140
    if (!c1cs) {
        // 0x0027F13C: mov.s       $f0, $f1
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    ctx->f0.fl = ctx->f1.fl;
            goto L_0027F140;
    }
    goto skip_3;
    // 0x0027F13C: mov.s       $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    ctx->f0.fl = ctx->f1.fl;
    skip_3:
L_0027F140:
    // 0x0027F140: swc1        $f0, 0x8($s2)
    MEM_W(0X8, ctx->r18) = ctx->f0.u32l;
    // 0x0027F144: lwc1        $f0, 0x344($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X344);
    // 0x0027F148: lwc1        $f1, 0xC($s2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r18, 0XC);
    // 0x0027F14C: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x0027F150: nop

    // 0x0027F154: bc1fl       L_0027F15C
    if (!c1cs) {
        // 0x0027F158: mov.s       $f0, $f1
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    ctx->f0.fl = ctx->f1.fl;
            goto L_0027F15C;
    }
    goto skip_4;
    // 0x0027F158: mov.s       $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    ctx->f0.fl = ctx->f1.fl;
    skip_4:
L_0027F15C:
    // 0x0027F15C: swc1        $f0, 0xC($s2)
    MEM_W(0XC, ctx->r18) = ctx->f0.u32l;
    // 0x0027F160: lwc1        $f0, 0x348($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X348);
    // 0x0027F164: lwc1        $f1, 0x10($s2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r18, 0X10);
    // 0x0027F168: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x0027F16C: nop

    // 0x0027F170: bc1fl       L_0027F178
    if (!c1cs) {
        // 0x0027F174: mov.s       $f0, $f1
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    ctx->f0.fl = ctx->f1.fl;
            goto L_0027F178;
    }
    goto skip_5;
    // 0x0027F174: mov.s       $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    ctx->f0.fl = ctx->f1.fl;
    skip_5:
L_0027F178:
    // 0x0027F178: swc1        $f0, 0x10($s2)
    MEM_W(0X10, ctx->r18) = ctx->f0.u32l;
    // 0x0027F17C: lwc1        $f0, 0x34C($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X34C);
    // 0x0027F180: lwc1        $f1, 0x14($s2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r18, 0X14);
    // 0x0027F184: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x0027F188: nop

    // 0x0027F18C: bc1fl       L_0027F194
    if (!c1cs) {
        // 0x0027F190: mov.s       $f0, $f1
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    ctx->f0.fl = ctx->f1.fl;
            goto L_0027F194;
    }
    goto skip_6;
    // 0x0027F190: mov.s       $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    ctx->f0.fl = ctx->f1.fl;
    skip_6:
L_0027F194:
    // 0x0027F194: swc1        $f0, 0x14($s2)
    MEM_W(0X14, ctx->r18) = ctx->f0.u32l;
    // 0x0027F198: lwc1        $f0, 0x350($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X350);
    // 0x0027F19C: lwc1        $f1, 0x0($s1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r17, 0X0);
    // 0x0027F1A0: c.le.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl <= ctx->f1.fl;
    // 0x0027F1A4: nop

    // 0x0027F1A8: bc1fl       L_0027F1B0
    if (!c1cs) {
        // 0x0027F1AC: mov.s       $f0, $f1
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    ctx->f0.fl = ctx->f1.fl;
            goto L_0027F1B0;
    }
    goto skip_7;
    // 0x0027F1AC: mov.s       $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    ctx->f0.fl = ctx->f1.fl;
    skip_7:
L_0027F1B0:
    // 0x0027F1B0: swc1        $f0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->f0.u32l;
    // 0x0027F1B4: lwc1        $f0, 0x354($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X354);
    // 0x0027F1B8: lwc1        $f1, 0x4($s1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r17, 0X4);
    // 0x0027F1BC: c.le.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl <= ctx->f1.fl;
    // 0x0027F1C0: nop

    // 0x0027F1C4: bc1fl       L_0027F1CC
    if (!c1cs) {
        // 0x0027F1C8: mov.s       $f0, $f1
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    ctx->f0.fl = ctx->f1.fl;
            goto L_0027F1CC;
    }
    goto skip_8;
    // 0x0027F1C8: mov.s       $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    ctx->f0.fl = ctx->f1.fl;
    skip_8:
L_0027F1CC:
    // 0x0027F1CC: swc1        $f0, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->f0.u32l;
    // 0x0027F1D0: lwc1        $f0, 0x358($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X358);
    // 0x0027F1D4: lwc1        $f1, 0x8($s1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r17, 0X8);
    // 0x0027F1D8: c.le.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl <= ctx->f1.fl;
    // 0x0027F1DC: nop

    // 0x0027F1E0: bc1fl       L_0027F1E8
    if (!c1cs) {
        // 0x0027F1E4: mov.s       $f0, $f1
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    ctx->f0.fl = ctx->f1.fl;
            goto L_0027F1E8;
    }
    goto skip_9;
    // 0x0027F1E4: mov.s       $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    ctx->f0.fl = ctx->f1.fl;
    skip_9:
L_0027F1E8:
    // 0x0027F1E8: swc1        $f0, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->f0.u32l;
    // 0x0027F1EC: lwc1        $f0, 0x35C($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X35C);
    // 0x0027F1F0: lwc1        $f1, 0xC($s1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r17, 0XC);
    // 0x0027F1F4: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x0027F1F8: nop

    // 0x0027F1FC: bc1fl       L_0027F204
    if (!c1cs) {
        // 0x0027F200: mov.s       $f0, $f1
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    ctx->f0.fl = ctx->f1.fl;
            goto L_0027F204;
    }
    goto skip_10;
    // 0x0027F200: mov.s       $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    ctx->f0.fl = ctx->f1.fl;
    skip_10:
L_0027F204:
    // 0x0027F204: swc1        $f0, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->f0.u32l;
    // 0x0027F208: lwc1        $f0, 0x360($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X360);
    // 0x0027F20C: lwc1        $f1, 0x10($s1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r17, 0X10);
    // 0x0027F210: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x0027F214: nop

    // 0x0027F218: bc1fl       L_0027F220
    if (!c1cs) {
        // 0x0027F21C: mov.s       $f0, $f1
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    ctx->f0.fl = ctx->f1.fl;
            goto L_0027F220;
    }
    goto skip_11;
    // 0x0027F21C: mov.s       $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    ctx->f0.fl = ctx->f1.fl;
    skip_11:
L_0027F220:
    // 0x0027F220: swc1        $f0, 0x10($s1)
    MEM_W(0X10, ctx->r17) = ctx->f0.u32l;
    // 0x0027F224: lwc1        $f0, 0x364($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X364);
    // 0x0027F228: lwc1        $f1, 0x14($s1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r17, 0X14);
    // 0x0027F22C: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x0027F230: nop

    // 0x0027F234: bc1fl       L_0027F23C
    if (!c1cs) {
        // 0x0027F238: mov.s       $f0, $f1
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    ctx->f0.fl = ctx->f1.fl;
            goto L_0027F23C;
    }
    goto skip_12;
    // 0x0027F238: mov.s       $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    ctx->f0.fl = ctx->f1.fl;
    skip_12:
L_0027F23C:
    // 0x0027F23C: swc1        $f0, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->f0.u32l;
    // 0x0027F240: lw          $v0, 0x0($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X0);
    // 0x0027F244: lw          $v1, 0x64($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X64);
    // 0x0027F248: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x0027F24C: sw          $v0, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r2;
    // 0x0027F250: lw          $s0, 0x4($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X4);
    // 0x0027F254: bne         $s0, $zero, L_0027F0E8
    if (ctx->r16 != 0) {
        // 0x0027F258: nop
    
            goto L_0027F0E8;
    }
    // 0x0027F258: nop

L_0027F25C:
    // 0x0027F25C: lw          $v1, 0x34($s4)
    ctx->r3 = MEM_W(ctx->r20, 0X34);
    // 0x0027F260: lw          $v0, 0x30($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X30);
    // 0x0027F264: beq         $v1, $v0, L_0027F27C
    if (ctx->r3 == ctx->r2) {
        // 0x0027F268: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_0027F27C;
    }
    // 0x0027F268: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x0027F26C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x0027F270: sw          $v0, 0x38($s4)
    MEM_W(0X38, ctx->r20) = ctx->r2;
    // 0x0027F274: j           L_0027F28C
    // 0x0027F278: sw          $v1, 0x34($s4)
    MEM_W(0X34, ctx->r20) = ctx->r3;
        goto L_0027F28C;
    // 0x0027F278: sw          $v1, 0x34($s4)
    MEM_W(0X34, ctx->r20) = ctx->r3;
L_0027F27C:
    // 0x0027F27C: lw          $v0, 0x38($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X38);
    // 0x0027F280: beq         $v0, $zero, L_0027F28C
    if (ctx->r2 == 0) {
        // 0x0027F284: addiu       $v0, $v0, -0x1
        ctx->r2 = ADD32(ctx->r2, -0X1);
            goto L_0027F28C;
    }
    // 0x0027F284: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x0027F288: sw          $v0, 0x38($s4)
    MEM_W(0X38, ctx->r20) = ctx->r2;
L_0027F28C:
    // 0x0027F28C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x0027F290: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x0027F294: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x0027F298: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x0027F29C: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x0027F2A0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x0027F2A4: ldc1        $f25, 0x58($sp)
    CHECK_FR(ctx, 25);
    ctx->f25.u64 = LD(ctx->r29, 0X58);
    // 0x0027F2A8: ldc1        $f24, 0x50($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X50);
    // 0x0027F2AC: ldc1        $f23, 0x48($sp)
    CHECK_FR(ctx, 23);
    ctx->f23.u64 = LD(ctx->r29, 0X48);
    // 0x0027F2B0: ldc1        $f22, 0x40($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X40);
    // 0x0027F2B4: ldc1        $f21, 0x38($sp)
    CHECK_FR(ctx, 21);
    ctx->f21.u64 = LD(ctx->r29, 0X38);
    // 0x0027F2B8: ldc1        $f20, 0x30($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X30);
    // 0x0027F2BC: jr          $ra
    // 0x0027F2C0: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    return;
    // 0x0027F2C0: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
;}
RECOMP_FUNC void func_00451040(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00451040: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00451044: addu        $a0, $a1, $zero
    ctx->r4 = ADD32(ctx->r5, 0);
    // 0x00451048: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x0045104C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x00451050: lw          $v0, 0x1C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X1C);
    // 0x00451054: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x00451058: lw          $s0, 0x518($v0)
    ctx->r16 = MEM_W(ctx->r2, 0X518);
    // 0x0045105C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00451060: lb          $a1, 0x2B($s0)
    ctx->r5 = MEM_B(ctx->r16, 0X2B);
    // 0x00451064: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    // 0x00451068: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x0045106C: jal         0x0041648C
    // 0x00451070: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    func_0041648C(rdram, ctx);
        goto after_0;
    // 0x00451070: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    after_0:
    // 0x00451074: sb          $v0, 0x2B($s0)
    MEM_B(0X2B, ctx->r16) = ctx->r2;
    // 0x00451078: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x0045107C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x00451080: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x00451084: jr          $ra
    // 0x00451088: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00451088: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_00284654(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00284654: addiu       $s3, $zero, -0x1
    ctx->r19 = ADD32(0, -0X1);
    // 0x00284658: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
    // 0x0028465C: bne         $v0, $zero, L_0028466C
    if (ctx->r2 != 0) {
        // 0x00284660: addiu       $sp, $sp, -0x18
        ctx->r29 = ADD32(ctx->r29, -0X18);
            goto L_0028466C;
    }
    // 0x00284660: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00284664: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00284668: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
L_0028466C:
    // 0x0028466C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x00284670: lbu         $a1, 0x1($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X1);
    // 0x00284674: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x00284678: addiu       $a0, $a0, 0x7078
    ctx->r4 = ADD32(ctx->r4, 0X7078);
    // 0x0028467C: jal         0x00226134
    // 0x00284680: nop

    func_00226134(rdram, ctx);
        goto after_0;
    // 0x00284680: nop

    after_0:
    // 0x00284684: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x00284688: lb          $v1, 0x0($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X0);
    // 0x0028468C: lh          $a1, 0x2($a0)
    ctx->r5 = MEM_H(ctx->r4, 0X2);
    // 0x00284690: blez        $v1, L_00284750
    if (SIGNED(ctx->r3) <= 0) {
        // 0x00284694: slti        $v0, $v1, 0x3
        ctx->r2 = SIGNED(ctx->r3) < 0X3 ? 1 : 0;
            goto L_00284750;
    }
    // 0x00284694: slti        $v0, $v1, 0x3
    ctx->r2 = SIGNED(ctx->r3) < 0X3 ? 1 : 0;
    // 0x00284698: bnel        $v0, $zero, L_002846B4
    if (ctx->r2 != 0) {
        // 0x0028469C: addiu       $v1, $zero, 0x1
        ctx->r3 = ADD32(0, 0X1);
            goto L_002846B4;
    }
    goto skip_0;
    // 0x0028469C: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    skip_0:
    // 0x002846A0: slti        $v0, $v1, 0x5
    ctx->r2 = SIGNED(ctx->r3) < 0X5 ? 1 : 0;
    // 0x002846A4: beq         $v0, $zero, L_00284750
    if (ctx->r2 == 0) {
        // 0x002846A8: addiu       $v1, $zero, 0x3
        ctx->r3 = ADD32(0, 0X3);
            goto L_00284750;
    }
    // 0x002846A8: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
    // 0x002846AC: j           L_00284704
    // 0x002846B0: nop

        goto L_00284704;
    // 0x002846B0: nop

L_002846B4:
    // 0x002846B4: lhu         $v0, 0x2($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X2);
    // 0x002846B8: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    // 0x002846BC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x002846C0: sh          $v0, 0x2($s0)
    MEM_H(0X2, ctx->r16) = ctx->r2;
    // 0x002846C4: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x002846C8: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x002846CC: bne         $v0, $a1, L_00284750
    if (ctx->r2 != ctx->r5) {
        // 0x002846D0: nop
    
            goto L_00284750;
    }
    // 0x002846D0: nop

    // 0x002846D4: lh          $v1, 0x0($a0)
    ctx->r3 = MEM_H(ctx->r4, 0X0);
    // 0x002846D8: beq         $v1, $zero, L_002846F0
    if (ctx->r3 == 0) {
        // 0x002846DC: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_002846F0;
    }
    // 0x002846DC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x002846E0: beql        $v1, $v0, L_00284750
    if (ctx->r3 == ctx->r2) {
        // 0x002846E4: sh          $zero, 0x2($s0)
        MEM_H(0X2, ctx->r16) = 0;
            goto L_00284750;
    }
    goto skip_1;
    // 0x002846E4: sh          $zero, 0x2($s0)
    MEM_H(0X2, ctx->r16) = 0;
    skip_1:
    // 0x002846E8: j           L_00284750
    // 0x002846EC: nop

        goto L_00284750;
    // 0x002846EC: nop

L_002846F0:
    // 0x002846F0: addiu       $v0, $a1, -0x2
    ctx->r2 = ADD32(ctx->r5, -0X2);
    // 0x002846F4: sh          $v0, 0x2($s0)
    MEM_H(0X2, ctx->r16) = ctx->r2;
    // 0x002846F8: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x002846FC: j           L_00284750
    // 0x00284700: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
        goto L_00284750;
    // 0x00284700: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
L_00284704:
    // 0x00284704: lhu         $v0, 0x2($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X2);
    // 0x00284708: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    // 0x0028470C: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x00284710: sh          $v0, 0x2($s0)
    MEM_H(0X2, ctx->r16) = ctx->r2;
    // 0x00284714: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x00284718: bgez        $v0, L_00284750
    if (SIGNED(ctx->r2) >= 0) {
        // 0x0028471C: nop
    
            goto L_00284750;
    }
    // 0x0028471C: nop

    // 0x00284720: lh          $v1, 0x0($a0)
    ctx->r3 = MEM_H(ctx->r4, 0X0);
    // 0x00284724: beq         $v1, $zero, L_0028473C
    if (ctx->r3 == 0) {
        // 0x00284728: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_0028473C;
    }
    // 0x00284728: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0028472C: beq         $v1, $v0, L_0028474C
    if (ctx->r3 == ctx->r2) {
        // 0x00284730: addiu       $v0, $a1, -0x1
        ctx->r2 = ADD32(ctx->r5, -0X1);
            goto L_0028474C;
    }
    // 0x00284730: addiu       $v0, $a1, -0x1
    ctx->r2 = ADD32(ctx->r5, -0X1);
    // 0x00284734: j           L_00284750
    // 0x00284738: nop

        goto L_00284750;
    // 0x00284738: nop

L_0028473C:
    // 0x0028473C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00284740: sh          $v0, 0x2($s0)
    MEM_H(0X2, ctx->r16) = ctx->r2;
    // 0x00284744: j           L_00284750
    // 0x00284748: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
        goto L_00284750;
    // 0x00284748: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
L_0028474C:
    // 0x0028474C: sh          $v0, 0x2($s0)
    MEM_H(0X2, ctx->r16) = ctx->r2;
L_00284750:
    // 0x00284750: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x00284754: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00284758: jr          $ra
    // 0x0028475C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0028475C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_004467A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_0040D814:
    // 0x004467A8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
L_0040D85C:
    // 0x004467AC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x004467B0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x004467B4: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x004467B8: addiu       $v0, $v0, 0x1A90
    ctx->r2 = ADD32(ctx->r2, 0X1A90);
    // 0x004467BC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x004467C0: sw          $v0, 0x2C($a1)
    MEM_W(0X2C, ctx->r5) = ctx->r2;
    // 0x004467C4: lui         $v0, 0x41
    ctx->r2 = S32(0X41 << 16);
    // 0x004467C8: addiu       $v0, $v0, -0x2090
    ctx->r2 = ADD32(ctx->r2, -0X2090);
    // 0x004467CC: sw          $v0, 0xF0($a1)
    MEM_W(0XF0, ctx->r5) = ctx->r2;
    // 0x004467D0: lui         $v0, 0x41
    ctx->r2 = S32(0X41 << 16);
    // 0x004467D4: addiu       $v0, $v0, -0x224C
    ctx->r2 = ADD32(ctx->r2, -0X224C);
    // 0x004467D8: sw          $v0, 0xF8($a1)
    MEM_W(0XF8, ctx->r5) = ctx->r2;
    // 0x004467DC: lui         $v0, 0x26
    ctx->r2 = S32(0X26 << 16);
    // 0x004467E0: addiu       $v0, $v0, -0x1B48
    ctx->r2 = ADD32(ctx->r2, -0X1B48);
    // 0x004467E4: sw          $v0, 0x108($a1)
    MEM_W(0X108, ctx->r5) = ctx->r2;
    // 0x004467E8: lhu         $v1, 0xB8($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0XB8);
    // 0x004467EC: addiu       $v0, $zero, 0x456
    ctx->r2 = ADD32(0, 0X456);
    // 0x004467F0: bne         $v1, $v0, L_00446808
    if (ctx->r3 != ctx->r2) {
        // 0x004467F4: nop
    
            goto L_00446808;
    }
    // 0x004467F4: nop

    // 0x004467F8: lui         $v0, 0x41
    ctx->r2 = S32(0X41 << 16);
    // 0x004467FC: addiu       $v0, $v0, -0x1160
    ctx->r2 = ADD32(ctx->r2, -0X1160);
    // 0x00446800: j           L_0040D814
    // 0x00446804: sw          $v0, 0xF4($a1)
    MEM_W(0XF4, ctx->r5) = ctx->r2;
    entry_0040D814(rdram, ctx);
    return;
    // 0x00446804: sw          $v0, 0xF4($a1)
    MEM_W(0XF4, ctx->r5) = ctx->r2;
L_00446808:
    // 0x00446808: lui         $v0, 0x41
    ctx->r2 = S32(0X41 << 16);
    // 0x0044680C: addiu       $v0, $v0, -0x1250
    ctx->r2 = ADD32(ctx->r2, -0X1250);
    // 0x00446810: sw          $v0, 0xF4($a1)
    MEM_W(0XF4, ctx->r5) = ctx->r2;
    // 0x00446814: lui         $v1, 0xEFFF
    ctx->r3 = S32(0XEFFF << 16);
    // 0x00446818: sw          $zero, 0x10C($a1)
    MEM_W(0X10C, ctx->r5) = 0;
    // 0x0044681C: sw          $zero, 0x118($a1)
    MEM_W(0X118, ctx->r5) = 0;
    // 0x00446820: sw          $zero, 0x11C($a1)
    MEM_W(0X11C, ctx->r5) = 0;
    // 0x00446824: sw          $zero, 0x4($a1)
    MEM_W(0X4, ctx->r5) = 0;
    // 0x00446828: lw          $v0, 0xD4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XD4);
    // 0x0044682C: ori         $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 | 0XFFFF;
    // 0x00446830: and         $a0, $v0, $v1
    ctx->r4 = ctx->r2 & ctx->r3;
    // 0x00446834: lhu         $v1, 0xB8($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0XB8);
    // 0x00446838: addiu       $v0, $zero, 0x456
    ctx->r2 = ADD32(0, 0X456);
    // 0x0044683C: bne         $v1, $v0, L_00446850
    if (ctx->r3 != ctx->r2) {
        // 0x00446840: sw          $a0, 0xD4($s0)
        MEM_W(0XD4, ctx->r16) = ctx->r4;
            goto L_00446850;
    }
    // 0x00446840: sw          $a0, 0xD4($s0)
    MEM_W(0XD4, ctx->r16) = ctx->r4;
    // 0x00446844: lui         $v0, 0x2
    ctx->r2 = S32(0X2 << 16);
    // 0x00446848: j           L_0040D85C
    // 0x0044684C: or          $v0, $a0, $v0
    ctx->r2 = ctx->r4 | ctx->r2;
    entry_0040D85C(rdram, ctx);
    return;
    // 0x0044684C: or          $v0, $a0, $v0
    ctx->r2 = ctx->r4 | ctx->r2;
L_00446850:
    // 0x00446850: lui         $v0, 0xFFFD
    ctx->r2 = S32(0XFFFD << 16);
    // 0x00446854: ori         $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 | 0XFFFF;
    // 0x00446858: and         $v0, $a0, $v0
    ctx->r2 = ctx->r4 & ctx->r2;
    // 0x0044685C: sw          $v0, 0xD4($s0)
    MEM_W(0XD4, ctx->r16) = ctx->r2;
    // 0x00446860: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x00446864: lw          $v0, -0x6770($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X6770);
    // 0x00446868: beq         $v0, $zero, L_00446884
    if (ctx->r2 == 0) {
        // 0x0044686C: lui         $v1, 0x6000
        ctx->r3 = S32(0X6000 << 16);
            goto L_00446884;
    }
    // 0x0044686C: lui         $v1, 0x6000
    ctx->r3 = S32(0X6000 << 16);
    // 0x00446870: sw          $v0, 0x80($a1)
    MEM_W(0X80, ctx->r5) = ctx->r2;
    // 0x00446874: sw          $v0, 0x88($a1)
    MEM_W(0X88, ctx->r5) = ctx->r2;
    // 0x00446878: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x0044687C: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x00446880: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
L_00446884:
    // 0x00446884: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00446888: jal         0x00243414
    // 0x0044688C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_00243414(rdram, ctx);
        goto after_0;
    // 0x0044688C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_0:
    // 0x00446890: lw          $v0, 0xD4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XD4);
    // 0x00446894: addiu       $v1, $zero, -0x101
    ctx->r3 = ADD32(0, -0X101);
    // 0x00446898: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x0044689C: sw          $v0, 0xD4($s0)
    MEM_W(0XD4, ctx->r16) = ctx->r2;
    // 0x004468A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x004468A4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x004468A8: jr          $ra
    // 0x004468AC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x004468AC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0022077C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0022077C: addiu       $sp, $sp, -0x4060
    ctx->r29 = ADD32(ctx->r29, -0X4060);
    // 0x00220780: sw          $s1, 0x402C($sp)
    MEM_W(0X402C, ctx->r29) = ctx->r17;
    // 0x00220784: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x00220788: sw          $ra, 0x4040($sp)
    MEM_W(0X4040, ctx->r29) = ctx->r31;
    // 0x0022078C: sw          $s5, 0x403C($sp)
    MEM_W(0X403C, ctx->r29) = ctx->r21;
    // 0x00220790: sw          $s4, 0x4038($sp)
    MEM_W(0X4038, ctx->r29) = ctx->r20;
    // 0x00220794: sw          $s3, 0x4034($sp)
    MEM_W(0X4034, ctx->r29) = ctx->r19;
    // 0x00220798: sw          $s2, 0x4030($sp)
    MEM_W(0X4030, ctx->r29) = ctx->r18;
    // 0x0022079C: sw          $s0, 0x4028($sp)
    MEM_W(0X4028, ctx->r29) = ctx->r16;
    // 0x002207A0: sdc1        $f22, 0x4058($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X4058, ctx->r29);
    // 0x002207A4: sdc1        $f21, 0x4050($sp)
    CHECK_FR(ctx, 21);
    SD(ctx->f21.u64, 0X4050, ctx->r29);
    // 0x002207A8: sdc1        $f20, 0x4048($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X4048, ctx->r29);
    // 0x002207AC: lw          $s2, 0x1064($s1)
    ctx->r18 = MEM_W(ctx->r17, 0X1064);
    // 0x002207B0: beq         $s2, $zero, L_002209EC
    if (ctx->r18 == 0) {
        // 0x002207B4: addu        $s3, $a1, $zero
        ctx->r19 = ADD32(ctx->r5, 0);
            goto L_002209EC;
    }
    // 0x002207B4: addu        $s3, $a1, $zero
    ctx->r19 = ADD32(ctx->r5, 0);
    // 0x002207B8: lui         $a3, 0xDB04
    ctx->r7 = S32(0XDB04 << 16);
    // 0x002207BC: ori         $a3, $a3, 0x4
    ctx->r7 = ctx->r7 | 0X4;
    // 0x002207C0: lui         $t0, 0xDB04
    ctx->r8 = S32(0XDB04 << 16);
    // 0x002207C4: ori         $t0, $t0, 0xC
    ctx->r8 = ctx->r8 | 0XC;
    // 0x002207C8: lui         $t1, 0xDB04
    ctx->r9 = S32(0XDB04 << 16);
    // 0x002207CC: ori         $t1, $t1, 0x14
    ctx->r9 = ctx->r9 | 0X14;
    // 0x002207D0: lui         $t2, 0xDB04
    ctx->r10 = S32(0XDB04 << 16);
    // 0x002207D4: ori         $t2, $t2, 0x1C
    ctx->r10 = ctx->r10 | 0X1C;
    // 0x002207D8: addiu       $s0, $sp, 0x4018
    ctx->r16 = ADD32(ctx->r29, 0X4018);
    // 0x002207DC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x002207E0: lui         $a2, 0x800E
    ctx->r6 = S32(0X800E << 16);
    // 0x002207E4: addiu       $a2, $a2, -0x71DC
    ctx->r6 = ADD32(ctx->r6, -0X71DC);
    // 0x002207E8: lw          $v1, 0x0($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X0);
    // 0x002207EC: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
    // 0x002207F0: addiu       $v1, $v1, 0x8
    ctx->r3 = ADD32(ctx->r3, 0X8);
    // 0x002207F4: sw          $v1, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r3;
    // 0x002207F8: sw          $a3, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r7;
    // 0x002207FC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x00220800: sw          $a3, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r7;
    // 0x00220804: addiu       $v0, $v1, 0x8
    ctx->r2 = ADD32(ctx->r3, 0X8);
    // 0x00220808: sw          $v0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r2;
    // 0x0022080C: sw          $t0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r8;
    // 0x00220810: addiu       $t0, $v1, 0x10
    ctx->r8 = ADD32(ctx->r3, 0X10);
    // 0x00220814: sw          $a3, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r7;
    // 0x00220818: ori         $a3, $zero, 0xFFFF
    ctx->r7 = 0 | 0XFFFF;
    // 0x0022081C: sw          $t0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r8;
    // 0x00220820: sw          $t1, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r9;
    // 0x00220824: sw          $a3, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r7;
    // 0x00220828: addiu       $v0, $v1, 0x18
    ctx->r2 = ADD32(ctx->r3, 0X18);
    // 0x0022082C: sw          $v0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r2;
    // 0x00220830: sw          $t2, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->r10;
    // 0x00220834: jal         0x00280E40
    // 0x00220838: sw          $a3, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r7;
    func_00280E40(rdram, ctx);
        goto after_0;
    // 0x00220838: sw          $a3, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r7;
    after_0:
    // 0x0022083C: lwc1        $f0, 0x4018($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X4018);
    // 0x00220840: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00220844: lwc1        $f20, 0x5EAC($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X5EAC);
    // 0x00220848: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0022084C: mul.s       $f22, $f0, $f20
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f22.fl = MUL_S(ctx->f0.fl, ctx->f20.fl);
    // 0x00220850: jal         0x00280E40
    // 0x00220854: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    func_00280E40(rdram, ctx);
        goto after_1;
    // 0x00220854: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    after_1:
    // 0x00220858: lwc1        $f0, 0x401C($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X401C);
    // 0x0022085C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00220860: mul.s       $f21, $f0, $f20
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f21.fl = MUL_S(ctx->f0.fl, ctx->f20.fl);
    // 0x00220864: jal         0x00280E40
    // 0x00220868: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    func_00280E40(rdram, ctx);
        goto after_2;
    // 0x00220868: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    after_2:
    // 0x0022086C: lwc1        $f0, 0x4020($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X4020);
    // 0x00220870: mul.s       $f5, $f0, $f20
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f5.fl = MUL_S(ctx->f0.fl, ctx->f20.fl);
    // 0x00220874: blez        $s2, L_00220934
    if (SIGNED(ctx->r18) <= 0) {
        // 0x00220878: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_00220934;
    }
    // 0x00220878: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x0022087C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x00220880: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    // 0x00220884: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
L_00220888:
    // 0x00220888: lw          $a0, 0x1068($a2)
    ctx->r4 = MEM_W(ctx->r6, 0X1068);
    // 0x0022088C: lbu         $v1, 0x0($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X0);
    // 0x00220890: beq         $v1, $a3, L_002208D8
    if (ctx->r3 == ctx->r7) {
        // 0x00220894: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_002208D8;
    }
    // 0x00220894: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x00220898: beq         $v0, $zero, L_002208D8
    if (ctx->r2 == 0) {
        // 0x0022089C: nop
    
            goto L_002208D8;
    }
    // 0x0022089C: nop

    // 0x002208A0: bne         $v1, $zero, L_002208D8
    if (ctx->r3 != 0) {
        // 0x002208A4: nop
    
            goto L_002208D8;
    }
    // 0x002208A4: nop

    // 0x002208A8: lwc1        $f0, 0x68($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X68);
    // 0x002208AC: lwc1        $f1, 0x74($a0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r4, 0X74);
    // 0x002208B0: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x002208B4: lwc1        $f1, 0x78($a0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r4, 0X78);
    // 0x002208B8: add.s       $f4, $f0, $f22
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f4.fl = ctx->f0.fl + ctx->f22.fl;
    // 0x002208BC: lwc1        $f0, 0x6C($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X6C);
    // 0x002208C0: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x002208C4: lwc1        $f1, 0x7C($a0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r4, 0X7C);
    // 0x002208C8: add.s       $f3, $f0, $f21
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f21.fl); 
    ctx->f3.fl = ctx->f0.fl + ctx->f21.fl;
    // 0x002208CC: lwc1        $f0, 0x70($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X70);
    // 0x002208D0: j           L_002208F8
    // 0x002208D4: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
        goto L_002208F8;
    // 0x002208D4: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
L_002208D8:
    // 0x002208D8: lwc1        $f0, 0x4($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X4);
    // 0x002208DC: add.s       $f0, $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f0.fl;
    // 0x002208E0: add.s       $f4, $f0, $f22
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f4.fl = ctx->f0.fl + ctx->f22.fl;
    // 0x002208E4: lwc1        $f0, 0x8($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X8);
    // 0x002208E8: add.s       $f0, $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f0.fl;
    // 0x002208EC: add.s       $f3, $f0, $f21
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f21.fl); 
    ctx->f3.fl = ctx->f0.fl + ctx->f21.fl;
    // 0x002208F0: lwc1        $f0, 0xC($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0XC);
    // 0x002208F4: add.s       $f0, $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f0.fl;
L_002208F8:
    // 0x002208F8: add.s       $f2, $f0, $f5
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 5);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f5.fl); 
    ctx->f2.fl = ctx->f0.fl + ctx->f5.fl;
    // 0x002208FC: mul.s       $f0, $f4, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = MUL_S(ctx->f4.fl, ctx->f4.fl);
    // 0x00220900: nop

    // 0x00220904: mul.s       $f1, $f3, $f3
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f1.fl = MUL_S(ctx->f3.fl, ctx->f3.fl);
    // 0x00220908: nop

    // 0x0022090C: mul.s       $f2, $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x00220910: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x00220914: addiu       $a2, $a2, 0x4
    ctx->r6 = ADD32(ctx->r6, 0X4);
    // 0x00220918: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x0022091C: add.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f2.fl;
    // 0x00220920: slt         $v0, $s0, $s2
    ctx->r2 = SIGNED(ctx->r16) < SIGNED(ctx->r18) ? 1 : 0;
    // 0x00220924: sw          $a0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r4;
    // 0x00220928: swc1        $f0, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->f0.u32l;
    // 0x0022092C: bne         $v0, $zero, L_00220888
    if (ctx->r2 != 0) {
        // 0x00220930: addiu       $a1, $a1, 0x8
        ctx->r5 = ADD32(ctx->r5, 0X8);
            goto L_00220888;
    }
    // 0x00220930: addiu       $a1, $a1, 0x8
    ctx->r5 = ADD32(ctx->r5, 0X8);
L_00220934:
    // 0x00220934: lui         $v0, 0x22
    ctx->r2 = S32(0X22 << 16);
    // 0x00220938: addiu       $v0, $v0, 0x6CD0
    ctx->r2 = ADD32(ctx->r2, 0X6CD0);
    // 0x0022093C: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x00220940: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    // 0x00220944: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x00220948: lui         $a3, 0x22
    ctx->r7 = S32(0X22 << 16);
    // 0x0022094C: addiu       $a3, $a3, 0x6D30
    ctx->r7 = ADD32(ctx->r7, 0X6D30);
    // 0x00220950: jal         0x00226F90
    // 0x00220954: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    entry_00226F90(rdram, ctx);
        goto after_3;
    // 0x00220954: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_3:
    // 0x00220958: jal         0x0020B5D4
    // 0x0022095C: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    func_0020B5D4(rdram, ctx);
        goto after_4;
    // 0x0022095C: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    after_4:
    // 0x00220960: blez        $s2, L_002209E4
    if (SIGNED(ctx->r18) <= 0) {
        // 0x00220964: addiu       $s5, $zero, 0x1
        ctx->r21 = ADD32(0, 0X1);
            goto L_002209E4;
    }
    // 0x00220964: addiu       $s5, $zero, 0x1
    ctx->r21 = ADD32(0, 0X1);
    // 0x00220968: addiu       $s4, $zero, 0x3
    ctx->r20 = ADD32(0, 0X3);
    // 0x0022096C: addiu       $s1, $sp, 0x18
    ctx->r17 = ADD32(ctx->r29, 0X18);
L_00220970:
    // 0x00220970: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x00220974: lbu         $v1, 0x0($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X0);
    // 0x00220978: beq         $v1, $s5, L_002209C8
    if (ctx->r3 == ctx->r21) {
        // 0x0022097C: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_002209C8;
    }
    // 0x0022097C: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x00220980: beq         $v0, $zero, L_00220998
    if (ctx->r2 == 0) {
        // 0x00220984: nop
    
            goto L_00220998;
    }
    // 0x00220984: nop

    // 0x00220988: beq         $v1, $zero, L_002209A8
    if (ctx->r3 == 0) {
        // 0x0022098C: nop
    
            goto L_002209A8;
    }
    // 0x0022098C: nop

    // 0x00220990: j           L_002209D4
    // 0x00220994: addiu       $s1, $s1, 0x8
    ctx->r17 = ADD32(ctx->r17, 0X8);
        goto L_002209D4;
    // 0x00220994: addiu       $s1, $s1, 0x8
    ctx->r17 = ADD32(ctx->r17, 0X8);
L_00220998:
    // 0x00220998: beq         $v1, $s4, L_002209B8
    if (ctx->r3 == ctx->r20) {
        // 0x0022099C: nop
    
            goto L_002209B8;
    }
    // 0x0022099C: nop

    // 0x002209A0: j           L_002209D4
    // 0x002209A4: addiu       $s1, $s1, 0x8
    ctx->r17 = ADD32(ctx->r17, 0X8);
        goto L_002209D4;
    // 0x002209A4: addiu       $s1, $s1, 0x8
    ctx->r17 = ADD32(ctx->r17, 0X8);
L_002209A8:
    // 0x002209A8: jal         0x00214844
    // 0x002209AC: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    func_00214844(rdram, ctx);
        goto after_5;
    // 0x002209AC: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    after_5:
    // 0x002209B0: j           L_002209D4
    // 0x002209B4: addiu       $s1, $s1, 0x8
    ctx->r17 = ADD32(ctx->r17, 0X8);
        goto L_002209D4;
    // 0x002209B4: addiu       $s1, $s1, 0x8
    ctx->r17 = ADD32(ctx->r17, 0X8);
L_002209B8:
    // 0x002209B8: jal         0x002152AC
    // 0x002209BC: addiu       $s1, $s1, 0x8
    ctx->r17 = ADD32(ctx->r17, 0X8);
    func_002152AC(rdram, ctx);
        goto after_6;
    // 0x002209BC: addiu       $s1, $s1, 0x8
    ctx->r17 = ADD32(ctx->r17, 0X8);
    after_6:
    // 0x002209C0: j           L_002209D8
    // 0x002209C4: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
        goto L_002209D8;
    // 0x002209C4: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_002209C8:
    // 0x002209C8: jal         0x0021D39C
    // 0x002209CC: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    func_0021D39C(rdram, ctx);
        goto after_7;
    // 0x002209CC: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    after_7:
    // 0x002209D0: addiu       $s1, $s1, 0x8
    ctx->r17 = ADD32(ctx->r17, 0X8);
L_002209D4:
    // 0x002209D4: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_002209D8:
    // 0x002209D8: slt         $v0, $s0, $s2
    ctx->r2 = SIGNED(ctx->r16) < SIGNED(ctx->r18) ? 1 : 0;
    // 0x002209DC: bne         $v0, $zero, L_00220970
    if (ctx->r2 != 0) {
        // 0x002209E0: nop
    
            goto L_00220970;
    }
    // 0x002209E0: nop

L_002209E4:
    // 0x002209E4: jal         0x0020B624
    // 0x002209E8: nop

    func_0020B624(rdram, ctx);
        goto after_8;
    // 0x002209E8: nop

    after_8:
L_002209EC:
    // 0x002209EC: lw          $ra, 0x4040($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4040);
    // 0x002209F0: lw          $s5, 0x403C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X403C);
    // 0x002209F4: lw          $s4, 0x4038($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X4038);
    // 0x002209F8: lw          $s3, 0x4034($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X4034);
    // 0x002209FC: lw          $s2, 0x4030($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X4030);
    // 0x00220A00: lw          $s1, 0x402C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X402C);
    // 0x00220A04: lw          $s0, 0x4028($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X4028);
    // 0x00220A08: ldc1        $f22, 0x4058($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X4058);
    // 0x00220A0C: ldc1        $f21, 0x4050($sp)
    CHECK_FR(ctx, 21);
    ctx->f21.u64 = LD(ctx->r29, 0X4050);
    // 0x00220A10: ldc1        $f20, 0x4048($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X4048);
    // 0x00220A14: jr          $ra
    // 0x00220A18: addiu       $sp, $sp, 0x4060
    ctx->r29 = ADD32(ctx->r29, 0X4060);
    return;
    // 0x00220A18: addiu       $sp, $sp, 0x4060
    ctx->r29 = ADD32(ctx->r29, 0X4060);
;}
RECOMP_FUNC void func_0026C240(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0026C240: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x0026C244: lui         $v0, 0x5555
    ctx->r2 = S32(0X5555 << 16);
    // 0x0026C248: ori         $v0, $v0, 0x5556
    ctx->r2 = ctx->r2 | 0X5556;
    // 0x0026C24C: addiu       $a2, $a1, 0x1
    ctx->r6 = ADD32(ctx->r5, 0X1);
    // 0x0026C250: sll         $a1, $a1, 2
    ctx->r5 = S32(ctx->r5 << 2);
    // 0x0026C254: addu        $a1, $a0, $a1
    ctx->r5 = ADD32(ctx->r4, ctx->r5);
    // 0x0026C258: sra         $v1, $a2, 31
    ctx->r3 = S32(SIGNED(ctx->r6) >> 31);
    // 0x0026C25C: mult        $a2, $v0
    result = S64(S32(ctx->r6)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x0026C260: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x0026C264: sdc1        $f22, 0x28($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X28, ctx->r29);
    // 0x0026C268: sdc1        $f21, 0x20($sp)
    CHECK_FR(ctx, 21);
    SD(ctx->f21.u64, 0X20, ctx->r29);
    // 0x0026C26C: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x0026C270: mfhi        $a3
    ctx->r7 = hi;
    // 0x0026C274: subu        $v1, $a3, $v1
    ctx->r3 = SUB32(ctx->r7, ctx->r3);
    // 0x0026C278: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x0026C27C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x0026C280: subu        $a2, $a2, $v0
    ctx->r6 = SUB32(ctx->r6, ctx->r2);
    // 0x0026C284: sll         $a2, $a2, 2
    ctx->r6 = S32(ctx->r6 << 2);
    // 0x0026C288: addu        $a0, $a0, $a2
    ctx->r4 = ADD32(ctx->r4, ctx->r6);
    // 0x0026C28C: lw          $v0, 0x4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X4);
    // 0x0026C290: lw          $v1, 0x4($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X4);
    // 0x0026C294: lwc1        $f1, 0x0($v0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r2, 0X0);
    // 0x0026C298: lwc1        $f0, 0x0($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X0);
    // 0x0026C29C: sub.s       $f21, $f1, $f0
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f21.fl = ctx->f1.fl - ctx->f0.fl;
    // 0x0026C2A0: mul.s       $f2, $f21, $f21
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f21.fl); NAN_CHECK(ctx->f21.fl); 
    ctx->f2.fl = MUL_S(ctx->f21.fl, ctx->f21.fl);
    // 0x0026C2A4: lwc1        $f1, 0x8($v0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r2, 0X8);
    // 0x0026C2A8: lwc1        $f0, 0x8($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X8);
    // 0x0026C2AC: sub.s       $f20, $f1, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = ctx->f1.fl - ctx->f0.fl;
    // 0x0026C2B0: mul.s       $f12, $f20, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f12.fl = MUL_S(ctx->f20.fl, ctx->f20.fl);
    // 0x0026C2B4: jal         0x00298470
    // 0x0026C2B8: add.s       $f12, $f2, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = ctx->f2.fl + ctx->f12.fl;
    func_00298470(rdram, ctx);
        goto after_0;
    // 0x0026C2B8: add.s       $f12, $f2, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = ctx->f2.fl + ctx->f12.fl;
    after_0:
    // 0x0026C2BC: mtc1        $zero, $f22
    ctx->f22.u32l = 0;
    // 0x0026C2C0: c.eq.s      $f0, $f22
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f0.fl == ctx->f22.fl;
    // 0x0026C2C4: nop

    // 0x0026C2C8: bc1f        L_0026C2D8
    if (!c1cs) {
        // 0x0026C2CC: nop
    
            goto L_0026C2D8;
    }
    // 0x0026C2CC: nop

    // 0x0026C2D0: j           L_0026C2F0
    // 0x0026C2D4: mov.s       $f0, $f22
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    ctx->f0.fl = ctx->f22.fl;
        goto L_0026C2F0;
    // 0x0026C2D4: mov.s       $f0, $f22
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    ctx->f0.fl = ctx->f22.fl;
L_0026C2D8:
    // 0x0026C2D8: jal         0x0021153C
    // 0x0026C2DC: div.s       $f12, $f21, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f21.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = DIV_S(ctx->f21.fl, ctx->f0.fl);
    func_0021153C(rdram, ctx);
        goto after_1;
    // 0x0026C2DC: div.s       $f12, $f21, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f21.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = DIV_S(ctx->f21.fl, ctx->f0.fl);
    after_1:
    // 0x0026C2E0: c.lt.s      $f20, $f22
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f20.fl < ctx->f22.fl;
    // 0x0026C2E4: nop

    // 0x0026C2E8: bc1fl       L_0026C2F0
    if (!c1cs) {
        // 0x0026C2EC: neg.s       $f0, $f0
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
            goto L_0026C2F0;
    }
    goto skip_0;
    // 0x0026C2EC: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    skip_0:
L_0026C2F0:
    // 0x0026C2F0: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x0026C2F4: ldc1        $f22, 0x28($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X28);
    // 0x0026C2F8: ldc1        $f21, 0x20($sp)
    CHECK_FR(ctx, 21);
    ctx->f21.u64 = LD(ctx->r29, 0X20);
    // 0x0026C2FC: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x0026C300: jr          $ra
    // 0x0026C304: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x0026C304: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_00422258(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00422258: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x0042225C: lw          $v0, 0x9A8($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X9A8);
    // 0x00422260: beq         $v0, $zero, L_00422278
    if (ctx->r2 == 0) {
        // 0x00422264: addiu       $a2, $zero, 0x8
        ctx->r6 = ADD32(0, 0X8);
            goto L_00422278;
    }
    // 0x00422264: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x00422268: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0042226C: addiu       $v0, $v0, 0x4B04
    ctx->r2 = ADD32(ctx->r2, 0X4B04);
    // 0x00422270: j           L_0042230C
    // 0x00422274: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_0042230C;
    // 0x00422274: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_00422278:
    // 0x00422278: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x0042227C: addiu       $a1, $a1, 0x95B
    ctx->r5 = ADD32(ctx->r5, 0X95B);
    // 0x00422280: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00422284: addiu       $v0, $v0, 0x4B34
    ctx->r2 = ADD32(ctx->r2, 0X4B34);
    // 0x00422288: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    // 0x0042228C: lbu         $v1, 0x0($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X0);
    // 0x00422290: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x00422294: bne         $v1, $v0, L_004222B8
    if (ctx->r3 != ctx->r2) {
        // 0x00422298: addiu       $a1, $a1, -0x1
        ctx->r5 = ADD32(ctx->r5, -0X1);
            goto L_004222B8;
    }
    // 0x00422298: addiu       $a1, $a1, -0x1
    ctx->r5 = ADD32(ctx->r5, -0X1);
    // 0x0042229C: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
L_004222A0:
    // 0x004222A0: beq         $a2, $zero, L_004222B8
    if (ctx->r6 == 0) {
        // 0x004222A4: nop
    
            goto L_004222B8;
    }
    // 0x004222A4: nop

    // 0x004222A8: addiu       $a2, $a2, -0x1
    ctx->r6 = ADD32(ctx->r6, -0X1);
    // 0x004222AC: lbu         $v0, 0x0($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X0);
    // 0x004222B0: beq         $v0, $v1, L_004222A0
    if (ctx->r2 == ctx->r3) {
        // 0x004222B4: addiu       $a1, $a1, -0x1
        ctx->r5 = ADD32(ctx->r5, -0X1);
            goto L_004222A0;
    }
    // 0x004222B4: addiu       $a1, $a1, -0x1
    ctx->r5 = ADD32(ctx->r5, -0X1);
L_004222B8:
    // 0x004222B8: lw          $a0, 0x14($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X14);
    // 0x004222BC: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    // 0x004222C0: addiu       $v1, $zero, 0x7
    ctx->r3 = ADD32(0, 0X7);
    // 0x004222C4: addiu       $a0, $a0, 0xB
    ctx->r4 = ADD32(ctx->r4, 0XB);
    // 0x004222C8: addu        $v0, $a0, $v1
    ctx->r2 = ADD32(ctx->r4, ctx->r3);
L_004222CC:
    // 0x004222CC: sb          $a1, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r5;
    // 0x004222D0: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x004222D4: bgez        $v1, L_004222CC
    if (SIGNED(ctx->r3) >= 0) {
        // 0x004222D8: addiu       $v0, $v0, -0x1
        ctx->r2 = ADD32(ctx->r2, -0X1);
            goto L_004222CC;
    }
    // 0x004222D8: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x004222DC: addiu       $v0, $a0, 0x8
    ctx->r2 = ADD32(ctx->r4, 0X8);
    // 0x004222E0: subu        $a0, $v0, $a2
    ctx->r4 = SUB32(ctx->r2, ctx->r6);
    // 0x004222E4: blez        $a2, L_0042230C
    if (SIGNED(ctx->r6) <= 0) {
        // 0x004222E8: addu        $v1, $zero, $zero
        ctx->r3 = ADD32(0, 0);
            goto L_0042230C;
    }
    // 0x004222E8: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
L_004222EC:
    // 0x004222EC: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x004222F0: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x004222F4: lbu         $v0, 0x954($at)
    ctx->r2 = MEM_BU(ctx->r1, 0X954);
    // 0x004222F8: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x004222FC: sb          $v0, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r2;
    // 0x00422300: slt         $v0, $v1, $a2
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r6) ? 1 : 0;
    // 0x00422304: bne         $v0, $zero, L_004222EC
    if (ctx->r2 != 0) {
        // 0x00422308: addiu       $a0, $a0, 0x1
        ctx->r4 = ADD32(ctx->r4, 0X1);
            goto L_004222EC;
    }
    // 0x00422308: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
L_0042230C:
    // 0x0042230C: jr          $ra
    // 0x00422310: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x00422310: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void func_0045AD54(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0045AD54: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0045AD58: sw          $zero, 0x9B8($at)
    MEM_W(0X9B8, ctx->r1) = 0;
    // 0x0045AD5C: jr          $ra
    // 0x0045AD60: nop

    return;
    // 0x0045AD60: nop

;}
RECOMP_FUNC void func_00225B7C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00225B7C: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x00225B80: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x00225B84: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x00225B88: addu        $v0, $a1, $zero
    ctx->r2 = ADD32(ctx->r5, 0);
    // 0x00225B8C: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    // 0x00225B90: lui         $a3, 0x42CC
    ctx->r7 = S32(0X42CC << 16);
    // 0x00225B94: ori         $a3, $a3, 0xCCCC
    ctx->r7 = ctx->r7 | 0XCCCC;
    // 0x00225B98: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x00225B9C: sw          $a2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r6;
    // 0x00225BA0: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    // 0x00225BA4: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x00225BA8: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x00225BAC: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x00225BB0: sw          $s2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r18;
    // 0x00225BB4: jal         0x00245828
    // 0x00225BB8: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    func_00245828(rdram, ctx);
        goto after_0;
    // 0x00225BB8: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    after_0:
    // 0x00225BBC: lw          $s2, 0xEFC($s0)
    ctx->r18 = MEM_W(ctx->r16, 0XEFC);
    // 0x00225BC0: blez        $s2, L_00225BF0
    if (SIGNED(ctx->r18) <= 0) {
        // 0x00225BC4: addiu       $a0, $s0, 0xDFC
        ctx->r4 = ADD32(ctx->r16, 0XDFC);
            goto L_00225BF0;
    }
    // 0x00225BC4: addiu       $a0, $s0, 0xDFC
    ctx->r4 = ADD32(ctx->r16, 0XDFC);
    // 0x00225BC8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x00225BCC: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
L_00225BD0:
    // 0x00225BD0: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x00225BD4: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x00225BD8: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x00225BDC: jal         0x002465C8
    // 0x00225BE0: addiu       $a1, $a0, 0x140
    ctx->r5 = ADD32(ctx->r4, 0X140);
    func_002465C8(rdram, ctx);
        goto after_1;
    // 0x00225BE0: addiu       $a1, $a0, 0x140
    ctx->r5 = ADD32(ctx->r4, 0X140);
    after_1:
    // 0x00225BE4: slt         $v0, $s1, $s2
    ctx->r2 = SIGNED(ctx->r17) < SIGNED(ctx->r18) ? 1 : 0;
    // 0x00225BE8: bne         $v0, $zero, L_00225BD0
    if (ctx->r2 != 0) {
        // 0x00225BEC: addiu       $a2, $sp, 0x18
        ctx->r6 = ADD32(ctx->r29, 0X18);
            goto L_00225BD0;
    }
    // 0x00225BEC: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
L_00225BF0:
    // 0x00225BF0: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x00225BF4: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x00225BF8: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x00225BFC: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x00225C00: jr          $ra
    // 0x00225C04: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x00225C04: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_0045C198(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0045C198: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x0045C19C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x0045C1A0: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x0045C1A4: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x0045C1A8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0045C1AC: lw          $s0, 0x1C($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X1C);
    // 0x0045C1B0: jal         0x00284174
    // 0x0045C1B4: nop

    func_00284174(rdram, ctx);
        goto after_0;
    // 0x0045C1B4: nop

    after_0:
    // 0x0045C1B8: beq         $v0, $zero, L_0045C1D4
    if (ctx->r2 == 0) {
        // 0x0045C1BC: addu        $v1, $zero, $zero
        ctx->r3 = ADD32(0, 0);
            goto L_0045C1D4;
    }
    // 0x0045C1BC: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
    // 0x0045C1C0: jal         0x00284240
    // 0x0045C1C4: nop

    func_00284240(rdram, ctx);
        goto after_1;
    // 0x0045C1C4: nop

    after_1:
    // 0x0045C1C8: beq         $v0, $zero, L_0045C1D4
    if (ctx->r2 == 0) {
        // 0x0045C1CC: addiu       $v1, $zero, 0x1
        ctx->r3 = ADD32(0, 0X1);
            goto L_0045C1D4;
    }
    // 0x0045C1CC: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x0045C1D0: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
L_0045C1D4:
    // 0x0045C1D4: bne         $v1, $zero, L_0045C208
    if (ctx->r3 != 0) {
        // 0x0045C1D8: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_0045C208;
    }
    // 0x0045C1D8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x0045C1DC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0045C1E0: lw          $a2, 0x92C($a0)
    ctx->r6 = MEM_W(ctx->r4, 0X92C);
    // 0x0045C1E4: jal         0x002484F8
    // 0x0045C1E8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_002484F8(rdram, ctx);
        goto after_2;
    // 0x0045C1E8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_2:
    // 0x0045C1EC: beq         $v0, $zero, L_0045C204
    if (ctx->r2 == 0) {
        // 0x0045C1F0: sh          $zero, 0x0($s1)
        MEM_H(0X0, ctx->r17) = 0;
            goto L_0045C204;
    }
    // 0x0045C1F0: sh          $zero, 0x0($s1)
    MEM_H(0X0, ctx->r17) = 0;
    // 0x0045C1F4: jal         0x00412B14
    // 0x0045C1F8: nop

    func_00412B14(rdram, ctx);
        goto after_3;
    // 0x0045C1F8: nop

    after_3:
    // 0x0045C1FC: jal         0x00412438
    // 0x0045C200: addiu       $a0, $zero, 0x192
    ctx->r4 = ADD32(0, 0X192);
    func_00412438(rdram, ctx);
        goto after_4;
    // 0x0045C200: addiu       $a0, $zero, 0x192
    ctx->r4 = ADD32(0, 0X192);
    after_4:
L_0045C204:
    // 0x0045C204: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_0045C208:
    // 0x0045C208: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x0045C20C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x0045C210: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0045C214: jr          $ra
    // 0x0045C218: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x0045C218: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_00422608(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00422608: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x0042260C: lw          $v0, 0x960($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X960);
    // 0x00422610: beq         $v0, $zero, L_00422628
    if (ctx->r2 == 0) {
        // 0x00422614: nop
    
            goto L_00422628;
    }
    // 0x00422614: nop

    // 0x00422618: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0042261C: addiu       $v0, $v0, 0x4B84
    ctx->r2 = ADD32(ctx->r2, 0X4B84);
    // 0x00422620: j           L_00422654
    // 0x00422624: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_00422654;
    // 0x00422624: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_00422628:
    // 0x00422628: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x0042262C: lw          $v0, 0x9A8($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X9A8);
    // 0x00422630: beq         $v0, $zero, L_00422648
    if (ctx->r2 == 0) {
        // 0x00422634: nop
    
            goto L_00422648;
    }
    // 0x00422634: nop

    // 0x00422638: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0042263C: addiu       $v0, $v0, 0x4B94
    ctx->r2 = ADD32(ctx->r2, 0X4B94);
    // 0x00422640: j           L_00422654
    // 0x00422644: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_00422654;
    // 0x00422644: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_00422648:
    // 0x00422648: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0042264C: addiu       $v0, $v0, 0x4B8C
    ctx->r2 = ADD32(ctx->r2, 0X4B8C);
    // 0x00422650: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_00422654:
    // 0x00422654: jr          $ra
    // 0x00422658: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x00422658: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void func_00285E60(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00285E60: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x00285E64: lui         $a2, 0x800C
    ctx->r6 = S32(0X800C << 16);
    // 0x00285E68: lw          $a2, 0x2030($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X2030);
    // 0x00285E6C: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x00285E70: lw          $v0, 0x2034($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2034);
    // 0x00285E74: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x00285E78: sw          $s3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r19;
    // 0x00285E7C: lui         $s3, 0x800F
    ctx->r19 = S32(0X800F << 16);
    // 0x00285E80: lw          $s3, 0x7070($s3)
    ctx->r19 = MEM_W(ctx->r19, 0X7070);
    // 0x00285E84: addu        $a3, $a1, $zero
    ctx->r7 = ADD32(ctx->r5, 0);
    // 0x00285E88: sw          $ra, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r31;
    // 0x00285E8C: sw          $s7, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r23;
    // 0x00285E90: sw          $s6, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r22;
    // 0x00285E94: sw          $s5, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r21;
    // 0x00285E98: sw          $s4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r20;
    // 0x00285E9C: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x00285EA0: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x00285EA4: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x00285EA8: jal         0x0028852C
    // 0x00285EAC: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    func_0028852C(rdram, ctx);
        goto after_0;
    // 0x00285EAC: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    after_0:
    // 0x00285EB0: lui         $s4, 0xE300
    ctx->r20 = S32(0XE300 << 16);
    // 0x00285EB4: ori         $s4, $s4, 0xA01
    ctx->r20 = ctx->r20 | 0XA01;
    // 0x00285EB8: lui         $s7, 0xFCFF
    ctx->r23 = S32(0XFCFF << 16);
    // 0x00285EBC: ori         $s7, $s7, 0xFFFF
    ctx->r23 = ctx->r23 | 0XFFFF;
    // 0x00285EC0: lui         $s6, 0xFFFE
    ctx->r22 = S32(0XFFFE << 16);
    // 0x00285EC4: ori         $s6, $s6, 0x793C
    ctx->r22 = ctx->r22 | 0X793C;
    // 0x00285EC8: lui         $s5, 0xE200
    ctx->r21 = S32(0XE200 << 16);
    // 0x00285ECC: ori         $s5, $s5, 0x1C
    ctx->r21 = ctx->r21 | 0X1C;
    // 0x00285ED0: lui         $t8, 0x1
    ctx->r24 = S32(0X1 << 16);
    // 0x00285ED4: ori         $t8, $t8, 0x1
    ctx->r24 = ctx->r24 | 0X1;
    // 0x00285ED8: addiu       $a0, $zero, 0x386
    ctx->r4 = ADD32(0, 0X386);
    // 0x00285EDC: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x00285EE0: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    // 0x00285EE4: lui         $t2, 0x800E
    ctx->r10 = S32(0X800E << 16);
    // 0x00285EE8: addiu       $t2, $t2, -0x71DC
    ctx->r10 = ADD32(ctx->r10, -0X71DC);
    // 0x00285EEC: addiu       $a3, $sp, 0x24
    ctx->r7 = ADD32(ctx->r29, 0X24);
    // 0x00285EF0: lw          $t0, 0x0($t2)
    ctx->r8 = MEM_W(ctx->r10, 0X0);
    // 0x00285EF4: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00285EF8: lwc1        $f2, -0x62F4($at)
    ctx->f2.u32l = MEM_W(ctx->r1, -0X62F4);
    // 0x00285EFC: lui         $v0, 0xED00
    ctx->r2 = S32(0XED00 << 16);
    // 0x00285F00: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x00285F04: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x00285F08: addu        $t5, $t0, $zero
    ctx->r13 = ADD32(ctx->r8, 0);
    // 0x00285F0C: addiu       $t0, $t0, 0x8
    ctx->r8 = ADD32(ctx->r8, 0X8);
    // 0x00285F10: addiu       $s0, $t0, 0x8
    ctx->r16 = ADD32(ctx->r8, 0X8);
    // 0x00285F14: addiu       $s1, $t0, 0x10
    ctx->r17 = ADD32(ctx->r8, 0X10);
    // 0x00285F18: addiu       $t7, $t0, 0x18
    ctx->r15 = ADD32(ctx->r8, 0X18);
    // 0x00285F1C: sw          $t0, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r8;
    // 0x00285F20: sw          $v0, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r2;
    // 0x00285F24: sw          $s0, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r16;
    // 0x00285F28: sw          $s1, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r17;
    // 0x00285F2C: lui         $t4, 0x800C
    ctx->r12 = S32(0X800C << 16);
    // 0x00285F30: lw          $t4, 0x2030($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X2030);
    // 0x00285F34: addiu       $t6, $t0, 0x20
    ctx->r14 = ADD32(ctx->r8, 0X20);
    // 0x00285F38: sw          $t7, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r15;
    // 0x00285F3C: lui         $t1, 0x800C
    ctx->r9 = S32(0X800C << 16);
    // 0x00285F40: lw          $t1, 0x2034($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X2034);
    // 0x00285F44: addiu       $s2, $t0, 0x28
    ctx->r18 = ADD32(ctx->r8, 0X28);
    // 0x00285F48: sw          $t6, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r14;
    // 0x00285F4C: sw          $s2, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r18;
    // 0x00285F50: addiu       $t3, $t4, -0x1
    ctx->r11 = ADD32(ctx->r12, -0X1);
    // 0x00285F54: mtc1        $t3, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r11;
    // 0x00285F58: cvt.s.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.fl = CVT_S_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x00285F5C: addiu       $v0, $t1, -0x1
    ctx->r2 = ADD32(ctx->r9, -0X1);
    // 0x00285F60: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x00285F64: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00285F68: mul.s       $f1, $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f2.fl);
    // 0x00285F6C: andi        $t3, $t3, 0xFFF
    ctx->r11 = ctx->r11 & 0XFFF;
    // 0x00285F70: andi        $t4, $t4, 0x3FF
    ctx->r12 = ctx->r12 & 0X3FF;
    // 0x00285F74: sll         $t4, $t4, 14
    ctx->r12 = S32(ctx->r12 << 14);
    // 0x00285F78: andi        $t1, $t1, 0x3FF
    ctx->r9 = ctx->r9 & 0X3FF;
    // 0x00285F7C: mul.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f2.fl);
    // 0x00285F80: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x00285F84: trunc.w.s   $f3, $f1
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 1);
    ctx->f_odd[(3 - 1) * 2] = TRUNC_W_S(ctx->f1.fl);
    // 0x00285F88: mfc1        $v0, $f3
    ctx->r2 = (int32_t)ctx->f_odd[(3 - 1) * 2];
    // 0x00285F8C: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x00285F90: sll         $v0, $v0, 12
    ctx->r2 = S32(ctx->r2 << 12);
    // 0x00285F94: trunc.w.s   $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(3 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x00285F98: mfc1        $v1, $f3
    ctx->r3 = (int32_t)ctx->f_odd[(3 - 1) * 2];
    // 0x00285F9C: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x00285FA0: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x00285FA4: sw          $v0, 0x4($t5)
    MEM_W(0X4, ctx->r13) = ctx->r2;
    // 0x00285FA8: lui         $v0, 0xFF10
    ctx->r2 = S32(0XFF10 << 16);
    // 0x00285FAC: or          $t3, $t3, $v0
    ctx->r11 = ctx->r11 | ctx->r2;
    // 0x00285FB0: sw          $t3, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r11;
    // 0x00285FB4: lw          $v1, 0x110($s3)
    ctx->r3 = MEM_W(ctx->r19, 0X110);
    // 0x00285FB8: addiu       $v0, $t0, 0x30
    ctx->r2 = ADD32(ctx->r8, 0X30);
    // 0x00285FBC: sw          $v0, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r2;
    // 0x00285FC0: lui         $v0, 0x30
    ctx->r2 = S32(0X30 << 16);
    // 0x00285FC4: sw          $s4, 0x8($t0)
    MEM_W(0X8, ctx->r8) = ctx->r20;
    // 0x00285FC8: sw          $v1, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r3;
    // 0x00285FCC: sw          $v0, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r2;
    // 0x00285FD0: lui         $v0, 0xF700
    ctx->r2 = S32(0XF700 << 16);
    // 0x00285FD4: sw          $s7, 0x10($t0)
    MEM_W(0X10, ctx->r8) = ctx->r23;
    // 0x00285FD8: sw          $s6, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->r22;
    // 0x00285FDC: sw          $s5, 0x18($t0)
    MEM_W(0X18, ctx->r8) = ctx->r21;
    // 0x00285FE0: sw          $zero, 0x4($t7)
    MEM_W(0X4, ctx->r15) = 0;
    // 0x00285FE4: sw          $v0, 0x20($t0)
    MEM_W(0X20, ctx->r8) = ctx->r2;
    // 0x00285FE8: lui         $v0, 0xF600
    ctx->r2 = S32(0XF600 << 16);
    // 0x00285FEC: or          $t1, $t1, $v0
    ctx->r9 = ctx->r9 | ctx->r2;
    // 0x00285FF0: or          $t4, $t4, $t1
    ctx->r12 = ctx->r12 | ctx->r9;
    // 0x00285FF4: sw          $t8, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r24;
    // 0x00285FF8: sw          $t4, 0x28($t0)
    MEM_W(0X28, ctx->r8) = ctx->r12;
    // 0x00285FFC: jal         0x0027AEA8
    // 0x00286000: sw          $zero, 0x4($s2)
    MEM_W(0X4, ctx->r18) = 0;
    func_0027AEA8(rdram, ctx);
        goto after_1;
    // 0x00286000: sw          $zero, 0x4($s2)
    MEM_W(0X4, ctx->r18) = 0;
    after_1:
    // 0x00286004: lw          $v0, 0x20($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X20);
    // 0x00286008: beq         $v0, $zero, L_00286078
    if (ctx->r2 == 0) {
        // 0x0028600C: nop
    
            goto L_00286078;
    }
    // 0x0028600C: nop

    // 0x00286010: lw          $v0, 0x24($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X24);
    // 0x00286014: beq         $v0, $zero, L_00286078
    if (ctx->r2 == 0) {
        // 0x00286018: nop
    
            goto L_00286078;
    }
    // 0x00286018: nop

    // 0x0028601C: jal         0x00279028
    // 0x00286020: addiu       $a0, $zero, 0xFF
    ctx->r4 = ADD32(0, 0XFF);
    func_00279028(rdram, ctx);
        goto after_2;
    // 0x00286020: addiu       $a0, $zero, 0xFF
    ctx->r4 = ADD32(0, 0XFF);
    after_2:
    // 0x00286024: addiu       $a0, $zero, 0x386
    ctx->r4 = ADD32(0, 0X386);
    // 0x00286028: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x0028602C: addu        $a2, $a1, $zero
    ctx->r6 = ADD32(ctx->r5, 0);
    // 0x00286030: addu        $a3, $a1, $zero
    ctx->r7 = ADD32(ctx->r5, 0);
    // 0x00286034: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00286038: lwc1        $f0, 0x2030($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X2030);
    // 0x0028603C: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00286040: lwc1        $f1, 0x20($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x00286044: cvt.s.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.fl = CVT_S_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x00286048: div.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = DIV_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0028604C: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    // 0x00286050: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00286054: lwc1        $f0, 0x2034($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X2034);
    // 0x00286058: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x0028605C: lwc1        $f1, 0x24($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X24);
    // 0x00286060: cvt.s.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.fl = CVT_S_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x00286064: div.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = DIV_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00286068: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0028606C: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    // 0x00286070: jal         0x0027B320
    // 0x00286074: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    func_0027B320(rdram, ctx);
        goto after_3;
    // 0x00286074: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_3:
L_00286078:
    // 0x00286078: lw          $ra, 0x48($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X48);
    // 0x0028607C: lw          $s7, 0x44($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X44);
    // 0x00286080: lw          $s6, 0x40($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X40);
    // 0x00286084: lw          $s5, 0x3C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X3C);
    // 0x00286088: lw          $s4, 0x38($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X38);
    // 0x0028608C: lw          $s3, 0x34($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X34);
    // 0x00286090: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x00286094: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x00286098: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x0028609C: jr          $ra
    // 0x002860A0: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x002860A0: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_002060D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002060D8: jr          $ra
    // 0x002060DC: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x002060DC: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void func_00403240(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00403240: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00403244: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x00403248: addiu       $a0, $a0, 0x7078
    ctx->r4 = ADD32(ctx->r4, 0X7078);
    // 0x0040324C: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x00403250: jal         0x00225D0C
    // 0x00403254: nop

    func_00225D0C(rdram, ctx);
        goto after_0;
    // 0x00403254: nop

    after_0:
    // 0x00403258: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x0040325C: jr          $ra
    // 0x00403260: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00403260: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0028E53C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0028E53C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x0028E540: lui         $a3, 0x8000
    ctx->r7 = S32(0X8000 << 16);
    // 0x0028E544: addu        $a1, $a2, $zero
    ctx->r5 = ADD32(ctx->r6, 0);
    // 0x0028E548: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x0028E54C: addiu       $a0, $a0, 0xFCC
    ctx->r4 = ADD32(ctx->r4, 0XFCC);
L_0028E550:
    // 0x0028E550: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x0028E554: sltu        $v0, $a2, $v1
    ctx->r2 = ctx->r6 < ctx->r3 ? 1 : 0;
    // 0x0028E558: bnel        $v0, $zero, L_0028E560
    if (ctx->r2 != 0) {
        // 0x0028E55C: addu        $a2, $v1, $zero
        ctx->r6 = ADD32(ctx->r3, 0);
            goto L_0028E560;
    }
    goto skip_0;
    // 0x0028E55C: addu        $a2, $v1, $zero
    ctx->r6 = ADD32(ctx->r3, 0);
    skip_0:
L_0028E560:
    // 0x0028E560: sltu        $v0, $v1, $a3
    ctx->r2 = ctx->r3 < ctx->r7 ? 1 : 0;
    // 0x0028E564: bnel        $v0, $zero, L_0028E56C
    if (ctx->r2 != 0) {
        // 0x0028E568: addu        $a3, $v1, $zero
        ctx->r7 = ADD32(ctx->r3, 0);
            goto L_0028E56C;
    }
    goto skip_1;
    // 0x0028E568: addu        $a3, $v1, $zero
    ctx->r7 = ADD32(ctx->r3, 0);
    skip_1:
L_0028E56C:
    // 0x0028E56C: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
    // 0x0028E570: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
    // 0x0028E574: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x0028E578: slti        $v0, $a1, 0x18
    ctx->r2 = SIGNED(ctx->r5) < 0X18 ? 1 : 0;
    // 0x0028E57C: bne         $v0, $zero, L_0028E550
    if (ctx->r2 != 0) {
        // 0x0028E580: addiu       $a0, $a0, 0x10
        ctx->r4 = ADD32(ctx->r4, 0X10);
            goto L_0028E550;
    }
    // 0x0028E580: addiu       $a0, $a0, 0x10
    ctx->r4 = ADD32(ctx->r4, 0X10);
    // 0x0028E584: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x0028E588: addiu       $v1, $v1, 0x1378
    ctx->r3 = ADD32(ctx->r3, 0X1378);
    // 0x0028E58C: beq         $v1, $zero, L_0028E5A8
    if (ctx->r3 == 0) {
        // 0x0028E590: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_0028E5A8;
    }
    // 0x0028E590: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
L_0028E594:
    // 0x0028E594: lhu         $v0, 0x6($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X6);
    // 0x0028E598: lw          $v1, 0x0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X0);
    // 0x0028E59C: sll         $v0, $v0, 12
    ctx->r2 = S32(ctx->r2 << 12);
    // 0x0028E5A0: bne         $v1, $zero, L_0028E594
    if (ctx->r3 != 0) {
        // 0x0028E5A4: addu        $a0, $a0, $v0
        ctx->r4 = ADD32(ctx->r4, ctx->r2);
            goto L_0028E594;
    }
    // 0x0028E5A4: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
L_0028E5A8:
    // 0x0028E5A8: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x0028E5AC: lw          $v0, 0x1290($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1290);
    // 0x0028E5B0: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x0028E5B4: addiu       $v1, $v1, 0x6BC
    ctx->r3 = ADD32(ctx->r3, 0X6BC);
    // 0x0028E5B8: sw          $a0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r4;
    // 0x0028E5BC: sw          $a2, -0xC($v1)
    MEM_W(-0XC, ctx->r3) = ctx->r6;
    // 0x0028E5C0: sw          $a3, -0x8($v1)
    MEM_W(-0X8, ctx->r3) = ctx->r7;
    // 0x0028E5C4: lw          $v0, 0xC($v0)
    ctx->r2 = MEM_W(ctx->r2, 0XC);
    // 0x0028E5C8: jr          $ra
    // 0x0028E5CC: sw          $v0, -0x4($v1)
    MEM_W(-0X4, ctx->r3) = ctx->r2;
    return;
    // 0x0028E5CC: sw          $v0, -0x4($v1)
    MEM_W(-0X4, ctx->r3) = ctx->r2;
;}
RECOMP_FUNC void func_00450DD4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00450DD4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00450DD8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00450DDC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x00450DE0: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00450DE4: addiu       $v0, $v0, 0x42D8
    ctx->r2 = ADD32(ctx->r2, 0X42D8);
    // 0x00450DE8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x00450DEC: jal         0x004160F0
    // 0x00450DF0: sw          $v0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r2;
    func_004160F0(rdram, ctx);
        goto after_0;
    // 0x00450DF0: sw          $v0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r2;
    after_0:
    // 0x00450DF4: addiu       $v0, $v0, -0x4
    ctx->r2 = ADD32(ctx->r2, -0X4);
    // 0x00450DF8: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x00450DFC: addiu       $a1, $a1, 0xE70
    ctx->r5 = ADD32(ctx->r5, 0XE70);
    // 0x00450E00: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x00450E04: lui         $a2, 0x8012
    ctx->r6 = S32(0X8012 << 16);
    // 0x00450E08: lw          $a2, -0x5324($a2)
    ctx->r6 = MEM_W(ctx->r6, -0X5324);
    // 0x00450E0C: jal         0x0029E3E0
    // 0x00450E10: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    func_0029E3E0(rdram, ctx);
        goto after_1;
    // 0x00450E10: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    after_1:
    // 0x00450E14: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x00450E18: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00450E1C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x00450E20: jr          $ra
    // 0x00450E24: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00450E24: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00297AE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00297AE0: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x00297AE4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x00297AE8: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00297AEC: lwc1        $f0, -0x5840($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X5840);
    // 0x00297AF0: addu        $t1, $sp, $zero
    ctx->r9 = ADD32(ctx->r29, 0);
    // 0x00297AF4: addu        $t0, $sp, $zero
    ctx->r8 = ADD32(ctx->r29, 0);
L_00297AF8:
    // 0x00297AF8: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
    // 0x00297AFC: addu        $a3, $t1, $zero
    ctx->r7 = ADD32(ctx->r9, 0);
    // 0x00297B00: addu        $a1, $t0, $zero
    ctx->r5 = ADD32(ctx->r8, 0);
L_00297B04:
    // 0x00297B04: bnel        $a2, $v1, L_00297B10
    if (ctx->r6 != ctx->r3) {
        // 0x00297B08: sw          $zero, 0x0($a1)
        MEM_W(0X0, ctx->r5) = 0;
            goto L_00297B10;
    }
    goto skip_0;
    // 0x00297B08: sw          $zero, 0x0($a1)
    MEM_W(0X0, ctx->r5) = 0;
    skip_0:
    // 0x00297B0C: swc1        $f0, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->f0.u32l;
L_00297B10:
    // 0x00297B10: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x00297B14: slti        $v0, $v1, 0x4
    ctx->r2 = SIGNED(ctx->r3) < 0X4 ? 1 : 0;
    // 0x00297B18: bne         $v0, $zero, L_00297B04
    if (ctx->r2 != 0) {
        // 0x00297B1C: addiu       $a1, $a1, 0x4
        ctx->r5 = ADD32(ctx->r5, 0X4);
            goto L_00297B04;
    }
    // 0x00297B1C: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
    // 0x00297B20: addiu       $t1, $t1, 0x14
    ctx->r9 = ADD32(ctx->r9, 0X14);
    // 0x00297B24: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x00297B28: slti        $v0, $a2, 0x4
    ctx->r2 = SIGNED(ctx->r6) < 0X4 ? 1 : 0;
    // 0x00297B2C: bne         $v0, $zero, L_00297AF8
    if (ctx->r2 != 0) {
        // 0x00297B30: addiu       $t0, $t0, 0x10
        ctx->r8 = ADD32(ctx->r8, 0X10);
            goto L_00297AF8;
    }
    // 0x00297B30: addiu       $t0, $t0, 0x10
    ctx->r8 = ADD32(ctx->r8, 0X10);
    // 0x00297B34: addu        $t0, $a0, $zero
    ctx->r8 = ADD32(ctx->r4, 0);
    // 0x00297B38: addiu       $t1, $t0, 0x20
    ctx->r9 = ADD32(ctx->r8, 0X20);
    // 0x00297B3C: addu        $t3, $zero, $zero
    ctx->r11 = ADD32(0, 0);
    // 0x00297B40: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00297B44: lwc1        $f2, -0x583C($at)
    ctx->f2.u32l = MEM_W(ctx->r1, -0X583C);
    // 0x00297B48: lui         $t4, 0xFFFF
    ctx->r12 = S32(0XFFFF << 16);
    // 0x00297B4C: addu        $t2, $sp, $zero
    ctx->r10 = ADD32(ctx->r29, 0);
L_00297B50:
    // 0x00297B50: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x00297B54: addu        $a2, $t2, $zero
    ctx->r6 = ADD32(ctx->r10, 0);
L_00297B58:
    // 0x00297B58: lwc1        $f1, 0x0($a2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r6, 0X0);
    // 0x00297B5C: mul.s       $f1, $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f2.fl);
    // 0x00297B60: lwc1        $f0, 0x4($a2)
    ctx->f0.u32l = MEM_W(ctx->r6, 0X4);
    // 0x00297B64: mul.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f2.fl);
    // 0x00297B68: addiu       $a2, $a2, 0x8
    ctx->r6 = ADD32(ctx->r6, 0X8);
    // 0x00297B6C: addiu       $a3, $a3, 0x1
    ctx->r7 = ADD32(ctx->r7, 0X1);
    // 0x00297B70: trunc.w.s   $f3, $f1
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 1);
    ctx->f_odd[(3 - 1) * 2] = TRUNC_W_S(ctx->f1.fl);
    // 0x00297B74: mfc1        $a0, $f3
    ctx->r4 = (int32_t)ctx->f_odd[(3 - 1) * 2];
    // 0x00297B78: trunc.w.s   $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(3 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x00297B7C: mfc1        $a1, $f3
    ctx->r5 = (int32_t)ctx->f_odd[(3 - 1) * 2];
    // 0x00297B80: and         $v0, $a0, $t4
    ctx->r2 = ctx->r4 & ctx->r12;
    // 0x00297B84: srl         $v1, $a1, 16
    ctx->r3 = S32(U32(ctx->r5) >> 16);
    // 0x00297B88: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x00297B8C: sw          $v0, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r2;
    // 0x00297B90: addiu       $t0, $t0, 0x4
    ctx->r8 = ADD32(ctx->r8, 0X4);
    // 0x00297B94: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x00297B98: and         $a0, $a0, $t4
    ctx->r4 = ctx->r4 & ctx->r12;
    // 0x00297B9C: andi        $a1, $a1, 0xFFFF
    ctx->r5 = ctx->r5 & 0XFFFF;
    // 0x00297BA0: or          $a0, $a0, $a1
    ctx->r4 = ctx->r4 | ctx->r5;
    // 0x00297BA4: sw          $a0, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r4;
    // 0x00297BA8: slti        $v0, $a3, 0x2
    ctx->r2 = SIGNED(ctx->r7) < 0X2 ? 1 : 0;
    // 0x00297BAC: bne         $v0, $zero, L_00297B58
    if (ctx->r2 != 0) {
        // 0x00297BB0: addiu       $t1, $t1, 0x4
        ctx->r9 = ADD32(ctx->r9, 0X4);
            goto L_00297B58;
    }
    // 0x00297BB0: addiu       $t1, $t1, 0x4
    ctx->r9 = ADD32(ctx->r9, 0X4);
    // 0x00297BB4: addiu       $t3, $t3, 0x1
    ctx->r11 = ADD32(ctx->r11, 0X1);
    // 0x00297BB8: slti        $v0, $t3, 0x4
    ctx->r2 = SIGNED(ctx->r11) < 0X4 ? 1 : 0;
    // 0x00297BBC: bne         $v0, $zero, L_00297B50
    if (ctx->r2 != 0) {
        // 0x00297BC0: addiu       $t2, $t2, 0x10
        ctx->r10 = ADD32(ctx->r10, 0X10);
            goto L_00297B50;
    }
    // 0x00297BC0: addiu       $t2, $t2, 0x10
    ctx->r10 = ADD32(ctx->r10, 0X10);
    // 0x00297BC4: jr          $ra
    // 0x00297BC8: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x00297BC8: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_002532A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002532A8: lw          $v0, 0x20($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X20);
    // 0x002532AC: jr          $ra
    // 0x002532B0: nop

    return;
    // 0x002532B0: nop

;}
RECOMP_FUNC void func_00258370(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00258370: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x00258374: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x00258378: addu        $s3, $a0, $zero
    ctx->r19 = ADD32(ctx->r4, 0);
    // 0x0025837C: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x00258380: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x00258384: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x00258388: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x0025838C: lw          $s0, 0x1A8($s3)
    ctx->r16 = MEM_W(ctx->r19, 0X1A8);
    // 0x00258390: addu        $s2, $a1, $zero
    ctx->r18 = ADD32(ctx->r5, 0);
    // 0x00258394: lw          $v1, 0x51C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X51C);
    // 0x00258398: lw          $v0, 0xA64($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XA64);
    // 0x0025839C: andi        $v0, $v0, 0x2000
    ctx->r2 = ctx->r2 & 0X2000;
    // 0x002583A0: beq         $v0, $zero, L_002583C8
    if (ctx->r2 == 0) {
        // 0x002583A4: addiu       $s1, $v1, 0x114
        ctx->r17 = ADD32(ctx->r3, 0X114);
            goto L_002583C8;
    }
    // 0x002583A4: addiu       $s1, $v1, 0x114
    ctx->r17 = ADD32(ctx->r3, 0X114);
    // 0x002583A8: lw          $v0, 0x1284($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X1284);
    // 0x002583AC: bne         $v0, $zero, L_002583CC
    if (ctx->r2 != 0) {
        // 0x002583B0: addu        $a0, $s3, $zero
        ctx->r4 = ADD32(ctx->r19, 0);
            goto L_002583CC;
    }
    // 0x002583B0: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x002583B4: lh          $a1, 0x996($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X996);
    // 0x002583B8: jal         0x0024E700
    // 0x002583BC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_0024E700(rdram, ctx);
        goto after_0;
    // 0x002583BC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x002583C0: bne         $v0, $zero, L_00258438
    if (ctx->r2 != 0) {
        // 0x002583C4: nop
    
            goto L_00258438;
    }
    // 0x002583C4: nop

L_002583C8:
    // 0x002583C8: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
L_002583CC:
    // 0x002583CC: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x002583D0: jal         0x00243414
    // 0x002583D4: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_00243414(rdram, ctx);
        goto after_1;
    // 0x002583D4: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_1:
    // 0x002583D8: lw          $v0, 0x128C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X128C);
    // 0x002583DC: beq         $v0, $zero, L_00258400
    if (ctx->r2 == 0) {
        // 0x002583E0: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_00258400;
    }
    // 0x002583E0: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x002583E4: sw          $s1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r17;
    // 0x002583E8: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x002583EC: lw          $a1, 0x0($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X0);
    // 0x002583F0: lw          $a2, 0x4($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X4);
    // 0x002583F4: lw          $a3, 0x8($s1)
    ctx->r7 = MEM_W(ctx->r17, 0X8);
    // 0x002583F8: jal         0x00275544
    // 0x002583FC: addiu       $a0, $zero, 0x1B5
    ctx->r4 = ADD32(0, 0X1B5);
    func_00275544(rdram, ctx);
        goto after_2;
    // 0x002583FC: addiu       $a0, $zero, 0x1B5
    ctx->r4 = ADD32(0, 0X1B5);
    after_2:
L_00258400:
    // 0x00258400: jal         0x00253F40
    // 0x00258404: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00253F40(rdram, ctx);
        goto after_3;
    // 0x00258404: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x00258408: jal         0x00253E68
    // 0x0025840C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00253E68(rdram, ctx);
        goto after_4;
    // 0x0025840C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
    // 0x00258410: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x00258414: sw          $s1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r17;
    // 0x00258418: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x0025841C: lw          $a1, 0x0($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X0);
    // 0x00258420: lw          $a2, 0x4($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X4);
    // 0x00258424: lw          $a3, 0x8($s1)
    ctx->r7 = MEM_W(ctx->r17, 0X8);
    // 0x00258428: jal         0x00275544
    // 0x0025842C: addiu       $a0, $zero, 0x1A6
    ctx->r4 = ADD32(0, 0X1A6);
    func_00275544(rdram, ctx);
        goto after_5;
    // 0x0025842C: addiu       $a0, $zero, 0x1A6
    ctx->r4 = ADD32(0, 0X1A6);
    after_5:
    // 0x00258430: j           L_002584C0
    // 0x00258434: nop

        goto L_002584C0;
    // 0x00258434: nop

L_00258438:
    // 0x00258438: lui         $a1, 0x3EB2
    ctx->r5 = S32(0X3EB2 << 16);
    // 0x0025843C: ori         $a1, $a1, 0xB8C4
    ctx->r5 = ctx->r5 | 0XB8C4;
    // 0x00258440: lui         $a2, 0x3E4C
    ctx->r6 = S32(0X3E4C << 16);
    // 0x00258444: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x00258448: jal         0x002117DC
    // 0x0025844C: addiu       $a0, $s2, 0x110
    ctx->r4 = ADD32(ctx->r18, 0X110);
    func_002117DC(rdram, ctx);
        goto after_6;
    // 0x0025844C: addiu       $a0, $s2, 0x110
    ctx->r4 = ADD32(ctx->r18, 0X110);
    after_6:
    // 0x00258450: lwc1        $f1, 0x110($s2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r18, 0X110);
    // 0x00258454: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00258458: lwc1        $f0, 0x7278($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X7278);
    // 0x0025845C: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x00258460: nop

    // 0x00258464: bc1t        L_002584C0
    if (c1cs) {
        // 0x00258468: nop
    
            goto L_002584C0;
    }
    // 0x00258468: nop

    // 0x0025846C: lw          $v0, 0x128C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X128C);
    // 0x00258470: bne         $v0, $zero, L_00258480
    if (ctx->r2 != 0) {
        // 0x00258474: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_00258480;
    }
    // 0x00258474: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00258478: jal         0x00253EB8
    // 0x0025847C: addiu       $a1, $zero, 0x1A7
    ctx->r5 = ADD32(0, 0X1A7);
    func_00253EB8(rdram, ctx);
        goto after_7;
    // 0x0025847C: addiu       $a1, $zero, 0x1A7
    ctx->r5 = ADD32(0, 0X1A7);
    after_7:
L_00258480:
    // 0x00258480: lwc1        $f0, 0x64($s2)
    ctx->f0.u32l = MEM_W(ctx->r18, 0X64);
    // 0x00258484: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00258488: lwc1        $f1, 0x6D28($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X6D28);
    // 0x0025848C: sub.s       $f1, $f0, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x00258490: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x00258494: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x00258498: nop

    // 0x0025849C: bc1f        L_002584C0
    if (!c1cs) {
        // 0x002584A0: swc1        $f1, 0x64($s2)
        MEM_W(0X64, ctx->r18) = ctx->f_odd[(1 - 1) * 2];
            goto L_002584C0;
    }
    // 0x002584A0: swc1        $f1, 0x64($s2)
    MEM_W(0X64, ctx->r18) = ctx->f_odd[(1 - 1) * 2];
    // 0x002584A4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002584A8: lwc1        $f0, 0x727C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X727C);
    // 0x002584AC: add.s       $f0, $f1, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x002584B0: swc1        $f0, 0x64($s2)
    MEM_W(0X64, ctx->r18) = ctx->f0.u32l;
    // 0x002584B4: lw          $a0, 0x1A8($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X1A8);
    // 0x002584B8: jal         0x00248720
    // 0x002584BC: addiu       $a1, $zero, 0x1A
    ctx->r5 = ADD32(0, 0X1A);
    func_00248720(rdram, ctx);
        goto after_8;
    // 0x002584BC: addiu       $a1, $zero, 0x1A
    ctx->r5 = ADD32(0, 0X1A);
    after_8:
L_002584C0:
    // 0x002584C0: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x002584C4: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x002584C8: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x002584CC: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x002584D0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x002584D4: jr          $ra
    // 0x002584D8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x002584D8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_0026841C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0026841C: lbu         $v1, 0x0($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X0);
    // 0x00268420: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00268424: bne         $v1, $v0, L_00268438
    if (ctx->r3 != ctx->r2) {
            // 0x00268428: nop

    func_00268438(rdram, ctx);
    return;
    }
    // 0x00268428: nop

    // 0x0026842C: lwc1        $f0, 0x54($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X54);
    // 0x00268430: jr          $ra
    // 0x00268434: nop

    return;
    // 0x00268434: nop

;}
RECOMP_FUNC void func_00453FA8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00453FA8: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x00453FAC: addiu       $v1, $v1, -0x5528
    ctx->r3 = ADD32(ctx->r3, -0X5528);
    // 0x00453FB0: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x00453FB4: xor         $v0, $v0, $a1
    ctx->r2 = ctx->r2 ^ ctx->r5;
    // 0x00453FB8: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x00453FBC: jr          $ra
    // 0x00453FC0: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x00453FC0: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void func_004303AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004303AC: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x004303B0: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x004303B4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x004303B8: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x004303BC: addiu       $s1, $zero, -0x1
    ctx->r17 = ADD32(0, -0X1);
    // 0x004303C0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x004303C4: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x004303C8: addiu       $a0, $a0, 0x7078
    ctx->r4 = ADD32(ctx->r4, 0X7078);
    // 0x004303CC: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x004303D0: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    // 0x004303D4: addiu       $a3, $sp, 0x18
    ctx->r7 = ADD32(ctx->r29, 0X18);
    // 0x004303D8: sw          $ra, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r31;
    // 0x004303DC: jal         0x0042C194
    // 0x004303E0: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    func_0042C194(rdram, ctx);
        goto after_0;
    // 0x004303E0: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    after_0:
    // 0x004303E4: beql        $v0, $zero, L_004303EC
    if (ctx->r2 == 0) {
        // 0x004303E8: addu        $s1, $zero, $zero
        ctx->r17 = ADD32(0, 0);
            goto L_004303EC;
    }
    goto skip_0;
    // 0x004303E8: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    skip_0:
L_004303EC:
    // 0x004303EC: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x004303F0: addiu       $v0, $v0, -0x5350
    ctx->r2 = ADD32(ctx->r2, -0X5350);
    // 0x004303F4: sw          $zero, 0x0($v0)
    MEM_W(0X0, ctx->r2) = 0;
    // 0x004303F8: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x004303FC: sw          $zero, 0x8($v0)
    MEM_W(0X8, ctx->r2) = 0;
    // 0x00430400: sw          $zero, 0xC($v0)
    MEM_W(0XC, ctx->r2) = 0;
    // 0x00430404: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x00430408: addu        $at, $s0, $at
    ctx->r1 = ADD32(ctx->r16, ctx->r1);
    // 0x0043040C: sw          $zero, 0x3FFC($at)
    MEM_W(0X3FFC, ctx->r1) = 0;
    // 0x00430410: sw          $zero, 0x44($v0)
    MEM_W(0X44, ctx->r2) = 0;
    // 0x00430414: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x00430418: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x0043041C: addu        $at, $s0, $at
    ctx->r1 = ADD32(ctx->r16, ctx->r1);
    // 0x00430420: sb          $v0, 0x3FE1($at)
    MEM_B(0X3FE1, ctx->r1) = ctx->r2;
    // 0x00430424: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
    // 0x00430428: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x0043042C: addu        $at, $s0, $at
    ctx->r1 = ADD32(ctx->r16, ctx->r1);
    // 0x00430430: sw          $s1, 0x3FF8($at)
    MEM_W(0X3FF8, ctx->r1) = ctx->r17;
    // 0x00430434: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x00430438: addu        $at, $s0, $at
    ctx->r1 = ADD32(ctx->r16, ctx->r1);
    // 0x0043043C: sw          $v0, 0x3FDC($at)
    MEM_W(0X3FDC, ctx->r1) = ctx->r2;
    // 0x00430440: lw          $ra, 0x38($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X38);
    // 0x00430444: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x00430448: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x0043044C: jr          $ra
    // 0x00430450: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x00430450: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_002812AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002812AC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x002812B0: sw          $zero, 0xF4($a0)
    MEM_W(0XF4, ctx->r4) = 0;
    // 0x002812B4: jr          $ra
    // 0x002812B8: sw          $v0, 0xF0($a0)
    MEM_W(0XF0, ctx->r4) = ctx->r2;
    return;
    // 0x002812B8: sw          $v0, 0xF0($a0)
    MEM_W(0XF0, ctx->r4) = ctx->r2;
;}
RECOMP_FUNC void func_002C23D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
;}
RECOMP_FUNC void func_0028A914(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0028A914: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x0028A918: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x0028A91C: addu        $s3, $a0, $zero
    ctx->r19 = ADD32(ctx->r4, 0);
    // 0x0028A920: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x0028A924: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x0028A928: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x0028A92C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x0028A930: lw          $s2, 0x2F8($s3)
    ctx->r18 = MEM_W(ctx->r19, 0X2F8);
    // 0x0028A934: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x0028A938: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x0028A93C: lw          $v0, 0x4($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X4);
    // 0x0028A940: addiu       $v1, $zero, -0x2
    ctx->r3 = ADD32(0, -0X2);
    // 0x0028A944: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x0028A948: lw          $v1, 0x10($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X10);
    // 0x0028A94C: sw          $v0, 0x4($s2)
    MEM_W(0X4, ctx->r18) = ctx->r2;
    // 0x0028A950: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0028A954: bne         $v1, $v0, L_0028AB78
    if (ctx->r3 != ctx->r2) {
        // 0x0028A958: addu        $a0, $s3, $zero
        ctx->r4 = ADD32(ctx->r19, 0);
            goto L_0028AB78;
    }
    // 0x0028A958: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x0028A95C: lw          $v0, 0x8($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X8);
    // 0x0028A960: andi        $v0, $v0, 0x20
    ctx->r2 = ctx->r2 & 0X20;
    // 0x0028A964: beql        $v0, $zero, L_0028AA30
    if (ctx->r2 == 0) {
        // 0x0028A968: sw          $zero, 0x2F8($s3)
        MEM_W(0X2F8, ctx->r19) = 0;
            goto L_0028AA30;
    }
    goto skip_0;
    // 0x0028A968: sw          $zero, 0x2F8($s3)
    MEM_W(0X2F8, ctx->r19) = 0;
    skip_0:
    // 0x0028A96C: jal         0x0029B170
    // 0x0028A970: nop

    func_0029B170(rdram, ctx);
        goto after_0;
    // 0x0028A970: nop

    after_0:
    // 0x0028A974: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x0028A978: lw          $a0, -0xE98($a0)
    ctx->r4 = MEM_W(ctx->r4, -0XE98);
    // 0x0028A97C: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x0028A980: lw          $a1, -0xE94($a1)
    ctx->r5 = MEM_W(ctx->r5, -0XE94);
    // 0x0028A984: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x0028A988: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    // 0x0028A98C: sltu        $t0, $v1, $a1
    ctx->r8 = ctx->r3 < ctx->r5 ? 1 : 0;
    // 0x0028A990: subu        $a1, $v1, $a1
    ctx->r5 = SUB32(ctx->r3, ctx->r5);
    // 0x0028A994: subu        $a0, $v0, $a0
    ctx->r4 = SUB32(ctx->r2, ctx->r4);
    // 0x0028A998: subu        $a0, $a0, $t0
    ctx->r4 = SUB32(ctx->r4, ctx->r8);
    // 0x0028A99C: sll         $a0, $a0, 6
    ctx->r4 = S32(ctx->r4 << 6);
    // 0x0028A9A0: srl         $v0, $a1, 26
    ctx->r2 = S32(U32(ctx->r5) >> 26);
    // 0x0028A9A4: or          $a0, $a0, $v0
    ctx->r4 = ctx->r4 | ctx->r2;
    // 0x0028A9A8: jal         0x002A4650
    // 0x0028A9AC: sll         $a1, $a1, 6
    ctx->r5 = S32(ctx->r5 << 6);
    func_002A4650(rdram, ctx);
        goto after_1;
    // 0x0028A9AC: sll         $a1, $a1, 6
    ctx->r5 = S32(ctx->r5 << 6);
    after_1:
    // 0x0028A9B0: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x0028A9B4: addu        $s1, $v1, $zero
    ctx->r17 = ADD32(ctx->r3, 0);
    // 0x0028A9B8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0028A9BC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x0028A9C0: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x0028A9C4: jal         0x002A50E0
    // 0x0028A9C8: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_002A50E0(rdram, ctx);
        goto after_2;
    // 0x0028A9C8: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_2:
    // 0x0028A9CC: blez        $v0, L_0028A9E4
    if (SIGNED(ctx->r2) <= 0) {
        // 0x0028A9D0: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_0028A9E4;
    }
    // 0x0028A9D0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0028A9D4: jal         0x002A5130
    // 0x0028A9D8: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_002A5130(rdram, ctx);
        goto after_3;
    // 0x0028A9D8: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_3:
    // 0x0028A9DC: j           L_0028AA18
    // 0x0028A9E0: mov.s       $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    ctx->f1.fl = ctx->f0.fl;
        goto L_0028AA18;
    // 0x0028A9E0: mov.s       $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    ctx->f1.fl = ctx->f0.fl;
L_0028A9E4:
    // 0x0028A9E4: addiu       $a0, $zero, 0x0
    ctx->r4 = ADD32(0, 0X0);
    // 0x0028A9E8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x0028A9EC: and         $a0, $s0, $a0
    ctx->r4 = ctx->r16 & ctx->r4;
    // 0x0028A9F0: and         $a1, $s1, $a1
    ctx->r5 = ctx->r17 & ctx->r5;
    // 0x0028A9F4: srl         $v1, $s1, 1
    ctx->r3 = S32(U32(ctx->r17) >> 1);
    // 0x0028A9F8: sll         $a2, $s0, 31
    ctx->r6 = S32(ctx->r16 << 31);
    // 0x0028A9FC: or          $v1, $v1, $a2
    ctx->r3 = ctx->r3 | ctx->r6;
    // 0x0028AA00: srl         $v0, $s0, 1
    ctx->r2 = S32(U32(ctx->r16) >> 1);
    // 0x0028AA04: or          $a0, $a0, $v0
    ctx->r4 = ctx->r4 | ctx->r2;
    // 0x0028AA08: jal         0x002A5130
    // 0x0028AA0C: or          $a1, $a1, $v1
    ctx->r5 = ctx->r5 | ctx->r3;
    func_002A5130(rdram, ctx);
        goto after_4;
    // 0x0028AA0C: or          $a1, $a1, $v1
    ctx->r5 = ctx->r5 | ctx->r3;
    after_4:
    // 0x0028AA10: mov.s       $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    ctx->f1.fl = ctx->f0.fl;
    // 0x0028AA14: add.s       $f1, $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f1.fl;
L_0028AA18:
    // 0x0028AA18: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0028AA1C: lwc1        $f0, -0x61C0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X61C0);
    // 0x0028AA20: mul.s       $f0, $f1, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x0028AA24: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0028AA28: swc1        $f0, 0x6D44($at)
    MEM_W(0X6D44, ctx->r1) = ctx->f0.u32l;
    // 0x0028AA2C: sw          $zero, 0x2F8($s3)
    MEM_W(0X2F8, ctx->r19) = 0;
L_0028AA30:
    // 0x0028AA30: lw          $v0, 0x8($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X8);
    // 0x0028AA34: andi        $v0, $v0, 0x20
    ctx->r2 = ctx->r2 & 0X20;
    // 0x0028AA38: beq         $v0, $zero, L_0028AB78
    if (ctx->r2 == 0) {
        // 0x0028AA3C: addu        $a0, $s3, $zero
        ctx->r4 = ADD32(ctx->r19, 0);
            goto L_0028AB78;
    }
    // 0x0028AA3C: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x0028AA40: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x0028AA44: addiu       $a0, $a0, 0x6CB0
    ctx->r4 = ADD32(ctx->r4, 0X6CB0);
    // 0x0028AA48: lw          $v1, 0xC($s2)
    ctx->r3 = MEM_W(ctx->r18, 0XC);
    // 0x0028AA4C: lw          $v0, 0x110($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X110);
    // 0x0028AA50: beq         $v1, $v0, L_0028AA74
    if (ctx->r3 == ctx->r2) {
        // 0x0028AA54: addu        $s0, $a0, $zero
        ctx->r16 = ADD32(ctx->r4, 0);
            goto L_0028AA74;
    }
    // 0x0028AA54: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x0028AA58: lw          $v0, 0x250($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X250);
    // 0x0028AA5C: beq         $v1, $v0, L_0028AA74
    if (ctx->r3 == ctx->r2) {
        // 0x0028AA60: addiu       $s0, $a0, 0x140
        ctx->r16 = ADD32(ctx->r4, 0X140);
            goto L_0028AA74;
    }
    // 0x0028AA60: addiu       $s0, $a0, 0x140
    ctx->r16 = ADD32(ctx->r4, 0X140);
    // 0x0028AA64: lw          $v0, 0x390($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X390);
    // 0x0028AA68: bne         $v1, $v0, L_0028AA74
    if (ctx->r3 != ctx->r2) {
        // 0x0028AA6C: addu        $s0, $a0, $zero
        ctx->r16 = ADD32(ctx->r4, 0);
            goto L_0028AA74;
    }
    // 0x0028AA6C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x0028AA70: addiu       $s0, $s0, 0x280
    ctx->r16 = ADD32(ctx->r16, 0X280);
L_0028AA74:
    // 0x0028AA74: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x0028AA78: lw          $v0, -0x52EC($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X52EC);
    // 0x0028AA7C: lui         $v1, 0x800F
    ctx->r3 = S32(0X800F << 16);
    // 0x0028AA80: lw          $v1, 0x6CA8($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X6CA8);
    // 0x0028AA84: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x0028AA88: lw          $a0, -0x4EF4($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X4EF4);
    // 0x0028AA8C: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x0028AA90: sw          $v0, -0x4F64($at)
    MEM_W(-0X4F64, ctx->r1) = ctx->r2;
    // 0x0028AA94: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x0028AA98: lw          $v0, -0x5278($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X5278);
    // 0x0028AA9C: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x0028AAA0: sw          $v1, -0x52EC($at)
    MEM_W(-0X52EC, ctx->r1) = ctx->r3;
    // 0x0028AAA4: lw          $v1, 0x124($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X124);
    // 0x0028AAA8: lui         $at, 0x800F
    ctx->r1 = S32(0X800F << 16);
    // 0x0028AAAC: sw          $a0, 0x6CA8($at)
    MEM_W(0X6CA8, ctx->r1) = ctx->r4;
    // 0x0028AAB0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x0028AAB4: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x0028AAB8: sw          $v0, -0x4EF4($at)
    MEM_W(-0X4EF4, ctx->r1) = ctx->r2;
    // 0x0028AABC: sltu        $v0, $v0, $v1
    ctx->r2 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x0028AAC0: bne         $v0, $zero, L_0028AB18
    if (ctx->r2 != 0) {
        // 0x0028AAC4: nop
    
            goto L_0028AB18;
    }
    // 0x0028AAC4: nop

    // 0x0028AAC8: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x0028AACC: lw          $v0, -0xEC8($v0)
    ctx->r2 = MEM_W(ctx->r2, -0XEC8);
    // 0x0028AAD0: bne         $v0, $zero, L_0028AB20
    if (ctx->r2 != 0) {
        // 0x0028AAD4: nop
    
            goto L_0028AB20;
    }
    // 0x0028AAD4: nop

    // 0x0028AAD8: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x0028AADC: lw          $v0, -0xED0($v0)
    ctx->r2 = MEM_W(ctx->r2, -0XED0);
    // 0x0028AAE0: bne         $v0, $zero, L_0028AB18
    if (ctx->r2 != 0) {
        // 0x0028AAE4: nop
    
            goto L_0028AB18;
    }
    // 0x0028AAE4: nop

    // 0x0028AAE8: lw          $a0, 0x110($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X110);
    // 0x0028AAEC: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x0028AAF0: sw          $a0, -0x4F68($at)
    MEM_W(-0X4F68, ctx->r1) = ctx->r4;
    // 0x0028AAF4: jal         0x0029AC90
    // 0x0028AAF8: addu        $v0, $a0, $zero
    ctx->r2 = ADD32(ctx->r4, 0);
    osViSwapBuffer_recomp(rdram, ctx);
        goto after_5;
    // 0x0028AAF8: addu        $v0, $a0, $zero
    ctx->r2 = ADD32(ctx->r4, 0);
    after_5:
    // 0x0028AAFC: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x0028AB00: lw          $v0, -0xED0($v0)
    ctx->r2 = MEM_W(ctx->r2, -0XED0);
    // 0x0028AB04: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x0028AB08: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x0028AB0C: sw          $v0, -0xED0($at)
    MEM_W(-0XED0, ctx->r1) = ctx->r2;
    // 0x0028AB10: j           L_0028AB6C
    // 0x0028AB14: nop

        goto L_0028AB6C;
    // 0x0028AB14: nop

L_0028AB18:
    // 0x0028AB18: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x0028AB1C: lw          $v0, -0xEC8($v0)
    ctx->r2 = MEM_W(ctx->r2, -0XEC8);
L_0028AB20:
    // 0x0028AB20: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x0028AB24: lw          $v1, -0xECC($v1)
    ctx->r3 = MEM_W(ctx->r3, -0XECC);
    // 0x0028AB28: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x0028AB2C: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x0028AB30: sw          $v0, -0xEC8($at)
    MEM_W(-0XEC8, ctx->r1) = ctx->r2;
    // 0x0028AB34: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x0028AB38: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x0028AB3C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x0028AB40: sw          $s0, -0x52E8($at)
    MEM_W(-0X52E8, ctx->r1) = ctx->r16;
    // 0x0028AB44: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x0028AB48: lw          $v0, 0x2210($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2210);
    // 0x0028AB4C: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x0028AB50: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x0028AB54: sw          $v1, -0xECC($at)
    MEM_W(-0XECC, ctx->r1) = ctx->r3;
    // 0x0028AB58: sltu        $v1, $v1, $v0
    ctx->r3 = ctx->r3 < ctx->r2 ? 1 : 0;
    // 0x0028AB5C: bne         $v1, $zero, L_0028AB6C
    if (ctx->r3 != 0) {
        // 0x0028AB60: nop
    
            goto L_0028AB6C;
    }
    // 0x0028AB60: nop

    // 0x0028AB64: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x0028AB68: sw          $zero, -0xECC($at)
    MEM_W(-0XECC, ctx->r1) = 0;
L_0028AB6C:
    // 0x0028AB6C: jal         0x00228BBC
    // 0x0028AB70: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00228BBC(rdram, ctx);
        goto after_6;
    // 0x0028AB70: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_6:
    // 0x0028AB74: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
L_0028AB78:
    // 0x0028AB78: jal         0x0028B0A8
    // 0x0028AB7C: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    func_0028B0A8(rdram, ctx);
        goto after_7;
    // 0x0028AB7C: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    after_7:
    // 0x0028AB80: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x0028AB84: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x0028AB88: addiu       $a2, $sp, 0x14
    ctx->r6 = ADD32(ctx->r29, 0X14);
    // 0x0028AB8C: lw          $s0, 0x2F4($s3)
    ctx->r16 = MEM_W(ctx->r19, 0X2F4);
    // 0x0028AB90: lw          $v0, 0x2F8($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X2F8);
    // 0x0028AB94: sltiu       $s0, $s0, 0x1
    ctx->r16 = ctx->r16 < 0X1 ? 1 : 0;
    // 0x0028AB98: sll         $s0, $s0, 1
    ctx->r16 = S32(ctx->r16 << 1);
    // 0x0028AB9C: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x0028ABA0: or          $s0, $s0, $v0
    ctx->r16 = ctx->r16 | ctx->r2;
    // 0x0028ABA4: jal         0x0028ABE0
    // 0x0028ABA8: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    func_0028ABE0(rdram, ctx);
        goto after_8;
    // 0x0028ABA8: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    after_8:
    // 0x0028ABAC: beq         $v0, $s0, L_0028ABC4
    if (ctx->r2 == ctx->r16) {
        // 0x0028ABB0: nop
    
            goto L_0028ABC4;
    }
    // 0x0028ABB0: nop

    // 0x0028ABB4: lw          $a1, 0x10($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X10);
    // 0x0028ABB8: lw          $a2, 0x14($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X14);
    // 0x0028ABBC: jal         0x0028B0FC
    // 0x0028ABC0: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    func_0028B0FC(rdram, ctx);
        goto after_9;
    // 0x0028ABC0: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    after_9:
L_0028ABC4:
    // 0x0028ABC4: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x0028ABC8: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x0028ABCC: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x0028ABD0: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x0028ABD4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x0028ABD8: jr          $ra
    // 0x0028ABDC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x0028ABDC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_0029704C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0029704C: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x00297050: sw          $s7, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r23;
    // 0x00297054: addu        $s7, $a0, $zero
    ctx->r23 = ADD32(ctx->r4, 0);
    // 0x00297058: sw          $s5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r21;
    // 0x0029705C: lw          $s5, 0x48($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X48);
    // 0x00297060: addu        $a0, $a1, $zero
    ctx->r4 = ADD32(ctx->r5, 0);
    // 0x00297064: sw          $s6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r22;
    // 0x00297068: addu        $s6, $a2, $zero
    ctx->r22 = ADD32(ctx->r6, 0);
    // 0x0029706C: sw          $fp, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r30;
    // 0x00297070: addu        $fp, $a3, $zero
    ctx->r30 = ADD32(ctx->r7, 0);
    // 0x00297074: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x00297078: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x0029707C: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x00297080: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x00297084: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00297088: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0029708C: lw          $v1, 0x1C($s7)
    ctx->r3 = MEM_W(ctx->r23, 0X1C);
    // 0x00297090: lw          $v0, 0x14($s7)
    ctx->r2 = MEM_W(ctx->r23, 0X14);
    // 0x00297094: sll         $v1, $v1, 1
    ctx->r3 = S32(ctx->r3 << 1);
    // 0x00297098: addu        $a1, $v0, $v1
    ctx->r5 = ADD32(ctx->r2, ctx->r3);
    // 0x0029709C: sltu        $v0, $a0, $v0
    ctx->r2 = ctx->r4 < ctx->r2 ? 1 : 0;
    // 0x002970A0: beq         $v0, $zero, L_002970AC
    if (ctx->r2 == 0) {
        // 0x002970A4: addu        $a2, $s5, $zero
        ctx->r6 = ADD32(ctx->r21, 0);
            goto L_002970AC;
    }
    // 0x002970A4: addu        $a2, $s5, $zero
    ctx->r6 = ADD32(ctx->r21, 0);
    // 0x002970A8: addu        $a0, $a0, $v1
    ctx->r4 = ADD32(ctx->r4, ctx->r3);
L_002970AC:
    // 0x002970AC: sll         $a3, $fp, 1
    ctx->r7 = S32(ctx->r30 << 1);
    // 0x002970B0: addu        $s1, $a0, $a3
    ctx->r17 = ADD32(ctx->r4, ctx->r7);
    // 0x002970B4: sltu        $v0, $a1, $s1
    ctx->r2 = ctx->r5 < ctx->r17 ? 1 : 0;
    // 0x002970B8: beq         $v0, $zero, L_0029713C
    if (ctx->r2 == 0) {
        // 0x002970BC: andi        $v0, $s6, 0xFFFF
        ctx->r2 = ctx->r22 & 0XFFFF;
            goto L_0029713C;
    }
    // 0x002970BC: andi        $v0, $s6, 0xFFFF
    ctx->r2 = ctx->r22 & 0XFFFF;
    // 0x002970C0: addiu       $s5, $s5, 0x8
    ctx->r21 = ADD32(ctx->r21, 0X8);
    // 0x002970C4: addu        $s4, $s5, $zero
    ctx->r20 = ADD32(ctx->r21, 0);
    // 0x002970C8: addiu       $s5, $s5, 0x8
    ctx->r21 = ADD32(ctx->r21, 0X8);
    // 0x002970CC: lui         $s3, 0x800
    ctx->r19 = S32(0X800 << 16);
    // 0x002970D0: or          $v0, $v0, $s3
    ctx->r2 = ctx->r2 | ctx->r19;
    // 0x002970D4: subu        $s0, $a1, $a0
    ctx->r16 = SUB32(ctx->r5, ctx->r4);
    // 0x002970D8: sra         $s0, $s0, 1
    ctx->r16 = S32(SIGNED(ctx->r16) >> 1);
    // 0x002970DC: sll         $s0, $s0, 1
    ctx->r16 = S32(ctx->r16 << 1);
    // 0x002970E0: sw          $v0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r2;
    // 0x002970E4: andi        $v0, $s0, 0xFFFF
    ctx->r2 = ctx->r16 & 0XFFFF;
    // 0x002970E8: lui         $s2, 0x400
    ctx->r18 = S32(0X400 << 16);
    // 0x002970EC: subu        $s1, $s1, $a1
    ctx->r17 = SUB32(ctx->r17, ctx->r5);
    // 0x002970F0: sra         $s1, $s1, 1
    ctx->r17 = S32(SIGNED(ctx->r17) >> 1);
    // 0x002970F4: sw          $v0, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r2;
    // 0x002970F8: jal         0x0029BF80
    // 0x002970FC: sw          $s2, 0x0($s4)
    MEM_W(0X0, ctx->r20) = ctx->r18;
    func_0029BF80(rdram, ctx);
        goto after_0;
    // 0x002970FC: sw          $s2, 0x0($s4)
    MEM_W(0X0, ctx->r20) = ctx->r18;
    after_0:
    // 0x00297100: addu        $v1, $s5, $zero
    ctx->r3 = ADD32(ctx->r21, 0);
    // 0x00297104: addiu       $s5, $s5, 0x8
    ctx->r21 = ADD32(ctx->r21, 0X8);
    // 0x00297108: addu        $s0, $s6, $s0
    ctx->r16 = ADD32(ctx->r22, ctx->r16);
    // 0x0029710C: andi        $s0, $s0, 0xFFFF
    ctx->r16 = ctx->r16 & 0XFFFF;
    // 0x00297110: or          $s0, $s0, $s3
    ctx->r16 = ctx->r16 | ctx->r19;
    // 0x00297114: sll         $s1, $s1, 1
    ctx->r17 = S32(ctx->r17 << 1);
    // 0x00297118: andi        $s1, $s1, 0xFFFF
    ctx->r17 = ctx->r17 & 0XFFFF;
    // 0x0029711C: sw          $v0, 0x4($s4)
    MEM_W(0X4, ctx->r20) = ctx->r2;
    // 0x00297120: sw          $s0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r16;
    // 0x00297124: addu        $s0, $s5, $zero
    ctx->r16 = ADD32(ctx->r21, 0);
    // 0x00297128: sw          $s1, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r17;
    // 0x0029712C: sw          $s2, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r18;
    // 0x00297130: lw          $a0, 0x14($s7)
    ctx->r4 = MEM_W(ctx->r23, 0X14);
    // 0x00297134: j           L_00297164
    // 0x00297138: addiu       $s5, $s5, 0x8
    ctx->r21 = ADD32(ctx->r21, 0X8);
        goto L_00297164;
    // 0x00297138: addiu       $s5, $s5, 0x8
    ctx->r21 = ADD32(ctx->r21, 0X8);
L_0029713C:
    // 0x0029713C: addiu       $s5, $s5, 0x8
    ctx->r21 = ADD32(ctx->r21, 0X8);
    // 0x00297140: addu        $s0, $s5, $zero
    ctx->r16 = ADD32(ctx->r21, 0);
    // 0x00297144: addiu       $s5, $s5, 0x8
    ctx->r21 = ADD32(ctx->r21, 0X8);
    // 0x00297148: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x0029714C: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x00297150: sw          $v0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r2;
    // 0x00297154: andi        $v0, $a3, 0xFFFF
    ctx->r2 = ctx->r7 & 0XFFFF;
    // 0x00297158: sw          $v0, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r2;
    // 0x0029715C: lui         $v0, 0x400
    ctx->r2 = S32(0X400 << 16);
    // 0x00297160: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
L_00297164:
    // 0x00297164: jal         0x0029BF80
    // 0x00297168: nop

    func_0029BF80(rdram, ctx);
        goto after_1;
    // 0x00297168: nop

    after_1:
    // 0x0029716C: sw          $v0, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r2;
    // 0x00297170: addiu       $v0, $s5, 0x8
    ctx->r2 = ADD32(ctx->r21, 0X8);
    // 0x00297174: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    // 0x00297178: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x0029717C: sw          $v1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r3;
    // 0x00297180: sll         $v1, $fp, 1
    ctx->r3 = S32(ctx->r30 << 1);
    // 0x00297184: andi        $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 & 0XFFFF;
    // 0x00297188: sw          $v1, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r3;
    // 0x0029718C: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x00297190: lw          $fp, 0x30($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X30);
    // 0x00297194: lw          $s7, 0x2C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X2C);
    // 0x00297198: lw          $s6, 0x28($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X28);
    // 0x0029719C: lw          $s5, 0x24($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X24);
    // 0x002971A0: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x002971A4: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x002971A8: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x002971AC: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x002971B0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x002971B4: jr          $ra
    // 0x002971B8: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x002971B8: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_0029D690(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0029D690: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x0029D694: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x0029D698: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x0029D69C: sw          $s4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r20;
    // 0x0029D6A0: addiu       $s4, $zero, 0x2
    ctx->r20 = ADD32(0, 0X2);
    // 0x0029D6A4: sw          $s5, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r21;
    // 0x0029D6A8: addiu       $s5, $zero, 0x1
    ctx->r21 = ADD32(0, 0X1);
    // 0x0029D6AC: sw          $ra, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r31;
    // 0x0029D6B0: sw          $s3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r19;
    // 0x0029D6B4: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x0029D6B8: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x0029D6BC: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x0029D6C0: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
L_0029D6C4:
    // 0x0029D6C4: lw          $a0, 0x8($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X8);
    // 0x0029D6C8: jal         0x0029B6F0
    // 0x0029D6CC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osRecvMesg_recomp(rdram, ctx);
        goto after_0;
    // 0x0029D6CC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_0:
    // 0x0029D6D0: lw          $v0, 0x18($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X18);
    // 0x0029D6D4: lw          $s0, 0x14($v0)
    ctx->r16 = MEM_W(ctx->r2, 0X14);
    // 0x0029D6D8: beq         $s0, $zero, L_0029D8CC
    if (ctx->r16 == 0) {
        // 0x0029D6DC: nop
    
            goto L_0029D8CC;
    }
    // 0x0029D6DC: nop

    // 0x0029D6E0: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x0029D6E4: bne         $v0, $s4, L_0029D8C8
    if (ctx->r2 != ctx->r20) {
        // 0x0029D6E8: nop
    
            goto L_0029D8C8;
    }
    // 0x0029D6E8: nop

    // 0x0029D6EC: lw          $v0, 0x14($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X14);
    // 0x0029D6F0: sltiu       $v0, $v0, 0x2
    ctx->r2 = ctx->r2 < 0X2 ? 1 : 0;
    // 0x0029D6F4: beq         $v0, $zero, L_0029D8C8
    if (ctx->r2 == 0) {
        // 0x0029D6F8: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_0029D8C8;
    }
    // 0x0029D6F8: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x0029D6FC: lhu         $v1, 0x1A($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X1A);
    // 0x0029D700: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x0029D704: sw          $v0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r2;
    // 0x0029D708: sll         $v0, $v1, 3
    ctx->r2 = S32(ctx->r3 << 3);
    // 0x0029D70C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x0029D710: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x0029D714: addiu       $v0, $v0, 0x18
    ctx->r2 = ADD32(ctx->r2, 0X18);
    // 0x0029D718: addu        $s1, $a0, $v0
    ctx->r17 = ADD32(ctx->r4, ctx->r2);
    // 0x0029D71C: lhu         $v1, 0x18($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X18);
    // 0x0029D720: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x0029D724: beq         $v1, $v0, L_0029D73C
    if (ctx->r3 == ctx->r2) {
        // 0x0029D728: nop
    
            goto L_0029D73C;
    }
    // 0x0029D728: nop

    // 0x0029D72C: lw          $v0, 0x4($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X4);
    // 0x0029D730: lw          $v1, 0xC($s1)
    ctx->r3 = MEM_W(ctx->r17, 0XC);
    // 0x0029D734: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x0029D738: sw          $v0, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->r2;
L_0029D73C:
    // 0x0029D73C: lhu         $v0, 0x18($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X18);
    // 0x0029D740: bne         $v0, $s4, L_0029D758
    if (ctx->r2 != ctx->r20) {
        // 0x0029D744: addu        $s3, $zero, $zero
        ctx->r19 = ADD32(0, 0);
            goto L_0029D758;
    }
    // 0x0029D744: addu        $s3, $zero, $zero
    ctx->r19 = ADD32(0, 0);
    // 0x0029D748: lw          $v0, 0x18($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X18);
    // 0x0029D74C: lw          $v0, 0x14($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X14);
    // 0x0029D750: lw          $v0, 0x14($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X14);
    // 0x0029D754: sltiu       $s3, $v0, 0x1
    ctx->r19 = ctx->r2 < 0X1 ? 1 : 0;
L_0029D758:
    // 0x0029D758: addiu       $a1, $sp, 0x1C
    ctx->r5 = ADD32(ctx->r29, 0X1C);
    // 0x0029D75C: lw          $a0, 0x10($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X10);
    // 0x0029D760: jal         0x0029B6F0
    // 0x0029D764: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osRecvMesg_recomp(rdram, ctx);
        goto after_1;
    // 0x0029D764: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_1:
    // 0x0029D768: lui         $a0, 0x10
    ctx->r4 = S32(0X10 << 16);
    // 0x0029D76C: jal         0x0029DEE0
    // 0x0029D770: ori         $a0, $a0, 0x401
    ctx->r4 = ctx->r4 | 0X401;
    func_0029DEE0(rdram, ctx);
        goto after_2;
    // 0x0029D770: ori         $a0, $a0, 0x401
    ctx->r4 = ctx->r4 | 0X401;
    after_2:
    // 0x0029D774: lui         $a1, 0x500
    ctx->r5 = S32(0X500 << 16);
    // 0x0029D778: lw          $v0, 0x18($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X18);
    // 0x0029D77C: ori         $a1, $a1, 0x510
    ctx->r5 = ctx->r5 | 0X510;
    // 0x0029D780: lw          $a0, 0x14($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X14);
    // 0x0029D784: lw          $v0, 0x24($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X24);
    // 0x0029D788: lui         $a2, 0x8000
    ctx->r6 = S32(0X8000 << 16);
    // 0x0029D78C: jal         0x0029DBD0
    // 0x0029D790: or          $a2, $v0, $a2
    ctx->r6 = ctx->r2 | ctx->r6;
    func_0029DBD0(rdram, ctx);
        goto after_3;
    // 0x0029D790: or          $a2, $v0, $a2
    ctx->r6 = ctx->r2 | ctx->r6;
    after_3:
L_0029D794:
    // 0x0029D794: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x0029D798: lw          $a0, 0xC($s2)
    ctx->r4 = MEM_W(ctx->r18, 0XC);
    // 0x0029D79C: jal         0x0029B6F0
    // 0x0029D7A0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osRecvMesg_recomp(rdram, ctx);
        goto after_4;
    // 0x0029D7A0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_4:
    // 0x0029D7A4: lw          $v0, 0x18($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X18);
    // 0x0029D7A8: lw          $s0, 0x14($v0)
    ctx->r16 = MEM_W(ctx->r2, 0X14);
    // 0x0029D7AC: lhu         $v1, 0x1A($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X1A);
    // 0x0029D7B0: sll         $v0, $v1, 3
    ctx->r2 = S32(ctx->r3 << 3);
    // 0x0029D7B4: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x0029D7B8: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x0029D7BC: addu        $v0, $s0, $v0
    ctx->r2 = ADD32(ctx->r16, ctx->r2);
    // 0x0029D7C0: addiu       $s1, $v0, 0x2C
    ctx->r17 = ADD32(ctx->r2, 0X2C);
    // 0x0029D7C4: lw          $v1, 0x0($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X0);
    // 0x0029D7C8: addiu       $v0, $zero, 0x1D
    ctx->r2 = ADD32(0, 0X1D);
    // 0x0029D7CC: bne         $v1, $v0, L_0029D86C
    if (ctx->r3 != ctx->r2) {
        // 0x0029D7D0: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_0029D86C;
    }
    // 0x0029D7D0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0029D7D4: lui         $a1, 0x500
    ctx->r5 = S32(0X500 << 16);
    // 0x0029D7D8: ori         $a1, $a1, 0x510
    ctx->r5 = ctx->r5 | 0X510;
    // 0x0029D7DC: lw          $v0, 0x24($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X24);
    // 0x0029D7E0: lui         $a2, 0x1000
    ctx->r6 = S32(0X1000 << 16);
    // 0x0029D7E4: jal         0x0029DBD0
    // 0x0029D7E8: or          $a2, $v0, $a2
    ctx->r6 = ctx->r2 | ctx->r6;
    func_0029DBD0(rdram, ctx);
        goto after_5;
    // 0x0029D7E8: or          $a2, $v0, $a2
    ctx->r6 = ctx->r2 | ctx->r6;
    after_5:
    // 0x0029D7EC: lui         $a1, 0x500
    ctx->r5 = S32(0X500 << 16);
    // 0x0029D7F0: lw          $v0, 0x18($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X18);
    // 0x0029D7F4: lw          $a2, 0x24($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X24);
    // 0x0029D7F8: lw          $a0, 0x14($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X14);
    // 0x0029D7FC: jal         0x0029DBD0
    // 0x0029D800: ori         $a1, $a1, 0x510
    ctx->r5 = ctx->r5 | 0X510;
    func_0029DBD0(rdram, ctx);
        goto after_6;
    // 0x0029D800: ori         $a1, $a1, 0x510
    ctx->r5 = ctx->r5 | 0X510;
    after_6:
    // 0x0029D804: lui         $a1, 0x500
    ctx->r5 = S32(0X500 << 16);
    // 0x0029D808: lw          $v0, 0x18($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X18);
    // 0x0029D80C: ori         $a1, $a1, 0x508
    ctx->r5 = ctx->r5 | 0X508;
    // 0x0029D810: lw          $a0, 0x14($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X14);
    // 0x0029D814: jal         0x0029DA30
    // 0x0029D818: addiu       $a2, $sp, 0x24
    ctx->r6 = ADD32(ctx->r29, 0X24);
    func_0029DA30(rdram, ctx);
        goto after_7;
    // 0x0029D818: addiu       $a2, $sp, 0x24
    ctx->r6 = ADD32(ctx->r29, 0X24);
    after_7:
    // 0x0029D81C: lw          $v0, 0x24($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X24);
    // 0x0029D820: lui         $v1, 0x200
    ctx->r3 = S32(0X200 << 16);
    // 0x0029D824: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x0029D828: beq         $v0, $zero, L_0029D84C
    if (ctx->r2 == 0) {
        // 0x0029D82C: lui         $a1, 0x500
        ctx->r5 = S32(0X500 << 16);
            goto L_0029D84C;
    }
    // 0x0029D82C: lui         $a1, 0x500
    ctx->r5 = S32(0X500 << 16);
    // 0x0029D830: lw          $v0, 0x18($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X18);
    // 0x0029D834: ori         $a1, $a1, 0x510
    ctx->r5 = ctx->r5 | 0X510;
    // 0x0029D838: lw          $a0, 0x14($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X14);
    // 0x0029D83C: lw          $v0, 0x24($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X24);
    // 0x0029D840: lui         $a2, 0x100
    ctx->r6 = S32(0X100 << 16);
    // 0x0029D844: jal         0x0029DBD0
    // 0x0029D848: or          $a2, $v0, $a2
    ctx->r6 = ctx->r2 | ctx->r6;
    func_0029DBD0(rdram, ctx);
        goto after_8;
    // 0x0029D848: or          $a2, $v0, $a2
    ctx->r6 = ctx->r2 | ctx->r6;
    after_8:
L_0029D84C:
    // 0x0029D84C: lui         $v1, 0xA460
    ctx->r3 = S32(0XA460 << 16);
    // 0x0029D850: ori         $v1, $v1, 0x10
    ctx->r3 = ctx->r3 | 0X10;
    // 0x0029D854: lui         $a0, 0x10
    ctx->r4 = S32(0X10 << 16);
    // 0x0029D858: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x0029D85C: sw          $v0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r2;
    // 0x0029D860: sw          $s4, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r20;
    // 0x0029D864: jal         0x0029DF30
    // 0x0029D868: ori         $a0, $a0, 0xC01
    ctx->r4 = ctx->r4 | 0XC01;
    func_0029DF30(rdram, ctx);
        goto after_9;
    // 0x0029D868: ori         $a0, $a0, 0xC01
    ctx->r4 = ctx->r4 | 0XC01;
    after_9:
L_0029D86C:
    // 0x0029D86C: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x0029D870: lw          $a0, 0x4($a1)
    ctx->r4 = MEM_W(ctx->r5, 0X4);
    // 0x0029D874: jal         0x0029B820
    // 0x0029D878: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    osSendMesg_recomp(rdram, ctx);
        goto after_10;
    // 0x0029D878: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_10:
    // 0x0029D87C: bne         $s3, $s5, L_0029D898
    if (ctx->r19 != ctx->r21) {
        // 0x0029D880: addu        $a1, $zero, $zero
        ctx->r5 = ADD32(0, 0);
            goto L_0029D898;
    }
    // 0x0029D880: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x0029D884: lw          $v0, 0x18($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X18);
    // 0x0029D888: lw          $v0, 0x14($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X14);
    // 0x0029D88C: lw          $v0, 0x2C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2C);
    // 0x0029D890: beq         $v0, $zero, L_0029D794
    if (ctx->r2 == 0) {
        // 0x0029D894: addu        $s3, $zero, $zero
        ctx->r19 = ADD32(0, 0);
            goto L_0029D794;
    }
    // 0x0029D894: addu        $s3, $zero, $zero
    ctx->r19 = ADD32(0, 0);
L_0029D898:
    // 0x0029D898: lw          $a0, 0x10($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X10);
    // 0x0029D89C: jal         0x0029B820
    // 0x0029D8A0: addu        $a2, $a1, $zero
    ctx->r6 = ADD32(ctx->r5, 0);
    osSendMesg_recomp(rdram, ctx);
        goto after_11;
    // 0x0029D8A0: addu        $a2, $a1, $zero
    ctx->r6 = ADD32(ctx->r5, 0);
    after_11:
    // 0x0029D8A4: lw          $v0, 0x18($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X18);
    // 0x0029D8A8: lw          $v0, 0x14($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X14);
    // 0x0029D8AC: lhu         $v0, 0x1A($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X1A);
    // 0x0029D8B0: bne         $v0, $s5, L_0029D6C4
    if (ctx->r2 != ctx->r21) {
        // 0x0029D8B4: addiu       $a1, $sp, 0x18
        ctx->r5 = ADD32(ctx->r29, 0X18);
            goto L_0029D6C4;
    }
    // 0x0029D8B4: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    // 0x0029D8B8: jal         0x0029DF70
    // 0x0029D8BC: nop

    func_0029DF70(rdram, ctx);
        goto after_12;
    // 0x0029D8BC: nop

    after_12:
    // 0x0029D8C0: j           L_0029D6C4
    // 0x0029D8C4: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
        goto L_0029D6C4;
    // 0x0029D8C4: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
L_0029D8C8:
    // 0x0029D8C8: lw          $v0, 0x18($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X18);
L_0029D8CC:
    // 0x0029D8CC: lhu         $v0, 0x0($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X0);
    // 0x0029D8D0: addiu       $v1, $v0, -0xA
    ctx->r3 = ADD32(ctx->r2, -0XA);
    // 0x0029D8D4: sltiu       $v0, $v1, 0x7
    ctx->r2 = ctx->r3 < 0X7 ? 1 : 0;
    // 0x0029D8D8: beq         $v0, $zero, L_0029D9E4
    if (ctx->r2 == 0) {
        // 0x0029D8DC: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_0029D9E4;
    }
    // 0x0029D8DC: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x0029D8E0: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0029D8E4: addu        $at, $at, $v0
    gpr jr_addend_0029D8EC = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x0029D8E8: lw          $v0, -0x5670($at)
    ctx->r2 = ADD32(ctx->r1, -0X5670);
    // 0x0029D8EC: jr          $v0
    // 0x0029D8F0: nop

    switch (jr_addend_0029D8EC >> 2) {
        case 0: goto L_0029D9D4; break;
        case 1: goto L_0029D8F4; break;
        case 2: goto L_0029D928; break;
        case 3: goto L_0029D9E4; break;
        case 4: goto L_0029D9E4; break;
        case 5: goto L_0029D95C; break;
        case 6: goto L_0029D998; break;
        default: switch_error(__func__, 0x0029D8EC, 0x800AA990);
    }
    // 0x0029D8F0: nop

L_0029D8F4:
    // 0x0029D8F4: addiu       $a1, $sp, 0x1C
    ctx->r5 = ADD32(ctx->r29, 0X1C);
    // 0x0029D8F8: lw          $a0, 0x10($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X10);
    // 0x0029D8FC: jal         0x0029B6F0
    // 0x0029D900: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osRecvMesg_recomp(rdram, ctx);
        goto after_13;
    // 0x0029D900: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_13:
    // 0x0029D904: lw          $v0, 0x18($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X18);
    // 0x0029D908: lw          $a1, 0xC($v0)
    ctx->r5 = MEM_W(ctx->r2, 0XC);
    // 0x0029D90C: lw          $a2, 0x8($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X8);
    // 0x0029D910: lw          $a3, 0x10($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X10);
    // 0x0029D914: lw          $v0, 0x14($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X14);
    // 0x0029D918: jalr        $v0
    // 0x0029D91C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_14;
    // 0x0029D91C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_14:
    // 0x0029D920: j           L_0029D9E8
    // 0x0029D924: nop

        goto L_0029D9E8;
    // 0x0029D924: nop

L_0029D928:
    // 0x0029D928: addiu       $a1, $sp, 0x1C
    ctx->r5 = ADD32(ctx->r29, 0X1C);
    // 0x0029D92C: lw          $a0, 0x10($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X10);
    // 0x0029D930: jal         0x0029B6F0
    // 0x0029D934: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osRecvMesg_recomp(rdram, ctx);
        goto after_15;
    // 0x0029D934: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_15:
    // 0x0029D938: lw          $v0, 0x18($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X18);
    // 0x0029D93C: lw          $a1, 0xC($v0)
    ctx->r5 = MEM_W(ctx->r2, 0XC);
    // 0x0029D940: lw          $a2, 0x8($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X8);
    // 0x0029D944: lw          $a3, 0x10($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X10);
    // 0x0029D948: lw          $v0, 0x14($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X14);
    // 0x0029D94C: jalr        $v0
    // 0x0029D950: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_16;
    // 0x0029D950: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_16:
    // 0x0029D954: j           L_0029D9E8
    // 0x0029D958: nop

        goto L_0029D9E8;
    // 0x0029D958: nop

L_0029D95C:
    // 0x0029D95C: addiu       $a1, $sp, 0x1C
    ctx->r5 = ADD32(ctx->r29, 0X1C);
    // 0x0029D960: lw          $a0, 0x10($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X10);
    // 0x0029D964: jal         0x0029B6F0
    // 0x0029D968: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osRecvMesg_recomp(rdram, ctx);
        goto after_17;
    // 0x0029D968: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_17:
    // 0x0029D96C: lw          $v0, 0x18($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X18);
    // 0x0029D970: lw          $v1, 0x10($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X10);
    // 0x0029D974: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    // 0x0029D978: lw          $a0, 0x14($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X14);
    // 0x0029D97C: lw          $a2, 0xC($v0)
    ctx->r6 = MEM_W(ctx->r2, 0XC);
    // 0x0029D980: lw          $a3, 0x8($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X8);
    // 0x0029D984: lw          $v0, 0x18($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X18);
    // 0x0029D988: jalr        $v0
    // 0x0029D98C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_18;
    // 0x0029D98C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_18:
    // 0x0029D990: j           L_0029D9E8
    // 0x0029D994: nop

        goto L_0029D9E8;
    // 0x0029D994: nop

L_0029D998:
    // 0x0029D998: addiu       $a1, $sp, 0x1C
    ctx->r5 = ADD32(ctx->r29, 0X1C);
    // 0x0029D99C: lw          $a0, 0x10($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X10);
    // 0x0029D9A0: jal         0x0029B6F0
    // 0x0029D9A4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osRecvMesg_recomp(rdram, ctx);
        goto after_19;
    // 0x0029D9A4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_19:
    // 0x0029D9A8: lw          $v0, 0x18($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X18);
    // 0x0029D9AC: lw          $v1, 0x10($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X10);
    // 0x0029D9B0: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    // 0x0029D9B4: lw          $a0, 0x14($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X14);
    // 0x0029D9B8: lw          $a2, 0xC($v0)
    ctx->r6 = MEM_W(ctx->r2, 0XC);
    // 0x0029D9BC: lw          $a3, 0x8($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X8);
    // 0x0029D9C0: lw          $v0, 0x18($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X18);
    // 0x0029D9C4: jalr        $v0
    // 0x0029D9C8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_20;
    // 0x0029D9C8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_20:
    // 0x0029D9CC: j           L_0029D9E8
    // 0x0029D9D0: nop

        goto L_0029D9E8;
    // 0x0029D9D0: nop

L_0029D9D4:
    // 0x0029D9D4: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x0029D9D8: lw          $a0, 0x4($a1)
    ctx->r4 = MEM_W(ctx->r5, 0X4);
    // 0x0029D9DC: jal         0x0029B820
    // 0x0029D9E0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    osSendMesg_recomp(rdram, ctx);
        goto after_21;
    // 0x0029D9E0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_21:
L_0029D9E4:
    // 0x0029D9E4: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_0029D9E8:
    // 0x0029D9E8: bne         $v0, $zero, L_0029D6C4
    if (ctx->r2 != 0) {
        // 0x0029D9EC: addiu       $a1, $sp, 0x18
        ctx->r5 = ADD32(ctx->r29, 0X18);
            goto L_0029D6C4;
    }
    // 0x0029D9EC: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    // 0x0029D9F0: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x0029D9F4: lw          $a0, 0xC($s2)
    ctx->r4 = MEM_W(ctx->r18, 0XC);
    // 0x0029D9F8: jal         0x0029B6F0
    // 0x0029D9FC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osRecvMesg_recomp(rdram, ctx);
        goto after_22;
    // 0x0029D9FC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_22:
    // 0x0029DA00: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x0029DA04: lw          $a0, 0x4($a1)
    ctx->r4 = MEM_W(ctx->r5, 0X4);
    // 0x0029DA08: jal         0x0029B820
    // 0x0029DA0C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    osSendMesg_recomp(rdram, ctx);
        goto after_23;
    // 0x0029DA0C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_23:
    // 0x0029DA10: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x0029DA14: lw          $a0, 0x10($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X10);
    // 0x0029DA18: jal         0x0029B820
    // 0x0029DA1C: addu        $a2, $a1, $zero
    ctx->r6 = ADD32(ctx->r5, 0);
    osSendMesg_recomp(rdram, ctx);
        goto after_24;
    // 0x0029DA1C: addu        $a2, $a1, $zero
    ctx->r6 = ADD32(ctx->r5, 0);
    after_24:
    // 0x0029DA20: j           L_0029D6C4
    // 0x0029DA24: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
        goto L_0029D6C4;
    // 0x0029DA24: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    // 0x0029DA28: mul.s       $f0, $f0, $f21
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f21.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f21.fl);
    // 0x0029DA2C: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
;}
RECOMP_FUNC void func_0042F0E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0042F0E4: lhu         $v1, 0x0($s2)
    ctx->r3 = MEM_HU(ctx->r18, 0X0);
    // 0x0042F0E8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0042F0EC: jal         0x0041BA50
    // 0x0042F0F0: sw          $v1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r3;
    func_0041BA50(rdram, ctx);
        goto after_0;
    // 0x0042F0F0: sw          $v1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r3;
    after_0:
    // 0x0042F0F4: lw          $v1, 0x1B4($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X1B4);
    // 0x0042F0F8: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x0042F0FC: bnel        $v0, $zero, L_0042F150
    if (ctx->r2 != 0) {
        // 0x0042F100: sb          $s3, 0x68($s0)
        MEM_B(0X68, ctx->r16) = ctx->r19;
            goto L_0042F150;
    }
    goto skip_0;
    // 0x0042F100: sb          $s3, 0x68($s0)
    MEM_B(0X68, ctx->r16) = ctx->r19;
    skip_0:
    // 0x0042F104: blez        $v1, L_0042F13C
    if (SIGNED(ctx->r3) <= 0) {
        // 0x0042F108: addu        $a2, $zero, $zero
        ctx->r6 = ADD32(0, 0);
            goto L_0042F13C;
    }
    // 0x0042F108: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x0042F10C: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    // 0x0042F110: addu        $v1, $s2, $zero
    ctx->r3 = ADD32(ctx->r18, 0);
    // 0x0042F114: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_0042F118:
    // 0x0042F118: sb          $a1, 0xA8($a0)
    MEM_B(0XA8, ctx->r4) = ctx->r5;
    // 0x0042F11C: lbu         $v0, 0x9($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X9);
    // 0x0042F120: addiu       $v1, $v1, 0x2
    ctx->r3 = ADD32(ctx->r3, 0X2);
    // 0x0042F124: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x0042F128: sb          $v0, 0xB0($a0)
    MEM_B(0XB0, ctx->r4) = ctx->r2;
    // 0x0042F12C: lw          $v0, 0x1B4($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X1B4);
    // 0x0042F130: slt         $v0, $a2, $v0
    ctx->r2 = SIGNED(ctx->r6) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x0042F134: bne         $v0, $zero, L_0042F118
    if (ctx->r2 != 0) {
        // 0x0042F138: addiu       $a0, $a0, 0x40
        ctx->r4 = ADD32(ctx->r4, 0X40);
            goto L_0042F118;
    }
    // 0x0042F138: addiu       $a0, $a0, 0x40
    ctx->r4 = ADD32(ctx->r4, 0X40);
L_0042F13C:
    // 0x0042F13C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0042F140: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x0042F144: sb          $v0, -0x550F($at)
    MEM_B(-0X550F, ctx->r1) = ctx->r2;
    // 0x0042F148: j           L_0042F154
    // 0x0042F14C: nop

        goto L_0042F154;
    // 0x0042F14C: nop

L_0042F150:
    // 0x0042F150: sb          $zero, 0x19($s0)
    MEM_B(0X19, ctx->r16) = 0;
L_0042F154:
    // 0x0042F154: lui         $s0, 0x8012
    ctx->r16 = S32(0X8012 << 16);
    // 0x0042F158: addiu       $s0, $s0, -0x5528
    ctx->r16 = ADD32(ctx->r16, -0X5528);
    // 0x0042F15C: sb          $zero, 0x17($s0)
    MEM_B(0X17, ctx->r16) = 0;
    // 0x0042F160: lbu         $v1, 0x1B7($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X1B7);
    // 0x0042F164: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
    // 0x0042F168: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x0042F16C: jal         0x002113A4
    // 0x0042F170: sb          $v1, 0x1A($s0)
    MEM_B(0X1A, ctx->r16) = ctx->r3;
    func_002113A4(rdram, ctx);
        goto after_1;
    // 0x0042F170: sb          $v1, 0x1A($s0)
    MEM_B(0X1A, ctx->r16) = ctx->r3;
    after_1:
    // 0x0042F174: lui         $v1, 0x38E3
    ctx->r3 = S32(0X38E3 << 16);
    // 0x0042F178: ori         $v1, $v1, 0x8E39
    ctx->r3 = ctx->r3 | 0X8E39;
    // 0x0042F17C: mult        $v0, $v1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x0042F180: sra         $v1, $v0, 31
    ctx->r3 = S32(SIGNED(ctx->r2) >> 31);
    // 0x0042F184: mfhi        $t6
    ctx->r14 = hi;
    // 0x0042F188: sra         $a0, $t6, 1
    ctx->r4 = S32(SIGNED(ctx->r14) >> 1);
    // 0x0042F18C: subu        $a0, $a0, $v1
    ctx->r4 = SUB32(ctx->r4, ctx->r3);
    // 0x0042F190: sll         $v1, $a0, 3
    ctx->r3 = S32(ctx->r4 << 3);
    // 0x0042F194: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x0042F198: subu        $a0, $v0, $v1
    ctx->r4 = SUB32(ctx->r2, ctx->r3);
    // 0x0042F19C: sb          $a0, 0x23($s0)
    MEM_B(0X23, ctx->r16) = ctx->r4;
    // 0x0042F1A0: sb          $a0, 0x28($s0)
    MEM_B(0X28, ctx->r16) = ctx->r4;
    // 0x0042F1A4: sb          $a0, 0x2D($s0)
    MEM_B(0X2D, ctx->r16) = ctx->r4;
    // 0x0042F1A8: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x0042F1AC: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x0042F1B0: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x0042F1B4: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x0042F1B8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0042F1BC: jr          $ra
    // 0x0042F1C0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x0042F1C0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_0029F180(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0029F180: jr          $ra
    // 0x0029F184: nop

    return;
    // 0x0029F184: nop

;}
RECOMP_FUNC void func_0040DA90(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0040DA90: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x0040DA94: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0040DA98: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x0040DA9C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x0040DAA0: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x0040DAA4: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x0040DAA8: lw          $v0, 0x30($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X30);
    // 0x0040DAAC: lui         $s2, 0x8013
    ctx->r18 = S32(0X8013 << 16);
    // 0x0040DAB0: addiu       $s2, $s2, 0x200
    ctx->r18 = ADD32(ctx->r18, 0X200);
    // 0x0040DAB4: beq         $v0, $zero, L_0040DAD0
    if (ctx->r2 == 0) {
        // 0x0040DAB8: nop
    
            goto L_0040DAD0;
    }
    // 0x0040DAB8: nop

    // 0x0040DABC: lw          $v0, 0x8($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X8);
    // 0x0040DAC0: beq         $v0, $zero, L_0040DAD0
    if (ctx->r2 == 0) {
        // 0x0040DAC4: nop
    
            goto L_0040DAD0;
    }
    // 0x0040DAC4: nop

    // 0x0040DAC8: jalr        $v0
    // 0x0040DACC: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x0040DACC: nop

    after_0:
L_0040DAD0:
    // 0x0040DAD0: lwc1        $f0, 0x118($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X118);
    // 0x0040DAD4: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0040DAD8: lwc1        $f1, 0x6D28($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X6D28);
    // 0x0040DADC: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x0040DAE0: mtc1        $zero, $f1
    ctx->f_odd[(1 - 1) * 2] = 0;
    // 0x0040DAE4: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x0040DAE8: nop

    // 0x0040DAEC: bc1tl       L_0040DAF4
    if (c1cs) {
        // 0x0040DAF0: mov.s       $f0, $f1
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    ctx->f0.fl = ctx->f1.fl;
            goto L_0040DAF4;
    }
    goto skip_0;
    // 0x0040DAF0: mov.s       $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    ctx->f0.fl = ctx->f1.fl;
    skip_0:
L_0040DAF4:
    // 0x0040DAF4: swc1        $f0, 0x118($s0)
    MEM_W(0X118, ctx->r16) = ctx->f0.u32l;
    // 0x0040DAF8: lw          $v0, 0x4FC($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X4FC);
    // 0x0040DAFC: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x0040DB00: lui         $at, 0x43
    ctx->r1 = S32(0X43 << 16);
    // 0x0040DB04: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x0040DB08: lw          $v0, 0x2410($at)
    ctx->r2 = MEM_W(ctx->r1, 0X2410);
    // 0x0040DB0C: beq         $v0, $zero, L_0040DB1C
    if (ctx->r2 == 0) {
        // 0x0040DB10: nop
    
            goto L_0040DB1C;
    }
    // 0x0040DB10: nop

    // 0x0040DB14: jalr        $v0
    // 0x0040DB18: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_1;
    // 0x0040DB18: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_1:
L_0040DB1C:
    // 0x0040DB1C: lw          $v0, 0x4EC($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X4EC);
    // 0x0040DB20: blez        $v0, L_0040DB48
    if (SIGNED(ctx->r2) <= 0) {
        // 0x0040DB24: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_0040DB48;
    }
    // 0x0040DB24: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x0040DB28: addiu       $s1, $zero, 0x3C
    ctx->r17 = ADD32(0, 0X3C);
L_0040DB2C:
    // 0x0040DB2C: jal         0x00235510
    // 0x0040DB30: addu        $a0, $s2, $s1
    ctx->r4 = ADD32(ctx->r18, ctx->r17);
    func_00235510(rdram, ctx);
        goto after_2;
    // 0x0040DB30: addu        $a0, $s2, $s1
    ctx->r4 = ADD32(ctx->r18, ctx->r17);
    after_2:
    // 0x0040DB34: lw          $v0, 0x4EC($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X4EC);
    // 0x0040DB38: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x0040DB3C: slt         $v0, $s0, $v0
    ctx->r2 = SIGNED(ctx->r16) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x0040DB40: bne         $v0, $zero, L_0040DB2C
    if (ctx->r2 != 0) {
        // 0x0040DB44: addiu       $s1, $s1, 0x64
        ctx->r17 = ADD32(ctx->r17, 0X64);
            goto L_0040DB2C;
    }
    // 0x0040DB44: addiu       $s1, $s1, 0x64
    ctx->r17 = ADD32(ctx->r17, 0X64);
L_0040DB48:
    // 0x0040DB48: jal         0x0040C850
    // 0x0040DB4C: addiu       $a0, $s2, 0x518
    ctx->r4 = ADD32(ctx->r18, 0X518);
    func_0040C850(rdram, ctx);
        goto after_3;
    // 0x0040DB4C: addiu       $a0, $s2, 0x518
    ctx->r4 = ADD32(ctx->r18, 0X518);
    after_3:
    // 0x0040DB50: jal         0x0040C850
    // 0x0040DB54: addiu       $a0, $s2, 0x530
    ctx->r4 = ADD32(ctx->r18, 0X530);
    func_0040C850(rdram, ctx);
        goto after_4;
    // 0x0040DB54: addiu       $a0, $s2, 0x530
    ctx->r4 = ADD32(ctx->r18, 0X530);
    after_4:
    // 0x0040DB58: jal         0x0040C850
    // 0x0040DB5C: addiu       $a0, $s2, 0x548
    ctx->r4 = ADD32(ctx->r18, 0X548);
    func_0040C850(rdram, ctx);
        goto after_5;
    // 0x0040DB5C: addiu       $a0, $s2, 0x548
    ctx->r4 = ADD32(ctx->r18, 0X548);
    after_5:
    // 0x0040DB60: jal         0x0040CB28
    // 0x0040DB64: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_0040CB28(rdram, ctx);
        goto after_6;
    // 0x0040DB64: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_6:
    // 0x0040DB68: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x0040DB6C: addiu       $a0, $a0, 0xF0
    ctx->r4 = ADD32(ctx->r4, 0XF0);
    // 0x0040DB70: jal         0x0027AD88
    // 0x0040DB74: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    func_0027AD88(rdram, ctx);
        goto after_7;
    // 0x0040DB74: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    after_7:
    // 0x0040DB78: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x0040DB7C: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x0040DB80: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x0040DB84: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0040DB88: jr          $ra
    // 0x0040DB8C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x0040DB8C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_00271740(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00271740: jr          $ra
    // 0x00271744: sw          $a1, 0x2BA0($a0)
    MEM_W(0X2BA0, ctx->r4) = ctx->r5;
    return;
    // 0x00271744: sw          $a1, 0x2BA0($a0)
    MEM_W(0X2BA0, ctx->r4) = ctx->r5;
;}
RECOMP_FUNC void func_00299F90(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00299F90: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00299F94: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00299F98: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00299F9C: lui         $s0, 0x8012
    ctx->r16 = S32(0X8012 << 16);
    // 0x00299FA0: addiu       $s0, $s0, 0x1678
    ctx->r16 = ADD32(ctx->r16, 0X1678);
    // 0x00299FA4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00299FA8: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x00299FAC: addiu       $a1, $a1, 0x1670
    ctx->r5 = ADD32(ctx->r5, 0X1670);
    // 0x00299FB0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x00299FB4: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00299FB8: sw          $v0, 0x7A50($at)
    MEM_W(0X7A50, ctx->r1) = ctx->r2;
    // 0x00299FBC: jal         0x0029B030
    // 0x00299FC0: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    osCreateMesgQueue_recomp(rdram, ctx);
        goto after_0;
    // 0x00299FC0: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    after_0:
    // 0x00299FC4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00299FC8: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x00299FCC: jal         0x0029B820
    // 0x00299FD0: addu        $a2, $a1, $zero
    ctx->r6 = ADD32(ctx->r5, 0);
    osSendMesg_recomp(rdram, ctx);
        goto after_1;
    // 0x00299FD0: addu        $a2, $a1, $zero
    ctx->r6 = ADD32(ctx->r5, 0);
    after_1:
    // 0x00299FD4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x00299FD8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00299FDC: jr          $ra
    // 0x00299FE0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00299FE0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0045A20C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0045A20C: beq         $a0, $zero, L_0045A21C
    if (ctx->r4 == 0) {
            // 0x0045A210: nop

    func_0045A21C(rdram, ctx);
    return;
    }
    // 0x0045A210: nop

    // 0x0045A214: jr          $ra
    // 0x0045A218: sll         $v0, $a0, 8
    ctx->r2 = S32(ctx->r4 << 8);
    return;
    // 0x0045A218: sll         $v0, $a0, 8
    ctx->r2 = S32(ctx->r4 << 8);
;}
RECOMP_FUNC void func_00446C38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00446C38: addiu       $sp, $sp, -0xB0
    ctx->r29 = ADD32(ctx->r29, -0XB0);
    // 0x00446C3C: sw          $s1, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r17;
    // 0x00446C40: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x00446C44: sw          $s0, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r16;
    // 0x00446C48: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x00446C4C: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    // 0x00446C50: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00446C54: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x00446C58: sw          $ra, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->r31;
    // 0x00446C5C: jal         0x00246108
    // 0x00446C60: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    func_00246108(rdram, ctx);
        goto after_0;
    // 0x00446C60: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    after_0:
    // 0x00446C64: lwc1        $f1, 0x40($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X40);
    // 0x00446C68: lwc1        $f0, 0x64($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X64);
    // 0x00446C6C: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x00446C70: nop

    // 0x00446C74: bc1f        L_00446C88
    if (!c1cs) {
        // 0x00446C78: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_00446C88;
    }
    // 0x00446C78: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x00446C7C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x00446C80: jal         0x00243414
    // 0x00446C84: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    func_00243414(rdram, ctx);
        goto after_1;
    // 0x00446C84: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    after_1:
L_00446C88:
    // 0x00446C88: lw          $ra, 0xA8($sp)
    ctx->r31 = MEM_W(ctx->r29, 0XA8);
    // 0x00446C8C: lw          $s1, 0xA4($sp)
    ctx->r17 = MEM_W(ctx->r29, 0XA4);
    // 0x00446C90: lw          $s0, 0xA0($sp)
    ctx->r16 = MEM_W(ctx->r29, 0XA0);
    // 0x00446C94: jr          $ra
    // 0x00446C98: addiu       $sp, $sp, 0xB0
    ctx->r29 = ADD32(ctx->r29, 0XB0);
    return;
    // 0x00446C98: addiu       $sp, $sp, 0xB0
    ctx->r29 = ADD32(ctx->r29, 0XB0);
;}
RECOMP_FUNC void func_002655F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002655F8: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x002655FC: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x00265600: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x00265604: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x00265608: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x0026560C: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x00265610: lui         $s0, 0x800F
    ctx->r16 = S32(0X800F << 16);
    // 0x00265614: addiu       $s0, $s0, 0x7078
    ctx->r16 = ADD32(ctx->r16, 0X7078);
    // 0x00265618: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0026561C: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x00265620: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x00265624: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x00265628: jal         0x00220260
    // 0x0026562C: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    func_00220260(rdram, ctx);
        goto after_0;
    // 0x0026562C: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    after_0:
    // 0x00265630: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x00265634: addiu       $a1, $zero, 0x4000
    ctx->r5 = ADD32(0, 0X4000);
    // 0x00265638: jal         0x0026E110
    // 0x0026563C: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    func_0026E110(rdram, ctx);
        goto after_1;
    // 0x0026563C: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    after_1:
    // 0x00265640: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x00265644: addiu       $a0, $a0, 0x2B8
    ctx->r4 = ADD32(ctx->r4, 0X2B8);
    // 0x00265648: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x0026564C: jal         0x002365F8
    // 0x00265650: sw          $zero, 0x64($s1)
    MEM_W(0X64, ctx->r17) = 0;
    func_002365F8(rdram, ctx);
        goto after_2;
    // 0x00265650: sw          $zero, 0x64($s1)
    MEM_W(0X64, ctx->r17) = 0;
    after_2:
    // 0x00265654: lw          $v1, 0x0($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X0);
    // 0x00265658: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x0026565C: beq         $v1, $v0, L_002656A4
    if (ctx->r3 == ctx->r2) {
        // 0x00265660: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_002656A4;
    }
    // 0x00265660: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x00265664: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x00265668: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x0026566C: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x00265670: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x00265674: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    // 0x00265678: lw          $t0, 0x8($s2)
    ctx->r8 = MEM_W(ctx->r18, 0X8);
    // 0x0026567C: lw          $t1, 0xC($s2)
    ctx->r9 = MEM_W(ctx->r18, 0XC);
    // 0x00265680: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x00265684: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x00265688: lw          $a3, 0x4($s2)
    ctx->r7 = MEM_W(ctx->r18, 0X4);
    // 0x0026568C: jal         0x00237EE4
    // 0x00265690: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    func_00237EE4(rdram, ctx);
        goto after_3;
    // 0x00265690: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    after_3:
    // 0x00265694: lw          $v0, 0xD4($s2)
    ctx->r2 = MEM_W(ctx->r18, 0XD4);
    // 0x00265698: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x0026569C: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x002656A0: sw          $v0, 0xD4($s2)
    MEM_W(0XD4, ctx->r18) = ctx->r2;
L_002656A4:
    // 0x002656A4: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x002656A8: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x002656AC: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x002656B0: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x002656B4: jr          $ra
    // 0x002656B8: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x002656B8: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_00294160(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00294160: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00294164: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00294168: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x0029416C: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x00294170: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00294174: lw          $a1, 0x8($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X8);
    // 0x00294178: beq         $a1, $zero, L_002941E8
    if (ctx->r5 == 0) {
        // 0x0029417C: addu        $s1, $a0, $zero
        ctx->r17 = ADD32(ctx->r4, 0);
            goto L_002941E8;
    }
    // 0x0029417C: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x00294180: lw          $v0, 0xD8($a1)
    ctx->r2 = MEM_W(ctx->r5, 0XD8);
    // 0x00294184: beq         $v0, $zero, L_002941DC
    if (ctx->r2 == 0) {
        // 0x00294188: nop
    
            goto L_002941DC;
    }
    // 0x00294188: nop

    // 0x0029418C: jal         0x00294B58
    // 0x00294190: nop

    func_00294B58(rdram, ctx);
        goto after_0;
    // 0x00294190: nop

    after_0:
    // 0x00294194: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    // 0x00294198: beq         $a2, $zero, L_002941E8
    if (ctx->r6 == 0) {
        // 0x0029419C: nop
    
            goto L_002941E8;
    }
    // 0x0029419C: nop

    // 0x002941A0: lw          $v1, 0x8($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X8);
    // 0x002941A4: lw          $v0, 0x1C($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X1C);
    // 0x002941A8: lw          $v1, 0xD8($v1)
    ctx->r3 = MEM_W(ctx->r3, 0XD8);
    // 0x002941AC: sh          $zero, 0x8($a2)
    MEM_H(0X8, ctx->r6) = 0;
    // 0x002941B0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x002941B4: sw          $v0, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r2;
    // 0x002941B8: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
    // 0x002941BC: sw          $v0, 0xC($a2)
    MEM_W(0XC, ctx->r6) = ctx->r2;
    // 0x002941C0: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
    // 0x002941C4: lw          $a0, 0xC($v0)
    ctx->r4 = MEM_W(ctx->r2, 0XC);
    // 0x002941C8: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x002941CC: jalr        $v0
    // 0x002941D0: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_1;
    // 0x002941D0: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_1:
    // 0x002941D4: j           L_002941E8
    // 0x002941D8: sw          $zero, 0x8($s0)
    MEM_W(0X8, ctx->r16) = 0;
        goto L_002941E8;
    // 0x002941D8: sw          $zero, 0x8($s0)
    MEM_W(0X8, ctx->r16) = 0;
L_002941DC:
    // 0x002941DC: jal         0x00294B9C
    // 0x002941E0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_00294B9C(rdram, ctx);
        goto after_2;
    // 0x002941E0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_2:
    // 0x002941E4: sw          $zero, 0x8($s0)
    MEM_W(0X8, ctx->r16) = 0;
L_002941E8:
    // 0x002941E8: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x002941EC: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x002941F0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x002941F4: jr          $ra
    // 0x002941F8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x002941F8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_00460094(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_00427318:
    // 0x00460094: jal         0x0020EF2C
    // 0x00460098: addu        $a2, $s4, $zero
    ctx->r6 = ADD32(ctx->r20, 0);
    func_0020EF2C(rdram, ctx);
        goto after_0;
L_00427414:
    // 0x00460098: addu        $a2, $s4, $zero
    ctx->r6 = ADD32(ctx->r20, 0);
    after_0:
    // 0x0046009C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x004600A0: addiu       $sp, $sp, -0x298
    ctx->r29 = ADD32(ctx->r29, -0X298);
    // 0x004600A4: sw          $s7, 0x28C($sp)
    MEM_W(0X28C, ctx->r29) = ctx->r23;
    // 0x004600A8: lw          $s7, 0x2A8($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X2A8);
    // 0x004600AC: sw          $s1, 0x274($sp)
    MEM_W(0X274, ctx->r29) = ctx->r17;
    // 0x004600B0: lw          $s1, 0x2AC($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2AC);
    // 0x004600B4: sw          $s3, 0x27C($sp)
    MEM_W(0X27C, ctx->r29) = ctx->r19;
    // 0x004600B8: addu        $s3, $a0, $zero
    ctx->r19 = ADD32(ctx->r4, 0);
    // 0x004600BC: sw          $s6, 0x288($sp)
    MEM_W(0X288, ctx->r29) = ctx->r22;
    // 0x004600C0: addu        $s6, $a3, $zero
    ctx->r22 = ADD32(ctx->r7, 0);
    // 0x004600C4: sw          $fp, 0x290($sp)
    MEM_W(0X290, ctx->r29) = ctx->r30;
    // 0x004600C8: addu        $fp, $zero, $zero
    ctx->r30 = ADD32(0, 0);
    // 0x004600CC: sw          $s0, 0x270($sp)
    MEM_W(0X270, ctx->r29) = ctx->r16;
    // 0x004600D0: sh          $a1, 0x250($sp)
    MEM_H(0X250, ctx->r29) = ctx->r5;
    // 0x004600D4: andi        $s0, $a1, 0xFFFF
    ctx->r16 = ctx->r5 & 0XFFFF;
    // 0x004600D8: sw          $ra, 0x294($sp)
    MEM_W(0X294, ctx->r29) = ctx->r31;
    // 0x004600DC: sw          $s5, 0x284($sp)
    MEM_W(0X284, ctx->r29) = ctx->r21;
    // 0x004600E0: sw          $s4, 0x280($sp)
    MEM_W(0X280, ctx->r29) = ctx->r20;
    // 0x004600E4: sw          $s2, 0x278($sp)
    MEM_W(0X278, ctx->r29) = ctx->r18;
    // 0x004600E8: sw          $zero, 0x254($sp)
    MEM_W(0X254, ctx->r29) = 0;
    // 0x004600EC: sb          $zero, 0x258($sp)
    MEM_B(0X258, ctx->r29) = 0;
    // 0x004600F0: beq         $s0, $zero, L_00460410
    if (ctx->r16 == 0) {
        // 0x004600F4: sw          $a2, 0x2A0($sp)
        MEM_W(0X2A0, ctx->r29) = ctx->r6;
            goto L_00460410;
    }
    // 0x004600F4: sw          $a2, 0x2A0($sp)
    MEM_W(0X2A0, ctx->r29) = ctx->r6;
    // 0x004600F8: beq         $a2, $zero, L_00460410
    if (ctx->r6 == 0) {
        // 0x004600FC: addiu       $a2, $s1, 0xFF
        ctx->r6 = ADD32(ctx->r17, 0XFF);
            goto L_00460410;
    }
    // 0x004600FC: addiu       $a2, $s1, 0xFF
    ctx->r6 = ADD32(ctx->r17, 0XFF);
    // 0x00460100: bltzl       $a2, L_00460108
    if (SIGNED(ctx->r6) < 0) {
        // 0x00460104: addiu       $a2, $s1, 0x1FE
        ctx->r6 = ADD32(ctx->r17, 0X1FE);
            goto L_00460108;
    }
    goto skip_0;
    // 0x00460104: addiu       $a2, $s1, 0x1FE
    ctx->r6 = ADD32(ctx->r17, 0X1FE);
    skip_0:
L_00460108:
    // 0x00460108: lw          $v0, 0x0($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X0);
    // 0x0046010C: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x00460110: beq         $v0, $zero, L_00460410
    if (ctx->r2 == 0) {
        // 0x00460114: sra         $s2, $a2, 8
        ctx->r18 = S32(SIGNED(ctx->r6) >> 8);
            goto L_00460410;
    }
    // 0x00460114: sra         $s2, $a2, 8
    ctx->r18 = S32(SIGNED(ctx->r6) >> 8);
    // 0x00460118: jal         0x00429D1C
    // 0x0046011C: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    func_00429D1C(rdram, ctx);
        goto after_1;
    // 0x0046011C: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    after_1:
    // 0x00460120: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
    // 0x00460124: beq         $v0, $v1, L_00460408
    if (ctx->r2 == ctx->r3) {
        // 0x00460128: addu        $a0, $s3, $zero
        ctx->r4 = ADD32(ctx->r19, 0);
            goto L_00460408;
    }
    // 0x00460128: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x0046012C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x00460130: lw          $a2, 0x2A0($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2A0);
    // 0x00460134: lw          $t0, 0x2B0($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2B0);
    // 0x00460138: addu        $a3, $s6, $zero
    ctx->r7 = ADD32(ctx->r22, 0);
    // 0x0046013C: sw          $s7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r23;
    // 0x00460140: jal         0x00429200
    // 0x00460144: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    entry_00429200(rdram, ctx);
        goto after_2;
    // 0x00460144: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    after_2:
    // 0x00460148: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x0046014C: beq         $v1, $zero, L_0046015C
    if (ctx->r3 == 0) {
        // 0x00460150: addiu       $v0, $zero, 0x5
        ctx->r2 = ADD32(0, 0X5);
            goto L_0046015C;
    }
    // 0x00460150: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x00460154: bne         $v1, $v0, L_00460414
    if (ctx->r3 != ctx->r2) {
        // 0x00460158: addu        $v0, $v1, $zero
        ctx->r2 = ADD32(ctx->r3, 0);
            goto L_00460414;
    }
    // 0x00460158: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
L_0046015C:
    // 0x0046015C: lw          $t0, 0x2B0($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2B0);
    // 0x00460160: lw          $v1, 0x0($t0)
    ctx->r3 = MEM_W(ctx->r8, 0X0);
    // 0x00460164: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x00460168: bne         $v1, $v0, L_00460414
    if (ctx->r3 != ctx->r2) {
        // 0x0046016C: addiu       $v0, $zero, 0x9
        ctx->r2 = ADD32(0, 0X9);
            goto L_00460414;
    }
    // 0x0046016C: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
    // 0x00460170: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x00460174: jal         0x00427D80
    // 0x00460178: addiu       $a1, $sp, 0x240
    ctx->r5 = ADD32(ctx->r29, 0X240);
    entry_00427D80(rdram, ctx);
        goto after_3;
    // 0x00460178: addiu       $a1, $sp, 0x240
    ctx->r5 = ADD32(ctx->r29, 0X240);
    after_3:
    // 0x0046017C: lw          $v0, 0x240($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X240);
    // 0x00460180: slt         $v0, $v0, $s1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r17) ? 1 : 0;
    // 0x00460184: bne         $v0, $zero, L_00460414
    if (ctx->r2 != 0) {
        // 0x00460188: addiu       $v0, $zero, 0x7
        ctx->r2 = ADD32(0, 0X7);
            goto L_00460414;
    }
    // 0x00460188: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x0046018C: beq         $s2, $zero, L_00460410
    if (ctx->r18 == 0) {
        // 0x00460190: addu        $a0, $s3, $zero
        ctx->r4 = ADD32(ctx->r19, 0);
            goto L_00460410;
    }
    // 0x00460190: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x00460194: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x00460198: addu        $a2, $a1, $zero
    ctx->r6 = ADD32(ctx->r5, 0);
    // 0x0046019C: lw          $t0, 0x2B0($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2B0);
    // 0x004601A0: addu        $a3, $a1, $zero
    ctx->r7 = ADD32(ctx->r5, 0);
    // 0x004601A4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x004601A8: jal         0x00429200
    // 0x004601AC: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    entry_00429200(rdram, ctx);
        goto after_4;
    // 0x004601AC: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    after_4:
    // 0x004601B0: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x004601B4: beq         $v1, $zero, L_004601C4
    if (ctx->r3 == 0) {
        // 0x004601B8: addiu       $v0, $zero, 0x5
        ctx->r2 = ADD32(0, 0X5);
            goto L_004601C4;
    }
    // 0x004601B8: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x004601BC: bne         $v1, $v0, L_00460414
    if (ctx->r3 != ctx->r2) {
        // 0x004601C0: addu        $v0, $v1, $zero
        ctx->r2 = ADD32(ctx->r3, 0);
            goto L_00460414;
    }
    // 0x004601C0: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
L_004601C4:
    // 0x004601C4: lw          $t0, 0x2B0($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2B0);
    // 0x004601C8: lw          $v1, 0x0($t0)
    ctx->r3 = MEM_W(ctx->r8, 0X0);
    // 0x004601CC: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x004601D0: bne         $v1, $v0, L_004601E8
    if (ctx->r3 != ctx->r2) {
        // 0x004601D4: addiu       $v0, $zero, 0x8
        ctx->r2 = ADD32(0, 0X8);
            goto L_004601E8;
    }
    // 0x004601D4: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x004601D8: j           L_00427414
    // 0x004601DC: nop

    entry_00427414(rdram, ctx);
    return;
    // 0x004601DC: nop

L_004601E0:
    // 0x004601E0: j           L_00427318
    // 0x004601E4: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    entry_00427318(rdram, ctx);
    return;
    // 0x004601E4: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
L_004601E8:
    // 0x004601E8: lbu         $v0, 0x64($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0X64);
    // 0x004601EC: beq         $v0, $zero, L_00460318
    if (ctx->r2 == 0) {
        // 0x004601F0: addu        $s1, $zero, $zero
        ctx->r17 = ADD32(0, 0);
            goto L_00460318;
    }
    // 0x004601F0: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x004601F4: addiu       $s5, $sp, 0x244
    ctx->r21 = ADD32(ctx->r29, 0X244);
    // 0x004601F8: addiu       $s4, $sp, 0x120
    ctx->r20 = ADD32(ctx->r29, 0X120);
    // 0x004601FC: addiu       $t0, $sp, 0x20
    ctx->r8 = ADD32(ctx->r29, 0X20);
    // 0x00460200: sw          $t0, 0x26C($sp)
    MEM_W(0X26C, ctx->r29) = ctx->r8;
    // 0x00460204: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
L_00460208:
    // 0x00460208: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x0046020C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x00460210: andi        $s0, $s1, 0xFF
    ctx->r16 = ctx->r17 & 0XFF;
    // 0x00460214: jal         0x004299C4
    // 0x00460218: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    entry_004299C4(rdram, ctx);
        goto after_5;
    // 0x00460218: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    after_5:
    // 0x0046021C: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x00460220: bne         $v1, $zero, L_00460408
    if (ctx->r3 != 0) {
        // 0x00460224: addu        $a0, $s3, $zero
        ctx->r4 = ADD32(ctx->r19, 0);
            goto L_00460408;
    }
    // 0x00460224: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x00460228: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x0046022C: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    // 0x00460230: addu        $a3, $s5, $zero
    ctx->r7 = ADD32(ctx->r21, 0);
    // 0x00460234: addiu       $v0, $sp, 0x248
    ctx->r2 = ADD32(ctx->r29, 0X248);
    // 0x00460238: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x0046023C: addiu       $v0, $sp, 0x24C
    ctx->r2 = ADD32(ctx->r29, 0X24C);
    // 0x00460240: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00460244: jal         0x00427444
    // 0x00460248: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    entry_00427444(rdram, ctx);
        goto after_6;
    // 0x00460248: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_6:
    // 0x0046024C: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x00460250: bne         $v1, $zero, L_00460408
    if (ctx->r3 != 0) {
        // 0x00460254: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_00460408;
    }
    // 0x00460254: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x00460258: lw          $v1, 0x244($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X244);
    // 0x0046025C: beql        $v1, $v0, L_00460304
    if (ctx->r3 == ctx->r2) {
        // 0x00460260: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_00460304;
    }
    goto skip_1;
    // 0x00460260: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_1:
    // 0x00460264: beq         $fp, $zero, L_004602A8
    if (ctx->r30 == 0) {
        // 0x00460268: addiu       $a2, $zero, 0x1
        ctx->r6 = ADD32(0, 0X1);
            goto L_004602A8;
    }
    // 0x00460268: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x0046026C: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x00460270: lw          $t0, 0x254($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X254);
    // 0x00460274: sllv        $v0, $t0, $a2
    ctx->r2 = S32(ctx->r8 << (ctx->r6 & 31));
    // 0x00460278: addu        $v0, $s4, $v0
    ctx->r2 = ADD32(ctx->r20, ctx->r2);
    // 0x0046027C: sb          $s1, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r17;
    // 0x00460280: lbu         $v1, 0x3($s5)
    ctx->r3 = MEM_BU(ctx->r21, 0X3);
    // 0x00460284: lbu         $a3, 0x258($sp)
    ctx->r7 = MEM_BU(ctx->r29, 0X258);
    // 0x00460288: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    // 0x0046028C: jal         0x004299C4
    // 0x00460290: sb          $v1, 0x1($v0)
    MEM_B(0X1, ctx->r2) = ctx->r3;
    entry_004299C4(rdram, ctx);
        goto after_7;
    // 0x00460290: sb          $v1, 0x1($v0)
    MEM_B(0X1, ctx->r2) = ctx->r3;
    after_7:
    // 0x00460294: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x00460298: beq         $v1, $zero, L_004602BC
    if (ctx->r3 == 0) {
        // 0x0046029C: addu        $a1, $zero, $zero
        ctx->r5 = ADD32(0, 0);
            goto L_004602BC;
    }
    // 0x0046029C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x004602A0: j           L_00427414
    // 0x004602A4: nop

    entry_00427414(rdram, ctx);
    return;
    // 0x004602A4: nop

L_004602A8:
    // 0x004602A8: lbu         $v1, 0x3($s5)
    ctx->r3 = MEM_BU(ctx->r21, 0X3);
    // 0x004602AC: sll         $v0, $s1, 8
    ctx->r2 = S32(ctx->r17 << 8);
    // 0x004602B0: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x004602B4: sh          $v0, 0x266($sp)
    MEM_H(0X266, ctx->r29) = ctx->r2;
    // 0x004602B8: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
L_004602BC:
    // 0x004602BC: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    // 0x004602C0: lw          $v1, 0x26C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X26C);
L_004602C4:
    // 0x004602C4: lhu         $v0, 0x0($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X0);
    // 0x004602C8: addiu       $v1, $v1, 0x2
    ctx->r3 = ADD32(ctx->r3, 0X2);
    // 0x004602CC: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x004602D0: sh          $v0, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r2;
    // 0x004602D4: slti        $v0, $a1, 0x80
    ctx->r2 = SIGNED(ctx->r5) < 0X80 ? 1 : 0;
    // 0x004602D8: bne         $v0, $zero, L_004602C4
    if (ctx->r2 != 0) {
        // 0x004602DC: addiu       $a0, $a0, 0x2
        ctx->r4 = ADD32(ctx->r4, 0X2);
            goto L_004602C4;
    }
    // 0x004602DC: addiu       $a0, $a0, 0x2
    ctx->r4 = ADD32(ctx->r4, 0X2);
    // 0x004602E0: lw          $v1, 0x248($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X248);
    // 0x004602E4: lw          $t0, 0x24C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24C);
    // 0x004602E8: addiu       $fp, $fp, 0x1
    ctx->r30 = ADD32(ctx->r30, 0X1);
    // 0x004602EC: sb          $s1, 0x258($sp)
    MEM_B(0X258, ctx->r29) = ctx->r17;
    // 0x004602F0: slt         $v0, $v1, $s2
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r18) ? 1 : 0;
    // 0x004602F4: beq         $v0, $zero, L_004601E0
    if (ctx->r2 == 0) {
        // 0x004602F8: sw          $t0, 0x254($sp)
        MEM_W(0X254, ctx->r29) = ctx->r8;
            goto L_004601E0;
    }
    // 0x004602F8: sw          $t0, 0x254($sp)
    MEM_W(0X254, ctx->r29) = ctx->r8;
    // 0x004602FC: subu        $s2, $s2, $v1
    ctx->r18 = SUB32(ctx->r18, ctx->r3);
    // 0x00460300: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_00460304:
    // 0x00460304: lbu         $v1, 0x64($s3)
    ctx->r3 = MEM_BU(ctx->r19, 0X64);
    // 0x00460308: andi        $v0, $s1, 0xFF
    ctx->r2 = ctx->r17 & 0XFF;
    // 0x0046030C: sltu        $v0, $v0, $v1
    ctx->r2 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x00460310: bnel        $v0, $zero, L_00460208
    if (ctx->r2 != 0) {
        // 0x00460314: addu        $a0, $s3, $zero
        ctx->r4 = ADD32(ctx->r19, 0);
            goto L_00460208;
    }
    goto skip_2;
    // 0x00460314: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    skip_2:
L_00460318:
    // 0x00460318: bgtz        $s2, L_00460414
    if (SIGNED(ctx->r18) > 0) {
        // 0x0046031C: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_00460414;
    }
    // 0x0046031C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x00460320: lw          $v1, 0x244($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X244);
    // 0x00460324: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x00460328: bne         $v1, $v0, L_00460338
    if (ctx->r3 != ctx->r2) {
        // 0x0046032C: addiu       $a1, $sp, 0x120
        ctx->r5 = ADD32(ctx->r29, 0X120);
            goto L_00460338;
    }
    // 0x0046032C: addiu       $a1, $sp, 0x120
    ctx->r5 = ADD32(ctx->r29, 0X120);
    // 0x00460330: j           L_00427414
    // 0x00460334: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    entry_00427414(rdram, ctx);
    return;
    // 0x00460334: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
L_00460338:
    // 0x00460338: lw          $t0, 0x254($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X254);
    // 0x0046033C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x00460340: sllv        $v0, $t0, $a2
    ctx->r2 = S32(ctx->r8 << (ctx->r6 & 31));
    // 0x00460344: addu        $v1, $a1, $v0
    ctx->r3 = ADD32(ctx->r5, ctx->r2);
    // 0x00460348: sb          $s1, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r17;
    // 0x0046034C: lbu         $v0, 0x247($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0X247);
    // 0x00460350: lbu         $a3, 0x258($sp)
    ctx->r7 = MEM_BU(ctx->r29, 0X258);
    // 0x00460354: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x00460358: jal         0x004299C4
    // 0x0046035C: sb          $v0, 0x1($v1)
    MEM_B(0X1, ctx->r3) = ctx->r2;
    entry_004299C4(rdram, ctx);
        goto after_8;
    // 0x0046035C: sb          $v0, 0x1($v1)
    MEM_B(0X1, ctx->r3) = ctx->r2;
    after_8:
    // 0x00460360: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x00460364: bne         $v1, $zero, L_00460414
    if (ctx->r3 != 0) {
        // 0x00460368: addu        $a1, $zero, $zero
        ctx->r5 = ADD32(0, 0);
            goto L_00460414;
    }
    // 0x00460368: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x0046036C: lhu         $t0, 0x266($sp)
    ctx->r8 = MEM_HU(ctx->r29, 0X266);
    // 0x00460370: sh          $t0, 0x226($sp)
    MEM_H(0X226, ctx->r29) = ctx->r8;
    // 0x00460374: lhu         $t0, 0x250($sp)
    ctx->r8 = MEM_HU(ctx->r29, 0X250);
    // 0x00460378: sh          $t0, 0x224($sp)
    MEM_H(0X224, ctx->r29) = ctx->r8;
    // 0x0046037C: lw          $t0, 0x2A0($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2A0);
    // 0x00460380: addiu       $a0, $sp, 0x220
    ctx->r4 = ADD32(ctx->r29, 0X220);
    // 0x00460384: sh          $zero, 0x22A($sp)
    MEM_H(0X22A, ctx->r29) = 0;
    // 0x00460388: sw          $t0, 0x220($sp)
    MEM_W(0X220, ctx->r29) = ctx->r8;
L_0046038C:
    // 0x0046038C: lbu         $v1, 0x0($s6)
    ctx->r3 = MEM_BU(ctx->r22, 0X0);
    // 0x00460390: addu        $v0, $a0, $a1
    ctx->r2 = ADD32(ctx->r4, ctx->r5);
    // 0x00460394: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x00460398: sb          $v1, 0x10($v0)
    MEM_B(0X10, ctx->r2) = ctx->r3;
    // 0x0046039C: slti        $v0, $a1, 0x10
    ctx->r2 = SIGNED(ctx->r5) < 0X10 ? 1 : 0;
    // 0x004603A0: bne         $v0, $zero, L_0046038C
    if (ctx->r2 != 0) {
        // 0x004603A4: addiu       $s6, $s6, 0x1
        ctx->r22 = ADD32(ctx->r22, 0X1);
            goto L_0046038C;
    }
    // 0x004603A4: addiu       $s6, $s6, 0x1
    ctx->r22 = ADD32(ctx->r22, 0X1);
    // 0x004603A8: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x004603AC: addiu       $a0, $sp, 0x220
    ctx->r4 = ADD32(ctx->r29, 0X220);
L_004603B0:
    // 0x004603B0: lbu         $v1, 0x0($s7)
    ctx->r3 = MEM_BU(ctx->r23, 0X0);
    // 0x004603B4: addu        $v0, $a0, $a1
    ctx->r2 = ADD32(ctx->r4, ctx->r5);
    // 0x004603B8: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x004603BC: sb          $v1, 0xC($v0)
    MEM_B(0XC, ctx->r2) = ctx->r3;
    // 0x004603C0: slti        $v0, $a1, 0x4
    ctx->r2 = SIGNED(ctx->r5) < 0X4 ? 1 : 0;
    // 0x004603C4: bne         $v0, $zero, L_004603B0
    if (ctx->r2 != 0) {
        // 0x004603C8: addiu       $s7, $s7, 0x1
        ctx->r23 = ADD32(ctx->r23, 0X1);
            goto L_004603B0;
    }
    // 0x004603C8: addiu       $s7, $s7, 0x1
    ctx->r23 = ADD32(ctx->r23, 0X1);
    // 0x004603CC: lw          $t0, 0x2B0($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2B0);
    // 0x004603D0: lhu         $a2, 0x5E($s3)
    ctx->r6 = MEM_HU(ctx->r19, 0X5E);
    // 0x004603D4: lhu         $v0, 0x2($t0)
    ctx->r2 = MEM_HU(ctx->r8, 0X2);
    // 0x004603D8: addiu       $a3, $sp, 0x220
    ctx->r7 = ADD32(ctx->r29, 0X220);
    // 0x004603DC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x004603E0: lw          $a0, 0x4($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X4);
    // 0x004603E4: lw          $a1, 0x8($s3)
    ctx->r5 = MEM_W(ctx->r19, 0X8);
    // 0x004603E8: addu        $a2, $a2, $v0
    ctx->r6 = ADD32(ctx->r6, ctx->r2);
    // 0x004603EC: jal         0x00299A40
    // 0x004603F0: andi        $a2, $a2, 0xFFFF
    ctx->r6 = ctx->r6 & 0XFFFF;
    func_00299A40(rdram, ctx);
        goto after_9;
    // 0x004603F0: andi        $a2, $a2, 0xFFFF
    ctx->r6 = ctx->r6 & 0XFFFF;
    after_9:
    // 0x004603F4: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x004603F8: beql        $v1, $zero, L_00460414
    if (ctx->r3 == 0) {
        // 0x004603FC: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_00460414;
    }
    goto skip_3;
    // 0x004603FC: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    skip_3:
    // 0x00460400: j           L_00427414
    // 0x00460404: nop

    entry_00427414(rdram, ctx);
    return;
    // 0x00460404: nop

L_00460408:
    // 0x00460408: j           L_00427414
    // 0x0046040C: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
    entry_00427414(rdram, ctx);
    return;
    // 0x0046040C: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
L_00460410:
    // 0x00460410: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
L_00460414:
    // 0x00460414: lw          $ra, 0x294($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X294);
    // 0x00460418: lw          $fp, 0x290($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X290);
    // 0x0046041C: lw          $s7, 0x28C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X28C);
    // 0x00460420: lw          $s6, 0x288($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X288);
    // 0x00460424: lw          $s5, 0x284($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X284);
    // 0x00460428: lw          $s4, 0x280($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X280);
    // 0x0046042C: lw          $s3, 0x27C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X27C);
    // 0x00460430: lw          $s2, 0x278($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X278);
    // 0x00460434: lw          $s1, 0x274($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X274);
    // 0x00460438: lw          $s0, 0x270($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X270);
    // 0x0046043C: jr          $ra
    // 0x00460440: addiu       $sp, $sp, 0x298
    ctx->r29 = ADD32(ctx->r29, 0X298);
    return;
    // 0x00460440: addiu       $sp, $sp, 0x298
    ctx->r29 = ADD32(ctx->r29, 0X298);
;}
