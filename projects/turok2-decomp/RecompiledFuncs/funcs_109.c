#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void entry_00429014(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_00428D88:
    // 0x00429014: nop

L_00428F60:
    // 0x00429018: sb          $v1, 0x65($s2)
    MEM_B(0X65, ctx->r18) = ctx->r3;
    // 0x0042901C: jal         0x00429EC4
    // 0x00429020: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_00429EC4(rdram, ctx);
        goto after_0;
    // 0x00429020: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_0:
    // 0x00429024: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x00429028: bne         $v1, $zero, L_004290F4
    if (ctx->r3 != 0) {
        // 0x0042902C: addu        $v0, $v1, $zero
        ctx->r2 = ADD32(ctx->r3, 0);
            goto L_004290F4;
    }
    // 0x0042902C: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
    // 0x00429030: lbu         $v0, 0x13B($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0X13B);
    // 0x00429034: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x00429038: addu        $a2, $v0, $s1
    ctx->r6 = ADD32(ctx->r2, ctx->r17);
    // 0x0042903C: andi        $v0, $s5, 0xFF
    ctx->r2 = ctx->r21 & 0XFF;
    // 0x00429040: bne         $v0, $zero, L_00429060
    if (ctx->r2 != 0) {
        // 0x00429044: andi        $a2, $a2, 0xFFFF
        ctx->r6 = ctx->r6 & 0XFFFF;
            goto L_00429060;
    }
    // 0x00429044: andi        $a2, $a2, 0xFFFF
    ctx->r6 = ctx->r6 & 0XFFFF;
    // 0x00429048: lw          $a0, 0x4($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X4);
    // 0x0042904C: lw          $a1, 0x8($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X8);
    // 0x00429050: jal         0x00299680
    // 0x00429054: addu        $a3, $s3, $zero
    ctx->r7 = ADD32(ctx->r19, 0);
    func_00299680(rdram, ctx);
        goto after_1;
    // 0x00429054: addu        $a3, $s3, $zero
    ctx->r7 = ADD32(ctx->r19, 0);
    after_1:
    // 0x00429058: j           L_00429078
    // 0x0042905C: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
        goto L_00429078;
    // 0x0042905C: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
L_00429060:
    // 0x00429060: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x00429064: lw          $a0, 0x4($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X4);
    // 0x00429068: lw          $a1, 0x8($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X8);
    // 0x0042906C: jal         0x00299A40
    // 0x00429070: addu        $a3, $s3, $zero
    ctx->r7 = ADD32(ctx->r19, 0);
    func_00299A40(rdram, ctx);
        goto after_2;
    // 0x00429070: addu        $a3, $s3, $zero
    ctx->r7 = ADD32(ctx->r19, 0);
    after_2:
    // 0x00429074: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
L_00429078:
    // 0x00429078: bne         $v1, $zero, L_00428D88
    if (ctx->r3 != 0) {
        // 0x0042907C: addiu       $s3, $s3, 0x20
        ctx->r19 = ADD32(ctx->r19, 0X20);
            goto L_00428D88;
    }
    // 0x0042907C: addiu       $s3, $s3, 0x20
    ctx->r19 = ADD32(ctx->r19, 0X20);
    // 0x00429080: addiu       $s4, $s4, -0x1
    ctx->r20 = ADD32(ctx->r20, -0X1);
    // 0x00429084: bgtz        $s4, L_00428F60
    if (SIGNED(ctx->r20) > 0) {
        // 0x00429088: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_00428F60;
    }
    // 0x00429088: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x0042908C: andi        $v1, $s5, 0xFF
    ctx->r3 = ctx->r21 & 0XFF;
    // 0x00429090: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00429094: bne         $v1, $v0, L_004290F4
    if (ctx->r3 != ctx->r2) {
        // 0x00429098: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_004290F4;
    }
    // 0x00429098: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x0042909C: lbu         $v1, 0x20($sp)
    ctx->r3 = MEM_BU(ctx->r29, 0X20);
    // 0x004290A0: andi        $v0, $v1, 0x2
    ctx->r2 = ctx->r3 & 0X2;
    // 0x004290A4: bne         $v0, $zero, L_004290F4
    if (ctx->r2 != 0) {
        // 0x004290A8: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_004290F4;
    }
    // 0x004290A8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x004290AC: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x004290B0: ori         $v0, $v1, 0x2
    ctx->r2 = ctx->r3 | 0X2;
    // 0x004290B4: sb          $v0, 0x20($sp)
    MEM_B(0X20, ctx->r29) = ctx->r2;
    // 0x004290B8: jal         0x00429EC4
    // 0x004290BC: sb          $zero, 0x65($s2)
    MEM_B(0X65, ctx->r18) = 0;
    func_00429EC4(rdram, ctx);
        goto after_3;
    // 0x004290BC: sb          $zero, 0x65($s2)
    MEM_B(0X65, ctx->r18) = 0;
    after_3:
    // 0x004290C0: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x004290C4: bne         $v1, $zero, L_004290F4
    if (ctx->r3 != 0) {
        // 0x004290C8: addiu       $a3, $sp, 0x18
        ctx->r7 = ADD32(ctx->r29, 0X18);
            goto L_004290F4;
    }
    // 0x004290C8: addiu       $a3, $sp, 0x18
    ctx->r7 = ADD32(ctx->r29, 0X18);
    // 0x004290CC: lhu         $a2, 0x5E($s2)
    ctx->r6 = MEM_HU(ctx->r18, 0X5E);
    // 0x004290D0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x004290D4: lw          $a0, 0x4($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X4);
    // 0x004290D8: lw          $a1, 0x8($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X8);
    // 0x004290DC: addu        $a2, $a2, $fp
    ctx->r6 = ADD32(ctx->r6, ctx->r30);
    // 0x004290E0: jal         0x00299A40
    // 0x004290E4: andi        $a2, $a2, 0xFFFF
    ctx->r6 = ctx->r6 & 0XFFFF;
    func_00299A40(rdram, ctx);
        goto after_4;
    // 0x004290E4: andi        $a2, $a2, 0xFFFF
    ctx->r6 = ctx->r6 & 0XFFFF;
    after_4:
    // 0x004290E8: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x004290EC: beql        $v1, $zero, L_004290F4
    if (ctx->r3 == 0) {
        // 0x004290F0: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_004290F4;
    }
    goto skip_0;
    // 0x004290F0: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    skip_0:
L_004290F4:
    // 0x004290F4: lw          $ra, 0x164($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X164);
    // 0x004290F8: lw          $fp, 0x160($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X160);
    // 0x004290FC: lw          $s7, 0x15C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X15C);
    // 0x00429100: lw          $s6, 0x158($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X158);
    // 0x00429104: lw          $s5, 0x154($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X154);
    // 0x00429108: lw          $s4, 0x150($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X150);
    // 0x0042910C: lw          $s3, 0x14C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X14C);
    // 0x00429110: lw          $s2, 0x148($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X148);
    // 0x00429114: lw          $s1, 0x144($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X144);
    // 0x00429118: lw          $s0, 0x140($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X140);
    // 0x0042911C: jr          $ra
    // 0x00429120: addiu       $sp, $sp, 0x168
    ctx->r29 = ADD32(ctx->r29, 0X168);
    return;
    // 0x00429120: addiu       $sp, $sp, 0x168
    ctx->r29 = ADD32(ctx->r29, 0X168);
;}
RECOMP_FUNC void entry_00429050(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_00428D88:
    // 0x00429050: jal         0x00299680
    // 0x00429054: addu        $a3, $s3, $zero
    ctx->r7 = ADD32(ctx->r19, 0);
    func_00299680(rdram, ctx);
        goto after_0;
L_00428F60:
    // 0x00429054: addu        $a3, $s3, $zero
    ctx->r7 = ADD32(ctx->r19, 0);
    after_0:
    // 0x00429058: j           L_00429078
    // 0x0042905C: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
        goto L_00429078;
    // 0x0042905C: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x00429060: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x00429064: lw          $a0, 0x4($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X4);
    // 0x00429068: lw          $a1, 0x8($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X8);
    // 0x0042906C: jal         0x00299A40
    // 0x00429070: addu        $a3, $s3, $zero
    ctx->r7 = ADD32(ctx->r19, 0);
    func_00299A40(rdram, ctx);
        goto after_1;
    // 0x00429070: addu        $a3, $s3, $zero
    ctx->r7 = ADD32(ctx->r19, 0);
    after_1:
    // 0x00429074: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
L_00429078:
    // 0x00429078: bne         $v1, $zero, L_00428D88
    if (ctx->r3 != 0) {
        // 0x0042907C: addiu       $s3, $s3, 0x20
        ctx->r19 = ADD32(ctx->r19, 0X20);
            goto L_00428D88;
    }
    // 0x0042907C: addiu       $s3, $s3, 0x20
    ctx->r19 = ADD32(ctx->r19, 0X20);
    // 0x00429080: addiu       $s4, $s4, -0x1
    ctx->r20 = ADD32(ctx->r20, -0X1);
    // 0x00429084: bgtz        $s4, L_00428F60
    if (SIGNED(ctx->r20) > 0) {
        // 0x00429088: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_00428F60;
    }
    // 0x00429088: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x0042908C: andi        $v1, $s5, 0xFF
    ctx->r3 = ctx->r21 & 0XFF;
    // 0x00429090: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00429094: bne         $v1, $v0, L_004290F4
    if (ctx->r3 != ctx->r2) {
        // 0x00429098: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_004290F4;
    }
    // 0x00429098: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x0042909C: lbu         $v1, 0x20($sp)
    ctx->r3 = MEM_BU(ctx->r29, 0X20);
    // 0x004290A0: andi        $v0, $v1, 0x2
    ctx->r2 = ctx->r3 & 0X2;
    // 0x004290A4: bne         $v0, $zero, L_004290F4
    if (ctx->r2 != 0) {
        // 0x004290A8: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_004290F4;
    }
    // 0x004290A8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x004290AC: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x004290B0: ori         $v0, $v1, 0x2
    ctx->r2 = ctx->r3 | 0X2;
    // 0x004290B4: sb          $v0, 0x20($sp)
    MEM_B(0X20, ctx->r29) = ctx->r2;
    // 0x004290B8: jal         0x00429EC4
    // 0x004290BC: sb          $zero, 0x65($s2)
    MEM_B(0X65, ctx->r18) = 0;
    func_00429EC4(rdram, ctx);
        goto after_2;
    // 0x004290BC: sb          $zero, 0x65($s2)
    MEM_B(0X65, ctx->r18) = 0;
    after_2:
    // 0x004290C0: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x004290C4: bne         $v1, $zero, L_004290F4
    if (ctx->r3 != 0) {
        // 0x004290C8: addiu       $a3, $sp, 0x18
        ctx->r7 = ADD32(ctx->r29, 0X18);
            goto L_004290F4;
    }
    // 0x004290C8: addiu       $a3, $sp, 0x18
    ctx->r7 = ADD32(ctx->r29, 0X18);
    // 0x004290CC: lhu         $a2, 0x5E($s2)
    ctx->r6 = MEM_HU(ctx->r18, 0X5E);
    // 0x004290D0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x004290D4: lw          $a0, 0x4($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X4);
    // 0x004290D8: lw          $a1, 0x8($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X8);
    // 0x004290DC: addu        $a2, $a2, $fp
    ctx->r6 = ADD32(ctx->r6, ctx->r30);
    // 0x004290E0: jal         0x00299A40
    // 0x004290E4: andi        $a2, $a2, 0xFFFF
    ctx->r6 = ctx->r6 & 0XFFFF;
    func_00299A40(rdram, ctx);
        goto after_3;
    // 0x004290E4: andi        $a2, $a2, 0xFFFF
    ctx->r6 = ctx->r6 & 0XFFFF;
    after_3:
    // 0x004290E8: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x004290EC: beql        $v1, $zero, L_004290F4
    if (ctx->r3 == 0) {
        // 0x004290F0: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_004290F4;
    }
    goto skip_0;
    // 0x004290F0: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    skip_0:
L_004290F4:
    // 0x004290F4: lw          $ra, 0x164($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X164);
    // 0x004290F8: lw          $fp, 0x160($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X160);
    // 0x004290FC: lw          $s7, 0x15C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X15C);
    // 0x00429100: lw          $s6, 0x158($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X158);
    // 0x00429104: lw          $s5, 0x154($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X154);
    // 0x00429108: lw          $s4, 0x150($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X150);
    // 0x0042910C: lw          $s3, 0x14C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X14C);
    // 0x00429110: lw          $s2, 0x148($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X148);
    // 0x00429114: lw          $s1, 0x144($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X144);
    // 0x00429118: lw          $s0, 0x140($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X140);
    // 0x0042911C: jr          $ra
    // 0x00429120: addiu       $sp, $sp, 0x168
    ctx->r29 = ADD32(ctx->r29, 0X168);
    return;
    // 0x00429120: addiu       $sp, $sp, 0x168
    ctx->r29 = ADD32(ctx->r29, 0X168);
;}
RECOMP_FUNC void entry_004291EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004291EC: bne         $v1, $zero, L_004292CC
    if (ctx->r3 != 0) {
        // 0x004291F0: addu        $v0, $v1, $zero
        ctx->r2 = ADD32(ctx->r3, 0);
            goto L_004292CC;
    }
    // 0x004291F0: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
    // 0x004291F4: lhu         $v0, 0x18($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X18);
    // 0x004291F8: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x004291FC: bne         $v0, $zero, L_0042923C
    if (ctx->r2 != 0) {
        // 0x00429200: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_0042923C;
    }
    // 0x00429200: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x00429204: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x00429208: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x0042920C: addiu       $s0, $sp, 0x30
    ctx->r16 = ADD32(ctx->r29, 0X30);
    // 0x00429210: jal         0x00429460
    // 0x00429214: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    func_00429460(rdram, ctx);
        goto after_0;
    // 0x00429214: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    after_0:
    // 0x00429218: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x0042921C: bne         $v1, $zero, L_004292CC
    if (ctx->r3 != 0) {
        // 0x00429220: nop
    
            goto L_004292CC;
    }
    // 0x00429220: nop

    // 0x00429224: lhu         $v0, 0x48($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X48);
    // 0x00429228: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x0042922C: bne         $v0, $zero, L_0042923C
    if (ctx->r2 != 0) {
        // 0x00429230: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_0042923C;
    }
    // 0x00429230: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x00429234: j           L_004292CC
    // 0x00429238: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
        goto L_004292CC;
    // 0x00429238: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
L_0042923C:
    // 0x0042923C: addu        $v1, $s1, $a0
    ctx->r3 = ADD32(ctx->r17, ctx->r4);
L_00429240:
    // 0x00429240: addu        $v0, $s0, $a0
    ctx->r2 = ADD32(ctx->r16, ctx->r4);
    // 0x00429244: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x00429248: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x0042924C: sb          $v0, 0xC($v1)
    MEM_B(0XC, ctx->r3) = ctx->r2;
    // 0x00429250: slti        $v0, $a0, 0x20
    ctx->r2 = SIGNED(ctx->r4) < 0X20 ? 1 : 0;
    // 0x00429254: bne         $v0, $zero, L_00429240
    if (ctx->r2 != 0) {
        // 0x00429258: addu        $v1, $s1, $a0
        ctx->r3 = ADD32(ctx->r17, ctx->r4);
            goto L_00429240;
    }
    // 0x00429258: addu        $v1, $s1, $a0
    ctx->r3 = ADD32(ctx->r17, ctx->r4);
    // 0x0042925C: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
    // 0x00429260: lw          $a0, 0x4($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X4);
    // 0x00429264: lw          $a1, 0x8($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X8);
    // 0x00429268: lbu         $v0, 0x1B($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X1B);
    // 0x0042926C: addiu       $a3, $s1, 0x2C
    ctx->r7 = ADD32(ctx->r17, 0X2C);
    // 0x00429270: sw          $v0, 0x4C($s1)
    MEM_W(0X4C, ctx->r17) = ctx->r2;
    // 0x00429274: lbu         $v1, 0x1A($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X1A);
    // 0x00429278: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x0042927C: sw          $v0, 0x50($s1)
    MEM_W(0X50, ctx->r17) = ctx->r2;
    // 0x00429280: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x00429284: sw          $v0, 0x54($s1)
    MEM_W(0X54, ctx->r17) = ctx->r2;
    // 0x00429288: sb          $v1, 0x64($s1)
    MEM_B(0X64, ctx->r17) = ctx->r3;
    // 0x0042928C: andi        $v1, $v1, 0xFF
    ctx->r3 = ctx->r3 & 0XFF;
    // 0x00429290: sll         $v1, $v1, 1
    ctx->r3 = S32(ctx->r3 << 1);
    // 0x00429294: lbu         $v0, 0x64($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X64);
    // 0x00429298: addiu       $v1, $v1, 0x3
    ctx->r3 = ADD32(ctx->r3, 0X3);
    // 0x0042929C: sw          $v1, 0x60($s1)
    MEM_W(0X60, ctx->r17) = ctx->r3;
    // 0x004292A0: lbu         $v1, 0x64($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X64);
    // 0x004292A4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x004292A8: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x004292AC: sll         $v1, $v1, 3
    ctx->r3 = S32(ctx->r3 << 3);
    // 0x004292B0: sw          $v0, 0x58($s1)
    MEM_W(0X58, ctx->r17) = ctx->r2;
    // 0x004292B4: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x004292B8: jal         0x00299680
    // 0x004292BC: sw          $v0, 0x5C($s1)
    MEM_W(0X5C, ctx->r17) = ctx->r2;
    func_00299680(rdram, ctx);
        goto after_1;
    // 0x004292BC: sw          $v0, 0x5C($s1)
    MEM_W(0X5C, ctx->r17) = ctx->r2;
    after_1:
    // 0x004292C0: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x004292C4: beql        $v1, $zero, L_004292CC
    if (ctx->r3 == 0) {
        // 0x004292C8: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_004292CC;
    }
    goto skip_0;
    // 0x004292C8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    skip_0:
L_004292CC:
    // 0x004292CC: lw          $ra, 0x60($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X60);
    // 0x004292D0: lw          $s1, 0x5C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X5C);
    // 0x004292D4: lw          $s0, 0x58($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X58);
    // 0x004292D8: jr          $ra
    // 0x004292DC: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    return;
    // 0x004292DC: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
;}
RECOMP_FUNC void entry_00429200(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00429200: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x00429204: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x00429208: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x0042920C: addiu       $s0, $sp, 0x30
    ctx->r16 = ADD32(ctx->r29, 0X30);
    // 0x00429210: jal         0x00429460
    // 0x00429214: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    func_00429460(rdram, ctx);
        goto after_0;
    // 0x00429214: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    after_0:
    // 0x00429218: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x0042921C: bne         $v1, $zero, L_004292CC
    if (ctx->r3 != 0) {
        // 0x00429220: nop
    
            goto L_004292CC;
    }
    // 0x00429220: nop

    // 0x00429224: lhu         $v0, 0x48($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X48);
    // 0x00429228: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x0042922C: bne         $v0, $zero, L_0042923C
    if (ctx->r2 != 0) {
        // 0x00429230: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_0042923C;
    }
    // 0x00429230: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x00429234: j           L_004292CC
    // 0x00429238: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
        goto L_004292CC;
    // 0x00429238: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
L_0042923C:
    // 0x0042923C: addu        $v1, $s1, $a0
    ctx->r3 = ADD32(ctx->r17, ctx->r4);
L_00429240:
    // 0x00429240: addu        $v0, $s0, $a0
    ctx->r2 = ADD32(ctx->r16, ctx->r4);
    // 0x00429244: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x00429248: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x0042924C: sb          $v0, 0xC($v1)
    MEM_B(0XC, ctx->r3) = ctx->r2;
    // 0x00429250: slti        $v0, $a0, 0x20
    ctx->r2 = SIGNED(ctx->r4) < 0X20 ? 1 : 0;
    // 0x00429254: bne         $v0, $zero, L_00429240
    if (ctx->r2 != 0) {
        // 0x00429258: addu        $v1, $s1, $a0
        ctx->r3 = ADD32(ctx->r17, ctx->r4);
            goto L_00429240;
    }
    // 0x00429258: addu        $v1, $s1, $a0
    ctx->r3 = ADD32(ctx->r17, ctx->r4);
    // 0x0042925C: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
    // 0x00429260: lw          $a0, 0x4($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X4);
    // 0x00429264: lw          $a1, 0x8($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X8);
    // 0x00429268: lbu         $v0, 0x1B($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X1B);
    // 0x0042926C: addiu       $a3, $s1, 0x2C
    ctx->r7 = ADD32(ctx->r17, 0X2C);
    // 0x00429270: sw          $v0, 0x4C($s1)
    MEM_W(0X4C, ctx->r17) = ctx->r2;
    // 0x00429274: lbu         $v1, 0x1A($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X1A);
    // 0x00429278: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x0042927C: sw          $v0, 0x50($s1)
    MEM_W(0X50, ctx->r17) = ctx->r2;
    // 0x00429280: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x00429284: sw          $v0, 0x54($s1)
    MEM_W(0X54, ctx->r17) = ctx->r2;
    // 0x00429288: sb          $v1, 0x64($s1)
    MEM_B(0X64, ctx->r17) = ctx->r3;
    // 0x0042928C: andi        $v1, $v1, 0xFF
    ctx->r3 = ctx->r3 & 0XFF;
    // 0x00429290: sll         $v1, $v1, 1
    ctx->r3 = S32(ctx->r3 << 1);
    // 0x00429294: lbu         $v0, 0x64($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X64);
    // 0x00429298: addiu       $v1, $v1, 0x3
    ctx->r3 = ADD32(ctx->r3, 0X3);
    // 0x0042929C: sw          $v1, 0x60($s1)
    MEM_W(0X60, ctx->r17) = ctx->r3;
    // 0x004292A0: lbu         $v1, 0x64($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X64);
    // 0x004292A4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x004292A8: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x004292AC: sll         $v1, $v1, 3
    ctx->r3 = S32(ctx->r3 << 3);
    // 0x004292B0: sw          $v0, 0x58($s1)
    MEM_W(0X58, ctx->r17) = ctx->r2;
    // 0x004292B4: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x004292B8: jal         0x00299680
    // 0x004292BC: sw          $v0, 0x5C($s1)
    MEM_W(0X5C, ctx->r17) = ctx->r2;
    func_00299680(rdram, ctx);
        goto after_1;
    // 0x004292BC: sw          $v0, 0x5C($s1)
    MEM_W(0X5C, ctx->r17) = ctx->r2;
    after_1:
    // 0x004292C0: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x004292C4: beql        $v1, $zero, L_004292CC
    if (ctx->r3 == 0) {
        // 0x004292C8: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_004292CC;
    }
    goto skip_0;
    // 0x004292C8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    skip_0:
L_004292CC:
    // 0x004292CC: lw          $ra, 0x60($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X60);
    // 0x004292D0: lw          $s1, 0x5C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X5C);
    // 0x004292D4: lw          $s0, 0x58($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X58);
    // 0x004292D8: jr          $ra
    // 0x004292DC: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    return;
    // 0x004292DC: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
;}
RECOMP_FUNC void entry_004292D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004292D4: lw          $s0, 0x58($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X58);
    // 0x004292D8: jr          $ra
    // 0x004292DC: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    return;
    // 0x004292DC: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
;}
RECOMP_FUNC void entry_00429308(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00429308: addu        $s4, $a3, $zero
    ctx->r20 = ADD32(ctx->r7, 0);
    // 0x0042930C: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x00429310: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x00429314: sw          $ra, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r31;
    // 0x00429318: sw          $s6, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r22;
    // 0x0042931C: jal         0x00429DFC
    // 0x00429320: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    func_00429DFC(rdram, ctx);
        goto after_0;
    // 0x00429320: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    after_0:
    // 0x00429324: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
    // 0x00429328: beq         $v0, $v1, L_00429428
    if (ctx->r2 == ctx->r3) {
        // 0x0042932C: addu        $v0, $v1, $zero
        ctx->r2 = ADD32(ctx->r3, 0);
            goto L_00429428;
    }
    // 0x0042932C: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
    // 0x00429330: lw          $v0, 0x50($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X50);
    // 0x00429334: blez        $v0, L_0042941C
    if (SIGNED(ctx->r2) <= 0) {
        // 0x00429338: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_0042941C;
    }
    // 0x00429338: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x0042933C: andi        $s6, $s1, 0xFFFF
    ctx->r22 = ctx->r17 & 0XFFFF;
    // 0x00429340: addiu       $s1, $sp, 0x10
    ctx->r17 = ADD32(ctx->r29, 0X10);
    // 0x00429344: addiu       $a3, $sp, 0x10
    ctx->r7 = ADD32(ctx->r29, 0X10);
L_00429348:
    // 0x00429348: lhu         $a2, 0x5E($s2)
    ctx->r6 = MEM_HU(ctx->r18, 0X5E);
    // 0x0042934C: lw          $a0, 0x4($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X4);
    // 0x00429350: lw          $a1, 0x8($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X8);
    // 0x00429354: addu        $a2, $a2, $s0
    ctx->r6 = ADD32(ctx->r6, ctx->r16);
    // 0x00429358: jal         0x00299680
    // 0x0042935C: andi        $a2, $a2, 0xFFFF
    ctx->r6 = ctx->r6 & 0XFFFF;
    func_00299680(rdram, ctx);
        goto after_1;
    // 0x0042935C: andi        $a2, $a2, 0xFFFF
    ctx->r6 = ctx->r6 & 0XFFFF;
    after_1:
    // 0x00429360: addu        $a3, $v0, $zero
    ctx->r7 = ADD32(ctx->r2, 0);
    // 0x00429364: bne         $a3, $zero, L_00429428
    if (ctx->r7 != 0) {
        // 0x00429368: addu        $v0, $a3, $zero
        ctx->r2 = ADD32(ctx->r7, 0);
            goto L_00429428;
    }
    // 0x00429368: addu        $v0, $a3, $zero
    ctx->r2 = ADD32(ctx->r7, 0);
    // 0x0042936C: lhu         $v0, 0x14($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X14);
    // 0x00429370: bne         $v0, $s6, L_00429408
    if (ctx->r2 != ctx->r22) {
        // 0x00429374: nop
    
            goto L_00429408;
    }
    // 0x00429374: nop

    // 0x00429378: lw          $v0, 0x10($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X10);
    // 0x0042937C: bne         $v0, $s7, L_00429408
    if (ctx->r2 != ctx->r23) {
        // 0x00429380: nop
    
            goto L_00429408;
    }
    // 0x00429380: nop

    // 0x00429384: beq         $s4, $zero, L_004293B4
    if (ctx->r20 == 0) {
        // 0x00429388: addu        $a2, $zero, $zero
        ctx->r6 = ADD32(0, 0);
            goto L_004293B4;
    }
    // 0x00429388: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x0042938C: addu        $a1, $a2, $zero
    ctx->r5 = ADD32(ctx->r6, 0);
    // 0x00429390: addu        $v0, $s1, $a1
    ctx->r2 = ADD32(ctx->r17, ctx->r5);
L_00429394:
    // 0x00429394: addu        $v1, $s4, $a1
    ctx->r3 = ADD32(ctx->r20, ctx->r5);
    // 0x00429398: lbu         $a0, 0x10($v0)
    ctx->r4 = MEM_BU(ctx->r2, 0X10);
    // 0x0042939C: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x004293A0: bne         $a0, $v0, L_00429400
    if (ctx->r4 != ctx->r2) {
        // 0x004293A4: addiu       $a1, $a1, 0x1
        ctx->r5 = ADD32(ctx->r5, 0X1);
            goto L_00429400;
    }
    // 0x004293A4: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x004293A8: slti        $v0, $a1, 0x10
    ctx->r2 = SIGNED(ctx->r5) < 0X10 ? 1 : 0;
    // 0x004293AC: bne         $v0, $zero, L_00429394
    if (ctx->r2 != 0) {
        // 0x004293B0: addu        $v0, $s1, $a1
        ctx->r2 = ADD32(ctx->r17, ctx->r5);
            goto L_00429394;
    }
    // 0x004293B0: addu        $v0, $s1, $a1
    ctx->r2 = ADD32(ctx->r17, ctx->r5);
L_004293B4:
    // 0x004293B4: beq         $s3, $zero, L_004293E8
    if (ctx->r19 == 0) {
        // 0x004293B8: nop
    
            goto L_004293E8;
    }
    // 0x004293B8: nop

    // 0x004293BC: bne         $a2, $zero, L_00429408
    if (ctx->r6 != 0) {
        // 0x004293C0: addu        $a1, $zero, $zero
        ctx->r5 = ADD32(0, 0);
            goto L_00429408;
    }
    // 0x004293C0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x004293C4: addu        $v0, $s1, $a1
    ctx->r2 = ADD32(ctx->r17, ctx->r5);
L_004293C8:
    // 0x004293C8: addu        $v1, $s3, $a1
    ctx->r3 = ADD32(ctx->r19, ctx->r5);
    // 0x004293CC: lbu         $a0, 0xC($v0)
    ctx->r4 = MEM_BU(ctx->r2, 0XC);
    // 0x004293D0: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x004293D4: bne         $a0, $v0, L_004293F8
    if (ctx->r4 != ctx->r2) {
        // 0x004293D8: addiu       $a1, $a1, 0x1
        ctx->r5 = ADD32(ctx->r5, 0X1);
            goto L_004293F8;
    }
    // 0x004293D8: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x004293DC: slti        $v0, $a1, 0x4
    ctx->r2 = SIGNED(ctx->r5) < 0X4 ? 1 : 0;
    // 0x004293E0: bne         $v0, $zero, L_004293C8
    if (ctx->r2 != 0) {
        // 0x004293E4: addu        $v0, $s1, $a1
        ctx->r2 = ADD32(ctx->r17, ctx->r5);
            goto L_004293C8;
    }
    // 0x004293E4: addu        $v0, $s1, $a1
    ctx->r2 = ADD32(ctx->r17, ctx->r5);
L_004293E8:
    // 0x004293E8: bne         $a2, $zero, L_00429408
    if (ctx->r6 != 0) {
        // 0x004293EC: addu        $v0, $a3, $zero
        ctx->r2 = ADD32(ctx->r7, 0);
            goto L_00429408;
    }
    // 0x004293EC: addu        $v0, $a3, $zero
    ctx->r2 = ADD32(ctx->r7, 0);
    // 0x004293F0: j           L_00429428
    // 0x004293F4: sw          $s0, 0x0($s5)
    MEM_W(0X0, ctx->r21) = ctx->r16;
        goto L_00429428;
    // 0x004293F4: sw          $s0, 0x0($s5)
    MEM_W(0X0, ctx->r21) = ctx->r16;
L_004293F8:
    // 0x004293F8: j           L_004293E8
    // 0x004293FC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
        goto L_004293E8;
    // 0x004293FC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
L_00429400:
    // 0x00429400: j           L_004293B4
    // 0x00429404: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
        goto L_004293B4;
    // 0x00429404: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
L_00429408:
    // 0x00429408: lw          $v0, 0x50($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X50);
    // 0x0042940C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x00429410: slt         $v0, $s0, $v0
    ctx->r2 = SIGNED(ctx->r16) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x00429414: bne         $v0, $zero, L_00429348
    if (ctx->r2 != 0) {
        // 0x00429418: addiu       $a3, $sp, 0x10
        ctx->r7 = ADD32(ctx->r29, 0X10);
            goto L_00429348;
    }
    // 0x00429418: addiu       $a3, $sp, 0x10
    ctx->r7 = ADD32(ctx->r29, 0X10);
L_0042941C:
    // 0x0042941C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x00429420: sw          $v0, 0x0($s5)
    MEM_W(0X0, ctx->r21) = ctx->r2;
    // 0x00429424: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
L_00429428:
    // 0x00429428: lw          $ra, 0x50($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X50);
    // 0x0042942C: lw          $s7, 0x4C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X4C);
    // 0x00429430: lw          $s6, 0x48($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X48);
    // 0x00429434: lw          $s5, 0x44($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X44);
    // 0x00429438: lw          $s4, 0x40($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X40);
    // 0x0042943C: lw          $s3, 0x3C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X3C);
    // 0x00429440: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x00429444: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x00429448: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x0042944C: jr          $ra
    // 0x00429450: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    return;
    // 0x00429450: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void entry_00429348(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_00429348:
    // 0x00429348: lhu         $a2, 0x5E($s2)
    ctx->r6 = MEM_HU(ctx->r18, 0X5E);
    // 0x0042934C: lw          $a0, 0x4($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X4);
    // 0x00429350: lw          $a1, 0x8($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X8);
    // 0x00429354: addu        $a2, $a2, $s0
    ctx->r6 = ADD32(ctx->r6, ctx->r16);
    // 0x00429358: jal         0x00299680
    // 0x0042935C: andi        $a2, $a2, 0xFFFF
    ctx->r6 = ctx->r6 & 0XFFFF;
    func_00299680(rdram, ctx);
        goto after_0;
    // 0x0042935C: andi        $a2, $a2, 0xFFFF
    ctx->r6 = ctx->r6 & 0XFFFF;
    after_0:
    // 0x00429360: addu        $a3, $v0, $zero
    ctx->r7 = ADD32(ctx->r2, 0);
    // 0x00429364: bne         $a3, $zero, L_00429428
    if (ctx->r7 != 0) {
        // 0x00429368: addu        $v0, $a3, $zero
        ctx->r2 = ADD32(ctx->r7, 0);
            goto L_00429428;
    }
    // 0x00429368: addu        $v0, $a3, $zero
    ctx->r2 = ADD32(ctx->r7, 0);
    // 0x0042936C: lhu         $v0, 0x14($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X14);
    // 0x00429370: bne         $v0, $s6, L_00429408
    if (ctx->r2 != ctx->r22) {
        // 0x00429374: nop
    
            goto L_00429408;
    }
    // 0x00429374: nop

    // 0x00429378: lw          $v0, 0x10($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X10);
    // 0x0042937C: bne         $v0, $s7, L_00429408
    if (ctx->r2 != ctx->r23) {
        // 0x00429380: nop
    
            goto L_00429408;
    }
    // 0x00429380: nop

    // 0x00429384: beq         $s4, $zero, L_004293B4
    if (ctx->r20 == 0) {
        // 0x00429388: addu        $a2, $zero, $zero
        ctx->r6 = ADD32(0, 0);
            goto L_004293B4;
    }
    // 0x00429388: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x0042938C: addu        $a1, $a2, $zero
    ctx->r5 = ADD32(ctx->r6, 0);
    // 0x00429390: addu        $v0, $s1, $a1
    ctx->r2 = ADD32(ctx->r17, ctx->r5);
L_00429394:
    // 0x00429394: addu        $v1, $s4, $a1
    ctx->r3 = ADD32(ctx->r20, ctx->r5);
    // 0x00429398: lbu         $a0, 0x10($v0)
    ctx->r4 = MEM_BU(ctx->r2, 0X10);
    // 0x0042939C: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x004293A0: bne         $a0, $v0, L_00429400
    if (ctx->r4 != ctx->r2) {
        // 0x004293A4: addiu       $a1, $a1, 0x1
        ctx->r5 = ADD32(ctx->r5, 0X1);
            goto L_00429400;
    }
    // 0x004293A4: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x004293A8: slti        $v0, $a1, 0x10
    ctx->r2 = SIGNED(ctx->r5) < 0X10 ? 1 : 0;
    // 0x004293AC: bne         $v0, $zero, L_00429394
    if (ctx->r2 != 0) {
        // 0x004293B0: addu        $v0, $s1, $a1
        ctx->r2 = ADD32(ctx->r17, ctx->r5);
            goto L_00429394;
    }
    // 0x004293B0: addu        $v0, $s1, $a1
    ctx->r2 = ADD32(ctx->r17, ctx->r5);
L_004293B4:
    // 0x004293B4: beq         $s3, $zero, L_004293E8
    if (ctx->r19 == 0) {
        // 0x004293B8: nop
    
            goto L_004293E8;
    }
    // 0x004293B8: nop

    // 0x004293BC: bne         $a2, $zero, L_00429408
    if (ctx->r6 != 0) {
        // 0x004293C0: addu        $a1, $zero, $zero
        ctx->r5 = ADD32(0, 0);
            goto L_00429408;
    }
    // 0x004293C0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x004293C4: addu        $v0, $s1, $a1
    ctx->r2 = ADD32(ctx->r17, ctx->r5);
L_004293C8:
    // 0x004293C8: addu        $v1, $s3, $a1
    ctx->r3 = ADD32(ctx->r19, ctx->r5);
    // 0x004293CC: lbu         $a0, 0xC($v0)
    ctx->r4 = MEM_BU(ctx->r2, 0XC);
    // 0x004293D0: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x004293D4: bne         $a0, $v0, L_004293F8
    if (ctx->r4 != ctx->r2) {
        // 0x004293D8: addiu       $a1, $a1, 0x1
        ctx->r5 = ADD32(ctx->r5, 0X1);
            goto L_004293F8;
    }
    // 0x004293D8: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x004293DC: slti        $v0, $a1, 0x4
    ctx->r2 = SIGNED(ctx->r5) < 0X4 ? 1 : 0;
    // 0x004293E0: bne         $v0, $zero, L_004293C8
    if (ctx->r2 != 0) {
        // 0x004293E4: addu        $v0, $s1, $a1
        ctx->r2 = ADD32(ctx->r17, ctx->r5);
            goto L_004293C8;
    }
    // 0x004293E4: addu        $v0, $s1, $a1
    ctx->r2 = ADD32(ctx->r17, ctx->r5);
L_004293E8:
    // 0x004293E8: bne         $a2, $zero, L_00429408
    if (ctx->r6 != 0) {
        // 0x004293EC: addu        $v0, $a3, $zero
        ctx->r2 = ADD32(ctx->r7, 0);
            goto L_00429408;
    }
    // 0x004293EC: addu        $v0, $a3, $zero
    ctx->r2 = ADD32(ctx->r7, 0);
    // 0x004293F0: j           L_00429428
    // 0x004293F4: sw          $s0, 0x0($s5)
    MEM_W(0X0, ctx->r21) = ctx->r16;
        goto L_00429428;
    // 0x004293F4: sw          $s0, 0x0($s5)
    MEM_W(0X0, ctx->r21) = ctx->r16;
L_004293F8:
    // 0x004293F8: j           L_004293E8
    // 0x004293FC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
        goto L_004293E8;
    // 0x004293FC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
L_00429400:
    // 0x00429400: j           L_004293B4
    // 0x00429404: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
        goto L_004293B4;
    // 0x00429404: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
L_00429408:
    // 0x00429408: lw          $v0, 0x50($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X50);
    // 0x0042940C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x00429410: slt         $v0, $s0, $v0
    ctx->r2 = SIGNED(ctx->r16) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x00429414: bne         $v0, $zero, L_00429348
    if (ctx->r2 != 0) {
        // 0x00429418: addiu       $a3, $sp, 0x10
        ctx->r7 = ADD32(ctx->r29, 0X10);
            goto L_00429348;
    }
    // 0x00429418: addiu       $a3, $sp, 0x10
    ctx->r7 = ADD32(ctx->r29, 0X10);
    // 0x0042941C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x00429420: sw          $v0, 0x0($s5)
    MEM_W(0X0, ctx->r21) = ctx->r2;
    // 0x00429424: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
L_00429428:
    // 0x00429428: lw          $ra, 0x50($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X50);
    // 0x0042942C: lw          $s7, 0x4C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X4C);
    // 0x00429430: lw          $s6, 0x48($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X48);
    // 0x00429434: lw          $s5, 0x44($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X44);
    // 0x00429438: lw          $s4, 0x40($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X40);
    // 0x0042943C: lw          $s3, 0x3C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X3C);
    // 0x00429440: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x00429444: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x00429448: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x0042944C: jr          $ra
    // 0x00429450: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    return;
    // 0x00429450: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void entry_00429380(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_00429348:
    // 0x00429380: nop

    // 0x00429384: beq         $s4, $zero, L_004293B4
    if (ctx->r20 == 0) {
        // 0x00429388: addu        $a2, $zero, $zero
        ctx->r6 = ADD32(0, 0);
            goto L_004293B4;
    }
    // 0x00429388: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x0042938C: addu        $a1, $a2, $zero
    ctx->r5 = ADD32(ctx->r6, 0);
    // 0x00429390: addu        $v0, $s1, $a1
    ctx->r2 = ADD32(ctx->r17, ctx->r5);
L_00429394:
    // 0x00429394: addu        $v1, $s4, $a1
    ctx->r3 = ADD32(ctx->r20, ctx->r5);
    // 0x00429398: lbu         $a0, 0x10($v0)
    ctx->r4 = MEM_BU(ctx->r2, 0X10);
    // 0x0042939C: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x004293A0: bne         $a0, $v0, L_00429400
    if (ctx->r4 != ctx->r2) {
        // 0x004293A4: addiu       $a1, $a1, 0x1
        ctx->r5 = ADD32(ctx->r5, 0X1);
            goto L_00429400;
    }
    // 0x004293A4: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x004293A8: slti        $v0, $a1, 0x10
    ctx->r2 = SIGNED(ctx->r5) < 0X10 ? 1 : 0;
    // 0x004293AC: bne         $v0, $zero, L_00429394
    if (ctx->r2 != 0) {
        // 0x004293B0: addu        $v0, $s1, $a1
        ctx->r2 = ADD32(ctx->r17, ctx->r5);
            goto L_00429394;
    }
    // 0x004293B0: addu        $v0, $s1, $a1
    ctx->r2 = ADD32(ctx->r17, ctx->r5);
L_004293B4:
    // 0x004293B4: beq         $s3, $zero, L_004293E8
    if (ctx->r19 == 0) {
        // 0x004293B8: nop
    
            goto L_004293E8;
    }
    // 0x004293B8: nop

    // 0x004293BC: bne         $a2, $zero, L_00429408
    if (ctx->r6 != 0) {
        // 0x004293C0: addu        $a1, $zero, $zero
        ctx->r5 = ADD32(0, 0);
            goto L_00429408;
    }
    // 0x004293C0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x004293C4: addu        $v0, $s1, $a1
    ctx->r2 = ADD32(ctx->r17, ctx->r5);
L_004293C8:
    // 0x004293C8: addu        $v1, $s3, $a1
    ctx->r3 = ADD32(ctx->r19, ctx->r5);
    // 0x004293CC: lbu         $a0, 0xC($v0)
    ctx->r4 = MEM_BU(ctx->r2, 0XC);
    // 0x004293D0: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x004293D4: bne         $a0, $v0, L_004293F8
    if (ctx->r4 != ctx->r2) {
        // 0x004293D8: addiu       $a1, $a1, 0x1
        ctx->r5 = ADD32(ctx->r5, 0X1);
            goto L_004293F8;
    }
    // 0x004293D8: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x004293DC: slti        $v0, $a1, 0x4
    ctx->r2 = SIGNED(ctx->r5) < 0X4 ? 1 : 0;
    // 0x004293E0: bne         $v0, $zero, L_004293C8
    if (ctx->r2 != 0) {
        // 0x004293E4: addu        $v0, $s1, $a1
        ctx->r2 = ADD32(ctx->r17, ctx->r5);
            goto L_004293C8;
    }
    // 0x004293E4: addu        $v0, $s1, $a1
    ctx->r2 = ADD32(ctx->r17, ctx->r5);
L_004293E8:
    // 0x004293E8: bne         $a2, $zero, L_00429408
    if (ctx->r6 != 0) {
        // 0x004293EC: addu        $v0, $a3, $zero
        ctx->r2 = ADD32(ctx->r7, 0);
            goto L_00429408;
    }
    // 0x004293EC: addu        $v0, $a3, $zero
    ctx->r2 = ADD32(ctx->r7, 0);
    // 0x004293F0: j           L_00429428
    // 0x004293F4: sw          $s0, 0x0($s5)
    MEM_W(0X0, ctx->r21) = ctx->r16;
        goto L_00429428;
    // 0x004293F4: sw          $s0, 0x0($s5)
    MEM_W(0X0, ctx->r21) = ctx->r16;
L_004293F8:
    // 0x004293F8: j           L_004293E8
    // 0x004293FC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
        goto L_004293E8;
    // 0x004293FC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
L_00429400:
    // 0x00429400: j           L_004293B4
    // 0x00429404: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
        goto L_004293B4;
    // 0x00429404: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
L_00429408:
    // 0x00429408: lw          $v0, 0x50($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X50);
    // 0x0042940C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x00429410: slt         $v0, $s0, $v0
    ctx->r2 = SIGNED(ctx->r16) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x00429414: bne         $v0, $zero, L_00429348
    if (ctx->r2 != 0) {
            // 0x00429418: addiu       $a3, $sp, 0x10
    ctx->r7 = ADD32(ctx->r29, 0X10);
    entry_00429348(rdram, ctx);
    return;
    }
    // 0x00429418: addiu       $a3, $sp, 0x10
    ctx->r7 = ADD32(ctx->r29, 0X10);
    // 0x0042941C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x00429420: sw          $v0, 0x0($s5)
    MEM_W(0X0, ctx->r21) = ctx->r2;
    // 0x00429424: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
L_00429428:
    // 0x00429428: lw          $ra, 0x50($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X50);
    // 0x0042942C: lw          $s7, 0x4C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X4C);
    // 0x00429430: lw          $s6, 0x48($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X48);
    // 0x00429434: lw          $s5, 0x44($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X44);
    // 0x00429438: lw          $s4, 0x40($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X40);
    // 0x0042943C: lw          $s3, 0x3C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X3C);
    // 0x00429440: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x00429444: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x00429448: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x0042944C: jr          $ra
    // 0x00429450: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    return;
    // 0x00429450: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void entry_00429640(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_00429640:
    // 0x00429640: lhu         $v1, 0x0($v0)
    ctx->r3 = MEM_HU(ctx->r2, 0X0);
    // 0x00429644: lhu         $v0, 0x0($a2)
    ctx->r2 = MEM_HU(ctx->r6, 0X0);
    // 0x00429648: addiu       $a0, $a0, 0x2
    ctx->r4 = ADD32(ctx->r4, 0X2);
    // 0x0042964C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x00429650: sh          $v0, 0x0($a2)
    MEM_H(0X0, ctx->r6) = ctx->r2;
    // 0x00429654: lhu         $v0, 0x0($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X0);
    // 0x00429658: nor         $v1, $zero, $v1
    ctx->r3 = ~(0 | ctx->r3);
    // 0x0042965C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x00429660: sh          $v0, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r2;
    // 0x00429664: sltiu       $v0, $a0, 0x1C
    ctx->r2 = ctx->r4 < 0X1C ? 1 : 0;
    // 0x00429668: bne         $v0, $zero, L_00429640
    if (ctx->r2 != 0) {
        // 0x0042966C: addu        $v0, $s4, $a0
        ctx->r2 = ADD32(ctx->r20, ctx->r4);
            goto L_00429640;
    }
    // 0x0042966C: addu        $v0, $s4, $a0
    ctx->r2 = ADD32(ctx->r20, ctx->r4);
    // 0x00429670: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x00429674: addiu       $s3, $zero, 0x1
    ctx->r19 = ADD32(0, 0X1);
    // 0x00429678: addiu       $s1, $sp, 0x58
    ctx->r17 = ADD32(ctx->r29, 0X58);
    // 0x0042967C: addu        $v0, $s3, $zero
    ctx->r2 = ADD32(ctx->r19, 0);
    // 0x00429680: sh          $v0, 0x58($sp)
    MEM_H(0X58, ctx->r29) = ctx->r2;
    // 0x00429684: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x00429688: sh          $v0, 0x5A($sp)
    MEM_H(0X5A, ctx->r29) = ctx->r2;
    // 0x0042968C: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x00429690: sh          $v0, 0x5C($sp)
    MEM_H(0X5C, ctx->r29) = ctx->r2;
    // 0x00429694: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x00429698: sh          $v0, 0x5E($sp)
    MEM_H(0X5E, ctx->r29) = ctx->r2;
L_0042969C:
    // 0x0042969C: lhu         $a2, 0x0($s1)
    ctx->r6 = MEM_HU(ctx->r17, 0X0);
    // 0x004296A0: sw          $s3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r19;
    // 0x004296A4: lw          $a0, 0x4($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X4);
    // 0x004296A8: lw          $a1, 0x8($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X8);
    // 0x004296AC: jal         0x00299A40
    // 0x004296B0: addu        $a3, $s4, $zero
    ctx->r7 = ADD32(ctx->r20, 0);
    func_00299A40(rdram, ctx);
        goto after_0;
    // 0x004296B0: addu        $a3, $s4, $zero
    ctx->r7 = ADD32(ctx->r20, 0);
    after_0:
    // 0x004296B4: bne         $v0, $zero, L_00429720
    if (ctx->r2 != 0) {
        // 0x004296B8: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_00429720;
    }
    // 0x004296B8: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x004296BC: slti        $v0, $s0, 0x4
    ctx->r2 = SIGNED(ctx->r16) < 0X4 ? 1 : 0;
    // 0x004296C0: bne         $v0, $zero, L_0042969C
    if (ctx->r2 != 0) {
        // 0x004296C4: addiu       $s1, $s1, 0x2
        ctx->r17 = ADD32(ctx->r17, 0X2);
            goto L_0042969C;
    }
    // 0x004296C4: addiu       $s1, $s1, 0x2
    ctx->r17 = ADD32(ctx->r17, 0X2);
    // 0x004296C8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x004296CC: lw          $a0, 0x4($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X4);
    // 0x004296D0: lw          $a1, 0x8($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X8);
    // 0x004296D4: jal         0x00299680
    // 0x004296D8: addiu       $a3, $sp, 0x18
    ctx->r7 = ADD32(ctx->r29, 0X18);
    func_00299680(rdram, ctx);
        goto after_1;
    // 0x004296D8: addiu       $a3, $sp, 0x18
    ctx->r7 = ADD32(ctx->r29, 0X18);
    after_1:
    // 0x004296DC: beq         $v0, $zero, L_004296F4
    if (ctx->r2 == 0) {
        // 0x004296E0: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_004296F4;
    }
    // 0x004296E0: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x004296E4: j           L_00429720
    // 0x004296E8: nop

        goto L_00429720;
    // 0x004296E8: nop

L_004296EC:
    // 0x004296EC: j           L_00429720
    // 0x004296F0: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
        goto L_00429720;
    // 0x004296F0: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
L_004296F4:
    // 0x004296F4: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    // 0x004296F8: addu        $v0, $a1, $s0
    ctx->r2 = ADD32(ctx->r5, ctx->r16);
L_004296FC:
    // 0x004296FC: addu        $v1, $s4, $s0
    ctx->r3 = ADD32(ctx->r20, ctx->r16);
    // 0x00429700: lbu         $a0, 0x0($v0)
    ctx->r4 = MEM_BU(ctx->r2, 0X0);
    // 0x00429704: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x00429708: bne         $a0, $v0, L_004296EC
    if (ctx->r4 != ctx->r2) {
        // 0x0042970C: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_004296EC;
    }
    // 0x0042970C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x00429710: slti        $v0, $s0, 0x20
    ctx->r2 = SIGNED(ctx->r16) < 0X20 ? 1 : 0;
    // 0x00429714: bne         $v0, $zero, L_004296FC
    if (ctx->r2 != 0) {
        // 0x00429718: addu        $v0, $a1, $s0
        ctx->r2 = ADD32(ctx->r5, ctx->r16);
            goto L_004296FC;
    }
    // 0x00429718: addu        $v0, $a1, $s0
    ctx->r2 = ADD32(ctx->r5, ctx->r16);
    // 0x0042971C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_00429720:
    // 0x00429720: lw          $ra, 0x7C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X7C);
    // 0x00429724: lw          $s6, 0x78($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X78);
    // 0x00429728: lw          $s5, 0x74($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X74);
    // 0x0042972C: lw          $s4, 0x70($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X70);
    // 0x00429730: lw          $s3, 0x6C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X6C);
    // 0x00429734: lw          $s2, 0x68($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X68);
    // 0x00429738: lw          $s1, 0x64($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X64);
    // 0x0042973C: lw          $s0, 0x60($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X60);
    // 0x00429740: jr          $ra
    // 0x00429744: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
    return;
    // 0x00429744: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
;}
RECOMP_FUNC void entry_00429668(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_00429640:
    // 0x00429668: bne         $v0, $zero, L_00429640
    if (ctx->r2 != 0) {
            // 0x0042966C: addu        $v0, $s4, $a0
    ctx->r2 = ADD32(ctx->r20, ctx->r4);
    entry_00429640(rdram, ctx);
    return;
    }
    // 0x0042966C: addu        $v0, $s4, $a0
    ctx->r2 = ADD32(ctx->r20, ctx->r4);
    // 0x00429670: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x00429674: addiu       $s3, $zero, 0x1
    ctx->r19 = ADD32(0, 0X1);
    // 0x00429678: addiu       $s1, $sp, 0x58
    ctx->r17 = ADD32(ctx->r29, 0X58);
    // 0x0042967C: addu        $v0, $s3, $zero
    ctx->r2 = ADD32(ctx->r19, 0);
    // 0x00429680: sh          $v0, 0x58($sp)
    MEM_H(0X58, ctx->r29) = ctx->r2;
    // 0x00429684: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x00429688: sh          $v0, 0x5A($sp)
    MEM_H(0X5A, ctx->r29) = ctx->r2;
    // 0x0042968C: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x00429690: sh          $v0, 0x5C($sp)
    MEM_H(0X5C, ctx->r29) = ctx->r2;
    // 0x00429694: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x00429698: sh          $v0, 0x5E($sp)
    MEM_H(0X5E, ctx->r29) = ctx->r2;
L_0042969C:
    // 0x0042969C: lhu         $a2, 0x0($s1)
    ctx->r6 = MEM_HU(ctx->r17, 0X0);
    // 0x004296A0: sw          $s3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r19;
    // 0x004296A4: lw          $a0, 0x4($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X4);
    // 0x004296A8: lw          $a1, 0x8($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X8);
    // 0x004296AC: jal         0x00299A40
    // 0x004296B0: addu        $a3, $s4, $zero
    ctx->r7 = ADD32(ctx->r20, 0);
    func_00299A40(rdram, ctx);
        goto after_0;
    // 0x004296B0: addu        $a3, $s4, $zero
    ctx->r7 = ADD32(ctx->r20, 0);
    after_0:
    // 0x004296B4: bne         $v0, $zero, L_00429720
    if (ctx->r2 != 0) {
        // 0x004296B8: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_00429720;
    }
    // 0x004296B8: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x004296BC: slti        $v0, $s0, 0x4
    ctx->r2 = SIGNED(ctx->r16) < 0X4 ? 1 : 0;
    // 0x004296C0: bne         $v0, $zero, L_0042969C
    if (ctx->r2 != 0) {
        // 0x004296C4: addiu       $s1, $s1, 0x2
        ctx->r17 = ADD32(ctx->r17, 0X2);
            goto L_0042969C;
    }
    // 0x004296C4: addiu       $s1, $s1, 0x2
    ctx->r17 = ADD32(ctx->r17, 0X2);
    // 0x004296C8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x004296CC: lw          $a0, 0x4($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X4);
    // 0x004296D0: lw          $a1, 0x8($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X8);
    // 0x004296D4: jal         0x00299680
    // 0x004296D8: addiu       $a3, $sp, 0x18
    ctx->r7 = ADD32(ctx->r29, 0X18);
    func_00299680(rdram, ctx);
        goto after_1;
    // 0x004296D8: addiu       $a3, $sp, 0x18
    ctx->r7 = ADD32(ctx->r29, 0X18);
    after_1:
    // 0x004296DC: beq         $v0, $zero, L_004296F4
    if (ctx->r2 == 0) {
        // 0x004296E0: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_004296F4;
    }
    // 0x004296E0: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x004296E4: j           L_00429720
    // 0x004296E8: nop

        goto L_00429720;
    // 0x004296E8: nop

L_004296EC:
    // 0x004296EC: j           L_00429720
    // 0x004296F0: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
        goto L_00429720;
    // 0x004296F0: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
L_004296F4:
    // 0x004296F4: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    // 0x004296F8: addu        $v0, $a1, $s0
    ctx->r2 = ADD32(ctx->r5, ctx->r16);
L_004296FC:
    // 0x004296FC: addu        $v1, $s4, $s0
    ctx->r3 = ADD32(ctx->r20, ctx->r16);
    // 0x00429700: lbu         $a0, 0x0($v0)
    ctx->r4 = MEM_BU(ctx->r2, 0X0);
    // 0x00429704: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x00429708: bne         $a0, $v0, L_004296EC
    if (ctx->r4 != ctx->r2) {
        // 0x0042970C: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_004296EC;
    }
    // 0x0042970C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x00429710: slti        $v0, $s0, 0x20
    ctx->r2 = SIGNED(ctx->r16) < 0X20 ? 1 : 0;
    // 0x00429714: bne         $v0, $zero, L_004296FC
    if (ctx->r2 != 0) {
        // 0x00429718: addu        $v0, $a1, $s0
        ctx->r2 = ADD32(ctx->r5, ctx->r16);
            goto L_004296FC;
    }
    // 0x00429718: addu        $v0, $a1, $s0
    ctx->r2 = ADD32(ctx->r5, ctx->r16);
    // 0x0042971C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_00429720:
    // 0x00429720: lw          $ra, 0x7C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X7C);
    // 0x00429724: lw          $s6, 0x78($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X78);
    // 0x00429728: lw          $s5, 0x74($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X74);
    // 0x0042972C: lw          $s4, 0x70($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X70);
    // 0x00429730: lw          $s3, 0x6C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X6C);
    // 0x00429734: lw          $s2, 0x68($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X68);
    // 0x00429738: lw          $s1, 0x64($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X64);
    // 0x0042973C: lw          $s0, 0x60($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X60);
    // 0x00429740: jr          $ra
    // 0x00429744: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
    return;
    // 0x00429744: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
;}
RECOMP_FUNC void entry_004297B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_004297B0:
    // 0x004297B4: lw          $a1, 0x8($s3)
    ctx->r5 = MEM_W(ctx->r19, 0X8);
    // 0x004297B8: lhu         $a2, 0x0($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0X0);
    // 0x004297BC: jal         0x00299680
    // 0x004297C0: addu        $a3, $s4, $zero
    ctx->r7 = ADD32(ctx->r20, 0);
    func_00299680(rdram, ctx);
        goto after_0;
    // 0x004297C0: addu        $a3, $s4, $zero
    ctx->r7 = ADD32(ctx->r20, 0);
    after_0:
    // 0x004297C4: bne         $v0, $zero, L_00429894
    if (ctx->r2 != 0) {
        // 0x004297C8: addiu       $a2, $sp, 0x20
        ctx->r6 = ADD32(ctx->r29, 0X20);
            goto L_00429894;
    }
    // 0x004297C8: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    // 0x004297CC: addiu       $a1, $sp, 0x22
    ctx->r5 = ADD32(ctx->r29, 0X22);
    // 0x004297D0: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x004297D4: sh          $zero, 0x22($sp)
    MEM_H(0X22, ctx->r29) = 0;
    // 0x004297D8: sh          $zero, 0x20($sp)
    MEM_H(0X20, ctx->r29) = 0;
    // 0x004297DC: addu        $v0, $s4, $a0
    ctx->r2 = ADD32(ctx->r20, ctx->r4);
L_004297E0:
    // 0x004297E0: lhu         $v1, 0x0($v0)
    ctx->r3 = MEM_HU(ctx->r2, 0X0);
    // 0x004297E4: lhu         $v0, 0x0($a2)
    ctx->r2 = MEM_HU(ctx->r6, 0X0);
    // 0x004297E8: addiu       $a0, $a0, 0x2
    ctx->r4 = ADD32(ctx->r4, 0X2);
    // 0x004297EC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x004297F0: sh          $v0, 0x0($a2)
    MEM_H(0X0, ctx->r6) = ctx->r2;
    // 0x004297F4: lhu         $v0, 0x0($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X0);
    // 0x004297F8: nor         $v1, $zero, $v1
    ctx->r3 = ~(0 | ctx->r3);
    // 0x004297FC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x00429800: sh          $v0, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r2;
    // 0x00429804: sltiu       $v0, $a0, 0x1C
    ctx->r2 = ctx->r4 < 0X1C ? 1 : 0;
    // 0x00429808: bne         $v0, $zero, L_004297E0
    if (ctx->r2 != 0) {
        // 0x0042980C: addu        $v0, $s4, $a0
        ctx->r2 = ADD32(ctx->r20, ctx->r4);
            goto L_004297E0;
    }
    // 0x0042980C: addu        $v0, $s4, $a0
    ctx->r2 = ADD32(ctx->r20, ctx->r4);
    // 0x00429810: lhu         $v1, 0x1C($s4)
    ctx->r3 = MEM_HU(ctx->r20, 0X1C);
    // 0x00429814: lhu         $v0, 0x20($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X20);
    // 0x00429818: bnel        $v1, $v0, L_00429834
    if (ctx->r3 != ctx->r2) {
        // 0x0042981C: addiu       $s2, $s2, 0x1
        ctx->r18 = ADD32(ctx->r18, 0X1);
            goto L_00429834;
    }
    goto skip_0;
    // 0x0042981C: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    skip_0:
    // 0x00429820: lhu         $v1, 0x1E($s4)
    ctx->r3 = MEM_HU(ctx->r20, 0X1E);
    // 0x00429824: lhu         $v0, 0x22($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X22);
    // 0x00429828: beq         $v1, $v0, L_00429844
    if (ctx->r3 == ctx->r2) {
        // 0x0042982C: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_00429844;
    }
    // 0x0042982C: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x00429830: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
L_00429834:
    // 0x00429834: slti        $v0, $s2, 0x4
    ctx->r2 = SIGNED(ctx->r18) < 0X4 ? 1 : 0;
    // 0x00429838: bne         $v0, $zero, L_004297B0
    if (ctx->r2 != 0) {
        // 0x0042983C: addiu       $s0, $s0, 0x2
        ctx->r16 = ADD32(ctx->r16, 0X2);
            goto L_004297B0;
    }
    // 0x0042983C: addiu       $s0, $s0, 0x2
    ctx->r16 = ADD32(ctx->r16, 0X2);
    // 0x00429840: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
L_00429844:
    // 0x00429844: bne         $s2, $v0, L_00429854
    if (ctx->r18 != ctx->r2) {
        // 0x00429848: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_00429854;
    }
    // 0x00429848: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x0042984C: j           L_00429894
    // 0x00429850: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
        goto L_00429894;
    // 0x00429850: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
L_00429854:
    // 0x00429854: addiu       $s5, $zero, 0x1
    ctx->r21 = ADD32(0, 0X1);
    // 0x00429858: addiu       $s1, $sp, 0x18
    ctx->r17 = ADD32(ctx->r29, 0X18);
L_0042985C:
    // 0x0042985C: beql        $s0, $s2, L_00429884
    if (ctx->r16 == ctx->r18) {
        // 0x00429860: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_00429884;
    }
    goto skip_1;
    // 0x00429860: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    skip_1:
    // 0x00429864: lhu         $a2, 0x0($s1)
    ctx->r6 = MEM_HU(ctx->r17, 0X0);
    // 0x00429868: sw          $s5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r21;
    // 0x0042986C: lw          $a0, 0x4($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X4);
    // 0x00429870: lw          $a1, 0x8($s3)
    ctx->r5 = MEM_W(ctx->r19, 0X8);
    // 0x00429874: jal         0x00299A40
    // 0x00429878: addu        $a3, $s4, $zero
    ctx->r7 = ADD32(ctx->r20, 0);
    func_00299A40(rdram, ctx);
        goto after_1;
    // 0x00429878: addu        $a3, $s4, $zero
    ctx->r7 = ADD32(ctx->r20, 0);
    after_1:
    // 0x0042987C: bne         $v0, $zero, L_00429894
    if (ctx->r2 != 0) {
        // 0x00429880: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_00429894;
    }
    // 0x00429880: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_00429884:
    // 0x00429884: slti        $v0, $s0, 0x4
    ctx->r2 = SIGNED(ctx->r16) < 0X4 ? 1 : 0;
    // 0x00429888: bne         $v0, $zero, L_0042985C
    if (ctx->r2 != 0) {
        // 0x0042988C: addiu       $s1, $s1, 0x2
        ctx->r17 = ADD32(ctx->r17, 0X2);
            goto L_0042985C;
    }
    // 0x0042988C: addiu       $s1, $s1, 0x2
    ctx->r17 = ADD32(ctx->r17, 0X2);
    // 0x00429890: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_00429894:
    // 0x00429894: lw          $ra, 0x40($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X40);
    // 0x00429898: lw          $s5, 0x3C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X3C);
    // 0x0042989C: lw          $s4, 0x38($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X38);
    // 0x004298A0: lw          $s3, 0x34($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X34);
    // 0x004298A4: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x004298A8: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x004298AC: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x004298B0: jr          $ra
    // 0x004298B4: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x004298B4: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void entry_004297D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_004297B0:
    // 0x004297D8: sh          $zero, 0x20($sp)
    MEM_H(0X20, ctx->r29) = 0;
    // 0x004297DC: addu        $v0, $s4, $a0
    ctx->r2 = ADD32(ctx->r20, ctx->r4);
L_004297E0:
    // 0x004297E0: lhu         $v1, 0x0($v0)
    ctx->r3 = MEM_HU(ctx->r2, 0X0);
    // 0x004297E4: lhu         $v0, 0x0($a2)
    ctx->r2 = MEM_HU(ctx->r6, 0X0);
    // 0x004297E8: addiu       $a0, $a0, 0x2
    ctx->r4 = ADD32(ctx->r4, 0X2);
    // 0x004297EC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x004297F0: sh          $v0, 0x0($a2)
    MEM_H(0X0, ctx->r6) = ctx->r2;
    // 0x004297F4: lhu         $v0, 0x0($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X0);
    // 0x004297F8: nor         $v1, $zero, $v1
    ctx->r3 = ~(0 | ctx->r3);
    // 0x004297FC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x00429800: sh          $v0, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r2;
    // 0x00429804: sltiu       $v0, $a0, 0x1C
    ctx->r2 = ctx->r4 < 0X1C ? 1 : 0;
    // 0x00429808: bne         $v0, $zero, L_004297E0
    if (ctx->r2 != 0) {
        // 0x0042980C: addu        $v0, $s4, $a0
        ctx->r2 = ADD32(ctx->r20, ctx->r4);
            goto L_004297E0;
    }
    // 0x0042980C: addu        $v0, $s4, $a0
    ctx->r2 = ADD32(ctx->r20, ctx->r4);
    // 0x00429810: lhu         $v1, 0x1C($s4)
    ctx->r3 = MEM_HU(ctx->r20, 0X1C);
    // 0x00429814: lhu         $v0, 0x20($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X20);
    // 0x00429818: bnel        $v1, $v0, L_00429834
    if (ctx->r3 != ctx->r2) {
        // 0x0042981C: addiu       $s2, $s2, 0x1
        ctx->r18 = ADD32(ctx->r18, 0X1);
            goto L_00429834;
    }
    goto skip_0;
    // 0x0042981C: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    skip_0:
    // 0x00429820: lhu         $v1, 0x1E($s4)
    ctx->r3 = MEM_HU(ctx->r20, 0X1E);
    // 0x00429824: lhu         $v0, 0x22($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X22);
    // 0x00429828: beq         $v1, $v0, L_00429844
    if (ctx->r3 == ctx->r2) {
        // 0x0042982C: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_00429844;
    }
    // 0x0042982C: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x00429830: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
L_00429834:
    // 0x00429834: slti        $v0, $s2, 0x4
    ctx->r2 = SIGNED(ctx->r18) < 0X4 ? 1 : 0;
    // 0x00429838: bne         $v0, $zero, L_004297B0
    if (ctx->r2 != 0) {
        // 0x0042983C: addiu       $s0, $s0, 0x2
        ctx->r16 = ADD32(ctx->r16, 0X2);
            goto L_004297B0;
    }
    // 0x0042983C: addiu       $s0, $s0, 0x2
    ctx->r16 = ADD32(ctx->r16, 0X2);
    // 0x00429840: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
L_00429844:
    // 0x00429844: bne         $s2, $v0, L_00429854
    if (ctx->r18 != ctx->r2) {
        // 0x00429848: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_00429854;
    }
    // 0x00429848: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x0042984C: j           L_00429894
    // 0x00429850: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
        goto L_00429894;
    // 0x00429850: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
L_00429854:
    // 0x00429854: addiu       $s5, $zero, 0x1
    ctx->r21 = ADD32(0, 0X1);
    // 0x00429858: addiu       $s1, $sp, 0x18
    ctx->r17 = ADD32(ctx->r29, 0X18);
L_0042985C:
    // 0x0042985C: beql        $s0, $s2, L_00429884
    if (ctx->r16 == ctx->r18) {
        // 0x00429860: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_00429884;
    }
    goto skip_1;
    // 0x00429860: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    skip_1:
    // 0x00429864: lhu         $a2, 0x0($s1)
    ctx->r6 = MEM_HU(ctx->r17, 0X0);
    // 0x00429868: sw          $s5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r21;
    // 0x0042986C: lw          $a0, 0x4($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X4);
    // 0x00429870: lw          $a1, 0x8($s3)
    ctx->r5 = MEM_W(ctx->r19, 0X8);
    // 0x00429874: jal         0x00299A40
    // 0x00429878: addu        $a3, $s4, $zero
    ctx->r7 = ADD32(ctx->r20, 0);
    func_00299A40(rdram, ctx);
        goto after_0;
    // 0x00429878: addu        $a3, $s4, $zero
    ctx->r7 = ADD32(ctx->r20, 0);
    after_0:
    // 0x0042987C: bne         $v0, $zero, L_00429894
    if (ctx->r2 != 0) {
        // 0x00429880: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_00429894;
    }
    // 0x00429880: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_00429884:
    // 0x00429884: slti        $v0, $s0, 0x4
    ctx->r2 = SIGNED(ctx->r16) < 0X4 ? 1 : 0;
    // 0x00429888: bne         $v0, $zero, L_0042985C
    if (ctx->r2 != 0) {
        // 0x0042988C: addiu       $s1, $s1, 0x2
        ctx->r17 = ADD32(ctx->r17, 0X2);
            goto L_0042985C;
    }
    // 0x0042988C: addiu       $s1, $s1, 0x2
    ctx->r17 = ADD32(ctx->r17, 0X2);
    // 0x00429890: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_00429894:
    // 0x00429894: lw          $ra, 0x40($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X40);
    // 0x00429898: lw          $s5, 0x3C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X3C);
    // 0x0042989C: lw          $s4, 0x38($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X38);
    // 0x004298A0: lw          $s3, 0x34($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X34);
    // 0x004298A4: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x004298A8: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x004298AC: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x004298B0: jr          $ra
    // 0x004298B4: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x004298B4: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void entry_004299B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004299B0: bne         $v1, $zero, L_00429A90
    if (ctx->r3 != 0) {
        // 0x004299B4: addu        $v0, $v1, $zero
        ctx->r2 = ADD32(ctx->r3, 0);
            goto L_00429A90;
    }
    // 0x004299B4: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
    // 0x004299B8: lhu         $v0, 0x18($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X18);
    // 0x004299BC: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x004299C0: bne         $v0, $zero, L_00429A00
    if (ctx->r2 != 0) {
        // 0x004299C4: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_00429A00;
    }
    // 0x004299C4: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x004299C8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x004299CC: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x004299D0: addiu       $s0, $sp, 0x30
    ctx->r16 = ADD32(ctx->r29, 0X30);
    // 0x004299D4: jal         0x00429460
    // 0x004299D8: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    func_00429460(rdram, ctx);
        goto after_0;
    // 0x004299D8: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    after_0:
    // 0x004299DC: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x004299E0: bne         $v1, $zero, L_00429A90
    if (ctx->r3 != 0) {
        // 0x004299E4: nop
    
            goto L_00429A90;
    }
    // 0x004299E4: nop

    // 0x004299E8: lhu         $v0, 0x48($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X48);
    // 0x004299EC: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x004299F0: bne         $v0, $zero, L_00429A00
    if (ctx->r2 != 0) {
        // 0x004299F4: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_00429A00;
    }
    // 0x004299F4: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x004299F8: j           L_00429A90
    // 0x004299FC: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
        goto L_00429A90;
    // 0x004299FC: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
L_00429A00:
    // 0x00429A00: addu        $v1, $s1, $a0
    ctx->r3 = ADD32(ctx->r17, ctx->r4);
L_00429A04:
    // 0x00429A04: addu        $v0, $s0, $a0
    ctx->r2 = ADD32(ctx->r16, ctx->r4);
    // 0x00429A08: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x00429A0C: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x00429A10: sb          $v0, 0xC($v1)
    MEM_B(0XC, ctx->r3) = ctx->r2;
    // 0x00429A14: slti        $v0, $a0, 0x20
    ctx->r2 = SIGNED(ctx->r4) < 0X20 ? 1 : 0;
    // 0x00429A18: bne         $v0, $zero, L_00429A04
    if (ctx->r2 != 0) {
        // 0x00429A1C: addu        $v1, $s1, $a0
        ctx->r3 = ADD32(ctx->r17, ctx->r4);
            goto L_00429A04;
    }
    // 0x00429A1C: addu        $v1, $s1, $a0
    ctx->r3 = ADD32(ctx->r17, ctx->r4);
    // 0x00429A20: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
    // 0x00429A24: lw          $a0, 0x4($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X4);
    // 0x00429A28: lw          $a1, 0x8($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X8);
    // 0x00429A2C: lbu         $v0, 0x1B($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X1B);
    // 0x00429A30: addiu       $a3, $s1, 0x2C
    ctx->r7 = ADD32(ctx->r17, 0X2C);
    // 0x00429A34: sw          $v0, 0x4C($s1)
    MEM_W(0X4C, ctx->r17) = ctx->r2;
    // 0x00429A38: lbu         $v1, 0x1A($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X1A);
    // 0x00429A3C: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x00429A40: sw          $v0, 0x50($s1)
    MEM_W(0X50, ctx->r17) = ctx->r2;
    // 0x00429A44: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x00429A48: sw          $v0, 0x54($s1)
    MEM_W(0X54, ctx->r17) = ctx->r2;
    // 0x00429A4C: sb          $v1, 0x64($s1)
    MEM_B(0X64, ctx->r17) = ctx->r3;
    // 0x00429A50: andi        $v1, $v1, 0xFF
    ctx->r3 = ctx->r3 & 0XFF;
    // 0x00429A54: sll         $v1, $v1, 1
    ctx->r3 = S32(ctx->r3 << 1);
    // 0x00429A58: lbu         $v0, 0x64($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X64);
    // 0x00429A5C: addiu       $v1, $v1, 0x3
    ctx->r3 = ADD32(ctx->r3, 0X3);
    // 0x00429A60: sw          $v1, 0x60($s1)
    MEM_W(0X60, ctx->r17) = ctx->r3;
    // 0x00429A64: lbu         $v1, 0x64($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X64);
    // 0x00429A68: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x00429A6C: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x00429A70: sll         $v1, $v1, 3
    ctx->r3 = S32(ctx->r3 << 3);
    // 0x00429A74: sw          $v0, 0x58($s1)
    MEM_W(0X58, ctx->r17) = ctx->r2;
    // 0x00429A78: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x00429A7C: jal         0x00299680
    // 0x00429A80: sw          $v0, 0x5C($s1)
    MEM_W(0X5C, ctx->r17) = ctx->r2;
    func_00299680(rdram, ctx);
        goto after_1;
    // 0x00429A80: sw          $v0, 0x5C($s1)
    MEM_W(0X5C, ctx->r17) = ctx->r2;
    after_1:
    // 0x00429A84: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x00429A88: beql        $v1, $zero, L_00429A90
    if (ctx->r3 == 0) {
        // 0x00429A8C: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_00429A90;
    }
    goto skip_0;
    // 0x00429A8C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    skip_0:
L_00429A90:
    // 0x00429A90: lw          $ra, 0x60($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X60);
    // 0x00429A94: lw          $s1, 0x5C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X5C);
    // 0x00429A98: lw          $s0, 0x58($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X58);
    // 0x00429A9C: jr          $ra
    // 0x00429AA0: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    return;
    // 0x00429AA0: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
;}
RECOMP_FUNC void entry_004299C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004299C4: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x004299C8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x004299CC: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x004299D0: addiu       $s0, $sp, 0x30
    ctx->r16 = ADD32(ctx->r29, 0X30);
    // 0x004299D4: jal         0x00429460
    // 0x004299D8: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    func_00429460(rdram, ctx);
        goto after_0;
    // 0x004299D8: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    after_0:
    // 0x004299DC: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x004299E0: bne         $v1, $zero, L_00429A90
    if (ctx->r3 != 0) {
        // 0x004299E4: nop
    
            goto L_00429A90;
    }
    // 0x004299E4: nop

    // 0x004299E8: lhu         $v0, 0x48($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X48);
    // 0x004299EC: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x004299F0: bne         $v0, $zero, L_00429A00
    if (ctx->r2 != 0) {
        // 0x004299F4: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_00429A00;
    }
    // 0x004299F4: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x004299F8: j           L_00429A90
    // 0x004299FC: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
        goto L_00429A90;
    // 0x004299FC: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
L_00429A00:
    // 0x00429A00: addu        $v1, $s1, $a0
    ctx->r3 = ADD32(ctx->r17, ctx->r4);
L_00429A04:
    // 0x00429A04: addu        $v0, $s0, $a0
    ctx->r2 = ADD32(ctx->r16, ctx->r4);
    // 0x00429A08: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x00429A0C: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x00429A10: sb          $v0, 0xC($v1)
    MEM_B(0XC, ctx->r3) = ctx->r2;
    // 0x00429A14: slti        $v0, $a0, 0x20
    ctx->r2 = SIGNED(ctx->r4) < 0X20 ? 1 : 0;
    // 0x00429A18: bne         $v0, $zero, L_00429A04
    if (ctx->r2 != 0) {
        // 0x00429A1C: addu        $v1, $s1, $a0
        ctx->r3 = ADD32(ctx->r17, ctx->r4);
            goto L_00429A04;
    }
    // 0x00429A1C: addu        $v1, $s1, $a0
    ctx->r3 = ADD32(ctx->r17, ctx->r4);
    // 0x00429A20: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
    // 0x00429A24: lw          $a0, 0x4($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X4);
    // 0x00429A28: lw          $a1, 0x8($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X8);
    // 0x00429A2C: lbu         $v0, 0x1B($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X1B);
    // 0x00429A30: addiu       $a3, $s1, 0x2C
    ctx->r7 = ADD32(ctx->r17, 0X2C);
    // 0x00429A34: sw          $v0, 0x4C($s1)
    MEM_W(0X4C, ctx->r17) = ctx->r2;
    // 0x00429A38: lbu         $v1, 0x1A($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X1A);
    // 0x00429A3C: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x00429A40: sw          $v0, 0x50($s1)
    MEM_W(0X50, ctx->r17) = ctx->r2;
    // 0x00429A44: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x00429A48: sw          $v0, 0x54($s1)
    MEM_W(0X54, ctx->r17) = ctx->r2;
    // 0x00429A4C: sb          $v1, 0x64($s1)
    MEM_B(0X64, ctx->r17) = ctx->r3;
    // 0x00429A50: andi        $v1, $v1, 0xFF
    ctx->r3 = ctx->r3 & 0XFF;
    // 0x00429A54: sll         $v1, $v1, 1
    ctx->r3 = S32(ctx->r3 << 1);
    // 0x00429A58: lbu         $v0, 0x64($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X64);
    // 0x00429A5C: addiu       $v1, $v1, 0x3
    ctx->r3 = ADD32(ctx->r3, 0X3);
    // 0x00429A60: sw          $v1, 0x60($s1)
    MEM_W(0X60, ctx->r17) = ctx->r3;
    // 0x00429A64: lbu         $v1, 0x64($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X64);
    // 0x00429A68: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x00429A6C: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x00429A70: sll         $v1, $v1, 3
    ctx->r3 = S32(ctx->r3 << 3);
    // 0x00429A74: sw          $v0, 0x58($s1)
    MEM_W(0X58, ctx->r17) = ctx->r2;
    // 0x00429A78: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x00429A7C: jal         0x00299680
    // 0x00429A80: sw          $v0, 0x5C($s1)
    MEM_W(0X5C, ctx->r17) = ctx->r2;
    func_00299680(rdram, ctx);
        goto after_1;
    // 0x00429A80: sw          $v0, 0x5C($s1)
    MEM_W(0X5C, ctx->r17) = ctx->r2;
    after_1:
    // 0x00429A84: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x00429A88: beql        $v1, $zero, L_00429A90
    if (ctx->r3 == 0) {
        // 0x00429A8C: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_00429A90;
    }
    goto skip_0;
    // 0x00429A8C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    skip_0:
L_00429A90:
    // 0x00429A90: lw          $ra, 0x60($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X60);
    // 0x00429A94: lw          $s1, 0x5C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X5C);
    // 0x00429A98: lw          $s0, 0x58($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X58);
    // 0x00429A9C: jr          $ra
    // 0x00429AA0: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    return;
    // 0x00429AA0: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
;}
RECOMP_FUNC void entry_00429B10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
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
        goto after_0;
    // 0x00429B9C: andi        $a2, $a2, 0xFFFF
    ctx->r6 = ctx->r6 & 0XFFFF;
    after_0:
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
        goto after_1;
    // 0x00429BC0: andi        $a2, $a2, 0xFFFF
    ctx->r6 = ctx->r6 & 0XFFFF;
    after_1:
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
        goto after_2;
    // 0x00429BE8: andi        $a2, $a2, 0xFFFF
    ctx->r6 = ctx->r6 & 0XFFFF;
    after_2:
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
            goto L_00429D54;
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
        goto after_3;
    // 0x00429C90: andi        $a2, $a2, 0xFFFF
    ctx->r6 = ctx->r6 & 0XFFFF;
    after_3:
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
            goto L_00429D54;
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
        goto after_4;
    // 0x00429CE8: andi        $a2, $a2, 0xFFFF
    ctx->r6 = ctx->r6 & 0XFFFF;
    after_4:
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
        goto L_00429D54;
    // 0x00429D00: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_00429D04:
    // 0x00429D04: j           L_00429D54
    // 0x00429D08: addu        $v0, $a0, $zero
    ctx->r2 = ADD32(ctx->r4, 0);
        goto L_00429D54;
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
L_00429D1C:
    // 0x00429D1C: lhu         $a2, 0x5A($s2)
    ctx->r6 = MEM_HU(ctx->r18, 0X5A);
    // 0x00429D20: addiu       $s1, $s1, 0x20
    ctx->r17 = ADD32(ctx->r17, 0X20);
    // 0x00429D24: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x00429D28: lw          $a0, 0x4($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X4);
    // 0x00429D2C: lw          $a1, 0x8($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X8);
    // 0x00429D30: addu        $a2, $a2, $s3
    ctx->r6 = ADD32(ctx->r6, ctx->r19);
    // 0x00429D34: addu        $a2, $a2, $s0
    ctx->r6 = ADD32(ctx->r6, ctx->r16);
    // 0x00429D38: jal         0x00299A40
    // 0x00429D3C: andi        $a2, $a2, 0xFFFF
    ctx->r6 = ctx->r6 & 0XFFFF;
    func_00299A40(rdram, ctx);
        goto after_5;
    // 0x00429D3C: andi        $a2, $a2, 0xFFFF
    ctx->r6 = ctx->r6 & 0XFFFF;
    after_5:
    // 0x00429D40: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x00429D44: slti        $v0, $s0, 0x8
    ctx->r2 = SIGNED(ctx->r16) < 0X8 ? 1 : 0;
    // 0x00429D48: bne         $v0, $zero, L_00429D1C
    if (ctx->r2 != 0) {
        // 0x00429D4C: addu        $a3, $s1, $zero
        ctx->r7 = ADD32(ctx->r17, 0);
            goto L_00429D1C;
    }
    // 0x00429D4C: addu        $a3, $s1, $zero
    ctx->r7 = ADD32(ctx->r17, 0);
    // 0x00429D50: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_00429D54:
    // 0x00429D54: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
;}
RECOMP_FUNC void entry_00429C74(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
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
        goto after_0;
    // 0x00429C90: andi        $a2, $a2, 0xFFFF
    ctx->r6 = ctx->r6 & 0XFFFF;
    after_0:
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
            goto L_00429D54;
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
        goto after_1;
    // 0x00429CE8: andi        $a2, $a2, 0xFFFF
    ctx->r6 = ctx->r6 & 0XFFFF;
    after_1:
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
        goto L_00429D54;
    // 0x00429D00: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x00429D04: j           L_00429D54
    // 0x00429D08: addu        $v0, $a0, $zero
    ctx->r2 = ADD32(ctx->r4, 0);
        goto L_00429D54;
    // 0x00429D08: addu        $v0, $a0, $zero
    ctx->r2 = ADD32(ctx->r4, 0);
    // 0x00429D0C: andi        $v0, $s7, 0xFF
    ctx->r2 = ctx->r23 & 0XFF;
    // 0x00429D10: sll         $s3, $v0, 3
    ctx->r19 = S32(ctx->r2 << 3);
    // 0x00429D14: addu        $s1, $s5, $zero
    ctx->r17 = ADD32(ctx->r21, 0);
    // 0x00429D18: addu        $a3, $s1, $zero
    ctx->r7 = ADD32(ctx->r17, 0);
L_00429D1C:
    // 0x00429D1C: lhu         $a2, 0x5A($s2)
    ctx->r6 = MEM_HU(ctx->r18, 0X5A);
    // 0x00429D20: addiu       $s1, $s1, 0x20
    ctx->r17 = ADD32(ctx->r17, 0X20);
    // 0x00429D24: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x00429D28: lw          $a0, 0x4($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X4);
    // 0x00429D2C: lw          $a1, 0x8($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X8);
    // 0x00429D30: addu        $a2, $a2, $s3
    ctx->r6 = ADD32(ctx->r6, ctx->r19);
    // 0x00429D34: addu        $a2, $a2, $s0
    ctx->r6 = ADD32(ctx->r6, ctx->r16);
    // 0x00429D38: jal         0x00299A40
    // 0x00429D3C: andi        $a2, $a2, 0xFFFF
    ctx->r6 = ctx->r6 & 0XFFFF;
    func_00299A40(rdram, ctx);
        goto after_2;
    // 0x00429D3C: andi        $a2, $a2, 0xFFFF
    ctx->r6 = ctx->r6 & 0XFFFF;
    after_2:
    // 0x00429D40: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x00429D44: slti        $v0, $s0, 0x8
    ctx->r2 = SIGNED(ctx->r16) < 0X8 ? 1 : 0;
    // 0x00429D48: bne         $v0, $zero, L_00429D1C
    if (ctx->r2 != 0) {
        // 0x00429D4C: addu        $a3, $s1, $zero
        ctx->r7 = ADD32(ctx->r17, 0);
            goto L_00429D1C;
    }
    // 0x00429D4C: addu        $a3, $s1, $zero
    ctx->r7 = ADD32(ctx->r17, 0);
    // 0x00429D50: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_00429D54:
    // 0x00429D54: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
;}
RECOMP_FUNC void entry_00429CA4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00429CA4: lbu         $v1, 0x1($s5)
    ctx->r3 = MEM_BU(ctx->r21, 0X1);
    // 0x00429CA8: andi        $v0, $s4, 0xFF
    ctx->r2 = ctx->r20 & 0XFF;
    // 0x00429CAC: bne         $v0, $v1, L_00429D54
    if (ctx->r2 != ctx->r3) {
        // 0x00429CB0: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_00429D54;
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
        goto after_0;
    // 0x00429CE8: andi        $a2, $a2, 0xFFFF
    ctx->r6 = ctx->r6 & 0XFFFF;
    after_0:
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
        goto L_00429D54;
    // 0x00429D00: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x00429D04: j           L_00429D54
    // 0x00429D08: addu        $v0, $a0, $zero
    ctx->r2 = ADD32(ctx->r4, 0);
        goto L_00429D54;
    // 0x00429D08: addu        $v0, $a0, $zero
    ctx->r2 = ADD32(ctx->r4, 0);
    // 0x00429D0C: andi        $v0, $s7, 0xFF
    ctx->r2 = ctx->r23 & 0XFF;
    // 0x00429D10: sll         $s3, $v0, 3
    ctx->r19 = S32(ctx->r2 << 3);
    // 0x00429D14: addu        $s1, $s5, $zero
    ctx->r17 = ADD32(ctx->r21, 0);
    // 0x00429D18: addu        $a3, $s1, $zero
    ctx->r7 = ADD32(ctx->r17, 0);
L_00429D1C:
    // 0x00429D1C: lhu         $a2, 0x5A($s2)
    ctx->r6 = MEM_HU(ctx->r18, 0X5A);
    // 0x00429D20: addiu       $s1, $s1, 0x20
    ctx->r17 = ADD32(ctx->r17, 0X20);
    // 0x00429D24: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x00429D28: lw          $a0, 0x4($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X4);
    // 0x00429D2C: lw          $a1, 0x8($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X8);
    // 0x00429D30: addu        $a2, $a2, $s3
    ctx->r6 = ADD32(ctx->r6, ctx->r19);
    // 0x00429D34: addu        $a2, $a2, $s0
    ctx->r6 = ADD32(ctx->r6, ctx->r16);
    // 0x00429D38: jal         0x00299A40
    // 0x00429D3C: andi        $a2, $a2, 0xFFFF
    ctx->r6 = ctx->r6 & 0XFFFF;
    func_00299A40(rdram, ctx);
        goto after_1;
    // 0x00429D3C: andi        $a2, $a2, 0xFFFF
    ctx->r6 = ctx->r6 & 0XFFFF;
    after_1:
    // 0x00429D40: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x00429D44: slti        $v0, $s0, 0x8
    ctx->r2 = SIGNED(ctx->r16) < 0X8 ? 1 : 0;
    // 0x00429D48: bne         $v0, $zero, L_00429D1C
    if (ctx->r2 != 0) {
        // 0x00429D4C: addu        $a3, $s1, $zero
        ctx->r7 = ADD32(ctx->r17, 0);
            goto L_00429D1C;
    }
    // 0x00429D4C: addu        $a3, $s1, $zero
    ctx->r7 = ADD32(ctx->r17, 0);
    // 0x00429D50: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_00429D54:
    // 0x00429D54: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
;}
RECOMP_FUNC void entry_00429CD4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_00429CC8:
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
        goto after_0;
    // 0x00429CE8: andi        $a2, $a2, 0xFFFF
    ctx->r6 = ctx->r6 & 0XFFFF;
    after_0:
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
    // 0x00429D04: j           L_00429D54
    // 0x00429D08: addu        $v0, $a0, $zero
    ctx->r2 = ADD32(ctx->r4, 0);
    entry_00429D54(rdram, ctx);
    return;
    // 0x00429D08: addu        $v0, $a0, $zero
    ctx->r2 = ADD32(ctx->r4, 0);
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
RECOMP_FUNC void entry_00429D54(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00429D54: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x00429D58: lw          $fp, 0x38($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X38);
    // 0x00429D5C: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x00429D60: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x00429D64: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x00429D68: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x00429D6C: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x00429D70: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x00429D74: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x00429D78: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x00429D7C: jr          $ra
    // 0x00429D80: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x00429D80: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void entry_00429DD4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_00429DC4:
    // 0x00429DD4: sh          $v0, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r2;
    // 0x00429DD8: lhu         $v0, 0x0($a2)
    ctx->r2 = MEM_HU(ctx->r6, 0X0);
    // 0x00429DDC: nor         $v1, $zero, $v1
    ctx->r3 = ~(0 | ctx->r3);
    // 0x00429DE0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x00429DE4: sh          $v0, 0x0($a2)
    MEM_H(0X0, ctx->r6) = ctx->r2;
    // 0x00429DE8: sltiu       $v0, $a3, 0x1C
    ctx->r2 = ctx->r7 < 0X1C ? 1 : 0;
    // 0x00429DEC: bne         $v0, $zero, L_00429DC4
    if (ctx->r2 != 0) {
        // 0x00429DF0: addu        $v0, $a0, $a3
        ctx->r2 = ADD32(ctx->r4, ctx->r7);
            goto L_00429DC4;
    }
    // 0x00429DF0: addu        $v0, $a0, $a3
    ctx->r2 = ADD32(ctx->r4, ctx->r7);
    // 0x00429DF4: jr          $ra
    // 0x00429DF8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x00429DF8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void entry_00429DE4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_00429DC4:
    // 0x00429DE4: sh          $v0, 0x0($a2)
    MEM_H(0X0, ctx->r6) = ctx->r2;
    // 0x00429DE8: sltiu       $v0, $a3, 0x1C
    ctx->r2 = ctx->r7 < 0X1C ? 1 : 0;
    // 0x00429DEC: bne         $v0, $zero, L_00429DC4
    if (ctx->r2 != 0) {
        // 0x00429DF0: addu        $v0, $a0, $a3
        ctx->r2 = ADD32(ctx->r4, ctx->r7);
            goto L_00429DC4;
    }
    // 0x00429DF0: addu        $v0, $a0, $a3
    ctx->r2 = ADD32(ctx->r4, ctx->r7);
    // 0x00429DF4: jr          $ra
    // 0x00429DF8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x00429DF8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void entry_00429E40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00429E40: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x00429E44: beq         $v1, $zero, L_00429E84
    if (ctx->r3 == 0) {
        // 0x00429E48: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_00429E84;
    }
    // 0x00429E48: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x00429E4C: bne         $v1, $v0, L_00429EB4
    if (ctx->r3 != ctx->r2) {
        // 0x00429E50: addu        $v0, $v1, $zero
        ctx->r2 = ADD32(ctx->r3, 0);
            goto L_00429EB4;
    }
    // 0x00429E50: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
    // 0x00429E54: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x00429E58: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x00429E5C: lw          $a1, 0x8($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X8);
    // 0x00429E60: jal         0x00299680
    // 0x00429E64: addiu       $a3, $sp, 0x10
    ctx->r7 = ADD32(ctx->r29, 0X10);
    func_00299680(rdram, ctx);
        goto after_0;
    // 0x00429E64: addiu       $a3, $sp, 0x10
    ctx->r7 = ADD32(ctx->r29, 0X10);
    after_0:
    // 0x00429E68: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x00429E6C: beq         $v1, $zero, L_00429E88
    if (ctx->r3 == 0) {
        // 0x00429E70: addu        $a1, $zero, $zero
        ctx->r5 = ADD32(0, 0);
            goto L_00429E88;
    }
    // 0x00429E70: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x00429E74: j           L_00429EB4
    // 0x00429E78: nop

        goto L_00429EB4;
    // 0x00429E78: nop

L_00429E7C:
    // 0x00429E7C: j           L_00429EB4
    // 0x00429E80: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
        goto L_00429EB4;
    // 0x00429E80: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_00429E84:
    // 0x00429E84: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
L_00429E88:
    // 0x00429E88: addiu       $a2, $sp, 0x10
    ctx->r6 = ADD32(ctx->r29, 0X10);
    // 0x00429E8C: addu        $v0, $s0, $a1
    ctx->r2 = ADD32(ctx->r16, ctx->r5);
L_00429E90:
    // 0x00429E90: addu        $v1, $a2, $a1
    ctx->r3 = ADD32(ctx->r6, ctx->r5);
    // 0x00429E94: lbu         $a0, 0xC($v0)
    ctx->r4 = MEM_BU(ctx->r2, 0XC);
    // 0x00429E98: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x00429E9C: bne         $a0, $v0, L_00429E7C
    if (ctx->r4 != ctx->r2) {
        // 0x00429EA0: addiu       $a1, $a1, 0x1
        ctx->r5 = ADD32(ctx->r5, 0X1);
            goto L_00429E7C;
    }
    // 0x00429EA0: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x00429EA4: slti        $v0, $a1, 0x20
    ctx->r2 = SIGNED(ctx->r5) < 0X20 ? 1 : 0;
    // 0x00429EA8: bne         $v0, $zero, L_00429E90
    if (ctx->r2 != 0) {
        // 0x00429EAC: addu        $v0, $s0, $a1
        ctx->r2 = ADD32(ctx->r16, ctx->r5);
            goto L_00429E90;
    }
    // 0x00429EAC: addu        $v0, $s0, $a1
    ctx->r2 = ADD32(ctx->r16, ctx->r5);
    // 0x00429EB0: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_00429EB4:
    // 0x00429EB4: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x00429EB8: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x00429EBC: jr          $ra
    // 0x00429EC0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x00429EC0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void entry_0042A44C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0042A44C: sw          $s4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r20;
    // 0x0042A450: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x0042A454: beq         $s1, $zero, L_0042A52C
    if (ctx->r17 == 0) {
        // 0x0042A458: addu        $a1, $s0, $zero
        ctx->r5 = ADD32(ctx->r16, 0);
            goto L_0042A52C;
    }
    // 0x0042A458: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x0042A45C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x0042A460: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x0042A464: jal         0x0020185C
    // 0x0042A468: addiu       $a3, $sp, 0x24
    ctx->r7 = ADD32(ctx->r29, 0X24);
    func_0020185C(rdram, ctx);
        goto after_0;
    // 0x0042A468: addiu       $a3, $sp, 0x24
    ctx->r7 = ADD32(ctx->r29, 0X24);
    after_0:
    // 0x0042A46C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0042A470: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x0042A474: addu        $a3, $a0, $zero
    ctx->r7 = ADD32(ctx->r4, 0);
    // 0x0042A478: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    // 0x0042A47C: lui         $v0, 0x21
    ctx->r2 = S32(0X21 << 16);
    // 0x0042A480: addiu       $v0, $v0, -0x4B70
    ctx->r2 = ADD32(ctx->r2, -0X4B70);
    // 0x0042A484: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x0042A488: lui         $v0, 0x800A
    ctx->r2 = S32(0X800A << 16);
    // 0x0042A48C: addiu       $v0, $v0, 0x5D80
    ctx->r2 = ADD32(ctx->r2, 0X5D80);
    // 0x0042A490: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x0042A494: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x0042A498: jal         0x0020367C
    // 0x0042A49C: sw          $s4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r20;
    func_0020367C(rdram, ctx);
        goto after_1;
    // 0x0042A49C: sw          $s4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r20;
    after_1:
    // 0x0042A4A0: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x0042A4A4: beq         $s0, $zero, L_0042A524
    if (ctx->r16 == 0) {
        // 0x0042A4A8: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_0042A524;
    }
    // 0x0042A4A8: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0042A4AC: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x0042A4B0: jal         0x002017D4
    // 0x0042A4B4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_002017D4(rdram, ctx);
        goto after_2;
    // 0x0042A4B4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_2:
    // 0x0042A4B8: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x0042A4BC: jal         0x002017D4
    // 0x0042A4C0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_002017D4(rdram, ctx);
        goto after_3;
    // 0x0042A4C0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_3:
    // 0x0042A4C4: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x0042A4C8: jal         0x002017D4
    // 0x0042A4CC: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_002017D4(rdram, ctx);
        goto after_4;
    // 0x0042A4CC: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_4:
    // 0x0042A4D0: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x0042A4D4: jal         0x002017D4
    // 0x0042A4D8: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_002017D4(rdram, ctx);
        goto after_5;
    // 0x0042A4D8: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_5:
    // 0x0042A4DC: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0042A4E0: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x0042A4E4: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x0042A4E8: lw          $t1, 0x4($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X4);
    // 0x0042A4EC: lw          $t2, 0x8($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X8);
    // 0x0042A4F0: lw          $t3, 0xC($v0)
    ctx->r11 = MEM_W(ctx->r2, 0XC);
    // 0x0042A4F4: sw          $t0, 0x0($s5)
    MEM_W(0X0, ctx->r21) = ctx->r8;
    // 0x0042A4F8: sw          $t1, 0x4($s5)
    MEM_W(0X4, ctx->r21) = ctx->r9;
    // 0x0042A4FC: sw          $t2, 0x8($s5)
    MEM_W(0X8, ctx->r21) = ctx->r10;
    // 0x0042A500: sw          $t3, 0xC($s5)
    MEM_W(0XC, ctx->r21) = ctx->r11;
    // 0x0042A504: lw          $t0, 0x10($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X10);
    // 0x0042A508: lw          $t1, 0x14($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X14);
    // 0x0042A50C: lw          $t2, 0x18($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X18);
    // 0x0042A510: sw          $t0, 0x10($s5)
    MEM_W(0X10, ctx->r21) = ctx->r8;
    // 0x0042A514: sw          $t1, 0x14($s5)
    MEM_W(0X14, ctx->r21) = ctx->r9;
    // 0x0042A518: jal         0x002052D8
    // 0x0042A51C: sw          $t2, 0x18($s5)
    MEM_W(0X18, ctx->r21) = ctx->r10;
    func_002052D8(rdram, ctx);
        goto after_6;
    // 0x0042A51C: sw          $t2, 0x18($s5)
    MEM_W(0X18, ctx->r21) = ctx->r10;
    after_6:
    // 0x0042A520: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
L_0042A524:
    // 0x0042A524: jal         0x002052D8
    // 0x0042A528: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_002052D8(rdram, ctx);
        goto after_7;
    // 0x0042A528: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_7:
L_0042A52C:
    // 0x0042A52C: lui         $v0, 0x1
    ctx->r2 = S32(0X1 << 16);
    // 0x0042A530: ori         $v0, $v0, 0x9008
    ctx->r2 = ctx->r2 | 0X9008;
    // 0x0042A534: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x0042A538: addiu       $a1, $zero, 0xDAD
    ctx->r5 = ADD32(0, 0XDAD);
    // 0x0042A53C: jal         0x00224180
    // 0x0042A540: addu        $s4, $s3, $v0
    ctx->r20 = ADD32(ctx->r19, ctx->r2);
    func_00224180(rdram, ctx);
        goto after_8;
    // 0x0042A540: addu        $s4, $s3, $v0
    ctx->r20 = ADD32(ctx->r19, ctx->r2);
    after_8:
    // 0x0042A544: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x0042A548: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x0042A54C: bne         $a1, $v0, L_0042A55C
    if (ctx->r5 != ctx->r2) {
        // 0x0042A550: nop
    
            goto L_0042A55C;
    }
    // 0x0042A550: nop

    // 0x0042A554: j           L_0042A674
    // 0x0042A558: sw          $zero, 0x8($s4)
    MEM_W(0X8, ctx->r20) = 0;
        goto L_0042A674;
    // 0x0042A558: sw          $zero, 0x8($s4)
    MEM_W(0X8, ctx->r20) = 0;
L_0042A55C:
    // 0x0042A55C: jal         0x00224F84
    // 0x0042A560: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    func_00224F84(rdram, ctx);
        goto after_9;
    // 0x0042A560: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    after_9:
    // 0x0042A564: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0042A568: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x0042A56C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x0042A570: addiu       $a2, $zero, 0x18
    ctx->r6 = ADD32(0, 0X18);
    // 0x0042A574: addu        $a3, $a0, $zero
    ctx->r7 = ADD32(ctx->r4, 0);
    // 0x0042A578: lui         $v0, 0x800A
    ctx->r2 = S32(0X800A << 16);
    // 0x0042A57C: addiu       $v0, $v0, 0x5D70
    ctx->r2 = ADD32(ctx->r2, 0X5D70);
    // 0x0042A580: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
    // 0x0042A584: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x0042A588: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x0042A58C: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x0042A590: jal         0x0020367C
    // 0x0042A594: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    func_0020367C(rdram, ctx);
        goto after_10;
    // 0x0042A594: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    after_10:
    // 0x0042A598: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x0042A59C: beq         $s1, $zero, L_0042A674
    if (ctx->r17 == 0) {
        // 0x0042A5A0: addu        $a1, $s0, $zero
        ctx->r5 = ADD32(ctx->r16, 0);
            goto L_0042A674;
    }
    // 0x0042A5A0: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x0042A5A4: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    // 0x0042A5A8: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x0042A5AC: jal         0x0020185C
    // 0x0042A5B0: addiu       $a3, $sp, 0x28
    ctx->r7 = ADD32(ctx->r29, 0X28);
    func_0020185C(rdram, ctx);
        goto after_11;
    // 0x0042A5B0: addiu       $a3, $sp, 0x28
    ctx->r7 = ADD32(ctx->r29, 0X28);
    after_11:
    // 0x0042A5B4: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0042A5B8: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x0042A5BC: addu        $a3, $a0, $zero
    ctx->r7 = ADD32(ctx->r4, 0);
    // 0x0042A5C0: lw          $a2, 0x28($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X28);
    // 0x0042A5C4: lui         $v0, 0x21
    ctx->r2 = S32(0X21 << 16);
    // 0x0042A5C8: addiu       $v0, $v0, -0x4B70
    ctx->r2 = ADD32(ctx->r2, -0X4B70);
    // 0x0042A5CC: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x0042A5D0: lui         $v0, 0x800A
    ctx->r2 = S32(0X800A << 16);
    // 0x0042A5D4: addiu       $v0, $v0, 0x5D80
    ctx->r2 = ADD32(ctx->r2, 0X5D80);
    // 0x0042A5D8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x0042A5DC: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x0042A5E0: jal         0x0020367C
    // 0x0042A5E4: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    func_0020367C(rdram, ctx);
        goto after_12;
    // 0x0042A5E4: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    after_12:
    // 0x0042A5E8: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x0042A5EC: beq         $s0, $zero, L_0042A66C
    if (ctx->r16 == 0) {
        // 0x0042A5F0: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_0042A66C;
    }
    // 0x0042A5F0: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0042A5F4: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x0042A5F8: jal         0x002017D4
    // 0x0042A5FC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_002017D4(rdram, ctx);
        goto after_13;
    // 0x0042A5FC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_13:
    // 0x0042A600: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x0042A604: jal         0x002017D4
    // 0x0042A608: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_002017D4(rdram, ctx);
        goto after_14;
    // 0x0042A608: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_14:
    // 0x0042A60C: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x0042A610: jal         0x002017D4
    // 0x0042A614: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_002017D4(rdram, ctx);
        goto after_15;
    // 0x0042A614: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_15:
    // 0x0042A618: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x0042A61C: jal         0x002017D4
    // 0x0042A620: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_002017D4(rdram, ctx);
        goto after_16;
    // 0x0042A620: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_16:
    // 0x0042A624: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0042A628: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x0042A62C: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x0042A630: lw          $t1, 0x4($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X4);
    // 0x0042A634: lw          $t2, 0x8($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X8);
    // 0x0042A638: lw          $t3, 0xC($v0)
    ctx->r11 = MEM_W(ctx->r2, 0XC);
    // 0x0042A63C: sw          $t0, 0x0($s4)
    MEM_W(0X0, ctx->r20) = ctx->r8;
    // 0x0042A640: sw          $t1, 0x4($s4)
    MEM_W(0X4, ctx->r20) = ctx->r9;
    // 0x0042A644: sw          $t2, 0x8($s4)
    MEM_W(0X8, ctx->r20) = ctx->r10;
    // 0x0042A648: sw          $t3, 0xC($s4)
    MEM_W(0XC, ctx->r20) = ctx->r11;
    // 0x0042A64C: lw          $t0, 0x10($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X10);
    // 0x0042A650: lw          $t1, 0x14($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X14);
    // 0x0042A654: lw          $t2, 0x18($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X18);
    // 0x0042A658: sw          $t0, 0x10($s4)
    MEM_W(0X10, ctx->r20) = ctx->r8;
    // 0x0042A65C: sw          $t1, 0x14($s4)
    MEM_W(0X14, ctx->r20) = ctx->r9;
    // 0x0042A660: jal         0x002052D8
    // 0x0042A664: sw          $t2, 0x18($s4)
    MEM_W(0X18, ctx->r20) = ctx->r10;
    func_002052D8(rdram, ctx);
        goto after_17;
    // 0x0042A664: sw          $t2, 0x18($s4)
    MEM_W(0X18, ctx->r20) = ctx->r10;
    after_17:
    // 0x0042A668: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
L_0042A66C:
    // 0x0042A66C: jal         0x002052D8
    // 0x0042A670: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_002052D8(rdram, ctx);
        goto after_18;
    // 0x0042A670: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_18:
L_0042A674:
    // 0x0042A674: lui         $v0, 0x1
    ctx->r2 = S32(0X1 << 16);
    // 0x0042A678: ori         $v0, $v0, 0x9024
    ctx->r2 = ctx->r2 | 0X9024;
    // 0x0042A67C: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x0042A680: addiu       $a1, $zero, 0xDAE
    ctx->r5 = ADD32(0, 0XDAE);
    // 0x0042A684: jal         0x00224180
    // 0x0042A688: addu        $s4, $s3, $v0
    ctx->r20 = ADD32(ctx->r19, ctx->r2);
    func_00224180(rdram, ctx);
        goto after_19;
    // 0x0042A688: addu        $s4, $s3, $v0
    ctx->r20 = ADD32(ctx->r19, ctx->r2);
    after_19:
    // 0x0042A68C: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x0042A690: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x0042A694: bne         $a1, $v0, L_0042A6A4
    if (ctx->r5 != ctx->r2) {
        // 0x0042A698: nop
    
            goto L_0042A6A4;
    }
    // 0x0042A698: nop

    // 0x0042A69C: j           L_0042A7BC
    // 0x0042A6A0: sw          $zero, 0x8($s4)
    MEM_W(0X8, ctx->r20) = 0;
        goto L_0042A7BC;
    // 0x0042A6A0: sw          $zero, 0x8($s4)
    MEM_W(0X8, ctx->r20) = 0;
L_0042A6A4:
    // 0x0042A6A4: jal         0x00224F84
    // 0x0042A6A8: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    func_00224F84(rdram, ctx);
        goto after_20;
    // 0x0042A6A8: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    after_20:
    // 0x0042A6AC: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0042A6B0: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x0042A6B4: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x0042A6B8: addiu       $a2, $zero, 0x18
    ctx->r6 = ADD32(0, 0X18);
    // 0x0042A6BC: addu        $a3, $a0, $zero
    ctx->r7 = ADD32(ctx->r4, 0);
    // 0x0042A6C0: lui         $v0, 0x800A
    ctx->r2 = S32(0X800A << 16);
    // 0x0042A6C4: addiu       $v0, $v0, 0x5D70
    ctx->r2 = ADD32(ctx->r2, 0X5D70);
    // 0x0042A6C8: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
    // 0x0042A6CC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x0042A6D0: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x0042A6D4: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x0042A6D8: jal         0x0020367C
    // 0x0042A6DC: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    func_0020367C(rdram, ctx);
        goto after_21;
    // 0x0042A6DC: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    after_21:
    // 0x0042A6E0: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x0042A6E4: beq         $s1, $zero, L_0042A7BC
    if (ctx->r17 == 0) {
        // 0x0042A6E8: addu        $a1, $s0, $zero
        ctx->r5 = ADD32(ctx->r16, 0);
            goto L_0042A7BC;
    }
    // 0x0042A6E8: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x0042A6EC: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    // 0x0042A6F0: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x0042A6F4: jal         0x0020185C
    // 0x0042A6F8: addiu       $a3, $sp, 0x2C
    ctx->r7 = ADD32(ctx->r29, 0X2C);
    func_0020185C(rdram, ctx);
        goto after_22;
    // 0x0042A6F8: addiu       $a3, $sp, 0x2C
    ctx->r7 = ADD32(ctx->r29, 0X2C);
    after_22:
    // 0x0042A6FC: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0042A700: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x0042A704: addu        $a3, $a0, $zero
    ctx->r7 = ADD32(ctx->r4, 0);
    // 0x0042A708: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    // 0x0042A70C: lui         $v0, 0x21
    ctx->r2 = S32(0X21 << 16);
    // 0x0042A710: addiu       $v0, $v0, -0x4B70
    ctx->r2 = ADD32(ctx->r2, -0X4B70);
    // 0x0042A714: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x0042A718: lui         $v0, 0x800A
    ctx->r2 = S32(0X800A << 16);
    // 0x0042A71C: addiu       $v0, $v0, 0x5D80
    ctx->r2 = ADD32(ctx->r2, 0X5D80);
    // 0x0042A720: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x0042A724: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x0042A728: jal         0x0020367C
    // 0x0042A72C: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    func_0020367C(rdram, ctx);
        goto after_23;
    // 0x0042A72C: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    after_23:
    // 0x0042A730: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x0042A734: beq         $s0, $zero, L_0042A7B4
    if (ctx->r16 == 0) {
        // 0x0042A738: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_0042A7B4;
    }
    // 0x0042A738: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0042A73C: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x0042A740: jal         0x002017D4
    // 0x0042A744: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_002017D4(rdram, ctx);
        goto after_24;
    // 0x0042A744: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_24:
    // 0x0042A748: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x0042A74C: jal         0x002017D4
    // 0x0042A750: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_002017D4(rdram, ctx);
        goto after_25;
    // 0x0042A750: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_25:
    // 0x0042A754: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x0042A758: jal         0x002017D4
    // 0x0042A75C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_002017D4(rdram, ctx);
        goto after_26;
    // 0x0042A75C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_26:
    // 0x0042A760: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x0042A764: jal         0x002017D4
    // 0x0042A768: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_002017D4(rdram, ctx);
        goto after_27;
    // 0x0042A768: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_27:
    // 0x0042A76C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0042A770: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x0042A774: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x0042A778: lw          $t1, 0x4($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X4);
    // 0x0042A77C: lw          $t2, 0x8($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X8);
    // 0x0042A780: lw          $t3, 0xC($v0)
    ctx->r11 = MEM_W(ctx->r2, 0XC);
    // 0x0042A784: sw          $t0, 0x0($s4)
    MEM_W(0X0, ctx->r20) = ctx->r8;
    // 0x0042A788: sw          $t1, 0x4($s4)
    MEM_W(0X4, ctx->r20) = ctx->r9;
    // 0x0042A78C: sw          $t2, 0x8($s4)
    MEM_W(0X8, ctx->r20) = ctx->r10;
    // 0x0042A790: sw          $t3, 0xC($s4)
    MEM_W(0XC, ctx->r20) = ctx->r11;
    // 0x0042A794: lw          $t0, 0x10($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X10);
    // 0x0042A798: lw          $t1, 0x14($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X14);
    // 0x0042A79C: lw          $t2, 0x18($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X18);
    // 0x0042A7A0: sw          $t0, 0x10($s4)
    MEM_W(0X10, ctx->r20) = ctx->r8;
    // 0x0042A7A4: sw          $t1, 0x14($s4)
    MEM_W(0X14, ctx->r20) = ctx->r9;
    // 0x0042A7A8: jal         0x002052D8
    // 0x0042A7AC: sw          $t2, 0x18($s4)
    MEM_W(0X18, ctx->r20) = ctx->r10;
    func_002052D8(rdram, ctx);
        goto after_28;
    // 0x0042A7AC: sw          $t2, 0x18($s4)
    MEM_W(0X18, ctx->r20) = ctx->r10;
    after_28:
    // 0x0042A7B0: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
L_0042A7B4:
    // 0x0042A7B4: jal         0x002052D8
    // 0x0042A7B8: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_002052D8(rdram, ctx);
        goto after_29;
    // 0x0042A7B8: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_29:
L_0042A7BC:
    // 0x0042A7BC: lui         $v0, 0x1
    ctx->r2 = S32(0X1 << 16);
    // 0x0042A7C0: ori         $v0, $v0, 0x9040
    ctx->r2 = ctx->r2 | 0X9040;
    // 0x0042A7C4: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x0042A7C8: addiu       $a1, $zero, 0xDAF
    ctx->r5 = ADD32(0, 0XDAF);
    // 0x0042A7CC: jal         0x00224180
    // 0x0042A7D0: addu        $s4, $s3, $v0
    ctx->r20 = ADD32(ctx->r19, ctx->r2);
    func_00224180(rdram, ctx);
        goto after_30;
    // 0x0042A7D0: addu        $s4, $s3, $v0
    ctx->r20 = ADD32(ctx->r19, ctx->r2);
    after_30:
    // 0x0042A7D4: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x0042A7D8: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x0042A7DC: bne         $a1, $v0, L_0042A7EC
    if (ctx->r5 != ctx->r2) {
        // 0x0042A7E0: nop
    
            goto L_0042A7EC;
    }
    // 0x0042A7E0: nop

    // 0x0042A7E4: j           L_0042A904
    // 0x0042A7E8: sw          $zero, 0x8($s4)
    MEM_W(0X8, ctx->r20) = 0;
        goto L_0042A904;
    // 0x0042A7E8: sw          $zero, 0x8($s4)
    MEM_W(0X8, ctx->r20) = 0;
L_0042A7EC:
    // 0x0042A7EC: jal         0x00224F84
    // 0x0042A7F0: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    func_00224F84(rdram, ctx);
        goto after_31;
    // 0x0042A7F0: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    after_31:
    // 0x0042A7F4: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0042A7F8: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x0042A7FC: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x0042A800: addiu       $a2, $zero, 0x18
    ctx->r6 = ADD32(0, 0X18);
    // 0x0042A804: addu        $a3, $a0, $zero
    ctx->r7 = ADD32(ctx->r4, 0);
    // 0x0042A808: lui         $v0, 0x800A
    ctx->r2 = S32(0X800A << 16);
    // 0x0042A80C: addiu       $v0, $v0, 0x5D70
    ctx->r2 = ADD32(ctx->r2, 0X5D70);
    // 0x0042A810: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
    // 0x0042A814: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x0042A818: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x0042A81C: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x0042A820: jal         0x0020367C
    // 0x0042A824: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    func_0020367C(rdram, ctx);
        goto after_32;
    // 0x0042A824: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    after_32:
    // 0x0042A828: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x0042A82C: beq         $s1, $zero, L_0042A904
    if (ctx->r17 == 0) {
        // 0x0042A830: addu        $a1, $s0, $zero
        ctx->r5 = ADD32(ctx->r16, 0);
            goto L_0042A904;
    }
    // 0x0042A830: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x0042A834: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    // 0x0042A838: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x0042A83C: jal         0x0020185C
    // 0x0042A840: addiu       $a3, $sp, 0x30
    ctx->r7 = ADD32(ctx->r29, 0X30);
    func_0020185C(rdram, ctx);
        goto after_33;
    // 0x0042A840: addiu       $a3, $sp, 0x30
    ctx->r7 = ADD32(ctx->r29, 0X30);
    after_33:
    // 0x0042A844: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0042A848: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x0042A84C: addu        $a3, $a0, $zero
    ctx->r7 = ADD32(ctx->r4, 0);
    // 0x0042A850: lw          $a2, 0x30($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X30);
    // 0x0042A854: lui         $v0, 0x21
    ctx->r2 = S32(0X21 << 16);
    // 0x0042A858: addiu       $v0, $v0, -0x4B70
    ctx->r2 = ADD32(ctx->r2, -0X4B70);
    // 0x0042A85C: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x0042A860: lui         $v0, 0x800A
    ctx->r2 = S32(0X800A << 16);
    // 0x0042A864: addiu       $v0, $v0, 0x5D80
    ctx->r2 = ADD32(ctx->r2, 0X5D80);
    // 0x0042A868: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x0042A86C: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x0042A870: jal         0x0020367C
    // 0x0042A874: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    func_0020367C(rdram, ctx);
        goto after_34;
    // 0x0042A874: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    after_34:
    // 0x0042A878: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x0042A87C: beq         $s0, $zero, L_0042A8FC
    if (ctx->r16 == 0) {
        // 0x0042A880: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_0042A8FC;
    }
    // 0x0042A880: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0042A884: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x0042A888: jal         0x002017D4
    // 0x0042A88C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_002017D4(rdram, ctx);
        goto after_35;
    // 0x0042A88C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_35:
    // 0x0042A890: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x0042A894: jal         0x002017D4
    // 0x0042A898: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_002017D4(rdram, ctx);
        goto after_36;
    // 0x0042A898: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_36:
    // 0x0042A89C: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x0042A8A0: jal         0x002017D4
    // 0x0042A8A4: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_002017D4(rdram, ctx);
        goto after_37;
    // 0x0042A8A4: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_37:
    // 0x0042A8A8: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x0042A8AC: jal         0x002017D4
    // 0x0042A8B0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_002017D4(rdram, ctx);
        goto after_38;
    // 0x0042A8B0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_38:
    // 0x0042A8B4: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0042A8B8: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x0042A8BC: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x0042A8C0: lw          $t1, 0x4($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X4);
    // 0x0042A8C4: lw          $t2, 0x8($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X8);
    // 0x0042A8C8: lw          $t3, 0xC($v0)
    ctx->r11 = MEM_W(ctx->r2, 0XC);
    // 0x0042A8CC: sw          $t0, 0x0($s4)
    MEM_W(0X0, ctx->r20) = ctx->r8;
    // 0x0042A8D0: sw          $t1, 0x4($s4)
    MEM_W(0X4, ctx->r20) = ctx->r9;
    // 0x0042A8D4: sw          $t2, 0x8($s4)
    MEM_W(0X8, ctx->r20) = ctx->r10;
    // 0x0042A8D8: sw          $t3, 0xC($s4)
    MEM_W(0XC, ctx->r20) = ctx->r11;
    // 0x0042A8DC: lw          $t0, 0x10($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X10);
    // 0x0042A8E0: lw          $t1, 0x14($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X14);
    // 0x0042A8E4: lw          $t2, 0x18($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X18);
    // 0x0042A8E8: sw          $t0, 0x10($s4)
    MEM_W(0X10, ctx->r20) = ctx->r8;
    // 0x0042A8EC: sw          $t1, 0x14($s4)
    MEM_W(0X14, ctx->r20) = ctx->r9;
    // 0x0042A8F0: jal         0x002052D8
    // 0x0042A8F4: sw          $t2, 0x18($s4)
    MEM_W(0X18, ctx->r20) = ctx->r10;
    func_002052D8(rdram, ctx);
        goto after_39;
    // 0x0042A8F4: sw          $t2, 0x18($s4)
    MEM_W(0X18, ctx->r20) = ctx->r10;
    after_39:
    // 0x0042A8F8: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
L_0042A8FC:
    // 0x0042A8FC: jal         0x002052D8
    // 0x0042A900: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_002052D8(rdram, ctx);
        goto after_40;
    // 0x0042A900: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_40:
L_0042A904:
    // 0x0042A904: lui         $v0, 0x1
    ctx->r2 = S32(0X1 << 16);
    // 0x0042A908: ori         $v0, $v0, 0x905C
    ctx->r2 = ctx->r2 | 0X905C;
    // 0x0042A90C: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x0042A910: addiu       $a1, $zero, 0xDB0
    ctx->r5 = ADD32(0, 0XDB0);
    // 0x0042A914: jal         0x00224180
    // 0x0042A918: addu        $s4, $s3, $v0
    ctx->r20 = ADD32(ctx->r19, ctx->r2);
    func_00224180(rdram, ctx);
        goto after_41;
    // 0x0042A918: addu        $s4, $s3, $v0
    ctx->r20 = ADD32(ctx->r19, ctx->r2);
    after_41:
    // 0x0042A91C: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x0042A920: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x0042A924: bne         $a1, $v0, L_0042A934
    if (ctx->r5 != ctx->r2) {
        // 0x0042A928: nop
    
            goto L_0042A934;
    }
    // 0x0042A928: nop

    // 0x0042A92C: j           L_0042AA4C
    // 0x0042A930: sw          $zero, 0x8($s4)
    MEM_W(0X8, ctx->r20) = 0;
        goto L_0042AA4C;
    // 0x0042A930: sw          $zero, 0x8($s4)
    MEM_W(0X8, ctx->r20) = 0;
L_0042A934:
    // 0x0042A934: jal         0x00224F84
    // 0x0042A938: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    func_00224F84(rdram, ctx);
        goto after_42;
    // 0x0042A938: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    after_42:
    // 0x0042A93C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0042A940: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x0042A944: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x0042A948: addiu       $a2, $zero, 0x18
    ctx->r6 = ADD32(0, 0X18);
    // 0x0042A94C: addu        $a3, $a0, $zero
    ctx->r7 = ADD32(ctx->r4, 0);
    // 0x0042A950: lui         $v0, 0x800A
    ctx->r2 = S32(0X800A << 16);
    // 0x0042A954: addiu       $v0, $v0, 0x5D70
    ctx->r2 = ADD32(ctx->r2, 0X5D70);
    // 0x0042A958: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
    // 0x0042A95C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x0042A960: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x0042A964: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x0042A968: jal         0x0020367C
    // 0x0042A96C: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    func_0020367C(rdram, ctx);
        goto after_43;
    // 0x0042A96C: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    after_43:
    // 0x0042A970: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x0042A974: beq         $s1, $zero, L_0042AA4C
    if (ctx->r17 == 0) {
        // 0x0042A978: addu        $a1, $s0, $zero
        ctx->r5 = ADD32(ctx->r16, 0);
            goto L_0042AA4C;
    }
    // 0x0042A978: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x0042A97C: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    // 0x0042A980: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x0042A984: jal         0x0020185C
    // 0x0042A988: addiu       $a3, $sp, 0x34
    ctx->r7 = ADD32(ctx->r29, 0X34);
    func_0020185C(rdram, ctx);
        goto after_44;
    // 0x0042A988: addiu       $a3, $sp, 0x34
    ctx->r7 = ADD32(ctx->r29, 0X34);
    after_44:
    // 0x0042A98C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0042A990: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x0042A994: addu        $a3, $a0, $zero
    ctx->r7 = ADD32(ctx->r4, 0);
    // 0x0042A998: lw          $a2, 0x34($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X34);
    // 0x0042A99C: lui         $v0, 0x21
    ctx->r2 = S32(0X21 << 16);
    // 0x0042A9A0: addiu       $v0, $v0, -0x4B70
    ctx->r2 = ADD32(ctx->r2, -0X4B70);
    // 0x0042A9A4: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x0042A9A8: lui         $v0, 0x800A
    ctx->r2 = S32(0X800A << 16);
    // 0x0042A9AC: addiu       $v0, $v0, 0x5D80
    ctx->r2 = ADD32(ctx->r2, 0X5D80);
    // 0x0042A9B0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x0042A9B4: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x0042A9B8: jal         0x0020367C
    // 0x0042A9BC: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    func_0020367C(rdram, ctx);
        goto after_45;
    // 0x0042A9BC: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    after_45:
    // 0x0042A9C0: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x0042A9C4: beq         $s0, $zero, L_0042AA44
    if (ctx->r16 == 0) {
        // 0x0042A9C8: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_0042AA44;
    }
    // 0x0042A9C8: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0042A9CC: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x0042A9D0: jal         0x002017D4
    // 0x0042A9D4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_002017D4(rdram, ctx);
        goto after_46;
    // 0x0042A9D4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_46:
    // 0x0042A9D8: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x0042A9DC: jal         0x002017D4
    // 0x0042A9E0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_002017D4(rdram, ctx);
        goto after_47;
    // 0x0042A9E0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_47:
    // 0x0042A9E4: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x0042A9E8: jal         0x002017D4
    // 0x0042A9EC: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_002017D4(rdram, ctx);
        goto after_48;
    // 0x0042A9EC: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_48:
    // 0x0042A9F0: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x0042A9F4: jal         0x002017D4
    // 0x0042A9F8: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_002017D4(rdram, ctx);
        goto after_49;
    // 0x0042A9F8: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_49:
    // 0x0042A9FC: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0042AA00: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x0042AA04: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x0042AA08: lw          $t1, 0x4($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X4);
    // 0x0042AA0C: lw          $t2, 0x8($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X8);
    // 0x0042AA10: lw          $t3, 0xC($v0)
    ctx->r11 = MEM_W(ctx->r2, 0XC);
    // 0x0042AA14: sw          $t0, 0x0($s4)
    MEM_W(0X0, ctx->r20) = ctx->r8;
    // 0x0042AA18: sw          $t1, 0x4($s4)
    MEM_W(0X4, ctx->r20) = ctx->r9;
    // 0x0042AA1C: sw          $t2, 0x8($s4)
    MEM_W(0X8, ctx->r20) = ctx->r10;
    // 0x0042AA20: sw          $t3, 0xC($s4)
    MEM_W(0XC, ctx->r20) = ctx->r11;
    // 0x0042AA24: lw          $t0, 0x10($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X10);
    // 0x0042AA28: lw          $t1, 0x14($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X14);
    // 0x0042AA2C: lw          $t2, 0x18($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X18);
    // 0x0042AA30: sw          $t0, 0x10($s4)
    MEM_W(0X10, ctx->r20) = ctx->r8;
    // 0x0042AA34: sw          $t1, 0x14($s4)
    MEM_W(0X14, ctx->r20) = ctx->r9;
    // 0x0042AA38: jal         0x002052D8
    // 0x0042AA3C: sw          $t2, 0x18($s4)
    MEM_W(0X18, ctx->r20) = ctx->r10;
    func_002052D8(rdram, ctx);
        goto after_50;
    // 0x0042AA3C: sw          $t2, 0x18($s4)
    MEM_W(0X18, ctx->r20) = ctx->r10;
    after_50:
    // 0x0042AA40: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
L_0042AA44:
    // 0x0042AA44: jal         0x002052D8
    // 0x0042AA48: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_002052D8(rdram, ctx);
        goto after_51;
    // 0x0042AA48: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_51:
L_0042AA4C:
    // 0x0042AA4C: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x0042AA50: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x0042AA54: jal         0x0042AC0C
    // 0x0042AA58: addu        $a2, $a1, $zero
    ctx->r6 = ADD32(ctx->r5, 0);
    func_0042AC0C(rdram, ctx);
        goto after_52;
    // 0x0042AA58: addu        $a2, $a1, $zero
    ctx->r6 = ADD32(ctx->r5, 0);
    after_52:
    // 0x0042AA5C: lw          $ra, 0x50($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X50);
    // 0x0042AA60: lw          $s5, 0x4C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X4C);
    // 0x0042AA64: lw          $s4, 0x48($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X48);
    // 0x0042AA68: lw          $s3, 0x44($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X44);
    // 0x0042AA6C: lw          $s2, 0x40($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X40);
    // 0x0042AA70: lw          $s1, 0x3C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X3C);
    // 0x0042AA74: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x0042AA78: jr          $ra
    // 0x0042AA7C: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    return;
    // 0x0042AA7C: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void entry_0042A594(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0042A594: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x0042A598: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x0042A59C: beq         $s1, $zero, L_0042A674
    if (ctx->r17 == 0) {
        // 0x0042A5A0: addu        $a1, $s0, $zero
        ctx->r5 = ADD32(ctx->r16, 0);
            goto L_0042A674;
    }
    // 0x0042A5A0: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x0042A5A4: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    // 0x0042A5A8: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x0042A5AC: jal         0x0020185C
    // 0x0042A5B0: addiu       $a3, $sp, 0x28
    ctx->r7 = ADD32(ctx->r29, 0X28);
    func_0020185C(rdram, ctx);
        goto after_0;
    // 0x0042A5B0: addiu       $a3, $sp, 0x28
    ctx->r7 = ADD32(ctx->r29, 0X28);
    after_0:
    // 0x0042A5B4: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0042A5B8: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x0042A5BC: addu        $a3, $a0, $zero
    ctx->r7 = ADD32(ctx->r4, 0);
    // 0x0042A5C0: lw          $a2, 0x28($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X28);
    // 0x0042A5C4: lui         $v0, 0x21
    ctx->r2 = S32(0X21 << 16);
    // 0x0042A5C8: addiu       $v0, $v0, -0x4B70
    ctx->r2 = ADD32(ctx->r2, -0X4B70);
    // 0x0042A5CC: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x0042A5D0: lui         $v0, 0x800A
    ctx->r2 = S32(0X800A << 16);
    // 0x0042A5D4: addiu       $v0, $v0, 0x5D80
    ctx->r2 = ADD32(ctx->r2, 0X5D80);
    // 0x0042A5D8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x0042A5DC: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x0042A5E0: jal         0x0020367C
    // 0x0042A5E4: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    func_0020367C(rdram, ctx);
        goto after_1;
    // 0x0042A5E4: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    after_1:
    // 0x0042A5E8: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x0042A5EC: beq         $s0, $zero, L_0042A66C
    if (ctx->r16 == 0) {
        // 0x0042A5F0: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_0042A66C;
    }
    // 0x0042A5F0: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0042A5F4: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x0042A5F8: jal         0x002017D4
    // 0x0042A5FC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_002017D4(rdram, ctx);
        goto after_2;
    // 0x0042A5FC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_2:
    // 0x0042A600: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x0042A604: jal         0x002017D4
    // 0x0042A608: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_002017D4(rdram, ctx);
        goto after_3;
    // 0x0042A608: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_3:
    // 0x0042A60C: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x0042A610: jal         0x002017D4
    // 0x0042A614: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_002017D4(rdram, ctx);
        goto after_4;
    // 0x0042A614: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_4:
    // 0x0042A618: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x0042A61C: jal         0x002017D4
    // 0x0042A620: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_002017D4(rdram, ctx);
        goto after_5;
    // 0x0042A620: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_5:
    // 0x0042A624: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0042A628: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x0042A62C: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x0042A630: lw          $t1, 0x4($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X4);
    // 0x0042A634: lw          $t2, 0x8($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X8);
    // 0x0042A638: lw          $t3, 0xC($v0)
    ctx->r11 = MEM_W(ctx->r2, 0XC);
    // 0x0042A63C: sw          $t0, 0x0($s4)
    MEM_W(0X0, ctx->r20) = ctx->r8;
    // 0x0042A640: sw          $t1, 0x4($s4)
    MEM_W(0X4, ctx->r20) = ctx->r9;
    // 0x0042A644: sw          $t2, 0x8($s4)
    MEM_W(0X8, ctx->r20) = ctx->r10;
    // 0x0042A648: sw          $t3, 0xC($s4)
    MEM_W(0XC, ctx->r20) = ctx->r11;
    // 0x0042A64C: lw          $t0, 0x10($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X10);
    // 0x0042A650: lw          $t1, 0x14($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X14);
    // 0x0042A654: lw          $t2, 0x18($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X18);
    // 0x0042A658: sw          $t0, 0x10($s4)
    MEM_W(0X10, ctx->r20) = ctx->r8;
    // 0x0042A65C: sw          $t1, 0x14($s4)
    MEM_W(0X14, ctx->r20) = ctx->r9;
    // 0x0042A660: jal         0x002052D8
    // 0x0042A664: sw          $t2, 0x18($s4)
    MEM_W(0X18, ctx->r20) = ctx->r10;
    func_002052D8(rdram, ctx);
        goto after_6;
    // 0x0042A664: sw          $t2, 0x18($s4)
    MEM_W(0X18, ctx->r20) = ctx->r10;
    after_6:
    // 0x0042A668: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
L_0042A66C:
    // 0x0042A66C: jal         0x002052D8
    // 0x0042A670: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_002052D8(rdram, ctx);
        goto after_7;
    // 0x0042A670: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_7:
L_0042A674:
    // 0x0042A674: lui         $v0, 0x1
    ctx->r2 = S32(0X1 << 16);
    // 0x0042A678: ori         $v0, $v0, 0x9024
    ctx->r2 = ctx->r2 | 0X9024;
    // 0x0042A67C: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x0042A680: addiu       $a1, $zero, 0xDAE
    ctx->r5 = ADD32(0, 0XDAE);
    // 0x0042A684: jal         0x00224180
    // 0x0042A688: addu        $s4, $s3, $v0
    ctx->r20 = ADD32(ctx->r19, ctx->r2);
    func_00224180(rdram, ctx);
        goto after_8;
    // 0x0042A688: addu        $s4, $s3, $v0
    ctx->r20 = ADD32(ctx->r19, ctx->r2);
    after_8:
    // 0x0042A68C: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x0042A690: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x0042A694: bne         $a1, $v0, L_0042A6A4
    if (ctx->r5 != ctx->r2) {
        // 0x0042A698: nop
    
            goto L_0042A6A4;
    }
    // 0x0042A698: nop

    // 0x0042A69C: j           L_0042A7BC
    // 0x0042A6A0: sw          $zero, 0x8($s4)
    MEM_W(0X8, ctx->r20) = 0;
        goto L_0042A7BC;
    // 0x0042A6A0: sw          $zero, 0x8($s4)
    MEM_W(0X8, ctx->r20) = 0;
L_0042A6A4:
    // 0x0042A6A4: jal         0x00224F84
    // 0x0042A6A8: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    func_00224F84(rdram, ctx);
        goto after_9;
    // 0x0042A6A8: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    after_9:
    // 0x0042A6AC: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0042A6B0: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x0042A6B4: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x0042A6B8: addiu       $a2, $zero, 0x18
    ctx->r6 = ADD32(0, 0X18);
    // 0x0042A6BC: addu        $a3, $a0, $zero
    ctx->r7 = ADD32(ctx->r4, 0);
    // 0x0042A6C0: lui         $v0, 0x800A
    ctx->r2 = S32(0X800A << 16);
    // 0x0042A6C4: addiu       $v0, $v0, 0x5D70
    ctx->r2 = ADD32(ctx->r2, 0X5D70);
    // 0x0042A6C8: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
    // 0x0042A6CC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x0042A6D0: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x0042A6D4: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x0042A6D8: jal         0x0020367C
    // 0x0042A6DC: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    func_0020367C(rdram, ctx);
        goto after_10;
    // 0x0042A6DC: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    after_10:
    // 0x0042A6E0: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x0042A6E4: beq         $s1, $zero, L_0042A7BC
    if (ctx->r17 == 0) {
        // 0x0042A6E8: addu        $a1, $s0, $zero
        ctx->r5 = ADD32(ctx->r16, 0);
            goto L_0042A7BC;
    }
    // 0x0042A6E8: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x0042A6EC: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    // 0x0042A6F0: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x0042A6F4: jal         0x0020185C
    // 0x0042A6F8: addiu       $a3, $sp, 0x2C
    ctx->r7 = ADD32(ctx->r29, 0X2C);
    func_0020185C(rdram, ctx);
        goto after_11;
    // 0x0042A6F8: addiu       $a3, $sp, 0x2C
    ctx->r7 = ADD32(ctx->r29, 0X2C);
    after_11:
    // 0x0042A6FC: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0042A700: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x0042A704: addu        $a3, $a0, $zero
    ctx->r7 = ADD32(ctx->r4, 0);
    // 0x0042A708: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    // 0x0042A70C: lui         $v0, 0x21
    ctx->r2 = S32(0X21 << 16);
    // 0x0042A710: addiu       $v0, $v0, -0x4B70
    ctx->r2 = ADD32(ctx->r2, -0X4B70);
    // 0x0042A714: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x0042A718: lui         $v0, 0x800A
    ctx->r2 = S32(0X800A << 16);
    // 0x0042A71C: addiu       $v0, $v0, 0x5D80
    ctx->r2 = ADD32(ctx->r2, 0X5D80);
    // 0x0042A720: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x0042A724: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x0042A728: jal         0x0020367C
    // 0x0042A72C: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    func_0020367C(rdram, ctx);
        goto after_12;
    // 0x0042A72C: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    after_12:
    // 0x0042A730: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x0042A734: beq         $s0, $zero, L_0042A7B4
    if (ctx->r16 == 0) {
        // 0x0042A738: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_0042A7B4;
    }
    // 0x0042A738: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0042A73C: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x0042A740: jal         0x002017D4
    // 0x0042A744: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_002017D4(rdram, ctx);
        goto after_13;
    // 0x0042A744: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_13:
    // 0x0042A748: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x0042A74C: jal         0x002017D4
    // 0x0042A750: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_002017D4(rdram, ctx);
        goto after_14;
    // 0x0042A750: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_14:
    // 0x0042A754: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x0042A758: jal         0x002017D4
    // 0x0042A75C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_002017D4(rdram, ctx);
        goto after_15;
    // 0x0042A75C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_15:
    // 0x0042A760: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x0042A764: jal         0x002017D4
    // 0x0042A768: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_002017D4(rdram, ctx);
        goto after_16;
    // 0x0042A768: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_16:
    // 0x0042A76C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0042A770: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x0042A774: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x0042A778: lw          $t1, 0x4($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X4);
    // 0x0042A77C: lw          $t2, 0x8($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X8);
    // 0x0042A780: lw          $t3, 0xC($v0)
    ctx->r11 = MEM_W(ctx->r2, 0XC);
    // 0x0042A784: sw          $t0, 0x0($s4)
    MEM_W(0X0, ctx->r20) = ctx->r8;
    // 0x0042A788: sw          $t1, 0x4($s4)
    MEM_W(0X4, ctx->r20) = ctx->r9;
    // 0x0042A78C: sw          $t2, 0x8($s4)
    MEM_W(0X8, ctx->r20) = ctx->r10;
    // 0x0042A790: sw          $t3, 0xC($s4)
    MEM_W(0XC, ctx->r20) = ctx->r11;
    // 0x0042A794: lw          $t0, 0x10($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X10);
    // 0x0042A798: lw          $t1, 0x14($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X14);
    // 0x0042A79C: lw          $t2, 0x18($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X18);
    // 0x0042A7A0: sw          $t0, 0x10($s4)
    MEM_W(0X10, ctx->r20) = ctx->r8;
    // 0x0042A7A4: sw          $t1, 0x14($s4)
    MEM_W(0X14, ctx->r20) = ctx->r9;
    // 0x0042A7A8: jal         0x002052D8
    // 0x0042A7AC: sw          $t2, 0x18($s4)
    MEM_W(0X18, ctx->r20) = ctx->r10;
    func_002052D8(rdram, ctx);
        goto after_17;
    // 0x0042A7AC: sw          $t2, 0x18($s4)
    MEM_W(0X18, ctx->r20) = ctx->r10;
    after_17:
    // 0x0042A7B0: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
L_0042A7B4:
    // 0x0042A7B4: jal         0x002052D8
    // 0x0042A7B8: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_002052D8(rdram, ctx);
        goto after_18;
    // 0x0042A7B8: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_18:
L_0042A7BC:
    // 0x0042A7BC: lui         $v0, 0x1
    ctx->r2 = S32(0X1 << 16);
    // 0x0042A7C0: ori         $v0, $v0, 0x9040
    ctx->r2 = ctx->r2 | 0X9040;
    // 0x0042A7C4: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x0042A7C8: addiu       $a1, $zero, 0xDAF
    ctx->r5 = ADD32(0, 0XDAF);
    // 0x0042A7CC: jal         0x00224180
    // 0x0042A7D0: addu        $s4, $s3, $v0
    ctx->r20 = ADD32(ctx->r19, ctx->r2);
    func_00224180(rdram, ctx);
        goto after_19;
    // 0x0042A7D0: addu        $s4, $s3, $v0
    ctx->r20 = ADD32(ctx->r19, ctx->r2);
    after_19:
    // 0x0042A7D4: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x0042A7D8: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x0042A7DC: bne         $a1, $v0, L_0042A7EC
    if (ctx->r5 != ctx->r2) {
        // 0x0042A7E0: nop
    
            goto L_0042A7EC;
    }
    // 0x0042A7E0: nop

    // 0x0042A7E4: j           L_0042A904
    // 0x0042A7E8: sw          $zero, 0x8($s4)
    MEM_W(0X8, ctx->r20) = 0;
        goto L_0042A904;
    // 0x0042A7E8: sw          $zero, 0x8($s4)
    MEM_W(0X8, ctx->r20) = 0;
L_0042A7EC:
    // 0x0042A7EC: jal         0x00224F84
    // 0x0042A7F0: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    func_00224F84(rdram, ctx);
        goto after_20;
    // 0x0042A7F0: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    after_20:
    // 0x0042A7F4: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0042A7F8: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x0042A7FC: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x0042A800: addiu       $a2, $zero, 0x18
    ctx->r6 = ADD32(0, 0X18);
    // 0x0042A804: addu        $a3, $a0, $zero
    ctx->r7 = ADD32(ctx->r4, 0);
    // 0x0042A808: lui         $v0, 0x800A
    ctx->r2 = S32(0X800A << 16);
    // 0x0042A80C: addiu       $v0, $v0, 0x5D70
    ctx->r2 = ADD32(ctx->r2, 0X5D70);
    // 0x0042A810: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
    // 0x0042A814: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x0042A818: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x0042A81C: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x0042A820: jal         0x0020367C
    // 0x0042A824: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    func_0020367C(rdram, ctx);
        goto after_21;
    // 0x0042A824: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    after_21:
    // 0x0042A828: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x0042A82C: beq         $s1, $zero, L_0042A904
    if (ctx->r17 == 0) {
        // 0x0042A830: addu        $a1, $s0, $zero
        ctx->r5 = ADD32(ctx->r16, 0);
            goto L_0042A904;
    }
    // 0x0042A830: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x0042A834: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    // 0x0042A838: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x0042A83C: jal         0x0020185C
    // 0x0042A840: addiu       $a3, $sp, 0x30
    ctx->r7 = ADD32(ctx->r29, 0X30);
    func_0020185C(rdram, ctx);
        goto after_22;
    // 0x0042A840: addiu       $a3, $sp, 0x30
    ctx->r7 = ADD32(ctx->r29, 0X30);
    after_22:
    // 0x0042A844: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0042A848: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x0042A84C: addu        $a3, $a0, $zero
    ctx->r7 = ADD32(ctx->r4, 0);
    // 0x0042A850: lw          $a2, 0x30($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X30);
    // 0x0042A854: lui         $v0, 0x21
    ctx->r2 = S32(0X21 << 16);
    // 0x0042A858: addiu       $v0, $v0, -0x4B70
    ctx->r2 = ADD32(ctx->r2, -0X4B70);
    // 0x0042A85C: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x0042A860: lui         $v0, 0x800A
    ctx->r2 = S32(0X800A << 16);
    // 0x0042A864: addiu       $v0, $v0, 0x5D80
    ctx->r2 = ADD32(ctx->r2, 0X5D80);
    // 0x0042A868: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x0042A86C: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x0042A870: jal         0x0020367C
    // 0x0042A874: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    func_0020367C(rdram, ctx);
        goto after_23;
    // 0x0042A874: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    after_23:
    // 0x0042A878: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x0042A87C: beq         $s0, $zero, L_0042A8FC
    if (ctx->r16 == 0) {
        // 0x0042A880: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_0042A8FC;
    }
    // 0x0042A880: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0042A884: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x0042A888: jal         0x002017D4
    // 0x0042A88C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_002017D4(rdram, ctx);
        goto after_24;
    // 0x0042A88C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_24:
    // 0x0042A890: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x0042A894: jal         0x002017D4
    // 0x0042A898: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_002017D4(rdram, ctx);
        goto after_25;
    // 0x0042A898: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_25:
    // 0x0042A89C: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x0042A8A0: jal         0x002017D4
    // 0x0042A8A4: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_002017D4(rdram, ctx);
        goto after_26;
    // 0x0042A8A4: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_26:
    // 0x0042A8A8: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x0042A8AC: jal         0x002017D4
    // 0x0042A8B0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_002017D4(rdram, ctx);
        goto after_27;
    // 0x0042A8B0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_27:
    // 0x0042A8B4: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0042A8B8: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x0042A8BC: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x0042A8C0: lw          $t1, 0x4($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X4);
    // 0x0042A8C4: lw          $t2, 0x8($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X8);
    // 0x0042A8C8: lw          $t3, 0xC($v0)
    ctx->r11 = MEM_W(ctx->r2, 0XC);
    // 0x0042A8CC: sw          $t0, 0x0($s4)
    MEM_W(0X0, ctx->r20) = ctx->r8;
    // 0x0042A8D0: sw          $t1, 0x4($s4)
    MEM_W(0X4, ctx->r20) = ctx->r9;
    // 0x0042A8D4: sw          $t2, 0x8($s4)
    MEM_W(0X8, ctx->r20) = ctx->r10;
    // 0x0042A8D8: sw          $t3, 0xC($s4)
    MEM_W(0XC, ctx->r20) = ctx->r11;
    // 0x0042A8DC: lw          $t0, 0x10($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X10);
    // 0x0042A8E0: lw          $t1, 0x14($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X14);
    // 0x0042A8E4: lw          $t2, 0x18($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X18);
    // 0x0042A8E8: sw          $t0, 0x10($s4)
    MEM_W(0X10, ctx->r20) = ctx->r8;
    // 0x0042A8EC: sw          $t1, 0x14($s4)
    MEM_W(0X14, ctx->r20) = ctx->r9;
    // 0x0042A8F0: jal         0x002052D8
    // 0x0042A8F4: sw          $t2, 0x18($s4)
    MEM_W(0X18, ctx->r20) = ctx->r10;
    func_002052D8(rdram, ctx);
        goto after_28;
    // 0x0042A8F4: sw          $t2, 0x18($s4)
    MEM_W(0X18, ctx->r20) = ctx->r10;
    after_28:
    // 0x0042A8F8: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
L_0042A8FC:
    // 0x0042A8FC: jal         0x002052D8
    // 0x0042A900: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_002052D8(rdram, ctx);
        goto after_29;
    // 0x0042A900: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_29:
L_0042A904:
    // 0x0042A904: lui         $v0, 0x1
    ctx->r2 = S32(0X1 << 16);
    // 0x0042A908: ori         $v0, $v0, 0x905C
    ctx->r2 = ctx->r2 | 0X905C;
    // 0x0042A90C: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x0042A910: addiu       $a1, $zero, 0xDB0
    ctx->r5 = ADD32(0, 0XDB0);
    // 0x0042A914: jal         0x00224180
    // 0x0042A918: addu        $s4, $s3, $v0
    ctx->r20 = ADD32(ctx->r19, ctx->r2);
    func_00224180(rdram, ctx);
        goto after_30;
    // 0x0042A918: addu        $s4, $s3, $v0
    ctx->r20 = ADD32(ctx->r19, ctx->r2);
    after_30:
    // 0x0042A91C: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x0042A920: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x0042A924: bne         $a1, $v0, L_0042A934
    if (ctx->r5 != ctx->r2) {
        // 0x0042A928: nop
    
            goto L_0042A934;
    }
    // 0x0042A928: nop

    // 0x0042A92C: j           L_0042AA4C
    // 0x0042A930: sw          $zero, 0x8($s4)
    MEM_W(0X8, ctx->r20) = 0;
        goto L_0042AA4C;
    // 0x0042A930: sw          $zero, 0x8($s4)
    MEM_W(0X8, ctx->r20) = 0;
L_0042A934:
    // 0x0042A934: jal         0x00224F84
    // 0x0042A938: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    func_00224F84(rdram, ctx);
        goto after_31;
    // 0x0042A938: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    after_31:
    // 0x0042A93C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0042A940: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x0042A944: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x0042A948: addiu       $a2, $zero, 0x18
    ctx->r6 = ADD32(0, 0X18);
    // 0x0042A94C: addu        $a3, $a0, $zero
    ctx->r7 = ADD32(ctx->r4, 0);
    // 0x0042A950: lui         $v0, 0x800A
    ctx->r2 = S32(0X800A << 16);
    // 0x0042A954: addiu       $v0, $v0, 0x5D70
    ctx->r2 = ADD32(ctx->r2, 0X5D70);
    // 0x0042A958: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
    // 0x0042A95C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x0042A960: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x0042A964: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x0042A968: jal         0x0020367C
    // 0x0042A96C: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    func_0020367C(rdram, ctx);
        goto after_32;
    // 0x0042A96C: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    after_32:
    // 0x0042A970: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x0042A974: beq         $s1, $zero, L_0042AA4C
    if (ctx->r17 == 0) {
        // 0x0042A978: addu        $a1, $s0, $zero
        ctx->r5 = ADD32(ctx->r16, 0);
            goto L_0042AA4C;
    }
    // 0x0042A978: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x0042A97C: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    // 0x0042A980: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x0042A984: jal         0x0020185C
    // 0x0042A988: addiu       $a3, $sp, 0x34
    ctx->r7 = ADD32(ctx->r29, 0X34);
    func_0020185C(rdram, ctx);
        goto after_33;
    // 0x0042A988: addiu       $a3, $sp, 0x34
    ctx->r7 = ADD32(ctx->r29, 0X34);
    after_33:
    // 0x0042A98C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0042A990: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x0042A994: addu        $a3, $a0, $zero
    ctx->r7 = ADD32(ctx->r4, 0);
    // 0x0042A998: lw          $a2, 0x34($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X34);
    // 0x0042A99C: lui         $v0, 0x21
    ctx->r2 = S32(0X21 << 16);
    // 0x0042A9A0: addiu       $v0, $v0, -0x4B70
    ctx->r2 = ADD32(ctx->r2, -0X4B70);
    // 0x0042A9A4: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x0042A9A8: lui         $v0, 0x800A
    ctx->r2 = S32(0X800A << 16);
    // 0x0042A9AC: addiu       $v0, $v0, 0x5D80
    ctx->r2 = ADD32(ctx->r2, 0X5D80);
    // 0x0042A9B0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x0042A9B4: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x0042A9B8: jal         0x0020367C
    // 0x0042A9BC: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    func_0020367C(rdram, ctx);
        goto after_34;
    // 0x0042A9BC: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    after_34:
    // 0x0042A9C0: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x0042A9C4: beq         $s0, $zero, L_0042AA44
    if (ctx->r16 == 0) {
        // 0x0042A9C8: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_0042AA44;
    }
    // 0x0042A9C8: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0042A9CC: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x0042A9D0: jal         0x002017D4
    // 0x0042A9D4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_002017D4(rdram, ctx);
        goto after_35;
    // 0x0042A9D4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_35:
    // 0x0042A9D8: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x0042A9DC: jal         0x002017D4
    // 0x0042A9E0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_002017D4(rdram, ctx);
        goto after_36;
    // 0x0042A9E0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_36:
    // 0x0042A9E4: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x0042A9E8: jal         0x002017D4
    // 0x0042A9EC: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_002017D4(rdram, ctx);
        goto after_37;
    // 0x0042A9EC: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_37:
    // 0x0042A9F0: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x0042A9F4: jal         0x002017D4
    // 0x0042A9F8: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_002017D4(rdram, ctx);
        goto after_38;
    // 0x0042A9F8: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_38:
    // 0x0042A9FC: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0042AA00: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x0042AA04: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x0042AA08: lw          $t1, 0x4($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X4);
    // 0x0042AA0C: lw          $t2, 0x8($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X8);
    // 0x0042AA10: lw          $t3, 0xC($v0)
    ctx->r11 = MEM_W(ctx->r2, 0XC);
    // 0x0042AA14: sw          $t0, 0x0($s4)
    MEM_W(0X0, ctx->r20) = ctx->r8;
    // 0x0042AA18: sw          $t1, 0x4($s4)
    MEM_W(0X4, ctx->r20) = ctx->r9;
    // 0x0042AA1C: sw          $t2, 0x8($s4)
    MEM_W(0X8, ctx->r20) = ctx->r10;
    // 0x0042AA20: sw          $t3, 0xC($s4)
    MEM_W(0XC, ctx->r20) = ctx->r11;
    // 0x0042AA24: lw          $t0, 0x10($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X10);
    // 0x0042AA28: lw          $t1, 0x14($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X14);
    // 0x0042AA2C: lw          $t2, 0x18($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X18);
    // 0x0042AA30: sw          $t0, 0x10($s4)
    MEM_W(0X10, ctx->r20) = ctx->r8;
    // 0x0042AA34: sw          $t1, 0x14($s4)
    MEM_W(0X14, ctx->r20) = ctx->r9;
    // 0x0042AA38: jal         0x002052D8
    // 0x0042AA3C: sw          $t2, 0x18($s4)
    MEM_W(0X18, ctx->r20) = ctx->r10;
    func_002052D8(rdram, ctx);
        goto after_39;
    // 0x0042AA3C: sw          $t2, 0x18($s4)
    MEM_W(0X18, ctx->r20) = ctx->r10;
    after_39:
    // 0x0042AA40: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
L_0042AA44:
    // 0x0042AA44: jal         0x002052D8
    // 0x0042AA48: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_002052D8(rdram, ctx);
        goto after_40;
    // 0x0042AA48: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_40:
L_0042AA4C:
    // 0x0042AA4C: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x0042AA50: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x0042AA54: jal         0x0042AC0C
    // 0x0042AA58: addu        $a2, $a1, $zero
    ctx->r6 = ADD32(ctx->r5, 0);
    func_0042AC0C(rdram, ctx);
        goto after_41;
    // 0x0042AA58: addu        $a2, $a1, $zero
    ctx->r6 = ADD32(ctx->r5, 0);
    after_41:
    // 0x0042AA5C: lw          $ra, 0x50($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X50);
    // 0x0042AA60: lw          $s5, 0x4C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X4C);
    // 0x0042AA64: lw          $s4, 0x48($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X48);
    // 0x0042AA68: lw          $s3, 0x44($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X44);
    // 0x0042AA6C: lw          $s2, 0x40($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X40);
    // 0x0042AA70: lw          $s1, 0x3C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X3C);
    // 0x0042AA74: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x0042AA78: jr          $ra
    // 0x0042AA7C: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    return;
    // 0x0042AA7C: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void entry_0042A6DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0042A6DC: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x0042A6E0: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x0042A6E4: beq         $s1, $zero, L_0042A7BC
    if (ctx->r17 == 0) {
        // 0x0042A6E8: addu        $a1, $s0, $zero
        ctx->r5 = ADD32(ctx->r16, 0);
            goto L_0042A7BC;
    }
    // 0x0042A6E8: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x0042A6EC: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    // 0x0042A6F0: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x0042A6F4: jal         0x0020185C
    // 0x0042A6F8: addiu       $a3, $sp, 0x2C
    ctx->r7 = ADD32(ctx->r29, 0X2C);
    func_0020185C(rdram, ctx);
        goto after_0;
    // 0x0042A6F8: addiu       $a3, $sp, 0x2C
    ctx->r7 = ADD32(ctx->r29, 0X2C);
    after_0:
    // 0x0042A6FC: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0042A700: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x0042A704: addu        $a3, $a0, $zero
    ctx->r7 = ADD32(ctx->r4, 0);
    // 0x0042A708: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    // 0x0042A70C: lui         $v0, 0x21
    ctx->r2 = S32(0X21 << 16);
    // 0x0042A710: addiu       $v0, $v0, -0x4B70
    ctx->r2 = ADD32(ctx->r2, -0X4B70);
    // 0x0042A714: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x0042A718: lui         $v0, 0x800A
    ctx->r2 = S32(0X800A << 16);
    // 0x0042A71C: addiu       $v0, $v0, 0x5D80
    ctx->r2 = ADD32(ctx->r2, 0X5D80);
    // 0x0042A720: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x0042A724: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x0042A728: jal         0x0020367C
    // 0x0042A72C: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    func_0020367C(rdram, ctx);
        goto after_1;
    // 0x0042A72C: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    after_1:
    // 0x0042A730: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x0042A734: beq         $s0, $zero, L_0042A7B4
    if (ctx->r16 == 0) {
        // 0x0042A738: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_0042A7B4;
    }
    // 0x0042A738: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0042A73C: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x0042A740: jal         0x002017D4
    // 0x0042A744: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_002017D4(rdram, ctx);
        goto after_2;
    // 0x0042A744: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_2:
    // 0x0042A748: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x0042A74C: jal         0x002017D4
    // 0x0042A750: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_002017D4(rdram, ctx);
        goto after_3;
    // 0x0042A750: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_3:
    // 0x0042A754: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x0042A758: jal         0x002017D4
    // 0x0042A75C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_002017D4(rdram, ctx);
        goto after_4;
    // 0x0042A75C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_4:
    // 0x0042A760: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x0042A764: jal         0x002017D4
    // 0x0042A768: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_002017D4(rdram, ctx);
        goto after_5;
    // 0x0042A768: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_5:
    // 0x0042A76C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0042A770: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x0042A774: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x0042A778: lw          $t1, 0x4($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X4);
    // 0x0042A77C: lw          $t2, 0x8($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X8);
    // 0x0042A780: lw          $t3, 0xC($v0)
    ctx->r11 = MEM_W(ctx->r2, 0XC);
    // 0x0042A784: sw          $t0, 0x0($s4)
    MEM_W(0X0, ctx->r20) = ctx->r8;
    // 0x0042A788: sw          $t1, 0x4($s4)
    MEM_W(0X4, ctx->r20) = ctx->r9;
    // 0x0042A78C: sw          $t2, 0x8($s4)
    MEM_W(0X8, ctx->r20) = ctx->r10;
    // 0x0042A790: sw          $t3, 0xC($s4)
    MEM_W(0XC, ctx->r20) = ctx->r11;
    // 0x0042A794: lw          $t0, 0x10($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X10);
    // 0x0042A798: lw          $t1, 0x14($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X14);
    // 0x0042A79C: lw          $t2, 0x18($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X18);
    // 0x0042A7A0: sw          $t0, 0x10($s4)
    MEM_W(0X10, ctx->r20) = ctx->r8;
    // 0x0042A7A4: sw          $t1, 0x14($s4)
    MEM_W(0X14, ctx->r20) = ctx->r9;
    // 0x0042A7A8: jal         0x002052D8
    // 0x0042A7AC: sw          $t2, 0x18($s4)
    MEM_W(0X18, ctx->r20) = ctx->r10;
    func_002052D8(rdram, ctx);
        goto after_6;
    // 0x0042A7AC: sw          $t2, 0x18($s4)
    MEM_W(0X18, ctx->r20) = ctx->r10;
    after_6:
    // 0x0042A7B0: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
L_0042A7B4:
    // 0x0042A7B4: jal         0x002052D8
    // 0x0042A7B8: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_002052D8(rdram, ctx);
        goto after_7;
    // 0x0042A7B8: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_7:
L_0042A7BC:
    // 0x0042A7BC: lui         $v0, 0x1
    ctx->r2 = S32(0X1 << 16);
    // 0x0042A7C0: ori         $v0, $v0, 0x9040
    ctx->r2 = ctx->r2 | 0X9040;
    // 0x0042A7C4: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x0042A7C8: addiu       $a1, $zero, 0xDAF
    ctx->r5 = ADD32(0, 0XDAF);
    // 0x0042A7CC: jal         0x00224180
    // 0x0042A7D0: addu        $s4, $s3, $v0
    ctx->r20 = ADD32(ctx->r19, ctx->r2);
    func_00224180(rdram, ctx);
        goto after_8;
    // 0x0042A7D0: addu        $s4, $s3, $v0
    ctx->r20 = ADD32(ctx->r19, ctx->r2);
    after_8:
    // 0x0042A7D4: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x0042A7D8: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x0042A7DC: bne         $a1, $v0, L_0042A7EC
    if (ctx->r5 != ctx->r2) {
        // 0x0042A7E0: nop
    
            goto L_0042A7EC;
    }
    // 0x0042A7E0: nop

    // 0x0042A7E4: j           L_0042A904
    // 0x0042A7E8: sw          $zero, 0x8($s4)
    MEM_W(0X8, ctx->r20) = 0;
        goto L_0042A904;
    // 0x0042A7E8: sw          $zero, 0x8($s4)
    MEM_W(0X8, ctx->r20) = 0;
L_0042A7EC:
    // 0x0042A7EC: jal         0x00224F84
    // 0x0042A7F0: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    func_00224F84(rdram, ctx);
        goto after_9;
    // 0x0042A7F0: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    after_9:
    // 0x0042A7F4: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0042A7F8: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x0042A7FC: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x0042A800: addiu       $a2, $zero, 0x18
    ctx->r6 = ADD32(0, 0X18);
    // 0x0042A804: addu        $a3, $a0, $zero
    ctx->r7 = ADD32(ctx->r4, 0);
    // 0x0042A808: lui         $v0, 0x800A
    ctx->r2 = S32(0X800A << 16);
    // 0x0042A80C: addiu       $v0, $v0, 0x5D70
    ctx->r2 = ADD32(ctx->r2, 0X5D70);
    // 0x0042A810: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
    // 0x0042A814: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x0042A818: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x0042A81C: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x0042A820: jal         0x0020367C
    // 0x0042A824: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    func_0020367C(rdram, ctx);
        goto after_10;
    // 0x0042A824: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    after_10:
    // 0x0042A828: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x0042A82C: beq         $s1, $zero, L_0042A904
    if (ctx->r17 == 0) {
        // 0x0042A830: addu        $a1, $s0, $zero
        ctx->r5 = ADD32(ctx->r16, 0);
            goto L_0042A904;
    }
    // 0x0042A830: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x0042A834: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    // 0x0042A838: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x0042A83C: jal         0x0020185C
    // 0x0042A840: addiu       $a3, $sp, 0x30
    ctx->r7 = ADD32(ctx->r29, 0X30);
    func_0020185C(rdram, ctx);
        goto after_11;
    // 0x0042A840: addiu       $a3, $sp, 0x30
    ctx->r7 = ADD32(ctx->r29, 0X30);
    after_11:
    // 0x0042A844: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0042A848: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x0042A84C: addu        $a3, $a0, $zero
    ctx->r7 = ADD32(ctx->r4, 0);
    // 0x0042A850: lw          $a2, 0x30($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X30);
    // 0x0042A854: lui         $v0, 0x21
    ctx->r2 = S32(0X21 << 16);
    // 0x0042A858: addiu       $v0, $v0, -0x4B70
    ctx->r2 = ADD32(ctx->r2, -0X4B70);
    // 0x0042A85C: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x0042A860: lui         $v0, 0x800A
    ctx->r2 = S32(0X800A << 16);
    // 0x0042A864: addiu       $v0, $v0, 0x5D80
    ctx->r2 = ADD32(ctx->r2, 0X5D80);
    // 0x0042A868: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x0042A86C: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x0042A870: jal         0x0020367C
    // 0x0042A874: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    func_0020367C(rdram, ctx);
        goto after_12;
    // 0x0042A874: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    after_12:
    // 0x0042A878: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x0042A87C: beq         $s0, $zero, L_0042A8FC
    if (ctx->r16 == 0) {
        // 0x0042A880: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_0042A8FC;
    }
    // 0x0042A880: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0042A884: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x0042A888: jal         0x002017D4
    // 0x0042A88C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_002017D4(rdram, ctx);
        goto after_13;
    // 0x0042A88C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_13:
    // 0x0042A890: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x0042A894: jal         0x002017D4
    // 0x0042A898: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_002017D4(rdram, ctx);
        goto after_14;
    // 0x0042A898: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_14:
    // 0x0042A89C: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x0042A8A0: jal         0x002017D4
    // 0x0042A8A4: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_002017D4(rdram, ctx);
        goto after_15;
    // 0x0042A8A4: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_15:
    // 0x0042A8A8: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x0042A8AC: jal         0x002017D4
    // 0x0042A8B0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_002017D4(rdram, ctx);
        goto after_16;
    // 0x0042A8B0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_16:
    // 0x0042A8B4: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0042A8B8: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x0042A8BC: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x0042A8C0: lw          $t1, 0x4($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X4);
    // 0x0042A8C4: lw          $t2, 0x8($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X8);
    // 0x0042A8C8: lw          $t3, 0xC($v0)
    ctx->r11 = MEM_W(ctx->r2, 0XC);
    // 0x0042A8CC: sw          $t0, 0x0($s4)
    MEM_W(0X0, ctx->r20) = ctx->r8;
    // 0x0042A8D0: sw          $t1, 0x4($s4)
    MEM_W(0X4, ctx->r20) = ctx->r9;
    // 0x0042A8D4: sw          $t2, 0x8($s4)
    MEM_W(0X8, ctx->r20) = ctx->r10;
    // 0x0042A8D8: sw          $t3, 0xC($s4)
    MEM_W(0XC, ctx->r20) = ctx->r11;
    // 0x0042A8DC: lw          $t0, 0x10($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X10);
    // 0x0042A8E0: lw          $t1, 0x14($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X14);
    // 0x0042A8E4: lw          $t2, 0x18($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X18);
    // 0x0042A8E8: sw          $t0, 0x10($s4)
    MEM_W(0X10, ctx->r20) = ctx->r8;
    // 0x0042A8EC: sw          $t1, 0x14($s4)
    MEM_W(0X14, ctx->r20) = ctx->r9;
    // 0x0042A8F0: jal         0x002052D8
    // 0x0042A8F4: sw          $t2, 0x18($s4)
    MEM_W(0X18, ctx->r20) = ctx->r10;
    func_002052D8(rdram, ctx);
        goto after_17;
    // 0x0042A8F4: sw          $t2, 0x18($s4)
    MEM_W(0X18, ctx->r20) = ctx->r10;
    after_17:
    // 0x0042A8F8: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
L_0042A8FC:
    // 0x0042A8FC: jal         0x002052D8
    // 0x0042A900: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_002052D8(rdram, ctx);
        goto after_18;
    // 0x0042A900: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_18:
L_0042A904:
    // 0x0042A904: lui         $v0, 0x1
    ctx->r2 = S32(0X1 << 16);
    // 0x0042A908: ori         $v0, $v0, 0x905C
    ctx->r2 = ctx->r2 | 0X905C;
    // 0x0042A90C: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x0042A910: addiu       $a1, $zero, 0xDB0
    ctx->r5 = ADD32(0, 0XDB0);
    // 0x0042A914: jal         0x00224180
    // 0x0042A918: addu        $s4, $s3, $v0
    ctx->r20 = ADD32(ctx->r19, ctx->r2);
    func_00224180(rdram, ctx);
        goto after_19;
    // 0x0042A918: addu        $s4, $s3, $v0
    ctx->r20 = ADD32(ctx->r19, ctx->r2);
    after_19:
    // 0x0042A91C: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x0042A920: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x0042A924: bne         $a1, $v0, L_0042A934
    if (ctx->r5 != ctx->r2) {
        // 0x0042A928: nop
    
            goto L_0042A934;
    }
    // 0x0042A928: nop

    // 0x0042A92C: j           L_0042AA4C
    // 0x0042A930: sw          $zero, 0x8($s4)
    MEM_W(0X8, ctx->r20) = 0;
        goto L_0042AA4C;
    // 0x0042A930: sw          $zero, 0x8($s4)
    MEM_W(0X8, ctx->r20) = 0;
L_0042A934:
    // 0x0042A934: jal         0x00224F84
    // 0x0042A938: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    func_00224F84(rdram, ctx);
        goto after_20;
    // 0x0042A938: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    after_20:
    // 0x0042A93C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0042A940: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x0042A944: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x0042A948: addiu       $a2, $zero, 0x18
    ctx->r6 = ADD32(0, 0X18);
    // 0x0042A94C: addu        $a3, $a0, $zero
    ctx->r7 = ADD32(ctx->r4, 0);
    // 0x0042A950: lui         $v0, 0x800A
    ctx->r2 = S32(0X800A << 16);
    // 0x0042A954: addiu       $v0, $v0, 0x5D70
    ctx->r2 = ADD32(ctx->r2, 0X5D70);
    // 0x0042A958: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
    // 0x0042A95C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x0042A960: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x0042A964: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x0042A968: jal         0x0020367C
    // 0x0042A96C: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    func_0020367C(rdram, ctx);
        goto after_21;
    // 0x0042A96C: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    after_21:
    // 0x0042A970: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x0042A974: beq         $s1, $zero, L_0042AA4C
    if (ctx->r17 == 0) {
        // 0x0042A978: addu        $a1, $s0, $zero
        ctx->r5 = ADD32(ctx->r16, 0);
            goto L_0042AA4C;
    }
    // 0x0042A978: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x0042A97C: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    // 0x0042A980: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x0042A984: jal         0x0020185C
    // 0x0042A988: addiu       $a3, $sp, 0x34
    ctx->r7 = ADD32(ctx->r29, 0X34);
    func_0020185C(rdram, ctx);
        goto after_22;
    // 0x0042A988: addiu       $a3, $sp, 0x34
    ctx->r7 = ADD32(ctx->r29, 0X34);
    after_22:
    // 0x0042A98C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0042A990: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x0042A994: addu        $a3, $a0, $zero
    ctx->r7 = ADD32(ctx->r4, 0);
    // 0x0042A998: lw          $a2, 0x34($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X34);
    // 0x0042A99C: lui         $v0, 0x21
    ctx->r2 = S32(0X21 << 16);
    // 0x0042A9A0: addiu       $v0, $v0, -0x4B70
    ctx->r2 = ADD32(ctx->r2, -0X4B70);
    // 0x0042A9A4: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x0042A9A8: lui         $v0, 0x800A
    ctx->r2 = S32(0X800A << 16);
    // 0x0042A9AC: addiu       $v0, $v0, 0x5D80
    ctx->r2 = ADD32(ctx->r2, 0X5D80);
    // 0x0042A9B0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x0042A9B4: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x0042A9B8: jal         0x0020367C
    // 0x0042A9BC: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    func_0020367C(rdram, ctx);
        goto after_23;
    // 0x0042A9BC: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    after_23:
    // 0x0042A9C0: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x0042A9C4: beq         $s0, $zero, L_0042AA44
    if (ctx->r16 == 0) {
        // 0x0042A9C8: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_0042AA44;
    }
    // 0x0042A9C8: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0042A9CC: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x0042A9D0: jal         0x002017D4
    // 0x0042A9D4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_002017D4(rdram, ctx);
        goto after_24;
    // 0x0042A9D4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_24:
    // 0x0042A9D8: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x0042A9DC: jal         0x002017D4
    // 0x0042A9E0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_002017D4(rdram, ctx);
        goto after_25;
    // 0x0042A9E0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_25:
    // 0x0042A9E4: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x0042A9E8: jal         0x002017D4
    // 0x0042A9EC: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_002017D4(rdram, ctx);
        goto after_26;
    // 0x0042A9EC: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_26:
    // 0x0042A9F0: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x0042A9F4: jal         0x002017D4
    // 0x0042A9F8: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_002017D4(rdram, ctx);
        goto after_27;
    // 0x0042A9F8: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_27:
    // 0x0042A9FC: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0042AA00: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x0042AA04: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x0042AA08: lw          $t1, 0x4($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X4);
    // 0x0042AA0C: lw          $t2, 0x8($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X8);
    // 0x0042AA10: lw          $t3, 0xC($v0)
    ctx->r11 = MEM_W(ctx->r2, 0XC);
    // 0x0042AA14: sw          $t0, 0x0($s4)
    MEM_W(0X0, ctx->r20) = ctx->r8;
    // 0x0042AA18: sw          $t1, 0x4($s4)
    MEM_W(0X4, ctx->r20) = ctx->r9;
    // 0x0042AA1C: sw          $t2, 0x8($s4)
    MEM_W(0X8, ctx->r20) = ctx->r10;
    // 0x0042AA20: sw          $t3, 0xC($s4)
    MEM_W(0XC, ctx->r20) = ctx->r11;
    // 0x0042AA24: lw          $t0, 0x10($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X10);
    // 0x0042AA28: lw          $t1, 0x14($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X14);
    // 0x0042AA2C: lw          $t2, 0x18($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X18);
    // 0x0042AA30: sw          $t0, 0x10($s4)
    MEM_W(0X10, ctx->r20) = ctx->r8;
    // 0x0042AA34: sw          $t1, 0x14($s4)
    MEM_W(0X14, ctx->r20) = ctx->r9;
    // 0x0042AA38: jal         0x002052D8
    // 0x0042AA3C: sw          $t2, 0x18($s4)
    MEM_W(0X18, ctx->r20) = ctx->r10;
    func_002052D8(rdram, ctx);
        goto after_28;
    // 0x0042AA3C: sw          $t2, 0x18($s4)
    MEM_W(0X18, ctx->r20) = ctx->r10;
    after_28:
    // 0x0042AA40: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
L_0042AA44:
    // 0x0042AA44: jal         0x002052D8
    // 0x0042AA48: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_002052D8(rdram, ctx);
        goto after_29;
    // 0x0042AA48: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_29:
L_0042AA4C:
    // 0x0042AA4C: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x0042AA50: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x0042AA54: jal         0x0042AC0C
    // 0x0042AA58: addu        $a2, $a1, $zero
    ctx->r6 = ADD32(ctx->r5, 0);
    func_0042AC0C(rdram, ctx);
        goto after_30;
    // 0x0042AA58: addu        $a2, $a1, $zero
    ctx->r6 = ADD32(ctx->r5, 0);
    after_30:
    // 0x0042AA5C: lw          $ra, 0x50($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X50);
    // 0x0042AA60: lw          $s5, 0x4C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X4C);
    // 0x0042AA64: lw          $s4, 0x48($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X48);
    // 0x0042AA68: lw          $s3, 0x44($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X44);
    // 0x0042AA6C: lw          $s2, 0x40($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X40);
    // 0x0042AA70: lw          $s1, 0x3C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X3C);
    // 0x0042AA74: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x0042AA78: jr          $ra
    // 0x0042AA7C: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    return;
    // 0x0042AA7C: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void entry_0042A824(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0042A824: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x0042A828: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x0042A82C: beq         $s1, $zero, L_0042A904
    if (ctx->r17 == 0) {
        // 0x0042A830: addu        $a1, $s0, $zero
        ctx->r5 = ADD32(ctx->r16, 0);
            goto L_0042A904;
    }
    // 0x0042A830: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x0042A834: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    // 0x0042A838: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x0042A83C: jal         0x0020185C
    // 0x0042A840: addiu       $a3, $sp, 0x30
    ctx->r7 = ADD32(ctx->r29, 0X30);
    func_0020185C(rdram, ctx);
        goto after_0;
    // 0x0042A840: addiu       $a3, $sp, 0x30
    ctx->r7 = ADD32(ctx->r29, 0X30);
    after_0:
    // 0x0042A844: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0042A848: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x0042A84C: addu        $a3, $a0, $zero
    ctx->r7 = ADD32(ctx->r4, 0);
    // 0x0042A850: lw          $a2, 0x30($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X30);
    // 0x0042A854: lui         $v0, 0x21
    ctx->r2 = S32(0X21 << 16);
    // 0x0042A858: addiu       $v0, $v0, -0x4B70
    ctx->r2 = ADD32(ctx->r2, -0X4B70);
    // 0x0042A85C: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x0042A860: lui         $v0, 0x800A
    ctx->r2 = S32(0X800A << 16);
    // 0x0042A864: addiu       $v0, $v0, 0x5D80
    ctx->r2 = ADD32(ctx->r2, 0X5D80);
    // 0x0042A868: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x0042A86C: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x0042A870: jal         0x0020367C
    // 0x0042A874: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    func_0020367C(rdram, ctx);
        goto after_1;
    // 0x0042A874: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    after_1:
    // 0x0042A878: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x0042A87C: beq         $s0, $zero, L_0042A8FC
    if (ctx->r16 == 0) {
        // 0x0042A880: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_0042A8FC;
    }
    // 0x0042A880: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0042A884: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x0042A888: jal         0x002017D4
    // 0x0042A88C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_002017D4(rdram, ctx);
        goto after_2;
    // 0x0042A88C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_2:
    // 0x0042A890: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x0042A894: jal         0x002017D4
    // 0x0042A898: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_002017D4(rdram, ctx);
        goto after_3;
    // 0x0042A898: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_3:
    // 0x0042A89C: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x0042A8A0: jal         0x002017D4
    // 0x0042A8A4: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_002017D4(rdram, ctx);
        goto after_4;
    // 0x0042A8A4: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_4:
    // 0x0042A8A8: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x0042A8AC: jal         0x002017D4
    // 0x0042A8B0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_002017D4(rdram, ctx);
        goto after_5;
    // 0x0042A8B0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_5:
    // 0x0042A8B4: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0042A8B8: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x0042A8BC: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x0042A8C0: lw          $t1, 0x4($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X4);
    // 0x0042A8C4: lw          $t2, 0x8($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X8);
    // 0x0042A8C8: lw          $t3, 0xC($v0)
    ctx->r11 = MEM_W(ctx->r2, 0XC);
    // 0x0042A8CC: sw          $t0, 0x0($s4)
    MEM_W(0X0, ctx->r20) = ctx->r8;
    // 0x0042A8D0: sw          $t1, 0x4($s4)
    MEM_W(0X4, ctx->r20) = ctx->r9;
    // 0x0042A8D4: sw          $t2, 0x8($s4)
    MEM_W(0X8, ctx->r20) = ctx->r10;
    // 0x0042A8D8: sw          $t3, 0xC($s4)
    MEM_W(0XC, ctx->r20) = ctx->r11;
    // 0x0042A8DC: lw          $t0, 0x10($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X10);
    // 0x0042A8E0: lw          $t1, 0x14($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X14);
    // 0x0042A8E4: lw          $t2, 0x18($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X18);
    // 0x0042A8E8: sw          $t0, 0x10($s4)
    MEM_W(0X10, ctx->r20) = ctx->r8;
    // 0x0042A8EC: sw          $t1, 0x14($s4)
    MEM_W(0X14, ctx->r20) = ctx->r9;
    // 0x0042A8F0: jal         0x002052D8
    // 0x0042A8F4: sw          $t2, 0x18($s4)
    MEM_W(0X18, ctx->r20) = ctx->r10;
    func_002052D8(rdram, ctx);
        goto after_6;
    // 0x0042A8F4: sw          $t2, 0x18($s4)
    MEM_W(0X18, ctx->r20) = ctx->r10;
    after_6:
    // 0x0042A8F8: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
L_0042A8FC:
    // 0x0042A8FC: jal         0x002052D8
    // 0x0042A900: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_002052D8(rdram, ctx);
        goto after_7;
    // 0x0042A900: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_7:
L_0042A904:
    // 0x0042A904: lui         $v0, 0x1
    ctx->r2 = S32(0X1 << 16);
    // 0x0042A908: ori         $v0, $v0, 0x905C
    ctx->r2 = ctx->r2 | 0X905C;
    // 0x0042A90C: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x0042A910: addiu       $a1, $zero, 0xDB0
    ctx->r5 = ADD32(0, 0XDB0);
    // 0x0042A914: jal         0x00224180
    // 0x0042A918: addu        $s4, $s3, $v0
    ctx->r20 = ADD32(ctx->r19, ctx->r2);
    func_00224180(rdram, ctx);
        goto after_8;
    // 0x0042A918: addu        $s4, $s3, $v0
    ctx->r20 = ADD32(ctx->r19, ctx->r2);
    after_8:
    // 0x0042A91C: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x0042A920: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x0042A924: bne         $a1, $v0, L_0042A934
    if (ctx->r5 != ctx->r2) {
        // 0x0042A928: nop
    
            goto L_0042A934;
    }
    // 0x0042A928: nop

    // 0x0042A92C: j           L_0042AA4C
    // 0x0042A930: sw          $zero, 0x8($s4)
    MEM_W(0X8, ctx->r20) = 0;
        goto L_0042AA4C;
    // 0x0042A930: sw          $zero, 0x8($s4)
    MEM_W(0X8, ctx->r20) = 0;
L_0042A934:
    // 0x0042A934: jal         0x00224F84
    // 0x0042A938: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    func_00224F84(rdram, ctx);
        goto after_9;
    // 0x0042A938: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    after_9:
    // 0x0042A93C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0042A940: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x0042A944: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x0042A948: addiu       $a2, $zero, 0x18
    ctx->r6 = ADD32(0, 0X18);
    // 0x0042A94C: addu        $a3, $a0, $zero
    ctx->r7 = ADD32(ctx->r4, 0);
    // 0x0042A950: lui         $v0, 0x800A
    ctx->r2 = S32(0X800A << 16);
    // 0x0042A954: addiu       $v0, $v0, 0x5D70
    ctx->r2 = ADD32(ctx->r2, 0X5D70);
    // 0x0042A958: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
    // 0x0042A95C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x0042A960: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x0042A964: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x0042A968: jal         0x0020367C
    // 0x0042A96C: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    func_0020367C(rdram, ctx);
        goto after_10;
    // 0x0042A96C: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    after_10:
    // 0x0042A970: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x0042A974: beq         $s1, $zero, L_0042AA4C
    if (ctx->r17 == 0) {
        // 0x0042A978: addu        $a1, $s0, $zero
        ctx->r5 = ADD32(ctx->r16, 0);
            goto L_0042AA4C;
    }
    // 0x0042A978: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x0042A97C: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    // 0x0042A980: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x0042A984: jal         0x0020185C
    // 0x0042A988: addiu       $a3, $sp, 0x34
    ctx->r7 = ADD32(ctx->r29, 0X34);
    func_0020185C(rdram, ctx);
        goto after_11;
    // 0x0042A988: addiu       $a3, $sp, 0x34
    ctx->r7 = ADD32(ctx->r29, 0X34);
    after_11:
    // 0x0042A98C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0042A990: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x0042A994: addu        $a3, $a0, $zero
    ctx->r7 = ADD32(ctx->r4, 0);
    // 0x0042A998: lw          $a2, 0x34($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X34);
    // 0x0042A99C: lui         $v0, 0x21
    ctx->r2 = S32(0X21 << 16);
    // 0x0042A9A0: addiu       $v0, $v0, -0x4B70
    ctx->r2 = ADD32(ctx->r2, -0X4B70);
    // 0x0042A9A4: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x0042A9A8: lui         $v0, 0x800A
    ctx->r2 = S32(0X800A << 16);
    // 0x0042A9AC: addiu       $v0, $v0, 0x5D80
    ctx->r2 = ADD32(ctx->r2, 0X5D80);
    // 0x0042A9B0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x0042A9B4: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x0042A9B8: jal         0x0020367C
    // 0x0042A9BC: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    func_0020367C(rdram, ctx);
        goto after_12;
    // 0x0042A9BC: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    after_12:
    // 0x0042A9C0: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x0042A9C4: beq         $s0, $zero, L_0042AA44
    if (ctx->r16 == 0) {
        // 0x0042A9C8: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_0042AA44;
    }
    // 0x0042A9C8: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0042A9CC: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x0042A9D0: jal         0x002017D4
    // 0x0042A9D4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_002017D4(rdram, ctx);
        goto after_13;
    // 0x0042A9D4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_13:
    // 0x0042A9D8: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x0042A9DC: jal         0x002017D4
    // 0x0042A9E0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_002017D4(rdram, ctx);
        goto after_14;
    // 0x0042A9E0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_14:
    // 0x0042A9E4: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x0042A9E8: jal         0x002017D4
    // 0x0042A9EC: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_002017D4(rdram, ctx);
        goto after_15;
    // 0x0042A9EC: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_15:
    // 0x0042A9F0: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x0042A9F4: jal         0x002017D4
    // 0x0042A9F8: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_002017D4(rdram, ctx);
        goto after_16;
    // 0x0042A9F8: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_16:
    // 0x0042A9FC: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0042AA00: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x0042AA04: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x0042AA08: lw          $t1, 0x4($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X4);
    // 0x0042AA0C: lw          $t2, 0x8($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X8);
    // 0x0042AA10: lw          $t3, 0xC($v0)
    ctx->r11 = MEM_W(ctx->r2, 0XC);
    // 0x0042AA14: sw          $t0, 0x0($s4)
    MEM_W(0X0, ctx->r20) = ctx->r8;
    // 0x0042AA18: sw          $t1, 0x4($s4)
    MEM_W(0X4, ctx->r20) = ctx->r9;
    // 0x0042AA1C: sw          $t2, 0x8($s4)
    MEM_W(0X8, ctx->r20) = ctx->r10;
    // 0x0042AA20: sw          $t3, 0xC($s4)
    MEM_W(0XC, ctx->r20) = ctx->r11;
    // 0x0042AA24: lw          $t0, 0x10($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X10);
    // 0x0042AA28: lw          $t1, 0x14($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X14);
    // 0x0042AA2C: lw          $t2, 0x18($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X18);
    // 0x0042AA30: sw          $t0, 0x10($s4)
    MEM_W(0X10, ctx->r20) = ctx->r8;
    // 0x0042AA34: sw          $t1, 0x14($s4)
    MEM_W(0X14, ctx->r20) = ctx->r9;
    // 0x0042AA38: jal         0x002052D8
    // 0x0042AA3C: sw          $t2, 0x18($s4)
    MEM_W(0X18, ctx->r20) = ctx->r10;
    func_002052D8(rdram, ctx);
        goto after_17;
    // 0x0042AA3C: sw          $t2, 0x18($s4)
    MEM_W(0X18, ctx->r20) = ctx->r10;
    after_17:
    // 0x0042AA40: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
L_0042AA44:
    // 0x0042AA44: jal         0x002052D8
    // 0x0042AA48: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_002052D8(rdram, ctx);
        goto after_18;
    // 0x0042AA48: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_18:
L_0042AA4C:
    // 0x0042AA4C: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x0042AA50: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x0042AA54: jal         0x0042AC0C
    // 0x0042AA58: addu        $a2, $a1, $zero
    ctx->r6 = ADD32(ctx->r5, 0);
    func_0042AC0C(rdram, ctx);
        goto after_19;
    // 0x0042AA58: addu        $a2, $a1, $zero
    ctx->r6 = ADD32(ctx->r5, 0);
    after_19:
    // 0x0042AA5C: lw          $ra, 0x50($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X50);
    // 0x0042AA60: lw          $s5, 0x4C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X4C);
    // 0x0042AA64: lw          $s4, 0x48($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X48);
    // 0x0042AA68: lw          $s3, 0x44($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X44);
    // 0x0042AA6C: lw          $s2, 0x40($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X40);
    // 0x0042AA70: lw          $s1, 0x3C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X3C);
    // 0x0042AA74: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x0042AA78: jr          $ra
    // 0x0042AA7C: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    return;
    // 0x0042AA7C: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void entry_0042A96C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0042A96C: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x0042A970: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x0042A974: beq         $s1, $zero, L_0042AA4C
    if (ctx->r17 == 0) {
        // 0x0042A978: addu        $a1, $s0, $zero
        ctx->r5 = ADD32(ctx->r16, 0);
            goto L_0042AA4C;
    }
    // 0x0042A978: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x0042A97C: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    // 0x0042A980: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x0042A984: jal         0x0020185C
    // 0x0042A988: addiu       $a3, $sp, 0x34
    ctx->r7 = ADD32(ctx->r29, 0X34);
    func_0020185C(rdram, ctx);
        goto after_0;
    // 0x0042A988: addiu       $a3, $sp, 0x34
    ctx->r7 = ADD32(ctx->r29, 0X34);
    after_0:
    // 0x0042A98C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0042A990: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x0042A994: addu        $a3, $a0, $zero
    ctx->r7 = ADD32(ctx->r4, 0);
    // 0x0042A998: lw          $a2, 0x34($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X34);
    // 0x0042A99C: lui         $v0, 0x21
    ctx->r2 = S32(0X21 << 16);
    // 0x0042A9A0: addiu       $v0, $v0, -0x4B70
    ctx->r2 = ADD32(ctx->r2, -0X4B70);
    // 0x0042A9A4: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x0042A9A8: lui         $v0, 0x800A
    ctx->r2 = S32(0X800A << 16);
    // 0x0042A9AC: addiu       $v0, $v0, 0x5D80
    ctx->r2 = ADD32(ctx->r2, 0X5D80);
    // 0x0042A9B0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x0042A9B4: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x0042A9B8: jal         0x0020367C
    // 0x0042A9BC: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    func_0020367C(rdram, ctx);
        goto after_1;
    // 0x0042A9BC: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    after_1:
    // 0x0042A9C0: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x0042A9C4: beq         $s0, $zero, L_0042AA44
    if (ctx->r16 == 0) {
        // 0x0042A9C8: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_0042AA44;
    }
    // 0x0042A9C8: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0042A9CC: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x0042A9D0: jal         0x002017D4
    // 0x0042A9D4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_002017D4(rdram, ctx);
        goto after_2;
    // 0x0042A9D4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_2:
    // 0x0042A9D8: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x0042A9DC: jal         0x002017D4
    // 0x0042A9E0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_002017D4(rdram, ctx);
        goto after_3;
    // 0x0042A9E0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_3:
    // 0x0042A9E4: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x0042A9E8: jal         0x002017D4
    // 0x0042A9EC: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_002017D4(rdram, ctx);
        goto after_4;
    // 0x0042A9EC: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_4:
    // 0x0042A9F0: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x0042A9F4: jal         0x002017D4
    // 0x0042A9F8: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_002017D4(rdram, ctx);
        goto after_5;
    // 0x0042A9F8: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_5:
    // 0x0042A9FC: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0042AA00: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x0042AA04: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x0042AA08: lw          $t1, 0x4($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X4);
    // 0x0042AA0C: lw          $t2, 0x8($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X8);
    // 0x0042AA10: lw          $t3, 0xC($v0)
    ctx->r11 = MEM_W(ctx->r2, 0XC);
    // 0x0042AA14: sw          $t0, 0x0($s4)
    MEM_W(0X0, ctx->r20) = ctx->r8;
    // 0x0042AA18: sw          $t1, 0x4($s4)
    MEM_W(0X4, ctx->r20) = ctx->r9;
    // 0x0042AA1C: sw          $t2, 0x8($s4)
    MEM_W(0X8, ctx->r20) = ctx->r10;
    // 0x0042AA20: sw          $t3, 0xC($s4)
    MEM_W(0XC, ctx->r20) = ctx->r11;
    // 0x0042AA24: lw          $t0, 0x10($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X10);
    // 0x0042AA28: lw          $t1, 0x14($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X14);
    // 0x0042AA2C: lw          $t2, 0x18($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X18);
    // 0x0042AA30: sw          $t0, 0x10($s4)
    MEM_W(0X10, ctx->r20) = ctx->r8;
    // 0x0042AA34: sw          $t1, 0x14($s4)
    MEM_W(0X14, ctx->r20) = ctx->r9;
    // 0x0042AA38: jal         0x002052D8
    // 0x0042AA3C: sw          $t2, 0x18($s4)
    MEM_W(0X18, ctx->r20) = ctx->r10;
    func_002052D8(rdram, ctx);
        goto after_6;
    // 0x0042AA3C: sw          $t2, 0x18($s4)
    MEM_W(0X18, ctx->r20) = ctx->r10;
    after_6:
    // 0x0042AA40: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
L_0042AA44:
    // 0x0042AA44: jal         0x002052D8
    // 0x0042AA48: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_002052D8(rdram, ctx);
        goto after_7;
    // 0x0042AA48: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_7:
L_0042AA4C:
    // 0x0042AA4C: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x0042AA50: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x0042AA54: jal         0x0042AC0C
    // 0x0042AA58: addu        $a2, $a1, $zero
    ctx->r6 = ADD32(ctx->r5, 0);
    func_0042AC0C(rdram, ctx);
        goto after_8;
    // 0x0042AA58: addu        $a2, $a1, $zero
    ctx->r6 = ADD32(ctx->r5, 0);
    after_8:
    // 0x0042AA5C: lw          $ra, 0x50($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X50);
    // 0x0042AA60: lw          $s5, 0x4C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X4C);
    // 0x0042AA64: lw          $s4, 0x48($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X48);
    // 0x0042AA68: lw          $s3, 0x44($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X44);
    // 0x0042AA6C: lw          $s2, 0x40($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X40);
    // 0x0042AA70: lw          $s1, 0x3C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X3C);
    // 0x0042AA74: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x0042AA78: jr          $ra
    // 0x0042AA7C: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    return;
    // 0x0042AA7C: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void entry_0042A9A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0042A9A0: addiu       $v0, $v0, -0x4B70
    ctx->r2 = ADD32(ctx->r2, -0X4B70);
    // 0x0042A9A4: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x0042A9A8: lui         $v0, 0x800A
    ctx->r2 = S32(0X800A << 16);
    // 0x0042A9AC: addiu       $v0, $v0, 0x5D80
    ctx->r2 = ADD32(ctx->r2, 0X5D80);
    // 0x0042A9B0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x0042A9B4: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x0042A9B8: jal         0x0020367C
    // 0x0042A9BC: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    func_0020367C(rdram, ctx);
        goto after_0;
    // 0x0042A9BC: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    after_0:
    // 0x0042A9C0: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x0042A9C4: beq         $s0, $zero, L_0042AA44
    if (ctx->r16 == 0) {
        // 0x0042A9C8: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_0042AA44;
    }
    // 0x0042A9C8: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0042A9CC: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x0042A9D0: jal         0x002017D4
    // 0x0042A9D4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_002017D4(rdram, ctx);
        goto after_1;
    // 0x0042A9D4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_1:
    // 0x0042A9D8: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x0042A9DC: jal         0x002017D4
    // 0x0042A9E0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_002017D4(rdram, ctx);
        goto after_2;
    // 0x0042A9E0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_2:
    // 0x0042A9E4: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x0042A9E8: jal         0x002017D4
    // 0x0042A9EC: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_002017D4(rdram, ctx);
        goto after_3;
    // 0x0042A9EC: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_3:
    // 0x0042A9F0: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x0042A9F4: jal         0x002017D4
    // 0x0042A9F8: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_002017D4(rdram, ctx);
        goto after_4;
    // 0x0042A9F8: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_4:
    // 0x0042A9FC: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0042AA00: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x0042AA04: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x0042AA08: lw          $t1, 0x4($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X4);
    // 0x0042AA0C: lw          $t2, 0x8($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X8);
    // 0x0042AA10: lw          $t3, 0xC($v0)
    ctx->r11 = MEM_W(ctx->r2, 0XC);
    // 0x0042AA14: sw          $t0, 0x0($s4)
    MEM_W(0X0, ctx->r20) = ctx->r8;
    // 0x0042AA18: sw          $t1, 0x4($s4)
    MEM_W(0X4, ctx->r20) = ctx->r9;
    // 0x0042AA1C: sw          $t2, 0x8($s4)
    MEM_W(0X8, ctx->r20) = ctx->r10;
    // 0x0042AA20: sw          $t3, 0xC($s4)
    MEM_W(0XC, ctx->r20) = ctx->r11;
    // 0x0042AA24: lw          $t0, 0x10($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X10);
    // 0x0042AA28: lw          $t1, 0x14($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X14);
    // 0x0042AA2C: lw          $t2, 0x18($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X18);
    // 0x0042AA30: sw          $t0, 0x10($s4)
    MEM_W(0X10, ctx->r20) = ctx->r8;
    // 0x0042AA34: sw          $t1, 0x14($s4)
    MEM_W(0X14, ctx->r20) = ctx->r9;
    // 0x0042AA38: jal         0x002052D8
    // 0x0042AA3C: sw          $t2, 0x18($s4)
    MEM_W(0X18, ctx->r20) = ctx->r10;
    func_002052D8(rdram, ctx);
        goto after_5;
    // 0x0042AA3C: sw          $t2, 0x18($s4)
    MEM_W(0X18, ctx->r20) = ctx->r10;
    after_5:
    // 0x0042AA40: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
L_0042AA44:
    // 0x0042AA44: jal         0x002052D8
    // 0x0042AA48: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_002052D8(rdram, ctx);
        goto after_6;
    // 0x0042AA48: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_6:
    // 0x0042AA4C: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x0042AA50: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x0042AA54: jal         0x0042AC0C
    // 0x0042AA58: addu        $a2, $a1, $zero
    ctx->r6 = ADD32(ctx->r5, 0);
    func_0042AC0C(rdram, ctx);
        goto after_7;
    // 0x0042AA58: addu        $a2, $a1, $zero
    ctx->r6 = ADD32(ctx->r5, 0);
    after_7:
    // 0x0042AA5C: lw          $ra, 0x50($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X50);
    // 0x0042AA60: lw          $s5, 0x4C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X4C);
    // 0x0042AA64: lw          $s4, 0x48($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X48);
    // 0x0042AA68: lw          $s3, 0x44($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X44);
    // 0x0042AA6C: lw          $s2, 0x40($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X40);
    // 0x0042AA70: lw          $s1, 0x3C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X3C);
    // 0x0042AA74: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x0042AA78: jr          $ra
    // 0x0042AA7C: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    return;
    // 0x0042AA7C: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void entry_0042AC10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0042AC10: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x0042AC14: addu        $s3, $a0, $zero
    ctx->r19 = ADD32(ctx->r4, 0);
    // 0x0042AC18: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x0042AC1C: addu        $s2, $a1, $zero
    ctx->r18 = ADD32(ctx->r5, 0);
    // 0x0042AC20: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x0042AC24: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x0042AC28: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x0042AC2C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x0042AC30: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x0042AC34: addu        $at, $s3, $at
    ctx->r1 = ADD32(ctx->r19, ctx->r1);
    // 0x0042AC38: lw          $v1, -0x7058($at)
    ctx->r3 = MEM_W(ctx->r1, -0X7058);
    // 0x0042AC3C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x0042AC40: beq         $v1, $v0, L_0042AC50
    if (ctx->r3 == ctx->r2) {
        // 0x0042AC44: addu        $s1, $a2, $zero
        ctx->r17 = ADD32(ctx->r6, 0);
            goto L_0042AC50;
    }
    // 0x0042AC44: addu        $s1, $a2, $zero
    ctx->r17 = ADD32(ctx->r6, 0);
    // 0x0042AC48: jal         0x0042C96C
    // 0x0042AC4C: nop

    func_0042C96C(rdram, ctx);
        goto after_0;
    // 0x0042AC4C: nop

    after_0:
L_0042AC50:
    // 0x0042AC50: jal         0x00284174
    // 0x0042AC54: nop

    func_00284174(rdram, ctx);
        goto after_1;
    // 0x0042AC54: nop

    after_1:
    // 0x0042AC58: bne         $v0, $zero, L_0042ACF8
    if (ctx->r2 != 0) {
        // 0x0042AC5C: nop
    
            goto L_0042ACF8;
    }
    // 0x0042AC5C: nop

    // 0x0042AC60: jal         0x0027BC34
    // 0x0042AC64: nop

    func_0027BC34(rdram, ctx);
        goto after_2;
    // 0x0042AC64: nop

    after_2:
    // 0x0042AC68: bne         $v0, $zero, L_0042ACF8
    if (ctx->r2 != 0) {
        // 0x0042AC6C: nop
    
            goto L_0042ACF8;
    }
    // 0x0042AC6C: nop

    // 0x0042AC70: beq         $s1, $zero, L_0042ACF8
    if (ctx->r17 == 0) {
        // 0x0042AC74: nop
    
            goto L_0042ACF8;
    }
    // 0x0042AC74: nop

    // 0x0042AC78: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x0042AC7C: addu        $at, $s3, $at
    ctx->r1 = ADD32(ctx->r19, ctx->r1);
    // 0x0042AC80: lw          $v0, -0x7048($at)
    ctx->r2 = MEM_W(ctx->r1, -0X7048);
    // 0x0042AC84: beq         $v0, $zero, L_0042ACF8
    if (ctx->r2 == 0) {
        // 0x0042AC88: addiu       $v0, $zero, 0xFA0
        ctx->r2 = ADD32(0, 0XFA0);
            goto L_0042ACF8;
    }
    // 0x0042AC88: addiu       $v0, $zero, 0xFA0
    ctx->r2 = ADD32(0, 0XFA0);
    // 0x0042AC8C: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x0042AC90: addu        $at, $s3, $at
    ctx->r1 = ADD32(ctx->r19, ctx->r1);
    // 0x0042AC94: lw          $v1, -0x7030($at)
    ctx->r3 = MEM_W(ctx->r1, -0X7030);
    // 0x0042AC98: beq         $v1, $v0, L_0042ACE4
    if (ctx->r3 == ctx->r2) {
        // 0x0042AC9C: slti        $v0, $v1, 0xFA1
        ctx->r2 = SIGNED(ctx->r3) < 0XFA1 ? 1 : 0;
            goto L_0042ACE4;
    }
    // 0x0042AC9C: slti        $v0, $v1, 0xFA1
    ctx->r2 = SIGNED(ctx->r3) < 0XFA1 ? 1 : 0;
    // 0x0042ACA0: beq         $v0, $zero, L_0042ACC0
    if (ctx->r2 == 0) {
        // 0x0042ACA4: addiu       $v0, $zero, 0x7D0
        ctx->r2 = ADD32(0, 0X7D0);
            goto L_0042ACC0;
    }
    // 0x0042ACA4: addiu       $v0, $zero, 0x7D0
    ctx->r2 = ADD32(0, 0X7D0);
    // 0x0042ACA8: beq         $v1, $v0, L_0042ACDC
    if (ctx->r3 == ctx->r2) {
        // 0x0042ACAC: addiu       $v0, $zero, 0xBB8
        ctx->r2 = ADD32(0, 0XBB8);
            goto L_0042ACDC;
    }
    // 0x0042ACAC: addiu       $v0, $zero, 0xBB8
    ctx->r2 = ADD32(0, 0XBB8);
    // 0x0042ACB0: beql        $v1, $v0, L_0042ACF0
    if (ctx->r3 == ctx->r2) {
        // 0x0042ACB4: addiu       $a0, $zero, 0x8F
        ctx->r4 = ADD32(0, 0X8F);
            goto L_0042ACF0;
    }
    goto skip_0;
    // 0x0042ACB4: addiu       $a0, $zero, 0x8F
    ctx->r4 = ADD32(0, 0X8F);
    skip_0:
    // 0x0042ACB8: j           L_0042ACF8
    // 0x0042ACBC: nop

        goto L_0042ACF8;
    // 0x0042ACBC: nop

L_0042ACC0:
    // 0x0042ACC0: addiu       $v0, $zero, 0x1388
    ctx->r2 = ADD32(0, 0X1388);
    // 0x0042ACC4: beq         $v1, $v0, L_0042ACEC
    if (ctx->r3 == ctx->r2) {
        // 0x0042ACC8: addiu       $v0, $zero, 0x1770
        ctx->r2 = ADD32(0, 0X1770);
            goto L_0042ACEC;
    }
    // 0x0042ACC8: addiu       $v0, $zero, 0x1770
    ctx->r2 = ADD32(0, 0X1770);
    // 0x0042ACCC: beql        $v1, $v0, L_0042ACF0
    if (ctx->r3 == ctx->r2) {
        // 0x0042ACD0: addiu       $a0, $zero, 0x92
        ctx->r4 = ADD32(0, 0X92);
            goto L_0042ACF0;
    }
    goto skip_1;
    // 0x0042ACD0: addiu       $a0, $zero, 0x92
    ctx->r4 = ADD32(0, 0X92);
    skip_1:
    // 0x0042ACD4: j           L_0042ACF8
    // 0x0042ACD8: nop

        goto L_0042ACF8;
    // 0x0042ACD8: nop

L_0042ACDC:
    // 0x0042ACDC: j           L_0042ACF0
    // 0x0042ACE0: addiu       $a0, $zero, 0x8E
    ctx->r4 = ADD32(0, 0X8E);
        goto L_0042ACF0;
    // 0x0042ACE0: addiu       $a0, $zero, 0x8E
    ctx->r4 = ADD32(0, 0X8E);
L_0042ACE4:
    // 0x0042ACE4: j           L_0042ACF0
    // 0x0042ACE8: addiu       $a0, $zero, 0x90
    ctx->r4 = ADD32(0, 0X90);
        goto L_0042ACF0;
    // 0x0042ACE8: addiu       $a0, $zero, 0x90
    ctx->r4 = ADD32(0, 0X90);
L_0042ACEC:
    // 0x0042ACEC: addiu       $a0, $zero, 0x91
    ctx->r4 = ADD32(0, 0X91);
L_0042ACF0:
    // 0x0042ACF0: jal         0x00412B28
    // 0x0042ACF4: nop

    func_00412B28(rdram, ctx);
        goto after_3;
    // 0x0042ACF4: nop

    after_3:
L_0042ACF8:
    // 0x0042ACF8: jal         0x00226724
    // 0x0042ACFC: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    func_00226724(rdram, ctx);
        goto after_4;
    // 0x0042ACFC: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    after_4:
    // 0x0042AD00: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x0042AD04: addiu       $a0, $a0, 0x6D68
    ctx->r4 = ADD32(ctx->r4, 0X6D68);
    // 0x0042AD08: jal         0x00201C08
    // 0x0042AD0C: sw          $zero, 0x0($s3)
    MEM_W(0X0, ctx->r19) = 0;
    func_00201C08(rdram, ctx);
        goto after_5;
    // 0x0042AD0C: sw          $zero, 0x0($s3)
    MEM_W(0X0, ctx->r19) = 0;
    after_5:
    // 0x0042AD10: jal         0x002053A8
    // 0x0042AD14: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_002053A8(rdram, ctx);
        goto after_6;
    // 0x0042AD14: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_6:
    // 0x0042AD18: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x0042AD1C: addu        $at, $s3, $at
    ctx->r1 = ADD32(ctx->r19, ctx->r1);
    // 0x0042AD20: lw          $v1, -0x7058($at)
    ctx->r3 = MEM_W(ctx->r1, -0X7058);
    // 0x0042AD24: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x0042AD28: beq         $v1, $v0, L_0042ADE8
    if (ctx->r3 == ctx->r2) {
        // 0x0042AD2C: nop
    
            goto L_0042ADE8;
    }
    // 0x0042AD2C: nop

    // 0x0042AD30: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x0042AD34: addiu       $a0, $a0, -0x6790
    ctx->r4 = ADD32(ctx->r4, -0X6790);
    // 0x0042AD38: jal         0x002532A8
    // 0x0042AD3C: nop

    func_002532A8(rdram, ctx);
        goto after_7;
    // 0x0042AD3C: nop

    after_7:
    // 0x0042AD40: beq         $v0, $zero, L_0042AD50
    if (ctx->r2 == 0) {
        // 0x0042AD44: nop
    
            goto L_0042AD50;
    }
    // 0x0042AD44: nop

    // 0x0042AD48: jal         0x0042EB04
    // 0x0042AD4C: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    func_0042EB04(rdram, ctx);
        goto after_8;
    // 0x0042AD4C: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    after_8:
L_0042AD50:
    // 0x0042AD50: jal         0x00275F7C
    // 0x0042AD54: nop

    func_00275F7C(rdram, ctx);
        goto after_9;
    // 0x0042AD54: nop

    after_9:
    // 0x0042AD58: jal         0x00275EFC
    // 0x0042AD5C: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    func_00275EFC(rdram, ctx);
        goto after_10;
    // 0x0042AD5C: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    after_10:
    // 0x0042AD60: jal         0x00275B58
    // 0x0042AD64: nop

    func_00275B58(rdram, ctx);
        goto after_11;
    // 0x0042AD64: nop

    after_11:
    // 0x0042AD68: jal         0x002758DC
    // 0x0042AD6C: addiu       $a0, $zero, 0x1000
    ctx->r4 = ADD32(0, 0X1000);
    func_002758DC(rdram, ctx);
        goto after_12;
    // 0x0042AD6C: addiu       $a0, $zero, 0x1000
    ctx->r4 = ADD32(0, 0X1000);
    after_12:
    // 0x0042AD70: lw          $a1, 0x98($s3)
    ctx->r5 = MEM_W(ctx->r19, 0X98);
    // 0x0042AD74: jal         0x002052D8
    // 0x0042AD78: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_002052D8(rdram, ctx);
        goto after_13;
    // 0x0042AD78: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_13:
    // 0x0042AD7C: lw          $a1, 0x9C($s3)
    ctx->r5 = MEM_W(ctx->r19, 0X9C);
    // 0x0042AD80: jal         0x002052D8
    // 0x0042AD84: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_002052D8(rdram, ctx);
        goto after_14;
    // 0x0042AD84: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_14:
    // 0x0042AD88: lw          $a1, 0xA0($s3)
    ctx->r5 = MEM_W(ctx->r19, 0XA0);
    // 0x0042AD8C: jal         0x002052D8
    // 0x0042AD90: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_002052D8(rdram, ctx);
        goto after_15;
    // 0x0042AD90: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_15:
    // 0x0042AD94: lw          $a1, 0xA4($s3)
    ctx->r5 = MEM_W(ctx->r19, 0XA4);
    // 0x0042AD98: jal         0x002052D8
    // 0x0042AD9C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_002052D8(rdram, ctx);
        goto after_16;
    // 0x0042AD9C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_16:
    // 0x0042ADA0: lw          $a1, 0xA8($s3)
    ctx->r5 = MEM_W(ctx->r19, 0XA8);
    // 0x0042ADA4: jal         0x002052D8
    // 0x0042ADA8: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_002052D8(rdram, ctx);
        goto after_17;
    // 0x0042ADA8: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_17:
    // 0x0042ADAC: lw          $a1, 0xB0($s3)
    ctx->r5 = MEM_W(ctx->r19, 0XB0);
    // 0x0042ADB0: jal         0x002052D8
    // 0x0042ADB4: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_002052D8(rdram, ctx);
        goto after_18;
    // 0x0042ADB4: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_18:
    // 0x0042ADB8: lw          $a1, 0xB4($s3)
    ctx->r5 = MEM_W(ctx->r19, 0XB4);
    // 0x0042ADBC: jal         0x002052D8
    // 0x0042ADC0: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_002052D8(rdram, ctx);
        goto after_19;
    // 0x0042ADC0: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_19:
    // 0x0042ADC4: lw          $a1, 0xCC($s3)
    ctx->r5 = MEM_W(ctx->r19, 0XCC);
    // 0x0042ADC8: jal         0x002052D8
    // 0x0042ADCC: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_002052D8(rdram, ctx);
        goto after_20;
    // 0x0042ADCC: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_20:
    // 0x0042ADD0: lw          $a1, 0xAC($s3)
    ctx->r5 = MEM_W(ctx->r19, 0XAC);
    // 0x0042ADD4: jal         0x002052D8
    // 0x0042ADD8: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_002052D8(rdram, ctx);
        goto after_21;
    // 0x0042ADD8: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_21:
    // 0x0042ADDC: lw          $a1, 0xC8($s3)
    ctx->r5 = MEM_W(ctx->r19, 0XC8);
    // 0x0042ADE0: jal         0x002052D8
    // 0x0042ADE4: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_002052D8(rdram, ctx);
        goto after_22;
    // 0x0042ADE4: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_22:
L_0042ADE8:
    // 0x0042ADE8: jal         0x002053A8
    // 0x0042ADEC: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_002053A8(rdram, ctx);
        goto after_23;
    // 0x0042ADEC: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_23:
    // 0x0042ADF0: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0042ADF4: sw          $zero, 0x6D20($at)
    MEM_W(0X6D20, ctx->r1) = 0;
    // 0x0042ADF8: jal         0x00206068
    // 0x0042ADFC: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    func_00206068(rdram, ctx);
        goto after_24;
    // 0x0042ADFC: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    after_24:
    // 0x0042AE00: jal         0x00226390
    // 0x0042AE04: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    func_00226390(rdram, ctx);
        goto after_25;
    // 0x0042AE04: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    after_25:
    // 0x0042AE08: lw          $v0, 0x94($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X94);
    // 0x0042AE0C: lw          $a1, 0x0($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X0);
    // 0x0042AE10: jal         0x0042D220
    // 0x0042AE14: addiu       $a0, $s3, 0x18B0
    ctx->r4 = ADD32(ctx->r19, 0X18B0);
    func_0042D220(rdram, ctx);
        goto after_26;
    // 0x0042AE14: addiu       $a0, $s3, 0x18B0
    ctx->r4 = ADD32(ctx->r19, 0X18B0);
    after_26:
    // 0x0042AE18: lui         $a0, 0x1
    ctx->r4 = S32(0X1 << 16);
    // 0x0042AE1C: ori         $a0, $a0, 0x518
    ctx->r4 = ctx->r4 | 0X518;
    // 0x0042AE20: jal         0x0042CF90
    // 0x0042AE24: addu        $a0, $s3, $a0
    ctx->r4 = ADD32(ctx->r19, ctx->r4);
    func_0042CF90(rdram, ctx);
        goto after_27;
    // 0x0042AE24: addu        $a0, $s3, $a0
    ctx->r4 = ADD32(ctx->r19, ctx->r4);
    after_27:
    // 0x0042AE28: lui         $a0, 0x1
    ctx->r4 = S32(0X1 << 16);
    // 0x0042AE2C: ori         $a0, $a0, 0x3B28
    ctx->r4 = ctx->r4 | 0X3B28;
    // 0x0042AE30: jal         0x0042D0A0
    // 0x0042AE34: addu        $a0, $s3, $a0
    ctx->r4 = ADD32(ctx->r19, ctx->r4);
    func_0042D0A0(rdram, ctx);
        goto after_28;
    // 0x0042AE34: addu        $a0, $s3, $a0
    ctx->r4 = ADD32(ctx->r19, ctx->r4);
    after_28:
    // 0x0042AE38: lui         $s0, 0x8011
    ctx->r16 = S32(0X8011 << 16);
    // 0x0042AE3C: addiu       $s0, $s0, 0x2B8
    ctx->r16 = ADD32(ctx->r16, 0X2B8);
    // 0x0042AE40: jal         0x0042D410
    // 0x0042AE44: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_0042D410(rdram, ctx);
        goto after_29;
    // 0x0042AE44: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_29:
    // 0x0042AE48: jal         0x00241860
    // 0x0042AE4C: nop

    entry_00241860(rdram, ctx);
        goto after_30;
    // 0x0042AE4C: nop

    after_30:
    // 0x0042AE50: lui         $a0, 0x1
    ctx->r4 = S32(0X1 << 16);
    // 0x0042AE54: ori         $a0, $a0, 0x8EBC
    ctx->r4 = ctx->r4 | 0X8EBC;
    // 0x0042AE58: jal         0x0042D120
    // 0x0042AE5C: addu        $a0, $s3, $a0
    ctx->r4 = ADD32(ctx->r19, ctx->r4);
    func_0042D120(rdram, ctx);
        goto after_31;
    // 0x0042AE5C: addu        $a0, $s3, $a0
    ctx->r4 = ADD32(ctx->r19, ctx->r4);
    after_31:
    // 0x0042AE60: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x0042AE64: addiu       $a0, $a0, 0x6A90
    ctx->r4 = ADD32(ctx->r4, 0X6A90);
    // 0x0042AE68: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x0042AE6C: addiu       $a1, $a1, 0x68B0
    ctx->r5 = ADD32(ctx->r5, 0X68B0);
    // 0x0042AE70: jal         0x00275BE8
    // 0x0042AE74: addiu       $a2, $zero, 0xF
    ctx->r6 = ADD32(0, 0XF);
    func_00275BE8(rdram, ctx);
        goto after_32;
    // 0x0042AE74: addiu       $a2, $zero, 0xF
    ctx->r6 = ADD32(0, 0XF);
    after_32:
    // 0x0042AE78: jal         0x0042EBBC
    // 0x0042AE7C: addiu       $a0, $s0, -0x1C8
    ctx->r4 = ADD32(ctx->r16, -0X1C8);
    func_0042EBBC(rdram, ctx);
        goto after_33;
    // 0x0042AE7C: addiu       $a0, $s0, -0x1C8
    ctx->r4 = ADD32(ctx->r16, -0X1C8);
    after_33:
    // 0x0042AE80: lw          $v0, 0x38($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X38);
    // 0x0042AE84: lw          $v1, 0x0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X0);
    // 0x0042AE88: slt         $v0, $v1, $s2
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r18) ? 1 : 0;
    // 0x0042AE8C: beq         $v0, $zero, L_0042AE9C
    if (ctx->r2 == 0) {
        // 0x0042AE90: nop
    
            goto L_0042AE9C;
    }
    // 0x0042AE90: nop

    // 0x0042AE94: addiu       $s2, $v1, -0x1
    ctx->r18 = ADD32(ctx->r3, -0X1);
    // 0x0042AE98: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
L_0042AE9C:
    // 0x0042AE9C: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x0042AEA0: addu        $at, $s3, $at
    ctx->r1 = ADD32(ctx->r19, ctx->r1);
    // 0x0042AEA4: sw          $s2, -0x7058($at)
    MEM_W(-0X7058, ctx->r1) = ctx->r18;
    // 0x0042AEA8: bne         $s1, $zero, L_0042AEBC
    if (ctx->r17 != 0) {
        // 0x0042AEAC: lui         $a2, 0x1
        ctx->r6 = S32(0X1 << 16);
            goto L_0042AEBC;
    }
    // 0x0042AEAC: lui         $a2, 0x1
    ctx->r6 = S32(0X1 << 16);
    // 0x0042AEB0: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x0042AEB4: addu        $at, $s3, $at
    ctx->r1 = ADD32(ctx->r19, ctx->r1);
    // 0x0042AEB8: sw          $zero, -0x7048($at)
    MEM_W(-0X7048, ctx->r1) = 0;
L_0042AEBC:
    // 0x0042AEBC: ori         $a2, $a2, 0x8E5C
    ctx->r6 = ctx->r6 | 0X8E5C;
    // 0x0042AEC0: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x0042AEC4: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x0042AEC8: addu        $a2, $s3, $a2
    ctx->r6 = ADD32(ctx->r19, ctx->r6);
    // 0x0042AECC: jal         0x0022629C
    // 0x0042AED0: addiu       $a3, $zero, 0x3F
    ctx->r7 = ADD32(0, 0X3F);
    func_0022629C(rdram, ctx);
        goto after_34;
    // 0x0042AED0: addiu       $a3, $zero, 0x3F
    ctx->r7 = ADD32(0, 0X3F);
    after_34:
    // 0x0042AED4: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x0042AED8: addu        $at, $s3, $at
    ctx->r1 = ADD32(ctx->r19, ctx->r1);
    // 0x0042AEDC: lw          $v1, -0x7030($at)
    ctx->r3 = MEM_W(ctx->r1, -0X7030);
    // 0x0042AEE0: slti        $v0, $v1, 0x1CEA
    ctx->r2 = SIGNED(ctx->r3) < 0X1CEA ? 1 : 0;
    // 0x0042AEE4: beq         $v0, $zero, L_0042AF30
    if (ctx->r2 == 0) {
        // 0x0042AEE8: slti        $v0, $v1, 0x1CE8
        ctx->r2 = SIGNED(ctx->r3) < 0X1CE8 ? 1 : 0;
            goto L_0042AF30;
    }
    // 0x0042AEE8: slti        $v0, $v1, 0x1CE8
    ctx->r2 = SIGNED(ctx->r3) < 0X1CE8 ? 1 : 0;
    // 0x0042AEEC: beq         $v0, $zero, L_0042AF58
    if (ctx->r2 == 0) {
        // 0x0042AEF0: addiu       $v0, $zero, 0x1BBC
        ctx->r2 = ADD32(0, 0X1BBC);
            goto L_0042AF58;
    }
    // 0x0042AEF0: addiu       $v0, $zero, 0x1BBC
    ctx->r2 = ADD32(0, 0X1BBC);
    // 0x0042AEF4: beq         $v1, $v0, L_0042AF58
    if (ctx->r3 == ctx->r2) {
        // 0x0042AEF8: slti        $v0, $v1, 0x1BBD
        ctx->r2 = SIGNED(ctx->r3) < 0X1BBD ? 1 : 0;
            goto L_0042AF58;
    }
    // 0x0042AEF8: slti        $v0, $v1, 0x1BBD
    ctx->r2 = SIGNED(ctx->r3) < 0X1BBD ? 1 : 0;
    // 0x0042AEFC: beq         $v0, $zero, L_0042AF14
    if (ctx->r2 == 0) {
        // 0x0042AF00: addiu       $v0, $zero, 0x123A
        ctx->r2 = ADD32(0, 0X123A);
            goto L_0042AF14;
    }
    // 0x0042AF00: addiu       $v0, $zero, 0x123A
    ctx->r2 = ADD32(0, 0X123A);
    // 0x0042AF04: beq         $v1, $v0, L_0042AF5C
    if (ctx->r3 == ctx->r2) {
        // 0x0042AF08: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_0042AF5C;
    }
    // 0x0042AF08: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0042AF0C: j           L_0042AF70
    // 0x0042AF10: nop

        goto L_0042AF70;
    // 0x0042AF10: nop

L_0042AF14:
    // 0x0042AF14: addiu       $v0, $zero, 0x1C20
    ctx->r2 = ADD32(0, 0X1C20);
    // 0x0042AF18: beq         $v1, $v0, L_0042AF58
    if (ctx->r3 == ctx->r2) {
        // 0x0042AF1C: addiu       $v0, $zero, 0x1C84
        ctx->r2 = ADD32(0, 0X1C84);
            goto L_0042AF58;
    }
    // 0x0042AF1C: addiu       $v0, $zero, 0x1C84
    ctx->r2 = ADD32(0, 0X1C84);
    // 0x0042AF20: beq         $v1, $v0, L_0042AF5C
    if (ctx->r3 == ctx->r2) {
        // 0x0042AF24: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_0042AF5C;
    }
    // 0x0042AF24: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0042AF28: j           L_0042AF70
    // 0x0042AF2C: nop

        goto L_0042AF70;
    // 0x0042AF2C: nop

L_0042AF30:
    // 0x0042AF30: slti        $v0, $v1, 0x1D4C
    ctx->r2 = SIGNED(ctx->r3) < 0X1D4C ? 1 : 0;
    // 0x0042AF34: bne         $v0, $zero, L_0042AF70
    if (ctx->r2 != 0) {
        // 0x0042AF38: slti        $v0, $v1, 0x1D4E
        ctx->r2 = SIGNED(ctx->r3) < 0X1D4E ? 1 : 0;
            goto L_0042AF70;
    }
    // 0x0042AF38: slti        $v0, $v1, 0x1D4E
    ctx->r2 = SIGNED(ctx->r3) < 0X1D4E ? 1 : 0;
    // 0x0042AF3C: bne         $v0, $zero, L_0042AF5C
    if (ctx->r2 != 0) {
        // 0x0042AF40: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_0042AF5C;
    }
    // 0x0042AF40: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0042AF44: slti        $v0, $v1, 0x1DB3
    ctx->r2 = SIGNED(ctx->r3) < 0X1DB3 ? 1 : 0;
    // 0x0042AF48: beq         $v0, $zero, L_0042AF70
    if (ctx->r2 == 0) {
        // 0x0042AF4C: slti        $v0, $v1, 0x1DB1
        ctx->r2 = SIGNED(ctx->r3) < 0X1DB1 ? 1 : 0;
            goto L_0042AF70;
    }
    // 0x0042AF4C: slti        $v0, $v1, 0x1DB1
    ctx->r2 = SIGNED(ctx->r3) < 0X1DB1 ? 1 : 0;
    // 0x0042AF50: bne         $v0, $zero, L_0042AF70
    if (ctx->r2 != 0) {
        // 0x0042AF54: nop
    
            goto L_0042AF70;
    }
    // 0x0042AF54: nop

L_0042AF58:
    // 0x0042AF58: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_0042AF5C:
    // 0x0042AF5C: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x0042AF60: addu        $at, $s3, $at
    ctx->r1 = ADD32(ctx->r19, ctx->r1);
    // 0x0042AF64: sw          $v0, -0x705C($at)
    MEM_W(-0X705C, ctx->r1) = ctx->r2;
    // 0x0042AF68: j           L_0042AF7C
    // 0x0042AF6C: nop

        goto L_0042AF7C;
    // 0x0042AF6C: nop

L_0042AF70:
    // 0x0042AF70: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x0042AF74: addu        $at, $s3, $at
    ctx->r1 = ADD32(ctx->r19, ctx->r1);
    // 0x0042AF78: sw          $zero, -0x705C($at)
    MEM_W(-0X705C, ctx->r1) = 0;
L_0042AF7C:
    // 0x0042AF7C: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x0042AF80: addu        $at, $s3, $at
    ctx->r1 = ADD32(ctx->r19, ctx->r1);
    // 0x0042AF84: lw          $v1, -0x7030($at)
    ctx->r3 = MEM_W(ctx->r1, -0X7030);
    // 0x0042AF88: slti        $v0, $v1, 0x1CEA
    ctx->r2 = SIGNED(ctx->r3) < 0X1CEA ? 1 : 0;
    // 0x0042AF8C: beq         $v0, $zero, L_0042AFD8
    if (ctx->r2 == 0) {
        // 0x0042AF90: slti        $v0, $v1, 0x1CE8
        ctx->r2 = SIGNED(ctx->r3) < 0X1CE8 ? 1 : 0;
            goto L_0042AFD8;
    }
    // 0x0042AF90: slti        $v0, $v1, 0x1CE8
    ctx->r2 = SIGNED(ctx->r3) < 0X1CE8 ? 1 : 0;
    // 0x0042AF94: beq         $v0, $zero, L_0042B010
    if (ctx->r2 == 0) {
        // 0x0042AF98: addiu       $v0, $zero, 0x1BBC
        ctx->r2 = ADD32(0, 0X1BBC);
            goto L_0042B010;
    }
    // 0x0042AF98: addiu       $v0, $zero, 0x1BBC
    ctx->r2 = ADD32(0, 0X1BBC);
    // 0x0042AF9C: beq         $v1, $v0, L_0042B010
    if (ctx->r3 == ctx->r2) {
        // 0x0042AFA0: slti        $v0, $v1, 0x1BBD
        ctx->r2 = SIGNED(ctx->r3) < 0X1BBD ? 1 : 0;
            goto L_0042B010;
    }
    // 0x0042AFA0: slti        $v0, $v1, 0x1BBD
    ctx->r2 = SIGNED(ctx->r3) < 0X1BBD ? 1 : 0;
    // 0x0042AFA4: beq         $v0, $zero, L_0042AFBC
    if (ctx->r2 == 0) {
        // 0x0042AFA8: addiu       $v0, $zero, 0x123A
        ctx->r2 = ADD32(0, 0X123A);
            goto L_0042AFBC;
    }
    // 0x0042AFA8: addiu       $v0, $zero, 0x123A
    ctx->r2 = ADD32(0, 0X123A);
    // 0x0042AFAC: beq         $v1, $v0, L_0042B010
    if (ctx->r3 == ctx->r2) {
        // 0x0042AFB0: addiu       $s0, $zero, 0x320
        ctx->r16 = ADD32(0, 0X320);
            goto L_0042B010;
    }
    // 0x0042AFB0: addiu       $s0, $zero, 0x320
    ctx->r16 = ADD32(0, 0X320);
    // 0x0042AFB4: j           L_0042B024
    // 0x0042AFB8: nop

        goto L_0042B024;
    // 0x0042AFB8: nop

L_0042AFBC:
    // 0x0042AFBC: addiu       $v0, $zero, 0x1C20
    ctx->r2 = ADD32(0, 0X1C20);
    // 0x0042AFC0: beq         $v1, $v0, L_0042B010
    if (ctx->r3 == ctx->r2) {
        // 0x0042AFC4: addiu       $v0, $zero, 0x1C84
        ctx->r2 = ADD32(0, 0X1C84);
            goto L_0042B010;
    }
    // 0x0042AFC4: addiu       $v0, $zero, 0x1C84
    ctx->r2 = ADD32(0, 0X1C84);
    // 0x0042AFC8: beq         $v1, $v0, L_0042B010
    if (ctx->r3 == ctx->r2) {
        // 0x0042AFCC: addiu       $s0, $zero, 0x320
        ctx->r16 = ADD32(0, 0X320);
            goto L_0042B010;
    }
    // 0x0042AFCC: addiu       $s0, $zero, 0x320
    ctx->r16 = ADD32(0, 0X320);
    // 0x0042AFD0: j           L_0042B024
    // 0x0042AFD4: nop

        goto L_0042B024;
    // 0x0042AFD4: nop

L_0042AFD8:
    // 0x0042AFD8: addiu       $v0, $zero, 0x1DB1
    ctx->r2 = ADD32(0, 0X1DB1);
    // 0x0042AFDC: beq         $v1, $v0, L_0042B018
    if (ctx->r3 == ctx->r2) {
        // 0x0042AFE0: slti        $v0, $v1, 0x1DB2
        ctx->r2 = SIGNED(ctx->r3) < 0X1DB2 ? 1 : 0;
            goto L_0042B018;
    }
    // 0x0042AFE0: slti        $v0, $v1, 0x1DB2
    ctx->r2 = SIGNED(ctx->r3) < 0X1DB2 ? 1 : 0;
    // 0x0042AFE4: beq         $v0, $zero, L_0042B004
    if (ctx->r2 == 0) {
        // 0x0042AFE8: slti        $v0, $v1, 0x1D4E
        ctx->r2 = SIGNED(ctx->r3) < 0X1D4E ? 1 : 0;
            goto L_0042B004;
    }
    // 0x0042AFE8: slti        $v0, $v1, 0x1D4E
    ctx->r2 = SIGNED(ctx->r3) < 0X1D4E ? 1 : 0;
    // 0x0042AFEC: beq         $v0, $zero, L_0042B020
    if (ctx->r2 == 0) {
        // 0x0042AFF0: slti        $v0, $v1, 0x1D4C
        ctx->r2 = SIGNED(ctx->r3) < 0X1D4C ? 1 : 0;
            goto L_0042B020;
    }
    // 0x0042AFF0: slti        $v0, $v1, 0x1D4C
    ctx->r2 = SIGNED(ctx->r3) < 0X1D4C ? 1 : 0;
    // 0x0042AFF4: bne         $v0, $zero, L_0042B024
    if (ctx->r2 != 0) {
        // 0x0042AFF8: addiu       $s0, $zero, 0x320
        ctx->r16 = ADD32(0, 0X320);
            goto L_0042B024;
    }
    // 0x0042AFF8: addiu       $s0, $zero, 0x320
    ctx->r16 = ADD32(0, 0X320);
    // 0x0042AFFC: j           L_0042B024
    // 0x0042B000: addiu       $s0, $zero, 0xC80
    ctx->r16 = ADD32(0, 0XC80);
        goto L_0042B024;
    // 0x0042B000: addiu       $s0, $zero, 0xC80
    ctx->r16 = ADD32(0, 0XC80);
L_0042B004:
    // 0x0042B004: addiu       $v0, $zero, 0x1DB2
    ctx->r2 = ADD32(0, 0X1DB2);
    // 0x0042B008: bne         $v1, $v0, L_0042B024
    if (ctx->r3 != ctx->r2) {
        // 0x0042B00C: addiu       $s0, $zero, 0x320
        ctx->r16 = ADD32(0, 0X320);
            goto L_0042B024;
    }
    // 0x0042B00C: addiu       $s0, $zero, 0x320
    ctx->r16 = ADD32(0, 0X320);
L_0042B010:
    // 0x0042B010: j           L_0042B024
    // 0x0042B014: addiu       $s0, $zero, 0xC80
    ctx->r16 = ADD32(0, 0XC80);
        goto L_0042B024;
    // 0x0042B014: addiu       $s0, $zero, 0xC80
    ctx->r16 = ADD32(0, 0XC80);
L_0042B018:
    // 0x0042B018: j           L_0042B024
    // 0x0042B01C: addiu       $s0, $zero, 0x4B0
    ctx->r16 = ADD32(0, 0X4B0);
        goto L_0042B024;
    // 0x0042B01C: addiu       $s0, $zero, 0x4B0
    ctx->r16 = ADD32(0, 0X4B0);
L_0042B020:
    // 0x0042B020: addiu       $s0, $zero, 0x320
    ctx->r16 = ADD32(0, 0X320);
L_0042B024:
    // 0x0042B024: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x0042B028: lbu         $v0, -0x550F($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X550F);
    // 0x0042B02C: bnel        $v0, $zero, L_0042B034
    if (ctx->r2 != 0) {
        // 0x0042B030: addiu       $s0, $s0, 0x200
        ctx->r16 = ADD32(ctx->r16, 0X200);
            goto L_0042B034;
    }
    goto skip_2;
    // 0x0042B030: addiu       $s0, $s0, 0x200
    ctx->r16 = ADD32(ctx->r16, 0X200);
    skip_2:
L_0042B034:
    // 0x0042B034: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0042B038: sll         $a1, $s0, 6
    ctx->r5 = S32(ctx->r16 << 6);
    // 0x0042B03C: lui         $a3, 0x800A
    ctx->r7 = S32(0X800A << 16);
    // 0x0042B040: addiu       $a3, $a3, 0x5EB4
    ctx->r7 = ADD32(ctx->r7, 0X5EB4);
    // 0x0042B044: jal         0x00204EDC
    // 0x0042B048: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    func_00204EDC(rdram, ctx);
        goto after_35;
    // 0x0042B048: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_35:
    // 0x0042B04C: addiu       $a0, $s3, 0xD0
    ctx->r4 = ADD32(ctx->r19, 0XD0);
    // 0x0042B050: sw          $v0, 0xC8($s3)
    MEM_W(0XC8, ctx->r19) = ctx->r2;
    // 0x0042B054: lw          $a1, 0x0($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X0);
    // 0x0042B058: jal         0x00429F20
    // 0x0042B05C: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    func_00429F20(rdram, ctx);
        goto after_36;
    // 0x0042B05C: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    after_36:
    // 0x0042B060: lw          $a0, 0x38($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X38);
    // 0x0042B064: lw          $a1, 0xC($s3)
    ctx->r5 = MEM_W(ctx->r19, 0XC);
    // 0x0042B068: jal         0x00201848
    // 0x0042B06C: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    func_00201848(rdram, ctx);
        goto after_37;
    // 0x0042B06C: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    after_37:
    // 0x0042B070: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0042B074: addiu       $a1, $s3, 0x4C
    ctx->r5 = ADD32(ctx->r19, 0X4C);
    // 0x0042B078: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x0042B07C: lui         $a3, 0x800A
    ctx->r7 = S32(0X800A << 16);
    // 0x0042B080: addiu       $a3, $a3, 0x5EC0
    ctx->r7 = ADD32(ctx->r7, 0X5EC0);
    // 0x0042B084: jal         0x00205B94
    // 0x0042B088: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    func_00205B94(rdram, ctx);
        goto after_38;
    // 0x0042B088: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    after_38:
    // 0x0042B08C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0042B090: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x0042B094: sw          $v0, 0x98($s3)
    MEM_W(0X98, ctx->r19) = ctx->r2;
    // 0x0042B098: lui         $v0, 0x43
    ctx->r2 = S32(0X43 << 16);
    // 0x0042B09C: addiu       $v0, $v0, -0x4950
    ctx->r2 = ADD32(ctx->r2, -0X4950);
    // 0x0042B0A0: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x0042B0A4: lui         $v0, 0x800A
    ctx->r2 = S32(0X800A << 16);
    // 0x0042B0A8: addiu       $v0, $v0, 0x5ECC
    ctx->r2 = ADD32(ctx->r2, 0X5ECC);
    // 0x0042B0AC: sw          $s3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r19;
    // 0x0042B0B0: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x0042B0B4: lw          $a1, 0x4C($s3)
    ctx->r5 = MEM_W(ctx->r19, 0X4C);
    // 0x0042B0B8: jal         0x00205D0C
    // 0x0042B0BC: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    func_00205D0C(rdram, ctx);
        goto after_39;
    // 0x0042B0BC: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    after_39:
    // 0x0042B0C0: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0042B0C4: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x0042B0C8: sw          $v0, 0x9C($s3)
    MEM_W(0X9C, ctx->r19) = ctx->r2;
    // 0x0042B0CC: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x0042B0D0: lui         $s1, 0x20
    ctx->r17 = S32(0X20 << 16);
    // 0x0042B0D4: addiu       $s1, $s1, 0xAE0
    ctx->r17 = ADD32(ctx->r17, 0XAE0);
    // 0x0042B0D8: sw          $v0, 0x58($s3)
    MEM_W(0X58, ctx->r19) = ctx->r2;
    // 0x0042B0DC: lui         $v0, 0x800A
    ctx->r2 = S32(0X800A << 16);
    // 0x0042B0E0: addiu       $v0, $v0, 0x5ED8
    ctx->r2 = ADD32(ctx->r2, 0X5ED8);
    // 0x0042B0E4: sw          $s3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r19;
    // 0x0042B0E8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x0042B0EC: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x0042B0F0: lw          $a1, 0x4C($s3)
    ctx->r5 = MEM_W(ctx->r19, 0X4C);
    // 0x0042B0F4: jal         0x00205D0C
    // 0x0042B0F8: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    func_00205D0C(rdram, ctx);
        goto after_40;
    // 0x0042B0F8: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    after_40:
    // 0x0042B0FC: lw          $a0, 0x4C($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X4C);
    // 0x0042B100: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x0042B104: sw          $v0, 0xA0($s3)
    MEM_W(0XA0, ctx->r19) = ctx->r2;
    // 0x0042B108: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x0042B10C: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    // 0x0042B110: jal         0x00201848
    // 0x0042B114: sw          $v0, 0x54($s3)
    MEM_W(0X54, ctx->r19) = ctx->r2;
    func_00201848(rdram, ctx);
        goto after_41;
    // 0x0042B114: sw          $v0, 0x54($s3)
    MEM_W(0X54, ctx->r19) = ctx->r2;
    after_41:
    // 0x0042B118: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0042B11C: addiu       $a1, $s3, 0x50
    ctx->r5 = ADD32(ctx->r19, 0X50);
    // 0x0042B120: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    // 0x0042B124: lui         $a3, 0x800A
    ctx->r7 = S32(0X800A << 16);
    // 0x0042B128: addiu       $a3, $a3, 0x5EE4
    ctx->r7 = ADD32(ctx->r7, 0X5EE4);
    // 0x0042B12C: jal         0x00205B94
    // 0x0042B130: sw          $a2, 0x20($s3)
    MEM_W(0X20, ctx->r19) = ctx->r6;
    func_00205B94(rdram, ctx);
        goto after_42;
    // 0x0042B130: sw          $a2, 0x20($s3)
    MEM_W(0X20, ctx->r19) = ctx->r6;
    after_42:
    // 0x0042B134: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0042B138: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
    // 0x0042B13C: sw          $v0, 0xA4($s3)
    MEM_W(0XA4, ctx->r19) = ctx->r2;
    // 0x0042B140: lui         $v0, 0x43
    ctx->r2 = S32(0X43 << 16);
    // 0x0042B144: addiu       $v0, $v0, -0x4C1C
    ctx->r2 = ADD32(ctx->r2, -0X4C1C);
    // 0x0042B148: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x0042B14C: lui         $v0, 0x800A
    ctx->r2 = S32(0X800A << 16);
    // 0x0042B150: addiu       $v0, $v0, 0x5EF8
    ctx->r2 = ADD32(ctx->r2, 0X5EF8);
    // 0x0042B154: sw          $s3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r19;
    // 0x0042B158: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x0042B15C: lw          $a1, 0x4C($s3)
    ctx->r5 = MEM_W(ctx->r19, 0X4C);
    // 0x0042B160: jal         0x00205D0C
    // 0x0042B164: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    func_00205D0C(rdram, ctx);
        goto after_43;
    // 0x0042B164: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    after_43:
    // 0x0042B168: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0042B16C: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x0042B170: sw          $v0, 0xB4($s3)
    MEM_W(0XB4, ctx->r19) = ctx->r2;
    // 0x0042B174: lui         $v0, 0x43
    ctx->r2 = S32(0X43 << 16);
    // 0x0042B178: addiu       $v0, $v0, -0x32FC
    ctx->r2 = ADD32(ctx->r2, -0X32FC);
    // 0x0042B17C: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x0042B180: lui         $v0, 0x800A
    ctx->r2 = S32(0X800A << 16);
    // 0x0042B184: addiu       $v0, $v0, 0x5F00
    ctx->r2 = ADD32(ctx->r2, 0X5F00);
    // 0x0042B188: sw          $s3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r19;
    // 0x0042B18C: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x0042B190: lw          $a1, 0x4C($s3)
    ctx->r5 = MEM_W(ctx->r19, 0X4C);
    // 0x0042B194: jal         0x00205D0C
    // 0x0042B198: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    func_00205D0C(rdram, ctx);
        goto after_44;
    // 0x0042B198: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    after_44:
    // 0x0042B19C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0042B1A0: addu        $a2, $a0, $zero
    ctx->r6 = ADD32(ctx->r4, 0);
    // 0x0042B1A4: sw          $v0, 0xCC($s3)
    MEM_W(0XCC, ctx->r19) = ctx->r2;
    // 0x0042B1A8: lui         $v0, 0x800A
    ctx->r2 = S32(0X800A << 16);
    // 0x0042B1AC: addiu       $v0, $v0, 0x5F0C
    ctx->r2 = ADD32(ctx->r2, 0X5F0C);
    // 0x0042B1B0: sw          $s3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r19;
    // 0x0042B1B4: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x0042B1B8: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x0042B1BC: lw          $a1, 0x4C($s3)
    ctx->r5 = MEM_W(ctx->r19, 0X4C);
    // 0x0042B1C0: jal         0x00205D0C
    // 0x0042B1C4: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    func_00205D0C(rdram, ctx);
        goto after_45;
    // 0x0042B1C4: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    after_45:
    // 0x0042B1C8: sw          $v0, 0xA8($s3)
    MEM_W(0XA8, ctx->r19) = ctx->r2;
    // 0x0042B1CC: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x0042B1D0: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x0042B1D4: addu        $at, $s3, $at
    ctx->r1 = ADD32(ctx->r19, ctx->r1);
    // 0x0042B1D8: sw          $v0, -0x71B0($at)
    MEM_W(-0X71B0, ctx->r1) = ctx->r2;
    // 0x0042B1DC: jal         0x0042AA80
    // 0x0042B1E0: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    func_0042AA80(rdram, ctx);
        goto after_46;
    // 0x0042B1E0: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    after_46:
    // 0x0042B1E4: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0042B1E8: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    // 0x0042B1EC: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x0042B1F0: addu        $at, $s3, $at
    ctx->r1 = ADD32(ctx->r19, ctx->r1);
    // 0x0042B1F4: lw          $v0, -0x71B0($at)
    ctx->r2 = MEM_W(ctx->r1, -0X71B0);
    // 0x0042B1F8: lbu         $v1, 0x10($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X10);
    // 0x0042B1FC: lui         $v0, 0x800A
    ctx->r2 = S32(0X800A << 16);
    // 0x0042B200: addiu       $v0, $v0, 0x5F18
    ctx->r2 = ADD32(ctx->r2, 0X5F18);
    // 0x0042B204: sw          $s3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r19;
    // 0x0042B208: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x0042B20C: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x0042B210: lw          $a1, 0x4C($s3)
    ctx->r5 = MEM_W(ctx->r19, 0X4C);
    // 0x0042B214: srl         $v1, $v1, 2
    ctx->r3 = S32(U32(ctx->r3) >> 2);
    // 0x0042B218: andi        $v1, $v1, 0x1
    ctx->r3 = ctx->r3 & 0X1;
    // 0x0042B21C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0042B220: sw          $v1, -0x4760($at)
    MEM_W(-0X4760, ctx->r1) = ctx->r3;
    // 0x0042B224: jal         0x00205D0C
    // 0x0042B228: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    func_00205D0C(rdram, ctx);
        goto after_47;
    // 0x0042B228: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    after_47:
    // 0x0042B22C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0042B230: sw          $v0, 0xAC($s3)
    MEM_W(0XAC, ctx->r19) = ctx->r2;
    // 0x0042B234: lw          $v1, 0x0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X0);
    // 0x0042B238: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x0042B23C: addiu       $v0, $v1, 0x8
    ctx->r2 = ADD32(ctx->r3, 0X8);
    // 0x0042B240: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x0042B244: addu        $at, $s3, $at
    ctx->r1 = ADD32(ctx->r19, ctx->r1);
    // 0x0042B248: sw          $v0, -0x7164($at)
    MEM_W(-0X7164, ctx->r1) = ctx->r2;
    // 0x0042B24C: lw          $v1, 0x4($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X4);
    // 0x0042B250: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0042B254: sw          $v0, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r2;
    // 0x0042B258: lui         $v0, 0x43
    ctx->r2 = S32(0X43 << 16);
    // 0x0042B25C: addiu       $v0, $v0, -0x45C0
    ctx->r2 = ADD32(ctx->r2, -0X45C0);
    // 0x0042B260: sw          $zero, 0xE0($s3)
    MEM_W(0XE0, ctx->r19) = 0;
    // 0x0042B264: sw          $zero, 0xE8($s3)
    MEM_W(0XE8, ctx->r19) = 0;
    // 0x0042B268: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x0042B26C: addu        $at, $s3, $at
    ctx->r1 = ADD32(ctx->r19, ctx->r1);
    // 0x0042B270: sw          $v1, -0x7160($at)
    MEM_W(-0X7160, ctx->r1) = ctx->r3;
    // 0x0042B274: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x0042B278: lui         $v0, 0x800A
    ctx->r2 = S32(0X800A << 16);
    // 0x0042B27C: addiu       $v0, $v0, 0x5F24
    ctx->r2 = ADD32(ctx->r2, 0X5F24);
    // 0x0042B280: sw          $s3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r19;
    // 0x0042B284: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x0042B288: lw          $a1, 0x4C($s3)
    ctx->r5 = MEM_W(ctx->r19, 0X4C);
    // 0x0042B28C: jal         0x00205D0C
    // 0x0042B290: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    func_00205D0C(rdram, ctx);
        goto after_48;
    // 0x0042B290: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    after_48:
    // 0x0042B294: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x0042B298: sw          $v0, 0xB0($s3)
    MEM_W(0XB0, ctx->r19) = ctx->r2;
    // 0x0042B29C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x0042B2A0: jal         0x0042C79C
    // 0x0042B2A4: sw          $v0, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r2;
    func_0042C79C(rdram, ctx);
        goto after_49;
    // 0x0042B2A4: sw          $v0, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r2;
    after_49:
    // 0x0042B2A8: lw          $s4, 0xE8($s3)
    ctx->r20 = MEM_W(ctx->r19, 0XE8);
    // 0x0042B2AC: lw          $s1, 0xE4($s3)
    ctx->r17 = MEM_W(ctx->r19, 0XE4);
    // 0x0042B2B0: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x0042B2B4: sw          $v0, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r2;
    // 0x0042B2B8: slt         $v0, $s1, $s4
    ctx->r2 = SIGNED(ctx->r17) < SIGNED(ctx->r20) ? 1 : 0;
    // 0x0042B2BC: beq         $v0, $zero, L_0042B2F0
    if (ctx->r2 == 0) {
        // 0x0042B2C0: sll         $v0, $s1, 2
        ctx->r2 = S32(ctx->r17 << 2);
            goto L_0042B2F0;
    }
    // 0x0042B2C0: sll         $v0, $s1, 2
    ctx->r2 = S32(ctx->r17 << 2);
    // 0x0042B2C4: addu        $v0, $v0, $s1
    ctx->r2 = ADD32(ctx->r2, ctx->r17);
    // 0x0042B2C8: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x0042B2CC: addu        $v0, $v0, $s1
    ctx->r2 = ADD32(ctx->r2, ctx->r17);
    // 0x0042B2D0: sll         $s0, $v0, 3
    ctx->r16 = S32(ctx->r2 << 3);
L_0042B2D4:
    // 0x0042B2D4: lw          $a0, 0xE0($s3)
    ctx->r4 = MEM_W(ctx->r19, 0XE0);
    // 0x0042B2D8: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x0042B2DC: jal         0x0021E5D4
    // 0x0042B2E0: addu        $a0, $a0, $s0
    ctx->r4 = ADD32(ctx->r4, ctx->r16);
    func_0021E5D4(rdram, ctx);
        goto after_50;
    // 0x0042B2E0: addu        $a0, $a0, $s0
    ctx->r4 = ADD32(ctx->r4, ctx->r16);
    after_50:
    // 0x0042B2E4: slt         $v0, $s1, $s4
    ctx->r2 = SIGNED(ctx->r17) < SIGNED(ctx->r20) ? 1 : 0;
    // 0x0042B2E8: bne         $v0, $zero, L_0042B2D4
    if (ctx->r2 != 0) {
        // 0x0042B2EC: addiu       $s0, $s0, 0x288
        ctx->r16 = ADD32(ctx->r16, 0X288);
            goto L_0042B2D4;
    }
    // 0x0042B2EC: addiu       $s0, $s0, 0x288
    ctx->r16 = ADD32(ctx->r16, 0X288);
L_0042B2F0:
    // 0x0042B2F0: lui         $s1, 0x8012
    ctx->r17 = S32(0X8012 << 16);
    // 0x0042B2F4: lw          $s1, -0x6770($s1)
    ctx->r17 = MEM_W(ctx->r17, -0X6770);
    // 0x0042B2F8: beq         $s1, $zero, L_0042B31C
    if (ctx->r17 == 0) {
        // 0x0042B2FC: addu        $s0, $s1, $zero
        ctx->r16 = ADD32(ctx->r17, 0);
            goto L_0042B31C;
    }
    // 0x0042B2FC: addu        $s0, $s1, $zero
    ctx->r16 = ADD32(ctx->r17, 0);
L_0042B300:
    // 0x0042B300: jal         0x0021E5D4
    // 0x0042B304: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_0021E5D4(rdram, ctx);
        goto after_51;
    // 0x0042B304: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_51:
    // 0x0042B308: jal         0x0021E5D4
    // 0x0042B30C: addiu       $a0, $s0, 0x288
    ctx->r4 = ADD32(ctx->r16, 0X288);
    func_0021E5D4(rdram, ctx);
        goto after_52;
    // 0x0042B30C: addiu       $a0, $s0, 0x288
    ctx->r4 = ADD32(ctx->r16, 0X288);
    after_52:
    // 0x0042B310: lw          $s1, 0x1320($s1)
    ctx->r17 = MEM_W(ctx->r17, 0X1320);
    // 0x0042B314: bne         $s1, $zero, L_0042B300
    if (ctx->r17 != 0) {
        // 0x0042B318: addu        $s0, $s1, $zero
        ctx->r16 = ADD32(ctx->r17, 0);
            goto L_0042B300;
    }
    // 0x0042B318: addu        $s0, $s1, $zero
    ctx->r16 = ADD32(ctx->r17, 0);
L_0042B31C:
    // 0x0042B31C: jal         0x0042C840
    // 0x0042B320: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    func_0042C840(rdram, ctx);
        goto after_53;
    // 0x0042B320: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    after_53:
    // 0x0042B324: lw          $s4, 0xE8($s3)
    ctx->r20 = MEM_W(ctx->r19, 0XE8);
    // 0x0042B328: lw          $s1, 0xE4($s3)
    ctx->r17 = MEM_W(ctx->r19, 0XE4);
    // 0x0042B32C: slt         $v0, $s1, $s4
    ctx->r2 = SIGNED(ctx->r17) < SIGNED(ctx->r20) ? 1 : 0;
    // 0x0042B330: beq         $v0, $zero, L_0042B370
    if (ctx->r2 == 0) {
        // 0x0042B334: sll         $v0, $s1, 2
        ctx->r2 = S32(ctx->r17 << 2);
            goto L_0042B370;
    }
    // 0x0042B334: sll         $v0, $s1, 2
    ctx->r2 = S32(ctx->r17 << 2);
    // 0x0042B338: addu        $v0, $v0, $s1
    ctx->r2 = ADD32(ctx->r2, ctx->r17);
    // 0x0042B33C: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x0042B340: addu        $v0, $v0, $s1
    ctx->r2 = ADD32(ctx->r2, ctx->r17);
    // 0x0042B344: sll         $s2, $v0, 3
    ctx->r18 = S32(ctx->r2 << 3);
L_0042B348:
    // 0x0042B348: lw          $v0, 0xE0($s3)
    ctx->r2 = MEM_W(ctx->r19, 0XE0);
    // 0x0042B34C: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x0042B350: addu        $s0, $v0, $s2
    ctx->r16 = ADD32(ctx->r2, ctx->r18);
    // 0x0042B354: jal         0x0021F1B4
    // 0x0042B358: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_0021F1B4(rdram, ctx);
        goto after_54;
    // 0x0042B358: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_54:
    // 0x0042B35C: jal         0x0021A344
    // 0x0042B360: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_0021A344(rdram, ctx);
        goto after_55;
    // 0x0042B360: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_55:
    // 0x0042B364: slt         $v0, $s1, $s4
    ctx->r2 = SIGNED(ctx->r17) < SIGNED(ctx->r20) ? 1 : 0;
    // 0x0042B368: bne         $v0, $zero, L_0042B348
    if (ctx->r2 != 0) {
        // 0x0042B36C: addiu       $s2, $s2, 0x288
        ctx->r18 = ADD32(ctx->r18, 0X288);
            goto L_0042B348;
    }
    // 0x0042B36C: addiu       $s2, $s2, 0x288
    ctx->r18 = ADD32(ctx->r18, 0X288);
L_0042B370:
    // 0x0042B370: lui         $s1, 0x8012
    ctx->r17 = S32(0X8012 << 16);
    // 0x0042B374: addiu       $s1, $s1, -0x6790
    ctx->r17 = ADD32(ctx->r17, -0X6790);
    // 0x0042B378: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0042B37C: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x0042B380: jal         0x0042E894
    // 0x0042B384: sw          $v0, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r2;
    func_0042E894(rdram, ctx);
        goto after_56;
    // 0x0042B384: sw          $v0, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r2;
    after_56:
    // 0x0042B388: addiu       $s0, $s1, 0x40
    ctx->r16 = ADD32(ctx->r17, 0X40);
    // 0x0042B38C: jal         0x0042FEEC
    // 0x0042B390: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_0042FEEC(rdram, ctx);
        goto after_57;
    // 0x0042B390: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_57:
    // 0x0042B394: jal         0x0027ECF0
    // 0x0042B398: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_0027ECF0(rdram, ctx);
        goto after_58;
    // 0x0042B398: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_58:
    // 0x0042B39C: lbu         $v0, 0x1281($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X1281);
    // 0x0042B3A0: bne         $v0, $zero, L_0042B3BC
    if (ctx->r2 != 0) {
        // 0x0042B3A4: nop
    
            goto L_0042B3BC;
    }
    // 0x0042B3A4: nop

    // 0x0042B3A8: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x0042B3AC: addu        $at, $s3, $at
    ctx->r1 = ADD32(ctx->r19, ctx->r1);
    // 0x0042B3B0: lw          $v0, -0x705C($at)
    ctx->r2 = MEM_W(ctx->r1, -0X705C);
    // 0x0042B3B4: beq         $v0, $zero, L_0042B3C4
    if (ctx->r2 == 0) {
        // 0x0042B3B8: nop
    
            goto L_0042B3C4;
    }
    // 0x0042B3B8: nop

L_0042B3BC:
    // 0x0042B3BC: jal         0x0042BF48
    // 0x0042B3C0: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    func_0042BF48(rdram, ctx);
        goto after_59;
    // 0x0042B3C0: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    after_59:
L_0042B3C4:
    // 0x0042B3C4: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x0042B3C8: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x0042B3CC: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x0042B3D0: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x0042B3D4: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x0042B3D8: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x0042B3DC: jr          $ra
    // 0x0042B3E0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x0042B3E0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void entry_0042AC18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0042AC18: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x0042AC1C: addu        $s2, $a1, $zero
    ctx->r18 = ADD32(ctx->r5, 0);
    // 0x0042AC20: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x0042AC24: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x0042AC28: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x0042AC2C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x0042AC30: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x0042AC34: addu        $at, $s3, $at
    ctx->r1 = ADD32(ctx->r19, ctx->r1);
    // 0x0042AC38: lw          $v1, -0x7058($at)
    ctx->r3 = MEM_W(ctx->r1, -0X7058);
    // 0x0042AC3C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x0042AC40: beq         $v1, $v0, L_0042AC50
    if (ctx->r3 == ctx->r2) {
        // 0x0042AC44: addu        $s1, $a2, $zero
        ctx->r17 = ADD32(ctx->r6, 0);
            goto L_0042AC50;
    }
    // 0x0042AC44: addu        $s1, $a2, $zero
    ctx->r17 = ADD32(ctx->r6, 0);
    // 0x0042AC48: jal         0x0042C96C
    // 0x0042AC4C: nop

    func_0042C96C(rdram, ctx);
        goto after_0;
    // 0x0042AC4C: nop

    after_0:
L_0042AC50:
    // 0x0042AC50: jal         0x00284174
    // 0x0042AC54: nop

    func_00284174(rdram, ctx);
        goto after_1;
    // 0x0042AC54: nop

    after_1:
    // 0x0042AC58: bne         $v0, $zero, L_0042ACF8
    if (ctx->r2 != 0) {
        // 0x0042AC5C: nop
    
            goto L_0042ACF8;
    }
    // 0x0042AC5C: nop

    // 0x0042AC60: jal         0x0027BC34
    // 0x0042AC64: nop

    func_0027BC34(rdram, ctx);
        goto after_2;
    // 0x0042AC64: nop

    after_2:
    // 0x0042AC68: bne         $v0, $zero, L_0042ACF8
    if (ctx->r2 != 0) {
        // 0x0042AC6C: nop
    
            goto L_0042ACF8;
    }
    // 0x0042AC6C: nop

    // 0x0042AC70: beq         $s1, $zero, L_0042ACF8
    if (ctx->r17 == 0) {
        // 0x0042AC74: nop
    
            goto L_0042ACF8;
    }
    // 0x0042AC74: nop

    // 0x0042AC78: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x0042AC7C: addu        $at, $s3, $at
    ctx->r1 = ADD32(ctx->r19, ctx->r1);
    // 0x0042AC80: lw          $v0, -0x7048($at)
    ctx->r2 = MEM_W(ctx->r1, -0X7048);
    // 0x0042AC84: beq         $v0, $zero, L_0042ACF8
    if (ctx->r2 == 0) {
        // 0x0042AC88: addiu       $v0, $zero, 0xFA0
        ctx->r2 = ADD32(0, 0XFA0);
            goto L_0042ACF8;
    }
    // 0x0042AC88: addiu       $v0, $zero, 0xFA0
    ctx->r2 = ADD32(0, 0XFA0);
    // 0x0042AC8C: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x0042AC90: addu        $at, $s3, $at
    ctx->r1 = ADD32(ctx->r19, ctx->r1);
    // 0x0042AC94: lw          $v1, -0x7030($at)
    ctx->r3 = MEM_W(ctx->r1, -0X7030);
    // 0x0042AC98: beq         $v1, $v0, L_0042ACE4
    if (ctx->r3 == ctx->r2) {
        // 0x0042AC9C: slti        $v0, $v1, 0xFA1
        ctx->r2 = SIGNED(ctx->r3) < 0XFA1 ? 1 : 0;
            goto L_0042ACE4;
    }
    // 0x0042AC9C: slti        $v0, $v1, 0xFA1
    ctx->r2 = SIGNED(ctx->r3) < 0XFA1 ? 1 : 0;
    // 0x0042ACA0: beq         $v0, $zero, L_0042ACC0
    if (ctx->r2 == 0) {
        // 0x0042ACA4: addiu       $v0, $zero, 0x7D0
        ctx->r2 = ADD32(0, 0X7D0);
            goto L_0042ACC0;
    }
    // 0x0042ACA4: addiu       $v0, $zero, 0x7D0
    ctx->r2 = ADD32(0, 0X7D0);
    // 0x0042ACA8: beq         $v1, $v0, L_0042ACDC
    if (ctx->r3 == ctx->r2) {
        // 0x0042ACAC: addiu       $v0, $zero, 0xBB8
        ctx->r2 = ADD32(0, 0XBB8);
            goto L_0042ACDC;
    }
    // 0x0042ACAC: addiu       $v0, $zero, 0xBB8
    ctx->r2 = ADD32(0, 0XBB8);
    // 0x0042ACB0: beql        $v1, $v0, L_0042ACF0
    if (ctx->r3 == ctx->r2) {
        // 0x0042ACB4: addiu       $a0, $zero, 0x8F
        ctx->r4 = ADD32(0, 0X8F);
            goto L_0042ACF0;
    }
    goto skip_0;
    // 0x0042ACB4: addiu       $a0, $zero, 0x8F
    ctx->r4 = ADD32(0, 0X8F);
    skip_0:
    // 0x0042ACB8: j           L_0042ACF8
    // 0x0042ACBC: nop

        goto L_0042ACF8;
    // 0x0042ACBC: nop

L_0042ACC0:
    // 0x0042ACC0: addiu       $v0, $zero, 0x1388
    ctx->r2 = ADD32(0, 0X1388);
    // 0x0042ACC4: beq         $v1, $v0, L_0042ACEC
    if (ctx->r3 == ctx->r2) {
        // 0x0042ACC8: addiu       $v0, $zero, 0x1770
        ctx->r2 = ADD32(0, 0X1770);
            goto L_0042ACEC;
    }
    // 0x0042ACC8: addiu       $v0, $zero, 0x1770
    ctx->r2 = ADD32(0, 0X1770);
    // 0x0042ACCC: beql        $v1, $v0, L_0042ACF0
    if (ctx->r3 == ctx->r2) {
        // 0x0042ACD0: addiu       $a0, $zero, 0x92
        ctx->r4 = ADD32(0, 0X92);
            goto L_0042ACF0;
    }
    goto skip_1;
    // 0x0042ACD0: addiu       $a0, $zero, 0x92
    ctx->r4 = ADD32(0, 0X92);
    skip_1:
    // 0x0042ACD4: j           L_0042ACF8
    // 0x0042ACD8: nop

        goto L_0042ACF8;
    // 0x0042ACD8: nop

L_0042ACDC:
    // 0x0042ACDC: j           L_0042ACF0
    // 0x0042ACE0: addiu       $a0, $zero, 0x8E
    ctx->r4 = ADD32(0, 0X8E);
        goto L_0042ACF0;
    // 0x0042ACE0: addiu       $a0, $zero, 0x8E
    ctx->r4 = ADD32(0, 0X8E);
L_0042ACE4:
    // 0x0042ACE4: j           L_0042ACF0
    // 0x0042ACE8: addiu       $a0, $zero, 0x90
    ctx->r4 = ADD32(0, 0X90);
        goto L_0042ACF0;
    // 0x0042ACE8: addiu       $a0, $zero, 0x90
    ctx->r4 = ADD32(0, 0X90);
L_0042ACEC:
    // 0x0042ACEC: addiu       $a0, $zero, 0x91
    ctx->r4 = ADD32(0, 0X91);
L_0042ACF0:
    // 0x0042ACF0: jal         0x00412B28
    // 0x0042ACF4: nop

    func_00412B28(rdram, ctx);
        goto after_3;
    // 0x0042ACF4: nop

    after_3:
L_0042ACF8:
    // 0x0042ACF8: jal         0x00226724
    // 0x0042ACFC: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    func_00226724(rdram, ctx);
        goto after_4;
    // 0x0042ACFC: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    after_4:
    // 0x0042AD00: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x0042AD04: addiu       $a0, $a0, 0x6D68
    ctx->r4 = ADD32(ctx->r4, 0X6D68);
    // 0x0042AD08: jal         0x00201C08
    // 0x0042AD0C: sw          $zero, 0x0($s3)
    MEM_W(0X0, ctx->r19) = 0;
    func_00201C08(rdram, ctx);
        goto after_5;
    // 0x0042AD0C: sw          $zero, 0x0($s3)
    MEM_W(0X0, ctx->r19) = 0;
    after_5:
    // 0x0042AD10: jal         0x002053A8
    // 0x0042AD14: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_002053A8(rdram, ctx);
        goto after_6;
    // 0x0042AD14: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_6:
    // 0x0042AD18: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x0042AD1C: addu        $at, $s3, $at
    ctx->r1 = ADD32(ctx->r19, ctx->r1);
    // 0x0042AD20: lw          $v1, -0x7058($at)
    ctx->r3 = MEM_W(ctx->r1, -0X7058);
    // 0x0042AD24: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x0042AD28: beq         $v1, $v0, L_0042ADE8
    if (ctx->r3 == ctx->r2) {
        // 0x0042AD2C: nop
    
            goto L_0042ADE8;
    }
    // 0x0042AD2C: nop

    // 0x0042AD30: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x0042AD34: addiu       $a0, $a0, -0x6790
    ctx->r4 = ADD32(ctx->r4, -0X6790);
    // 0x0042AD38: jal         0x002532A8
    // 0x0042AD3C: nop

    func_002532A8(rdram, ctx);
        goto after_7;
    // 0x0042AD3C: nop

    after_7:
    // 0x0042AD40: beq         $v0, $zero, L_0042AD50
    if (ctx->r2 == 0) {
        // 0x0042AD44: nop
    
            goto L_0042AD50;
    }
    // 0x0042AD44: nop

    // 0x0042AD48: jal         0x0042EB04
    // 0x0042AD4C: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    func_0042EB04(rdram, ctx);
        goto after_8;
    // 0x0042AD4C: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    after_8:
L_0042AD50:
    // 0x0042AD50: jal         0x00275F7C
    // 0x0042AD54: nop

    func_00275F7C(rdram, ctx);
        goto after_9;
    // 0x0042AD54: nop

    after_9:
    // 0x0042AD58: jal         0x00275EFC
    // 0x0042AD5C: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    func_00275EFC(rdram, ctx);
        goto after_10;
    // 0x0042AD5C: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    after_10:
    // 0x0042AD60: jal         0x00275B58
    // 0x0042AD64: nop

    func_00275B58(rdram, ctx);
        goto after_11;
    // 0x0042AD64: nop

    after_11:
    // 0x0042AD68: jal         0x002758DC
    // 0x0042AD6C: addiu       $a0, $zero, 0x1000
    ctx->r4 = ADD32(0, 0X1000);
    func_002758DC(rdram, ctx);
        goto after_12;
    // 0x0042AD6C: addiu       $a0, $zero, 0x1000
    ctx->r4 = ADD32(0, 0X1000);
    after_12:
    // 0x0042AD70: lw          $a1, 0x98($s3)
    ctx->r5 = MEM_W(ctx->r19, 0X98);
    // 0x0042AD74: jal         0x002052D8
    // 0x0042AD78: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_002052D8(rdram, ctx);
        goto after_13;
    // 0x0042AD78: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_13:
    // 0x0042AD7C: lw          $a1, 0x9C($s3)
    ctx->r5 = MEM_W(ctx->r19, 0X9C);
    // 0x0042AD80: jal         0x002052D8
    // 0x0042AD84: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_002052D8(rdram, ctx);
        goto after_14;
    // 0x0042AD84: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_14:
    // 0x0042AD88: lw          $a1, 0xA0($s3)
    ctx->r5 = MEM_W(ctx->r19, 0XA0);
    // 0x0042AD8C: jal         0x002052D8
    // 0x0042AD90: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_002052D8(rdram, ctx);
        goto after_15;
    // 0x0042AD90: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_15:
    // 0x0042AD94: lw          $a1, 0xA4($s3)
    ctx->r5 = MEM_W(ctx->r19, 0XA4);
    // 0x0042AD98: jal         0x002052D8
    // 0x0042AD9C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_002052D8(rdram, ctx);
        goto after_16;
    // 0x0042AD9C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_16:
    // 0x0042ADA0: lw          $a1, 0xA8($s3)
    ctx->r5 = MEM_W(ctx->r19, 0XA8);
    // 0x0042ADA4: jal         0x002052D8
    // 0x0042ADA8: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_002052D8(rdram, ctx);
        goto after_17;
    // 0x0042ADA8: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_17:
    // 0x0042ADAC: lw          $a1, 0xB0($s3)
    ctx->r5 = MEM_W(ctx->r19, 0XB0);
    // 0x0042ADB0: jal         0x002052D8
    // 0x0042ADB4: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_002052D8(rdram, ctx);
        goto after_18;
    // 0x0042ADB4: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_18:
    // 0x0042ADB8: lw          $a1, 0xB4($s3)
    ctx->r5 = MEM_W(ctx->r19, 0XB4);
    // 0x0042ADBC: jal         0x002052D8
    // 0x0042ADC0: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_002052D8(rdram, ctx);
        goto after_19;
    // 0x0042ADC0: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_19:
    // 0x0042ADC4: lw          $a1, 0xCC($s3)
    ctx->r5 = MEM_W(ctx->r19, 0XCC);
    // 0x0042ADC8: jal         0x002052D8
    // 0x0042ADCC: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_002052D8(rdram, ctx);
        goto after_20;
    // 0x0042ADCC: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_20:
    // 0x0042ADD0: lw          $a1, 0xAC($s3)
    ctx->r5 = MEM_W(ctx->r19, 0XAC);
    // 0x0042ADD4: jal         0x002052D8
    // 0x0042ADD8: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_002052D8(rdram, ctx);
        goto after_21;
    // 0x0042ADD8: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_21:
    // 0x0042ADDC: lw          $a1, 0xC8($s3)
    ctx->r5 = MEM_W(ctx->r19, 0XC8);
    // 0x0042ADE0: jal         0x002052D8
    // 0x0042ADE4: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_002052D8(rdram, ctx);
        goto after_22;
    // 0x0042ADE4: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_22:
L_0042ADE8:
    // 0x0042ADE8: jal         0x002053A8
    // 0x0042ADEC: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_002053A8(rdram, ctx);
        goto after_23;
    // 0x0042ADEC: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_23:
    // 0x0042ADF0: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0042ADF4: sw          $zero, 0x6D20($at)
    MEM_W(0X6D20, ctx->r1) = 0;
    // 0x0042ADF8: jal         0x00206068
    // 0x0042ADFC: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    func_00206068(rdram, ctx);
        goto after_24;
    // 0x0042ADFC: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    after_24:
    // 0x0042AE00: jal         0x00226390
    // 0x0042AE04: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    func_00226390(rdram, ctx);
        goto after_25;
    // 0x0042AE04: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    after_25:
    // 0x0042AE08: lw          $v0, 0x94($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X94);
    // 0x0042AE0C: lw          $a1, 0x0($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X0);
    // 0x0042AE10: jal         0x0042D220
    // 0x0042AE14: addiu       $a0, $s3, 0x18B0
    ctx->r4 = ADD32(ctx->r19, 0X18B0);
    func_0042D220(rdram, ctx);
        goto after_26;
    // 0x0042AE14: addiu       $a0, $s3, 0x18B0
    ctx->r4 = ADD32(ctx->r19, 0X18B0);
    after_26:
    // 0x0042AE18: lui         $a0, 0x1
    ctx->r4 = S32(0X1 << 16);
    // 0x0042AE1C: ori         $a0, $a0, 0x518
    ctx->r4 = ctx->r4 | 0X518;
    // 0x0042AE20: jal         0x0042CF90
    // 0x0042AE24: addu        $a0, $s3, $a0
    ctx->r4 = ADD32(ctx->r19, ctx->r4);
    func_0042CF90(rdram, ctx);
        goto after_27;
    // 0x0042AE24: addu        $a0, $s3, $a0
    ctx->r4 = ADD32(ctx->r19, ctx->r4);
    after_27:
    // 0x0042AE28: lui         $a0, 0x1
    ctx->r4 = S32(0X1 << 16);
    // 0x0042AE2C: ori         $a0, $a0, 0x3B28
    ctx->r4 = ctx->r4 | 0X3B28;
    // 0x0042AE30: jal         0x0042D0A0
    // 0x0042AE34: addu        $a0, $s3, $a0
    ctx->r4 = ADD32(ctx->r19, ctx->r4);
    func_0042D0A0(rdram, ctx);
        goto after_28;
    // 0x0042AE34: addu        $a0, $s3, $a0
    ctx->r4 = ADD32(ctx->r19, ctx->r4);
    after_28:
    // 0x0042AE38: lui         $s0, 0x8011
    ctx->r16 = S32(0X8011 << 16);
    // 0x0042AE3C: addiu       $s0, $s0, 0x2B8
    ctx->r16 = ADD32(ctx->r16, 0X2B8);
    // 0x0042AE40: jal         0x0042D410
    // 0x0042AE44: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_0042D410(rdram, ctx);
        goto after_29;
    // 0x0042AE44: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_29:
    // 0x0042AE48: jal         0x00241860
    // 0x0042AE4C: nop

    entry_00241860(rdram, ctx);
        goto after_30;
    // 0x0042AE4C: nop

    after_30:
    // 0x0042AE50: lui         $a0, 0x1
    ctx->r4 = S32(0X1 << 16);
    // 0x0042AE54: ori         $a0, $a0, 0x8EBC
    ctx->r4 = ctx->r4 | 0X8EBC;
    // 0x0042AE58: jal         0x0042D120
    // 0x0042AE5C: addu        $a0, $s3, $a0
    ctx->r4 = ADD32(ctx->r19, ctx->r4);
    func_0042D120(rdram, ctx);
        goto after_31;
    // 0x0042AE5C: addu        $a0, $s3, $a0
    ctx->r4 = ADD32(ctx->r19, ctx->r4);
    after_31:
    // 0x0042AE60: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x0042AE64: addiu       $a0, $a0, 0x6A90
    ctx->r4 = ADD32(ctx->r4, 0X6A90);
    // 0x0042AE68: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x0042AE6C: addiu       $a1, $a1, 0x68B0
    ctx->r5 = ADD32(ctx->r5, 0X68B0);
    // 0x0042AE70: jal         0x00275BE8
    // 0x0042AE74: addiu       $a2, $zero, 0xF
    ctx->r6 = ADD32(0, 0XF);
    func_00275BE8(rdram, ctx);
        goto after_32;
    // 0x0042AE74: addiu       $a2, $zero, 0xF
    ctx->r6 = ADD32(0, 0XF);
    after_32:
    // 0x0042AE78: jal         0x0042EBBC
    // 0x0042AE7C: addiu       $a0, $s0, -0x1C8
    ctx->r4 = ADD32(ctx->r16, -0X1C8);
    func_0042EBBC(rdram, ctx);
        goto after_33;
    // 0x0042AE7C: addiu       $a0, $s0, -0x1C8
    ctx->r4 = ADD32(ctx->r16, -0X1C8);
    after_33:
    // 0x0042AE80: lw          $v0, 0x38($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X38);
    // 0x0042AE84: lw          $v1, 0x0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X0);
    // 0x0042AE88: slt         $v0, $v1, $s2
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r18) ? 1 : 0;
    // 0x0042AE8C: beq         $v0, $zero, L_0042AE9C
    if (ctx->r2 == 0) {
        // 0x0042AE90: nop
    
            goto L_0042AE9C;
    }
    // 0x0042AE90: nop

    // 0x0042AE94: addiu       $s2, $v1, -0x1
    ctx->r18 = ADD32(ctx->r3, -0X1);
    // 0x0042AE98: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
L_0042AE9C:
    // 0x0042AE9C: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x0042AEA0: addu        $at, $s3, $at
    ctx->r1 = ADD32(ctx->r19, ctx->r1);
    // 0x0042AEA4: sw          $s2, -0x7058($at)
    MEM_W(-0X7058, ctx->r1) = ctx->r18;
    // 0x0042AEA8: bne         $s1, $zero, L_0042AEBC
    if (ctx->r17 != 0) {
        // 0x0042AEAC: lui         $a2, 0x1
        ctx->r6 = S32(0X1 << 16);
            goto L_0042AEBC;
    }
    // 0x0042AEAC: lui         $a2, 0x1
    ctx->r6 = S32(0X1 << 16);
    // 0x0042AEB0: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x0042AEB4: addu        $at, $s3, $at
    ctx->r1 = ADD32(ctx->r19, ctx->r1);
    // 0x0042AEB8: sw          $zero, -0x7048($at)
    MEM_W(-0X7048, ctx->r1) = 0;
L_0042AEBC:
    // 0x0042AEBC: ori         $a2, $a2, 0x8E5C
    ctx->r6 = ctx->r6 | 0X8E5C;
    // 0x0042AEC0: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x0042AEC4: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x0042AEC8: addu        $a2, $s3, $a2
    ctx->r6 = ADD32(ctx->r19, ctx->r6);
    // 0x0042AECC: jal         0x0022629C
    // 0x0042AED0: addiu       $a3, $zero, 0x3F
    ctx->r7 = ADD32(0, 0X3F);
    func_0022629C(rdram, ctx);
        goto after_34;
    // 0x0042AED0: addiu       $a3, $zero, 0x3F
    ctx->r7 = ADD32(0, 0X3F);
    after_34:
    // 0x0042AED4: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x0042AED8: addu        $at, $s3, $at
    ctx->r1 = ADD32(ctx->r19, ctx->r1);
    // 0x0042AEDC: lw          $v1, -0x7030($at)
    ctx->r3 = MEM_W(ctx->r1, -0X7030);
    // 0x0042AEE0: slti        $v0, $v1, 0x1CEA
    ctx->r2 = SIGNED(ctx->r3) < 0X1CEA ? 1 : 0;
    // 0x0042AEE4: beq         $v0, $zero, L_0042AF30
    if (ctx->r2 == 0) {
        // 0x0042AEE8: slti        $v0, $v1, 0x1CE8
        ctx->r2 = SIGNED(ctx->r3) < 0X1CE8 ? 1 : 0;
            goto L_0042AF30;
    }
    // 0x0042AEE8: slti        $v0, $v1, 0x1CE8
    ctx->r2 = SIGNED(ctx->r3) < 0X1CE8 ? 1 : 0;
    // 0x0042AEEC: beq         $v0, $zero, L_0042AF58
    if (ctx->r2 == 0) {
        // 0x0042AEF0: addiu       $v0, $zero, 0x1BBC
        ctx->r2 = ADD32(0, 0X1BBC);
            goto L_0042AF58;
    }
    // 0x0042AEF0: addiu       $v0, $zero, 0x1BBC
    ctx->r2 = ADD32(0, 0X1BBC);
    // 0x0042AEF4: beq         $v1, $v0, L_0042AF58
    if (ctx->r3 == ctx->r2) {
        // 0x0042AEF8: slti        $v0, $v1, 0x1BBD
        ctx->r2 = SIGNED(ctx->r3) < 0X1BBD ? 1 : 0;
            goto L_0042AF58;
    }
    // 0x0042AEF8: slti        $v0, $v1, 0x1BBD
    ctx->r2 = SIGNED(ctx->r3) < 0X1BBD ? 1 : 0;
    // 0x0042AEFC: beq         $v0, $zero, L_0042AF14
    if (ctx->r2 == 0) {
        // 0x0042AF00: addiu       $v0, $zero, 0x123A
        ctx->r2 = ADD32(0, 0X123A);
            goto L_0042AF14;
    }
    // 0x0042AF00: addiu       $v0, $zero, 0x123A
    ctx->r2 = ADD32(0, 0X123A);
    // 0x0042AF04: beq         $v1, $v0, L_0042AF5C
    if (ctx->r3 == ctx->r2) {
        // 0x0042AF08: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_0042AF5C;
    }
    // 0x0042AF08: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0042AF0C: j           L_0042AF70
    // 0x0042AF10: nop

        goto L_0042AF70;
    // 0x0042AF10: nop

L_0042AF14:
    // 0x0042AF14: addiu       $v0, $zero, 0x1C20
    ctx->r2 = ADD32(0, 0X1C20);
    // 0x0042AF18: beq         $v1, $v0, L_0042AF58
    if (ctx->r3 == ctx->r2) {
        // 0x0042AF1C: addiu       $v0, $zero, 0x1C84
        ctx->r2 = ADD32(0, 0X1C84);
            goto L_0042AF58;
    }
    // 0x0042AF1C: addiu       $v0, $zero, 0x1C84
    ctx->r2 = ADD32(0, 0X1C84);
    // 0x0042AF20: beq         $v1, $v0, L_0042AF5C
    if (ctx->r3 == ctx->r2) {
        // 0x0042AF24: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_0042AF5C;
    }
    // 0x0042AF24: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0042AF28: j           L_0042AF70
    // 0x0042AF2C: nop

        goto L_0042AF70;
    // 0x0042AF2C: nop

L_0042AF30:
    // 0x0042AF30: slti        $v0, $v1, 0x1D4C
    ctx->r2 = SIGNED(ctx->r3) < 0X1D4C ? 1 : 0;
    // 0x0042AF34: bne         $v0, $zero, L_0042AF70
    if (ctx->r2 != 0) {
        // 0x0042AF38: slti        $v0, $v1, 0x1D4E
        ctx->r2 = SIGNED(ctx->r3) < 0X1D4E ? 1 : 0;
            goto L_0042AF70;
    }
    // 0x0042AF38: slti        $v0, $v1, 0x1D4E
    ctx->r2 = SIGNED(ctx->r3) < 0X1D4E ? 1 : 0;
    // 0x0042AF3C: bne         $v0, $zero, L_0042AF5C
    if (ctx->r2 != 0) {
        // 0x0042AF40: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_0042AF5C;
    }
    // 0x0042AF40: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0042AF44: slti        $v0, $v1, 0x1DB3
    ctx->r2 = SIGNED(ctx->r3) < 0X1DB3 ? 1 : 0;
    // 0x0042AF48: beq         $v0, $zero, L_0042AF70
    if (ctx->r2 == 0) {
        // 0x0042AF4C: slti        $v0, $v1, 0x1DB1
        ctx->r2 = SIGNED(ctx->r3) < 0X1DB1 ? 1 : 0;
            goto L_0042AF70;
    }
    // 0x0042AF4C: slti        $v0, $v1, 0x1DB1
    ctx->r2 = SIGNED(ctx->r3) < 0X1DB1 ? 1 : 0;
    // 0x0042AF50: bne         $v0, $zero, L_0042AF70
    if (ctx->r2 != 0) {
        // 0x0042AF54: nop
    
            goto L_0042AF70;
    }
    // 0x0042AF54: nop

L_0042AF58:
    // 0x0042AF58: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_0042AF5C:
    // 0x0042AF5C: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x0042AF60: addu        $at, $s3, $at
    ctx->r1 = ADD32(ctx->r19, ctx->r1);
    // 0x0042AF64: sw          $v0, -0x705C($at)
    MEM_W(-0X705C, ctx->r1) = ctx->r2;
    // 0x0042AF68: j           L_0042AF7C
    // 0x0042AF6C: nop

        goto L_0042AF7C;
    // 0x0042AF6C: nop

L_0042AF70:
    // 0x0042AF70: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x0042AF74: addu        $at, $s3, $at
    ctx->r1 = ADD32(ctx->r19, ctx->r1);
    // 0x0042AF78: sw          $zero, -0x705C($at)
    MEM_W(-0X705C, ctx->r1) = 0;
L_0042AF7C:
    // 0x0042AF7C: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x0042AF80: addu        $at, $s3, $at
    ctx->r1 = ADD32(ctx->r19, ctx->r1);
    // 0x0042AF84: lw          $v1, -0x7030($at)
    ctx->r3 = MEM_W(ctx->r1, -0X7030);
    // 0x0042AF88: slti        $v0, $v1, 0x1CEA
    ctx->r2 = SIGNED(ctx->r3) < 0X1CEA ? 1 : 0;
    // 0x0042AF8C: beq         $v0, $zero, L_0042AFD8
    if (ctx->r2 == 0) {
        // 0x0042AF90: slti        $v0, $v1, 0x1CE8
        ctx->r2 = SIGNED(ctx->r3) < 0X1CE8 ? 1 : 0;
            goto L_0042AFD8;
    }
    // 0x0042AF90: slti        $v0, $v1, 0x1CE8
    ctx->r2 = SIGNED(ctx->r3) < 0X1CE8 ? 1 : 0;
    // 0x0042AF94: beq         $v0, $zero, L_0042B010
    if (ctx->r2 == 0) {
        // 0x0042AF98: addiu       $v0, $zero, 0x1BBC
        ctx->r2 = ADD32(0, 0X1BBC);
            goto L_0042B010;
    }
    // 0x0042AF98: addiu       $v0, $zero, 0x1BBC
    ctx->r2 = ADD32(0, 0X1BBC);
    // 0x0042AF9C: beq         $v1, $v0, L_0042B010
    if (ctx->r3 == ctx->r2) {
        // 0x0042AFA0: slti        $v0, $v1, 0x1BBD
        ctx->r2 = SIGNED(ctx->r3) < 0X1BBD ? 1 : 0;
            goto L_0042B010;
    }
    // 0x0042AFA0: slti        $v0, $v1, 0x1BBD
    ctx->r2 = SIGNED(ctx->r3) < 0X1BBD ? 1 : 0;
    // 0x0042AFA4: beq         $v0, $zero, L_0042AFBC
    if (ctx->r2 == 0) {
        // 0x0042AFA8: addiu       $v0, $zero, 0x123A
        ctx->r2 = ADD32(0, 0X123A);
            goto L_0042AFBC;
    }
    // 0x0042AFA8: addiu       $v0, $zero, 0x123A
    ctx->r2 = ADD32(0, 0X123A);
    // 0x0042AFAC: beq         $v1, $v0, L_0042B010
    if (ctx->r3 == ctx->r2) {
        // 0x0042AFB0: addiu       $s0, $zero, 0x320
        ctx->r16 = ADD32(0, 0X320);
            goto L_0042B010;
    }
    // 0x0042AFB0: addiu       $s0, $zero, 0x320
    ctx->r16 = ADD32(0, 0X320);
    // 0x0042AFB4: j           L_0042B024
    // 0x0042AFB8: nop

        goto L_0042B024;
    // 0x0042AFB8: nop

L_0042AFBC:
    // 0x0042AFBC: addiu       $v0, $zero, 0x1C20
    ctx->r2 = ADD32(0, 0X1C20);
    // 0x0042AFC0: beq         $v1, $v0, L_0042B010
    if (ctx->r3 == ctx->r2) {
        // 0x0042AFC4: addiu       $v0, $zero, 0x1C84
        ctx->r2 = ADD32(0, 0X1C84);
            goto L_0042B010;
    }
    // 0x0042AFC4: addiu       $v0, $zero, 0x1C84
    ctx->r2 = ADD32(0, 0X1C84);
    // 0x0042AFC8: beq         $v1, $v0, L_0042B010
    if (ctx->r3 == ctx->r2) {
        // 0x0042AFCC: addiu       $s0, $zero, 0x320
        ctx->r16 = ADD32(0, 0X320);
            goto L_0042B010;
    }
    // 0x0042AFCC: addiu       $s0, $zero, 0x320
    ctx->r16 = ADD32(0, 0X320);
    // 0x0042AFD0: j           L_0042B024
    // 0x0042AFD4: nop

        goto L_0042B024;
    // 0x0042AFD4: nop

L_0042AFD8:
    // 0x0042AFD8: addiu       $v0, $zero, 0x1DB1
    ctx->r2 = ADD32(0, 0X1DB1);
    // 0x0042AFDC: beq         $v1, $v0, L_0042B018
    if (ctx->r3 == ctx->r2) {
        // 0x0042AFE0: slti        $v0, $v1, 0x1DB2
        ctx->r2 = SIGNED(ctx->r3) < 0X1DB2 ? 1 : 0;
            goto L_0042B018;
    }
    // 0x0042AFE0: slti        $v0, $v1, 0x1DB2
    ctx->r2 = SIGNED(ctx->r3) < 0X1DB2 ? 1 : 0;
    // 0x0042AFE4: beq         $v0, $zero, L_0042B004
    if (ctx->r2 == 0) {
        // 0x0042AFE8: slti        $v0, $v1, 0x1D4E
        ctx->r2 = SIGNED(ctx->r3) < 0X1D4E ? 1 : 0;
            goto L_0042B004;
    }
    // 0x0042AFE8: slti        $v0, $v1, 0x1D4E
    ctx->r2 = SIGNED(ctx->r3) < 0X1D4E ? 1 : 0;
    // 0x0042AFEC: beq         $v0, $zero, L_0042B020
    if (ctx->r2 == 0) {
        // 0x0042AFF0: slti        $v0, $v1, 0x1D4C
        ctx->r2 = SIGNED(ctx->r3) < 0X1D4C ? 1 : 0;
            goto L_0042B020;
    }
    // 0x0042AFF0: slti        $v0, $v1, 0x1D4C
    ctx->r2 = SIGNED(ctx->r3) < 0X1D4C ? 1 : 0;
    // 0x0042AFF4: bne         $v0, $zero, L_0042B024
    if (ctx->r2 != 0) {
        // 0x0042AFF8: addiu       $s0, $zero, 0x320
        ctx->r16 = ADD32(0, 0X320);
            goto L_0042B024;
    }
    // 0x0042AFF8: addiu       $s0, $zero, 0x320
    ctx->r16 = ADD32(0, 0X320);
    // 0x0042AFFC: j           L_0042B024
    // 0x0042B000: addiu       $s0, $zero, 0xC80
    ctx->r16 = ADD32(0, 0XC80);
        goto L_0042B024;
    // 0x0042B000: addiu       $s0, $zero, 0xC80
    ctx->r16 = ADD32(0, 0XC80);
L_0042B004:
    // 0x0042B004: addiu       $v0, $zero, 0x1DB2
    ctx->r2 = ADD32(0, 0X1DB2);
    // 0x0042B008: bne         $v1, $v0, L_0042B024
    if (ctx->r3 != ctx->r2) {
        // 0x0042B00C: addiu       $s0, $zero, 0x320
        ctx->r16 = ADD32(0, 0X320);
            goto L_0042B024;
    }
    // 0x0042B00C: addiu       $s0, $zero, 0x320
    ctx->r16 = ADD32(0, 0X320);
L_0042B010:
    // 0x0042B010: j           L_0042B024
    // 0x0042B014: addiu       $s0, $zero, 0xC80
    ctx->r16 = ADD32(0, 0XC80);
        goto L_0042B024;
    // 0x0042B014: addiu       $s0, $zero, 0xC80
    ctx->r16 = ADD32(0, 0XC80);
L_0042B018:
    // 0x0042B018: j           L_0042B024
    // 0x0042B01C: addiu       $s0, $zero, 0x4B0
    ctx->r16 = ADD32(0, 0X4B0);
        goto L_0042B024;
    // 0x0042B01C: addiu       $s0, $zero, 0x4B0
    ctx->r16 = ADD32(0, 0X4B0);
L_0042B020:
    // 0x0042B020: addiu       $s0, $zero, 0x320
    ctx->r16 = ADD32(0, 0X320);
L_0042B024:
    // 0x0042B024: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x0042B028: lbu         $v0, -0x550F($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X550F);
    // 0x0042B02C: bnel        $v0, $zero, L_0042B034
    if (ctx->r2 != 0) {
        // 0x0042B030: addiu       $s0, $s0, 0x200
        ctx->r16 = ADD32(ctx->r16, 0X200);
            goto L_0042B034;
    }
    goto skip_2;
    // 0x0042B030: addiu       $s0, $s0, 0x200
    ctx->r16 = ADD32(ctx->r16, 0X200);
    skip_2:
L_0042B034:
    // 0x0042B034: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0042B038: sll         $a1, $s0, 6
    ctx->r5 = S32(ctx->r16 << 6);
    // 0x0042B03C: lui         $a3, 0x800A
    ctx->r7 = S32(0X800A << 16);
    // 0x0042B040: addiu       $a3, $a3, 0x5EB4
    ctx->r7 = ADD32(ctx->r7, 0X5EB4);
    // 0x0042B044: jal         0x00204EDC
    // 0x0042B048: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    func_00204EDC(rdram, ctx);
        goto after_35;
    // 0x0042B048: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_35:
    // 0x0042B04C: addiu       $a0, $s3, 0xD0
    ctx->r4 = ADD32(ctx->r19, 0XD0);
    // 0x0042B050: sw          $v0, 0xC8($s3)
    MEM_W(0XC8, ctx->r19) = ctx->r2;
    // 0x0042B054: lw          $a1, 0x0($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X0);
    // 0x0042B058: jal         0x00429F20
    // 0x0042B05C: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    func_00429F20(rdram, ctx);
        goto after_36;
    // 0x0042B05C: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    after_36:
    // 0x0042B060: lw          $a0, 0x38($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X38);
    // 0x0042B064: lw          $a1, 0xC($s3)
    ctx->r5 = MEM_W(ctx->r19, 0XC);
    // 0x0042B068: jal         0x00201848
    // 0x0042B06C: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    func_00201848(rdram, ctx);
        goto after_37;
    // 0x0042B06C: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    after_37:
    // 0x0042B070: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0042B074: addiu       $a1, $s3, 0x4C
    ctx->r5 = ADD32(ctx->r19, 0X4C);
    // 0x0042B078: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x0042B07C: lui         $a3, 0x800A
    ctx->r7 = S32(0X800A << 16);
    // 0x0042B080: addiu       $a3, $a3, 0x5EC0
    ctx->r7 = ADD32(ctx->r7, 0X5EC0);
    // 0x0042B084: jal         0x00205B94
    // 0x0042B088: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    func_00205B94(rdram, ctx);
        goto after_38;
    // 0x0042B088: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    after_38:
    // 0x0042B08C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0042B090: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x0042B094: sw          $v0, 0x98($s3)
    MEM_W(0X98, ctx->r19) = ctx->r2;
    // 0x0042B098: lui         $v0, 0x43
    ctx->r2 = S32(0X43 << 16);
    // 0x0042B09C: addiu       $v0, $v0, -0x4950
    ctx->r2 = ADD32(ctx->r2, -0X4950);
    // 0x0042B0A0: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x0042B0A4: lui         $v0, 0x800A
    ctx->r2 = S32(0X800A << 16);
    // 0x0042B0A8: addiu       $v0, $v0, 0x5ECC
    ctx->r2 = ADD32(ctx->r2, 0X5ECC);
    // 0x0042B0AC: sw          $s3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r19;
    // 0x0042B0B0: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x0042B0B4: lw          $a1, 0x4C($s3)
    ctx->r5 = MEM_W(ctx->r19, 0X4C);
    // 0x0042B0B8: jal         0x00205D0C
    // 0x0042B0BC: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    func_00205D0C(rdram, ctx);
        goto after_39;
    // 0x0042B0BC: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    after_39:
    // 0x0042B0C0: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0042B0C4: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x0042B0C8: sw          $v0, 0x9C($s3)
    MEM_W(0X9C, ctx->r19) = ctx->r2;
    // 0x0042B0CC: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x0042B0D0: lui         $s1, 0x20
    ctx->r17 = S32(0X20 << 16);
    // 0x0042B0D4: addiu       $s1, $s1, 0xAE0
    ctx->r17 = ADD32(ctx->r17, 0XAE0);
    // 0x0042B0D8: sw          $v0, 0x58($s3)
    MEM_W(0X58, ctx->r19) = ctx->r2;
    // 0x0042B0DC: lui         $v0, 0x800A
    ctx->r2 = S32(0X800A << 16);
    // 0x0042B0E0: addiu       $v0, $v0, 0x5ED8
    ctx->r2 = ADD32(ctx->r2, 0X5ED8);
    // 0x0042B0E4: sw          $s3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r19;
    // 0x0042B0E8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x0042B0EC: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x0042B0F0: lw          $a1, 0x4C($s3)
    ctx->r5 = MEM_W(ctx->r19, 0X4C);
    // 0x0042B0F4: jal         0x00205D0C
    // 0x0042B0F8: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    func_00205D0C(rdram, ctx);
        goto after_40;
    // 0x0042B0F8: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    after_40:
    // 0x0042B0FC: lw          $a0, 0x4C($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X4C);
    // 0x0042B100: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x0042B104: sw          $v0, 0xA0($s3)
    MEM_W(0XA0, ctx->r19) = ctx->r2;
    // 0x0042B108: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x0042B10C: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    // 0x0042B110: jal         0x00201848
    // 0x0042B114: sw          $v0, 0x54($s3)
    MEM_W(0X54, ctx->r19) = ctx->r2;
    func_00201848(rdram, ctx);
        goto after_41;
    // 0x0042B114: sw          $v0, 0x54($s3)
    MEM_W(0X54, ctx->r19) = ctx->r2;
    after_41:
    // 0x0042B118: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0042B11C: addiu       $a1, $s3, 0x50
    ctx->r5 = ADD32(ctx->r19, 0X50);
    // 0x0042B120: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    // 0x0042B124: lui         $a3, 0x800A
    ctx->r7 = S32(0X800A << 16);
    // 0x0042B128: addiu       $a3, $a3, 0x5EE4
    ctx->r7 = ADD32(ctx->r7, 0X5EE4);
    // 0x0042B12C: jal         0x00205B94
    // 0x0042B130: sw          $a2, 0x20($s3)
    MEM_W(0X20, ctx->r19) = ctx->r6;
    func_00205B94(rdram, ctx);
        goto after_42;
    // 0x0042B130: sw          $a2, 0x20($s3)
    MEM_W(0X20, ctx->r19) = ctx->r6;
    after_42:
    // 0x0042B134: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0042B138: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
    // 0x0042B13C: sw          $v0, 0xA4($s3)
    MEM_W(0XA4, ctx->r19) = ctx->r2;
    // 0x0042B140: lui         $v0, 0x43
    ctx->r2 = S32(0X43 << 16);
    // 0x0042B144: addiu       $v0, $v0, -0x4C1C
    ctx->r2 = ADD32(ctx->r2, -0X4C1C);
    // 0x0042B148: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x0042B14C: lui         $v0, 0x800A
    ctx->r2 = S32(0X800A << 16);
    // 0x0042B150: addiu       $v0, $v0, 0x5EF8
    ctx->r2 = ADD32(ctx->r2, 0X5EF8);
    // 0x0042B154: sw          $s3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r19;
    // 0x0042B158: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x0042B15C: lw          $a1, 0x4C($s3)
    ctx->r5 = MEM_W(ctx->r19, 0X4C);
    // 0x0042B160: jal         0x00205D0C
    // 0x0042B164: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    func_00205D0C(rdram, ctx);
        goto after_43;
    // 0x0042B164: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    after_43:
    // 0x0042B168: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0042B16C: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x0042B170: sw          $v0, 0xB4($s3)
    MEM_W(0XB4, ctx->r19) = ctx->r2;
    // 0x0042B174: lui         $v0, 0x43
    ctx->r2 = S32(0X43 << 16);
    // 0x0042B178: addiu       $v0, $v0, -0x32FC
    ctx->r2 = ADD32(ctx->r2, -0X32FC);
    // 0x0042B17C: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x0042B180: lui         $v0, 0x800A
    ctx->r2 = S32(0X800A << 16);
    // 0x0042B184: addiu       $v0, $v0, 0x5F00
    ctx->r2 = ADD32(ctx->r2, 0X5F00);
    // 0x0042B188: sw          $s3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r19;
    // 0x0042B18C: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x0042B190: lw          $a1, 0x4C($s3)
    ctx->r5 = MEM_W(ctx->r19, 0X4C);
    // 0x0042B194: jal         0x00205D0C
    // 0x0042B198: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    func_00205D0C(rdram, ctx);
        goto after_44;
    // 0x0042B198: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    after_44:
    // 0x0042B19C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0042B1A0: addu        $a2, $a0, $zero
    ctx->r6 = ADD32(ctx->r4, 0);
    // 0x0042B1A4: sw          $v0, 0xCC($s3)
    MEM_W(0XCC, ctx->r19) = ctx->r2;
    // 0x0042B1A8: lui         $v0, 0x800A
    ctx->r2 = S32(0X800A << 16);
    // 0x0042B1AC: addiu       $v0, $v0, 0x5F0C
    ctx->r2 = ADD32(ctx->r2, 0X5F0C);
    // 0x0042B1B0: sw          $s3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r19;
    // 0x0042B1B4: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x0042B1B8: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x0042B1BC: lw          $a1, 0x4C($s3)
    ctx->r5 = MEM_W(ctx->r19, 0X4C);
    // 0x0042B1C0: jal         0x00205D0C
    // 0x0042B1C4: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    func_00205D0C(rdram, ctx);
        goto after_45;
    // 0x0042B1C4: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    after_45:
    // 0x0042B1C8: sw          $v0, 0xA8($s3)
    MEM_W(0XA8, ctx->r19) = ctx->r2;
    // 0x0042B1CC: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x0042B1D0: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x0042B1D4: addu        $at, $s3, $at
    ctx->r1 = ADD32(ctx->r19, ctx->r1);
    // 0x0042B1D8: sw          $v0, -0x71B0($at)
    MEM_W(-0X71B0, ctx->r1) = ctx->r2;
    // 0x0042B1DC: jal         0x0042AA80
    // 0x0042B1E0: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    func_0042AA80(rdram, ctx);
        goto after_46;
    // 0x0042B1E0: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    after_46:
    // 0x0042B1E4: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0042B1E8: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    // 0x0042B1EC: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x0042B1F0: addu        $at, $s3, $at
    ctx->r1 = ADD32(ctx->r19, ctx->r1);
    // 0x0042B1F4: lw          $v0, -0x71B0($at)
    ctx->r2 = MEM_W(ctx->r1, -0X71B0);
    // 0x0042B1F8: lbu         $v1, 0x10($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X10);
    // 0x0042B1FC: lui         $v0, 0x800A
    ctx->r2 = S32(0X800A << 16);
    // 0x0042B200: addiu       $v0, $v0, 0x5F18
    ctx->r2 = ADD32(ctx->r2, 0X5F18);
    // 0x0042B204: sw          $s3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r19;
    // 0x0042B208: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x0042B20C: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x0042B210: lw          $a1, 0x4C($s3)
    ctx->r5 = MEM_W(ctx->r19, 0X4C);
    // 0x0042B214: srl         $v1, $v1, 2
    ctx->r3 = S32(U32(ctx->r3) >> 2);
    // 0x0042B218: andi        $v1, $v1, 0x1
    ctx->r3 = ctx->r3 & 0X1;
    // 0x0042B21C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0042B220: sw          $v1, -0x4760($at)
    MEM_W(-0X4760, ctx->r1) = ctx->r3;
    // 0x0042B224: jal         0x00205D0C
    // 0x0042B228: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    func_00205D0C(rdram, ctx);
        goto after_47;
    // 0x0042B228: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    after_47:
    // 0x0042B22C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0042B230: sw          $v0, 0xAC($s3)
    MEM_W(0XAC, ctx->r19) = ctx->r2;
    // 0x0042B234: lw          $v1, 0x0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X0);
    // 0x0042B238: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x0042B23C: addiu       $v0, $v1, 0x8
    ctx->r2 = ADD32(ctx->r3, 0X8);
    // 0x0042B240: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x0042B244: addu        $at, $s3, $at
    ctx->r1 = ADD32(ctx->r19, ctx->r1);
    // 0x0042B248: sw          $v0, -0x7164($at)
    MEM_W(-0X7164, ctx->r1) = ctx->r2;
    // 0x0042B24C: lw          $v1, 0x4($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X4);
    // 0x0042B250: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0042B254: sw          $v0, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r2;
    // 0x0042B258: lui         $v0, 0x43
    ctx->r2 = S32(0X43 << 16);
    // 0x0042B25C: addiu       $v0, $v0, -0x45C0
    ctx->r2 = ADD32(ctx->r2, -0X45C0);
    // 0x0042B260: sw          $zero, 0xE0($s3)
    MEM_W(0XE0, ctx->r19) = 0;
    // 0x0042B264: sw          $zero, 0xE8($s3)
    MEM_W(0XE8, ctx->r19) = 0;
    // 0x0042B268: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x0042B26C: addu        $at, $s3, $at
    ctx->r1 = ADD32(ctx->r19, ctx->r1);
    // 0x0042B270: sw          $v1, -0x7160($at)
    MEM_W(-0X7160, ctx->r1) = ctx->r3;
    // 0x0042B274: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x0042B278: lui         $v0, 0x800A
    ctx->r2 = S32(0X800A << 16);
    // 0x0042B27C: addiu       $v0, $v0, 0x5F24
    ctx->r2 = ADD32(ctx->r2, 0X5F24);
    // 0x0042B280: sw          $s3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r19;
    // 0x0042B284: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x0042B288: lw          $a1, 0x4C($s3)
    ctx->r5 = MEM_W(ctx->r19, 0X4C);
    // 0x0042B28C: jal         0x00205D0C
    // 0x0042B290: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    func_00205D0C(rdram, ctx);
        goto after_48;
    // 0x0042B290: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    after_48:
    // 0x0042B294: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x0042B298: sw          $v0, 0xB0($s3)
    MEM_W(0XB0, ctx->r19) = ctx->r2;
    // 0x0042B29C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x0042B2A0: jal         0x0042C79C
    // 0x0042B2A4: sw          $v0, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r2;
    func_0042C79C(rdram, ctx);
        goto after_49;
    // 0x0042B2A4: sw          $v0, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r2;
    after_49:
    // 0x0042B2A8: lw          $s4, 0xE8($s3)
    ctx->r20 = MEM_W(ctx->r19, 0XE8);
    // 0x0042B2AC: lw          $s1, 0xE4($s3)
    ctx->r17 = MEM_W(ctx->r19, 0XE4);
    // 0x0042B2B0: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x0042B2B4: sw          $v0, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r2;
    // 0x0042B2B8: slt         $v0, $s1, $s4
    ctx->r2 = SIGNED(ctx->r17) < SIGNED(ctx->r20) ? 1 : 0;
    // 0x0042B2BC: beq         $v0, $zero, L_0042B2F0
    if (ctx->r2 == 0) {
        // 0x0042B2C0: sll         $v0, $s1, 2
        ctx->r2 = S32(ctx->r17 << 2);
            goto L_0042B2F0;
    }
    // 0x0042B2C0: sll         $v0, $s1, 2
    ctx->r2 = S32(ctx->r17 << 2);
    // 0x0042B2C4: addu        $v0, $v0, $s1
    ctx->r2 = ADD32(ctx->r2, ctx->r17);
    // 0x0042B2C8: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x0042B2CC: addu        $v0, $v0, $s1
    ctx->r2 = ADD32(ctx->r2, ctx->r17);
    // 0x0042B2D0: sll         $s0, $v0, 3
    ctx->r16 = S32(ctx->r2 << 3);
L_0042B2D4:
    // 0x0042B2D4: lw          $a0, 0xE0($s3)
    ctx->r4 = MEM_W(ctx->r19, 0XE0);
    // 0x0042B2D8: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x0042B2DC: jal         0x0021E5D4
    // 0x0042B2E0: addu        $a0, $a0, $s0
    ctx->r4 = ADD32(ctx->r4, ctx->r16);
    func_0021E5D4(rdram, ctx);
        goto after_50;
    // 0x0042B2E0: addu        $a0, $a0, $s0
    ctx->r4 = ADD32(ctx->r4, ctx->r16);
    after_50:
    // 0x0042B2E4: slt         $v0, $s1, $s4
    ctx->r2 = SIGNED(ctx->r17) < SIGNED(ctx->r20) ? 1 : 0;
    // 0x0042B2E8: bne         $v0, $zero, L_0042B2D4
    if (ctx->r2 != 0) {
        // 0x0042B2EC: addiu       $s0, $s0, 0x288
        ctx->r16 = ADD32(ctx->r16, 0X288);
            goto L_0042B2D4;
    }
    // 0x0042B2EC: addiu       $s0, $s0, 0x288
    ctx->r16 = ADD32(ctx->r16, 0X288);
L_0042B2F0:
    // 0x0042B2F0: lui         $s1, 0x8012
    ctx->r17 = S32(0X8012 << 16);
    // 0x0042B2F4: lw          $s1, -0x6770($s1)
    ctx->r17 = MEM_W(ctx->r17, -0X6770);
    // 0x0042B2F8: beq         $s1, $zero, L_0042B31C
    if (ctx->r17 == 0) {
        // 0x0042B2FC: addu        $s0, $s1, $zero
        ctx->r16 = ADD32(ctx->r17, 0);
            goto L_0042B31C;
    }
    // 0x0042B2FC: addu        $s0, $s1, $zero
    ctx->r16 = ADD32(ctx->r17, 0);
L_0042B300:
    // 0x0042B300: jal         0x0021E5D4
    // 0x0042B304: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_0021E5D4(rdram, ctx);
        goto after_51;
    // 0x0042B304: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_51:
    // 0x0042B308: jal         0x0021E5D4
    // 0x0042B30C: addiu       $a0, $s0, 0x288
    ctx->r4 = ADD32(ctx->r16, 0X288);
    func_0021E5D4(rdram, ctx);
        goto after_52;
    // 0x0042B30C: addiu       $a0, $s0, 0x288
    ctx->r4 = ADD32(ctx->r16, 0X288);
    after_52:
    // 0x0042B310: lw          $s1, 0x1320($s1)
    ctx->r17 = MEM_W(ctx->r17, 0X1320);
    // 0x0042B314: bne         $s1, $zero, L_0042B300
    if (ctx->r17 != 0) {
        // 0x0042B318: addu        $s0, $s1, $zero
        ctx->r16 = ADD32(ctx->r17, 0);
            goto L_0042B300;
    }
    // 0x0042B318: addu        $s0, $s1, $zero
    ctx->r16 = ADD32(ctx->r17, 0);
L_0042B31C:
    // 0x0042B31C: jal         0x0042C840
    // 0x0042B320: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    func_0042C840(rdram, ctx);
        goto after_53;
    // 0x0042B320: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    after_53:
    // 0x0042B324: lw          $s4, 0xE8($s3)
    ctx->r20 = MEM_W(ctx->r19, 0XE8);
    // 0x0042B328: lw          $s1, 0xE4($s3)
    ctx->r17 = MEM_W(ctx->r19, 0XE4);
    // 0x0042B32C: slt         $v0, $s1, $s4
    ctx->r2 = SIGNED(ctx->r17) < SIGNED(ctx->r20) ? 1 : 0;
    // 0x0042B330: beq         $v0, $zero, L_0042B370
    if (ctx->r2 == 0) {
        // 0x0042B334: sll         $v0, $s1, 2
        ctx->r2 = S32(ctx->r17 << 2);
            goto L_0042B370;
    }
    // 0x0042B334: sll         $v0, $s1, 2
    ctx->r2 = S32(ctx->r17 << 2);
    // 0x0042B338: addu        $v0, $v0, $s1
    ctx->r2 = ADD32(ctx->r2, ctx->r17);
    // 0x0042B33C: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x0042B340: addu        $v0, $v0, $s1
    ctx->r2 = ADD32(ctx->r2, ctx->r17);
    // 0x0042B344: sll         $s2, $v0, 3
    ctx->r18 = S32(ctx->r2 << 3);
L_0042B348:
    // 0x0042B348: lw          $v0, 0xE0($s3)
    ctx->r2 = MEM_W(ctx->r19, 0XE0);
    // 0x0042B34C: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x0042B350: addu        $s0, $v0, $s2
    ctx->r16 = ADD32(ctx->r2, ctx->r18);
    // 0x0042B354: jal         0x0021F1B4
    // 0x0042B358: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_0021F1B4(rdram, ctx);
        goto after_54;
    // 0x0042B358: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_54:
    // 0x0042B35C: jal         0x0021A344
    // 0x0042B360: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_0021A344(rdram, ctx);
        goto after_55;
    // 0x0042B360: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_55:
    // 0x0042B364: slt         $v0, $s1, $s4
    ctx->r2 = SIGNED(ctx->r17) < SIGNED(ctx->r20) ? 1 : 0;
    // 0x0042B368: bne         $v0, $zero, L_0042B348
    if (ctx->r2 != 0) {
        // 0x0042B36C: addiu       $s2, $s2, 0x288
        ctx->r18 = ADD32(ctx->r18, 0X288);
            goto L_0042B348;
    }
    // 0x0042B36C: addiu       $s2, $s2, 0x288
    ctx->r18 = ADD32(ctx->r18, 0X288);
L_0042B370:
    // 0x0042B370: lui         $s1, 0x8012
    ctx->r17 = S32(0X8012 << 16);
    // 0x0042B374: addiu       $s1, $s1, -0x6790
    ctx->r17 = ADD32(ctx->r17, -0X6790);
    // 0x0042B378: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0042B37C: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x0042B380: jal         0x0042E894
    // 0x0042B384: sw          $v0, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r2;
    func_0042E894(rdram, ctx);
        goto after_56;
    // 0x0042B384: sw          $v0, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r2;
    after_56:
    // 0x0042B388: addiu       $s0, $s1, 0x40
    ctx->r16 = ADD32(ctx->r17, 0X40);
    // 0x0042B38C: jal         0x0042FEEC
    // 0x0042B390: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_0042FEEC(rdram, ctx);
        goto after_57;
    // 0x0042B390: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_57:
    // 0x0042B394: jal         0x0027ECF0
    // 0x0042B398: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_0027ECF0(rdram, ctx);
        goto after_58;
    // 0x0042B398: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_58:
    // 0x0042B39C: lbu         $v0, 0x1281($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X1281);
    // 0x0042B3A0: bne         $v0, $zero, L_0042B3BC
    if (ctx->r2 != 0) {
        // 0x0042B3A4: nop
    
            goto L_0042B3BC;
    }
    // 0x0042B3A4: nop

    // 0x0042B3A8: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x0042B3AC: addu        $at, $s3, $at
    ctx->r1 = ADD32(ctx->r19, ctx->r1);
    // 0x0042B3B0: lw          $v0, -0x705C($at)
    ctx->r2 = MEM_W(ctx->r1, -0X705C);
    // 0x0042B3B4: beq         $v0, $zero, L_0042B3C4
    if (ctx->r2 == 0) {
        // 0x0042B3B8: nop
    
            goto L_0042B3C4;
    }
    // 0x0042B3B8: nop

L_0042B3BC:
    // 0x0042B3BC: jal         0x0042BF48
    // 0x0042B3C0: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    func_0042BF48(rdram, ctx);
        goto after_59;
    // 0x0042B3C0: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    after_59:
L_0042B3C4:
    // 0x0042B3C4: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x0042B3C8: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x0042B3CC: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x0042B3D0: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x0042B3D4: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x0042B3D8: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x0042B3DC: jr          $ra
    // 0x0042B3E0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x0042B3E0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void entry_0042AE90(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0042AE90: nop

    // 0x0042AE94: addiu       $s2, $v1, -0x1
    ctx->r18 = ADD32(ctx->r3, -0X1);
    // 0x0042AE98: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x0042AE9C: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x0042AEA0: addu        $at, $s3, $at
    ctx->r1 = ADD32(ctx->r19, ctx->r1);
    // 0x0042AEA4: sw          $s2, -0x7058($at)
    MEM_W(-0X7058, ctx->r1) = ctx->r18;
    // 0x0042AEA8: bne         $s1, $zero, L_0042AEBC
    if (ctx->r17 != 0) {
        // 0x0042AEAC: lui         $a2, 0x1
        ctx->r6 = S32(0X1 << 16);
            goto L_0042AEBC;
    }
    // 0x0042AEAC: lui         $a2, 0x1
    ctx->r6 = S32(0X1 << 16);
    // 0x0042AEB0: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x0042AEB4: addu        $at, $s3, $at
    ctx->r1 = ADD32(ctx->r19, ctx->r1);
    // 0x0042AEB8: sw          $zero, -0x7048($at)
    MEM_W(-0X7048, ctx->r1) = 0;
L_0042AEBC:
    // 0x0042AEBC: ori         $a2, $a2, 0x8E5C
    ctx->r6 = ctx->r6 | 0X8E5C;
    // 0x0042AEC0: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x0042AEC4: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x0042AEC8: addu        $a2, $s3, $a2
    ctx->r6 = ADD32(ctx->r19, ctx->r6);
    // 0x0042AECC: jal         0x0022629C
    // 0x0042AED0: addiu       $a3, $zero, 0x3F
    ctx->r7 = ADD32(0, 0X3F);
    func_0022629C(rdram, ctx);
        goto after_0;
    // 0x0042AED0: addiu       $a3, $zero, 0x3F
    ctx->r7 = ADD32(0, 0X3F);
    after_0:
    // 0x0042AED4: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x0042AED8: addu        $at, $s3, $at
    ctx->r1 = ADD32(ctx->r19, ctx->r1);
    // 0x0042AEDC: lw          $v1, -0x7030($at)
    ctx->r3 = MEM_W(ctx->r1, -0X7030);
    // 0x0042AEE0: slti        $v0, $v1, 0x1CEA
    ctx->r2 = SIGNED(ctx->r3) < 0X1CEA ? 1 : 0;
    // 0x0042AEE4: beq         $v0, $zero, L_0042AF30
    if (ctx->r2 == 0) {
        // 0x0042AEE8: slti        $v0, $v1, 0x1CE8
        ctx->r2 = SIGNED(ctx->r3) < 0X1CE8 ? 1 : 0;
            goto L_0042AF30;
    }
    // 0x0042AEE8: slti        $v0, $v1, 0x1CE8
    ctx->r2 = SIGNED(ctx->r3) < 0X1CE8 ? 1 : 0;
    // 0x0042AEEC: beq         $v0, $zero, L_0042AF58
    if (ctx->r2 == 0) {
        // 0x0042AEF0: addiu       $v0, $zero, 0x1BBC
        ctx->r2 = ADD32(0, 0X1BBC);
            goto L_0042AF58;
    }
    // 0x0042AEF0: addiu       $v0, $zero, 0x1BBC
    ctx->r2 = ADD32(0, 0X1BBC);
    // 0x0042AEF4: beq         $v1, $v0, L_0042AF58
    if (ctx->r3 == ctx->r2) {
        // 0x0042AEF8: slti        $v0, $v1, 0x1BBD
        ctx->r2 = SIGNED(ctx->r3) < 0X1BBD ? 1 : 0;
            goto L_0042AF58;
    }
    // 0x0042AEF8: slti        $v0, $v1, 0x1BBD
    ctx->r2 = SIGNED(ctx->r3) < 0X1BBD ? 1 : 0;
    // 0x0042AEFC: beq         $v0, $zero, L_0042AF14
    if (ctx->r2 == 0) {
        // 0x0042AF00: addiu       $v0, $zero, 0x123A
        ctx->r2 = ADD32(0, 0X123A);
            goto L_0042AF14;
    }
    // 0x0042AF00: addiu       $v0, $zero, 0x123A
    ctx->r2 = ADD32(0, 0X123A);
    // 0x0042AF04: beq         $v1, $v0, L_0042AF5C
    if (ctx->r3 == ctx->r2) {
        // 0x0042AF08: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_0042AF5C;
    }
    // 0x0042AF08: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0042AF0C: j           L_0042AF70
    // 0x0042AF10: nop

        goto L_0042AF70;
    // 0x0042AF10: nop

L_0042AF14:
    // 0x0042AF14: addiu       $v0, $zero, 0x1C20
    ctx->r2 = ADD32(0, 0X1C20);
    // 0x0042AF18: beq         $v1, $v0, L_0042AF58
    if (ctx->r3 == ctx->r2) {
        // 0x0042AF1C: addiu       $v0, $zero, 0x1C84
        ctx->r2 = ADD32(0, 0X1C84);
            goto L_0042AF58;
    }
    // 0x0042AF1C: addiu       $v0, $zero, 0x1C84
    ctx->r2 = ADD32(0, 0X1C84);
    // 0x0042AF20: beq         $v1, $v0, L_0042AF5C
    if (ctx->r3 == ctx->r2) {
        // 0x0042AF24: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_0042AF5C;
    }
    // 0x0042AF24: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0042AF28: j           L_0042AF70
    // 0x0042AF2C: nop

        goto L_0042AF70;
    // 0x0042AF2C: nop

L_0042AF30:
    // 0x0042AF30: slti        $v0, $v1, 0x1D4C
    ctx->r2 = SIGNED(ctx->r3) < 0X1D4C ? 1 : 0;
    // 0x0042AF34: bne         $v0, $zero, L_0042AF70
    if (ctx->r2 != 0) {
        // 0x0042AF38: slti        $v0, $v1, 0x1D4E
        ctx->r2 = SIGNED(ctx->r3) < 0X1D4E ? 1 : 0;
            goto L_0042AF70;
    }
    // 0x0042AF38: slti        $v0, $v1, 0x1D4E
    ctx->r2 = SIGNED(ctx->r3) < 0X1D4E ? 1 : 0;
    // 0x0042AF3C: bne         $v0, $zero, L_0042AF5C
    if (ctx->r2 != 0) {
        // 0x0042AF40: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_0042AF5C;
    }
    // 0x0042AF40: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0042AF44: slti        $v0, $v1, 0x1DB3
    ctx->r2 = SIGNED(ctx->r3) < 0X1DB3 ? 1 : 0;
    // 0x0042AF48: beq         $v0, $zero, L_0042AF70
    if (ctx->r2 == 0) {
        // 0x0042AF4C: slti        $v0, $v1, 0x1DB1
        ctx->r2 = SIGNED(ctx->r3) < 0X1DB1 ? 1 : 0;
            goto L_0042AF70;
    }
    // 0x0042AF4C: slti        $v0, $v1, 0x1DB1
    ctx->r2 = SIGNED(ctx->r3) < 0X1DB1 ? 1 : 0;
    // 0x0042AF50: bne         $v0, $zero, L_0042AF70
    if (ctx->r2 != 0) {
        // 0x0042AF54: nop
    
            goto L_0042AF70;
    }
    // 0x0042AF54: nop

L_0042AF58:
    // 0x0042AF58: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_0042AF5C:
    // 0x0042AF5C: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x0042AF60: addu        $at, $s3, $at
    ctx->r1 = ADD32(ctx->r19, ctx->r1);
    // 0x0042AF64: sw          $v0, -0x705C($at)
    MEM_W(-0X705C, ctx->r1) = ctx->r2;
    // 0x0042AF68: j           L_0042AF7C
    // 0x0042AF6C: nop

        goto L_0042AF7C;
    // 0x0042AF6C: nop

L_0042AF70:
    // 0x0042AF70: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x0042AF74: addu        $at, $s3, $at
    ctx->r1 = ADD32(ctx->r19, ctx->r1);
    // 0x0042AF78: sw          $zero, -0x705C($at)
    MEM_W(-0X705C, ctx->r1) = 0;
L_0042AF7C:
    // 0x0042AF7C: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x0042AF80: addu        $at, $s3, $at
    ctx->r1 = ADD32(ctx->r19, ctx->r1);
    // 0x0042AF84: lw          $v1, -0x7030($at)
    ctx->r3 = MEM_W(ctx->r1, -0X7030);
    // 0x0042AF88: slti        $v0, $v1, 0x1CEA
    ctx->r2 = SIGNED(ctx->r3) < 0X1CEA ? 1 : 0;
    // 0x0042AF8C: beq         $v0, $zero, L_0042AFD8
    if (ctx->r2 == 0) {
        // 0x0042AF90: slti        $v0, $v1, 0x1CE8
        ctx->r2 = SIGNED(ctx->r3) < 0X1CE8 ? 1 : 0;
            goto L_0042AFD8;
    }
    // 0x0042AF90: slti        $v0, $v1, 0x1CE8
    ctx->r2 = SIGNED(ctx->r3) < 0X1CE8 ? 1 : 0;
    // 0x0042AF94: beq         $v0, $zero, L_0042B010
    if (ctx->r2 == 0) {
        // 0x0042AF98: addiu       $v0, $zero, 0x1BBC
        ctx->r2 = ADD32(0, 0X1BBC);
            goto L_0042B010;
    }
    // 0x0042AF98: addiu       $v0, $zero, 0x1BBC
    ctx->r2 = ADD32(0, 0X1BBC);
    // 0x0042AF9C: beq         $v1, $v0, L_0042B010
    if (ctx->r3 == ctx->r2) {
        // 0x0042AFA0: slti        $v0, $v1, 0x1BBD
        ctx->r2 = SIGNED(ctx->r3) < 0X1BBD ? 1 : 0;
            goto L_0042B010;
    }
    // 0x0042AFA0: slti        $v0, $v1, 0x1BBD
    ctx->r2 = SIGNED(ctx->r3) < 0X1BBD ? 1 : 0;
    // 0x0042AFA4: beq         $v0, $zero, L_0042AFBC
    if (ctx->r2 == 0) {
        // 0x0042AFA8: addiu       $v0, $zero, 0x123A
        ctx->r2 = ADD32(0, 0X123A);
            goto L_0042AFBC;
    }
    // 0x0042AFA8: addiu       $v0, $zero, 0x123A
    ctx->r2 = ADD32(0, 0X123A);
    // 0x0042AFAC: beq         $v1, $v0, L_0042B010
    if (ctx->r3 == ctx->r2) {
        // 0x0042AFB0: addiu       $s0, $zero, 0x320
        ctx->r16 = ADD32(0, 0X320);
            goto L_0042B010;
    }
    // 0x0042AFB0: addiu       $s0, $zero, 0x320
    ctx->r16 = ADD32(0, 0X320);
    // 0x0042AFB4: j           L_0042B024
    // 0x0042AFB8: nop

        goto L_0042B024;
    // 0x0042AFB8: nop

L_0042AFBC:
    // 0x0042AFBC: addiu       $v0, $zero, 0x1C20
    ctx->r2 = ADD32(0, 0X1C20);
    // 0x0042AFC0: beq         $v1, $v0, L_0042B010
    if (ctx->r3 == ctx->r2) {
        // 0x0042AFC4: addiu       $v0, $zero, 0x1C84
        ctx->r2 = ADD32(0, 0X1C84);
            goto L_0042B010;
    }
    // 0x0042AFC4: addiu       $v0, $zero, 0x1C84
    ctx->r2 = ADD32(0, 0X1C84);
    // 0x0042AFC8: beq         $v1, $v0, L_0042B010
    if (ctx->r3 == ctx->r2) {
        // 0x0042AFCC: addiu       $s0, $zero, 0x320
        ctx->r16 = ADD32(0, 0X320);
            goto L_0042B010;
    }
    // 0x0042AFCC: addiu       $s0, $zero, 0x320
    ctx->r16 = ADD32(0, 0X320);
    // 0x0042AFD0: j           L_0042B024
    // 0x0042AFD4: nop

        goto L_0042B024;
    // 0x0042AFD4: nop

L_0042AFD8:
    // 0x0042AFD8: addiu       $v0, $zero, 0x1DB1
    ctx->r2 = ADD32(0, 0X1DB1);
    // 0x0042AFDC: beq         $v1, $v0, L_0042B018
    if (ctx->r3 == ctx->r2) {
        // 0x0042AFE0: slti        $v0, $v1, 0x1DB2
        ctx->r2 = SIGNED(ctx->r3) < 0X1DB2 ? 1 : 0;
            goto L_0042B018;
    }
    // 0x0042AFE0: slti        $v0, $v1, 0x1DB2
    ctx->r2 = SIGNED(ctx->r3) < 0X1DB2 ? 1 : 0;
    // 0x0042AFE4: beq         $v0, $zero, L_0042B004
    if (ctx->r2 == 0) {
        // 0x0042AFE8: slti        $v0, $v1, 0x1D4E
        ctx->r2 = SIGNED(ctx->r3) < 0X1D4E ? 1 : 0;
            goto L_0042B004;
    }
    // 0x0042AFE8: slti        $v0, $v1, 0x1D4E
    ctx->r2 = SIGNED(ctx->r3) < 0X1D4E ? 1 : 0;
    // 0x0042AFEC: beq         $v0, $zero, L_0042B020
    if (ctx->r2 == 0) {
        // 0x0042AFF0: slti        $v0, $v1, 0x1D4C
        ctx->r2 = SIGNED(ctx->r3) < 0X1D4C ? 1 : 0;
            goto L_0042B020;
    }
    // 0x0042AFF0: slti        $v0, $v1, 0x1D4C
    ctx->r2 = SIGNED(ctx->r3) < 0X1D4C ? 1 : 0;
    // 0x0042AFF4: bne         $v0, $zero, L_0042B024
    if (ctx->r2 != 0) {
        // 0x0042AFF8: addiu       $s0, $zero, 0x320
        ctx->r16 = ADD32(0, 0X320);
            goto L_0042B024;
    }
    // 0x0042AFF8: addiu       $s0, $zero, 0x320
    ctx->r16 = ADD32(0, 0X320);
    // 0x0042AFFC: j           L_0042B024
    // 0x0042B000: addiu       $s0, $zero, 0xC80
    ctx->r16 = ADD32(0, 0XC80);
        goto L_0042B024;
    // 0x0042B000: addiu       $s0, $zero, 0xC80
    ctx->r16 = ADD32(0, 0XC80);
L_0042B004:
    // 0x0042B004: addiu       $v0, $zero, 0x1DB2
    ctx->r2 = ADD32(0, 0X1DB2);
    // 0x0042B008: bne         $v1, $v0, L_0042B024
    if (ctx->r3 != ctx->r2) {
        // 0x0042B00C: addiu       $s0, $zero, 0x320
        ctx->r16 = ADD32(0, 0X320);
            goto L_0042B024;
    }
    // 0x0042B00C: addiu       $s0, $zero, 0x320
    ctx->r16 = ADD32(0, 0X320);
L_0042B010:
    // 0x0042B010: j           L_0042B024
    // 0x0042B014: addiu       $s0, $zero, 0xC80
    ctx->r16 = ADD32(0, 0XC80);
        goto L_0042B024;
    // 0x0042B014: addiu       $s0, $zero, 0xC80
    ctx->r16 = ADD32(0, 0XC80);
L_0042B018:
    // 0x0042B018: j           L_0042B024
    // 0x0042B01C: addiu       $s0, $zero, 0x4B0
    ctx->r16 = ADD32(0, 0X4B0);
        goto L_0042B024;
    // 0x0042B01C: addiu       $s0, $zero, 0x4B0
    ctx->r16 = ADD32(0, 0X4B0);
L_0042B020:
    // 0x0042B020: addiu       $s0, $zero, 0x320
    ctx->r16 = ADD32(0, 0X320);
L_0042B024:
    // 0x0042B024: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x0042B028: lbu         $v0, -0x550F($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X550F);
    // 0x0042B02C: bnel        $v0, $zero, L_0042B034
    if (ctx->r2 != 0) {
        // 0x0042B030: addiu       $s0, $s0, 0x200
        ctx->r16 = ADD32(ctx->r16, 0X200);
            goto L_0042B034;
    }
    goto skip_0;
    // 0x0042B030: addiu       $s0, $s0, 0x200
    ctx->r16 = ADD32(ctx->r16, 0X200);
    skip_0:
L_0042B034:
    // 0x0042B034: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0042B038: sll         $a1, $s0, 6
    ctx->r5 = S32(ctx->r16 << 6);
    // 0x0042B03C: lui         $a3, 0x800A
    ctx->r7 = S32(0X800A << 16);
    // 0x0042B040: addiu       $a3, $a3, 0x5EB4
    ctx->r7 = ADD32(ctx->r7, 0X5EB4);
    // 0x0042B044: jal         0x00204EDC
    // 0x0042B048: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    func_00204EDC(rdram, ctx);
        goto after_1;
    // 0x0042B048: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_1:
    // 0x0042B04C: addiu       $a0, $s3, 0xD0
    ctx->r4 = ADD32(ctx->r19, 0XD0);
    // 0x0042B050: sw          $v0, 0xC8($s3)
    MEM_W(0XC8, ctx->r19) = ctx->r2;
    // 0x0042B054: lw          $a1, 0x0($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X0);
    // 0x0042B058: jal         0x00429F20
    // 0x0042B05C: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    func_00429F20(rdram, ctx);
        goto after_2;
    // 0x0042B05C: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    after_2:
    // 0x0042B060: lw          $a0, 0x38($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X38);
    // 0x0042B064: lw          $a1, 0xC($s3)
    ctx->r5 = MEM_W(ctx->r19, 0XC);
    // 0x0042B068: jal         0x00201848
    // 0x0042B06C: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    func_00201848(rdram, ctx);
        goto after_3;
    // 0x0042B06C: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    after_3:
    // 0x0042B070: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0042B074: addiu       $a1, $s3, 0x4C
    ctx->r5 = ADD32(ctx->r19, 0X4C);
    // 0x0042B078: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x0042B07C: lui         $a3, 0x800A
    ctx->r7 = S32(0X800A << 16);
    // 0x0042B080: addiu       $a3, $a3, 0x5EC0
    ctx->r7 = ADD32(ctx->r7, 0X5EC0);
    // 0x0042B084: jal         0x00205B94
    // 0x0042B088: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    func_00205B94(rdram, ctx);
        goto after_4;
    // 0x0042B088: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    after_4:
    // 0x0042B08C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0042B090: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x0042B094: sw          $v0, 0x98($s3)
    MEM_W(0X98, ctx->r19) = ctx->r2;
    // 0x0042B098: lui         $v0, 0x43
    ctx->r2 = S32(0X43 << 16);
    // 0x0042B09C: addiu       $v0, $v0, -0x4950
    ctx->r2 = ADD32(ctx->r2, -0X4950);
    // 0x0042B0A0: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x0042B0A4: lui         $v0, 0x800A
    ctx->r2 = S32(0X800A << 16);
    // 0x0042B0A8: addiu       $v0, $v0, 0x5ECC
    ctx->r2 = ADD32(ctx->r2, 0X5ECC);
    // 0x0042B0AC: sw          $s3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r19;
    // 0x0042B0B0: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x0042B0B4: lw          $a1, 0x4C($s3)
    ctx->r5 = MEM_W(ctx->r19, 0X4C);
    // 0x0042B0B8: jal         0x00205D0C
    // 0x0042B0BC: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    func_00205D0C(rdram, ctx);
        goto after_5;
    // 0x0042B0BC: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    after_5:
    // 0x0042B0C0: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0042B0C4: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x0042B0C8: sw          $v0, 0x9C($s3)
    MEM_W(0X9C, ctx->r19) = ctx->r2;
    // 0x0042B0CC: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x0042B0D0: lui         $s1, 0x20
    ctx->r17 = S32(0X20 << 16);
    // 0x0042B0D4: addiu       $s1, $s1, 0xAE0
    ctx->r17 = ADD32(ctx->r17, 0XAE0);
    // 0x0042B0D8: sw          $v0, 0x58($s3)
    MEM_W(0X58, ctx->r19) = ctx->r2;
    // 0x0042B0DC: lui         $v0, 0x800A
    ctx->r2 = S32(0X800A << 16);
    // 0x0042B0E0: addiu       $v0, $v0, 0x5ED8
    ctx->r2 = ADD32(ctx->r2, 0X5ED8);
    // 0x0042B0E4: sw          $s3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r19;
    // 0x0042B0E8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x0042B0EC: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x0042B0F0: lw          $a1, 0x4C($s3)
    ctx->r5 = MEM_W(ctx->r19, 0X4C);
    // 0x0042B0F4: jal         0x00205D0C
    // 0x0042B0F8: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    func_00205D0C(rdram, ctx);
        goto after_6;
    // 0x0042B0F8: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    after_6:
    // 0x0042B0FC: lw          $a0, 0x4C($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X4C);
    // 0x0042B100: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x0042B104: sw          $v0, 0xA0($s3)
    MEM_W(0XA0, ctx->r19) = ctx->r2;
    // 0x0042B108: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x0042B10C: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    // 0x0042B110: jal         0x00201848
    // 0x0042B114: sw          $v0, 0x54($s3)
    MEM_W(0X54, ctx->r19) = ctx->r2;
    func_00201848(rdram, ctx);
        goto after_7;
    // 0x0042B114: sw          $v0, 0x54($s3)
    MEM_W(0X54, ctx->r19) = ctx->r2;
    after_7:
    // 0x0042B118: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0042B11C: addiu       $a1, $s3, 0x50
    ctx->r5 = ADD32(ctx->r19, 0X50);
    // 0x0042B120: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    // 0x0042B124: lui         $a3, 0x800A
    ctx->r7 = S32(0X800A << 16);
    // 0x0042B128: addiu       $a3, $a3, 0x5EE4
    ctx->r7 = ADD32(ctx->r7, 0X5EE4);
    // 0x0042B12C: jal         0x00205B94
    // 0x0042B130: sw          $a2, 0x20($s3)
    MEM_W(0X20, ctx->r19) = ctx->r6;
    func_00205B94(rdram, ctx);
        goto after_8;
    // 0x0042B130: sw          $a2, 0x20($s3)
    MEM_W(0X20, ctx->r19) = ctx->r6;
    after_8:
    // 0x0042B134: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0042B138: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
    // 0x0042B13C: sw          $v0, 0xA4($s3)
    MEM_W(0XA4, ctx->r19) = ctx->r2;
    // 0x0042B140: lui         $v0, 0x43
    ctx->r2 = S32(0X43 << 16);
    // 0x0042B144: addiu       $v0, $v0, -0x4C1C
    ctx->r2 = ADD32(ctx->r2, -0X4C1C);
    // 0x0042B148: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x0042B14C: lui         $v0, 0x800A
    ctx->r2 = S32(0X800A << 16);
    // 0x0042B150: addiu       $v0, $v0, 0x5EF8
    ctx->r2 = ADD32(ctx->r2, 0X5EF8);
    // 0x0042B154: sw          $s3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r19;
    // 0x0042B158: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x0042B15C: lw          $a1, 0x4C($s3)
    ctx->r5 = MEM_W(ctx->r19, 0X4C);
    // 0x0042B160: jal         0x00205D0C
    // 0x0042B164: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    func_00205D0C(rdram, ctx);
        goto after_9;
    // 0x0042B164: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    after_9:
    // 0x0042B168: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0042B16C: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x0042B170: sw          $v0, 0xB4($s3)
    MEM_W(0XB4, ctx->r19) = ctx->r2;
    // 0x0042B174: lui         $v0, 0x43
    ctx->r2 = S32(0X43 << 16);
    // 0x0042B178: addiu       $v0, $v0, -0x32FC
    ctx->r2 = ADD32(ctx->r2, -0X32FC);
    // 0x0042B17C: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x0042B180: lui         $v0, 0x800A
    ctx->r2 = S32(0X800A << 16);
    // 0x0042B184: addiu       $v0, $v0, 0x5F00
    ctx->r2 = ADD32(ctx->r2, 0X5F00);
    // 0x0042B188: sw          $s3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r19;
    // 0x0042B18C: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x0042B190: lw          $a1, 0x4C($s3)
    ctx->r5 = MEM_W(ctx->r19, 0X4C);
    // 0x0042B194: jal         0x00205D0C
    // 0x0042B198: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    func_00205D0C(rdram, ctx);
        goto after_10;
    // 0x0042B198: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    after_10:
    // 0x0042B19C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0042B1A0: addu        $a2, $a0, $zero
    ctx->r6 = ADD32(ctx->r4, 0);
    // 0x0042B1A4: sw          $v0, 0xCC($s3)
    MEM_W(0XCC, ctx->r19) = ctx->r2;
    // 0x0042B1A8: lui         $v0, 0x800A
    ctx->r2 = S32(0X800A << 16);
    // 0x0042B1AC: addiu       $v0, $v0, 0x5F0C
    ctx->r2 = ADD32(ctx->r2, 0X5F0C);
    // 0x0042B1B0: sw          $s3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r19;
    // 0x0042B1B4: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x0042B1B8: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x0042B1BC: lw          $a1, 0x4C($s3)
    ctx->r5 = MEM_W(ctx->r19, 0X4C);
    // 0x0042B1C0: jal         0x00205D0C
    // 0x0042B1C4: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    func_00205D0C(rdram, ctx);
        goto after_11;
    // 0x0042B1C4: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    after_11:
    // 0x0042B1C8: sw          $v0, 0xA8($s3)
    MEM_W(0XA8, ctx->r19) = ctx->r2;
    // 0x0042B1CC: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x0042B1D0: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x0042B1D4: addu        $at, $s3, $at
    ctx->r1 = ADD32(ctx->r19, ctx->r1);
    // 0x0042B1D8: sw          $v0, -0x71B0($at)
    MEM_W(-0X71B0, ctx->r1) = ctx->r2;
    // 0x0042B1DC: jal         0x0042AA80
    // 0x0042B1E0: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    func_0042AA80(rdram, ctx);
        goto after_12;
    // 0x0042B1E0: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    after_12:
    // 0x0042B1E4: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0042B1E8: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    // 0x0042B1EC: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x0042B1F0: addu        $at, $s3, $at
    ctx->r1 = ADD32(ctx->r19, ctx->r1);
    // 0x0042B1F4: lw          $v0, -0x71B0($at)
    ctx->r2 = MEM_W(ctx->r1, -0X71B0);
    // 0x0042B1F8: lbu         $v1, 0x10($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X10);
    // 0x0042B1FC: lui         $v0, 0x800A
    ctx->r2 = S32(0X800A << 16);
    // 0x0042B200: addiu       $v0, $v0, 0x5F18
    ctx->r2 = ADD32(ctx->r2, 0X5F18);
    // 0x0042B204: sw          $s3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r19;
    // 0x0042B208: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x0042B20C: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x0042B210: lw          $a1, 0x4C($s3)
    ctx->r5 = MEM_W(ctx->r19, 0X4C);
    // 0x0042B214: srl         $v1, $v1, 2
    ctx->r3 = S32(U32(ctx->r3) >> 2);
    // 0x0042B218: andi        $v1, $v1, 0x1
    ctx->r3 = ctx->r3 & 0X1;
    // 0x0042B21C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0042B220: sw          $v1, -0x4760($at)
    MEM_W(-0X4760, ctx->r1) = ctx->r3;
    // 0x0042B224: jal         0x00205D0C
    // 0x0042B228: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    func_00205D0C(rdram, ctx);
        goto after_13;
    // 0x0042B228: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    after_13:
    // 0x0042B22C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0042B230: sw          $v0, 0xAC($s3)
    MEM_W(0XAC, ctx->r19) = ctx->r2;
    // 0x0042B234: lw          $v1, 0x0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X0);
    // 0x0042B238: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x0042B23C: addiu       $v0, $v1, 0x8
    ctx->r2 = ADD32(ctx->r3, 0X8);
    // 0x0042B240: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x0042B244: addu        $at, $s3, $at
    ctx->r1 = ADD32(ctx->r19, ctx->r1);
    // 0x0042B248: sw          $v0, -0x7164($at)
    MEM_W(-0X7164, ctx->r1) = ctx->r2;
    // 0x0042B24C: lw          $v1, 0x4($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X4);
    // 0x0042B250: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0042B254: sw          $v0, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r2;
    // 0x0042B258: lui         $v0, 0x43
    ctx->r2 = S32(0X43 << 16);
    // 0x0042B25C: addiu       $v0, $v0, -0x45C0
    ctx->r2 = ADD32(ctx->r2, -0X45C0);
    // 0x0042B260: sw          $zero, 0xE0($s3)
    MEM_W(0XE0, ctx->r19) = 0;
    // 0x0042B264: sw          $zero, 0xE8($s3)
    MEM_W(0XE8, ctx->r19) = 0;
    // 0x0042B268: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x0042B26C: addu        $at, $s3, $at
    ctx->r1 = ADD32(ctx->r19, ctx->r1);
    // 0x0042B270: sw          $v1, -0x7160($at)
    MEM_W(-0X7160, ctx->r1) = ctx->r3;
    // 0x0042B274: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x0042B278: lui         $v0, 0x800A
    ctx->r2 = S32(0X800A << 16);
    // 0x0042B27C: addiu       $v0, $v0, 0x5F24
    ctx->r2 = ADD32(ctx->r2, 0X5F24);
    // 0x0042B280: sw          $s3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r19;
    // 0x0042B284: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x0042B288: lw          $a1, 0x4C($s3)
    ctx->r5 = MEM_W(ctx->r19, 0X4C);
    // 0x0042B28C: jal         0x00205D0C
    // 0x0042B290: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    func_00205D0C(rdram, ctx);
        goto after_14;
    // 0x0042B290: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    after_14:
    // 0x0042B294: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x0042B298: sw          $v0, 0xB0($s3)
    MEM_W(0XB0, ctx->r19) = ctx->r2;
    // 0x0042B29C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x0042B2A0: jal         0x0042C79C
    // 0x0042B2A4: sw          $v0, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r2;
    func_0042C79C(rdram, ctx);
        goto after_15;
    // 0x0042B2A4: sw          $v0, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r2;
    after_15:
    // 0x0042B2A8: lw          $s4, 0xE8($s3)
    ctx->r20 = MEM_W(ctx->r19, 0XE8);
    // 0x0042B2AC: lw          $s1, 0xE4($s3)
    ctx->r17 = MEM_W(ctx->r19, 0XE4);
    // 0x0042B2B0: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x0042B2B4: sw          $v0, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r2;
    // 0x0042B2B8: slt         $v0, $s1, $s4
    ctx->r2 = SIGNED(ctx->r17) < SIGNED(ctx->r20) ? 1 : 0;
    // 0x0042B2BC: beq         $v0, $zero, L_0042B2F0
    if (ctx->r2 == 0) {
        // 0x0042B2C0: sll         $v0, $s1, 2
        ctx->r2 = S32(ctx->r17 << 2);
            goto L_0042B2F0;
    }
    // 0x0042B2C0: sll         $v0, $s1, 2
    ctx->r2 = S32(ctx->r17 << 2);
    // 0x0042B2C4: addu        $v0, $v0, $s1
    ctx->r2 = ADD32(ctx->r2, ctx->r17);
    // 0x0042B2C8: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x0042B2CC: addu        $v0, $v0, $s1
    ctx->r2 = ADD32(ctx->r2, ctx->r17);
    // 0x0042B2D0: sll         $s0, $v0, 3
    ctx->r16 = S32(ctx->r2 << 3);
L_0042B2D4:
    // 0x0042B2D4: lw          $a0, 0xE0($s3)
    ctx->r4 = MEM_W(ctx->r19, 0XE0);
    // 0x0042B2D8: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x0042B2DC: jal         0x0021E5D4
    // 0x0042B2E0: addu        $a0, $a0, $s0
    ctx->r4 = ADD32(ctx->r4, ctx->r16);
    func_0021E5D4(rdram, ctx);
        goto after_16;
    // 0x0042B2E0: addu        $a0, $a0, $s0
    ctx->r4 = ADD32(ctx->r4, ctx->r16);
    after_16:
    // 0x0042B2E4: slt         $v0, $s1, $s4
    ctx->r2 = SIGNED(ctx->r17) < SIGNED(ctx->r20) ? 1 : 0;
    // 0x0042B2E8: bne         $v0, $zero, L_0042B2D4
    if (ctx->r2 != 0) {
        // 0x0042B2EC: addiu       $s0, $s0, 0x288
        ctx->r16 = ADD32(ctx->r16, 0X288);
            goto L_0042B2D4;
    }
    // 0x0042B2EC: addiu       $s0, $s0, 0x288
    ctx->r16 = ADD32(ctx->r16, 0X288);
L_0042B2F0:
    // 0x0042B2F0: lui         $s1, 0x8012
    ctx->r17 = S32(0X8012 << 16);
    // 0x0042B2F4: lw          $s1, -0x6770($s1)
    ctx->r17 = MEM_W(ctx->r17, -0X6770);
    // 0x0042B2F8: beq         $s1, $zero, L_0042B31C
    if (ctx->r17 == 0) {
        // 0x0042B2FC: addu        $s0, $s1, $zero
        ctx->r16 = ADD32(ctx->r17, 0);
            goto L_0042B31C;
    }
    // 0x0042B2FC: addu        $s0, $s1, $zero
    ctx->r16 = ADD32(ctx->r17, 0);
L_0042B300:
    // 0x0042B300: jal         0x0021E5D4
    // 0x0042B304: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_0021E5D4(rdram, ctx);
        goto after_17;
    // 0x0042B304: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_17:
    // 0x0042B308: jal         0x0021E5D4
    // 0x0042B30C: addiu       $a0, $s0, 0x288
    ctx->r4 = ADD32(ctx->r16, 0X288);
    func_0021E5D4(rdram, ctx);
        goto after_18;
    // 0x0042B30C: addiu       $a0, $s0, 0x288
    ctx->r4 = ADD32(ctx->r16, 0X288);
    after_18:
    // 0x0042B310: lw          $s1, 0x1320($s1)
    ctx->r17 = MEM_W(ctx->r17, 0X1320);
    // 0x0042B314: bne         $s1, $zero, L_0042B300
    if (ctx->r17 != 0) {
        // 0x0042B318: addu        $s0, $s1, $zero
        ctx->r16 = ADD32(ctx->r17, 0);
            goto L_0042B300;
    }
    // 0x0042B318: addu        $s0, $s1, $zero
    ctx->r16 = ADD32(ctx->r17, 0);
L_0042B31C:
    // 0x0042B31C: jal         0x0042C840
    // 0x0042B320: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    func_0042C840(rdram, ctx);
        goto after_19;
    // 0x0042B320: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    after_19:
    // 0x0042B324: lw          $s4, 0xE8($s3)
    ctx->r20 = MEM_W(ctx->r19, 0XE8);
    // 0x0042B328: lw          $s1, 0xE4($s3)
    ctx->r17 = MEM_W(ctx->r19, 0XE4);
    // 0x0042B32C: slt         $v0, $s1, $s4
    ctx->r2 = SIGNED(ctx->r17) < SIGNED(ctx->r20) ? 1 : 0;
    // 0x0042B330: beq         $v0, $zero, L_0042B370
    if (ctx->r2 == 0) {
        // 0x0042B334: sll         $v0, $s1, 2
        ctx->r2 = S32(ctx->r17 << 2);
            goto L_0042B370;
    }
    // 0x0042B334: sll         $v0, $s1, 2
    ctx->r2 = S32(ctx->r17 << 2);
    // 0x0042B338: addu        $v0, $v0, $s1
    ctx->r2 = ADD32(ctx->r2, ctx->r17);
    // 0x0042B33C: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x0042B340: addu        $v0, $v0, $s1
    ctx->r2 = ADD32(ctx->r2, ctx->r17);
    // 0x0042B344: sll         $s2, $v0, 3
    ctx->r18 = S32(ctx->r2 << 3);
L_0042B348:
    // 0x0042B348: lw          $v0, 0xE0($s3)
    ctx->r2 = MEM_W(ctx->r19, 0XE0);
    // 0x0042B34C: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x0042B350: addu        $s0, $v0, $s2
    ctx->r16 = ADD32(ctx->r2, ctx->r18);
    // 0x0042B354: jal         0x0021F1B4
    // 0x0042B358: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_0021F1B4(rdram, ctx);
        goto after_20;
    // 0x0042B358: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_20:
    // 0x0042B35C: jal         0x0021A344
    // 0x0042B360: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_0021A344(rdram, ctx);
        goto after_21;
    // 0x0042B360: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_21:
    // 0x0042B364: slt         $v0, $s1, $s4
    ctx->r2 = SIGNED(ctx->r17) < SIGNED(ctx->r20) ? 1 : 0;
    // 0x0042B368: bne         $v0, $zero, L_0042B348
    if (ctx->r2 != 0) {
        // 0x0042B36C: addiu       $s2, $s2, 0x288
        ctx->r18 = ADD32(ctx->r18, 0X288);
            goto L_0042B348;
    }
    // 0x0042B36C: addiu       $s2, $s2, 0x288
    ctx->r18 = ADD32(ctx->r18, 0X288);
L_0042B370:
    // 0x0042B370: lui         $s1, 0x8012
    ctx->r17 = S32(0X8012 << 16);
    // 0x0042B374: addiu       $s1, $s1, -0x6790
    ctx->r17 = ADD32(ctx->r17, -0X6790);
    // 0x0042B378: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0042B37C: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x0042B380: jal         0x0042E894
    // 0x0042B384: sw          $v0, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r2;
    func_0042E894(rdram, ctx);
        goto after_22;
    // 0x0042B384: sw          $v0, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r2;
    after_22:
    // 0x0042B388: addiu       $s0, $s1, 0x40
    ctx->r16 = ADD32(ctx->r17, 0X40);
    // 0x0042B38C: jal         0x0042FEEC
    // 0x0042B390: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_0042FEEC(rdram, ctx);
        goto after_23;
    // 0x0042B390: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_23:
    // 0x0042B394: jal         0x0027ECF0
    // 0x0042B398: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_0027ECF0(rdram, ctx);
        goto after_24;
    // 0x0042B398: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_24:
    // 0x0042B39C: lbu         $v0, 0x1281($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X1281);
    // 0x0042B3A0: bne         $v0, $zero, L_0042B3BC
    if (ctx->r2 != 0) {
        // 0x0042B3A4: nop
    
            goto L_0042B3BC;
    }
    // 0x0042B3A4: nop

    // 0x0042B3A8: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x0042B3AC: addu        $at, $s3, $at
    ctx->r1 = ADD32(ctx->r19, ctx->r1);
    // 0x0042B3B0: lw          $v0, -0x705C($at)
    ctx->r2 = MEM_W(ctx->r1, -0X705C);
    // 0x0042B3B4: beq         $v0, $zero, L_0042B3C4
    if (ctx->r2 == 0) {
        // 0x0042B3B8: nop
    
            goto L_0042B3C4;
    }
    // 0x0042B3B8: nop

L_0042B3BC:
    // 0x0042B3BC: jal         0x0042BF48
    // 0x0042B3C0: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    func_0042BF48(rdram, ctx);
        goto after_25;
    // 0x0042B3C0: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    after_25:
L_0042B3C4:
    // 0x0042B3C4: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x0042B3C8: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x0042B3CC: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x0042B3D0: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x0042B3D4: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x0042B3D8: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x0042B3DC: jr          $ra
    // 0x0042B3E0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x0042B3E0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void entry_0042AE9C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0042AE9C: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x0042AEA0: addu        $at, $s3, $at
    ctx->r1 = ADD32(ctx->r19, ctx->r1);
    // 0x0042AEA4: sw          $s2, -0x7058($at)
    MEM_W(-0X7058, ctx->r1) = ctx->r18;
    // 0x0042AEA8: bne         $s1, $zero, L_0042AEBC
    if (ctx->r17 != 0) {
        // 0x0042AEAC: lui         $a2, 0x1
        ctx->r6 = S32(0X1 << 16);
            goto L_0042AEBC;
    }
    // 0x0042AEAC: lui         $a2, 0x1
    ctx->r6 = S32(0X1 << 16);
    // 0x0042AEB0: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x0042AEB4: addu        $at, $s3, $at
    ctx->r1 = ADD32(ctx->r19, ctx->r1);
    // 0x0042AEB8: sw          $zero, -0x7048($at)
    MEM_W(-0X7048, ctx->r1) = 0;
L_0042AEBC:
    // 0x0042AEBC: ori         $a2, $a2, 0x8E5C
    ctx->r6 = ctx->r6 | 0X8E5C;
    // 0x0042AEC0: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x0042AEC4: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x0042AEC8: addu        $a2, $s3, $a2
    ctx->r6 = ADD32(ctx->r19, ctx->r6);
    // 0x0042AECC: jal         0x0022629C
    // 0x0042AED0: addiu       $a3, $zero, 0x3F
    ctx->r7 = ADD32(0, 0X3F);
    func_0022629C(rdram, ctx);
        goto after_0;
    // 0x0042AED0: addiu       $a3, $zero, 0x3F
    ctx->r7 = ADD32(0, 0X3F);
    after_0:
    // 0x0042AED4: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x0042AED8: addu        $at, $s3, $at
    ctx->r1 = ADD32(ctx->r19, ctx->r1);
    // 0x0042AEDC: lw          $v1, -0x7030($at)
    ctx->r3 = MEM_W(ctx->r1, -0X7030);
    // 0x0042AEE0: slti        $v0, $v1, 0x1CEA
    ctx->r2 = SIGNED(ctx->r3) < 0X1CEA ? 1 : 0;
    // 0x0042AEE4: beq         $v0, $zero, L_0042AF30
    if (ctx->r2 == 0) {
        // 0x0042AEE8: slti        $v0, $v1, 0x1CE8
        ctx->r2 = SIGNED(ctx->r3) < 0X1CE8 ? 1 : 0;
            goto L_0042AF30;
    }
    // 0x0042AEE8: slti        $v0, $v1, 0x1CE8
    ctx->r2 = SIGNED(ctx->r3) < 0X1CE8 ? 1 : 0;
    // 0x0042AEEC: beq         $v0, $zero, L_0042AF58
    if (ctx->r2 == 0) {
        // 0x0042AEF0: addiu       $v0, $zero, 0x1BBC
        ctx->r2 = ADD32(0, 0X1BBC);
            goto L_0042AF58;
    }
    // 0x0042AEF0: addiu       $v0, $zero, 0x1BBC
    ctx->r2 = ADD32(0, 0X1BBC);
    // 0x0042AEF4: beq         $v1, $v0, L_0042AF58
    if (ctx->r3 == ctx->r2) {
        // 0x0042AEF8: slti        $v0, $v1, 0x1BBD
        ctx->r2 = SIGNED(ctx->r3) < 0X1BBD ? 1 : 0;
            goto L_0042AF58;
    }
    // 0x0042AEF8: slti        $v0, $v1, 0x1BBD
    ctx->r2 = SIGNED(ctx->r3) < 0X1BBD ? 1 : 0;
    // 0x0042AEFC: beq         $v0, $zero, L_0042AF14
    if (ctx->r2 == 0) {
        // 0x0042AF00: addiu       $v0, $zero, 0x123A
        ctx->r2 = ADD32(0, 0X123A);
            goto L_0042AF14;
    }
    // 0x0042AF00: addiu       $v0, $zero, 0x123A
    ctx->r2 = ADD32(0, 0X123A);
    // 0x0042AF04: beq         $v1, $v0, L_0042AF5C
    if (ctx->r3 == ctx->r2) {
        // 0x0042AF08: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_0042AF5C;
    }
    // 0x0042AF08: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0042AF0C: j           L_0042AF70
    // 0x0042AF10: nop

        goto L_0042AF70;
    // 0x0042AF10: nop

L_0042AF14:
    // 0x0042AF14: addiu       $v0, $zero, 0x1C20
    ctx->r2 = ADD32(0, 0X1C20);
    // 0x0042AF18: beq         $v1, $v0, L_0042AF58
    if (ctx->r3 == ctx->r2) {
        // 0x0042AF1C: addiu       $v0, $zero, 0x1C84
        ctx->r2 = ADD32(0, 0X1C84);
            goto L_0042AF58;
    }
    // 0x0042AF1C: addiu       $v0, $zero, 0x1C84
    ctx->r2 = ADD32(0, 0X1C84);
    // 0x0042AF20: beq         $v1, $v0, L_0042AF5C
    if (ctx->r3 == ctx->r2) {
        // 0x0042AF24: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_0042AF5C;
    }
    // 0x0042AF24: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0042AF28: j           L_0042AF70
    // 0x0042AF2C: nop

        goto L_0042AF70;
    // 0x0042AF2C: nop

L_0042AF30:
    // 0x0042AF30: slti        $v0, $v1, 0x1D4C
    ctx->r2 = SIGNED(ctx->r3) < 0X1D4C ? 1 : 0;
    // 0x0042AF34: bne         $v0, $zero, L_0042AF70
    if (ctx->r2 != 0) {
        // 0x0042AF38: slti        $v0, $v1, 0x1D4E
        ctx->r2 = SIGNED(ctx->r3) < 0X1D4E ? 1 : 0;
            goto L_0042AF70;
    }
    // 0x0042AF38: slti        $v0, $v1, 0x1D4E
    ctx->r2 = SIGNED(ctx->r3) < 0X1D4E ? 1 : 0;
    // 0x0042AF3C: bne         $v0, $zero, L_0042AF5C
    if (ctx->r2 != 0) {
        // 0x0042AF40: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_0042AF5C;
    }
    // 0x0042AF40: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0042AF44: slti        $v0, $v1, 0x1DB3
    ctx->r2 = SIGNED(ctx->r3) < 0X1DB3 ? 1 : 0;
    // 0x0042AF48: beq         $v0, $zero, L_0042AF70
    if (ctx->r2 == 0) {
        // 0x0042AF4C: slti        $v0, $v1, 0x1DB1
        ctx->r2 = SIGNED(ctx->r3) < 0X1DB1 ? 1 : 0;
            goto L_0042AF70;
    }
    // 0x0042AF4C: slti        $v0, $v1, 0x1DB1
    ctx->r2 = SIGNED(ctx->r3) < 0X1DB1 ? 1 : 0;
    // 0x0042AF50: bne         $v0, $zero, L_0042AF70
    if (ctx->r2 != 0) {
        // 0x0042AF54: nop
    
            goto L_0042AF70;
    }
    // 0x0042AF54: nop

L_0042AF58:
    // 0x0042AF58: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_0042AF5C:
    // 0x0042AF5C: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x0042AF60: addu        $at, $s3, $at
    ctx->r1 = ADD32(ctx->r19, ctx->r1);
    // 0x0042AF64: sw          $v0, -0x705C($at)
    MEM_W(-0X705C, ctx->r1) = ctx->r2;
    // 0x0042AF68: j           L_0042AF7C
    // 0x0042AF6C: nop

        goto L_0042AF7C;
    // 0x0042AF6C: nop

L_0042AF70:
    // 0x0042AF70: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x0042AF74: addu        $at, $s3, $at
    ctx->r1 = ADD32(ctx->r19, ctx->r1);
    // 0x0042AF78: sw          $zero, -0x705C($at)
    MEM_W(-0X705C, ctx->r1) = 0;
L_0042AF7C:
    // 0x0042AF7C: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x0042AF80: addu        $at, $s3, $at
    ctx->r1 = ADD32(ctx->r19, ctx->r1);
    // 0x0042AF84: lw          $v1, -0x7030($at)
    ctx->r3 = MEM_W(ctx->r1, -0X7030);
    // 0x0042AF88: slti        $v0, $v1, 0x1CEA
    ctx->r2 = SIGNED(ctx->r3) < 0X1CEA ? 1 : 0;
    // 0x0042AF8C: beq         $v0, $zero, L_0042AFD8
    if (ctx->r2 == 0) {
        // 0x0042AF90: slti        $v0, $v1, 0x1CE8
        ctx->r2 = SIGNED(ctx->r3) < 0X1CE8 ? 1 : 0;
            goto L_0042AFD8;
    }
    // 0x0042AF90: slti        $v0, $v1, 0x1CE8
    ctx->r2 = SIGNED(ctx->r3) < 0X1CE8 ? 1 : 0;
    // 0x0042AF94: beq         $v0, $zero, L_0042B010
    if (ctx->r2 == 0) {
        // 0x0042AF98: addiu       $v0, $zero, 0x1BBC
        ctx->r2 = ADD32(0, 0X1BBC);
            goto L_0042B010;
    }
    // 0x0042AF98: addiu       $v0, $zero, 0x1BBC
    ctx->r2 = ADD32(0, 0X1BBC);
    // 0x0042AF9C: beq         $v1, $v0, L_0042B010
    if (ctx->r3 == ctx->r2) {
        // 0x0042AFA0: slti        $v0, $v1, 0x1BBD
        ctx->r2 = SIGNED(ctx->r3) < 0X1BBD ? 1 : 0;
            goto L_0042B010;
    }
    // 0x0042AFA0: slti        $v0, $v1, 0x1BBD
    ctx->r2 = SIGNED(ctx->r3) < 0X1BBD ? 1 : 0;
    // 0x0042AFA4: beq         $v0, $zero, L_0042AFBC
    if (ctx->r2 == 0) {
        // 0x0042AFA8: addiu       $v0, $zero, 0x123A
        ctx->r2 = ADD32(0, 0X123A);
            goto L_0042AFBC;
    }
    // 0x0042AFA8: addiu       $v0, $zero, 0x123A
    ctx->r2 = ADD32(0, 0X123A);
    // 0x0042AFAC: beq         $v1, $v0, L_0042B010
    if (ctx->r3 == ctx->r2) {
        // 0x0042AFB0: addiu       $s0, $zero, 0x320
        ctx->r16 = ADD32(0, 0X320);
            goto L_0042B010;
    }
    // 0x0042AFB0: addiu       $s0, $zero, 0x320
    ctx->r16 = ADD32(0, 0X320);
    // 0x0042AFB4: j           L_0042B024
    // 0x0042AFB8: nop

        goto L_0042B024;
    // 0x0042AFB8: nop

L_0042AFBC:
    // 0x0042AFBC: addiu       $v0, $zero, 0x1C20
    ctx->r2 = ADD32(0, 0X1C20);
    // 0x0042AFC0: beq         $v1, $v0, L_0042B010
    if (ctx->r3 == ctx->r2) {
        // 0x0042AFC4: addiu       $v0, $zero, 0x1C84
        ctx->r2 = ADD32(0, 0X1C84);
            goto L_0042B010;
    }
    // 0x0042AFC4: addiu       $v0, $zero, 0x1C84
    ctx->r2 = ADD32(0, 0X1C84);
    // 0x0042AFC8: beq         $v1, $v0, L_0042B010
    if (ctx->r3 == ctx->r2) {
        // 0x0042AFCC: addiu       $s0, $zero, 0x320
        ctx->r16 = ADD32(0, 0X320);
            goto L_0042B010;
    }
    // 0x0042AFCC: addiu       $s0, $zero, 0x320
    ctx->r16 = ADD32(0, 0X320);
    // 0x0042AFD0: j           L_0042B024
    // 0x0042AFD4: nop

        goto L_0042B024;
    // 0x0042AFD4: nop

L_0042AFD8:
    // 0x0042AFD8: addiu       $v0, $zero, 0x1DB1
    ctx->r2 = ADD32(0, 0X1DB1);
    // 0x0042AFDC: beq         $v1, $v0, L_0042B018
    if (ctx->r3 == ctx->r2) {
        // 0x0042AFE0: slti        $v0, $v1, 0x1DB2
        ctx->r2 = SIGNED(ctx->r3) < 0X1DB2 ? 1 : 0;
            goto L_0042B018;
    }
    // 0x0042AFE0: slti        $v0, $v1, 0x1DB2
    ctx->r2 = SIGNED(ctx->r3) < 0X1DB2 ? 1 : 0;
    // 0x0042AFE4: beq         $v0, $zero, L_0042B004
    if (ctx->r2 == 0) {
        // 0x0042AFE8: slti        $v0, $v1, 0x1D4E
        ctx->r2 = SIGNED(ctx->r3) < 0X1D4E ? 1 : 0;
            goto L_0042B004;
    }
    // 0x0042AFE8: slti        $v0, $v1, 0x1D4E
    ctx->r2 = SIGNED(ctx->r3) < 0X1D4E ? 1 : 0;
    // 0x0042AFEC: beq         $v0, $zero, L_0042B020
    if (ctx->r2 == 0) {
        // 0x0042AFF0: slti        $v0, $v1, 0x1D4C
        ctx->r2 = SIGNED(ctx->r3) < 0X1D4C ? 1 : 0;
            goto L_0042B020;
    }
    // 0x0042AFF0: slti        $v0, $v1, 0x1D4C
    ctx->r2 = SIGNED(ctx->r3) < 0X1D4C ? 1 : 0;
    // 0x0042AFF4: bne         $v0, $zero, L_0042B024
    if (ctx->r2 != 0) {
        // 0x0042AFF8: addiu       $s0, $zero, 0x320
        ctx->r16 = ADD32(0, 0X320);
            goto L_0042B024;
    }
    // 0x0042AFF8: addiu       $s0, $zero, 0x320
    ctx->r16 = ADD32(0, 0X320);
    // 0x0042AFFC: j           L_0042B024
    // 0x0042B000: addiu       $s0, $zero, 0xC80
    ctx->r16 = ADD32(0, 0XC80);
        goto L_0042B024;
    // 0x0042B000: addiu       $s0, $zero, 0xC80
    ctx->r16 = ADD32(0, 0XC80);
L_0042B004:
    // 0x0042B004: addiu       $v0, $zero, 0x1DB2
    ctx->r2 = ADD32(0, 0X1DB2);
    // 0x0042B008: bne         $v1, $v0, L_0042B024
    if (ctx->r3 != ctx->r2) {
        // 0x0042B00C: addiu       $s0, $zero, 0x320
        ctx->r16 = ADD32(0, 0X320);
            goto L_0042B024;
    }
    // 0x0042B00C: addiu       $s0, $zero, 0x320
    ctx->r16 = ADD32(0, 0X320);
L_0042B010:
    // 0x0042B010: j           L_0042B024
    // 0x0042B014: addiu       $s0, $zero, 0xC80
    ctx->r16 = ADD32(0, 0XC80);
        goto L_0042B024;
    // 0x0042B014: addiu       $s0, $zero, 0xC80
    ctx->r16 = ADD32(0, 0XC80);
L_0042B018:
    // 0x0042B018: j           L_0042B024
    // 0x0042B01C: addiu       $s0, $zero, 0x4B0
    ctx->r16 = ADD32(0, 0X4B0);
        goto L_0042B024;
    // 0x0042B01C: addiu       $s0, $zero, 0x4B0
    ctx->r16 = ADD32(0, 0X4B0);
L_0042B020:
    // 0x0042B020: addiu       $s0, $zero, 0x320
    ctx->r16 = ADD32(0, 0X320);
L_0042B024:
    // 0x0042B024: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x0042B028: lbu         $v0, -0x550F($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X550F);
    // 0x0042B02C: bnel        $v0, $zero, L_0042B034
    if (ctx->r2 != 0) {
        // 0x0042B030: addiu       $s0, $s0, 0x200
        ctx->r16 = ADD32(ctx->r16, 0X200);
            goto L_0042B034;
    }
    goto skip_0;
    // 0x0042B030: addiu       $s0, $s0, 0x200
    ctx->r16 = ADD32(ctx->r16, 0X200);
    skip_0:
L_0042B034:
    // 0x0042B034: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0042B038: sll         $a1, $s0, 6
    ctx->r5 = S32(ctx->r16 << 6);
    // 0x0042B03C: lui         $a3, 0x800A
    ctx->r7 = S32(0X800A << 16);
    // 0x0042B040: addiu       $a3, $a3, 0x5EB4
    ctx->r7 = ADD32(ctx->r7, 0X5EB4);
    // 0x0042B044: jal         0x00204EDC
    // 0x0042B048: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    func_00204EDC(rdram, ctx);
        goto after_1;
    // 0x0042B048: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_1:
    // 0x0042B04C: addiu       $a0, $s3, 0xD0
    ctx->r4 = ADD32(ctx->r19, 0XD0);
    // 0x0042B050: sw          $v0, 0xC8($s3)
    MEM_W(0XC8, ctx->r19) = ctx->r2;
    // 0x0042B054: lw          $a1, 0x0($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X0);
    // 0x0042B058: jal         0x00429F20
    // 0x0042B05C: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    func_00429F20(rdram, ctx);
        goto after_2;
    // 0x0042B05C: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    after_2:
    // 0x0042B060: lw          $a0, 0x38($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X38);
    // 0x0042B064: lw          $a1, 0xC($s3)
    ctx->r5 = MEM_W(ctx->r19, 0XC);
    // 0x0042B068: jal         0x00201848
    // 0x0042B06C: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    func_00201848(rdram, ctx);
        goto after_3;
    // 0x0042B06C: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    after_3:
    // 0x0042B070: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0042B074: addiu       $a1, $s3, 0x4C
    ctx->r5 = ADD32(ctx->r19, 0X4C);
    // 0x0042B078: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x0042B07C: lui         $a3, 0x800A
    ctx->r7 = S32(0X800A << 16);
    // 0x0042B080: addiu       $a3, $a3, 0x5EC0
    ctx->r7 = ADD32(ctx->r7, 0X5EC0);
    // 0x0042B084: jal         0x00205B94
    // 0x0042B088: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    func_00205B94(rdram, ctx);
        goto after_4;
    // 0x0042B088: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    after_4:
    // 0x0042B08C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0042B090: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x0042B094: sw          $v0, 0x98($s3)
    MEM_W(0X98, ctx->r19) = ctx->r2;
    // 0x0042B098: lui         $v0, 0x43
    ctx->r2 = S32(0X43 << 16);
    // 0x0042B09C: addiu       $v0, $v0, -0x4950
    ctx->r2 = ADD32(ctx->r2, -0X4950);
    // 0x0042B0A0: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x0042B0A4: lui         $v0, 0x800A
    ctx->r2 = S32(0X800A << 16);
    // 0x0042B0A8: addiu       $v0, $v0, 0x5ECC
    ctx->r2 = ADD32(ctx->r2, 0X5ECC);
    // 0x0042B0AC: sw          $s3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r19;
    // 0x0042B0B0: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x0042B0B4: lw          $a1, 0x4C($s3)
    ctx->r5 = MEM_W(ctx->r19, 0X4C);
    // 0x0042B0B8: jal         0x00205D0C
    // 0x0042B0BC: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    func_00205D0C(rdram, ctx);
        goto after_5;
    // 0x0042B0BC: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    after_5:
    // 0x0042B0C0: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0042B0C4: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x0042B0C8: sw          $v0, 0x9C($s3)
    MEM_W(0X9C, ctx->r19) = ctx->r2;
    // 0x0042B0CC: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x0042B0D0: lui         $s1, 0x20
    ctx->r17 = S32(0X20 << 16);
    // 0x0042B0D4: addiu       $s1, $s1, 0xAE0
    ctx->r17 = ADD32(ctx->r17, 0XAE0);
    // 0x0042B0D8: sw          $v0, 0x58($s3)
    MEM_W(0X58, ctx->r19) = ctx->r2;
    // 0x0042B0DC: lui         $v0, 0x800A
    ctx->r2 = S32(0X800A << 16);
    // 0x0042B0E0: addiu       $v0, $v0, 0x5ED8
    ctx->r2 = ADD32(ctx->r2, 0X5ED8);
    // 0x0042B0E4: sw          $s3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r19;
    // 0x0042B0E8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x0042B0EC: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x0042B0F0: lw          $a1, 0x4C($s3)
    ctx->r5 = MEM_W(ctx->r19, 0X4C);
    // 0x0042B0F4: jal         0x00205D0C
    // 0x0042B0F8: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    func_00205D0C(rdram, ctx);
        goto after_6;
    // 0x0042B0F8: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    after_6:
    // 0x0042B0FC: lw          $a0, 0x4C($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X4C);
    // 0x0042B100: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x0042B104: sw          $v0, 0xA0($s3)
    MEM_W(0XA0, ctx->r19) = ctx->r2;
    // 0x0042B108: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x0042B10C: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    // 0x0042B110: jal         0x00201848
    // 0x0042B114: sw          $v0, 0x54($s3)
    MEM_W(0X54, ctx->r19) = ctx->r2;
    func_00201848(rdram, ctx);
        goto after_7;
    // 0x0042B114: sw          $v0, 0x54($s3)
    MEM_W(0X54, ctx->r19) = ctx->r2;
    after_7:
    // 0x0042B118: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0042B11C: addiu       $a1, $s3, 0x50
    ctx->r5 = ADD32(ctx->r19, 0X50);
    // 0x0042B120: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    // 0x0042B124: lui         $a3, 0x800A
    ctx->r7 = S32(0X800A << 16);
    // 0x0042B128: addiu       $a3, $a3, 0x5EE4
    ctx->r7 = ADD32(ctx->r7, 0X5EE4);
    // 0x0042B12C: jal         0x00205B94
    // 0x0042B130: sw          $a2, 0x20($s3)
    MEM_W(0X20, ctx->r19) = ctx->r6;
    func_00205B94(rdram, ctx);
        goto after_8;
    // 0x0042B130: sw          $a2, 0x20($s3)
    MEM_W(0X20, ctx->r19) = ctx->r6;
    after_8:
    // 0x0042B134: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0042B138: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
    // 0x0042B13C: sw          $v0, 0xA4($s3)
    MEM_W(0XA4, ctx->r19) = ctx->r2;
    // 0x0042B140: lui         $v0, 0x43
    ctx->r2 = S32(0X43 << 16);
    // 0x0042B144: addiu       $v0, $v0, -0x4C1C
    ctx->r2 = ADD32(ctx->r2, -0X4C1C);
    // 0x0042B148: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x0042B14C: lui         $v0, 0x800A
    ctx->r2 = S32(0X800A << 16);
    // 0x0042B150: addiu       $v0, $v0, 0x5EF8
    ctx->r2 = ADD32(ctx->r2, 0X5EF8);
    // 0x0042B154: sw          $s3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r19;
    // 0x0042B158: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x0042B15C: lw          $a1, 0x4C($s3)
    ctx->r5 = MEM_W(ctx->r19, 0X4C);
    // 0x0042B160: jal         0x00205D0C
    // 0x0042B164: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    func_00205D0C(rdram, ctx);
        goto after_9;
    // 0x0042B164: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    after_9:
    // 0x0042B168: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0042B16C: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x0042B170: sw          $v0, 0xB4($s3)
    MEM_W(0XB4, ctx->r19) = ctx->r2;
    // 0x0042B174: lui         $v0, 0x43
    ctx->r2 = S32(0X43 << 16);
    // 0x0042B178: addiu       $v0, $v0, -0x32FC
    ctx->r2 = ADD32(ctx->r2, -0X32FC);
    // 0x0042B17C: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x0042B180: lui         $v0, 0x800A
    ctx->r2 = S32(0X800A << 16);
    // 0x0042B184: addiu       $v0, $v0, 0x5F00
    ctx->r2 = ADD32(ctx->r2, 0X5F00);
    // 0x0042B188: sw          $s3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r19;
    // 0x0042B18C: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x0042B190: lw          $a1, 0x4C($s3)
    ctx->r5 = MEM_W(ctx->r19, 0X4C);
    // 0x0042B194: jal         0x00205D0C
    // 0x0042B198: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    func_00205D0C(rdram, ctx);
        goto after_10;
    // 0x0042B198: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    after_10:
    // 0x0042B19C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0042B1A0: addu        $a2, $a0, $zero
    ctx->r6 = ADD32(ctx->r4, 0);
    // 0x0042B1A4: sw          $v0, 0xCC($s3)
    MEM_W(0XCC, ctx->r19) = ctx->r2;
    // 0x0042B1A8: lui         $v0, 0x800A
    ctx->r2 = S32(0X800A << 16);
    // 0x0042B1AC: addiu       $v0, $v0, 0x5F0C
    ctx->r2 = ADD32(ctx->r2, 0X5F0C);
    // 0x0042B1B0: sw          $s3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r19;
    // 0x0042B1B4: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x0042B1B8: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x0042B1BC: lw          $a1, 0x4C($s3)
    ctx->r5 = MEM_W(ctx->r19, 0X4C);
    // 0x0042B1C0: jal         0x00205D0C
    // 0x0042B1C4: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    func_00205D0C(rdram, ctx);
        goto after_11;
    // 0x0042B1C4: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    after_11:
    // 0x0042B1C8: sw          $v0, 0xA8($s3)
    MEM_W(0XA8, ctx->r19) = ctx->r2;
    // 0x0042B1CC: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x0042B1D0: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x0042B1D4: addu        $at, $s3, $at
    ctx->r1 = ADD32(ctx->r19, ctx->r1);
    // 0x0042B1D8: sw          $v0, -0x71B0($at)
    MEM_W(-0X71B0, ctx->r1) = ctx->r2;
    // 0x0042B1DC: jal         0x0042AA80
    // 0x0042B1E0: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    func_0042AA80(rdram, ctx);
        goto after_12;
    // 0x0042B1E0: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    after_12:
    // 0x0042B1E4: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0042B1E8: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    // 0x0042B1EC: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x0042B1F0: addu        $at, $s3, $at
    ctx->r1 = ADD32(ctx->r19, ctx->r1);
    // 0x0042B1F4: lw          $v0, -0x71B0($at)
    ctx->r2 = MEM_W(ctx->r1, -0X71B0);
    // 0x0042B1F8: lbu         $v1, 0x10($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X10);
    // 0x0042B1FC: lui         $v0, 0x800A
    ctx->r2 = S32(0X800A << 16);
    // 0x0042B200: addiu       $v0, $v0, 0x5F18
    ctx->r2 = ADD32(ctx->r2, 0X5F18);
    // 0x0042B204: sw          $s3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r19;
    // 0x0042B208: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x0042B20C: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x0042B210: lw          $a1, 0x4C($s3)
    ctx->r5 = MEM_W(ctx->r19, 0X4C);
    // 0x0042B214: srl         $v1, $v1, 2
    ctx->r3 = S32(U32(ctx->r3) >> 2);
    // 0x0042B218: andi        $v1, $v1, 0x1
    ctx->r3 = ctx->r3 & 0X1;
    // 0x0042B21C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0042B220: sw          $v1, -0x4760($at)
    MEM_W(-0X4760, ctx->r1) = ctx->r3;
    // 0x0042B224: jal         0x00205D0C
    // 0x0042B228: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    func_00205D0C(rdram, ctx);
        goto after_13;
    // 0x0042B228: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    after_13:
    // 0x0042B22C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0042B230: sw          $v0, 0xAC($s3)
    MEM_W(0XAC, ctx->r19) = ctx->r2;
    // 0x0042B234: lw          $v1, 0x0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X0);
    // 0x0042B238: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x0042B23C: addiu       $v0, $v1, 0x8
    ctx->r2 = ADD32(ctx->r3, 0X8);
    // 0x0042B240: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x0042B244: addu        $at, $s3, $at
    ctx->r1 = ADD32(ctx->r19, ctx->r1);
    // 0x0042B248: sw          $v0, -0x7164($at)
    MEM_W(-0X7164, ctx->r1) = ctx->r2;
    // 0x0042B24C: lw          $v1, 0x4($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X4);
    // 0x0042B250: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0042B254: sw          $v0, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r2;
    // 0x0042B258: lui         $v0, 0x43
    ctx->r2 = S32(0X43 << 16);
    // 0x0042B25C: addiu       $v0, $v0, -0x45C0
    ctx->r2 = ADD32(ctx->r2, -0X45C0);
    // 0x0042B260: sw          $zero, 0xE0($s3)
    MEM_W(0XE0, ctx->r19) = 0;
    // 0x0042B264: sw          $zero, 0xE8($s3)
    MEM_W(0XE8, ctx->r19) = 0;
    // 0x0042B268: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x0042B26C: addu        $at, $s3, $at
    ctx->r1 = ADD32(ctx->r19, ctx->r1);
    // 0x0042B270: sw          $v1, -0x7160($at)
    MEM_W(-0X7160, ctx->r1) = ctx->r3;
    // 0x0042B274: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x0042B278: lui         $v0, 0x800A
    ctx->r2 = S32(0X800A << 16);
    // 0x0042B27C: addiu       $v0, $v0, 0x5F24
    ctx->r2 = ADD32(ctx->r2, 0X5F24);
    // 0x0042B280: sw          $s3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r19;
    // 0x0042B284: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x0042B288: lw          $a1, 0x4C($s3)
    ctx->r5 = MEM_W(ctx->r19, 0X4C);
    // 0x0042B28C: jal         0x00205D0C
    // 0x0042B290: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    func_00205D0C(rdram, ctx);
        goto after_14;
    // 0x0042B290: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    after_14:
    // 0x0042B294: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x0042B298: sw          $v0, 0xB0($s3)
    MEM_W(0XB0, ctx->r19) = ctx->r2;
    // 0x0042B29C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x0042B2A0: jal         0x0042C79C
    // 0x0042B2A4: sw          $v0, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r2;
    func_0042C79C(rdram, ctx);
        goto after_15;
    // 0x0042B2A4: sw          $v0, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r2;
    after_15:
    // 0x0042B2A8: lw          $s4, 0xE8($s3)
    ctx->r20 = MEM_W(ctx->r19, 0XE8);
    // 0x0042B2AC: lw          $s1, 0xE4($s3)
    ctx->r17 = MEM_W(ctx->r19, 0XE4);
    // 0x0042B2B0: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x0042B2B4: sw          $v0, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r2;
    // 0x0042B2B8: slt         $v0, $s1, $s4
    ctx->r2 = SIGNED(ctx->r17) < SIGNED(ctx->r20) ? 1 : 0;
    // 0x0042B2BC: beq         $v0, $zero, L_0042B2F0
    if (ctx->r2 == 0) {
        // 0x0042B2C0: sll         $v0, $s1, 2
        ctx->r2 = S32(ctx->r17 << 2);
            goto L_0042B2F0;
    }
    // 0x0042B2C0: sll         $v0, $s1, 2
    ctx->r2 = S32(ctx->r17 << 2);
    // 0x0042B2C4: addu        $v0, $v0, $s1
    ctx->r2 = ADD32(ctx->r2, ctx->r17);
    // 0x0042B2C8: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x0042B2CC: addu        $v0, $v0, $s1
    ctx->r2 = ADD32(ctx->r2, ctx->r17);
    // 0x0042B2D0: sll         $s0, $v0, 3
    ctx->r16 = S32(ctx->r2 << 3);
L_0042B2D4:
    // 0x0042B2D4: lw          $a0, 0xE0($s3)
    ctx->r4 = MEM_W(ctx->r19, 0XE0);
    // 0x0042B2D8: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x0042B2DC: jal         0x0021E5D4
    // 0x0042B2E0: addu        $a0, $a0, $s0
    ctx->r4 = ADD32(ctx->r4, ctx->r16);
    func_0021E5D4(rdram, ctx);
        goto after_16;
    // 0x0042B2E0: addu        $a0, $a0, $s0
    ctx->r4 = ADD32(ctx->r4, ctx->r16);
    after_16:
    // 0x0042B2E4: slt         $v0, $s1, $s4
    ctx->r2 = SIGNED(ctx->r17) < SIGNED(ctx->r20) ? 1 : 0;
    // 0x0042B2E8: bne         $v0, $zero, L_0042B2D4
    if (ctx->r2 != 0) {
        // 0x0042B2EC: addiu       $s0, $s0, 0x288
        ctx->r16 = ADD32(ctx->r16, 0X288);
            goto L_0042B2D4;
    }
    // 0x0042B2EC: addiu       $s0, $s0, 0x288
    ctx->r16 = ADD32(ctx->r16, 0X288);
L_0042B2F0:
    // 0x0042B2F0: lui         $s1, 0x8012
    ctx->r17 = S32(0X8012 << 16);
    // 0x0042B2F4: lw          $s1, -0x6770($s1)
    ctx->r17 = MEM_W(ctx->r17, -0X6770);
    // 0x0042B2F8: beq         $s1, $zero, L_0042B31C
    if (ctx->r17 == 0) {
        // 0x0042B2FC: addu        $s0, $s1, $zero
        ctx->r16 = ADD32(ctx->r17, 0);
            goto L_0042B31C;
    }
    // 0x0042B2FC: addu        $s0, $s1, $zero
    ctx->r16 = ADD32(ctx->r17, 0);
L_0042B300:
    // 0x0042B300: jal         0x0021E5D4
    // 0x0042B304: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_0021E5D4(rdram, ctx);
        goto after_17;
    // 0x0042B304: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_17:
    // 0x0042B308: jal         0x0021E5D4
    // 0x0042B30C: addiu       $a0, $s0, 0x288
    ctx->r4 = ADD32(ctx->r16, 0X288);
    func_0021E5D4(rdram, ctx);
        goto after_18;
    // 0x0042B30C: addiu       $a0, $s0, 0x288
    ctx->r4 = ADD32(ctx->r16, 0X288);
    after_18:
    // 0x0042B310: lw          $s1, 0x1320($s1)
    ctx->r17 = MEM_W(ctx->r17, 0X1320);
    // 0x0042B314: bne         $s1, $zero, L_0042B300
    if (ctx->r17 != 0) {
        // 0x0042B318: addu        $s0, $s1, $zero
        ctx->r16 = ADD32(ctx->r17, 0);
            goto L_0042B300;
    }
    // 0x0042B318: addu        $s0, $s1, $zero
    ctx->r16 = ADD32(ctx->r17, 0);
L_0042B31C:
    // 0x0042B31C: jal         0x0042C840
    // 0x0042B320: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    func_0042C840(rdram, ctx);
        goto after_19;
    // 0x0042B320: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    after_19:
    // 0x0042B324: lw          $s4, 0xE8($s3)
    ctx->r20 = MEM_W(ctx->r19, 0XE8);
    // 0x0042B328: lw          $s1, 0xE4($s3)
    ctx->r17 = MEM_W(ctx->r19, 0XE4);
    // 0x0042B32C: slt         $v0, $s1, $s4
    ctx->r2 = SIGNED(ctx->r17) < SIGNED(ctx->r20) ? 1 : 0;
    // 0x0042B330: beq         $v0, $zero, L_0042B370
    if (ctx->r2 == 0) {
        // 0x0042B334: sll         $v0, $s1, 2
        ctx->r2 = S32(ctx->r17 << 2);
            goto L_0042B370;
    }
    // 0x0042B334: sll         $v0, $s1, 2
    ctx->r2 = S32(ctx->r17 << 2);
    // 0x0042B338: addu        $v0, $v0, $s1
    ctx->r2 = ADD32(ctx->r2, ctx->r17);
    // 0x0042B33C: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x0042B340: addu        $v0, $v0, $s1
    ctx->r2 = ADD32(ctx->r2, ctx->r17);
    // 0x0042B344: sll         $s2, $v0, 3
    ctx->r18 = S32(ctx->r2 << 3);
L_0042B348:
    // 0x0042B348: lw          $v0, 0xE0($s3)
    ctx->r2 = MEM_W(ctx->r19, 0XE0);
    // 0x0042B34C: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x0042B350: addu        $s0, $v0, $s2
    ctx->r16 = ADD32(ctx->r2, ctx->r18);
    // 0x0042B354: jal         0x0021F1B4
    // 0x0042B358: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_0021F1B4(rdram, ctx);
        goto after_20;
    // 0x0042B358: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_20:
    // 0x0042B35C: jal         0x0021A344
    // 0x0042B360: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_0021A344(rdram, ctx);
        goto after_21;
    // 0x0042B360: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_21:
    // 0x0042B364: slt         $v0, $s1, $s4
    ctx->r2 = SIGNED(ctx->r17) < SIGNED(ctx->r20) ? 1 : 0;
    // 0x0042B368: bne         $v0, $zero, L_0042B348
    if (ctx->r2 != 0) {
        // 0x0042B36C: addiu       $s2, $s2, 0x288
        ctx->r18 = ADD32(ctx->r18, 0X288);
            goto L_0042B348;
    }
    // 0x0042B36C: addiu       $s2, $s2, 0x288
    ctx->r18 = ADD32(ctx->r18, 0X288);
L_0042B370:
    // 0x0042B370: lui         $s1, 0x8012
    ctx->r17 = S32(0X8012 << 16);
    // 0x0042B374: addiu       $s1, $s1, -0x6790
    ctx->r17 = ADD32(ctx->r17, -0X6790);
    // 0x0042B378: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0042B37C: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x0042B380: jal         0x0042E894
    // 0x0042B384: sw          $v0, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r2;
    func_0042E894(rdram, ctx);
        goto after_22;
    // 0x0042B384: sw          $v0, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r2;
    after_22:
    // 0x0042B388: addiu       $s0, $s1, 0x40
    ctx->r16 = ADD32(ctx->r17, 0X40);
    // 0x0042B38C: jal         0x0042FEEC
    // 0x0042B390: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_0042FEEC(rdram, ctx);
        goto after_23;
    // 0x0042B390: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_23:
    // 0x0042B394: jal         0x0027ECF0
    // 0x0042B398: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_0027ECF0(rdram, ctx);
        goto after_24;
    // 0x0042B398: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_24:
    // 0x0042B39C: lbu         $v0, 0x1281($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X1281);
    // 0x0042B3A0: bne         $v0, $zero, L_0042B3BC
    if (ctx->r2 != 0) {
        // 0x0042B3A4: nop
    
            goto L_0042B3BC;
    }
    // 0x0042B3A4: nop

    // 0x0042B3A8: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x0042B3AC: addu        $at, $s3, $at
    ctx->r1 = ADD32(ctx->r19, ctx->r1);
    // 0x0042B3B0: lw          $v0, -0x705C($at)
    ctx->r2 = MEM_W(ctx->r1, -0X705C);
    // 0x0042B3B4: beq         $v0, $zero, L_0042B3C4
    if (ctx->r2 == 0) {
        // 0x0042B3B8: nop
    
            goto L_0042B3C4;
    }
    // 0x0042B3B8: nop

L_0042B3BC:
    // 0x0042B3BC: jal         0x0042BF48
    // 0x0042B3C0: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    func_0042BF48(rdram, ctx);
        goto after_25;
    // 0x0042B3C0: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    after_25:
L_0042B3C4:
    // 0x0042B3C4: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x0042B3C8: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x0042B3CC: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x0042B3D0: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x0042B3D4: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x0042B3D8: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x0042B3DC: jr          $ra
    // 0x0042B3E0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x0042B3E0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void entry_0042AF44(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0042AF44: slti        $v0, $v1, 0x1DB3
    ctx->r2 = SIGNED(ctx->r3) < 0X1DB3 ? 1 : 0;
    // 0x0042AF48: beq         $v0, $zero, L_0042AF70
    if (ctx->r2 == 0) {
        // 0x0042AF4C: slti        $v0, $v1, 0x1DB1
        ctx->r2 = SIGNED(ctx->r3) < 0X1DB1 ? 1 : 0;
            goto L_0042AF70;
    }
    // 0x0042AF4C: slti        $v0, $v1, 0x1DB1
    ctx->r2 = SIGNED(ctx->r3) < 0X1DB1 ? 1 : 0;
    // 0x0042AF50: bne         $v0, $zero, L_0042AF70
    if (ctx->r2 != 0) {
        // 0x0042AF54: nop
    
            goto L_0042AF70;
    }
    // 0x0042AF54: nop

    // 0x0042AF58: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0042AF5C: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x0042AF60: addu        $at, $s3, $at
    ctx->r1 = ADD32(ctx->r19, ctx->r1);
    // 0x0042AF64: sw          $v0, -0x705C($at)
    MEM_W(-0X705C, ctx->r1) = ctx->r2;
    // 0x0042AF68: j           L_0042AF7C
    // 0x0042AF6C: nop

        goto L_0042AF7C;
    // 0x0042AF6C: nop

L_0042AF70:
    // 0x0042AF70: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x0042AF74: addu        $at, $s3, $at
    ctx->r1 = ADD32(ctx->r19, ctx->r1);
    // 0x0042AF78: sw          $zero, -0x705C($at)
    MEM_W(-0X705C, ctx->r1) = 0;
L_0042AF7C:
    // 0x0042AF7C: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x0042AF80: addu        $at, $s3, $at
    ctx->r1 = ADD32(ctx->r19, ctx->r1);
    // 0x0042AF84: lw          $v1, -0x7030($at)
    ctx->r3 = MEM_W(ctx->r1, -0X7030);
    // 0x0042AF88: slti        $v0, $v1, 0x1CEA
    ctx->r2 = SIGNED(ctx->r3) < 0X1CEA ? 1 : 0;
    // 0x0042AF8C: beq         $v0, $zero, L_0042AFD8
    if (ctx->r2 == 0) {
        // 0x0042AF90: slti        $v0, $v1, 0x1CE8
        ctx->r2 = SIGNED(ctx->r3) < 0X1CE8 ? 1 : 0;
            goto L_0042AFD8;
    }
    // 0x0042AF90: slti        $v0, $v1, 0x1CE8
    ctx->r2 = SIGNED(ctx->r3) < 0X1CE8 ? 1 : 0;
    // 0x0042AF94: beq         $v0, $zero, L_0042B010
    if (ctx->r2 == 0) {
        // 0x0042AF98: addiu       $v0, $zero, 0x1BBC
        ctx->r2 = ADD32(0, 0X1BBC);
            goto L_0042B010;
    }
    // 0x0042AF98: addiu       $v0, $zero, 0x1BBC
    ctx->r2 = ADD32(0, 0X1BBC);
    // 0x0042AF9C: beq         $v1, $v0, L_0042B010
    if (ctx->r3 == ctx->r2) {
        // 0x0042AFA0: slti        $v0, $v1, 0x1BBD
        ctx->r2 = SIGNED(ctx->r3) < 0X1BBD ? 1 : 0;
            goto L_0042B010;
    }
    // 0x0042AFA0: slti        $v0, $v1, 0x1BBD
    ctx->r2 = SIGNED(ctx->r3) < 0X1BBD ? 1 : 0;
    // 0x0042AFA4: beq         $v0, $zero, L_0042AFBC
    if (ctx->r2 == 0) {
        // 0x0042AFA8: addiu       $v0, $zero, 0x123A
        ctx->r2 = ADD32(0, 0X123A);
            goto L_0042AFBC;
    }
    // 0x0042AFA8: addiu       $v0, $zero, 0x123A
    ctx->r2 = ADD32(0, 0X123A);
    // 0x0042AFAC: beq         $v1, $v0, L_0042B010
    if (ctx->r3 == ctx->r2) {
        // 0x0042AFB0: addiu       $s0, $zero, 0x320
        ctx->r16 = ADD32(0, 0X320);
            goto L_0042B010;
    }
    // 0x0042AFB0: addiu       $s0, $zero, 0x320
    ctx->r16 = ADD32(0, 0X320);
    // 0x0042AFB4: j           L_0042B024
    // 0x0042AFB8: nop

        goto L_0042B024;
    // 0x0042AFB8: nop

L_0042AFBC:
    // 0x0042AFBC: addiu       $v0, $zero, 0x1C20
    ctx->r2 = ADD32(0, 0X1C20);
    // 0x0042AFC0: beq         $v1, $v0, L_0042B010
    if (ctx->r3 == ctx->r2) {
        // 0x0042AFC4: addiu       $v0, $zero, 0x1C84
        ctx->r2 = ADD32(0, 0X1C84);
            goto L_0042B010;
    }
    // 0x0042AFC4: addiu       $v0, $zero, 0x1C84
    ctx->r2 = ADD32(0, 0X1C84);
    // 0x0042AFC8: beq         $v1, $v0, L_0042B010
    if (ctx->r3 == ctx->r2) {
        // 0x0042AFCC: addiu       $s0, $zero, 0x320
        ctx->r16 = ADD32(0, 0X320);
            goto L_0042B010;
    }
    // 0x0042AFCC: addiu       $s0, $zero, 0x320
    ctx->r16 = ADD32(0, 0X320);
    // 0x0042AFD0: j           L_0042B024
    // 0x0042AFD4: nop

        goto L_0042B024;
    // 0x0042AFD4: nop

L_0042AFD8:
    // 0x0042AFD8: addiu       $v0, $zero, 0x1DB1
    ctx->r2 = ADD32(0, 0X1DB1);
    // 0x0042AFDC: beq         $v1, $v0, L_0042B018
    if (ctx->r3 == ctx->r2) {
        // 0x0042AFE0: slti        $v0, $v1, 0x1DB2
        ctx->r2 = SIGNED(ctx->r3) < 0X1DB2 ? 1 : 0;
            goto L_0042B018;
    }
    // 0x0042AFE0: slti        $v0, $v1, 0x1DB2
    ctx->r2 = SIGNED(ctx->r3) < 0X1DB2 ? 1 : 0;
    // 0x0042AFE4: beq         $v0, $zero, L_0042B004
    if (ctx->r2 == 0) {
        // 0x0042AFE8: slti        $v0, $v1, 0x1D4E
        ctx->r2 = SIGNED(ctx->r3) < 0X1D4E ? 1 : 0;
            goto L_0042B004;
    }
    // 0x0042AFE8: slti        $v0, $v1, 0x1D4E
    ctx->r2 = SIGNED(ctx->r3) < 0X1D4E ? 1 : 0;
    // 0x0042AFEC: beq         $v0, $zero, L_0042B020
    if (ctx->r2 == 0) {
        // 0x0042AFF0: slti        $v0, $v1, 0x1D4C
        ctx->r2 = SIGNED(ctx->r3) < 0X1D4C ? 1 : 0;
            goto L_0042B020;
    }
    // 0x0042AFF0: slti        $v0, $v1, 0x1D4C
    ctx->r2 = SIGNED(ctx->r3) < 0X1D4C ? 1 : 0;
    // 0x0042AFF4: bne         $v0, $zero, L_0042B024
    if (ctx->r2 != 0) {
        // 0x0042AFF8: addiu       $s0, $zero, 0x320
        ctx->r16 = ADD32(0, 0X320);
            goto L_0042B024;
    }
    // 0x0042AFF8: addiu       $s0, $zero, 0x320
    ctx->r16 = ADD32(0, 0X320);
    // 0x0042AFFC: j           L_0042B024
    // 0x0042B000: addiu       $s0, $zero, 0xC80
    ctx->r16 = ADD32(0, 0XC80);
        goto L_0042B024;
    // 0x0042B000: addiu       $s0, $zero, 0xC80
    ctx->r16 = ADD32(0, 0XC80);
L_0042B004:
    // 0x0042B004: addiu       $v0, $zero, 0x1DB2
    ctx->r2 = ADD32(0, 0X1DB2);
    // 0x0042B008: bne         $v1, $v0, L_0042B024
    if (ctx->r3 != ctx->r2) {
        // 0x0042B00C: addiu       $s0, $zero, 0x320
        ctx->r16 = ADD32(0, 0X320);
            goto L_0042B024;
    }
    // 0x0042B00C: addiu       $s0, $zero, 0x320
    ctx->r16 = ADD32(0, 0X320);
L_0042B010:
    // 0x0042B010: j           L_0042B024
    // 0x0042B014: addiu       $s0, $zero, 0xC80
    ctx->r16 = ADD32(0, 0XC80);
        goto L_0042B024;
    // 0x0042B014: addiu       $s0, $zero, 0xC80
    ctx->r16 = ADD32(0, 0XC80);
L_0042B018:
    // 0x0042B018: j           L_0042B024
    // 0x0042B01C: addiu       $s0, $zero, 0x4B0
    ctx->r16 = ADD32(0, 0X4B0);
        goto L_0042B024;
    // 0x0042B01C: addiu       $s0, $zero, 0x4B0
    ctx->r16 = ADD32(0, 0X4B0);
L_0042B020:
    // 0x0042B020: addiu       $s0, $zero, 0x320
    ctx->r16 = ADD32(0, 0X320);
L_0042B024:
    // 0x0042B024: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x0042B028: lbu         $v0, -0x550F($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X550F);
    // 0x0042B02C: bnel        $v0, $zero, L_0042B034
    if (ctx->r2 != 0) {
        // 0x0042B030: addiu       $s0, $s0, 0x200
        ctx->r16 = ADD32(ctx->r16, 0X200);
            goto L_0042B034;
    }
    goto skip_0;
    // 0x0042B030: addiu       $s0, $s0, 0x200
    ctx->r16 = ADD32(ctx->r16, 0X200);
    skip_0:
L_0042B034:
    // 0x0042B034: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0042B038: sll         $a1, $s0, 6
    ctx->r5 = S32(ctx->r16 << 6);
    // 0x0042B03C: lui         $a3, 0x800A
    ctx->r7 = S32(0X800A << 16);
    // 0x0042B040: addiu       $a3, $a3, 0x5EB4
    ctx->r7 = ADD32(ctx->r7, 0X5EB4);
    // 0x0042B044: jal         0x00204EDC
    // 0x0042B048: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    func_00204EDC(rdram, ctx);
        goto after_0;
    // 0x0042B048: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_0:
    // 0x0042B04C: addiu       $a0, $s3, 0xD0
    ctx->r4 = ADD32(ctx->r19, 0XD0);
    // 0x0042B050: sw          $v0, 0xC8($s3)
    MEM_W(0XC8, ctx->r19) = ctx->r2;
    // 0x0042B054: lw          $a1, 0x0($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X0);
    // 0x0042B058: jal         0x00429F20
    // 0x0042B05C: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    func_00429F20(rdram, ctx);
        goto after_1;
    // 0x0042B05C: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    after_1:
    // 0x0042B060: lw          $a0, 0x38($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X38);
    // 0x0042B064: lw          $a1, 0xC($s3)
    ctx->r5 = MEM_W(ctx->r19, 0XC);
    // 0x0042B068: jal         0x00201848
    // 0x0042B06C: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    func_00201848(rdram, ctx);
        goto after_2;
    // 0x0042B06C: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    after_2:
    // 0x0042B070: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0042B074: addiu       $a1, $s3, 0x4C
    ctx->r5 = ADD32(ctx->r19, 0X4C);
    // 0x0042B078: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x0042B07C: lui         $a3, 0x800A
    ctx->r7 = S32(0X800A << 16);
    // 0x0042B080: addiu       $a3, $a3, 0x5EC0
    ctx->r7 = ADD32(ctx->r7, 0X5EC0);
    // 0x0042B084: jal         0x00205B94
    // 0x0042B088: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    func_00205B94(rdram, ctx);
        goto after_3;
    // 0x0042B088: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    after_3:
    // 0x0042B08C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0042B090: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x0042B094: sw          $v0, 0x98($s3)
    MEM_W(0X98, ctx->r19) = ctx->r2;
    // 0x0042B098: lui         $v0, 0x43
    ctx->r2 = S32(0X43 << 16);
    // 0x0042B09C: addiu       $v0, $v0, -0x4950
    ctx->r2 = ADD32(ctx->r2, -0X4950);
    // 0x0042B0A0: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x0042B0A4: lui         $v0, 0x800A
    ctx->r2 = S32(0X800A << 16);
    // 0x0042B0A8: addiu       $v0, $v0, 0x5ECC
    ctx->r2 = ADD32(ctx->r2, 0X5ECC);
    // 0x0042B0AC: sw          $s3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r19;
    // 0x0042B0B0: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x0042B0B4: lw          $a1, 0x4C($s3)
    ctx->r5 = MEM_W(ctx->r19, 0X4C);
    // 0x0042B0B8: jal         0x00205D0C
    // 0x0042B0BC: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    func_00205D0C(rdram, ctx);
        goto after_4;
    // 0x0042B0BC: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    after_4:
    // 0x0042B0C0: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0042B0C4: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x0042B0C8: sw          $v0, 0x9C($s3)
    MEM_W(0X9C, ctx->r19) = ctx->r2;
    // 0x0042B0CC: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x0042B0D0: lui         $s1, 0x20
    ctx->r17 = S32(0X20 << 16);
    // 0x0042B0D4: addiu       $s1, $s1, 0xAE0
    ctx->r17 = ADD32(ctx->r17, 0XAE0);
    // 0x0042B0D8: sw          $v0, 0x58($s3)
    MEM_W(0X58, ctx->r19) = ctx->r2;
    // 0x0042B0DC: lui         $v0, 0x800A
    ctx->r2 = S32(0X800A << 16);
    // 0x0042B0E0: addiu       $v0, $v0, 0x5ED8
    ctx->r2 = ADD32(ctx->r2, 0X5ED8);
    // 0x0042B0E4: sw          $s3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r19;
    // 0x0042B0E8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x0042B0EC: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x0042B0F0: lw          $a1, 0x4C($s3)
    ctx->r5 = MEM_W(ctx->r19, 0X4C);
    // 0x0042B0F4: jal         0x00205D0C
    // 0x0042B0F8: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    func_00205D0C(rdram, ctx);
        goto after_5;
    // 0x0042B0F8: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    after_5:
    // 0x0042B0FC: lw          $a0, 0x4C($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X4C);
    // 0x0042B100: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x0042B104: sw          $v0, 0xA0($s3)
    MEM_W(0XA0, ctx->r19) = ctx->r2;
    // 0x0042B108: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x0042B10C: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    // 0x0042B110: jal         0x00201848
    // 0x0042B114: sw          $v0, 0x54($s3)
    MEM_W(0X54, ctx->r19) = ctx->r2;
    func_00201848(rdram, ctx);
        goto after_6;
    // 0x0042B114: sw          $v0, 0x54($s3)
    MEM_W(0X54, ctx->r19) = ctx->r2;
    after_6:
    // 0x0042B118: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0042B11C: addiu       $a1, $s3, 0x50
    ctx->r5 = ADD32(ctx->r19, 0X50);
    // 0x0042B120: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    // 0x0042B124: lui         $a3, 0x800A
    ctx->r7 = S32(0X800A << 16);
    // 0x0042B128: addiu       $a3, $a3, 0x5EE4
    ctx->r7 = ADD32(ctx->r7, 0X5EE4);
    // 0x0042B12C: jal         0x00205B94
    // 0x0042B130: sw          $a2, 0x20($s3)
    MEM_W(0X20, ctx->r19) = ctx->r6;
    func_00205B94(rdram, ctx);
        goto after_7;
    // 0x0042B130: sw          $a2, 0x20($s3)
    MEM_W(0X20, ctx->r19) = ctx->r6;
    after_7:
    // 0x0042B134: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0042B138: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
    // 0x0042B13C: sw          $v0, 0xA4($s3)
    MEM_W(0XA4, ctx->r19) = ctx->r2;
    // 0x0042B140: lui         $v0, 0x43
    ctx->r2 = S32(0X43 << 16);
    // 0x0042B144: addiu       $v0, $v0, -0x4C1C
    ctx->r2 = ADD32(ctx->r2, -0X4C1C);
    // 0x0042B148: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x0042B14C: lui         $v0, 0x800A
    ctx->r2 = S32(0X800A << 16);
    // 0x0042B150: addiu       $v0, $v0, 0x5EF8
    ctx->r2 = ADD32(ctx->r2, 0X5EF8);
    // 0x0042B154: sw          $s3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r19;
    // 0x0042B158: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x0042B15C: lw          $a1, 0x4C($s3)
    ctx->r5 = MEM_W(ctx->r19, 0X4C);
    // 0x0042B160: jal         0x00205D0C
    // 0x0042B164: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    func_00205D0C(rdram, ctx);
        goto after_8;
    // 0x0042B164: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    after_8:
    // 0x0042B168: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0042B16C: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x0042B170: sw          $v0, 0xB4($s3)
    MEM_W(0XB4, ctx->r19) = ctx->r2;
    // 0x0042B174: lui         $v0, 0x43
    ctx->r2 = S32(0X43 << 16);
    // 0x0042B178: addiu       $v0, $v0, -0x32FC
    ctx->r2 = ADD32(ctx->r2, -0X32FC);
    // 0x0042B17C: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x0042B180: lui         $v0, 0x800A
    ctx->r2 = S32(0X800A << 16);
    // 0x0042B184: addiu       $v0, $v0, 0x5F00
    ctx->r2 = ADD32(ctx->r2, 0X5F00);
    // 0x0042B188: sw          $s3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r19;
    // 0x0042B18C: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x0042B190: lw          $a1, 0x4C($s3)
    ctx->r5 = MEM_W(ctx->r19, 0X4C);
    // 0x0042B194: jal         0x00205D0C
    // 0x0042B198: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    func_00205D0C(rdram, ctx);
        goto after_9;
    // 0x0042B198: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    after_9:
    // 0x0042B19C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0042B1A0: addu        $a2, $a0, $zero
    ctx->r6 = ADD32(ctx->r4, 0);
    // 0x0042B1A4: sw          $v0, 0xCC($s3)
    MEM_W(0XCC, ctx->r19) = ctx->r2;
    // 0x0042B1A8: lui         $v0, 0x800A
    ctx->r2 = S32(0X800A << 16);
    // 0x0042B1AC: addiu       $v0, $v0, 0x5F0C
    ctx->r2 = ADD32(ctx->r2, 0X5F0C);
    // 0x0042B1B0: sw          $s3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r19;
    // 0x0042B1B4: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x0042B1B8: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x0042B1BC: lw          $a1, 0x4C($s3)
    ctx->r5 = MEM_W(ctx->r19, 0X4C);
    // 0x0042B1C0: jal         0x00205D0C
    // 0x0042B1C4: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    func_00205D0C(rdram, ctx);
        goto after_10;
    // 0x0042B1C4: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    after_10:
    // 0x0042B1C8: sw          $v0, 0xA8($s3)
    MEM_W(0XA8, ctx->r19) = ctx->r2;
    // 0x0042B1CC: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x0042B1D0: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x0042B1D4: addu        $at, $s3, $at
    ctx->r1 = ADD32(ctx->r19, ctx->r1);
    // 0x0042B1D8: sw          $v0, -0x71B0($at)
    MEM_W(-0X71B0, ctx->r1) = ctx->r2;
    // 0x0042B1DC: jal         0x0042AA80
    // 0x0042B1E0: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    func_0042AA80(rdram, ctx);
        goto after_11;
    // 0x0042B1E0: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    after_11:
    // 0x0042B1E4: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0042B1E8: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    // 0x0042B1EC: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x0042B1F0: addu        $at, $s3, $at
    ctx->r1 = ADD32(ctx->r19, ctx->r1);
    // 0x0042B1F4: lw          $v0, -0x71B0($at)
    ctx->r2 = MEM_W(ctx->r1, -0X71B0);
    // 0x0042B1F8: lbu         $v1, 0x10($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X10);
    // 0x0042B1FC: lui         $v0, 0x800A
    ctx->r2 = S32(0X800A << 16);
    // 0x0042B200: addiu       $v0, $v0, 0x5F18
    ctx->r2 = ADD32(ctx->r2, 0X5F18);
    // 0x0042B204: sw          $s3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r19;
    // 0x0042B208: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x0042B20C: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x0042B210: lw          $a1, 0x4C($s3)
    ctx->r5 = MEM_W(ctx->r19, 0X4C);
    // 0x0042B214: srl         $v1, $v1, 2
    ctx->r3 = S32(U32(ctx->r3) >> 2);
    // 0x0042B218: andi        $v1, $v1, 0x1
    ctx->r3 = ctx->r3 & 0X1;
    // 0x0042B21C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0042B220: sw          $v1, -0x4760($at)
    MEM_W(-0X4760, ctx->r1) = ctx->r3;
    // 0x0042B224: jal         0x00205D0C
    // 0x0042B228: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    func_00205D0C(rdram, ctx);
        goto after_12;
    // 0x0042B228: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    after_12:
    // 0x0042B22C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0042B230: sw          $v0, 0xAC($s3)
    MEM_W(0XAC, ctx->r19) = ctx->r2;
    // 0x0042B234: lw          $v1, 0x0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X0);
    // 0x0042B238: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x0042B23C: addiu       $v0, $v1, 0x8
    ctx->r2 = ADD32(ctx->r3, 0X8);
    // 0x0042B240: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x0042B244: addu        $at, $s3, $at
    ctx->r1 = ADD32(ctx->r19, ctx->r1);
    // 0x0042B248: sw          $v0, -0x7164($at)
    MEM_W(-0X7164, ctx->r1) = ctx->r2;
    // 0x0042B24C: lw          $v1, 0x4($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X4);
    // 0x0042B250: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0042B254: sw          $v0, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r2;
    // 0x0042B258: lui         $v0, 0x43
    ctx->r2 = S32(0X43 << 16);
    // 0x0042B25C: addiu       $v0, $v0, -0x45C0
    ctx->r2 = ADD32(ctx->r2, -0X45C0);
    // 0x0042B260: sw          $zero, 0xE0($s3)
    MEM_W(0XE0, ctx->r19) = 0;
    // 0x0042B264: sw          $zero, 0xE8($s3)
    MEM_W(0XE8, ctx->r19) = 0;
    // 0x0042B268: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x0042B26C: addu        $at, $s3, $at
    ctx->r1 = ADD32(ctx->r19, ctx->r1);
    // 0x0042B270: sw          $v1, -0x7160($at)
    MEM_W(-0X7160, ctx->r1) = ctx->r3;
    // 0x0042B274: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x0042B278: lui         $v0, 0x800A
    ctx->r2 = S32(0X800A << 16);
    // 0x0042B27C: addiu       $v0, $v0, 0x5F24
    ctx->r2 = ADD32(ctx->r2, 0X5F24);
    // 0x0042B280: sw          $s3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r19;
    // 0x0042B284: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x0042B288: lw          $a1, 0x4C($s3)
    ctx->r5 = MEM_W(ctx->r19, 0X4C);
    // 0x0042B28C: jal         0x00205D0C
    // 0x0042B290: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    func_00205D0C(rdram, ctx);
        goto after_13;
    // 0x0042B290: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    after_13:
    // 0x0042B294: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x0042B298: sw          $v0, 0xB0($s3)
    MEM_W(0XB0, ctx->r19) = ctx->r2;
    // 0x0042B29C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x0042B2A0: jal         0x0042C79C
    // 0x0042B2A4: sw          $v0, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r2;
    func_0042C79C(rdram, ctx);
        goto after_14;
    // 0x0042B2A4: sw          $v0, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r2;
    after_14:
    // 0x0042B2A8: lw          $s4, 0xE8($s3)
    ctx->r20 = MEM_W(ctx->r19, 0XE8);
    // 0x0042B2AC: lw          $s1, 0xE4($s3)
    ctx->r17 = MEM_W(ctx->r19, 0XE4);
    // 0x0042B2B0: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x0042B2B4: sw          $v0, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r2;
    // 0x0042B2B8: slt         $v0, $s1, $s4
    ctx->r2 = SIGNED(ctx->r17) < SIGNED(ctx->r20) ? 1 : 0;
    // 0x0042B2BC: beq         $v0, $zero, L_0042B2F0
    if (ctx->r2 == 0) {
        // 0x0042B2C0: sll         $v0, $s1, 2
        ctx->r2 = S32(ctx->r17 << 2);
            goto L_0042B2F0;
    }
    // 0x0042B2C0: sll         $v0, $s1, 2
    ctx->r2 = S32(ctx->r17 << 2);
    // 0x0042B2C4: addu        $v0, $v0, $s1
    ctx->r2 = ADD32(ctx->r2, ctx->r17);
    // 0x0042B2C8: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x0042B2CC: addu        $v0, $v0, $s1
    ctx->r2 = ADD32(ctx->r2, ctx->r17);
    // 0x0042B2D0: sll         $s0, $v0, 3
    ctx->r16 = S32(ctx->r2 << 3);
L_0042B2D4:
    // 0x0042B2D4: lw          $a0, 0xE0($s3)
    ctx->r4 = MEM_W(ctx->r19, 0XE0);
    // 0x0042B2D8: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x0042B2DC: jal         0x0021E5D4
    // 0x0042B2E0: addu        $a0, $a0, $s0
    ctx->r4 = ADD32(ctx->r4, ctx->r16);
    func_0021E5D4(rdram, ctx);
        goto after_15;
    // 0x0042B2E0: addu        $a0, $a0, $s0
    ctx->r4 = ADD32(ctx->r4, ctx->r16);
    after_15:
    // 0x0042B2E4: slt         $v0, $s1, $s4
    ctx->r2 = SIGNED(ctx->r17) < SIGNED(ctx->r20) ? 1 : 0;
    // 0x0042B2E8: bne         $v0, $zero, L_0042B2D4
    if (ctx->r2 != 0) {
        // 0x0042B2EC: addiu       $s0, $s0, 0x288
        ctx->r16 = ADD32(ctx->r16, 0X288);
            goto L_0042B2D4;
    }
    // 0x0042B2EC: addiu       $s0, $s0, 0x288
    ctx->r16 = ADD32(ctx->r16, 0X288);
L_0042B2F0:
    // 0x0042B2F0: lui         $s1, 0x8012
    ctx->r17 = S32(0X8012 << 16);
    // 0x0042B2F4: lw          $s1, -0x6770($s1)
    ctx->r17 = MEM_W(ctx->r17, -0X6770);
    // 0x0042B2F8: beq         $s1, $zero, L_0042B31C
    if (ctx->r17 == 0) {
        // 0x0042B2FC: addu        $s0, $s1, $zero
        ctx->r16 = ADD32(ctx->r17, 0);
            goto L_0042B31C;
    }
    // 0x0042B2FC: addu        $s0, $s1, $zero
    ctx->r16 = ADD32(ctx->r17, 0);
L_0042B300:
    // 0x0042B300: jal         0x0021E5D4
    // 0x0042B304: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_0021E5D4(rdram, ctx);
        goto after_16;
    // 0x0042B304: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_16:
    // 0x0042B308: jal         0x0021E5D4
    // 0x0042B30C: addiu       $a0, $s0, 0x288
    ctx->r4 = ADD32(ctx->r16, 0X288);
    func_0021E5D4(rdram, ctx);
        goto after_17;
    // 0x0042B30C: addiu       $a0, $s0, 0x288
    ctx->r4 = ADD32(ctx->r16, 0X288);
    after_17:
    // 0x0042B310: lw          $s1, 0x1320($s1)
    ctx->r17 = MEM_W(ctx->r17, 0X1320);
    // 0x0042B314: bne         $s1, $zero, L_0042B300
    if (ctx->r17 != 0) {
        // 0x0042B318: addu        $s0, $s1, $zero
        ctx->r16 = ADD32(ctx->r17, 0);
            goto L_0042B300;
    }
    // 0x0042B318: addu        $s0, $s1, $zero
    ctx->r16 = ADD32(ctx->r17, 0);
L_0042B31C:
    // 0x0042B31C: jal         0x0042C840
    // 0x0042B320: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    func_0042C840(rdram, ctx);
        goto after_18;
    // 0x0042B320: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    after_18:
    // 0x0042B324: lw          $s4, 0xE8($s3)
    ctx->r20 = MEM_W(ctx->r19, 0XE8);
    // 0x0042B328: lw          $s1, 0xE4($s3)
    ctx->r17 = MEM_W(ctx->r19, 0XE4);
    // 0x0042B32C: slt         $v0, $s1, $s4
    ctx->r2 = SIGNED(ctx->r17) < SIGNED(ctx->r20) ? 1 : 0;
    // 0x0042B330: beq         $v0, $zero, L_0042B370
    if (ctx->r2 == 0) {
        // 0x0042B334: sll         $v0, $s1, 2
        ctx->r2 = S32(ctx->r17 << 2);
            goto L_0042B370;
    }
    // 0x0042B334: sll         $v0, $s1, 2
    ctx->r2 = S32(ctx->r17 << 2);
    // 0x0042B338: addu        $v0, $v0, $s1
    ctx->r2 = ADD32(ctx->r2, ctx->r17);
    // 0x0042B33C: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x0042B340: addu        $v0, $v0, $s1
    ctx->r2 = ADD32(ctx->r2, ctx->r17);
    // 0x0042B344: sll         $s2, $v0, 3
    ctx->r18 = S32(ctx->r2 << 3);
L_0042B348:
    // 0x0042B348: lw          $v0, 0xE0($s3)
    ctx->r2 = MEM_W(ctx->r19, 0XE0);
    // 0x0042B34C: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x0042B350: addu        $s0, $v0, $s2
    ctx->r16 = ADD32(ctx->r2, ctx->r18);
    // 0x0042B354: jal         0x0021F1B4
    // 0x0042B358: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_0021F1B4(rdram, ctx);
        goto after_19;
    // 0x0042B358: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_19:
    // 0x0042B35C: jal         0x0021A344
    // 0x0042B360: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_0021A344(rdram, ctx);
        goto after_20;
    // 0x0042B360: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_20:
    // 0x0042B364: slt         $v0, $s1, $s4
    ctx->r2 = SIGNED(ctx->r17) < SIGNED(ctx->r20) ? 1 : 0;
    // 0x0042B368: bne         $v0, $zero, L_0042B348
    if (ctx->r2 != 0) {
        // 0x0042B36C: addiu       $s2, $s2, 0x288
        ctx->r18 = ADD32(ctx->r18, 0X288);
            goto L_0042B348;
    }
    // 0x0042B36C: addiu       $s2, $s2, 0x288
    ctx->r18 = ADD32(ctx->r18, 0X288);
L_0042B370:
    // 0x0042B370: lui         $s1, 0x8012
    ctx->r17 = S32(0X8012 << 16);
    // 0x0042B374: addiu       $s1, $s1, -0x6790
    ctx->r17 = ADD32(ctx->r17, -0X6790);
    // 0x0042B378: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0042B37C: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x0042B380: jal         0x0042E894
    // 0x0042B384: sw          $v0, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r2;
    func_0042E894(rdram, ctx);
        goto after_21;
    // 0x0042B384: sw          $v0, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r2;
    after_21:
    // 0x0042B388: addiu       $s0, $s1, 0x40
    ctx->r16 = ADD32(ctx->r17, 0X40);
    // 0x0042B38C: jal         0x0042FEEC
    // 0x0042B390: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_0042FEEC(rdram, ctx);
        goto after_22;
    // 0x0042B390: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_22:
    // 0x0042B394: jal         0x0027ECF0
    // 0x0042B398: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_0027ECF0(rdram, ctx);
        goto after_23;
    // 0x0042B398: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_23:
    // 0x0042B39C: lbu         $v0, 0x1281($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X1281);
    // 0x0042B3A0: bne         $v0, $zero, L_0042B3BC
    if (ctx->r2 != 0) {
        // 0x0042B3A4: nop
    
            goto L_0042B3BC;
    }
    // 0x0042B3A4: nop

    // 0x0042B3A8: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x0042B3AC: addu        $at, $s3, $at
    ctx->r1 = ADD32(ctx->r19, ctx->r1);
    // 0x0042B3B0: lw          $v0, -0x705C($at)
    ctx->r2 = MEM_W(ctx->r1, -0X705C);
    // 0x0042B3B4: beq         $v0, $zero, L_0042B3C4
    if (ctx->r2 == 0) {
        // 0x0042B3B8: nop
    
            goto L_0042B3C4;
    }
    // 0x0042B3B8: nop

L_0042B3BC:
    // 0x0042B3BC: jal         0x0042BF48
    // 0x0042B3C0: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    func_0042BF48(rdram, ctx);
        goto after_24;
    // 0x0042B3C0: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    after_24:
L_0042B3C4:
    // 0x0042B3C4: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x0042B3C8: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x0042B3CC: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x0042B3D0: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x0042B3D4: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x0042B3D8: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x0042B3DC: jr          $ra
    // 0x0042B3E0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x0042B3E0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void entry_0042BC8C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_0042BC28:
    // 0x0042BC8C: lw          $t1, 0xC($s6)
    ctx->r9 = MEM_W(ctx->r22, 0XC);
    // 0x0042BC90: sw          $t3, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r11;
    // 0x0042BC94: sw          $t0, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->r8;
    // 0x0042BC98: sw          $t1, 0x8($t2)
    MEM_W(0X8, ctx->r10) = ctx->r9;
    // 0x0042BC9C: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x0042BCA0: lwc1        $f0, -0x66D4($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X66D4);
    // 0x0042BCA4: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x0042BCA8: lw          $a0, 0xB0($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XB0);
    // 0x0042BCAC: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x0042BCB0: swc1        $f0, -0x66D4($at)
    MEM_W(-0X66D4, ctx->r1) = ctx->f0.u32l;
    // 0x0042BCB4: jal         0x00220A1C
    // 0x0042BCB8: addiu       $a1, $s6, 0x4
    ctx->r5 = ADD32(ctx->r22, 0X4);
    func_00220A1C(rdram, ctx);
        goto after_0;
    // 0x0042BCB8: addiu       $a1, $s6, 0x4
    ctx->r5 = ADD32(ctx->r22, 0X4);
    after_0:
    // 0x0042BCBC: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x0042BCC0: lw          $v1, -0x6788($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X6788);
    // 0x0042BCC4: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x0042BCC8: sw          $v0, -0x66B8($at)
    MEM_W(-0X66B8, ctx->r1) = ctx->r2;
    // 0x0042BCCC: blez        $v1, L_0042BDCC
    if (SIGNED(ctx->r3) <= 0) {
        // 0x0042BCD0: addu        $s2, $zero, $zero
        ctx->r18 = ADD32(0, 0);
            goto L_0042BDCC;
    }
    // 0x0042BCD0: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    // 0x0042BCD4: addu        $s4, $s2, $zero
    ctx->r20 = ADD32(ctx->r18, 0);
    // 0x0042BCD8: sll         $v0, $s5, 2
    ctx->r2 = S32(ctx->r21 << 2);
    // 0x0042BCDC: addu        $v0, $v0, $s5
    ctx->r2 = ADD32(ctx->r2, ctx->r21);
    // 0x0042BCE0: lw          $t3, 0x78($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X78);
    // 0x0042BCE4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x0042BCE8: addu        $s0, $v0, $t3
    ctx->r16 = ADD32(ctx->r2, ctx->r11);
L_0042BCEC:
    // 0x0042BCEC: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x0042BCF0: lw          $v0, -0x678C($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X678C);
    // 0x0042BCF4: lw          $t0, 0x74($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X74);
    // 0x0042BCF8: beq         $t0, $zero, L_0042BDA0
    if (ctx->r8 == 0) {
        // 0x0042BCFC: addu        $s7, $v0, $s4
        ctx->r23 = ADD32(ctx->r2, ctx->r20);
            goto L_0042BDA0;
    }
    // 0x0042BCFC: addu        $s7, $v0, $s4
    ctx->r23 = ADD32(ctx->r2, ctx->r20);
    // 0x0042BD00: lhu         $v0, 0x12($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X12);
    // 0x0042BD04: addiu       $a0, $s0, 0xC
    ctx->r4 = ADD32(ctx->r16, 0XC);
    // 0x0042BD08: jal         0x00210EF0
    // 0x0042BD0C: sh          $v0, 0x20($s1)
    MEM_H(0X20, ctx->r17) = ctx->r2;
    func_00210EF0(rdram, ctx);
        goto after_1;
    // 0x0042BD0C: sh          $v0, 0x20($s1)
    MEM_H(0X20, ctx->r17) = ctx->r2;
    after_1:
    // 0x0042BD10: lwc1        $f1, 0xC($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0XC);
    // 0x0042BD14: c.lt.s      $f20, $f1
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f20.fl < ctx->f1.fl;
    // 0x0042BD18: nop

    // 0x0042BD1C: bc1t        L_0042BD68
    if (c1cs) {
        // 0x0042BD20: addiu       $v0, $zero, 0x7FFF
        ctx->r2 = ADD32(0, 0X7FFF);
            goto L_0042BD68;
    }
    // 0x0042BD20: addiu       $v0, $zero, 0x7FFF
    ctx->r2 = ADD32(0, 0X7FFF);
    // 0x0042BD24: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0042BD28: lwc1        $f0, 0x5F60($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X5F60);
    // 0x0042BD2C: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x0042BD30: nop

    // 0x0042BD34: bc1t        L_0042BD68
    if (c1cs) {
        // 0x0042BD38: addiu       $v0, $zero, -0x7FFF
        ctx->r2 = ADD32(0, -0X7FFF);
            goto L_0042BD68;
    }
    // 0x0042BD38: addiu       $v0, $zero, -0x7FFF
    ctx->r2 = ADD32(0, -0X7FFF);
    // 0x0042BD3C: c.lt.s      $f20, $f1
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f20.fl < ctx->f1.fl;
    // 0x0042BD40: nop

    // 0x0042BD44: bc1t        L_0042BD68
    if (c1cs) {
        // 0x0042BD48: addiu       $v0, $zero, 0x7FFF
        ctx->r2 = ADD32(0, 0X7FFF);
            goto L_0042BD68;
    }
    // 0x0042BD48: addiu       $v0, $zero, 0x7FFF
    ctx->r2 = ADD32(0, 0X7FFF);
    // 0x0042BD4C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0042BD50: lwc1        $f0, 0x5F64($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X5F64);
    // 0x0042BD54: mul.s       $f0, $f1, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x0042BD58: trunc.w.s   $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x0042BD5C: mfc1        $v0, $f2
    ctx->r2 = (int32_t)ctx->f2.u32l;
    // 0x0042BD60: j           L_0042BD6C
    // 0x0042BD64: sh          $v0, 0x24($s1)
    MEM_H(0X24, ctx->r17) = ctx->r2;
        goto L_0042BD6C;
    // 0x0042BD64: sh          $v0, 0x24($s1)
    MEM_H(0X24, ctx->r17) = ctx->r2;
L_0042BD68:
    // 0x0042BD68: sh          $v0, 0x24($s1)
    MEM_H(0X24, ctx->r17) = ctx->r2;
L_0042BD6C:
    // 0x0042BD6C: lw          $t0, 0x0($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X0);
    // 0x0042BD70: lw          $t1, 0x4($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X4);
    // 0x0042BD74: lw          $t2, 0x8($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X8);
    // 0x0042BD78: sw          $t0, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->r8;
    // 0x0042BD7C: sw          $t1, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->r9;
    // 0x0042BD80: sw          $t2, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->r10;
    // 0x0042BD84: lw          $t0, 0x74($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X74);
    // 0x0042BD88: addiu       $s5, $s5, 0x1
    ctx->r21 = ADD32(ctx->r21, 0X1);
    // 0x0042BD8C: slt         $v0, $s5, $t0
    ctx->r2 = SIGNED(ctx->r21) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x0042BD90: bne         $v0, $zero, L_0042BDA0
    if (ctx->r2 != 0) {
        // 0x0042BD94: addiu       $s0, $s0, 0x14
        ctx->r16 = ADD32(ctx->r16, 0X14);
            goto L_0042BDA0;
    }
    // 0x0042BD94: addiu       $s0, $s0, 0x14
    ctx->r16 = ADD32(ctx->r16, 0X14);
    // 0x0042BD98: lw          $s0, 0x78($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X78);
    // 0x0042BD9C: addu        $s5, $zero, $zero
    ctx->r21 = ADD32(0, 0);
L_0042BDA0:
    // 0x0042BDA0: addu        $a0, $s7, $zero
    ctx->r4 = ADD32(ctx->r23, 0);
    // 0x0042BDA4: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x0042BDA8: lw          $a2, 0x6C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X6C);
    // 0x0042BDAC: jal         0x0042DA60
    // 0x0042BDB0: addu        $a3, $s3, $zero
    ctx->r7 = ADD32(ctx->r19, 0);
    func_0042DA60(rdram, ctx);
        goto after_2;
    // 0x0042BDB0: addu        $a3, $s3, $zero
    ctx->r7 = ADD32(ctx->r19, 0);
    after_2:
    // 0x0042BDB4: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x0042BDB8: lw          $v0, -0x6788($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X6788);
    // 0x0042BDBC: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x0042BDC0: slt         $v0, $s2, $v0
    ctx->r2 = SIGNED(ctx->r18) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x0042BDC4: bne         $v0, $zero, L_0042BCEC
    if (ctx->r2 != 0) {
        // 0x0042BDC8: addiu       $s4, $s4, 0x1328
        ctx->r20 = ADD32(ctx->r20, 0X1328);
            goto L_0042BCEC;
    }
    // 0x0042BDC8: addiu       $s4, $s4, 0x1328
    ctx->r20 = ADD32(ctx->r20, 0X1328);
L_0042BDCC:
    // 0x0042BDCC: addiu       $s6, $s6, 0x28
    ctx->r22 = ADD32(ctx->r22, 0X28);
    // 0x0042BDD0: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x0042BDD4: lw          $t1, 0x7C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X7C);
    // 0x0042BDD8: slt         $v0, $s3, $fp
    ctx->r2 = SIGNED(ctx->r19) < SIGNED(ctx->r30) ? 1 : 0;
    // 0x0042BDDC: addiu       $t1, $t1, 0x288
    ctx->r9 = ADD32(ctx->r9, 0X288);
    // 0x0042BDE0: bne         $v0, $zero, L_0042BC28
    if (ctx->r2 != 0) {
        // 0x0042BDE4: sw          $t1, 0x7C($sp)
        MEM_W(0X7C, ctx->r29) = ctx->r9;
            goto L_0042BC28;
    }
    // 0x0042BDE4: sw          $t1, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r9;
    // 0x0042BDE8: lw          $t2, 0xB0($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XB0);
    // 0x0042BDEC: lw          $s3, 0xE4($t2)
    ctx->r19 = MEM_W(ctx->r10, 0XE4);
    // 0x0042BDF0: slt         $v0, $s3, $fp
    ctx->r2 = SIGNED(ctx->r19) < SIGNED(ctx->r30) ? 1 : 0;
    // 0x0042BDF4: beq         $v0, $zero, L_0042BEFC
    if (ctx->r2 == 0) {
        // 0x0042BDF8: sll         $v0, $s3, 2
        ctx->r2 = S32(ctx->r19 << 2);
            goto L_0042BEFC;
    }
    // 0x0042BDF8: sll         $v0, $s3, 2
    ctx->r2 = S32(ctx->r19 << 2);
    // 0x0042BDFC: addu        $v0, $v0, $s3
    ctx->r2 = ADD32(ctx->r2, ctx->r19);
    // 0x0042BE00: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x0042BE04: addu        $v0, $v0, $s3
    ctx->r2 = ADD32(ctx->r2, ctx->r19);
    // 0x0042BE08: lw          $t3, 0x68($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X68);
    // 0x0042BE0C: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x0042BE10: addu        $s1, $v0, $t3
    ctx->r17 = ADD32(ctx->r2, ctx->r11);
L_0042BE14:
    // 0x0042BE14: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0042BE18: lwc1        $f20, 0x5F54($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X5F54);
    // 0x0042BE1C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0042BE20: jal         0x00267DBC
    // 0x0042BE24: sw          $zero, 0x1A8($s1)
    MEM_W(0X1A8, ctx->r17) = 0;
    func_00267DBC(rdram, ctx);
        goto after_3;
    // 0x0042BE24: sw          $zero, 0x1A8($s1)
    MEM_W(0X1A8, ctx->r17) = 0;
    after_3:
    // 0x0042BE28: beql        $v0, $zero, L_0042BEF0
    if (ctx->r2 == 0) {
        // 0x0042BE2C: addiu       $s3, $s3, 0x1
        ctx->r19 = ADD32(ctx->r19, 0X1);
            goto L_0042BEF0;
    }
    goto skip_0;
    // 0x0042BE2C: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    skip_0:
    // 0x0042BE30: lw          $t0, 0xB0($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XB0);
    // 0x0042BE34: lw          $s2, 0xE4($t0)
    ctx->r18 = MEM_W(ctx->r8, 0XE4);
    // 0x0042BE38: slt         $v0, $s2, $fp
    ctx->r2 = SIGNED(ctx->r18) < SIGNED(ctx->r30) ? 1 : 0;
    // 0x0042BE3C: beq         $v0, $zero, L_0042BEEC
    if (ctx->r2 == 0) {
        // 0x0042BE40: sll         $v0, $s2, 2
        ctx->r2 = S32(ctx->r18 << 2);
            goto L_0042BEEC;
    }
    // 0x0042BE40: sll         $v0, $s2, 2
    ctx->r2 = S32(ctx->r18 << 2);
    // 0x0042BE44: addu        $v0, $v0, $s2
    ctx->r2 = ADD32(ctx->r2, ctx->r18);
    // 0x0042BE48: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x0042BE4C: addu        $v0, $v0, $s2
    ctx->r2 = ADD32(ctx->r2, ctx->r18);
    // 0x0042BE50: lw          $t1, 0x68($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X68);
    // 0x0042BE54: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x0042BE58: addu        $s0, $v0, $t1
    ctx->r16 = ADD32(ctx->r2, ctx->r9);
L_0042BE5C:
    // 0x0042BE5C: lw          $v0, 0x14($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X14);
    // 0x0042BE60: lw          $v1, 0x14($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X14);
    // 0x0042BE64: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
    // 0x0042BE68: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x0042BE6C: bnel        $a0, $v0, L_0042BEE0
    if (ctx->r4 != ctx->r2) {
        // 0x0042BE70: addiu       $s2, $s2, 0x1
        ctx->r18 = ADD32(ctx->r18, 0X1);
            goto L_0042BEE0;
    }
    goto skip_1;
    // 0x0042BE70: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    skip_1:
    // 0x0042BE74: jal         0x00267D94
    // 0x0042BE78: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00267D94(rdram, ctx);
        goto after_4;
    // 0x0042BE78: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
    // 0x0042BE7C: beql        $v0, $zero, L_0042BEE0
    if (ctx->r2 == 0) {
        // 0x0042BE80: addiu       $s2, $s2, 0x1
        ctx->r18 = ADD32(ctx->r18, 0X1);
            goto L_0042BEE0;
    }
    goto skip_2;
    // 0x0042BE80: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    skip_2:
    // 0x0042BE84: beql        $s1, $s0, L_0042BEE0
    if (ctx->r17 == ctx->r16) {
        // 0x0042BE88: addiu       $s2, $s2, 0x1
        ctx->r18 = ADD32(ctx->r18, 0X1);
            goto L_0042BEE0;
    }
    goto skip_3;
    // 0x0042BE88: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    skip_3:
    // 0x0042BE8C: lw          $v0, 0x1A8($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X1A8);
    // 0x0042BE90: beql        $v0, $zero, L_0042BEC4
    if (ctx->r2 == 0) {
        // 0x0042BE94: sw          $s0, 0x1A8($s1)
        MEM_W(0X1A8, ctx->r17) = ctx->r16;
            goto L_0042BEC4;
    }
    goto skip_4;
    // 0x0042BE94: sw          $s0, 0x1A8($s1)
    MEM_W(0X1A8, ctx->r17) = ctx->r16;
    skip_4:
    // 0x0042BE98: lw          $a1, 0x4($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X4);
    // 0x0042BE9C: lw          $a2, 0x8($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X8);
    // 0x0042BEA0: lw          $a3, 0xC($s0)
    ctx->r7 = MEM_W(ctx->r16, 0XC);
    // 0x0042BEA4: jal         0x002465F0
    // 0x0042BEA8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_002465F0(rdram, ctx);
        goto after_5;
    // 0x0042BEA8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_5:
    // 0x0042BEAC: c.lt.s      $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f0.fl < ctx->f20.fl;
    // 0x0042BEB0: nop

    // 0x0042BEB4: bc1fl       L_0042BEE0
    if (!c1cs) {
        // 0x0042BEB8: addiu       $s2, $s2, 0x1
        ctx->r18 = ADD32(ctx->r18, 0X1);
            goto L_0042BEE0;
    }
    goto skip_5;
    // 0x0042BEB8: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    skip_5:
    // 0x0042BEBC: j           L_0042BED8
    // 0x0042BEC0: sw          $s0, 0x1A8($s1)
    MEM_W(0X1A8, ctx->r17) = ctx->r16;
        goto L_0042BED8;
    // 0x0042BEC0: sw          $s0, 0x1A8($s1)
    MEM_W(0X1A8, ctx->r17) = ctx->r16;
L_0042BEC4:
    // 0x0042BEC4: lw          $a1, 0x4($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X4);
    // 0x0042BEC8: lw          $a2, 0x8($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X8);
    // 0x0042BECC: lw          $a3, 0xC($s0)
    ctx->r7 = MEM_W(ctx->r16, 0XC);
    // 0x0042BED0: jal         0x002465F0
    // 0x0042BED4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_002465F0(rdram, ctx);
        goto after_6;
    // 0x0042BED4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_6:
L_0042BED8:
    // 0x0042BED8: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x0042BEDC: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
L_0042BEE0:
    // 0x0042BEE0: slt         $v0, $s2, $fp
    ctx->r2 = SIGNED(ctx->r18) < SIGNED(ctx->r30) ? 1 : 0;
    // 0x0042BEE4: bne         $v0, $zero, L_0042BE5C
    if (ctx->r2 != 0) {
        // 0x0042BEE8: addiu       $s0, $s0, 0x288
        ctx->r16 = ADD32(ctx->r16, 0X288);
            goto L_0042BE5C;
    }
    // 0x0042BEE8: addiu       $s0, $s0, 0x288
    ctx->r16 = ADD32(ctx->r16, 0X288);
L_0042BEEC:
    // 0x0042BEEC: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
L_0042BEF0:
    // 0x0042BEF0: slt         $v0, $s3, $fp
    ctx->r2 = SIGNED(ctx->r19) < SIGNED(ctx->r30) ? 1 : 0;
    // 0x0042BEF4: bne         $v0, $zero, L_0042BE14
    if (ctx->r2 != 0) {
        // 0x0042BEF8: addiu       $s1, $s1, 0x288
        ctx->r17 = ADD32(ctx->r17, 0X288);
            goto L_0042BE14;
    }
    // 0x0042BEF8: addiu       $s1, $s1, 0x288
    ctx->r17 = ADD32(ctx->r17, 0X288);
L_0042BEFC:
    // 0x0042BEFC: lw          $a1, 0xB4($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XB4);
    // 0x0042BF00: lw          $a2, 0x70($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X70);
    // 0x0042BF04: jal         0x002057B0
    // 0x0042BF08: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_002057B0(rdram, ctx);
        goto after_7;
    // 0x0042BF08: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_7:
    // 0x0042BF0C: lw          $t2, 0xB0($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XB0);
    // 0x0042BF10: sw          $zero, 0xF00($t2)
    MEM_W(0XF00, ctx->r10) = 0;
    // 0x0042BF14: lw          $ra, 0xA4($sp)
    ctx->r31 = MEM_W(ctx->r29, 0XA4);
    // 0x0042BF18: lw          $fp, 0xA0($sp)
    ctx->r30 = MEM_W(ctx->r29, 0XA0);
    // 0x0042BF1C: lw          $s7, 0x9C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X9C);
    // 0x0042BF20: lw          $s6, 0x98($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X98);
    // 0x0042BF24: lw          $s5, 0x94($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X94);
    // 0x0042BF28: lw          $s4, 0x90($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X90);
    // 0x0042BF2C: lw          $s3, 0x8C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X8C);
    // 0x0042BF30: lw          $s2, 0x88($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X88);
    // 0x0042BF34: lw          $s1, 0x84($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X84);
    // 0x0042BF38: lw          $s0, 0x80($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X80);
    // 0x0042BF3C: ldc1        $f20, 0xA8($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0XA8);
    // 0x0042BF40: jr          $ra
    // 0x0042BF44: addiu       $sp, $sp, 0xB0
    ctx->r29 = ADD32(ctx->r29, 0XB0);
    return;
    // 0x0042BF44: addiu       $sp, $sp, 0xB0
    ctx->r29 = ADD32(ctx->r29, 0XB0);
;}
RECOMP_FUNC void entry_0042BDF8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0042BDF8: sll         $v0, $s3, 2
    ctx->r2 = S32(ctx->r19 << 2);
    // 0x0042BDFC: addu        $v0, $v0, $s3
    ctx->r2 = ADD32(ctx->r2, ctx->r19);
    // 0x0042BE00: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x0042BE04: addu        $v0, $v0, $s3
    ctx->r2 = ADD32(ctx->r2, ctx->r19);
    // 0x0042BE08: lw          $t3, 0x68($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X68);
    // 0x0042BE0C: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x0042BE10: addu        $s1, $v0, $t3
    ctx->r17 = ADD32(ctx->r2, ctx->r11);
L_0042BE14:
    // 0x0042BE14: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0042BE18: lwc1        $f20, 0x5F54($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X5F54);
    // 0x0042BE1C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0042BE20: jal         0x00267DBC
    // 0x0042BE24: sw          $zero, 0x1A8($s1)
    MEM_W(0X1A8, ctx->r17) = 0;
    func_00267DBC(rdram, ctx);
        goto after_0;
    // 0x0042BE24: sw          $zero, 0x1A8($s1)
    MEM_W(0X1A8, ctx->r17) = 0;
    after_0:
    // 0x0042BE28: beql        $v0, $zero, L_0042BEF0
    if (ctx->r2 == 0) {
        // 0x0042BE2C: addiu       $s3, $s3, 0x1
        ctx->r19 = ADD32(ctx->r19, 0X1);
            goto L_0042BEF0;
    }
    goto skip_0;
    // 0x0042BE2C: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    skip_0:
    // 0x0042BE30: lw          $t0, 0xB0($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XB0);
    // 0x0042BE34: lw          $s2, 0xE4($t0)
    ctx->r18 = MEM_W(ctx->r8, 0XE4);
    // 0x0042BE38: slt         $v0, $s2, $fp
    ctx->r2 = SIGNED(ctx->r18) < SIGNED(ctx->r30) ? 1 : 0;
    // 0x0042BE3C: beq         $v0, $zero, L_0042BEEC
    if (ctx->r2 == 0) {
        // 0x0042BE40: sll         $v0, $s2, 2
        ctx->r2 = S32(ctx->r18 << 2);
            goto L_0042BEEC;
    }
    // 0x0042BE40: sll         $v0, $s2, 2
    ctx->r2 = S32(ctx->r18 << 2);
    // 0x0042BE44: addu        $v0, $v0, $s2
    ctx->r2 = ADD32(ctx->r2, ctx->r18);
    // 0x0042BE48: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x0042BE4C: addu        $v0, $v0, $s2
    ctx->r2 = ADD32(ctx->r2, ctx->r18);
    // 0x0042BE50: lw          $t1, 0x68($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X68);
    // 0x0042BE54: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x0042BE58: addu        $s0, $v0, $t1
    ctx->r16 = ADD32(ctx->r2, ctx->r9);
L_0042BE5C:
    // 0x0042BE5C: lw          $v0, 0x14($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X14);
    // 0x0042BE60: lw          $v1, 0x14($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X14);
    // 0x0042BE64: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
    // 0x0042BE68: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x0042BE6C: bnel        $a0, $v0, L_0042BEE0
    if (ctx->r4 != ctx->r2) {
        // 0x0042BE70: addiu       $s2, $s2, 0x1
        ctx->r18 = ADD32(ctx->r18, 0X1);
            goto L_0042BEE0;
    }
    goto skip_1;
    // 0x0042BE70: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    skip_1:
    // 0x0042BE74: jal         0x00267D94
    // 0x0042BE78: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00267D94(rdram, ctx);
        goto after_1;
    // 0x0042BE78: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x0042BE7C: beql        $v0, $zero, L_0042BEE0
    if (ctx->r2 == 0) {
        // 0x0042BE80: addiu       $s2, $s2, 0x1
        ctx->r18 = ADD32(ctx->r18, 0X1);
            goto L_0042BEE0;
    }
    goto skip_2;
    // 0x0042BE80: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    skip_2:
    // 0x0042BE84: beql        $s1, $s0, L_0042BEE0
    if (ctx->r17 == ctx->r16) {
        // 0x0042BE88: addiu       $s2, $s2, 0x1
        ctx->r18 = ADD32(ctx->r18, 0X1);
            goto L_0042BEE0;
    }
    goto skip_3;
    // 0x0042BE88: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    skip_3:
    // 0x0042BE8C: lw          $v0, 0x1A8($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X1A8);
    // 0x0042BE90: beql        $v0, $zero, L_0042BEC4
    if (ctx->r2 == 0) {
        // 0x0042BE94: sw          $s0, 0x1A8($s1)
        MEM_W(0X1A8, ctx->r17) = ctx->r16;
            goto L_0042BEC4;
    }
    goto skip_4;
    // 0x0042BE94: sw          $s0, 0x1A8($s1)
    MEM_W(0X1A8, ctx->r17) = ctx->r16;
    skip_4:
    // 0x0042BE98: lw          $a1, 0x4($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X4);
    // 0x0042BE9C: lw          $a2, 0x8($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X8);
    // 0x0042BEA0: lw          $a3, 0xC($s0)
    ctx->r7 = MEM_W(ctx->r16, 0XC);
    // 0x0042BEA4: jal         0x002465F0
    // 0x0042BEA8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_002465F0(rdram, ctx);
        goto after_2;
    // 0x0042BEA8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_2:
    // 0x0042BEAC: c.lt.s      $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f0.fl < ctx->f20.fl;
    // 0x0042BEB0: nop

    // 0x0042BEB4: bc1fl       L_0042BEE0
    if (!c1cs) {
        // 0x0042BEB8: addiu       $s2, $s2, 0x1
        ctx->r18 = ADD32(ctx->r18, 0X1);
            goto L_0042BEE0;
    }
    goto skip_5;
    // 0x0042BEB8: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    skip_5:
    // 0x0042BEBC: j           L_0042BED8
    // 0x0042BEC0: sw          $s0, 0x1A8($s1)
    MEM_W(0X1A8, ctx->r17) = ctx->r16;
        goto L_0042BED8;
    // 0x0042BEC0: sw          $s0, 0x1A8($s1)
    MEM_W(0X1A8, ctx->r17) = ctx->r16;
L_0042BEC4:
    // 0x0042BEC4: lw          $a1, 0x4($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X4);
    // 0x0042BEC8: lw          $a2, 0x8($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X8);
    // 0x0042BECC: lw          $a3, 0xC($s0)
    ctx->r7 = MEM_W(ctx->r16, 0XC);
    // 0x0042BED0: jal         0x002465F0
    // 0x0042BED4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_002465F0(rdram, ctx);
        goto after_3;
    // 0x0042BED4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_3:
L_0042BED8:
    // 0x0042BED8: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x0042BEDC: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
L_0042BEE0:
    // 0x0042BEE0: slt         $v0, $s2, $fp
    ctx->r2 = SIGNED(ctx->r18) < SIGNED(ctx->r30) ? 1 : 0;
    // 0x0042BEE4: bne         $v0, $zero, L_0042BE5C
    if (ctx->r2 != 0) {
        // 0x0042BEE8: addiu       $s0, $s0, 0x288
        ctx->r16 = ADD32(ctx->r16, 0X288);
            goto L_0042BE5C;
    }
    // 0x0042BEE8: addiu       $s0, $s0, 0x288
    ctx->r16 = ADD32(ctx->r16, 0X288);
L_0042BEEC:
    // 0x0042BEEC: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
L_0042BEF0:
    // 0x0042BEF0: slt         $v0, $s3, $fp
    ctx->r2 = SIGNED(ctx->r19) < SIGNED(ctx->r30) ? 1 : 0;
    // 0x0042BEF4: bne         $v0, $zero, L_0042BE14
    if (ctx->r2 != 0) {
        // 0x0042BEF8: addiu       $s1, $s1, 0x288
        ctx->r17 = ADD32(ctx->r17, 0X288);
            goto L_0042BE14;
    }
    // 0x0042BEF8: addiu       $s1, $s1, 0x288
    ctx->r17 = ADD32(ctx->r17, 0X288);
    // 0x0042BEFC: lw          $a1, 0xB4($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XB4);
    // 0x0042BF00: lw          $a2, 0x70($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X70);
    // 0x0042BF04: jal         0x002057B0
    // 0x0042BF08: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_002057B0(rdram, ctx);
        goto after_4;
    // 0x0042BF08: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_4:
    // 0x0042BF0C: lw          $t2, 0xB0($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XB0);
    // 0x0042BF10: sw          $zero, 0xF00($t2)
    MEM_W(0XF00, ctx->r10) = 0;
    // 0x0042BF14: lw          $ra, 0xA4($sp)
    ctx->r31 = MEM_W(ctx->r29, 0XA4);
    // 0x0042BF18: lw          $fp, 0xA0($sp)
    ctx->r30 = MEM_W(ctx->r29, 0XA0);
    // 0x0042BF1C: lw          $s7, 0x9C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X9C);
    // 0x0042BF20: lw          $s6, 0x98($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X98);
    // 0x0042BF24: lw          $s5, 0x94($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X94);
    // 0x0042BF28: lw          $s4, 0x90($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X90);
    // 0x0042BF2C: lw          $s3, 0x8C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X8C);
    // 0x0042BF30: lw          $s2, 0x88($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X88);
    // 0x0042BF34: lw          $s1, 0x84($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X84);
    // 0x0042BF38: lw          $s0, 0x80($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X80);
    // 0x0042BF3C: ldc1        $f20, 0xA8($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0XA8);
    // 0x0042BF40: jr          $ra
    // 0x0042BF44: addiu       $sp, $sp, 0xB0
    ctx->r29 = ADD32(ctx->r29, 0XB0);
    return;
    // 0x0042BF44: addiu       $sp, $sp, 0xB0
    ctx->r29 = ADD32(ctx->r29, 0XB0);
;}
RECOMP_FUNC void entry_0042BE68(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_0042BE14:
    // 0x0042BE68: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
L_0042BE5C:
    // 0x0042BE6C: bnel        $a0, $v0, L_0042BEE0
    if (ctx->r4 != ctx->r2) {
        // 0x0042BE70: addiu       $s2, $s2, 0x1
        ctx->r18 = ADD32(ctx->r18, 0X1);
            goto L_0042BEE0;
    }
    goto skip_0;
    // 0x0042BE70: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    skip_0:
    // 0x0042BE74: jal         0x00267D94
    // 0x0042BE78: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00267D94(rdram, ctx);
        goto after_0;
    // 0x0042BE78: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x0042BE7C: beql        $v0, $zero, L_0042BEE0
    if (ctx->r2 == 0) {
        // 0x0042BE80: addiu       $s2, $s2, 0x1
        ctx->r18 = ADD32(ctx->r18, 0X1);
            goto L_0042BEE0;
    }
    goto skip_1;
    // 0x0042BE80: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    skip_1:
    // 0x0042BE84: beql        $s1, $s0, L_0042BEE0
    if (ctx->r17 == ctx->r16) {
        // 0x0042BE88: addiu       $s2, $s2, 0x1
        ctx->r18 = ADD32(ctx->r18, 0X1);
            goto L_0042BEE0;
    }
    goto skip_2;
    // 0x0042BE88: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    skip_2:
    // 0x0042BE8C: lw          $v0, 0x1A8($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X1A8);
    // 0x0042BE90: beql        $v0, $zero, L_0042BEC4
    if (ctx->r2 == 0) {
        // 0x0042BE94: sw          $s0, 0x1A8($s1)
        MEM_W(0X1A8, ctx->r17) = ctx->r16;
            goto L_0042BEC4;
    }
    goto skip_3;
    // 0x0042BE94: sw          $s0, 0x1A8($s1)
    MEM_W(0X1A8, ctx->r17) = ctx->r16;
    skip_3:
    // 0x0042BE98: lw          $a1, 0x4($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X4);
    // 0x0042BE9C: lw          $a2, 0x8($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X8);
    // 0x0042BEA0: lw          $a3, 0xC($s0)
    ctx->r7 = MEM_W(ctx->r16, 0XC);
    // 0x0042BEA4: jal         0x002465F0
    // 0x0042BEA8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_002465F0(rdram, ctx);
        goto after_1;
    // 0x0042BEA8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_1:
    // 0x0042BEAC: c.lt.s      $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f0.fl < ctx->f20.fl;
    // 0x0042BEB0: nop

    // 0x0042BEB4: bc1fl       L_0042BEE0
    if (!c1cs) {
        // 0x0042BEB8: addiu       $s2, $s2, 0x1
        ctx->r18 = ADD32(ctx->r18, 0X1);
            goto L_0042BEE0;
    }
    goto skip_4;
    // 0x0042BEB8: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    skip_4:
    // 0x0042BEBC: j           L_0042BED8
    // 0x0042BEC0: sw          $s0, 0x1A8($s1)
    MEM_W(0X1A8, ctx->r17) = ctx->r16;
        goto L_0042BED8;
    // 0x0042BEC0: sw          $s0, 0x1A8($s1)
    MEM_W(0X1A8, ctx->r17) = ctx->r16;
L_0042BEC4:
    // 0x0042BEC4: lw          $a1, 0x4($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X4);
    // 0x0042BEC8: lw          $a2, 0x8($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X8);
    // 0x0042BECC: lw          $a3, 0xC($s0)
    ctx->r7 = MEM_W(ctx->r16, 0XC);
    // 0x0042BED0: jal         0x002465F0
    // 0x0042BED4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_002465F0(rdram, ctx);
        goto after_2;
    // 0x0042BED4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_2:
L_0042BED8:
    // 0x0042BED8: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x0042BEDC: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
L_0042BEE0:
    // 0x0042BEE0: slt         $v0, $s2, $fp
    ctx->r2 = SIGNED(ctx->r18) < SIGNED(ctx->r30) ? 1 : 0;
    // 0x0042BEE4: bne         $v0, $zero, L_0042BE5C
    if (ctx->r2 != 0) {
        // 0x0042BEE8: addiu       $s0, $s0, 0x288
        ctx->r16 = ADD32(ctx->r16, 0X288);
            goto L_0042BE5C;
    }
    // 0x0042BEE8: addiu       $s0, $s0, 0x288
    ctx->r16 = ADD32(ctx->r16, 0X288);
    // 0x0042BEEC: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x0042BEF0: slt         $v0, $s3, $fp
    ctx->r2 = SIGNED(ctx->r19) < SIGNED(ctx->r30) ? 1 : 0;
    // 0x0042BEF4: bne         $v0, $zero, L_0042BE14
    if (ctx->r2 != 0) {
        // 0x0042BEF8: addiu       $s1, $s1, 0x288
        ctx->r17 = ADD32(ctx->r17, 0X288);
            goto L_0042BE14;
    }
    // 0x0042BEF8: addiu       $s1, $s1, 0x288
    ctx->r17 = ADD32(ctx->r17, 0X288);
    // 0x0042BEFC: lw          $a1, 0xB4($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XB4);
    // 0x0042BF00: lw          $a2, 0x70($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X70);
    // 0x0042BF04: jal         0x002057B0
    // 0x0042BF08: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_002057B0(rdram, ctx);
        goto after_3;
    // 0x0042BF08: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_3:
    // 0x0042BF0C: lw          $t2, 0xB0($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XB0);
    // 0x0042BF10: sw          $zero, 0xF00($t2)
    MEM_W(0XF00, ctx->r10) = 0;
    // 0x0042BF14: lw          $ra, 0xA4($sp)
    ctx->r31 = MEM_W(ctx->r29, 0XA4);
    // 0x0042BF18: lw          $fp, 0xA0($sp)
    ctx->r30 = MEM_W(ctx->r29, 0XA0);
    // 0x0042BF1C: lw          $s7, 0x9C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X9C);
    // 0x0042BF20: lw          $s6, 0x98($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X98);
    // 0x0042BF24: lw          $s5, 0x94($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X94);
    // 0x0042BF28: lw          $s4, 0x90($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X90);
    // 0x0042BF2C: lw          $s3, 0x8C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X8C);
    // 0x0042BF30: lw          $s2, 0x88($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X88);
    // 0x0042BF34: lw          $s1, 0x84($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X84);
    // 0x0042BF38: lw          $s0, 0x80($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X80);
    // 0x0042BF3C: ldc1        $f20, 0xA8($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0XA8);
    // 0x0042BF40: jr          $ra
    // 0x0042BF44: addiu       $sp, $sp, 0xB0
    ctx->r29 = ADD32(ctx->r29, 0XB0);
    return;
    // 0x0042BF44: addiu       $sp, $sp, 0xB0
    ctx->r29 = ADD32(ctx->r29, 0XB0);
;}
RECOMP_FUNC void entry_0042C0B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_0042BFD0:
    // 0x0042C0B4: jal         0x002051F4
    // 0x0042C0B8: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_002051F4(rdram, ctx);
        goto after_0;
L_0042BFE4:
    // 0x0042C0B8: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_0:
L_0042C084:
    // 0x0042C0BC: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x0042C0C0: slt         $v0, $s2, $s3
    ctx->r2 = SIGNED(ctx->r18) < SIGNED(ctx->r19) ? 1 : 0;
    // 0x0042C0C4: bne         $v0, $zero, L_0042C084
    if (ctx->r2 != 0) {
        // 0x0042C0C8: addiu       $s1, $s1, 0x90
        ctx->r17 = ADD32(ctx->r17, 0X90);
            goto L_0042C084;
    }
    // 0x0042C0C8: addiu       $s1, $s1, 0x90
    ctx->r17 = ADD32(ctx->r17, 0X90);
    // 0x0042C0CC: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    // 0x0042C0D0: jal         0x002017D4
    // 0x0042C0D4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_002017D4(rdram, ctx);
        goto after_1;
    // 0x0042C0D4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_1:
    // 0x0042C0D8: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x0042C0DC: lw          $s3, 0x4($v0)
    ctx->r19 = MEM_W(ctx->r2, 0X4);
    // 0x0042C0E0: blez        $s3, L_0042C124
    if (SIGNED(ctx->r19) <= 0) {
        // 0x0042C0E4: addiu       $a0, $v0, 0x8
        ctx->r4 = ADD32(ctx->r2, 0X8);
            goto L_0042C124;
    }
    // 0x0042C0E4: addiu       $a0, $v0, 0x8
    ctx->r4 = ADD32(ctx->r2, 0X8);
    // 0x0042C0E8: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
L_0042C0EC:
    // 0x0042C0EC: jal         0x00215944
    // 0x0042C0F0: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_00215944(rdram, ctx);
        goto after_2;
    // 0x0042C0F0: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_2:
    // 0x0042C0F4: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x0042C0F8: beql        $s0, $zero, L_0042C118
    if (ctx->r16 == 0) {
        // 0x0042C0FC: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_0042C118;
    }
    goto skip_0;
    // 0x0042C0FC: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_0:
    // 0x0042C100: jal         0x0020BE08
    // 0x0042C104: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_0020BE08(rdram, ctx);
        goto after_3;
    // 0x0042C104: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x0042C108: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0042C10C: jal         0x002051F4
    // 0x0042C110: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_002051F4(rdram, ctx);
        goto after_4;
    // 0x0042C110: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_4:
    // 0x0042C114: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_0042C118:
    // 0x0042C118: slt         $v0, $s1, $s3
    ctx->r2 = SIGNED(ctx->r17) < SIGNED(ctx->r19) ? 1 : 0;
    // 0x0042C11C: bne         $v0, $zero, L_0042C0EC
    if (ctx->r2 != 0) {
        // 0x0042C120: addiu       $s2, $s2, 0x198
        ctx->r18 = ADD32(ctx->r18, 0X198);
            goto L_0042C0EC;
    }
    // 0x0042C120: addiu       $s2, $s2, 0x198
    ctx->r18 = ADD32(ctx->r18, 0X198);
L_0042C124:
    // 0x0042C124: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0042C128: jal         0x002051F4
    // 0x0042C12C: addu        $a1, $s5, $zero
    ctx->r5 = ADD32(ctx->r21, 0);
    func_002051F4(rdram, ctx);
        goto after_5;
    // 0x0042C12C: addu        $a1, $s5, $zero
    ctx->r5 = ADD32(ctx->r21, 0);
    after_5:
    // 0x0042C130: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x0042C134: addiu       $s6, $s6, 0x1
    ctx->r22 = ADD32(ctx->r22, 0X1);
    // 0x0042C138: slt         $v0, $t0, $s6
    ctx->r2 = SIGNED(ctx->r8) < SIGNED(ctx->r22) ? 1 : 0;
    // 0x0042C13C: beq         $v0, $zero, L_0042BFE4
    if (ctx->r2 == 0) {
        // 0x0042C140: addu        $a2, $s6, $s7
        ctx->r6 = ADD32(ctx->r22, ctx->r23);
            goto L_0042BFE4;
    }
    // 0x0042C140: addu        $a2, $s6, $s7
    ctx->r6 = ADD32(ctx->r22, ctx->r23);
    // 0x0042C144: lw          $v1, 0x24($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X24);
    // 0x0042C148: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x0042C14C: addu        $s7, $s7, $v1
    ctx->r23 = ADD32(ctx->r23, ctx->r3);
    // 0x0042C150: lw          $v1, 0x30($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X30);
    // 0x0042C154: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    // 0x0042C158: slt         $v0, $v1, $t0
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x0042C15C: beq         $v0, $zero, L_0042BFD0
    if (ctx->r2 == 0) {
        // 0x0042C160: sw          $t0, 0x28($sp)
        MEM_W(0X28, ctx->r29) = ctx->r8;
            goto L_0042BFD0;
    }
    // 0x0042C160: sw          $t0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r8;
    // 0x0042C164: lw          $ra, 0x5C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X5C);
    // 0x0042C168: lw          $fp, 0x58($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X58);
    // 0x0042C16C: lw          $s7, 0x54($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X54);
    // 0x0042C170: lw          $s6, 0x50($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X50);
    // 0x0042C174: lw          $s5, 0x4C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X4C);
    // 0x0042C178: lw          $s4, 0x48($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X48);
    // 0x0042C17C: lw          $s3, 0x44($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X44);
    // 0x0042C180: lw          $s2, 0x40($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X40);
    // 0x0042C184: lw          $s1, 0x3C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X3C);
    // 0x0042C188: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x0042C18C: jr          $ra
    // 0x0042C190: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    return;
    // 0x0042C190: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
;}
RECOMP_FUNC void entry_0042C2DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_0042C2A4:
    // 0x0042C2DC: beq         $v0, $zero, L_0042C2A4
    if (ctx->r2 == 0) {
        // 0x0042C2E0: addiu       $s2, $s2, 0x14
        ctx->r18 = ADD32(ctx->r18, 0X14);
            goto L_0042C2A4;
    }
    // 0x0042C2E0: addiu       $s2, $s2, 0x14
    ctx->r18 = ADD32(ctx->r18, 0X14);
    // 0x0042C2E4: addiu       $s3, $s3, -0x1
    ctx->r19 = ADD32(ctx->r19, -0X1);
    // 0x0042C2E8: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x0042C2EC: beq         $s3, $v0, L_0042C37C
    if (ctx->r19 == ctx->r2) {
        // 0x0042C2F0: addu        $s2, $v0, $zero
        ctx->r18 = ADD32(ctx->r2, 0);
            goto L_0042C37C;
    }
    // 0x0042C2F0: addu        $s2, $v0, $zero
    ctx->r18 = ADD32(ctx->r2, 0);
    // 0x0042C2F4: sll         $v0, $s4, 2
    ctx->r2 = S32(ctx->r20 << 2);
    // 0x0042C2F8: addu        $v0, $v0, $s4
    ctx->r2 = ADD32(ctx->r2, ctx->r20);
    // 0x0042C2FC: lw          $t0, 0x37C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X37C);
    // 0x0042C300: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x0042C304: addu        $s1, $v0, $t0
    ctx->r17 = ADD32(ctx->r2, ctx->r8);
L_0042C308:
    // 0x0042C308: lw          $v0, 0x30($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X30);
    // 0x0042C30C: beq         $v0, $zero, L_0042C380
    if (ctx->r2 == 0) {
        // 0x0042C310: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_0042C380;
    }
    // 0x0042C310: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0042C314: jal         0x002009F0
    // 0x0042C318: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    func_002009F0(rdram, ctx);
        goto after_0;
    // 0x0042C318: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    after_0:
    // 0x0042C31C: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x0042C320: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
    // 0x0042C324: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    // 0x0042C328: lw          $v1, 0x0($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X0);
    // 0x0042C32C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x0042C330: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x0042C334: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x0042C338: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x0042C33C: addu        $v0, $v0, $s5
    ctx->r2 = ADD32(ctx->r2, ctx->r21);
    // 0x0042C340: lw          $t1, 0x0($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X0);
    // 0x0042C344: lw          $t2, 0x4($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X4);
    // 0x0042C348: lw          $t3, 0x8($v0)
    ctx->r11 = MEM_W(ctx->r2, 0X8);
    // 0x0042C34C: lw          $t0, 0xC($v0)
    ctx->r8 = MEM_W(ctx->r2, 0XC);
    // 0x0042C350: sw          $t1, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r9;
    // 0x0042C354: sw          $t2, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->r10;
    // 0x0042C358: sw          $t3, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->r11;
    // 0x0042C35C: sw          $t0, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->r8;
    // 0x0042C360: lw          $t1, 0x10($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X10);
    // 0x0042C364: sw          $t1, 0x10($s1)
    MEM_W(0X10, ctx->r17) = ctx->r9;
    // 0x0042C368: jal         0x00200738
    // 0x0042C36C: addiu       $s1, $s1, 0x14
    ctx->r17 = ADD32(ctx->r17, 0X14);
    func_00200738(rdram, ctx);
        goto after_1;
    // 0x0042C36C: addiu       $s1, $s1, 0x14
    ctx->r17 = ADD32(ctx->r17, 0X14);
    after_1:
    // 0x0042C370: addiu       $s3, $s3, -0x1
    ctx->r19 = ADD32(ctx->r19, -0X1);
    // 0x0042C374: bne         $s3, $s2, L_0042C308
    if (ctx->r19 != ctx->r18) {
        // 0x0042C378: nop
    
            goto L_0042C308;
    }
    // 0x0042C378: nop

L_0042C37C:
    // 0x0042C37C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
L_0042C380:
    // 0x0042C380: jal         0x002052D8
    // 0x0042C384: addu        $a1, $fp, $zero
    ctx->r5 = ADD32(ctx->r30, 0);
    func_002052D8(rdram, ctx);
        goto after_2;
    // 0x0042C384: addu        $a1, $fp, $zero
    ctx->r5 = ADD32(ctx->r30, 0);
    after_2:
    // 0x0042C388: addu        $v0, $s4, $zero
    ctx->r2 = ADD32(ctx->r20, 0);
    // turok2: reconnected split function: a stray ELF symbol at 0x0042C38C ended
    // this function early, leaving it without its epilogue. On the
    // hardware execution simply continues into the next instruction.
    func_0042C38C(rdram, ctx);
;}
RECOMP_FUNC void entry_0042C338(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_0042C308:
    // 0x0042C338: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x0042C33C: addu        $v0, $v0, $s5
    ctx->r2 = ADD32(ctx->r2, ctx->r21);
    // 0x0042C340: lw          $t1, 0x0($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X0);
    // 0x0042C344: lw          $t2, 0x4($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X4);
    // 0x0042C348: lw          $t3, 0x8($v0)
    ctx->r11 = MEM_W(ctx->r2, 0X8);
    // 0x0042C34C: lw          $t0, 0xC($v0)
    ctx->r8 = MEM_W(ctx->r2, 0XC);
    // 0x0042C350: sw          $t1, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r9;
    // 0x0042C354: sw          $t2, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->r10;
    // 0x0042C358: sw          $t3, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->r11;
    // 0x0042C35C: sw          $t0, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->r8;
    // 0x0042C360: lw          $t1, 0x10($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X10);
    // 0x0042C364: sw          $t1, 0x10($s1)
    MEM_W(0X10, ctx->r17) = ctx->r9;
    // 0x0042C368: jal         0x00200738
    // 0x0042C36C: addiu       $s1, $s1, 0x14
    ctx->r17 = ADD32(ctx->r17, 0X14);
    func_00200738(rdram, ctx);
        goto after_0;
    // 0x0042C36C: addiu       $s1, $s1, 0x14
    ctx->r17 = ADD32(ctx->r17, 0X14);
    after_0:
    // 0x0042C370: addiu       $s3, $s3, -0x1
    ctx->r19 = ADD32(ctx->r19, -0X1);
    // 0x0042C374: bne         $s3, $s2, L_0042C308
    if (ctx->r19 != ctx->r18) {
        // 0x0042C378: nop
    
            goto L_0042C308;
    }
    // 0x0042C378: nop

    // 0x0042C37C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0042C380: jal         0x002052D8
    // 0x0042C384: addu        $a1, $fp, $zero
    ctx->r5 = ADD32(ctx->r30, 0);
    func_002052D8(rdram, ctx);
        goto after_1;
    // 0x0042C384: addu        $a1, $fp, $zero
    ctx->r5 = ADD32(ctx->r30, 0);
    after_1:
    // 0x0042C388: addu        $v0, $s4, $zero
    ctx->r2 = ADD32(ctx->r20, 0);
    // turok2: reconnected split function: a stray ELF symbol at 0x0042C38C ended
    // this function early, leaving it without its epilogue. On the
    // hardware execution simply continues into the next instruction.
    func_0042C38C(rdram, ctx);
;}
RECOMP_FUNC void entry_0042C6BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0042C6BC: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x0042C6C0: sll         $v0, $s3, 2
    ctx->r2 = S32(ctx->r19 << 2);
    // 0x0042C6C4: addu        $v0, $v0, $s6
    ctx->r2 = ADD32(ctx->r2, ctx->r22);
    // 0x0042C6C8: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x0042C6CC: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x0042C6D0: lw          $fp, 0x48($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X48);
    // 0x0042C6D4: lw          $s7, 0x44($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X44);
    // 0x0042C6D8: lw          $s6, 0x40($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X40);
    // 0x0042C6DC: lw          $s5, 0x3C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X3C);
    // 0x0042C6E0: lw          $s4, 0x38($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X38);
    // 0x0042C6E4: lw          $s3, 0x34($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X34);
    // 0x0042C6E8: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x0042C6EC: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x0042C6F0: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x0042C6F4: ldc1        $f20, 0x50($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X50);
    // 0x0042C6F8: jr          $ra
    // 0x0042C6FC: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    return;
    // 0x0042C6FC: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void entry_0042C88C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0042C88C: addu        $s1, $s0, $zero
    ctx->r17 = ADD32(ctx->r16, 0);
L_0042C890:
    // 0x0042C890: lw          $v0, 0x1178($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X1178);
    // 0x0042C894: addu        $a1, $v0, $s1
    ctx->r5 = ADD32(ctx->r2, ctx->r17);
    // 0x0042C898: lbu         $v1, 0x11($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X11);
    // 0x0042C89C: beq         $v1, $s7, L_0042C8BC
    if (ctx->r3 == ctx->r23) {
        // 0x0042C8A0: nop
    
            goto L_0042C8BC;
    }
    // 0x0042C8A0: nop

    // 0x0042C8A4: beq         $v1, $s6, L_0042C8BC
    if (ctx->r3 == ctx->r22) {
        // 0x0042C8A8: nop
    
            goto L_0042C8BC;
    }
    // 0x0042C8A8: nop

    // 0x0042C8AC: beq         $v1, $s5, L_0042C8BC
    if (ctx->r3 == ctx->r21) {
        // 0x0042C8B0: nop
    
            goto L_0042C8BC;
    }
    // 0x0042C8B0: nop

    // 0x0042C8B4: bnel        $v1, $s4, L_0042C8C8
    if (ctx->r3 != ctx->r20) {
        // 0x0042C8B8: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_0042C8C8;
    }
    goto skip_0;
    // 0x0042C8B8: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    skip_0:
L_0042C8BC:
    // 0x0042C8BC: jal         0x00220BF0
    // 0x0042C8C0: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    func_00220BF0(rdram, ctx);
        goto after_0;
    // 0x0042C8C0: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    after_0:
    // 0x0042C8C4: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_0042C8C8:
    // 0x0042C8C8: slt         $v0, $s0, $s2
    ctx->r2 = SIGNED(ctx->r16) < SIGNED(ctx->r18) ? 1 : 0;
    // 0x0042C8CC: bne         $v0, $zero, L_0042C890
    if (ctx->r2 != 0) {
        // 0x0042C8D0: addiu       $s1, $s1, 0x14
        ctx->r17 = ADD32(ctx->r17, 0X14);
            goto L_0042C890;
    }
    // 0x0042C8D0: addiu       $s1, $s1, 0x14
    ctx->r17 = ADD32(ctx->r17, 0X14);
    // 0x0042C8D4: lw          $s2, 0x116C($s3)
    ctx->r18 = MEM_W(ctx->r19, 0X116C);
    // 0x0042C8D8: blez        $s2, L_0042C938
    if (SIGNED(ctx->r18) <= 0) {
        // 0x0042C8DC: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_0042C938;
    }
    // 0x0042C8DC: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x0042C8E0: addiu       $s7, $zero, 0x1
    ctx->r23 = ADD32(0, 0X1);
    // 0x0042C8E4: addiu       $s6, $zero, 0x4
    ctx->r22 = ADD32(0, 0X4);
    // 0x0042C8E8: addiu       $s5, $zero, 0x2
    ctx->r21 = ADD32(0, 0X2);
    // 0x0042C8EC: addiu       $s4, $zero, 0xA
    ctx->r20 = ADD32(0, 0XA);
    // 0x0042C8F0: addu        $s1, $s0, $zero
    ctx->r17 = ADD32(ctx->r16, 0);
L_0042C8F4:
    // 0x0042C8F4: lw          $v0, 0x117C($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X117C);
    // 0x0042C8F8: addu        $a1, $v0, $s1
    ctx->r5 = ADD32(ctx->r2, ctx->r17);
    // 0x0042C8FC: lbu         $v1, 0x11($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X11);
    // 0x0042C900: beq         $v1, $s7, L_0042C920
    if (ctx->r3 == ctx->r23) {
        // 0x0042C904: nop
    
            goto L_0042C920;
    }
    // 0x0042C904: nop

    // 0x0042C908: beq         $v1, $s6, L_0042C920
    if (ctx->r3 == ctx->r22) {
        // 0x0042C90C: nop
    
            goto L_0042C920;
    }
    // 0x0042C90C: nop

    // 0x0042C910: beq         $v1, $s5, L_0042C920
    if (ctx->r3 == ctx->r21) {
        // 0x0042C914: nop
    
            goto L_0042C920;
    }
    // 0x0042C914: nop

    // 0x0042C918: bnel        $v1, $s4, L_0042C92C
    if (ctx->r3 != ctx->r20) {
        // 0x0042C91C: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_0042C92C;
    }
    goto skip_1;
    // 0x0042C91C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    skip_1:
L_0042C920:
    // 0x0042C920: jal         0x00220BF0
    // 0x0042C924: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    func_00220BF0(rdram, ctx);
        goto after_1;
    // 0x0042C924: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    after_1:
    // 0x0042C928: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_0042C92C:
    // 0x0042C92C: slt         $v0, $s0, $s2
    ctx->r2 = SIGNED(ctx->r16) < SIGNED(ctx->r18) ? 1 : 0;
    // 0x0042C930: bne         $v0, $zero, L_0042C8F4
    if (ctx->r2 != 0) {
        // 0x0042C934: addiu       $s1, $s1, 0x14
        ctx->r17 = ADD32(ctx->r17, 0X14);
            goto L_0042C8F4;
    }
    // 0x0042C934: addiu       $s1, $s1, 0x14
    ctx->r17 = ADD32(ctx->r17, 0X14);
L_0042C938:
    // 0x0042C938: jal         0x002842B4
    // 0x0042C93C: nop

    func_002842B4(rdram, ctx);
        goto after_2;
    // 0x0042C93C: nop

    after_2:
    // 0x0042C940: lw          $ra, 0x30($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X30);
    // 0x0042C944: lw          $s7, 0x2C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X2C);
    // 0x0042C948: lw          $s6, 0x28($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X28);
    // 0x0042C94C: lw          $s5, 0x24($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X24);
    // 0x0042C950: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x0042C954: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x0042C958: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x0042C95C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x0042C960: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0042C964: jr          $ra
    // 0x0042C968: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x0042C968: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void entry_0042CA64(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0042CA64: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0042CA68: lw          $a1, 0xB0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0XB0);
    // 0x0042CA6C: jal         0x002052D8
    // 0x0042CA70: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_002052D8(rdram, ctx);
        goto after_0;
    // 0x0042CA70: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_0:
    // 0x0042CA74: lw          $a1, 0xB4($s0)
    ctx->r5 = MEM_W(ctx->r16, 0XB4);
    // 0x0042CA78: jal         0x002052D8
    // 0x0042CA7C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_002052D8(rdram, ctx);
        goto after_1;
    // 0x0042CA7C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_1:
    // 0x0042CA80: lw          $a1, 0xCC($s0)
    ctx->r5 = MEM_W(ctx->r16, 0XCC);
    // 0x0042CA84: jal         0x002052D8
    // 0x0042CA88: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_002052D8(rdram, ctx);
        goto after_2;
    // 0x0042CA88: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_2:
    // 0x0042CA8C: lw          $a1, 0xAC($s0)
    ctx->r5 = MEM_W(ctx->r16, 0XAC);
    // 0x0042CA90: jal         0x002052D8
    // 0x0042CA94: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_002052D8(rdram, ctx);
        goto after_3;
    // 0x0042CA94: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_3:
    // 0x0042CA98: lw          $a1, 0xC8($s0)
    ctx->r5 = MEM_W(ctx->r16, 0XC8);
    // 0x0042CA9C: jal         0x002052D8
    // 0x0042CAA0: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_002052D8(rdram, ctx);
        goto after_4;
    // 0x0042CAA0: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_4:
    // 0x0042CAA4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x0042CAA8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0042CAAC: jr          $ra
    // 0x0042CAB0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0042CAB0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void entry_0042CBF4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
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
RECOMP_FUNC void entry_0042CE88(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0042CE88: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
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
        goto after_0;
    // 0x0042CEA4: addiu       $a3, $sp, 0x20
    ctx->r7 = ADD32(ctx->r29, 0X20);
    after_0:
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
        goto after_1;
    // 0x0042CED8: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    after_1:
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
        goto after_2;
    // 0x0042CEF0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_2:
    // 0x0042CEF4: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x0042CEF8: jal         0x002017D4
    // 0x0042CEFC: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_002017D4(rdram, ctx);
        goto after_3;
    // 0x0042CEFC: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_3:
    // 0x0042CF00: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x0042CF04: jal         0x002017D4
    // 0x0042CF08: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_002017D4(rdram, ctx);
        goto after_4;
    // 0x0042CF08: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_4:
    // 0x0042CF0C: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x0042CF10: jal         0x002017D4
    // 0x0042CF14: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_002017D4(rdram, ctx);
        goto after_5;
    // 0x0042CF14: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_5:
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
        goto after_6;
    // 0x0042CF58: sw          $t1, 0x18($s3)
    MEM_W(0X18, ctx->r19) = ctx->r9;
    after_6:
    // 0x0042CF5C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
L_0042CF60:
    // 0x0042CF60: jal         0x002052D8
    // 0x0042CF64: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_002052D8(rdram, ctx);
        goto after_7;
    // 0x0042CF64: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_7:
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
RECOMP_FUNC void entry_0042CEB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
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
        goto after_0;
    // 0x0042CED8: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    after_0:
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
        goto after_1;
    // 0x0042CEF0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_1:
    // 0x0042CEF4: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x0042CEF8: jal         0x002017D4
    // 0x0042CEFC: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_002017D4(rdram, ctx);
        goto after_2;
    // 0x0042CEFC: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_2:
    // 0x0042CF00: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x0042CF04: jal         0x002017D4
    // 0x0042CF08: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_002017D4(rdram, ctx);
        goto after_3;
    // 0x0042CF08: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_3:
    // 0x0042CF0C: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x0042CF10: jal         0x002017D4
    // 0x0042CF14: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_002017D4(rdram, ctx);
        goto after_4;
    // 0x0042CF14: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_4:
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
        goto after_5;
    // 0x0042CF58: sw          $t1, 0x18($s3)
    MEM_W(0X18, ctx->r19) = ctx->r9;
    after_5:
    // 0x0042CF5C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
L_0042CF60:
    // 0x0042CF60: jal         0x002052D8
    // 0x0042CF64: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_002052D8(rdram, ctx);
        goto after_6;
    // 0x0042CF64: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_6:
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
RECOMP_FUNC void entry_0042D2B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0042D2B8: ori         $a0, $zero, 0xEC14
    ctx->r4 = 0 | 0XEC14;
    // 0x0042D2BC: addu        $a0, $s3, $a0
    ctx->r4 = ADD32(ctx->r19, ctx->r4);
    // 0x0042D2C0: addiu       $a1, $zero, 0x1CC
    ctx->r5 = ADD32(0, 0X1CC);
    // 0x0042D2C4: jal         0x00200500
    // 0x0042D2C8: addiu       $a2, $zero, 0x1D0
    ctx->r6 = ADD32(0, 0X1D0);
    func_00200500(rdram, ctx);
        goto after_0;
    // 0x0042D2C8: addiu       $a2, $zero, 0x1D0
    ctx->r6 = ADD32(0, 0X1D0);
    after_0:
    // 0x0042D2CC: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x0042D2D0: ori         $s1, $zero, 0xEC28
    ctx->r17 = 0 | 0XEC28;
L_0042D2D4:
    // 0x0042D2D4: addu        $a0, $s3, $s1
    ctx->r4 = ADD32(ctx->r19, ctx->r17);
    // 0x0042D2D8: addiu       $a1, $zero, 0x1C4
    ctx->r5 = ADD32(0, 0X1C4);
    // 0x0042D2DC: jal         0x00200500
    // 0x0042D2E0: addiu       $a2, $zero, 0x1C8
    ctx->r6 = ADD32(0, 0X1C8);
    func_00200500(rdram, ctx);
        goto after_1;
    // 0x0042D2E0: addiu       $a2, $zero, 0x1C8
    ctx->r6 = ADD32(0, 0X1C8);
    after_1:
    // 0x0042D2E4: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x0042D2E8: slti        $v0, $s0, 0x3
    ctx->r2 = SIGNED(ctx->r16) < 0X3 ? 1 : 0;
    // 0x0042D2EC: bne         $v0, $zero, L_0042D2D4
    if (ctx->r2 != 0) {
        // 0x0042D2F0: addiu       $s1, $s1, 0x14
        ctx->r17 = ADD32(ctx->r17, 0X14);
            goto L_0042D2D4;
    }
    // 0x0042D2F0: addiu       $s1, $s1, 0x14
    ctx->r17 = ADD32(ctx->r17, 0X14);
    // 0x0042D2F4: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x0042D2F8: addiu       $a0, $a0, 0x1850
    ctx->r4 = ADD32(ctx->r4, 0X1850);
    // 0x0042D2FC: jal         0x0027BD10
    // 0x0042D300: nop

    func_0027BD10(rdram, ctx);
        goto after_2;
    // 0x0042D300: nop

    after_2:
    // 0x0042D304: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0042D308: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x0042D30C: addiu       $t2, $zero, 0x2
    ctx->r10 = ADD32(0, 0X2);
    // 0x0042D310: addiu       $t1, $zero, 0x3
    ctx->r9 = ADD32(0, 0X3);
    // 0x0042D314: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x0042D318: addiu       $a2, $zero, -0x8000
    ctx->r6 = ADD32(0, -0X8000);
    // 0x0042D31C: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x0042D320: lui         $v1, 0x800F
    ctx->r3 = S32(0X800F << 16);
    // 0x0042D324: addiu       $v1, $v1, 0x1930
    ctx->r3 = ADD32(ctx->r3, 0X1930);
L_0042D328:
    // 0x0042D328: beq         $a0, $t0, L_0042D370
    if (ctx->r4 == ctx->r8) {
        // 0x0042D32C: slti        $v0, $a0, 0x2
        ctx->r2 = SIGNED(ctx->r4) < 0X2 ? 1 : 0;
            goto L_0042D370;
    }
    // 0x0042D32C: slti        $v0, $a0, 0x2
    ctx->r2 = SIGNED(ctx->r4) < 0X2 ? 1 : 0;
    // 0x0042D330: beq         $v0, $zero, L_0042D348
    if (ctx->r2 == 0) {
        // 0x0042D334: nop
    
            goto L_0042D348;
    }
    // 0x0042D334: nop

    // 0x0042D338: beql        $a0, $zero, L_0042D360
    if (ctx->r4 == 0) {
        // 0x0042D33C: sh          $a3, 0x0($v1)
        MEM_H(0X0, ctx->r3) = ctx->r7;
            goto L_0042D360;
    }
    goto skip_0;
    // 0x0042D33C: sh          $a3, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r7;
    skip_0:
    // 0x0042D340: j           L_0042D3A0
    // 0x0042D344: sh          $zero, 0x4($v1)
    MEM_H(0X4, ctx->r3) = 0;
        goto L_0042D3A0;
    // 0x0042D344: sh          $zero, 0x4($v1)
    MEM_H(0X4, ctx->r3) = 0;
L_0042D348:
    // 0x0042D348: beql        $a0, $t2, L_0042D384
    if (ctx->r4 == ctx->r10) {
        // 0x0042D34C: sh          $t0, 0x0($v1)
        MEM_H(0X0, ctx->r3) = ctx->r8;
            goto L_0042D384;
    }
    goto skip_1;
    // 0x0042D34C: sh          $t0, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r8;
    skip_1:
    // 0x0042D350: beql        $a0, $t1, L_0042D390
    if (ctx->r4 == ctx->r9) {
        // 0x0042D354: sh          $a3, 0x0($v1)
        MEM_H(0X0, ctx->r3) = ctx->r7;
            goto L_0042D390;
    }
    goto skip_2;
    // 0x0042D354: sh          $a3, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r7;
    skip_2:
    // 0x0042D358: j           L_0042D3A0
    // 0x0042D35C: sh          $zero, 0x4($v1)
    MEM_H(0X4, ctx->r3) = 0;
        goto L_0042D3A0;
    // 0x0042D35C: sh          $zero, 0x4($v1)
    MEM_H(0X4, ctx->r3) = 0;
L_0042D360:
    // 0x0042D360: sh          $t0, 0x2($v1)
    MEM_H(0X2, ctx->r3) = ctx->r8;
    // 0x0042D364: sh          $a2, 0x8($v1)
    MEM_H(0X8, ctx->r3) = ctx->r6;
    // 0x0042D368: j           L_0042D39C
    // 0x0042D36C: sh          $a2, 0xA($v1)
    MEM_H(0XA, ctx->r3) = ctx->r6;
        goto L_0042D39C;
    // 0x0042D36C: sh          $a2, 0xA($v1)
    MEM_H(0XA, ctx->r3) = ctx->r6;
L_0042D370:
    // 0x0042D370: sh          $a0, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r4;
    // 0x0042D374: sh          $a0, 0x2($v1)
    MEM_H(0X2, ctx->r3) = ctx->r4;
    // 0x0042D378: sh          $zero, 0x8($v1)
    MEM_H(0X8, ctx->r3) = 0;
    // 0x0042D37C: j           L_0042D39C
    // 0x0042D380: sh          $a2, 0xA($v1)
    MEM_H(0XA, ctx->r3) = ctx->r6;
        goto L_0042D39C;
    // 0x0042D380: sh          $a2, 0xA($v1)
    MEM_H(0XA, ctx->r3) = ctx->r6;
L_0042D384:
    // 0x0042D384: sh          $a3, 0x2($v1)
    MEM_H(0X2, ctx->r3) = ctx->r7;
    // 0x0042D388: j           L_0042D398
    // 0x0042D38C: sh          $zero, 0x8($v1)
    MEM_H(0X8, ctx->r3) = 0;
        goto L_0042D398;
    // 0x0042D38C: sh          $zero, 0x8($v1)
    MEM_H(0X8, ctx->r3) = 0;
L_0042D390:
    // 0x0042D390: sh          $a3, 0x2($v1)
    MEM_H(0X2, ctx->r3) = ctx->r7;
    // 0x0042D394: sh          $a2, 0x8($v1)
    MEM_H(0X8, ctx->r3) = ctx->r6;
L_0042D398:
    // 0x0042D398: sh          $zero, 0xA($v1)
    MEM_H(0XA, ctx->r3) = 0;
L_0042D39C:
    // 0x0042D39C: sh          $zero, 0x4($v1)
    MEM_H(0X4, ctx->r3) = 0;
L_0042D3A0:
    // 0x0042D3A0: sh          $zero, 0x6($v1)
    MEM_H(0X6, ctx->r3) = 0;
    // 0x0042D3A4: sb          $a1, 0xC($v1)
    MEM_B(0XC, ctx->r3) = ctx->r5;
    // 0x0042D3A8: sb          $a1, 0xD($v1)
    MEM_B(0XD, ctx->r3) = ctx->r5;
    // 0x0042D3AC: sb          $a1, 0xE($v1)
    MEM_B(0XE, ctx->r3) = ctx->r5;
    // 0x0042D3B0: sb          $a1, 0xF($v1)
    MEM_B(0XF, ctx->r3) = ctx->r5;
    // 0x0042D3B4: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x0042D3B8: slti        $v0, $a0, 0x4
    ctx->r2 = SIGNED(ctx->r4) < 0X4 ? 1 : 0;
    // 0x0042D3BC: bne         $v0, $zero, L_0042D328
    if (ctx->r2 != 0) {
        // 0x0042D3C0: addiu       $v1, $v1, 0x10
        ctx->r3 = ADD32(ctx->r3, 0X10);
            goto L_0042D328;
    }
    // 0x0042D3C0: addiu       $v1, $v1, 0x10
    ctx->r3 = ADD32(ctx->r3, 0X10);
    // 0x0042D3C4: lui         $a1, 0x3FC9
    ctx->r5 = S32(0X3FC9 << 16);
    // 0x0042D3C8: ori         $a1, $a1, 0xFDB
    ctx->r5 = ctx->r5 | 0XFDB;
    // 0x0042D3CC: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x0042D3D0: addiu       $a0, $a0, 0x18F0
    ctx->r4 = ADD32(ctx->r4, 0X18F0);
    // 0x0042D3D4: jal         0x00210518
    // 0x0042D3D8: nop

    func_00210518(rdram, ctx);
        goto after_3;
    // 0x0042D3D8: nop

    after_3:
    // 0x0042D3DC: lui         $at, 0x1
    ctx->r1 = S32(0X1 << 16);
    // 0x0042D3E0: addu        $at, $s3, $at
    ctx->r1 = ADD32(ctx->r19, ctx->r1);
    // 0x0042D3E4: sw          $s4, -0x139C($at)
    MEM_W(-0X139C, ctx->r1) = ctx->r20;
    // 0x0042D3E8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x0042D3EC: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x0042D3F0: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x0042D3F4: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x0042D3F8: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x0042D3FC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0042D400: jr          $ra
    // 0x0042D404: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x0042D404: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void entry_0042D2BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0042D2BC: addu        $a0, $s3, $a0
    ctx->r4 = ADD32(ctx->r19, ctx->r4);
    // 0x0042D2C0: addiu       $a1, $zero, 0x1CC
    ctx->r5 = ADD32(0, 0X1CC);
    // 0x0042D2C4: jal         0x00200500
    // 0x0042D2C8: addiu       $a2, $zero, 0x1D0
    ctx->r6 = ADD32(0, 0X1D0);
    func_00200500(rdram, ctx);
        goto after_0;
    // 0x0042D2C8: addiu       $a2, $zero, 0x1D0
    ctx->r6 = ADD32(0, 0X1D0);
    after_0:
    // 0x0042D2CC: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x0042D2D0: ori         $s1, $zero, 0xEC28
    ctx->r17 = 0 | 0XEC28;
L_0042D2D4:
    // 0x0042D2D4: addu        $a0, $s3, $s1
    ctx->r4 = ADD32(ctx->r19, ctx->r17);
    // 0x0042D2D8: addiu       $a1, $zero, 0x1C4
    ctx->r5 = ADD32(0, 0X1C4);
    // 0x0042D2DC: jal         0x00200500
    // 0x0042D2E0: addiu       $a2, $zero, 0x1C8
    ctx->r6 = ADD32(0, 0X1C8);
    func_00200500(rdram, ctx);
        goto after_1;
    // 0x0042D2E0: addiu       $a2, $zero, 0x1C8
    ctx->r6 = ADD32(0, 0X1C8);
    after_1:
    // 0x0042D2E4: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x0042D2E8: slti        $v0, $s0, 0x3
    ctx->r2 = SIGNED(ctx->r16) < 0X3 ? 1 : 0;
    // 0x0042D2EC: bne         $v0, $zero, L_0042D2D4
    if (ctx->r2 != 0) {
        // 0x0042D2F0: addiu       $s1, $s1, 0x14
        ctx->r17 = ADD32(ctx->r17, 0X14);
            goto L_0042D2D4;
    }
    // 0x0042D2F0: addiu       $s1, $s1, 0x14
    ctx->r17 = ADD32(ctx->r17, 0X14);
    // 0x0042D2F4: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x0042D2F8: addiu       $a0, $a0, 0x1850
    ctx->r4 = ADD32(ctx->r4, 0X1850);
    // 0x0042D2FC: jal         0x0027BD10
    // 0x0042D300: nop

    func_0027BD10(rdram, ctx);
        goto after_2;
    // 0x0042D300: nop

    after_2:
    // 0x0042D304: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0042D308: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x0042D30C: addiu       $t2, $zero, 0x2
    ctx->r10 = ADD32(0, 0X2);
    // 0x0042D310: addiu       $t1, $zero, 0x3
    ctx->r9 = ADD32(0, 0X3);
    // 0x0042D314: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x0042D318: addiu       $a2, $zero, -0x8000
    ctx->r6 = ADD32(0, -0X8000);
    // 0x0042D31C: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x0042D320: lui         $v1, 0x800F
    ctx->r3 = S32(0X800F << 16);
    // 0x0042D324: addiu       $v1, $v1, 0x1930
    ctx->r3 = ADD32(ctx->r3, 0X1930);
L_0042D328:
    // 0x0042D328: beq         $a0, $t0, L_0042D370
    if (ctx->r4 == ctx->r8) {
        // 0x0042D32C: slti        $v0, $a0, 0x2
        ctx->r2 = SIGNED(ctx->r4) < 0X2 ? 1 : 0;
            goto L_0042D370;
    }
    // 0x0042D32C: slti        $v0, $a0, 0x2
    ctx->r2 = SIGNED(ctx->r4) < 0X2 ? 1 : 0;
    // 0x0042D330: beq         $v0, $zero, L_0042D348
    if (ctx->r2 == 0) {
        // 0x0042D334: nop
    
            goto L_0042D348;
    }
    // 0x0042D334: nop

    // 0x0042D338: beql        $a0, $zero, L_0042D360
    if (ctx->r4 == 0) {
        // 0x0042D33C: sh          $a3, 0x0($v1)
        MEM_H(0X0, ctx->r3) = ctx->r7;
            goto L_0042D360;
    }
    goto skip_0;
    // 0x0042D33C: sh          $a3, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r7;
    skip_0:
    // 0x0042D340: j           L_0042D3A0
    // 0x0042D344: sh          $zero, 0x4($v1)
    MEM_H(0X4, ctx->r3) = 0;
        goto L_0042D3A0;
    // 0x0042D344: sh          $zero, 0x4($v1)
    MEM_H(0X4, ctx->r3) = 0;
L_0042D348:
    // 0x0042D348: beql        $a0, $t2, L_0042D384
    if (ctx->r4 == ctx->r10) {
        // 0x0042D34C: sh          $t0, 0x0($v1)
        MEM_H(0X0, ctx->r3) = ctx->r8;
            goto L_0042D384;
    }
    goto skip_1;
    // 0x0042D34C: sh          $t0, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r8;
    skip_1:
    // 0x0042D350: beql        $a0, $t1, L_0042D390
    if (ctx->r4 == ctx->r9) {
        // 0x0042D354: sh          $a3, 0x0($v1)
        MEM_H(0X0, ctx->r3) = ctx->r7;
            goto L_0042D390;
    }
    goto skip_2;
    // 0x0042D354: sh          $a3, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r7;
    skip_2:
    // 0x0042D358: j           L_0042D3A0
    // 0x0042D35C: sh          $zero, 0x4($v1)
    MEM_H(0X4, ctx->r3) = 0;
        goto L_0042D3A0;
    // 0x0042D35C: sh          $zero, 0x4($v1)
    MEM_H(0X4, ctx->r3) = 0;
L_0042D360:
    // 0x0042D360: sh          $t0, 0x2($v1)
    MEM_H(0X2, ctx->r3) = ctx->r8;
    // 0x0042D364: sh          $a2, 0x8($v1)
    MEM_H(0X8, ctx->r3) = ctx->r6;
    // 0x0042D368: j           L_0042D39C
    // 0x0042D36C: sh          $a2, 0xA($v1)
    MEM_H(0XA, ctx->r3) = ctx->r6;
        goto L_0042D39C;
    // 0x0042D36C: sh          $a2, 0xA($v1)
    MEM_H(0XA, ctx->r3) = ctx->r6;
L_0042D370:
    // 0x0042D370: sh          $a0, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r4;
    // 0x0042D374: sh          $a0, 0x2($v1)
    MEM_H(0X2, ctx->r3) = ctx->r4;
    // 0x0042D378: sh          $zero, 0x8($v1)
    MEM_H(0X8, ctx->r3) = 0;
    // 0x0042D37C: j           L_0042D39C
    // 0x0042D380: sh          $a2, 0xA($v1)
    MEM_H(0XA, ctx->r3) = ctx->r6;
        goto L_0042D39C;
    // 0x0042D380: sh          $a2, 0xA($v1)
    MEM_H(0XA, ctx->r3) = ctx->r6;
L_0042D384:
    // 0x0042D384: sh          $a3, 0x2($v1)
    MEM_H(0X2, ctx->r3) = ctx->r7;
    // 0x0042D388: j           L_0042D398
    // 0x0042D38C: sh          $zero, 0x8($v1)
    MEM_H(0X8, ctx->r3) = 0;
        goto L_0042D398;
    // 0x0042D38C: sh          $zero, 0x8($v1)
    MEM_H(0X8, ctx->r3) = 0;
L_0042D390:
    // 0x0042D390: sh          $a3, 0x2($v1)
    MEM_H(0X2, ctx->r3) = ctx->r7;
    // 0x0042D394: sh          $a2, 0x8($v1)
    MEM_H(0X8, ctx->r3) = ctx->r6;
L_0042D398:
    // 0x0042D398: sh          $zero, 0xA($v1)
    MEM_H(0XA, ctx->r3) = 0;
L_0042D39C:
    // 0x0042D39C: sh          $zero, 0x4($v1)
    MEM_H(0X4, ctx->r3) = 0;
L_0042D3A0:
    // 0x0042D3A0: sh          $zero, 0x6($v1)
    MEM_H(0X6, ctx->r3) = 0;
    // 0x0042D3A4: sb          $a1, 0xC($v1)
    MEM_B(0XC, ctx->r3) = ctx->r5;
    // 0x0042D3A8: sb          $a1, 0xD($v1)
    MEM_B(0XD, ctx->r3) = ctx->r5;
    // 0x0042D3AC: sb          $a1, 0xE($v1)
    MEM_B(0XE, ctx->r3) = ctx->r5;
    // 0x0042D3B0: sb          $a1, 0xF($v1)
    MEM_B(0XF, ctx->r3) = ctx->r5;
    // 0x0042D3B4: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x0042D3B8: slti        $v0, $a0, 0x4
    ctx->r2 = SIGNED(ctx->r4) < 0X4 ? 1 : 0;
    // 0x0042D3BC: bne         $v0, $zero, L_0042D328
    if (ctx->r2 != 0) {
        // 0x0042D3C0: addiu       $v1, $v1, 0x10
        ctx->r3 = ADD32(ctx->r3, 0X10);
            goto L_0042D328;
    }
    // 0x0042D3C0: addiu       $v1, $v1, 0x10
    ctx->r3 = ADD32(ctx->r3, 0X10);
    // 0x0042D3C4: lui         $a1, 0x3FC9
    ctx->r5 = S32(0X3FC9 << 16);
    // 0x0042D3C8: ori         $a1, $a1, 0xFDB
    ctx->r5 = ctx->r5 | 0XFDB;
    // 0x0042D3CC: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x0042D3D0: addiu       $a0, $a0, 0x18F0
    ctx->r4 = ADD32(ctx->r4, 0X18F0);
    // 0x0042D3D4: jal         0x00210518
    // 0x0042D3D8: nop

    func_00210518(rdram, ctx);
        goto after_3;
    // 0x0042D3D8: nop

    after_3:
    // 0x0042D3DC: lui         $at, 0x1
    ctx->r1 = S32(0X1 << 16);
    // 0x0042D3E0: addu        $at, $s3, $at
    ctx->r1 = ADD32(ctx->r19, ctx->r1);
    // 0x0042D3E4: sw          $s4, -0x139C($at)
    MEM_W(-0X139C, ctx->r1) = ctx->r20;
    // 0x0042D3E8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x0042D3EC: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x0042D3F0: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x0042D3F4: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x0042D3F8: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x0042D3FC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0042D400: jr          $ra
    // 0x0042D404: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x0042D404: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void entry_0042D2C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0042D2C0: addiu       $a1, $zero, 0x1CC
    ctx->r5 = ADD32(0, 0X1CC);
    // 0x0042D2C4: jal         0x00200500
    // 0x0042D2C8: addiu       $a2, $zero, 0x1D0
    ctx->r6 = ADD32(0, 0X1D0);
    func_00200500(rdram, ctx);
        goto after_0;
    // 0x0042D2C8: addiu       $a2, $zero, 0x1D0
    ctx->r6 = ADD32(0, 0X1D0);
    after_0:
    // 0x0042D2CC: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x0042D2D0: ori         $s1, $zero, 0xEC28
    ctx->r17 = 0 | 0XEC28;
L_0042D2D4:
    // 0x0042D2D4: addu        $a0, $s3, $s1
    ctx->r4 = ADD32(ctx->r19, ctx->r17);
    // 0x0042D2D8: addiu       $a1, $zero, 0x1C4
    ctx->r5 = ADD32(0, 0X1C4);
    // 0x0042D2DC: jal         0x00200500
    // 0x0042D2E0: addiu       $a2, $zero, 0x1C8
    ctx->r6 = ADD32(0, 0X1C8);
    func_00200500(rdram, ctx);
        goto after_1;
    // 0x0042D2E0: addiu       $a2, $zero, 0x1C8
    ctx->r6 = ADD32(0, 0X1C8);
    after_1:
    // 0x0042D2E4: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x0042D2E8: slti        $v0, $s0, 0x3
    ctx->r2 = SIGNED(ctx->r16) < 0X3 ? 1 : 0;
    // 0x0042D2EC: bne         $v0, $zero, L_0042D2D4
    if (ctx->r2 != 0) {
        // 0x0042D2F0: addiu       $s1, $s1, 0x14
        ctx->r17 = ADD32(ctx->r17, 0X14);
            goto L_0042D2D4;
    }
    // 0x0042D2F0: addiu       $s1, $s1, 0x14
    ctx->r17 = ADD32(ctx->r17, 0X14);
    // 0x0042D2F4: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x0042D2F8: addiu       $a0, $a0, 0x1850
    ctx->r4 = ADD32(ctx->r4, 0X1850);
    // 0x0042D2FC: jal         0x0027BD10
    // 0x0042D300: nop

    func_0027BD10(rdram, ctx);
        goto after_2;
    // 0x0042D300: nop

    after_2:
    // 0x0042D304: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0042D308: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x0042D30C: addiu       $t2, $zero, 0x2
    ctx->r10 = ADD32(0, 0X2);
    // 0x0042D310: addiu       $t1, $zero, 0x3
    ctx->r9 = ADD32(0, 0X3);
    // 0x0042D314: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x0042D318: addiu       $a2, $zero, -0x8000
    ctx->r6 = ADD32(0, -0X8000);
    // 0x0042D31C: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x0042D320: lui         $v1, 0x800F
    ctx->r3 = S32(0X800F << 16);
    // 0x0042D324: addiu       $v1, $v1, 0x1930
    ctx->r3 = ADD32(ctx->r3, 0X1930);
L_0042D328:
    // 0x0042D328: beq         $a0, $t0, L_0042D370
    if (ctx->r4 == ctx->r8) {
        // 0x0042D32C: slti        $v0, $a0, 0x2
        ctx->r2 = SIGNED(ctx->r4) < 0X2 ? 1 : 0;
            goto L_0042D370;
    }
    // 0x0042D32C: slti        $v0, $a0, 0x2
    ctx->r2 = SIGNED(ctx->r4) < 0X2 ? 1 : 0;
    // 0x0042D330: beq         $v0, $zero, L_0042D348
    if (ctx->r2 == 0) {
        // 0x0042D334: nop
    
            goto L_0042D348;
    }
    // 0x0042D334: nop

    // 0x0042D338: beql        $a0, $zero, L_0042D360
    if (ctx->r4 == 0) {
        // 0x0042D33C: sh          $a3, 0x0($v1)
        MEM_H(0X0, ctx->r3) = ctx->r7;
            goto L_0042D360;
    }
    goto skip_0;
    // 0x0042D33C: sh          $a3, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r7;
    skip_0:
    // 0x0042D340: j           L_0042D3A0
    // 0x0042D344: sh          $zero, 0x4($v1)
    MEM_H(0X4, ctx->r3) = 0;
        goto L_0042D3A0;
    // 0x0042D344: sh          $zero, 0x4($v1)
    MEM_H(0X4, ctx->r3) = 0;
L_0042D348:
    // 0x0042D348: beql        $a0, $t2, L_0042D384
    if (ctx->r4 == ctx->r10) {
        // 0x0042D34C: sh          $t0, 0x0($v1)
        MEM_H(0X0, ctx->r3) = ctx->r8;
            goto L_0042D384;
    }
    goto skip_1;
    // 0x0042D34C: sh          $t0, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r8;
    skip_1:
    // 0x0042D350: beql        $a0, $t1, L_0042D390
    if (ctx->r4 == ctx->r9) {
        // 0x0042D354: sh          $a3, 0x0($v1)
        MEM_H(0X0, ctx->r3) = ctx->r7;
            goto L_0042D390;
    }
    goto skip_2;
    // 0x0042D354: sh          $a3, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r7;
    skip_2:
    // 0x0042D358: j           L_0042D3A0
    // 0x0042D35C: sh          $zero, 0x4($v1)
    MEM_H(0X4, ctx->r3) = 0;
        goto L_0042D3A0;
    // 0x0042D35C: sh          $zero, 0x4($v1)
    MEM_H(0X4, ctx->r3) = 0;
L_0042D360:
    // 0x0042D360: sh          $t0, 0x2($v1)
    MEM_H(0X2, ctx->r3) = ctx->r8;
    // 0x0042D364: sh          $a2, 0x8($v1)
    MEM_H(0X8, ctx->r3) = ctx->r6;
    // 0x0042D368: j           L_0042D39C
    // 0x0042D36C: sh          $a2, 0xA($v1)
    MEM_H(0XA, ctx->r3) = ctx->r6;
        goto L_0042D39C;
    // 0x0042D36C: sh          $a2, 0xA($v1)
    MEM_H(0XA, ctx->r3) = ctx->r6;
L_0042D370:
    // 0x0042D370: sh          $a0, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r4;
    // 0x0042D374: sh          $a0, 0x2($v1)
    MEM_H(0X2, ctx->r3) = ctx->r4;
    // 0x0042D378: sh          $zero, 0x8($v1)
    MEM_H(0X8, ctx->r3) = 0;
    // 0x0042D37C: j           L_0042D39C
    // 0x0042D380: sh          $a2, 0xA($v1)
    MEM_H(0XA, ctx->r3) = ctx->r6;
        goto L_0042D39C;
    // 0x0042D380: sh          $a2, 0xA($v1)
    MEM_H(0XA, ctx->r3) = ctx->r6;
L_0042D384:
    // 0x0042D384: sh          $a3, 0x2($v1)
    MEM_H(0X2, ctx->r3) = ctx->r7;
    // 0x0042D388: j           L_0042D398
    // 0x0042D38C: sh          $zero, 0x8($v1)
    MEM_H(0X8, ctx->r3) = 0;
        goto L_0042D398;
    // 0x0042D38C: sh          $zero, 0x8($v1)
    MEM_H(0X8, ctx->r3) = 0;
L_0042D390:
    // 0x0042D390: sh          $a3, 0x2($v1)
    MEM_H(0X2, ctx->r3) = ctx->r7;
    // 0x0042D394: sh          $a2, 0x8($v1)
    MEM_H(0X8, ctx->r3) = ctx->r6;
L_0042D398:
    // 0x0042D398: sh          $zero, 0xA($v1)
    MEM_H(0XA, ctx->r3) = 0;
L_0042D39C:
    // 0x0042D39C: sh          $zero, 0x4($v1)
    MEM_H(0X4, ctx->r3) = 0;
L_0042D3A0:
    // 0x0042D3A0: sh          $zero, 0x6($v1)
    MEM_H(0X6, ctx->r3) = 0;
    // 0x0042D3A4: sb          $a1, 0xC($v1)
    MEM_B(0XC, ctx->r3) = ctx->r5;
    // 0x0042D3A8: sb          $a1, 0xD($v1)
    MEM_B(0XD, ctx->r3) = ctx->r5;
    // 0x0042D3AC: sb          $a1, 0xE($v1)
    MEM_B(0XE, ctx->r3) = ctx->r5;
    // 0x0042D3B0: sb          $a1, 0xF($v1)
    MEM_B(0XF, ctx->r3) = ctx->r5;
    // 0x0042D3B4: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x0042D3B8: slti        $v0, $a0, 0x4
    ctx->r2 = SIGNED(ctx->r4) < 0X4 ? 1 : 0;
    // 0x0042D3BC: bne         $v0, $zero, L_0042D328
    if (ctx->r2 != 0) {
        // 0x0042D3C0: addiu       $v1, $v1, 0x10
        ctx->r3 = ADD32(ctx->r3, 0X10);
            goto L_0042D328;
    }
    // 0x0042D3C0: addiu       $v1, $v1, 0x10
    ctx->r3 = ADD32(ctx->r3, 0X10);
    // 0x0042D3C4: lui         $a1, 0x3FC9
    ctx->r5 = S32(0X3FC9 << 16);
    // 0x0042D3C8: ori         $a1, $a1, 0xFDB
    ctx->r5 = ctx->r5 | 0XFDB;
    // 0x0042D3CC: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x0042D3D0: addiu       $a0, $a0, 0x18F0
    ctx->r4 = ADD32(ctx->r4, 0X18F0);
    // 0x0042D3D4: jal         0x00210518
    // 0x0042D3D8: nop

    func_00210518(rdram, ctx);
        goto after_3;
    // 0x0042D3D8: nop

    after_3:
    // 0x0042D3DC: lui         $at, 0x1
    ctx->r1 = S32(0X1 << 16);
    // 0x0042D3E0: addu        $at, $s3, $at
    ctx->r1 = ADD32(ctx->r19, ctx->r1);
    // 0x0042D3E4: sw          $s4, -0x139C($at)
    MEM_W(-0X139C, ctx->r1) = ctx->r20;
    // 0x0042D3E8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x0042D3EC: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x0042D3F0: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x0042D3F4: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x0042D3F8: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x0042D3FC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0042D400: jr          $ra
    // 0x0042D404: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x0042D404: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void entry_0042D330(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_0042D328:
    // 0x0042D330: beq         $v0, $zero, L_0042D348
    if (ctx->r2 == 0) {
        // 0x0042D334: nop
    
            goto L_0042D348;
    }
    // 0x0042D334: nop

    // 0x0042D338: beql        $a0, $zero, L_0042D360
    if (ctx->r4 == 0) {
        // 0x0042D33C: sh          $a3, 0x0($v1)
        MEM_H(0X0, ctx->r3) = ctx->r7;
            goto L_0042D360;
    }
    goto skip_0;
    // 0x0042D33C: sh          $a3, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r7;
    skip_0:
    // 0x0042D340: j           L_0042D3A0
    // 0x0042D344: sh          $zero, 0x4($v1)
    MEM_H(0X4, ctx->r3) = 0;
        goto L_0042D3A0;
    // 0x0042D344: sh          $zero, 0x4($v1)
    MEM_H(0X4, ctx->r3) = 0;
L_0042D348:
    // 0x0042D348: beql        $a0, $t2, L_0042D384
    if (ctx->r4 == ctx->r10) {
        // 0x0042D34C: sh          $t0, 0x0($v1)
        MEM_H(0X0, ctx->r3) = ctx->r8;
            goto L_0042D384;
    }
    goto skip_1;
    // 0x0042D34C: sh          $t0, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r8;
    skip_1:
    // 0x0042D350: beql        $a0, $t1, L_0042D390
    if (ctx->r4 == ctx->r9) {
        // 0x0042D354: sh          $a3, 0x0($v1)
        MEM_H(0X0, ctx->r3) = ctx->r7;
            goto L_0042D390;
    }
    goto skip_2;
    // 0x0042D354: sh          $a3, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r7;
    skip_2:
    // 0x0042D358: j           L_0042D3A0
    // 0x0042D35C: sh          $zero, 0x4($v1)
    MEM_H(0X4, ctx->r3) = 0;
        goto L_0042D3A0;
    // 0x0042D35C: sh          $zero, 0x4($v1)
    MEM_H(0X4, ctx->r3) = 0;
L_0042D360:
    // 0x0042D360: sh          $t0, 0x2($v1)
    MEM_H(0X2, ctx->r3) = ctx->r8;
    // 0x0042D364: sh          $a2, 0x8($v1)
    MEM_H(0X8, ctx->r3) = ctx->r6;
    // 0x0042D368: j           L_0042D39C
    // 0x0042D36C: sh          $a2, 0xA($v1)
    MEM_H(0XA, ctx->r3) = ctx->r6;
        goto L_0042D39C;
    // 0x0042D36C: sh          $a2, 0xA($v1)
    MEM_H(0XA, ctx->r3) = ctx->r6;
    // 0x0042D370: sh          $a0, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r4;
    // 0x0042D374: sh          $a0, 0x2($v1)
    MEM_H(0X2, ctx->r3) = ctx->r4;
    // 0x0042D378: sh          $zero, 0x8($v1)
    MEM_H(0X8, ctx->r3) = 0;
    // 0x0042D37C: j           L_0042D39C
    // 0x0042D380: sh          $a2, 0xA($v1)
    MEM_H(0XA, ctx->r3) = ctx->r6;
        goto L_0042D39C;
    // 0x0042D380: sh          $a2, 0xA($v1)
    MEM_H(0XA, ctx->r3) = ctx->r6;
L_0042D384:
    // 0x0042D384: sh          $a3, 0x2($v1)
    MEM_H(0X2, ctx->r3) = ctx->r7;
    // 0x0042D388: j           L_0042D398
    // 0x0042D38C: sh          $zero, 0x8($v1)
    MEM_H(0X8, ctx->r3) = 0;
        goto L_0042D398;
    // 0x0042D38C: sh          $zero, 0x8($v1)
    MEM_H(0X8, ctx->r3) = 0;
L_0042D390:
    // 0x0042D390: sh          $a3, 0x2($v1)
    MEM_H(0X2, ctx->r3) = ctx->r7;
    // 0x0042D394: sh          $a2, 0x8($v1)
    MEM_H(0X8, ctx->r3) = ctx->r6;
L_0042D398:
    // 0x0042D398: sh          $zero, 0xA($v1)
    MEM_H(0XA, ctx->r3) = 0;
L_0042D39C:
    // 0x0042D39C: sh          $zero, 0x4($v1)
    MEM_H(0X4, ctx->r3) = 0;
L_0042D3A0:
    // 0x0042D3A0: sh          $zero, 0x6($v1)
    MEM_H(0X6, ctx->r3) = 0;
    // 0x0042D3A4: sb          $a1, 0xC($v1)
    MEM_B(0XC, ctx->r3) = ctx->r5;
    // 0x0042D3A8: sb          $a1, 0xD($v1)
    MEM_B(0XD, ctx->r3) = ctx->r5;
    // 0x0042D3AC: sb          $a1, 0xE($v1)
    MEM_B(0XE, ctx->r3) = ctx->r5;
    // 0x0042D3B0: sb          $a1, 0xF($v1)
    MEM_B(0XF, ctx->r3) = ctx->r5;
    // 0x0042D3B4: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x0042D3B8: slti        $v0, $a0, 0x4
    ctx->r2 = SIGNED(ctx->r4) < 0X4 ? 1 : 0;
    // 0x0042D3BC: bne         $v0, $zero, L_0042D328
    if (ctx->r2 != 0) {
        // 0x0042D3C0: addiu       $v1, $v1, 0x10
        ctx->r3 = ADD32(ctx->r3, 0X10);
            goto L_0042D328;
    }
    // 0x0042D3C0: addiu       $v1, $v1, 0x10
    ctx->r3 = ADD32(ctx->r3, 0X10);
    // 0x0042D3C4: lui         $a1, 0x3FC9
    ctx->r5 = S32(0X3FC9 << 16);
    // 0x0042D3C8: ori         $a1, $a1, 0xFDB
    ctx->r5 = ctx->r5 | 0XFDB;
    // 0x0042D3CC: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x0042D3D0: addiu       $a0, $a0, 0x18F0
    ctx->r4 = ADD32(ctx->r4, 0X18F0);
    // 0x0042D3D4: jal         0x00210518
    // 0x0042D3D8: nop

    func_00210518(rdram, ctx);
        goto after_0;
    // 0x0042D3D8: nop

    after_0:
    // 0x0042D3DC: lui         $at, 0x1
    ctx->r1 = S32(0X1 << 16);
    // 0x0042D3E0: addu        $at, $s3, $at
    ctx->r1 = ADD32(ctx->r19, ctx->r1);
    // 0x0042D3E4: sw          $s4, -0x139C($at)
    MEM_W(-0X139C, ctx->r1) = ctx->r20;
    // 0x0042D3E8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x0042D3EC: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x0042D3F0: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x0042D3F4: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x0042D3F8: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x0042D3FC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0042D400: jr          $ra
    // 0x0042D404: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x0042D404: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void entry_0042D980(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0042D980: nop

    // 0x0042D984: nop

    // 0x0042D988: nop

    // 0x0042D98C: nop

    // 0x0042D990: nop

    // 0x0042D994: nop

    // 0x0042D998: lb          $t7, 0x1BC0($zero)
    ctx->r15 = MEM_B(0, 0X1BC0);
;}
