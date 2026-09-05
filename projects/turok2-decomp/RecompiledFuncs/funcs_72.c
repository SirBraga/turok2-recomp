#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_00220530(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00220530: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x00220534: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00220538: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x0022053C: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x00220540: lw          $a1, -0x3528($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X3528);
    // 0x00220544: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x00220548: addiu       $v0, $v0, -0x5528
    ctx->r2 = ADD32(ctx->r2, -0X5528);
    // 0x0022054C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x00220550: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x00220554: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00220558: sdc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X20, ctx->r29);
    // 0x0022055C: lw          $v1, 0xC($v0)
    ctx->r3 = MEM_W(ctx->r2, 0XC);
    // 0x00220560: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
    // 0x00220564: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00220568: sw          $zero, -0x3220($at)
    MEM_W(-0X3220, ctx->r1) = 0;
    // 0x0022056C: andi        $v0, $a0, 0x4000
    ctx->r2 = ctx->r4 & 0X4000;
    // 0x00220570: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00220574: sw          $v1, -0x3528($at)
    MEM_W(-0X3528, ctx->r1) = ctx->r3;
    // 0x00220578: beq         $v0, $zero, L_00220588
    if (ctx->r2 == 0) {
        // 0x0022057C: ori         $v0, $v1, 0x100
        ctx->r2 = ctx->r3 | 0X100;
            goto L_00220588;
    }
    // 0x0022057C: ori         $v0, $v1, 0x100
    ctx->r2 = ctx->r3 | 0X100;
    // 0x00220580: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00220584: sw          $v0, -0x3528($at)
    MEM_W(-0X3528, ctx->r1) = ctx->r2;
L_00220588:
    // 0x00220588: andi        $v0, $a0, 0x8000
    ctx->r2 = ctx->r4 & 0X8000;
    // 0x0022058C: beq         $v0, $zero, L_002205A8
    if (ctx->r2 == 0) {
        // 0x00220590: nop
    
            goto L_002205A8;
    }
    // 0x00220590: nop

    // 0x00220594: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00220598: lw          $v0, -0x3528($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X3528);
    // 0x0022059C: ori         $v0, $v0, 0x200
    ctx->r2 = ctx->r2 | 0X200;
    // 0x002205A0: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x002205A4: sw          $v0, -0x3528($at)
    MEM_W(-0X3528, ctx->r1) = ctx->r2;
L_002205A8:
    // 0x002205A8: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x002205AC: lw          $v0, -0x3528($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X3528);
    // 0x002205B0: beq         $a1, $v0, L_002205D0
    if (ctx->r5 == ctx->r2) {
        // 0x002205B4: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_002205D0;
    }
    // 0x002205B4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x002205B8: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x002205BC: sw          $v0, -0x3524($at)
    MEM_W(-0X3524, ctx->r1) = ctx->r2;
    // 0x002205C0: jal         0x00206068
    // 0x002205C4: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    func_00206068(rdram, ctx);
        goto after_0;
    // 0x002205C4: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    after_0:
    // 0x002205C8: j           L_002205D8
    // 0x002205CC: nop

        goto L_002205D8;
    // 0x002205CC: nop

L_002205D0:
    // 0x002205D0: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x002205D4: sw          $zero, -0x3524($at)
    MEM_W(-0X3524, ctx->r1) = 0;
L_002205D8:
    // 0x002205D8: jal         0x002237C4
    // 0x002205DC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_002237C4(rdram, ctx);
        goto after_1;
    // 0x002205DC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x002205E0: jal         0x00226390
    // 0x002205E4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00226390(rdram, ctx);
        goto after_2;
    // 0x002205E4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x002205E8: jal         0x00206920
    // 0x002205EC: addiu       $a0, $s0, 0xD0
    ctx->r4 = ADD32(ctx->r16, 0XD0);
    func_00206920(rdram, ctx);
        goto after_3;
    // 0x002205EC: addiu       $a0, $s0, 0xD0
    ctx->r4 = ADD32(ctx->r16, 0XD0);
    after_3:
    // 0x002205F0: lw          $a1, 0xC8($s0)
    ctx->r5 = MEM_W(ctx->r16, 0XC8);
    // 0x002205F4: jal         0x0020565C
    // 0x002205F8: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_0020565C(rdram, ctx);
        goto after_4;
    // 0x002205F8: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_4:
    // 0x002205FC: lui         $s2, 0x8011
    ctx->r18 = S32(0X8011 << 16);
    // 0x00220600: addiu       $s2, $s2, 0x2B8
    ctx->r18 = ADD32(ctx->r18, 0X2B8);
    // 0x00220604: jal         0x00235FC4
    // 0x00220608: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_00235FC4(rdram, ctx);
        goto after_5;
    // 0x00220608: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_5:
    // 0x0022060C: lui         $s1, 0x8012
    ctx->r17 = S32(0X8012 << 16);
    // 0x00220610: addiu       $s1, $s1, -0x6790
    ctx->r17 = ADD32(ctx->r17, -0X6790);
    // 0x00220614: jal         0x00253018
    // 0x00220618: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_00253018(rdram, ctx);
        goto after_6;
    // 0x00220618: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_6:
    // 0x0022061C: jal         0x00221210
    // 0x00220620: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00221210(rdram, ctx);
        goto after_7;
    // 0x00220620: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_7:
    // 0x00220624: jal         0x002216DC
    // 0x00220628: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_002216DC(rdram, ctx);
        goto after_8;
    // 0x00220628: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_8:
    // 0x0022062C: jal         0x00221A24
    // 0x00220630: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00221A24(rdram, ctx);
        goto after_9;
    // 0x00220630: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_9:
    // 0x00220634: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x00220638: addu        $at, $s0, $at
    ctx->r1 = ADD32(ctx->r16, ctx->r1);
    // 0x0022063C: lw          $v0, -0x7050($at)
    ctx->r2 = MEM_W(ctx->r1, -0X7050);
    // 0x00220640: bne         $v0, $zero, L_00220650
    if (ctx->r2 != 0) {
        // 0x00220644: nop
    
            goto L_00220650;
    }
    // 0x00220644: nop

    // 0x00220648: jal         0x00252ADC
    // 0x0022064C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_00252ADC(rdram, ctx);
        goto after_10;
    // 0x0022064C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_10:
L_00220650:
    // 0x00220650: lui         $s1, 0x8012
    ctx->r17 = S32(0X8012 << 16);
    // 0x00220654: addiu       $s1, $s1, -0x6750
    ctx->r17 = ADD32(ctx->r17, -0X6750);
    // 0x00220658: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0022065C: jal         0x0027F2C4
    // 0x00220660: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_0027F2C4(rdram, ctx);
        goto after_11;
    // 0x00220660: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_11:
    // 0x00220664: jal         0x00230CB4
    // 0x00220668: addiu       $a0, $s0, 0x18B0
    ctx->r4 = ADD32(ctx->r16, 0X18B0);
    func_00230CB4(rdram, ctx);
        goto after_12;
    // 0x00220668: addiu       $a0, $s0, 0x18B0
    ctx->r4 = ADD32(ctx->r16, 0X18B0);
    after_12:
    // 0x0022066C: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x00220670: addu        $at, $s0, $at
    ctx->r1 = ADD32(ctx->r16, ctx->r1);
    // 0x00220674: lw          $v0, -0x7050($at)
    ctx->r2 = MEM_W(ctx->r1, -0X7050);
    // 0x00220678: bne         $v0, $zero, L_00220750
    if (ctx->r2 != 0) {
        // 0x0022067C: nop
    
            goto L_00220750;
    }
    // 0x0022067C: nop

    // 0x00220680: lw          $v0, 0x13F4($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X13F4);
    // 0x00220684: bne         $v0, $zero, L_00220750
    if (ctx->r2 != 0) {
        // 0x00220688: nop
    
            goto L_00220750;
    }
    // 0x00220688: nop

    // 0x0022068C: jal         0x00235F48
    // 0x00220690: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_00235F48(rdram, ctx);
        goto after_13;
    // 0x00220690: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_13:
    // 0x00220694: jal         0x00226490
    // 0x00220698: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00226490(rdram, ctx);
        goto after_14;
    // 0x00220698: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_14:
    // 0x0022069C: jal         0x002263C0
    // 0x002206A0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_002263C0(rdram, ctx);
        goto after_15;
    // 0x002206A0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_15:
    // 0x002206A4: lui         $a0, 0x1
    ctx->r4 = S32(0X1 << 16);
    // 0x002206A8: ori         $a0, $a0, 0x518
    ctx->r4 = ctx->r4 | 0X518;
    // 0x002206AC: jal         0x002274A4
    // 0x002206B0: addu        $a0, $s0, $a0
    ctx->r4 = ADD32(ctx->r16, ctx->r4);
    func_002274A4(rdram, ctx);
        goto after_16;
    // 0x002206B0: addu        $a0, $s0, $a0
    ctx->r4 = ADD32(ctx->r16, ctx->r4);
    after_16:
    // 0x002206B4: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x002206B8: lwc1        $f1, 0x6D28($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X6D28);
    // 0x002206BC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002206C0: lwc1        $f0, 0x5EA4($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X5EA4);
    // 0x002206C4: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x002206C8: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x002206CC: addu        $at, $s0, $at
    ctx->r1 = ADD32(ctx->r16, ctx->r1);
    // 0x002206D0: lwc1        $f0, -0x715C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X715C);
    // 0x002206D4: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x002206D8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002206DC: lwc1        $f20, 0x5EA8($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X5EA8);
    // 0x002206E0: mul.s       $f12, $f0, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f12.fl = MUL_S(ctx->f0.fl, ctx->f20.fl);
    // 0x002206E4: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x002206E8: addu        $at, $s0, $at
    ctx->r1 = ADD32(ctx->r16, ctx->r1);
    // 0x002206EC: swc1        $f0, -0x715C($at)
    MEM_W(-0X715C, ctx->r1) = ctx->f0.u32l;
    // 0x002206F0: jal         0x002982F0
    // 0x002206F4: nop

    func_002982F0(rdram, ctx);
        goto after_17;
    // 0x002206F4: nop

    after_17:
    // 0x002206F8: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x002206FC: addu        $at, $s0, $at
    ctx->r1 = ADD32(ctx->r16, ctx->r1);
    // 0x00220700: lwc1        $f12, -0x715C($at)
    ctx->f12.u32l = MEM_W(ctx->r1, -0X715C);
    // 0x00220704: mul.s       $f12, $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f12.fl = MUL_S(ctx->f12.fl, ctx->f20.fl);
    // 0x00220708: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x0022070C: swc1        $f0, -0x2874($at)
    MEM_W(-0X2874, ctx->r1) = ctx->f0.u32l;
    // 0x00220710: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x00220714: addu        $at, $s0, $at
    ctx->r1 = ADD32(ctx->r16, ctx->r1);
    // 0x00220718: sw          $zero, -0x7158($at)
    MEM_W(-0X7158, ctx->r1) = 0;
    // 0x0022071C: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x00220720: addu        $at, $s0, $at
    ctx->r1 = ADD32(ctx->r16, ctx->r1);
    // 0x00220724: swc1        $f0, -0x7154($at)
    MEM_W(-0X7154, ctx->r1) = ctx->f0.u32l;
    // 0x00220728: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x0022072C: addu        $at, $s0, $at
    ctx->r1 = ADD32(ctx->r16, ctx->r1);
    // 0x00220730: sw          $zero, -0x7150($at)
    MEM_W(-0X7150, ctx->r1) = 0;
    // 0x00220734: jal         0x002974C0
    // 0x00220738: nop

    func_002974C0(rdram, ctx);
        goto after_18;
    // 0x00220738: nop

    after_18:
    // 0x0022073C: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x00220740: addu        $at, $s0, $at
    ctx->r1 = ADD32(ctx->r16, ctx->r1);
    // 0x00220744: swc1        $f0, -0x714C($at)
    MEM_W(-0X714C, ctx->r1) = ctx->f0.u32l;
    // 0x00220748: jal         0x002253F8
    // 0x0022074C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_002253F8(rdram, ctx);
        goto after_19;
    // 0x0022074C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_19:
L_00220750:
    // 0x00220750: jal         0x00226724
    // 0x00220754: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00226724(rdram, ctx);
        goto after_20;
    // 0x00220754: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_20:
    // 0x00220758: jal         0x00226024
    // 0x0022075C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00226024(rdram, ctx);
        goto after_21;
    // 0x0022075C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_21:
    // 0x00220760: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x00220764: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x00220768: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x0022076C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00220770: ldc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X20);
    // 0x00220774: jr          $ra
    // 0x00220778: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x00220778: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_0021A500(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0021A500: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x0021A504: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x0021A508: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x0021A50C: sw          $ra, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r31;
    // 0x0021A510: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x0021A514: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x0021A518: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x0021A51C: lw          $v0, 0xD4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XD4);
    // 0x0021A520: lui         $v1, 0x30
    ctx->r3 = S32(0X30 << 16);
    // 0x0021A524: and         $s3, $v0, $v1
    ctx->r19 = ctx->r2 & ctx->r3;
    // 0x0021A528: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x0021A52C: bne         $v0, $zero, L_0021A63C
    if (ctx->r2 != 0) {
        // 0x0021A530: nop
    
            goto L_0021A63C;
    }
    // 0x0021A530: nop

    // 0x0021A534: jal         0x002685F0
    // 0x0021A538: nop

    func_002685F0(rdram, ctx);
        goto after_0;
    // 0x0021A538: nop

    after_0:
    // 0x0021A53C: lw          $v1, 0x10($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X10);
    // 0x0021A540: beq         $v1, $zero, L_0021A63C
    if (ctx->r3 == 0) {
        // 0x0021A544: addu        $s2, $v0, $zero
        ctx->r18 = ADD32(ctx->r2, 0);
            goto L_0021A63C;
    }
    // 0x0021A544: addu        $s2, $v0, $zero
    ctx->r18 = ADD32(ctx->r2, 0);
    // 0x0021A548: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x0021A54C: jal         0x00267944
    // 0x0021A550: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_00267944(rdram, ctx);
        goto after_1;
    // 0x0021A550: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_1:
    // 0x0021A554: lw          $v0, 0x10($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X10);
    // 0x0021A558: lhu         $v0, 0x2($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X2);
    // 0x0021A55C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0021A560: jal         0x002682A4
    // 0x0021A564: andi        $s1, $v0, 0x1
    ctx->r17 = ctx->r2 & 0X1;
    func_002682A4(rdram, ctx);
        goto after_2;
    // 0x0021A564: andi        $s1, $v0, 0x1
    ctx->r17 = ctx->r2 & 0X1;
    after_2:
    // 0x0021A568: beq         $v0, $zero, L_0021A63C
    if (ctx->r2 == 0) {
        // 0x0021A56C: nop
    
            goto L_0021A63C;
    }
    // 0x0021A56C: nop

    // 0x0021A570: beq         $s1, $zero, L_0021A594
    if (ctx->r17 == 0) {
        // 0x0021A574: nop
    
            goto L_0021A594;
    }
    // 0x0021A574: nop

    // 0x0021A578: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x0021A57C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0021A580: lwc1        $f1, 0x5AEC($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X5AEC);
    // 0x0021A584: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    // 0x0021A588: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    // 0x0021A58C: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    // 0x0021A590: swc1        $f1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
L_0021A594:
    // 0x0021A594: beq         $s3, $zero, L_0021A5CC
    if (ctx->r19 == 0) {
        // 0x0021A598: nop
    
            goto L_0021A5CC;
    }
    // 0x0021A598: nop

    // 0x0021A59C: lw          $v0, 0xD4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XD4);
    // 0x0021A5A0: andi        $v0, $v0, 0x1000
    ctx->r2 = ctx->r2 & 0X1000;
    // 0x0021A5A4: bne         $v0, $zero, L_0021A5B4
    if (ctx->r2 != 0) {
        // 0x0021A5A8: nop
    
            goto L_0021A5B4;
    }
    // 0x0021A5A8: nop

    // 0x0021A5AC: bne         $s2, $zero, L_0021A5BC
    if (ctx->r18 != 0) {
        // 0x0021A5B0: addiu       $a0, $s0, 0x40
        ctx->r4 = ADD32(ctx->r16, 0X40);
            goto L_0021A5BC;
    }
    // 0x0021A5B0: addiu       $a0, $s0, 0x40
    ctx->r4 = ADD32(ctx->r16, 0X40);
L_0021A5B4:
    // 0x0021A5B4: beq         $s1, $zero, L_0021A63C
    if (ctx->r17 == 0) {
        // 0x0021A5B8: addiu       $a0, $s0, 0x40
        ctx->r4 = ADD32(ctx->r16, 0X40);
            goto L_0021A63C;
    }
    // 0x0021A5B8: addiu       $a0, $s0, 0x40
    ctx->r4 = ADD32(ctx->r16, 0X40);
L_0021A5BC:
    // 0x0021A5BC: jal         0x00211250
    // 0x0021A5C0: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    func_00211250(rdram, ctx);
        goto after_3;
    // 0x0021A5C0: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    after_3:
    // 0x0021A5C4: j           L_0021A63C
    // 0x0021A5C8: nop

        goto L_0021A63C;
    // 0x0021A5C8: nop

L_0021A5CC:
    // 0x0021A5CC: beq         $s2, $zero, L_0021A5FC
    if (ctx->r18 == 0) {
        // 0x0021A5D0: nop
    
            goto L_0021A5FC;
    }
    // 0x0021A5D0: nop

    // 0x0021A5D4: lw          $v0, 0xD4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XD4);
    // 0x0021A5D8: andi        $v0, $v0, 0x1000
    ctx->r2 = ctx->r2 & 0X1000;
    // 0x0021A5DC: bne         $v0, $zero, L_0021A5FC
    if (ctx->r2 != 0) {
        // 0x0021A5E0: nop
    
            goto L_0021A5FC;
    }
    // 0x0021A5E0: nop

    // 0x0021A5E4: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0021A5E8: lwc1        $f0, 0x6D28($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6D28);
    // 0x0021A5EC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0021A5F0: lwc1        $f1, 0x5AF0($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X5AF0);
    // 0x0021A5F4: j           L_0021A60C
    // 0x0021A5F8: nop

        goto L_0021A60C;
    // 0x0021A5F8: nop

L_0021A5FC:
    // 0x0021A5FC: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0021A600: lwc1        $f0, 0x6D28($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6D28);
    // 0x0021A604: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0021A608: lwc1        $f1, 0x5AF4($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X5AF4);
L_0021A60C:
    // 0x0021A60C: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0021A610: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0021A614: lwc1        $f1, 0x5AF8($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X5AF8);
    // 0x0021A618: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x0021A61C: nop

    // 0x0021A620: bc1f        L_0021A62C
    if (!c1cs) {
        // 0x0021A624: addiu       $a0, $s0, 0x40
        ctx->r4 = ADD32(ctx->r16, 0X40);
            goto L_0021A62C;
    }
    // 0x0021A624: addiu       $a0, $s0, 0x40
    ctx->r4 = ADD32(ctx->r16, 0X40);
    // 0x0021A628: mov.s       $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    ctx->f0.fl = ctx->f1.fl;
L_0021A62C:
    // 0x0021A62C: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x0021A630: addu        $a2, $a0, $zero
    ctx->r6 = ADD32(ctx->r4, 0);
    // 0x0021A634: jal         0x0020DCC8
    // 0x0021A638: addiu       $a3, $sp, 0x10
    ctx->r7 = ADD32(ctx->r29, 0X10);
    func_0020DCC8(rdram, ctx);
        goto after_4;
    // 0x0021A638: addiu       $a3, $sp, 0x10
    ctx->r7 = ADD32(ctx->r29, 0X10);
    after_4:
L_0021A63C:
    // 0x0021A63C: lw          $ra, 0x30($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X30);
    // 0x0021A640: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x0021A644: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x0021A648: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x0021A64C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x0021A650: jr          $ra
    // 0x0021A654: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x0021A654: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_00226D30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00226D30: lwc1        $f1, 0x4($a0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r4, 0X4);
    // 0x00226D34: lwc1        $f0, 0x4($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X4);
    // 0x00226D38: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x00226D3C: nop

    // 0x00226D40: bc1f        L_00226D4C
    if (!c1cs) {
        // 0x00226D44: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_00226D4C;
    }
    // 0x00226D44: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00226D48: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_00226D4C:
    // 0x00226D4C: jr          $ra
    // 0x00226D50: nop

    return;
    // 0x00226D50: nop

