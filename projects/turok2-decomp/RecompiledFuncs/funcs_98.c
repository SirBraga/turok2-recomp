#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void entry_00408CE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_00408C44:
    // 0x00408CE0: lw          $a2, 0x28C($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X28C);
    // 0x00408CE4: bne         $a2, $zero, L_00408C44
    if (ctx->r6 != 0) {
        // 0x00408CE8: nop
    
            goto L_00408C44;
    }
    // 0x00408CE8: nop

    // 0x00408CEC: jr          $ra
    // 0x00408CF0: nop

    return;
    // 0x00408CF0: nop

;}
RECOMP_FUNC void entry_00408DB8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00408DB8: lw          $ra, 0x38($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X38);
    // 0x00408DBC: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x00408DC0: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x00408DC4: jr          $ra
    // 0x00408DC8: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x00408DC8: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void entry_00408FA0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00408FA0: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x00408FA4: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x00408FA8: jr          $ra
    // 0x00408FAC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x00408FAC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void entry_004090BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004090BC: lw          $v1, 0x65C($s3)
    ctx->r3 = MEM_W(ctx->r19, 0X65C);
    // 0x004090C0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x004090C4: beq         $v1, $a0, L_00409180
    if (ctx->r3 == ctx->r4) {
        // 0x004090C8: addiu       $s1, $zero, -0x1
        ctx->r17 = ADD32(0, -0X1);
            goto L_00409180;
    }
    // 0x004090C8: addiu       $s1, $zero, -0x1
    ctx->r17 = ADD32(0, -0X1);
    // 0x004090CC: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x004090D0: beq         $v0, $zero, L_004090E8
    if (ctx->r2 == 0) {
        // 0x004090D4: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_004090E8;
    }
    // 0x004090D4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x004090D8: beq         $v1, $zero, L_004090F8
    if (ctx->r3 == 0) {
        // 0x004090DC: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_004090F8;
    }
    // 0x004090DC: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x004090E0: j           L_004091D0
    // 0x004090E4: nop

        goto L_004091D0;
    // 0x004090E4: nop

L_004090E8:
    // 0x004090E8: beq         $v1, $v0, L_004091B8
    if (ctx->r3 == ctx->r2) {
        // 0x004090EC: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_004091B8;
    }
    // 0x004090EC: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x004090F0: j           L_004091D0
    // 0x004090F4: nop

        goto L_004091D0;
    // 0x004090F4: nop

L_004090F8:
    // 0x004090F8: bne         $s2, $zero, L_0040913C
    if (ctx->r18 != 0) {
        // 0x004090FC: nop
    
            goto L_0040913C;
    }
    // 0x004090FC: nop

    // 0x00409100: lw          $v0, 0xE8($s3)
    ctx->r2 = MEM_W(ctx->r19, 0XE8);
    // 0x00409104: blez        $v0, L_00409114
    if (SIGNED(ctx->r2) <= 0) {
        // 0x00409108: nop
    
            goto L_00409114;
    }
    // 0x00409108: nop

    // 0x0040910C: j           L_004091CC
    // 0x00409110: addiu       $s1, $zero, 0x2
    ctx->r17 = ADD32(0, 0X2);
        goto L_004091CC;
    // 0x00409110: addiu       $s1, $zero, 0x2
    ctx->r17 = ADD32(0, 0X2);
L_00409114:
    // 0x00409114: lw          $v0, 0x150($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X150);
    // 0x00409118: blez        $v0, L_00409128
    if (SIGNED(ctx->r2) <= 0) {
        // 0x0040911C: nop
    
            goto L_00409128;
    }
    // 0x0040911C: nop

    // 0x00409120: j           L_004091CC
    // 0x00409124: addiu       $s1, $zero, 0x3
    ctx->r17 = ADD32(0, 0X3);
        goto L_004091CC;
    // 0x00409124: addiu       $s1, $zero, 0x3
    ctx->r17 = ADD32(0, 0X3);
L_00409128:
    // 0x00409128: lw          $v0, 0x1B8($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X1B8);
    // 0x0040912C: bgtzl       $v0, L_004091CC
    if (SIGNED(ctx->r2) > 0) {
        // 0x00409130: addiu       $s1, $zero, 0x4
        ctx->r17 = ADD32(0, 0X4);
            goto L_004091CC;
    }
    goto skip_0;
    // 0x00409130: addiu       $s1, $zero, 0x4
    ctx->r17 = ADD32(0, 0X4);
    skip_0:
    // 0x00409134: j           L_004091D0
    // 0x00409138: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_004091D0;
    // 0x00409138: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_0040913C:
    // 0x0040913C: bne         $s2, $a0, L_004091D0
    if (ctx->r18 != ctx->r4) {
        // 0x00409140: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_004091D0;
    }
    // 0x00409140: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x00409144: lw          $v0, 0x288($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X288);
    // 0x00409148: blez        $v0, L_00409158
    if (SIGNED(ctx->r2) <= 0) {
        // 0x0040914C: nop
    
            goto L_00409158;
    }
    // 0x0040914C: nop

    // 0x00409150: j           L_004091CC
    // 0x00409154: addiu       $s1, $zero, 0x6
    ctx->r17 = ADD32(0, 0X6);
        goto L_004091CC;
    // 0x00409154: addiu       $s1, $zero, 0x6
    ctx->r17 = ADD32(0, 0X6);
L_00409158:
    // 0x00409158: lw          $v0, 0x2F0($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X2F0);
    // 0x0040915C: blez        $v0, L_0040916C
    if (SIGNED(ctx->r2) <= 0) {
        // 0x00409160: nop
    
            goto L_0040916C;
    }
    // 0x00409160: nop

    // 0x00409164: j           L_004091CC
    // 0x00409168: addiu       $s1, $zero, 0x7
    ctx->r17 = ADD32(0, 0X7);
        goto L_004091CC;
    // 0x00409168: addiu       $s1, $zero, 0x7
    ctx->r17 = ADD32(0, 0X7);
L_0040916C:
    // 0x0040916C: lw          $v0, 0x358($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X358);
    // 0x00409170: bgtzl       $v0, L_004091CC
    if (SIGNED(ctx->r2) > 0) {
        // 0x00409174: addiu       $s1, $zero, 0x8
        ctx->r17 = ADD32(0, 0X8);
            goto L_004091CC;
    }
    goto skip_1;
    // 0x00409174: addiu       $s1, $zero, 0x8
    ctx->r17 = ADD32(0, 0X8);
    skip_1:
    // 0x00409178: j           L_004091D0
    // 0x0040917C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_004091D0;
    // 0x0040917C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_00409180:
    // 0x00409180: bne         $s2, $zero, L_0040919C
    if (ctx->r18 != 0) {
        // 0x00409184: nop
    
            goto L_0040919C;
    }
    // 0x00409184: nop

    // 0x00409188: lw          $v0, 0x80($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X80);
    // 0x0040918C: bgtzl       $v0, L_004091CC
    if (SIGNED(ctx->r2) > 0) {
        // 0x00409190: addiu       $s1, $zero, 0x1
        ctx->r17 = ADD32(0, 0X1);
            goto L_004091CC;
    }
    goto skip_2;
    // 0x00409190: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
    skip_2:
    // 0x00409194: j           L_004091D0
    // 0x00409198: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_004091D0;
    // 0x00409198: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_0040919C:
    // 0x0040919C: bne         $s2, $v1, L_004091D0
    if (ctx->r18 != ctx->r3) {
        // 0x004091A0: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_004091D0;
    }
    // 0x004091A0: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x004091A4: lw          $v0, 0x220($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X220);
    // 0x004091A8: bgtzl       $v0, L_004091CC
    if (SIGNED(ctx->r2) > 0) {
        // 0x004091AC: addiu       $s1, $zero, 0x5
        ctx->r17 = ADD32(0, 0X5);
            goto L_004091CC;
    }
    goto skip_3;
    // 0x004091AC: addiu       $s1, $zero, 0x5
    ctx->r17 = ADD32(0, 0X5);
    skip_3:
    // 0x004091B0: j           L_004091D0
    // 0x004091B4: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_004091D0;
    // 0x004091B4: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_004091B8:
    // 0x004091B8: bne         $s2, $v1, L_004091D0
    if (ctx->r18 != ctx->r3) {
        // 0x004091BC: nop
    
            goto L_004091D0;
    }
    // 0x004091BC: nop

    // 0x004091C0: lw          $v0, 0x560($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X560);
    // 0x004091C4: bgtzl       $v0, L_004091CC
    if (SIGNED(ctx->r2) > 0) {
        // 0x004091C8: addiu       $s1, $zero, 0xD
        ctx->r17 = ADD32(0, 0XD);
            goto L_004091CC;
    }
    goto skip_4;
    // 0x004091C8: addiu       $s1, $zero, 0xD
    ctx->r17 = ADD32(0, 0XD);
    skip_4:
L_004091CC:
    // 0x004091CC: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_004091D0:
    // 0x004091D0: beq         $s1, $v0, L_0040931C
    if (ctx->r17 == ctx->r2) {
        // 0x004091D4: sll         $v0, $s1, 1
        ctx->r2 = S32(ctx->r17 << 1);
            goto L_0040931C;
    }
    // 0x004091D4: sll         $v0, $s1, 1
    ctx->r2 = S32(ctx->r17 << 1);
    // 0x004091D8: addu        $v0, $v0, $s1
    ctx->r2 = ADD32(ctx->r2, ctx->r17);
    // 0x004091DC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x004091E0: addu        $v0, $v0, $s1
    ctx->r2 = ADD32(ctx->r2, ctx->r17);
    // 0x004091E4: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x004091E8: addu        $s0, $s3, $v0
    ctx->r16 = ADD32(ctx->r19, ctx->r2);
    // 0x004091EC: lw          $v0, 0x4($t1)
    ctx->r2 = MEM_W(ctx->r9, 0X4);
    // 0x004091F0: lw          $v1, 0x18($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X18);
    // 0x004091F4: addu        $a3, $v0, $zero
    ctx->r7 = ADD32(ctx->r2, 0);
    // 0x004091F8: slt         $v0, $v1, $a3
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r7) ? 1 : 0;
    // 0x004091FC: bnel        $v0, $zero, L_00409204
    if (ctx->r2 != 0) {
        // 0x00409200: addu        $a3, $v1, $zero
        ctx->r7 = ADD32(ctx->r3, 0);
            goto L_00409204;
    }
    goto skip_5;
    // 0x00409200: addu        $a3, $v1, $zero
    ctx->r7 = ADD32(ctx->r3, 0);
    skip_5:
L_00409204:
    // 0x00409204: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    // 0x00409208: subu        $v0, $v1, $a3
    ctx->r2 = SUB32(ctx->r3, ctx->r7);
    // 0x0040920C: sw          $v0, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->r2;
    // 0x00409210: lw          $v0, 0x678($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X678);
    // 0x00409214: lui         $a1, 0x43
    ctx->r5 = S32(0X43 << 16);
    // 0x00409218: addiu       $a1, $a1, 0x1E54
    ctx->r5 = ADD32(ctx->r5, 0X1E54);
    // 0x0040921C: subu        $v0, $v0, $a3
    ctx->r2 = SUB32(ctx->r2, ctx->r7);
    // 0x00409220: jal         0x0040BDD0
    // 0x00409224: sw          $v0, 0x678($s3)
    MEM_W(0X678, ctx->r19) = ctx->r2;
    func_0040BDD0(rdram, ctx);
        goto after_0;
    // 0x00409224: sw          $v0, 0x678($s3)
    MEM_W(0X678, ctx->r19) = ctx->r2;
    after_0:
    // 0x00409228: lw          $v0, 0x18($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X18);
    // 0x0040922C: bgtz        $v0, L_0040931C
    if (SIGNED(ctx->r2) > 0) {
        // 0x00409230: nop
    
            goto L_0040931C;
    }
    // 0x00409230: nop

    // 0x00409234: lw          $v0, 0x65C($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X65C);
    // 0x00409238: bne         $v0, $zero, L_0040928C
    if (ctx->r2 != 0) {
        // 0x0040923C: addiu       $a0, $zero, 0x1
        ctx->r4 = ADD32(0, 0X1);
            goto L_0040928C;
    }
    // 0x0040923C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x00409240: lw          $v0, 0x670($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X670);
    // 0x00409244: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x00409248: beq         $s2, $zero, L_00409264
    if (ctx->r18 == 0) {
        // 0x0040924C: sw          $v0, 0x670($s3)
        MEM_W(0X670, ctx->r19) = ctx->r2;
            goto L_00409264;
    }
    // 0x0040924C: sw          $v0, 0x670($s3)
    MEM_W(0X670, ctx->r19) = ctx->r2;
    // 0x00409250: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00409254: beql        $s2, $v0, L_00409274
    if (ctx->r18 == ctx->r2) {
        // 0x00409258: addu        $a0, $s5, $zero
        ctx->r4 = ADD32(ctx->r21, 0);
            goto L_00409274;
    }
    goto skip_6;
    // 0x00409258: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    skip_6:
    // 0x0040925C: j           L_00409288
    // 0x00409260: nop

        goto L_00409288;
    // 0x00409260: nop

L_00409264:
    // 0x00409264: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    // 0x00409268: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    // 0x0040926C: j           L_0040927C
    // 0x00409270: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
        goto L_0040927C;
    // 0x00409270: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
L_00409274:
    // 0x00409274: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    // 0x00409278: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
L_0040927C:
    // 0x0040927C: jal         0x00243414
    // 0x00409280: nop

    func_00243414(rdram, ctx);
        goto after_1;
    // 0x00409280: nop

    after_1:
    // 0x00409284: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
L_00409288:
    // 0x00409288: lw          $v0, 0x65C($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X65C);
L_0040928C:
    // 0x0040928C: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x00409290: beq         $v0, $a2, L_004092A8
    if (ctx->r2 == ctx->r6) {
        // 0x00409294: sllv        $a1, $a0, $s1
        ctx->r5 = S32(ctx->r4 << (ctx->r17 & 31));
            goto L_004092A8;
    }
    // 0x00409294: sllv        $a1, $a0, $s1
    ctx->r5 = S32(ctx->r4 << (ctx->r17 & 31));
    // 0x00409298: lw          $v0, 0xC($s4)
    ctx->r2 = MEM_W(ctx->r20, 0XC);
    // 0x0040929C: nor         $v1, $zero, $a1
    ctx->r3 = ~(0 | ctx->r5);
    // 0x004092A0: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x004092A4: sw          $v0, 0xC($s4)
    MEM_W(0XC, ctx->r20) = ctx->r2;
L_004092A8:
    // 0x004092A8: lw          $v0, 0x664($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X664);
    // 0x004092AC: nor         $v1, $zero, $a1
    ctx->r3 = ~(0 | ctx->r5);
    // 0x004092B0: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x004092B4: bne         $v0, $zero, L_0040931C
    if (ctx->r2 != 0) {
        // 0x004092B8: sw          $v0, 0x664($s3)
        MEM_W(0X664, ctx->r19) = ctx->r2;
            goto L_0040931C;
    }
    // 0x004092B8: sw          $v0, 0x664($s3)
    MEM_W(0X664, ctx->r19) = ctx->r2;
    // 0x004092BC: lw          $v1, 0x65C($s3)
    ctx->r3 = MEM_W(ctx->r19, 0X65C);
    // 0x004092C0: beq         $v1, $a0, L_004092FC
    if (ctx->r3 == ctx->r4) {
        // 0x004092C4: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_004092FC;
    }
    // 0x004092C4: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x004092C8: beq         $v0, $zero, L_004092E0
    if (ctx->r2 == 0) {
        // 0x004092CC: nop
    
            goto L_004092E0;
    }
    // 0x004092CC: nop

    // 0x004092D0: beq         $v1, $zero, L_004092F0
    if (ctx->r3 == 0) {
        // 0x004092D4: addu        $a0, $s5, $zero
        ctx->r4 = ADD32(ctx->r21, 0);
            goto L_004092F0;
    }
    // 0x004092D4: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    // 0x004092D8: j           L_0040931C
    // 0x004092DC: nop

        goto L_0040931C;
    // 0x004092DC: nop

L_004092E0:
    // 0x004092E0: beq         $v1, $a2, L_0040930C
    if (ctx->r3 == ctx->r6) {
        // 0x004092E4: addu        $a0, $s5, $zero
        ctx->r4 = ADD32(ctx->r21, 0);
            goto L_0040930C;
    }
    // 0x004092E4: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    // 0x004092E8: j           L_0040931C
    // 0x004092EC: nop

        goto L_0040931C;
    // 0x004092EC: nop

L_004092F0:
    // 0x004092F0: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    // 0x004092F4: j           L_00409314
    // 0x004092F8: addiu       $a2, $zero, 0x9
    ctx->r6 = ADD32(0, 0X9);
        goto L_00409314;
    // 0x004092F8: addiu       $a2, $zero, 0x9
    ctx->r6 = ADD32(0, 0X9);
L_004092FC:
    // 0x004092FC: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    // 0x00409300: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    // 0x00409304: j           L_00409314
    // 0x00409308: addiu       $a2, $zero, 0x13
    ctx->r6 = ADD32(0, 0X13);
        goto L_00409314;
    // 0x00409308: addiu       $a2, $zero, 0x13
    ctx->r6 = ADD32(0, 0X13);
L_0040930C:
    // 0x0040930C: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    // 0x00409310: addiu       $a2, $zero, 0x1E
    ctx->r6 = ADD32(0, 0X1E);
L_00409314:
    // 0x00409314: jal         0x00243414
    // 0x00409318: nop

    func_00243414(rdram, ctx);
        goto after_2;
    // 0x00409318: nop

    after_2:
L_0040931C:
    // 0x0040931C: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x00409320: lw          $s5, 0x24($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X24);
    // 0x00409324: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x00409328: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x0040932C: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x00409330: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00409334: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00409338: jr          $ra
    // 0x0040933C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x0040933C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void entry_004091CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004091CC: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x004091D0: beq         $s1, $v0, L_0040931C
    if (ctx->r17 == ctx->r2) {
        // 0x004091D4: sll         $v0, $s1, 1
        ctx->r2 = S32(ctx->r17 << 1);
            goto L_0040931C;
    }
    // 0x004091D4: sll         $v0, $s1, 1
    ctx->r2 = S32(ctx->r17 << 1);
    // 0x004091D8: addu        $v0, $v0, $s1
    ctx->r2 = ADD32(ctx->r2, ctx->r17);
    // 0x004091DC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x004091E0: addu        $v0, $v0, $s1
    ctx->r2 = ADD32(ctx->r2, ctx->r17);
    // 0x004091E4: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x004091E8: addu        $s0, $s3, $v0
    ctx->r16 = ADD32(ctx->r19, ctx->r2);
    // 0x004091EC: lw          $v0, 0x4($t1)
    ctx->r2 = MEM_W(ctx->r9, 0X4);
    // 0x004091F0: lw          $v1, 0x18($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X18);
    // 0x004091F4: addu        $a3, $v0, $zero
    ctx->r7 = ADD32(ctx->r2, 0);
    // 0x004091F8: slt         $v0, $v1, $a3
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r7) ? 1 : 0;
    // 0x004091FC: bnel        $v0, $zero, L_00409204
    if (ctx->r2 != 0) {
        // 0x00409200: addu        $a3, $v1, $zero
        ctx->r7 = ADD32(ctx->r3, 0);
            goto L_00409204;
    }
    goto skip_0;
    // 0x00409200: addu        $a3, $v1, $zero
    ctx->r7 = ADD32(ctx->r3, 0);
    skip_0:
L_00409204:
    // 0x00409204: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    // 0x00409208: subu        $v0, $v1, $a3
    ctx->r2 = SUB32(ctx->r3, ctx->r7);
    // 0x0040920C: sw          $v0, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->r2;
    // 0x00409210: lw          $v0, 0x678($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X678);
    // 0x00409214: lui         $a1, 0x43
    ctx->r5 = S32(0X43 << 16);
    // 0x00409218: addiu       $a1, $a1, 0x1E54
    ctx->r5 = ADD32(ctx->r5, 0X1E54);
    // 0x0040921C: subu        $v0, $v0, $a3
    ctx->r2 = SUB32(ctx->r2, ctx->r7);
    // 0x00409220: jal         0x0040BDD0
    // 0x00409224: sw          $v0, 0x678($s3)
    MEM_W(0X678, ctx->r19) = ctx->r2;
    func_0040BDD0(rdram, ctx);
        goto after_0;
    // 0x00409224: sw          $v0, 0x678($s3)
    MEM_W(0X678, ctx->r19) = ctx->r2;
    after_0:
    // 0x00409228: lw          $v0, 0x18($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X18);
    // 0x0040922C: bgtz        $v0, L_0040931C
    if (SIGNED(ctx->r2) > 0) {
        // 0x00409230: nop
    
            goto L_0040931C;
    }
    // 0x00409230: nop

    // 0x00409234: lw          $v0, 0x65C($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X65C);
    // 0x00409238: bne         $v0, $zero, L_0040928C
    if (ctx->r2 != 0) {
        // 0x0040923C: addiu       $a0, $zero, 0x1
        ctx->r4 = ADD32(0, 0X1);
            goto L_0040928C;
    }
    // 0x0040923C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x00409240: lw          $v0, 0x670($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X670);
    // 0x00409244: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x00409248: beq         $s2, $zero, L_00409264
    if (ctx->r18 == 0) {
        // 0x0040924C: sw          $v0, 0x670($s3)
        MEM_W(0X670, ctx->r19) = ctx->r2;
            goto L_00409264;
    }
    // 0x0040924C: sw          $v0, 0x670($s3)
    MEM_W(0X670, ctx->r19) = ctx->r2;
    // 0x00409250: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00409254: beql        $s2, $v0, L_00409274
    if (ctx->r18 == ctx->r2) {
        // 0x00409258: addu        $a0, $s5, $zero
        ctx->r4 = ADD32(ctx->r21, 0);
            goto L_00409274;
    }
    goto skip_1;
    // 0x00409258: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    skip_1:
    // 0x0040925C: j           L_00409288
    // 0x00409260: nop

        goto L_00409288;
    // 0x00409260: nop

L_00409264:
    // 0x00409264: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    // 0x00409268: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    // 0x0040926C: j           L_0040927C
    // 0x00409270: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
        goto L_0040927C;
    // 0x00409270: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
L_00409274:
    // 0x00409274: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    // 0x00409278: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
L_0040927C:
    // 0x0040927C: jal         0x00243414
    // 0x00409280: nop

    func_00243414(rdram, ctx);
        goto after_1;
    // 0x00409280: nop

    after_1:
    // 0x00409284: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
L_00409288:
    // 0x00409288: lw          $v0, 0x65C($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X65C);
L_0040928C:
    // 0x0040928C: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x00409290: beq         $v0, $a2, L_004092A8
    if (ctx->r2 == ctx->r6) {
        // 0x00409294: sllv        $a1, $a0, $s1
        ctx->r5 = S32(ctx->r4 << (ctx->r17 & 31));
            goto L_004092A8;
    }
    // 0x00409294: sllv        $a1, $a0, $s1
    ctx->r5 = S32(ctx->r4 << (ctx->r17 & 31));
    // 0x00409298: lw          $v0, 0xC($s4)
    ctx->r2 = MEM_W(ctx->r20, 0XC);
    // 0x0040929C: nor         $v1, $zero, $a1
    ctx->r3 = ~(0 | ctx->r5);
    // 0x004092A0: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x004092A4: sw          $v0, 0xC($s4)
    MEM_W(0XC, ctx->r20) = ctx->r2;
L_004092A8:
    // 0x004092A8: lw          $v0, 0x664($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X664);
    // 0x004092AC: nor         $v1, $zero, $a1
    ctx->r3 = ~(0 | ctx->r5);
    // 0x004092B0: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x004092B4: bne         $v0, $zero, L_0040931C
    if (ctx->r2 != 0) {
        // 0x004092B8: sw          $v0, 0x664($s3)
        MEM_W(0X664, ctx->r19) = ctx->r2;
            goto L_0040931C;
    }
    // 0x004092B8: sw          $v0, 0x664($s3)
    MEM_W(0X664, ctx->r19) = ctx->r2;
    // 0x004092BC: lw          $v1, 0x65C($s3)
    ctx->r3 = MEM_W(ctx->r19, 0X65C);
    // 0x004092C0: beq         $v1, $a0, L_004092FC
    if (ctx->r3 == ctx->r4) {
        // 0x004092C4: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_004092FC;
    }
    // 0x004092C4: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x004092C8: beq         $v0, $zero, L_004092E0
    if (ctx->r2 == 0) {
        // 0x004092CC: nop
    
            goto L_004092E0;
    }
    // 0x004092CC: nop

    // 0x004092D0: beq         $v1, $zero, L_004092F0
    if (ctx->r3 == 0) {
        // 0x004092D4: addu        $a0, $s5, $zero
        ctx->r4 = ADD32(ctx->r21, 0);
            goto L_004092F0;
    }
    // 0x004092D4: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    // 0x004092D8: j           L_0040931C
    // 0x004092DC: nop

        goto L_0040931C;
    // 0x004092DC: nop

L_004092E0:
    // 0x004092E0: beq         $v1, $a2, L_0040930C
    if (ctx->r3 == ctx->r6) {
        // 0x004092E4: addu        $a0, $s5, $zero
        ctx->r4 = ADD32(ctx->r21, 0);
            goto L_0040930C;
    }
    // 0x004092E4: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    // 0x004092E8: j           L_0040931C
    // 0x004092EC: nop

        goto L_0040931C;
    // 0x004092EC: nop

L_004092F0:
    // 0x004092F0: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    // 0x004092F4: j           L_00409314
    // 0x004092F8: addiu       $a2, $zero, 0x9
    ctx->r6 = ADD32(0, 0X9);
        goto L_00409314;
    // 0x004092F8: addiu       $a2, $zero, 0x9
    ctx->r6 = ADD32(0, 0X9);
L_004092FC:
    // 0x004092FC: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    // 0x00409300: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    // 0x00409304: j           L_00409314
    // 0x00409308: addiu       $a2, $zero, 0x13
    ctx->r6 = ADD32(0, 0X13);
        goto L_00409314;
    // 0x00409308: addiu       $a2, $zero, 0x13
    ctx->r6 = ADD32(0, 0X13);
L_0040930C:
    // 0x0040930C: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    // 0x00409310: addiu       $a2, $zero, 0x1E
    ctx->r6 = ADD32(0, 0X1E);
L_00409314:
    // 0x00409314: jal         0x00243414
    // 0x00409318: nop

    func_00243414(rdram, ctx);
        goto after_2;
    // 0x00409318: nop

    after_2:
L_0040931C:
    // 0x0040931C: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x00409320: lw          $s5, 0x24($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X24);
    // 0x00409324: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x00409328: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x0040932C: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x00409330: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00409334: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00409338: jr          $ra
    // 0x0040933C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x0040933C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void entry_004091D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004091D0: beq         $s1, $v0, L_0040931C
    if (ctx->r17 == ctx->r2) {
        // 0x004091D4: sll         $v0, $s1, 1
        ctx->r2 = S32(ctx->r17 << 1);
            goto L_0040931C;
    }
    // 0x004091D4: sll         $v0, $s1, 1
    ctx->r2 = S32(ctx->r17 << 1);
    // 0x004091D8: addu        $v0, $v0, $s1
    ctx->r2 = ADD32(ctx->r2, ctx->r17);
    // 0x004091DC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x004091E0: addu        $v0, $v0, $s1
    ctx->r2 = ADD32(ctx->r2, ctx->r17);
    // 0x004091E4: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x004091E8: addu        $s0, $s3, $v0
    ctx->r16 = ADD32(ctx->r19, ctx->r2);
    // 0x004091EC: lw          $v0, 0x4($t1)
    ctx->r2 = MEM_W(ctx->r9, 0X4);
    // 0x004091F0: lw          $v1, 0x18($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X18);
    // 0x004091F4: addu        $a3, $v0, $zero
    ctx->r7 = ADD32(ctx->r2, 0);
    // 0x004091F8: slt         $v0, $v1, $a3
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r7) ? 1 : 0;
    // 0x004091FC: bnel        $v0, $zero, L_00409204
    if (ctx->r2 != 0) {
        // 0x00409200: addu        $a3, $v1, $zero
        ctx->r7 = ADD32(ctx->r3, 0);
            goto L_00409204;
    }
    goto skip_0;
    // 0x00409200: addu        $a3, $v1, $zero
    ctx->r7 = ADD32(ctx->r3, 0);
    skip_0:
L_00409204:
    // 0x00409204: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    // 0x00409208: subu        $v0, $v1, $a3
    ctx->r2 = SUB32(ctx->r3, ctx->r7);
    // 0x0040920C: sw          $v0, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->r2;
    // 0x00409210: lw          $v0, 0x678($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X678);
    // 0x00409214: lui         $a1, 0x43
    ctx->r5 = S32(0X43 << 16);
    // 0x00409218: addiu       $a1, $a1, 0x1E54
    ctx->r5 = ADD32(ctx->r5, 0X1E54);
    // 0x0040921C: subu        $v0, $v0, $a3
    ctx->r2 = SUB32(ctx->r2, ctx->r7);
    // 0x00409220: jal         0x0040BDD0
    // 0x00409224: sw          $v0, 0x678($s3)
    MEM_W(0X678, ctx->r19) = ctx->r2;
    func_0040BDD0(rdram, ctx);
        goto after_0;
    // 0x00409224: sw          $v0, 0x678($s3)
    MEM_W(0X678, ctx->r19) = ctx->r2;
    after_0:
    // 0x00409228: lw          $v0, 0x18($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X18);
    // 0x0040922C: bgtz        $v0, L_0040931C
    if (SIGNED(ctx->r2) > 0) {
        // 0x00409230: nop
    
            goto L_0040931C;
    }
    // 0x00409230: nop

    // 0x00409234: lw          $v0, 0x65C($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X65C);
    // 0x00409238: bne         $v0, $zero, L_0040928C
    if (ctx->r2 != 0) {
        // 0x0040923C: addiu       $a0, $zero, 0x1
        ctx->r4 = ADD32(0, 0X1);
            goto L_0040928C;
    }
    // 0x0040923C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x00409240: lw          $v0, 0x670($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X670);
    // 0x00409244: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x00409248: beq         $s2, $zero, L_00409264
    if (ctx->r18 == 0) {
        // 0x0040924C: sw          $v0, 0x670($s3)
        MEM_W(0X670, ctx->r19) = ctx->r2;
            goto L_00409264;
    }
    // 0x0040924C: sw          $v0, 0x670($s3)
    MEM_W(0X670, ctx->r19) = ctx->r2;
    // 0x00409250: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00409254: beql        $s2, $v0, L_00409274
    if (ctx->r18 == ctx->r2) {
        // 0x00409258: addu        $a0, $s5, $zero
        ctx->r4 = ADD32(ctx->r21, 0);
            goto L_00409274;
    }
    goto skip_1;
    // 0x00409258: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    skip_1:
    // 0x0040925C: j           L_00409288
    // 0x00409260: nop

        goto L_00409288;
    // 0x00409260: nop

L_00409264:
    // 0x00409264: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    // 0x00409268: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    // 0x0040926C: j           L_0040927C
    // 0x00409270: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
        goto L_0040927C;
    // 0x00409270: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
L_00409274:
    // 0x00409274: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    // 0x00409278: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
L_0040927C:
    // 0x0040927C: jal         0x00243414
    // 0x00409280: nop

    func_00243414(rdram, ctx);
        goto after_1;
    // 0x00409280: nop

    after_1:
    // 0x00409284: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
L_00409288:
    // 0x00409288: lw          $v0, 0x65C($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X65C);
L_0040928C:
    // 0x0040928C: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x00409290: beq         $v0, $a2, L_004092A8
    if (ctx->r2 == ctx->r6) {
        // 0x00409294: sllv        $a1, $a0, $s1
        ctx->r5 = S32(ctx->r4 << (ctx->r17 & 31));
            goto L_004092A8;
    }
    // 0x00409294: sllv        $a1, $a0, $s1
    ctx->r5 = S32(ctx->r4 << (ctx->r17 & 31));
    // 0x00409298: lw          $v0, 0xC($s4)
    ctx->r2 = MEM_W(ctx->r20, 0XC);
    // 0x0040929C: nor         $v1, $zero, $a1
    ctx->r3 = ~(0 | ctx->r5);
    // 0x004092A0: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x004092A4: sw          $v0, 0xC($s4)
    MEM_W(0XC, ctx->r20) = ctx->r2;
L_004092A8:
    // 0x004092A8: lw          $v0, 0x664($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X664);
    // 0x004092AC: nor         $v1, $zero, $a1
    ctx->r3 = ~(0 | ctx->r5);
    // 0x004092B0: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x004092B4: bne         $v0, $zero, L_0040931C
    if (ctx->r2 != 0) {
        // 0x004092B8: sw          $v0, 0x664($s3)
        MEM_W(0X664, ctx->r19) = ctx->r2;
            goto L_0040931C;
    }
    // 0x004092B8: sw          $v0, 0x664($s3)
    MEM_W(0X664, ctx->r19) = ctx->r2;
    // 0x004092BC: lw          $v1, 0x65C($s3)
    ctx->r3 = MEM_W(ctx->r19, 0X65C);
    // 0x004092C0: beq         $v1, $a0, L_004092FC
    if (ctx->r3 == ctx->r4) {
        // 0x004092C4: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_004092FC;
    }
    // 0x004092C4: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x004092C8: beq         $v0, $zero, L_004092E0
    if (ctx->r2 == 0) {
        // 0x004092CC: nop
    
            goto L_004092E0;
    }
    // 0x004092CC: nop

    // 0x004092D0: beq         $v1, $zero, L_004092F0
    if (ctx->r3 == 0) {
        // 0x004092D4: addu        $a0, $s5, $zero
        ctx->r4 = ADD32(ctx->r21, 0);
            goto L_004092F0;
    }
    // 0x004092D4: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    // 0x004092D8: j           L_0040931C
    // 0x004092DC: nop

        goto L_0040931C;
    // 0x004092DC: nop

L_004092E0:
    // 0x004092E0: beq         $v1, $a2, L_0040930C
    if (ctx->r3 == ctx->r6) {
        // 0x004092E4: addu        $a0, $s5, $zero
        ctx->r4 = ADD32(ctx->r21, 0);
            goto L_0040930C;
    }
    // 0x004092E4: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    // 0x004092E8: j           L_0040931C
    // 0x004092EC: nop

        goto L_0040931C;
    // 0x004092EC: nop

L_004092F0:
    // 0x004092F0: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    // 0x004092F4: j           L_00409314
    // 0x004092F8: addiu       $a2, $zero, 0x9
    ctx->r6 = ADD32(0, 0X9);
        goto L_00409314;
    // 0x004092F8: addiu       $a2, $zero, 0x9
    ctx->r6 = ADD32(0, 0X9);
L_004092FC:
    // 0x004092FC: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    // 0x00409300: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    // 0x00409304: j           L_00409314
    // 0x00409308: addiu       $a2, $zero, 0x13
    ctx->r6 = ADD32(0, 0X13);
        goto L_00409314;
    // 0x00409308: addiu       $a2, $zero, 0x13
    ctx->r6 = ADD32(0, 0X13);
L_0040930C:
    // 0x0040930C: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    // 0x00409310: addiu       $a2, $zero, 0x1E
    ctx->r6 = ADD32(0, 0X1E);
L_00409314:
    // 0x00409314: jal         0x00243414
    // 0x00409318: nop

    func_00243414(rdram, ctx);
        goto after_2;
    // 0x00409318: nop

    after_2:
L_0040931C:
    // 0x0040931C: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x00409320: lw          $s5, 0x24($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X24);
    // 0x00409324: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x00409328: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x0040932C: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x00409330: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00409334: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00409338: jr          $ra
    // 0x0040933C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x0040933C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void entry_0040927C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0040927C: jal         0x00243414
    // 0x00409280: nop

    func_00243414(rdram, ctx);
        goto after_0;
    // 0x00409280: nop

    after_0:
    // 0x00409284: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x00409288: lw          $v0, 0x65C($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X65C);
    // 0x0040928C: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x00409290: beq         $v0, $a2, L_004092A8
    if (ctx->r2 == ctx->r6) {
        // 0x00409294: sllv        $a1, $a0, $s1
        ctx->r5 = S32(ctx->r4 << (ctx->r17 & 31));
            goto L_004092A8;
    }
    // 0x00409294: sllv        $a1, $a0, $s1
    ctx->r5 = S32(ctx->r4 << (ctx->r17 & 31));
    // 0x00409298: lw          $v0, 0xC($s4)
    ctx->r2 = MEM_W(ctx->r20, 0XC);
    // 0x0040929C: nor         $v1, $zero, $a1
    ctx->r3 = ~(0 | ctx->r5);
    // 0x004092A0: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x004092A4: sw          $v0, 0xC($s4)
    MEM_W(0XC, ctx->r20) = ctx->r2;
L_004092A8:
    // 0x004092A8: lw          $v0, 0x664($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X664);
    // 0x004092AC: nor         $v1, $zero, $a1
    ctx->r3 = ~(0 | ctx->r5);
    // 0x004092B0: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x004092B4: bne         $v0, $zero, L_0040931C
    if (ctx->r2 != 0) {
        // 0x004092B8: sw          $v0, 0x664($s3)
        MEM_W(0X664, ctx->r19) = ctx->r2;
            goto L_0040931C;
    }
    // 0x004092B8: sw          $v0, 0x664($s3)
    MEM_W(0X664, ctx->r19) = ctx->r2;
    // 0x004092BC: lw          $v1, 0x65C($s3)
    ctx->r3 = MEM_W(ctx->r19, 0X65C);
    // 0x004092C0: beq         $v1, $a0, L_004092FC
    if (ctx->r3 == ctx->r4) {
        // 0x004092C4: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_004092FC;
    }
    // 0x004092C4: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x004092C8: beq         $v0, $zero, L_004092E0
    if (ctx->r2 == 0) {
        // 0x004092CC: nop
    
            goto L_004092E0;
    }
    // 0x004092CC: nop

    // 0x004092D0: beq         $v1, $zero, L_004092F0
    if (ctx->r3 == 0) {
        // 0x004092D4: addu        $a0, $s5, $zero
        ctx->r4 = ADD32(ctx->r21, 0);
            goto L_004092F0;
    }
    // 0x004092D4: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    // 0x004092D8: j           L_0040931C
    // 0x004092DC: nop

        goto L_0040931C;
    // 0x004092DC: nop

L_004092E0:
    // 0x004092E0: beq         $v1, $a2, L_0040930C
    if (ctx->r3 == ctx->r6) {
        // 0x004092E4: addu        $a0, $s5, $zero
        ctx->r4 = ADD32(ctx->r21, 0);
            goto L_0040930C;
    }
    // 0x004092E4: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    // 0x004092E8: j           L_0040931C
    // 0x004092EC: nop

        goto L_0040931C;
    // 0x004092EC: nop

L_004092F0:
    // 0x004092F0: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    // 0x004092F4: j           L_00409314
    // 0x004092F8: addiu       $a2, $zero, 0x9
    ctx->r6 = ADD32(0, 0X9);
        goto L_00409314;
    // 0x004092F8: addiu       $a2, $zero, 0x9
    ctx->r6 = ADD32(0, 0X9);
L_004092FC:
    // 0x004092FC: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    // 0x00409300: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    // 0x00409304: j           L_00409314
    // 0x00409308: addiu       $a2, $zero, 0x13
    ctx->r6 = ADD32(0, 0X13);
        goto L_00409314;
    // 0x00409308: addiu       $a2, $zero, 0x13
    ctx->r6 = ADD32(0, 0X13);
L_0040930C:
    // 0x0040930C: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    // 0x00409310: addiu       $a2, $zero, 0x1E
    ctx->r6 = ADD32(0, 0X1E);
L_00409314:
    // 0x00409314: jal         0x00243414
    // 0x00409318: nop

    func_00243414(rdram, ctx);
        goto after_1;
    // 0x00409318: nop

    after_1:
L_0040931C:
    // 0x0040931C: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x00409320: lw          $s5, 0x24($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X24);
    // 0x00409324: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x00409328: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x0040932C: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x00409330: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00409334: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00409338: jr          $ra
    // 0x0040933C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x0040933C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void entry_00409288(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00409288: lw          $v0, 0x65C($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X65C);
    // 0x0040928C: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x00409290: beq         $v0, $a2, L_004092A8
    if (ctx->r2 == ctx->r6) {
        // 0x00409294: sllv        $a1, $a0, $s1
        ctx->r5 = S32(ctx->r4 << (ctx->r17 & 31));
            goto L_004092A8;
    }
    // 0x00409294: sllv        $a1, $a0, $s1
    ctx->r5 = S32(ctx->r4 << (ctx->r17 & 31));
    // 0x00409298: lw          $v0, 0xC($s4)
    ctx->r2 = MEM_W(ctx->r20, 0XC);
    // 0x0040929C: nor         $v1, $zero, $a1
    ctx->r3 = ~(0 | ctx->r5);
    // 0x004092A0: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x004092A4: sw          $v0, 0xC($s4)
    MEM_W(0XC, ctx->r20) = ctx->r2;
L_004092A8:
    // 0x004092A8: lw          $v0, 0x664($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X664);
    // 0x004092AC: nor         $v1, $zero, $a1
    ctx->r3 = ~(0 | ctx->r5);
    // 0x004092B0: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x004092B4: bne         $v0, $zero, L_0040931C
    if (ctx->r2 != 0) {
        // 0x004092B8: sw          $v0, 0x664($s3)
        MEM_W(0X664, ctx->r19) = ctx->r2;
            goto L_0040931C;
    }
    // 0x004092B8: sw          $v0, 0x664($s3)
    MEM_W(0X664, ctx->r19) = ctx->r2;
    // 0x004092BC: lw          $v1, 0x65C($s3)
    ctx->r3 = MEM_W(ctx->r19, 0X65C);
    // 0x004092C0: beq         $v1, $a0, L_004092FC
    if (ctx->r3 == ctx->r4) {
        // 0x004092C4: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_004092FC;
    }
    // 0x004092C4: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x004092C8: beq         $v0, $zero, L_004092E0
    if (ctx->r2 == 0) {
        // 0x004092CC: nop
    
            goto L_004092E0;
    }
    // 0x004092CC: nop

    // 0x004092D0: beq         $v1, $zero, L_004092F0
    if (ctx->r3 == 0) {
        // 0x004092D4: addu        $a0, $s5, $zero
        ctx->r4 = ADD32(ctx->r21, 0);
            goto L_004092F0;
    }
    // 0x004092D4: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    // 0x004092D8: j           L_0040931C
    // 0x004092DC: nop

        goto L_0040931C;
    // 0x004092DC: nop

L_004092E0:
    // 0x004092E0: beq         $v1, $a2, L_0040930C
    if (ctx->r3 == ctx->r6) {
        // 0x004092E4: addu        $a0, $s5, $zero
        ctx->r4 = ADD32(ctx->r21, 0);
            goto L_0040930C;
    }
    // 0x004092E4: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    // 0x004092E8: j           L_0040931C
    // 0x004092EC: nop

        goto L_0040931C;
    // 0x004092EC: nop

L_004092F0:
    // 0x004092F0: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    // 0x004092F4: j           L_00409314
    // 0x004092F8: addiu       $a2, $zero, 0x9
    ctx->r6 = ADD32(0, 0X9);
        goto L_00409314;
    // 0x004092F8: addiu       $a2, $zero, 0x9
    ctx->r6 = ADD32(0, 0X9);
L_004092FC:
    // 0x004092FC: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    // 0x00409300: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    // 0x00409304: j           L_00409314
    // 0x00409308: addiu       $a2, $zero, 0x13
    ctx->r6 = ADD32(0, 0X13);
        goto L_00409314;
    // 0x00409308: addiu       $a2, $zero, 0x13
    ctx->r6 = ADD32(0, 0X13);
L_0040930C:
    // 0x0040930C: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    // 0x00409310: addiu       $a2, $zero, 0x1E
    ctx->r6 = ADD32(0, 0X1E);
L_00409314:
    // 0x00409314: jal         0x00243414
    // 0x00409318: nop

    func_00243414(rdram, ctx);
        goto after_0;
    // 0x00409318: nop

    after_0:
L_0040931C:
    // 0x0040931C: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x00409320: lw          $s5, 0x24($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X24);
    // 0x00409324: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x00409328: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x0040932C: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x00409330: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00409334: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00409338: jr          $ra
    // 0x0040933C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x0040933C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void entry_00409314(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00409314: jal         0x00243414
    // 0x00409318: nop

    func_00243414(rdram, ctx);
        goto after_0;
    // 0x00409318: nop

    after_0:
    // 0x0040931C: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x00409320: lw          $s5, 0x24($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X24);
    // 0x00409324: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x00409328: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x0040932C: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x00409330: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00409334: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00409338: jr          $ra
    // 0x0040933C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x0040933C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void entry_0040931C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0040931C: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x00409320: lw          $s5, 0x24($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X24);
    // 0x00409324: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x00409328: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x0040932C: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x00409330: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00409334: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00409338: jr          $ra
    // 0x0040933C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x0040933C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void entry_004098D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004098D0: jal         0x00284188
    // 0x004098D4: nop

    func_00284188(rdram, ctx);
        goto after_0;
    // 0x004098D4: nop

    after_0:
    // 0x004098D8: bne         $v0, $zero, L_00409A30
    if (ctx->r2 != 0) {
        // 0x004098DC: nop
    
            goto L_00409A30;
    }
    // 0x004098DC: nop

    // 0x004098E0: beq         $s3, $zero, L_00409A14
    if (ctx->r19 == 0) {
        // 0x004098E4: nop
    
            goto L_00409A14;
    }
    // 0x004098E4: nop

    // 0x004098E8: lui         $a0, 0x43
    ctx->r4 = S32(0X43 << 16);
    // 0x004098EC: addiu       $a0, $a0, 0x1D94
    ctx->r4 = ADD32(ctx->r4, 0X1D94);
    // 0x004098F0: jal         0x0026D518
    // 0x004098F4: sw          $zero, 0x680($s2)
    MEM_W(0X680, ctx->r18) = 0;
    func_0026D518(rdram, ctx);
        goto after_1;
    // 0x004098F4: sw          $zero, 0x680($s2)
    MEM_W(0X680, ctx->r18) = 0;
    after_1:
    // 0x004098F8: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x004098FC: lwc1        $f12, 0x1F8($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X1F8);
    // 0x00409900: cvt.s.w     $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    ctx->f12.fl = CVT_S_W(ctx->f12.u32l);
    // 0x00409904: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x00409908: lwc1        $f14, 0x1FC($at)
    ctx->f14.u32l = MEM_W(ctx->r1, 0X1FC);
    // 0x0040990C: cvt.s.w     $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    ctx->f14.fl = CVT_S_W(ctx->f14.u32l);
    // 0x00409910: sll         $s0, $v0, 16
    ctx->r16 = S32(ctx->r2 << 16);
    // 0x00409914: jal         0x002119FC
    // 0x00409918: sra         $s0, $s0, 16
    ctx->r16 = S32(SIGNED(ctx->r16) >> 16);
    func_002119FC(rdram, ctx);
        goto after_2;
    // 0x00409918: sra         $s0, $s0, 16
    ctx->r16 = S32(SIGNED(ctx->r16) >> 16);
    after_2:
    // 0x0040991C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00409920: lwc1        $f12, 0x5EC($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X5EC);
    // 0x00409924: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00409928: lwc1        $f14, 0x5F0($at)
    ctx->f14.u32l = MEM_W(ctx->r1, 0X5F0);
    // 0x0040992C: jal         0x002119FC
    // 0x00409930: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    func_002119FC(rdram, ctx);
        goto after_3;
    // 0x00409930: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    after_3:
    // 0x00409934: mov.s       $f21, $f0
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 0);
    ctx->f21.fl = ctx->f0.fl;
    // 0x00409938: jal         0x002982F0
    // 0x0040993C: mov.s       $f12, $f21
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 21);
    ctx->f12.fl = ctx->f21.fl;
    func_002982F0(rdram, ctx);
        goto after_4;
    // 0x0040993C: mov.s       $f12, $f21
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 21);
    ctx->f12.fl = ctx->f21.fl;
    after_4:
    // 0x00409940: mul.s       $f0, $f20, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f20.fl, ctx->f0.fl);
    // 0x00409944: mov.s       $f12, $f21
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 21);
    ctx->f12.fl = ctx->f21.fl;
    // 0x00409948: jal         0x002974C0
    // 0x0040994C: swc1        $f0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f0.u32l;
    func_002974C0(rdram, ctx);
        goto after_5;
    // 0x0040994C: swc1        $f0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f0.u32l;
    after_5:
    // 0x00409950: mul.s       $f20, $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = MUL_S(ctx->f20.fl, ctx->f0.fl);
    // 0x00409954: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x00409958: addiu       $a0, $a0, 0x7078
    ctx->r4 = ADD32(ctx->r4, 0X7078);
    // 0x0040995C: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x00409960: swc1        $f20, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f20.u32l;
    // 0x00409964: lw          $t0, 0x30($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X30);
    // 0x00409968: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x0040996C: lw          $t2, 0x38($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X38);
    // 0x00409970: sw          $t0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r8;
    // 0x00409974: sw          $t1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r9;
    // 0x00409978: sw          $t2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r10;
    // 0x0040997C: jal         0x00220A1C
    // 0x00409980: addiu       $a1, $sp, 0x48
    ctx->r5 = ADD32(ctx->r29, 0X48);
    func_00220A1C(rdram, ctx);
        goto after_6;
    // 0x00409980: addiu       $a1, $sp, 0x48
    ctx->r5 = ADD32(ctx->r29, 0X48);
    after_6:
    // 0x00409984: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x00409988: addiu       $a0, $a0, 0x7590
    ctx->r4 = ADD32(ctx->r4, 0X7590);
    // 0x0040998C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x00409990: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00409994: lwc1        $f0, 0x5F4($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X5F4);
    // 0x00409998: addiu       $v1, $sp, 0x58
    ctx->r3 = ADD32(ctx->r29, 0X58);
    // 0x0040999C: sw          $zero, 0x58($sp)
    MEM_W(0X58, ctx->r29) = 0;
    // 0x004099A0: swc1        $f0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->f0.u32l;
    // 0x004099A4: mtc1        $s4, $f0
    ctx->f0.u32l = ctx->r20;
    // 0x004099A8: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x004099AC: sw          $zero, 0x60($sp)
    MEM_W(0X60, ctx->r29) = 0;
    // 0x004099B0: lw          $t0, 0x48($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X48);
    // 0x004099B4: lw          $t1, 0x4C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X4C);
    // 0x004099B8: lw          $t2, 0x50($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X50);
    // 0x004099BC: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x004099C0: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    // 0x004099C4: sw          $t2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r10;
    // 0x004099C8: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x004099CC: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x004099D0: lw          $t0, 0x5C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X5C);
    // 0x004099D4: lw          $t1, 0x60($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X60);
    // 0x004099D8: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x004099DC: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x004099E0: lw          $a3, 0x58($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X58);
    // 0x004099E4: jal         0x00227240
    // 0x004099E8: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    func_00227240(rdram, ctx);
        goto after_7;
    // 0x004099E8: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    after_7:
    // 0x004099EC: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x004099F0: beq         $a0, $zero, L_00409A14
    if (ctx->r4 == 0) {
        // 0x004099F4: nop
    
            goto L_00409A14;
    }
    // 0x004099F4: nop

    // 0x004099F8: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x004099FC: lw          $v0, 0x50($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X50);
    // 0x00409A00: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x00409A04: lw          $a2, 0x48($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X48);
    // 0x00409A08: lw          $a3, 0x4C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X4C);
    // 0x00409A0C: jal         0x00246690
    // 0x00409A10: addiu       $a1, $zero, 0x11D
    ctx->r5 = ADD32(0, 0X11D);
    func_00246690(rdram, ctx);
        goto after_8;
    // 0x00409A10: addiu       $a1, $zero, 0x11D
    ctx->r5 = ADD32(0, 0X11D);
    after_8:
L_00409A14:
    // 0x00409A14: beq         $s5, $zero, L_00409A30
    if (ctx->r21 == 0) {
        // 0x00409A18: nop
    
            goto L_00409A30;
    }
    // 0x00409A18: nop

    // 0x00409A1C: beq         $s7, $zero, L_00409A30
    if (ctx->r23 == 0) {
        // 0x00409A20: addu        $a0, $s6, $zero
        ctx->r4 = ADD32(ctx->r22, 0);
            goto L_00409A30;
    }
    // 0x00409A20: addu        $a0, $s6, $zero
    ctx->r4 = ADD32(ctx->r22, 0);
    // 0x00409A24: sw          $zero, 0x684($s2)
    MEM_W(0X684, ctx->r18) = 0;
    // 0x00409A28: jal         0x00409500
    // 0x00409A2C: addu        $a1, $s5, $zero
    ctx->r5 = ADD32(ctx->r21, 0);
    func_00409500(rdram, ctx);
        goto after_9;
    // 0x00409A2C: addu        $a1, $s5, $zero
    ctx->r5 = ADD32(ctx->r21, 0);
    after_9:
L_00409A30:
    // 0x00409A30: lw          $ra, 0x88($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X88);
    // 0x00409A34: lw          $s7, 0x84($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X84);
    // 0x00409A38: lw          $s6, 0x80($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X80);
    // 0x00409A3C: lw          $s5, 0x7C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X7C);
    // 0x00409A40: lw          $s4, 0x78($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X78);
    // 0x00409A44: lw          $s3, 0x74($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X74);
    // 0x00409A48: lw          $s2, 0x70($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X70);
    // 0x00409A4C: lw          $s1, 0x6C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X6C);
    // 0x00409A50: lw          $s0, 0x68($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X68);
    // 0x00409A54: ldc1        $f21, 0x98($sp)
    CHECK_FR(ctx, 21);
    ctx->f21.u64 = LD(ctx->r29, 0X98);
    // 0x00409A58: ldc1        $f20, 0x90($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X90);
    // 0x00409A5C: jr          $ra
    // 0x00409A60: addiu       $sp, $sp, 0xA0
    ctx->r29 = ADD32(ctx->r29, 0XA0);
    return;
    // 0x00409A60: addiu       $sp, $sp, 0xA0
    ctx->r29 = ADD32(ctx->r29, 0XA0);
;}
RECOMP_FUNC void entry_00409C24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_00409B84:
    // 0x00409C24: jal         0x002119FC
    // 0x00409C28: mov.s       $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    ctx->f22.fl = ctx->f0.fl;
    func_002119FC(rdram, ctx);
        goto after_0;
    // 0x00409C28: mov.s       $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    ctx->f22.fl = ctx->f0.fl;
    after_0:
    // 0x00409C2C: mov.s       $f21, $f0
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 0);
    ctx->f21.fl = ctx->f0.fl;
    // 0x00409C30: jal         0x002982F0
    // 0x00409C34: mov.s       $f12, $f21
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 21);
    ctx->f12.fl = ctx->f21.fl;
    func_002982F0(rdram, ctx);
        goto after_1;
    // 0x00409C34: mov.s       $f12, $f21
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 21);
    ctx->f12.fl = ctx->f21.fl;
    after_1:
    // 0x00409C38: mul.s       $f20, $f22, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = MUL_S(ctx->f22.fl, ctx->f0.fl);
    // 0x00409C3C: jal         0x002974C0
    // 0x00409C40: mov.s       $f12, $f21
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 21);
    ctx->f12.fl = ctx->f21.fl;
    func_002974C0(rdram, ctx);
        goto after_2;
    // 0x00409C40: mov.s       $f12, $f21
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 21);
    ctx->f12.fl = ctx->f21.fl;
    after_2:
    // 0x00409C44: mul.s       $f0, $f22, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f22.fl, ctx->f0.fl);
    // 0x00409C48: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    // 0x00409C4C: add.s       $f24, $f24, $f20
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f24.fl = ctx->f24.fl + ctx->f20.fl;
    // 0x00409C50: addu        $s0, $s2, $zero
    ctx->r16 = ADD32(ctx->r18, 0);
    // 0x00409C54: addu        $s1, $s5, $zero
    ctx->r17 = ADD32(ctx->r21, 0);
    // 0x00409C58: add.s       $f23, $f23, $f0
    CHECK_FR(ctx, 23);
    CHECK_FR(ctx, 23);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f23.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f23.fl = ctx->f23.fl + ctx->f0.fl;
    // 0x00409C5C: swc1        $f26, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f26.u32l;
    // 0x00409C60: swc1        $f24, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f24.u32l;
    // 0x00409C64: swc1        $f23, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x00409C68: addiu       $a0, $sp, 0x38
    ctx->r4 = ADD32(ctx->r29, 0X38);
