#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_004557E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004557E0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x004557E4: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x004557E8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x004557EC: lui         $s0, 0x8012
    ctx->r16 = S32(0X8012 << 16);
    // 0x004557F0: addiu       $s0, $s0, -0x5528
    ctx->r16 = ADD32(ctx->r16, -0X5528);
    // 0x004557F4: addu        $a0, $a1, $zero
    ctx->r4 = ADD32(ctx->r5, 0);
    // 0x004557F8: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x004557FC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x00455800: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x00455804: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x00455808: lw          $a1, 0xC($s0)
    ctx->r5 = MEM_W(ctx->r16, 0XC);
    // 0x0045580C: jal         0x0041648C
    // 0x00455810: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_0041648C(rdram, ctx);
        goto after_0;
    // 0x00455810: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_0:
    // 0x00455814: sw          $v0, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r2;
    // 0x00455818: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x0045581C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x00455820: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x00455824: jr          $ra
    // 0x00455828: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00455828: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_00466134(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_0042D2B8:
    // 0x00466134: jal         0x002017D4
    // 0x00466138: ori         $a1, $s0, 0x1
    ctx->r5 = ctx->r16 | 0X1;
    func_002017D4(rdram, ctx);
        goto after_0;
L_0042D2BC:
    // 0x00466138: ori         $a1, $s0, 0x1
    ctx->r5 = ctx->r16 | 0X1;
    after_0:
L_0042D2C0:
    // 0x0046613C: lw          $v1, 0x0($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X0);
    // 0x00466140: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x00466144: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x00466148: addu        $s3, $a0, $zero
    ctx->r19 = ADD32(ctx->r4, 0);
    // 0x0046614C: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x00466150: addu        $s4, $a1, $zero
    ctx->r20 = ADD32(ctx->r5, 0);
    // 0x00466154: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00466158: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x0046615C: lui         $a1, 0x800F
    ctx->r5 = S32(0X800F << 16);
    // 0x00466160: addiu       $a1, $a1, 0x1850
    ctx->r5 = ADD32(ctx->r5, 0X1850);
    // 0x00466164: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x00466168: addu        $v1, $s3, $zero
    ctx->r3 = ADD32(ctx->r19, 0);
    // 0x0046616C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x00466170: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x00466174: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
L_00466178:
    // 0x00466178: sw          $a1, 0x14($v1)
    MEM_W(0X14, ctx->r3) = ctx->r5;
    // 0x0046617C: sb          $a0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r4;
    // 0x00466180: sw          $zero, 0x40($v1)
    MEM_W(0X40, ctx->r3) = 0;
    // 0x00466184: sw          $zero, 0x1B8($v1)
    MEM_W(0X1B8, ctx->r3) = 0;
    // 0x00466188: sw          $zero, 0x1C0($v1)
    MEM_W(0X1C0, ctx->r3) = 0;
    // 0x0046618C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x00466190: slti        $v0, $s0, 0x80
    ctx->r2 = SIGNED(ctx->r16) < 0X80 ? 1 : 0;
    // 0x00466194: bne         $v0, $zero, L_00466178
    if (ctx->r2 != 0) {
        // 0x00466198: addiu       $v1, $v1, 0x1D8
        ctx->r3 = ADD32(ctx->r3, 0X1D8);
            goto L_00466178;
    }
    // 0x00466198: addiu       $v1, $v1, 0x1D8
    ctx->r3 = ADD32(ctx->r3, 0X1D8);
    // 0x0046619C: ori         $a0, $zero, 0xEC00
    ctx->r4 = 0 | 0XEC00;
    // 0x004661A0: addu        $a0, $s3, $a0
    ctx->r4 = ADD32(ctx->r19, ctx->r4);
    // 0x004661A4: addiu       $a1, $zero, 0x1C4
    ctx->r5 = ADD32(0, 0X1C4);
    // 0x004661A8: jal         0x00200500
    // 0x004661AC: addiu       $a2, $zero, 0x1C8
    ctx->r6 = ADD32(0, 0X1C8);
    func_00200500(rdram, ctx);
        goto after_1;
    // 0x004661AC: addiu       $a2, $zero, 0x1C8
    ctx->r6 = ADD32(0, 0X1C8);
    after_1:
    // 0x004661B0: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x004661B4: ori         $s2, $zero, 0xEC00
    ctx->r18 = 0 | 0XEC00;
    // 0x004661B8: addu        $s1, $s3, $zero
    ctx->r17 = ADD32(ctx->r19, 0);
L_004661BC:
    // 0x004661BC: addu        $a0, $s3, $s2
    ctx->r4 = ADD32(ctx->r19, ctx->r18);
    // 0x004661C0: jal         0x00200574
    // 0x004661C4: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_00200574(rdram, ctx);
        goto after_2;
    // 0x004661C4: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_2:
    // 0x004661C8: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x004661CC: slti        $v0, $s0, 0x80
    ctx->r2 = SIGNED(ctx->r16) < 0X80 ? 1 : 0;
    // 0x004661D0: bne         $v0, $zero, L_004661BC
    if (ctx->r2 != 0) {
        // 0x004661D4: addiu       $s1, $s1, 0x1D8
        ctx->r17 = ADD32(ctx->r17, 0X1D8);
            goto L_004661BC;
    }
    // 0x004661D4: addiu       $s1, $s1, 0x1D8
    ctx->r17 = ADD32(ctx->r17, 0X1D8);
    // 0x004661D8: ori         $a0, $zero, 0xEC14
    ctx->r4 = 0 | 0XEC14;
    // 0x004661DC: addu        $a0, $s3, $a0
    ctx->r4 = ADD32(ctx->r19, ctx->r4);
    // 0x004661E0: addiu       $a1, $zero, 0x1CC
    ctx->r5 = ADD32(0, 0X1CC);
    // 0x004661E4: jal         0x00200500
    // 0x004661E8: addiu       $a2, $zero, 0x1D0
    ctx->r6 = ADD32(0, 0X1D0);
    func_00200500(rdram, ctx);
        goto after_3;
    // 0x004661E8: addiu       $a2, $zero, 0x1D0
    ctx->r6 = ADD32(0, 0X1D0);
    after_3:
    // 0x004661EC: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x004661F0: ori         $s1, $zero, 0xEC28
    ctx->r17 = 0 | 0XEC28;
L_004661F4:
    // 0x004661F4: addu        $a0, $s3, $s1
    ctx->r4 = ADD32(ctx->r19, ctx->r17);
    // 0x004661F8: addiu       $a1, $zero, 0x1C4
    ctx->r5 = ADD32(0, 0X1C4);
    // 0x004661FC: jal         0x00200500
    // 0x00466200: addiu       $a2, $zero, 0x1C8
    ctx->r6 = ADD32(0, 0X1C8);
    func_00200500(rdram, ctx);
        goto after_4;
    // 0x00466200: addiu       $a2, $zero, 0x1C8
    ctx->r6 = ADD32(0, 0X1C8);
    after_4:
    // 0x00466204: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x00466208: slti        $v0, $s0, 0x3
    ctx->r2 = SIGNED(ctx->r16) < 0X3 ? 1 : 0;
    // 0x0046620C: bne         $v0, $zero, L_004661F4
    if (ctx->r2 != 0) {
        // 0x00466210: addiu       $s1, $s1, 0x14
        ctx->r17 = ADD32(ctx->r17, 0X14);
            goto L_004661F4;
    }
    // 0x00466210: addiu       $s1, $s1, 0x14
    ctx->r17 = ADD32(ctx->r17, 0X14);
    // 0x00466214: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x00466218: addiu       $a0, $a0, 0x1850
    ctx->r4 = ADD32(ctx->r4, 0X1850);
    // 0x0046621C: jal         0x0027BD10
    // 0x00466220: nop

    func_0027BD10(rdram, ctx);
        goto after_5;
    // 0x00466220: nop

    after_5:
    // 0x00466224: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x00466228: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x0046622C: addiu       $t2, $zero, 0x2
    ctx->r10 = ADD32(0, 0X2);
    // 0x00466230: addiu       $t1, $zero, 0x3
    ctx->r9 = ADD32(0, 0X3);
    // 0x00466234: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x00466238: addiu       $a2, $zero, -0x8000
    ctx->r6 = ADD32(0, -0X8000);
    // 0x0046623C: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x00466240: lui         $v1, 0x800F
    ctx->r3 = S32(0X800F << 16);
    // 0x00466244: addiu       $v1, $v1, 0x1930
    ctx->r3 = ADD32(ctx->r3, 0X1930);
L_00466248:
    // 0x00466248: beq         $a0, $t0, L_00466290
    if (ctx->r4 == ctx->r8) {
        // 0x0046624C: slti        $v0, $a0, 0x2
        ctx->r2 = SIGNED(ctx->r4) < 0X2 ? 1 : 0;
            goto L_00466290;
    }
    // 0x0046624C: slti        $v0, $a0, 0x2
    ctx->r2 = SIGNED(ctx->r4) < 0X2 ? 1 : 0;
    // 0x00466250: beq         $v0, $zero, L_00466268
    if (ctx->r2 == 0) {
        // 0x00466254: nop
    
            goto L_00466268;
    }
    // 0x00466254: nop

    // 0x00466258: beql        $a0, $zero, L_00466280
    if (ctx->r4 == 0) {
        // 0x0046625C: sh          $a3, 0x0($v1)
        MEM_H(0X0, ctx->r3) = ctx->r7;
            goto L_00466280;
    }
    goto skip_0;
    // 0x0046625C: sh          $a3, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r7;
    skip_0:
    // 0x00466260: j           L_0042D2C0
    // 0x00466264: sh          $zero, 0x4($v1)
    MEM_H(0X4, ctx->r3) = 0;
    entry_0042D2C0(rdram, ctx);
    return;
    // 0x00466264: sh          $zero, 0x4($v1)
    MEM_H(0X4, ctx->r3) = 0;
L_00466268:
    // 0x00466268: beql        $a0, $t2, L_004662A4
    if (ctx->r4 == ctx->r10) {
        // 0x0046626C: sh          $t0, 0x0($v1)
        MEM_H(0X0, ctx->r3) = ctx->r8;
            goto L_004662A4;
    }
    goto skip_1;
    // 0x0046626C: sh          $t0, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r8;
    skip_1:
    // 0x00466270: beql        $a0, $t1, L_004662B0
    if (ctx->r4 == ctx->r9) {
        // 0x00466274: sh          $a3, 0x0($v1)
        MEM_H(0X0, ctx->r3) = ctx->r7;
            goto L_004662B0;
    }
    goto skip_2;
    // 0x00466274: sh          $a3, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r7;
    skip_2:
    // 0x00466278: j           L_0042D2C0
    // 0x0046627C: sh          $zero, 0x4($v1)
    MEM_H(0X4, ctx->r3) = 0;
    entry_0042D2C0(rdram, ctx);
    return;
    // 0x0046627C: sh          $zero, 0x4($v1)
    MEM_H(0X4, ctx->r3) = 0;
L_00466280:
    // 0x00466280: sh          $t0, 0x2($v1)
    MEM_H(0X2, ctx->r3) = ctx->r8;
    // 0x00466284: sh          $a2, 0x8($v1)
    MEM_H(0X8, ctx->r3) = ctx->r6;
    // 0x00466288: j           L_0042D2BC
    // 0x0046628C: sh          $a2, 0xA($v1)
    MEM_H(0XA, ctx->r3) = ctx->r6;
    entry_0042D2BC(rdram, ctx);
    return;
    // 0x0046628C: sh          $a2, 0xA($v1)
    MEM_H(0XA, ctx->r3) = ctx->r6;
L_00466290:
    // 0x00466290: sh          $a0, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r4;
    // 0x00466294: sh          $a0, 0x2($v1)
    MEM_H(0X2, ctx->r3) = ctx->r4;
    // 0x00466298: sh          $zero, 0x8($v1)
    MEM_H(0X8, ctx->r3) = 0;
    // 0x0046629C: j           L_0042D2BC
    // 0x004662A0: sh          $a2, 0xA($v1)
    MEM_H(0XA, ctx->r3) = ctx->r6;
    entry_0042D2BC(rdram, ctx);
    return;
    // 0x004662A0: sh          $a2, 0xA($v1)
    MEM_H(0XA, ctx->r3) = ctx->r6;
L_004662A4:
    // 0x004662A4: sh          $a3, 0x2($v1)
    MEM_H(0X2, ctx->r3) = ctx->r7;
    // 0x004662A8: j           L_0042D2B8
    // 0x004662AC: sh          $zero, 0x8($v1)
    MEM_H(0X8, ctx->r3) = 0;
    entry_0042D2B8(rdram, ctx);
    return;
    // 0x004662AC: sh          $zero, 0x8($v1)
    MEM_H(0X8, ctx->r3) = 0;
L_004662B0:
    // 0x004662B0: sh          $a3, 0x2($v1)
    MEM_H(0X2, ctx->r3) = ctx->r7;
    // 0x004662B4: sh          $a2, 0x8($v1)
    MEM_H(0X8, ctx->r3) = ctx->r6;
    // 0x004662B8: sh          $zero, 0xA($v1)
    MEM_H(0XA, ctx->r3) = 0;
    // 0x004662BC: sh          $zero, 0x4($v1)
    MEM_H(0X4, ctx->r3) = 0;
    // 0x004662C0: sh          $zero, 0x6($v1)
    MEM_H(0X6, ctx->r3) = 0;
    // 0x004662C4: sb          $a1, 0xC($v1)
    MEM_B(0XC, ctx->r3) = ctx->r5;
    // 0x004662C8: sb          $a1, 0xD($v1)
    MEM_B(0XD, ctx->r3) = ctx->r5;
    // 0x004662CC: sb          $a1, 0xE($v1)
    MEM_B(0XE, ctx->r3) = ctx->r5;
    // 0x004662D0: sb          $a1, 0xF($v1)
    MEM_B(0XF, ctx->r3) = ctx->r5;
    // 0x004662D4: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x004662D8: slti        $v0, $a0, 0x4
    ctx->r2 = SIGNED(ctx->r4) < 0X4 ? 1 : 0;
    // 0x004662DC: bne         $v0, $zero, L_00466248
    if (ctx->r2 != 0) {
        // 0x004662E0: addiu       $v1, $v1, 0x10
        ctx->r3 = ADD32(ctx->r3, 0X10);
            goto L_00466248;
    }
    // 0x004662E0: addiu       $v1, $v1, 0x10
    ctx->r3 = ADD32(ctx->r3, 0X10);
    // 0x004662E4: lui         $a1, 0x3FC9
    ctx->r5 = S32(0X3FC9 << 16);
    // 0x004662E8: ori         $a1, $a1, 0xFDB
    ctx->r5 = ctx->r5 | 0XFDB;
    // 0x004662EC: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x004662F0: addiu       $a0, $a0, 0x18F0
    ctx->r4 = ADD32(ctx->r4, 0X18F0);
    // 0x004662F4: jal         0x00210518
    // 0x004662F8: nop

    func_00210518(rdram, ctx);
        goto after_6;
    // 0x004662F8: nop

    after_6:
    // 0x004662FC: lui         $at, 0x1
    ctx->r1 = S32(0X1 << 16);
    // 0x00466300: addu        $at, $s3, $at
    ctx->r1 = ADD32(ctx->r19, ctx->r1);
    // 0x00466304: sw          $s4, -0x139C($at)
    MEM_W(-0X139C, ctx->r1) = ctx->r20;
    // 0x00466308: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x0046630C: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x00466310: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x00466314: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x00466318: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x0046631C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00466320: jr          $ra
    // 0x00466324: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x00466324: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_00455054(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_0041C0AC:
    // 0x00455054: lw          $v0, 0x1C($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X1C);
L_0041C0B0:
    // 0x00455058: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x0045505C: addiu       $v1, $v1, -0x54E8
    ctx->r3 = ADD32(ctx->r3, -0X54E8);
    // 0x00455060: beq         $v0, $zero, L_00455074
    if (ctx->r2 == 0) {
        // 0x00455064: nop
    
            goto L_00455074;
    }
    // 0x00455064: nop

    // 0x00455068: lw          $v0, 0x518($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X518);
    // 0x0045506C: bnel        $v0, $zero, L_00455074
    if (ctx->r2 != 0) {
        // 0x00455070: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_00455074;
    }
    goto skip_0;
    // 0x00455070: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    skip_0:
L_00455074:
    // 0x00455074: lbu         $v1, 0x2D($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X2D);
    // 0x00455078: beq         $v1, $zero, L_00455090
    if (ctx->r3 == 0) {
        // 0x0045507C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_00455090;
    }
    // 0x0045507C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00455080: beq         $v1, $v0, L_004550A0
    if (ctx->r3 == ctx->r2) {
        // 0x00455084: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_004550A0;
    }
    // 0x00455084: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x00455088: j           L_0041C0B0
    // 0x0045508C: nop

    entry_0041C0B0(rdram, ctx);
    return;
    // 0x0045508C: nop

L_00455090:
    // 0x00455090: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00455094: addiu       $v0, $v0, 0x3F48
    ctx->r2 = ADD32(ctx->r2, 0X3F48);
    // 0x00455098: j           L_0041C0AC
    // 0x0045509C: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    entry_0041C0AC(rdram, ctx);
    return;
    // 0x0045509C: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_004550A0:
    // 0x004550A0: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x004550A4: addiu       $v0, $v0, 0x3F30
    ctx->r2 = ADD32(ctx->r2, 0X3F30);
    // 0x004550A8: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    // 0x004550AC: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x004550B0: jr          $ra
    // 0x004550B4: nop

    return;
    // 0x004550B4: nop

;}
RECOMP_FUNC void func_002551A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002551A0: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x002551A4: sw          $zero, 0x0($a0)
    MEM_W(0X0, ctx->r4) = 0;
    // 0x002551A8: sw          $zero, 0x4($a0)
    MEM_W(0X4, ctx->r4) = 0;
    // 0x002551AC: sw          $v0, 0x37C($a0)
    MEM_W(0X37C, ctx->r4) = ctx->r2;
    // 0x002551B0: jr          $ra
    // 0x002551B4: sw          $zero, 0x8($a0)
    MEM_W(0X8, ctx->r4) = 0;
    return;
    // 0x002551B4: sw          $zero, 0x8($a0)
    MEM_W(0X8, ctx->r4) = 0;
;}
RECOMP_FUNC void func_0045D56C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_004245C4:
    // 0x0045D56C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
L_004245C8:
    // 0x0045D570: addu        $t1, $zero, $zero
    ctx->r9 = ADD32(0, 0);
    // 0x0045D574: addu        $v1, $t1, $zero
    ctx->r3 = ADD32(ctx->r9, 0);
    // 0x0045D578: lui         $t0, 0x8000
    ctx->r8 = S32(0X8000 << 16);
    // 0x0045D57C: lw          $t0, 0x300($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X300);
    // 0x0045D580: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0045D584: beq         $t0, $v0, L_0045D5C4
    if (ctx->r8 == ctx->r2) {
        // 0x0045D588: sw          $ra, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->r31;
            goto L_0045D5C4;
    }
    // 0x0045D588: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x0045D58C: slti        $v0, $t0, 0x2
    ctx->r2 = SIGNED(ctx->r8) < 0X2 ? 1 : 0;
    // 0x0045D590: beql        $v0, $zero, L_0045D5A8
    if (ctx->r2 == 0) {
        // 0x0045D594: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_0045D5A8;
    }
    goto skip_0;
    // 0x0045D594: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x0045D598: beq         $t0, $zero, L_0045D5B8
    if (ctx->r8 == 0) {
        // 0x0045D59C: sltiu       $t0, $a0, 0x141
        ctx->r8 = ctx->r4 < 0X141 ? 1 : 0;
            goto L_0045D5B8;
    }
    // 0x0045D59C: sltiu       $t0, $a0, 0x141
    ctx->r8 = ctx->r4 < 0X141 ? 1 : 0;
    // 0x0045D5A0: j           L_004245C8
    // 0x0045D5A4: nop

    entry_004245C8(rdram, ctx);
    return;
    // 0x0045D5A4: nop

L_0045D5A8:
    // 0x0045D5A8: beq         $t0, $v0, L_0045D5C0
    if (ctx->r8 == ctx->r2) {
        // 0x0045D5AC: sltiu       $t0, $a0, 0x141
        ctx->r8 = ctx->r4 < 0X141 ? 1 : 0;
            goto L_0045D5C0;
    }
    // 0x0045D5AC: sltiu       $t0, $a0, 0x141
    ctx->r8 = ctx->r4 < 0X141 ? 1 : 0;
    // 0x0045D5B0: j           L_004245C8
    // 0x0045D5B4: nop

    entry_004245C8(rdram, ctx);
    return;
    // 0x0045D5B4: nop

L_0045D5B8:
    // 0x0045D5B8: j           L_004245C4
    // 0x0045D5BC: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    entry_004245C4(rdram, ctx);
    return;
    // 0x0045D5BC: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_0045D5C0:
    // 0x0045D5C0: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
L_0045D5C4:
    // 0x0045D5C4: sltiu       $t0, $a0, 0x141
    ctx->r8 = ctx->r4 < 0X141 ? 1 : 0;
    // 0x0045D5C8: beql        $t0, $zero, L_0045D5D0
    if (ctx->r8 == 0) {
        // 0x0045D5CC: ori         $t1, $t1, 0x4
        ctx->r9 = ctx->r9 | 0X4;
            goto L_0045D5D0;
    }
    goto skip_1;
    // 0x0045D5CC: ori         $t1, $t1, 0x4
    ctx->r9 = ctx->r9 | 0X4;
    skip_1:
L_0045D5D0:
    // 0x0045D5D0: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0045D5D4: lw          $v0, -0x476C($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X476C);
    // 0x0045D5D8: bnel        $v0, $zero, L_0045D5E0
    if (ctx->r2 != 0) {
        // 0x0045D5DC: ori         $t1, $t1, 0x2
        ctx->r9 = ctx->r9 | 0X2;
            goto L_0045D5E0;
    }
    goto skip_2;
    // 0x0045D5DC: ori         $t1, $t1, 0x2
    ctx->r9 = ctx->r9 | 0X2;
    skip_2:
L_0045D5E0:
    // 0x0045D5E0: beql        $t0, $zero, L_0045D5E8
    if (ctx->r8 == 0) {
        // 0x0045D5E4: ori         $t1, $t1, 0x1
        ctx->r9 = ctx->r9 | 0X1;
            goto L_0045D5E8;
    }
    goto skip_3;
    // 0x0045D5E4: ori         $t1, $t1, 0x1
    ctx->r9 = ctx->r9 | 0X1;
    skip_3:
L_0045D5E8:
    // 0x0045D5E8: sll         $v0, $t1, 2
    ctx->r2 = S32(ctx->r9 << 2);
    // 0x0045D5EC: sll         $v1, $v1, 5
    ctx->r3 = S32(ctx->r3 << 5);
    // 0x0045D5F0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x0045D5F4: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0045D5F8: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x0045D5FC: lhu         $v1, 0x21AA($at)
    ctx->r3 = MEM_HU(ctx->r1, 0X21AA);
    // 0x0045D600: lw          $v0, 0x30($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X30);
    // 0x0045D604: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x0045D608: lw          $v0, 0x34($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X34);
    // 0x0045D60C: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0045D610: sh          $v1, 0x9D0($at)
    MEM_H(0X9D0, ctx->r1) = ctx->r3;
    // 0x0045D614: jal         0x00423F28
    // 0x0045D618: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    entry_00423F28(rdram, ctx);
        goto after_0;
    // 0x0045D618: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    after_0:
    // 0x0045D61C: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x0045D620: addiu       $v0, $v0, -0x6710
    ctx->r2 = ADD32(ctx->r2, -0X6710);
    // 0x0045D624: beq         $v0, $zero, L_0045D654
    if (ctx->r2 == 0) {
        // 0x0045D628: nop
    
            goto L_0045D654;
    }
    // 0x0045D628: nop

    // 0x0045D62C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0045D630: lwc1        $f0, 0x2030($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X2030);
    // 0x0045D634: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x0045D638: swc1        $f0, 0x288($v0)
    MEM_W(0X288, ctx->r2) = ctx->f0.u32l;
    // 0x0045D63C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0045D640: lwc1        $f0, 0x2034($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X2034);
    // 0x0045D644: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x0045D648: sw          $zero, 0x290($v0)
    MEM_W(0X290, ctx->r2) = 0;
    // 0x0045D64C: sw          $zero, 0x294($v0)
    MEM_W(0X294, ctx->r2) = 0;
    // 0x0045D650: swc1        $f0, 0x28C($v0)
    MEM_W(0X28C, ctx->r2) = ctx->f0.u32l;
L_0045D654:
    // 0x0045D654: lw          $v0, -0x20($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X20);
    // 0x0045D658: beq         $v0, $zero, L_0045D694
    if (ctx->r2 == 0) {
        // 0x0045D65C: nop
    
            goto L_0045D694;
    }
    // 0x0045D65C: nop

    // 0x0045D660: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0045D664: lwc1        $f1, 0x2030($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X2030);
    // 0x0045D668: cvt.s.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.fl = CVT_S_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x0045D66C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0045D670: lwc1        $f0, 0x2034($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X2034);
    // 0x0045D674: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x0045D678: sw          $zero, 0x290($v0)
    MEM_W(0X290, ctx->r2) = 0;
L_0045D67C:
    // 0x0045D67C: sw          $zero, 0x294($v0)
    MEM_W(0X294, ctx->r2) = 0;
    // 0x0045D680: swc1        $f1, 0x288($v0)
    MEM_W(0X288, ctx->r2) = ctx->f_odd[(1 - 1) * 2];
    // 0x0045D684: swc1        $f0, 0x28C($v0)
    MEM_W(0X28C, ctx->r2) = ctx->f0.u32l;
    // 0x0045D688: lw          $v0, 0x4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4);
    // 0x0045D68C: bnel        $v0, $zero, L_0045D67C
    if (ctx->r2 != 0) {
        // 0x0045D690: sw          $zero, 0x290($v0)
        MEM_W(0X290, ctx->r2) = 0;
            goto L_0045D67C;
    }
    goto skip_4;
    // 0x0045D690: sw          $zero, 0x290($v0)
    MEM_W(0X290, ctx->r2) = 0;
    skip_4:
L_0045D694:
    // 0x0045D694: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x0045D698: jr          $ra
    // 0x0045D69C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x0045D69C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_0042D114(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0042D114: add.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f0.fl;
    // 0x0042D118: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x0042D11C: c.le.s      $f20, $f2
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f20.fl <= ctx->f2.fl;
;}
RECOMP_FUNC void func_0042655C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0042655C: sll         $a0, $a0, 2
    ctx->r4 = S32(ctx->r4 << 2);
    // 0x00426560: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x00426564: addu        $at, $at, $a0
    ctx->r1 = ADD32(ctx->r1, ctx->r4);
    // 0x00426568: lw          $v1, 0xC60($at)
    ctx->r3 = MEM_W(ctx->r1, 0XC60);
    // 0x0042656C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x00426570: bne         $v1, $v0, L_0042658C
    if (ctx->r3 != ctx->r2) {
            // 0x00426574: nop

    func_0042658C(rdram, ctx);
    return;
    }
    // 0x00426574: nop

    // 0x00426578: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0042657C: addu        $at, $at, $a0
    ctx->r1 = ADD32(ctx->r1, ctx->r4);
    // 0x00426580: lw          $v0, 0xC70($at)
    ctx->r2 = MEM_W(ctx->r1, 0XC70);
    // 0x00426584: jr          $ra
    // 0x00426588: nop

    return;
    // 0x00426588: nop