;}
RECOMP_FUNC void func_0042F838(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0042F838: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0042F83C: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x0042F840: lw          $v0, 0xC($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XC);
    // 0x0042F844: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
        turok2_patch_scale_overlay_wait(rdram, ctx);

    // 0x0042F848: bgtz        $v0, L_0042F85C
    if (SIGNED(ctx->r2) > 0) {
        // 0x0042F84C: sw          $v0, 0xC($a0)
        MEM_W(0XC, ctx->r4) = ctx->r2;
            goto L_0042F85C;
    }
    // 0x0042F84C: sw          $v0, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->r2;
    // 0x0042F850: lw          $v0, 0x14($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X14);
    // 0x0042F854: jalr        $v0
    // 0x0042F858: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x0042F858: nop

    after_0:
L_0042F85C:
    // 0x0042F85C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x0042F860: jr          $ra
    // 0x0042F864: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0042F864: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00416B30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00416B30: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00416B34: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00416B38: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x00416B3C: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x00416B40: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // turok2: reconnected split function: a stray ELF symbol at 0x00416B44 ended
    // this function early, leaving it without its epilogue. On the
    // hardware execution simply continues into the next instruction.
    func_00416B44(rdram, ctx);
;}
RECOMP_FUNC void func_00266814(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00266814: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00266818: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x0026681C: lw          $v0, 0x30($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X30);
    // 0x00266820: beq         $v0, $zero, L_0026683C
    if (ctx->r2 == 0) {
        // 0x00266824: nop
    
            goto L_0026683C;
    }
    // 0x00266824: nop

    // 0x00266828: lw          $v0, 0x8($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X8);
    // 0x0026682C: beq         $v0, $zero, L_0026683C
    if (ctx->r2 == 0) {
        // 0x00266830: nop
    
            goto L_0026683C;
    }
    // 0x00266830: nop

    // 0x00266834: jalr        $v0
    // 0x00266838: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x00266838: nop

    after_0:
L_0026683C:
    // 0x0026683C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x00266840: jr          $ra
    // 0x00266844: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00266844: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00454240(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00454240: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x00454244: lw          $v0, -0x5528($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X5528);
    // 0x00454248: xori        $v0, $v0, 0x4
    ctx->r2 = ctx->r2 ^ 0X4;
    // 0x0045424C: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x00454250: sw          $v0, -0x5528($at)
    MEM_W(-0X5528, ctx->r1) = ctx->r2;
    // 0x00454254: jr          $ra
    // 0x00454258: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x00454258: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void func_00452810(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00452810: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00452814: addu        $a0, $a2, $zero
    ctx->r4 = ADD32(ctx->r6, 0);
    // 0x00452818: lui         $a2, 0x44
    ctx->r6 = S32(0X44 << 16);
    // 0x0045281C: addiu       $a2, $a2, -0x6118
    ctx->r6 = ADD32(ctx->r6, -0X6118);
    // 0x00452820: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x00452824: jal         0x00416894
    // 0x00452828: nop

    func_00416894(rdram, ctx);
        goto after_0;
    // 0x00452828: nop

    after_0:
    // 0x0045282C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x00452830: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00452834: jr          $ra
    // 0x00452838: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00452838: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0028EF84(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0028EF84: addiu       $v1, $v1, -0x5350
    ctx->r3 = ADD32(ctx->r3, -0X5350);
    // 0x0028EF88: lw          $v0, 0x28($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X28);
    // 0x0028EF8C: beq         $v0, $zero, L_0028EFAC
    if (ctx->r2 == 0) {
        // 0x0028EF90: addiu       $sp, $sp, -0x28
        ctx->r29 = ADD32(ctx->r29, -0X28);
            goto L_0028EFAC;
    }
    // 0x0028EF90: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x0028EF94: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x0028EF98: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x0028EF9C: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x0028EFA0: addu        $s3, $a1, $zero
    ctx->r19 = ADD32(ctx->r5, 0);
    // 0x0028EFA4: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x0028EFA8: addu        $s2, $a2, $zero
    ctx->r18 = ADD32(ctx->r6, 0);
L_0028EFAC:
    // 0x0028EFAC: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x0028EFB0: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x0028EFB4: jal         0x0028F460
    // 0x0028EFB8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    func_0028F460(rdram, ctx);
        goto after_0;
    // 0x0028EFB8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_0:
    // 0x0028EFBC: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x0028EFC0: andi        $s4, $s0, 0xFF
    ctx->r20 = ctx->r16 & 0XFF;
    // 0x0028EFC4: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x0028EFC8: bne         $s4, $v0, L_0028F140
    if (ctx->r20 != ctx->r2) {
        // 0x0028EFCC: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_0028F140;
    }
    // 0x0028EFCC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0028EFD0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0028EFD4: jal         0x0028F460
    // 0x0028EFD8: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    func_0028F460(rdram, ctx);
        goto after_1;
    // 0x0028EFD8: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    after_1:
    // 0x0028EFDC: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    // 0x0028EFE0: andi        $v1, $a2, 0xFF
    ctx->r3 = ctx->r6 & 0XFF;
    // 0x0028EFE4: addiu       $v0, $zero, 0x51
    ctx->r2 = ADD32(0, 0X51);
    // 0x0028EFE8: bne         $v1, $v0, L_0028F03C
    if (ctx->r3 != ctx->r2) {
        // 0x0028EFEC: addiu       $v0, $zero, 0x2F
        ctx->r2 = ADD32(0, 0X2F);
            goto L_0028F03C;
    }
    // 0x0028EFEC: addiu       $v0, $zero, 0x2F
    ctx->r2 = ADD32(0, 0X2F);
    // 0x0028EFF0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0028EFF4: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    // 0x0028EFF8: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x0028EFFC: sh          $v0, 0x0($s2)
    MEM_H(0X0, ctx->r18) = ctx->r2;
    // 0x0028F000: sb          $s0, 0x8($s2)
    MEM_B(0X8, ctx->r18) = ctx->r16;
    // 0x0028F004: jal         0x0028F460
    // 0x0028F008: sb          $a2, 0x9($s2)
    MEM_B(0X9, ctx->r18) = ctx->r6;
    func_0028F460(rdram, ctx);
        goto after_2;
    // 0x0028F008: sb          $a2, 0x9($s2)
    MEM_B(0X9, ctx->r18) = ctx->r6;
    after_2:
    // 0x0028F00C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0028F010: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    // 0x0028F014: jal         0x0028F460
    // 0x0028F018: sb          $v0, 0xB($s2)
    MEM_B(0XB, ctx->r18) = ctx->r2;
    func_0028F460(rdram, ctx);
        goto after_3;
    // 0x0028F018: sb          $v0, 0xB($s2)
    MEM_B(0XB, ctx->r18) = ctx->r2;
    after_3:
    // 0x0028F01C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0028F020: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    // 0x0028F024: jal         0x0028F460
    // 0x0028F028: sb          $v0, 0xC($s2)
    MEM_B(0XC, ctx->r18) = ctx->r2;
    func_0028F460(rdram, ctx);
        goto after_4;
    // 0x0028F028: sb          $v0, 0xC($s2)
    MEM_B(0XC, ctx->r18) = ctx->r2;
    after_4:
    // 0x0028F02C: sb          $v0, 0xD($s2)
    MEM_B(0XD, ctx->r18) = ctx->r2;
    // 0x0028F030: addu        $v0, $s1, $s3
    ctx->r2 = ADD32(ctx->r17, ctx->r19);
    // 0x0028F034: j           L_0028F1CC
    // 0x0028F038: sb          $zero, 0xA8($v0)
    MEM_B(0XA8, ctx->r2) = 0;
        goto L_0028F1CC;
    // 0x0028F038: sb          $zero, 0xA8($v0)
    MEM_B(0XA8, ctx->r2) = 0;
L_0028F03C:
    // 0x0028F03C: bne         $v1, $v0, L_0028F074
    if (ctx->r3 != ctx->r2) {
        // 0x0028F040: addiu       $v0, $zero, 0x2E
        ctx->r2 = ADD32(0, 0X2E);
            goto L_0028F074;
    }
    // 0x0028F040: addiu       $v0, $zero, 0x2E
    ctx->r2 = ADD32(0, 0X2E);
    // 0x0028F044: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0028F048: lw          $v1, 0x4($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X4);
    // 0x0028F04C: sllv        $v0, $v0, $s3
    ctx->r2 = S32(ctx->r2 << (ctx->r19 & 31));
    // 0x0028F050: xor         $v1, $v1, $v0
    ctx->r3 = ctx->r3 ^ ctx->r2;
    // 0x0028F054: beq         $v1, $zero, L_0028F068
    if (ctx->r3 == 0) {
        // 0x0028F058: sw          $v1, 0x4($s1)
        MEM_W(0X4, ctx->r17) = ctx->r3;
            goto L_0028F068;
    }
    // 0x0028F058: sw          $v1, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->r3;
    // 0x0028F05C: addiu       $v0, $zero, 0x12
    ctx->r2 = ADD32(0, 0X12);
    // 0x0028F060: j           L_0028F1CC
    // 0x0028F064: sh          $v0, 0x0($s2)
    MEM_H(0X0, ctx->r18) = ctx->r2;
        goto L_0028F1CC;
    // 0x0028F064: sh          $v0, 0x0($s2)
    MEM_H(0X0, ctx->r18) = ctx->r2;
L_0028F068:
    // 0x0028F068: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x0028F06C: j           L_0028F1CC
    // 0x0028F070: sh          $v0, 0x0($s2)
    MEM_H(0X0, ctx->r18) = ctx->r2;
        goto L_0028F1CC;
    // 0x0028F070: sh          $v0, 0x0($s2)
    MEM_H(0X0, ctx->r18) = ctx->r2;
L_0028F074:
    // 0x0028F074: bne         $v1, $v0, L_0028F0A8
    if (ctx->r3 != ctx->r2) {
        // 0x0028F078: addiu       $v0, $zero, 0x2D
        ctx->r2 = ADD32(0, 0X2D);
            goto L_0028F0A8;
    }
    // 0x0028F078: addiu       $v0, $zero, 0x2D
    ctx->r2 = ADD32(0, 0X2D);
    // 0x0028F07C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0028F080: jal         0x0028F460
    // 0x0028F084: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    func_0028F460(rdram, ctx);
        goto after_5;
    // 0x0028F084: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    after_5:
    // 0x0028F088: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0028F08C: jal         0x0028F460
    // 0x0028F090: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    func_0028F460(rdram, ctx);
        goto after_6;
    // 0x0028F090: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    after_6:
    // 0x0028F094: addu        $v0, $s1, $s3
    ctx->r2 = ADD32(ctx->r17, ctx->r19);
    // 0x0028F098: sb          $zero, 0xA8($v0)
    MEM_B(0XA8, ctx->r2) = 0;
    // 0x0028F09C: addiu       $v0, $zero, 0x13
    ctx->r2 = ADD32(0, 0X13);
    // 0x0028F0A0: j           L_0028F1CC
    // 0x0028F0A4: sh          $v0, 0x0($s2)
    MEM_H(0X0, ctx->r18) = ctx->r2;
        goto L_0028F1CC;
    // 0x0028F0A4: sh          $v0, 0x0($s2)
    MEM_H(0X0, ctx->r18) = ctx->r2;
L_0028F0A8:
    // 0x0028F0A8: bne         $v1, $v0, L_0028F1CC
    if (ctx->r3 != ctx->r2) {
        // 0x0028F0AC: sll         $v0, $s3, 2
        ctx->r2 = S32(ctx->r19 << 2);
            goto L_0028F1CC;
    }
    // 0x0028F0AC: sll         $v0, $s3, 2
    ctx->r2 = S32(ctx->r19 << 2);
    // 0x0028F0B0: addu        $a3, $s1, $v0
    ctx->r7 = ADD32(ctx->r17, ctx->r2);
    // 0x0028F0B4: lw          $a2, 0x18($a3)
    ctx->r6 = MEM_W(ctx->r7, 0X18);
    // 0x0028F0B8: lbu         $a0, 0x0($a2)
    ctx->r4 = MEM_BU(ctx->r6, 0X0);
    // 0x0028F0BC: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x0028F0C0: lbu         $v0, 0x0($a2)
    ctx->r2 = MEM_BU(ctx->r6, 0X0);
    // 0x0028F0C4: andi        $v1, $v0, 0xFF
    ctx->r3 = ctx->r2 & 0XFF;
    // 0x0028F0C8: bne         $v1, $zero, L_0028F0DC
    if (ctx->r3 != 0) {
        // 0x0028F0CC: nop
    
            goto L_0028F0DC;
    }
    // 0x0028F0CC: nop

    // 0x0028F0D0: addiu       $v0, $a2, 0x5
    ctx->r2 = ADD32(ctx->r6, 0X5);
    // 0x0028F0D4: j           L_0028F128
    // 0x0028F0D8: sb          $a0, 0x0($a2)
    MEM_B(0X0, ctx->r6) = ctx->r4;
        goto L_0028F128;
    // 0x0028F0D8: sb          $a0, 0x0($a2)
    MEM_B(0X0, ctx->r6) = ctx->r4;
L_0028F0DC:
    // 0x0028F0DC: beq         $v1, $s4, L_0028F0E8
    if (ctx->r3 == ctx->r20) {
        // 0x0028F0E0: addiu       $v0, $v0, -0x1
        ctx->r2 = ADD32(ctx->r2, -0X1);
            goto L_0028F0E8;
    }
    // 0x0028F0E0: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x0028F0E4: sb          $v0, 0x0($a2)
    MEM_B(0X0, ctx->r6) = ctx->r2;
L_0028F0E8:
    // 0x0028F0E8: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x0028F0EC: lbu         $v0, 0x0($a2)
    ctx->r2 = MEM_BU(ctx->r6, 0X0);
    // 0x0028F0F0: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x0028F0F4: lbu         $v1, 0x0($a2)
    ctx->r3 = MEM_BU(ctx->r6, 0X0);
    // 0x0028F0F8: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x0028F0FC: lbu         $a0, 0x0($a2)
    ctx->r4 = MEM_BU(ctx->r6, 0X0);
    // 0x0028F100: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x0028F104: lbu         $a1, 0x0($a2)
    ctx->r5 = MEM_BU(ctx->r6, 0X0);
    // 0x0028F108: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x0028F10C: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x0028F110: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x0028F114: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x0028F118: sll         $a0, $a0, 8
    ctx->r4 = S32(ctx->r4 << 8);
    // 0x0028F11C: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x0028F120: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x0028F124: subu        $v0, $a2, $v0
    ctx->r2 = SUB32(ctx->r6, ctx->r2);
L_0028F128:
    // 0x0028F128: sw          $v0, 0x18($a3)
    MEM_W(0X18, ctx->r7) = ctx->r2;
    // 0x0028F12C: addu        $v0, $s1, $s3
    ctx->r2 = ADD32(ctx->r17, ctx->r19);
    // 0x0028F130: sb          $zero, 0xA8($v0)
    MEM_B(0XA8, ctx->r2) = 0;
    // 0x0028F134: addiu       $v0, $zero, 0x14
    ctx->r2 = ADD32(0, 0X14);
    // 0x0028F138: j           L_0028F1CC
    // 0x0028F13C: sh          $v0, 0x0($s2)
    MEM_H(0X0, ctx->r18) = ctx->r2;
        goto L_0028F1CC;
    // 0x0028F13C: sh          $v0, 0x0($s2)
    MEM_H(0X0, ctx->r18) = ctx->r2;
L_0028F140:
    // 0x0028F140: sh          $v0, 0x0($s2)
    MEM_H(0X0, ctx->r18) = ctx->r2;
    // 0x0028F144: andi        $v0, $s0, 0x80
    ctx->r2 = ctx->r16 & 0X80;
    // 0x0028F148: beq         $v0, $zero, L_0028F16C
    if (ctx->r2 == 0) {
        // 0x0028F14C: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_0028F16C;
    }
    // 0x0028F14C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0028F150: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    // 0x0028F154: jal         0x0028F460
    // 0x0028F158: sb          $s0, 0x8($s2)
    MEM_B(0X8, ctx->r18) = ctx->r16;
    func_0028F460(rdram, ctx);
        goto after_7;
    // 0x0028F158: sb          $s0, 0x8($s2)
    MEM_B(0X8, ctx->r18) = ctx->r16;
    after_7:
    // 0x0028F15C: sb          $v0, 0x9($s2)
    MEM_B(0X9, ctx->r18) = ctx->r2;
    // 0x0028F160: addu        $v0, $s1, $s3
    ctx->r2 = ADD32(ctx->r17, ctx->r19);
    // 0x0028F164: j           L_0028F17C
    // 0x0028F168: sb          $s0, 0xA8($v0)
    MEM_B(0XA8, ctx->r2) = ctx->r16;
        goto L_0028F17C;
    // 0x0028F168: sb          $s0, 0xA8($v0)
    MEM_B(0XA8, ctx->r2) = ctx->r16;
L_0028F16C:
    // 0x0028F16C: addu        $v0, $s1, $s3
    ctx->r2 = ADD32(ctx->r17, ctx->r19);
    // 0x0028F170: lbu         $v0, 0xA8($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0XA8);
    // 0x0028F174: sb          $s0, 0x9($s2)
    MEM_B(0X9, ctx->r18) = ctx->r16;
    // 0x0028F178: sb          $v0, 0x8($s2)
    MEM_B(0X8, ctx->r18) = ctx->r2;
L_0028F17C:
    // 0x0028F17C: lbu         $v0, 0x8($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X8);
    // 0x0028F180: andi        $v1, $v0, 0xF0
    ctx->r3 = ctx->r2 & 0XF0;
    // 0x0028F184: addiu       $v0, $zero, 0xC0
    ctx->r2 = ADD32(0, 0XC0);
    // 0x0028F188: beq         $v1, $v0, L_0028F1C8
    if (ctx->r3 == ctx->r2) {
        // 0x0028F18C: addiu       $v0, $zero, 0xD0
        ctx->r2 = ADD32(0, 0XD0);
            goto L_0028F1C8;
    }
    // 0x0028F18C: addiu       $v0, $zero, 0xD0
    ctx->r2 = ADD32(0, 0XD0);
    // 0x0028F190: beq         $v1, $v0, L_0028F1C8
    if (ctx->r3 == ctx->r2) {
        // 0x0028F194: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_0028F1C8;
    }
    // 0x0028F194: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0028F198: jal         0x0028F460
    // 0x0028F19C: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    func_0028F460(rdram, ctx);
        goto after_8;
    // 0x0028F19C: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    after_8:
    // 0x0028F1A0: lbu         $v1, 0x8($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0X8);
    // 0x0028F1A4: sb          $v0, 0xA($s2)
    MEM_B(0XA, ctx->r18) = ctx->r2;
    // 0x0028F1A8: addiu       $v0, $zero, 0x90
    ctx->r2 = ADD32(0, 0X90);
    // 0x0028F1AC: andi        $v1, $v1, 0xF0
    ctx->r3 = ctx->r3 & 0XF0;
    // 0x0028F1B0: bne         $v1, $v0, L_0028F1CC
    if (ctx->r3 != ctx->r2) {
        // 0x0028F1B4: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_0028F1CC;
    }
    // 0x0028F1B4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0028F1B8: jal         0x0028F98C
    // 0x0028F1BC: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    func_0028F98C(rdram, ctx);
        goto after_9;
    // 0x0028F1BC: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    after_9:
    // 0x0028F1C0: j           L_0028F1CC
    // 0x0028F1C4: sw          $v0, 0xC($s2)
    MEM_W(0XC, ctx->r18) = ctx->r2;
        goto L_0028F1CC;
    // 0x0028F1C4: sw          $v0, 0xC($s2)
    MEM_W(0XC, ctx->r18) = ctx->r2;
L_0028F1C8:
    // 0x0028F1C8: sb          $zero, 0xA($s2)
    MEM_B(0XA, ctx->r18) = 0;
L_0028F1CC:
    // 0x0028F1CC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x0028F1D0: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x0028F1D4: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x0028F1D8: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x0028F1DC: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x0028F1E0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0028F1E4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0028F1E8: jr          $ra
    // 0x0028F1EC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x0028F1EC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_00292A20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00292A20: lw          $v0, 0x60($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X60);
    // 0x00292A24: sll         $a2, $a2, 4
    ctx->r6 = S32(ctx->r6 << 4);
    // 0x00292A28: addu        $v0, $a2, $v0
    ctx->r2 = ADD32(ctx->r6, ctx->r2);
    // 0x00292A2C: sw          $a1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r5;
    // 0x00292A30: lw          $v0, 0x60($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X60);
    // 0x00292A34: lbu         $v1, 0x1($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X1);
    // 0x00292A38: addu        $v0, $a2, $v0
    ctx->r2 = ADD32(ctx->r6, ctx->r2);
    // 0x00292A3C: sb          $v1, 0x7($v0)
    MEM_B(0X7, ctx->r2) = ctx->r3;
    // 0x00292A40: lw          $v0, 0x60($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X60);
    // 0x00292A44: lbu         $v1, 0x0($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X0);
    // 0x00292A48: addu        $v0, $a2, $v0
    ctx->r2 = ADD32(ctx->r6, ctx->r2);
    // 0x00292A4C: sb          $v1, 0x9($v0)
    MEM_B(0X9, ctx->r2) = ctx->r3;
    // 0x00292A50: lw          $v0, 0x60($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X60);
    // 0x00292A54: lbu         $v1, 0x2($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X2);
    // 0x00292A58: addu        $v0, $a2, $v0
    ctx->r2 = ADD32(ctx->r6, ctx->r2);
    // 0x00292A5C: sb          $v1, 0x8($v0)
    MEM_B(0X8, ctx->r2) = ctx->r3;
    // 0x00292A60: lw          $v0, 0x60($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X60);
    // 0x00292A64: lhu         $v1, 0xC($a1)
    ctx->r3 = MEM_HU(ctx->r5, 0XC);
    // 0x00292A68: addu        $a2, $a2, $v0
    ctx->r6 = ADD32(ctx->r6, ctx->r2);
    // 0x00292A6C: jr          $ra
    // 0x00292A70: sh          $v1, 0x4($a2)
    MEM_H(0X4, ctx->r6) = ctx->r3;
    return;
    // 0x00292A70: sh          $v1, 0x4($a2)
    MEM_H(0X4, ctx->r6) = ctx->r3;
;}
RECOMP_FUNC void func_0040E0B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0040E0B0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0040E0B4: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x0040E0B8: lb          $v0, 0xC7($a1)
    ctx->r2 = MEM_B(ctx->r5, 0XC7);
    // 0x0040E0BC: beq         $v0, $zero, L_0040E0CC
    if (ctx->r2 == 0) {
        // 0x0040E0C0: nop
    
            goto L_0040E0CC;
    }
    // 0x0040E0C0: nop

    // 0x0040E0C4: jal         0x00243414
    // 0x0040E0C8: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_00243414(rdram, ctx);
        goto after_0;
    // 0x0040E0C8: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_0:
L_0040E0CC:
    // 0x0040E0CC: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x0040E0D0: jr          $ra
    // 0x0040E0D4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0040E0D4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00285410(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00285410: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x00285414: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x00285418: addu        $s4, $a0, $zero
    ctx->r20 = ADD32(ctx->r4, 0);
    // 0x0028541C: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x00285420: addu        $s3, $zero, $zero
    ctx->r19 = ADD32(0, 0);
    // 0x00285424: sw          $s5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r21;
    // 0x00285428: addiu       $s5, $zero, 0x2
    ctx->r21 = ADD32(0, 0X2);
    // 0x0028542C: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x00285430: addu        $s2, $s3, $zero
    ctx->r18 = ADD32(ctx->r19, 0);
    // 0x00285434: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x00285438: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x0028543C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
L_00285440:
    // 0x00285440: lui         $v0, 0x800F
    ctx->r2 = S32(0X800F << 16);
    // 0x00285444: addiu       $v0, $v0, 0x5EC0
    ctx->r2 = ADD32(ctx->r2, 0X5EC0);
    // 0x00285448: addu        $s1, $s2, $v0
    ctx->r17 = ADD32(ctx->r18, ctx->r2);
    // 0x0028544C: bne         $s4, $zero, L_0028550C
    if (ctx->r20 != 0) {
        // 0x00285450: sw          $s4, 0xCC($s1)
        MEM_W(0XCC, ctx->r17) = ctx->r20;
            goto L_0028550C;
    }
    // 0x00285450: sw          $s4, 0xCC($s1)
    MEM_W(0XCC, ctx->r17) = ctx->r20;
    // 0x00285454: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00285458: lbu         $v0, 0x6CF0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X6CF0);
    // 0x0028545C: beql        $v0, $zero, L_00285510
    if (ctx->r2 == 0) {
        // 0x00285460: addiu       $s3, $s3, 0x1
        ctx->r19 = ADD32(ctx->r19, 0X1);
            goto L_00285510;
    }
    goto skip_0;
    // 0x00285460: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    skip_0:
    // 0x00285464: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x00285468: beq         $v0, $zero, L_0028550C
    if (ctx->r2 == 0) {
        // 0x0028546C: addu        $a1, $zero, $zero
        ctx->r5 = ADD32(0, 0);
            goto L_0028550C;
    }
    // 0x0028546C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x00285470: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x00285474: addiu       $a0, $a0, 0x6758
    ctx->r4 = ADD32(ctx->r4, 0X6758);
    // 0x00285478: jal         0x0029B6F0
    // 0x0028547C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osRecvMesg_recomp(rdram, ctx);
        goto after_0;
    // 0x0028547C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_0:
    // 0x00285480: jal         0x002847E0
    // 0x00285484: addiu       $s0, $s1, 0xD8
    ctx->r16 = ADD32(ctx->r17, 0XD8);
    func_002847E0(rdram, ctx);
        goto after_1;
    // 0x00285484: addiu       $s0, $s1, 0xD8
    ctx->r16 = ADD32(ctx->r17, 0XD8);
    after_1:
    // 0x00285488: addiu       $a0, $s1, 0x140
    ctx->r4 = ADD32(ctx->r17, 0X140);
    // 0x0028548C: addiu       $a1, $s1, 0x16C
    ctx->r5 = ADD32(ctx->r17, 0X16C);
    // 0x00285490: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x00285494: lui         $at, 0x800F
    ctx->r1 = S32(0X800F << 16);
    // 0x00285498: sb          $s5, 0x6750($at)
    MEM_B(0X6750, ctx->r1) = ctx->r21;
    // 0x0028549C: sw          $zero, 0xCC($s1)
    MEM_W(0XCC, ctx->r17) = 0;
    // 0x002854A0: sw          $zero, 0xD0($s1)
    MEM_W(0XD0, ctx->r17) = 0;
    // 0x002854A4: jal         0x0026EB3C
    // 0x002854A8: sw          $zero, 0xD4($s1)
    MEM_W(0XD4, ctx->r17) = 0;
    func_0026EB3C(rdram, ctx);
        goto after_2;
    // 0x002854A8: sw          $zero, 0xD4($s1)
    MEM_W(0XD4, ctx->r17) = 0;
    after_2:
    // 0x002854AC: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x002854B0: addiu       $a0, $a0, 0x6798
    ctx->r4 = ADD32(ctx->r4, 0X6798);
    // 0x002854B4: lb          $a2, 0x4($s1)
    ctx->r6 = MEM_B(ctx->r17, 0X4);
    // 0x002854B8: jal         0x00299198
    // 0x002854BC: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_00299198(rdram, ctx);
        goto after_3;
    // 0x002854BC: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_3:
    // 0x002854C0: jal         0x00298E10
    // 0x002854C4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00298E10(rdram, ctx);
        goto after_4;
    // 0x002854C4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
    // 0x002854C8: jal         0x00298E10
    // 0x002854CC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00298E10(rdram, ctx);
        goto after_5;
    // 0x002854CC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_5:
    // 0x002854D0: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x002854D4: addiu       $a0, $a0, 0x6798
    ctx->r4 = ADD32(ctx->r4, 0X6798);
    // 0x002854D8: lb          $a2, 0x4($s1)
    ctx->r6 = MEM_B(ctx->r17, 0X4);
    // 0x002854DC: jal         0x00299198
    // 0x002854E0: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_00299198(rdram, ctx);
        goto after_6;
    // 0x002854E0: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_6:
    // 0x002854E4: bne         $v0, $zero, L_002854F0
    if (ctx->r2 != 0) {
        // 0x002854E8: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_002854F0;
    }
    // 0x002854E8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x002854EC: sw          $v0, 0xC8($s1)
    MEM_W(0XC8, ctx->r17) = ctx->r2;
L_002854F0:
    // 0x002854F0: lui         $at, 0x800F
    ctx->r1 = S32(0X800F << 16);
    // 0x002854F4: sb          $s5, 0x6750($at)
    MEM_B(0X6750, ctx->r1) = ctx->r21;
    // 0x002854F8: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x002854FC: addiu       $a0, $a0, 0x6758
    ctx->r4 = ADD32(ctx->r4, 0X6758);
    // 0x00285500: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x00285504: jal         0x0029B820
    // 0x00285508: addu        $a2, $a1, $zero
    ctx->r6 = ADD32(ctx->r5, 0);
    osSendMesg_recomp(rdram, ctx);
        goto after_7;
    // 0x00285508: addu        $a2, $a1, $zero
    ctx->r6 = ADD32(ctx->r5, 0);
    after_7:
L_0028550C:
    // 0x0028550C: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
L_00285510:
    // 0x00285510: slti        $v0, $s3, 0x4
    ctx->r2 = SIGNED(ctx->r19) < 0X4 ? 1 : 0;
    // 0x00285514: bne         $v0, $zero, L_00285440
    if (ctx->r2 != 0) {
        // 0x00285518: addiu       $s2, $s2, 0x224
        ctx->r18 = ADD32(ctx->r18, 0X224);
            goto L_00285440;
    }
    // 0x00285518: addiu       $s2, $s2, 0x224
    ctx->r18 = ADD32(ctx->r18, 0X224);
    // 0x0028551C: bne         $s4, $zero, L_00285534
    if (ctx->r20 != 0) {
        // 0x00285520: nop
    
            goto L_00285534;
    }
    // 0x00285520: nop

    // 0x00285524: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x00285528: addiu       $a0, $a0, 0x5A50
    ctx->r4 = ADD32(ctx->r4, 0X5A50);
    // 0x0028552C: jal         0x0026EDA8
    // 0x00285530: nop

    func_0026EDA8(rdram, ctx);
        goto after_8;
    // 0x00285530: nop

    after_8:
L_00285534:
    // 0x00285534: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x00285538: lw          $s5, 0x24($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X24);
    // 0x0028553C: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x00285540: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x00285544: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x00285548: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x0028554C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00285550: jr          $ra
    // 0x00285554: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x00285554: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_0041CC40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041CC40: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x0041CC44: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0041CC48: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x0041CC4C: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x0041CC50: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x0041CC54: lw          $a1, 0x1C($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X1C);
    // 0x0041CC58: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x0041CC5C: addiu       $a0, $a0, -0x6790
    ctx->r4 = ADD32(ctx->r4, -0X6790);
    // 0x0041CC60: jal         0x0025340C
    // 0x0041CC64: nop

    func_0025340C(rdram, ctx);
        goto after_0;
    // 0x0041CC64: nop

    after_0:
    // 0x0041CC68: sll         $v0, $v0, 6
    ctx->r2 = S32(ctx->r2 << 6);
    // 0x0041CC6C: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x0041CC70: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x0041CC74: lhu         $s1, -0x54A8($at)
    ctx->r17 = MEM_HU(ctx->r1, -0X54A8);
    // 0x0041CC78: jal         0x004160F0
    // 0x0041CC7C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_004160F0(rdram, ctx);
        goto after_1;
    // 0x0041CC7C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x0041CC80: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x0041CC84: addiu       $a1, $a1, 0x1330
    ctx->r5 = ADD32(ctx->r5, 0X1330);
    // 0x0041CC88: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x0041CC8C: addiu       $v0, $v0, -0x4
    ctx->r2 = ADD32(ctx->r2, -0X4);
    // 0x0041CC90: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x0041CC94: jal         0x0029E3E0
    // 0x0041CC98: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    func_0029E3E0(rdram, ctx);
        goto after_2;
    // 0x0041CC98: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    after_2:
    // 0x0041CC9C: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x0041CCA0: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x0041CCA4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0041CCA8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x0041CCAC: jr          $ra
    // 0x0041CCB0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x0041CCB0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_004183C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004183C0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x004183C4: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x004183C8: lw          $a2, 0x1C($a1)
    ctx->r6 = MEM_W(ctx->r5, 0X1C);
    // 0x004183CC: lw          $v0, 0x518($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X518);
    // 0x004183D0: sw          $zero, 0xBF4($a2)
    MEM_W(0XBF4, ctx->r6) = 0;
    // 0x004183D4: sb          $zero, 0x30($v0)
    MEM_B(0X30, ctx->r2) = 0;
    // 0x004183D8: lw          $v0, 0x514($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X514);
    // 0x004183DC: lw          $a0, 0x51C($a2)
    ctx->r4 = MEM_W(ctx->r6, 0X51C);
    // 0x004183E0: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x004183E4: addiu       $a1, $a1, -0x77F8
    ctx->r5 = ADD32(ctx->r5, -0X77F8);
    // 0x004183E8: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x004183EC: lw          $a3, 0xA50($a2)
    ctx->r7 = MEM_W(ctx->r6, 0XA50);
    // 0x004183F0: jal         0x00416644
    // 0x004183F4: addiu       $a0, $a0, 0x53C
    ctx->r4 = ADD32(ctx->r4, 0X53C);
    func_00416644(rdram, ctx);
        goto after_0;
    // 0x004183F4: addiu       $a0, $a0, 0x53C
    ctx->r4 = ADD32(ctx->r4, 0X53C);
    after_0:
    // 0x004183F8: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x004183FC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00418400: jr          $ra
    // 0x00418404: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00418404: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_00226A90(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00226A90: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00226A94: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00226A98: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x00226A9C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00226AA0: addu        $s1, $a2, $zero
    ctx->r17 = ADD32(ctx->r6, 0);
    // 0x00226AA4: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x00226AA8: lw          $a0, 0x6C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X6C);
    // 0x00226AAC: jal         0x002017D4
    // 0x00226AB0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_002017D4(rdram, ctx);
        goto after_0;
    // 0x00226AB0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_0:
    // 0x00226AB4: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x00226AB8: jal         0x002017D4
    // 0x00226ABC: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_002017D4(rdram, ctx);
        goto after_1;
    // 0x00226ABC: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_1:
    // 0x00226AC0: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x00226AC4: jal         0x002017D4
    // 0x00226AC8: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_002017D4(rdram, ctx);
        goto after_2;
    // 0x00226AC8: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_2:
    // 0x00226ACC: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x00226AD0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00226AD4: jal         0x002017D4
    // 0x00226AD8: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_002017D4(rdram, ctx);
        goto after_3;
    // 0x00226AD8: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_3:
    // 0x00226ADC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00226AE0: jal         0x00201818
    // 0x00226AE4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_00201818(rdram, ctx);
        goto after_4;
    // 0x00226AE4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_4:
    // 0x00226AE8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00226AEC: jal         0x002017D4
    // 0x00226AF0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_002017D4(rdram, ctx);
        goto after_5;
    // 0x00226AF0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_5:
    // 0x00226AF4: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x00226AF8: andi        $v1, $s1, 0x7
    ctx->r3 = ctx->r17 & 0X7;
    // 0x00226AFC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00226B00: bgez        $s1, L_00226B0C
    if (SIGNED(ctx->r17) >= 0) {
        // 0x00226B04: sllv        $v1, $v0, $v1
        ctx->r3 = S32(ctx->r2 << (ctx->r3 & 31));
            goto L_00226B0C;
    }
    // 0x00226B04: sllv        $v1, $v0, $v1
    ctx->r3 = S32(ctx->r2 << (ctx->r3 & 31));
    // 0x00226B08: addiu       $s1, $s1, 0x7
    ctx->r17 = ADD32(ctx->r17, 0X7);
L_00226B0C:
    // 0x00226B0C: sra         $v0, $s1, 3
    ctx->r2 = S32(SIGNED(ctx->r17) >> 3);
    // 0x00226B10: addu        $v0, $a0, $v0
    ctx->r2 = ADD32(ctx->r4, ctx->r2);
    // 0x00226B14: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x00226B18: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x00226B1C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00226B20: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00226B24: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x00226B28: sltu        $v0, $zero, $v0
    ctx->r2 = 0 < ctx->r2 ? 1 : 0;
    // 0x00226B2C: jr          $ra
    // 0x00226B30: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00226B30: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_00426A94(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00426A94: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x00426A98: sw          $s4, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r20;
    // 0x00426A9C: addu        $s4, $a0, $zero
    ctx->r20 = ADD32(ctx->r4, 0);
    // 0x00426AA0: sw          $s1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r17;
    // 0x00426AA4: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x00426AA8: sw          $s2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r18;
    // 0x00426AAC: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    // 0x00426AB0: sll         $v0, $s4, 2
    ctx->r2 = S32(ctx->r20 << 2);
    // 0x00426AB4: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x00426AB8: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x00426ABC: lw          $v1, 0xC60($at)
    ctx->r3 = MEM_W(ctx->r1, 0XC60);
    // 0x00426AC0: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x00426AC4: sw          $ra, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r31;
    // 0x00426AC8: sw          $s7, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r23;
    // 0x00426ACC: sw          $s6, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r22;
    // 0x00426AD0: sw          $s5, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r21;
    // 0x00426AD4: sw          $s3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r19;
    // 0x00426AD8: beq         $v1, $v0, L_00426AE8
    if (ctx->r3 == ctx->r2) {
        // 0x00426ADC: sw          $s0, 0x48($sp)
        MEM_W(0X48, ctx->r29) = ctx->r16;
            goto L_00426AE8;
    }
    // 0x00426ADC: sw          $s0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r16;
    // 0x00426AE0: j           L_00426BAC
    // 0x00426AE4: addiu       $v0, $zero, -0x2
    ctx->r2 = ADD32(0, -0X2);
    entry_00426BAC(rdram, ctx);
    return;
    // 0x00426AE4: addiu       $v0, $zero, -0x2
    ctx->r2 = ADD32(0, -0X2);
L_00426AE8:
    // 0x00426AE8: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x00426AEC: addiu       $s6, $sp, 0x44
    ctx->r22 = ADD32(ctx->r29, 0X44);
    // 0x00426AF0: addiu       $s5, $sp, 0x20
    ctx->r21 = ADD32(ctx->r29, 0X20);
    // 0x00426AF4: addiu       $s3, $sp, 0x28
    ctx->r19 = ADD32(ctx->r29, 0X28);
    // turok2: reconnected split function: a stray ELF symbol at 0x00426AF8 ended
    // this function early, leaving it without its epilogue. On the
    // hardware execution simply continues into the next instruction.
    func_00426AF8(rdram, ctx);
;}
RECOMP_FUNC void func_00267EA0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00267EA0: jr          $ra
    // 0x00267EA4: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x00267EA4: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void func_0045E524(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0045E524: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
    // 0x0045E528: addiu       $v0, $a0, 0x8
    ctx->r2 = ADD32(ctx->r4, 0X8);
    // 0x0045E52C: sw          $zero, 0x0($a0)
    MEM_W(0X0, ctx->r4) = 0;
    // 0x0045E530: sw          $zero, 0x4($a0)
    MEM_W(0X4, ctx->r4) = 0;
    // 0x0045E534: sw          $zero, 0x8($a0)
    MEM_W(0X8, ctx->r4) = 0;
    // 0x0045E538: sw          $zero, 0x18($a0)
    MEM_W(0X18, ctx->r4) = 0;
    // 0x0045E53C: sw          $zero, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = 0;
L_0045E540:
    // 0x0045E540: sw          $zero, 0xC($v0)
    MEM_W(0XC, ctx->r2) = 0;
    // 0x0045E544: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x0045E548: bgez        $v1, L_0045E540
    if (SIGNED(ctx->r3) >= 0) {
        // 0x0045E54C: addiu       $v0, $v0, -0x4
        ctx->r2 = ADD32(ctx->r2, -0X4);
            goto L_0045E540;
    }
    // 0x0045E54C: addiu       $v0, $v0, -0x4
    ctx->r2 = ADD32(ctx->r2, -0X4);
    // 0x0045E550: jr          $ra
    // 0x0045E554: nop

    return;
    // 0x0045E554: nop