L_00409C6C:
    // 0x00409C6C: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    // 0x00409C70: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    // 0x00409C74: lw          $t0, 0x18($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X18);
    // 0x00409C78: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x00409C7C: lw          $t2, 0x20($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X20);
    // 0x00409C80: sw          $t0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r8;
    // 0x00409C84: sw          $t1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r9;
    // 0x00409C88: sw          $t2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r10;
    // 0x00409C8C: jal         0x0020EF2C
    // 0x00409C90: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
    func_0020EF2C(rdram, ctx);
        goto after_3;
    // 0x00409C90: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
    after_3:
    // 0x00409C94: lwc1        $f0, 0x38($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X38);
    // 0x00409C98: mul.s       $f0, $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x00409C9C: lwc1        $f1, 0x3C($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X3C);
    // 0x00409CA0: mul.s       $f1, $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f1.fl);
    // 0x00409CA4: lwc1        $f12, 0x40($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X40);
    // 0x00409CA8: mul.s       $f12, $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x00409CAC: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x00409CB0: jal         0x00298470
    // 0x00409CB4: add.s       $f12, $f0, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = ctx->f0.fl + ctx->f12.fl;
    func_00298470(rdram, ctx);
        goto after_4;
    // 0x00409CB4: add.s       $f12, $f0, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = ctx->f0.fl + ctx->f12.fl;
    after_4:
    // 0x00409CB8: c.lt.s      $f0, $f25
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 25);
    c1cs = ctx->f0.fl < ctx->f25.fl;
    // 0x00409CBC: nop

    // 0x00409CC0: bc1tl       L_00409CC8
    if (c1cs) {
        // 0x00409CC4: addiu       $s2, $zero, 0x1
        ctx->r18 = ADD32(0, 0X1);
            goto L_00409CC8;
    }
    goto skip_0;
    // 0x00409CC4: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
    skip_0:
L_00409CC8:
    // 0x00409CC8: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x00409CCC: slti        $v0, $s0, 0x4
    ctx->r2 = SIGNED(ctx->r16) < 0X4 ? 1 : 0;
    // 0x00409CD0: beq         $v0, $zero, L_00409CE0
    if (ctx->r2 == 0) {
        // 0x00409CD4: addiu       $s1, $s1, 0x14
        ctx->r17 = ADD32(ctx->r17, 0X14);
            goto L_00409CE0;
    }
    // 0x00409CD4: addiu       $s1, $s1, 0x14
    ctx->r17 = ADD32(ctx->r17, 0X14);
    // 0x00409CD8: beq         $s2, $zero, L_00409C6C
    if (ctx->r18 == 0) {
        // 0x00409CDC: addiu       $a0, $sp, 0x38
        ctx->r4 = ADD32(ctx->r29, 0X38);
            goto L_00409C6C;
    }
    // 0x00409CDC: addiu       $a0, $sp, 0x38
    ctx->r4 = ADD32(ctx->r29, 0X38);
L_00409CE0:
    // 0x00409CE0: bne         $s2, $zero, L_00409B84
    if (ctx->r18 != 0) {
        // 0x00409CE4: nop
    
            goto L_00409B84;
    }
    // 0x00409CE4: nop

    // 0x00409CE8: lw          $a0, 0xB0($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XB0);
    // 0x00409CEC: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x00409CF0: lw          $v0, 0x20($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X20);
    // 0x00409CF4: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x00409CF8: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x00409CFC: lw          $a3, 0x1C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X1C);
    // 0x00409D00: jal         0x00246690
    // 0x00409D04: addiu       $a1, $zero, 0x112
    ctx->r5 = ADD32(0, 0X112);
    func_00246690(rdram, ctx);
        goto after_5;
    // 0x00409D04: addiu       $a1, $zero, 0x112
    ctx->r5 = ADD32(0, 0X112);
    after_5:
    // 0x00409D08: lw          $ra, 0xD4($sp)
    ctx->r31 = MEM_W(ctx->r29, 0XD4);
    // 0x00409D0C: lw          $s6, 0xD0($sp)
    ctx->r22 = MEM_W(ctx->r29, 0XD0);
    // 0x00409D10: lw          $s5, 0xCC($sp)
    ctx->r21 = MEM_W(ctx->r29, 0XCC);
    // 0x00409D14: lw          $s4, 0xC8($sp)
    ctx->r20 = MEM_W(ctx->r29, 0XC8);
    // 0x00409D18: lw          $s3, 0xC4($sp)
    ctx->r19 = MEM_W(ctx->r29, 0XC4);
    // 0x00409D1C: lw          $s2, 0xC0($sp)
    ctx->r18 = MEM_W(ctx->r29, 0XC0);
    // 0x00409D20: lw          $s1, 0xBC($sp)
    ctx->r17 = MEM_W(ctx->r29, 0XBC);
    // 0x00409D24: lw          $s0, 0xB8($sp)
    ctx->r16 = MEM_W(ctx->r29, 0XB8);
    // 0x00409D28: ldc1        $f26, 0x108($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X108);
    // 0x00409D2C: ldc1        $f25, 0x100($sp)
    CHECK_FR(ctx, 25);
    ctx->f25.u64 = LD(ctx->r29, 0X100);
    // 0x00409D30: ldc1        $f24, 0xF8($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0XF8);
    // 0x00409D34: ldc1        $f23, 0xF0($sp)
    CHECK_FR(ctx, 23);
    ctx->f23.u64 = LD(ctx->r29, 0XF0);
    // 0x00409D38: ldc1        $f22, 0xE8($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0XE8);
    // 0x00409D3C: ldc1        $f21, 0xE0($sp)
    CHECK_FR(ctx, 21);
    ctx->f21.u64 = LD(ctx->r29, 0XE0);
    // 0x00409D40: ldc1        $f20, 0xD8($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0XD8);
    // 0x00409D44: jr          $ra
    // 0x00409D48: addiu       $sp, $sp, 0x110
    ctx->r29 = ADD32(ctx->r29, 0X110);
    return;
    // 0x00409D48: addiu       $sp, $sp, 0x110
    ctx->r29 = ADD32(ctx->r29, 0X110);
;}
RECOMP_FUNC void entry_00409C30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_00409B84:
    // 0x00409C30: jal         0x002982F0
    // 0x00409C34: mov.s       $f12, $f21
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 21);
    ctx->f12.fl = ctx->f21.fl;
    func_002982F0(rdram, ctx);
        goto after_0;
    // 0x00409C34: mov.s       $f12, $f21
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 21);
    ctx->f12.fl = ctx->f21.fl;
    after_0:
    // 0x00409C38: mul.s       $f20, $f22, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = MUL_S(ctx->f22.fl, ctx->f0.fl);
    // 0x00409C3C: jal         0x002974C0
    // 0x00409C40: mov.s       $f12, $f21
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 21);
    ctx->f12.fl = ctx->f21.fl;
    func_002974C0(rdram, ctx);
        goto after_1;
    // 0x00409C40: mov.s       $f12, $f21
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 21);
    ctx->f12.fl = ctx->f21.fl;
    after_1:
    // 0x00409C44: mul.s       $f0, $f22, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f22.fl, ctx->f0.fl);
    // 0x00409C48: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    // 0x00409C4C: add.s       $f24, $f24, $f20
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f24.fl = ctx->f24.fl + ctx->f20.fl;
    // 0x00409C50: addu        $s0, $s2, $zero
    ctx->r16 = ADD32(ctx->r18, 0);
    // 0x00409C54: addu        $s1, $s5, $zero
    ctx->r17 = ADD32(ctx->r21, 0);
    // 0x00409C58: add.s       $f23, $f23, $f0
    CHECK_FR(ctx, 23);
    CHECK_FR(ctx, 23);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f23.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f23.fl = ctx->f23.fl + ctx->f0.fl;
    // 0x00409C5C: swc1        $f26, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f26.u32l;
    // 0x00409C60: swc1        $f24, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f24.u32l;
    // 0x00409C64: swc1        $f23, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x00409C68: addiu       $a0, $sp, 0x38
    ctx->r4 = ADD32(ctx->r29, 0X38);
L_00409C6C:
    // 0x00409C6C: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    // 0x00409C70: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    // 0x00409C74: lw          $t0, 0x18($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X18);
    // 0x00409C78: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x00409C7C: lw          $t2, 0x20($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X20);
    // 0x00409C80: sw          $t0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r8;
    // 0x00409C84: sw          $t1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r9;
    // 0x00409C88: sw          $t2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r10;
    // 0x00409C8C: jal         0x0020EF2C
    // 0x00409C90: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
    func_0020EF2C(rdram, ctx);
        goto after_2;
    // 0x00409C90: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
    after_2:
    // 0x00409C94: lwc1        $f0, 0x38($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X38);
    // 0x00409C98: mul.s       $f0, $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x00409C9C: lwc1        $f1, 0x3C($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X3C);
    // 0x00409CA0: mul.s       $f1, $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f1.fl);
    // 0x00409CA4: lwc1        $f12, 0x40($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X40);
    // 0x00409CA8: mul.s       $f12, $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x00409CAC: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x00409CB0: jal         0x00298470
    // 0x00409CB4: add.s       $f12, $f0, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = ctx->f0.fl + ctx->f12.fl;
    func_00298470(rdram, ctx);
        goto after_3;
    // 0x00409CB4: add.s       $f12, $f0, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = ctx->f0.fl + ctx->f12.fl;
    after_3:
    // 0x00409CB8: c.lt.s      $f0, $f25
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 25);
    c1cs = ctx->f0.fl < ctx->f25.fl;
    // 0x00409CBC: nop

    // 0x00409CC0: bc1tl       L_00409CC8
    if (c1cs) {
        // 0x00409CC4: addiu       $s2, $zero, 0x1
        ctx->r18 = ADD32(0, 0X1);
            goto L_00409CC8;
    }
    goto skip_0;
    // 0x00409CC4: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
    skip_0:
L_00409CC8:
    // 0x00409CC8: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x00409CCC: slti        $v0, $s0, 0x4
    ctx->r2 = SIGNED(ctx->r16) < 0X4 ? 1 : 0;
    // 0x00409CD0: beq         $v0, $zero, L_00409CE0
    if (ctx->r2 == 0) {
        // 0x00409CD4: addiu       $s1, $s1, 0x14
        ctx->r17 = ADD32(ctx->r17, 0X14);
            goto L_00409CE0;
    }
    // 0x00409CD4: addiu       $s1, $s1, 0x14
    ctx->r17 = ADD32(ctx->r17, 0X14);
    // 0x00409CD8: beq         $s2, $zero, L_00409C6C
    if (ctx->r18 == 0) {
        // 0x00409CDC: addiu       $a0, $sp, 0x38
        ctx->r4 = ADD32(ctx->r29, 0X38);
            goto L_00409C6C;
    }
    // 0x00409CDC: addiu       $a0, $sp, 0x38
    ctx->r4 = ADD32(ctx->r29, 0X38);
L_00409CE0:
    // 0x00409CE0: bne         $s2, $zero, L_00409B84
    if (ctx->r18 != 0) {
        // 0x00409CE4: nop
    
            goto L_00409B84;
    }
    // 0x00409CE4: nop

    // 0x00409CE8: lw          $a0, 0xB0($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XB0);
    // 0x00409CEC: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x00409CF0: lw          $v0, 0x20($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X20);
    // 0x00409CF4: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x00409CF8: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x00409CFC: lw          $a3, 0x1C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X1C);
    // 0x00409D00: jal         0x00246690
    // 0x00409D04: addiu       $a1, $zero, 0x112
    ctx->r5 = ADD32(0, 0X112);
    func_00246690(rdram, ctx);
        goto after_4;
    // 0x00409D04: addiu       $a1, $zero, 0x112
    ctx->r5 = ADD32(0, 0X112);
    after_4:
    // 0x00409D08: lw          $ra, 0xD4($sp)
    ctx->r31 = MEM_W(ctx->r29, 0XD4);
    // 0x00409D0C: lw          $s6, 0xD0($sp)
    ctx->r22 = MEM_W(ctx->r29, 0XD0);
    // 0x00409D10: lw          $s5, 0xCC($sp)
    ctx->r21 = MEM_W(ctx->r29, 0XCC);
    // 0x00409D14: lw          $s4, 0xC8($sp)
    ctx->r20 = MEM_W(ctx->r29, 0XC8);
    // 0x00409D18: lw          $s3, 0xC4($sp)
    ctx->r19 = MEM_W(ctx->r29, 0XC4);
    // 0x00409D1C: lw          $s2, 0xC0($sp)
    ctx->r18 = MEM_W(ctx->r29, 0XC0);
    // 0x00409D20: lw          $s1, 0xBC($sp)
    ctx->r17 = MEM_W(ctx->r29, 0XBC);
    // 0x00409D24: lw          $s0, 0xB8($sp)
    ctx->r16 = MEM_W(ctx->r29, 0XB8);
    // 0x00409D28: ldc1        $f26, 0x108($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X108);
    // 0x00409D2C: ldc1        $f25, 0x100($sp)
    CHECK_FR(ctx, 25);
    ctx->f25.u64 = LD(ctx->r29, 0X100);
    // 0x00409D30: ldc1        $f24, 0xF8($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0XF8);
    // 0x00409D34: ldc1        $f23, 0xF0($sp)
    CHECK_FR(ctx, 23);
    ctx->f23.u64 = LD(ctx->r29, 0XF0);
    // 0x00409D38: ldc1        $f22, 0xE8($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0XE8);
    // 0x00409D3C: ldc1        $f21, 0xE0($sp)
    CHECK_FR(ctx, 21);
    ctx->f21.u64 = LD(ctx->r29, 0XE0);
    // 0x00409D40: ldc1        $f20, 0xD8($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0XD8);
    // 0x00409D44: jr          $ra
    // 0x00409D48: addiu       $sp, $sp, 0x110
    ctx->r29 = ADD32(ctx->r29, 0X110);
    return;
    // 0x00409D48: addiu       $sp, $sp, 0x110
    ctx->r29 = ADD32(ctx->r29, 0X110);
;}
RECOMP_FUNC void entry_00409F7C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_00409F7C:
    // 0x00409F7C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00409F80: lwc1        $f12, 0x648($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X648);
    // 0x00409F84: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00409F88: lwc1        $f14, 0x64C($at)
    ctx->f14.u32l = MEM_W(ctx->r1, 0X64C);
    // 0x00409F8C: lw          $s0, 0x630($s3)
    ctx->r16 = MEM_W(ctx->r19, 0X630);
    // 0x00409F90: jal         0x002119FC
    // 0x00409F94: addiu       $s3, $s3, 0x4
    ctx->r19 = ADD32(ctx->r19, 0X4);
    func_002119FC(rdram, ctx);
        goto after_0;
    // 0x00409F94: addiu       $s3, $s3, 0x4
    ctx->r19 = ADD32(ctx->r19, 0X4);
    after_0:
    // 0x00409F98: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00409F9C: lwc1        $f12, 0x650($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X650);
    // 0x00409FA0: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00409FA4: lwc1        $f14, 0x654($at)
    ctx->f14.u32l = MEM_W(ctx->r1, 0X654);
    // 0x00409FA8: jal         0x002119FC
    // 0x00409FAC: mov.s       $f21, $f0
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 0);
    ctx->f21.fl = ctx->f0.fl;
    func_002119FC(rdram, ctx);
        goto after_1;
    // 0x00409FAC: mov.s       $f21, $f0
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 0);
    ctx->f21.fl = ctx->f0.fl;
    after_1:
    // 0x00409FB0: lw          $v0, 0xD8($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XD8);
    // 0x00409FB4: lwc1        $f20, 0x50($v0)
    ctx->f20.u32l = MEM_W(ctx->r2, 0X50);
    // 0x00409FB8: add.s       $f20, $f20, $f25
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 25);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f25.fl); 
    ctx->f20.fl = ctx->f20.fl + ctx->f25.fl;
    // 0x00409FBC: add.s       $f20, $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = ctx->f20.fl + ctx->f0.fl;
    // 0x00409FC0: lwc1        $f22, 0x4($s2)
    ctx->f22.u32l = MEM_W(ctx->r18, 0X4);
    // 0x00409FC4: lwc1        $f23, 0xC($s2)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r18, 0XC);
    // 0x00409FC8: jal         0x002982F0
    // 0x00409FCC: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    func_002982F0(rdram, ctx);
        goto after_2;
    // 0x00409FCC: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    after_2:
    // 0x00409FD0: mul.s       $f24, $f21, $f0
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f21.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f24.fl = MUL_S(ctx->f21.fl, ctx->f0.fl);
    // 0x00409FD4: jal         0x002974C0
    // 0x00409FD8: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    func_002974C0(rdram, ctx);
        goto after_3;
    // 0x00409FD8: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    after_3:
    // 0x00409FDC: mul.s       $f21, $f21, $f0
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f21.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f21.fl = MUL_S(ctx->f21.fl, ctx->f0.fl);
    // 0x00409FE0: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00409FE4: lwc1        $f12, 0x658($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X658);
    // 0x00409FE8: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00409FEC: lwc1        $f14, 0x65C($at)
    ctx->f14.u32l = MEM_W(ctx->r1, 0X65C);
    // 0x00409FF0: jal         0x002119FC
    // 0x00409FF4: add.s       $f23, $f23, $f21
    CHECK_FR(ctx, 23);
    CHECK_FR(ctx, 23);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f23.fl); NAN_CHECK(ctx->f21.fl); 
    ctx->f23.fl = ctx->f23.fl + ctx->f21.fl;
    func_002119FC(rdram, ctx);
        goto after_4;
    // 0x00409FF4: add.s       $f23, $f23, $f21
    CHECK_FR(ctx, 23);
    CHECK_FR(ctx, 23);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f23.fl); NAN_CHECK(ctx->f21.fl); 
    ctx->f23.fl = ctx->f23.fl + ctx->f21.fl;
    after_4:
    // 0x00409FF8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00409FFC: addiu       $a1, $a0, 0x140
    ctx->r5 = ADD32(ctx->r4, 0X140);
    // 0x0040A000: add.s       $f22, $f22, $f24
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f22.fl = ctx->f22.fl + ctx->f24.fl;
    // 0x0040A004: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x0040A008: swc1        $f0, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->f0.u32l;
    // 0x0040A00C: swc1        $f22, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->f22.u32l;
    // 0x0040A010: jal         0x00243414
    // 0x0040A014: swc1        $f23, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->f_odd[(23 - 1) * 2];
    func_00243414(rdram, ctx);
        goto after_5;
    // 0x0040A014: swc1        $f23, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->f_odd[(23 - 1) * 2];
    after_5:
    // 0x0040A018: lw          $v0, 0x670($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X670);
    // 0x0040A01C: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x0040A020: slt         $v0, $s1, $v0
    ctx->r2 = SIGNED(ctx->r17) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x0040A024: beq         $v0, $zero, L_0040A138
    if (ctx->r2 == 0) {
        // 0x0040A028: nop
    
            goto L_0040A138;
    }
    // 0x0040A028: nop

    // 0x0040A02C: j           L_00409F7C
    // 0x0040A030: nop

        goto L_00409F7C;
    // 0x0040A030: nop

    // 0x0040A034: lw          $v0, 0xD8($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XD8);
    // 0x0040A038: beq         $v0, $zero, L_0040A138
    if (ctx->r2 == 0) {
        // 0x0040A03C: nop
    
            goto L_0040A138;
    }
    // 0x0040A03C: nop

    // 0x0040A040: beq         $s2, $zero, L_0040A138
    if (ctx->r18 == 0) {
        // 0x0040A044: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_0040A138;
    }
    // 0x0040A044: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0040A048: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x0040A04C: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x0040A050: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x0040A054: addiu       $v0, $zero, 0xA00
    ctx->r2 = ADD32(0, 0XA00);
    // 0x0040A058: j           L_0040A0A4
    // 0x0040A05C: sh          $v0, 0x50($sp)
    MEM_H(0X50, ctx->r29) = ctx->r2;
        goto L_0040A0A4;
    // 0x0040A05C: sh          $v0, 0x50($sp)
    MEM_H(0X50, ctx->r29) = ctx->r2;
    // 0x0040A060: lw          $v0, 0xD8($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XD8);
    // 0x0040A064: beq         $v0, $zero, L_0040A138
    if (ctx->r2 == 0) {
        // 0x0040A068: nop
    
            goto L_0040A138;
    }
    // 0x0040A068: nop

    // 0x0040A06C: beq         $s2, $zero, L_0040A138
    if (ctx->r18 == 0) {
        // 0x0040A070: nop
    
            goto L_0040A138;
    }
    // 0x0040A070: nop

    // 0x0040A074: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0040A078: lwc1        $f0, 0x660($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X660);
    // 0x0040A07C: c.lt.s      $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f20.fl < ctx->f0.fl;
    // 0x0040A080: nop

    // 0x0040A084: bc1f        L_0040A138
    if (!c1cs) {
        // 0x0040A088: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_0040A138;
    }
    // 0x0040A088: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0040A08C: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x0040A090: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x0040A094: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x0040A098: addiu       $v0, $zero, 0xA00
    ctx->r2 = ADD32(0, 0XA00);
    // 0x0040A09C: sh          $v0, 0x50($sp)
    MEM_H(0X50, ctx->r29) = ctx->r2;
    // 0x0040A0A0: addiu       $v0, $zero, 0x500
    ctx->r2 = ADD32(0, 0X500);
L_0040A0A4:
    // 0x0040A0A4: sh          $v0, 0x52($sp)
    MEM_H(0X52, ctx->r29) = ctx->r2;
    // 0x0040A0A8: sb          $zero, 0x57($sp)
    MEM_B(0X57, ctx->r29) = 0;
    // 0x0040A0AC: sb          $zero, 0x56($sp)
    MEM_B(0X56, ctx->r29) = 0;
    // 0x0040A0B0: sb          $zero, 0x55($sp)
    MEM_B(0X55, ctx->r29) = 0;
    // 0x0040A0B4: sb          $zero, 0x54($sp)
    MEM_B(0X54, ctx->r29) = 0;
    // 0x0040A0B8: lw          $t0, 0x4($s2)
    ctx->r8 = MEM_W(ctx->r18, 0X4);
    // 0x0040A0BC: lw          $t1, 0x8($s2)
    ctx->r9 = MEM_W(ctx->r18, 0X8);
    // 0x0040A0C0: lw          $t2, 0xC($s2)
    ctx->r10 = MEM_W(ctx->r18, 0XC);
    // 0x0040A0C4: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x0040A0C8: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x0040A0CC: sw          $t2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r10;
    // 0x0040A0D0: lw          $t0, 0x50($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X50);
    // 0x0040A0D4: lw          $t1, 0x54($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X54);
    // 0x0040A0D8: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    // 0x0040A0DC: sw          $t1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r9;
    // 0x0040A0E0: jal         0x00236EA0
    // 0x0040A0E4: nop

    func_00236EA0(rdram, ctx);
        goto after_6;
    // 0x0040A0E4: nop

    after_6:
    // 0x0040A0E8: j           L_0040A138
    // 0x0040A0EC: nop

        goto L_0040A138;
    // 0x0040A0EC: nop

    // 0x0040A0F0: lw          $a2, 0xD8($sp)
    ctx->r6 = MEM_W(ctx->r29, 0XD8);
    // 0x0040A0F4: beq         $a2, $zero, L_0040A138
    if (ctx->r6 == 0) {
        // 0x0040A0F8: addiu       $s0, $sp, 0x50
        ctx->r16 = ADD32(ctx->r29, 0X50);
            goto L_0040A138;
    }
    // 0x0040A0F8: addiu       $s0, $sp, 0x50
    ctx->r16 = ADD32(ctx->r29, 0X50);
    // 0x0040A0FC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0040A100: addiu       $a1, $s1, 0x4
    ctx->r5 = ADD32(ctx->r17, 0X4);
    // 0x0040A104: jal         0x0020EF2C
    // 0x0040A108: addiu       $a2, $a2, 0x4
    ctx->r6 = ADD32(ctx->r6, 0X4);
    func_0020EF2C(rdram, ctx);
        goto after_7;
    // 0x0040A108: addiu       $a2, $a2, 0x4
    ctx->r6 = ADD32(ctx->r6, 0X4);
    after_7:
    // 0x0040A10C: jal         0x0020F040
    // 0x0040A110: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_0020F040(rdram, ctx);
        goto after_8;
    // 0x0040A110: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_8:
    // 0x0040A114: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0040A118: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x0040A11C: jal         0x0020EF60
    // 0x0040A120: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_0020EF60(rdram, ctx);
        goto after_9;
    // 0x0040A120: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_9:
    // 0x0040A124: lw          $a0, 0xD8($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XD8);
    // 0x0040A128: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    // 0x0040A12C: addiu       $a0, $a0, 0x18
    ctx->r4 = ADD32(ctx->r4, 0X18);
    // 0x0040A130: jal         0x0020EEF8
    // 0x0040A134: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    func_0020EEF8(rdram, ctx);
        goto after_10;
    // 0x0040A134: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    after_10:
L_0040A138:
    // 0x0040A138: lw          $ra, 0xF4($sp)
    ctx->r31 = MEM_W(ctx->r29, 0XF4);
    // 0x0040A13C: lw          $s4, 0xF0($sp)
    ctx->r20 = MEM_W(ctx->r29, 0XF0);
    // 0x0040A140: lw          $s3, 0xEC($sp)
    ctx->r19 = MEM_W(ctx->r29, 0XEC);
    // 0x0040A144: lw          $s2, 0xE8($sp)
    ctx->r18 = MEM_W(ctx->r29, 0XE8);
    // 0x0040A148: lw          $s1, 0xE4($sp)
    ctx->r17 = MEM_W(ctx->r29, 0XE4);
    // 0x0040A14C: lw          $s0, 0xE0($sp)
    ctx->r16 = MEM_W(ctx->r29, 0XE0);
    // 0x0040A150: ldc1        $f25, 0x120($sp)
    CHECK_FR(ctx, 25);
    ctx->f25.u64 = LD(ctx->r29, 0X120);
    // 0x0040A154: ldc1        $f24, 0x118($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X118);
    // 0x0040A158: ldc1        $f23, 0x110($sp)
    CHECK_FR(ctx, 23);
    ctx->f23.u64 = LD(ctx->r29, 0X110);
    // 0x0040A15C: ldc1        $f22, 0x108($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X108);
    // 0x0040A160: ldc1        $f21, 0x100($sp)
    CHECK_FR(ctx, 21);
    ctx->f21.u64 = LD(ctx->r29, 0X100);
    // 0x0040A164: ldc1        $f20, 0xF8($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0XF8);
    // 0x0040A168: jr          $ra
    // 0x0040A16C: addiu       $sp, $sp, 0x128
    ctx->r29 = ADD32(ctx->r29, 0X128);
    return;
    // 0x0040A16C: addiu       $sp, $sp, 0x128
    ctx->r29 = ADD32(ctx->r29, 0X128);
