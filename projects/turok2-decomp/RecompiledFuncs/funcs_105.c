#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void entry_0041F3E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041F3E0: addiu       $v0, $sp, 0x4C
    ctx->r2 = ADD32(ctx->r29, 0X4C);
    // 0x0041F3E4: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x0041F3E8: addiu       $v0, $sp, 0x28
    ctx->r2 = ADD32(ctx->r29, 0X28);
    // 0x0041F3EC: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x0041F3F0: addiu       $v0, $sp, 0x30
    ctx->r2 = ADD32(ctx->r29, 0X30);
    // 0x0041F3F4: jal         0x00425E74
    // 0x0041F3F8: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    func_00425E74(rdram, ctx);
        goto after_0;
    // 0x0041F3F8: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    after_0:
    // 0x0041F3FC: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x0041F400: bne         $s1, $zero, L_0041F428
    if (ctx->r17 != 0) {
        // 0x0041F404: nop
    
            goto L_0041F428;
    }
    // 0x0041F404: nop

    // 0x0041F408: lw          $v0, 0x48($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X48);
    // 0x0041F40C: bne         $v0, $zero, L_0041F428
    if (ctx->r2 != 0) {
        // 0x0041F410: addiu       $v0, $zero, 0x14
        ctx->r2 = ADD32(0, 0X14);
            goto L_0041F428;
    }
    // 0x0041F410: addiu       $v0, $zero, 0x14
    ctx->r2 = ADD32(0, 0X14);
    // 0x0041F414: sh          $v0, 0x0($s6)
    MEM_H(0X0, ctx->r22) = ctx->r2;
    // 0x0041F418: jal         0x0041DA28
    // 0x0041F41C: addu        $a0, $s6, $zero
    ctx->r4 = ADD32(ctx->r22, 0);
    func_0041DA28(rdram, ctx);
        goto after_1;
    // 0x0041F41C: addu        $a0, $s6, $zero
    ctx->r4 = ADD32(ctx->r22, 0);
    after_1:
    // 0x0041F420: j           L_0041FB24
    // 0x0041F424: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
        goto L_0041FB24;
    // 0x0041F424: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_0041F428:
    // 0x0041F428: jal         0x00426D8C
    // 0x0041F42C: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    func_00426D8C(rdram, ctx);
        goto after_2;
    // 0x0041F42C: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    after_2:
    // 0x0041F430: addiu       $v1, $zero, 0x4
    ctx->r3 = ADD32(0, 0X4);
    // 0x0041F434: bne         $v0, $v1, L_0041F484
    if (ctx->r2 != ctx->r3) {
        // 0x0041F438: addu        $v1, $zero, $zero
        ctx->r3 = ADD32(0, 0);
            goto L_0041F484;
    }
    // 0x0041F438: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
    // 0x0041F43C: jal         0x00426D8C
    // 0x0041F440: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    func_00426D8C(rdram, ctx);
        goto after_3;
    // 0x0041F440: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    after_3:
    // 0x0041F444: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
    // 0x0041F448: bne         $v0, $v1, L_0041F484
    if (ctx->r2 != ctx->r3) {
        // 0x0041F44C: addu        $v1, $zero, $zero
        ctx->r3 = ADD32(0, 0);
            goto L_0041F484;
    }
    // 0x0041F44C: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
    // 0x0041F450: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x0041F454: addiu       $a1, $a1, 0x45D8
    ctx->r5 = ADD32(ctx->r5, 0X45D8);
    // 0x0041F458: jal         0x00426D54
    // 0x0041F45C: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    func_00426D54(rdram, ctx);
        goto after_4;
    // 0x0041F45C: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    after_4:
    // 0x0041F460: bne         $v0, $zero, L_0041F484
    if (ctx->r2 != 0) {
        // 0x0041F464: addu        $v1, $zero, $zero
        ctx->r3 = ADD32(0, 0);
            goto L_0041F484;
    }
    // 0x0041F464: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
    // 0x0041F468: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x0041F46C: addiu       $a1, $a1, 0x45D4
    ctx->r5 = ADD32(ctx->r5, 0X45D4);
    // 0x0041F470: jal         0x00426D54
    // 0x0041F474: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    func_00426D54(rdram, ctx);
        goto after_5;
    // 0x0041F474: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    after_5:
    // 0x0041F478: beq         $v0, $zero, L_0041F484
    if (ctx->r2 == 0) {
        // 0x0041F47C: addiu       $v1, $zero, 0x1
        ctx->r3 = ADD32(0, 0X1);
            goto L_0041F484;
    }
    // 0x0041F47C: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x0041F480: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
L_0041F484:
    // 0x0041F484: beq         $v1, $zero, L_0041F4B8
    if (ctx->r3 == 0) {
        // 0x0041F488: addiu       $s0, $sp, 0x38
        ctx->r16 = ADD32(ctx->r29, 0X38);
            goto L_0041F4B8;
    }
    // 0x0041F488: addiu       $s0, $sp, 0x38
    ctx->r16 = ADD32(ctx->r29, 0X38);
    // 0x0041F48C: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x0041F490: addiu       $a1, $a1, 0x45C0
    ctx->r5 = ADD32(ctx->r5, 0X45C0);
    // 0x0041F494: jal         0x00426D54
    // 0x0041F498: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00426D54(rdram, ctx);
        goto after_6;
    // 0x0041F498: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_6:
    // 0x0041F49C: sltiu       $s3, $v0, 0x1
    ctx->r19 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x0041F4A0: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x0041F4A4: addiu       $a1, $a1, 0x45CC
    ctx->r5 = ADD32(ctx->r5, 0X45CC);
    // 0x0041F4A8: jal         0x00426D54
    // 0x0041F4AC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00426D54(rdram, ctx);
        goto after_7;
    // 0x0041F4AC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_7:
    // 0x0041F4B0: j           L_0041F4C0
    // 0x0041F4B4: sltiu       $s0, $v0, 0x1
    ctx->r16 = ctx->r2 < 0X1 ? 1 : 0;
        goto L_0041F4C0;
    // 0x0041F4B4: sltiu       $s0, $v0, 0x1
    ctx->r16 = ctx->r2 < 0X1 ? 1 : 0;
L_0041F4B8:
    // 0x0041F4B8: addu        $s3, $zero, $zero
    ctx->r19 = ADD32(0, 0);
    // 0x0041F4BC: addu        $s0, $s3, $zero
    ctx->r16 = ADD32(ctx->r19, 0);
L_0041F4C0:
    // 0x0041F4C0: bne         $s1, $zero, L_0041FACC
    if (ctx->r17 != 0) {
        // 0x0041F4C4: nop
    
            goto L_0041FACC;
    }
    // 0x0041F4C4: nop

    // 0x0041F4C8: lw          $v0, 0x48($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X48);
    // 0x0041F4CC: beq         $v0, $zero, L_0041FACC
    if (ctx->r2 == 0) {
        // 0x0041F4D0: nop
    
            goto L_0041FACC;
    }
    // 0x0041F4D0: nop

    // 0x0041F4D4: beq         $s3, $zero, L_0041F584
    if (ctx->r19 == 0) {
        // 0x0041F4D8: addu        $a0, $s4, $zero
        ctx->r4 = ADD32(ctx->r20, 0);
            goto L_0041F584;
    }
    // 0x0041F4D8: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    // 0x0041F4DC: addu        $a1, $s5, $zero
    ctx->r5 = ADD32(ctx->r21, 0);
    // 0x0041F4E0: lui         $s1, 0x8013
    ctx->r17 = S32(0X8013 << 16);
    // 0x0041F4E4: addiu       $s1, $s1, 0x968
    ctx->r17 = ADD32(ctx->r17, 0X968);
    // 0x0041F4E8: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    // 0x0041F4EC: jal         0x004265B0
    // 0x0041F4F0: addiu       $a3, $zero, 0x18
    ctx->r7 = ADD32(0, 0X18);
    func_004265B0(rdram, ctx);
        goto after_8;
    // 0x0041F4F0: addiu       $a3, $zero, 0x18
    ctx->r7 = ADD32(0, 0X18);
    after_8:
    // 0x0041F4F4: bne         $v0, $zero, L_0041F580
    if (ctx->r2 != 0) {
        // 0x0041F4F8: addu        $s3, $zero, $zero
        ctx->r19 = ADD32(0, 0);
            goto L_0041F580;
    }
    // 0x0041F4F8: addu        $s3, $zero, $zero
    ctx->r19 = ADD32(0, 0);
    // 0x0041F4FC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0041F500: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    // 0x0041F504: jal         0x00426E78
    // 0x0041F508: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    func_00426E78(rdram, ctx);
        goto after_9;
    // 0x0041F508: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_9:
    // 0x0041F50C: lw          $v1, 0x14($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X14);
    // 0x0041F510: bne         $v0, $v1, L_0041F580
    if (ctx->r2 != ctx->r3) {
        // 0x0041F514: addu        $s3, $zero, $zero
        ctx->r19 = ADD32(0, 0);
            goto L_0041F580;
    }
    // 0x0041F514: addu        $s3, $zero, $zero
    ctx->r19 = ADD32(0, 0);
    // 0x0041F518: lui         $t3, 0x8013
    ctx->r11 = S32(0X8013 << 16);
    // 0x0041F51C: addiu       $t3, $t3, 0x948
    ctx->r11 = ADD32(ctx->r11, 0X948);
    // 0x0041F520: lw          $t0, 0x0($s1)
    ctx->r8 = MEM_W(ctx->r17, 0X0);
    // 0x0041F524: lw          $t1, 0x4($s1)
    ctx->r9 = MEM_W(ctx->r17, 0X4);
    // 0x0041F528: lw          $t2, 0x8($s1)
    ctx->r10 = MEM_W(ctx->r17, 0X8);
    // 0x0041F52C: sw          $t0, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r8;
    // 0x0041F530: sw          $t1, 0x4($t3)
    MEM_W(0X4, ctx->r11) = ctx->r9;
    // 0x0041F534: sw          $t2, 0x8($t3)
    MEM_W(0X8, ctx->r11) = ctx->r10;
    // 0x0041F538: lw          $t0, 0xC($s1)
    ctx->r8 = MEM_W(ctx->r17, 0XC);
    // 0x0041F53C: lw          $t1, 0x10($s1)
    ctx->r9 = MEM_W(ctx->r17, 0X10);
    // 0x0041F540: lw          $t2, 0x14($s1)
    ctx->r10 = MEM_W(ctx->r17, 0X14);
    // 0x0041F544: sw          $t0, 0xC($t3)
    MEM_W(0XC, ctx->r11) = ctx->r8;
    // 0x0041F548: sw          $t1, 0x10($t3)
    MEM_W(0X10, ctx->r11) = ctx->r9;
    // 0x0041F54C: sw          $t2, 0x14($t3)
    MEM_W(0X14, ctx->r11) = ctx->r10;
    // 0x0041F550: lw          $v0, 0x14($s6)
    ctx->r2 = MEM_W(ctx->r22, 0X14);
    // 0x0041F554: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x0041F558: addiu       $a0, $a0, -0x61D4
    ctx->r4 = ADD32(ctx->r4, -0X61D4);
    // 0x0041F55C: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x0041F560: lw          $a2, 0x1C($s6)
    ctx->r6 = MEM_W(ctx->r22, 0X1C);
    // 0x0041F564: lw          $a3, 0x20($s6)
    ctx->r7 = MEM_W(ctx->r22, 0X20);
    // 0x0041F568: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x0041F56C: addiu       $a1, $a1, -0x458C
    ctx->r5 = ADD32(ctx->r5, -0X458C);
    // 0x0041F570: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0041F574: sw          $s5, 0x9C4($at)
    MEM_W(0X9C4, ctx->r1) = ctx->r21;
    // 0x0041F578: j           L_0041FB18
    // 0x0041F57C: nop

        goto L_0041FB18;
    // 0x0041F57C: nop

L_0041F580:
    // 0x0041F580: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
L_0041F584:
    // 0x0041F584: beq         $s0, $zero, L_0041F6B4
    if (ctx->r16 == 0) {
        // 0x0041F588: nop
    
            goto L_0041F6B4;
    }
    // 0x0041F588: nop

    // 0x0041F58C: bne         $s2, $zero, L_0041F6B4
    if (ctx->r18 != 0) {
        // 0x0041F590: nop
    
            goto L_0041F6B4;
    }
    // 0x0041F590: nop

    // 0x0041F594: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x0041F598: lw          $v0, 0x2014($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2014);
    // 0x0041F59C: lw          $s0, 0x4C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X4C);
    // 0x0041F5A0: beq         $v0, $zero, L_0041F5C0
    if (ctx->r2 == 0) {
        // 0x0041F5A4: nop
    
            goto L_0041F5C0;
    }
    // 0x0041F5A4: nop

    // 0x0041F5A8: jal         0x002053A8
    // 0x0041F5AC: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_002053A8(rdram, ctx);
        goto after_10;
    // 0x0041F5AC: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_10:
    // 0x0041F5B0: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x0041F5B4: lw          $a1, 0x2014($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X2014);
    // 0x0041F5B8: jal         0x002052D8
    // 0x0041F5BC: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_002052D8(rdram, ctx);
        goto after_11;
    // 0x0041F5BC: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_11:
L_0041F5C0:
    // 0x0041F5C0: bne         $s0, $zero, L_0041F5D4
    if (ctx->r16 != 0) {
        // 0x0041F5C4: sll         $s0, $s0, 8
        ctx->r16 = S32(ctx->r16 << 8);
            goto L_0041F5D4;
    }
    // 0x0041F5C4: sll         $s0, $s0, 8
    ctx->r16 = S32(ctx->r16 << 8);
    // 0x0041F5C8: lui         $v0, 0x800F
    ctx->r2 = S32(0X800F << 16);
    // 0x0041F5CC: lw          $v0, 0x70A8($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X70A8);
    // 0x0041F5D0: addiu       $s0, $v0, 0x688
    ctx->r16 = ADD32(ctx->r2, 0X688);
L_0041F5D4:
    // 0x0041F5D4: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0041F5D8: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x0041F5DC: lui         $a3, 0x800C
    ctx->r7 = S32(0X800C << 16);
    // 0x0041F5E0: addiu       $a3, $a3, 0x13F0
    ctx->r7 = ADD32(ctx->r7, 0X13F0);
    // 0x0041F5E4: jal         0x00204EDC
    // 0x0041F5E8: addiu       $a2, $zero, 0x33
    ctx->r6 = ADD32(0, 0X33);
    func_00204EDC(rdram, ctx);
        goto after_12;
    // 0x0041F5E8: addiu       $a2, $zero, 0x33
    ctx->r6 = ADD32(0, 0X33);
    after_12:
    // 0x0041F5EC: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x0041F5F0: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
    // 0x0041F5F4: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0041F5F8: sw          $v0, 0x2014($at)
    MEM_W(0X2014, ctx->r1) = ctx->r2;
    // 0x0041F5FC: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0041F600: sw          $a0, 0x201C($at)
    MEM_W(0X201C, ctx->r1) = ctx->r4;
    // 0x0041F604: jal         0x00266C5C
    // 0x0041F608: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    func_00266C5C(rdram, ctx);
        goto after_13;
    // 0x0041F608: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    after_13:
    // 0x0041F60C: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    // 0x0041F610: addu        $a1, $s5, $zero
    ctx->r5 = ADD32(ctx->r21, 0);
    // 0x0041F614: lw          $a3, 0x4C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X4C);
    // 0x0041F618: lui         $a2, 0x800C
    ctx->r6 = S32(0X800C << 16);
    // 0x0041F61C: lw          $a2, 0x201C($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X201C);
    // 0x0041F620: jal         0x004265B0
    // 0x0041F624: sll         $a3, $a3, 8
    ctx->r7 = S32(ctx->r7 << 8);
    func_004265B0(rdram, ctx);
        goto after_14;
    // 0x0041F624: sll         $a3, $a3, 8
    ctx->r7 = S32(ctx->r7 << 8);
    after_14:
    // 0x0041F628: bnel        $v0, $zero, L_0041F6B0
    if (ctx->r2 != 0) {
        // 0x0041F62C: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_0041F6B0;
    }
    goto skip_0;
    // 0x0041F62C: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    skip_0:
    // 0x0041F630: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x0041F634: lw          $a0, 0x201C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X201C);
    // 0x0041F638: lw          $a1, 0x0($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X0);
    // 0x0041F63C: bnel        $a1, $s7, L_0041F6B0
    if (ctx->r5 != ctx->r23) {
        // 0x0041F640: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_0041F6B0;
    }
    goto skip_1;
    // 0x0041F640: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    skip_1:
    // 0x0041F644: addiu       $a1, $a1, -0x4
    ctx->r5 = ADD32(ctx->r5, -0X4);
    // 0x0041F648: jal         0x00426E78
    // 0x0041F64C: addiu       $a2, $zero, 0xB
    ctx->r6 = ADD32(0, 0XB);
    func_00426E78(rdram, ctx);
        goto after_15;
    // 0x0041F64C: addiu       $a2, $zero, 0xB
    ctx->r6 = ADD32(0, 0XB);
    after_15:
    // 0x0041F650: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x0041F654: lw          $a0, 0x201C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X201C);
    // 0x0041F658: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x0041F65C: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x0041F660: lw          $v1, -0x4($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X4);
    // 0x0041F664: bne         $v0, $v1, L_0041F6B0
    if (ctx->r2 != ctx->r3) {
        // 0x0041F668: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_0041F6B0;
    }
    // 0x0041F668: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x0041F66C: lui         $v1, 0x800F
    ctx->r3 = S32(0X800F << 16);
    // 0x0041F670: lw          $v1, 0x70A8($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X70A8);
    // 0x0041F674: lw          $v0, 0x4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X4);
    // 0x0041F678: bne         $v1, $v0, L_0041F6B4
    if (ctx->r3 != ctx->r2) {
        // 0x0041F67C: addiu       $s2, $zero, 0x1
        ctx->r18 = ADD32(0, 0X1);
            goto L_0041F6B4;
    }
    // 0x0041F67C: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
    // 0x0041F680: lw          $v0, 0x14($s6)
    ctx->r2 = MEM_W(ctx->r22, 0X14);
    // 0x0041F684: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x0041F688: addiu       $a0, $a0, -0x61D4
    ctx->r4 = ADD32(ctx->r4, -0X61D4);
    // 0x0041F68C: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x0041F690: lw          $a2, 0x1C($s6)
    ctx->r6 = MEM_W(ctx->r22, 0X1C);
    // 0x0041F694: lw          $a3, 0x20($s6)
    ctx->r7 = MEM_W(ctx->r22, 0X20);
    // 0x0041F698: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x0041F69C: addiu       $a1, $a1, -0x4718
    ctx->r5 = ADD32(ctx->r5, -0X4718);
    // 0x0041F6A0: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0041F6A4: sw          $s5, 0x9C4($at)
    MEM_W(0X9C4, ctx->r1) = ctx->r21;
    // 0x0041F6A8: j           L_0041FB18
    // 0x0041F6AC: nop

        goto L_0041FB18;
    // 0x0041F6AC: nop

L_0041F6B0:
    // 0x0041F6B0: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
L_0041F6B4:
    // 0x0041F6B4: bne         $s3, $zero, L_0041FACC
    if (ctx->r19 != 0) {
        // 0x0041F6B8: nop
    
            goto L_0041FACC;
    }
    // 0x0041F6B8: nop

    // 0x0041F6BC: bne         $s0, $zero, L_0041FACC
    if (ctx->r16 != 0) {
        // 0x0041F6C0: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_0041FACC;
    }
    // 0x0041F6C0: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x0041F6C4: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0041F6C8: sw          $s5, 0x9C4($at)
    MEM_W(0X9C4, ctx->r1) = ctx->r21;
    // 0x0041F6CC: lui         $s1, 0x800B
    ctx->r17 = S32(0X800B << 16);
    // 0x0041F6D0: addiu       $s1, $s1, 0x4B1C
    ctx->r17 = ADD32(ctx->r17, 0X4B1C);
    // 0x0041F6D4: addiu       $s2, $sp, 0x38
    ctx->r18 = ADD32(ctx->r29, 0X38);
    // 0x0041F6D8: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x0041F6DC: jal         0x00426E3C
    // 0x0041F6E0: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    func_00426E3C(rdram, ctx);
        goto after_16;
    // 0x0041F6E0: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    after_16:
    // 0x0041F6E4: beq         $v0, $zero, L_0041F700
    if (ctx->r2 == 0) {
        // 0x0041F6E8: addiu       $a1, $zero, 0x1
        ctx->r5 = ADD32(0, 0X1);
            goto L_0041F700;
    }
    // 0x0041F6E8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x0041F6EC: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x0041F6F0: addiu       $a1, $a1, 0x48D4
    ctx->r5 = ADD32(ctx->r5, 0X48D4);
    // 0x0041F6F4: jal         0x00426E04
    // 0x0041F6F8: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_00426E04(rdram, ctx);
        goto after_17;
    // 0x0041F6F8: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_17:
    // 0x0041F6FC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
L_0041F700:
    // 0x0041F700: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
    // 0x0041F704: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
L_0041F708:
    // 0x0041F708: beq         $a1, $zero, L_0041F714
    if (ctx->r5 == 0) {
        // 0x0041F70C: addu        $v0, $a0, $v1
        ctx->r2 = ADD32(ctx->r4, ctx->r3);
            goto L_0041F714;
    }
    // 0x0041F70C: addu        $v0, $a0, $v1
    ctx->r2 = ADD32(ctx->r4, ctx->r3);
    // 0x0041F710: lbu         $s0, 0x0($v0)
    ctx->r16 = MEM_BU(ctx->r2, 0X0);
L_0041F714:
    // 0x0041F714: bnel        $s0, $zero, L_0041F728
    if (ctx->r16 != 0) {
        // 0x0041F718: sb          $s0, 0x0($s1)
        MEM_B(0X0, ctx->r17) = ctx->r16;
            goto L_0041F728;
    }
    goto skip_2;
    // 0x0041F718: sb          $s0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r16;
    skip_2:
    // 0x0041F71C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x0041F720: addiu       $s0, $zero, 0x20
    ctx->r16 = ADD32(0, 0X20);
    // 0x0041F724: sb          $s0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r16;
L_0041F728:
    // 0x0041F728: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x0041F72C: slti        $v0, $v1, 0x10
    ctx->r2 = SIGNED(ctx->r3) < 0X10 ? 1 : 0;
    // 0x0041F730: bne         $v0, $zero, L_0041F708
    if (ctx->r2 != 0) {
        // 0x0041F734: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_0041F708;
    }
    // 0x0041F734: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x0041F738: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x0041F73C: addu        $s1, $s1, $a1
    ctx->r17 = ADD32(ctx->r17, ctx->r5);
    // 0x0041F740: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
    // 0x0041F744: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
L_0041F748:
    // 0x0041F748: beq         $a1, $zero, L_0041F754
    if (ctx->r5 == 0) {
        // 0x0041F74C: addu        $v0, $a0, $v1
        ctx->r2 = ADD32(ctx->r4, ctx->r3);
            goto L_0041F754;
    }
    // 0x0041F74C: addu        $v0, $a0, $v1
    ctx->r2 = ADD32(ctx->r4, ctx->r3);
    // 0x0041F750: lbu         $s0, 0x0($v0)
    ctx->r16 = MEM_BU(ctx->r2, 0X0);
L_0041F754:
    // 0x0041F754: bnel        $s0, $zero, L_0041F768
    if (ctx->r16 != 0) {
        // 0x0041F758: sb          $s0, 0x0($s1)
        MEM_B(0X0, ctx->r17) = ctx->r16;
            goto L_0041F768;
    }
    goto skip_3;
    // 0x0041F758: sb          $s0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r16;
    skip_3:
    // 0x0041F75C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x0041F760: addiu       $s0, $zero, 0x20
    ctx->r16 = ADD32(0, 0X20);
    // 0x0041F764: sb          $s0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r16;
L_0041F768:
    // 0x0041F768: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x0041F76C: slti        $v0, $v1, 0x4
    ctx->r2 = SIGNED(ctx->r3) < 0X4 ? 1 : 0;
    // 0x0041F770: bne         $v0, $zero, L_0041F748
    if (ctx->r2 != 0) {
        // 0x0041F774: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_0041F748;
    }
    // 0x0041F774: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x0041F778: lw          $v0, 0x14($s6)
    ctx->r2 = MEM_W(ctx->r22, 0X14);
    // 0x0041F77C: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x0041F780: addiu       $a0, $a0, -0x61D4
    ctx->r4 = ADD32(ctx->r4, -0X61D4);
    // 0x0041F784: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x0041F788: lw          $a2, 0x1C($s6)
    ctx->r6 = MEM_W(ctx->r22, 0X1C);
    // 0x0041F78C: lw          $a3, 0x20($s6)
    ctx->r7 = MEM_W(ctx->r22, 0X20);
    // 0x0041F790: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x0041F794: addiu       $a1, $a1, -0x4568
    ctx->r5 = ADD32(ctx->r5, -0X4568);
    // 0x0041F798: j           L_0041FB18
    // 0x0041F79C: nop

        goto L_0041FB18;
    // 0x0041F79C: nop

    // 0x0041F7A0: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x0041F7A4: lw          $v0, 0x994($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X994);
    // 0x0041F7A8: beq         $v0, $zero, L_0041FACC
    if (ctx->r2 == 0) {
        // 0x0041F7AC: nop
    
            goto L_0041FACC;
    }
    // 0x0041F7AC: nop

    // 0x0041F7B0: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x0041F7B4: lw          $v0, 0x9B4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X9B4);
    // 0x0041F7B8: beq         $v0, $zero, L_0041F8C0
    if (ctx->r2 == 0) {
        // 0x0041F7BC: nop
    
            goto L_0041F8C0;
    }
    // 0x0041F7BC: nop

    // 0x0041F7C0: bne         $s2, $zero, L_0041F8C0
    if (ctx->r18 != 0) {
        // 0x0041F7C4: addu        $a0, $s4, $zero
        ctx->r4 = ADD32(ctx->r20, 0);
            goto L_0041F8C0;
    }
    // 0x0041F7C4: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    // 0x0041F7C8: addu        $a1, $s5, $zero
    ctx->r5 = ADD32(ctx->r21, 0);
    // 0x0041F7CC: addiu       $a2, $sp, 0x48
    ctx->r6 = ADD32(ctx->r29, 0X48);
    // 0x0041F7D0: addiu       $s0, $sp, 0x38
    ctx->r16 = ADD32(ctx->r29, 0X38);
    // 0x0041F7D4: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    // 0x0041F7D8: addiu       $v0, $sp, 0x20
    ctx->r2 = ADD32(ctx->r29, 0X20);
    // 0x0041F7DC: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x0041F7E0: addiu       $v0, $sp, 0x4C
    ctx->r2 = ADD32(ctx->r29, 0X4C);
    // 0x0041F7E4: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x0041F7E8: addiu       $v0, $sp, 0x28
    ctx->r2 = ADD32(ctx->r29, 0X28);
    // 0x0041F7EC: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x0041F7F0: addiu       $v0, $sp, 0x30
    ctx->r2 = ADD32(ctx->r29, 0X30);
    // 0x0041F7F4: jal         0x00425E74
    // 0x0041F7F8: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    func_00425E74(rdram, ctx);
        goto after_18;
    // 0x0041F7F8: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    after_18:
    // 0x0041F7FC: bne         $v0, $zero, L_0041FACC
    if (ctx->r2 != 0) {
        // 0x0041F800: nop
    
            goto L_0041FACC;
    }
    // 0x0041F800: nop

    // 0x0041F804: lw          $v0, 0x48($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X48);
    // 0x0041F808: beq         $v0, $zero, L_0041FACC
    if (ctx->r2 == 0) {
        // 0x0041F80C: nop
    
            goto L_0041FACC;
    }
    // 0x0041F80C: nop

    // 0x0041F810: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x0041F814: addiu       $a1, $a1, 0x45C0
    ctx->r5 = ADD32(ctx->r5, 0X45C0);
    // 0x0041F818: jal         0x00426D54
    // 0x0041F81C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00426D54(rdram, ctx);
        goto after_19;
    // 0x0041F81C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_19:
    // 0x0041F820: bne         $v0, $zero, L_0041FACC
    if (ctx->r2 != 0) {
        // 0x0041F824: addu        $a1, $s5, $zero
        ctx->r5 = ADD32(ctx->r21, 0);
            goto L_0041FACC;
    }
    // 0x0041F824: addu        $a1, $s5, $zero
    ctx->r5 = ADD32(ctx->r21, 0);
    // 0x0041F828: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    // 0x0041F82C: lui         $s0, 0x8013
    ctx->r16 = S32(0X8013 << 16);
    // 0x0041F830: addiu       $s0, $s0, 0x968
    ctx->r16 = ADD32(ctx->r16, 0X968);
    // 0x0041F834: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    // 0x0041F838: jal         0x004265B0
    // 0x0041F83C: addiu       $a3, $zero, 0x18
    ctx->r7 = ADD32(0, 0X18);
    func_004265B0(rdram, ctx);
        goto after_20;
    // 0x0041F83C: addiu       $a3, $zero, 0x18
    ctx->r7 = ADD32(0, 0X18);
    after_20:
    // 0x0041F840: bne         $v0, $zero, L_0041FACC
    if (ctx->r2 != 0) {
        // 0x0041F844: addiu       $s2, $zero, 0x1
        ctx->r18 = ADD32(0, 0X1);
            goto L_0041FACC;
    }
    // 0x0041F844: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
    // 0x0041F848: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0041F84C: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    // 0x0041F850: jal         0x00426E78
    // 0x0041F854: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    func_00426E78(rdram, ctx);
        goto after_21;
    // 0x0041F854: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_21:
    // 0x0041F858: lw          $v1, 0x14($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X14);
    // 0x0041F85C: bne         $v0, $v1, L_0041FACC
    if (ctx->r2 != ctx->r3) {
        // 0x0041F860: addiu       $s2, $zero, 0x1
        ctx->r18 = ADD32(0, 0X1);
            goto L_0041FACC;
    }
    // 0x0041F860: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
    // 0x0041F864: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x0041F868: addiu       $a0, $a0, -0x61D4
    ctx->r4 = ADD32(ctx->r4, -0X61D4);
    // 0x0041F86C: lui         $t3, 0x8013
    ctx->r11 = S32(0X8013 << 16);
    // 0x0041F870: addiu       $t3, $t3, 0x948
    ctx->r11 = ADD32(ctx->r11, 0X948);
    // 0x0041F874: lw          $t0, 0x0($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X0);
    // 0x0041F878: lw          $t1, 0x4($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X4);
    // 0x0041F87C: lw          $t2, 0x8($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X8);
    // 0x0041F880: sw          $t0, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r8;
    // 0x0041F884: sw          $t1, 0x4($t3)
    MEM_W(0X4, ctx->r11) = ctx->r9;
    // 0x0041F888: sw          $t2, 0x8($t3)
    MEM_W(0X8, ctx->r11) = ctx->r10;
    // 0x0041F88C: lw          $t0, 0xC($s0)
    ctx->r8 = MEM_W(ctx->r16, 0XC);
    // 0x0041F890: lw          $t1, 0x10($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X10);
    // 0x0041F894: lw          $t2, 0x14($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X14);
    // 0x0041F898: sw          $t0, 0xC($t3)
    MEM_W(0XC, ctx->r11) = ctx->r8;
    // 0x0041F89C: sw          $t1, 0x10($t3)
    MEM_W(0X10, ctx->r11) = ctx->r9;
    // 0x0041F8A0: sw          $t2, 0x14($t3)
    MEM_W(0X14, ctx->r11) = ctx->r10;
    // 0x0041F8A4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x0041F8A8: lw          $a2, 0x1C($s6)
    ctx->r6 = MEM_W(ctx->r22, 0X1C);
    // 0x0041F8AC: lw          $a3, 0x20($s6)
    ctx->r7 = MEM_W(ctx->r22, 0X20);
    // 0x0041F8B0: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x0041F8B4: addiu       $a1, $a1, -0x45B0
    ctx->r5 = ADD32(ctx->r5, -0X45B0);
    // 0x0041F8B8: j           L_0041FB18
    // 0x0041F8BC: nop

        goto L_0041FB18;
    // 0x0041F8BC: nop