;}
RECOMP_FUNC void func_0025A708(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0025A708: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0025A70C: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x0025A710: lw          $v0, 0x14($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X14);
    // 0x0025A714: lhu         $a3, 0x80($v0)
    ctx->r7 = MEM_HU(ctx->r2, 0X80);
    // 0x0025A718: lui         $a2, 0x800B
    ctx->r6 = S32(0X800B << 16);
    // 0x0025A71C: addiu       $a2, $a2, -0xE8
    ctx->r6 = ADD32(ctx->r6, -0XE8);
    // 0x0025A720: jal         0x00245A98
    // 0x0025A724: nop

    func_00245A98(rdram, ctx);
        goto after_0;
    // 0x0025A724: nop

    after_0:
    // 0x0025A728: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x0025A72C: jr          $ra
    // 0x0025A730: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0025A730: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0040E27C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0040E27C: jr          $ra
    // 0x0040E280: nop

    return;
    // 0x0040E280: nop

;}
RECOMP_FUNC void func_0029A4D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0029A4D0: lui         $v0, 0xA404
    ctx->r2 = S32(0XA404 << 16);
    // 0x0029A4D4: ori         $v0, $v0, 0x10
    ctx->r2 = ctx->r2 | 0X10;
    // 0x0029A4D8: sw          $a0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r4;
    // 0x0029A4DC: jr          $ra
    // 0x0029A4E0: nop

    return;
    // 0x0029A4E0: nop

;}
RECOMP_FUNC void func_0045458C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_0041B5BC:
    // 0x0045458C: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
L_0041B5F0:
    // 0x00454590: lw          $v0, -0x5524($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X5524);
    // 0x00454594: andi        $v0, $v0, 0x100
    ctx->r2 = ctx->r2 & 0X100;
    // 0x00454598: beq         $v0, $zero, L_004545AC
    if (ctx->r2 == 0) {
        // 0x0045459C: lui         $v1, 0x100
        ctx->r3 = S32(0X100 << 16);
            goto L_004545AC;
    }
    // 0x0045459C: lui         $v1, 0x100
    ctx->r3 = S32(0X100 << 16);
    // 0x004545A0: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x004545A4: j           L_0041B5BC
    // 0x004545A8: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    entry_0041B5BC(rdram, ctx);
    return;
    // 0x004545A8: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
L_004545AC:
    // 0x004545AC: lui         $v1, 0xFEFF
    ctx->r3 = S32(0XFEFF << 16);
    // 0x004545B0: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x004545B4: ori         $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 | 0XFFFF;
    // 0x004545B8: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x004545BC: sw          $v0, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r2;
    // 0x004545C0: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x004545C4: lw          $v0, -0x5528($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X5528);
    // 0x004545C8: andi        $v0, $v0, 0x100
    ctx->r2 = ctx->r2 & 0X100;
    // 0x004545CC: beq         $v0, $zero, L_004545E4
    if (ctx->r2 == 0) {
        // 0x004545D0: nop
    
            goto L_004545E4;
    }
    // 0x004545D0: nop

    // 0x004545D4: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x004545D8: addiu       $v0, $v0, 0x596C
    ctx->r2 = ADD32(ctx->r2, 0X596C);
    // 0x004545DC: j           L_0041B5F0
    // 0x004545E0: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    entry_0041B5F0(rdram, ctx);
    return;
    // 0x004545E0: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_004545E4:
    // 0x004545E4: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x004545E8: addiu       $v0, $v0, 0x5988
    ctx->r2 = ADD32(ctx->r2, 0X5988);
    // 0x004545EC: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    // 0x004545F0: jr          $ra
    // 0x004545F4: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x004545F4: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void func_00423ACC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00423ACC: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x00423AD0: lw          $v1, 0x9B0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X9B0);
    // 0x00423AD4: sltiu       $v0, $v1, 0x5
    ctx->r2 = ctx->r3 < 0X5 ? 1 : 0;
    // 0x00423AD8: beq         $v0, $zero, L_00423AF4
    if (ctx->r2 == 0) {
        // 0x00423ADC: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_00423AF4;
    }
    // 0x00423ADC: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x00423AE0: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00423AE4: addu        $at, $at, $v0
    gpr jr_addend_00423AEC = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x00423AE8: lw          $v0, 0x1670($at)
    ctx->r2 = ADD32(ctx->r1, 0X1670);
    // 0x00423AEC: jr          $v0
    // 0x00423AF0: nop

    switch (jr_addend_00423AEC >> 2) {
        case 0: goto L_00423AF4; break;
        case 1: goto L_00423B04; break;
        case 2: goto L_00423B14; break;
        case 3: goto L_00423B24; break;
        case 4: goto L_00423B34; break;
        default: switch_error(__func__, 0x00423AEC, 0x800C1670);
    }
    // 0x00423AF0: nop

L_00423AF4:
    // 0x00423AF4: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00423AF8: addiu       $v0, $v0, 0x5130
    ctx->r2 = ADD32(ctx->r2, 0X5130);
    // 0x00423AFC: j           L_00423B40
    // 0x00423B00: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_00423B40;
    // 0x00423B00: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_00423B04:
    // 0x00423B04: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00423B08: addiu       $v0, $v0, 0x5194
    ctx->r2 = ADD32(ctx->r2, 0X5194);
    // 0x00423B0C: j           L_00423B40
    // 0x00423B10: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_00423B40;
    // 0x00423B10: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_00423B14:
    // 0x00423B14: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00423B18: addiu       $v0, $v0, 0x51D0
    ctx->r2 = ADD32(ctx->r2, 0X51D0);
    // 0x00423B1C: j           L_00423B40
    // 0x00423B20: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_00423B40;
    // 0x00423B20: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_00423B24:
    // 0x00423B24: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00423B28: addiu       $v0, $v0, 0x521C
    ctx->r2 = ADD32(ctx->r2, 0X521C);
    // 0x00423B2C: j           L_00423B40
    // 0x00423B30: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_00423B40;
    // 0x00423B30: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_00423B34:
    // 0x00423B34: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00423B38: addiu       $v0, $v0, 0x527C
    ctx->r2 = ADD32(ctx->r2, 0X527C);
    // 0x00423B3C: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_00423B40:
    // 0x00423B40: jr          $ra
    // 0x00423B44: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x00423B44: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void func_00454724(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_0041B754:
    // 0x00454724: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
L_0041B788:
    // 0x00454728: lw          $v0, -0x5524($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X5524);
    // 0x0045472C: andi        $v0, $v0, 0x800
    ctx->r2 = ctx->r2 & 0X800;
    // 0x00454730: beq         $v0, $zero, L_00454744
    if (ctx->r2 == 0) {
        // 0x00454734: lui         $v1, 0x100
        ctx->r3 = S32(0X100 << 16);
            goto L_00454744;
    }
    // 0x00454734: lui         $v1, 0x100
    ctx->r3 = S32(0X100 << 16);
    // 0x00454738: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x0045473C: j           L_0041B754
    // 0x00454740: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    entry_0041B754(rdram, ctx);
    return;
    // 0x00454740: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
L_00454744:
    // 0x00454744: lui         $v1, 0xFEFF
    ctx->r3 = S32(0XFEFF << 16);
    // 0x00454748: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x0045474C: ori         $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 | 0XFFFF;
    // 0x00454750: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x00454754: sw          $v0, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r2;
    // 0x00454758: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x0045475C: lw          $v0, -0x5528($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X5528);
    // 0x00454760: andi        $v0, $v0, 0x800
    ctx->r2 = ctx->r2 & 0X800;
    // 0x00454764: beq         $v0, $zero, L_0045477C
    if (ctx->r2 == 0) {
        // 0x00454768: nop
    
            goto L_0045477C;
    }
    // 0x00454768: nop

    // 0x0045476C: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00454770: addiu       $v0, $v0, 0x5A14
    ctx->r2 = ADD32(ctx->r2, 0X5A14);
    // 0x00454774: j           L_0041B788
    // 0x00454778: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    entry_0041B788(rdram, ctx);
    return;
    // 0x00454778: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_0045477C:
    // 0x0045477C: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00454780: addiu       $v0, $v0, 0x5A30
    ctx->r2 = ADD32(ctx->r2, 0X5A30);
    // 0x00454784: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    // 0x00454788: jr          $ra
    // 0x0045478C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x0045478C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void func_00256B24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00256B24: addu        $v0, $a0, $a1
    ctx->r2 = ADD32(ctx->r4, ctx->r5);
    // 0x00256B28: lbu         $v0, 0x52C($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X52C);
    // 0x00256B2C: jr          $ra
    // 0x00256B30: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    return;
    // 0x00256B30: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
;}
RECOMP_FUNC void func_00289F30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00289F30: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00289F34: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00289F38: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x00289F3C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00289F40: lui         $s0, 0x8012
    ctx->r16 = S32(0X8012 << 16);
    // 0x00289F44: addiu       $s0, $s0, -0x61D4
    ctx->r16 = ADD32(ctx->r16, -0X61D4);
    // 0x00289F48: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x00289F4C: jal         0x00416AF8
    // 0x00289F50: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00416AF8(rdram, ctx);
        goto after_0;
    // 0x00289F50: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x00289F54: bne         $v0, $zero, L_00289FA8
    if (ctx->r2 != 0) {
        // 0x00289F58: nop
    
            goto L_00289FA8;
    }
    // 0x00289F58: nop

    // 0x00289F5C: jal         0x00284188
    // 0x00289F60: nop

    func_00284188(rdram, ctx);
        goto after_1;
    // 0x00289F60: nop

    after_1:
    // 0x00289F64: beq         $v0, $zero, L_00289FA8
    if (ctx->r2 == 0) {
        // 0x00289F68: nop
    
            goto L_00289FA8;
    }
    // 0x00289F68: nop

    // 0x00289F6C: jal         0x00284408
    // 0x00289F70: nop

    func_00284408(rdram, ctx);
        goto after_2;
    // 0x00289F70: nop

    after_2:
    // 0x00289F74: addiu       $v1, $zero, 0x78
    ctx->r3 = ADD32(0, 0X78);
    // 0x00289F78: bne         $v0, $v1, L_00289FA8
    if (ctx->r2 != ctx->r3) {
        // 0x00289F7C: addiu       $a0, $s0, 0xE84
        ctx->r4 = ADD32(ctx->r16, 0XE84);
            goto L_00289FA8;
    }
    // 0x00289F7C: addiu       $a0, $s0, 0xE84
    ctx->r4 = ADD32(ctx->r16, 0XE84);
    // 0x00289F80: lw          $v0, 0x44($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X44);
    // 0x00289F84: bne         $v0, $zero, L_00289FB8
    if (ctx->r2 != 0) {
        // 0x00289F88: nop
    
            goto L_00289FB8;
    }
    // 0x00289F88: nop

    // 0x00289F8C: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x00289F90: addu        $at, $s1, $at
    ctx->r1 = ADD32(ctx->r17, ctx->r1);
    // 0x00289F94: lw          $v0, 0x3FF4($at)
    ctx->r2 = MEM_W(ctx->r1, 0X3FF4);
    // 0x00289F98: bne         $v0, $zero, L_00289FA8
    if (ctx->r2 != 0) {
        // 0x00289F9C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_00289FA8;
    }
    // 0x00289F9C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00289FA0: jal         0x00412B14
    // 0x00289FA4: sw          $v0, 0x44($a0)
    MEM_W(0X44, ctx->r4) = ctx->r2;
    func_00412B14(rdram, ctx);
        goto after_3;
    // 0x00289FA4: sw          $v0, 0x44($a0)
    MEM_W(0X44, ctx->r4) = ctx->r2;
    after_3:
L_00289FA8:
    // 0x00289FA8: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x00289FAC: lw          $v0, -0x530C($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X530C);
    // 0x00289FB0: beql        $v0, $zero, L_00289FD0
    if (ctx->r2 == 0) {
        // 0x00289FB4: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_00289FD0;
    }
    goto skip_0;
    // 0x00289FB4: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    skip_0:
L_00289FB8:
    // 0x00289FB8: jal         0x00284240
    // 0x00289FBC: nop

    func_00284240(rdram, ctx);
        goto after_4;
    // 0x00289FBC: nop

    after_4:
    // 0x00289FC0: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x00289FC4: bne         $v1, $zero, L_00289FD0
    if (ctx->r3 != 0) {
        // 0x00289FC8: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_00289FD0;
    }
    // 0x00289FC8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00289FCC: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_00289FD0:
    // 0x00289FD0: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x00289FD4: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00289FD8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00289FDC: jr          $ra
    // 0x00289FE0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00289FE0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_0029C8C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0029C8C8: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x0029C8CC: nop

    // 0x0029C8D0: lw          $t9, 0x0($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X0);
    // 0x0029C8D4: sw          $zero, 0x0($v0)
    MEM_W(0X0, ctx->r2) = 0;
    // 0x0029C8D8: jr          $ra
    // 0x0029C8DC: sw          $t9, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r25;
    return;
    // 0x0029C8DC: sw          $t9, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r25;
;}
RECOMP_FUNC void func_00241FC8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00241FC8: addiu       $sp, $sp, -0x108
    ctx->r29 = ADD32(ctx->r29, -0X108);
    // 0x00241FCC: sw          $s7, 0xF4($sp)
    MEM_W(0XF4, ctx->r29) = ctx->r23;
    // 0x00241FD0: addu        $s7, $a0, $zero
    ctx->r23 = ADD32(ctx->r4, 0);
    // 0x00241FD4: sw          $fp, 0xF8($sp)
    MEM_W(0XF8, ctx->r29) = ctx->r30;
    // 0x00241FD8: addu        $fp, $a1, $zero
    ctx->r30 = ADD32(ctx->r5, 0);
    // 0x00241FDC: sw          $s6, 0xF0($sp)
    MEM_W(0XF0, ctx->r29) = ctx->r22;
    // 0x00241FE0: addu        $s6, $zero, $zero
    ctx->r22 = ADD32(0, 0);
    // 0x00241FE4: addu        $a0, $fp, $zero
    ctx->r4 = ADD32(ctx->r30, 0);
    // 0x00241FE8: sw          $ra, 0xFC($sp)
    MEM_W(0XFC, ctx->r29) = ctx->r31;
    // 0x00241FEC: sw          $s5, 0xEC($sp)
    MEM_W(0XEC, ctx->r29) = ctx->r21;
    // 0x00241FF0: sw          $s4, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->r20;
    // 0x00241FF4: sw          $s3, 0xE4($sp)
    MEM_W(0XE4, ctx->r29) = ctx->r19;
    // 0x00241FF8: sw          $s2, 0xE0($sp)
    MEM_W(0XE0, ctx->r29) = ctx->r18;
    // 0x00241FFC: sw          $s1, 0xDC($sp)
    MEM_W(0XDC, ctx->r29) = ctx->r17;
    // 0x00242000: sw          $s0, 0xD8($sp)
    MEM_W(0XD8, ctx->r29) = ctx->r16;
    // 0x00242004: sdc1        $f20, 0x100($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X100, ctx->r29);
    // 0x00242008: lw          $s3, 0x0($s7)
    ctx->r19 = MEM_W(ctx->r23, 0X0);
    // 0x0024200C: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x00242010: jal         0x00241960
    // 0x00242014: addu        $a2, $s3, $zero
    ctx->r6 = ADD32(ctx->r19, 0);
    entry_00241960(rdram, ctx);
        goto after_0;
    // 0x00242014: addu        $a2, $s3, $zero
    ctx->r6 = ADD32(ctx->r19, 0);
    after_0:
    // 0x00242018: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0024201C: lw          $v0, -0x26D0($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X26D0);
    // 0x00242020: beq         $v0, $zero, L_002420FC
    if (ctx->r2 == 0) {
        // 0x00242024: addu        $s2, $s6, $zero
        ctx->r18 = ADD32(ctx->r22, 0);
            goto L_002420FC;
    }
    // 0x00242024: addu        $s2, $s6, $zero
    ctx->r18 = ADD32(ctx->r22, 0);
    // 0x00242028: addiu       $s0, $sp, 0x80
    ctx->r16 = ADD32(ctx->r29, 0X80);
    // 0x0024202C: addiu       $s5, $s3, 0x4
    ctx->r21 = ADD32(ctx->r19, 0X4);
    // 0x00242030: addiu       $s4, $s7, 0x4C
    ctx->r20 = ADD32(ctx->r23, 0X4C);
    // 0x00242034: addiu       $t0, $sp, 0xB0
    ctx->r8 = ADD32(ctx->r29, 0XB0);
    // 0x00242038: sw          $t0, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = ctx->r8;
    // 0x0024203C: addu        $s1, $s6, $zero
    ctx->r17 = ADD32(ctx->r22, 0);
    // 0x00242040: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
L_00242044:
    // 0x00242044: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x00242048: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0024204C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00242050: addu        $at, $at, $s1
    ctx->r1 = ADD32(ctx->r1, ctx->r17);
    // 0x00242054: lw          $v0, -0x26D4($at)
    ctx->r2 = MEM_W(ctx->r1, -0X26D4);
    // 0x00242058: jalr        $v0
    // 0x0024205C: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_1;
    // 0x0024205C: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    after_1:
    // 0x00242060: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00242064: addu        $a1, $s5, $zero
    ctx->r5 = ADD32(ctx->r21, 0);
    // 0x00242068: jal         0x0023C2B0
    // 0x0024206C: addu        $a2, $s4, $zero
    ctx->r6 = ADD32(ctx->r20, 0);
    func_0023C2B0(rdram, ctx);
        goto after_2;
    // 0x0024206C: addu        $a2, $s4, $zero
    ctx->r6 = ADD32(ctx->r20, 0);
    after_2:
    // 0x00242070: beq         $v0, $zero, L_002420E8
    if (ctx->r2 == 0) {
        // 0x00242074: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_002420E8;
    }
    // 0x00242074: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00242078: addu        $a1, $s5, $zero
    ctx->r5 = ADD32(ctx->r21, 0);
    // 0x0024207C: addu        $a2, $s4, $zero
    ctx->r6 = ADD32(ctx->r20, 0);
    // 0x00242080: jal         0x0023C478
    // 0x00242084: addiu       $a3, $sp, 0xC0
    ctx->r7 = ADD32(ctx->r29, 0XC0);
    func_0023C478(rdram, ctx);
        goto after_3;
    // 0x00242084: addiu       $a3, $sp, 0xC0
    ctx->r7 = ADD32(ctx->r29, 0XC0);
    after_3:
    // 0x00242088: beq         $v0, $zero, L_002420E8
    if (ctx->r2 == 0) {
        // 0x0024208C: nop
    
            goto L_002420E8;
    }
    // 0x0024208C: nop

    // 0x00242090: lw          $a1, 0xC0($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XC0);
    // 0x00242094: lw          $a2, 0xC4($sp)
    ctx->r6 = MEM_W(ctx->r29, 0XC4);
    // 0x00242098: lw          $a3, 0xC8($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XC8);
    // 0x0024209C: jal         0x0023C594
    // 0x002420A0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_0023C594(rdram, ctx);
        goto after_4;
    // 0x002420A0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
    // 0x002420A4: beq         $v0, $zero, L_002420E8
    if (ctx->r2 == 0) {
        // 0x002420A8: nop
    
            goto L_002420E8;
    }
    // 0x002420A8: nop

    // 0x002420AC: beq         $s2, $zero, L_002420C4
    if (ctx->r18 == 0) {
        // 0x002420B0: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_002420C4;
    }
    // 0x002420B0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x002420B4: lw          $v0, 0x4($s7)
    ctx->r2 = MEM_W(ctx->r23, 0X4);
    // 0x002420B8: lb          $v0, 0x4($v0)
    ctx->r2 = MEM_B(ctx->r2, 0X4);
    // 0x002420BC: j           L_002420C8
    // 0x002420C0: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
        goto L_002420C8;
    // 0x002420C0: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
L_002420C4:
    // 0x002420C4: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
L_002420C8:
    // 0x002420C8: addu        $a0, $s7, $zero
    ctx->r4 = ADD32(ctx->r23, 0);
    // 0x002420CC: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    // 0x002420D0: lw          $a1, 0xD0($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XD0);
    // 0x002420D4: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x002420D8: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x002420DC: jal         0x0023AB18
    // 0x002420E0: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    func_0023AB18(rdram, ctx);
        goto after_5;
    // 0x002420E0: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    after_5:
    // 0x002420E4: or          $s6, $s6, $v0
    ctx->r22 = ctx->r22 | ctx->r2;
L_002420E8:
    // 0x002420E8: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x002420EC: addu        $at, $at, $s1
    ctx->r1 = ADD32(ctx->r1, ctx->r17);
    // 0x002420F0: lw          $v0, -0x26D0($at)
    ctx->r2 = MEM_W(ctx->r1, -0X26D0);
    // 0x002420F4: bnel        $v0, $zero, L_00242044
    if (ctx->r2 != 0) {
        // 0x002420F8: addiu       $s1, $s1, 0x4
        ctx->r17 = ADD32(ctx->r17, 0X4);
            goto L_00242044;
    }
    goto skip_0;
    // 0x002420F8: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    skip_0:
L_002420FC:
    // 0x002420FC: addiu       $s0, $sp, 0x80
    ctx->r16 = ADD32(ctx->r29, 0X80);
    // 0x00242100: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00242104: jal         0x0023C9CC
    // 0x00242108: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    func_0023C9CC(rdram, ctx);
        goto after_6;
    // 0x00242108: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    after_6:
    // 0x0024210C: lw          $a1, 0x4C($s7)
    ctx->r5 = MEM_W(ctx->r23, 0X4C);
    // 0x00242110: lw          $a2, 0x54($s7)
    ctx->r6 = MEM_W(ctx->r23, 0X54);
    // 0x00242114: jal         0x0023C730
    // 0x00242118: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_0023C730(rdram, ctx);
        goto after_7;
    // 0x00242118: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_7:
    // 0x0024211C: beql        $v0, $zero, L_00242150
    if (ctx->r2 == 0) {
        // 0x00242120: addiu       $s2, $sp, 0x80
        ctx->r18 = ADD32(ctx->r29, 0X80);
            goto L_00242150;
    }
    goto skip_1;
    // 0x00242120: addiu       $s2, $sp, 0x80
    ctx->r18 = ADD32(ctx->r29, 0X80);
    skip_1:
    // 0x00242124: lw          $v0, 0x30($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X30);
    // 0x00242128: beql        $v0, $zero, L_0024214C
    if (ctx->r2 == 0) {
        // 0x0024212C: sw          $fp, 0x30($s3)
        MEM_W(0X30, ctx->r19) = ctx->r30;
            goto L_0024214C;
    }
    goto skip_2;
    // 0x0024212C: sw          $fp, 0x30($s3)
    MEM_W(0X30, ctx->r19) = ctx->r30;
    skip_2:
    // 0x00242130: lwc1        $f1, 0x8($fp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r30, 0X8);
    // 0x00242134: lwc1        $f0, 0x8($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X8);
    // 0x00242138: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x0024213C: nop

    // 0x00242140: bc1f        L_00242150
    if (!c1cs) {
        // 0x00242144: addiu       $s2, $sp, 0x80
        ctx->r18 = ADD32(ctx->r29, 0X80);
            goto L_00242150;
    }
    // 0x00242144: addiu       $s2, $sp, 0x80
    ctx->r18 = ADD32(ctx->r29, 0X80);
    // 0x00242148: sw          $fp, 0x30($s3)
    MEM_W(0X30, ctx->r19) = ctx->r30;
L_0024214C:
    // 0x0024214C: addiu       $s2, $sp, 0x80
    ctx->r18 = ADD32(ctx->r29, 0X80);
L_00242150:
    // 0x00242150: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x00242154: addiu       $s1, $s3, 0x4
    ctx->r17 = ADD32(ctx->r19, 0X4);
    // 0x00242158: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x0024215C: addiu       $s0, $s7, 0x4C
    ctx->r16 = ADD32(ctx->r23, 0X4C);
    // 0x00242160: jal         0x0023C2B0
    // 0x00242164: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    func_0023C2B0(rdram, ctx);
        goto after_8;
    // 0x00242164: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    after_8:
    // 0x00242168: beq         $v0, $zero, L_0024224C
    if (ctx->r2 == 0) {
        // 0x0024216C: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_0024224C;
    }
    // 0x0024216C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x00242170: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x00242174: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    // 0x00242178: jal         0x0023C478
    // 0x0024217C: addiu       $a3, $sp, 0xC0
    ctx->r7 = ADD32(ctx->r29, 0XC0);
    func_0023C478(rdram, ctx);
        goto after_9;
    // 0x0024217C: addiu       $a3, $sp, 0xC0
    ctx->r7 = ADD32(ctx->r29, 0XC0);
    after_9:
    // 0x00242180: beq         $v0, $zero, L_00242250
    if (ctx->r2 == 0) {
        // 0x00242184: addu        $v0, $s6, $zero
        ctx->r2 = ADD32(ctx->r22, 0);
            goto L_00242250;
    }
    // 0x00242184: addu        $v0, $s6, $zero
    ctx->r2 = ADD32(ctx->r22, 0);
    // 0x00242188: lw          $a1, 0xC0($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XC0);
    // 0x0024218C: lw          $a2, 0xC4($sp)
    ctx->r6 = MEM_W(ctx->r29, 0XC4);
    // 0x00242190: lw          $a3, 0xC8($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XC8);
    // 0x00242194: jal         0x0023C594
    // 0x00242198: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_0023C594(rdram, ctx);
        goto after_10;
    // 0x00242198: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_10:
    // 0x0024219C: beq         $v0, $zero, L_00242250
    if (ctx->r2 == 0) {
        // 0x002421A0: addu        $v0, $s6, $zero
        ctx->r2 = ADD32(ctx->r22, 0);
            goto L_00242250;
    }
    // 0x002421A0: addu        $v0, $s6, $zero
    ctx->r2 = ADD32(ctx->r22, 0);
    // 0x002421A4: lwc1        $f12, 0x25C($fp)
    ctx->f12.u32l = MEM_W(ctx->r30, 0X25C);
    // 0x002421A8: jal         0x002982F0
    // 0x002421AC: nop

    func_002982F0(rdram, ctx);
        goto after_11;
    // 0x002421AC: nop

    after_11:
    // 0x002421B0: lwc1        $f12, 0x25C($fp)
    ctx->f12.u32l = MEM_W(ctx->r30, 0X25C);
    // 0x002421B4: jal         0x002974C0
    // 0x002421B8: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    func_002974C0(rdram, ctx);
        goto after_12;
    // 0x002421B8: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    after_12:
    // 0x002421BC: addu        $a0, $s7, $zero
    ctx->r4 = ADD32(ctx->r23, 0);
    // 0x002421C0: addiu       $a1, $sp, 0xB0
    ctx->r5 = ADD32(ctx->r29, 0XB0);
    // 0x002421C4: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    // 0x002421C8: mul.s       $f20, $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = MUL_S(ctx->f20.fl, ctx->f0.fl);
    // 0x002421CC: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x002421D0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x002421D4: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x002421D8: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x002421DC: jal         0x0023AB18
    // 0x002421E0: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    func_0023AB18(rdram, ctx);
        goto after_13;
    // 0x002421E0: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    after_13:
    // 0x002421E4: beq         $v0, $zero, L_00242244
    if (ctx->r2 == 0) {
        // 0x002421E8: lui         $v0, 0x1
        ctx->r2 = S32(0X1 << 16);
            goto L_00242244;
    }
    // 0x002421E8: lui         $v0, 0x1
    ctx->r2 = S32(0X1 << 16);
    // 0x002421EC: lw          $v1, 0x140($fp)
    ctx->r3 = MEM_W(ctx->r30, 0X140);
    // 0x002421F0: or          $a0, $v1, $v0
    ctx->r4 = ctx->r3 | ctx->r2;
    // 0x002421F4: sw          $a0, 0x140($fp)
    MEM_W(0X140, ctx->r30) = ctx->r4;
    // 0x002421F8: lbu         $v1, 0x0($s3)
    ctx->r3 = MEM_BU(ctx->r19, 0X0);
    // 0x002421FC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00242200: bne         $v1, $v0, L_00242220
    if (ctx->r3 != ctx->r2) {
        // 0x00242204: lui         $v1, 0x30
        ctx->r3 = S32(0X30 << 16);
            goto L_00242220;
    }
    // 0x00242204: lui         $v1, 0x30
    ctx->r3 = S32(0X30 << 16);
    // 0x00242208: lw          $v0, 0xD4($s3)
    ctx->r2 = MEM_W(ctx->r19, 0XD4);
    // 0x0024220C: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x00242210: beq         $v0, $zero, L_00242220
    if (ctx->r2 == 0) {
        // 0x00242214: lui         $v0, 0x2
        ctx->r2 = S32(0X2 << 16);
            goto L_00242220;
    }
    // 0x00242214: lui         $v0, 0x2
    ctx->r2 = S32(0X2 << 16);
    // 0x00242218: or          $v0, $a0, $v0
    ctx->r2 = ctx->r4 | ctx->r2;
    // 0x0024221C: sw          $v0, 0x140($fp)
    MEM_W(0X140, ctx->r30) = ctx->r2;
L_00242220:
    // 0x00242220: lwc1        $f0, 0x1C($s3)
    ctx->f0.u32l = MEM_W(ctx->r19, 0X1C);
    // 0x00242224: mtc1        $zero, $f1
    ctx->f_odd[(1 - 1) * 2] = 0;
    // 0x00242228: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x0024222C: nop

    // 0x00242230: bc1f        L_0024223C
    if (!c1cs) {
        // 0x00242234: sw          $fp, 0x30($s3)
        MEM_W(0X30, ctx->r19) = ctx->r30;
            goto L_0024223C;
    }
    // 0x00242234: sw          $fp, 0x30($s3)
    MEM_W(0X30, ctx->r19) = ctx->r30;
    // 0x00242238: swc1        $f1, 0x1C($s3)
    MEM_W(0X1C, ctx->r19) = ctx->f_odd[(1 - 1) * 2];
L_0024223C:
    // 0x0024223C: j           L_00242248
    // 0x00242240: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_00242248;
    // 0x00242240: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_00242244:
    // 0x00242244: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_00242248:
    // 0x00242248: or          $s6, $s6, $v0
    ctx->r22 = ctx->r22 | ctx->r2;
L_0024224C:
    // 0x0024224C: addu        $v0, $s6, $zero
    ctx->r2 = ADD32(ctx->r22, 0);
L_00242250:
    // 0x00242250: lw          $ra, 0xFC($sp)
    ctx->r31 = MEM_W(ctx->r29, 0XFC);
    // 0x00242254: lw          $fp, 0xF8($sp)
    ctx->r30 = MEM_W(ctx->r29, 0XF8);
    // 0x00242258: lw          $s7, 0xF4($sp)
    ctx->r23 = MEM_W(ctx->r29, 0XF4);
    // 0x0024225C: lw          $s6, 0xF0($sp)
    ctx->r22 = MEM_W(ctx->r29, 0XF0);
    // 0x00242260: lw          $s5, 0xEC($sp)
    ctx->r21 = MEM_W(ctx->r29, 0XEC);
    // 0x00242264: lw          $s4, 0xE8($sp)
    ctx->r20 = MEM_W(ctx->r29, 0XE8);
    // 0x00242268: lw          $s3, 0xE4($sp)
    ctx->r19 = MEM_W(ctx->r29, 0XE4);
    // 0x0024226C: lw          $s2, 0xE0($sp)
    ctx->r18 = MEM_W(ctx->r29, 0XE0);
    // 0x00242270: lw          $s1, 0xDC($sp)
    ctx->r17 = MEM_W(ctx->r29, 0XDC);
    // 0x00242274: lw          $s0, 0xD8($sp)
    ctx->r16 = MEM_W(ctx->r29, 0XD8);
    // 0x00242278: ldc1        $f20, 0x100($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X100);
    // 0x0024227C: jr          $ra
    // 0x00242280: addiu       $sp, $sp, 0x108
    ctx->r29 = ADD32(ctx->r29, 0X108);
    return;
    // 0x00242280: addiu       $sp, $sp, 0x108
    ctx->r29 = ADD32(ctx->r29, 0X108);
;}
RECOMP_FUNC void func_0028479C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0028479C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x002847A0: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x002847A4: lbu         $a1, 0x1($a0)
    ctx->r5 = MEM_BU(ctx->r4, 0X1);
    // 0x002847A8: lh          $a2, 0x2($a0)
    ctx->r6 = MEM_H(ctx->r4, 0X2);
    // 0x002847AC: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x002847B0: addiu       $a0, $a0, 0x7078
    ctx->r4 = ADD32(ctx->r4, 0X7078);
    // 0x002847B4: jal         0x00226160
    // 0x002847B8: nop

    func_00226160(rdram, ctx);
        goto after_0;
    // 0x002847B8: nop

    after_0:
    // 0x002847BC: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x002847C0: jr          $ra
    // 0x002847C4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x002847C4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00419C54(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00419C54: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00419C58: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x00419C5C: lui         $s0, 0x8012
    ctx->r16 = S32(0X8012 << 16);
    // 0x00419C60: addiu       $s0, $s0, -0x5512
    ctx->r16 = ADD32(ctx->r16, -0X5512);
    // 0x00419C64: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x00419C68: addu        $a0, $a1, $zero
    ctx->r4 = ADD32(ctx->r5, 0);
    // 0x00419C6C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x00419C70: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x00419C74: lbu         $v1, 0x0($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X0);
    // 0x00419C78: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x00419C7C: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x00419C80: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x00419C84: jal         0x0041648C
    // 0x00419C88: addu        $a1, $v1, $zero
    ctx->r5 = ADD32(ctx->r3, 0);
    func_0041648C(rdram, ctx);
        goto after_0;
    // 0x00419C88: addu        $a1, $v1, $zero
    ctx->r5 = ADD32(ctx->r3, 0);
    after_0:
    // 0x00419C8C: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x00419C90: addiu       $v0, $zero, 0xF7
    ctx->r2 = ADD32(0, 0XF7);
    // 0x00419C94: beql        $v1, $v0, L_00419C9C
    if (ctx->r3 == ctx->r2) {
        // 0x00419C98: addiu       $v1, $zero, 0xF8
        ctx->r3 = ADD32(0, 0XF8);
            goto L_00419C9C;
    }
    goto skip_0;
    // 0x00419C98: addiu       $v1, $zero, 0xF8
    ctx->r3 = ADD32(0, 0XF8);
    skip_0:
L_00419C9C:
    // 0x00419C9C: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    // 0x00419CA0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x00419CA4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x00419CA8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x00419CAC: jr          $ra
    // 0x00419CB0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00419CB0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_002562EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002562EC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x002562F0: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x002562F4: jal         0x00251698
    // 0x002562F8: addiu       $a2, $zero, 0x3C
    ctx->r6 = ADD32(0, 0X3C);
    func_00251698(rdram, ctx);
        goto after_0;
    // 0x002562F8: addiu       $a2, $zero, 0x3C
    ctx->r6 = ADD32(0, 0X3C);
    after_0:
    // 0x002562FC: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x00256300: jr          $ra
    // 0x00256304: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00256304: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_002751BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002751BC: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x002751C0: lwc1        $f0, 0x2C($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X2C);
    // 0x002751C4: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x002751C8: lwc1        $f1, -0x7E24($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, -0X7E24);
    // 0x002751CC: lwc1        $f2, 0x30($a0)
    ctx->f2.u32l = MEM_W(ctx->r4, 0X30);
    // 0x002751D0: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x002751D4: sw          $v0, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = ctx->r2;
    // 0x002751D8: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x002751DC: lwc1        $f1, -0x7E20($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, -0X7E20);
    // 0x002751E0: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x002751E4: sw          $v0, 0x18($a0)
    MEM_W(0X18, ctx->r4) = ctx->r2;
    // 0x002751E8: c.le.s      $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f1.fl <= ctx->f2.fl;
    // 0x002751EC: trunc.w.s   $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(3 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x002751F0: swc1        $f3, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->f_odd[(3 - 1) * 2];
    // 0x002751F4: bc1fl       L_002751FC
    if (!c1cs) {
        // 0x002751F8: mov.s       $f2, $f1
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    ctx->f2.fl = ctx->f1.fl;
            goto L_002751FC;
    }
    goto skip_0;
    // 0x002751F8: mov.s       $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    ctx->f2.fl = ctx->f1.fl;
    skip_0:
L_002751FC:
    // 0x002751FC: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00275200: lwc1        $f1, -0x7E1C($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, -0X7E1C);
    // 0x00275204: mul.s       $f1, $f2, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = MUL_S(ctx->f2.fl, ctx->f1.fl);
    // 0x00275208: lwc1        $f0, 0x20($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X20);
    // 0x0027520C: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00275210: swc1        $f2, 0x30($a0)
    MEM_W(0X30, ctx->r4) = ctx->f2.u32l;
    // 0x00275214: sw          $zero, 0x28($a0)
    MEM_W(0X28, ctx->r4) = 0;
    // 0x00275218: div.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = DIV_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0027521C: jr          $ra
    // 0x00275220: swc1        $f0, 0x34($a0)
    MEM_W(0X34, ctx->r4) = ctx->f0.u32l;
    return;
    // 0x00275220: swc1        $f0, 0x34($a0)
    MEM_W(0X34, ctx->r4) = ctx->f0.u32l;