;}
RECOMP_FUNC void entry_0040A090(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0040A090: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x0040A094: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x0040A098: addiu       $v0, $zero, 0xA00
    ctx->r2 = ADD32(0, 0XA00);
    // 0x0040A09C: sh          $v0, 0x50($sp)
    MEM_H(0X50, ctx->r29) = ctx->r2;
    // 0x0040A0A0: addiu       $v0, $zero, 0x500
    ctx->r2 = ADD32(0, 0X500);
    // 0x0040A0A4: sh          $v0, 0x52($sp)
    MEM_H(0X52, ctx->r29) = ctx->r2;
    // 0x0040A0A8: sb          $zero, 0x57($sp)
    MEM_B(0X57, ctx->r29) = 0;
    // 0x0040A0AC: sb          $zero, 0x56($sp)
    MEM_B(0X56, ctx->r29) = 0;
    // 0x0040A0B0: sb          $zero, 0x55($sp)
    MEM_B(0X55, ctx->r29) = 0;
    // 0x0040A0B4: sb          $zero, 0x54($sp)
    MEM_B(0X54, ctx->r29) = 0;
    // 0x0040A0B8: lw          $t0, 0x4($s2)
    ctx->r8 = MEM_W(ctx->r18, 0X4);
    // 0x0040A0BC: lw          $t1, 0x8($s2)
    ctx->r9 = MEM_W(ctx->r18, 0X8);
    // 0x0040A0C0: lw          $t2, 0xC($s2)
    ctx->r10 = MEM_W(ctx->r18, 0XC);
    // 0x0040A0C4: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x0040A0C8: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x0040A0CC: sw          $t2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r10;
    // 0x0040A0D0: lw          $t0, 0x50($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X50);
    // 0x0040A0D4: lw          $t1, 0x54($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X54);
    // 0x0040A0D8: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    // 0x0040A0DC: sw          $t1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r9;
    // 0x0040A0E0: jal         0x00236EA0
    // 0x0040A0E4: nop

    func_00236EA0(rdram, ctx);
        goto after_0;
    // 0x0040A0E4: nop

    after_0:
    // 0x0040A0E8: j           L_0040A138
    // 0x0040A0EC: nop

        goto L_0040A138;
    // 0x0040A0EC: nop

    // 0x0040A0F0: lw          $a2, 0xD8($sp)
    ctx->r6 = MEM_W(ctx->r29, 0XD8);
    // 0x0040A0F4: beq         $a2, $zero, L_0040A138
    if (ctx->r6 == 0) {
        // 0x0040A0F8: addiu       $s0, $sp, 0x50
        ctx->r16 = ADD32(ctx->r29, 0X50);
            goto L_0040A138;
    }
    // 0x0040A0F8: addiu       $s0, $sp, 0x50
    ctx->r16 = ADD32(ctx->r29, 0X50);
    // 0x0040A0FC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0040A100: addiu       $a1, $s1, 0x4
    ctx->r5 = ADD32(ctx->r17, 0X4);
    // 0x0040A104: jal         0x0020EF2C
    // 0x0040A108: addiu       $a2, $a2, 0x4
    ctx->r6 = ADD32(ctx->r6, 0X4);
    func_0020EF2C(rdram, ctx);
        goto after_1;
    // 0x0040A108: addiu       $a2, $a2, 0x4
    ctx->r6 = ADD32(ctx->r6, 0X4);
    after_1:
    // 0x0040A10C: jal         0x0020F040
    // 0x0040A110: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_0020F040(rdram, ctx);
        goto after_2;
    // 0x0040A110: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x0040A114: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0040A118: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x0040A11C: jal         0x0020EF60
    // 0x0040A120: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_0020EF60(rdram, ctx);
        goto after_3;
    // 0x0040A120: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_3:
    // 0x0040A124: lw          $a0, 0xD8($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XD8);
    // 0x0040A128: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    // 0x0040A12C: addiu       $a0, $a0, 0x18
    ctx->r4 = ADD32(ctx->r4, 0X18);
    // 0x0040A130: jal         0x0020EEF8
    // 0x0040A134: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    func_0020EEF8(rdram, ctx);
        goto after_4;
    // 0x0040A134: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    after_4:
L_0040A138:
    // 0x0040A138: lw          $ra, 0xF4($sp)
    ctx->r31 = MEM_W(ctx->r29, 0XF4);
    // 0x0040A13C: lw          $s4, 0xF0($sp)
    ctx->r20 = MEM_W(ctx->r29, 0XF0);
    // 0x0040A140: lw          $s3, 0xEC($sp)
    ctx->r19 = MEM_W(ctx->r29, 0XEC);
    // 0x0040A144: lw          $s2, 0xE8($sp)
    ctx->r18 = MEM_W(ctx->r29, 0XE8);
    // 0x0040A148: lw          $s1, 0xE4($sp)
    ctx->r17 = MEM_W(ctx->r29, 0XE4);
    // 0x0040A14C: lw          $s0, 0xE0($sp)
    ctx->r16 = MEM_W(ctx->r29, 0XE0);
    // 0x0040A150: ldc1        $f25, 0x120($sp)
    CHECK_FR(ctx, 25);
    ctx->f25.u64 = LD(ctx->r29, 0X120);
    // 0x0040A154: ldc1        $f24, 0x118($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X118);
    // 0x0040A158: ldc1        $f23, 0x110($sp)
    CHECK_FR(ctx, 23);
    ctx->f23.u64 = LD(ctx->r29, 0X110);
    // 0x0040A15C: ldc1        $f22, 0x108($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X108);
    // 0x0040A160: ldc1        $f21, 0x100($sp)
    CHECK_FR(ctx, 21);
    ctx->f21.u64 = LD(ctx->r29, 0X100);
    // 0x0040A164: ldc1        $f20, 0xF8($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0XF8);
    // 0x0040A168: jr          $ra
    // 0x0040A16C: addiu       $sp, $sp, 0x128
    ctx->r29 = ADD32(ctx->r29, 0X128);
    return;
    // 0x0040A16C: addiu       $sp, $sp, 0x128
    ctx->r29 = ADD32(ctx->r29, 0X128);
;}
RECOMP_FUNC void entry_0040A0A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0040A0A4: sh          $v0, 0x52($sp)
    MEM_H(0X52, ctx->r29) = ctx->r2;
    // 0x0040A0A8: sb          $zero, 0x57($sp)
    MEM_B(0X57, ctx->r29) = 0;
    // 0x0040A0AC: sb          $zero, 0x56($sp)
    MEM_B(0X56, ctx->r29) = 0;
    // 0x0040A0B0: sb          $zero, 0x55($sp)
    MEM_B(0X55, ctx->r29) = 0;
    // 0x0040A0B4: sb          $zero, 0x54($sp)
    MEM_B(0X54, ctx->r29) = 0;
    // 0x0040A0B8: lw          $t0, 0x4($s2)
    ctx->r8 = MEM_W(ctx->r18, 0X4);
    // 0x0040A0BC: lw          $t1, 0x8($s2)
    ctx->r9 = MEM_W(ctx->r18, 0X8);
    // 0x0040A0C0: lw          $t2, 0xC($s2)
    ctx->r10 = MEM_W(ctx->r18, 0XC);
    // 0x0040A0C4: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x0040A0C8: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x0040A0CC: sw          $t2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r10;
    // 0x0040A0D0: lw          $t0, 0x50($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X50);
    // 0x0040A0D4: lw          $t1, 0x54($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X54);
    // 0x0040A0D8: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    // 0x0040A0DC: sw          $t1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r9;
    // 0x0040A0E0: jal         0x00236EA0
    // 0x0040A0E4: nop

    func_00236EA0(rdram, ctx);
        goto after_0;
    // 0x0040A0E4: nop

    after_0:
    // 0x0040A0E8: j           L_0040A138
    // 0x0040A0EC: nop

        goto L_0040A138;
    // 0x0040A0EC: nop

    // 0x0040A0F0: lw          $a2, 0xD8($sp)
    ctx->r6 = MEM_W(ctx->r29, 0XD8);
    // 0x0040A0F4: beq         $a2, $zero, L_0040A138
    if (ctx->r6 == 0) {
        // 0x0040A0F8: addiu       $s0, $sp, 0x50
        ctx->r16 = ADD32(ctx->r29, 0X50);
            goto L_0040A138;
    }
    // 0x0040A0F8: addiu       $s0, $sp, 0x50
    ctx->r16 = ADD32(ctx->r29, 0X50);
    // 0x0040A0FC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0040A100: addiu       $a1, $s1, 0x4
    ctx->r5 = ADD32(ctx->r17, 0X4);
    // 0x0040A104: jal         0x0020EF2C
    // 0x0040A108: addiu       $a2, $a2, 0x4
    ctx->r6 = ADD32(ctx->r6, 0X4);
    func_0020EF2C(rdram, ctx);
        goto after_1;
    // 0x0040A108: addiu       $a2, $a2, 0x4
    ctx->r6 = ADD32(ctx->r6, 0X4);
    after_1:
    // 0x0040A10C: jal         0x0020F040
    // 0x0040A110: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_0020F040(rdram, ctx);
        goto after_2;
    // 0x0040A110: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x0040A114: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0040A118: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x0040A11C: jal         0x0020EF60
    // 0x0040A120: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_0020EF60(rdram, ctx);
        goto after_3;
    // 0x0040A120: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_3:
    // 0x0040A124: lw          $a0, 0xD8($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XD8);
    // 0x0040A128: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    // 0x0040A12C: addiu       $a0, $a0, 0x18
    ctx->r4 = ADD32(ctx->r4, 0X18);
    // 0x0040A130: jal         0x0020EEF8
    // 0x0040A134: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    func_0020EEF8(rdram, ctx);
        goto after_4;
    // 0x0040A134: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    after_4:
L_0040A138:
    // 0x0040A138: lw          $ra, 0xF4($sp)
    ctx->r31 = MEM_W(ctx->r29, 0XF4);
    // 0x0040A13C: lw          $s4, 0xF0($sp)
    ctx->r20 = MEM_W(ctx->r29, 0XF0);
    // 0x0040A140: lw          $s3, 0xEC($sp)
    ctx->r19 = MEM_W(ctx->r29, 0XEC);
    // 0x0040A144: lw          $s2, 0xE8($sp)
    ctx->r18 = MEM_W(ctx->r29, 0XE8);
    // 0x0040A148: lw          $s1, 0xE4($sp)
    ctx->r17 = MEM_W(ctx->r29, 0XE4);
    // 0x0040A14C: lw          $s0, 0xE0($sp)
    ctx->r16 = MEM_W(ctx->r29, 0XE0);
    // 0x0040A150: ldc1        $f25, 0x120($sp)
    CHECK_FR(ctx, 25);
    ctx->f25.u64 = LD(ctx->r29, 0X120);
    // 0x0040A154: ldc1        $f24, 0x118($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X118);
    // 0x0040A158: ldc1        $f23, 0x110($sp)
    CHECK_FR(ctx, 23);
    ctx->f23.u64 = LD(ctx->r29, 0X110);
    // 0x0040A15C: ldc1        $f22, 0x108($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X108);
    // 0x0040A160: ldc1        $f21, 0x100($sp)
    CHECK_FR(ctx, 21);
    ctx->f21.u64 = LD(ctx->r29, 0X100);
    // 0x0040A164: ldc1        $f20, 0xF8($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0XF8);
    // 0x0040A168: jr          $ra
    // 0x0040A16C: addiu       $sp, $sp, 0x128
    ctx->r29 = ADD32(ctx->r29, 0X128);
    return;
    // 0x0040A16C: addiu       $sp, $sp, 0x128
    ctx->r29 = ADD32(ctx->r29, 0X128);
;}
RECOMP_FUNC void entry_0040A138(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0040A138: lw          $ra, 0xF4($sp)
    ctx->r31 = MEM_W(ctx->r29, 0XF4);
    // 0x0040A13C: lw          $s4, 0xF0($sp)
    ctx->r20 = MEM_W(ctx->r29, 0XF0);
    // 0x0040A140: lw          $s3, 0xEC($sp)
    ctx->r19 = MEM_W(ctx->r29, 0XEC);
    // 0x0040A144: lw          $s2, 0xE8($sp)
    ctx->r18 = MEM_W(ctx->r29, 0XE8);
    // 0x0040A148: lw          $s1, 0xE4($sp)
    ctx->r17 = MEM_W(ctx->r29, 0XE4);
    // 0x0040A14C: lw          $s0, 0xE0($sp)
    ctx->r16 = MEM_W(ctx->r29, 0XE0);
    // 0x0040A150: ldc1        $f25, 0x120($sp)
    CHECK_FR(ctx, 25);
    ctx->f25.u64 = LD(ctx->r29, 0X120);
    // 0x0040A154: ldc1        $f24, 0x118($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X118);
    // 0x0040A158: ldc1        $f23, 0x110($sp)
    CHECK_FR(ctx, 23);
    ctx->f23.u64 = LD(ctx->r29, 0X110);
    // 0x0040A15C: ldc1        $f22, 0x108($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X108);
    // 0x0040A160: ldc1        $f21, 0x100($sp)
    CHECK_FR(ctx, 21);
    ctx->f21.u64 = LD(ctx->r29, 0X100);
    // 0x0040A164: ldc1        $f20, 0xF8($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0XF8);
    // 0x0040A168: jr          $ra
    // 0x0040A16C: addiu       $sp, $sp, 0x128
    ctx->r29 = ADD32(ctx->r29, 0X128);
    return;
    // 0x0040A16C: addiu       $sp, $sp, 0x128
    ctx->r29 = ADD32(ctx->r29, 0X128);
;}
RECOMP_FUNC void entry_0040A224(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0040A224: sh          $v1, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r3;
    // 0x0040A228: addiu       $v1, $zero, 0x4
    ctx->r3 = ADD32(0, 0X4);
    // 0x0040A22C: sh          $v1, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r3;
    // 0x0040A230: sll         $v0, $a0, 2
    ctx->r2 = S32(ctx->r4 << 2);
    // 0x0040A234: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x0040A238: addu        $v0, $a0, $v0
    ctx->r2 = ADD32(ctx->r4, ctx->r2);
    // 0x0040A23C: addiu       $v1, $zero, -0x1
    ctx->r3 = ADD32(0, -0X1);
    // 0x0040A240: jal         0x0026D518
    // 0x0040A244: sh          $v1, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r3;
    func_0026D518(rdram, ctx);
        goto after_0;
    // 0x0040A244: sh          $v1, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r3;
    after_0:
    // 0x0040A248: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x0040A24C: lw          $ra, 0x30($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X30);
    // 0x0040A250: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x0040A254: jr          $ra
    // 0x0040A258: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x0040A258: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void entry_0040A388(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0040A388: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0040A38C: swc1        $f0, 0x1900($at)
    MEM_W(0X1900, ctx->r1) = ctx->f0.u32l;
    // 0x0040A390: j           L_0040A3D0
    // 0x0040A394: nop

        goto L_0040A3D0;
    // 0x0040A394: nop

    // 0x0040A398: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0040A39C: lwc1        $f0, 0x6D28($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6D28);
    // 0x0040A3A0: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0040A3A4: lwc1        $f1, 0x83C($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X83C);
    // 0x0040A3A8: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0040A3AC: lwc1        $f1, 0x250($a1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r5, 0X250);
    // 0x0040A3B0: sub.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl - ctx->f0.fl;
    // 0x0040A3B4: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0040A3B8: lwc1        $f0, 0x840($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X840);
    // 0x0040A3BC: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x0040A3C0: nop

    // 0x0040A3C4: bc1tl       L_0040A3CC
    if (c1cs) {
        // 0x0040A3C8: mov.s       $f1, $f0
        CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    ctx->f1.fl = ctx->f0.fl;
            goto L_0040A3CC;
    }
    goto skip_0;
    // 0x0040A3C8: mov.s       $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    ctx->f1.fl = ctx->f0.fl;
    skip_0:
L_0040A3CC:
    // 0x0040A3CC: swc1        $f1, 0x250($a1)
    MEM_W(0X250, ctx->r5) = ctx->f_odd[(1 - 1) * 2];
L_0040A3D0:
    // 0x0040A3D0: lb          $v0, 0x174($a0)
    ctx->r2 = MEM_B(ctx->r4, 0X174);
    // 0x0040A3D4: slti        $v0, $v0, 0x1E
    ctx->r2 = SIGNED(ctx->r2) < 0X1E ? 1 : 0;
    // 0x0040A3D8: bne         $v0, $zero, L_0040A40C
    if (ctx->r2 != 0) {
        // 0x0040A3DC: nop
    
            goto L_0040A40C;
    }
    // 0x0040A3DC: nop

    // 0x0040A3E0: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0040A3E4: lwc1        $f0, 0x844($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X844);
    // 0x0040A3E8: j           L_0040A40C
    // 0x0040A3EC: swc1        $f0, 0x250($a1)
    MEM_W(0X250, ctx->r5) = ctx->f0.u32l;
        goto L_0040A40C;
    // 0x0040A3EC: swc1        $f0, 0x250($a1)
    MEM_W(0X250, ctx->r5) = ctx->f0.u32l;
    // 0x0040A3F0: lw          $a1, 0x254($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X254);
    // 0x0040A3F4: j           L_0040A404
    // 0x0040A3F8: addu        $a2, $a1, $zero
    ctx->r6 = ADD32(ctx->r5, 0);
        goto L_0040A404;
    // 0x0040A3F8: addu        $a2, $a1, $zero
    ctx->r6 = ADD32(ctx->r5, 0);
    // 0x0040A3FC: lw          $a1, 0x250($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X250);
    // 0x0040A400: addu        $a2, $a1, $zero
    ctx->r6 = ADD32(ctx->r5, 0);
L_0040A404:
    // 0x0040A404: jal         0x0021034C
    // 0x0040A408: addu        $a3, $a1, $zero
    ctx->r7 = ADD32(ctx->r5, 0);
    func_0021034C(rdram, ctx);
        goto after_0;
    // 0x0040A408: addu        $a3, $a1, $zero
    ctx->r7 = ADD32(ctx->r5, 0);
    after_0:
L_0040A40C:
    // 0x0040A40C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x0040A410: jr          $ra
    // 0x0040A414: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0040A414: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void entry_0040A3D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0040A3D0: lb          $v0, 0x174($a0)
    ctx->r2 = MEM_B(ctx->r4, 0X174);
    // 0x0040A3D4: slti        $v0, $v0, 0x1E
    ctx->r2 = SIGNED(ctx->r2) < 0X1E ? 1 : 0;
    // 0x0040A3D8: bne         $v0, $zero, L_0040A40C
    if (ctx->r2 != 0) {
        // 0x0040A3DC: nop
    
            goto L_0040A40C;
    }
    // 0x0040A3DC: nop

    // 0x0040A3E0: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0040A3E4: lwc1        $f0, 0x844($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X844);
    // 0x0040A3E8: j           L_0040A40C
    // 0x0040A3EC: swc1        $f0, 0x250($a1)
    MEM_W(0X250, ctx->r5) = ctx->f0.u32l;
        goto L_0040A40C;
    // 0x0040A3EC: swc1        $f0, 0x250($a1)
    MEM_W(0X250, ctx->r5) = ctx->f0.u32l;
    // 0x0040A3F0: lw          $a1, 0x254($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X254);
    // 0x0040A3F4: j           L_0040A404
    // 0x0040A3F8: addu        $a2, $a1, $zero
    ctx->r6 = ADD32(ctx->r5, 0);
        goto L_0040A404;
    // 0x0040A3F8: addu        $a2, $a1, $zero
    ctx->r6 = ADD32(ctx->r5, 0);
    // 0x0040A3FC: lw          $a1, 0x250($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X250);
    // 0x0040A400: addu        $a2, $a1, $zero
    ctx->r6 = ADD32(ctx->r5, 0);
L_0040A404:
    // 0x0040A404: jal         0x0021034C
    // 0x0040A408: addu        $a3, $a1, $zero
    ctx->r7 = ADD32(ctx->r5, 0);
    func_0021034C(rdram, ctx);
        goto after_0;
    // 0x0040A408: addu        $a3, $a1, $zero
    ctx->r7 = ADD32(ctx->r5, 0);
    after_0:
L_0040A40C:
    // 0x0040A40C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x0040A410: jr          $ra
    // 0x0040A414: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0040A414: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void entry_0040A404(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0040A404: jal         0x0021034C
    // 0x0040A408: addu        $a3, $a1, $zero
    ctx->r7 = ADD32(ctx->r5, 0);
    func_0021034C(rdram, ctx);
        goto after_0;
    // 0x0040A408: addu        $a3, $a1, $zero
    ctx->r7 = ADD32(ctx->r5, 0);
    after_0:
    // 0x0040A40C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x0040A410: jr          $ra
    // 0x0040A414: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0040A414: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void entry_0040A40C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0040A40C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x0040A410: jr          $ra
    // 0x0040A414: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0040A414: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void entry_0040A55C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0040A55C: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    // 0x0040A560: sll         $v0, $s0, 2
    ctx->r2 = S32(ctx->r16 << 2);
    // 0x0040A564: addu        $v1, $a0, $v0
    ctx->r3 = ADD32(ctx->r4, ctx->r2);
    // 0x0040A568: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x0040A56C: jal         0x0026D518
    // 0x0040A570: sh          $v0, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r2;
    func_0026D518(rdram, ctx);
        goto after_0;
    // 0x0040A570: sh          $v0, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r2;
    after_0:
    // 0x0040A574: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x0040A578: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x0040A57C: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x0040A580: sw          $v0, 0x66C($s1)
    MEM_W(0X66C, ctx->r17) = ctx->r2;
    // 0x0040A584: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    // 0x0040A588: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    // 0x0040A58C: jal         0x00243414
    // 0x0040A590: sw          $zero, 0x67C($s1)
    MEM_W(0X67C, ctx->r17) = 0;
    func_00243414(rdram, ctx);
        goto after_1;
    // 0x0040A590: sw          $zero, 0x67C($s1)
    MEM_W(0X67C, ctx->r17) = 0;
    after_1:
    // 0x0040A594: lw          $ra, 0xD8($sp)
    ctx->r31 = MEM_W(ctx->r29, 0XD8);
    // 0x0040A598: lw          $s3, 0xD4($sp)
    ctx->r19 = MEM_W(ctx->r29, 0XD4);
    // 0x0040A59C: lw          $s2, 0xD0($sp)
    ctx->r18 = MEM_W(ctx->r29, 0XD0);
    // 0x0040A5A0: lw          $s1, 0xCC($sp)
    ctx->r17 = MEM_W(ctx->r29, 0XCC);
    // 0x0040A5A4: lw          $s0, 0xC8($sp)
    ctx->r16 = MEM_W(ctx->r29, 0XC8);
    // 0x0040A5A8: ldc1        $f20, 0xE0($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0XE0);
    // 0x0040A5AC: jr          $ra
    // 0x0040A5B0: addiu       $sp, $sp, 0xE8
    ctx->r29 = ADD32(ctx->r29, 0XE8);
    return;
    // 0x0040A5B0: addiu       $sp, $sp, 0xE8
    ctx->r29 = ADD32(ctx->r29, 0XE8);
;}
RECOMP_FUNC void entry_0040A560(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0040A560: sll         $v0, $s0, 2
    ctx->r2 = S32(ctx->r16 << 2);
    // 0x0040A564: addu        $v1, $a0, $v0
    ctx->r3 = ADD32(ctx->r4, ctx->r2);
    // 0x0040A568: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x0040A56C: jal         0x0026D518
    // 0x0040A570: sh          $v0, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r2;
    func_0026D518(rdram, ctx);
        goto after_0;
    // 0x0040A570: sh          $v0, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r2;
    after_0:
    // 0x0040A574: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x0040A578: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x0040A57C: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x0040A580: sw          $v0, 0x66C($s1)
    MEM_W(0X66C, ctx->r17) = ctx->r2;
    // 0x0040A584: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    // 0x0040A588: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    // 0x0040A58C: jal         0x00243414
    // 0x0040A590: sw          $zero, 0x67C($s1)
    MEM_W(0X67C, ctx->r17) = 0;
    func_00243414(rdram, ctx);
        goto after_1;
    // 0x0040A590: sw          $zero, 0x67C($s1)
    MEM_W(0X67C, ctx->r17) = 0;
    after_1:
    // 0x0040A594: lw          $ra, 0xD8($sp)
    ctx->r31 = MEM_W(ctx->r29, 0XD8);
    // 0x0040A598: lw          $s3, 0xD4($sp)
    ctx->r19 = MEM_W(ctx->r29, 0XD4);
    // 0x0040A59C: lw          $s2, 0xD0($sp)
    ctx->r18 = MEM_W(ctx->r29, 0XD0);
    // 0x0040A5A0: lw          $s1, 0xCC($sp)
    ctx->r17 = MEM_W(ctx->r29, 0XCC);
    // 0x0040A5A4: lw          $s0, 0xC8($sp)
    ctx->r16 = MEM_W(ctx->r29, 0XC8);
    // 0x0040A5A8: ldc1        $f20, 0xE0($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0XE0);
    // 0x0040A5AC: jr          $ra
    // 0x0040A5B0: addiu       $sp, $sp, 0xE8
    ctx->r29 = ADD32(ctx->r29, 0XE8);
    return;
    // 0x0040A5B0: addiu       $sp, $sp, 0xE8
    ctx->r29 = ADD32(ctx->r29, 0XE8);
;}
RECOMP_FUNC void entry_0040A9C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0040A9C4: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0040A9C8: lwc1        $f0, 0x86C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X86C);
    // 0x0040A9CC: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x0040A9D0: nop

    // 0x0040A9D4: bc1tl       L_0040A9DC
    if (c1cs) {
        // 0x0040A9D8: addiu       $s5, $zero, 0x1
        ctx->r21 = ADD32(0, 0X1);
            goto L_0040A9DC;
    }
    goto skip_0;
    // 0x0040A9D8: addiu       $s5, $zero, 0x1
    ctx->r21 = ADD32(0, 0X1);
    skip_0:
L_0040A9DC:
    // 0x0040A9DC: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0040A9E0: lwc1        $f0, 0x870($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X870);
    // 0x0040A9E4: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x0040A9E8: nop

    // 0x0040A9EC: bc1tl       L_0040A9F4
    if (c1cs) {
        // 0x0040A9F0: addiu       $s6, $zero, 0x1
        ctx->r22 = ADD32(0, 0X1);
            goto L_0040A9F4;
    }
    goto skip_1;
    // 0x0040A9F0: addiu       $s6, $zero, 0x1
    ctx->r22 = ADD32(0, 0X1);
    skip_1:
L_0040A9F4:
    // 0x0040A9F4: lw          $v0, 0xC0($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XC0);
    // 0x0040A9F8: beq         $v0, $zero, L_0040AB80
    if (ctx->r2 == 0) {
        // 0x0040A9FC: addiu       $v0, $zero, 0x17
        ctx->r2 = ADD32(0, 0X17);
            goto L_0040AB80;
    }
    // 0x0040A9FC: addiu       $v0, $zero, 0x17
    ctx->r2 = ADD32(0, 0X17);
    // 0x0040AA00: lw          $v1, 0x66C($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X66C);
    // 0x0040AA04: bne         $v1, $v0, L_0040AA40
    if (ctx->r3 != ctx->r2) {
        // 0x0040AA08: nop
    
            goto L_0040AA40;
    }
    // 0x0040AA08: nop

    // 0x0040AA0C: lw          $v0, 0x67C($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X67C);
    // 0x0040AA10: slti        $v0, $v0, 0x65
    ctx->r2 = SIGNED(ctx->r2) < 0X65 ? 1 : 0;
    // 0x0040AA14: bnel        $v0, $zero, L_0040AA64
    if (ctx->r2 != 0) {
        // 0x0040AA18: addiu       $s1, $zero, 0x1
        ctx->r17 = ADD32(0, 0X1);
            goto L_0040AA64;
    }
    goto skip_2;
    // 0x0040AA18: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
    skip_2:
    // 0x0040AA1C: sll         $v1, $s0, 2
    ctx->r3 = S32(ctx->r16 << 2);
    // 0x0040AA20: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x0040AA24: addiu       $v0, $sp, 0x18
    ctx->r2 = ADD32(ctx->r29, 0X18);
    // 0x0040AA28: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x0040AA2C: addiu       $v1, $zero, 0x18
    ctx->r3 = ADD32(0, 0X18);
    // 0x0040AA30: sh          $v1, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r3;
    // 0x0040AA34: addiu       $v1, $zero, 0x5
    ctx->r3 = ADD32(0, 0X5);
    // 0x0040AA38: j           L_0040AA64
    // 0x0040AA3C: sh          $v1, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r3;
        goto L_0040AA64;
    // 0x0040AA3C: sh          $v1, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r3;