L_0041F8C0:
    // 0x0041F8C0: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x0041F8C4: lw          $v0, 0x994($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X994);
    // 0x0041F8C8: beq         $v0, $zero, L_0041FACC
    if (ctx->r2 == 0) {
        // 0x0041F8CC: nop
    
            goto L_0041FACC;
    }
    // 0x0041F8CC: nop

    // 0x0041F8D0: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x0041F8D4: lw          $v0, 0x9B4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X9B4);
    // 0x0041F8D8: bne         $v0, $zero, L_0041FACC
    if (ctx->r2 != 0) {
        // 0x0041F8DC: nop
    
            goto L_0041FACC;
    }
    // 0x0041F8DC: nop

    // 0x0041F8E0: bne         $s2, $zero, L_0041FADC
    if (ctx->r18 != 0) {
        // 0x0041F8E4: addu        $a0, $s4, $zero
        ctx->r4 = ADD32(ctx->r20, 0);
            goto L_0041FADC;
    }
    // 0x0041F8E4: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    // 0x0041F8E8: addu        $a1, $s5, $zero
    ctx->r5 = ADD32(ctx->r21, 0);
    // 0x0041F8EC: addiu       $a2, $sp, 0x48
    ctx->r6 = ADD32(ctx->r29, 0X48);
    // 0x0041F8F0: addiu       $s0, $sp, 0x38
    ctx->r16 = ADD32(ctx->r29, 0X38);
    // 0x0041F8F4: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    // 0x0041F8F8: addiu       $v0, $sp, 0x20
    ctx->r2 = ADD32(ctx->r29, 0X20);
    // 0x0041F8FC: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x0041F900: addiu       $v0, $sp, 0x4C
    ctx->r2 = ADD32(ctx->r29, 0X4C);
    // 0x0041F904: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x0041F908: addiu       $v0, $sp, 0x28
    ctx->r2 = ADD32(ctx->r29, 0X28);
    // 0x0041F90C: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x0041F910: addiu       $v0, $sp, 0x30
    ctx->r2 = ADD32(ctx->r29, 0X30);
    // 0x0041F914: jal         0x00425E74
    // 0x0041F918: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    func_00425E74(rdram, ctx);
        goto after_22;
    // 0x0041F918: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    after_22:
    // 0x0041F91C: bne         $v0, $zero, L_0041FACC
    if (ctx->r2 != 0) {
        // 0x0041F920: nop
    
            goto L_0041FACC;
    }
    // 0x0041F920: nop

    // 0x0041F924: lw          $v0, 0x48($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X48);
    // 0x0041F928: beq         $v0, $zero, L_0041FACC
    if (ctx->r2 == 0) {
        // 0x0041F92C: nop
    
            goto L_0041FACC;
    }
    // 0x0041F92C: nop

    // 0x0041F930: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x0041F934: addiu       $a1, $a1, 0x45CC
    ctx->r5 = ADD32(ctx->r5, 0X45CC);
    // 0x0041F938: jal         0x00426D54
    // 0x0041F93C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00426D54(rdram, ctx);
        goto after_23;
    // 0x0041F93C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_23:
    // 0x0041F940: bne         $v0, $zero, L_0041FACC
    if (ctx->r2 != 0) {
        // 0x0041F944: nop
    
            goto L_0041FACC;
    }
    // 0x0041F944: nop

    // 0x0041F948: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x0041F94C: lw          $v0, 0x2014($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2014);
    // 0x0041F950: lw          $s0, 0x4C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X4C);
    // 0x0041F954: beq         $v0, $zero, L_0041F974
    if (ctx->r2 == 0) {
        // 0x0041F958: nop
    
            goto L_0041F974;
    }
    // 0x0041F958: nop

    // 0x0041F95C: jal         0x002053A8
    // 0x0041F960: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_002053A8(rdram, ctx);
        goto after_24;
    // 0x0041F960: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_24:
    // 0x0041F964: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x0041F968: lw          $a1, 0x2014($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X2014);
    // 0x0041F96C: jal         0x002052D8
    // 0x0041F970: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_002052D8(rdram, ctx);
        goto after_25;
    // 0x0041F970: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_25:
L_0041F974:
    // 0x0041F974: bne         $s0, $zero, L_0041F988
    if (ctx->r16 != 0) {
        // 0x0041F978: sll         $s0, $s0, 8
        ctx->r16 = S32(ctx->r16 << 8);
            goto L_0041F988;
    }
    // 0x0041F978: sll         $s0, $s0, 8
    ctx->r16 = S32(ctx->r16 << 8);
    // 0x0041F97C: lui         $v0, 0x800F
    ctx->r2 = S32(0X800F << 16);
    // 0x0041F980: lw          $v0, 0x70A8($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X70A8);
    // 0x0041F984: addiu       $s0, $v0, 0x688
    ctx->r16 = ADD32(ctx->r2, 0X688);
L_0041F988:
    // 0x0041F988: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0041F98C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x0041F990: lui         $a3, 0x800C
    ctx->r7 = S32(0X800C << 16);
    // 0x0041F994: addiu       $a3, $a3, 0x13F0
    ctx->r7 = ADD32(ctx->r7, 0X13F0);
    // 0x0041F998: jal         0x00204EDC
    // 0x0041F99C: addiu       $a2, $zero, 0x33
    ctx->r6 = ADD32(0, 0X33);
    func_00204EDC(rdram, ctx);
        goto after_26;
    // 0x0041F99C: addiu       $a2, $zero, 0x33
    ctx->r6 = ADD32(0, 0X33);
    after_26:
    // 0x0041F9A0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x0041F9A4: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
    // 0x0041F9A8: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0041F9AC: sw          $v0, 0x2014($at)
    MEM_W(0X2014, ctx->r1) = ctx->r2;
    // 0x0041F9B0: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0041F9B4: sw          $a0, 0x201C($at)
    MEM_W(0X201C, ctx->r1) = ctx->r4;
    // 0x0041F9B8: jal         0x00266C5C
    // 0x0041F9BC: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    func_00266C5C(rdram, ctx);
        goto after_27;
    // 0x0041F9BC: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    after_27:
    // 0x0041F9C0: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    // 0x0041F9C4: addu        $a1, $s5, $zero
    ctx->r5 = ADD32(ctx->r21, 0);
    // 0x0041F9C8: lw          $a3, 0x4C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X4C);
    // 0x0041F9CC: lui         $a2, 0x800C
    ctx->r6 = S32(0X800C << 16);
    // 0x0041F9D0: lw          $a2, 0x201C($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X201C);
    // 0x0041F9D4: jal         0x004265B0
    // 0x0041F9D8: sll         $a3, $a3, 8
    ctx->r7 = S32(ctx->r7 << 8);
    func_004265B0(rdram, ctx);
        goto after_28;
    // 0x0041F9D8: sll         $a3, $a3, 8
    ctx->r7 = S32(ctx->r7 << 8);
    after_28:
    // 0x0041F9DC: bne         $v0, $zero, L_0041FA54
    if (ctx->r2 != 0) {
        // 0x0041F9E0: nop
    
            goto L_0041FA54;
    }
    // 0x0041F9E0: nop

    // 0x0041F9E4: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x0041F9E8: lw          $a0, 0x201C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X201C);
    // 0x0041F9EC: lw          $a1, 0x0($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X0);
    // 0x0041F9F0: bne         $a1, $s7, L_0041FA54
    if (ctx->r5 != ctx->r23) {
        // 0x0041F9F4: addiu       $a1, $a1, -0x4
        ctx->r5 = ADD32(ctx->r5, -0X4);
            goto L_0041FA54;
    }
    // 0x0041F9F4: addiu       $a1, $a1, -0x4
    ctx->r5 = ADD32(ctx->r5, -0X4);
    // 0x0041F9F8: jal         0x00426E78
    // 0x0041F9FC: addiu       $a2, $zero, 0xB
    ctx->r6 = ADD32(0, 0XB);
    func_00426E78(rdram, ctx);
        goto after_29;
    // 0x0041F9FC: addiu       $a2, $zero, 0xB
    ctx->r6 = ADD32(0, 0XB);
    after_29:
    // 0x0041FA00: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x0041FA04: lw          $a0, 0x201C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X201C);
    // 0x0041FA08: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x0041FA0C: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x0041FA10: lw          $v1, -0x4($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X4);
    // 0x0041FA14: bne         $v0, $v1, L_0041FA54
    if (ctx->r2 != ctx->r3) {
        // 0x0041FA18: nop
    
            goto L_0041FA54;
    }
    // 0x0041FA18: nop

    // 0x0041FA1C: lui         $v1, 0x800F
    ctx->r3 = S32(0X800F << 16);
    // 0x0041FA20: lw          $v1, 0x70A8($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X70A8);
    // 0x0041FA24: lw          $v0, 0x4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X4);
    // 0x0041FA28: bne         $v1, $v0, L_0041FA54
    if (ctx->r3 != ctx->r2) {
        // 0x0041FA2C: nop
    
            goto L_0041FA54;
    }
    // 0x0041FA2C: nop

    // 0x0041FA30: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x0041FA34: addiu       $a0, $a0, -0x61D4
    ctx->r4 = ADD32(ctx->r4, -0X61D4);
    // 0x0041FA38: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x0041FA3C: lw          $a2, 0x1C($s6)
    ctx->r6 = MEM_W(ctx->r22, 0X1C);
    // 0x0041FA40: lw          $a3, 0x20($s6)
    ctx->r7 = MEM_W(ctx->r22, 0X20);
    // 0x0041FA44: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x0041FA48: addiu       $a1, $a1, -0x473C
    ctx->r5 = ADD32(ctx->r5, -0X473C);
    // 0x0041FA4C: j           L_0041FB18
    // 0x0041FA50: nop

        goto L_0041FB18;
    // 0x0041FA50: nop

L_0041FA54:
    // 0x0041FA54: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x0041FA58: lw          $v0, 0x2010($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2010);
    // 0x0041FA5C: bne         $v0, $zero, L_0041FA74
    if (ctx->r2 != 0) {
        // 0x0041FA60: addiu       $s2, $zero, 0x1
        ctx->r18 = ADD32(0, 0X1);
            goto L_0041FA74;
    }
    // 0x0041FA60: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
    // 0x0041FA64: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x0041FA68: lw          $v0, 0x2014($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2014);
    // 0x0041FA6C: beq         $v0, $zero, L_0041FA7C
    if (ctx->r2 == 0) {
        // 0x0041FA70: nop
    
            goto L_0041FA7C;
    }
    // 0x0041FA70: nop

L_0041FA74:
    // 0x0041FA74: jal         0x002053A8
    // 0x0041FA78: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_002053A8(rdram, ctx);
        goto after_30;
    // 0x0041FA78: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_30:
L_0041FA7C:
    // 0x0041FA7C: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x0041FA80: lw          $a1, 0x2010($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X2010);
    // 0x0041FA84: beq         $a1, $zero, L_0041FA94
    if (ctx->r5 == 0) {
        // 0x0041FA88: nop
    
            goto L_0041FA94;
    }
    // 0x0041FA88: nop

    // 0x0041FA8C: jal         0x002052D8
    // 0x0041FA90: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_002052D8(rdram, ctx);
        goto after_31;
    // 0x0041FA90: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_31:
L_0041FA94:
    // 0x0041FA94: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x0041FA98: lw          $a1, 0x2014($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X2014);
    // 0x0041FA9C: beq         $a1, $zero, L_0041FAAC
    if (ctx->r5 == 0) {
        // 0x0041FAA0: nop
    
            goto L_0041FAAC;
    }
    // 0x0041FAA0: nop

    // 0x0041FAA4: jal         0x002052D8
    // 0x0041FAA8: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_002052D8(rdram, ctx);
        goto after_32;
    // 0x0041FAA8: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_32:
L_0041FAAC:
    // 0x0041FAAC: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0041FAB0: sw          $zero, 0x2010($at)
    MEM_W(0X2010, ctx->r1) = 0;
    // 0x0041FAB4: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0041FAB8: sw          $zero, 0x2014($at)
    MEM_W(0X2014, ctx->r1) = 0;
    // 0x0041FABC: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0041FAC0: sw          $zero, 0x2018($at)
    MEM_W(0X2018, ctx->r1) = 0;
    // 0x0041FAC4: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0041FAC8: sw          $zero, 0x201C($at)
    MEM_W(0X201C, ctx->r1) = 0;
L_0041FACC:
    // 0x0041FACC: beq         $s2, $zero, L_0041FB24
    if (ctx->r18 == 0) {
        // 0x0041FAD0: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_0041FB24;
    }
    // 0x0041FAD0: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x0041FAD4: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x0041FAD8: lw          $v0, 0x9B4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X9B4);
L_0041FADC:
    // 0x0041FADC: lui         $v1, 0x44
    ctx->r3 = S32(0X44 << 16);
    // 0x0041FAE0: addiu       $v1, $v1, -0x4910
    ctx->r3 = ADD32(ctx->r3, -0X4910);
    // 0x0041FAE4: beq         $v0, $zero, L_0041FAF4
    if (ctx->r2 == 0) {
        // 0x0041FAE8: nop
    
            goto L_0041FAF4;
    }
    // 0x0041FAE8: nop

    // 0x0041FAEC: lui         $v1, 0x44
    ctx->r3 = S32(0X44 << 16);
    // 0x0041FAF0: addiu       $v1, $v1, -0x4958
    ctx->r3 = ADD32(ctx->r3, -0X4958);
L_0041FAF4:
    // 0x0041FAF4: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x0041FAF8: addiu       $a0, $a0, -0x61D4
    ctx->r4 = ADD32(ctx->r4, -0X61D4);
    // 0x0041FAFC: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    // 0x0041FB00: lw          $a2, 0x1C($s6)
    ctx->r6 = MEM_W(ctx->r22, 0X1C);
    // 0x0041FB04: lw          $a3, 0x20($s6)
    ctx->r7 = MEM_W(ctx->r22, 0X20);
    // 0x0041FB08: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x0041FB0C: addiu       $a1, $a1, -0x3DD0
    ctx->r5 = ADD32(ctx->r5, -0X3DD0);
    // 0x0041FB10: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0041FB14: sw          $s5, 0x988($at)
    MEM_W(0X988, ctx->r1) = ctx->r21;
L_0041FB18:
    // 0x0041FB18: jal         0x00416644
    // 0x0041FB1C: nop

    func_00416644(rdram, ctx);
        goto after_33;
    // 0x0041FB1C: nop

    after_33:
    // 0x0041FB20: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_0041FB24:
    // 0x0041FB24: lw          $ra, 0x70($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X70);
    // 0x0041FB28: lw          $s7, 0x6C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X6C);
    // 0x0041FB2C: lw          $s6, 0x68($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X68);
    // 0x0041FB30: lw          $s5, 0x64($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X64);
    // 0x0041FB34: lw          $s4, 0x60($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X60);
    // 0x0041FB38: lw          $s3, 0x5C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X5C);
    // 0x0041FB3C: lw          $s2, 0x58($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X58);
    // 0x0041FB40: lw          $s1, 0x54($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X54);
    // 0x0041FB44: lw          $s0, 0x50($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X50);
    // 0x0041FB48: jr          $ra
    // 0x0041FB4C: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
    return;
    // 0x0041FB4C: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
;}
RECOMP_FUNC void entry_0041FA38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041FA38: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x0041FA3C: lw          $a2, 0x1C($s6)
    ctx->r6 = MEM_W(ctx->r22, 0X1C);
    // 0x0041FA40: lw          $a3, 0x20($s6)
    ctx->r7 = MEM_W(ctx->r22, 0X20);
    // 0x0041FA44: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x0041FA48: addiu       $a1, $a1, -0x473C
    ctx->r5 = ADD32(ctx->r5, -0X473C);
    // 0x0041FA4C: j           L_0041FB18
    // 0x0041FA50: nop

        goto L_0041FB18;
    // 0x0041FA50: nop

    // 0x0041FA54: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x0041FA58: lw          $v0, 0x2010($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2010);
    // 0x0041FA5C: bne         $v0, $zero, L_0041FA74
    if (ctx->r2 != 0) {
        // 0x0041FA60: addiu       $s2, $zero, 0x1
        ctx->r18 = ADD32(0, 0X1);
            goto L_0041FA74;
    }
    // 0x0041FA60: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
    // 0x0041FA64: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x0041FA68: lw          $v0, 0x2014($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2014);
    // 0x0041FA6C: beq         $v0, $zero, L_0041FA7C
    if (ctx->r2 == 0) {
        // 0x0041FA70: nop
    
            goto L_0041FA7C;
    }
    // 0x0041FA70: nop

L_0041FA74:
    // 0x0041FA74: jal         0x002053A8
    // 0x0041FA78: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_002053A8(rdram, ctx);
        goto after_0;
    // 0x0041FA78: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_0:
L_0041FA7C:
    // 0x0041FA7C: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x0041FA80: lw          $a1, 0x2010($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X2010);
    // 0x0041FA84: beq         $a1, $zero, L_0041FA94
    if (ctx->r5 == 0) {
        // 0x0041FA88: nop
    
            goto L_0041FA94;
    }
    // 0x0041FA88: nop

    // 0x0041FA8C: jal         0x002052D8
    // 0x0041FA90: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_002052D8(rdram, ctx);
        goto after_1;
    // 0x0041FA90: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_1:
L_0041FA94:
    // 0x0041FA94: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x0041FA98: lw          $a1, 0x2014($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X2014);
    // 0x0041FA9C: beq         $a1, $zero, L_0041FAAC
    if (ctx->r5 == 0) {
        // 0x0041FAA0: nop
    
            goto L_0041FAAC;
    }
    // 0x0041FAA0: nop

    // 0x0041FAA4: jal         0x002052D8
    // 0x0041FAA8: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_002052D8(rdram, ctx);
        goto after_2;
    // 0x0041FAA8: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_2:
L_0041FAAC:
    // 0x0041FAAC: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0041FAB0: sw          $zero, 0x2010($at)
    MEM_W(0X2010, ctx->r1) = 0;
    // 0x0041FAB4: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0041FAB8: sw          $zero, 0x2014($at)
    MEM_W(0X2014, ctx->r1) = 0;
    // 0x0041FABC: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0041FAC0: sw          $zero, 0x2018($at)
    MEM_W(0X2018, ctx->r1) = 0;
    // 0x0041FAC4: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0041FAC8: sw          $zero, 0x201C($at)
    MEM_W(0X201C, ctx->r1) = 0;
    // 0x0041FACC: beq         $s2, $zero, L_0041FB24
    if (ctx->r18 == 0) {
        // 0x0041FAD0: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_0041FB24;
    }
    // 0x0041FAD0: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x0041FAD4: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x0041FAD8: lw          $v0, 0x9B4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X9B4);
    // 0x0041FADC: lui         $v1, 0x44
    ctx->r3 = S32(0X44 << 16);
    // 0x0041FAE0: addiu       $v1, $v1, -0x4910
    ctx->r3 = ADD32(ctx->r3, -0X4910);
    // 0x0041FAE4: beq         $v0, $zero, L_0041FAF4
    if (ctx->r2 == 0) {
        // 0x0041FAE8: nop
    
            goto L_0041FAF4;
    }
    // 0x0041FAE8: nop

    // 0x0041FAEC: lui         $v1, 0x44
    ctx->r3 = S32(0X44 << 16);
    // 0x0041FAF0: addiu       $v1, $v1, -0x4958
    ctx->r3 = ADD32(ctx->r3, -0X4958);
L_0041FAF4:
    // 0x0041FAF4: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x0041FAF8: addiu       $a0, $a0, -0x61D4
    ctx->r4 = ADD32(ctx->r4, -0X61D4);
    // 0x0041FAFC: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    // 0x0041FB00: lw          $a2, 0x1C($s6)
    ctx->r6 = MEM_W(ctx->r22, 0X1C);
    // 0x0041FB04: lw          $a3, 0x20($s6)
    ctx->r7 = MEM_W(ctx->r22, 0X20);
    // 0x0041FB08: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x0041FB0C: addiu       $a1, $a1, -0x3DD0
    ctx->r5 = ADD32(ctx->r5, -0X3DD0);
    // 0x0041FB10: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0041FB14: sw          $s5, 0x988($at)
    MEM_W(0X988, ctx->r1) = ctx->r21;
L_0041FB18:
    // 0x0041FB18: jal         0x00416644
    // 0x0041FB1C: nop

    func_00416644(rdram, ctx);
        goto after_3;
    // 0x0041FB1C: nop

    after_3:
    // 0x0041FB20: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_0041FB24:
    // 0x0041FB24: lw          $ra, 0x70($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X70);
    // 0x0041FB28: lw          $s7, 0x6C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X6C);
    // 0x0041FB2C: lw          $s6, 0x68($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X68);
    // 0x0041FB30: lw          $s5, 0x64($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X64);
    // 0x0041FB34: lw          $s4, 0x60($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X60);
    // 0x0041FB38: lw          $s3, 0x5C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X5C);
    // 0x0041FB3C: lw          $s2, 0x58($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X58);
    // 0x0041FB40: lw          $s1, 0x54($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X54);
    // 0x0041FB44: lw          $s0, 0x50($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X50);
    // 0x0041FB48: jr          $ra
    // 0x0041FB4C: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
    return;
    // 0x0041FB4C: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
;}
RECOMP_FUNC void entry_0041FA44(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041FA44: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x0041FA48: addiu       $a1, $a1, -0x473C
    ctx->r5 = ADD32(ctx->r5, -0X473C);
    // 0x0041FA4C: j           L_0041FB18
    // 0x0041FA50: nop

        goto L_0041FB18;
    // 0x0041FA50: nop

    // 0x0041FA54: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x0041FA58: lw          $v0, 0x2010($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2010);
    // 0x0041FA5C: bne         $v0, $zero, L_0041FA74
    if (ctx->r2 != 0) {
        // 0x0041FA60: addiu       $s2, $zero, 0x1
        ctx->r18 = ADD32(0, 0X1);
            goto L_0041FA74;
    }
    // 0x0041FA60: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
    // 0x0041FA64: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x0041FA68: lw          $v0, 0x2014($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2014);
    // 0x0041FA6C: beq         $v0, $zero, L_0041FA7C
    if (ctx->r2 == 0) {
        // 0x0041FA70: nop
    
            goto L_0041FA7C;
    }
    // 0x0041FA70: nop

L_0041FA74:
    // 0x0041FA74: jal         0x002053A8
    // 0x0041FA78: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_002053A8(rdram, ctx);
        goto after_0;
    // 0x0041FA78: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_0:
L_0041FA7C:
    // 0x0041FA7C: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x0041FA80: lw          $a1, 0x2010($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X2010);
    // 0x0041FA84: beq         $a1, $zero, L_0041FA94
    if (ctx->r5 == 0) {
        // 0x0041FA88: nop
    
            goto L_0041FA94;
    }
    // 0x0041FA88: nop

    // 0x0041FA8C: jal         0x002052D8
    // 0x0041FA90: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_002052D8(rdram, ctx);
        goto after_1;
    // 0x0041FA90: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_1:
L_0041FA94:
    // 0x0041FA94: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x0041FA98: lw          $a1, 0x2014($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X2014);
    // 0x0041FA9C: beq         $a1, $zero, L_0041FAAC
    if (ctx->r5 == 0) {
        // 0x0041FAA0: nop
    
            goto L_0041FAAC;
    }
    // 0x0041FAA0: nop

    // 0x0041FAA4: jal         0x002052D8
    // 0x0041FAA8: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_002052D8(rdram, ctx);
        goto after_2;
    // 0x0041FAA8: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_2:
L_0041FAAC:
    // 0x0041FAAC: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0041FAB0: sw          $zero, 0x2010($at)
    MEM_W(0X2010, ctx->r1) = 0;
    // 0x0041FAB4: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0041FAB8: sw          $zero, 0x2014($at)
    MEM_W(0X2014, ctx->r1) = 0;
    // 0x0041FABC: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0041FAC0: sw          $zero, 0x2018($at)
    MEM_W(0X2018, ctx->r1) = 0;
    // 0x0041FAC4: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0041FAC8: sw          $zero, 0x201C($at)
    MEM_W(0X201C, ctx->r1) = 0;
    // 0x0041FACC: beq         $s2, $zero, L_0041FB24
    if (ctx->r18 == 0) {
        // 0x0041FAD0: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_0041FB24;
    }
    // 0x0041FAD0: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x0041FAD4: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x0041FAD8: lw          $v0, 0x9B4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X9B4);
    // 0x0041FADC: lui         $v1, 0x44
    ctx->r3 = S32(0X44 << 16);
    // 0x0041FAE0: addiu       $v1, $v1, -0x4910
    ctx->r3 = ADD32(ctx->r3, -0X4910);
    // 0x0041FAE4: beq         $v0, $zero, L_0041FAF4
    if (ctx->r2 == 0) {
        // 0x0041FAE8: nop
    
            goto L_0041FAF4;
    }
    // 0x0041FAE8: nop

    // 0x0041FAEC: lui         $v1, 0x44
    ctx->r3 = S32(0X44 << 16);
    // 0x0041FAF0: addiu       $v1, $v1, -0x4958
    ctx->r3 = ADD32(ctx->r3, -0X4958);
L_0041FAF4:
    // 0x0041FAF4: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x0041FAF8: addiu       $a0, $a0, -0x61D4
    ctx->r4 = ADD32(ctx->r4, -0X61D4);
    // 0x0041FAFC: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    // 0x0041FB00: lw          $a2, 0x1C($s6)
    ctx->r6 = MEM_W(ctx->r22, 0X1C);
    // 0x0041FB04: lw          $a3, 0x20($s6)
    ctx->r7 = MEM_W(ctx->r22, 0X20);
    // 0x0041FB08: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x0041FB0C: addiu       $a1, $a1, -0x3DD0
    ctx->r5 = ADD32(ctx->r5, -0X3DD0);
    // 0x0041FB10: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0041FB14: sw          $s5, 0x988($at)
    MEM_W(0X988, ctx->r1) = ctx->r21;
L_0041FB18:
    // 0x0041FB18: jal         0x00416644
    // 0x0041FB1C: nop

    func_00416644(rdram, ctx);
        goto after_3;
    // 0x0041FB1C: nop

    after_3:
    // 0x0041FB20: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_0041FB24:
    // 0x0041FB24: lw          $ra, 0x70($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X70);
    // 0x0041FB28: lw          $s7, 0x6C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X6C);
    // 0x0041FB2C: lw          $s6, 0x68($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X68);
    // 0x0041FB30: lw          $s5, 0x64($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X64);
    // 0x0041FB34: lw          $s4, 0x60($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X60);
    // 0x0041FB38: lw          $s3, 0x5C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X5C);
    // 0x0041FB3C: lw          $s2, 0x58($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X58);
    // 0x0041FB40: lw          $s1, 0x54($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X54);
    // 0x0041FB44: lw          $s0, 0x50($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X50);
    // 0x0041FB48: jr          $ra
    // 0x0041FB4C: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
    return;
    // 0x0041FB4C: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
;}
RECOMP_FUNC void entry_0041FAD4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041FAD4: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x0041FAD8: lw          $v0, 0x9B4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X9B4);
    // 0x0041FADC: lui         $v1, 0x44
    ctx->r3 = S32(0X44 << 16);
    // 0x0041FAE0: addiu       $v1, $v1, -0x4910
    ctx->r3 = ADD32(ctx->r3, -0X4910);
    // 0x0041FAE4: beq         $v0, $zero, L_0041FAF4
    if (ctx->r2 == 0) {
        // 0x0041FAE8: nop
    
            goto L_0041FAF4;
    }
    // 0x0041FAE8: nop

    // 0x0041FAEC: lui         $v1, 0x44
    ctx->r3 = S32(0X44 << 16);
    // 0x0041FAF0: addiu       $v1, $v1, -0x4958
    ctx->r3 = ADD32(ctx->r3, -0X4958);
L_0041FAF4:
    // 0x0041FAF4: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x0041FAF8: addiu       $a0, $a0, -0x61D4
    ctx->r4 = ADD32(ctx->r4, -0X61D4);
    // 0x0041FAFC: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    // 0x0041FB00: lw          $a2, 0x1C($s6)
    ctx->r6 = MEM_W(ctx->r22, 0X1C);
    // 0x0041FB04: lw          $a3, 0x20($s6)
    ctx->r7 = MEM_W(ctx->r22, 0X20);
    // 0x0041FB08: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x0041FB0C: addiu       $a1, $a1, -0x3DD0
    ctx->r5 = ADD32(ctx->r5, -0X3DD0);
    // 0x0041FB10: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0041FB14: sw          $s5, 0x988($at)
    MEM_W(0X988, ctx->r1) = ctx->r21;
    // 0x0041FB18: jal         0x00416644
    // 0x0041FB1C: nop

    func_00416644(rdram, ctx);
        goto after_0;
    // 0x0041FB1C: nop

    after_0:
    // 0x0041FB20: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0041FB24: lw          $ra, 0x70($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X70);
    // 0x0041FB28: lw          $s7, 0x6C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X6C);
    // 0x0041FB2C: lw          $s6, 0x68($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X68);
    // 0x0041FB30: lw          $s5, 0x64($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X64);
    // 0x0041FB34: lw          $s4, 0x60($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X60);
    // 0x0041FB38: lw          $s3, 0x5C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X5C);
    // 0x0041FB3C: lw          $s2, 0x58($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X58);
    // 0x0041FB40: lw          $s1, 0x54($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X54);
    // 0x0041FB44: lw          $s0, 0x50($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X50);
    // 0x0041FB48: jr          $ra
    // 0x0041FB4C: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
    return;
    // 0x0041FB4C: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