;}
RECOMP_FUNC void func_00293F60(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00293F60: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x00293F64: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x00293F68: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x00293F6C: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x00293F70: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x00293F74: lhu         $v0, 0x0($a2)
    ctx->r2 = MEM_HU(ctx->r6, 0X0);
    // 0x00293F78: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x00293F7C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x00293F80: sh          $v0, 0x16($s1)
    MEM_H(0X16, ctx->r17) = ctx->r2;
    // 0x00293F84: lbu         $v0, 0x4($a2)
    ctx->r2 = MEM_BU(ctx->r6, 0X4);
    // 0x00293F88: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x00293F8C: sw          $zero, 0xC($s1)
    MEM_W(0XC, ctx->r17) = 0;
    // 0x00293F90: sh          $v0, 0x1A($s1)
    MEM_H(0X1A, ctx->r17) = ctx->r2;
    // 0x00293F94: lhu         $v0, 0x2($a2)
    ctx->r2 = MEM_HU(ctx->r6, 0X2);
    // 0x00293F98: sh          $zero, 0x14($s1)
    MEM_H(0X14, ctx->r17) = 0;
    // 0x00293F9C: sw          $zero, 0x8($s1)
    MEM_W(0X8, ctx->r17) = 0;
    // 0x00293FA0: sh          $v0, 0x18($s1)
    MEM_H(0X18, ctx->r17) = ctx->r2;
    // 0x00293FA4: lh          $a2, 0x0($a2)
    ctx->r6 = MEM_H(ctx->r6, 0X0);
    // 0x00293FA8: jal         0x00294090
    // 0x00293FAC: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    func_00294090(rdram, ctx);
        goto after_0;
    // 0x00293FAC: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    after_0:
    // 0x00293FB0: lw          $a0, 0x10($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X10);
    // 0x00293FB4: beq         $a0, $zero, L_00294070
    if (ctx->r4 == 0) {
        // 0x00293FB8: nop
    
            goto L_00294070;
    }
    // 0x00293FB8: nop

    // 0x00293FBC: lw          $s0, 0xC($a0)
    ctx->r16 = MEM_W(ctx->r4, 0XC);
    // 0x00293FC0: beq         $v0, $zero, L_00294060
    if (ctx->r2 == 0) {
        // 0x00293FC4: addiu       $v0, $zero, 0x200
        ctx->r2 = ADD32(0, 0X200);
            goto L_00294060;
    }
    // 0x00293FC4: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x00293FC8: lw          $v1, 0x8($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X8);
    // 0x00293FCC: sw          $v0, 0xD8($a0)
    MEM_W(0XD8, ctx->r4) = ctx->r2;
    // 0x00293FD0: jal         0x00294B58
    // 0x00293FD4: sw          $zero, 0x8($v1)
    MEM_W(0X8, ctx->r3) = 0;
    func_00294B58(rdram, ctx);
        goto after_1;
    // 0x00293FD4: sw          $zero, 0x8($v1)
    MEM_W(0X8, ctx->r3) = 0;
    after_1:
    // 0x00293FD8: addu        $a3, $v0, $zero
    ctx->r7 = ADD32(ctx->r2, 0);
    // 0x00293FDC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00293FE0: lw          $v1, 0x1C($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X1C);
    // 0x00293FE4: lw          $a1, 0x10($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X10);
    // 0x00293FE8: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
    // 0x00293FEC: sh          $v0, 0x8($a3)
    MEM_H(0X8, ctx->r7) = ctx->r2;
    // 0x00293FF0: sw          $zero, 0xC($a3)
    MEM_W(0XC, ctx->r7) = 0;
    // 0x00293FF4: sw          $v1, 0x4($a3)
    MEM_W(0X4, ctx->r7) = ctx->r3;
    // 0x00293FF8: lw          $v0, 0xD8($a1)
    ctx->r2 = MEM_W(ctx->r5, 0XD8);
    // 0x00293FFC: addu        $a2, $a3, $zero
    ctx->r6 = ADD32(ctx->r7, 0);
    // 0x00294000: addiu       $v0, $v0, -0x40
    ctx->r2 = ADD32(ctx->r2, -0X40);
    // 0x00294004: sw          $v0, 0x10($a3)
    MEM_W(0X10, ctx->r7) = ctx->r2;
    // 0x00294008: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
    // 0x0029400C: jalr        $v0
    // 0x00294010: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_2;
    // 0x00294010: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_2:
    // 0x00294014: jal         0x00294B58
    // 0x00294018: nop

    func_00294B58(rdram, ctx);
        goto after_3;
    // 0x00294018: nop

    after_3:
    // 0x0029401C: addu        $a3, $v0, $zero
    ctx->r7 = ADD32(ctx->r2, 0);
    // 0x00294020: beq         $a3, $zero, L_00294064
    if (ctx->r7 == 0) {
        // 0x00294024: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_00294064;
    }
    // 0x00294024: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00294028: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x0029402C: lw          $v0, 0x10($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X10);
    // 0x00294030: lw          $v1, 0x1C($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X1C);
    // 0x00294034: lw          $a2, 0xD8($v0)
    ctx->r6 = MEM_W(ctx->r2, 0XD8);
    // 0x00294038: addiu       $v0, $zero, 0xF
    ctx->r2 = ADD32(0, 0XF);
    // 0x0029403C: sh          $v0, 0x8($a3)
    MEM_H(0X8, ctx->r7) = ctx->r2;
    // 0x00294040: sw          $zero, 0x0($a3)
    MEM_W(0X0, ctx->r7) = 0;
    // 0x00294044: addu        $v1, $v1, $a2
    ctx->r3 = ADD32(ctx->r3, ctx->r6);
    // 0x00294048: sw          $v1, 0x4($a3)
    MEM_W(0X4, ctx->r7) = ctx->r3;
    // 0x0029404C: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x00294050: jalr        $v0
    // 0x00294054: addu        $a2, $a3, $zero
    ctx->r6 = ADD32(ctx->r7, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_4;
    // 0x00294054: addu        $a2, $a3, $zero
    ctx->r6 = ADD32(ctx->r7, 0);
    after_4:
    // 0x00294058: j           L_00294064
    // 0x0029405C: nop

        goto L_00294064;
    // 0x0029405C: nop

L_00294060:
    // 0x00294060: sw          $zero, 0xD8($a0)
    MEM_W(0XD8, ctx->r4) = 0;
L_00294064:
    // 0x00294064: lw          $v0, 0x10($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X10);
    // 0x00294068: sw          $s1, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r17;
    // 0x0029406C: sw          $v0, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->r2;
L_00294070:
    // 0x00294070: lw          $v0, 0x10($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X10);
    // 0x00294074: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x00294078: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x0029407C: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x00294080: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x00294084: sltu        $v0, $zero, $v0
    ctx->r2 = 0 < ctx->r2 ? 1 : 0;
    // 0x00294088: jr          $ra
    // 0x0029408C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x0029408C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_0025934C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0025934C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00259350: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x00259354: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00259358: lw          $s0, 0x1A8($a0)
    ctx->r16 = MEM_W(ctx->r4, 0X1A8);
    // 0x0025935C: lw          $v0, 0xA64($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XA64);
    // 0x00259360: andi        $v0, $v0, 0x2000
    ctx->r2 = ctx->r2 & 0X2000;
    // 0x00259364: beq         $v0, $zero, L_00259394
    if (ctx->r2 == 0) {
        // 0x00259368: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_00259394;
    }
    // 0x00259368: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0025936C: addiu       $a1, $zero, 0x1130
    ctx->r5 = ADD32(0, 0X1130);
    // 0x00259370: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x00259374: addu        $v0, $a1, $zero
    ctx->r2 = ADD32(ctx->r5, 0);
    // 0x00259378: jal         0x00219F74
    // 0x0025937C: sw          $v0, 0xC04($s0)
    MEM_W(0XC04, ctx->r16) = ctx->r2;
    func_00219F74(rdram, ctx);
        goto after_0;
    // 0x0025937C: sw          $v0, 0xC04($s0)
    MEM_W(0XC04, ctx->r16) = ctx->r2;
    after_0:
    // 0x00259380: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00259384: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x00259388: jal         0x0021E9F8
    // 0x0025938C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_0021E9F8(rdram, ctx);
        goto after_1;
    // 0x0025938C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_1:
    // 0x00259390: sb          $zero, 0xE2($s0)
    MEM_B(0XE2, ctx->r16) = 0;
L_00259394:
    // 0x00259394: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x00259398: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0025939C: jr          $ra
    // 0x002593A0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x002593A0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00214188(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00214188: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x0021418C: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x00214190: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x00214194: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00214198: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x0021419C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x002141A0: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x002141A4: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
    // 0x002141A8: blez        $v0, L_002141D4
    if (SIGNED(ctx->r2) <= 0) {
        // 0x002141AC: addu        $s1, $s0, $zero
        ctx->r17 = ADD32(ctx->r16, 0);
            goto L_002141D4;
    }
    // 0x002141AC: addu        $s1, $s0, $zero
    ctx->r17 = ADD32(ctx->r16, 0);
L_002141B0:
    // 0x002141B0: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x002141B4: jal         0x002017D4
    // 0x002141B8: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_002017D4(rdram, ctx);
        goto after_0;
    // 0x002141B8: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_0:
    // 0x002141BC: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x002141C0: lw          $v1, 0x4($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X4);
    // 0x002141C4: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
    // 0x002141C8: slt         $v0, $s0, $v0
    ctx->r2 = SIGNED(ctx->r16) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x002141CC: bne         $v0, $zero, L_002141B0
    if (ctx->r2 != 0) {
        // 0x002141D0: addu        $s1, $s1, $v1
        ctx->r17 = ADD32(ctx->r17, ctx->r3);
            goto L_002141B0;
    }
    // 0x002141D0: addu        $s1, $s1, $v1
    ctx->r17 = ADD32(ctx->r17, ctx->r3);
L_002141D4:
    // 0x002141D4: addu        $v0, $s1, $zero
    ctx->r2 = ADD32(ctx->r17, 0);
    // 0x002141D8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x002141DC: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x002141E0: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x002141E4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x002141E8: jr          $ra
    // 0x002141EC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x002141EC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_00238914(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00238914: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00238918: addu        $a0, $a1, $zero
    ctx->r4 = ADD32(ctx->r5, 0);
    // 0x0023891C: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x00238920: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    // 0x00238924: lw          $v0, 0x1A8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X1A8);
    // 0x00238928: lw          $a2, 0x30($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X30);
    // 0x0023892C: lw          $v1, 0x24($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X24);
    // 0x00238930: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x00238934: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x00238938: sw          $v1, 0xB18($v0)
    MEM_W(0XB18, ctx->r2) = ctx->r3;
    // 0x0023893C: sw          $t0, 0xB1C($v0)
    MEM_W(0XB1C, ctx->r2) = ctx->r8;
    // 0x00238940: sw          $t1, 0xB20($v0)
    MEM_W(0XB20, ctx->r2) = ctx->r9;
    // 0x00238944: jal         0x00258734
    // 0x00238948: addiu       $a1, $a0, 0x140
    ctx->r5 = ADD32(ctx->r4, 0X140);
    func_00258734(rdram, ctx);
        goto after_0;
    // 0x00238948: addiu       $a1, $a0, 0x140
    ctx->r5 = ADD32(ctx->r4, 0X140);
    after_0:
    // 0x0023894C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x00238950: jr          $ra
    // 0x00238954: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00238954: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00264930(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00264930: lw          $v0, 0xD4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XD4);
    // 0x00264934: ori         $v0, $v0, 0x2100
    ctx->r2 = ctx->r2 | 0X2100;
    // 0x00264938: jr          $ra
    // 0x0026493C: sw          $v0, 0xD4($a0)
    MEM_W(0XD4, ctx->r4) = ctx->r2;
    return;
    // 0x0026493C: sw          $v0, 0xD4($a0)
    MEM_W(0XD4, ctx->r4) = ctx->r2;
;}
RECOMP_FUNC void func_00468590(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00468590: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00468594: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00468598: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x0046859C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x004685A0: lw          $v0, 0x1C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X1C);
    // 0x004685A4: jalr        $v0
    // 0x004685A8: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x004685A8: nop

    after_0:
    // 0x004685AC: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x004685B0: sw          $zero, 0xC($s0)
    MEM_W(0XC, ctx->r16) = 0;
    // 0x004685B4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x004685B8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x004685BC: jr          $ra
    // 0x004685C0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x004685C0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0020E240(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0020E240: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x0020E244: sdc1        $f21, 0x48($sp)
    CHECK_FR(ctx, 21);
    SD(ctx->f21.u64, 0X48, ctx->r29);
    // 0x0020E248: mtc1        $a2, $f21
    ctx->f_odd[(21 - 1) * 2] = ctx->r6;
    // 0x0020E24C: sw          $s2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r18;
    // 0x0020E250: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x0020E254: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x0020E258: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x0020E25C: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x0020E260: sdc1        $f20, 0x40($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X40, ctx->r29);
    // 0x0020E264: jal         0x002113A4
    // 0x0020E268: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    func_002113A4(rdram, ctx);
        goto after_0;
    // 0x0020E268: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    after_0:
    // 0x0020E26C: lui         $v1, 0x68DB
    ctx->r3 = S32(0X68DB << 16);
    // 0x0020E270: ori         $v1, $v1, 0x8BAD
    ctx->r3 = ctx->r3 | 0X8BAD;
    // 0x0020E274: mult        $v0, $v1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x0020E278: sra         $v1, $v0, 31
    ctx->r3 = S32(SIGNED(ctx->r2) >> 31);
    // 0x0020E27C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0020E280: lwc1        $f0, 0x5518($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X5518);
    // 0x0020E284: mfhi        $a3
    ctx->r7 = hi;
    // 0x0020E288: sra         $a0, $a3, 13
    ctx->r4 = S32(SIGNED(ctx->r7) >> 13);
    // 0x0020E28C: subu        $a0, $a0, $v1
    ctx->r4 = SUB32(ctx->r4, ctx->r3);
    // 0x0020E290: sll         $v1, $a0, 2
    ctx->r3 = S32(ctx->r4 << 2);
    // 0x0020E294: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x0020E298: sll         $v1, $v1, 3
    ctx->r3 = S32(ctx->r3 << 3);
    // 0x0020E29C: subu        $v1, $v1, $a0
    ctx->r3 = SUB32(ctx->r3, ctx->r4);
    // 0x0020E2A0: sll         $v1, $v1, 4
    ctx->r3 = S32(ctx->r3 << 4);
    // 0x0020E2A4: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x0020E2A8: sll         $v1, $v1, 5
    ctx->r3 = S32(ctx->r3 << 5);
    // 0x0020E2AC: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x0020E2B0: addiu       $v0, $v0, -0x2710
    ctx->r2 = ADD32(ctx->r2, -0X2710);
    // 0x0020E2B4: mtc1        $v0, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r2;
    // 0x0020E2B8: cvt.s.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.fl = CVT_S_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x0020E2BC: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x0020E2C0: swc1        $f1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    // 0x0020E2C4: lwc1        $f0, 0x4($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X4);
    // 0x0020E2C8: mul.s       $f1, $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f1.fl);
    // 0x0020E2CC: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    // 0x0020E2D0: lwc1        $f0, 0x8($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X8);
    // 0x0020E2D4: addiu       $s0, $sp, 0x10
    ctx->r16 = ADD32(ctx->r29, 0X10);
    // 0x0020E2D8: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    // 0x0020E2DC: lwc1        $f0, 0x4($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X4);
    // 0x0020E2E0: mul.s       $f0, $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x0020E2E4: lwc1        $f12, 0x8($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X8);
    // 0x0020E2E8: mul.s       $f12, $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x0020E2EC: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x0020E2F0: jal         0x00298470
    // 0x0020E2F4: add.s       $f12, $f1, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = ctx->f1.fl + ctx->f12.fl;
    func_00298470(rdram, ctx);
        goto after_1;
    // 0x0020E2F4: add.s       $f12, $f1, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = ctx->f1.fl + ctx->f12.fl;
    after_1:
    // 0x0020E2F8: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x0020E2FC: mov.s       $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    ctx->f1.fl = ctx->f0.fl;
    // 0x0020E300: c.eq.s      $f1, $f20
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f1.fl == ctx->f20.fl;
    // 0x0020E304: nop

    // 0x0020E308: bc1t        L_0020E340
    if (c1cs) {
        // 0x0020E30C: nop
    
            goto L_0020E340;
    }
    // 0x0020E30C: nop

    // 0x0020E310: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0020E314: lwc1        $f2, 0x551C($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X551C);
    // 0x0020E318: lwc1        $f0, 0x10($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X10);
    // 0x0020E31C: div.s       $f2, $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f2.fl = DIV_S(ctx->f2.fl, ctx->f1.fl);
    // 0x0020E320: mul.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f2.fl);
    // 0x0020E324: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    // 0x0020E328: lwc1        $f1, 0x4($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X4);
    // 0x0020E32C: mul.s       $f1, $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f2.fl);
    // 0x0020E330: lwc1        $f0, 0x8($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X8);
    // 0x0020E334: mul.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f2.fl);
    // 0x0020E338: swc1        $f1, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f_odd[(1 - 1) * 2];
    // 0x0020E33C: swc1        $f0, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f0.u32l;
L_0020E340:
    // 0x0020E340: lwc1        $f12, 0x0($s1)
    ctx->f12.u32l = MEM_W(ctx->r17, 0X0);
    // 0x0020E344: mul.s       $f12, $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x0020E348: lwc1        $f1, 0x4($s1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r17, 0X4);
    // 0x0020E34C: mul.s       $f1, $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f1.fl);
    // 0x0020E350: lwc1        $f0, 0x8($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X8);
    // 0x0020E354: mul.s       $f0, $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x0020E358: add.s       $f12, $f12, $f1
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f1.fl;
    // 0x0020E35C: jal         0x00298470
    // 0x0020E360: add.s       $f12, $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f0.fl;
    func_00298470(rdram, ctx);
        goto after_2;
    // 0x0020E360: add.s       $f12, $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f0.fl;
    after_2:
    // 0x0020E364: c.eq.s      $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f0.fl == ctx->f20.fl;
    // 0x0020E368: nop

    // 0x0020E36C: bc1t        L_0020E3A4
    if (c1cs) {
        // 0x0020E370: nop
    
            goto L_0020E3A4;
    }
    // 0x0020E370: nop

    // 0x0020E374: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0020E378: lwc1        $f1, 0x5520($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X5520);
    // 0x0020E37C: lwc1        $f3, 0x0($s1)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r17, 0X0);
    // 0x0020E380: div.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = DIV_S(ctx->f1.fl, ctx->f0.fl);
    // 0x0020E384: mul.s       $f3, $f3, $f1
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f3.fl = MUL_S(ctx->f3.fl, ctx->f1.fl);
    // 0x0020E388: lwc1        $f2, 0x4($s1)
    ctx->f2.u32l = MEM_W(ctx->r17, 0X4);
    // 0x0020E38C: mul.s       $f2, $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f1.fl);
    // 0x0020E390: lwc1        $f0, 0x8($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X8);
    // 0x0020E394: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0020E398: swc1        $f3, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->f_odd[(3 - 1) * 2];
    // 0x0020E39C: swc1        $f2, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->f2.u32l;
    // 0x0020E3A0: swc1        $f0, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->f0.u32l;
L_0020E3A4:
    // 0x0020E3A4: lwc1        $f0, 0x10($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X10);
    // 0x0020E3A8: lwc1        $f1, 0x0($s1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r17, 0X0);
    // 0x0020E3AC: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x0020E3B0: mul.s       $f0, $f21, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f21.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f21.fl, ctx->f0.fl);
    // 0x0020E3B4: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x0020E3B8: swc1        $f1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    // 0x0020E3BC: lwc1        $f0, 0x4($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X4);
    // 0x0020E3C0: lwc1        $f1, 0x4($s1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r17, 0X4);
    // 0x0020E3C4: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x0020E3C8: mul.s       $f0, $f21, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f21.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f21.fl, ctx->f0.fl);
    // 0x0020E3CC: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x0020E3D0: swc1        $f1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    // 0x0020E3D4: lwc1        $f0, 0x8($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X8);
    // 0x0020E3D8: lwc1        $f1, 0x8($s1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r17, 0X8);
    // 0x0020E3DC: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x0020E3E0: mul.s       $f0, $f21, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f21.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f21.fl, ctx->f0.fl);
    // 0x0020E3E4: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x0020E3E8: addu        $v0, $s2, $zero
    ctx->r2 = ADD32(ctx->r18, 0);
    // 0x0020E3EC: swc1        $f1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    // 0x0020E3F0: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x0020E3F4: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x0020E3F8: lw          $t2, 0x28($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X28);
    // 0x0020E3FC: sw          $t0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r8;
    // 0x0020E400: sw          $t1, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r9;
    // 0x0020E404: sw          $t2, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r10;
    // 0x0020E408: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x0020E40C: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x0020E410: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x0020E414: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x0020E418: ldc1        $f21, 0x48($sp)
    CHECK_FR(ctx, 21);
    ctx->f21.u64 = LD(ctx->r29, 0X48);
    // 0x0020E41C: ldc1        $f20, 0x40($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X40);
    // 0x0020E420: jr          $ra
    // 0x0020E424: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x0020E424: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_00455DC0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_0041CE7C:
    // 0x00455DC0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00455DC4: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x00455DC8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x00455DCC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00455DD0: lw          $v1, 0xC($a1)
    ctx->r3 = MEM_W(ctx->r5, 0XC);
    // 0x00455DD4: lw          $v0, 0x238($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X238);
    // 0x00455DD8: lui         $a0, 0x180
    ctx->r4 = S32(0X180 << 16);
    // 0x00455DDC: or          $v0, $v0, $a0
    ctx->r2 = ctx->r2 | ctx->r4;
    // 0x00455DE0: sw          $v0, 0x238($v1)
    MEM_W(0X238, ctx->r3) = ctx->r2;
    // 0x00455DE4: lw          $v1, 0xC($a1)
    ctx->r3 = MEM_W(ctx->r5, 0XC);
    // 0x00455DE8: lw          $v0, 0x260($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X260);
    // 0x00455DEC: or          $v0, $v0, $a0
    ctx->r2 = ctx->r2 | ctx->r4;
    // 0x00455DF0: sw          $v0, 0x260($v1)
    MEM_W(0X260, ctx->r3) = ctx->r2;
    // 0x00455DF4: lw          $v1, 0xC($a1)
    ctx->r3 = MEM_W(ctx->r5, 0XC);
    // 0x00455DF8: lui         $a0, 0xFE7F
    ctx->r4 = S32(0XFE7F << 16);
    // 0x00455DFC: lw          $v0, 0x1C0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X1C0);
    // 0x00455E00: ori         $a0, $a0, 0xFFFF
    ctx->r4 = ctx->r4 | 0XFFFF;
    // 0x00455E04: and         $v0, $v0, $a0
    ctx->r2 = ctx->r2 & ctx->r4;
    // 0x00455E08: sw          $v0, 0x1C0($v1)
    MEM_W(0X1C0, ctx->r3) = ctx->r2;
    // 0x00455E0C: lw          $v1, 0xC($a1)
    ctx->r3 = MEM_W(ctx->r5, 0XC);
    // 0x00455E10: lw          $v0, 0x1E8($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X1E8);
    // 0x00455E14: and         $v0, $v0, $a0
    ctx->r2 = ctx->r2 & ctx->r4;
    // 0x00455E18: sw          $v0, 0x1E8($v1)
    MEM_W(0X1E8, ctx->r3) = ctx->r2;
    // 0x00455E1C: lw          $v1, 0xC($a1)
    ctx->r3 = MEM_W(ctx->r5, 0XC);
    // 0x00455E20: lw          $v0, 0x210($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X210);
    // 0x00455E24: and         $v0, $v0, $a0
    ctx->r2 = ctx->r2 & ctx->r4;
    // 0x00455E28: sw          $v0, 0x210($v1)
    MEM_W(0X210, ctx->r3) = ctx->r2;
    // 0x00455E2C: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x00455E30: lw          $v0, -0x531C($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X531C);
    // 0x00455E34: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x00455E38: sw          $zero, 0x990($at)
    MEM_W(0X990, ctx->r1) = 0;
    // 0x00455E3C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00455E40: sw          $zero, 0x2020($at)
    MEM_W(0X2020, ctx->r1) = 0;
    // 0x00455E44: beq         $v0, $zero, L_00455E64
    if (ctx->r2 == 0) {
        // 0x00455E48: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_00455E64;
    }
    // 0x00455E48: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x00455E4C: lw          $v0, 0xC($a1)
    ctx->r2 = MEM_W(ctx->r5, 0XC);
    // 0x00455E50: lw          $v1, 0x120($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X120);
    // 0x00455E54: lui         $a0, 0x100
    ctx->r4 = S32(0X100 << 16);
    // 0x00455E58: or          $v1, $v1, $a0
    ctx->r3 = ctx->r3 | ctx->r4;
    // 0x00455E5C: j           L_0041CE7C
    // 0x00455E60: sw          $v1, 0x120($v0)
    MEM_W(0X120, ctx->r2) = ctx->r3;
    entry_0041CE7C(rdram, ctx);
    return;
    // 0x00455E60: sw          $v1, 0x120($v0)
    MEM_W(0X120, ctx->r2) = ctx->r3;
L_00455E64:
    // 0x00455E64: lw          $a0, 0xC($a1)
    ctx->r4 = MEM_W(ctx->r5, 0XC);
    // 0x00455E68: lui         $v1, 0xFEFF
    ctx->r3 = S32(0XFEFF << 16);
    // 0x00455E6C: lw          $v0, 0x120($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X120);
    // 0x00455E70: ori         $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 | 0XFFFF;
    // 0x00455E74: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x00455E78: sw          $v0, 0x120($a0)
    MEM_W(0X120, ctx->r4) = ctx->r2;
    // 0x00455E7C: lw          $a1, 0x1C($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X1C);
    // 0x00455E80: beq         $a1, $zero, L_00455E9C
    if (ctx->r5 == 0) {
        // 0x00455E84: nop
    
            goto L_00455E9C;
    }
    // 0x00455E84: nop

    // 0x00455E88: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x00455E8C: addiu       $a0, $a0, -0x6790
    ctx->r4 = ADD32(ctx->r4, -0X6790);
    // 0x00455E90: jal         0x0025340C
    // 0x00455E94: nop

    func_0025340C(rdram, ctx);
        goto after_0;
    // 0x00455E94: nop

    after_0:
    // 0x00455E98: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
L_00455E9C:
    // 0x00455E9C: jal         0x00285A68
    // 0x00455EA0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00285A68(rdram, ctx);
        goto after_1;
    // 0x00455EA0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x00455EA4: jal         0x004263A0
    // 0x00455EA8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_004263A0(rdram, ctx);
        goto after_2;
    // 0x00455EA8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x00455EAC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x00455EB0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00455EB4: jr          $ra
    // 0x00455EB8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00455EB8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00421688(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00421688: jr          $ra
    // 0x0042168C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x0042168C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void func_00233FCC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00233FCC: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x00233FD0: sw          $ra, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r31;
    // 0x00233FD4: sw          $s2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r18;
    // 0x00233FD8: sw          $s1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r17;
    // 0x00233FDC: sw          $s0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r16;
    // 0x00233FE0: lw          $v0, 0x48($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X48);
    // 0x00233FE4: slti        $v0, $v0, 0x2
    ctx->r2 = SIGNED(ctx->r2) < 0X2 ? 1 : 0;
    // 0x00233FE8: bne         $v0, $zero, L_00234164
    if (ctx->r2 != 0) {
        // 0x00233FEC: addu        $s2, $a1, $zero
        ctx->r18 = ADD32(ctx->r5, 0);
            goto L_00234164;
    }
    // 0x00233FEC: addu        $s2, $a1, $zero
    ctx->r18 = ADD32(ctx->r5, 0);
    // 0x00233FF0: lw          $s0, 0x40($a0)
    ctx->r16 = MEM_W(ctx->r4, 0X40);
    // 0x00233FF4: lw          $s1, 0x4($s0)
    ctx->r17 = MEM_W(ctx->r16, 0X4);
    // 0x00233FF8: beq         $s0, $zero, L_0023401C
    if (ctx->r16 == 0) {
        // 0x00233FFC: nop
    
            goto L_0023401C;
    }
    // 0x00233FFC: nop

    // 0x00234000: lw          $a1, 0x1C($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X1C);
    // 0x00234004: lw          $a2, 0x20($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X20);
    // 0x00234008: lw          $a3, 0x24($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X24);
    // 0x0023400C: jal         0x0020FC74
    // 0x00234010: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    func_0020FC74(rdram, ctx);
        goto after_0;
    // 0x00234010: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    after_0:
    // 0x00234014: j           L_00234024
    // 0x00234018: nop

        goto L_00234024;
    // 0x00234018: nop

L_0023401C:
    // 0x0023401C: jal         0x0020F79C
    // 0x00234020: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    func_0020F79C(rdram, ctx);
        goto after_1;
    // 0x00234020: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    after_1:
L_00234024:
    // 0x00234024: beq         $s0, $zero, L_00234134
    if (ctx->r16 == 0) {
        // 0x00234028: addiu       $a0, $sp, 0x10
        ctx->r4 = ADD32(ctx->r29, 0X10);
            goto L_00234134;
    }
    // 0x00234028: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
L_0023402C:
    // 0x0023402C: beq         $s1, $zero, L_00234130
    if (ctx->r17 == 0) {
        // 0x00234030: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_00234130;
    }
    // 0x00234030: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00234034: beq         $s0, $zero, L_002340EC
    if (ctx->r16 == 0) {
        // 0x00234038: addu        $a1, $s1, $zero
        ctx->r5 = ADD32(ctx->r17, 0);
            goto L_002340EC;
    }
    // 0x00234038: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x0023403C: lwc1        $f1, 0x10($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X10);
    // 0x00234040: lwc1        $f0, 0x10($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X10);
    // 0x00234044: c.eq.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl == ctx->f0.fl;
    // 0x00234048: nop

    // 0x0023404C: bc1f        L_002340CC
    if (!c1cs) {
        // 0x00234050: nop
    
            goto L_002340CC;
    }
    // 0x00234050: nop

    // 0x00234054: lwc1        $f1, 0x14($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X14);
    // 0x00234058: lwc1        $f0, 0x14($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X14);
    // 0x0023405C: c.eq.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl == ctx->f0.fl;
    // 0x00234060: nop

    // 0x00234064: bc1f        L_002340CC
    if (!c1cs) {
        // 0x00234068: nop
    
            goto L_002340CC;
    }
    // 0x00234068: nop

L_0023406C:
    // 0x0023406C: lwc1        $f1, 0x18($a0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r4, 0X18);
    // 0x00234070: lwc1        $f0, 0x18($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X18);
    // 0x00234074: c.eq.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl == ctx->f0.fl;
    // 0x00234078: nop

    // 0x0023407C: bc1f        L_002340CC
    if (!c1cs) {
        // 0x00234080: nop
    
            goto L_002340CC;
    }
    // 0x00234080: nop

    // 0x00234084: addu        $a0, $a1, $zero
    ctx->r4 = ADD32(ctx->r5, 0);
    // 0x00234088: lw          $a1, 0x4($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X4);
    // 0x0023408C: beq         $a0, $zero, L_002340EC
    if (ctx->r4 == 0) {
        // 0x00234090: nop
    
            goto L_002340EC;
    }
    // 0x00234090: nop

    // 0x00234094: beq         $a1, $zero, L_002340CC
    if (ctx->r5 == 0) {
        // 0x00234098: nop
    
            goto L_002340CC;
    }
    // 0x00234098: nop

    // 0x0023409C: lwc1        $f1, 0x10($a0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r4, 0X10);
    // 0x002340A0: lwc1        $f0, 0x10($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X10);
    // 0x002340A4: c.eq.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl == ctx->f0.fl;
    // 0x002340A8: nop

    // 0x002340AC: bc1f        L_002340CC
    if (!c1cs) {
        // 0x002340B0: nop
    
            goto L_002340CC;
    }
    // 0x002340B0: nop

    // 0x002340B4: lwc1        $f1, 0x14($a0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r4, 0X14);
    // 0x002340B8: lwc1        $f0, 0x14($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X14);
    // 0x002340BC: c.eq.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl == ctx->f0.fl;
    // 0x002340C0: nop

    // 0x002340C4: bc1t        L_0023406C
    if (c1cs) {
        // 0x002340C8: nop
    
            goto L_0023406C;
    }
    // 0x002340C8: nop

L_002340CC:
    // 0x002340CC: beq         $a0, $zero, L_002340EC
    if (ctx->r4 == 0) {
        // 0x002340D0: nop
    
            goto L_002340EC;
    }
    // 0x002340D0: nop

    // 0x002340D4: beq         $a1, $zero, L_002340EC
    if (ctx->r5 == 0) {
        // 0x002340D8: addu        $a2, $s2, $zero
        ctx->r6 = ADD32(ctx->r18, 0);
            goto L_002340EC;
    }
    // 0x002340D8: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    // 0x002340DC: jal         0x00233E18
    // 0x002340E0: addiu       $a3, $sp, 0x10
    ctx->r7 = ADD32(ctx->r29, 0X10);
    func_00233E18(rdram, ctx);
        goto after_2;
    // 0x002340E0: addiu       $a3, $sp, 0x10
    ctx->r7 = ADD32(ctx->r29, 0X10);
    after_2:
    // 0x002340E4: j           L_00234104
    // 0x002340E8: nop

        goto L_00234104;
    // 0x002340E8: nop

L_002340EC:
    // 0x002340EC: lwc1        $f0, 0x10($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X10);
    // 0x002340F0: swc1        $f0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f0.u32l;
    // 0x002340F4: lwc1        $f0, 0x14($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X14);
    // 0x002340F8: swc1        $f0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f0.u32l;
    // 0x002340FC: lwc1        $f0, 0x18($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X18);
    // 0x00234100: swc1        $f0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f0.u32l;
L_00234104:
    // 0x00234104: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x00234108: lw          $a1, 0x6D1C($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X6D1C);
    // 0x0023410C: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x00234110: sll         $a1, $a1, 6
    ctx->r5 = S32(ctx->r5 << 6);
    // 0x00234114: addiu       $a1, $a1, 0x28
    ctx->r5 = ADD32(ctx->r5, 0X28);
    // 0x00234118: jal         0x0020D274
    // 0x0023411C: addu        $a1, $s0, $a1
    ctx->r5 = ADD32(ctx->r16, ctx->r5);
    func_0020D274(rdram, ctx);
        goto after_3;
    // 0x0023411C: addu        $a1, $s0, $a1
    ctx->r5 = ADD32(ctx->r16, ctx->r5);
    after_3:
    // 0x00234120: addu        $s0, $s1, $zero
    ctx->r16 = ADD32(ctx->r17, 0);
    // 0x00234124: lw          $s1, 0x4($s0)
    ctx->r17 = MEM_W(ctx->r16, 0X4);
    // 0x00234128: bne         $s0, $zero, L_0023402C
    if (ctx->r16 != 0) {
        // 0x0023412C: nop
    
            goto L_0023402C;
    }
    // 0x0023412C: nop

L_00234130:
    // 0x00234130: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
L_00234134:
    // 0x00234134: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x00234138: lw          $a1, 0x6D1C($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X6D1C);
    // 0x0023413C: lwc1        $f0, 0x10($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X10);
    // 0x00234140: sll         $a1, $a1, 6
    ctx->r5 = S32(ctx->r5 << 6);
    // 0x00234144: swc1        $f0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f0.u32l;
    // 0x00234148: lwc1        $f0, 0x14($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X14);
    // 0x0023414C: addiu       $a1, $a1, 0x28
    ctx->r5 = ADD32(ctx->r5, 0X28);
    // 0x00234150: swc1        $f0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f0.u32l;
    // 0x00234154: lwc1        $f0, 0x18($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X18);
    // 0x00234158: addu        $a1, $s0, $a1
    ctx->r5 = ADD32(ctx->r16, ctx->r5);
    // 0x0023415C: jal         0x0020D274
    // 0x00234160: swc1        $f0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f0.u32l;
    func_0020D274(rdram, ctx);
        goto after_4;
    // 0x00234160: swc1        $f0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f0.u32l;
    after_4:
L_00234164:
    // 0x00234164: lw          $ra, 0x5C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X5C);
    // 0x00234168: lw          $s2, 0x58($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X58);
    // 0x0023416C: lw          $s1, 0x54($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X54);
    // 0x00234170: lw          $s0, 0x50($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X50);
    // 0x00234174: jr          $ra
    // 0x00234178: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    return;
    // 0x00234178: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
;}
RECOMP_FUNC void func_0040B324(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0040B324: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0040B328: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x0040B32C: lb          $v0, 0xC7($a1)
    ctx->r2 = MEM_B(ctx->r5, 0XC7);
    // 0x0040B330: beq         $v0, $zero, L_0040B350
    if (ctx->r2 == 0) {
        // 0x0040B334: lui         $v1, 0xF7FF
        ctx->r3 = S32(0XF7FF << 16);
            goto L_0040B350;
    }
    // 0x0040B334: lui         $v1, 0xF7FF
    ctx->r3 = S32(0XF7FF << 16);
    // 0x0040B338: ori         $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 | 0XFFFF;
    // 0x0040B33C: lw          $v0, 0x27C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X27C);
    // 0x0040B340: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x0040B344: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x0040B348: jal         0x00243414
    // 0x0040B34C: sw          $v0, 0x27C($a0)
    MEM_W(0X27C, ctx->r4) = ctx->r2;
    func_00243414(rdram, ctx);
        goto after_0;
    // 0x0040B34C: sw          $v0, 0x27C($a0)
    MEM_W(0X27C, ctx->r4) = ctx->r2;
    after_0:
L_0040B350:
    // 0x0040B350: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x0040B354: jr          $ra
    // 0x0040B358: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0040B358: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00451F30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00451F30: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00451F34: addiu       $v0, $zero, 0x63
    ctx->r2 = ADD32(0, 0X63);
    // 0x00451F38: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x00451F3C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00451F40: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x00451F44: lui         $s0, 0x8012
    ctx->r16 = S32(0X8012 << 16);
    // 0x00451F48: addiu       $s0, $s0, -0x5528
    ctx->r16 = ADD32(ctx->r16, -0X5528);
    // 0x00451F4C: addu        $a0, $a1, $zero
    ctx->r4 = ADD32(ctx->r5, 0);
    // 0x00451F50: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x00451F54: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x00451F58: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x00451F5C: lb          $v0, 0x2B($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X2B);
    // 0x00451F60: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x00451F64: jal         0x0041648C
    // 0x00451F68: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    func_0041648C(rdram, ctx);
        goto after_0;
    // 0x00451F68: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    after_0:
    // 0x00451F6C: sb          $v0, 0x2B($s0)
    MEM_B(0X2B, ctx->r16) = ctx->r2;
    // 0x00451F70: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x00451F74: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x00451F78: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x00451F7C: jr          $ra
    // 0x00451F80: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00451F80: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_00288B1C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00288B1C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x00288B20: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x00288B24: sb          $zero, 0x18($sp)
    MEM_B(0X18, ctx->r29) = 0;
    // 0x00288B28: sb          $zero, 0x19($sp)
    MEM_B(0X19, ctx->r29) = 0;
    // 0x00288B2C: sb          $zero, 0x1A($sp)
    MEM_B(0X1A, ctx->r29) = 0;
    // 0x00288B30: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x00288B34: addu        $at, $a0, $at
    ctx->r1 = ADD32(ctx->r4, ctx->r1);
    // 0x00288B38: lwc1        $f1, 0x3FE4($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X3FE4);
    // 0x00288B3C: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x00288B40: c.lt.s      $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f1.fl < ctx->f2.fl;
    // 0x00288B44: nop

    // 0x00288B48: bc1t        L_00288B90
    if (c1cs) {
        // 0x00288B4C: addiu       $a1, $zero, 0xFF
        ctx->r5 = ADD32(0, 0XFF);
            goto L_00288B90;
    }
    // 0x00288B4C: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x00288B50: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00288B54: lwc1        $f0, -0x6228($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X6228);
    // 0x00288B58: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x00288B5C: nop

    // 0x00288B60: bc1t        L_00288B90
    if (c1cs) {
        // 0x00288B64: addu        $a1, $zero, $zero
        ctx->r5 = ADD32(0, 0);
            goto L_00288B90;
    }
    // 0x00288B64: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x00288B68: c.lt.s      $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f1.fl < ctx->f2.fl;
    // 0x00288B6C: nop

    // 0x00288B70: bc1t        L_00288B90
    if (c1cs) {
        // 0x00288B74: addiu       $a1, $zero, 0xFF
        ctx->r5 = ADD32(0, 0XFF);
            goto L_00288B90;
    }
    // 0x00288B74: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x00288B78: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00288B7C: lwc1        $f0, -0x6224($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X6224);
    // 0x00288B80: mul.s       $f0, $f1, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x00288B84: trunc.w.s   $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(3 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x00288B88: mfc1        $v0, $f3
    ctx->r2 = (int32_t)ctx->f_odd[(3 - 1) * 2];
    // 0x00288B8C: nor         $a1, $zero, $v0
    ctx->r5 = ~(0 | ctx->r2);
L_00288B90:
    // 0x00288B90: sb          $a1, 0x1B($sp)
    MEM_B(0X1B, ctx->r29) = ctx->r5;
    // 0x00288B94: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    // 0x00288B98: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x00288B9C: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x00288BA0: lw          $v0, 0x2030($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2030);
    // 0x00288BA4: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x00288BA8: lw          $v1, 0x2034($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X2034);
    // 0x00288BAC: addu        $a3, $a2, $zero
    ctx->r7 = ADD32(ctx->r6, 0);
    // 0x00288BB0: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x00288BB4: jal         0x002883E0
    // 0x00288BB8: sw          $v1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r3;
    func_002883E0(rdram, ctx);
        goto after_0;
    // 0x00288BB8: sw          $v1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r3;
    after_0:
    // 0x00288BBC: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x00288BC0: jr          $ra
    // 0x00288BC4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x00288BC4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_00206068(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00206068: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x0020606C: sw          $a0, -0x7214($at)
    MEM_W(-0X7214, ctx->r1) = ctx->r4;
    // 0x00206070: jr          $ra
    // 0x00206074: nop

    return;
    // 0x00206074: nop

;}
RECOMP_FUNC void func_004629C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_00429B10:
    // 0x004629C4: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