L_0040AA40:
    // 0x0040AA40: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0040AA44: lwc1        $f0, 0x874($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X874);
    // 0x0040AA48: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x0040AA4C: nop

    // 0x0040AA50: bc1fl       L_0040AA60
    if (!c1cs) {
        // 0x0040AA54: addiu       $s4, $zero, 0x1
        ctx->r20 = ADD32(0, 0X1);
            goto L_0040AA60;
    }
    goto skip_3;
    // 0x0040AA54: addiu       $s4, $zero, 0x1
    ctx->r20 = ADD32(0, 0X1);
    skip_3:
    // 0x0040AA58: j           L_0040AA64
    // 0x0040AA5C: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
        goto L_0040AA64;
    // 0x0040AA5C: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
L_0040AA60:
    // 0x0040AA60: addu        $s3, $s4, $zero
    ctx->r19 = ADD32(ctx->r20, 0);
L_0040AA64:
    // 0x0040AA64: beq         $s1, $zero, L_0040AAA4
    if (ctx->r17 == 0) {
        // 0x0040AA68: sll         $a0, $s0, 2
        ctx->r4 = S32(ctx->r16 << 2);
            goto L_0040AAA4;
    }
    // 0x0040AA68: sll         $a0, $s0, 2
    ctx->r4 = S32(ctx->r16 << 2);
    // 0x0040AA6C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x0040AA70: sll         $a2, $s0, 2
    ctx->r6 = S32(ctx->r16 << 2);
    // 0x0040AA74: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x0040AA78: addiu       $v1, $sp, 0x18
    ctx->r3 = ADD32(ctx->r29, 0X18);
    // 0x0040AA7C: addu        $a0, $v1, $a0
    ctx->r4 = ADD32(ctx->r3, ctx->r4);
    // 0x0040AA80: addiu       $v0, $zero, 0x1A
    ctx->r2 = ADD32(0, 0X1A);
    // 0x0040AA84: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x0040AA88: addu        $v1, $v1, $a2
    ctx->r3 = ADD32(ctx->r3, ctx->r6);
    // 0x0040AA8C: sh          $v0, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r2;
    // 0x0040AA90: addiu       $v0, $zero, 0x1B
    ctx->r2 = ADD32(0, 0X1B);
    // 0x0040AA94: sh          $a1, 0x2($a0)
    MEM_H(0X2, ctx->r4) = ctx->r5;
    // 0x0040AA98: sh          $v0, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r2;
    // 0x0040AA9C: j           L_0040AB48
    // 0x0040AAA0: sh          $a1, 0x2($v1)
    MEM_H(0X2, ctx->r3) = ctx->r5;
        goto L_0040AB48;
    // 0x0040AAA0: sh          $a1, 0x2($v1)
    MEM_H(0X2, ctx->r3) = ctx->r5;
L_0040AAA4:
    // 0x0040AAA4: beq         $s3, $zero, L_0040AB10
    if (ctx->r19 == 0) {
        // 0x0040AAA8: nop
    
            goto L_0040AB10;
    }
    // 0x0040AAA8: nop

    // 0x0040AAAC: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x0040AAB0: lw          $a0, -0x14C($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X14C);
    // 0x0040AAB4: beq         $a0, $zero, L_0040AAC8
    if (ctx->r4 == 0) {
        // 0x0040AAB8: addu        $v1, $zero, $zero
        ctx->r3 = ADD32(0, 0);
            goto L_0040AAC8;
    }
    // 0x0040AAB8: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
L_0040AABC:
    // 0x0040AABC: lw          $a0, 0x28C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X28C);
    // 0x0040AAC0: bne         $a0, $zero, L_0040AABC
    if (ctx->r4 != 0) {
        // 0x0040AAC4: addiu       $v1, $v1, 0x1
        ctx->r3 = ADD32(ctx->r3, 0X1);
            goto L_0040AABC;
    }
    // 0x0040AAC4: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
L_0040AAC8:
    // 0x0040AAC8: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x0040AACC: beq         $v0, $zero, L_0040AAF0
    if (ctx->r2 == 0) {
        // 0x0040AAD0: sll         $v1, $s0, 2
        ctx->r3 = S32(ctx->r16 << 2);
            goto L_0040AAF0;
    }
    // 0x0040AAD0: sll         $v1, $s0, 2
    ctx->r3 = S32(ctx->r16 << 2);
    // 0x0040AAD4: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x0040AAD8: addiu       $v0, $sp, 0x18
    ctx->r2 = ADD32(ctx->r29, 0X18);
    // 0x0040AADC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x0040AAE0: addiu       $v1, $zero, 0x19
    ctx->r3 = ADD32(0, 0X19);
    // 0x0040AAE4: sh          $v1, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r3;
    // 0x0040AAE8: addiu       $v1, $zero, 0x4
    ctx->r3 = ADD32(0, 0X4);
    // 0x0040AAEC: sh          $v1, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r3;
L_0040AAF0:
    // 0x0040AAF0: sll         $v1, $s0, 2
    ctx->r3 = S32(ctx->r16 << 2);
    // 0x0040AAF4: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x0040AAF8: addiu       $v0, $sp, 0x18
    ctx->r2 = ADD32(ctx->r29, 0X18);
    // 0x0040AAFC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x0040AB00: addiu       $v1, $zero, 0x1D
    ctx->r3 = ADD32(0, 0X1D);
    // 0x0040AB04: sh          $v1, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r3;
    // 0x0040AB08: addiu       $v1, $zero, 0x6
    ctx->r3 = ADD32(0, 0X6);
    // 0x0040AB0C: sh          $v1, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r3;
L_0040AB10:
    // 0x0040AB10: beq         $s4, $zero, L_0040AB48
    if (ctx->r20 == 0) {
        // 0x0040AB14: sll         $v0, $s0, 2
        ctx->r2 = S32(ctx->r16 << 2);
            goto L_0040AB48;
    }
    // 0x0040AB14: sll         $v0, $s0, 2
    ctx->r2 = S32(ctx->r16 << 2);
    // 0x0040AB18: addiu       $v1, $sp, 0x18
    ctx->r3 = ADD32(ctx->r29, 0X18);
    // 0x0040AB1C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x0040AB20: addiu       $v0, $zero, 0x17
    ctx->r2 = ADD32(0, 0X17);
    // 0x0040AB24: beq         $s5, $zero, L_0040AB34
    if (ctx->r21 == 0) {
        // 0x0040AB28: sh          $v0, 0x0($v1)
        MEM_H(0X0, ctx->r3) = ctx->r2;
            goto L_0040AB34;
    }
    // 0x0040AB28: sh          $v0, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r2;
    // 0x0040AB2C: j           L_0040AB40
    // 0x0040AB30: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
        goto L_0040AB40;
    // 0x0040AB30: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
L_0040AB34:
    // 0x0040AB34: bne         $s6, $zero, L_0040AB40
    if (ctx->r22 != 0) {
        // 0x0040AB38: addiu       $v0, $zero, 0x9
        ctx->r2 = ADD32(0, 0X9);
            goto L_0040AB40;
    }
    // 0x0040AB38: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
    // 0x0040AB3C: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
L_0040AB40:
    // 0x0040AB40: sh          $v0, 0x2($v1)
    MEM_H(0X2, ctx->r3) = ctx->r2;
    // 0x0040AB44: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_0040AB48:
    // 0x0040AB48: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    // 0x0040AB4C: sll         $v0, $s0, 2
    ctx->r2 = S32(ctx->r16 << 2);
    // 0x0040AB50: addu        $v1, $a0, $v0
    ctx->r3 = ADD32(ctx->r4, ctx->r2);
    // 0x0040AB54: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x0040AB58: jal         0x0026D518
    // 0x0040AB5C: sh          $v0, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r2;
    func_0026D518(rdram, ctx);
        goto after_0;
    // 0x0040AB5C: sh          $v0, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r2;
    after_0:
    // 0x0040AB60: addu        $a0, $s7, $zero
    ctx->r4 = ADD32(ctx->r23, 0);
    // 0x0040AB64: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x0040AB68: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x0040AB6C: sw          $v0, 0x66C($s2)
    MEM_W(0X66C, ctx->r18) = ctx->r2;
    // 0x0040AB70: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    // 0x0040AB74: addu        $a1, $fp, $zero
    ctx->r5 = ADD32(ctx->r30, 0);
    // 0x0040AB78: jal         0x00243414
    // 0x0040AB7C: sw          $zero, 0x67C($s2)
    MEM_W(0X67C, ctx->r18) = 0;
    func_00243414(rdram, ctx);
        goto after_1;
    // 0x0040AB7C: sw          $zero, 0x67C($s2)
    MEM_W(0X67C, ctx->r18) = 0;
    after_1:
L_0040AB80:
    // 0x0040AB80: lw          $ra, 0xEC($sp)
    ctx->r31 = MEM_W(ctx->r29, 0XEC);
    // 0x0040AB84: lw          $fp, 0xE8($sp)
    ctx->r30 = MEM_W(ctx->r29, 0XE8);
    // 0x0040AB88: lw          $s7, 0xE4($sp)
    ctx->r23 = MEM_W(ctx->r29, 0XE4);
    // 0x0040AB8C: lw          $s6, 0xE0($sp)
    ctx->r22 = MEM_W(ctx->r29, 0XE0);
    // 0x0040AB90: lw          $s5, 0xDC($sp)
    ctx->r21 = MEM_W(ctx->r29, 0XDC);
    // 0x0040AB94: lw          $s4, 0xD8($sp)
    ctx->r20 = MEM_W(ctx->r29, 0XD8);
    // 0x0040AB98: lw          $s3, 0xD4($sp)
    ctx->r19 = MEM_W(ctx->r29, 0XD4);
    // 0x0040AB9C: lw          $s2, 0xD0($sp)
    ctx->r18 = MEM_W(ctx->r29, 0XD0);
    // 0x0040ABA0: lw          $s1, 0xCC($sp)
    ctx->r17 = MEM_W(ctx->r29, 0XCC);
    // 0x0040ABA4: lw          $s0, 0xC8($sp)
    ctx->r16 = MEM_W(ctx->r29, 0XC8);
    // 0x0040ABA8: ldc1        $f20, 0xF0($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0XF0);
    // 0x0040ABAC: jr          $ra
    // 0x0040ABB0: addiu       $sp, $sp, 0xF8
    ctx->r29 = ADD32(ctx->r29, 0XF8);
    return;
    // 0x0040ABB0: addiu       $sp, $sp, 0xF8
    ctx->r29 = ADD32(ctx->r29, 0XF8);
;}
RECOMP_FUNC void entry_0040AA64(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0040AA64: beq         $s1, $zero, L_0040AAA4
    if (ctx->r17 == 0) {
        // 0x0040AA68: sll         $a0, $s0, 2
        ctx->r4 = S32(ctx->r16 << 2);
            goto L_0040AAA4;
    }
    // 0x0040AA68: sll         $a0, $s0, 2
    ctx->r4 = S32(ctx->r16 << 2);
    // 0x0040AA6C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x0040AA70: sll         $a2, $s0, 2
    ctx->r6 = S32(ctx->r16 << 2);
    // 0x0040AA74: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x0040AA78: addiu       $v1, $sp, 0x18
    ctx->r3 = ADD32(ctx->r29, 0X18);
    // 0x0040AA7C: addu        $a0, $v1, $a0
    ctx->r4 = ADD32(ctx->r3, ctx->r4);
    // 0x0040AA80: addiu       $v0, $zero, 0x1A
    ctx->r2 = ADD32(0, 0X1A);
    // 0x0040AA84: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x0040AA88: addu        $v1, $v1, $a2
    ctx->r3 = ADD32(ctx->r3, ctx->r6);
    // 0x0040AA8C: sh          $v0, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r2;
    // 0x0040AA90: addiu       $v0, $zero, 0x1B
    ctx->r2 = ADD32(0, 0X1B);
    // 0x0040AA94: sh          $a1, 0x2($a0)
    MEM_H(0X2, ctx->r4) = ctx->r5;
    // 0x0040AA98: sh          $v0, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r2;
    // 0x0040AA9C: j           L_0040AB48
    // 0x0040AAA0: sh          $a1, 0x2($v1)
    MEM_H(0X2, ctx->r3) = ctx->r5;
        goto L_0040AB48;
    // 0x0040AAA0: sh          $a1, 0x2($v1)
    MEM_H(0X2, ctx->r3) = ctx->r5;
L_0040AAA4:
    // 0x0040AAA4: beq         $s3, $zero, L_0040AB10
    if (ctx->r19 == 0) {
        // 0x0040AAA8: nop
    
            goto L_0040AB10;
    }
    // 0x0040AAA8: nop

    // 0x0040AAAC: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x0040AAB0: lw          $a0, -0x14C($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X14C);
    // 0x0040AAB4: beq         $a0, $zero, L_0040AAC8
    if (ctx->r4 == 0) {
        // 0x0040AAB8: addu        $v1, $zero, $zero
        ctx->r3 = ADD32(0, 0);
            goto L_0040AAC8;
    }
    // 0x0040AAB8: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
L_0040AABC:
    // 0x0040AABC: lw          $a0, 0x28C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X28C);
    // 0x0040AAC0: bne         $a0, $zero, L_0040AABC
    if (ctx->r4 != 0) {
        // 0x0040AAC4: addiu       $v1, $v1, 0x1
        ctx->r3 = ADD32(ctx->r3, 0X1);
            goto L_0040AABC;
    }
    // 0x0040AAC4: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
L_0040AAC8:
    // 0x0040AAC8: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x0040AACC: beq         $v0, $zero, L_0040AAF0
    if (ctx->r2 == 0) {
        // 0x0040AAD0: sll         $v1, $s0, 2
        ctx->r3 = S32(ctx->r16 << 2);
            goto L_0040AAF0;
    }
    // 0x0040AAD0: sll         $v1, $s0, 2
    ctx->r3 = S32(ctx->r16 << 2);
    // 0x0040AAD4: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x0040AAD8: addiu       $v0, $sp, 0x18
    ctx->r2 = ADD32(ctx->r29, 0X18);
    // 0x0040AADC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x0040AAE0: addiu       $v1, $zero, 0x19
    ctx->r3 = ADD32(0, 0X19);
    // 0x0040AAE4: sh          $v1, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r3;
    // 0x0040AAE8: addiu       $v1, $zero, 0x4
    ctx->r3 = ADD32(0, 0X4);
    // 0x0040AAEC: sh          $v1, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r3;
L_0040AAF0:
    // 0x0040AAF0: sll         $v1, $s0, 2
    ctx->r3 = S32(ctx->r16 << 2);
    // 0x0040AAF4: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x0040AAF8: addiu       $v0, $sp, 0x18
    ctx->r2 = ADD32(ctx->r29, 0X18);
    // 0x0040AAFC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x0040AB00: addiu       $v1, $zero, 0x1D
    ctx->r3 = ADD32(0, 0X1D);
    // 0x0040AB04: sh          $v1, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r3;
    // 0x0040AB08: addiu       $v1, $zero, 0x6
    ctx->r3 = ADD32(0, 0X6);
    // 0x0040AB0C: sh          $v1, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r3;
L_0040AB10:
    // 0x0040AB10: beq         $s4, $zero, L_0040AB48
    if (ctx->r20 == 0) {
        // 0x0040AB14: sll         $v0, $s0, 2
        ctx->r2 = S32(ctx->r16 << 2);
            goto L_0040AB48;
    }
    // 0x0040AB14: sll         $v0, $s0, 2
    ctx->r2 = S32(ctx->r16 << 2);
    // 0x0040AB18: addiu       $v1, $sp, 0x18
    ctx->r3 = ADD32(ctx->r29, 0X18);
    // 0x0040AB1C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x0040AB20: addiu       $v0, $zero, 0x17
    ctx->r2 = ADD32(0, 0X17);
    // 0x0040AB24: beq         $s5, $zero, L_0040AB34
    if (ctx->r21 == 0) {
        // 0x0040AB28: sh          $v0, 0x0($v1)
        MEM_H(0X0, ctx->r3) = ctx->r2;
            goto L_0040AB34;
    }
    // 0x0040AB28: sh          $v0, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r2;
    // 0x0040AB2C: j           L_0040AB40
    // 0x0040AB30: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
        goto L_0040AB40;
    // 0x0040AB30: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
L_0040AB34:
    // 0x0040AB34: bne         $s6, $zero, L_0040AB40
    if (ctx->r22 != 0) {
        // 0x0040AB38: addiu       $v0, $zero, 0x9
        ctx->r2 = ADD32(0, 0X9);
            goto L_0040AB40;
    }
    // 0x0040AB38: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
    // 0x0040AB3C: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
L_0040AB40:
    // 0x0040AB40: sh          $v0, 0x2($v1)
    MEM_H(0X2, ctx->r3) = ctx->r2;
    // 0x0040AB44: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_0040AB48:
    // 0x0040AB48: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    // 0x0040AB4C: sll         $v0, $s0, 2
    ctx->r2 = S32(ctx->r16 << 2);
    // 0x0040AB50: addu        $v1, $a0, $v0
    ctx->r3 = ADD32(ctx->r4, ctx->r2);
    // 0x0040AB54: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x0040AB58: jal         0x0026D518
    // 0x0040AB5C: sh          $v0, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r2;
    func_0026D518(rdram, ctx);
        goto after_0;
    // 0x0040AB5C: sh          $v0, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r2;
    after_0:
    // 0x0040AB60: addu        $a0, $s7, $zero
    ctx->r4 = ADD32(ctx->r23, 0);
    // 0x0040AB64: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x0040AB68: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x0040AB6C: sw          $v0, 0x66C($s2)
    MEM_W(0X66C, ctx->r18) = ctx->r2;
    // 0x0040AB70: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    // 0x0040AB74: addu        $a1, $fp, $zero
    ctx->r5 = ADD32(ctx->r30, 0);
    // 0x0040AB78: jal         0x00243414
    // 0x0040AB7C: sw          $zero, 0x67C($s2)
    MEM_W(0X67C, ctx->r18) = 0;
    func_00243414(rdram, ctx);
        goto after_1;
    // 0x0040AB7C: sw          $zero, 0x67C($s2)
    MEM_W(0X67C, ctx->r18) = 0;
    after_1:
    // 0x0040AB80: lw          $ra, 0xEC($sp)
    ctx->r31 = MEM_W(ctx->r29, 0XEC);
    // 0x0040AB84: lw          $fp, 0xE8($sp)
    ctx->r30 = MEM_W(ctx->r29, 0XE8);
    // 0x0040AB88: lw          $s7, 0xE4($sp)
    ctx->r23 = MEM_W(ctx->r29, 0XE4);
    // 0x0040AB8C: lw          $s6, 0xE0($sp)
    ctx->r22 = MEM_W(ctx->r29, 0XE0);
    // 0x0040AB90: lw          $s5, 0xDC($sp)
    ctx->r21 = MEM_W(ctx->r29, 0XDC);
    // 0x0040AB94: lw          $s4, 0xD8($sp)
    ctx->r20 = MEM_W(ctx->r29, 0XD8);
    // 0x0040AB98: lw          $s3, 0xD4($sp)
    ctx->r19 = MEM_W(ctx->r29, 0XD4);
    // 0x0040AB9C: lw          $s2, 0xD0($sp)
    ctx->r18 = MEM_W(ctx->r29, 0XD0);
    // 0x0040ABA0: lw          $s1, 0xCC($sp)
    ctx->r17 = MEM_W(ctx->r29, 0XCC);
    // 0x0040ABA4: lw          $s0, 0xC8($sp)
    ctx->r16 = MEM_W(ctx->r29, 0XC8);
    // 0x0040ABA8: ldc1        $f20, 0xF0($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0XF0);
    // 0x0040ABAC: jr          $ra
    // 0x0040ABB0: addiu       $sp, $sp, 0xF8
    ctx->r29 = ADD32(ctx->r29, 0XF8);
    return;
    // 0x0040ABB0: addiu       $sp, $sp, 0xF8
    ctx->r29 = ADD32(ctx->r29, 0XF8);
;}
RECOMP_FUNC void entry_0040AB40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0040AB40: sh          $v0, 0x2($v1)
    MEM_H(0X2, ctx->r3) = ctx->r2;
    // 0x0040AB44: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x0040AB48: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    // 0x0040AB4C: sll         $v0, $s0, 2
    ctx->r2 = S32(ctx->r16 << 2);
    // 0x0040AB50: addu        $v1, $a0, $v0
    ctx->r3 = ADD32(ctx->r4, ctx->r2);
    // 0x0040AB54: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x0040AB58: jal         0x0026D518
    // 0x0040AB5C: sh          $v0, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r2;
    func_0026D518(rdram, ctx);
        goto after_0;
    // 0x0040AB5C: sh          $v0, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r2;
    after_0:
    // 0x0040AB60: addu        $a0, $s7, $zero
    ctx->r4 = ADD32(ctx->r23, 0);
    // 0x0040AB64: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x0040AB68: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x0040AB6C: sw          $v0, 0x66C($s2)
    MEM_W(0X66C, ctx->r18) = ctx->r2;
    // 0x0040AB70: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    // 0x0040AB74: addu        $a1, $fp, $zero
    ctx->r5 = ADD32(ctx->r30, 0);
    // 0x0040AB78: jal         0x00243414
    // 0x0040AB7C: sw          $zero, 0x67C($s2)
    MEM_W(0X67C, ctx->r18) = 0;
    func_00243414(rdram, ctx);
        goto after_1;
    // 0x0040AB7C: sw          $zero, 0x67C($s2)
    MEM_W(0X67C, ctx->r18) = 0;
    after_1:
    // 0x0040AB80: lw          $ra, 0xEC($sp)
    ctx->r31 = MEM_W(ctx->r29, 0XEC);
    // 0x0040AB84: lw          $fp, 0xE8($sp)
    ctx->r30 = MEM_W(ctx->r29, 0XE8);
    // 0x0040AB88: lw          $s7, 0xE4($sp)
    ctx->r23 = MEM_W(ctx->r29, 0XE4);
    // 0x0040AB8C: lw          $s6, 0xE0($sp)
    ctx->r22 = MEM_W(ctx->r29, 0XE0);
    // 0x0040AB90: lw          $s5, 0xDC($sp)
    ctx->r21 = MEM_W(ctx->r29, 0XDC);
    // 0x0040AB94: lw          $s4, 0xD8($sp)
    ctx->r20 = MEM_W(ctx->r29, 0XD8);
    // 0x0040AB98: lw          $s3, 0xD4($sp)
    ctx->r19 = MEM_W(ctx->r29, 0XD4);
    // 0x0040AB9C: lw          $s2, 0xD0($sp)
    ctx->r18 = MEM_W(ctx->r29, 0XD0);
    // 0x0040ABA0: lw          $s1, 0xCC($sp)
    ctx->r17 = MEM_W(ctx->r29, 0XCC);
    // 0x0040ABA4: lw          $s0, 0xC8($sp)
    ctx->r16 = MEM_W(ctx->r29, 0XC8);
    // 0x0040ABA8: ldc1        $f20, 0xF0($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0XF0);
    // 0x0040ABAC: jr          $ra
    // 0x0040ABB0: addiu       $sp, $sp, 0xF8
    ctx->r29 = ADD32(ctx->r29, 0XF8);
    return;
    // 0x0040ABB0: addiu       $sp, $sp, 0xF8
    ctx->r29 = ADD32(ctx->r29, 0XF8);
;}
RECOMP_FUNC void entry_0040AB48(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0040AB48: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    // 0x0040AB4C: sll         $v0, $s0, 2
    ctx->r2 = S32(ctx->r16 << 2);
    // 0x0040AB50: addu        $v1, $a0, $v0
    ctx->r3 = ADD32(ctx->r4, ctx->r2);
    // 0x0040AB54: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x0040AB58: jal         0x0026D518
    // 0x0040AB5C: sh          $v0, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r2;
    func_0026D518(rdram, ctx);
        goto after_0;
    // 0x0040AB5C: sh          $v0, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r2;
    after_0:
    // 0x0040AB60: addu        $a0, $s7, $zero
    ctx->r4 = ADD32(ctx->r23, 0);
    // 0x0040AB64: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x0040AB68: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x0040AB6C: sw          $v0, 0x66C($s2)
    MEM_W(0X66C, ctx->r18) = ctx->r2;
    // 0x0040AB70: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    // 0x0040AB74: addu        $a1, $fp, $zero
    ctx->r5 = ADD32(ctx->r30, 0);
    // 0x0040AB78: jal         0x00243414
    // 0x0040AB7C: sw          $zero, 0x67C($s2)
    MEM_W(0X67C, ctx->r18) = 0;
    func_00243414(rdram, ctx);
        goto after_1;
    // 0x0040AB7C: sw          $zero, 0x67C($s2)
    MEM_W(0X67C, ctx->r18) = 0;
    after_1:
    // 0x0040AB80: lw          $ra, 0xEC($sp)
    ctx->r31 = MEM_W(ctx->r29, 0XEC);
    // 0x0040AB84: lw          $fp, 0xE8($sp)
    ctx->r30 = MEM_W(ctx->r29, 0XE8);
    // 0x0040AB88: lw          $s7, 0xE4($sp)
    ctx->r23 = MEM_W(ctx->r29, 0XE4);
    // 0x0040AB8C: lw          $s6, 0xE0($sp)
    ctx->r22 = MEM_W(ctx->r29, 0XE0);
    // 0x0040AB90: lw          $s5, 0xDC($sp)
    ctx->r21 = MEM_W(ctx->r29, 0XDC);
    // 0x0040AB94: lw          $s4, 0xD8($sp)
    ctx->r20 = MEM_W(ctx->r29, 0XD8);
    // 0x0040AB98: lw          $s3, 0xD4($sp)
    ctx->r19 = MEM_W(ctx->r29, 0XD4);
    // 0x0040AB9C: lw          $s2, 0xD0($sp)
    ctx->r18 = MEM_W(ctx->r29, 0XD0);
    // 0x0040ABA0: lw          $s1, 0xCC($sp)
    ctx->r17 = MEM_W(ctx->r29, 0XCC);
    // 0x0040ABA4: lw          $s0, 0xC8($sp)
    ctx->r16 = MEM_W(ctx->r29, 0XC8);
    // 0x0040ABA8: ldc1        $f20, 0xF0($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0XF0);
    // 0x0040ABAC: jr          $ra
    // 0x0040ABB0: addiu       $sp, $sp, 0xF8
    ctx->r29 = ADD32(ctx->r29, 0XF8);
    return;
    // 0x0040ABB0: addiu       $sp, $sp, 0xF8
    ctx->r29 = ADD32(ctx->r29, 0XF8);
;}
RECOMP_FUNC void entry_0040B904(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0040B904: lw          $ra, 0xA8($sp)
    ctx->r31 = MEM_W(ctx->r29, 0XA8);
    // 0x0040B908: lw          $s1, 0xA4($sp)
    ctx->r17 = MEM_W(ctx->r29, 0XA4);
    // 0x0040B90C: lw          $s0, 0xA0($sp)
    ctx->r16 = MEM_W(ctx->r29, 0XA0);
    // 0x0040B910: jr          $ra
    // 0x0040B914: addiu       $sp, $sp, 0xB0
    ctx->r29 = ADD32(ctx->r29, 0XB0);
    return;
    // 0x0040B914: addiu       $sp, $sp, 0xB0
    ctx->r29 = ADD32(ctx->r29, 0XB0);
;}
RECOMP_FUNC void entry_0040CA14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_0040C8C8:
    // 0x0040CA14: jal         0x00243414
    // 0x0040CA18: nop

    func_00243414(rdram, ctx);
        goto after_0;