;}
RECOMP_FUNC void func_002241C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002241C0: lw          $v0, 0x74($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X74);
    // 0x002241C4: sll         $a1, $a1, 1
    ctx->r5 = S32(ctx->r5 << 1);
    // 0x002241C8: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x002241CC: lhu         $v0, 0x8($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X8);
    // 0x002241D0: jr          $ra
    // 0x002241D4: nop

    return;
    // 0x002241D4: nop

;}
RECOMP_FUNC void func_00218B08(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00218B08: sll         $zero, $a0, 0
    (void)(S32(ctx->r4 << 0));
    // 0x00218B0C: mthi        $zero
    hi = 0;
;}
RECOMP_FUNC void func_002426F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002426F4: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x002426F8: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x002426FC: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x00242700: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x00242704: addu        $s2, $a1, $zero
    ctx->r18 = ADD32(ctx->r5, 0);
    // 0x00242708: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x0024270C: addu        $s3, $a2, $zero
    ctx->r19 = ADD32(ctx->r6, 0);
    // 0x00242710: sw          $ra, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r31;
    // 0x00242714: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x00242718: sdc1        $f20, 0x38($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X38, ctx->r29);
    // 0x0024271C: lwc1        $f12, 0x25C($s2)
    ctx->f12.u32l = MEM_W(ctx->r18, 0X25C);
    // 0x00242720: jal         0x002982F0
    // 0x00242724: addu        $s0, $a3, $zero
    ctx->r16 = ADD32(ctx->r7, 0);
    func_002982F0(rdram, ctx);
        goto after_0;
    // 0x00242724: addu        $s0, $a3, $zero
    ctx->r16 = ADD32(ctx->r7, 0);
    after_0:
    // 0x00242728: lwc1        $f12, 0x25C($s2)
    ctx->f12.u32l = MEM_W(ctx->r18, 0X25C);
    // 0x0024272C: jal         0x002974C0
    // 0x00242730: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    func_002974C0(rdram, ctx);
        goto after_1;
    // 0x00242730: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    after_1:
    // 0x00242734: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x00242738: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0024273C: addiu       $a1, $s0, 0x30
    ctx->r5 = ADD32(ctx->r16, 0X30);
    // 0x00242740: mul.s       $f20, $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = MUL_S(ctx->f20.fl, ctx->f0.fl);
    // 0x00242744: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    // 0x00242748: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x0024274C: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x00242750: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x00242754: jal         0x0023AB18
    // 0x00242758: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    func_0023AB18(rdram, ctx);
        goto after_2;
    // 0x00242758: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    after_2:
    // 0x0024275C: beq         $v0, $zero, L_002427BC
    if (ctx->r2 == 0) {
        // 0x00242760: lui         $v0, 0x1
        ctx->r2 = S32(0X1 << 16);
            goto L_002427BC;
    }
    // 0x00242760: lui         $v0, 0x1
    ctx->r2 = S32(0X1 << 16);
    // 0x00242764: lw          $v1, 0x140($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X140);
    // 0x00242768: or          $a0, $v1, $v0
    ctx->r4 = ctx->r3 | ctx->r2;
    // 0x0024276C: sw          $a0, 0x140($s2)
    MEM_W(0X140, ctx->r18) = ctx->r4;
    // 0x00242770: lbu         $v1, 0x0($s3)
    ctx->r3 = MEM_BU(ctx->r19, 0X0);
    // 0x00242774: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00242778: bne         $v1, $v0, L_00242798
    if (ctx->r3 != ctx->r2) {
        // 0x0024277C: lui         $v1, 0x30
        ctx->r3 = S32(0X30 << 16);
            goto L_00242798;
    }
    // 0x0024277C: lui         $v1, 0x30
    ctx->r3 = S32(0X30 << 16);
    // 0x00242780: lw          $v0, 0xD4($s3)
    ctx->r2 = MEM_W(ctx->r19, 0XD4);
    // 0x00242784: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x00242788: beq         $v0, $zero, L_00242798
    if (ctx->r2 == 0) {
        // 0x0024278C: lui         $v0, 0x2
        ctx->r2 = S32(0X2 << 16);
            goto L_00242798;
    }
    // 0x0024278C: lui         $v0, 0x2
    ctx->r2 = S32(0X2 << 16);
    // 0x00242790: or          $v0, $a0, $v0
    ctx->r2 = ctx->r4 | ctx->r2;
    // 0x00242794: sw          $v0, 0x140($s2)
    MEM_W(0X140, ctx->r18) = ctx->r2;
L_00242798:
    // 0x00242798: lwc1        $f0, 0x1C($s3)
    ctx->f0.u32l = MEM_W(ctx->r19, 0X1C);
    // 0x0024279C: mtc1        $zero, $f1
    ctx->f_odd[(1 - 1) * 2] = 0;
    // 0x002427A0: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x002427A4: nop

    // 0x002427A8: bc1f        L_002427B4
    if (!c1cs) {
        // 0x002427AC: sw          $s2, 0x30($s3)
        MEM_W(0X30, ctx->r19) = ctx->r18;
            goto L_002427B4;
    }
    // 0x002427AC: sw          $s2, 0x30($s3)
    MEM_W(0X30, ctx->r19) = ctx->r18;
    // 0x002427B0: swc1        $f1, 0x1C($s3)
    MEM_W(0X1C, ctx->r19) = ctx->f_odd[(1 - 1) * 2];
L_002427B4:
    // 0x002427B4: j           L_002427C0
    // 0x002427B8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_002427C0;
    // 0x002427B8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_002427BC:
    // 0x002427BC: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_002427C0:
    // 0x002427C0: lw          $ra, 0x30($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X30);
    // 0x002427C4: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x002427C8: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x002427CC: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x002427D0: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x002427D4: ldc1        $f20, 0x38($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X38);
    // 0x002427D8: jr          $ra
    // 0x002427DC: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x002427DC: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_00454F94(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_0041BFE8:
    // 0x00454F94: lw          $v0, 0x1C($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X1C);
    // 0x00454F98: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x00454F9C: addiu       $v1, $v1, -0x54E8
    ctx->r3 = ADD32(ctx->r3, -0X54E8);
    // 0x00454FA0: beq         $v0, $zero, L_00454FB4
    if (ctx->r2 == 0) {
        // 0x00454FA4: nop
    
            goto L_00454FB4;
    }
    // 0x00454FA4: nop

    // 0x00454FA8: lw          $v0, 0x518($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X518);
    // 0x00454FAC: bnel        $v0, $zero, L_00454FB4
    if (ctx->r2 != 0) {
        // 0x00454FB0: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_00454FB4;
    }
    goto skip_0;
    // 0x00454FB0: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    skip_0:
L_00454FB4:
    // 0x00454FB4: lbu         $v1, 0x2C($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X2C);
    // 0x00454FB8: beq         $v1, $zero, L_00454FDC
    if (ctx->r3 == 0) {
        // 0x00454FBC: nop
    
            goto L_00454FDC;
    }
    // 0x00454FBC: nop

    // 0x00454FC0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00454FC4: bne         $v1, $v0, L_00454FE8
    if (ctx->r3 != ctx->r2) {
        // 0x00454FC8: nop
    
            goto L_00454FE8;
    }
    // 0x00454FC8: nop

    // 0x00454FCC: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00454FD0: addiu       $v0, $v0, 0x3F00
    ctx->r2 = ADD32(ctx->r2, 0X3F00);
    // 0x00454FD4: j           L_0041BFE8
    // 0x00454FD8: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    entry_0041BFE8(rdram, ctx);
    return;
    // 0x00454FD8: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_00454FDC:
    // 0x00454FDC: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00454FE0: addiu       $v0, $v0, 0x3F18
    ctx->r2 = ADD32(ctx->r2, 0X3F18);
    // 0x00454FE4: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_00454FE8:
    // 0x00454FE8: jr          $ra
    // 0x00454FEC: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x00454FEC: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void func_0029DA30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0029DA30: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x0029DA34: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0029DA38: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x0029DA3C: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x0029DA40: addu        $s2, $a1, $zero
    ctx->r18 = ADD32(ctx->r5, 0);
    // 0x0029DA44: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x0029DA48: addu        $s1, $a2, $zero
    ctx->r17 = ADD32(ctx->r6, 0);
    // 0x0029DA4C: bne         $s1, $zero, L_0029DA6C
    if (ctx->r17 != 0) {
        // 0x0029DA50: sw          $ra, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r31;
            goto L_0029DA6C;
    }
    // 0x0029DA50: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x0029DA54: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x0029DA58: addiu       $a0, $a0, -0x5650
    ctx->r4 = ADD32(ctx->r4, -0X5650);
    // 0x0029DA5C: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x0029DA60: addiu       $a1, $a1, -0x564C
    ctx->r5 = ADD32(ctx->r5, -0X564C);
    // 0x0029DA64: jal         0x0029B020
    // 0x0029DA68: addiu       $a2, $zero, 0x2B
    ctx->r6 = ADD32(0, 0X2B);
    func_0029B020(rdram, ctx);
        goto after_0;
    // 0x0029DA68: addiu       $a2, $zero, 0x2B
    ctx->r6 = ADD32(0, 0X2B);
    after_0:
L_0029DA6C:
    // 0x0029DA6C: lui         $v0, 0xA460
    ctx->r2 = S32(0XA460 << 16);
    // 0x0029DA70: ori         $v0, $v0, 0x10
    ctx->r2 = ctx->r2 | 0X10;
    // 0x0029DA74: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x0029DA78: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
    // 0x0029DA7C: beq         $v0, $zero, L_0029DA9C
    if (ctx->r2 == 0) {
        // 0x0029DA80: nop
    
            goto L_0029DA9C;
    }
    // 0x0029DA80: nop

    // 0x0029DA84: lui         $v1, 0xA460
    ctx->r3 = S32(0XA460 << 16);
    // 0x0029DA88: ori         $v1, $v1, 0x10
    ctx->r3 = ctx->r3 | 0X10;
L_0029DA8C:
    // 0x0029DA8C: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x0029DA90: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
    // 0x0029DA94: bne         $v0, $zero, L_0029DA8C
    if (ctx->r2 != 0) {
        // 0x0029DA98: nop
    
            goto L_0029DA8C;
    }
    // 0x0029DA98: nop

L_0029DA9C:
    // 0x0029DA9C: lbu         $a1, 0x9($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X9);
    // 0x0029DAA0: sll         $v0, $a1, 2
    ctx->r2 = S32(ctx->r5 << 2);
    // 0x0029DAA4: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0029DAA8: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x0029DAAC: lw          $a0, -0x7680($at)
    ctx->r4 = MEM_W(ctx->r1, -0X7680);
    // 0x0029DAB0: beq         $a0, $s0, L_0029DB90
    if (ctx->r4 == ctx->r16) {
        // 0x0029DAB4: nop
    
            goto L_0029DB90;
    }
    // 0x0029DAB4: nop

    // 0x0029DAB8: bne         $a1, $zero, L_0029DB20
    if (ctx->r5 != 0) {
        // 0x0029DABC: nop
    
            goto L_0029DB20;
    }
    // 0x0029DABC: nop

    // 0x0029DAC0: lbu         $v1, 0x5($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X5);
    // 0x0029DAC4: lbu         $v0, 0x5($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X5);
    // 0x0029DAC8: beq         $v1, $v0, L_0029DAD8
    if (ctx->r3 == ctx->r2) {
        // 0x0029DACC: lui         $v1, 0xA460
        ctx->r3 = S32(0XA460 << 16);
            goto L_0029DAD8;
    }
    // 0x0029DACC: lui         $v1, 0xA460
    ctx->r3 = S32(0XA460 << 16);
    // 0x0029DAD0: ori         $v1, $v1, 0x14
    ctx->r3 = ctx->r3 | 0X14;
    // 0x0029DAD4: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
L_0029DAD8:
    // 0x0029DAD8: lbu         $v1, 0x6($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X6);
    // 0x0029DADC: lbu         $v0, 0x6($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X6);
    // 0x0029DAE0: beq         $v1, $v0, L_0029DAF0
    if (ctx->r3 == ctx->r2) {
        // 0x0029DAE4: lui         $v1, 0xA460
        ctx->r3 = S32(0XA460 << 16);
            goto L_0029DAF0;
    }
    // 0x0029DAE4: lui         $v1, 0xA460
    ctx->r3 = S32(0XA460 << 16);
    // 0x0029DAE8: ori         $v1, $v1, 0x1C
    ctx->r3 = ctx->r3 | 0X1C;
    // 0x0029DAEC: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
L_0029DAF0:
    // 0x0029DAF0: lbu         $v1, 0x7($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X7);
    // 0x0029DAF4: lbu         $v0, 0x7($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X7);
    // 0x0029DAF8: beq         $v1, $v0, L_0029DB08
    if (ctx->r3 == ctx->r2) {
        // 0x0029DAFC: lui         $v1, 0xA460
        ctx->r3 = S32(0XA460 << 16);
            goto L_0029DB08;
    }
    // 0x0029DAFC: lui         $v1, 0xA460
    ctx->r3 = S32(0XA460 << 16);
    // 0x0029DB00: ori         $v1, $v1, 0x20
    ctx->r3 = ctx->r3 | 0X20;
    // 0x0029DB04: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
L_0029DB08:
    // 0x0029DB08: lbu         $v1, 0x8($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X8);
    // 0x0029DB0C: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x0029DB10: beq         $v1, $v0, L_0029DB80
    if (ctx->r3 == ctx->r2) {
        // 0x0029DB14: lui         $v1, 0xA460
        ctx->r3 = S32(0XA460 << 16);
            goto L_0029DB80;
    }
    // 0x0029DB14: lui         $v1, 0xA460
    ctx->r3 = S32(0XA460 << 16);
    // 0x0029DB18: j           L_0029DB7C
    // 0x0029DB1C: ori         $v1, $v1, 0x18
    ctx->r3 = ctx->r3 | 0X18;
        goto L_0029DB7C;
    // 0x0029DB1C: ori         $v1, $v1, 0x18
    ctx->r3 = ctx->r3 | 0X18;
L_0029DB20:
    // 0x0029DB20: lbu         $v1, 0x5($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X5);
    // 0x0029DB24: lbu         $v0, 0x5($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X5);
    // 0x0029DB28: beq         $v1, $v0, L_0029DB38
    if (ctx->r3 == ctx->r2) {
        // 0x0029DB2C: lui         $v1, 0xA460
        ctx->r3 = S32(0XA460 << 16);
            goto L_0029DB38;
    }
    // 0x0029DB2C: lui         $v1, 0xA460
    ctx->r3 = S32(0XA460 << 16);
    // 0x0029DB30: ori         $v1, $v1, 0x24
    ctx->r3 = ctx->r3 | 0X24;
    // 0x0029DB34: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
L_0029DB38:
    // 0x0029DB38: lbu         $v1, 0x6($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X6);
    // 0x0029DB3C: lbu         $v0, 0x6($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X6);
    // 0x0029DB40: beq         $v1, $v0, L_0029DB50
    if (ctx->r3 == ctx->r2) {
        // 0x0029DB44: lui         $v1, 0xA460
        ctx->r3 = S32(0XA460 << 16);
            goto L_0029DB50;
    }
    // 0x0029DB44: lui         $v1, 0xA460
    ctx->r3 = S32(0XA460 << 16);
    // 0x0029DB48: ori         $v1, $v1, 0x2C
    ctx->r3 = ctx->r3 | 0X2C;
    // 0x0029DB4C: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
L_0029DB50:
    // 0x0029DB50: lbu         $v1, 0x7($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X7);
    // 0x0029DB54: lbu         $v0, 0x7($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X7);
    // 0x0029DB58: beq         $v1, $v0, L_0029DB68
    if (ctx->r3 == ctx->r2) {
        // 0x0029DB5C: lui         $v1, 0xA460
        ctx->r3 = S32(0XA460 << 16);
            goto L_0029DB68;
    }
    // 0x0029DB5C: lui         $v1, 0xA460
    ctx->r3 = S32(0XA460 << 16);
    // 0x0029DB60: ori         $v1, $v1, 0x30
    ctx->r3 = ctx->r3 | 0X30;
    // 0x0029DB64: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
L_0029DB68:
    // 0x0029DB68: lbu         $v1, 0x8($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X8);
    // 0x0029DB6C: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x0029DB70: beq         $v1, $v0, L_0029DB80
    if (ctx->r3 == ctx->r2) {
        // 0x0029DB74: lui         $v1, 0xA460
        ctx->r3 = S32(0XA460 << 16);
            goto L_0029DB80;
    }
    // 0x0029DB74: lui         $v1, 0xA460
    ctx->r3 = S32(0XA460 << 16);
    // 0x0029DB78: ori         $v1, $v1, 0x28
    ctx->r3 = ctx->r3 | 0X28;
L_0029DB7C:
    // 0x0029DB7C: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
L_0029DB80:
    // 0x0029DB80: sll         $v0, $a1, 2
    ctx->r2 = S32(ctx->r5 << 2);
    // 0x0029DB84: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0029DB88: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x0029DB8C: sw          $s0, -0x7680($at)
    MEM_W(-0X7680, ctx->r1) = ctx->r16;
L_0029DB90:
    // 0x0029DB90: lw          $v0, 0xC($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC);
    // 0x0029DB94: lui         $v1, 0xA000
    ctx->r3 = S32(0XA000 << 16);
    // 0x0029DB98: or          $v0, $v0, $s2
    ctx->r2 = ctx->r2 | ctx->r18;
    // 0x0029DB9C: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x0029DBA0: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x0029DBA4: sw          $v0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r2;
    // 0x0029DBA8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x0029DBAC: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x0029DBB0: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x0029DBB4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0029DBB8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x0029DBBC: jr          $ra
    // 0x0029DBC0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x0029DBC0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_0023CEC0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0023CEC0: lwc1        $f1, 0x0($a0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r4, 0X0);
    // 0x0023CEC4: lwc1        $f0, 0x0($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X0);
    // 0x0023CEC8: sub.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl - ctx->f0.fl;
    // 0x0023CECC: mul.s       $f1, $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f1.fl);
    // 0x0023CED0: lwc1        $f2, 0x8($a1)
    ctx->f2.u32l = MEM_W(ctx->r5, 0X8);
    // 0x0023CED4: lwc1        $f0, 0x8($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X8);
    // 0x0023CED8: sub.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f2.fl;
    // 0x0023CEDC: mul.s       $f0, $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x0023CEE0: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x0023CEE4: lwc1        $f0, 0x10($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X10);
    // 0x0023CEE8: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x0023CEEC: nop

    // 0x0023CEF0: bc1t        L_0023CEFC
    if (c1cs) {
        // 0x0023CEF4: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_0023CEFC;
    }
    // 0x0023CEF4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0023CEF8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_0023CEFC:
    // 0x0023CEFC: jr          $ra
    // 0x0023CF00: nop

    return;
    // 0x0023CF00: nop

;}
RECOMP_FUNC void func_00453F54(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_0041AF84:
    // 0x00453F54: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x00453F58: lw          $v0, -0x5524($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X5524);
    // 0x00453F5C: and         $v0, $v0, $a1
    ctx->r2 = ctx->r2 & ctx->r5;
    // 0x00453F60: beq         $v0, $zero, L_00453F74
    if (ctx->r2 == 0) {
        // 0x00453F64: lui         $v1, 0x100
        ctx->r3 = S32(0X100 << 16);
            goto L_00453F74;
    }
    // 0x00453F64: lui         $v1, 0x100
    ctx->r3 = S32(0X100 << 16);
    // 0x00453F68: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x00453F6C: j           L_0041AF84
    // 0x00453F70: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    entry_0041AF84(rdram, ctx);
    return;
    // 0x00453F70: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
L_00453F74:
    // 0x00453F74: lui         $v1, 0xFEFF
    ctx->r3 = S32(0XFEFF << 16);
    // 0x00453F78: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x00453F7C: ori         $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 | 0XFFFF;
    // 0x00453F80: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x00453F84: sw          $v0, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r2;
    // 0x00453F88: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x00453F8C: lw          $v0, -0x5528($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X5528);
    // 0x00453F90: and         $v0, $v0, $a1
    ctx->r2 = ctx->r2 & ctx->r5;
    // 0x00453F94: beql        $v0, $zero, L_00453FA0
    if (ctx->r2 == 0) {
        // 0x00453F98: sw          $a3, 0x14($a0)
        MEM_W(0X14, ctx->r4) = ctx->r7;
            goto L_00453FA0;
    }
    goto skip_0;
    // 0x00453F98: sw          $a3, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r7;
    skip_0:
    // 0x00453F9C: sw          $a2, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r6;
L_00453FA0:
    // 0x00453FA0: jr          $ra
    // 0x00453FA4: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x00453FA4: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void func_0026C804(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0026C804: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0026C808: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x0026C80C: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x0026C810: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x0026C814: addiu       $a0, $a0, 0x7078
    ctx->r4 = ADD32(ctx->r4, 0X7078);
    // 0x0026C818: jal         0x0022425C
    // 0x0026C81C: nop

    func_0022425C(rdram, ctx);
        goto after_0;
    // 0x0026C81C: nop

    after_0:
    // 0x0026C820: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x0026C824: beq         $a0, $zero, L_0026C838
    if (ctx->r4 == 0) {
        // 0x0026C828: lui         $v1, 0x4
        ctx->r3 = S32(0X4 << 16);
            goto L_0026C838;
    }
    // 0x0026C828: lui         $v1, 0x4
    ctx->r3 = S32(0X4 << 16);
    // 0x0026C82C: lw          $v0, 0x44($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X44);
    // 0x0026C830: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x0026C834: sw          $v0, 0x44($a0)
    MEM_W(0X44, ctx->r4) = ctx->r2;
L_0026C838:
    // 0x0026C838: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x0026C83C: jr          $ra
    // 0x0026C840: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0026C840: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00421690(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00421690: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x00421694: lw          $v0, 0x990($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X990);
    // 0x00421698: bne         $v0, $zero, L_004216B0
    if (ctx->r2 != 0) {
            // 0x0042169C: nop

    func_004216B0(rdram, ctx);
    return;
    }
    // 0x0042169C: nop

    // 0x004216A0: lw          $v0, 0x20($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X20);
    // 0x004216A4: lb          $v0, 0x4($v0)
    ctx->r2 = MEM_B(ctx->r2, 0X4);
    // 0x004216A8: jr          $ra
    // 0x004216AC: nop

    return;
    // 0x004216AC: nop

;}
RECOMP_FUNC void func_0045F62C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0045F62C: sll         $a2, $a0, 2
    ctx->r6 = S32(ctx->r4 << 2);
    // 0x0045F630: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0045F634: addu        $at, $at, $a2
    ctx->r1 = ADD32(ctx->r1, ctx->r6);
    // 0x0045F638: lw          $v1, 0xC60($at)
    ctx->r3 = MEM_W(ctx->r1, 0XC60);
    // 0x0045F63C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x0045F640: beql        $v1, $v0, L_0045F650
    if (ctx->r3 == ctx->r2) {
            // 0x0045F644: sw          $zero, 0x0($a1)
    MEM_W(0X0, ctx->r5) = 0;
    func_0045F650(rdram, ctx);
    return;
    }
    goto skip_0;
    // 0x0045F644: sw          $zero, 0x0($a1)
    MEM_W(0X0, ctx->r5) = 0;
    skip_0:
    // 0x0045F648: jr          $ra
    // 0x0045F64C: addiu       $v0, $zero, -0x2
    ctx->r2 = ADD32(0, -0X2);
    return;
    // 0x0045F64C: addiu       $v0, $zero, -0x2
    ctx->r2 = ADD32(0, -0X2);
;}
RECOMP_FUNC void func_00277CF0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00277CF0: addiu       $sp, $sp, -0x78
    ctx->r29 = ADD32(ctx->r29, -0X78);
    // 0x00277CF4: sdc1        $f21, 0x58($sp)
    CHECK_FR(ctx, 21);
    SD(ctx->f21.u64, 0X58, ctx->r29);
    // 0x00277CF8: mtc1        $a1, $f21
    ctx->f_odd[(21 - 1) * 2] = ctx->r5;
    // 0x00277CFC: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x00277D00: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x00277D04: sdc1        $f20, 0x50($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X50, ctx->r29);
    // 0x00277D08: mtc1        $a2, $f20
    ctx->f20.u32l = ctx->r6;
    // 0x00277D0C: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x00277D10: addiu       $a0, $a0, 0x7078
    ctx->r4 = ADD32(ctx->r4, 0X7078);
    // 0x00277D14: sdc1        $f22, 0x60($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X60, ctx->r29);
    // 0x00277D18: mtc1        $a3, $f22
    ctx->f22.u32l = ctx->r7;
    // 0x00277D1C: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x00277D20: sdc1        $f24, 0x70($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X70, ctx->r29);
    // 0x00277D24: lwc1        $f24, 0x88($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0X88);
    // 0x00277D28: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x00277D2C: sw          $s7, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r23;
    // 0x00277D30: lw          $s7, 0x90($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X90);
    // 0x00277D34: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x00277D38: sw          $fp, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r30;
    // 0x00277D3C: sw          $s6, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r22;
    // 0x00277D40: sw          $s5, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r21;
    // 0x00277D44: sw          $s4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r20;
    // 0x00277D48: sw          $s3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r19;
    // 0x00277D4C: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x00277D50: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x00277D54: sdc1        $f23, 0x68($sp)
    CHECK_FR(ctx, 23);
    SD(ctx->f23.u64, 0X68, ctx->r29);
        turok2_patch_hud_icon_scale(rdram, ctx);

    // 0x00277D58: jal         0x00224DF4
    // 0x00277D5C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_00224DF4(rdram, ctx);
        goto after_0;
    // 0x00277D5C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_0:
    // 0x00277D60: addu        $s6, $v0, $zero
    ctx->r22 = ADD32(ctx->r2, 0);
    // 0x00277D64: beq         $s6, $zero, L_00277F28
    if (ctx->r22 == 0) {
        // 0x00277D68: nop
    
            goto L_00277F28;
    }
    // 0x00277D68: nop

    // 0x00277D6C: bgez        $s0, L_00277D80
    if (SIGNED(ctx->r16) >= 0) {
        // 0x00277D70: nop
    
            goto L_00277D80;
    }
    // 0x00277D70: nop

    // 0x00277D74: negu        $s0, $s0
    ctx->r16 = SUB32(0, ctx->r16);
    // 0x00277D78: bltz        $s0, L_00277F20
    if (SIGNED(ctx->r16) < 0) {
        // 0x00277D7C: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_00277F20;
    }
    // 0x00277D7C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