L_00429C74:
    // 0x004629C8: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x004629CC: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x004629D0: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x004629D4: addu        $s5, $a1, $zero
    ctx->r21 = ADD32(ctx->r5, 0);
    // 0x004629D8: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x004629DC: addu        $s6, $a2, $zero
    ctx->r22 = ADD32(ctx->r6, 0);
    // 0x004629E0: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x004629E4: sw          $fp, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r30;
    // 0x004629E8: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x004629EC: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x004629F0: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x004629F4: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x004629F8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x004629FC: lbu         $v0, 0x65($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X65);
    // 0x00462A00: beq         $v0, $zero, L_00462A1C
    if (ctx->r2 == 0) {
        // 0x00462A04: addu        $s7, $a3, $zero
        ctx->r23 = ADD32(ctx->r7, 0);
            goto L_00462A1C;
    }
    // 0x00462A04: addu        $s7, $a3, $zero
    ctx->r23 = ADD32(ctx->r7, 0);
    // 0x00462A08: jal         0x00429DE4
    // 0x00462A0C: sb          $zero, 0x65($s2)
    MEM_B(0X65, ctx->r18) = 0;
    entry_00429DE4(rdram, ctx);
        goto after_0;
    // 0x00462A0C: sb          $zero, 0x65($s2)
    MEM_B(0X65, ctx->r18) = 0;
    after_0:
    // 0x00462A10: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x00462A14: bne         $a0, $zero, L_00462C74
    if (ctx->r4 != 0) {
        // 0x00462A18: nop
    
            goto L_00462C74;
    }
    // 0x00462A18: nop

L_00462A1C:
    // 0x00462A1C: andi        $v0, $s7, 0xFF
    ctx->r2 = ctx->r23 & 0XFF;
    // 0x00462A20: bne         $v0, $zero, L_00462A2C
    if (ctx->r2 != 0) {
        // 0x00462A24: addiu       $s4, $zero, 0x1
        ctx->r20 = ADD32(0, 0X1);
            goto L_00462A2C;
    }
    // 0x00462A24: addiu       $s4, $zero, 0x1
    ctx->r20 = ADD32(0, 0X1);
    // 0x00462A28: lw          $s4, 0x60($s2)
    ctx->r20 = MEM_W(ctx->r18, 0X60);