L_0040C988:
    // 0x0040CA18: nop

    after_0:
    // 0x0040CA1C: lw          $v1, 0x18($s4)
    ctx->r3 = MEM_W(ctx->r20, 0X18);
    // 0x0040CA20: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x0040CA24: slt         $v0, $s0, $v1
    ctx->r2 = SIGNED(ctx->r16) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x0040CA28: bne         $v0, $zero, L_0040C988
    if (ctx->r2 != 0) {
        // 0x0040CA2C: addiu       $s1, $s1, 0x4
        ctx->r17 = ADD32(ctx->r17, 0X4);
            goto L_0040C988;
    }
    // 0x0040CA2C: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    // 0x0040CA30: lw          $v1, 0x2C($s4)
    ctx->r3 = MEM_W(ctx->r20, 0X2C);
    // 0x0040CA34: blez        $v1, L_0040CAC4
    if (SIGNED(ctx->r3) <= 0) {
        // 0x0040CA38: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_0040CAC4;
    }
    // 0x0040CA38: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x0040CA3C: addu        $s1, $s4, $zero
    ctx->r17 = ADD32(ctx->r20, 0);
L_0040CA40:
    // 0x0040CA40: lw          $v0, 0x14($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X14);
    // 0x0040CA44: addu        $v0, $s0, $v0
    ctx->r2 = ADD32(ctx->r16, ctx->r2);
    // 0x0040CA48: div         $zero, $v0, $v1
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r3))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r3)));
    // 0x0040CA4C: bne         $v1, $zero, L_0040CA58
    if (ctx->r3 != 0) {
        // 0x0040CA50: nop
    
            goto L_0040CA58;
    }
    // 0x0040CA50: nop

    // 0x0040CA54: break       7
    do_break(4246100);
L_0040CA58:
    // 0x0040CA58: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x0040CA5C: bne         $v1, $at, L_0040CA70
    if (ctx->r3 != ctx->r1) {
        // 0x0040CA60: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_0040CA70;
    }
    // 0x0040CA60: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x0040CA64: bne         $v0, $at, L_0040CA70
    if (ctx->r2 != ctx->r1) {
        // 0x0040CA68: nop
    
            goto L_0040CA70;
    }
    // 0x0040CA68: nop

    // 0x0040CA6C: break       6
    do_break(4246124);
L_0040CA70:
    // 0x0040CA70: mfhi        $v1
    ctx->r3 = hi;
    // 0x0040CA74: addiu       $v0, $v1, 0x8
    ctx->r2 = ADD32(ctx->r3, 0X8);
    // 0x0040CA78: srav        $v0, $s5, $v0
    ctx->r2 = S32(SIGNED(ctx->r21) >> (ctx->r2 & 31));
    // 0x0040CA7C: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x0040CA80: beq         $v0, $zero, L_0040CAB0
    if (ctx->r2 == 0) {
        // 0x0040CA84: nop
    
            goto L_0040CAB0;
    }
    // 0x0040CA84: nop

    // 0x0040CA88: lw          $v0, 0x514($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X514);
    // 0x0040CA8C: beql        $v0, $zero, L_0040CA94
    if (ctx->r2 == 0) {
        // 0x0040CA90: addu        $s2, $zero, $zero
        ctx->r18 = ADD32(0, 0);
            goto L_0040CA94;
    }
    goto skip_0;
    // 0x0040CA90: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    skip_0:
L_0040CA94:
    // 0x0040CA94: lw          $a0, 0x30($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X30);
    // 0x0040CA98: lw          $v0, 0x144($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X144);
    // 0x0040CA9C: beq         $v0, $zero, L_0040CAB0
    if (ctx->r2 == 0) {
        // 0x0040CAA0: addiu       $a1, $a0, 0x140
        ctx->r5 = ADD32(ctx->r4, 0X140);
            goto L_0040CAB0;
    }
    // 0x0040CAA0: addiu       $a1, $a0, 0x140
    ctx->r5 = ADD32(ctx->r4, 0X140);
    // 0x0040CAA4: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    // 0x0040CAA8: jal         0x00243414
    // 0x0040CAAC: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    func_00243414(rdram, ctx);
        goto after_1;
    // 0x0040CAAC: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_1:
L_0040CAB0:
    // 0x0040CAB0: lw          $v1, 0x2C($s4)
    ctx->r3 = MEM_W(ctx->r20, 0X2C);
    // 0x0040CAB4: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x0040CAB8: slt         $v0, $s0, $v1
    ctx->r2 = SIGNED(ctx->r16) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x0040CABC: bne         $v0, $zero, L_0040CA40
    if (ctx->r2 != 0) {
        // 0x0040CAC0: addiu       $s1, $s1, 0x4
        ctx->r17 = ADD32(ctx->r17, 0X4);
            goto L_0040CA40;
    }
    // 0x0040CAC0: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
L_0040CAC4:
    // 0x0040CAC4: lw          $v0, 0x4($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X4);
    // 0x0040CAC8: lw          $v1, 0x0($s3)
    ctx->r3 = MEM_W(ctx->r19, 0X0);
    // 0x0040CACC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x0040CAD0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x0040CAD4: lw          $v1, 0x0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X0);
    // 0x0040CAD8: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x0040CADC: bne         $v1, $v0, L_0040CAF8
    if (ctx->r3 != ctx->r2) {
        // 0x0040CAE0: nop
    
            goto L_0040CAF8;
    }
    // 0x0040CAE0: nop

    // 0x0040CAE4: lw          $v0, 0x14($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X14);
    // 0x0040CAE8: lw          $v1, 0x10($s3)
    ctx->r3 = MEM_W(ctx->r19, 0X10);
    // 0x0040CAEC: sw          $zero, 0x4($s3)
    MEM_W(0X4, ctx->r19) = 0;
    // 0x0040CAF0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x0040CAF4: sw          $v0, 0x14($s3)
    MEM_W(0X14, ctx->r19) = ctx->r2;
L_0040CAF8:
    // 0x0040CAF8: bne         $s2, $zero, L_0040C8C8
    if (ctx->r18 != 0) {
        // 0x0040CAFC: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_0040C8C8;
    }
    // 0x0040CAFC: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x0040CB00: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x0040CB04: lw          $s5, 0x24($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X24);
    // 0x0040CB08: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x0040CB0C: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x0040CB10: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x0040CB14: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x0040CB18: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0040CB1C: ldc1        $f20, 0x30($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X30);
    // 0x0040CB20: jr          $ra
    // 0x0040CB24: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x0040CB24: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void entry_0040D3F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
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
RECOMP_FUNC void entry_0040D70C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0040D70C: lui         $v1, 0xEFFF
    ctx->r3 = S32(0XEFFF << 16);
    // 0x0040D710: sw          $zero, 0x10C($a1)
    MEM_W(0X10C, ctx->r5) = 0;
    // 0x0040D714: sw          $zero, 0x118($a1)
    MEM_W(0X118, ctx->r5) = 0;
    // 0x0040D718: sw          $zero, 0x11C($a1)
    MEM_W(0X11C, ctx->r5) = 0;
    // 0x0040D71C: sw          $zero, 0x4($a1)
    MEM_W(0X4, ctx->r5) = 0;
    // 0x0040D720: lw          $v0, 0xD4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XD4);
    // 0x0040D724: ori         $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 | 0XFFFF;
    // 0x0040D728: and         $a0, $v0, $v1
    ctx->r4 = ctx->r2 & ctx->r3;
    // 0x0040D72C: lhu         $v1, 0xB8($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0XB8);
    // 0x0040D730: addiu       $v0, $zero, 0x456
    ctx->r2 = ADD32(0, 0X456);
    // 0x0040D734: bne         $v1, $v0, L_0040D748
    if (ctx->r3 != ctx->r2) {
        // 0x0040D738: sw          $a0, 0xD4($s0)
        MEM_W(0XD4, ctx->r16) = ctx->r4;
            goto L_0040D748;
    }
    // 0x0040D738: sw          $a0, 0xD4($s0)
    MEM_W(0XD4, ctx->r16) = ctx->r4;
    // 0x0040D73C: lui         $v0, 0x2
    ctx->r2 = S32(0X2 << 16);
    // 0x0040D740: j           L_0040D754
    // 0x0040D744: or          $v0, $a0, $v0
    ctx->r2 = ctx->r4 | ctx->r2;
        goto L_0040D754;
    // 0x0040D744: or          $v0, $a0, $v0
    ctx->r2 = ctx->r4 | ctx->r2;
L_0040D748:
    // 0x0040D748: lui         $v0, 0xFFFD
    ctx->r2 = S32(0XFFFD << 16);
    // 0x0040D74C: ori         $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 | 0XFFFF;
    // 0x0040D750: and         $v0, $a0, $v0
    ctx->r2 = ctx->r4 & ctx->r2;
L_0040D754:
    // 0x0040D754: sw          $v0, 0xD4($s0)
    MEM_W(0XD4, ctx->r16) = ctx->r2;
    // 0x0040D758: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x0040D75C: lw          $v0, -0x6770($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X6770);
    // 0x0040D760: beq         $v0, $zero, L_0040D77C
    if (ctx->r2 == 0) {
        // 0x0040D764: lui         $v1, 0x6000
        ctx->r3 = S32(0X6000 << 16);
            goto L_0040D77C;
    }
    // 0x0040D764: lui         $v1, 0x6000
    ctx->r3 = S32(0X6000 << 16);
    // 0x0040D768: sw          $v0, 0x80($a1)
    MEM_W(0X80, ctx->r5) = ctx->r2;
    // 0x0040D76C: sw          $v0, 0x88($a1)
    MEM_W(0X88, ctx->r5) = ctx->r2;
    // 0x0040D770: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x0040D774: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x0040D778: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
L_0040D77C:
    // 0x0040D77C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0040D780: jal         0x00243414
    // 0x0040D784: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_00243414(rdram, ctx);
        goto after_0;
    // 0x0040D784: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_0:
    // 0x0040D788: lw          $v0, 0xD4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XD4);
    // 0x0040D78C: addiu       $v1, $zero, -0x101
    ctx->r3 = ADD32(0, -0X101);
    // 0x0040D790: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x0040D794: sw          $v0, 0xD4($s0)
    MEM_W(0XD4, ctx->r16) = ctx->r2;
    // 0x0040D798: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x0040D79C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0040D7A0: jr          $ra
    // 0x0040D7A4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0040D7A4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void entry_0040D754(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0040D754: sw          $v0, 0xD4($s0)
    MEM_W(0XD4, ctx->r16) = ctx->r2;
    // 0x0040D758: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x0040D75C: lw          $v0, -0x6770($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X6770);
    // 0x0040D760: beq         $v0, $zero, L_0040D77C
    if (ctx->r2 == 0) {
        // 0x0040D764: lui         $v1, 0x6000
        ctx->r3 = S32(0X6000 << 16);
            goto L_0040D77C;
    }
    // 0x0040D764: lui         $v1, 0x6000
    ctx->r3 = S32(0X6000 << 16);
    // 0x0040D768: sw          $v0, 0x80($a1)
    MEM_W(0X80, ctx->r5) = ctx->r2;
    // 0x0040D76C: sw          $v0, 0x88($a1)
    MEM_W(0X88, ctx->r5) = ctx->r2;
    // 0x0040D770: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x0040D774: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x0040D778: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
L_0040D77C:
    // 0x0040D77C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0040D780: jal         0x00243414
    // 0x0040D784: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_00243414(rdram, ctx);
        goto after_0;
    // 0x0040D784: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_0:
    // 0x0040D788: lw          $v0, 0xD4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XD4);
    // 0x0040D78C: addiu       $v1, $zero, -0x101
    ctx->r3 = ADD32(0, -0X101);
    // 0x0040D790: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x0040D794: sw          $v0, 0xD4($s0)
    MEM_W(0XD4, ctx->r16) = ctx->r2;
    // 0x0040D798: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x0040D79C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0040D7A0: jr          $ra
    // 0x0040D7A4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0040D7A4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void entry_0040D814(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0040D814: lui         $v1, 0xEFFF
    ctx->r3 = S32(0XEFFF << 16);
    // 0x0040D818: sw          $zero, 0x10C($a1)
    MEM_W(0X10C, ctx->r5) = 0;
    // 0x0040D81C: sw          $zero, 0x118($a1)
    MEM_W(0X118, ctx->r5) = 0;
    // 0x0040D820: sw          $zero, 0x11C($a1)
    MEM_W(0X11C, ctx->r5) = 0;
    // 0x0040D824: sw          $zero, 0x4($a1)
    MEM_W(0X4, ctx->r5) = 0;
    // 0x0040D828: lw          $v0, 0xD4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XD4);
    // 0x0040D82C: ori         $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 | 0XFFFF;
    // 0x0040D830: and         $a0, $v0, $v1
    ctx->r4 = ctx->r2 & ctx->r3;
    // 0x0040D834: lhu         $v1, 0xB8($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0XB8);
    // 0x0040D838: addiu       $v0, $zero, 0x456
    ctx->r2 = ADD32(0, 0X456);
    // 0x0040D83C: bne         $v1, $v0, L_0040D850
    if (ctx->r3 != ctx->r2) {
        // 0x0040D840: sw          $a0, 0xD4($s0)
        MEM_W(0XD4, ctx->r16) = ctx->r4;
            goto L_0040D850;
    }
    // 0x0040D840: sw          $a0, 0xD4($s0)
    MEM_W(0XD4, ctx->r16) = ctx->r4;
    // 0x0040D844: lui         $v0, 0x2
    ctx->r2 = S32(0X2 << 16);
    // 0x0040D848: j           L_0040D85C
    // 0x0040D84C: or          $v0, $a0, $v0
    ctx->r2 = ctx->r4 | ctx->r2;
        goto L_0040D85C;
    // 0x0040D84C: or          $v0, $a0, $v0
    ctx->r2 = ctx->r4 | ctx->r2;
L_0040D850:
    // 0x0040D850: lui         $v0, 0xFFFD
    ctx->r2 = S32(0XFFFD << 16);
    // 0x0040D854: ori         $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 | 0XFFFF;
    // 0x0040D858: and         $v0, $a0, $v0
    ctx->r2 = ctx->r4 & ctx->r2;
L_0040D85C:
    // 0x0040D85C: sw          $v0, 0xD4($s0)
    MEM_W(0XD4, ctx->r16) = ctx->r2;
    // 0x0040D860: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x0040D864: lw          $v0, -0x6770($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X6770);
    // 0x0040D868: beq         $v0, $zero, L_0040D884
    if (ctx->r2 == 0) {
        // 0x0040D86C: lui         $v1, 0x6000
        ctx->r3 = S32(0X6000 << 16);
            goto L_0040D884;
    }
    // 0x0040D86C: lui         $v1, 0x6000
    ctx->r3 = S32(0X6000 << 16);
    // 0x0040D870: sw          $v0, 0x80($a1)
    MEM_W(0X80, ctx->r5) = ctx->r2;
    // 0x0040D874: sw          $v0, 0x88($a1)
    MEM_W(0X88, ctx->r5) = ctx->r2;
    // 0x0040D878: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x0040D87C: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x0040D880: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
L_0040D884:
    // 0x0040D884: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0040D888: jal         0x00243414
    // 0x0040D88C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_00243414(rdram, ctx);
        goto after_0;
    // 0x0040D88C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_0:
    // 0x0040D890: lw          $v0, 0xD4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XD4);
    // 0x0040D894: addiu       $v1, $zero, -0x101
    ctx->r3 = ADD32(0, -0X101);
    // 0x0040D898: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x0040D89C: sw          $v0, 0xD4($s0)
    MEM_W(0XD4, ctx->r16) = ctx->r2;
    // 0x0040D8A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x0040D8A4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0040D8A8: jr          $ra
    // 0x0040D8AC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0040D8AC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void entry_0040D85C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0040D85C: sw          $v0, 0xD4($s0)
    MEM_W(0XD4, ctx->r16) = ctx->r2;
    // 0x0040D860: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x0040D864: lw          $v0, -0x6770($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X6770);
    // 0x0040D868: beq         $v0, $zero, L_0040D884
    if (ctx->r2 == 0) {
        // 0x0040D86C: lui         $v1, 0x6000
        ctx->r3 = S32(0X6000 << 16);
            goto L_0040D884;
    }
    // 0x0040D86C: lui         $v1, 0x6000
    ctx->r3 = S32(0X6000 << 16);
    // 0x0040D870: sw          $v0, 0x80($a1)
    MEM_W(0X80, ctx->r5) = ctx->r2;
    // 0x0040D874: sw          $v0, 0x88($a1)
    MEM_W(0X88, ctx->r5) = ctx->r2;
    // 0x0040D878: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x0040D87C: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x0040D880: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
L_0040D884:
    // 0x0040D884: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0040D888: jal         0x00243414
    // 0x0040D88C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_00243414(rdram, ctx);
        goto after_0;
    // 0x0040D88C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_0:
    // 0x0040D890: lw          $v0, 0xD4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XD4);
    // 0x0040D894: addiu       $v1, $zero, -0x101
    ctx->r3 = ADD32(0, -0X101);
    // 0x0040D898: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x0040D89C: sw          $v0, 0xD4($s0)
    MEM_W(0XD4, ctx->r16) = ctx->r2;
    // 0x0040D8A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x0040D8A4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0040D8A8: jr          $ra
    // 0x0040D8AC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0040D8AC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void entry_0040D91C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0040D91C: lui         $v1, 0xEFFF
    ctx->r3 = S32(0XEFFF << 16);
    // 0x0040D920: sw          $zero, 0x10C($a1)
    MEM_W(0X10C, ctx->r5) = 0;
    // 0x0040D924: sw          $zero, 0x118($a1)
    MEM_W(0X118, ctx->r5) = 0;
    // 0x0040D928: sw          $zero, 0x11C($a1)
    MEM_W(0X11C, ctx->r5) = 0;
    // 0x0040D92C: sw          $zero, 0x4($a1)
    MEM_W(0X4, ctx->r5) = 0;
    // 0x0040D930: lw          $v0, 0xD4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XD4);
    // 0x0040D934: ori         $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 | 0XFFFF;
    // 0x0040D938: and         $a0, $v0, $v1
    ctx->r4 = ctx->r2 & ctx->r3;
    // 0x0040D93C: lhu         $v1, 0xB8($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0XB8);
    // 0x0040D940: addiu       $v0, $zero, 0x456
    ctx->r2 = ADD32(0, 0X456);
    // 0x0040D944: bne         $v1, $v0, L_0040D958
    if (ctx->r3 != ctx->r2) {
        // 0x0040D948: sw          $a0, 0xD4($s0)
        MEM_W(0XD4, ctx->r16) = ctx->r4;
            goto L_0040D958;
    }
    // 0x0040D948: sw          $a0, 0xD4($s0)
    MEM_W(0XD4, ctx->r16) = ctx->r4;
    // 0x0040D94C: lui         $v0, 0x2
    ctx->r2 = S32(0X2 << 16);
    // 0x0040D950: j           L_0040D964
    // 0x0040D954: or          $v0, $a0, $v0
    ctx->r2 = ctx->r4 | ctx->r2;
        goto L_0040D964;
    // 0x0040D954: or          $v0, $a0, $v0
    ctx->r2 = ctx->r4 | ctx->r2;
L_0040D958:
    // 0x0040D958: lui         $v0, 0xFFFD
    ctx->r2 = S32(0XFFFD << 16);
    // 0x0040D95C: ori         $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 | 0XFFFF;
    // 0x0040D960: and         $v0, $a0, $v0
    ctx->r2 = ctx->r4 & ctx->r2;
L_0040D964:
    // 0x0040D964: sw          $v0, 0xD4($s0)
    MEM_W(0XD4, ctx->r16) = ctx->r2;
    // 0x0040D968: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x0040D96C: lw          $v0, -0x6770($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X6770);
    // 0x0040D970: beq         $v0, $zero, L_0040D98C
    if (ctx->r2 == 0) {
        // 0x0040D974: lui         $v1, 0x6000
        ctx->r3 = S32(0X6000 << 16);
            goto L_0040D98C;
    }
    // 0x0040D974: lui         $v1, 0x6000
    ctx->r3 = S32(0X6000 << 16);
    // 0x0040D978: sw          $v0, 0x80($a1)
    MEM_W(0X80, ctx->r5) = ctx->r2;
    // 0x0040D97C: sw          $v0, 0x88($a1)
    MEM_W(0X88, ctx->r5) = ctx->r2;
    // 0x0040D980: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x0040D984: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x0040D988: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
L_0040D98C:
    // 0x0040D98C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0040D990: jal         0x00243414
    // 0x0040D994: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_00243414(rdram, ctx);
        goto after_0;
    // 0x0040D994: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_0:
    // 0x0040D998: lw          $v0, 0xD4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XD4);
    // 0x0040D99C: addiu       $v1, $zero, -0x101
    ctx->r3 = ADD32(0, -0X101);
    // 0x0040D9A0: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x0040D9A4: sw          $v0, 0xD4($s0)
    MEM_W(0XD4, ctx->r16) = ctx->r2;
    // 0x0040D9A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x0040D9AC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0040D9B0: jr          $ra
    // 0x0040D9B4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0040D9B4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void entry_0040D964(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0040D964: sw          $v0, 0xD4($s0)
    MEM_W(0XD4, ctx->r16) = ctx->r2;
    // 0x0040D968: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x0040D96C: lw          $v0, -0x6770($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X6770);
    // 0x0040D970: beq         $v0, $zero, L_0040D98C
    if (ctx->r2 == 0) {
        // 0x0040D974: lui         $v1, 0x6000
        ctx->r3 = S32(0X6000 << 16);
            goto L_0040D98C;
    }
    // 0x0040D974: lui         $v1, 0x6000
    ctx->r3 = S32(0X6000 << 16);
    // 0x0040D978: sw          $v0, 0x80($a1)
    MEM_W(0X80, ctx->r5) = ctx->r2;
    // 0x0040D97C: sw          $v0, 0x88($a1)
    MEM_W(0X88, ctx->r5) = ctx->r2;
    // 0x0040D980: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x0040D984: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x0040D988: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
L_0040D98C:
    // 0x0040D98C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0040D990: jal         0x00243414
    // 0x0040D994: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_00243414(rdram, ctx);
        goto after_0;
    // 0x0040D994: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_0:
    // 0x0040D998: lw          $v0, 0xD4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XD4);
    // 0x0040D99C: addiu       $v1, $zero, -0x101
    ctx->r3 = ADD32(0, -0X101);
    // 0x0040D9A0: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x0040D9A4: sw          $v0, 0xD4($s0)
    MEM_W(0XD4, ctx->r16) = ctx->r2;
    // 0x0040D9A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x0040D9AC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0040D9B0: jr          $ra
    // 0x0040D9B4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0040D9B4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void entry_0040DA7C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0040DA7C: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x0040DA80: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x0040DA84: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0040DA88: jr          $ra
    // 0x0040DA8C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x0040DA8C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void entry_0040DED4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0040DED4: lui         $v1, 0xEFFF
    ctx->r3 = S32(0XEFFF << 16);
    // 0x0040DED8: sw          $zero, 0x10C($a1)
    MEM_W(0X10C, ctx->r5) = 0;
    // 0x0040DEDC: sw          $zero, 0x118($a1)
    MEM_W(0X118, ctx->r5) = 0;
    // 0x0040DEE0: sw          $zero, 0x11C($a1)
    MEM_W(0X11C, ctx->r5) = 0;
    // 0x0040DEE4: sw          $zero, 0x4($a1)
    MEM_W(0X4, ctx->r5) = 0;
    // 0x0040DEE8: lw          $v0, 0xD4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XD4);
    // 0x0040DEEC: ori         $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 | 0XFFFF;
    // 0x0040DEF0: and         $a0, $v0, $v1
    ctx->r4 = ctx->r2 & ctx->r3;
    // 0x0040DEF4: lhu         $v1, 0xB8($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0XB8);
    // 0x0040DEF8: addiu       $v0, $zero, 0x456
    ctx->r2 = ADD32(0, 0X456);
    // 0x0040DEFC: bne         $v1, $v0, L_0040DF10
    if (ctx->r3 != ctx->r2) {
        // 0x0040DF00: sw          $a0, 0xD4($s0)
        MEM_W(0XD4, ctx->r16) = ctx->r4;
            goto L_0040DF10;
    }
    // 0x0040DF00: sw          $a0, 0xD4($s0)
    MEM_W(0XD4, ctx->r16) = ctx->r4;
    // 0x0040DF04: lui         $v0, 0x2
    ctx->r2 = S32(0X2 << 16);
    // 0x0040DF08: j           L_0040DF1C
    // 0x0040DF0C: or          $v0, $a0, $v0
    ctx->r2 = ctx->r4 | ctx->r2;
        goto L_0040DF1C;
    // 0x0040DF0C: or          $v0, $a0, $v0
    ctx->r2 = ctx->r4 | ctx->r2;
L_0040DF10:
    // 0x0040DF10: lui         $v0, 0xFFFD
    ctx->r2 = S32(0XFFFD << 16);
    // 0x0040DF14: ori         $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 | 0XFFFF;
    // 0x0040DF18: and         $v0, $a0, $v0
    ctx->r2 = ctx->r4 & ctx->r2;
L_0040DF1C:
    // 0x0040DF1C: sw          $v0, 0xD4($s0)
    MEM_W(0XD4, ctx->r16) = ctx->r2;
    // 0x0040DF20: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x0040DF24: lw          $v0, -0x6770($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X6770);
    // 0x0040DF28: beq         $v0, $zero, L_0040DF44
    if (ctx->r2 == 0) {
        // 0x0040DF2C: lui         $v1, 0x6000
        ctx->r3 = S32(0X6000 << 16);
            goto L_0040DF44;
    }
    // 0x0040DF2C: lui         $v1, 0x6000
    ctx->r3 = S32(0X6000 << 16);
    // 0x0040DF30: sw          $v0, 0x80($a1)
    MEM_W(0X80, ctx->r5) = ctx->r2;
    // 0x0040DF34: sw          $v0, 0x88($a1)
    MEM_W(0X88, ctx->r5) = ctx->r2;
    // 0x0040DF38: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x0040DF3C: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x0040DF40: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
L_0040DF44:
    // 0x0040DF44: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0040DF48: jal         0x00243414
    // 0x0040DF4C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_00243414(rdram, ctx);
        goto after_0;
    // 0x0040DF4C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_0:
    // 0x0040DF50: lw          $v0, 0xD4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XD4);
    // 0x0040DF54: addiu       $v1, $zero, -0x101
    ctx->r3 = ADD32(0, -0X101);
    // 0x0040DF58: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x0040DF5C: sw          $v0, 0xD4($s0)
    MEM_W(0XD4, ctx->r16) = ctx->r2;
    // 0x0040DF60: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x0040DF64: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0040DF68: jr          $ra
    // 0x0040DF6C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0040DF6C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void entry_0040DF1C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0040DF1C: sw          $v0, 0xD4($s0)
    MEM_W(0XD4, ctx->r16) = ctx->r2;
    // 0x0040DF20: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x0040DF24: lw          $v0, -0x6770($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X6770);
    // 0x0040DF28: beq         $v0, $zero, L_0040DF44
    if (ctx->r2 == 0) {
        // 0x0040DF2C: lui         $v1, 0x6000
        ctx->r3 = S32(0X6000 << 16);
            goto L_0040DF44;
    }
    // 0x0040DF2C: lui         $v1, 0x6000
    ctx->r3 = S32(0X6000 << 16);
    // 0x0040DF30: sw          $v0, 0x80($a1)
    MEM_W(0X80, ctx->r5) = ctx->r2;
    // 0x0040DF34: sw          $v0, 0x88($a1)
    MEM_W(0X88, ctx->r5) = ctx->r2;
    // 0x0040DF38: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x0040DF3C: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x0040DF40: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