L_00277D80:
    // 0x00277D80: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00277D84: lwc1        $f1, -0x7D74($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, -0X7D74);
    // 0x00277D88: mtc1        $s0, $f0
    ctx->f0.u32l = ctx->r16;
    // 0x00277D8C: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00277D90: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00277D94: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00277D98: lwc1        $f1, -0x7D70($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, -0X7D70);
    // 0x00277D9C: trunc.w.s   $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x00277DA0: mfc1        $s4, $f2
    ctx->r20 = (int32_t)ctx->f2.u32l;
    // 0x00277DA4: sll         $v1, $s4, 5
    ctx->r3 = S32(ctx->r20 << 5);
    // 0x00277DA8: subu        $v1, $v1, $s4
    ctx->r3 = SUB32(ctx->r3, ctx->r20);
    // 0x00277DAC: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x00277DB0: addu        $v1, $v1, $s4
    ctx->r3 = ADD32(ctx->r3, ctx->r20);
    // 0x00277DB4: sll         $v1, $v1, 3
    ctx->r3 = S32(ctx->r3 << 3);
    // 0x00277DB8: subu        $v1, $s0, $v1
    ctx->r3 = SUB32(ctx->r16, ctx->r3);
    // 0x00277DBC: mtc1        $v1, $f0
    ctx->f0.u32l = ctx->r3;
    // 0x00277DC0: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00277DC4: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00277DC8: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00277DCC: lwc1        $f1, -0x7D6C($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, -0X7D6C);
    // 0x00277DD0: trunc.w.s   $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x00277DD4: mfc1        $s3, $f2
    ctx->r19 = (int32_t)ctx->f2.u32l;
    // 0x00277DD8: sll         $v0, $s3, 1
    ctx->r2 = S32(ctx->r19 << 1);
    // 0x00277DDC: addu        $v0, $v0, $s3
    ctx->r2 = ADD32(ctx->r2, ctx->r19);
    // 0x00277DE0: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x00277DE4: addu        $v0, $v0, $s3
    ctx->r2 = ADD32(ctx->r2, ctx->r19);
    // 0x00277DE8: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x00277DEC: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x00277DF0: mtc1        $v1, $f0
    ctx->f0.u32l = ctx->r3;
    // 0x00277DF4: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00277DF8: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00277DFC: addiu       $s1, $zero, 0x3
    ctx->r17 = ADD32(0, 0X3);
    // 0x00277E00: trunc.w.s   $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x00277E04: mfc1        $s2, $f2
    ctx->r18 = (int32_t)ctx->f2.u32l;
    // 0x00277E08: sll         $v0, $s2, 2
    ctx->r2 = S32(ctx->r18 << 2);
    // 0x00277E0C: addu        $v0, $v0, $s2
    ctx->r2 = ADD32(ctx->r2, ctx->r18);
    // 0x00277E10: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x00277E14: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x00277E18: bne         $s4, $zero, L_00277E2C
    if (ctx->r20 != 0) {
        // 0x00277E1C: sw          $v1, 0x20($sp)
        MEM_W(0X20, ctx->r29) = ctx->r3;
            goto L_00277E2C;
    }
    // 0x00277E1C: sw          $v1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r3;
    // 0x00277E20: bne         $s3, $zero, L_00277E2C
    if (ctx->r19 != 0) {
        // 0x00277E24: addiu       $s1, $zero, 0x2
        ctx->r17 = ADD32(0, 0X2);
            goto L_00277E2C;
    }
    // 0x00277E24: addiu       $s1, $zero, 0x2
    ctx->r17 = ADD32(0, 0X2);
    // 0x00277E28: sltu        $s1, $zero, $s2
    ctx->r17 = 0 < ctx->r18 ? 1 : 0;
L_00277E2C:
    // 0x00277E2C: lw          $v0, 0x94($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X94);
    // 0x00277E30: addiu       $v1, $v0, -0x1
    ctx->r3 = ADD32(ctx->r2, -0X1);
    // 0x00277E34: slt         $v0, $s1, $v1
    ctx->r2 = SIGNED(ctx->r17) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x00277E38: bnel        $v0, $zero, L_00277E40
    if (ctx->r2 != 0) {
        // 0x00277E3C: addu        $s1, $v1, $zero
        ctx->r17 = ADD32(ctx->r3, 0);
            goto L_00277E40;
    }
    goto skip_0;
    // 0x00277E3C: addu        $s1, $v1, $zero
    ctx->r17 = ADD32(ctx->r3, 0);
    skip_0:
L_00277E40:
    // 0x00277E40: addu        $s0, $s1, $zero
    ctx->r16 = ADD32(ctx->r17, 0);
    // 0x00277E44: bltz        $s0, L_00277F1C
    if (SIGNED(ctx->r16) < 0) {
        // 0x00277E48: addiu       $s5, $zero, 0x1
        ctx->r21 = ADD32(0, 0X1);
            goto L_00277F1C;
    }
    // 0x00277E48: addiu       $s5, $zero, 0x1
    ctx->r21 = ADD32(0, 0X1);
    // 0x00277E4C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00277E50: lwc1        $f23, -0x7D68($at)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r1, -0X7D68);
    // 0x00277E54: trunc.w.s   $f2, $f20
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    ctx->f2.u32l = TRUNC_W_S(ctx->f20.fl);
    // 0x00277E58: mfc1        $v0, $f2
    ctx->r2 = (int32_t)ctx->f2.u32l;
    // 0x00277E5C: sll         $fp, $v0, 16
    ctx->r30 = S32(ctx->r2 << 16);
L_00277E60:
    // 0x00277E60: beq         $s7, $zero, L_00277E6C
    if (ctx->r23 == 0) {
        // 0x00277E64: addu        $v1, $s0, $zero
        ctx->r3 = ADD32(ctx->r16, 0);
            goto L_00277E6C;
    }
    // 0x00277E64: addu        $v1, $s0, $zero
    ctx->r3 = ADD32(ctx->r16, 0);
    // 0x00277E68: subu        $v1, $s1, $s0
    ctx->r3 = SUB32(ctx->r17, ctx->r16);
L_00277E6C:
    // 0x00277E6C: beq         $v1, $s5, L_00277E9C
    if (ctx->r3 == ctx->r21) {
        // 0x00277E70: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_00277E9C;
    }
    // 0x00277E70: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x00277E74: bne         $v0, $zero, L_00277EA4
    if (ctx->r2 != 0) {
        // 0x00277E78: addiu       $t0, $zero, 0x2
        ctx->r8 = ADD32(0, 0X2);
            goto L_00277EA4;
    }
    // 0x00277E78: addiu       $t0, $zero, 0x2
    ctx->r8 = ADD32(0, 0X2);
    // 0x00277E7C: beq         $v1, $t0, L_00277E94
    if (ctx->r3 == ctx->r8) {
        // 0x00277E80: addiu       $t0, $zero, 0x3
        ctx->r8 = ADD32(0, 0X3);
            goto L_00277E94;
    }
    // 0x00277E80: addiu       $t0, $zero, 0x3
    ctx->r8 = ADD32(0, 0X3);
    // 0x00277E84: bne         $v1, $t0, L_00277EA4
    if (ctx->r3 != ctx->r8) {
        // 0x00277E88: addu        $a1, $s4, $zero
        ctx->r5 = ADD32(ctx->r20, 0);
            goto L_00277EA4;
    }
    // 0x00277E88: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    // 0x00277E8C: j           L_00277EA8
    // 0x00277E90: nop

        goto L_00277EA8;
    // 0x00277E90: nop

L_00277E94:
    // 0x00277E94: j           L_00277EA8
    // 0x00277E98: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
        goto L_00277EA8;
    // 0x00277E98: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
L_00277E9C:
    // 0x00277E9C: j           L_00277EA8
    // 0x00277EA0: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
        goto L_00277EA8;
    // 0x00277EA0: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
L_00277EA4:
    // 0x00277EA4: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
L_00277EA8:
    // 0x00277EA8: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00277EAC: lwc1        $f1, -0x7D64($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, -0X7D64);
    // 0x00277EB0: bne         $a1, $s5, L_00277EC0
    if (ctx->r5 != ctx->r21) {
        // 0x00277EB4: nop
    
            goto L_00277EC0;
    }
    // 0x00277EB4: nop

    // 0x00277EB8: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00277EBC: lwc1        $f1, -0x7D60($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, -0X7D60);
L_00277EC0:
    // 0x00277EC0: mul.s       $f0, $f22, $f23
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 23);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f23.fl); 
    ctx->f0.fl = MUL_S(ctx->f22.fl, ctx->f23.fl);
    // 0x00277EC4: nop

    // 0x00277EC8: mul.s       $f20, $f1, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x00277ECC: bnel        $s7, $zero, L_00277ED4
    if (ctx->r23 != 0) {
        // 0x00277ED0: sub.s       $f21, $f21, $f20
        CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f21.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f21.fl = ctx->f21.fl - ctx->f20.fl;
            goto L_00277ED4;
    }
    goto skip_1;
    // 0x00277ED0: sub.s       $f21, $f21, $f20
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f21.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f21.fl = ctx->f21.fl - ctx->f20.fl;
    skip_1:
L_00277ED4:
    // 0x00277ED4: sltiu       $v0, $a1, 0xA
    ctx->r2 = ctx->r5 < 0XA ? 1 : 0;
    // 0x00277ED8: beq         $v0, $zero, L_00277F08
    if (ctx->r2 == 0) {
        // 0x00277EDC: addu        $a0, $s6, $zero
        ctx->r4 = ADD32(ctx->r22, 0);
            goto L_00277F08;
    }
    // 0x00277EDC: addu        $a0, $s6, $zero
    ctx->r4 = ADD32(ctx->r22, 0);
    // 0x00277EE0: trunc.w.s   $f2, $f21
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 21);
    ctx->f2.u32l = TRUNC_W_S(ctx->f21.fl);
    // 0x00277EE4: mfc1        $a2, $f2
    ctx->r6 = (int32_t)ctx->f2.u32l;
    // 0x00277EE8: sll         $a2, $a2, 16
    ctx->r6 = S32(ctx->r6 << 16);
    // 0x00277EEC: sra         $a2, $a2, 16
    ctx->r6 = S32(SIGNED(ctx->r6) >> 16);
    // 0x00277EF0: lw          $t0, 0x8C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X8C);
    // 0x00277EF4: sra         $a3, $fp, 16
    ctx->r7 = S32(SIGNED(ctx->r30) >> 16);
    // 0x00277EF8: swc1        $f22, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f22.u32l;
    // 0x00277EFC: swc1        $f24, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f24.u32l;
    // 0x00277F00: jal         0x0027A7A0
    // 0x00277F04: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    func_0027A7A0(rdram, ctx);
        goto after_1;
    // 0x00277F04: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    after_1:
L_00277F08:
    // 0x00277F08: beql        $s7, $zero, L_00277F10
    if (ctx->r23 == 0) {
        // 0x00277F0C: add.s       $f21, $f21, $f20
        CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f21.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f21.fl = ctx->f21.fl + ctx->f20.fl;
            goto L_00277F10;
    }
    goto skip_2;
    // 0x00277F0C: add.s       $f21, $f21, $f20
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f21.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f21.fl = ctx->f21.fl + ctx->f20.fl;
    skip_2:
L_00277F10:
    // 0x00277F10: addiu       $s0, $s0, -0x1
    ctx->r16 = ADD32(ctx->r16, -0X1);
    // 0x00277F14: bgez        $s0, L_00277E60
    if (SIGNED(ctx->r16) >= 0) {
        // 0x00277F18: nop
    
            goto L_00277E60;
    }
    // 0x00277F18: nop

L_00277F1C:
    // 0x00277F1C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
L_00277F20:
    // 0x00277F20: jal         0x002051F4
    // 0x00277F24: addu        $a1, $s6, $zero
    ctx->r5 = ADD32(ctx->r22, 0);
    func_002051F4(rdram, ctx);
        goto after_2;
    // 0x00277F24: addu        $a1, $s6, $zero
    ctx->r5 = ADD32(ctx->r22, 0);
    after_2:
L_00277F28:
    // 0x00277F28: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x00277F2C: lw          $fp, 0x48($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X48);
    // 0x00277F30: lw          $s7, 0x44($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X44);
    // 0x00277F34: lw          $s6, 0x40($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X40);
    // 0x00277F38: lw          $s5, 0x3C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X3C);
    // 0x00277F3C: lw          $s4, 0x38($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X38);
    // 0x00277F40: lw          $s3, 0x34($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X34);
    // 0x00277F44: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x00277F48: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x00277F4C: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x00277F50: ldc1        $f24, 0x70($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X70);
    // 0x00277F54: ldc1        $f23, 0x68($sp)
    CHECK_FR(ctx, 23);
    ctx->f23.u64 = LD(ctx->r29, 0X68);
    // 0x00277F58: ldc1        $f22, 0x60($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X60);
    // 0x00277F5C: ldc1        $f21, 0x58($sp)
    CHECK_FR(ctx, 21);
    ctx->f21.u64 = LD(ctx->r29, 0X58);
    // 0x00277F60: ldc1        $f20, 0x50($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X50);
    // 0x00277F64: jr          $ra
    // 0x00277F68: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
    return;
    // 0x00277F68: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
;}
RECOMP_FUNC void func_0026E44C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0026E44C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0026E450: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x0026E454: lhu         $a0, 0x6($a2)
    ctx->r4 = MEM_HU(ctx->r6, 0X6);
    // 0x0026E458: jal         0x00275950
    // 0x0026E45C: nop

    func_00275950(rdram, ctx);
        goto after_0;
    // 0x0026E45C: nop

    after_0:
    // 0x0026E460: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x0026E464: jr          $ra
    // 0x0026E468: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0026E468: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0045B75C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0045B75C: addiu       $v0, $zero, 0xE
    ctx->r2 = ADD32(0, 0XE);
    // 0x0045B760: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0045B764: sw          $v0, 0x9C0($at)
    MEM_W(0X9C0, ctx->r1) = ctx->r2;
    // 0x0045B768: jr          $ra
    // 0x0045B76C: nop

    return;
    // 0x0045B76C: nop

;}
RECOMP_FUNC void func_00258668(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00258668: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0025866C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x00258670: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00258674: lw          $a0, 0x1A8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1A8);
    // 0x00258678: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x0025867C: lh          $v0, 0x996($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X996);
    // 0x00258680: lh          $a2, 0xB14($a0)
    ctx->r6 = MEM_H(ctx->r4, 0XB14);
    // 0x00258684: lhu         $a1, 0xB14($a0)
    ctx->r5 = MEM_HU(ctx->r4, 0XB14);
    // 0x00258688: bne         $v0, $a2, L_002586A4
    if (ctx->r2 != ctx->r6) {
        // 0x0025868C: sll         $v0, $a2, 2
        ctx->r2 = S32(ctx->r6 << 2);
            goto L_002586A4;
    }
    // 0x0025868C: sll         $v0, $a2, 2
    ctx->r2 = S32(ctx->r6 << 2);
    // 0x00258690: lui         $v1, 0x800F
    ctx->r3 = S32(0X800F << 16);
    // 0x00258694: lw          $v1, 0x7078($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X7078);
    // 0x00258698: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x0025869C: beq         $v1, $v0, L_00258724
    if (ctx->r3 == ctx->r2) {
        // 0x002586A0: sll         $v0, $a2, 2
        ctx->r2 = S32(ctx->r6 << 2);
            goto L_00258724;
    }
    // 0x002586A0: sll         $v0, $a2, 2
    ctx->r2 = S32(ctx->r6 << 2);
L_002586A4:
    // 0x002586A4: sh          $a1, 0x996($a0)
    MEM_H(0X996, ctx->r4) = ctx->r5;
    // 0x002586A8: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x002586AC: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x002586B0: lw          $v0, -0x9E8($at)
    ctx->r2 = MEM_W(ctx->r1, -0X9E8);
    // 0x002586B4: lw          $v0, 0x48($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X48);
    // 0x002586B8: sw          $v0, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->r2;
    // 0x002586BC: lh          $v0, 0x996($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X996);
    // 0x002586C0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x002586C4: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x002586C8: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x002586CC: lw          $v0, -0x9E8($at)
    ctx->r2 = MEM_W(ctx->r1, -0X9E8);
    // 0x002586D0: lw          $v1, 0x4C($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X4C);
    // 0x002586D4: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x002586D8: lw          $v0, 0x6D20($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X6D20);
    // 0x002586DC: sltiu       $v0, $v0, 0x5
    ctx->r2 = ctx->r2 < 0X5 ? 1 : 0;
    // 0x002586E0: bne         $v0, $zero, L_00258714
    if (ctx->r2 != 0) {
        // 0x002586E4: sw          $v1, 0x108($s0)
        MEM_W(0X108, ctx->r16) = ctx->r3;
            goto L_00258714;
    }
    // 0x002586E4: sw          $v1, 0x108($s0)
    MEM_W(0X108, ctx->r16) = ctx->r3;
    // 0x002586E8: lh          $v0, 0x996($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X996);
    // 0x002586EC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x002586F0: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x002586F4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x002586F8: lw          $v0, -0x9E8($at)
    ctx->r2 = MEM_W(ctx->r1, -0X9E8);
    // 0x002586FC: lw          $a1, 0x51C($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X51C);
    // 0x00258700: lw          $a2, 0x0($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X0);
    // 0x00258704: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x00258708: addiu       $a0, $a0, -0x6750
    ctx->r4 = ADD32(ctx->r4, -0X6750);
    // 0x0025870C: jal         0x0027FC2C
    // 0x00258710: nop

    func_0027FC2C(rdram, ctx);
        goto after_0;
    // 0x00258710: nop

    after_0:
L_00258714:
    // 0x00258714: sw          $zero, 0x10C($s0)
    MEM_W(0X10C, ctx->r16) = 0;
    // 0x00258718: sw          $zero, 0x110($s0)
    MEM_W(0X110, ctx->r16) = 0;
    // 0x0025871C: sw          $zero, 0x128($s0)
    MEM_W(0X128, ctx->r16) = 0;
    // 0x00258720: sw          $zero, 0x118($s0)
    MEM_W(0X118, ctx->r16) = 0;
L_00258724:
    // 0x00258724: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x00258728: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0025872C: jr          $ra
    // 0x00258730: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00258730: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00256260(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00256260: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00256264: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x00256268: jal         0x00255FF4
    // 0x0025626C: nop

    func_00255FF4(rdram, ctx);
        goto after_0;
    // 0x0025626C: nop

    after_0:
    // 0x00256270: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x00256274: jr          $ra
    // 0x00256278: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00256278: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_002316A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002316A0: lw          $v0, 0xF8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XF8);
    // 0x002316A4: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x002316A8: lui         $v1, 0x200
    ctx->r3 = S32(0X200 << 16);
    // 0x002316AC: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x002316B0: beq         $v0, $zero, L_002316E0
    if (ctx->r2 == 0) {
        // 0x002316B4: addu        $a2, $zero, $zero
        ctx->r6 = ADD32(0, 0);
            goto L_002316E0;
    }
    // 0x002316B4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x002316B8: lw          $v0, 0x40($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X40);
    // 0x002316BC: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x002316C0: beq         $v0, $zero, L_002316D0
    if (ctx->r2 == 0) {
        // 0x002316C4: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_002316D0;
    }
    // 0x002316C4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x002316C8: j           L_002316E0
    // 0x002316CC: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
        goto L_002316E0;
    // 0x002316CC: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
L_002316D0:
    // 0x002316D0: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x002316D4: lbu         $v1, -0x5511($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X5511);
    // 0x002316D8: beql        $v1, $v0, L_002316E0
    if (ctx->r3 == ctx->r2) {
        // 0x002316DC: addiu       $a2, $zero, 0x1
        ctx->r6 = ADD32(0, 0X1);
            goto L_002316E0;
    }
    goto skip_0;
    // 0x002316DC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    skip_0:
L_002316E0:
    // 0x002316E0: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x002316E4: sll         $v1, $a2, 30
    ctx->r3 = S32(ctx->r6 << 30);
    // 0x002316E8: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x002316EC: jr          $ra
    // 0x002316F0: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
    return;
    // 0x002316F0: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
;}
RECOMP_FUNC void func_0021CDAC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0021CDAC: addiu       $sp, $sp, -0x2130
    ctx->r29 = ADD32(ctx->r29, -0X2130);
    // 0x0021CDB0: sw          $s3, 0x210C($sp)
    MEM_W(0X210C, ctx->r29) = ctx->r19;
    // 0x0021CDB4: addu        $s3, $a0, $zero
    ctx->r19 = ADD32(ctx->r4, 0);
    // 0x0021CDB8: sw          $s6, 0x2118($sp)
    MEM_W(0X2118, ctx->r29) = ctx->r22;
    // 0x0021CDBC: addu        $s6, $a2, $zero
    ctx->r22 = ADD32(ctx->r6, 0);
    // 0x0021CDC0: sw          $a1, 0x2134($sp)
    MEM_W(0X2134, ctx->r29) = ctx->r5;
    // 0x0021CDC4: addu        $a0, $a1, $zero
    ctx->r4 = ADD32(ctx->r5, 0);
    // 0x0021CDC8: sw          $ra, 0x2124($sp)
    MEM_W(0X2124, ctx->r29) = ctx->r31;
    // 0x0021CDCC: sw          $fp, 0x2120($sp)
    MEM_W(0X2120, ctx->r29) = ctx->r30;
    // 0x0021CDD0: sw          $s7, 0x211C($sp)
    MEM_W(0X211C, ctx->r29) = ctx->r23;
    // 0x0021CDD4: sw          $s5, 0x2114($sp)
    MEM_W(0X2114, ctx->r29) = ctx->r21;
    // 0x0021CDD8: sw          $s4, 0x2110($sp)
    MEM_W(0X2110, ctx->r29) = ctx->r20;
    // 0x0021CDDC: sw          $s2, 0x2108($sp)
    MEM_W(0X2108, ctx->r29) = ctx->r18;
    // 0x0021CDE0: sw          $s1, 0x2104($sp)
    MEM_W(0X2104, ctx->r29) = ctx->r17;
    // 0x0021CDE4: sw          $s0, 0x2100($sp)
    MEM_W(0X2100, ctx->r29) = ctx->r16;
    // 0x0021CDE8: sdc1        $f20, 0x2128($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X2128, ctx->r29);
    // 0x0021CDEC: jal         0x002017D4
    // 0x0021CDF0: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_002017D4(rdram, ctx);
        goto after_0;
    // 0x0021CDF0: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_0:
    // 0x0021CDF4: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x0021CDF8: lw          $a1, 0x0($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X0);
    // 0x0021CDFC: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x0021CE00: addiu       $a0, $a0, 0x7148
    ctx->r4 = ADD32(ctx->r4, 0X7148);
    // 0x0021CE04: jal         0x00206950
    // 0x0021CE08: nop

    entry_00206950(rdram, ctx);
        goto after_1;
    // 0x0021CE08: nop

    after_1:
    // 0x0021CE0C: bne         $v0, $zero, L_0021CE1C
    if (ctx->r2 != 0) {
        // 0x0021CE10: sw          $v0, 0x98($s3)
        MEM_W(0X98, ctx->r19) = ctx->r2;
            goto L_0021CE1C;
    }
    // 0x0021CE10: sw          $v0, 0x98($s3)
    MEM_W(0X98, ctx->r19) = ctx->r2;
    // 0x0021CE14: j           L_0021D368
    // 0x0021CE18: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
        goto L_0021D368;
    // 0x0021CE18: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_0021CE1C:
    // 0x0021CE1C: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x0021CE20: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0021CE24: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    // 0x0021CE28: addiu       $a1, $zero, -0x8
    ctx->r5 = ADD32(0, -0X8);
    // 0x0021CE2C: lh          $a2, 0xBA($s3)
    ctx->r6 = MEM_H(ctx->r19, 0XBA);
    // 0x0021CE30: lw          $v0, 0x14($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X14);
    // 0x0021CE34: lw          $t0, 0xD4($s3)
    ctx->r8 = MEM_W(ctx->r19, 0XD4);
    // 0x0021CE38: sll         $a2, $a2, 2
    ctx->r6 = S32(ctx->r6 << 2);
    // 0x0021CE3C: addiu       $a2, $a2, 0xF
    ctx->r6 = ADD32(ctx->r6, 0XF);
    // 0x0021CE40: and         $a2, $a2, $a1
    ctx->r6 = ctx->r6 & ctx->r5;
    // 0x0021CE44: lw          $v1, 0x0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X0);
    // 0x0021CE48: lui         $v0, 0x800A
    ctx->r2 = S32(0X800A << 16);
    // 0x0021CE4C: addiu       $v0, $v0, 0x5AFC
    ctx->r2 = ADD32(ctx->r2, 0X5AFC);
    // 0x0021CE50: andi        $s4, $t0, 0x1
    ctx->r20 = ctx->r8 & 0X1;
    // 0x0021CE54: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x0021CE58: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x0021CE5C: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x0021CE60: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x0021CE64: lw          $a1, 0xA8($s3)
    ctx->r5 = MEM_W(ctx->r19, 0XA8);
    // 0x0021CE68: xori        $v1, $v1, 0x9
    ctx->r3 = ctx->r3 ^ 0X9;
    // 0x0021CE6C: jal         0x0020367C
    // 0x0021CE70: sltiu       $s2, $v1, 0x1
    ctx->r18 = ctx->r3 < 0X1 ? 1 : 0;
    func_0020367C(rdram, ctx);
        goto after_2;
    // 0x0021CE70: sltiu       $s2, $v1, 0x1
    ctx->r18 = ctx->r3 < 0X1 ? 1 : 0;
    after_2:
    // 0x0021CE74: addu        $s5, $s0, $zero
    ctx->r21 = ADD32(ctx->r16, 0);
    // 0x0021CE78: beq         $v0, $zero, L_0021D35C
    if (ctx->r2 == 0) {
        // 0x0021CE7C: sw          $v0, 0x20F8($sp)
        MEM_W(0X20F8, ctx->r29) = ctx->r2;
            goto L_0021D35C;
    }
    // 0x0021CE7C: sw          $v0, 0x20F8($sp)
    MEM_W(0X20F8, ctx->r29) = ctx->r2;
    // 0x0021CE80: addiu       $fp, $s3, 0xD8
    ctx->r30 = ADD32(ctx->r19, 0XD8);
    // 0x0021CE84: addu        $a0, $fp, $zero
    ctx->r4 = ADD32(ctx->r30, 0);
    // 0x0021CE88: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    // 0x0021CE8C: addu        $t2, $v0, $zero
    ctx->r10 = ADD32(ctx->r2, 0);
    // 0x0021CE90: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x0021CE94: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x0021CE98: lw          $a1, 0x0($t2)
    ctx->r5 = MEM_W(ctx->r10, 0X0);
    // 0x0021CE9C: lw          $a2, 0xA8($s3)
    ctx->r6 = MEM_W(ctx->r19, 0XA8);
    // 0x0021CEA0: jal         0x00218B10
    // 0x0021CEA4: addiu       $s7, $s3, 0xEC
    ctx->r23 = ADD32(ctx->r19, 0XEC);
    func_00218B10(rdram, ctx);
        goto after_3;
    // 0x0021CEA4: addiu       $s7, $s3, 0xEC
    ctx->r23 = ADD32(ctx->r19, 0XEC);
    after_3:
    // 0x0021CEA8: jal         0x00219968
    // 0x0021CEAC: addu        $a0, $fp, $zero
    ctx->r4 = ADD32(ctx->r30, 0);
    func_00219968(rdram, ctx);
        goto after_4;
    // 0x0021CEAC: addu        $a0, $fp, $zero
    ctx->r4 = ADD32(ctx->r30, 0);
    after_4:
    // 0x0021CEB0: beq         $v0, $zero, L_0021D350
    if (ctx->r2 == 0) {
        // 0x0021CEB4: nop
    
            goto L_0021D350;
    }
    // 0x0021CEB4: nop

    // 0x0021CEB8: lw          $v0, 0xD4($s3)
    ctx->r2 = MEM_W(ctx->r19, 0XD4);
    // 0x0021CEBC: andi        $v0, $v0, 0x400
    ctx->r2 = ctx->r2 & 0X400;
    // 0x0021CEC0: beq         $v0, $zero, L_0021CF00
    if (ctx->r2 == 0) {
        // 0x0021CEC4: addu        $a0, $s7, $zero
        ctx->r4 = ADD32(ctx->r23, 0);
            goto L_0021CF00;
    }
    // 0x0021CEC4: addu        $a0, $s7, $zero
    ctx->r4 = ADD32(ctx->r23, 0);
    // 0x0021CEC8: lw          $t2, 0x20F8($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X20F8);
    // 0x0021CECC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x0021CED0: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x0021CED4: lw          $a2, 0xA8($s3)
    ctx->r6 = MEM_W(ctx->r19, 0XA8);
    // 0x0021CED8: lw          $a1, 0x0($t2)
    ctx->r5 = MEM_W(ctx->r10, 0X0);
    // 0x0021CEDC: jal         0x00218B10
    // 0x0021CEE0: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    func_00218B10(rdram, ctx);
        goto after_5;
    // 0x0021CEE0: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    after_5:
    // 0x0021CEE4: jal         0x00219968
    // 0x0021CEE8: addu        $a0, $s7, $zero
    ctx->r4 = ADD32(ctx->r23, 0);
    func_00219968(rdram, ctx);
        goto after_6;
    // 0x0021CEE8: addu        $a0, $s7, $zero
    ctx->r4 = ADD32(ctx->r23, 0);
    after_6:
    // 0x0021CEEC: beql        $v0, $zero, L_0021CF04
    if (ctx->r2 == 0) {
        // 0x0021CEF0: sw          $zero, 0x8C($sp)
        MEM_W(0X8C, ctx->r29) = 0;
            goto L_0021CF04;
    }
    goto skip_0;
    // 0x0021CEF0: sw          $zero, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = 0;
    skip_0:
    // 0x0021CEF4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0021CEF8: j           L_0021CF04
    // 0x0021CEFC: sw          $v0, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r2;
        goto L_0021CF04;
    // 0x0021CEFC: sw          $v0, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r2;