L_00462A2C:
    // 0x00462A2C: andi        $v1, $s6, 0xFF
    ctx->r3 = ctx->r22 & 0XFF;
    // 0x00462A30: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00462A34: bne         $v1, $v0, L_00462A80
    if (ctx->r3 != ctx->r2) {
        // 0x00462A38: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_00462A80;
    }
    // 0x00462A38: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x00462A3C: sllv        $v0, $s4, $v0
    ctx->r2 = S32(ctx->r20 << (ctx->r2 & 31));
    // 0x00462A40: addu        $a1, $v0, $s5
    ctx->r5 = ADD32(ctx->r2, ctx->r21);
    // 0x00462A44: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x00462A48: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x00462A4C: subu        $v0, $v0, $s4
    ctx->r2 = SUB32(ctx->r2, ctx->r20);
    // 0x00462A50: sll         $a2, $v0, 1
    ctx->r6 = S32(ctx->r2 << 1);
    // 0x00462A54: blez        $a2, L_00462A78
    if (SIGNED(ctx->r6) <= 0) {
        // 0x00462A58: addu        $v1, $a0, $zero
        ctx->r3 = ADD32(ctx->r4, 0);
            goto L_00462A78;
    }
    // 0x00462A58: addu        $v1, $a0, $zero
    ctx->r3 = ADD32(ctx->r4, 0);
L_00462A5C:
    // 0x00462A5C: lbu         $v0, 0x0($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X0);
    // 0x00462A60: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x00462A64: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x00462A68: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x00462A6C: slt         $v0, $a0, $a2
    ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r6) ? 1 : 0;
    // 0x00462A70: bne         $v0, $zero, L_00462A5C
    if (ctx->r2 != 0) {
        // 0x00462A74: andi        $v1, $v1, 0xFFFF
        ctx->r3 = ctx->r3 & 0XFFFF;
            goto L_00462A5C;
    }
    // 0x00462A74: andi        $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 & 0XFFFF;
L_00462A78:
    // 0x00462A78: sb          $v1, 0x1($s5)
    MEM_B(0X1, ctx->r21) = ctx->r3;
    // 0x00462A7C: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
L_00462A80:
    // 0x00462A80: andi        $fp, $s6, 0xFF
    ctx->r30 = ctx->r22 & 0XFF;
    // 0x00462A84: andi        $v0, $s7, 0xFF
    ctx->r2 = ctx->r23 & 0XFF;
    // 0x00462A88: sll         $s3, $v0, 3
    ctx->r19 = S32(ctx->r2 << 3);
    // 0x00462A8C: sll         $v0, $s0, 5
    ctx->r2 = S32(ctx->r16 << 5);
L_00462A90:
    // 0x00462A90: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x00462A94: bne         $fp, $t0, L_00462AEC
    if (ctx->r30 != ctx->r8) {
        // 0x00462A98: addu        $s1, $s5, $v0
        ctx->r17 = ADD32(ctx->r21, ctx->r2);
            goto L_00462AEC;
    }
    // 0x00462A98: addu        $s1, $s5, $v0
    ctx->r17 = ADD32(ctx->r21, ctx->r2);
    // 0x00462A9C: lhu         $a2, 0x56($s2)
    ctx->r6 = MEM_HU(ctx->r18, 0X56);
    // 0x00462AA0: addu        $a3, $s1, $zero
    ctx->r7 = ADD32(ctx->r17, 0);
    // 0x00462AA4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x00462AA8: lw          $a0, 0x4($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X4);
    // 0x00462AAC: lw          $a1, 0x8($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X8);
    // 0x00462AB0: addu        $a2, $a2, $s3
    ctx->r6 = ADD32(ctx->r6, ctx->r19);
    // 0x00462AB4: addu        $a2, $a2, $s0
    ctx->r6 = ADD32(ctx->r6, ctx->r16);
    // 0x00462AB8: jal         0x00299A40
    // 0x00462ABC: andi        $a2, $a2, 0xFFFF
    ctx->r6 = ctx->r6 & 0XFFFF;
    func_00299A40(rdram, ctx);
        goto after_1;
    // 0x00462ABC: andi        $a2, $a2, 0xFFFF
    ctx->r6 = ctx->r6 & 0XFFFF;
    after_1:
    // 0x00462AC0: lhu         $a2, 0x5A($s2)
    ctx->r6 = MEM_HU(ctx->r18, 0X5A);
    // 0x00462AC4: addu        $a3, $s1, $zero
    ctx->r7 = ADD32(ctx->r17, 0);
    // 0x00462AC8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x00462ACC: lw          $a0, 0x4($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X4);
    // 0x00462AD0: lw          $a1, 0x8($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X8);
    // 0x00462AD4: addu        $a2, $a2, $s3
    ctx->r6 = ADD32(ctx->r6, ctx->r19);
    // 0x00462AD8: addu        $a2, $a2, $s0
    ctx->r6 = ADD32(ctx->r6, ctx->r16);
    // 0x00462ADC: jal         0x00299A40
    // 0x00462AE0: andi        $a2, $a2, 0xFFFF
    ctx->r6 = ctx->r6 & 0XFFFF;
    func_00299A40(rdram, ctx);
        goto after_2;
    // 0x00462AE0: andi        $a2, $a2, 0xFFFF
    ctx->r6 = ctx->r6 & 0XFFFF;
    after_2:
    // 0x00462AE4: j           L_00429B10
    // 0x00462AE8: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    entry_00429B10(rdram, ctx);
    return;
    // 0x00462AE8: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
L_00462AEC:
    // 0x00462AEC: addu        $a3, $s1, $zero
    ctx->r7 = ADD32(ctx->r17, 0);
    // 0x00462AF0: lw          $a0, 0x4($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X4);
    // 0x00462AF4: lhu         $a2, 0x56($s2)
    ctx->r6 = MEM_HU(ctx->r18, 0X56);
    // 0x00462AF8: lw          $a1, 0x8($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X8);
    // 0x00462AFC: addu        $a2, $a2, $s3
    ctx->r6 = ADD32(ctx->r6, ctx->r19);
    // 0x00462B00: addu        $a2, $a2, $s0
    ctx->r6 = ADD32(ctx->r6, ctx->r16);
    // 0x00462B04: jal         0x00299680
    // 0x00462B08: andi        $a2, $a2, 0xFFFF
    ctx->r6 = ctx->r6 & 0XFFFF;
    func_00299680(rdram, ctx);
        goto after_3;
    // 0x00462B08: andi        $a2, $a2, 0xFFFF
    ctx->r6 = ctx->r6 & 0XFFFF;
    after_3:
    // 0x00462B0C: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x00462B10: bne         $a0, $zero, L_00462C24
    if (ctx->r4 != 0) {
        // 0x00462B14: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_00462C24;
    }
    // 0x00462B14: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x00462B18: slti        $v0, $s0, 0x8
    ctx->r2 = SIGNED(ctx->r16) < 0X8 ? 1 : 0;
    // 0x00462B1C: bne         $v0, $zero, L_00462A90
    if (ctx->r2 != 0) {
        // 0x00462B20: sll         $v0, $s0, 5
        ctx->r2 = S32(ctx->r16 << 5);
            goto L_00462A90;
    }
    // 0x00462B20: sll         $v0, $s0, 5
    ctx->r2 = S32(ctx->r16 << 5);
    // 0x00462B24: andi        $v0, $s6, 0xFF
    ctx->r2 = ctx->r22 & 0XFF;
    // 0x00462B28: bne         $v0, $zero, L_00462C74
    if (ctx->r2 != 0) {
        // 0x00462B2C: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_00462C74;
    }
    // 0x00462B2C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x00462B30: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
    // 0x00462B34: sll         $v0, $s4, 1
    ctx->r2 = S32(ctx->r20 << 1);
    // 0x00462B38: addu        $a2, $v0, $s5
    ctx->r6 = ADD32(ctx->r2, ctx->r21);
    // 0x00462B3C: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x00462B40: subu        $v0, $v0, $s4
    ctx->r2 = SUB32(ctx->r2, ctx->r20);
    // 0x00462B44: sll         $a3, $v0, 1
    ctx->r7 = S32(ctx->r2 << 1);
    // 0x00462B48: slt         $v0, $a0, $a3
    ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r7) ? 1 : 0;
    // 0x00462B4C: beq         $v0, $zero, L_00462B70
    if (ctx->r2 == 0) {
        // 0x00462B50: addu        $a1, $v1, $zero
        ctx->r5 = ADD32(ctx->r3, 0);
            goto L_00462B70;
    }
    // 0x00462B50: addu        $a1, $v1, $zero
    ctx->r5 = ADD32(ctx->r3, 0);
L_00462B54:
    // 0x00462B54: lbu         $v0, 0x0($a2)
    ctx->r2 = MEM_BU(ctx->r6, 0X0);
    // 0x00462B58: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x00462B5C: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x00462B60: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x00462B64: slt         $v0, $a1, $a3
    ctx->r2 = SIGNED(ctx->r5) < SIGNED(ctx->r7) ? 1 : 0;
    // 0x00462B68: bne         $v0, $zero, L_00462B54
    if (ctx->r2 != 0) {
        // 0x00462B6C: andi        $v1, $v1, 0xFFFF
        ctx->r3 = ctx->r3 & 0XFFFF;
            goto L_00462B54;
    }
    // 0x00462B6C: andi        $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 & 0XFFFF;
L_00462B70:
    // 0x00462B70: addu        $s4, $v1, $zero
    ctx->r20 = ADD32(ctx->r3, 0);
    // 0x00462B74: lbu         $v1, 0x1($s5)
    ctx->r3 = MEM_BU(ctx->r21, 0X1);
    // 0x00462B78: andi        $v0, $s4, 0xFF
    ctx->r2 = ctx->r20 & 0XFF;
    // 0x00462B7C: beq         $v0, $v1, L_00462C2C
    if (ctx->r2 == ctx->r3) {
        // 0x00462B80: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_00462C2C;
    }
    // 0x00462B80: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x00462B84: andi        $v0, $s7, 0xFF
    ctx->r2 = ctx->r23 & 0XFF;
    // 0x00462B88: sll         $s3, $v0, 3
    ctx->r19 = S32(ctx->r2 << 3);
    // 0x00462B8C: addu        $s1, $s5, $zero
    ctx->r17 = ADD32(ctx->r21, 0);
    // 0x00462B90: addu        $a3, $s1, $zero
    ctx->r7 = ADD32(ctx->r17, 0);
L_00462B94:
    // 0x00462B94: addiu       $s1, $s1, 0x20
    ctx->r17 = ADD32(ctx->r17, 0X20);
    // 0x00462B98: lw          $a0, 0x4($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X4);
    // 0x00462B9C: lhu         $a2, 0x5A($s2)
    ctx->r6 = MEM_HU(ctx->r18, 0X5A);
    // 0x00462BA0: lw          $a1, 0x8($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X8);
    // 0x00462BA4: addu        $a2, $a2, $s3
    ctx->r6 = ADD32(ctx->r6, ctx->r19);
    // 0x00462BA8: addu        $a2, $a2, $s0
    ctx->r6 = ADD32(ctx->r6, ctx->r16);
    // 0x00462BAC: jal         0x00299680
    // 0x00462BB0: andi        $a2, $a2, 0xFFFF
    ctx->r6 = ctx->r6 & 0XFFFF;
    func_00299680(rdram, ctx);
        goto after_4;
    // 0x00462BB0: andi        $a2, $a2, 0xFFFF
    ctx->r6 = ctx->r6 & 0XFFFF;
    after_4:
    // 0x00462BB4: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x00462BB8: slti        $v0, $s0, 0x8
    ctx->r2 = SIGNED(ctx->r16) < 0X8 ? 1 : 0;
    // 0x00462BBC: bne         $v0, $zero, L_00462B94
    if (ctx->r2 != 0) {
        // 0x00462BC0: addu        $a3, $s1, $zero
        ctx->r7 = ADD32(ctx->r17, 0);
            goto L_00462B94;
    }
    // 0x00462BC0: addu        $a3, $s1, $zero
    ctx->r7 = ADD32(ctx->r17, 0);
    // 0x00462BC4: lbu         $v1, 0x1($s5)
    ctx->r3 = MEM_BU(ctx->r21, 0X1);
    // 0x00462BC8: andi        $v0, $s4, 0xFF
    ctx->r2 = ctx->r20 & 0XFF;
    // 0x00462BCC: bne         $v0, $v1, L_00462C74
    if (ctx->r2 != ctx->r3) {
        // 0x00462BD0: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_00462C74;
    }
    // 0x00462BD0: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x00462BD4: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x00462BD8: andi        $v0, $s7, 0xFF
    ctx->r2 = ctx->r23 & 0XFF;
    // 0x00462BDC: sll         $s3, $v0, 3
    ctx->r19 = S32(ctx->r2 << 3);
    // 0x00462BE0: addu        $s1, $s5, $zero
    ctx->r17 = ADD32(ctx->r21, 0);
    // 0x00462BE4: addu        $a3, $s1, $zero
    ctx->r7 = ADD32(ctx->r17, 0);
L_00462BE8:
    // 0x00462BE8: lhu         $a2, 0x56($s2)
    ctx->r6 = MEM_HU(ctx->r18, 0X56);
    // 0x00462BEC: addiu       $s1, $s1, 0x20
    ctx->r17 = ADD32(ctx->r17, 0X20);
    // 0x00462BF0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x00462BF4: lw          $a0, 0x4($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X4);
    // 0x00462BF8: lw          $a1, 0x8($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X8);
    // 0x00462BFC: addu        $a2, $a2, $s3
    ctx->r6 = ADD32(ctx->r6, ctx->r19);
    // 0x00462C00: addu        $a2, $a2, $s0
    ctx->r6 = ADD32(ctx->r6, ctx->r16);
    // 0x00462C04: jal         0x00299A40
    // 0x00462C08: andi        $a2, $a2, 0xFFFF
    ctx->r6 = ctx->r6 & 0XFFFF;
    func_00299A40(rdram, ctx);
        goto after_5;
    // 0x00462C08: andi        $a2, $a2, 0xFFFF
    ctx->r6 = ctx->r6 & 0XFFFF;
    after_5:
    // 0x00462C0C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x00462C10: slti        $v0, $s0, 0x8
    ctx->r2 = SIGNED(ctx->r16) < 0X8 ? 1 : 0;
    // 0x00462C14: bne         $v0, $zero, L_00462BE8
    if (ctx->r2 != 0) {
        // 0x00462C18: addu        $a3, $s1, $zero
        ctx->r7 = ADD32(ctx->r17, 0);
            goto L_00462BE8;
    }
    // 0x00462C18: addu        $a3, $s1, $zero
    ctx->r7 = ADD32(ctx->r17, 0);
    // 0x00462C1C: j           L_00429C74
    // 0x00462C20: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    entry_00429C74(rdram, ctx);
    return;
    // 0x00462C20: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_00462C24:
    // 0x00462C24: j           L_00429C74
    // 0x00462C28: addu        $v0, $a0, $zero
    ctx->r2 = ADD32(ctx->r4, 0);
    entry_00429C74(rdram, ctx);
    return;
    // 0x00462C28: addu        $v0, $a0, $zero
    ctx->r2 = ADD32(ctx->r4, 0);
L_00462C2C:
    // 0x00462C2C: andi        $v0, $s7, 0xFF
    ctx->r2 = ctx->r23 & 0XFF;
    // 0x00462C30: sll         $s3, $v0, 3
    ctx->r19 = S32(ctx->r2 << 3);
    // 0x00462C34: addu        $s1, $s5, $zero
    ctx->r17 = ADD32(ctx->r21, 0);
    // 0x00462C38: addu        $a3, $s1, $zero
    ctx->r7 = ADD32(ctx->r17, 0);
L_00462C3C:
    // 0x00462C3C: lhu         $a2, 0x5A($s2)
    ctx->r6 = MEM_HU(ctx->r18, 0X5A);
    // 0x00462C40: addiu       $s1, $s1, 0x20
    ctx->r17 = ADD32(ctx->r17, 0X20);
    // 0x00462C44: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x00462C48: lw          $a0, 0x4($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X4);
    // 0x00462C4C: lw          $a1, 0x8($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X8);
    // 0x00462C50: addu        $a2, $a2, $s3
    ctx->r6 = ADD32(ctx->r6, ctx->r19);
    // 0x00462C54: addu        $a2, $a2, $s0
    ctx->r6 = ADD32(ctx->r6, ctx->r16);
    // 0x00462C58: jal         0x00299A40
    // 0x00462C5C: andi        $a2, $a2, 0xFFFF
    ctx->r6 = ctx->r6 & 0XFFFF;
    func_00299A40(rdram, ctx);
        goto after_6;
    // 0x00462C5C: andi        $a2, $a2, 0xFFFF
    ctx->r6 = ctx->r6 & 0XFFFF;
    after_6:
    // 0x00462C60: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x00462C64: slti        $v0, $s0, 0x8
    ctx->r2 = SIGNED(ctx->r16) < 0X8 ? 1 : 0;
    // 0x00462C68: bne         $v0, $zero, L_00462C3C
    if (ctx->r2 != 0) {
        // 0x00462C6C: addu        $a3, $s1, $zero
        ctx->r7 = ADD32(ctx->r17, 0);
            goto L_00462C3C;
    }
    // 0x00462C6C: addu        $a3, $s1, $zero
    ctx->r7 = ADD32(ctx->r17, 0);
    // 0x00462C70: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_00462C74:
    // 0x00462C74: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x00462C78: lw          $fp, 0x38($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X38);
    // 0x00462C7C: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x00462C80: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x00462C84: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x00462C88: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x00462C8C: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x00462C90: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x00462C94: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x00462C98: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x00462C9C: jr          $ra
    // 0x00462CA0: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x00462CA0: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_0021F1F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0021F1F8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x0021F1FC: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x0021F200: addiu       $s1, $zero, -0x1
    ctx->r17 = ADD32(0, -0X1);
    // 0x0021F204: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x0021F208: jal         0x0021F358
    // 0x0021F20C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    func_0021F358(rdram, ctx);
        goto after_0;
    // 0x0021F20C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_0:
    // 0x0021F210: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x0021F214: beq         $s0, $zero, L_0021F254
    if (ctx->r16 == 0) {
        // 0x0021F218: addu        $v0, $s1, $zero
        ctx->r2 = ADD32(ctx->r17, 0);
            goto L_0021F254;
    }
    // 0x0021F218: addu        $v0, $s1, $zero
    ctx->r2 = ADD32(ctx->r17, 0);
    // 0x0021F21C: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x0021F220: jal         0x002017D4
    // 0x0021F224: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_002017D4(rdram, ctx);
        goto after_1;
    // 0x0021F224: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_1:
    // 0x0021F228: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x0021F22C: jal         0x002017D4
    // 0x0021F230: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_002017D4(rdram, ctx);
        goto after_2;
    // 0x0021F230: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_2:
    // 0x0021F234: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x0021F238: jal         0x002017D4
    // 0x0021F23C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_002017D4(rdram, ctx);
        goto after_3;
    // 0x0021F23C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_3:
    // 0x0021F240: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0021F244: lbu         $s1, 0x66($v0)
    ctx->r17 = MEM_BU(ctx->r2, 0X66);
    // 0x0021F248: jal         0x002051F4
    // 0x0021F24C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_002051F4(rdram, ctx);
        goto after_4;
    // 0x0021F24C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_4:
    // 0x0021F250: addu        $v0, $s1, $zero
    ctx->r2 = ADD32(ctx->r17, 0);
L_0021F254:
    // 0x0021F254: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x0021F258: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x0021F25C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0021F260: jr          $ra
    // 0x0021F264: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x0021F264: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_00268148(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00268148: jr          $ra
    // 0x0026814C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x0026814C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void func_00256470(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00256470: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00256474: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00256478: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x0025647C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00256480: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x00256484: jal         0x00251A2C
    // 0x00256488: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    func_00251A2C(rdram, ctx);
        goto after_0;
    // 0x00256488: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    after_0:
    // 0x0025648C: lwc1        $f1, 0xA78($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0XA78);
    // 0x00256490: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x00256494: c.eq.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl == ctx->f0.fl;
    // 0x00256498: nop

    // 0x0025649C: bc1f        L_002564B0
    if (!c1cs) {
        // 0x002564A0: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_002564B0;
    }
    // 0x002564A0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x002564A4: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x002564A8: jal         0x0024E5F0
    // 0x002564AC: addiu       $a2, $zero, 0x21
    ctx->r6 = ADD32(0, 0X21);
    func_0024E5F0(rdram, ctx);
        goto after_1;
    // 0x002564AC: addiu       $a2, $zero, 0x21
    ctx->r6 = ADD32(0, 0X21);
    after_1:
L_002564B0:
    // 0x002564B0: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x002564B4: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x002564B8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x002564BC: jr          $ra
    // 0x002564C0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x002564C0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