L_0040DF44:
    // 0x0040DF44: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0040DF48: jal         0x00243414
    // 0x0040DF4C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_00243414(rdram, ctx);
        goto after_0;
    // 0x0040DF4C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_0:
    // 0x0040DF50: lw          $v0, 0xD4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XD4);
    // 0x0040DF54: addiu       $v1, $zero, -0x101
    ctx->r3 = ADD32(0, -0X101);
    // 0x0040DF58: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x0040DF5C: sw          $v0, 0xD4($s0)
    MEM_W(0XD4, ctx->r16) = ctx->r2;
    // 0x0040DF60: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x0040DF64: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0040DF68: jr          $ra
    // 0x0040DF6C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0040DF6C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void entry_0040E1D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0040E1D8: mtc1        $zero, $f21
    ctx->f_odd[(21 - 1) * 2] = 0;
    // 0x0040E1DC: mov.s       $f20, $f21
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 21);
    ctx->f20.fl = ctx->f21.fl;
    // 0x0040E1E0: lwc1        $f0, 0x50($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X50);
    // 0x0040E1E4: lwc1        $f1, 0x98($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X98);
    // 0x0040E1E8: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x0040E1EC: addiu       $a0, $sp, 0xA0
    ctx->r4 = ADD32(ctx->r29, 0XA0);
    // 0x0040E1F0: jal         0x00210EF0
    // 0x0040E1F4: swc1        $f0, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->f0.u32l;
    func_00210EF0(rdram, ctx);
        goto after_0;
    // 0x0040E1F4: swc1        $f0, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->f0.u32l;
    after_0:
    // 0x0040E1F8: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0040E1FC: lwc1        $f0, 0x928($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X928);
    // 0x0040E200: lwc1        $f3, 0x20($sp)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x0040E204: c.lt.s      $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f20.fl < ctx->f0.fl;
    // 0x0040E208: nop

    // 0x0040E20C: bc1f        L_0040E250
    if (!c1cs) {
        // 0x0040E210: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_0040E250;
    }
    // 0x0040E210: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0040E214: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0040E218: lwc1        $f0, 0x92C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X92C);
    // 0x0040E21C: mul.s       $f0, $f20, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f20.fl, ctx->f0.fl);
    // 0x0040E220: lwc1        $f1, 0xA0($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0XA0);
    // 0x0040E224: add.s       $f2, $f1, $f3
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f2.fl = ctx->f1.fl + ctx->f3.fl;
    // 0x0040E228: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x0040E22C: nop

    // 0x0040E230: bc1tl       L_0040E250
    if (c1cs) {
        // 0x0040E234: sub.s       $f3, $f0, $f1
        CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f3.fl = ctx->f0.fl - ctx->f1.fl;
            goto L_0040E250;
    }
    goto skip_0;
    // 0x0040E234: sub.s       $f3, $f0, $f1
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f3.fl = ctx->f0.fl - ctx->f1.fl;
    skip_0:
    // 0x0040E238: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x0040E23C: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x0040E240: nop

    // 0x0040E244: bc1f        L_0040E250
    if (!c1cs) {
        // 0x0040E248: nop
    
            goto L_0040E250;
    }
    // 0x0040E248: nop

    // 0x0040E24C: sub.s       $f3, $f0, $f1
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f3.fl = ctx->f0.fl - ctx->f1.fl;
L_0040E250:
    // 0x0040E250: mfc1        $a2, $f21
    ctx->r6 = (int32_t)ctx->f_odd[(21 - 1) * 2];
    // 0x0040E254: mfc1        $a3, $f3
    ctx->r7 = (int32_t)ctx->f_odd[(3 - 1) * 2];
    // 0x0040E258: jal         0x00245BAC
    // 0x0040E25C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_00245BAC(rdram, ctx);
        goto after_1;
    // 0x0040E25C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_1:
    // 0x0040E260: lw          $ra, 0xB0($sp)
    ctx->r31 = MEM_W(ctx->r29, 0XB0);
    // 0x0040E264: lw          $s1, 0xAC($sp)
    ctx->r17 = MEM_W(ctx->r29, 0XAC);
    // 0x0040E268: lw          $s0, 0xA8($sp)
    ctx->r16 = MEM_W(ctx->r29, 0XA8);
    // 0x0040E26C: ldc1        $f21, 0xC0($sp)
    CHECK_FR(ctx, 21);
    ctx->f21.u64 = LD(ctx->r29, 0XC0);
    // 0x0040E270: ldc1        $f20, 0xB8($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0XB8);
    // 0x0040E274: jr          $ra
    // 0x0040E278: addiu       $sp, $sp, 0xC8
    ctx->r29 = ADD32(ctx->r29, 0XC8);
    return;
    // 0x0040E278: addiu       $sp, $sp, 0xC8
    ctx->r29 = ADD32(ctx->r29, 0XC8);
;}
RECOMP_FUNC void entry_0040E1E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0040E1E0: lwc1        $f0, 0x50($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X50);
    // 0x0040E1E4: lwc1        $f1, 0x98($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X98);
    // 0x0040E1E8: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x0040E1EC: addiu       $a0, $sp, 0xA0
    ctx->r4 = ADD32(ctx->r29, 0XA0);
    // 0x0040E1F0: jal         0x00210EF0
    // 0x0040E1F4: swc1        $f0, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->f0.u32l;
    func_00210EF0(rdram, ctx);
        goto after_0;
    // 0x0040E1F4: swc1        $f0, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->f0.u32l;
    after_0:
    // 0x0040E1F8: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0040E1FC: lwc1        $f0, 0x928($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X928);
    // 0x0040E200: lwc1        $f3, 0x20($sp)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x0040E204: c.lt.s      $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f20.fl < ctx->f0.fl;
    // 0x0040E208: nop

    // 0x0040E20C: bc1f        L_0040E250
    if (!c1cs) {
        // 0x0040E210: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_0040E250;
    }
    // 0x0040E210: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0040E214: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0040E218: lwc1        $f0, 0x92C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X92C);
    // 0x0040E21C: mul.s       $f0, $f20, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f20.fl, ctx->f0.fl);
    // 0x0040E220: lwc1        $f1, 0xA0($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0XA0);
    // 0x0040E224: add.s       $f2, $f1, $f3
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f2.fl = ctx->f1.fl + ctx->f3.fl;
    // 0x0040E228: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x0040E22C: nop

    // 0x0040E230: bc1tl       L_0040E250
    if (c1cs) {
        // 0x0040E234: sub.s       $f3, $f0, $f1
        CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f3.fl = ctx->f0.fl - ctx->f1.fl;
            goto L_0040E250;
    }
    goto skip_0;
    // 0x0040E234: sub.s       $f3, $f0, $f1
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f3.fl = ctx->f0.fl - ctx->f1.fl;
    skip_0:
    // 0x0040E238: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x0040E23C: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x0040E240: nop

    // 0x0040E244: bc1f        L_0040E250
    if (!c1cs) {
        // 0x0040E248: nop
    
            goto L_0040E250;
    }
    // 0x0040E248: nop

    // 0x0040E24C: sub.s       $f3, $f0, $f1
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f3.fl = ctx->f0.fl - ctx->f1.fl;
L_0040E250:
    // 0x0040E250: mfc1        $a2, $f21
    ctx->r6 = (int32_t)ctx->f_odd[(21 - 1) * 2];
    // 0x0040E254: mfc1        $a3, $f3
    ctx->r7 = (int32_t)ctx->f_odd[(3 - 1) * 2];
    // 0x0040E258: jal         0x00245BAC
    // 0x0040E25C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_00245BAC(rdram, ctx);
        goto after_1;
    // 0x0040E25C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_1:
    // 0x0040E260: lw          $ra, 0xB0($sp)
    ctx->r31 = MEM_W(ctx->r29, 0XB0);
    // 0x0040E264: lw          $s1, 0xAC($sp)
    ctx->r17 = MEM_W(ctx->r29, 0XAC);
    // 0x0040E268: lw          $s0, 0xA8($sp)
    ctx->r16 = MEM_W(ctx->r29, 0XA8);
    // 0x0040E26C: ldc1        $f21, 0xC0($sp)
    CHECK_FR(ctx, 21);
    ctx->f21.u64 = LD(ctx->r29, 0XC0);
    // 0x0040E270: ldc1        $f20, 0xB8($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0XB8);
    // 0x0040E274: jr          $ra
    // 0x0040E278: addiu       $sp, $sp, 0xC8
    ctx->r29 = ADD32(ctx->r29, 0XC8);
    return;
    // 0x0040E278: addiu       $sp, $sp, 0xC8
    ctx->r29 = ADD32(ctx->r29, 0XC8);