L_0021CF00:
    // 0x0021CF00: sw          $zero, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = 0;
L_0021CF04:
    // 0x0021CF04: addiu       $a0, $s3, 0xD8
    ctx->r4 = ADD32(ctx->r19, 0XD8);
    // 0x0021CF08: addiu       $a1, $sp, 0x40
    ctx->r5 = ADD32(ctx->r29, 0X40);
    // 0x0021CF0C: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x0021CF10: lw          $v1, 0x98($s3)
    ctx->r3 = MEM_W(ctx->r19, 0X98);
    // 0x0021CF14: lw          $t2, 0x2134($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2134);
    // 0x0021CF18: addiu       $v0, $sp, 0xB8
    ctx->r2 = ADD32(ctx->r29, 0XB8);
    // 0x0021CF1C: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    // 0x0021CF20: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x0021CF24: sw          $s6, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r22;
    // 0x0021CF28: sw          $fp, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r30;
    // 0x0021CF2C: sw          $s7, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r23;
    // 0x0021CF30: sw          $t2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r10;
    // 0x0021CF34: jal         0x00219328
    // 0x0021CF38: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    func_00219328(rdram, ctx);
        goto after_7;
    // 0x0021CF38: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    after_7:
    // 0x0021CF3C: addiu       $a0, $s3, 0xEC
    ctx->r4 = ADD32(ctx->r19, 0XEC);
    // 0x0021CF40: jal         0x00219328
    // 0x0021CF44: addiu       $a1, $sp, 0x64
    ctx->r5 = ADD32(ctx->r29, 0X64);
    func_00219328(rdram, ctx);
        goto after_8;
    // 0x0021CF44: addiu       $a1, $sp, 0x64
    ctx->r5 = ADD32(ctx->r29, 0X64);
    after_8:
    // 0x0021CF48: beq         $s4, $zero, L_0021CF58
    if (ctx->r20 == 0) {
        // 0x0021CF4C: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_0021CF58;
    }
    // 0x0021CF4C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x0021CF50: beql        $s2, $zero, L_0021CF64
    if (ctx->r18 == 0) {
        // 0x0021CF54: sw          $v0, 0x88($sp)
        MEM_W(0X88, ctx->r29) = ctx->r2;
            goto L_0021CF64;
    }
    goto skip_1;
    // 0x0021CF54: sw          $v0, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r2;
    skip_1:
L_0021CF58:
    // 0x0021CF58: beql        $s5, $zero, L_0021CF60
    if (ctx->r21 == 0) {
        // 0x0021CF5C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_0021CF60;
    }
    goto skip_2;
    // 0x0021CF5C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    skip_2:
L_0021CF60:
    // 0x0021CF60: sw          $v0, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r2;
L_0021CF64:
    // 0x0021CF64: lui         $v0, 0x30
    ctx->r2 = S32(0X30 << 16);
    // 0x0021CF68: lw          $v1, 0xD4($s3)
    ctx->r3 = MEM_W(ctx->r19, 0XD4);
    // 0x0021CF6C: lw          $a0, 0x14($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X14);
    // 0x0021CF70: and         $v1, $v1, $v0
    ctx->r3 = ctx->r3 & ctx->r2;
    // 0x0021CF74: lw          $s0, 0x0($a0)
    ctx->r16 = MEM_W(ctx->r4, 0X0);
    // 0x0021CF78: beq         $v1, $zero, L_0021CFA4
    if (ctx->r3 == 0) {
        // 0x0021CF7C: nop
    
            goto L_0021CFA4;
    }
    // 0x0021CF7C: nop

    // 0x0021CF80: lw          $v0, 0x1A8($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X1A8);
    // 0x0021CF84: bnel        $s3, $v0, L_0021CF94
    if (ctx->r19 != ctx->r2) {
        // 0x0021CF88: sw          $zero, 0x88($sp)
        MEM_W(0X88, ctx->r29) = 0;
            goto L_0021CF94;
    }
    goto skip_3;
    // 0x0021CF88: sw          $zero, 0x88($sp)
    MEM_W(0X88, ctx->r29) = 0;
    skip_3:
    // 0x0021CF8C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0021CF90: sw          $v0, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r2;
L_0021CF94:
    // 0x0021CF94: jal         0x00284188
    // 0x0021CF98: nop

    func_00284188(rdram, ctx);
        goto after_9;
    // 0x0021CF98: nop

    after_9:
    // 0x0021CF9C: bnel        $v0, $zero, L_0021CFA4
    if (ctx->r2 != 0) {
        // 0x0021CFA0: sw          $zero, 0x88($sp)
        MEM_W(0X88, ctx->r29) = 0;
            goto L_0021CFA4;
    }
    goto skip_4;
    // 0x0021CFA0: sw          $zero, 0x88($sp)
    MEM_W(0X88, ctx->r29) = 0;
    skip_4:
L_0021CFA4:
    // 0x0021CFA4: jal         0x00284188
    // 0x0021CFA8: nop

    func_00284188(rdram, ctx);
        goto after_10;
    // 0x0021CFA8: nop

    after_10:
    // 0x0021CFAC: bne         $v0, $zero, L_0021CFDC
    if (ctx->r2 != 0) {
        // 0x0021CFB0: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_0021CFDC;
    }
    // 0x0021CFB0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0021CFB4: lb          $v0, 0xB($fp)
    ctx->r2 = MEM_B(ctx->r30, 0XB);
    // 0x0021CFB8: bne         $v0, $zero, L_0021CFCC
    if (ctx->r2 != 0) {
        // 0x0021CFBC: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_0021CFCC;
    }
    // 0x0021CFBC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0021CFC0: lb          $v0, 0xB($s7)
    ctx->r2 = MEM_B(ctx->r23, 0XB);
    // 0x0021CFC4: beq         $v0, $zero, L_0021CFD4
    if (ctx->r2 == 0) {
        // 0x0021CFC8: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_0021CFD4;
    }
    // 0x0021CFC8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_0021CFCC:
    // 0x0021CFCC: bnel        $s0, $v0, L_0021CFE0
    if (ctx->r16 != ctx->r2) {
        // 0x0021CFD0: sw          $v0, 0x90($sp)
        MEM_W(0X90, ctx->r29) = ctx->r2;
            goto L_0021CFE0;
    }
    goto skip_5;
    // 0x0021CFD0: sw          $v0, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r2;
    skip_5:
L_0021CFD4:
    // 0x0021CFD4: j           L_0021CFE0
    // 0x0021CFD8: sw          $zero, 0x90($sp)
    MEM_W(0X90, ctx->r29) = 0;
        goto L_0021CFE0;
    // 0x0021CFD8: sw          $zero, 0x90($sp)
    MEM_W(0X90, ctx->r29) = 0;
L_0021CFDC:
    // 0x0021CFDC: sw          $v0, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r2;
L_0021CFE0:
    // 0x0021CFE0: lw          $v0, 0xD4($s3)
    ctx->r2 = MEM_W(ctx->r19, 0XD4);
    // 0x0021CFE4: lui         $v1, 0x20
    ctx->r3 = S32(0X20 << 16);
    // 0x0021CFE8: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x0021CFEC: bnel        $v0, $zero, L_0021D078
    if (ctx->r2 != 0) {
        // 0x0021CFF0: sw          $zero, 0x98($sp)
        MEM_W(0X98, ctx->r29) = 0;
            goto L_0021D078;
    }
    goto skip_6;
    // 0x0021CFF0: sw          $zero, 0x98($sp)
    MEM_W(0X98, ctx->r29) = 0;
    skip_6:
    // 0x0021CFF4: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x0021CFF8: beq         $s0, $v1, L_0021D008
    if (ctx->r16 == ctx->r3) {
        // 0x0021CFFC: addiu       $v0, $zero, 0xB
        ctx->r2 = ADD32(0, 0XB);
            goto L_0021D008;
    }
    // 0x0021CFFC: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
    // 0x0021D000: bnel        $s0, $v0, L_0021D078
    if (ctx->r16 != ctx->r2) {
        // 0x0021D004: sw          $zero, 0x98($sp)
        MEM_W(0X98, ctx->r29) = 0;
            goto L_0021D078;
    }
    goto skip_7;
    // 0x0021D004: sw          $zero, 0x98($sp)
    MEM_W(0X98, ctx->r29) = 0;
    skip_7:
L_0021D008:
    // 0x0021D008: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x0021D00C: lw          $v0, -0x5528($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X5528);
    // 0x0021D010: andi        $v0, $v0, 0x100
    ctx->r2 = ctx->r2 & 0X100;
    // 0x0021D014: beql        $v0, $zero, L_0021D030
    if (ctx->r2 == 0) {
        // 0x0021D018: sw          $zero, 0x98($sp)
        MEM_W(0X98, ctx->r29) = 0;
            goto L_0021D030;
    }
    goto skip_8;
    // 0x0021D018: sw          $zero, 0x98($sp)
    MEM_W(0X98, ctx->r29) = 0;
    skip_8:
    // 0x0021D01C: sw          $v1, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->r3;
    // 0x0021D020: sw          $v1, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->r3;
    // 0x0021D024: sw          $v1, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r3;
    // 0x0021D028: j           L_0021D03C
    // 0x0021D02C: sw          $v1, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r3;
        goto L_0021D03C;
    // 0x0021D02C: sw          $v1, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r3;
L_0021D030:
    // 0x0021D030: sw          $zero, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = 0;
    // 0x0021D034: sw          $zero, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = 0;
    // 0x0021D038: sw          $zero, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = 0;
L_0021D03C:
    // 0x0021D03C: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x0021D040: lw          $v0, -0x5528($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X5528);
    // 0x0021D044: andi        $v0, $v0, 0x20
    ctx->r2 = ctx->r2 & 0X20;
    // 0x0021D048: beq         $v0, $zero, L_0021D058
    if (ctx->r2 == 0) {
        // 0x0021D04C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_0021D058;
    }
    // 0x0021D04C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0021D050: j           L_0021D05C
    // 0x0021D054: sw          $v0, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r2;
        goto L_0021D05C;
    // 0x0021D054: sw          $v0, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r2;
L_0021D058:
    // 0x0021D058: sw          $zero, 0x94($sp)
    MEM_W(0X94, ctx->r29) = 0;
L_0021D05C:
    // 0x0021D05C: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x0021D060: lw          $v0, -0x5528($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X5528);
    // 0x0021D064: andi        $v0, $v0, 0x80
    ctx->r2 = ctx->r2 & 0X80;
    // 0x0021D068: beq         $v0, $zero, L_0021D088
    if (ctx->r2 == 0) {
        // 0x0021D06C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_0021D088;
    }
    // 0x0021D06C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0021D070: j           L_0021D08C
    // 0x0021D074: sw          $v0, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->r2;
        goto L_0021D08C;
    // 0x0021D074: sw          $v0, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->r2;
L_0021D078:
    // 0x0021D078: sw          $zero, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = 0;
    // 0x0021D07C: sw          $zero, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = 0;
    // 0x0021D080: sw          $zero, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = 0;
    // 0x0021D084: sw          $zero, 0x94($sp)
    MEM_W(0X94, ctx->r29) = 0;
L_0021D088:
    // 0x0021D088: sw          $zero, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = 0;
L_0021D08C:
    // 0x0021D08C: lwc1        $f0, 0x58($s3)
    ctx->f0.u32l = MEM_W(ctx->r19, 0X58);
    // 0x0021D090: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0021D094: lwc1        $f1, 0x5BFC($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X5BFC);
    // 0x0021D098: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0021D09C: swc1        $f0, 0x20B8($sp)
    MEM_W(0X20B8, ctx->r29) = ctx->f0.u32l;
    // 0x0021D0A0: lwc1        $f0, 0x68($s3)
    ctx->f0.u32l = MEM_W(ctx->r19, 0X68);
    // 0x0021D0A4: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0021D0A8: swc1        $f0, 0x20C8($sp)
    MEM_W(0X20C8, ctx->r29) = ctx->f0.u32l;
    // 0x0021D0AC: lwc1        $f0, 0x78($s3)
    ctx->f0.u32l = MEM_W(ctx->r19, 0X78);
    // 0x0021D0B0: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0021D0B4: swc1        $f0, 0x20D8($sp)
    MEM_W(0X20D8, ctx->r29) = ctx->f0.u32l;
    // 0x0021D0B8: lwc1        $f0, 0x88($s3)
    ctx->f0.u32l = MEM_W(ctx->r19, 0X88);
    // 0x0021D0BC: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0021D0C0: swc1        $f0, 0x20E8($sp)
    MEM_W(0X20E8, ctx->r29) = ctx->f0.u32l;
    // 0x0021D0C4: lwc1        $f0, 0x5C($s3)
    ctx->f0.u32l = MEM_W(ctx->r19, 0X5C);
    // 0x0021D0C8: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0021D0CC: swc1        $f0, 0x20BC($sp)
    MEM_W(0X20BC, ctx->r29) = ctx->f0.u32l;
    // 0x0021D0D0: lwc1        $f0, 0x6C($s3)
    ctx->f0.u32l = MEM_W(ctx->r19, 0X6C);
    // 0x0021D0D4: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0021D0D8: swc1        $f0, 0x20CC($sp)
    MEM_W(0X20CC, ctx->r29) = ctx->f0.u32l;
    // 0x0021D0DC: lwc1        $f0, 0x7C($s3)
    ctx->f0.u32l = MEM_W(ctx->r19, 0X7C);
    // 0x0021D0E0: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0021D0E4: swc1        $f0, 0x20DC($sp)
    MEM_W(0X20DC, ctx->r29) = ctx->f0.u32l;
    // 0x0021D0E8: lwc1        $f0, 0x8C($s3)
    ctx->f0.u32l = MEM_W(ctx->r19, 0X8C);
    // 0x0021D0EC: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0021D0F0: swc1        $f0, 0x20EC($sp)
    MEM_W(0X20EC, ctx->r29) = ctx->f0.u32l;
    // 0x0021D0F4: lwc1        $f0, 0x60($s3)
    ctx->f0.u32l = MEM_W(ctx->r19, 0X60);
    // 0x0021D0F8: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0021D0FC: swc1        $f0, 0x20C0($sp)
    MEM_W(0X20C0, ctx->r29) = ctx->f0.u32l;
    // 0x0021D100: lwc1        $f0, 0x70($s3)
    ctx->f0.u32l = MEM_W(ctx->r19, 0X70);
    // 0x0021D104: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0021D108: swc1        $f0, 0x20D0($sp)
    MEM_W(0X20D0, ctx->r29) = ctx->f0.u32l;
    // 0x0021D10C: lwc1        $f0, 0x80($s3)
    ctx->f0.u32l = MEM_W(ctx->r19, 0X80);
    // 0x0021D110: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0021D114: swc1        $f0, 0x20E0($sp)
    MEM_W(0X20E0, ctx->r29) = ctx->f0.u32l;
    // 0x0021D118: lwc1        $f0, 0x90($s3)
    ctx->f0.u32l = MEM_W(ctx->r19, 0X90);
    // 0x0021D11C: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x0021D120: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0021D124: swc1        $f20, 0x20E4($sp)
    MEM_W(0X20E4, ctx->r29) = ctx->f20.u32l;
    // 0x0021D128: swc1        $f20, 0x20D4($sp)
    MEM_W(0X20D4, ctx->r29) = ctx->f20.u32l;
    // 0x0021D12C: swc1        $f20, 0x20C4($sp)
    MEM_W(0X20C4, ctx->r29) = ctx->f20.u32l;
    // 0x0021D130: swc1        $f1, 0x20F4($sp)
    MEM_W(0X20F4, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    // 0x0021D134: jal         0x0029DFC0
    // 0x0021D138: swc1        $f0, 0x20F0($sp)
    MEM_W(0X20F0, ctx->r29) = ctx->f0.u32l;
    func_0029DFC0(rdram, ctx);
        goto after_11;
    // 0x0021D138: swc1        $f0, 0x20F0($sp)
    MEM_W(0X20F0, ctx->r29) = ctx->f0.u32l;
    after_11:
    // 0x0021D13C: addu        $t1, $v0, $zero
    ctx->r9 = ADD32(ctx->r2, 0);
    // 0x0021D140: addu        $t0, $zero, $zero
    ctx->r8 = ADD32(0, 0);
    // 0x0021D144: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x0021D148: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x0021D14C: addu        $a2, $t0, $zero
    ctx->r6 = ADD32(ctx->r8, 0);
    // 0x0021D150: lui         $s2, 0x800E
    ctx->r18 = S32(0X800E << 16);
    // 0x0021D154: addiu       $s2, $s2, 0x6880
    ctx->r18 = ADD32(ctx->r18, 0X6880);
    // 0x0021D158: sw          $t0, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r8;
    // 0x0021D15C: sw          $t1, 0x4($s2)
    MEM_W(0X4, ctx->r18) = ctx->r9;
    // 0x0021D160: jal         0x0021B95C
    // 0x0021D164: addiu       $a3, $sp, 0x20B8
    ctx->r7 = ADD32(ctx->r29, 0X20B8);
    func_0021B95C(rdram, ctx);
        goto after_12;
    // 0x0021D164: addiu       $a3, $sp, 0x20B8
    ctx->r7 = ADD32(ctx->r29, 0X20B8);
    after_12:
    // 0x0021D168: jal         0x0029DFC0
    // 0x0021D16C: nop

    func_0029DFC0(rdram, ctx);
        goto after_13;
    // 0x0021D16C: nop

    after_13:
    // 0x0021D170: lw          $a0, 0x4($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X4);
    // 0x0021D174: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x0021D178: lw          $a1, 0x6D18($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X6D18);
    // 0x0021D17C: lw          $v1, 0x10($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X10);
    // 0x0021D180: beq         $a1, $v1, L_0021D1C8
    if (ctx->r5 == ctx->r3) {
        // 0x0021D184: subu        $a0, $v0, $a0
        ctx->r4 = SUB32(ctx->r2, ctx->r4);
            goto L_0021D1C8;
    }
    // 0x0021D184: subu        $a0, $v0, $a0
    ctx->r4 = SUB32(ctx->r2, ctx->r4);
    // 0x0021D188: lwc1        $f1, 0x28($s2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r18, 0X28);
    // 0x0021D18C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0021D190: lwc1        $f0, 0x5C00($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X5C00);
    // 0x0021D194: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x0021D198: lwc1        $f2, 0x24($s2)
    ctx->f2.u32l = MEM_W(ctx->r18, 0X24);
    // 0x0021D19C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0021D1A0: lwc1        $f0, 0x5C04($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X5C04);
    // 0x0021D1A4: lw          $v0, 0x18($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X18);
    // 0x0021D1A8: mul.s       $f0, $f2, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x0021D1AC: sw          $a1, 0x10($s2)
    MEM_W(0X10, ctx->r18) = ctx->r5;
    // 0x0021D1B0: swc1        $f20, 0x24($s2)
    MEM_W(0X24, ctx->r18) = ctx->f20.u32l;
    // 0x0021D1B4: sw          $zero, 0x18($s2)
    MEM_W(0X18, ctx->r18) = 0;
    // 0x0021D1B8: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x0021D1BC: swc1        $f2, 0x20($s2)
    MEM_W(0X20, ctx->r18) = ctx->f2.u32l;
    // 0x0021D1C0: sw          $v0, 0x14($s2)
    MEM_W(0X14, ctx->r18) = ctx->r2;
    // 0x0021D1C4: swc1        $f1, 0x28($s2)
    MEM_W(0X28, ctx->r18) = ctx->f_odd[(1 - 1) * 2];
L_0021D1C8:
    // 0x0021D1C8: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x0021D1CC: multu       $a0, $v0
    result = U64(U32(ctx->r4)) * U64(U32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x0021D1D0: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x0021D1D4: addiu       $a3, $zero, 0xBB8
    ctx->r7 = ADD32(0, 0XBB8);
    // 0x0021D1D8: mfhi        $a0
    ctx->r4 = hi;
    // 0x0021D1DC: mflo        $a1
    ctx->r5 = lo;
    // 0x0021D1E0: jal         0x002A4650
    // 0x0021D1E4: addiu       $s2, $s2, 0x24
    ctx->r18 = ADD32(ctx->r18, 0X24);
    func_002A4650(rdram, ctx);
        goto after_14;
    // 0x0021D1E4: addiu       $s2, $s2, 0x24
    ctx->r18 = ADD32(ctx->r18, 0X24);
    after_14:
    // 0x0021D1E8: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x0021D1EC: addu        $s1, $v1, $zero
    ctx->r17 = ADD32(ctx->r3, 0);
    // 0x0021D1F0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0021D1F4: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x0021D1F8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x0021D1FC: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x0021D200: jal         0x002A50E0
    // 0x0021D204: addu        $s4, $s2, $zero
    ctx->r20 = ADD32(ctx->r18, 0);
    func_002A50E0(rdram, ctx);
        goto after_15;
    // 0x0021D204: addu        $s4, $s2, $zero
    ctx->r20 = ADD32(ctx->r18, 0);
    after_15:
    // 0x0021D208: blez        $v0, L_0021D220
    if (SIGNED(ctx->r2) <= 0) {
        // 0x0021D20C: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_0021D220;
    }
    // 0x0021D20C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0021D210: jal         0x002A5130
    // 0x0021D214: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_002A5130(rdram, ctx);
        goto after_16;
    // 0x0021D214: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_16:
    // 0x0021D218: j           L_0021D254
    // 0x0021D21C: mov.s       $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    ctx->f1.fl = ctx->f0.fl;
        goto L_0021D254;
    // 0x0021D21C: mov.s       $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    ctx->f1.fl = ctx->f0.fl;
L_0021D220:
    // 0x0021D220: addiu       $a0, $zero, 0x0
    ctx->r4 = ADD32(0, 0X0);
    // 0x0021D224: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x0021D228: and         $a0, $s0, $a0
    ctx->r4 = ctx->r16 & ctx->r4;
    // 0x0021D22C: and         $a1, $s1, $a1
    ctx->r5 = ctx->r17 & ctx->r5;
    // 0x0021D230: srl         $v1, $s1, 1
    ctx->r3 = S32(U32(ctx->r17) >> 1);
    // 0x0021D234: sll         $a2, $s0, 31
    ctx->r6 = S32(ctx->r16 << 31);
    // 0x0021D238: or          $v1, $v1, $a2
    ctx->r3 = ctx->r3 | ctx->r6;
    // 0x0021D23C: srl         $v0, $s0, 1
    ctx->r2 = S32(U32(ctx->r16) >> 1);
    // 0x0021D240: or          $a0, $a0, $v0
    ctx->r4 = ctx->r4 | ctx->r2;
    // 0x0021D244: jal         0x002A5130
    // 0x0021D248: or          $a1, $a1, $v1
    ctx->r5 = ctx->r5 | ctx->r3;
    func_002A5130(rdram, ctx);
        goto after_17;
    // 0x0021D248: or          $a1, $a1, $v1
    ctx->r5 = ctx->r5 | ctx->r3;
    after_17:
    // 0x0021D24C: mov.s       $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    ctx->f1.fl = ctx->f0.fl;
    // 0x0021D250: add.s       $f1, $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f1.fl;
L_0021D254:
    // 0x0021D254: lui         $v1, 0x800E
    ctx->r3 = S32(0X800E << 16);
    // 0x0021D258: addiu       $v1, $v1, 0x6898
    ctx->r3 = ADD32(ctx->r3, 0X6898);
    // 0x0021D25C: lwc1        $f0, 0x0($s4)
    ctx->f0.u32l = MEM_W(ctx->r20, 0X0);
    // 0x0021D260: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x0021D264: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x0021D268: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x0021D26C: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x0021D270: swc1        $f0, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->f0.u32l;
    // 0x0021D274: lw          $v0, 0x27C($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X27C);
    // 0x0021D278: beq         $v0, $zero, L_0021D314
    if (ctx->r2 == 0) {
        // 0x0021D27C: nop
    
            goto L_0021D314;
    }
    // 0x0021D27C: nop

    // 0x0021D280: lw          $a0, 0x2134($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2134);
    // 0x0021D284: jal         0x002017D4
    // 0x0021D288: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_002017D4(rdram, ctx);
        goto after_18;
    // 0x0021D288: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_18:
    // 0x0021D28C: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x0021D290: lw          $a0, 0x2134($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2134);
    // 0x0021D294: jal         0x002017D4
    // 0x0021D298: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    func_002017D4(rdram, ctx);
        goto after_19;
    // 0x0021D298: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    after_19:
    // 0x0021D29C: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    // 0x0021D2A0: lw          $s4, 0x0($s0)
    ctx->r20 = MEM_W(ctx->r16, 0X0);
    // 0x0021D2A4: blez        $s4, L_0021D314
    if (SIGNED(ctx->r20) <= 0) {
        // 0x0021D2A8: addu        $s5, $v0, $zero
        ctx->r21 = ADD32(ctx->r2, 0);
            goto L_0021D314;
    }
    // 0x0021D2A8: addu        $s5, $v0, $zero
    ctx->r21 = ADD32(ctx->r2, 0);
    // 0x0021D2AC: addiu       $s6, $zero, 0x1
    ctx->r22 = ADD32(0, 0X1);
L_0021D2B0:
    // 0x0021D2B0: lw          $v0, 0x14C($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X14C);
    // 0x0021D2B4: sllv        $v1, $s6, $s2
    ctx->r3 = S32(ctx->r22 << (ctx->r18 & 31));
    // 0x0021D2B8: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x0021D2BC: beql        $v0, $zero, L_0021D308
    if (ctx->r2 == 0) {
        // 0x0021D2C0: addiu       $s2, $s2, 0x1
        ctx->r18 = ADD32(ctx->r18, 0X1);
            goto L_0021D308;
    }
    goto skip_9;
    // 0x0021D2C0: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    skip_9:
    // 0x0021D2C4: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    // 0x0021D2C8: jal         0x002017D4
    // 0x0021D2CC: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    func_002017D4(rdram, ctx);
        goto after_20;
    // 0x0021D2CC: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    after_20:
    // 0x0021D2D0: lw          $s1, 0x4($v0)
    ctx->r17 = MEM_W(ctx->r2, 0X4);
    // 0x0021D2D4: beql        $s1, $zero, L_0021D308
    if (ctx->r17 == 0) {
        // 0x0021D2D8: addiu       $s2, $s2, 0x1
        ctx->r18 = ADD32(ctx->r18, 0X1);
            goto L_0021D308;
    }
    goto skip_10;
    // 0x0021D2D8: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    skip_10:
    // 0x0021D2DC: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x0021D2E0: lw          $a0, 0x2134($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2134);
    // 0x0021D2E4: jal         0x002017D4
    // 0x0021D2E8: addiu       $s0, $v0, 0x8
    ctx->r16 = ADD32(ctx->r2, 0X8);
    func_002017D4(rdram, ctx);
        goto after_21;
    // 0x0021D2E8: addiu       $s0, $v0, 0x8
    ctx->r16 = ADD32(ctx->r2, 0X8);
    after_21:
    // 0x0021D2EC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0021D2F0: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x0021D2F4: addiu       $a2, $sp, 0xB8
    ctx->r6 = ADD32(ctx->r29, 0XB8);
    // 0x0021D2F8: addu        $a3, $s3, $zero
    ctx->r7 = ADD32(ctx->r19, 0);
    // 0x0021D2FC: jal         0x0026D710
    // 0x0021D300: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    func_0026D710(rdram, ctx);
        goto after_22;
    // 0x0021D300: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    after_22:
    // 0x0021D304: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
L_0021D308:
    // 0x0021D308: slt         $v0, $s2, $s4
    ctx->r2 = SIGNED(ctx->r18) < SIGNED(ctx->r20) ? 1 : 0;
    // 0x0021D30C: bne         $v0, $zero, L_0021D2B0
    if (ctx->r2 != 0) {
        // 0x0021D310: nop
    
            goto L_0021D2B0;
    }
    // 0x0021D310: nop

L_0021D314:
    // 0x0021D314: lbu         $v0, 0x10F($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0X10F);
    // 0x0021D318: beq         $v0, $zero, L_0021D330
    if (ctx->r2 == 0) {
        // 0x0021D31C: addu        $a1, $s3, $zero
        ctx->r5 = ADD32(ctx->r19, 0);
            goto L_0021D330;
    }
    // 0x0021D31C: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    // 0x0021D320: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x0021D324: addiu       $a0, $a0, 0x2B8
    ctx->r4 = ADD32(ctx->r4, 0X2B8);
    // 0x0021D328: jal         0x002360A0
    // 0x0021D32C: addiu       $a2, $sp, 0xB8
    ctx->r6 = ADD32(ctx->r29, 0XB8);
    func_002360A0(rdram, ctx);
        goto after_23;
    // 0x0021D32C: addiu       $a2, $sp, 0xB8
    ctx->r6 = ADD32(ctx->r29, 0XB8);
    after_23:
L_0021D330:
    // 0x0021D330: lw          $v0, 0x8C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X8C);
    // 0x0021D334: beq         $v0, $zero, L_0021D344
    if (ctx->r2 == 0) {
        // 0x0021D338: nop
    
            goto L_0021D344;
    }
    // 0x0021D338: nop

    // 0x0021D33C: jal         0x00219938
    // 0x0021D340: addu        $a0, $s7, $zero
    ctx->r4 = ADD32(ctx->r23, 0);
    func_00219938(rdram, ctx);
        goto after_24;
    // 0x0021D340: addu        $a0, $s7, $zero
    ctx->r4 = ADD32(ctx->r23, 0);
    after_24:
L_0021D344:
    // 0x0021D344: jal         0x00219938
    // 0x0021D348: addu        $a0, $fp, $zero
    ctx->r4 = ADD32(ctx->r30, 0);
    func_00219938(rdram, ctx);
        goto after_25;
    // 0x0021D348: addu        $a0, $fp, $zero
    ctx->r4 = ADD32(ctx->r30, 0);
    after_25:
    // 0x0021D34C: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
L_0021D350:
    // 0x0021D350: lw          $a1, 0x20F8($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20F8);
    // 0x0021D354: jal         0x002051F4
    // 0x0021D358: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_002051F4(rdram, ctx);
        goto after_26;
    // 0x0021D358: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_26:
L_0021D35C:
    // 0x0021D35C: beql        $s0, $zero, L_0021D364
    if (ctx->r16 == 0) {
        // 0x0021D360: sw          $zero, 0x98($s3)
        MEM_W(0X98, ctx->r19) = 0;
            goto L_0021D364;
    }
    goto skip_11;
    // 0x0021D360: sw          $zero, 0x98($s3)
    MEM_W(0X98, ctx->r19) = 0;
    skip_11:
L_0021D364:
    // 0x0021D364: addu        $v0, $s0, $zero
    ctx->r2 = ADD32(ctx->r16, 0);
L_0021D368:
    // 0x0021D368: lw          $ra, 0x2124($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2124);
    // 0x0021D36C: lw          $fp, 0x2120($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X2120);
    // 0x0021D370: lw          $s7, 0x211C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X211C);
    // 0x0021D374: lw          $s6, 0x2118($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X2118);
    // 0x0021D378: lw          $s5, 0x2114($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2114);
    // 0x0021D37C: lw          $s4, 0x2110($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X2110);
    // 0x0021D380: lw          $s3, 0x210C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X210C);
    // 0x0021D384: lw          $s2, 0x2108($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X2108);
    // 0x0021D388: lw          $s1, 0x2104($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2104);
    // 0x0021D38C: lw          $s0, 0x2100($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X2100);
    // 0x0021D390: ldc1        $f20, 0x2128($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X2128);
    // 0x0021D394: jr          $ra
    // 0x0021D398: addiu       $sp, $sp, 0x2130
    ctx->r29 = ADD32(ctx->r29, 0X2130);
    return;
    // 0x0021D398: addiu       $sp, $sp, 0x2130
    ctx->r29 = ADD32(ctx->r29, 0X2130);
;}
RECOMP_FUNC void func_002746A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002746A0: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x002746A4: jr          $ra
    // 0x002746A8: nop

    return;
    // 0x002746A8: nop

;}
RECOMP_FUNC void func_0045C21C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_00423270:
    // 0x0045C21C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0045C220: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0045C224: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x0045C228: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x0045C22C: lw          $a0, 0x1C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X1C);
    // 0x0045C230: lw          $a2, 0x92C($a0)
    ctx->r6 = MEM_W(ctx->r4, 0X92C);
    // 0x0045C234: jal         0x00253640
    // 0x0045C238: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_00253640(rdram, ctx);
        goto after_0;
    // 0x0045C238: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_0:
    // 0x0045C23C: beq         $v0, $zero, L_0045C258
    if (ctx->r2 == 0) {
        // 0x0045C240: lui         $a0, 0x100
        ctx->r4 = S32(0X100 << 16);
            goto L_0045C258;
    }
    // 0x0045C240: lui         $a0, 0x100
    ctx->r4 = S32(0X100 << 16);
    // 0x0045C244: lw          $v0, 0xC($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC);
    // 0x0045C248: lw          $v1, 0x58($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X58);
    // 0x0045C24C: or          $v1, $v1, $a0
    ctx->r3 = ctx->r3 | ctx->r4;
    // 0x0045C250: j           L_00423270
    // 0x0045C254: sw          $v1, 0x58($v0)
    MEM_W(0X58, ctx->r2) = ctx->r3;
    entry_00423270(rdram, ctx);
    return;
    // 0x0045C254: sw          $v1, 0x58($v0)
    MEM_W(0X58, ctx->r2) = ctx->r3;