;}
RECOMP_FUNC void entry_0041FB54(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041FB54: sw          $s2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r18;
    // 0x0041FB58: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x0041FB5C: addu        $a0, $a1, $zero
    ctx->r4 = ADD32(ctx->r5, 0);
    // 0x0041FB60: sw          $s1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r17;
    // 0x0041FB64: addiu       $s1, $zero, 0x20
    ctx->r17 = ADD32(0, 0X20);
    // 0x0041FB68: sw          $ra, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r31;
    // 0x0041FB6C: sw          $s0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r16;
    // 0x0041FB70: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
    // 0x0041FB74: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x0041FB78: lw          $v1, 0x9BC($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X9BC);
    // 0x0041FB7C: addiu       $a1, $v0, -0x3
    ctx->r5 = ADD32(ctx->r2, -0X3);
    // 0x0041FB80: bne         $v1, $zero, L_0041FCDC
    if (ctx->r3 != 0) {
        // 0x0041FB84: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_0041FCDC;
    }
    // 0x0041FB84: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x0041FB88: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x0041FB8C: lw          $v0, 0x990($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X990);
    // 0x0041FB90: beq         $v0, $zero, L_0041FBA8
    if (ctx->r2 == 0) {
        // 0x0041FB94: addiu       $a2, $sp, 0x48
        ctx->r6 = ADD32(ctx->r29, 0X48);
            goto L_0041FBA8;
    }
    // 0x0041FB94: addiu       $a2, $sp, 0x48
    ctx->r6 = ADD32(ctx->r29, 0X48);
    // 0x0041FB98: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x0041FB9C: lw          $a0, 0x2028($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X2028);
    // 0x0041FBA0: j           L_0041FBB4
    // 0x0041FBA4: addiu       $v0, $sp, 0x30
    ctx->r2 = ADD32(ctx->r29, 0X30);
        goto L_0041FBB4;
    // 0x0041FBA4: addiu       $v0, $sp, 0x30
    ctx->r2 = ADD32(ctx->r29, 0X30);
L_0041FBA8:
    // 0x0041FBA8: lw          $v0, 0x20($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X20);
    // 0x0041FBAC: lb          $a0, 0x4($v0)
    ctx->r4 = MEM_B(ctx->r2, 0X4);
    // 0x0041FBB0: addiu       $v0, $sp, 0x30
    ctx->r2 = ADD32(ctx->r29, 0X30);
L_0041FBB4:
    // 0x0041FBB4: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x0041FBB8: addiu       $v0, $sp, 0x4C
    ctx->r2 = ADD32(ctx->r29, 0X4C);
    // 0x0041FBBC: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x0041FBC0: addiu       $v0, $sp, 0x38
    ctx->r2 = ADD32(ctx->r29, 0X38);
    // 0x0041FBC4: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x0041FBC8: addiu       $v0, $sp, 0x40
    ctx->r2 = ADD32(ctx->r29, 0X40);
    // 0x0041FBCC: addiu       $a3, $sp, 0x20
    ctx->r7 = ADD32(ctx->r29, 0X20);
    // 0x0041FBD0: jal         0x00425E74
    // 0x0041FBD4: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    func_00425E74(rdram, ctx);
        goto after_0;
    // 0x0041FBD4: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    after_0:
    // 0x0041FBD8: lw          $v1, 0x48($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X48);
    // 0x0041FBDC: beq         $v1, $zero, L_0041FC14
    if (ctx->r3 == 0) {
        // 0x0041FBE0: addiu       $a0, $sp, 0x20
        ctx->r4 = ADD32(ctx->r29, 0X20);
            goto L_0041FC14;
    }
    // 0x0041FBE0: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    // 0x0041FBE4: bne         $v0, $zero, L_0041FC14
    if (ctx->r2 != 0) {
        // 0x0041FBE8: nop
    
            goto L_0041FC14;
    }
    // 0x0041FBE8: nop

    // 0x0041FBEC: jal         0x00426E3C
    // 0x0041FBF0: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    func_00426E3C(rdram, ctx);
        goto after_1;
    // 0x0041FBF0: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    after_1:
    // 0x0041FBF4: beq         $v0, $zero, L_0041FC34
    if (ctx->r2 == 0) {
        // 0x0041FBF8: nop
    
            goto L_0041FC34;
    }
    // 0x0041FBF8: nop

    // 0x0041FBFC: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x0041FC00: addiu       $a1, $a1, 0x48D4
    ctx->r5 = ADD32(ctx->r5, 0X48D4);
    // 0x0041FC04: jal         0x00426E04
    // 0x0041FC08: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    func_00426E04(rdram, ctx);
        goto after_2;
    // 0x0041FC08: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    after_2:
    // 0x0041FC0C: j           L_0041FC34
    // 0x0041FC10: nop

        goto L_0041FC34;
    // 0x0041FC10: nop

L_0041FC14:
    // 0x0041FC14: lui         $s0, 0x800B
    ctx->r16 = S32(0X800B << 16);
    // 0x0041FC18: addiu       $s0, $s0, 0x48E0
    ctx->r16 = ADD32(ctx->r16, 0X48E0);
    // 0x0041FC1C: jal         0x00426E04
    // 0x0041FC20: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_00426E04(rdram, ctx);
        goto after_3;
    // 0x0041FC20: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_3:
    // 0x0041FC24: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    // 0x0041FC28: jal         0x00426E04
    // 0x0041FC2C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_00426E04(rdram, ctx);
        goto after_4;
    // 0x0041FC2C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_4:
    // 0x0041FC30: sw          $zero, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = 0;
L_0041FC34:
    // 0x0041FC34: lw          $a0, 0x14($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X14);
    // 0x0041FC38: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x0041FC3C: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
    // 0x0041FC40: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    // 0x0041FC44: addiu       $a0, $a0, 0x3
    ctx->r4 = ADD32(ctx->r4, 0X3);
L_0041FC48:
    // 0x0041FC48: beq         $a1, $zero, L_0041FC54
    if (ctx->r5 == 0) {
        // 0x0041FC4C: addu        $v0, $a2, $v1
        ctx->r2 = ADD32(ctx->r6, ctx->r3);
            goto L_0041FC54;
    }
    // 0x0041FC4C: addu        $v0, $a2, $v1
    ctx->r2 = ADD32(ctx->r6, ctx->r3);
    // 0x0041FC50: lbu         $s1, 0x0($v0)
    ctx->r17 = MEM_BU(ctx->r2, 0X0);
L_0041FC54:
    // 0x0041FC54: bnel        $s1, $zero, L_0041FC68
    if (ctx->r17 != 0) {
        // 0x0041FC58: sb          $s1, 0x0($a0)
        MEM_B(0X0, ctx->r4) = ctx->r17;
            goto L_0041FC68;
    }
    goto skip_0;
    // 0x0041FC58: sb          $s1, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r17;
    skip_0:
    // 0x0041FC5C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x0041FC60: addiu       $s1, $zero, 0x20
    ctx->r17 = ADD32(0, 0X20);
    // 0x0041FC64: sb          $s1, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r17;
L_0041FC68:
    // 0x0041FC68: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x0041FC6C: slti        $v0, $v1, 0x10
    ctx->r2 = SIGNED(ctx->r3) < 0X10 ? 1 : 0;
    // 0x0041FC70: bne         $v0, $zero, L_0041FC48
    if (ctx->r2 != 0) {
        // 0x0041FC74: addiu       $a0, $a0, 0x1
        ctx->r4 = ADD32(ctx->r4, 0X1);
            goto L_0041FC48;
    }
    // 0x0041FC74: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x0041FC78: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x0041FC7C: addu        $a0, $a0, $a1
    ctx->r4 = ADD32(ctx->r4, ctx->r5);
    // 0x0041FC80: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
    // 0x0041FC84: addiu       $a2, $sp, 0x30
    ctx->r6 = ADD32(ctx->r29, 0X30);
L_0041FC88:
    // 0x0041FC88: beq         $a1, $zero, L_0041FC94
    if (ctx->r5 == 0) {
        // 0x0041FC8C: addu        $v0, $a2, $v1
        ctx->r2 = ADD32(ctx->r6, ctx->r3);
            goto L_0041FC94;
    }
    // 0x0041FC8C: addu        $v0, $a2, $v1
    ctx->r2 = ADD32(ctx->r6, ctx->r3);
    // 0x0041FC90: lbu         $s1, 0x0($v0)
    ctx->r17 = MEM_BU(ctx->r2, 0X0);
L_0041FC94:
    // 0x0041FC94: bnel        $s1, $zero, L_0041FCA8
    if (ctx->r17 != 0) {
        // 0x0041FC98: sb          $s1, 0x0($a0)
        MEM_B(0X0, ctx->r4) = ctx->r17;
            goto L_0041FCA8;
    }
    goto skip_1;
    // 0x0041FC98: sb          $s1, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r17;
    skip_1:
    // 0x0041FC9C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x0041FCA0: addiu       $s1, $zero, 0x20
    ctx->r17 = ADD32(0, 0X20);
    // 0x0041FCA4: sb          $s1, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r17;
L_0041FCA8:
    // 0x0041FCA8: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x0041FCAC: slti        $v0, $v1, 0x4
    ctx->r2 = SIGNED(ctx->r3) < 0X4 ? 1 : 0;
    // 0x0041FCB0: bne         $v0, $zero, L_0041FC88
    if (ctx->r2 != 0) {
        // 0x0041FCB4: addiu       $a0, $a0, 0x1
        ctx->r4 = ADD32(ctx->r4, 0X1);
            goto L_0041FC88;
    }
    // 0x0041FCB4: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x0041FCB8: lbu         $v0, 0x0($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X0);
    // 0x0041FCBC: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
    // 0x0041FCC0: sb          $v0, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r2;
    // 0x0041FCC4: lw          $a2, 0x4C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X4C);
    // 0x0041FCC8: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x0041FCCC: addiu       $a1, $a1, 0x1404
    ctx->r5 = ADD32(ctx->r5, 0X1404);
    // 0x0041FCD0: jal         0x0029E3E0
    // 0x0041FCD4: nop

    func_0029E3E0(rdram, ctx);
        goto after_5;
    // 0x0041FCD4: nop

    after_5:
    // 0x0041FCD8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_0041FCDC:
    // 0x0041FCDC: lw          $ra, 0x5C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X5C);
    // 0x0041FCE0: lw          $s2, 0x58($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X58);
    // 0x0041FCE4: lw          $s1, 0x54($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X54);
    // 0x0041FCE8: lw          $s0, 0x50($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X50);
    // 0x0041FCEC: jr          $ra
    // 0x0041FCF0: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    return;
    // 0x0041FCF0: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
;}
RECOMP_FUNC void entry_0041FC54(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_0041FC48:
    // 0x0041FC54: bnel        $s1, $zero, L_0041FC68
    if (ctx->r17 != 0) {
        // 0x0041FC58: sb          $s1, 0x0($a0)
        MEM_B(0X0, ctx->r4) = ctx->r17;
            goto L_0041FC68;
    }
    goto skip_0;
    // 0x0041FC58: sb          $s1, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r17;
    skip_0:
    // 0x0041FC5C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x0041FC60: addiu       $s1, $zero, 0x20
    ctx->r17 = ADD32(0, 0X20);
    // 0x0041FC64: sb          $s1, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r17;
L_0041FC68:
    // 0x0041FC68: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x0041FC6C: slti        $v0, $v1, 0x10
    ctx->r2 = SIGNED(ctx->r3) < 0X10 ? 1 : 0;
    // 0x0041FC70: bne         $v0, $zero, L_0041FC48
    if (ctx->r2 != 0) {
        // 0x0041FC74: addiu       $a0, $a0, 0x1
        ctx->r4 = ADD32(ctx->r4, 0X1);
            goto L_0041FC48;
    }
    // 0x0041FC74: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x0041FC78: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x0041FC7C: addu        $a0, $a0, $a1
    ctx->r4 = ADD32(ctx->r4, ctx->r5);
    // 0x0041FC80: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
    // 0x0041FC84: addiu       $a2, $sp, 0x30
    ctx->r6 = ADD32(ctx->r29, 0X30);
L_0041FC88:
    // 0x0041FC88: beq         $a1, $zero, L_0041FC94
    if (ctx->r5 == 0) {
        // 0x0041FC8C: addu        $v0, $a2, $v1
        ctx->r2 = ADD32(ctx->r6, ctx->r3);
            goto L_0041FC94;
    }
    // 0x0041FC8C: addu        $v0, $a2, $v1
    ctx->r2 = ADD32(ctx->r6, ctx->r3);
    // 0x0041FC90: lbu         $s1, 0x0($v0)
    ctx->r17 = MEM_BU(ctx->r2, 0X0);
L_0041FC94:
    // 0x0041FC94: bnel        $s1, $zero, L_0041FCA8
    if (ctx->r17 != 0) {
        // 0x0041FC98: sb          $s1, 0x0($a0)
        MEM_B(0X0, ctx->r4) = ctx->r17;
            goto L_0041FCA8;
    }
    goto skip_1;
    // 0x0041FC98: sb          $s1, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r17;
    skip_1:
    // 0x0041FC9C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x0041FCA0: addiu       $s1, $zero, 0x20
    ctx->r17 = ADD32(0, 0X20);
    // 0x0041FCA4: sb          $s1, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r17;
L_0041FCA8:
    // 0x0041FCA8: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x0041FCAC: slti        $v0, $v1, 0x4
    ctx->r2 = SIGNED(ctx->r3) < 0X4 ? 1 : 0;
    // 0x0041FCB0: bne         $v0, $zero, L_0041FC88
    if (ctx->r2 != 0) {
        // 0x0041FCB4: addiu       $a0, $a0, 0x1
        ctx->r4 = ADD32(ctx->r4, 0X1);
            goto L_0041FC88;
    }
    // 0x0041FCB4: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x0041FCB8: lbu         $v0, 0x0($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X0);
    // 0x0041FCBC: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
    // 0x0041FCC0: sb          $v0, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r2;
    // 0x0041FCC4: lw          $a2, 0x4C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X4C);
    // 0x0041FCC8: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x0041FCCC: addiu       $a1, $a1, 0x1404
    ctx->r5 = ADD32(ctx->r5, 0X1404);
    // 0x0041FCD0: jal         0x0029E3E0
    // 0x0041FCD4: nop

    func_0029E3E0(rdram, ctx);
        goto after_0;
    // 0x0041FCD4: nop

    after_0:
    // 0x0041FCD8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x0041FCDC: lw          $ra, 0x5C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X5C);
    // 0x0041FCE0: lw          $s2, 0x58($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X58);
    // 0x0041FCE4: lw          $s1, 0x54($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X54);
    // 0x0041FCE8: lw          $s0, 0x50($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X50);
    // 0x0041FCEC: jr          $ra
    // 0x0041FCF0: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    return;
    // 0x0041FCF0: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
;}
RECOMP_FUNC void entry_0041FD20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041FD20: lw          $a0, 0x2028($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X2028);
    // 0x0041FD24: j           L_0041FD34
    // 0x0041FD28: nop

        goto L_0041FD34;
    // 0x0041FD28: nop

    // 0x0041FD2C: lw          $v0, 0x20($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X20);
    // 0x0041FD30: lb          $a0, 0x4($v0)
    ctx->r4 = MEM_B(ctx->r2, 0X4);
L_0041FD34:
    // 0x0041FD34: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x0041FD38: lw          $v0, 0x984($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X984);
    // 0x0041FD3C: lui         $t1, 0x800C
    ctx->r9 = S32(0X800C << 16);
    // 0x0041FD40: addiu       $t1, $t1, 0x1408
    ctx->r9 = ADD32(ctx->r9, 0X1408);
    // 0x0041FD44: lwl         $v1, 0x0($t1)
    ctx->r3 = do_lwl(rdram, ctx->r3, ctx->r9, 0X0);
    // 0x0041FD48: lwr         $v1, 0x3($t1)
    ctx->r3 = do_lwr(rdram, ctx->r3, ctx->r9, 0X3);
    // 0x0041FD4C: swl         $v1, 0x10($sp)
    do_swl(rdram, 0X10, ctx->r29, ctx->r3);
    // 0x0041FD50: swr         $v1, 0x13($sp)
    do_swr(rdram, 0X13, ctx->r29, ctx->r3);
    // 0x0041FD54: beq         $v0, $zero, L_0041FDC8
    if (ctx->r2 == 0) {
        // 0x0041FD58: addiu       $s3, $sp, 0x10
        ctx->r19 = ADD32(ctx->r29, 0X10);
            goto L_0041FDC8;
    }
    // 0x0041FD58: addiu       $s3, $sp, 0x10
    ctx->r19 = ADD32(ctx->r29, 0X10);
    // 0x0041FD5C: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0041FD60: addiu       $v0, $v0, 0x48B4
    ctx->r2 = ADD32(ctx->r2, 0X48B4);
    // 0x0041FD64: sw          $v0, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r2;
    // 0x0041FD68: jal         0x004267A0
    // 0x0041FD6C: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    func_004267A0(rdram, ctx);
        goto after_0;
    // 0x0041FD6C: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    after_0:
    // 0x0041FD70: bne         $v0, $zero, L_0041FEA4
    if (ctx->r2 != 0) {
        // 0x0041FD74: nop
    
            goto L_0041FEA4;
    }
    // 0x0041FD74: nop

    // 0x0041FD78: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x0041FD7C: lw          $v0, 0x9B4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X9B4);
    // 0x0041FD80: bne         $v0, $zero, L_0041FD94
    if (ctx->r2 != 0) {
        // 0x0041FD84: addiu       $a0, $zero, 0x18
        ctx->r4 = ADD32(0, 0X18);
            goto L_0041FD94;
    }
    // 0x0041FD84: addiu       $a0, $zero, 0x18
    ctx->r4 = ADD32(0, 0X18);
    // 0x0041FD88: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x0041FD8C: lw          $a0, 0x70A8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X70A8);
    // 0x0041FD90: addiu       $a0, $a0, 0x688
    ctx->r4 = ADD32(ctx->r4, 0X688);
L_0041FD94:
    // 0x0041FD94: jal         0x00426E6C
    // 0x0041FD98: nop

    func_00426E6C(rdram, ctx);
        goto after_1;
    // 0x0041FD98: nop

    after_1:
    // 0x0041FD9C: addu        $s2, $v0, $zero
    ctx->r18 = ADD32(ctx->r2, 0);
    // 0x0041FDA0: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x0041FDA4: lui         $s0, 0x800C
    ctx->r16 = S32(0X800C << 16);
    // 0x0041FDA8: addiu       $s0, $s0, 0x1404
    ctx->r16 = ADD32(ctx->r16, 0X1404);
    // 0x0041FDAC: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x0041FDB0: lw          $s1, 0x14($s1)
    ctx->r17 = MEM_W(ctx->r17, 0X14);
    // 0x0041FDB4: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x0041FDB8: jal         0x0029E3E0
    // 0x0041FDBC: addiu       $s1, $s1, 0xC
    ctx->r17 = ADD32(ctx->r17, 0XC);
    func_0029E3E0(rdram, ctx);
        goto after_2;
    // 0x0041FDBC: addiu       $s1, $s1, 0xC
    ctx->r17 = ADD32(ctx->r17, 0XC);
    after_2:
    // 0x0041FDC0: j           L_0041FE48
    // 0x0041FDC4: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
        goto L_0041FE48;
    // 0x0041FDC4: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
L_0041FDC8:
    // 0x0041FDC8: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x0041FDCC: lw          $v0, 0x990($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X990);
    // 0x0041FDD0: beq         $v0, $zero, L_0041FDE8
    if (ctx->r2 == 0) {
        // 0x0041FDD4: addiu       $a1, $sp, 0x18
        ctx->r5 = ADD32(ctx->r29, 0X18);
            goto L_0041FDE8;
    }
    // 0x0041FDD4: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    // 0x0041FDD8: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0041FDDC: addiu       $v0, $v0, 0x4914
    ctx->r2 = ADD32(ctx->r2, 0X4914);
    // 0x0041FDE0: j           L_0041FE00
    // 0x0041FDE4: nop

        goto L_0041FE00;
    // 0x0041FDE4: nop

L_0041FDE8:
    // 0x0041FDE8: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x0041FDEC: lw          $v0, 0x994($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X994);
    // 0x0041FDF0: beq         $v0, $zero, L_0041FE98
    if (ctx->r2 == 0) {
        // 0x0041FDF4: nop
    
            goto L_0041FE98;
    }
    // 0x0041FDF4: nop

    // 0x0041FDF8: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0041FDFC: addiu       $v0, $v0, 0x48B4
    ctx->r2 = ADD32(ctx->r2, 0X48B4);
L_0041FE00:
    // 0x0041FE00: jal         0x004267A0
    // 0x0041FE04: sw          $v0, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r2;
    func_004267A0(rdram, ctx);
        goto after_3;
    // 0x0041FE04: sw          $v0, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r2;
    after_3:
    // 0x0041FE08: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x0041FE0C: lw          $a0, 0x70A8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X70A8);
    // 0x0041FE10: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x0041FE14: jal         0x00426E6C
    // 0x0041FE18: addiu       $a0, $a0, 0x688
    ctx->r4 = ADD32(ctx->r4, 0X688);
    func_00426E6C(rdram, ctx);
        goto after_4;
    // 0x0041FE18: addiu       $a0, $a0, 0x688
    ctx->r4 = ADD32(ctx->r4, 0X688);
    after_4:
    // 0x0041FE1C: lw          $s1, 0x14($s1)
    ctx->r17 = MEM_W(ctx->r17, 0X14);
    // 0x0041FE20: bne         $s0, $zero, L_0041FEA4
    if (ctx->r16 != 0) {
        // 0x0041FE24: addu        $s2, $v0, $zero
        ctx->r18 = ADD32(ctx->r2, 0);
            goto L_0041FEA4;
    }
    // 0x0041FE24: addu        $s2, $v0, $zero
    ctx->r18 = ADD32(ctx->r2, 0);
    // 0x0041FE28: addiu       $s1, $s1, 0xC
    ctx->r17 = ADD32(ctx->r17, 0XC);
    // 0x0041FE2C: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x0041FE30: lui         $s0, 0x800C
    ctx->r16 = S32(0X800C << 16);
    // 0x0041FE34: addiu       $s0, $s0, 0x1404
    ctx->r16 = ADD32(ctx->r16, 0X1404);
    // 0x0041FE38: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x0041FE3C: jal         0x0029E3E0
    // 0x0041FE40: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_0029E3E0(rdram, ctx);
        goto after_5;
    // 0x0041FE40: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_5:
    // 0x0041FE44: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
L_0041FE48:
    // 0x0041FE48: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x0041FE4C: lbu         $v0, 0x10($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0X10);
    // 0x0041FE50: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    // 0x0041FE54: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    // 0x0041FE58: lbu         $v0, 0x11($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0X11);
    // 0x0041FE5C: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x0041FE60: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    // 0x0041FE64: lbu         $v0, 0x12($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0X12);
    // 0x0041FE68: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x0041FE6C: jal         0x0029E3E0
    // 0x0041FE70: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    func_0029E3E0(rdram, ctx);
        goto after_6;
    // 0x0041FE70: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    after_6:
    // 0x0041FE74: lbu         $v0, 0x10($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0X10);
    // 0x0041FE78: addiu       $s1, $s1, 0xC
    ctx->r17 = ADD32(ctx->r17, 0XC);
    // 0x0041FE7C: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    // 0x0041FE80: lbu         $v0, 0x11($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0X11);
    // 0x0041FE84: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x0041FE88: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    // 0x0041FE8C: lbu         $v0, 0x12($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0X12);
    // 0x0041FE90: j           L_0041FEA4
    // 0x0041FE94: sb          $v0, 0x1($s1)
    MEM_B(0X1, ctx->r17) = ctx->r2;
        goto L_0041FEA4;
    // 0x0041FE94: sb          $v0, 0x1($s1)
    MEM_B(0X1, ctx->r17) = ctx->r2;
L_0041FE98:
    // 0x0041FE98: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x0041FE9C: addiu       $v0, $v0, 0x140C
    ctx->r2 = ADD32(ctx->r2, 0X140C);
    // 0x0041FEA0: sw          $v0, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r2;
L_0041FEA4:
    // 0x0041FEA4: lw          $ra, 0x30($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X30);
    // 0x0041FEA8: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x0041FEAC: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x0041FEB0: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x0041FEB4: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x0041FEB8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x0041FEBC: jr          $ra
    // 0x0041FEC0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x0041FEC0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void entry_0041FD68(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041FD68: jal         0x004267A0
    // 0x0041FD6C: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    func_004267A0(rdram, ctx);
        goto after_0;
    // 0x0041FD6C: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    after_0:
    // 0x0041FD70: bne         $v0, $zero, L_0041FEA4
    if (ctx->r2 != 0) {
        // 0x0041FD74: nop
    
            goto L_0041FEA4;
    }
    // 0x0041FD74: nop

    // 0x0041FD78: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x0041FD7C: lw          $v0, 0x9B4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X9B4);
    // 0x0041FD80: bne         $v0, $zero, L_0041FD94
    if (ctx->r2 != 0) {
        // 0x0041FD84: addiu       $a0, $zero, 0x18
        ctx->r4 = ADD32(0, 0X18);
            goto L_0041FD94;
    }
    // 0x0041FD84: addiu       $a0, $zero, 0x18
    ctx->r4 = ADD32(0, 0X18);
    // 0x0041FD88: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x0041FD8C: lw          $a0, 0x70A8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X70A8);
    // 0x0041FD90: addiu       $a0, $a0, 0x688
    ctx->r4 = ADD32(ctx->r4, 0X688);
L_0041FD94:
    // 0x0041FD94: jal         0x00426E6C
    // 0x0041FD98: nop

    func_00426E6C(rdram, ctx);
        goto after_1;
    // 0x0041FD98: nop

    after_1:
    // 0x0041FD9C: addu        $s2, $v0, $zero
    ctx->r18 = ADD32(ctx->r2, 0);
    // 0x0041FDA0: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x0041FDA4: lui         $s0, 0x800C
    ctx->r16 = S32(0X800C << 16);
    // 0x0041FDA8: addiu       $s0, $s0, 0x1404
    ctx->r16 = ADD32(ctx->r16, 0X1404);
    // 0x0041FDAC: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x0041FDB0: lw          $s1, 0x14($s1)
    ctx->r17 = MEM_W(ctx->r17, 0X14);
    // 0x0041FDB4: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x0041FDB8: jal         0x0029E3E0
    // 0x0041FDBC: addiu       $s1, $s1, 0xC
    ctx->r17 = ADD32(ctx->r17, 0XC);
    func_0029E3E0(rdram, ctx);
        goto after_2;
    // 0x0041FDBC: addiu       $s1, $s1, 0xC
    ctx->r17 = ADD32(ctx->r17, 0XC);
    after_2:
    // 0x0041FDC0: j           L_0041FE48
    // 0x0041FDC4: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
        goto L_0041FE48;
    // 0x0041FDC4: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x0041FDC8: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x0041FDCC: lw          $v0, 0x990($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X990);
    // 0x0041FDD0: beq         $v0, $zero, L_0041FDE8
    if (ctx->r2 == 0) {
        // 0x0041FDD4: addiu       $a1, $sp, 0x18
        ctx->r5 = ADD32(ctx->r29, 0X18);
            goto L_0041FDE8;
    }
    // 0x0041FDD4: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    // 0x0041FDD8: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0041FDDC: addiu       $v0, $v0, 0x4914
    ctx->r2 = ADD32(ctx->r2, 0X4914);
    // 0x0041FDE0: j           L_0041FE00
    // 0x0041FDE4: nop

        goto L_0041FE00;
    // 0x0041FDE4: nop

L_0041FDE8:
    // 0x0041FDE8: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x0041FDEC: lw          $v0, 0x994($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X994);
    // 0x0041FDF0: beq         $v0, $zero, L_0041FE98
    if (ctx->r2 == 0) {
        // 0x0041FDF4: nop
    
            goto L_0041FE98;
    }
    // 0x0041FDF4: nop

    // 0x0041FDF8: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0041FDFC: addiu       $v0, $v0, 0x48B4
    ctx->r2 = ADD32(ctx->r2, 0X48B4);
L_0041FE00:
    // 0x0041FE00: jal         0x004267A0
    // 0x0041FE04: sw          $v0, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r2;
    func_004267A0(rdram, ctx);
        goto after_3;
    // 0x0041FE04: sw          $v0, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r2;
    after_3:
    // 0x0041FE08: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x0041FE0C: lw          $a0, 0x70A8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X70A8);
    // 0x0041FE10: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x0041FE14: jal         0x00426E6C
    // 0x0041FE18: addiu       $a0, $a0, 0x688
    ctx->r4 = ADD32(ctx->r4, 0X688);
    func_00426E6C(rdram, ctx);
        goto after_4;
    // 0x0041FE18: addiu       $a0, $a0, 0x688
    ctx->r4 = ADD32(ctx->r4, 0X688);
    after_4:
    // 0x0041FE1C: lw          $s1, 0x14($s1)
    ctx->r17 = MEM_W(ctx->r17, 0X14);
    // 0x0041FE20: bne         $s0, $zero, L_0041FEA4
    if (ctx->r16 != 0) {
        // 0x0041FE24: addu        $s2, $v0, $zero
        ctx->r18 = ADD32(ctx->r2, 0);
            goto L_0041FEA4;
    }
    // 0x0041FE24: addu        $s2, $v0, $zero
    ctx->r18 = ADD32(ctx->r2, 0);
    // 0x0041FE28: addiu       $s1, $s1, 0xC
    ctx->r17 = ADD32(ctx->r17, 0XC);
    // 0x0041FE2C: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x0041FE30: lui         $s0, 0x800C
    ctx->r16 = S32(0X800C << 16);
    // 0x0041FE34: addiu       $s0, $s0, 0x1404
    ctx->r16 = ADD32(ctx->r16, 0X1404);
    // 0x0041FE38: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x0041FE3C: jal         0x0029E3E0
    // 0x0041FE40: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_0029E3E0(rdram, ctx);
        goto after_5;
    // 0x0041FE40: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_5:
    // 0x0041FE44: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
L_0041FE48:
    // 0x0041FE48: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x0041FE4C: lbu         $v0, 0x10($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0X10);
    // 0x0041FE50: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    // 0x0041FE54: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    // 0x0041FE58: lbu         $v0, 0x11($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0X11);
    // 0x0041FE5C: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x0041FE60: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    // 0x0041FE64: lbu         $v0, 0x12($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0X12);
    // 0x0041FE68: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x0041FE6C: jal         0x0029E3E0
    // 0x0041FE70: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    func_0029E3E0(rdram, ctx);
        goto after_6;
    // 0x0041FE70: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    after_6:
    // 0x0041FE74: lbu         $v0, 0x10($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0X10);
    // 0x0041FE78: addiu       $s1, $s1, 0xC
    ctx->r17 = ADD32(ctx->r17, 0XC);
    // 0x0041FE7C: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    // 0x0041FE80: lbu         $v0, 0x11($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0X11);
    // 0x0041FE84: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x0041FE88: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    // 0x0041FE8C: lbu         $v0, 0x12($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0X12);
    // 0x0041FE90: j           L_0041FEA4
    // 0x0041FE94: sb          $v0, 0x1($s1)
    MEM_B(0X1, ctx->r17) = ctx->r2;
        goto L_0041FEA4;
    // 0x0041FE94: sb          $v0, 0x1($s1)
    MEM_B(0X1, ctx->r17) = ctx->r2;
L_0041FE98:
    // 0x0041FE98: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x0041FE9C: addiu       $v0, $v0, 0x140C
    ctx->r2 = ADD32(ctx->r2, 0X140C);
    // 0x0041FEA0: sw          $v0, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r2;
L_0041FEA4:
    // 0x0041FEA4: lw          $ra, 0x30($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X30);
    // 0x0041FEA8: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x0041FEAC: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x0041FEB0: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x0041FEB4: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x0041FEB8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x0041FEBC: jr          $ra
    // 0x0041FEC0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x0041FEC0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void entry_0041FDC4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041FDC4: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x0041FDC8: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x0041FDCC: lw          $v0, 0x990($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X990);
    // 0x0041FDD0: beq         $v0, $zero, L_0041FDE8
    if (ctx->r2 == 0) {
        // 0x0041FDD4: addiu       $a1, $sp, 0x18
        ctx->r5 = ADD32(ctx->r29, 0X18);
            goto L_0041FDE8;
    }
    // 0x0041FDD4: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    // 0x0041FDD8: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0041FDDC: addiu       $v0, $v0, 0x4914
    ctx->r2 = ADD32(ctx->r2, 0X4914);
    // 0x0041FDE0: j           L_0041FE00
    // 0x0041FDE4: nop

        goto L_0041FE00;
    // 0x0041FDE4: nop

