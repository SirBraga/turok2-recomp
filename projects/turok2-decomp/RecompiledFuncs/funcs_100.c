#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void entry_004124B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004124B8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x004124BC: lui         $v0, 0x800F
    ctx->r2 = S32(0X800F << 16);
    // 0x004124C0: lw          $v0, 0x70D8($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X70D8);
    // 0x004124C4: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x004124C8: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x004124CC: addiu       $a3, $v0, -0x1
    ctx->r7 = ADD32(ctx->r2, -0X1);
    // 0x004124D0: blez        $a3, L_00412524
    if (SIGNED(ctx->r7) <= 0) {
        // 0x004124D4: addiu       $v1, $v1, 0x8
        ctx->r3 = ADD32(ctx->r3, 0X8);
            goto L_00412524;
    }
    // 0x004124D4: addiu       $v1, $v1, 0x8
    ctx->r3 = ADD32(ctx->r3, 0X8);
    // 0x004124D8: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x004124DC: lw          $a0, 0x1BB0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1BB0);
    // 0x004124E0: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
L_004124E4:
    // 0x004124E4: lw          $v0, 0x8($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X8);
    // 0x004124E8: bnel        $v0, $s0, L_00412518
    if (ctx->r2 != ctx->r16) {
        // 0x004124EC: addiu       $a2, $a2, 0x1
        ctx->r6 = ADD32(ctx->r6, 0X1);
            goto L_00412518;
    }
    goto skip_0;
    // 0x004124EC: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    skip_0:
    // 0x004124F0: lw          $v0, 0xC($v1)
    ctx->r2 = MEM_W(ctx->r3, 0XC);
    // 0x004124F4: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
    // 0x004124F8: bnel        $v0, $zero, L_0041250C
    if (ctx->r2 != 0) {
        // 0x004124FC: sw          $s0, 0xE0($a0)
        MEM_W(0XE0, ctx->r4) = ctx->r16;
            goto L_0041250C;
    }
    goto skip_1;
    // 0x004124FC: sw          $s0, 0xE0($a0)
    MEM_W(0XE0, ctx->r4) = ctx->r16;
    skip_1:
    // 0x00412500: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x00412504: sw          $v0, 0xD8($a0)
    MEM_W(0XD8, ctx->r4) = ctx->r2;
    // 0x00412508: sw          $s0, 0xE0($a0)
    MEM_W(0XE0, ctx->r4) = ctx->r16;
L_0041250C:
    // 0x0041250C: sw          $a2, 0xDC($a0)
    MEM_W(0XDC, ctx->r4) = ctx->r6;
    // 0x00412510: sw          $t0, 0x58($a0)
    MEM_W(0X58, ctx->r4) = ctx->r8;
    // 0x00412514: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
L_00412518:
    // 0x00412518: slt         $v0, $a2, $a3
    ctx->r2 = SIGNED(ctx->r6) < SIGNED(ctx->r7) ? 1 : 0;
    // 0x0041251C: bne         $v0, $zero, L_004124E4
    if (ctx->r2 != 0) {
        // 0x00412520: addiu       $v1, $v1, 0x4C
        ctx->r3 = ADD32(ctx->r3, 0X4C);
            goto L_004124E4;
    }
    // 0x00412520: addiu       $v1, $v1, 0x4C
    ctx->r3 = ADD32(ctx->r3, 0X4C);
L_00412524:
    // 0x00412524: jal         0x002051F4
    // 0x00412528: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_002051F4(rdram, ctx);
        goto after_0;
    // 0x00412528: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_0:
    // 0x0041252C: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x00412530: lw          $v0, 0x1BB0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1BB0);
    // 0x00412534: lw          $v0, 0xD8($v0)
    ctx->r2 = MEM_W(ctx->r2, 0XD8);
    // 0x00412538: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x0041253C: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x00412540: jr          $ra
    // 0x00412544: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x00412544: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void entry_00412538(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00412538: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x0041253C: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x00412540: jr          $ra
    // 0x00412544: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x00412544: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void entry_004125F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_004125A0:
    // 0x004125F8: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x004125FC: lui         $v0, 0x800F
    ctx->r2 = S32(0X800F << 16);
    // 0x00412600: lw          $v0, 0x70D8($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X70D8);
    // 0x00412604: lw          $v1, 0x0($s3)
    ctx->r3 = MEM_W(ctx->r19, 0X0);
    // 0x00412608: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x0041260C: addiu       $s2, $v0, -0x1
    ctx->r18 = ADD32(ctx->r2, -0X1);
    // 0x00412610: blez        $s2, L_00412640
    if (SIGNED(ctx->r18) <= 0) {
        // 0x00412614: addiu       $v1, $v1, 0x8
        ctx->r3 = ADD32(ctx->r3, 0X8);
            goto L_00412640;
    }
    // 0x00412614: addiu       $v1, $v1, 0x8
    ctx->r3 = ADD32(ctx->r3, 0X8);
    // 0x00412618: addu        $s0, $v1, $zero
    ctx->r16 = ADD32(ctx->r3, 0);
L_0041261C:
    // 0x0041261C: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    // 0x00412620: jal         0x00288780
    // 0x00412624: addiu       $a1, $s0, 0x18
    ctx->r5 = ADD32(ctx->r16, 0X18);
    func_00288780(rdram, ctx);
        goto after_0;
    // 0x00412624: addiu       $a1, $s0, 0x18
    ctx->r5 = ADD32(ctx->r16, 0X18);
    after_0:
    // 0x00412628: beq         $v0, $zero, L_004125A0
    if (ctx->r2 == 0) {
        // 0x0041262C: nop
    
            goto L_004125A0;
    }
    // 0x0041262C: nop

    // 0x00412630: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x00412634: slt         $v0, $s1, $s2
    ctx->r2 = SIGNED(ctx->r17) < SIGNED(ctx->r18) ? 1 : 0;
    // 0x00412638: bne         $v0, $zero, L_0041261C
    if (ctx->r2 != 0) {
        // 0x0041263C: addiu       $s0, $s0, 0x4C
        ctx->r16 = ADD32(ctx->r16, 0X4C);
            goto L_0041261C;
    }
    // 0x0041263C: addiu       $s0, $s0, 0x4C
    ctx->r16 = ADD32(ctx->r16, 0X4C);
L_00412640:
    // 0x00412640: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x00412644: jal         0x002051F4
    // 0x00412648: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    func_002051F4(rdram, ctx);
        goto after_1;
    // 0x00412648: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    after_1:
    // 0x0041264C: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x00412650: lw          $s4, 0x38($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X38);
    // 0x00412654: lw          $s3, 0x34($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X34);
    // 0x00412658: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x0041265C: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x00412660: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x00412664: jr          $ra
    // 0x00412668: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x00412668: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void entry_00412640(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00412640: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x00412644: jal         0x002051F4
    // 0x00412648: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    func_002051F4(rdram, ctx);
        goto after_0;
    // 0x00412648: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    after_0:
    // 0x0041264C: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x00412650: lw          $s4, 0x38($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X38);
    // 0x00412654: lw          $s3, 0x34($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X34);
    // 0x00412658: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x0041265C: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x00412660: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x00412664: jr          $ra
    // 0x00412668: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x00412668: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void entry_004126FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_004126C4:
    // 0x004126FC: addu        $a0, $v0, $v1
    ctx->r4 = ADD32(ctx->r2, ctx->r3);
    // 0x00412700: lbu         $v1, 0x11($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X11);
    // 0x00412704: beq         $v1, $t7, L_0041274C
    if (ctx->r3 == ctx->r15) {
        // 0x00412708: addu        $a1, $zero, $zero
        ctx->r5 = ADD32(0, 0);
            goto L_0041274C;
    }
    // 0x00412708: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x0041270C: slti        $v0, $v1, 0xA
    ctx->r2 = SIGNED(ctx->r3) < 0XA ? 1 : 0;
    // 0x00412710: beq         $v0, $zero, L_00412728
    if (ctx->r2 == 0) {
        // 0x00412714: nop
    
            goto L_00412728;
    }
    // 0x00412714: nop

    // 0x00412718: beq         $v1, $t6, L_00412738
    if (ctx->r3 == ctx->r14) {
        // 0x0041271C: nop
    
            goto L_00412738;
    }
    // 0x0041271C: nop

    // 0x00412720: j           L_0041276C
    // 0x00412724: nop

        goto L_0041276C;
    // 0x00412724: nop

L_00412728:
    // 0x00412728: beq         $v1, $t5, L_00412760
    if (ctx->r3 == ctx->r13) {
        // 0x0041272C: nop
    
            goto L_00412760;
    }
    // 0x0041272C: nop

    // 0x00412730: j           L_0041276C
    // 0x00412734: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
        goto L_0041276C;
    // 0x00412734: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
L_00412738:
    // 0x00412738: lbu         $v0, 0x12($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X12);
    // 0x0041273C: beql        $v0, $t4, L_0041276C
    if (ctx->r2 == ctx->r12) {
        // 0x00412740: addiu       $a1, $zero, 0x1
        ctx->r5 = ADD32(0, 0X1);
            goto L_0041276C;
    }
    goto skip_0;
    // 0x00412740: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    skip_0:
    // 0x00412744: j           L_0041276C
    // 0x00412748: nop

        goto L_0041276C;
    // 0x00412748: nop

L_0041274C:
    // 0x0041274C: lbu         $v0, 0x12($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X12);
    // 0x00412750: beql        $v0, $t3, L_0041276C
    if (ctx->r2 == ctx->r11) {
        // 0x00412754: addiu       $a1, $zero, 0x1
        ctx->r5 = ADD32(0, 0X1);
            goto L_0041276C;
    }
    goto skip_1;
    // 0x00412754: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    skip_1:
    // 0x00412758: j           L_0041276C
    // 0x0041275C: nop

        goto L_0041276C;
    // 0x0041275C: nop

L_00412760:
    // 0x00412760: lbu         $v0, 0x12($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X12);
    // 0x00412764: beql        $v0, $t2, L_0041276C
    if (ctx->r2 == ctx->r10) {
        // 0x00412768: addiu       $a1, $zero, 0x1
        ctx->r5 = ADD32(0, 0X1);
            goto L_0041276C;
    }
    goto skip_2;
    // 0x00412768: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    skip_2:
L_0041276C:
    // 0x0041276C: bnel        $a1, $zero, L_00412774
    if (ctx->r5 != 0) {
        // 0x00412770: addiu       $s0, $zero, 0x1
        ctx->r16 = ADD32(0, 0X1);
            goto L_00412774;
    }
    goto skip_3;
    // 0x00412770: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
    skip_3:
L_00412774:
    // 0x00412774: addiu       $a3, $a3, 0x1
    ctx->r7 = ADD32(ctx->r7, 0X1);
    // 0x00412778: slt         $v0, $a3, $t0
    ctx->r2 = SIGNED(ctx->r7) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x0041277C: bne         $v0, $zero, L_004126C4
    if (ctx->r2 != 0) {
        // 0x00412780: addiu       $a2, $a2, 0xC
        ctx->r6 = ADD32(ctx->r6, 0XC);
            goto L_004126C4;
    }
    // 0x00412780: addiu       $a2, $a2, 0xC
    ctx->r6 = ADD32(ctx->r6, 0XC);
    // 0x00412784: xori        $v0, $s0, 0x1
    ctx->r2 = ctx->r16 ^ 0X1;
    // 0x00412788: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x0041278C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00412790: jr          $ra
    // 0x00412794: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00412794: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void entry_0041276C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_004126C4:
    // 0x0041276C: bnel        $a1, $zero, L_00412774
    if (ctx->r5 != 0) {
        // 0x00412770: addiu       $s0, $zero, 0x1
        ctx->r16 = ADD32(0, 0X1);
            goto L_00412774;
    }
    goto skip_0;
    // 0x00412770: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
    skip_0:
L_00412774:
    // 0x00412774: addiu       $a3, $a3, 0x1
    ctx->r7 = ADD32(ctx->r7, 0X1);
    // 0x00412778: slt         $v0, $a3, $t0
    ctx->r2 = SIGNED(ctx->r7) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x0041277C: bne         $v0, $zero, L_004126C4
    if (ctx->r2 != 0) {
        // 0x00412780: addiu       $a2, $a2, 0xC
        ctx->r6 = ADD32(ctx->r6, 0XC);
            goto L_004126C4;
    }
    // 0x00412780: addiu       $a2, $a2, 0xC
    ctx->r6 = ADD32(ctx->r6, 0XC);
    // 0x00412784: xori        $v0, $s0, 0x1
    ctx->r2 = ctx->r16 ^ 0X1;
    // 0x00412788: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x0041278C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00412790: jr          $ra
    // 0x00412794: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00412794: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void entry_004128A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_00412834:
    // 0x004128A0: addu        $s0, $v0, $v1
    ctx->r16 = ADD32(ctx->r2, ctx->r3);
    // 0x004128A4: lbu         $v1, 0x11($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X11);
    // 0x004128A8: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
    // 0x004128AC: beq         $v1, $v0, L_004128F0
    if (ctx->r3 == ctx->r2) {
        // 0x004128B0: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_004128F0;
    }
    // 0x004128B0: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x004128B4: slti        $v0, $v1, 0xA
    ctx->r2 = SIGNED(ctx->r3) < 0XA ? 1 : 0;
    // 0x004128B8: beq         $v0, $zero, L_004128D0
    if (ctx->r2 == 0) {
        // 0x004128BC: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_004128D0;
    }
    // 0x004128BC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x004128C0: beq         $v1, $v0, L_004128E4
    if (ctx->r3 == ctx->r2) {
        // 0x004128C4: nop
    
            goto L_004128E4;
    }
    // 0x004128C4: nop

    // 0x004128C8: j           L_00412908
    // 0x004128CC: nop

        goto L_00412908;
    // 0x004128CC: nop

L_004128D0:
    // 0x004128D0: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x004128D4: beq         $v1, $v0, L_004128FC
    if (ctx->r3 == ctx->r2) {
        // 0x004128D8: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_004128FC;
    }
    // 0x004128D8: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x004128DC: j           L_00412908
    // 0x004128E0: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
        goto L_00412908;
    // 0x004128E0: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
L_004128E4:
    // 0x004128E4: lbu         $v1, 0x12($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X12);
    // 0x004128E8: j           L_00412900
    // 0x004128EC: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
        goto L_00412900;
    // 0x004128EC: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
L_004128F0:
    // 0x004128F0: lbu         $v1, 0x12($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X12);
    // 0x004128F4: j           L_00412900
    // 0x004128F8: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
        goto L_00412900;
    // 0x004128F8: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
L_004128FC:
    // 0x004128FC: lbu         $v1, 0x12($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X12);
L_00412900:
    // 0x00412900: beql        $v1, $v0, L_00412908
    if (ctx->r3 == ctx->r2) {
        // 0x00412904: addiu       $a0, $zero, 0x1
        ctx->r4 = ADD32(0, 0X1);
            goto L_00412908;
    }
    goto skip_0;
    // 0x00412904: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    skip_0:
L_00412908:
    // 0x00412908: beq         $a0, $zero, L_00412928
    if (ctx->r4 == 0) {
        // 0x0041290C: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_00412928;
    }
    // 0x0041290C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x00412910: jal         0x00412314
    // 0x00412914: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_00412314(rdram, ctx);
        goto after_0;
    // 0x00412914: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_0:
    // 0x00412918: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x0041291C: lw          $v0, 0x1BB0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1BB0);
    // 0x00412920: j           L_00412930
    // 0x00412924: sw          $zero, 0x58($v0)
    MEM_W(0X58, ctx->r2) = 0;
        goto L_00412930;
    // 0x00412924: sw          $zero, 0x58($v0)
    MEM_W(0X58, ctx->r2) = 0;
L_00412928:
    // 0x00412928: jal         0x0026E210
    // 0x0041292C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_0026E210(rdram, ctx);
        goto after_1;
    // 0x0041292C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
L_00412930:
    // 0x00412930: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x00412934: addiu       $a0, $a0, 0x7078
    ctx->r4 = ADD32(ctx->r4, 0X7078);
    // 0x00412938: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0041293C: lwc1        $f0, 0xAD4($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0XAD4);
    // 0x00412940: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x00412944: swc1        $f0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->f0.u32l;
    // 0x00412948: lbu         $v0, 0xE($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XE);
    // 0x0041294C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x00412950: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x00412954: andi        $v0, $v0, 0xEF
    ctx->r2 = ctx->r2 & 0XEF;
    // 0x00412958: jal         0x00224A68
    // 0x0041295C: sb          $v0, 0xE($a1)
    MEM_B(0XE, ctx->r5) = ctx->r2;
    func_00224A68(rdram, ctx);
        goto after_2;
    // 0x0041295C: sb          $v0, 0xE($a1)
    MEM_B(0XE, ctx->r5) = ctx->r2;
    after_2:
    // 0x00412960: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x00412964: slt         $v0, $s2, $s3
    ctx->r2 = SIGNED(ctx->r18) < SIGNED(ctx->r19) ? 1 : 0;
    // 0x00412968: bne         $v0, $zero, L_00412834
    if (ctx->r2 != 0) {
        // 0x0041296C: addiu       $s1, $s1, 0xC
        ctx->r17 = ADD32(ctx->r17, 0XC);
            goto L_00412834;
    }
    // 0x0041296C: addiu       $s1, $s1, 0xC
    ctx->r17 = ADD32(ctx->r17, 0XC);
    // 0x00412970: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x00412974: lw          $s5, 0x24($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X24);
    // 0x00412978: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x0041297C: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x00412980: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x00412984: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00412988: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0041298C: ldc1        $f20, 0x30($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X30);
    // 0x00412990: jr          $ra
    // 0x00412994: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x00412994: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void entry_00412900(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_00412834:
    // 0x00412900: beql        $v1, $v0, L_00412908
    if (ctx->r3 == ctx->r2) {
        // 0x00412904: addiu       $a0, $zero, 0x1
        ctx->r4 = ADD32(0, 0X1);
            goto L_00412908;
    }
    goto skip_0;
    // 0x00412904: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    skip_0:
L_00412908:
    // 0x00412908: beq         $a0, $zero, L_00412928
    if (ctx->r4 == 0) {
        // 0x0041290C: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_00412928;
    }
    // 0x0041290C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x00412910: jal         0x00412314
    // 0x00412914: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_00412314(rdram, ctx);
        goto after_0;
    // 0x00412914: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_0:
    // 0x00412918: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x0041291C: lw          $v0, 0x1BB0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1BB0);
    // 0x00412920: j           L_00412930
    // 0x00412924: sw          $zero, 0x58($v0)
    MEM_W(0X58, ctx->r2) = 0;
        goto L_00412930;
    // 0x00412924: sw          $zero, 0x58($v0)
    MEM_W(0X58, ctx->r2) = 0;
L_00412928:
    // 0x00412928: jal         0x0026E210
    // 0x0041292C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_0026E210(rdram, ctx);
        goto after_1;
    // 0x0041292C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
L_00412930:
    // 0x00412930: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x00412934: addiu       $a0, $a0, 0x7078
    ctx->r4 = ADD32(ctx->r4, 0X7078);
    // 0x00412938: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0041293C: lwc1        $f0, 0xAD4($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0XAD4);
    // 0x00412940: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x00412944: swc1        $f0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->f0.u32l;
    // 0x00412948: lbu         $v0, 0xE($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XE);
    // 0x0041294C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x00412950: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x00412954: andi        $v0, $v0, 0xEF
    ctx->r2 = ctx->r2 & 0XEF;
    // 0x00412958: jal         0x00224A68
    // 0x0041295C: sb          $v0, 0xE($a1)
    MEM_B(0XE, ctx->r5) = ctx->r2;
    func_00224A68(rdram, ctx);
        goto after_2;
    // 0x0041295C: sb          $v0, 0xE($a1)
    MEM_B(0XE, ctx->r5) = ctx->r2;
    after_2:
    // 0x00412960: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x00412964: slt         $v0, $s2, $s3
    ctx->r2 = SIGNED(ctx->r18) < SIGNED(ctx->r19) ? 1 : 0;
    // 0x00412968: bne         $v0, $zero, L_00412834
    if (ctx->r2 != 0) {
        // 0x0041296C: addiu       $s1, $s1, 0xC
        ctx->r17 = ADD32(ctx->r17, 0XC);
            goto L_00412834;
    }
    // 0x0041296C: addiu       $s1, $s1, 0xC
    ctx->r17 = ADD32(ctx->r17, 0XC);
    // 0x00412970: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x00412974: lw          $s5, 0x24($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X24);
    // 0x00412978: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x0041297C: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x00412980: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x00412984: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00412988: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0041298C: ldc1        $f20, 0x30($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X30);
    // 0x00412990: jr          $ra
    // 0x00412994: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x00412994: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void entry_00412908(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_00412834:
    // 0x00412908: beq         $a0, $zero, L_00412928
    if (ctx->r4 == 0) {
        // 0x0041290C: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_00412928;
    }
    // 0x0041290C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x00412910: jal         0x00412314
    // 0x00412914: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_00412314(rdram, ctx);
        goto after_0;
    // 0x00412914: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_0:
    // 0x00412918: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x0041291C: lw          $v0, 0x1BB0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1BB0);
    // 0x00412920: j           L_00412930
    // 0x00412924: sw          $zero, 0x58($v0)
    MEM_W(0X58, ctx->r2) = 0;
        goto L_00412930;
    // 0x00412924: sw          $zero, 0x58($v0)
    MEM_W(0X58, ctx->r2) = 0;
L_00412928:
    // 0x00412928: jal         0x0026E210
    // 0x0041292C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_0026E210(rdram, ctx);
        goto after_1;
    // 0x0041292C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
L_00412930:
    // 0x00412930: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x00412934: addiu       $a0, $a0, 0x7078
    ctx->r4 = ADD32(ctx->r4, 0X7078);
    // 0x00412938: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0041293C: lwc1        $f0, 0xAD4($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0XAD4);
    // 0x00412940: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x00412944: swc1        $f0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->f0.u32l;
    // 0x00412948: lbu         $v0, 0xE($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XE);
    // 0x0041294C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x00412950: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x00412954: andi        $v0, $v0, 0xEF
    ctx->r2 = ctx->r2 & 0XEF;
    // 0x00412958: jal         0x00224A68
    // 0x0041295C: sb          $v0, 0xE($a1)
    MEM_B(0XE, ctx->r5) = ctx->r2;
    func_00224A68(rdram, ctx);
        goto after_2;
    // 0x0041295C: sb          $v0, 0xE($a1)
    MEM_B(0XE, ctx->r5) = ctx->r2;
    after_2:
    // 0x00412960: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x00412964: slt         $v0, $s2, $s3
    ctx->r2 = SIGNED(ctx->r18) < SIGNED(ctx->r19) ? 1 : 0;
    // 0x00412968: bne         $v0, $zero, L_00412834
    if (ctx->r2 != 0) {
        // 0x0041296C: addiu       $s1, $s1, 0xC
        ctx->r17 = ADD32(ctx->r17, 0XC);
            goto L_00412834;
    }
    // 0x0041296C: addiu       $s1, $s1, 0xC
    ctx->r17 = ADD32(ctx->r17, 0XC);
    // 0x00412970: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x00412974: lw          $s5, 0x24($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X24);
    // 0x00412978: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x0041297C: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x00412980: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x00412984: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00412988: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0041298C: ldc1        $f20, 0x30($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X30);
    // 0x00412990: jr          $ra
    // 0x00412994: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x00412994: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void entry_00412930(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_00412834:
    // 0x00412930: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x00412934: addiu       $a0, $a0, 0x7078
    ctx->r4 = ADD32(ctx->r4, 0X7078);
    // 0x00412938: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0041293C: lwc1        $f0, 0xAD4($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0XAD4);
    // 0x00412940: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x00412944: swc1        $f0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->f0.u32l;
    // 0x00412948: lbu         $v0, 0xE($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XE);
    // 0x0041294C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x00412950: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x00412954: andi        $v0, $v0, 0xEF
    ctx->r2 = ctx->r2 & 0XEF;
    // 0x00412958: jal         0x00224A68
    // 0x0041295C: sb          $v0, 0xE($a1)
    MEM_B(0XE, ctx->r5) = ctx->r2;
    func_00224A68(rdram, ctx);
        goto after_0;
    // 0x0041295C: sb          $v0, 0xE($a1)
    MEM_B(0XE, ctx->r5) = ctx->r2;
    after_0:
    // 0x00412960: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x00412964: slt         $v0, $s2, $s3
    ctx->r2 = SIGNED(ctx->r18) < SIGNED(ctx->r19) ? 1 : 0;
    // 0x00412968: bne         $v0, $zero, L_00412834
    if (ctx->r2 != 0) {
        // 0x0041296C: addiu       $s1, $s1, 0xC
        ctx->r17 = ADD32(ctx->r17, 0XC);
            goto L_00412834;
    }
    // 0x0041296C: addiu       $s1, $s1, 0xC
    ctx->r17 = ADD32(ctx->r17, 0XC);
    // 0x00412970: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x00412974: lw          $s5, 0x24($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X24);
    // 0x00412978: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x0041297C: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x00412980: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x00412984: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00412988: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0041298C: ldc1        $f20, 0x30($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X30);
    // 0x00412990: jr          $ra
    // 0x00412994: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x00412994: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void entry_00412AB4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00412AB4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00412AB8: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x00412ABC: jal         0x0020EF2C
    // 0x00412AC0: addiu       $a2, $sp, 0x10
    ctx->r6 = ADD32(ctx->r29, 0X10);
    func_0020EF2C(rdram, ctx);
        goto after_0;
    // 0x00412AC0: addiu       $a2, $sp, 0x10
    ctx->r6 = ADD32(ctx->r29, 0X10);
    after_0:
    // 0x00412AC4: jal         0x0020F5C0
    // 0x00412AC8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_0020F5C0(rdram, ctx);
        goto after_1;
    // 0x00412AC8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x00412ACC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00412AD0: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x00412AD4: jal         0x0020EAA0
    // 0x00412AD8: swc1        $f0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f0.u32l;
    func_0020EAA0(rdram, ctx);
        goto after_2;
    // 0x00412AD8: swc1        $f0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f0.u32l;
    after_2:
    // 0x00412ADC: swc1        $f0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f0.u32l;
    // 0x00412AE0: sw          $zero, 0x48($sp)
    MEM_W(0X48, ctx->r29) = 0;
    // 0x00412AE4: lw          $t0, 0x40($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X40);
    // 0x00412AE8: lw          $t1, 0x44($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X44);
    // 0x00412AEC: lw          $t2, 0x48($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X48);
    // 0x00412AF0: sw          $t0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r8;
    // 0x00412AF4: sw          $t1, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->r9;
    // 0x00412AF8: sw          $t2, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->r10;
    // 0x00412AFC: addu        $v0, $s1, $zero
    ctx->r2 = ADD32(ctx->r17, 0);
    // 0x00412B00: lw          $ra, 0x78($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X78);
    // 0x00412B04: lw          $s1, 0x74($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X74);
    // 0x00412B08: lw          $s0, 0x70($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X70);
    // 0x00412B0C: jr          $ra
    // 0x00412B10: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
    return;
    // 0x00412B10: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
;}
RECOMP_FUNC void entry_00412AE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00412AE0: sw          $zero, 0x48($sp)
    MEM_W(0X48, ctx->r29) = 0;
    // 0x00412AE4: lw          $t0, 0x40($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X40);
    // 0x00412AE8: lw          $t1, 0x44($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X44);
    // 0x00412AEC: lw          $t2, 0x48($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X48);
    // 0x00412AF0: sw          $t0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r8;
    // 0x00412AF4: sw          $t1, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->r9;
    // 0x00412AF8: sw          $t2, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->r10;
    // 0x00412AFC: addu        $v0, $s1, $zero
    ctx->r2 = ADD32(ctx->r17, 0);
    // 0x00412B00: lw          $ra, 0x78($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X78);
    // 0x00412B04: lw          $s1, 0x74($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X74);
    // 0x00412B08: lw          $s0, 0x70($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X70);
    // 0x00412B0C: jr          $ra
    // 0x00412B10: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
    return;
    // 0x00412B10: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
;}
RECOMP_FUNC void entry_00412C3C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00412C3C: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x00412C40: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x00412C44: jr          $ra
    // 0x00412C48: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x00412C48: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void entry_00412CF4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00412CF4: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x00412CF8: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x00412CFC: jr          $ra
    // 0x00412D00: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x00412D00: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void entry_00412D1C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_00412D1C:
    // 0x00412D1C: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x00412D20: lw          $v0, 0x1BB0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1BB0);
    // 0x00412D24: lw          $a0, 0x4($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X4);
    // 0x00412D28: jal         0x002017D4
    // 0x00412D2C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_002017D4(rdram, ctx);
        goto after_0;
    // 0x00412D2C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_0:
    // 0x00412D30: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x00412D34: slt         $v0, $s0, $v0
    ctx->r2 = SIGNED(ctx->r16) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x00412D38: beq         $v0, $zero, L_00412D90
    if (ctx->r2 == 0) {
        // 0x00412D3C: mov.s       $f0, $f20
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    ctx->f0.fl = ctx->f20.fl;
            goto L_00412D90;
    }
    // 0x00412D3C: mov.s       $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    ctx->f0.fl = ctx->f20.fl;
    // 0x00412D40: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x00412D44: lw          $v0, 0x1BB0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1BB0);
    // 0x00412D48: lw          $a0, 0x4($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X4);
    // 0x00412D4C: jal         0x002017D4
    // 0x00412D50: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_002017D4(rdram, ctx);
        goto after_1;
    // 0x00412D50: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_1:
    // 0x00412D54: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x00412D58: jal         0x002017D4
    // 0x00412D5C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_002017D4(rdram, ctx);
        goto after_2;
    // 0x00412D5C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_2:
    // 0x00412D60: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x00412D64: jal         0x002017D4
    // 0x00412D68: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_002017D4(rdram, ctx);
        goto after_3;
    // 0x00412D68: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_3:
    // 0x00412D6C: lw          $a0, 0x4($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X4);
    // 0x00412D70: sll         $v1, $a0, 3
    ctx->r3 = S32(ctx->r4 << 3);
    // 0x00412D74: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x00412D78: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x00412D7C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x00412D80: lwc1        $f0, 0x0($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X0);
    // 0x00412D84: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x00412D88: j           L_00412D1C
    // 0x00412D8C: add.s       $f20, $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = ctx->f20.fl + ctx->f0.fl;
        goto L_00412D1C;
    // 0x00412D8C: add.s       $f20, $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = ctx->f20.fl + ctx->f0.fl;
L_00412D90:
    // 0x00412D90: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x00412D94: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00412D98: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x00412D9C: jr          $ra
    // 0x00412DA0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00412DA0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void entry_00412FEC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00412FEC: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x00412FF0: jr          $ra
    // 0x00412FF4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x00412FF4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void entry_0041320C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041320C: beql        $v1, $v0, L_0041321C
    if (ctx->r3 == ctx->r2) {
        // 0x00413210: addiu       $a1, $zero, 0x1
        ctx->r5 = ADD32(0, 0X1);
            goto L_0041321C;
    }
    goto skip_0;
    // 0x00413210: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    skip_0:
    // 0x00413214: jr          $ra
    // 0x00413218: addu        $v0, $a1, $zero
    ctx->r2 = ADD32(ctx->r5, 0);
    return;
    // 0x00413218: addu        $v0, $a1, $zero
    ctx->r2 = ADD32(ctx->r5, 0);
L_0041321C:
    // 0x0041321C: addu        $v0, $a1, $zero
    ctx->r2 = ADD32(ctx->r5, 0);
;}
RECOMP_FUNC void entry_00413220(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00413220: jr          $ra
    // 0x00413224: nop

    return;
    // 0x00413224: nop

;}
RECOMP_FUNC void entry_00413314(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00413314: lui         $s0, 0x8013
    ctx->r16 = S32(0X8013 << 16);
    // 0x00413318: addiu       $s0, $s0, 0x8A0
    ctx->r16 = ADD32(ctx->r16, 0X8A0);
    // 0x0041331C: lwc1        $f0, 0x14($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X14);
    // 0x00413320: div.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = DIV_S(ctx->f1.fl, ctx->f0.fl);
    // 0x00413324: cvt.d.s     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.fl); 
    ctx->f1.d = CVT_D_S(ctx->f1.fl);
    // 0x00413328: sdc1        $f1, 0x10($sp)
    CHECK_FR(ctx, 1);
    SD(ctx->f1.u64, 0X10, ctx->r29);
    // 0x0041332C: lw          $a2, 0x10($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X10);
    // 0x00413330: lw          $a3, 0x14($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X14);
    // 0x00413334: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x00413338: addiu       $a1, $a1, 0xAF0
    ctx->r5 = ADD32(ctx->r5, 0XAF0);
    // 0x0041333C: jal         0x0029E3E0
    // 0x00413340: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_0029E3E0(rdram, ctx);
        goto after_0;
    // 0x00413340: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x00413344: lw          $a2, 0x0($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X0);
    // 0x00413348: beq         $a2, $zero, L_00413370
    if (ctx->r6 == 0) {
        // 0x0041334C: nop
    
            goto L_00413370;
    }
    // 0x0041334C: nop

    // 0x00413350: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x00413354: addiu       $a0, $a0, 0x860
    ctx->r4 = ADD32(ctx->r4, 0X860);
    // 0x00413358: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x0041335C: addiu       $a1, $a1, 0xAF8
    ctx->r5 = ADD32(ctx->r5, 0XAF8);
    // 0x00413360: jal         0x0029E3E0
    // 0x00413364: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    func_0029E3E0(rdram, ctx);
        goto after_1;
    // 0x00413364: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    after_1:
    // 0x00413368: j           L_00413388
    // 0x0041336C: nop

        goto L_00413388;
    // 0x0041336C: nop

L_00413370:
    // 0x00413370: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x00413374: addiu       $a0, $a0, 0x860
    ctx->r4 = ADD32(ctx->r4, 0X860);
    // 0x00413378: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x0041337C: addiu       $a1, $a1, 0xB00
    ctx->r5 = ADD32(ctx->r5, 0XB00);
    // 0x00413380: jal         0x0029E3E0
    // 0x00413384: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    func_0029E3E0(rdram, ctx);
        goto after_2;
    // 0x00413384: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    after_2:
L_00413388:
    // 0x00413388: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x0041338C: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x00413390: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x00413394: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x00413398: addiu       $v0, $v0, 0x860
    ctx->r2 = ADD32(ctx->r2, 0X860);
    // 0x0041339C: jr          $ra
    // 0x004133A0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x004133A0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void entry_00413388(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00413388: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x0041338C: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x00413390: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x00413394: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x00413398: addiu       $v0, $v0, 0x860
    ctx->r2 = ADD32(ctx->r2, 0X860);
    // 0x0041339C: jr          $ra
    // 0x004133A0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x004133A0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void entry_00413494(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00413494: lw          $a0, 0x20($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X20);
    // 0x00413498: jal         0x00285628
    // 0x0041349C: nop

    func_00285628(rdram, ctx);
        goto after_0;
    // 0x0041349C: nop

    after_0:
    // 0x004134A0: beq         $v0, $zero, L_004134C0
    if (ctx->r2 == 0) {
        // 0x004134A4: nop
    
            goto L_004134C0;
    }
    // 0x004134A4: nop

    // 0x004134A8: lwc1        $f0, 0x10($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X10);
    // 0x004134AC: sub.s       $f20, $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = ctx->f20.fl - ctx->f0.fl;
    // 0x004134B0: lwc1        $f0, 0x8($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X8);
    // 0x004134B4: c.lt.s      $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f20.fl < ctx->f0.fl;
    // 0x004134B8: j           L_004134E4
    // 0x004134BC: nop

        goto L_004134E4;
    // 0x004134BC: nop

L_004134C0:
    // 0x004134C0: lw          $a0, 0x20($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X20);
    // 0x004134C4: jal         0x00285670
    // 0x004134C8: nop

    func_00285670(rdram, ctx);
        goto after_1;
    // 0x004134C8: nop

    after_1:
    // 0x004134CC: beq         $v0, $zero, L_004134F0
    if (ctx->r2 == 0) {
        // 0x004134D0: nop
    
            goto L_004134F0;
    }
    // 0x004134D0: nop

    // 0x004134D4: lwc1        $f0, 0x10($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X10);
    // 0x004134D8: add.s       $f20, $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = ctx->f20.fl + ctx->f0.fl;
    // 0x004134DC: lwc1        $f0, 0xC($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0XC);
    // 0x004134E0: c.lt.s      $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f0.fl < ctx->f20.fl;
L_004134E4:
    // 0x004134E4: nop

    // 0x004134E8: bc1tl       L_004134F0
    if (c1cs) {
        // 0x004134EC: mov.s       $f20, $f0
        CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
            goto L_004134F0;
    }
    goto skip_0;
    // 0x004134EC: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    skip_0:
L_004134F0:
    // 0x004134F0: lw          $s0, 0x14($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X14);
    // 0x004134F4: lw          $v0, 0x18($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X18);
    // 0x004134F8: jalr        $v0
    // 0x004134FC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_2;
    // 0x004134FC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_2:
    // 0x00413500: lw          $v1, 0x4($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X4);
    // 0x00413504: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x00413508: sltiu       $v0, $v1, 0x9
    ctx->r2 = ctx->r3 < 0X9 ? 1 : 0;
    // 0x0041350C: beq         $v0, $zero, L_0041361C
    if (ctx->r2 == 0) {
        // 0x00413510: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_0041361C;
    }
    // 0x00413510: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x00413514: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00413518: addu        $at, $at, $v0
    gpr jr_addend_00413520 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x0041351C: lw          $v0, 0xB68($at)
    ctx->r2 = ADD32(ctx->r1, 0XB68);
    // 0x00413520: jr          $v0
    // 0x00413524: nop

    switch (jr_addend_00413520 >> 2) {
        case 0: goto L_00413528; break;
        case 1: goto L_00413550; break;
        case 2: goto L_00413550; break;
        case 3: goto L_00413530; break;
        case 4: goto L_00413540; break;
        case 5: goto L_00413550; break;
        case 6: goto L_00413560; break;
        case 7: goto L_004135A0; break;
        case 8: goto L_004135E0; break;
        default: switch_error(__func__, 0x00413520, 0x800C0B68);
    }
    // 0x00413524: nop

L_00413528:
    // 0x00413528: j           L_0041361C
    // 0x0041352C: swc1        $f20, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f20.u32l;
        goto L_0041361C;
    // 0x0041352C: swc1        $f20, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f20.u32l;
L_00413530:
    // 0x00413530: trunc.w.s   $f2, $f20
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    ctx->f2.u32l = TRUNC_W_S(ctx->f20.fl);
    // 0x00413534: mfc1        $v0, $f2
    ctx->r2 = (int32_t)ctx->f2.u32l;
    // 0x00413538: j           L_0041361C
    // 0x0041353C: sb          $v0, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r2;
        goto L_0041361C;
    // 0x0041353C: sb          $v0, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r2;
L_00413540:
    // 0x00413540: trunc.w.s   $f2, $f20
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    ctx->f2.u32l = TRUNC_W_S(ctx->f20.fl);
    // 0x00413544: mfc1        $v0, $f2
    ctx->r2 = (int32_t)ctx->f2.u32l;
    // 0x00413548: j           L_0041361C
    // 0x0041354C: sh          $v0, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r2;
        goto L_0041361C;
    // 0x0041354C: sh          $v0, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r2;
L_00413550:
    // 0x00413550: trunc.w.s   $f2, $f20
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    ctx->f2.u32l = TRUNC_W_S(ctx->f20.fl);
    // 0x00413554: swc1        $f2, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f2.u32l;
    // 0x00413558: j           L_0041361C
    // 0x0041355C: nop

        goto L_0041361C;
    // 0x0041355C: nop

L_00413560:
    // 0x00413560: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00413564: lwc1        $f0, 0xB8C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0XB8C);
    // 0x00413568: c.le.s      $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f0.fl <= ctx->f20.fl;
    // 0x0041356C: nop

    // 0x00413570: bc1tl       L_00413588
    if (c1cs) {
        // 0x00413574: sub.s       $f0, $f20, $f0
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f20.fl - ctx->f0.fl;
            goto L_00413588;
    }
    goto skip_1;
    // 0x00413574: sub.s       $f0, $f20, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f20.fl - ctx->f0.fl;
    skip_1:
    // 0x00413578: trunc.w.s   $f2, $f20
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    ctx->f2.u32l = TRUNC_W_S(ctx->f20.fl);
    // 0x0041357C: mfc1        $v1, $f2
    ctx->r3 = (int32_t)ctx->f2.u32l;
    // 0x00413580: j           L_0041361C
    // 0x00413584: sb          $v1, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r3;
        goto L_0041361C;
    // 0x00413584: sb          $v1, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r3;
L_00413588:
    // 0x00413588: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x0041358C: trunc.w.s   $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x00413590: mfc1        $v1, $f2
    ctx->r3 = (int32_t)ctx->f2.u32l;
    // 0x00413594: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x00413598: j           L_0041361C
    // 0x0041359C: sb          $v1, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r3;
        goto L_0041361C;
    // 0x0041359C: sb          $v1, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r3;
L_004135A0:
    // 0x004135A0: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x004135A4: lwc1        $f0, 0xB90($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0XB90);
    // 0x004135A8: c.le.s      $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f0.fl <= ctx->f20.fl;
    // 0x004135AC: nop

    // 0x004135B0: bc1tl       L_004135C8
    if (c1cs) {
        // 0x004135B4: sub.s       $f0, $f20, $f0
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f20.fl - ctx->f0.fl;
            goto L_004135C8;
    }
    goto skip_2;
    // 0x004135B4: sub.s       $f0, $f20, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f20.fl - ctx->f0.fl;
    skip_2:
    // 0x004135B8: trunc.w.s   $f2, $f20
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    ctx->f2.u32l = TRUNC_W_S(ctx->f20.fl);
    // 0x004135BC: mfc1        $v1, $f2
    ctx->r3 = (int32_t)ctx->f2.u32l;
    // 0x004135C0: j           L_0041361C
    // 0x004135C4: sh          $v1, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r3;
        goto L_0041361C;
    // 0x004135C4: sh          $v1, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r3;
L_004135C8:
    // 0x004135C8: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x004135CC: trunc.w.s   $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x004135D0: mfc1        $v1, $f2
    ctx->r3 = (int32_t)ctx->f2.u32l;
    // 0x004135D4: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x004135D8: j           L_0041361C
    // 0x004135DC: sh          $v1, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r3;
        goto L_0041361C;
    // 0x004135DC: sh          $v1, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r3;
L_004135E0:
    // 0x004135E0: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x004135E4: lwc1        $f0, 0xB94($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0XB94);
    // 0x004135E8: c.le.s      $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f0.fl <= ctx->f20.fl;
    // 0x004135EC: nop

    // 0x004135F0: bc1tl       L_00413608
    if (c1cs) {
        // 0x004135F4: sub.s       $f0, $f20, $f0
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f20.fl - ctx->f0.fl;
            goto L_00413608;
    }
    goto skip_3;
    // 0x004135F4: sub.s       $f0, $f20, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f20.fl - ctx->f0.fl;
    skip_3:
    // 0x004135F8: trunc.w.s   $f2, $f20
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    ctx->f2.u32l = TRUNC_W_S(ctx->f20.fl);
    // 0x004135FC: mfc1        $v1, $f2
    ctx->r3 = (int32_t)ctx->f2.u32l;
    // 0x00413600: j           L_0041361C
    // 0x00413604: sw          $v1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r3;
        goto L_0041361C;
    // 0x00413604: sw          $v1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r3;
L_00413608:
    // 0x00413608: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x0041360C: trunc.w.s   $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x00413610: mfc1        $v1, $f2
    ctx->r3 = (int32_t)ctx->f2.u32l;
    // 0x00413614: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x00413618: sw          $v1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r3;
L_0041361C:
    // 0x0041361C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x00413620: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x00413624: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00413628: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0041362C: ldc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X20);
    // 0x00413630: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x00413634: jr          $ra
    // 0x00413638: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x00413638: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void entry_004134E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004134E4: nop

    // 0x004134E8: bc1tl       L_004134F0
    if (c1cs) {
        // 0x004134EC: mov.s       $f20, $f0
        CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
            goto L_004134F0;
    }
    goto skip_0;
    // 0x004134EC: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    skip_0:
L_004134F0:
    // 0x004134F0: lw          $s0, 0x14($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X14);
    // 0x004134F4: lw          $v0, 0x18($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X18);
    // 0x004134F8: jalr        $v0
    // 0x004134FC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x004134FC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_0:
    // 0x00413500: lw          $v1, 0x4($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X4);
    // 0x00413504: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x00413508: sltiu       $v0, $v1, 0x9
    ctx->r2 = ctx->r3 < 0X9 ? 1 : 0;
    // 0x0041350C: beq         $v0, $zero, L_0041361C
    if (ctx->r2 == 0) {
        // 0x00413510: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_0041361C;
    }
    // 0x00413510: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x00413514: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00413518: addu        $at, $at, $v0
    gpr jr_addend_00413520 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x0041351C: lw          $v0, 0xB68($at)
    ctx->r2 = ADD32(ctx->r1, 0XB68);
    // 0x00413520: jr          $v0
    // 0x00413524: nop

    switch (jr_addend_00413520 >> 2) {
        case 0: goto L_00413528; break;
        case 1: goto L_00413550; break;
        case 2: goto L_00413550; break;
        case 3: goto L_00413530; break;
        case 4: goto L_00413540; break;
        case 5: goto L_00413550; break;
        case 6: goto L_00413560; break;
        case 7: goto L_004135A0; break;
        case 8: goto L_004135E0; break;
        default: switch_error(__func__, 0x00413520, 0x800C0B68);
    }
    // 0x00413524: nop

L_00413528:
    // 0x00413528: j           L_0041361C
    // 0x0041352C: swc1        $f20, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f20.u32l;
        goto L_0041361C;
    // 0x0041352C: swc1        $f20, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f20.u32l;
L_00413530:
    // 0x00413530: trunc.w.s   $f2, $f20
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    ctx->f2.u32l = TRUNC_W_S(ctx->f20.fl);
    // 0x00413534: mfc1        $v0, $f2
    ctx->r2 = (int32_t)ctx->f2.u32l;
    // 0x00413538: j           L_0041361C
    // 0x0041353C: sb          $v0, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r2;
        goto L_0041361C;
    // 0x0041353C: sb          $v0, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r2;
L_00413540:
    // 0x00413540: trunc.w.s   $f2, $f20
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    ctx->f2.u32l = TRUNC_W_S(ctx->f20.fl);
    // 0x00413544: mfc1        $v0, $f2
    ctx->r2 = (int32_t)ctx->f2.u32l;
    // 0x00413548: j           L_0041361C
    // 0x0041354C: sh          $v0, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r2;
        goto L_0041361C;
    // 0x0041354C: sh          $v0, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r2;
L_00413550:
    // 0x00413550: trunc.w.s   $f2, $f20
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    ctx->f2.u32l = TRUNC_W_S(ctx->f20.fl);
    // 0x00413554: swc1        $f2, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f2.u32l;
    // 0x00413558: j           L_0041361C
    // 0x0041355C: nop

        goto L_0041361C;
    // 0x0041355C: nop

L_00413560:
    // 0x00413560: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00413564: lwc1        $f0, 0xB8C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0XB8C);
    // 0x00413568: c.le.s      $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f0.fl <= ctx->f20.fl;
    // 0x0041356C: nop

    // 0x00413570: bc1tl       L_00413588
    if (c1cs) {
        // 0x00413574: sub.s       $f0, $f20, $f0
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f20.fl - ctx->f0.fl;
            goto L_00413588;
    }
    goto skip_1;
    // 0x00413574: sub.s       $f0, $f20, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f20.fl - ctx->f0.fl;
    skip_1:
    // 0x00413578: trunc.w.s   $f2, $f20
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    ctx->f2.u32l = TRUNC_W_S(ctx->f20.fl);
    // 0x0041357C: mfc1        $v1, $f2
    ctx->r3 = (int32_t)ctx->f2.u32l;
    // 0x00413580: j           L_0041361C
    // 0x00413584: sb          $v1, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r3;
        goto L_0041361C;
    // 0x00413584: sb          $v1, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r3;
L_00413588:
    // 0x00413588: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x0041358C: trunc.w.s   $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x00413590: mfc1        $v1, $f2
    ctx->r3 = (int32_t)ctx->f2.u32l;
    // 0x00413594: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x00413598: j           L_0041361C
    // 0x0041359C: sb          $v1, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r3;
        goto L_0041361C;
    // 0x0041359C: sb          $v1, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r3;
L_004135A0:
    // 0x004135A0: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x004135A4: lwc1        $f0, 0xB90($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0XB90);
    // 0x004135A8: c.le.s      $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f0.fl <= ctx->f20.fl;
    // 0x004135AC: nop

    // 0x004135B0: bc1tl       L_004135C8
    if (c1cs) {
        // 0x004135B4: sub.s       $f0, $f20, $f0
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f20.fl - ctx->f0.fl;
            goto L_004135C8;
    }
    goto skip_2;
    // 0x004135B4: sub.s       $f0, $f20, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f20.fl - ctx->f0.fl;
    skip_2:
    // 0x004135B8: trunc.w.s   $f2, $f20
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    ctx->f2.u32l = TRUNC_W_S(ctx->f20.fl);
    // 0x004135BC: mfc1        $v1, $f2
    ctx->r3 = (int32_t)ctx->f2.u32l;
    // 0x004135C0: j           L_0041361C
    // 0x004135C4: sh          $v1, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r3;
        goto L_0041361C;
    // 0x004135C4: sh          $v1, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r3;
L_004135C8:
    // 0x004135C8: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x004135CC: trunc.w.s   $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x004135D0: mfc1        $v1, $f2
    ctx->r3 = (int32_t)ctx->f2.u32l;
    // 0x004135D4: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x004135D8: j           L_0041361C
    // 0x004135DC: sh          $v1, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r3;
        goto L_0041361C;
    // 0x004135DC: sh          $v1, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r3;
L_004135E0:
    // 0x004135E0: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x004135E4: lwc1        $f0, 0xB94($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0XB94);
    // 0x004135E8: c.le.s      $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f0.fl <= ctx->f20.fl;
    // 0x004135EC: nop

    // 0x004135F0: bc1tl       L_00413608
    if (c1cs) {
        // 0x004135F4: sub.s       $f0, $f20, $f0
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f20.fl - ctx->f0.fl;
            goto L_00413608;
    }
    goto skip_3;
    // 0x004135F4: sub.s       $f0, $f20, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f20.fl - ctx->f0.fl;
    skip_3:
    // 0x004135F8: trunc.w.s   $f2, $f20
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    ctx->f2.u32l = TRUNC_W_S(ctx->f20.fl);
    // 0x004135FC: mfc1        $v1, $f2
    ctx->r3 = (int32_t)ctx->f2.u32l;
    // 0x00413600: j           L_0041361C
    // 0x00413604: sw          $v1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r3;
        goto L_0041361C;
    // 0x00413604: sw          $v1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r3;
L_00413608:
    // 0x00413608: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x0041360C: trunc.w.s   $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x00413610: mfc1        $v1, $f2
    ctx->r3 = (int32_t)ctx->f2.u32l;
    // 0x00413614: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x00413618: sw          $v1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r3;
L_0041361C:
    // 0x0041361C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x00413620: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x00413624: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00413628: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0041362C: ldc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X20);
    // 0x00413630: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x00413634: jr          $ra
    // 0x00413638: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x00413638: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void entry_0041361C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041361C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x00413620: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x00413624: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00413628: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0041362C: ldc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X20);
    // 0x00413630: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x00413634: jr          $ra
    // 0x00413638: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x00413638: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void entry_0041377C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041377C: sll         $v0, $a0, 3
    ctx->r2 = S32(ctx->r4 << 3);
    // 0x00413780: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
    // 0x00413784: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x00413788: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x0041378C: addiu       $v1, $v1, 0x1BD4
    ctx->r3 = ADD32(ctx->r3, 0X1BD4);
    // 0x00413790: addu        $s1, $v0, $v1
    ctx->r17 = ADD32(ctx->r2, ctx->r3);
    // 0x00413794: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x00413798: bne         $v0, $zero, L_004137E8
    if (ctx->r2 != 0) {
        // 0x0041379C: addiu       $v0, $zero, 0x5
        ctx->r2 = ADD32(0, 0X5);
            goto L_004137E8;
    }
    // 0x0041379C: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x004137A0: lwc1        $f20, 0x4($s1)
    ctx->f20.u32l = MEM_W(ctx->r17, 0X4);
    // 0x004137A4: cvt.s.w     $f20, $f20
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    ctx->f20.fl = CVT_S_W(ctx->f20.u32l);
    // 0x004137A8: lh          $v1, 0x4($s3)
    ctx->r3 = MEM_H(ctx->r19, 0X4);
    // 0x004137AC: bne         $v1, $v0, L_004137C4
    if (ctx->r3 != ctx->r2) {
        // 0x004137B0: nop
    
            goto L_004137C4;
    }
    // 0x004137B0: nop

    // 0x004137B4: jal         0x00413230
    // 0x004137B8: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    func_00413230(rdram, ctx);
        goto after_0;
    // 0x004137B8: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    after_0:
    // 0x004137BC: j           L_004137C8
    // 0x004137C0: nop

        goto L_004137C8;
    // 0x004137C0: nop

L_004137C4:
    // 0x004137C4: lw          $v0, 0x14($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X14);
L_004137C8:
    // 0x004137C8: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x004137CC: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x004137D0: jal         0x004163C0
    // 0x004137D4: addu        $a2, $a1, $zero
    ctx->r6 = ADD32(ctx->r5, 0);
    func_004163C0(rdram, ctx);
        goto after_1;
    // 0x004137D4: addu        $a2, $a1, $zero
    ctx->r6 = ADD32(ctx->r5, 0);
    after_1:
    // 0x004137D8: trunc.w.s   $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x004137DC: swc1        $f4, 0x4($s2)
    MEM_W(0X4, ctx->r18) = ctx->f4.u32l;
    // 0x004137E0: j           L_0041384C
    // 0x004137E4: nop

        goto L_0041384C;
    // 0x004137E4: nop

L_004137E8:
    // 0x004137E8: lh          $v1, 0x4($s3)
    ctx->r3 = MEM_H(ctx->r19, 0X4);
    // 0x004137EC: bne         $v1, $v0, L_00413804
    if (ctx->r3 != ctx->r2) {
        // 0x004137F0: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_00413804;
    }
    // 0x004137F0: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x004137F4: jal         0x00413230
    // 0x004137F8: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    func_00413230(rdram, ctx);
        goto after_2;
    // 0x004137F8: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    after_2:
    // 0x004137FC: j           L_00413808
    // 0x00413800: nop

        goto L_00413808;
    // 0x00413800: nop

L_00413804:
    // 0x00413804: lw          $v0, 0x14($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X14);
L_00413808:
    // 0x00413808: beq         $v0, $zero, L_0041383C
    if (ctx->r2 == 0) {
        // 0x0041380C: nop
    
            goto L_0041383C;
    }
    // 0x0041380C: nop

    // 0x00413810: lbu         $v1, 0x0($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X0);
    // 0x00413814: beq         $v1, $zero, L_0041383C
    if (ctx->r3 == 0) {
        // 0x00413818: nop
    
            goto L_0041383C;
    }
    // 0x00413818: nop

    // 0x0041381C: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
L_00413820:
    // 0x00413820: beq         $v1, $a0, L_0041383C
    if (ctx->r3 == ctx->r4) {
        // 0x00413824: addiu       $v0, $v0, 0x1
        ctx->r2 = ADD32(ctx->r2, 0X1);
            goto L_0041383C;
    }
    // 0x00413824: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x00413828: beq         $v0, $zero, L_0041383C
    if (ctx->r2 == 0) {
        // 0x0041382C: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_0041383C;
    }
    // 0x0041382C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x00413830: lbu         $v1, 0x0($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X0);
    // 0x00413834: bne         $v1, $zero, L_00413820
    if (ctx->r3 != 0) {
        // 0x00413838: nop
    
            goto L_00413820;
    }
    // 0x00413838: nop

L_0041383C:
    // 0x0041383C: lw          $v0, 0x4($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X4);
    // 0x00413840: mult        $s0, $v0
    result = S64(S32(ctx->r16)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x00413844: mflo        $t0
    ctx->r8 = lo;
    // 0x00413848: sw          $t0, 0x4($s2)
    MEM_W(0X4, ctx->r18) = ctx->r8;
L_0041384C:
    // 0x0041384C: lw          $v0, 0x8($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X8);
    // 0x00413850: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x00413854: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x00413858: beq         $v0, $zero, L_00413888
    if (ctx->r2 == 0) {
        // 0x0041385C: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_00413888;
    }
    // 0x0041385C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x00413860: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00413864: lwc1        $f1, 0xBB8($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0XBB8);
    // 0x00413868: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0041386C: lwc1        $f0, 0x2034($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X2034);
    // 0x00413870: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00413874: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00413878: trunc.w.s   $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x0041387C: swc1        $f4, 0x8($s2)
    MEM_W(0X8, ctx->r18) = ctx->f4.u32l;
    // 0x00413880: j           L_0041391C
    // 0x00413884: nop

        goto L_0041391C;
    // 0x00413884: nop

L_00413888:
    // 0x00413888: lw          $v1, 0x0($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X0);
    // 0x0041388C: bne         $v1, $v0, L_004138E4
    if (ctx->r3 != ctx->r2) {
        // 0x00413890: nop
    
            goto L_004138E4;
    }
    // 0x00413890: nop

    // 0x00413894: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x00413898: lw          $v1, 0x2034($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X2034);
    // 0x0041389C: slti        $v0, $v1, 0xDF
    ctx->r2 = SIGNED(ctx->r3) < 0XDF ? 1 : 0;
    // 0x004138A0: bne         $v0, $zero, L_004138E4
    if (ctx->r2 != 0) {
        // 0x004138A4: nop
    
            goto L_004138E4;
    }
    // 0x004138A4: nop

    // 0x004138A8: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x004138AC: lwc1        $f1, 0xBBC($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0XBBC);
    // 0x004138B0: lwc1        $f0, 0x8($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X8);
    // 0x004138B4: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x004138B8: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x004138BC: mtc1        $v1, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r3;
    // 0x004138C0: cvt.s.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.fl = CVT_S_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x004138C4: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x004138C8: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x004138CC: lwc1        $f1, 0xBC0($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0XBC0);
    // 0x004138D0: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x004138D4: trunc.w.s   $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x004138D8: swc1        $f4, 0x8($s2)
    MEM_W(0X8, ctx->r18) = ctx->f4.u32l;
    // 0x004138DC: j           L_0041391C
    // 0x004138E0: nop

        goto L_0041391C;
    // 0x004138E0: nop

L_004138E4:
    // 0x004138E4: lw          $v1, 0x8($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X8);
    // 0x004138E8: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x004138EC: lw          $v0, 0x2034($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2034);
    // 0x004138F0: mult        $v1, $v0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x004138F4: mflo        $v1
    ctx->r3 = lo;
    // 0x004138F8: lui         $v0, 0x939A
    ctx->r2 = S32(0X939A << 16);
    // 0x004138FC: ori         $v0, $v0, 0x85C5
    ctx->r2 = ctx->r2 | 0X85C5;
    // 0x00413900: mult        $v1, $v0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x00413904: mfhi        $t4
    ctx->r12 = hi;
    // 0x00413908: addu        $v0, $t4, $v1
    ctx->r2 = ADD32(ctx->r12, ctx->r3);
    // 0x0041390C: sra         $v0, $v0, 7
    ctx->r2 = S32(SIGNED(ctx->r2) >> 7);
    // 0x00413910: sra         $v1, $v1, 31
    ctx->r3 = S32(SIGNED(ctx->r3) >> 31);
    // 0x00413914: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x00413918: sw          $v0, 0x8($s2)
    MEM_W(0X8, ctx->r18) = ctx->r2;
L_0041391C:
    // 0x0041391C: lw          $v1, 0x4($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X4);
    // 0x00413920: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x00413924: lw          $v0, 0x2030($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2030);
    // 0x00413928: mult        $v1, $v0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x0041392C: mflo        $v1
    ctx->r3 = lo;
    // 0x00413930: lui         $v0, 0xE6C2
    ctx->r2 = S32(0XE6C2 << 16);
    // 0x00413934: ori         $v0, $v0, 0xB449
    ctx->r2 = ctx->r2 | 0XB449;
    // 0x00413938: mult        $v1, $v0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x0041393C: mfhi        $t4
    ctx->r12 = hi;
    // 0x00413940: addu        $v0, $t4, $v1
    ctx->r2 = ADD32(ctx->r12, ctx->r3);
    // 0x00413944: sra         $v0, $v0, 8
    ctx->r2 = S32(SIGNED(ctx->r2) >> 8);
    // 0x00413948: sra         $v1, $v1, 31
    ctx->r3 = S32(SIGNED(ctx->r3) >> 31);
    // 0x0041394C: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x00413950: j           L_00413E14
    // 0x00413954: sw          $v0, 0x4($s2)
    MEM_W(0X4, ctx->r18) = ctx->r2;
        goto L_00413E14;
    // 0x00413954: sw          $v0, 0x4($s2)
    MEM_W(0X4, ctx->r18) = ctx->r2;
    // 0x00413958: lw          $v0, 0x8($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X8);
    // 0x0041395C: andi        $v1, $v0, 0x3FE0
    ctx->r3 = ctx->r2 & 0X3FE0;
    // 0x00413960: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x00413964: beq         $v1, $v0, L_00413A0C
    if (ctx->r3 == ctx->r2) {
        // 0x00413968: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_00413A0C;
    }
    // 0x00413968: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0041396C: sltiu       $v0, $v1, 0x201
    ctx->r2 = ctx->r3 < 0X201 ? 1 : 0;
    // 0x00413970: beq         $v0, $zero, L_004139BC
    if (ctx->r2 == 0) {
        // 0x00413974: addiu       $v0, $zero, 0x40
        ctx->r2 = ADD32(0, 0X40);
            goto L_004139BC;
    }
    // 0x00413974: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x00413978: beql        $v1, $v0, L_00413A20
    if (ctx->r3 == ctx->r2) {
        // 0x0041397C: addiu       $a0, $zero, 0x1
        ctx->r4 = ADD32(0, 0X1);
            goto L_00413A20;
    }
    goto skip_0;
    // 0x0041397C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    skip_0:
    // 0x00413980: sltiu       $v0, $v1, 0x41
    ctx->r2 = ctx->r3 < 0X41 ? 1 : 0;
    // 0x00413984: beq         $v0, $zero, L_0041399C
    if (ctx->r2 == 0) {
        // 0x00413988: addiu       $v0, $zero, 0x20
        ctx->r2 = ADD32(0, 0X20);
            goto L_0041399C;
    }
    // 0x00413988: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x0041398C: beq         $v1, $v0, L_00413A24
    if (ctx->r3 == ctx->r2) {
        // 0x00413990: sll         $v0, $a0, 3
        ctx->r2 = S32(ctx->r4 << 3);
            goto L_00413A24;
    }
    // 0x00413990: sll         $v0, $a0, 3
    ctx->r2 = S32(ctx->r4 << 3);
    // 0x00413994: j           L_00413A28
    // 0x00413998: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
        goto L_00413A28;
    // 0x00413998: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
L_0041399C:
    // 0x0041399C: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x004139A0: beq         $v1, $v0, L_00413A20
    if (ctx->r3 == ctx->r2) {
        // 0x004139A4: addiu       $a0, $zero, 0x2
        ctx->r4 = ADD32(0, 0X2);
            goto L_00413A20;
    }
    // 0x004139A4: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x004139A8: addiu       $v0, $zero, 0x100
    ctx->r2 = ADD32(0, 0X100);
    // 0x004139AC: beq         $v1, $v0, L_00413A04
    if (ctx->r3 == ctx->r2) {
        // 0x004139B0: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_00413A04;
    }
    // 0x004139B0: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x004139B4: j           L_00413A24
    // 0x004139B8: sll         $v0, $a0, 3
    ctx->r2 = S32(ctx->r4 << 3);
        goto L_00413A24;
    // 0x004139B8: sll         $v0, $a0, 3
    ctx->r2 = S32(ctx->r4 << 3);
L_004139BC:
    // 0x004139BC: addiu       $v0, $zero, 0x800
    ctx->r2 = ADD32(0, 0X800);
    // 0x004139C0: beq         $v1, $v0, L_00413A20
    if (ctx->r3 == ctx->r2) {
        // 0x004139C4: addiu       $a0, $zero, 0x6
        ctx->r4 = ADD32(0, 0X6);
            goto L_00413A20;
    }
    // 0x004139C4: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    // 0x004139C8: sltiu       $v0, $v1, 0x801
    ctx->r2 = ctx->r3 < 0X801 ? 1 : 0;
    // 0x004139CC: beq         $v0, $zero, L_004139E4
    if (ctx->r2 == 0) {
        // 0x004139D0: addiu       $v0, $zero, 0x400
        ctx->r2 = ADD32(0, 0X400);
            goto L_004139E4;
    }
    // 0x004139D0: addiu       $v0, $zero, 0x400
    ctx->r2 = ADD32(0, 0X400);
    // 0x004139D4: beq         $v1, $v0, L_00413A14
    if (ctx->r3 == ctx->r2) {
        // 0x004139D8: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_00413A14;
    }
    // 0x004139D8: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x004139DC: j           L_00413A24
    // 0x004139E0: sll         $v0, $a0, 3
    ctx->r2 = S32(ctx->r4 << 3);
        goto L_00413A24;
    // 0x004139E0: sll         $v0, $a0, 3
    ctx->r2 = S32(ctx->r4 << 3);
L_004139E4:
    // 0x004139E4: addiu       $v0, $zero, 0x1000
    ctx->r2 = ADD32(0, 0X1000);
    // 0x004139E8: beq         $v1, $v0, L_00413A20
    if (ctx->r3 == ctx->r2) {
        // 0x004139EC: addiu       $a0, $zero, 0x7
        ctx->r4 = ADD32(0, 0X7);
            goto L_00413A20;
    }
    // 0x004139EC: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    // 0x004139F0: addiu       $v0, $zero, 0x2000
    ctx->r2 = ADD32(0, 0X2000);
    // 0x004139F4: beq         $v1, $v0, L_00413A1C
    if (ctx->r3 == ctx->r2) {
        // 0x004139F8: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_00413A1C;
    }
    // 0x004139F8: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x004139FC: j           L_00413A24
    // 0x00413A00: sll         $v0, $a0, 3
    ctx->r2 = S32(ctx->r4 << 3);
        goto L_00413A24;
    // 0x00413A00: sll         $v0, $a0, 3
    ctx->r2 = S32(ctx->r4 << 3);
L_00413A04:
    // 0x00413A04: j           L_00413A20
    // 0x00413A08: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
        goto L_00413A20;
    // 0x00413A08: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
L_00413A0C:
    // 0x00413A0C: j           L_00413A20
    // 0x00413A10: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
        goto L_00413A20;
    // 0x00413A10: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
L_00413A14:
    // 0x00413A14: j           L_00413A20
    // 0x00413A18: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
        goto L_00413A20;
    // 0x00413A18: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
L_00413A1C:
    // 0x00413A1C: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
L_00413A20:
    // 0x00413A20: sll         $v0, $a0, 3
    ctx->r2 = S32(ctx->r4 << 3);
L_00413A24:
    // 0x00413A24: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
L_00413A28:
    // 0x00413A28: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x00413A2C: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x00413A30: addiu       $v1, $v1, 0x1BD4
    ctx->r3 = ADD32(ctx->r3, 0X1BD4);
    // 0x00413A34: addu        $s1, $v0, $v1
    ctx->r17 = ADD32(ctx->r2, ctx->r3);
    // 0x00413A38: lw          $v0, 0x4($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X4);
    // 0x00413A3C: sw          $v0, 0x4($s2)
    MEM_W(0X4, ctx->r18) = ctx->r2;
    // 0x00413A40: lw          $v1, 0x8($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X8);
    // 0x00413A44: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x00413A48: lw          $v0, 0x2034($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2034);
    // 0x00413A4C: mult        $v1, $v0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x00413A50: mflo        $v1
    ctx->r3 = lo;
    // 0x00413A54: lui         $v0, 0x939A
    ctx->r2 = S32(0X939A << 16);
    // 0x00413A58: ori         $v0, $v0, 0x85C5
    ctx->r2 = ctx->r2 | 0X85C5;
    // 0x00413A5C: mult        $v1, $v0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x00413A60: mfhi        $t4
    ctx->r12 = hi;
    // 0x00413A64: addu        $v0, $t4, $v1
    ctx->r2 = ADD32(ctx->r12, ctx->r3);
    // 0x00413A68: sra         $v0, $v0, 7
    ctx->r2 = S32(SIGNED(ctx->r2) >> 7);
    // 0x00413A6C: sra         $v1, $v1, 31
    ctx->r3 = S32(SIGNED(ctx->r3) >> 31);
    // 0x00413A70: j           L_00413E10
    // 0x00413A74: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
        goto L_00413E10;
    // 0x00413A74: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x00413A78: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x00413A7C: addiu       $a0, $a0, -0x5378
    ctx->r4 = ADD32(ctx->r4, -0X5378);
    // 0x00413A80: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x00413A84: addiu       $v0, $zero, 0xD
    ctx->r2 = ADD32(0, 0XD);
    // 0x00413A88: bne         $v1, $v0, L_00413AA0
    if (ctx->r3 != ctx->r2) {
        // 0x00413A8C: lui         $v1, 0x4000
        ctx->r3 = S32(0X4000 << 16);
            goto L_00413AA0;
    }
    // 0x00413A8C: lui         $v1, 0x4000
    ctx->r3 = S32(0X4000 << 16);
    // 0x00413A90: lw          $v0, 0x8($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X8);
    // 0x00413A94: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x00413A98: bne         $v0, $zero, L_00413ACC
    if (ctx->r2 != 0) {
        // 0x00413A9C: addiu       $v0, $zero, 0x11C
        ctx->r2 = ADD32(0, 0X11C);
            goto L_00413ACC;
    }
    // 0x00413A9C: addiu       $v0, $zero, 0x11C
    ctx->r2 = ADD32(0, 0X11C);
L_00413AA0:
    // 0x00413AA0: lbu         $v0, -0x197($a0)
    ctx->r2 = MEM_BU(ctx->r4, -0X197);
    // 0x00413AA4: beq         $v0, $zero, L_00413ADC
    if (ctx->r2 == 0) {
        // 0x00413AA8: nop
    
            goto L_00413ADC;
    }
    // 0x00413AA8: nop

    // 0x00413AAC: lw          $v0, 0x8($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X8);
    // 0x00413AB0: bgez        $v0, L_00413ADC
    if (SIGNED(ctx->r2) >= 0) {
        // 0x00413AB4: nop
    
            goto L_00413ADC;
    }
    // 0x00413AB4: nop

    // 0x00413AB8: jal         0x00266B80
    // 0x00413ABC: nop

    func_00266B80(rdram, ctx);
        goto after_3;
    // 0x00413ABC: nop

    after_3:
    // 0x00413AC0: lui         $v1, 0x40
    ctx->r3 = S32(0X40 << 16);
    // 0x00413AC4: bne         $v0, $v1, L_00413ADC
    if (ctx->r2 != ctx->r3) {
        // 0x00413AC8: addiu       $v0, $zero, 0x11C
        ctx->r2 = ADD32(0, 0X11C);
            goto L_00413ADC;
    }
    // 0x00413AC8: addiu       $v0, $zero, 0x11C
    ctx->r2 = ADD32(0, 0X11C);
L_00413ACC:
    // 0x00413ACC: sw          $v0, 0x4($s2)
    MEM_W(0X4, ctx->r18) = ctx->r2;
    // 0x00413AD0: addiu       $v0, $zero, 0xDE
    ctx->r2 = ADD32(0, 0XDE);
    // 0x00413AD4: j           L_00413AF0
    // 0x00413AD8: sw          $v0, 0x8($s2)
    MEM_W(0X8, ctx->r18) = ctx->r2;
        goto L_00413AF0;
    // 0x00413AD8: sw          $v0, 0x8($s2)
    MEM_W(0X8, ctx->r18) = ctx->r2;
L_00413ADC:
    // 0x00413ADC: lw          $a0, 0x14($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X14);
    // 0x00413AE0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x00413AE4: addiu       $a2, $s2, 0x4
    ctx->r6 = ADD32(ctx->r18, 0X4);
    // 0x00413AE8: jal         0x0027AEA8
    // 0x00413AEC: addiu       $a3, $s2, 0x8
    ctx->r7 = ADD32(ctx->r18, 0X8);
    func_0027AEA8(rdram, ctx);
        goto after_4;
    // 0x00413AEC: addiu       $a3, $s2, 0x8
    ctx->r7 = ADD32(ctx->r18, 0X8);
    after_4:
L_00413AF0:
    // 0x00413AF0: lw          $v0, 0x8($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X8);
    // 0x00413AF4: lui         $v1, 0x1000
    ctx->r3 = S32(0X1000 << 16);
    // 0x00413AF8: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x00413AFC: beq         $v0, $zero, L_00413B4C
    if (ctx->r2 == 0) {
        // 0x00413B00: nop
    
            goto L_00413B4C;
    }
    // 0x00413B00: nop

    // 0x00413B04: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x00413B08: lwc1        $f3, 0x4($s2)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r18, 0X4);
    // 0x00413B0C: cvt.s.w     $f3, $f3
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    ctx->f3.fl = CVT_S_W(ctx->f_odd[(3 - 1) * 2]);
    // 0x00413B10: c.eq.s      $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f3.fl == ctx->f0.fl;
    // 0x00413B14: nop

    // 0x00413B18: bc1t        L_00413B4C
    if (c1cs) {
        // 0x00413B1C: nop
    
            goto L_00413B4C;
    }
    // 0x00413B1C: nop

    // 0x00413B20: lwc1        $f2, 0x8($s2)
    ctx->f2.u32l = MEM_W(ctx->r18, 0X8);
    // 0x00413B24: cvt.s.w     $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    ctx->f2.fl = CVT_S_W(ctx->f2.u32l);
    // 0x00413B28: c.eq.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl == ctx->f0.fl;
    // 0x00413B2C: nop

    // 0x00413B30: bc1t        L_00413B4C
    if (c1cs) {
        // 0x00413B34: nop
    
            goto L_00413B4C;
    }
    // 0x00413B34: nop

    // 0x00413B38: lwc1        $f0, 0x288($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X288);
    // 0x00413B3C: lwc1        $f1, 0x28C($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X28C);
    // 0x00413B40: div.s       $f3, $f0, $f3
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f3.fl = DIV_S(ctx->f0.fl, ctx->f3.fl);
    // 0x00413B44: j           L_00413B7C
    // 0x00413B48: div.s       $f0, $f1, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = DIV_S(ctx->f1.fl, ctx->f2.fl);
        goto L_00413B7C;
    // 0x00413B48: div.s       $f0, $f1, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = DIV_S(ctx->f1.fl, ctx->f2.fl);
L_00413B4C:
    // 0x00413B4C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00413B50: lwc1        $f1, 0xBC4($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0XBC4);
    // 0x00413B54: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00413B58: lwc1        $f0, 0x2030($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X2030);
    // 0x00413B5C: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00413B60: mul.s       $f3, $f0, $f1
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f3.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00413B64: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00413B68: lwc1        $f1, 0xBC8($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0XBC8);
    // 0x00413B6C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00413B70: lwc1        $f0, 0x2034($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X2034);
    // 0x00413B74: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00413B78: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
L_00413B7C:
    // 0x00413B7C: swc1        $f3, 0xC($s2)
    MEM_W(0XC, ctx->r18) = ctx->f_odd[(3 - 1) * 2];
    // 0x00413B80: j           L_00413E14
    // 0x00413B84: swc1        $f0, 0x10($s2)
    MEM_W(0X10, ctx->r18) = ctx->f0.u32l;
        goto L_00413E14;
    // 0x00413B84: swc1        $f0, 0x10($s2)
    MEM_W(0X10, ctx->r18) = ctx->f0.u32l;
    // 0x00413B88: addiu       $v1, $sp, 0x38
    ctx->r3 = ADD32(ctx->r29, 0X38);
    // 0x00413B8C: addu        $v0, $s2, $zero
    ctx->r2 = ADD32(ctx->r18, 0);
    // 0x00413B90: addiu       $a0, $s2, 0x20
    ctx->r4 = ADD32(ctx->r18, 0X20);
L_00413B94:
    // 0x00413B94: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x00413B98: lw          $t1, 0x4($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X4);
    // 0x00413B9C: lw          $t2, 0x8($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X8);
    // 0x00413BA0: lw          $t3, 0xC($v0)
    ctx->r11 = MEM_W(ctx->r2, 0XC);
    // 0x00413BA4: sw          $t0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r8;
    // 0x00413BA8: sw          $t1, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r9;
    // 0x00413BAC: sw          $t2, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r10;
    // 0x00413BB0: sw          $t3, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r11;
    // 0x00413BB4: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
    // 0x00413BB8: bne         $v0, $a0, L_00413B94
    if (ctx->r2 != ctx->r4) {
        // 0x00413BBC: addiu       $v1, $v1, 0x10
        ctx->r3 = ADD32(ctx->r3, 0X10);
            goto L_00413B94;
    }
    // 0x00413BBC: addiu       $v1, $v1, 0x10
    ctx->r3 = ADD32(ctx->r3, 0X10);
    // 0x00413BC0: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x00413BC4: sw          $t0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r8;
    // 0x00413BC8: addiu       $v1, $sp, 0x10
    ctx->r3 = ADD32(ctx->r29, 0X10);
    // 0x00413BCC: addu        $v0, $s3, $zero
    ctx->r2 = ADD32(ctx->r19, 0);
    // 0x00413BD0: addiu       $a0, $s3, 0x20
    ctx->r4 = ADD32(ctx->r19, 0X20);
L_00413BD4:
    // 0x00413BD4: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x00413BD8: lw          $t1, 0x4($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X4);
    // 0x00413BDC: lw          $t2, 0x8($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X8);
    // 0x00413BE0: lw          $t3, 0xC($v0)
    ctx->r11 = MEM_W(ctx->r2, 0XC);
    // 0x00413BE4: sw          $t0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r8;
    // 0x00413BE8: sw          $t1, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r9;
    // 0x00413BEC: sw          $t2, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r10;
    // 0x00413BF0: sw          $t3, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r11;
    // 0x00413BF4: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
    // 0x00413BF8: bne         $v0, $a0, L_00413BD4
    if (ctx->r2 != ctx->r4) {
        // 0x00413BFC: addiu       $v1, $v1, 0x10
        ctx->r3 = ADD32(ctx->r3, 0X10);
            goto L_00413BD4;
    }
    // 0x00413BFC: addiu       $v1, $v1, 0x10
    ctx->r3 = ADD32(ctx->r3, 0X10);
    // 0x00413C00: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x00413C04: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    // 0x00413C08: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x00413C0C: lw          $t1, 0x4($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X4);
    // 0x00413C10: sw          $t0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r8;
    // 0x00413C14: sw          $t1, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r9;
    // 0x00413C18: jal         0x0041363C
    // 0x00413C1C: sh          $zero, 0x14($sp)
    MEM_H(0X14, ctx->r29) = 0;
    func_0041363C(rdram, ctx);
        goto after_5;
    // 0x00413C1C: sh          $zero, 0x14($sp)
    MEM_H(0X14, ctx->r29) = 0;
    after_5:
    // 0x00413C20: addiu       $v1, $sp, 0x60
    ctx->r3 = ADD32(ctx->r29, 0X60);
    // 0x00413C24: addu        $v0, $s2, $zero
    ctx->r2 = ADD32(ctx->r18, 0);
    // 0x00413C28: addiu       $a0, $s2, 0x20
    ctx->r4 = ADD32(ctx->r18, 0X20);
L_00413C2C:
    // 0x00413C2C: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x00413C30: lw          $t1, 0x4($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X4);
    // 0x00413C34: lw          $t2, 0x8($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X8);
    // 0x00413C38: lw          $t3, 0xC($v0)
    ctx->r11 = MEM_W(ctx->r2, 0XC);
    // 0x00413C3C: sw          $t0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r8;
    // 0x00413C40: sw          $t1, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r9;
    // 0x00413C44: sw          $t2, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r10;
    // 0x00413C48: sw          $t3, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r11;
    // 0x00413C4C: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
    // 0x00413C50: bne         $v0, $a0, L_00413C2C
    if (ctx->r2 != ctx->r4) {
        // 0x00413C54: addiu       $v1, $v1, 0x10
        ctx->r3 = ADD32(ctx->r3, 0X10);
            goto L_00413C2C;
    }
    // 0x00413C54: addiu       $v1, $v1, 0x10
    ctx->r3 = ADD32(ctx->r3, 0X10);
    // 0x00413C58: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x00413C5C: sw          $t0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r8;
    // 0x00413C60: addiu       $v1, $sp, 0x10
    ctx->r3 = ADD32(ctx->r29, 0X10);
    // 0x00413C64: addu        $v0, $s3, $zero
    ctx->r2 = ADD32(ctx->r19, 0);
    // 0x00413C68: addiu       $a0, $s3, 0x20
    ctx->r4 = ADD32(ctx->r19, 0X20);
L_00413C6C:
    // 0x00413C6C: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x00413C70: lw          $t1, 0x4($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X4);
    // 0x00413C74: lw          $t2, 0x8($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X8);
    // 0x00413C78: lw          $t3, 0xC($v0)
    ctx->r11 = MEM_W(ctx->r2, 0XC);
    // 0x00413C7C: sw          $t0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r8;
    // 0x00413C80: sw          $t1, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r9;
    // 0x00413C84: sw          $t2, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r10;
    // 0x00413C88: sw          $t3, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r11;
    // 0x00413C8C: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
    // 0x00413C90: bne         $v0, $a0, L_00413C6C
    if (ctx->r2 != ctx->r4) {
        // 0x00413C94: addiu       $v1, $v1, 0x10
        ctx->r3 = ADD32(ctx->r3, 0X10);
            goto L_00413C6C;
    }
    // 0x00413C94: addiu       $v1, $v1, 0x10
    ctx->r3 = ADD32(ctx->r3, 0X10);
    // 0x00413C98: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x00413C9C: addiu       $a1, $sp, 0x60
    ctx->r5 = ADD32(ctx->r29, 0X60);
    // 0x00413CA0: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x00413CA4: lw          $t1, 0x4($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X4);
    // 0x00413CA8: sw          $t0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r8;
    // 0x00413CAC: sw          $t1, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r9;
    // 0x00413CB0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00413CB4: sh          $v0, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r2;
    // 0x00413CB8: jal         0x0041363C
    // 0x00413CBC: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    func_0041363C(rdram, ctx);
        goto after_6;
    // 0x00413CBC: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    after_6:
    // 0x00413CC0: addiu       $v1, $sp, 0x88
    ctx->r3 = ADD32(ctx->r29, 0X88);
    // 0x00413CC4: addu        $v0, $s2, $zero
    ctx->r2 = ADD32(ctx->r18, 0);
    // 0x00413CC8: addiu       $a0, $s2, 0x20
    ctx->r4 = ADD32(ctx->r18, 0X20);
L_00413CCC:
    // 0x00413CCC: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x00413CD0: lw          $t1, 0x4($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X4);
    // 0x00413CD4: lw          $t2, 0x8($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X8);
    // 0x00413CD8: lw          $t3, 0xC($v0)
    ctx->r11 = MEM_W(ctx->r2, 0XC);
    // 0x00413CDC: sw          $t0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r8;
    // 0x00413CE0: sw          $t1, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r9;
    // 0x00413CE4: sw          $t2, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r10;
    // 0x00413CE8: sw          $t3, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r11;
    // 0x00413CEC: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
    // 0x00413CF0: bne         $v0, $a0, L_00413CCC
    if (ctx->r2 != ctx->r4) {
        // 0x00413CF4: addiu       $v1, $v1, 0x10
        ctx->r3 = ADD32(ctx->r3, 0X10);
            goto L_00413CCC;
    }
    // 0x00413CF4: addiu       $v1, $v1, 0x10
    ctx->r3 = ADD32(ctx->r3, 0X10);
    // 0x00413CF8: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x00413CFC: sw          $t0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r8;
    // 0x00413D00: addiu       $v1, $sp, 0x10
    ctx->r3 = ADD32(ctx->r29, 0X10);
    // 0x00413D04: addu        $v0, $s3, $zero
    ctx->r2 = ADD32(ctx->r19, 0);
    // 0x00413D08: addiu       $a0, $s3, 0x20
    ctx->r4 = ADD32(ctx->r19, 0X20);
L_00413D0C:
    // 0x00413D0C: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x00413D10: lw          $t1, 0x4($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X4);
    // 0x00413D14: lw          $t2, 0x8($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X8);
    // 0x00413D18: lw          $t3, 0xC($v0)
    ctx->r11 = MEM_W(ctx->r2, 0XC);
    // 0x00413D1C: sw          $t0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r8;
    // 0x00413D20: sw          $t1, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r9;
    // 0x00413D24: sw          $t2, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r10;
    // 0x00413D28: sw          $t3, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r11;
    // 0x00413D2C: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
    // 0x00413D30: bne         $v0, $a0, L_00413D0C
    if (ctx->r2 != ctx->r4) {
        // 0x00413D34: addiu       $v1, $v1, 0x10
        ctx->r3 = ADD32(ctx->r3, 0X10);
            goto L_00413D0C;
    }
    // 0x00413D34: addiu       $v1, $v1, 0x10
    ctx->r3 = ADD32(ctx->r3, 0X10);
    // 0x00413D38: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x00413D3C: addiu       $a1, $sp, 0x88
    ctx->r5 = ADD32(ctx->r29, 0X88);
    // 0x00413D40: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x00413D44: lw          $t1, 0x4($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X4);
    // 0x00413D48: sw          $t0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r8;
    // 0x00413D4C: sw          $t1, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r9;
    // 0x00413D50: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00413D54: sh          $v0, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r2;
    // 0x00413D58: jal         0x0041363C
    // 0x00413D5C: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    func_0041363C(rdram, ctx);
        goto after_7;
    // 0x00413D5C: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    after_7:
    // 0x00413D60: lw          $v1, 0x64($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X64);
    // 0x00413D64: lw          $v0, 0x8C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X8C);
    // 0x00413D68: lw          $a0, 0x3C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X3C);
    // 0x00413D6C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x00413D70: slt         $v0, $v1, $a0
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x00413D74: bnel        $v0, $zero, L_00413D7C
    if (ctx->r2 != 0) {
        // 0x00413D78: addu        $v1, $a0, $zero
        ctx->r3 = ADD32(ctx->r4, 0);
            goto L_00413D7C;
    }
    goto skip_1;
    // 0x00413D78: addu        $v1, $a0, $zero
    ctx->r3 = ADD32(ctx->r4, 0);
    skip_1:
L_00413D7C:
    // 0x00413D7C: sw          $v1, 0x4($s2)
    MEM_W(0X4, ctx->r18) = ctx->r3;
    // 0x00413D80: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x00413D84: lw          $v1, 0x68($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X68);
    // 0x00413D88: lw          $v0, 0x90($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X90);
    // 0x00413D8C: addu        $a0, $a0, $v1
    ctx->r4 = ADD32(ctx->r4, ctx->r3);
    // 0x00413D90: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x00413D94: srl         $v1, $v0, 31
    ctx->r3 = S32(U32(ctx->r2) >> 31);
    // 0x00413D98: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x00413D9C: sra         $v0, $v0, 1
    ctx->r2 = S32(SIGNED(ctx->r2) >> 1);
    // 0x00413DA0: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x00413DA4: j           L_00413E14
    // 0x00413DA8: sw          $a0, 0x8($s2)
    MEM_W(0X8, ctx->r18) = ctx->r4;
        goto L_00413E14;
    // 0x00413DA8: sw          $a0, 0x8($s2)
    MEM_W(0X8, ctx->r18) = ctx->r4;
    // 0x00413DAC: lw          $v0, 0x14($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X14);
    // 0x00413DB0: lwc1        $f1, 0x288($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X288);
    // 0x00413DB4: lwc1        $f0, 0x24($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X24);
    // 0x00413DB8: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00413DBC: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00413DC0: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00413DC4: lwc1        $f1, 0x2030($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X2030);
    // 0x00413DC8: cvt.s.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.fl = CVT_S_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x00413DCC: div.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = DIV_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00413DD0: trunc.w.s   $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x00413DD4: swc1        $f4, 0x4($s2)
    MEM_W(0X4, ctx->r18) = ctx->f4.u32l;
    // 0x00413DD8: lwc1        $f1, 0x28C($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X28C);
    // 0x00413DDC: lwc1        $f0, 0x28($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X28);
    // 0x00413DE0: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00413DE4: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00413DE8: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00413DEC: lwc1        $f1, 0x2034($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X2034);
    // 0x00413DF0: cvt.s.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.fl = CVT_S_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x00413DF4: div.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = DIV_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00413DF8: trunc.w.s   $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x00413DFC: swc1        $f4, 0x8($s2)
    MEM_W(0X8, ctx->r18) = ctx->f4.u32l;
    // 0x00413E00: j           L_00413E14
    // 0x00413E04: nop

        goto L_00413E14;
    // 0x00413E04: nop

    // 0x00413E08: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00413E0C: sw          $v0, 0x4($s2)
    MEM_W(0X4, ctx->r18) = ctx->r2;
L_00413E10:
    // 0x00413E10: sw          $v0, 0x8($s2)
    MEM_W(0X8, ctx->r18) = ctx->r2;
L_00413E14:
    // 0x00413E14: lh          $v0, 0xC($s3)
    ctx->r2 = MEM_H(ctx->r19, 0XC);
    // 0x00413E18: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x00413E1C: lw          $v1, 0x2030($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X2030);
    // 0x00413E20: mult        $v0, $v1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x00413E24: mflo        $v0
    ctx->r2 = lo;
    // 0x00413E28: lui         $v1, 0xE6C2
    ctx->r3 = S32(0XE6C2 << 16);
    // 0x00413E2C: ori         $v1, $v1, 0xB449
    ctx->r3 = ctx->r3 | 0XB449;
    // 0x00413E30: mult        $v0, $v1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x00413E34: lw          $a0, 0x8($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X8);
    // 0x00413E38: mfhi        $v1
    ctx->r3 = hi;
    // 0x00413E3C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x00413E40: sra         $v1, $v1, 8
    ctx->r3 = S32(SIGNED(ctx->r3) >> 8);
    // 0x00413E44: sra         $v0, $v0, 31
    ctx->r2 = S32(SIGNED(ctx->r2) >> 31);
    // 0x00413E48: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x00413E4C: mtc1        $v1, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r3;
    // 0x00413E50: cvt.s.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.fl = CVT_S_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x00413E54: andi        $v0, $a0, 0x8000
    ctx->r2 = ctx->r4 & 0X8000;
    // 0x00413E58: bne         $v0, $zero, L_00413E8C
    if (ctx->r2 != 0) {
        // 0x00413E5C: andi        $v0, $a0, 0x4000
        ctx->r2 = ctx->r4 & 0X4000;
            goto L_00413E8C;
    }
    // 0x00413E5C: andi        $v0, $a0, 0x4000
    ctx->r2 = ctx->r4 & 0X4000;
    // 0x00413E60: beq         $v0, $zero, L_00413E84
    if (ctx->r2 == 0) {
        // 0x00413E64: nop
    
            goto L_00413E84;
    }
    // 0x00413E64: nop

    // 0x00413E68: lwc1        $f0, 0x18($s2)
    ctx->f0.u32l = MEM_W(ctx->r18, 0X18);
    // 0x00413E6C: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00413E70: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x00413E74: trunc.w.s   $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x00413E78: swc1        $f4, 0x14($s2)
    MEM_W(0X14, ctx->r18) = ctx->f4.u32l;
    // 0x00413E7C: j           L_00413E8C
    // 0x00413E80: nop

        goto L_00413E8C;
    // 0x00413E80: nop

L_00413E84:
    // 0x00413E84: trunc.w.s   $f4, $f1
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 1);
    ctx->f4.u32l = TRUNC_W_S(ctx->f1.fl);
    // 0x00413E88: swc1        $f4, 0x14($s2)
    MEM_W(0X14, ctx->r18) = ctx->f4.u32l;
L_00413E8C:
    // 0x00413E8C: lwc1        $f0, 0xC($s2)
    ctx->f0.u32l = MEM_W(ctx->r18, 0XC);
    // 0x00413E90: lwc1        $f1, 0x4($s2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r18, 0X4);
    // 0x00413E94: cvt.s.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.fl = CVT_S_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x00413E98: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x00413E9C: lwc1        $f0, 0x14($s2)
    ctx->f0.u32l = MEM_W(ctx->r18, 0X14);
    // 0x00413EA0: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00413EA4: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x00413EA8: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x00413EAC: lw          $v0, 0x2034($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2034);
    // 0x00413EB0: trunc.w.s   $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x00413EB4: swc1        $f4, 0x18($s2)
    MEM_W(0X18, ctx->r18) = ctx->f4.u32l;
    // 0x00413EB8: lh          $v1, 0xE($s3)
    ctx->r3 = MEM_H(ctx->r19, 0XE);
    // 0x00413EBC: mult        $v1, $v0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x00413EC0: mflo        $v1
    ctx->r3 = lo;
    // 0x00413EC4: lui         $v0, 0x939A
    ctx->r2 = S32(0X939A << 16);
    // 0x00413EC8: ori         $v0, $v0, 0x85C5
    ctx->r2 = ctx->r2 | 0X85C5;
    // 0x00413ECC: mult        $v1, $v0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x00413ED0: lw          $a0, 0x8($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X8);
    // 0x00413ED4: mfhi        $t4
    ctx->r12 = hi;
    // 0x00413ED8: addu        $v0, $t4, $v1
    ctx->r2 = ADD32(ctx->r12, ctx->r3);
    // 0x00413EDC: sra         $v0, $v0, 7
    ctx->r2 = S32(SIGNED(ctx->r2) >> 7);
    // 0x00413EE0: sra         $v1, $v1, 31
    ctx->r3 = S32(SIGNED(ctx->r3) >> 31);
    // 0x00413EE4: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x00413EE8: mtc1        $v0, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r2;
    // 0x00413EEC: cvt.s.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.fl = CVT_S_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x00413EF0: lui         $v0, 0x2
    ctx->r2 = S32(0X2 << 16);
    // 0x00413EF4: and         $v0, $a0, $v0
    ctx->r2 = ctx->r4 & ctx->r2;
    // 0x00413EF8: bne         $v0, $zero, L_00413F30
    if (ctx->r2 != 0) {
        // 0x00413EFC: lui         $v0, 0x1
        ctx->r2 = S32(0X1 << 16);
            goto L_00413F30;
    }
    // 0x00413EFC: lui         $v0, 0x1
    ctx->r2 = S32(0X1 << 16);
    // 0x00413F00: and         $v0, $a0, $v0
    ctx->r2 = ctx->r4 & ctx->r2;
    // 0x00413F04: beq         $v0, $zero, L_00413F28
    if (ctx->r2 == 0) {
        // 0x00413F08: nop
    
            goto L_00413F28;
    }
    // 0x00413F08: nop

    // 0x00413F0C: lwc1        $f0, 0x20($s2)
    ctx->f0.u32l = MEM_W(ctx->r18, 0X20);
    // 0x00413F10: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00413F14: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x00413F18: trunc.w.s   $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x00413F1C: swc1        $f4, 0x1C($s2)
    MEM_W(0X1C, ctx->r18) = ctx->f4.u32l;
    // 0x00413F20: j           L_00413F30
    // 0x00413F24: nop

        goto L_00413F30;
    // 0x00413F24: nop

L_00413F28:
    // 0x00413F28: trunc.w.s   $f4, $f1
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 1);
    ctx->f4.u32l = TRUNC_W_S(ctx->f1.fl);
    // 0x00413F2C: swc1        $f4, 0x1C($s2)
    MEM_W(0X1C, ctx->r18) = ctx->f4.u32l;
L_00413F30:
    // 0x00413F30: lwc1        $f0, 0x10($s2)
    ctx->f0.u32l = MEM_W(ctx->r18, 0X10);
    // 0x00413F34: lwc1        $f1, 0x8($s2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r18, 0X8);
    // 0x00413F38: cvt.s.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.fl = CVT_S_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x00413F3C: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x00413F40: lwc1        $f0, 0x1C($s2)
    ctx->f0.u32l = MEM_W(ctx->r18, 0X1C);
    // 0x00413F44: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00413F48: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x00413F4C: trunc.w.s   $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x00413F50: swc1        $f4, 0x20($s2)
    MEM_W(0X20, ctx->r18) = ctx->f4.u32l;
    // 0x00413F54: lw          $ra, 0xC0($sp)
    ctx->r31 = MEM_W(ctx->r29, 0XC0);
    // 0x00413F58: lw          $s3, 0xBC($sp)
    ctx->r19 = MEM_W(ctx->r29, 0XBC);
    // 0x00413F5C: lw          $s2, 0xB8($sp)
    ctx->r18 = MEM_W(ctx->r29, 0XB8);
    // 0x00413F60: lw          $s1, 0xB4($sp)
    ctx->r17 = MEM_W(ctx->r29, 0XB4);
    // 0x00413F64: lw          $s0, 0xB0($sp)
    ctx->r16 = MEM_W(ctx->r29, 0XB0);
    // 0x00413F68: ldc1        $f20, 0xC8($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0XC8);
    // 0x00413F6C: jr          $ra
    // 0x00413F70: addiu       $sp, $sp, 0xD0
    ctx->r29 = ADD32(ctx->r29, 0XD0);
    return;
    // 0x00413F70: addiu       $sp, $sp, 0xD0
    ctx->r29 = ADD32(ctx->r29, 0XD0);
;}
RECOMP_FUNC void entry_00413780(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00413780: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
    // 0x00413784: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x00413788: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x0041378C: addiu       $v1, $v1, 0x1BD4
    ctx->r3 = ADD32(ctx->r3, 0X1BD4);
    // 0x00413790: addu        $s1, $v0, $v1
    ctx->r17 = ADD32(ctx->r2, ctx->r3);
    // 0x00413794: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x00413798: bne         $v0, $zero, L_004137E8
    if (ctx->r2 != 0) {
        // 0x0041379C: addiu       $v0, $zero, 0x5
        ctx->r2 = ADD32(0, 0X5);
            goto L_004137E8;
    }
    // 0x0041379C: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x004137A0: lwc1        $f20, 0x4($s1)
    ctx->f20.u32l = MEM_W(ctx->r17, 0X4);
    // 0x004137A4: cvt.s.w     $f20, $f20
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    ctx->f20.fl = CVT_S_W(ctx->f20.u32l);
    // 0x004137A8: lh          $v1, 0x4($s3)
    ctx->r3 = MEM_H(ctx->r19, 0X4);
    // 0x004137AC: bne         $v1, $v0, L_004137C4
    if (ctx->r3 != ctx->r2) {
        // 0x004137B0: nop
    
            goto L_004137C4;
    }
    // 0x004137B0: nop

    // 0x004137B4: jal         0x00413230
    // 0x004137B8: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    func_00413230(rdram, ctx);
        goto after_0;
    // 0x004137B8: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    after_0:
    // 0x004137BC: j           L_004137C8
    // 0x004137C0: nop

        goto L_004137C8;
    // 0x004137C0: nop

L_004137C4:
    // 0x004137C4: lw          $v0, 0x14($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X14);
L_004137C8:
    // 0x004137C8: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x004137CC: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x004137D0: jal         0x004163C0
    // 0x004137D4: addu        $a2, $a1, $zero
    ctx->r6 = ADD32(ctx->r5, 0);
    func_004163C0(rdram, ctx);
        goto after_1;
    // 0x004137D4: addu        $a2, $a1, $zero
    ctx->r6 = ADD32(ctx->r5, 0);
    after_1:
    // 0x004137D8: trunc.w.s   $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x004137DC: swc1        $f4, 0x4($s2)
    MEM_W(0X4, ctx->r18) = ctx->f4.u32l;
    // 0x004137E0: j           L_0041384C
    // 0x004137E4: nop

        goto L_0041384C;
    // 0x004137E4: nop

L_004137E8:
    // 0x004137E8: lh          $v1, 0x4($s3)
    ctx->r3 = MEM_H(ctx->r19, 0X4);
    // 0x004137EC: bne         $v1, $v0, L_00413804
    if (ctx->r3 != ctx->r2) {
        // 0x004137F0: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_00413804;
    }
    // 0x004137F0: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x004137F4: jal         0x00413230
    // 0x004137F8: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    func_00413230(rdram, ctx);
        goto after_2;
    // 0x004137F8: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    after_2:
    // 0x004137FC: j           L_00413808
    // 0x00413800: nop

        goto L_00413808;
    // 0x00413800: nop

L_00413804:
    // 0x00413804: lw          $v0, 0x14($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X14);
L_00413808:
    // 0x00413808: beq         $v0, $zero, L_0041383C
    if (ctx->r2 == 0) {
        // 0x0041380C: nop
    
            goto L_0041383C;
    }
    // 0x0041380C: nop

    // 0x00413810: lbu         $v1, 0x0($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X0);
    // 0x00413814: beq         $v1, $zero, L_0041383C
    if (ctx->r3 == 0) {
        // 0x00413818: nop
    
            goto L_0041383C;
    }
    // 0x00413818: nop

    // 0x0041381C: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
L_00413820:
    // 0x00413820: beq         $v1, $a0, L_0041383C
    if (ctx->r3 == ctx->r4) {
        // 0x00413824: addiu       $v0, $v0, 0x1
        ctx->r2 = ADD32(ctx->r2, 0X1);
            goto L_0041383C;
    }
    // 0x00413824: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x00413828: beq         $v0, $zero, L_0041383C
    if (ctx->r2 == 0) {
        // 0x0041382C: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_0041383C;
    }
    // 0x0041382C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x00413830: lbu         $v1, 0x0($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X0);
    // 0x00413834: bne         $v1, $zero, L_00413820
    if (ctx->r3 != 0) {
        // 0x00413838: nop
    
            goto L_00413820;
    }
    // 0x00413838: nop

L_0041383C:
    // 0x0041383C: lw          $v0, 0x4($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X4);
    // 0x00413840: mult        $s0, $v0
    result = S64(S32(ctx->r16)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x00413844: mflo        $t0
    ctx->r8 = lo;
    // 0x00413848: sw          $t0, 0x4($s2)
    MEM_W(0X4, ctx->r18) = ctx->r8;
L_0041384C:
    // 0x0041384C: lw          $v0, 0x8($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X8);
    // 0x00413850: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x00413854: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x00413858: beq         $v0, $zero, L_00413888
    if (ctx->r2 == 0) {
        // 0x0041385C: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_00413888;
    }
    // 0x0041385C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x00413860: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00413864: lwc1        $f1, 0xBB8($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0XBB8);
    // 0x00413868: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0041386C: lwc1        $f0, 0x2034($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X2034);
    // 0x00413870: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00413874: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00413878: trunc.w.s   $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x0041387C: swc1        $f4, 0x8($s2)
    MEM_W(0X8, ctx->r18) = ctx->f4.u32l;
    // 0x00413880: j           L_0041391C
    // 0x00413884: nop

        goto L_0041391C;
    // 0x00413884: nop

L_00413888:
    // 0x00413888: lw          $v1, 0x0($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X0);
    // 0x0041388C: bne         $v1, $v0, L_004138E4
    if (ctx->r3 != ctx->r2) {
        // 0x00413890: nop
    
            goto L_004138E4;
    }
    // 0x00413890: nop

    // 0x00413894: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x00413898: lw          $v1, 0x2034($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X2034);
    // 0x0041389C: slti        $v0, $v1, 0xDF
    ctx->r2 = SIGNED(ctx->r3) < 0XDF ? 1 : 0;
    // 0x004138A0: bne         $v0, $zero, L_004138E4
    if (ctx->r2 != 0) {
        // 0x004138A4: nop
    
            goto L_004138E4;
    }
    // 0x004138A4: nop

    // 0x004138A8: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x004138AC: lwc1        $f1, 0xBBC($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0XBBC);
    // 0x004138B0: lwc1        $f0, 0x8($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X8);
    // 0x004138B4: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x004138B8: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x004138BC: mtc1        $v1, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r3;
    // 0x004138C0: cvt.s.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.fl = CVT_S_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x004138C4: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x004138C8: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x004138CC: lwc1        $f1, 0xBC0($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0XBC0);
    // 0x004138D0: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x004138D4: trunc.w.s   $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x004138D8: swc1        $f4, 0x8($s2)
    MEM_W(0X8, ctx->r18) = ctx->f4.u32l;
    // 0x004138DC: j           L_0041391C
    // 0x004138E0: nop

        goto L_0041391C;
    // 0x004138E0: nop

L_004138E4:
    // 0x004138E4: lw          $v1, 0x8($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X8);
    // 0x004138E8: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x004138EC: lw          $v0, 0x2034($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2034);
    // 0x004138F0: mult        $v1, $v0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x004138F4: mflo        $v1
    ctx->r3 = lo;
    // 0x004138F8: lui         $v0, 0x939A
    ctx->r2 = S32(0X939A << 16);
    // 0x004138FC: ori         $v0, $v0, 0x85C5
    ctx->r2 = ctx->r2 | 0X85C5;
    // 0x00413900: mult        $v1, $v0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x00413904: mfhi        $t4
    ctx->r12 = hi;
    // 0x00413908: addu        $v0, $t4, $v1
    ctx->r2 = ADD32(ctx->r12, ctx->r3);
    // 0x0041390C: sra         $v0, $v0, 7
    ctx->r2 = S32(SIGNED(ctx->r2) >> 7);
    // 0x00413910: sra         $v1, $v1, 31
    ctx->r3 = S32(SIGNED(ctx->r3) >> 31);
    // 0x00413914: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x00413918: sw          $v0, 0x8($s2)
    MEM_W(0X8, ctx->r18) = ctx->r2;
L_0041391C:
    // 0x0041391C: lw          $v1, 0x4($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X4);
    // 0x00413920: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x00413924: lw          $v0, 0x2030($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2030);
    // 0x00413928: mult        $v1, $v0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x0041392C: mflo        $v1
    ctx->r3 = lo;
    // 0x00413930: lui         $v0, 0xE6C2
    ctx->r2 = S32(0XE6C2 << 16);
    // 0x00413934: ori         $v0, $v0, 0xB449
    ctx->r2 = ctx->r2 | 0XB449;
    // 0x00413938: mult        $v1, $v0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x0041393C: mfhi        $t4
    ctx->r12 = hi;
    // 0x00413940: addu        $v0, $t4, $v1
    ctx->r2 = ADD32(ctx->r12, ctx->r3);
    // 0x00413944: sra         $v0, $v0, 8
    ctx->r2 = S32(SIGNED(ctx->r2) >> 8);
    // 0x00413948: sra         $v1, $v1, 31
    ctx->r3 = S32(SIGNED(ctx->r3) >> 31);
    // 0x0041394C: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x00413950: j           L_00413E14
    // 0x00413954: sw          $v0, 0x4($s2)
    MEM_W(0X4, ctx->r18) = ctx->r2;
        goto L_00413E14;
    // 0x00413954: sw          $v0, 0x4($s2)
    MEM_W(0X4, ctx->r18) = ctx->r2;
    // 0x00413958: lw          $v0, 0x8($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X8);
    // 0x0041395C: andi        $v1, $v0, 0x3FE0
    ctx->r3 = ctx->r2 & 0X3FE0;
    // 0x00413960: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x00413964: beq         $v1, $v0, L_00413A0C
    if (ctx->r3 == ctx->r2) {
        // 0x00413968: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_00413A0C;
    }
    // 0x00413968: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0041396C: sltiu       $v0, $v1, 0x201
    ctx->r2 = ctx->r3 < 0X201 ? 1 : 0;
    // 0x00413970: beq         $v0, $zero, L_004139BC
    if (ctx->r2 == 0) {
        // 0x00413974: addiu       $v0, $zero, 0x40
        ctx->r2 = ADD32(0, 0X40);
            goto L_004139BC;
    }
    // 0x00413974: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x00413978: beql        $v1, $v0, L_00413A20
    if (ctx->r3 == ctx->r2) {
        // 0x0041397C: addiu       $a0, $zero, 0x1
        ctx->r4 = ADD32(0, 0X1);
            goto L_00413A20;
    }
    goto skip_0;
    // 0x0041397C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    skip_0:
    // 0x00413980: sltiu       $v0, $v1, 0x41
    ctx->r2 = ctx->r3 < 0X41 ? 1 : 0;
    // 0x00413984: beq         $v0, $zero, L_0041399C
    if (ctx->r2 == 0) {
        // 0x00413988: addiu       $v0, $zero, 0x20
        ctx->r2 = ADD32(0, 0X20);
            goto L_0041399C;
    }
    // 0x00413988: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x0041398C: beq         $v1, $v0, L_00413A24
    if (ctx->r3 == ctx->r2) {
        // 0x00413990: sll         $v0, $a0, 3
        ctx->r2 = S32(ctx->r4 << 3);
            goto L_00413A24;
    }
    // 0x00413990: sll         $v0, $a0, 3
    ctx->r2 = S32(ctx->r4 << 3);
    // 0x00413994: j           L_00413A28
    // 0x00413998: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
        goto L_00413A28;
    // 0x00413998: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
L_0041399C:
    // 0x0041399C: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x004139A0: beq         $v1, $v0, L_00413A20
    if (ctx->r3 == ctx->r2) {
        // 0x004139A4: addiu       $a0, $zero, 0x2
        ctx->r4 = ADD32(0, 0X2);
            goto L_00413A20;
    }
    // 0x004139A4: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x004139A8: addiu       $v0, $zero, 0x100
    ctx->r2 = ADD32(0, 0X100);
    // 0x004139AC: beq         $v1, $v0, L_00413A04
    if (ctx->r3 == ctx->r2) {
        // 0x004139B0: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_00413A04;
    }
    // 0x004139B0: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x004139B4: j           L_00413A24
    // 0x004139B8: sll         $v0, $a0, 3
    ctx->r2 = S32(ctx->r4 << 3);
        goto L_00413A24;
    // 0x004139B8: sll         $v0, $a0, 3
    ctx->r2 = S32(ctx->r4 << 3);
L_004139BC:
    // 0x004139BC: addiu       $v0, $zero, 0x800
    ctx->r2 = ADD32(0, 0X800);
    // 0x004139C0: beq         $v1, $v0, L_00413A20
    if (ctx->r3 == ctx->r2) {
        // 0x004139C4: addiu       $a0, $zero, 0x6
        ctx->r4 = ADD32(0, 0X6);
            goto L_00413A20;
    }
    // 0x004139C4: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    // 0x004139C8: sltiu       $v0, $v1, 0x801
    ctx->r2 = ctx->r3 < 0X801 ? 1 : 0;
    // 0x004139CC: beq         $v0, $zero, L_004139E4
    if (ctx->r2 == 0) {
        // 0x004139D0: addiu       $v0, $zero, 0x400
        ctx->r2 = ADD32(0, 0X400);
            goto L_004139E4;
    }
    // 0x004139D0: addiu       $v0, $zero, 0x400
    ctx->r2 = ADD32(0, 0X400);
    // 0x004139D4: beq         $v1, $v0, L_00413A14
    if (ctx->r3 == ctx->r2) {
        // 0x004139D8: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_00413A14;
    }
    // 0x004139D8: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x004139DC: j           L_00413A24
    // 0x004139E0: sll         $v0, $a0, 3
    ctx->r2 = S32(ctx->r4 << 3);
        goto L_00413A24;
    // 0x004139E0: sll         $v0, $a0, 3
    ctx->r2 = S32(ctx->r4 << 3);
L_004139E4:
    // 0x004139E4: addiu       $v0, $zero, 0x1000
    ctx->r2 = ADD32(0, 0X1000);
    // 0x004139E8: beq         $v1, $v0, L_00413A20
    if (ctx->r3 == ctx->r2) {
        // 0x004139EC: addiu       $a0, $zero, 0x7
        ctx->r4 = ADD32(0, 0X7);
            goto L_00413A20;
    }
    // 0x004139EC: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    // 0x004139F0: addiu       $v0, $zero, 0x2000
    ctx->r2 = ADD32(0, 0X2000);
    // 0x004139F4: beq         $v1, $v0, L_00413A1C
    if (ctx->r3 == ctx->r2) {
        // 0x004139F8: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_00413A1C;
    }
    // 0x004139F8: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x004139FC: j           L_00413A24
    // 0x00413A00: sll         $v0, $a0, 3
    ctx->r2 = S32(ctx->r4 << 3);
        goto L_00413A24;
    // 0x00413A00: sll         $v0, $a0, 3
    ctx->r2 = S32(ctx->r4 << 3);
L_00413A04:
    // 0x00413A04: j           L_00413A20
    // 0x00413A08: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
        goto L_00413A20;
    // 0x00413A08: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
L_00413A0C:
    // 0x00413A0C: j           L_00413A20
    // 0x00413A10: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
        goto L_00413A20;
    // 0x00413A10: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
L_00413A14:
    // 0x00413A14: j           L_00413A20
    // 0x00413A18: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
        goto L_00413A20;
    // 0x00413A18: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
L_00413A1C:
    // 0x00413A1C: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
L_00413A20:
    // 0x00413A20: sll         $v0, $a0, 3
    ctx->r2 = S32(ctx->r4 << 3);
L_00413A24:
    // 0x00413A24: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
L_00413A28:
    // 0x00413A28: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x00413A2C: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x00413A30: addiu       $v1, $v1, 0x1BD4
    ctx->r3 = ADD32(ctx->r3, 0X1BD4);
    // 0x00413A34: addu        $s1, $v0, $v1
    ctx->r17 = ADD32(ctx->r2, ctx->r3);
    // 0x00413A38: lw          $v0, 0x4($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X4);
    // 0x00413A3C: sw          $v0, 0x4($s2)
    MEM_W(0X4, ctx->r18) = ctx->r2;
    // 0x00413A40: lw          $v1, 0x8($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X8);
    // 0x00413A44: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x00413A48: lw          $v0, 0x2034($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2034);
    // 0x00413A4C: mult        $v1, $v0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x00413A50: mflo        $v1
    ctx->r3 = lo;
    // 0x00413A54: lui         $v0, 0x939A
    ctx->r2 = S32(0X939A << 16);
    // 0x00413A58: ori         $v0, $v0, 0x85C5
    ctx->r2 = ctx->r2 | 0X85C5;
    // 0x00413A5C: mult        $v1, $v0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x00413A60: mfhi        $t4
    ctx->r12 = hi;
    // 0x00413A64: addu        $v0, $t4, $v1
    ctx->r2 = ADD32(ctx->r12, ctx->r3);
    // 0x00413A68: sra         $v0, $v0, 7
    ctx->r2 = S32(SIGNED(ctx->r2) >> 7);
    // 0x00413A6C: sra         $v1, $v1, 31
    ctx->r3 = S32(SIGNED(ctx->r3) >> 31);
    // 0x00413A70: j           L_00413E10
    // 0x00413A74: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
        goto L_00413E10;
    // 0x00413A74: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x00413A78: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x00413A7C: addiu       $a0, $a0, -0x5378
    ctx->r4 = ADD32(ctx->r4, -0X5378);
    // 0x00413A80: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x00413A84: addiu       $v0, $zero, 0xD
    ctx->r2 = ADD32(0, 0XD);
    // 0x00413A88: bne         $v1, $v0, L_00413AA0
    if (ctx->r3 != ctx->r2) {
        // 0x00413A8C: lui         $v1, 0x4000
        ctx->r3 = S32(0X4000 << 16);
            goto L_00413AA0;
    }
    // 0x00413A8C: lui         $v1, 0x4000
    ctx->r3 = S32(0X4000 << 16);
    // 0x00413A90: lw          $v0, 0x8($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X8);
    // 0x00413A94: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x00413A98: bne         $v0, $zero, L_00413ACC
    if (ctx->r2 != 0) {
        // 0x00413A9C: addiu       $v0, $zero, 0x11C
        ctx->r2 = ADD32(0, 0X11C);
            goto L_00413ACC;
    }
    // 0x00413A9C: addiu       $v0, $zero, 0x11C
    ctx->r2 = ADD32(0, 0X11C);
L_00413AA0:
    // 0x00413AA0: lbu         $v0, -0x197($a0)
    ctx->r2 = MEM_BU(ctx->r4, -0X197);
    // 0x00413AA4: beq         $v0, $zero, L_00413ADC
    if (ctx->r2 == 0) {
        // 0x00413AA8: nop
    
            goto L_00413ADC;
    }
    // 0x00413AA8: nop

    // 0x00413AAC: lw          $v0, 0x8($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X8);
    // 0x00413AB0: bgez        $v0, L_00413ADC
    if (SIGNED(ctx->r2) >= 0) {
        // 0x00413AB4: nop
    
            goto L_00413ADC;
    }
    // 0x00413AB4: nop

    // 0x00413AB8: jal         0x00266B80
    // 0x00413ABC: nop

    func_00266B80(rdram, ctx);
        goto after_3;
    // 0x00413ABC: nop

    after_3:
    // 0x00413AC0: lui         $v1, 0x40
    ctx->r3 = S32(0X40 << 16);
    // 0x00413AC4: bne         $v0, $v1, L_00413ADC
    if (ctx->r2 != ctx->r3) {
        // 0x00413AC8: addiu       $v0, $zero, 0x11C
        ctx->r2 = ADD32(0, 0X11C);
            goto L_00413ADC;
    }
    // 0x00413AC8: addiu       $v0, $zero, 0x11C
    ctx->r2 = ADD32(0, 0X11C);
L_00413ACC:
    // 0x00413ACC: sw          $v0, 0x4($s2)
    MEM_W(0X4, ctx->r18) = ctx->r2;
    // 0x00413AD0: addiu       $v0, $zero, 0xDE
    ctx->r2 = ADD32(0, 0XDE);
    // 0x00413AD4: j           L_00413AF0
    // 0x00413AD8: sw          $v0, 0x8($s2)
    MEM_W(0X8, ctx->r18) = ctx->r2;
        goto L_00413AF0;
    // 0x00413AD8: sw          $v0, 0x8($s2)
    MEM_W(0X8, ctx->r18) = ctx->r2;
L_00413ADC:
    // 0x00413ADC: lw          $a0, 0x14($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X14);
    // 0x00413AE0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x00413AE4: addiu       $a2, $s2, 0x4
    ctx->r6 = ADD32(ctx->r18, 0X4);
    // 0x00413AE8: jal         0x0027AEA8
    // 0x00413AEC: addiu       $a3, $s2, 0x8
    ctx->r7 = ADD32(ctx->r18, 0X8);
    func_0027AEA8(rdram, ctx);
        goto after_4;
    // 0x00413AEC: addiu       $a3, $s2, 0x8
    ctx->r7 = ADD32(ctx->r18, 0X8);
    after_4:
L_00413AF0:
    // 0x00413AF0: lw          $v0, 0x8($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X8);
    // 0x00413AF4: lui         $v1, 0x1000
    ctx->r3 = S32(0X1000 << 16);
    // 0x00413AF8: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x00413AFC: beq         $v0, $zero, L_00413B4C
    if (ctx->r2 == 0) {
        // 0x00413B00: nop
    
            goto L_00413B4C;
    }
    // 0x00413B00: nop

    // 0x00413B04: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x00413B08: lwc1        $f3, 0x4($s2)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r18, 0X4);
    // 0x00413B0C: cvt.s.w     $f3, $f3
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    ctx->f3.fl = CVT_S_W(ctx->f_odd[(3 - 1) * 2]);
    // 0x00413B10: c.eq.s      $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f3.fl == ctx->f0.fl;
    // 0x00413B14: nop

    // 0x00413B18: bc1t        L_00413B4C
    if (c1cs) {
        // 0x00413B1C: nop
    
            goto L_00413B4C;
    }
    // 0x00413B1C: nop

    // 0x00413B20: lwc1        $f2, 0x8($s2)
    ctx->f2.u32l = MEM_W(ctx->r18, 0X8);
    // 0x00413B24: cvt.s.w     $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    ctx->f2.fl = CVT_S_W(ctx->f2.u32l);
    // 0x00413B28: c.eq.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl == ctx->f0.fl;
    // 0x00413B2C: nop

    // 0x00413B30: bc1t        L_00413B4C
    if (c1cs) {
        // 0x00413B34: nop
    
            goto L_00413B4C;
    }
    // 0x00413B34: nop

    // 0x00413B38: lwc1        $f0, 0x288($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X288);
    // 0x00413B3C: lwc1        $f1, 0x28C($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X28C);
    // 0x00413B40: div.s       $f3, $f0, $f3
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f3.fl = DIV_S(ctx->f0.fl, ctx->f3.fl);
    // 0x00413B44: j           L_00413B7C
    // 0x00413B48: div.s       $f0, $f1, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = DIV_S(ctx->f1.fl, ctx->f2.fl);
        goto L_00413B7C;
    // 0x00413B48: div.s       $f0, $f1, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = DIV_S(ctx->f1.fl, ctx->f2.fl);
L_00413B4C:
    // 0x00413B4C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00413B50: lwc1        $f1, 0xBC4($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0XBC4);
    // 0x00413B54: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00413B58: lwc1        $f0, 0x2030($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X2030);
    // 0x00413B5C: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00413B60: mul.s       $f3, $f0, $f1
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f3.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00413B64: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00413B68: lwc1        $f1, 0xBC8($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0XBC8);
    // 0x00413B6C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00413B70: lwc1        $f0, 0x2034($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X2034);
    // 0x00413B74: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00413B78: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
L_00413B7C:
    // 0x00413B7C: swc1        $f3, 0xC($s2)
    MEM_W(0XC, ctx->r18) = ctx->f_odd[(3 - 1) * 2];
    // 0x00413B80: j           L_00413E14
    // 0x00413B84: swc1        $f0, 0x10($s2)
    MEM_W(0X10, ctx->r18) = ctx->f0.u32l;
        goto L_00413E14;
    // 0x00413B84: swc1        $f0, 0x10($s2)
    MEM_W(0X10, ctx->r18) = ctx->f0.u32l;
    // 0x00413B88: addiu       $v1, $sp, 0x38
    ctx->r3 = ADD32(ctx->r29, 0X38);
    // 0x00413B8C: addu        $v0, $s2, $zero
    ctx->r2 = ADD32(ctx->r18, 0);
    // 0x00413B90: addiu       $a0, $s2, 0x20
    ctx->r4 = ADD32(ctx->r18, 0X20);
L_00413B94:
    // 0x00413B94: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x00413B98: lw          $t1, 0x4($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X4);
    // 0x00413B9C: lw          $t2, 0x8($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X8);
    // 0x00413BA0: lw          $t3, 0xC($v0)
    ctx->r11 = MEM_W(ctx->r2, 0XC);
    // 0x00413BA4: sw          $t0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r8;
    // 0x00413BA8: sw          $t1, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r9;
    // 0x00413BAC: sw          $t2, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r10;
    // 0x00413BB0: sw          $t3, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r11;
    // 0x00413BB4: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
    // 0x00413BB8: bne         $v0, $a0, L_00413B94
    if (ctx->r2 != ctx->r4) {
        // 0x00413BBC: addiu       $v1, $v1, 0x10
        ctx->r3 = ADD32(ctx->r3, 0X10);
            goto L_00413B94;
    }
    // 0x00413BBC: addiu       $v1, $v1, 0x10
    ctx->r3 = ADD32(ctx->r3, 0X10);
    // 0x00413BC0: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x00413BC4: sw          $t0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r8;
    // 0x00413BC8: addiu       $v1, $sp, 0x10
    ctx->r3 = ADD32(ctx->r29, 0X10);
    // 0x00413BCC: addu        $v0, $s3, $zero
    ctx->r2 = ADD32(ctx->r19, 0);
    // 0x00413BD0: addiu       $a0, $s3, 0x20
    ctx->r4 = ADD32(ctx->r19, 0X20);
L_00413BD4:
    // 0x00413BD4: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x00413BD8: lw          $t1, 0x4($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X4);
    // 0x00413BDC: lw          $t2, 0x8($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X8);
    // 0x00413BE0: lw          $t3, 0xC($v0)
    ctx->r11 = MEM_W(ctx->r2, 0XC);
    // 0x00413BE4: sw          $t0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r8;
    // 0x00413BE8: sw          $t1, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r9;
    // 0x00413BEC: sw          $t2, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r10;
    // 0x00413BF0: sw          $t3, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r11;
    // 0x00413BF4: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
    // 0x00413BF8: bne         $v0, $a0, L_00413BD4
    if (ctx->r2 != ctx->r4) {
        // 0x00413BFC: addiu       $v1, $v1, 0x10
        ctx->r3 = ADD32(ctx->r3, 0X10);
            goto L_00413BD4;
    }
    // 0x00413BFC: addiu       $v1, $v1, 0x10
    ctx->r3 = ADD32(ctx->r3, 0X10);
    // 0x00413C00: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x00413C04: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    // 0x00413C08: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x00413C0C: lw          $t1, 0x4($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X4);
    // 0x00413C10: sw          $t0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r8;
    // 0x00413C14: sw          $t1, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r9;
    // 0x00413C18: jal         0x0041363C
    // 0x00413C1C: sh          $zero, 0x14($sp)
    MEM_H(0X14, ctx->r29) = 0;
    func_0041363C(rdram, ctx);
        goto after_5;
    // 0x00413C1C: sh          $zero, 0x14($sp)
    MEM_H(0X14, ctx->r29) = 0;
    after_5:
    // 0x00413C20: addiu       $v1, $sp, 0x60
    ctx->r3 = ADD32(ctx->r29, 0X60);
    // 0x00413C24: addu        $v0, $s2, $zero
    ctx->r2 = ADD32(ctx->r18, 0);
    // 0x00413C28: addiu       $a0, $s2, 0x20
    ctx->r4 = ADD32(ctx->r18, 0X20);
L_00413C2C:
    // 0x00413C2C: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x00413C30: lw          $t1, 0x4($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X4);
    // 0x00413C34: lw          $t2, 0x8($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X8);
    // 0x00413C38: lw          $t3, 0xC($v0)
    ctx->r11 = MEM_W(ctx->r2, 0XC);
    // 0x00413C3C: sw          $t0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r8;
    // 0x00413C40: sw          $t1, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r9;
    // 0x00413C44: sw          $t2, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r10;
    // 0x00413C48: sw          $t3, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r11;
    // 0x00413C4C: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
    // 0x00413C50: bne         $v0, $a0, L_00413C2C
    if (ctx->r2 != ctx->r4) {
        // 0x00413C54: addiu       $v1, $v1, 0x10
        ctx->r3 = ADD32(ctx->r3, 0X10);
            goto L_00413C2C;
    }
    // 0x00413C54: addiu       $v1, $v1, 0x10
    ctx->r3 = ADD32(ctx->r3, 0X10);
    // 0x00413C58: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x00413C5C: sw          $t0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r8;
    // 0x00413C60: addiu       $v1, $sp, 0x10
    ctx->r3 = ADD32(ctx->r29, 0X10);
    // 0x00413C64: addu        $v0, $s3, $zero
    ctx->r2 = ADD32(ctx->r19, 0);
    // 0x00413C68: addiu       $a0, $s3, 0x20
    ctx->r4 = ADD32(ctx->r19, 0X20);
L_00413C6C:
    // 0x00413C6C: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x00413C70: lw          $t1, 0x4($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X4);
    // 0x00413C74: lw          $t2, 0x8($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X8);
    // 0x00413C78: lw          $t3, 0xC($v0)
    ctx->r11 = MEM_W(ctx->r2, 0XC);
    // 0x00413C7C: sw          $t0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r8;
    // 0x00413C80: sw          $t1, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r9;
    // 0x00413C84: sw          $t2, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r10;
    // 0x00413C88: sw          $t3, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r11;
    // 0x00413C8C: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
    // 0x00413C90: bne         $v0, $a0, L_00413C6C
    if (ctx->r2 != ctx->r4) {
        // 0x00413C94: addiu       $v1, $v1, 0x10
        ctx->r3 = ADD32(ctx->r3, 0X10);
            goto L_00413C6C;
    }
    // 0x00413C94: addiu       $v1, $v1, 0x10
    ctx->r3 = ADD32(ctx->r3, 0X10);
    // 0x00413C98: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x00413C9C: addiu       $a1, $sp, 0x60
    ctx->r5 = ADD32(ctx->r29, 0X60);
    // 0x00413CA0: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x00413CA4: lw          $t1, 0x4($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X4);
    // 0x00413CA8: sw          $t0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r8;
    // 0x00413CAC: sw          $t1, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r9;
    // 0x00413CB0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00413CB4: sh          $v0, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r2;
    // 0x00413CB8: jal         0x0041363C
    // 0x00413CBC: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    func_0041363C(rdram, ctx);
        goto after_6;
    // 0x00413CBC: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    after_6:
    // 0x00413CC0: addiu       $v1, $sp, 0x88
    ctx->r3 = ADD32(ctx->r29, 0X88);
    // 0x00413CC4: addu        $v0, $s2, $zero
    ctx->r2 = ADD32(ctx->r18, 0);
    // 0x00413CC8: addiu       $a0, $s2, 0x20
    ctx->r4 = ADD32(ctx->r18, 0X20);
L_00413CCC:
    // 0x00413CCC: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x00413CD0: lw          $t1, 0x4($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X4);
    // 0x00413CD4: lw          $t2, 0x8($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X8);
    // 0x00413CD8: lw          $t3, 0xC($v0)
    ctx->r11 = MEM_W(ctx->r2, 0XC);
    // 0x00413CDC: sw          $t0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r8;
    // 0x00413CE0: sw          $t1, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r9;
    // 0x00413CE4: sw          $t2, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r10;
    // 0x00413CE8: sw          $t3, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r11;
    // 0x00413CEC: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
    // 0x00413CF0: bne         $v0, $a0, L_00413CCC
    if (ctx->r2 != ctx->r4) {
        // 0x00413CF4: addiu       $v1, $v1, 0x10
        ctx->r3 = ADD32(ctx->r3, 0X10);
            goto L_00413CCC;
    }
    // 0x00413CF4: addiu       $v1, $v1, 0x10
    ctx->r3 = ADD32(ctx->r3, 0X10);
    // 0x00413CF8: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x00413CFC: sw          $t0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r8;
    // 0x00413D00: addiu       $v1, $sp, 0x10
    ctx->r3 = ADD32(ctx->r29, 0X10);
    // 0x00413D04: addu        $v0, $s3, $zero
    ctx->r2 = ADD32(ctx->r19, 0);
    // 0x00413D08: addiu       $a0, $s3, 0x20
    ctx->r4 = ADD32(ctx->r19, 0X20);
L_00413D0C:
    // 0x00413D0C: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x00413D10: lw          $t1, 0x4($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X4);
    // 0x00413D14: lw          $t2, 0x8($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X8);
    // 0x00413D18: lw          $t3, 0xC($v0)
    ctx->r11 = MEM_W(ctx->r2, 0XC);
    // 0x00413D1C: sw          $t0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r8;
    // 0x00413D20: sw          $t1, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r9;
    // 0x00413D24: sw          $t2, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r10;
    // 0x00413D28: sw          $t3, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r11;
    // 0x00413D2C: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
    // 0x00413D30: bne         $v0, $a0, L_00413D0C
    if (ctx->r2 != ctx->r4) {
        // 0x00413D34: addiu       $v1, $v1, 0x10
        ctx->r3 = ADD32(ctx->r3, 0X10);
            goto L_00413D0C;
    }
    // 0x00413D34: addiu       $v1, $v1, 0x10
    ctx->r3 = ADD32(ctx->r3, 0X10);
    // 0x00413D38: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x00413D3C: addiu       $a1, $sp, 0x88
    ctx->r5 = ADD32(ctx->r29, 0X88);
    // 0x00413D40: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x00413D44: lw          $t1, 0x4($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X4);
    // 0x00413D48: sw          $t0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r8;
    // 0x00413D4C: sw          $t1, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r9;
    // 0x00413D50: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00413D54: sh          $v0, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r2;
    // 0x00413D58: jal         0x0041363C
    // 0x00413D5C: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    func_0041363C(rdram, ctx);
        goto after_7;
    // 0x00413D5C: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    after_7:
    // 0x00413D60: lw          $v1, 0x64($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X64);
    // 0x00413D64: lw          $v0, 0x8C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X8C);
    // 0x00413D68: lw          $a0, 0x3C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X3C);
    // 0x00413D6C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x00413D70: slt         $v0, $v1, $a0
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x00413D74: bnel        $v0, $zero, L_00413D7C
    if (ctx->r2 != 0) {
        // 0x00413D78: addu        $v1, $a0, $zero
        ctx->r3 = ADD32(ctx->r4, 0);
            goto L_00413D7C;
    }
    goto skip_1;
    // 0x00413D78: addu        $v1, $a0, $zero
    ctx->r3 = ADD32(ctx->r4, 0);
    skip_1:
L_00413D7C:
    // 0x00413D7C: sw          $v1, 0x4($s2)
    MEM_W(0X4, ctx->r18) = ctx->r3;
    // 0x00413D80: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x00413D84: lw          $v1, 0x68($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X68);
    // 0x00413D88: lw          $v0, 0x90($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X90);
    // 0x00413D8C: addu        $a0, $a0, $v1
    ctx->r4 = ADD32(ctx->r4, ctx->r3);
    // 0x00413D90: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x00413D94: srl         $v1, $v0, 31
    ctx->r3 = S32(U32(ctx->r2) >> 31);
    // 0x00413D98: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x00413D9C: sra         $v0, $v0, 1
    ctx->r2 = S32(SIGNED(ctx->r2) >> 1);
    // 0x00413DA0: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x00413DA4: j           L_00413E14
    // 0x00413DA8: sw          $a0, 0x8($s2)
    MEM_W(0X8, ctx->r18) = ctx->r4;
        goto L_00413E14;
    // 0x00413DA8: sw          $a0, 0x8($s2)
    MEM_W(0X8, ctx->r18) = ctx->r4;
    // 0x00413DAC: lw          $v0, 0x14($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X14);
    // 0x00413DB0: lwc1        $f1, 0x288($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X288);
    // 0x00413DB4: lwc1        $f0, 0x24($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X24);
    // 0x00413DB8: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00413DBC: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00413DC0: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00413DC4: lwc1        $f1, 0x2030($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X2030);
    // 0x00413DC8: cvt.s.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.fl = CVT_S_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x00413DCC: div.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = DIV_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00413DD0: trunc.w.s   $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x00413DD4: swc1        $f4, 0x4($s2)
    MEM_W(0X4, ctx->r18) = ctx->f4.u32l;
    // 0x00413DD8: lwc1        $f1, 0x28C($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X28C);
    // 0x00413DDC: lwc1        $f0, 0x28($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X28);
    // 0x00413DE0: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00413DE4: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00413DE8: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00413DEC: lwc1        $f1, 0x2034($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X2034);
    // 0x00413DF0: cvt.s.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.fl = CVT_S_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x00413DF4: div.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = DIV_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00413DF8: trunc.w.s   $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x00413DFC: swc1        $f4, 0x8($s2)
    MEM_W(0X8, ctx->r18) = ctx->f4.u32l;
    // 0x00413E00: j           L_00413E14
    // 0x00413E04: nop

        goto L_00413E14;
    // 0x00413E04: nop

    // 0x00413E08: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00413E0C: sw          $v0, 0x4($s2)
    MEM_W(0X4, ctx->r18) = ctx->r2;
L_00413E10:
    // 0x00413E10: sw          $v0, 0x8($s2)
    MEM_W(0X8, ctx->r18) = ctx->r2;
L_00413E14:
    // 0x00413E14: lh          $v0, 0xC($s3)
    ctx->r2 = MEM_H(ctx->r19, 0XC);
    // 0x00413E18: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x00413E1C: lw          $v1, 0x2030($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X2030);
    // 0x00413E20: mult        $v0, $v1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x00413E24: mflo        $v0
    ctx->r2 = lo;
    // 0x00413E28: lui         $v1, 0xE6C2
    ctx->r3 = S32(0XE6C2 << 16);
    // 0x00413E2C: ori         $v1, $v1, 0xB449
    ctx->r3 = ctx->r3 | 0XB449;
    // 0x00413E30: mult        $v0, $v1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x00413E34: lw          $a0, 0x8($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X8);
    // 0x00413E38: mfhi        $v1
    ctx->r3 = hi;
    // 0x00413E3C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x00413E40: sra         $v1, $v1, 8
    ctx->r3 = S32(SIGNED(ctx->r3) >> 8);
    // 0x00413E44: sra         $v0, $v0, 31
    ctx->r2 = S32(SIGNED(ctx->r2) >> 31);
    // 0x00413E48: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x00413E4C: mtc1        $v1, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r3;
    // 0x00413E50: cvt.s.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.fl = CVT_S_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x00413E54: andi        $v0, $a0, 0x8000
    ctx->r2 = ctx->r4 & 0X8000;
    // 0x00413E58: bne         $v0, $zero, L_00413E8C
    if (ctx->r2 != 0) {
        // 0x00413E5C: andi        $v0, $a0, 0x4000
        ctx->r2 = ctx->r4 & 0X4000;
            goto L_00413E8C;
    }
    // 0x00413E5C: andi        $v0, $a0, 0x4000
    ctx->r2 = ctx->r4 & 0X4000;
    // 0x00413E60: beq         $v0, $zero, L_00413E84
    if (ctx->r2 == 0) {
        // 0x00413E64: nop
    
            goto L_00413E84;
    }
    // 0x00413E64: nop

    // 0x00413E68: lwc1        $f0, 0x18($s2)
    ctx->f0.u32l = MEM_W(ctx->r18, 0X18);
    // 0x00413E6C: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00413E70: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x00413E74: trunc.w.s   $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x00413E78: swc1        $f4, 0x14($s2)
    MEM_W(0X14, ctx->r18) = ctx->f4.u32l;
    // 0x00413E7C: j           L_00413E8C
    // 0x00413E80: nop

        goto L_00413E8C;
    // 0x00413E80: nop

L_00413E84:
    // 0x00413E84: trunc.w.s   $f4, $f1
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 1);
    ctx->f4.u32l = TRUNC_W_S(ctx->f1.fl);
    // 0x00413E88: swc1        $f4, 0x14($s2)
    MEM_W(0X14, ctx->r18) = ctx->f4.u32l;
L_00413E8C:
    // 0x00413E8C: lwc1        $f0, 0xC($s2)
    ctx->f0.u32l = MEM_W(ctx->r18, 0XC);
    // 0x00413E90: lwc1        $f1, 0x4($s2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r18, 0X4);
    // 0x00413E94: cvt.s.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.fl = CVT_S_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x00413E98: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x00413E9C: lwc1        $f0, 0x14($s2)
    ctx->f0.u32l = MEM_W(ctx->r18, 0X14);
    // 0x00413EA0: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00413EA4: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x00413EA8: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x00413EAC: lw          $v0, 0x2034($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2034);
    // 0x00413EB0: trunc.w.s   $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x00413EB4: swc1        $f4, 0x18($s2)
    MEM_W(0X18, ctx->r18) = ctx->f4.u32l;
    // 0x00413EB8: lh          $v1, 0xE($s3)
    ctx->r3 = MEM_H(ctx->r19, 0XE);
    // 0x00413EBC: mult        $v1, $v0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x00413EC0: mflo        $v1
    ctx->r3 = lo;
    // 0x00413EC4: lui         $v0, 0x939A
    ctx->r2 = S32(0X939A << 16);
    // 0x00413EC8: ori         $v0, $v0, 0x85C5
    ctx->r2 = ctx->r2 | 0X85C5;
    // 0x00413ECC: mult        $v1, $v0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x00413ED0: lw          $a0, 0x8($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X8);
    // 0x00413ED4: mfhi        $t4
    ctx->r12 = hi;
    // 0x00413ED8: addu        $v0, $t4, $v1
    ctx->r2 = ADD32(ctx->r12, ctx->r3);
    // 0x00413EDC: sra         $v0, $v0, 7
    ctx->r2 = S32(SIGNED(ctx->r2) >> 7);
    // 0x00413EE0: sra         $v1, $v1, 31
    ctx->r3 = S32(SIGNED(ctx->r3) >> 31);
    // 0x00413EE4: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x00413EE8: mtc1        $v0, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r2;
    // 0x00413EEC: cvt.s.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.fl = CVT_S_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x00413EF0: lui         $v0, 0x2
    ctx->r2 = S32(0X2 << 16);
    // 0x00413EF4: and         $v0, $a0, $v0
    ctx->r2 = ctx->r4 & ctx->r2;
    // 0x00413EF8: bne         $v0, $zero, L_00413F30
    if (ctx->r2 != 0) {
        // 0x00413EFC: lui         $v0, 0x1
        ctx->r2 = S32(0X1 << 16);
            goto L_00413F30;
    }
    // 0x00413EFC: lui         $v0, 0x1
    ctx->r2 = S32(0X1 << 16);
    // 0x00413F00: and         $v0, $a0, $v0
    ctx->r2 = ctx->r4 & ctx->r2;
    // 0x00413F04: beq         $v0, $zero, L_00413F28
    if (ctx->r2 == 0) {
        // 0x00413F08: nop
    
            goto L_00413F28;
    }
    // 0x00413F08: nop

    // 0x00413F0C: lwc1        $f0, 0x20($s2)
    ctx->f0.u32l = MEM_W(ctx->r18, 0X20);
    // 0x00413F10: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00413F14: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x00413F18: trunc.w.s   $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x00413F1C: swc1        $f4, 0x1C($s2)
    MEM_W(0X1C, ctx->r18) = ctx->f4.u32l;
    // 0x00413F20: j           L_00413F30
    // 0x00413F24: nop

        goto L_00413F30;
    // 0x00413F24: nop

L_00413F28:
    // 0x00413F28: trunc.w.s   $f4, $f1
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 1);
    ctx->f4.u32l = TRUNC_W_S(ctx->f1.fl);
    // 0x00413F2C: swc1        $f4, 0x1C($s2)
    MEM_W(0X1C, ctx->r18) = ctx->f4.u32l;
L_00413F30:
    // 0x00413F30: lwc1        $f0, 0x10($s2)
    ctx->f0.u32l = MEM_W(ctx->r18, 0X10);
    // 0x00413F34: lwc1        $f1, 0x8($s2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r18, 0X8);
    // 0x00413F38: cvt.s.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.fl = CVT_S_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x00413F3C: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x00413F40: lwc1        $f0, 0x1C($s2)
    ctx->f0.u32l = MEM_W(ctx->r18, 0X1C);
    // 0x00413F44: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00413F48: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x00413F4C: trunc.w.s   $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x00413F50: swc1        $f4, 0x20($s2)
    MEM_W(0X20, ctx->r18) = ctx->f4.u32l;
    // 0x00413F54: lw          $ra, 0xC0($sp)
    ctx->r31 = MEM_W(ctx->r29, 0XC0);
    // 0x00413F58: lw          $s3, 0xBC($sp)
    ctx->r19 = MEM_W(ctx->r29, 0XBC);
    // 0x00413F5C: lw          $s2, 0xB8($sp)
    ctx->r18 = MEM_W(ctx->r29, 0XB8);
    // 0x00413F60: lw          $s1, 0xB4($sp)
    ctx->r17 = MEM_W(ctx->r29, 0XB4);
    // 0x00413F64: lw          $s0, 0xB0($sp)
    ctx->r16 = MEM_W(ctx->r29, 0XB0);
    // 0x00413F68: ldc1        $f20, 0xC8($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0XC8);
    // 0x00413F6C: jr          $ra
    // 0x00413F70: addiu       $sp, $sp, 0xD0
    ctx->r29 = ADD32(ctx->r29, 0XD0);
    return;
    // 0x00413F70: addiu       $sp, $sp, 0xD0
    ctx->r29 = ADD32(ctx->r29, 0XD0);
;}
RECOMP_FUNC void entry_00413784(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00413784: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x00413788: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x0041378C: addiu       $v1, $v1, 0x1BD4
    ctx->r3 = ADD32(ctx->r3, 0X1BD4);
    // 0x00413790: addu        $s1, $v0, $v1
    ctx->r17 = ADD32(ctx->r2, ctx->r3);
    // 0x00413794: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x00413798: bne         $v0, $zero, L_004137E8
    if (ctx->r2 != 0) {
        // 0x0041379C: addiu       $v0, $zero, 0x5
        ctx->r2 = ADD32(0, 0X5);
            goto L_004137E8;
    }
    // 0x0041379C: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x004137A0: lwc1        $f20, 0x4($s1)
    ctx->f20.u32l = MEM_W(ctx->r17, 0X4);
    // 0x004137A4: cvt.s.w     $f20, $f20
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    ctx->f20.fl = CVT_S_W(ctx->f20.u32l);
    // 0x004137A8: lh          $v1, 0x4($s3)
    ctx->r3 = MEM_H(ctx->r19, 0X4);
    // 0x004137AC: bne         $v1, $v0, L_004137C4
    if (ctx->r3 != ctx->r2) {
        // 0x004137B0: nop
    
            goto L_004137C4;
    }
    // 0x004137B0: nop

    // 0x004137B4: jal         0x00413230
    // 0x004137B8: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    func_00413230(rdram, ctx);
        goto after_0;
    // 0x004137B8: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    after_0:
    // 0x004137BC: j           L_004137C8
    // 0x004137C0: nop

        goto L_004137C8;
    // 0x004137C0: nop

L_004137C4:
    // 0x004137C4: lw          $v0, 0x14($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X14);
L_004137C8:
    // 0x004137C8: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x004137CC: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x004137D0: jal         0x004163C0
    // 0x004137D4: addu        $a2, $a1, $zero
    ctx->r6 = ADD32(ctx->r5, 0);
    func_004163C0(rdram, ctx);
        goto after_1;
    // 0x004137D4: addu        $a2, $a1, $zero
    ctx->r6 = ADD32(ctx->r5, 0);
    after_1:
    // 0x004137D8: trunc.w.s   $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x004137DC: swc1        $f4, 0x4($s2)
    MEM_W(0X4, ctx->r18) = ctx->f4.u32l;
    // 0x004137E0: j           L_0041384C
    // 0x004137E4: nop

        goto L_0041384C;
    // 0x004137E4: nop

L_004137E8:
    // 0x004137E8: lh          $v1, 0x4($s3)
    ctx->r3 = MEM_H(ctx->r19, 0X4);
    // 0x004137EC: bne         $v1, $v0, L_00413804
    if (ctx->r3 != ctx->r2) {
        // 0x004137F0: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_00413804;
    }
    // 0x004137F0: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x004137F4: jal         0x00413230
    // 0x004137F8: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    func_00413230(rdram, ctx);
        goto after_2;
    // 0x004137F8: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    after_2:
    // 0x004137FC: j           L_00413808
    // 0x00413800: nop

        goto L_00413808;
    // 0x00413800: nop

L_00413804:
    // 0x00413804: lw          $v0, 0x14($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X14);
L_00413808:
    // 0x00413808: beq         $v0, $zero, L_0041383C
    if (ctx->r2 == 0) {
        // 0x0041380C: nop
    
            goto L_0041383C;
    }
    // 0x0041380C: nop

    // 0x00413810: lbu         $v1, 0x0($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X0);
    // 0x00413814: beq         $v1, $zero, L_0041383C
    if (ctx->r3 == 0) {
        // 0x00413818: nop
    
            goto L_0041383C;
    }
    // 0x00413818: nop

    // 0x0041381C: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
L_00413820:
    // 0x00413820: beq         $v1, $a0, L_0041383C
    if (ctx->r3 == ctx->r4) {
        // 0x00413824: addiu       $v0, $v0, 0x1
        ctx->r2 = ADD32(ctx->r2, 0X1);
            goto L_0041383C;
    }
    // 0x00413824: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x00413828: beq         $v0, $zero, L_0041383C
    if (ctx->r2 == 0) {
        // 0x0041382C: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_0041383C;
    }
    // 0x0041382C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x00413830: lbu         $v1, 0x0($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X0);
    // 0x00413834: bne         $v1, $zero, L_00413820
    if (ctx->r3 != 0) {
        // 0x00413838: nop
    
            goto L_00413820;
    }
    // 0x00413838: nop

L_0041383C:
    // 0x0041383C: lw          $v0, 0x4($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X4);
    // 0x00413840: mult        $s0, $v0
    result = S64(S32(ctx->r16)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x00413844: mflo        $t0
    ctx->r8 = lo;
    // 0x00413848: sw          $t0, 0x4($s2)
    MEM_W(0X4, ctx->r18) = ctx->r8;
L_0041384C:
    // 0x0041384C: lw          $v0, 0x8($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X8);
    // 0x00413850: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x00413854: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x00413858: beq         $v0, $zero, L_00413888
    if (ctx->r2 == 0) {
        // 0x0041385C: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_00413888;
    }
    // 0x0041385C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x00413860: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00413864: lwc1        $f1, 0xBB8($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0XBB8);
    // 0x00413868: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0041386C: lwc1        $f0, 0x2034($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X2034);
    // 0x00413870: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00413874: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00413878: trunc.w.s   $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x0041387C: swc1        $f4, 0x8($s2)
    MEM_W(0X8, ctx->r18) = ctx->f4.u32l;
    // 0x00413880: j           L_0041391C
    // 0x00413884: nop

        goto L_0041391C;
    // 0x00413884: nop

L_00413888:
    // 0x00413888: lw          $v1, 0x0($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X0);
    // 0x0041388C: bne         $v1, $v0, L_004138E4
    if (ctx->r3 != ctx->r2) {
        // 0x00413890: nop
    
            goto L_004138E4;
    }
    // 0x00413890: nop

    // 0x00413894: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x00413898: lw          $v1, 0x2034($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X2034);
    // 0x0041389C: slti        $v0, $v1, 0xDF
    ctx->r2 = SIGNED(ctx->r3) < 0XDF ? 1 : 0;
    // 0x004138A0: bne         $v0, $zero, L_004138E4
    if (ctx->r2 != 0) {
        // 0x004138A4: nop
    
            goto L_004138E4;
    }
    // 0x004138A4: nop

    // 0x004138A8: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x004138AC: lwc1        $f1, 0xBBC($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0XBBC);
    // 0x004138B0: lwc1        $f0, 0x8($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X8);
    // 0x004138B4: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x004138B8: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x004138BC: mtc1        $v1, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r3;
    // 0x004138C0: cvt.s.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.fl = CVT_S_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x004138C4: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x004138C8: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x004138CC: lwc1        $f1, 0xBC0($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0XBC0);
    // 0x004138D0: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x004138D4: trunc.w.s   $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x004138D8: swc1        $f4, 0x8($s2)
    MEM_W(0X8, ctx->r18) = ctx->f4.u32l;
    // 0x004138DC: j           L_0041391C
    // 0x004138E0: nop

        goto L_0041391C;
    // 0x004138E0: nop

L_004138E4:
    // 0x004138E4: lw          $v1, 0x8($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X8);
    // 0x004138E8: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x004138EC: lw          $v0, 0x2034($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2034);
    // 0x004138F0: mult        $v1, $v0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x004138F4: mflo        $v1
    ctx->r3 = lo;
    // 0x004138F8: lui         $v0, 0x939A
    ctx->r2 = S32(0X939A << 16);
    // 0x004138FC: ori         $v0, $v0, 0x85C5
    ctx->r2 = ctx->r2 | 0X85C5;
    // 0x00413900: mult        $v1, $v0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x00413904: mfhi        $t4
    ctx->r12 = hi;
    // 0x00413908: addu        $v0, $t4, $v1
    ctx->r2 = ADD32(ctx->r12, ctx->r3);
    // 0x0041390C: sra         $v0, $v0, 7
    ctx->r2 = S32(SIGNED(ctx->r2) >> 7);
    // 0x00413910: sra         $v1, $v1, 31
    ctx->r3 = S32(SIGNED(ctx->r3) >> 31);
    // 0x00413914: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x00413918: sw          $v0, 0x8($s2)
    MEM_W(0X8, ctx->r18) = ctx->r2;
L_0041391C:
    // 0x0041391C: lw          $v1, 0x4($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X4);
    // 0x00413920: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x00413924: lw          $v0, 0x2030($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2030);
    // 0x00413928: mult        $v1, $v0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x0041392C: mflo        $v1
    ctx->r3 = lo;
    // 0x00413930: lui         $v0, 0xE6C2
    ctx->r2 = S32(0XE6C2 << 16);
    // 0x00413934: ori         $v0, $v0, 0xB449
    ctx->r2 = ctx->r2 | 0XB449;
    // 0x00413938: mult        $v1, $v0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x0041393C: mfhi        $t4
    ctx->r12 = hi;
    // 0x00413940: addu        $v0, $t4, $v1
    ctx->r2 = ADD32(ctx->r12, ctx->r3);
    // 0x00413944: sra         $v0, $v0, 8
    ctx->r2 = S32(SIGNED(ctx->r2) >> 8);
    // 0x00413948: sra         $v1, $v1, 31
    ctx->r3 = S32(SIGNED(ctx->r3) >> 31);
    // 0x0041394C: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x00413950: j           L_00413E14
    // 0x00413954: sw          $v0, 0x4($s2)
    MEM_W(0X4, ctx->r18) = ctx->r2;
        goto L_00413E14;
    // 0x00413954: sw          $v0, 0x4($s2)
    MEM_W(0X4, ctx->r18) = ctx->r2;
    // 0x00413958: lw          $v0, 0x8($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X8);
    // 0x0041395C: andi        $v1, $v0, 0x3FE0
    ctx->r3 = ctx->r2 & 0X3FE0;
    // 0x00413960: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x00413964: beq         $v1, $v0, L_00413A0C
    if (ctx->r3 == ctx->r2) {
        // 0x00413968: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_00413A0C;
    }
    // 0x00413968: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0041396C: sltiu       $v0, $v1, 0x201
    ctx->r2 = ctx->r3 < 0X201 ? 1 : 0;
    // 0x00413970: beq         $v0, $zero, L_004139BC
    if (ctx->r2 == 0) {
        // 0x00413974: addiu       $v0, $zero, 0x40
        ctx->r2 = ADD32(0, 0X40);
            goto L_004139BC;
    }
    // 0x00413974: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x00413978: beql        $v1, $v0, L_00413A20
    if (ctx->r3 == ctx->r2) {
        // 0x0041397C: addiu       $a0, $zero, 0x1
        ctx->r4 = ADD32(0, 0X1);
            goto L_00413A20;
    }
    goto skip_0;
    // 0x0041397C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    skip_0:
    // 0x00413980: sltiu       $v0, $v1, 0x41
    ctx->r2 = ctx->r3 < 0X41 ? 1 : 0;
    // 0x00413984: beq         $v0, $zero, L_0041399C
    if (ctx->r2 == 0) {
        // 0x00413988: addiu       $v0, $zero, 0x20
        ctx->r2 = ADD32(0, 0X20);
            goto L_0041399C;
    }
    // 0x00413988: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x0041398C: beq         $v1, $v0, L_00413A24
    if (ctx->r3 == ctx->r2) {
        // 0x00413990: sll         $v0, $a0, 3
        ctx->r2 = S32(ctx->r4 << 3);
            goto L_00413A24;
    }
    // 0x00413990: sll         $v0, $a0, 3
    ctx->r2 = S32(ctx->r4 << 3);
    // 0x00413994: j           L_00413A28
    // 0x00413998: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
        goto L_00413A28;
    // 0x00413998: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
L_0041399C:
    // 0x0041399C: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x004139A0: beq         $v1, $v0, L_00413A20
    if (ctx->r3 == ctx->r2) {
        // 0x004139A4: addiu       $a0, $zero, 0x2
        ctx->r4 = ADD32(0, 0X2);
            goto L_00413A20;
    }
    // 0x004139A4: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x004139A8: addiu       $v0, $zero, 0x100
    ctx->r2 = ADD32(0, 0X100);
    // 0x004139AC: beq         $v1, $v0, L_00413A04
    if (ctx->r3 == ctx->r2) {
        // 0x004139B0: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_00413A04;
    }
    // 0x004139B0: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x004139B4: j           L_00413A24
    // 0x004139B8: sll         $v0, $a0, 3
    ctx->r2 = S32(ctx->r4 << 3);
        goto L_00413A24;
    // 0x004139B8: sll         $v0, $a0, 3
    ctx->r2 = S32(ctx->r4 << 3);
L_004139BC:
    // 0x004139BC: addiu       $v0, $zero, 0x800
    ctx->r2 = ADD32(0, 0X800);
    // 0x004139C0: beq         $v1, $v0, L_00413A20
    if (ctx->r3 == ctx->r2) {
        // 0x004139C4: addiu       $a0, $zero, 0x6
        ctx->r4 = ADD32(0, 0X6);
            goto L_00413A20;
    }
    // 0x004139C4: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    // 0x004139C8: sltiu       $v0, $v1, 0x801
    ctx->r2 = ctx->r3 < 0X801 ? 1 : 0;
    // 0x004139CC: beq         $v0, $zero, L_004139E4
    if (ctx->r2 == 0) {
        // 0x004139D0: addiu       $v0, $zero, 0x400
        ctx->r2 = ADD32(0, 0X400);
            goto L_004139E4;
    }
    // 0x004139D0: addiu       $v0, $zero, 0x400
    ctx->r2 = ADD32(0, 0X400);
    // 0x004139D4: beq         $v1, $v0, L_00413A14
    if (ctx->r3 == ctx->r2) {
        // 0x004139D8: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_00413A14;
    }
    // 0x004139D8: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x004139DC: j           L_00413A24
    // 0x004139E0: sll         $v0, $a0, 3
    ctx->r2 = S32(ctx->r4 << 3);
        goto L_00413A24;
    // 0x004139E0: sll         $v0, $a0, 3
    ctx->r2 = S32(ctx->r4 << 3);
L_004139E4:
    // 0x004139E4: addiu       $v0, $zero, 0x1000
    ctx->r2 = ADD32(0, 0X1000);
    // 0x004139E8: beq         $v1, $v0, L_00413A20
    if (ctx->r3 == ctx->r2) {
        // 0x004139EC: addiu       $a0, $zero, 0x7
        ctx->r4 = ADD32(0, 0X7);
            goto L_00413A20;
    }
    // 0x004139EC: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    // 0x004139F0: addiu       $v0, $zero, 0x2000
    ctx->r2 = ADD32(0, 0X2000);
    // 0x004139F4: beq         $v1, $v0, L_00413A1C
    if (ctx->r3 == ctx->r2) {
        // 0x004139F8: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_00413A1C;
    }
    // 0x004139F8: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x004139FC: j           L_00413A24
    // 0x00413A00: sll         $v0, $a0, 3
    ctx->r2 = S32(ctx->r4 << 3);
        goto L_00413A24;
    // 0x00413A00: sll         $v0, $a0, 3
    ctx->r2 = S32(ctx->r4 << 3);
L_00413A04:
    // 0x00413A04: j           L_00413A20
    // 0x00413A08: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
        goto L_00413A20;
    // 0x00413A08: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
L_00413A0C:
    // 0x00413A0C: j           L_00413A20
    // 0x00413A10: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
        goto L_00413A20;
    // 0x00413A10: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
L_00413A14:
    // 0x00413A14: j           L_00413A20
    // 0x00413A18: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
        goto L_00413A20;
    // 0x00413A18: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
L_00413A1C:
    // 0x00413A1C: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
L_00413A20:
    // 0x00413A20: sll         $v0, $a0, 3
    ctx->r2 = S32(ctx->r4 << 3);
L_00413A24:
    // 0x00413A24: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
L_00413A28:
    // 0x00413A28: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x00413A2C: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x00413A30: addiu       $v1, $v1, 0x1BD4
    ctx->r3 = ADD32(ctx->r3, 0X1BD4);
    // 0x00413A34: addu        $s1, $v0, $v1
    ctx->r17 = ADD32(ctx->r2, ctx->r3);
    // 0x00413A38: lw          $v0, 0x4($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X4);
    // 0x00413A3C: sw          $v0, 0x4($s2)
    MEM_W(0X4, ctx->r18) = ctx->r2;
    // 0x00413A40: lw          $v1, 0x8($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X8);
    // 0x00413A44: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x00413A48: lw          $v0, 0x2034($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2034);
    // 0x00413A4C: mult        $v1, $v0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x00413A50: mflo        $v1
    ctx->r3 = lo;
    // 0x00413A54: lui         $v0, 0x939A
    ctx->r2 = S32(0X939A << 16);
    // 0x00413A58: ori         $v0, $v0, 0x85C5
    ctx->r2 = ctx->r2 | 0X85C5;
    // 0x00413A5C: mult        $v1, $v0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x00413A60: mfhi        $t4
    ctx->r12 = hi;
    // 0x00413A64: addu        $v0, $t4, $v1
    ctx->r2 = ADD32(ctx->r12, ctx->r3);
    // 0x00413A68: sra         $v0, $v0, 7
    ctx->r2 = S32(SIGNED(ctx->r2) >> 7);
    // 0x00413A6C: sra         $v1, $v1, 31
    ctx->r3 = S32(SIGNED(ctx->r3) >> 31);
    // 0x00413A70: j           L_00413E10
    // 0x00413A74: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
        goto L_00413E10;
    // 0x00413A74: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x00413A78: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x00413A7C: addiu       $a0, $a0, -0x5378
    ctx->r4 = ADD32(ctx->r4, -0X5378);
    // 0x00413A80: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x00413A84: addiu       $v0, $zero, 0xD
    ctx->r2 = ADD32(0, 0XD);
    // 0x00413A88: bne         $v1, $v0, L_00413AA0
    if (ctx->r3 != ctx->r2) {
        // 0x00413A8C: lui         $v1, 0x4000
        ctx->r3 = S32(0X4000 << 16);
            goto L_00413AA0;
    }
    // 0x00413A8C: lui         $v1, 0x4000
    ctx->r3 = S32(0X4000 << 16);
    // 0x00413A90: lw          $v0, 0x8($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X8);
    // 0x00413A94: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x00413A98: bne         $v0, $zero, L_00413ACC
    if (ctx->r2 != 0) {
        // 0x00413A9C: addiu       $v0, $zero, 0x11C
        ctx->r2 = ADD32(0, 0X11C);
            goto L_00413ACC;
    }
    // 0x00413A9C: addiu       $v0, $zero, 0x11C
    ctx->r2 = ADD32(0, 0X11C);
L_00413AA0:
    // 0x00413AA0: lbu         $v0, -0x197($a0)
    ctx->r2 = MEM_BU(ctx->r4, -0X197);
    // 0x00413AA4: beq         $v0, $zero, L_00413ADC
    if (ctx->r2 == 0) {
        // 0x00413AA8: nop
    
            goto L_00413ADC;
    }
    // 0x00413AA8: nop

    // 0x00413AAC: lw          $v0, 0x8($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X8);
    // 0x00413AB0: bgez        $v0, L_00413ADC
    if (SIGNED(ctx->r2) >= 0) {
        // 0x00413AB4: nop
    
            goto L_00413ADC;
    }
    // 0x00413AB4: nop

    // 0x00413AB8: jal         0x00266B80
    // 0x00413ABC: nop

    func_00266B80(rdram, ctx);
        goto after_3;
    // 0x00413ABC: nop

    after_3:
    // 0x00413AC0: lui         $v1, 0x40
    ctx->r3 = S32(0X40 << 16);
    // 0x00413AC4: bne         $v0, $v1, L_00413ADC
    if (ctx->r2 != ctx->r3) {
        // 0x00413AC8: addiu       $v0, $zero, 0x11C
        ctx->r2 = ADD32(0, 0X11C);
            goto L_00413ADC;
    }
    // 0x00413AC8: addiu       $v0, $zero, 0x11C
    ctx->r2 = ADD32(0, 0X11C);
L_00413ACC:
    // 0x00413ACC: sw          $v0, 0x4($s2)
    MEM_W(0X4, ctx->r18) = ctx->r2;
    // 0x00413AD0: addiu       $v0, $zero, 0xDE
    ctx->r2 = ADD32(0, 0XDE);
    // 0x00413AD4: j           L_00413AF0
    // 0x00413AD8: sw          $v0, 0x8($s2)
    MEM_W(0X8, ctx->r18) = ctx->r2;
        goto L_00413AF0;
    // 0x00413AD8: sw          $v0, 0x8($s2)
    MEM_W(0X8, ctx->r18) = ctx->r2;
L_00413ADC:
    // 0x00413ADC: lw          $a0, 0x14($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X14);
    // 0x00413AE0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x00413AE4: addiu       $a2, $s2, 0x4
    ctx->r6 = ADD32(ctx->r18, 0X4);
    // 0x00413AE8: jal         0x0027AEA8
    // 0x00413AEC: addiu       $a3, $s2, 0x8
    ctx->r7 = ADD32(ctx->r18, 0X8);
    func_0027AEA8(rdram, ctx);
        goto after_4;
    // 0x00413AEC: addiu       $a3, $s2, 0x8
    ctx->r7 = ADD32(ctx->r18, 0X8);
    after_4:
L_00413AF0:
    // 0x00413AF0: lw          $v0, 0x8($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X8);
    // 0x00413AF4: lui         $v1, 0x1000
    ctx->r3 = S32(0X1000 << 16);
    // 0x00413AF8: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x00413AFC: beq         $v0, $zero, L_00413B4C
    if (ctx->r2 == 0) {
        // 0x00413B00: nop
    
            goto L_00413B4C;
    }
    // 0x00413B00: nop

    // 0x00413B04: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x00413B08: lwc1        $f3, 0x4($s2)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r18, 0X4);
    // 0x00413B0C: cvt.s.w     $f3, $f3
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    ctx->f3.fl = CVT_S_W(ctx->f_odd[(3 - 1) * 2]);
    // 0x00413B10: c.eq.s      $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f3.fl == ctx->f0.fl;
    // 0x00413B14: nop

    // 0x00413B18: bc1t        L_00413B4C
    if (c1cs) {
        // 0x00413B1C: nop
    
            goto L_00413B4C;
    }
    // 0x00413B1C: nop

    // 0x00413B20: lwc1        $f2, 0x8($s2)
    ctx->f2.u32l = MEM_W(ctx->r18, 0X8);
    // 0x00413B24: cvt.s.w     $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    ctx->f2.fl = CVT_S_W(ctx->f2.u32l);
    // 0x00413B28: c.eq.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl == ctx->f0.fl;
    // 0x00413B2C: nop

    // 0x00413B30: bc1t        L_00413B4C
    if (c1cs) {
        // 0x00413B34: nop
    
            goto L_00413B4C;
    }
    // 0x00413B34: nop

    // 0x00413B38: lwc1        $f0, 0x288($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X288);
    // 0x00413B3C: lwc1        $f1, 0x28C($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X28C);
    // 0x00413B40: div.s       $f3, $f0, $f3
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f3.fl = DIV_S(ctx->f0.fl, ctx->f3.fl);
    // 0x00413B44: j           L_00413B7C
    // 0x00413B48: div.s       $f0, $f1, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = DIV_S(ctx->f1.fl, ctx->f2.fl);
        goto L_00413B7C;
    // 0x00413B48: div.s       $f0, $f1, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = DIV_S(ctx->f1.fl, ctx->f2.fl);
L_00413B4C:
    // 0x00413B4C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00413B50: lwc1        $f1, 0xBC4($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0XBC4);
    // 0x00413B54: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00413B58: lwc1        $f0, 0x2030($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X2030);
    // 0x00413B5C: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00413B60: mul.s       $f3, $f0, $f1
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f3.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00413B64: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00413B68: lwc1        $f1, 0xBC8($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0XBC8);
    // 0x00413B6C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00413B70: lwc1        $f0, 0x2034($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X2034);
    // 0x00413B74: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00413B78: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
L_00413B7C:
    // 0x00413B7C: swc1        $f3, 0xC($s2)
    MEM_W(0XC, ctx->r18) = ctx->f_odd[(3 - 1) * 2];
    // 0x00413B80: j           L_00413E14
    // 0x00413B84: swc1        $f0, 0x10($s2)
    MEM_W(0X10, ctx->r18) = ctx->f0.u32l;
        goto L_00413E14;
    // 0x00413B84: swc1        $f0, 0x10($s2)
    MEM_W(0X10, ctx->r18) = ctx->f0.u32l;
    // 0x00413B88: addiu       $v1, $sp, 0x38
    ctx->r3 = ADD32(ctx->r29, 0X38);
    // 0x00413B8C: addu        $v0, $s2, $zero
    ctx->r2 = ADD32(ctx->r18, 0);
    // 0x00413B90: addiu       $a0, $s2, 0x20
    ctx->r4 = ADD32(ctx->r18, 0X20);
L_00413B94:
    // 0x00413B94: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x00413B98: lw          $t1, 0x4($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X4);
    // 0x00413B9C: lw          $t2, 0x8($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X8);
    // 0x00413BA0: lw          $t3, 0xC($v0)
    ctx->r11 = MEM_W(ctx->r2, 0XC);
    // 0x00413BA4: sw          $t0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r8;
    // 0x00413BA8: sw          $t1, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r9;
    // 0x00413BAC: sw          $t2, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r10;
    // 0x00413BB0: sw          $t3, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r11;
    // 0x00413BB4: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
    // 0x00413BB8: bne         $v0, $a0, L_00413B94
    if (ctx->r2 != ctx->r4) {
        // 0x00413BBC: addiu       $v1, $v1, 0x10
        ctx->r3 = ADD32(ctx->r3, 0X10);
            goto L_00413B94;
    }
    // 0x00413BBC: addiu       $v1, $v1, 0x10
    ctx->r3 = ADD32(ctx->r3, 0X10);
    // 0x00413BC0: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x00413BC4: sw          $t0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r8;
    // 0x00413BC8: addiu       $v1, $sp, 0x10
    ctx->r3 = ADD32(ctx->r29, 0X10);
    // 0x00413BCC: addu        $v0, $s3, $zero
    ctx->r2 = ADD32(ctx->r19, 0);
    // 0x00413BD0: addiu       $a0, $s3, 0x20
    ctx->r4 = ADD32(ctx->r19, 0X20);
L_00413BD4:
    // 0x00413BD4: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x00413BD8: lw          $t1, 0x4($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X4);
    // 0x00413BDC: lw          $t2, 0x8($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X8);
    // 0x00413BE0: lw          $t3, 0xC($v0)
    ctx->r11 = MEM_W(ctx->r2, 0XC);
    // 0x00413BE4: sw          $t0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r8;
    // 0x00413BE8: sw          $t1, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r9;
    // 0x00413BEC: sw          $t2, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r10;
    // 0x00413BF0: sw          $t3, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r11;
    // 0x00413BF4: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
    // 0x00413BF8: bne         $v0, $a0, L_00413BD4
    if (ctx->r2 != ctx->r4) {
        // 0x00413BFC: addiu       $v1, $v1, 0x10
        ctx->r3 = ADD32(ctx->r3, 0X10);
            goto L_00413BD4;
    }
    // 0x00413BFC: addiu       $v1, $v1, 0x10
    ctx->r3 = ADD32(ctx->r3, 0X10);
    // 0x00413C00: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x00413C04: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    // 0x00413C08: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x00413C0C: lw          $t1, 0x4($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X4);
    // 0x00413C10: sw          $t0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r8;
    // 0x00413C14: sw          $t1, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r9;
    // 0x00413C18: jal         0x0041363C
    // 0x00413C1C: sh          $zero, 0x14($sp)
    MEM_H(0X14, ctx->r29) = 0;
    func_0041363C(rdram, ctx);
        goto after_5;
    // 0x00413C1C: sh          $zero, 0x14($sp)
    MEM_H(0X14, ctx->r29) = 0;
    after_5:
    // 0x00413C20: addiu       $v1, $sp, 0x60
    ctx->r3 = ADD32(ctx->r29, 0X60);
    // 0x00413C24: addu        $v0, $s2, $zero
    ctx->r2 = ADD32(ctx->r18, 0);
    // 0x00413C28: addiu       $a0, $s2, 0x20
    ctx->r4 = ADD32(ctx->r18, 0X20);
L_00413C2C:
    // 0x00413C2C: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x00413C30: lw          $t1, 0x4($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X4);
    // 0x00413C34: lw          $t2, 0x8($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X8);
    // 0x00413C38: lw          $t3, 0xC($v0)
    ctx->r11 = MEM_W(ctx->r2, 0XC);
    // 0x00413C3C: sw          $t0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r8;
    // 0x00413C40: sw          $t1, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r9;
    // 0x00413C44: sw          $t2, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r10;
    // 0x00413C48: sw          $t3, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r11;
    // 0x00413C4C: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
    // 0x00413C50: bne         $v0, $a0, L_00413C2C
    if (ctx->r2 != ctx->r4) {
        // 0x00413C54: addiu       $v1, $v1, 0x10
        ctx->r3 = ADD32(ctx->r3, 0X10);
            goto L_00413C2C;
    }
    // 0x00413C54: addiu       $v1, $v1, 0x10
    ctx->r3 = ADD32(ctx->r3, 0X10);
    // 0x00413C58: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x00413C5C: sw          $t0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r8;
    // 0x00413C60: addiu       $v1, $sp, 0x10
    ctx->r3 = ADD32(ctx->r29, 0X10);
    // 0x00413C64: addu        $v0, $s3, $zero
    ctx->r2 = ADD32(ctx->r19, 0);
    // 0x00413C68: addiu       $a0, $s3, 0x20
    ctx->r4 = ADD32(ctx->r19, 0X20);
L_00413C6C:
    // 0x00413C6C: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x00413C70: lw          $t1, 0x4($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X4);
    // 0x00413C74: lw          $t2, 0x8($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X8);
    // 0x00413C78: lw          $t3, 0xC($v0)
    ctx->r11 = MEM_W(ctx->r2, 0XC);
    // 0x00413C7C: sw          $t0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r8;
    // 0x00413C80: sw          $t1, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r9;
    // 0x00413C84: sw          $t2, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r10;
    // 0x00413C88: sw          $t3, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r11;
    // 0x00413C8C: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
    // 0x00413C90: bne         $v0, $a0, L_00413C6C
    if (ctx->r2 != ctx->r4) {
        // 0x00413C94: addiu       $v1, $v1, 0x10
        ctx->r3 = ADD32(ctx->r3, 0X10);
            goto L_00413C6C;
    }
    // 0x00413C94: addiu       $v1, $v1, 0x10
    ctx->r3 = ADD32(ctx->r3, 0X10);
    // 0x00413C98: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x00413C9C: addiu       $a1, $sp, 0x60
    ctx->r5 = ADD32(ctx->r29, 0X60);
    // 0x00413CA0: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x00413CA4: lw          $t1, 0x4($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X4);
    // 0x00413CA8: sw          $t0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r8;
    // 0x00413CAC: sw          $t1, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r9;
    // 0x00413CB0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00413CB4: sh          $v0, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r2;
    // 0x00413CB8: jal         0x0041363C
    // 0x00413CBC: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    func_0041363C(rdram, ctx);
        goto after_6;
    // 0x00413CBC: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    after_6:
    // 0x00413CC0: addiu       $v1, $sp, 0x88
    ctx->r3 = ADD32(ctx->r29, 0X88);
    // 0x00413CC4: addu        $v0, $s2, $zero
    ctx->r2 = ADD32(ctx->r18, 0);
    // 0x00413CC8: addiu       $a0, $s2, 0x20
    ctx->r4 = ADD32(ctx->r18, 0X20);
L_00413CCC:
    // 0x00413CCC: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x00413CD0: lw          $t1, 0x4($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X4);
    // 0x00413CD4: lw          $t2, 0x8($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X8);
    // 0x00413CD8: lw          $t3, 0xC($v0)
    ctx->r11 = MEM_W(ctx->r2, 0XC);
    // 0x00413CDC: sw          $t0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r8;
    // 0x00413CE0: sw          $t1, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r9;
    // 0x00413CE4: sw          $t2, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r10;
    // 0x00413CE8: sw          $t3, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r11;
    // 0x00413CEC: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
    // 0x00413CF0: bne         $v0, $a0, L_00413CCC
    if (ctx->r2 != ctx->r4) {
        // 0x00413CF4: addiu       $v1, $v1, 0x10
        ctx->r3 = ADD32(ctx->r3, 0X10);
            goto L_00413CCC;
    }
    // 0x00413CF4: addiu       $v1, $v1, 0x10
    ctx->r3 = ADD32(ctx->r3, 0X10);
    // 0x00413CF8: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x00413CFC: sw          $t0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r8;
    // 0x00413D00: addiu       $v1, $sp, 0x10
    ctx->r3 = ADD32(ctx->r29, 0X10);
    // 0x00413D04: addu        $v0, $s3, $zero
    ctx->r2 = ADD32(ctx->r19, 0);
    // 0x00413D08: addiu       $a0, $s3, 0x20
    ctx->r4 = ADD32(ctx->r19, 0X20);
L_00413D0C:
    // 0x00413D0C: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x00413D10: lw          $t1, 0x4($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X4);
    // 0x00413D14: lw          $t2, 0x8($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X8);
    // 0x00413D18: lw          $t3, 0xC($v0)
    ctx->r11 = MEM_W(ctx->r2, 0XC);
    // 0x00413D1C: sw          $t0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r8;
    // 0x00413D20: sw          $t1, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r9;
    // 0x00413D24: sw          $t2, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r10;
    // 0x00413D28: sw          $t3, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r11;
    // 0x00413D2C: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
    // 0x00413D30: bne         $v0, $a0, L_00413D0C
    if (ctx->r2 != ctx->r4) {
        // 0x00413D34: addiu       $v1, $v1, 0x10
        ctx->r3 = ADD32(ctx->r3, 0X10);
            goto L_00413D0C;
    }
    // 0x00413D34: addiu       $v1, $v1, 0x10
    ctx->r3 = ADD32(ctx->r3, 0X10);
    // 0x00413D38: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x00413D3C: addiu       $a1, $sp, 0x88
    ctx->r5 = ADD32(ctx->r29, 0X88);
    // 0x00413D40: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x00413D44: lw          $t1, 0x4($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X4);
    // 0x00413D48: sw          $t0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r8;
    // 0x00413D4C: sw          $t1, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r9;
    // 0x00413D50: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00413D54: sh          $v0, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r2;
    // 0x00413D58: jal         0x0041363C
    // 0x00413D5C: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    func_0041363C(rdram, ctx);
        goto after_7;
    // 0x00413D5C: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    after_7:
    // 0x00413D60: lw          $v1, 0x64($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X64);
    // 0x00413D64: lw          $v0, 0x8C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X8C);
    // 0x00413D68: lw          $a0, 0x3C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X3C);
    // 0x00413D6C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x00413D70: slt         $v0, $v1, $a0
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x00413D74: bnel        $v0, $zero, L_00413D7C
    if (ctx->r2 != 0) {
        // 0x00413D78: addu        $v1, $a0, $zero
        ctx->r3 = ADD32(ctx->r4, 0);
            goto L_00413D7C;
    }
    goto skip_1;
    // 0x00413D78: addu        $v1, $a0, $zero
    ctx->r3 = ADD32(ctx->r4, 0);
    skip_1:
L_00413D7C:
    // 0x00413D7C: sw          $v1, 0x4($s2)
    MEM_W(0X4, ctx->r18) = ctx->r3;
    // 0x00413D80: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x00413D84: lw          $v1, 0x68($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X68);
    // 0x00413D88: lw          $v0, 0x90($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X90);
    // 0x00413D8C: addu        $a0, $a0, $v1
    ctx->r4 = ADD32(ctx->r4, ctx->r3);
    // 0x00413D90: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x00413D94: srl         $v1, $v0, 31
    ctx->r3 = S32(U32(ctx->r2) >> 31);
    // 0x00413D98: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x00413D9C: sra         $v0, $v0, 1
    ctx->r2 = S32(SIGNED(ctx->r2) >> 1);
    // 0x00413DA0: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x00413DA4: j           L_00413E14
    // 0x00413DA8: sw          $a0, 0x8($s2)
    MEM_W(0X8, ctx->r18) = ctx->r4;
        goto L_00413E14;
    // 0x00413DA8: sw          $a0, 0x8($s2)
    MEM_W(0X8, ctx->r18) = ctx->r4;
    // 0x00413DAC: lw          $v0, 0x14($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X14);
    // 0x00413DB0: lwc1        $f1, 0x288($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X288);
    // 0x00413DB4: lwc1        $f0, 0x24($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X24);
    // 0x00413DB8: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00413DBC: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00413DC0: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00413DC4: lwc1        $f1, 0x2030($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X2030);
    // 0x00413DC8: cvt.s.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.fl = CVT_S_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x00413DCC: div.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = DIV_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00413DD0: trunc.w.s   $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x00413DD4: swc1        $f4, 0x4($s2)
    MEM_W(0X4, ctx->r18) = ctx->f4.u32l;
    // 0x00413DD8: lwc1        $f1, 0x28C($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X28C);
    // 0x00413DDC: lwc1        $f0, 0x28($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X28);
    // 0x00413DE0: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00413DE4: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00413DE8: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00413DEC: lwc1        $f1, 0x2034($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X2034);
    // 0x00413DF0: cvt.s.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.fl = CVT_S_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x00413DF4: div.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = DIV_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00413DF8: trunc.w.s   $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x00413DFC: swc1        $f4, 0x8($s2)
    MEM_W(0X8, ctx->r18) = ctx->f4.u32l;
    // 0x00413E00: j           L_00413E14
    // 0x00413E04: nop

        goto L_00413E14;
    // 0x00413E04: nop

    // 0x00413E08: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00413E0C: sw          $v0, 0x4($s2)
    MEM_W(0X4, ctx->r18) = ctx->r2;
L_00413E10:
    // 0x00413E10: sw          $v0, 0x8($s2)
    MEM_W(0X8, ctx->r18) = ctx->r2;
L_00413E14:
    // 0x00413E14: lh          $v0, 0xC($s3)
    ctx->r2 = MEM_H(ctx->r19, 0XC);
    // 0x00413E18: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x00413E1C: lw          $v1, 0x2030($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X2030);
    // 0x00413E20: mult        $v0, $v1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x00413E24: mflo        $v0
    ctx->r2 = lo;
    // 0x00413E28: lui         $v1, 0xE6C2
    ctx->r3 = S32(0XE6C2 << 16);
    // 0x00413E2C: ori         $v1, $v1, 0xB449
    ctx->r3 = ctx->r3 | 0XB449;
    // 0x00413E30: mult        $v0, $v1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x00413E34: lw          $a0, 0x8($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X8);
    // 0x00413E38: mfhi        $v1
    ctx->r3 = hi;
    // 0x00413E3C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x00413E40: sra         $v1, $v1, 8
    ctx->r3 = S32(SIGNED(ctx->r3) >> 8);
    // 0x00413E44: sra         $v0, $v0, 31
    ctx->r2 = S32(SIGNED(ctx->r2) >> 31);
    // 0x00413E48: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x00413E4C: mtc1        $v1, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r3;
    // 0x00413E50: cvt.s.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.fl = CVT_S_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x00413E54: andi        $v0, $a0, 0x8000
    ctx->r2 = ctx->r4 & 0X8000;
    // 0x00413E58: bne         $v0, $zero, L_00413E8C
    if (ctx->r2 != 0) {
        // 0x00413E5C: andi        $v0, $a0, 0x4000
        ctx->r2 = ctx->r4 & 0X4000;
            goto L_00413E8C;
    }
    // 0x00413E5C: andi        $v0, $a0, 0x4000
    ctx->r2 = ctx->r4 & 0X4000;
    // 0x00413E60: beq         $v0, $zero, L_00413E84
    if (ctx->r2 == 0) {
        // 0x00413E64: nop
    
            goto L_00413E84;
    }
    // 0x00413E64: nop

    // 0x00413E68: lwc1        $f0, 0x18($s2)
    ctx->f0.u32l = MEM_W(ctx->r18, 0X18);
    // 0x00413E6C: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00413E70: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x00413E74: trunc.w.s   $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x00413E78: swc1        $f4, 0x14($s2)
    MEM_W(0X14, ctx->r18) = ctx->f4.u32l;
    // 0x00413E7C: j           L_00413E8C
    // 0x00413E80: nop

        goto L_00413E8C;
    // 0x00413E80: nop

L_00413E84:
    // 0x00413E84: trunc.w.s   $f4, $f1
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 1);
    ctx->f4.u32l = TRUNC_W_S(ctx->f1.fl);
    // 0x00413E88: swc1        $f4, 0x14($s2)
    MEM_W(0X14, ctx->r18) = ctx->f4.u32l;
L_00413E8C:
    // 0x00413E8C: lwc1        $f0, 0xC($s2)
    ctx->f0.u32l = MEM_W(ctx->r18, 0XC);
    // 0x00413E90: lwc1        $f1, 0x4($s2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r18, 0X4);
    // 0x00413E94: cvt.s.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.fl = CVT_S_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x00413E98: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x00413E9C: lwc1        $f0, 0x14($s2)
    ctx->f0.u32l = MEM_W(ctx->r18, 0X14);
    // 0x00413EA0: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00413EA4: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x00413EA8: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x00413EAC: lw          $v0, 0x2034($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2034);
    // 0x00413EB0: trunc.w.s   $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x00413EB4: swc1        $f4, 0x18($s2)
    MEM_W(0X18, ctx->r18) = ctx->f4.u32l;
    // 0x00413EB8: lh          $v1, 0xE($s3)
    ctx->r3 = MEM_H(ctx->r19, 0XE);
    // 0x00413EBC: mult        $v1, $v0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x00413EC0: mflo        $v1
    ctx->r3 = lo;
    // 0x00413EC4: lui         $v0, 0x939A
    ctx->r2 = S32(0X939A << 16);
    // 0x00413EC8: ori         $v0, $v0, 0x85C5
    ctx->r2 = ctx->r2 | 0X85C5;
    // 0x00413ECC: mult        $v1, $v0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x00413ED0: lw          $a0, 0x8($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X8);
    // 0x00413ED4: mfhi        $t4
    ctx->r12 = hi;
    // 0x00413ED8: addu        $v0, $t4, $v1
    ctx->r2 = ADD32(ctx->r12, ctx->r3);
    // 0x00413EDC: sra         $v0, $v0, 7
    ctx->r2 = S32(SIGNED(ctx->r2) >> 7);
    // 0x00413EE0: sra         $v1, $v1, 31
    ctx->r3 = S32(SIGNED(ctx->r3) >> 31);
    // 0x00413EE4: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x00413EE8: mtc1        $v0, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r2;
    // 0x00413EEC: cvt.s.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.fl = CVT_S_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x00413EF0: lui         $v0, 0x2
    ctx->r2 = S32(0X2 << 16);
    // 0x00413EF4: and         $v0, $a0, $v0
    ctx->r2 = ctx->r4 & ctx->r2;
    // 0x00413EF8: bne         $v0, $zero, L_00413F30
    if (ctx->r2 != 0) {
        // 0x00413EFC: lui         $v0, 0x1
        ctx->r2 = S32(0X1 << 16);
            goto L_00413F30;
    }
    // 0x00413EFC: lui         $v0, 0x1
    ctx->r2 = S32(0X1 << 16);
    // 0x00413F00: and         $v0, $a0, $v0
    ctx->r2 = ctx->r4 & ctx->r2;
    // 0x00413F04: beq         $v0, $zero, L_00413F28
    if (ctx->r2 == 0) {
        // 0x00413F08: nop
    
            goto L_00413F28;
    }
    // 0x00413F08: nop

    // 0x00413F0C: lwc1        $f0, 0x20($s2)
    ctx->f0.u32l = MEM_W(ctx->r18, 0X20);
    // 0x00413F10: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00413F14: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x00413F18: trunc.w.s   $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x00413F1C: swc1        $f4, 0x1C($s2)
    MEM_W(0X1C, ctx->r18) = ctx->f4.u32l;
    // 0x00413F20: j           L_00413F30
    // 0x00413F24: nop

        goto L_00413F30;
    // 0x00413F24: nop

L_00413F28:
    // 0x00413F28: trunc.w.s   $f4, $f1
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 1);
    ctx->f4.u32l = TRUNC_W_S(ctx->f1.fl);
    // 0x00413F2C: swc1        $f4, 0x1C($s2)
    MEM_W(0X1C, ctx->r18) = ctx->f4.u32l;
L_00413F30:
    // 0x00413F30: lwc1        $f0, 0x10($s2)
    ctx->f0.u32l = MEM_W(ctx->r18, 0X10);
    // 0x00413F34: lwc1        $f1, 0x8($s2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r18, 0X8);
    // 0x00413F38: cvt.s.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.fl = CVT_S_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x00413F3C: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x00413F40: lwc1        $f0, 0x1C($s2)
    ctx->f0.u32l = MEM_W(ctx->r18, 0X1C);
    // 0x00413F44: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00413F48: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x00413F4C: trunc.w.s   $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x00413F50: swc1        $f4, 0x20($s2)
    MEM_W(0X20, ctx->r18) = ctx->f4.u32l;
    // 0x00413F54: lw          $ra, 0xC0($sp)
    ctx->r31 = MEM_W(ctx->r29, 0XC0);
    // 0x00413F58: lw          $s3, 0xBC($sp)
    ctx->r19 = MEM_W(ctx->r29, 0XBC);
    // 0x00413F5C: lw          $s2, 0xB8($sp)
    ctx->r18 = MEM_W(ctx->r29, 0XB8);
    // 0x00413F60: lw          $s1, 0xB4($sp)
    ctx->r17 = MEM_W(ctx->r29, 0XB4);
    // 0x00413F64: lw          $s0, 0xB0($sp)
    ctx->r16 = MEM_W(ctx->r29, 0XB0);
    // 0x00413F68: ldc1        $f20, 0xC8($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0XC8);
    // 0x00413F6C: jr          $ra
    // 0x00413F70: addiu       $sp, $sp, 0xD0
    ctx->r29 = ADD32(ctx->r29, 0XD0);
    return;
    // 0x00413F70: addiu       $sp, $sp, 0xD0
    ctx->r29 = ADD32(ctx->r29, 0XD0);
;}
RECOMP_FUNC void entry_004137C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004137C8: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x004137CC: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x004137D0: jal         0x004163C0
    // 0x004137D4: addu        $a2, $a1, $zero
    ctx->r6 = ADD32(ctx->r5, 0);
    func_004163C0(rdram, ctx);
        goto after_0;
    // 0x004137D4: addu        $a2, $a1, $zero
    ctx->r6 = ADD32(ctx->r5, 0);
    after_0:
    // 0x004137D8: trunc.w.s   $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x004137DC: swc1        $f4, 0x4($s2)
    MEM_W(0X4, ctx->r18) = ctx->f4.u32l;
    // 0x004137E0: j           L_0041384C
    // 0x004137E4: nop

        goto L_0041384C;
    // 0x004137E4: nop

    // 0x004137E8: lh          $v1, 0x4($s3)
    ctx->r3 = MEM_H(ctx->r19, 0X4);
    // 0x004137EC: bne         $v1, $v0, L_00413804
    if (ctx->r3 != ctx->r2) {
        // 0x004137F0: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_00413804;
    }
    // 0x004137F0: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x004137F4: jal         0x00413230
    // 0x004137F8: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    func_00413230(rdram, ctx);
        goto after_1;
    // 0x004137F8: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    after_1:
    // 0x004137FC: j           L_00413808
    // 0x00413800: nop

        goto L_00413808;
    // 0x00413800: nop

L_00413804:
    // 0x00413804: lw          $v0, 0x14($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X14);
L_00413808:
    // 0x00413808: beq         $v0, $zero, L_0041383C
    if (ctx->r2 == 0) {
        // 0x0041380C: nop
    
            goto L_0041383C;
    }
    // 0x0041380C: nop

    // 0x00413810: lbu         $v1, 0x0($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X0);
    // 0x00413814: beq         $v1, $zero, L_0041383C
    if (ctx->r3 == 0) {
        // 0x00413818: nop
    
            goto L_0041383C;
    }
    // 0x00413818: nop

    // 0x0041381C: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
L_00413820:
    // 0x00413820: beq         $v1, $a0, L_0041383C
    if (ctx->r3 == ctx->r4) {
        // 0x00413824: addiu       $v0, $v0, 0x1
        ctx->r2 = ADD32(ctx->r2, 0X1);
            goto L_0041383C;
    }
    // 0x00413824: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x00413828: beq         $v0, $zero, L_0041383C
    if (ctx->r2 == 0) {
        // 0x0041382C: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_0041383C;
    }
    // 0x0041382C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x00413830: lbu         $v1, 0x0($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X0);
    // 0x00413834: bne         $v1, $zero, L_00413820
    if (ctx->r3 != 0) {
        // 0x00413838: nop
    
            goto L_00413820;
    }
    // 0x00413838: nop

L_0041383C:
    // 0x0041383C: lw          $v0, 0x4($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X4);
    // 0x00413840: mult        $s0, $v0
    result = S64(S32(ctx->r16)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x00413844: mflo        $t0
    ctx->r8 = lo;
    // 0x00413848: sw          $t0, 0x4($s2)
    MEM_W(0X4, ctx->r18) = ctx->r8;
L_0041384C:
    // 0x0041384C: lw          $v0, 0x8($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X8);
    // 0x00413850: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x00413854: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x00413858: beq         $v0, $zero, L_00413888
    if (ctx->r2 == 0) {
        // 0x0041385C: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_00413888;
    }
    // 0x0041385C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x00413860: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00413864: lwc1        $f1, 0xBB8($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0XBB8);
    // 0x00413868: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0041386C: lwc1        $f0, 0x2034($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X2034);
    // 0x00413870: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00413874: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00413878: trunc.w.s   $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x0041387C: swc1        $f4, 0x8($s2)
    MEM_W(0X8, ctx->r18) = ctx->f4.u32l;
    // 0x00413880: j           L_0041391C
    // 0x00413884: nop

        goto L_0041391C;
    // 0x00413884: nop

L_00413888:
    // 0x00413888: lw          $v1, 0x0($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X0);
    // 0x0041388C: bne         $v1, $v0, L_004138E4
    if (ctx->r3 != ctx->r2) {
        // 0x00413890: nop
    
            goto L_004138E4;
    }
    // 0x00413890: nop

    // 0x00413894: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x00413898: lw          $v1, 0x2034($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X2034);
    // 0x0041389C: slti        $v0, $v1, 0xDF
    ctx->r2 = SIGNED(ctx->r3) < 0XDF ? 1 : 0;
    // 0x004138A0: bne         $v0, $zero, L_004138E4
    if (ctx->r2 != 0) {
        // 0x004138A4: nop
    
            goto L_004138E4;
    }
    // 0x004138A4: nop

    // 0x004138A8: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x004138AC: lwc1        $f1, 0xBBC($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0XBBC);
    // 0x004138B0: lwc1        $f0, 0x8($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X8);
    // 0x004138B4: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x004138B8: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x004138BC: mtc1        $v1, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r3;
    // 0x004138C0: cvt.s.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.fl = CVT_S_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x004138C4: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x004138C8: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x004138CC: lwc1        $f1, 0xBC0($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0XBC0);
    // 0x004138D0: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x004138D4: trunc.w.s   $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x004138D8: swc1        $f4, 0x8($s2)
    MEM_W(0X8, ctx->r18) = ctx->f4.u32l;
    // 0x004138DC: j           L_0041391C
    // 0x004138E0: nop

        goto L_0041391C;
    // 0x004138E0: nop

L_004138E4:
    // 0x004138E4: lw          $v1, 0x8($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X8);
    // 0x004138E8: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x004138EC: lw          $v0, 0x2034($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2034);
    // 0x004138F0: mult        $v1, $v0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x004138F4: mflo        $v1
    ctx->r3 = lo;
    // 0x004138F8: lui         $v0, 0x939A
    ctx->r2 = S32(0X939A << 16);
    // 0x004138FC: ori         $v0, $v0, 0x85C5
    ctx->r2 = ctx->r2 | 0X85C5;
    // 0x00413900: mult        $v1, $v0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x00413904: mfhi        $t4
    ctx->r12 = hi;
    // 0x00413908: addu        $v0, $t4, $v1
    ctx->r2 = ADD32(ctx->r12, ctx->r3);
    // 0x0041390C: sra         $v0, $v0, 7
    ctx->r2 = S32(SIGNED(ctx->r2) >> 7);
    // 0x00413910: sra         $v1, $v1, 31
    ctx->r3 = S32(SIGNED(ctx->r3) >> 31);
    // 0x00413914: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x00413918: sw          $v0, 0x8($s2)
    MEM_W(0X8, ctx->r18) = ctx->r2;
L_0041391C:
    // 0x0041391C: lw          $v1, 0x4($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X4);
    // 0x00413920: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x00413924: lw          $v0, 0x2030($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2030);
    // 0x00413928: mult        $v1, $v0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x0041392C: mflo        $v1
    ctx->r3 = lo;
    // 0x00413930: lui         $v0, 0xE6C2
    ctx->r2 = S32(0XE6C2 << 16);
    // 0x00413934: ori         $v0, $v0, 0xB449
    ctx->r2 = ctx->r2 | 0XB449;
    // 0x00413938: mult        $v1, $v0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x0041393C: mfhi        $t4
    ctx->r12 = hi;
    // 0x00413940: addu        $v0, $t4, $v1
    ctx->r2 = ADD32(ctx->r12, ctx->r3);
    // 0x00413944: sra         $v0, $v0, 8
    ctx->r2 = S32(SIGNED(ctx->r2) >> 8);
    // 0x00413948: sra         $v1, $v1, 31
    ctx->r3 = S32(SIGNED(ctx->r3) >> 31);
    // 0x0041394C: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x00413950: j           L_00413E14
    // 0x00413954: sw          $v0, 0x4($s2)
    MEM_W(0X4, ctx->r18) = ctx->r2;
        goto L_00413E14;
    // 0x00413954: sw          $v0, 0x4($s2)
    MEM_W(0X4, ctx->r18) = ctx->r2;
    // 0x00413958: lw          $v0, 0x8($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X8);
    // 0x0041395C: andi        $v1, $v0, 0x3FE0
    ctx->r3 = ctx->r2 & 0X3FE0;
    // 0x00413960: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x00413964: beq         $v1, $v0, L_00413A0C
    if (ctx->r3 == ctx->r2) {
        // 0x00413968: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_00413A0C;
    }
    // 0x00413968: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0041396C: sltiu       $v0, $v1, 0x201
    ctx->r2 = ctx->r3 < 0X201 ? 1 : 0;
    // 0x00413970: beq         $v0, $zero, L_004139BC
    if (ctx->r2 == 0) {
        // 0x00413974: addiu       $v0, $zero, 0x40
        ctx->r2 = ADD32(0, 0X40);
            goto L_004139BC;
    }
    // 0x00413974: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x00413978: beql        $v1, $v0, L_00413A20
    if (ctx->r3 == ctx->r2) {
        // 0x0041397C: addiu       $a0, $zero, 0x1
        ctx->r4 = ADD32(0, 0X1);
            goto L_00413A20;
    }
    goto skip_0;
    // 0x0041397C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    skip_0:
    // 0x00413980: sltiu       $v0, $v1, 0x41
    ctx->r2 = ctx->r3 < 0X41 ? 1 : 0;
    // 0x00413984: beq         $v0, $zero, L_0041399C
    if (ctx->r2 == 0) {
        // 0x00413988: addiu       $v0, $zero, 0x20
        ctx->r2 = ADD32(0, 0X20);
            goto L_0041399C;
    }
    // 0x00413988: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x0041398C: beq         $v1, $v0, L_00413A24
    if (ctx->r3 == ctx->r2) {
        // 0x00413990: sll         $v0, $a0, 3
        ctx->r2 = S32(ctx->r4 << 3);
            goto L_00413A24;
    }
    // 0x00413990: sll         $v0, $a0, 3
    ctx->r2 = S32(ctx->r4 << 3);
    // 0x00413994: j           L_00413A28
    // 0x00413998: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
        goto L_00413A28;
    // 0x00413998: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
L_0041399C:
    // 0x0041399C: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x004139A0: beq         $v1, $v0, L_00413A20
    if (ctx->r3 == ctx->r2) {
        // 0x004139A4: addiu       $a0, $zero, 0x2
        ctx->r4 = ADD32(0, 0X2);
            goto L_00413A20;
    }
    // 0x004139A4: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x004139A8: addiu       $v0, $zero, 0x100
    ctx->r2 = ADD32(0, 0X100);
    // 0x004139AC: beq         $v1, $v0, L_00413A04
    if (ctx->r3 == ctx->r2) {
        // 0x004139B0: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_00413A04;
    }
    // 0x004139B0: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x004139B4: j           L_00413A24
    // 0x004139B8: sll         $v0, $a0, 3
    ctx->r2 = S32(ctx->r4 << 3);
        goto L_00413A24;
    // 0x004139B8: sll         $v0, $a0, 3
    ctx->r2 = S32(ctx->r4 << 3);
L_004139BC:
    // 0x004139BC: addiu       $v0, $zero, 0x800
    ctx->r2 = ADD32(0, 0X800);
    // 0x004139C0: beq         $v1, $v0, L_00413A20
    if (ctx->r3 == ctx->r2) {
        // 0x004139C4: addiu       $a0, $zero, 0x6
        ctx->r4 = ADD32(0, 0X6);
            goto L_00413A20;
    }
    // 0x004139C4: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    // 0x004139C8: sltiu       $v0, $v1, 0x801
    ctx->r2 = ctx->r3 < 0X801 ? 1 : 0;
    // 0x004139CC: beq         $v0, $zero, L_004139E4
    if (ctx->r2 == 0) {
        // 0x004139D0: addiu       $v0, $zero, 0x400
        ctx->r2 = ADD32(0, 0X400);
            goto L_004139E4;
    }
    // 0x004139D0: addiu       $v0, $zero, 0x400
    ctx->r2 = ADD32(0, 0X400);
    // 0x004139D4: beq         $v1, $v0, L_00413A14
    if (ctx->r3 == ctx->r2) {
        // 0x004139D8: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_00413A14;
    }
    // 0x004139D8: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x004139DC: j           L_00413A24
    // 0x004139E0: sll         $v0, $a0, 3
    ctx->r2 = S32(ctx->r4 << 3);
        goto L_00413A24;
    // 0x004139E0: sll         $v0, $a0, 3
    ctx->r2 = S32(ctx->r4 << 3);
L_004139E4:
    // 0x004139E4: addiu       $v0, $zero, 0x1000
    ctx->r2 = ADD32(0, 0X1000);
    // 0x004139E8: beq         $v1, $v0, L_00413A20
    if (ctx->r3 == ctx->r2) {
        // 0x004139EC: addiu       $a0, $zero, 0x7
        ctx->r4 = ADD32(0, 0X7);
            goto L_00413A20;
    }
    // 0x004139EC: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    // 0x004139F0: addiu       $v0, $zero, 0x2000
    ctx->r2 = ADD32(0, 0X2000);
    // 0x004139F4: beq         $v1, $v0, L_00413A1C
    if (ctx->r3 == ctx->r2) {
        // 0x004139F8: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_00413A1C;
    }
    // 0x004139F8: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x004139FC: j           L_00413A24
    // 0x00413A00: sll         $v0, $a0, 3
    ctx->r2 = S32(ctx->r4 << 3);
        goto L_00413A24;
    // 0x00413A00: sll         $v0, $a0, 3
    ctx->r2 = S32(ctx->r4 << 3);
L_00413A04:
    // 0x00413A04: j           L_00413A20
    // 0x00413A08: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
        goto L_00413A20;
    // 0x00413A08: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
L_00413A0C:
    // 0x00413A0C: j           L_00413A20
    // 0x00413A10: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
        goto L_00413A20;
    // 0x00413A10: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
L_00413A14:
    // 0x00413A14: j           L_00413A20
    // 0x00413A18: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
        goto L_00413A20;
    // 0x00413A18: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
L_00413A1C:
    // 0x00413A1C: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
L_00413A20:
    // 0x00413A20: sll         $v0, $a0, 3
    ctx->r2 = S32(ctx->r4 << 3);
L_00413A24:
    // 0x00413A24: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
L_00413A28:
    // 0x00413A28: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x00413A2C: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x00413A30: addiu       $v1, $v1, 0x1BD4
    ctx->r3 = ADD32(ctx->r3, 0X1BD4);
    // 0x00413A34: addu        $s1, $v0, $v1
    ctx->r17 = ADD32(ctx->r2, ctx->r3);
    // 0x00413A38: lw          $v0, 0x4($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X4);
    // 0x00413A3C: sw          $v0, 0x4($s2)
    MEM_W(0X4, ctx->r18) = ctx->r2;
    // 0x00413A40: lw          $v1, 0x8($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X8);
    // 0x00413A44: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x00413A48: lw          $v0, 0x2034($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2034);
    // 0x00413A4C: mult        $v1, $v0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x00413A50: mflo        $v1
    ctx->r3 = lo;
    // 0x00413A54: lui         $v0, 0x939A
    ctx->r2 = S32(0X939A << 16);
    // 0x00413A58: ori         $v0, $v0, 0x85C5
    ctx->r2 = ctx->r2 | 0X85C5;
    // 0x00413A5C: mult        $v1, $v0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x00413A60: mfhi        $t4
    ctx->r12 = hi;
    // 0x00413A64: addu        $v0, $t4, $v1
    ctx->r2 = ADD32(ctx->r12, ctx->r3);
    // 0x00413A68: sra         $v0, $v0, 7
    ctx->r2 = S32(SIGNED(ctx->r2) >> 7);
    // 0x00413A6C: sra         $v1, $v1, 31
    ctx->r3 = S32(SIGNED(ctx->r3) >> 31);
    // 0x00413A70: j           L_00413E10
    // 0x00413A74: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
        goto L_00413E10;
    // 0x00413A74: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x00413A78: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x00413A7C: addiu       $a0, $a0, -0x5378
    ctx->r4 = ADD32(ctx->r4, -0X5378);
    // 0x00413A80: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x00413A84: addiu       $v0, $zero, 0xD
    ctx->r2 = ADD32(0, 0XD);
    // 0x00413A88: bne         $v1, $v0, L_00413AA0
    if (ctx->r3 != ctx->r2) {
        // 0x00413A8C: lui         $v1, 0x4000
        ctx->r3 = S32(0X4000 << 16);
            goto L_00413AA0;
    }
    // 0x00413A8C: lui         $v1, 0x4000
    ctx->r3 = S32(0X4000 << 16);
    // 0x00413A90: lw          $v0, 0x8($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X8);
    // 0x00413A94: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x00413A98: bne         $v0, $zero, L_00413ACC
    if (ctx->r2 != 0) {
        // 0x00413A9C: addiu       $v0, $zero, 0x11C
        ctx->r2 = ADD32(0, 0X11C);
            goto L_00413ACC;
    }
    // 0x00413A9C: addiu       $v0, $zero, 0x11C
    ctx->r2 = ADD32(0, 0X11C);
L_00413AA0:
    // 0x00413AA0: lbu         $v0, -0x197($a0)
    ctx->r2 = MEM_BU(ctx->r4, -0X197);
    // 0x00413AA4: beq         $v0, $zero, L_00413ADC
    if (ctx->r2 == 0) {
        // 0x00413AA8: nop
    
            goto L_00413ADC;
    }
    // 0x00413AA8: nop

    // 0x00413AAC: lw          $v0, 0x8($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X8);
    // 0x00413AB0: bgez        $v0, L_00413ADC
    if (SIGNED(ctx->r2) >= 0) {
        // 0x00413AB4: nop
    
            goto L_00413ADC;
    }
    // 0x00413AB4: nop

    // 0x00413AB8: jal         0x00266B80
    // 0x00413ABC: nop

    func_00266B80(rdram, ctx);
        goto after_2;
    // 0x00413ABC: nop

    after_2:
    // 0x00413AC0: lui         $v1, 0x40
    ctx->r3 = S32(0X40 << 16);
    // 0x00413AC4: bne         $v0, $v1, L_00413ADC
    if (ctx->r2 != ctx->r3) {
        // 0x00413AC8: addiu       $v0, $zero, 0x11C
        ctx->r2 = ADD32(0, 0X11C);
            goto L_00413ADC;
    }
    // 0x00413AC8: addiu       $v0, $zero, 0x11C
    ctx->r2 = ADD32(0, 0X11C);
L_00413ACC:
    // 0x00413ACC: sw          $v0, 0x4($s2)
    MEM_W(0X4, ctx->r18) = ctx->r2;
    // 0x00413AD0: addiu       $v0, $zero, 0xDE
    ctx->r2 = ADD32(0, 0XDE);
    // 0x00413AD4: j           L_00413AF0
    // 0x00413AD8: sw          $v0, 0x8($s2)
    MEM_W(0X8, ctx->r18) = ctx->r2;
        goto L_00413AF0;
    // 0x00413AD8: sw          $v0, 0x8($s2)
    MEM_W(0X8, ctx->r18) = ctx->r2;
L_00413ADC:
    // 0x00413ADC: lw          $a0, 0x14($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X14);
    // 0x00413AE0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x00413AE4: addiu       $a2, $s2, 0x4
    ctx->r6 = ADD32(ctx->r18, 0X4);
    // 0x00413AE8: jal         0x0027AEA8
    // 0x00413AEC: addiu       $a3, $s2, 0x8
    ctx->r7 = ADD32(ctx->r18, 0X8);
    func_0027AEA8(rdram, ctx);
        goto after_3;
    // 0x00413AEC: addiu       $a3, $s2, 0x8
    ctx->r7 = ADD32(ctx->r18, 0X8);
    after_3:
L_00413AF0:
    // 0x00413AF0: lw          $v0, 0x8($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X8);
    // 0x00413AF4: lui         $v1, 0x1000
    ctx->r3 = S32(0X1000 << 16);
    // 0x00413AF8: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x00413AFC: beq         $v0, $zero, L_00413B4C
    if (ctx->r2 == 0) {
        // 0x00413B00: nop
    
            goto L_00413B4C;
    }
    // 0x00413B00: nop

    // 0x00413B04: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x00413B08: lwc1        $f3, 0x4($s2)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r18, 0X4);
    // 0x00413B0C: cvt.s.w     $f3, $f3
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    ctx->f3.fl = CVT_S_W(ctx->f_odd[(3 - 1) * 2]);
    // 0x00413B10: c.eq.s      $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f3.fl == ctx->f0.fl;
    // 0x00413B14: nop

    // 0x00413B18: bc1t        L_00413B4C
    if (c1cs) {
        // 0x00413B1C: nop
    
            goto L_00413B4C;
    }
    // 0x00413B1C: nop

    // 0x00413B20: lwc1        $f2, 0x8($s2)
    ctx->f2.u32l = MEM_W(ctx->r18, 0X8);
    // 0x00413B24: cvt.s.w     $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    ctx->f2.fl = CVT_S_W(ctx->f2.u32l);
    // 0x00413B28: c.eq.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl == ctx->f0.fl;
    // 0x00413B2C: nop

    // 0x00413B30: bc1t        L_00413B4C
    if (c1cs) {
        // 0x00413B34: nop
    
            goto L_00413B4C;
    }
    // 0x00413B34: nop

    // 0x00413B38: lwc1        $f0, 0x288($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X288);
    // 0x00413B3C: lwc1        $f1, 0x28C($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X28C);
    // 0x00413B40: div.s       $f3, $f0, $f3
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f3.fl = DIV_S(ctx->f0.fl, ctx->f3.fl);
    // 0x00413B44: j           L_00413B7C
    // 0x00413B48: div.s       $f0, $f1, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = DIV_S(ctx->f1.fl, ctx->f2.fl);
        goto L_00413B7C;
    // 0x00413B48: div.s       $f0, $f1, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = DIV_S(ctx->f1.fl, ctx->f2.fl);
L_00413B4C:
    // 0x00413B4C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00413B50: lwc1        $f1, 0xBC4($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0XBC4);
    // 0x00413B54: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00413B58: lwc1        $f0, 0x2030($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X2030);
    // 0x00413B5C: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00413B60: mul.s       $f3, $f0, $f1
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f3.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00413B64: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00413B68: lwc1        $f1, 0xBC8($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0XBC8);
    // 0x00413B6C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00413B70: lwc1        $f0, 0x2034($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X2034);
    // 0x00413B74: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00413B78: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
L_00413B7C:
    // 0x00413B7C: swc1        $f3, 0xC($s2)
    MEM_W(0XC, ctx->r18) = ctx->f_odd[(3 - 1) * 2];
    // 0x00413B80: j           L_00413E14
    // 0x00413B84: swc1        $f0, 0x10($s2)
    MEM_W(0X10, ctx->r18) = ctx->f0.u32l;
        goto L_00413E14;
    // 0x00413B84: swc1        $f0, 0x10($s2)
    MEM_W(0X10, ctx->r18) = ctx->f0.u32l;
    // 0x00413B88: addiu       $v1, $sp, 0x38
    ctx->r3 = ADD32(ctx->r29, 0X38);
    // 0x00413B8C: addu        $v0, $s2, $zero
    ctx->r2 = ADD32(ctx->r18, 0);
    // 0x00413B90: addiu       $a0, $s2, 0x20
    ctx->r4 = ADD32(ctx->r18, 0X20);
L_00413B94:
    // 0x00413B94: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x00413B98: lw          $t1, 0x4($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X4);
    // 0x00413B9C: lw          $t2, 0x8($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X8);
    // 0x00413BA0: lw          $t3, 0xC($v0)
    ctx->r11 = MEM_W(ctx->r2, 0XC);
    // 0x00413BA4: sw          $t0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r8;
    // 0x00413BA8: sw          $t1, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r9;
    // 0x00413BAC: sw          $t2, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r10;
    // 0x00413BB0: sw          $t3, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r11;
    // 0x00413BB4: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
    // 0x00413BB8: bne         $v0, $a0, L_00413B94
    if (ctx->r2 != ctx->r4) {
        // 0x00413BBC: addiu       $v1, $v1, 0x10
        ctx->r3 = ADD32(ctx->r3, 0X10);
            goto L_00413B94;
    }
    // 0x00413BBC: addiu       $v1, $v1, 0x10
    ctx->r3 = ADD32(ctx->r3, 0X10);
    // 0x00413BC0: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x00413BC4: sw          $t0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r8;
    // 0x00413BC8: addiu       $v1, $sp, 0x10
    ctx->r3 = ADD32(ctx->r29, 0X10);
    // 0x00413BCC: addu        $v0, $s3, $zero
    ctx->r2 = ADD32(ctx->r19, 0);
    // 0x00413BD0: addiu       $a0, $s3, 0x20
    ctx->r4 = ADD32(ctx->r19, 0X20);
L_00413BD4:
    // 0x00413BD4: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x00413BD8: lw          $t1, 0x4($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X4);
    // 0x00413BDC: lw          $t2, 0x8($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X8);
    // 0x00413BE0: lw          $t3, 0xC($v0)
    ctx->r11 = MEM_W(ctx->r2, 0XC);
    // 0x00413BE4: sw          $t0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r8;
    // 0x00413BE8: sw          $t1, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r9;
    // 0x00413BEC: sw          $t2, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r10;
    // 0x00413BF0: sw          $t3, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r11;
    // 0x00413BF4: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
    // 0x00413BF8: bne         $v0, $a0, L_00413BD4
    if (ctx->r2 != ctx->r4) {
        // 0x00413BFC: addiu       $v1, $v1, 0x10
        ctx->r3 = ADD32(ctx->r3, 0X10);
            goto L_00413BD4;
    }
    // 0x00413BFC: addiu       $v1, $v1, 0x10
    ctx->r3 = ADD32(ctx->r3, 0X10);
    // 0x00413C00: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x00413C04: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    // 0x00413C08: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x00413C0C: lw          $t1, 0x4($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X4);
    // 0x00413C10: sw          $t0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r8;
    // 0x00413C14: sw          $t1, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r9;
    // 0x00413C18: jal         0x0041363C
    // 0x00413C1C: sh          $zero, 0x14($sp)
    MEM_H(0X14, ctx->r29) = 0;
    func_0041363C(rdram, ctx);
        goto after_4;
    // 0x00413C1C: sh          $zero, 0x14($sp)
    MEM_H(0X14, ctx->r29) = 0;
    after_4:
    // 0x00413C20: addiu       $v1, $sp, 0x60
    ctx->r3 = ADD32(ctx->r29, 0X60);
    // 0x00413C24: addu        $v0, $s2, $zero
    ctx->r2 = ADD32(ctx->r18, 0);
    // 0x00413C28: addiu       $a0, $s2, 0x20
    ctx->r4 = ADD32(ctx->r18, 0X20);
L_00413C2C:
    // 0x00413C2C: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x00413C30: lw          $t1, 0x4($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X4);
    // 0x00413C34: lw          $t2, 0x8($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X8);
    // 0x00413C38: lw          $t3, 0xC($v0)
    ctx->r11 = MEM_W(ctx->r2, 0XC);
    // 0x00413C3C: sw          $t0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r8;
    // 0x00413C40: sw          $t1, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r9;
    // 0x00413C44: sw          $t2, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r10;
    // 0x00413C48: sw          $t3, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r11;
    // 0x00413C4C: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
    // 0x00413C50: bne         $v0, $a0, L_00413C2C
    if (ctx->r2 != ctx->r4) {
        // 0x00413C54: addiu       $v1, $v1, 0x10
        ctx->r3 = ADD32(ctx->r3, 0X10);
            goto L_00413C2C;
    }
    // 0x00413C54: addiu       $v1, $v1, 0x10
    ctx->r3 = ADD32(ctx->r3, 0X10);
    // 0x00413C58: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x00413C5C: sw          $t0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r8;
    // 0x00413C60: addiu       $v1, $sp, 0x10
    ctx->r3 = ADD32(ctx->r29, 0X10);
    // 0x00413C64: addu        $v0, $s3, $zero
    ctx->r2 = ADD32(ctx->r19, 0);
    // 0x00413C68: addiu       $a0, $s3, 0x20
    ctx->r4 = ADD32(ctx->r19, 0X20);
L_00413C6C:
    // 0x00413C6C: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x00413C70: lw          $t1, 0x4($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X4);
    // 0x00413C74: lw          $t2, 0x8($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X8);
    // 0x00413C78: lw          $t3, 0xC($v0)
    ctx->r11 = MEM_W(ctx->r2, 0XC);
    // 0x00413C7C: sw          $t0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r8;
    // 0x00413C80: sw          $t1, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r9;
    // 0x00413C84: sw          $t2, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r10;
    // 0x00413C88: sw          $t3, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r11;
    // 0x00413C8C: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
    // 0x00413C90: bne         $v0, $a0, L_00413C6C
    if (ctx->r2 != ctx->r4) {
        // 0x00413C94: addiu       $v1, $v1, 0x10
        ctx->r3 = ADD32(ctx->r3, 0X10);
            goto L_00413C6C;
    }
    // 0x00413C94: addiu       $v1, $v1, 0x10
    ctx->r3 = ADD32(ctx->r3, 0X10);
    // 0x00413C98: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x00413C9C: addiu       $a1, $sp, 0x60
    ctx->r5 = ADD32(ctx->r29, 0X60);
    // 0x00413CA0: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x00413CA4: lw          $t1, 0x4($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X4);
    // 0x00413CA8: sw          $t0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r8;
    // 0x00413CAC: sw          $t1, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r9;
    // 0x00413CB0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00413CB4: sh          $v0, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r2;
    // 0x00413CB8: jal         0x0041363C
    // 0x00413CBC: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    func_0041363C(rdram, ctx);
        goto after_5;
    // 0x00413CBC: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    after_5:
    // 0x00413CC0: addiu       $v1, $sp, 0x88
    ctx->r3 = ADD32(ctx->r29, 0X88);
    // 0x00413CC4: addu        $v0, $s2, $zero
    ctx->r2 = ADD32(ctx->r18, 0);
    // 0x00413CC8: addiu       $a0, $s2, 0x20
    ctx->r4 = ADD32(ctx->r18, 0X20);
L_00413CCC:
    // 0x00413CCC: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x00413CD0: lw          $t1, 0x4($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X4);
    // 0x00413CD4: lw          $t2, 0x8($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X8);
    // 0x00413CD8: lw          $t3, 0xC($v0)
    ctx->r11 = MEM_W(ctx->r2, 0XC);
    // 0x00413CDC: sw          $t0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r8;
    // 0x00413CE0: sw          $t1, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r9;
    // 0x00413CE4: sw          $t2, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r10;
    // 0x00413CE8: sw          $t3, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r11;
    // 0x00413CEC: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
    // 0x00413CF0: bne         $v0, $a0, L_00413CCC
    if (ctx->r2 != ctx->r4) {
        // 0x00413CF4: addiu       $v1, $v1, 0x10
        ctx->r3 = ADD32(ctx->r3, 0X10);
            goto L_00413CCC;
    }
    // 0x00413CF4: addiu       $v1, $v1, 0x10
    ctx->r3 = ADD32(ctx->r3, 0X10);
    // 0x00413CF8: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x00413CFC: sw          $t0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r8;
    // 0x00413D00: addiu       $v1, $sp, 0x10
    ctx->r3 = ADD32(ctx->r29, 0X10);
    // 0x00413D04: addu        $v0, $s3, $zero
    ctx->r2 = ADD32(ctx->r19, 0);
    // 0x00413D08: addiu       $a0, $s3, 0x20
    ctx->r4 = ADD32(ctx->r19, 0X20);
L_00413D0C:
    // 0x00413D0C: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x00413D10: lw          $t1, 0x4($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X4);
    // 0x00413D14: lw          $t2, 0x8($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X8);
    // 0x00413D18: lw          $t3, 0xC($v0)
    ctx->r11 = MEM_W(ctx->r2, 0XC);
    // 0x00413D1C: sw          $t0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r8;
    // 0x00413D20: sw          $t1, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r9;
    // 0x00413D24: sw          $t2, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r10;
    // 0x00413D28: sw          $t3, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r11;
    // 0x00413D2C: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
    // 0x00413D30: bne         $v0, $a0, L_00413D0C
    if (ctx->r2 != ctx->r4) {
        // 0x00413D34: addiu       $v1, $v1, 0x10
        ctx->r3 = ADD32(ctx->r3, 0X10);
            goto L_00413D0C;
    }
    // 0x00413D34: addiu       $v1, $v1, 0x10
    ctx->r3 = ADD32(ctx->r3, 0X10);
    // 0x00413D38: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x00413D3C: addiu       $a1, $sp, 0x88
    ctx->r5 = ADD32(ctx->r29, 0X88);
    // 0x00413D40: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x00413D44: lw          $t1, 0x4($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X4);
    // 0x00413D48: sw          $t0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r8;
    // 0x00413D4C: sw          $t1, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r9;
    // 0x00413D50: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00413D54: sh          $v0, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r2;
    // 0x00413D58: jal         0x0041363C
    // 0x00413D5C: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    func_0041363C(rdram, ctx);
        goto after_6;
    // 0x00413D5C: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    after_6:
    // 0x00413D60: lw          $v1, 0x64($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X64);
    // 0x00413D64: lw          $v0, 0x8C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X8C);
    // 0x00413D68: lw          $a0, 0x3C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X3C);
    // 0x00413D6C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x00413D70: slt         $v0, $v1, $a0
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x00413D74: bnel        $v0, $zero, L_00413D7C
    if (ctx->r2 != 0) {
        // 0x00413D78: addu        $v1, $a0, $zero
        ctx->r3 = ADD32(ctx->r4, 0);
            goto L_00413D7C;
    }
    goto skip_1;
    // 0x00413D78: addu        $v1, $a0, $zero
    ctx->r3 = ADD32(ctx->r4, 0);
    skip_1:
L_00413D7C:
    // 0x00413D7C: sw          $v1, 0x4($s2)
    MEM_W(0X4, ctx->r18) = ctx->r3;
    // 0x00413D80: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x00413D84: lw          $v1, 0x68($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X68);
    // 0x00413D88: lw          $v0, 0x90($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X90);
    // 0x00413D8C: addu        $a0, $a0, $v1
    ctx->r4 = ADD32(ctx->r4, ctx->r3);
    // 0x00413D90: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x00413D94: srl         $v1, $v0, 31
    ctx->r3 = S32(U32(ctx->r2) >> 31);
    // 0x00413D98: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x00413D9C: sra         $v0, $v0, 1
    ctx->r2 = S32(SIGNED(ctx->r2) >> 1);
    // 0x00413DA0: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x00413DA4: j           L_00413E14
    // 0x00413DA8: sw          $a0, 0x8($s2)
    MEM_W(0X8, ctx->r18) = ctx->r4;
        goto L_00413E14;
    // 0x00413DA8: sw          $a0, 0x8($s2)
    MEM_W(0X8, ctx->r18) = ctx->r4;
    // 0x00413DAC: lw          $v0, 0x14($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X14);
    // 0x00413DB0: lwc1        $f1, 0x288($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X288);
    // 0x00413DB4: lwc1        $f0, 0x24($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X24);
    // 0x00413DB8: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00413DBC: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00413DC0: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00413DC4: lwc1        $f1, 0x2030($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X2030);
    // 0x00413DC8: cvt.s.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.fl = CVT_S_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x00413DCC: div.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = DIV_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00413DD0: trunc.w.s   $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x00413DD4: swc1        $f4, 0x4($s2)
    MEM_W(0X4, ctx->r18) = ctx->f4.u32l;
    // 0x00413DD8: lwc1        $f1, 0x28C($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X28C);
    // 0x00413DDC: lwc1        $f0, 0x28($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X28);
    // 0x00413DE0: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00413DE4: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00413DE8: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00413DEC: lwc1        $f1, 0x2034($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X2034);
    // 0x00413DF0: cvt.s.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.fl = CVT_S_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x00413DF4: div.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = DIV_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00413DF8: trunc.w.s   $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x00413DFC: swc1        $f4, 0x8($s2)
    MEM_W(0X8, ctx->r18) = ctx->f4.u32l;
    // 0x00413E00: j           L_00413E14
    // 0x00413E04: nop

        goto L_00413E14;
    // 0x00413E04: nop

    // 0x00413E08: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00413E0C: sw          $v0, 0x4($s2)
    MEM_W(0X4, ctx->r18) = ctx->r2;
L_00413E10:
    // 0x00413E10: sw          $v0, 0x8($s2)
    MEM_W(0X8, ctx->r18) = ctx->r2;
L_00413E14:
    // 0x00413E14: lh          $v0, 0xC($s3)
    ctx->r2 = MEM_H(ctx->r19, 0XC);
    // 0x00413E18: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x00413E1C: lw          $v1, 0x2030($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X2030);
    // 0x00413E20: mult        $v0, $v1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x00413E24: mflo        $v0
    ctx->r2 = lo;
    // 0x00413E28: lui         $v1, 0xE6C2
    ctx->r3 = S32(0XE6C2 << 16);
    // 0x00413E2C: ori         $v1, $v1, 0xB449
    ctx->r3 = ctx->r3 | 0XB449;
    // 0x00413E30: mult        $v0, $v1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x00413E34: lw          $a0, 0x8($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X8);
    // 0x00413E38: mfhi        $v1
    ctx->r3 = hi;
    // 0x00413E3C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x00413E40: sra         $v1, $v1, 8
    ctx->r3 = S32(SIGNED(ctx->r3) >> 8);
    // 0x00413E44: sra         $v0, $v0, 31
    ctx->r2 = S32(SIGNED(ctx->r2) >> 31);
    // 0x00413E48: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x00413E4C: mtc1        $v1, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r3;
    // 0x00413E50: cvt.s.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.fl = CVT_S_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x00413E54: andi        $v0, $a0, 0x8000
    ctx->r2 = ctx->r4 & 0X8000;
    // 0x00413E58: bne         $v0, $zero, L_00413E8C
    if (ctx->r2 != 0) {
        // 0x00413E5C: andi        $v0, $a0, 0x4000
        ctx->r2 = ctx->r4 & 0X4000;
            goto L_00413E8C;
    }
    // 0x00413E5C: andi        $v0, $a0, 0x4000
    ctx->r2 = ctx->r4 & 0X4000;
    // 0x00413E60: beq         $v0, $zero, L_00413E84
    if (ctx->r2 == 0) {
        // 0x00413E64: nop
    
            goto L_00413E84;
    }
    // 0x00413E64: nop

    // 0x00413E68: lwc1        $f0, 0x18($s2)
    ctx->f0.u32l = MEM_W(ctx->r18, 0X18);
    // 0x00413E6C: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00413E70: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x00413E74: trunc.w.s   $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x00413E78: swc1        $f4, 0x14($s2)
    MEM_W(0X14, ctx->r18) = ctx->f4.u32l;
    // 0x00413E7C: j           L_00413E8C
    // 0x00413E80: nop

        goto L_00413E8C;
    // 0x00413E80: nop

L_00413E84:
    // 0x00413E84: trunc.w.s   $f4, $f1
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 1);
    ctx->f4.u32l = TRUNC_W_S(ctx->f1.fl);
    // 0x00413E88: swc1        $f4, 0x14($s2)
    MEM_W(0X14, ctx->r18) = ctx->f4.u32l;
L_00413E8C:
    // 0x00413E8C: lwc1        $f0, 0xC($s2)
    ctx->f0.u32l = MEM_W(ctx->r18, 0XC);
    // 0x00413E90: lwc1        $f1, 0x4($s2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r18, 0X4);
    // 0x00413E94: cvt.s.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.fl = CVT_S_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x00413E98: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x00413E9C: lwc1        $f0, 0x14($s2)
    ctx->f0.u32l = MEM_W(ctx->r18, 0X14);
    // 0x00413EA0: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00413EA4: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x00413EA8: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x00413EAC: lw          $v0, 0x2034($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2034);
    // 0x00413EB0: trunc.w.s   $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x00413EB4: swc1        $f4, 0x18($s2)
    MEM_W(0X18, ctx->r18) = ctx->f4.u32l;
    // 0x00413EB8: lh          $v1, 0xE($s3)
    ctx->r3 = MEM_H(ctx->r19, 0XE);
    // 0x00413EBC: mult        $v1, $v0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x00413EC0: mflo        $v1
    ctx->r3 = lo;
    // 0x00413EC4: lui         $v0, 0x939A
    ctx->r2 = S32(0X939A << 16);
    // 0x00413EC8: ori         $v0, $v0, 0x85C5
    ctx->r2 = ctx->r2 | 0X85C5;
    // 0x00413ECC: mult        $v1, $v0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x00413ED0: lw          $a0, 0x8($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X8);
    // 0x00413ED4: mfhi        $t4
    ctx->r12 = hi;
    // 0x00413ED8: addu        $v0, $t4, $v1
    ctx->r2 = ADD32(ctx->r12, ctx->r3);
    // 0x00413EDC: sra         $v0, $v0, 7
    ctx->r2 = S32(SIGNED(ctx->r2) >> 7);
    // 0x00413EE0: sra         $v1, $v1, 31
    ctx->r3 = S32(SIGNED(ctx->r3) >> 31);
    // 0x00413EE4: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x00413EE8: mtc1        $v0, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r2;
    // 0x00413EEC: cvt.s.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.fl = CVT_S_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x00413EF0: lui         $v0, 0x2
    ctx->r2 = S32(0X2 << 16);
    // 0x00413EF4: and         $v0, $a0, $v0
    ctx->r2 = ctx->r4 & ctx->r2;
    // 0x00413EF8: bne         $v0, $zero, L_00413F30
    if (ctx->r2 != 0) {
        // 0x00413EFC: lui         $v0, 0x1
        ctx->r2 = S32(0X1 << 16);
            goto L_00413F30;
    }
    // 0x00413EFC: lui         $v0, 0x1
    ctx->r2 = S32(0X1 << 16);
    // 0x00413F00: and         $v0, $a0, $v0
    ctx->r2 = ctx->r4 & ctx->r2;
    // 0x00413F04: beq         $v0, $zero, L_00413F28
    if (ctx->r2 == 0) {
        // 0x00413F08: nop
    
            goto L_00413F28;
    }
    // 0x00413F08: nop

    // 0x00413F0C: lwc1        $f0, 0x20($s2)
    ctx->f0.u32l = MEM_W(ctx->r18, 0X20);
    // 0x00413F10: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00413F14: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x00413F18: trunc.w.s   $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x00413F1C: swc1        $f4, 0x1C($s2)
    MEM_W(0X1C, ctx->r18) = ctx->f4.u32l;
    // 0x00413F20: j           L_00413F30
    // 0x00413F24: nop

        goto L_00413F30;
    // 0x00413F24: nop

L_00413F28:
    // 0x00413F28: trunc.w.s   $f4, $f1
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 1);
    ctx->f4.u32l = TRUNC_W_S(ctx->f1.fl);
    // 0x00413F2C: swc1        $f4, 0x1C($s2)
    MEM_W(0X1C, ctx->r18) = ctx->f4.u32l;
L_00413F30:
    // 0x00413F30: lwc1        $f0, 0x10($s2)
    ctx->f0.u32l = MEM_W(ctx->r18, 0X10);
    // 0x00413F34: lwc1        $f1, 0x8($s2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r18, 0X8);
    // 0x00413F38: cvt.s.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.fl = CVT_S_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x00413F3C: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x00413F40: lwc1        $f0, 0x1C($s2)
    ctx->f0.u32l = MEM_W(ctx->r18, 0X1C);
    // 0x00413F44: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00413F48: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x00413F4C: trunc.w.s   $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x00413F50: swc1        $f4, 0x20($s2)
    MEM_W(0X20, ctx->r18) = ctx->f4.u32l;
    // 0x00413F54: lw          $ra, 0xC0($sp)
    ctx->r31 = MEM_W(ctx->r29, 0XC0);
    // 0x00413F58: lw          $s3, 0xBC($sp)
    ctx->r19 = MEM_W(ctx->r29, 0XBC);
    // 0x00413F5C: lw          $s2, 0xB8($sp)
    ctx->r18 = MEM_W(ctx->r29, 0XB8);
    // 0x00413F60: lw          $s1, 0xB4($sp)
    ctx->r17 = MEM_W(ctx->r29, 0XB4);
    // 0x00413F64: lw          $s0, 0xB0($sp)
    ctx->r16 = MEM_W(ctx->r29, 0XB0);
    // 0x00413F68: ldc1        $f20, 0xC8($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0XC8);
    // 0x00413F6C: jr          $ra
    // 0x00413F70: addiu       $sp, $sp, 0xD0
    ctx->r29 = ADD32(ctx->r29, 0XD0);
    return;
    // 0x00413F70: addiu       $sp, $sp, 0xD0
    ctx->r29 = ADD32(ctx->r29, 0XD0);
;}
RECOMP_FUNC void entry_00413808(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00413808: beq         $v0, $zero, L_0041383C
    if (ctx->r2 == 0) {
        // 0x0041380C: nop
    
            goto L_0041383C;
    }
    // 0x0041380C: nop

    // 0x00413810: lbu         $v1, 0x0($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X0);
    // 0x00413814: beq         $v1, $zero, L_0041383C
    if (ctx->r3 == 0) {
        // 0x00413818: nop
    
            goto L_0041383C;
    }
    // 0x00413818: nop

    // 0x0041381C: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
L_00413820:
    // 0x00413820: beq         $v1, $a0, L_0041383C
    if (ctx->r3 == ctx->r4) {
        // 0x00413824: addiu       $v0, $v0, 0x1
        ctx->r2 = ADD32(ctx->r2, 0X1);
            goto L_0041383C;
    }
    // 0x00413824: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x00413828: beq         $v0, $zero, L_0041383C
    if (ctx->r2 == 0) {
        // 0x0041382C: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_0041383C;
    }
    // 0x0041382C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x00413830: lbu         $v1, 0x0($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X0);
    // 0x00413834: bne         $v1, $zero, L_00413820
    if (ctx->r3 != 0) {
        // 0x00413838: nop
    
            goto L_00413820;
    }
    // 0x00413838: nop

L_0041383C:
    // 0x0041383C: lw          $v0, 0x4($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X4);
    // 0x00413840: mult        $s0, $v0
    result = S64(S32(ctx->r16)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x00413844: mflo        $t0
    ctx->r8 = lo;
    // 0x00413848: sw          $t0, 0x4($s2)
    MEM_W(0X4, ctx->r18) = ctx->r8;
    // 0x0041384C: lw          $v0, 0x8($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X8);
    // 0x00413850: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x00413854: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x00413858: beq         $v0, $zero, L_00413888
    if (ctx->r2 == 0) {
        // 0x0041385C: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_00413888;
    }
    // 0x0041385C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x00413860: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00413864: lwc1        $f1, 0xBB8($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0XBB8);
    // 0x00413868: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0041386C: lwc1        $f0, 0x2034($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X2034);
    // 0x00413870: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00413874: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00413878: trunc.w.s   $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x0041387C: swc1        $f4, 0x8($s2)
    MEM_W(0X8, ctx->r18) = ctx->f4.u32l;
    // 0x00413880: j           L_0041391C
    // 0x00413884: nop

        goto L_0041391C;
    // 0x00413884: nop

L_00413888:
    // 0x00413888: lw          $v1, 0x0($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X0);
    // 0x0041388C: bne         $v1, $v0, L_004138E4
    if (ctx->r3 != ctx->r2) {
        // 0x00413890: nop
    
            goto L_004138E4;
    }
    // 0x00413890: nop

    // 0x00413894: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x00413898: lw          $v1, 0x2034($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X2034);
    // 0x0041389C: slti        $v0, $v1, 0xDF
    ctx->r2 = SIGNED(ctx->r3) < 0XDF ? 1 : 0;
    // 0x004138A0: bne         $v0, $zero, L_004138E4
    if (ctx->r2 != 0) {
        // 0x004138A4: nop
    
            goto L_004138E4;
    }
    // 0x004138A4: nop

    // 0x004138A8: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x004138AC: lwc1        $f1, 0xBBC($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0XBBC);
    // 0x004138B0: lwc1        $f0, 0x8($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X8);
    // 0x004138B4: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x004138B8: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x004138BC: mtc1        $v1, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r3;
    // 0x004138C0: cvt.s.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.fl = CVT_S_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x004138C4: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x004138C8: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x004138CC: lwc1        $f1, 0xBC0($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0XBC0);
    // 0x004138D0: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x004138D4: trunc.w.s   $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x004138D8: swc1        $f4, 0x8($s2)
    MEM_W(0X8, ctx->r18) = ctx->f4.u32l;
    // 0x004138DC: j           L_0041391C
    // 0x004138E0: nop

        goto L_0041391C;
    // 0x004138E0: nop

L_004138E4:
    // 0x004138E4: lw          $v1, 0x8($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X8);
    // 0x004138E8: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x004138EC: lw          $v0, 0x2034($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2034);
    // 0x004138F0: mult        $v1, $v0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x004138F4: mflo        $v1
    ctx->r3 = lo;
    // 0x004138F8: lui         $v0, 0x939A
    ctx->r2 = S32(0X939A << 16);
    // 0x004138FC: ori         $v0, $v0, 0x85C5
    ctx->r2 = ctx->r2 | 0X85C5;
    // 0x00413900: mult        $v1, $v0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x00413904: mfhi        $t4
    ctx->r12 = hi;
    // 0x00413908: addu        $v0, $t4, $v1
    ctx->r2 = ADD32(ctx->r12, ctx->r3);
    // 0x0041390C: sra         $v0, $v0, 7
    ctx->r2 = S32(SIGNED(ctx->r2) >> 7);
    // 0x00413910: sra         $v1, $v1, 31
    ctx->r3 = S32(SIGNED(ctx->r3) >> 31);
    // 0x00413914: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x00413918: sw          $v0, 0x8($s2)
    MEM_W(0X8, ctx->r18) = ctx->r2;
L_0041391C:
    // 0x0041391C: lw          $v1, 0x4($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X4);
    // 0x00413920: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x00413924: lw          $v0, 0x2030($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2030);
    // 0x00413928: mult        $v1, $v0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x0041392C: mflo        $v1
    ctx->r3 = lo;
    // 0x00413930: lui         $v0, 0xE6C2
    ctx->r2 = S32(0XE6C2 << 16);
    // 0x00413934: ori         $v0, $v0, 0xB449
    ctx->r2 = ctx->r2 | 0XB449;
    // 0x00413938: mult        $v1, $v0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x0041393C: mfhi        $t4
    ctx->r12 = hi;
    // 0x00413940: addu        $v0, $t4, $v1
    ctx->r2 = ADD32(ctx->r12, ctx->r3);
    // 0x00413944: sra         $v0, $v0, 8
    ctx->r2 = S32(SIGNED(ctx->r2) >> 8);
    // 0x00413948: sra         $v1, $v1, 31
    ctx->r3 = S32(SIGNED(ctx->r3) >> 31);
    // 0x0041394C: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x00413950: j           L_00413E14
    // 0x00413954: sw          $v0, 0x4($s2)
    MEM_W(0X4, ctx->r18) = ctx->r2;
        goto L_00413E14;
    // 0x00413954: sw          $v0, 0x4($s2)
    MEM_W(0X4, ctx->r18) = ctx->r2;
    // 0x00413958: lw          $v0, 0x8($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X8);
    // 0x0041395C: andi        $v1, $v0, 0x3FE0
    ctx->r3 = ctx->r2 & 0X3FE0;
    // 0x00413960: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x00413964: beq         $v1, $v0, L_00413A0C
    if (ctx->r3 == ctx->r2) {
        // 0x00413968: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_00413A0C;
    }
    // 0x00413968: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0041396C: sltiu       $v0, $v1, 0x201
    ctx->r2 = ctx->r3 < 0X201 ? 1 : 0;
    // 0x00413970: beq         $v0, $zero, L_004139BC
    if (ctx->r2 == 0) {
        // 0x00413974: addiu       $v0, $zero, 0x40
        ctx->r2 = ADD32(0, 0X40);
            goto L_004139BC;
    }
    // 0x00413974: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x00413978: beql        $v1, $v0, L_00413A20
    if (ctx->r3 == ctx->r2) {
        // 0x0041397C: addiu       $a0, $zero, 0x1
        ctx->r4 = ADD32(0, 0X1);
            goto L_00413A20;
    }
    goto skip_0;
    // 0x0041397C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    skip_0:
    // 0x00413980: sltiu       $v0, $v1, 0x41
    ctx->r2 = ctx->r3 < 0X41 ? 1 : 0;
    // 0x00413984: beq         $v0, $zero, L_0041399C
    if (ctx->r2 == 0) {
        // 0x00413988: addiu       $v0, $zero, 0x20
        ctx->r2 = ADD32(0, 0X20);
            goto L_0041399C;
    }
    // 0x00413988: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x0041398C: beq         $v1, $v0, L_00413A24
    if (ctx->r3 == ctx->r2) {
        // 0x00413990: sll         $v0, $a0, 3
        ctx->r2 = S32(ctx->r4 << 3);
            goto L_00413A24;
    }
    // 0x00413990: sll         $v0, $a0, 3
    ctx->r2 = S32(ctx->r4 << 3);
    // 0x00413994: j           L_00413A28
    // 0x00413998: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
        goto L_00413A28;
    // 0x00413998: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
L_0041399C:
    // 0x0041399C: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x004139A0: beq         $v1, $v0, L_00413A20
    if (ctx->r3 == ctx->r2) {
        // 0x004139A4: addiu       $a0, $zero, 0x2
        ctx->r4 = ADD32(0, 0X2);
            goto L_00413A20;
    }
    // 0x004139A4: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x004139A8: addiu       $v0, $zero, 0x100
    ctx->r2 = ADD32(0, 0X100);
    // 0x004139AC: beq         $v1, $v0, L_00413A04
    if (ctx->r3 == ctx->r2) {
        // 0x004139B0: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_00413A04;
    }
    // 0x004139B0: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x004139B4: j           L_00413A24
    // 0x004139B8: sll         $v0, $a0, 3
    ctx->r2 = S32(ctx->r4 << 3);
        goto L_00413A24;
    // 0x004139B8: sll         $v0, $a0, 3
    ctx->r2 = S32(ctx->r4 << 3);
L_004139BC:
    // 0x004139BC: addiu       $v0, $zero, 0x800
    ctx->r2 = ADD32(0, 0X800);
    // 0x004139C0: beq         $v1, $v0, L_00413A20
    if (ctx->r3 == ctx->r2) {
        // 0x004139C4: addiu       $a0, $zero, 0x6
        ctx->r4 = ADD32(0, 0X6);
            goto L_00413A20;
    }
    // 0x004139C4: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    // 0x004139C8: sltiu       $v0, $v1, 0x801
    ctx->r2 = ctx->r3 < 0X801 ? 1 : 0;
    // 0x004139CC: beq         $v0, $zero, L_004139E4
    if (ctx->r2 == 0) {
        // 0x004139D0: addiu       $v0, $zero, 0x400
        ctx->r2 = ADD32(0, 0X400);
            goto L_004139E4;
    }
    // 0x004139D0: addiu       $v0, $zero, 0x400
    ctx->r2 = ADD32(0, 0X400);
    // 0x004139D4: beq         $v1, $v0, L_00413A14
    if (ctx->r3 == ctx->r2) {
        // 0x004139D8: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_00413A14;
    }
    // 0x004139D8: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x004139DC: j           L_00413A24
    // 0x004139E0: sll         $v0, $a0, 3
    ctx->r2 = S32(ctx->r4 << 3);
        goto L_00413A24;
    // 0x004139E0: sll         $v0, $a0, 3
    ctx->r2 = S32(ctx->r4 << 3);
L_004139E4:
    // 0x004139E4: addiu       $v0, $zero, 0x1000
    ctx->r2 = ADD32(0, 0X1000);
    // 0x004139E8: beq         $v1, $v0, L_00413A20
    if (ctx->r3 == ctx->r2) {
        // 0x004139EC: addiu       $a0, $zero, 0x7
        ctx->r4 = ADD32(0, 0X7);
            goto L_00413A20;
    }
    // 0x004139EC: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    // 0x004139F0: addiu       $v0, $zero, 0x2000
    ctx->r2 = ADD32(0, 0X2000);
    // 0x004139F4: beq         $v1, $v0, L_00413A1C
    if (ctx->r3 == ctx->r2) {
        // 0x004139F8: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_00413A1C;
    }
    // 0x004139F8: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x004139FC: j           L_00413A24
    // 0x00413A00: sll         $v0, $a0, 3
    ctx->r2 = S32(ctx->r4 << 3);
        goto L_00413A24;
    // 0x00413A00: sll         $v0, $a0, 3
    ctx->r2 = S32(ctx->r4 << 3);
L_00413A04:
    // 0x00413A04: j           L_00413A20
    // 0x00413A08: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
        goto L_00413A20;
    // 0x00413A08: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
L_00413A0C:
    // 0x00413A0C: j           L_00413A20
    // 0x00413A10: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
        goto L_00413A20;
    // 0x00413A10: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
L_00413A14:
    // 0x00413A14: j           L_00413A20
    // 0x00413A18: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
        goto L_00413A20;
    // 0x00413A18: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
L_00413A1C:
    // 0x00413A1C: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
L_00413A20:
    // 0x00413A20: sll         $v0, $a0, 3
    ctx->r2 = S32(ctx->r4 << 3);
L_00413A24:
    // 0x00413A24: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
L_00413A28:
    // 0x00413A28: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x00413A2C: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x00413A30: addiu       $v1, $v1, 0x1BD4
    ctx->r3 = ADD32(ctx->r3, 0X1BD4);
    // 0x00413A34: addu        $s1, $v0, $v1
    ctx->r17 = ADD32(ctx->r2, ctx->r3);
    // 0x00413A38: lw          $v0, 0x4($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X4);
    // 0x00413A3C: sw          $v0, 0x4($s2)
    MEM_W(0X4, ctx->r18) = ctx->r2;
    // 0x00413A40: lw          $v1, 0x8($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X8);
    // 0x00413A44: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x00413A48: lw          $v0, 0x2034($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2034);
    // 0x00413A4C: mult        $v1, $v0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x00413A50: mflo        $v1
    ctx->r3 = lo;
    // 0x00413A54: lui         $v0, 0x939A
    ctx->r2 = S32(0X939A << 16);
    // 0x00413A58: ori         $v0, $v0, 0x85C5
    ctx->r2 = ctx->r2 | 0X85C5;
    // 0x00413A5C: mult        $v1, $v0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x00413A60: mfhi        $t4
    ctx->r12 = hi;
    // 0x00413A64: addu        $v0, $t4, $v1
    ctx->r2 = ADD32(ctx->r12, ctx->r3);
    // 0x00413A68: sra         $v0, $v0, 7
    ctx->r2 = S32(SIGNED(ctx->r2) >> 7);
    // 0x00413A6C: sra         $v1, $v1, 31
    ctx->r3 = S32(SIGNED(ctx->r3) >> 31);
    // 0x00413A70: j           L_00413E10
    // 0x00413A74: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
        goto L_00413E10;
    // 0x00413A74: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x00413A78: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x00413A7C: addiu       $a0, $a0, -0x5378
    ctx->r4 = ADD32(ctx->r4, -0X5378);
    // 0x00413A80: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x00413A84: addiu       $v0, $zero, 0xD
    ctx->r2 = ADD32(0, 0XD);
    // 0x00413A88: bne         $v1, $v0, L_00413AA0
    if (ctx->r3 != ctx->r2) {
        // 0x00413A8C: lui         $v1, 0x4000
        ctx->r3 = S32(0X4000 << 16);
            goto L_00413AA0;
    }
    // 0x00413A8C: lui         $v1, 0x4000
    ctx->r3 = S32(0X4000 << 16);
    // 0x00413A90: lw          $v0, 0x8($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X8);
    // 0x00413A94: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x00413A98: bne         $v0, $zero, L_00413ACC
    if (ctx->r2 != 0) {
        // 0x00413A9C: addiu       $v0, $zero, 0x11C
        ctx->r2 = ADD32(0, 0X11C);
            goto L_00413ACC;
    }
    // 0x00413A9C: addiu       $v0, $zero, 0x11C
    ctx->r2 = ADD32(0, 0X11C);
L_00413AA0:
    // 0x00413AA0: lbu         $v0, -0x197($a0)
    ctx->r2 = MEM_BU(ctx->r4, -0X197);
    // 0x00413AA4: beq         $v0, $zero, L_00413ADC
    if (ctx->r2 == 0) {
        // 0x00413AA8: nop
    
            goto L_00413ADC;
    }
    // 0x00413AA8: nop

    // 0x00413AAC: lw          $v0, 0x8($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X8);
    // 0x00413AB0: bgez        $v0, L_00413ADC
    if (SIGNED(ctx->r2) >= 0) {
        // 0x00413AB4: nop
    
            goto L_00413ADC;
    }
    // 0x00413AB4: nop

    // 0x00413AB8: jal         0x00266B80
    // 0x00413ABC: nop

    func_00266B80(rdram, ctx);
        goto after_0;
    // 0x00413ABC: nop

    after_0:
    // 0x00413AC0: lui         $v1, 0x40
    ctx->r3 = S32(0X40 << 16);
    // 0x00413AC4: bne         $v0, $v1, L_00413ADC
    if (ctx->r2 != ctx->r3) {
        // 0x00413AC8: addiu       $v0, $zero, 0x11C
        ctx->r2 = ADD32(0, 0X11C);
            goto L_00413ADC;
    }
    // 0x00413AC8: addiu       $v0, $zero, 0x11C
    ctx->r2 = ADD32(0, 0X11C);
L_00413ACC:
    // 0x00413ACC: sw          $v0, 0x4($s2)
    MEM_W(0X4, ctx->r18) = ctx->r2;
    // 0x00413AD0: addiu       $v0, $zero, 0xDE
    ctx->r2 = ADD32(0, 0XDE);
    // 0x00413AD4: j           L_00413AF0
    // 0x00413AD8: sw          $v0, 0x8($s2)
    MEM_W(0X8, ctx->r18) = ctx->r2;
        goto L_00413AF0;
    // 0x00413AD8: sw          $v0, 0x8($s2)
    MEM_W(0X8, ctx->r18) = ctx->r2;
L_00413ADC:
    // 0x00413ADC: lw          $a0, 0x14($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X14);
    // 0x00413AE0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x00413AE4: addiu       $a2, $s2, 0x4
    ctx->r6 = ADD32(ctx->r18, 0X4);
    // 0x00413AE8: jal         0x0027AEA8
    // 0x00413AEC: addiu       $a3, $s2, 0x8
    ctx->r7 = ADD32(ctx->r18, 0X8);
    func_0027AEA8(rdram, ctx);
        goto after_1;
    // 0x00413AEC: addiu       $a3, $s2, 0x8
    ctx->r7 = ADD32(ctx->r18, 0X8);
    after_1:
L_00413AF0:
    // 0x00413AF0: lw          $v0, 0x8($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X8);
    // 0x00413AF4: lui         $v1, 0x1000
    ctx->r3 = S32(0X1000 << 16);
    // 0x00413AF8: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x00413AFC: beq         $v0, $zero, L_00413B4C
    if (ctx->r2 == 0) {
        // 0x00413B00: nop
    
            goto L_00413B4C;
    }
    // 0x00413B00: nop

    // 0x00413B04: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x00413B08: lwc1        $f3, 0x4($s2)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r18, 0X4);
    // 0x00413B0C: cvt.s.w     $f3, $f3
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    ctx->f3.fl = CVT_S_W(ctx->f_odd[(3 - 1) * 2]);
    // 0x00413B10: c.eq.s      $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f3.fl == ctx->f0.fl;
    // 0x00413B14: nop

    // 0x00413B18: bc1t        L_00413B4C
    if (c1cs) {
        // 0x00413B1C: nop
    
            goto L_00413B4C;
    }
    // 0x00413B1C: nop

    // 0x00413B20: lwc1        $f2, 0x8($s2)
    ctx->f2.u32l = MEM_W(ctx->r18, 0X8);
    // 0x00413B24: cvt.s.w     $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    ctx->f2.fl = CVT_S_W(ctx->f2.u32l);
    // 0x00413B28: c.eq.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl == ctx->f0.fl;
    // 0x00413B2C: nop

    // 0x00413B30: bc1t        L_00413B4C
    if (c1cs) {
        // 0x00413B34: nop
    
            goto L_00413B4C;
    }
    // 0x00413B34: nop

    // 0x00413B38: lwc1        $f0, 0x288($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X288);
    // 0x00413B3C: lwc1        $f1, 0x28C($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X28C);
    // 0x00413B40: div.s       $f3, $f0, $f3
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f3.fl = DIV_S(ctx->f0.fl, ctx->f3.fl);
    // 0x00413B44: j           L_00413B7C
    // 0x00413B48: div.s       $f0, $f1, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = DIV_S(ctx->f1.fl, ctx->f2.fl);
        goto L_00413B7C;
    // 0x00413B48: div.s       $f0, $f1, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = DIV_S(ctx->f1.fl, ctx->f2.fl);
L_00413B4C:
    // 0x00413B4C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00413B50: lwc1        $f1, 0xBC4($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0XBC4);
    // 0x00413B54: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00413B58: lwc1        $f0, 0x2030($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X2030);
    // 0x00413B5C: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00413B60: mul.s       $f3, $f0, $f1
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f3.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00413B64: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00413B68: lwc1        $f1, 0xBC8($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0XBC8);
    // 0x00413B6C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00413B70: lwc1        $f0, 0x2034($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X2034);
    // 0x00413B74: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00413B78: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
L_00413B7C:
    // 0x00413B7C: swc1        $f3, 0xC($s2)
    MEM_W(0XC, ctx->r18) = ctx->f_odd[(3 - 1) * 2];
    // 0x00413B80: j           L_00413E14
    // 0x00413B84: swc1        $f0, 0x10($s2)
    MEM_W(0X10, ctx->r18) = ctx->f0.u32l;
        goto L_00413E14;
    // 0x00413B84: swc1        $f0, 0x10($s2)
    MEM_W(0X10, ctx->r18) = ctx->f0.u32l;
    // 0x00413B88: addiu       $v1, $sp, 0x38
    ctx->r3 = ADD32(ctx->r29, 0X38);
    // 0x00413B8C: addu        $v0, $s2, $zero
    ctx->r2 = ADD32(ctx->r18, 0);
    // 0x00413B90: addiu       $a0, $s2, 0x20
    ctx->r4 = ADD32(ctx->r18, 0X20);
L_00413B94:
    // 0x00413B94: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x00413B98: lw          $t1, 0x4($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X4);
    // 0x00413B9C: lw          $t2, 0x8($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X8);
    // 0x00413BA0: lw          $t3, 0xC($v0)
    ctx->r11 = MEM_W(ctx->r2, 0XC);
    // 0x00413BA4: sw          $t0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r8;
    // 0x00413BA8: sw          $t1, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r9;
    // 0x00413BAC: sw          $t2, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r10;
    // 0x00413BB0: sw          $t3, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r11;
    // 0x00413BB4: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
    // 0x00413BB8: bne         $v0, $a0, L_00413B94
    if (ctx->r2 != ctx->r4) {
        // 0x00413BBC: addiu       $v1, $v1, 0x10
        ctx->r3 = ADD32(ctx->r3, 0X10);
            goto L_00413B94;
    }
    // 0x00413BBC: addiu       $v1, $v1, 0x10
    ctx->r3 = ADD32(ctx->r3, 0X10);
    // 0x00413BC0: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x00413BC4: sw          $t0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r8;
    // 0x00413BC8: addiu       $v1, $sp, 0x10
    ctx->r3 = ADD32(ctx->r29, 0X10);
    // 0x00413BCC: addu        $v0, $s3, $zero
    ctx->r2 = ADD32(ctx->r19, 0);
    // 0x00413BD0: addiu       $a0, $s3, 0x20
    ctx->r4 = ADD32(ctx->r19, 0X20);
L_00413BD4:
    // 0x00413BD4: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x00413BD8: lw          $t1, 0x4($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X4);
    // 0x00413BDC: lw          $t2, 0x8($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X8);
    // 0x00413BE0: lw          $t3, 0xC($v0)
    ctx->r11 = MEM_W(ctx->r2, 0XC);
    // 0x00413BE4: sw          $t0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r8;
    // 0x00413BE8: sw          $t1, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r9;
    // 0x00413BEC: sw          $t2, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r10;
    // 0x00413BF0: sw          $t3, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r11;
    // 0x00413BF4: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
    // 0x00413BF8: bne         $v0, $a0, L_00413BD4
    if (ctx->r2 != ctx->r4) {
        // 0x00413BFC: addiu       $v1, $v1, 0x10
        ctx->r3 = ADD32(ctx->r3, 0X10);
            goto L_00413BD4;
    }
    // 0x00413BFC: addiu       $v1, $v1, 0x10
    ctx->r3 = ADD32(ctx->r3, 0X10);
    // 0x00413C00: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x00413C04: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    // 0x00413C08: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x00413C0C: lw          $t1, 0x4($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X4);
    // 0x00413C10: sw          $t0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r8;
    // 0x00413C14: sw          $t1, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r9;
    // 0x00413C18: jal         0x0041363C
    // 0x00413C1C: sh          $zero, 0x14($sp)
    MEM_H(0X14, ctx->r29) = 0;
    func_0041363C(rdram, ctx);
        goto after_2;
    // 0x00413C1C: sh          $zero, 0x14($sp)
    MEM_H(0X14, ctx->r29) = 0;
    after_2:
    // 0x00413C20: addiu       $v1, $sp, 0x60
    ctx->r3 = ADD32(ctx->r29, 0X60);
    // 0x00413C24: addu        $v0, $s2, $zero
    ctx->r2 = ADD32(ctx->r18, 0);
    // 0x00413C28: addiu       $a0, $s2, 0x20
    ctx->r4 = ADD32(ctx->r18, 0X20);
L_00413C2C:
    // 0x00413C2C: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x00413C30: lw          $t1, 0x4($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X4);
    // 0x00413C34: lw          $t2, 0x8($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X8);
    // 0x00413C38: lw          $t3, 0xC($v0)
    ctx->r11 = MEM_W(ctx->r2, 0XC);
    // 0x00413C3C: sw          $t0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r8;
    // 0x00413C40: sw          $t1, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r9;
    // 0x00413C44: sw          $t2, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r10;
    // 0x00413C48: sw          $t3, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r11;
    // 0x00413C4C: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
    // 0x00413C50: bne         $v0, $a0, L_00413C2C
    if (ctx->r2 != ctx->r4) {
        // 0x00413C54: addiu       $v1, $v1, 0x10
        ctx->r3 = ADD32(ctx->r3, 0X10);
            goto L_00413C2C;
    }
    // 0x00413C54: addiu       $v1, $v1, 0x10
    ctx->r3 = ADD32(ctx->r3, 0X10);
    // 0x00413C58: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x00413C5C: sw          $t0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r8;
    // 0x00413C60: addiu       $v1, $sp, 0x10
    ctx->r3 = ADD32(ctx->r29, 0X10);
    // 0x00413C64: addu        $v0, $s3, $zero
    ctx->r2 = ADD32(ctx->r19, 0);
    // 0x00413C68: addiu       $a0, $s3, 0x20
    ctx->r4 = ADD32(ctx->r19, 0X20);
L_00413C6C:
    // 0x00413C6C: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x00413C70: lw          $t1, 0x4($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X4);
    // 0x00413C74: lw          $t2, 0x8($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X8);
    // 0x00413C78: lw          $t3, 0xC($v0)
    ctx->r11 = MEM_W(ctx->r2, 0XC);
    // 0x00413C7C: sw          $t0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r8;
    // 0x00413C80: sw          $t1, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r9;
    // 0x00413C84: sw          $t2, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r10;
    // 0x00413C88: sw          $t3, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r11;
    // 0x00413C8C: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
    // 0x00413C90: bne         $v0, $a0, L_00413C6C
    if (ctx->r2 != ctx->r4) {
        // 0x00413C94: addiu       $v1, $v1, 0x10
        ctx->r3 = ADD32(ctx->r3, 0X10);
            goto L_00413C6C;
    }
    // 0x00413C94: addiu       $v1, $v1, 0x10
    ctx->r3 = ADD32(ctx->r3, 0X10);
    // 0x00413C98: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x00413C9C: addiu       $a1, $sp, 0x60
    ctx->r5 = ADD32(ctx->r29, 0X60);
    // 0x00413CA0: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x00413CA4: lw          $t1, 0x4($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X4);
    // 0x00413CA8: sw          $t0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r8;
    // 0x00413CAC: sw          $t1, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r9;
    // 0x00413CB0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00413CB4: sh          $v0, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r2;
    // 0x00413CB8: jal         0x0041363C
    // 0x00413CBC: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    func_0041363C(rdram, ctx);
        goto after_3;
    // 0x00413CBC: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    after_3:
    // 0x00413CC0: addiu       $v1, $sp, 0x88
    ctx->r3 = ADD32(ctx->r29, 0X88);
    // 0x00413CC4: addu        $v0, $s2, $zero
    ctx->r2 = ADD32(ctx->r18, 0);
    // 0x00413CC8: addiu       $a0, $s2, 0x20
    ctx->r4 = ADD32(ctx->r18, 0X20);
L_00413CCC:
    // 0x00413CCC: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x00413CD0: lw          $t1, 0x4($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X4);
    // 0x00413CD4: lw          $t2, 0x8($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X8);
    // 0x00413CD8: lw          $t3, 0xC($v0)
    ctx->r11 = MEM_W(ctx->r2, 0XC);
    // 0x00413CDC: sw          $t0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r8;
    // 0x00413CE0: sw          $t1, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r9;
    // 0x00413CE4: sw          $t2, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r10;
    // 0x00413CE8: sw          $t3, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r11;
    // 0x00413CEC: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
    // 0x00413CF0: bne         $v0, $a0, L_00413CCC
    if (ctx->r2 != ctx->r4) {
        // 0x00413CF4: addiu       $v1, $v1, 0x10
        ctx->r3 = ADD32(ctx->r3, 0X10);
            goto L_00413CCC;
    }
    // 0x00413CF4: addiu       $v1, $v1, 0x10
    ctx->r3 = ADD32(ctx->r3, 0X10);
    // 0x00413CF8: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x00413CFC: sw          $t0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r8;
    // 0x00413D00: addiu       $v1, $sp, 0x10
    ctx->r3 = ADD32(ctx->r29, 0X10);
    // 0x00413D04: addu        $v0, $s3, $zero
    ctx->r2 = ADD32(ctx->r19, 0);
    // 0x00413D08: addiu       $a0, $s3, 0x20
    ctx->r4 = ADD32(ctx->r19, 0X20);
L_00413D0C:
    // 0x00413D0C: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x00413D10: lw          $t1, 0x4($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X4);
    // 0x00413D14: lw          $t2, 0x8($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X8);
    // 0x00413D18: lw          $t3, 0xC($v0)
    ctx->r11 = MEM_W(ctx->r2, 0XC);
    // 0x00413D1C: sw          $t0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r8;
    // 0x00413D20: sw          $t1, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r9;
    // 0x00413D24: sw          $t2, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r10;
    // 0x00413D28: sw          $t3, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r11;
    // 0x00413D2C: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
    // 0x00413D30: bne         $v0, $a0, L_00413D0C
    if (ctx->r2 != ctx->r4) {
        // 0x00413D34: addiu       $v1, $v1, 0x10
        ctx->r3 = ADD32(ctx->r3, 0X10);
            goto L_00413D0C;
    }
    // 0x00413D34: addiu       $v1, $v1, 0x10
    ctx->r3 = ADD32(ctx->r3, 0X10);
    // 0x00413D38: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x00413D3C: addiu       $a1, $sp, 0x88
    ctx->r5 = ADD32(ctx->r29, 0X88);
    // 0x00413D40: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x00413D44: lw          $t1, 0x4($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X4);
    // 0x00413D48: sw          $t0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r8;
    // 0x00413D4C: sw          $t1, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r9;
    // 0x00413D50: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00413D54: sh          $v0, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r2;
    // 0x00413D58: jal         0x0041363C
    // 0x00413D5C: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    func_0041363C(rdram, ctx);
        goto after_4;
    // 0x00413D5C: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    after_4:
    // 0x00413D60: lw          $v1, 0x64($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X64);
    // 0x00413D64: lw          $v0, 0x8C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X8C);
    // 0x00413D68: lw          $a0, 0x3C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X3C);
    // 0x00413D6C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x00413D70: slt         $v0, $v1, $a0
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x00413D74: bnel        $v0, $zero, L_00413D7C
    if (ctx->r2 != 0) {
        // 0x00413D78: addu        $v1, $a0, $zero
        ctx->r3 = ADD32(ctx->r4, 0);
            goto L_00413D7C;
    }
    goto skip_1;
    // 0x00413D78: addu        $v1, $a0, $zero
    ctx->r3 = ADD32(ctx->r4, 0);
    skip_1:
L_00413D7C:
    // 0x00413D7C: sw          $v1, 0x4($s2)
    MEM_W(0X4, ctx->r18) = ctx->r3;
    // 0x00413D80: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x00413D84: lw          $v1, 0x68($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X68);
    // 0x00413D88: lw          $v0, 0x90($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X90);
    // 0x00413D8C: addu        $a0, $a0, $v1
    ctx->r4 = ADD32(ctx->r4, ctx->r3);
    // 0x00413D90: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x00413D94: srl         $v1, $v0, 31
    ctx->r3 = S32(U32(ctx->r2) >> 31);
    // 0x00413D98: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x00413D9C: sra         $v0, $v0, 1
    ctx->r2 = S32(SIGNED(ctx->r2) >> 1);
    // 0x00413DA0: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x00413DA4: j           L_00413E14
    // 0x00413DA8: sw          $a0, 0x8($s2)
    MEM_W(0X8, ctx->r18) = ctx->r4;
        goto L_00413E14;
    // 0x00413DA8: sw          $a0, 0x8($s2)
    MEM_W(0X8, ctx->r18) = ctx->r4;
    // 0x00413DAC: lw          $v0, 0x14($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X14);
    // 0x00413DB0: lwc1        $f1, 0x288($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X288);
    // 0x00413DB4: lwc1        $f0, 0x24($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X24);
    // 0x00413DB8: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00413DBC: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00413DC0: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00413DC4: lwc1        $f1, 0x2030($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X2030);
    // 0x00413DC8: cvt.s.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.fl = CVT_S_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x00413DCC: div.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = DIV_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00413DD0: trunc.w.s   $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x00413DD4: swc1        $f4, 0x4($s2)
    MEM_W(0X4, ctx->r18) = ctx->f4.u32l;
    // 0x00413DD8: lwc1        $f1, 0x28C($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X28C);
    // 0x00413DDC: lwc1        $f0, 0x28($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X28);
    // 0x00413DE0: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00413DE4: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00413DE8: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00413DEC: lwc1        $f1, 0x2034($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X2034);
    // 0x00413DF0: cvt.s.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.fl = CVT_S_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x00413DF4: div.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = DIV_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00413DF8: trunc.w.s   $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x00413DFC: swc1        $f4, 0x8($s2)
    MEM_W(0X8, ctx->r18) = ctx->f4.u32l;
    // 0x00413E00: j           L_00413E14
    // 0x00413E04: nop

        goto L_00413E14;
    // 0x00413E04: nop

    // 0x00413E08: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00413E0C: sw          $v0, 0x4($s2)
    MEM_W(0X4, ctx->r18) = ctx->r2;
L_00413E10:
    // 0x00413E10: sw          $v0, 0x8($s2)
    MEM_W(0X8, ctx->r18) = ctx->r2;
L_00413E14:
    // 0x00413E14: lh          $v0, 0xC($s3)
    ctx->r2 = MEM_H(ctx->r19, 0XC);
    // 0x00413E18: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x00413E1C: lw          $v1, 0x2030($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X2030);
    // 0x00413E20: mult        $v0, $v1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x00413E24: mflo        $v0
    ctx->r2 = lo;
    // 0x00413E28: lui         $v1, 0xE6C2
    ctx->r3 = S32(0XE6C2 << 16);
    // 0x00413E2C: ori         $v1, $v1, 0xB449
    ctx->r3 = ctx->r3 | 0XB449;
    // 0x00413E30: mult        $v0, $v1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x00413E34: lw          $a0, 0x8($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X8);
    // 0x00413E38: mfhi        $v1
    ctx->r3 = hi;
    // 0x00413E3C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x00413E40: sra         $v1, $v1, 8
    ctx->r3 = S32(SIGNED(ctx->r3) >> 8);
    // 0x00413E44: sra         $v0, $v0, 31
    ctx->r2 = S32(SIGNED(ctx->r2) >> 31);
    // 0x00413E48: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x00413E4C: mtc1        $v1, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r3;
    // 0x00413E50: cvt.s.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.fl = CVT_S_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x00413E54: andi        $v0, $a0, 0x8000
    ctx->r2 = ctx->r4 & 0X8000;
    // 0x00413E58: bne         $v0, $zero, L_00413E8C
    if (ctx->r2 != 0) {
        // 0x00413E5C: andi        $v0, $a0, 0x4000
        ctx->r2 = ctx->r4 & 0X4000;
            goto L_00413E8C;
    }
    // 0x00413E5C: andi        $v0, $a0, 0x4000
    ctx->r2 = ctx->r4 & 0X4000;
    // 0x00413E60: beq         $v0, $zero, L_00413E84
    if (ctx->r2 == 0) {
        // 0x00413E64: nop
    
            goto L_00413E84;
    }
    // 0x00413E64: nop

    // 0x00413E68: lwc1        $f0, 0x18($s2)
    ctx->f0.u32l = MEM_W(ctx->r18, 0X18);
    // 0x00413E6C: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00413E70: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x00413E74: trunc.w.s   $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x00413E78: swc1        $f4, 0x14($s2)
    MEM_W(0X14, ctx->r18) = ctx->f4.u32l;
    // 0x00413E7C: j           L_00413E8C
    // 0x00413E80: nop

        goto L_00413E8C;
    // 0x00413E80: nop

L_00413E84:
    // 0x00413E84: trunc.w.s   $f4, $f1
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 1);
    ctx->f4.u32l = TRUNC_W_S(ctx->f1.fl);
    // 0x00413E88: swc1        $f4, 0x14($s2)
    MEM_W(0X14, ctx->r18) = ctx->f4.u32l;
L_00413E8C:
    // 0x00413E8C: lwc1        $f0, 0xC($s2)
    ctx->f0.u32l = MEM_W(ctx->r18, 0XC);
    // 0x00413E90: lwc1        $f1, 0x4($s2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r18, 0X4);
    // 0x00413E94: cvt.s.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.fl = CVT_S_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x00413E98: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x00413E9C: lwc1        $f0, 0x14($s2)
    ctx->f0.u32l = MEM_W(ctx->r18, 0X14);
    // 0x00413EA0: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00413EA4: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x00413EA8: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x00413EAC: lw          $v0, 0x2034($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2034);
    // 0x00413EB0: trunc.w.s   $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x00413EB4: swc1        $f4, 0x18($s2)
    MEM_W(0X18, ctx->r18) = ctx->f4.u32l;
    // 0x00413EB8: lh          $v1, 0xE($s3)
    ctx->r3 = MEM_H(ctx->r19, 0XE);
    // 0x00413EBC: mult        $v1, $v0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x00413EC0: mflo        $v1
    ctx->r3 = lo;
    // 0x00413EC4: lui         $v0, 0x939A
    ctx->r2 = S32(0X939A << 16);
    // 0x00413EC8: ori         $v0, $v0, 0x85C5
    ctx->r2 = ctx->r2 | 0X85C5;
    // 0x00413ECC: mult        $v1, $v0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x00413ED0: lw          $a0, 0x8($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X8);
    // 0x00413ED4: mfhi        $t4
    ctx->r12 = hi;
    // 0x00413ED8: addu        $v0, $t4, $v1
    ctx->r2 = ADD32(ctx->r12, ctx->r3);
    // 0x00413EDC: sra         $v0, $v0, 7
    ctx->r2 = S32(SIGNED(ctx->r2) >> 7);
    // 0x00413EE0: sra         $v1, $v1, 31
    ctx->r3 = S32(SIGNED(ctx->r3) >> 31);
    // 0x00413EE4: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x00413EE8: mtc1        $v0, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r2;
    // 0x00413EEC: cvt.s.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.fl = CVT_S_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x00413EF0: lui         $v0, 0x2
    ctx->r2 = S32(0X2 << 16);
    // 0x00413EF4: and         $v0, $a0, $v0
    ctx->r2 = ctx->r4 & ctx->r2;
    // 0x00413EF8: bne         $v0, $zero, L_00413F30
    if (ctx->r2 != 0) {
        // 0x00413EFC: lui         $v0, 0x1
        ctx->r2 = S32(0X1 << 16);
            goto L_00413F30;
    }
    // 0x00413EFC: lui         $v0, 0x1
    ctx->r2 = S32(0X1 << 16);
    // 0x00413F00: and         $v0, $a0, $v0
    ctx->r2 = ctx->r4 & ctx->r2;
    // 0x00413F04: beq         $v0, $zero, L_00413F28
    if (ctx->r2 == 0) {
        // 0x00413F08: nop
    
            goto L_00413F28;
    }
    // 0x00413F08: nop

    // 0x00413F0C: lwc1        $f0, 0x20($s2)
    ctx->f0.u32l = MEM_W(ctx->r18, 0X20);
    // 0x00413F10: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00413F14: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x00413F18: trunc.w.s   $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x00413F1C: swc1        $f4, 0x1C($s2)
    MEM_W(0X1C, ctx->r18) = ctx->f4.u32l;
    // 0x00413F20: j           L_00413F30
    // 0x00413F24: nop

        goto L_00413F30;
    // 0x00413F24: nop

L_00413F28:
    // 0x00413F28: trunc.w.s   $f4, $f1
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 1);
    ctx->f4.u32l = TRUNC_W_S(ctx->f1.fl);
    // 0x00413F2C: swc1        $f4, 0x1C($s2)
    MEM_W(0X1C, ctx->r18) = ctx->f4.u32l;
L_00413F30:
    // 0x00413F30: lwc1        $f0, 0x10($s2)
    ctx->f0.u32l = MEM_W(ctx->r18, 0X10);
    // 0x00413F34: lwc1        $f1, 0x8($s2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r18, 0X8);
    // 0x00413F38: cvt.s.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.fl = CVT_S_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x00413F3C: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x00413F40: lwc1        $f0, 0x1C($s2)
    ctx->f0.u32l = MEM_W(ctx->r18, 0X1C);
    // 0x00413F44: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00413F48: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x00413F4C: trunc.w.s   $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x00413F50: swc1        $f4, 0x20($s2)
    MEM_W(0X20, ctx->r18) = ctx->f4.u32l;
    // 0x00413F54: lw          $ra, 0xC0($sp)
    ctx->r31 = MEM_W(ctx->r29, 0XC0);
    // 0x00413F58: lw          $s3, 0xBC($sp)
    ctx->r19 = MEM_W(ctx->r29, 0XBC);
    // 0x00413F5C: lw          $s2, 0xB8($sp)
    ctx->r18 = MEM_W(ctx->r29, 0XB8);
    // 0x00413F60: lw          $s1, 0xB4($sp)
    ctx->r17 = MEM_W(ctx->r29, 0XB4);
    // 0x00413F64: lw          $s0, 0xB0($sp)
    ctx->r16 = MEM_W(ctx->r29, 0XB0);
    // 0x00413F68: ldc1        $f20, 0xC8($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0XC8);
    // 0x00413F6C: jr          $ra
    // 0x00413F70: addiu       $sp, $sp, 0xD0
    ctx->r29 = ADD32(ctx->r29, 0XD0);
    return;
    // 0x00413F70: addiu       $sp, $sp, 0xD0
    ctx->r29 = ADD32(ctx->r29, 0XD0);
;}
RECOMP_FUNC void entry_0041384C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041384C: lw          $v0, 0x8($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X8);
    // 0x00413850: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x00413854: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x00413858: beq         $v0, $zero, L_00413888
    if (ctx->r2 == 0) {
        // 0x0041385C: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_00413888;
    }
    // 0x0041385C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x00413860: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00413864: lwc1        $f1, 0xBB8($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0XBB8);
    // 0x00413868: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0041386C: lwc1        $f0, 0x2034($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X2034);
    // 0x00413870: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00413874: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00413878: trunc.w.s   $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x0041387C: swc1        $f4, 0x8($s2)
    MEM_W(0X8, ctx->r18) = ctx->f4.u32l;
    // 0x00413880: j           L_0041391C
    // 0x00413884: nop

        goto L_0041391C;
    // 0x00413884: nop

L_00413888:
    // 0x00413888: lw          $v1, 0x0($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X0);
    // 0x0041388C: bne         $v1, $v0, L_004138E4
    if (ctx->r3 != ctx->r2) {
        // 0x00413890: nop
    
            goto L_004138E4;
    }
    // 0x00413890: nop

    // 0x00413894: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x00413898: lw          $v1, 0x2034($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X2034);
    // 0x0041389C: slti        $v0, $v1, 0xDF
    ctx->r2 = SIGNED(ctx->r3) < 0XDF ? 1 : 0;
    // 0x004138A0: bne         $v0, $zero, L_004138E4
    if (ctx->r2 != 0) {
        // 0x004138A4: nop
    
            goto L_004138E4;
    }
    // 0x004138A4: nop

    // 0x004138A8: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x004138AC: lwc1        $f1, 0xBBC($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0XBBC);
    // 0x004138B0: lwc1        $f0, 0x8($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X8);
    // 0x004138B4: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x004138B8: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x004138BC: mtc1        $v1, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r3;
    // 0x004138C0: cvt.s.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.fl = CVT_S_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x004138C4: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x004138C8: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x004138CC: lwc1        $f1, 0xBC0($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0XBC0);
    // 0x004138D0: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x004138D4: trunc.w.s   $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x004138D8: swc1        $f4, 0x8($s2)
    MEM_W(0X8, ctx->r18) = ctx->f4.u32l;
    // 0x004138DC: j           L_0041391C
    // 0x004138E0: nop

        goto L_0041391C;
    // 0x004138E0: nop

L_004138E4:
    // 0x004138E4: lw          $v1, 0x8($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X8);
    // 0x004138E8: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x004138EC: lw          $v0, 0x2034($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2034);
    // 0x004138F0: mult        $v1, $v0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x004138F4: mflo        $v1
    ctx->r3 = lo;
    // 0x004138F8: lui         $v0, 0x939A
    ctx->r2 = S32(0X939A << 16);
    // 0x004138FC: ori         $v0, $v0, 0x85C5
    ctx->r2 = ctx->r2 | 0X85C5;
    // 0x00413900: mult        $v1, $v0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x00413904: mfhi        $t4
    ctx->r12 = hi;
    // 0x00413908: addu        $v0, $t4, $v1
    ctx->r2 = ADD32(ctx->r12, ctx->r3);
    // 0x0041390C: sra         $v0, $v0, 7
    ctx->r2 = S32(SIGNED(ctx->r2) >> 7);
    // 0x00413910: sra         $v1, $v1, 31
    ctx->r3 = S32(SIGNED(ctx->r3) >> 31);
    // 0x00413914: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x00413918: sw          $v0, 0x8($s2)
    MEM_W(0X8, ctx->r18) = ctx->r2;
L_0041391C:
    // 0x0041391C: lw          $v1, 0x4($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X4);
    // 0x00413920: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x00413924: lw          $v0, 0x2030($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2030);
    // 0x00413928: mult        $v1, $v0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x0041392C: mflo        $v1
    ctx->r3 = lo;
    // 0x00413930: lui         $v0, 0xE6C2
    ctx->r2 = S32(0XE6C2 << 16);
    // 0x00413934: ori         $v0, $v0, 0xB449
    ctx->r2 = ctx->r2 | 0XB449;
    // 0x00413938: mult        $v1, $v0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x0041393C: mfhi        $t4
    ctx->r12 = hi;
    // 0x00413940: addu        $v0, $t4, $v1
    ctx->r2 = ADD32(ctx->r12, ctx->r3);
    // 0x00413944: sra         $v0, $v0, 8
    ctx->r2 = S32(SIGNED(ctx->r2) >> 8);
    // 0x00413948: sra         $v1, $v1, 31
    ctx->r3 = S32(SIGNED(ctx->r3) >> 31);
    // 0x0041394C: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x00413950: j           L_00413E14
    // 0x00413954: sw          $v0, 0x4($s2)
    MEM_W(0X4, ctx->r18) = ctx->r2;
        goto L_00413E14;
    // 0x00413954: sw          $v0, 0x4($s2)
    MEM_W(0X4, ctx->r18) = ctx->r2;
    // 0x00413958: lw          $v0, 0x8($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X8);
    // 0x0041395C: andi        $v1, $v0, 0x3FE0
    ctx->r3 = ctx->r2 & 0X3FE0;
    // 0x00413960: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x00413964: beq         $v1, $v0, L_00413A0C
    if (ctx->r3 == ctx->r2) {
        // 0x00413968: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_00413A0C;
    }
    // 0x00413968: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0041396C: sltiu       $v0, $v1, 0x201
    ctx->r2 = ctx->r3 < 0X201 ? 1 : 0;
    // 0x00413970: beq         $v0, $zero, L_004139BC
    if (ctx->r2 == 0) {
        // 0x00413974: addiu       $v0, $zero, 0x40
        ctx->r2 = ADD32(0, 0X40);
            goto L_004139BC;
    }
    // 0x00413974: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x00413978: beql        $v1, $v0, L_00413A20
    if (ctx->r3 == ctx->r2) {
        // 0x0041397C: addiu       $a0, $zero, 0x1
        ctx->r4 = ADD32(0, 0X1);
            goto L_00413A20;
    }
    goto skip_0;
    // 0x0041397C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    skip_0:
    // 0x00413980: sltiu       $v0, $v1, 0x41
    ctx->r2 = ctx->r3 < 0X41 ? 1 : 0;
    // 0x00413984: beq         $v0, $zero, L_0041399C
    if (ctx->r2 == 0) {
        // 0x00413988: addiu       $v0, $zero, 0x20
        ctx->r2 = ADD32(0, 0X20);
            goto L_0041399C;
    }
    // 0x00413988: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x0041398C: beq         $v1, $v0, L_00413A24
    if (ctx->r3 == ctx->r2) {
        // 0x00413990: sll         $v0, $a0, 3
        ctx->r2 = S32(ctx->r4 << 3);
            goto L_00413A24;
    }
    // 0x00413990: sll         $v0, $a0, 3
    ctx->r2 = S32(ctx->r4 << 3);
    // 0x00413994: j           L_00413A28
    // 0x00413998: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
        goto L_00413A28;
    // 0x00413998: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
L_0041399C:
    // 0x0041399C: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x004139A0: beq         $v1, $v0, L_00413A20
    if (ctx->r3 == ctx->r2) {
        // 0x004139A4: addiu       $a0, $zero, 0x2
        ctx->r4 = ADD32(0, 0X2);
            goto L_00413A20;
    }
    // 0x004139A4: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x004139A8: addiu       $v0, $zero, 0x100
    ctx->r2 = ADD32(0, 0X100);
    // 0x004139AC: beq         $v1, $v0, L_00413A04
    if (ctx->r3 == ctx->r2) {
        // 0x004139B0: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_00413A04;
    }
    // 0x004139B0: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x004139B4: j           L_00413A24
    // 0x004139B8: sll         $v0, $a0, 3
    ctx->r2 = S32(ctx->r4 << 3);
        goto L_00413A24;
    // 0x004139B8: sll         $v0, $a0, 3
    ctx->r2 = S32(ctx->r4 << 3);
L_004139BC:
    // 0x004139BC: addiu       $v0, $zero, 0x800
    ctx->r2 = ADD32(0, 0X800);
    // 0x004139C0: beq         $v1, $v0, L_00413A20
    if (ctx->r3 == ctx->r2) {
        // 0x004139C4: addiu       $a0, $zero, 0x6
        ctx->r4 = ADD32(0, 0X6);
            goto L_00413A20;
    }
    // 0x004139C4: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    // 0x004139C8: sltiu       $v0, $v1, 0x801
    ctx->r2 = ctx->r3 < 0X801 ? 1 : 0;
    // 0x004139CC: beq         $v0, $zero, L_004139E4
    if (ctx->r2 == 0) {
        // 0x004139D0: addiu       $v0, $zero, 0x400
        ctx->r2 = ADD32(0, 0X400);
            goto L_004139E4;
    }
    // 0x004139D0: addiu       $v0, $zero, 0x400
    ctx->r2 = ADD32(0, 0X400);
    // 0x004139D4: beq         $v1, $v0, L_00413A14
    if (ctx->r3 == ctx->r2) {
        // 0x004139D8: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_00413A14;
    }
    // 0x004139D8: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x004139DC: j           L_00413A24
    // 0x004139E0: sll         $v0, $a0, 3
    ctx->r2 = S32(ctx->r4 << 3);
        goto L_00413A24;
    // 0x004139E0: sll         $v0, $a0, 3
    ctx->r2 = S32(ctx->r4 << 3);
L_004139E4:
    // 0x004139E4: addiu       $v0, $zero, 0x1000
    ctx->r2 = ADD32(0, 0X1000);
    // 0x004139E8: beq         $v1, $v0, L_00413A20
    if (ctx->r3 == ctx->r2) {
        // 0x004139EC: addiu       $a0, $zero, 0x7
        ctx->r4 = ADD32(0, 0X7);
            goto L_00413A20;
    }
    // 0x004139EC: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    // 0x004139F0: addiu       $v0, $zero, 0x2000
    ctx->r2 = ADD32(0, 0X2000);
    // 0x004139F4: beq         $v1, $v0, L_00413A1C
    if (ctx->r3 == ctx->r2) {
        // 0x004139F8: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_00413A1C;
    }
    // 0x004139F8: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x004139FC: j           L_00413A24
    // 0x00413A00: sll         $v0, $a0, 3
    ctx->r2 = S32(ctx->r4 << 3);
        goto L_00413A24;
    // 0x00413A00: sll         $v0, $a0, 3
    ctx->r2 = S32(ctx->r4 << 3);
L_00413A04:
    // 0x00413A04: j           L_00413A20
    // 0x00413A08: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
        goto L_00413A20;
    // 0x00413A08: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
L_00413A0C:
    // 0x00413A0C: j           L_00413A20
    // 0x00413A10: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
        goto L_00413A20;
    // 0x00413A10: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
L_00413A14:
    // 0x00413A14: j           L_00413A20
    // 0x00413A18: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
        goto L_00413A20;
    // 0x00413A18: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
L_00413A1C:
    // 0x00413A1C: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
L_00413A20:
    // 0x00413A20: sll         $v0, $a0, 3
    ctx->r2 = S32(ctx->r4 << 3);
L_00413A24:
    // 0x00413A24: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
L_00413A28:
    // 0x00413A28: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x00413A2C: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x00413A30: addiu       $v1, $v1, 0x1BD4
    ctx->r3 = ADD32(ctx->r3, 0X1BD4);
    // 0x00413A34: addu        $s1, $v0, $v1
    ctx->r17 = ADD32(ctx->r2, ctx->r3);
    // 0x00413A38: lw          $v0, 0x4($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X4);
    // 0x00413A3C: sw          $v0, 0x4($s2)
    MEM_W(0X4, ctx->r18) = ctx->r2;
    // 0x00413A40: lw          $v1, 0x8($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X8);
    // 0x00413A44: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x00413A48: lw          $v0, 0x2034($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2034);
    // 0x00413A4C: mult        $v1, $v0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x00413A50: mflo        $v1
    ctx->r3 = lo;
    // 0x00413A54: lui         $v0, 0x939A
    ctx->r2 = S32(0X939A << 16);
    // 0x00413A58: ori         $v0, $v0, 0x85C5
    ctx->r2 = ctx->r2 | 0X85C5;
    // 0x00413A5C: mult        $v1, $v0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x00413A60: mfhi        $t4
    ctx->r12 = hi;
    // 0x00413A64: addu        $v0, $t4, $v1
    ctx->r2 = ADD32(ctx->r12, ctx->r3);
    // 0x00413A68: sra         $v0, $v0, 7
    ctx->r2 = S32(SIGNED(ctx->r2) >> 7);
    // 0x00413A6C: sra         $v1, $v1, 31
    ctx->r3 = S32(SIGNED(ctx->r3) >> 31);
    // 0x00413A70: j           L_00413E10
    // 0x00413A74: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
        goto L_00413E10;
    // 0x00413A74: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x00413A78: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x00413A7C: addiu       $a0, $a0, -0x5378
    ctx->r4 = ADD32(ctx->r4, -0X5378);
    // 0x00413A80: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x00413A84: addiu       $v0, $zero, 0xD
    ctx->r2 = ADD32(0, 0XD);
    // 0x00413A88: bne         $v1, $v0, L_00413AA0
    if (ctx->r3 != ctx->r2) {
        // 0x00413A8C: lui         $v1, 0x4000
        ctx->r3 = S32(0X4000 << 16);
            goto L_00413AA0;
    }
    // 0x00413A8C: lui         $v1, 0x4000
    ctx->r3 = S32(0X4000 << 16);
    // 0x00413A90: lw          $v0, 0x8($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X8);
    // 0x00413A94: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x00413A98: bne         $v0, $zero, L_00413ACC
    if (ctx->r2 != 0) {
        // 0x00413A9C: addiu       $v0, $zero, 0x11C
        ctx->r2 = ADD32(0, 0X11C);
            goto L_00413ACC;
    }
    // 0x00413A9C: addiu       $v0, $zero, 0x11C
    ctx->r2 = ADD32(0, 0X11C);
L_00413AA0:
    // 0x00413AA0: lbu         $v0, -0x197($a0)
    ctx->r2 = MEM_BU(ctx->r4, -0X197);
    // 0x00413AA4: beq         $v0, $zero, L_00413ADC
    if (ctx->r2 == 0) {
        // 0x00413AA8: nop
    
            goto L_00413ADC;
    }
    // 0x00413AA8: nop

    // 0x00413AAC: lw          $v0, 0x8($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X8);
    // 0x00413AB0: bgez        $v0, L_00413ADC
    if (SIGNED(ctx->r2) >= 0) {
        // 0x00413AB4: nop
    
            goto L_00413ADC;
    }
    // 0x00413AB4: nop

    // 0x00413AB8: jal         0x00266B80
    // 0x00413ABC: nop

    func_00266B80(rdram, ctx);
        goto after_0;
    // 0x00413ABC: nop

    after_0:
    // 0x00413AC0: lui         $v1, 0x40
    ctx->r3 = S32(0X40 << 16);
    // 0x00413AC4: bne         $v0, $v1, L_00413ADC
    if (ctx->r2 != ctx->r3) {
        // 0x00413AC8: addiu       $v0, $zero, 0x11C
        ctx->r2 = ADD32(0, 0X11C);
            goto L_00413ADC;
    }
    // 0x00413AC8: addiu       $v0, $zero, 0x11C
    ctx->r2 = ADD32(0, 0X11C);
L_00413ACC:
    // 0x00413ACC: sw          $v0, 0x4($s2)
    MEM_W(0X4, ctx->r18) = ctx->r2;
    // 0x00413AD0: addiu       $v0, $zero, 0xDE
    ctx->r2 = ADD32(0, 0XDE);
    // 0x00413AD4: j           L_00413AF0
    // 0x00413AD8: sw          $v0, 0x8($s2)
    MEM_W(0X8, ctx->r18) = ctx->r2;
        goto L_00413AF0;
    // 0x00413AD8: sw          $v0, 0x8($s2)
    MEM_W(0X8, ctx->r18) = ctx->r2;
L_00413ADC:
    // 0x00413ADC: lw          $a0, 0x14($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X14);
    // 0x00413AE0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x00413AE4: addiu       $a2, $s2, 0x4
    ctx->r6 = ADD32(ctx->r18, 0X4);
    // 0x00413AE8: jal         0x0027AEA8
    // 0x00413AEC: addiu       $a3, $s2, 0x8
    ctx->r7 = ADD32(ctx->r18, 0X8);
    func_0027AEA8(rdram, ctx);
        goto after_1;
    // 0x00413AEC: addiu       $a3, $s2, 0x8
    ctx->r7 = ADD32(ctx->r18, 0X8);
    after_1:
L_00413AF0:
    // 0x00413AF0: lw          $v0, 0x8($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X8);
    // 0x00413AF4: lui         $v1, 0x1000
    ctx->r3 = S32(0X1000 << 16);
    // 0x00413AF8: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x00413AFC: beq         $v0, $zero, L_00413B4C
    if (ctx->r2 == 0) {
        // 0x00413B00: nop
    
            goto L_00413B4C;
    }
    // 0x00413B00: nop

    // 0x00413B04: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x00413B08: lwc1        $f3, 0x4($s2)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r18, 0X4);
    // 0x00413B0C: cvt.s.w     $f3, $f3
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    ctx->f3.fl = CVT_S_W(ctx->f_odd[(3 - 1) * 2]);
    // 0x00413B10: c.eq.s      $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f3.fl == ctx->f0.fl;
    // 0x00413B14: nop

    // 0x00413B18: bc1t        L_00413B4C
    if (c1cs) {
        // 0x00413B1C: nop
    
            goto L_00413B4C;
    }
    // 0x00413B1C: nop

    // 0x00413B20: lwc1        $f2, 0x8($s2)
    ctx->f2.u32l = MEM_W(ctx->r18, 0X8);
    // 0x00413B24: cvt.s.w     $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    ctx->f2.fl = CVT_S_W(ctx->f2.u32l);
    // 0x00413B28: c.eq.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl == ctx->f0.fl;
    // 0x00413B2C: nop

    // 0x00413B30: bc1t        L_00413B4C
    if (c1cs) {
        // 0x00413B34: nop
    
            goto L_00413B4C;
    }
    // 0x00413B34: nop

    // 0x00413B38: lwc1        $f0, 0x288($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X288);
    // 0x00413B3C: lwc1        $f1, 0x28C($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X28C);
    // 0x00413B40: div.s       $f3, $f0, $f3
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f3.fl = DIV_S(ctx->f0.fl, ctx->f3.fl);
    // 0x00413B44: j           L_00413B7C
    // 0x00413B48: div.s       $f0, $f1, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = DIV_S(ctx->f1.fl, ctx->f2.fl);
        goto L_00413B7C;
    // 0x00413B48: div.s       $f0, $f1, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = DIV_S(ctx->f1.fl, ctx->f2.fl);
L_00413B4C:
    // 0x00413B4C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00413B50: lwc1        $f1, 0xBC4($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0XBC4);
    // 0x00413B54: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00413B58: lwc1        $f0, 0x2030($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X2030);
    // 0x00413B5C: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00413B60: mul.s       $f3, $f0, $f1
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f3.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00413B64: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00413B68: lwc1        $f1, 0xBC8($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0XBC8);
    // 0x00413B6C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00413B70: lwc1        $f0, 0x2034($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X2034);
    // 0x00413B74: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00413B78: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
L_00413B7C:
    // 0x00413B7C: swc1        $f3, 0xC($s2)
    MEM_W(0XC, ctx->r18) = ctx->f_odd[(3 - 1) * 2];
    // 0x00413B80: j           L_00413E14
    // 0x00413B84: swc1        $f0, 0x10($s2)
    MEM_W(0X10, ctx->r18) = ctx->f0.u32l;
        goto L_00413E14;
    // 0x00413B84: swc1        $f0, 0x10($s2)
    MEM_W(0X10, ctx->r18) = ctx->f0.u32l;
    // 0x00413B88: addiu       $v1, $sp, 0x38
    ctx->r3 = ADD32(ctx->r29, 0X38);
    // 0x00413B8C: addu        $v0, $s2, $zero
    ctx->r2 = ADD32(ctx->r18, 0);
    // 0x00413B90: addiu       $a0, $s2, 0x20
    ctx->r4 = ADD32(ctx->r18, 0X20);
L_00413B94:
    // 0x00413B94: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x00413B98: lw          $t1, 0x4($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X4);
    // 0x00413B9C: lw          $t2, 0x8($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X8);
    // 0x00413BA0: lw          $t3, 0xC($v0)
    ctx->r11 = MEM_W(ctx->r2, 0XC);
    // 0x00413BA4: sw          $t0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r8;
    // 0x00413BA8: sw          $t1, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r9;
    // 0x00413BAC: sw          $t2, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r10;
    // 0x00413BB0: sw          $t3, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r11;
    // 0x00413BB4: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
    // 0x00413BB8: bne         $v0, $a0, L_00413B94
    if (ctx->r2 != ctx->r4) {
        // 0x00413BBC: addiu       $v1, $v1, 0x10
        ctx->r3 = ADD32(ctx->r3, 0X10);
            goto L_00413B94;
    }
    // 0x00413BBC: addiu       $v1, $v1, 0x10
    ctx->r3 = ADD32(ctx->r3, 0X10);
    // 0x00413BC0: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x00413BC4: sw          $t0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r8;
    // 0x00413BC8: addiu       $v1, $sp, 0x10
    ctx->r3 = ADD32(ctx->r29, 0X10);
    // 0x00413BCC: addu        $v0, $s3, $zero
    ctx->r2 = ADD32(ctx->r19, 0);
    // 0x00413BD0: addiu       $a0, $s3, 0x20
    ctx->r4 = ADD32(ctx->r19, 0X20);
L_00413BD4:
    // 0x00413BD4: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x00413BD8: lw          $t1, 0x4($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X4);
    // 0x00413BDC: lw          $t2, 0x8($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X8);
    // 0x00413BE0: lw          $t3, 0xC($v0)
    ctx->r11 = MEM_W(ctx->r2, 0XC);
    // 0x00413BE4: sw          $t0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r8;
    // 0x00413BE8: sw          $t1, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r9;
    // 0x00413BEC: sw          $t2, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r10;
    // 0x00413BF0: sw          $t3, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r11;
    // 0x00413BF4: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
    // 0x00413BF8: bne         $v0, $a0, L_00413BD4
    if (ctx->r2 != ctx->r4) {
        // 0x00413BFC: addiu       $v1, $v1, 0x10
        ctx->r3 = ADD32(ctx->r3, 0X10);
            goto L_00413BD4;
    }
    // 0x00413BFC: addiu       $v1, $v1, 0x10
    ctx->r3 = ADD32(ctx->r3, 0X10);
    // 0x00413C00: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x00413C04: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    // 0x00413C08: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x00413C0C: lw          $t1, 0x4($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X4);
    // 0x00413C10: sw          $t0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r8;
    // 0x00413C14: sw          $t1, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r9;
    // 0x00413C18: jal         0x0041363C
    // 0x00413C1C: sh          $zero, 0x14($sp)
    MEM_H(0X14, ctx->r29) = 0;
    func_0041363C(rdram, ctx);
        goto after_2;
    // 0x00413C1C: sh          $zero, 0x14($sp)
    MEM_H(0X14, ctx->r29) = 0;
    after_2:
    // 0x00413C20: addiu       $v1, $sp, 0x60
    ctx->r3 = ADD32(ctx->r29, 0X60);
    // 0x00413C24: addu        $v0, $s2, $zero
    ctx->r2 = ADD32(ctx->r18, 0);
    // 0x00413C28: addiu       $a0, $s2, 0x20
    ctx->r4 = ADD32(ctx->r18, 0X20);
L_00413C2C:
    // 0x00413C2C: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x00413C30: lw          $t1, 0x4($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X4);
    // 0x00413C34: lw          $t2, 0x8($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X8);
    // 0x00413C38: lw          $t3, 0xC($v0)
    ctx->r11 = MEM_W(ctx->r2, 0XC);
    // 0x00413C3C: sw          $t0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r8;
    // 0x00413C40: sw          $t1, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r9;
    // 0x00413C44: sw          $t2, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r10;
    // 0x00413C48: sw          $t3, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r11;
    // 0x00413C4C: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
    // 0x00413C50: bne         $v0, $a0, L_00413C2C
    if (ctx->r2 != ctx->r4) {
        // 0x00413C54: addiu       $v1, $v1, 0x10
        ctx->r3 = ADD32(ctx->r3, 0X10);
            goto L_00413C2C;
    }
    // 0x00413C54: addiu       $v1, $v1, 0x10
    ctx->r3 = ADD32(ctx->r3, 0X10);
    // 0x00413C58: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x00413C5C: sw          $t0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r8;
    // 0x00413C60: addiu       $v1, $sp, 0x10
    ctx->r3 = ADD32(ctx->r29, 0X10);
    // 0x00413C64: addu        $v0, $s3, $zero
    ctx->r2 = ADD32(ctx->r19, 0);
    // 0x00413C68: addiu       $a0, $s3, 0x20
    ctx->r4 = ADD32(ctx->r19, 0X20);
L_00413C6C:
    // 0x00413C6C: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x00413C70: lw          $t1, 0x4($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X4);
    // 0x00413C74: lw          $t2, 0x8($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X8);
    // 0x00413C78: lw          $t3, 0xC($v0)
    ctx->r11 = MEM_W(ctx->r2, 0XC);
    // 0x00413C7C: sw          $t0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r8;
    // 0x00413C80: sw          $t1, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r9;
    // 0x00413C84: sw          $t2, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r10;
    // 0x00413C88: sw          $t3, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r11;
    // 0x00413C8C: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
    // 0x00413C90: bne         $v0, $a0, L_00413C6C
    if (ctx->r2 != ctx->r4) {
        // 0x00413C94: addiu       $v1, $v1, 0x10
        ctx->r3 = ADD32(ctx->r3, 0X10);
            goto L_00413C6C;
    }
    // 0x00413C94: addiu       $v1, $v1, 0x10
    ctx->r3 = ADD32(ctx->r3, 0X10);
    // 0x00413C98: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x00413C9C: addiu       $a1, $sp, 0x60
    ctx->r5 = ADD32(ctx->r29, 0X60);
    // 0x00413CA0: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x00413CA4: lw          $t1, 0x4($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X4);
    // 0x00413CA8: sw          $t0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r8;
    // 0x00413CAC: sw          $t1, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r9;
    // 0x00413CB0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00413CB4: sh          $v0, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r2;
    // 0x00413CB8: jal         0x0041363C
    // 0x00413CBC: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    func_0041363C(rdram, ctx);
        goto after_3;
    // 0x00413CBC: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    after_3:
    // 0x00413CC0: addiu       $v1, $sp, 0x88
    ctx->r3 = ADD32(ctx->r29, 0X88);
    // 0x00413CC4: addu        $v0, $s2, $zero
    ctx->r2 = ADD32(ctx->r18, 0);
    // 0x00413CC8: addiu       $a0, $s2, 0x20
    ctx->r4 = ADD32(ctx->r18, 0X20);
L_00413CCC:
    // 0x00413CCC: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x00413CD0: lw          $t1, 0x4($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X4);
    // 0x00413CD4: lw          $t2, 0x8($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X8);
    // 0x00413CD8: lw          $t3, 0xC($v0)
    ctx->r11 = MEM_W(ctx->r2, 0XC);
    // 0x00413CDC: sw          $t0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r8;
    // 0x00413CE0: sw          $t1, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r9;
    // 0x00413CE4: sw          $t2, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r10;
    // 0x00413CE8: sw          $t3, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r11;
    // 0x00413CEC: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
    // 0x00413CF0: bne         $v0, $a0, L_00413CCC
    if (ctx->r2 != ctx->r4) {
        // 0x00413CF4: addiu       $v1, $v1, 0x10
        ctx->r3 = ADD32(ctx->r3, 0X10);
            goto L_00413CCC;
    }
    // 0x00413CF4: addiu       $v1, $v1, 0x10
    ctx->r3 = ADD32(ctx->r3, 0X10);
    // 0x00413CF8: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x00413CFC: sw          $t0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r8;
    // 0x00413D00: addiu       $v1, $sp, 0x10
    ctx->r3 = ADD32(ctx->r29, 0X10);
    // 0x00413D04: addu        $v0, $s3, $zero
    ctx->r2 = ADD32(ctx->r19, 0);
    // 0x00413D08: addiu       $a0, $s3, 0x20
    ctx->r4 = ADD32(ctx->r19, 0X20);
L_00413D0C:
    // 0x00413D0C: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x00413D10: lw          $t1, 0x4($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X4);
    // 0x00413D14: lw          $t2, 0x8($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X8);
    // 0x00413D18: lw          $t3, 0xC($v0)
    ctx->r11 = MEM_W(ctx->r2, 0XC);
    // 0x00413D1C: sw          $t0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r8;
    // 0x00413D20: sw          $t1, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r9;
    // 0x00413D24: sw          $t2, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r10;
    // 0x00413D28: sw          $t3, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r11;
    // 0x00413D2C: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
    // 0x00413D30: bne         $v0, $a0, L_00413D0C
    if (ctx->r2 != ctx->r4) {
        // 0x00413D34: addiu       $v1, $v1, 0x10
        ctx->r3 = ADD32(ctx->r3, 0X10);
            goto L_00413D0C;
    }
    // 0x00413D34: addiu       $v1, $v1, 0x10
    ctx->r3 = ADD32(ctx->r3, 0X10);
    // 0x00413D38: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x00413D3C: addiu       $a1, $sp, 0x88
    ctx->r5 = ADD32(ctx->r29, 0X88);
    // 0x00413D40: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x00413D44: lw          $t1, 0x4($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X4);
    // 0x00413D48: sw          $t0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r8;
    // 0x00413D4C: sw          $t1, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r9;
    // 0x00413D50: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00413D54: sh          $v0, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r2;
    // 0x00413D58: jal         0x0041363C
    // 0x00413D5C: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    func_0041363C(rdram, ctx);
        goto after_4;
    // 0x00413D5C: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    after_4:
    // 0x00413D60: lw          $v1, 0x64($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X64);
    // 0x00413D64: lw          $v0, 0x8C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X8C);
    // 0x00413D68: lw          $a0, 0x3C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X3C);
    // 0x00413D6C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x00413D70: slt         $v0, $v1, $a0
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x00413D74: bnel        $v0, $zero, L_00413D7C
    if (ctx->r2 != 0) {
        // 0x00413D78: addu        $v1, $a0, $zero
        ctx->r3 = ADD32(ctx->r4, 0);
            goto L_00413D7C;
    }
    goto skip_1;
    // 0x00413D78: addu        $v1, $a0, $zero
    ctx->r3 = ADD32(ctx->r4, 0);
    skip_1:
L_00413D7C:
    // 0x00413D7C: sw          $v1, 0x4($s2)
    MEM_W(0X4, ctx->r18) = ctx->r3;
    // 0x00413D80: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x00413D84: lw          $v1, 0x68($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X68);
    // 0x00413D88: lw          $v0, 0x90($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X90);
    // 0x00413D8C: addu        $a0, $a0, $v1
    ctx->r4 = ADD32(ctx->r4, ctx->r3);
    // 0x00413D90: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x00413D94: srl         $v1, $v0, 31
    ctx->r3 = S32(U32(ctx->r2) >> 31);
    // 0x00413D98: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x00413D9C: sra         $v0, $v0, 1
    ctx->r2 = S32(SIGNED(ctx->r2) >> 1);
    // 0x00413DA0: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x00413DA4: j           L_00413E14
    // 0x00413DA8: sw          $a0, 0x8($s2)
    MEM_W(0X8, ctx->r18) = ctx->r4;
        goto L_00413E14;
    // 0x00413DA8: sw          $a0, 0x8($s2)
    MEM_W(0X8, ctx->r18) = ctx->r4;
    // 0x00413DAC: lw          $v0, 0x14($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X14);
    // 0x00413DB0: lwc1        $f1, 0x288($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X288);
    // 0x00413DB4: lwc1        $f0, 0x24($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X24);
    // 0x00413DB8: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00413DBC: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00413DC0: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00413DC4: lwc1        $f1, 0x2030($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X2030);
    // 0x00413DC8: cvt.s.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.fl = CVT_S_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x00413DCC: div.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = DIV_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00413DD0: trunc.w.s   $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x00413DD4: swc1        $f4, 0x4($s2)
    MEM_W(0X4, ctx->r18) = ctx->f4.u32l;
    // 0x00413DD8: lwc1        $f1, 0x28C($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X28C);
    // 0x00413DDC: lwc1        $f0, 0x28($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X28);
    // 0x00413DE0: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00413DE4: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00413DE8: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00413DEC: lwc1        $f1, 0x2034($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X2034);
    // 0x00413DF0: cvt.s.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.fl = CVT_S_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x00413DF4: div.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = DIV_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00413DF8: trunc.w.s   $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x00413DFC: swc1        $f4, 0x8($s2)
    MEM_W(0X8, ctx->r18) = ctx->f4.u32l;
    // 0x00413E00: j           L_00413E14
    // 0x00413E04: nop

        goto L_00413E14;
    // 0x00413E04: nop

    // 0x00413E08: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00413E0C: sw          $v0, 0x4($s2)
    MEM_W(0X4, ctx->r18) = ctx->r2;
L_00413E10:
    // 0x00413E10: sw          $v0, 0x8($s2)
    MEM_W(0X8, ctx->r18) = ctx->r2;
L_00413E14:
    // 0x00413E14: lh          $v0, 0xC($s3)
    ctx->r2 = MEM_H(ctx->r19, 0XC);
    // 0x00413E18: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x00413E1C: lw          $v1, 0x2030($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X2030);
    // 0x00413E20: mult        $v0, $v1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x00413E24: mflo        $v0
    ctx->r2 = lo;
    // 0x00413E28: lui         $v1, 0xE6C2
    ctx->r3 = S32(0XE6C2 << 16);
    // 0x00413E2C: ori         $v1, $v1, 0xB449
    ctx->r3 = ctx->r3 | 0XB449;
    // 0x00413E30: mult        $v0, $v1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x00413E34: lw          $a0, 0x8($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X8);
    // 0x00413E38: mfhi        $v1
    ctx->r3 = hi;
    // 0x00413E3C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x00413E40: sra         $v1, $v1, 8
    ctx->r3 = S32(SIGNED(ctx->r3) >> 8);
    // 0x00413E44: sra         $v0, $v0, 31
    ctx->r2 = S32(SIGNED(ctx->r2) >> 31);
    // 0x00413E48: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x00413E4C: mtc1        $v1, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r3;
    // 0x00413E50: cvt.s.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.fl = CVT_S_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x00413E54: andi        $v0, $a0, 0x8000
    ctx->r2 = ctx->r4 & 0X8000;
    // 0x00413E58: bne         $v0, $zero, L_00413E8C
    if (ctx->r2 != 0) {
        // 0x00413E5C: andi        $v0, $a0, 0x4000
        ctx->r2 = ctx->r4 & 0X4000;
            goto L_00413E8C;
    }
    // 0x00413E5C: andi        $v0, $a0, 0x4000
    ctx->r2 = ctx->r4 & 0X4000;
    // 0x00413E60: beq         $v0, $zero, L_00413E84
    if (ctx->r2 == 0) {
        // 0x00413E64: nop
    
            goto L_00413E84;
    }
    // 0x00413E64: nop

    // 0x00413E68: lwc1        $f0, 0x18($s2)
    ctx->f0.u32l = MEM_W(ctx->r18, 0X18);
    // 0x00413E6C: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00413E70: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x00413E74: trunc.w.s   $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x00413E78: swc1        $f4, 0x14($s2)
    MEM_W(0X14, ctx->r18) = ctx->f4.u32l;
    // 0x00413E7C: j           L_00413E8C
    // 0x00413E80: nop

        goto L_00413E8C;
    // 0x00413E80: nop

L_00413E84:
    // 0x00413E84: trunc.w.s   $f4, $f1
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 1);
    ctx->f4.u32l = TRUNC_W_S(ctx->f1.fl);
    // 0x00413E88: swc1        $f4, 0x14($s2)
    MEM_W(0X14, ctx->r18) = ctx->f4.u32l;
L_00413E8C:
    // 0x00413E8C: lwc1        $f0, 0xC($s2)
    ctx->f0.u32l = MEM_W(ctx->r18, 0XC);
    // 0x00413E90: lwc1        $f1, 0x4($s2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r18, 0X4);
    // 0x00413E94: cvt.s.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.fl = CVT_S_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x00413E98: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x00413E9C: lwc1        $f0, 0x14($s2)
    ctx->f0.u32l = MEM_W(ctx->r18, 0X14);
    // 0x00413EA0: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00413EA4: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x00413EA8: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x00413EAC: lw          $v0, 0x2034($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2034);
    // 0x00413EB0: trunc.w.s   $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x00413EB4: swc1        $f4, 0x18($s2)
    MEM_W(0X18, ctx->r18) = ctx->f4.u32l;
    // 0x00413EB8: lh          $v1, 0xE($s3)
    ctx->r3 = MEM_H(ctx->r19, 0XE);
    // 0x00413EBC: mult        $v1, $v0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x00413EC0: mflo        $v1
    ctx->r3 = lo;
    // 0x00413EC4: lui         $v0, 0x939A
    ctx->r2 = S32(0X939A << 16);
    // 0x00413EC8: ori         $v0, $v0, 0x85C5
    ctx->r2 = ctx->r2 | 0X85C5;
    // 0x00413ECC: mult        $v1, $v0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x00413ED0: lw          $a0, 0x8($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X8);
    // 0x00413ED4: mfhi        $t4
    ctx->r12 = hi;
    // 0x00413ED8: addu        $v0, $t4, $v1
    ctx->r2 = ADD32(ctx->r12, ctx->r3);
    // 0x00413EDC: sra         $v0, $v0, 7
    ctx->r2 = S32(SIGNED(ctx->r2) >> 7);
    // 0x00413EE0: sra         $v1, $v1, 31
    ctx->r3 = S32(SIGNED(ctx->r3) >> 31);
    // 0x00413EE4: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x00413EE8: mtc1        $v0, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r2;
    // 0x00413EEC: cvt.s.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.fl = CVT_S_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x00413EF0: lui         $v0, 0x2
    ctx->r2 = S32(0X2 << 16);
    // 0x00413EF4: and         $v0, $a0, $v0
    ctx->r2 = ctx->r4 & ctx->r2;
    // 0x00413EF8: bne         $v0, $zero, L_00413F30
    if (ctx->r2 != 0) {
        // 0x00413EFC: lui         $v0, 0x1
        ctx->r2 = S32(0X1 << 16);
            goto L_00413F30;
    }
    // 0x00413EFC: lui         $v0, 0x1
    ctx->r2 = S32(0X1 << 16);
    // 0x00413F00: and         $v0, $a0, $v0
    ctx->r2 = ctx->r4 & ctx->r2;
    // 0x00413F04: beq         $v0, $zero, L_00413F28
    if (ctx->r2 == 0) {
        // 0x00413F08: nop
    
            goto L_00413F28;
    }
    // 0x00413F08: nop

    // 0x00413F0C: lwc1        $f0, 0x20($s2)
    ctx->f0.u32l = MEM_W(ctx->r18, 0X20);
    // 0x00413F10: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00413F14: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x00413F18: trunc.w.s   $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x00413F1C: swc1        $f4, 0x1C($s2)
    MEM_W(0X1C, ctx->r18) = ctx->f4.u32l;
    // 0x00413F20: j           L_00413F30
    // 0x00413F24: nop

        goto L_00413F30;
    // 0x00413F24: nop

L_00413F28:
    // 0x00413F28: trunc.w.s   $f4, $f1
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 1);
    ctx->f4.u32l = TRUNC_W_S(ctx->f1.fl);
    // 0x00413F2C: swc1        $f4, 0x1C($s2)
    MEM_W(0X1C, ctx->r18) = ctx->f4.u32l;
L_00413F30:
    // 0x00413F30: lwc1        $f0, 0x10($s2)
    ctx->f0.u32l = MEM_W(ctx->r18, 0X10);
    // 0x00413F34: lwc1        $f1, 0x8($s2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r18, 0X8);
    // 0x00413F38: cvt.s.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.fl = CVT_S_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x00413F3C: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x00413F40: lwc1        $f0, 0x1C($s2)
    ctx->f0.u32l = MEM_W(ctx->r18, 0X1C);
    // 0x00413F44: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00413F48: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x00413F4C: trunc.w.s   $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x00413F50: swc1        $f4, 0x20($s2)
    MEM_W(0X20, ctx->r18) = ctx->f4.u32l;
    // 0x00413F54: lw          $ra, 0xC0($sp)
    ctx->r31 = MEM_W(ctx->r29, 0XC0);
    // 0x00413F58: lw          $s3, 0xBC($sp)
    ctx->r19 = MEM_W(ctx->r29, 0XBC);
    // 0x00413F5C: lw          $s2, 0xB8($sp)
    ctx->r18 = MEM_W(ctx->r29, 0XB8);
    // 0x00413F60: lw          $s1, 0xB4($sp)
    ctx->r17 = MEM_W(ctx->r29, 0XB4);
    // 0x00413F64: lw          $s0, 0xB0($sp)
    ctx->r16 = MEM_W(ctx->r29, 0XB0);
    // 0x00413F68: ldc1        $f20, 0xC8($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0XC8);
    // 0x00413F6C: jr          $ra
    // 0x00413F70: addiu       $sp, $sp, 0xD0
    ctx->r29 = ADD32(ctx->r29, 0XD0);
    return;
    // 0x00413F70: addiu       $sp, $sp, 0xD0
    ctx->r29 = ADD32(ctx->r29, 0XD0);
;}
RECOMP_FUNC void entry_0041391C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041391C: lw          $v1, 0x4($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X4);
    // 0x00413920: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x00413924: lw          $v0, 0x2030($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2030);
    // 0x00413928: mult        $v1, $v0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x0041392C: mflo        $v1
    ctx->r3 = lo;
    // 0x00413930: lui         $v0, 0xE6C2
    ctx->r2 = S32(0XE6C2 << 16);
    // 0x00413934: ori         $v0, $v0, 0xB449
    ctx->r2 = ctx->r2 | 0XB449;
    // 0x00413938: mult        $v1, $v0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x0041393C: mfhi        $t4
    ctx->r12 = hi;
    // 0x00413940: addu        $v0, $t4, $v1
    ctx->r2 = ADD32(ctx->r12, ctx->r3);
    // 0x00413944: sra         $v0, $v0, 8
    ctx->r2 = S32(SIGNED(ctx->r2) >> 8);
    // 0x00413948: sra         $v1, $v1, 31
    ctx->r3 = S32(SIGNED(ctx->r3) >> 31);
    // 0x0041394C: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x00413950: j           L_00413E14
    // 0x00413954: sw          $v0, 0x4($s2)
    MEM_W(0X4, ctx->r18) = ctx->r2;
        goto L_00413E14;
    // 0x00413954: sw          $v0, 0x4($s2)
    MEM_W(0X4, ctx->r18) = ctx->r2;
    // 0x00413958: lw          $v0, 0x8($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X8);
    // 0x0041395C: andi        $v1, $v0, 0x3FE0
    ctx->r3 = ctx->r2 & 0X3FE0;
    // 0x00413960: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x00413964: beq         $v1, $v0, L_00413A0C
    if (ctx->r3 == ctx->r2) {
        // 0x00413968: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_00413A0C;
    }
    // 0x00413968: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0041396C: sltiu       $v0, $v1, 0x201
    ctx->r2 = ctx->r3 < 0X201 ? 1 : 0;
    // 0x00413970: beq         $v0, $zero, L_004139BC
    if (ctx->r2 == 0) {
        // 0x00413974: addiu       $v0, $zero, 0x40
        ctx->r2 = ADD32(0, 0X40);
            goto L_004139BC;
    }
    // 0x00413974: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x00413978: beql        $v1, $v0, L_00413A20
    if (ctx->r3 == ctx->r2) {
        // 0x0041397C: addiu       $a0, $zero, 0x1
        ctx->r4 = ADD32(0, 0X1);
            goto L_00413A20;
    }
    goto skip_0;
    // 0x0041397C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    skip_0:
    // 0x00413980: sltiu       $v0, $v1, 0x41
    ctx->r2 = ctx->r3 < 0X41 ? 1 : 0;
    // 0x00413984: beq         $v0, $zero, L_0041399C
    if (ctx->r2 == 0) {
        // 0x00413988: addiu       $v0, $zero, 0x20
        ctx->r2 = ADD32(0, 0X20);
            goto L_0041399C;
    }
    // 0x00413988: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x0041398C: beq         $v1, $v0, L_00413A24
    if (ctx->r3 == ctx->r2) {
        // 0x00413990: sll         $v0, $a0, 3
        ctx->r2 = S32(ctx->r4 << 3);
            goto L_00413A24;
    }
    // 0x00413990: sll         $v0, $a0, 3
    ctx->r2 = S32(ctx->r4 << 3);
    // 0x00413994: j           L_00413A28
    // 0x00413998: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
        goto L_00413A28;
    // 0x00413998: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
L_0041399C:
    // 0x0041399C: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x004139A0: beq         $v1, $v0, L_00413A20
    if (ctx->r3 == ctx->r2) {
        // 0x004139A4: addiu       $a0, $zero, 0x2
        ctx->r4 = ADD32(0, 0X2);
            goto L_00413A20;
    }
    // 0x004139A4: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x004139A8: addiu       $v0, $zero, 0x100
    ctx->r2 = ADD32(0, 0X100);
    // 0x004139AC: beq         $v1, $v0, L_00413A04
    if (ctx->r3 == ctx->r2) {
        // 0x004139B0: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_00413A04;
    }
    // 0x004139B0: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x004139B4: j           L_00413A24
    // 0x004139B8: sll         $v0, $a0, 3
    ctx->r2 = S32(ctx->r4 << 3);
        goto L_00413A24;
    // 0x004139B8: sll         $v0, $a0, 3
    ctx->r2 = S32(ctx->r4 << 3);
L_004139BC:
    // 0x004139BC: addiu       $v0, $zero, 0x800
    ctx->r2 = ADD32(0, 0X800);
    // 0x004139C0: beq         $v1, $v0, L_00413A20
    if (ctx->r3 == ctx->r2) {
        // 0x004139C4: addiu       $a0, $zero, 0x6
        ctx->r4 = ADD32(0, 0X6);
            goto L_00413A20;
    }
    // 0x004139C4: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    // 0x004139C8: sltiu       $v0, $v1, 0x801
    ctx->r2 = ctx->r3 < 0X801 ? 1 : 0;
    // 0x004139CC: beq         $v0, $zero, L_004139E4
    if (ctx->r2 == 0) {
        // 0x004139D0: addiu       $v0, $zero, 0x400
        ctx->r2 = ADD32(0, 0X400);
            goto L_004139E4;
    }
    // 0x004139D0: addiu       $v0, $zero, 0x400
    ctx->r2 = ADD32(0, 0X400);
    // 0x004139D4: beq         $v1, $v0, L_00413A14
    if (ctx->r3 == ctx->r2) {
        // 0x004139D8: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_00413A14;
    }
    // 0x004139D8: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x004139DC: j           L_00413A24
    // 0x004139E0: sll         $v0, $a0, 3
    ctx->r2 = S32(ctx->r4 << 3);
        goto L_00413A24;
    // 0x004139E0: sll         $v0, $a0, 3
    ctx->r2 = S32(ctx->r4 << 3);
L_004139E4:
    // 0x004139E4: addiu       $v0, $zero, 0x1000
    ctx->r2 = ADD32(0, 0X1000);
    // 0x004139E8: beq         $v1, $v0, L_00413A20
    if (ctx->r3 == ctx->r2) {
        // 0x004139EC: addiu       $a0, $zero, 0x7
        ctx->r4 = ADD32(0, 0X7);
            goto L_00413A20;
    }
    // 0x004139EC: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    // 0x004139F0: addiu       $v0, $zero, 0x2000
    ctx->r2 = ADD32(0, 0X2000);
    // 0x004139F4: beq         $v1, $v0, L_00413A1C
    if (ctx->r3 == ctx->r2) {
        // 0x004139F8: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_00413A1C;
    }
    // 0x004139F8: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x004139FC: j           L_00413A24
    // 0x00413A00: sll         $v0, $a0, 3
    ctx->r2 = S32(ctx->r4 << 3);
        goto L_00413A24;
    // 0x00413A00: sll         $v0, $a0, 3
    ctx->r2 = S32(ctx->r4 << 3);
L_00413A04:
    // 0x00413A04: j           L_00413A20
    // 0x00413A08: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
        goto L_00413A20;
    // 0x00413A08: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
L_00413A0C:
    // 0x00413A0C: j           L_00413A20
    // 0x00413A10: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
        goto L_00413A20;
    // 0x00413A10: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
L_00413A14:
    // 0x00413A14: j           L_00413A20
    // 0x00413A18: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
        goto L_00413A20;
    // 0x00413A18: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
L_00413A1C:
    // 0x00413A1C: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
L_00413A20:
    // 0x00413A20: sll         $v0, $a0, 3
    ctx->r2 = S32(ctx->r4 << 3);
L_00413A24:
    // 0x00413A24: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
L_00413A28:
    // 0x00413A28: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x00413A2C: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x00413A30: addiu       $v1, $v1, 0x1BD4
    ctx->r3 = ADD32(ctx->r3, 0X1BD4);
    // 0x00413A34: addu        $s1, $v0, $v1
    ctx->r17 = ADD32(ctx->r2, ctx->r3);
    // 0x00413A38: lw          $v0, 0x4($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X4);
    // 0x00413A3C: sw          $v0, 0x4($s2)
    MEM_W(0X4, ctx->r18) = ctx->r2;
    // 0x00413A40: lw          $v1, 0x8($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X8);
    // 0x00413A44: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x00413A48: lw          $v0, 0x2034($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2034);
    // 0x00413A4C: mult        $v1, $v0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x00413A50: mflo        $v1
    ctx->r3 = lo;
    // 0x00413A54: lui         $v0, 0x939A
    ctx->r2 = S32(0X939A << 16);
    // 0x00413A58: ori         $v0, $v0, 0x85C5
    ctx->r2 = ctx->r2 | 0X85C5;
    // 0x00413A5C: mult        $v1, $v0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x00413A60: mfhi        $t4
    ctx->r12 = hi;
    // 0x00413A64: addu        $v0, $t4, $v1
    ctx->r2 = ADD32(ctx->r12, ctx->r3);
    // 0x00413A68: sra         $v0, $v0, 7
    ctx->r2 = S32(SIGNED(ctx->r2) >> 7);
    // 0x00413A6C: sra         $v1, $v1, 31
    ctx->r3 = S32(SIGNED(ctx->r3) >> 31);
    // 0x00413A70: j           L_00413E10
    // 0x00413A74: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
        goto L_00413E10;
    // 0x00413A74: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x00413A78: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x00413A7C: addiu       $a0, $a0, -0x5378
    ctx->r4 = ADD32(ctx->r4, -0X5378);
    // 0x00413A80: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x00413A84: addiu       $v0, $zero, 0xD
    ctx->r2 = ADD32(0, 0XD);
    // 0x00413A88: bne         $v1, $v0, L_00413AA0
    if (ctx->r3 != ctx->r2) {
        // 0x00413A8C: lui         $v1, 0x4000
        ctx->r3 = S32(0X4000 << 16);
            goto L_00413AA0;
    }
    // 0x00413A8C: lui         $v1, 0x4000
    ctx->r3 = S32(0X4000 << 16);
    // 0x00413A90: lw          $v0, 0x8($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X8);
    // 0x00413A94: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x00413A98: bne         $v0, $zero, L_00413ACC
    if (ctx->r2 != 0) {
        // 0x00413A9C: addiu       $v0, $zero, 0x11C
        ctx->r2 = ADD32(0, 0X11C);
            goto L_00413ACC;
    }
    // 0x00413A9C: addiu       $v0, $zero, 0x11C
    ctx->r2 = ADD32(0, 0X11C);
L_00413AA0:
    // 0x00413AA0: lbu         $v0, -0x197($a0)
    ctx->r2 = MEM_BU(ctx->r4, -0X197);
    // 0x00413AA4: beq         $v0, $zero, L_00413ADC
    if (ctx->r2 == 0) {
        // 0x00413AA8: nop
    
            goto L_00413ADC;
    }
    // 0x00413AA8: nop

    // 0x00413AAC: lw          $v0, 0x8($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X8);
    // 0x00413AB0: bgez        $v0, L_00413ADC
    if (SIGNED(ctx->r2) >= 0) {
        // 0x00413AB4: nop
    
            goto L_00413ADC;
    }
    // 0x00413AB4: nop

    // 0x00413AB8: jal         0x00266B80
    // 0x00413ABC: nop

    func_00266B80(rdram, ctx);
        goto after_0;
    // 0x00413ABC: nop

    after_0:
    // 0x00413AC0: lui         $v1, 0x40
    ctx->r3 = S32(0X40 << 16);
    // 0x00413AC4: bne         $v0, $v1, L_00413ADC
    if (ctx->r2 != ctx->r3) {
        // 0x00413AC8: addiu       $v0, $zero, 0x11C
        ctx->r2 = ADD32(0, 0X11C);
            goto L_00413ADC;
    }
    // 0x00413AC8: addiu       $v0, $zero, 0x11C
    ctx->r2 = ADD32(0, 0X11C);
L_00413ACC:
    // 0x00413ACC: sw          $v0, 0x4($s2)
    MEM_W(0X4, ctx->r18) = ctx->r2;
    // 0x00413AD0: addiu       $v0, $zero, 0xDE
    ctx->r2 = ADD32(0, 0XDE);
    // 0x00413AD4: j           L_00413AF0
    // 0x00413AD8: sw          $v0, 0x8($s2)
    MEM_W(0X8, ctx->r18) = ctx->r2;
        goto L_00413AF0;
    // 0x00413AD8: sw          $v0, 0x8($s2)
    MEM_W(0X8, ctx->r18) = ctx->r2;
L_00413ADC:
    // 0x00413ADC: lw          $a0, 0x14($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X14);
    // 0x00413AE0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x00413AE4: addiu       $a2, $s2, 0x4
    ctx->r6 = ADD32(ctx->r18, 0X4);
    // 0x00413AE8: jal         0x0027AEA8
    // 0x00413AEC: addiu       $a3, $s2, 0x8
    ctx->r7 = ADD32(ctx->r18, 0X8);
    func_0027AEA8(rdram, ctx);
        goto after_1;
    // 0x00413AEC: addiu       $a3, $s2, 0x8
    ctx->r7 = ADD32(ctx->r18, 0X8);
    after_1:
L_00413AF0:
    // 0x00413AF0: lw          $v0, 0x8($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X8);
    // 0x00413AF4: lui         $v1, 0x1000
    ctx->r3 = S32(0X1000 << 16);
    // 0x00413AF8: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x00413AFC: beq         $v0, $zero, L_00413B4C
    if (ctx->r2 == 0) {
        // 0x00413B00: nop
    
            goto L_00413B4C;
    }
    // 0x00413B00: nop

    // 0x00413B04: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x00413B08: lwc1        $f3, 0x4($s2)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r18, 0X4);
    // 0x00413B0C: cvt.s.w     $f3, $f3
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    ctx->f3.fl = CVT_S_W(ctx->f_odd[(3 - 1) * 2]);
    // 0x00413B10: c.eq.s      $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f3.fl == ctx->f0.fl;
    // 0x00413B14: nop

    // 0x00413B18: bc1t        L_00413B4C
    if (c1cs) {
        // 0x00413B1C: nop
    
            goto L_00413B4C;
    }
    // 0x00413B1C: nop

    // 0x00413B20: lwc1        $f2, 0x8($s2)
    ctx->f2.u32l = MEM_W(ctx->r18, 0X8);
    // 0x00413B24: cvt.s.w     $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    ctx->f2.fl = CVT_S_W(ctx->f2.u32l);
    // 0x00413B28: c.eq.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl == ctx->f0.fl;
    // 0x00413B2C: nop

    // 0x00413B30: bc1t        L_00413B4C
    if (c1cs) {
        // 0x00413B34: nop
    
            goto L_00413B4C;
    }
    // 0x00413B34: nop

    // 0x00413B38: lwc1        $f0, 0x288($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X288);
    // 0x00413B3C: lwc1        $f1, 0x28C($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X28C);
    // 0x00413B40: div.s       $f3, $f0, $f3
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f3.fl = DIV_S(ctx->f0.fl, ctx->f3.fl);
    // 0x00413B44: j           L_00413B7C
    // 0x00413B48: div.s       $f0, $f1, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = DIV_S(ctx->f1.fl, ctx->f2.fl);
        goto L_00413B7C;
    // 0x00413B48: div.s       $f0, $f1, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = DIV_S(ctx->f1.fl, ctx->f2.fl);
L_00413B4C:
    // 0x00413B4C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00413B50: lwc1        $f1, 0xBC4($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0XBC4);
    // 0x00413B54: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00413B58: lwc1        $f0, 0x2030($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X2030);
    // 0x00413B5C: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00413B60: mul.s       $f3, $f0, $f1
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f3.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00413B64: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00413B68: lwc1        $f1, 0xBC8($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0XBC8);
    // 0x00413B6C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00413B70: lwc1        $f0, 0x2034($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X2034);
    // 0x00413B74: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00413B78: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
L_00413B7C:
    // 0x00413B7C: swc1        $f3, 0xC($s2)
    MEM_W(0XC, ctx->r18) = ctx->f_odd[(3 - 1) * 2];
    // 0x00413B80: j           L_00413E14
    // 0x00413B84: swc1        $f0, 0x10($s2)
    MEM_W(0X10, ctx->r18) = ctx->f0.u32l;
        goto L_00413E14;
    // 0x00413B84: swc1        $f0, 0x10($s2)
    MEM_W(0X10, ctx->r18) = ctx->f0.u32l;
    // 0x00413B88: addiu       $v1, $sp, 0x38
    ctx->r3 = ADD32(ctx->r29, 0X38);
    // 0x00413B8C: addu        $v0, $s2, $zero
    ctx->r2 = ADD32(ctx->r18, 0);
    // 0x00413B90: addiu       $a0, $s2, 0x20
    ctx->r4 = ADD32(ctx->r18, 0X20);
L_00413B94:
    // 0x00413B94: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x00413B98: lw          $t1, 0x4($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X4);
    // 0x00413B9C: lw          $t2, 0x8($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X8);
    // 0x00413BA0: lw          $t3, 0xC($v0)
    ctx->r11 = MEM_W(ctx->r2, 0XC);
    // 0x00413BA4: sw          $t0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r8;
    // 0x00413BA8: sw          $t1, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r9;
    // 0x00413BAC: sw          $t2, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r10;
    // 0x00413BB0: sw          $t3, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r11;
    // 0x00413BB4: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
    // 0x00413BB8: bne         $v0, $a0, L_00413B94
    if (ctx->r2 != ctx->r4) {
        // 0x00413BBC: addiu       $v1, $v1, 0x10
        ctx->r3 = ADD32(ctx->r3, 0X10);
            goto L_00413B94;
    }
    // 0x00413BBC: addiu       $v1, $v1, 0x10
    ctx->r3 = ADD32(ctx->r3, 0X10);
    // 0x00413BC0: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x00413BC4: sw          $t0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r8;
    // 0x00413BC8: addiu       $v1, $sp, 0x10
    ctx->r3 = ADD32(ctx->r29, 0X10);
    // 0x00413BCC: addu        $v0, $s3, $zero
    ctx->r2 = ADD32(ctx->r19, 0);
    // 0x00413BD0: addiu       $a0, $s3, 0x20
    ctx->r4 = ADD32(ctx->r19, 0X20);
L_00413BD4:
    // 0x00413BD4: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x00413BD8: lw          $t1, 0x4($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X4);
    // 0x00413BDC: lw          $t2, 0x8($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X8);
    // 0x00413BE0: lw          $t3, 0xC($v0)
    ctx->r11 = MEM_W(ctx->r2, 0XC);
    // 0x00413BE4: sw          $t0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r8;
    // 0x00413BE8: sw          $t1, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r9;
    // 0x00413BEC: sw          $t2, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r10;
    // 0x00413BF0: sw          $t3, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r11;
    // 0x00413BF4: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
    // 0x00413BF8: bne         $v0, $a0, L_00413BD4
    if (ctx->r2 != ctx->r4) {
        // 0x00413BFC: addiu       $v1, $v1, 0x10
        ctx->r3 = ADD32(ctx->r3, 0X10);
            goto L_00413BD4;
    }
    // 0x00413BFC: addiu       $v1, $v1, 0x10
    ctx->r3 = ADD32(ctx->r3, 0X10);
    // 0x00413C00: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x00413C04: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    // 0x00413C08: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x00413C0C: lw          $t1, 0x4($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X4);
    // 0x00413C10: sw          $t0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r8;
    // 0x00413C14: sw          $t1, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r9;
    // 0x00413C18: jal         0x0041363C
    // 0x00413C1C: sh          $zero, 0x14($sp)
    MEM_H(0X14, ctx->r29) = 0;
    func_0041363C(rdram, ctx);
        goto after_2;
    // 0x00413C1C: sh          $zero, 0x14($sp)
    MEM_H(0X14, ctx->r29) = 0;
    after_2:
    // 0x00413C20: addiu       $v1, $sp, 0x60
    ctx->r3 = ADD32(ctx->r29, 0X60);
    // 0x00413C24: addu        $v0, $s2, $zero
    ctx->r2 = ADD32(ctx->r18, 0);
    // 0x00413C28: addiu       $a0, $s2, 0x20
    ctx->r4 = ADD32(ctx->r18, 0X20);
L_00413C2C:
    // 0x00413C2C: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x00413C30: lw          $t1, 0x4($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X4);
    // 0x00413C34: lw          $t2, 0x8($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X8);
    // 0x00413C38: lw          $t3, 0xC($v0)
    ctx->r11 = MEM_W(ctx->r2, 0XC);
    // 0x00413C3C: sw          $t0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r8;
    // 0x00413C40: sw          $t1, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r9;
    // 0x00413C44: sw          $t2, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r10;
    // 0x00413C48: sw          $t3, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r11;
    // 0x00413C4C: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
    // 0x00413C50: bne         $v0, $a0, L_00413C2C
    if (ctx->r2 != ctx->r4) {
        // 0x00413C54: addiu       $v1, $v1, 0x10
        ctx->r3 = ADD32(ctx->r3, 0X10);
            goto L_00413C2C;
    }
    // 0x00413C54: addiu       $v1, $v1, 0x10
    ctx->r3 = ADD32(ctx->r3, 0X10);
    // 0x00413C58: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x00413C5C: sw          $t0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r8;
    // 0x00413C60: addiu       $v1, $sp, 0x10
    ctx->r3 = ADD32(ctx->r29, 0X10);
    // 0x00413C64: addu        $v0, $s3, $zero
    ctx->r2 = ADD32(ctx->r19, 0);
    // 0x00413C68: addiu       $a0, $s3, 0x20
    ctx->r4 = ADD32(ctx->r19, 0X20);
L_00413C6C:
    // 0x00413C6C: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x00413C70: lw          $t1, 0x4($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X4);
    // 0x00413C74: lw          $t2, 0x8($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X8);
    // 0x00413C78: lw          $t3, 0xC($v0)
    ctx->r11 = MEM_W(ctx->r2, 0XC);
    // 0x00413C7C: sw          $t0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r8;
    // 0x00413C80: sw          $t1, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r9;
    // 0x00413C84: sw          $t2, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r10;
    // 0x00413C88: sw          $t3, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r11;
    // 0x00413C8C: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
    // 0x00413C90: bne         $v0, $a0, L_00413C6C
    if (ctx->r2 != ctx->r4) {
        // 0x00413C94: addiu       $v1, $v1, 0x10
        ctx->r3 = ADD32(ctx->r3, 0X10);
            goto L_00413C6C;
    }
    // 0x00413C94: addiu       $v1, $v1, 0x10
    ctx->r3 = ADD32(ctx->r3, 0X10);
    // 0x00413C98: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x00413C9C: addiu       $a1, $sp, 0x60
    ctx->r5 = ADD32(ctx->r29, 0X60);
    // 0x00413CA0: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x00413CA4: lw          $t1, 0x4($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X4);
    // 0x00413CA8: sw          $t0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r8;
    // 0x00413CAC: sw          $t1, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r9;
    // 0x00413CB0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00413CB4: sh          $v0, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r2;
    // 0x00413CB8: jal         0x0041363C
    // 0x00413CBC: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    func_0041363C(rdram, ctx);
        goto after_3;
    // 0x00413CBC: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    after_3:
    // 0x00413CC0: addiu       $v1, $sp, 0x88
    ctx->r3 = ADD32(ctx->r29, 0X88);
    // 0x00413CC4: addu        $v0, $s2, $zero
    ctx->r2 = ADD32(ctx->r18, 0);
    // 0x00413CC8: addiu       $a0, $s2, 0x20
    ctx->r4 = ADD32(ctx->r18, 0X20);
L_00413CCC:
    // 0x00413CCC: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x00413CD0: lw          $t1, 0x4($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X4);
    // 0x00413CD4: lw          $t2, 0x8($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X8);
    // 0x00413CD8: lw          $t3, 0xC($v0)
    ctx->r11 = MEM_W(ctx->r2, 0XC);
    // 0x00413CDC: sw          $t0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r8;
    // 0x00413CE0: sw          $t1, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r9;
    // 0x00413CE4: sw          $t2, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r10;
    // 0x00413CE8: sw          $t3, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r11;
    // 0x00413CEC: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
    // 0x00413CF0: bne         $v0, $a0, L_00413CCC
    if (ctx->r2 != ctx->r4) {
        // 0x00413CF4: addiu       $v1, $v1, 0x10
        ctx->r3 = ADD32(ctx->r3, 0X10);
            goto L_00413CCC;
    }
    // 0x00413CF4: addiu       $v1, $v1, 0x10
    ctx->r3 = ADD32(ctx->r3, 0X10);
    // 0x00413CF8: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x00413CFC: sw          $t0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r8;
    // 0x00413D00: addiu       $v1, $sp, 0x10
    ctx->r3 = ADD32(ctx->r29, 0X10);
    // 0x00413D04: addu        $v0, $s3, $zero
    ctx->r2 = ADD32(ctx->r19, 0);
    // 0x00413D08: addiu       $a0, $s3, 0x20
    ctx->r4 = ADD32(ctx->r19, 0X20);
L_00413D0C:
    // 0x00413D0C: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x00413D10: lw          $t1, 0x4($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X4);
    // 0x00413D14: lw          $t2, 0x8($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X8);
    // 0x00413D18: lw          $t3, 0xC($v0)
    ctx->r11 = MEM_W(ctx->r2, 0XC);
    // 0x00413D1C: sw          $t0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r8;
    // 0x00413D20: sw          $t1, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r9;
    // 0x00413D24: sw          $t2, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r10;
    // 0x00413D28: sw          $t3, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r11;
    // 0x00413D2C: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
    // 0x00413D30: bne         $v0, $a0, L_00413D0C
    if (ctx->r2 != ctx->r4) {
        // 0x00413D34: addiu       $v1, $v1, 0x10
        ctx->r3 = ADD32(ctx->r3, 0X10);
            goto L_00413D0C;
    }
    // 0x00413D34: addiu       $v1, $v1, 0x10
    ctx->r3 = ADD32(ctx->r3, 0X10);
    // 0x00413D38: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x00413D3C: addiu       $a1, $sp, 0x88
    ctx->r5 = ADD32(ctx->r29, 0X88);
    // 0x00413D40: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x00413D44: lw          $t1, 0x4($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X4);
    // 0x00413D48: sw          $t0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r8;
    // 0x00413D4C: sw          $t1, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r9;
    // 0x00413D50: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00413D54: sh          $v0, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r2;
    // 0x00413D58: jal         0x0041363C
    // 0x00413D5C: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    func_0041363C(rdram, ctx);
        goto after_4;
    // 0x00413D5C: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    after_4:
    // 0x00413D60: lw          $v1, 0x64($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X64);
    // 0x00413D64: lw          $v0, 0x8C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X8C);
    // 0x00413D68: lw          $a0, 0x3C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X3C);
    // 0x00413D6C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x00413D70: slt         $v0, $v1, $a0
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x00413D74: bnel        $v0, $zero, L_00413D7C
    if (ctx->r2 != 0) {
        // 0x00413D78: addu        $v1, $a0, $zero
        ctx->r3 = ADD32(ctx->r4, 0);
            goto L_00413D7C;
    }
    goto skip_1;
    // 0x00413D78: addu        $v1, $a0, $zero
    ctx->r3 = ADD32(ctx->r4, 0);
    skip_1:
L_00413D7C:
    // 0x00413D7C: sw          $v1, 0x4($s2)
    MEM_W(0X4, ctx->r18) = ctx->r3;
    // 0x00413D80: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x00413D84: lw          $v1, 0x68($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X68);
    // 0x00413D88: lw          $v0, 0x90($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X90);
    // 0x00413D8C: addu        $a0, $a0, $v1
    ctx->r4 = ADD32(ctx->r4, ctx->r3);
    // 0x00413D90: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x00413D94: srl         $v1, $v0, 31
    ctx->r3 = S32(U32(ctx->r2) >> 31);
    // 0x00413D98: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x00413D9C: sra         $v0, $v0, 1
    ctx->r2 = S32(SIGNED(ctx->r2) >> 1);
    // 0x00413DA0: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x00413DA4: j           L_00413E14
    // 0x00413DA8: sw          $a0, 0x8($s2)
    MEM_W(0X8, ctx->r18) = ctx->r4;
        goto L_00413E14;
    // 0x00413DA8: sw          $a0, 0x8($s2)
    MEM_W(0X8, ctx->r18) = ctx->r4;
    // 0x00413DAC: lw          $v0, 0x14($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X14);
    // 0x00413DB0: lwc1        $f1, 0x288($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X288);
    // 0x00413DB4: lwc1        $f0, 0x24($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X24);
    // 0x00413DB8: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00413DBC: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00413DC0: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00413DC4: lwc1        $f1, 0x2030($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X2030);
    // 0x00413DC8: cvt.s.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.fl = CVT_S_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x00413DCC: div.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = DIV_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00413DD0: trunc.w.s   $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x00413DD4: swc1        $f4, 0x4($s2)
    MEM_W(0X4, ctx->r18) = ctx->f4.u32l;
    // 0x00413DD8: lwc1        $f1, 0x28C($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X28C);
    // 0x00413DDC: lwc1        $f0, 0x28($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X28);
    // 0x00413DE0: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00413DE4: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00413DE8: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00413DEC: lwc1        $f1, 0x2034($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X2034);
    // 0x00413DF0: cvt.s.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.fl = CVT_S_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x00413DF4: div.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = DIV_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00413DF8: trunc.w.s   $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x00413DFC: swc1        $f4, 0x8($s2)
    MEM_W(0X8, ctx->r18) = ctx->f4.u32l;
    // 0x00413E00: j           L_00413E14
    // 0x00413E04: nop

        goto L_00413E14;
    // 0x00413E04: nop

    // 0x00413E08: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00413E0C: sw          $v0, 0x4($s2)
    MEM_W(0X4, ctx->r18) = ctx->r2;
L_00413E10:
    // 0x00413E10: sw          $v0, 0x8($s2)
    MEM_W(0X8, ctx->r18) = ctx->r2;
L_00413E14:
    // 0x00413E14: lh          $v0, 0xC($s3)
    ctx->r2 = MEM_H(ctx->r19, 0XC);
    // 0x00413E18: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x00413E1C: lw          $v1, 0x2030($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X2030);
    // 0x00413E20: mult        $v0, $v1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x00413E24: mflo        $v0
    ctx->r2 = lo;
    // 0x00413E28: lui         $v1, 0xE6C2
    ctx->r3 = S32(0XE6C2 << 16);
    // 0x00413E2C: ori         $v1, $v1, 0xB449
    ctx->r3 = ctx->r3 | 0XB449;
    // 0x00413E30: mult        $v0, $v1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x00413E34: lw          $a0, 0x8($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X8);
    // 0x00413E38: mfhi        $v1
    ctx->r3 = hi;
    // 0x00413E3C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x00413E40: sra         $v1, $v1, 8
    ctx->r3 = S32(SIGNED(ctx->r3) >> 8);
    // 0x00413E44: sra         $v0, $v0, 31
    ctx->r2 = S32(SIGNED(ctx->r2) >> 31);
    // 0x00413E48: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x00413E4C: mtc1        $v1, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r3;
    // 0x00413E50: cvt.s.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.fl = CVT_S_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x00413E54: andi        $v0, $a0, 0x8000
    ctx->r2 = ctx->r4 & 0X8000;
    // 0x00413E58: bne         $v0, $zero, L_00413E8C
    if (ctx->r2 != 0) {
        // 0x00413E5C: andi        $v0, $a0, 0x4000
        ctx->r2 = ctx->r4 & 0X4000;
            goto L_00413E8C;
    }
    // 0x00413E5C: andi        $v0, $a0, 0x4000
    ctx->r2 = ctx->r4 & 0X4000;
    // 0x00413E60: beq         $v0, $zero, L_00413E84
    if (ctx->r2 == 0) {
        // 0x00413E64: nop
    
            goto L_00413E84;
    }
    // 0x00413E64: nop

    // 0x00413E68: lwc1        $f0, 0x18($s2)
    ctx->f0.u32l = MEM_W(ctx->r18, 0X18);
    // 0x00413E6C: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00413E70: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x00413E74: trunc.w.s   $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x00413E78: swc1        $f4, 0x14($s2)
    MEM_W(0X14, ctx->r18) = ctx->f4.u32l;
    // 0x00413E7C: j           L_00413E8C
    // 0x00413E80: nop

        goto L_00413E8C;
    // 0x00413E80: nop

L_00413E84:
    // 0x00413E84: trunc.w.s   $f4, $f1
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 1);
    ctx->f4.u32l = TRUNC_W_S(ctx->f1.fl);
    // 0x00413E88: swc1        $f4, 0x14($s2)
    MEM_W(0X14, ctx->r18) = ctx->f4.u32l;
L_00413E8C:
    // 0x00413E8C: lwc1        $f0, 0xC($s2)
    ctx->f0.u32l = MEM_W(ctx->r18, 0XC);
    // 0x00413E90: lwc1        $f1, 0x4($s2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r18, 0X4);
    // 0x00413E94: cvt.s.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.fl = CVT_S_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x00413E98: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x00413E9C: lwc1        $f0, 0x14($s2)
    ctx->f0.u32l = MEM_W(ctx->r18, 0X14);
    // 0x00413EA0: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00413EA4: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x00413EA8: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x00413EAC: lw          $v0, 0x2034($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2034);
    // 0x00413EB0: trunc.w.s   $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x00413EB4: swc1        $f4, 0x18($s2)
    MEM_W(0X18, ctx->r18) = ctx->f4.u32l;
    // 0x00413EB8: lh          $v1, 0xE($s3)
    ctx->r3 = MEM_H(ctx->r19, 0XE);
    // 0x00413EBC: mult        $v1, $v0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x00413EC0: mflo        $v1
    ctx->r3 = lo;
    // 0x00413EC4: lui         $v0, 0x939A
    ctx->r2 = S32(0X939A << 16);
    // 0x00413EC8: ori         $v0, $v0, 0x85C5
    ctx->r2 = ctx->r2 | 0X85C5;
    // 0x00413ECC: mult        $v1, $v0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x00413ED0: lw          $a0, 0x8($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X8);
    // 0x00413ED4: mfhi        $t4
    ctx->r12 = hi;
    // 0x00413ED8: addu        $v0, $t4, $v1
    ctx->r2 = ADD32(ctx->r12, ctx->r3);
    // 0x00413EDC: sra         $v0, $v0, 7
    ctx->r2 = S32(SIGNED(ctx->r2) >> 7);
    // 0x00413EE0: sra         $v1, $v1, 31
    ctx->r3 = S32(SIGNED(ctx->r3) >> 31);
    // 0x00413EE4: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x00413EE8: mtc1        $v0, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r2;
    // 0x00413EEC: cvt.s.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.fl = CVT_S_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x00413EF0: lui         $v0, 0x2
    ctx->r2 = S32(0X2 << 16);
    // 0x00413EF4: and         $v0, $a0, $v0
    ctx->r2 = ctx->r4 & ctx->r2;
    // 0x00413EF8: bne         $v0, $zero, L_00413F30
    if (ctx->r2 != 0) {
        // 0x00413EFC: lui         $v0, 0x1
        ctx->r2 = S32(0X1 << 16);
            goto L_00413F30;
    }
    // 0x00413EFC: lui         $v0, 0x1
    ctx->r2 = S32(0X1 << 16);
    // 0x00413F00: and         $v0, $a0, $v0
    ctx->r2 = ctx->r4 & ctx->r2;
    // 0x00413F04: beq         $v0, $zero, L_00413F28
    if (ctx->r2 == 0) {
        // 0x00413F08: nop
    
            goto L_00413F28;
    }
    // 0x00413F08: nop

    // 0x00413F0C: lwc1        $f0, 0x20($s2)
    ctx->f0.u32l = MEM_W(ctx->r18, 0X20);
    // 0x00413F10: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00413F14: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x00413F18: trunc.w.s   $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x00413F1C: swc1        $f4, 0x1C($s2)
    MEM_W(0X1C, ctx->r18) = ctx->f4.u32l;
    // 0x00413F20: j           L_00413F30
    // 0x00413F24: nop

        goto L_00413F30;
    // 0x00413F24: nop

L_00413F28:
    // 0x00413F28: trunc.w.s   $f4, $f1
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 1);
    ctx->f4.u32l = TRUNC_W_S(ctx->f1.fl);
    // 0x00413F2C: swc1        $f4, 0x1C($s2)
    MEM_W(0X1C, ctx->r18) = ctx->f4.u32l;
L_00413F30:
    // 0x00413F30: lwc1        $f0, 0x10($s2)
    ctx->f0.u32l = MEM_W(ctx->r18, 0X10);
    // 0x00413F34: lwc1        $f1, 0x8($s2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r18, 0X8);
    // 0x00413F38: cvt.s.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.fl = CVT_S_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x00413F3C: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x00413F40: lwc1        $f0, 0x1C($s2)
    ctx->f0.u32l = MEM_W(ctx->r18, 0X1C);
    // 0x00413F44: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00413F48: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x00413F4C: trunc.w.s   $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x00413F50: swc1        $f4, 0x20($s2)
    MEM_W(0X20, ctx->r18) = ctx->f4.u32l;
    // 0x00413F54: lw          $ra, 0xC0($sp)
    ctx->r31 = MEM_W(ctx->r29, 0XC0);
    // 0x00413F58: lw          $s3, 0xBC($sp)
    ctx->r19 = MEM_W(ctx->r29, 0XBC);
    // 0x00413F5C: lw          $s2, 0xB8($sp)
    ctx->r18 = MEM_W(ctx->r29, 0XB8);
    // 0x00413F60: lw          $s1, 0xB4($sp)
    ctx->r17 = MEM_W(ctx->r29, 0XB4);
    // 0x00413F64: lw          $s0, 0xB0($sp)
    ctx->r16 = MEM_W(ctx->r29, 0XB0);
    // 0x00413F68: ldc1        $f20, 0xC8($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0XC8);
    // 0x00413F6C: jr          $ra
    // 0x00413F70: addiu       $sp, $sp, 0xD0
    ctx->r29 = ADD32(ctx->r29, 0XD0);
    return;
    // 0x00413F70: addiu       $sp, $sp, 0xD0
    ctx->r29 = ADD32(ctx->r29, 0XD0);
;}
RECOMP_FUNC void entry_00413A20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00413A20: sll         $v0, $a0, 3
    ctx->r2 = S32(ctx->r4 << 3);
    // 0x00413A24: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
    // 0x00413A28: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x00413A2C: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x00413A30: addiu       $v1, $v1, 0x1BD4
    ctx->r3 = ADD32(ctx->r3, 0X1BD4);
    // 0x00413A34: addu        $s1, $v0, $v1
    ctx->r17 = ADD32(ctx->r2, ctx->r3);
    // 0x00413A38: lw          $v0, 0x4($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X4);
    // 0x00413A3C: sw          $v0, 0x4($s2)
    MEM_W(0X4, ctx->r18) = ctx->r2;
    // 0x00413A40: lw          $v1, 0x8($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X8);
    // 0x00413A44: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x00413A48: lw          $v0, 0x2034($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2034);
    // 0x00413A4C: mult        $v1, $v0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x00413A50: mflo        $v1
    ctx->r3 = lo;
    // 0x00413A54: lui         $v0, 0x939A
    ctx->r2 = S32(0X939A << 16);
    // 0x00413A58: ori         $v0, $v0, 0x85C5
    ctx->r2 = ctx->r2 | 0X85C5;
    // 0x00413A5C: mult        $v1, $v0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x00413A60: mfhi        $t4
    ctx->r12 = hi;
    // 0x00413A64: addu        $v0, $t4, $v1
    ctx->r2 = ADD32(ctx->r12, ctx->r3);
    // 0x00413A68: sra         $v0, $v0, 7
    ctx->r2 = S32(SIGNED(ctx->r2) >> 7);
    // 0x00413A6C: sra         $v1, $v1, 31
    ctx->r3 = S32(SIGNED(ctx->r3) >> 31);
    // 0x00413A70: j           L_00413E10
    // 0x00413A74: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
        goto L_00413E10;
    // 0x00413A74: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x00413A78: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x00413A7C: addiu       $a0, $a0, -0x5378
    ctx->r4 = ADD32(ctx->r4, -0X5378);
    // 0x00413A80: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x00413A84: addiu       $v0, $zero, 0xD
    ctx->r2 = ADD32(0, 0XD);
    // 0x00413A88: bne         $v1, $v0, L_00413AA0
    if (ctx->r3 != ctx->r2) {
        // 0x00413A8C: lui         $v1, 0x4000
        ctx->r3 = S32(0X4000 << 16);
            goto L_00413AA0;
    }
    // 0x00413A8C: lui         $v1, 0x4000
    ctx->r3 = S32(0X4000 << 16);
    // 0x00413A90: lw          $v0, 0x8($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X8);
    // 0x00413A94: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x00413A98: bne         $v0, $zero, L_00413ACC
    if (ctx->r2 != 0) {
        // 0x00413A9C: addiu       $v0, $zero, 0x11C
        ctx->r2 = ADD32(0, 0X11C);
            goto L_00413ACC;
    }
    // 0x00413A9C: addiu       $v0, $zero, 0x11C
    ctx->r2 = ADD32(0, 0X11C);
L_00413AA0:
    // 0x00413AA0: lbu         $v0, -0x197($a0)
    ctx->r2 = MEM_BU(ctx->r4, -0X197);
    // 0x00413AA4: beq         $v0, $zero, L_00413ADC
    if (ctx->r2 == 0) {
        // 0x00413AA8: nop
    
            goto L_00413ADC;
    }
    // 0x00413AA8: nop

    // 0x00413AAC: lw          $v0, 0x8($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X8);
    // 0x00413AB0: bgez        $v0, L_00413ADC
    if (SIGNED(ctx->r2) >= 0) {
        // 0x00413AB4: nop
    
            goto L_00413ADC;
    }
    // 0x00413AB4: nop

    // 0x00413AB8: jal         0x00266B80
    // 0x00413ABC: nop

    func_00266B80(rdram, ctx);
        goto after_0;
    // 0x00413ABC: nop

    after_0:
    // 0x00413AC0: lui         $v1, 0x40
    ctx->r3 = S32(0X40 << 16);
    // 0x00413AC4: bne         $v0, $v1, L_00413ADC
    if (ctx->r2 != ctx->r3) {
        // 0x00413AC8: addiu       $v0, $zero, 0x11C
        ctx->r2 = ADD32(0, 0X11C);
            goto L_00413ADC;
    }
    // 0x00413AC8: addiu       $v0, $zero, 0x11C
    ctx->r2 = ADD32(0, 0X11C);
L_00413ACC:
    // 0x00413ACC: sw          $v0, 0x4($s2)
    MEM_W(0X4, ctx->r18) = ctx->r2;
    // 0x00413AD0: addiu       $v0, $zero, 0xDE
    ctx->r2 = ADD32(0, 0XDE);
    // 0x00413AD4: j           L_00413AF0
    // 0x00413AD8: sw          $v0, 0x8($s2)
    MEM_W(0X8, ctx->r18) = ctx->r2;
        goto L_00413AF0;
    // 0x00413AD8: sw          $v0, 0x8($s2)
    MEM_W(0X8, ctx->r18) = ctx->r2;
L_00413ADC:
    // 0x00413ADC: lw          $a0, 0x14($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X14);
    // 0x00413AE0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x00413AE4: addiu       $a2, $s2, 0x4
    ctx->r6 = ADD32(ctx->r18, 0X4);
    // 0x00413AE8: jal         0x0027AEA8
    // 0x00413AEC: addiu       $a3, $s2, 0x8
    ctx->r7 = ADD32(ctx->r18, 0X8);
    func_0027AEA8(rdram, ctx);
        goto after_1;
    // 0x00413AEC: addiu       $a3, $s2, 0x8
    ctx->r7 = ADD32(ctx->r18, 0X8);
    after_1:
L_00413AF0:
    // 0x00413AF0: lw          $v0, 0x8($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X8);
    // 0x00413AF4: lui         $v1, 0x1000
    ctx->r3 = S32(0X1000 << 16);
    // 0x00413AF8: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x00413AFC: beq         $v0, $zero, L_00413B4C
    if (ctx->r2 == 0) {
        // 0x00413B00: nop
    
            goto L_00413B4C;
    }
    // 0x00413B00: nop

    // 0x00413B04: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x00413B08: lwc1        $f3, 0x4($s2)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r18, 0X4);
    // 0x00413B0C: cvt.s.w     $f3, $f3
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    ctx->f3.fl = CVT_S_W(ctx->f_odd[(3 - 1) * 2]);
    // 0x00413B10: c.eq.s      $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f3.fl == ctx->f0.fl;
    // 0x00413B14: nop

    // 0x00413B18: bc1t        L_00413B4C
    if (c1cs) {
        // 0x00413B1C: nop
    
            goto L_00413B4C;
    }
    // 0x00413B1C: nop

    // 0x00413B20: lwc1        $f2, 0x8($s2)
    ctx->f2.u32l = MEM_W(ctx->r18, 0X8);
    // 0x00413B24: cvt.s.w     $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    ctx->f2.fl = CVT_S_W(ctx->f2.u32l);
    // 0x00413B28: c.eq.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl == ctx->f0.fl;
    // 0x00413B2C: nop

    // 0x00413B30: bc1t        L_00413B4C
    if (c1cs) {
        // 0x00413B34: nop
    
            goto L_00413B4C;
    }
    // 0x00413B34: nop

    // 0x00413B38: lwc1        $f0, 0x288($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X288);
    // 0x00413B3C: lwc1        $f1, 0x28C($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X28C);
    // 0x00413B40: div.s       $f3, $f0, $f3
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f3.fl = DIV_S(ctx->f0.fl, ctx->f3.fl);
    // 0x00413B44: j           L_00413B7C
    // 0x00413B48: div.s       $f0, $f1, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = DIV_S(ctx->f1.fl, ctx->f2.fl);
        goto L_00413B7C;
    // 0x00413B48: div.s       $f0, $f1, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = DIV_S(ctx->f1.fl, ctx->f2.fl);
L_00413B4C:
    // 0x00413B4C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00413B50: lwc1        $f1, 0xBC4($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0XBC4);
    // 0x00413B54: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00413B58: lwc1        $f0, 0x2030($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X2030);
    // 0x00413B5C: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00413B60: mul.s       $f3, $f0, $f1
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f3.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00413B64: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00413B68: lwc1        $f1, 0xBC8($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0XBC8);
    // 0x00413B6C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00413B70: lwc1        $f0, 0x2034($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X2034);
    // 0x00413B74: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00413B78: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
L_00413B7C:
    // 0x00413B7C: swc1        $f3, 0xC($s2)
    MEM_W(0XC, ctx->r18) = ctx->f_odd[(3 - 1) * 2];
    // 0x00413B80: j           L_00413E14
    // 0x00413B84: swc1        $f0, 0x10($s2)
    MEM_W(0X10, ctx->r18) = ctx->f0.u32l;
        goto L_00413E14;
    // 0x00413B84: swc1        $f0, 0x10($s2)
    MEM_W(0X10, ctx->r18) = ctx->f0.u32l;
    // 0x00413B88: addiu       $v1, $sp, 0x38
    ctx->r3 = ADD32(ctx->r29, 0X38);
    // 0x00413B8C: addu        $v0, $s2, $zero
    ctx->r2 = ADD32(ctx->r18, 0);
    // 0x00413B90: addiu       $a0, $s2, 0x20
    ctx->r4 = ADD32(ctx->r18, 0X20);
L_00413B94:
    // 0x00413B94: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x00413B98: lw          $t1, 0x4($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X4);
    // 0x00413B9C: lw          $t2, 0x8($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X8);
    // 0x00413BA0: lw          $t3, 0xC($v0)
    ctx->r11 = MEM_W(ctx->r2, 0XC);
    // 0x00413BA4: sw          $t0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r8;
    // 0x00413BA8: sw          $t1, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r9;
    // 0x00413BAC: sw          $t2, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r10;
    // 0x00413BB0: sw          $t3, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r11;
    // 0x00413BB4: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
    // 0x00413BB8: bne         $v0, $a0, L_00413B94
    if (ctx->r2 != ctx->r4) {
        // 0x00413BBC: addiu       $v1, $v1, 0x10
        ctx->r3 = ADD32(ctx->r3, 0X10);
            goto L_00413B94;
    }
    // 0x00413BBC: addiu       $v1, $v1, 0x10
    ctx->r3 = ADD32(ctx->r3, 0X10);
    // 0x00413BC0: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x00413BC4: sw          $t0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r8;
    // 0x00413BC8: addiu       $v1, $sp, 0x10
    ctx->r3 = ADD32(ctx->r29, 0X10);
    // 0x00413BCC: addu        $v0, $s3, $zero
    ctx->r2 = ADD32(ctx->r19, 0);
    // 0x00413BD0: addiu       $a0, $s3, 0x20
    ctx->r4 = ADD32(ctx->r19, 0X20);
L_00413BD4:
    // 0x00413BD4: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x00413BD8: lw          $t1, 0x4($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X4);
    // 0x00413BDC: lw          $t2, 0x8($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X8);
    // 0x00413BE0: lw          $t3, 0xC($v0)
    ctx->r11 = MEM_W(ctx->r2, 0XC);
    // 0x00413BE4: sw          $t0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r8;
    // 0x00413BE8: sw          $t1, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r9;
    // 0x00413BEC: sw          $t2, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r10;
    // 0x00413BF0: sw          $t3, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r11;
    // 0x00413BF4: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
    // 0x00413BF8: bne         $v0, $a0, L_00413BD4
    if (ctx->r2 != ctx->r4) {
        // 0x00413BFC: addiu       $v1, $v1, 0x10
        ctx->r3 = ADD32(ctx->r3, 0X10);
            goto L_00413BD4;
    }
    // 0x00413BFC: addiu       $v1, $v1, 0x10
    ctx->r3 = ADD32(ctx->r3, 0X10);
    // 0x00413C00: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x00413C04: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    // 0x00413C08: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x00413C0C: lw          $t1, 0x4($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X4);
    // 0x00413C10: sw          $t0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r8;
    // 0x00413C14: sw          $t1, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r9;
    // 0x00413C18: jal         0x0041363C
    // 0x00413C1C: sh          $zero, 0x14($sp)
    MEM_H(0X14, ctx->r29) = 0;
    func_0041363C(rdram, ctx);
        goto after_2;
    // 0x00413C1C: sh          $zero, 0x14($sp)
    MEM_H(0X14, ctx->r29) = 0;
    after_2:
    // 0x00413C20: addiu       $v1, $sp, 0x60
    ctx->r3 = ADD32(ctx->r29, 0X60);
    // 0x00413C24: addu        $v0, $s2, $zero
    ctx->r2 = ADD32(ctx->r18, 0);
    // 0x00413C28: addiu       $a0, $s2, 0x20
    ctx->r4 = ADD32(ctx->r18, 0X20);
L_00413C2C:
    // 0x00413C2C: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x00413C30: lw          $t1, 0x4($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X4);
    // 0x00413C34: lw          $t2, 0x8($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X8);
    // 0x00413C38: lw          $t3, 0xC($v0)
    ctx->r11 = MEM_W(ctx->r2, 0XC);
    // 0x00413C3C: sw          $t0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r8;
    // 0x00413C40: sw          $t1, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r9;
    // 0x00413C44: sw          $t2, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r10;
    // 0x00413C48: sw          $t3, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r11;
    // 0x00413C4C: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
    // 0x00413C50: bne         $v0, $a0, L_00413C2C
    if (ctx->r2 != ctx->r4) {
        // 0x00413C54: addiu       $v1, $v1, 0x10
        ctx->r3 = ADD32(ctx->r3, 0X10);
            goto L_00413C2C;
    }
    // 0x00413C54: addiu       $v1, $v1, 0x10
    ctx->r3 = ADD32(ctx->r3, 0X10);
    // 0x00413C58: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x00413C5C: sw          $t0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r8;
    // 0x00413C60: addiu       $v1, $sp, 0x10
    ctx->r3 = ADD32(ctx->r29, 0X10);
    // 0x00413C64: addu        $v0, $s3, $zero
    ctx->r2 = ADD32(ctx->r19, 0);
    // 0x00413C68: addiu       $a0, $s3, 0x20
    ctx->r4 = ADD32(ctx->r19, 0X20);
L_00413C6C:
    // 0x00413C6C: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x00413C70: lw          $t1, 0x4($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X4);
    // 0x00413C74: lw          $t2, 0x8($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X8);
    // 0x00413C78: lw          $t3, 0xC($v0)
    ctx->r11 = MEM_W(ctx->r2, 0XC);
    // 0x00413C7C: sw          $t0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r8;
    // 0x00413C80: sw          $t1, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r9;
    // 0x00413C84: sw          $t2, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r10;
    // 0x00413C88: sw          $t3, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r11;
    // 0x00413C8C: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
    // 0x00413C90: bne         $v0, $a0, L_00413C6C
    if (ctx->r2 != ctx->r4) {
        // 0x00413C94: addiu       $v1, $v1, 0x10
        ctx->r3 = ADD32(ctx->r3, 0X10);
            goto L_00413C6C;
    }
    // 0x00413C94: addiu       $v1, $v1, 0x10
    ctx->r3 = ADD32(ctx->r3, 0X10);
    // 0x00413C98: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x00413C9C: addiu       $a1, $sp, 0x60
    ctx->r5 = ADD32(ctx->r29, 0X60);
    // 0x00413CA0: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x00413CA4: lw          $t1, 0x4($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X4);
    // 0x00413CA8: sw          $t0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r8;
    // 0x00413CAC: sw          $t1, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r9;
    // 0x00413CB0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00413CB4: sh          $v0, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r2;
    // 0x00413CB8: jal         0x0041363C
    // 0x00413CBC: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    func_0041363C(rdram, ctx);
        goto after_3;
    // 0x00413CBC: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    after_3:
    // 0x00413CC0: addiu       $v1, $sp, 0x88
    ctx->r3 = ADD32(ctx->r29, 0X88);
    // 0x00413CC4: addu        $v0, $s2, $zero
    ctx->r2 = ADD32(ctx->r18, 0);
    // 0x00413CC8: addiu       $a0, $s2, 0x20
    ctx->r4 = ADD32(ctx->r18, 0X20);
L_00413CCC:
    // 0x00413CCC: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x00413CD0: lw          $t1, 0x4($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X4);
    // 0x00413CD4: lw          $t2, 0x8($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X8);
    // 0x00413CD8: lw          $t3, 0xC($v0)
    ctx->r11 = MEM_W(ctx->r2, 0XC);
    // 0x00413CDC: sw          $t0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r8;
    // 0x00413CE0: sw          $t1, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r9;
    // 0x00413CE4: sw          $t2, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r10;
    // 0x00413CE8: sw          $t3, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r11;
    // 0x00413CEC: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
    // 0x00413CF0: bne         $v0, $a0, L_00413CCC
    if (ctx->r2 != ctx->r4) {
        // 0x00413CF4: addiu       $v1, $v1, 0x10
        ctx->r3 = ADD32(ctx->r3, 0X10);
            goto L_00413CCC;
    }
    // 0x00413CF4: addiu       $v1, $v1, 0x10
    ctx->r3 = ADD32(ctx->r3, 0X10);
    // 0x00413CF8: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x00413CFC: sw          $t0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r8;
    // 0x00413D00: addiu       $v1, $sp, 0x10
    ctx->r3 = ADD32(ctx->r29, 0X10);
    // 0x00413D04: addu        $v0, $s3, $zero
    ctx->r2 = ADD32(ctx->r19, 0);
    // 0x00413D08: addiu       $a0, $s3, 0x20
    ctx->r4 = ADD32(ctx->r19, 0X20);
L_00413D0C:
    // 0x00413D0C: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x00413D10: lw          $t1, 0x4($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X4);
    // 0x00413D14: lw          $t2, 0x8($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X8);
    // 0x00413D18: lw          $t3, 0xC($v0)
    ctx->r11 = MEM_W(ctx->r2, 0XC);
    // 0x00413D1C: sw          $t0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r8;
    // 0x00413D20: sw          $t1, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r9;
    // 0x00413D24: sw          $t2, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r10;
    // 0x00413D28: sw          $t3, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r11;
    // 0x00413D2C: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
    // 0x00413D30: bne         $v0, $a0, L_00413D0C
    if (ctx->r2 != ctx->r4) {
        // 0x00413D34: addiu       $v1, $v1, 0x10
        ctx->r3 = ADD32(ctx->r3, 0X10);
            goto L_00413D0C;
    }
    // 0x00413D34: addiu       $v1, $v1, 0x10
    ctx->r3 = ADD32(ctx->r3, 0X10);
    // 0x00413D38: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x00413D3C: addiu       $a1, $sp, 0x88
    ctx->r5 = ADD32(ctx->r29, 0X88);
    // 0x00413D40: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x00413D44: lw          $t1, 0x4($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X4);
    // 0x00413D48: sw          $t0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r8;
    // 0x00413D4C: sw          $t1, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r9;
    // 0x00413D50: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00413D54: sh          $v0, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r2;
    // 0x00413D58: jal         0x0041363C
    // 0x00413D5C: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    func_0041363C(rdram, ctx);
        goto after_4;
    // 0x00413D5C: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    after_4:
    // 0x00413D60: lw          $v1, 0x64($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X64);
    // 0x00413D64: lw          $v0, 0x8C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X8C);
    // 0x00413D68: lw          $a0, 0x3C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X3C);
    // 0x00413D6C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x00413D70: slt         $v0, $v1, $a0
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x00413D74: bnel        $v0, $zero, L_00413D7C
    if (ctx->r2 != 0) {
        // 0x00413D78: addu        $v1, $a0, $zero
        ctx->r3 = ADD32(ctx->r4, 0);
            goto L_00413D7C;
    }
    goto skip_0;
    // 0x00413D78: addu        $v1, $a0, $zero
    ctx->r3 = ADD32(ctx->r4, 0);
    skip_0:
L_00413D7C:
    // 0x00413D7C: sw          $v1, 0x4($s2)
    MEM_W(0X4, ctx->r18) = ctx->r3;
    // 0x00413D80: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x00413D84: lw          $v1, 0x68($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X68);
    // 0x00413D88: lw          $v0, 0x90($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X90);
    // 0x00413D8C: addu        $a0, $a0, $v1
    ctx->r4 = ADD32(ctx->r4, ctx->r3);
    // 0x00413D90: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x00413D94: srl         $v1, $v0, 31
    ctx->r3 = S32(U32(ctx->r2) >> 31);
    // 0x00413D98: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x00413D9C: sra         $v0, $v0, 1
    ctx->r2 = S32(SIGNED(ctx->r2) >> 1);
    // 0x00413DA0: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x00413DA4: j           L_00413E14
    // 0x00413DA8: sw          $a0, 0x8($s2)
    MEM_W(0X8, ctx->r18) = ctx->r4;
        goto L_00413E14;
    // 0x00413DA8: sw          $a0, 0x8($s2)
    MEM_W(0X8, ctx->r18) = ctx->r4;
    // 0x00413DAC: lw          $v0, 0x14($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X14);
    // 0x00413DB0: lwc1        $f1, 0x288($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X288);
    // 0x00413DB4: lwc1        $f0, 0x24($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X24);
    // 0x00413DB8: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00413DBC: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00413DC0: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00413DC4: lwc1        $f1, 0x2030($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X2030);
    // 0x00413DC8: cvt.s.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.fl = CVT_S_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x00413DCC: div.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = DIV_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00413DD0: trunc.w.s   $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x00413DD4: swc1        $f4, 0x4($s2)
    MEM_W(0X4, ctx->r18) = ctx->f4.u32l;
    // 0x00413DD8: lwc1        $f1, 0x28C($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X28C);
    // 0x00413DDC: lwc1        $f0, 0x28($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X28);
    // 0x00413DE0: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00413DE4: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00413DE8: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00413DEC: lwc1        $f1, 0x2034($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X2034);
    // 0x00413DF0: cvt.s.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.fl = CVT_S_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x00413DF4: div.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = DIV_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00413DF8: trunc.w.s   $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x00413DFC: swc1        $f4, 0x8($s2)
    MEM_W(0X8, ctx->r18) = ctx->f4.u32l;
    // 0x00413E00: j           L_00413E14
    // 0x00413E04: nop

        goto L_00413E14;
    // 0x00413E04: nop

    // 0x00413E08: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00413E0C: sw          $v0, 0x4($s2)
    MEM_W(0X4, ctx->r18) = ctx->r2;
L_00413E10:
    // 0x00413E10: sw          $v0, 0x8($s2)
    MEM_W(0X8, ctx->r18) = ctx->r2;
L_00413E14:
    // 0x00413E14: lh          $v0, 0xC($s3)
    ctx->r2 = MEM_H(ctx->r19, 0XC);
    // 0x00413E18: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x00413E1C: lw          $v1, 0x2030($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X2030);
    // 0x00413E20: mult        $v0, $v1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x00413E24: mflo        $v0
    ctx->r2 = lo;
    // 0x00413E28: lui         $v1, 0xE6C2
    ctx->r3 = S32(0XE6C2 << 16);
    // 0x00413E2C: ori         $v1, $v1, 0xB449
    ctx->r3 = ctx->r3 | 0XB449;
    // 0x00413E30: mult        $v0, $v1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x00413E34: lw          $a0, 0x8($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X8);
    // 0x00413E38: mfhi        $v1
    ctx->r3 = hi;
    // 0x00413E3C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x00413E40: sra         $v1, $v1, 8
    ctx->r3 = S32(SIGNED(ctx->r3) >> 8);
    // 0x00413E44: sra         $v0, $v0, 31
    ctx->r2 = S32(SIGNED(ctx->r2) >> 31);
    // 0x00413E48: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x00413E4C: mtc1        $v1, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r3;
    // 0x00413E50: cvt.s.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.fl = CVT_S_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x00413E54: andi        $v0, $a0, 0x8000
    ctx->r2 = ctx->r4 & 0X8000;
    // 0x00413E58: bne         $v0, $zero, L_00413E8C
    if (ctx->r2 != 0) {
        // 0x00413E5C: andi        $v0, $a0, 0x4000
        ctx->r2 = ctx->r4 & 0X4000;
            goto L_00413E8C;
    }
    // 0x00413E5C: andi        $v0, $a0, 0x4000
    ctx->r2 = ctx->r4 & 0X4000;
    // 0x00413E60: beq         $v0, $zero, L_00413E84
    if (ctx->r2 == 0) {
        // 0x00413E64: nop
    
            goto L_00413E84;
    }
    // 0x00413E64: nop

    // 0x00413E68: lwc1        $f0, 0x18($s2)
    ctx->f0.u32l = MEM_W(ctx->r18, 0X18);
    // 0x00413E6C: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00413E70: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x00413E74: trunc.w.s   $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x00413E78: swc1        $f4, 0x14($s2)
    MEM_W(0X14, ctx->r18) = ctx->f4.u32l;
    // 0x00413E7C: j           L_00413E8C
    // 0x00413E80: nop

        goto L_00413E8C;
    // 0x00413E80: nop

L_00413E84:
    // 0x00413E84: trunc.w.s   $f4, $f1
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 1);
    ctx->f4.u32l = TRUNC_W_S(ctx->f1.fl);
    // 0x00413E88: swc1        $f4, 0x14($s2)
    MEM_W(0X14, ctx->r18) = ctx->f4.u32l;
L_00413E8C:
    // 0x00413E8C: lwc1        $f0, 0xC($s2)
    ctx->f0.u32l = MEM_W(ctx->r18, 0XC);
    // 0x00413E90: lwc1        $f1, 0x4($s2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r18, 0X4);
    // 0x00413E94: cvt.s.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.fl = CVT_S_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x00413E98: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x00413E9C: lwc1        $f0, 0x14($s2)
    ctx->f0.u32l = MEM_W(ctx->r18, 0X14);
    // 0x00413EA0: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00413EA4: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x00413EA8: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x00413EAC: lw          $v0, 0x2034($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2034);
    // 0x00413EB0: trunc.w.s   $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x00413EB4: swc1        $f4, 0x18($s2)
    MEM_W(0X18, ctx->r18) = ctx->f4.u32l;
    // 0x00413EB8: lh          $v1, 0xE($s3)
    ctx->r3 = MEM_H(ctx->r19, 0XE);
    // 0x00413EBC: mult        $v1, $v0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x00413EC0: mflo        $v1
    ctx->r3 = lo;
    // 0x00413EC4: lui         $v0, 0x939A
    ctx->r2 = S32(0X939A << 16);
    // 0x00413EC8: ori         $v0, $v0, 0x85C5
    ctx->r2 = ctx->r2 | 0X85C5;
    // 0x00413ECC: mult        $v1, $v0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x00413ED0: lw          $a0, 0x8($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X8);
    // 0x00413ED4: mfhi        $t4
    ctx->r12 = hi;
    // 0x00413ED8: addu        $v0, $t4, $v1
    ctx->r2 = ADD32(ctx->r12, ctx->r3);
    // 0x00413EDC: sra         $v0, $v0, 7
    ctx->r2 = S32(SIGNED(ctx->r2) >> 7);
    // 0x00413EE0: sra         $v1, $v1, 31
    ctx->r3 = S32(SIGNED(ctx->r3) >> 31);
    // 0x00413EE4: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x00413EE8: mtc1        $v0, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r2;
    // 0x00413EEC: cvt.s.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.fl = CVT_S_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x00413EF0: lui         $v0, 0x2
    ctx->r2 = S32(0X2 << 16);
    // 0x00413EF4: and         $v0, $a0, $v0
    ctx->r2 = ctx->r4 & ctx->r2;
    // 0x00413EF8: bne         $v0, $zero, L_00413F30
    if (ctx->r2 != 0) {
        // 0x00413EFC: lui         $v0, 0x1
        ctx->r2 = S32(0X1 << 16);
            goto L_00413F30;
    }
    // 0x00413EFC: lui         $v0, 0x1
    ctx->r2 = S32(0X1 << 16);
    // 0x00413F00: and         $v0, $a0, $v0
    ctx->r2 = ctx->r4 & ctx->r2;
    // 0x00413F04: beq         $v0, $zero, L_00413F28
    if (ctx->r2 == 0) {
        // 0x00413F08: nop
    
            goto L_00413F28;
    }
    // 0x00413F08: nop

    // 0x00413F0C: lwc1        $f0, 0x20($s2)
    ctx->f0.u32l = MEM_W(ctx->r18, 0X20);
    // 0x00413F10: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00413F14: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x00413F18: trunc.w.s   $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x00413F1C: swc1        $f4, 0x1C($s2)
    MEM_W(0X1C, ctx->r18) = ctx->f4.u32l;
    // 0x00413F20: j           L_00413F30
    // 0x00413F24: nop

        goto L_00413F30;
    // 0x00413F24: nop

L_00413F28:
    // 0x00413F28: trunc.w.s   $f4, $f1
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 1);
    ctx->f4.u32l = TRUNC_W_S(ctx->f1.fl);
    // 0x00413F2C: swc1        $f4, 0x1C($s2)
    MEM_W(0X1C, ctx->r18) = ctx->f4.u32l;
L_00413F30:
    // 0x00413F30: lwc1        $f0, 0x10($s2)
    ctx->f0.u32l = MEM_W(ctx->r18, 0X10);
    // 0x00413F34: lwc1        $f1, 0x8($s2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r18, 0X8);
    // 0x00413F38: cvt.s.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.fl = CVT_S_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x00413F3C: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x00413F40: lwc1        $f0, 0x1C($s2)
    ctx->f0.u32l = MEM_W(ctx->r18, 0X1C);
    // 0x00413F44: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00413F48: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x00413F4C: trunc.w.s   $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x00413F50: swc1        $f4, 0x20($s2)
    MEM_W(0X20, ctx->r18) = ctx->f4.u32l;
    // 0x00413F54: lw          $ra, 0xC0($sp)
    ctx->r31 = MEM_W(ctx->r29, 0XC0);
    // 0x00413F58: lw          $s3, 0xBC($sp)
    ctx->r19 = MEM_W(ctx->r29, 0XBC);
    // 0x00413F5C: lw          $s2, 0xB8($sp)
    ctx->r18 = MEM_W(ctx->r29, 0XB8);
    // 0x00413F60: lw          $s1, 0xB4($sp)
    ctx->r17 = MEM_W(ctx->r29, 0XB4);
    // 0x00413F64: lw          $s0, 0xB0($sp)
    ctx->r16 = MEM_W(ctx->r29, 0XB0);
    // 0x00413F68: ldc1        $f20, 0xC8($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0XC8);
    // 0x00413F6C: jr          $ra
    // 0x00413F70: addiu       $sp, $sp, 0xD0
    ctx->r29 = ADD32(ctx->r29, 0XD0);
    return;
    // 0x00413F70: addiu       $sp, $sp, 0xD0
    ctx->r29 = ADD32(ctx->r29, 0XD0);
;}
RECOMP_FUNC void entry_00413A24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00413A24: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
    // 0x00413A28: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x00413A2C: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x00413A30: addiu       $v1, $v1, 0x1BD4
    ctx->r3 = ADD32(ctx->r3, 0X1BD4);
    // 0x00413A34: addu        $s1, $v0, $v1
    ctx->r17 = ADD32(ctx->r2, ctx->r3);
    // 0x00413A38: lw          $v0, 0x4($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X4);
    // 0x00413A3C: sw          $v0, 0x4($s2)
    MEM_W(0X4, ctx->r18) = ctx->r2;
    // 0x00413A40: lw          $v1, 0x8($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X8);
    // 0x00413A44: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x00413A48: lw          $v0, 0x2034($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2034);
    // 0x00413A4C: mult        $v1, $v0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x00413A50: mflo        $v1
    ctx->r3 = lo;
    // 0x00413A54: lui         $v0, 0x939A
    ctx->r2 = S32(0X939A << 16);
    // 0x00413A58: ori         $v0, $v0, 0x85C5
    ctx->r2 = ctx->r2 | 0X85C5;
    // 0x00413A5C: mult        $v1, $v0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x00413A60: mfhi        $t4
    ctx->r12 = hi;
    // 0x00413A64: addu        $v0, $t4, $v1
    ctx->r2 = ADD32(ctx->r12, ctx->r3);
    // 0x00413A68: sra         $v0, $v0, 7
    ctx->r2 = S32(SIGNED(ctx->r2) >> 7);
    // 0x00413A6C: sra         $v1, $v1, 31
    ctx->r3 = S32(SIGNED(ctx->r3) >> 31);
    // 0x00413A70: j           L_00413E10
    // 0x00413A74: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
        goto L_00413E10;
    // 0x00413A74: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x00413A78: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x00413A7C: addiu       $a0, $a0, -0x5378
    ctx->r4 = ADD32(ctx->r4, -0X5378);
    // 0x00413A80: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x00413A84: addiu       $v0, $zero, 0xD
    ctx->r2 = ADD32(0, 0XD);
    // 0x00413A88: bne         $v1, $v0, L_00413AA0
    if (ctx->r3 != ctx->r2) {
        // 0x00413A8C: lui         $v1, 0x4000
        ctx->r3 = S32(0X4000 << 16);
            goto L_00413AA0;
    }
    // 0x00413A8C: lui         $v1, 0x4000
    ctx->r3 = S32(0X4000 << 16);
    // 0x00413A90: lw          $v0, 0x8($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X8);
    // 0x00413A94: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x00413A98: bne         $v0, $zero, L_00413ACC
    if (ctx->r2 != 0) {
        // 0x00413A9C: addiu       $v0, $zero, 0x11C
        ctx->r2 = ADD32(0, 0X11C);
            goto L_00413ACC;
    }
    // 0x00413A9C: addiu       $v0, $zero, 0x11C
    ctx->r2 = ADD32(0, 0X11C);
L_00413AA0:
    // 0x00413AA0: lbu         $v0, -0x197($a0)
    ctx->r2 = MEM_BU(ctx->r4, -0X197);
    // 0x00413AA4: beq         $v0, $zero, L_00413ADC
    if (ctx->r2 == 0) {
        // 0x00413AA8: nop
    
            goto L_00413ADC;
    }
    // 0x00413AA8: nop

    // 0x00413AAC: lw          $v0, 0x8($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X8);
    // 0x00413AB0: bgez        $v0, L_00413ADC
    if (SIGNED(ctx->r2) >= 0) {
        // 0x00413AB4: nop
    
            goto L_00413ADC;
    }
    // 0x00413AB4: nop

    // 0x00413AB8: jal         0x00266B80
    // 0x00413ABC: nop

    func_00266B80(rdram, ctx);
        goto after_0;
    // 0x00413ABC: nop

    after_0:
    // 0x00413AC0: lui         $v1, 0x40
    ctx->r3 = S32(0X40 << 16);
    // 0x00413AC4: bne         $v0, $v1, L_00413ADC
    if (ctx->r2 != ctx->r3) {
        // 0x00413AC8: addiu       $v0, $zero, 0x11C
        ctx->r2 = ADD32(0, 0X11C);
            goto L_00413ADC;
    }
    // 0x00413AC8: addiu       $v0, $zero, 0x11C
    ctx->r2 = ADD32(0, 0X11C);
L_00413ACC:
    // 0x00413ACC: sw          $v0, 0x4($s2)
    MEM_W(0X4, ctx->r18) = ctx->r2;
    // 0x00413AD0: addiu       $v0, $zero, 0xDE
    ctx->r2 = ADD32(0, 0XDE);
    // 0x00413AD4: j           L_00413AF0
    // 0x00413AD8: sw          $v0, 0x8($s2)
    MEM_W(0X8, ctx->r18) = ctx->r2;
        goto L_00413AF0;
    // 0x00413AD8: sw          $v0, 0x8($s2)
    MEM_W(0X8, ctx->r18) = ctx->r2;
L_00413ADC:
    // 0x00413ADC: lw          $a0, 0x14($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X14);
    // 0x00413AE0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x00413AE4: addiu       $a2, $s2, 0x4
    ctx->r6 = ADD32(ctx->r18, 0X4);
    // 0x00413AE8: jal         0x0027AEA8
    // 0x00413AEC: addiu       $a3, $s2, 0x8
    ctx->r7 = ADD32(ctx->r18, 0X8);
    func_0027AEA8(rdram, ctx);
        goto after_1;
    // 0x00413AEC: addiu       $a3, $s2, 0x8
    ctx->r7 = ADD32(ctx->r18, 0X8);
    after_1:
L_00413AF0:
    // 0x00413AF0: lw          $v0, 0x8($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X8);
    // 0x00413AF4: lui         $v1, 0x1000
    ctx->r3 = S32(0X1000 << 16);
    // 0x00413AF8: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x00413AFC: beq         $v0, $zero, L_00413B4C
    if (ctx->r2 == 0) {
        // 0x00413B00: nop
    
            goto L_00413B4C;
    }
    // 0x00413B00: nop

    // 0x00413B04: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x00413B08: lwc1        $f3, 0x4($s2)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r18, 0X4);
    // 0x00413B0C: cvt.s.w     $f3, $f3
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    ctx->f3.fl = CVT_S_W(ctx->f_odd[(3 - 1) * 2]);
    // 0x00413B10: c.eq.s      $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f3.fl == ctx->f0.fl;
    // 0x00413B14: nop

    // 0x00413B18: bc1t        L_00413B4C
    if (c1cs) {
        // 0x00413B1C: nop
    
            goto L_00413B4C;
    }
    // 0x00413B1C: nop

    // 0x00413B20: lwc1        $f2, 0x8($s2)
    ctx->f2.u32l = MEM_W(ctx->r18, 0X8);
    // 0x00413B24: cvt.s.w     $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    ctx->f2.fl = CVT_S_W(ctx->f2.u32l);
    // 0x00413B28: c.eq.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl == ctx->f0.fl;
    // 0x00413B2C: nop

    // 0x00413B30: bc1t        L_00413B4C
    if (c1cs) {
        // 0x00413B34: nop
    
            goto L_00413B4C;
    }
    // 0x00413B34: nop

    // 0x00413B38: lwc1        $f0, 0x288($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X288);
    // 0x00413B3C: lwc1        $f1, 0x28C($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X28C);
    // 0x00413B40: div.s       $f3, $f0, $f3
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f3.fl = DIV_S(ctx->f0.fl, ctx->f3.fl);
    // 0x00413B44: j           L_00413B7C
    // 0x00413B48: div.s       $f0, $f1, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = DIV_S(ctx->f1.fl, ctx->f2.fl);
        goto L_00413B7C;
    // 0x00413B48: div.s       $f0, $f1, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = DIV_S(ctx->f1.fl, ctx->f2.fl);
L_00413B4C:
    // 0x00413B4C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00413B50: lwc1        $f1, 0xBC4($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0XBC4);
    // 0x00413B54: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00413B58: lwc1        $f0, 0x2030($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X2030);
    // 0x00413B5C: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00413B60: mul.s       $f3, $f0, $f1
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f3.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00413B64: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00413B68: lwc1        $f1, 0xBC8($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0XBC8);
    // 0x00413B6C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00413B70: lwc1        $f0, 0x2034($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X2034);
    // 0x00413B74: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00413B78: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
L_00413B7C:
    // 0x00413B7C: swc1        $f3, 0xC($s2)
    MEM_W(0XC, ctx->r18) = ctx->f_odd[(3 - 1) * 2];
    // 0x00413B80: j           L_00413E14
    // 0x00413B84: swc1        $f0, 0x10($s2)
    MEM_W(0X10, ctx->r18) = ctx->f0.u32l;
        goto L_00413E14;
    // 0x00413B84: swc1        $f0, 0x10($s2)
    MEM_W(0X10, ctx->r18) = ctx->f0.u32l;
    // 0x00413B88: addiu       $v1, $sp, 0x38
    ctx->r3 = ADD32(ctx->r29, 0X38);
    // 0x00413B8C: addu        $v0, $s2, $zero
    ctx->r2 = ADD32(ctx->r18, 0);
    // 0x00413B90: addiu       $a0, $s2, 0x20
    ctx->r4 = ADD32(ctx->r18, 0X20);
L_00413B94:
    // 0x00413B94: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x00413B98: lw          $t1, 0x4($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X4);
    // 0x00413B9C: lw          $t2, 0x8($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X8);
    // 0x00413BA0: lw          $t3, 0xC($v0)
    ctx->r11 = MEM_W(ctx->r2, 0XC);
    // 0x00413BA4: sw          $t0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r8;
    // 0x00413BA8: sw          $t1, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r9;
    // 0x00413BAC: sw          $t2, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r10;
    // 0x00413BB0: sw          $t3, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r11;
    // 0x00413BB4: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
    // 0x00413BB8: bne         $v0, $a0, L_00413B94
    if (ctx->r2 != ctx->r4) {
        // 0x00413BBC: addiu       $v1, $v1, 0x10
        ctx->r3 = ADD32(ctx->r3, 0X10);
            goto L_00413B94;
    }
    // 0x00413BBC: addiu       $v1, $v1, 0x10
    ctx->r3 = ADD32(ctx->r3, 0X10);
    // 0x00413BC0: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x00413BC4: sw          $t0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r8;
    // 0x00413BC8: addiu       $v1, $sp, 0x10
    ctx->r3 = ADD32(ctx->r29, 0X10);
    // 0x00413BCC: addu        $v0, $s3, $zero
    ctx->r2 = ADD32(ctx->r19, 0);
    // 0x00413BD0: addiu       $a0, $s3, 0x20
    ctx->r4 = ADD32(ctx->r19, 0X20);
L_00413BD4:
    // 0x00413BD4: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x00413BD8: lw          $t1, 0x4($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X4);
    // 0x00413BDC: lw          $t2, 0x8($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X8);
    // 0x00413BE0: lw          $t3, 0xC($v0)
    ctx->r11 = MEM_W(ctx->r2, 0XC);
    // 0x00413BE4: sw          $t0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r8;
    // 0x00413BE8: sw          $t1, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r9;
    // 0x00413BEC: sw          $t2, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r10;
    // 0x00413BF0: sw          $t3, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r11;
    // 0x00413BF4: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
    // 0x00413BF8: bne         $v0, $a0, L_00413BD4
    if (ctx->r2 != ctx->r4) {
        // 0x00413BFC: addiu       $v1, $v1, 0x10
        ctx->r3 = ADD32(ctx->r3, 0X10);
            goto L_00413BD4;
    }
    // 0x00413BFC: addiu       $v1, $v1, 0x10
    ctx->r3 = ADD32(ctx->r3, 0X10);
    // 0x00413C00: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x00413C04: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    // 0x00413C08: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x00413C0C: lw          $t1, 0x4($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X4);
    // 0x00413C10: sw          $t0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r8;
    // 0x00413C14: sw          $t1, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r9;
    // 0x00413C18: jal         0x0041363C
    // 0x00413C1C: sh          $zero, 0x14($sp)
    MEM_H(0X14, ctx->r29) = 0;
    func_0041363C(rdram, ctx);
        goto after_2;
    // 0x00413C1C: sh          $zero, 0x14($sp)
    MEM_H(0X14, ctx->r29) = 0;
    after_2:
    // 0x00413C20: addiu       $v1, $sp, 0x60
    ctx->r3 = ADD32(ctx->r29, 0X60);
    // 0x00413C24: addu        $v0, $s2, $zero
    ctx->r2 = ADD32(ctx->r18, 0);
    // 0x00413C28: addiu       $a0, $s2, 0x20
    ctx->r4 = ADD32(ctx->r18, 0X20);
L_00413C2C:
    // 0x00413C2C: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x00413C30: lw          $t1, 0x4($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X4);
    // 0x00413C34: lw          $t2, 0x8($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X8);
    // 0x00413C38: lw          $t3, 0xC($v0)
    ctx->r11 = MEM_W(ctx->r2, 0XC);
    // 0x00413C3C: sw          $t0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r8;
    // 0x00413C40: sw          $t1, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r9;
    // 0x00413C44: sw          $t2, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r10;
    // 0x00413C48: sw          $t3, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r11;
    // 0x00413C4C: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
    // 0x00413C50: bne         $v0, $a0, L_00413C2C
    if (ctx->r2 != ctx->r4) {
        // 0x00413C54: addiu       $v1, $v1, 0x10
        ctx->r3 = ADD32(ctx->r3, 0X10);
            goto L_00413C2C;
    }
    // 0x00413C54: addiu       $v1, $v1, 0x10
    ctx->r3 = ADD32(ctx->r3, 0X10);
    // 0x00413C58: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x00413C5C: sw          $t0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r8;
    // 0x00413C60: addiu       $v1, $sp, 0x10
    ctx->r3 = ADD32(ctx->r29, 0X10);
    // 0x00413C64: addu        $v0, $s3, $zero
    ctx->r2 = ADD32(ctx->r19, 0);
    // 0x00413C68: addiu       $a0, $s3, 0x20
    ctx->r4 = ADD32(ctx->r19, 0X20);
L_00413C6C:
    // 0x00413C6C: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x00413C70: lw          $t1, 0x4($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X4);
    // 0x00413C74: lw          $t2, 0x8($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X8);
    // 0x00413C78: lw          $t3, 0xC($v0)
    ctx->r11 = MEM_W(ctx->r2, 0XC);
    // 0x00413C7C: sw          $t0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r8;
    // 0x00413C80: sw          $t1, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r9;
    // 0x00413C84: sw          $t2, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r10;
    // 0x00413C88: sw          $t3, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r11;
    // 0x00413C8C: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
    // 0x00413C90: bne         $v0, $a0, L_00413C6C
    if (ctx->r2 != ctx->r4) {
        // 0x00413C94: addiu       $v1, $v1, 0x10
        ctx->r3 = ADD32(ctx->r3, 0X10);
            goto L_00413C6C;
    }
    // 0x00413C94: addiu       $v1, $v1, 0x10
    ctx->r3 = ADD32(ctx->r3, 0X10);
    // 0x00413C98: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x00413C9C: addiu       $a1, $sp, 0x60
    ctx->r5 = ADD32(ctx->r29, 0X60);
    // 0x00413CA0: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x00413CA4: lw          $t1, 0x4($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X4);
    // 0x00413CA8: sw          $t0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r8;
    // 0x00413CAC: sw          $t1, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r9;
    // 0x00413CB0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00413CB4: sh          $v0, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r2;
    // 0x00413CB8: jal         0x0041363C
    // 0x00413CBC: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    func_0041363C(rdram, ctx);
        goto after_3;
    // 0x00413CBC: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    after_3:
    // 0x00413CC0: addiu       $v1, $sp, 0x88
    ctx->r3 = ADD32(ctx->r29, 0X88);
    // 0x00413CC4: addu        $v0, $s2, $zero
    ctx->r2 = ADD32(ctx->r18, 0);
    // 0x00413CC8: addiu       $a0, $s2, 0x20
    ctx->r4 = ADD32(ctx->r18, 0X20);
L_00413CCC:
    // 0x00413CCC: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x00413CD0: lw          $t1, 0x4($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X4);
    // 0x00413CD4: lw          $t2, 0x8($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X8);
    // 0x00413CD8: lw          $t3, 0xC($v0)
    ctx->r11 = MEM_W(ctx->r2, 0XC);
    // 0x00413CDC: sw          $t0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r8;
    // 0x00413CE0: sw          $t1, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r9;
    // 0x00413CE4: sw          $t2, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r10;
    // 0x00413CE8: sw          $t3, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r11;
    // 0x00413CEC: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
    // 0x00413CF0: bne         $v0, $a0, L_00413CCC
    if (ctx->r2 != ctx->r4) {
        // 0x00413CF4: addiu       $v1, $v1, 0x10
        ctx->r3 = ADD32(ctx->r3, 0X10);
            goto L_00413CCC;
    }
    // 0x00413CF4: addiu       $v1, $v1, 0x10
    ctx->r3 = ADD32(ctx->r3, 0X10);
    // 0x00413CF8: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x00413CFC: sw          $t0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r8;
    // 0x00413D00: addiu       $v1, $sp, 0x10
    ctx->r3 = ADD32(ctx->r29, 0X10);
    // 0x00413D04: addu        $v0, $s3, $zero
    ctx->r2 = ADD32(ctx->r19, 0);
    // 0x00413D08: addiu       $a0, $s3, 0x20
    ctx->r4 = ADD32(ctx->r19, 0X20);
L_00413D0C:
    // 0x00413D0C: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x00413D10: lw          $t1, 0x4($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X4);
    // 0x00413D14: lw          $t2, 0x8($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X8);
    // 0x00413D18: lw          $t3, 0xC($v0)
    ctx->r11 = MEM_W(ctx->r2, 0XC);
    // 0x00413D1C: sw          $t0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r8;
    // 0x00413D20: sw          $t1, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r9;
    // 0x00413D24: sw          $t2, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r10;
    // 0x00413D28: sw          $t3, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r11;
    // 0x00413D2C: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
    // 0x00413D30: bne         $v0, $a0, L_00413D0C
    if (ctx->r2 != ctx->r4) {
        // 0x00413D34: addiu       $v1, $v1, 0x10
        ctx->r3 = ADD32(ctx->r3, 0X10);
            goto L_00413D0C;
    }
    // 0x00413D34: addiu       $v1, $v1, 0x10
    ctx->r3 = ADD32(ctx->r3, 0X10);
    // 0x00413D38: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x00413D3C: addiu       $a1, $sp, 0x88
    ctx->r5 = ADD32(ctx->r29, 0X88);
    // 0x00413D40: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x00413D44: lw          $t1, 0x4($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X4);
    // 0x00413D48: sw          $t0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r8;
    // 0x00413D4C: sw          $t1, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r9;
    // 0x00413D50: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00413D54: sh          $v0, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r2;
    // 0x00413D58: jal         0x0041363C
    // 0x00413D5C: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    func_0041363C(rdram, ctx);
        goto after_4;
    // 0x00413D5C: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    after_4:
    // 0x00413D60: lw          $v1, 0x64($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X64);
    // 0x00413D64: lw          $v0, 0x8C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X8C);
    // 0x00413D68: lw          $a0, 0x3C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X3C);
    // 0x00413D6C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x00413D70: slt         $v0, $v1, $a0
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x00413D74: bnel        $v0, $zero, L_00413D7C
    if (ctx->r2 != 0) {
        // 0x00413D78: addu        $v1, $a0, $zero
        ctx->r3 = ADD32(ctx->r4, 0);
            goto L_00413D7C;
    }
    goto skip_0;
    // 0x00413D78: addu        $v1, $a0, $zero
    ctx->r3 = ADD32(ctx->r4, 0);
    skip_0:
L_00413D7C:
    // 0x00413D7C: sw          $v1, 0x4($s2)
    MEM_W(0X4, ctx->r18) = ctx->r3;
    // 0x00413D80: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x00413D84: lw          $v1, 0x68($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X68);
    // 0x00413D88: lw          $v0, 0x90($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X90);
    // 0x00413D8C: addu        $a0, $a0, $v1
    ctx->r4 = ADD32(ctx->r4, ctx->r3);
    // 0x00413D90: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x00413D94: srl         $v1, $v0, 31
    ctx->r3 = S32(U32(ctx->r2) >> 31);
    // 0x00413D98: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x00413D9C: sra         $v0, $v0, 1
    ctx->r2 = S32(SIGNED(ctx->r2) >> 1);
    // 0x00413DA0: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x00413DA4: j           L_00413E14
    // 0x00413DA8: sw          $a0, 0x8($s2)
    MEM_W(0X8, ctx->r18) = ctx->r4;
        goto L_00413E14;
    // 0x00413DA8: sw          $a0, 0x8($s2)
    MEM_W(0X8, ctx->r18) = ctx->r4;
    // 0x00413DAC: lw          $v0, 0x14($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X14);
    // 0x00413DB0: lwc1        $f1, 0x288($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X288);
    // 0x00413DB4: lwc1        $f0, 0x24($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X24);
    // 0x00413DB8: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00413DBC: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00413DC0: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00413DC4: lwc1        $f1, 0x2030($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X2030);
    // 0x00413DC8: cvt.s.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.fl = CVT_S_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x00413DCC: div.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = DIV_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00413DD0: trunc.w.s   $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x00413DD4: swc1        $f4, 0x4($s2)
    MEM_W(0X4, ctx->r18) = ctx->f4.u32l;
    // 0x00413DD8: lwc1        $f1, 0x28C($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X28C);
    // 0x00413DDC: lwc1        $f0, 0x28($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X28);
    // 0x00413DE0: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00413DE4: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00413DE8: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00413DEC: lwc1        $f1, 0x2034($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X2034);
    // 0x00413DF0: cvt.s.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.fl = CVT_S_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x00413DF4: div.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = DIV_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00413DF8: trunc.w.s   $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x00413DFC: swc1        $f4, 0x8($s2)
    MEM_W(0X8, ctx->r18) = ctx->f4.u32l;
    // 0x00413E00: j           L_00413E14
    // 0x00413E04: nop

        goto L_00413E14;
    // 0x00413E04: nop

    // 0x00413E08: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00413E0C: sw          $v0, 0x4($s2)
    MEM_W(0X4, ctx->r18) = ctx->r2;
L_00413E10:
    // 0x00413E10: sw          $v0, 0x8($s2)
    MEM_W(0X8, ctx->r18) = ctx->r2;
L_00413E14:
    // 0x00413E14: lh          $v0, 0xC($s3)
    ctx->r2 = MEM_H(ctx->r19, 0XC);
    // 0x00413E18: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x00413E1C: lw          $v1, 0x2030($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X2030);
    // 0x00413E20: mult        $v0, $v1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x00413E24: mflo        $v0
    ctx->r2 = lo;
    // 0x00413E28: lui         $v1, 0xE6C2
    ctx->r3 = S32(0XE6C2 << 16);
    // 0x00413E2C: ori         $v1, $v1, 0xB449
    ctx->r3 = ctx->r3 | 0XB449;
    // 0x00413E30: mult        $v0, $v1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x00413E34: lw          $a0, 0x8($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X8);
    // 0x00413E38: mfhi        $v1
    ctx->r3 = hi;
    // 0x00413E3C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x00413E40: sra         $v1, $v1, 8
    ctx->r3 = S32(SIGNED(ctx->r3) >> 8);
    // 0x00413E44: sra         $v0, $v0, 31
    ctx->r2 = S32(SIGNED(ctx->r2) >> 31);
    // 0x00413E48: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x00413E4C: mtc1        $v1, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r3;
    // 0x00413E50: cvt.s.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.fl = CVT_S_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x00413E54: andi        $v0, $a0, 0x8000
    ctx->r2 = ctx->r4 & 0X8000;
    // 0x00413E58: bne         $v0, $zero, L_00413E8C
    if (ctx->r2 != 0) {
        // 0x00413E5C: andi        $v0, $a0, 0x4000
        ctx->r2 = ctx->r4 & 0X4000;
            goto L_00413E8C;
    }
    // 0x00413E5C: andi        $v0, $a0, 0x4000
    ctx->r2 = ctx->r4 & 0X4000;
    // 0x00413E60: beq         $v0, $zero, L_00413E84
    if (ctx->r2 == 0) {
        // 0x00413E64: nop
    
            goto L_00413E84;
    }
    // 0x00413E64: nop

    // 0x00413E68: lwc1        $f0, 0x18($s2)
    ctx->f0.u32l = MEM_W(ctx->r18, 0X18);
    // 0x00413E6C: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00413E70: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x00413E74: trunc.w.s   $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x00413E78: swc1        $f4, 0x14($s2)
    MEM_W(0X14, ctx->r18) = ctx->f4.u32l;
    // 0x00413E7C: j           L_00413E8C
    // 0x00413E80: nop

        goto L_00413E8C;
    // 0x00413E80: nop

L_00413E84:
    // 0x00413E84: trunc.w.s   $f4, $f1
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 1);
    ctx->f4.u32l = TRUNC_W_S(ctx->f1.fl);
    // 0x00413E88: swc1        $f4, 0x14($s2)
    MEM_W(0X14, ctx->r18) = ctx->f4.u32l;
L_00413E8C:
    // 0x00413E8C: lwc1        $f0, 0xC($s2)
    ctx->f0.u32l = MEM_W(ctx->r18, 0XC);
    // 0x00413E90: lwc1        $f1, 0x4($s2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r18, 0X4);
    // 0x00413E94: cvt.s.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.fl = CVT_S_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x00413E98: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x00413E9C: lwc1        $f0, 0x14($s2)
    ctx->f0.u32l = MEM_W(ctx->r18, 0X14);
    // 0x00413EA0: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00413EA4: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x00413EA8: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x00413EAC: lw          $v0, 0x2034($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2034);
    // 0x00413EB0: trunc.w.s   $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x00413EB4: swc1        $f4, 0x18($s2)
    MEM_W(0X18, ctx->r18) = ctx->f4.u32l;
    // 0x00413EB8: lh          $v1, 0xE($s3)
    ctx->r3 = MEM_H(ctx->r19, 0XE);
    // 0x00413EBC: mult        $v1, $v0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x00413EC0: mflo        $v1
    ctx->r3 = lo;
    // 0x00413EC4: lui         $v0, 0x939A
    ctx->r2 = S32(0X939A << 16);
    // 0x00413EC8: ori         $v0, $v0, 0x85C5
    ctx->r2 = ctx->r2 | 0X85C5;
    // 0x00413ECC: mult        $v1, $v0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x00413ED0: lw          $a0, 0x8($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X8);
    // 0x00413ED4: mfhi        $t4
    ctx->r12 = hi;
    // 0x00413ED8: addu        $v0, $t4, $v1
    ctx->r2 = ADD32(ctx->r12, ctx->r3);
    // 0x00413EDC: sra         $v0, $v0, 7
    ctx->r2 = S32(SIGNED(ctx->r2) >> 7);
    // 0x00413EE0: sra         $v1, $v1, 31
    ctx->r3 = S32(SIGNED(ctx->r3) >> 31);
    // 0x00413EE4: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x00413EE8: mtc1        $v0, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r2;
    // 0x00413EEC: cvt.s.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.fl = CVT_S_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x00413EF0: lui         $v0, 0x2
    ctx->r2 = S32(0X2 << 16);
    // 0x00413EF4: and         $v0, $a0, $v0
    ctx->r2 = ctx->r4 & ctx->r2;
    // 0x00413EF8: bne         $v0, $zero, L_00413F30
    if (ctx->r2 != 0) {
        // 0x00413EFC: lui         $v0, 0x1
        ctx->r2 = S32(0X1 << 16);
            goto L_00413F30;
    }
    // 0x00413EFC: lui         $v0, 0x1
    ctx->r2 = S32(0X1 << 16);
    // 0x00413F00: and         $v0, $a0, $v0
    ctx->r2 = ctx->r4 & ctx->r2;
    // 0x00413F04: beq         $v0, $zero, L_00413F28
    if (ctx->r2 == 0) {
        // 0x00413F08: nop
    
            goto L_00413F28;
    }
    // 0x00413F08: nop

    // 0x00413F0C: lwc1        $f0, 0x20($s2)
    ctx->f0.u32l = MEM_W(ctx->r18, 0X20);
    // 0x00413F10: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00413F14: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x00413F18: trunc.w.s   $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x00413F1C: swc1        $f4, 0x1C($s2)
    MEM_W(0X1C, ctx->r18) = ctx->f4.u32l;
    // 0x00413F20: j           L_00413F30
    // 0x00413F24: nop

        goto L_00413F30;
    // 0x00413F24: nop

L_00413F28:
    // 0x00413F28: trunc.w.s   $f4, $f1
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 1);
    ctx->f4.u32l = TRUNC_W_S(ctx->f1.fl);
    // 0x00413F2C: swc1        $f4, 0x1C($s2)
    MEM_W(0X1C, ctx->r18) = ctx->f4.u32l;
L_00413F30:
    // 0x00413F30: lwc1        $f0, 0x10($s2)
    ctx->f0.u32l = MEM_W(ctx->r18, 0X10);
    // 0x00413F34: lwc1        $f1, 0x8($s2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r18, 0X8);
    // 0x00413F38: cvt.s.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.fl = CVT_S_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x00413F3C: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x00413F40: lwc1        $f0, 0x1C($s2)
    ctx->f0.u32l = MEM_W(ctx->r18, 0X1C);
    // 0x00413F44: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00413F48: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x00413F4C: trunc.w.s   $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x00413F50: swc1        $f4, 0x20($s2)
    MEM_W(0X20, ctx->r18) = ctx->f4.u32l;
    // 0x00413F54: lw          $ra, 0xC0($sp)
    ctx->r31 = MEM_W(ctx->r29, 0XC0);
    // 0x00413F58: lw          $s3, 0xBC($sp)
    ctx->r19 = MEM_W(ctx->r29, 0XBC);
    // 0x00413F5C: lw          $s2, 0xB8($sp)
    ctx->r18 = MEM_W(ctx->r29, 0XB8);
    // 0x00413F60: lw          $s1, 0xB4($sp)
    ctx->r17 = MEM_W(ctx->r29, 0XB4);
    // 0x00413F64: lw          $s0, 0xB0($sp)
    ctx->r16 = MEM_W(ctx->r29, 0XB0);
    // 0x00413F68: ldc1        $f20, 0xC8($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0XC8);
    // 0x00413F6C: jr          $ra
    // 0x00413F70: addiu       $sp, $sp, 0xD0
    ctx->r29 = ADD32(ctx->r29, 0XD0);
    return;
    // 0x00413F70: addiu       $sp, $sp, 0xD0
    ctx->r29 = ADD32(ctx->r29, 0XD0);
;}
RECOMP_FUNC void entry_00413A28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00413A28: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x00413A2C: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x00413A30: addiu       $v1, $v1, 0x1BD4
    ctx->r3 = ADD32(ctx->r3, 0X1BD4);
    // 0x00413A34: addu        $s1, $v0, $v1
    ctx->r17 = ADD32(ctx->r2, ctx->r3);
    // 0x00413A38: lw          $v0, 0x4($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X4);
    // 0x00413A3C: sw          $v0, 0x4($s2)
    MEM_W(0X4, ctx->r18) = ctx->r2;
    // 0x00413A40: lw          $v1, 0x8($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X8);
    // 0x00413A44: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x00413A48: lw          $v0, 0x2034($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2034);
    // 0x00413A4C: mult        $v1, $v0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x00413A50: mflo        $v1
    ctx->r3 = lo;
    // 0x00413A54: lui         $v0, 0x939A
    ctx->r2 = S32(0X939A << 16);
    // 0x00413A58: ori         $v0, $v0, 0x85C5
    ctx->r2 = ctx->r2 | 0X85C5;
    // 0x00413A5C: mult        $v1, $v0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x00413A60: mfhi        $t4
    ctx->r12 = hi;
    // 0x00413A64: addu        $v0, $t4, $v1
    ctx->r2 = ADD32(ctx->r12, ctx->r3);
    // 0x00413A68: sra         $v0, $v0, 7
    ctx->r2 = S32(SIGNED(ctx->r2) >> 7);
    // 0x00413A6C: sra         $v1, $v1, 31
    ctx->r3 = S32(SIGNED(ctx->r3) >> 31);
    // 0x00413A70: j           L_00413E10
    // 0x00413A74: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
        goto L_00413E10;
    // 0x00413A74: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x00413A78: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x00413A7C: addiu       $a0, $a0, -0x5378
    ctx->r4 = ADD32(ctx->r4, -0X5378);
    // 0x00413A80: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x00413A84: addiu       $v0, $zero, 0xD
    ctx->r2 = ADD32(0, 0XD);
    // 0x00413A88: bne         $v1, $v0, L_00413AA0
    if (ctx->r3 != ctx->r2) {
        // 0x00413A8C: lui         $v1, 0x4000
        ctx->r3 = S32(0X4000 << 16);
            goto L_00413AA0;
    }
    // 0x00413A8C: lui         $v1, 0x4000
    ctx->r3 = S32(0X4000 << 16);
    // 0x00413A90: lw          $v0, 0x8($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X8);
    // 0x00413A94: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x00413A98: bne         $v0, $zero, L_00413ACC
    if (ctx->r2 != 0) {
        // 0x00413A9C: addiu       $v0, $zero, 0x11C
        ctx->r2 = ADD32(0, 0X11C);
            goto L_00413ACC;
    }
    // 0x00413A9C: addiu       $v0, $zero, 0x11C
    ctx->r2 = ADD32(0, 0X11C);
L_00413AA0:
    // 0x00413AA0: lbu         $v0, -0x197($a0)
    ctx->r2 = MEM_BU(ctx->r4, -0X197);
    // 0x00413AA4: beq         $v0, $zero, L_00413ADC
    if (ctx->r2 == 0) {
        // 0x00413AA8: nop
    
            goto L_00413ADC;
    }
    // 0x00413AA8: nop

    // 0x00413AAC: lw          $v0, 0x8($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X8);
    // 0x00413AB0: bgez        $v0, L_00413ADC
    if (SIGNED(ctx->r2) >= 0) {
        // 0x00413AB4: nop
    
            goto L_00413ADC;
    }
    // 0x00413AB4: nop

    // 0x00413AB8: jal         0x00266B80
    // 0x00413ABC: nop

    func_00266B80(rdram, ctx);
        goto after_0;
    // 0x00413ABC: nop

    after_0:
    // 0x00413AC0: lui         $v1, 0x40
    ctx->r3 = S32(0X40 << 16);
    // 0x00413AC4: bne         $v0, $v1, L_00413ADC
    if (ctx->r2 != ctx->r3) {
        // 0x00413AC8: addiu       $v0, $zero, 0x11C
        ctx->r2 = ADD32(0, 0X11C);
            goto L_00413ADC;
    }
    // 0x00413AC8: addiu       $v0, $zero, 0x11C
    ctx->r2 = ADD32(0, 0X11C);
L_00413ACC:
    // 0x00413ACC: sw          $v0, 0x4($s2)
    MEM_W(0X4, ctx->r18) = ctx->r2;
    // 0x00413AD0: addiu       $v0, $zero, 0xDE
    ctx->r2 = ADD32(0, 0XDE);
    // 0x00413AD4: j           L_00413AF0
    // 0x00413AD8: sw          $v0, 0x8($s2)
    MEM_W(0X8, ctx->r18) = ctx->r2;
        goto L_00413AF0;
    // 0x00413AD8: sw          $v0, 0x8($s2)
    MEM_W(0X8, ctx->r18) = ctx->r2;
L_00413ADC:
    // 0x00413ADC: lw          $a0, 0x14($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X14);
    // 0x00413AE0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x00413AE4: addiu       $a2, $s2, 0x4
    ctx->r6 = ADD32(ctx->r18, 0X4);
    // 0x00413AE8: jal         0x0027AEA8
    // 0x00413AEC: addiu       $a3, $s2, 0x8
    ctx->r7 = ADD32(ctx->r18, 0X8);
    func_0027AEA8(rdram, ctx);
        goto after_1;
    // 0x00413AEC: addiu       $a3, $s2, 0x8
    ctx->r7 = ADD32(ctx->r18, 0X8);
    after_1:
L_00413AF0:
    // 0x00413AF0: lw          $v0, 0x8($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X8);
    // 0x00413AF4: lui         $v1, 0x1000
    ctx->r3 = S32(0X1000 << 16);
    // 0x00413AF8: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x00413AFC: beq         $v0, $zero, L_00413B4C
    if (ctx->r2 == 0) {
        // 0x00413B00: nop
    
            goto L_00413B4C;
    }
    // 0x00413B00: nop

    // 0x00413B04: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x00413B08: lwc1        $f3, 0x4($s2)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r18, 0X4);
    // 0x00413B0C: cvt.s.w     $f3, $f3
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    ctx->f3.fl = CVT_S_W(ctx->f_odd[(3 - 1) * 2]);
    // 0x00413B10: c.eq.s      $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f3.fl == ctx->f0.fl;
    // 0x00413B14: nop

    // 0x00413B18: bc1t        L_00413B4C
    if (c1cs) {
        // 0x00413B1C: nop
    
            goto L_00413B4C;
    }
    // 0x00413B1C: nop

    // 0x00413B20: lwc1        $f2, 0x8($s2)
    ctx->f2.u32l = MEM_W(ctx->r18, 0X8);
    // 0x00413B24: cvt.s.w     $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    ctx->f2.fl = CVT_S_W(ctx->f2.u32l);
    // 0x00413B28: c.eq.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl == ctx->f0.fl;
    // 0x00413B2C: nop

    // 0x00413B30: bc1t        L_00413B4C
    if (c1cs) {
        // 0x00413B34: nop
    
            goto L_00413B4C;
    }
    // 0x00413B34: nop

    // 0x00413B38: lwc1        $f0, 0x288($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X288);
    // 0x00413B3C: lwc1        $f1, 0x28C($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X28C);
    // 0x00413B40: div.s       $f3, $f0, $f3
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f3.fl = DIV_S(ctx->f0.fl, ctx->f3.fl);
    // 0x00413B44: j           L_00413B7C
    // 0x00413B48: div.s       $f0, $f1, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = DIV_S(ctx->f1.fl, ctx->f2.fl);
        goto L_00413B7C;
    // 0x00413B48: div.s       $f0, $f1, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = DIV_S(ctx->f1.fl, ctx->f2.fl);
L_00413B4C:
    // 0x00413B4C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00413B50: lwc1        $f1, 0xBC4($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0XBC4);
    // 0x00413B54: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00413B58: lwc1        $f0, 0x2030($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X2030);
    // 0x00413B5C: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00413B60: mul.s       $f3, $f0, $f1
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f3.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00413B64: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00413B68: lwc1        $f1, 0xBC8($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0XBC8);
    // 0x00413B6C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00413B70: lwc1        $f0, 0x2034($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X2034);
    // 0x00413B74: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00413B78: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
L_00413B7C:
    // 0x00413B7C: swc1        $f3, 0xC($s2)
    MEM_W(0XC, ctx->r18) = ctx->f_odd[(3 - 1) * 2];
    // 0x00413B80: j           L_00413E14
    // 0x00413B84: swc1        $f0, 0x10($s2)
    MEM_W(0X10, ctx->r18) = ctx->f0.u32l;
        goto L_00413E14;
    // 0x00413B84: swc1        $f0, 0x10($s2)
    MEM_W(0X10, ctx->r18) = ctx->f0.u32l;
    // 0x00413B88: addiu       $v1, $sp, 0x38
    ctx->r3 = ADD32(ctx->r29, 0X38);
    // 0x00413B8C: addu        $v0, $s2, $zero
    ctx->r2 = ADD32(ctx->r18, 0);
    // 0x00413B90: addiu       $a0, $s2, 0x20
    ctx->r4 = ADD32(ctx->r18, 0X20);
L_00413B94:
    // 0x00413B94: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x00413B98: lw          $t1, 0x4($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X4);
    // 0x00413B9C: lw          $t2, 0x8($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X8);
    // 0x00413BA0: lw          $t3, 0xC($v0)
    ctx->r11 = MEM_W(ctx->r2, 0XC);
    // 0x00413BA4: sw          $t0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r8;
    // 0x00413BA8: sw          $t1, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r9;
    // 0x00413BAC: sw          $t2, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r10;
    // 0x00413BB0: sw          $t3, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r11;
    // 0x00413BB4: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
    // 0x00413BB8: bne         $v0, $a0, L_00413B94
    if (ctx->r2 != ctx->r4) {
        // 0x00413BBC: addiu       $v1, $v1, 0x10
        ctx->r3 = ADD32(ctx->r3, 0X10);
            goto L_00413B94;
    }
    // 0x00413BBC: addiu       $v1, $v1, 0x10
    ctx->r3 = ADD32(ctx->r3, 0X10);
    // 0x00413BC0: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x00413BC4: sw          $t0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r8;
    // 0x00413BC8: addiu       $v1, $sp, 0x10
    ctx->r3 = ADD32(ctx->r29, 0X10);
    // 0x00413BCC: addu        $v0, $s3, $zero
    ctx->r2 = ADD32(ctx->r19, 0);
    // 0x00413BD0: addiu       $a0, $s3, 0x20
    ctx->r4 = ADD32(ctx->r19, 0X20);
L_00413BD4:
    // 0x00413BD4: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x00413BD8: lw          $t1, 0x4($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X4);
    // 0x00413BDC: lw          $t2, 0x8($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X8);
    // 0x00413BE0: lw          $t3, 0xC($v0)
    ctx->r11 = MEM_W(ctx->r2, 0XC);
    // 0x00413BE4: sw          $t0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r8;
    // 0x00413BE8: sw          $t1, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r9;
    // 0x00413BEC: sw          $t2, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r10;
    // 0x00413BF0: sw          $t3, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r11;
    // 0x00413BF4: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
    // 0x00413BF8: bne         $v0, $a0, L_00413BD4
    if (ctx->r2 != ctx->r4) {
        // 0x00413BFC: addiu       $v1, $v1, 0x10
        ctx->r3 = ADD32(ctx->r3, 0X10);
            goto L_00413BD4;
    }
    // 0x00413BFC: addiu       $v1, $v1, 0x10
    ctx->r3 = ADD32(ctx->r3, 0X10);
    // 0x00413C00: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x00413C04: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    // 0x00413C08: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x00413C0C: lw          $t1, 0x4($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X4);
    // 0x00413C10: sw          $t0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r8;
    // 0x00413C14: sw          $t1, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r9;
    // 0x00413C18: jal         0x0041363C
    // 0x00413C1C: sh          $zero, 0x14($sp)
    MEM_H(0X14, ctx->r29) = 0;
    func_0041363C(rdram, ctx);
        goto after_2;
    // 0x00413C1C: sh          $zero, 0x14($sp)
    MEM_H(0X14, ctx->r29) = 0;
    after_2:
    // 0x00413C20: addiu       $v1, $sp, 0x60
    ctx->r3 = ADD32(ctx->r29, 0X60);
    // 0x00413C24: addu        $v0, $s2, $zero
    ctx->r2 = ADD32(ctx->r18, 0);
    // 0x00413C28: addiu       $a0, $s2, 0x20
    ctx->r4 = ADD32(ctx->r18, 0X20);
L_00413C2C:
    // 0x00413C2C: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x00413C30: lw          $t1, 0x4($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X4);
    // 0x00413C34: lw          $t2, 0x8($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X8);
    // 0x00413C38: lw          $t3, 0xC($v0)
    ctx->r11 = MEM_W(ctx->r2, 0XC);
    // 0x00413C3C: sw          $t0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r8;
    // 0x00413C40: sw          $t1, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r9;
    // 0x00413C44: sw          $t2, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r10;
    // 0x00413C48: sw          $t3, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r11;
    // 0x00413C4C: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
    // 0x00413C50: bne         $v0, $a0, L_00413C2C
    if (ctx->r2 != ctx->r4) {
        // 0x00413C54: addiu       $v1, $v1, 0x10
        ctx->r3 = ADD32(ctx->r3, 0X10);
            goto L_00413C2C;
    }
    // 0x00413C54: addiu       $v1, $v1, 0x10
    ctx->r3 = ADD32(ctx->r3, 0X10);
    // 0x00413C58: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x00413C5C: sw          $t0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r8;
    // 0x00413C60: addiu       $v1, $sp, 0x10
    ctx->r3 = ADD32(ctx->r29, 0X10);
    // 0x00413C64: addu        $v0, $s3, $zero
    ctx->r2 = ADD32(ctx->r19, 0);
    // 0x00413C68: addiu       $a0, $s3, 0x20
    ctx->r4 = ADD32(ctx->r19, 0X20);
L_00413C6C:
    // 0x00413C6C: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x00413C70: lw          $t1, 0x4($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X4);
    // 0x00413C74: lw          $t2, 0x8($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X8);
    // 0x00413C78: lw          $t3, 0xC($v0)
    ctx->r11 = MEM_W(ctx->r2, 0XC);
    // 0x00413C7C: sw          $t0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r8;
    // 0x00413C80: sw          $t1, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r9;
    // 0x00413C84: sw          $t2, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r10;
    // 0x00413C88: sw          $t3, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r11;
    // 0x00413C8C: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
    // 0x00413C90: bne         $v0, $a0, L_00413C6C
    if (ctx->r2 != ctx->r4) {
        // 0x00413C94: addiu       $v1, $v1, 0x10
        ctx->r3 = ADD32(ctx->r3, 0X10);
            goto L_00413C6C;
    }
    // 0x00413C94: addiu       $v1, $v1, 0x10
    ctx->r3 = ADD32(ctx->r3, 0X10);
    // 0x00413C98: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x00413C9C: addiu       $a1, $sp, 0x60
    ctx->r5 = ADD32(ctx->r29, 0X60);
    // 0x00413CA0: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x00413CA4: lw          $t1, 0x4($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X4);
    // 0x00413CA8: sw          $t0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r8;
    // 0x00413CAC: sw          $t1, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r9;
    // 0x00413CB0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00413CB4: sh          $v0, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r2;
    // 0x00413CB8: jal         0x0041363C
    // 0x00413CBC: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    func_0041363C(rdram, ctx);
        goto after_3;
    // 0x00413CBC: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    after_3:
    // 0x00413CC0: addiu       $v1, $sp, 0x88
    ctx->r3 = ADD32(ctx->r29, 0X88);
    // 0x00413CC4: addu        $v0, $s2, $zero
    ctx->r2 = ADD32(ctx->r18, 0);
    // 0x00413CC8: addiu       $a0, $s2, 0x20
    ctx->r4 = ADD32(ctx->r18, 0X20);
L_00413CCC:
    // 0x00413CCC: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x00413CD0: lw          $t1, 0x4($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X4);
    // 0x00413CD4: lw          $t2, 0x8($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X8);
    // 0x00413CD8: lw          $t3, 0xC($v0)
    ctx->r11 = MEM_W(ctx->r2, 0XC);
    // 0x00413CDC: sw          $t0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r8;
    // 0x00413CE0: sw          $t1, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r9;
    // 0x00413CE4: sw          $t2, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r10;
    // 0x00413CE8: sw          $t3, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r11;
    // 0x00413CEC: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
    // 0x00413CF0: bne         $v0, $a0, L_00413CCC
    if (ctx->r2 != ctx->r4) {
        // 0x00413CF4: addiu       $v1, $v1, 0x10
        ctx->r3 = ADD32(ctx->r3, 0X10);
            goto L_00413CCC;
    }
    // 0x00413CF4: addiu       $v1, $v1, 0x10
    ctx->r3 = ADD32(ctx->r3, 0X10);
    // 0x00413CF8: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x00413CFC: sw          $t0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r8;
    // 0x00413D00: addiu       $v1, $sp, 0x10
    ctx->r3 = ADD32(ctx->r29, 0X10);
    // 0x00413D04: addu        $v0, $s3, $zero
    ctx->r2 = ADD32(ctx->r19, 0);
    // 0x00413D08: addiu       $a0, $s3, 0x20
    ctx->r4 = ADD32(ctx->r19, 0X20);
L_00413D0C:
    // 0x00413D0C: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x00413D10: lw          $t1, 0x4($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X4);
    // 0x00413D14: lw          $t2, 0x8($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X8);
    // 0x00413D18: lw          $t3, 0xC($v0)
    ctx->r11 = MEM_W(ctx->r2, 0XC);
    // 0x00413D1C: sw          $t0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r8;
    // 0x00413D20: sw          $t1, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r9;
    // 0x00413D24: sw          $t2, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r10;
    // 0x00413D28: sw          $t3, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r11;
    // 0x00413D2C: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
    // 0x00413D30: bne         $v0, $a0, L_00413D0C
    if (ctx->r2 != ctx->r4) {
        // 0x00413D34: addiu       $v1, $v1, 0x10
        ctx->r3 = ADD32(ctx->r3, 0X10);
            goto L_00413D0C;
    }
    // 0x00413D34: addiu       $v1, $v1, 0x10
    ctx->r3 = ADD32(ctx->r3, 0X10);
    // 0x00413D38: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x00413D3C: addiu       $a1, $sp, 0x88
    ctx->r5 = ADD32(ctx->r29, 0X88);
    // 0x00413D40: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x00413D44: lw          $t1, 0x4($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X4);
    // 0x00413D48: sw          $t0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r8;
    // 0x00413D4C: sw          $t1, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r9;
    // 0x00413D50: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00413D54: sh          $v0, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r2;
    // 0x00413D58: jal         0x0041363C
    // 0x00413D5C: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    func_0041363C(rdram, ctx);
        goto after_4;
    // 0x00413D5C: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    after_4:
    // 0x00413D60: lw          $v1, 0x64($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X64);
    // 0x00413D64: lw          $v0, 0x8C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X8C);
    // 0x00413D68: lw          $a0, 0x3C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X3C);
    // 0x00413D6C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x00413D70: slt         $v0, $v1, $a0
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x00413D74: bnel        $v0, $zero, L_00413D7C
    if (ctx->r2 != 0) {
        // 0x00413D78: addu        $v1, $a0, $zero
        ctx->r3 = ADD32(ctx->r4, 0);
            goto L_00413D7C;
    }
    goto skip_0;
    // 0x00413D78: addu        $v1, $a0, $zero
    ctx->r3 = ADD32(ctx->r4, 0);
    skip_0:
L_00413D7C:
    // 0x00413D7C: sw          $v1, 0x4($s2)
    MEM_W(0X4, ctx->r18) = ctx->r3;
    // 0x00413D80: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x00413D84: lw          $v1, 0x68($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X68);
    // 0x00413D88: lw          $v0, 0x90($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X90);
    // 0x00413D8C: addu        $a0, $a0, $v1
    ctx->r4 = ADD32(ctx->r4, ctx->r3);
    // 0x00413D90: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x00413D94: srl         $v1, $v0, 31
    ctx->r3 = S32(U32(ctx->r2) >> 31);
    // 0x00413D98: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x00413D9C: sra         $v0, $v0, 1
    ctx->r2 = S32(SIGNED(ctx->r2) >> 1);
    // 0x00413DA0: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x00413DA4: j           L_00413E14
    // 0x00413DA8: sw          $a0, 0x8($s2)
    MEM_W(0X8, ctx->r18) = ctx->r4;
        goto L_00413E14;
    // 0x00413DA8: sw          $a0, 0x8($s2)
    MEM_W(0X8, ctx->r18) = ctx->r4;
    // 0x00413DAC: lw          $v0, 0x14($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X14);
    // 0x00413DB0: lwc1        $f1, 0x288($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X288);
    // 0x00413DB4: lwc1        $f0, 0x24($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X24);
    // 0x00413DB8: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00413DBC: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00413DC0: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00413DC4: lwc1        $f1, 0x2030($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X2030);
    // 0x00413DC8: cvt.s.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.fl = CVT_S_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x00413DCC: div.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = DIV_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00413DD0: trunc.w.s   $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x00413DD4: swc1        $f4, 0x4($s2)
    MEM_W(0X4, ctx->r18) = ctx->f4.u32l;
    // 0x00413DD8: lwc1        $f1, 0x28C($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X28C);
    // 0x00413DDC: lwc1        $f0, 0x28($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X28);
    // 0x00413DE0: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00413DE4: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00413DE8: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00413DEC: lwc1        $f1, 0x2034($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X2034);
    // 0x00413DF0: cvt.s.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.fl = CVT_S_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x00413DF4: div.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = DIV_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00413DF8: trunc.w.s   $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x00413DFC: swc1        $f4, 0x8($s2)
    MEM_W(0X8, ctx->r18) = ctx->f4.u32l;
    // 0x00413E00: j           L_00413E14
    // 0x00413E04: nop

        goto L_00413E14;
    // 0x00413E04: nop

    // 0x00413E08: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00413E0C: sw          $v0, 0x4($s2)
    MEM_W(0X4, ctx->r18) = ctx->r2;
L_00413E10:
    // 0x00413E10: sw          $v0, 0x8($s2)
    MEM_W(0X8, ctx->r18) = ctx->r2;
L_00413E14:
    // 0x00413E14: lh          $v0, 0xC($s3)
    ctx->r2 = MEM_H(ctx->r19, 0XC);
    // 0x00413E18: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x00413E1C: lw          $v1, 0x2030($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X2030);
    // 0x00413E20: mult        $v0, $v1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x00413E24: mflo        $v0
    ctx->r2 = lo;
    // 0x00413E28: lui         $v1, 0xE6C2
    ctx->r3 = S32(0XE6C2 << 16);
    // 0x00413E2C: ori         $v1, $v1, 0xB449
    ctx->r3 = ctx->r3 | 0XB449;
    // 0x00413E30: mult        $v0, $v1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x00413E34: lw          $a0, 0x8($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X8);
    // 0x00413E38: mfhi        $v1
    ctx->r3 = hi;
    // 0x00413E3C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x00413E40: sra         $v1, $v1, 8
    ctx->r3 = S32(SIGNED(ctx->r3) >> 8);
    // 0x00413E44: sra         $v0, $v0, 31
    ctx->r2 = S32(SIGNED(ctx->r2) >> 31);
    // 0x00413E48: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x00413E4C: mtc1        $v1, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r3;
    // 0x00413E50: cvt.s.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.fl = CVT_S_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x00413E54: andi        $v0, $a0, 0x8000
    ctx->r2 = ctx->r4 & 0X8000;
    // 0x00413E58: bne         $v0, $zero, L_00413E8C
    if (ctx->r2 != 0) {
        // 0x00413E5C: andi        $v0, $a0, 0x4000
        ctx->r2 = ctx->r4 & 0X4000;
            goto L_00413E8C;
    }
    // 0x00413E5C: andi        $v0, $a0, 0x4000
    ctx->r2 = ctx->r4 & 0X4000;
    // 0x00413E60: beq         $v0, $zero, L_00413E84
    if (ctx->r2 == 0) {
        // 0x00413E64: nop
    
            goto L_00413E84;
    }
    // 0x00413E64: nop

    // 0x00413E68: lwc1        $f0, 0x18($s2)
    ctx->f0.u32l = MEM_W(ctx->r18, 0X18);
    // 0x00413E6C: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00413E70: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x00413E74: trunc.w.s   $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x00413E78: swc1        $f4, 0x14($s2)
    MEM_W(0X14, ctx->r18) = ctx->f4.u32l;
    // 0x00413E7C: j           L_00413E8C
    // 0x00413E80: nop

        goto L_00413E8C;
    // 0x00413E80: nop

L_00413E84:
    // 0x00413E84: trunc.w.s   $f4, $f1
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 1);
    ctx->f4.u32l = TRUNC_W_S(ctx->f1.fl);
    // 0x00413E88: swc1        $f4, 0x14($s2)
    MEM_W(0X14, ctx->r18) = ctx->f4.u32l;
L_00413E8C:
    // 0x00413E8C: lwc1        $f0, 0xC($s2)
    ctx->f0.u32l = MEM_W(ctx->r18, 0XC);
    // 0x00413E90: lwc1        $f1, 0x4($s2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r18, 0X4);
    // 0x00413E94: cvt.s.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.fl = CVT_S_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x00413E98: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x00413E9C: lwc1        $f0, 0x14($s2)
    ctx->f0.u32l = MEM_W(ctx->r18, 0X14);
    // 0x00413EA0: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00413EA4: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x00413EA8: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x00413EAC: lw          $v0, 0x2034($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2034);
    // 0x00413EB0: trunc.w.s   $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x00413EB4: swc1        $f4, 0x18($s2)
    MEM_W(0X18, ctx->r18) = ctx->f4.u32l;
    // 0x00413EB8: lh          $v1, 0xE($s3)
    ctx->r3 = MEM_H(ctx->r19, 0XE);
    // 0x00413EBC: mult        $v1, $v0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x00413EC0: mflo        $v1
    ctx->r3 = lo;
    // 0x00413EC4: lui         $v0, 0x939A
    ctx->r2 = S32(0X939A << 16);
    // 0x00413EC8: ori         $v0, $v0, 0x85C5
    ctx->r2 = ctx->r2 | 0X85C5;
    // 0x00413ECC: mult        $v1, $v0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x00413ED0: lw          $a0, 0x8($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X8);
    // 0x00413ED4: mfhi        $t4
    ctx->r12 = hi;
    // 0x00413ED8: addu        $v0, $t4, $v1
    ctx->r2 = ADD32(ctx->r12, ctx->r3);
    // 0x00413EDC: sra         $v0, $v0, 7
    ctx->r2 = S32(SIGNED(ctx->r2) >> 7);
    // 0x00413EE0: sra         $v1, $v1, 31
    ctx->r3 = S32(SIGNED(ctx->r3) >> 31);
    // 0x00413EE4: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x00413EE8: mtc1        $v0, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r2;
    // 0x00413EEC: cvt.s.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.fl = CVT_S_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x00413EF0: lui         $v0, 0x2
    ctx->r2 = S32(0X2 << 16);
    // 0x00413EF4: and         $v0, $a0, $v0
    ctx->r2 = ctx->r4 & ctx->r2;
    // 0x00413EF8: bne         $v0, $zero, L_00413F30
    if (ctx->r2 != 0) {
        // 0x00413EFC: lui         $v0, 0x1
        ctx->r2 = S32(0X1 << 16);
            goto L_00413F30;
    }
    // 0x00413EFC: lui         $v0, 0x1
    ctx->r2 = S32(0X1 << 16);
    // 0x00413F00: and         $v0, $a0, $v0
    ctx->r2 = ctx->r4 & ctx->r2;
    // 0x00413F04: beq         $v0, $zero, L_00413F28
    if (ctx->r2 == 0) {
        // 0x00413F08: nop
    
            goto L_00413F28;
    }
    // 0x00413F08: nop

    // 0x00413F0C: lwc1        $f0, 0x20($s2)
    ctx->f0.u32l = MEM_W(ctx->r18, 0X20);
    // 0x00413F10: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00413F14: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x00413F18: trunc.w.s   $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x00413F1C: swc1        $f4, 0x1C($s2)
    MEM_W(0X1C, ctx->r18) = ctx->f4.u32l;
    // 0x00413F20: j           L_00413F30
    // 0x00413F24: nop

        goto L_00413F30;
    // 0x00413F24: nop

L_00413F28:
    // 0x00413F28: trunc.w.s   $f4, $f1
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 1);
    ctx->f4.u32l = TRUNC_W_S(ctx->f1.fl);
    // 0x00413F2C: swc1        $f4, 0x1C($s2)
    MEM_W(0X1C, ctx->r18) = ctx->f4.u32l;
L_00413F30:
    // 0x00413F30: lwc1        $f0, 0x10($s2)
    ctx->f0.u32l = MEM_W(ctx->r18, 0X10);
    // 0x00413F34: lwc1        $f1, 0x8($s2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r18, 0X8);
    // 0x00413F38: cvt.s.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.fl = CVT_S_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x00413F3C: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x00413F40: lwc1        $f0, 0x1C($s2)
    ctx->f0.u32l = MEM_W(ctx->r18, 0X1C);
    // 0x00413F44: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00413F48: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x00413F4C: trunc.w.s   $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x00413F50: swc1        $f4, 0x20($s2)
    MEM_W(0X20, ctx->r18) = ctx->f4.u32l;
    // 0x00413F54: lw          $ra, 0xC0($sp)
    ctx->r31 = MEM_W(ctx->r29, 0XC0);
    // 0x00413F58: lw          $s3, 0xBC($sp)
    ctx->r19 = MEM_W(ctx->r29, 0XBC);
    // 0x00413F5C: lw          $s2, 0xB8($sp)
    ctx->r18 = MEM_W(ctx->r29, 0XB8);
    // 0x00413F60: lw          $s1, 0xB4($sp)
    ctx->r17 = MEM_W(ctx->r29, 0XB4);
    // 0x00413F64: lw          $s0, 0xB0($sp)
    ctx->r16 = MEM_W(ctx->r29, 0XB0);
    // 0x00413F68: ldc1        $f20, 0xC8($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0XC8);
    // 0x00413F6C: jr          $ra
    // 0x00413F70: addiu       $sp, $sp, 0xD0
    ctx->r29 = ADD32(ctx->r29, 0XD0);
    return;
    // 0x00413F70: addiu       $sp, $sp, 0xD0
    ctx->r29 = ADD32(ctx->r29, 0XD0);
;}
RECOMP_FUNC void entry_00413AF0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00413AF0: lw          $v0, 0x8($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X8);
    // 0x00413AF4: lui         $v1, 0x1000
    ctx->r3 = S32(0X1000 << 16);
    // 0x00413AF8: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x00413AFC: beq         $v0, $zero, L_00413B4C
    if (ctx->r2 == 0) {
        // 0x00413B00: nop
    
            goto L_00413B4C;
    }
    // 0x00413B00: nop

    // 0x00413B04: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x00413B08: lwc1        $f3, 0x4($s2)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r18, 0X4);
    // 0x00413B0C: cvt.s.w     $f3, $f3
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    ctx->f3.fl = CVT_S_W(ctx->f_odd[(3 - 1) * 2]);
    // 0x00413B10: c.eq.s      $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f3.fl == ctx->f0.fl;
    // 0x00413B14: nop

    // 0x00413B18: bc1t        L_00413B4C
    if (c1cs) {
        // 0x00413B1C: nop
    
            goto L_00413B4C;
    }
    // 0x00413B1C: nop

    // 0x00413B20: lwc1        $f2, 0x8($s2)
    ctx->f2.u32l = MEM_W(ctx->r18, 0X8);
    // 0x00413B24: cvt.s.w     $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    ctx->f2.fl = CVT_S_W(ctx->f2.u32l);
    // 0x00413B28: c.eq.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl == ctx->f0.fl;
    // 0x00413B2C: nop

    // 0x00413B30: bc1t        L_00413B4C
    if (c1cs) {
        // 0x00413B34: nop
    
            goto L_00413B4C;
    }
    // 0x00413B34: nop

    // 0x00413B38: lwc1        $f0, 0x288($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X288);
    // 0x00413B3C: lwc1        $f1, 0x28C($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X28C);
    // 0x00413B40: div.s       $f3, $f0, $f3
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f3.fl = DIV_S(ctx->f0.fl, ctx->f3.fl);
    // 0x00413B44: j           L_00413B7C
    // 0x00413B48: div.s       $f0, $f1, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = DIV_S(ctx->f1.fl, ctx->f2.fl);
        goto L_00413B7C;
    // 0x00413B48: div.s       $f0, $f1, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = DIV_S(ctx->f1.fl, ctx->f2.fl);
L_00413B4C:
    // 0x00413B4C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00413B50: lwc1        $f1, 0xBC4($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0XBC4);
    // 0x00413B54: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00413B58: lwc1        $f0, 0x2030($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X2030);
    // 0x00413B5C: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00413B60: mul.s       $f3, $f0, $f1
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f3.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00413B64: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00413B68: lwc1        $f1, 0xBC8($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0XBC8);
    // 0x00413B6C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00413B70: lwc1        $f0, 0x2034($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X2034);
    // 0x00413B74: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00413B78: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
L_00413B7C:
    // 0x00413B7C: swc1        $f3, 0xC($s2)
    MEM_W(0XC, ctx->r18) = ctx->f_odd[(3 - 1) * 2];
    // 0x00413B80: j           L_00413E14
    // 0x00413B84: swc1        $f0, 0x10($s2)
    MEM_W(0X10, ctx->r18) = ctx->f0.u32l;
        goto L_00413E14;
    // 0x00413B84: swc1        $f0, 0x10($s2)
    MEM_W(0X10, ctx->r18) = ctx->f0.u32l;
    // 0x00413B88: addiu       $v1, $sp, 0x38
    ctx->r3 = ADD32(ctx->r29, 0X38);
    // 0x00413B8C: addu        $v0, $s2, $zero
    ctx->r2 = ADD32(ctx->r18, 0);
    // 0x00413B90: addiu       $a0, $s2, 0x20
    ctx->r4 = ADD32(ctx->r18, 0X20);
L_00413B94:
    // 0x00413B94: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x00413B98: lw          $t1, 0x4($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X4);
    // 0x00413B9C: lw          $t2, 0x8($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X8);
    // 0x00413BA0: lw          $t3, 0xC($v0)
    ctx->r11 = MEM_W(ctx->r2, 0XC);
    // 0x00413BA4: sw          $t0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r8;
    // 0x00413BA8: sw          $t1, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r9;
    // 0x00413BAC: sw          $t2, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r10;
    // 0x00413BB0: sw          $t3, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r11;
    // 0x00413BB4: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
    // 0x00413BB8: bne         $v0, $a0, L_00413B94
    if (ctx->r2 != ctx->r4) {
        // 0x00413BBC: addiu       $v1, $v1, 0x10
        ctx->r3 = ADD32(ctx->r3, 0X10);
            goto L_00413B94;
    }
    // 0x00413BBC: addiu       $v1, $v1, 0x10
    ctx->r3 = ADD32(ctx->r3, 0X10);
    // 0x00413BC0: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x00413BC4: sw          $t0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r8;
    // 0x00413BC8: addiu       $v1, $sp, 0x10
    ctx->r3 = ADD32(ctx->r29, 0X10);
    // 0x00413BCC: addu        $v0, $s3, $zero
    ctx->r2 = ADD32(ctx->r19, 0);
    // 0x00413BD0: addiu       $a0, $s3, 0x20
    ctx->r4 = ADD32(ctx->r19, 0X20);
L_00413BD4:
    // 0x00413BD4: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x00413BD8: lw          $t1, 0x4($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X4);
    // 0x00413BDC: lw          $t2, 0x8($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X8);
    // 0x00413BE0: lw          $t3, 0xC($v0)
    ctx->r11 = MEM_W(ctx->r2, 0XC);
    // 0x00413BE4: sw          $t0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r8;
    // 0x00413BE8: sw          $t1, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r9;
    // 0x00413BEC: sw          $t2, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r10;
    // 0x00413BF0: sw          $t3, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r11;
    // 0x00413BF4: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
    // 0x00413BF8: bne         $v0, $a0, L_00413BD4
    if (ctx->r2 != ctx->r4) {
        // 0x00413BFC: addiu       $v1, $v1, 0x10
        ctx->r3 = ADD32(ctx->r3, 0X10);
            goto L_00413BD4;
    }
    // 0x00413BFC: addiu       $v1, $v1, 0x10
    ctx->r3 = ADD32(ctx->r3, 0X10);
    // 0x00413C00: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x00413C04: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    // 0x00413C08: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x00413C0C: lw          $t1, 0x4($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X4);
    // 0x00413C10: sw          $t0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r8;
    // 0x00413C14: sw          $t1, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r9;
    // 0x00413C18: jal         0x0041363C
    // 0x00413C1C: sh          $zero, 0x14($sp)
    MEM_H(0X14, ctx->r29) = 0;
    func_0041363C(rdram, ctx);
        goto after_0;
    // 0x00413C1C: sh          $zero, 0x14($sp)
    MEM_H(0X14, ctx->r29) = 0;
    after_0:
    // 0x00413C20: addiu       $v1, $sp, 0x60
    ctx->r3 = ADD32(ctx->r29, 0X60);
    // 0x00413C24: addu        $v0, $s2, $zero
    ctx->r2 = ADD32(ctx->r18, 0);
    // 0x00413C28: addiu       $a0, $s2, 0x20
    ctx->r4 = ADD32(ctx->r18, 0X20);
L_00413C2C:
    // 0x00413C2C: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x00413C30: lw          $t1, 0x4($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X4);
    // 0x00413C34: lw          $t2, 0x8($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X8);
    // 0x00413C38: lw          $t3, 0xC($v0)
    ctx->r11 = MEM_W(ctx->r2, 0XC);
    // 0x00413C3C: sw          $t0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r8;
    // 0x00413C40: sw          $t1, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r9;
    // 0x00413C44: sw          $t2, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r10;
    // 0x00413C48: sw          $t3, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r11;
    // 0x00413C4C: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
    // 0x00413C50: bne         $v0, $a0, L_00413C2C
    if (ctx->r2 != ctx->r4) {
        // 0x00413C54: addiu       $v1, $v1, 0x10
        ctx->r3 = ADD32(ctx->r3, 0X10);
            goto L_00413C2C;
    }
    // 0x00413C54: addiu       $v1, $v1, 0x10
    ctx->r3 = ADD32(ctx->r3, 0X10);
    // 0x00413C58: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x00413C5C: sw          $t0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r8;
    // 0x00413C60: addiu       $v1, $sp, 0x10
    ctx->r3 = ADD32(ctx->r29, 0X10);
    // 0x00413C64: addu        $v0, $s3, $zero
    ctx->r2 = ADD32(ctx->r19, 0);
    // 0x00413C68: addiu       $a0, $s3, 0x20
    ctx->r4 = ADD32(ctx->r19, 0X20);
L_00413C6C:
    // 0x00413C6C: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x00413C70: lw          $t1, 0x4($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X4);
    // 0x00413C74: lw          $t2, 0x8($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X8);
    // 0x00413C78: lw          $t3, 0xC($v0)
    ctx->r11 = MEM_W(ctx->r2, 0XC);
    // 0x00413C7C: sw          $t0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r8;
    // 0x00413C80: sw          $t1, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r9;
    // 0x00413C84: sw          $t2, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r10;
    // 0x00413C88: sw          $t3, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r11;
    // 0x00413C8C: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
    // 0x00413C90: bne         $v0, $a0, L_00413C6C
    if (ctx->r2 != ctx->r4) {
        // 0x00413C94: addiu       $v1, $v1, 0x10
        ctx->r3 = ADD32(ctx->r3, 0X10);
            goto L_00413C6C;
    }
    // 0x00413C94: addiu       $v1, $v1, 0x10
    ctx->r3 = ADD32(ctx->r3, 0X10);
    // 0x00413C98: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x00413C9C: addiu       $a1, $sp, 0x60
    ctx->r5 = ADD32(ctx->r29, 0X60);
    // 0x00413CA0: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x00413CA4: lw          $t1, 0x4($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X4);
    // 0x00413CA8: sw          $t0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r8;
    // 0x00413CAC: sw          $t1, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r9;
    // 0x00413CB0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00413CB4: sh          $v0, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r2;
    // 0x00413CB8: jal         0x0041363C
    // 0x00413CBC: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    func_0041363C(rdram, ctx);
        goto after_1;
    // 0x00413CBC: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    after_1:
    // 0x00413CC0: addiu       $v1, $sp, 0x88
    ctx->r3 = ADD32(ctx->r29, 0X88);
    // 0x00413CC4: addu        $v0, $s2, $zero
    ctx->r2 = ADD32(ctx->r18, 0);
    // 0x00413CC8: addiu       $a0, $s2, 0x20
    ctx->r4 = ADD32(ctx->r18, 0X20);
L_00413CCC:
    // 0x00413CCC: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x00413CD0: lw          $t1, 0x4($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X4);
    // 0x00413CD4: lw          $t2, 0x8($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X8);
    // 0x00413CD8: lw          $t3, 0xC($v0)
    ctx->r11 = MEM_W(ctx->r2, 0XC);
    // 0x00413CDC: sw          $t0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r8;
    // 0x00413CE0: sw          $t1, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r9;
    // 0x00413CE4: sw          $t2, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r10;
    // 0x00413CE8: sw          $t3, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r11;
    // 0x00413CEC: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
    // 0x00413CF0: bne         $v0, $a0, L_00413CCC
    if (ctx->r2 != ctx->r4) {
        // 0x00413CF4: addiu       $v1, $v1, 0x10
        ctx->r3 = ADD32(ctx->r3, 0X10);
            goto L_00413CCC;
    }
    // 0x00413CF4: addiu       $v1, $v1, 0x10
    ctx->r3 = ADD32(ctx->r3, 0X10);
    // 0x00413CF8: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x00413CFC: sw          $t0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r8;
    // 0x00413D00: addiu       $v1, $sp, 0x10
    ctx->r3 = ADD32(ctx->r29, 0X10);
    // 0x00413D04: addu        $v0, $s3, $zero
    ctx->r2 = ADD32(ctx->r19, 0);
    // 0x00413D08: addiu       $a0, $s3, 0x20
    ctx->r4 = ADD32(ctx->r19, 0X20);
L_00413D0C:
    // 0x00413D0C: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x00413D10: lw          $t1, 0x4($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X4);
    // 0x00413D14: lw          $t2, 0x8($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X8);
    // 0x00413D18: lw          $t3, 0xC($v0)
    ctx->r11 = MEM_W(ctx->r2, 0XC);
    // 0x00413D1C: sw          $t0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r8;
    // 0x00413D20: sw          $t1, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r9;
    // 0x00413D24: sw          $t2, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r10;
    // 0x00413D28: sw          $t3, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r11;
    // 0x00413D2C: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
    // 0x00413D30: bne         $v0, $a0, L_00413D0C
    if (ctx->r2 != ctx->r4) {
        // 0x00413D34: addiu       $v1, $v1, 0x10
        ctx->r3 = ADD32(ctx->r3, 0X10);
            goto L_00413D0C;
    }
    // 0x00413D34: addiu       $v1, $v1, 0x10
    ctx->r3 = ADD32(ctx->r3, 0X10);
    // 0x00413D38: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x00413D3C: addiu       $a1, $sp, 0x88
    ctx->r5 = ADD32(ctx->r29, 0X88);
    // 0x00413D40: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x00413D44: lw          $t1, 0x4($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X4);
    // 0x00413D48: sw          $t0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r8;
    // 0x00413D4C: sw          $t1, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r9;
    // 0x00413D50: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00413D54: sh          $v0, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r2;
    // 0x00413D58: jal         0x0041363C
    // 0x00413D5C: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    func_0041363C(rdram, ctx);
        goto after_2;
    // 0x00413D5C: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    after_2:
    // 0x00413D60: lw          $v1, 0x64($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X64);
    // 0x00413D64: lw          $v0, 0x8C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X8C);
    // 0x00413D68: lw          $a0, 0x3C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X3C);
    // 0x00413D6C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x00413D70: slt         $v0, $v1, $a0
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x00413D74: bnel        $v0, $zero, L_00413D7C
    if (ctx->r2 != 0) {
        // 0x00413D78: addu        $v1, $a0, $zero
        ctx->r3 = ADD32(ctx->r4, 0);
            goto L_00413D7C;
    }
    goto skip_0;
    // 0x00413D78: addu        $v1, $a0, $zero
    ctx->r3 = ADD32(ctx->r4, 0);
    skip_0:
L_00413D7C:
    // 0x00413D7C: sw          $v1, 0x4($s2)
    MEM_W(0X4, ctx->r18) = ctx->r3;
    // 0x00413D80: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x00413D84: lw          $v1, 0x68($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X68);
    // 0x00413D88: lw          $v0, 0x90($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X90);
    // 0x00413D8C: addu        $a0, $a0, $v1
    ctx->r4 = ADD32(ctx->r4, ctx->r3);
    // 0x00413D90: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x00413D94: srl         $v1, $v0, 31
    ctx->r3 = S32(U32(ctx->r2) >> 31);
    // 0x00413D98: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x00413D9C: sra         $v0, $v0, 1
    ctx->r2 = S32(SIGNED(ctx->r2) >> 1);
    // 0x00413DA0: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x00413DA4: j           L_00413E14
    // 0x00413DA8: sw          $a0, 0x8($s2)
    MEM_W(0X8, ctx->r18) = ctx->r4;
        goto L_00413E14;
    // 0x00413DA8: sw          $a0, 0x8($s2)
    MEM_W(0X8, ctx->r18) = ctx->r4;
    // 0x00413DAC: lw          $v0, 0x14($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X14);
    // 0x00413DB0: lwc1        $f1, 0x288($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X288);
    // 0x00413DB4: lwc1        $f0, 0x24($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X24);
    // 0x00413DB8: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00413DBC: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00413DC0: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00413DC4: lwc1        $f1, 0x2030($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X2030);
    // 0x00413DC8: cvt.s.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.fl = CVT_S_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x00413DCC: div.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = DIV_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00413DD0: trunc.w.s   $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x00413DD4: swc1        $f4, 0x4($s2)
    MEM_W(0X4, ctx->r18) = ctx->f4.u32l;
    // 0x00413DD8: lwc1        $f1, 0x28C($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X28C);
    // 0x00413DDC: lwc1        $f0, 0x28($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X28);
    // 0x00413DE0: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00413DE4: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00413DE8: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00413DEC: lwc1        $f1, 0x2034($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X2034);
    // 0x00413DF0: cvt.s.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.fl = CVT_S_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x00413DF4: div.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = DIV_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00413DF8: trunc.w.s   $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x00413DFC: swc1        $f4, 0x8($s2)
    MEM_W(0X8, ctx->r18) = ctx->f4.u32l;
    // 0x00413E00: j           L_00413E14
    // 0x00413E04: nop

        goto L_00413E14;
    // 0x00413E04: nop

    // 0x00413E08: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00413E0C: sw          $v0, 0x4($s2)
    MEM_W(0X4, ctx->r18) = ctx->r2;
    // 0x00413E10: sw          $v0, 0x8($s2)
    MEM_W(0X8, ctx->r18) = ctx->r2;
L_00413E14:
    // 0x00413E14: lh          $v0, 0xC($s3)
    ctx->r2 = MEM_H(ctx->r19, 0XC);
    // 0x00413E18: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x00413E1C: lw          $v1, 0x2030($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X2030);
    // 0x00413E20: mult        $v0, $v1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x00413E24: mflo        $v0
    ctx->r2 = lo;
    // 0x00413E28: lui         $v1, 0xE6C2
    ctx->r3 = S32(0XE6C2 << 16);
    // 0x00413E2C: ori         $v1, $v1, 0xB449
    ctx->r3 = ctx->r3 | 0XB449;
    // 0x00413E30: mult        $v0, $v1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x00413E34: lw          $a0, 0x8($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X8);
    // 0x00413E38: mfhi        $v1
    ctx->r3 = hi;
    // 0x00413E3C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x00413E40: sra         $v1, $v1, 8
    ctx->r3 = S32(SIGNED(ctx->r3) >> 8);
    // 0x00413E44: sra         $v0, $v0, 31
    ctx->r2 = S32(SIGNED(ctx->r2) >> 31);
    // 0x00413E48: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x00413E4C: mtc1        $v1, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r3;
    // 0x00413E50: cvt.s.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.fl = CVT_S_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x00413E54: andi        $v0, $a0, 0x8000
    ctx->r2 = ctx->r4 & 0X8000;
    // 0x00413E58: bne         $v0, $zero, L_00413E8C
    if (ctx->r2 != 0) {
        // 0x00413E5C: andi        $v0, $a0, 0x4000
        ctx->r2 = ctx->r4 & 0X4000;
            goto L_00413E8C;
    }
    // 0x00413E5C: andi        $v0, $a0, 0x4000
    ctx->r2 = ctx->r4 & 0X4000;
    // 0x00413E60: beq         $v0, $zero, L_00413E84
    if (ctx->r2 == 0) {
        // 0x00413E64: nop
    
            goto L_00413E84;
    }
    // 0x00413E64: nop

    // 0x00413E68: lwc1        $f0, 0x18($s2)
    ctx->f0.u32l = MEM_W(ctx->r18, 0X18);
    // 0x00413E6C: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00413E70: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x00413E74: trunc.w.s   $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x00413E78: swc1        $f4, 0x14($s2)
    MEM_W(0X14, ctx->r18) = ctx->f4.u32l;
    // 0x00413E7C: j           L_00413E8C
    // 0x00413E80: nop

        goto L_00413E8C;
    // 0x00413E80: nop

L_00413E84:
    // 0x00413E84: trunc.w.s   $f4, $f1
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 1);
    ctx->f4.u32l = TRUNC_W_S(ctx->f1.fl);
    // 0x00413E88: swc1        $f4, 0x14($s2)
    MEM_W(0X14, ctx->r18) = ctx->f4.u32l;
L_00413E8C:
    // 0x00413E8C: lwc1        $f0, 0xC($s2)
    ctx->f0.u32l = MEM_W(ctx->r18, 0XC);
    // 0x00413E90: lwc1        $f1, 0x4($s2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r18, 0X4);
    // 0x00413E94: cvt.s.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.fl = CVT_S_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x00413E98: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x00413E9C: lwc1        $f0, 0x14($s2)
    ctx->f0.u32l = MEM_W(ctx->r18, 0X14);
    // 0x00413EA0: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00413EA4: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x00413EA8: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x00413EAC: lw          $v0, 0x2034($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2034);
    // 0x00413EB0: trunc.w.s   $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x00413EB4: swc1        $f4, 0x18($s2)
    MEM_W(0X18, ctx->r18) = ctx->f4.u32l;
    // 0x00413EB8: lh          $v1, 0xE($s3)
    ctx->r3 = MEM_H(ctx->r19, 0XE);
    // 0x00413EBC: mult        $v1, $v0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x00413EC0: mflo        $v1
    ctx->r3 = lo;
    // 0x00413EC4: lui         $v0, 0x939A
    ctx->r2 = S32(0X939A << 16);
    // 0x00413EC8: ori         $v0, $v0, 0x85C5
    ctx->r2 = ctx->r2 | 0X85C5;
    // 0x00413ECC: mult        $v1, $v0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x00413ED0: lw          $a0, 0x8($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X8);
    // 0x00413ED4: mfhi        $t4
    ctx->r12 = hi;
    // 0x00413ED8: addu        $v0, $t4, $v1
    ctx->r2 = ADD32(ctx->r12, ctx->r3);
    // 0x00413EDC: sra         $v0, $v0, 7
    ctx->r2 = S32(SIGNED(ctx->r2) >> 7);
    // 0x00413EE0: sra         $v1, $v1, 31
    ctx->r3 = S32(SIGNED(ctx->r3) >> 31);
    // 0x00413EE4: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x00413EE8: mtc1        $v0, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r2;
    // 0x00413EEC: cvt.s.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.fl = CVT_S_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x00413EF0: lui         $v0, 0x2
    ctx->r2 = S32(0X2 << 16);
    // 0x00413EF4: and         $v0, $a0, $v0
    ctx->r2 = ctx->r4 & ctx->r2;
    // 0x00413EF8: bne         $v0, $zero, L_00413F30
    if (ctx->r2 != 0) {
        // 0x00413EFC: lui         $v0, 0x1
        ctx->r2 = S32(0X1 << 16);
            goto L_00413F30;
    }
    // 0x00413EFC: lui         $v0, 0x1
    ctx->r2 = S32(0X1 << 16);
    // 0x00413F00: and         $v0, $a0, $v0
    ctx->r2 = ctx->r4 & ctx->r2;
    // 0x00413F04: beq         $v0, $zero, L_00413F28
    if (ctx->r2 == 0) {
        // 0x00413F08: nop
    
            goto L_00413F28;
    }
    // 0x00413F08: nop

    // 0x00413F0C: lwc1        $f0, 0x20($s2)
    ctx->f0.u32l = MEM_W(ctx->r18, 0X20);
    // 0x00413F10: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00413F14: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x00413F18: trunc.w.s   $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x00413F1C: swc1        $f4, 0x1C($s2)
    MEM_W(0X1C, ctx->r18) = ctx->f4.u32l;
    // 0x00413F20: j           L_00413F30
    // 0x00413F24: nop

        goto L_00413F30;
    // 0x00413F24: nop

L_00413F28:
    // 0x00413F28: trunc.w.s   $f4, $f1
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 1);
    ctx->f4.u32l = TRUNC_W_S(ctx->f1.fl);
    // 0x00413F2C: swc1        $f4, 0x1C($s2)
    MEM_W(0X1C, ctx->r18) = ctx->f4.u32l;
L_00413F30:
    // 0x00413F30: lwc1        $f0, 0x10($s2)
    ctx->f0.u32l = MEM_W(ctx->r18, 0X10);
    // 0x00413F34: lwc1        $f1, 0x8($s2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r18, 0X8);
    // 0x00413F38: cvt.s.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.fl = CVT_S_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x00413F3C: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x00413F40: lwc1        $f0, 0x1C($s2)
    ctx->f0.u32l = MEM_W(ctx->r18, 0X1C);
    // 0x00413F44: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00413F48: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x00413F4C: trunc.w.s   $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x00413F50: swc1        $f4, 0x20($s2)
    MEM_W(0X20, ctx->r18) = ctx->f4.u32l;
    // 0x00413F54: lw          $ra, 0xC0($sp)
    ctx->r31 = MEM_W(ctx->r29, 0XC0);
    // 0x00413F58: lw          $s3, 0xBC($sp)
    ctx->r19 = MEM_W(ctx->r29, 0XBC);
    // 0x00413F5C: lw          $s2, 0xB8($sp)
    ctx->r18 = MEM_W(ctx->r29, 0XB8);
    // 0x00413F60: lw          $s1, 0xB4($sp)
    ctx->r17 = MEM_W(ctx->r29, 0XB4);
    // 0x00413F64: lw          $s0, 0xB0($sp)
    ctx->r16 = MEM_W(ctx->r29, 0XB0);
    // 0x00413F68: ldc1        $f20, 0xC8($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0XC8);
    // 0x00413F6C: jr          $ra
    // 0x00413F70: addiu       $sp, $sp, 0xD0
    ctx->r29 = ADD32(ctx->r29, 0XD0);
    return;
    // 0x00413F70: addiu       $sp, $sp, 0xD0
    ctx->r29 = ADD32(ctx->r29, 0XD0);
;}
RECOMP_FUNC void entry_00413B7C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00413B7C: swc1        $f3, 0xC($s2)
    MEM_W(0XC, ctx->r18) = ctx->f_odd[(3 - 1) * 2];
    // 0x00413B80: j           L_00413E14
    // 0x00413B84: swc1        $f0, 0x10($s2)
    MEM_W(0X10, ctx->r18) = ctx->f0.u32l;
        goto L_00413E14;
    // 0x00413B84: swc1        $f0, 0x10($s2)
    MEM_W(0X10, ctx->r18) = ctx->f0.u32l;
    // 0x00413B88: addiu       $v1, $sp, 0x38
    ctx->r3 = ADD32(ctx->r29, 0X38);
    // 0x00413B8C: addu        $v0, $s2, $zero
    ctx->r2 = ADD32(ctx->r18, 0);
    // 0x00413B90: addiu       $a0, $s2, 0x20
    ctx->r4 = ADD32(ctx->r18, 0X20);
L_00413B94:
    // 0x00413B94: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x00413B98: lw          $t1, 0x4($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X4);
    // 0x00413B9C: lw          $t2, 0x8($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X8);
    // 0x00413BA0: lw          $t3, 0xC($v0)
    ctx->r11 = MEM_W(ctx->r2, 0XC);
    // 0x00413BA4: sw          $t0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r8;
    // 0x00413BA8: sw          $t1, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r9;
    // 0x00413BAC: sw          $t2, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r10;
    // 0x00413BB0: sw          $t3, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r11;
    // 0x00413BB4: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
    // 0x00413BB8: bne         $v0, $a0, L_00413B94
    if (ctx->r2 != ctx->r4) {
        // 0x00413BBC: addiu       $v1, $v1, 0x10
        ctx->r3 = ADD32(ctx->r3, 0X10);
            goto L_00413B94;
    }
    // 0x00413BBC: addiu       $v1, $v1, 0x10
    ctx->r3 = ADD32(ctx->r3, 0X10);
    // 0x00413BC0: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x00413BC4: sw          $t0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r8;
    // 0x00413BC8: addiu       $v1, $sp, 0x10
    ctx->r3 = ADD32(ctx->r29, 0X10);
    // 0x00413BCC: addu        $v0, $s3, $zero
    ctx->r2 = ADD32(ctx->r19, 0);
    // 0x00413BD0: addiu       $a0, $s3, 0x20
    ctx->r4 = ADD32(ctx->r19, 0X20);
L_00413BD4:
    // 0x00413BD4: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x00413BD8: lw          $t1, 0x4($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X4);
    // 0x00413BDC: lw          $t2, 0x8($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X8);
    // 0x00413BE0: lw          $t3, 0xC($v0)
    ctx->r11 = MEM_W(ctx->r2, 0XC);
    // 0x00413BE4: sw          $t0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r8;
    // 0x00413BE8: sw          $t1, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r9;
    // 0x00413BEC: sw          $t2, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r10;
    // 0x00413BF0: sw          $t3, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r11;
    // 0x00413BF4: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
    // 0x00413BF8: bne         $v0, $a0, L_00413BD4
    if (ctx->r2 != ctx->r4) {
        // 0x00413BFC: addiu       $v1, $v1, 0x10
        ctx->r3 = ADD32(ctx->r3, 0X10);
            goto L_00413BD4;
    }
    // 0x00413BFC: addiu       $v1, $v1, 0x10
    ctx->r3 = ADD32(ctx->r3, 0X10);
    // 0x00413C00: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x00413C04: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    // 0x00413C08: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x00413C0C: lw          $t1, 0x4($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X4);
    // 0x00413C10: sw          $t0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r8;
    // 0x00413C14: sw          $t1, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r9;
    // 0x00413C18: jal         0x0041363C
    // 0x00413C1C: sh          $zero, 0x14($sp)
    MEM_H(0X14, ctx->r29) = 0;
    func_0041363C(rdram, ctx);
        goto after_0;
    // 0x00413C1C: sh          $zero, 0x14($sp)
    MEM_H(0X14, ctx->r29) = 0;
    after_0:
    // 0x00413C20: addiu       $v1, $sp, 0x60
    ctx->r3 = ADD32(ctx->r29, 0X60);
    // 0x00413C24: addu        $v0, $s2, $zero
    ctx->r2 = ADD32(ctx->r18, 0);
    // 0x00413C28: addiu       $a0, $s2, 0x20
    ctx->r4 = ADD32(ctx->r18, 0X20);
L_00413C2C:
    // 0x00413C2C: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x00413C30: lw          $t1, 0x4($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X4);
    // 0x00413C34: lw          $t2, 0x8($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X8);
    // 0x00413C38: lw          $t3, 0xC($v0)
    ctx->r11 = MEM_W(ctx->r2, 0XC);
    // 0x00413C3C: sw          $t0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r8;
    // 0x00413C40: sw          $t1, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r9;
    // 0x00413C44: sw          $t2, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r10;
    // 0x00413C48: sw          $t3, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r11;
    // 0x00413C4C: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
    // 0x00413C50: bne         $v0, $a0, L_00413C2C
    if (ctx->r2 != ctx->r4) {
        // 0x00413C54: addiu       $v1, $v1, 0x10
        ctx->r3 = ADD32(ctx->r3, 0X10);
            goto L_00413C2C;
    }
    // 0x00413C54: addiu       $v1, $v1, 0x10
    ctx->r3 = ADD32(ctx->r3, 0X10);
    // 0x00413C58: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x00413C5C: sw          $t0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r8;
    // 0x00413C60: addiu       $v1, $sp, 0x10
    ctx->r3 = ADD32(ctx->r29, 0X10);
    // 0x00413C64: addu        $v0, $s3, $zero
    ctx->r2 = ADD32(ctx->r19, 0);
    // 0x00413C68: addiu       $a0, $s3, 0x20
    ctx->r4 = ADD32(ctx->r19, 0X20);
L_00413C6C:
    // 0x00413C6C: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x00413C70: lw          $t1, 0x4($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X4);
    // 0x00413C74: lw          $t2, 0x8($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X8);
    // 0x00413C78: lw          $t3, 0xC($v0)
    ctx->r11 = MEM_W(ctx->r2, 0XC);
    // 0x00413C7C: sw          $t0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r8;
    // 0x00413C80: sw          $t1, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r9;
    // 0x00413C84: sw          $t2, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r10;
    // 0x00413C88: sw          $t3, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r11;
    // 0x00413C8C: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
    // 0x00413C90: bne         $v0, $a0, L_00413C6C
    if (ctx->r2 != ctx->r4) {
        // 0x00413C94: addiu       $v1, $v1, 0x10
        ctx->r3 = ADD32(ctx->r3, 0X10);
            goto L_00413C6C;
    }
    // 0x00413C94: addiu       $v1, $v1, 0x10
    ctx->r3 = ADD32(ctx->r3, 0X10);
    // 0x00413C98: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x00413C9C: addiu       $a1, $sp, 0x60
    ctx->r5 = ADD32(ctx->r29, 0X60);
    // 0x00413CA0: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x00413CA4: lw          $t1, 0x4($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X4);
    // 0x00413CA8: sw          $t0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r8;
    // 0x00413CAC: sw          $t1, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r9;
    // 0x00413CB0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00413CB4: sh          $v0, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r2;
    // 0x00413CB8: jal         0x0041363C
    // 0x00413CBC: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    func_0041363C(rdram, ctx);
        goto after_1;
    // 0x00413CBC: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    after_1:
    // 0x00413CC0: addiu       $v1, $sp, 0x88
    ctx->r3 = ADD32(ctx->r29, 0X88);
    // 0x00413CC4: addu        $v0, $s2, $zero
    ctx->r2 = ADD32(ctx->r18, 0);
    // 0x00413CC8: addiu       $a0, $s2, 0x20
    ctx->r4 = ADD32(ctx->r18, 0X20);
L_00413CCC:
    // 0x00413CCC: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x00413CD0: lw          $t1, 0x4($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X4);
    // 0x00413CD4: lw          $t2, 0x8($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X8);
    // 0x00413CD8: lw          $t3, 0xC($v0)
    ctx->r11 = MEM_W(ctx->r2, 0XC);
    // 0x00413CDC: sw          $t0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r8;
    // 0x00413CE0: sw          $t1, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r9;
    // 0x00413CE4: sw          $t2, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r10;
    // 0x00413CE8: sw          $t3, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r11;
    // 0x00413CEC: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
    // 0x00413CF0: bne         $v0, $a0, L_00413CCC
    if (ctx->r2 != ctx->r4) {
        // 0x00413CF4: addiu       $v1, $v1, 0x10
        ctx->r3 = ADD32(ctx->r3, 0X10);
            goto L_00413CCC;
    }
    // 0x00413CF4: addiu       $v1, $v1, 0x10
    ctx->r3 = ADD32(ctx->r3, 0X10);
    // 0x00413CF8: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x00413CFC: sw          $t0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r8;
    // 0x00413D00: addiu       $v1, $sp, 0x10
    ctx->r3 = ADD32(ctx->r29, 0X10);
    // 0x00413D04: addu        $v0, $s3, $zero
    ctx->r2 = ADD32(ctx->r19, 0);
    // 0x00413D08: addiu       $a0, $s3, 0x20
    ctx->r4 = ADD32(ctx->r19, 0X20);
L_00413D0C:
    // 0x00413D0C: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x00413D10: lw          $t1, 0x4($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X4);
    // 0x00413D14: lw          $t2, 0x8($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X8);
    // 0x00413D18: lw          $t3, 0xC($v0)
    ctx->r11 = MEM_W(ctx->r2, 0XC);
    // 0x00413D1C: sw          $t0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r8;
    // 0x00413D20: sw          $t1, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r9;
    // 0x00413D24: sw          $t2, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r10;
    // 0x00413D28: sw          $t3, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r11;
    // 0x00413D2C: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
    // 0x00413D30: bne         $v0, $a0, L_00413D0C
    if (ctx->r2 != ctx->r4) {
        // 0x00413D34: addiu       $v1, $v1, 0x10
        ctx->r3 = ADD32(ctx->r3, 0X10);
            goto L_00413D0C;
    }
    // 0x00413D34: addiu       $v1, $v1, 0x10
    ctx->r3 = ADD32(ctx->r3, 0X10);
    // 0x00413D38: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x00413D3C: addiu       $a1, $sp, 0x88
    ctx->r5 = ADD32(ctx->r29, 0X88);
    // 0x00413D40: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x00413D44: lw          $t1, 0x4($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X4);
    // 0x00413D48: sw          $t0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r8;
    // 0x00413D4C: sw          $t1, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r9;
    // 0x00413D50: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00413D54: sh          $v0, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r2;
    // 0x00413D58: jal         0x0041363C
    // 0x00413D5C: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    func_0041363C(rdram, ctx);
        goto after_2;
    // 0x00413D5C: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    after_2:
    // 0x00413D60: lw          $v1, 0x64($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X64);
    // 0x00413D64: lw          $v0, 0x8C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X8C);
    // 0x00413D68: lw          $a0, 0x3C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X3C);
    // 0x00413D6C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x00413D70: slt         $v0, $v1, $a0
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x00413D74: bnel        $v0, $zero, L_00413D7C
    if (ctx->r2 != 0) {
        // 0x00413D78: addu        $v1, $a0, $zero
        ctx->r3 = ADD32(ctx->r4, 0);
            goto L_00413D7C;
    }
    goto skip_0;
    // 0x00413D78: addu        $v1, $a0, $zero
    ctx->r3 = ADD32(ctx->r4, 0);
    skip_0:
L_00413D7C:
    // 0x00413D7C: sw          $v1, 0x4($s2)
    MEM_W(0X4, ctx->r18) = ctx->r3;
    // 0x00413D80: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x00413D84: lw          $v1, 0x68($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X68);
    // 0x00413D88: lw          $v0, 0x90($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X90);
    // 0x00413D8C: addu        $a0, $a0, $v1
    ctx->r4 = ADD32(ctx->r4, ctx->r3);
    // 0x00413D90: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x00413D94: srl         $v1, $v0, 31
    ctx->r3 = S32(U32(ctx->r2) >> 31);
    // 0x00413D98: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x00413D9C: sra         $v0, $v0, 1
    ctx->r2 = S32(SIGNED(ctx->r2) >> 1);
    // 0x00413DA0: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x00413DA4: j           L_00413E14
    // 0x00413DA8: sw          $a0, 0x8($s2)
    MEM_W(0X8, ctx->r18) = ctx->r4;
        goto L_00413E14;
    // 0x00413DA8: sw          $a0, 0x8($s2)
    MEM_W(0X8, ctx->r18) = ctx->r4;
    // 0x00413DAC: lw          $v0, 0x14($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X14);
    // 0x00413DB0: lwc1        $f1, 0x288($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X288);
    // 0x00413DB4: lwc1        $f0, 0x24($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X24);
    // 0x00413DB8: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00413DBC: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00413DC0: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00413DC4: lwc1        $f1, 0x2030($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X2030);
    // 0x00413DC8: cvt.s.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.fl = CVT_S_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x00413DCC: div.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = DIV_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00413DD0: trunc.w.s   $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x00413DD4: swc1        $f4, 0x4($s2)
    MEM_W(0X4, ctx->r18) = ctx->f4.u32l;
    // 0x00413DD8: lwc1        $f1, 0x28C($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X28C);
    // 0x00413DDC: lwc1        $f0, 0x28($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X28);
    // 0x00413DE0: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00413DE4: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00413DE8: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00413DEC: lwc1        $f1, 0x2034($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X2034);
    // 0x00413DF0: cvt.s.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.fl = CVT_S_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x00413DF4: div.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = DIV_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00413DF8: trunc.w.s   $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x00413DFC: swc1        $f4, 0x8($s2)
    MEM_W(0X8, ctx->r18) = ctx->f4.u32l;
    // 0x00413E00: j           L_00413E14
    // 0x00413E04: nop

        goto L_00413E14;
    // 0x00413E04: nop

    // 0x00413E08: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00413E0C: sw          $v0, 0x4($s2)
    MEM_W(0X4, ctx->r18) = ctx->r2;
    // 0x00413E10: sw          $v0, 0x8($s2)
    MEM_W(0X8, ctx->r18) = ctx->r2;
L_00413E14:
    // 0x00413E14: lh          $v0, 0xC($s3)
    ctx->r2 = MEM_H(ctx->r19, 0XC);
    // 0x00413E18: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x00413E1C: lw          $v1, 0x2030($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X2030);
    // 0x00413E20: mult        $v0, $v1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x00413E24: mflo        $v0
    ctx->r2 = lo;
    // 0x00413E28: lui         $v1, 0xE6C2
    ctx->r3 = S32(0XE6C2 << 16);
    // 0x00413E2C: ori         $v1, $v1, 0xB449
    ctx->r3 = ctx->r3 | 0XB449;
    // 0x00413E30: mult        $v0, $v1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x00413E34: lw          $a0, 0x8($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X8);
    // 0x00413E38: mfhi        $v1
    ctx->r3 = hi;
    // 0x00413E3C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x00413E40: sra         $v1, $v1, 8
    ctx->r3 = S32(SIGNED(ctx->r3) >> 8);
    // 0x00413E44: sra         $v0, $v0, 31
    ctx->r2 = S32(SIGNED(ctx->r2) >> 31);
    // 0x00413E48: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x00413E4C: mtc1        $v1, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r3;
    // 0x00413E50: cvt.s.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.fl = CVT_S_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x00413E54: andi        $v0, $a0, 0x8000
    ctx->r2 = ctx->r4 & 0X8000;
    // 0x00413E58: bne         $v0, $zero, L_00413E8C
    if (ctx->r2 != 0) {
        // 0x00413E5C: andi        $v0, $a0, 0x4000
        ctx->r2 = ctx->r4 & 0X4000;
            goto L_00413E8C;
    }
    // 0x00413E5C: andi        $v0, $a0, 0x4000
    ctx->r2 = ctx->r4 & 0X4000;
    // 0x00413E60: beq         $v0, $zero, L_00413E84
    if (ctx->r2 == 0) {
        // 0x00413E64: nop
    
            goto L_00413E84;
    }
    // 0x00413E64: nop

    // 0x00413E68: lwc1        $f0, 0x18($s2)
    ctx->f0.u32l = MEM_W(ctx->r18, 0X18);
    // 0x00413E6C: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00413E70: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x00413E74: trunc.w.s   $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x00413E78: swc1        $f4, 0x14($s2)
    MEM_W(0X14, ctx->r18) = ctx->f4.u32l;
    // 0x00413E7C: j           L_00413E8C
    // 0x00413E80: nop

        goto L_00413E8C;
    // 0x00413E80: nop

L_00413E84:
    // 0x00413E84: trunc.w.s   $f4, $f1
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 1);
    ctx->f4.u32l = TRUNC_W_S(ctx->f1.fl);
    // 0x00413E88: swc1        $f4, 0x14($s2)
    MEM_W(0X14, ctx->r18) = ctx->f4.u32l;
L_00413E8C:
    // 0x00413E8C: lwc1        $f0, 0xC($s2)
    ctx->f0.u32l = MEM_W(ctx->r18, 0XC);
    // 0x00413E90: lwc1        $f1, 0x4($s2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r18, 0X4);
    // 0x00413E94: cvt.s.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.fl = CVT_S_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x00413E98: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x00413E9C: lwc1        $f0, 0x14($s2)
    ctx->f0.u32l = MEM_W(ctx->r18, 0X14);
    // 0x00413EA0: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00413EA4: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x00413EA8: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x00413EAC: lw          $v0, 0x2034($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2034);
    // 0x00413EB0: trunc.w.s   $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x00413EB4: swc1        $f4, 0x18($s2)
    MEM_W(0X18, ctx->r18) = ctx->f4.u32l;
    // 0x00413EB8: lh          $v1, 0xE($s3)
    ctx->r3 = MEM_H(ctx->r19, 0XE);
    // 0x00413EBC: mult        $v1, $v0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x00413EC0: mflo        $v1
    ctx->r3 = lo;
    // 0x00413EC4: lui         $v0, 0x939A
    ctx->r2 = S32(0X939A << 16);
    // 0x00413EC8: ori         $v0, $v0, 0x85C5
    ctx->r2 = ctx->r2 | 0X85C5;
    // 0x00413ECC: mult        $v1, $v0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x00413ED0: lw          $a0, 0x8($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X8);
    // 0x00413ED4: mfhi        $t4
    ctx->r12 = hi;
    // 0x00413ED8: addu        $v0, $t4, $v1
    ctx->r2 = ADD32(ctx->r12, ctx->r3);
    // 0x00413EDC: sra         $v0, $v0, 7
    ctx->r2 = S32(SIGNED(ctx->r2) >> 7);
    // 0x00413EE0: sra         $v1, $v1, 31
    ctx->r3 = S32(SIGNED(ctx->r3) >> 31);
    // 0x00413EE4: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x00413EE8: mtc1        $v0, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r2;
    // 0x00413EEC: cvt.s.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.fl = CVT_S_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x00413EF0: lui         $v0, 0x2
    ctx->r2 = S32(0X2 << 16);
    // 0x00413EF4: and         $v0, $a0, $v0
    ctx->r2 = ctx->r4 & ctx->r2;
    // 0x00413EF8: bne         $v0, $zero, L_00413F30
    if (ctx->r2 != 0) {
        // 0x00413EFC: lui         $v0, 0x1
        ctx->r2 = S32(0X1 << 16);
            goto L_00413F30;
    }
    // 0x00413EFC: lui         $v0, 0x1
    ctx->r2 = S32(0X1 << 16);
    // 0x00413F00: and         $v0, $a0, $v0
    ctx->r2 = ctx->r4 & ctx->r2;
    // 0x00413F04: beq         $v0, $zero, L_00413F28
    if (ctx->r2 == 0) {
        // 0x00413F08: nop
    
            goto L_00413F28;
    }
    // 0x00413F08: nop

    // 0x00413F0C: lwc1        $f0, 0x20($s2)
    ctx->f0.u32l = MEM_W(ctx->r18, 0X20);
    // 0x00413F10: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00413F14: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x00413F18: trunc.w.s   $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x00413F1C: swc1        $f4, 0x1C($s2)
    MEM_W(0X1C, ctx->r18) = ctx->f4.u32l;
    // 0x00413F20: j           L_00413F30
    // 0x00413F24: nop

        goto L_00413F30;
    // 0x00413F24: nop

L_00413F28:
    // 0x00413F28: trunc.w.s   $f4, $f1
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 1);
    ctx->f4.u32l = TRUNC_W_S(ctx->f1.fl);
    // 0x00413F2C: swc1        $f4, 0x1C($s2)
    MEM_W(0X1C, ctx->r18) = ctx->f4.u32l;
L_00413F30:
    // 0x00413F30: lwc1        $f0, 0x10($s2)
    ctx->f0.u32l = MEM_W(ctx->r18, 0X10);
    // 0x00413F34: lwc1        $f1, 0x8($s2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r18, 0X8);
    // 0x00413F38: cvt.s.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.fl = CVT_S_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x00413F3C: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x00413F40: lwc1        $f0, 0x1C($s2)
    ctx->f0.u32l = MEM_W(ctx->r18, 0X1C);
    // 0x00413F44: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00413F48: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x00413F4C: trunc.w.s   $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x00413F50: swc1        $f4, 0x20($s2)
    MEM_W(0X20, ctx->r18) = ctx->f4.u32l;
    // 0x00413F54: lw          $ra, 0xC0($sp)
    ctx->r31 = MEM_W(ctx->r29, 0XC0);
    // 0x00413F58: lw          $s3, 0xBC($sp)
    ctx->r19 = MEM_W(ctx->r29, 0XBC);
    // 0x00413F5C: lw          $s2, 0xB8($sp)
    ctx->r18 = MEM_W(ctx->r29, 0XB8);
    // 0x00413F60: lw          $s1, 0xB4($sp)
    ctx->r17 = MEM_W(ctx->r29, 0XB4);
    // 0x00413F64: lw          $s0, 0xB0($sp)
    ctx->r16 = MEM_W(ctx->r29, 0XB0);
    // 0x00413F68: ldc1        $f20, 0xC8($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0XC8);
    // 0x00413F6C: jr          $ra
    // 0x00413F70: addiu       $sp, $sp, 0xD0
    ctx->r29 = ADD32(ctx->r29, 0XD0);
    return;
    // 0x00413F70: addiu       $sp, $sp, 0xD0
    ctx->r29 = ADD32(ctx->r29, 0XD0);
;}
RECOMP_FUNC void entry_00413E10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00413E10: sw          $v0, 0x8($s2)
    MEM_W(0X8, ctx->r18) = ctx->r2;
    // 0x00413E14: lh          $v0, 0xC($s3)
    ctx->r2 = MEM_H(ctx->r19, 0XC);
    // 0x00413E18: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x00413E1C: lw          $v1, 0x2030($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X2030);
    // 0x00413E20: mult        $v0, $v1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x00413E24: mflo        $v0
    ctx->r2 = lo;
    // 0x00413E28: lui         $v1, 0xE6C2
    ctx->r3 = S32(0XE6C2 << 16);
    // 0x00413E2C: ori         $v1, $v1, 0xB449
    ctx->r3 = ctx->r3 | 0XB449;
    // 0x00413E30: mult        $v0, $v1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x00413E34: lw          $a0, 0x8($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X8);
    // 0x00413E38: mfhi        $v1
    ctx->r3 = hi;
    // 0x00413E3C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x00413E40: sra         $v1, $v1, 8
    ctx->r3 = S32(SIGNED(ctx->r3) >> 8);
    // 0x00413E44: sra         $v0, $v0, 31
    ctx->r2 = S32(SIGNED(ctx->r2) >> 31);
    // 0x00413E48: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x00413E4C: mtc1        $v1, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r3;
    // 0x00413E50: cvt.s.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.fl = CVT_S_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x00413E54: andi        $v0, $a0, 0x8000
    ctx->r2 = ctx->r4 & 0X8000;
    // 0x00413E58: bne         $v0, $zero, L_00413E8C
    if (ctx->r2 != 0) {
        // 0x00413E5C: andi        $v0, $a0, 0x4000
        ctx->r2 = ctx->r4 & 0X4000;
            goto L_00413E8C;
    }
    // 0x00413E5C: andi        $v0, $a0, 0x4000
    ctx->r2 = ctx->r4 & 0X4000;
    // 0x00413E60: beq         $v0, $zero, L_00413E84
    if (ctx->r2 == 0) {
        // 0x00413E64: nop
    
            goto L_00413E84;
    }
    // 0x00413E64: nop

    // 0x00413E68: lwc1        $f0, 0x18($s2)
    ctx->f0.u32l = MEM_W(ctx->r18, 0X18);
    // 0x00413E6C: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00413E70: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x00413E74: trunc.w.s   $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x00413E78: swc1        $f4, 0x14($s2)
    MEM_W(0X14, ctx->r18) = ctx->f4.u32l;
    // 0x00413E7C: j           L_00413E8C
    // 0x00413E80: nop

        goto L_00413E8C;
    // 0x00413E80: nop

L_00413E84:
    // 0x00413E84: trunc.w.s   $f4, $f1
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 1);
    ctx->f4.u32l = TRUNC_W_S(ctx->f1.fl);
    // 0x00413E88: swc1        $f4, 0x14($s2)
    MEM_W(0X14, ctx->r18) = ctx->f4.u32l;
L_00413E8C:
    // 0x00413E8C: lwc1        $f0, 0xC($s2)
    ctx->f0.u32l = MEM_W(ctx->r18, 0XC);
    // 0x00413E90: lwc1        $f1, 0x4($s2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r18, 0X4);
    // 0x00413E94: cvt.s.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.fl = CVT_S_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x00413E98: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x00413E9C: lwc1        $f0, 0x14($s2)
    ctx->f0.u32l = MEM_W(ctx->r18, 0X14);
    // 0x00413EA0: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00413EA4: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x00413EA8: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x00413EAC: lw          $v0, 0x2034($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2034);
    // 0x00413EB0: trunc.w.s   $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x00413EB4: swc1        $f4, 0x18($s2)
    MEM_W(0X18, ctx->r18) = ctx->f4.u32l;
    // 0x00413EB8: lh          $v1, 0xE($s3)
    ctx->r3 = MEM_H(ctx->r19, 0XE);
    // 0x00413EBC: mult        $v1, $v0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x00413EC0: mflo        $v1
    ctx->r3 = lo;
    // 0x00413EC4: lui         $v0, 0x939A
    ctx->r2 = S32(0X939A << 16);
    // 0x00413EC8: ori         $v0, $v0, 0x85C5
    ctx->r2 = ctx->r2 | 0X85C5;
    // 0x00413ECC: mult        $v1, $v0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x00413ED0: lw          $a0, 0x8($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X8);
    // 0x00413ED4: mfhi        $t4
    ctx->r12 = hi;
    // 0x00413ED8: addu        $v0, $t4, $v1
    ctx->r2 = ADD32(ctx->r12, ctx->r3);
    // 0x00413EDC: sra         $v0, $v0, 7
    ctx->r2 = S32(SIGNED(ctx->r2) >> 7);
    // 0x00413EE0: sra         $v1, $v1, 31
    ctx->r3 = S32(SIGNED(ctx->r3) >> 31);
    // 0x00413EE4: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x00413EE8: mtc1        $v0, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r2;
    // 0x00413EEC: cvt.s.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.fl = CVT_S_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x00413EF0: lui         $v0, 0x2
    ctx->r2 = S32(0X2 << 16);
    // 0x00413EF4: and         $v0, $a0, $v0
    ctx->r2 = ctx->r4 & ctx->r2;
    // 0x00413EF8: bne         $v0, $zero, L_00413F30
    if (ctx->r2 != 0) {
        // 0x00413EFC: lui         $v0, 0x1
        ctx->r2 = S32(0X1 << 16);
            goto L_00413F30;
    }
    // 0x00413EFC: lui         $v0, 0x1
    ctx->r2 = S32(0X1 << 16);
    // 0x00413F00: and         $v0, $a0, $v0
    ctx->r2 = ctx->r4 & ctx->r2;
    // 0x00413F04: beq         $v0, $zero, L_00413F28
    if (ctx->r2 == 0) {
        // 0x00413F08: nop
    
            goto L_00413F28;
    }
    // 0x00413F08: nop

    // 0x00413F0C: lwc1        $f0, 0x20($s2)
    ctx->f0.u32l = MEM_W(ctx->r18, 0X20);
    // 0x00413F10: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00413F14: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x00413F18: trunc.w.s   $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x00413F1C: swc1        $f4, 0x1C($s2)
    MEM_W(0X1C, ctx->r18) = ctx->f4.u32l;
    // 0x00413F20: j           L_00413F30
    // 0x00413F24: nop

        goto L_00413F30;
    // 0x00413F24: nop

L_00413F28:
    // 0x00413F28: trunc.w.s   $f4, $f1
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 1);
    ctx->f4.u32l = TRUNC_W_S(ctx->f1.fl);
    // 0x00413F2C: swc1        $f4, 0x1C($s2)
    MEM_W(0X1C, ctx->r18) = ctx->f4.u32l;
L_00413F30:
    // 0x00413F30: lwc1        $f0, 0x10($s2)
    ctx->f0.u32l = MEM_W(ctx->r18, 0X10);
    // 0x00413F34: lwc1        $f1, 0x8($s2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r18, 0X8);
    // 0x00413F38: cvt.s.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.fl = CVT_S_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x00413F3C: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x00413F40: lwc1        $f0, 0x1C($s2)
    ctx->f0.u32l = MEM_W(ctx->r18, 0X1C);
    // 0x00413F44: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00413F48: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x00413F4C: trunc.w.s   $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x00413F50: swc1        $f4, 0x20($s2)
    MEM_W(0X20, ctx->r18) = ctx->f4.u32l;
    // 0x00413F54: lw          $ra, 0xC0($sp)
    ctx->r31 = MEM_W(ctx->r29, 0XC0);
    // 0x00413F58: lw          $s3, 0xBC($sp)
    ctx->r19 = MEM_W(ctx->r29, 0XBC);
    // 0x00413F5C: lw          $s2, 0xB8($sp)
    ctx->r18 = MEM_W(ctx->r29, 0XB8);
    // 0x00413F60: lw          $s1, 0xB4($sp)
    ctx->r17 = MEM_W(ctx->r29, 0XB4);
    // 0x00413F64: lw          $s0, 0xB0($sp)
    ctx->r16 = MEM_W(ctx->r29, 0XB0);
    // 0x00413F68: ldc1        $f20, 0xC8($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0XC8);
    // 0x00413F6C: jr          $ra
    // 0x00413F70: addiu       $sp, $sp, 0xD0
    ctx->r29 = ADD32(ctx->r29, 0XD0);
    return;
    // 0x00413F70: addiu       $sp, $sp, 0xD0
    ctx->r29 = ADD32(ctx->r29, 0XD0);
;}
RECOMP_FUNC void entry_00413E14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00413E14: lh          $v0, 0xC($s3)
    ctx->r2 = MEM_H(ctx->r19, 0XC);
    // 0x00413E18: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x00413E1C: lw          $v1, 0x2030($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X2030);
    // 0x00413E20: mult        $v0, $v1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x00413E24: mflo        $v0
    ctx->r2 = lo;
    // 0x00413E28: lui         $v1, 0xE6C2
    ctx->r3 = S32(0XE6C2 << 16);
    // 0x00413E2C: ori         $v1, $v1, 0xB449
    ctx->r3 = ctx->r3 | 0XB449;
    // 0x00413E30: mult        $v0, $v1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x00413E34: lw          $a0, 0x8($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X8);
    // 0x00413E38: mfhi        $v1
    ctx->r3 = hi;
    // 0x00413E3C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x00413E40: sra         $v1, $v1, 8
    ctx->r3 = S32(SIGNED(ctx->r3) >> 8);
    // 0x00413E44: sra         $v0, $v0, 31
    ctx->r2 = S32(SIGNED(ctx->r2) >> 31);
    // 0x00413E48: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x00413E4C: mtc1        $v1, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r3;
    // 0x00413E50: cvt.s.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.fl = CVT_S_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x00413E54: andi        $v0, $a0, 0x8000
    ctx->r2 = ctx->r4 & 0X8000;
    // 0x00413E58: bne         $v0, $zero, L_00413E8C
    if (ctx->r2 != 0) {
        // 0x00413E5C: andi        $v0, $a0, 0x4000
        ctx->r2 = ctx->r4 & 0X4000;
            goto L_00413E8C;
    }
    // 0x00413E5C: andi        $v0, $a0, 0x4000
    ctx->r2 = ctx->r4 & 0X4000;
    // 0x00413E60: beq         $v0, $zero, L_00413E84
    if (ctx->r2 == 0) {
        // 0x00413E64: nop
    
            goto L_00413E84;
    }
    // 0x00413E64: nop

    // 0x00413E68: lwc1        $f0, 0x18($s2)
    ctx->f0.u32l = MEM_W(ctx->r18, 0X18);
    // 0x00413E6C: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00413E70: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x00413E74: trunc.w.s   $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x00413E78: swc1        $f4, 0x14($s2)
    MEM_W(0X14, ctx->r18) = ctx->f4.u32l;
    // 0x00413E7C: j           L_00413E8C
    // 0x00413E80: nop

        goto L_00413E8C;
    // 0x00413E80: nop

L_00413E84:
    // 0x00413E84: trunc.w.s   $f4, $f1
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 1);
    ctx->f4.u32l = TRUNC_W_S(ctx->f1.fl);
    // 0x00413E88: swc1        $f4, 0x14($s2)
    MEM_W(0X14, ctx->r18) = ctx->f4.u32l;
L_00413E8C:
    // 0x00413E8C: lwc1        $f0, 0xC($s2)
    ctx->f0.u32l = MEM_W(ctx->r18, 0XC);
    // 0x00413E90: lwc1        $f1, 0x4($s2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r18, 0X4);
    // 0x00413E94: cvt.s.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.fl = CVT_S_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x00413E98: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x00413E9C: lwc1        $f0, 0x14($s2)
    ctx->f0.u32l = MEM_W(ctx->r18, 0X14);
    // 0x00413EA0: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00413EA4: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x00413EA8: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x00413EAC: lw          $v0, 0x2034($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2034);
    // 0x00413EB0: trunc.w.s   $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x00413EB4: swc1        $f4, 0x18($s2)
    MEM_W(0X18, ctx->r18) = ctx->f4.u32l;
    // 0x00413EB8: lh          $v1, 0xE($s3)
    ctx->r3 = MEM_H(ctx->r19, 0XE);
    // 0x00413EBC: mult        $v1, $v0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x00413EC0: mflo        $v1
    ctx->r3 = lo;
    // 0x00413EC4: lui         $v0, 0x939A
    ctx->r2 = S32(0X939A << 16);
    // 0x00413EC8: ori         $v0, $v0, 0x85C5
    ctx->r2 = ctx->r2 | 0X85C5;
    // 0x00413ECC: mult        $v1, $v0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x00413ED0: lw          $a0, 0x8($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X8);
    // 0x00413ED4: mfhi        $t4
    ctx->r12 = hi;
    // 0x00413ED8: addu        $v0, $t4, $v1
    ctx->r2 = ADD32(ctx->r12, ctx->r3);
    // 0x00413EDC: sra         $v0, $v0, 7
    ctx->r2 = S32(SIGNED(ctx->r2) >> 7);
    // 0x00413EE0: sra         $v1, $v1, 31
    ctx->r3 = S32(SIGNED(ctx->r3) >> 31);
    // 0x00413EE4: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x00413EE8: mtc1        $v0, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r2;
    // 0x00413EEC: cvt.s.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.fl = CVT_S_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x00413EF0: lui         $v0, 0x2
    ctx->r2 = S32(0X2 << 16);
    // 0x00413EF4: and         $v0, $a0, $v0
    ctx->r2 = ctx->r4 & ctx->r2;
    // 0x00413EF8: bne         $v0, $zero, L_00413F30
    if (ctx->r2 != 0) {
        // 0x00413EFC: lui         $v0, 0x1
        ctx->r2 = S32(0X1 << 16);
            goto L_00413F30;
    }
    // 0x00413EFC: lui         $v0, 0x1
    ctx->r2 = S32(0X1 << 16);
    // 0x00413F00: and         $v0, $a0, $v0
    ctx->r2 = ctx->r4 & ctx->r2;
    // 0x00413F04: beq         $v0, $zero, L_00413F28
    if (ctx->r2 == 0) {
        // 0x00413F08: nop
    
            goto L_00413F28;
    }
    // 0x00413F08: nop

    // 0x00413F0C: lwc1        $f0, 0x20($s2)
    ctx->f0.u32l = MEM_W(ctx->r18, 0X20);
    // 0x00413F10: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00413F14: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x00413F18: trunc.w.s   $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x00413F1C: swc1        $f4, 0x1C($s2)
    MEM_W(0X1C, ctx->r18) = ctx->f4.u32l;
    // 0x00413F20: j           L_00413F30
    // 0x00413F24: nop

        goto L_00413F30;
    // 0x00413F24: nop

L_00413F28:
    // 0x00413F28: trunc.w.s   $f4, $f1
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 1);
    ctx->f4.u32l = TRUNC_W_S(ctx->f1.fl);
    // 0x00413F2C: swc1        $f4, 0x1C($s2)
    MEM_W(0X1C, ctx->r18) = ctx->f4.u32l;
L_00413F30:
    // 0x00413F30: lwc1        $f0, 0x10($s2)
    ctx->f0.u32l = MEM_W(ctx->r18, 0X10);
    // 0x00413F34: lwc1        $f1, 0x8($s2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r18, 0X8);
    // 0x00413F38: cvt.s.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.fl = CVT_S_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x00413F3C: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x00413F40: lwc1        $f0, 0x1C($s2)
    ctx->f0.u32l = MEM_W(ctx->r18, 0X1C);
    // 0x00413F44: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00413F48: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x00413F4C: trunc.w.s   $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x00413F50: swc1        $f4, 0x20($s2)
    MEM_W(0X20, ctx->r18) = ctx->f4.u32l;
    // 0x00413F54: lw          $ra, 0xC0($sp)
    ctx->r31 = MEM_W(ctx->r29, 0XC0);
    // 0x00413F58: lw          $s3, 0xBC($sp)
    ctx->r19 = MEM_W(ctx->r29, 0XBC);
    // 0x00413F5C: lw          $s2, 0xB8($sp)
    ctx->r18 = MEM_W(ctx->r29, 0XB8);
    // 0x00413F60: lw          $s1, 0xB4($sp)
    ctx->r17 = MEM_W(ctx->r29, 0XB4);
    // 0x00413F64: lw          $s0, 0xB0($sp)
    ctx->r16 = MEM_W(ctx->r29, 0XB0);
    // 0x00413F68: ldc1        $f20, 0xC8($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0XC8);
    // 0x00413F6C: jr          $ra
    // 0x00413F70: addiu       $sp, $sp, 0xD0
    ctx->r29 = ADD32(ctx->r29, 0XD0);
    return;
    // 0x00413F70: addiu       $sp, $sp, 0xD0
    ctx->r29 = ADD32(ctx->r29, 0XD0);
;}
RECOMP_FUNC void entry_00413E8C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00413E8C: lwc1        $f0, 0xC($s2)
    ctx->f0.u32l = MEM_W(ctx->r18, 0XC);
    // 0x00413E90: lwc1        $f1, 0x4($s2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r18, 0X4);
    // 0x00413E94: cvt.s.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.fl = CVT_S_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x00413E98: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x00413E9C: lwc1        $f0, 0x14($s2)
    ctx->f0.u32l = MEM_W(ctx->r18, 0X14);
    // 0x00413EA0: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00413EA4: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x00413EA8: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x00413EAC: lw          $v0, 0x2034($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2034);
    // 0x00413EB0: trunc.w.s   $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x00413EB4: swc1        $f4, 0x18($s2)
    MEM_W(0X18, ctx->r18) = ctx->f4.u32l;
    // 0x00413EB8: lh          $v1, 0xE($s3)
    ctx->r3 = MEM_H(ctx->r19, 0XE);
    // 0x00413EBC: mult        $v1, $v0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x00413EC0: mflo        $v1
    ctx->r3 = lo;
    // 0x00413EC4: lui         $v0, 0x939A
    ctx->r2 = S32(0X939A << 16);
    // 0x00413EC8: ori         $v0, $v0, 0x85C5
    ctx->r2 = ctx->r2 | 0X85C5;
    // 0x00413ECC: mult        $v1, $v0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x00413ED0: lw          $a0, 0x8($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X8);
    // 0x00413ED4: mfhi        $t4
    ctx->r12 = hi;
    // 0x00413ED8: addu        $v0, $t4, $v1
    ctx->r2 = ADD32(ctx->r12, ctx->r3);
    // 0x00413EDC: sra         $v0, $v0, 7
    ctx->r2 = S32(SIGNED(ctx->r2) >> 7);
    // 0x00413EE0: sra         $v1, $v1, 31
    ctx->r3 = S32(SIGNED(ctx->r3) >> 31);
    // 0x00413EE4: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x00413EE8: mtc1        $v0, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r2;
    // 0x00413EEC: cvt.s.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.fl = CVT_S_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x00413EF0: lui         $v0, 0x2
    ctx->r2 = S32(0X2 << 16);
    // 0x00413EF4: and         $v0, $a0, $v0
    ctx->r2 = ctx->r4 & ctx->r2;
    // 0x00413EF8: bne         $v0, $zero, L_00413F30
    if (ctx->r2 != 0) {
        // 0x00413EFC: lui         $v0, 0x1
        ctx->r2 = S32(0X1 << 16);
            goto L_00413F30;
    }
    // 0x00413EFC: lui         $v0, 0x1
    ctx->r2 = S32(0X1 << 16);
    // 0x00413F00: and         $v0, $a0, $v0
    ctx->r2 = ctx->r4 & ctx->r2;
    // 0x00413F04: beq         $v0, $zero, L_00413F28
    if (ctx->r2 == 0) {
        // 0x00413F08: nop
    
            goto L_00413F28;
    }
    // 0x00413F08: nop

    // 0x00413F0C: lwc1        $f0, 0x20($s2)
    ctx->f0.u32l = MEM_W(ctx->r18, 0X20);
    // 0x00413F10: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00413F14: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x00413F18: trunc.w.s   $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x00413F1C: swc1        $f4, 0x1C($s2)
    MEM_W(0X1C, ctx->r18) = ctx->f4.u32l;
    // 0x00413F20: j           L_00413F30
    // 0x00413F24: nop

        goto L_00413F30;
    // 0x00413F24: nop

L_00413F28:
    // 0x00413F28: trunc.w.s   $f4, $f1
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 1);
    ctx->f4.u32l = TRUNC_W_S(ctx->f1.fl);
    // 0x00413F2C: swc1        $f4, 0x1C($s2)
    MEM_W(0X1C, ctx->r18) = ctx->f4.u32l;
L_00413F30:
    // 0x00413F30: lwc1        $f0, 0x10($s2)
    ctx->f0.u32l = MEM_W(ctx->r18, 0X10);
    // 0x00413F34: lwc1        $f1, 0x8($s2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r18, 0X8);
    // 0x00413F38: cvt.s.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.fl = CVT_S_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x00413F3C: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x00413F40: lwc1        $f0, 0x1C($s2)
    ctx->f0.u32l = MEM_W(ctx->r18, 0X1C);
    // 0x00413F44: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00413F48: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x00413F4C: trunc.w.s   $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x00413F50: swc1        $f4, 0x20($s2)
    MEM_W(0X20, ctx->r18) = ctx->f4.u32l;
    // 0x00413F54: lw          $ra, 0xC0($sp)
    ctx->r31 = MEM_W(ctx->r29, 0XC0);
    // 0x00413F58: lw          $s3, 0xBC($sp)
    ctx->r19 = MEM_W(ctx->r29, 0XBC);
    // 0x00413F5C: lw          $s2, 0xB8($sp)
    ctx->r18 = MEM_W(ctx->r29, 0XB8);
    // 0x00413F60: lw          $s1, 0xB4($sp)
    ctx->r17 = MEM_W(ctx->r29, 0XB4);
    // 0x00413F64: lw          $s0, 0xB0($sp)
    ctx->r16 = MEM_W(ctx->r29, 0XB0);
    // 0x00413F68: ldc1        $f20, 0xC8($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0XC8);
    // 0x00413F6C: jr          $ra
    // 0x00413F70: addiu       $sp, $sp, 0xD0
    ctx->r29 = ADD32(ctx->r29, 0XD0);
    return;
    // 0x00413F70: addiu       $sp, $sp, 0xD0
    ctx->r29 = ADD32(ctx->r29, 0XD0);
;}
RECOMP_FUNC void entry_00413F30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00413F30: lwc1        $f0, 0x10($s2)
    ctx->f0.u32l = MEM_W(ctx->r18, 0X10);
    // 0x00413F34: lwc1        $f1, 0x8($s2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r18, 0X8);
    // 0x00413F38: cvt.s.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.fl = CVT_S_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x00413F3C: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x00413F40: lwc1        $f0, 0x1C($s2)
    ctx->f0.u32l = MEM_W(ctx->r18, 0X1C);
    // 0x00413F44: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00413F48: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x00413F4C: trunc.w.s   $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x00413F50: swc1        $f4, 0x20($s2)
    MEM_W(0X20, ctx->r18) = ctx->f4.u32l;
    // 0x00413F54: lw          $ra, 0xC0($sp)
    ctx->r31 = MEM_W(ctx->r29, 0XC0);
    // 0x00413F58: lw          $s3, 0xBC($sp)
    ctx->r19 = MEM_W(ctx->r29, 0XBC);
    // 0x00413F5C: lw          $s2, 0xB8($sp)
    ctx->r18 = MEM_W(ctx->r29, 0XB8);
    // 0x00413F60: lw          $s1, 0xB4($sp)
    ctx->r17 = MEM_W(ctx->r29, 0XB4);
    // 0x00413F64: lw          $s0, 0xB0($sp)
    ctx->r16 = MEM_W(ctx->r29, 0XB0);
    // 0x00413F68: ldc1        $f20, 0xC8($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0XC8);
    // 0x00413F6C: jr          $ra
    // 0x00413F70: addiu       $sp, $sp, 0xD0
    ctx->r29 = ADD32(ctx->r29, 0XD0);
    return;
    // 0x00413F70: addiu       $sp, $sp, 0xD0
    ctx->r29 = ADD32(ctx->r29, 0XD0);
;}
RECOMP_FUNC void entry_0041411C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041411C: sll         $v0, $a0, 3
    ctx->r2 = S32(ctx->r4 << 3);
    // 0x00414120: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
    // 0x00414124: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x00414128: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x0041412C: addiu       $v1, $v1, 0x1BD4
    ctx->r3 = ADD32(ctx->r3, 0X1BD4);
    // 0x00414130: addu        $s0, $v0, $v1
    ctx->r16 = ADD32(ctx->r2, ctx->r3);
    // 0x00414134: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x00414138: lw          $v0, 0x1BD0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1BD0);
    // 0x0041413C: lw          $v1, 0x0($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X0);
    // 0x00414140: beq         $v0, $v1, L_004141BC
    if (ctx->r2 == ctx->r3) {
        // 0x00414144: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_004141BC;
    }
    // 0x00414144: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00414148: beq         $v1, $v0, L_00414188
    if (ctx->r3 == ctx->r2) {
        // 0x0041414C: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_00414188;
    }
    // 0x0041414C: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x00414150: beq         $v0, $zero, L_00414168
    if (ctx->r2 == 0) {
        // 0x00414154: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_00414168;
    }
    // 0x00414154: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x00414158: beq         $v1, $zero, L_00414178
    if (ctx->r3 == 0) {
        // 0x0041415C: nop
    
            goto L_00414178;
    }
    // 0x0041415C: nop

    // 0x00414160: j           L_004141B0
    // 0x00414164: nop

        goto L_004141B0;
    // 0x00414164: nop

L_00414168:
    // 0x00414168: beq         $v1, $v0, L_004141A0
    if (ctx->r3 == ctx->r2) {
        // 0x0041416C: nop
    
            goto L_004141A0;
    }
    // 0x0041416C: nop

    // 0x00414170: j           L_004141B0
    // 0x00414174: nop

        goto L_004141B0;
    // 0x00414174: nop

L_00414178:
    // 0x00414178: jal         0x00277F6C
    // 0x0041417C: nop

    func_00277F6C(rdram, ctx);
        goto after_0;
    // 0x0041417C: nop

    after_0:
    // 0x00414180: j           L_004141B0
    // 0x00414184: nop

        goto L_004141B0;
    // 0x00414184: nop

L_00414188:
    // 0x00414188: jal         0x00277F6C
    // 0x0041418C: nop

    func_00277F6C(rdram, ctx);
        goto after_1;
    // 0x0041418C: nop

    after_1:
    // 0x00414190: jal         0x0027836C
    // 0x00414194: nop

    func_0027836C(rdram, ctx);
        goto after_2;
    // 0x00414194: nop

    after_2:
    // 0x00414198: j           L_004141B0
    // 0x0041419C: nop

        goto L_004141B0;
    // 0x0041419C: nop

L_004141A0:
    // 0x004141A0: jal         0x00277F6C
    // 0x004141A4: nop

    func_00277F6C(rdram, ctx);
        goto after_3;
    // 0x004141A4: nop

    after_3:
    // 0x004141A8: jal         0x0027845C
    // 0x004141AC: nop

    func_0027845C(rdram, ctx);
        goto after_4;
    // 0x004141AC: nop

    after_4:
L_004141B0:
    // 0x004141B0: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x004141B4: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x004141B8: sw          $v0, 0x1BD0($at)
    MEM_W(0X1BD0, ctx->r1) = ctx->r2;
L_004141BC:
    // 0x004141BC: lh          $v1, 0x0($s2)
    ctx->r3 = MEM_H(ctx->r18, 0X0);
    // 0x004141C0: lw          $v0, 0x0($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X0);
    // 0x004141C4: bne         $v0, $v1, L_004141DC
    if (ctx->r2 != ctx->r3) {
        // 0x004141C8: lui         $v1, 0x100
        ctx->r3 = S32(0X100 << 16);
            goto L_004141DC;
    }
    // 0x004141C8: lui         $v1, 0x100
    ctx->r3 = S32(0X100 << 16);
    // 0x004141CC: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x004141D0: lwc1        $f1, 0xBCC($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0XBCC);
    // 0x004141D4: j           L_004141FC
    // 0x004141D8: nop

        goto L_004141FC;
    // 0x004141D8: nop

L_004141DC:
    // 0x004141DC: lw          $v0, 0x8($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X8);
    // 0x004141E0: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x004141E4: lwc1        $f1, 0xBD0($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0XBD0);
    // 0x004141E8: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x004141EC: bne         $v0, $zero, L_004141FC
    if (ctx->r2 != 0) {
        // 0x004141F0: nop
    
            goto L_004141FC;
    }
    // 0x004141F0: nop

    // 0x004141F4: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x004141F8: lwc1        $f1, 0xBD4($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0XBD4);
L_004141FC:
    // 0x004141FC: lbu         $v0, 0x15($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X15);
    // 0x00414200: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x00414204: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00414208: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0041420C: trunc.w.s   $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(3 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x00414210: mfc1        $v1, $f3
    ctx->r3 = (int32_t)ctx->f_odd[(3 - 1) * 2];
    // 0x00414214: slti        $v0, $v1, 0x100
    ctx->r2 = SIGNED(ctx->r3) < 0X100 ? 1 : 0;
    // 0x00414218: beq         $v0, $zero, L_00414224
    if (ctx->r2 == 0) {
        // 0x0041421C: addiu       $a0, $zero, 0xFF
        ctx->r4 = ADD32(0, 0XFF);
            goto L_00414224;
    }
    // 0x0041421C: addiu       $a0, $zero, 0xFF
    ctx->r4 = ADD32(0, 0XFF);
    // 0x00414220: addu        $a0, $v1, $zero
    ctx->r4 = ADD32(ctx->r3, 0);
L_00414224:
    // 0x00414224: lbu         $v0, 0x16($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X16);
    // 0x00414228: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x0041422C: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00414230: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00414234: trunc.w.s   $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(3 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x00414238: mfc1        $v1, $f3
    ctx->r3 = (int32_t)ctx->f_odd[(3 - 1) * 2];
    // 0x0041423C: slti        $v0, $v1, 0x100
    ctx->r2 = SIGNED(ctx->r3) < 0X100 ? 1 : 0;
    // 0x00414240: beq         $v0, $zero, L_0041424C
    if (ctx->r2 == 0) {
        // 0x00414244: addiu       $a1, $zero, 0xFF
        ctx->r5 = ADD32(0, 0XFF);
            goto L_0041424C;
    }
    // 0x00414244: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x00414248: addu        $a1, $v1, $zero
    ctx->r5 = ADD32(ctx->r3, 0);
L_0041424C:
    // 0x0041424C: lbu         $v0, 0x17($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X17);
    // 0x00414250: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x00414254: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00414258: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0041425C: trunc.w.s   $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(3 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x00414260: mfc1        $v1, $f3
    ctx->r3 = (int32_t)ctx->f_odd[(3 - 1) * 2];
    // 0x00414264: slti        $v0, $v1, 0x100
    ctx->r2 = SIGNED(ctx->r3) < 0X100 ? 1 : 0;
    // 0x00414268: beq         $v0, $zero, L_00414274
    if (ctx->r2 == 0) {
        // 0x0041426C: addiu       $a2, $zero, 0xFF
        ctx->r6 = ADD32(0, 0XFF);
            goto L_00414274;
    }
    // 0x0041426C: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x00414270: addu        $a2, $v1, $zero
    ctx->r6 = ADD32(ctx->r3, 0);
L_00414274:
    // 0x00414274: lbu         $v0, 0x18($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X18);
    // 0x00414278: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x0041427C: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00414280: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00414284: trunc.w.s   $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(3 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x00414288: mfc1        $v1, $f3
    ctx->r3 = (int32_t)ctx->f_odd[(3 - 1) * 2];
    // 0x0041428C: slti        $v0, $v1, 0x100
    ctx->r2 = SIGNED(ctx->r3) < 0X100 ? 1 : 0;
    // 0x00414290: beq         $v0, $zero, L_0041429C
    if (ctx->r2 == 0) {
        // 0x00414294: addiu       $a3, $zero, 0xFF
        ctx->r7 = ADD32(0, 0XFF);
            goto L_0041429C;
    }
    // 0x00414294: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    // 0x00414298: addu        $a3, $v1, $zero
    ctx->r7 = ADD32(ctx->r3, 0);
L_0041429C:
    // 0x0041429C: lbu         $v0, 0x19($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X19);
    // 0x004142A0: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x004142A4: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x004142A8: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x004142AC: trunc.w.s   $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(3 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x004142B0: mfc1        $v1, $f3
    ctx->r3 = (int32_t)ctx->f_odd[(3 - 1) * 2];
    // 0x004142B4: slti        $v0, $v1, 0x100
    ctx->r2 = SIGNED(ctx->r3) < 0X100 ? 1 : 0;
    // 0x004142B8: beq         $v0, $zero, L_004142C8
    if (ctx->r2 == 0) {
        // 0x004142BC: addiu       $v0, $zero, 0xFF
        ctx->r2 = ADD32(0, 0XFF);
            goto L_004142C8;
    }
    // 0x004142BC: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x004142C0: j           L_004142CC
    // 0x004142C4: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
        goto L_004142CC;
    // 0x004142C4: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
L_004142C8:
    // 0x004142C8: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
L_004142CC:
    // 0x004142CC: lbu         $v0, 0x1A($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X1A);
    // 0x004142D0: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x004142D4: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x004142D8: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x004142DC: trunc.w.s   $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(3 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x004142E0: mfc1        $v1, $f3
    ctx->r3 = (int32_t)ctx->f_odd[(3 - 1) * 2];
    // 0x004142E4: slti        $v0, $v1, 0x100
    ctx->r2 = SIGNED(ctx->r3) < 0X100 ? 1 : 0;
    // 0x004142E8: beq         $v0, $zero, L_004142F8
    if (ctx->r2 == 0) {
        // 0x004142EC: addiu       $v0, $zero, 0xFF
        ctx->r2 = ADD32(0, 0XFF);
            goto L_004142F8;
    }
    // 0x004142EC: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x004142F0: j           L_004142FC
    // 0x004142F4: sw          $v1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r3;
        goto L_004142FC;
    // 0x004142F4: sw          $v1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r3;
L_004142F8:
    // 0x004142F8: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
L_004142FC:
    // 0x004142FC: jal         0x0027B094
    // 0x00414300: nop

    func_0027B094(rdram, ctx);
        goto after_5;
    // 0x00414300: nop

    after_5:
    // 0x00414304: lbu         $v0, 0x14($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X14);
    // 0x00414308: lui         $v1, 0x8011
    ctx->r3 = S32(0X8011 << 16);
    // 0x0041430C: addiu       $v1, $v1, 0x1B0
    ctx->r3 = ADD32(ctx->r3, 0X1B0);
    // 0x00414310: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x00414314: lbu         $v0, 0x14($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X14);
    // 0x00414318: sw          $v0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r2;
    // 0x0041431C: lwc1        $f2, 0xC($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0XC);
    // 0x00414320: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00414324: lwc1        $f0, 0x2030($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X2030);
    // 0x00414328: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x0041432C: mul.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x00414330: lwc1        $f1, 0x10($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X10);
    // 0x00414334: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00414338: lwc1        $f0, 0x2034($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X2034);
    // 0x0041433C: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00414340: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x00414344: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00414348: lwc1        $f12, 0xBD8($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0XBD8);
    // 0x0041434C: mul.s       $f12, $f2, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = MUL_S(ctx->f2.fl, ctx->f12.fl);
    // 0x00414350: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00414354: lwc1        $f14, 0xBDC($at)
    ctx->f14.u32l = MEM_W(ctx->r1, 0XBDC);
    // 0x00414358: mul.s       $f14, $f1, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = MUL_S(ctx->f1.fl, ctx->f14.fl);
    // 0x0041435C: jal         0x0027B0C0
    // 0x00414360: nop

    func_0027B0C0(rdram, ctx);
        goto after_6;
    // 0x00414360: nop

    after_6:
    // 0x00414364: beq         $s3, $zero, L_00414370
    if (ctx->r19 == 0) {
        // 0x00414368: nop
    
            goto L_00414370;
    }
    // 0x00414368: nop

    // 0x0041436C: lbu         $s3, 0x14($s0)
    ctx->r19 = MEM_BU(ctx->r16, 0X14);
L_00414370:
    // 0x00414370: lwc1        $f1, 0x34($s2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r18, 0X34);
    // 0x00414374: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00414378: lwc1        $f0, 0xBE0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0XBE0);
    // 0x0041437C: lwc1        $f2, 0x30($s2)
    ctx->f2.u32l = MEM_W(ctx->r18, 0X30);
    // 0x00414380: lw          $a0, 0x48($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X48);
    // 0x00414384: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x00414388: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x0041438C: sw          $s3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r19;
    // 0x00414390: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00414394: lwc1        $f0, 0xBE4($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0XBE4);
    // 0x00414398: mul.s       $f2, $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f1.fl);
    // 0x0041439C: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    // 0x004143A0: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x004143A4: lw          $a1, 0x14($s4)
    ctx->r5 = MEM_W(ctx->r20, 0X14);
    // 0x004143A8: lw          $a2, 0x1C($s4)
    ctx->r6 = MEM_W(ctx->r20, 0X1C);
    // 0x004143AC: trunc.w.s   $f3, $f2
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 2);
    ctx->f_odd[(3 - 1) * 2] = TRUNC_W_S(ctx->f2.fl);
    // 0x004143B0: mfc1        $a3, $f3
    ctx->r7 = (int32_t)ctx->f_odd[(3 - 1) * 2];
    // 0x004143B4: jal         0x00278CDC
    // 0x004143B8: nop

    func_00278CDC(rdram, ctx);
        goto after_7;
    // 0x004143B8: nop

    after_7:
    // 0x004143BC: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x004143C0: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x004143C4: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x004143C8: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x004143CC: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x004143D0: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x004143D4: jr          $ra
    // 0x004143D8: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x004143D8: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void entry_00414120(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00414120: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
    // 0x00414124: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x00414128: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x0041412C: addiu       $v1, $v1, 0x1BD4
    ctx->r3 = ADD32(ctx->r3, 0X1BD4);
    // 0x00414130: addu        $s0, $v0, $v1
    ctx->r16 = ADD32(ctx->r2, ctx->r3);
    // 0x00414134: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x00414138: lw          $v0, 0x1BD0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1BD0);
    // 0x0041413C: lw          $v1, 0x0($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X0);
    // 0x00414140: beq         $v0, $v1, L_004141BC
    if (ctx->r2 == ctx->r3) {
        // 0x00414144: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_004141BC;
    }
    // 0x00414144: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00414148: beq         $v1, $v0, L_00414188
    if (ctx->r3 == ctx->r2) {
        // 0x0041414C: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_00414188;
    }
    // 0x0041414C: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x00414150: beq         $v0, $zero, L_00414168
    if (ctx->r2 == 0) {
        // 0x00414154: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_00414168;
    }
    // 0x00414154: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x00414158: beq         $v1, $zero, L_00414178
    if (ctx->r3 == 0) {
        // 0x0041415C: nop
    
            goto L_00414178;
    }
    // 0x0041415C: nop

    // 0x00414160: j           L_004141B0
    // 0x00414164: nop

        goto L_004141B0;
    // 0x00414164: nop

L_00414168:
    // 0x00414168: beq         $v1, $v0, L_004141A0
    if (ctx->r3 == ctx->r2) {
        // 0x0041416C: nop
    
            goto L_004141A0;
    }
    // 0x0041416C: nop

    // 0x00414170: j           L_004141B0
    // 0x00414174: nop

        goto L_004141B0;
    // 0x00414174: nop

L_00414178:
    // 0x00414178: jal         0x00277F6C
    // 0x0041417C: nop

    func_00277F6C(rdram, ctx);
        goto after_0;
    // 0x0041417C: nop

    after_0:
    // 0x00414180: j           L_004141B0
    // 0x00414184: nop

        goto L_004141B0;
    // 0x00414184: nop

L_00414188:
    // 0x00414188: jal         0x00277F6C
    // 0x0041418C: nop

    func_00277F6C(rdram, ctx);
        goto after_1;
    // 0x0041418C: nop

    after_1:
    // 0x00414190: jal         0x0027836C
    // 0x00414194: nop

    func_0027836C(rdram, ctx);
        goto after_2;
    // 0x00414194: nop

    after_2:
    // 0x00414198: j           L_004141B0
    // 0x0041419C: nop

        goto L_004141B0;
    // 0x0041419C: nop

L_004141A0:
    // 0x004141A0: jal         0x00277F6C
    // 0x004141A4: nop

    func_00277F6C(rdram, ctx);
        goto after_3;
    // 0x004141A4: nop

    after_3:
    // 0x004141A8: jal         0x0027845C
    // 0x004141AC: nop

    func_0027845C(rdram, ctx);
        goto after_4;
    // 0x004141AC: nop

    after_4:
L_004141B0:
    // 0x004141B0: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x004141B4: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x004141B8: sw          $v0, 0x1BD0($at)
    MEM_W(0X1BD0, ctx->r1) = ctx->r2;
L_004141BC:
    // 0x004141BC: lh          $v1, 0x0($s2)
    ctx->r3 = MEM_H(ctx->r18, 0X0);
    // 0x004141C0: lw          $v0, 0x0($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X0);
    // 0x004141C4: bne         $v0, $v1, L_004141DC
    if (ctx->r2 != ctx->r3) {
        // 0x004141C8: lui         $v1, 0x100
        ctx->r3 = S32(0X100 << 16);
            goto L_004141DC;
    }
    // 0x004141C8: lui         $v1, 0x100
    ctx->r3 = S32(0X100 << 16);
    // 0x004141CC: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x004141D0: lwc1        $f1, 0xBCC($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0XBCC);
    // 0x004141D4: j           L_004141FC
    // 0x004141D8: nop

        goto L_004141FC;
    // 0x004141D8: nop

L_004141DC:
    // 0x004141DC: lw          $v0, 0x8($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X8);
    // 0x004141E0: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x004141E4: lwc1        $f1, 0xBD0($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0XBD0);
    // 0x004141E8: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x004141EC: bne         $v0, $zero, L_004141FC
    if (ctx->r2 != 0) {
        // 0x004141F0: nop
    
            goto L_004141FC;
    }
    // 0x004141F0: nop

    // 0x004141F4: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x004141F8: lwc1        $f1, 0xBD4($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0XBD4);
L_004141FC:
    // 0x004141FC: lbu         $v0, 0x15($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X15);
    // 0x00414200: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x00414204: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00414208: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0041420C: trunc.w.s   $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(3 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x00414210: mfc1        $v1, $f3
    ctx->r3 = (int32_t)ctx->f_odd[(3 - 1) * 2];
    // 0x00414214: slti        $v0, $v1, 0x100
    ctx->r2 = SIGNED(ctx->r3) < 0X100 ? 1 : 0;
    // 0x00414218: beq         $v0, $zero, L_00414224
    if (ctx->r2 == 0) {
        // 0x0041421C: addiu       $a0, $zero, 0xFF
        ctx->r4 = ADD32(0, 0XFF);
            goto L_00414224;
    }
    // 0x0041421C: addiu       $a0, $zero, 0xFF
    ctx->r4 = ADD32(0, 0XFF);
    // 0x00414220: addu        $a0, $v1, $zero
    ctx->r4 = ADD32(ctx->r3, 0);
L_00414224:
    // 0x00414224: lbu         $v0, 0x16($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X16);
    // 0x00414228: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x0041422C: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00414230: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00414234: trunc.w.s   $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(3 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x00414238: mfc1        $v1, $f3
    ctx->r3 = (int32_t)ctx->f_odd[(3 - 1) * 2];
    // 0x0041423C: slti        $v0, $v1, 0x100
    ctx->r2 = SIGNED(ctx->r3) < 0X100 ? 1 : 0;
    // 0x00414240: beq         $v0, $zero, L_0041424C
    if (ctx->r2 == 0) {
        // 0x00414244: addiu       $a1, $zero, 0xFF
        ctx->r5 = ADD32(0, 0XFF);
            goto L_0041424C;
    }
    // 0x00414244: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x00414248: addu        $a1, $v1, $zero
    ctx->r5 = ADD32(ctx->r3, 0);
L_0041424C:
    // 0x0041424C: lbu         $v0, 0x17($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X17);
    // 0x00414250: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x00414254: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00414258: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0041425C: trunc.w.s   $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(3 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x00414260: mfc1        $v1, $f3
    ctx->r3 = (int32_t)ctx->f_odd[(3 - 1) * 2];
    // 0x00414264: slti        $v0, $v1, 0x100
    ctx->r2 = SIGNED(ctx->r3) < 0X100 ? 1 : 0;
    // 0x00414268: beq         $v0, $zero, L_00414274
    if (ctx->r2 == 0) {
        // 0x0041426C: addiu       $a2, $zero, 0xFF
        ctx->r6 = ADD32(0, 0XFF);
            goto L_00414274;
    }
    // 0x0041426C: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x00414270: addu        $a2, $v1, $zero
    ctx->r6 = ADD32(ctx->r3, 0);
L_00414274:
    // 0x00414274: lbu         $v0, 0x18($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X18);
    // 0x00414278: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x0041427C: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00414280: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00414284: trunc.w.s   $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(3 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x00414288: mfc1        $v1, $f3
    ctx->r3 = (int32_t)ctx->f_odd[(3 - 1) * 2];
    // 0x0041428C: slti        $v0, $v1, 0x100
    ctx->r2 = SIGNED(ctx->r3) < 0X100 ? 1 : 0;
    // 0x00414290: beq         $v0, $zero, L_0041429C
    if (ctx->r2 == 0) {
        // 0x00414294: addiu       $a3, $zero, 0xFF
        ctx->r7 = ADD32(0, 0XFF);
            goto L_0041429C;
    }
    // 0x00414294: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    // 0x00414298: addu        $a3, $v1, $zero
    ctx->r7 = ADD32(ctx->r3, 0);
L_0041429C:
    // 0x0041429C: lbu         $v0, 0x19($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X19);
    // 0x004142A0: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x004142A4: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x004142A8: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x004142AC: trunc.w.s   $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(3 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x004142B0: mfc1        $v1, $f3
    ctx->r3 = (int32_t)ctx->f_odd[(3 - 1) * 2];
    // 0x004142B4: slti        $v0, $v1, 0x100
    ctx->r2 = SIGNED(ctx->r3) < 0X100 ? 1 : 0;
    // 0x004142B8: beq         $v0, $zero, L_004142C8
    if (ctx->r2 == 0) {
        // 0x004142BC: addiu       $v0, $zero, 0xFF
        ctx->r2 = ADD32(0, 0XFF);
            goto L_004142C8;
    }
    // 0x004142BC: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x004142C0: j           L_004142CC
    // 0x004142C4: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
        goto L_004142CC;
    // 0x004142C4: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
L_004142C8:
    // 0x004142C8: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
L_004142CC:
    // 0x004142CC: lbu         $v0, 0x1A($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X1A);
    // 0x004142D0: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x004142D4: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x004142D8: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x004142DC: trunc.w.s   $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(3 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x004142E0: mfc1        $v1, $f3
    ctx->r3 = (int32_t)ctx->f_odd[(3 - 1) * 2];
    // 0x004142E4: slti        $v0, $v1, 0x100
    ctx->r2 = SIGNED(ctx->r3) < 0X100 ? 1 : 0;
    // 0x004142E8: beq         $v0, $zero, L_004142F8
    if (ctx->r2 == 0) {
        // 0x004142EC: addiu       $v0, $zero, 0xFF
        ctx->r2 = ADD32(0, 0XFF);
            goto L_004142F8;
    }
    // 0x004142EC: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x004142F0: j           L_004142FC
    // 0x004142F4: sw          $v1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r3;
        goto L_004142FC;
    // 0x004142F4: sw          $v1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r3;
L_004142F8:
    // 0x004142F8: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
L_004142FC:
    // 0x004142FC: jal         0x0027B094
    // 0x00414300: nop

    func_0027B094(rdram, ctx);
        goto after_5;
    // 0x00414300: nop

    after_5:
    // 0x00414304: lbu         $v0, 0x14($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X14);
    // 0x00414308: lui         $v1, 0x8011
    ctx->r3 = S32(0X8011 << 16);
    // 0x0041430C: addiu       $v1, $v1, 0x1B0
    ctx->r3 = ADD32(ctx->r3, 0X1B0);
    // 0x00414310: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x00414314: lbu         $v0, 0x14($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X14);
    // 0x00414318: sw          $v0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r2;
    // 0x0041431C: lwc1        $f2, 0xC($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0XC);
    // 0x00414320: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00414324: lwc1        $f0, 0x2030($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X2030);
    // 0x00414328: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x0041432C: mul.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x00414330: lwc1        $f1, 0x10($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X10);
    // 0x00414334: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00414338: lwc1        $f0, 0x2034($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X2034);
    // 0x0041433C: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00414340: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x00414344: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00414348: lwc1        $f12, 0xBD8($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0XBD8);
    // 0x0041434C: mul.s       $f12, $f2, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = MUL_S(ctx->f2.fl, ctx->f12.fl);
    // 0x00414350: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00414354: lwc1        $f14, 0xBDC($at)
    ctx->f14.u32l = MEM_W(ctx->r1, 0XBDC);
    // 0x00414358: mul.s       $f14, $f1, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = MUL_S(ctx->f1.fl, ctx->f14.fl);
    // 0x0041435C: jal         0x0027B0C0
    // 0x00414360: nop

    func_0027B0C0(rdram, ctx);
        goto after_6;
    // 0x00414360: nop

    after_6:
    // 0x00414364: beq         $s3, $zero, L_00414370
    if (ctx->r19 == 0) {
        // 0x00414368: nop
    
            goto L_00414370;
    }
    // 0x00414368: nop

    // 0x0041436C: lbu         $s3, 0x14($s0)
    ctx->r19 = MEM_BU(ctx->r16, 0X14);
L_00414370:
    // 0x00414370: lwc1        $f1, 0x34($s2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r18, 0X34);
    // 0x00414374: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00414378: lwc1        $f0, 0xBE0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0XBE0);
    // 0x0041437C: lwc1        $f2, 0x30($s2)
    ctx->f2.u32l = MEM_W(ctx->r18, 0X30);
    // 0x00414380: lw          $a0, 0x48($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X48);
    // 0x00414384: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x00414388: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x0041438C: sw          $s3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r19;
    // 0x00414390: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00414394: lwc1        $f0, 0xBE4($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0XBE4);
    // 0x00414398: mul.s       $f2, $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f1.fl);
    // 0x0041439C: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    // 0x004143A0: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x004143A4: lw          $a1, 0x14($s4)
    ctx->r5 = MEM_W(ctx->r20, 0X14);
    // 0x004143A8: lw          $a2, 0x1C($s4)
    ctx->r6 = MEM_W(ctx->r20, 0X1C);
    // 0x004143AC: trunc.w.s   $f3, $f2
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 2);
    ctx->f_odd[(3 - 1) * 2] = TRUNC_W_S(ctx->f2.fl);
    // 0x004143B0: mfc1        $a3, $f3
    ctx->r7 = (int32_t)ctx->f_odd[(3 - 1) * 2];
    // 0x004143B4: jal         0x00278CDC
    // 0x004143B8: nop

    func_00278CDC(rdram, ctx);
        goto after_7;
    // 0x004143B8: nop

    after_7:
    // 0x004143BC: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x004143C0: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x004143C4: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x004143C8: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x004143CC: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x004143D0: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x004143D4: jr          $ra
    // 0x004143D8: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x004143D8: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void entry_00414124(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00414124: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x00414128: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x0041412C: addiu       $v1, $v1, 0x1BD4
    ctx->r3 = ADD32(ctx->r3, 0X1BD4);
    // 0x00414130: addu        $s0, $v0, $v1
    ctx->r16 = ADD32(ctx->r2, ctx->r3);
    // 0x00414134: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x00414138: lw          $v0, 0x1BD0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1BD0);
    // 0x0041413C: lw          $v1, 0x0($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X0);
    // 0x00414140: beq         $v0, $v1, L_004141BC
    if (ctx->r2 == ctx->r3) {
        // 0x00414144: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_004141BC;
    }
    // 0x00414144: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00414148: beq         $v1, $v0, L_00414188
    if (ctx->r3 == ctx->r2) {
        // 0x0041414C: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_00414188;
    }
    // 0x0041414C: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x00414150: beq         $v0, $zero, L_00414168
    if (ctx->r2 == 0) {
        // 0x00414154: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_00414168;
    }
    // 0x00414154: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x00414158: beq         $v1, $zero, L_00414178
    if (ctx->r3 == 0) {
        // 0x0041415C: nop
    
            goto L_00414178;
    }
    // 0x0041415C: nop

    // 0x00414160: j           L_004141B0
    // 0x00414164: nop

        goto L_004141B0;
    // 0x00414164: nop

L_00414168:
    // 0x00414168: beq         $v1, $v0, L_004141A0
    if (ctx->r3 == ctx->r2) {
        // 0x0041416C: nop
    
            goto L_004141A0;
    }
    // 0x0041416C: nop

    // 0x00414170: j           L_004141B0
    // 0x00414174: nop

        goto L_004141B0;
    // 0x00414174: nop

L_00414178:
    // 0x00414178: jal         0x00277F6C
    // 0x0041417C: nop

    func_00277F6C(rdram, ctx);
        goto after_0;
    // 0x0041417C: nop

    after_0:
    // 0x00414180: j           L_004141B0
    // 0x00414184: nop

        goto L_004141B0;
    // 0x00414184: nop

L_00414188:
    // 0x00414188: jal         0x00277F6C
    // 0x0041418C: nop

    func_00277F6C(rdram, ctx);
        goto after_1;
    // 0x0041418C: nop

    after_1:
    // 0x00414190: jal         0x0027836C
    // 0x00414194: nop

    func_0027836C(rdram, ctx);
        goto after_2;
    // 0x00414194: nop

    after_2:
    // 0x00414198: j           L_004141B0
    // 0x0041419C: nop

        goto L_004141B0;
    // 0x0041419C: nop

L_004141A0:
    // 0x004141A0: jal         0x00277F6C
    // 0x004141A4: nop

    func_00277F6C(rdram, ctx);
        goto after_3;
    // 0x004141A4: nop

    after_3:
    // 0x004141A8: jal         0x0027845C
    // 0x004141AC: nop

    func_0027845C(rdram, ctx);
        goto after_4;
    // 0x004141AC: nop

    after_4:
L_004141B0:
    // 0x004141B0: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x004141B4: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x004141B8: sw          $v0, 0x1BD0($at)
    MEM_W(0X1BD0, ctx->r1) = ctx->r2;
L_004141BC:
    // 0x004141BC: lh          $v1, 0x0($s2)
    ctx->r3 = MEM_H(ctx->r18, 0X0);
    // 0x004141C0: lw          $v0, 0x0($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X0);
    // 0x004141C4: bne         $v0, $v1, L_004141DC
    if (ctx->r2 != ctx->r3) {
        // 0x004141C8: lui         $v1, 0x100
        ctx->r3 = S32(0X100 << 16);
            goto L_004141DC;
    }
    // 0x004141C8: lui         $v1, 0x100
    ctx->r3 = S32(0X100 << 16);
    // 0x004141CC: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x004141D0: lwc1        $f1, 0xBCC($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0XBCC);
    // 0x004141D4: j           L_004141FC
    // 0x004141D8: nop

        goto L_004141FC;
    // 0x004141D8: nop

L_004141DC:
    // 0x004141DC: lw          $v0, 0x8($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X8);
    // 0x004141E0: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x004141E4: lwc1        $f1, 0xBD0($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0XBD0);
    // 0x004141E8: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x004141EC: bne         $v0, $zero, L_004141FC
    if (ctx->r2 != 0) {
        // 0x004141F0: nop
    
            goto L_004141FC;
    }
    // 0x004141F0: nop

    // 0x004141F4: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x004141F8: lwc1        $f1, 0xBD4($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0XBD4);
L_004141FC:
    // 0x004141FC: lbu         $v0, 0x15($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X15);
    // 0x00414200: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x00414204: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00414208: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0041420C: trunc.w.s   $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(3 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x00414210: mfc1        $v1, $f3
    ctx->r3 = (int32_t)ctx->f_odd[(3 - 1) * 2];
    // 0x00414214: slti        $v0, $v1, 0x100
    ctx->r2 = SIGNED(ctx->r3) < 0X100 ? 1 : 0;
    // 0x00414218: beq         $v0, $zero, L_00414224
    if (ctx->r2 == 0) {
        // 0x0041421C: addiu       $a0, $zero, 0xFF
        ctx->r4 = ADD32(0, 0XFF);
            goto L_00414224;
    }
    // 0x0041421C: addiu       $a0, $zero, 0xFF
    ctx->r4 = ADD32(0, 0XFF);
    // 0x00414220: addu        $a0, $v1, $zero
    ctx->r4 = ADD32(ctx->r3, 0);
L_00414224:
    // 0x00414224: lbu         $v0, 0x16($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X16);
    // 0x00414228: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x0041422C: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00414230: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00414234: trunc.w.s   $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(3 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x00414238: mfc1        $v1, $f3
    ctx->r3 = (int32_t)ctx->f_odd[(3 - 1) * 2];
    // 0x0041423C: slti        $v0, $v1, 0x100
    ctx->r2 = SIGNED(ctx->r3) < 0X100 ? 1 : 0;
    // 0x00414240: beq         $v0, $zero, L_0041424C
    if (ctx->r2 == 0) {
        // 0x00414244: addiu       $a1, $zero, 0xFF
        ctx->r5 = ADD32(0, 0XFF);
            goto L_0041424C;
    }
    // 0x00414244: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x00414248: addu        $a1, $v1, $zero
    ctx->r5 = ADD32(ctx->r3, 0);
L_0041424C:
    // 0x0041424C: lbu         $v0, 0x17($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X17);
    // 0x00414250: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x00414254: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00414258: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0041425C: trunc.w.s   $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(3 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x00414260: mfc1        $v1, $f3
    ctx->r3 = (int32_t)ctx->f_odd[(3 - 1) * 2];
    // 0x00414264: slti        $v0, $v1, 0x100
    ctx->r2 = SIGNED(ctx->r3) < 0X100 ? 1 : 0;
    // 0x00414268: beq         $v0, $zero, L_00414274
    if (ctx->r2 == 0) {
        // 0x0041426C: addiu       $a2, $zero, 0xFF
        ctx->r6 = ADD32(0, 0XFF);
            goto L_00414274;
    }
    // 0x0041426C: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x00414270: addu        $a2, $v1, $zero
    ctx->r6 = ADD32(ctx->r3, 0);
L_00414274:
    // 0x00414274: lbu         $v0, 0x18($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X18);
    // 0x00414278: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x0041427C: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00414280: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00414284: trunc.w.s   $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(3 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x00414288: mfc1        $v1, $f3
    ctx->r3 = (int32_t)ctx->f_odd[(3 - 1) * 2];
    // 0x0041428C: slti        $v0, $v1, 0x100
    ctx->r2 = SIGNED(ctx->r3) < 0X100 ? 1 : 0;
    // 0x00414290: beq         $v0, $zero, L_0041429C
    if (ctx->r2 == 0) {
        // 0x00414294: addiu       $a3, $zero, 0xFF
        ctx->r7 = ADD32(0, 0XFF);
            goto L_0041429C;
    }
    // 0x00414294: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    // 0x00414298: addu        $a3, $v1, $zero
    ctx->r7 = ADD32(ctx->r3, 0);
L_0041429C:
    // 0x0041429C: lbu         $v0, 0x19($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X19);
    // 0x004142A0: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x004142A4: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x004142A8: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x004142AC: trunc.w.s   $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(3 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x004142B0: mfc1        $v1, $f3
    ctx->r3 = (int32_t)ctx->f_odd[(3 - 1) * 2];
    // 0x004142B4: slti        $v0, $v1, 0x100
    ctx->r2 = SIGNED(ctx->r3) < 0X100 ? 1 : 0;
    // 0x004142B8: beq         $v0, $zero, L_004142C8
    if (ctx->r2 == 0) {
        // 0x004142BC: addiu       $v0, $zero, 0xFF
        ctx->r2 = ADD32(0, 0XFF);
            goto L_004142C8;
    }
    // 0x004142BC: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x004142C0: j           L_004142CC
    // 0x004142C4: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
        goto L_004142CC;
    // 0x004142C4: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
L_004142C8:
    // 0x004142C8: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
L_004142CC:
    // 0x004142CC: lbu         $v0, 0x1A($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X1A);
    // 0x004142D0: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x004142D4: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x004142D8: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x004142DC: trunc.w.s   $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(3 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x004142E0: mfc1        $v1, $f3
    ctx->r3 = (int32_t)ctx->f_odd[(3 - 1) * 2];
    // 0x004142E4: slti        $v0, $v1, 0x100
    ctx->r2 = SIGNED(ctx->r3) < 0X100 ? 1 : 0;
    // 0x004142E8: beq         $v0, $zero, L_004142F8
    if (ctx->r2 == 0) {
        // 0x004142EC: addiu       $v0, $zero, 0xFF
        ctx->r2 = ADD32(0, 0XFF);
            goto L_004142F8;
    }
    // 0x004142EC: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x004142F0: j           L_004142FC
    // 0x004142F4: sw          $v1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r3;
        goto L_004142FC;
    // 0x004142F4: sw          $v1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r3;
L_004142F8:
    // 0x004142F8: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
L_004142FC:
    // 0x004142FC: jal         0x0027B094
    // 0x00414300: nop

    func_0027B094(rdram, ctx);
        goto after_5;
    // 0x00414300: nop

    after_5:
    // 0x00414304: lbu         $v0, 0x14($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X14);
    // 0x00414308: lui         $v1, 0x8011
    ctx->r3 = S32(0X8011 << 16);
    // 0x0041430C: addiu       $v1, $v1, 0x1B0
    ctx->r3 = ADD32(ctx->r3, 0X1B0);
    // 0x00414310: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x00414314: lbu         $v0, 0x14($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X14);
    // 0x00414318: sw          $v0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r2;
    // 0x0041431C: lwc1        $f2, 0xC($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0XC);
    // 0x00414320: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00414324: lwc1        $f0, 0x2030($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X2030);
    // 0x00414328: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x0041432C: mul.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x00414330: lwc1        $f1, 0x10($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X10);
    // 0x00414334: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00414338: lwc1        $f0, 0x2034($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X2034);
    // 0x0041433C: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00414340: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x00414344: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00414348: lwc1        $f12, 0xBD8($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0XBD8);
    // 0x0041434C: mul.s       $f12, $f2, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = MUL_S(ctx->f2.fl, ctx->f12.fl);
    // 0x00414350: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00414354: lwc1        $f14, 0xBDC($at)
    ctx->f14.u32l = MEM_W(ctx->r1, 0XBDC);
    // 0x00414358: mul.s       $f14, $f1, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = MUL_S(ctx->f1.fl, ctx->f14.fl);
    // 0x0041435C: jal         0x0027B0C0
    // 0x00414360: nop

    func_0027B0C0(rdram, ctx);
        goto after_6;
    // 0x00414360: nop

    after_6:
    // 0x00414364: beq         $s3, $zero, L_00414370
    if (ctx->r19 == 0) {
        // 0x00414368: nop
    
            goto L_00414370;
    }
    // 0x00414368: nop

    // 0x0041436C: lbu         $s3, 0x14($s0)
    ctx->r19 = MEM_BU(ctx->r16, 0X14);
L_00414370:
    // 0x00414370: lwc1        $f1, 0x34($s2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r18, 0X34);
    // 0x00414374: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00414378: lwc1        $f0, 0xBE0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0XBE0);
    // 0x0041437C: lwc1        $f2, 0x30($s2)
    ctx->f2.u32l = MEM_W(ctx->r18, 0X30);
    // 0x00414380: lw          $a0, 0x48($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X48);
    // 0x00414384: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x00414388: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x0041438C: sw          $s3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r19;
    // 0x00414390: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00414394: lwc1        $f0, 0xBE4($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0XBE4);
    // 0x00414398: mul.s       $f2, $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f1.fl);
    // 0x0041439C: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    // 0x004143A0: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x004143A4: lw          $a1, 0x14($s4)
    ctx->r5 = MEM_W(ctx->r20, 0X14);
    // 0x004143A8: lw          $a2, 0x1C($s4)
    ctx->r6 = MEM_W(ctx->r20, 0X1C);
    // 0x004143AC: trunc.w.s   $f3, $f2
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 2);
    ctx->f_odd[(3 - 1) * 2] = TRUNC_W_S(ctx->f2.fl);
    // 0x004143B0: mfc1        $a3, $f3
    ctx->r7 = (int32_t)ctx->f_odd[(3 - 1) * 2];
    // 0x004143B4: jal         0x00278CDC
    // 0x004143B8: nop

    func_00278CDC(rdram, ctx);
        goto after_7;
    // 0x004143B8: nop

    after_7:
    // 0x004143BC: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x004143C0: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x004143C4: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x004143C8: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x004143CC: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x004143D0: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x004143D4: jr          $ra
    // 0x004143D8: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x004143D8: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void entry_004141B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004141B0: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x004141B4: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x004141B8: sw          $v0, 0x1BD0($at)
    MEM_W(0X1BD0, ctx->r1) = ctx->r2;
    // 0x004141BC: lh          $v1, 0x0($s2)
    ctx->r3 = MEM_H(ctx->r18, 0X0);
    // 0x004141C0: lw          $v0, 0x0($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X0);
    // 0x004141C4: bne         $v0, $v1, L_004141DC
    if (ctx->r2 != ctx->r3) {
        // 0x004141C8: lui         $v1, 0x100
        ctx->r3 = S32(0X100 << 16);
            goto L_004141DC;
    }
    // 0x004141C8: lui         $v1, 0x100
    ctx->r3 = S32(0X100 << 16);
    // 0x004141CC: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x004141D0: lwc1        $f1, 0xBCC($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0XBCC);
    // 0x004141D4: j           L_004141FC
    // 0x004141D8: nop

        goto L_004141FC;
    // 0x004141D8: nop

L_004141DC:
    // 0x004141DC: lw          $v0, 0x8($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X8);
    // 0x004141E0: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x004141E4: lwc1        $f1, 0xBD0($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0XBD0);
    // 0x004141E8: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x004141EC: bne         $v0, $zero, L_004141FC
    if (ctx->r2 != 0) {
        // 0x004141F0: nop
    
            goto L_004141FC;
    }
    // 0x004141F0: nop

    // 0x004141F4: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x004141F8: lwc1        $f1, 0xBD4($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0XBD4);
L_004141FC:
    // 0x004141FC: lbu         $v0, 0x15($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X15);
    // 0x00414200: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x00414204: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00414208: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0041420C: trunc.w.s   $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(3 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x00414210: mfc1        $v1, $f3
    ctx->r3 = (int32_t)ctx->f_odd[(3 - 1) * 2];
    // 0x00414214: slti        $v0, $v1, 0x100
    ctx->r2 = SIGNED(ctx->r3) < 0X100 ? 1 : 0;
    // 0x00414218: beq         $v0, $zero, L_00414224
    if (ctx->r2 == 0) {
        // 0x0041421C: addiu       $a0, $zero, 0xFF
        ctx->r4 = ADD32(0, 0XFF);
            goto L_00414224;
    }
    // 0x0041421C: addiu       $a0, $zero, 0xFF
    ctx->r4 = ADD32(0, 0XFF);
    // 0x00414220: addu        $a0, $v1, $zero
    ctx->r4 = ADD32(ctx->r3, 0);
L_00414224:
    // 0x00414224: lbu         $v0, 0x16($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X16);
    // 0x00414228: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x0041422C: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00414230: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00414234: trunc.w.s   $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(3 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x00414238: mfc1        $v1, $f3
    ctx->r3 = (int32_t)ctx->f_odd[(3 - 1) * 2];
    // 0x0041423C: slti        $v0, $v1, 0x100
    ctx->r2 = SIGNED(ctx->r3) < 0X100 ? 1 : 0;
    // 0x00414240: beq         $v0, $zero, L_0041424C
    if (ctx->r2 == 0) {
        // 0x00414244: addiu       $a1, $zero, 0xFF
        ctx->r5 = ADD32(0, 0XFF);
            goto L_0041424C;
    }
    // 0x00414244: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x00414248: addu        $a1, $v1, $zero
    ctx->r5 = ADD32(ctx->r3, 0);
L_0041424C:
    // 0x0041424C: lbu         $v0, 0x17($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X17);
    // 0x00414250: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x00414254: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00414258: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0041425C: trunc.w.s   $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(3 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x00414260: mfc1        $v1, $f3
    ctx->r3 = (int32_t)ctx->f_odd[(3 - 1) * 2];
    // 0x00414264: slti        $v0, $v1, 0x100
    ctx->r2 = SIGNED(ctx->r3) < 0X100 ? 1 : 0;
    // 0x00414268: beq         $v0, $zero, L_00414274
    if (ctx->r2 == 0) {
        // 0x0041426C: addiu       $a2, $zero, 0xFF
        ctx->r6 = ADD32(0, 0XFF);
            goto L_00414274;
    }
    // 0x0041426C: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x00414270: addu        $a2, $v1, $zero
    ctx->r6 = ADD32(ctx->r3, 0);
L_00414274:
    // 0x00414274: lbu         $v0, 0x18($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X18);
    // 0x00414278: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x0041427C: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00414280: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00414284: trunc.w.s   $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(3 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x00414288: mfc1        $v1, $f3
    ctx->r3 = (int32_t)ctx->f_odd[(3 - 1) * 2];
    // 0x0041428C: slti        $v0, $v1, 0x100
    ctx->r2 = SIGNED(ctx->r3) < 0X100 ? 1 : 0;
    // 0x00414290: beq         $v0, $zero, L_0041429C
    if (ctx->r2 == 0) {
        // 0x00414294: addiu       $a3, $zero, 0xFF
        ctx->r7 = ADD32(0, 0XFF);
            goto L_0041429C;
    }
    // 0x00414294: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    // 0x00414298: addu        $a3, $v1, $zero
    ctx->r7 = ADD32(ctx->r3, 0);
L_0041429C:
    // 0x0041429C: lbu         $v0, 0x19($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X19);
    // 0x004142A0: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x004142A4: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x004142A8: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x004142AC: trunc.w.s   $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(3 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x004142B0: mfc1        $v1, $f3
    ctx->r3 = (int32_t)ctx->f_odd[(3 - 1) * 2];
    // 0x004142B4: slti        $v0, $v1, 0x100
    ctx->r2 = SIGNED(ctx->r3) < 0X100 ? 1 : 0;
    // 0x004142B8: beq         $v0, $zero, L_004142C8
    if (ctx->r2 == 0) {
        // 0x004142BC: addiu       $v0, $zero, 0xFF
        ctx->r2 = ADD32(0, 0XFF);
            goto L_004142C8;
    }
    // 0x004142BC: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x004142C0: j           L_004142CC
    // 0x004142C4: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
        goto L_004142CC;
    // 0x004142C4: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
L_004142C8:
    // 0x004142C8: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
L_004142CC:
    // 0x004142CC: lbu         $v0, 0x1A($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X1A);
    // 0x004142D0: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x004142D4: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x004142D8: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x004142DC: trunc.w.s   $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(3 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x004142E0: mfc1        $v1, $f3
    ctx->r3 = (int32_t)ctx->f_odd[(3 - 1) * 2];
    // 0x004142E4: slti        $v0, $v1, 0x100
    ctx->r2 = SIGNED(ctx->r3) < 0X100 ? 1 : 0;
    // 0x004142E8: beq         $v0, $zero, L_004142F8
    if (ctx->r2 == 0) {
        // 0x004142EC: addiu       $v0, $zero, 0xFF
        ctx->r2 = ADD32(0, 0XFF);
            goto L_004142F8;
    }
    // 0x004142EC: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x004142F0: j           L_004142FC
    // 0x004142F4: sw          $v1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r3;
        goto L_004142FC;
    // 0x004142F4: sw          $v1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r3;
L_004142F8:
    // 0x004142F8: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
L_004142FC:
    // 0x004142FC: jal         0x0027B094
    // 0x00414300: nop

    func_0027B094(rdram, ctx);
        goto after_0;
    // 0x00414300: nop

    after_0:
    // 0x00414304: lbu         $v0, 0x14($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X14);
    // 0x00414308: lui         $v1, 0x8011
    ctx->r3 = S32(0X8011 << 16);
    // 0x0041430C: addiu       $v1, $v1, 0x1B0
    ctx->r3 = ADD32(ctx->r3, 0X1B0);
    // 0x00414310: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x00414314: lbu         $v0, 0x14($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X14);
    // 0x00414318: sw          $v0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r2;
    // 0x0041431C: lwc1        $f2, 0xC($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0XC);
    // 0x00414320: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00414324: lwc1        $f0, 0x2030($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X2030);
    // 0x00414328: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x0041432C: mul.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x00414330: lwc1        $f1, 0x10($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X10);
    // 0x00414334: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00414338: lwc1        $f0, 0x2034($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X2034);
    // 0x0041433C: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00414340: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x00414344: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00414348: lwc1        $f12, 0xBD8($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0XBD8);
    // 0x0041434C: mul.s       $f12, $f2, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = MUL_S(ctx->f2.fl, ctx->f12.fl);
    // 0x00414350: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00414354: lwc1        $f14, 0xBDC($at)
    ctx->f14.u32l = MEM_W(ctx->r1, 0XBDC);
    // 0x00414358: mul.s       $f14, $f1, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = MUL_S(ctx->f1.fl, ctx->f14.fl);
    // 0x0041435C: jal         0x0027B0C0
    // 0x00414360: nop

    func_0027B0C0(rdram, ctx);
        goto after_1;
    // 0x00414360: nop

    after_1:
    // 0x00414364: beq         $s3, $zero, L_00414370
    if (ctx->r19 == 0) {
        // 0x00414368: nop
    
            goto L_00414370;
    }
    // 0x00414368: nop

    // 0x0041436C: lbu         $s3, 0x14($s0)
    ctx->r19 = MEM_BU(ctx->r16, 0X14);
L_00414370:
    // 0x00414370: lwc1        $f1, 0x34($s2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r18, 0X34);
    // 0x00414374: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00414378: lwc1        $f0, 0xBE0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0XBE0);
    // 0x0041437C: lwc1        $f2, 0x30($s2)
    ctx->f2.u32l = MEM_W(ctx->r18, 0X30);
    // 0x00414380: lw          $a0, 0x48($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X48);
    // 0x00414384: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x00414388: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x0041438C: sw          $s3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r19;
    // 0x00414390: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00414394: lwc1        $f0, 0xBE4($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0XBE4);
    // 0x00414398: mul.s       $f2, $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f1.fl);
    // 0x0041439C: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    // 0x004143A0: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x004143A4: lw          $a1, 0x14($s4)
    ctx->r5 = MEM_W(ctx->r20, 0X14);
    // 0x004143A8: lw          $a2, 0x1C($s4)
    ctx->r6 = MEM_W(ctx->r20, 0X1C);
    // 0x004143AC: trunc.w.s   $f3, $f2
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 2);
    ctx->f_odd[(3 - 1) * 2] = TRUNC_W_S(ctx->f2.fl);
    // 0x004143B0: mfc1        $a3, $f3
    ctx->r7 = (int32_t)ctx->f_odd[(3 - 1) * 2];
    // 0x004143B4: jal         0x00278CDC
    // 0x004143B8: nop

    func_00278CDC(rdram, ctx);
        goto after_2;
    // 0x004143B8: nop

    after_2:
    // 0x004143BC: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x004143C0: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x004143C4: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x004143C8: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x004143CC: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x004143D0: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x004143D4: jr          $ra
    // 0x004143D8: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x004143D8: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void entry_004141FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004141FC: lbu         $v0, 0x15($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X15);
    // 0x00414200: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x00414204: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00414208: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0041420C: trunc.w.s   $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(3 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x00414210: mfc1        $v1, $f3
    ctx->r3 = (int32_t)ctx->f_odd[(3 - 1) * 2];
    // 0x00414214: slti        $v0, $v1, 0x100
    ctx->r2 = SIGNED(ctx->r3) < 0X100 ? 1 : 0;
    // 0x00414218: beq         $v0, $zero, L_00414224
    if (ctx->r2 == 0) {
        // 0x0041421C: addiu       $a0, $zero, 0xFF
        ctx->r4 = ADD32(0, 0XFF);
            goto L_00414224;
    }
    // 0x0041421C: addiu       $a0, $zero, 0xFF
    ctx->r4 = ADD32(0, 0XFF);
    // 0x00414220: addu        $a0, $v1, $zero
    ctx->r4 = ADD32(ctx->r3, 0);
L_00414224:
    // 0x00414224: lbu         $v0, 0x16($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X16);
    // 0x00414228: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x0041422C: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00414230: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00414234: trunc.w.s   $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(3 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x00414238: mfc1        $v1, $f3
    ctx->r3 = (int32_t)ctx->f_odd[(3 - 1) * 2];
    // 0x0041423C: slti        $v0, $v1, 0x100
    ctx->r2 = SIGNED(ctx->r3) < 0X100 ? 1 : 0;
    // 0x00414240: beq         $v0, $zero, L_0041424C
    if (ctx->r2 == 0) {
        // 0x00414244: addiu       $a1, $zero, 0xFF
        ctx->r5 = ADD32(0, 0XFF);
            goto L_0041424C;
    }
    // 0x00414244: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x00414248: addu        $a1, $v1, $zero
    ctx->r5 = ADD32(ctx->r3, 0);
L_0041424C:
    // 0x0041424C: lbu         $v0, 0x17($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X17);
    // 0x00414250: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x00414254: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00414258: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0041425C: trunc.w.s   $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(3 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x00414260: mfc1        $v1, $f3
    ctx->r3 = (int32_t)ctx->f_odd[(3 - 1) * 2];
    // 0x00414264: slti        $v0, $v1, 0x100
    ctx->r2 = SIGNED(ctx->r3) < 0X100 ? 1 : 0;
    // 0x00414268: beq         $v0, $zero, L_00414274
    if (ctx->r2 == 0) {
        // 0x0041426C: addiu       $a2, $zero, 0xFF
        ctx->r6 = ADD32(0, 0XFF);
            goto L_00414274;
    }
    // 0x0041426C: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x00414270: addu        $a2, $v1, $zero
    ctx->r6 = ADD32(ctx->r3, 0);
L_00414274:
    // 0x00414274: lbu         $v0, 0x18($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X18);
    // 0x00414278: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x0041427C: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00414280: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00414284: trunc.w.s   $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(3 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x00414288: mfc1        $v1, $f3
    ctx->r3 = (int32_t)ctx->f_odd[(3 - 1) * 2];
    // 0x0041428C: slti        $v0, $v1, 0x100
    ctx->r2 = SIGNED(ctx->r3) < 0X100 ? 1 : 0;
    // 0x00414290: beq         $v0, $zero, L_0041429C
    if (ctx->r2 == 0) {
        // 0x00414294: addiu       $a3, $zero, 0xFF
        ctx->r7 = ADD32(0, 0XFF);
            goto L_0041429C;
    }
    // 0x00414294: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    // 0x00414298: addu        $a3, $v1, $zero
    ctx->r7 = ADD32(ctx->r3, 0);
L_0041429C:
    // 0x0041429C: lbu         $v0, 0x19($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X19);
    // 0x004142A0: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x004142A4: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x004142A8: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x004142AC: trunc.w.s   $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(3 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x004142B0: mfc1        $v1, $f3
    ctx->r3 = (int32_t)ctx->f_odd[(3 - 1) * 2];
    // 0x004142B4: slti        $v0, $v1, 0x100
    ctx->r2 = SIGNED(ctx->r3) < 0X100 ? 1 : 0;
    // 0x004142B8: beq         $v0, $zero, L_004142C8
    if (ctx->r2 == 0) {
        // 0x004142BC: addiu       $v0, $zero, 0xFF
        ctx->r2 = ADD32(0, 0XFF);
            goto L_004142C8;
    }
    // 0x004142BC: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x004142C0: j           L_004142CC
    // 0x004142C4: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
        goto L_004142CC;
    // 0x004142C4: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
L_004142C8:
    // 0x004142C8: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
L_004142CC:
    // 0x004142CC: lbu         $v0, 0x1A($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X1A);
    // 0x004142D0: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x004142D4: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x004142D8: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x004142DC: trunc.w.s   $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(3 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x004142E0: mfc1        $v1, $f3
    ctx->r3 = (int32_t)ctx->f_odd[(3 - 1) * 2];
    // 0x004142E4: slti        $v0, $v1, 0x100
    ctx->r2 = SIGNED(ctx->r3) < 0X100 ? 1 : 0;
    // 0x004142E8: beq         $v0, $zero, L_004142F8
    if (ctx->r2 == 0) {
        // 0x004142EC: addiu       $v0, $zero, 0xFF
        ctx->r2 = ADD32(0, 0XFF);
            goto L_004142F8;
    }
    // 0x004142EC: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x004142F0: j           L_004142FC
    // 0x004142F4: sw          $v1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r3;
        goto L_004142FC;
    // 0x004142F4: sw          $v1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r3;
L_004142F8:
    // 0x004142F8: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
L_004142FC:
    // 0x004142FC: jal         0x0027B094
    // 0x00414300: nop

    func_0027B094(rdram, ctx);
        goto after_0;
    // 0x00414300: nop

    after_0:
    // 0x00414304: lbu         $v0, 0x14($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X14);
    // 0x00414308: lui         $v1, 0x8011
    ctx->r3 = S32(0X8011 << 16);
    // 0x0041430C: addiu       $v1, $v1, 0x1B0
    ctx->r3 = ADD32(ctx->r3, 0X1B0);
    // 0x00414310: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x00414314: lbu         $v0, 0x14($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X14);
    // 0x00414318: sw          $v0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r2;
    // 0x0041431C: lwc1        $f2, 0xC($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0XC);
    // 0x00414320: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00414324: lwc1        $f0, 0x2030($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X2030);
    // 0x00414328: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x0041432C: mul.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x00414330: lwc1        $f1, 0x10($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X10);
    // 0x00414334: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00414338: lwc1        $f0, 0x2034($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X2034);
    // 0x0041433C: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00414340: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x00414344: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00414348: lwc1        $f12, 0xBD8($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0XBD8);
    // 0x0041434C: mul.s       $f12, $f2, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = MUL_S(ctx->f2.fl, ctx->f12.fl);
    // 0x00414350: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00414354: lwc1        $f14, 0xBDC($at)
    ctx->f14.u32l = MEM_W(ctx->r1, 0XBDC);
    // 0x00414358: mul.s       $f14, $f1, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = MUL_S(ctx->f1.fl, ctx->f14.fl);
    // 0x0041435C: jal         0x0027B0C0
    // 0x00414360: nop

    func_0027B0C0(rdram, ctx);
        goto after_1;
    // 0x00414360: nop

    after_1:
    // 0x00414364: beq         $s3, $zero, L_00414370
    if (ctx->r19 == 0) {
        // 0x00414368: nop
    
            goto L_00414370;
    }
    // 0x00414368: nop

    // 0x0041436C: lbu         $s3, 0x14($s0)
    ctx->r19 = MEM_BU(ctx->r16, 0X14);
L_00414370:
    // 0x00414370: lwc1        $f1, 0x34($s2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r18, 0X34);
    // 0x00414374: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00414378: lwc1        $f0, 0xBE0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0XBE0);
    // 0x0041437C: lwc1        $f2, 0x30($s2)
    ctx->f2.u32l = MEM_W(ctx->r18, 0X30);
    // 0x00414380: lw          $a0, 0x48($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X48);
    // 0x00414384: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x00414388: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x0041438C: sw          $s3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r19;
    // 0x00414390: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00414394: lwc1        $f0, 0xBE4($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0XBE4);
    // 0x00414398: mul.s       $f2, $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f1.fl);
    // 0x0041439C: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    // 0x004143A0: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x004143A4: lw          $a1, 0x14($s4)
    ctx->r5 = MEM_W(ctx->r20, 0X14);
    // 0x004143A8: lw          $a2, 0x1C($s4)
    ctx->r6 = MEM_W(ctx->r20, 0X1C);
    // 0x004143AC: trunc.w.s   $f3, $f2
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 2);
    ctx->f_odd[(3 - 1) * 2] = TRUNC_W_S(ctx->f2.fl);
    // 0x004143B0: mfc1        $a3, $f3
    ctx->r7 = (int32_t)ctx->f_odd[(3 - 1) * 2];
    // 0x004143B4: jal         0x00278CDC
    // 0x004143B8: nop

    func_00278CDC(rdram, ctx);
        goto after_2;
    // 0x004143B8: nop

    after_2:
    // 0x004143BC: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x004143C0: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x004143C4: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x004143C8: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x004143CC: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x004143D0: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x004143D4: jr          $ra
    // 0x004143D8: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x004143D8: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void entry_004142CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004142CC: lbu         $v0, 0x1A($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X1A);
    // 0x004142D0: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x004142D4: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x004142D8: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x004142DC: trunc.w.s   $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(3 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x004142E0: mfc1        $v1, $f3
    ctx->r3 = (int32_t)ctx->f_odd[(3 - 1) * 2];
    // 0x004142E4: slti        $v0, $v1, 0x100
    ctx->r2 = SIGNED(ctx->r3) < 0X100 ? 1 : 0;
    // 0x004142E8: beq         $v0, $zero, L_004142F8
    if (ctx->r2 == 0) {
        // 0x004142EC: addiu       $v0, $zero, 0xFF
        ctx->r2 = ADD32(0, 0XFF);
            goto L_004142F8;
    }
    // 0x004142EC: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x004142F0: j           L_004142FC
    // 0x004142F4: sw          $v1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r3;
        goto L_004142FC;
    // 0x004142F4: sw          $v1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r3;
L_004142F8:
    // 0x004142F8: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
L_004142FC:
    // 0x004142FC: jal         0x0027B094
    // 0x00414300: nop

    func_0027B094(rdram, ctx);
        goto after_0;
    // 0x00414300: nop

    after_0:
    // 0x00414304: lbu         $v0, 0x14($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X14);
    // 0x00414308: lui         $v1, 0x8011
    ctx->r3 = S32(0X8011 << 16);
    // 0x0041430C: addiu       $v1, $v1, 0x1B0
    ctx->r3 = ADD32(ctx->r3, 0X1B0);
    // 0x00414310: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x00414314: lbu         $v0, 0x14($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X14);
    // 0x00414318: sw          $v0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r2;
    // 0x0041431C: lwc1        $f2, 0xC($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0XC);
    // 0x00414320: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00414324: lwc1        $f0, 0x2030($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X2030);
    // 0x00414328: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x0041432C: mul.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x00414330: lwc1        $f1, 0x10($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X10);
    // 0x00414334: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00414338: lwc1        $f0, 0x2034($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X2034);
    // 0x0041433C: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00414340: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x00414344: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00414348: lwc1        $f12, 0xBD8($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0XBD8);
    // 0x0041434C: mul.s       $f12, $f2, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = MUL_S(ctx->f2.fl, ctx->f12.fl);
    // 0x00414350: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00414354: lwc1        $f14, 0xBDC($at)
    ctx->f14.u32l = MEM_W(ctx->r1, 0XBDC);
    // 0x00414358: mul.s       $f14, $f1, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = MUL_S(ctx->f1.fl, ctx->f14.fl);
    // 0x0041435C: jal         0x0027B0C0
    // 0x00414360: nop

    func_0027B0C0(rdram, ctx);
        goto after_1;
    // 0x00414360: nop

    after_1:
    // 0x00414364: beq         $s3, $zero, L_00414370
    if (ctx->r19 == 0) {
        // 0x00414368: nop
    
            goto L_00414370;
    }
    // 0x00414368: nop

    // 0x0041436C: lbu         $s3, 0x14($s0)
    ctx->r19 = MEM_BU(ctx->r16, 0X14);
L_00414370:
    // 0x00414370: lwc1        $f1, 0x34($s2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r18, 0X34);
    // 0x00414374: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00414378: lwc1        $f0, 0xBE0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0XBE0);
    // 0x0041437C: lwc1        $f2, 0x30($s2)
    ctx->f2.u32l = MEM_W(ctx->r18, 0X30);
    // 0x00414380: lw          $a0, 0x48($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X48);
    // 0x00414384: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x00414388: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x0041438C: sw          $s3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r19;
    // 0x00414390: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00414394: lwc1        $f0, 0xBE4($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0XBE4);
    // 0x00414398: mul.s       $f2, $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f1.fl);
    // 0x0041439C: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    // 0x004143A0: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x004143A4: lw          $a1, 0x14($s4)
    ctx->r5 = MEM_W(ctx->r20, 0X14);
    // 0x004143A8: lw          $a2, 0x1C($s4)
    ctx->r6 = MEM_W(ctx->r20, 0X1C);
    // 0x004143AC: trunc.w.s   $f3, $f2
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 2);
    ctx->f_odd[(3 - 1) * 2] = TRUNC_W_S(ctx->f2.fl);
    // 0x004143B0: mfc1        $a3, $f3
    ctx->r7 = (int32_t)ctx->f_odd[(3 - 1) * 2];
    // 0x004143B4: jal         0x00278CDC
    // 0x004143B8: nop

    func_00278CDC(rdram, ctx);
        goto after_2;
    // 0x004143B8: nop

    after_2:
    // 0x004143BC: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x004143C0: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x004143C4: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x004143C8: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x004143CC: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x004143D0: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x004143D4: jr          $ra
    // 0x004143D8: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x004143D8: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void entry_004142FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004142FC: jal         0x0027B094
    // 0x00414300: nop

    func_0027B094(rdram, ctx);
        goto after_0;
    // 0x00414300: nop

    after_0:
    // 0x00414304: lbu         $v0, 0x14($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X14);
    // 0x00414308: lui         $v1, 0x8011
    ctx->r3 = S32(0X8011 << 16);
    // 0x0041430C: addiu       $v1, $v1, 0x1B0
    ctx->r3 = ADD32(ctx->r3, 0X1B0);
    // 0x00414310: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x00414314: lbu         $v0, 0x14($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X14);
    // 0x00414318: sw          $v0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r2;
    // 0x0041431C: lwc1        $f2, 0xC($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0XC);
    // 0x00414320: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00414324: lwc1        $f0, 0x2030($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X2030);
    // 0x00414328: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x0041432C: mul.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x00414330: lwc1        $f1, 0x10($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X10);
    // 0x00414334: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00414338: lwc1        $f0, 0x2034($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X2034);
    // 0x0041433C: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00414340: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x00414344: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00414348: lwc1        $f12, 0xBD8($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0XBD8);
    // 0x0041434C: mul.s       $f12, $f2, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = MUL_S(ctx->f2.fl, ctx->f12.fl);
    // 0x00414350: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00414354: lwc1        $f14, 0xBDC($at)
    ctx->f14.u32l = MEM_W(ctx->r1, 0XBDC);
    // 0x00414358: mul.s       $f14, $f1, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = MUL_S(ctx->f1.fl, ctx->f14.fl);
    // 0x0041435C: jal         0x0027B0C0
    // 0x00414360: nop

    func_0027B0C0(rdram, ctx);
        goto after_1;
    // 0x00414360: nop

    after_1:
    // 0x00414364: beq         $s3, $zero, L_00414370
    if (ctx->r19 == 0) {
        // 0x00414368: nop
    
            goto L_00414370;
    }
    // 0x00414368: nop

    // 0x0041436C: lbu         $s3, 0x14($s0)
    ctx->r19 = MEM_BU(ctx->r16, 0X14);
L_00414370:
    // 0x00414370: lwc1        $f1, 0x34($s2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r18, 0X34);
    // 0x00414374: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00414378: lwc1        $f0, 0xBE0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0XBE0);
    // 0x0041437C: lwc1        $f2, 0x30($s2)
    ctx->f2.u32l = MEM_W(ctx->r18, 0X30);
    // 0x00414380: lw          $a0, 0x48($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X48);
    // 0x00414384: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x00414388: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x0041438C: sw          $s3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r19;
    // 0x00414390: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00414394: lwc1        $f0, 0xBE4($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0XBE4);
    // 0x00414398: mul.s       $f2, $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f1.fl);
    // 0x0041439C: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    // 0x004143A0: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x004143A4: lw          $a1, 0x14($s4)
    ctx->r5 = MEM_W(ctx->r20, 0X14);
    // 0x004143A8: lw          $a2, 0x1C($s4)
    ctx->r6 = MEM_W(ctx->r20, 0X1C);
    // 0x004143AC: trunc.w.s   $f3, $f2
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 2);
    ctx->f_odd[(3 - 1) * 2] = TRUNC_W_S(ctx->f2.fl);
    // 0x004143B0: mfc1        $a3, $f3
    ctx->r7 = (int32_t)ctx->f_odd[(3 - 1) * 2];
    // 0x004143B4: jal         0x00278CDC
    // 0x004143B8: nop

    func_00278CDC(rdram, ctx);
        goto after_2;
    // 0x004143B8: nop

    after_2:
    // 0x004143BC: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x004143C0: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x004143C4: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x004143C8: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x004143CC: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x004143D0: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x004143D4: jr          $ra
    // 0x004143D8: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x004143D8: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void entry_004144E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004144E4: trunc.w.s   $f4, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    ctx->f4.u32l = TRUNC_W_S(ctx->f2.fl);
    // 0x004144E8: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x004144EC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x004144F0: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x004144F4: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x004144F8: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x004144FC: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x00414500: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x00414504: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    // 0x00414508: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x0041450C: lw          $a1, 0x1C($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X1C);
    // 0x00414510: trunc.w.s   $f4, $f3
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 3);
    ctx->f4.u32l = TRUNC_W_S(ctx->f3.fl);
    // 0x00414514: mfc1        $a3, $f4
    ctx->r7 = (int32_t)ctx->f4.u32l;
    // 0x00414518: jal         0x002778A8
    // 0x0041451C: nop

    func_002778A8(rdram, ctx);
        goto after_0;
    // 0x0041451C: nop

    after_0:
    // 0x00414520: j           L_00414598
    // 0x00414524: nop

        goto L_00414598;
    // 0x00414524: nop

    // 0x00414528: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x0041452C: lw          $v0, 0x1BD0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1BD0);
    // 0x00414530: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
    // 0x00414534: beq         $v0, $v1, L_0041456C
    if (ctx->r2 == ctx->r3) {
        // 0x00414538: nop
    
            goto L_0041456C;
    }
    // 0x00414538: nop

    // 0x0041453C: lwc1        $f1, 0x34($s1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r17, 0X34);
    // 0x00414540: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00414544: lwc1        $f0, 0xBE8($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0XBE8);
    // 0x00414548: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x0041454C: lwc1        $f0, 0x30($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X30);
    // 0x00414550: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00414554: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00414558: sw          $v1, 0x1BD0($at)
    MEM_W(0X1BD0, ctx->r1) = ctx->r3;
    // 0x0041455C: trunc.w.s   $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x00414560: mfc1        $a0, $f4
    ctx->r4 = (int32_t)ctx->f4.u32l;
    // 0x00414564: jal         0x00279028
    // 0x00414568: nop

    func_00279028(rdram, ctx);
        goto after_1;
    // 0x00414568: nop

    after_1:
L_0041456C:
    // 0x0041456C: lwc1        $f0, 0xC($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0XC);
    // 0x00414570: lh          $a2, 0x16($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X16);
    // 0x00414574: lh          $a3, 0x1E($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X1E);
    // 0x00414578: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    // 0x0041457C: lwc1        $f0, 0x10($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X10);
    // 0x00414580: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00414584: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x00414588: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    // 0x0041458C: lw          $a0, 0x14($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X14);
    // 0x00414590: jal         0x0027B320
    // 0x00414594: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_0027B320(rdram, ctx);
        goto after_2;
    // 0x00414594: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_2:
L_00414598:
    // 0x00414598: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x0041459C: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x004145A0: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x004145A4: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x004145A8: jr          $ra
    // 0x004145AC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x004145AC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void entry_00414598(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00414598: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x0041459C: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x004145A0: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x004145A4: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x004145A8: jr          $ra
    // 0x004145AC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x004145AC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void entry_00414AF8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00414AF8: lw          $t1, 0xC($s4)
    ctx->r9 = MEM_W(ctx->r20, 0XC);
    // 0x00414AFC: lw          $t2, 0x10($s4)
    ctx->r10 = MEM_W(ctx->r20, 0X10);
    // 0x00414B00: lw          $t3, 0x14($s4)
    ctx->r11 = MEM_W(ctx->r20, 0X14);
    // 0x00414B04: sw          $t1, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r9;
    // 0x00414B08: sw          $t2, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r10;
    // 0x00414B0C: sw          $t3, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r11;
    // 0x00414B10: lwc1        $f1, 0x32C($s6)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r22, 0X32C);
    // 0x00414B14: lwc1        $f0, 0x84($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X84);
    // 0x00414B18: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x00414B1C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00414B20: lwc1        $f0, 0xBF0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0XBF0);
    // 0x00414B24: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x00414B28: lwc1        $f0, 0x64($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X64);
    // 0x00414B2C: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x00414B30: addiu       $a1, $sp, 0x60
    ctx->r5 = ADD32(ctx->r29, 0X60);
    // 0x00414B34: swc1        $f0, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f0.u32l;
    // 0x00414B38: lw          $a0, 0x40($s7)
    ctx->r4 = MEM_W(ctx->r23, 0X40);
    // 0x00414B3C: addiu       $a2, $sp, 0x70
    ctx->r6 = ADD32(ctx->r29, 0X70);
    // 0x00414B40: jal         0x0020F85C
    // 0x00414B44: addiu       $a0, $a0, 0x14C
    ctx->r4 = ADD32(ctx->r4, 0X14C);
    func_0020F85C(rdram, ctx);
        goto after_0;
    // 0x00414B44: addiu       $a0, $a0, 0x14C
    ctx->r4 = ADD32(ctx->r4, 0X14C);
    after_0:
    // 0x00414B48: beq         $s3, $zero, L_00414C00
    if (ctx->r19 == 0) {
        // 0x00414B4C: lui         $s0, 0x200
        ctx->r16 = S32(0X200 << 16);
            goto L_00414C00;
    }
    // 0x00414B4C: lui         $s0, 0x200
    ctx->r16 = S32(0X200 << 16);
    // 0x00414B50: lw          $v0, 0x8($s5)
    ctx->r2 = MEM_W(ctx->r21, 0X8);
    // 0x00414B54: and         $v0, $v0, $s0
    ctx->r2 = ctx->r2 & ctx->r16;
    // 0x00414B58: bne         $v0, $zero, L_00414C00
    if (ctx->r2 != 0) {
        // 0x00414B5C: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_00414C00;
    }
    // 0x00414B5C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x00414B60: sw          $s3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r19;
    // 0x00414B64: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x00414B68: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x00414B6C: lw          $v0, 0x40($s7)
    ctx->r2 = MEM_W(ctx->r23, 0X40);
    // 0x00414B70: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00414B74: lwc1        $f0, 0xBF4($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0XBF4);
    // 0x00414B78: lwc1        $f1, 0x28($v0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r2, 0X28);
    // 0x00414B7C: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x00414B80: lui         $a3, 0x800B
    ctx->r7 = S32(0X800B << 16);
    // 0x00414B84: lw          $a3, 0x6D00($a3)
    ctx->r7 = MEM_W(ctx->r7, 0X6D00);
    // 0x00414B88: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x00414B8C: swc1        $f1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    // 0x00414B90: lw          $t1, 0x70($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X70);
    // 0x00414B94: lw          $t2, 0x74($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X74);
    // 0x00414B98: lw          $t3, 0x78($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X78);
    // 0x00414B9C: sw          $t1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r9;
    // 0x00414BA0: sw          $t2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r10;
    // 0x00414BA4: sw          $t3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r11;
    // 0x00414BA8: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
    // 0x00414BAC: lw          $t1, 0x18($s4)
    ctx->r9 = MEM_W(ctx->r20, 0X18);
    // 0x00414BB0: lw          $t2, 0x1C($s4)
    ctx->r10 = MEM_W(ctx->r20, 0X1C);
    // 0x00414BB4: lw          $t3, 0x20($s4)
    ctx->r11 = MEM_W(ctx->r20, 0X20);
    // 0x00414BB8: sw          $t1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r9;
    // 0x00414BBC: sw          $t2, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r10;
    // 0x00414BC0: sw          $t3, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r11;
    // 0x00414BC4: lw          $t1, 0x50($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X50);
    // 0x00414BC8: lw          $t2, 0x54($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X54);
    // 0x00414BCC: lw          $t3, 0x58($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X58);
    // 0x00414BD0: sw          $t1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r9;
    // 0x00414BD4: sw          $t2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r10;
    // 0x00414BD8: sw          $t3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r11;
    // 0x00414BDC: sw          $zero, 0x48($sp)
    MEM_W(0X48, ctx->r29) = 0;
    // 0x00414BE0: lw          $a2, 0x0($s4)
    ctx->r6 = MEM_W(ctx->r20, 0X0);
    // 0x00414BE4: jal         0x00219BC0
    // 0x00414BE8: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    func_00219BC0(rdram, ctx);
        goto after_1;
    // 0x00414BE8: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    after_1:
    // 0x00414BEC: jal         0x0021E5D4
    // 0x00414BF0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_0021E5D4(rdram, ctx);
        goto after_2;
    // 0x00414BF0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_2:
    // 0x00414BF4: lw          $v0, 0x8($s5)
    ctx->r2 = MEM_W(ctx->r21, 0X8);
    // 0x00414BF8: or          $v0, $v0, $s0
    ctx->r2 = ctx->r2 | ctx->r16;
    // 0x00414BFC: sw          $v0, 0x8($s5)
    MEM_W(0X8, ctx->r21) = ctx->r2;
L_00414C00:
    // 0x00414C00: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x00414C04: lw          $v1, 0x6D20($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X6D20);
    // 0x00414C08: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x00414C0C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x00414C10: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x00414C14: mtc1        $v0, $f12
    ctx->f12.u32l = ctx->r2;
    // 0x00414C18: cvt.d.w     $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    ctx->f12.d = CVT_D_W(ctx->f12.u32l);
    // 0x00414C1C: bgez        $v0, L_00414C30
    if (SIGNED(ctx->r2) >= 0) {
        // 0x00414C20: nop
    
            goto L_00414C30;
    }
    // 0x00414C20: nop

    // 0x00414C24: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00414C28: ldc1        $f0, 0xBF8($at)
    CHECK_FR(ctx, 0);
    ctx->f0.u64 = LD(ctx->r1, 0XBF8);
    // 0x00414C2C: add.d       $f12, $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.d); NAN_CHECK(ctx->f0.d); 
    ctx->f12.d = ctx->f12.d + ctx->f0.d;
L_00414C30:
    // 0x00414C30: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00414C34: lwc1        $f0, 0xC00($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0XC00);
    // 0x00414C38: cvt.s.d     $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.d); 
    ctx->f12.fl = CVT_S_D(ctx->f12.d);
    // 0x00414C3C: mul.s       $f12, $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = MUL_S(ctx->f12.fl, ctx->f0.fl);
    // 0x00414C40: jal         0x002982F0
    // 0x00414C44: nop

    func_002982F0(rdram, ctx);
        goto after_3;
    // 0x00414C44: nop

    after_3:
    // 0x00414C48: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00414C4C: lwc1        $f1, 0xC04($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0XC04);
    // 0x00414C50: lwc1        $f2, 0x30($s7)
    ctx->f2.u32l = MEM_W(ctx->r23, 0X30);
    // 0x00414C54: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x00414C58: lwc1        $f1, 0x34($s7)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r23, 0X34);
    // 0x00414C5C: mul.s       $f2, $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f1.fl);
    // 0x00414C60: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00414C64: lwc1        $f3, 0xC08($at)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r1, 0XC08);
    // 0x00414C68: mul.s       $f0, $f0, $f3
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f3.fl);
    // 0x00414C6C: add.s       $f0, $f0, $f3
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f3.fl;
    // 0x00414C70: mul.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x00414C74: lh          $v1, 0x0($s7)
    ctx->r3 = MEM_H(ctx->r23, 0X0);
    // 0x00414C78: lw          $v0, 0x0($fp)
    ctx->r2 = MEM_W(ctx->r30, 0X0);
    // 0x00414C7C: trunc.w.s   $f4, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    ctx->f4.u32l = TRUNC_W_S(ctx->f2.fl);
    // 0x00414C80: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x00414C84: swc1        $f4, 0x8E0($at)
    MEM_W(0X8E0, ctx->r1) = ctx->f4.u32l;
    // 0x00414C88: bne         $v1, $v0, L_00414CA0
    if (ctx->r3 != ctx->r2) {
        // 0x00414C8C: nop
    
            goto L_00414CA0;
    }
    // 0x00414C8C: nop

    // 0x00414C90: lui         $v0, 0x41
    ctx->r2 = S32(0X41 << 16);
    // 0x00414C94: addiu       $v0, $v0, 0x71F4
    ctx->r2 = ADD32(ctx->r2, 0X71F4);
    // 0x00414C98: j           L_00414CA8
    // 0x00414C9C: nop

        goto L_00414CA8;
    // 0x00414C9C: nop

L_00414CA0:
    // 0x00414CA0: lui         $v0, 0x41
    ctx->r2 = S32(0X41 << 16);
    // 0x00414CA4: addiu       $v0, $v0, 0x71D0
    ctx->r2 = ADD32(ctx->r2, 0X71D0);
L_00414CA8:
    // 0x00414CA8: jal         0x00206078
    // 0x00414CAC: sw          $v0, 0x234($s1)
    MEM_W(0X234, ctx->r17) = ctx->r2;
    func_00206078(rdram, ctx);
        goto after_4;
    // 0x00414CAC: sw          $v0, 0x234($s1)
    MEM_W(0X234, ctx->r17) = ctx->r2;
    after_4:
    // 0x00414CB0: bne         $v0, $zero, L_00414CC0
    if (ctx->r2 != 0) {
        // 0x00414CB4: nop
    
            goto L_00414CC0;
    }
    // 0x00414CB4: nop

    // 0x00414CB8: jal         0x00206068
    // 0x00414CBC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_00206068(rdram, ctx);
        goto after_5;
    // 0x00414CBC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_5:
L_00414CC0:
    // 0x00414CC0: lw          $v1, 0x0($s6)
    ctx->r3 = MEM_W(ctx->r22, 0X0);
    // 0x00414CC4: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
    // 0x00414CC8: bne         $v1, $v0, L_00414CF8
    if (ctx->r3 != ctx->r2) {
        // 0x00414CCC: addu        $a1, $s1, $zero
        ctx->r5 = ADD32(ctx->r17, 0);
            goto L_00414CF8;
    }
    // 0x00414CCC: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x00414CD0: lw          $v0, 0x14($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X14);
    // 0x00414CD4: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x00414CD8: addiu       $a0, $a0, 0x7078
    ctx->r4 = ADD32(ctx->r4, 0X7078);
    // 0x00414CDC: lh          $v0, 0xC($v0)
    ctx->r2 = MEM_H(ctx->r2, 0XC);
    // 0x00414CE0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x00414CE4: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00414CE8: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x00414CEC: lw          $a2, -0x24D0($at)
    ctx->r6 = MEM_W(ctx->r1, -0X24D0);
    // 0x00414CF0: jal         0x002241D8
    // 0x00414CF4: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_002241D8(rdram, ctx);
        goto after_6;
    // 0x00414CF4: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_6:
L_00414CF8:
    // 0x00414CF8: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x00414CFC: lw          $v0, 0x1BD0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1BD0);
    // 0x00414D00: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x00414D04: beq         $v0, $a0, L_00414D88
    if (ctx->r2 == ctx->r4) {
        // 0x00414D08: lui         $a2, 0xE300
        ctx->r6 = S32(0XE300 << 16);
            goto L_00414D88;
    }
    // 0x00414D08: lui         $a2, 0xE300
    ctx->r6 = S32(0XE300 << 16);
    // 0x00414D0C: ori         $a2, $a2, 0xA01
    ctx->r6 = ctx->r6 | 0XA01;
    // 0x00414D10: lui         $a3, 0xE300
    ctx->r7 = S32(0XE300 << 16);
    // 0x00414D14: ori         $a3, $a3, 0xC00
    ctx->r7 = ctx->r7 | 0XC00;
    // 0x00414D18: lui         $t0, 0xE300
    ctx->r8 = S32(0XE300 << 16);
    // 0x00414D1C: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x00414D20: addiu       $a1, $a1, -0x71DC
    ctx->r5 = ADD32(ctx->r5, -0X71DC);
    // 0x00414D24: ori         $t0, $t0, 0x1201
    ctx->r8 = ctx->r8 | 0X1201;
    // 0x00414D28: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x00414D2C: lui         $v0, 0xE700
    ctx->r2 = S32(0XE700 << 16);
    // 0x00414D30: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00414D34: sw          $a0, 0x1BD0($at)
    MEM_W(0X1BD0, ctx->r1) = ctx->r4;
    // 0x00414D38: addu        $a0, $v1, $zero
    ctx->r4 = ADD32(ctx->r3, 0);
    // 0x00414D3C: addiu       $v1, $v1, 0x8
    ctx->r3 = ADD32(ctx->r3, 0X8);
    // 0x00414D40: sw          $v1, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r3;
    // 0x00414D44: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
    // 0x00414D48: sw          $zero, 0x4($a0)
    MEM_W(0X4, ctx->r4) = 0;
    // 0x00414D4C: addiu       $a0, $v1, 0x8
    ctx->r4 = ADD32(ctx->r3, 0X8);
    // 0x00414D50: lui         $v0, 0x10
    ctx->r2 = S32(0X10 << 16);
    // 0x00414D54: sw          $a0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r4;
    // 0x00414D58: sw          $a2, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r6;
    // 0x00414D5C: addiu       $a2, $v1, 0x10
    ctx->r6 = ADD32(ctx->r3, 0X10);
    // 0x00414D60: sw          $v0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r2;
    // 0x00414D64: lui         $v0, 0x8
    ctx->r2 = S32(0X8 << 16);
    // 0x00414D68: sw          $a2, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r6;
    // 0x00414D6C: sw          $a3, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r7;
    // 0x00414D70: sw          $v0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r2;
    // 0x00414D74: addiu       $v0, $v1, 0x18
    ctx->r2 = ADD32(ctx->r3, 0X18);
    // 0x00414D78: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
    // 0x00414D7C: addiu       $v0, $zero, 0x2000
    ctx->r2 = ADD32(0, 0X2000);
    // 0x00414D80: sw          $t0, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->r8;
    // 0x00414D84: sw          $v0, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r2;
L_00414D88:
    // 0x00414D88: lw          $t1, 0x80($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X80);
    // 0x00414D8C: lw          $t2, 0x84($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X84);
    // 0x00414D90: lw          $t3, 0x88($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X88);
    // 0x00414D94: sw          $t1, 0x34($s1)
    MEM_W(0X34, ctx->r17) = ctx->r9;
    // 0x00414D98: sw          $t2, 0x38($s1)
    MEM_W(0X38, ctx->r17) = ctx->r10;
    // 0x00414D9C: sw          $t3, 0x3C($s1)
    MEM_W(0X3C, ctx->r17) = ctx->r11;
    // 0x00414DA0: lw          $t1, 0x70($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X70);
    // 0x00414DA4: lw          $t2, 0x74($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X74);
    // 0x00414DA8: lw          $t3, 0x78($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X78);
    // 0x00414DAC: sw          $t1, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->r9;
    // 0x00414DB0: sw          $t2, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->r10;
    // 0x00414DB4: sw          $t3, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->r11;
    // 0x00414DB8: lw          $t1, 0x70($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X70);
    // 0x00414DBC: lw          $t2, 0x74($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X74);
    // 0x00414DC0: lw          $t3, 0x78($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X78);
    // 0x00414DC4: sw          $t1, 0x194($s1)
    MEM_W(0X194, ctx->r17) = ctx->r9;
    // 0x00414DC8: sw          $t2, 0x198($s1)
    MEM_W(0X198, ctx->r17) = ctx->r10;
    // 0x00414DCC: sw          $t3, 0x19C($s1)
    MEM_W(0X19C, ctx->r17) = ctx->r11;
    // 0x00414DD0: jal         0x0021EBC0
    // 0x00414DD4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_0021EBC0(rdram, ctx);
        goto after_7;
    // 0x00414DD4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_7:
    // 0x00414DD8: lw          $t1, 0x70($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X70);
    // 0x00414DDC: lw          $t2, 0x74($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X74);
    // 0x00414DE0: lw          $t3, 0x78($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X78);
    // 0x00414DE4: sw          $t1, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->r9;
    // 0x00414DE8: sw          $t2, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->r10;
    // 0x00414DEC: sw          $t3, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->r11;
    // 0x00414DF0: lw          $t1, 0x70($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X70);
    // 0x00414DF4: lw          $t2, 0x74($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X74);
    // 0x00414DF8: lw          $t3, 0x78($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X78);
    // 0x00414DFC: sw          $t1, 0x194($s1)
    MEM_W(0X194, ctx->r17) = ctx->r9;
    // 0x00414E00: sw          $t2, 0x198($s1)
    MEM_W(0X198, ctx->r17) = ctx->r10;
    // 0x00414E04: sw          $t3, 0x19C($s1)
    MEM_W(0X19C, ctx->r17) = ctx->r11;
    // 0x00414E08: jal         0x0021A344
    // 0x00414E0C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_0021A344(rdram, ctx);
        goto after_8;
    // 0x00414E0C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_8:
    // 0x00414E10: lwc1        $f1, 0x2C($s4)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r20, 0X2C);
    // 0x00414E14: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00414E18: lwc1        $f0, 0x6D28($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6D28);
    // 0x00414E1C: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x00414E20: lwc1        $f0, 0x50($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X50);
    // 0x00414E24: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x00414E28: swc1        $f0, 0x50($s1)
    MEM_W(0X50, ctx->r17) = ctx->f0.u32l;
    // 0x00414E2C: lw          $t1, 0x70($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X70);
    // 0x00414E30: lw          $t2, 0x74($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X74);
    // 0x00414E34: lw          $t3, 0x78($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X78);
    // 0x00414E38: sw          $t1, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->r9;
    // 0x00414E3C: sw          $t2, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->r10;
    // 0x00414E40: sw          $t3, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->r11;
    // 0x00414E44: lw          $t1, 0x70($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X70);
    // 0x00414E48: lw          $t2, 0x74($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X74);
    // 0x00414E4C: lw          $t3, 0x78($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X78);
    // 0x00414E50: sw          $t1, 0x194($s1)
    MEM_W(0X194, ctx->r17) = ctx->r9;
    // 0x00414E54: sw          $t2, 0x198($s1)
    MEM_W(0X198, ctx->r17) = ctx->r10;
    // 0x00414E58: sw          $t3, 0x19C($s1)
    MEM_W(0X19C, ctx->r17) = ctx->r11;
    // 0x00414E5C: jal         0x0020B5D4
    // 0x00414E60: nop

    func_0020B5D4(rdram, ctx);
        goto after_9;
    // 0x00414E60: nop

    after_9:
    // 0x00414E64: lw          $a1, 0x40($s7)
    ctx->r5 = MEM_W(ctx->r23, 0X40);
    // 0x00414E68: jal         0x0021D39C
    // 0x00414E6C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_0021D39C(rdram, ctx);
        goto after_10;
    // 0x00414E6C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_10:
    // 0x00414E70: jal         0x0020B624
    // 0x00414E74: nop

    func_0020B624(rdram, ctx);
        goto after_11;
    // 0x00414E74: nop

    after_11:
    // 0x00414E78: lw          $ra, 0xB4($sp)
    ctx->r31 = MEM_W(ctx->r29, 0XB4);
    // 0x00414E7C: lw          $fp, 0xB0($sp)
    ctx->r30 = MEM_W(ctx->r29, 0XB0);
    // 0x00414E80: lw          $s7, 0xAC($sp)
    ctx->r23 = MEM_W(ctx->r29, 0XAC);
    // 0x00414E84: lw          $s6, 0xA8($sp)
    ctx->r22 = MEM_W(ctx->r29, 0XA8);
    // 0x00414E88: lw          $s5, 0xA4($sp)
    ctx->r21 = MEM_W(ctx->r29, 0XA4);
    // 0x00414E8C: lw          $s4, 0xA0($sp)
    ctx->r20 = MEM_W(ctx->r29, 0XA0);
    // 0x00414E90: lw          $s3, 0x9C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X9C);
    // 0x00414E94: lw          $s2, 0x98($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X98);
    // 0x00414E98: lw          $s1, 0x94($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X94);
    // 0x00414E9C: lw          $s0, 0x90($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X90);
    // 0x00414EA0: jr          $ra
    // 0x00414EA4: addiu       $sp, $sp, 0xB8
    ctx->r29 = ADD32(ctx->r29, 0XB8);
    return;
    // 0x00414EA4: addiu       $sp, $sp, 0xB8
    ctx->r29 = ADD32(ctx->r29, 0XB8);
;}
RECOMP_FUNC void entry_00414CA8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00414CA8: jal         0x00206078
    // 0x00414CAC: sw          $v0, 0x234($s1)
    MEM_W(0X234, ctx->r17) = ctx->r2;
    func_00206078(rdram, ctx);
        goto after_0;
    // 0x00414CAC: sw          $v0, 0x234($s1)
    MEM_W(0X234, ctx->r17) = ctx->r2;
    after_0:
    // 0x00414CB0: bne         $v0, $zero, L_00414CC0
    if (ctx->r2 != 0) {
        // 0x00414CB4: nop
    
            goto L_00414CC0;
    }
    // 0x00414CB4: nop

    // 0x00414CB8: jal         0x00206068
    // 0x00414CBC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_00206068(rdram, ctx);
        goto after_1;
    // 0x00414CBC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_1:
L_00414CC0:
    // 0x00414CC0: lw          $v1, 0x0($s6)
    ctx->r3 = MEM_W(ctx->r22, 0X0);
    // 0x00414CC4: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
    // 0x00414CC8: bne         $v1, $v0, L_00414CF8
    if (ctx->r3 != ctx->r2) {
        // 0x00414CCC: addu        $a1, $s1, $zero
        ctx->r5 = ADD32(ctx->r17, 0);
            goto L_00414CF8;
    }
    // 0x00414CCC: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x00414CD0: lw          $v0, 0x14($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X14);
    // 0x00414CD4: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x00414CD8: addiu       $a0, $a0, 0x7078
    ctx->r4 = ADD32(ctx->r4, 0X7078);
    // 0x00414CDC: lh          $v0, 0xC($v0)
    ctx->r2 = MEM_H(ctx->r2, 0XC);
    // 0x00414CE0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x00414CE4: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00414CE8: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x00414CEC: lw          $a2, -0x24D0($at)
    ctx->r6 = MEM_W(ctx->r1, -0X24D0);
    // 0x00414CF0: jal         0x002241D8
    // 0x00414CF4: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_002241D8(rdram, ctx);
        goto after_2;
    // 0x00414CF4: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_2:
L_00414CF8:
    // 0x00414CF8: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x00414CFC: lw          $v0, 0x1BD0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1BD0);
    // 0x00414D00: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x00414D04: beq         $v0, $a0, L_00414D88
    if (ctx->r2 == ctx->r4) {
        // 0x00414D08: lui         $a2, 0xE300
        ctx->r6 = S32(0XE300 << 16);
            goto L_00414D88;
    }
    // 0x00414D08: lui         $a2, 0xE300
    ctx->r6 = S32(0XE300 << 16);
    // 0x00414D0C: ori         $a2, $a2, 0xA01
    ctx->r6 = ctx->r6 | 0XA01;
    // 0x00414D10: lui         $a3, 0xE300
    ctx->r7 = S32(0XE300 << 16);
    // 0x00414D14: ori         $a3, $a3, 0xC00
    ctx->r7 = ctx->r7 | 0XC00;
    // 0x00414D18: lui         $t0, 0xE300
    ctx->r8 = S32(0XE300 << 16);
    // 0x00414D1C: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x00414D20: addiu       $a1, $a1, -0x71DC
    ctx->r5 = ADD32(ctx->r5, -0X71DC);
    // 0x00414D24: ori         $t0, $t0, 0x1201
    ctx->r8 = ctx->r8 | 0X1201;
    // 0x00414D28: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x00414D2C: lui         $v0, 0xE700
    ctx->r2 = S32(0XE700 << 16);
    // 0x00414D30: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00414D34: sw          $a0, 0x1BD0($at)
    MEM_W(0X1BD0, ctx->r1) = ctx->r4;
    // 0x00414D38: addu        $a0, $v1, $zero
    ctx->r4 = ADD32(ctx->r3, 0);
    // 0x00414D3C: addiu       $v1, $v1, 0x8
    ctx->r3 = ADD32(ctx->r3, 0X8);
    // 0x00414D40: sw          $v1, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r3;
    // 0x00414D44: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
    // 0x00414D48: sw          $zero, 0x4($a0)
    MEM_W(0X4, ctx->r4) = 0;
    // 0x00414D4C: addiu       $a0, $v1, 0x8
    ctx->r4 = ADD32(ctx->r3, 0X8);
    // 0x00414D50: lui         $v0, 0x10
    ctx->r2 = S32(0X10 << 16);
    // 0x00414D54: sw          $a0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r4;
    // 0x00414D58: sw          $a2, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r6;
    // 0x00414D5C: addiu       $a2, $v1, 0x10
    ctx->r6 = ADD32(ctx->r3, 0X10);
    // 0x00414D60: sw          $v0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r2;
    // 0x00414D64: lui         $v0, 0x8
    ctx->r2 = S32(0X8 << 16);
    // 0x00414D68: sw          $a2, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r6;
    // 0x00414D6C: sw          $a3, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r7;
    // 0x00414D70: sw          $v0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r2;
    // 0x00414D74: addiu       $v0, $v1, 0x18
    ctx->r2 = ADD32(ctx->r3, 0X18);
    // 0x00414D78: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
    // 0x00414D7C: addiu       $v0, $zero, 0x2000
    ctx->r2 = ADD32(0, 0X2000);
    // 0x00414D80: sw          $t0, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->r8;
    // 0x00414D84: sw          $v0, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r2;
L_00414D88:
    // 0x00414D88: lw          $t1, 0x80($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X80);
    // 0x00414D8C: lw          $t2, 0x84($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X84);
    // 0x00414D90: lw          $t3, 0x88($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X88);
    // 0x00414D94: sw          $t1, 0x34($s1)
    MEM_W(0X34, ctx->r17) = ctx->r9;
    // 0x00414D98: sw          $t2, 0x38($s1)
    MEM_W(0X38, ctx->r17) = ctx->r10;
    // 0x00414D9C: sw          $t3, 0x3C($s1)
    MEM_W(0X3C, ctx->r17) = ctx->r11;
    // 0x00414DA0: lw          $t1, 0x70($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X70);
    // 0x00414DA4: lw          $t2, 0x74($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X74);
    // 0x00414DA8: lw          $t3, 0x78($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X78);
    // 0x00414DAC: sw          $t1, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->r9;
    // 0x00414DB0: sw          $t2, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->r10;
    // 0x00414DB4: sw          $t3, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->r11;
    // 0x00414DB8: lw          $t1, 0x70($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X70);
    // 0x00414DBC: lw          $t2, 0x74($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X74);
    // 0x00414DC0: lw          $t3, 0x78($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X78);
    // 0x00414DC4: sw          $t1, 0x194($s1)
    MEM_W(0X194, ctx->r17) = ctx->r9;
    // 0x00414DC8: sw          $t2, 0x198($s1)
    MEM_W(0X198, ctx->r17) = ctx->r10;
    // 0x00414DCC: sw          $t3, 0x19C($s1)
    MEM_W(0X19C, ctx->r17) = ctx->r11;
    // 0x00414DD0: jal         0x0021EBC0
    // 0x00414DD4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_0021EBC0(rdram, ctx);
        goto after_3;
    // 0x00414DD4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_3:
    // 0x00414DD8: lw          $t1, 0x70($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X70);
    // 0x00414DDC: lw          $t2, 0x74($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X74);
    // 0x00414DE0: lw          $t3, 0x78($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X78);
    // 0x00414DE4: sw          $t1, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->r9;
    // 0x00414DE8: sw          $t2, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->r10;
    // 0x00414DEC: sw          $t3, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->r11;
    // 0x00414DF0: lw          $t1, 0x70($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X70);
    // 0x00414DF4: lw          $t2, 0x74($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X74);
    // 0x00414DF8: lw          $t3, 0x78($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X78);
    // 0x00414DFC: sw          $t1, 0x194($s1)
    MEM_W(0X194, ctx->r17) = ctx->r9;
    // 0x00414E00: sw          $t2, 0x198($s1)
    MEM_W(0X198, ctx->r17) = ctx->r10;
    // 0x00414E04: sw          $t3, 0x19C($s1)
    MEM_W(0X19C, ctx->r17) = ctx->r11;
    // 0x00414E08: jal         0x0021A344
    // 0x00414E0C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_0021A344(rdram, ctx);
        goto after_4;
    // 0x00414E0C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_4:
    // 0x00414E10: lwc1        $f1, 0x2C($s4)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r20, 0X2C);
    // 0x00414E14: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00414E18: lwc1        $f0, 0x6D28($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6D28);
    // 0x00414E1C: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x00414E20: lwc1        $f0, 0x50($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X50);
    // 0x00414E24: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x00414E28: swc1        $f0, 0x50($s1)
    MEM_W(0X50, ctx->r17) = ctx->f0.u32l;
    // 0x00414E2C: lw          $t1, 0x70($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X70);
    // 0x00414E30: lw          $t2, 0x74($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X74);
    // 0x00414E34: lw          $t3, 0x78($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X78);
    // 0x00414E38: sw          $t1, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->r9;
    // 0x00414E3C: sw          $t2, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->r10;
    // 0x00414E40: sw          $t3, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->r11;
    // 0x00414E44: lw          $t1, 0x70($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X70);
    // 0x00414E48: lw          $t2, 0x74($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X74);
    // 0x00414E4C: lw          $t3, 0x78($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X78);
    // 0x00414E50: sw          $t1, 0x194($s1)
    MEM_W(0X194, ctx->r17) = ctx->r9;
    // 0x00414E54: sw          $t2, 0x198($s1)
    MEM_W(0X198, ctx->r17) = ctx->r10;
    // 0x00414E58: sw          $t3, 0x19C($s1)
    MEM_W(0X19C, ctx->r17) = ctx->r11;
    // 0x00414E5C: jal         0x0020B5D4
    // 0x00414E60: nop

    func_0020B5D4(rdram, ctx);
        goto after_5;
    // 0x00414E60: nop

    after_5:
    // 0x00414E64: lw          $a1, 0x40($s7)
    ctx->r5 = MEM_W(ctx->r23, 0X40);
    // 0x00414E68: jal         0x0021D39C
    // 0x00414E6C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_0021D39C(rdram, ctx);
        goto after_6;
    // 0x00414E6C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_6:
    // 0x00414E70: jal         0x0020B624
    // 0x00414E74: nop

    func_0020B624(rdram, ctx);
        goto after_7;
    // 0x00414E74: nop

    after_7:
    // 0x00414E78: lw          $ra, 0xB4($sp)
    ctx->r31 = MEM_W(ctx->r29, 0XB4);
    // 0x00414E7C: lw          $fp, 0xB0($sp)
    ctx->r30 = MEM_W(ctx->r29, 0XB0);
    // 0x00414E80: lw          $s7, 0xAC($sp)
    ctx->r23 = MEM_W(ctx->r29, 0XAC);
    // 0x00414E84: lw          $s6, 0xA8($sp)
    ctx->r22 = MEM_W(ctx->r29, 0XA8);
    // 0x00414E88: lw          $s5, 0xA4($sp)
    ctx->r21 = MEM_W(ctx->r29, 0XA4);
    // 0x00414E8C: lw          $s4, 0xA0($sp)
    ctx->r20 = MEM_W(ctx->r29, 0XA0);
    // 0x00414E90: lw          $s3, 0x9C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X9C);
    // 0x00414E94: lw          $s2, 0x98($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X98);
    // 0x00414E98: lw          $s1, 0x94($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X94);
    // 0x00414E9C: lw          $s0, 0x90($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X90);
    // 0x00414EA0: jr          $ra
    // 0x00414EA4: addiu       $sp, $sp, 0xB8
    ctx->r29 = ADD32(ctx->r29, 0XB8);
    return;
    // 0x00414EA4: addiu       $sp, $sp, 0xB8
    ctx->r29 = ADD32(ctx->r29, 0XB8);
;}