L_0045C258:
    // 0x0045C258: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    // 0x0045C25C: lui         $v1, 0xFEFF
    ctx->r3 = S32(0XFEFF << 16);
    // 0x0045C260: lw          $v0, 0x58($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X58);
    // 0x0045C264: ori         $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 | 0XFFFF;
    // 0x0045C268: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x0045C26C: sw          $v0, 0x58($a0)
    MEM_W(0X58, ctx->r4) = ctx->r2;
    // 0x0045C270: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x0045C274: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0045C278: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x0045C27C: jr          $ra
    // 0x0045C280: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0045C280: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_004510DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004510DC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x004510E0: addu        $a0, $a2, $zero
    ctx->r4 = ADD32(ctx->r6, 0);
    // 0x004510E4: lui         $a2, 0x44
    ctx->r6 = S32(0X44 << 16);
    // 0x004510E8: addiu       $a2, $a2, -0x7A70
    ctx->r6 = ADD32(ctx->r6, -0X7A70);
    // 0x004510EC: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x004510F0: jal         0x00416894
    // 0x004510F4: nop

    func_00416894(rdram, ctx);
        goto after_0;
    // 0x004510F4: nop

    after_0:
    // 0x004510F8: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x004510FC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00451100: jr          $ra
    // 0x00451104: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00451104: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00266230(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00266230: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00266234: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00266238: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x0026623C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00266240: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x00266244: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x00266248: addiu       $a0, $a0, 0x7078
    ctx->r4 = ADD32(ctx->r4, 0X7078);
    // 0x0026624C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x00266250: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x00266254: jal         0x00220260
    // 0x00266258: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_00220260(rdram, ctx);
        goto after_0;
    // 0x00266258: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x0026625C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00266260: lui         $a1, 0x20
    ctx->r5 = S32(0X20 << 16);
    // 0x00266264: jal         0x0026E110
    // 0x00266268: addu        $a2, $a0, $zero
    ctx->r6 = ADD32(ctx->r4, 0);
    func_0026E110(rdram, ctx);
        goto after_1;
    // 0x00266268: addu        $a2, $a0, $zero
    ctx->r6 = ADD32(ctx->r4, 0);
    after_1:
    // 0x0026626C: sw          $zero, 0x114($s1)
    MEM_W(0X114, ctx->r17) = 0;
    // 0x00266270: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x00266274: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00266278: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0026627C: jr          $ra
    // 0x00266280: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00266280: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_00260B40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00260B40: addiu       $sp, $sp, -0x110
    ctx->r29 = ADD32(ctx->r29, -0X110);
    // 0x00260B44: sw          $s1, 0x104($sp)
    MEM_W(0X104, ctx->r29) = ctx->r17;
    // 0x00260B48: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x00260B4C: sw          $s0, 0x100($sp)
    MEM_W(0X100, ctx->r29) = ctx->r16;
    // 0x00260B50: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x00260B54: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    // 0x00260B58: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x00260B5C: addu        $v0, $a3, $zero
    ctx->r2 = ADD32(ctx->r7, 0);
    // 0x00260B60: sw          $ra, 0x108($sp)
    MEM_W(0X108, ctx->r29) = ctx->r31;
    // 0x00260B64: jal         0x00246108
    // 0x00260B68: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    func_00246108(rdram, ctx);
        goto after_0;
    // 0x00260B68: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    after_0:
    // 0x00260B6C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x00260B70: lui         $a2, 0x3E0E
    ctx->r6 = S32(0X3E0E << 16);
    // 0x00260B74: ori         $a2, $a2, 0xFA36
    ctx->r6 = ctx->r6 | 0XFA36;
    // 0x00260B78: lw          $a3, 0x20($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X20);
    // 0x00260B7C: jal         0x00245BAC
    // 0x00260B80: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_00245BAC(rdram, ctx);
        goto after_1;
    // 0x00260B80: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_1:
    // 0x00260B84: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x00260B88: lui         $a2, 0x4270
    ctx->r6 = S32(0X4270 << 16);
    // 0x00260B8C: lui         $a3, 0x41F0
    ctx->r7 = S32(0X41F0 << 16);
    // 0x00260B90: jal         0x0025EB50
    // 0x00260B94: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_0025EB50(rdram, ctx);
        goto after_2;
    // 0x00260B94: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_2:
    // 0x00260B98: lwc1        $f1, 0x40($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X40);
    // 0x00260B9C: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x00260BA0: nop

    // 0x00260BA4: bc1f        L_00260BB8
    if (!c1cs) {
        // 0x00260BA8: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_00260BB8;
    }
    // 0x00260BA8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x00260BAC: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x00260BB0: jal         0x00243414
    // 0x00260BB4: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    func_00243414(rdram, ctx);
        goto after_3;
    // 0x00260BB4: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_3:
L_00260BB8:
    // 0x00260BB8: lw          $a2, 0x80($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X80);
    // 0x00260BBC: beq         $a2, $zero, L_00260C68
    if (ctx->r6 == 0) {
        // 0x00260BC0: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_00260C68;
    }
    // 0x00260BC0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x00260BC4: lui         $a3, 0x3EB2
    ctx->r7 = S32(0X3EB2 << 16);
    // 0x00260BC8: ori         $a3, $a3, 0xB8C4
    ctx->r7 = ctx->r7 | 0XB8C4;
    // 0x00260BCC: jal         0x002451AC
    // 0x00260BD0: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_002451AC(rdram, ctx);
        goto after_4;
    // 0x00260BD0: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_4:
    // 0x00260BD4: beq         $v0, $zero, L_00260C34
    if (ctx->r2 == 0) {
        // 0x00260BD8: nop
    
            goto L_00260C34;
    }
    // 0x00260BD8: nop

    // 0x00260BDC: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x00260BE0: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00260BE4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00260BE8: lwc1        $f1, 0x79D4($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X79D4);
    // 0x00260BEC: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x00260BF0: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00260BF4: sw          $zero, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = 0;
    // 0x00260BF8: sw          $zero, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = 0;
    // 0x00260BFC: swc1        $f0, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->f0.u32l;
    // 0x00260C00: lw          $a1, 0x50($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X50);
    // 0x00260C04: jal         0x002105A4
    // 0x00260C08: addiu       $a0, $sp, 0xC0
    ctx->r4 = ADD32(ctx->r29, 0XC0);
    func_002105A4(rdram, ctx);
        goto after_5;
    // 0x00260C08: addiu       $a0, $sp, 0xC0
    ctx->r4 = ADD32(ctx->r29, 0XC0);
    after_5:
    // 0x00260C0C: addiu       $a0, $sp, 0xC0
    ctx->r4 = ADD32(ctx->r29, 0XC0);
    // 0x00260C10: addiu       $a1, $sp, 0xA0
    ctx->r5 = ADD32(ctx->r29, 0XA0);
    // 0x00260C14: jal         0x0020F85C
    // 0x00260C18: addiu       $a2, $sp, 0xB0
    ctx->r6 = ADD32(ctx->r29, 0XB0);
    func_0020F85C(rdram, ctx);
        goto after_6;
    // 0x00260C18: addiu       $a2, $sp, 0xB0
    ctx->r6 = ADD32(ctx->r29, 0XB0);
    after_6:
    // 0x00260C1C: addiu       $a0, $s1, 0x18
    ctx->r4 = ADD32(ctx->r17, 0X18);
    // 0x00260C20: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x00260C24: jal         0x0020EEF8
    // 0x00260C28: addiu       $a2, $sp, 0xB0
    ctx->r6 = ADD32(ctx->r29, 0XB0);
    func_0020EEF8(rdram, ctx);
        goto after_7;
    // 0x00260C28: addiu       $a2, $sp, 0xB0
    ctx->r6 = ADD32(ctx->r29, 0XB0);
    after_7:
    // 0x00260C2C: j           L_00260C68
    // 0x00260C30: nop

        goto L_00260C68;
    // 0x00260C30: nop

L_00260C34:
    // 0x00260C34: lwc1        $f2, 0x18($s1)
    ctx->f2.u32l = MEM_W(ctx->r17, 0X18);
    // 0x00260C38: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00260C3C: lwc1        $f3, 0x79D8($at)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r1, 0X79D8);
    // 0x00260C40: mul.s       $f2, $f2, $f3
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f3.fl);
    // 0x00260C44: lwc1        $f1, 0x1C($s1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r17, 0X1C);
    // 0x00260C48: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00260C4C: lwc1        $f0, 0x79DC($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X79DC);
    // 0x00260C50: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x00260C54: lwc1        $f0, 0x20($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X20);
    // 0x00260C58: mul.s       $f0, $f0, $f3
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f3.fl);
    // 0x00260C5C: swc1        $f2, 0x18($s1)
    MEM_W(0X18, ctx->r17) = ctx->f2.u32l;
    // 0x00260C60: swc1        $f1, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->f_odd[(1 - 1) * 2];
    // 0x00260C64: swc1        $f0, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->f0.u32l;
L_00260C68:
    // 0x00260C68: lw          $ra, 0x108($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X108);
    // 0x00260C6C: lw          $s1, 0x104($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X104);
    // 0x00260C70: lw          $s0, 0x100($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X100);
    // 0x00260C74: jr          $ra
    // 0x00260C78: addiu       $sp, $sp, 0x110
    ctx->r29 = ADD32(ctx->r29, 0X110);
    return;
    // 0x00260C78: addiu       $sp, $sp, 0x110
    ctx->r29 = ADD32(ctx->r29, 0X110);
;}
RECOMP_FUNC void boot_main(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
;}
RECOMP_FUNC void func_002A12DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002A12DC: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x002A12E0: sw          $zero, 0x5C48($at)
    MEM_W(0X5C48, ctx->r1) = 0;
    // 0x002A12E4: jr          $ra
    // 0x002A12E8: nop

    return;
    // 0x002A12E8: nop

;}
RECOMP_FUNC void func_0044FC0C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0044FC0C: lw          $v0, 0x1CC($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X1CC);
    // 0x0044FC10: bne         $v0, $zero, L_0044FC20
    if (ctx->r2 != 0) {
        // 0x0044FC14: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_0044FC20;
    }
    // 0x0044FC14: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0044FC18: sw          $v0, 0x1CC($a0)
    MEM_W(0X1CC, ctx->r4) = ctx->r2;
    // 0x0044FC1C: sw          $zero, 0x1C8($a0)
    MEM_W(0X1C8, ctx->r4) = 0;
L_0044FC20:
    // 0x0044FC20: jr          $ra
    // 0x0044FC24: nop

    return;
    // 0x0044FC24: nop

;}
RECOMP_FUNC void func_0028820C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0028820C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x00288210: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x00288214: lui         $s0, 0x800C
    ctx->r16 = S32(0X800C << 16);
    // 0x00288218: addiu       $s0, $s0, 0x7C00
    ctx->r16 = ADD32(ctx->r16, 0X7C00);
    // 0x0028821C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00288220: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x00288224: addiu       $a2, $zero, 0x80
    ctx->r6 = ADD32(0, 0X80);
    // 0x00288228: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x0028822C: jal         0x00266C5C
    // 0x00288230: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    func_00266C5C(rdram, ctx);
        goto after_0;
    // 0x00288230: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    after_0:
    // 0x00288234: lui         $s1, 0x800F
    ctx->r17 = S32(0X800F << 16);
    // 0x00288238: addiu       $s1, $s1, 0x6840
    ctx->r17 = ADD32(ctx->r17, 0X6840);
    // 0x0028823C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x00288240: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x00288244: lui         $a2, 0x29
    ctx->r6 = S32(0X29 << 16);
    // 0x00288248: addiu       $a2, $a2, -0x77C8
    ctx->r6 = ADD32(ctx->r6, -0X77C8);
    // 0x0028824C: addiu       $s0, $s0, 0x80
    ctx->r16 = ADD32(ctx->r16, 0X80);
    // 0x00288250: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00288254: lw          $v0, 0x6E74($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X6E74);
    // 0x00288258: addu        $a3, $a1, $zero
    ctx->r7 = ADD32(ctx->r5, 0);
    // 0x0028825C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00288260: jal         0x0029B060
    // 0x00288264: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    osCreateThread_recomp(rdram, ctx);
        goto after_1;
    // 0x00288264: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    after_1:
    // 0x00288268: jal         0x0029BB10
    // 0x0028826C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    osStartThread_recomp(rdram, ctx);
        goto after_2;
    // 0x0028826C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_2:
    // 0x00288270: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x00288274: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x00288278: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x0028827C: jr          $ra
    // 0x00288280: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x00288280: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_0028ADF0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0028ADF0: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x0028ADF4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x0028ADF8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x0028ADFC: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x0028AE00: addu        $s3, $a1, $zero
    ctx->r19 = ADD32(ctx->r5, 0);
    // 0x0028AE04: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x0028AE08: addu        $s4, $a2, $zero
    ctx->r20 = ADD32(ctx->r6, 0);
    // 0x0028AE0C: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x0028AE10: addiu       $s1, $s0, 0x40
    ctx->r17 = ADD32(ctx->r16, 0X40);
    // 0x0028AE14: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0028AE18: addiu       $a1, $s0, 0x58
    ctx->r5 = ADD32(ctx->r16, 0X58);
    // 0x0028AE1C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0028AE20: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x0028AE24: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x0028AE28: sh          $v0, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r2;
    // 0x0028AE2C: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x0028AE30: sw          $zero, 0x2F4($s0)
    MEM_W(0X2F4, ctx->r16) = 0;
    // 0x0028AE34: sw          $zero, 0x2F8($s0)
    MEM_W(0X2F8, ctx->r16) = 0;
    // 0x0028AE38: sw          $zero, 0x2E0($s0)
    MEM_W(0X2E0, ctx->r16) = 0;
    // 0x0028AE3C: sw          $zero, 0x2FC($s0)
    MEM_W(0X2FC, ctx->r16) = 0;
    // 0x0028AE40: sw          $zero, 0x2E4($s0)
    MEM_W(0X2E4, ctx->r16) = 0;
    // 0x0028AE44: sw          $zero, 0x2E8($s0)
    MEM_W(0X2E8, ctx->r16) = 0;
    // 0x0028AE48: sw          $zero, 0x2EC($s0)
    MEM_W(0X2EC, ctx->r16) = 0;
    // 0x0028AE4C: sw          $zero, 0x2F0($s0)
    MEM_W(0X2F0, ctx->r16) = 0;
    // 0x0028AE50: sw          $zero, 0x300($s0)
    MEM_W(0X300, ctx->r16) = 0;
    // 0x0028AE54: sh          $v0, 0x20($s0)
    MEM_H(0X20, ctx->r16) = ctx->r2;
    // 0x0028AE58: lbu         $s2, 0x43($sp)
    ctx->r18 = MEM_BU(ctx->r29, 0X43);
    // 0x0028AE5C: jal         0x0029B030
    // 0x0028AE60: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    osCreateMesgQueue_recomp(rdram, ctx);
        goto after_0;
    // 0x0028AE60: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_0:
    // 0x0028AE64: addiu       $a0, $s0, 0x78
    ctx->r4 = ADD32(ctx->r16, 0X78);
    // 0x0028AE68: addiu       $a1, $s0, 0x90
    ctx->r5 = ADD32(ctx->r16, 0X90);
    // 0x0028AE6C: jal         0x0029B030
    // 0x0028AE70: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    osCreateMesgQueue_recomp(rdram, ctx);
        goto after_1;
    // 0x0028AE70: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_1:
    // 0x0028AE74: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x0028AE78: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x0028AE7C: jal         0x0029B950
    // 0x0028AE80: addiu       $a2, $zero, 0x29B
    ctx->r6 = ADD32(0, 0X29B);
    osSetEventMesg_recomp(rdram, ctx);
        goto after_2;
    // 0x0028AE80: addiu       $a2, $zero, 0x29B
    ctx->r6 = ADD32(0, 0X29B);
    after_2:
    // 0x0028AE84: addiu       $a0, $zero, 0x9
    ctx->r4 = ADD32(0, 0X9);
    // 0x0028AE88: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x0028AE8C: jal         0x0029B950
    // 0x0028AE90: addiu       $a2, $zero, 0x29C
    ctx->r6 = ADD32(0, 0X29C);
    osSetEventMesg_recomp(rdram, ctx);
        goto after_3;
    // 0x0028AE90: addiu       $a2, $zero, 0x29C
    ctx->r6 = ADD32(0, 0X29C);
    after_3:
    // 0x0028AE94: addiu       $a0, $zero, 0xE
    ctx->r4 = ADD32(0, 0XE);
    // 0x0028AE98: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x0028AE9C: jal         0x0029B950
    // 0x0028AEA0: addiu       $a2, $zero, 0x29D
    ctx->r6 = ADD32(0, 0X29D);
    osSetEventMesg_recomp(rdram, ctx);
        goto after_4;
    // 0x0028AEA0: addiu       $a2, $zero, 0x29D
    ctx->r6 = ADD32(0, 0X29D);
    after_4:
    // 0x0028AEA4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0028AEA8: addiu       $a1, $zero, 0x29A
    ctx->r5 = ADD32(0, 0X29A);
    // 0x0028AEAC: jal         0x0029AA20
    // 0x0028AEB0: andi        $a2, $s2, 0xFF
    ctx->r6 = ctx->r18 & 0XFF;
    osViSetEvent_recomp(rdram, ctx);
        goto after_5;
    // 0x0028AEB0: andi        $a2, $s2, 0xFF
    ctx->r6 = ctx->r18 & 0XFF;
    after_5:
    // 0x0028AEB4: addiu       $s1, $s0, 0xB0
    ctx->r17 = ADD32(ctx->r16, 0XB0);
    // 0x0028AEB8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0028AEBC: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    // 0x0028AEC0: lui         $a2, 0x29
    ctx->r6 = S32(0X29 << 16);
    // 0x0028AEC4: addiu       $a2, $a2, -0x5FE0
    ctx->r6 = ADD32(ctx->r6, -0X5FE0);
    // 0x0028AEC8: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    // 0x0028AECC: sw          $s3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r19;
    // 0x0028AED0: jal         0x0029B060
    // 0x0028AED4: sw          $s4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r20;
    osCreateThread_recomp(rdram, ctx);
        goto after_6;
    // 0x0028AED4: sw          $s4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r20;
    after_6:
    // 0x0028AED8: jal         0x0029BB10
    // 0x0028AEDC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    osStartThread_recomp(rdram, ctx);
        goto after_7;
    // 0x0028AEDC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_7:
    // 0x0028AEE0: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x0028AEE4: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x0028AEE8: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x0028AEEC: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x0028AEF0: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x0028AEF4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x0028AEF8: jr          $ra
    // 0x0028AEFC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x0028AEFC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_00285A54(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00285A54: lui         $at, 0x800F
    ctx->r1 = S32(0X800F << 16);
    // 0x00285A58: addu        $at, $at, $a0
    ctx->r1 = ADD32(ctx->r1, ctx->r4);
    // 0x00285A5C: lbu         $v0, 0x5EA0($at)
    ctx->r2 = MEM_BU(ctx->r1, 0X5EA0);
    // 0x00285A60: jr          $ra
    // 0x00285A64: nop

    return;
    // 0x00285A64: nop