L_0041FDE8:
    // 0x0041FDE8: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x0041FDEC: lw          $v0, 0x994($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X994);
    // 0x0041FDF0: beq         $v0, $zero, L_0041FE98
    if (ctx->r2 == 0) {
        // 0x0041FDF4: nop
    
            goto L_0041FE98;
    }
    // 0x0041FDF4: nop

    // 0x0041FDF8: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0041FDFC: addiu       $v0, $v0, 0x48B4
    ctx->r2 = ADD32(ctx->r2, 0X48B4);
L_0041FE00:
    // 0x0041FE00: jal         0x004267A0
    // 0x0041FE04: sw          $v0, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r2;
    func_004267A0(rdram, ctx);
        goto after_0;
    // 0x0041FE04: sw          $v0, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r2;
    after_0:
    // 0x0041FE08: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x0041FE0C: lw          $a0, 0x70A8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X70A8);
    // 0x0041FE10: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x0041FE14: jal         0x00426E6C
    // 0x0041FE18: addiu       $a0, $a0, 0x688
    ctx->r4 = ADD32(ctx->r4, 0X688);
    func_00426E6C(rdram, ctx);
        goto after_1;
    // 0x0041FE18: addiu       $a0, $a0, 0x688
    ctx->r4 = ADD32(ctx->r4, 0X688);
    after_1:
    // 0x0041FE1C: lw          $s1, 0x14($s1)
    ctx->r17 = MEM_W(ctx->r17, 0X14);
    // 0x0041FE20: bne         $s0, $zero, L_0041FEA4
    if (ctx->r16 != 0) {
        // 0x0041FE24: addu        $s2, $v0, $zero
        ctx->r18 = ADD32(ctx->r2, 0);
            goto L_0041FEA4;
    }
    // 0x0041FE24: addu        $s2, $v0, $zero
    ctx->r18 = ADD32(ctx->r2, 0);
    // 0x0041FE28: addiu       $s1, $s1, 0xC
    ctx->r17 = ADD32(ctx->r17, 0XC);
    // 0x0041FE2C: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x0041FE30: lui         $s0, 0x800C
    ctx->r16 = S32(0X800C << 16);
    // 0x0041FE34: addiu       $s0, $s0, 0x1404
    ctx->r16 = ADD32(ctx->r16, 0X1404);
    // 0x0041FE38: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x0041FE3C: jal         0x0029E3E0
    // 0x0041FE40: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_0029E3E0(rdram, ctx);
        goto after_2;
    // 0x0041FE40: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_2:
    // 0x0041FE44: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x0041FE48: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x0041FE4C: lbu         $v0, 0x10($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0X10);
    // 0x0041FE50: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    // 0x0041FE54: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    // 0x0041FE58: lbu         $v0, 0x11($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0X11);
    // 0x0041FE5C: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x0041FE60: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    // 0x0041FE64: lbu         $v0, 0x12($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0X12);
    // 0x0041FE68: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x0041FE6C: jal         0x0029E3E0
    // 0x0041FE70: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    func_0029E3E0(rdram, ctx);
        goto after_3;
    // 0x0041FE70: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    after_3:
    // 0x0041FE74: lbu         $v0, 0x10($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0X10);
    // 0x0041FE78: addiu       $s1, $s1, 0xC
    ctx->r17 = ADD32(ctx->r17, 0XC);
    // 0x0041FE7C: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    // 0x0041FE80: lbu         $v0, 0x11($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0X11);
    // 0x0041FE84: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x0041FE88: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    // 0x0041FE8C: lbu         $v0, 0x12($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0X12);
    // 0x0041FE90: j           L_0041FEA4
    // 0x0041FE94: sb          $v0, 0x1($s1)
    MEM_B(0X1, ctx->r17) = ctx->r2;
        goto L_0041FEA4;
    // 0x0041FE94: sb          $v0, 0x1($s1)
    MEM_B(0X1, ctx->r17) = ctx->r2;
L_0041FE98:
    // 0x0041FE98: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x0041FE9C: addiu       $v0, $v0, 0x140C
    ctx->r2 = ADD32(ctx->r2, 0X140C);
    // 0x0041FEA0: sw          $v0, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r2;
L_0041FEA4:
    // 0x0041FEA4: lw          $ra, 0x30($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X30);
    // 0x0041FEA8: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x0041FEAC: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x0041FEB0: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x0041FEB4: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x0041FEB8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x0041FEBC: jr          $ra
    // 0x0041FEC0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x0041FEC0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void entry_0041FE4C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041FE4C: lbu         $v0, 0x10($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0X10);
    // 0x0041FE50: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    // 0x0041FE54: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    // 0x0041FE58: lbu         $v0, 0x11($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0X11);
    // 0x0041FE5C: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x0041FE60: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    // 0x0041FE64: lbu         $v0, 0x12($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0X12);
    // 0x0041FE68: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x0041FE6C: jal         0x0029E3E0
    // 0x0041FE70: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    func_0029E3E0(rdram, ctx);
        goto after_0;
    // 0x0041FE70: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    after_0:
    // 0x0041FE74: lbu         $v0, 0x10($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0X10);
    // 0x0041FE78: addiu       $s1, $s1, 0xC
    ctx->r17 = ADD32(ctx->r17, 0XC);
    // 0x0041FE7C: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    // 0x0041FE80: lbu         $v0, 0x11($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0X11);
    // 0x0041FE84: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x0041FE88: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    // 0x0041FE8C: lbu         $v0, 0x12($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0X12);
    // 0x0041FE90: j           L_0041FEA4
    // 0x0041FE94: sb          $v0, 0x1($s1)
    MEM_B(0X1, ctx->r17) = ctx->r2;
        goto L_0041FEA4;
    // 0x0041FE94: sb          $v0, 0x1($s1)
    MEM_B(0X1, ctx->r17) = ctx->r2;
    // 0x0041FE98: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x0041FE9C: addiu       $v0, $v0, 0x140C
    ctx->r2 = ADD32(ctx->r2, 0X140C);
    // 0x0041FEA0: sw          $v0, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r2;
L_0041FEA4:
    // 0x0041FEA4: lw          $ra, 0x30($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X30);
    // 0x0041FEA8: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x0041FEAC: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x0041FEB0: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x0041FEB4: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x0041FEB8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x0041FEBC: jr          $ra
    // 0x0041FEC0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x0041FEC0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void entry_0041FE74(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041FE74: lbu         $v0, 0x10($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0X10);
    // 0x0041FE78: addiu       $s1, $s1, 0xC
    ctx->r17 = ADD32(ctx->r17, 0XC);
    // 0x0041FE7C: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    // 0x0041FE80: lbu         $v0, 0x11($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0X11);
    // 0x0041FE84: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x0041FE88: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    // 0x0041FE8C: lbu         $v0, 0x12($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0X12);
    // 0x0041FE90: j           L_0041FEA4
    // 0x0041FE94: sb          $v0, 0x1($s1)
    MEM_B(0X1, ctx->r17) = ctx->r2;
        goto L_0041FEA4;
    // 0x0041FE94: sb          $v0, 0x1($s1)
    MEM_B(0X1, ctx->r17) = ctx->r2;
    // 0x0041FE98: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x0041FE9C: addiu       $v0, $v0, 0x140C
    ctx->r2 = ADD32(ctx->r2, 0X140C);
    // 0x0041FEA0: sw          $v0, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r2;
L_0041FEA4:
    // 0x0041FEA4: lw          $ra, 0x30($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X30);
    // 0x0041FEA8: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x0041FEAC: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x0041FEB0: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x0041FEB4: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x0041FEB8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x0041FEBC: jr          $ra
    // 0x0041FEC0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x0041FEC0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void entry_0041FF3C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041FF3C: lui         $s1, 0x800C
    ctx->r17 = S32(0X800C << 16);
    // 0x0041FF40: lw          $s1, 0x2028($s1)
    ctx->r17 = MEM_W(ctx->r17, 0X2028);
    // 0x0041FF44: j           L_0041FF54
    // 0x0041FF48: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
        goto L_0041FF54;
    // 0x0041FF48: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x0041FF4C: lw          $s1, 0x28($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X28);
    // 0x0041FF50: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
L_0041FF54:
    // 0x0041FF54: jal         0x0041DD90
    // 0x0041FF58: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_0041DD90(rdram, ctx);
        goto after_0;
    // 0x0041FF58: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x0041FF5C: bne         $v0, $zero, L_0042015C
    if (ctx->r2 != 0) {
        // 0x0041FF60: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_0042015C;
    }
    // 0x0041FF60: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0041FF64: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x0041FF68: lw          $v0, 0x9B4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X9B4);
    // 0x0041FF6C: beq         $v0, $zero, L_0041FF98
    if (ctx->r2 == 0) {
        // 0x0041FF70: nop
    
            goto L_0041FF98;
    }
    // 0x0041FF70: nop

    // 0x0041FF74: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x0041FF78: lw          $v0, 0x984($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X984);
    // 0x0041FF7C: beq         $v0, $zero, L_00420084
    if (ctx->r2 == 0) {
        // 0x0041FF80: addu        $a0, $s4, $zero
        ctx->r4 = ADD32(ctx->r20, 0);
            goto L_00420084;
    }
    // 0x0041FF80: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    // 0x0041FF84: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x0041FF88: jal         0x0041EDE0
    // 0x0041FF8C: addu        $a2, $s5, $zero
    ctx->r6 = ADD32(ctx->r21, 0);
    func_0041EDE0(rdram, ctx);
        goto after_1;
    // 0x0041FF8C: addu        $a2, $s5, $zero
    ctx->r6 = ADD32(ctx->r21, 0);
    after_1:
    // 0x0041FF90: j           L_00420178
    // 0x0041FF94: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_00420178;
    // 0x0041FF94: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_0041FF98:
    // 0x0041FF98: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x0041FF9C: lw          $v0, 0x984($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X984);
    // 0x0041FFA0: beq         $v0, $zero, L_00420084
    if (ctx->r2 == 0) {
        // 0x0041FFA4: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_00420084;
    }
    // 0x0041FFA4: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x0041FFA8: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0041FFAC: sw          $v0, 0x9C4($at)
    MEM_W(0X9C4, ctx->r1) = ctx->r2;
    // 0x0041FFB0: lui         $s3, 0x8013
    ctx->r19 = S32(0X8013 << 16);
    // 0x0041FFB4: addiu       $s3, $s3, 0x9C4
    ctx->r19 = ADD32(ctx->r19, 0X9C4);
    // 0x0041FFB8: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x0041FFBC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
L_0041FFC0:
    // 0x0041FFC0: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x0041FFC4: jal         0x00426978
    // 0x0041FFC8: addiu       $a2, $sp, 0x2C
    ctx->r6 = ADD32(ctx->r29, 0X2C);
    func_00426978(rdram, ctx);
        goto after_2;
    // 0x0041FFC8: addiu       $a2, $sp, 0x2C
    ctx->r6 = ADD32(ctx->r29, 0X2C);
    after_2:
    // 0x0041FFCC: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x0041FFD0: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    // 0x0041FFD4: jal         0x00426C88
    // 0x0041FFD8: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    func_00426C88(rdram, ctx);
        goto after_3;
    // 0x0041FFD8: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_3:
    // 0x0041FFDC: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x0041FFE0: addiu       $a1, $a1, 0x45CC
    ctx->r5 = ADD32(ctx->r5, 0X45CC);
    // 0x0041FFE4: jal         0x00426D54
    // 0x0041FFE8: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    func_00426D54(rdram, ctx);
        goto after_4;
    // 0x0041FFE8: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    after_4:
    // 0x0041FFEC: bnel        $v0, $zero, L_0042000C
    if (ctx->r2 != 0) {
        // 0x0041FFF0: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_0042000C;
    }
    goto skip_0;
    // 0x0041FFF0: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    skip_0:
    // 0x0041FFF4: beq         $s3, $zero, L_0042001C
    if (ctx->r19 == 0) {
        // 0x0041FFF8: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_0042001C;
    }
    // 0x0041FFF8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0041FFFC: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x00420000: sw          $s0, 0x9C4($at)
    MEM_W(0X9C4, ctx->r1) = ctx->r16;
    // 0x00420004: j           L_0042001C
    // 0x00420008: nop

        goto L_0042001C;
    // 0x00420008: nop

L_0042000C:
    // 0x0042000C: slti        $v0, $s0, 0x10
    ctx->r2 = SIGNED(ctx->r16) < 0X10 ? 1 : 0;
    // 0x00420010: bne         $v0, $zero, L_0041FFC0
    if (ctx->r2 != 0) {
        // 0x00420014: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_0041FFC0;
    }
    // 0x00420014: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x00420018: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_0042001C:
    // 0x0042001C: beq         $v0, $zero, L_00420070
    if (ctx->r2 == 0) {
        // 0x00420020: addu        $a0, $s4, $zero
        ctx->r4 = ADD32(ctx->r20, 0);
            goto L_00420070;
    }
    // 0x00420020: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    // 0x00420024: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x00420028: lw          $v0, 0x9C4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X9C4);
    // 0x0042002C: bltz        $v0, L_00420070
    if (SIGNED(ctx->r2) < 0) {
        // 0x00420030: slti        $v0, $v0, 0x10
        ctx->r2 = SIGNED(ctx->r2) < 0X10 ? 1 : 0;
            goto L_00420070;
    }
    // 0x00420030: slti        $v0, $v0, 0x10
    ctx->r2 = SIGNED(ctx->r2) < 0X10 ? 1 : 0;
    // 0x00420034: beq         $v0, $zero, L_00420074
    if (ctx->r2 == 0) {
        // 0x00420038: addu        $a1, $s2, $zero
        ctx->r5 = ADD32(ctx->r18, 0);
            goto L_00420074;
    }
    // 0x00420038: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x0042003C: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x00420040: addiu       $a0, $a0, -0x61D4
    ctx->r4 = ADD32(ctx->r4, -0X61D4);
    // 0x00420044: lui         $v0, 0x44
    ctx->r2 = S32(0X44 << 16);
    // 0x00420048: addiu       $v0, $v0, -0x48EC
    ctx->r2 = ADD32(ctx->r2, -0X48EC);
    // 0x0042004C: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x00420050: lw          $a2, 0x1C($s2)
    ctx->r6 = MEM_W(ctx->r18, 0X1C);
    // 0x00420054: lw          $a3, 0x20($s2)
    ctx->r7 = MEM_W(ctx->r18, 0X20);
    // 0x00420058: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x0042005C: addiu       $a1, $a1, -0x3DF4
    ctx->r5 = ADD32(ctx->r5, -0X3DF4);
    // 0x00420060: jal         0x00416644
    // 0x00420064: nop

    func_00416644(rdram, ctx);
        goto after_5;
    // 0x00420064: nop

    after_5:
    // 0x00420068: j           L_00420178
    // 0x0042006C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_00420178;
    // 0x0042006C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_00420070:
    // 0x00420070: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
L_00420074:
    // 0x00420074: jal         0x0041F0C8
    // 0x00420078: addu        $a2, $s5, $zero
    ctx->r6 = ADD32(ctx->r21, 0);
    func_0041F0C8(rdram, ctx);
        goto after_6;
    // 0x00420078: addu        $a2, $s5, $zero
    ctx->r6 = ADD32(ctx->r21, 0);
    after_6:
    // 0x0042007C: j           L_00420178
    // 0x00420080: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_00420178;
    // 0x00420080: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_00420084:
    // 0x00420084: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x00420088: lw          $v0, 0x990($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X990);
    // 0x0042008C: beq         $v0, $zero, L_00420174
    if (ctx->r2 == 0) {
        // 0x00420090: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_00420174;
    }
    // 0x00420090: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x00420094: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x00420098: lw          $v1, 0x2028($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X2028);
    // 0x0042009C: beq         $v1, $v0, L_004200B4
    if (ctx->r3 == ctx->r2) {
        // 0x004200A0: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_004200B4;
    }
    // 0x004200A0: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x004200A4: addiu       $s0, $v1, 0x1
    ctx->r16 = ADD32(ctx->r3, 0X1);
    // 0x004200A8: slti        $v0, $s0, 0x4
    ctx->r2 = SIGNED(ctx->r16) < 0X4 ? 1 : 0;
    // 0x004200AC: beql        $v0, $zero, L_004200B4
    if (ctx->r2 == 0) {
        // 0x004200B0: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_004200B4;
    }
    goto skip_1;
    // 0x004200B0: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    skip_1:
L_004200B4:
    // 0x004200B4: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x004200B8: addiu       $s3, $zero, -0x2
    ctx->r19 = ADD32(0, -0X2);
L_004200BC:
    // 0x004200BC: jal         0x00426480
    // 0x004200C0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00426480(rdram, ctx);
        goto after_7;
    // 0x004200C0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_7:
    // 0x004200C4: jal         0x0042655C
    // 0x004200C8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_0042655C(rdram, ctx);
        goto after_8;
    // 0x004200C8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_8:
    // 0x004200CC: bne         $v0, $s3, L_004200F4
    if (ctx->r2 != ctx->r19) {
        // 0x004200D0: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_004200F4;
    }
    // 0x004200D0: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x004200D4: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x004200D8: slti        $v0, $s0, 0x4
    ctx->r2 = SIGNED(ctx->r16) < 0X4 ? 1 : 0;
    // 0x004200DC: beql        $v0, $zero, L_004200E4
    if (ctx->r2 == 0) {
        // 0x004200E0: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_004200E4;
    }
    goto skip_2;
    // 0x004200E0: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    skip_2:
L_004200E4:
    // 0x004200E4: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x004200E8: slti        $v0, $s1, 0x4
    ctx->r2 = SIGNED(ctx->r17) < 0X4 ? 1 : 0;
    // 0x004200EC: bne         $v0, $zero, L_004200BC
    if (ctx->r2 != 0) {
        // 0x004200F0: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_004200BC;
    }
    // 0x004200F0: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
L_004200F4:
    // 0x004200F4: beql        $s1, $v0, L_004200FC
    if (ctx->r17 == ctx->r2) {
        // 0x004200F8: addiu       $s0, $zero, -0x1
        ctx->r16 = ADD32(0, -0X1);
            goto L_004200FC;
    }
    goto skip_3;
    // 0x004200F8: addiu       $s0, $zero, -0x1
    ctx->r16 = ADD32(0, -0X1);
    skip_3:
L_004200FC:
    // 0x004200FC: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00420100: sw          $s0, 0x2028($at)
    MEM_W(0X2028, ctx->r1) = ctx->r16;
    // 0x00420104: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x00420108: bne         $s0, $v0, L_0042012C
    if (ctx->r16 != ctx->r2) {
        // 0x0042010C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_0042012C;
    }
    // 0x0042010C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00420110: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x00420114: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x00420118: sw          $v1, 0x9BC($at)
    MEM_W(0X9BC, ctx->r1) = ctx->r3;
    // 0x0042011C: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x00420120: sw          $v1, -0xEB8($at)
    MEM_W(-0XEB8, ctx->r1) = ctx->r3;
    // 0x00420124: j           L_00420178
    // 0x00420128: nop

        goto L_00420178;
    // 0x00420128: nop

L_0042012C:
    // 0x0042012C: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x00420130: lw          $v0, 0x990($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X990);
    // 0x00420134: bne         $v0, $zero, L_00420144
    if (ctx->r2 != 0) {
        // 0x00420138: addu        $a1, $s0, $zero
        ctx->r5 = ADD32(ctx->r16, 0);
            goto L_00420144;
    }
    // 0x00420138: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x0042013C: lw          $v0, 0x20($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X20);
    // 0x00420140: lb          $a1, 0x4($v0)
    ctx->r5 = MEM_B(ctx->r2, 0X4);
L_00420144:
    // 0x00420144: sw          $a1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r5;
    // 0x00420148: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x0042014C: jal         0x0041DD90
    // 0x00420150: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_0041DD90(rdram, ctx);
        goto after_9;
    // 0x00420150: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_9:
    // 0x00420154: beq         $v0, $zero, L_0042016C
    if (ctx->r2 == 0) {
        // 0x00420158: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_0042016C;
    }
    // 0x00420158: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_0042015C:
    // 0x0042015C: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x00420160: sw          $v0, 0x9BC($at)
    MEM_W(0X9BC, ctx->r1) = ctx->r2;
    // 0x00420164: j           L_00420178
    // 0x00420168: nop

        goto L_00420178;
    // 0x00420168: nop

L_0042016C:
    // 0x0042016C: jal         0x0041DA28
    // 0x00420170: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_0041DA28(rdram, ctx);
        goto after_10;
    // 0x00420170: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_10:
L_00420174:
    // 0x00420174: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_00420178:
    // 0x00420178: lw          $ra, 0x48($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X48);
    // 0x0042017C: lw          $s5, 0x44($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X44);
    // 0x00420180: lw          $s4, 0x40($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X40);
    // 0x00420184: lw          $s3, 0x3C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X3C);
    // 0x00420188: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x0042018C: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x00420190: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x00420194: jr          $ra
    // 0x00420198: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x00420198: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void entry_00420098(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00420098: lw          $v1, 0x2028($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X2028);
    // 0x0042009C: beq         $v1, $v0, L_004200B4
    if (ctx->r3 == ctx->r2) {
        // 0x004200A0: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_004200B4;
    }
    // 0x004200A0: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x004200A4: addiu       $s0, $v1, 0x1
    ctx->r16 = ADD32(ctx->r3, 0X1);
    // 0x004200A8: slti        $v0, $s0, 0x4
    ctx->r2 = SIGNED(ctx->r16) < 0X4 ? 1 : 0;
    // 0x004200AC: beql        $v0, $zero, L_004200B4
    if (ctx->r2 == 0) {
        // 0x004200B0: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_004200B4;
    }
    goto skip_0;
    // 0x004200B0: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    skip_0:
L_004200B4:
    // 0x004200B4: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x004200B8: addiu       $s3, $zero, -0x2
    ctx->r19 = ADD32(0, -0X2);
L_004200BC:
    // 0x004200BC: jal         0x00426480
    // 0x004200C0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00426480(rdram, ctx);
        goto after_0;
    // 0x004200C0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x004200C4: jal         0x0042655C
    // 0x004200C8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_0042655C(rdram, ctx);
        goto after_1;
    // 0x004200C8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x004200CC: bne         $v0, $s3, L_004200F4
    if (ctx->r2 != ctx->r19) {
        // 0x004200D0: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_004200F4;
    }
    // 0x004200D0: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x004200D4: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x004200D8: slti        $v0, $s0, 0x4
    ctx->r2 = SIGNED(ctx->r16) < 0X4 ? 1 : 0;
    // 0x004200DC: beql        $v0, $zero, L_004200E4
    if (ctx->r2 == 0) {
        // 0x004200E0: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_004200E4;
    }
    goto skip_1;
    // 0x004200E0: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    skip_1:
L_004200E4:
    // 0x004200E4: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x004200E8: slti        $v0, $s1, 0x4
    ctx->r2 = SIGNED(ctx->r17) < 0X4 ? 1 : 0;
    // 0x004200EC: bne         $v0, $zero, L_004200BC
    if (ctx->r2 != 0) {
        // 0x004200F0: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_004200BC;
    }
    // 0x004200F0: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
L_004200F4:
    // 0x004200F4: beql        $s1, $v0, L_004200FC
    if (ctx->r17 == ctx->r2) {
        // 0x004200F8: addiu       $s0, $zero, -0x1
        ctx->r16 = ADD32(0, -0X1);
            goto L_004200FC;
    }
    goto skip_2;
    // 0x004200F8: addiu       $s0, $zero, -0x1
    ctx->r16 = ADD32(0, -0X1);
    skip_2:
L_004200FC:
    // 0x004200FC: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00420100: sw          $s0, 0x2028($at)
    MEM_W(0X2028, ctx->r1) = ctx->r16;
    // 0x00420104: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x00420108: bne         $s0, $v0, L_0042012C
    if (ctx->r16 != ctx->r2) {
        // 0x0042010C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_0042012C;
    }
    // 0x0042010C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00420110: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x00420114: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x00420118: sw          $v1, 0x9BC($at)
    MEM_W(0X9BC, ctx->r1) = ctx->r3;
    // 0x0042011C: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x00420120: sw          $v1, -0xEB8($at)
    MEM_W(-0XEB8, ctx->r1) = ctx->r3;
    // 0x00420124: j           L_00420178
    // 0x00420128: nop

        goto L_00420178;
    // 0x00420128: nop

L_0042012C:
    // 0x0042012C: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x00420130: lw          $v0, 0x990($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X990);
    // 0x00420134: bne         $v0, $zero, L_00420144
    if (ctx->r2 != 0) {
        // 0x00420138: addu        $a1, $s0, $zero
        ctx->r5 = ADD32(ctx->r16, 0);
            goto L_00420144;
    }
    // 0x00420138: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x0042013C: lw          $v0, 0x20($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X20);
    // 0x00420140: lb          $a1, 0x4($v0)
    ctx->r5 = MEM_B(ctx->r2, 0X4);
L_00420144:
    // 0x00420144: sw          $a1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r5;
    // 0x00420148: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x0042014C: jal         0x0041DD90
    // 0x00420150: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_0041DD90(rdram, ctx);
        goto after_2;
    // 0x00420150: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_2:
    // 0x00420154: beq         $v0, $zero, L_0042016C
    if (ctx->r2 == 0) {
        // 0x00420158: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_0042016C;
    }
    // 0x00420158: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0042015C: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x00420160: sw          $v0, 0x9BC($at)
    MEM_W(0X9BC, ctx->r1) = ctx->r2;
    // 0x00420164: j           L_00420178
    // 0x00420168: nop

        goto L_00420178;
    // 0x00420168: nop

L_0042016C:
    // 0x0042016C: jal         0x0041DA28
    // 0x00420170: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_0041DA28(rdram, ctx);
        goto after_3;
    // 0x00420170: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_3:
    // 0x00420174: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_00420178:
    // 0x00420178: lw          $ra, 0x48($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X48);
    // 0x0042017C: lw          $s5, 0x44($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X44);
    // 0x00420180: lw          $s4, 0x40($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X40);
    // 0x00420184: lw          $s3, 0x3C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X3C);
    // 0x00420188: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x0042018C: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x00420190: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x00420194: jr          $ra
    // 0x00420198: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x00420198: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void entry_00420174(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00420174: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x00420178: lw          $ra, 0x48($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X48);
    // 0x0042017C: lw          $s5, 0x44($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X44);
    // 0x00420180: lw          $s4, 0x40($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X40);
    // 0x00420184: lw          $s3, 0x3C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X3C);
    // 0x00420188: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x0042018C: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x00420190: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x00420194: jr          $ra
    // 0x00420198: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x00420198: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void entry_004202A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004202A8: lw          $v0, 0x9B4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X9B4);
    // 0x004202AC: beq         $v0, $zero, L_004203A0
    if (ctx->r2 == 0) {
        // 0x004202B0: nop
    
            goto L_004203A0;
    }
    // 0x004202B0: nop

    // 0x004202B4: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x004202B8: lw          $v0, 0x994($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X994);
    // 0x004202BC: beq         $v0, $zero, L_00420304
    if (ctx->r2 == 0) {
        // 0x004202C0: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_00420304;
    }
    // 0x004202C0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x004202C4: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x004202C8: addiu       $a0, $a0, -0x6790
    ctx->r4 = ADD32(ctx->r4, -0X6790);
    // 0x004202CC: lw          $a1, 0x20($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X20);
    // 0x004202D0: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x004202D4: sw          $v0, 0x9BC($at)
    MEM_W(0X9BC, ctx->r1) = ctx->r2;
    // 0x004202D8: jal         0x0025342C
    // 0x004202DC: nop

    func_0025342C(rdram, ctx);
        goto after_0;
    // 0x004202DC: nop

    after_0:
    // 0x004202E0: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    // 0x004202E4: lw          $a0, 0x51C($a2)
    ctx->r4 = MEM_W(ctx->r6, 0X51C);
    // 0x004202E8: lw          $v0, 0x18($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X18);
    // 0x004202EC: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x004202F0: addiu       $a1, $a1, -0x77F8
    ctx->r5 = ADD32(ctx->r5, -0X77F8);
    // 0x004202F4: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x004202F8: lw          $a3, 0xA50($a2)
    ctx->r7 = MEM_W(ctx->r6, 0XA50);
    // 0x004202FC: j           L_004203E8
    // 0x00420300: addiu       $a0, $a0, 0x53C
    ctx->r4 = ADD32(ctx->r4, 0X53C);
        goto L_004203E8;
    // 0x00420300: addiu       $a0, $a0, 0x53C
    ctx->r4 = ADD32(ctx->r4, 0X53C);
L_00420304:
    // 0x00420304: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x00420308: lw          $v0, 0x984($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X984);
    // 0x0042030C: beq         $v0, $zero, L_00420440
    if (ctx->r2 == 0) {
        // 0x00420310: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_00420440;
    }
    // 0x00420310: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00420314: lw          $v1, 0x20($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X20);
    // 0x00420318: lw          $a0, 0x1C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X1C);
    // 0x0042031C: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x00420320: sw          $v0, 0x9BC($at)
    MEM_W(0X9BC, ctx->r1) = ctx->r2;
    // 0x00420324: lb          $v1, 0x4($v1)
    ctx->r3 = MEM_B(ctx->r3, 0X4);
    // 0x00420328: addu        $a2, $a0, $zero
    ctx->r6 = ADD32(ctx->r4, 0);
    // 0x0042032C: beq         $v1, $v0, L_00420360
    if (ctx->r3 == ctx->r2) {
        // 0x00420330: sw          $v1, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->r3;
            goto L_00420360;
    }
    // 0x00420330: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    // 0x00420334: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x00420338: bne         $v0, $zero, L_00420350
    if (ctx->r2 != 0) {
        // 0x0042033C: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_00420350;
    }
    // 0x0042033C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x00420340: beq         $v1, $v0, L_00420370
    if (ctx->r3 == ctx->r2) {
        // 0x00420344: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_00420370;
    }
    // 0x00420344: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x00420348: beq         $v1, $v0, L_00420380
    if (ctx->r3 == ctx->r2) {
        // 0x0042034C: nop
    
            goto L_00420380;
    }
    // 0x0042034C: nop

L_00420350:
    // 0x00420350: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x00420354: addiu       $a1, $a1, -0x5380
    ctx->r5 = ADD32(ctx->r5, -0X5380);
    // 0x00420358: j           L_00420388
    // 0x0042035C: nop

        goto L_00420388;
    // 0x0042035C: nop

L_00420360:
    // 0x00420360: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x00420364: addiu       $a1, $a1, -0x535C
    ctx->r5 = ADD32(ctx->r5, -0X535C);
    // 0x00420368: j           L_00420388
    // 0x0042036C: nop

        goto L_00420388;
    // 0x0042036C: nop

L_00420370:
    // 0x00420370: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x00420374: addiu       $a1, $a1, -0x5338
    ctx->r5 = ADD32(ctx->r5, -0X5338);
    // 0x00420378: j           L_00420388
    // 0x0042037C: nop

        goto L_00420388;
    // 0x0042037C: nop

L_00420380:
    // 0x00420380: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x00420384: addiu       $a1, $a1, -0x5314
    ctx->r5 = ADD32(ctx->r5, -0X5314);
L_00420388:
    // 0x00420388: lw          $v0, 0x18($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X18);
    // 0x0042038C: lw          $a0, 0x51C($a2)
    ctx->r4 = MEM_W(ctx->r6, 0X51C);
    // 0x00420390: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x00420394: lw          $a3, 0xA50($a2)
    ctx->r7 = MEM_W(ctx->r6, 0XA50);
    // 0x00420398: j           L_004203E8
    // 0x0042039C: addiu       $a0, $a0, 0x53C
    ctx->r4 = ADD32(ctx->r4, 0X53C);
        goto L_004203E8;
    // 0x0042039C: addiu       $a0, $a0, 0x53C
    ctx->r4 = ADD32(ctx->r4, 0X53C);