;}
RECOMP_FUNC void entry_0040E418(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0040E418: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x0040E41C: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x0040E420: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x0040E424: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0040E428: jr          $ra
    // 0x0040E42C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x0040E42C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void entry_0040EE30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0040EE30: bnel        $v1, $v0, L_0040EE44
    if (ctx->r3 != ctx->r2) {
        // 0x0040EE34: sw          $zero, 0x10($sp)
        MEM_W(0X10, ctx->r29) = 0;
            goto L_0040EE44;
    }
    goto skip_0;
    // 0x0040EE34: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    skip_0:
    // 0x0040EE38: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0040EE3C: sw          $v0, 0x18($s1)
    MEM_W(0X18, ctx->r17) = ctx->r2;
    // 0x0040EE40: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
L_0040EE44:
    // 0x0040EE44: lw          $v0, 0x18($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X18);
    // 0x0040EE48: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x0040EE4C: lb          $v0, 0x151($s2)
    ctx->r2 = MEM_B(ctx->r18, 0X151);
    // 0x0040EE50: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x0040EE54: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x0040EE58: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0040EE5C: lw          $v0, 0x6D1C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X6D1C);
    // 0x0040EE60: lw          $a0, 0xC($s1)
    ctx->r4 = MEM_W(ctx->r17, 0XC);
    // 0x0040EE64: lw          $a1, 0x98($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X98);
    // 0x0040EE68: sll         $a3, $v0, 1
    ctx->r7 = S32(ctx->r2 << 1);
    // 0x0040EE6C: addu        $a3, $a3, $v0
    ctx->r7 = ADD32(ctx->r7, ctx->r2);
    // 0x0040EE70: sll         $a3, $a3, 3
    ctx->r7 = S32(ctx->r7 << 3);
    // 0x0040EE74: addiu       $a3, $a3, 0x110
    ctx->r7 = ADD32(ctx->r7, 0X110);
    // 0x0040EE78: jal         0x0020A33C
    // 0x0040EE7C: addu        $a3, $s2, $a3
    ctx->r7 = ADD32(ctx->r18, ctx->r7);
    func_0020A33C(rdram, ctx);
        goto after_0;
    // 0x0040EE7C: addu        $a3, $s2, $a3
    ctx->r7 = ADD32(ctx->r18, ctx->r7);
    after_0:
    // 0x0040EE80: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x0040EE84: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x0040EE88: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x0040EE8C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x0040EE90: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0040EE94: sw          $zero, -0x4750($at)
    MEM_W(-0X4750, ctx->r1) = 0;
    // 0x0040EE98: jr          $ra
    // 0x0040EE9C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x0040EE9C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void entry_0040EE44(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0040EE44: lw          $v0, 0x18($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X18);
    // 0x0040EE48: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x0040EE4C: lb          $v0, 0x151($s2)
    ctx->r2 = MEM_B(ctx->r18, 0X151);
    // 0x0040EE50: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x0040EE54: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x0040EE58: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0040EE5C: lw          $v0, 0x6D1C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X6D1C);
    // 0x0040EE60: lw          $a0, 0xC($s1)
    ctx->r4 = MEM_W(ctx->r17, 0XC);
    // 0x0040EE64: lw          $a1, 0x98($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X98);
    // 0x0040EE68: sll         $a3, $v0, 1
    ctx->r7 = S32(ctx->r2 << 1);
    // 0x0040EE6C: addu        $a3, $a3, $v0
    ctx->r7 = ADD32(ctx->r7, ctx->r2);
    // 0x0040EE70: sll         $a3, $a3, 3
    ctx->r7 = S32(ctx->r7 << 3);
    // 0x0040EE74: addiu       $a3, $a3, 0x110
    ctx->r7 = ADD32(ctx->r7, 0X110);
    // 0x0040EE78: jal         0x0020A33C
    // 0x0040EE7C: addu        $a3, $s2, $a3
    ctx->r7 = ADD32(ctx->r18, ctx->r7);
    func_0020A33C(rdram, ctx);
        goto after_0;
    // 0x0040EE7C: addu        $a3, $s2, $a3
    ctx->r7 = ADD32(ctx->r18, ctx->r7);
    after_0:
    // 0x0040EE80: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x0040EE84: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x0040EE88: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x0040EE8C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x0040EE90: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0040EE94: sw          $zero, -0x4750($at)
    MEM_W(-0X4750, ctx->r1) = 0;
    // 0x0040EE98: jr          $ra
    // 0x0040EE9C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x0040EE9C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void entry_0040F58C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0040F58C: lw          $ra, 0x30($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X30);
    // 0x0040F590: lw          $s7, 0x2C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X2C);
    // 0x0040F594: lw          $s6, 0x28($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X28);
    // 0x0040F598: lw          $s5, 0x24($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X24);
    // 0x0040F59C: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x0040F5A0: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x0040F5A4: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x0040F5A8: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x0040F5AC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0040F5B0: jr          $ra
    // 0x0040F5B4: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x0040F5B4: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void entry_0040F9C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0040F9C0: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x0040F9C4: lw          $fp, 0x40($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X40);
    // 0x0040F9C8: lw          $s7, 0x3C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X3C);
    // 0x0040F9CC: lw          $s6, 0x38($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X38);
    // 0x0040F9D0: lw          $s5, 0x34($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X34);
    // 0x0040F9D4: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x0040F9D8: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x0040F9DC: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x0040F9E0: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x0040F9E4: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x0040F9E8: ldc1        $f20, 0x48($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X48);
    // 0x0040F9EC: jr          $ra
    // 0x0040F9F0: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x0040F9F0: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void entry_0040FE58(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_0040FE58:
    // 0x0040FE58: jal         0x00412DA4
    // 0x0040FE5C: nop

    func_00412DA4(rdram, ctx);
        goto after_0;
    // 0x0040FE5C: nop

    after_0:
    // 0x0040FE60: slt         $v0, $s0, $v0
    ctx->r2 = SIGNED(ctx->r16) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x0040FE64: beql        $v0, $zero, L_0040FEA0
    if (ctx->r2 == 0) {
        // 0x0040FE68: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_0040FEA0;
    }
    goto skip_0;
    // 0x0040FE68: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    skip_0:
    // 0x0040FE6C: jal         0x00412DD0
    // 0x0040FE70: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00412DD0(rdram, ctx);
        goto after_1;
    // 0x0040FE70: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x0040FE74: lw          $v1, 0x4($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X4);
    // 0x0040FE78: blez        $v1, L_0040FE98
    if (SIGNED(ctx->r3) <= 0) {
        // 0x0040FE7C: addiu       $a0, $v0, 0x8
        ctx->r4 = ADD32(ctx->r2, 0X8);
            goto L_0040FE98;
    }
    // 0x0040FE7C: addiu       $a0, $v0, 0x8
    ctx->r4 = ADD32(ctx->r2, 0X8);
    // 0x0040FE80: sll         $v0, $v1, 3
    ctx->r2 = S32(ctx->r3 << 3);
    // 0x0040FE84: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x0040FE88: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x0040FE8C: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x0040FE90: lwc1        $f0, -0x8($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, -0X8);
    // 0x0040FE94: add.s       $f20, $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = ctx->f20.fl + ctx->f0.fl;
L_0040FE98:
    // 0x0040FE98: j           L_0040FE58
    // 0x0040FE9C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
        goto L_0040FE58;
    // 0x0040FE9C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_0040FEA0:
    // 0x0040FEA0: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x0040FEA4: lw          $v0, 0x1BB0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1BB0);
    // 0x0040FEA8: sw          $zero, 0x30($v0)
    MEM_W(0X30, ctx->r2) = 0;
    // 0x0040FEAC: swc1        $f20, 0x34($v0)
    MEM_W(0X34, ctx->r2) = ctx->f20.u32l;
    // 0x0040FEB0: sw          $zero, 0x28($v0)
    MEM_W(0X28, ctx->r2) = 0;
    // 0x0040FEB4: blez        $s1, L_0040FF04
    if (SIGNED(ctx->r17) <= 0) {
        // 0x0040FEB8: swc1        $f20, 0x2C($v0)
        MEM_W(0X2C, ctx->r2) = ctx->f20.u32l;
            goto L_0040FF04;
    }
    // 0x0040FEB8: swc1        $f20, 0x2C($v0)
    MEM_W(0X2C, ctx->r2) = ctx->f20.u32l;
    // 0x0040FEBC: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x0040FEC0: addu        $v1, $s2, $zero
    ctx->r3 = ADD32(ctx->r18, 0);
L_0040FEC4:
    // 0x0040FEC4: lwc1        $f0, 0x28($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X28);
    // 0x0040FEC8: lwc1        $f1, 0x10($v1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r3, 0X10);
    // 0x0040FECC: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x0040FED0: nop

    // 0x0040FED4: bc1tl       L_0040FEDC
    if (c1cs) {
        // 0x0040FED8: swc1        $f1, 0x28($a0)
        MEM_W(0X28, ctx->r4) = ctx->f_odd[(1 - 1) * 2];
            goto L_0040FEDC;
    }
    goto skip_1;
    // 0x0040FED8: swc1        $f1, 0x28($a0)
    MEM_W(0X28, ctx->r4) = ctx->f_odd[(1 - 1) * 2];
    skip_1:
L_0040FEDC:
    // 0x0040FEDC: lwc1        $f0, 0x2C($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X2C);
    // 0x0040FEE0: lwc1        $f1, 0x10($v1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r3, 0X10);
    // 0x0040FEE4: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x0040FEE8: nop

    // 0x0040FEEC: bc1tl       L_0040FEF4
    if (c1cs) {
        // 0x0040FEF0: swc1        $f1, 0x2C($a0)
        MEM_W(0X2C, ctx->r4) = ctx->f_odd[(1 - 1) * 2];
            goto L_0040FEF4;
    }
    goto skip_2;
    // 0x0040FEF0: swc1        $f1, 0x2C($a0)
    MEM_W(0X2C, ctx->r4) = ctx->f_odd[(1 - 1) * 2];
    skip_2:
L_0040FEF4:
    // 0x0040FEF4: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x0040FEF8: slt         $v0, $s0, $s1
    ctx->r2 = SIGNED(ctx->r16) < SIGNED(ctx->r17) ? 1 : 0;
    // 0x0040FEFC: bne         $v0, $zero, L_0040FEC4
    if (ctx->r2 != 0) {
        // 0x0040FF00: addiu       $v1, $v1, 0x14
        ctx->r3 = ADD32(ctx->r3, 0X14);
            goto L_0040FEC4;
    }
    // 0x0040FF00: addiu       $v1, $v1, 0x14
    ctx->r3 = ADD32(ctx->r3, 0X14);
L_0040FF04:
    // 0x0040FF04: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x0040FF08: lw          $v0, 0x1BB0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1BB0);
    // 0x0040FF0C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x0040FF10: lwc1        $f0, 0x28($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X28);
    // 0x0040FF14: mov.s       $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    ctx->f1.fl = ctx->f0.fl;
    // 0x0040FF18: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    // 0x0040FF1C: swc1        $f0, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f0.u32l;
    // 0x0040FF20: swc1        $f1, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f_odd[(1 - 1) * 2];
    // 0x0040FF24: swc1        $f2, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->f2.u32l;
    // 0x0040FF28: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x0040FF2C: lw          $a0, 0x70D8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X70D8);
    // 0x0040FF30: lui         $a1, 0x800F
    ctx->r5 = S32(0X800F << 16);
    // 0x0040FF34: lw          $a1, 0x709C($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X709C);
    // 0x0040FF38: lw          $s0, 0x70($v0)
    ctx->r16 = MEM_W(ctx->r2, 0X70);
    // 0x0040FF3C: jal         0x0020185C
    // 0x0040FF40: addiu       $a3, $sp, 0x24
    ctx->r7 = ADD32(ctx->r29, 0X24);
    func_0020185C(rdram, ctx);
        goto after_2;
    // 0x0040FF40: addiu       $a3, $sp, 0x24
    ctx->r7 = ADD32(ctx->r29, 0X24);
    after_2:
    // 0x0040FF44: bne         $v0, $zero, L_0040FF54
    if (ctx->r2 != 0) {
        // 0x0040FF48: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_0040FF54;
    }
    // 0x0040FF48: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0040FF4C: j           L_0040FF84
    // 0x0040FF50: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
        goto L_0040FF84;
    // 0x0040FF50: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
L_0040FF54:
    // 0x0040FF54: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x0040FF58: addiu       $a3, $zero, 0x13
    ctx->r7 = ADD32(0, 0X13);
    // 0x0040FF5C: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    // 0x0040FF60: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x0040FF64: addiu       $v0, $v0, 0x970
    ctx->r2 = ADD32(ctx->r2, 0X970);
    // 0x0040FF68: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x0040FF6C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0040FF70: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x0040FF74: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x0040FF78: jal         0x0020367C
    // 0x0040FF7C: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    func_0020367C(rdram, ctx);
        goto after_3;
    // 0x0040FF7C: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    after_3:
    // 0x0040FF80: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
L_0040FF84:
    // 0x0040FF84: sll         $v0, $s4, 2
    ctx->r2 = S32(ctx->r20 << 2);
    // 0x0040FF88: addu        $v0, $v0, $s4
    ctx->r2 = ADD32(ctx->r2, ctx->r20);
    // 0x0040FF8C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x0040FF90: subu        $v0, $v0, $s4
    ctx->r2 = SUB32(ctx->r2, ctx->r20);
    // 0x0040FF94: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x0040FF98: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x0040FF9C: lw          $a0, 0x1BB0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1BB0);
    // 0x0040FFA0: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x0040FFA4: addiu       $a2, $a0, 0x68
    ctx->r6 = ADD32(ctx->r4, 0X68);
    // 0x0040FFA8: addiu       $v1, $v1, 0x8
    ctx->r3 = ADD32(ctx->r3, 0X8);
    // 0x0040FFAC: addu        $v1, $v0, $v1
    ctx->r3 = ADD32(ctx->r2, ctx->r3);
    // 0x0040FFB0: addiu       $a3, $v1, 0x40
    ctx->r7 = ADD32(ctx->r3, 0X40);
    // 0x0040FFB4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0040FFB8: sw          $s5, 0x54($a0)
    MEM_W(0X54, ctx->r4) = ctx->r21;
    // 0x0040FFBC: sw          $v0, 0x38($a0)
    MEM_W(0X38, ctx->r4) = ctx->r2;
L_0040FFC0:
    // 0x0040FFC0: lw          $t0, 0x0($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X0);
    // 0x0040FFC4: lw          $t1, 0x4($v1)
    ctx->r9 = MEM_W(ctx->r3, 0X4);
    // 0x0040FFC8: lw          $t2, 0x8($v1)
    ctx->r10 = MEM_W(ctx->r3, 0X8);
    // 0x0040FFCC: lw          $t3, 0xC($v1)
    ctx->r11 = MEM_W(ctx->r3, 0XC);
    // 0x0040FFD0: sw          $t0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r8;
    // 0x0040FFD4: sw          $t1, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r9;
    // 0x0040FFD8: sw          $t2, 0x8($a2)
    MEM_W(0X8, ctx->r6) = ctx->r10;
    // 0x0040FFDC: sw          $t3, 0xC($a2)
    MEM_W(0XC, ctx->r6) = ctx->r11;
    // 0x0040FFE0: addiu       $v1, $v1, 0x10
    ctx->r3 = ADD32(ctx->r3, 0X10);
    // 0x0040FFE4: bne         $v1, $a3, L_0040FFC0
    if (ctx->r3 != ctx->r7) {
        // 0x0040FFE8: addiu       $a2, $a2, 0x10
        ctx->r6 = ADD32(ctx->r6, 0X10);
            goto L_0040FFC0;
    }
    // 0x0040FFE8: addiu       $a2, $a2, 0x10
    ctx->r6 = ADD32(ctx->r6, 0X10);
    // 0x0040FFEC: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x0040FFF0: lw          $a0, 0x1BB0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1BB0);
    // 0x0040FFF4: lw          $t0, 0x0($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X0);
    // 0x0040FFF8: lw          $t1, 0x4($v1)
    ctx->r9 = MEM_W(ctx->r3, 0X4);
    // 0x0040FFFC: lw          $t2, 0x8($v1)
    ctx->r10 = MEM_W(ctx->r3, 0X8);
    // 0x00410000: sw          $t0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r8;
    // 0x00410004: sw          $t1, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r9;
    // 0x00410008: sw          $t2, 0x8($a2)
    MEM_W(0X8, ctx->r6) = ctx->r10;
    // 0x0041000C: lw          $v1, 0x70($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X70);
    // 0x00410010: lw          $v0, 0x74($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X74);
    // 0x00410014: sw          $zero, 0x50($a0)
    MEM_W(0X50, ctx->r4) = 0;
    // 0x00410018: sw          $zero, 0x40($a0)
    MEM_W(0X40, ctx->r4) = 0;
    // 0x0041001C: sw          $zero, 0x44($a0)
    MEM_W(0X44, ctx->r4) = 0;
    // 0x00410020: sw          $zero, 0x48($a0)
    MEM_W(0X48, ctx->r4) = 0;
    // 0x00410024: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x00410028: beq         $v0, $zero, L_00410074
    if (ctx->r2 == 0) {
        // 0x0041002C: sw          $v1, 0xE0($a0)
        MEM_W(0XE0, ctx->r4) = ctx->r3;
            goto L_00410074;
    }
    // 0x0041002C: sw          $v1, 0xE0($a0)
    MEM_W(0XE0, ctx->r4) = ctx->r3;
    // 0x00410030: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x00410034: beq         $v0, $zero, L_00410074
    if (ctx->r2 == 0) {
        // 0x00410038: nop
    
            goto L_00410074;
    }
    // 0x00410038: nop

    // 0x0041003C: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x00410040: lw          $v1, 0x1BB0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X1BB0);
    // 0x00410044: lw          $t0, 0x4($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X4);
    // 0x00410048: lw          $t1, 0x8($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X8);
    // 0x0041004C: lw          $t2, 0xC($v0)
    ctx->r10 = MEM_W(ctx->r2, 0XC);
    // 0x00410050: sw          $t0, 0xF0($a0)
    MEM_W(0XF0, ctx->r4) = ctx->r8;
    // 0x00410054: sw          $t1, 0xF4($a0)
    MEM_W(0XF4, ctx->r4) = ctx->r9;
    // 0x00410058: sw          $t2, 0xF8($a0)
    MEM_W(0XF8, ctx->r4) = ctx->r10;
    // 0x0041005C: lw          $v0, 0x18($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X18);
    // 0x00410060: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00410064: lwc1        $f1, 0x978($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X978);
    // 0x00410068: lwc1        $f0, 0x50($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X50);
    // 0x0041006C: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x00410070: swc1        $f0, 0xFC($v1)
    MEM_W(0XFC, ctx->r3) = ctx->f0.u32l;
L_00410074:
    // 0x00410074: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x00410078: lw          $v1, 0x1BB0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X1BB0);
    // 0x0041007C: lw          $v0, 0x74($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X74);
    // 0x00410080: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x00410084: beq         $v0, $zero, L_004100CC
    if (ctx->r2 == 0) {
        // 0x00410088: nop
    
            goto L_004100CC;
    }
    // 0x00410088: nop

    // 0x0041008C: beql        $s3, $zero, L_004100C0
    if (ctx->r19 == 0) {
        // 0x00410090: sw          $zero, 0xF0($v1)
        MEM_W(0XF0, ctx->r3) = 0;
            goto L_004100C0;
    }
    goto skip_3;
    // 0x00410090: sw          $zero, 0xF0($v1)
    MEM_W(0XF0, ctx->r3) = 0;
    skip_3:
    // 0x00410094: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x00410098: lw          $v0, 0x1BB0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1BB0);
    // 0x0041009C: lw          $t0, 0x4($s3)
    ctx->r8 = MEM_W(ctx->r19, 0X4);
    // 0x004100A0: lw          $t1, 0x8($s3)
    ctx->r9 = MEM_W(ctx->r19, 0X8);
    // 0x004100A4: lw          $t2, 0xC($s3)
    ctx->r10 = MEM_W(ctx->r19, 0XC);
    // 0x004100A8: sw          $t0, 0xF0($v1)
    MEM_W(0XF0, ctx->r3) = ctx->r8;
    // 0x004100AC: sw          $t1, 0xF4($v1)
    MEM_W(0XF4, ctx->r3) = ctx->r9;
    // 0x004100B0: sw          $t2, 0xF8($v1)
    MEM_W(0XF8, ctx->r3) = ctx->r10;
    // 0x004100B4: lwc1        $f0, 0x50($s3)
    ctx->f0.u32l = MEM_W(ctx->r19, 0X50);
    // 0x004100B8: j           L_004100CC
    // 0x004100BC: swc1        $f0, 0xFC($v0)
    MEM_W(0XFC, ctx->r2) = ctx->f0.u32l;
        goto L_004100CC;
    // 0x004100BC: swc1        $f0, 0xFC($v0)
    MEM_W(0XFC, ctx->r2) = ctx->f0.u32l;
L_004100C0:
    // 0x004100C0: sw          $zero, 0xF4($v1)
    MEM_W(0XF4, ctx->r3) = 0;
    // 0x004100C4: sw          $zero, 0xF8($v1)
    MEM_W(0XF8, ctx->r3) = 0;
    // 0x004100C8: sw          $zero, 0xFC($v1)
    MEM_W(0XFC, ctx->r3) = 0;
L_004100CC:
    // 0x004100CC: jal         0x002051F4
    // 0x004100D0: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_002051F4(rdram, ctx);
        goto after_4;
    // 0x004100D0: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_4:
    // 0x004100D4: beq         $s5, $zero, L_00410148
    if (ctx->r21 == 0) {
        // 0x004100D8: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_00410148;
    }
    // 0x004100D8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x004100DC: lui         $a2, 0x800C
    ctx->r6 = S32(0X800C << 16);
    // 0x004100E0: lw          $a2, 0x1BB0($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X1BB0);
    // 0x004100E4: lw          $a0, 0xE4($a2)
    ctx->r4 = MEM_W(ctx->r6, 0XE4);
    // 0x004100E8: lw          $a1, 0xE8($a2)
    ctx->r5 = MEM_W(ctx->r6, 0XE8);
    // 0x004100EC: sw          $v0, 0x54($a2)
    MEM_W(0X54, ctx->r6) = ctx->r2;
    // 0x004100F0: lw          $v0, 0x74($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X74);
    // 0x004100F4: lw          $v1, 0xE0($a2)
    ctx->r3 = MEM_W(ctx->r6, 0XE0);
    // 0x004100F8: sw          $zero, 0x4C($a2)
    MEM_W(0X4C, ctx->r6) = 0;
    // 0x004100FC: sw          $zero, 0xE4($a2)
    MEM_W(0XE4, ctx->r6) = 0;
    // 0x00410100: sw          $zero, 0xE8($a2)
    MEM_W(0XE8, ctx->r6) = 0;
    // 0x00410104: andi        $v0, $v0, 0x8
    ctx->r2 = ctx->r2 & 0X8;
    // 0x00410108: addiu       $v1, $v1, -0xA
    ctx->r3 = ADD32(ctx->r3, -0XA);
    // 0x0041010C: sltiu       $v1, $v1, 0x47
    ctx->r3 = ctx->r3 < 0X47 ? 1 : 0;
    // 0x00410110: sw          $v0, 0xB8($a2)
    MEM_W(0XB8, ctx->r6) = ctx->r2;
    // 0x00410114: sw          $a0, 0xC($a2)
    MEM_W(0XC, ctx->r6) = ctx->r4;
    // 0x00410118: beq         $v1, $zero, L_00410124
    if (ctx->r3 == 0) {
        // 0x0041011C: sw          $a1, 0x10($a2)
        MEM_W(0X10, ctx->r6) = ctx->r5;
            goto L_00410124;
    }
    // 0x0041011C: sw          $a1, 0x10($a2)
    MEM_W(0X10, ctx->r6) = ctx->r5;
    // 0x00410120: sw          $zero, 0xB8($a2)
    MEM_W(0XB8, ctx->r6) = 0;
L_00410124:
    // 0x00410124: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x00410128: lw          $v1, 0x1BB0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X1BB0);
    // 0x0041012C: lw          $v0, 0xE0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0XE0);
    // 0x00410130: addiu       $v0, $v0, -0x190
    ctx->r2 = ADD32(ctx->r2, -0X190);
    // 0x00410134: sltiu       $v0, $v0, 0x4
    ctx->r2 = ctx->r2 < 0X4 ? 1 : 0;
    // 0x00410138: bnel        $v0, $zero, L_00410174
    if (ctx->r2 != 0) {
        // 0x0041013C: sw          $zero, 0xB8($v1)
        MEM_W(0XB8, ctx->r3) = 0;
            goto L_00410174;
    }
    goto skip_4;
    // 0x0041013C: sw          $zero, 0xB8($v1)
    MEM_W(0XB8, ctx->r3) = 0;
    skip_4:
    // 0x00410140: j           L_00410174
    // 0x00410144: nop

        goto L_00410174;
    // 0x00410144: nop

L_00410148:
    // 0x00410148: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x0041014C: lw          $v1, 0x1BB0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X1BB0);
    // 0x00410150: lw          $v0, 0x70($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X70);
    // 0x00410154: slti        $v0, $v0, 0x3
    ctx->r2 = SIGNED(ctx->r2) < 0X3 ? 1 : 0;
    // 0x00410158: bnel        $v0, $zero, L_00410160
    if (ctx->r2 != 0) {
        // 0x0041015C: sw          $s0, 0xE0($v1)
        MEM_W(0XE0, ctx->r3) = ctx->r16;
            goto L_00410160;
    }
    goto skip_5;
    // 0x0041015C: sw          $s0, 0xE0($v1)
    MEM_W(0XE0, ctx->r3) = ctx->r16;
    skip_5:
L_00410160:
    // 0x00410160: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x00410164: lw          $v0, 0x1BB0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1BB0);
    // 0x00410168: lwc1        $f0, 0x30($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X30);
    // 0x0041016C: sw          $zero, 0x54($v0)
    MEM_W(0X54, ctx->r2) = 0;
    // 0x00410170: swc1        $f0, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f0.u32l;
L_00410174:
    // 0x00410174: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x00410178: lw          $a0, 0x1BB0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1BB0);
    // 0x0041017C: lw          $v1, 0x70($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X70);
    // 0x00410180: addiu       $v0, $zero, 0x9F
    ctx->r2 = ADD32(0, 0X9F);
    // 0x00410184: beql        $v1, $v0, L_0041018C
    if (ctx->r3 == ctx->r2) {
        // 0x00410188: sw          $zero, 0xB8($a0)
        MEM_W(0XB8, ctx->r4) = 0;
            goto L_0041018C;
    }
    goto skip_6;
    // 0x00410188: sw          $zero, 0xB8($a0)
    MEM_W(0XB8, ctx->r4) = 0;
    skip_6:
L_0041018C:
    // 0x0041018C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00410190: lw          $ra, 0x40($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X40);
    // 0x00410194: lw          $s5, 0x3C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X3C);
    // 0x00410198: lw          $s4, 0x38($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X38);
    // 0x0041019C: lw          $s3, 0x34($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X34);
    // 0x004101A0: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x004101A4: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x004101A8: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x004101AC: ldc1        $f20, 0x48($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X48);
    // 0x004101B0: jr          $ra
    // 0x004101B4: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x004101B4: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void entry_0040FF84(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0040FF84: sll         $v0, $s4, 2
    ctx->r2 = S32(ctx->r20 << 2);
    // 0x0040FF88: addu        $v0, $v0, $s4
    ctx->r2 = ADD32(ctx->r2, ctx->r20);
    // 0x0040FF8C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x0040FF90: subu        $v0, $v0, $s4
    ctx->r2 = SUB32(ctx->r2, ctx->r20);
    // 0x0040FF94: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x0040FF98: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x0040FF9C: lw          $a0, 0x1BB0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1BB0);
    // 0x0040FFA0: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x0040FFA4: addiu       $a2, $a0, 0x68
    ctx->r6 = ADD32(ctx->r4, 0X68);
    // 0x0040FFA8: addiu       $v1, $v1, 0x8
    ctx->r3 = ADD32(ctx->r3, 0X8);
    // 0x0040FFAC: addu        $v1, $v0, $v1
    ctx->r3 = ADD32(ctx->r2, ctx->r3);
    // 0x0040FFB0: addiu       $a3, $v1, 0x40
    ctx->r7 = ADD32(ctx->r3, 0X40);
    // 0x0040FFB4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0040FFB8: sw          $s5, 0x54($a0)
    MEM_W(0X54, ctx->r4) = ctx->r21;
    // 0x0040FFBC: sw          $v0, 0x38($a0)
    MEM_W(0X38, ctx->r4) = ctx->r2;
L_0040FFC0:
    // 0x0040FFC0: lw          $t0, 0x0($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X0);
    // 0x0040FFC4: lw          $t1, 0x4($v1)
    ctx->r9 = MEM_W(ctx->r3, 0X4);
    // 0x0040FFC8: lw          $t2, 0x8($v1)
    ctx->r10 = MEM_W(ctx->r3, 0X8);
    // 0x0040FFCC: lw          $t3, 0xC($v1)
    ctx->r11 = MEM_W(ctx->r3, 0XC);
    // 0x0040FFD0: sw          $t0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r8;
    // 0x0040FFD4: sw          $t1, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r9;
    // 0x0040FFD8: sw          $t2, 0x8($a2)
    MEM_W(0X8, ctx->r6) = ctx->r10;
    // 0x0040FFDC: sw          $t3, 0xC($a2)
    MEM_W(0XC, ctx->r6) = ctx->r11;
    // 0x0040FFE0: addiu       $v1, $v1, 0x10
    ctx->r3 = ADD32(ctx->r3, 0X10);
    // 0x0040FFE4: bne         $v1, $a3, L_0040FFC0
    if (ctx->r3 != ctx->r7) {
        // 0x0040FFE8: addiu       $a2, $a2, 0x10
        ctx->r6 = ADD32(ctx->r6, 0X10);
            goto L_0040FFC0;
    }
    // 0x0040FFE8: addiu       $a2, $a2, 0x10
    ctx->r6 = ADD32(ctx->r6, 0X10);
    // 0x0040FFEC: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x0040FFF0: lw          $a0, 0x1BB0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1BB0);
    // 0x0040FFF4: lw          $t0, 0x0($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X0);
    // 0x0040FFF8: lw          $t1, 0x4($v1)
    ctx->r9 = MEM_W(ctx->r3, 0X4);
    // 0x0040FFFC: lw          $t2, 0x8($v1)
    ctx->r10 = MEM_W(ctx->r3, 0X8);
    // 0x00410000: sw          $t0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r8;
    // 0x00410004: sw          $t1, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r9;
    // 0x00410008: sw          $t2, 0x8($a2)
    MEM_W(0X8, ctx->r6) = ctx->r10;
    // 0x0041000C: lw          $v1, 0x70($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X70);
    // 0x00410010: lw          $v0, 0x74($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X74);
    // 0x00410014: sw          $zero, 0x50($a0)
    MEM_W(0X50, ctx->r4) = 0;
    // 0x00410018: sw          $zero, 0x40($a0)
    MEM_W(0X40, ctx->r4) = 0;
    // 0x0041001C: sw          $zero, 0x44($a0)
    MEM_W(0X44, ctx->r4) = 0;
    // 0x00410020: sw          $zero, 0x48($a0)
    MEM_W(0X48, ctx->r4) = 0;
    // 0x00410024: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x00410028: beq         $v0, $zero, L_00410074
    if (ctx->r2 == 0) {
        // 0x0041002C: sw          $v1, 0xE0($a0)
        MEM_W(0XE0, ctx->r4) = ctx->r3;
            goto L_00410074;
    }
    // 0x0041002C: sw          $v1, 0xE0($a0)
    MEM_W(0XE0, ctx->r4) = ctx->r3;
    // 0x00410030: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x00410034: beq         $v0, $zero, L_00410074
    if (ctx->r2 == 0) {
        // 0x00410038: nop
    
            goto L_00410074;
    }
    // 0x00410038: nop

    // 0x0041003C: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x00410040: lw          $v1, 0x1BB0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X1BB0);
    // 0x00410044: lw          $t0, 0x4($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X4);
    // 0x00410048: lw          $t1, 0x8($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X8);
    // 0x0041004C: lw          $t2, 0xC($v0)
    ctx->r10 = MEM_W(ctx->r2, 0XC);
    // 0x00410050: sw          $t0, 0xF0($a0)
    MEM_W(0XF0, ctx->r4) = ctx->r8;
    // 0x00410054: sw          $t1, 0xF4($a0)
    MEM_W(0XF4, ctx->r4) = ctx->r9;
    // 0x00410058: sw          $t2, 0xF8($a0)
    MEM_W(0XF8, ctx->r4) = ctx->r10;
    // 0x0041005C: lw          $v0, 0x18($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X18);
    // 0x00410060: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00410064: lwc1        $f1, 0x978($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X978);
    // 0x00410068: lwc1        $f0, 0x50($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X50);
    // 0x0041006C: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x00410070: swc1        $f0, 0xFC($v1)
    MEM_W(0XFC, ctx->r3) = ctx->f0.u32l;
L_00410074:
    // 0x00410074: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x00410078: lw          $v1, 0x1BB0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X1BB0);
    // 0x0041007C: lw          $v0, 0x74($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X74);
    // 0x00410080: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x00410084: beq         $v0, $zero, L_004100CC
    if (ctx->r2 == 0) {
        // 0x00410088: nop
    
            goto L_004100CC;
    }
    // 0x00410088: nop

    // 0x0041008C: beql        $s3, $zero, L_004100C0
    if (ctx->r19 == 0) {
        // 0x00410090: sw          $zero, 0xF0($v1)
        MEM_W(0XF0, ctx->r3) = 0;
            goto L_004100C0;
    }
    goto skip_0;
    // 0x00410090: sw          $zero, 0xF0($v1)
    MEM_W(0XF0, ctx->r3) = 0;
    skip_0:
    // 0x00410094: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x00410098: lw          $v0, 0x1BB0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1BB0);
    // 0x0041009C: lw          $t0, 0x4($s3)
    ctx->r8 = MEM_W(ctx->r19, 0X4);
    // 0x004100A0: lw          $t1, 0x8($s3)
    ctx->r9 = MEM_W(ctx->r19, 0X8);
    // 0x004100A4: lw          $t2, 0xC($s3)
    ctx->r10 = MEM_W(ctx->r19, 0XC);
    // 0x004100A8: sw          $t0, 0xF0($v1)
    MEM_W(0XF0, ctx->r3) = ctx->r8;
    // 0x004100AC: sw          $t1, 0xF4($v1)
    MEM_W(0XF4, ctx->r3) = ctx->r9;
    // 0x004100B0: sw          $t2, 0xF8($v1)
    MEM_W(0XF8, ctx->r3) = ctx->r10;
    // 0x004100B4: lwc1        $f0, 0x50($s3)
    ctx->f0.u32l = MEM_W(ctx->r19, 0X50);
    // 0x004100B8: j           L_004100CC
    // 0x004100BC: swc1        $f0, 0xFC($v0)
    MEM_W(0XFC, ctx->r2) = ctx->f0.u32l;
        goto L_004100CC;
    // 0x004100BC: swc1        $f0, 0xFC($v0)
    MEM_W(0XFC, ctx->r2) = ctx->f0.u32l;
L_004100C0:
    // 0x004100C0: sw          $zero, 0xF4($v1)
    MEM_W(0XF4, ctx->r3) = 0;
    // 0x004100C4: sw          $zero, 0xF8($v1)
    MEM_W(0XF8, ctx->r3) = 0;
    // 0x004100C8: sw          $zero, 0xFC($v1)
    MEM_W(0XFC, ctx->r3) = 0;
L_004100CC:
    // 0x004100CC: jal         0x002051F4
    // 0x004100D0: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_002051F4(rdram, ctx);
        goto after_0;
    // 0x004100D0: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_0:
    // 0x004100D4: beq         $s5, $zero, L_00410148
    if (ctx->r21 == 0) {
        // 0x004100D8: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_00410148;
    }
    // 0x004100D8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x004100DC: lui         $a2, 0x800C
    ctx->r6 = S32(0X800C << 16);
    // 0x004100E0: lw          $a2, 0x1BB0($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X1BB0);
    // 0x004100E4: lw          $a0, 0xE4($a2)
    ctx->r4 = MEM_W(ctx->r6, 0XE4);
    // 0x004100E8: lw          $a1, 0xE8($a2)
    ctx->r5 = MEM_W(ctx->r6, 0XE8);
    // 0x004100EC: sw          $v0, 0x54($a2)
    MEM_W(0X54, ctx->r6) = ctx->r2;
    // 0x004100F0: lw          $v0, 0x74($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X74);
    // 0x004100F4: lw          $v1, 0xE0($a2)
    ctx->r3 = MEM_W(ctx->r6, 0XE0);
    // 0x004100F8: sw          $zero, 0x4C($a2)
    MEM_W(0X4C, ctx->r6) = 0;
    // 0x004100FC: sw          $zero, 0xE4($a2)
    MEM_W(0XE4, ctx->r6) = 0;
    // 0x00410100: sw          $zero, 0xE8($a2)
    MEM_W(0XE8, ctx->r6) = 0;
    // 0x00410104: andi        $v0, $v0, 0x8
    ctx->r2 = ctx->r2 & 0X8;
    // 0x00410108: addiu       $v1, $v1, -0xA
    ctx->r3 = ADD32(ctx->r3, -0XA);
    // 0x0041010C: sltiu       $v1, $v1, 0x47
    ctx->r3 = ctx->r3 < 0X47 ? 1 : 0;
    // 0x00410110: sw          $v0, 0xB8($a2)
    MEM_W(0XB8, ctx->r6) = ctx->r2;
    // 0x00410114: sw          $a0, 0xC($a2)
    MEM_W(0XC, ctx->r6) = ctx->r4;
    // 0x00410118: beq         $v1, $zero, L_00410124
    if (ctx->r3 == 0) {
        // 0x0041011C: sw          $a1, 0x10($a2)
        MEM_W(0X10, ctx->r6) = ctx->r5;
            goto L_00410124;
    }
    // 0x0041011C: sw          $a1, 0x10($a2)
    MEM_W(0X10, ctx->r6) = ctx->r5;
    // 0x00410120: sw          $zero, 0xB8($a2)
    MEM_W(0XB8, ctx->r6) = 0;
L_00410124:
    // 0x00410124: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x00410128: lw          $v1, 0x1BB0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X1BB0);
    // 0x0041012C: lw          $v0, 0xE0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0XE0);
    // 0x00410130: addiu       $v0, $v0, -0x190
    ctx->r2 = ADD32(ctx->r2, -0X190);
    // 0x00410134: sltiu       $v0, $v0, 0x4
    ctx->r2 = ctx->r2 < 0X4 ? 1 : 0;
    // 0x00410138: bnel        $v0, $zero, L_00410174
    if (ctx->r2 != 0) {
        // 0x0041013C: sw          $zero, 0xB8($v1)
        MEM_W(0XB8, ctx->r3) = 0;
            goto L_00410174;
    }
    goto skip_1;
    // 0x0041013C: sw          $zero, 0xB8($v1)
    MEM_W(0XB8, ctx->r3) = 0;
    skip_1:
    // 0x00410140: j           L_00410174
    // 0x00410144: nop

        goto L_00410174;
    // 0x00410144: nop

L_00410148:
    // 0x00410148: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x0041014C: lw          $v1, 0x1BB0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X1BB0);
    // 0x00410150: lw          $v0, 0x70($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X70);
    // 0x00410154: slti        $v0, $v0, 0x3
    ctx->r2 = SIGNED(ctx->r2) < 0X3 ? 1 : 0;
    // 0x00410158: bnel        $v0, $zero, L_00410160
    if (ctx->r2 != 0) {
        // 0x0041015C: sw          $s0, 0xE0($v1)
        MEM_W(0XE0, ctx->r3) = ctx->r16;
            goto L_00410160;
    }
    goto skip_2;
    // 0x0041015C: sw          $s0, 0xE0($v1)
    MEM_W(0XE0, ctx->r3) = ctx->r16;
    skip_2:
L_00410160:
    // 0x00410160: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x00410164: lw          $v0, 0x1BB0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1BB0);
    // 0x00410168: lwc1        $f0, 0x30($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X30);
    // 0x0041016C: sw          $zero, 0x54($v0)
    MEM_W(0X54, ctx->r2) = 0;
    // 0x00410170: swc1        $f0, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f0.u32l;
L_00410174:
    // 0x00410174: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x00410178: lw          $a0, 0x1BB0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1BB0);
    // 0x0041017C: lw          $v1, 0x70($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X70);
    // 0x00410180: addiu       $v0, $zero, 0x9F
    ctx->r2 = ADD32(0, 0X9F);
    // 0x00410184: beql        $v1, $v0, L_0041018C
    if (ctx->r3 == ctx->r2) {
        // 0x00410188: sw          $zero, 0xB8($a0)
        MEM_W(0XB8, ctx->r4) = 0;
            goto L_0041018C;
    }
    goto skip_3;
    // 0x00410188: sw          $zero, 0xB8($a0)
    MEM_W(0XB8, ctx->r4) = 0;
    skip_3:
L_0041018C:
    // 0x0041018C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00410190: lw          $ra, 0x40($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X40);
    // 0x00410194: lw          $s5, 0x3C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X3C);
    // 0x00410198: lw          $s4, 0x38($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X38);
    // 0x0041019C: lw          $s3, 0x34($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X34);
    // 0x004101A0: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x004101A4: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x004101A8: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x004101AC: ldc1        $f20, 0x48($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X48);
    // 0x004101B0: jr          $ra
    // 0x004101B4: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x004101B4: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void entry_004100CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004100CC: jal         0x002051F4
    // 0x004100D0: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_002051F4(rdram, ctx);
        goto after_0;
    // 0x004100D0: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_0:
    // 0x004100D4: beq         $s5, $zero, L_00410148
    if (ctx->r21 == 0) {
        // 0x004100D8: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_00410148;
    }
    // 0x004100D8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x004100DC: lui         $a2, 0x800C
    ctx->r6 = S32(0X800C << 16);
    // 0x004100E0: lw          $a2, 0x1BB0($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X1BB0);
    // 0x004100E4: lw          $a0, 0xE4($a2)
    ctx->r4 = MEM_W(ctx->r6, 0XE4);
    // 0x004100E8: lw          $a1, 0xE8($a2)
    ctx->r5 = MEM_W(ctx->r6, 0XE8);
    // 0x004100EC: sw          $v0, 0x54($a2)
    MEM_W(0X54, ctx->r6) = ctx->r2;
    // 0x004100F0: lw          $v0, 0x74($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X74);
    // 0x004100F4: lw          $v1, 0xE0($a2)
    ctx->r3 = MEM_W(ctx->r6, 0XE0);
    // 0x004100F8: sw          $zero, 0x4C($a2)
    MEM_W(0X4C, ctx->r6) = 0;
    // 0x004100FC: sw          $zero, 0xE4($a2)
    MEM_W(0XE4, ctx->r6) = 0;
    // 0x00410100: sw          $zero, 0xE8($a2)
    MEM_W(0XE8, ctx->r6) = 0;
    // 0x00410104: andi        $v0, $v0, 0x8
    ctx->r2 = ctx->r2 & 0X8;
    // 0x00410108: addiu       $v1, $v1, -0xA
    ctx->r3 = ADD32(ctx->r3, -0XA);
    // 0x0041010C: sltiu       $v1, $v1, 0x47
    ctx->r3 = ctx->r3 < 0X47 ? 1 : 0;
    // 0x00410110: sw          $v0, 0xB8($a2)
    MEM_W(0XB8, ctx->r6) = ctx->r2;
    // 0x00410114: sw          $a0, 0xC($a2)
    MEM_W(0XC, ctx->r6) = ctx->r4;
    // 0x00410118: beq         $v1, $zero, L_00410124
    if (ctx->r3 == 0) {
        // 0x0041011C: sw          $a1, 0x10($a2)
        MEM_W(0X10, ctx->r6) = ctx->r5;
            goto L_00410124;
    }
    // 0x0041011C: sw          $a1, 0x10($a2)
    MEM_W(0X10, ctx->r6) = ctx->r5;
    // 0x00410120: sw          $zero, 0xB8($a2)
    MEM_W(0XB8, ctx->r6) = 0;
L_00410124:
    // 0x00410124: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x00410128: lw          $v1, 0x1BB0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X1BB0);
    // 0x0041012C: lw          $v0, 0xE0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0XE0);
    // 0x00410130: addiu       $v0, $v0, -0x190
    ctx->r2 = ADD32(ctx->r2, -0X190);
    // 0x00410134: sltiu       $v0, $v0, 0x4
    ctx->r2 = ctx->r2 < 0X4 ? 1 : 0;
    // 0x00410138: bnel        $v0, $zero, L_00410174
    if (ctx->r2 != 0) {
        // 0x0041013C: sw          $zero, 0xB8($v1)
        MEM_W(0XB8, ctx->r3) = 0;
            goto L_00410174;
    }
    goto skip_0;
    // 0x0041013C: sw          $zero, 0xB8($v1)
    MEM_W(0XB8, ctx->r3) = 0;
    skip_0:
    // 0x00410140: j           L_00410174
    // 0x00410144: nop

        goto L_00410174;
    // 0x00410144: nop

L_00410148:
    // 0x00410148: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x0041014C: lw          $v1, 0x1BB0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X1BB0);
    // 0x00410150: lw          $v0, 0x70($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X70);
    // 0x00410154: slti        $v0, $v0, 0x3
    ctx->r2 = SIGNED(ctx->r2) < 0X3 ? 1 : 0;
    // 0x00410158: bnel        $v0, $zero, L_00410160
    if (ctx->r2 != 0) {
        // 0x0041015C: sw          $s0, 0xE0($v1)
        MEM_W(0XE0, ctx->r3) = ctx->r16;
            goto L_00410160;
    }
    goto skip_1;
    // 0x0041015C: sw          $s0, 0xE0($v1)
    MEM_W(0XE0, ctx->r3) = ctx->r16;
    skip_1:
L_00410160:
    // 0x00410160: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x00410164: lw          $v0, 0x1BB0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1BB0);
    // 0x00410168: lwc1        $f0, 0x30($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X30);
    // 0x0041016C: sw          $zero, 0x54($v0)
    MEM_W(0X54, ctx->r2) = 0;
    // 0x00410170: swc1        $f0, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f0.u32l;
L_00410174:
    // 0x00410174: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x00410178: lw          $a0, 0x1BB0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1BB0);
    // 0x0041017C: lw          $v1, 0x70($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X70);
    // 0x00410180: addiu       $v0, $zero, 0x9F
    ctx->r2 = ADD32(0, 0X9F);
    // 0x00410184: beql        $v1, $v0, L_0041018C
    if (ctx->r3 == ctx->r2) {
        // 0x00410188: sw          $zero, 0xB8($a0)
        MEM_W(0XB8, ctx->r4) = 0;
            goto L_0041018C;
    }
    goto skip_2;
    // 0x00410188: sw          $zero, 0xB8($a0)
    MEM_W(0XB8, ctx->r4) = 0;
    skip_2:
L_0041018C:
    // 0x0041018C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00410190: lw          $ra, 0x40($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X40);
    // 0x00410194: lw          $s5, 0x3C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X3C);
    // 0x00410198: lw          $s4, 0x38($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X38);
    // 0x0041019C: lw          $s3, 0x34($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X34);
    // 0x004101A0: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x004101A4: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x004101A8: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x004101AC: ldc1        $f20, 0x48($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X48);
    // 0x004101B0: jr          $ra
    // 0x004101B4: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x004101B4: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