;}
RECOMP_FUNC void func_0045AA50(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0045AA50: lui         $v0, 0x44
    ctx->r2 = S32(0X44 << 16);
    // 0x0045AA54: addiu       $v0, $v0, -0x5418
    ctx->r2 = ADD32(ctx->r2, -0X5418);
    // 0x0045AA58: jr          $ra
    // 0x0045AA5C: nop

    return;
    // 0x0045AA5C: nop

;}
RECOMP_FUNC void func_00423768(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00423768: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x0042376C: lw          $v0, 0x990($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X990);
    // 0x00423770: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00423774: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x00423778: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x0042377C: beq         $v0, $zero, L_00423794
    if (ctx->r2 == 0) {
        // 0x00423780: sw          $ra, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r31;
            goto L_00423794;
    }
    // 0x00423780: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x00423784: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x00423788: lw          $a1, 0x2028($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X2028);
    // 0x0042378C: j           L_004237A0
    // 0x00423790: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_004237A0;
    // 0x00423790: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_00423794:
    // 0x00423794: lw          $v0, 0x20($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X20);
    // 0x00423798: lb          $a1, 0x4($v0)
    ctx->r5 = MEM_B(ctx->r2, 0X4);
    // 0x0042379C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_004237A0:
    // 0x004237A0: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x004237A4: sw          $v0, 0x9BC($at)
    MEM_W(0X9BC, ctx->r1) = ctx->r2;
    // 0x004237A8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x004237AC: jal         0x0041DD90
    // 0x004237B0: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    func_0041DD90(rdram, ctx);
        goto after_0;
    // 0x004237B0: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    after_0:
    // 0x004237B4: beq         $v0, $zero, L_00423820
    if (ctx->r2 == 0) {
        // 0x004237B8: nop
    
            goto L_00423820;
    }
    // 0x004237B8: nop

    // 0x004237BC: lw          $v0, 0x1C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X1C);
    // 0x004237C0: beq         $v0, $zero, L_004237D4
    if (ctx->r2 == 0) {
        // 0x004237C4: nop
    
            goto L_004237D4;
    }
    // 0x004237C4: nop

    // 0x004237C8: lw          $v0, 0x51C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X51C);
    // 0x004237CC: j           L_004237DC
    // 0x004237D0: addiu       $a0, $v0, 0x53C
    ctx->r4 = ADD32(ctx->r2, 0X53C);
        goto L_004237DC;
    // 0x004237D0: addiu       $a0, $v0, 0x53C
    ctx->r4 = ADD32(ctx->r2, 0X53C);
L_004237D4:
    // 0x004237D4: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x004237D8: addiu       $a0, $a0, -0x61D4
    ctx->r4 = ADD32(ctx->r4, -0X61D4);
L_004237DC:
    // 0x004237DC: lw          $v1, 0x24($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X24);
    // 0x004237E0: lui         $v0, 0x44
    ctx->r2 = S32(0X44 << 16);
    // 0x004237E4: addiu       $v0, $v0, -0x410C
    ctx->r2 = ADD32(ctx->r2, -0X410C);
    // 0x004237E8: beq         $v1, $v0, L_00423800
    if (ctx->r3 == ctx->r2) {
        // 0x004237EC: nop
    
            goto L_00423800;
    }
    // 0x004237EC: nop

    // 0x004237F0: lui         $v0, 0x44
    ctx->r2 = S32(0X44 << 16);
    // 0x004237F4: addiu       $v0, $v0, -0x4130
    ctx->r2 = ADD32(ctx->r2, -0X4130);
    // 0x004237F8: bnel        $v1, $v0, L_0042380C
    if (ctx->r3 != ctx->r2) {
        // 0x004237FC: sw          $zero, 0x10($sp)
        MEM_W(0X10, ctx->r29) = 0;
            goto L_0042380C;
    }
    goto skip_0;
    // 0x004237FC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    skip_0:
L_00423800:
    // 0x00423800: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x00423804: sw          $zero, 0x940($at)
    MEM_W(0X940, ctx->r1) = 0;
    // 0x00423808: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
L_0042380C:
    // 0x0042380C: lw          $a1, 0x24($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X24);
    // 0x00423810: lw          $a2, 0x1C($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X1C);
    // 0x00423814: lw          $a3, 0x20($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X20);
    // 0x00423818: j           L_00423864
    // 0x0042381C: nop

        goto L_00423864;
    // 0x0042381C: nop

L_00423820:
    // 0x00423820: lw          $v1, 0x24($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X24);
    // 0x00423824: lui         $v0, 0x44
    ctx->r2 = S32(0X44 << 16);
    // 0x00423828: addiu       $v0, $v0, -0x410C
    ctx->r2 = ADD32(ctx->r2, -0X410C);
    // 0x0042382C: beq         $v1, $v0, L_00423844
    if (ctx->r3 == ctx->r2) {
        // 0x00423830: nop
    
            goto L_00423844;
    }
    // 0x00423830: nop

    // 0x00423834: lui         $v0, 0x44
    ctx->r2 = S32(0X44 << 16);
    // 0x00423838: addiu       $v0, $v0, -0x4130
    ctx->r2 = ADD32(ctx->r2, -0X4130);
    // 0x0042383C: bnel        $v1, $v0, L_00423850
    if (ctx->r3 != ctx->r2) {
        // 0x00423840: sw          $zero, 0x10($sp)
        MEM_W(0X10, ctx->r29) = 0;
            goto L_00423850;
    }
    goto skip_1;
    // 0x00423840: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    skip_1:
L_00423844:
    // 0x00423844: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x00423848: sw          $zero, 0x940($at)
    MEM_W(0X940, ctx->r1) = 0;
    // 0x0042384C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
L_00423850:
    // 0x00423850: lw          $a1, 0x24($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X24);
    // 0x00423854: lw          $a2, 0x1C($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X1C);
    // 0x00423858: lw          $a3, 0x20($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X20);
    // 0x0042385C: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x00423860: addiu       $a0, $a0, -0x61D4
    ctx->r4 = ADD32(ctx->r4, -0X61D4);
L_00423864:
    // 0x00423864: jal         0x00416644
    // 0x00423868: nop

    func_00416644(rdram, ctx);
        goto after_1;
    // 0x00423868: nop

    after_1:
    // 0x0042386C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00423870: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x00423874: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x00423878: jr          $ra
    // 0x0042387C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x0042387C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_0025F4DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0025F4DC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0025F4E0: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x0025F4E4: lb          $v0, 0xC7($a1)
    ctx->r2 = MEM_B(ctx->r5, 0XC7);
    // 0x0025F4E8: beq         $v0, $zero, L_0025F4F8
    if (ctx->r2 == 0) {
        // 0x0025F4EC: nop
    
            goto L_0025F4F8;
    }
    // 0x0025F4EC: nop

    // 0x0025F4F0: jal         0x00243414
    // 0x0025F4F4: addiu       $a2, $zero, 0x18
    ctx->r6 = ADD32(0, 0X18);
    func_00243414(rdram, ctx);
        goto after_0;
    // 0x0025F4F4: addiu       $a2, $zero, 0x18
    ctx->r6 = ADD32(0, 0X18);
    after_0:
L_0025F4F8:
    // 0x0025F4F8: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x0025F4FC: jr          $ra
    // 0x0025F500: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0025F500: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_004456F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004456F4: addiu       $sp, $sp, -0xB8
    ctx->r29 = ADD32(ctx->r29, -0XB8);
    // 0x004456F8: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    // 0x004456FC: sw          $s1, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->r17;
    // 0x00445700: lui         $s1, 0x8013
    ctx->r17 = S32(0X8013 << 16);
    // 0x00445704: lw          $s1, -0x490($s1)
    ctx->r17 = MEM_W(ctx->r17, -0X490);
    // 0x00445708: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x0044570C: sw          $ra, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->r31;
    // 0x00445710: sw          $s0, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->r16;
    // 0x00445714: sw          $zero, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = 0;
    // 0x00445718: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x0044571C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x00445720: jal         0x00246108
    // 0x00445724: addiu       $a1, $s1, 0x140
    ctx->r5 = ADD32(ctx->r17, 0X140);
    func_00246108(rdram, ctx);
        goto after_0;
    // 0x00445724: addiu       $a1, $s1, 0x140
    ctx->r5 = ADD32(ctx->r17, 0X140);
    after_0:
    // 0x00445728: lw          $a0, 0x60($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X60);
    // 0x0044572C: beq         $a0, $zero, L_00445748
    if (ctx->r4 == 0) {
        // 0x00445730: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_00445748;
    }
    // 0x00445730: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x00445734: lw          $v0, 0xD4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XD4);
    // 0x00445738: lui         $v1, 0x30
    ctx->r3 = S32(0X30 << 16);
    // 0x0044573C: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x00445740: bnel        $v0, $zero, L_00445748
    if (ctx->r2 != 0) {
        // 0x00445744: sw          $a0, 0xA0($sp)
        MEM_W(0XA0, ctx->r29) = ctx->r4;
            goto L_00445748;
    }
    goto skip_0;
    // 0x00445744: sw          $a0, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r4;
    skip_0:
L_00445748:
    // 0x00445748: lw          $v0, 0xA0($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XA0);
    // 0x0044574C: beq         $v0, $zero, L_00445758
    if (ctx->r2 == 0) {
        // 0x00445750: nop
    
            goto L_00445758;
    }
    // 0x00445750: nop

    // 0x00445754: lw          $s0, 0x1A8($v0)
    ctx->r16 = MEM_W(ctx->r2, 0X1A8);
L_00445758:
    // 0x00445758: beq         $s0, $zero, L_00445794
    if (ctx->r16 == 0) {
        // 0x0044575C: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_00445794;
    }
    // 0x0044575C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x00445760: lui         $a1, 0x43
    ctx->r5 = S32(0X43 << 16);
    // 0x00445764: addiu       $a1, $a1, 0x1C9C
    ctx->r5 = ADD32(ctx->r5, 0X1C9C);
    // 0x00445768: jal         0x00253D68
    // 0x0044576C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00253D68(rdram, ctx);
        goto after_1;
    // 0x0044576C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x00445770: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00445774: jal         0x0024CF58
    // 0x00445778: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_0024CF58(rdram, ctx);
        goto after_2;
    // 0x00445778: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_2:
    // 0x0044577C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00445780: lwc1        $f0, 0x8C4($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X8C4);
    // 0x00445784: swc1        $f0, 0x50($s0)
    MEM_W(0X50, ctx->r16) = ctx->f0.u32l;
    // 0x00445788: swc1        $f0, 0x2D8($s0)
    MEM_W(0X2D8, ctx->r16) = ctx->f0.u32l;
    // 0x0044578C: sw          $zero, 0x50($s1)
    MEM_W(0X50, ctx->r17) = 0;
    // 0x00445790: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
L_00445794:
    // 0x00445794: addiu       $a1, $a0, 0x140
    ctx->r5 = ADD32(ctx->r4, 0X140);
    // 0x00445798: jal         0x00243414
    // 0x0044579C: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    func_00243414(rdram, ctx);
        goto after_3;
    // 0x0044579C: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    after_3:
    // 0x004457A0: lw          $ra, 0xB0($sp)
    ctx->r31 = MEM_W(ctx->r29, 0XB0);
    // 0x004457A4: lw          $s1, 0xAC($sp)
    ctx->r17 = MEM_W(ctx->r29, 0XAC);
    // 0x004457A8: lw          $s0, 0xA8($sp)
    ctx->r16 = MEM_W(ctx->r29, 0XA8);
    // 0x004457AC: jr          $ra
    // 0x004457B0: addiu       $sp, $sp, 0xB8
    ctx->r29 = ADD32(ctx->r29, 0XB8);
    return;
    // 0x004457B0: addiu       $sp, $sp, 0xB8
    ctx->r29 = ADD32(ctx->r29, 0XB8);
;}
RECOMP_FUNC void func_0025E9BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0025E9BC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x0025E9C0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0025E9C4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x0025E9C8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x0025E9CC: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x0025E9D0: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x0025E9D4: sdc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X20, ctx->r29);
    // 0x0025E9D8: sw          $zero, 0xD0($s1)
    MEM_W(0XD0, ctx->r17) = 0;
    // 0x0025E9DC: lw          $v0, 0x27C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X27C);
    // 0x0025E9E0: addiu       $v1, $zero, -0x3
    ctx->r3 = ADD32(0, -0X3);
    // 0x0025E9E4: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x0025E9E8: jal         0x00246918
    // 0x0025E9EC: sw          $v0, 0x27C($s0)
    MEM_W(0X27C, ctx->r16) = ctx->r2;
    func_00246918(rdram, ctx);
        goto after_0;
    // 0x0025E9EC: sw          $v0, 0x27C($s0)
    MEM_W(0X27C, ctx->r16) = ctx->r2;
    after_0:
    // 0x0025E9F0: lwc1        $f3, 0x180($s0)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r16, 0X180);
    // 0x0025E9F4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0025E9F8: lwc1        $f0, 0x77DC($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X77DC);
    // 0x0025E9FC: c.lt.s      $f0, $f3
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    c1cs = ctx->f0.fl < ctx->f3.fl;
    // 0x0025EA00: nop

    // 0x0025EA04: bc1f        L_0025EA58
    if (!c1cs) {
        // 0x0025EA08: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_0025EA58;
    }
    // 0x0025EA08: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0025EA0C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x0025EA10: addiu       $v1, $zero, -0x101
    ctx->r3 = ADD32(0, -0X101);
    // 0x0025EA14: lw          $v0, 0xD4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XD4);
    // 0x0025EA18: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0025EA1C: lwc1        $f20, 0x77E0($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X77E0);
    // 0x0025EA20: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x0025EA24: addiu       $v1, $zero, -0x2001
    ctx->r3 = ADD32(0, -0X2001);
    // 0x0025EA28: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x0025EA2C: jal         0x00246918
    // 0x0025EA30: sw          $v0, 0xD4($s0)
    MEM_W(0XD4, ctx->r16) = ctx->r2;
    func_00246918(rdram, ctx);
        goto after_1;
    // 0x0025EA30: sw          $v0, 0xD4($s0)
    MEM_W(0XD4, ctx->r16) = ctx->r2;
    after_1:
    // 0x0025EA34: lw          $v0, 0xD4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XD4);
    // 0x0025EA38: lui         $v1, 0x8
    ctx->r3 = S32(0X8 << 16);
    // 0x0025EA3C: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x0025EA40: beq         $v0, $zero, L_0025EA64
    if (ctx->r2 == 0) {
        // 0x0025EA44: nop
    
            goto L_0025EA64;
    }
    // 0x0025EA44: nop

    // 0x0025EA48: jal         0x002280B0
    // 0x0025EA4C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_002280B0(rdram, ctx);
        goto after_2;
    // 0x0025EA4C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x0025EA50: j           L_0025EA64
    // 0x0025EA54: nop

        goto L_0025EA64;
    // 0x0025EA54: nop

L_0025EA58:
    // 0x0025EA58: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0025EA5C: lwc1        $f0, 0x77E4($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X77E4);
    // 0x0025EA60: mul.s       $f20, $f3, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = MUL_S(ctx->f3.fl, ctx->f0.fl);
L_0025EA64:
    // 0x0025EA64: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0025EA68: lwc1        $f0, 0x77E8($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X77E8);
    // 0x0025EA6C: add.s       $f3, $f20, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f3.fl = ctx->f20.fl + ctx->f0.fl;
    // 0x0025EA70: lwc1        $f2, 0x34($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X34);
    // 0x0025EA74: mul.s       $f2, $f2, $f3
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f3.fl);
    // 0x0025EA78: sub.s       $f0, $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f20.fl;
    // 0x0025EA7C: lwc1        $f1, 0x38($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X38);
    // 0x0025EA80: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x0025EA84: lwc1        $f0, 0x3C($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X3C);
    // 0x0025EA88: mul.s       $f0, $f0, $f3
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f3.fl);
    // 0x0025EA8C: swc1        $f2, 0x34($s0)
    MEM_W(0X34, ctx->r16) = ctx->f2.u32l;
    // 0x0025EA90: swc1        $f1, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->f_odd[(1 - 1) * 2];
    // 0x0025EA94: swc1        $f0, 0x3C($s0)
    MEM_W(0X3C, ctx->r16) = ctx->f0.u32l;
    // 0x0025EA98: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x0025EA9C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x0025EAA0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0025EAA4: ldc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X20);
    // 0x0025EAA8: jr          $ra
    // 0x0025EAAC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x0025EAAC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_00218B00(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00218B00: jr          $ra
    // 0x00218B04: nop

    return;
    // 0x00218B04: nop

;}
RECOMP_FUNC void func_00451A70(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00451A70: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00451A74: addiu       $v0, $zero, 0x63
    ctx->r2 = ADD32(0, 0X63);
    // 0x00451A78: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x00451A7C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00451A80: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x00451A84: lui         $s0, 0x8012
    ctx->r16 = S32(0X8012 << 16);
    // 0x00451A88: addiu       $s0, $s0, -0x5528
    ctx->r16 = ADD32(ctx->r16, -0X5528);
    // 0x00451A8C: addu        $a0, $a1, $zero
    ctx->r4 = ADD32(ctx->r5, 0);
    // 0x00451A90: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x00451A94: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x00451A98: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x00451A9C: lb          $v0, 0x21($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X21);
    // 0x00451AA0: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x00451AA4: jal         0x0041648C
    // 0x00451AA8: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    func_0041648C(rdram, ctx);
        goto after_0;
    // 0x00451AA8: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    after_0:
    // 0x00451AAC: sb          $v0, 0x21($s0)
    MEM_B(0X21, ctx->r16) = ctx->r2;
    // 0x00451AB0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x00451AB4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x00451AB8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x00451ABC: jr          $ra
    // 0x00451AC0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00451AC0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_0040E430(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0040E430: lb          $v0, 0xC7($a1)
    ctx->r2 = MEM_B(ctx->r5, 0XC7);
    // 0x0040E434: beq         $v0, $zero, L_0040E448
    if (ctx->r2 == 0) {
        // 0x0040E438: addiu       $v1, $zero, -0x101
        ctx->r3 = ADD32(0, -0X101);
            goto L_0040E448;
    }
    // 0x0040E438: addiu       $v1, $zero, -0x101
    ctx->r3 = ADD32(0, -0X101);
    // 0x0040E43C: lw          $v0, 0xD4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XD4);
    // 0x0040E440: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x0040E444: sw          $v0, 0xD4($a0)
    MEM_W(0XD4, ctx->r4) = ctx->r2;
L_0040E448:
    // 0x0040E448: jr          $ra
    // 0x0040E44C: nop

    return;
    // 0x0040E44C: nop

;}
RECOMP_FUNC void func_0024EF70(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0024EF70: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x0024EF74: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x0024EF78: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x0024EF7C: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x0024EF80: addu        $s2, $a1, $zero
    ctx->r18 = ADD32(ctx->r5, 0);
    // 0x0024EF84: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x0024EF88: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0024EF8C: sdc1        $f21, 0x28($sp)
    CHECK_FR(ctx, 21);
    SD(ctx->f21.u64, 0X28, ctx->r29);
    // 0x0024EF90: sdc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X20, ctx->r29);
    // 0x0024EF94: lw          $v0, 0x1284($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X1284);
    // 0x0024EF98: bne         $v0, $zero, L_0024F154
    if (ctx->r2 != 0) {
        // 0x0024EF9C: addu        $s0, $a2, $zero
        ctx->r16 = ADD32(ctx->r6, 0);
            goto L_0024F154;
    }
    // 0x0024EF9C: addu        $s0, $a2, $zero
    ctx->r16 = ADD32(ctx->r6, 0);
    // 0x0024EFA0: lwc1        $f2, 0xB90($s1)
    ctx->f2.u32l = MEM_W(ctx->r17, 0XB90);
    // 0x0024EFA4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0024EFA8: lwc1        $f0, 0x6DA0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6DA0);
    // 0x0024EFAC: lw          $a0, 0x518($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X518);
    // 0x0024EFB0: mul.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x0024EFB4: lbu         $v0, 0x29($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X29);
    // 0x0024EFB8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0024EFBC: lwc1        $f5, 0x6DA4($at)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r1, 0X6DA4);
    // 0x0024EFC0: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x0024EFC4: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x0024EFC8: mul.s       $f0, $f0, $f5
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 5);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f5.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f5.fl);
    // 0x0024EFCC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0024EFD0: lwc1        $f3, 0x6DA8($at)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r1, 0X6DA8);
    // 0x0024EFD4: sub.s       $f0, $f0, $f3
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f3.fl;
    // 0x0024EFD8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0024EFDC: lwc1        $f6, 0x6DAC($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X6DAC);
    // 0x0024EFE0: mul.s       $f4, $f0, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x0024EFE4: sub.s       $f2, $f3, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = ctx->f3.fl - ctx->f2.fl;
    // 0x0024EFE8: lwc1        $f0, 0x4($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X4);
    // 0x0024EFEC: mul.s       $f0, $f2, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x0024EFF0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0024EFF4: lwc1        $f1, 0x6DB0($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X6DB0);
    // 0x0024EFF8: add.s       $f21, $f4, $f1
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f21.fl = ctx->f4.fl + ctx->f1.fl;
    // 0x0024EFFC: mul.s       $f21, $f21, $f0
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f21.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f21.fl = MUL_S(ctx->f21.fl, ctx->f0.fl);
    // 0x0024F000: lbu         $v0, 0x2A($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X2A);
    // 0x0024F004: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x0024F008: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x0024F00C: mul.s       $f0, $f0, $f5
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 5);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f5.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f5.fl);
    // 0x0024F010: sub.s       $f0, $f0, $f3
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f3.fl;
    // 0x0024F014: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0024F018: lwc1        $f1, 0x6DB4($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X6DB4);
    // 0x0024F01C: mul.s       $f1, $f0, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0024F020: lwc1        $f0, 0x8($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X8);
    // 0x0024F024: mul.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x0024F028: lwc1        $f0, 0xC($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0XC);
    // 0x0024F02C: mul.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x0024F030: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0024F034: lwc1        $f0, 0x6DB8($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6DB8);
    // 0x0024F038: add.s       $f20, $f1, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x0024F03C: lb          $v1, 0x2B($a0)
    ctx->r3 = MEM_B(ctx->r4, 0X2B);
    // 0x0024F040: mul.s       $f20, $f20, $f2
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f20.fl = MUL_S(ctx->f20.fl, ctx->f2.fl);
    // 0x0024F044: beq         $v1, $zero, L_0024F05C
    if (ctx->r3 == 0) {
        // 0x0024F048: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_0024F05C;
    }
    // 0x0024F048: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0024F04C: beql        $v1, $v0, L_0024F070
    if (ctx->r3 == ctx->r2) {
        // 0x0024F050: mov.s       $f20, $f6
        CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 6);
    ctx->f20.fl = ctx->f6.fl;
            goto L_0024F070;
    }
    goto skip_0;
    // 0x0024F050: mov.s       $f20, $f6
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 6);
    ctx->f20.fl = ctx->f6.fl;
    skip_0:
    // 0x0024F054: j           L_0024F070
    // 0x0024F058: nop

        goto L_0024F070;
    // 0x0024F058: nop

L_0024F05C:
    // 0x0024F05C: lbu         $v0, 0x2D($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X2D);
    // 0x0024F060: bne         $v0, $zero, L_0024F070
    if (ctx->r2 != 0) {
        // 0x0024F064: nop
    
            goto L_0024F070;
    }
    // 0x0024F064: nop

    // 0x0024F068: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0024F06C: lwc1        $f20, 0x6DBC($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X6DBC);
L_0024F070:
    // 0x0024F070: jal         0x00268A2C
    // 0x0024F074: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_00268A2C(rdram, ctx);
        goto after_0;
    // 0x0024F074: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_0:
    // 0x0024F078: beq         $v0, $zero, L_0024F090
    if (ctx->r2 == 0) {
        // 0x0024F07C: addiu       $v1, $zero, 0x2000
        ctx->r3 = ADD32(0, 0X2000);
            goto L_0024F090;
    }
    // 0x0024F07C: addiu       $v1, $zero, 0x2000
    ctx->r3 = ADD32(0, 0X2000);
    // 0x0024F080: lw          $v0, 0x50($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X50);
    // 0x0024F084: andi        $v0, $v0, 0x6000
    ctx->r2 = ctx->r2 & 0X6000;
    // 0x0024F088: beq         $v0, $v1, L_0024F0E4
    if (ctx->r2 == ctx->r3) {
        // 0x0024F08C: nop
    
            goto L_0024F0E4;
    }
    // 0x0024F08C: nop

L_0024F090:
    // 0x0024F090: lwc1        $f2, 0x0($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X0);
    // 0x0024F094: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x0024F098: c.eq.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl == ctx->f0.fl;
    // 0x0024F09C: nop

    // 0x0024F0A0: bc1t        L_0024F0E4
    if (c1cs) {
        // 0x0024F0A4: nop
    
            goto L_0024F0E4;
    }
    // 0x0024F0A4: nop

    // 0x0024F0A8: lwc1        $f0, 0xA54($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0XA54);
    // 0x0024F0AC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0024F0B0: lwc1        $f1, 0x6DC0($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X6DC0);
    // 0x0024F0B4: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0024F0B8: nop

    // 0x0024F0BC: mul.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f2.fl);
    // 0x0024F0C0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0024F0C4: lwc1        $f1, 0x6DC4($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X6DC4);
    // 0x0024F0C8: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0024F0CC: lwc1        $f1, 0x50($s2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r18, 0X50);
    // 0x0024F0D0: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x0024F0D4: mfc1        $a2, $f21
    ctx->r6 = (int32_t)ctx->f_odd[(21 - 1) * 2];
    // 0x0024F0D8: mfc1        $a1, $f1
    ctx->r5 = (int32_t)ctx->f_odd[(1 - 1) * 2];
    // 0x0024F0DC: jal         0x002117DC
    // 0x0024F0E0: addiu       $a0, $s2, 0x50
    ctx->r4 = ADD32(ctx->r18, 0X50);
    func_002117DC(rdram, ctx);
        goto after_1;
    // 0x0024F0E0: addiu       $a0, $s2, 0x50
    ctx->r4 = ADD32(ctx->r18, 0X50);
    after_1:
L_0024F0E4:
    // 0x0024F0E4: lwc1        $f0, 0xA58($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0XA58);
    // 0x0024F0E8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0024F0EC: lwc1        $f1, 0x6DC8($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X6DC8);
    // 0x0024F0F0: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x0024F0F4: mul.s       $f1, $f0, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0024F0F8: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x0024F0FC: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x0024F100: nop

    // 0x0024F104: bc1f        L_0024F124
    if (!c1cs) {
        // 0x0024F108: nop
    
            goto L_0024F124;
    }
    // 0x0024F108: nop

    // 0x0024F10C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0024F110: lwc1        $f0, 0x6DCC($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6DCC);
    // 0x0024F114: mul.s       $f0, $f1, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x0024F118: lwc1        $f1, 0x10($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X10);
    // 0x0024F11C: j           L_0024F134
    // 0x0024F120: nop

        goto L_0024F134;
    // 0x0024F120: nop

L_0024F124:
    // 0x0024F124: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0024F128: lwc1        $f0, 0x6DD0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6DD0);
    // 0x0024F12C: mul.s       $f0, $f1, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x0024F130: lwc1        $f1, 0x14($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X14);