L_004203A0:
    // 0x004203A0: lw          $a1, 0x20($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X20);
    // 0x004203A4: lui         $s0, 0x8012
    ctx->r16 = S32(0X8012 << 16);
    // 0x004203A8: addiu       $s0, $s0, -0x6790
    ctx->r16 = ADD32(ctx->r16, -0X6790);
    // 0x004203AC: jal         0x0025342C
    // 0x004203B0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_0025342C(rdram, ctx);
        goto after_1;
    // 0x004203B0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x004203B4: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x004203B8: lw          $v1, 0x994($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X994);
    // 0x004203BC: beq         $v1, $zero, L_004203F8
    if (ctx->r3 == 0) {
        // 0x004203C0: addu        $a2, $v0, $zero
        ctx->r6 = ADD32(ctx->r2, 0);
            goto L_004203F8;
    }
    // 0x004203C0: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    // 0x004203C4: addiu       $a0, $s0, 0x5BC
    ctx->r4 = ADD32(ctx->r16, 0X5BC);
    // 0x004203C8: lw          $v0, 0x18($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X18);
    // 0x004203CC: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x004203D0: addiu       $a1, $a1, -0x6E70
    ctx->r5 = ADD32(ctx->r5, -0X6E70);
    // 0x004203D4: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x004203D8: lw          $a3, 0xA50($a2)
    ctx->r7 = MEM_W(ctx->r6, 0XA50);
    // 0x004203DC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x004203E0: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x004203E4: sw          $v0, 0x9BC($at)
    MEM_W(0X9BC, ctx->r1) = ctx->r2;
L_004203E8:
    // 0x004203E8: jal         0x00416644
    // 0x004203EC: nop

    func_00416644(rdram, ctx);
        goto after_2;
    // 0x004203EC: nop

    after_2:
    // 0x004203F0: j           L_00420444
    // 0x004203F4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_00420444;
    // 0x004203F4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_004203F8:
    // 0x004203F8: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x004203FC: lw          $v0, 0x984($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X984);
    // 0x00420400: beq         $v0, $zero, L_00420440
    if (ctx->r2 == 0) {
        // 0x00420404: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_00420440;
    }
    // 0x00420404: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00420408: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x0042040C: addiu       $a1, $a1, -0x410C
    ctx->r5 = ADD32(ctx->r5, -0X410C);
    // 0x00420410: lw          $a0, 0x51C($a2)
    ctx->r4 = MEM_W(ctx->r6, 0X51C);
    // 0x00420414: lw          $v1, 0x18($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X18);
    // 0x00420418: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0042041C: sw          $v0, 0x9BC($at)
    MEM_W(0X9BC, ctx->r1) = ctx->r2;
    // 0x00420420: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    // 0x00420424: lw          $a3, 0xA50($a2)
    ctx->r7 = MEM_W(ctx->r6, 0XA50);
    // 0x00420428: jal         0x00416644
    // 0x0042042C: addiu       $a0, $a0, 0x53C
    ctx->r4 = ADD32(ctx->r4, 0X53C);
    func_00416644(rdram, ctx);
        goto after_3;
    // 0x0042042C: addiu       $a0, $a0, 0x53C
    ctx->r4 = ADD32(ctx->r4, 0X53C);
    after_3:
    // 0x00420430: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x00420434: sw          $zero, 0x940($at)
    MEM_W(0X940, ctx->r1) = 0;
    // 0x00420438: j           L_00420444
    // 0x0042043C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_00420444;
    // 0x0042043C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_00420440:
    // 0x00420440: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_00420444:
    // 0x00420444: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
