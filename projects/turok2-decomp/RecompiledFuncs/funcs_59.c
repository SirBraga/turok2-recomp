#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_0045190C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_00418980:
    // 0x0045190C: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x00451910: lwc1        $f1, -0x550C($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, -0X550C);
    // 0x00451914: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00451918: lwc1        $f0, 0xF40($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0XF40);
    // 0x0045191C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00451920: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00451924: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x00451928: c.eq.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl == ctx->f0.fl;
    // 0x0045192C: nop

    // 0x00451930: bc1f        L_00451948
    if (!c1cs) {
        // 0x00451934: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_00451948;
    }
    // 0x00451934: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x00451938: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0045193C: addiu       $v0, $v0, 0x66B0
    ctx->r2 = ADD32(ctx->r2, 0X66B0);
    // 0x00451940: j           L_00418980
    // 0x00451944: sw          $v0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r2;
    entry_00418980(rdram, ctx);
    return;
    // 0x00451944: sw          $v0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r2;
L_00451948:
    // 0x00451948: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0045194C: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00451950: addiu       $v0, $v0, 0x6698
    ctx->r2 = ADD32(ctx->r2, 0X6698);
    // 0x00451954: jal         0x004160F0
    // 0x00451958: sw          $v0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r2;
    func_004160F0(rdram, ctx);
        goto after_0;
    // 0x00451958: sw          $v0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r2;
    after_0:
    // 0x0045195C: addiu       $v0, $v0, -0x3
    ctx->r2 = ADD32(ctx->r2, -0X3);
    // 0x00451960: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x00451964: addiu       $a1, $a1, 0xE9C
    ctx->r5 = ADD32(ctx->r5, 0XE9C);
    // 0x00451968: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x0045196C: lui         $a2, 0x800C
    ctx->r6 = S32(0X800C << 16);
    // 0x00451970: lw          $a2, 0x1EA8($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X1EA8);
    // 0x00451974: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x00451978: jal         0x0029E3E0
    // 0x0045197C: addiu       $a2, $a2, -0x5
    ctx->r6 = ADD32(ctx->r6, -0X5);
    func_0029E3E0(rdram, ctx);
        goto after_1;
    // 0x0045197C: addiu       $a2, $a2, -0x5
    ctx->r6 = ADD32(ctx->r6, -0X5);
    after_1:
    // 0x00451980: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x00451984: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00451988: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x0045198C: jr          $ra
    // 0x00451990: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00451990: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_002A1384(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002A1384: lui         $v0, 0xA460
    ctx->r2 = S32(0XA460 << 16);
    // 0x002A1388: ori         $v0, $v0, 0x10
    ctx->r2 = ctx->r2 | 0X10;
    // 0x002A138C: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x002A1390: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
    // 0x002A1394: beq         $v0, $zero, L_002A13B0
    if (ctx->r2 == 0) {
        // 0x002A1398: lui         $v1, 0xA460
        ctx->r3 = S32(0XA460 << 16);
            goto L_002A13B0;
    }
    // 0x002A1398: lui         $v1, 0xA460
    ctx->r3 = S32(0XA460 << 16);
    // 0x002A139C: ori         $v1, $v1, 0x10
    ctx->r3 = ctx->r3 | 0X10;
L_002A13A0:
    // 0x002A13A0: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x002A13A4: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
    // 0x002A13A8: bne         $v0, $zero, L_002A13A0
    if (ctx->r2 != 0) {
        // 0x002A13AC: nop
    
            goto L_002A13A0;
    }
    // 0x002A13AC: nop

L_002A13B0:
    // 0x002A13B0: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x002A13B4: jr          $ra
    // 0x002A13B8: nop

    return;
    // 0x002A13B8: nop

;}
RECOMP_FUNC void func_0045B124(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_00422170:
    // 0x0045B124: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x0045B128: lw          $v0, 0x960($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X960);
    // 0x0045B12C: beq         $v0, $zero, L_0045B144
    if (ctx->r2 == 0) {
        // 0x0045B130: nop
    
            goto L_0045B144;
    }
    // 0x0045B130: nop

    // 0x0045B134: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0045B138: addiu       $v0, $v0, 0x4AE0
    ctx->r2 = ADD32(ctx->r2, 0X4AE0);
    // 0x0045B13C: j           L_00422170
    // 0x0045B140: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    entry_00422170(rdram, ctx);
    return;
    // 0x0045B140: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_0045B144:
    // 0x0045B144: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x0045B148: lw          $v0, 0x9A8($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X9A8);
    // 0x0045B14C: beq         $v0, $zero, L_0045B164
    if (ctx->r2 == 0) {
        // 0x0045B150: nop
    
            goto L_0045B164;
    }
    // 0x0045B150: nop

    // 0x0045B154: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0045B158: addiu       $v0, $v0, 0x4AF8
    ctx->r2 = ADD32(ctx->r2, 0X4AF8);
    // 0x0045B15C: j           L_00422170
    // 0x0045B160: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    entry_00422170(rdram, ctx);
    return;
    // 0x0045B160: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_0045B164:
    // 0x0045B164: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0045B168: addiu       $v0, $v0, 0x4AEC
    ctx->r2 = ADD32(ctx->r2, 0X4AEC);
    // 0x0045B16C: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    // 0x0045B170: jr          $ra
    // 0x0045B174: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x0045B174: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void func_00427B4C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00427B4C: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x00427B50: sw          $s2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r18;
    // 0x00427B54: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x00427B58: sw          $s4, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r20;
    // 0x00427B5C: addu        $s4, $a2, $zero
    ctx->r20 = ADD32(ctx->r6, 0);
    // 0x00427B60: sw          $s3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r19;
    // 0x00427B64: addu        $s3, $a1, $zero
    ctx->r19 = ADD32(ctx->r5, 0);
    // 0x00427B68: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x00427B6C: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x00427B70: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x00427B74: jal         0x00429EC4
    // 0x00427B78: sb          $a3, 0x65($s2)
    MEM_B(0X65, ctx->r18) = ctx->r7;
    func_00429EC4(rdram, ctx);
        goto after_0;
    // 0x00427B78: sb          $a3, 0x65($s2)
    MEM_B(0X65, ctx->r18) = ctx->r7;
    after_0:
    // 0x00427B7C: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x00427B80: beq         $s0, $zero, L_00427BA4
    if (ctx->r16 == 0) {
        // 0x00427B84: addu        $s1, $zero, $zero
        ctx->r17 = ADD32(0, 0);
            goto L_00427BA4;
    }
    // 0x00427B84: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x00427B88: j           L_00427BFC
    // 0x00427B8C: nop

        goto L_00427BFC;
    // 0x00427B8C: nop

L_00427B90:
    // 0x00427B90: sb          $zero, 0x65($s2)
    MEM_B(0X65, ctx->r18) = 0;
    // 0x00427B94: jal         0x00429EC4
    // 0x00427B98: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_00429EC4(rdram, ctx);
        goto after_1;
    // 0x00427B98: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_1:
    // 0x00427B9C: j           L_00427BFC
    // 0x00427BA0: addu        $v0, $s0, $zero
    ctx->r2 = ADD32(ctx->r16, 0);
        goto L_00427BFC;
    // 0x00427BA0: addu        $v0, $s0, $zero
    ctx->r2 = ADD32(ctx->r16, 0);
L_00427BA4:
    // 0x00427BA4: andi        $v0, $s3, 0xFF
    ctx->r2 = ctx->r19 & 0XFF;
    // 0x00427BA8: sll         $s3, $v0, 3
    ctx->r19 = S32(ctx->r2 << 3);
L_00427BAC:
    // 0x00427BAC: addu        $a2, $s3, $s1
    ctx->r6 = ADD32(ctx->r19, ctx->r17);
    // 0x00427BB0: andi        $a2, $a2, 0xFFFF
    ctx->r6 = ctx->r6 & 0XFFFF;
    // 0x00427BB4: lw          $a0, 0x4($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X4);
    // 0x00427BB8: lw          $a1, 0x8($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X8);
    // 0x00427BBC: jal         0x00299680
    // 0x00427BC0: addiu       $a3, $sp, 0x10
    ctx->r7 = ADD32(ctx->r29, 0X10);
    func_00299680(rdram, ctx);
        goto after_2;
    // 0x00427BC0: addiu       $a3, $sp, 0x10
    ctx->r7 = ADD32(ctx->r29, 0X10);
    after_2:
    // 0x00427BC4: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x00427BC8: bne         $s0, $zero, L_00427B90
    if (ctx->r16 != 0) {
        // 0x00427BCC: addiu       $a0, $sp, 0x10
        ctx->r4 = ADD32(ctx->r29, 0X10);
            goto L_00427B90;
    }
    // 0x00427BCC: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x00427BD0: jal         0x00429D84
    // 0x00427BD4: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    func_00429D84(rdram, ctx);
        goto after_3;
    // 0x00427BD4: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    after_3:
    // 0x00427BD8: lhu         $v1, 0x0($s4)
    ctx->r3 = MEM_HU(ctx->r20, 0X0);
    // 0x00427BDC: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x00427BE0: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x00427BE4: slti        $v0, $s1, 0x8
    ctx->r2 = SIGNED(ctx->r17) < 0X8 ? 1 : 0;
    // 0x00427BE8: bne         $v0, $zero, L_00427BAC
    if (ctx->r2 != 0) {
        // 0x00427BEC: sh          $v1, 0x0($s4)
        MEM_H(0X0, ctx->r20) = ctx->r3;
            goto L_00427BAC;
    }
    // 0x00427BEC: sh          $v1, 0x0($s4)
    MEM_H(0X0, ctx->r20) = ctx->r3;
    // 0x00427BF0: sb          $zero, 0x65($s2)
    MEM_B(0X65, ctx->r18) = 0;
    // 0x00427BF4: jal         0x00429EC4
    // 0x00427BF8: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_00429EC4(rdram, ctx);
        goto after_4;
    // 0x00427BF8: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_4:
L_00427BFC:
    // 0x00427BFC: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x00427C00: lw          $s4, 0x40($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X40);
    // 0x00427C04: lw          $s3, 0x3C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X3C);
    // 0x00427C08: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x00427C0C: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x00427C10: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x00427C14: jr          $ra
    // 0x00427C18: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x00427C18: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_00407AC8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00407AC8: addiu       $sp, $sp, -0xB0
    ctx->r29 = ADD32(ctx->r29, -0XB0);
    // 0x00407ACC: sw          $s2, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->r18;
    // 0x00407AD0: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x00407AD4: sw          $s1, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r17;
    // 0x00407AD8: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x00407ADC: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    // 0x00407AE0: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x00407AE4: sw          $s0, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r16;
    // 0x00407AE8: lui         $s0, 0x800F
    ctx->r16 = S32(0X800F << 16);
    // 0x00407AEC: addiu       $s0, $s0, 0x1F50
    ctx->r16 = ADD32(ctx->r16, 0X1F50);
    // 0x00407AF0: sw          $ra, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->r31;
    // 0x00407AF4: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x00407AF8: addu        $v1, $a3, $zero
    ctx->r3 = ADD32(ctx->r7, 0);
    // 0x00407AFC: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    // 0x00407B00: ori         $v0, $v0, 0x8000
    ctx->r2 = ctx->r2 | 0X8000;
    // 0x00407B04: jal         0x00246108
    // 0x00407B08: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    func_00246108(rdram, ctx);
        goto after_0;
    // 0x00407B08: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    after_0:
    // 0x00407B0C: lui         $v1, 0xFFFF
    ctx->r3 = S32(0XFFFF << 16);
    // 0x00407B10: ori         $v1, $v1, 0x7FFF
    ctx->r3 = ctx->r3 | 0X7FFF;
    // 0x00407B14: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x00407B18: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x00407B1C: lui         $a2, 0x3E86
    ctx->r6 = S32(0X3E86 << 16);
    // 0x00407B20: ori         $a2, $a2, 0xA93
    ctx->r6 = ctx->r6 | 0XA93;
    // 0x00407B24: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x00407B28: lw          $a3, 0x20($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X20);
    // 0x00407B2C: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x00407B30: jal         0x00245BAC
    // 0x00407B34: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    func_00245BAC(rdram, ctx);
        goto after_1;
    // 0x00407B34: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    after_1:
    // 0x00407B38: lb          $v0, 0xC7($s1)
    ctx->r2 = MEM_B(ctx->r17, 0XC7);
    // 0x00407B3C: beq         $v0, $zero, L_00407B68
    if (ctx->r2 == 0) {
        // 0x00407B40: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_00407B68;
    }
    // 0x00407B40: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x00407B44: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x00407B48: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00407B4C: lwc1        $f0, 0x55C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X55C);
    // 0x00407B50: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x00407B54: swc1        $f0, 0x1FC($a0)
    MEM_W(0X1FC, ctx->r4) = ctx->f0.u32l;
    // 0x00407B58: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x00407B5C: sw          $v0, -0x5FC($at)
    MEM_W(-0X5FC, ctx->r1) = ctx->r2;
    // 0x00407B60: jal         0x00243414
    // 0x00407B64: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
    func_00243414(rdram, ctx);
        goto after_2;
    // 0x00407B64: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
    after_2:
L_00407B68:
    // 0x00407B68: lw          $ra, 0xAC($sp)
    ctx->r31 = MEM_W(ctx->r29, 0XAC);
    // 0x00407B6C: lw          $s2, 0xA8($sp)
    ctx->r18 = MEM_W(ctx->r29, 0XA8);
    // 0x00407B70: lw          $s1, 0xA4($sp)
    ctx->r17 = MEM_W(ctx->r29, 0XA4);
    // 0x00407B74: lw          $s0, 0xA0($sp)
    ctx->r16 = MEM_W(ctx->r29, 0XA0);
    // 0x00407B78: jr          $ra
    // 0x00407B7C: addiu       $sp, $sp, 0xB0
    ctx->r29 = ADD32(ctx->r29, 0XB0);
    return;
    // 0x00407B7C: addiu       $sp, $sp, 0xB0
    ctx->r29 = ADD32(ctx->r29, 0XB0);
;}
RECOMP_FUNC void func_002855E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002855E8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x002855EC: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x002855F0: lw          $v0, 0xB4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XB4);
    // 0x002855F4: andi        $v0, $v0, 0xD000
    ctx->r2 = ctx->r2 & 0XD000;
    // 0x002855F8: beq         $v0, $zero, L_0028561C
    if (ctx->r2 == 0) {
        // 0x002855FC: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_0028561C;
    }
    // 0x002855FC: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x00285600: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00285604: lw          $v0, 0x6CF8($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X6CF8);
    // 0x00285608: beq         $v0, $zero, L_0028561C
    if (ctx->r2 == 0) {
        // 0x0028560C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_0028561C;
    }
    // 0x0028560C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00285610: jal         0x00275624
    // 0x00285614: addiu       $a0, $zero, 0x12C
    ctx->r4 = ADD32(0, 0X12C);
    func_00275624(rdram, ctx);
        goto after_0;
    // 0x00285614: addiu       $a0, $zero, 0x12C
    ctx->r4 = ADD32(0, 0X12C);
    after_0:
    // 0x00285618: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_0028561C:
    // 0x0028561C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x00285620: jr          $ra
    // 0x00285624: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00285624: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0040783C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0040783C: lw          $v0, 0xD4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XD4);
    // 0x00407840: sw          $zero, 0x18($a0)
    MEM_W(0X18, ctx->r4) = 0;
    // 0x00407844: sw          $zero, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = 0;
    // 0x00407848: sw          $zero, 0x20($a0)
    MEM_W(0X20, ctx->r4) = 0;
    // 0x0040784C: ori         $v0, $v0, 0x2000
    ctx->r2 = ctx->r2 | 0X2000;
    // 0x00407850: jr          $ra
    // 0x00407854: sw          $v0, 0xD4($a0)
    MEM_W(0XD4, ctx->r4) = ctx->r2;
    return;
    // 0x00407854: sw          $v0, 0xD4($a0)
    MEM_W(0XD4, ctx->r4) = ctx->r2;
;}
RECOMP_FUNC void func_00241004(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00241004: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00241008: sw          $a0, -0x477C($at)
    MEM_W(-0X477C, ctx->r1) = ctx->r4;
    // 0x0024100C: beq         $v0, $zero, L_002416B4
    if (ctx->r2 == 0) {
        // 0x00241010: addiu       $sp, $sp, -0x108
        ctx->r29 = ADD32(ctx->r29, -0X108);
            goto L_002416B4;
    }
    // 0x00241010: addiu       $sp, $sp, -0x108
    ctx->r29 = ADD32(ctx->r29, -0X108);
    // 0x00241014: sw          $s1, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->r17;
    // 0x00241018: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x0024101C: addiu       $a0, $sp, 0x70
    ctx->r4 = ADD32(ctx->r29, 0X70);
    // 0x00241020: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x00241024: sw          $ra, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->r31;
    // 0x00241028: sw          $fp, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = ctx->r30;
    // 0x0024102C: sw          $s7, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->r23;
    // 0x00241030: sw          $s6, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->r22;
    // 0x00241034: sw          $s5, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->r21;
    // 0x00241038: sw          $s4, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->r20;
    // 0x0024103C: sw          $s3, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->r19;
    // 0x00241040: sw          $s2, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->r18;
    // 0x00241044: sw          $s0, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->r16;
    // 0x00241048: sdc1        $f25, 0x100($sp)
    CHECK_FR(ctx, 25);
    SD(ctx->f25.u64, 0X100, ctx->r29);
    // 0x0024104C: sdc1        $f24, 0xF8($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0XF8, ctx->r29);
    // 0x00241050: sdc1        $f23, 0xF0($sp)
    CHECK_FR(ctx, 23);
    SD(ctx->f23.u64, 0XF0, ctx->r29);
    // 0x00241054: sdc1        $f22, 0xE8($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0XE8, ctx->r29);
    // 0x00241058: sdc1        $f21, 0xE0($sp)
    CHECK_FR(ctx, 21);
    SD(ctx->f21.u64, 0XE0, ctx->r29);
    // 0x0024105C: sdc1        $f20, 0xD8($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0XD8, ctx->r29);
    // 0x00241060: lui         $t3, 0x800A
    ctx->r11 = S32(0X800A << 16);
    // 0x00241064: addiu       $t3, $t3, 0x6820
    ctx->r11 = ADD32(ctx->r11, 0X6820);
    // 0x00241068: lw          $t0, 0x0($t3)
    ctx->r8 = MEM_W(ctx->r11, 0X0);
    // 0x0024106C: lw          $t1, 0x4($t3)
    ctx->r9 = MEM_W(ctx->r11, 0X4);
    // 0x00241070: lw          $t2, 0x8($t3)
    ctx->r10 = MEM_W(ctx->r11, 0X8);
    // 0x00241074: sw          $t0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r8;
    // 0x00241078: sw          $t1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r9;
    // 0x0024107C: sw          $t2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r10;
    // 0x00241080: lui         $t3, 0x800A
    ctx->r11 = S32(0X800A << 16);
    // 0x00241084: addiu       $t3, $t3, 0x682C
    ctx->r11 = ADD32(ctx->r11, 0X682C);
    // 0x00241088: lw          $t0, 0x0($t3)
    ctx->r8 = MEM_W(ctx->r11, 0X0);
    // 0x0024108C: lw          $t1, 0x4($t3)
    ctx->r9 = MEM_W(ctx->r11, 0X4);
    // 0x00241090: lw          $t2, 0x8($t3)
    ctx->r10 = MEM_W(ctx->r11, 0X8);
    // 0x00241094: sw          $t0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r8;
    // 0x00241098: sw          $t1, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r9;
    // 0x0024109C: sw          $t2, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r10;
    // 0x002410A0: jal         0x00266C5C
    // 0x002410A4: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    func_00266C5C(rdram, ctx);
        goto after_0;
    // 0x002410A4: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    after_0:
    // 0x002410A8: lw          $a0, 0x4($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X4);
    // 0x002410AC: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x002410B0: lui         $v1, 0x100
    ctx->r3 = S32(0X100 << 16);
    // 0x002410B4: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x002410B8: bne         $v0, $zero, L_0024180C
    if (ctx->r2 != 0) {
        // 0x002410BC: nop
    
            goto L_0024180C;
    }
    // 0x002410BC: nop

    // 0x002410C0: lw          $v1, 0x0($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X0);
    // 0x002410C4: lw          $v0, 0x10($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X10);
    // 0x002410C8: beq         $v0, $zero, L_0024180C
    if (ctx->r2 == 0) {
        // 0x002410CC: nop
    
            goto L_0024180C;
    }
    // 0x002410CC: nop

    // 0x002410D0: lb          $v0, 0x5($a0)
    ctx->r2 = MEM_B(ctx->r4, 0X5);
    // 0x002410D4: beq         $v0, $zero, L_0024180C
    if (ctx->r2 == 0) {
        // 0x002410D8: addu        $s7, $a0, $zero
        ctx->r23 = ADD32(ctx->r4, 0);
            goto L_0024180C;
    }
    // 0x002410D8: addu        $s7, $a0, $zero
    ctx->r23 = ADD32(ctx->r4, 0);
    // 0x002410DC: addiu       $s3, $v1, 0x4
    ctx->r19 = ADD32(ctx->r3, 0X4);
    // 0x002410E0: addiu       $s2, $v1, 0x10
    ctx->r18 = ADD32(ctx->r3, 0X10);
    // 0x002410E4: addu        $s6, $zero, $zero
    ctx->r22 = ADD32(0, 0);
    // 0x002410E8: addiu       $fp, $zero, 0x2
    ctx->r30 = ADD32(0, 0X2);
    // 0x002410EC: addiu       $s5, $zero, 0x1
    ctx->r21 = ADD32(0, 0X1);
    // 0x002410F0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002410F4: lwc1        $f22, 0x6838($at)
    ctx->f22.u32l = MEM_W(ctx->r1, 0X6838);
    // 0x002410F8: mtc1        $zero, $f25
    ctx->f_odd[(25 - 1) * 2] = 0;
L_002410FC:
    // 0x002410FC: lw          $v0, 0x98($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X98);
    // 0x00241100: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00241104: lwc1        $f24, 0x683C($at)
    ctx->f24.u32l = MEM_W(ctx->r1, 0X683C);
    // 0x00241108: beq         $v0, $zero, L_00241128
    if (ctx->r2 == 0) {
        // 0x0024110C: nop
    
            goto L_00241128;
    }
    // 0x0024110C: nop

    // 0x00241110: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x00241114: lw          $a1, 0x10($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X10);
    // 0x00241118: jal         0x0023C188
    // 0x0024111C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_0023C188(rdram, ctx);
        goto after_1;
    // 0x0024111C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_1:
    // 0x00241120: j           L_00241130
    // 0x00241124: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
        goto L_00241130;
    // 0x00241124: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
L_00241128:
    // 0x00241128: lw          $v0, 0x4($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X4);
    // 0x0024112C: lb          $v1, 0x6($v0)
    ctx->r3 = MEM_B(ctx->r2, 0X6);
L_00241130:
    // 0x00241130: lw          $v0, 0x94($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X94);
    // 0x00241134: bne         $v0, $zero, L_002411E4
    if (ctx->r2 != 0) {
        // 0x00241138: nop
    
            goto L_002411E4;
    }
    // 0x00241138: nop

    // 0x0024113C: beq         $v1, $zero, L_002411E4
    if (ctx->r3 == 0) {
        // 0x00241140: nop
    
            goto L_002411E4;
    }
    // 0x00241140: nop

    // 0x00241144: lw          $a1, 0x0($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X0);
    // 0x00241148: jal         0x0026BC54
    // 0x0024114C: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    func_0026BC54(rdram, ctx);
        goto after_2;
    // 0x0024114C: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    after_2:
    // 0x00241150: lwc1        $f3, 0x30($sp)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r29, 0X30);
    // 0x00241154: lwc1        $f0, 0x58($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X58);
    // 0x00241158: mul.s       $f3, $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f3.fl = MUL_S(ctx->f3.fl, ctx->f0.fl);
    // 0x0024115C: lwc1        $f2, 0x34($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X34);
    // 0x00241160: lwc1        $f0, 0x5C($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X5C);
    // 0x00241164: mul.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x00241168: lwc1        $f1, 0x38($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X38);
    // 0x0024116C: lwc1        $f0, 0x60($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X60);
    // 0x00241170: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x00241174: add.s       $f3, $f3, $f2
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f3.fl = ctx->f3.fl + ctx->f2.fl;
    // 0x00241178: add.s       $f20, $f3, $f1
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f20.fl = ctx->f3.fl + ctx->f1.fl;
    // 0x0024117C: c.lt.s      $f20, $f25
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 25);
    c1cs = ctx->f20.fl < ctx->f25.fl;
    // 0x00241180: nop

    // 0x00241184: bc1f        L_002411E4
    if (!c1cs) {
        // 0x00241188: addiu       $a0, $sp, 0x80
        ctx->r4 = ADD32(ctx->r29, 0X80);
            goto L_002411E4;
    }
    // 0x00241188: addiu       $a0, $sp, 0x80
    ctx->r4 = ADD32(ctx->r29, 0X80);
    // 0x0024118C: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
    // 0x00241190: lw          $a1, 0x4($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X4);
    // 0x00241194: jal         0x0020EF2C
    // 0x00241198: addu        $a2, $s3, $zero
    ctx->r6 = ADD32(ctx->r19, 0);
    func_0020EF2C(rdram, ctx);
        goto after_3;
    // 0x00241198: addu        $a2, $s3, $zero
    ctx->r6 = ADD32(ctx->r19, 0);
    after_3:
    // 0x0024119C: lwc1        $f3, 0x30($sp)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r29, 0X30);
    // 0x002411A0: lwc1        $f0, 0x80($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X80);
    // 0x002411A4: mul.s       $f3, $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f3.fl = MUL_S(ctx->f3.fl, ctx->f0.fl);
    // 0x002411A8: lwc1        $f2, 0x34($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X34);
    // 0x002411AC: lwc1        $f0, 0x84($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X84);
    // 0x002411B0: mul.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x002411B4: lwc1        $f1, 0x38($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X38);
    // 0x002411B8: lwc1        $f0, 0x88($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X88);
    // 0x002411BC: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x002411C0: add.s       $f3, $f3, $f2
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f3.fl = ctx->f3.fl + ctx->f2.fl;
    // 0x002411C4: add.s       $f3, $f3, $f1
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f3.fl = ctx->f3.fl + ctx->f1.fl;
    // 0x002411C8: div.s       $f24, $f3, $f20
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f24.fl = DIV_S(ctx->f3.fl, ctx->f20.fl);
    // 0x002411CC: c.lt.s      $f24, $f22
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f24.fl < ctx->f22.fl;
    // 0x002411D0: nop

    // 0x002411D4: bc1f        L_002411E4
    if (!c1cs) {
        // 0x002411D8: nop
    
            goto L_002411E4;
    }
    // 0x002411D8: nop

    // 0x002411DC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002411E0: lwc1        $f24, 0x6840($at)
    ctx->f24.u32l = MEM_W(ctx->r1, 0X6840);
L_002411E4:
    // 0x002411E4: lw          $v0, 0x4($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X4);
    // 0x002411E8: lb          $v0, 0x6($v0)
    ctx->r2 = MEM_B(ctx->r2, 0X6);
    // 0x002411EC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002411F0: lwc1        $f23, 0x6844($at)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r1, 0X6844);
    // 0x002411F4: beq         $v0, $zero, L_0024132C
    if (ctx->r2 == 0) {
        // 0x002411F8: nop
    
            goto L_0024132C;
    }
    // 0x002411F8: nop

    // 0x002411FC: lw          $a1, 0x0($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X0);
    // 0x00241200: lhu         $v0, 0x2($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X2);
    // 0x00241204: andi        $v0, $v0, 0x40
    ctx->r2 = ctx->r2 & 0X40;
    // 0x00241208: beq         $v0, $zero, L_00241330
    if (ctx->r2 == 0) {
        // 0x0024120C: nop
    
            goto L_00241330;
    }
    // 0x0024120C: nop

    // 0x00241210: jal         0x0026BFB4
    // 0x00241214: addiu       $a0, $sp, 0x40
    ctx->r4 = ADD32(ctx->r29, 0X40);
    func_0026BFB4(rdram, ctx);
        goto after_4;
    // 0x00241214: addiu       $a0, $sp, 0x40
    ctx->r4 = ADD32(ctx->r29, 0X40);
    after_4:
    // 0x00241218: lwc1        $f3, 0x40($sp)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r29, 0X40);
    // 0x0024121C: lwc1        $f0, 0x58($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X58);
    // 0x00241220: mul.s       $f3, $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f3.fl = MUL_S(ctx->f3.fl, ctx->f0.fl);
    // 0x00241224: lwc1        $f2, 0x44($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X44);
    // 0x00241228: lwc1        $f0, 0x5C($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X5C);
    // 0x0024122C: mul.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x00241230: lwc1        $f1, 0x48($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X48);
    // 0x00241234: lwc1        $f0, 0x60($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X60);
    // 0x00241238: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x0024123C: add.s       $f3, $f3, $f2
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f3.fl = ctx->f3.fl + ctx->f2.fl;
    // 0x00241240: add.s       $f20, $f3, $f1
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f20.fl = ctx->f3.fl + ctx->f1.fl;
    // 0x00241244: c.lt.s      $f20, $f25
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 25);
    c1cs = ctx->f20.fl < ctx->f25.fl;
    // 0x00241248: nop

    // 0x0024124C: bc1f        L_0024132C
    if (!c1cs) {
        // 0x00241250: lui         $v1, 0x40
        ctx->r3 = S32(0X40 << 16);
            goto L_0024132C;
    }
    // 0x00241250: lui         $v1, 0x40
    ctx->r3 = S32(0X40 << 16);
    // 0x00241254: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
    // 0x00241258: lw          $v0, 0x4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4);
    // 0x0024125C: lwc1        $f0, 0x0($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X0);
    // 0x00241260: swc1        $f0, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->f0.u32l;
    // 0x00241264: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
    // 0x00241268: lw          $v0, 0x4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4);
    // 0x0024126C: lwc1        $f0, 0xC($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0XC);
    // 0x00241270: swc1        $f0, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->f0.u32l;
    // 0x00241274: lw          $v0, 0x4($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X4);
    // 0x00241278: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x0024127C: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x00241280: beq         $v0, $zero, L_002412C4
    if (ctx->r2 == 0) {
        // 0x00241284: nop
    
            goto L_002412C4;
    }
    // 0x00241284: nop

    // 0x00241288: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x0024128C: jal         0x002671B4
    // 0x00241290: nop

    func_002671B4(rdram, ctx);
        goto after_5;
    // 0x00241290: nop

    after_5:
    // 0x00241294: lwc1        $f1, 0x94($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X94);
    // 0x00241298: sub.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl - ctx->f0.fl;
    // 0x0024129C: swc1        $f1, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    // 0x002412A0: lw          $v0, 0x4($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X4);
    // 0x002412A4: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x002412A8: andi        $v0, $v0, 0x80
    ctx->r2 = ctx->r2 & 0X80;
    // 0x002412AC: beq         $v0, $zero, L_002412C4
    if (ctx->r2 == 0) {
        // 0x002412B0: nop
    
            goto L_002412C4;
    }
    // 0x002412B0: nop

    // 0x002412B4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002412B8: lwc1        $f0, 0x6848($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6848);
    // 0x002412BC: add.s       $f0, $f1, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x002412C0: swc1        $f0, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->f0.u32l;
L_002412C4:
    // 0x002412C4: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
    // 0x002412C8: addiu       $a0, $sp, 0x80
    ctx->r4 = ADD32(ctx->r29, 0X80);
    // 0x002412CC: lw          $v0, 0x4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4);
    // 0x002412D0: addiu       $a1, $sp, 0x90
    ctx->r5 = ADD32(ctx->r29, 0X90);
    // 0x002412D4: lwc1        $f0, 0x8($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X8);
    // 0x002412D8: addu        $a2, $s3, $zero
    ctx->r6 = ADD32(ctx->r19, 0);
    // 0x002412DC: jal         0x0020EF2C
    // 0x002412E0: swc1        $f0, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->f0.u32l;
    func_0020EF2C(rdram, ctx);
        goto after_6;
    // 0x002412E0: swc1        $f0, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->f0.u32l;
    after_6:
    // 0x002412E4: lwc1        $f3, 0x40($sp)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r29, 0X40);
    // 0x002412E8: lwc1        $f0, 0x80($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X80);
    // 0x002412EC: mul.s       $f3, $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f3.fl = MUL_S(ctx->f3.fl, ctx->f0.fl);
    // 0x002412F0: lwc1        $f2, 0x44($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X44);
    // 0x002412F4: lwc1        $f0, 0x84($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X84);
    // 0x002412F8: mul.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x002412FC: lwc1        $f1, 0x48($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X48);
    // 0x00241300: lwc1        $f0, 0x88($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X88);
    // 0x00241304: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x00241308: add.s       $f3, $f3, $f2
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f3.fl = ctx->f3.fl + ctx->f2.fl;
    // 0x0024130C: add.s       $f3, $f3, $f1
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f3.fl = ctx->f3.fl + ctx->f1.fl;
    // 0x00241310: div.s       $f23, $f3, $f20
    CHECK_FR(ctx, 23);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f23.fl = DIV_S(ctx->f3.fl, ctx->f20.fl);
    // 0x00241314: c.lt.s      $f23, $f22
    CHECK_FR(ctx, 23);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f23.fl < ctx->f22.fl;
    // 0x00241318: nop

    // 0x0024131C: bc1f        L_0024132C
    if (!c1cs) {
        // 0x00241320: nop
    
            goto L_0024132C;
    }
    // 0x00241320: nop

    // 0x00241324: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00241328: lwc1        $f23, 0x684C($at)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r1, 0X684C);
L_0024132C:
    // 0x0024132C: lw          $a1, 0x0($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X0);
L_00241330:
    // 0x00241330: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x00241334: addiu       $a0, $a0, 0x7078
    ctx->r4 = ADD32(ctx->r4, 0X7078);
    // 0x00241338: jal         0x0022425C
    // 0x0024133C: nop

    func_0022425C(rdram, ctx);
        goto after_7;
    // 0x0024133C: nop

    after_7:
    // 0x00241340: lw          $v1, 0x0($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X0);
    // 0x00241344: lhu         $v1, 0x2($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0X2);
    // 0x00241348: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0024134C: lwc1        $f21, 0x6850($at)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r1, 0X6850);
    // 0x00241350: andi        $v1, $v1, 0x1
    ctx->r3 = ctx->r3 & 0X1;
    // 0x00241354: beq         $v1, $zero, L_002413C8
    if (ctx->r3 == 0) {
        // 0x00241358: addu        $s0, $v0, $zero
        ctx->r16 = ADD32(ctx->r2, 0);
            goto L_002413C8;
    }
    // 0x00241358: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x0024135C: lw          $v0, 0x4($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X4);
    // 0x00241360: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x00241364: andi        $v0, $v0, 0x8
    ctx->r2 = ctx->r2 & 0X8;
    // 0x00241368: beq         $v0, $zero, L_002413C8
    if (ctx->r2 == 0) {
        // 0x0024136C: nop
    
            goto L_002413C8;
    }
    // 0x0024136C: nop

    // 0x00241370: lui         $v0, 0x800F
    ctx->r2 = S32(0X800F << 16);
    // 0x00241374: lw          $v0, 0x1ADC($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1ADC);
    // 0x00241378: lw          $v0, 0xC4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0XC4);
    // 0x0024137C: bne         $v0, $zero, L_002413C8
    if (ctx->r2 != 0) {
        // 0x00241380: nop
    
            goto L_002413C8;
    }
    // 0x00241380: nop

    // 0x00241384: beq         $s0, $zero, L_002413C8
    if (ctx->r16 == 0) {
        // 0x00241388: nop
    
            goto L_002413C8;
    }
    // 0x00241388: nop

    // 0x0024138C: lwc1        $f2, 0x5C($s1)
    ctx->f2.u32l = MEM_W(ctx->r17, 0X5C);
    // 0x00241390: c.eq.s      $f2, $f25
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 25);
    c1cs = ctx->f2.fl == ctx->f25.fl;
    // 0x00241394: nop

    // 0x00241398: bc1t        L_002413C8
    if (c1cs) {
        // 0x0024139C: nop
    
            goto L_002413C8;
    }
    // 0x0024139C: nop

    // 0x002413A0: lwc1        $f0, 0x20($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X20);
    // 0x002413A4: lwc1        $f1, 0x4($s3)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r19, 0X4);
    // 0x002413A8: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x002413AC: div.s       $f21, $f0, $f2
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f21.fl = DIV_S(ctx->f0.fl, ctx->f2.fl);
    // 0x002413B0: c.lt.s      $f21, $f22
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f21.fl < ctx->f22.fl;
    // 0x002413B4: nop

    // 0x002413B8: bc1f        L_002413C8
    if (!c1cs) {
        // 0x002413BC: nop
    
            goto L_002413C8;
    }
    // 0x002413BC: nop

    // 0x002413C0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002413C4: lwc1        $f21, 0x6854($at)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r1, 0X6854);
L_002413C8:
    // 0x002413C8: lwc1        $f22, 0x8($s1)
    ctx->f22.u32l = MEM_W(ctx->r17, 0X8);
    // 0x002413CC: addu        $s4, $zero, $zero
    ctx->r20 = ADD32(0, 0);
    // 0x002413D0: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
L_002413D4:
    // 0x002413D4: lw          $v1, 0x0($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X0);
    // 0x002413D8: sll         $v0, $a1, 2
    ctx->r2 = S32(ctx->r5 << 2);
    // 0x002413DC: addu        $v0, $v1, $v0
    ctx->r2 = ADD32(ctx->r3, ctx->r2);
    // 0x002413E0: lw          $a0, 0x4($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X4);
    // 0x002413E4: beq         $a1, $fp, L_002413F4
    if (ctx->r5 == ctx->r30) {
        // 0x002413E8: addiu       $v0, $a1, 0x1
        ctx->r2 = ADD32(ctx->r5, 0X1);
            goto L_002413F4;
    }
    // 0x002413E8: addiu       $v0, $a1, 0x1
    ctx->r2 = ADD32(ctx->r5, 0X1);
    // 0x002413EC: j           L_002413F8
    // 0x002413F0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
        goto L_002413F8;
    // 0x002413F0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
L_002413F4:
    // 0x002413F4: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_002413F8:
    // 0x002413F8: addu        $v0, $v1, $v0
    ctx->r2 = ADD32(ctx->r3, ctx->r2);
    // 0x002413FC: lw          $v0, 0x4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4);
    // 0x00241400: lwc1        $f3, 0x8($a0)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r4, 0X8);
    // 0x00241404: lwc1        $f0, 0x8($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X8);
    // 0x00241408: sub.s       $f5, $f0, $f3
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f5.fl = ctx->f0.fl - ctx->f3.fl;
    // 0x0024140C: lwc1        $f1, 0x58($s1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r17, 0X58);
    // 0x00241410: mul.s       $f1, $f5, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f5.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = MUL_S(ctx->f5.fl, ctx->f1.fl);
    // 0x00241414: lwc1        $f2, 0x0($a0)
    ctx->f2.u32l = MEM_W(ctx->r4, 0X0);
    // 0x00241418: lwc1        $f0, 0x0($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X0);
    // 0x0024141C: sub.s       $f4, $f2, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = ctx->f2.fl - ctx->f0.fl;
    // 0x00241420: lwc1        $f0, 0x60($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X60);
    // 0x00241424: mul.s       $f0, $f4, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x00241428: add.s       $f20, $f1, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x0024142C: c.lt.s      $f20, $f25
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 25);
    c1cs = ctx->f20.fl < ctx->f25.fl;
    // 0x00241430: nop

    // 0x00241434: bc1fl       L_002414C8
    if (!c1cs) {
        // 0x00241438: addiu       $a1, $a1, 0x1
        ctx->r5 = ADD32(ctx->r5, 0X1);
            goto L_002414C8;
    }
    goto skip_0;
    // 0x00241438: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    skip_0:
    // 0x0024143C: lwc1        $f1, 0x0($s3)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r19, 0X0);
    // 0x00241440: sub.s       $f1, $f2, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = ctx->f2.fl - ctx->f1.fl;
    // 0x00241444: mul.s       $f1, $f5, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f5.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = MUL_S(ctx->f5.fl, ctx->f1.fl);
    // 0x00241448: lwc1        $f0, 0x8($s3)
    ctx->f0.u32l = MEM_W(ctx->r19, 0X8);
    // 0x0024144C: sub.s       $f0, $f3, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f3.fl - ctx->f0.fl;
    // 0x00241450: mul.s       $f0, $f4, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x00241454: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x00241458: div.s       $f1, $f1, $f20
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f1.fl = DIV_S(ctx->f1.fl, ctx->f20.fl);
    // 0x0024145C: c.lt.s      $f1, $f22
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f1.fl < ctx->f22.fl;
    // 0x00241460: nop

    // 0x00241464: bc1fl       L_002414C8
    if (!c1cs) {
        // 0x00241468: addiu       $a1, $a1, 0x1
        ctx->r5 = ADD32(ctx->r5, 0X1);
            goto L_002414C8;
    }
    goto skip_1;
    // 0x00241468: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    skip_1:
    // 0x0024146C: lw          $v0, 0x84($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X84);
    // 0x00241470: bnel        $v0, $s5, L_002414B8
    if (ctx->r2 != ctx->r21) {
        // 0x00241474: mov.s       $f22, $f1
        CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 1);
    ctx->f22.fl = ctx->f1.fl;
            goto L_002414B8;
    }
    goto skip_2;
    // 0x00241474: mov.s       $f22, $f1
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 1);
    ctx->f22.fl = ctx->f1.fl;
    skip_2:
    // 0x00241478: lwc1        $f0, 0x64($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X64);
    // 0x0024147C: c.eq.s      $f0, $f5
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 5);
    c1cs = ctx->f0.fl == ctx->f5.fl;
    // 0x00241480: nop

    // 0x00241484: bc1fl       L_002414B8
    if (!c1cs) {
        // 0x00241488: mov.s       $f22, $f1
        CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 1);
    ctx->f22.fl = ctx->f1.fl;
            goto L_002414B8;
    }
    goto skip_3;
    // 0x00241488: mov.s       $f22, $f1
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 1);
    ctx->f22.fl = ctx->f1.fl;
    skip_3:
    // 0x0024148C: lwc1        $f0, 0x68($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X68);
    // 0x00241490: c.eq.s      $f0, $f25
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 25);
    c1cs = ctx->f0.fl == ctx->f25.fl;
    // 0x00241494: nop

    // 0x00241498: bc1fl       L_002414B8
    if (!c1cs) {
        // 0x0024149C: mov.s       $f22, $f1
        CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 1);
    ctx->f22.fl = ctx->f1.fl;
            goto L_002414B8;
    }
    goto skip_4;
    // 0x0024149C: mov.s       $f22, $f1
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 1);
    ctx->f22.fl = ctx->f1.fl;
    skip_4:
    // 0x002414A0: lwc1        $f0, 0x6C($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X6C);
    // 0x002414A4: c.eq.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl == ctx->f4.fl;
    // 0x002414A8: nop

    // 0x002414AC: bc1tl       L_002414C8
    if (c1cs) {
        // 0x002414B0: addiu       $a1, $a1, 0x1
        ctx->r5 = ADD32(ctx->r5, 0X1);
            goto L_002414C8;
    }
    goto skip_5;
    // 0x002414B0: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    skip_5:
    // 0x002414B4: mov.s       $f22, $f1
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 1);
    ctx->f22.fl = ctx->f1.fl;
L_002414B8:
    // 0x002414B8: addu        $s4, $a1, $zero
    ctx->r20 = ADD32(ctx->r5, 0);
    // 0x002414BC: swc1        $f5, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(5 - 1) * 2];
    // 0x002414C0: swc1        $f4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f4.u32l;
    // 0x002414C4: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
L_002414C8:
    // 0x002414C8: slti        $v0, $a1, 0x3
    ctx->r2 = SIGNED(ctx->r5) < 0X3 ? 1 : 0;
    // 0x002414CC: bne         $v0, $zero, L_002413D4
    if (ctx->r2 != 0) {
        // 0x002414D0: nop
    
            goto L_002413D4;
    }
    // 0x002414D0: nop

    // 0x002414D4: c.le.s      $f21, $f22
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f21.fl <= ctx->f22.fl;
    // 0x002414D8: nop

    // 0x002414DC: bc1f        L_00241594
    if (!c1cs) {
        // 0x002414E0: nop
    
            goto L_00241594;
    }
    // 0x002414E0: nop

    // 0x002414E4: lwc1        $f0, 0x8($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X8);
    // 0x002414E8: c.lt.s      $f21, $f0
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f21.fl < ctx->f0.fl;
    // 0x002414EC: nop

    // 0x002414F0: bc1f        L_00241594
    if (!c1cs) {
        // 0x002414F4: nop
    
            goto L_00241594;
    }
    // 0x002414F4: nop

    // 0x002414F8: lwc1        $f0, 0x20($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X20);
    // 0x002414FC: swc1        $f0, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f0.u32l;
    // 0x00241500: lwc1        $f1, 0x4($s3)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r19, 0X4);
    // 0x00241504: lwc1        $f0, 0x20($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X20);
    // 0x00241508: c.le.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl <= ctx->f1.fl;
    // 0x0024150C: nop

    // 0x00241510: bc1t        L_0024151C
    if (c1cs) {
        // 0x00241514: addiu       $a1, $sp, 0x50
        ctx->r5 = ADD32(ctx->r29, 0X50);
            goto L_0024151C;
    }
    // 0x00241514: addiu       $a1, $sp, 0x50
    ctx->r5 = ADD32(ctx->r29, 0X50);
    // 0x00241518: addiu       $a1, $sp, 0x60
    ctx->r5 = ADD32(ctx->r29, 0X60);
L_0024151C:
    // 0x0024151C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x00241520: addiu       $a2, $sp, 0x70
    ctx->r6 = ADD32(ctx->r29, 0X70);
    // 0x00241524: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x00241528: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x0024152C: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x00241530: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x00241534: jal         0x0023AB18
    // 0x00241538: sw          $s5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r21;
    func_0023AB18(rdram, ctx);
        goto after_8;
    // 0x00241538: sw          $s5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r21;
    after_8:
    // 0x0024153C: beq         $v0, $zero, L_00241594
    if (ctx->r2 == 0) {
        // 0x00241540: lui         $v1, 0x40
        ctx->r3 = S32(0X40 << 16);
            goto L_00241594;
    }
    // 0x00241540: lui         $v1, 0x40
    ctx->r3 = S32(0X40 << 16);
    // 0x00241544: lw          $v0, 0x44($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X44);
    // 0x00241548: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x0024154C: bne         $v0, $zero, L_00241568
    if (ctx->r2 != 0) {
        // 0x00241550: addiu       $v1, $zero, 0x7
        ctx->r3 = ADD32(0, 0X7);
            goto L_00241568;
    }
    // 0x00241550: addiu       $v1, $zero, 0x7
    ctx->r3 = ADD32(0, 0X7);
    // 0x00241554: lhu         $v0, 0x52($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X52);
    // 0x00241558: andi        $v0, $v0, 0x80
    ctx->r2 = ctx->r2 & 0X80;
    // 0x0024155C: beq         $v0, $zero, L_00241568
    if (ctx->r2 == 0) {
        // 0x00241560: addiu       $v1, $zero, 0x1
        ctx->r3 = ADD32(0, 0X1);
            goto L_00241568;
    }
    // 0x00241560: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x00241564: addiu       $v1, $zero, 0x8
    ctx->r3 = ADD32(0, 0X8);
L_00241568:
    // 0x00241568: lui         $v0, 0x800F
    ctx->r2 = S32(0X800F << 16);
    // 0x0024156C: lw          $v0, 0x1ADC($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1ADC);
    // 0x00241570: sw          $v1, 0x40($s1)
    MEM_W(0X40, ctx->r17) = ctx->r3;
    // 0x00241574: sw          $zero, 0x44($s1)
    MEM_W(0X44, ctx->r17) = 0;
    // 0x00241578: sw          $zero, 0x48($s1)
    MEM_W(0X48, ctx->r17) = 0;
    // 0x0024157C: addiu       $v1, $v0, 0xC8
    ctx->r3 = ADD32(ctx->r2, 0XC8);
    // 0x00241580: sw          $v1, 0x34($s1)
    MEM_W(0X34, ctx->r17) = ctx->r3;
    // 0x00241584: addiu       $v1, $v0, 0xC4
    ctx->r3 = ADD32(ctx->r2, 0XC4);
    // 0x00241588: addiu       $v0, $v0, 0xD4
    ctx->r2 = ADD32(ctx->r2, 0XD4);
    // 0x0024158C: sw          $v1, 0x38($s1)
    MEM_W(0X38, ctx->r17) = ctx->r3;
    // 0x00241590: sw          $v0, 0x3C($s1)
    MEM_W(0X3C, ctx->r17) = ctx->r2;
L_00241594:
    // 0x00241594: c.le.s      $f24, $f22
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f24.fl <= ctx->f22.fl;
    // 0x00241598: nop

    // 0x0024159C: bc1f        L_00241650
    if (!c1cs) {
        // 0x002415A0: nop
    
            goto L_00241650;
    }
    // 0x002415A0: nop

    // 0x002415A4: lwc1        $f0, 0x8($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X8);
    // 0x002415A8: c.lt.s      $f24, $f0
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f24.fl < ctx->f0.fl;
    // 0x002415AC: nop

    // 0x002415B0: bc1f        L_00241650
    if (!c1cs) {
        // 0x002415B4: nop
    
            goto L_00241650;
    }
    // 0x002415B4: nop

    // 0x002415B8: lw          $a0, 0x0($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X0);
    // 0x002415BC: jal         0x0026AFC0
    // 0x002415C0: nop

    func_0026AFC0(rdram, ctx);
        goto after_9;
    // 0x002415C0: nop

    after_9:
    // 0x002415C4: bne         $v0, $zero, L_002415DC
    if (ctx->r2 != 0) {
        // 0x002415C8: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_002415DC;
    }
    // 0x002415C8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x002415CC: lw          $v0, 0x4($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X4);
    // 0x002415D0: lwc1        $f0, 0x10($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X10);
    // 0x002415D4: j           L_002415E4
    // 0x002415D8: nop

        goto L_002415E4;
    // 0x002415D8: nop

L_002415DC:
    // 0x002415DC: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x002415E0: lw          $v0, 0x4($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X4);
L_002415E4:
    // 0x002415E4: lw          $v1, 0x0($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X0);
    // 0x002415E8: lb          $v0, 0x6($v0)
    ctx->r2 = MEM_B(ctx->r2, 0X6);
    // 0x002415EC: addiu       $a1, $sp, 0x30
    ctx->r5 = ADD32(ctx->r29, 0X30);
    // 0x002415F0: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    // 0x002415F4: sw          $s5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r21;
    // 0x002415F8: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x002415FC: lw          $a2, 0x4($v1)
    ctx->r6 = MEM_W(ctx->r3, 0X4);
    // 0x00241600: jal         0x0023AB18
    // 0x00241604: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_0023AB18(rdram, ctx);
        goto after_10;
    // 0x00241604: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_10:
    // 0x00241608: beq         $v0, $zero, L_00241650
    if (ctx->r2 == 0) {
        // 0x0024160C: nop
    
            goto L_00241650;
    }
    // 0x0024160C: nop

    // 0x00241610: lui         $v1, 0x800F
    ctx->r3 = S32(0X800F << 16);
    // 0x00241614: lw          $v1, 0x1ADC($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X1ADC);
    // 0x00241618: sw          $s5, 0x40($s1)
    MEM_W(0X40, ctx->r17) = ctx->r21;
    // 0x0024161C: sw          $zero, 0x44($s1)
    MEM_W(0X44, ctx->r17) = 0;
    // 0x00241620: sw          $zero, 0x48($s1)
    MEM_W(0X48, ctx->r17) = 0;
    // 0x00241624: addiu       $v0, $v1, 0xB8
    ctx->r2 = ADD32(ctx->r3, 0XB8);
    // 0x00241628: sw          $v0, 0x34($s1)
    MEM_W(0X34, ctx->r17) = ctx->r2;
    // 0x0024162C: addiu       $v0, $v1, 0xB4
    ctx->r2 = ADD32(ctx->r3, 0XB4);
    // 0x00241630: addiu       $v1, $v1, 0xB0
    ctx->r3 = ADD32(ctx->r3, 0XB0);
    // 0x00241634: sw          $v0, 0x38($s1)
    MEM_W(0X38, ctx->r17) = ctx->r2;
    // 0x00241638: sw          $v1, 0x3C($s1)
    MEM_W(0X3C, ctx->r17) = ctx->r3;
    // 0x0024163C: lw          $v0, 0x0($s7)
    ctx->r2 = MEM_W(ctx->r23, 0X0);
    // 0x00241640: lui         $v1, 0x2000
    ctx->r3 = S32(0X2000 << 16);
    // 0x00241644: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x00241648: bne         $v0, $zero, L_0024180C
    if (ctx->r2 != 0) {
        // 0x0024164C: nop
    
            goto L_0024180C;
    }
    // 0x0024164C: nop

L_00241650:
    // 0x00241650: c.le.s      $f23, $f22
    CHECK_FR(ctx, 23);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f23.fl <= ctx->f22.fl;
    // 0x00241654: nop

    // 0x00241658: bc1f        L_002416E0
    if (!c1cs) {
        // 0x0024165C: nop
    
            goto L_002416E0;
    }
    // 0x0024165C: nop

    // 0x00241660: lwc1        $f0, 0x8($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X8);
    // 0x00241664: c.lt.s      $f23, $f0
    CHECK_FR(ctx, 23);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f23.fl < ctx->f0.fl;
    // 0x00241668: nop

    // 0x0024166C: bc1f        L_002416E4
    if (!c1cs) {
        // 0x00241670: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_002416E4;
    }
    // 0x00241670: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x00241674: addiu       $a1, $sp, 0x40
    ctx->r5 = ADD32(ctx->r29, 0X40);
    // 0x00241678: lw          $v0, 0x4($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X4);
    // 0x0024167C: addiu       $a2, $sp, 0x90
    ctx->r6 = ADD32(ctx->r29, 0X90);
    // 0x00241680: lb          $v0, 0x5($v0)
    ctx->r2 = MEM_B(ctx->r2, 0X5);
    // 0x00241684: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x00241688: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x0024168C: sw          $s5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r21;
    // 0x00241690: jal         0x0023AB18
    // 0x00241694: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    func_0023AB18(rdram, ctx);
        goto after_11;
    // 0x00241694: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    after_11:
    // 0x00241698: beq         $v0, $zero, L_002416E0
    if (ctx->r2 == 0) {
        // 0x0024169C: nop
    
            goto L_002416E0;
    }
    // 0x0024169C: nop

    // 0x002416A0: lui         $v1, 0x800F
    ctx->r3 = S32(0X800F << 16);
    // 0x002416A4: lw          $v1, 0x1ADC($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X1ADC);
    // 0x002416A8: sw          $fp, 0x40($s1)
    MEM_W(0X40, ctx->r17) = ctx->r30;
    // 0x002416AC: sw          $zero, 0x44($s1)
    MEM_W(0X44, ctx->r17) = 0;
    // 0x002416B0: sw          $zero, 0x48($s1)
    MEM_W(0X48, ctx->r17) = 0;
L_002416B4:
    // 0x002416B4: addiu       $v0, $v1, 0xB8
    ctx->r2 = ADD32(ctx->r3, 0XB8);
    // 0x002416B8: sw          $v0, 0x34($s1)
    MEM_W(0X34, ctx->r17) = ctx->r2;
    // 0x002416BC: addiu       $v0, $v1, 0xB4
    ctx->r2 = ADD32(ctx->r3, 0XB4);
    // 0x002416C0: addiu       $v1, $v1, 0xB0
    ctx->r3 = ADD32(ctx->r3, 0XB0);
    // 0x002416C4: sw          $v0, 0x38($s1)
    MEM_W(0X38, ctx->r17) = ctx->r2;
    // 0x002416C8: sw          $v1, 0x3C($s1)
    MEM_W(0X3C, ctx->r17) = ctx->r3;
    // 0x002416CC: lw          $v0, 0x0($s7)
    ctx->r2 = MEM_W(ctx->r23, 0X0);
    // 0x002416D0: lui         $v1, 0x2000
    ctx->r3 = S32(0X2000 << 16);
    // 0x002416D4: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x002416D8: bne         $v0, $zero, L_0024180C
    if (ctx->r2 != 0) {
        // 0x002416DC: nop
    
            goto L_0024180C;
    }
    // 0x002416DC: nop

L_002416E0:
    // 0x002416E0: lwc1        $f0, 0x8($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X8);
L_002416E4:
    // 0x002416E4: c.lt.s      $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f22.fl < ctx->f0.fl;
    // 0x002416E8: nop

    // 0x002416EC: bc1f        L_0024180C
    if (!c1cs) {
        // 0x002416F0: addiu       $s0, $sp, 0xA0
        ctx->r16 = ADD32(ctx->r29, 0XA0);
            goto L_0024180C;
    }
    // 0x002416F0: addiu       $s0, $sp, 0xA0
    ctx->r16 = ADD32(ctx->r29, 0XA0);
    // 0x002416F4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x002416F8: addu        $a2, $s3, $zero
    ctx->r6 = ADD32(ctx->r19, 0);
    // 0x002416FC: mfc1        $a1, $f22
    ctx->r5 = (int32_t)ctx->f22.u32l;
    // 0x00241700: jal         0x0020EF8C
    // 0x00241704: addiu       $a3, $s1, 0x4C
    ctx->r7 = ADD32(ctx->r17, 0X4C);
    func_0020EF8C(rdram, ctx);
        goto after_12;
    // 0x00241704: addiu       $a3, $s1, 0x4C
    ctx->r7 = ADD32(ctx->r17, 0X4C);
    after_12:
    // 0x00241708: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0024170C: addu        $a2, $s4, $zero
    ctx->r6 = ADD32(ctx->r20, 0);
    // 0x00241710: lw          $a1, 0x0($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X0);
    // 0x00241714: jal         0x0023B664
    // 0x00241718: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    func_0023B664(rdram, ctx);
        goto after_13;
    // 0x00241718: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    after_13:
    // 0x0024171C: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x00241720: beql        $s0, $zero, L_0024175C
    if (ctx->r16 == 0) {
        // 0x00241724: sw          $zero, 0x24($sp)
        MEM_W(0X24, ctx->r29) = 0;
            goto L_0024175C;
    }
    goto skip_6;
    // 0x00241724: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    skip_6:
    // 0x00241728: lw          $v0, 0x94($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X94);
    // 0x0024172C: bnel        $v0, $zero, L_0024175C
    if (ctx->r2 != 0) {
        // 0x00241730: sw          $zero, 0x24($sp)
        MEM_W(0X24, ctx->r29) = 0;
            goto L_0024175C;
    }
    goto skip_7;
    // 0x00241730: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    skip_7:
    // 0x00241734: lw          $v0, 0x4($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X4);
    // 0x00241738: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x0024173C: andi        $v0, $v0, 0x8000
    ctx->r2 = ctx->r2 & 0X8000;
    // 0x00241740: beql        $v0, $zero, L_00241800
    if (ctx->r2 == 0) {
        // 0x00241744: addiu       $s6, $s6, 0x1
        ctx->r22 = ADD32(ctx->r22, 0X1);
            goto L_00241800;
    }
    goto skip_8;
    // 0x00241744: addiu       $s6, $s6, 0x1
    ctx->r22 = ADD32(ctx->r22, 0X1);
    skip_8:
    // 0x00241748: lhu         $v0, 0x2($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X2);
    // 0x0024174C: andi        $v0, $v0, 0x8
    ctx->r2 = ctx->r2 & 0X8;
    // 0x00241750: beql        $v0, $zero, L_00241800
    if (ctx->r2 == 0) {
        // 0x00241754: addiu       $s6, $s6, 0x1
        ctx->r22 = ADD32(ctx->r22, 0X1);
            goto L_00241800;
    }
    goto skip_9;
    // 0x00241754: addiu       $s6, $s6, 0x1
    ctx->r22 = ADD32(ctx->r22, 0X1);
    skip_9:
    // 0x00241758: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
L_0024175C:
    // 0x0024175C: lw          $v1, 0x0($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X0);
    // 0x00241760: sll         $v0, $s4, 2
    ctx->r2 = S32(ctx->r20 << 2);
    // 0x00241764: bne         $s0, $zero, L_0024177C
    if (ctx->r16 != 0) {
        // 0x00241768: addu        $v1, $v1, $v0
        ctx->r3 = ADD32(ctx->r3, ctx->r2);
            goto L_0024177C;
    }
    // 0x00241768: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x0024176C: lw          $v0, 0x4($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X4);
    // 0x00241770: lb          $v0, 0x5($v0)
    ctx->r2 = MEM_B(ctx->r2, 0X5);
    // 0x00241774: j           L_00241784
    // 0x00241778: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
        goto L_00241784;
    // 0x00241778: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
L_0024177C:
    // 0x0024177C: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x00241780: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
L_00241784:
    // 0x00241784: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x00241788: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x0024178C: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x00241790: sw          $s5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r21;
    // 0x00241794: lw          $a2, 0x4($v1)
    ctx->r6 = MEM_W(ctx->r3, 0X4);
    // 0x00241798: jal         0x0023AB18
    // 0x0024179C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_0023AB18(rdram, ctx);
        goto after_14;
    // 0x0024179C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_14:
    // 0x002417A0: beq         $v0, $zero, L_0024180C
    if (ctx->r2 == 0) {
        // 0x002417A4: nop
    
            goto L_0024180C;
    }
    // 0x002417A4: nop

    // 0x002417A8: beq         $s0, $zero, L_002417D0
    if (ctx->r16 == 0) {
        // 0x002417AC: nop
    
            goto L_002417D0;
    }
    // 0x002417AC: nop

    // 0x002417B0: sw          $s0, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r16;
    // 0x002417B4: sw          $zero, 0x34($s1)
    MEM_W(0X34, ctx->r17) = 0;
    // 0x002417B8: sw          $zero, 0x38($s1)
    MEM_W(0X38, ctx->r17) = 0;
    // 0x002417BC: sw          $zero, 0x3C($s1)
    MEM_W(0X3C, ctx->r17) = 0;
    // 0x002417C0: sw          $zero, 0x40($s1)
    MEM_W(0X40, ctx->r17) = 0;
    // 0x002417C4: sw          $zero, 0x44($s1)
    MEM_W(0X44, ctx->r17) = 0;
    // 0x002417C8: j           L_0024180C
    // 0x002417CC: sw          $zero, 0x48($s1)
    MEM_W(0X48, ctx->r17) = 0;
        goto L_0024180C;
    // 0x002417CC: sw          $zero, 0x48($s1)
    MEM_W(0X48, ctx->r17) = 0;
L_002417D0:
    // 0x002417D0: lui         $v0, 0x800F
    ctx->r2 = S32(0X800F << 16);
    // 0x002417D4: lw          $v0, 0x1ADC($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1ADC);
    // 0x002417D8: sw          $zero, 0x3C($s1)
    MEM_W(0X3C, ctx->r17) = 0;
    // 0x002417DC: sw          $zero, 0x40($s1)
    MEM_W(0X40, ctx->r17) = 0;
    // 0x002417E0: sw          $zero, 0x44($s1)
    MEM_W(0X44, ctx->r17) = 0;
    // 0x002417E4: sw          $zero, 0x48($s1)
    MEM_W(0X48, ctx->r17) = 0;
    // 0x002417E8: addiu       $v1, $v0, 0xA0
    ctx->r3 = ADD32(ctx->r2, 0XA0);
    // 0x002417EC: sw          $v1, 0x34($s1)
    MEM_W(0X34, ctx->r17) = ctx->r3;
    // 0x002417F0: addiu       $v1, $v0, 0x9C
    ctx->r3 = ADD32(ctx->r2, 0X9C);
    // 0x002417F4: sw          $v1, 0x38($s1)
    MEM_W(0X38, ctx->r17) = ctx->r3;
    // 0x002417F8: j           L_0024180C
    // 0x002417FC: sw          $s4, 0xAC($v0)
    MEM_W(0XAC, ctx->r2) = ctx->r20;
        goto L_0024180C;
    // 0x002417FC: sw          $s4, 0xAC($v0)
    MEM_W(0XAC, ctx->r2) = ctx->r20;
L_00241800:
    // 0x00241800: slti        $v0, $s6, 0x64
    ctx->r2 = SIGNED(ctx->r22) < 0X64 ? 1 : 0;
    // 0x00241804: bne         $v0, $zero, L_002410FC
    if (ctx->r2 != 0) {
        // 0x00241808: sw          $s0, 0x0($s2)
        MEM_W(0X0, ctx->r18) = ctx->r16;
            goto L_002410FC;
    }
    // 0x00241808: sw          $s0, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r16;
L_0024180C:
    // 0x0024180C: lw          $ra, 0xD4($sp)
    ctx->r31 = MEM_W(ctx->r29, 0XD4);
    // 0x00241810: lw          $fp, 0xD0($sp)
    ctx->r30 = MEM_W(ctx->r29, 0XD0);
    // 0x00241814: lw          $s7, 0xCC($sp)
    ctx->r23 = MEM_W(ctx->r29, 0XCC);
    // 0x00241818: lw          $s6, 0xC8($sp)
    ctx->r22 = MEM_W(ctx->r29, 0XC8);
    // 0x0024181C: lw          $s5, 0xC4($sp)
    ctx->r21 = MEM_W(ctx->r29, 0XC4);
    // 0x00241820: lw          $s4, 0xC0($sp)
    ctx->r20 = MEM_W(ctx->r29, 0XC0);
    // 0x00241824: lw          $s3, 0xBC($sp)
    ctx->r19 = MEM_W(ctx->r29, 0XBC);
    // 0x00241828: lw          $s2, 0xB8($sp)
    ctx->r18 = MEM_W(ctx->r29, 0XB8);
    // 0x0024182C: lw          $s1, 0xB4($sp)
    ctx->r17 = MEM_W(ctx->r29, 0XB4);
    // 0x00241830: lw          $s0, 0xB0($sp)
    ctx->r16 = MEM_W(ctx->r29, 0XB0);
    // 0x00241834: ldc1        $f25, 0x100($sp)
    CHECK_FR(ctx, 25);
    ctx->f25.u64 = LD(ctx->r29, 0X100);
    // 0x00241838: ldc1        $f24, 0xF8($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0XF8);
    // 0x0024183C: ldc1        $f23, 0xF0($sp)
    CHECK_FR(ctx, 23);
    ctx->f23.u64 = LD(ctx->r29, 0XF0);
    // 0x00241840: ldc1        $f22, 0xE8($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0XE8);
    // 0x00241844: ldc1        $f21, 0xE0($sp)
    CHECK_FR(ctx, 21);
    ctx->f21.u64 = LD(ctx->r29, 0XE0);
    // 0x00241848: ldc1        $f20, 0xD8($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0XD8);
    // 0x0024184C: jr          $ra
    // 0x00241850: addiu       $sp, $sp, 0x108
    ctx->r29 = ADD32(ctx->r29, 0X108);
    return;
    // 0x00241850: addiu       $sp, $sp, 0x108
    ctx->r29 = ADD32(ctx->r29, 0X108);
;}
RECOMP_FUNC void func_0026D3BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0026D3BC: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x0026D3C0: beq         $v1, $zero, L_0026D46C
    if (ctx->r3 == 0) {
        // 0x0026D3C4: nop
    
            goto L_0026D46C;
    }
    // 0x0026D3C4: nop

    // 0x0026D3C8: lw          $a1, 0x4($v1)
    ctx->r5 = MEM_W(ctx->r3, 0X4);
    // 0x0026D3CC: beq         $a1, $zero, L_0026D3DC
    if (ctx->r5 == 0) {
        // 0x0026D3D0: nop
    
            goto L_0026D3DC;
    }
    // 0x0026D3D0: nop

    // 0x0026D3D4: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x0026D3D8: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
L_0026D3DC:
    // 0x0026D3DC: lw          $a1, 0x0($v1)
    ctx->r5 = MEM_W(ctx->r3, 0X0);
    // 0x0026D3E0: beq         $a1, $zero, L_0026D3F0
    if (ctx->r5 == 0) {
        // 0x0026D3E4: nop
    
            goto L_0026D3F0;
    }
    // 0x0026D3E4: nop

    // 0x0026D3E8: lw          $v0, 0x4($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X4);
    // 0x0026D3EC: sw          $v0, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r2;
L_0026D3F0:
    // 0x0026D3F0: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x0026D3F4: bne         $v0, $v1, L_0026D404
    if (ctx->r2 != ctx->r3) {
        // 0x0026D3F8: nop
    
            goto L_0026D404;
    }
    // 0x0026D3F8: nop

    // 0x0026D3FC: lw          $v0, 0x4($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X4);
    // 0x0026D400: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
L_0026D404:
    // 0x0026D404: lw          $v0, 0x4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X4);
    // 0x0026D408: bne         $v0, $v1, L_0026D418
    if (ctx->r2 != ctx->r3) {
        // 0x0026D40C: nop
    
            goto L_0026D418;
    }
    // 0x0026D40C: nop

    // 0x0026D410: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x0026D414: sw          $v0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r2;
L_0026D418:
    // 0x0026D418: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x0026D41C: addiu       $a1, $a0, 0xC
    ctx->r5 = ADD32(ctx->r4, 0XC);
    // 0x0026D420: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x0026D424: sw          $v0, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r2;
    // 0x0026D428: lw          $v0, 0x8($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X8);
    // 0x0026D42C: bne         $v0, $zero, L_0026D448
    if (ctx->r2 != 0) {
        // 0x0026D430: nop
    
            goto L_0026D448;
    }
    // 0x0026D430: nop

    // 0x0026D434: sw          $v1, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->r3;
    // 0x0026D438: sw          $v1, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r3;
    // 0x0026D43C: sw          $zero, 0x0($v1)
    MEM_W(0X0, ctx->r3) = 0;
    // 0x0026D440: j           L_0026D460
    // 0x0026D444: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
        goto L_0026D460;
    // 0x0026D444: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
L_0026D448:
    // 0x0026D448: lw          $v0, 0x4($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X4);
    // 0x0026D44C: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x0026D450: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x0026D454: lw          $v0, 0x4($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X4);
    // 0x0026D458: sw          $v1, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r3;
    // 0x0026D45C: sw          $v1, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r3;
L_0026D460:
    // 0x0026D460: lw          $v0, 0x8($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X8);
    // 0x0026D464: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x0026D468: sw          $v0, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->r2;
L_0026D46C:
    // 0x0026D46C: jr          $ra
    // 0x0026D470: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
    return;
    // 0x0026D470: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
;}
RECOMP_FUNC void func_0045FB34(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_00426B98:
    // 0x0045FB34: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0045FB38: addu        $a2, $a0, $zero
    ctx->r6 = ADD32(ctx->r4, 0);
    // 0x0045FB3C: sll         $v0, $a2, 3
    ctx->r2 = S32(ctx->r6 << 3);
    // 0x0045FB40: subu        $v0, $v0, $a2
    ctx->r2 = SUB32(ctx->r2, ctx->r6);
    // 0x0045FB44: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x0045FB48: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x0045FB4C: addiu       $a0, $a0, 0xAA0
    ctx->r4 = ADD32(ctx->r4, 0XAA0);
    // 0x0045FB50: sll         $v1, $a2, 2
    ctx->r3 = S32(ctx->r6 << 2);
    // 0x0045FB54: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x0045FB58: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0045FB5C: lui         $at, 0x800F
    ctx->r1 = S32(0X800F << 16);
    // 0x0045FB60: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x0045FB64: lbu         $v1, 0x677B($at)
    ctx->r3 = MEM_BU(ctx->r1, 0X677B);
    // 0x0045FB68: bne         $v1, $zero, L_0045FB90
    if (ctx->r3 != 0) {
        // 0x0045FB6C: addu        $s0, $v0, $a0
        ctx->r16 = ADD32(ctx->r2, ctx->r4);
            goto L_0045FB90;
    }
    // 0x0045FB6C: addu        $s0, $v0, $a0
    ctx->r16 = ADD32(ctx->r2, ctx->r4);
    // 0x0045FB70: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x0045FB74: addiu       $a0, $a0, 0x6798
    ctx->r4 = ADD32(ctx->r4, 0X6798);
    // 0x0045FB78: jal         0x00299198
    // 0x0045FB7C: addiu       $a1, $s0, 0x8
    ctx->r5 = ADD32(ctx->r16, 0X8);
    func_00299198(rdram, ctx);
        goto after_0;
    // 0x0045FB7C: addiu       $a1, $s0, 0x8
    ctx->r5 = ADD32(ctx->r16, 0X8);
    after_0:
    // 0x0045FB80: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x0045FB84: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x0045FB88: j           L_00426B98
    // 0x0045FB8C: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    entry_00426B98(rdram, ctx);
    return;
    // 0x0045FB8C: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
L_0045FB90:
    // 0x0045FB90: sb          $zero, 0x0($s0)
    MEM_B(0X0, ctx->r16) = 0;
    // 0x0045FB94: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x0045FB98: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x0045FB9C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0045FBA0: jr          $ra
    // 0x0045FBA4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0045FBA4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_002682A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002682A4: lw          $v0, 0x14($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X14);
    // 0x002682A8: lw          $v0, 0x4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4);
    // 0x002682AC: srl         $v0, $v0, 2
    ctx->r2 = S32(U32(ctx->r2) >> 2);
    // 0x002682B0: jr          $ra
    // 0x002682B4: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    return;
    // 0x002682B4: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
;}
RECOMP_FUNC void func_00232044(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00232044: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x00232048: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x0023204C: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x00232050: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x00232054: addu        $s3, $a1, $zero
    ctx->r19 = ADD32(ctx->r5, 0);
    // 0x00232058: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x0023205C: addiu       $s0, $sp, 0x10
    ctx->r16 = ADD32(ctx->r29, 0X10);
    // 0x00232060: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00232064: lui         $v1, 0x2
    ctx->r3 = S32(0X2 << 16);
    // 0x00232068: sw          $ra, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r31;
    // 0x0023206C: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x00232070: lw          $v0, 0x40($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X40);
    // 0x00232074: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x00232078: sw          $v0, 0x40($s2)
    MEM_W(0X40, ctx->r18) = ctx->r2;
    // 0x0023207C: lui         $v0, 0x800F
    ctx->r2 = S32(0X800F << 16);
    // 0x00232080: addiu       $v0, $v0, 0x1CE8
    ctx->r2 = ADD32(ctx->r2, 0X1CE8);
    // 0x00232084: lw          $a3, 0x0($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X0);
    // 0x00232088: lw          $t0, 0x4($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X4);
    // 0x0023208C: lw          $t1, 0x8($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X8);
    // 0x00232090: sw          $a3, 0x4($s2)
    MEM_W(0X4, ctx->r18) = ctx->r7;
    // 0x00232094: sw          $t0, 0x8($s2)
    MEM_W(0X8, ctx->r18) = ctx->r8;
    // 0x00232098: sw          $t1, 0xC($s2)
    MEM_W(0XC, ctx->r18) = ctx->r9;
    // 0x0023209C: lw          $a3, 0xD0($v0)
    ctx->r7 = MEM_W(ctx->r2, 0XD0);
    // 0x002320A0: lw          $t0, 0xD4($v0)
    ctx->r8 = MEM_W(ctx->r2, 0XD4);
    // 0x002320A4: lw          $t1, 0xD8($v0)
    ctx->r9 = MEM_W(ctx->r2, 0XD8);
    // 0x002320A8: sw          $a3, 0x18($s2)
    MEM_W(0X18, ctx->r18) = ctx->r7;
    // 0x002320AC: sw          $t0, 0x1C($s2)
    MEM_W(0X1C, ctx->r18) = ctx->r8;
    // 0x002320B0: sw          $t1, 0x20($s2)
    MEM_W(0X20, ctx->r18) = ctx->r9;
    // 0x002320B4: lw          $a3, 0xD0($v0)
    ctx->r7 = MEM_W(ctx->r2, 0XD0);
    // 0x002320B8: lw          $t0, 0xD4($v0)
    ctx->r8 = MEM_W(ctx->r2, 0XD4);
    // 0x002320BC: lw          $t1, 0xD8($v0)
    ctx->r9 = MEM_W(ctx->r2, 0XD8);
    // 0x002320C0: sw          $a3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r7;
    // 0x002320C4: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x002320C8: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    // 0x002320CC: jal         0x0020F040
    // 0x002320D0: addiu       $s1, $s2, 0x4
    ctx->r17 = ADD32(ctx->r18, 0X4);
    func_0020F040(rdram, ctx);
        goto after_0;
    // 0x002320D0: addiu       $s1, $s2, 0x4
    ctx->r17 = ADD32(ctx->r18, 0X4);
    after_0:
    // 0x002320D4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002320D8: lwc1        $f12, 0x6400($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X6400);
    // 0x002320DC: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x002320E0: lw          $a3, 0x10($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X10);
    // 0x002320E4: lw          $t0, 0x14($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X14);
    // 0x002320E8: lw          $t1, 0x18($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X18);
    // 0x002320EC: sw          $a3, 0x150($s2)
    MEM_W(0X150, ctx->r18) = ctx->r7;
    // 0x002320F0: sw          $t0, 0x154($s2)
    MEM_W(0X154, ctx->r18) = ctx->r8;
    // 0x002320F4: sw          $t1, 0x158($s2)
    MEM_W(0X158, ctx->r18) = ctx->r9;
    // 0x002320F8: jal         0x002119FC
    // 0x002320FC: nop

    func_002119FC(rdram, ctx);
        goto after_1;
    // 0x002320FC: nop

    after_1:
    // 0x00232100: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00232104: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x00232108: jal         0x0020EF60
    // 0x0023210C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_0020EF60(rdram, ctx);
        goto after_2;
    // 0x0023210C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_2:
    // 0x00232110: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x00232114: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x00232118: jal         0x0020EEF8
    // 0x0023211C: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    func_0020EEF8(rdram, ctx);
        goto after_3;
    // 0x0023211C: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    after_3:
    // 0x00232120: lhu         $v1, 0x2($s2)
    ctx->r3 = MEM_HU(ctx->r18, 0X2);
    // 0x00232124: addiu       $v0, $zero, 0x7F
    ctx->r2 = ADD32(0, 0X7F);
    // 0x00232128: sb          $v0, 0x1AD($s2)
    MEM_B(0X1AD, ctx->r18) = ctx->r2;
    // 0x0023212C: addiu       $v0, $zero, 0x56
    ctx->r2 = ADD32(0, 0X56);
    // 0x00232130: bne         $v1, $v0, L_0023214C
    if (ctx->r3 != ctx->r2) {
        // 0x00232134: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_0023214C;
    }
    // 0x00232134: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x00232138: bne         $s3, $v0, L_0023214C
    if (ctx->r19 != ctx->r2) {
        // 0x0023213C: lui         $v1, 0x400
        ctx->r3 = S32(0X400 << 16);
            goto L_0023214C;
    }
    // 0x0023213C: lui         $v1, 0x400
    ctx->r3 = S32(0X400 << 16);
    // 0x00232140: lw          $v0, 0x40($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X40);
    // 0x00232144: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x00232148: sw          $v0, 0x40($s2)
    MEM_W(0X40, ctx->r18) = ctx->r2;
L_0023214C:
    // 0x0023214C: lw          $ra, 0x30($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X30);
    // 0x00232150: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x00232154: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x00232158: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x0023215C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x00232160: jr          $ra
    // 0x00232164: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x00232164: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_002550E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002550E8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x002550EC: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x002550F0: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x002550F4: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x002550F8: addu        $s2, $a1, $zero
    ctx->r18 = ADD32(ctx->r5, 0);
    // 0x002550FC: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x00255100: addu        $s3, $a2, $zero
    ctx->r19 = ADD32(ctx->r6, 0);
    // 0x00255104: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x00255108: addu        $s4, $a3, $zero
    ctx->r20 = ADD32(ctx->r7, 0);
    // 0x0025510C: sll         $v0, $s2, 2
    ctx->r2 = S32(ctx->r18 << 2);
    // 0x00255110: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00255114: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00255118: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x0025511C: lw          $s0, -0x9E8($at)
    ctx->r16 = MEM_W(ctx->r1, -0X9E8);
    // 0x00255120: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x00255124: jal         0x0024E700
    // 0x00255128: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    func_0024E700(rdram, ctx);
        goto after_0;
    // 0x00255128: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    after_0:
    // 0x0025512C: sll         $v1, $s3, 1
    ctx->r3 = S32(ctx->r19 << 1);
    // 0x00255130: addu        $v1, $v1, $s3
    ctx->r3 = ADD32(ctx->r3, ctx->r19);
    // 0x00255134: sll         $v1, $v1, 3
    ctx->r3 = S32(ctx->r3 << 3);
    // 0x00255138: addu        $a0, $s1, $v1
    ctx->r4 = ADD32(ctx->r17, ctx->r3);
    // 0x0025513C: sltu        $v0, $zero, $v0
    ctx->r2 = 0 < ctx->r2 ? 1 : 0;
    // 0x00255140: sw          $s2, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = ctx->r18;
    // 0x00255144: sw          $v0, 0x24($a0)
    MEM_W(0X24, ctx->r4) = ctx->r2;
    // 0x00255148: sw          $s0, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->r16;
    // 0x0025514C: lw          $v1, 0x37C($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X37C);
    // 0x00255150: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x00255154: bne         $v1, $v0, L_00255174
    if (ctx->r3 != ctx->r2) {
        // 0x00255158: nop
    
            goto L_00255174;
    }
    // 0x00255158: nop

    // 0x0025515C: lh          $v0, 0xB14($s4)
    ctx->r2 = MEM_H(ctx->r20, 0XB14);
    // 0x00255160: bne         $s2, $v0, L_00255174
    if (ctx->r18 != ctx->r2) {
        // 0x00255164: nop
    
            goto L_00255174;
    }
    // 0x00255164: nop

    // 0x00255168: sw          $s3, 0x37C($s1)
    MEM_W(0X37C, ctx->r17) = ctx->r19;
    // 0x0025516C: lwc1        $f0, 0x28($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X28);
    // 0x00255170: swc1        $f0, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->f0.u32l;
L_00255174:
    // 0x00255174: lw          $v0, 0x18($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X18);
    // 0x00255178: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x0025517C: sw          $v0, 0x18($s1)
    MEM_W(0X18, ctx->r17) = ctx->r2;
    // 0x00255180: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x00255184: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x00255188: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x0025518C: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x00255190: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00255194: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00255198: jr          $ra
    // 0x0025519C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x0025519C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_0022D09C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0022D09C: addiu       $sp, $sp, -0x88
    ctx->r29 = ADD32(ctx->r29, -0X88);
    // 0x0022D0A0: sw          $s0, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r16;
    // 0x0022D0A4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x0022D0A8: sw          $s2, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r18;
    // 0x0022D0AC: addu        $s2, $a1, $zero
    ctx->r18 = ADD32(ctx->r5, 0);
    // 0x0022D0B0: sw          $s3, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r19;
    // 0x0022D0B4: sw          $ra, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r31;
    // 0x0022D0B8: sw          $s1, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r17;
    // 0x0022D0BC: lw          $a3, 0x4($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X4);
    // 0x0022D0C0: lw          $t0, 0x8($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X8);
    // 0x0022D0C4: lw          $t1, 0xC($s0)
    ctx->r9 = MEM_W(ctx->r16, 0XC);
    // 0x0022D0C8: sw          $a3, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r7;
    // 0x0022D0CC: sw          $t0, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r8;
    // 0x0022D0D0: sw          $t1, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r9;
    // 0x0022D0D4: lw          $a3, 0x18($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X18);
    // 0x0022D0D8: lw          $t0, 0x1C($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X1C);
    // 0x0022D0DC: lw          $t1, 0x20($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X20);
    // 0x0022D0E0: sw          $a3, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r7;
    // 0x0022D0E4: sw          $t0, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r8;
    // 0x0022D0E8: sw          $t1, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r9;
    // 0x0022D0EC: lw          $v0, 0x40($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X40);
    // 0x0022D0F0: lui         $v1, 0x1
    ctx->r3 = S32(0X1 << 16);
    // 0x0022D0F4: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x0022D0F8: beq         $v0, $zero, L_0022D23C
    if (ctx->r2 == 0) {
        // 0x0022D0FC: addu        $s3, $a2, $zero
        ctx->r19 = ADD32(ctx->r6, 0);
            goto L_0022D23C;
    }
    // 0x0022D0FC: addu        $s3, $a2, $zero
    ctx->r19 = ADD32(ctx->r6, 0);
    // 0x0022D100: addiu       $v0, $zero, 0x4F
    ctx->r2 = ADD32(0, 0X4F);
    // 0x0022D104: lhu         $v1, 0x2($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X2);
    // 0x0022D108: lw          $s1, 0x114($s0)
    ctx->r17 = MEM_W(ctx->r16, 0X114);
    // 0x0022D10C: beq         $v1, $v0, L_0022D190
    if (ctx->r3 == ctx->r2) {
        // 0x0022D110: slti        $v0, $v1, 0x50
        ctx->r2 = SIGNED(ctx->r3) < 0X50 ? 1 : 0;
            goto L_0022D190;
    }
    // 0x0022D110: slti        $v0, $v1, 0x50
    ctx->r2 = SIGNED(ctx->r3) < 0X50 ? 1 : 0;
    // 0x0022D114: beq         $v0, $zero, L_0022D158
    if (ctx->r2 == 0) {
        // 0x0022D118: addiu       $v0, $zero, 0xB
        ctx->r2 = ADD32(0, 0XB);
            goto L_0022D158;
    }
    // 0x0022D118: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
    // 0x0022D11C: beq         $v1, $v0, L_0022D190
    if (ctx->r3 == ctx->r2) {
        // 0x0022D120: slti        $v0, $v1, 0xC
        ctx->r2 = SIGNED(ctx->r3) < 0XC ? 1 : 0;
            goto L_0022D190;
    }
    // 0x0022D120: slti        $v0, $v1, 0xC
    ctx->r2 = SIGNED(ctx->r3) < 0XC ? 1 : 0;
    // 0x0022D124: beq         $v0, $zero, L_0022D13C
    if (ctx->r2 == 0) {
        // 0x0022D128: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_0022D13C;
    }
    // 0x0022D128: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x0022D12C: beq         $v1, $v0, L_0022D190
    if (ctx->r3 == ctx->r2) {
        // 0x0022D130: nop
    
            goto L_0022D190;
    }
    // 0x0022D130: nop

    // 0x0022D134: j           L_0022D234
    // 0x0022D138: nop

        goto L_0022D234;
    // 0x0022D138: nop

L_0022D13C:
    // 0x0022D13C: addiu       $v0, $zero, 0xF
    ctx->r2 = ADD32(0, 0XF);
    // 0x0022D140: beq         $v1, $v0, L_0022D190
    if (ctx->r3 == ctx->r2) {
        // 0x0022D144: addiu       $v0, $zero, 0x2D
        ctx->r2 = ADD32(0, 0X2D);
            goto L_0022D190;
    }
    // 0x0022D144: addiu       $v0, $zero, 0x2D
    ctx->r2 = ADD32(0, 0X2D);
    // 0x0022D148: beq         $v1, $v0, L_0022D190
    if (ctx->r3 == ctx->r2) {
        // 0x0022D14C: nop
    
            goto L_0022D190;
    }
    // 0x0022D14C: nop

    // 0x0022D150: j           L_0022D234
    // 0x0022D154: nop

        goto L_0022D234;
    // 0x0022D154: nop

L_0022D158:
    // 0x0022D158: addiu       $v0, $zero, 0x126
    ctx->r2 = ADD32(0, 0X126);
    // 0x0022D15C: beq         $v1, $v0, L_0022D190
    if (ctx->r3 == ctx->r2) {
        // 0x0022D160: slti        $v0, $v1, 0x127
        ctx->r2 = SIGNED(ctx->r3) < 0X127 ? 1 : 0;
            goto L_0022D190;
    }
    // 0x0022D160: slti        $v0, $v1, 0x127
    ctx->r2 = SIGNED(ctx->r3) < 0X127 ? 1 : 0;
    // 0x0022D164: beq         $v0, $zero, L_0022D17C
    if (ctx->r2 == 0) {
        // 0x0022D168: addiu       $v0, $zero, 0x56
        ctx->r2 = ADD32(0, 0X56);
            goto L_0022D17C;
    }
    // 0x0022D168: addiu       $v0, $zero, 0x56
    ctx->r2 = ADD32(0, 0X56);
    // 0x0022D16C: beq         $v1, $v0, L_0022D190
    if (ctx->r3 == ctx->r2) {
        // 0x0022D170: nop
    
            goto L_0022D190;
    }
    // 0x0022D170: nop

    // 0x0022D174: j           L_0022D234
    // 0x0022D178: nop

        goto L_0022D234;
    // 0x0022D178: nop

L_0022D17C:
    // 0x0022D17C: addiu       $v0, $zero, 0x12A
    ctx->r2 = ADD32(0, 0X12A);
    // 0x0022D180: beq         $v1, $v0, L_0022D190
    if (ctx->r3 == ctx->r2) {
        // 0x0022D184: addiu       $v0, $zero, 0x132
        ctx->r2 = ADD32(0, 0X132);
            goto L_0022D190;
    }
    // 0x0022D184: addiu       $v0, $zero, 0x132
    ctx->r2 = ADD32(0, 0X132);
    // 0x0022D188: bne         $v1, $v0, L_0022D234
    if (ctx->r3 != ctx->r2) {
        // 0x0022D18C: nop
    
            goto L_0022D234;
    }
    // 0x0022D18C: nop

L_0022D190:
    // 0x0022D190: lw          $v0, 0x98($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X98);
    // 0x0022D194: beq         $v0, $zero, L_0022D204
    if (ctx->r2 == 0) {
        // 0x0022D198: addiu       $a0, $sp, 0x10
        ctx->r4 = ADD32(ctx->r29, 0X10);
            goto L_0022D204;
    }
    // 0x0022D198: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x0022D19C: lb          $a1, 0x1AD($s0)
    ctx->r5 = MEM_B(ctx->r16, 0X1AD);
    // 0x0022D1A0: sll         $a1, $a1, 6
    ctx->r5 = S32(ctx->r5 << 6);
    // 0x0022D1A4: jal         0x0020D908
    // 0x0022D1A8: addu        $a1, $v0, $a1
    ctx->r5 = ADD32(ctx->r2, ctx->r5);
    func_0020D908(rdram, ctx);
        goto after_0;
    // 0x0022D1A8: addu        $a1, $v0, $a1
    ctx->r5 = ADD32(ctx->r2, ctx->r5);
    after_0:
    // 0x0022D1AC: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x0022D1B0: addiu       $a1, $s0, 0x34
    ctx->r5 = ADD32(ctx->r16, 0X34);
    // 0x0022D1B4: jal         0x0020F85C
    // 0x0022D1B8: addiu       $a2, $sp, 0x50
    ctx->r6 = ADD32(ctx->r29, 0X50);
    func_0020F85C(rdram, ctx);
        goto after_1;
    // 0x0022D1B8: addiu       $a2, $sp, 0x50
    ctx->r6 = ADD32(ctx->r29, 0X50);
    after_1:
    // 0x0022D1BC: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x0022D1C0: addiu       $a1, $s0, 0x18
    ctx->r5 = ADD32(ctx->r16, 0X18);
    // 0x0022D1C4: jal         0x0020FAFC
    // 0x0022D1C8: addiu       $a2, $sp, 0x60
    ctx->r6 = ADD32(ctx->r29, 0X60);
    func_0020FAFC(rdram, ctx);
        goto after_2;
    // 0x0022D1C8: addiu       $a2, $sp, 0x60
    ctx->r6 = ADD32(ctx->r29, 0X60);
    after_2:
    // 0x0022D1CC: lw          $a3, 0x50($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X50);
    // 0x0022D1D0: lw          $t0, 0x54($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X54);
    // 0x0022D1D4: lw          $t1, 0x58($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X58);
    // 0x0022D1D8: sw          $a3, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r7;
    // 0x0022D1DC: sw          $t0, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r8;
    // 0x0022D1E0: sw          $t1, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r9;
    // 0x0022D1E4: lw          $a3, 0x60($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X60);
    // 0x0022D1E8: lw          $t0, 0x64($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X64);
    // 0x0022D1EC: lw          $t1, 0x68($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X68);
    // 0x0022D1F0: sw          $a3, 0x150($s0)
    MEM_W(0X150, ctx->r16) = ctx->r7;
    // 0x0022D1F4: sw          $t0, 0x154($s0)
    MEM_W(0X154, ctx->r16) = ctx->r8;
    // 0x0022D1F8: sw          $t1, 0x158($s0)
    MEM_W(0X158, ctx->r16) = ctx->r9;
    // 0x0022D1FC: j           L_0022D234
    // 0x0022D200: nop

        goto L_0022D234;
    // 0x0022D200: nop

L_0022D204:
    // 0x0022D204: lw          $a3, 0x4($s1)
    ctx->r7 = MEM_W(ctx->r17, 0X4);
    // 0x0022D208: lw          $t0, 0x8($s1)
    ctx->r8 = MEM_W(ctx->r17, 0X8);
    // 0x0022D20C: lw          $t1, 0xC($s1)
    ctx->r9 = MEM_W(ctx->r17, 0XC);
    // 0x0022D210: sw          $a3, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r7;
    // 0x0022D214: sw          $t0, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r8;
    // 0x0022D218: sw          $t1, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r9;
    // 0x0022D21C: lw          $a3, 0x50($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X50);
    // 0x0022D220: lw          $t0, 0x54($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X54);
    // 0x0022D224: lw          $t1, 0x58($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X58);
    // 0x0022D228: sw          $a3, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r7;
    // 0x0022D22C: sw          $t0, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r8;
    // 0x0022D230: sw          $t1, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r9;
L_0022D234:
    // 0x0022D234: lw          $v0, 0x10($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X10);
    // 0x0022D238: sw          $v0, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r2;
L_0022D23C:
    // 0x0022D23C: lw          $v0, 0x40($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X40);
    // 0x0022D240: lui         $v1, 0x40
    ctx->r3 = S32(0X40 << 16);
    // 0x0022D244: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x0022D248: beq         $v0, $zero, L_0022D2A0
    if (ctx->r2 == 0) {
        // 0x0022D24C: lui         $v1, 0x30
        ctx->r3 = S32(0X30 << 16);
            goto L_0022D2A0;
    }
    // 0x0022D24C: lui         $v1, 0x30
    ctx->r3 = S32(0X30 << 16);
    // 0x0022D250: lw          $s1, 0x10C($s0)
    ctx->r17 = MEM_W(ctx->r16, 0X10C);
    // 0x0022D254: lw          $v0, 0xD4($s1)
    ctx->r2 = MEM_W(ctx->r17, 0XD4);
    // 0x0022D258: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x0022D25C: beq         $v0, $zero, L_0022D278
    if (ctx->r2 == 0) {
        // 0x0022D260: addiu       $a1, $s0, 0x34
        ctx->r5 = ADD32(ctx->r16, 0X34);
            goto L_0022D278;
    }
    // 0x0022D260: addiu       $a1, $s0, 0x34
    ctx->r5 = ADD32(ctx->r16, 0X34);
    // 0x0022D264: lw          $v0, 0x1A8($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X1A8);
    // 0x0022D268: lw          $a0, 0x51C($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X51C);
    // 0x0022D26C: addiu       $a2, $sp, 0x50
    ctx->r6 = ADD32(ctx->r29, 0X50);
    // 0x0022D270: j           L_0022D280
    // 0x0022D274: addiu       $a0, $a0, 0x14C
    ctx->r4 = ADD32(ctx->r4, 0X14C);
        goto L_0022D280;
    // 0x0022D274: addiu       $a0, $a0, 0x14C
    ctx->r4 = ADD32(ctx->r4, 0X14C);
L_0022D278:
    // 0x0022D278: addiu       $a0, $s1, 0x58
    ctx->r4 = ADD32(ctx->r17, 0X58);
    // 0x0022D27C: addiu       $a2, $sp, 0x50
    ctx->r6 = ADD32(ctx->r29, 0X50);
L_0022D280:
    // 0x0022D280: jal         0x0020F85C
    // 0x0022D284: nop

    func_0020F85C(rdram, ctx);
        goto after_3;
    // 0x0022D284: nop

    after_3:
    // 0x0022D288: lw          $a3, 0x50($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X50);
    // 0x0022D28C: lw          $t0, 0x54($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X54);
    // 0x0022D290: lw          $t1, 0x58($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X58);
    // 0x0022D294: sw          $a3, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r7;
    // 0x0022D298: sw          $t0, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r8;
    // 0x0022D29C: sw          $t1, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r9;
L_0022D2A0:
    // 0x0022D2A0: beq         $s2, $zero, L_0022D2C0
    if (ctx->r18 == 0) {
        // 0x0022D2A4: nop
    
            goto L_0022D2C0;
    }
    // 0x0022D2A4: nop

    // 0x0022D2A8: lw          $a3, 0x50($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X50);
    // 0x0022D2AC: lw          $t0, 0x54($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X54);
    // 0x0022D2B0: lw          $t1, 0x58($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X58);
    // 0x0022D2B4: sw          $a3, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r7;
    // 0x0022D2B8: sw          $t0, 0x4($s2)
    MEM_W(0X4, ctx->r18) = ctx->r8;
    // 0x0022D2BC: sw          $t1, 0x8($s2)
    MEM_W(0X8, ctx->r18) = ctx->r9;
L_0022D2C0:
    // 0x0022D2C0: beq         $s3, $zero, L_0022D2E0
    if (ctx->r19 == 0) {
        // 0x0022D2C4: nop
    
            goto L_0022D2E0;
    }
    // 0x0022D2C4: nop

    // 0x0022D2C8: lw          $a3, 0x60($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X60);
    // 0x0022D2CC: lw          $t0, 0x64($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X64);
    // 0x0022D2D0: lw          $t1, 0x68($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X68);
    // 0x0022D2D4: sw          $a3, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r7;
    // 0x0022D2D8: sw          $t0, 0x4($s3)
    MEM_W(0X4, ctx->r19) = ctx->r8;
    // 0x0022D2DC: sw          $t1, 0x8($s3)
    MEM_W(0X8, ctx->r19) = ctx->r9;
L_0022D2E0:
    // 0x0022D2E0: lw          $ra, 0x80($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X80);
    // 0x0022D2E4: lw          $s3, 0x7C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X7C);
    // 0x0022D2E8: lw          $s2, 0x78($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X78);
    // 0x0022D2EC: lw          $s1, 0x74($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X74);
    // 0x0022D2F0: lw          $s0, 0x70($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X70);
    // 0x0022D2F4: jr          $ra
    // 0x0022D2F8: addiu       $sp, $sp, 0x88
    ctx->r29 = ADD32(ctx->r29, 0X88);
    return;
    // 0x0022D2F8: addiu       $sp, $sp, 0x88
    ctx->r29 = ADD32(ctx->r29, 0X88);
;}
RECOMP_FUNC void func_0028F460(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0028F460: addu        $t0, $a0, $a1
    ctx->r8 = ADD32(ctx->r4, ctx->r5);
    // 0x0028F464: lbu         $v0, 0x98($t0)
    ctx->r2 = MEM_BU(ctx->r8, 0X98);
    // 0x0028F468: beq         $v0, $zero, L_0028F488
    if (ctx->r2 == 0) {
        // 0x0028F46C: sll         $v1, $a1, 2
        ctx->r3 = S32(ctx->r5 << 2);
            goto L_0028F488;
    }
    // 0x0028F46C: sll         $v1, $a1, 2
    ctx->r3 = S32(ctx->r5 << 2);
    // 0x0028F470: addu        $v1, $a0, $v1
    ctx->r3 = ADD32(ctx->r4, ctx->r3);
    // 0x0028F474: lw          $v0, 0x58($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X58);
    // 0x0028F478: lbu         $a0, 0x0($v0)
    ctx->r4 = MEM_BU(ctx->r2, 0X0);
    // 0x0028F47C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x0028F480: j           L_0028F504
    // 0x0028F484: sw          $v0, 0x58($v1)
    MEM_W(0X58, ctx->r3) = ctx->r2;
        goto L_0028F504;
    // 0x0028F484: sw          $v0, 0x58($v1)
    MEM_W(0X58, ctx->r3) = ctx->r2;
L_0028F488:
    // 0x0028F488: sll         $v0, $a1, 2
    ctx->r2 = S32(ctx->r5 << 2);
    // 0x0028F48C: addu        $a3, $a0, $v0
    ctx->r7 = ADD32(ctx->r4, ctx->r2);
    // 0x0028F490: lw          $a2, 0x18($a3)
    ctx->r6 = MEM_W(ctx->r7, 0X18);
    // 0x0028F494: lbu         $a0, 0x0($a2)
    ctx->r4 = MEM_BU(ctx->r6, 0X0);
    // 0x0028F498: addiu       $v0, $a2, 0x1
    ctx->r2 = ADD32(ctx->r6, 0X1);
    // 0x0028F49C: sw          $v0, 0x18($a3)
    MEM_W(0X18, ctx->r7) = ctx->r2;
    // 0x0028F4A0: addiu       $v0, $zero, 0xFE
    ctx->r2 = ADD32(0, 0XFE);
    // 0x0028F4A4: andi        $a1, $a0, 0xFF
    ctx->r5 = ctx->r4 & 0XFF;
    // 0x0028F4A8: bne         $a1, $v0, L_0028F510
    if (ctx->r5 != ctx->r2) {
        // 0x0028F4AC: addiu       $v0, $a2, 0x2
        ctx->r2 = ADD32(ctx->r6, 0X2);
            goto L_0028F510;
    }
    // 0x0028F4AC: addiu       $v0, $a2, 0x2
    ctx->r2 = ADD32(ctx->r6, 0X2);
    // 0x0028F4B0: lbu         $v1, 0x1($a2)
    ctx->r3 = MEM_BU(ctx->r6, 0X1);
    // 0x0028F4B4: andi        $v1, $v1, 0xFF
    ctx->r3 = ctx->r3 & 0XFF;
    // 0x0028F4B8: beq         $v1, $a1, L_0028F510
    if (ctx->r3 == ctx->r5) {
        // 0x0028F4BC: sw          $v0, 0x18($a3)
        MEM_W(0X18, ctx->r7) = ctx->r2;
            goto L_0028F510;
    }
    // 0x0028F4BC: sw          $v0, 0x18($a3)
    MEM_W(0X18, ctx->r7) = ctx->r2;
    // 0x0028F4C0: sll         $v1, $v1, 8
    ctx->r3 = S32(ctx->r3 << 8);
    // 0x0028F4C4: lbu         $a0, 0x2($a2)
    ctx->r4 = MEM_BU(ctx->r6, 0X2);
    // 0x0028F4C8: addiu       $v0, $a2, 0x3
    ctx->r2 = ADD32(ctx->r6, 0X3);
    // 0x0028F4CC: sw          $v0, 0x18($a3)
    MEM_W(0X18, ctx->r7) = ctx->r2;
    // 0x0028F4D0: lbu         $a1, 0x3($a2)
    ctx->r5 = MEM_BU(ctx->r6, 0X3);
    // 0x0028F4D4: addiu       $v0, $a2, 0x4
    ctx->r2 = ADD32(ctx->r6, 0X4);
    // 0x0028F4D8: sw          $v0, 0x18($a3)
    MEM_W(0X18, ctx->r7) = ctx->r2;
    // 0x0028F4DC: andi        $a0, $a0, 0xFF
    ctx->r4 = ctx->r4 & 0XFF;
    // 0x0028F4E0: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x0028F4E4: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x0028F4E8: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x0028F4EC: sw          $v0, 0x58($a3)
    MEM_W(0X58, ctx->r7) = ctx->r2;
    // 0x0028F4F0: sb          $a1, 0x98($t0)
    MEM_B(0X98, ctx->r8) = ctx->r5;
    // 0x0028F4F4: lw          $v0, 0x58($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X58);
    // 0x0028F4F8: lbu         $a0, 0x0($v0)
    ctx->r4 = MEM_BU(ctx->r2, 0X0);
    // 0x0028F4FC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x0028F500: sw          $v0, 0x58($a3)
    MEM_W(0X58, ctx->r7) = ctx->r2;
L_0028F504:
    // 0x0028F504: lbu         $v0, 0x98($t0)
    ctx->r2 = MEM_BU(ctx->r8, 0X98);
    // 0x0028F508: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x0028F50C: sb          $v0, 0x98($t0)
    MEM_B(0X98, ctx->r8) = ctx->r2;
L_0028F510:
    // 0x0028F510: jr          $ra
    // 0x0028F514: addu        $v0, $a0, $zero
    ctx->r2 = ADD32(ctx->r4, 0);
    return;
    // 0x0028F514: addu        $v0, $a0, $zero
    ctx->r2 = ADD32(ctx->r4, 0);
;}
RECOMP_FUNC void func_0041B9DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041B9DC: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x0041B9E0: lw          $v0, -0x5524($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X5524);
    // 0x0041B9E4: andi        $v0, $v0, 0x8000
    ctx->r2 = ctx->r2 & 0X8000;
    // 0x0041B9E8: beq         $v0, $zero, L_0041B9FC
    if (ctx->r2 == 0) {
        // 0x0041B9EC: lui         $v1, 0x100
        ctx->r3 = S32(0X100 << 16);
            goto L_0041B9FC;
    }
    // 0x0041B9EC: lui         $v1, 0x100
    ctx->r3 = S32(0X100 << 16);
    // 0x0041B9F0: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x0041B9F4: j           L_0041BA0C
    // 0x0041B9F8: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
        goto L_0041BA0C;
    // 0x0041B9F8: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
L_0041B9FC:
    // 0x0041B9FC: lui         $v1, 0xFEFF
    ctx->r3 = S32(0XFEFF << 16);
    // 0x0041BA00: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x0041BA04: ori         $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 | 0XFFFF;
    // 0x0041BA08: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
L_0041BA0C:
    // 0x0041BA0C: sw          $v0, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r2;
    // 0x0041BA10: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x0041BA14: lw          $v0, -0x5528($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X5528);
    // 0x0041BA18: andi        $v0, $v0, 0x8000
    ctx->r2 = ctx->r2 & 0X8000;
    // 0x0041BA1C: beq         $v0, $zero, L_0041BA34
    if (ctx->r2 == 0) {
        // 0x0041BA20: nop
    
            goto L_0041BA34;
    }
    // 0x0041BA20: nop

    // 0x0041BA24: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0041BA28: addiu       $v0, $v0, 0x5AF4
    ctx->r2 = ADD32(ctx->r2, 0X5AF4);
    // 0x0041BA2C: j           L_0041BA40
    // 0x0041BA30: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_0041BA40;
    // 0x0041BA30: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_0041BA34:
    // 0x0041BA34: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0041BA38: addiu       $v0, $v0, 0x5B10
    ctx->r2 = ADD32(ctx->r2, 0X5B10);
    // 0x0041BA3C: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_0041BA40:
    // 0x0041BA40: jr          $ra
    // 0x0041BA44: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x0041BA44: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void func_00406C4C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00406C4C: addiu       $sp, $sp, -0xC8
    ctx->r29 = ADD32(ctx->r29, -0XC8);
    // 0x00406C50: sw          $s1, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->r17;
    // 0x00406C54: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x00406C58: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x00406C5C: addiu       $a1, $s1, 0x140
    ctx->r5 = ADD32(ctx->r17, 0X140);
    // 0x00406C60: sw          $s2, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->r18;
    // 0x00406C64: lw          $s2, 0xE0($sp)
    ctx->r18 = MEM_W(ctx->r29, 0XE0);
    // 0x00406C68: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    // 0x00406C6C: sw          $a3, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->r7;
    // 0x00406C70: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x00406C74: sw          $s0, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->r16;
    // 0x00406C78: lui         $s0, 0x800F
    ctx->r16 = S32(0X800F << 16);
    // 0x00406C7C: addiu       $s0, $s0, 0x1F50
    ctx->r16 = ADD32(ctx->r16, 0X1F50);
    // 0x00406C80: sw          $ra, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->r31;
    // 0x00406C84: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x00406C88: addu        $v1, $a3, $zero
    ctx->r3 = ADD32(ctx->r7, 0);
    // 0x00406C8C: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    // 0x00406C90: ori         $v0, $v0, 0x8000
    ctx->r2 = ctx->r2 | 0X8000;
    // 0x00406C94: jal         0x00246108
    // 0x00406C98: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    func_00246108(rdram, ctx);
        goto after_0;
    // 0x00406C98: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    after_0:
    // 0x00406C9C: lui         $v1, 0xFFFF
    ctx->r3 = S32(0XFFFF << 16);
    // 0x00406CA0: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x00406CA4: ori         $v1, $v1, 0x7FFF
    ctx->r3 = ctx->r3 | 0X7FFF;
    // 0x00406CA8: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x00406CAC: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x00406CB0: lw          $v1, 0x2C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X2C);
    // 0x00406CB4: beq         $v1, $zero, L_00406DF4
    if (ctx->r3 == 0) {
        // 0x00406CB8: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_00406DF4;
    }
    // 0x00406CB8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x00406CBC: bne         $s2, $v0, L_00406D4C
    if (ctx->r18 != ctx->r2) {
        // 0x00406CC0: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_00406D4C;
    }
    // 0x00406CC0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00406CC4: lwc1        $f1, 0x4C($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X4C);
    // 0x00406CC8: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00406CCC: lwc1        $f0, 0x4F0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X4F0);
    // 0x00406CD0: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x00406CD4: nop

    // 0x00406CD8: bc1f        L_00406D4C
    if (!c1cs) {
        // 0x00406CDC: nop
    
            goto L_00406D4C;
    }
    // 0x00406CDC: nop

    // 0x00406CE0: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x00406CE4: lw          $v0, -0x670($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X670);
    // 0x00406CE8: blez        $v0, L_00406D48
    if (SIGNED(ctx->r2) <= 0) {
        // 0x00406CEC: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_00406D48;
    }
    // 0x00406CEC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x00406CF0: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x00406CF4: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x00406CF8: addiu       $v0, $zero, 0xA00
    ctx->r2 = ADD32(0, 0XA00);
    // 0x00406CFC: sh          $v0, 0xB0($sp)
    MEM_H(0XB0, ctx->r29) = ctx->r2;
    // 0x00406D00: addiu       $v0, $zero, 0x400
    ctx->r2 = ADD32(0, 0X400);
    // 0x00406D04: sh          $v0, 0xB2($sp)
    MEM_H(0XB2, ctx->r29) = ctx->r2;
    // 0x00406D08: sb          $zero, 0xB4($sp)
    MEM_B(0XB4, ctx->r29) = 0;
    // 0x00406D0C: sb          $zero, 0xB5($sp)
    MEM_B(0XB5, ctx->r29) = 0;
    // 0x00406D10: sb          $zero, 0xB6($sp)
    MEM_B(0XB6, ctx->r29) = 0;
    // 0x00406D14: sb          $zero, 0xB7($sp)
    MEM_B(0XB7, ctx->r29) = 0;
    // 0x00406D18: lw          $t0, 0x4($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X4);
    // 0x00406D1C: lw          $t1, 0x8($v1)
    ctx->r9 = MEM_W(ctx->r3, 0X8);
    // 0x00406D20: lw          $t2, 0xC($v1)
    ctx->r10 = MEM_W(ctx->r3, 0XC);
    // 0x00406D24: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x00406D28: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x00406D2C: sw          $t2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r10;
    // 0x00406D30: lw          $t0, 0xB0($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XB0);
    // 0x00406D34: lw          $t1, 0xB4($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XB4);
    // 0x00406D38: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    // 0x00406D3C: sw          $t1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r9;
    // 0x00406D40: jal         0x00236EA0
    // 0x00406D44: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    func_00236EA0(rdram, ctx);
        goto after_1;
    // 0x00406D44: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    after_1:
L_00406D48:
    // 0x00406D48: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_00406D4C:
    // 0x00406D4C: bne         $s2, $v0, L_00406DF4
    if (ctx->r18 != ctx->r2) {
        // 0x00406D50: nop
    
            goto L_00406DF4;
    }
    // 0x00406D50: nop

    // 0x00406D54: lwc1        $f1, 0x4C($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X4C);
    // 0x00406D58: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00406D5C: lwc1        $f0, 0x4F4($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X4F4);
    // 0x00406D60: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x00406D64: nop

    // 0x00406D68: bc1f        L_00406DF4
    if (!c1cs) {
        // 0x00406D6C: nop
    
            goto L_00406DF4;
    }
    // 0x00406D6C: nop

    // 0x00406D70: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x00406D74: lw          $v0, -0x678($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X678);
    // 0x00406D78: blez        $v0, L_00406DF4
    if (SIGNED(ctx->r2) <= 0) {
        // 0x00406D7C: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_00406DF4;
    }
    // 0x00406D7C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x00406D80: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x00406D84: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x00406D88: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00406D8C: lwc1        $f1, 0x4F8($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X4F8);
    // 0x00406D90: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00406D94: lwc1        $f0, 0x4FC($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X4FC);
    // 0x00406D98: lw          $v1, 0x2C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X2C);
    // 0x00406D9C: addiu       $v0, $zero, 0x800
    ctx->r2 = ADD32(0, 0X800);
    // 0x00406DA0: sh          $v0, 0xB2($sp)
    MEM_H(0XB2, ctx->r29) = ctx->r2;
    // 0x00406DA4: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00406DA8: sb          $zero, 0xB4($sp)
    MEM_B(0XB4, ctx->r29) = 0;
    // 0x00406DAC: sb          $zero, 0xB5($sp)
    MEM_B(0XB5, ctx->r29) = 0;
    // 0x00406DB0: sb          $zero, 0xB6($sp)
    MEM_B(0XB6, ctx->r29) = 0;
    // 0x00406DB4: sb          $zero, 0xB7($sp)
    MEM_B(0XB7, ctx->r29) = 0;
    // 0x00406DB8: trunc.w.s   $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x00406DBC: mfc1        $v0, $f2
    ctx->r2 = (int32_t)ctx->f2.u32l;
    // 0x00406DC0: sh          $v0, 0xB0($sp)
    MEM_H(0XB0, ctx->r29) = ctx->r2;
    // 0x00406DC4: lw          $t0, 0x4($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X4);
    // 0x00406DC8: lw          $t1, 0x8($v1)
    ctx->r9 = MEM_W(ctx->r3, 0X8);
    // 0x00406DCC: lw          $t2, 0xC($v1)
    ctx->r10 = MEM_W(ctx->r3, 0XC);
    // 0x00406DD0: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x00406DD4: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x00406DD8: sw          $t2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r10;
    // 0x00406DDC: lw          $t0, 0xB0($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XB0);
    // 0x00406DE0: lw          $t1, 0xB4($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XB4);
    // 0x00406DE4: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    // 0x00406DE8: sw          $t1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r9;
    // 0x00406DEC: jal         0x00236EA0
    // 0x00406DF0: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    func_00236EA0(rdram, ctx);
        goto after_2;
    // 0x00406DF0: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    after_2:
L_00406DF4:
    // 0x00406DF4: lw          $ra, 0xC4($sp)
    ctx->r31 = MEM_W(ctx->r29, 0XC4);
    // 0x00406DF8: lw          $s2, 0xC0($sp)
    ctx->r18 = MEM_W(ctx->r29, 0XC0);
    // 0x00406DFC: lw          $s1, 0xBC($sp)
    ctx->r17 = MEM_W(ctx->r29, 0XBC);
    // 0x00406E00: lw          $s0, 0xB8($sp)
    ctx->r16 = MEM_W(ctx->r29, 0XB8);
    // 0x00406E04: jr          $ra
    // 0x00406E08: addiu       $sp, $sp, 0xC8
    ctx->r29 = ADD32(ctx->r29, 0XC8);
    return;
    // 0x00406E08: addiu       $sp, $sp, 0xC8
    ctx->r29 = ADD32(ctx->r29, 0XC8);
;}
RECOMP_FUNC void func_00285304(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00285304: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x00285308: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x0028530C: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    // 0x00285310: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x00285314: addiu       $s3, $zero, 0x2
    ctx->r19 = ADD32(0, 0X2);
    // 0x00285318: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x0028531C: lui         $s1, 0x800F
    ctx->r17 = S32(0X800F << 16);
    // 0x00285320: addiu       $s1, $s1, 0x5EC0
    ctx->r17 = ADD32(ctx->r17, 0X5EC0);
    // 0x00285324: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x00285328: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
L_0028532C:
    // 0x0028532C: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00285330: lbu         $v0, 0x6CF0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X6CF0);
    // 0x00285334: beql        $v0, $zero, L_002853E8
    if (ctx->r2 == 0) {
        // 0x00285338: addiu       $s2, $s2, 0x1
        ctx->r18 = ADD32(ctx->r18, 0X1);
            goto L_002853E8;
    }
    goto skip_0;
    // 0x00285338: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    skip_0:
    // 0x0028533C: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x00285340: beq         $v0, $zero, L_002853E4
    if (ctx->r2 == 0) {
        // 0x00285344: addu        $a1, $zero, $zero
        ctx->r5 = ADD32(0, 0);
            goto L_002853E4;
    }
    // 0x00285344: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x00285348: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x0028534C: addiu       $a0, $a0, 0x6758
    ctx->r4 = ADD32(ctx->r4, 0X6758);
    // 0x00285350: jal         0x0029B6F0
    // 0x00285354: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osRecvMesg_recomp(rdram, ctx);
        goto after_0;
    // 0x00285354: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_0:
    // 0x00285358: jal         0x002847E0
    // 0x0028535C: addiu       $s0, $s1, 0xD8
    ctx->r16 = ADD32(ctx->r17, 0XD8);
    func_002847E0(rdram, ctx);
        goto after_1;
    // 0x0028535C: addiu       $s0, $s1, 0xD8
    ctx->r16 = ADD32(ctx->r17, 0XD8);
    after_1:
    // 0x00285360: addiu       $a0, $s1, 0x140
    ctx->r4 = ADD32(ctx->r17, 0X140);
    // 0x00285364: addiu       $a1, $s1, 0x16C
    ctx->r5 = ADD32(ctx->r17, 0X16C);
    // 0x00285368: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x0028536C: lui         $at, 0x800F
    ctx->r1 = S32(0X800F << 16);
    // 0x00285370: sb          $s3, 0x6750($at)
    MEM_B(0X6750, ctx->r1) = ctx->r19;
    // 0x00285374: sw          $zero, 0xCC($s1)
    MEM_W(0XCC, ctx->r17) = 0;
    // 0x00285378: sw          $zero, 0xD0($s1)
    MEM_W(0XD0, ctx->r17) = 0;
    // 0x0028537C: jal         0x0026EB3C
    // 0x00285380: sw          $zero, 0xD4($s1)
    MEM_W(0XD4, ctx->r17) = 0;
    func_0026EB3C(rdram, ctx);
        goto after_2;
    // 0x00285380: sw          $zero, 0xD4($s1)
    MEM_W(0XD4, ctx->r17) = 0;
    after_2:
    // 0x00285384: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x00285388: addiu       $a0, $a0, 0x6798
    ctx->r4 = ADD32(ctx->r4, 0X6798);
    // 0x0028538C: lb          $a2, 0x4($s1)
    ctx->r6 = MEM_B(ctx->r17, 0X4);
    // 0x00285390: jal         0x00299198
    // 0x00285394: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_00299198(rdram, ctx);
        goto after_3;
    // 0x00285394: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_3:
    // 0x00285398: jal         0x00298E10
    // 0x0028539C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00298E10(rdram, ctx);
        goto after_4;
    // 0x0028539C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
    // 0x002853A0: jal         0x00298E10
    // 0x002853A4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00298E10(rdram, ctx);
        goto after_5;
    // 0x002853A4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_5:
    // 0x002853A8: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x002853AC: addiu       $a0, $a0, 0x6798
    ctx->r4 = ADD32(ctx->r4, 0X6798);
    // 0x002853B0: lb          $a2, 0x4($s1)
    ctx->r6 = MEM_B(ctx->r17, 0X4);
    // 0x002853B4: jal         0x00299198
    // 0x002853B8: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_00299198(rdram, ctx);
        goto after_6;
    // 0x002853B8: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_6:
    // 0x002853BC: bne         $v0, $zero, L_002853C8
    if (ctx->r2 != 0) {
        // 0x002853C0: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_002853C8;
    }
    // 0x002853C0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x002853C4: sw          $v0, 0xC8($s1)
    MEM_W(0XC8, ctx->r17) = ctx->r2;
L_002853C8:
    // 0x002853C8: lui         $at, 0x800F
    ctx->r1 = S32(0X800F << 16);
    // 0x002853CC: sb          $s3, 0x6750($at)
    MEM_B(0X6750, ctx->r1) = ctx->r19;
    // 0x002853D0: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x002853D4: addiu       $a0, $a0, 0x6758
    ctx->r4 = ADD32(ctx->r4, 0X6758);
    // 0x002853D8: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x002853DC: jal         0x0029B820
    // 0x002853E0: addu        $a2, $a1, $zero
    ctx->r6 = ADD32(ctx->r5, 0);
    osSendMesg_recomp(rdram, ctx);
        goto after_7;
    // 0x002853E0: addu        $a2, $a1, $zero
    ctx->r6 = ADD32(ctx->r5, 0);
    after_7:
L_002853E4:
    // 0x002853E4: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
L_002853E8:
    // 0x002853E8: slti        $v0, $s2, 0x4
    ctx->r2 = SIGNED(ctx->r18) < 0X4 ? 1 : 0;
    // 0x002853EC: bne         $v0, $zero, L_0028532C
    if (ctx->r2 != 0) {
        // 0x002853F0: addiu       $s1, $s1, 0x224
        ctx->r17 = ADD32(ctx->r17, 0X224);
            goto L_0028532C;
    }
    // 0x002853F0: addiu       $s1, $s1, 0x224
    ctx->r17 = ADD32(ctx->r17, 0X224);
    // 0x002853F4: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x002853F8: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x002853FC: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x00285400: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00285404: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00285408: jr          $ra
    // 0x0028540C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x0028540C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_0029AACC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0029AACC: lwc1        $f14, 0x7B0C($at)
    ctx->f14.u32l = MEM_W(ctx->r1, 0X7B0C);
;}
RECOMP_FUNC void func_004627D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_004299B0:
    // 0x004627D8: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x004627DC: sw          $s1, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r17;
    // 0x004627E0: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x004627E4: sw          $ra, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r31;
    // 0x004627E8: sw          $s0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r16;
    // 0x004627EC: lbu         $v0, 0x65($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X65);
    // 0x004627F0: beq         $v0, $zero, L_0046280C
    if (ctx->r2 == 0) {
        // 0x004627F4: addiu       $a2, $zero, 0x1
        ctx->r6 = ADD32(0, 0X1);
            goto L_0046280C;
    }
    // 0x004627F4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x004627F8: jal         0x00429DE4
    // 0x004627FC: sb          $zero, 0x65($s1)
    MEM_B(0X65, ctx->r17) = 0;
    entry_00429DE4(rdram, ctx);
        goto after_0;
    // 0x004627FC: sb          $zero, 0x65($s1)
    MEM_B(0X65, ctx->r17) = 0;
    after_0:
    // 0x00462800: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x00462804: bne         $v1, $zero, L_004629B0
    if (ctx->r3 != 0) {
        // 0x00462808: addiu       $a2, $zero, 0x1
        ctx->r6 = ADD32(0, 0X1);
            goto L_004629B0;
    }
    // 0x00462808: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
L_0046280C:
    // 0x0046280C: lw          $a0, 0x4($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X4);
    // 0x00462810: lw          $a1, 0x8($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X8);
    // 0x00462814: jal         0x00299680
    // 0x00462818: addiu       $a3, $sp, 0x10
    ctx->r7 = ADD32(ctx->r29, 0X10);
    func_00299680(rdram, ctx);
        goto after_1;
    // 0x00462818: addiu       $a3, $sp, 0x10
    ctx->r7 = ADD32(ctx->r29, 0X10);
    after_1:
    // 0x0046281C: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x00462820: bne         $v1, $zero, L_004629B0
    if (ctx->r3 != 0) {
        // 0x00462824: addiu       $a3, $sp, 0x10
        ctx->r7 = ADD32(ctx->r29, 0X10);
            goto L_004629B0;
    }
    // 0x00462824: addiu       $a3, $sp, 0x10
    ctx->r7 = ADD32(ctx->r29, 0X10);
    // 0x00462828: addiu       $a2, $sp, 0x50
    ctx->r6 = ADD32(ctx->r29, 0X50);
    // 0x0046282C: addiu       $a1, $sp, 0x52
    ctx->r5 = ADD32(ctx->r29, 0X52);
    // 0x00462830: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x00462834: sh          $zero, 0x52($sp)
    MEM_H(0X52, ctx->r29) = 0;
    // 0x00462838: sh          $zero, 0x50($sp)
    MEM_H(0X50, ctx->r29) = 0;
    // 0x0046283C: addu        $v0, $a3, $a0
    ctx->r2 = ADD32(ctx->r7, ctx->r4);
L_00462840:
    // 0x00462840: lhu         $v1, 0x0($v0)
    ctx->r3 = MEM_HU(ctx->r2, 0X0);
    // 0x00462844: lhu         $v0, 0x0($a2)
    ctx->r2 = MEM_HU(ctx->r6, 0X0);
    // 0x00462848: addiu       $a0, $a0, 0x2
    ctx->r4 = ADD32(ctx->r4, 0X2);
    // 0x0046284C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x00462850: sh          $v0, 0x0($a2)
    MEM_H(0X0, ctx->r6) = ctx->r2;
    // 0x00462854: lhu         $v0, 0x0($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X0);
    // 0x00462858: nor         $v1, $zero, $v1
    ctx->r3 = ~(0 | ctx->r3);
    // 0x0046285C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x00462860: sh          $v0, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r2;
    // 0x00462864: sltiu       $v0, $a0, 0x1C
    ctx->r2 = ctx->r4 < 0X1C ? 1 : 0;
    // 0x00462868: bne         $v0, $zero, L_00462840
    if (ctx->r2 != 0) {
        // 0x0046286C: addu        $v0, $a3, $a0
        ctx->r2 = ADD32(ctx->r7, ctx->r4);
            goto L_00462840;
    }
    // 0x0046286C: addu        $v0, $a3, $a0
    ctx->r2 = ADD32(ctx->r7, ctx->r4);
    // 0x00462870: lhu         $v1, 0x2C($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X2C);
    // 0x00462874: lhu         $v0, 0x50($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X50);
    // 0x00462878: bne         $v1, $v0, L_00462890
    if (ctx->r3 != ctx->r2) {
        // 0x0046287C: addiu       $s0, $sp, 0x10
        ctx->r16 = ADD32(ctx->r29, 0X10);
            goto L_00462890;
    }
    // 0x0046287C: addiu       $s0, $sp, 0x10
    ctx->r16 = ADD32(ctx->r29, 0X10);
    // 0x00462880: lhu         $v1, 0x2E($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X2E);
    // 0x00462884: lhu         $v0, 0x52($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X52);
    // 0x00462888: beq         $v1, $v0, L_004628D8
    if (ctx->r3 == ctx->r2) {
        // 0x0046288C: nop
    
            goto L_004628D8;
    }
    // 0x0046288C: nop

L_00462890:
    // 0x00462890: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x00462894: jal         0x00429668
    // 0x00462898: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    entry_00429668(rdram, ctx);
        goto after_2;
    // 0x00462898: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_2:
    // 0x0046289C: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x004628A0: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x004628A4: bne         $v1, $v0, L_004628D0
    if (ctx->r3 != ctx->r2) {
        // 0x004628A8: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_004628D0;
    }
    // 0x004628A8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x004628AC: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x004628B0: addiu       $s0, $sp, 0x30
    ctx->r16 = ADD32(ctx->r29, 0X30);
    // 0x004628B4: jal         0x00429380
    // 0x004628B8: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    entry_00429380(rdram, ctx);
        goto after_3;
    // 0x004628B8: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    after_3:
    // 0x004628BC: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x004628C0: beq         $v1, $zero, L_004628D8
    if (ctx->r3 == 0) {
        // 0x004628C4: nop
    
            goto L_004628D8;
    }
    // 0x004628C4: nop

    // 0x004628C8: j           L_004299B0
    // 0x004628CC: nop

    entry_004299B0(rdram, ctx);
    return;
    // 0x004628CC: nop

L_004628D0:
    // 0x004628D0: bne         $v1, $zero, L_004629B0
    if (ctx->r3 != 0) {
        // 0x004628D4: addu        $v0, $v1, $zero
        ctx->r2 = ADD32(ctx->r3, 0);
            goto L_004629B0;
    }
    // 0x004628D4: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
L_004628D8:
    // 0x004628D8: lhu         $v0, 0x18($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X18);
    // 0x004628DC: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x004628E0: bne         $v0, $zero, L_00462920
    if (ctx->r2 != 0) {
        // 0x004628E4: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_00462920;
    }
    // 0x004628E4: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x004628E8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x004628EC: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x004628F0: addiu       $s0, $sp, 0x30
    ctx->r16 = ADD32(ctx->r29, 0X30);
    // 0x004628F4: jal         0x00429380
    // 0x004628F8: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    entry_00429380(rdram, ctx);
        goto after_4;
    // 0x004628F8: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    after_4:
    // 0x004628FC: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x00462900: bne         $v1, $zero, L_004629B0
    if (ctx->r3 != 0) {
        // 0x00462904: nop
    
            goto L_004629B0;
    }
    // 0x00462904: nop

    // 0x00462908: lhu         $v0, 0x48($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X48);
    // 0x0046290C: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x00462910: bne         $v0, $zero, L_00462920
    if (ctx->r2 != 0) {
        // 0x00462914: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_00462920;
    }
    // 0x00462914: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x00462918: j           L_004299B0
    // 0x0046291C: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
    entry_004299B0(rdram, ctx);
    return;
    // 0x0046291C: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
L_00462920:
    // 0x00462920: addu        $v1, $s1, $a0
    ctx->r3 = ADD32(ctx->r17, ctx->r4);
L_00462924:
    // 0x00462924: addu        $v0, $s0, $a0
    ctx->r2 = ADD32(ctx->r16, ctx->r4);
    // 0x00462928: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x0046292C: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x00462930: sb          $v0, 0xC($v1)
    MEM_B(0XC, ctx->r3) = ctx->r2;
    // 0x00462934: slti        $v0, $a0, 0x20
    ctx->r2 = SIGNED(ctx->r4) < 0X20 ? 1 : 0;
    // 0x00462938: bne         $v0, $zero, L_00462924
    if (ctx->r2 != 0) {
        // 0x0046293C: addu        $v1, $s1, $a0
        ctx->r3 = ADD32(ctx->r17, ctx->r4);
            goto L_00462924;
    }
    // 0x0046293C: addu        $v1, $s1, $a0
    ctx->r3 = ADD32(ctx->r17, ctx->r4);
    // 0x00462940: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
    // 0x00462944: lw          $a0, 0x4($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X4);
    // 0x00462948: lw          $a1, 0x8($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X8);
    // 0x0046294C: lbu         $v0, 0x1B($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X1B);
    // 0x00462950: addiu       $a3, $s1, 0x2C
    ctx->r7 = ADD32(ctx->r17, 0X2C);
    // 0x00462954: sw          $v0, 0x4C($s1)
    MEM_W(0X4C, ctx->r17) = ctx->r2;
    // 0x00462958: lbu         $v1, 0x1A($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X1A);
    // 0x0046295C: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x00462960: sw          $v0, 0x50($s1)
    MEM_W(0X50, ctx->r17) = ctx->r2;
    // 0x00462964: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x00462968: sw          $v0, 0x54($s1)
    MEM_W(0X54, ctx->r17) = ctx->r2;
    // 0x0046296C: sb          $v1, 0x64($s1)
    MEM_B(0X64, ctx->r17) = ctx->r3;
    // 0x00462970: andi        $v1, $v1, 0xFF
    ctx->r3 = ctx->r3 & 0XFF;
    // 0x00462974: sll         $v1, $v1, 1
    ctx->r3 = S32(ctx->r3 << 1);
    // 0x00462978: lbu         $v0, 0x64($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X64);
    // 0x0046297C: addiu       $v1, $v1, 0x3
    ctx->r3 = ADD32(ctx->r3, 0X3);
    // 0x00462980: sw          $v1, 0x60($s1)
    MEM_W(0X60, ctx->r17) = ctx->r3;
    // 0x00462984: lbu         $v1, 0x64($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X64);
    // 0x00462988: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x0046298C: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x00462990: sll         $v1, $v1, 3
    ctx->r3 = S32(ctx->r3 << 3);
    // 0x00462994: sw          $v0, 0x58($s1)
    MEM_W(0X58, ctx->r17) = ctx->r2;
    // 0x00462998: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x0046299C: jal         0x00299680
    // 0x004629A0: sw          $v0, 0x5C($s1)
    MEM_W(0X5C, ctx->r17) = ctx->r2;
    func_00299680(rdram, ctx);
        goto after_5;
    // 0x004629A0: sw          $v0, 0x5C($s1)
    MEM_W(0X5C, ctx->r17) = ctx->r2;
    after_5:
    // 0x004629A4: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x004629A8: beql        $v1, $zero, L_004629B0
    if (ctx->r3 == 0) {
        // 0x004629AC: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_004629B0;
    }
    goto skip_0;
    // 0x004629AC: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    skip_0:
L_004629B0:
    // 0x004629B0: lw          $ra, 0x60($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X60);
    // 0x004629B4: lw          $s1, 0x5C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X5C);
    // 0x004629B8: lw          $s0, 0x58($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X58);
    // 0x004629BC: jr          $ra
    // 0x004629C0: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    return;
    // 0x004629C0: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
;}
RECOMP_FUNC void func_0045DE14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0045DE14: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0045DE18: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x0045DE1C: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x0045DE20: addiu       $a0, $a0, 0x7078
    ctx->r4 = ADD32(ctx->r4, 0X7078);
    // 0x0045DE24: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x0045DE28: jal         0x00224C08
    // 0x0045DE2C: nop

    func_00224C08(rdram, ctx);
        goto after_0;
    // 0x0045DE2C: nop

    after_0:
    // 0x0045DE30: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x0045DE34: jr          $ra
    // 0x0045DE38: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0045DE38: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0045EF84(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_0042606C:
    // 0x0045EF84: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x0045EF88: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x0045EF8C: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x0045EF90: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x0045EF94: addu        $s2, $a1, $zero
    ctx->r18 = ADD32(ctx->r5, 0);
    // 0x0045EF98: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x0045EF9C: sll         $s0, $s1, 2
    ctx->r16 = S32(ctx->r17 << 2);
    // 0x0045EFA0: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0045EFA4: addu        $at, $at, $s0
    ctx->r1 = ADD32(ctx->r1, ctx->r16);
    // 0x0045EFA8: lw          $v1, 0xC60($at)
    ctx->r3 = MEM_W(ctx->r1, 0XC60);
    // 0x0045EFAC: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x0045EFB0: beq         $v1, $v0, L_0045EFC0
    if (ctx->r3 == ctx->r2) {
        // 0x0045EFB4: sw          $ra, 0x24($sp)
        MEM_W(0X24, ctx->r29) = ctx->r31;
            goto L_0045EFC0;
    }
    // 0x0045EFB4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x0045EFB8: j           L_0042606C
    // 0x0045EFBC: addiu       $v0, $zero, -0x2
    ctx->r2 = ADD32(0, -0X2);
    entry_0042606C(rdram, ctx);
    return;
    // 0x0045EFBC: addiu       $v0, $zero, -0x2
    ctx->r2 = ADD32(0, -0X2);
L_0045EFC0:
    // 0x0045EFC0: jal         0x00285878
    // 0x0045EFC4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_00285878(rdram, ctx);
        goto after_0;
    // 0x0045EFC4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_0:
    // 0x0045EFC8: jal         0x002847E0
    // 0x0045EFCC: nop

    func_002847E0(rdram, ctx);
        goto after_1;
    // 0x0045EFCC: nop

    after_1:
    // 0x0045EFD0: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0045EFD4: addu        $at, $at, $s0
    ctx->r1 = ADD32(ctx->r1, ctx->r16);
    // 0x0045EFD8: lw          $s0, 0xC70($at)
    ctx->r16 = MEM_W(ctx->r1, 0XC70);
    // 0x0045EFDC: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x0045EFE0: lui         $at, 0x800F
    ctx->r1 = S32(0X800F << 16);
    // 0x0045EFE4: sb          $v0, 0x6750($at)
    MEM_B(0X6750, ctx->r1) = ctx->r2;
    // 0x0045EFE8: bne         $s0, $zero, L_0045F060
    if (ctx->r16 != 0) {
        // 0x0045EFEC: sll         $a0, $s1, 1
        ctx->r4 = S32(ctx->r17 << 1);
            goto L_0045F060;
    }
    // 0x0045EFEC: sll         $a0, $s1, 1
    ctx->r4 = S32(ctx->r17 << 1);
    // 0x0045EFF0: addu        $a0, $a0, $s1
    ctx->r4 = ADD32(ctx->r4, ctx->r17);
    // 0x0045EFF4: sll         $a0, $a0, 2
    ctx->r4 = S32(ctx->r4 << 2);
    // 0x0045EFF8: addu        $a0, $a0, $s1
    ctx->r4 = ADD32(ctx->r4, ctx->r17);
    // 0x0045EFFC: sll         $a0, $a0, 3
    ctx->r4 = S32(ctx->r4 << 3);
    // 0x0045F000: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x0045F004: addiu       $v0, $v0, 0xC80
    ctx->r2 = ADD32(ctx->r2, 0XC80);
    // 0x0045F008: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x0045F00C: sll         $a3, $s1, 7
    ctx->r7 = S32(ctx->r17 << 7);
    // 0x0045F010: addu        $a3, $a3, $s1
    ctx->r7 = ADD32(ctx->r7, ctx->r17);
    // 0x0045F014: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x0045F018: lw          $v0, 0x2224($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2224);
    // 0x0045F01C: sll         $a3, $a3, 2
    ctx->r7 = S32(ctx->r7 << 2);
    // 0x0045F020: addu        $a3, $a3, $v0
    ctx->r7 = ADD32(ctx->r7, ctx->r2);
    // 0x0045F024: sll         $v0, $s2, 5
    ctx->r2 = S32(ctx->r18 << 5);
    // 0x0045F028: addu        $v1, $a3, $v0
    ctx->r3 = ADD32(ctx->r7, ctx->r2);
    // 0x0045F02C: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x0045F030: addu        $a3, $a3, $v0
    ctx->r7 = ADD32(ctx->r7, ctx->r2);
    // 0x0045F034: lhu         $a1, 0xC($v1)
    ctx->r5 = MEM_HU(ctx->r3, 0XC);
    // 0x0045F038: addiu       $v0, $a3, 0xA
    ctx->r2 = ADD32(ctx->r7, 0XA);
    // 0x0045F03C: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x0045F040: lw          $a2, 0x8($v1)
    ctx->r6 = MEM_W(ctx->r3, 0X8);
    // 0x0045F044: jal         0x004276A0
    // 0x0045F048: addiu       $a3, $a3, 0xE
    ctx->r7 = ADD32(ctx->r7, 0XE);
    func_004276A0(rdram, ctx);
        goto after_2;
    // 0x0045F048: addiu       $a3, $a3, 0xE
    ctx->r7 = ADD32(ctx->r7, 0XE);
    after_2:
    // 0x0045F04C: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x0045F050: bnel        $s0, $zero, L_0045F058
    if (ctx->r16 != 0) {
        // 0x0045F054: addiu       $s0, $zero, -0x1
        ctx->r16 = ADD32(0, -0X1);
            goto L_0045F058;
    }
    goto skip_0;
    // 0x0045F054: addiu       $s0, $zero, -0x1
    ctx->r16 = ADD32(0, -0X1);
    skip_0:
L_0045F058:
    // 0x0045F058: jal         0x00425808
    // 0x0045F05C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    entry_00425808(rdram, ctx);
        goto after_3;
    // 0x0045F05C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_3:
L_0045F060:
    // 0x0045F060: jal         0x002858A4
    // 0x0045F064: nop

    func_002858A4(rdram, ctx);
        goto after_4;
    // 0x0045F064: nop

    after_4:
    // 0x0045F068: addu        $v0, $s0, $zero
    ctx->r2 = ADD32(ctx->r16, 0);
    // 0x0045F06C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x0045F070: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x0045F074: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x0045F078: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x0045F07C: jr          $ra
    // 0x0045F080: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x0045F080: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_0028F1F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0028F1F0: addiu       $sp, $sp, -0x140
    ctx->r29 = ADD32(ctx->r29, -0X140);
    // 0x0028F1F4: sw          $s5, 0x12C($sp)
    MEM_W(0X12C, ctx->r29) = ctx->r21;
    // 0x0028F1F8: addu        $s5, $a1, $zero
    ctx->r21 = ADD32(ctx->r5, 0);
    // 0x0028F1FC: sw          $s7, 0x134($sp)
    MEM_W(0X134, ctx->r29) = ctx->r23;
    // 0x0028F200: addu        $s7, $a2, $zero
    ctx->r23 = ADD32(ctx->r6, 0);
    // 0x0028F204: sw          $s0, 0x118($sp)
    MEM_W(0X118, ctx->r29) = ctx->r16;
    // 0x0028F208: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x0028F20C: sw          $s6, 0x130($sp)
    MEM_W(0X130, ctx->r29) = ctx->r22;
    // 0x0028F210: addiu       $s6, $zero, 0x1
    ctx->r22 = ADD32(0, 0X1);
    // 0x0028F214: sw          $s3, 0x124($sp)
    MEM_W(0X124, ctx->r29) = ctx->r19;
    // 0x0028F218: addiu       $s3, $sp, 0x20
    ctx->r19 = ADD32(ctx->r29, 0X20);
    // 0x0028F21C: sw          $s1, 0x11C($sp)
    MEM_W(0X11C, ctx->r29) = ctx->r17;
    // 0x0028F220: addu        $s1, $s3, $zero
    ctx->r17 = ADD32(ctx->r19, 0);
    // 0x0028F224: sw          $ra, 0x138($sp)
    MEM_W(0X138, ctx->r29) = ctx->r31;
    // 0x0028F228: sw          $s4, 0x128($sp)
    MEM_W(0X128, ctx->r29) = ctx->r20;
    // 0x0028F22C: sw          $s2, 0x120($sp)
    MEM_W(0X120, ctx->r29) = ctx->r18;
    // 0x0028F230: lw          $s2, 0x0($a0)
    ctx->r18 = MEM_W(ctx->r4, 0X0);
    // 0x0028F234: addu        $v0, $s6, $zero
    ctx->r2 = ADD32(ctx->r22, 0);
    // 0x0028F238: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x0028F23C: sw          $zero, 0x30($sp)
    MEM_W(0X30, ctx->r29) = 0;
    // 0x0028F240: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
    // 0x0028F244: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    // 0x0028F248: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
L_0028F24C:
    // 0x0028F24C: addu        $v0, $s3, $s0
    ctx->r2 = ADD32(ctx->r19, ctx->r16);
    // 0x0028F250: sb          $zero, 0xA8($v0)
    MEM_B(0XA8, ctx->r2) = 0;
    // 0x0028F254: sw          $zero, 0x58($s1)
    MEM_W(0X58, ctx->r17) = 0;
    // 0x0028F258: sb          $zero, 0x98($v0)
    MEM_B(0X98, ctx->r2) = 0;
    // 0x0028F25C: lw          $v0, 0x20($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X20);
    // 0x0028F260: sll         $v1, $s0, 2
    ctx->r3 = S32(ctx->r16 << 2);
    // 0x0028F264: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x0028F268: lw          $a2, 0x0($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X0);
    // 0x0028F26C: beq         $a2, $zero, L_0028F29C
    if (ctx->r6 == 0) {
        // 0x0028F270: addiu       $a0, $sp, 0x20
        ctx->r4 = ADD32(ctx->r29, 0X20);
            goto L_0028F29C;
    }
    // 0x0028F270: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    // 0x0028F274: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x0028F278: lw          $v0, 0x24($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X24);
    // 0x0028F27C: sllv        $v1, $s6, $s0
    ctx->r3 = S32(ctx->r22 << (ctx->r16 & 31));
    // 0x0028F280: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x0028F284: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x0028F288: addu        $v0, $s2, $a2
    ctx->r2 = ADD32(ctx->r18, ctx->r6);
    // 0x0028F28C: jal         0x0028F98C
    // 0x0028F290: sw          $v0, 0x18($s1)
    MEM_W(0X18, ctx->r17) = ctx->r2;
    func_0028F98C(rdram, ctx);
        goto after_0;
    // 0x0028F290: sw          $v0, 0x18($s1)
    MEM_W(0X18, ctx->r17) = ctx->r2;
    after_0:
    // 0x0028F294: j           L_0028F2A0
    // 0x0028F298: sw          $v0, 0xB8($s1)
    MEM_W(0XB8, ctx->r17) = ctx->r2;
        goto L_0028F2A0;
    // 0x0028F298: sw          $v0, 0xB8($s1)
    MEM_W(0XB8, ctx->r17) = ctx->r2;
L_0028F29C:
    // 0x0028F29C: sw          $zero, 0x18($s1)
    MEM_W(0X18, ctx->r17) = 0;
L_0028F2A0:
    // 0x0028F2A0: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x0028F2A4: sltiu       $v0, $s0, 0x10
    ctx->r2 = ctx->r16 < 0X10 ? 1 : 0;
    // 0x0028F2A8: bne         $v0, $zero, L_0028F24C
    if (ctx->r2 != 0) {
        // 0x0028F2AC: addiu       $s1, $s1, 0x4
        ctx->r17 = ADD32(ctx->r17, 0X4);
            goto L_0028F24C;
    }
    // 0x0028F2AC: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    // 0x0028F2B0: lw          $v0, 0x20($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X20);
    // 0x0028F2B4: lw          $v0, 0x40($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X40);
    // 0x0028F2B8: mtc1        $v0, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r2;
    // 0x0028F2BC: cvt.d.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.d = CVT_D_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x0028F2C0: bgez        $v0, L_0028F2D4
    if (SIGNED(ctx->r2) >= 0) {
        // 0x0028F2C4: addiu       $s3, $sp, 0x20
        ctx->r19 = ADD32(ctx->r29, 0X20);
            goto L_0028F2D4;
    }
    // 0x0028F2C4: addiu       $s3, $sp, 0x20
    ctx->r19 = ADD32(ctx->r29, 0X20);
    // 0x0028F2C8: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0028F2CC: ldc1        $f0, -0x5DD0($at)
    CHECK_FR(ctx, 0);
    ctx->f0.u64 = LD(ctx->r1, -0X5DD0);
    // 0x0028F2D0: add.d       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.d); NAN_CHECK(ctx->f0.d); 
    ctx->f1.d = ctx->f1.d + ctx->f0.d;
L_0028F2D4:
    // 0x0028F2D4: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0028F2D8: lwc1        $f0, -0x5DC8($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X5DC8);
    // 0x0028F2DC: cvt.s.d     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.d); 
    ctx->f1.fl = CVT_S_D(ctx->f1.d);
    // 0x0028F2E0: div.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = DIV_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0028F2E4: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
L_0028F2E8:
    // 0x0028F2E8: lw          $v0, 0x24($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X24);
    // 0x0028F2EC: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x0028F2F0: sw          $v0, 0x0($s5)
    MEM_W(0X0, ctx->r21) = ctx->r2;
    // 0x0028F2F4: lw          $v0, 0x2C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X2C);
    // 0x0028F2F8: addu        $a2, $s3, $zero
    ctx->r6 = ADD32(ctx->r19, 0);
    // 0x0028F2FC: sw          $v0, 0x4($s5)
    MEM_W(0X4, ctx->r21) = ctx->r2;
    // 0x0028F300: lw          $v0, 0x30($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X30);
    // 0x0028F304: addu        $a1, $s5, $zero
    ctx->r5 = ADD32(ctx->r21, 0);
    // 0x0028F308: sw          $v0, 0x8($s5)
    MEM_W(0X8, ctx->r21) = ctx->r2;
L_0028F30C:
    // 0x0028F30C: lw          $v0, 0x18($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X18);
    // 0x0028F310: sw          $v0, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->r2;
    // 0x0028F314: lw          $v0, 0x58($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X58);
    // 0x0028F318: sw          $v0, 0x4C($a1)
    MEM_W(0X4C, ctx->r5) = ctx->r2;
    // 0x0028F31C: addu        $v0, $s3, $a3
    ctx->r2 = ADD32(ctx->r19, ctx->r7);
    // 0x0028F320: lbu         $a0, 0x98($v0)
    ctx->r4 = MEM_BU(ctx->r2, 0X98);
    // 0x0028F324: addu        $v1, $s5, $a3
    ctx->r3 = ADD32(ctx->r21, ctx->r7);
    // 0x0028F328: sb          $a0, 0x8C($v1)
    MEM_B(0X8C, ctx->r3) = ctx->r4;
    // 0x0028F32C: lbu         $v0, 0xA8($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0XA8);
    // 0x0028F330: addiu       $a3, $a3, 0x1
    ctx->r7 = ADD32(ctx->r7, 0X1);
    // 0x0028F334: sb          $v0, 0x9C($v1)
    MEM_B(0X9C, ctx->r3) = ctx->r2;
    // 0x0028F338: lw          $v0, 0xB8($a2)
    ctx->r2 = MEM_W(ctx->r6, 0XB8);
    // 0x0028F33C: addiu       $a2, $a2, 0x4
    ctx->r6 = ADD32(ctx->r6, 0X4);
    // 0x0028F340: sw          $v0, 0xAC($a1)
    MEM_W(0XAC, ctx->r5) = ctx->r2;
    // 0x0028F344: slti        $v0, $a3, 0x10
    ctx->r2 = SIGNED(ctx->r7) < 0X10 ? 1 : 0;
    // 0x0028F348: bne         $v0, $zero, L_0028F30C
    if (ctx->r2 != 0) {
        // 0x0028F34C: addiu       $a1, $a1, 0x4
        ctx->r5 = ADD32(ctx->r5, 0X4);
            goto L_0028F30C;
    }
    // 0x0028F34C: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
    // 0x0028F350: addiu       $s1, $sp, 0x10
    ctx->r17 = ADD32(ctx->r29, 0X10);
    // 0x0028F354: addiu       $s0, $zero, -0x1
    ctx->r16 = ADD32(0, -0X1);
    // 0x0028F358: lw          $a2, 0x30($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X30);
    // 0x0028F35C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x0028F360: addiu       $s2, $sp, 0x20
    ctx->r18 = ADD32(ctx->r29, 0X20);
    // 0x0028F364: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
L_0028F368:
    // 0x0028F368: lw          $v0, 0x24($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X24);
    // 0x0028F36C: srlv        $v0, $v0, $a1
    ctx->r2 = S32(U32(ctx->r2) >> (ctx->r5 & 31));
    // 0x0028F370: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x0028F374: beql        $v0, $zero, L_0028F3B0
    if (ctx->r2 == 0) {
        // 0x0028F378: addiu       $a1, $a1, 0x1
        ctx->r5 = ADD32(ctx->r5, 0X1);
            goto L_0028F3B0;
    }
    goto skip_0;
    // 0x0028F378: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    skip_0:
    // 0x0028F37C: lw          $v0, 0x34($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X34);
    // 0x0028F380: beq         $v0, $zero, L_0028F394
    if (ctx->r2 == 0) {
        // 0x0028F384: nop
    
            goto L_0028F394;
    }
    // 0x0028F384: nop

    // 0x0028F388: lw          $v0, 0xB8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XB8);
    // 0x0028F38C: subu        $v0, $v0, $a2
    ctx->r2 = SUB32(ctx->r2, ctx->r6);
    // 0x0028F390: sw          $v0, 0xB8($a0)
    MEM_W(0XB8, ctx->r4) = ctx->r2;
L_0028F394:
    // 0x0028F394: lw          $v1, 0xB8($a0)
    ctx->r3 = MEM_W(ctx->r4, 0XB8);
    // 0x0028F398: sltu        $v0, $v1, $s0
    ctx->r2 = ctx->r3 < ctx->r16 ? 1 : 0;
    // 0x0028F39C: beql        $v0, $zero, L_0028F3B0
    if (ctx->r2 == 0) {
        // 0x0028F3A0: addiu       $a1, $a1, 0x1
        ctx->r5 = ADD32(ctx->r5, 0X1);
            goto L_0028F3B0;
    }
    goto skip_1;
    // 0x0028F3A0: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    skip_1:
    // 0x0028F3A4: addu        $s0, $v1, $zero
    ctx->r16 = ADD32(ctx->r3, 0);
    // 0x0028F3A8: addu        $s4, $a1, $zero
    ctx->r20 = ADD32(ctx->r5, 0);
    // 0x0028F3AC: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
L_0028F3B0:
    // 0x0028F3B0: sltiu       $v0, $a1, 0x10
    ctx->r2 = ctx->r5 < 0X10 ? 1 : 0;
    // 0x0028F3B4: bne         $v0, $zero, L_0028F368
    if (ctx->r2 != 0) {
        // 0x0028F3B8: addiu       $a0, $a0, 0x4
        ctx->r4 = ADD32(ctx->r4, 0X4);
            goto L_0028F368;
    }
    // 0x0028F3B8: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x0028F3BC: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    // 0x0028F3C0: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    // 0x0028F3C4: jal         0x0028EF90
    // 0x0028F3C8: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    func_0028EF90(rdram, ctx);
        goto after_1;
    // 0x0028F3C8: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    after_1:
    // 0x0028F3CC: sw          $s0, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->r16;
    // 0x0028F3D0: lw          $v0, 0x2C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X2C);
    // 0x0028F3D4: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x0028F3D8: addu        $v0, $v0, $s0
    ctx->r2 = ADD32(ctx->r2, ctx->r16);
    // 0x0028F3DC: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x0028F3E0: lh          $v1, 0x0($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X0);
    // 0x0028F3E4: addiu       $v0, $zero, 0x12
    ctx->r2 = ADD32(0, 0X12);
    // 0x0028F3E8: beq         $v1, $v0, L_0028F40C
    if (ctx->r3 == ctx->r2) {
        // 0x0028F3EC: addiu       $a0, $sp, 0x20
        ctx->r4 = ADD32(ctx->r29, 0X20);
            goto L_0028F40C;
    }
    // 0x0028F3EC: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    // 0x0028F3F0: jal         0x0028F98C
    // 0x0028F3F4: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    func_0028F98C(rdram, ctx);
        goto after_2;
    // 0x0028F3F4: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    after_2:
    // 0x0028F3F8: sll         $a0, $s4, 2
    ctx->r4 = S32(ctx->r20 << 2);
    // 0x0028F3FC: addu        $a0, $s2, $a0
    ctx->r4 = ADD32(ctx->r18, ctx->r4);
    // 0x0028F400: lw          $v1, 0xB8($a0)
    ctx->r3 = MEM_W(ctx->r4, 0XB8);
    // 0x0028F404: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x0028F408: sw          $v1, 0xB8($a0)
    MEM_W(0XB8, ctx->r4) = ctx->r3;
L_0028F40C:
    // 0x0028F40C: lh          $v1, 0x10($sp)
    ctx->r3 = MEM_H(ctx->r29, 0X10);
    // 0x0028F410: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0028F414: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    // 0x0028F418: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x0028F41C: beq         $v1, $v0, L_0028F434
    if (ctx->r3 == ctx->r2) {
        // 0x0028F420: nop
    
            goto L_0028F434;
    }
    // 0x0028F420: nop

    // 0x0028F424: lw          $v0, 0x2C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X2C);
    // 0x0028F428: sltu        $v0, $v0, $s7
    ctx->r2 = ctx->r2 < ctx->r23 ? 1 : 0;
    // 0x0028F42C: bne         $v0, $zero, L_0028F2E8
    if (ctx->r2 != 0) {
        // 0x0028F430: nop
    
            goto L_0028F2E8;
    }
    // 0x0028F430: nop

L_0028F434:
    // 0x0028F434: lw          $ra, 0x138($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X138);
    // 0x0028F438: lw          $s7, 0x134($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X134);
    // 0x0028F43C: lw          $s6, 0x130($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X130);
    // 0x0028F440: lw          $s5, 0x12C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X12C);
    // 0x0028F444: lw          $s4, 0x128($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X128);
    // 0x0028F448: lw          $s3, 0x124($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X124);
    // 0x0028F44C: lw          $s2, 0x120($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X120);
    // 0x0028F450: lw          $s1, 0x11C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X11C);
    // 0x0028F454: lw          $s0, 0x118($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X118);
    // 0x0028F458: jr          $ra
    // 0x0028F45C: addiu       $sp, $sp, 0x140
    ctx->r29 = ADD32(ctx->r29, 0X140);
    return;
    // 0x0028F45C: addiu       $sp, $sp, 0x140
    ctx->r29 = ADD32(ctx->r29, 0X140);
;}
RECOMP_FUNC void func_00275B08(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00275B08: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00275B0C: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x00275B10: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x00275B14: addiu       $a0, $a0, 0x2A00
    ctx->r4 = ADD32(ctx->r4, 0X2A00);
    // 0x00275B18: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x00275B1C: jal         0x002718FC
    // 0x00275B20: nop

    func_002718FC(rdram, ctx);
        goto after_0;
    // 0x00275B20: nop

    after_0:
    // 0x00275B24: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x00275B28: jr          $ra
    // 0x00275B2C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00275B2C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00256AE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00256AE0: addu        $v0, $a0, $a1
    ctx->r2 = ADD32(ctx->r4, ctx->r5);
    // 0x00256AE4: lbu         $v0, 0x52C($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X52C);
    // 0x00256AE8: jr          $ra
    // 0x00256AEC: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    return;
    // 0x00256AEC: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
;}
RECOMP_FUNC void func_0040333C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0040333C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00403340: lui         $a1, 0x4461
    ctx->r5 = S32(0X4461 << 16);
    // 0x00403344: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x00403348: addiu       $a0, $a0, -0x6790
    ctx->r4 = ADD32(ctx->r4, -0X6790);
    // 0x0040334C: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x00403350: jal         0x002535E4
    // 0x00403354: nop

    func_002535E4(rdram, ctx);
        goto after_0;
    // 0x00403354: nop

    after_0:
    // 0x00403358: jal         0x00412438
    // 0x0040335C: addiu       $a0, $zero, 0x136
    ctx->r4 = ADD32(0, 0X136);
    func_00412438(rdram, ctx);
        goto after_1;
    // 0x0040335C: addiu       $a0, $zero, 0x136
    ctx->r4 = ADD32(0, 0X136);
    after_1:
    // 0x00403360: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x00403364: jr          $ra
    // 0x00403368: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00403368: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_004189AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004189AC: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x004189B0: lwc1        $f1, -0x550C($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, -0X550C);
    // 0x004189B4: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x004189B8: lwc1        $f0, 0xF40($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0XF40);
    // 0x004189BC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x004189C0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x004189C4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x004189C8: c.eq.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl == ctx->f0.fl;
    // 0x004189CC: nop

    // 0x004189D0: bc1f        L_004189E8
    if (!c1cs) {
        // 0x004189D4: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_004189E8;
    }
    // 0x004189D4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x004189D8: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x004189DC: addiu       $v0, $v0, 0x66B0
    ctx->r2 = ADD32(ctx->r2, 0X66B0);
    // 0x004189E0: j           L_00418A20
    // 0x004189E4: sw          $v0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r2;
        goto L_00418A20;
    // 0x004189E4: sw          $v0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r2;
L_004189E8:
    // 0x004189E8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x004189EC: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x004189F0: addiu       $v0, $v0, 0x6698
    ctx->r2 = ADD32(ctx->r2, 0X6698);
    // 0x004189F4: jal         0x004160F0
    // 0x004189F8: sw          $v0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r2;
    func_004160F0(rdram, ctx);
        goto after_0;
    // 0x004189F8: sw          $v0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r2;
    after_0:
    // 0x004189FC: addiu       $v0, $v0, -0x3
    ctx->r2 = ADD32(ctx->r2, -0X3);
    // 0x00418A00: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x00418A04: addiu       $a1, $a1, 0xE9C
    ctx->r5 = ADD32(ctx->r5, 0XE9C);
    // 0x00418A08: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x00418A0C: lui         $a2, 0x800C
    ctx->r6 = S32(0X800C << 16);
    // 0x00418A10: lw          $a2, 0x1EA8($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X1EA8);
    // 0x00418A14: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x00418A18: jal         0x0029E3E0
    // 0x00418A1C: addiu       $a2, $a2, -0x5
    ctx->r6 = ADD32(ctx->r6, -0X5);
    func_0029E3E0(rdram, ctx);
        goto after_1;
    // 0x00418A1C: addiu       $a2, $a2, -0x5
    ctx->r6 = ADD32(ctx->r6, -0X5);
    after_1:
L_00418A20:
    // 0x00418A20: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x00418A24: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00418A28: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x00418A2C: jr          $ra
    // 0x00418A30: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00418A30: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_004078B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004078B8: addiu       $sp, $sp, -0xB0
    ctx->r29 = ADD32(ctx->r29, -0XB0);
    // 0x004078BC: sw          $s1, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r17;
    // 0x004078C0: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x004078C4: sw          $s2, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->r18;
    // 0x004078C8: addu        $s2, $a1, $zero
    ctx->r18 = ADD32(ctx->r5, 0);
    // 0x004078CC: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    // 0x004078D0: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x004078D4: sw          $s0, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r16;
    // 0x004078D8: lui         $s0, 0x800F
    ctx->r16 = S32(0X800F << 16);
    // 0x004078DC: addiu       $s0, $s0, 0x1F50
    ctx->r16 = ADD32(ctx->r16, 0X1F50);
    // 0x004078E0: sw          $ra, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->r31;
    // 0x004078E4: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x004078E8: addu        $v1, $a3, $zero
    ctx->r3 = ADD32(ctx->r7, 0);
    // 0x004078EC: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    // 0x004078F0: ori         $v0, $v0, 0x8000
    ctx->r2 = ctx->r2 | 0X8000;
    // 0x004078F4: jal         0x00246108
    // 0x004078F8: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    func_00246108(rdram, ctx);
        goto after_0;
    // 0x004078F8: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    after_0:
    // 0x004078FC: lui         $v1, 0xFFFF
    ctx->r3 = S32(0XFFFF << 16);
    // 0x00407900: ori         $v1, $v1, 0x7FFF
    ctx->r3 = ctx->r3 | 0X7FFF;
    // 0x00407904: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x00407908: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x0040790C: lui         $a2, 0x3E86
    ctx->r6 = S32(0X3E86 << 16);
    // 0x00407910: ori         $a2, $a2, 0xA93
    ctx->r6 = ctx->r6 | 0XA93;
    // 0x00407914: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x00407918: lw          $a3, 0x20($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X20);
    // 0x0040791C: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x00407920: jal         0x00245BAC
    // 0x00407924: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    func_00245BAC(rdram, ctx);
        goto after_1;
    // 0x00407924: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    after_1:
    // 0x00407928: lb          $v0, 0xC7($s2)
    ctx->r2 = MEM_B(ctx->r18, 0XC7);
    // 0x0040792C: beq         $v0, $zero, L_004079A4
    if (ctx->r2 == 0) {
        // 0x00407930: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_004079A4;
    }
    // 0x00407930: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x00407934: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x00407938: addiu       $a0, $a0, -0x5FC
    ctx->r4 = ADD32(ctx->r4, -0X5FC);
    // 0x0040793C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00407940: lwc1        $f0, 0x550($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X550);
    // 0x00407944: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
    // 0x00407948: swc1        $f0, 0x1FC($s1)
    MEM_W(0X1FC, ctx->r17) = ctx->f0.u32l;
    // 0x0040794C: lw          $v1, -0x2C($a0)
    ctx->r3 = MEM_W(ctx->r4, -0X2C);
    // 0x00407950: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x00407954: beql        $v1, $v0, L_0040797C
    if (ctx->r3 == ctx->r2) {
        // 0x00407958: sw          $v0, -0x28($a0)
        MEM_W(-0X28, ctx->r4) = ctx->r2;
            goto L_0040797C;
    }
    goto skip_0;
    // 0x00407958: sw          $v0, -0x28($a0)
    MEM_W(-0X28, ctx->r4) = ctx->r2;
    skip_0:
    // 0x0040795C: lwc1        $f1, 0x3C($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X3C);
    // 0x00407960: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00407964: lwc1        $f0, 0x554($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X554);
    // 0x00407968: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x0040796C: nop

    // 0x00407970: bc1fl       L_0040798C
    if (!c1cs) {
        // 0x00407974: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_0040798C;
    }
    goto skip_1;
    // 0x00407974: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_1:
    // 0x00407978: sw          $v0, -0x28($a0)
    MEM_W(-0X28, ctx->r4) = ctx->r2;
L_0040797C:
    // 0x0040797C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x00407980: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x00407984: j           L_0040799C
    // 0x00407988: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
        goto L_0040799C;
    // 0x00407988: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
L_0040798C:
    // 0x0040798C: bne         $v1, $v0, L_004079A4
    if (ctx->r3 != ctx->r2) {
        // 0x00407990: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_004079A4;
    }
    // 0x00407990: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x00407994: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x00407998: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
L_0040799C:
    // 0x0040799C: jal         0x00243414
    // 0x004079A0: nop

    func_00243414(rdram, ctx);
        goto after_2;
    // 0x004079A0: nop

    after_2:
L_004079A4:
    // 0x004079A4: lw          $ra, 0xAC($sp)
    ctx->r31 = MEM_W(ctx->r29, 0XAC);
    // 0x004079A8: lw          $s2, 0xA8($sp)
    ctx->r18 = MEM_W(ctx->r29, 0XA8);
    // 0x004079AC: lw          $s1, 0xA4($sp)
    ctx->r17 = MEM_W(ctx->r29, 0XA4);
    // 0x004079B0: lw          $s0, 0xA0($sp)
    ctx->r16 = MEM_W(ctx->r29, 0XA0);
    // 0x004079B4: jr          $ra
    // 0x004079B8: addiu       $sp, $sp, 0xB0
    ctx->r29 = ADD32(ctx->r29, 0XB0);
    return;
    // 0x004079B8: addiu       $sp, $sp, 0xB0
    ctx->r29 = ADD32(ctx->r29, 0XB0);
;}
RECOMP_FUNC void func_00441B20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00441B20: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00441B24: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00441B28: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x00441B2C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x00441B30: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x00441B34: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00441B38: sw          $s1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r17;
    // 0x00441B3C: lw          $v0, 0x14($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X14);
    // 0x00441B40: addiu       $v0, $v0, 0x14
    ctx->r2 = ADD32(ctx->r2, 0X14);
    // 0x00441B44: sw          $v0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r2;
    // 0x00441B48: lw          $v0, 0x14($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X14);
    // 0x00441B4C: lw          $v1, 0x54($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X54);
    // 0x00441B50: addiu       $a1, $zero, 0x5334
    ctx->r5 = ADD32(0, 0X5334);
    // 0x00441B54: sw          $zero, 0x8($a0)
    MEM_W(0X8, ctx->r4) = 0;
    // 0x00441B58: sw          $zero, 0x10($a0)
    MEM_W(0X10, ctx->r4) = 0;
    // 0x00441B5C: sll         $v0, $v1, 4
    ctx->r2 = S32(ctx->r3 << 4);
    // 0x00441B60: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x00441B64: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x00441B68: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00441B6C: lui         $v0, 0x41
    ctx->r2 = S32(0X41 << 16);
    // 0x00441B70: addiu       $v0, $v0, -0x7620
    ctx->r2 = ADD32(ctx->r2, -0X7620);
    // 0x00441B74: swc1        $f0, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->f0.u32l;
    // 0x00441B78: sw          $v0, 0x234($s1)
    MEM_W(0X234, ctx->r17) = ctx->r2;
    // 0x00441B7C: lw          $s0, 0x0($a0)
    ctx->r16 = MEM_W(ctx->r4, 0X0);
    // 0x00441B80: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x00441B84: sw          $zero, 0x14($a0)
    MEM_W(0X14, ctx->r4) = 0;
    // 0x00441B88: jal         0x00219F74
    // 0x00441B8C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00219F74(rdram, ctx);
        goto after_0;
    // 0x00441B8C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x00441B90: lui         $s2, 0x8011
    ctx->r18 = S32(0X8011 << 16);
    // 0x00441B94: addiu       $s2, $s2, 0xF0
    ctx->r18 = ADD32(ctx->r18, 0XF0);
    // 0x00441B98: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x00441B9C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x00441BA0: lui         $a2, 0x800C
    ctx->r6 = S32(0X800C << 16);
    // 0x00441BA4: addiu       $a2, $a2, 0x560
    ctx->r6 = ADD32(ctx->r6, 0X560);
    // 0x00441BA8: addiu       $a3, $s0, 0x140
    ctx->r7 = ADD32(ctx->r16, 0X140);
    // 0x00441BAC: sb          $v0, 0xC6($a3)
    MEM_B(0XC6, ctx->r7) = ctx->r2;
    // 0x00441BB0: addiu       $v0, $zero, 0x5334
    ctx->r2 = ADD32(0, 0X5334);
    // 0x00441BB4: sh          $v0, 0xC4($a3)
    MEM_H(0XC4, ctx->r7) = ctx->r2;
    // 0x00441BB8: lw          $v0, 0x140($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X140);
    // 0x00441BBC: addiu       $v1, $zero, -0x2
    ctx->r3 = ADD32(0, -0X2);
    // 0x00441BC0: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x00441BC4: sw          $v0, 0x140($s0)
    MEM_W(0X140, ctx->r16) = ctx->r2;
    // 0x00441BC8: jal         0x0027AD24
    // 0x00441BCC: sb          $zero, 0xC7($a3)
    MEM_B(0XC7, ctx->r7) = 0;
    func_0027AD24(rdram, ctx);
        goto after_1;
    // 0x00441BCC: sb          $zero, 0xC7($a3)
    MEM_B(0XC7, ctx->r7) = 0;
    after_1:
    // 0x00441BD0: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x00441BD4: lui         $a2, 0x800C
    ctx->r6 = S32(0X800C << 16);
    // 0x00441BD8: addiu       $a2, $a2, 0x568
    ctx->r6 = ADD32(ctx->r6, 0X568);
    // 0x00441BDC: jal         0x0027AD54
    // 0x00441BE0: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_0027AD54(rdram, ctx);
        goto after_2;
    // 0x00441BE0: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_2:
    // 0x00441BE4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x00441BE8: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x00441BEC: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00441BF0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00441BF4: jr          $ra
    // 0x00441BF8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00441BF8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_0042D1C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0042D1C0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0042D1C4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0042D1C8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x0042D1CC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0042D1D0: lwc1        $f0, 0x60C0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X60C0);
    // 0x0042D1D4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0042D1D8: lwc1        $f1, 0x60C4($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X60C4);
    // 0x0042D1DC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0042D1E0: lwc1        $f2, 0x60C8($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X60C8);
    // 0x0042D1E4: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x0042D1E8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x0042D1EC: swc1        $f0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->f0.u32l;
    // 0x0042D1F0: swc1        $f1, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->f_odd[(1 - 1) * 2];
    // 0x0042D1F4: jal         0x0020F040
    // 0x0042D1F8: swc1        $f2, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f2.u32l;
    func_0020F040(rdram, ctx);
        goto after_0;
    // 0x0042D1F8: swc1        $f2, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f2.u32l;
    after_0:
    // 0x0042D1FC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0042D200: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    // 0x0042D204: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x0042D208: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0042D20C: jr          $ra
    // 0x0042D210: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0042D210: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00259AE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00259AE0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00259AE4: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00259AE8: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x00259AEC: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x00259AF0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00259AF4: lwc1        $f12, 0x110($s1)
    ctx->f12.u32l = MEM_W(ctx->r17, 0X110);
    // 0x00259AF8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00259AFC: lwc1        $f14, 0x7344($at)
    ctx->f14.u32l = MEM_W(ctx->r1, 0X7344);
    // 0x00259B00: lui         $a2, 0x3C8F
    ctx->r6 = S32(0X3C8F << 16);
    // 0x00259B04: ori         $a2, $a2, 0x5C29
    ctx->r6 = ctx->r6 | 0X5C29;
    // 0x00259B08: jal         0x00211774
    // 0x00259B0C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    func_00211774(rdram, ctx);
        goto after_0;
    // 0x00259B0C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    after_0:
    // 0x00259B10: swc1        $f0, 0x110($s1)
    MEM_W(0X110, ctx->r17) = ctx->f0.u32l;
    // 0x00259B14: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00259B18: lwc1        $f1, 0x6D28($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X6D28);
    // 0x00259B1C: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00259B20: lwc1        $f1, 0x10C($s1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r17, 0X10C);
    // 0x00259B24: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x00259B28: lb          $v1, 0x34($s1)
    ctx->r3 = MEM_B(ctx->r17, 0X34);
    // 0x00259B2C: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x00259B30: bne         $v1, $v0, L_00259B78
    if (ctx->r3 != ctx->r2) {
        // 0x00259B34: swc1        $f1, 0x10C($s1)
        MEM_W(0X10C, ctx->r17) = ctx->f_odd[(1 - 1) * 2];
            goto L_00259B78;
    }
    // 0x00259B34: swc1        $f1, 0x10C($s1)
    MEM_W(0X10C, ctx->r17) = ctx->f_odd[(1 - 1) * 2];
    // 0x00259B38: lh          $v1, 0xC4($s1)
    ctx->r3 = MEM_H(ctx->r17, 0XC4);
    // 0x00259B3C: addiu       $v0, $zero, 0x4E84
    ctx->r2 = ADD32(0, 0X4E84);
    // 0x00259B40: beq         $v1, $v0, L_00259B78
    if (ctx->r3 == ctx->r2) {
        // 0x00259B44: nop
    
            goto L_00259B78;
    }
    // 0x00259B44: nop

    // 0x00259B48: lwc1        $f1, 0xD8($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0XD8);
    // 0x00259B4C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00259B50: lwc1        $f0, 0x7348($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X7348);
    // 0x00259B54: c.le.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl <= ctx->f1.fl;
    // 0x00259B58: nop

    // 0x00259B5C: bc1fl       L_00259BB0
    if (!c1cs) {
        // 0x00259B60: sw          $zero, 0x128($s1)
        MEM_W(0X128, ctx->r17) = 0;
            goto L_00259BB0;
    }
    goto skip_0;
    // 0x00259B60: sw          $zero, 0x128($s1)
    MEM_W(0X128, ctx->r17) = 0;
    skip_0:
    // 0x00259B64: lw          $v0, 0x128($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X128);
    // 0x00259B68: beql        $v0, $zero, L_00259BA8
    if (ctx->r2 == 0) {
        // 0x00259B6C: sw          $zero, 0x12C($s1)
        MEM_W(0X12C, ctx->r17) = 0;
            goto L_00259BA8;
    }
    goto skip_1;
    // 0x00259B6C: sw          $zero, 0x12C($s1)
    MEM_W(0X12C, ctx->r17) = 0;
    skip_1:
    // 0x00259B70: j           L_00259BAC
    // 0x00259B74: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_00259BAC;
    // 0x00259B74: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_00259B78:
    // 0x00259B78: lw          $s0, 0x1A8($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X1A8);
    // 0x00259B7C: addiu       $a1, $zero, 0x15
    ctx->r5 = ADD32(0, 0X15);
    // 0x00259B80: jal         0x0025398C
    // 0x00259B84: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_0025398C(rdram, ctx);
        goto after_1;
    // 0x00259B84: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x00259B88: lh          $v0, 0x0($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X0);
    // 0x00259B8C: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x00259B90: addu        $v0, $v0, $s0
    ctx->r2 = ADD32(ctx->r2, ctx->r16);
    // 0x00259B94: lh          $v0, 0x934($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X934);
    // 0x00259B98: beq         $v0, $zero, L_00259BAC
    if (ctx->r2 == 0) {
        // 0x00259B9C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_00259BAC;
    }
    // 0x00259B9C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00259BA0: j           L_00259BB0
    // 0x00259BA4: sw          $zero, 0x128($s1)
    MEM_W(0X128, ctx->r17) = 0;
        goto L_00259BB0;
    // 0x00259BA4: sw          $zero, 0x128($s1)
    MEM_W(0X128, ctx->r17) = 0;
L_00259BA8:
    // 0x00259BA8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_00259BAC:
    // 0x00259BAC: sw          $v0, 0x128($s1)
    MEM_W(0X128, ctx->r17) = ctx->r2;
L_00259BB0:
    // 0x00259BB0: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x00259BB4: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00259BB8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00259BBC: jr          $ra
    // 0x00259BC0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00259BC0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_00412DA4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00412DA4: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x00412DA8: lw          $v0, 0x1BB0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1BB0);
    // 0x00412DAC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00412DB0: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x00412DB4: lw          $a0, 0x4($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X4);
    // 0x00412DB8: jal         0x002017D4
    // 0x00412DBC: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_002017D4(rdram, ctx);
        goto after_0;
    // 0x00412DBC: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_0:
    // 0x00412DC0: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x00412DC4: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x00412DC8: jr          $ra
    // 0x00412DCC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00412DCC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00460E98(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00460E98: lhu         $v0, 0x8($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X8);
    // 0x00460E9C: beql        $v0, $zero, L_00460EA4
    if (ctx->r2 == 0) {
        // 0x00460EA0: addiu       $sp, $sp, -0x38
        ctx->r29 = ADD32(ctx->r29, -0X38);
            goto L_00460EA4;
    }
    goto skip_0;
    // 0x00460EA0: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    skip_0:
L_00460EA4:
    // 0x00460EA4: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x00460EA8: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x00460EAC: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x00460EB0: addu        $s3, $a1, $zero
    ctx->r19 = ADD32(ctx->r5, 0);
    // 0x00460EB4: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x00460EB8: sw          $ra, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r31;
    // 0x00460EBC: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x00460EC0: jal         0x00427F78
    // 0x00460EC4: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    func_00427F78(rdram, ctx);
        goto after_0;
    // 0x00460EC4: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    after_0:
    // 0x00460EC8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x00460ECC: lui         $s1, 0x8013
    ctx->r17 = S32(0X8013 << 16);
    // 0x00460ED0: addiu       $s1, $s1, 0xE20
    ctx->r17 = ADD32(ctx->r17, 0XE20);
    // 0x00460ED4: jal         0x0029A080
    // 0x00460ED8: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_0029A080(rdram, ctx);
        goto after_1;
    // 0x00460ED8: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_1:
    // 0x00460EDC: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x00460EE0: addiu       $s0, $sp, 0x18
    ctx->r16 = ADD32(ctx->r29, 0X18);
    // 0x00460EE4: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x00460EE8: jal         0x0029B6F0
    // 0x00460EEC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osRecvMesg_recomp(rdram, ctx);
        goto after_2;
    // 0x00460EEC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_2:
    // 0x00460EF0: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x00460EF4: jal         0x0029A080
    // 0x00460EF8: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_0029A080(rdram, ctx);
        goto after_3;
    // 0x00460EF8: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_3:
    // 0x00460EFC: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x00460F00: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x00460F04: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x00460F08: jal         0x0029B6F0
    // 0x00460F0C: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    osRecvMesg_recomp(rdram, ctx);
        goto after_4;
    // 0x00460F0C: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    after_4:
    // 0x00460F10: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x00460F14: jal         0x00428004
    // 0x00460F18: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    func_00428004(rdram, ctx);
        goto after_5;
    // 0x00460F18: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    after_5:
    // 0x00460F1C: lbu         $v1, 0x12($sp)
    ctx->r3 = MEM_BU(ctx->r29, 0X12);
    // 0x00460F20: andi        $v0, $v1, 0x1
    ctx->r2 = ctx->r3 & 0X1;
    // 0x00460F24: beq         $v0, $zero, L_00460F34
    if (ctx->r2 == 0) {
        // 0x00460F28: andi        $v0, $v1, 0x2
        ctx->r2 = ctx->r3 & 0X2;
            goto L_00460F34;
    }
    // 0x00460F28: andi        $v0, $v1, 0x2
    ctx->r2 = ctx->r3 & 0X2;
    // 0x00460F2C: bne         $v0, $zero, L_00460F5C
    if (ctx->r2 != 0) {
        // 0x00460F30: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_00460F5C;
    }
    // 0x00460F30: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_00460F34:
    // 0x00460F34: lhu         $v0, 0x12($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X12);
    // 0x00460F38: addiu       $v1, $zero, 0x100
    ctx->r3 = ADD32(0, 0X100);
    // 0x00460F3C: andi        $v0, $v0, 0x1FF
    ctx->r2 = ctx->r2 & 0X1FF;
    // 0x00460F40: bne         $v0, $v1, L_00460F5C
    if (ctx->r2 != ctx->r3) {
        // 0x00460F44: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_00460F5C;
    }
    // 0x00460F44: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00460F48: lbu         $v1, 0x12($sp)
    ctx->r3 = MEM_BU(ctx->r29, 0X12);
    // 0x00460F4C: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x00460F50: and         $v1, $v1, $v0
    ctx->r3 = ctx->r3 & ctx->r2;
    // 0x00460F54: beql        $v1, $zero, L_00460F5C
    if (ctx->r3 == 0) {
        // 0x00460F58: addu        $v0, $s0, $zero
        ctx->r2 = ADD32(ctx->r16, 0);
            goto L_00460F5C;
    }
    goto skip_1;
    // 0x00460F58: addu        $v0, $s0, $zero
    ctx->r2 = ADD32(ctx->r16, 0);
    skip_1:
L_00460F5C:
    // 0x00460F5C: lw          $ra, 0x30($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X30);
    // 0x00460F60: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x00460F64: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x00460F68: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x00460F6C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x00460F70: jr          $ra
    // 0x00460F74: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x00460F74: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_00238958(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00238958: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x0023895C: lh          $v0, 0x4E($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X4E);
    // 0x00238960: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00238964: lwc1        $f1, 0x65CC($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X65CC);
    // 0x00238968: lh          $v1, 0x48($sp)
    ctx->r3 = MEM_H(ctx->r29, 0X48);
    // 0x0023896C: lh          $a2, 0x4A($sp)
    ctx->r6 = MEM_H(ctx->r29, 0X4A);
    // 0x00238970: sw          $a3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r7;
    // 0x00238974: lh          $a3, 0x4C($sp)
    ctx->r7 = MEM_H(ctx->r29, 0X4C);
    // 0x00238978: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x0023897C: addiu       $a0, $a0, -0x6750
    ctx->r4 = ADD32(ctx->r4, -0X6750);
    // 0x00238980: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x00238984: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x00238988: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x0023898C: mtc1        $v1, $f2
    ctx->f2.u32l = ctx->r3;
    // 0x00238990: cvt.s.w     $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    ctx->f2.fl = CVT_S_W(ctx->f2.u32l);
    // 0x00238994: mfc1        $a1, $f2
    ctx->r5 = (int32_t)ctx->f2.u32l;
    // 0x00238998: mtc1        $a2, $f2
    ctx->f2.u32l = ctx->r6;
    // 0x0023899C: cvt.s.w     $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    ctx->f2.fl = CVT_S_W(ctx->f2.u32l);
    // 0x002389A0: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x002389A4: mfc1        $a2, $f2
    ctx->r6 = (int32_t)ctx->f2.u32l;
    // 0x002389A8: mtc1        $a3, $f2
    ctx->f2.u32l = ctx->r7;
    // 0x002389AC: cvt.s.w     $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    ctx->f2.fl = CVT_S_W(ctx->f2.u32l);
    // 0x002389B0: mfc1        $a3, $f2
    ctx->r7 = (int32_t)ctx->f2.u32l;
    // 0x002389B4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x002389B8: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x002389BC: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    // 0x002389C0: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x002389C4: lw          $t1, 0x40($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X40);
    // 0x002389C8: lw          $t2, 0x44($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X44);
    // 0x002389CC: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x002389D0: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    // 0x002389D4: sw          $t2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r10;
    // 0x002389D8: jal         0x0028135C
    // 0x002389DC: nop

    func_0028135C(rdram, ctx);
        goto after_0;
    // 0x002389DC: nop

    after_0:
    // 0x002389E0: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x002389E4: jr          $ra
    // 0x002389E8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x002389E8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_00424F1C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00424F1C: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x00424F20: lw          $a0, 0x48($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X48);
    // 0x00424F24: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00424F28: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x00424F2C: jal         0x0026EFB8
    // 0x00424F30: nop

    func_0026EFB8(rdram, ctx);
        goto after_0;
    // 0x00424F30: nop

    after_0:
    // 0x00424F34: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x00424F38: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x00424F3C: sw          $v0, 0xA30($at)
    MEM_W(0XA30, ctx->r1) = ctx->r2;
    // 0x00424F40: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x00424F44: sw          $zero, 0xA34($at)
    MEM_W(0XA34, ctx->r1) = 0;
    // 0x00424F48: jr          $ra
    // 0x00424F4C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00424F4C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0025A868(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0025A868: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0025A86C: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x0025A870: lw          $v0, 0x14($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X14);
    // 0x0025A874: lhu         $a3, 0x8A($v0)
    ctx->r7 = MEM_HU(ctx->r2, 0X8A);
    // 0x0025A878: lui         $a2, 0x800B
    ctx->r6 = S32(0X800B << 16);
    // 0x0025A87C: addiu       $a2, $a2, 0x150
    ctx->r6 = ADD32(ctx->r6, 0X150);
    // 0x0025A880: jal         0x00245A98
    // 0x0025A884: nop

    func_00245A98(rdram, ctx);
        goto after_0;
    // 0x0025A884: nop

    after_0:
    // 0x0025A888: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x0025A88C: jr          $ra
    // 0x0025A890: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0025A890: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00298FD4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00298FD4: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x00298FD8: sw          $s1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r17;
    // 0x00298FDC: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x00298FE0: sw          $ra, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r31;
    // 0x00298FE4: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    // 0x00298FE8: lw          $v0, 0x8($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X8);
    // 0x00298FEC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x00298FF0: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00298FF4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x00298FF8: lw          $v0, 0x7A40($at)
    ctx->r2 = MEM_W(ctx->r1, 0X7A40);
    // 0x00298FFC: lui         $s0, 0x8013
    ctx->r16 = S32(0X8013 << 16);
    // 0x00299000: addiu       $s0, $s0, 0xE20
    ctx->r16 = ADD32(ctx->r16, 0XE20);
    // 0x00299004: beq         $v0, $zero, L_00299184
    if (ctx->r2 == 0) {
        // 0x00299008: addiu       $v0, $zero, 0x5
        ctx->r2 = ADD32(0, 0X5);
            goto L_00299184;
    }
    // 0x00299008: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x0029900C: jal         0x00299FE4
    // 0x00299010: nop

    func_00299FE4(rdram, ctx);
        goto after_0;
    // 0x00299010: nop

    after_0:
    // 0x00299014: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x00299018: lw          $a1, 0x8($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X8);
    // 0x0029901C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x00299020: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x00299024: sb          $v0, 0x1420($at)
    MEM_B(0X1420, ctx->r1) = ctx->r2;
    // 0x00299028: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x0029902C: addiu       $v0, $v0, 0x1430
    ctx->r2 = ADD32(ctx->r2, 0X1430);
    // 0x00299030: sll         $a1, $a1, 6
    ctx->r5 = S32(ctx->r5 << 6);
    // 0x00299034: jal         0x0029A080
    // 0x00299038: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    func_0029A080(rdram, ctx);
        goto after_1;
    // 0x00299038: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    after_1:
    // 0x0029903C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x00299040: lw          $a0, 0x4($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X4);
    // 0x00299044: jal         0x0029B6F0
    // 0x00299048: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osRecvMesg_recomp(rdram, ctx);
        goto after_2;
    // 0x00299048: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_2:
    // 0x0029904C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x00299050: jal         0x0029A080
    // 0x00299054: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_0029A080(rdram, ctx);
        goto after_3;
    // 0x00299054: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_3:
    // 0x00299058: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x0029905C: lw          $a0, 0x4($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X4);
    // 0x00299060: jal         0x0029B6F0
    // 0x00299064: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osRecvMesg_recomp(rdram, ctx);
        goto after_4;
    // 0x00299064: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_4:
    // 0x00299068: lw          $a0, 0x8($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X8);
    // 0x0029906C: beq         $a0, $zero, L_00299090
    if (ctx->r4 == 0) {
        // 0x00299070: addu        $a1, $s0, $zero
        ctx->r5 = ADD32(ctx->r16, 0);
            goto L_00299090;
    }
    // 0x00299070: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x00299074: blez        $a0, L_00299090
    if (SIGNED(ctx->r4) <= 0) {
        // 0x00299078: addu        $v1, $zero, $zero
        ctx->r3 = ADD32(0, 0);
            goto L_00299090;
    }
    // 0x00299078: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
L_0029907C:
    // 0x0029907C: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x00299080: slt         $v0, $v1, $a0
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x00299084: bne         $v0, $zero, L_0029907C
    if (ctx->r2 != 0) {
        // 0x00299088: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_0029907C;
    }
    // 0x00299088: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x0029908C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
L_00299090:
    // 0x00299090: andi        $v0, $a1, 0x3
    ctx->r2 = ctx->r5 & 0X3;
    // 0x00299094: beq         $v0, $zero, L_002990F4
    if (ctx->r2 == 0) {
        // 0x00299098: addiu       $v1, $sp, 0x10
        ctx->r3 = ADD32(ctx->r29, 0X10);
            goto L_002990F4;
    }
    // 0x00299098: addiu       $v1, $sp, 0x10
    ctx->r3 = ADD32(ctx->r29, 0X10);
    // 0x0029909C: addiu       $v0, $a1, 0x20
    ctx->r2 = ADD32(ctx->r5, 0X20);
L_002990A0:
    // 0x002990A0: lwl         $a3, 0x0($a1)
    ctx->r7 = do_lwl(rdram, ctx->r7, ctx->r5, 0X0);
    // 0x002990A4: lwr         $a3, 0x3($a1)
    ctx->r7 = do_lwr(rdram, ctx->r7, ctx->r5, 0X3);
    // 0x002990A8: lwl         $t0, 0x4($a1)
    ctx->r8 = do_lwl(rdram, ctx->r8, ctx->r5, 0X4);
    // 0x002990AC: lwr         $t0, 0x7($a1)
    ctx->r8 = do_lwr(rdram, ctx->r8, ctx->r5, 0X7);
    // 0x002990B0: lwl         $t1, 0x8($a1)
    ctx->r9 = do_lwl(rdram, ctx->r9, ctx->r5, 0X8);
    // 0x002990B4: lwr         $t1, 0xB($a1)
    ctx->r9 = do_lwr(rdram, ctx->r9, ctx->r5, 0XB);
    // 0x002990B8: lwl         $t2, 0xC($a1)
    ctx->r10 = do_lwl(rdram, ctx->r10, ctx->r5, 0XC);
    // 0x002990BC: lwr         $t2, 0xF($a1)
    ctx->r10 = do_lwr(rdram, ctx->r10, ctx->r5, 0XF);
    // 0x002990C0: swl         $a3, 0x0($v1)
    do_swl(rdram, 0X0, ctx->r3, ctx->r7);
    // 0x002990C4: swr         $a3, 0x3($v1)
    do_swr(rdram, 0X3, ctx->r3, ctx->r7);
    // 0x002990C8: swl         $t0, 0x4($v1)
    do_swl(rdram, 0X4, ctx->r3, ctx->r8);
    // 0x002990CC: swr         $t0, 0x7($v1)
    do_swr(rdram, 0X7, ctx->r3, ctx->r8);
    // 0x002990D0: swl         $t1, 0x8($v1)
    do_swl(rdram, 0X8, ctx->r3, ctx->r9);
    // 0x002990D4: swr         $t1, 0xB($v1)
    do_swr(rdram, 0XB, ctx->r3, ctx->r9);
    // 0x002990D8: swl         $t2, 0xC($v1)
    do_swl(rdram, 0XC, ctx->r3, ctx->r10);
    // 0x002990DC: swr         $t2, 0xF($v1)
    do_swr(rdram, 0XF, ctx->r3, ctx->r10);
    // 0x002990E0: addiu       $a1, $a1, 0x10
    ctx->r5 = ADD32(ctx->r5, 0X10);
    // 0x002990E4: bne         $a1, $v0, L_002990A0
    if (ctx->r5 != ctx->r2) {
        // 0x002990E8: addiu       $v1, $v1, 0x10
        ctx->r3 = ADD32(ctx->r3, 0X10);
            goto L_002990A0;
    }
    // 0x002990E8: addiu       $v1, $v1, 0x10
    ctx->r3 = ADD32(ctx->r3, 0X10);
    // 0x002990EC: j           L_00299124
    // 0x002990F0: nop

        goto L_00299124;
    // 0x002990F0: nop

L_002990F4:
    // 0x002990F4: addiu       $v0, $a1, 0x20
    ctx->r2 = ADD32(ctx->r5, 0X20);
L_002990F8:
    // 0x002990F8: lw          $a3, 0x0($a1)
    ctx->r7 = MEM_W(ctx->r5, 0X0);
    // 0x002990FC: lw          $t0, 0x4($a1)
    ctx->r8 = MEM_W(ctx->r5, 0X4);
    // 0x00299100: lw          $t1, 0x8($a1)
    ctx->r9 = MEM_W(ctx->r5, 0X8);
    // 0x00299104: lw          $t2, 0xC($a1)
    ctx->r10 = MEM_W(ctx->r5, 0XC);
    // 0x00299108: sw          $a3, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r7;
    // 0x0029910C: sw          $t0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r8;
    // 0x00299110: sw          $t1, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r9;
    // 0x00299114: sw          $t2, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r10;
    // 0x00299118: addiu       $a1, $a1, 0x10
    ctx->r5 = ADD32(ctx->r5, 0X10);
    // 0x0029911C: bne         $a1, $v0, L_002990F8
    if (ctx->r5 != ctx->r2) {
        // 0x00299120: addiu       $v1, $v1, 0x10
        ctx->r3 = ADD32(ctx->r3, 0X10);
            goto L_002990F8;
    }
    // 0x00299120: addiu       $v1, $v1, 0x10
    ctx->r3 = ADD32(ctx->r3, 0X10);
L_00299124:
    // 0x00299124: lwl         $a3, 0x0($a1)
    ctx->r7 = do_lwl(rdram, ctx->r7, ctx->r5, 0X0);
    // 0x00299128: lwr         $a3, 0x3($a1)
    ctx->r7 = do_lwr(rdram, ctx->r7, ctx->r5, 0X3);
    // 0x0029912C: lwl         $t0, 0x4($a1)
    ctx->r8 = do_lwl(rdram, ctx->r8, ctx->r5, 0X4);
    // 0x00299130: lwr         $t0, 0x7($a1)
    ctx->r8 = do_lwr(rdram, ctx->r8, ctx->r5, 0X7);
    // 0x00299134: swl         $a3, 0x0($v1)
    do_swl(rdram, 0X0, ctx->r3, ctx->r7);
    // 0x00299138: swr         $a3, 0x3($v1)
    do_swr(rdram, 0X3, ctx->r3, ctx->r7);
    // 0x0029913C: swl         $t0, 0x4($v1)
    do_swl(rdram, 0X4, ctx->r3, ctx->r8);
    // 0x00299140: swr         $t0, 0x7($v1)
    do_swr(rdram, 0X7, ctx->r3, ctx->r8);
    // 0x00299144: lbu         $v0, 0x12($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0X12);
    // 0x00299148: andi        $v0, $v0, 0xC0
    ctx->r2 = ctx->r2 & 0XC0;
    // 0x0029914C: srl         $s0, $v0, 4
    ctx->r16 = S32(U32(ctx->r2) >> 4);
    // 0x00299150: bne         $s0, $zero, L_00299178
    if (ctx->r16 != 0) {
        // 0x00299154: nop
    
            goto L_00299178;
    }
    // 0x00299154: nop

    // 0x00299158: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x0029915C: addiu       $a0, $a0, 0x1530
    ctx->r4 = ADD32(ctx->r4, 0X1530);
    // 0x00299160: jal         0x00299E48
    // 0x00299164: nop

    func_00299E48(rdram, ctx);
        goto after_5;
    // 0x00299164: nop

    after_5:
    // 0x00299168: lbu         $v1, 0x36($sp)
    ctx->r3 = MEM_BU(ctx->r29, 0X36);
    // 0x0029916C: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x00299170: bnel        $v0, $v1, L_00299178
    if (ctx->r2 != ctx->r3) {
        // 0x00299174: addiu       $s0, $zero, 0x4
        ctx->r16 = ADD32(0, 0X4);
            goto L_00299178;
    }
    goto skip_0;
    // 0x00299174: addiu       $s0, $zero, 0x4
    ctx->r16 = ADD32(0, 0X4);
    skip_0:
L_00299178:
    // 0x00299178: jal         0x0029A050
    // 0x0029917C: nop

    func_0029A050(rdram, ctx);
        goto after_6;
    // 0x0029917C: nop

    after_6:
    // 0x00299180: addu        $v0, $s0, $zero
    ctx->r2 = ADD32(ctx->r16, 0);
L_00299184:
    // 0x00299184: lw          $ra, 0x40($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X40);
    // 0x00299188: lw          $s1, 0x3C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X3C);
    // 0x0029918C: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x00299190: jr          $ra
    // 0x00299194: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x00299194: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_0029F0F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0029F0F0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x0029F0F4: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x0029F0F8: addu        $s4, $a0, $zero
    ctx->r20 = ADD32(ctx->r4, 0);
    // 0x0029F0FC: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x0029F100: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0029F104: addu        $s0, $a2, $zero
    ctx->r16 = ADD32(ctx->r6, 0);
    // 0x0029F108: addu        $s1, $a3, $zero
    ctx->r17 = ADD32(ctx->r7, 0);
    // 0x0029F10C: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x0029F110: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x0029F114: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x0029F118: lw          $s3, 0x3C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X3C);
    // 0x0029F11C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0029F120: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x0029F124: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x0029F128: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    // 0x0029F12C: jal         0x002A3AE0
    // 0x0029F130: addu        $a3, $s3, $zero
    ctx->r7 = ADD32(ctx->r19, 0);
    func_002A3AE0(rdram, ctx);
        goto after_0;
    // 0x0029F130: addu        $a3, $s3, $zero
    ctx->r7 = ADD32(ctx->r19, 0);
    after_0:
    // 0x0029F134: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0029F138: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x0029F13C: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    // 0x0029F140: sw          $v0, 0x0($s4)
    MEM_W(0X0, ctx->r20) = ctx->r2;
    // 0x0029F144: sw          $v1, 0x4($s4)
    MEM_W(0X4, ctx->r20) = ctx->r3;
    // 0x0029F148: jal         0x002A40D0
    // 0x0029F14C: addu        $a3, $s3, $zero
    ctx->r7 = ADD32(ctx->r19, 0);
    func_002A40D0(rdram, ctx);
        goto after_1;
    // 0x0029F14C: addu        $a3, $s3, $zero
    ctx->r7 = ADD32(ctx->r19, 0);
    after_1:
    // 0x0029F150: sw          $v0, 0x8($s4)
    MEM_W(0X8, ctx->r20) = ctx->r2;
    // 0x0029F154: sw          $v1, 0xC($s4)
    MEM_W(0XC, ctx->r20) = ctx->r3;
    // 0x0029F158: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x0029F15C: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x0029F160: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x0029F164: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x0029F168: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x0029F16C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0029F170: jr          $ra
    // 0x0029F174: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x0029F174: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_004089B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004089B8: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x004089BC: lw          $v0, -0x4A8($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X4A8);
    // 0x004089C0: jr          $ra
    // 0x004089C4: nop

    return;
    // 0x004089C4: nop

;}
RECOMP_FUNC void func_0020B624(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0020B624: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x0020B628: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x0020B62C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x0020B630: jal         0x0020A568
    // 0x0020B634: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    func_0020A568(rdram, ctx);
        goto after_0;
    // 0x0020B634: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_0:
    // 0x0020B638: jal         0x0020A994
    // 0x0020B63C: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    func_0020A994(rdram, ctx);
        goto after_1;
    // 0x0020B63C: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    after_1:
    // 0x0020B640: lui         $v0, 0x800E
    ctx->r2 = S32(0X800E << 16);
    // 0x0020B644: lw          $v0, -0x2E90($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X2E90);
    // 0x0020B648: blez        $v0, L_0020B68C
    if (SIGNED(ctx->r2) <= 0) {
        // 0x0020B64C: sll         $v0, $s1, 2
        ctx->r2 = S32(ctx->r17 << 2);
            goto L_0020B68C;
    }
    // 0x0020B64C: sll         $v0, $s1, 2
    ctx->r2 = S32(ctx->r17 << 2);
L_0020B650:
    // 0x0020B650: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x0020B654: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x0020B658: lw          $s0, -0x2E88($at)
    ctx->r16 = MEM_W(ctx->r1, -0X2E88);
    // 0x0020B65C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0020B660: jal         0x0020565C
    // 0x0020B664: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_0020565C(rdram, ctx);
        goto after_2;
    // 0x0020B664: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_2:
    // 0x0020B668: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0020B66C: jal         0x002051F4
    // 0x0020B670: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_002051F4(rdram, ctx);
        goto after_3;
    // 0x0020B670: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_3:
    // 0x0020B674: lui         $v0, 0x800E
    ctx->r2 = S32(0X800E << 16);
    // 0x0020B678: lw          $v0, -0x2E90($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X2E90);
    // 0x0020B67C: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x0020B680: slt         $v0, $s1, $v0
    ctx->r2 = SIGNED(ctx->r17) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x0020B684: bne         $v0, $zero, L_0020B650
    if (ctx->r2 != 0) {
        // 0x0020B688: sll         $v0, $s1, 2
        ctx->r2 = S32(ctx->r17 << 2);
            goto L_0020B650;
    }
    // 0x0020B688: sll         $v0, $s1, 2
    ctx->r2 = S32(ctx->r17 << 2);
L_0020B68C:
    // 0x0020B68C: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x0020B690: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x0020B694: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0020B698: jr          $ra
    // 0x0020B69C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x0020B69C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_00207FEC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00207FEC: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00207FF0: lw          $v0, -0x477C($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X477C);
    // 0x00207FF4: bne         $v0, $a0, L_00208004
    if (ctx->r2 != ctx->r4) {
        // 0x00207FF8: sltiu       $v0, $a0, 0x1F
        ctx->r2 = ctx->r4 < 0X1F ? 1 : 0;
            goto L_00208004;
    }
    // 0x00207FF8: sltiu       $v0, $a0, 0x1F
    ctx->r2 = ctx->r4 < 0X1F ? 1 : 0;
    // 0x00207FFC: jr          $ra
    // 0x00208000: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x00208000: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_00208004:
    // 0x00208004: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00208008: sw          $a0, -0x477C($at)
    MEM_W(-0X477C, ctx->r1) = ctx->r4;
    // 0x0020800C: beq         $v0, $zero, L_002086B4
    if (ctx->r2 == 0) {
        // 0x00208010: sll         $v0, $a0, 2
        ctx->r2 = S32(ctx->r4 << 2);
            goto L_002086B4;
    }
    // 0x00208010: sll         $v0, $a0, 2
    ctx->r2 = S32(ctx->r4 << 2);
    // 0x00208014: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00208018: addu        $at, $at, $v0
    gpr jr_addend_00208020 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x0020801C: lw          $v0, 0x52B8($at)
    ctx->r2 = ADD32(ctx->r1, 0X52B8);
    // 0x00208020: jr          $v0
    // 0x00208024: nop

    switch (jr_addend_00208020 >> 2) {
        case 0: goto L_00208028; break;
        case 1: goto L_00208070; break;
        case 2: goto L_002080C8; break;
        case 3: goto L_002080E8; break;
        case 4: goto L_00208108; break;
        case 5: goto L_00208160; break;
        case 6: goto L_002081B8; break;
        case 7: goto L_00208210; break;
        case 8: goto L_00208238; break;
        case 9: goto L_00208290; break;
        case 10: goto L_002082B8; break;
        case 11: goto L_00208310; break;
        case 12: goto L_00208338; break;
        case 13: goto L_00208380; break;
        case 14: goto L_002083A0; break;
        case 15: goto L_002083E8; break;
        case 16: goto L_00208408; break;
        case 17: goto L_00208428; break;
        case 18: goto L_00208470; break;
        case 19: goto L_002084B8; break;
        case 20: goto L_002084D8; break;
        case 21: goto L_00208504; break;
        case 22: goto L_00208524; break;
        case 23: goto L_00208544; break;
        case 24: goto L_0020856C; break;
        case 25: goto L_00208594; break;
        case 26: goto L_002085B4; break;
        case 27: goto L_002085D4; break;
        case 28: goto L_002085F4; break;
        case 29: goto L_00208650; break;
        case 30: goto L_00208678; break;
        default: switch_error(__func__, 0x00208020, 0x800A52B8);
    }
    // 0x00208024: nop

L_00208028:
    // 0x00208028: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0020802C: lw          $v0, -0x4770($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X4770);
    // 0x00208030: beq         $v0, $zero, L_00208054
    if (ctx->r2 == 0) {
        // 0x00208034: lui         $a2, 0xE200
        ctx->r6 = S32(0XE200 << 16);
            goto L_00208054;
    }
    // 0x00208034: lui         $a2, 0xE200
    ctx->r6 = S32(0XE200 << 16);
    // 0x00208038: ori         $a2, $a2, 0x1C
    ctx->r6 = ctx->r6 | 0X1C;
    // 0x0020803C: lui         $a1, 0xC18
    ctx->r5 = S32(0XC18 << 16);
    // 0x00208040: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x00208044: addiu       $a0, $a0, -0x71DC
    ctx->r4 = ADD32(ctx->r4, -0X71DC);
    // 0x00208048: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x0020804C: j           L_00208638
    // 0x00208050: ori         $a1, $a1, 0x49D8
    ctx->r5 = ctx->r5 | 0X49D8;
        goto L_00208638;
    // 0x00208050: ori         $a1, $a1, 0x49D8
    ctx->r5 = ctx->r5 | 0X49D8;
L_00208054:
    // 0x00208054: ori         $a2, $a2, 0x1C
    ctx->r6 = ctx->r6 | 0X1C;
    // 0x00208058: lui         $a1, 0xC18
    ctx->r5 = S32(0XC18 << 16);
    // 0x0020805C: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x00208060: addiu       $a0, $a0, -0x71DC
    ctx->r4 = ADD32(ctx->r4, -0X71DC);
    // 0x00208064: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x00208068: j           L_00208638
    // 0x0020806C: ori         $a1, $a1, 0x4A50
    ctx->r5 = ctx->r5 | 0X4A50;
        goto L_00208638;
    // 0x0020806C: ori         $a1, $a1, 0x4A50
    ctx->r5 = ctx->r5 | 0X4A50;
L_00208070:
    // 0x00208070: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00208074: lw          $v0, -0x4770($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X4770);
    // 0x00208078: beq         $v0, $zero, L_002080A4
    if (ctx->r2 == 0) {
        // 0x0020807C: lui         $a3, 0xE200
        ctx->r7 = S32(0XE200 << 16);
            goto L_002080A4;
    }
    // 0x0020807C: lui         $a3, 0xE200
    ctx->r7 = S32(0XE200 << 16);
    // 0x00208080: ori         $a3, $a3, 0x1C
    ctx->r7 = ctx->r7 | 0X1C;
    // 0x00208084: lui         $a2, 0x10
    ctx->r6 = S32(0X10 << 16);
    // 0x00208088: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x0020808C: addiu       $a0, $a0, -0x71DC
    ctx->r4 = ADD32(ctx->r4, -0X71DC);
    // 0x00208090: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x00208094: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x00208098: lw          $v1, -0x4754($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X4754);
    // 0x0020809C: j           L_0020869C
    // 0x002080A0: ori         $a2, $a2, 0x49D8
    ctx->r6 = ctx->r6 | 0X49D8;
        goto L_0020869C;
    // 0x002080A0: ori         $a2, $a2, 0x49D8
    ctx->r6 = ctx->r6 | 0X49D8;
L_002080A4:
    // 0x002080A4: ori         $a3, $a3, 0x1C
    ctx->r7 = ctx->r7 | 0X1C;
    // 0x002080A8: lui         $a2, 0x10
    ctx->r6 = S32(0X10 << 16);
    // 0x002080AC: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x002080B0: addiu       $a0, $a0, -0x71DC
    ctx->r4 = ADD32(ctx->r4, -0X71DC);
    // 0x002080B4: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x002080B8: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x002080BC: lw          $v1, -0x4754($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X4754);
    // 0x002080C0: j           L_0020869C
    // 0x002080C4: ori         $a2, $a2, 0x4A50
    ctx->r6 = ctx->r6 | 0X4A50;
        goto L_0020869C;
    // 0x002080C4: ori         $a2, $a2, 0x4A50
    ctx->r6 = ctx->r6 | 0X4A50;
L_002080C8:
    // 0x002080C8: lui         $a2, 0xE200
    ctx->r6 = S32(0XE200 << 16);
    // 0x002080CC: ori         $a2, $a2, 0x1C
    ctx->r6 = ctx->r6 | 0X1C;
    // 0x002080D0: lui         $a1, 0xC18
    ctx->r5 = S32(0XC18 << 16);
    // 0x002080D4: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x002080D8: addiu       $a0, $a0, -0x71DC
    ctx->r4 = ADD32(ctx->r4, -0X71DC);
    // 0x002080DC: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x002080E0: j           L_00208638
    // 0x002080E4: ori         $a1, $a1, 0x4A50
    ctx->r5 = ctx->r5 | 0X4A50;
        goto L_00208638;
    // 0x002080E4: ori         $a1, $a1, 0x4A50
    ctx->r5 = ctx->r5 | 0X4A50;
L_002080E8:
    // 0x002080E8: lui         $a2, 0xE200
    ctx->r6 = S32(0XE200 << 16);
    // 0x002080EC: ori         $a2, $a2, 0x1C
    ctx->r6 = ctx->r6 | 0X1C;
    // 0x002080F0: lui         $a1, 0xC18
    ctx->r5 = S32(0XC18 << 16);
    // 0x002080F4: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x002080F8: addiu       $a0, $a0, -0x71DC
    ctx->r4 = ADD32(ctx->r4, -0X71DC);
    // 0x002080FC: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x00208100: j           L_00208638
    // 0x00208104: ori         $a1, $a1, 0x4B50
    ctx->r5 = ctx->r5 | 0X4B50;
        goto L_00208638;
    // 0x00208104: ori         $a1, $a1, 0x4B50
    ctx->r5 = ctx->r5 | 0X4B50;
L_00208108:
    // 0x00208108: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0020810C: lw          $v0, -0x4770($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X4770);
    // 0x00208110: beq         $v0, $zero, L_0020813C
    if (ctx->r2 == 0) {
        // 0x00208114: lui         $a3, 0xE200
        ctx->r7 = S32(0XE200 << 16);
            goto L_0020813C;
    }
    // 0x00208114: lui         $a3, 0xE200
    ctx->r7 = S32(0XE200 << 16);
    // 0x00208118: ori         $a3, $a3, 0x1C
    ctx->r7 = ctx->r7 | 0X1C;
    // 0x0020811C: lui         $a2, 0x10
    ctx->r6 = S32(0X10 << 16);
    // 0x00208120: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x00208124: addiu       $a0, $a0, -0x71DC
    ctx->r4 = ADD32(ctx->r4, -0X71DC);
    // 0x00208128: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x0020812C: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x00208130: lw          $v1, -0x4754($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X4754);
    // 0x00208134: j           L_0020869C
    // 0x00208138: ori         $a2, $a2, 0x4DD8
    ctx->r6 = ctx->r6 | 0X4DD8;
        goto L_0020869C;
    // 0x00208138: ori         $a2, $a2, 0x4DD8
    ctx->r6 = ctx->r6 | 0X4DD8;
L_0020813C:
    // 0x0020813C: ori         $a3, $a3, 0x1C
    ctx->r7 = ctx->r7 | 0X1C;
    // 0x00208140: lui         $a2, 0x10
    ctx->r6 = S32(0X10 << 16);
    // 0x00208144: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x00208148: addiu       $a0, $a0, -0x71DC
    ctx->r4 = ADD32(ctx->r4, -0X71DC);
    // 0x0020814C: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x00208150: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x00208154: lw          $v1, -0x4754($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X4754);
    // 0x00208158: j           L_0020869C
    // 0x0020815C: ori         $a2, $a2, 0x4E50
    ctx->r6 = ctx->r6 | 0X4E50;
        goto L_0020869C;
    // 0x0020815C: ori         $a2, $a2, 0x4E50
    ctx->r6 = ctx->r6 | 0X4E50;
L_00208160:
    // 0x00208160: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00208164: lw          $v0, -0x4770($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X4770);
    // 0x00208168: beq         $v0, $zero, L_00208194
    if (ctx->r2 == 0) {
        // 0x0020816C: lui         $a3, 0xE200
        ctx->r7 = S32(0XE200 << 16);
            goto L_00208194;
    }
    // 0x0020816C: lui         $a3, 0xE200
    ctx->r7 = S32(0XE200 << 16);
    // 0x00208170: ori         $a3, $a3, 0x1C
    ctx->r7 = ctx->r7 | 0X1C;
    // 0x00208174: lui         $a2, 0x10
    ctx->r6 = S32(0X10 << 16);
    // 0x00208178: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x0020817C: addiu       $a0, $a0, -0x71DC
    ctx->r4 = ADD32(ctx->r4, -0X71DC);
    // 0x00208180: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x00208184: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x00208188: lw          $v1, -0x4754($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X4754);
    // 0x0020818C: j           L_0020869C
    // 0x00208190: ori         $a2, $a2, 0x41F8
    ctx->r6 = ctx->r6 | 0X41F8;
        goto L_0020869C;
    // 0x00208190: ori         $a2, $a2, 0x41F8
    ctx->r6 = ctx->r6 | 0X41F8;
L_00208194:
    // 0x00208194: ori         $a3, $a3, 0x1C
    ctx->r7 = ctx->r7 | 0X1C;
    // 0x00208198: lui         $a2, 0x10
    ctx->r6 = S32(0X10 << 16);
    // 0x0020819C: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x002081A0: addiu       $a0, $a0, -0x71DC
    ctx->r4 = ADD32(ctx->r4, -0X71DC);
    // 0x002081A4: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x002081A8: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x002081AC: lw          $v1, -0x4754($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X4754);
    // 0x002081B0: j           L_0020869C
    // 0x002081B4: ori         $a2, $a2, 0x41F0
    ctx->r6 = ctx->r6 | 0X41F0;
        goto L_0020869C;
    // 0x002081B4: ori         $a2, $a2, 0x41F0
    ctx->r6 = ctx->r6 | 0X41F0;
L_002081B8:
    // 0x002081B8: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x002081BC: lw          $v0, -0x4770($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X4770);
    // 0x002081C0: beq         $v0, $zero, L_002081EC
    if (ctx->r2 == 0) {
        // 0x002081C4: lui         $a3, 0xE200
        ctx->r7 = S32(0XE200 << 16);
            goto L_002081EC;
    }
    // 0x002081C4: lui         $a3, 0xE200
    ctx->r7 = S32(0XE200 << 16);
    // 0x002081C8: ori         $a3, $a3, 0x1C
    ctx->r7 = ctx->r7 | 0X1C;
    // 0x002081CC: lui         $a2, 0x11
    ctx->r6 = S32(0X11 << 16);
    // 0x002081D0: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x002081D4: addiu       $a0, $a0, -0x71DC
    ctx->r4 = ADD32(ctx->r4, -0X71DC);
    // 0x002081D8: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x002081DC: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x002081E0: lw          $v1, -0x4754($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X4754);
    // 0x002081E4: j           L_0020869C
    // 0x002081E8: ori         $a2, $a2, 0x3078
    ctx->r6 = ctx->r6 | 0X3078;
        goto L_0020869C;
    // 0x002081E8: ori         $a2, $a2, 0x3078
    ctx->r6 = ctx->r6 | 0X3078;
L_002081EC:
    // 0x002081EC: ori         $a3, $a3, 0x1C
    ctx->r7 = ctx->r7 | 0X1C;
    // 0x002081F0: lui         $a2, 0x11
    ctx->r6 = S32(0X11 << 16);
    // 0x002081F4: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x002081F8: addiu       $a0, $a0, -0x71DC
    ctx->r4 = ADD32(ctx->r4, -0X71DC);
    // 0x002081FC: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x00208200: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x00208204: lw          $v1, -0x4754($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X4754);
    // 0x00208208: j           L_0020869C
    // 0x0020820C: ori         $a2, $a2, 0x3078
    ctx->r6 = ctx->r6 | 0X3078;
        goto L_0020869C;
    // 0x0020820C: ori         $a2, $a2, 0x3078
    ctx->r6 = ctx->r6 | 0X3078;
L_00208210:
    // 0x00208210: lui         $a3, 0xE200
    ctx->r7 = S32(0XE200 << 16);
    // 0x00208214: ori         $a3, $a3, 0x1C
    ctx->r7 = ctx->r7 | 0X1C;
    // 0x00208218: lui         $a2, 0x11
    ctx->r6 = S32(0X11 << 16);
    // 0x0020821C: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x00208220: addiu       $a0, $a0, -0x71DC
    ctx->r4 = ADD32(ctx->r4, -0X71DC);
    // 0x00208224: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x00208228: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x0020822C: lw          $v1, -0x4754($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X4754);
    // 0x00208230: j           L_0020869C
    // 0x00208234: ori         $a2, $a2, 0x2E10
    ctx->r6 = ctx->r6 | 0X2E10;
        goto L_0020869C;
    // 0x00208234: ori         $a2, $a2, 0x2E10
    ctx->r6 = ctx->r6 | 0X2E10;
L_00208238:
    // 0x00208238: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0020823C: lw          $v0, -0x4770($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X4770);
    // 0x00208240: beq         $v0, $zero, L_0020826C
    if (ctx->r2 == 0) {
        // 0x00208244: lui         $a3, 0xE200
        ctx->r7 = S32(0XE200 << 16);
            goto L_0020826C;
    }
    // 0x00208244: lui         $a3, 0xE200
    ctx->r7 = S32(0XE200 << 16);
    // 0x00208248: ori         $a3, $a3, 0x1C
    ctx->r7 = ctx->r7 | 0X1C;
    // 0x0020824C: lui         $a2, 0x11
    ctx->r6 = S32(0X11 << 16);
    // 0x00208250: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x00208254: addiu       $a0, $a0, -0x71DC
    ctx->r4 = ADD32(ctx->r4, -0X71DC);
    // 0x00208258: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x0020825C: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x00208260: lw          $v1, -0x4754($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X4754);
    // 0x00208264: j           L_0020869C
    // 0x00208268: ori         $a2, $a2, 0x2478
    ctx->r6 = ctx->r6 | 0X2478;
        goto L_0020869C;
    // 0x00208268: ori         $a2, $a2, 0x2478
    ctx->r6 = ctx->r6 | 0X2478;
L_0020826C:
    // 0x0020826C: ori         $a3, $a3, 0x1C
    ctx->r7 = ctx->r7 | 0X1C;
    // 0x00208270: lui         $a2, 0x11
    ctx->r6 = S32(0X11 << 16);
    // 0x00208274: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x00208278: addiu       $a0, $a0, -0x71DC
    ctx->r4 = ADD32(ctx->r4, -0X71DC);
    // 0x0020827C: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x00208280: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x00208284: lw          $v1, -0x4754($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X4754);
    // 0x00208288: j           L_0020869C
    // 0x0020828C: ori         $a2, $a2, 0x2478
    ctx->r6 = ctx->r6 | 0X2478;
        goto L_0020869C;
    // 0x0020828C: ori         $a2, $a2, 0x2478
    ctx->r6 = ctx->r6 | 0X2478;
L_00208290:
    // 0x00208290: lui         $a3, 0xE200
    ctx->r7 = S32(0XE200 << 16);
    // 0x00208294: ori         $a3, $a3, 0x1C
    ctx->r7 = ctx->r7 | 0X1C;
    // 0x00208298: lui         $a2, 0x11
    ctx->r6 = S32(0X11 << 16);
    // 0x0020829C: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x002082A0: addiu       $a0, $a0, -0x71DC
    ctx->r4 = ADD32(ctx->r4, -0X71DC);
    // 0x002082A4: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x002082A8: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x002082AC: lw          $v1, -0x4754($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X4754);
    // 0x002082B0: j           L_0020869C
    // 0x002082B4: ori         $a2, $a2, 0x2438
    ctx->r6 = ctx->r6 | 0X2438;
        goto L_0020869C;
    // 0x002082B4: ori         $a2, $a2, 0x2438
    ctx->r6 = ctx->r6 | 0X2438;
L_002082B8:
    // 0x002082B8: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x002082BC: lw          $v0, -0x4770($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X4770);
    // 0x002082C0: beq         $v0, $zero, L_002082EC
    if (ctx->r2 == 0) {
        // 0x002082C4: lui         $a3, 0xE200
        ctx->r7 = S32(0XE200 << 16);
            goto L_002082EC;
    }
    // 0x002082C4: lui         $a3, 0xE200
    ctx->r7 = S32(0XE200 << 16);
    // 0x002082C8: ori         $a3, $a3, 0x1C
    ctx->r7 = ctx->r7 | 0X1C;
    // 0x002082CC: lui         $a2, 0x11
    ctx->r6 = S32(0X11 << 16);
    // 0x002082D0: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x002082D4: addiu       $a0, $a0, -0x71DC
    ctx->r4 = ADD32(ctx->r4, -0X71DC);
    // 0x002082D8: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x002082DC: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x002082E0: lw          $v1, -0x4754($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X4754);
    // 0x002082E4: j           L_0020869C
    // 0x002082E8: ori         $a2, $a2, 0x2078
    ctx->r6 = ctx->r6 | 0X2078;
        goto L_0020869C;
    // 0x002082E8: ori         $a2, $a2, 0x2078
    ctx->r6 = ctx->r6 | 0X2078;
L_002082EC:
    // 0x002082EC: ori         $a3, $a3, 0x1C
    ctx->r7 = ctx->r7 | 0X1C;
    // 0x002082F0: lui         $a2, 0x11
    ctx->r6 = S32(0X11 << 16);
    // 0x002082F4: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x002082F8: addiu       $a0, $a0, -0x71DC
    ctx->r4 = ADD32(ctx->r4, -0X71DC);
    // 0x002082FC: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x00208300: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x00208304: lw          $v1, -0x4754($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X4754);
    // 0x00208308: j           L_0020869C
    // 0x0020830C: ori         $a2, $a2, 0x2230
    ctx->r6 = ctx->r6 | 0X2230;
        goto L_0020869C;
    // 0x0020830C: ori         $a2, $a2, 0x2230
    ctx->r6 = ctx->r6 | 0X2230;
L_00208310:
    // 0x00208310: lui         $a3, 0xE200
    ctx->r7 = S32(0XE200 << 16);
    // 0x00208314: ori         $a3, $a3, 0x1C
    ctx->r7 = ctx->r7 | 0X1C;
    // 0x00208318: lui         $a2, 0x11
    ctx->r6 = S32(0X11 << 16);
    // 0x0020831C: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x00208320: addiu       $a0, $a0, -0x71DC
    ctx->r4 = ADD32(ctx->r4, -0X71DC);
    // 0x00208324: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x00208328: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x0020832C: lw          $v1, -0x4754($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X4754);
    // 0x00208330: j           L_0020869C
    // 0x00208334: ori         $a2, $a2, 0x2038
    ctx->r6 = ctx->r6 | 0X2038;
        goto L_0020869C;
    // 0x00208334: ori         $a2, $a2, 0x2038
    ctx->r6 = ctx->r6 | 0X2038;
L_00208338:
    // 0x00208338: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0020833C: lw          $v0, -0x4770($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X4770);
    // 0x00208340: beq         $v0, $zero, L_00208364
    if (ctx->r2 == 0) {
        // 0x00208344: lui         $a2, 0xE200
        ctx->r6 = S32(0XE200 << 16);
            goto L_00208364;
    }
    // 0x00208344: lui         $a2, 0xE200
    ctx->r6 = S32(0XE200 << 16);
    // 0x00208348: ori         $a2, $a2, 0x1C
    ctx->r6 = ctx->r6 | 0X1C;
    // 0x0020834C: lui         $a1, 0x50
    ctx->r5 = S32(0X50 << 16);
    // 0x00208350: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x00208354: addiu       $a0, $a0, -0x71DC
    ctx->r4 = ADD32(ctx->r4, -0X71DC);
    // 0x00208358: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x0020835C: j           L_00208638
    // 0x00208360: ori         $a1, $a1, 0x45D8
    ctx->r5 = ctx->r5 | 0X45D8;
        goto L_00208638;
    // 0x00208360: ori         $a1, $a1, 0x45D8
    ctx->r5 = ctx->r5 | 0X45D8;
L_00208364:
    // 0x00208364: ori         $a2, $a2, 0x1C
    ctx->r6 = ctx->r6 | 0X1C;
    // 0x00208368: lui         $a1, 0x40
    ctx->r5 = S32(0X40 << 16);
    // 0x0020836C: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x00208370: addiu       $a0, $a0, -0x71DC
    ctx->r4 = ADD32(ctx->r4, -0X71DC);
    // 0x00208374: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x00208378: j           L_00208638
    // 0x0020837C: ori         $a1, $a1, 0x45D0
    ctx->r5 = ctx->r5 | 0X45D0;
        goto L_00208638;
    // 0x0020837C: ori         $a1, $a1, 0x45D0
    ctx->r5 = ctx->r5 | 0X45D0;
L_00208380:
    // 0x00208380: lui         $a2, 0xE200
    ctx->r6 = S32(0XE200 << 16);
    // 0x00208384: ori         $a2, $a2, 0x1C
    ctx->r6 = ctx->r6 | 0X1C;
    // 0x00208388: lui         $a1, 0x50
    ctx->r5 = S32(0X50 << 16);
    // 0x0020838C: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x00208390: addiu       $a0, $a0, -0x71DC
    ctx->r4 = ADD32(ctx->r4, -0X71DC);
    // 0x00208394: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x00208398: j           L_00208638
    // 0x0020839C: ori         $a1, $a1, 0x4B50
    ctx->r5 = ctx->r5 | 0X4B50;
        goto L_00208638;
    // 0x0020839C: ori         $a1, $a1, 0x4B50
    ctx->r5 = ctx->r5 | 0X4B50;
L_002083A0:
    // 0x002083A0: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x002083A4: lw          $v0, -0x4770($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X4770);
    // 0x002083A8: beq         $v0, $zero, L_002083CC
    if (ctx->r2 == 0) {
        // 0x002083AC: lui         $a2, 0xE200
        ctx->r6 = S32(0XE200 << 16);
            goto L_002083CC;
    }
    // 0x002083AC: lui         $a2, 0xE200
    ctx->r6 = S32(0XE200 << 16);
    // 0x002083B0: ori         $a2, $a2, 0x1C
    ctx->r6 = ctx->r6 | 0X1C;
    // 0x002083B4: lui         $a1, 0x50
    ctx->r5 = S32(0X50 << 16);
    // 0x002083B8: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x002083BC: addiu       $a0, $a0, -0x71DC
    ctx->r4 = ADD32(ctx->r4, -0X71DC);
    // 0x002083C0: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x002083C4: j           L_00208638
    // 0x002083C8: ori         $a1, $a1, 0x49D8
    ctx->r5 = ctx->r5 | 0X49D8;
        goto L_00208638;
    // 0x002083C8: ori         $a1, $a1, 0x49D8
    ctx->r5 = ctx->r5 | 0X49D8;
L_002083CC:
    // 0x002083CC: ori         $a2, $a2, 0x1C
    ctx->r6 = ctx->r6 | 0X1C;
    // 0x002083D0: lui         $a1, 0x50
    ctx->r5 = S32(0X50 << 16);
    // 0x002083D4: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x002083D8: addiu       $a0, $a0, -0x71DC
    ctx->r4 = ADD32(ctx->r4, -0X71DC);
    // 0x002083DC: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x002083E0: j           L_00208638
    // 0x002083E4: ori         $a1, $a1, 0x4A50
    ctx->r5 = ctx->r5 | 0X4A50;
        goto L_00208638;
    // 0x002083E4: ori         $a1, $a1, 0x4A50
    ctx->r5 = ctx->r5 | 0X4A50;
L_002083E8:
    // 0x002083E8: lui         $a2, 0xE200
    ctx->r6 = S32(0XE200 << 16);
    // 0x002083EC: ori         $a2, $a2, 0x1C
    ctx->r6 = ctx->r6 | 0X1C;
    // 0x002083F0: lui         $a1, 0x50
    ctx->r5 = S32(0X50 << 16);
    // 0x002083F4: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x002083F8: addiu       $a0, $a0, -0x71DC
    ctx->r4 = ADD32(ctx->r4, -0X71DC);
    // 0x002083FC: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x00208400: j           L_00208638
    // 0x00208404: ori         $a1, $a1, 0x4E50
    ctx->r5 = ctx->r5 | 0X4E50;
        goto L_00208638;
    // 0x00208404: ori         $a1, $a1, 0x4E50
    ctx->r5 = ctx->r5 | 0X4E50;
L_00208408:
    // 0x00208408: lui         $a2, 0xE200
    ctx->r6 = S32(0XE200 << 16);
    // 0x0020840C: ori         $a2, $a2, 0x1C
    ctx->r6 = ctx->r6 | 0X1C;
    // 0x00208410: lui         $a1, 0x50
    ctx->r5 = S32(0X50 << 16);
    // 0x00208414: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x00208418: addiu       $a0, $a0, -0x71DC
    ctx->r4 = ADD32(ctx->r4, -0X71DC);
    // 0x0020841C: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x00208420: j           L_00208638
    // 0x00208424: ori         $a1, $a1, 0x4B53
    ctx->r5 = ctx->r5 | 0X4B53;
        goto L_00208638;
    // 0x00208424: ori         $a1, $a1, 0x4B53
    ctx->r5 = ctx->r5 | 0X4B53;
L_00208428:
    // 0x00208428: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0020842C: lw          $v0, -0x4770($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X4770);
    // 0x00208430: beq         $v0, $zero, L_00208454
    if (ctx->r2 == 0) {
        // 0x00208434: lui         $a2, 0xE200
        ctx->r6 = S32(0XE200 << 16);
            goto L_00208454;
    }
    // 0x00208434: lui         $a2, 0xE200
    ctx->r6 = S32(0XE200 << 16);
    // 0x00208438: ori         $a2, $a2, 0x1C
    ctx->r6 = ctx->r6 | 0X1C;
    // 0x0020843C: lui         $a1, 0x55
    ctx->r5 = S32(0X55 << 16);
    // 0x00208440: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x00208444: addiu       $a0, $a0, -0x71DC
    ctx->r4 = ADD32(ctx->r4, -0X71DC);
    // 0x00208448: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x0020844C: j           L_00208638
    // 0x00208450: ori         $a1, $a1, 0x3078
    ctx->r5 = ctx->r5 | 0X3078;
        goto L_00208638;
    // 0x00208450: ori         $a1, $a1, 0x3078
    ctx->r5 = ctx->r5 | 0X3078;
L_00208454:
    // 0x00208454: ori         $a2, $a2, 0x1C
    ctx->r6 = ctx->r6 | 0X1C;
    // 0x00208458: lui         $a1, 0x55
    ctx->r5 = S32(0X55 << 16);
    // 0x0020845C: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x00208460: addiu       $a0, $a0, -0x71DC
    ctx->r4 = ADD32(ctx->r4, -0X71DC);
    // 0x00208464: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x00208468: j           L_00208638
    // 0x0020846C: ori         $a1, $a1, 0x3078
    ctx->r5 = ctx->r5 | 0X3078;
        goto L_00208638;
    // 0x0020846C: ori         $a1, $a1, 0x3078
    ctx->r5 = ctx->r5 | 0X3078;
L_00208470:
    // 0x00208470: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00208474: lw          $v0, -0x4770($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X4770);
    // 0x00208478: beq         $v0, $zero, L_0020849C
    if (ctx->r2 == 0) {
        // 0x0020847C: lui         $a2, 0xE200
        ctx->r6 = S32(0XE200 << 16);
            goto L_0020849C;
    }
    // 0x0020847C: lui         $a2, 0xE200
    ctx->r6 = S32(0XE200 << 16);
    // 0x00208480: ori         $a2, $a2, 0x1C
    ctx->r6 = ctx->r6 | 0X1C;
    // 0x00208484: lui         $a1, 0x55
    ctx->r5 = S32(0X55 << 16);
    // 0x00208488: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x0020848C: addiu       $a0, $a0, -0x71DC
    ctx->r4 = ADD32(ctx->r4, -0X71DC);
    // 0x00208490: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x00208494: j           L_00208638
    // 0x00208498: ori         $a1, $a1, 0x3048
    ctx->r5 = ctx->r5 | 0X3048;
        goto L_00208638;
    // 0x00208498: ori         $a1, $a1, 0x3048
    ctx->r5 = ctx->r5 | 0X3048;
L_0020849C:
    // 0x0020849C: ori         $a2, $a2, 0x1C
    ctx->r6 = ctx->r6 | 0X1C;
    // 0x002084A0: lui         $a1, 0xF0A
    ctx->r5 = S32(0XF0A << 16);
    // 0x002084A4: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x002084A8: addiu       $a0, $a0, -0x71DC
    ctx->r4 = ADD32(ctx->r4, -0X71DC);
    // 0x002084AC: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x002084B0: j           L_00208638
    // 0x002084B4: ori         $a1, $a1, 0x7008
    ctx->r5 = ctx->r5 | 0X7008;
        goto L_00208638;
    // 0x002084B4: ori         $a1, $a1, 0x7008
    ctx->r5 = ctx->r5 | 0X7008;
L_002084B8:
    // 0x002084B8: lui         $a2, 0xE200
    ctx->r6 = S32(0XE200 << 16);
    // 0x002084BC: ori         $a2, $a2, 0x1C
    ctx->r6 = ctx->r6 | 0X1C;
    // 0x002084C0: lui         $a1, 0x50
    ctx->r5 = S32(0X50 << 16);
    // 0x002084C4: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x002084C8: addiu       $a0, $a0, -0x71DC
    ctx->r4 = ADD32(ctx->r4, -0X71DC);
    // 0x002084CC: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x002084D0: j           L_00208638
    // 0x002084D4: ori         $a1, $a1, 0x4340
    ctx->r5 = ctx->r5 | 0X4340;
        goto L_00208638;
    // 0x002084D4: ori         $a1, $a1, 0x4340
    ctx->r5 = ctx->r5 | 0X4340;
L_002084D8:
    // 0x002084D8: lui         $a1, 0xE200
    ctx->r5 = S32(0XE200 << 16);
    // 0x002084DC: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x002084E0: addiu       $a0, $a0, -0x71DC
    ctx->r4 = ADD32(ctx->r4, -0X71DC);
    // 0x002084E4: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x002084E8: ori         $a1, $a1, 0x1C
    ctx->r5 = ctx->r5 | 0X1C;
    // 0x002084EC: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x002084F0: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x002084F4: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
    // 0x002084F8: sw          $a1, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r5;
    // 0x002084FC: j           L_002086B4
    // 0x00208500: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
        goto L_002086B4;
    // 0x00208500: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
L_00208504:
    // 0x00208504: lui         $a2, 0xE200
    ctx->r6 = S32(0XE200 << 16);
    // 0x00208508: ori         $a2, $a2, 0x1C
    ctx->r6 = ctx->r6 | 0X1C;
    // 0x0020850C: lui         $a1, 0x50
    ctx->r5 = S32(0X50 << 16);
    // 0x00208510: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x00208514: addiu       $a0, $a0, -0x71DC
    ctx->r4 = ADD32(ctx->r4, -0X71DC);
    // 0x00208518: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x0020851C: j           L_00208638
    // 0x00208520: ori         $a1, $a1, 0x4240
    ctx->r5 = ctx->r5 | 0X4240;
        goto L_00208638;
    // 0x00208520: ori         $a1, $a1, 0x4240
    ctx->r5 = ctx->r5 | 0X4240;
L_00208524:
    // 0x00208524: lui         $a2, 0xE200
    ctx->r6 = S32(0XE200 << 16);
    // 0x00208528: ori         $a2, $a2, 0x1C
    ctx->r6 = ctx->r6 | 0X1C;
    // 0x0020852C: lui         $a1, 0xFA5
    ctx->r5 = S32(0XFA5 << 16);
    // 0x00208530: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x00208534: addiu       $a0, $a0, -0x71DC
    ctx->r4 = ADD32(ctx->r4, -0X71DC);
    // 0x00208538: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x0020853C: j           L_00208638
    // 0x00208540: ori         $a1, $a1, 0x4040
    ctx->r5 = ctx->r5 | 0X4040;
        goto L_00208638;
    // 0x00208540: ori         $a1, $a1, 0x4040
    ctx->r5 = ctx->r5 | 0X4040;
L_00208544:
    // 0x00208544: lui         $a3, 0xE200
    ctx->r7 = S32(0XE200 << 16);
    // 0x00208548: ori         $a3, $a3, 0x1C
    ctx->r7 = ctx->r7 | 0X1C;
    // 0x0020854C: lui         $a2, 0x10
    ctx->r6 = S32(0X10 << 16);
    // 0x00208550: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x00208554: addiu       $a0, $a0, -0x71DC
    ctx->r4 = ADD32(ctx->r4, -0X71DC);
    // 0x00208558: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x0020855C: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x00208560: lw          $v1, -0x4754($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X4754);
    // 0x00208564: j           L_0020869C
    // 0x00208568: ori         $a2, $a2, 0x4B50
    ctx->r6 = ctx->r6 | 0X4B50;
        goto L_0020869C;
    // 0x00208568: ori         $a2, $a2, 0x4B50
    ctx->r6 = ctx->r6 | 0X4B50;
L_0020856C:
    // 0x0020856C: lui         $a3, 0xE200
    ctx->r7 = S32(0XE200 << 16);
    // 0x00208570: ori         $a3, $a3, 0x1C
    ctx->r7 = ctx->r7 | 0X1C;
    // 0x00208574: lui         $a2, 0x10
    ctx->r6 = S32(0X10 << 16);
    // 0x00208578: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x0020857C: addiu       $a0, $a0, -0x71DC
    ctx->r4 = ADD32(ctx->r4, -0X71DC);
    // 0x00208580: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x00208584: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x00208588: lw          $v1, -0x4754($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X4754);
    // 0x0020858C: j           L_0020869C
    // 0x00208590: ori         $a2, $a2, 0x4E50
    ctx->r6 = ctx->r6 | 0X4E50;
        goto L_0020869C;
    // 0x00208590: ori         $a2, $a2, 0x4E50
    ctx->r6 = ctx->r6 | 0X4E50;
L_00208594:
    // 0x00208594: lui         $a2, 0xE200
    ctx->r6 = S32(0XE200 << 16);
    // 0x00208598: ori         $a2, $a2, 0x1C
    ctx->r6 = ctx->r6 | 0X1C;
    // 0x0020859C: lui         $a1, 0xC18
    ctx->r5 = S32(0XC18 << 16);
    // 0x002085A0: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x002085A4: addiu       $a0, $a0, -0x71DC
    ctx->r4 = ADD32(ctx->r4, -0X71DC);
    // 0x002085A8: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x002085AC: j           L_00208638
    // 0x002085B0: ori         $a1, $a1, 0x4240
    ctx->r5 = ctx->r5 | 0X4240;
        goto L_00208638;
    // 0x002085B0: ori         $a1, $a1, 0x4240
    ctx->r5 = ctx->r5 | 0X4240;
L_002085B4:
    // 0x002085B4: lui         $a2, 0xE200
    ctx->r6 = S32(0XE200 << 16);
    // 0x002085B8: ori         $a2, $a2, 0x1C
    ctx->r6 = ctx->r6 | 0X1C;
    // 0x002085BC: lui         $a1, 0xC18
    ctx->r5 = S32(0XC18 << 16);
    // 0x002085C0: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x002085C4: addiu       $a0, $a0, -0x71DC
    ctx->r4 = ADD32(ctx->r4, -0X71DC);
    // 0x002085C8: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x002085CC: j           L_00208638
    // 0x002085D0: ori         $a1, $a1, 0x4340
    ctx->r5 = ctx->r5 | 0X4340;
        goto L_00208638;
    // 0x002085D0: ori         $a1, $a1, 0x4340
    ctx->r5 = ctx->r5 | 0X4340;
L_002085D4:
    // 0x002085D4: lui         $a2, 0xE200
    ctx->r6 = S32(0XE200 << 16);
    // 0x002085D8: ori         $a2, $a2, 0x1C
    ctx->r6 = ctx->r6 | 0X1C;
    // 0x002085DC: lui         $a1, 0xF0A
    ctx->r5 = S32(0XF0A << 16);
    // 0x002085E0: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x002085E4: addiu       $a0, $a0, -0x71DC
    ctx->r4 = ADD32(ctx->r4, -0X71DC);
    // 0x002085E8: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x002085EC: j           L_00208638
    // 0x002085F0: ori         $a1, $a1, 0x4000
    ctx->r5 = ctx->r5 | 0X4000;
        goto L_00208638;
    // 0x002085F0: ori         $a1, $a1, 0x4000
    ctx->r5 = ctx->r5 | 0X4000;
L_002085F4:
    // 0x002085F4: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x002085F8: lw          $v0, -0x4770($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X4770);
    // 0x002085FC: beq         $v0, $zero, L_00208620
    if (ctx->r2 == 0) {
        // 0x00208600: lui         $a2, 0xE200
        ctx->r6 = S32(0XE200 << 16);
            goto L_00208620;
    }
    // 0x00208600: lui         $a2, 0xE200
    ctx->r6 = S32(0XE200 << 16);
    // 0x00208604: ori         $a2, $a2, 0x1C
    ctx->r6 = ctx->r6 | 0X1C;
    // 0x00208608: lui         $a1, 0x50
    ctx->r5 = S32(0X50 << 16);
    // 0x0020860C: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x00208610: addiu       $a0, $a0, -0x71DC
    ctx->r4 = ADD32(ctx->r4, -0X71DC);
    // 0x00208614: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x00208618: j           L_00208638
    // 0x0020861C: ori         $a1, $a1, 0x7048
    ctx->r5 = ctx->r5 | 0X7048;
        goto L_00208638;
    // 0x0020861C: ori         $a1, $a1, 0x7048
    ctx->r5 = ctx->r5 | 0X7048;
L_00208620:
    // 0x00208620: ori         $a2, $a2, 0x1C
    ctx->r6 = ctx->r6 | 0X1C;
    // 0x00208624: lui         $a1, 0x50
    ctx->r5 = S32(0X50 << 16);
    // 0x00208628: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x0020862C: addiu       $a0, $a0, -0x71DC
    ctx->r4 = ADD32(ctx->r4, -0X71DC);
    // 0x00208630: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x00208634: ori         $a1, $a1, 0x7040
    ctx->r5 = ctx->r5 | 0X7040;
L_00208638:
    // 0x00208638: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x0020863C: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x00208640: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
    // 0x00208644: sw          $a2, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r6;
    // 0x00208648: j           L_002086B4
    // 0x0020864C: sw          $a1, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r5;
        goto L_002086B4;
    // 0x0020864C: sw          $a1, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r5;
L_00208650:
    // 0x00208650: lui         $a3, 0xE200
    ctx->r7 = S32(0XE200 << 16);
    // 0x00208654: ori         $a3, $a3, 0x1C
    ctx->r7 = ctx->r7 | 0X1C;
    // 0x00208658: lui         $a2, 0x10
    ctx->r6 = S32(0X10 << 16);
    // 0x0020865C: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x00208660: addiu       $a0, $a0, -0x71DC
    ctx->r4 = ADD32(ctx->r4, -0X71DC);
    // 0x00208664: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x00208668: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x0020866C: lw          $v1, -0x4754($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X4754);
    // 0x00208670: j           L_0020869C
    // 0x00208674: ori         $a2, $a2, 0x4F50
    ctx->r6 = ctx->r6 | 0X4F50;
        goto L_0020869C;
    // 0x00208674: ori         $a2, $a2, 0x4F50
    ctx->r6 = ctx->r6 | 0X4F50;
L_00208678:
    // 0x00208678: lui         $a3, 0xE200
    ctx->r7 = S32(0XE200 << 16);
    // 0x0020867C: ori         $a3, $a3, 0x1C
    ctx->r7 = ctx->r7 | 0X1C;
    // 0x00208680: lui         $a2, 0x10
    ctx->r6 = S32(0X10 << 16);
    // 0x00208684: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x00208688: addiu       $a0, $a0, -0x71DC
    ctx->r4 = ADD32(ctx->r4, -0X71DC);
    // 0x0020868C: ori         $a2, $a2, 0x4F50
    ctx->r6 = ctx->r6 | 0X4F50;
    // 0x00208690: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x00208694: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x00208698: lw          $v1, -0x4758($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X4758);
L_0020869C:
    // 0x0020869C: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x002086A0: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x002086A4: or          $v1, $v1, $a2
    ctx->r3 = ctx->r3 | ctx->r6;
    // 0x002086A8: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
    // 0x002086AC: sw          $a3, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r7;
    // 0x002086B0: sw          $v1, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r3;
L_002086B4:
    // 0x002086B4: jr          $ra
    // 0x002086B8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x002086B8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
;}
RECOMP_FUNC void func_00284204(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00284204: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00284208: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0028420C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x00284210: jal         0x00284174
    // 0x00284214: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    func_00284174(rdram, ctx);
        goto after_0;
    // 0x00284214: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    after_0:
    // 0x00284218: bne         $v0, $zero, L_00284230
    if (ctx->r2 != 0) {
        // 0x0028421C: addu        $v0, $s0, $zero
        ctx->r2 = ADD32(ctx->r16, 0);
            goto L_00284230;
    }
    // 0x0028421C: addu        $v0, $s0, $zero
    ctx->r2 = ADD32(ctx->r16, 0);
    // 0x00284220: jal         0x0028415C
    // 0x00284224: nop

    func_0028415C(rdram, ctx);
        goto after_1;
    // 0x00284224: nop

    after_1:
    // 0x00284228: sltiu       $s0, $v0, 0x1
    ctx->r16 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x0028422C: addu        $v0, $s0, $zero
    ctx->r2 = ADD32(ctx->r16, 0);
L_00284230:
    // 0x00284230: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x00284234: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00284238: jr          $ra
    // 0x0028423C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0028423C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0029884C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0029884C: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x00298850: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x00298854: addiu       $a1, $a1, 0x13E0
    ctx->r5 = ADD32(ctx->r5, 0X13E0);
    // 0x00298858: addiu       $a0, $zero, 0xE
    ctx->r4 = ADD32(0, 0XE);
    // 0x0029885C: addiu       $v0, $a1, 0x38
    ctx->r2 = ADD32(ctx->r5, 0X38);
L_00298860:
    // 0x00298860: sw          $zero, 0x0($v0)
    MEM_W(0X0, ctx->r2) = 0;
    // 0x00298864: addiu       $a0, $a0, -0x1
    ctx->r4 = ADD32(ctx->r4, -0X1);
    // 0x00298868: bgez        $a0, L_00298860
    if (SIGNED(ctx->r4) >= 0) {
        // 0x0029886C: addiu       $v0, $v0, -0x4
        ctx->r2 = ADD32(ctx->r2, -0X4);
            goto L_00298860;
    }
    // 0x0029886C: addiu       $v0, $v0, -0x4
    ctx->r2 = ADD32(ctx->r2, -0X4);
    // 0x00298870: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x00298874: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x00298878: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x0029887C: sb          $v0, 0x0($sp)
    MEM_B(0X0, ctx->r29) = ctx->r2;
    // 0x00298880: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x00298884: sb          $v0, 0x2($sp)
    MEM_B(0X2, ctx->r29) = ctx->r2;
    // 0x00298888: ori         $v0, $zero, 0xFFFF
    ctx->r2 = 0 | 0XFFFF;
    // 0x0029888C: lui         $a2, 0x8012
    ctx->r6 = S32(0X8012 << 16);
    // 0x00298890: addiu       $a2, $a2, 0x13DC
    ctx->r6 = ADD32(ctx->r6, 0X13DC);
    // 0x00298894: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x00298898: sw          $v1, 0x141C($at)
    MEM_W(0X141C, ctx->r1) = ctx->r3;
    // 0x0029889C: sb          $v1, 0x1($sp)
    MEM_B(0X1, ctx->r29) = ctx->r3;
    // 0x002988A0: sb          $v1, 0x3($sp)
    MEM_B(0X3, ctx->r29) = ctx->r3;
    // 0x002988A4: sh          $v0, 0x4($sp)
    MEM_H(0X4, ctx->r29) = ctx->r2;
    // 0x002988A8: lbu         $v1, 0x0($a2)
    ctx->r3 = MEM_BU(ctx->r6, 0X0);
    // 0x002988AC: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x002988B0: sb          $v0, 0x6($sp)
    MEM_B(0X6, ctx->r29) = ctx->r2;
    // 0x002988B4: beq         $v1, $zero, L_002988F0
    if (ctx->r3 == 0) {
        // 0x002988B8: sb          $v0, 0x7($sp)
        MEM_B(0X7, ctx->r29) = ctx->r2;
            goto L_002988F0;
    }
    // 0x002988B8: sb          $v0, 0x7($sp)
    MEM_B(0X7, ctx->r29) = ctx->r2;
L_002988BC:
    // 0x002988BC: lwl         $a3, 0x0($sp)
    ctx->r7 = do_lwl(rdram, ctx->r7, ctx->r29, 0X0);
    // 0x002988C0: lwr         $a3, 0x3($sp)
    ctx->r7 = do_lwr(rdram, ctx->r7, ctx->r29, 0X3);
    // 0x002988C4: lwl         $t0, 0x4($sp)
    ctx->r8 = do_lwl(rdram, ctx->r8, ctx->r29, 0X4);
    // 0x002988C8: lwr         $t0, 0x7($sp)
    ctx->r8 = do_lwr(rdram, ctx->r8, ctx->r29, 0X7);
    // 0x002988CC: swl         $a3, 0x0($a1)
    do_swl(rdram, 0X0, ctx->r5, ctx->r7);
    // 0x002988D0: swr         $a3, 0x3($a1)
    do_swr(rdram, 0X3, ctx->r5, ctx->r7);
    // 0x002988D4: swl         $t0, 0x4($a1)
    do_swl(rdram, 0X4, ctx->r5, ctx->r8);
    // 0x002988D8: swr         $t0, 0x7($a1)
    do_swr(rdram, 0X7, ctx->r5, ctx->r8);
    // 0x002988DC: lbu         $v0, 0x0($a2)
    ctx->r2 = MEM_BU(ctx->r6, 0X0);
    // 0x002988E0: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x002988E4: slt         $v0, $a0, $v0
    ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x002988E8: bne         $v0, $zero, L_002988BC
    if (ctx->r2 != 0) {
        // 0x002988EC: addiu       $a1, $a1, 0x8
        ctx->r5 = ADD32(ctx->r5, 0X8);
            goto L_002988BC;
    }
    // 0x002988EC: addiu       $a1, $a1, 0x8
    ctx->r5 = ADD32(ctx->r5, 0X8);
L_002988F0:
    // 0x002988F0: addiu       $v0, $zero, 0xFE
    ctx->r2 = ADD32(0, 0XFE);
    // 0x002988F4: sb          $v0, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r2;
    // 0x002988F8: jr          $ra
    // 0x002988FC: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x002988FC: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_00281C60(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00281C60: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00281C64: lwc1        $f0, -0x63CC($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X63CC);
    // 0x00281C68: mtc1        $a1, $f4
    ctx->f4.u32l = ctx->r5;
    // 0x00281C6C: mul.s       $f2, $f4, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x00281C70: lwc1        $f1, 0x10($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x00281C74: mtc1        $a2, $f4
    ctx->f4.u32l = ctx->r6;
    // 0x00281C78: lw          $v0, 0x14($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X14);
    // 0x00281C7C: mul.s       $f3, $f4, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f3.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x00281C80: mtc1        $a3, $f4
    ctx->f4.u32l = ctx->r7;
    // 0x00281C84: lw          $v1, 0x18($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X18);
    // 0x00281C88: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x00281C8C: lw          $t1, 0x20($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X20);
    // 0x00281C90: sw          $v1, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r3;
    // 0x00281C94: sw          $t0, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->r8;
    // 0x00281C98: sw          $t1, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->r9;
    // 0x00281C9C: swc1        $f1, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->f_odd[(1 - 1) * 2];
    // 0x00281CA0: sw          $v0, 0x18($a0)
    MEM_W(0X18, ctx->r4) = ctx->r2;
    // 0x00281CA4: mul.s       $f0, $f4, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x00281CA8: sw          $v0, 0x2C($a0)
    MEM_W(0X2C, ctx->r4) = ctx->r2;
    // 0x00281CAC: sw          $v0, 0x40($a0)
    MEM_W(0X40, ctx->r4) = ctx->r2;
    // 0x00281CB0: swc1        $f2, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = ctx->f2.u32l;
    // 0x00281CB4: swc1        $f3, 0x30($a0)
    MEM_W(0X30, ctx->r4) = ctx->f_odd[(3 - 1) * 2];
    // 0x00281CB8: jr          $ra
    // 0x00281CBC: swc1        $f0, 0x44($a0)
    MEM_W(0X44, ctx->r4) = ctx->f0.u32l;
    return;
    // 0x00281CBC: swc1        $f0, 0x44($a0)
    MEM_W(0X44, ctx->r4) = ctx->f0.u32l;
;}
RECOMP_FUNC void func_0045824C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_0041F2B8:
    // 0x0045824C: addiu       $sp, $sp, -0x78
    ctx->r29 = ADD32(ctx->r29, -0X78);
L_0041F3E0:
    // 0x00458250: sw          $s6, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r22;
L_0041FA38:
    // 0x00458254: addu        $s6, $a1, $zero
    ctx->r22 = ADD32(ctx->r5, 0);
L_0041FA44:
    // 0x00458258: sw          $ra, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r31;
    // 0x0045825C: sw          $s7, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r23;
    // 0x00458260: sw          $s5, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r21;
    // 0x00458264: sw          $s4, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r20;
    // 0x00458268: sw          $s3, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r19;
    // 0x0045826C: sw          $s2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r18;
    // 0x00458270: sw          $s1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r17;
    // 0x00458274: sw          $s0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r16;
    // 0x00458278: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x0045827C: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    // 0x00458280: addiu       $s5, $v0, -0x3
    ctx->r21 = ADD32(ctx->r2, -0X3);
    // 0x00458284: lui         $v0, 0x800F
    ctx->r2 = S32(0X800F << 16);
    // 0x00458288: lw          $v0, 0x70A8($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X70A8);
    // 0x0045828C: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x00458290: lw          $v1, 0x990($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X990);
    // 0x00458294: beq         $v1, $zero, L_004582AC
    if (ctx->r3 == 0) {
        // 0x00458298: addiu       $s7, $v0, 0x688
        ctx->r23 = ADD32(ctx->r2, 0X688);
            goto L_004582AC;
    }
    // 0x00458298: addiu       $s7, $v0, 0x688
    ctx->r23 = ADD32(ctx->r2, 0X688);
    // 0x0045829C: lui         $s4, 0x800C
    ctx->r20 = S32(0X800C << 16);
    // 0x004582A0: lw          $s4, 0x2028($s4)
    ctx->r20 = MEM_W(ctx->r20, 0X2028);
    // 0x004582A4: j           L_0041F2B8
    // 0x004582A8: addu        $a0, $s6, $zero
    ctx->r4 = ADD32(ctx->r22, 0);
    entry_0041F2B8(rdram, ctx);
    return;
    // 0x004582A8: addu        $a0, $s6, $zero
    ctx->r4 = ADD32(ctx->r22, 0);
L_004582AC:
    // 0x004582AC: lw          $v0, 0x20($s6)
    ctx->r2 = MEM_W(ctx->r22, 0X20);
    // 0x004582B0: lb          $s4, 0x4($v0)
    ctx->r20 = MEM_B(ctx->r2, 0X4);
    // 0x004582B4: addu        $a0, $s6, $zero
    ctx->r4 = ADD32(ctx->r22, 0);
    // 0x004582B8: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    // 0x004582BC: jal         0x0041DCB0
    // 0x004582C0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_0041DCB0(rdram, ctx);
        goto after_0;
    // 0x004582C0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x004582C4: beq         $v0, $zero, L_004582DC
    if (ctx->r2 == 0) {
        // 0x004582C8: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_004582DC;
    }
    // 0x004582C8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x004582CC: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x004582D0: sw          $v0, 0x9BC($at)
    MEM_W(0X9BC, ctx->r1) = ctx->r2;
    // 0x004582D4: j           L_0041FA44
    // 0x004582D8: nop

    entry_0041FA44(rdram, ctx);
    return;
    // 0x004582D8: nop

L_004582DC:
    // 0x004582DC: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x004582E0: lw          $v0, 0x9A0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X9A0);
    // 0x004582E4: beq         $v0, $zero, L_004586C0
    if (ctx->r2 == 0) {
        // 0x004582E8: addu        $a0, $s4, $zero
        ctx->r4 = ADD32(ctx->r20, 0);
            goto L_004586C0;
    }
    // 0x004582E8: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    // 0x004582EC: addu        $a1, $s5, $zero
    ctx->r5 = ADD32(ctx->r21, 0);
    // 0x004582F0: addiu       $a2, $sp, 0x48
    ctx->r6 = ADD32(ctx->r29, 0X48);
    // 0x004582F4: addiu       $a3, $sp, 0x38
    ctx->r7 = ADD32(ctx->r29, 0X38);
    // 0x004582F8: addiu       $v0, $sp, 0x20
    ctx->r2 = ADD32(ctx->r29, 0X20);
    // 0x004582FC: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x00458300: addiu       $v0, $sp, 0x4C
    ctx->r2 = ADD32(ctx->r29, 0X4C);
    // 0x00458304: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x00458308: addiu       $v0, $sp, 0x28
    ctx->r2 = ADD32(ctx->r29, 0X28);
    // 0x0045830C: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x00458310: addiu       $v0, $sp, 0x30
    ctx->r2 = ADD32(ctx->r29, 0X30);
    // 0x00458314: jal         0x00425D94
    // 0x00458318: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    func_00425D94(rdram, ctx);
        goto after_1;
    // 0x00458318: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    after_1:
    // 0x0045831C: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x00458320: bne         $s1, $zero, L_00458348
    if (ctx->r17 != 0) {
        // 0x00458324: nop
    
            goto L_00458348;
    }
    // 0x00458324: nop

    // 0x00458328: lw          $v0, 0x48($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X48);
    // 0x0045832C: bne         $v0, $zero, L_00458348
    if (ctx->r2 != 0) {
        // 0x00458330: addiu       $v0, $zero, 0x14
        ctx->r2 = ADD32(0, 0X14);
            goto L_00458348;
    }
    // 0x00458330: addiu       $v0, $zero, 0x14
    ctx->r2 = ADD32(0, 0X14);
    // 0x00458334: sh          $v0, 0x0($s6)
    MEM_H(0X0, ctx->r22) = ctx->r2;
    // 0x00458338: jal         0x0041D948
    // 0x0045833C: addu        $a0, $s6, $zero
    ctx->r4 = ADD32(ctx->r22, 0);
    entry_0041D948(rdram, ctx);
        goto after_2;
    // 0x0045833C: addu        $a0, $s6, $zero
    ctx->r4 = ADD32(ctx->r22, 0);
    after_2:
    // 0x00458340: j           L_0041FA44
    // 0x00458344: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    entry_0041FA44(rdram, ctx);
    return;
    // 0x00458344: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_00458348:
    // 0x00458348: jal         0x00426CAC
    // 0x0045834C: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    entry_00426CAC(rdram, ctx);
        goto after_3;
    // 0x0045834C: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    after_3:
    // 0x00458350: addiu       $v1, $zero, 0x4
    ctx->r3 = ADD32(0, 0X4);
    // 0x00458354: bne         $v0, $v1, L_004583A4
    if (ctx->r2 != ctx->r3) {
        // 0x00458358: addu        $v1, $zero, $zero
        ctx->r3 = ADD32(0, 0);
            goto L_004583A4;
    }
    // 0x00458358: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
    // 0x0045835C: jal         0x00426CAC
    // 0x00458360: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    entry_00426CAC(rdram, ctx);
        goto after_4;
    // 0x00458360: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    after_4:
    // 0x00458364: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
    // 0x00458368: bne         $v0, $v1, L_004583A4
    if (ctx->r2 != ctx->r3) {
        // 0x0045836C: addu        $v1, $zero, $zero
        ctx->r3 = ADD32(0, 0);
            goto L_004583A4;
    }
    // 0x0045836C: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
    // 0x00458370: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x00458374: addiu       $a1, $a1, 0x45D8
    ctx->r5 = ADD32(ctx->r5, 0X45D8);
    // 0x00458378: jal         0x00426C74
    // 0x0045837C: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    func_00426C74(rdram, ctx);
        goto after_5;
    // 0x0045837C: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    after_5:
    // 0x00458380: bne         $v0, $zero, L_004583A4
    if (ctx->r2 != 0) {
        // 0x00458384: addu        $v1, $zero, $zero
        ctx->r3 = ADD32(0, 0);
            goto L_004583A4;
    }
    // 0x00458384: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
    // 0x00458388: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x0045838C: addiu       $a1, $a1, 0x45D4
    ctx->r5 = ADD32(ctx->r5, 0X45D4);
    // 0x00458390: jal         0x00426C74
    // 0x00458394: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    func_00426C74(rdram, ctx);
        goto after_6;
    // 0x00458394: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    after_6:
    // 0x00458398: beq         $v0, $zero, L_004583A4
    if (ctx->r2 == 0) {
        // 0x0045839C: addiu       $v1, $zero, 0x1
        ctx->r3 = ADD32(0, 0X1);
            goto L_004583A4;
    }
    // 0x0045839C: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x004583A0: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
L_004583A4:
    // 0x004583A4: beq         $v1, $zero, L_004583D8
    if (ctx->r3 == 0) {
        // 0x004583A8: addiu       $s0, $sp, 0x38
        ctx->r16 = ADD32(ctx->r29, 0X38);
            goto L_004583D8;
    }
    // 0x004583A8: addiu       $s0, $sp, 0x38
    ctx->r16 = ADD32(ctx->r29, 0X38);
    // 0x004583AC: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x004583B0: addiu       $a1, $a1, 0x45C0
    ctx->r5 = ADD32(ctx->r5, 0X45C0);
    // 0x004583B4: jal         0x00426C74
    // 0x004583B8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00426C74(rdram, ctx);
        goto after_7;
    // 0x004583B8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_7:
    // 0x004583BC: sltiu       $s3, $v0, 0x1
    ctx->r19 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x004583C0: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x004583C4: addiu       $a1, $a1, 0x45CC
    ctx->r5 = ADD32(ctx->r5, 0X45CC);
    // 0x004583C8: jal         0x00426C74
    // 0x004583CC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00426C74(rdram, ctx);
        goto after_8;
    // 0x004583CC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_8:
    // 0x004583D0: j           L_0041F3E0
    // 0x004583D4: sltiu       $s0, $v0, 0x1
    ctx->r16 = ctx->r2 < 0X1 ? 1 : 0;
    entry_0041F3E0(rdram, ctx);
    return;
    // 0x004583D4: sltiu       $s0, $v0, 0x1
    ctx->r16 = ctx->r2 < 0X1 ? 1 : 0;
L_004583D8:
    // 0x004583D8: addu        $s3, $zero, $zero
    ctx->r19 = ADD32(0, 0);
    // 0x004583DC: addu        $s0, $s3, $zero
    ctx->r16 = ADD32(ctx->r19, 0);
    // 0x004583E0: bne         $s1, $zero, L_004589EC
    if (ctx->r17 != 0) {
        // 0x004583E4: nop
    
            goto L_004589EC;
    }
    // 0x004583E4: nop

    // 0x004583E8: lw          $v0, 0x48($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X48);
    // 0x004583EC: beq         $v0, $zero, L_004589EC
    if (ctx->r2 == 0) {
        // 0x004583F0: nop
    
            goto L_004589EC;
    }
    // 0x004583F0: nop

    // 0x004583F4: beq         $s3, $zero, L_004584A4
    if (ctx->r19 == 0) {
        // 0x004583F8: addu        $a0, $s4, $zero
        ctx->r4 = ADD32(ctx->r20, 0);
            goto L_004584A4;
    }
    // 0x004583F8: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    // 0x004583FC: addu        $a1, $s5, $zero
    ctx->r5 = ADD32(ctx->r21, 0);
    // 0x00458400: lui         $s1, 0x8013
    ctx->r17 = S32(0X8013 << 16);
    // 0x00458404: addiu       $s1, $s1, 0x968
    ctx->r17 = ADD32(ctx->r17, 0X968);
    // 0x00458408: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    // 0x0045840C: jal         0x004264D0
    // 0x00458410: addiu       $a3, $zero, 0x18
    ctx->r7 = ADD32(0, 0X18);
    entry_004264D0(rdram, ctx);
        goto after_9;
    // 0x00458410: addiu       $a3, $zero, 0x18
    ctx->r7 = ADD32(0, 0X18);
    after_9:
    // 0x00458414: bne         $v0, $zero, L_004584A0
    if (ctx->r2 != 0) {
        // 0x00458418: addu        $s3, $zero, $zero
        ctx->r19 = ADD32(0, 0);
            goto L_004584A0;
    }
    // 0x00458418: addu        $s3, $zero, $zero
    ctx->r19 = ADD32(0, 0);
    // 0x0045841C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x00458420: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    // 0x00458424: jal         0x00426D98
    // 0x00458428: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    entry_00426D98(rdram, ctx);
        goto after_10;
    // 0x00458428: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_10:
    // 0x0045842C: lw          $v1, 0x14($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X14);
    // 0x00458430: bne         $v0, $v1, L_004584A0
    if (ctx->r2 != ctx->r3) {
        // 0x00458434: addu        $s3, $zero, $zero
        ctx->r19 = ADD32(0, 0);
            goto L_004584A0;
    }
    // 0x00458434: addu        $s3, $zero, $zero
    ctx->r19 = ADD32(0, 0);
    // 0x00458438: lui         $t3, 0x8013
    ctx->r11 = S32(0X8013 << 16);
    // 0x0045843C: addiu       $t3, $t3, 0x948
    ctx->r11 = ADD32(ctx->r11, 0X948);
    // 0x00458440: lw          $t0, 0x0($s1)
    ctx->r8 = MEM_W(ctx->r17, 0X0);
    // 0x00458444: lw          $t1, 0x4($s1)
    ctx->r9 = MEM_W(ctx->r17, 0X4);
    // 0x00458448: lw          $t2, 0x8($s1)
    ctx->r10 = MEM_W(ctx->r17, 0X8);
    // 0x0045844C: sw          $t0, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r8;
    // 0x00458450: sw          $t1, 0x4($t3)
    MEM_W(0X4, ctx->r11) = ctx->r9;
    // 0x00458454: sw          $t2, 0x8($t3)
    MEM_W(0X8, ctx->r11) = ctx->r10;
    // 0x00458458: lw          $t0, 0xC($s1)
    ctx->r8 = MEM_W(ctx->r17, 0XC);
    // 0x0045845C: lw          $t1, 0x10($s1)
    ctx->r9 = MEM_W(ctx->r17, 0X10);
    // 0x00458460: lw          $t2, 0x14($s1)
    ctx->r10 = MEM_W(ctx->r17, 0X14);
    // 0x00458464: sw          $t0, 0xC($t3)
    MEM_W(0XC, ctx->r11) = ctx->r8;
    // 0x00458468: sw          $t1, 0x10($t3)
    MEM_W(0X10, ctx->r11) = ctx->r9;
    // 0x0045846C: sw          $t2, 0x14($t3)
    MEM_W(0X14, ctx->r11) = ctx->r10;
    // 0x00458470: lw          $v0, 0x14($s6)
    ctx->r2 = MEM_W(ctx->r22, 0X14);
    // 0x00458474: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x00458478: addiu       $a0, $a0, -0x61D4
    ctx->r4 = ADD32(ctx->r4, -0X61D4);
    // 0x0045847C: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x00458480: lw          $a2, 0x1C($s6)
    ctx->r6 = MEM_W(ctx->r22, 0X1C);
    // 0x00458484: lw          $a3, 0x20($s6)
    ctx->r7 = MEM_W(ctx->r22, 0X20);
    // 0x00458488: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x0045848C: addiu       $a1, $a1, -0x466C
    ctx->r5 = ADD32(ctx->r5, -0X466C);
    // 0x00458490: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x00458494: sw          $s5, 0x9C4($at)
    MEM_W(0X9C4, ctx->r1) = ctx->r21;
    // 0x00458498: j           L_0041FA38
    // 0x0045849C: nop

    entry_0041FA38(rdram, ctx);
    return;
    // 0x0045849C: nop

L_004584A0:
    // 0x004584A0: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
L_004584A4:
    // 0x004584A4: beq         $s0, $zero, L_004585D4
    if (ctx->r16 == 0) {
        // 0x004584A8: nop
    
            goto L_004585D4;
    }
    // 0x004584A8: nop

    // 0x004584AC: bne         $s2, $zero, L_004585D4
    if (ctx->r18 != 0) {
        // 0x004584B0: nop
    
            goto L_004585D4;
    }
    // 0x004584B0: nop

    // 0x004584B4: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x004584B8: lw          $v0, 0x2014($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2014);
    // 0x004584BC: lw          $s0, 0x4C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X4C);
    // 0x004584C0: beq         $v0, $zero, L_004584E0
    if (ctx->r2 == 0) {
        // 0x004584C4: nop
    
            goto L_004584E0;
    }
    // 0x004584C4: nop

    // 0x004584C8: jal         0x002053A8
    // 0x004584CC: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_002053A8(rdram, ctx);
        goto after_11;
    // 0x004584CC: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_11:
    // 0x004584D0: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x004584D4: lw          $a1, 0x2014($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X2014);
    // 0x004584D8: jal         0x002052D8
    // 0x004584DC: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_002052D8(rdram, ctx);
        goto after_12;
    // 0x004584DC: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_12:
L_004584E0:
    // 0x004584E0: bne         $s0, $zero, L_004584F4
    if (ctx->r16 != 0) {
        // 0x004584E4: sll         $s0, $s0, 8
        ctx->r16 = S32(ctx->r16 << 8);
            goto L_004584F4;
    }
    // 0x004584E4: sll         $s0, $s0, 8
    ctx->r16 = S32(ctx->r16 << 8);
    // 0x004584E8: lui         $v0, 0x800F
    ctx->r2 = S32(0X800F << 16);
    // 0x004584EC: lw          $v0, 0x70A8($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X70A8);
    // 0x004584F0: addiu       $s0, $v0, 0x688
    ctx->r16 = ADD32(ctx->r2, 0X688);
L_004584F4:
    // 0x004584F4: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x004584F8: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x004584FC: lui         $a3, 0x800C
    ctx->r7 = S32(0X800C << 16);
    // 0x00458500: addiu       $a3, $a3, 0x13F0
    ctx->r7 = ADD32(ctx->r7, 0X13F0);
    // 0x00458504: jal         0x00204EDC
    // 0x00458508: addiu       $a2, $zero, 0x33
    ctx->r6 = ADD32(0, 0X33);
    func_00204EDC(rdram, ctx);
        goto after_13;
    // 0x00458508: addiu       $a2, $zero, 0x33
    ctx->r6 = ADD32(0, 0X33);
    after_13:
    // 0x0045850C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x00458510: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
    // 0x00458514: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00458518: sw          $v0, 0x2014($at)
    MEM_W(0X2014, ctx->r1) = ctx->r2;
    // 0x0045851C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00458520: sw          $a0, 0x201C($at)
    MEM_W(0X201C, ctx->r1) = ctx->r4;
    // 0x00458524: jal         0x00266C5C
    // 0x00458528: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    func_00266C5C(rdram, ctx);
        goto after_14;
    // 0x00458528: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    after_14:
    // 0x0045852C: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    // 0x00458530: addu        $a1, $s5, $zero
    ctx->r5 = ADD32(ctx->r21, 0);
    // 0x00458534: lw          $a3, 0x4C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X4C);
    // 0x00458538: lui         $a2, 0x800C
    ctx->r6 = S32(0X800C << 16);
    // 0x0045853C: lw          $a2, 0x201C($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X201C);
    // 0x00458540: jal         0x004264D0
    // 0x00458544: sll         $a3, $a3, 8
    ctx->r7 = S32(ctx->r7 << 8);
    entry_004264D0(rdram, ctx);
        goto after_15;
    // 0x00458544: sll         $a3, $a3, 8
    ctx->r7 = S32(ctx->r7 << 8);
    after_15:
    // 0x00458548: bnel        $v0, $zero, L_004585D0
    if (ctx->r2 != 0) {
        // 0x0045854C: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_004585D0;
    }
    goto skip_0;
    // 0x0045854C: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    skip_0:
    // 0x00458550: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x00458554: lw          $a0, 0x201C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X201C);
    // 0x00458558: lw          $a1, 0x0($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X0);
    // 0x0045855C: bnel        $a1, $s7, L_004585D0
    if (ctx->r5 != ctx->r23) {
        // 0x00458560: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_004585D0;
    }
    goto skip_1;
    // 0x00458560: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    skip_1:
    // 0x00458564: addiu       $a1, $a1, -0x4
    ctx->r5 = ADD32(ctx->r5, -0X4);
    // 0x00458568: jal         0x00426D98
    // 0x0045856C: addiu       $a2, $zero, 0xB
    ctx->r6 = ADD32(0, 0XB);
    entry_00426D98(rdram, ctx);
        goto after_16;
    // 0x0045856C: addiu       $a2, $zero, 0xB
    ctx->r6 = ADD32(0, 0XB);
    after_16:
    // 0x00458570: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x00458574: lw          $a0, 0x201C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X201C);
    // 0x00458578: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x0045857C: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x00458580: lw          $v1, -0x4($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X4);
    // 0x00458584: bne         $v0, $v1, L_004585D0
    if (ctx->r2 != ctx->r3) {
        // 0x00458588: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_004585D0;
    }
    // 0x00458588: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x0045858C: lui         $v1, 0x800F
    ctx->r3 = S32(0X800F << 16);
    // 0x00458590: lw          $v1, 0x70A8($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X70A8);
    // 0x00458594: lw          $v0, 0x4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X4);
    // 0x00458598: bne         $v1, $v0, L_004585D4
    if (ctx->r3 != ctx->r2) {
        // 0x0045859C: addiu       $s2, $zero, 0x1
        ctx->r18 = ADD32(0, 0X1);
            goto L_004585D4;
    }
    // 0x0045859C: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
    // 0x004585A0: lw          $v0, 0x14($s6)
    ctx->r2 = MEM_W(ctx->r22, 0X14);
    // 0x004585A4: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x004585A8: addiu       $a0, $a0, -0x61D4
    ctx->r4 = ADD32(ctx->r4, -0X61D4);
    // 0x004585AC: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x004585B0: lw          $a2, 0x1C($s6)
    ctx->r6 = MEM_W(ctx->r22, 0X1C);
    // 0x004585B4: lw          $a3, 0x20($s6)
    ctx->r7 = MEM_W(ctx->r22, 0X20);
    // 0x004585B8: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x004585BC: addiu       $a1, $a1, -0x47F8
    ctx->r5 = ADD32(ctx->r5, -0X47F8);
    // 0x004585C0: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x004585C4: sw          $s5, 0x9C4($at)
    MEM_W(0X9C4, ctx->r1) = ctx->r21;
    // 0x004585C8: j           L_0041FA38
    // 0x004585CC: nop

    entry_0041FA38(rdram, ctx);
    return;
    // 0x004585CC: nop

L_004585D0:
    // 0x004585D0: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
L_004585D4:
    // 0x004585D4: bne         $s3, $zero, L_004589EC
    if (ctx->r19 != 0) {
        // 0x004585D8: nop
    
            goto L_004589EC;
    }
    // 0x004585D8: nop

    // 0x004585DC: bne         $s0, $zero, L_004589EC
    if (ctx->r16 != 0) {
        // 0x004585E0: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_004589EC;
    }
    // 0x004585E0: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x004585E4: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x004585E8: sw          $s5, 0x9C4($at)
    MEM_W(0X9C4, ctx->r1) = ctx->r21;
    // 0x004585EC: lui         $s1, 0x800B
    ctx->r17 = S32(0X800B << 16);
    // 0x004585F0: addiu       $s1, $s1, 0x4B1C
    ctx->r17 = ADD32(ctx->r17, 0X4B1C);
    // 0x004585F4: addiu       $s2, $sp, 0x38
    ctx->r18 = ADD32(ctx->r29, 0X38);
    // 0x004585F8: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x004585FC: jal         0x00426D5C
    // 0x00458600: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    func_00426D5C(rdram, ctx);
        goto after_17;
    // 0x00458600: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    after_17:
    // 0x00458604: beq         $v0, $zero, L_00458620
    if (ctx->r2 == 0) {
        // 0x00458608: addiu       $a1, $zero, 0x1
        ctx->r5 = ADD32(0, 0X1);
            goto L_00458620;
    }
    // 0x00458608: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x0045860C: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x00458610: addiu       $a1, $a1, 0x48D4
    ctx->r5 = ADD32(ctx->r5, 0X48D4);
    // 0x00458614: jal         0x00426D24
    // 0x00458618: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    entry_00426D24(rdram, ctx);
        goto after_18;
    // 0x00458618: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_18:
    // 0x0045861C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
L_00458620:
    // 0x00458620: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
    // 0x00458624: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
L_00458628:
    // 0x00458628: beq         $a1, $zero, L_00458634
    if (ctx->r5 == 0) {
        // 0x0045862C: addu        $v0, $a0, $v1
        ctx->r2 = ADD32(ctx->r4, ctx->r3);
            goto L_00458634;
    }
    // 0x0045862C: addu        $v0, $a0, $v1
    ctx->r2 = ADD32(ctx->r4, ctx->r3);
    // 0x00458630: lbu         $s0, 0x0($v0)
    ctx->r16 = MEM_BU(ctx->r2, 0X0);
L_00458634:
    // 0x00458634: bnel        $s0, $zero, L_00458648
    if (ctx->r16 != 0) {
        // 0x00458638: sb          $s0, 0x0($s1)
        MEM_B(0X0, ctx->r17) = ctx->r16;
            goto L_00458648;
    }
    goto skip_2;
    // 0x00458638: sb          $s0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r16;
    skip_2:
    // 0x0045863C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x00458640: addiu       $s0, $zero, 0x20
    ctx->r16 = ADD32(0, 0X20);
    // 0x00458644: sb          $s0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r16;
L_00458648:
    // 0x00458648: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x0045864C: slti        $v0, $v1, 0x10
    ctx->r2 = SIGNED(ctx->r3) < 0X10 ? 1 : 0;
    // 0x00458650: bne         $v0, $zero, L_00458628
    if (ctx->r2 != 0) {
        // 0x00458654: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_00458628;
    }
    // 0x00458654: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x00458658: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x0045865C: addu        $s1, $s1, $a1
    ctx->r17 = ADD32(ctx->r17, ctx->r5);
    // 0x00458660: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
    // 0x00458664: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
L_00458668:
    // 0x00458668: beq         $a1, $zero, L_00458674
    if (ctx->r5 == 0) {
        // 0x0045866C: addu        $v0, $a0, $v1
        ctx->r2 = ADD32(ctx->r4, ctx->r3);
            goto L_00458674;
    }
    // 0x0045866C: addu        $v0, $a0, $v1
    ctx->r2 = ADD32(ctx->r4, ctx->r3);
    // 0x00458670: lbu         $s0, 0x0($v0)
    ctx->r16 = MEM_BU(ctx->r2, 0X0);
L_00458674:
    // 0x00458674: bnel        $s0, $zero, L_00458688
    if (ctx->r16 != 0) {
        // 0x00458678: sb          $s0, 0x0($s1)
        MEM_B(0X0, ctx->r17) = ctx->r16;
            goto L_00458688;
    }
    goto skip_3;
    // 0x00458678: sb          $s0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r16;
    skip_3:
    // 0x0045867C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x00458680: addiu       $s0, $zero, 0x20
    ctx->r16 = ADD32(0, 0X20);
    // 0x00458684: sb          $s0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r16;
L_00458688:
    // 0x00458688: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x0045868C: slti        $v0, $v1, 0x4
    ctx->r2 = SIGNED(ctx->r3) < 0X4 ? 1 : 0;
    // 0x00458690: bne         $v0, $zero, L_00458668
    if (ctx->r2 != 0) {
        // 0x00458694: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_00458668;
    }
    // 0x00458694: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x00458698: lw          $v0, 0x14($s6)
    ctx->r2 = MEM_W(ctx->r22, 0X14);
    // 0x0045869C: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x004586A0: addiu       $a0, $a0, -0x61D4
    ctx->r4 = ADD32(ctx->r4, -0X61D4);
    // 0x004586A4: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x004586A8: lw          $a2, 0x1C($s6)
    ctx->r6 = MEM_W(ctx->r22, 0X1C);
    // 0x004586AC: lw          $a3, 0x20($s6)
    ctx->r7 = MEM_W(ctx->r22, 0X20);
    // 0x004586B0: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x004586B4: addiu       $a1, $a1, -0x4648
    ctx->r5 = ADD32(ctx->r5, -0X4648);
    // 0x004586B8: j           L_0041FA38
    // 0x004586BC: nop

    entry_0041FA38(rdram, ctx);
    return;
    // 0x004586BC: nop

L_004586C0:
    // 0x004586C0: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x004586C4: lw          $v0, 0x994($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X994);
    // 0x004586C8: beq         $v0, $zero, L_004589EC
    if (ctx->r2 == 0) {
        // 0x004586CC: nop
    
            goto L_004589EC;
    }
    // 0x004586CC: nop

    // 0x004586D0: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x004586D4: lw          $v0, 0x9B4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X9B4);
    // 0x004586D8: beq         $v0, $zero, L_004587E0
    if (ctx->r2 == 0) {
        // 0x004586DC: nop
    
            goto L_004587E0;
    }
    // 0x004586DC: nop

    // 0x004586E0: bne         $s2, $zero, L_004587E0
    if (ctx->r18 != 0) {
        // 0x004586E4: addu        $a0, $s4, $zero
        ctx->r4 = ADD32(ctx->r20, 0);
            goto L_004587E0;
    }
    // 0x004586E4: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    // 0x004586E8: addu        $a1, $s5, $zero
    ctx->r5 = ADD32(ctx->r21, 0);
    // 0x004586EC: addiu       $a2, $sp, 0x48
    ctx->r6 = ADD32(ctx->r29, 0X48);
    // 0x004586F0: addiu       $s0, $sp, 0x38
    ctx->r16 = ADD32(ctx->r29, 0X38);
    // 0x004586F4: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    // 0x004586F8: addiu       $v0, $sp, 0x20
    ctx->r2 = ADD32(ctx->r29, 0X20);
    // 0x004586FC: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x00458700: addiu       $v0, $sp, 0x4C
    ctx->r2 = ADD32(ctx->r29, 0X4C);
    // 0x00458704: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x00458708: addiu       $v0, $sp, 0x28
    ctx->r2 = ADD32(ctx->r29, 0X28);
    // 0x0045870C: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x00458710: addiu       $v0, $sp, 0x30
    ctx->r2 = ADD32(ctx->r29, 0X30);
    // 0x00458714: jal         0x00425D94
    // 0x00458718: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    func_00425D94(rdram, ctx);
        goto after_19;
    // 0x00458718: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    after_19:
    // 0x0045871C: bne         $v0, $zero, L_004589EC
    if (ctx->r2 != 0) {
        // 0x00458720: nop
    
            goto L_004589EC;
    }
    // 0x00458720: nop

    // 0x00458724: lw          $v0, 0x48($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X48);
    // 0x00458728: beq         $v0, $zero, L_004589EC
    if (ctx->r2 == 0) {
        // 0x0045872C: nop
    
            goto L_004589EC;
    }
    // 0x0045872C: nop

    // 0x00458730: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x00458734: addiu       $a1, $a1, 0x45C0
    ctx->r5 = ADD32(ctx->r5, 0X45C0);
    // 0x00458738: jal         0x00426C74
    // 0x0045873C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00426C74(rdram, ctx);
        goto after_20;
    // 0x0045873C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_20:
    // 0x00458740: bne         $v0, $zero, L_004589EC
    if (ctx->r2 != 0) {
        // 0x00458744: addu        $a1, $s5, $zero
        ctx->r5 = ADD32(ctx->r21, 0);
            goto L_004589EC;
    }
    // 0x00458744: addu        $a1, $s5, $zero
    ctx->r5 = ADD32(ctx->r21, 0);
    // 0x00458748: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    // 0x0045874C: lui         $s0, 0x8013
    ctx->r16 = S32(0X8013 << 16);
    // 0x00458750: addiu       $s0, $s0, 0x968
    ctx->r16 = ADD32(ctx->r16, 0X968);
    // 0x00458754: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    // 0x00458758: jal         0x004264D0
    // 0x0045875C: addiu       $a3, $zero, 0x18
    ctx->r7 = ADD32(0, 0X18);
    entry_004264D0(rdram, ctx);
        goto after_21;
    // 0x0045875C: addiu       $a3, $zero, 0x18
    ctx->r7 = ADD32(0, 0X18);
    after_21:
    // 0x00458760: bne         $v0, $zero, L_004589EC
    if (ctx->r2 != 0) {
        // 0x00458764: addiu       $s2, $zero, 0x1
        ctx->r18 = ADD32(0, 0X1);
            goto L_004589EC;
    }
    // 0x00458764: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
    // 0x00458768: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0045876C: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    // 0x00458770: jal         0x00426D98
    // 0x00458774: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    entry_00426D98(rdram, ctx);
        goto after_22;
    // 0x00458774: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_22:
    // 0x00458778: lw          $v1, 0x14($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X14);
    // 0x0045877C: bne         $v0, $v1, L_004589EC
    if (ctx->r2 != ctx->r3) {
        // 0x00458780: addiu       $s2, $zero, 0x1
        ctx->r18 = ADD32(0, 0X1);
            goto L_004589EC;
    }
    // 0x00458780: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
    // 0x00458784: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x00458788: addiu       $a0, $a0, -0x61D4
    ctx->r4 = ADD32(ctx->r4, -0X61D4);
    // 0x0045878C: lui         $t3, 0x8013
    ctx->r11 = S32(0X8013 << 16);
    // 0x00458790: addiu       $t3, $t3, 0x948
    ctx->r11 = ADD32(ctx->r11, 0X948);
    // 0x00458794: lw          $t0, 0x0($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X0);
    // 0x00458798: lw          $t1, 0x4($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X4);
    // 0x0045879C: lw          $t2, 0x8($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X8);
    // 0x004587A0: sw          $t0, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r8;
    // 0x004587A4: sw          $t1, 0x4($t3)
    MEM_W(0X4, ctx->r11) = ctx->r9;
    // 0x004587A8: sw          $t2, 0x8($t3)
    MEM_W(0X8, ctx->r11) = ctx->r10;
    // 0x004587AC: lw          $t0, 0xC($s0)
    ctx->r8 = MEM_W(ctx->r16, 0XC);
    // 0x004587B0: lw          $t1, 0x10($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X10);
    // 0x004587B4: lw          $t2, 0x14($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X14);
    // 0x004587B8: sw          $t0, 0xC($t3)
    MEM_W(0XC, ctx->r11) = ctx->r8;
    // 0x004587BC: sw          $t1, 0x10($t3)
    MEM_W(0X10, ctx->r11) = ctx->r9;
    // 0x004587C0: sw          $t2, 0x14($t3)
    MEM_W(0X14, ctx->r11) = ctx->r10;
    // 0x004587C4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x004587C8: lw          $a2, 0x1C($s6)
    ctx->r6 = MEM_W(ctx->r22, 0X1C);
    // 0x004587CC: lw          $a3, 0x20($s6)
    ctx->r7 = MEM_W(ctx->r22, 0X20);
    // 0x004587D0: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x004587D4: addiu       $a1, $a1, -0x4690
    ctx->r5 = ADD32(ctx->r5, -0X4690);
    // 0x004587D8: j           L_0041FA38
    // 0x004587DC: nop

    entry_0041FA38(rdram, ctx);
    return;
    // 0x004587DC: nop

L_004587E0:
    // 0x004587E0: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x004587E4: lw          $v0, 0x994($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X994);
    // 0x004587E8: beq         $v0, $zero, L_004589EC
    if (ctx->r2 == 0) {
        // 0x004587EC: nop
    
            goto L_004589EC;
    }
    // 0x004587EC: nop

    // 0x004587F0: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x004587F4: lw          $v0, 0x9B4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X9B4);
    // 0x004587F8: bne         $v0, $zero, L_004589EC
    if (ctx->r2 != 0) {
        // 0x004587FC: nop
    
            goto L_004589EC;
    }
    // 0x004587FC: nop

    // 0x00458800: bne         $s2, $zero, L_004589FC
    if (ctx->r18 != 0) {
        // 0x00458804: addu        $a0, $s4, $zero
        ctx->r4 = ADD32(ctx->r20, 0);
            goto L_004589FC;
    }
    // 0x00458804: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    // 0x00458808: addu        $a1, $s5, $zero
    ctx->r5 = ADD32(ctx->r21, 0);
    // 0x0045880C: addiu       $a2, $sp, 0x48
    ctx->r6 = ADD32(ctx->r29, 0X48);
    // 0x00458810: addiu       $s0, $sp, 0x38
    ctx->r16 = ADD32(ctx->r29, 0X38);
    // 0x00458814: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    // 0x00458818: addiu       $v0, $sp, 0x20
    ctx->r2 = ADD32(ctx->r29, 0X20);
    // 0x0045881C: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x00458820: addiu       $v0, $sp, 0x4C
    ctx->r2 = ADD32(ctx->r29, 0X4C);
    // 0x00458824: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x00458828: addiu       $v0, $sp, 0x28
    ctx->r2 = ADD32(ctx->r29, 0X28);
    // 0x0045882C: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x00458830: addiu       $v0, $sp, 0x30
    ctx->r2 = ADD32(ctx->r29, 0X30);
    // 0x00458834: jal         0x00425D94
    // 0x00458838: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    func_00425D94(rdram, ctx);
        goto after_23;
    // 0x00458838: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    after_23:
    // 0x0045883C: bne         $v0, $zero, L_004589EC
    if (ctx->r2 != 0) {
        // 0x00458840: nop
    
            goto L_004589EC;
    }
    // 0x00458840: nop

    // 0x00458844: lw          $v0, 0x48($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X48);
    // 0x00458848: beq         $v0, $zero, L_004589EC
    if (ctx->r2 == 0) {
        // 0x0045884C: nop
    
            goto L_004589EC;
    }
    // 0x0045884C: nop

    // 0x00458850: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x00458854: addiu       $a1, $a1, 0x45CC
    ctx->r5 = ADD32(ctx->r5, 0X45CC);
    // 0x00458858: jal         0x00426C74
    // 0x0045885C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00426C74(rdram, ctx);
        goto after_24;
    // 0x0045885C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_24:
    // 0x00458860: bne         $v0, $zero, L_004589EC
    if (ctx->r2 != 0) {
        // 0x00458864: nop
    
            goto L_004589EC;
    }
    // 0x00458864: nop

    // 0x00458868: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x0045886C: lw          $v0, 0x2014($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2014);
    // 0x00458870: lw          $s0, 0x4C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X4C);
    // 0x00458874: beq         $v0, $zero, L_00458894
    if (ctx->r2 == 0) {
        // 0x00458878: nop
    
            goto L_00458894;
    }
    // 0x00458878: nop

    // 0x0045887C: jal         0x002053A8
    // 0x00458880: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_002053A8(rdram, ctx);
        goto after_25;
    // 0x00458880: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_25:
    // 0x00458884: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x00458888: lw          $a1, 0x2014($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X2014);
    // 0x0045888C: jal         0x002052D8
    // 0x00458890: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_002052D8(rdram, ctx);
        goto after_26;
    // 0x00458890: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_26:
L_00458894:
    // 0x00458894: bne         $s0, $zero, L_004588A8
    if (ctx->r16 != 0) {
        // 0x00458898: sll         $s0, $s0, 8
        ctx->r16 = S32(ctx->r16 << 8);
            goto L_004588A8;
    }
    // 0x00458898: sll         $s0, $s0, 8
    ctx->r16 = S32(ctx->r16 << 8);
    // 0x0045889C: lui         $v0, 0x800F
    ctx->r2 = S32(0X800F << 16);
    // 0x004588A0: lw          $v0, 0x70A8($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X70A8);
    // 0x004588A4: addiu       $s0, $v0, 0x688
    ctx->r16 = ADD32(ctx->r2, 0X688);
L_004588A8:
    // 0x004588A8: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x004588AC: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x004588B0: lui         $a3, 0x800C
    ctx->r7 = S32(0X800C << 16);
    // 0x004588B4: addiu       $a3, $a3, 0x13F0
    ctx->r7 = ADD32(ctx->r7, 0X13F0);
    // 0x004588B8: jal         0x00204EDC
    // 0x004588BC: addiu       $a2, $zero, 0x33
    ctx->r6 = ADD32(0, 0X33);
    func_00204EDC(rdram, ctx);
        goto after_27;
    // 0x004588BC: addiu       $a2, $zero, 0x33
    ctx->r6 = ADD32(0, 0X33);
    after_27:
    // 0x004588C0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x004588C4: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
    // 0x004588C8: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x004588CC: sw          $v0, 0x2014($at)
    MEM_W(0X2014, ctx->r1) = ctx->r2;
    // 0x004588D0: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x004588D4: sw          $a0, 0x201C($at)
    MEM_W(0X201C, ctx->r1) = ctx->r4;
    // 0x004588D8: jal         0x00266C5C
    // 0x004588DC: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    func_00266C5C(rdram, ctx);
        goto after_28;
    // 0x004588DC: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    after_28:
    // 0x004588E0: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    // 0x004588E4: addu        $a1, $s5, $zero
    ctx->r5 = ADD32(ctx->r21, 0);
    // 0x004588E8: lw          $a3, 0x4C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X4C);
    // 0x004588EC: lui         $a2, 0x800C
    ctx->r6 = S32(0X800C << 16);
    // 0x004588F0: lw          $a2, 0x201C($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X201C);
    // 0x004588F4: jal         0x004264D0
    // 0x004588F8: sll         $a3, $a3, 8
    ctx->r7 = S32(ctx->r7 << 8);
    entry_004264D0(rdram, ctx);
        goto after_29;
    // 0x004588F8: sll         $a3, $a3, 8
    ctx->r7 = S32(ctx->r7 << 8);
    after_29:
    // 0x004588FC: bne         $v0, $zero, L_00458974
    if (ctx->r2 != 0) {
        // 0x00458900: nop
    
            goto L_00458974;
    }
    // 0x00458900: nop

    // 0x00458904: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x00458908: lw          $a0, 0x201C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X201C);
    // 0x0045890C: lw          $a1, 0x0($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X0);
    // 0x00458910: bne         $a1, $s7, L_00458974
    if (ctx->r5 != ctx->r23) {
        // 0x00458914: addiu       $a1, $a1, -0x4
        ctx->r5 = ADD32(ctx->r5, -0X4);
            goto L_00458974;
    }
    // 0x00458914: addiu       $a1, $a1, -0x4
    ctx->r5 = ADD32(ctx->r5, -0X4);
    // 0x00458918: jal         0x00426D98
    // 0x0045891C: addiu       $a2, $zero, 0xB
    ctx->r6 = ADD32(0, 0XB);
    entry_00426D98(rdram, ctx);
        goto after_30;
    // 0x0045891C: addiu       $a2, $zero, 0xB
    ctx->r6 = ADD32(0, 0XB);
    after_30:
    // 0x00458920: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x00458924: lw          $a0, 0x201C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X201C);
    // 0x00458928: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x0045892C: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x00458930: lw          $v1, -0x4($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X4);
    // 0x00458934: bne         $v0, $v1, L_00458974
    if (ctx->r2 != ctx->r3) {
        // 0x00458938: nop
    
            goto L_00458974;
    }
    // 0x00458938: nop

    // 0x0045893C: lui         $v1, 0x800F
    ctx->r3 = S32(0X800F << 16);
    // 0x00458940: lw          $v1, 0x70A8($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X70A8);
    // 0x00458944: lw          $v0, 0x4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X4);
    // 0x00458948: bne         $v1, $v0, L_00458974
    if (ctx->r3 != ctx->r2) {
        // 0x0045894C: nop
    
            goto L_00458974;
    }
    // 0x0045894C: nop

    // 0x00458950: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x00458954: addiu       $a0, $a0, -0x61D4
    ctx->r4 = ADD32(ctx->r4, -0X61D4);
    // 0x00458958: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x0045895C: lw          $a2, 0x1C($s6)
    ctx->r6 = MEM_W(ctx->r22, 0X1C);
    // 0x00458960: lw          $a3, 0x20($s6)
    ctx->r7 = MEM_W(ctx->r22, 0X20);
    // 0x00458964: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x00458968: addiu       $a1, $a1, -0x481C
    ctx->r5 = ADD32(ctx->r5, -0X481C);
    // 0x0045896C: j           L_0041FA38
    // 0x00458970: nop

    entry_0041FA38(rdram, ctx);
    return;
    // 0x00458970: nop

L_00458974:
    // 0x00458974: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x00458978: lw          $v0, 0x2010($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2010);
    // 0x0045897C: bne         $v0, $zero, L_00458994
    if (ctx->r2 != 0) {
        // 0x00458980: addiu       $s2, $zero, 0x1
        ctx->r18 = ADD32(0, 0X1);
            goto L_00458994;
    }
    // 0x00458980: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
    // 0x00458984: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x00458988: lw          $v0, 0x2014($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2014);
    // 0x0045898C: beq         $v0, $zero, L_0045899C
    if (ctx->r2 == 0) {
        // 0x00458990: nop
    
            goto L_0045899C;
    }
    // 0x00458990: nop

L_00458994:
    // 0x00458994: jal         0x002053A8
    // 0x00458998: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_002053A8(rdram, ctx);
        goto after_31;
    // 0x00458998: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_31:
L_0045899C:
    // 0x0045899C: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x004589A0: lw          $a1, 0x2010($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X2010);
    // 0x004589A4: beq         $a1, $zero, L_004589B4
    if (ctx->r5 == 0) {
        // 0x004589A8: nop
    
            goto L_004589B4;
    }
    // 0x004589A8: nop

    // 0x004589AC: jal         0x002052D8
    // 0x004589B0: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_002052D8(rdram, ctx);
        goto after_32;
    // 0x004589B0: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_32:
L_004589B4:
    // 0x004589B4: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x004589B8: lw          $a1, 0x2014($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X2014);
    // 0x004589BC: beq         $a1, $zero, L_004589CC
    if (ctx->r5 == 0) {
        // 0x004589C0: nop
    
            goto L_004589CC;
    }
    // 0x004589C0: nop

    // 0x004589C4: jal         0x002052D8
    // 0x004589C8: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_002052D8(rdram, ctx);
        goto after_33;
    // 0x004589C8: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_33:
L_004589CC:
    // 0x004589CC: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x004589D0: sw          $zero, 0x2010($at)
    MEM_W(0X2010, ctx->r1) = 0;
    // 0x004589D4: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x004589D8: sw          $zero, 0x2014($at)
    MEM_W(0X2014, ctx->r1) = 0;
    // 0x004589DC: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x004589E0: sw          $zero, 0x2018($at)
    MEM_W(0X2018, ctx->r1) = 0;
    // 0x004589E4: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x004589E8: sw          $zero, 0x201C($at)
    MEM_W(0X201C, ctx->r1) = 0;
L_004589EC:
    // 0x004589EC: beq         $s2, $zero, L_00458A44
    if (ctx->r18 == 0) {
        // 0x004589F0: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_00458A44;
    }
    // 0x004589F0: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x004589F4: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x004589F8: lw          $v0, 0x9B4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X9B4);
L_004589FC:
    // 0x004589FC: lui         $v1, 0x44
    ctx->r3 = S32(0X44 << 16);
    // 0x00458A00: addiu       $v1, $v1, -0x49F0
    ctx->r3 = ADD32(ctx->r3, -0X49F0);
    // 0x00458A04: beq         $v0, $zero, L_00458A14
    if (ctx->r2 == 0) {
        // 0x00458A08: nop
    
            goto L_00458A14;
    }
    // 0x00458A08: nop

    // 0x00458A0C: lui         $v1, 0x44
    ctx->r3 = S32(0X44 << 16);
    // 0x00458A10: addiu       $v1, $v1, -0x4A38
    ctx->r3 = ADD32(ctx->r3, -0X4A38);
L_00458A14:
    // 0x00458A14: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x00458A18: addiu       $a0, $a0, -0x61D4
    ctx->r4 = ADD32(ctx->r4, -0X61D4);
    // 0x00458A1C: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    // 0x00458A20: lw          $a2, 0x1C($s6)
    ctx->r6 = MEM_W(ctx->r22, 0X1C);
    // 0x00458A24: lw          $a3, 0x20($s6)
    ctx->r7 = MEM_W(ctx->r22, 0X20);
    // 0x00458A28: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x00458A2C: addiu       $a1, $a1, -0x3EB0
    ctx->r5 = ADD32(ctx->r5, -0X3EB0);
    // 0x00458A30: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x00458A34: sw          $s5, 0x988($at)
    MEM_W(0X988, ctx->r1) = ctx->r21;
    // 0x00458A38: jal         0x00416644
    // 0x00458A3C: nop

    func_00416644(rdram, ctx);
        goto after_34;
    // 0x00458A3C: nop

    after_34:
    // 0x00458A40: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_00458A44:
    // 0x00458A44: lw          $ra, 0x70($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X70);
    // 0x00458A48: lw          $s7, 0x6C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X6C);
    // 0x00458A4C: lw          $s6, 0x68($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X68);
    // 0x00458A50: lw          $s5, 0x64($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X64);
    // 0x00458A54: lw          $s4, 0x60($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X60);
    // 0x00458A58: lw          $s3, 0x5C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X5C);
    // 0x00458A5C: lw          $s2, 0x58($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X58);
    // 0x00458A60: lw          $s1, 0x54($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X54);
    // 0x00458A64: lw          $s0, 0x50($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X50);
    // 0x00458A68: jr          $ra
    // 0x00458A6C: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
    return;
    // 0x00458A6C: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
;}
RECOMP_FUNC void func_00258A98(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00258A98: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00258A9C: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x00258AA0: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x00258AA4: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00258AA8: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x00258AAC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x00258AB0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00258AB4: lw          $s0, 0x1A8($s2)
    ctx->r16 = MEM_W(ctx->r18, 0X1A8);
    // 0x00258AB8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00258ABC: sw          $v0, 0xB2C($s0)
    MEM_W(0XB2C, ctx->r16) = ctx->r2;
    // 0x00258AC0: sw          $zero, 0xB38($s0)
    MEM_W(0XB38, ctx->r16) = 0;
    // 0x00258AC4: sw          $zero, 0xB30($s0)
    MEM_W(0XB30, ctx->r16) = 0;
    // 0x00258AC8: lb          $v0, 0xC7($s1)
    ctx->r2 = MEM_B(ctx->r17, 0XC7);
    // 0x00258ACC: sw          $zero, 0x10C($s1)
    MEM_W(0X10C, ctx->r17) = 0;
    // 0x00258AD0: beq         $v0, $zero, L_00258B5C
    if (ctx->r2 == 0) {
        // 0x00258AD4: sw          $zero, 0x110($s1)
        MEM_W(0X110, ctx->r17) = 0;
            goto L_00258B5C;
    }
    // 0x00258AD4: sw          $zero, 0x110($s1)
    MEM_W(0X110, ctx->r17) = 0;
    // 0x00258AD8: lh          $v0, 0x996($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X996);
    // 0x00258ADC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x00258AE0: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00258AE4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x00258AE8: lw          $v0, -0x9E8($at)
    ctx->r2 = MEM_W(ctx->r1, -0X9E8);
    // 0x00258AEC: lw          $v0, 0x14($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X14);
    // 0x00258AF0: andi        $v0, $v0, 0x4
    ctx->r2 = ctx->r2 & 0X4;
    // 0x00258AF4: beql        $v0, $zero, L_00258B4C
    if (ctx->r2 == 0) {
        // 0x00258AF8: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_00258B4C;
    }
    goto skip_0;
    // 0x00258AF8: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    skip_0:
    // 0x00258AFC: jal         0x00257EA0
    // 0x00258B00: nop

    func_00257EA0(rdram, ctx);
        goto after_0;
    // 0x00258B00: nop

    after_0:
    // 0x00258B04: beq         $v0, $zero, L_00258B4C
    if (ctx->r2 == 0) {
        // 0x00258B08: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_00258B4C;
    }
    // 0x00258B08: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x00258B0C: lh          $a1, 0x996($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X996);
    // 0x00258B10: jal         0x0024E700
    // 0x00258B14: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_0024E700(rdram, ctx);
        goto after_1;
    // 0x00258B14: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x00258B18: beq         $v0, $zero, L_00258B4C
    if (ctx->r2 == 0) {
        // 0x00258B1C: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_00258B4C;
    }
    // 0x00258B1C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x00258B20: lw          $v0, 0xA64($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XA64);
    // 0x00258B24: andi        $v0, $v0, 0x2000
    ctx->r2 = ctx->r2 & 0X2000;
    // 0x00258B28: beq         $v0, $zero, L_00258B50
    if (ctx->r2 == 0) {
        // 0x00258B2C: addu        $a1, $s1, $zero
        ctx->r5 = ADD32(ctx->r17, 0);
            goto L_00258B50;
    }
    // 0x00258B2C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x00258B30: lw          $v0, 0x518($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X518);
    // 0x00258B34: lbu         $v0, 0x3E($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X3E);
    // 0x00258B38: bne         $v0, $zero, L_00258B50
    if (ctx->r2 != 0) {
        // 0x00258B3C: nop
    
            goto L_00258B50;
    }
    // 0x00258B3C: nop

    // 0x00258B40: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x00258B44: j           L_00258B54
    // 0x00258B48: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
        goto L_00258B54;
    // 0x00258B48: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
L_00258B4C:
    // 0x00258B4C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
L_00258B50:
    // 0x00258B50: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
L_00258B54:
    // 0x00258B54: jal         0x00243414
    // 0x00258B58: nop

    func_00243414(rdram, ctx);
        goto after_2;
    // 0x00258B58: nop

    after_2:
L_00258B5C:
    // 0x00258B5C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x00258B60: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x00258B64: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00258B68: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00258B6C: jr          $ra
    // 0x00258B70: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00258B70: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_002602C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002602C4: lbu         $v1, 0xC8($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0XC8);
    // 0x002602C8: addu        $v1, $v1, $a2
    ctx->r3 = ADD32(ctx->r3, ctx->r6);
    // 0x002602CC: slti        $v0, $v1, 0x100
    ctx->r2 = SIGNED(ctx->r3) < 0X100 ? 1 : 0;
    // 0x002602D0: beql        $v0, $zero, L_002602D8
    if (ctx->r2 == 0) {
        // 0x002602D4: addiu       $v1, $zero, 0xFF
        ctx->r3 = ADD32(0, 0XFF);
            goto L_002602D8;
    }
    goto skip_0;
    // 0x002602D4: addiu       $v1, $zero, 0xFF
    ctx->r3 = ADD32(0, 0XFF);
    skip_0:
L_002602D8:
    // 0x002602D8: jr          $ra
    // 0x002602DC: sb          $v1, 0xC8($a1)
    MEM_B(0XC8, ctx->r5) = ctx->r3;
    return;
    // 0x002602DC: sb          $v1, 0xC8($a1)
    MEM_B(0XC8, ctx->r5) = ctx->r3;
;}
RECOMP_FUNC void func_002438C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002438C0: addiu       $sp, $sp, -0x90
    ctx->r29 = ADD32(ctx->r29, -0X90);
    // 0x002438C4: sw          $s3, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r19;
    // 0x002438C8: addu        $s3, $a0, $zero
    ctx->r19 = ADD32(ctx->r4, 0);
    // 0x002438CC: sw          $s2, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r18;
    // 0x002438D0: addu        $s2, $a1, $zero
    ctx->r18 = ADD32(ctx->r5, 0);
    // 0x002438D4: sw          $ra, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r31;
    // 0x002438D8: sw          $s5, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r21;
    // 0x002438DC: sw          $s4, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r20;
    // 0x002438E0: sw          $s1, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r17;
    // 0x002438E4: sw          $s0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r16;
    // 0x002438E8: sdc1        $f20, 0x88($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X88, ctx->r29);
    // 0x002438EC: lw          $v0, 0x4($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X4);
    // 0x002438F0: bne         $v0, $zero, L_00243900
    if (ctx->r2 != 0) {
        // 0x002438F4: addu        $s0, $a2, $zero
        ctx->r16 = ADD32(ctx->r6, 0);
            goto L_00243900;
    }
    // 0x002438F4: addu        $s0, $a2, $zero
    ctx->r16 = ADD32(ctx->r6, 0);
    // 0x002438F8: j           L_002439E4
    // 0x002438FC: addiu       $s1, $zero, 0x6
    ctx->r17 = ADD32(0, 0X6);
        goto L_002439E4;
    // 0x002438FC: addiu       $s1, $zero, 0x6
    ctx->r17 = ADD32(0, 0X6);
L_00243900:
    // 0x00243900: bne         $s0, $zero, L_0024391C
    if (ctx->r16 != 0) {
        // 0x00243904: nop
    
            goto L_0024391C;
    }
    // 0x00243904: nop

    // 0x00243908: lb          $v0, 0x94($s2)
    ctx->r2 = MEM_B(ctx->r18, 0X94);
    // 0x0024390C: beq         $v0, $zero, L_002439E4
    if (ctx->r2 == 0) {
        // 0x00243910: addiu       $s1, $zero, 0x3
        ctx->r17 = ADD32(0, 0X3);
            goto L_002439E4;
    }
    // 0x00243910: addiu       $s1, $zero, 0x3
    ctx->r17 = ADD32(0, 0X3);
    // 0x00243914: j           L_002439E4
    // 0x00243918: addiu       $s1, $zero, 0x4
    ctx->r17 = ADD32(0, 0X4);
        goto L_002439E4;
    // 0x00243918: addiu       $s1, $zero, 0x4
    ctx->r17 = ADD32(0, 0X4);
L_0024391C:
    // 0x0024391C: lw          $v0, 0x68($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X68);
    // 0x00243920: beq         $s0, $v0, L_002439E4
    if (ctx->r16 == ctx->r2) {
        // 0x00243924: addiu       $s1, $zero, 0x2
        ctx->r17 = ADD32(0, 0X2);
            goto L_002439E4;
    }
    // 0x00243924: addiu       $s1, $zero, 0x2
    ctx->r17 = ADD32(0, 0X2);
    // 0x00243928: lw          $v0, 0x14($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X14);
    // 0x0024392C: lw          $v1, 0x0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X0);
    // 0x00243930: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x00243934: bnel        $v1, $v0, L_00243944
    if (ctx->r3 != ctx->r2) {
        // 0x00243938: addiu       $v0, $zero, 0x64F
        ctx->r2 = ADD32(0, 0X64F);
            goto L_00243944;
    }
    goto skip_0;
    // 0x00243938: addiu       $v0, $zero, 0x64F
    ctx->r2 = ADD32(0, 0X64F);
    skip_0:
    // 0x0024393C: j           L_002439E4
    // 0x00243940: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
        goto L_002439E4;
    // 0x00243940: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
L_00243944:
    // 0x00243944: lhu         $v1, 0xB8($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0XB8);
    // 0x00243948: beq         $v1, $v0, L_002439E4
    if (ctx->r3 == ctx->r2) {
        // 0x0024394C: addiu       $s1, $zero, 0x7
        ctx->r17 = ADD32(0, 0X7);
            goto L_002439E4;
    }
    // 0x0024394C: addiu       $s1, $zero, 0x7
    ctx->r17 = ADD32(0, 0X7);
    // 0x00243950: lui         $v0, 0x8011
    ctx->r2 = S32(0X8011 << 16);
    // 0x00243954: lw          $v0, 0x1C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1C);
    // 0x00243958: bne         $v0, $zero, L_002439E4
    if (ctx->r2 != 0) {
        // 0x0024395C: addu        $s1, $zero, $zero
        ctx->r17 = ADD32(0, 0);
            goto L_002439E4;
    }
    // 0x0024395C: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x00243960: lw          $v0, 0xD4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XD4);
    // 0x00243964: lui         $v1, 0x30
    ctx->r3 = S32(0X30 << 16);
    // 0x00243968: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x0024396C: beq         $v0, $zero, L_002439C4
    if (ctx->r2 == 0) {
        // 0x00243970: nop
    
            goto L_002439C4;
    }
    // 0x00243970: nop

    // 0x00243974: lw          $a0, 0x1A8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X1A8);
    // 0x00243978: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x0024397C: lwc1        $f1, 0xAAC($a0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r4, 0XAAC);
    // 0x00243980: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x00243984: nop

    // 0x00243988: bc1f        L_002439AC
    if (!c1cs) {
        // 0x0024398C: addiu       $v0, $zero, 0xCA
        ctx->r2 = ADD32(0, 0XCA);
            goto L_002439AC;
    }
    // 0x0024398C: addiu       $v0, $zero, 0xCA
    ctx->r2 = ADD32(0, 0XCA);
    // 0x00243990: lhu         $v1, 0xB8($s3)
    ctx->r3 = MEM_HU(ctx->r19, 0XB8);
    // 0x00243994: bne         $v1, $v0, L_002439E4
    if (ctx->r3 != ctx->r2) {
        // 0x00243998: addiu       $s1, $zero, 0x1
        ctx->r17 = ADD32(0, 0X1);
            goto L_002439E4;
    }
    // 0x00243998: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
    // 0x0024399C: lh          $v1, 0x996($a0)
    ctx->r3 = MEM_H(ctx->r4, 0X996);
    // 0x002439A0: addiu       $v0, $zero, 0x14
    ctx->r2 = ADD32(0, 0X14);
    // 0x002439A4: bne         $v1, $v0, L_002439E8
    if (ctx->r3 != ctx->r2) {
        // 0x002439A8: addiu       $v1, $s1, -0x1
        ctx->r3 = ADD32(ctx->r17, -0X1);
            goto L_002439E8;
    }
    // 0x002439A8: addiu       $v1, $s1, -0x1
    ctx->r3 = ADD32(ctx->r17, -0X1);
L_002439AC:
    // 0x002439AC: lw          $v0, 0xB38($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XB38);
    // 0x002439B0: bne         $v0, $s3, L_002439C4
    if (ctx->r2 != ctx->r19) {
        // 0x002439B4: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_002439C4;
    }
    // 0x002439B4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x002439B8: lw          $v1, 0xB2C($a0)
    ctx->r3 = MEM_W(ctx->r4, 0XB2C);
    // 0x002439BC: beq         $v1, $v0, L_002439E4
    if (ctx->r3 == ctx->r2) {
        // 0x002439C0: addiu       $s1, $zero, 0x1
        ctx->r17 = ADD32(0, 0X1);
            goto L_002439E4;
    }
    // 0x002439C0: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
L_002439C4:
    // 0x002439C4: lw          $v0, 0x27C($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X27C);
    // 0x002439C8: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x002439CC: beq         $v0, $zero, L_002439E0
    if (ctx->r2 == 0) {
        // 0x002439D0: addiu       $v0, $zero, 0xCA
        ctx->r2 = ADD32(0, 0XCA);
            goto L_002439E0;
    }
    // 0x002439D0: addiu       $v0, $zero, 0xCA
    ctx->r2 = ADD32(0, 0XCA);
    // 0x002439D4: lhu         $v1, 0xB8($s3)
    ctx->r3 = MEM_HU(ctx->r19, 0XB8);
    // 0x002439D8: bne         $v1, $v0, L_002439E4
    if (ctx->r3 != ctx->r2) {
        // 0x002439DC: addiu       $s1, $zero, 0x1
        ctx->r17 = ADD32(0, 0X1);
            goto L_002439E4;
    }
    // 0x002439DC: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
L_002439E0:
    // 0x002439E0: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
L_002439E4:
    // 0x002439E4: addiu       $v1, $s1, -0x1
    ctx->r3 = ADD32(ctx->r17, -0X1);
L_002439E8:
    // 0x002439E8: sltiu       $v0, $v1, 0x7
    ctx->r2 = ctx->r3 < 0X7 ? 1 : 0;
    // 0x002439EC: beq         $v0, $zero, L_00243B6C
    if (ctx->r2 == 0) {
        // 0x002439F0: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_00243B6C;
    }
    // 0x002439F0: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x002439F4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002439F8: addu        $at, $at, $v0
    gpr jr_addend_00243A00 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x002439FC: lw          $v0, 0x68C8($at)
    ctx->r2 = ADD32(ctx->r1, 0X68C8);
    // 0x00243A00: jr          $v0
    // 0x00243A04: nop

    switch (jr_addend_00243A00 >> 2) {
        case 0: goto L_00243B2C; break;
        case 1: goto L_00243B6C; break;
        case 2: goto L_00243A58; break;
        case 3: goto L_00243A2C; break;
        case 4: goto L_00243B6C; break;
        case 5: goto L_00243A08; break;
        case 6: goto L_00243A7C; break;
        default: switch_error(__func__, 0x00243A00, 0x800A68C8);
    }
    // 0x00243A04: nop

L_00243A08:
    // 0x00243A08: lw          $t0, 0x4($s3)
    ctx->r8 = MEM_W(ctx->r19, 0X4);
    // 0x00243A0C: lw          $t1, 0x8($s3)
    ctx->r9 = MEM_W(ctx->r19, 0X8);
    // 0x00243A10: lw          $t2, 0xC($s3)
    ctx->r10 = MEM_W(ctx->r19, 0XC);
    // 0x00243A14: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
    // 0x00243A18: sw          $t1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r9;
    // 0x00243A1C: sw          $t2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r10;
    // 0x00243A20: lw          $v0, 0x10($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X10);
    // 0x00243A24: j           L_00243B8C
    // 0x00243A28: sw          $v0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r2;
        goto L_00243B8C;
    // 0x00243A28: sw          $v0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r2;
L_00243A2C:
    // 0x00243A2C: jal         0x0028479C
    // 0x00243A30: addiu       $a0, $s2, 0x94
    ctx->r4 = ADD32(ctx->r18, 0X94);
    func_0028479C(rdram, ctx);
        goto after_0;
    // 0x00243A30: addiu       $a0, $s2, 0x94
    ctx->r4 = ADD32(ctx->r18, 0X94);
    after_0:
    // 0x00243A34: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x00243A38: lw          $t1, 0x4($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X4);
    // 0x00243A3C: lw          $t2, 0x8($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X8);
    // 0x00243A40: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
    // 0x00243A44: sw          $t1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r9;
    // 0x00243A48: sw          $t2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r10;
    // 0x00243A4C: lw          $v0, 0xC($v0)
    ctx->r2 = MEM_W(ctx->r2, 0XC);
    // 0x00243A50: j           L_00243B8C
    // 0x00243A54: sw          $v0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r2;
        goto L_00243B8C;
    // 0x00243A54: sw          $v0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r2;
L_00243A58:
    // 0x00243A58: lw          $t0, 0xAC($s2)
    ctx->r8 = MEM_W(ctx->r18, 0XAC);
    // 0x00243A5C: lw          $t1, 0xB0($s2)
    ctx->r9 = MEM_W(ctx->r18, 0XB0);
    // 0x00243A60: lw          $t2, 0xB4($s2)
    ctx->r10 = MEM_W(ctx->r18, 0XB4);
    // 0x00243A64: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
    // 0x00243A68: sw          $t1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r9;
    // 0x00243A6C: sw          $t2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r10;
    // 0x00243A70: lw          $v0, 0xB8($s2)
    ctx->r2 = MEM_W(ctx->r18, 0XB8);
    // 0x00243A74: j           L_00243B8C
    // 0x00243A78: sw          $v0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r2;
        goto L_00243B8C;
    // 0x00243A78: sw          $v0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r2;
L_00243A7C:
    // 0x00243A7C: lw          $a2, 0x80($s2)
    ctx->r6 = MEM_W(ctx->r18, 0X80);
    // 0x00243A80: addiu       $s4, $sp, 0x20
    ctx->r20 = ADD32(ctx->r29, 0X20);
    // 0x00243A84: beq         $a2, $zero, L_00243AB0
    if (ctx->r6 == 0) {
        // 0x00243A88: addiu       $s5, $sp, 0x60
        ctx->r21 = ADD32(ctx->r29, 0X60);
            goto L_00243AB0;
    }
    // 0x00243A88: addiu       $s5, $sp, 0x60
    ctx->r21 = ADD32(ctx->r29, 0X60);
    // 0x00243A8C: addiu       $a0, $sp, 0x40
    ctx->r4 = ADD32(ctx->r29, 0X40);
    // 0x00243A90: addiu       $a1, $s0, 0x4
    ctx->r5 = ADD32(ctx->r16, 0X4);
    // 0x00243A94: jal         0x0020EF2C
    // 0x00243A98: addiu       $a2, $a2, 0x4
    ctx->r6 = ADD32(ctx->r6, 0X4);
    func_0020EF2C(rdram, ctx);
        goto after_1;
    // 0x00243A98: addiu       $a2, $a2, 0x4
    ctx->r6 = ADD32(ctx->r6, 0X4);
    after_1:
    // 0x00243A9C: sw          $zero, 0x44($sp)
    MEM_W(0X44, ctx->r29) = 0;
    // 0x00243AA0: jal         0x0020F040
    // 0x00243AA4: addiu       $a0, $sp, 0x40
    ctx->r4 = ADD32(ctx->r29, 0X40);
    func_0020F040(rdram, ctx);
        goto after_2;
    // 0x00243AA4: addiu       $a0, $sp, 0x40
    ctx->r4 = ADD32(ctx->r29, 0X40);
    after_2:
    // 0x00243AA8: j           L_00243ABC
    // 0x00243AAC: nop

        goto L_00243ABC;
    // 0x00243AAC: nop

L_00243AB0:
    // 0x00243AB0: sw          $zero, 0x40($sp)
    MEM_W(0X40, ctx->r29) = 0;
    // 0x00243AB4: sw          $zero, 0x44($sp)
    MEM_W(0X44, ctx->r29) = 0;
    // 0x00243AB8: sw          $zero, 0x48($sp)
    MEM_W(0X48, ctx->r29) = 0;
L_00243ABC:
    // 0x00243ABC: jal         0x002672C8
    // 0x00243AC0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_002672C8(rdram, ctx);
        goto after_3;
    // 0x00243AC0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x00243AC4: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x00243AC8: jal         0x002672C8
    // 0x00243ACC: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    func_002672C8(rdram, ctx);
        goto after_4;
    // 0x00243ACC: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    after_4:
    // 0x00243AD0: add.s       $f20, $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = ctx->f20.fl + ctx->f0.fl;
    // 0x00243AD4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00243AD8: lwc1        $f0, 0x68E4($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X68E4);
    // 0x00243ADC: add.s       $f20, $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = ctx->f20.fl + ctx->f0.fl;
    // 0x00243AE0: addiu       $a0, $sp, 0x40
    ctx->r4 = ADD32(ctx->r29, 0X40);
    // 0x00243AE4: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x00243AE8: jal         0x0020EF60
    // 0x00243AEC: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    func_0020EF60(rdram, ctx);
        goto after_5;
    // 0x00243AEC: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    after_5:
    // 0x00243AF0: addiu       $a0, $sp, 0x50
    ctx->r4 = ADD32(ctx->r29, 0X50);
    // 0x00243AF4: addiu       $a1, $s0, 0x4
    ctx->r5 = ADD32(ctx->r16, 0X4);
    // 0x00243AF8: jal         0x0020EEF8
    // 0x00243AFC: addiu       $a2, $sp, 0x40
    ctx->r6 = ADD32(ctx->r29, 0X40);
    func_0020EEF8(rdram, ctx);
        goto after_6;
    // 0x00243AFC: addiu       $a2, $sp, 0x40
    ctx->r6 = ADD32(ctx->r29, 0X40);
    after_6:
    // 0x00243B00: sw          $s4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r20;
    // 0x00243B04: sw          $s5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r21;
    // 0x00243B08: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x00243B0C: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x00243B10: lw          $a1, 0x50($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X50);
    // 0x00243B14: lw          $a2, 0x54($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X54);
    // 0x00243B18: lw          $a3, 0x58($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X58);
    // 0x00243B1C: jal         0x002688C8
    // 0x00243B20: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_002688C8(rdram, ctx);
        goto after_7;
    // 0x00243B20: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_7:
    // 0x00243B24: j           L_00243B8C
    // 0x00243B28: nop

        goto L_00243B8C;
    // 0x00243B28: nop

L_00243B2C:
    // 0x00243B2C: lw          $v0, 0x10($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X10);
    // 0x00243B30: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x00243B34: lw          $v0, 0x30($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X30);
    // 0x00243B38: lw          $v1, 0xC($v0)
    ctx->r3 = MEM_W(ctx->r2, 0XC);
    // 0x00243B3C: addiu       $v0, $sp, 0x20
    ctx->r2 = ADD32(ctx->r29, 0X20);
    // 0x00243B40: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x00243B44: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    // 0x00243B48: lw          $v0, 0xC($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC);
    // 0x00243B4C: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x00243B50: lw          $a2, 0x4($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X4);
    // 0x00243B54: lw          $a3, 0x8($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X8);
    // 0x00243B58: lw          $a1, 0x84($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X84);
    // 0x00243B5C: jal         0x00239C28
    // 0x00243B60: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    func_00239C28(rdram, ctx);
        goto after_8;
    // 0x00243B60: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    after_8:
    // 0x00243B64: bne         $v0, $zero, L_00243B8C
    if (ctx->r2 != 0) {
        // 0x00243B68: sw          $v0, 0x60($sp)
        MEM_W(0X60, ctx->r29) = ctx->r2;
            goto L_00243B8C;
    }
    // 0x00243B68: sw          $v0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r2;
L_00243B6C:
    // 0x00243B6C: lw          $t0, 0x4($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X4);
    // 0x00243B70: lw          $t1, 0x8($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X8);
    // 0x00243B74: lw          $t2, 0xC($s0)
    ctx->r10 = MEM_W(ctx->r16, 0XC);
    // 0x00243B78: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
    // 0x00243B7C: sw          $t1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r9;
    // 0x00243B80: sw          $t2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r10;
    // 0x00243B84: lw          $v0, 0x10($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X10);
    // 0x00243B88: sw          $v0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r2;
L_00243B8C:
    // 0x00243B8C: lw          $v0, 0x60($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X60);
    // 0x00243B90: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x00243B94: lw          $v0, 0x30($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X30);
    // 0x00243B98: lw          $v1, 0xC($v0)
    ctx->r3 = MEM_W(ctx->r2, 0XC);
    // 0x00243B9C: addiu       $v0, $sp, 0x30
    ctx->r2 = ADD32(ctx->r29, 0X30);
    // 0x00243BA0: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x00243BA4: sw          $v1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r3;
    // 0x00243BA8: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x00243BAC: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    // 0x00243BB0: lw          $a3, 0x28($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X28);
    // 0x00243BB4: jal         0x002399F8
    // 0x00243BB8: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    func_002399F8(rdram, ctx);
        goto after_9;
    // 0x00243BB8: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    after_9:
    // 0x00243BBC: beq         $v0, $zero, L_00243C34
    if (ctx->r2 == 0) {
        // 0x00243BC0: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_00243C34;
    }
    // 0x00243BC0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00243BC4: lw          $a0, 0x10($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X10);
    // 0x00243BC8: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    // 0x00243BCC: lw          $a2, 0x38($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X38);
    // 0x00243BD0: jal         0x0026BB9C
    // 0x00243BD4: nop

    func_0026BB9C(rdram, ctx);
        goto after_10;
    // 0x00243BD4: nop

    after_10:
    // 0x00243BD8: beq         $v0, $zero, L_00243BEC
    if (ctx->r2 == 0) {
        // 0x00243BDC: nop
    
            goto L_00243BEC;
    }
    // 0x00243BDC: nop

    // 0x00243BE0: lwc1        $f0, 0x34($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X34);
    // 0x00243BE4: j           L_00243C00
    // 0x00243BE8: swc1        $f0, 0x90($s2)
    MEM_W(0X90, ctx->r18) = ctx->f0.u32l;
        goto L_00243C00;
    // 0x00243BE8: swc1        $f0, 0x90($s2)
    MEM_W(0X90, ctx->r18) = ctx->f0.u32l;
L_00243BEC:
    // 0x00243BEC: lwc1        $f0, 0x34($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X34);
    // 0x00243BF0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00243BF4: lwc1        $f1, 0x68E8($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X68E8);
    // 0x00243BF8: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x00243BFC: swc1        $f0, 0x90($s2)
    MEM_W(0X90, ctx->r18) = ctx->f0.u32l;
L_00243C00:
    // 0x00243C00: addiu       $s0, $sp, 0x30
    ctx->r16 = ADD32(ctx->r29, 0X30);
    // 0x00243C04: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00243C08: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x00243C0C: jal         0x0020EF2C
    // 0x00243C10: addiu       $a2, $s3, 0x4
    ctx->r6 = ADD32(ctx->r19, 0X4);
    func_0020EF2C(rdram, ctx);
        goto after_11;
    // 0x00243C10: addiu       $a2, $s3, 0x4
    ctx->r6 = ADD32(ctx->r19, 0X4);
    after_11:
    // 0x00243C14: jal         0x0020EAA0
    // 0x00243C18: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_0020EAA0(rdram, ctx);
        goto after_12;
    // 0x00243C18: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_12:
    // 0x00243C1C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00243C20: lwc1        $f1, 0x68EC($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X68EC);
    // 0x00243C24: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x00243C28: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00243C2C: j           L_00243C68
    // 0x00243C30: swc1        $f0, 0x8C($s2)
    MEM_W(0X8C, ctx->r18) = ctx->f0.u32l;
        goto L_00243C68;
    // 0x00243C30: swc1        $f0, 0x8C($s2)
    MEM_W(0X8C, ctx->r18) = ctx->f0.u32l;
L_00243C34:
    // 0x00243C34: bne         $s1, $v0, L_00243C68
    if (ctx->r17 != ctx->r2) {
        // 0x00243C38: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_00243C68;
    }
    // 0x00243C38: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x00243C3C: lwc1        $f0, 0x24($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X24);
    // 0x00243C40: swc1        $f0, 0x90($s2)
    MEM_W(0X90, ctx->r18) = ctx->f0.u32l;
    // 0x00243C44: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x00243C48: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    // 0x00243C4C: lw          $a3, 0x28($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X28);
    // 0x00243C50: jal         0x00246310
    // 0x00243C54: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    func_00246310(rdram, ctx);
        goto after_13;
    // 0x00243C54: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    after_13:
    // 0x00243C58: lwc1        $f1, 0x50($s3)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r19, 0X50);
    // 0x00243C5C: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x00243C60: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00243C64: swc1        $f1, 0x8C($s2)
    MEM_W(0X8C, ctx->r18) = ctx->f_odd[(1 - 1) * 2];
L_00243C68:
    // 0x00243C68: lw          $ra, 0x80($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X80);
    // 0x00243C6C: lw          $s5, 0x7C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X7C);
    // 0x00243C70: lw          $s4, 0x78($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X78);
    // 0x00243C74: lw          $s3, 0x74($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X74);
    // 0x00243C78: lw          $s2, 0x70($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X70);
    // 0x00243C7C: lw          $s1, 0x6C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X6C);
    // 0x00243C80: lw          $s0, 0x68($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X68);
    // 0x00243C84: ldc1        $f20, 0x88($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X88);
    // 0x00243C88: jr          $ra
    // 0x00243C8C: addiu       $sp, $sp, 0x90
    ctx->r29 = ADD32(ctx->r29, 0X90);
    return;
    // 0x00243C8C: addiu       $sp, $sp, 0x90
    ctx->r29 = ADD32(ctx->r29, 0X90);
;}
RECOMP_FUNC void func_0041707C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041707C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00417080: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x00417084: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00417088: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x0041708C: lw          $s0, 0x14($a0)
    ctx->r16 = MEM_W(ctx->r4, 0X14);
    // 0x00417090: lw          $v0, 0x18($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X18);
    // 0x00417094: mtc1        $a1, $f20
    ctx->f20.u32l = ctx->r5;
    // 0x00417098: jalr        $v0
    // 0x0041709C: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x0041709C: nop

    after_0:
    // 0x004170A0: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x004170A4: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x004170A8: sltiu       $v0, $a0, 0x9
    ctx->r2 = ctx->r4 < 0X9 ? 1 : 0;
    // 0x004170AC: beq         $v0, $zero, L_004171BC
    if (ctx->r2 == 0) {
        // 0x004170B0: sll         $v0, $a0, 2
        ctx->r2 = S32(ctx->r4 << 2);
            goto L_004171BC;
    }
    // 0x004170B0: sll         $v0, $a0, 2
    ctx->r2 = S32(ctx->r4 << 2);
    // 0x004170B4: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x004170B8: addu        $at, $at, $v0
    gpr jr_addend_004170C0 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x004170BC: lw          $v0, 0xE30($at)
    ctx->r2 = ADD32(ctx->r1, 0XE30);
    // 0x004170C0: jr          $v0
    // 0x004170C4: nop

    switch (jr_addend_004170C0 >> 2) {
        case 0: goto L_004170C8; break;
        case 1: goto L_004170F0; break;
        case 2: goto L_004170F0; break;
        case 3: goto L_004170D0; break;
        case 4: goto L_004170E0; break;
        case 5: goto L_004170F0; break;
        case 6: goto L_00417100; break;
        case 7: goto L_00417140; break;
        case 8: goto L_00417180; break;
        default: switch_error(__func__, 0x004170C0, 0x800C0E30);
    }
    // 0x004170C4: nop

L_004170C8:
    // 0x004170C8: j           L_004171BC
    // 0x004170CC: swc1        $f20, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f20.u32l;
        goto L_004171BC;
    // 0x004170CC: swc1        $f20, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f20.u32l;
L_004170D0:
    // 0x004170D0: trunc.w.s   $f1, $f20
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 20);
    ctx->f_odd[(1 - 1) * 2] = TRUNC_W_S(ctx->f20.fl);
    // 0x004170D4: mfc1        $v0, $f1
    ctx->r2 = (int32_t)ctx->f_odd[(1 - 1) * 2];
    // 0x004170D8: j           L_004171BC
    // 0x004170DC: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
        goto L_004171BC;
    // 0x004170DC: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
L_004170E0:
    // 0x004170E0: trunc.w.s   $f1, $f20
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 20);
    ctx->f_odd[(1 - 1) * 2] = TRUNC_W_S(ctx->f20.fl);
    // 0x004170E4: mfc1        $v0, $f1
    ctx->r2 = (int32_t)ctx->f_odd[(1 - 1) * 2];
    // 0x004170E8: j           L_004171BC
    // 0x004170EC: sh          $v0, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r2;
        goto L_004171BC;
    // 0x004170EC: sh          $v0, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r2;
L_004170F0:
    // 0x004170F0: trunc.w.s   $f1, $f20
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 20);
    ctx->f_odd[(1 - 1) * 2] = TRUNC_W_S(ctx->f20.fl);
    // 0x004170F4: swc1        $f1, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f_odd[(1 - 1) * 2];
    // 0x004170F8: j           L_004171BC
    // 0x004170FC: nop

        goto L_004171BC;
    // 0x004170FC: nop

L_00417100:
    // 0x00417100: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00417104: lwc1        $f0, 0xE54($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0XE54);
    // 0x00417108: c.le.s      $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f0.fl <= ctx->f20.fl;
    // 0x0041710C: nop

    // 0x00417110: bc1tl       L_00417128
    if (c1cs) {
        // 0x00417114: sub.s       $f0, $f20, $f0
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f20.fl - ctx->f0.fl;
            goto L_00417128;
    }
    goto skip_0;
    // 0x00417114: sub.s       $f0, $f20, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f20.fl - ctx->f0.fl;
    skip_0:
    // 0x00417118: trunc.w.s   $f1, $f20
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 20);
    ctx->f_odd[(1 - 1) * 2] = TRUNC_W_S(ctx->f20.fl);
    // 0x0041711C: mfc1        $a1, $f1
    ctx->r5 = (int32_t)ctx->f_odd[(1 - 1) * 2];
    // 0x00417120: j           L_004171BC
    // 0x00417124: sb          $a1, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r5;
        goto L_004171BC;
    // 0x00417124: sb          $a1, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r5;
L_00417128:
    // 0x00417128: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x0041712C: trunc.w.s   $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(1 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x00417130: mfc1        $a1, $f1
    ctx->r5 = (int32_t)ctx->f_odd[(1 - 1) * 2];
    // 0x00417134: or          $a1, $a1, $v0
    ctx->r5 = ctx->r5 | ctx->r2;
    // 0x00417138: j           L_004171BC
    // 0x0041713C: sb          $a1, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r5;
        goto L_004171BC;
    // 0x0041713C: sb          $a1, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r5;
L_00417140:
    // 0x00417140: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00417144: lwc1        $f0, 0xE58($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0XE58);
    // 0x00417148: c.le.s      $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f0.fl <= ctx->f20.fl;
    // 0x0041714C: nop

    // 0x00417150: bc1tl       L_00417168
    if (c1cs) {
        // 0x00417154: sub.s       $f0, $f20, $f0
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f20.fl - ctx->f0.fl;
            goto L_00417168;
    }
    goto skip_1;
    // 0x00417154: sub.s       $f0, $f20, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f20.fl - ctx->f0.fl;
    skip_1:
    // 0x00417158: trunc.w.s   $f1, $f20
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 20);
    ctx->f_odd[(1 - 1) * 2] = TRUNC_W_S(ctx->f20.fl);
    // 0x0041715C: mfc1        $a1, $f1
    ctx->r5 = (int32_t)ctx->f_odd[(1 - 1) * 2];
    // 0x00417160: j           L_004171BC
    // 0x00417164: sh          $a1, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r5;
        goto L_004171BC;
    // 0x00417164: sh          $a1, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r5;
L_00417168:
    // 0x00417168: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x0041716C: trunc.w.s   $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(1 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x00417170: mfc1        $a1, $f1
    ctx->r5 = (int32_t)ctx->f_odd[(1 - 1) * 2];
    // 0x00417174: or          $a1, $a1, $v0
    ctx->r5 = ctx->r5 | ctx->r2;
    // 0x00417178: j           L_004171BC
    // 0x0041717C: sh          $a1, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r5;
        goto L_004171BC;
    // 0x0041717C: sh          $a1, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r5;
L_00417180:
    // 0x00417180: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00417184: lwc1        $f0, 0xE5C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0XE5C);
    // 0x00417188: c.le.s      $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f0.fl <= ctx->f20.fl;
    // 0x0041718C: nop

    // 0x00417190: bc1tl       L_004171A8
    if (c1cs) {
        // 0x00417194: sub.s       $f0, $f20, $f0
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f20.fl - ctx->f0.fl;
            goto L_004171A8;
    }
    goto skip_2;
    // 0x00417194: sub.s       $f0, $f20, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f20.fl - ctx->f0.fl;
    skip_2:
    // 0x00417198: trunc.w.s   $f1, $f20
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 20);
    ctx->f_odd[(1 - 1) * 2] = TRUNC_W_S(ctx->f20.fl);
    // 0x0041719C: mfc1        $a1, $f1
    ctx->r5 = (int32_t)ctx->f_odd[(1 - 1) * 2];
    // 0x004171A0: j           L_004171BC
    // 0x004171A4: sw          $a1, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r5;
        goto L_004171BC;
    // 0x004171A4: sw          $a1, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r5;
L_004171A8:
    // 0x004171A8: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x004171AC: trunc.w.s   $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(1 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x004171B0: mfc1        $a1, $f1
    ctx->r5 = (int32_t)ctx->f_odd[(1 - 1) * 2];
    // 0x004171B4: or          $a1, $a1, $v0
    ctx->r5 = ctx->r5 | ctx->r2;
    // 0x004171B8: sw          $a1, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r5;
L_004171BC:
    // 0x004171BC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x004171C0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x004171C4: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x004171C8: jr          $ra
    // 0x004171CC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x004171CC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_0025E6A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0025E6A0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0025E6A4: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x0025E6A8: lwc1        $f0, 0x64($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X64);
    // 0x0025E6AC: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0025E6B0: lwc1        $f1, 0x6D28($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X6D28);
    // 0x0025E6B4: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x0025E6B8: mtc1        $zero, $f1
    ctx->f_odd[(1 - 1) * 2] = 0;
    // 0x0025E6BC: c.le.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl <= ctx->f1.fl;
    // 0x0025E6C0: nop

    // 0x0025E6C4: bc1f        L_0025E6D4
    if (!c1cs) {
        // 0x0025E6C8: swc1        $f0, 0x64($a1)
        MEM_W(0X64, ctx->r5) = ctx->f0.u32l;
            goto L_0025E6D4;
    }
    // 0x0025E6C8: swc1        $f0, 0x64($a1)
    MEM_W(0X64, ctx->r5) = ctx->f0.u32l;
    // 0x0025E6CC: jal         0x00243414
    // 0x0025E6D0: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_00243414(rdram, ctx);
        goto after_0;
    // 0x0025E6D0: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_0:
L_0025E6D4:
    // 0x0025E6D4: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x0025E6D8: jr          $ra
    // 0x0025E6DC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0025E6DC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