L_0024F134:
    // 0x0024F134: mul.s       $f1, $f0, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0024F138: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0024F13C: lwc1        $f0, 0x6DD4($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6DD4);
    // 0x0024F140: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x0024F144: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x0024F148: mfc1        $a1, $f1
    ctx->r5 = (int32_t)ctx->f_odd[(1 - 1) * 2];
    // 0x0024F14C: jal         0x002117DC
    // 0x0024F150: addiu       $a0, $s1, 0xAC8
    ctx->r4 = ADD32(ctx->r17, 0XAC8);
    func_002117DC(rdram, ctx);
        goto after_2;
    // 0x0024F150: addiu       $a0, $s1, 0xAC8
    ctx->r4 = ADD32(ctx->r17, 0XAC8);
    after_2:
L_0024F154:
        turok2_patch_direct_mouse_look(rdram, ctx);

    // 0x0024F154: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x0024F158: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x0024F15C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x0024F160: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0024F164: ldc1        $f21, 0x28($sp)
    CHECK_FR(ctx, 21);
    ctx->f21.u64 = LD(ctx->r29, 0X28);
    // 0x0024F168: ldc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X20);
    // 0x0024F16C: jr          $ra
    // 0x0024F170: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x0024F170: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_00269A8C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00269A8C: lw          $s3, 0x2AC($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2AC);
;}
RECOMP_FUNC void func_00228C40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00228C40: addiu       $sp, $sp, -0x10
    ctx->r29 = ADD32(ctx->r29, -0X10);
    // 0x00228C44: addu        $t0, $a0, $zero
    ctx->r8 = ADD32(ctx->r4, 0);
    // 0x00228C48: addu        $t6, $a1, $zero
    ctx->r14 = ADD32(ctx->r5, 0);
    // 0x00228C4C: addu        $t7, $a2, $zero
    ctx->r15 = ADD32(ctx->r6, 0);
    // 0x00228C50: lw          $t9, 0x20($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X20);
    // 0x00228C54: addu        $t8, $a3, $zero
    ctx->r24 = ADD32(ctx->r7, 0);
    // 0x00228C58: sw          $s0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r16;
    // 0x00228C5C: lw          $s0, 0x24($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X24);
    // 0x00228C60: sll         $a0, $a0, 24
    ctx->r4 = S32(ctx->r4 << 24);
    // 0x00228C64: sw          $s1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r17;
    // 0x00228C68: lw          $s1, 0x28($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X28);
    // 0x00228C6C: sra         $a0, $a0, 24
    ctx->r4 = S32(SIGNED(ctx->r4) >> 24);
    // 0x00228C70: sw          $s3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r19;
    // 0x00228C74: beq         $a0, $zero, L_00228FD4
    if (ctx->r4 == 0) {
        // 0x00228C78: sw          $s2, 0x8($sp)
        MEM_W(0X8, ctx->r29) = ctx->r18;
            goto L_00228FD4;
    }
    // 0x00228C78: sw          $s2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r18;
    // 0x00228C7C: bgez        $a0, L_00228C98
    if (SIGNED(ctx->r4) >= 0) {
        // 0x00228C80: addiu       $v0, $zero, 0x55
        ctx->r2 = ADD32(0, 0X55);
            goto L_00228C98;
    }
    // 0x00228C80: addiu       $v0, $zero, 0x55
    ctx->r2 = ADD32(0, 0X55);
    // 0x00228C84: addiu       $a0, $a0, 0x55
    ctx->r4 = ADD32(ctx->r4, 0X55);
    // 0x00228C88: bgez        $a0, L_00228CA4
    if (SIGNED(ctx->r4) >= 0) {
        // 0x00228C8C: sll         $v0, $a0, 1
        ctx->r2 = S32(ctx->r4 << 1);
            goto L_00228CA4;
    }
    // 0x00228C8C: sll         $v0, $a0, 1
    ctx->r2 = S32(ctx->r4 << 1);
    // 0x00228C90: j           L_00228CDC
    // 0x00228C94: addu        $t5, $zero, $zero
    ctx->r13 = ADD32(0, 0);
        goto L_00228CDC;
    // 0x00228C94: addu        $t5, $zero, $zero
    ctx->r13 = ADD32(0, 0);
L_00228C98:
    // 0x00228C98: subu        $a0, $v0, $a0
    ctx->r4 = SUB32(ctx->r2, ctx->r4);
    // 0x00228C9C: bltz        $a0, L_00228CD8
    if (SIGNED(ctx->r4) < 0) {
        // 0x00228CA0: sll         $v0, $a0, 1
        ctx->r2 = S32(ctx->r4 << 1);
            goto L_00228CD8;
    }
    // 0x00228CA0: sll         $v0, $a0, 1
    ctx->r2 = S32(ctx->r4 << 1);
L_00228CA4:
    // 0x00228CA4: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x00228CA8: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x00228CAC: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x00228CB0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x00228CB4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00228CB8: lwc1        $f1, 0x60D0($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X60D0);
    // 0x00228CBC: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x00228CC0: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00228CC4: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00228CC8: trunc.w.s   $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x00228CCC: mfc1        $t5, $f4
    ctx->r13 = (int32_t)ctx->f4.u32l;
    // 0x00228CD0: j           L_00228CE0
    // 0x00228CD4: sll         $v0, $t0, 24
    ctx->r2 = S32(ctx->r8 << 24);
        goto L_00228CE0;
    // 0x00228CD4: sll         $v0, $t0, 24
    ctx->r2 = S32(ctx->r8 << 24);
L_00228CD8:
    // 0x00228CD8: addu        $t5, $zero, $zero
    ctx->r13 = ADD32(0, 0);
L_00228CDC:
    // 0x00228CDC: sll         $v0, $t0, 24
    ctx->r2 = S32(ctx->r8 << 24);
L_00228CE0:
    // 0x00228CE0: sra         $v1, $v0, 24
    ctx->r3 = S32(SIGNED(ctx->r2) >> 24);
    // 0x00228CE4: slti        $v0, $v1, -0x55
    ctx->r2 = SIGNED(ctx->r3) < -0X55 ? 1 : 0;
    // 0x00228CE8: beql        $v0, $zero, L_00228CF8
    if (ctx->r2 == 0) {
        // 0x00228CEC: negu        $v1, $v1
        ctx->r3 = SUB32(0, ctx->r3);
            goto L_00228CF8;
    }
    goto skip_0;
    // 0x00228CEC: negu        $v1, $v1
    ctx->r3 = SUB32(0, ctx->r3);
    skip_0:
    // 0x00228CF0: j           L_00228D00
    // 0x00228CF4: addiu       $v1, $v1, 0xAA
    ctx->r3 = ADD32(ctx->r3, 0XAA);
        goto L_00228D00;
    // 0x00228CF4: addiu       $v1, $v1, 0xAA
    ctx->r3 = ADD32(ctx->r3, 0XAA);
L_00228CF8:
    // 0x00228CF8: bltz        $v1, L_00228D38
    if (SIGNED(ctx->r3) < 0) {
        // 0x00228CFC: addu        $a3, $zero, $zero
        ctx->r7 = ADD32(0, 0);
            goto L_00228D38;
    }
    // 0x00228CFC: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
L_00228D00:
    // 0x00228D00: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x00228D04: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x00228D08: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x00228D0C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x00228D10: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x00228D14: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00228D18: lwc1        $f1, 0x60D4($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X60D4);
    // 0x00228D1C: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x00228D20: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00228D24: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00228D28: trunc.w.s   $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x00228D2C: mfc1        $a3, $f4
    ctx->r7 = (int32_t)ctx->f4.u32l;
    // 0x00228D30: j           L_00228D3C
    // 0x00228D34: sll         $v0, $t0, 24
    ctx->r2 = S32(ctx->r8 << 24);
        goto L_00228D3C;
    // 0x00228D34: sll         $v0, $t0, 24
    ctx->r2 = S32(ctx->r8 << 24);
L_00228D38:
    // 0x00228D38: sll         $v0, $t0, 24
    ctx->r2 = S32(ctx->r8 << 24);
L_00228D3C:
    // 0x00228D3C: sra         $a0, $v0, 24
    ctx->r4 = S32(SIGNED(ctx->r2) >> 24);
    // 0x00228D40: slti        $v0, $a0, 0x56
    ctx->r2 = SIGNED(ctx->r4) < 0X56 ? 1 : 0;
    // 0x00228D44: bne         $v0, $zero, L_00228D64
    if (ctx->r2 != 0) {
        // 0x00228D48: addiu       $v1, $zero, 0xAA
        ctx->r3 = ADD32(0, 0XAA);
            goto L_00228D64;
    }
    // 0x00228D48: addiu       $v1, $zero, 0xAA
    ctx->r3 = ADD32(0, 0XAA);
    // 0x00228D4C: subu        $v1, $v1, $a0
    ctx->r3 = SUB32(ctx->r3, ctx->r4);
    // 0x00228D50: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x00228D54: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x00228D58: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x00228D5C: j           L_00228D78
    // 0x00228D60: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
        goto L_00228D78;
    // 0x00228D60: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
L_00228D64:
    // 0x00228D64: bltz        $a0, L_00228DA0
    if (SIGNED(ctx->r4) < 0) {
        // 0x00228D68: sll         $v0, $a0, 1
        ctx->r2 = S32(ctx->r4 << 1);
            goto L_00228DA0;
    }
    // 0x00228D68: sll         $v0, $a0, 1
    ctx->r2 = S32(ctx->r4 << 1);
    // 0x00228D6C: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x00228D70: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x00228D74: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
L_00228D78:
    // 0x00228D78: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x00228D7C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00228D80: lwc1        $f1, 0x60D8($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X60D8);
    // 0x00228D84: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x00228D88: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00228D8C: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00228D90: trunc.w.s   $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x00228D94: mfc1        $a0, $f4
    ctx->r4 = (int32_t)ctx->f4.u32l;
    // 0x00228D98: j           L_00228DA8
    // 0x00228D9C: andi        $a2, $t8, 0xFF
    ctx->r6 = ctx->r24 & 0XFF;
        goto L_00228DA8;
    // 0x00228D9C: andi        $a2, $t8, 0xFF
    ctx->r6 = ctx->r24 & 0XFF;
L_00228DA0:
    // 0x00228DA0: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x00228DA4: andi        $a2, $t8, 0xFF
    ctx->r6 = ctx->r24 & 0XFF;