;}
RECOMP_FUNC void entry_00420308(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00420308: lw          $v0, 0x984($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X984);
    // 0x0042030C: beq         $v0, $zero, L_00420440
    if (ctx->r2 == 0) {
        // 0x00420310: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_00420440;
    }
    // 0x00420310: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00420314: lw          $v1, 0x20($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X20);
    // 0x00420318: lw          $a0, 0x1C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X1C);
    // 0x0042031C: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x00420320: sw          $v0, 0x9BC($at)
    MEM_W(0X9BC, ctx->r1) = ctx->r2;
    // 0x00420324: lb          $v1, 0x4($v1)
    ctx->r3 = MEM_B(ctx->r3, 0X4);
    // 0x00420328: addu        $a2, $a0, $zero
    ctx->r6 = ADD32(ctx->r4, 0);
    // 0x0042032C: beq         $v1, $v0, L_00420360
    if (ctx->r3 == ctx->r2) {
        // 0x00420330: sw          $v1, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->r3;
            goto L_00420360;
    }
    // 0x00420330: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    // 0x00420334: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x00420338: bne         $v0, $zero, L_00420350
    if (ctx->r2 != 0) {
        // 0x0042033C: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_00420350;
    }
    // 0x0042033C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x00420340: beq         $v1, $v0, L_00420370
    if (ctx->r3 == ctx->r2) {
        // 0x00420344: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_00420370;
    }
    // 0x00420344: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x00420348: beq         $v1, $v0, L_00420380
    if (ctx->r3 == ctx->r2) {
        // 0x0042034C: nop
    
            goto L_00420380;
    }
    // 0x0042034C: nop

L_00420350:
    // 0x00420350: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x00420354: addiu       $a1, $a1, -0x5380
    ctx->r5 = ADD32(ctx->r5, -0X5380);
    // 0x00420358: j           L_00420388
    // 0x0042035C: nop

        goto L_00420388;
    // 0x0042035C: nop

L_00420360:
    // 0x00420360: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x00420364: addiu       $a1, $a1, -0x535C
    ctx->r5 = ADD32(ctx->r5, -0X535C);
    // 0x00420368: j           L_00420388
    // 0x0042036C: nop

        goto L_00420388;
    // 0x0042036C: nop

L_00420370:
    // 0x00420370: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x00420374: addiu       $a1, $a1, -0x5338
    ctx->r5 = ADD32(ctx->r5, -0X5338);
    // 0x00420378: j           L_00420388
    // 0x0042037C: nop

        goto L_00420388;
    // 0x0042037C: nop

L_00420380:
    // 0x00420380: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x00420384: addiu       $a1, $a1, -0x5314
    ctx->r5 = ADD32(ctx->r5, -0X5314);
L_00420388:
    // 0x00420388: lw          $v0, 0x18($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X18);
    // 0x0042038C: lw          $a0, 0x51C($a2)
    ctx->r4 = MEM_W(ctx->r6, 0X51C);
    // 0x00420390: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x00420394: lw          $a3, 0xA50($a2)
    ctx->r7 = MEM_W(ctx->r6, 0XA50);
    // 0x00420398: j           L_004203E8
    // 0x0042039C: addiu       $a0, $a0, 0x53C
    ctx->r4 = ADD32(ctx->r4, 0X53C);
        goto L_004203E8;
    // 0x0042039C: addiu       $a0, $a0, 0x53C
    ctx->r4 = ADD32(ctx->r4, 0X53C);
    // 0x004203A0: lw          $a1, 0x20($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X20);
    // 0x004203A4: lui         $s0, 0x8012
    ctx->r16 = S32(0X8012 << 16);
    // 0x004203A8: addiu       $s0, $s0, -0x6790
    ctx->r16 = ADD32(ctx->r16, -0X6790);
    // 0x004203AC: jal         0x0025342C
    // 0x004203B0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_0025342C(rdram, ctx);
        goto after_0;
    // 0x004203B0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x004203B4: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x004203B8: lw          $v1, 0x994($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X994);
    // 0x004203BC: beq         $v1, $zero, L_004203F8
    if (ctx->r3 == 0) {
        // 0x004203C0: addu        $a2, $v0, $zero
        ctx->r6 = ADD32(ctx->r2, 0);
            goto L_004203F8;
    }
    // 0x004203C0: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    // 0x004203C4: addiu       $a0, $s0, 0x5BC
    ctx->r4 = ADD32(ctx->r16, 0X5BC);
    // 0x004203C8: lw          $v0, 0x18($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X18);
    // 0x004203CC: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x004203D0: addiu       $a1, $a1, -0x6E70
    ctx->r5 = ADD32(ctx->r5, -0X6E70);
    // 0x004203D4: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x004203D8: lw          $a3, 0xA50($a2)
    ctx->r7 = MEM_W(ctx->r6, 0XA50);
    // 0x004203DC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x004203E0: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x004203E4: sw          $v0, 0x9BC($at)
    MEM_W(0X9BC, ctx->r1) = ctx->r2;
L_004203E8:
    // 0x004203E8: jal         0x00416644
    // 0x004203EC: nop

    func_00416644(rdram, ctx);
        goto after_1;
    // 0x004203EC: nop

    after_1:
    // 0x004203F0: j           L_00420444
    // 0x004203F4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_00420444;
    // 0x004203F4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_004203F8:
    // 0x004203F8: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x004203FC: lw          $v0, 0x984($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X984);
    // 0x00420400: beq         $v0, $zero, L_00420440
    if (ctx->r2 == 0) {
        // 0x00420404: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_00420440;
    }
    // 0x00420404: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00420408: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x0042040C: addiu       $a1, $a1, -0x410C
    ctx->r5 = ADD32(ctx->r5, -0X410C);
    // 0x00420410: lw          $a0, 0x51C($a2)
    ctx->r4 = MEM_W(ctx->r6, 0X51C);
    // 0x00420414: lw          $v1, 0x18($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X18);
    // 0x00420418: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0042041C: sw          $v0, 0x9BC($at)
    MEM_W(0X9BC, ctx->r1) = ctx->r2;
    // 0x00420420: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    // 0x00420424: lw          $a3, 0xA50($a2)
    ctx->r7 = MEM_W(ctx->r6, 0XA50);
    // 0x00420428: jal         0x00416644
    // 0x0042042C: addiu       $a0, $a0, 0x53C
    ctx->r4 = ADD32(ctx->r4, 0X53C);
    func_00416644(rdram, ctx);
        goto after_2;
    // 0x0042042C: addiu       $a0, $a0, 0x53C
    ctx->r4 = ADD32(ctx->r4, 0X53C);
    after_2:
    // 0x00420430: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x00420434: sw          $zero, 0x940($at)
    MEM_W(0X940, ctx->r1) = 0;
    // 0x00420438: j           L_00420444
    // 0x0042043C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_00420444;
    // 0x0042043C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_00420440:
    // 0x00420440: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_00420444:
    // 0x00420444: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
;}
RECOMP_FUNC void entry_00420364(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00420364: addiu       $a1, $a1, -0x535C
    ctx->r5 = ADD32(ctx->r5, -0X535C);
    // 0x00420368: j           L_00420388
    // 0x0042036C: nop

        goto L_00420388;
    // 0x0042036C: nop

    // 0x00420370: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x00420374: addiu       $a1, $a1, -0x5338
    ctx->r5 = ADD32(ctx->r5, -0X5338);
    // 0x00420378: j           L_00420388
    // 0x0042037C: nop

        goto L_00420388;
    // 0x0042037C: nop

    // 0x00420380: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x00420384: addiu       $a1, $a1, -0x5314
    ctx->r5 = ADD32(ctx->r5, -0X5314);
L_00420388:
    // 0x00420388: lw          $v0, 0x18($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X18);
    // 0x0042038C: lw          $a0, 0x51C($a2)
    ctx->r4 = MEM_W(ctx->r6, 0X51C);
    // 0x00420390: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x00420394: lw          $a3, 0xA50($a2)
    ctx->r7 = MEM_W(ctx->r6, 0XA50);
    // 0x00420398: j           L_004203E8
    // 0x0042039C: addiu       $a0, $a0, 0x53C
    ctx->r4 = ADD32(ctx->r4, 0X53C);
        goto L_004203E8;
    // 0x0042039C: addiu       $a0, $a0, 0x53C
    ctx->r4 = ADD32(ctx->r4, 0X53C);
    // 0x004203A0: lw          $a1, 0x20($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X20);
    // 0x004203A4: lui         $s0, 0x8012
    ctx->r16 = S32(0X8012 << 16);
    // 0x004203A8: addiu       $s0, $s0, -0x6790
    ctx->r16 = ADD32(ctx->r16, -0X6790);
    // 0x004203AC: jal         0x0025342C
    // 0x004203B0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_0025342C(rdram, ctx);
        goto after_0;
    // 0x004203B0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x004203B4: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x004203B8: lw          $v1, 0x994($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X994);
    // 0x004203BC: beq         $v1, $zero, L_004203F8
    if (ctx->r3 == 0) {
        // 0x004203C0: addu        $a2, $v0, $zero
        ctx->r6 = ADD32(ctx->r2, 0);
            goto L_004203F8;
    }
    // 0x004203C0: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    // 0x004203C4: addiu       $a0, $s0, 0x5BC
    ctx->r4 = ADD32(ctx->r16, 0X5BC);
    // 0x004203C8: lw          $v0, 0x18($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X18);
    // 0x004203CC: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x004203D0: addiu       $a1, $a1, -0x6E70
    ctx->r5 = ADD32(ctx->r5, -0X6E70);
    // 0x004203D4: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x004203D8: lw          $a3, 0xA50($a2)
    ctx->r7 = MEM_W(ctx->r6, 0XA50);
    // 0x004203DC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x004203E0: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x004203E4: sw          $v0, 0x9BC($at)
    MEM_W(0X9BC, ctx->r1) = ctx->r2;
L_004203E8:
    // 0x004203E8: jal         0x00416644
    // 0x004203EC: nop

    func_00416644(rdram, ctx);
        goto after_1;
    // 0x004203EC: nop

    after_1:
    // 0x004203F0: j           L_00420444
    // 0x004203F4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_00420444;
    // 0x004203F4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_004203F8:
    // 0x004203F8: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x004203FC: lw          $v0, 0x984($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X984);
    // 0x00420400: beq         $v0, $zero, L_00420440
    if (ctx->r2 == 0) {
        // 0x00420404: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_00420440;
    }
    // 0x00420404: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00420408: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x0042040C: addiu       $a1, $a1, -0x410C
    ctx->r5 = ADD32(ctx->r5, -0X410C);
    // 0x00420410: lw          $a0, 0x51C($a2)
    ctx->r4 = MEM_W(ctx->r6, 0X51C);
    // 0x00420414: lw          $v1, 0x18($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X18);
    // 0x00420418: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0042041C: sw          $v0, 0x9BC($at)
    MEM_W(0X9BC, ctx->r1) = ctx->r2;
    // 0x00420420: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    // 0x00420424: lw          $a3, 0xA50($a2)
    ctx->r7 = MEM_W(ctx->r6, 0XA50);
    // 0x00420428: jal         0x00416644
    // 0x0042042C: addiu       $a0, $a0, 0x53C
    ctx->r4 = ADD32(ctx->r4, 0X53C);
    func_00416644(rdram, ctx);
        goto after_2;
    // 0x0042042C: addiu       $a0, $a0, 0x53C
    ctx->r4 = ADD32(ctx->r4, 0X53C);
    after_2:
    // 0x00420430: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x00420434: sw          $zero, 0x940($at)
    MEM_W(0X940, ctx->r1) = 0;
    // 0x00420438: j           L_00420444
    // 0x0042043C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_00420444;
    // 0x0042043C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_00420440:
    // 0x00420440: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_00420444:
    // 0x00420444: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x00420448: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x0042044C: jr          $ra
    // 0x00420450: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x00420450: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void entry_004203E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004203E8: jal         0x00416644
    // 0x004203EC: nop

    func_00416644(rdram, ctx);
        goto after_0;
    // 0x004203EC: nop

    after_0:
    // 0x004203F0: j           L_00420444
    // 0x004203F4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_00420444;
    // 0x004203F4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x004203F8: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x004203FC: lw          $v0, 0x984($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X984);
    // 0x00420400: beq         $v0, $zero, L_00420440
    if (ctx->r2 == 0) {
        // 0x00420404: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_00420440;
    }
    // 0x00420404: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00420408: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x0042040C: addiu       $a1, $a1, -0x410C
    ctx->r5 = ADD32(ctx->r5, -0X410C);
    // 0x00420410: lw          $a0, 0x51C($a2)
    ctx->r4 = MEM_W(ctx->r6, 0X51C);
    // 0x00420414: lw          $v1, 0x18($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X18);
    // 0x00420418: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0042041C: sw          $v0, 0x9BC($at)
    MEM_W(0X9BC, ctx->r1) = ctx->r2;
    // 0x00420420: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    // 0x00420424: lw          $a3, 0xA50($a2)
    ctx->r7 = MEM_W(ctx->r6, 0XA50);
    // 0x00420428: jal         0x00416644
    // 0x0042042C: addiu       $a0, $a0, 0x53C
    ctx->r4 = ADD32(ctx->r4, 0X53C);
    func_00416644(rdram, ctx);
        goto after_1;
    // 0x0042042C: addiu       $a0, $a0, 0x53C
    ctx->r4 = ADD32(ctx->r4, 0X53C);
    after_1:
    // 0x00420430: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x00420434: sw          $zero, 0x940($at)
    MEM_W(0X940, ctx->r1) = 0;
    // 0x00420438: j           L_00420444
    // 0x0042043C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_00420444;
    // 0x0042043C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_00420440:
    // 0x00420440: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_00420444:
    // 0x00420444: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x00420448: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x0042044C: jr          $ra
    // 0x00420450: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x00420450: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void entry_00420614(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00420614: addiu       $v0, $v0, -0x675C
    ctx->r2 = ADD32(ctx->r2, -0X675C);
    // 0x00420618: sw          $zero, 0x0($v0)
    MEM_W(0X0, ctx->r2) = 0;
    // 0x0042061C: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x00420620: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x00420624: lw          $a3, 0xA50($a2)
    ctx->r7 = MEM_W(ctx->r6, 0XA50);
    // 0x00420628: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x0042062C: addiu       $a1, $a1, -0x42E0
    ctx->r5 = ADD32(ctx->r5, -0X42E0);
    // 0x00420630: j           L_00420698
    // 0x00420634: addiu       $a0, $v0, 0x588
    ctx->r4 = ADD32(ctx->r2, 0X588);
        goto L_00420698;
    // 0x00420634: addiu       $a0, $v0, 0x588
    ctx->r4 = ADD32(ctx->r2, 0X588);
    // 0x00420638: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x0042063C: lw          $a1, 0x9C4($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X9C4);
    // 0x00420640: jal         0x00426064
    // 0x00420644: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00426064(rdram, ctx);
        goto after_0;
    // 0x00420644: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x00420648: bne         $v0, $zero, L_00420678
    if (ctx->r2 != 0) {
        // 0x0042064C: nop
    
            goto L_00420678;
    }
    // 0x0042064C: nop

    // 0x00420650: lw          $v0, 0x24($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X24);
    // 0x00420654: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x00420658: addiu       $a0, $a0, -0x61D4
    ctx->r4 = ADD32(ctx->r4, -0X61D4);
    // 0x0042065C: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x00420660: lw          $a2, 0x1C($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X1C);
    // 0x00420664: lw          $a3, 0x20($s1)
    ctx->r7 = MEM_W(ctx->r17, 0X20);
    // 0x00420668: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x0042066C: addiu       $a1, $a1, -0x4250
    ctx->r5 = ADD32(ctx->r5, -0X4250);
    // 0x00420670: j           L_00420698
    // 0x00420674: nop

        goto L_00420698;
    // 0x00420674: nop

L_00420678:
    // 0x00420678: lw          $v0, 0x24($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X24);
    // 0x0042067C: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x00420680: addiu       $a0, $a0, -0x61D4
    ctx->r4 = ADD32(ctx->r4, -0X61D4);
    // 0x00420684: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x00420688: lw          $a2, 0x1C($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X1C);
    // 0x0042068C: lw          $a3, 0x20($s1)
    ctx->r7 = MEM_W(ctx->r17, 0X20);
    // 0x00420690: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x00420694: addiu       $a1, $a1, -0x41E4
    ctx->r5 = ADD32(ctx->r5, -0X41E4);
L_00420698:
    // 0x00420698: jal         0x00416644
    // 0x0042069C: nop

    func_00416644(rdram, ctx);
        goto after_1;
    // 0x0042069C: nop

    after_1:
    // 0x004206A0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x004206A4: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x004206A8: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x004206AC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x004206B0: jr          $ra
    // 0x004206B4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x004206B4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void entry_004206A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004206A4: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x004206A8: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x004206AC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x004206B0: jr          $ra
    // 0x004206B4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x004206B4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void entry_0042075C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
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
        goto after_0;
    // 0x004207B8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
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
        goto after_1;
    // 0x004207D0: addiu       $a0, $a0, 0x53C
    ctx->r4 = ADD32(ctx->r4, 0X53C);
    after_1:
    // 0x004207D4: j           L_00420848
    // 0x004207D8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_00420848;
    // 0x004207D8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x004207DC: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x004207E0: lw          $a1, 0x9C4($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X9C4);
    // 0x004207E4: jal         0x00426064
    // 0x004207E8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00426064(rdram, ctx);
        goto after_2;
    // 0x004207E8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
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
        goto after_3;
    // 0x00420840: nop

    after_3:
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
RECOMP_FUNC void entry_00420768(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
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
        goto after_0;
    // 0x004207B8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
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
        goto after_1;
    // 0x004207D0: addiu       $a0, $a0, 0x53C
    ctx->r4 = ADD32(ctx->r4, 0X53C);
    after_1:
    // 0x004207D4: j           L_00420848
    // 0x004207D8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_00420848;
    // 0x004207D8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x004207DC: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x004207E0: lw          $a1, 0x9C4($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X9C4);
    // 0x004207E4: jal         0x00426064
    // 0x004207E8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00426064(rdram, ctx);
        goto after_2;
    // 0x004207E8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
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
        goto after_3;
    // 0x00420840: nop

    after_3:
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
RECOMP_FUNC void entry_00420AA4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00420AA4: lw          $a3, 0x20($s2)
    ctx->r7 = MEM_W(ctx->r18, 0X20);
    // 0x00420AA8: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x00420AAC: addiu       $a1, $a1, -0x4910
    ctx->r5 = ADD32(ctx->r5, -0X4910);
    // 0x00420AB0: j           L_00420C0C
    // 0x00420AB4: nop

        goto L_00420C0C;
    // 0x00420AB4: nop

    // 0x00420AB8: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x00420ABC: addiu       $a0, $a0, -0x61D4
    ctx->r4 = ADD32(ctx->r4, -0X61D4);
    // 0x00420AC0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x00420AC4: lw          $a2, 0x1C($s2)
    ctx->r6 = MEM_W(ctx->r18, 0X1C);
    // 0x00420AC8: lw          $a3, 0x20($s2)
    ctx->r7 = MEM_W(ctx->r18, 0X20);
    // 0x00420ACC: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x00420AD0: addiu       $a1, $a1, -0x6E70
    ctx->r5 = ADD32(ctx->r5, -0X6E70);
    // 0x00420AD4: j           L_00420C0C
    // 0x00420AD8: nop

        goto L_00420C0C;
    // 0x00420AD8: nop

    // 0x00420ADC: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x00420AE0: lw          $v1, 0x9C0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X9C0);
    // 0x00420AE4: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x00420AE8: bne         $v1, $v0, L_00420BB0
    if (ctx->r3 != ctx->r2) {
        // 0x00420AEC: nop
    
            goto L_00420BB0;
    }
    // 0x00420AEC: nop

    // 0x00420AF0: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x00420AF4: lw          $v0, 0x998($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X998);
    // 0x00420AF8: beq         $v0, $zero, L_00420BB0
    if (ctx->r2 == 0) {
        // 0x00420AFC: nop
    
            goto L_00420BB0;
    }
    // 0x00420AFC: nop

    // 0x00420B00: jal         0x00426480
    // 0x00420B04: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_00426480(rdram, ctx);
        goto after_0;
    // 0x00420B04: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_0:
    // 0x00420B08: jal         0x0042655C
    // 0x00420B0C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_0042655C(rdram, ctx);
        goto after_1;
    // 0x00420B0C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_1:
    // 0x00420B10: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x00420B14: jal         0x002858CC
    // 0x00420B18: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_002858CC(rdram, ctx);
        goto after_2;
    // 0x00420B18: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_2:
    // 0x00420B1C: beql        $s0, $zero, L_00420B2C
    if (ctx->r16 == 0) {
        // 0x00420B20: addiu       $v0, $zero, -0x2
        ctx->r2 = ADD32(0, -0X2);
            goto L_00420B2C;
    }
    goto skip_0;
    // 0x00420B20: addiu       $v0, $zero, -0x2
    ctx->r2 = ADD32(0, -0X2);
    skip_0:
    // 0x00420B24: beq         $v0, $zero, L_00420B64
    if (ctx->r2 == 0) {
        // 0x00420B28: addiu       $v0, $zero, -0x2
        ctx->r2 = ADD32(0, -0X2);
            goto L_00420B64;
    }
    // 0x00420B28: addiu       $v0, $zero, -0x2
    ctx->r2 = ADD32(0, -0X2);
L_00420B2C:
    // 0x00420B2C: beq         $s0, $v0, L_00420B64
    if (ctx->r16 == ctx->r2) {
        // 0x00420B30: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_00420B64;
    }
    // 0x00420B30: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00420B34: lw          $v1, 0x24($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X24);
    // 0x00420B38: bne         $v1, $v0, L_00420B64
    if (ctx->r3 != ctx->r2) {
        // 0x00420B3C: nop
    
            goto L_00420B64;
    }
    // 0x00420B3C: nop

    // 0x00420B40: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x00420B44: addiu       $a0, $a0, -0x61D4
    ctx->r4 = ADD32(ctx->r4, -0X61D4);
    // 0x00420B48: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x00420B4C: lw          $a2, 0x1C($s2)
    ctx->r6 = MEM_W(ctx->r18, 0X1C);
    // 0x00420B50: lw          $a3, 0x20($s2)
    ctx->r7 = MEM_W(ctx->r18, 0X20);
    // 0x00420B54: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x00420B58: addiu       $a1, $a1, -0x48EC
    ctx->r5 = ADD32(ctx->r5, -0X48EC);
    // 0x00420B5C: j           L_00420C0C
    // 0x00420B60: nop

        goto L_00420C0C;
    // 0x00420B60: nop

L_00420B64:
    // 0x00420B64: lw          $v0, 0x1C($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X1C);
    // 0x00420B68: beq         $v0, $zero, L_00420B7C
    if (ctx->r2 == 0) {
        // 0x00420B6C: nop
    
            goto L_00420B7C;
    }
    // 0x00420B6C: nop

    // 0x00420B70: lw          $v0, 0x51C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X51C);
    // 0x00420B74: j           L_00420B84
    // 0x00420B78: addiu       $a0, $v0, 0x53C
    ctx->r4 = ADD32(ctx->r2, 0X53C);
        goto L_00420B84;
    // 0x00420B78: addiu       $a0, $v0, 0x53C
    ctx->r4 = ADD32(ctx->r2, 0X53C);
L_00420B7C:
    // 0x00420B7C: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x00420B80: addiu       $a0, $a0, -0x61D4
    ctx->r4 = ADD32(ctx->r4, -0X61D4);
L_00420B84:
    // 0x00420B84: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x00420B88: lw          $a2, 0x1C($s2)
    ctx->r6 = MEM_W(ctx->r18, 0X1C);
    // 0x00420B8C: lw          $a3, 0x20($s2)
    ctx->r7 = MEM_W(ctx->r18, 0X20);
    // 0x00420B90: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x00420B94: addiu       $a1, $a1, -0x410C
    ctx->r5 = ADD32(ctx->r5, -0X410C);
    // 0x00420B98: jal         0x00416644
    // 0x00420B9C: nop

    func_00416644(rdram, ctx);
        goto after_3;
    // 0x00420B9C: nop

    after_3:
    // 0x00420BA0: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x00420BA4: sw          $zero, 0x940($at)
    MEM_W(0X940, ctx->r1) = 0;
    // 0x00420BA8: j           L_00420C18
    // 0x00420BAC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_00420C18;
    // 0x00420BAC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_00420BB0:
    // 0x00420BB0: lw          $v1, 0x24($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X24);
    // 0x00420BB4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00420BB8: beql        $v1, $v0, L_00420BC0
    if (ctx->r3 == ctx->r2) {
        // 0x00420BBC: sw          $zero, 0x24($s2)
        MEM_W(0X24, ctx->r18) = 0;
            goto L_00420BC0;
    }
    goto skip_1;
    // 0x00420BBC: sw          $zero, 0x24($s2)
    MEM_W(0X24, ctx->r18) = 0;
    skip_1:
L_00420BC0:
    // 0x00420BC0: lw          $v1, 0x24($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X24);
    // 0x00420BC4: beq         $v1, $zero, L_00420C18
    if (ctx->r3 == 0) {
        // 0x00420BC8: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_00420C18;
    }
    // 0x00420BC8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00420BCC: lui         $v0, 0x44
    ctx->r2 = S32(0X44 << 16);
    // 0x00420BD0: addiu       $v0, $v0, -0x4934
    ctx->r2 = ADD32(ctx->r2, -0X4934);
    // 0x00420BD4: beq         $v1, $v0, L_00420BF4
    if (ctx->r3 == ctx->r2) {
        // 0x00420BD8: nop
    
            goto L_00420BF4;
    }
    // 0x00420BD8: nop

    // 0x00420BDC: lw          $v0, 0x1C($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X1C);
    // 0x00420BE0: beq         $v0, $zero, L_00420BF4
    if (ctx->r2 == 0) {
        // 0x00420BE4: nop
    
            goto L_00420BF4;
    }
    // 0x00420BE4: nop

    // 0x00420BE8: lw          $v0, 0x51C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X51C);
    // 0x00420BEC: j           L_00420BFC
    // 0x00420BF0: addiu       $a0, $v0, 0x53C
    ctx->r4 = ADD32(ctx->r2, 0X53C);
        goto L_00420BFC;
    // 0x00420BF0: addiu       $a0, $v0, 0x53C
    ctx->r4 = ADD32(ctx->r2, 0X53C);
L_00420BF4:
    // 0x00420BF4: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x00420BF8: addiu       $a0, $a0, -0x61D4
    ctx->r4 = ADD32(ctx->r4, -0X61D4);
L_00420BFC:
    // 0x00420BFC: sw          $s1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r17;
    // 0x00420C00: lw          $a1, 0x24($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X24);
    // 0x00420C04: lw          $a2, 0x1C($s2)
    ctx->r6 = MEM_W(ctx->r18, 0X1C);
    // 0x00420C08: lw          $a3, 0x20($s2)
    ctx->r7 = MEM_W(ctx->r18, 0X20);
L_00420C0C:
    // 0x00420C0C: jal         0x00416644
    // 0x00420C10: nop

    func_00416644(rdram, ctx);
        goto after_4;
    // 0x00420C10: nop

    after_4:
    // 0x00420C14: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_00420C18:
    // 0x00420C18: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x00420C1C: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x00420C20: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x00420C24: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x00420C28: jr          $ra
    // 0x00420C2C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x00420C2C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void entry_00420B1C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00420B1C: beql        $s0, $zero, L_00420B2C
    if (ctx->r16 == 0) {
        // 0x00420B20: addiu       $v0, $zero, -0x2
        ctx->r2 = ADD32(0, -0X2);
            goto L_00420B2C;
    }
    goto skip_0;
    // 0x00420B20: addiu       $v0, $zero, -0x2
    ctx->r2 = ADD32(0, -0X2);
    skip_0:
    // 0x00420B24: beq         $v0, $zero, L_00420B64
    if (ctx->r2 == 0) {
        // 0x00420B28: addiu       $v0, $zero, -0x2
        ctx->r2 = ADD32(0, -0X2);
            goto L_00420B64;
    }
    // 0x00420B28: addiu       $v0, $zero, -0x2
    ctx->r2 = ADD32(0, -0X2);
L_00420B2C:
    // 0x00420B2C: beq         $s0, $v0, L_00420B64
    if (ctx->r16 == ctx->r2) {
        // 0x00420B30: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_00420B64;
    }
    // 0x00420B30: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00420B34: lw          $v1, 0x24($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X24);
    // 0x00420B38: bne         $v1, $v0, L_00420B64
    if (ctx->r3 != ctx->r2) {
        // 0x00420B3C: nop
    
            goto L_00420B64;
    }
    // 0x00420B3C: nop

    // 0x00420B40: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x00420B44: addiu       $a0, $a0, -0x61D4
    ctx->r4 = ADD32(ctx->r4, -0X61D4);
    // 0x00420B48: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x00420B4C: lw          $a2, 0x1C($s2)
    ctx->r6 = MEM_W(ctx->r18, 0X1C);
    // 0x00420B50: lw          $a3, 0x20($s2)
    ctx->r7 = MEM_W(ctx->r18, 0X20);
    // 0x00420B54: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x00420B58: addiu       $a1, $a1, -0x48EC
    ctx->r5 = ADD32(ctx->r5, -0X48EC);
    // 0x00420B5C: j           L_00420C0C
    // 0x00420B60: nop

        goto L_00420C0C;
    // 0x00420B60: nop

L_00420B64:
    // 0x00420B64: lw          $v0, 0x1C($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X1C);
    // 0x00420B68: beq         $v0, $zero, L_00420B7C
    if (ctx->r2 == 0) {
        // 0x00420B6C: nop
    
            goto L_00420B7C;
    }
    // 0x00420B6C: nop

    // 0x00420B70: lw          $v0, 0x51C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X51C);
    // 0x00420B74: j           L_00420B84
    // 0x00420B78: addiu       $a0, $v0, 0x53C
    ctx->r4 = ADD32(ctx->r2, 0X53C);
        goto L_00420B84;
    // 0x00420B78: addiu       $a0, $v0, 0x53C
    ctx->r4 = ADD32(ctx->r2, 0X53C);
L_00420B7C:
    // 0x00420B7C: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x00420B80: addiu       $a0, $a0, -0x61D4
    ctx->r4 = ADD32(ctx->r4, -0X61D4);
L_00420B84:
    // 0x00420B84: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x00420B88: lw          $a2, 0x1C($s2)
    ctx->r6 = MEM_W(ctx->r18, 0X1C);
    // 0x00420B8C: lw          $a3, 0x20($s2)
    ctx->r7 = MEM_W(ctx->r18, 0X20);
    // 0x00420B90: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x00420B94: addiu       $a1, $a1, -0x410C
    ctx->r5 = ADD32(ctx->r5, -0X410C);
    // 0x00420B98: jal         0x00416644
    // 0x00420B9C: nop

    func_00416644(rdram, ctx);
        goto after_0;
    // 0x00420B9C: nop

    after_0:
    // 0x00420BA0: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x00420BA4: sw          $zero, 0x940($at)
    MEM_W(0X940, ctx->r1) = 0;
    // 0x00420BA8: j           L_00420C18
    // 0x00420BAC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_00420C18;
    // 0x00420BAC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00420BB0: lw          $v1, 0x24($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X24);
    // 0x00420BB4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00420BB8: beql        $v1, $v0, L_00420BC0
    if (ctx->r3 == ctx->r2) {
        // 0x00420BBC: sw          $zero, 0x24($s2)
        MEM_W(0X24, ctx->r18) = 0;
            goto L_00420BC0;
    }
    goto skip_1;
    // 0x00420BBC: sw          $zero, 0x24($s2)
    MEM_W(0X24, ctx->r18) = 0;
    skip_1:
L_00420BC0:
    // 0x00420BC0: lw          $v1, 0x24($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X24);
    // 0x00420BC4: beq         $v1, $zero, L_00420C18
    if (ctx->r3 == 0) {
        // 0x00420BC8: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_00420C18;
    }
    // 0x00420BC8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00420BCC: lui         $v0, 0x44
    ctx->r2 = S32(0X44 << 16);
    // 0x00420BD0: addiu       $v0, $v0, -0x4934
    ctx->r2 = ADD32(ctx->r2, -0X4934);
    // 0x00420BD4: beq         $v1, $v0, L_00420BF4
    if (ctx->r3 == ctx->r2) {
        // 0x00420BD8: nop
    
            goto L_00420BF4;
    }
    // 0x00420BD8: nop

    // 0x00420BDC: lw          $v0, 0x1C($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X1C);
    // 0x00420BE0: beq         $v0, $zero, L_00420BF4
    if (ctx->r2 == 0) {
        // 0x00420BE4: nop
    
            goto L_00420BF4;
    }
    // 0x00420BE4: nop

    // 0x00420BE8: lw          $v0, 0x51C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X51C);
    // 0x00420BEC: j           L_00420BFC
    // 0x00420BF0: addiu       $a0, $v0, 0x53C
    ctx->r4 = ADD32(ctx->r2, 0X53C);
        goto L_00420BFC;
    // 0x00420BF0: addiu       $a0, $v0, 0x53C
    ctx->r4 = ADD32(ctx->r2, 0X53C);
L_00420BF4:
    // 0x00420BF4: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x00420BF8: addiu       $a0, $a0, -0x61D4
    ctx->r4 = ADD32(ctx->r4, -0X61D4);
L_00420BFC:
    // 0x00420BFC: sw          $s1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r17;
    // 0x00420C00: lw          $a1, 0x24($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X24);
    // 0x00420C04: lw          $a2, 0x1C($s2)
    ctx->r6 = MEM_W(ctx->r18, 0X1C);
    // 0x00420C08: lw          $a3, 0x20($s2)
    ctx->r7 = MEM_W(ctx->r18, 0X20);
L_00420C0C:
    // 0x00420C0C: jal         0x00416644
    // 0x00420C10: nop

    func_00416644(rdram, ctx);
        goto after_1;
    // 0x00420C10: nop

    after_1:
    // 0x00420C14: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_00420C18:
    // 0x00420C18: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x00420C1C: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x00420C20: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x00420C24: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x00420C28: jr          $ra
    // 0x00420C2C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x00420C2C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void entry_00420B2C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00420B2C: beq         $s0, $v0, L_00420B64
    if (ctx->r16 == ctx->r2) {
        // 0x00420B30: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_00420B64;
    }
    // 0x00420B30: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00420B34: lw          $v1, 0x24($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X24);
    // 0x00420B38: bne         $v1, $v0, L_00420B64
    if (ctx->r3 != ctx->r2) {
        // 0x00420B3C: nop
    
            goto L_00420B64;
    }
    // 0x00420B3C: nop

    // 0x00420B40: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x00420B44: addiu       $a0, $a0, -0x61D4
    ctx->r4 = ADD32(ctx->r4, -0X61D4);
    // 0x00420B48: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x00420B4C: lw          $a2, 0x1C($s2)
    ctx->r6 = MEM_W(ctx->r18, 0X1C);
    // 0x00420B50: lw          $a3, 0x20($s2)
    ctx->r7 = MEM_W(ctx->r18, 0X20);
    // 0x00420B54: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x00420B58: addiu       $a1, $a1, -0x48EC
    ctx->r5 = ADD32(ctx->r5, -0X48EC);
    // 0x00420B5C: j           L_00420C0C
    // 0x00420B60: nop

        goto L_00420C0C;
    // 0x00420B60: nop

L_00420B64:
    // 0x00420B64: lw          $v0, 0x1C($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X1C);
    // 0x00420B68: beq         $v0, $zero, L_00420B7C
    if (ctx->r2 == 0) {
        // 0x00420B6C: nop
    
            goto L_00420B7C;
    }
    // 0x00420B6C: nop

    // 0x00420B70: lw          $v0, 0x51C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X51C);
    // 0x00420B74: j           L_00420B84
    // 0x00420B78: addiu       $a0, $v0, 0x53C
    ctx->r4 = ADD32(ctx->r2, 0X53C);
        goto L_00420B84;
    // 0x00420B78: addiu       $a0, $v0, 0x53C
    ctx->r4 = ADD32(ctx->r2, 0X53C);
L_00420B7C:
    // 0x00420B7C: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x00420B80: addiu       $a0, $a0, -0x61D4
    ctx->r4 = ADD32(ctx->r4, -0X61D4);
L_00420B84:
    // 0x00420B84: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x00420B88: lw          $a2, 0x1C($s2)
    ctx->r6 = MEM_W(ctx->r18, 0X1C);
    // 0x00420B8C: lw          $a3, 0x20($s2)
    ctx->r7 = MEM_W(ctx->r18, 0X20);
    // 0x00420B90: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x00420B94: addiu       $a1, $a1, -0x410C
    ctx->r5 = ADD32(ctx->r5, -0X410C);
    // 0x00420B98: jal         0x00416644
    // 0x00420B9C: nop

    func_00416644(rdram, ctx);
        goto after_0;
    // 0x00420B9C: nop

    after_0:
    // 0x00420BA0: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x00420BA4: sw          $zero, 0x940($at)
    MEM_W(0X940, ctx->r1) = 0;
    // 0x00420BA8: j           L_00420C18
    // 0x00420BAC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_00420C18;
    // 0x00420BAC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00420BB0: lw          $v1, 0x24($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X24);
    // 0x00420BB4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00420BB8: beql        $v1, $v0, L_00420BC0
    if (ctx->r3 == ctx->r2) {
        // 0x00420BBC: sw          $zero, 0x24($s2)
        MEM_W(0X24, ctx->r18) = 0;
            goto L_00420BC0;
    }
    goto skip_0;
    // 0x00420BBC: sw          $zero, 0x24($s2)
    MEM_W(0X24, ctx->r18) = 0;
    skip_0:
L_00420BC0:
    // 0x00420BC0: lw          $v1, 0x24($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X24);
    // 0x00420BC4: beq         $v1, $zero, L_00420C18
    if (ctx->r3 == 0) {
        // 0x00420BC8: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_00420C18;
    }
    // 0x00420BC8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00420BCC: lui         $v0, 0x44
    ctx->r2 = S32(0X44 << 16);
    // 0x00420BD0: addiu       $v0, $v0, -0x4934
    ctx->r2 = ADD32(ctx->r2, -0X4934);
    // 0x00420BD4: beq         $v1, $v0, L_00420BF4
    if (ctx->r3 == ctx->r2) {
        // 0x00420BD8: nop
    
            goto L_00420BF4;
    }
    // 0x00420BD8: nop

    // 0x00420BDC: lw          $v0, 0x1C($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X1C);
    // 0x00420BE0: beq         $v0, $zero, L_00420BF4
    if (ctx->r2 == 0) {
        // 0x00420BE4: nop
    
            goto L_00420BF4;
    }
    // 0x00420BE4: nop

    // 0x00420BE8: lw          $v0, 0x51C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X51C);
    // 0x00420BEC: j           L_00420BFC
    // 0x00420BF0: addiu       $a0, $v0, 0x53C
    ctx->r4 = ADD32(ctx->r2, 0X53C);
        goto L_00420BFC;
    // 0x00420BF0: addiu       $a0, $v0, 0x53C
    ctx->r4 = ADD32(ctx->r2, 0X53C);
L_00420BF4:
    // 0x00420BF4: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x00420BF8: addiu       $a0, $a0, -0x61D4
    ctx->r4 = ADD32(ctx->r4, -0X61D4);
L_00420BFC:
    // 0x00420BFC: sw          $s1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r17;
    // 0x00420C00: lw          $a1, 0x24($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X24);
    // 0x00420C04: lw          $a2, 0x1C($s2)
    ctx->r6 = MEM_W(ctx->r18, 0X1C);
    // 0x00420C08: lw          $a3, 0x20($s2)
    ctx->r7 = MEM_W(ctx->r18, 0X20);
L_00420C0C:
    // 0x00420C0C: jal         0x00416644
    // 0x00420C10: nop

    func_00416644(rdram, ctx);
        goto after_1;
    // 0x00420C10: nop

    after_1:
    // 0x00420C14: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_00420C18:
    // 0x00420C18: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x00420C1C: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x00420C20: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x00420C24: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x00420C28: jr          $ra
    // 0x00420C2C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x00420C2C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void entry_00420B38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00420B38: bne         $v1, $v0, L_00420B64
    if (ctx->r3 != ctx->r2) {
        // 0x00420B3C: nop
    
            goto L_00420B64;
    }
    // 0x00420B3C: nop

    // 0x00420B40: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x00420B44: addiu       $a0, $a0, -0x61D4
    ctx->r4 = ADD32(ctx->r4, -0X61D4);
    // 0x00420B48: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x00420B4C: lw          $a2, 0x1C($s2)
    ctx->r6 = MEM_W(ctx->r18, 0X1C);
    // 0x00420B50: lw          $a3, 0x20($s2)
    ctx->r7 = MEM_W(ctx->r18, 0X20);
    // 0x00420B54: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x00420B58: addiu       $a1, $a1, -0x48EC
    ctx->r5 = ADD32(ctx->r5, -0X48EC);
    // 0x00420B5C: j           L_00420C0C
    // 0x00420B60: nop

        goto L_00420C0C;
    // 0x00420B60: nop

L_00420B64:
    // 0x00420B64: lw          $v0, 0x1C($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X1C);
    // 0x00420B68: beq         $v0, $zero, L_00420B7C
    if (ctx->r2 == 0) {
        // 0x00420B6C: nop
    
            goto L_00420B7C;
    }
    // 0x00420B6C: nop

    // 0x00420B70: lw          $v0, 0x51C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X51C);
    // 0x00420B74: j           L_00420B84
    // 0x00420B78: addiu       $a0, $v0, 0x53C
    ctx->r4 = ADD32(ctx->r2, 0X53C);
        goto L_00420B84;
    // 0x00420B78: addiu       $a0, $v0, 0x53C
    ctx->r4 = ADD32(ctx->r2, 0X53C);
L_00420B7C:
    // 0x00420B7C: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x00420B80: addiu       $a0, $a0, -0x61D4
    ctx->r4 = ADD32(ctx->r4, -0X61D4);
L_00420B84:
    // 0x00420B84: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x00420B88: lw          $a2, 0x1C($s2)
    ctx->r6 = MEM_W(ctx->r18, 0X1C);
    // 0x00420B8C: lw          $a3, 0x20($s2)
    ctx->r7 = MEM_W(ctx->r18, 0X20);
    // 0x00420B90: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x00420B94: addiu       $a1, $a1, -0x410C
    ctx->r5 = ADD32(ctx->r5, -0X410C);
    // 0x00420B98: jal         0x00416644
    // 0x00420B9C: nop

    func_00416644(rdram, ctx);
        goto after_0;
    // 0x00420B9C: nop

    after_0:
    // 0x00420BA0: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x00420BA4: sw          $zero, 0x940($at)
    MEM_W(0X940, ctx->r1) = 0;
    // 0x00420BA8: j           L_00420C18
    // 0x00420BAC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_00420C18;
    // 0x00420BAC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00420BB0: lw          $v1, 0x24($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X24);
    // 0x00420BB4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00420BB8: beql        $v1, $v0, L_00420BC0
    if (ctx->r3 == ctx->r2) {
        // 0x00420BBC: sw          $zero, 0x24($s2)
        MEM_W(0X24, ctx->r18) = 0;
            goto L_00420BC0;
    }
    goto skip_0;
    // 0x00420BBC: sw          $zero, 0x24($s2)
    MEM_W(0X24, ctx->r18) = 0;
    skip_0:
L_00420BC0:
    // 0x00420BC0: lw          $v1, 0x24($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X24);
    // 0x00420BC4: beq         $v1, $zero, L_00420C18
    if (ctx->r3 == 0) {
        // 0x00420BC8: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_00420C18;
    }
    // 0x00420BC8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00420BCC: lui         $v0, 0x44
    ctx->r2 = S32(0X44 << 16);
    // 0x00420BD0: addiu       $v0, $v0, -0x4934
    ctx->r2 = ADD32(ctx->r2, -0X4934);
    // 0x00420BD4: beq         $v1, $v0, L_00420BF4
    if (ctx->r3 == ctx->r2) {
        // 0x00420BD8: nop
    
            goto L_00420BF4;
    }
    // 0x00420BD8: nop

    // 0x00420BDC: lw          $v0, 0x1C($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X1C);
    // 0x00420BE0: beq         $v0, $zero, L_00420BF4
    if (ctx->r2 == 0) {
        // 0x00420BE4: nop
    
            goto L_00420BF4;
    }
    // 0x00420BE4: nop

    // 0x00420BE8: lw          $v0, 0x51C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X51C);
    // 0x00420BEC: j           L_00420BFC
    // 0x00420BF0: addiu       $a0, $v0, 0x53C
    ctx->r4 = ADD32(ctx->r2, 0X53C);
        goto L_00420BFC;
    // 0x00420BF0: addiu       $a0, $v0, 0x53C
    ctx->r4 = ADD32(ctx->r2, 0X53C);
L_00420BF4:
    // 0x00420BF4: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x00420BF8: addiu       $a0, $a0, -0x61D4
    ctx->r4 = ADD32(ctx->r4, -0X61D4);
L_00420BFC:
    // 0x00420BFC: sw          $s1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r17;
    // 0x00420C00: lw          $a1, 0x24($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X24);
    // 0x00420C04: lw          $a2, 0x1C($s2)
    ctx->r6 = MEM_W(ctx->r18, 0X1C);
    // 0x00420C08: lw          $a3, 0x20($s2)
    ctx->r7 = MEM_W(ctx->r18, 0X20);
L_00420C0C:
    // 0x00420C0C: jal         0x00416644
    // 0x00420C10: nop

    func_00416644(rdram, ctx);
        goto after_1;
    // 0x00420C10: nop

    after_1:
    // 0x00420C14: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_00420C18:
    // 0x00420C18: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x00420C1C: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x00420C20: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x00420C24: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x00420C28: jr          $ra
    // 0x00420C2C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x00420C2C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void entry_00420BC8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00420BC8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00420BCC: lui         $v0, 0x44
    ctx->r2 = S32(0X44 << 16);
    // 0x00420BD0: addiu       $v0, $v0, -0x4934
    ctx->r2 = ADD32(ctx->r2, -0X4934);
    // 0x00420BD4: beq         $v1, $v0, L_00420BF4
    if (ctx->r3 == ctx->r2) {
        // 0x00420BD8: nop
    
            goto L_00420BF4;
    }
    // 0x00420BD8: nop

    // 0x00420BDC: lw          $v0, 0x1C($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X1C);
    // 0x00420BE0: beq         $v0, $zero, L_00420BF4
    if (ctx->r2 == 0) {
        // 0x00420BE4: nop
    
            goto L_00420BF4;
    }
    // 0x00420BE4: nop

    // 0x00420BE8: lw          $v0, 0x51C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X51C);
    // 0x00420BEC: j           L_00420BFC
    // 0x00420BF0: addiu       $a0, $v0, 0x53C
    ctx->r4 = ADD32(ctx->r2, 0X53C);
        goto L_00420BFC;
    // 0x00420BF0: addiu       $a0, $v0, 0x53C
    ctx->r4 = ADD32(ctx->r2, 0X53C);
L_00420BF4:
    // 0x00420BF4: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x00420BF8: addiu       $a0, $a0, -0x61D4
    ctx->r4 = ADD32(ctx->r4, -0X61D4);
L_00420BFC:
    // 0x00420BFC: sw          $s1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r17;
    // 0x00420C00: lw          $a1, 0x24($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X24);
    // 0x00420C04: lw          $a2, 0x1C($s2)
    ctx->r6 = MEM_W(ctx->r18, 0X1C);
    // 0x00420C08: lw          $a3, 0x20($s2)
    ctx->r7 = MEM_W(ctx->r18, 0X20);
    // 0x00420C0C: jal         0x00416644
    // 0x00420C10: nop

    func_00416644(rdram, ctx);
        goto after_0;
    // 0x00420C10: nop

    after_0:
    // 0x00420C14: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00420C18: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x00420C1C: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x00420C20: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x00420C24: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x00420C28: jr          $ra
    // 0x00420C2C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x00420C2C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void entry_00420C18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00420C18: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x00420C1C: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x00420C20: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x00420C24: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x00420C28: jr          $ra
    // 0x00420C2C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x00420C2C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void entry_00420C9C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00420C9C: lw          $v0, 0x20($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X20);
    // 0x00420CA0: lb          $s0, 0x4($v0)
    ctx->r16 = MEM_B(ctx->r2, 0X4);
    // 0x00420CA4: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x00420CA8: jal         0x0041DD90
    // 0x00420CAC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_0041DD90(rdram, ctx);
        goto after_0;
    // 0x00420CAC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_0:
    // 0x00420CB0: beq         $v0, $zero, L_00420CE0
    if (ctx->r2 == 0) {
        // 0x00420CB4: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_00420CE0;
    }
    // 0x00420CB4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00420CB8: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x00420CBC: addiu       $a0, $a0, -0x61D4
    ctx->r4 = ADD32(ctx->r4, -0X61D4);
    // 0x00420CC0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x00420CC4: lw          $a1, 0x24($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X24);
    // 0x00420CC8: lw          $a2, 0x1C($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X1C);
    // 0x00420CCC: lw          $a3, 0x20($s1)
    ctx->r7 = MEM_W(ctx->r17, 0X20);
    // 0x00420CD0: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x00420CD4: sw          $v0, 0x9BC($at)
    MEM_W(0X9BC, ctx->r1) = ctx->r2;
    // 0x00420CD8: j           L_00420F0C
    // 0x00420CDC: nop

        goto L_00420F0C;
    // 0x00420CDC: nop

L_00420CE0:
    // 0x00420CE0: jal         0x00426480
    // 0x00420CE4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00426480(rdram, ctx);
        goto after_1;
    // 0x00420CE4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x00420CE8: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x00420CEC: lw          $a1, 0x988($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X988);
    // 0x00420CF0: jal         0x00426064
    // 0x00420CF4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00426064(rdram, ctx);
        goto after_2;
    // 0x00420CF4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x00420CF8: bne         $v0, $zero, L_00420D28
    if (ctx->r2 != 0) {
        // 0x00420CFC: nop
    
            goto L_00420D28;
    }
    // 0x00420CFC: nop

    // 0x00420D00: lw          $v0, 0x24($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X24);
    // 0x00420D04: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x00420D08: addiu       $a0, $a0, -0x61D4
    ctx->r4 = ADD32(ctx->r4, -0X61D4);
    // 0x00420D0C: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x00420D10: lw          $a2, 0x1C($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X1C);
    // 0x00420D14: lw          $a3, 0x20($s1)
    ctx->r7 = MEM_W(ctx->r17, 0X20);
    // 0x00420D18: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x00420D1C: addiu       $a1, $a1, -0x4250
    ctx->r5 = ADD32(ctx->r5, -0X4250);
    // 0x00420D20: j           L_00420F0C
    // 0x00420D24: nop

        goto L_00420F0C;
    // 0x00420D24: nop

L_00420D28:
    // 0x00420D28: lw          $v0, 0x24($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X24);
    // 0x00420D2C: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x00420D30: addiu       $a0, $a0, -0x61D4
    ctx->r4 = ADD32(ctx->r4, -0X61D4);
    // 0x00420D34: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x00420D38: lw          $a2, 0x1C($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X1C);
    // 0x00420D3C: lw          $a3, 0x20($s1)
    ctx->r7 = MEM_W(ctx->r17, 0X20);
    // 0x00420D40: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x00420D44: addiu       $a1, $a1, -0x41E4
    ctx->r5 = ADD32(ctx->r5, -0X41E4);
    // 0x00420D48: j           L_00420F0C
    // 0x00420D4C: nop

        goto L_00420F0C;
    // 0x00420D4C: nop

    // 0x00420D50: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x00420D54: lw          $v0, 0x990($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X990);
    // 0x00420D58: beq         $v0, $zero, L_00420D70
    if (ctx->r2 == 0) {
        // 0x00420D5C: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_00420D70;
    }
    // 0x00420D5C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x00420D60: lui         $s0, 0x800C
    ctx->r16 = S32(0X800C << 16);
    // 0x00420D64: lw          $s0, 0x2028($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X2028);
    // 0x00420D68: j           L_00420D7C
    // 0x00420D6C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
        goto L_00420D7C;
    // 0x00420D6C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
L_00420D70:
    // 0x00420D70: lw          $v0, 0x20($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X20);
    // 0x00420D74: lb          $s0, 0x4($v0)
    ctx->r16 = MEM_B(ctx->r2, 0X4);
    // 0x00420D78: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
L_00420D7C:
    // 0x00420D7C: jal         0x0041DD90
    // 0x00420D80: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_0041DD90(rdram, ctx);
        goto after_3;
    // 0x00420D80: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_3:
    // 0x00420D84: beq         $v0, $zero, L_00420DB4
    if (ctx->r2 == 0) {
        // 0x00420D88: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_00420DB4;
    }
    // 0x00420D88: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00420D8C: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x00420D90: addiu       $a0, $a0, -0x61D4
    ctx->r4 = ADD32(ctx->r4, -0X61D4);
    // 0x00420D94: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x00420D98: lw          $a1, 0x24($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X24);
    // 0x00420D9C: lw          $a2, 0x1C($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X1C);
    // 0x00420DA0: lw          $a3, 0x20($s1)
    ctx->r7 = MEM_W(ctx->r17, 0X20);
    // 0x00420DA4: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x00420DA8: sw          $v0, 0x9BC($at)
    MEM_W(0X9BC, ctx->r1) = ctx->r2;
    // 0x00420DAC: j           L_00420F0C
    // 0x00420DB0: nop

        goto L_00420F0C;
    // 0x00420DB0: nop

L_00420DB4:
    // 0x00420DB4: jal         0x00426480
    // 0x00420DB8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00426480(rdram, ctx);
        goto after_4;
    // 0x00420DB8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
    // 0x00420DBC: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x00420DC0: lw          $a1, 0x9C4($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X9C4);
    // 0x00420DC4: jal         0x00426064
    // 0x00420DC8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00426064(rdram, ctx);
        goto after_5;
    // 0x00420DC8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_5:
    // 0x00420DCC: bne         $v0, $zero, L_00420DE8
    if (ctx->r2 != 0) {
        // 0x00420DD0: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_00420DE8;
    }
    // 0x00420DD0: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x00420DD4: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x00420DD8: jal         0x0041F0C8
    // 0x00420DDC: addu        $a2, $s3, $zero
    ctx->r6 = ADD32(ctx->r19, 0);
    func_0041F0C8(rdram, ctx);
        goto after_6;
    // 0x00420DDC: addu        $a2, $s3, $zero
    ctx->r6 = ADD32(ctx->r19, 0);
    after_6:
    // 0x00420DE0: j           L_00420F18
    // 0x00420DE4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_00420F18;
    // 0x00420DE4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_00420DE8:
    // 0x00420DE8: lw          $v0, 0x24($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X24);
    // 0x00420DEC: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x00420DF0: addiu       $a0, $a0, -0x61D4
    ctx->r4 = ADD32(ctx->r4, -0X61D4);
    // 0x00420DF4: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x00420DF8: lw          $a2, 0x1C($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X1C);
    // 0x00420DFC: lw          $a3, 0x20($s1)
    ctx->r7 = MEM_W(ctx->r17, 0X20);
    // 0x00420E00: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x00420E04: addiu       $a1, $a1, -0x41E4
    ctx->r5 = ADD32(ctx->r5, -0X41E4);
    // 0x00420E08: j           L_00420F0C
    // 0x00420E0C: nop

        goto L_00420F0C;
    // 0x00420E0C: nop

    // 0x00420E10: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x00420E14: lw          $v0, 0x990($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X990);
    // 0x00420E18: beq         $v0, $zero, L_00420E30
    if (ctx->r2 == 0) {
        // 0x00420E1C: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_00420E30;
    }
    // 0x00420E1C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x00420E20: lui         $s0, 0x800C
    ctx->r16 = S32(0X800C << 16);
    // 0x00420E24: lw          $s0, 0x2028($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X2028);
    // 0x00420E28: j           L_00420E3C
    // 0x00420E2C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
        goto L_00420E3C;
    // 0x00420E2C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
L_00420E30:
    // 0x00420E30: lw          $v0, 0x20($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X20);
    // 0x00420E34: lb          $s0, 0x4($v0)
    ctx->r16 = MEM_B(ctx->r2, 0X4);
    // 0x00420E38: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
L_00420E3C:
    // 0x00420E3C: jal         0x0041DD90
    // 0x00420E40: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_0041DD90(rdram, ctx);
        goto after_7;
    // 0x00420E40: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_7:
    // 0x00420E44: beq         $v0, $zero, L_00420E74
    if (ctx->r2 == 0) {
        // 0x00420E48: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_00420E74;
    }
    // 0x00420E48: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00420E4C: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x00420E50: addiu       $a0, $a0, -0x61D4
    ctx->r4 = ADD32(ctx->r4, -0X61D4);
    // 0x00420E54: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x00420E58: lw          $a1, 0x24($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X24);
    // 0x00420E5C: lw          $a2, 0x1C($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X1C);
    // 0x00420E60: lw          $a3, 0x20($s1)
    ctx->r7 = MEM_W(ctx->r17, 0X20);
    // 0x00420E64: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x00420E68: sw          $v0, 0x9BC($at)
    MEM_W(0X9BC, ctx->r1) = ctx->r2;
    // 0x00420E6C: j           L_00420F0C
    // 0x00420E70: nop

        goto L_00420F0C;
    // 0x00420E70: nop

L_00420E74:
    // 0x00420E74: jal         0x00426480
    // 0x00420E78: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00426480(rdram, ctx);
        goto after_8;
    // 0x00420E78: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_8:
    // 0x00420E7C: jal         0x00426814
    // 0x00420E80: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00426814(rdram, ctx);
        goto after_9;
    // 0x00420E80: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_9:
    // 0x00420E84: bne         $v0, $zero, L_00420EB4
    if (ctx->r2 != 0) {
        // 0x00420E88: nop
    
            goto L_00420EB4;
    }
    // 0x00420E88: nop

    // 0x00420E8C: lw          $v0, 0x24($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X24);
    // 0x00420E90: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x00420E94: addiu       $a0, $a0, -0x61D4
    ctx->r4 = ADD32(ctx->r4, -0X61D4);
    // 0x00420E98: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x00420E9C: lw          $a2, 0x1C($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X1C);
    // 0x00420EA0: lw          $a3, 0x20($s1)
    ctx->r7 = MEM_W(ctx->r17, 0X20);
    // 0x00420EA4: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x00420EA8: addiu       $a1, $a1, -0x422C
    ctx->r5 = ADD32(ctx->r5, -0X422C);
    // 0x00420EAC: j           L_00420F0C
    // 0x00420EB0: nop

        goto L_00420F0C;
    // 0x00420EB0: nop

L_00420EB4:
    // 0x00420EB4: lw          $v0, 0x24($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X24);
    // 0x00420EB8: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x00420EBC: addiu       $a0, $a0, -0x61D4
    ctx->r4 = ADD32(ctx->r4, -0X61D4);
    // 0x00420EC0: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x00420EC4: lw          $a2, 0x1C($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X1C);
    // 0x00420EC8: lw          $a3, 0x20($s1)
    ctx->r7 = MEM_W(ctx->r17, 0X20);
    // 0x00420ECC: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x00420ED0: addiu       $a1, $a1, -0x3FC8
    ctx->r5 = ADD32(ctx->r5, -0X3FC8);
    // 0x00420ED4: j           L_00420F0C
    // 0x00420ED8: nop

        goto L_00420F0C;
    // 0x00420ED8: nop

    // 0x00420EDC: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x00420EE0: lw          $v0, 0x990($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X990);
    // 0x00420EE4: beq         $v0, $zero, L_00420EF4
    if (ctx->r2 == 0) {
        // 0x00420EE8: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_00420EF4;
    }
    // 0x00420EE8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00420EEC: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x00420EF0: sw          $v0, -0x4EEC($at)
    MEM_W(-0X4EEC, ctx->r1) = ctx->r2;
L_00420EF4:
    // 0x00420EF4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x00420EF8: lw          $a1, 0x24($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X24);
    // 0x00420EFC: lw          $a2, 0x1C($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X1C);
    // 0x00420F00: lw          $a3, 0x20($s1)
    ctx->r7 = MEM_W(ctx->r17, 0X20);
    // 0x00420F04: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x00420F08: addiu       $a0, $a0, -0x61D4
    ctx->r4 = ADD32(ctx->r4, -0X61D4);
L_00420F0C:
    // 0x00420F0C: jal         0x00416644
    // 0x00420F10: nop

    func_00416644(rdram, ctx);
        goto after_10;
    // 0x00420F10: nop

    after_10:
    // 0x00420F14: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_00420F18:
    // 0x00420F18: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x00420F1C: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x00420F20: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x00420F24: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x00420F28: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x00420F2C: jr          $ra
    // 0x00420F30: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x00420F30: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void entry_00420D5C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00420D5C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x00420D60: lui         $s0, 0x800C
    ctx->r16 = S32(0X800C << 16);
    // 0x00420D64: lw          $s0, 0x2028($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X2028);
    // 0x00420D68: j           L_00420D7C
    // 0x00420D6C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
        goto L_00420D7C;
    // 0x00420D6C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x00420D70: lw          $v0, 0x20($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X20);
    // 0x00420D74: lb          $s0, 0x4($v0)
    ctx->r16 = MEM_B(ctx->r2, 0X4);
    // 0x00420D78: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
L_00420D7C:
    // 0x00420D7C: jal         0x0041DD90
    // 0x00420D80: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_0041DD90(rdram, ctx);
        goto after_0;
    // 0x00420D80: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_0:
    // 0x00420D84: beq         $v0, $zero, L_00420DB4
    if (ctx->r2 == 0) {
        // 0x00420D88: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_00420DB4;
    }
    // 0x00420D88: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00420D8C: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x00420D90: addiu       $a0, $a0, -0x61D4
    ctx->r4 = ADD32(ctx->r4, -0X61D4);
    // 0x00420D94: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x00420D98: lw          $a1, 0x24($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X24);
    // 0x00420D9C: lw          $a2, 0x1C($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X1C);
    // 0x00420DA0: lw          $a3, 0x20($s1)
    ctx->r7 = MEM_W(ctx->r17, 0X20);
    // 0x00420DA4: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x00420DA8: sw          $v0, 0x9BC($at)
    MEM_W(0X9BC, ctx->r1) = ctx->r2;
    // 0x00420DAC: j           L_00420F0C
    // 0x00420DB0: nop

        goto L_00420F0C;
    // 0x00420DB0: nop

L_00420DB4:
    // 0x00420DB4: jal         0x00426480
    // 0x00420DB8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00426480(rdram, ctx);
        goto after_1;
    // 0x00420DB8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x00420DBC: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x00420DC0: lw          $a1, 0x9C4($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X9C4);
    // 0x00420DC4: jal         0x00426064
    // 0x00420DC8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00426064(rdram, ctx);
        goto after_2;
    // 0x00420DC8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x00420DCC: bne         $v0, $zero, L_00420DE8
    if (ctx->r2 != 0) {
        // 0x00420DD0: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_00420DE8;
    }
    // 0x00420DD0: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x00420DD4: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x00420DD8: jal         0x0041F0C8
    // 0x00420DDC: addu        $a2, $s3, $zero
    ctx->r6 = ADD32(ctx->r19, 0);
    func_0041F0C8(rdram, ctx);
        goto after_3;
    // 0x00420DDC: addu        $a2, $s3, $zero
    ctx->r6 = ADD32(ctx->r19, 0);
    after_3:
    // 0x00420DE0: j           L_00420F18
    // 0x00420DE4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_00420F18;
    // 0x00420DE4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_00420DE8:
    // 0x00420DE8: lw          $v0, 0x24($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X24);
    // 0x00420DEC: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x00420DF0: addiu       $a0, $a0, -0x61D4
    ctx->r4 = ADD32(ctx->r4, -0X61D4);
    // 0x00420DF4: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x00420DF8: lw          $a2, 0x1C($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X1C);
    // 0x00420DFC: lw          $a3, 0x20($s1)
    ctx->r7 = MEM_W(ctx->r17, 0X20);
    // 0x00420E00: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x00420E04: addiu       $a1, $a1, -0x41E4
    ctx->r5 = ADD32(ctx->r5, -0X41E4);
    // 0x00420E08: j           L_00420F0C
    // 0x00420E0C: nop

        goto L_00420F0C;
    // 0x00420E0C: nop

    // 0x00420E10: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x00420E14: lw          $v0, 0x990($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X990);
    // 0x00420E18: beq         $v0, $zero, L_00420E30
    if (ctx->r2 == 0) {
        // 0x00420E1C: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_00420E30;
    }
    // 0x00420E1C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x00420E20: lui         $s0, 0x800C
    ctx->r16 = S32(0X800C << 16);
    // 0x00420E24: lw          $s0, 0x2028($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X2028);
    // 0x00420E28: j           L_00420E3C
    // 0x00420E2C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
        goto L_00420E3C;
    // 0x00420E2C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
L_00420E30:
    // 0x00420E30: lw          $v0, 0x20($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X20);
    // 0x00420E34: lb          $s0, 0x4($v0)
    ctx->r16 = MEM_B(ctx->r2, 0X4);
    // 0x00420E38: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
L_00420E3C:
    // 0x00420E3C: jal         0x0041DD90
    // 0x00420E40: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_0041DD90(rdram, ctx);
        goto after_4;
    // 0x00420E40: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_4:
    // 0x00420E44: beq         $v0, $zero, L_00420E74
    if (ctx->r2 == 0) {
        // 0x00420E48: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_00420E74;
    }
    // 0x00420E48: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00420E4C: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x00420E50: addiu       $a0, $a0, -0x61D4
    ctx->r4 = ADD32(ctx->r4, -0X61D4);
    // 0x00420E54: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x00420E58: lw          $a1, 0x24($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X24);
    // 0x00420E5C: lw          $a2, 0x1C($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X1C);
    // 0x00420E60: lw          $a3, 0x20($s1)
    ctx->r7 = MEM_W(ctx->r17, 0X20);
    // 0x00420E64: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x00420E68: sw          $v0, 0x9BC($at)
    MEM_W(0X9BC, ctx->r1) = ctx->r2;
    // 0x00420E6C: j           L_00420F0C
    // 0x00420E70: nop

        goto L_00420F0C;
    // 0x00420E70: nop

L_00420E74:
    // 0x00420E74: jal         0x00426480
    // 0x00420E78: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00426480(rdram, ctx);
        goto after_5;
    // 0x00420E78: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_5:
    // 0x00420E7C: jal         0x00426814
    // 0x00420E80: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00426814(rdram, ctx);
        goto after_6;
    // 0x00420E80: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_6:
    // 0x00420E84: bne         $v0, $zero, L_00420EB4
    if (ctx->r2 != 0) {
        // 0x00420E88: nop
    
            goto L_00420EB4;
    }
    // 0x00420E88: nop

    // 0x00420E8C: lw          $v0, 0x24($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X24);
    // 0x00420E90: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x00420E94: addiu       $a0, $a0, -0x61D4
    ctx->r4 = ADD32(ctx->r4, -0X61D4);
    // 0x00420E98: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x00420E9C: lw          $a2, 0x1C($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X1C);
    // 0x00420EA0: lw          $a3, 0x20($s1)
    ctx->r7 = MEM_W(ctx->r17, 0X20);
    // 0x00420EA4: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x00420EA8: addiu       $a1, $a1, -0x422C
    ctx->r5 = ADD32(ctx->r5, -0X422C);
    // 0x00420EAC: j           L_00420F0C
    // 0x00420EB0: nop

        goto L_00420F0C;
    // 0x00420EB0: nop

L_00420EB4:
    // 0x00420EB4: lw          $v0, 0x24($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X24);
    // 0x00420EB8: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x00420EBC: addiu       $a0, $a0, -0x61D4
    ctx->r4 = ADD32(ctx->r4, -0X61D4);
    // 0x00420EC0: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x00420EC4: lw          $a2, 0x1C($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X1C);
    // 0x00420EC8: lw          $a3, 0x20($s1)
    ctx->r7 = MEM_W(ctx->r17, 0X20);
    // 0x00420ECC: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x00420ED0: addiu       $a1, $a1, -0x3FC8
    ctx->r5 = ADD32(ctx->r5, -0X3FC8);
    // 0x00420ED4: j           L_00420F0C
    // 0x00420ED8: nop

        goto L_00420F0C;
    // 0x00420ED8: nop

    // 0x00420EDC: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x00420EE0: lw          $v0, 0x990($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X990);
    // 0x00420EE4: beq         $v0, $zero, L_00420EF4
    if (ctx->r2 == 0) {
        // 0x00420EE8: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_00420EF4;
    }
    // 0x00420EE8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00420EEC: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x00420EF0: sw          $v0, -0x4EEC($at)
    MEM_W(-0X4EEC, ctx->r1) = ctx->r2;
L_00420EF4:
    // 0x00420EF4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x00420EF8: lw          $a1, 0x24($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X24);
    // 0x00420EFC: lw          $a2, 0x1C($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X1C);
    // 0x00420F00: lw          $a3, 0x20($s1)
    ctx->r7 = MEM_W(ctx->r17, 0X20);
    // 0x00420F04: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x00420F08: addiu       $a0, $a0, -0x61D4
    ctx->r4 = ADD32(ctx->r4, -0X61D4);
L_00420F0C:
    // 0x00420F0C: jal         0x00416644
    // 0x00420F10: nop

    func_00416644(rdram, ctx);
        goto after_7;
    // 0x00420F10: nop

    after_7:
    // 0x00420F14: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_00420F18:
    // 0x00420F18: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x00420F1C: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x00420F20: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x00420F24: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x00420F28: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x00420F2C: jr          $ra
    // 0x00420F30: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x00420F30: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void entry_00420E2C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00420E2C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x00420E30: lw          $v0, 0x20($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X20);
    // 0x00420E34: lb          $s0, 0x4($v0)
    ctx->r16 = MEM_B(ctx->r2, 0X4);
    // 0x00420E38: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x00420E3C: jal         0x0041DD90
    // 0x00420E40: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_0041DD90(rdram, ctx);
        goto after_0;
    // 0x00420E40: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_0:
    // 0x00420E44: beq         $v0, $zero, L_00420E74
    if (ctx->r2 == 0) {
        // 0x00420E48: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_00420E74;
    }
    // 0x00420E48: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00420E4C: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x00420E50: addiu       $a0, $a0, -0x61D4
    ctx->r4 = ADD32(ctx->r4, -0X61D4);
    // 0x00420E54: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x00420E58: lw          $a1, 0x24($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X24);
    // 0x00420E5C: lw          $a2, 0x1C($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X1C);
    // 0x00420E60: lw          $a3, 0x20($s1)
    ctx->r7 = MEM_W(ctx->r17, 0X20);
    // 0x00420E64: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x00420E68: sw          $v0, 0x9BC($at)
    MEM_W(0X9BC, ctx->r1) = ctx->r2;
    // 0x00420E6C: j           L_00420F0C
    // 0x00420E70: nop

        goto L_00420F0C;
    // 0x00420E70: nop

L_00420E74:
    // 0x00420E74: jal         0x00426480
    // 0x00420E78: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00426480(rdram, ctx);
        goto after_1;
    // 0x00420E78: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x00420E7C: jal         0x00426814
    // 0x00420E80: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00426814(rdram, ctx);
        goto after_2;
    // 0x00420E80: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x00420E84: bne         $v0, $zero, L_00420EB4
    if (ctx->r2 != 0) {
        // 0x00420E88: nop
    
            goto L_00420EB4;
    }
    // 0x00420E88: nop

    // 0x00420E8C: lw          $v0, 0x24($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X24);
    // 0x00420E90: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x00420E94: addiu       $a0, $a0, -0x61D4
    ctx->r4 = ADD32(ctx->r4, -0X61D4);
    // 0x00420E98: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x00420E9C: lw          $a2, 0x1C($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X1C);
    // 0x00420EA0: lw          $a3, 0x20($s1)
    ctx->r7 = MEM_W(ctx->r17, 0X20);
    // 0x00420EA4: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x00420EA8: addiu       $a1, $a1, -0x422C
    ctx->r5 = ADD32(ctx->r5, -0X422C);
    // 0x00420EAC: j           L_00420F0C
    // 0x00420EB0: nop

        goto L_00420F0C;
    // 0x00420EB0: nop

L_00420EB4:
    // 0x00420EB4: lw          $v0, 0x24($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X24);
    // 0x00420EB8: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x00420EBC: addiu       $a0, $a0, -0x61D4
    ctx->r4 = ADD32(ctx->r4, -0X61D4);
    // 0x00420EC0: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x00420EC4: lw          $a2, 0x1C($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X1C);
    // 0x00420EC8: lw          $a3, 0x20($s1)
    ctx->r7 = MEM_W(ctx->r17, 0X20);
    // 0x00420ECC: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x00420ED0: addiu       $a1, $a1, -0x3FC8
    ctx->r5 = ADD32(ctx->r5, -0X3FC8);
    // 0x00420ED4: j           L_00420F0C
    // 0x00420ED8: nop

        goto L_00420F0C;
    // 0x00420ED8: nop

    // 0x00420EDC: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x00420EE0: lw          $v0, 0x990($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X990);
    // 0x00420EE4: beq         $v0, $zero, L_00420EF4
    if (ctx->r2 == 0) {
        // 0x00420EE8: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_00420EF4;
    }
    // 0x00420EE8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00420EEC: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x00420EF0: sw          $v0, -0x4EEC($at)
    MEM_W(-0X4EEC, ctx->r1) = ctx->r2;
L_00420EF4:
    // 0x00420EF4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x00420EF8: lw          $a1, 0x24($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X24);
    // 0x00420EFC: lw          $a2, 0x1C($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X1C);
    // 0x00420F00: lw          $a3, 0x20($s1)
    ctx->r7 = MEM_W(ctx->r17, 0X20);
    // 0x00420F04: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x00420F08: addiu       $a0, $a0, -0x61D4
    ctx->r4 = ADD32(ctx->r4, -0X61D4);
L_00420F0C:
    // 0x00420F0C: jal         0x00416644
    // 0x00420F10: nop

    func_00416644(rdram, ctx);
        goto after_3;
    // 0x00420F10: nop

    after_3:
    // 0x00420F14: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00420F18: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x00420F1C: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x00420F20: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x00420F24: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x00420F28: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x00420F2C: jr          $ra
    // 0x00420F30: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x00420F30: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void entry_00420E38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00420E38: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x00420E3C: jal         0x0041DD90
    // 0x00420E40: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_0041DD90(rdram, ctx);
        goto after_0;
    // 0x00420E40: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_0:
    // 0x00420E44: beq         $v0, $zero, L_00420E74
    if (ctx->r2 == 0) {
        // 0x00420E48: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_00420E74;
    }
    // 0x00420E48: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00420E4C: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x00420E50: addiu       $a0, $a0, -0x61D4
    ctx->r4 = ADD32(ctx->r4, -0X61D4);
    // 0x00420E54: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x00420E58: lw          $a1, 0x24($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X24);
    // 0x00420E5C: lw          $a2, 0x1C($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X1C);
    // 0x00420E60: lw          $a3, 0x20($s1)
    ctx->r7 = MEM_W(ctx->r17, 0X20);
    // 0x00420E64: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x00420E68: sw          $v0, 0x9BC($at)
    MEM_W(0X9BC, ctx->r1) = ctx->r2;
    // 0x00420E6C: j           L_00420F0C
    // 0x00420E70: nop

        goto L_00420F0C;
    // 0x00420E70: nop

L_00420E74:
    // 0x00420E74: jal         0x00426480
    // 0x00420E78: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00426480(rdram, ctx);
        goto after_1;
    // 0x00420E78: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x00420E7C: jal         0x00426814
    // 0x00420E80: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00426814(rdram, ctx);
        goto after_2;
    // 0x00420E80: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x00420E84: bne         $v0, $zero, L_00420EB4
    if (ctx->r2 != 0) {
        // 0x00420E88: nop
    
            goto L_00420EB4;
    }
    // 0x00420E88: nop

    // 0x00420E8C: lw          $v0, 0x24($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X24);
    // 0x00420E90: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x00420E94: addiu       $a0, $a0, -0x61D4
    ctx->r4 = ADD32(ctx->r4, -0X61D4);
    // 0x00420E98: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x00420E9C: lw          $a2, 0x1C($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X1C);
    // 0x00420EA0: lw          $a3, 0x20($s1)
    ctx->r7 = MEM_W(ctx->r17, 0X20);
    // 0x00420EA4: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x00420EA8: addiu       $a1, $a1, -0x422C
    ctx->r5 = ADD32(ctx->r5, -0X422C);
    // 0x00420EAC: j           L_00420F0C
    // 0x00420EB0: nop

        goto L_00420F0C;
    // 0x00420EB0: nop

L_00420EB4:
    // 0x00420EB4: lw          $v0, 0x24($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X24);
    // 0x00420EB8: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x00420EBC: addiu       $a0, $a0, -0x61D4
    ctx->r4 = ADD32(ctx->r4, -0X61D4);
    // 0x00420EC0: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x00420EC4: lw          $a2, 0x1C($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X1C);
    // 0x00420EC8: lw          $a3, 0x20($s1)
    ctx->r7 = MEM_W(ctx->r17, 0X20);
    // 0x00420ECC: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x00420ED0: addiu       $a1, $a1, -0x3FC8
    ctx->r5 = ADD32(ctx->r5, -0X3FC8);
    // 0x00420ED4: j           L_00420F0C
    // 0x00420ED8: nop

        goto L_00420F0C;
    // 0x00420ED8: nop

    // 0x00420EDC: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x00420EE0: lw          $v0, 0x990($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X990);
    // 0x00420EE4: beq         $v0, $zero, L_00420EF4
    if (ctx->r2 == 0) {
        // 0x00420EE8: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_00420EF4;
    }
    // 0x00420EE8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00420EEC: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x00420EF0: sw          $v0, -0x4EEC($at)
    MEM_W(-0X4EEC, ctx->r1) = ctx->r2;
L_00420EF4:
    // 0x00420EF4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x00420EF8: lw          $a1, 0x24($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X24);
    // 0x00420EFC: lw          $a2, 0x1C($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X1C);
    // 0x00420F00: lw          $a3, 0x20($s1)
    ctx->r7 = MEM_W(ctx->r17, 0X20);
    // 0x00420F04: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x00420F08: addiu       $a0, $a0, -0x61D4
    ctx->r4 = ADD32(ctx->r4, -0X61D4);
L_00420F0C:
    // 0x00420F0C: jal         0x00416644
    // 0x00420F10: nop

    func_00416644(rdram, ctx);
        goto after_3;
    // 0x00420F10: nop

    after_3:
    // 0x00420F14: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00420F18: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x00420F1C: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x00420F20: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x00420F24: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x00420F28: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x00420F2C: jr          $ra
    // 0x00420F30: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x00420F30: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void entry_00420EB4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00420EB4: lw          $v0, 0x24($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X24);
    // 0x00420EB8: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x00420EBC: addiu       $a0, $a0, -0x61D4
    ctx->r4 = ADD32(ctx->r4, -0X61D4);
    // 0x00420EC0: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x00420EC4: lw          $a2, 0x1C($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X1C);
    // 0x00420EC8: lw          $a3, 0x20($s1)
    ctx->r7 = MEM_W(ctx->r17, 0X20);
    // 0x00420ECC: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x00420ED0: addiu       $a1, $a1, -0x3FC8
    ctx->r5 = ADD32(ctx->r5, -0X3FC8);
    // 0x00420ED4: j           L_00420F0C
    // 0x00420ED8: nop

        goto L_00420F0C;
    // 0x00420ED8: nop

    // 0x00420EDC: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x00420EE0: lw          $v0, 0x990($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X990);
    // 0x00420EE4: beq         $v0, $zero, L_00420EF4
    if (ctx->r2 == 0) {
        // 0x00420EE8: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_00420EF4;
    }
    // 0x00420EE8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00420EEC: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x00420EF0: sw          $v0, -0x4EEC($at)
    MEM_W(-0X4EEC, ctx->r1) = ctx->r2;
L_00420EF4:
    // 0x00420EF4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x00420EF8: lw          $a1, 0x24($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X24);
    // 0x00420EFC: lw          $a2, 0x1C($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X1C);
    // 0x00420F00: lw          $a3, 0x20($s1)
    ctx->r7 = MEM_W(ctx->r17, 0X20);
    // 0x00420F04: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x00420F08: addiu       $a0, $a0, -0x61D4
    ctx->r4 = ADD32(ctx->r4, -0X61D4);
L_00420F0C:
    // 0x00420F0C: jal         0x00416644
    // 0x00420F10: nop

    func_00416644(rdram, ctx);
        goto after_0;
    // 0x00420F10: nop

    after_0:
    // 0x00420F14: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00420F18: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x00420F1C: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x00420F20: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x00420F24: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x00420F28: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x00420F2C: jr          $ra
    // 0x00420F30: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x00420F30: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void entry_00420FB4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00420FB4: lw          $a2, 0x1C($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X1C);
    // 0x00420FB8: lw          $a3, 0x20($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X20);
    // 0x00420FBC: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x00420FC0: sw          $v0, 0x9BC($at)
    MEM_W(0X9BC, ctx->r1) = ctx->r2;
    // 0x00420FC4: j           L_00421190
    // 0x00420FC8: nop

        goto L_00421190;
    // 0x00420FC8: nop

    // 0x00420FCC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x00420FD0: lw          $a1, 0x24($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X24);
    // 0x00420FD4: lw          $a2, 0x1C($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X1C);
    // 0x00420FD8: lw          $a3, 0x20($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X20);
    // 0x00420FDC: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x00420FE0: addiu       $a0, $a0, -0x61D4
    ctx->r4 = ADD32(ctx->r4, -0X61D4);
    // 0x00420FE4: j           L_00421190
    // 0x00420FE8: nop

        goto L_00421190;
    // 0x00420FE8: nop

    // 0x00420FEC: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x00420FF0: lw          $v0, 0x990($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X990);
    // 0x00420FF4: beq         $v0, $zero, L_0042100C
    if (ctx->r2 == 0) {
        // 0x00420FF8: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_0042100C;
    }
    // 0x00420FF8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00420FFC: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x00421000: lw          $a1, 0x2028($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X2028);
    // 0x00421004: j           L_00421014
    // 0x00421008: nop

        goto L_00421014;
    // 0x00421008: nop

L_0042100C:
    // 0x0042100C: lw          $v0, 0x20($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X20);
    // 0x00421010: lb          $a1, 0x4($v0)
    ctx->r5 = MEM_B(ctx->r2, 0X4);
L_00421014:
    // 0x00421014: jal         0x0041DD90
    // 0x00421018: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_0041DD90(rdram, ctx);
        goto after_0;
    // 0x00421018: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_0:
    // 0x0042101C: beq         $v0, $zero, L_0042104C
    if (ctx->r2 == 0) {
        // 0x00421020: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_0042104C;
    }
    // 0x00421020: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00421024: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x00421028: addiu       $a0, $a0, -0x61D4
    ctx->r4 = ADD32(ctx->r4, -0X61D4);
    // 0x0042102C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x00421030: lw          $a1, 0x24($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X24);
    // 0x00421034: lw          $a2, 0x1C($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X1C);
    // 0x00421038: lw          $a3, 0x20($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X20);
    // 0x0042103C: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x00421040: sw          $v0, 0x9BC($at)
    MEM_W(0X9BC, ctx->r1) = ctx->r2;
    // 0x00421044: j           L_00421190
    // 0x00421048: nop

        goto L_00421190;
    // 0x00421048: nop

L_0042104C:
    // 0x0042104C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x00421050: lw          $a1, 0x24($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X24);
    // 0x00421054: lw          $a2, 0x1C($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X1C);
    // 0x00421058: lw          $a3, 0x20($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X20);
    // 0x0042105C: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x00421060: addiu       $a0, $a0, -0x61D4
    ctx->r4 = ADD32(ctx->r4, -0X61D4);
    // 0x00421064: j           L_00421190
    // 0x00421068: nop

        goto L_00421190;
    // 0x00421068: nop

    // 0x0042106C: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x00421070: lw          $v0, 0x990($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X990);
    // 0x00421074: beq         $v0, $zero, L_0042108C
    if (ctx->r2 == 0) {
        // 0x00421078: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_0042108C;
    }
    // 0x00421078: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0042107C: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x00421080: lw          $a1, 0x2028($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X2028);
    // 0x00421084: j           L_00421094
    // 0x00421088: nop

        goto L_00421094;
    // 0x00421088: nop

L_0042108C:
    // 0x0042108C: lw          $v0, 0x20($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X20);
    // 0x00421090: lb          $a1, 0x4($v0)
    ctx->r5 = MEM_B(ctx->r2, 0X4);
L_00421094:
    // 0x00421094: jal         0x0041DD90
    // 0x00421098: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_0041DD90(rdram, ctx);
        goto after_1;
    // 0x00421098: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_1:
    // 0x0042109C: beq         $v0, $zero, L_004210CC
    if (ctx->r2 == 0) {
        // 0x004210A0: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_004210CC;
    }
    // 0x004210A0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x004210A4: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x004210A8: addiu       $a0, $a0, -0x61D4
    ctx->r4 = ADD32(ctx->r4, -0X61D4);
    // 0x004210AC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x004210B0: lw          $a1, 0x24($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X24);
    // 0x004210B4: lw          $a2, 0x1C($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X1C);
    // 0x004210B8: lw          $a3, 0x20($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X20);
    // 0x004210BC: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x004210C0: sw          $v0, 0x9BC($at)
    MEM_W(0X9BC, ctx->r1) = ctx->r2;
    // 0x004210C4: j           L_00421190
    // 0x004210C8: nop

        goto L_00421190;
    // 0x004210C8: nop

L_004210CC:
    // 0x004210CC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x004210D0: lw          $a1, 0x24($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X24);
    // 0x004210D4: lw          $a2, 0x1C($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X1C);
    // 0x004210D8: lw          $a3, 0x20($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X20);
    // 0x004210DC: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x004210E0: addiu       $a0, $a0, -0x61D4
    ctx->r4 = ADD32(ctx->r4, -0X61D4);
    // 0x004210E4: j           L_00421190
    // 0x004210E8: nop

        goto L_00421190;
    // 0x004210E8: nop

    // 0x004210EC: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x004210F0: lw          $v0, 0x990($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X990);
    // 0x004210F4: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x004210F8: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x004210FC: sw          $v1, 0x9BC($at)
    MEM_W(0X9BC, ctx->r1) = ctx->r3;
    // 0x00421100: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x00421104: sw          $zero, 0x940($at)
    MEM_W(0X940, ctx->r1) = 0;
    // 0x00421108: beq         $v0, $zero, L_00421120
    if (ctx->r2 == 0) {
        // 0x0042110C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_00421120;
    }
    // 0x0042110C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00421110: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x00421114: sw          $v1, -0xEB8($at)
    MEM_W(-0XEB8, ctx->r1) = ctx->r3;
    // 0x00421118: j           L_0042119C
    // 0x0042111C: nop

        goto L_0042119C;
    // 0x0042111C: nop

L_00421120:
    // 0x00421120: jal         0x0041DC5C
    // 0x00421124: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_0041DC5C(rdram, ctx);
        goto after_2;
    // 0x00421124: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x00421128: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x0042112C: bne         $a1, $zero, L_00421138
    if (ctx->r5 != 0) {
        // 0x00421130: nop
    
            goto L_00421138;
    }
    // 0x00421130: nop

    // 0x00421134: lw          $a1, 0x24($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X24);
L_00421138:
    // 0x00421138: lw          $v1, 0x24($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X24);
    // 0x0042113C: lui         $v0, 0x44
    ctx->r2 = S32(0X44 << 16);
    // 0x00421140: addiu       $v0, $v0, -0x410C
    ctx->r2 = ADD32(ctx->r2, -0X410C);
    // 0x00421144: beq         $v1, $v0, L_0042115C
    if (ctx->r3 == ctx->r2) {
        // 0x00421148: nop
    
            goto L_0042115C;
    }
    // 0x00421148: nop

    // 0x0042114C: lui         $v0, 0x44
    ctx->r2 = S32(0X44 << 16);
    // 0x00421150: addiu       $v0, $v0, -0x4130
    ctx->r2 = ADD32(ctx->r2, -0X4130);
    // 0x00421154: bne         $v1, $v0, L_00421164
    if (ctx->r3 != ctx->r2) {
        // 0x00421158: nop
    
            goto L_00421164;
    }
    // 0x00421158: nop

L_0042115C:
    // 0x0042115C: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x00421160: sw          $zero, 0x940($at)
    MEM_W(0X940, ctx->r1) = 0;
L_00421164:
    // 0x00421164: lw          $v0, 0x1C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X1C);
    // 0x00421168: beq         $v0, $zero, L_0042117C
    if (ctx->r2 == 0) {
        // 0x0042116C: nop
    
            goto L_0042117C;
    }
    // 0x0042116C: nop

    // 0x00421170: lw          $v0, 0x51C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X51C);
    // 0x00421174: j           L_00421184
    // 0x00421178: addiu       $a0, $v0, 0x53C
    ctx->r4 = ADD32(ctx->r2, 0X53C);
        goto L_00421184;
    // 0x00421178: addiu       $a0, $v0, 0x53C
    ctx->r4 = ADD32(ctx->r2, 0X53C);
L_0042117C:
    // 0x0042117C: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x00421180: addiu       $a0, $a0, -0x61D4
    ctx->r4 = ADD32(ctx->r4, -0X61D4);
L_00421184:
    // 0x00421184: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x00421188: lw          $a2, 0x1C($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X1C);
    // 0x0042118C: lw          $a3, 0x20($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X20);
L_00421190:
    // 0x00421190: jal         0x00416644
    // 0x00421194: nop

    func_00416644(rdram, ctx);
        goto after_3;
    // 0x00421194: nop

    after_3:
    // 0x00421198: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_0042119C:
    // 0x0042119C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x004211A0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x004211A4: jr          $ra
    // 0x004211A8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x004211A8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void entry_004210A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004210A4: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x004210A8: addiu       $a0, $a0, -0x61D4
    ctx->r4 = ADD32(ctx->r4, -0X61D4);
    // 0x004210AC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x004210B0: lw          $a1, 0x24($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X24);
    // 0x004210B4: lw          $a2, 0x1C($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X1C);
    // 0x004210B8: lw          $a3, 0x20($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X20);
    // 0x004210BC: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x004210C0: sw          $v0, 0x9BC($at)
    MEM_W(0X9BC, ctx->r1) = ctx->r2;
    // 0x004210C4: j           L_00421190
    // 0x004210C8: nop

        goto L_00421190;
    // 0x004210C8: nop

    // 0x004210CC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x004210D0: lw          $a1, 0x24($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X24);
    // 0x004210D4: lw          $a2, 0x1C($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X1C);
    // 0x004210D8: lw          $a3, 0x20($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X20);
    // 0x004210DC: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x004210E0: addiu       $a0, $a0, -0x61D4
    ctx->r4 = ADD32(ctx->r4, -0X61D4);
    // 0x004210E4: j           L_00421190
    // 0x004210E8: nop

        goto L_00421190;
    // 0x004210E8: nop

    // 0x004210EC: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x004210F0: lw          $v0, 0x990($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X990);
    // 0x004210F4: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x004210F8: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x004210FC: sw          $v1, 0x9BC($at)
    MEM_W(0X9BC, ctx->r1) = ctx->r3;
    // 0x00421100: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x00421104: sw          $zero, 0x940($at)
    MEM_W(0X940, ctx->r1) = 0;
    // 0x00421108: beq         $v0, $zero, L_00421120
    if (ctx->r2 == 0) {
        // 0x0042110C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_00421120;
    }
    // 0x0042110C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00421110: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x00421114: sw          $v1, -0xEB8($at)
    MEM_W(-0XEB8, ctx->r1) = ctx->r3;
    // 0x00421118: j           L_0042119C
    // 0x0042111C: nop

        goto L_0042119C;
    // 0x0042111C: nop

L_00421120:
    // 0x00421120: jal         0x0041DC5C
    // 0x00421124: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_0041DC5C(rdram, ctx);
        goto after_0;
    // 0x00421124: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x00421128: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x0042112C: bne         $a1, $zero, L_00421138
    if (ctx->r5 != 0) {
        // 0x00421130: nop
    
            goto L_00421138;
    }
    // 0x00421130: nop

    // 0x00421134: lw          $a1, 0x24($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X24);
L_00421138:
    // 0x00421138: lw          $v1, 0x24($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X24);
    // 0x0042113C: lui         $v0, 0x44
    ctx->r2 = S32(0X44 << 16);
    // 0x00421140: addiu       $v0, $v0, -0x410C
    ctx->r2 = ADD32(ctx->r2, -0X410C);
    // 0x00421144: beq         $v1, $v0, L_0042115C
    if (ctx->r3 == ctx->r2) {
        // 0x00421148: nop
    
            goto L_0042115C;
    }
    // 0x00421148: nop

    // 0x0042114C: lui         $v0, 0x44
    ctx->r2 = S32(0X44 << 16);
    // 0x00421150: addiu       $v0, $v0, -0x4130
    ctx->r2 = ADD32(ctx->r2, -0X4130);
    // 0x00421154: bne         $v1, $v0, L_00421164
    if (ctx->r3 != ctx->r2) {
        // 0x00421158: nop
    
            goto L_00421164;
    }
    // 0x00421158: nop

L_0042115C:
    // 0x0042115C: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x00421160: sw          $zero, 0x940($at)
    MEM_W(0X940, ctx->r1) = 0;
L_00421164:
    // 0x00421164: lw          $v0, 0x1C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X1C);
    // 0x00421168: beq         $v0, $zero, L_0042117C
    if (ctx->r2 == 0) {
        // 0x0042116C: nop
    
            goto L_0042117C;
    }
    // 0x0042116C: nop

    // 0x00421170: lw          $v0, 0x51C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X51C);
    // 0x00421174: j           L_00421184
    // 0x00421178: addiu       $a0, $v0, 0x53C
    ctx->r4 = ADD32(ctx->r2, 0X53C);
        goto L_00421184;
    // 0x00421178: addiu       $a0, $v0, 0x53C
    ctx->r4 = ADD32(ctx->r2, 0X53C);
L_0042117C:
    // 0x0042117C: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x00421180: addiu       $a0, $a0, -0x61D4
    ctx->r4 = ADD32(ctx->r4, -0X61D4);
L_00421184:
    // 0x00421184: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x00421188: lw          $a2, 0x1C($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X1C);
    // 0x0042118C: lw          $a3, 0x20($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X20);
L_00421190:
    // 0x00421190: jal         0x00416644
    // 0x00421194: nop

    func_00416644(rdram, ctx);
        goto after_1;
    // 0x00421194: nop

    after_1:
    // 0x00421198: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_0042119C:
    // 0x0042119C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x004211A0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x004211A4: jr          $ra
    // 0x004211A8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x004211A8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void entry_004210B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004210B0: lw          $a1, 0x24($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X24);
    // 0x004210B4: lw          $a2, 0x1C($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X1C);
    // 0x004210B8: lw          $a3, 0x20($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X20);
    // 0x004210BC: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x004210C0: sw          $v0, 0x9BC($at)
    MEM_W(0X9BC, ctx->r1) = ctx->r2;
    // 0x004210C4: j           L_00421190
    // 0x004210C8: nop

        goto L_00421190;
    // 0x004210C8: nop

    // 0x004210CC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x004210D0: lw          $a1, 0x24($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X24);
    // 0x004210D4: lw          $a2, 0x1C($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X1C);
    // 0x004210D8: lw          $a3, 0x20($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X20);
    // 0x004210DC: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x004210E0: addiu       $a0, $a0, -0x61D4
    ctx->r4 = ADD32(ctx->r4, -0X61D4);
    // 0x004210E4: j           L_00421190
    // 0x004210E8: nop

        goto L_00421190;
    // 0x004210E8: nop

    // 0x004210EC: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x004210F0: lw          $v0, 0x990($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X990);
    // 0x004210F4: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x004210F8: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x004210FC: sw          $v1, 0x9BC($at)
    MEM_W(0X9BC, ctx->r1) = ctx->r3;
    // 0x00421100: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x00421104: sw          $zero, 0x940($at)
    MEM_W(0X940, ctx->r1) = 0;
    // 0x00421108: beq         $v0, $zero, L_00421120
    if (ctx->r2 == 0) {
        // 0x0042110C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_00421120;
    }
    // 0x0042110C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00421110: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x00421114: sw          $v1, -0xEB8($at)
    MEM_W(-0XEB8, ctx->r1) = ctx->r3;
    // 0x00421118: j           L_0042119C
    // 0x0042111C: nop

        goto L_0042119C;
    // 0x0042111C: nop

L_00421120:
    // 0x00421120: jal         0x0041DC5C
    // 0x00421124: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_0041DC5C(rdram, ctx);
        goto after_0;
    // 0x00421124: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x00421128: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x0042112C: bne         $a1, $zero, L_00421138
    if (ctx->r5 != 0) {
        // 0x00421130: nop
    
            goto L_00421138;
    }
    // 0x00421130: nop

    // 0x00421134: lw          $a1, 0x24($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X24);
L_00421138:
    // 0x00421138: lw          $v1, 0x24($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X24);
    // 0x0042113C: lui         $v0, 0x44
    ctx->r2 = S32(0X44 << 16);
    // 0x00421140: addiu       $v0, $v0, -0x410C
    ctx->r2 = ADD32(ctx->r2, -0X410C);
    // 0x00421144: beq         $v1, $v0, L_0042115C
    if (ctx->r3 == ctx->r2) {
        // 0x00421148: nop
    
            goto L_0042115C;
    }
    // 0x00421148: nop

    // 0x0042114C: lui         $v0, 0x44
    ctx->r2 = S32(0X44 << 16);
    // 0x00421150: addiu       $v0, $v0, -0x4130
    ctx->r2 = ADD32(ctx->r2, -0X4130);
    // 0x00421154: bne         $v1, $v0, L_00421164
    if (ctx->r3 != ctx->r2) {
        // 0x00421158: nop
    
            goto L_00421164;
    }
    // 0x00421158: nop

L_0042115C:
    // 0x0042115C: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x00421160: sw          $zero, 0x940($at)
    MEM_W(0X940, ctx->r1) = 0;
L_00421164:
    // 0x00421164: lw          $v0, 0x1C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X1C);
    // 0x00421168: beq         $v0, $zero, L_0042117C
    if (ctx->r2 == 0) {
        // 0x0042116C: nop
    
            goto L_0042117C;
    }
    // 0x0042116C: nop

    // 0x00421170: lw          $v0, 0x51C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X51C);
    // 0x00421174: j           L_00421184
    // 0x00421178: addiu       $a0, $v0, 0x53C
    ctx->r4 = ADD32(ctx->r2, 0X53C);
        goto L_00421184;
    // 0x00421178: addiu       $a0, $v0, 0x53C
    ctx->r4 = ADD32(ctx->r2, 0X53C);
L_0042117C:
    // 0x0042117C: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x00421180: addiu       $a0, $a0, -0x61D4
    ctx->r4 = ADD32(ctx->r4, -0X61D4);
L_00421184:
    // 0x00421184: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x00421188: lw          $a2, 0x1C($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X1C);
    // 0x0042118C: lw          $a3, 0x20($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X20);
L_00421190:
    // 0x00421190: jal         0x00416644
    // 0x00421194: nop

    func_00416644(rdram, ctx);
        goto after_1;
    // 0x00421194: nop

    after_1:
    // 0x00421198: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_0042119C:
    // 0x0042119C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x004211A0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x004211A4: jr          $ra
    // 0x004211A8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x004211A8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void entry_004210BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004210BC: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x004210C0: sw          $v0, 0x9BC($at)
    MEM_W(0X9BC, ctx->r1) = ctx->r2;
    // 0x004210C4: j           L_00421190
    // 0x004210C8: nop

        goto L_00421190;
    // 0x004210C8: nop

    // 0x004210CC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x004210D0: lw          $a1, 0x24($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X24);
    // 0x004210D4: lw          $a2, 0x1C($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X1C);
    // 0x004210D8: lw          $a3, 0x20($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X20);
    // 0x004210DC: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x004210E0: addiu       $a0, $a0, -0x61D4
    ctx->r4 = ADD32(ctx->r4, -0X61D4);
    // 0x004210E4: j           L_00421190
    // 0x004210E8: nop

        goto L_00421190;
    // 0x004210E8: nop

    // 0x004210EC: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x004210F0: lw          $v0, 0x990($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X990);
    // 0x004210F4: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x004210F8: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x004210FC: sw          $v1, 0x9BC($at)
    MEM_W(0X9BC, ctx->r1) = ctx->r3;
    // 0x00421100: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x00421104: sw          $zero, 0x940($at)
    MEM_W(0X940, ctx->r1) = 0;
    // 0x00421108: beq         $v0, $zero, L_00421120
    if (ctx->r2 == 0) {
        // 0x0042110C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_00421120;
    }
    // 0x0042110C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00421110: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x00421114: sw          $v1, -0xEB8($at)
    MEM_W(-0XEB8, ctx->r1) = ctx->r3;
    // 0x00421118: j           L_0042119C
    // 0x0042111C: nop

        goto L_0042119C;
    // 0x0042111C: nop

L_00421120:
    // 0x00421120: jal         0x0041DC5C
    // 0x00421124: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_0041DC5C(rdram, ctx);
        goto after_0;
    // 0x00421124: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x00421128: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x0042112C: bne         $a1, $zero, L_00421138
    if (ctx->r5 != 0) {
        // 0x00421130: nop
    
            goto L_00421138;
    }
    // 0x00421130: nop

    // 0x00421134: lw          $a1, 0x24($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X24);
L_00421138:
    // 0x00421138: lw          $v1, 0x24($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X24);
    // 0x0042113C: lui         $v0, 0x44
    ctx->r2 = S32(0X44 << 16);
    // 0x00421140: addiu       $v0, $v0, -0x410C
    ctx->r2 = ADD32(ctx->r2, -0X410C);
    // 0x00421144: beq         $v1, $v0, L_0042115C
    if (ctx->r3 == ctx->r2) {
        // 0x00421148: nop
    
            goto L_0042115C;
    }
    // 0x00421148: nop

    // 0x0042114C: lui         $v0, 0x44
    ctx->r2 = S32(0X44 << 16);
    // 0x00421150: addiu       $v0, $v0, -0x4130
    ctx->r2 = ADD32(ctx->r2, -0X4130);
    // 0x00421154: bne         $v1, $v0, L_00421164
    if (ctx->r3 != ctx->r2) {
        // 0x00421158: nop
    
            goto L_00421164;
    }
    // 0x00421158: nop

L_0042115C:
    // 0x0042115C: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x00421160: sw          $zero, 0x940($at)
    MEM_W(0X940, ctx->r1) = 0;
L_00421164:
    // 0x00421164: lw          $v0, 0x1C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X1C);
    // 0x00421168: beq         $v0, $zero, L_0042117C
    if (ctx->r2 == 0) {
        // 0x0042116C: nop
    
            goto L_0042117C;
    }
    // 0x0042116C: nop

    // 0x00421170: lw          $v0, 0x51C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X51C);
    // 0x00421174: j           L_00421184
    // 0x00421178: addiu       $a0, $v0, 0x53C
    ctx->r4 = ADD32(ctx->r2, 0X53C);
        goto L_00421184;
    // 0x00421178: addiu       $a0, $v0, 0x53C
    ctx->r4 = ADD32(ctx->r2, 0X53C);
L_0042117C:
    // 0x0042117C: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x00421180: addiu       $a0, $a0, -0x61D4
    ctx->r4 = ADD32(ctx->r4, -0X61D4);
L_00421184:
    // 0x00421184: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x00421188: lw          $a2, 0x1C($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X1C);
    // 0x0042118C: lw          $a3, 0x20($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X20);
L_00421190:
    // 0x00421190: jal         0x00416644
    // 0x00421194: nop

    func_00416644(rdram, ctx);
        goto after_1;
    // 0x00421194: nop

    after_1:
    // 0x00421198: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_0042119C:
    // 0x0042119C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x004211A0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x004211A4: jr          $ra
    // 0x004211A8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x004211A8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void entry_00421170(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00421170: lw          $v0, 0x51C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X51C);
    // 0x00421174: j           L_00421184
    // 0x00421178: addiu       $a0, $v0, 0x53C
    ctx->r4 = ADD32(ctx->r2, 0X53C);
        goto L_00421184;
    // 0x00421178: addiu       $a0, $v0, 0x53C
    ctx->r4 = ADD32(ctx->r2, 0X53C);
    // 0x0042117C: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x00421180: addiu       $a0, $a0, -0x61D4
    ctx->r4 = ADD32(ctx->r4, -0X61D4);
L_00421184:
    // 0x00421184: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x00421188: lw          $a2, 0x1C($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X1C);
    // 0x0042118C: lw          $a3, 0x20($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X20);
    // 0x00421190: jal         0x00416644
    // 0x00421194: nop

    func_00416644(rdram, ctx);
        goto after_0;
    // 0x00421194: nop

    after_0:
    // 0x00421198: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0042119C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x004211A0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x004211A4: jr          $ra
    // 0x004211A8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x004211A8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void entry_00421628(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00421628: swc1        $f0, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f0.u32l;
L_0042162C:
    // 0x0042162C: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x00421630: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x00421634: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x00421638: sb          $v0, 0x0($a3)
    MEM_B(0X0, ctx->r7) = ctx->r2;
    // 0x0042163C: lw          $v0, 0x30($t0)
    ctx->r2 = MEM_W(ctx->r8, 0X30);
    // 0x00421640: slt         $v0, $a2, $v0
    ctx->r2 = SIGNED(ctx->r6) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x00421644: bne         $v0, $zero, L_0042162C
    if (ctx->r2 != 0) {
        // 0x00421648: addiu       $a3, $a3, 0x1
        ctx->r7 = ADD32(ctx->r7, 0X1);
            goto L_0042162C;
    }
    // 0x00421648: addiu       $a3, $a3, 0x1
    ctx->r7 = ADD32(ctx->r7, 0X1);
    // 0x0042164C: jr          $ra
    // 0x00421650: nop

    return;
    // 0x00421650: nop

;}
RECOMP_FUNC void entry_00421658(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00421658: lui         $v0, 0x44
    ctx->r2 = S32(0X44 << 16);
    // 0x0042165C: addiu       $v0, $v0, -0x410C
    ctx->r2 = ADD32(ctx->r2, -0X410C);
    // 0x00421660: beq         $v1, $v0, L_00421678
    if (ctx->r3 == ctx->r2) {
        // 0x00421664: nop
    
            goto L_00421678;
    }
    // 0x00421664: nop

    // 0x00421668: lui         $v0, 0x44
    ctx->r2 = S32(0X44 << 16);
    // 0x0042166C: addiu       $v0, $v0, -0x4130
    ctx->r2 = ADD32(ctx->r2, -0X4130);
    // 0x00421670: bne         $v1, $v0, L_00421688
    if (ctx->r3 != ctx->r2) {
        // 0x00421674: nop
    
            goto L_00421688;
    }
    // 0x00421674: nop

L_00421678:
    // 0x00421678: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0042167C: sw          $zero, 0x940($at)
    MEM_W(0X940, ctx->r1) = 0;
    // 0x00421680: jr          $ra
    // 0x00421684: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x00421684: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_00421688:
    // 0x00421688: jr          $ra
    return;
;}
RECOMP_FUNC void entry_00421708(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00421708: beq         $v1, $v0, L_00421788
    if (ctx->r3 == ctx->r2) {
        // 0x0042170C: nop
    
            goto L_00421788;
    }
    // 0x0042170C: nop

    // 0x00421710: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x00421714: lw          $v0, 0x990($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X990);
    // 0x00421718: beq         $v0, $zero, L_00421730
    if (ctx->r2 == 0) {
        // 0x0042171C: nop
    
            goto L_00421730;
    }
    // 0x0042171C: nop

    // 0x00421720: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x00421724: lw          $a0, 0x2028($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X2028);
    // 0x00421728: j           L_00421738
    // 0x0042172C: nop

        goto L_00421738;
    // 0x0042172C: nop

L_00421730:
    // 0x00421730: lw          $v0, 0x20($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X20);
    // 0x00421734: lb          $a0, 0x4($v0)
    ctx->r4 = MEM_B(ctx->r2, 0X4);
L_00421738:
    // 0x00421738: jal         0x0028591C
    // 0x0042173C: nop

    func_0028591C(rdram, ctx);
        goto after_0;
    // 0x0042173C: nop

    after_0:
    // 0x00421740: beq         $v0, $zero, L_00421788
    if (ctx->r2 == 0) {
        // 0x00421744: nop
    
            goto L_00421788;
    }
    // 0x00421744: nop

    // 0x00421748: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x0042174C: lw          $v0, 0x990($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X990);
    // 0x00421750: beq         $v0, $zero, L_00421768
    if (ctx->r2 == 0) {
        // 0x00421754: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_00421768;
    }
    // 0x00421754: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00421758: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x0042175C: lw          $a1, 0x2028($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X2028);
    // 0x00421760: j           L_00421770
    // 0x00421764: nop

        goto L_00421770;
    // 0x00421764: nop

L_00421768:
    // 0x00421768: lw          $v0, 0x20($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X20);
    // 0x0042176C: lb          $a1, 0x4($v0)
    ctx->r5 = MEM_B(ctx->r2, 0X4);
L_00421770:
    // 0x00421770: jal         0x0041DD90
    // 0x00421774: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_0041DD90(rdram, ctx);
        goto after_1;
    // 0x00421774: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_1:
    // 0x00421778: beq         $v0, $zero, L_00421788
    if (ctx->r2 == 0) {
        // 0x0042177C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_00421788;
    }
    // 0x0042177C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00421780: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x00421784: sw          $v0, 0x9BC($at)
    MEM_W(0X9BC, ctx->r1) = ctx->r2;
L_00421788:
    // 0x00421788: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x0042178C: lw          $v0, 0x9BC($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X9BC);
    // 0x00421790: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x00421794: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00421798: jr          $ra
    // 0x0042179C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0042179C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void entry_00421738(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00421738: jal         0x0028591C
    // 0x0042173C: nop

    func_0028591C(rdram, ctx);
        goto after_0;
    // 0x0042173C: nop

    after_0:
    // 0x00421740: beq         $v0, $zero, L_00421788
    if (ctx->r2 == 0) {
        // 0x00421744: nop
    
            goto L_00421788;
    }
    // 0x00421744: nop

    // 0x00421748: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x0042174C: lw          $v0, 0x990($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X990);
    // 0x00421750: beq         $v0, $zero, L_00421768
    if (ctx->r2 == 0) {
        // 0x00421754: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_00421768;
    }
    // 0x00421754: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00421758: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x0042175C: lw          $a1, 0x2028($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X2028);
    // 0x00421760: j           L_00421770
    // 0x00421764: nop

        goto L_00421770;
    // 0x00421764: nop

L_00421768:
    // 0x00421768: lw          $v0, 0x20($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X20);
    // 0x0042176C: lb          $a1, 0x4($v0)
    ctx->r5 = MEM_B(ctx->r2, 0X4);
L_00421770:
    // 0x00421770: jal         0x0041DD90
    // 0x00421774: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_0041DD90(rdram, ctx);
        goto after_1;
    // 0x00421774: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_1:
    // 0x00421778: beq         $v0, $zero, L_00421788
    if (ctx->r2 == 0) {
        // 0x0042177C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_00421788;
    }
    // 0x0042177C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00421780: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x00421784: sw          $v0, 0x9BC($at)
    MEM_W(0X9BC, ctx->r1) = ctx->r2;
L_00421788:
    // 0x00421788: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x0042178C: lw          $v0, 0x9BC($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X9BC);
    // 0x00421790: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x00421794: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00421798: jr          $ra
    // 0x0042179C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0042179C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void entry_00421770(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00421770: jal         0x0041DD90
    // 0x00421774: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_0041DD90(rdram, ctx);
        goto after_0;
    // 0x00421774: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x00421778: beq         $v0, $zero, L_00421788
    if (ctx->r2 == 0) {
        // 0x0042177C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_00421788;
    }
    // 0x0042177C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00421780: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x00421784: sw          $v0, 0x9BC($at)
    MEM_W(0X9BC, ctx->r1) = ctx->r2;
L_00421788:
    // 0x00421788: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x0042178C: lw          $v0, 0x9BC($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X9BC);
    // 0x00421790: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x00421794: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00421798: jr          $ra
    // 0x0042179C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0042179C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void entry_004218F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004218F4: nop

    // 0x004218F8: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x004218FC: lw          $v0, -0x4EF8($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X4EF8);
    // 0x00421900: bne         $v0, $zero, L_00421934
    if (ctx->r2 != 0) {
        // 0x00421904: nop
    
            goto L_00421934;
    }
    // 0x00421904: nop

    // 0x00421908: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x0042190C: lw          $v0, -0xEBC($v0)
    ctx->r2 = MEM_W(ctx->r2, -0XEBC);
    // 0x00421910: beq         $v0, $zero, L_00421920
    if (ctx->r2 == 0) {
        // 0x00421914: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_00421920;
    }
    // 0x00421914: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00421918: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x0042191C: sw          $v0, -0xEB8($at)
    MEM_W(-0XEB8, ctx->r1) = ctx->r2;
L_00421920:
    // 0x00421920: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00421924: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x00421928: sw          $zero, -0xEC4($at)
    MEM_W(-0XEC4, ctx->r1) = 0;
    // 0x0042192C: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x00421930: sw          $v0, 0x9BC($at)
    MEM_W(0X9BC, ctx->r1) = ctx->r2;
L_00421934:
    // 0x00421934: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x00421938: lw          $v0, 0x9BC($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X9BC);
    // 0x0042193C: bne         $v0, $zero, L_00421998
    if (ctx->r2 != 0) {
        // 0x00421940: nop
    
            goto L_00421998;
    }
    // 0x00421940: nop

    // 0x00421944: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x00421948: lw          $a0, 0x2028($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X2028);
    // 0x0042194C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x00421950: beq         $a0, $v0, L_00421990
    if (ctx->r4 == ctx->r2) {
        // 0x00421954: nop
    
            goto L_00421990;
    }
    // 0x00421954: nop

    // 0x00421958: jal         0x0028591C
    // 0x0042195C: nop

    func_0028591C(rdram, ctx);
        goto after_0;
    // 0x0042195C: nop

    after_0:
    // 0x00421960: beq         $v0, $zero, L_00421990
    if (ctx->r2 == 0) {
        // 0x00421964: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_00421990;
    }
    // 0x00421964: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00421968: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x0042196C: lw          $a1, 0x2028($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X2028);
    // 0x00421970: jal         0x0041DD90
    // 0x00421974: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_0041DD90(rdram, ctx);
        goto after_1;
    // 0x00421974: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_1:
    // 0x00421978: beq         $v0, $zero, L_00421990
    if (ctx->r2 == 0) {
        // 0x0042197C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_00421990;
    }
    // 0x0042197C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00421980: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x00421984: sw          $zero, -0xEC4($at)
    MEM_W(-0XEC4, ctx->r1) = 0;
    // 0x00421988: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0042198C: sw          $v0, 0x9BC($at)
    MEM_W(0X9BC, ctx->r1) = ctx->r2;
L_00421990:
    // 0x00421990: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x00421994: lw          $v0, 0x9BC($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X9BC);
L_00421998:
    // 0x00421998: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x0042199C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x004219A0: jr          $ra
    // 0x004219A4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x004219A4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void entry_0042192C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0042192C: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x00421930: sw          $v0, 0x9BC($at)
    MEM_W(0X9BC, ctx->r1) = ctx->r2;
    // 0x00421934: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x00421938: lw          $v0, 0x9BC($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X9BC);
    // 0x0042193C: bne         $v0, $zero, L_00421998
    if (ctx->r2 != 0) {
        // 0x00421940: nop
    
            goto L_00421998;
    }
    // 0x00421940: nop

    // 0x00421944: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x00421948: lw          $a0, 0x2028($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X2028);
    // 0x0042194C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x00421950: beq         $a0, $v0, L_00421990
    if (ctx->r4 == ctx->r2) {
        // 0x00421954: nop
    
            goto L_00421990;
    }
    // 0x00421954: nop

    // 0x00421958: jal         0x0028591C
    // 0x0042195C: nop

    func_0028591C(rdram, ctx);
        goto after_0;
    // 0x0042195C: nop

    after_0:
    // 0x00421960: beq         $v0, $zero, L_00421990
    if (ctx->r2 == 0) {
        // 0x00421964: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_00421990;
    }
    // 0x00421964: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00421968: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x0042196C: lw          $a1, 0x2028($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X2028);
    // 0x00421970: jal         0x0041DD90
    // 0x00421974: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_0041DD90(rdram, ctx);
        goto after_1;
    // 0x00421974: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_1:
    // 0x00421978: beq         $v0, $zero, L_00421990
    if (ctx->r2 == 0) {
        // 0x0042197C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_00421990;
    }
    // 0x0042197C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00421980: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x00421984: sw          $zero, -0xEC4($at)
    MEM_W(-0XEC4, ctx->r1) = 0;
    // 0x00421988: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0042198C: sw          $v0, 0x9BC($at)
    MEM_W(0X9BC, ctx->r1) = ctx->r2;
L_00421990:
    // 0x00421990: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x00421994: lw          $v0, 0x9BC($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X9BC);
L_00421998:
    // 0x00421998: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x0042199C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x004219A0: jr          $ra
    // 0x004219A4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x004219A4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void entry_004219F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
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
RECOMP_FUNC void entry_00421BA8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_00421B88:
    // 0x00421BA8: beql        $v0, $zero, L_00421BB0
    if (ctx->r2 == 0) {
        // 0x00421BAC: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_00421BB0;
    }
    goto skip_0;
    // 0x00421BAC: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    skip_0:
L_00421BB0:
    // 0x00421BB0: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x00421BB4: slti        $v0, $s1, 0x4
    ctx->r2 = SIGNED(ctx->r17) < 0X4 ? 1 : 0;
    // 0x00421BB8: bne         $v0, $zero, L_00421B88
    if (ctx->r2 != 0) {
        // 0x00421BBC: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_00421B88;
    }
    // 0x00421BBC: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x00421BC0: beql        $s1, $v0, L_00421BC8
    if (ctx->r17 == ctx->r2) {
        // 0x00421BC4: addiu       $s0, $zero, -0x1
        ctx->r16 = ADD32(0, -0X1);
            goto L_00421BC8;
    }
    goto skip_1;
    // 0x00421BC4: addiu       $s0, $zero, -0x1
    ctx->r16 = ADD32(0, -0X1);
    skip_1:
L_00421BC8:
    // 0x00421BC8: addu        $v0, $s0, $zero
    ctx->r2 = ADD32(ctx->r16, 0);
    // 0x00421BCC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x00421BD0: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x00421BD4: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00421BD8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00421BDC: jr          $ra
    // 0x00421BE0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00421BE0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void entry_00421C28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00421C28: lw          $v0, 0x984($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X984);
    // 0x00421C2C: beq         $v0, $zero, L_00421C44
    if (ctx->r2 == 0) {
        // 0x00421C30: nop
    
            goto L_00421C44;
    }
    // 0x00421C30: nop

    // 0x00421C34: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00421C38: addiu       $v0, $v0, 0x4804
    ctx->r2 = ADD32(ctx->r2, 0X4804);
    // 0x00421C3C: j           L_00421C88
    // 0x00421C40: sw          $v0, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r2;
        goto L_00421C88;
    // 0x00421C40: sw          $v0, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r2;
L_00421C44:
    // 0x00421C44: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x00421C48: lw          $v0, 0x990($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X990);
    // 0x00421C4C: beq         $v0, $zero, L_00421C88
    if (ctx->r2 == 0) {
        // 0x00421C50: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_00421C88;
    }
    // 0x00421C50: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x00421C54: lui         $s0, 0x800C
    ctx->r16 = S32(0X800C << 16);
    // 0x00421C58: lw          $s0, 0x2028($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X2028);
    // 0x00421C5C: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00421C60: addiu       $v0, $v0, 0x48F8
    ctx->r2 = ADD32(ctx->r2, 0X48F8);
    // 0x00421C64: jal         0x004160F0
    // 0x00421C68: sw          $v0, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r2;
    func_004160F0(rdram, ctx);
        goto after_0;
    // 0x00421C68: sw          $v0, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r2;
    after_0:
    // 0x00421C6C: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x00421C70: lw          $a0, 0x14($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X14);
    // 0x00421C74: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x00421C78: addiu       $a1, $a1, 0x1410
    ctx->r5 = ADD32(ctx->r5, 0X1410);
    // 0x00421C7C: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x00421C80: jal         0x0029E3E0
    // 0x00421C84: addiu       $a2, $s0, 0x1
    ctx->r6 = ADD32(ctx->r16, 0X1);
    func_0029E3E0(rdram, ctx);
        goto after_1;
    // 0x00421C84: addiu       $a2, $s0, 0x1
    ctx->r6 = ADD32(ctx->r16, 0X1);
    after_1:
L_00421C88:
    // 0x00421C88: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x00421C8C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00421C90: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00421C94: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x00421C98: jr          $ra
    // 0x00421C9C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00421C9C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void entry_00421D14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00421D14: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x00421D18: jr          $ra
    // 0x00421D1C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00421D1C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void entry_00421DEC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00421DEC: addiu       $v0, $v0, 0x48E4
    ctx->r2 = ADD32(ctx->r2, 0X48E4);
    // 0x00421DF0: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    // 0x00421DF4: jr          $ra
    // 0x00421DF8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x00421DF8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