L_00228DA8:
    // 0x00228DA8: mult        $a3, $a2
    result = S64(S32(ctx->r7)) * S64(S32(ctx->r6)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x00228DAC: mflo        $v0
    ctx->r2 = lo;
    // 0x00228DB0: andi        $a1, $t6, 0xFF
    ctx->r5 = ctx->r14 & 0XFF;
    // 0x00228DB4: nop

    // 0x00228DB8: mult        $t5, $a1
    result = S64(S32(ctx->r13)) * S64(S32(ctx->r5)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x00228DBC: mflo        $s3
    ctx->r19 = lo;
    // 0x00228DC0: andi        $v1, $t7, 0xFF
    ctx->r3 = ctx->r15 & 0XFF;
    // 0x00228DC4: nop

    // 0x00228DC8: mult        $a0, $v1
    result = S64(S32(ctx->r4)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x00228DCC: mflo        $t3
    ctx->r11 = lo;
    // 0x00228DD0: nop

    // 0x00228DD4: nop

    // 0x00228DD8: mult        $a3, $a1
    result = S64(S32(ctx->r7)) * S64(S32(ctx->r5)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x00228DDC: mflo        $t4
    ctx->r12 = lo;
    // 0x00228DE0: nop

    // 0x00228DE4: nop

    // 0x00228DE8: mult        $t5, $v1
    result = S64(S32(ctx->r13)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x00228DEC: mflo        $t0
    ctx->r8 = lo;
    // 0x00228DF0: nop

    // 0x00228DF4: nop

    // 0x00228DF8: mult        $a0, $a2
    result = S64(S32(ctx->r4)) * S64(S32(ctx->r6)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x00228DFC: mflo        $t1
    ctx->r9 = lo;
    // 0x00228E00: nop

    // 0x00228E04: nop

    // 0x00228E08: mult        $a3, $v1
    result = S64(S32(ctx->r7)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x00228E0C: mflo        $t2
    ctx->r10 = lo;
    // 0x00228E10: nop

    // 0x00228E14: nop

    // 0x00228E18: mult        $t5, $a2
    result = S64(S32(ctx->r13)) * S64(S32(ctx->r6)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x00228E1C: mflo        $a3
    ctx->r7 = lo;
    // 0x00228E20: addu        $v0, $v0, $s3
    ctx->r2 = ADD32(ctx->r2, ctx->r19);
    // 0x00228E24: nop

    // 0x00228E28: mult        $a0, $a1
    result = S64(S32(ctx->r4)) * S64(S32(ctx->r5)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x00228E2C: addu        $t3, $v0, $t3
    ctx->r11 = ADD32(ctx->r2, ctx->r11);
    // 0x00228E30: addu        $v0, $t4, $t0
    ctx->r2 = ADD32(ctx->r12, ctx->r8);
    // 0x00228E34: addu        $t0, $v0, $t1
    ctx->r8 = ADD32(ctx->r2, ctx->r9);
    // 0x00228E38: addu        $v0, $t2, $a3
    ctx->r2 = ADD32(ctx->r10, ctx->r7);
    // 0x00228E3C: mflo        $t5
    ctx->r13 = lo;
    // 0x00228E40: addu        $a3, $v0, $t5
    ctx->r7 = ADD32(ctx->r2, ctx->r13);
    // 0x00228E44: sltu        $v0, $a2, $v1
    ctx->r2 = ctx->r6 < ctx->r3 ? 1 : 0;
    // 0x00228E48: beq         $v0, $zero, L_00228E60
    if (ctx->r2 == 0) {
        // 0x00228E4C: slt         $v0, $v1, $a1
        ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r5) ? 1 : 0;
            goto L_00228E60;
    }
    // 0x00228E4C: slt         $v0, $v1, $a1
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x00228E50: bne         $v0, $zero, L_00228E6C
    if (ctx->r2 != 0) {
        // 0x00228E54: andi        $v0, $t6, 0xFF
        ctx->r2 = ctx->r14 & 0XFF;
            goto L_00228E6C;
    }
    // 0x00228E54: andi        $v0, $t6, 0xFF
    ctx->r2 = ctx->r14 & 0XFF;
    // 0x00228E58: j           L_00228E80
    // 0x00228E5C: andi        $a0, $t7, 0xFF
    ctx->r4 = ctx->r15 & 0XFF;
        goto L_00228E80;
    // 0x00228E5C: andi        $a0, $t7, 0xFF
    ctx->r4 = ctx->r15 & 0XFF;
L_00228E60:
    // 0x00228E60: slt         $v0, $a2, $a1
    ctx->r2 = SIGNED(ctx->r6) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x00228E64: beq         $v0, $zero, L_00228E7C
    if (ctx->r2 == 0) {
        // 0x00228E68: andi        $v0, $t6, 0xFF
        ctx->r2 = ctx->r14 & 0XFF;
            goto L_00228E7C;
    }
    // 0x00228E68: andi        $v0, $t6, 0xFF
    ctx->r2 = ctx->r14 & 0XFF;
L_00228E6C:
    // 0x00228E6C: mtc1        $v0, $f3
    ctx->f_odd[(3 - 1) * 2] = ctx->r2;
    // 0x00228E70: cvt.s.w     $f3, $f3
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    ctx->f3.fl = CVT_S_W(ctx->f_odd[(3 - 1) * 2]);
    // 0x00228E74: j           L_00228EAC
    // 0x00228E78: addu        $v1, $a3, $zero
    ctx->r3 = ADD32(ctx->r7, 0);
        goto L_00228EAC;
    // 0x00228E78: addu        $v1, $a3, $zero
    ctx->r3 = ADD32(ctx->r7, 0);
L_00228E7C:
    // 0x00228E7C: andi        $a0, $t7, 0xFF
    ctx->r4 = ctx->r15 & 0XFF;
L_00228E80:
    // 0x00228E80: andi        $v1, $t8, 0xFF
    ctx->r3 = ctx->r24 & 0XFF;
    // 0x00228E84: sltu        $v0, $v1, $a0
    ctx->r2 = ctx->r3 < ctx->r4 ? 1 : 0;
    // 0x00228E88: beq         $v0, $zero, L_00228EA0
    if (ctx->r2 == 0) {
        // 0x00228E8C: nop
    
            goto L_00228EA0;
    }
    // 0x00228E8C: nop

    // 0x00228E90: mtc1        $a0, $f3
    ctx->f_odd[(3 - 1) * 2] = ctx->r4;
    // 0x00228E94: cvt.s.w     $f3, $f3
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    ctx->f3.fl = CVT_S_W(ctx->f_odd[(3 - 1) * 2]);
    // 0x00228E98: j           L_00228EAC
    // 0x00228E9C: addu        $v1, $a3, $zero
    ctx->r3 = ADD32(ctx->r7, 0);
        goto L_00228EAC;
    // 0x00228E9C: addu        $v1, $a3, $zero
    ctx->r3 = ADD32(ctx->r7, 0);
L_00228EA0:
    // 0x00228EA0: mtc1        $v1, $f3
    ctx->f_odd[(3 - 1) * 2] = ctx->r3;
    // 0x00228EA4: cvt.s.w     $f3, $f3
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    ctx->f3.fl = CVT_S_W(ctx->f_odd[(3 - 1) * 2]);
    // 0x00228EA8: addu        $v1, $a3, $zero
    ctx->r3 = ADD32(ctx->r7, 0);
L_00228EAC:
    // 0x00228EAC: slt         $v0, $a3, $t0
    ctx->r2 = SIGNED(ctx->r7) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x00228EB0: bnel        $v0, $zero, L_00228EB8
    if (ctx->r2 != 0) {
        // 0x00228EB4: addu        $v1, $t0, $zero
        ctx->r3 = ADD32(ctx->r8, 0);
            goto L_00228EB8;
    }
    goto skip_1;
    // 0x00228EB4: addu        $v1, $t0, $zero
    ctx->r3 = ADD32(ctx->r8, 0);
    skip_1:
L_00228EB8:
    // 0x00228EB8: slt         $v0, $v1, $t3
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r11) ? 1 : 0;
    // 0x00228EBC: bnel        $v0, $zero, L_00228EC4
    if (ctx->r2 != 0) {
        // 0x00228EC0: addu        $v1, $t3, $zero
        ctx->r3 = ADD32(ctx->r11, 0);
            goto L_00228EC4;
    }
    goto skip_2;
    // 0x00228EC0: addu        $v1, $t3, $zero
    ctx->r3 = ADD32(ctx->r11, 0);
    skip_2:
L_00228EC4:
    // 0x00228EC4: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x00228EC8: mtc1        $v1, $f2
    ctx->f2.u32l = ctx->r3;
    // 0x00228ECC: cvt.s.w     $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    ctx->f2.fl = CVT_S_W(ctx->f2.u32l);
    // 0x00228ED0: c.eq.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl == ctx->f0.fl;
    // 0x00228ED4: nop

    // 0x00228ED8: bc1tl       L_00228FC8
    if (c1cs) {
        // 0x00228EDC: sb          $t6, 0x0($t9)
        MEM_B(0X0, ctx->r25) = ctx->r14;
            goto L_00228FC8;
    }
    goto skip_3;
    // 0x00228EDC: sb          $t6, 0x0($t9)
    MEM_B(0X0, ctx->r25) = ctx->r14;
    skip_3:
    // 0x00228EE0: mtc1        $t3, $f0
    ctx->f0.u32l = ctx->r11;
    // 0x00228EE4: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00228EE8: mul.s       $f0, $f0, $f3
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f3.fl);
    // 0x00228EEC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00228EF0: lwc1        $f1, 0x60DC($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X60DC);
    // 0x00228EF4: div.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = DIV_S(ctx->f0.fl, ctx->f2.fl);
    // 0x00228EF8: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x00228EFC: nop

    // 0x00228F00: bc1tl       L_00228F18
    if (c1cs) {
        // 0x00228F04: sub.s       $f0, $f0, $f1
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
            goto L_00228F18;
    }
    goto skip_4;
    // 0x00228F04: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    skip_4:
    // 0x00228F08: trunc.w.s   $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x00228F0C: mfc1        $v1, $f4
    ctx->r3 = (int32_t)ctx->f4.u32l;
    // 0x00228F10: j           L_00228F28
    // 0x00228F14: nop

        goto L_00228F28;
    // 0x00228F14: nop

L_00228F18:
    // 0x00228F18: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x00228F1C: trunc.w.s   $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x00228F20: mfc1        $v1, $f4
    ctx->r3 = (int32_t)ctx->f4.u32l;
    // 0x00228F24: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
L_00228F28:
    // 0x00228F28: mtc1        $t0, $f0
    ctx->f0.u32l = ctx->r8;
    // 0x00228F2C: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00228F30: mul.s       $f0, $f0, $f3
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f3.fl);
    // 0x00228F34: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00228F38: lwc1        $f1, 0x60E0($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X60E0);
    // 0x00228F3C: div.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = DIV_S(ctx->f0.fl, ctx->f2.fl);
    // 0x00228F40: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x00228F44: nop

    // 0x00228F48: bc1t        L_00228F60
    if (c1cs) {
        // 0x00228F4C: sb          $v1, 0x0($t9)
        MEM_B(0X0, ctx->r25) = ctx->r3;
            goto L_00228F60;
    }
    // 0x00228F4C: sb          $v1, 0x0($t9)
    MEM_B(0X0, ctx->r25) = ctx->r3;
    // 0x00228F50: trunc.w.s   $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x00228F54: mfc1        $v1, $f4
    ctx->r3 = (int32_t)ctx->f4.u32l;
    // 0x00228F58: j           L_00228F74
    // 0x00228F5C: nop

        goto L_00228F74;
    // 0x00228F5C: nop

L_00228F60:
    // 0x00228F60: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x00228F64: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x00228F68: trunc.w.s   $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x00228F6C: mfc1        $v1, $f4
    ctx->r3 = (int32_t)ctx->f4.u32l;
    // 0x00228F70: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
L_00228F74:
    // 0x00228F74: mtc1        $a3, $f0
    ctx->f0.u32l = ctx->r7;
    // 0x00228F78: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00228F7C: mul.s       $f0, $f0, $f3
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f3.fl);
    // 0x00228F80: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00228F84: lwc1        $f1, 0x60E4($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X60E4);
    // 0x00228F88: div.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = DIV_S(ctx->f0.fl, ctx->f2.fl);
    // 0x00228F8C: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x00228F90: nop

    // 0x00228F94: bc1t        L_00228FAC
    if (c1cs) {
        // 0x00228F98: sb          $v1, 0x0($s0)
        MEM_B(0X0, ctx->r16) = ctx->r3;
            goto L_00228FAC;
    }
    // 0x00228F98: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    // 0x00228F9C: trunc.w.s   $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x00228FA0: mfc1        $v1, $f4
    ctx->r3 = (int32_t)ctx->f4.u32l;
    // 0x00228FA4: j           L_00228FE0
    // 0x00228FA8: sb          $v1, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r3;
        goto L_00228FE0;
    // 0x00228FA8: sb          $v1, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r3;
L_00228FAC:
    // 0x00228FAC: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x00228FB0: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x00228FB4: trunc.w.s   $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x00228FB8: mfc1        $v1, $f4
    ctx->r3 = (int32_t)ctx->f4.u32l;
    // 0x00228FBC: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x00228FC0: j           L_00228FE0
    // 0x00228FC4: sb          $v1, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r3;
        goto L_00228FE0;
    // 0x00228FC4: sb          $v1, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r3;
L_00228FC8:
    // 0x00228FC8: sb          $t7, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r15;
    // 0x00228FCC: j           L_00228FE0
    // 0x00228FD0: sb          $t8, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r24;
        goto L_00228FE0;
    // 0x00228FD0: sb          $t8, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r24;
L_00228FD4:
    // 0x00228FD4: sb          $a1, 0x0($t9)
    MEM_B(0X0, ctx->r25) = ctx->r5;
    // 0x00228FD8: sb          $a2, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r6;
    // 0x00228FDC: sb          $a3, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r7;
L_00228FE0:
    // 0x00228FE0: lw          $s3, 0xC($sp)
    ctx->r19 = MEM_W(ctx->r29, 0XC);
    // 0x00228FE4: lw          $s2, 0x8($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X8);
    // 0x00228FE8: lw          $s1, 0x4($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X4);
    // 0x00228FEC: lw          $s0, 0x0($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X0);
    // 0x00228FF0: jr          $ra
    // 0x00228FF4: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
    return;
    // 0x00228FF4: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
;}
RECOMP_FUNC void func_00445CC0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00445CC0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x00445CC4: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x00445CC8: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x00445CCC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x00445CD0: lui         $s0, 0x800F
    ctx->r16 = S32(0X800F << 16);
    // 0x00445CD4: addiu       $s0, $s0, 0x7078
    ctx->r16 = ADD32(ctx->r16, 0X7078);
    // 0x00445CD8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00445CDC: addiu       $a1, $zero, 0x454
    ctx->r5 = ADD32(0, 0X454);
    // 0x00445CE0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x00445CE4: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x00445CE8: addiu       $v0, $s2, 0x8
    ctx->r2 = ADD32(ctx->r18, 0X8);
    // 0x00445CEC: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x00445CF0: addiu       $s1, $zero, 0x4
    ctx->r17 = ADD32(0, 0X4);
    // 0x00445CF4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x00445CF8: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x00445CFC: jal         0x00225F6C
    // 0x00445D00: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    func_00225F6C(rdram, ctx);
        goto after_0;
    // 0x00445D00: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    after_0:
    // 0x00445D04: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00445D08: addiu       $a1, $zero, 0x455
    ctx->r5 = ADD32(0, 0X455);
    // 0x00445D0C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x00445D10: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x00445D14: sw          $v0, 0x4($s2)
    MEM_W(0X4, ctx->r18) = ctx->r2;
    // 0x00445D18: addiu       $v0, $s2, 0x1C
    ctx->r2 = ADD32(ctx->r18, 0X1C);
    // 0x00445D1C: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x00445D20: jal         0x00225F6C
    // 0x00445D24: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    func_00225F6C(rdram, ctx);
        goto after_1;
    // 0x00445D24: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    after_1:
    // 0x00445D28: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00445D2C: addiu       $a1, $zero, 0x456
    ctx->r5 = ADD32(0, 0X456);
    // 0x00445D30: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x00445D34: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x00445D38: sw          $v0, 0x18($s2)
    MEM_W(0X18, ctx->r18) = ctx->r2;
    // 0x00445D3C: addiu       $v0, $s2, 0x30
    ctx->r2 = ADD32(ctx->r18, 0X30);
    // 0x00445D40: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x00445D44: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x00445D48: jal         0x00225F6C
    // 0x00445D4C: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    func_00225F6C(rdram, ctx);
        goto after_2;
    // 0x00445D4C: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    after_2:
    // 0x00445D50: lw          $v1, 0x0($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X0);
    // 0x00445D54: sw          $v0, 0x2C($s2)
    MEM_W(0X2C, ctx->r18) = ctx->r2;
    // 0x00445D58: addiu       $v0, $zero, 0x3200
    ctx->r2 = ADD32(0, 0X3200);
    // 0x00445D5C: sw          $zero, 0x4EC($s2)
    MEM_W(0X4EC, ctx->r18) = 0;
    // 0x00445D60: sw          $v0, 0x148($v1)
    MEM_W(0X148, ctx->r3) = ctx->r2;
    // 0x00445D64: sw          $v0, 0x144($v1)
    MEM_W(0X144, ctx->r3) = ctx->r2;
    // 0x00445D68: lw          $v0, 0x4EC($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X4EC);
    // 0x00445D6C: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x00445D70: sw          $v0, 0x254($v1)
    MEM_W(0X254, ctx->r3) = ctx->r2;
    // 0x00445D74: lw          $v1, 0x4($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X4);
    // 0x00445D78: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x00445D7C: blez        $v1, L_00445DC0
    if (SIGNED(ctx->r3) <= 0) {
        // 0x00445D80: sw          $v0, 0x4EC($s2)
        MEM_W(0X4EC, ctx->r18) = ctx->r2;
            goto L_00445DC0;
    }
    // 0x00445D80: sw          $v0, 0x4EC($s2)
    MEM_W(0X4EC, ctx->r18) = ctx->r2;
    // 0x00445D84: addiu       $a1, $zero, 0x6400
    ctx->r5 = ADD32(0, 0X6400);
    // 0x00445D88: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
L_00445D8C:
    // 0x00445D8C: lw          $v1, 0x8($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X8);
    // 0x00445D90: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x00445D94: sw          $zero, 0x144($v1)
    MEM_W(0X144, ctx->r3) = 0;
    // 0x00445D98: sw          $a1, 0x148($v1)
    MEM_W(0X148, ctx->r3) = ctx->r5;
    // 0x00445D9C: sw          $s0, 0x250($v1)
    MEM_W(0X250, ctx->r3) = ctx->r16;
    // 0x00445DA0: lw          $v0, 0x4EC($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X4EC);
    // 0x00445DA4: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x00445DA8: sw          $v0, 0x254($v1)
    MEM_W(0X254, ctx->r3) = ctx->r2;
    // 0x00445DAC: lw          $v1, 0x4($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X4);
    // 0x00445DB0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x00445DB4: slt         $v1, $s0, $v1
    ctx->r3 = SIGNED(ctx->r16) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x00445DB8: bne         $v1, $zero, L_00445D8C
    if (ctx->r3 != 0) {
        // 0x00445DBC: sw          $v0, 0x4EC($s2)
        MEM_W(0X4EC, ctx->r18) = ctx->r2;
            goto L_00445D8C;
    }
    // 0x00445DBC: sw          $v0, 0x4EC($s2)
    MEM_W(0X4EC, ctx->r18) = ctx->r2;
L_00445DC0:
    // 0x00445DC0: lw          $v0, 0x18($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X18);
    // 0x00445DC4: blez        $v0, L_00445E08
    if (SIGNED(ctx->r2) <= 0) {
        // 0x00445DC8: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_00445E08;
    }
    // 0x00445DC8: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x00445DCC: addiu       $a1, $zero, 0x5000
    ctx->r5 = ADD32(0, 0X5000);
    // 0x00445DD0: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
L_00445DD4:
    // 0x00445DD4: lw          $v1, 0x1C($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X1C);
    // 0x00445DD8: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x00445DDC: sw          $zero, 0x144($v1)
    MEM_W(0X144, ctx->r3) = 0;
    // 0x00445DE0: sw          $a1, 0x148($v1)
    MEM_W(0X148, ctx->r3) = ctx->r5;
    // 0x00445DE4: sw          $s0, 0x250($v1)
    MEM_W(0X250, ctx->r3) = ctx->r16;
    // 0x00445DE8: lw          $v0, 0x4EC($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X4EC);
    // 0x00445DEC: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x00445DF0: sw          $v0, 0x254($v1)
    MEM_W(0X254, ctx->r3) = ctx->r2;
    // 0x00445DF4: lw          $v1, 0x18($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X18);
    // 0x00445DF8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x00445DFC: slt         $v1, $s0, $v1
    ctx->r3 = SIGNED(ctx->r16) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x00445E00: bne         $v1, $zero, L_00445DD4
    if (ctx->r3 != 0) {
        // 0x00445E04: sw          $v0, 0x4EC($s2)
        MEM_W(0X4EC, ctx->r18) = ctx->r2;
            goto L_00445DD4;
    }
    // 0x00445E04: sw          $v0, 0x4EC($s2)
    MEM_W(0X4EC, ctx->r18) = ctx->r2;
L_00445E08:
    // 0x00445E08: lw          $v0, 0x2C($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X2C);
    // 0x00445E0C: blez        $v0, L_00445E50
    if (SIGNED(ctx->r2) <= 0) {
        // 0x00445E10: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_00445E50;
    }
    // 0x00445E10: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x00445E14: addiu       $a1, $zero, 0x6400
    ctx->r5 = ADD32(0, 0X6400);
    // 0x00445E18: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
L_00445E1C:
    // 0x00445E1C: lw          $v1, 0x30($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X30);
    // 0x00445E20: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x00445E24: sw          $zero, 0x144($v1)
    MEM_W(0X144, ctx->r3) = 0;
    // 0x00445E28: sw          $a1, 0x148($v1)
    MEM_W(0X148, ctx->r3) = ctx->r5;
    // 0x00445E2C: sw          $s0, 0x250($v1)
    MEM_W(0X250, ctx->r3) = ctx->r16;
    // 0x00445E30: lw          $v0, 0x4EC($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X4EC);
    // 0x00445E34: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x00445E38: sw          $v0, 0x254($v1)
    MEM_W(0X254, ctx->r3) = ctx->r2;
    // 0x00445E3C: lw          $v1, 0x2C($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X2C);
    // 0x00445E40: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x00445E44: slt         $v1, $s0, $v1
    ctx->r3 = SIGNED(ctx->r16) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x00445E48: bne         $v1, $zero, L_00445E1C
    if (ctx->r3 != 0) {
        // 0x00445E4C: sw          $v0, 0x4EC($s2)
        MEM_W(0X4EC, ctx->r18) = ctx->r2;
            goto L_00445E1C;
    }
    // 0x00445E4C: sw          $v0, 0x4EC($s2)
    MEM_W(0X4EC, ctx->r18) = ctx->r2;
L_00445E50:
    // 0x00445E50: lw          $v0, 0x4EC($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X4EC);
    // 0x00445E54: blez        $v0, L_00445E80
    if (SIGNED(ctx->r2) <= 0) {
        // 0x00445E58: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_00445E80;
    }
    // 0x00445E58: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x00445E5C: addiu       $s1, $zero, 0x3C
    ctx->r17 = ADD32(0, 0X3C);
L_00445E60:
    // 0x00445E60: addu        $a0, $s2, $s1
    ctx->r4 = ADD32(ctx->r18, ctx->r17);
    // 0x00445E64: jal         0x002362E4
    // 0x00445E68: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_002362E4(rdram, ctx);
        goto after_3;
    // 0x00445E68: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_3:
    // 0x00445E6C: lw          $v0, 0x4EC($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X4EC);
    // 0x00445E70: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x00445E74: slt         $v0, $s0, $v0
    ctx->r2 = SIGNED(ctx->r16) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x00445E78: bne         $v0, $zero, L_00445E60
    if (ctx->r2 != 0) {
        // 0x00445E7C: addiu       $s1, $s1, 0x64
        ctx->r17 = ADD32(ctx->r17, 0X64);
            goto L_00445E60;
    }
    // 0x00445E7C: addiu       $s1, $s1, 0x64
    ctx->r17 = ADD32(ctx->r17, 0X64);
L_00445E80:
    // 0x00445E80: lui         $s0, 0x800F
    ctx->r16 = S32(0X800F << 16);
    // 0x00445E84: addiu       $s0, $s0, 0x7078
    ctx->r16 = ADD32(ctx->r16, 0X7078);
    // 0x00445E88: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00445E8C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x00445E90: jal         0x00225EBC
    // 0x00445E94: addiu       $a2, $zero, 0x1CE9
    ctx->r6 = ADD32(0, 0X1CE9);
    func_00225EBC(rdram, ctx);
        goto after_4;
    // 0x00445E94: addiu       $a2, $zero, 0x1CE9
    ctx->r6 = ADD32(0, 0X1CE9);
    after_4:
    // 0x00445E98: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00445E9C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x00445EA0: addiu       $a2, $zero, 0x1CEA
    ctx->r6 = ADD32(0, 0X1CEA);
    // 0x00445EA4: jal         0x00225EBC
    // 0x00445EA8: sw          $v0, 0x4F0($s2)
    MEM_W(0X4F0, ctx->r18) = ctx->r2;
    func_00225EBC(rdram, ctx);
        goto after_5;
    // 0x00445EA8: sw          $v0, 0x4F0($s2)
    MEM_W(0X4F0, ctx->r18) = ctx->r2;
    after_5:
    // 0x00445EAC: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x00445EB0: addiu       $a0, $a0, 0xF0
    ctx->r4 = ADD32(ctx->r4, 0XF0);
    // 0x00445EB4: lw          $a1, 0x0($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X0);
    // 0x00445EB8: lui         $a2, 0x800C
    ctx->r6 = S32(0X800C << 16);
    // 0x00445EBC: addiu       $a2, $a2, 0x8D4
    ctx->r6 = ADD32(ctx->r6, 0X8D4);
    // 0x00445EC0: sw          $v0, 0x4F4($s2)
    MEM_W(0X4F4, ctx->r18) = ctx->r2;
    // 0x00445EC4: sw          $zero, 0x500($s2)
    MEM_W(0X500, ctx->r18) = 0;
    // 0x00445EC8: sw          $zero, 0x504($s2)
    MEM_W(0X504, ctx->r18) = 0;
    // 0x00445ECC: sw          $zero, 0x508($s2)
    MEM_W(0X508, ctx->r18) = 0;
    // 0x00445ED0: sw          $zero, 0x50C($s2)
    MEM_W(0X50C, ctx->r18) = 0;
    // 0x00445ED4: sw          $zero, 0x510($s2)
    MEM_W(0X510, ctx->r18) = 0;
    // 0x00445ED8: jal         0x0027AD24
    // 0x00445EDC: sw          $zero, 0x514($s2)
    MEM_W(0X514, ctx->r18) = 0;
    func_0027AD24(rdram, ctx);
        goto after_6;
    // 0x00445EDC: sw          $zero, 0x514($s2)
    MEM_W(0X514, ctx->r18) = 0;
    after_6:
    // 0x00445EE0: jal         0x00225D0C
    // 0x00445EE4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00225D0C(rdram, ctx);
        goto after_7;
    // 0x00445EE4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_7:
    // 0x00445EE8: lw          $v1, 0x4F8($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X4F8);
    // 0x00445EEC: addiu       $v0, $v1, 0xC
    ctx->r2 = ADD32(ctx->r3, 0XC);
    // 0x00445EF0: sw          $v0, 0x4F8($s2)
    MEM_W(0X4F8, ctx->r18) = ctx->r2;
    // 0x00445EF4: lw          $a1, 0xC($v1)
    ctx->r5 = MEM_W(ctx->r3, 0XC);
    // 0x00445EF8: lw          $v0, 0x4($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X4);
    // 0x00445EFC: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
    // 0x00445F00: sw          $zero, 0x518($s2)
    MEM_W(0X518, ctx->r18) = 0;
    // 0x00445F04: sw          $zero, 0x530($s2)
    MEM_W(0X530, ctx->r18) = 0;
    // 0x00445F08: blez        $v0, L_00445F30
    if (SIGNED(ctx->r2) <= 0) {
        // 0x00445F0C: sw          $zero, 0x548($s2)
        MEM_W(0X548, ctx->r18) = 0;
            goto L_00445F30;
    }
    // 0x00445F0C: sw          $zero, 0x548($s2)
    MEM_W(0X548, ctx->r18) = 0;
    // 0x00445F10: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
L_00445F14:
    // 0x00445F14: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x00445F18: sw          $zero, 0x24C($v0)
    MEM_W(0X24C, ctx->r2) = 0;
    // 0x00445F1C: lw          $v0, 0x4($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X4);
    // 0x00445F20: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x00445F24: slt         $v0, $v1, $v0
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x00445F28: bne         $v0, $zero, L_00445F14
    if (ctx->r2 != 0) {
        // 0x00445F2C: addiu       $a0, $a0, 0x4
        ctx->r4 = ADD32(ctx->r4, 0X4);
            goto L_00445F14;
    }
    // 0x00445F2C: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
L_00445F30:
    // 0x00445F30: lw          $v0, 0x18($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X18);
    // 0x00445F34: blez        $v0, L_00445F5C
    if (SIGNED(ctx->r2) <= 0) {
        // 0x00445F38: addu        $v1, $zero, $zero
        ctx->r3 = ADD32(0, 0);
            goto L_00445F5C;
    }
    // 0x00445F38: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
    // 0x00445F3C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
L_00445F40:
    // 0x00445F40: lw          $v0, 0x1C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X1C);
    // 0x00445F44: sw          $zero, 0x24C($v0)
    MEM_W(0X24C, ctx->r2) = 0;
    // 0x00445F48: lw          $v0, 0x18($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X18);
    // 0x00445F4C: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x00445F50: slt         $v0, $v1, $v0
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x00445F54: bne         $v0, $zero, L_00445F40
    if (ctx->r2 != 0) {
        // 0x00445F58: addiu       $a0, $a0, 0x4
        ctx->r4 = ADD32(ctx->r4, 0X4);
            goto L_00445F40;
    }
    // 0x00445F58: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
L_00445F5C:
    // 0x00445F5C: lw          $v0, 0x2C($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X2C);
    // 0x00445F60: blez        $v0, L_00445F88
    if (SIGNED(ctx->r2) <= 0) {
        // 0x00445F64: addu        $v1, $zero, $zero
        ctx->r3 = ADD32(0, 0);
            goto L_00445F88;
    }
    // 0x00445F64: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
    // 0x00445F68: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
L_00445F6C:
    // 0x00445F6C: lw          $v0, 0x30($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X30);
    // 0x00445F70: sw          $zero, 0x24C($v0)
    MEM_W(0X24C, ctx->r2) = 0;
    // 0x00445F74: lw          $v0, 0x2C($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X2C);
    // 0x00445F78: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x00445F7C: slt         $v0, $v1, $v0
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x00445F80: bne         $v0, $zero, L_00445F6C
    if (ctx->r2 != 0) {
        // 0x00445F84: addiu       $a0, $a0, 0x4
        ctx->r4 = ADD32(ctx->r4, 0X4);
            goto L_00445F6C;
    }
    // 0x00445F84: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
L_00445F88:
    // 0x00445F88: sll         $v0, $a1, 3
    ctx->r2 = S32(ctx->r5 << 3);
    // 0x00445F8C: sw          $a1, 0x4FC($s2)
    MEM_W(0X4FC, ctx->r18) = ctx->r5;
    // 0x00445F90: lui         $at, 0x43
    ctx->r1 = S32(0X43 << 16);
    // 0x00445F94: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x00445F98: lw          $v0, 0x232C($at)
    ctx->r2 = MEM_W(ctx->r1, 0X232C);
    // 0x00445F9C: beq         $v0, $zero, L_00445FAC
    if (ctx->r2 == 0) {
        // 0x00445FA0: nop
    
            goto L_00445FAC;
    }
    // 0x00445FA0: nop

    // 0x00445FA4: jalr        $v0
    // 0x00445FA8: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_8;
    // 0x00445FA8: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_8:
L_00445FAC:
    // 0x00445FAC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x00445FB0: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x00445FB4: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x00445FB8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x00445FBC: jr          $ra
    // 0x00445FC0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x00445FC0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_0041ABAC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041ABAC: lw          $v0, -0x4($a2)
    ctx->r2 = MEM_W(ctx->r6, -0X4);
    // 0x0041ABB0: addiu       $a1, $zero, 0x16
    ctx->r5 = ADD32(0, 0X16);
    // 0x0041ABB4: slt         $v0, $v0, $a1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x0041ABB8: beq         $v0, $zero, L_0041ABF0
    if (ctx->r2 == 0) {
        // 0x0041ABBC: addiu       $a2, $a2, -0x4
        ctx->r6 = ADD32(ctx->r6, -0X4);
            goto L_0041ABF0;
    }
    // 0x0041ABBC: addiu       $a2, $a2, -0x4
    ctx->r6 = ADD32(ctx->r6, -0X4);
    // 0x0041ABC0: addiu       $v0, $a1, -0x1
    ctx->r2 = ADD32(ctx->r5, -0X1);
L_0041ABC4:
    // 0x0041ABC4: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0041ABC8: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x0041ABCC: lbu         $v1, 0x1F8C($at)
    ctx->r3 = MEM_BU(ctx->r1, 0X1F8C);
    // 0x0041ABD0: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0041ABD4: addu        $at, $at, $a1
    ctx->r1 = ADD32(ctx->r1, ctx->r5);
    // 0x0041ABD8: sb          $v1, 0x1F8C($at)
    MEM_B(0X1F8C, ctx->r1) = ctx->r3;
    // 0x0041ABDC: lw          $v1, 0x0($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X0);
    // 0x0041ABE0: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x0041ABE4: slt         $v1, $v1, $a1
    ctx->r3 = SIGNED(ctx->r3) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x0041ABE8: bnel        $v1, $zero, L_0041ABC4
    if (ctx->r3 != 0) {
        // 0x0041ABEC: addiu       $v0, $a1, -0x1
        ctx->r2 = ADD32(ctx->r5, -0X1);
            goto L_0041ABC4;
    }
    goto skip_0;
    // 0x0041ABEC: addiu       $v0, $a1, -0x1
    ctx->r2 = ADD32(ctx->r5, -0X1);
    skip_0:
L_0041ABF0:
    // 0x0041ABF0: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x0041ABF4: addiu       $a1, $a1, 0x1F80
    ctx->r5 = ADD32(ctx->r5, 0X1F80);
    // 0x0041ABF8: lw          $v0, 0x14($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X14);
    // 0x0041ABFC: lw          $a0, 0x0($a1)
    ctx->r4 = MEM_W(ctx->r5, 0X0);
    // 0x0041AC00: lbu         $v1, 0x0($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X0);
    // 0x0041AC04: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0041AC08: addu        $at, $at, $a0
    ctx->r1 = ADD32(ctx->r1, ctx->r4);
    // 0x0041AC0C: sb          $v1, 0x1F8C($at)
    MEM_B(0X1F8C, ctx->r1) = ctx->r3;
    // 0x0041AC10: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x0041AC14: lw          $a0, 0x8($a1)
    ctx->r4 = MEM_W(ctx->r5, 0X8);
    // 0x0041AC18: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x0041AC1C: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x0041AC20: sw          $v1, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r3;
    // 0x0041AC24: sw          $a0, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->r4;
    // 0x0041AC28: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0041AC2C: addu        $at, $at, $a0
    ctx->r1 = ADD32(ctx->r1, ctx->r4);
    // 0x0041AC30: sb          $zero, 0x1F8C($at)
    MEM_B(0X1F8C, ctx->r1) = 0;
    // 0x0041AC34: jr          $ra
    // 0x0041AC38: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x0041AC38: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void func_0023C7E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0023C7E8: addu        $t1, $zero, $zero
    ctx->r9 = ADD32(0, 0);
    // 0x0023C7EC: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x0023C7F0: addu        $a3, $t1, $zero
    ctx->r7 = ADD32(ctx->r9, 0);
    // 0x0023C7F4: mtc1        $a1, $f6
    ctx->f6.u32l = ctx->r5;
    // 0x0023C7F8: mtc1        $a2, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r6;
    // 0x0023C7FC: lwc1        $f5, 0x38($a0)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r4, 0X38);
    // 0x0023C800: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
L_0023C804:
    // 0x0023C804: c.lt.s      $f4, $f5
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 5);
    c1cs = ctx->f4.fl < ctx->f5.fl;
    // 0x0023C808: nop

    // 0x0023C80C: bc1f        L_0023C82C
    if (!c1cs) {
        // 0x0023C810: addu        $a2, $a0, $a3
        ctx->r6 = ADD32(ctx->r4, ctx->r7);
            goto L_0023C82C;
    }
    // 0x0023C810: addu        $a2, $a0, $a3
    ctx->r6 = ADD32(ctx->r4, ctx->r7);
    // 0x0023C814: andi        $v1, $t0, 0x3
    ctx->r3 = ctx->r8 & 0X3;
    // 0x0023C818: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x0023C81C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x0023C820: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x0023C824: j           L_0023C844
    // 0x0023C828: addu        $a1, $a0, $v0
    ctx->r5 = ADD32(ctx->r4, ctx->r2);
        goto L_0023C844;
    // 0x0023C828: addu        $a1, $a0, $v0
    ctx->r5 = ADD32(ctx->r4, ctx->r2);
L_0023C82C:
    // 0x0023C82C: addu        $a1, $a0, $a3
    ctx->r5 = ADD32(ctx->r4, ctx->r7);
    // 0x0023C830: andi        $v1, $t0, 0x3
    ctx->r3 = ctx->r8 & 0X3;
    // 0x0023C834: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x0023C838: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x0023C83C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x0023C840: addu        $a2, $a0, $v0
    ctx->r6 = ADD32(ctx->r4, ctx->r2);
L_0023C844:
    // 0x0023C844: lwc1        $f2, 0x4($a2)
    ctx->f2.u32l = MEM_W(ctx->r6, 0X4);
    // 0x0023C848: lwc1        $f3, 0x4($a1)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r5, 0X4);
    // 0x0023C84C: sub.s       $f2, $f2, $f3
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f2.fl = ctx->f2.fl - ctx->f3.fl;
    // 0x0023C850: lwc1        $f1, 0x0($a1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r5, 0X0);
    // 0x0023C854: sub.s       $f0, $f6, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f6.fl - ctx->f1.fl;
    // 0x0023C858: mul.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x0023C85C: sub.s       $f3, $f7, $f3
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f7.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f3.fl = ctx->f7.fl - ctx->f3.fl;
    // 0x0023C860: lwc1        $f0, 0x0($a2)
    ctx->f0.u32l = MEM_W(ctx->r6, 0X0);
    // 0x0023C864: sub.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl - ctx->f0.fl;
    // 0x0023C868: mul.s       $f1, $f1, $f3
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f3.fl);
    // 0x0023C86C: add.s       $f2, $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f1.fl;
    // 0x0023C870: c.lt.s      $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f2.fl < ctx->f4.fl;
    // 0x0023C874: nop

    // 0x0023C878: bc1f        L_0023C888
    if (!c1cs) {
        // 0x0023C87C: addiu       $t0, $t0, 0x1
        ctx->r8 = ADD32(ctx->r8, 0X1);
            goto L_0023C888;
    }
    // 0x0023C87C: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    // 0x0023C880: jr          $ra
    // 0x0023C884: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x0023C884: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_0023C888:
    // 0x0023C888: addiu       $t1, $t1, 0x1
    ctx->r9 = ADD32(ctx->r9, 0X1);
    // 0x0023C88C: slti        $v0, $t1, 0x4
    ctx->r2 = SIGNED(ctx->r9) < 0X4 ? 1 : 0;
    // 0x0023C890: bne         $v0, $zero, L_0023C804
    if (ctx->r2 != 0) {
        // 0x0023C894: addiu       $a3, $a3, 0xC
        ctx->r7 = ADD32(ctx->r7, 0XC);
            goto L_0023C804;
    }
    // 0x0023C894: addiu       $a3, $a3, 0xC
    ctx->r7 = ADD32(ctx->r7, 0XC);
    // 0x0023C898: jr          $ra
    // 0x0023C89C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x0023C89C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
;}
RECOMP_FUNC void func_00259C4C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00259C4C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x00259C50: sdc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X20, ctx->r29);
    // 0x00259C54: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00259C58: lwc1        $f20, 0x7350($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X7350);
    // 0x00259C5C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00259C60: lwc1        $f14, 0x7354($at)
    ctx->f14.u32l = MEM_W(ctx->r1, 0X7354);
    // 0x00259C64: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00259C68: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x00259C6C: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x00259C70: addu        $s2, $a1, $zero
    ctx->r18 = ADD32(ctx->r5, 0);
    // 0x00259C74: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x00259C78: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00259C7C: lw          $s0, 0x1A8($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X1A8);
    // 0x00259C80: jal         0x002119FC
    // 0x00259C84: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    func_002119FC(rdram, ctx);
        goto after_0;
    // 0x00259C84: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    after_0:
    // 0x00259C88: lw          $v0, 0xA50($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XA50);
    // 0x00259C8C: swc1        $f0, 0x168($v0)
    MEM_W(0X168, ctx->r2) = ctx->f0.u32l;
    // 0x00259C90: lw          $v0, 0xA64($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XA64);
    // 0x00259C94: andi        $v0, $v0, 0x2000
    ctx->r2 = ctx->r2 & 0X2000;
    // 0x00259C98: bne         $v0, $zero, L_00259D1C
    if (ctx->r2 != 0) {
        // 0x00259C9C: nop
    
            goto L_00259D1C;
    }
    // 0x00259C9C: nop

    // 0x00259CA0: lwc1        $f0, 0x40($s2)
    ctx->f0.u32l = MEM_W(ctx->r18, 0X40);
    // 0x00259CA4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00259CA8: lwc1        $f1, 0x7358($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X7358);
    // 0x00259CAC: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00259CB0: add.s       $f0, $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f20.fl;
    // 0x00259CB4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00259CB8: lwc1        $f2, 0x735C($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X735C);
    // 0x00259CBC: mov.s       $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    ctx->f1.fl = ctx->f0.fl;
    // 0x00259CC0: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x00259CC4: nop

    // 0x00259CC8: bc1tl       L_00259CD0
    if (c1cs) {
        // 0x00259CCC: mov.s       $f1, $f2
        CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    ctx->f1.fl = ctx->f2.fl;
            goto L_00259CD0;
    }
    goto skip_0;
    // 0x00259CCC: mov.s       $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    ctx->f1.fl = ctx->f2.fl;
    skip_0:
L_00259CD0:
    // 0x00259CD0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00259CD4: lwc1        $f0, 0x7360($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X7360);
    // 0x00259CD8: mul.s       $f0, $f1, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x00259CDC: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x00259CE0: nop

    // 0x00259CE4: bc1f        L_00259CF4
    if (!c1cs) {
        // 0x00259CE8: swc1        $f1, 0x1294($s0)
        MEM_W(0X1294, ctx->r16) = ctx->f_odd[(1 - 1) * 2];
            goto L_00259CF4;
    }
    // 0x00259CE8: swc1        $f1, 0x1294($s0)
    MEM_W(0X1294, ctx->r16) = ctx->f_odd[(1 - 1) * 2];
    // 0x00259CEC: j           L_00259CFC
    // 0x00259CF0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_00259CFC;
    // 0x00259CF0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_00259CF4:
    // 0x00259CF4: trunc.w.s   $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(3 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x00259CF8: mfc1        $v0, $f3
    ctx->r2 = (int32_t)ctx->f_odd[(3 - 1) * 2];
L_00259CFC:
    // 0x00259CFC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x00259D00: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x00259D04: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00259D08: sh          $v0, -0x162E($at)
    MEM_H(-0X162E, ctx->r1) = ctx->r2;
    // 0x00259D0C: jal         0x00243414
    // 0x00259D10: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    func_00243414(rdram, ctx);
        goto after_1;
    // 0x00259D10: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    after_1:
    // 0x00259D14: lw          $v0, 0xA50($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XA50);
    // 0x00259D18: sw          $zero, 0x168($v0)
    MEM_W(0X168, ctx->r2) = 0;
L_00259D1C:
    // 0x00259D1C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x00259D20: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x00259D24: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00259D28: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00259D2C: ldc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X20);
    // 0x00259D30: jr          $ra
    // 0x00259D34: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x00259D34: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
